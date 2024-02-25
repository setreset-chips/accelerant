// Implementation of the switch

// 4x4 (max 7)
// 8 bit routing sequence
// 2 bit port sampler
// 2 bit port out designator
// 4 bit instruction
// 32 bit data input


// total of 48 bits

// Switch instruction:
// 1. Passthrough
// 2. Send to FU

module Switch (
               input logic         clk,
               input logic         reset,
               input logic         load,
               input logic [1:0]   in_flag,

               input logic [31:0]  in_data [3:0][2:0],
               input logic [47:0]  in_config[3:0],

               output logic [47:0] out_config[3:0],
               output logic [31:0] out_data [3:0],
               output logic [1:0]  next_input_flag,

);

   /*
    South = 0
    East = 1
    North = 2
    West = 3
    */

   logic [1:0] port_sampler;
   logic [1:0] out_designator;
   logic [3:0] instruction;
   logic [1:0] out_dir;
   logic [47:0] packet;
   
   logic [31:0] abc [2:0];
   logic [31:0] out;
   
   
   logic [31:0] internal_register_input;
   PE corresponding_pe(.clk(clk),
                       .reset(reset),
                       .load(load),
                       .instruction(instruction),
                       .a(abc[0]),
                       .b(abc[1]),
                       .c(abc[2]),
                       .out_to_switch(out),
                       .internal_data_in(internal_register_input));

   always @(posedge clk) begin
      if (load) begin
         packet <= in_config[in_flag];
         if(packet[47:40] == 8'b10000000) begin
            port_sampler <= packet[39:38];
            out_designator <= packet[37:36];
            instruction <= packet[35:32];
            internal_register_input  <= packet[31:0];
         end
         else begin
            out_dir <= {1'b0, packet[47]};
            out_config[out_dir] <= {packet[47:40] << 1, packet[39:0]};
            //HACK: Change
            if(out_dir != 0) next_input_flag <= out_dir + 2;
         end
      end

      else begin
         abc <= in_data[port_sampler];
         out_data[out_designator] <= out;
      end // else: !if(load)
      
   end // always @ (posedge clk)
   
   

   


   

endmodule; // Switch
