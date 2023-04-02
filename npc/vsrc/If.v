module If(input clk,input rst,output [63:0]cpupc,input [1:0]sel_nextpc,input [63:0]imm,input [63:0]src1,output [31:0]inst,output [63:0]dnpc,input[63:0]c_rdata);
//位宽为32bit，复位值为0x80000000,写使能一直有效
//wire [31:0]zhongjian;
//assign zhongjian=cpupc+4;
//Reg #(32,32'h80000000) i0 (clk,rst,zhongjian,cpupc,1'b1);
import "DPI-C" function void vpmem_read(
	input longint mraddr, output longint mrdata);

//wire [63:0]dnpc;
MuxKey #(4,2,64) mux4(dnpc,sel_nextpc,{//alu_src2赋值
  2'b00,cpupc+4,
	2'b01,cpupc+imm,
	2'b10,(src1+imm)&~1,
	2'b11,c_rdata
	});
Reg #(64,64'h80000000) i0 (clk,rst,dnpc,cpupc,1'b1);
wire [63:0]inst_64;
always @(*)begin
		vpmem_read(cpupc, inst_64);
end
assign inst=inst_64[31:0];
endmodule
