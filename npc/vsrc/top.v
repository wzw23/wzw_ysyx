//单周期cpu总模块
module top(
  input clk,
  input rst,
  input [31:0]inst,
  //input [31:0] in,
  output [31:0] cpupc
);
  //reg [5:0]count_c;
	wire [31:0]dnpc;
  // 位宽为1比特, 复位值为1'b1, 写使能一直有效
  //Reg #(1, 1'b1) i0 (clk, rst, in[0], out[0], 1'b1);
  // 位宽为3比特, 复位值为3'b0, 写使能为out[0]
  //Reg #(3, 3'b0) i1 (clk, rst, in[3:1], out[3:1], out[0]);
  //pc test
	
	assign dnpc=32'h80000004;
  pc i0(clk, rst, dnpc,cpupc);//if
  //decode_exec de(clk,inst,cpupc,dnpc);
	
	wire [4:0]rs1;
	wire [4:0]rs2;
	wire [4:0]rd;
	wire [63:0]imm;
	wire [6:0]op;
	wire [6:0]fu_7;
	wire [2:0]fu_3;
	id id_0(.inst(inst),.rs1(rs1),.rs2(rs2),.rd(rd),.imm(imm),.op(op),.fu_7(fu_7),.fu_3(fu_3));

	wire [2:0]sel_alu_src1;
	wire [2:0]sel_alu_src2;
	wire [11:0]alu_control;
	wire rf_wen;
	wire sel_rf_res;
	wire data_ram_wen;
	control control_0(.op(op),.fu_7(fu_7),.fu_3(fu_3),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.sel_rf_res(sel_rf_res),.data_ram_wen(data_ram_wen),.wmask(wmask)) ;//控制模块

	wire [63:0]alu_result;
	wire [63:0]ram_addr;
	wire [63:0]ram_data;
	wire [63:0]src1;
	wire [7:0]wmask;
	exe exe_0(.clk(clk),.rst(rst),.imm(imm),.rs1(rs1),.rs2(rs2),.rd(rd),.sel_alu_src1(sel_alu_src1),.sel_alu_src2(sel_alu_src2),.alu_control(alu_control),.rf_wen(rf_wen),.sel_rf_res(sel_rf_res),.alu_result(alu_result),.ram_addr(ram_addr),.src1(src1));

	mem #(64,64) mem0(clk,rst,ram_addr,ram_data,ram_addr,wmask,data_ram_wen,src1);


 	/////////////////////////////开启波形图/////////////////////
 /* initial begin*/
		/*if ($test$plusargs("trace") != 0) begin*/
			/*$display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);*/
			/*$dumpfile("logs/vlt_dump.vcd");*/
			/*$dumpvars();*/
		/*end*/
		/*$display("[%0t] Model running...\n", $time);*/
	/*end*/
	//////////////////////////////////////////////////////////

	endmodule

