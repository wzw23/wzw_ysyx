//icache描述如下
//大小：4kB
//为直接映射cache 每行大小为64B 共有2^6行
//采取写分配和写回策略
module axi_lite_s(
	input  clk,
	input  rst,
	input  [31:0]araddr,
	output [63:0]rdata,
	output inst_update
 );
 parameter CACHE_SIZE=4096;//cache大小为4kB 4096B
 parameter LINE_SIZE=64;//line size 64B
 parameter NUM_LINES=CACHE_SIZE/LINE_SIZE;//行数
 parameter TAGARRAY_WIDTH=22;//tag width
 parameter INDEX_WIDTH=6;//index width
 parameter OFFSET_WIDTH=6;//offset width
 parameter TAG_WIDTH=20;//tag width
//tag array
 reg [TAGARRAY_WIDTH-1:0]tagarray[NUM_LINES-1:0];//20位代表valid 因为icache是只读cache 所以没有dirty位
//dataarray
 reg [(LINE_SIZE-1)*8:0]data[NUM_LINES-1:0];//生成line列 长为64B大小的cache
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
					 CACHE_INPUT=3,
					 CACHE_GET=4;
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
		else if((cache_state==CACHE_MEMREAD)&mem_read_finish)
			cache_state<=CACHE_INPUT;
		else if(cache_state==CACHE_INPUT&(cache_input_finish))
			cache_state<=CACHE_GET;
		else if(cache_state==CACHE_GET)
			cache_state<=CACHE_IDLE;
	end
 endmodule
