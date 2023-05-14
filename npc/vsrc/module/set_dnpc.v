module set_dnpc(input clk,input rst,input [11:0]e_j_b_inst,input [63:0]src1,input [63:0]imm,input [63:0]cpupc,input[63:0]c_rdata,input [2:0]alu_equal,output [63:0]dnpc_jump_data);
	wire jal;
	assign jal=e_j_b_inst[3];

	wire jalr;
	assign jalr=e_j_b_inst[4];


	wire beq;
	assign beq=e_j_b_inst[5];

	wire bne;
	assign bne=e_j_b_inst[6];

	wire bge;
	assign bge=e_j_b_inst[7];

	wire bgeu;
	assign bgeu=e_j_b_inst[8];

	wire bltu;
	assign bltu=e_j_b_inst[9];

  wire blt;
  assign blt=e_j_b_inst[10];


	wire [1:0]sel_nextpc;
	assign sel_nextpc=({2{{beq&alu_equal[0]}|{bne&(!alu_equal[0])}|jal|{bltu&(alu_equal[1])}|{blt&(alu_equal[2])}|{bgeu&{(~alu_equal[1])|(alu_equal[0])}}|{bge&{(~alu_equal[2])|alu_equal[0]}}}}&2'b01)
					|					({2{jalr}}&2'b10)
					|					({2{e_j_b_inst[1]|e_j_b_inst[2]}}&2'b11)
					;
	MuxKey #(4,2,64) mux4(dnpc_jump_data,sel_nextpc,{//alu_src2赋值
  2'b00,cpupc+4,
	2'b01,cpupc+imm,
	2'b10,(src1+imm)&~1,
	2'b11,c_rdata
	});
endmodule
