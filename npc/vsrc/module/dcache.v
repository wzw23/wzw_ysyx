//icache描述如下
//大小：4kB
//为直接映射cache 每行大小为64B 共有2^6行
//采取写分配和写回策略
module dcache(
	input  clk,
	input  rst,
	input  use_cache,
	input  r_ren,
	input  [31:0]raddr,
	output [63:0]rdata_align,
	input  r_wen,
	input  [31:0]waddr,
	input  [63:0]wdata,
	input  [7:0]wmask,
	input  pipe2_valid,
	output  cache_finish,
	//总线信号
	output [31:0]araddr2,
	output arvalid2,
	output [1:0]arburst2,
	output [7:0]arlen2,
	output [2:0]arsize2,
	input arready2,
	input [63:0]rdata2,
	input [1:0]rresp2,
	input rvalid2,
	input rlast2,
	output rready2,
	//写地址通道
	output [31:0]awaddr2,
	output awvalid2,
	output [1:0]awburst2,
	output [7:0]awlen2,
	input awready2,
	//写数据通道
	output [63:0]wdata2,
  output wlast2,
	output [7:0]wstrb2,
	output wvalid2,
	input wready2,
	//写回复通道
	input [1:0]bresp2,
	input bvalid2,
	output bready2,
	
	input wb_reg_finish,

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
 parameter TAGARRAY_WIDTH=22;//tag width
 parameter INDEX_WIDTH=6;//index width
 parameter OFFSET_WIDTH=6;//offset width
 parameter TAG_WIDTH=20;//tag width
 //tag array
 reg [TAGARRAY_WIDTH-1:0]tagarray[NUM_LINES-1:0];//21位代表valid 22位代表dirty
//dataarray
 //reg  [63:0]dataarray[NUM_LINES-1:0][(LINE_SIZE)/8-1:0];//生成line列 长为64B大小的cache 由于每一行是以8字节为存储单位 所以设置为8个8字节
//addr:index tag offset
//状态机
parameter    WRITE_IDLE       = 3'd0 ,
	WRITE_AW_READY	 =3'd1,
	WRITE_W_READY	 =3'd2,
	WRITE_FINISH 		 =3'd3;

wire   [31:0]araddr;
wire 	 [63:0]rdata;
wire awvalid;
wire   [OFFSET_WIDTH-1:0]araddr_offset;
wire   [INDEX_WIDTH-1:0]araddr_index;
wire   [TAG_WIDTH-1:0]araddr_tag;
wire   [INDEX_WIDTH-1:0]waddr_index;
wire   [OFFSET_WIDTH-1:0]waddr_offset;
reg [2:0]write_state;
//wire   [TAG_WIDTH-1:0]waddr_tag;
wire   [63:0]rdata_axi;
wire   rlast;
assign araddr_offset=araddr[OFFSET_WIDTH-1:0];
assign araddr_index =araddr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
assign araddr_tag   =araddr[31:OFFSET_WIDTH+INDEX_WIDTH];

assign waddr_offset=waddr[OFFSET_WIDTH-1:0];
assign waddr_index =waddr[OFFSET_WIDTH+INDEX_WIDTH-1:OFFSET_WIDTH];
//assign waddr_tag   =waddr[31:OFFSET_WIDTH+INDEX_WIDTH];

parameter CACHE_IDLE=0,
        	CACHE_UPDATE_BEGIN=1,
					CACHE_MEMWRITE=2,
        	CACHE_MEMREAD=3,
        	CACHE_GET=4,
					CACHE_FINISH=5,
					CACHE_WRITE=6
					;
reg [2:0]cache_state;
wire rcache_en;//读写cache使能信号
wire wcache_en;
wire mem_write_begin;
wire mem_write_finish;
//wire mem_read_finish;
wire mem_read_begin;
assign araddr=(rcache_en)?raddr:
							(wcache_en)?waddr:
							0;
assign rcache_en=r_ren&pipe2_valid;
assign wcache_en=r_wen&pipe2_valid;
always @(posedge clk)begin
	if(rst)
		cache_state<=CACHE_IDLE;
	else if((cache_state==CACHE_IDLE)&(araddr_tag==tagarray[araddr_index][19:0])&(tagarray[araddr_index][20])&(rcache_en)&pipe2_valid&(use_cache))
		cache_state<=CACHE_GET;
	else if((cache_state==CACHE_IDLE)&(araddr_tag==tagarray[araddr_index][19:0])&(tagarray[araddr_index][20])&(wcache_en)&pipe2_valid&(use_cache))
		cache_state<=CACHE_WRITE;
	else if(cache_state==CACHE_IDLE&(rcache_en|wcache_en)&pipe2_valid&(use_cache))
		cache_state<=CACHE_UPDATE_BEGIN;
	else if(cache_state==CACHE_UPDATE_BEGIN&(tagarray[araddr_index][21]==0))
		cache_state<=CACHE_MEMREAD;
	else if(cache_state==CACHE_UPDATE_BEGIN&(tagarray[araddr_index][21]==1))begin
		cache_state<=CACHE_MEMWRITE;
		tagarray[araddr_index][21]<='d0;
	end
	else if(cache_state==CACHE_MEMWRITE&(mem_write_finish))
		cache_state<=CACHE_MEMREAD;
	else if((cache_state==CACHE_MEMREAD)&rcache_en&rlast)
		cache_state<=CACHE_GET;
	else if((cache_state==CACHE_MEMREAD)&wcache_en&rlast)
		cache_state<=CACHE_WRITE;
	else if(cache_state==CACHE_GET)
		cache_state<=CACHE_FINISH;
	else if(cache_state==CACHE_WRITE)
		cache_state<=CACHE_FINISH;
	else if(cache_state==CACHE_FINISH&wb_reg_finish)
		cache_state<=CACHE_IDLE;
end
assign cache_finish=(cache_state==CACHE_FINISH);
//chache_finish阶段 rdata成立
//;//对齐
/*always @(posedge clk)begin*/
	/*if(cache_state==CACHE_GET)*/
		/*rdata<=dataarray[araddr_index][araddr_offset[5:3]];*/
/*end*/
assign rdata_align=rdata>>((araddr&{29'b0,3'b111})*8);//读数据对齐 如果是ld 右移8位 lh16 lw32
//总线读写地址
wire [31:0]araddr_block;
assign araddr_block=araddr&(~32'b111111);

wire [31:0]wraddr_block;
//assign wraddr_block={araddr_tag[19:0],araddr_index,6'b0};
assign wraddr_block={tagarray[araddr_index][19:0],araddr_index,6'b0};
assign mem_read_begin=(cache_state==CACHE_MEMREAD);
//总线信号
///////////////////mem_read////////////////////////可以看成一个相对独立的模块
//输入:mem_read_begin araddr_block 输出:mem_read_end,dataarray
//读通道
wire rvalid;
wire rready;
wire arready;
wire arvalid;
reg  [2:0]d_r_len;
reg  [2:0]d_w_len;
wire [1:0]arburst;
wire [7:0]arlen;
wire [2:0]arsize;
wire [1:0]rresp;

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
	else if(read_state==READ_FINISH&(cache_finish))
		read_state<=READ_IDLE;
end
//read_finish信号
//assign mem_read_finish=(read_state==READ_FINISH); 
assign mem_write_finish=(write_state==WRITE_FINISH);
//arvalid信号
assign arvalid=(read_state==READ_IDLE)&mem_read_begin;
//r_data信号
//mem_read
always @(posedge clk)begin
		if(rvalid&rready)begin
		//dataarray[araddr_index][d_r_len]<=rdata_axi;
		d_r_len<=d_r_len+1;
	end
	if(rlast)begin
		tagarray[araddr_index][20]<='d1;
		tagarray[araddr_index][19:0]<=araddr_tag;
		d_r_len<=0;
	end
	if(rst)begin
		for(integer i=0;i<NUM_LINES;i=i+1)
			tagarray[i]<=22'b0;
		/*for(integer i=0;i<NUM_LINES;i=i+1)*/
			/*for(integer j=0;j<OFFSET_WIDTH;j=j+1)*/
				/*dataarray[i][j]<=0;*/
		d_r_len<=0;
	end
end
assign arburst=2'b01;
assign arlen=8;
assign arsize='d3;
//rready信号
assign rready=(read_state==READ_ARREADY)|(read_state==READ_TRANS);
////////////////////////////////////////////////////
assign mem_write_begin=(cache_state==CACHE_MEMWRITE);
///////////////////mem_write////////////////////////可以看成一个相对独立的模块
//输入:mem_write_begin awaddr_block dataarray输出:mem_write_finish
//写通道信号
//写信号
wire [1:0]awburst;
wire [7:0]awlen;
wire awready;
wire wlast;
wire wready;
wire [1:0]bresp;
wire bready;
wire bvalid;
assign awburst=2'b01;
assign awlen=8;
always @(posedge clk)begin
	if(rst)
		write_state<=WRITE_IDLE;
	else if((write_state==WRITE_IDLE)&awready&awvalid)
		write_state<=WRITE_AW_READY;
	else if((write_state==WRITE_AW_READY)&wready)
		write_state<=WRITE_W_READY;
	else if((write_state==WRITE_W_READY)&wlast)
		write_state<=WRITE_FINISH;
	else if(write_state==WRITE_FINISH&(cache_finish))
		write_state<=WRITE_IDLE;
end
//awvalid wvalid wdata wstrb信号

reg   wvalid;
wire [63:0]wdata_axi;
wire [31:0]awaddr;
reg  [63:0]r_wdata;
wire [7:0]wstrb;
reg  [7:0]c_awlen;
assign awvalid=(write_state==WRITE_IDLE)&(mem_write_begin);
//assign wvalid= ((write_state==WRITE_W_READY)|(write_state==WRITE_AW_READY))&(mem_write_begin);
assign awaddr=wraddr_block;
assign wdata_axi =r_wdata;
assign wstrb =8'b11111111;
//r_wdata信号
always@(posedge clk)begin
	if(wready)begin
		//r_wdata<=dataarray[araddr_index][d_w_len];
		d_w_len<=d_w_len+1;
		c_awlen<=c_awlen+1;
		wvalid<=1;
	end
	else begin 
		//r_wdata<=dataarray[araddr_index][0];
		//r_wdata<=64'hffffffff;
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
assign bready=(write_state==WRITE_AW_READY)&(write_state==WRITE_W_READY);
///////////////////////////////////////
/////////////////cache_write//////////
wire [63:0]wmask_full;
assign wmask_full=(wmask==8'b00000001)?64'h00ff:
							  	(wmask==8'b00000011)?64'hffff:
							  	(wmask==8'b00001111)?64'hffffffff:
									64'hffffffffffffffff
	;
wire [63:0]wdata_align;
wire [63:0]wmask_align;
assign wdata_align=wdata<<((waddr&{29'b0,3'b111})*8);
assign wmask_align=wmask_full<<((waddr&{29'b0,3'b111})*8);
always @(posedge clk)
	if(cache_state==CACHE_WRITE)begin
	  tagarray[waddr_index][21]<=1'b1;
		//dataarray[waddr_index][waddr_offset[5:3]]<=(dataarray[waddr_index][waddr_offset[5:3]]&(~wmask_align))|(wdata_align&wmask_align);
	if(rst)
	  tagarray[waddr_index][21]<=1'b0;
		
		end
assign araddr2=araddr_block;
assign arvalid2=arvalid;
assign arburst2=arburst;
assign arlen2=arlen;
assign arsize2=arsize;
assign arready=arready2;
assign rdata_axi=rdata2;
assign rresp=rresp2;
assign rvalid=rvalid2;
assign rlast=rlast2;
assign rready2=rready;

assign awaddr2=awaddr;
assign awvalid2=awvalid;
assign awburst2=awburst;
assign awlen2=awlen;
assign awready=awready2;
assign wdata2=wdata_axi;
assign wlast2=wlast;
assign wstrb2=wstrb;
assign wvalid2=wvalid;
assign wready=wready2;
assign bresp=bresp2;
assign bvalid=bvalid2;
assign bready2=bready;

/*sram sram_1(*/
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
 assign io_sram0_addr=(cache_state==CACHE_WRITE)?waddr_index:araddr_index;
 assign io_sram1_addr=(cache_state==CACHE_WRITE)?waddr_index:araddr_index;
 assign io_sram2_addr=(cache_state==CACHE_WRITE)?waddr_index:araddr_index;
 assign io_sram3_addr=(cache_state==CACHE_WRITE)?waddr_index:araddr_index;

 assign io_sram0_cen=1;
 assign io_sram1_cen=1;
 assign io_sram2_cen=1;
 assign io_sram3_cen=1;


/* assign io_sram0_cen=((wready)&((d_w_len=='d0)|(d_w_len=='d1)))|((rvalid&rready)&((d_r_len=='d0)|(d_r_len=='d1)))|((araddr_offset[5:3]==0)|(araddr_offset[5:3]==1));*/
 /*assign io_sram1_cen=((wready)&((d_w_len=='d2)|(d_w_len=='d3)))|((rvalid&rready)&((d_r_len=='d2)|(d_r_len=='d3)))|((araddr_offset[5:3]==2)|(araddr_offset[5:3]==3));*/
 /*assign io_sram2_cen=((wready)&((d_w_len=='d4)|(d_w_len=='d5)))|((rvalid&rready)&((d_r_len=='d4)|(d_r_len=='d5)))|((araddr_offset[5:3]==4)|(araddr_offset[5:3]==5));*/
 /*assign io_sram3_cen=((wready)&((d_w_len=='d6)|(d_w_len=='d7)))|((rvalid&rready)&((d_r_len=='d6)|(d_r_len=='d7)))|((araddr_offset[5:3]==6)|(araddr_offset[5:3]==7));*/


 assign io_sram0_wen=((rvalid&rready)&((d_r_len=='d0)|(d_r_len=='d1)))|(cache_state==CACHE_WRITE)&((waddr_offset[5:3]=='d0)|(waddr_offset[5:3]=='d1));
 assign io_sram1_wen=((rvalid&rready)&((d_r_len=='d2)|(d_r_len=='d3)))|(cache_state==CACHE_WRITE)&((waddr_offset[5:3]=='d2)|(waddr_offset[5:3]=='d3));
 assign io_sram2_wen=((rvalid&rready)&((d_r_len=='d4)|(d_r_len=='d5)))|(cache_state==CACHE_WRITE)&((waddr_offset[5:3]=='d4)|(waddr_offset[5:3]=='d5));
 assign io_sram3_wen=((rvalid&rready)&((d_r_len=='d6)|(d_r_len=='d7)))|(cache_state==CACHE_WRITE)&((waddr_offset[5:3]=='d6)|(waddr_offset[5:3]=='d7));

assign io_sram0_wdata=((rvalid&rready)&(d_r_len==0))?{64'b0,rdata_axi}:
                       ((rvalid&rready)&(d_r_len==1))?{rdata_axi,64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d0))?{64'b0,wdata_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d1))?{wdata_align,64'b0}:'d0
											 ;
assign io_sram1_wdata=((rvalid&rready)&(d_r_len==2))?{64'b0,rdata_axi}:
                       ((rvalid&rready)&(d_r_len==3))?{rdata_axi,64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d2))?{64'b0,wdata_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d3))?{wdata_align,64'b0}:'d0
											 ;
assign io_sram2_wdata=((rvalid&rready)&(d_r_len==4))?{64'b0,rdata_axi}:
                       ((rvalid&rready)&(d_r_len==5))?{rdata_axi,64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d4))?{64'b0,wdata_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d5))?{wdata_align,64'b0}:'d0
											 ;
assign io_sram3_wdata= ((rvalid&rready)&(d_r_len==6))?{64'b0,rdata_axi}:
                       ((rvalid&rready)&(d_r_len==7))?{rdata_axi,64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d6))?{64'b0,wdata_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d7))?{wdata_align,64'b0}:'d0
											 ;

assign io_sram0_wmask=((rvalid&rready)&(d_r_len==0))?{64'b0,{64{1'b1}}}:
	                     ((rvalid&rready)&(d_r_len==1))?{{64{1'b1}},64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d0))?{64'b0,wmask_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d1))?{wmask_align,64'b0}
											 :'d0
											 ;
 assign io_sram1_wmask=((rvalid&rready)&(d_r_len==2))?{64'b0,{64{1'b1}}}:
	                     ((rvalid&rready)&(d_r_len==3))?{{64{1'b1}},64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d2))?{64'b0,wmask_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d3))?{wmask_align,64'b0}
											 :'d0
											 ;
 assign io_sram2_wmask=((rvalid&rready)&(d_r_len==4))?{64'b0,{64{1'b1}}}:
	                     ((rvalid&rready)&(d_r_len==5))?{{64{1'b1}},64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d4))?{64'b0,wmask_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d5))?{wmask_align,64'b0}
											 :'d0
											 ;
 assign io_sram3_wmask=((rvalid&rready)&(d_r_len==6))?{64'b0,{64{1'b1}}}:
	                     ((rvalid&rready)&(d_r_len==7))?{{64{1'b1}},64'b0}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d6))?{64'b0,wmask_align}:
                       ((cache_state==CACHE_WRITE)&(waddr_offset[5:3]=='d7))?{wmask_align,64'b0}
											 :'d0
											 ;
 assign rdata=	(araddr_offset[5:3]==0)?io_sram0_rdata[63:0]:
							 	(araddr_offset[5:3]==1)?io_sram0_rdata[127:64]:
							 	(araddr_offset[5:3]==2)?io_sram1_rdata[63:0]:
							 	(araddr_offset[5:3]==3)?io_sram1_rdata[127:64]:
							 	(araddr_offset[5:3]==4)?io_sram2_rdata[63:0]:
							 	(araddr_offset[5:3]==5)?io_sram2_rdata[127:64]:
							 	(araddr_offset[5:3]==6)?io_sram3_rdata[63:0]:
							 	io_sram3_rdata[127:64];
 always@(posedge clk)begin
	 if(wready)begin
		 if(d_w_len==0)
			 r_wdata<=io_sram0_rdata[63:0];
		 else if(d_w_len==1)
			 r_wdata<=io_sram0_rdata[127:64];
		 else if(d_w_len==2)
			 r_wdata<=io_sram1_rdata[63:0];
		 else if(d_w_len==3)
			 r_wdata<=io_sram1_rdata[127:64];
		 else	 if(d_w_len==4)
			 r_wdata<=io_sram2_rdata[63:0];
		 else if(d_w_len==5)
			 r_wdata<=io_sram2_rdata[127:64];
	   else if(d_w_len==6)
			 r_wdata<=io_sram3_rdata[63:0];
		 else if(d_w_len==7)
			 r_wdata<=io_sram3_rdata[127:64];
	 end
							end
endmodule

