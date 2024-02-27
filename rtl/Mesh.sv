module Mesh (
             input logic         clk,
             input logic         reset,
             input logic         load,
             input logic [127:0] configuration [15:0]]);
   always_comb
     begin
        $display(configuration);
     end
   
   
endmodule; // Mesh

   
