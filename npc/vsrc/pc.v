module pc(input clk,input rst,output [31:0]out);
//位宽为32bit，复位值为0x80000000,写使能一直有效
wire [31:0]zhongjian;
assign zhongjian=out+4;
Reg #(32,32'h80000000) i0 (clk,rst,zhongjian,out,1'b1);
endmodule