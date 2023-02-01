module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 64 ,CSRADDR_WIDTH=12) (
  input clk,
  input wen,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
	input [DATA_WIDTH-1:0] wdata2,
  input [ADDR_WIDTH-1:0] waddr2,

  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,
  input [ADDR_WIDTH-1:0] raddr3,
  output [DATA_WIDTH-1:0] rdata1,
  output [DATA_WIDTH-1:0] rdata2,
  output [DATA_WIDTH-1:0] rdata3,
  output [DATA_WIDTH-1:0] array [31:0],
  input [CSRADDR_WIDTH-1:0] rcsaddr1,
  output [DATA_WIDTH-1:0] rcsdata1,

	input [CSRADDR_WIDTH-1:0] wcsaddr1,
  input [DATA_WIDTH-1:0] wcsdata1,

	input [CSRADDR_WIDTH-1:0] wcsaddr2,
  input [DATA_WIDTH-1:0] wcsdata2



);
  reg [DATA_WIDTH-1:0] rf [31:0];
  reg [DATA_WIDTH-1:0] csrs [4095:0];
  integer i;
  initial begin
    for (i=0;i<32;i=i+1) begin
        rf[i]=0;
    end
		for (i=0;i<4095;i=i+1)begin
        csrs[i]=0;
    end
		
		csrs[768]=64'ha00001800;

end
  assign rdata1=rf[raddr1];
  assign rdata2=rf[raddr2];
  assign rdata3=rf[raddr3];
  assign rcsdata1=csrs[rcsaddr1];
	assign array=rf;
  always @(posedge clk) begin
		if (wen) begin 
			rf[waddr] <= wdata;
			csrs[wcsaddr1]<=wcsdata1;
			csrs[wcsaddr2]<=wcsdata2;
	end
  end
//加入wdata2的目的主要是为了另寄存器a0一直为0
  always @(posedge clk) begin
    if (wen) rf[waddr2] <= wdata2;
  end
endmodule
    
