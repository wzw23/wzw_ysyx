module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 64) (
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
  output [DATA_WIDTH-1:0] array [31:0]
);
  reg [DATA_WIDTH-1:0] rf [31:0];
  integer i;
  initial begin
    for (i=0;i<32;i=i+1) begin
        rf[i]=0;
    end
end
  assign rdata1=rf[raddr1];
  assign rdata2=rf[raddr2];
  assign rdata3=rf[raddr3];
	assign array=rf;
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
//加入wdata2的目的主要是为了另寄存器a0一直为0
  always @(posedge clk) begin
    if (wen) rf[waddr2] <= wdata2;
  end
endmodule
    
