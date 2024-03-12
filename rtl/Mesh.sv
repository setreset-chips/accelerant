module Mesh (
             input logic        clk,
             input logic        reset,
             input logic        load,
             input logic [63:0] configuration_vector_port [3:0], // top, left dispatch
             input logic [31:0] loads [3:0][1:0],
             );


   logic inputs_done[3:0];
   logic [63:0] i_conf_switch[3:0];
   logic [31:0] i_data_switch [3:0];

   
   generate
      genvar i;
      for(i = 0; i < 4; i++) begin
         InputInterface ini(.clk(clk),
                            .reset(reset),
                            .load(load),
                            .dir(1),
                            .configuration_input(configuration_vector_port[i]),
                            .configuration_output(i_conf_switch[i]),
                            .data_input_1(loads[i][0]),
                            .data_input_2(loads[i][1]),
                            .data_output_west(i_data_switch[i]),
                            .done(inputs_done[i]));
      end
   endgenerate;
   logic [3:0][31:0] programs;
   generate
      genvar j;
      for(j = 0; j < 4; j++) begin
//         logic [31:0] ap;
//         assign ap = i_data_switch[j];
         assign programs[j] = i_data_switch[j];
         Switch si(.clk(clk),
                   .reset(reset),
                   .load(load),
                   .configuration_mux(1),
                   .west(programs[j]),
                   .edge_trigger(inputs_done[j]),
                   .i_west_config(configuration_vector_port[0]));
      end
   endgenerate;
endmodule; // Mesh

   
