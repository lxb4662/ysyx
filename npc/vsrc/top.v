import "DPI-C" function void status_cpy(input int addr,input int a1,input int a0,input int write,input int pc,input int incache,input int valid);
`define AXI_DATA_WIDTH 64
`define AXI_ADDR_WIDTH 32
`define AXI_BRUS_WIDTH 2
`define AXI_SIZE_WIDTH 3
`define AXI_ID_WIDTH 4
`define AXI_LEN_WIDTH 8
`define AXI_RESP_WIDTH 2

//`define DIFF_TEST


module top(
    input clk,
    input rst_n,

    output [`AXI_ADDR_WIDTH-1:0]    ar_addr,
    output                          ar_valid,
    input                           ar_ready,

    input                           r_valid,
    output                          r_ready,
    input  [`AXI_DATA_WIDTH-1:0]    r_data,

    output [`AXI_ADDR_WIDTH-1:0]    aw_addr,
    input                           aw_ready,
    output                          aw_valid,

    output [`AXI_DATA_WIDTH-1:0]    w_data,
    output                          w_valid,
    input                           w_ready



    

);



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
    wire [287:0]           dc_ex;
    dc dc(
        .clk(clk)
        ,.rst_n(rst_n)

        ,.if_dc({if_dc[64:1],if_dc[0]&&(~jup)})

        ,.wb_dc(sideway[69:0])

        ,.ready_in(dc_ready_in)
        ,.next_stage_ready(lsu_ready_in&&exu_ready_in)
        ,.dc_ex(dc_ex)
    );

    wire exu_ready_in;
    wire jup;
    wire [31:0] jup_addr;
    exu exu(
        
        .clk(clk)
        ,.rst_n(rst_n)


        ,.jup(jup)
        ,.jup_addr(jup_addr)


        ,.dc_ex({dc_ex[287:1],dc_ex[0]&&(!jup)})
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
        ,.dc_ls({dc_ex[287:1],dc_ex[0]&&(!jup)})
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
    wire        fence_i;

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

        ,.fence_i(1'b0)
        ,.fence_d(1'b0)
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

        ,.r_req(sramr_req)
        ,.r_type(sramr_type)
        ,.r_addr(sramr_addr)
        ,.r_rdy(sramr_rdy)

        ,.re_data(sramre_data)
        ,.re_valid(sramre_valid)

        ,.iw_req(sramw_req)
        ,.iw_type(sramw_type)
        ,.iw_addr(sramw_addr)
        ,.iw_strb(sramw_strb)
        ,.iw_data(sramw_data)
        ,.iw_rdy(sramw_rdy)


        ,.ar_addr(ar_addr)
        ,.ar_valid(ar_valid)
        ,.ar_id(ar_id)
        ,.ar_len(ar_len)
        ,.ar_size(ar_size)
        ,.ar_brust(ar_brust)
        ,.ar_ready(ar_ready)

        ,.r_id(r_id)
        ,.r_data(r_data)
        ,.r_resp(r_resp)
        ,.r_last(r_last)
        ,.r_valid(r_valid)
        ,.r_ready(r_ready)

        ,.aw_id()
        ,.aw_addr(aw_addr)
        ,.aw_len()
        ,.aw_size()
        ,.aw_brust()
        ,.aw_valid(aw_valid)
        ,.aw_ready(aw_ready)

        ,.w_data(w_data)
        ,.w_id()
        ,.w_strb()
        ,.w_last()
        ,.w_valid(w_valid)
        ,.w_ready(w_ready)

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
        assign wb_valid = wb_valid_ls||wb_valid_ex;
        always@(posedge clk)begin
            status_cpy(sideway[5:1],sideway[37:6],sideway[69:38],sideway[0],wb_pc,sideway[70],wb_valid_ls||wb_valid_ex);
        end


    `endif

endmodule