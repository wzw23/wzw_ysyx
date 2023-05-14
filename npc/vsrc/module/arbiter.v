module arbiter(
	input  clk,
	input  rst,
	//读地址通道 
	input  [31:0]araddr_1,
	input  [31:0]araddr_2,
	input  arvalid_1,
	input  arvalid_2,
	input  [1:0]arburst_1,
	input  [1:0]arburst_2,
	input  [7:0]arlen_1,
	input  [7:0]arlen_2,
	input  [2:0]arsize_1,
	input  [2:0]arsize_2,
	output arready_1,
	output arready_2,
	//读数据通道
	output reg[63:0]rdata_1,
	output reg[63:0]rdata_2,
	output [1:0]rresp_1,
	output [1:0]rresp_2,
	output rvalid_1,
	output rvalid_2,
	output rlast_1,
	output rlast_2,
	input  rready_1,
	input  rready_2,
	//写地址通道
	input  [31:0]awaddr_2,
	input  awvalid_2,
	input  [1:0]awburst_2,
	input  [7:0]awlen_2,
	output awready_2,
	//写数据通道
	input  [63:0]wdata_2,
	input  wlast_2,
	input  [7:0]wstrb_2,
	input  wvalid_2,
	output wready_2,
	//写回复通道
	output [1:0]bresp_2,
	output bvalid_2,
	input  bready_2,

	input inst_update,
	input mem_finish
);
//choose_index:0:代表IFU 1:代表LSU
reg [1:0]master_state;
parameter IDLE=0,
					S_MASTER_1=1,
					S_MASTER_2=2;
always@(posedge clk)begin
	if(rst)
		master_state<=IDLE;
	else if((arvalid_1)&(master_state==IDLE))
		master_state<=S_MASTER_1;
	else if((arvalid_2|awvalid_2)&(master_state==IDLE))
		master_state<=S_MASTER_2;
	else if((master_state==S_MASTER_1)&(inst_update))
		master_state<=IDLE;
	else if((master_state==S_MASTER_2)&(mem_finish))
		master_state<=IDLE;
end

wire master_1=(master_state==S_MASTER_1);
wire master_2=(master_state==S_MASTER_2);

/////////////////////////////
wire [31:0]araddr;
wire arvalid;
wire arready;
wire [1:0]arburst;
wire [7:0]arlen;
wire [2:0]arsize;
assign araddr=master_1?araddr_1:
							master_2?araddr_2:
							0;
assign arvalid=master_1?arvalid_1:
							 master_2?arvalid_2:
							 0;
assign arburst=master_1?arburst_1:
							 master_2?arburst_2:
							 0;
assign arlen=master_1?arlen_1:
						 master_2?arlen_2:
						 0;
assign arsize=master_1?arsize_1:
							master_2?arsize_2:
							0;
assign arready_1=master_1?arready:
								0;
assign arready_2=master_2?arready:
								0;
/////////////////////////////
wire [63:0]rdata;
wire [1:0]rresp;
wire rready;
wire rvalid;
wire rlast;
assign rready= master_1?rready_1:
							 master_2?rready_2:
							 0;
assign rdata_1=master_1?rdata:
								0;
assign rdata_2=master_2?rdata:
								0;
assign rresp_1=master_1?rresp:
								0;
assign rresp_2=master_2?rresp:
								0;
assign rvalid_1=master_1?rvalid:
								0;
assign rvalid_2=master_2?rvalid:
								0;
assign rlast_1=master_1?rlast:
								0;
assign rlast_2=master_2?rlast:
								0;

/////////////////////////////
wire [31:0]awaddr;
wire awready;
wire awvalid;
wire [1:0]awburst;
wire [7:0]awlen;
wire wlast;

assign awaddr =master_2?awaddr_2:
							0;
assign awvalid=master_2?awvalid_2:
							0;
assign awburst =master_2?awburst_2:
							0;
assign awlen =master_2?awlen_2:
							0;
assign awready_2=master_2?awready:
								0;
assign wlast =master_2?wlast_2:
							0;

/////////////////////////////
wire wready;
wire wvalid;
wire [63:0]wdata;
wire [7:0]wstrb;
assign wdata  =master_2?wdata_2:
							0;
assign wstrb  =master_2?wstrb_2:
							0;
assign wvalid =master_2?wvalid_2:
							0;
assign wready_2=master_2?wready:
								0;
///////////////////////////
wire [1:0]bresp;
wire bvalid;
wire bready;
assign bready=master_2?bready_2:
							0;
assign bresp_2=master_2?bresp:
								0;
assign bvalid_2=master_2?bvalid:
								0;
/*axi_lite_s2 axi_lite_s2_1(*/
				/*.clk(clk),*/
				/*.rst(rst),*/
				/*.araddr(araddr),*/
				/*.arvalid(arvalid),*/
				/*.arready(arready),*/
				/*.rdata(rdata),*/
				/*.rresp(rresp),*/
				/*.rvalid(rvalid),*/
				/*.rready(rready),*/
				/*.awaddr(awaddr),*/
				/*.awvalid(awvalid),*/
				/*.awready(awready),*/
				/*.wdata(wdata),*/
				/*.wstrb(wstrb),*/
				/*.wvalid(wvalid),*/
				/*.wready(wready),*/
				/*.bresp(bresp),*/
				/*.bvalid(bvalid),*/
				/*.bready(bready)*/
			/*);*/
/*axi_full_s2 axi_full_s2_0(*/
	/*.clk(clk),*/
	/*.rst(rst),*/
	/*.araddr(araddr_1),*/
	/*.arvalid(arvalid_1),*/
	/*.arburst(arburst_1),*/
	/*.arlen(arlen_1),*/
	/*.arsize(arsize_1),*/
	/*.arready(arready_1),*/
	/*.rdata(rdata_1),*/
	/*.rresp(rresp_1),*/
	/*.rvalid(rvalid_1),*/
	/*.rlast(rlast_1),*/
	/*.rready(rready_1),*/
	/*.awaddr(0),*/
	/*.awvalid(0),*/
	/*.awburst(0),*/
	/*.awlen(0),*/
	/*.awready(awready1),*/
	/*.wdata(0),*/
	/*.wlast(0),*/
	/*.wstrb(0),*/
	/*.wvalid(0),*/
	/*.wready(wready1),*/
	/*.bresp(bresp1),*/
	/*.bvalid(bvalid1),*/
	/*.bready(0)*/
/*);*/
/*wire awready1;*/
/*wire wready1;*/
/*wire [1:0]bresp1;*/
/*wire bvalid1;*/
axi_full_s2 axi_full_s2_test(
	.clk(clk),
	.rst(rst),
	.araddr(araddr),
	.arvalid(arvalid),
	.arburst(arburst),
	.arlen(arlen),
	.arsize(arsize),
	.arready(arready),
	.rdata(rdata),
	.rresp(rresp),
	.rvalid(rvalid),
	.rlast(rlast),
	.rready(rready),
	.awaddr(awaddr),
	.awvalid(awvalid),
	.awburst(awburst),
	.awlen(awlen),
	.awready(awready),
	.wdata(wdata),
	.wlast(wlast),
	.wstrb(wstrb),
	.wvalid(wvalid),
	.wready(wready),
	.bresp(bresp),
	.bvalid(bvalid),
	.bready(bready)
);
endmodule
