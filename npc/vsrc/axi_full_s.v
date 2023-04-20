module axi_full_s(
	input  clk,
	input  rst,
	//读地址通道 
	input  [31:0]araddr,
	input  arvalid,
	input  [1:0]arburst,//常为01 因为是通过cache传输
	input  [7:0]arlen,
	input  [2:0]arsize,//因为传输rdata为64bit 所以arsize恒为3 因为主机从机rdata宽度一样 所以用不到
	output  arready,
	//读数据通道
	output [63:0]rdata,
	output reg [1:0]rresp,
	output rvalid,
	output rlast,
	input reg rready
	//写地址通道
 /* input  [31:0]awaddr,*/
	/*input  awvalid,*/
	/*output awready,*/
	/*//写数据通道*/
	/*input  [63:0]wdata,*/
	/*input  [7:0]wstrb,*/
	/*input  wvalid,*/
	/*output wready,*/
	/*//写回复通道*/
	/*output [1:0]bresp,*/
	/*output bvalid,*/
	/*input  bready*/
);
import "DPI-C" function void vpmem_read(
	input longint mraddr, output longint mrdata);

//import "DPI-C" function void vpmem_write(
			//input longint waddr, input longint wdata, input byte wmask,input longint use_wen);
//寄存器 写回馈信号也需要寄存器
reg [31:0]r_araddr;
reg [7:0] c_arlen;
//状态机
parameter   READ_IDLE        = 3'd0 ,
						READ_ARVALID=3'd1,
						READ_TRANS=3'd2,
						READ_FINISH=3'd3;

reg [2:0]state;
always @(posedge clk)begin
	if(rst)
		state<=READ_IDLE;
	else if((state==READ_IDLE)&arvalid)
		state<=READ_ARVALID;
	else if((state==READ_ARVALID)&rready)
		state<=READ_TRANS;
	else if((state==READ_TRANS)&rlast)
		state<=READ_FINISH;
	else if(state==READ_FINISH)
		state<=READ_IDLE;
end
//arready信号
assign arready=(state==READ_IDLE);
//araddr信号寄存器
always @(posedge clk)begin
	if(arvalid&&arready)
		r_araddr<=araddr;
end
//rdata信号
always @(posedge clk)begin
	//if(rvalid&rready)begin
	if(rst|(c_arlen==arlen))begin
		c_arlen<=0;
	end
	if(state==READ_TRANS&(arburst==2'b01))begin
		vpmem_read({{32'b0},r_araddr}, rdata);
		rresp<='d0;
		rvalid<='d1;//只有读出数据之后才能让其有效
		r_araddr<=r_araddr+32'd8;//因为一次限制读8B 所以每读上一个数据地址移动8位
		c_arlen<=c_arlen+1;
end
  else 
		rvalid<='d0;
	if(rlast)begin
		rvalid<='d0;
		c_arlen<=0;
	end
end
//
//rlast信号
assign rlast=(c_arlen==arlen);
//写信号状态机
/*reg [2:0]write_state;*/
/*parameter     WRITE_IDLE       = 3'd0 ,*/
              /*WRITE_AW_WVALID	 =3'd1,*/
							/*WRITE_FINISH 		 =3'd2;*/
/*always @(posedge clk)begin*/
	/*if(rst)*/
		/*write_state<=WRITE_IDLE;*/
	/*else if((write_state==WRITE_IDLE)&awvalid&wvalid)*/
		/*write_state<=WRITE_AW_WVALID;*/
	/*else if(write_state==WRITE_IDLE)*/
		/*write_state<=WRITE_IDLE;*/
	/*else if((write_state==WRITE_AW_WVALID)&bready)*/
		/*write_state<=WRITE_FINISH;*/
	/*else if(write_state==WRITE_AW_WVALID)*/
		/*write_state<=WRITE_AW_WVALID;*/
	/*else if(write_state==WRITE_FINISH)*/
		/*write_state<=WRITE_IDLE;*/
/*end*/
/*//awready wready信号*/
/*assign awready=(write_state==WRITE_IDLE);*/
/*assign wready =(write_state==WRITE_IDLE);*/

/*always @(posedge clk)begin*/
	/*if(write_state==WRITE_AW_WVALID)begin*/
		/*//vpmem_write(awaddr, wdata, wstrb,{{63'b0},r_wen});*/
		/*vpmem_write({{32'b0},awaddr}, wdata, wstrb,64'd1);*/
		/*bvalid<='d1;//只有读出数据之后才能让其有效*/
		/*bresp<='d0;*/
/*end*/
/*else begin*/
		/*bvalid<='d0;*/
		/*bresp<=2'b10;*/
	/*end*/
/*end*/

endmodule
