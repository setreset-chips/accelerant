// Are on the left and the top of the Mesh. Connect data pins to the north AND the west, and connect configuration pins to the north OR the west

// basically just flip flops


module InputInterface(
                      input logic         clk,
                      input logic         reset,
                      input logic         load,
                      input logic         dir,
                      input logic [31:0]  data_input_1,
                      input logic [31:0]  data_input_2,
                      input logic [63:0]  configuration_input,
                      input logic         systolic,
                      output logic        done,
                      output logic [31:0] data_output_north,
                      output logic [31:0] data_output_west,
                      output logic [63:0] configuration_output
);
   logic second;
   
   always_ff @(posedge clk) begin
      if (reset) begin
         data_output_north <= 0;
         data_output_west <= 0;
         configuration_output <= 0;
      end
      if (!load) begin
         if(systolic) begin
         end
         else begin
         // 1 -> west
            if(dir) begin
               if(!second) begin
                  data_output_west <= data_input_1;
                  second <= 1;
               end
               else if (second) begin
                  data_output_west <= data_input_2;
                  done <= 1;
               end
            end
            // 0 -> north
            else begin
               if(!done) begin
                  data_output_north <= data_input_1;
               end
               else if (done) begin
                  data_output_north <= data_input_2;
               end
            end
         end
         configuration_output <= configuration_input;
      end
   end
   
endmodule; // InputInterface
