//`include "vsrc/define.v"

`ifndef SOC
    import "DPI-C" function void status_cpy(input int addr,input int a1,input int a0,input int write,input int pc,input int incache,input int valid);
`endif
module top(
    input                           clock,
    input                           reset,

    input                           io_master_arready,
    output                          io_master_arvalid,
    output [`AXI_ID_WIDTH-1:0]      io_master_arid,
    output [`AXI_ADDR_WIDTH-1:0]    io_master_araddr,
    output [`AXI_LEN_WIDTH-1:0]     io_master_arlen,
    output [`AXI_SIZE_WIDTH-1:0]    io_master_arsize,
    output [`AXI_BRUS_WIDTH-1:0]    io_master_arburst,


    output                          io_master_rready,
    input                           io_master_rvalid,
    input  [`AXI_ID_WIDTH-1:0]      io_master_rid,
    input  [`AXI_RESP_WIDTH-1:0]    io_master_rresp,
    input  [`AXI_DATA_WIDTH-1:0]    io_master_rdata,
    input                           io_master_rlast,

    output [`AXI_ID_WIDTH-1:0]      io_master_awid,
    output [`AXI_ADDR_WIDTH-1:0]    io_master_awaddr,
    output [`AXI_LEN_WIDTH-1:0]     io_master_awlen,
    output [`AXI_SIZE_WIDTH-1:0]    io_master_awsize,
    output [`AXI_BRUS_WIDTH-1:0]    io_master_awburst,
    input                           io_master_awready,
    output                          io_master_awvalid,

    output [`AXI_DATA_WIDTH-1:0]    io_master_wdata,
    output [`AXI_STRB_WIDTH-1:0]    io_master_wstrb,
    output                          io_master_wlast,
    output                          io_master_wvalid,
    input                           io_master_wready,

    
    input                           io_master_bvalid,
    input  [`AXI_ID_WIDTH-1:0]      io_master_bid,
    input  [`AXI_RESP_WIDTH-1:0]    io_master_bresp,
    output                          io_master_bready,


 	input 	io_interrupt,


    output 	                        io_slave_awready,		
	input 	                        io_slave_awvalid,
	input[3:0] 	                    io_slave_awid,	
	input[31:0] 	                io_slave_awaddr,	
	input[7:0] 	                    io_slave_awlen,	
	input[2:0] 	                    io_slave_awsize,	
	input[1:0] 	                    io_slave_awburst,	
	output 	                        io_slave_wready,	
	input 	                        io_slave_wvalid,	
	input[63:0] 	                io_slave_wdata,	
	input[7:0] 	                    io_slave_wstrb,	
	input 	                        io_slave_wlast,	
	input 	                        io_slave_bready,	
	output 	                        io_slave_bvalid,	
	output[3:0] 	                io_slave_bid,	
	output[1:0] 	                io_slave_bresp,	
	output 	                        io_slave_arready,	
	input 	                        io_slave_arvalid,	
	input[3:0] 		                io_slave_arid,	
	input[31:0] 		            io_slave_araddr,	
	input[7:0] 		                io_slave_arlen,	
	input[2:0] 		                io_slave_arsize,	
	input[1:0] 		                io_slave_arburst,	
	input 		                    io_slave_rready,	
	output 		                    io_slave_rvalid,	
	output[3:0] 		            io_slave_rid,	
	output[1:0] 		            io_slave_rresp,	
	output[63:0] 		            io_slave_rdata,	
	output 		                    io_slave_rlast,

    output[5:0]  	io_sram0_addr,	
	output       	io_sram0_cen,	
	output       	io_sram0_wen,	
	output[127:0] 	io_sram0_wmask,	
	output[127:0] 	io_sram0_wdata,	
	input[127:0] 	io_sram0_rdata,	
	output[5:0]  	io_sram1_addr,	
	output       	io_sram1_cen,	
	output       	io_sram1_wen,	
	output[127:0] 	io_sram1_wmask,	
	output[127:0] 	io_sram1_wdata,	
	input[127:0] 	io_sram1_rdata,	
	output[5:0]  	io_sram2_addr,	
	output       	io_sram2_cen,	
	output       	io_sram2_wen,	
	output[127:0] 	io_sram2_wmask,	
	output[127:0] 	io_sram2_wdata,	
	input[127:0] 	io_sram2_rdata,	
	output[5:0]  	io_sram3_addr,	
	output       	io_sram3_cen,	
	output       	io_sram3_wen,	
	output[127:0] 	io_sram3_wmask,	
	output[127:0] 	io_sram3_wdata,	
	input[127:0] 	io_sram3_rdata,	
	output[5:0]  	io_sram4_addr,	
	output       	io_sram4_cen,	
	output       	io_sram4_wen,	
	output[127:0] 	io_sram4_wmask,	
	output[127:0] 	io_sram4_wdata,	
	input[127:0] 	io_sram4_rdata,	
	output[5:0]  	io_sram5_addr,	
	output       	io_sram5_cen,	
	output       	io_sram5_wen,	
	output[127:0] 	io_sram5_wmask,	
	output[127:0] 	io_sram5_wdata,	
	input[127:0] 	io_sram5_rdata,	
	output[5:0]  	io_sram6_addr,	
	output       	io_sram6_cen,	
	output       	io_sram6_wen,	
	output[127:0] 	io_sram6_wmask,	
	output[127:0] 	io_sram6_wdata,	
	input[127:0] 	io_sram6_rdata,	
	output[5:0]  	io_sram7_addr,	
	output       	io_sram7_cen,	
	output       	io_sram7_wen,	
	output[127:0] 	io_sram7_wmask,	
	output[127:0] 	io_sram7_wdata,	
	input[127:0] 	io_sram7_rdata
    

);

    wire clk;
    wire rst_n;
    assign rst_n = reset;
    assign clk = clock;

    wire [32+2+1-1:0]       r;
    wire [32+1-1:0]         re;
    wire                    jup;
    wire [31:0]             jup_addr;

    wire [64:0]           if_dc;
    wire                    dc_ready_in;

    ifu ifu(
        .clk            (clk)
        ,.rst_n         (rst_n)

        ,.r             (r)
        ,.addr_ok       (icache_addr_ok)
        ,.re            (re)

        ,.jup           (jup)
        ,.jup_addr      (jup_addr)

        ,.dc_ready_in   (dc_ready_in)
        ,.if_dc_reg     (if_dc)



    );


    wire [1+64+32+5+1+1-1:0]       wb_ex;
    wire [289:0]           dc_ex;
    dc dc(
        .clk                            (clk)
        ,.rst_n                         (rst_n)

        ,.if_dc                         ({if_dc[64:1],if_dc[0]&&(~jup)})

        ,.wb_dc                         (sideway[69:0])

        ,.ready_in                      (dc_ready_in)
        ,.next_stage_ready              (lsu_ready_in&&exu_ready_in)
        ,.dc_ex                         (dc_ex)
        ,.o_fence                       ({fence_d,fence_i})
        ,.fence_i_ok                    (fence_i_ok)
        ,.fence_d_ok                    (fence_d_ok)
    );

    wire fence_d;
    wire fence_i;


    wire exu_ready_in;
    wire jup;
    wire [31:0] jup_addr;
    exu exu(
        
        .clk(clk)
        ,.rst_n(rst_n)


        ,.jup(jup)
        ,.jup_addr(jup_addr)


        ,.dc_ex({dc_ex[289:1],dc_ex[0]&&(!jup)})
        ,.sideway(sideway[69:0])
        ,.exu_ready_in(exu_ready_in)
        ,.wb(wb_ex)


    );

    wire                lsu_ready_in;
    wire [1+32+64+5+1+1-1:0]   wb_ls;

    wire        sram2r_req;
    wire [5:0]  sram2r_type;
    wire [31:0] sram2r_addr;
    wire        sram2r_rdy;

    wire [63:0]sram2re_data;
    wire        sram2re_valid;

    wire [31:0]     sram2w_addr;
    wire [63:0]     sram2w_data;
    wire [5:0]      sram2w_type;
    wire            sram2w_req;
    wire [15:0]     sram2w_strb;

    wire            sram2w_rdy;


    lsu lsu(
        .clk(clk)
        ,.rst_n(rst_n)
        ,.dc_ls({dc_ex[289:1],dc_ex[0]&&(!jup)})
        ,.sideway(sideway[64+5+1-1:0])

        ,.lsu_ready_in(lsu_ready_in)
        ,.wb(wb_ls)

        ,.cache_bus_req({dcache_addr,dcache_data,dcache_len,dcache_valid_in,dcache_write})
        ,.cache_bus_rsp({dcache_data_out,dcache_addr_ok,dcache_data_ok})

        ,.sram_busr_out({sram2r_addr,sram2r_type,sram2r_req})
        ,.sram_busr_in({sram2re_data,sram2r_rdy,sram2re_valid})

        ,.sram_busw_out({sram2w_addr,sram2w_data,sram2w_type,sram2w_strb,sram2w_req})
        ,.sram_busw_in({sram2w_rdy})

    );

    wire [1+64+5+1-1:0]   sideway;

    wire [63:0] wb_data_ex;
    wire [4:0]  wb_addr_ex;
    wire        wb_writ_ex;
    wire [31:0] wb_pc_ex;
    wire        wb_valid_ex;

    wire [63:0] wb_data_ls;
    wire [4:0]  wb_addr_ls;
    wire        wb_writ_ls;
    wire [31:0] wb_pc_ls;
    wire        wb_valid_ls;
    wire        wb_incache_ls;

    assign {wb_pc_ex,wb_data_ex,wb_addr_ex,wb_writ_ex,wb_valid_ex} = wb_ex;
    assign {wb_incache_ls,wb_pc_ls,wb_data_ls,wb_addr_ls,wb_writ_ls,wb_valid_ls} = wb_ls;

    wire [31:0] wb_pc;
    assign wb_pc=(wb_valid_ls)?wb_pc_ls:wb_pc_ex;
    assign sideway = (wb_valid_ls)?{wb_incache_ls,wb_data_ls,wb_addr_ls,wb_writ_ls&&wb_valid_ls}:{1'b1,wb_data_ex,wb_addr_ex,wb_writ_ex&&wb_valid_ex};

    wire [31:0] icache_addr;
    wire [1:0]  icache_len;
    wire        icache_valid_in;
    wire        icache_addr_ok;
    wire        icache_data_ok;
    wire [63:0] icache_data_out;

    assign {icache_addr,icache_len,icache_valid_in} = r;
    assign re = {icache_data_out[31:0],icache_data_ok};

    wire        sram0r_req;
    wire [5:0]  sram0r_type;
    wire [31:0] sram0r_addr;
    wire        sram0r_rdy;

    wire [255:0]sram0re_data;
    wire        sram0re_valid;
    cache_top icache(
        .clk(clk)
        ,.rst_n(rst_n)
        ,.addr(icache_addr)
        ,.data_in(64'd0)
        ,.valid_in(icache_valid_in)
        ,.len(icache_len)
        ,.write(1'b0)
        ,.addr_ok(icache_addr_ok)
        ,.data_ok(icache_data_ok)
        ,.data_out(icache_data_out)

        ,.fence_i(fence_i)
        ,.fence_d(1'b0)

        ,.fence_ok(fence_i_ok)

        ,.read_abort(jup)

        ,.r_req(sram0r_req)
        ,.r_type(sram0r_type)
        ,.r_addr(sram0r_addr)
        ,.r_rdy(sram0r_rdy)

        ,.re_data(sram0re_data)
        ,.re_valid(sram0re_valid)

        ,.w_addr()
        ,.w_req()
        ,.w_type()
        ,.w_data()
        ,.w_strb()
        ,.w_rdy()

    );


    wire [31:0] dcache_addr;
    wire [1:0]  dcache_len;
    wire [63:0] dcache_data;
    wire        dcache_write;
    wire        dcache_valid_in;
    wire        dcache_addr_ok;
    wire        dcache_data_ok;
    wire [63:0] dcache_data_out;
    wire        fence_d;


    wire        sram1r_req;
    wire [5:0]  sram1r_type;
    wire [31:0] sram1r_addr;
    wire        sram1r_rdy;

    wire [255:0]sram1re_data;
    wire        sram1re_valid;

    wire [31:0]     sram1w_addr;
    wire [255:0]    sram1w_data;
    wire [5:0]      sram1w_type;
    wire            sram1w_req;
    wire [15:0]     sram1w_strb;

    wire            sram1w_rdy;


    cache_top dcache(
        .clk(clk)
        ,.rst_n(rst_n)
        ,.addr(dcache_addr)
        ,.data_in(dcache_data)
        ,.valid_in(dcache_valid_in)
        ,.len(dcache_len)
        ,.write(dcache_write)
        ,.addr_ok(dcache_addr_ok)
        ,.data_ok(dcache_data_ok)
        ,.data_out(dcache_data_out)

        ,.fence_i(1'b0)
        ,.fence_d(fence_d)

        ,.fence_ok(fence_d_ok)

        ,.r_req(sram1r_req)
        ,.r_type(sram1r_type)
        ,.r_addr(sram1r_addr)
        ,.r_rdy(sram1r_rdy)

        ,.re_data(sram1re_data)
        ,.re_valid(sram1re_valid)

        ,.w_addr(sram1w_addr)
        ,.w_req(sram1w_req)
        ,.w_type(sram1w_type)
        ,.w_data(sram1w_data)
        ,.w_strb(sram1w_strb)
        ,.w_rdy(sram1w_rdy)

    );



    
    wire [`AXI_ID_WIDTH-1:0]        ar_id;
    wire [`AXI_LEN_WIDTH-1:0]       ar_len;
    wire [`AXI_SIZE_WIDTH-1:0]      ar_size;
    wire [`AXI_BRUS_WIDTH-1:0]      ar_brust;

    wire [`AXI_ID_WIDTH-1:0]        r_id;
    wire [`AXI_RESP_WIDTH-1:0]      r_resp;
    wire                            r_last;
    mem2axi mem2axi(
        .clk(clk)
        ,.rst_n(rst_n)

        ,.ir_req(sramr_req)
        ,.ir_type(sramr_type)
        ,.ir_addr(sramr_addr)
        ,.ir_rdy(sramr_rdy)

        ,.ire_data(sramre_data)
        ,.ire_valid(sramre_valid)

        ,.iw_req(sramw_req)
        ,.iw_type(sramw_type)
        ,.iw_addr(sramw_addr)
        ,.iw_strb(sramw_strb)
        ,.iw_data(sramw_data)
        ,.iw_rdy(sramw_rdy)


        ,.ar_addr       (io_master_araddr)
        ,.ar_valid      (io_master_arvalid)
        ,.ar_id         (io_master_arid)
        ,.ar_len        (io_master_arlen)
        ,.ar_size       (io_master_arsize)
        ,.ar_brust      (io_master_arburst)
        ,.ar_ready      (io_master_arready)

        ,.r_id          (io_master_rid)
        ,.r_data        (io_master_rdata)
        ,.r_resp        (io_master_rresp)
        ,.r_last        (io_master_rlast)
        ,.r_valid       (io_master_rvalid)
        ,.r_ready       (io_master_rready)

        ,.aw_id         (io_master_awid)
        ,.aw_addr       (io_master_awaddr)
        ,.aw_len        (io_master_awlen)
        ,.aw_size       (io_master_awsize)
        ,.aw_brust      (io_master_awburst)
        ,.aw_valid      (io_master_awvalid)
        ,.aw_ready      (io_master_awready)

        ,.w_data        (io_master_wdata)
        ,.w_strb        (io_master_wstrb)
        ,.w_last        (io_master_wlast)
        ,.w_valid       (io_master_wvalid)
        ,.w_ready       (io_master_wready)

        ,.b_ready       (io_master_bready)

    );


    wire [31:0] sramr_addr;
    wire [5:0]  sramr_type;
    wire        sramr_req;
    wire        sramr_rdy;

    wire [255:0]    sramre_data;
    wire            sramre_valid;

    wire [31:0]     sramw_addr;
    wire [255:0]    sramw_data;
    wire [5:0]      sramw_type;
    wire [15:0]     sramw_strb;
    wire            sramw_req;
    wire            sramw_rdy;

    sram_bus_interconnect sram_bus_interconnect(
        .clk(clk)
        ,.rst_n(rst_n)

        ,.r_in_0({sram0r_addr,sram0r_type,sram0r_req})
        ,.r_out_0({sram0re_data,sram0r_rdy,sram0re_valid})
        ,.w_in_0('b0)
        ,.w_out_0()
        
        ,.r_in_1({sram1r_addr,sram1r_type,sram1r_req})
        ,.r_out_1({sram1re_data,sram1r_rdy,sram1re_valid})
        ,.w_in_1({sram1w_addr,sram1w_data,sram1w_type,sram1w_strb,sram1w_req})
        ,.w_out_1(sram1w_rdy)

        
        ,.r_in_2({sram2r_addr,sram2r_type,sram2r_req})
        ,.r_out_2({sram2re_data,sram2r_rdy,sram2re_valid})
        ,.w_in_2({sram2w_addr,192'b0,sram2w_data,sram2w_type,sram2w_strb,sram2w_req})
        ,.w_out_2(sram2w_rdy)
        
        ,.r_in_3({sramr_addr,sramr_type,sramr_req})
        ,.r_out_3({sramre_data,sramr_rdy,sramre_valid})
        ,.w_in_3({sramw_addr,sramw_data,sramw_type,sramw_strb,sramw_req})
        ,.w_out_3(sramw_rdy)

    );

    `ifdef DIFF_TEST
    
        wire wb_valid;
        wire [4:0]  wb_rd_addr;
        wire [63:0] wb_data;
        wire wb_incache;
        wire wb_write;

        assign wb_write= sideway[0];

        assign wb_data = sideway[69:6];
        assign wb_rd_addr = sideway[5:1];
        assign wb_incache = sideway[70];
        assign wb_valid = wb_valid_ls||wb_valid_ex;
        always@(posedge clk)begin
            status_cpy(wb_rd_addr,wb_data[31:0],wb_data[63:32],wb_write,wb_pc,wb_incache,wb_valid);
        end


    `endif

endmodule

