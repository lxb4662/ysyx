
//`include "vsrc/define.v"
module lsu(
    input clk,
    input rst_n,

    input [289:0]                               dc_ls,
    input [64+5+1-1:0]                          sideway,
    output                                      lsu_ready_in,
    output [1+32+64+5+1+1-1:0]                  wb,

    output [64+64-1:0]                          mtime_mtimecmp,

    output [32 + 64 + 1 + 2+ 1 -1:0]            cache_bus_req,
    // addr data valid lenght write
    input [64 + 1 + 1 -1 :0]                    cache_bus_rsp,
    // data addr_on data_ok

    output [1 + 6 + 32 - 1 : 0]                 sram_busr_out,
    //  r_addr r_type r_req
    input [1 + 1 + 64 - 1 :0]                   sram_busr_in,
    // r_rdy re_data re_valid 

    output [32 + 64 + 6 + 16 + 1 - 1 : 0]       sram_busw_out,
    //  {sram_w_addr,sram_w_data,sram_w_type,sram_w_strb,sram_w_req};
    input                                       sram_busw_in   


);
    wire [11:0] csr_addr;
    wire        csrr;
    wire [4:0]  rs1_a;
    wire [4:0]  rs2_a;
    wire [63:0] rs1;
    wire [63:0] rs2;
    wire [63:0] imm;
    wire [31:0] pc;
    wire        alu_in1_sel;
    wire        alu_in2_sel;
    wire [1:0]  rd_sel;
    wire [4:0]  rd;
    wire [2:0]  func3;
    wire [6:0]  func7;
    wire        lui;
    wire        auipc;
    wire        jal;
    wire        jalr;
    wire        bxx;
    wire        load;
    wire        store;
    wire [3:0]  alu_sel;
    wire        sub;
    wire        sra;
    wire [3:0]  alu_op;
    wire        rd_write;
    wire        ecall;
    wire        mret;
    wire        ebreak;
    wire        valid_i;
    assign {csr_addr,csrr,rs1_a,rs2_a,rs1,rs2,imm,pc,alu_in1_sel,alu_in2_sel,rd_sel,rd,func3,func7,lui,auipc,jal,jalr,bxx,load,store,alu_sel,sub,sra,alu_op,rd_write,ecall,mret,ebreak,valid_i} = dc_ls;

    wire [63:0] sideway_data;
    wire [4:0]  sideway_addr;
    wire        sideway_valid;
    assign {sideway_data,sideway_addr,sideway_valid} = sideway;


    wire [63:0]     rs1_sw;
    wire [63:0]     rs2_sw;

    assign rs1_sw = (sideway_valid&&(sideway_addr==rs1_a))?sideway_data:rs1;
    assign rs2_sw = (sideway_valid&&(sideway_addr==rs2_a))?sideway_data:rs2;


    ///////////////////////////////////////////
    // fsm
    ///////////////////////////////////////////

    reg [3:0]   fsm;
    reg [3:0]   fsm_next;

    always@(posedge clk)begin
        if(!rst_n)begin
            fsm <= 4'h0;
        end
        else begin
            fsm <= fsm_next;
        end 
    end

    always@(*)begin
        case(fsm)
            4'h0:   fsm_next = valid_i?(load?(addr_ok_all?4'h2:4'h1):(store?(addr_ok_all?4'h0:4'h1):4'h0)):4'h0;
            4'h1:   fsm_next = addr_ok_all?(store?4'h0:4'h2):4'h1;
            4'h2:   fsm_next = data_ok_all?'h0:4'h2;
        default:    fsm_next = 'b0;
    endcase
    end


    assign lsu_ready_in = valid_i?(load?(data_ok_all):(store?(addr_ok_all):1'b1)):1'b1;

    wire addr_ok;
    wire data_ok;

    assign addr_ok = cache_addr_ok;
    assign data_ok = cache_data_ok;

    reg [32+64-1:0] lsu_reg;
    always@(posedge clk)begin
        if(!rst_n)begin
            lsu_reg <= 'd0;
        end
        else if((fsm==4'h0)&&valid_i&&(load||store)) begin
            lsu_reg <= {ls_addr,rs2_sw};
        end
    end

    
    wire [31:0] ls_addr_reg;
    wire [63:0] rs2_sw_reg;
    assign {ls_addr_reg,rs2_sw_reg} = lsu_reg;

    ///////////////////////////////////////////
    // addr
    ///////////////////////////////////////////

    wire [31:0] ls_addr;
    assign ls_addr = rs1_sw[31:0] + imm[31:0];

    wire [63:0] store_data = rs2_sw;

    wire [31:0] ls_addr_all;
    assign ls_addr_all = (fsm==4'h0)?ls_addr:ls_addr_reg;


    wire addr_in_cache;
    `ifdef SOC
        assign addr_in_cache = ls_addr_all[31:28]==4'h8;
    `else
        assign addr_in_cache = ls_addr_all[31:28]==4'h8;
    `endif

    wire [63:0] ls_data_all;
    assign ls_data_all = (fsm==4'h0)?rs2_sw:rs2_sw_reg;

    /////////////////////////////////   
    // length gen
    /////////////////////////////////

    reg [3:0]   sram_len;
    always@(*)begin
        case(func3[1:0])
            2'b00:sram_len = 4'd0;
            2'b01:sram_len = 4'd1;
            2'b10:sram_len = 4'd3;
            2'b11:sram_len = 4'd7; 
        endcase
    end 
    wire [1:0]  cache_len = func3[1:0];

    wire load_unsign;
    assign load_unsign = load&&(func3[2]==1'b1);

    wire [63:0] load_ext_in;
    assign load_ext_in = data_ok?cache_rdata[63:0]:sram_re_data[63:0];
/*
    always@(posedge clk)begin
        if(store&&valid_i&&addr_ok)begin
            mtrace(pc,ls_addr,rs2_sw[31:0],rs2_sw[63:32],func3[1:0]);
        end
    end
*/

    load_ext load_ext(
        .func3(func3)
        ,.data_in(load_ext_in)
        ,.data_out(wb_data)
    );

    


    wire [4:0]  wb_rd;
    wire [63:0] wb_data;
    wire        wb_write;
    reg [1+32+64+5+1+1-1:0]    wb_reg;

    assign wb_write = rd_write;
    assign wb_rd = rd;


    always@(posedge clk)begin
        if(!rst_n)begin
            wb_reg <= 'b0;            
        end
        else begin
            wb_reg <= {addr_in_cache,pc,wb_data,rd,rd_write,valid_i&&((data_ok_all&&load)||(store&&addr_ok_all))};
        end
    end
    assign wb = wb_reg;



    /////////////////////////////////   
    // CACHE PORT
    /////////////////////////////////


    wire [31:0] cache_addr;
    wire [63:0] cache_wdata;
    wire [1:0]  cache_type;
    wire        cache_valid;
    wire        cache_write;

    wire [63:0] cache_rdata;
    wire        cache_addr_ok;
    wire        cache_data_ok;

    assign cache_addr   = ls_addr_all;
    assign cache_wdata  = ls_data_all;
    assign cache_type   = cache_len;
    assign cache_valid  = (load||store)&&addr_in_cache&&valid_i&&((fsm==4'h0)||(fsm==4'h1));
    assign cache_write  = addr_in_cache&&store&&valid_i;

    assign cache_bus_req = {cache_addr,cache_wdata,cache_type,cache_valid,cache_write};
    assign {cache_rdata,cache_addr_ok,cache_data_ok} = cache_bus_rsp;







    /////////////////////////////////   
    // SRAM PORT
    /////////////////////////////////

    wire [31:0]     sram_r_addr;
    wire [5:0]      sram_r_type;
    wire            sram_r_req;

    wire            sram_r_rdy;
    wire [63:0]     sram_re_data;
    wire            sram_re_valid;

    assign sram_r_addr = ls_addr_all;
    assign sram_r_type = {2'b00,sram_len};
    assign sram_r_req  = load&&(!addr_in_cache)&&valid_i&&((fsm==4'h0)||(fsm==4'h1));

    assign sram_busr_out = {sram_r_addr,sram_r_type,sram_r_req};
    assign {sram_re_data,sram_r_rdy,sram_re_valid} = sram_busr_in;

    wire sram_read_ready_in;
    assign sram_read_ready_in = sram_r_rdy;
    

    wire [31:0]     sram_w_addr;
    wire [63:0]     sram_w_data;
    wire [5:0]      sram_w_type;
    wire [15:0]     sram_w_strb;
    wire            sram_w_req;

    wire            sram_w_rdy;

    assign sram_w_addr = ls_addr_all;
    assign sram_w_data = ls_data_all;
    assign sram_w_type = {2'b00,sram_len};
    assign sram_w_strb = ~16'd0;
    assign sram_w_req  = (store)&&(~addr_in_cache)&&valid_i&&((fsm==4'h0)||(fsm==4'h1));

    assign sram_busw_out = {sram_w_addr,sram_w_data,sram_w_type,sram_w_strb,sram_w_req};
    assign sram_w_rdy = sram_busw_in;



    wire sram_load_addr_ok;
    assign sram_load_addr_ok = sram_r_rdy;
    wire sram_load_data_ok;
    assign sram_load_data_ok = sram_re_valid;

    wire sram_store_addr_ok;
    assign sram_store_addr_ok = sram_w_rdy;

    wire sram_addr_ok;
    assign sram_addr_ok = load?sram_load_addr_ok:sram_store_addr_ok;


    wire addr_ok_all;
    wire data_ok_all;
    assign addr_ok_all = addr_in_cache?cache_addr_ok:sram_addr_ok;
    assign data_ok_all = addr_in_cache?cache_data_ok:sram_load_data_ok;


    /////////////////////////////////   
    // MTIME REGISTER
    /////////////////////////////////

    wire        write_mtime;
    wire        write_mtimecmp;

    assign write_mtime      = store&&valid_i&&(ls_addr_all == 32'd0);
    assign write_mtimecmp   = store&&valid_i&&(ls_addr_all == 32'd0);


    reg [63:0]  mtime;
    reg [63:0]  mtimecmp;

    always@(posedge clk)begin
        if(!rst_n)begin
            mtime <= 'd0;
            mtimecmp <= 'd0; 
        end
        else begin
            if(write_mtime)begin
                mtime <= 'd0;
            end
            else begin
                mtime <= mtime + 64'd1;
            end

            if(write_mtimecmp)begin
                mtimecmp <= rs2_sw;
            end
        end
    end

    assign mtime_mtimecmp = {mtime,mtimecmp};

endmodule