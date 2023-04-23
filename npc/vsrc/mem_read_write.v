module mem_read_write(
	input clk,
	input rst,
	input  ren,
	input  [63:0]r_raddr,
	output reg [63:0]r_rdata,
	input  wen,
	input  [63:0]r_waddr,
	input  [63:0]r_wdata,
	input  [7:0]r_mask,
	input  inst_update,
	input  use_device_en,
	output use_device_finish
);
///////////////////mem_read////////////////////////可以看成一个相对独立的模块
//输入:mem_read_begin araddr_block 输出:mem_read_end,dataarray
//读通道
wire rvalid;
wire rready;
wire arready;
wire arvalid;
wire rlast;
reg  [2:0]d_r_len;
reg  [2:0]d_w_len;
wire [1:0]arburst;
wire [7:0]arlen;
wire [2:0]arsize;
wire [1:0]rresp;
wire [63:0]rdata_axi;

//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARREADY		 =3'd1,
						READ_TRANS       =3'd2,
						READ_FINISH 		 =3'd3;
reg [2:0]read_state;
always @(posedge clk)begin
	if(rst)
		read_state<=READ_IDLE;
	else if((read_state==READ_IDLE)&arready&arvalid)
		read_state<=READ_ARREADY;
	else if((read_state==READ_ARREADY)&rvalid&rready)
		read_state<=READ_TRANS;
	else if((read_state==READ_TRANS)&rlast)
		read_state<=READ_FINISH;
	else if(read_state==READ_FINISH)
		read_state<=READ_IDLE;
end
//read_finish信号
wire mem_read_finish;
wire mem_write_finish;
assign mem_read_finish=(read_state==READ_FINISH);
assign mem_write_finish=(write_state==WRITE_FINISH);
//arvalid信号
assign arvalid=(read_state==READ_IDLE)&ren&inst_update;
//r_data信号
//mem_read
always @(posedge clk)begin
		if(rvalid&rready)begin
		r_rdata<=rdata_axi;
		d_r_len<=d_r_len+1;
	end
	if(rlast)begin
		d_r_len<=0;
	end
	if(rst)begin
		d_r_len<=0;
	end
end
assign arburst=2'b01;
assign arlen=1;
assign arsize='d3;
//rready信号
assign rready=(read_state==READ_ARREADY)|(read_state==READ_TRANS);
////////////////////////////////////////////////////
///////////////////mem_write////////////////////////可以看成一个相对独立的模块
//输入:mem_write_begin awaddr_block dataarray输出:mem_write_finish
//写通道信号
//写信号
reg [2:0]write_state;
wire [1:0]awburst;
wire [7:0]awlen;
wire awready;
wire wlast;
wire wready;
wire [1:0]bresp;
wire bready;
wire bvalid;
assign awburst=2'b01;
assign awlen=1;
//状态机
parameter    WRITE_IDLE       = 3'd0 ,
	WRITE_AW_READY	 =3'd1,
	WRITE_TRANS	 =3'd2,
	WRITE_FINISH 		 =3'd3;
always @(posedge clk)begin
	if(rst)
		write_state<=WRITE_IDLE;
	else if((write_state==WRITE_IDLE)&awready&awvalid)
		write_state<=WRITE_AW_READY;
	else if((write_state==WRITE_AW_READY)&wready)
		write_state<=WRITE_TRANS;
	else if((write_state==WRITE_TRANS)&wlast)
		write_state<=WRITE_FINISH;
	//else if(write_state==WRITE_FINISH&(cache_finish))
	else if(write_state==WRITE_FINISH)
		write_state<=WRITE_IDLE;
end
//awvalid wvalid wdata wstrb信号

wire awvalid;
reg   wvalid;
wire [63:0]wdata_axi;
wire [31:0]awaddr;
reg  [63:0]wdata;
wire [7:0]wstrb;
reg  [7:0]c_awlen;
assign awvalid=(write_state==WRITE_IDLE)&(wen)&(inst_update);
assign awaddr=r_waddr[31:0];
assign wdata_axi =wdata;
assign wstrb =r_mask;
//r_wdata信号
always@(posedge clk)begin
	if(wready)begin
		wdata<=r_wdata;
		d_w_len<=d_w_len+1;
		c_awlen<=c_awlen+1;
		wvalid<=1;
	end
	else begin
		wdata<=64'hffffffff;
	end
	if(wlast)
	begin
		d_w_len<=0;
		c_awlen<=0;
		wvalid<=0;
	end
	if(rst)begin
			d_r_len<=0;
			d_w_len<=0;
			c_awlen<=0;
			wvalid<=0;
	end
end
//wlast信号
assign wlast=(c_awlen==awlen);
//bready信号
assign bready=(write_state==WRITE_AW_READY)&(write_state==WRITE_TRANS);
///////////////////////////////////////
/////////////////cache_write//////////
axi_full_s2 axi_full_s2_1(
	.clk(clk),
	.rst(rst),
	.araddr(r_raddr[31:0]),
	.arvalid(arvalid),
	.arburst(arburst),
	.arlen(arlen),
	.arsize(arsize),
	.arready(arready),
	.rdata(rdata_axi),
	.rresp(rresp),
	.rvalid(rvalid),
	.rlast(rlast),
	.rready(rready),
	.awaddr(awaddr),
	.awvalid(awvalid),
	.awburst(awburst),
	.awlen(awlen),
	.awready(awready),
	.wdata(wdata_axi),
	.wlast(wlast),
	.wstrb(wstrb),
	.wvalid(wvalid),
	.wready(wready),
	.bresp(bresp),
	.bvalid(bvalid),
	.bready(bready)
);
assign use_device_finish=inst_update&use_device_en&(((ren&mem_read_finish)|(wen&mem_write_finish))|((~ren)&(~wen)));
endmodule
