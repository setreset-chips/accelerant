module fadd (
	input logic [31:0] num1,
	input logic [31:0] num2,
	output logic [31:0] out_num
);
	logic largerMag, finalSign;
	logic [7:0] num1Exp, num2Exp, finalExp;
	logic [23:0] num1Mant, num2Mant, finalMant;
	logic [24:0] sumMants;
	int i;
	 
	
	always_comb begin
		finalSign = 1'b0;
		largerMag = 1'b0;
   		num1Exp = num1[30:23]; //mul
   		num2Exp = num2[30:23]; //add
   		num1Mant = {1'b1, num1[22:0]};
   		num2Mant = {1'b1, num2[22:0]};
      
   		if(num1Exp < num2Exp) begin
   			finalExp = num2Exp;
  	 		num1Mant = num1Mant >> (finalExp - num2Exp);
  	 		largerMag = 1'b1;
  	 	end else if (num2Exp < num1Exp) begin
   			finalExp = num1Exp;
   			num2Mant = num2Mant >> (finalExp - num2Exp);
   			largerMag = 1'b0;
   		end else begin
   			finalExp = num1Exp;
   			if (num2Mant > num1Mant) begin
   				largerMag = 1'b1;
   			end else begin
   				largerMag = 1'b0;
   			end
  	 	end
   	
  	 	if ((num1[31] == 1'b1) && (num2[31] == 1'b1)) begin // two positive so add
   			sumMants = num2Mant + num1Mant;
   			finalSign = 1'b0;
   		
   			finalMant = sumMants[24:1];
   	   		finalExp = finalExp+1;
  	 	end else if ((num1[31] == 1'b1) && (num2[31] == 1'b0)) begin
  	 		sumMants = num1Mant - num2Mant;
  	 		finalSign = largerMag ? 1'b1 : 1'b0;
  	 		
  	 		finalMant = sumMants[23:0];
  	 		finalMant = sumMants[24] ? finalMant * -1 : finalMant;
  	 	end else if ((num1[31] == 1'b0) && (num2[31] == 1'b1)) begin
  	 		sumMants = num2Mant - num1Mant;
  	 		finalSign = largerMag ? 1'b0 : 1'b1;
   		
  	 		finalMant = sumMants[23:0];
  	 		finalMant = sumMants[24] ? finalMant * -1 : finalMant;
  	 	end else begin
  	 		sumMants = num2Mant + num1Mant;
  	 		finalSign = 1'b1;
  	 		
  	 		finalMant = sumMants[24:1];
  	 		finalExp = finalExp+1;
  	 	end
   	
  	 	//sumMants = addMant + mulMant; //have to change sign instead of two's complementing
  	 	
//	   	$display("%b", sumMants);
   	
  	 	for (i = 0; i < 23; i++) begin //do this routine a max of 23 times in case the answer is zero
			if (finalMant[23] == 1'b1) begin // if we have encountered a one we are done bc we can make the final silent bit
				i = 23; 
			end
			else begin // if we haven't encountered a one then we have to continue left shifting to find a one for the silent bit.
				finalMant = finalMant << 1;
				finalExp = finalExp - 1;
//				$display("shifted left");
			end
  	   	end
  	   	finalMant = finalMant << 1;
  	   	//finalExp = finalExp - 1;
  	      //"rounding" denormalized values like 1e-34 (which is returned for some 0+n computations, down to zero
  	      if(num1 == 0 && num2Exp == 0) begin
  	         finalMant = 24'b0;
  	         finalExp = 8'b0;
  	      end	
	end
	
	assign out_num = {~finalSign, finalExp, finalMant[23:1]}; //need to do sign bit stuff
	
endmodule
