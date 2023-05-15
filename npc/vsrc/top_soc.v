module top_soc(
    input clock,
    input reset, 
    output [31:0 ]          ir,
    output [63:0 ]          ira,
    output                  stop_n,
    output                  skip,
    output [63:0]           pc_dut
);


    wire [31:0] S_AXI_0_araddr;
    wire S_AXI_0_arready;
    wire S_AXI_0_arvalid;
    
    wire [63:0] S_AXI_0_rdata;
    wire S_AXI_0_rvalid;
    wire S_AXI_0_rready;

    

    wire [31:0] S_AXI_0_awaddr;
    wire S_AXI_0_awready;
    wire S_AXI_0_awvalid;

    wire [63:0] S_AXI_0_wdata;
    wire S_AXI_0_wvalid;
    wire S_AXI_0_wready;
    wire [3:0]  S_AXI_0_wstrb;
    assign S_AXI_0_wstrb = 4'b1111;


    wire S_AXI_0_bready;
    assign S_AXI_0_bready = 1'b1;


top top(
    .clk(clock)
    ,.rst_n(~reset)

	,.ar_addr(io_master_araddr)
    ,.ar_valid(io_master_arvalid)
    ,.ar_ready(io_master_arready)

    ,.r_valid(io_master_rvalid)
    ,.r_ready(io_master_rready)
    ,.r_data(io_master_rdata)

    ,.aw_addr(io_master_awaddr)
    ,.aw_ready(io_master_awready)
    ,.aw_valid(io_master_awvalid)

    ,.w_data(io_master_wdata)
    ,.w_valid(io_master_wvalid)
    ,.w_ready(io_master_wready)


	/*
	,.stop_n(stop_n)
    	,.skip(skip)
	,.pc_dut(pc_dut)
	
    	,.io_master_awready(io_master_awready)
	,.io_master_awvalid(io_master_awvalid)
	,.io_master_awid(io_master_awid)
	,.io_master_awaddr(io_master_awaddr)
	,.io_master_awlen(io_master_awlen)
	,.io_master_awsize(io_master_awsize)
	,.io_master_awburst(io_master_awburst)
	,.io_master_wready(io_master_wready)
	,.io_master_wvalid(io_master_wvalid)
	,.io_master_wdata(io_master_wdata)
	,.io_master_wstrb(io_master_wstrb)
	,.io_master_wlast(io_master_wlast)
	,.io_master_bready(io_master_bready)
	,.io_master_bvalid(io_master_bvalid)
	,.io_master_bid(io_master_bid)
	,.io_master_bresp(io_master_bresp)
	,.io_master_arready(io_master_arready)
	,.io_master_arvalid(io_master_arvalid)
	,.io_master_arid(io_master_arid)
	,.io_master_araddr(io_master_araddr)
	,.io_master_arlen(io_master_arlen)
	,.io_master_arsize(io_master_arsize)
	,.io_master_arburst(io_master_arburst)
	,.io_master_rready(io_master_rready)
	,.io_master_rvalid(io_master_rvalid)
	,.io_master_rid(io_master_rid)
	,.io_master_rresp(io_master_rresp)
	,.io_master_rdata(io_master_rdata)
	,.io_master_rlast(io_master_rlast)

	,.io_sram0_addr         (io_sram0_addr)
        ,.io_sram0_cen          (io_sram0_cen)
        ,.io_sram0_wen          (io_sram0_wen)
        ,.io_sram0_wmask        (io_sram0_wmask)
        ,.io_sram0_wdata        (io_sram0_wdata)
        ,.io_sram0_rdata        (io_sram0_rdata)

        ,.io_sram1_addr         (io_sram1_addr)
        ,.io_sram1_cen          (io_sram1_cen)
        ,.io_sram1_wen          (io_sram1_wen)
        ,.io_sram1_wmask        (io_sram1_wmask)
        ,.io_sram1_wdata        (io_sram1_wdata)
        ,.io_sram1_rdata        (io_sram1_rdata)

        ,.io_sram2_addr         (io_sram2_addr)
        ,.io_sram2_cen          (io_sram2_cen)
        ,.io_sram2_wen          (io_sram2_wen)
        ,.io_sram2_wmask        (io_sram2_wmask)
        ,.io_sram2_wdata        (io_sram2_wdata)
        ,.io_sram2_rdata        (io_sram2_rdata)

        ,.io_sram3_addr         (io_sram3_addr)
        ,.io_sram3_cen          (io_sram3_cen)
        ,.io_sram3_wen          (io_sram3_wen)
        ,.io_sram3_wmask        (io_sram3_wmask)
        ,.io_sram3_wdata        (io_sram3_wdata)
        ,.io_sram3_rdata        (io_sram3_rdata)

        ,.io_sram4_addr         (io_sram4_addr)
        ,.io_sram4_cen          (io_sram4_cen)
        ,.io_sram4_wen          (io_sram4_wen)
        ,.io_sram4_wmask        (io_sram4_wmask)
        ,.io_sram4_wdata        (io_sram4_wdata)
        ,.io_sram4_rdata        (io_sram4_rdata)

        ,.io_sram5_addr         (io_sram5_addr)
        ,.io_sram5_cen          (io_sram5_cen)
        ,.io_sram5_wen          (io_sram5_wen)
        ,.io_sram5_wmask        (io_sram5_wmask)
        ,.io_sram5_wdata        (io_sram5_wdata)
        ,.io_sram5_rdata        (io_sram5_rdata)

        ,.io_sram6_addr         (io_sram6_addr)
        ,.io_sram6_cen          (io_sram6_cen)
        ,.io_sram6_wen          (io_sram6_wen)
        ,.io_sram6_wmask        (io_sram6_wmask)
        ,.io_sram6_wdata        (io_sram6_wdata)
        ,.io_sram6_rdata        (io_sram6_rdata)

        ,.io_sram7_addr         (io_sram7_addr)
        ,.io_sram7_cen          (io_sram7_cen)
        ,.io_sram7_wen          (io_sram7_wen)
        ,.io_sram7_wmask        (io_sram7_wmask)
        ,.io_sram7_wdata        (io_sram7_wdata)
        ,.io_sram7_rdata        (io_sram7_rdata)

		*/	
    
);

    wire[5:0] 	    io_sram0_addr;			
	wire 	        io_sram0_cen;
	wire 	        io_sram0_wen;
	wire[127:0] 	io_sram0_wmask;
	wire[127:0] 	io_sram0_wdata;
	wire[127:0] 	io_sram0_rdata;
	wire[5:0] 	    io_sram1_addr;
	wire 	        io_sram1_cen;
	wire 	        io_sram1_wen;
	wire[127:0] 	io_sram1_wmask;
	wire[127:0] 	io_sram1_wdata;
	wire[127:0] 	io_sram1_rdata;
	wire[5:0] 	    io_sram2_addr;
	wire 	        io_sram2_cen;
	wire 	        io_sram2_wen;
	wire[127:0] 	io_sram2_wmask;
	wire[127:0] 	io_sram2_wdata;
	wire[127:0] 	io_sram2_rdata;
	wire[5:0] 	    io_sram3_addr;
	wire 	        io_sram3_cen;
	wire 	        io_sram3_wen;
	wire[127:0] 	io_sram3_wmask;
	wire[127:0] 	io_sram3_wdata;
	wire[127:0] 	io_sram3_rdata;
	wire[5:0] 	    io_sram4_addr;
	wire 	        io_sram4_cen;
	wire 	        io_sram4_wen;
	wire[127:0] 	io_sram4_wmask;
	wire[127:0] 	io_sram4_wdata;
	wire[127:0] 	io_sram4_rdata;
	wire[5:0] 	    io_sram5_addr;
	wire 	        io_sram5_cen;
	wire 	        io_sram5_wen;
	wire[127:0] 	io_sram5_wmask;
	wire[127:0] 	io_sram5_wdata;
	wire[127:0] 	io_sram5_rdata;			
	wire[5:0] 	    io_sram6_addr;
	wire 	        io_sram6_cen;
	wire 	        io_sram6_wen;
	wire[127:0] 	io_sram6_wmask;
	wire[127:0] 	io_sram6_wdata;
	wire[127:0] 	io_sram6_rdata;
	wire[5:0] 	    io_sram7_addr;
	wire 	        io_sram7_cen;
	wire 	        io_sram7_wen;
	wire[127:0] 	io_sram7_wmask;
	wire[127:0] 	io_sram7_wdata;
	wire[127:0] 	io_sram7_rdata;


    wire  	        io_master_awready;
	wire   	        io_master_awvalid;
	wire  [3:0] 	io_master_awid;
	wire  [31:0] 	io_master_awaddr;
	wire  [7:0] 	io_master_awlen;
	wire  [2:0] 	io_master_awsize;
	wire  [1:0] 	io_master_awburst;

	wire  	        io_master_wready;
	wire   	        io_master_wvalid;
	wire  [63:0] 	io_master_wdata;
	wire  [7:0] 	io_master_wstrb;
	wire   	        io_master_wlast;

	wire   	        io_master_bready;
	wire  	        io_master_bvalid;
	wire [3:0] 	    io_master_bid;
	wire [1:0] 	    io_master_bresp;

	wire  	        io_master_arready;
	wire   	        io_master_arvalid;
	wire  [3:0] 	io_master_arid;
	wire  [31:0] 	io_master_araddr;
	wire  [7:0] 	io_master_arlen;
	wire  [2:0] 	io_master_arsize;
	wire  [1:0] 	io_master_arburst;

	wire   	        io_master_rready;
	wire  	        io_master_rvalid;
	wire [3:0] 	    io_master_rid;
	wire [1:0] 	    io_master_rresp;
	wire [63:0] 	io_master_rdata;
	wire  	        io_master_rlast;
/*
S011HD1P_X32Y2D128_BW sram0(
	.Q		(io_sram0_rdata)
	,.CLK	(clock)
	,.CEN	(io_sram0_cen)
	,.WEN	(io_sram0_wen)
	,.BWEN	(io_sram0_wmask)
	,.A		(io_sram0_addr)
	,.D		(io_sram0_wdata)
);

S011HD1P_X32Y2D128_BW sram1(
	.Q		(io_sram1_rdata)
	,.CLK	(clock)
	,.CEN	(io_sram1_cen)
	,.WEN	(io_sram1_wen)
	,.BWEN	(io_sram1_wmask)
	,.A		(io_sram1_addr)
	,.D		(io_sram1_wdata)
);
S011HD1P_X32Y2D128_BW sram2(
	.Q		(io_sram2_rdata)
	,.CLK	(clock)
	,.CEN	(io_sram2_cen)
	,.WEN	(io_sram2_wen)
	,.BWEN	(io_sram2_wmask)
	,.A		(io_sram2_addr)
	,.D		(io_sram2_wdata)
);
S011HD1P_X32Y2D128_BW sram3(
	.Q		(io_sram3_rdata)
	,.CLK	(clock)
	,.CEN	(io_sram3_cen)
	,.WEN	(io_sram3_wen)
	,.BWEN	(io_sram3_wmask)
	,.A		(io_sram3_addr)
	,.D		(io_sram3_wdata)
);
S011HD1P_X32Y2D128_BW sram4(
	.Q		(io_sram4_rdata)
	,.CLK	(clock)
	,.CEN	(io_sram4_cen)
	,.WEN	(io_sram4_wen)
	,.BWEN	(io_sram4_wmask)
	,.A		(io_sram4_addr)
	,.D		(io_sram4_wdata)
);
S011HD1P_X32Y2D128_BW sram5(
	.Q		(io_sram5_rdata)
	,.CLK	(clock)
	,.CEN	(io_sram5_cen)
	,.WEN	(io_sram5_wen)
	,.BWEN	(io_sram5_wmask)
	,.A		(io_sram5_addr)
	,.D		(io_sram5_wdata)
);
S011HD1P_X32Y2D128_BW sram6(
	.Q		(io_sram6_rdata)
	,.CLK	(clock)
	,.CEN	(io_sram6_cen)
	,.WEN	(io_sram6_wen)
	,.BWEN	(io_sram6_wmask)
	,.A		(io_sram6_addr)
	,.D		(io_sram6_wdata)
);
S011HD1P_X32Y2D128_BW sram7(
	.Q		(io_sram7_rdata)
	,.CLK	(clock)
	,.CEN	(io_sram7_cen)
	,.WEN	(io_sram7_wen)
	,.BWEN	(io_sram7_wmask)
	,.A		(io_sram7_addr)
	,.D		(io_sram7_wdata)
);
*/
myip_v1_0_S00_AXI myip_v1_0_S00_AXI_inst (
		.S_AXI_ACLK(clock),
		.S_AXI_ARESETN(~reset),
		
		.S_AXI_AWADDR(io_master_awaddr),
		.S_AXI_AWPROT(),
		.S_AXI_AWVALID(io_master_awvalid),
		.S_AXI_AWREADY(io_master_awready),
        .S_AXI_AWID(io_master_awid),

		.S_AXI_WDATA(io_master_wdata),
		.S_AXI_WSTRB(io_master_wstrb),
		.S_AXI_WVALID(io_master_wvalid),
		.S_AXI_WREADY(io_master_wready),

		.S_AXI_BRESP(io_master_bresp),
		.S_AXI_BVALID(io_master_bvalid),
		.S_AXI_BREADY(1'b1),
		.S_AXI_BID(io_master_bid),

		.S_AXI_ARADDR(io_master_araddr),
		.S_AXI_ARPROT(),
		.S_AXI_ARVALID(io_master_arvalid),
		.S_AXI_ARREADY(io_master_arready),
        .S_AXI_ARID(io_master_arid),


		.S_AXI_RDATA(io_master_rdata),
		.S_AXI_RRESP(io_master_rresp),
		.S_AXI_RVALID(io_master_rvalid),
		.S_AXI_RREADY(io_master_rready),
        .S_AXI_RID(io_master_rid)
	);


endmodule
