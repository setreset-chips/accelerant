// Implementation of one PE in the Accelerant Mesh

module PE (
           // Global clock (everything is based on one clock sadly)
           input logic         clk,
           // Switch input/out
           input logic         reset,
           input logic         load,
           input logic [3:0]   instruction,
           input logic [31:0]  a,
           input logic [31:0]  b,
           input logic [31:0]  c,
           input logic [31:0]  systolic_a,
           input logic [31:0]  systolic_b,
           output logic [31:0]  systolic_out,
           output logic        ready,
           input logic [31:0]  internal_data_in, // data sent by the switch during programming phase
           output logic [31:0] out_to_switch
           );

   // Used for Systolic FMA
   logic [31:0] internal_register;
   logic [3:0]  configuration;
   logic        internal_ready;
   


   // Units:
   // 0. Fadd
   // 1. FMul
   // 2. FMA

   // Instructions:
   // 0 000 -> Fadd
   // 0 001 -> Fmul
   // 1 010 -> Systolic FMA
   // 0 011 -> Regular FMA
   
// To implement:
   // 3. FSUB
   // 4. Finv
   // 5. FReLU
   // 6. Fsqrt
   // 7. FLn
   // 8. FLT
   // 9. FLE
   // 10. FEQ
   // 11. Systolic FMA
   
   logic [31:0]       a_input_pins[5:0];
   logic [31:0]       b_input_pins[5:0];
   logic [31:0]       c_input_pins[5:0];
   logic [31:0]       out_pins[5:0];
   logic [31:0]       prev_out;
   
   


   fadd fadd(a_input_pins[0], b_input_pins[0], out_pins[0]);
   fmul fmul(a_input_pins[1], b_input_pins[1], out_pins[1]);
   FMA systolic_fma(systolic_a, internal_register, systolic_b, systolic_out, ready);
   FMA fma(a_input_pins[3], b_input_pins[3], c_input_pins[3], out_pins[3]);

   always @(posedge clk) begin
      if(reset) begin
         configuration <= 0;
         internal_register <= 0;
      end
      else if(load) begin
         if(instruction != 4'b0010) begin
            configuration <= instruction;
         end
         internal_register <= internal_data_in;
      end
      else begin
         if(!configuration[3]) begin
            a_input_pins[configuration[2:0]] <= a;
            b_input_pins[configuration[2:0]] <= b;
            c_input_pins[configuration[2:0]] <= c;
            out_to_switch <= out_pins[configuration[2:0]];
         end
      end
   end
endmodule; // PE


           
