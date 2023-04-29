module pre_decode(input clk,input rst,input [31:0]inst,output [11:0]e_j_b_inst,output not_jump);
	wire [6:0]op;
	wire	 [2:0]fu_3;
	//wire [6:0]fu_7;
	assign op =inst[6:0];
	//assign fu_7=inst[31:25];
	assign fu_3=inst[14:12];
	wire jal;
	assign jal=(op==7'b1101111);

	wire jalr;
	assign jalr=(fu_3==3'b000)&((op==7'b1100111));

	wire beq;
	assign beq=(fu_3==3'b000)&((op==7'b1100011));

	wire bne;
	assign bne=(fu_3==3'b001)&((op==7'b1100011));

	wire bge;
	assign bge=(fu_3==3'b101)&((op==7'b1100011));

	wire bgeu;
	assign bgeu=(fu_3==3'b111)&((op==7'b1100011));

	wire bltu;
	assign bltu=(fu_3==3'b110)&((op==7'b1100011));

  wire blt;
  assign blt= (fu_3==3'b100) &((op==7'b1100011));



//	assign op_d[2]= (op==7'b1101111);//type_j
//		assign op_d[3]= (op==7'b1100111);//type_i

	assign e_j_b_inst=(inst==32'b0000000_00001_00000_000_00000_11100_11)?12'b000000000001://ebreak0
	                      	(inst==32'b00000000000000000000000001110011)?12'b000000000010://edall1
	                      	(inst==32'b00110000001000000000000001110011)?12'b000000000100://mret2
													                                         jal?12'b000000001000://3
																																  jalr?12'b000000010000://4
																																	 beq?12'b000000100000://5
																																	 bne?12'b000001000000://6
																																	 bge?12'b000010000000://7
																																	bgeu?12'b000100000000://8
																																	bltu?12'b001000000000://9
																																	 blt?12'b010000000000://10
	                      	                                             12'b100000000000;//11
 assign not_jump=e_j_b_inst[11]|e_j_b_inst[0];
endmodule
