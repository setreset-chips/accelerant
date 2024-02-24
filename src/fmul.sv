module fmul (
	input logic [31:0] num1,
	input logic [31:0] num2,
	output logic [31:0] out_mul
);
	
	logic sign;
	logic [7:0] expF;
	logic [22:0] mantissa;
	logic [23:0] mantissa1, mantissa2;
	logic [47:0] mantissaProd;
	assign mantissa1 = {1'b1, num1[22:0]};
	assign mantissa2 = {1'b1, num2[22:0]};
	assign sign = num1[31] ^ num2[31];
	
	int i;
	
	always_comb begin
		mantissaProd = mantissa1*mantissa2;
		expF = (num1[30:23] + num2[30:23]) - 8'h7F;
		mantissa = mantissaProd[47:25];
		i = 0;
		for (i = 0; i < 23; i++) begin //do this routine a max of 23 times in case the answer is zero
			if (mantissa[22] == 1'b1) begin // if we have encountered a one we are done bc we can make the final silent bit
				i = 23; 
			end
			else begin // if we haven't encountered a one then we have to continue left shifting to find a one for the silent bit.
				mantissa = mantissa << 1;
				mantissa[0] = mantissaProd[24];
				mantissaProd = mantissaProd << 1;
				expF = expF-1;
			end
		end
		mantissa = mantissa << 1;
		expF = expF+1;
		mantissa[0] = mantissaProd[24];
		
		out_mul = {sign, expF, mantissa};
	end

endmodule
