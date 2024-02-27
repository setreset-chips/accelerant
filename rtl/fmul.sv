module fmul (
	input logic [31:0] num1,
	input logic [31:0] num2,
	output logic [31:0] out_mul
);
	
	logic sign;
	logic [7:0] expF;
	logic [23:0] mantissa;
	logic [23:0] mantissa1, mantissa2;
	logic [47:0] mantissaProd;
	assign mantissa1 = (num1 == 32'b0) ? 24'b0 : {1'b1, num1[22:0]};
	assign mantissa2 = (num2 == 32'b0) ? 24'b0 : {1'b1, num2[22:0]};
	assign sign = num1[31] ^ num2[31];
	
	int i;
	
	always_comb begin
		mantissaProd = mantissa1*mantissa2;
		expF = (num1[30:23] + num2[30:23]) - 8'h7F;
		mantissa = mantissaProd[47:24];
		i = 0;
		
		if (mantissa[23]) begin
			mantissa = mantissa << 1;
		 end else	
		if (mantissa[22]) begin
			mantissa = mantissa << 2;
			expF = expF - 1;
		
		end else if (mantissa[21]) begin
			mantissa = mantissa << 3;
			expF = expF - 2;
		end else if (mantissa[20]) begin
			mantissa = mantissa << 4;
			expF = expF - 3;
		
		end else if (mantissa[19]) begin
			mantissa = mantissa << 5;
			expF = expF - 4;
		
		end else if (mantissa[18]) begin
			mantissa = mantissa << 6;
			expF = expF - 5;
		
		end else if (mantissa[17]) begin
			mantissa = mantissa << 7;
			expF = expF - 6;
		
		end else if (mantissa[16]) begin
			mantissa = mantissa << 8;
			expF = expF - 7;
		
		end else if (mantissa[15]) begin
			mantissa = mantissa << 9;
			expF = expF - 8;
		
		end else if (mantissa[14]) begin
			mantissa = mantissa << 10;
			expF = expF - 9;
		
		end else if (mantissa[13]) begin
			mantissa = mantissa << 11;
			expF = expF - 10;
		
		end else if (mantissa[12]) begin
			mantissa = mantissa << 12;
			expF = expF - 11;
		
		end else if (mantissa[11]) begin
			mantissa = mantissa << 13;
			expF = expF - 12;
		
		end else if (mantissa[10]) begin
			mantissa = mantissa << 14;
			expF = expF - 13;
		
		end else if (mantissa[9]) begin
			mantissa = mantissa << 15;
			expF = expF - 14;
		
		end else if (mantissa[8]) begin
			mantissa = mantissa << 16;
			expF = expF - 15;
		
		end else if (mantissa[7]) begin
			mantissa = mantissa << 17;
			expF = expF - 16;
		
		end else if (mantissa[6]) begin
			mantissa = mantissa << 18;
			expF = expF - 17;
		
		end else if (mantissa[5]) begin
			mantissa = mantissa << 19;
			expF = expF - 18;
		
		end else if (mantissa[4]) begin
			mantissa = mantissa << 20;
			expF = expF - 19;
		
		end else if (mantissa[3]) begin
			mantissa = mantissa << 21;
			expF = expF - 20;
		
		end else if (mantissa[2]) begin
			mantissa = mantissa << 22;
			expF = expF - 21;
		
		end else if (mantissa[1]) begin
			mantissa = mantissa << 23;
			expF = expF - 22;
		end
		else begin
			expF = 8'b11111111;
		end
		expF = expF + 1;
		//mantissa = mantissa >> 1;
		//expF = expF+1;
		
		out_mul = {sign, expF, mantissa[23:1]};
	end

endmodule
