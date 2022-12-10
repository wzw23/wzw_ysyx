	// verilator_coverage annotation
	// 触发器模板
	module Reg #(WIDTH = 1, RESET_VAL = 0) (
 000025	  input clk,
%000002	  input rst,
 000038	  input [WIDTH-1:0] din,
 000044	  output reg [WIDTH-1:0] dout,
%000000	  input wen
	);
 000024	  always @(posedge clk) begin
%000002	    if (rst) dout <= RESET_VAL;
 000022	    else if (wen) dout <= din;
%000000	    verilator_coverage: (next point on previous line)

	  end
	endmodule
	
