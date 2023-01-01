module pc(input clk,input rst,input [31:0]dnpc,output [31:0]cpupc);
//位宽为32bit，复位值为0x80000000,写使能一直有效
//wire [31:0]zhongjian;
//assign zhongjian=cpupc+4;
//Reg #(32,32'h80000000) i0 (clk,rst,zhongjian,cpupc,1'b1);
Reg #(32,32'h80000000) i0 (clk,rst,dnpc,cpupc,1'b1);
endmodule
