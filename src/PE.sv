   // 3. FSUB
   // 4. Finv
   // 5. FReLU
   // 6. Fsqrt
   // 7. FLn
   // 8. FLT
   // 9. FLE
   // 10. FEQ
   // 11. Systolic FMA
   
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
           input logic [31:0]  internal_data_in, // data sent by the switch during programming phase
           output logic [31:0] out_to_switch
           );

   // Used for Systolic FMA
   logic [31:0] internal_register;
   logic [3:0]  configuration;


   // Units:
   // 0. Fadd
   // 1. FMul
   // 2. FMA

   // Instructions:
   // 0 000 -> Fadd
   // 0 001 -> Fmul
   // 1 010 -> Systolic FMA
   // 0 011 -> Regular FMA

   logic [31:0]       a_input_pins[5:0];
   logic [31:0]       b_input_pins[5:0];
   logic [31:0]       c_input_pins[5:0];
   logic [31:0]       out_pins[5:0];
   


   fadd fa(a_input_pins[0], b_input_pins[0], out_pins[0]);
   fmul fm(a_input_pins[1], b_input_pins[1], out_pins[1]);
   FMA systolic_fma(a_input_pins[2], b_input_pins[2], c_input_pins[2], out_pins[2]);
   FMA fma2(a_input_pins[3], b_input_pins[3], c_input_pins[3], out_pins[3]);

   always @(posedge clk) begin
      if(reset) begin
         configuration <= 0;
         internal_register <= 0;
      end
      else if(load) begin
         configuration <= instruction;
         internal_register <= internal_data_in;
      end
      else begin
         a_input_pins[instruction[2:0]] <= a;
         if (instruction[3]) begin
            b_input_pins[instruction[2:0]] <= internal_register;
         end
         else b_input_pins[instruction[2:0]] <= b;
         c_input_pins[instruction[2:0]] <= c;
         out_to_switch <= out_pins[instruction[2:0]];
      end
   end
   
   
   

   


endmodule; // PE


           
