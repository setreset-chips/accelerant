// North, East, South, West as inputs (each with 128 bits)


               /*
                North
           West        East
                South
                
                */


// Configuration is XY routed
// Need data pins to be bidirectional
// Switches can only be programmed to do one instruction, but can send their output in different pin directions. If you want to do different operations on the same input, you have to program two PE's to do it.
module Switch (
               input logic         clk,
               input logic         reset,
               input logic         load,
               input logic         configuration_mux, // 1 -> n, 0 -> w
               input logic [63:0]  i_north_config,
               input logic [63:0]  i_west_config,
               output logic [63:0] o_south_config,
               output logic [63:0] o_east_config,
               input logic         edge_trigger,
               input logic         systolic,
               inout [31:0]        south,
               inout [31:0]        east,
               inout [31:0]        north,
               inout [31:0]        west,
               output logic        next_configuration_mux);

   /*
    20 bit configuration
    8 bit designation (4 for port sampler + 4 for output designator)
    4 bit for instruction opcode
    32 bit internal data
    */
   logic [63:0] packet; // 64 bit packet for configuration
   logic [3:0]  data_port_sampler; // 4 bit port sampler
   logic [3:0]  data_out_designator; // 4 bit output designator
   logic [3:0]  instruction; // 4 bit instruction
   logic [31:0] input_buffers [3:0];

   logic [31:0]  internal;
   logic [31:0]  out;
   logic [31:0]  pe_inputs [2:0];
   
   
   int           i;
   int           pe_pin_counter;
   
   PE corresponding_pe(.clk(clk),
                       .reset(reset),
                       .load(load),
                       .instruction(instruction),
                       .a(pe_inputs[0]),
                       .b(pe_inputs[1]),
                       .c(pe_inputs[2]),
      // Nasty! Let's re-work please
                       .systolic_a(west),
                       .systolic_b(north),
                       .systolic_out(south),
      // end nasty
                       .out_to_switch(out),
                       .internal_data_in(internal),
                       .ready(ready));
   logic west_edge_pe;
   logic north_edge_pe;
   logic [31:0] east_non_systolic;
   logic [31:0] east_systolic;
   logic [31:0] south_non_systolic;
   logic [31:0] south_systolic;
   
   
   assign west_edge_pe = (&(data_port_sampler) & &(data_out_designator));
   assign north_edge_pe = (!(&(data_port_sampler)) & &(data_out_designator));

   // If it is a edge PE, it always takes from north/west and gives to east/south
   assign north = (data_out_designator[2] & !(west_edge_pe | north_edge_pe)) ? out : 'z;
   
   assign west = (data_out_designator[3] & !(west_edge_pe | north_edge_pe)) ? out : 'z;
   
   assign east = (systolic) ? input_buffers[3] :  ((data_out_designator[1] | west_edge_pe) ? out : 'z);

   assign south = (data_out_designator[0] | north_edge_pe | systolic) ? out : 'z;
   
   

   
   
   always @(posedge clk) begin
      if (reset) begin
         packet <= 0;
      end
      input_buffers[0] <= (data_port_sampler[0] & !(west_edge_pe | north_edge_pe)) ? south : 0;
      input_buffers[1] <= (data_port_sampler[1] & !(west_edge_pe | north_edge_pe)) ? east : 0;
      input_buffers[2] <= (data_port_sampler[2] | north_edge_pe) ? north : 0;
      input_buffers[3] <= (data_port_sampler[3] | west_edge_pe) ? west : 0;
      
      if(load) begin // Make sure you are allowed to change the config
         packet <= (configuration_mux) ? i_west_config : i_north_config;
         if(packet[63] && |(packet[62:44]) == 0) begin
            data_port_sampler <= packet[43:40];
            data_out_designator <= packet[39:36];
            instruction <= packet[35:32];
            internal <= packet[31:0];
            
         end
         else begin
            next_configuration_mux <= packet[63];
            if(packet[63]) o_east_config <= {packet[63:44] << 1, packet[43:0]};
            else o_south_config <= {packet[63:44] << 1, packet[43:0]};
         end
      end
   /*
    South = 0
    East = 1
    North = 2
    West = 3
    */
      else begin
         pe_pin_counter <= 0;
         if(west_edge_pe) begin
            // have to read west 2 times
            if(!edge_trigger) begin
               pe_inputs[0] <= west;
            end
            else begin
               pe_inputs[1] <= west;
            end
         end
         else if (north_edge_pe) begin
            if (!edge_trigger) begin
               pe_inputs[0] <= north;
            end
            else begin
               pe_inputs[1] <= north;
            end
            
         end
         else if(!systolic) begin
            // Otherwise, do this:
            for(i = 0; i < 4; i++) begin
               if(|((data_port_sampler >> i) & 4'b0001)) begin
                  pe_inputs[pe_pin_counter] <= input_buffers[i];
                  pe_pin_counter <= pe_pin_counter + 1; // has to be blocking (L)
               end
            end
         end
      end
   end
endmodule; // Switch

