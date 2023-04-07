/*module axi_sram #(*/
		 /*TARGET_SLAVE_BASE_ADDR=0,*/
		 /*AXI_BURST_LEN=16,*/
		 /*AXI_ADDR_WIDTH=32,*/
		 /*AXI_DATA_WIDTH=64*/
/*)(*/
		/*input     clk,*/
		/*input     rst,*/
		/*output    [7:0]  axi_awlen ,*/
		/*output    [2:0]  axi_awsize, */
		/*output    [1:0]  axi_awburst,*/
		/*output    [AXI_ADDR_WIDTH-1:0]  axi_awaddr,*/
		/*output    axi_awvalid,*/
		/*output    [AXI_DATA_WIDTH/8-1:0]axi_wstrb,*/
		/*output    [AXI_DATA_WIDTH-1:0]  axi_wdata,*/
		/*output                          axi_wlast,*/
		/*output                          axi_wvalid,*/
		/*output                          axi_bready,*/

		/*output    [7:0]  axi_arlen ,*/
		/*output    [2:0]  axi_arsize, */
		/*output    [1:0]  axi_arburst,*/

		/*output    [AXI_ADDR_WIDTH-1:0]  axi_araddr,*/
		/*output    axi_arvalid,*/
		/*output    axi_rready,*/

		/*//从机信号*/
		/*input     axi_awready,*/
		/*input     axi_wready,*/

		/*input     axi_arready,*/
    /*input     [AXI_DATA_WIDTH-1:0]axi_rdata,*/
		/*input     axi_rvalid,*/
		/*input                            axi_rlast,*/
/*);*/
/*function integer clogb2(input integer number);*/
	/*begin*/
		/*for(clogb2=0;number>0;clogb2=clogb2+1)*/
			/*number=number>>1;*/
	/*end*/
/*endfunction*/
/*///////////////////////////////状态机///////*/
/*parameter  state_idle='d0,*/

					 /*state_write_start='d1,*/
					 /*state_write_trans='d2,*/
					 /*state_write_end  ='d3,*/
					 
					 /*state_read_starta='d4,*/
					 /*state_read_trans ='d5,*/
					 /*state_read_end   ='d6;*/

/*reg [7:0] st_current_write;*/
/*reg [7:0] st_next_write;*/

/*reg [7:0] st_current_read;*/
/*reg [7:0] st_next_read;*/
/*///////////////////////////////////////////*/
/*//assign axi_awsize=clogb2(AXI_DATA_WIDTH/8-1);*/
/*reg [AXI_ADDR_WIDTH-1:0]r_axi_awaddr;*/
/*reg                     r_axi_awvalid;*/

/*reg [AXI_DATA_WIDTH-1:0]r_axi_wdata;*/
/*reg                     r_axi_wlast;*/
/*reg                     r_axi_wvalid;*/

/*reg [AXI_ADDR_WIDTH-1:0]r_axi_araddr;*/
/*reg                     r_axi_arvalid;*/
/*reg                     r_write_start;*/
/*reg                     r_read_start;*/
/*reg                     r_axi_rready;*/
/*reg                     r_axi_arready;*/
/*reg [AXI_DATA_WIDTH-1:0]r_axi_read_data;*/

/*reg [7:0]               r_burst_cnt;*/


/*////////////////write/////////////////*/
/*assign axi_awlen=AXI_BURST_LEN;*/
/*assign axi_awsize=3;*/
/*assign axi_awburst=2'b01;*/

/*assign axi_awaddr=r_axi_awaddr+TARGET_SLAVE_BASE_ADDR;*/
/*assign axi_awvalid=r_axi_awvalid;*/

/*assign axi_wdata=r_axi_wdata;*/
/*assign axi_wlast=r_axi_wlast;*/
/*assign axi_wvalid=r_axi_wvalid;*/

/*assign axi_bready=1;*/
/*////////////////read//////////////////*/
/*assign axi_arlen=AXI_BURST_LEN;*/
/*assign axi_arsize=3;*/
/*assign axi_arburst=2'b01;*/

/*assign axi_araddr=r_axi_awaddr+TARGET_SLAVE_BASE_ADDR;*/
/*assign axi_arvalid=r_axi_awvalid;*/
/*assign axi_rready=r_axi_rready;*/
/*////////////////////////////////////*/
/*always@(posedge clk)*/
	/*if(r_write_start)*/
		/*r_axi_awvalid<=1'b1;	*/
	/*else if(axi_awvalid&&axi_awready)*/
		/*r_axi_awvalid<=1'b0;*/
	/*else */
		/*r_axi_awvalid<=r_axi_awvalid;*/

/*always@(posedge clk)*/
	/*if(rst)*/
		/*r_axi_awaddr<='d0;*/
	/*else if(r_write_start)*/
		/*r_axi_awaddr<='d0;*/
	/*else */
		/*r_axi_awaddr<=r_axi_awaddr;*/

/*always@(posedge clk)*/
	/*if(rst)*/
		/*r_axi_wvalid<='d0;*/
	/*else if(axi_awvalid&&axi_awready)*/
		/*r_axi_wvalid<='d1;*/
	/*else */
		/*r_axi_wvalid<=r_axi_wvalid;*/

/*always@(posedge clk)*/
	/*if(rst||r_axi_wlast)*/
		/*r_axi_wdata<='d1;*/
	/*else if(axi_wvalid&&axi_wready)*/
		/*r_axi_wdata<=r_axi_wdata+1;*/
	/*else */
		/*r_axi_wdata<=r_axi_wdata;*/

/*always@(posedge clk)*/
	/*if(rst)*/
		/*r_burst_cnt<='d0;*/
	/*else if(axi_wvalid&&axi_wready) */
		/*r_burst_cnt<=r_burst_cnt+1;*/
	/*else*/
		/*r_burst_cnt<=r_burst_cnt;*/

/*always@(posedge clk)//last信号*/
	/*//burst-len>2*/
	/*if(r_burst_cnt==AXI_BURST_LEN-2)*/
		/*r_axi_wlast<='d1;*/
	/*else */
		/*r_axi_wlast<='d0;*/

/*always@(posedge clk)*/
	/*if(rst||(axi_arvalid&&axi_arready))*/
		/*r_axi_arvalid<='d0;*/
	/*else if(r_read_start) */
		/*r_axi_arvalid<='d1;*/
	/*else*/
		/*r_axi_arvalid<=r_axi_arvalid;*/

/*always@(posedge clk)*/
	/*if(rst)*/
		/*r_axi_araddr<='d0;*/
	/*else */
		/*r_axi_araddr<='d0;*/

/*always@(posedge clk)*/
	/*if(rst||axi_rlast)*/
		/*r_axi_rready<='d0;*/
	/*else if(axi_arvalid&&axi_arready) */
		/*r_axi_rready<='d1;*/
	/*else*/
		/*r_axi_rready<=r_axi_rready;*/
/*always@(posedge clk)*/
	/*if(axi_rvalid&&axi_rready) */
		/*r_axi_read_data<=axi_rdata;*/
	/*else*/
		/*r_axi_read_data<=r_axi_read_data;*/
/*endmodule*/
