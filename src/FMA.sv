module FMA (
	input logic [31:0] a_fp,
	input logic [31:0] b_fp,
	input logic [31:0] c_fp,
	
	output logic [31:0] out_fp
);

	logic sign_out, largerMag;
	logic [7:0] exp_out, final_exp;
	logic [23:0] mantissa_a, mantissa_b, mantissa_c, mantissa_mul_norm, final_mantissa;
	logic [47:0] mantissa_mul_out;
	logic [24:0] sum_mants;
	
	
	always_comb begin
		mantissa_a = (a_fp == 32'b0) ? 24'b0 : {1'b1, a_fp[22:0]};
		mantissa_b = (b_fp == 32'b0) ? 24'b0 : {1'b1, b_fp[22:0]};
		mantissa_c = (c_fp == 32'b0) ? 24'b0 : {1'b1, c_fp[22:0]};
	
		sign_out = a_fp[31] ^ b_fp[31];
		exp_out = a_fp[30:23] + b_fp[30:23] - 8'h7F;
		mantissa_mul_out = mantissa_a * mantissa_b;
		mantissa_mul_norm = mantissa_mul_out[47:24];
		
		if (mantissa_mul_norm[23]) begin
			mantissa_mul_norm = mantissa_mul_norm << 1;
			
		end else if (mantissa_mul_norm[22]) begin
			mantissa_mul_norm = mantissa_mul_norm << 2;
			exp_out = exp_out - 1;
		
		end else if (mantissa_mul_norm[21]) begin
			mantissa_mul_norm = mantissa_mul_norm << 3;
			exp_out = exp_out - 2;
		end else if (mantissa_mul_norm[20]) begin
			mantissa_mul_norm = mantissa_mul_norm << 4;
			exp_out = exp_out - 3;
		
		end else if (mantissa_mul_norm[19]) begin
			mantissa_mul_norm = mantissa_mul_norm << 5;
			exp_out = exp_out - 4;
		
		end else if (mantissa_mul_norm[18]) begin
			mantissa_mul_norm = mantissa_mul_norm << 6;
			exp_out = exp_out - 5;
		
		end else if (mantissa_mul_norm[17]) begin
			mantissa_mul_norm = mantissa_mul_norm << 7;
			exp_out = exp_out - 6;
		
		end else if (mantissa_mul_norm[16]) begin
			mantissa_mul_norm = mantissa_mul_norm << 8;
			exp_out = exp_out - 7;
		
		end else if (mantissa_mul_norm[15]) begin
			mantissa_mul_norm = mantissa_mul_norm << 9;
			exp_out = exp_out - 8;
		
		end else if (mantissa_mul_norm[14]) begin
			mantissa_mul_norm = mantissa_mul_norm << 10;
			exp_out = exp_out - 9;
		
		end else if (mantissa_mul_norm[13]) begin
			mantissa_mul_norm = mantissa_mul_norm << 11;
			exp_out = exp_out - 10;
		
		end else if (mantissa_mul_norm[12]) begin
			mantissa_mul_norm = mantissa_mul_norm << 12;
			exp_out = exp_out - 11;
		
		end else if (mantissa_mul_norm[11]) begin
			mantissa_mul_norm = mantissa_mul_norm << 13;
			exp_out = exp_out - 12;
		
		end else if (mantissa_mul_norm[10]) begin
			mantissa_mul_norm = mantissa_mul_norm << 14;
			exp_out = exp_out - 13;
		
		end else if (mantissa_mul_norm[9]) begin
			mantissa_mul_norm = mantissa_mul_norm << 15;
			exp_out = exp_out - 14;
		
		end else if (mantissa_mul_norm[8]) begin
			mantissa_mul_norm = mantissa_mul_norm << 16;
			exp_out = exp_out - 15;
		
		end else if (mantissa_mul_norm[7]) begin
			mantissa_mul_norm = mantissa_mul_norm << 17;
			exp_out = exp_out - 16;
		
		end else if (mantissa_mul_norm[6]) begin
			mantissa_mul_norm = mantissa_mul_norm << 18;
			exp_out = exp_out - 17;
		
		end else if (mantissa_mul_norm[5]) begin
			mantissa_mul_norm = mantissa_mul_norm << 19;
			exp_out = exp_out - 18;
		
		end else if (mantissa_mul_norm[4]) begin
			mantissa_mul_norm = mantissa_mul_norm << 20;
			exp_out = exp_out - 19;
		
		end else if (mantissa_mul_norm[3]) begin
			mantissa_mul_norm = mantissa_mul_norm << 21;
			exp_out = exp_out - 20;
		
		end else if (mantissa_mul_norm[2]) begin
			mantissa_mul_norm = mantissa_mul_norm << 22;
			exp_out = exp_out - 21;
		
		end else if (mantissa_mul_norm[1]) begin
			mantissa_mul_norm = mantissa_mul_norm << 23;
			exp_out = exp_out - 22;
		end
		else begin
			exp_out = 8'b11111111;
		end
		exp_out = exp_out + 1;
		//out_mul = {sign_out, exp_out, mantissa_mul_norm[23:1]};
		//num1 = mul_out
		//num2 = c_fp
		// largerMag - 1: c > mul_out, 0: mul_out >= c
		mantissa_mul_norm = (a_fp == 32'b0 || b_fp == 32'b0) ? 24'b0 : {1'b1, mantissa_mul_norm[23:1]}; // reassign mantissa
		
		if(exp_out < c_fp[30:23]) begin
   			final_exp = c_fp[30:23];
  	 		mantissa_mul_norm = mantissa_mul_norm >> (final_exp - exp_out);
  	 		largerMag = 1'b1;
  	 	end else if (c_fp[30:23] < exp_out) begin
   			final_exp = exp_out;
   			mantissa_c = mantissa_c >> (final_exp - c_fp[30:23]);
   			largerMag = 1'b0;
   		end else begin
   			final_exp = exp_out;
   			if (mantissa_c > mantissa_mul_norm) begin
   				largerMag = 1'b1;
   			end else begin
   				largerMag = 1'b0;
   			end
  	 	end
		
		if ((sign_out == 1'b1) && (c_fp[31] == 1'b1)) begin // two positive so add
   			sum_mants = mantissa_c + mantissa_mul_norm;
   			sign_out = 1'b0;
   		
   			final_mantissa = sum_mants[24:1];
   	   		final_exp = final_exp+1;
  	 	end else if ((sign_out == 1'b1) && (c_fp[31] == 1'b0)) begin
  	 		sum_mants = mantissa_mul_norm - mantissa_c;
  	 		sign_out = largerMag ? 1'b1 : 1'b0;
  	 		
  	 		final_mantissa = sum_mants[23:0];
  	 		final_mantissa = sum_mants[24] ? final_mantissa * -1 : final_mantissa;
  	 	end else if ((sign_out == 1'b0) && (c_fp[31] == 1'b1)) begin
  	 		sum_mants = mantissa_c - mantissa_mul_norm;
  	 		sign_out = largerMag ? 1'b0 : 1'b1;
   		
  	 		final_mantissa = sum_mants[23:0];
  	 		final_mantissa = sum_mants[24] ? final_mantissa * -1 : final_mantissa;
  	 	end else begin
  	 		sum_mants = mantissa_c + mantissa_mul_norm;
  	 		sign_out = 1'b1;
  	 		
  	 		final_mantissa = sum_mants[24:1];
  	 		final_exp = final_exp+1;
  	 	end
  	 	
  	 	
  	 	if (final_mantissa[23]) begin
			final_mantissa = final_mantissa << 1;
			
		end else if (final_mantissa[22]) begin
			final_mantissa = final_mantissa << 2;
			final_exp = final_exp - 1;
		
		end else if (final_mantissa[21]) begin
			final_mantissa = final_mantissa << 3;
			final_exp = final_exp - 2;
		end else if (final_mantissa[20]) begin
			final_mantissa = final_mantissa << 4;
			final_exp = final_exp - 3;
		
		end else if (final_mantissa[19]) begin
			final_mantissa = final_mantissa << 5;
			final_exp = final_exp - 4;
		
		end else if (final_mantissa[18]) begin
			final_mantissa = final_mantissa << 6;
			final_exp = final_exp - 5;
		
		end else if (final_mantissa[17]) begin
			final_mantissa = final_mantissa << 7;
			final_exp = final_exp - 6;
		
		end else if (final_mantissa[16]) begin
			final_mantissa = final_mantissa << 8;
			final_exp = final_exp - 7;
		
		end else if (final_mantissa[15]) begin
			final_mantissa = final_mantissa << 9;
			final_exp = final_exp - 8;
		
		end else if (final_mantissa[14]) begin
			final_mantissa = final_mantissa << 10;
			final_exp = final_exp - 9;
		
		end else if (final_mantissa[13]) begin
			final_mantissa = final_mantissa << 11;
			final_exp = final_exp - 10;
		
		end else if (final_mantissa[12]) begin
			final_mantissa = final_mantissa << 12;
			final_exp = final_exp - 11;
		
		end else if (final_mantissa[11]) begin
			final_mantissa = final_mantissa << 13;
			final_exp = final_exp - 12;
		
		end else if (final_mantissa[10]) begin
			final_mantissa = final_mantissa << 14;
			final_exp = final_exp - 13;
		
		end else if (final_mantissa[9]) begin
			final_mantissa = final_mantissa << 15;
			final_exp = final_exp - 14;
		
		end else if (final_mantissa[8]) begin
			final_mantissa = final_mantissa << 16;
			final_exp = final_exp - 15;
		
		end else if (final_mantissa[7]) begin
			final_mantissa = final_mantissa << 17;
			final_exp = final_exp - 16;
		
		end else if (final_mantissa[6]) begin
			final_mantissa = final_mantissa << 18;
			final_exp = final_exp - 17;
		
		end else if (final_mantissa[5]) begin
			final_mantissa = final_mantissa << 19;
			final_exp = final_exp - 18;
		
		end else if (final_mantissa[4]) begin
			final_mantissa = final_mantissa << 20;
			final_exp = final_exp - 19;
		
		end else if (final_mantissa[3]) begin
			final_mantissa = final_mantissa << 21;
			final_exp = final_exp - 20;
		
		end else if (final_mantissa[2]) begin
			final_mantissa = final_mantissa << 22;
			final_exp = final_exp - 21;
		
		end else if (final_mantissa[1]) begin
			final_mantissa = final_mantissa << 23;
			final_exp = final_exp - 22;
		end
		else begin
			final_exp = final_exp - 1;
		end
	end
	
	assign out_fp = {~sign_out, final_exp, final_mantissa[23:1]};

endmodule
