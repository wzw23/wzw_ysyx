 module device(
	input  clk,
	input  rst,
	input  r_ren,
	input  [31:0]raddr,
	output [63:0]rdata,
	input  r_wen,
	input  [31:0]waddr,
	input  [63:0]wdata,
	input  [7:0]wmask,
	input  inst_update,
	output  device_finish
);
//总线信号
     
		wire [31:0]araddr;
		wire arvalid;
		wire arready;
		wire [1:0]rresp;
		wire rvalid;
		wire rready;
		//写地址通;
		wire [31:0]awaddr;
		wire awvalid;
		wire awready;
		//写数据通;
		wire [7:0]wstrb;
		wire wvalid;
		wire wready;
		//写回复通;
		wire [1:0]bresp;
		wire bvalid;
		wire bread;
		assign araddr=raddr;
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
		assign awaddr=waddr;
		assign wstrb =wmask;
	//bready信号
	  assign bready= (write_state==WRITE_AW_WREADY);
		//MEM_状态信息
		reg [2:0]mem_state;
		parameter MEM_BEGIN            =3'd0,
			MEM_WAIT_WRITE_FINISH=3'd1,
			MEM_WAIT_READ_FINISH =3'd2,
			MEM_WAIT_ALL         =3'd3,
			MEM_FINISH           =3'd4;
		///////////////////
		assign r_rdata_ld=reg_rdata;
		assign mem_finish=(mem_state==MEM_FINISH);
		Reg #(1,1'b0) finish(clk,rst,mem_finish,inst_finish,1'b1);
endmodule
