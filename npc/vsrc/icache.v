//icache描述如下
//大小：4kB
//为直接映射cache 每行大小为64B 共有2^6行
//采取写分配和写回策略
module icache(
	input  clk,
	input  rst,
	input  [31:0]araddr,
	output [63:0]rdata,
	output inst_update,
	input  mem_finish
 );
 parameter CACHE_SIZE=4096;//cache大小为4kB 4096B
 parameter LINE_SIZE=64;//line size 64B
 parameter NUM_LINES=CACHE_SIZE/LINE_SIZE;//行数
 parameter TAGARRAY_WIDTH=21;//tag width
 parameter INDEX_WIDTH=6;//index width
 parameter OFFSET_WIDTH=6;//offset width
 parameter TAG_WIDTH=20;//tag width
//tag array
 reg [TAGARRAY_WIDTH-1:0]tagarray[NUM_LINES-1:0];//21位代表valid 因为icache是只读cache 所以没有dirty位
//dataarray
 reg  [63:0]dataarray[NUM_LINES-1:0][(LINE_SIZE)/8-1:0];//生成line列 长为64B大小的cache 由于每一行是以8字节为存储单位 所以设置为8个8字节
//addr:index tag offset
wire   [OFFSET_WIDTH-1:0]addr_offset;
wire   [INDEX_WIDTH-1:0]addr_index;
wire   [TAG_WIDTH-1:0]addr_tag;
wire   mem_read_finish;
wire   cache_input_finish;
assign addr_offset=araddr[OFFSET_WIDTH-1:0];
assign addr_index =araddr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
assign addr_tag   =araddr[31:OFFSET_WIDTH+INDEX_WIDTH];
parameter CACHE_IDLE=0,
        	CACHE_UPDATE_BEGIN=1,
        	CACHE_MEMREAD=2,
        	CACHE_GET=3;
reg [2:0]cache_state;
always @(posedge clk)begin
	if(rst)
		cache_state<=CACHE_IDLE;
	else if((cache_state==CACHE_IDLE)&(addr_tag==tagarray[addr_index][19:0])&(tagarray[addr_index][20]))
		cache_state<=CACHE_GET;
	else if(cache_state==CACHE_IDLE)
		cache_state<=CACHE_UPDATE_BEGIN;
	else if((cache_state==CACHE_UPDATE_BEGIN))
		cache_state<=CACHE_MEMREAD;
	else if((cache_state==CACHE_MEMREAD)&rlast)
		cache_state<=CACHE_GET;
	else if(cache_state==CACHE_GET&&(mem_finish))
		cache_state<=CACHE_IDLE;
end
//总线信号
assign inst_update=(state==READ_FINISH);

wire rvalid;
wire rready;
wire arready;
wire rlast;
wire [31:0]araddr_align;
reg  [2:0]d_len;
assign araddr_align=araddr&(~32'b111);

//寄存器
reg [63:0]r_rdata;
//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARREADY		 =3'd1,
						READ_TRANS       =3'd2,
						READ_FINISH 		 =3'd3;
reg [2:0]state;
always @(posedge clk)begin
	if(rst)
		state<=READ_IDLE;
	else if((state==READ_IDLE)&arready)
		state<=READ_ARREADY;
	else if((state==READ_ARREADY)&rvalid)
		state<=READ_TRANS;
	else if((state==READ_TRANS)&rlast)
		state<=READ_FINISH;
	else if(state==READ_FINISH&(mem_finish))
		state<=READ_IDLE;
end
//arvalid信号
assign arvalid=(state==READ_IDLE);
assign inst_update=(state==READ_FINISH);
//r_data信号
//mem_read
always @(posedge clk)begin
	if(rst)begin
		for(integer i=0;i<NUM_LINES;i=i+1)
			tagarray[i]<=0;
		d_len<=0;
	end
	if(rvalid&rready)begin
		dataarray[addr_index][d_len]<=rdata;
		d_len<=d_len+1;
	end
	if(rlast)begin
		tagarray[addr_index][20]<='d1;
		tagarray[addr_index][19:0]<=addr_tag;
		d_len<=0;
	end
end
//chache_get阶段
assign rdata=dataarray[addr_index][addr_offset[5:3]];
assign inst_update=(cache_state==CACHE_GET);
//rready信号
assign rready=(state==READ_ARREADY);
wire [1:0]arburst;
wire [7:0]arlen;
wire [2:0]arsize;
wire [1:0]rresp;
assign arburst=2'b01;
assign arlen=8;
assign arsize='d3;

axi_full_s axi_full_s0(
.clk(clk),
.rst(rst),
.araddr(araddr_align),
.arvalid(arvalid),
.arburst(arburst),
.arlen(arlen),
.arsize(arsize),
.arready(arready),
.rdata(rdata),
.rresp(rresp),
.rvalid(rvalid),
.rlast(rlast),
.rready(rready)
);
///////////
endmodule
