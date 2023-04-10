module mem #(parameter ADDR_WIDTH=64,//地址位宽
	                parameter DATA_WIDTH=64)//数据位宽
(
	input clk,
	input rst,
	input r_ren,
	input [ADDR_WIDTH-1:0] r_raddr,
	output [DATA_WIDTH-1:0]r_rdata,

	input [ADDR_WIDTH-1:0] r_waddr,
	input [8-1:0] r_mask,
	input r_wen,
	input [DATA_WIDTH-1:0]r_wdata,
	input [6:0]l_choose,
	input inst_update,
	output mem_finish,
	output inst_finish,
	output [31:0]araddr,
	output arvalid,
	input arready,
	input [63:0]rdata,
	input [1:0]rresp,
	input rvalid,
	output rready,
	//写地址通道
	output [31:0]awaddr,
	output awvalid,
	input awready,
	//写数据通道
	output [63:0]wdata,
	output [7:0]wstrb,
	output wvalid,
	input wready,
	//写回复通道
	input [1:0]bresp,
	input bvalid,
	output bready

);
  wire [DATA_WIDTH-1:0]r_rdata_ld;
	wire [DATA_WIDTH-1:0]r_rdata_lw;
	wire [DATA_WIDTH-1:0]r_rdata_lwu;
	wire [DATA_WIDTH-1:0]r_rdata_lh;
	wire [DATA_WIDTH-1:0]r_rdata_lhu;
	wire [DATA_WIDTH-1:0]r_rdata_lb;
	wire [DATA_WIDTH-1:0]r_rdata_lbu;

/*import "DPI-C" function void vpmem_read(*/
	/*input longint mraddr, output longint mrdata);*/
/*import "DPI-C" function void vpmem_write(*/
			/*input longint waddr, input longint wdata, input byte wmask,input longint use_wen);*/

/*always @(negedge clk)begin*/
		/*vpmem_read(r_raddr, r_rdata_ld);*/
/*end*/
/*always @(negedge clk)begin*/
		/*vpmem_write(r_waddr, r_wdata, r_mask,{{63'b0},r_wen});*/
/*end*/
	assign r_rdata_lw ={{32{r_rdata_ld[31]}},r_rdata_ld[31:0]};
	assign r_rdata_lwu={{32'b0},r_rdata_ld[31:0]};

	assign r_rdata_lh ={{48{r_rdata_ld[15]}},r_rdata_ld[15:0]};
	assign r_rdata_lhu={{48'b0},r_rdata_ld[15:0]};

	assign r_rdata_lb ={{56{r_rdata_ld[7]}},r_rdata_ld[7:0]};
	assign r_rdata_lbu={{56'b0},r_rdata_ld[7:0]};
	MuxKey #(7,7,64) mux3(r_rdata,l_choose,{//alu_src2赋值
		7'b0000001,r_rdata_ld,
		7'b0000010,r_rdata_lw,
		7'b0000100,r_rdata_lwu,
		7'b0001000,r_rdata_lh,
		7'b0010000,r_rdata_lhu,
		7'b0100000,r_rdata_lb,
		7'b1000000,r_rdata_lbu
		});
		//总线信号
		//wire r_rdata_update;
		//assign r_rdata_update=(read_state==READ_FINISH);
		//wire rvalid_rready;
		//assign rvalid_rready=rvalid&rready;

		////////////////////////////////
		assign araddr=r_raddr[31:0];
		//寄存器
		reg [63:0]reg_rdata;
		//状态机
		parameter   READ_IDLE        = 3'd0 ,
		           	READ_ARREADY		 =3'd1,
								READ_FINISH 		 =3'd2;
		reg [2:0]read_state;
		always @(posedge clk)begin
			if(rst)
				read_state<=READ_IDLE;
			else if((read_state==READ_IDLE)&arready&arvalid)
				read_state<=READ_ARREADY;
			else if(read_state==READ_IDLE)
				read_state<=READ_IDLE;
			else if((read_state==READ_ARREADY)&rvalid)
				read_state<=READ_FINISH;
			else if(read_state==READ_ARREADY)
				read_state<=READ_ARREADY;
			else if((read_state==READ_FINISH)&(mem_state==MEM_FINISH))
				read_state<=READ_IDLE;
		end
		//arvalid信号
		assign arvalid=(read_state==READ_IDLE)&inst_update&r_ren;
		//r_data信号
		always @(posedge clk)begin
			if(rvalid&rready)
				reg_rdata<=rdata;
			else
				reg_rdata<=reg_rdata;
		end
		//rready信号
		MuxKey #(3,3,1) mux1(rready,read_state,{
			READ_ARREADY,1'd1,
			READ_FINISH,1'd0,
			READ_IDLE,1'd0
			});
	 //写信号
	 reg [2:0]write_state;
	 //状态机
	 parameter    WRITE_IDLE       = 3'd0 ,
		            WRITE_AW_WREADY	 =3'd1,
								WRITE_FINISH 		 =3'd2;
	 always @(posedge clk)begin
		 if(rst)
			 write_state<=WRITE_IDLE;
		 else if((write_state==WRITE_IDLE)&awready&wready&awvalid&wvalid)
			 write_state<=WRITE_AW_WREADY;
		 else if(write_state==WRITE_IDLE)
			 write_state<=WRITE_IDLE;
		 else if((write_state==WRITE_AW_WREADY)&bvalid)
			 write_state<=WRITE_FINISH;
		 else if(write_state==WRITE_AW_WREADY)
			 write_state<=WRITE_AW_WREADY;
		 else if(write_state==WRITE_FINISH&(mem_finish))
			 write_state<=WRITE_IDLE;
	 end
	 //awvalid wvalid wdata wstrb信号
		assign awvalid=(write_state==WRITE_IDLE)&inst_update&r_wen;
		assign wvalid= (write_state==WRITE_IDLE)&inst_update;
		assign awaddr=r_waddr[31:0];
		assign wdata =r_wdata;
		assign wstrb =r_mask;
	//bready信号
	  assign bready= (write_state==WRITE_AW_WREADY);
		//MEM_状态信息
		reg [2:0]mem_state;
		parameter MEM_BEGIN            =3'd0,
			MEM_WAIT_WRITE_FINISH=3'd1,
			MEM_WAIT_READ_FINISH =3'd2,
			MEM_WAIT_ALL         =3'd3,
			MEM_FINISH           =3'd4;
		///////////////////////////////////////
		always @(posedge clk)begin
			if(rst)
				mem_state<=MEM_BEGIN;
			else if((mem_state==MEM_BEGIN)&(inst_update)&(~r_ren)&(~r_wen))
				mem_state<=MEM_FINISH;
			else if((mem_state==MEM_BEGIN)&(inst_update)&(~r_ren)&(r_wen))
				mem_state<=MEM_WAIT_WRITE_FINISH;
			else if((mem_state==MEM_BEGIN)&(inst_update)&(r_ren)&(~r_wen))
				mem_state<=MEM_WAIT_READ_FINISH;
			else if((mem_state==MEM_BEGIN)&(inst_update)&(r_ren)&(r_wen))
				mem_state<=MEM_WAIT_ALL;
			else if((mem_state==MEM_BEGIN))
				mem_state<=MEM_BEGIN;
			else if((mem_state==MEM_WAIT_WRITE_FINISH)&(write_state==WRITE_FINISH))
				mem_state<=MEM_FINISH;
			else if((mem_state==MEM_WAIT_READ_FINISH) &(read_state ==READ_FINISH))
				mem_state<=MEM_FINISH;
			else if((mem_state==MEM_WAIT_ALL) &(read_state ==READ_FINISH)&(write_state==WRITE_FINISH))
				mem_state<=MEM_FINISH;
			else if((mem_state==MEM_WAIT_ALL) &(read_state ==READ_FINISH))
				mem_state<=MEM_WAIT_WRITE_FINISH;
			else if((mem_state==MEM_WAIT_ALL) &(write_state==WRITE_FINISH))
				mem_state<=MEM_WAIT_READ_FINISH;
			else if(mem_state==MEM_FINISH)
				mem_state<=MEM_BEGIN;
		end
		///////////////////
		assign r_rdata_ld=reg_rdata;
		assign mem_finish=(mem_state==MEM_FINISH);
		Reg #(1,1'b0) finish(clk,rst,mem_finish,inst_finish,1'b1);
		endmodule
