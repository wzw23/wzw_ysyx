	// verilator_coverage annotation
	module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
 000025	  input clk,
%000000	  input wen,
%000075	  input [DATA_WIDTH-1:0] wdata,
%000008	  input [ADDR_WIDTH-1:0] waddr,
%000010	  input [ADDR_WIDTH-1:0] raddr1,
%000007	  input [ADDR_WIDTH-1:0] raddr2,
%000067	  output [DATA_WIDTH-1:0] rdata1,
%000037	  output [DATA_WIDTH-1:0] rdata2);
	  reg [DATA_WIDTH-1:0] rf [31:0];
	  integer i;
%000002	  initial begin
%000001	    for (i=0;i<32;i=i+1) begin
 000064	    verilator_coverage: (next point on previous line)

 000032	        rf[i]=0;
	    end
	end
	  assign rdata1=rf[raddr1];
	  assign rdata2=rf[raddr2];
 000024	  always @(posedge clk) begin
 000024	    if (wen) rf[waddr] <= wdata;
%000000	    verilator_coverage: (next point on previous line)

	  end
	endmodule
	    
	
