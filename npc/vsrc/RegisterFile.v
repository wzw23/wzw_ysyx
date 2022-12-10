module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input wen,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,
  output [DATA_WIDTH-1:0] rdata1,
  output [DATA_WIDTH-1:0] rdata2);
  reg [DATA_WIDTH-1:0] rf [31:0];
  integer i;
  initial begin
    for (i=0;i<32;i=i+1) begin
        rf[i]=0;
    end
end
  assign rdata1=rf[raddr1];
  assign rdata2=rf[raddr2];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
endmodule
    
