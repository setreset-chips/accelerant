//TODO: Instead of sampling from 1 and writing to 3, use port sampler and out_data flag
module Mesh (
             input logic         clk,
             input logic         reset,
             input logic         load,
             input logic [47:0]  configuration_program[3:0],
             input logic [31:0]  in_data[3:0][2:0],
             output logic [31:0] out);
   
   logic [47:0] config_wires [3:0][3:0];
   logic [1:0]  input_flags [3:0];
   logic [31:0] datapath_wires [3:0][3:0][2:0];
   logic [31:0] out_datas[3:0][3:0];
   
   
   
   assign config_wires[0] = configuration_program;
   assign input_flags[0] = 2'b11;
   assign datapath_wires[0][3] = in_data[0];
//   assign datapath_wires[1][3] = {in_data[1][1], in_data[1][2],out_datas[0][1]};
  
   
   assign out = out_datas[3][1];
   
  


   generate
      genvar i;
      for(i = 0; i < 3; i++)  begin
         Switch s(.clk(clk),
                  .reset(reset),
                  .load(load),
                  .in_flag(input_flags[i] + 2),
                  .in_data(datapath_wires[i]),
                  .in_config(config_wires[i]),
                  .out_config(config_wires[i+1]),
                  .out_data(out_datas[i]),
                  .next_input_flag(input_flags[i+1]));
         if(i > 0) begin
            assign datapath_wires[i][3][0] = out_datas[i-1][1];
            assign datapath_wires[i][3][1] = in_data[i][1];
            assign datapath_wires[i][3][2] = in_data[i][2];
         end
         
      end
   Switch s4(.clk(clk),
             .reset(reset),
             .load(load),
             .in_data(datapath_wires[3]),
             .in_flag(input_flags[3] + 2),
             .in_config(config_wires[3]),
             .out_data(out_datas[3]));
      
            assign datapath_wires[3][3][0] = out_datas[2][1];
            assign datapath_wires[3][3][1] = in_data[3][1];
            assign datapath_wires[3][3][2] = in_data[3][2];
//      assign datapath_wires[3][3] = {in_data[3][1], out_datas[2][1] , in_data[3][2]};
      
      
   endgenerate;
endmodule; // Mesh

             
             
