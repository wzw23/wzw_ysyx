//`include "hong.v"
`define alu_length 17
//单周期cpu总模块
module top(
  input clk,
  input rst,
	output [31:0]inst,
  //input [31:0] in,
  output [63:0] cpupc,
  output ebreak,
	output not_have,
	output [63:0]dnpc
);
//////////////////if///////////////////////
	wire [63:0]c_rdata;
	wire [1:0]sel_nextpc;
	wire [63:0]imm;
	wire [63:0]src1;
	wire [63:0]src2;
  // 位宽为1比特, 复位值为1'b1, 写使能一直有效
  //Reg #(1, 1'b1) i0 (clk, rst, in[0], out[0], 1'b1);
  // 位宽为3比特, 复位值为3'b0, 写使能为out[0]
  //Reg #(3, 3'b0) i1 (clk, rst, in[3:1], out[3:1], out[0]);
  //pc test
	
	//IF模块
	//wire [31:0]inst;
  If i0(clk, rst,cpupc,sel_nextpc,imm,src1,inst,dnpc,c_rdata);//if
  //decode_exec de(clk,inst,cpupc,dnpc);
///////////////////////////////////////////
	
	wire [4:0]rs1;
	wire [4:0]rs2;
	wire [4:0]rd;
	wire [11:0]op_d;
	wire [4:0]fu_7_d;
	wire [7:0]fu_3_d;
	wire [1:0]c_raddr;
	wire [1:0]c_waddr;
	wire [2:0]e_inst;
	id id_0(.inst(inst),.rs1(rs1),.rs2(rs2),.rd(rd),.imm(imm),.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.e_inst(e_inst),.c_raddr(c_raddr),.c_waddr(c_waddr));
	assign ebreak=e_inst[0];
	wire [3:0]sel_alu_src1;
	wire [2:0]sel_alu_src2;
	wire [`alu_length-1:0]alu_control;
	wire rf_wen;
	wire [2:0]sel_rf_res;
	wire data_ram_en;
	wire data_ram_wen;
	wire [2:0]alu_equal;
	wire [6:0]l_choose;
	wire w_choose;
	wire c_wchoose;
	wire c_wen;
	wire [7:0]wmask;
	control control_0(.op_d(op_d),.fu_7_d(fu_7_d),.fu_3_d(fu_3_d),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.sel_rf_res(sel_rf_res),.data_ram_en(data_ram_en),.data_ram_wen(data_ram_wen),.wmask(wmask),.alu_equal(alu_equal),.sel_nextpc(sel_nextpc),.l_choose(l_choose),.not_have(not_have),.w_choose(w_choose),.c_wchoose(c_wchoose),.c_wen(c_wen),.e_inst(e_inst)) ;//控制模块

	wire [63:0]alu_result;
	wire [63:0]ram_addr;
	wire [63:0]ram_data;
	wire [63:0]wdata;
	exe exe_0(.clk(clk),.rst(rst),.imm(imm),.rs1(rs1),.rs2(rs2),.rd(rd),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.wdata(wdata),.alu_result(alu_result),.ram_addr(ram_addr),.src1(src1),.alu_equal(alu_equal),.cpupc(cpupc),.w_choose(w_choose),.src2(src2),.c_wchoose(c_wchoose),.c_wen(c_wen),.c_raddr(c_raddr),.c_waddr(c_waddr),.c_rdata(c_rdata),.e_inst(e_inst));

	//访存模块
	mem #(64,64) mem0(.clk(clk),.rst(rst),.r_ren(data_ram_en),.r_raddr(ram_addr),.r_rdata(ram_data),.r_waddr(ram_addr),.r_mask(wmask),.r_wen(data_ram_wen),.r_wdata(src2),.l_choose(l_choose));

	//写回模块
	wb wb0(.r_data(ram_data),.alu_result(alu_result),.sel_rf_res(sel_rf_res),.wdata(wdata),c_rdata);

 	/////////////////////////////开启波形图/////////////////////
	/*initial begin*/
		/*if ($test$plusargs("trace") != 0) begin*/
			/*$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);*/
			/*$dumpfile("logs/vlt_dump.vcd");*/
			/*$dumpvars();*/
		/*end*/
		/*$display("[%0t] Model running...\n", $time);*/
	/*end*/
	//////////////////////////////////////////////////////////
	endmodule
