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
	input  mem_finish,
	//总线接口
	output [31:0]araddr1,
	output arvalid1,
	output [1:0]arburst1,
	output [7:0]arlen1,
	output [2:0]arsize1,
	input arready1,
	input [63:0]rdata1,
	input [1:0]rresp1,
	input rvalid1,
	input rlast1,
	output rready1,
	input id_reg_finish,
	input not_jump,
	input [63:0]cpupc,
	input [63:0]cpupc_reg_is,
	output pc_update,

  output [5:0]io_sram0_addr,
  output io_sram0_cen,
  output io_sram0_wen,
  output [127:0]io_sram0_wmask,
  output [127:0] io_sram0_wdata,
  input  [127:0] io_sram0_rdata,

  output [5:0] io_sram1_addr,
  output io_sram1_cen,
  output io_sram1_wen,
  output [127:0]io_sram1_wmask,
  output [127:0] io_sram1_wdata,
  input  [127:0] io_sram1_rdata,

  output [5:0] io_sram2_addr,
  output io_sram2_cen,
  output io_sram2_wen,
  output [127:0]io_sram2_wmask,
  output [127:0] io_sram2_wdata,
  input  [127:0] io_sram2_rdata,

  output [5:0] io_sram3_addr,
  output io_sram3_cen,
  output io_sram3_wen,
  output [127:0]io_sram3_wmask,
  output [127:0] io_sram3_wdata,
  input  [127:0] io_sram3_rdata

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
 //reg  [63:0]dataarray[NUM_LINES-1:0][(LINE_SIZE)/8-1:0];//生成line列 长为64B大小的cache 由于每一行是以8字节为存储单位 所以设置为8个8字节
//addr:index tag offset
reg  rlast_delay;
wire   [OFFSET_WIDTH-1:0]addr_offset;
wire arvalid;
wire   [INDEX_WIDTH-1:0]addr_index;
wire   [TAG_WIDTH-1:0]addr_tag;
wire   [63:0]rdata_axi;
assign addr_offset=araddr[OFFSET_WIDTH-1:0];
assign addr_index =araddr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
assign addr_tag   =araddr[31:OFFSET_WIDTH+INDEX_WIDTH];
parameter CACHE_IDLE=0,
        	CACHE_UPDATE_BEGIN=1,
        	CACHE_MEMREAD=2,
        	CACHE_GET=3,
					CACHE_FINISH=4,
					CACHE_WAIT_EXE=5
					;
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
	else if((cache_state==CACHE_MEMREAD)&rlast_delay)
		cache_state<=CACHE_GET;
	else if(cache_state==CACHE_GET&(id_reg_finish)&(not_jump))//已经取完指令 此时已经完成预译码 not_jump可以生效
		cache_state<=CACHE_FINISH;
	else if(cache_state==CACHE_FINISH)
		cache_state<=CACHE_IDLE;
	else if(cache_state==CACHE_GET&(id_reg_finish)&(~not_jump))
		cache_state<=CACHE_WAIT_EXE;
	else if(cache_state==CACHE_WAIT_EXE&(cpupc==cpupc_reg_is))
		cache_state<=CACHE_FINISH;
end
assign pc_update=(cache_state==CACHE_FINISH);
//总线信号
//assign inst_update=(state==READ_FINISH);

wire rvalid;
wire rready;
wire arready;
wire rlast;
wire ready_read;
//assign ready_read=(((cache_state==CACHE_IDLE)&(addr_tag==tagarray[addr_index][19:0])&(tagarray[addr_index][20]))|((cache_state==CACHE_MEMREAD)&rlast_delay));
assign ready_read=1;
wire [31:0]araddr_block;
reg  [2:0]d_len;
assign araddr_block=araddr&(~32'b111111);

//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARREADY		 =3'd1,
						READ_TRANS       =3'd2,
						READ_FINISH 		 =3'd3;
reg [2:0]state;
always @(posedge clk)begin
	if(rlast)
		rlast_delay<='b1;
	else 
		rlast_delay<='b0;
end
always @(posedge clk)begin
	if(rst)
		state<=READ_IDLE;
	else if((state==READ_IDLE)&arready&arvalid)
		state<=READ_ARREADY;
	else if((state==READ_ARREADY)&rvalid)
		state<=READ_TRANS;
	else if((state==READ_TRANS)&rlast)
		state<=READ_FINISH;
	else if(state==READ_FINISH&(id_reg_finish))
		state<=READ_IDLE;
end
//arvalid信号
assign arvalid=(state==READ_IDLE)&(cache_state==CACHE_MEMREAD);
//r_data信号
//mem_read
reg rvalid_rready;
reg [63:0]rdata_test3;
always @(posedge clk)begin
	if(rvalid&rready)begin
		//dataarray[addr_index][d_len]<=rdata_axi;
		rdata_test3<=rdata_axi;
		d_len<=d_len+1;
		rvalid_rready<=1;
	end
	else 
		rvalid_rready<=0;
	if(rlast)begin
		tagarray[addr_index][20]<='d1;
		tagarray[addr_index][19:0]<=addr_tag;
		d_len<=0;
	end
	if(rst)begin
		for(integer i=0;i<NUM_LINES;i=i+1)
			tagarray[i]<=0;
		/*for(integer j=0;j<NUM_LINES;j=j+1)*/
			/*for(integer k=0;k<8;k++)*/
				/*dataarray[j][k]<=0;*/
		d_len<=0;
	end
end
//chache_get阶段
//always@(posedge clk)
	//if(ready_read)
		//rdata<=dataarray[addr_index][addr_offset[5:3]];//对齐
//wire   [63:0]rdata_test;
//assign rdata_test=dataarray[0][0];//对齐
assign inst_update=(cache_state==CACHE_GET);
//rready信号
assign rready=(state==READ_ARREADY)|(state==READ_TRANS);
wire [1:0]arburst;
wire [7:0]arlen;
wire [2:0]arsize;
wire [1:0]rresp;
assign arburst=2'b01;
assign arlen=8;
assign arsize='d3;

/*axi_full_s axi_full_s0(*/
/*.clk(clk),*/
/*.rst(rst),*/
/*.araddr(araddr_block),*/
/*.arvalid(arvalid),*/
/*.arburst(arburst),*/
/*.arlen(arlen),*/
/*.arsize(arsize),*/
/*.arready(arready),*/
/*.rdata(rdata_axi),*/
/*.rresp(rresp),*/
/*.rvalid(rvalid),*/
/*.rlast(rlast),*/
/*.rready(rready)*/
/*);*/
assign araddr1=araddr_block;
assign arvalid1=arvalid;
assign arburst1=arburst;
assign arlen1=arlen;
assign arsize1=arsize;
assign arready=arready1;
assign rdata_axi=rdata1;
assign rresp=rresp1;
assign rvalid=rvalid1;
assign rready1=rready;
assign rlast=rlast1;

/*wire [5:0]io_sram0_addr;*/
/*wire io_sram0_cen;*/
/*wire io_sram0_wen;*/
/*wire [127:0]io_sram0_wmask;*/
/*wire [127:0] io_sram0_wdata;*/
/*wire [127:0] io_sram0_rdata;*/

/*wire [5:0] io_sram1_addr;*/
/*wire io_sram1_cen;*/
/*wire io_sram1_wen;*/
/*wire [127:0]io_sram1_wmask;*/
/*wire [127:0] io_sram1_wdata;*/
/*wire [127:0] io_sram1_rdata;*/

/*wire [5:0] io_sram2_addr;*/
/*wire io_sram2_cen;*/
/*wire io_sram2_wen;*/
/*wire [127:0]io_sram2_wmask;*/
/*wire [127:0] io_sram2_wdata;*/
/*wire [127:0] io_sram2_rdata;*/

/*wire [5:0] io_sram3_addr;*/
/*wire io_sram3_cen;*/
/*wire io_sram3_wen;*/
/*wire [127:0]io_sram3_wmask;*/
/*wire [127:0] io_sram3_wdata;*/
/*wire [127:0] io_sram3_rdata;*/

/*sram sram_0(*/
/*.clk(clk),*/
/*.io_sram0_addr(io_sram0_addr),*/
/*.io_sram0_cen(~io_sram0_cen),*/
/*.io_sram0_wen(~io_sram0_wen),*/
/*.io_sram0_wmask(~io_sram0_wmask),*/
/*.io_sram0_wdata(io_sram0_wdata),*/
/*.io_sram0_rdata(io_sram0_rdata),*/

/*.io_sram1_addr(io_sram1_addr),*/
/*.io_sram1_cen(~io_sram1_cen),*/
/*.io_sram1_wen(~io_sram1_wen),*/
/*.io_sram1_wmask(~io_sram1_wmask),*/
/*.io_sram1_wdata(io_sram1_wdata),*/
/*.io_sram1_rdata(io_sram1_rdata),*/

/*.io_sram2_addr(io_sram2_addr),*/
/*.io_sram2_cen(~io_sram2_cen),*/
/*.io_sram2_wen(~io_sram2_wen),*/
/*.io_sram2_wmask(~io_sram2_wmask),*/
/*.io_sram2_wdata(io_sram2_wdata),*/
/*.io_sram2_rdata(io_sram2_rdata),*/

/*.io_sram3_addr(io_sram3_addr),*/
/*.io_sram3_cen(~io_sram3_cen),*/
/*.io_sram3_wen(~io_sram3_wen),*/
/*.io_sram3_wmask(~io_sram3_wmask),*/
/*.io_sram3_wdata(io_sram3_wdata),*/
/*.io_sram3_rdata(io_sram3_rdata)*/
 /*);*/
 assign io_sram0_addr=addr_index;
 assign io_sram1_addr=addr_index;
 assign io_sram2_addr=addr_index;
 assign io_sram3_addr=addr_index;
 
 assign io_sram0_cen=((rvalid&rready)&((d_len=='d0)|(d_len=='d1)))|(ready_read&((addr_offset[5:3]==0)|(addr_offset[5:3]==1)));
 assign io_sram1_cen=((rvalid&rready)&((d_len=='d2)|(d_len=='d3)))|(ready_read&((addr_offset[5:3]==2)|(addr_offset[5:3]==3)));
 assign io_sram2_cen=((rvalid&rready)&((d_len=='d4)|(d_len=='d5)))|(ready_read&((addr_offset[5:3]==4)|(addr_offset[5:3]==5)));
 assign io_sram3_cen=((rvalid&rready)&((d_len=='d6)|(d_len=='d7)))|(ready_read&((addr_offset[5:3]==6)|(addr_offset[5:3]==7)));

 assign io_sram0_wen=((rvalid&rready)&((d_len=='d0)|(d_len=='d1)));
 assign io_sram1_wen=((rvalid&rready)&((d_len=='d2)|(d_len=='d3)));
 assign io_sram2_wen=((rvalid&rready)&((d_len=='d4)|(d_len=='d5)));
 assign io_sram3_wen=((rvalid&rready)&((d_len=='d6)|(d_len=='d7)));

 assign io_sram0_wdata=(d_len%2==0)?{64'b0,rdata_axi}:{rdata_axi,64'b0};
 assign io_sram1_wdata=(d_len%2==0)?{64'b0,rdata_axi}:{rdata_axi,64'b0};
 assign io_sram2_wdata=(d_len%2==0)?{64'b0,rdata_axi}:{rdata_axi,64'b0};
 assign io_sram3_wdata=(d_len%2==0)?{64'b0,rdata_axi}:{rdata_axi,64'b0};

 assign io_sram0_wmask=(d_len%2==0)?{64'b0,{64{1'b1}}}:{{64{1'b1}},64'b0};
 assign io_sram1_wmask=(d_len%2==0)?{64'b0,{64{1'b1}}}:{{64{1'b1}},64'b0};
 assign io_sram2_wmask=(d_len%2==0)?{64'b0,{64{1'b1}}}:{{64{1'b1}},64'b0};
 assign io_sram3_wmask=(d_len%2==0)?{64'b0,{64{1'b1}}}:{{64{1'b1}},64'b0};

 assign rdata= (addr_offset[5:3]==0)?io_sram0_rdata[63:0]:
							 (addr_offset[5:3]==1)?io_sram0_rdata[127:64]:
							 (addr_offset[5:3]==2)?io_sram1_rdata[63:0]:
							 (addr_offset[5:3]==3)?io_sram1_rdata[127:64]:
							 (addr_offset[5:3]==4)?io_sram2_rdata[63:0]:
							 (addr_offset[5:3]==5)?io_sram2_rdata[127:64]:
							 (addr_offset[5:3]==6)?io_sram3_rdata[63:0]:
							 io_sram3_rdata[127:64];
 ///////////
endmodule
