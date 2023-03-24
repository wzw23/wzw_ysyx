module mem #(parameter ADDR_WIDTH=64,//地址位宽
	                parameter DATA_WIDTH=64)//数据位宽
(
	input clk,
	input rst,
	input [ADDR_WIDTH-1:0] r_raddr,
	output [DATA_WIDTH-1:0]r_rdata,

	input [ADDR_WIDTH-1:0] r_waddr,
	input [8-1:0] r_mask,
	input r_wen,
	input [DATA_WIDTH-1:0]r_wdata
);
import "DPI-C" function void vpmem_read(
	input longint mraddr, output longint mrdata);
import "DPI-C" function void vpmem_write(
			input longint waddr, input longint wdata, input byte wmask,input longint use_wen);


always @(*)begin
		vpmem_read(r_raddr, r_rdata);
		vpmem_write(r_waddr, r_wdata, r_mask,{{63'b0},r_wen});
end
endmodule
