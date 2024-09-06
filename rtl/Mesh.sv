module Mesh (
             input logic        clk,
             input logic        reset,
             input logic        load,
             input logic [63:0] map_instructions [3:0][3:0],
             input logic [31:0] loads [3:0][1:0],     // coarse scalar inputs
             input logic [31:0] sys_loads [3:0][3:0], // systolic inputs
             input logic [3:0]  known_instruction // Could be systolic
             );


   logic [63:0] configuration_vector_port [3:0];
   logic inputs_done[3:0];
   logic [63:0] i_conf_switch[3:0];
   logic [31:0] i_data_switch [3:0];
   // Fill in the configuration vector port with the map instructions
   logic [3:0]  inst_ptr;
   logic        start;
   
   
   
   // Load instructions in ere
   always @(posedge clk) begin
      if(inst_ptr < 4) begin
         configuration_vector_port[0] <= map_instructions[0][inst_ptr];
         configuration_vector_port[1] <= map_instructions[1][inst_ptr];
         configuration_vector_port[2] <= map_instructions[2][inst_ptr];
         configuration_vector_port[3] <= map_instructions[3][inst_ptr];
         inst_ptr <= inst_ptr + 1;
      end
   end
   generate
      genvar i;
      for(i = 0; i < 4; i++) begin
         InputInterface ini(.clk(clk),
                            .reset(reset),
                            .load(load),
                            .dir(1),
                            .delay_row((2 ** i)),
                            .systolic(known_instruction == 4'b0001),//for testing purposes only
                            .configuration_input(configuration_vector_port[i]),
                            .configuration_output(i_conf_switch[i]),
                            .data_input_1(loads[i][0]),
                            .data_input_2(loads[i][1]),
                            .systolic_inputs(sys_loads[i]),
                            .data_output_west(i_data_switch[i]),
                            .done(inputs_done[i]));
      end
   endgenerate;
   // Has to be packed, because verilator doesn't allow selection from unpacked arrays to bidirectional (tristate) ports.
   logic [3:0][31:0] switch_in;
   // Interconnection wires between the switches:
//   logic [3:0][3:0][31:0] w_north;
//   logic [3:0][3:0][31:0] w_south;

   logic [3:0][3:0][31:0] w_e_switch_interconnects;
  // logic [3:0][3:0][31:0] n_s_switch_interconnects;
   logic [3:0][4:0][31:0]      n_s_switch_interconnects;
   
   //Fixes:
   // 1. Pass configurations through
   // 2. Come up with the configuration for systolic
   // 3. Program!
   logic [63:0] configuration_interconnects [3:0][3:0];
   // Only use the configuration_interconnects
   assign configuration_interconnects[0][0] = i_conf_switch[0];
   assign configuration_interconnects[1][0] = i_conf_switch[1];
   assign configuration_interconnects[2][0] = i_conf_switch[2];
   assign configuration_interconnects[3][0] = i_conf_switch[3];
   
   generate
      genvar j;
      genvar p_j;
      for(j = 0; j < 4; j++) begin
         
         assign switch_in[j] = i_data_switch[j];
         Switch si(.clk(clk),
                   .reset(reset),
                   .load(load),
                   .systolic(known_instruction == 1),
                   .configuration_mux(1),
                   .west(switch_in[j]),
                   .east(w_e_switch_interconnects[j][0]),
                   .north(n_s_switch_interconnects[0][j]),
                   .south(n_s_switch_interconnects[0][j + 1]),
                   .edge_trigger(inputs_done[j]),
                   .i_west_config(configuration_interconnects[j][0]),
                   .o_east_config(configuration_interconnects[j][1]));
         
      end
      genvar k;
      for(k = 0; k < 4; k++) begin
         Switch si(.clk(clk),
                   .reset(reset),
                   .load(load),
                   .systolic(known_instruction == 1),
                   .configuration_mux(1),
                   .west(w_e_switch_interconnects[k][0]),
                   .east(w_e_switch_interconnects[k][1]),
                   .north(n_s_switch_interconnects[1][k]),
                   .south(n_s_switch_interconnects[1][k+1]),
                   .edge_trigger(inputs_done[k]),
                   .i_west_config(configuration_interconnects[k][1]),
                   .o_east_config(configuration_interconnects[k][2]));
         
      end
      genvar l;
      for(l = 0; l < 4; l++) begin
         Switch si(.clk(clk),
                   .reset(reset),
                   .load(load),
                   .systolic(known_instruction == 1),
                   .configuration_mux(1),
                   .west(w_e_switch_interconnects[l][1]),
                   .east(w_e_switch_interconnects[l][2]),
                   .north(n_s_switch_interconnects[2][l]),
                   .south(n_s_switch_interconnects[2][l+1]),
                   .edge_trigger(inputs_done[l]),
                   .i_west_config(configuration_interconnects[l][2]),
                   .o_east_config(configuration_interconnects[l][3]));
         
      end
      genvar m;
      
      for(m = 0; m < 4; m++) begin
         Switch si(.clk(clk),
                   .reset(reset),
                   .load(load),
                   .systolic(known_instruction == 1),
                   .configuration_mux(1),
                   .west(w_e_switch_interconnects[m][2]),
                   .north(n_s_switch_interconnects[3][m]),
                   .south(n_s_switch_interconnects[3][m+1]),
                   .edge_trigger(inputs_done[m]),
                   .i_west_config(configuration_interconnects[m][3]));
      end
      
   endgenerate;
endmodule; // Mesh

   
