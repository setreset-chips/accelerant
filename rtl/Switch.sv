// North, East, South, West as inputs (each with 128 bits)


               /*
                North
           West        East
                South
                
                */


// Configuration is XY routed
// Need data pins to be bidirectional
module Switch (
               input logic          clk,
               input logic          reset,
               input logic          load,
               input logic          configuration_mux, // 1 -> n, 0 -> w
               input logic [127:0]  i_north_config,
               input logic [127:0]  i_west_config,
               output logic [127:0] o_south_config,
               output logic [127:0] o_east_config,
               output logic         next_configuration_mux);

   /*
    24 bit configuration (max of 12x12 mesh)
    4 bit designation (2 for port sampler + 2 for output designator)
    4 bit for instruction opcode
    32 bit A (bfloat16)
    32 bit B (bfloat16)
    32 bit C/Systolic Weight
    */
   logic [127:0] packet; // 128 bit packet for configuration
   logic [1:0]   data_port_sampler; // 2 bit port sampler
   logic [1:0]   data_out_designator; // 2 bit output designator
   logic [3:0]   instruction; // 4 bit instruction

   /*
    South = 0
    East = 1
    North = 2
    West = 3
    */
   logic [31:0]  a;
   logic [31:0]  b;
   logic [31:0]  c;
   logic [31:0]  systolic_weight;
   logic [31:0]  out;

   always @(posedge clk) begin
      if (reset) begin
         packet <= 0;
      end
      
      if(load) begin // Make sure you are allowed to change the config
         packet <= (configuration_mux) ? i_west_config : i_north_config;
         if(packet[127] && |(packet[126:104]) == 0) begin
            data_port_sampler <= packet[103:102];
            data_out_designator <= packet[101:100];
            instruction <= packet[99:96];
            a <= packet[95:64];
            b <= packet[63:32];
            if(instruction == 4'b0010) c <= packet[31:0];
            else systolic_weight <= packet[31:0];
         end
         else begin
            next_configuration_mux <= packet[127];
            if(packet[127]) o_east_config <= {packet[127:104] << 1, packet[103:0]};
            else o_south_config <= {packet[127:104] << 1, packet[103:0]};
         end
      end
   end
endmodule; // Switch

