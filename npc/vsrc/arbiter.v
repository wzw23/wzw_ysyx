module arbiter(
	input  clk,
	input  rst,
	//读地址通道 
	input  [31:0]araddr_0,
	input  [31:0]araddr_1,
	input  arvalid_0,
	input  arvalid_1,
	output arready_0,
	output arready_1,
	//读数据通道
	output [63:0]rdata_0,
	output [63:0]rdata_1,
	output reg [1:0]rresp_0,
	output reg [1:0]rresp_1,
	output rvalid_0,
	output rvalid_1,
	input  rready_0,
	input  rready_1,
	//写地址通道
	input  [31:0]awaddr_1,
	input  awvalid_1,
	output awready_0,
	output awready_1,
	//写数据通道
	input  [63:0]wdata_1,
	input  [7:0]wstrb_1,
	input  wvalid_1,
	output wready_0,
	output wready_1,
	//写回复通道
	output [1:0]bresp_0,
	output [1:0]bresp_1,
	output bvalid_0,
	output bvalid_1,
	input  bready_1,

	input inst_update,
	input mem_finish
);
//choose_index:0:代表IFU 1:代表LSU
reg [1:0]master_state;
parameter IDLE=0,
					S_MASTER_0=1,
					S_MASTER_1=2;
always@(posedge clk)begin
	if(rst)
		master_state<=IDLE;
	else if((arvalid_0)&(master_state==IDLE))
		master_state<=S_MASTER_0;
	else if((arvalid_1)&(master_state==IDLE))
		master_state<=S_MASTER_1;
	else if((master_state==S_MASTER_0)&(inst_update))
		master_state<=IDLE;
	else if((master_state==S_MASTER_1)&(mem_finish))
		master_state<=IDLE;
end

wire master_0=(master_state==S_MASTER_0);
wire master_1=(master_state==S_MASTER_1);

/////////////////////////////
wire [31:0]araddr;
wire arvalid;
wire arready;
assign araddr=master_0?araddr_0:
						  master_1?araddr_1:
						  0;
assign arvalid=master_0?arvalid_0:
						   master_1?arvalid_1:
						   0;
assign arready_0=master_0?arready:
								0;
assign arready_1=master_1?arready:
								0;
/////////////////////////////
wire [63:0]rdata;
wire [1:0]rresp;
wire rready;
wire rvalid;
assign rready= master_0?rready_0:
						   master_1?rready_1:
						   0;
assign rdata_0=master_0?rdata:
								0;
assign rdata_1=master_1?rdata:
								0;
assign rresp_0=master_0?rresp:
								0;
assign rresp_1=master_1?rresp:
								0;
assign rvalid_0=master_0?rvalid:
								0;
assign rvalid_1=master_1?rvalid:
								0;
/////////////////////////////
wire [31:0]awaddr;
wire awready;
wire awvalid;
assign awaddr =master_1?awaddr_1:
						  0;
assign awvalid=master_1?awvalid_1:
						  0;
assign awready_0=master_0?awready:
								0;
assign awready_1=master_1?awready:
								0;
/////////////////////////////
wire wready;
wire wvalid;
wire [63:0]wdata;
wire [7:0]wstrb;
assign wdata  =master_1?wdata_1:
						  0;
assign wstrb  =master_1?wstrb_1:
						  0;
assign wvalid =master_1?wvalid_1:
						  0;
assign wready_0=master_0?wready:
								0;
assign wready_1=master_1?wready:
								0;
///////////////////////////
wire [1:0]bresp;
wire bvalid;
wire bready;
assign bready=master_1?bready_1:
						  0;
assign bresp_0=master_0?bresp:
								0;
assign bresp_1=master_1?bresp:
								0;
assign bvalid_0=master_0?bvalid:
								0;
assign bvalid_1=master_1?bvalid:
								0;
axi_lite_s2 axi_lite_s2_0(
				.clk(clk),
				.rst(rst),
				.araddr(araddr),
				.arvalid(arvalid),
				.arready(arready),
				.rdata(rdata),
				.rresp(rresp),
				.rvalid(rvalid),
				.rready(rready),
				.awaddr(awaddr),
				.awvalid(awvalid),
				.awready(awready),
				.wdata(wdata),
				.wstrb(wstrb),
				.wvalid(wvalid),
				.wready(wready),
				.bresp(bresp),
				.bvalid(bvalid),
				.bready(bready)
			);
endmodule
