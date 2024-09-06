// Are on the left and the top of the Mesh. Connect data pins to the north AND the west, and connect configuration pins to the north OR the west

// basically just flip flops


module InputInterface(
                      input logic         clk,
                      input logic         reset,
                      input logic         load,
                      input logic         dir,
                      input logic [31:0]  data_input_1,
                      input logic [31:0]  data_input_2,
                      input logic [31:0]  systolic_inputs [3:0],
                      input logic [63:0]  configuration_input,
                      input logic         systolic,
                      input logic [3:0]   delay_row,
                      output logic        done,
                      output logic [31:0] data_output_north,
                      output logic [31:0] data_output_west,
                      output logic [63:0] configuration_output
);
   logic second;
   logic [31:0] systolic_fifo [3:0];
   logic [1:0]  read_ptr;
   logic [3:0]  delay_by;
   assign systolic_fifo = systolic_inputs;
   
   
   always_ff @(posedge clk) begin
      if (reset) begin
         data_output_north <= 0;
         data_output_west <= 0;
         configuration_output <= 0;
      end
      if(load) begin
         configuration_output <= configuration_input;
         if (systolic) begin
            delay_by <= delay_row;
         end
      end 
      else begin
         if(systolic) begin
               if(delay_by[0]) begin
                  if(read_ptr < 3) begin
                     data_output_west <= systolic_fifo[read_ptr];
                     read_ptr <= read_ptr + 1;
                  end
                  else if(read_ptr == 3) begin
                     data_output_west <= systolic_fifo[read_ptr];
                  end
               end
               else begin
                  delay_by <= delay_by >> 1;
                  data_output_west <= 0;
               end
         end
         else begin
         // Don't need to use shift registers here, can technically just use a mux system with a signal to the switch
            if(dir) begin
               // 1 -> west
               if(!second) begin
                  data_output_west <= data_input_1;
                  second <= 1;
               end
               else if (second) begin
                  data_output_west <= data_input_2;
                  done <= 1;
               end
            end
            else begin
               // 0 -> north
               if(!second) begin
                  data_output_north <= data_input_1;
                  second <= 1;
                  
               end
               else if (second) begin
                  data_output_north <= data_input_2;
                  done <= 1;
               end
            end
         end
      end
   end
   
endmodule; // InputInterface
