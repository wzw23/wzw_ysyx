//`include "hong.v"
`define alu_length 17
//module exe(input clk,input rst,input [63:0]imm,input [4:0]rs1,input[4:0]rs2,input[4:0]rd,input [3:0] sel_alu_src1,input [2:0] sel_alu_src2,input [`alu_length-1:0]alu_control,[>input rf_wen,input [63:0]wdata,<]output [63:0]alu_result,output [63:0]ram_addr,input [63:0]src1,output [2:0]alu_equal,input [63:0]cpupc,input w_choose,input [63:0]src2,input c_wchoose,input c_wen,input [1:0]c_raddr,input [1:0]c_waddr,output [63:0]c_rdata,input [2:0]e_inst,input c_wen1_2);
module exe(input clk,input rst,input [63:0]imm,input [3:0] sel_alu_src1,input [2:0] sel_alu_src2,input [`alu_length-1:0]alu_control,output [63:0]alu_result,output [63:0]ram_addr,input [63:0]src1,input [63:0]cpupc,input w_choose,input [63:0]src2,input [11:0]e_j_b_inst,input [63:0]c_rdata,output [63:0]dnpc_jump_data,input wb_reg_finish,output alu_finish,input pipe2_valid);
	//wire [63:0]src1;
	//wire [63:0]src2;
	wire [2:0]alu_equal;
	reg [63:0]alu_src1;
	reg [63:0]alu_src2;



	MuxKey #(4,4,64) mux1(alu_src1,sel_alu_src1,{//alu_src1赋值
		4'b0001,src1,
		4'b0010,cpupc,
		4'b0100,{{32'b0},src1[31:0]},
		4'b1000,{{32{src1[31]}},src1[31:0]}
		});


	MuxKey #(3,3,64) mux2(alu_src2,sel_alu_src2,{//alu_src2赋值
		3'b001,src2,
		3'b010,imm,
		3'b100,64'd4
		});

 /* wire [63:0]wdata;*/
	/*MuxKey #(2,1,64) mux3(wdata,sel_rf_res,{//alu_src2赋值*/
		/*1'b0,alu_result,*/
		/*1'b1,imm*/
		/*});*/

 	/*RegisterFile2 #(5,64) r0 (.clk(clk),.rst(rst),.wen(rf_wen),.wdata(wdata),.waddr(rd),.raddr1(rs1),.raddr2(rs2),.rdata1(src1),.rdata2(src2),.c_raddr(c_raddr),.c_rdata(c_rdata),.c_wdata(c_wdata),.c_waddr(c_waddr),.c_wen(c_wen),.c_wen1_2(c_wen1_2),.c_wdata1(cpupc),.c_waddr1(2'd2),.c_wdata2(64'd11),.c_waddr2(2'd3));*/

	//Alu2 alu2(alu_src1,alu_src2,alu_control,alu_result,ram_addr,alu_equal,w_choose);
	Alu3 alu3(clk,rst,alu_src1,alu_src2,alu_control,alu_result,ram_addr,alu_equal,w_choose,wb_reg_finish,alu_finish,pipe2_valid);
	set_dnpc set_dnpc_0(.clk(clk),.rst(rst),.e_j_b_inst(e_j_b_inst),.src1(src1),.imm(imm),.cpupc(cpupc),.c_rdata(c_rdata),.alu_equal(alu_equal),.dnpc_jump_data(dnpc_jump_data));

endmodule
