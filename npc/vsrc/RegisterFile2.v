module RegisterFile2 #(ADDR_WIDTH = 5, DATA_WIDTH = 64 ) (
  input clk,
	input rst,
  input wen,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,

  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,

  output [DATA_WIDTH-1:0] rdata1,
  output [DATA_WIDTH-1:0] rdata2,

  input [1:0] c_raddr,
  output [DATA_WIDTH-1:0] c_rdata,

  input [DATA_WIDTH-1:0] c_wdata,
  input [1:0] c_waddr,
	input c_wen,

	input c_wen1_2,
  input [DATA_WIDTH-1:0] c_wdata1,
  input [1:0] c_waddr1,

  input [DATA_WIDTH-1:0] c_wdata2,
  input [1:0] c_waddr2
	);
	import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
	import "DPI-C" function void set_csr_ptr(input logic [63:0] a []);

  reg [DATA_WIDTH-1:0] rf [31:0];
  reg [DATA_WIDTH-1:0] csr [3:0];//0-4 mstatus mtvec mepc mcause
	
	integer i;
  assign rdata1=rf[raddr1];
  assign rdata2=rf[raddr2];
	assign c_rdata=csr[c_raddr];

	always @(posedge clk) begin
		if(rst)begin

			for (i=0;i<32;i=i+1) begin
				rf[i]<=0;
			end

			for (i=1;i<3;i=i+1)//需要设置初始值 
				csr[i]<=0;
			csr[0]<=64'ha00001800;
		end
		if (wen) begin
			rf[waddr] <= wdata;
			rf[0]<=0;
		end
		if (c_wen)begin
			csr[c_waddr]<=c_wdata;
		end
		if (c_wen1_2)begin
			csr[c_waddr2]<=c_wdata2;
			csr[c_waddr1]<=c_wdata1;
		end
  end
	initial begin
			set_gpr_ptr(rf);
			set_csr_ptr(csr);
		end
endmodule
    
