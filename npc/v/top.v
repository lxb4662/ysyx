module ysyx_050518(
    input clock,
    input reset,
    input 	io_interrupt,

    output[5:0] 	io_sram0_addr,
	output 	        io_sram0_cen,
	output 	        io_sram0_wen,
	output[127:0] 	io_sram0_wmask,
	output[127:0] 	io_sram0_wdata,
	input[127:0] 	io_sram0_rdata,
	output[5:0] 	io_sram1_addr,
	output 	        io_sram1_cen,
	output 	        io_sram1_wen,
	output[127:0] 	io_sram1_wmask,
	output[127:0] 	io_sram1_wdata,
	input[127:0] 	io_sram1_rdata,
	output[5:0] 	io_sram2_addr,
	output 	        io_sram2_cen,
	output 	        io_sram2_wen,
	output[127:0] 	io_sram2_wmask,
	output[127:0] 	io_sram2_wdata,
	input[127:0] 	io_sram2_rdata,
	output[5:0] 	io_sram3_addr,
	output 	        io_sram3_cen,
	output 	        io_sram3_wen,
	output[127:0] 	io_sram3_wmask,
	output[127:0] 	io_sram3_wdata,
	input[127:0] 	io_sram3_rdata,
	output[5:0] 	io_sram4_addr,
	output 	        io_sram4_cen,
	output 	        io_sram4_wen,
	output[127:0] 	io_sram4_wmask,
	output[127:0] 	io_sram4_wdata,
	input[127:0] 	io_sram4_rdata,
	output[5:0] 	io_sram5_addr,
	output 	        io_sram5_cen,
	output 	        io_sram5_wen,
	output[127:0] 	io_sram5_wmask,
	output[127:0] 	io_sram5_wdata,
	input[127:0] 	io_sram5_rdata,
	output[5:0] 	io_sram6_addr,
	output 	        io_sram6_cen,
	output 	        io_sram6_wen,
	output[127:0] 	io_sram6_wmask,
	output[127:0] 	io_sram6_wdata,
	input[127:0] 	io_sram6_rdata,
	output[5:0] 	io_sram7_addr,
	output 	        io_sram7_cen,
	output 	        io_sram7_wen,
	output[127:0] 	io_sram7_wmask,
	output[127:0] 	io_sram7_wdata,
	input[127:0] 	io_sram7_rdata,

    input 	        io_master_awready,
	output 	        io_master_awvalid,
	output[3:0] 	io_master_awid,
	output[31:0] 	io_master_awaddr,
	output[7:0] 	io_master_awlen,
	output[2:0] 	io_master_awsize,
	output[1:0] 	io_master_awburst,
	input 	        io_master_wready,
	output 	        io_master_wvalid,
	output[63:0] 	io_master_wdata,
	output[7:0] 	io_master_wstrb,
	output 	        io_master_wlast,
	output 	        io_master_bready,
	input 	        io_master_bvalid,
	input[3:0] 	    io_master_bid,
	input[1:0] 	    io_master_bresp,
	input 	        io_master_arready,
	output 	        io_master_arvalid,
	output[3:0] 	io_master_arid,
	output[31:0] 	io_master_araddr,
	output[7:0] 	io_master_arlen,
	output[2:0] 	io_master_arsize,
	output[1:0] 	io_master_arburst,
	output 	        io_master_rready,
	input 	        io_master_rvalid,
	input[3:0] 	    io_master_rid,
	input[1:0] 	    io_master_rresp,
	input[63:0] 	io_master_rdata,
	input 	        io_master_rlast,


    output [31:0 ]ir,
    output[63:0 ]ira,
    output jup,
    output ecall,


    output     reg          stop_n,
    output     reg          skip,
    output [63:0]          pc_dut


/*
    output                  axi_3_clk,
    output                  axi_3_rst_n,

    output [3:0]            axi_3_ar_id,
    output [1:0]            axi_3_ar_brust,
    output [7:0]            axi_3_ar_len,
    output [2:0]            axi_3_ar_size,
    output [63:0]           axi_3_ar_addr,
    output                  axi_3_ar_valid,
    input                   axi_3_ar_ready,

    input [31:0]            axi_3_r_data,
    input                   axi_3_r_valid,
    output                  axi_3_r_ready,
    input [3:0]             axi_3_r_id,
    input                   axi_3_r_last,
    input [1:0]             axi_3_r_resp,

    output [63:0]           axi_3_aw_addr,
    output                  axi_3_aw_valid,
    input                   axi_3_aw_ready,
    output [3:0]            axi_3_aw_id,
    output [1:0]            axi_3_aw_brust,
    output [7:0]            axi_3_aw_len,
    output [2:0]            axi_3_aw_size,

    output [31:0]           axi_3_w_data,
    output                  axi_3_w_valid,
    input   wire            axi_3_w_ready, 
    output                  axi_3_w_last,
    output   [3:0]          axi_3_w_strb,

    output                  axi_3_b_ready,
    input                   axi_3_b_valid,
    input  [1:0]            axi_3_b_resp,
    input  [3:0]            axi_3_b_id
    *//*,

    output                  axi_1_clk,
    output                  axi_1_rst_n,

    output [3:0]            axi_1_ar_id,
    output [1:0]            axi_1_ar_brust,
    output [7:0]            axi_1_ar_len,
    output [2:0]            axi_1_ar_size,
    output [63:0]           axi_1_ar_addr,
    output                  axi_1_ar_valid,
    input                   axi_1_ar_ready,

    input [31:0]            axi_1_r_data,
    input                   axi_1_r_valid,
    output                  axi_1_r_ready,
    input [3:0]             axi_1_r_id,
    input                   axi_1_r_last,
    input [1:0]             axi_1_r_resp,

    output [63:0]           axi_1_aw_addr,
    output                  axi_1_aw_valid,
    input                   axi_1_aw_ready,
    output [3:0]            axi_1_aw_id,
    output [1:0]            axi_1_aw_brust,
    output [7:0]            axi_1_aw_len,
    output [2:0]            axi_1_aw_size,

    output [31:0]           axi_1_w_data,
    output                  axi_1_w_valid,
    input   wire            axi_1_w_ready, 
    output                  axi_1_w_last,
    output   [3:0]          axi_1_w_strb,

    output                  axi_1_b_ready,
    input                   axi_1_b_valid,
    input  [1:0]            axi_1_b_resp,
    input  [3:0]            axi_1_b_id*/
);

//assign skip = stall[2]&(exu_en||lsu_en||pri_en);

wire  rst_n;
assign rst_n = ~reset;

reg stop_1;
reg stop_2;
reg skip_1;
reg skip_2;
reg skip_3;
always@(posedge clock)begin
    if(!rst_n)begin
        stop_n  <= 1'b0;
        stop_1  <= 1'b0;
        stop_2  <= 1'b0;
        skip    <= 1'b0;
        skip_1  <= 1'b0;
        skip_2  <= 1'b0;
    end
    else begin
        stop_n  <= stop_1;
        stop_2  <= stop_1;
        stop_1  <= stall[2]&(lsu_en||pri_en||exu_en)&&pipe3_allowin_lsu&&pipe3_allowin_exu;
        skip_1   <= skip_ref;
        skip_2   <= skip_1;
        skip     <= skip_1;
    end
end

reg [63:0]      pc_dut1;
reg [63:0]      pc_dut2;
reg [63:0]      pc_dut3;
reg [63:0]      pc_dut4;

reg pipe3_allowin;

always@(posedge clock)begin
    if(!rst_n)begin
        pc_dut1 <= 64'b0;
        pc_dut2 <= 64'b0;
        pc_dut3 <= 64'b0;
        pc_dut4 <= 64'b0;
        pipe3_allowin <= 1'b0;
    end
    else begin

        pc_dut1 <= pc_out;      //  exu_lsu_out
        pc_dut2 <= pc_dut1;     //  
        pc_dut3 <= pc_dut2;
        pc_dut4 <= pc_dut3;
        pipe3_allowin <= pipe3_allowin_lsu;

    end
end

assign pc_dut = pc_dut2;
assign ira = inst_addr;
assign ir = inst;


assign axi_0_aw_id = 4'b1;
assign axi_0_aw_brust = 2'b1;
assign axi_0_aw_len = 8'b0;
assign axi_0_aw_size = 3'b10;

assign axi_0_w_last = axi_0_w_valid;
assign axi_0_w_strb = 4'b0;

assign axi_0_ar_id = 4'b1;
assign axi_0_ar_brust = 2'b0;
assign axi_0_ar_len = 8'b0;
assign axi_0_ar_size = 3'b10;

assign axi_1_aw_id = 4'b10;
assign axi_1_aw_brust = 2'b1;
assign axi_1_aw_len = 8'b0;
assign axi_1_aw_size = 3'b10;

assign axi_1_w_last = axi_1_w_valid;
assign axi_1_w_strb = 4'hf;

assign axi_1_ar_id = 4'b10;
assign axi_1_ar_brust = 2'b0;
assign axi_1_ar_len = 8'b0;
assign axi_1_ar_size = 3'b10;



wire                exu_en;
wire    [63:0]      rs1;
wire    [63:0]      rs2;
wire    [63:0]      pc ;
wire    [63:0]      imm;
wire    [2:0] func3;
wire    [6:0] func7;

    wire [63:0]          pc_out;

wire jal;
wire jalr;
wire b;
wire lui;
wire auipc;
wire sub_sra;

wire    [4:0]       rd_addr;
wire                rd_w_en;

wire                alu_in1_sel;
wire                alu_in2_sel;
wire [6:0]          alu_opcode ;

wire [63:0]         rd_o_exu;
wire [4:0]          rdr_o_exu;
wire                rd_w_o_exu;

wire [63:0]         rd_o_lsu;
wire [4:0]          rdr_o_lsu;
wire                rd_w_o_lsu;

wire                exu_en;
wire                lsu_en;
wire                pri_en;


wire [63:0]         csr;
wire                pri_exu_en;
wire                csr_w_en;
wire [11:0]         csr_addr;

wire [63:0]         rd_csr;
wire                csrr;

wire                hold_pipeline;
wire                hold_pipeline_stage1;
wire                hold_pipeline_exu;
wire                hold_pipeline_lsu;

wire stage_valid_1;

assign hold_pipeline = hold_pipeline_lsu|hold_pipeline_exu|hold_pipeline_stage1;
wire [4:0]  rs1_addr;
wire [4:0]  rs2_addr;
    ysyx_22050518_first_stage stage1(
        .clk            (clock),
        .rst_n          (~reset),

        .ir             (icache_data[31:0]),
        .ira            (icache_addr),
        .ivalid         (icache_valid),
        .valid_o        (icache_valid_o),
        .valid_o1       (stage_valid_1),

        .jup            (jup_c),
        .jup_addr       (jup_addr_c),
        
        .stall_1         (stall[1]),
        .stall_0         (stall[0]),
        .pipe2_allowin   (pipe2_allowin),

        .rs1            (rs1),
        .rs1_addr       (rs1_addr),
        .rs2_addr       (rs2_addr),
        .rs2            (rs2),
        .imm            (imm),
        .pc             (pc),
        .pc_out         (pc_out),
        .func3          (func3),
        .func7          (func7),
        


        .jal            (jal),
        .jalr           (jalr),
        .lui            (lui),
        .auipc          (auipc),
        .bxx            (b),

        .alu_op         (alu_opcode),
        .alu_in1_sel    (alu_in1_sel),
        .alu_in2_sel    (alu_in2_sel),

        .rd_addr        (rd_addr),
        .rd_w_en        (rd_w_en),


        .exu_en         (exu_en)
        ,.lsu_en        (lsu_en)


        ,.rd_exu        (rd_o_exu)
        ,.rdr_exu       (rdr_o_exu)
        ,.rd_en_exu     (rd_w_o_exu)

        ,.rd_lsu        (rd_o_lsu)
        ,.rdr_lsu       (rdr_o_lsu)
        ,.rd_en_lsu     (rd_w_o_lsu)

        ,.rd_csr        (rd_o_pri)
        ,.rdr_csr       (rdr_o_pri)
        ,.rd_en_csr     (rd_w_o_pri)

        //,.rs1_sel       (rs1_sel)
        //,.rs2_sel       (rs2_sel)

        ,.lsu_w         (lsu_w)

        ,.csrr_o        (csrr)
        ,.pri_exu_en    (pri_en)
        ,.csr_addr      (csr_addr)
        ,.ecall_o       (ecall)
        ,.mtvec_wire    (mtvec_wire)
        ,.mret_o        (mret)

        ,.pipe3_allowin  (pipe3_allowin_exu&&pipe3_allowin_lsu)


    );
    wire [4:0]          rdr_o_pri;
    wire [63:0]         rd_o_pri;

    wire [63:0]         jup_addr_exu;
    wire                jup_exu;
    wire [63:0]         jup_addr;

    assign jup = jup_csr||jup_exu;

    assign jup_addr = jup_exu?jup_addr_exu:jup_addr_csr;





    wire pipe2_allowin;
    wire pipe3_allowin_exu;
    wire pipe3_allowin_lsu;


    ysyx_22050518_exu_stage exu(

        .clk            (clock),
        .rst_n          (rst_n),

        .exu_en         (exu_en&stall[2]),
        .alu_in1_sel    (alu_in1_sel),
        .alu_in2_sel    (alu_in2_sel),
        .alu_op         (alu_opcode),

        .jal            (jal ),
        .jalr           (jalr),
        .bxx            (b),
        .lui            (lui),
        .auipc          (auipc),

        .rs1_reg        (rs1),
        .rs2_reg        (rs2),
        .rd_second_stage(rd_second_stage),
        .rs1_sel           (rs1_sel),
        .rs2_sel           (rs2_sel),
        .imm            (imm),
        .pc             (pc_out ),
        .func3          (func3),
        .func7          (func7),


        .rd_addr        (rd_addr),
        .rd_w_en        (rd_w_en),

        .jup            (jup_exu),
        .jup_addr       (jup_addr_exu)

        ,.rd_o                  (rd_o_exu)
        ,.rd_addr_o             (rdr_o_exu)
        ,.rd_w_o                (rd_w_o_exu)

        ,.pipe3_allowin         (pipe3_allowin_exu)


    );

    wire lsu_w;

    wire [31:0]     inst;
    wire [63:0]     inst_addr;
    wire            skip_ref;
    wire            dstall;
    ysyx_22050518_lsu_stage lsu(

         .clk               (clock)
        ,.rst_n             (rst_n)
        ,.lsu_en            (lsu_en&stall[2])

        ,.inst              (inst)
        ,.inst_addr         (inst_addr)

        ,.imm               (imm)
        ,.pc                (pc_out)
        ,.rs1_reg           (rs1)
        ,.rs2_reg           (rs2)
        ,.rs1_sel           (rs1_sel)
        ,.rs2_sel           (rs2_sel)
        ,.rd_second_stage   (rd_second_stage)

        ,.func3             (func3)
        ,.lsu_w             (lsu_w)

        ,.rdr               (rd_addr)
        ,.rd_w              (rd_w_en)


        ,.dcache_addr              (dcache_addr)
        ,.dcache_read              (dcache_read)
        ,.dcache_write             (dcache_write)
        ,.dcache_write_len         (dcache_write_len)
        ,.dcache_write_data        (dcache_write_data)
        ,.dcache_read_data         (dcache_read_data)
        ,.dcache_valid             (dcache_valid)
        ,.dcache_ready             (dcache_ready)
        ,.stall                    (dstall)

        //reg write 
        ,.rd_o                      (rd_o_lsu)
        ,.rd_addr_o                 (rdr_o_lsu)
        ,.rd_w_o                    (rd_w_o_lsu)

        ,.skip_ref                  (skip_ref)

        ,.rw_valid_o                (rw_valid_i)
        ,.rw_write_o                (rw_write_i)
        ,.rw_valid_i                (rw_valid_o)
        ,.data_read_i               (data_read_o)
        ,.data_ready_to_read        (data_ready_to_read)
        ,.rw_w_data_i               (rw_w_data_i)
        ,.rw_addr_i                 (rw_addr_i)
        ,.rw_size_i                 (rw_size_i)
        
        ,.pipe3_allowin             (pipe3_allowin_lsu)
    );
/*
axi_rw mem2axi(
    .clk(clk)
    ,.rst_n(rst_n)

	,.rw_valid_i()
    ,.rw_write_i()
	,.rw_valid_o()        //IF&MEM输入信号
    ,.data_read_o()        //IF&MEM输入信号
    ,.data_ready_to_read()
    ,.rw_w_data_i()        //IF&MEM输入信号
    ,.rw_addr_i()          //IF&MEM输入信号
    ,.rw_size_i()         //IF&MEM输入信号

);
*/



wire mret;

wire [63:0]     mtvec_wire;
    ysyx_22050518_csr_top csr_reg (
    .clk(clock)
    ,.rst_n(rst_n)
    ,.en(pri_en)
    ,.mret(mret)
    ,.ecall(ecall)
    ,.csrr(csrr)

    ,.rd_a(rd_addr)
    ,.rd_w(rd_w_en)
    ,.rd_sd(rd_second_stage)

    ,.pc(pc_out)
    ,.rs1_reg(rs1)
    ,.rs1_sel(rs1_sel)
    ,.x17()
    ,.csr_a(csr_addr)
    ,.func3(func3)


    ,.mepc()
    ,.mstatus()
    ,.mcause()
    ,.mtvec(mtvec_wire)


    ,.rd_o(rd_o_pri)
    ,.rd_w_o(rd_w_o_pri)
    ,.rd_a_o(rdr_o_pri)

    ,.jup(jup_csr)
    ,.jup_addr(jup_addr_csr)

);
wire            jup_csr;
wire [63:0]     jup_addr_csr;

wire [63:0]     rd_o_pri;
wire [4:0]      rdr_o_pri;
wire            rd_w_o_pri;
/*

    pri_exu pri(
         .clk(clk)
        ,.rst_n(rst_n)
        ,.pri_en(pri_en)
        ,.rs1_wire(rs1)
        ,.rd_addr_wire(rd_addr)
        ,.csr_wire(csr)
        ,.csr_addr_wire(csr_addr)
        ,.func3(func3)


        ,.rd_o(rd_o_pri)
        ,.rd_w_o(rd_w_o_pri)
        ,.rd_addr_o(rd_addr_o_pri)


        ,.csr_o(csr_o_pri)
        ,.csr_w_o(csr_w_o_pri)
        ,.csr_a_o(csr_a_o_pri)
    );
*/
    wire                  axi_0_clk;
    wire                  axi_0_rst_n;

    wire [3:0]            axi_0_ar_id;
    wire [1:0]            axi_0_ar_brust;
    wire [7:0]            axi_0_ar_len;
    wire [2:0]            axi_0_ar_size;
    wire [63:0]           axi_0_ar_addr;
    wire                  axi_0_ar_valid;
    wire                  axi_0_ar_ready;

    wire[31:0]            axi_0_r_data;
    wire                  axi_0_r_valid;
    wire                  axi_0_r_ready;
    wire [3:0]            axi_0_r_id;
    wire                  axi_0_r_last;
    wire [1:0]            axi_0_r_resp;

    wire [63:0]           axi_0_aw_addr;
    wire                  axi_0_aw_valid;
    wire                  axi_0_aw_ready;
    wire [3:0]            axi_0_aw_id;
    wire [1:0]            axi_0_aw_brust;
    wire [7:0]            axi_0_aw_len;
    wire [2:0]            axi_0_aw_size;

    wire [31:0]           axi_0_w_data;
    wire                  axi_0_w_valid;
    wire                  axi_0_w_ready;
    wire                  axi_0_w_last;
    wire   [3:0]          axi_0_w_strb;

    wire                  axi_0_b_ready;
    wire                  axi_0_b_valid;
    wire  [1:0]           axi_0_b_resp;
    wire  [3:0]           axi_0_b_id;

    wire                  axi_1_clk;
    wire                  axi_1_rst_n;

    wire [3:0]            axi_1_ar_id;
    wire [1:0]            axi_1_ar_brust;
    wire [7:0]            axi_1_ar_len;
    wire [2:0]            axi_1_ar_size;
    wire [63:0]           axi_1_ar_addr;
    wire                  axi_1_ar_valid;
    wire                  axi_1_ar_ready;

    wire[31:0]            axi_1_r_data;
    wire                  axi_1_r_valid;
    wire                  axi_1_r_ready;
    wire [3:0]            axi_1_r_id;
    wire                  axi_1_r_last;
    wire [1:0]            axi_1_r_resp;

    wire [63:0]           axi_1_aw_addr;
    wire                  axi_1_aw_valid;
    wire                  axi_1_aw_ready;
    wire [3:0]            axi_1_aw_id;
    wire [1:0]            axi_1_aw_brust;
    wire [7:0]            axi_1_aw_len;
    wire [2:0]            axi_1_aw_size;

    wire [31:0]           axi_1_w_data;
    wire                  axi_1_w_valid;
    wire                  axi_1_w_ready;
    wire                  axi_1_w_last;
    wire   [3:0]          axi_1_w_strb;

    wire                  axi_1_b_ready;
    wire                  axi_1_b_valid;
    wire  [1:0]           axi_1_b_resp;
    wire  [3:0]           axi_1_b_id;

    wire                  axi_2_clk;
    wire                  axi_2_rst_n;

    wire [3:0]            axi_2_ar_id;
    wire [1:0]            axi_2_ar_brust;
    wire [7:0]            axi_2_ar_len;
    wire [2:0]            axi_2_ar_size;
    wire [63:0]           axi_2_ar_addr;
    wire                  axi_2_ar_valid;
    wire                  axi_2_ar_ready;

    wire[31:0]            axi_2_r_data;
    wire                  axi_2_r_valid;
    wire                  axi_2_r_ready;
    wire [3:0]            axi_2_r_id;
    wire                  axi_2_r_last;
    wire [1:0]            axi_2_r_resp;

    wire [63:0]           axi_2_aw_addr;
    wire                  axi_2_aw_valid;
    wire                  axi_2_aw_ready;
    wire [3:0]            axi_2_aw_id;
    wire [1:0]            axi_2_aw_brust;
    wire [7:0]            axi_2_aw_len;
    wire [2:0]            axi_2_aw_size;

    wire [31:0]           axi_2_w_data;
    wire                  axi_2_w_valid;
    wire                  axi_2_w_ready;
    wire                  axi_2_w_last;
    wire   [3:0]          axi_2_w_strb;

    wire                  axi_2_b_ready;
    wire                  axi_2_b_valid;
    wire  [1:0]           axi_2_b_resp;
    wire  [3:0]           axi_2_b_id;

    wire                  axi_3_clk;
    wire                  axi_3_rst_n;

    wire [3:0]            axi_3_ar_id;
    wire [1:0]            axi_3_ar_brust;
    wire [7:0]            axi_3_ar_len;
    wire [2:0]            axi_3_ar_size;
    wire [63:0]           axi_3_ar_addr;
    wire                  axi_3_ar_valid;
    wire                  axi_3_ar_ready;

    wire[31:0]            axi_3_r_data;
    wire                  axi_3_r_valid;
    wire                  axi_3_r_ready;
    wire [3:0]            axi_3_r_id;
    wire                  axi_3_r_last;
    wire [1:0]            axi_3_r_resp;

    wire [63:0]           axi_3_aw_addr;
    wire                  axi_3_aw_valid;
    wire                  axi_3_aw_ready;
    wire [3:0]            axi_3_aw_id;
    wire [1:0]            axi_3_aw_brust;
    wire [7:0]            axi_3_aw_len;
    wire [2:0]            axi_3_aw_size;

    wire [31:0]           axi_3_w_data;
    wire                  axi_3_w_valid;
    wire                  axi_3_w_ready;
    wire                  axi_3_w_last;
    wire   [3:0]          axi_3_w_strb;

    wire                  axi_3_b_ready;
    wire                  axi_3_b_valid;
    wire  [1:0]           axi_3_b_resp;
    wire  [3:0]           axi_3_b_id;


    wire                rw_valid_i;
    wire                rw_write_i;
    wire                rw_valid_o;
    wire [31:0]         data_read_o;
    wire                data_ready_to_read;
    wire [31:0]         rw_w_data_i;
    wire [63:0]         rw_addr_i;
    wire [3:0]          rw_size_i;

ysyx_22050518_axi_rw peripheral(
    .clk(clock)
    ,.rst_n(rst_n)

	,.rw_valid_i(rw_valid_i)
    ,.rw_write_i(rw_write_i)
	,.rw_valid_o(rw_valid_o)
    ,.data_read_o(data_read_o)
    ,.data_ready_to_read(data_ready_to_read)
    ,.rw_w_data_i(rw_w_data_i)
    ,.rw_addr_i(rw_addr_i)
    ,.rw_size_i(rw_size_i)

    //,.aclk      (axi_2_clk)
    //,.arst_n    (axi_2_rst_n)

    ,.axi_aw_valid_o    (axi_2_aw_valid)
    ,.axi_aw_addr_o     (axi_2_aw_addr)
    ,.axi_aw_ready_i    (axi_2_aw_ready)
    ,.axi_aw_prot_o     ()
    ,.axi_aw_id_o       (axi_2_aw_id)
    ,.axi_aw_user_o     ()
    ,.axi_aw_len_o      (axi_2_aw_len)
    ,.axi_aw_size_o     (axi_2_aw_size)
    ,.axi_aw_burst_o    ()
    ,.axi_aw_lock_o     ()
    ,.axi_aw_cache_o    ()
    ,.axi_aw_qos_o      ()
    ,.axi_aw_region_o   ()


    ,.axi_w_data_o      (axi_2_w_data)
    ,.axi_w_ready_i     (axi_2_w_ready)
    ,.axi_w_valid_o     (axi_2_w_valid)
    ,.axi_w_strb_o      (axi_2_w_strb)
    ,.axi_w_last_o      (axi_2_w_last)
    ,.axi_w_user_o      ()


    ,.axi_b_resp_i     (axi_2_b_resp)
    ,.axi_b_valid_i    (axi_2_b_valid)
    ,.axi_b_ready_o    (axi_2_b_ready)
    ,.axi_b_id_i       (axi_2_b_id)
    ,.axi_b_user_i     ()

    ,.axi_ar_valid_o   (axi_2_ar_valid)
    ,.axi_ar_addr_o    (axi_2_ar_addr)
    ,.axi_ar_ready_i   (axi_2_ar_ready)
    ,.axi_ar_prot_o    ()
    ,.axi_ar_id_o      (axi_2_ar_id)
    ,.axi_ar_user_o    ()
    ,.axi_ar_len_o     (axi_2_ar_len)
    ,.axi_ar_size_o    (axi_2_ar_size)
    ,.axi_ar_burst_o   (axi_2_ar_brust)
    ,.axi_ar_lock_o    ()
    ,.axi_ar_cache_o   ()
    ,.axi_ar_qos_o     ()
    ,.axi_ar_region_o  ()


    ,.axi_r_valid_i    (axi_2_r_valid)
    ,.axi_r_data_i     (axi_2_r_data)
    ,.axi_r_ready_o    (axi_2_r_ready)
    ,.axi_r_resp_i     (axi_2_r_resp)
    ,.axi_r_last_i     (axi_2_r_last)
    ,.axi_r_id_i       (axi_2_r_id)
    ,.axi_r_user_i     ()
);




wire [63:0]     icache_addr;
wire [63:0]     icache_data;
wire            icache_valid;
wire            icache_valid_o;
wire            icache_ready;

    ysyx_22050518_icache icache (
         .clk(clock)
        ,.rst_n(rst_n)
        ,.addr(icache_addr)
        ,.read(1'b1&&(!jup))
        ,.write(1'b0)
        ,.write_len(2'b10)
        ,.data_in(64'b0)
        ,.data(icache_data)
        ,.valid(icache_valid)
        ,.ready (icache_ready)

        ,.aclk      (axi_0_clk)
        ,.arst_n    (axi_0_rst_n)

        ,.wavalid   (axi_0_aw_valid)
        ,.waaddr    (axi_0_aw_addr)
        ,.waready   (axi_0_aw_ready)

        ,.wdata     (axi_0_w_data)
        ,.wready    (axi_0_w_ready)
        ,.wvalid    (axi_0_w_valid)

        ,.bresp     (axi_0_b_resp)
        ,.bvalid    (axi_0_b_valid)
        ,.bready    (axi_0_b_ready)

        ,.ravalid   (axi_0_ar_valid)
        ,.raaddr    (axi_0_ar_addr)
        ,.raready   (axi_0_ar_ready)

        ,.rvalid    (axi_0_r_valid)
        ,.rdata     (axi_0_r_data)
        ,.rready    (axi_0_r_ready)

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
    );

    wire [63:0]         rd_second_stage;
    wire [4:0]          rdr_second_stage;
    assign rd_second_stage = (rd_w_o_lsu?rd_o_lsu:(rd_w_o_pri?rd_o_pri:rd_o_exu));
    wire rs1_sel ;
    wire rs2_sel ;
    wire rdr_second_stage = (rd_w_o_lsu?rdr_o_lsu:(rd_w_o_pri?rdr_o_pri:rdr_o_exu));
    assign rs1_sel = (rdr_second_stage == rs1_addr)&&(rd_w_o_lsu||rd_w_o_exu||rd_w_o_pri);
    assign rs2_sel = (rdr_second_stage == rs2_addr)&&(rd_w_o_lsu||rd_w_o_exu||rd_w_o_pri);


    wire [3:0]          stall;
    wire                jup_c;
    wire [63:0]         jup_addr_c;

   ysyx_22050518_ctl ctl1(
    .clk(clock)
    ,.rst_n(rst_n)
    ,.jup(jup)
    ,.jup_addr(jup_addr)

    ,.ivalid(icache_valid)
    ,.pipe2_allowin(pipe2_allowin)
    ,.stall(stall)
    ,.dstall(1'b0)
    ,.jup_o(jup_c)
    ,.jup_addr_r(jup_addr_c)


   );


    wire [63:0] dcache_addr;
    wire        dcache_read;
    wire        dcache_write;
    wire [1:0]  dcache_write_len;
    wire [63:0] dcache_write_data;
    wire [63:0] dcache_read_data;
    wire        dcache_valid;
    wire        dcache_ready;

    ysyx_22050518_icache dcache (
         .clk       (clock)
        ,.rst_n     (rst_n)
        ,.addr      (dcache_addr)
        ,.read      (dcache_read)
        ,.write     (dcache_write)
        ,.write_len (dcache_write_len)
        ,.data_in   (dcache_write_data)
        ,.data      (dcache_read_data)
        ,.valid     (dcache_valid)
        ,.ready     (dcache_ready)

        ,.aclk      (axi_1_clk)
        ,.arst_n    (axi_1_rst_n)

        ,.wavalid   (axi_1_aw_valid)
        ,.waaddr    (axi_1_aw_addr)
        ,.waready   (axi_1_aw_ready)

        ,.wdata     (axi_1_w_data)
        ,.wready    (axi_1_w_ready)
        ,.wvalid    (axi_1_w_valid)

        ,.bresp     (axi_1_b_resp)
        ,.bvalid    (axi_1_b_valid)
        ,.bready    (axi_1_b_ready)

        ,.ravalid   (axi_1_ar_valid)
        ,.raaddr    (axi_1_ar_addr)
        ,.raready   (axi_1_ar_ready)

        ,.rvalid    (axi_1_r_valid)
        ,.rdata     (axi_1_r_data)
        ,.rready    (axi_1_r_ready)

        ,.io_sram0_addr         (io_sram4_addr)
        ,.io_sram0_cen          (io_sram4_cen)
        ,.io_sram0_wen          (io_sram4_wen)
        ,.io_sram0_wmask        (io_sram4_wmask)
        ,.io_sram0_wdata        (io_sram4_wdata)
        ,.io_sram0_rdata        (io_sram4_rdata)

        ,.io_sram1_addr         (io_sram5_addr)
        ,.io_sram1_cen          (io_sram5_cen)
        ,.io_sram1_wen          (io_sram5_wen)
        ,.io_sram1_wmask        (io_sram5_wmask)
        ,.io_sram1_wdata        (io_sram5_wdata)
        ,.io_sram1_rdata        (io_sram5_rdata)

        ,.io_sram2_addr         (io_sram6_addr)
        ,.io_sram2_cen          (io_sram6_cen)
        ,.io_sram2_wen          (io_sram6_wen)
        ,.io_sram2_wmask        (io_sram6_wmask)
        ,.io_sram2_wdata        (io_sram6_wdata)
        ,.io_sram2_rdata        (io_sram6_rdata)

        ,.io_sram3_addr         (io_sram7_addr)
        ,.io_sram3_cen          (io_sram7_cen)
        ,.io_sram3_wen          (io_sram7_wen)
        ,.io_sram3_wmask        (io_sram7_wmask)
        ,.io_sram3_wdata        (io_sram7_wdata)
        ,.io_sram3_rdata        (io_sram7_rdata)
    );


ysyx_22050518_axi_interconnect interconnect1(
     .axi_0_ar_id       (4'b0001)
    ,.axi_0_ar_brust    (2'b1)
    ,.axi_0_ar_len      (8'b0)
    ,.axi_0_ar_size     (3'b10)
    ,.axi_0_ar_addr     (axi_0_ar_addr)
    ,.axi_0_ar_valid    (axi_0_ar_valid)
    ,.axi_0_ar_ready    (axi_0_ar_ready)


    ,.axi_0_r_data      (axi_0_r_data)
    ,.axi_0_r_valid     (axi_0_r_valid)
    ,.axi_0_r_ready     (axi_0_r_ready)
    ,.axi_0_r_id        ()
    ,.axi_0_r_last      ()
    ,.axi_0_r_resp      ()

    ,.axi_0_aw_addr     (64'b0)
    ,.axi_0_aw_valid    (1'b0)
    ,.axi_0_aw_ready    ()
    ,.axi_0_aw_brust    (2'b1)
    ,.axi_0_aw_len      (8'b0)
    ,.axi_0_aw_size     (3'b10)
    ,.axi_0_aw_id       (4'b0001)

    ,.axi_0_w_data      ()
    ,.axi_0_w_valid     ()
    ,.axi_0_w_ready     ()
    ,.axi_0_w_last      (1'b0)
    ,.axi_0_w_strb      (4'hf)
    
    ,.axi_0_b_ready     (1'b1)
    ,.axi_0_b_valid     ()
    ,.axi_0_b_resp      ()
    ,.axi_0_b_id        ()


    ,.axi_1_ar_id       (4'b0010)
    ,.axi_1_ar_brust    (2'b1)
    ,.axi_1_ar_len      (8'b0)
    ,.axi_1_ar_size     (3'b10)
    ,.axi_1_ar_addr     (axi_1_ar_addr)
    ,.axi_1_ar_valid    (axi_1_ar_valid)
    ,.axi_1_ar_ready    (axi_1_ar_ready)

    ,.axi_1_r_data      (axi_1_r_data)
    ,.axi_1_r_valid     (axi_1_r_valid)
    ,.axi_1_r_ready     (axi_1_r_ready)
    ,.axi_1_r_id        ()
    ,.axi_1_r_last      ()
    ,.axi_1_r_resp      ()

    ,.axi_1_aw_addr     (axi_1_aw_addr)
    ,.axi_1_aw_valid    (axi_1_aw_valid)
    ,.axi_1_aw_ready    (axi_1_aw_ready)
    ,.axi_1_aw_brust    (2'b1)
    ,.axi_1_aw_len      (8'b0)
    ,.axi_1_aw_size     (3'b10)
    ,.axi_1_aw_id       (4'b0001)

    ,.axi_1_w_data      (axi_1_w_data)
    ,.axi_1_w_valid     (axi_1_w_valid)
    ,.axi_1_w_ready     (axi_1_w_ready)
    ,.axi_1_w_last      (axi_1_w_valid)
    ,.axi_1_w_strb      (4'hf)
    
    ,.axi_1_b_ready     (1'b1)
    ,.axi_1_b_valid     (axi_1_b_valid)
    ,.axi_1_b_resp      (axi_1_b_resp)
    ,.axi_1_b_id        ()


    ,.axi_2_ar_id       (4'b0011)
    ,.axi_2_ar_brust    (2'b1)
    ,.axi_2_ar_len      (8'b0)
    ,.axi_2_ar_size     (3'b10)
    ,.axi_2_ar_addr     (axi_2_ar_addr)
    ,.axi_2_ar_valid    (axi_2_ar_valid)
    ,.axi_2_ar_ready    (axi_2_ar_ready)

    ,.axi_2_r_data      (axi_2_r_data)
    ,.axi_2_r_valid     (axi_2_r_valid)
    ,.axi_2_r_ready     (axi_2_r_ready)
    ,.axi_2_r_id        ()
    ,.axi_2_r_last      ()
    ,.axi_2_r_resp      ()

    ,.axi_2_aw_addr     (axi_2_aw_addr)
    ,.axi_2_aw_valid    (axi_2_aw_valid)
    ,.axi_2_aw_ready    (axi_2_aw_ready)
    ,.axi_2_aw_brust    (2'b1)
    ,.axi_2_aw_len      (8'b0)
    ,.axi_2_aw_size     (3'b10)
    ,.axi_2_aw_id       (4'b0011)

    ,.axi_2_w_data      (axi_2_w_data)
    ,.axi_2_w_valid     (axi_2_w_valid)
    ,.axi_2_w_ready     (axi_2_w_ready)
    ,.axi_2_w_last      (axi_2_w_valid)
    ,.axi_2_w_strb      (4'hf)
    
    ,.axi_2_b_ready     (1'b1)
    ,.axi_2_b_valid     (axi_2_b_valid)
    ,.axi_2_b_resp      (axi_2_b_resp)
    ,.axi_2_b_id        ()


    ,.axi_3_ar_id       (io_master_arid)
    ,.axi_3_ar_brust    (io_master_arburst)
    ,.axi_3_ar_len      (io_master_arlen)
    ,.axi_3_ar_size     (io_master_arsize)
    ,.axi_3_ar_addr     (io_master_araddr)
    ,.axi_3_ar_valid    (io_master_arvalid)
    ,.axi_3_ar_ready    (io_master_arready)

    ,.axi_3_r_data      (io_master_rdata)
    ,.axi_3_r_valid     (io_master_rvalid)
    ,.axi_3_r_ready     (io_master_rready)
    ,.axi_3_r_id        (io_master_rid)
    ,.axi_3_r_last      (io_master_rlast)
    ,.axi_3_r_resp      (io_master_rresp)

    ,.axi_3_aw_addr     (io_master_awaddr)
    ,.axi_3_aw_valid    (io_master_awvalid)
    ,.axi_3_aw_ready    (io_master_awready)
    ,.axi_3_aw_brust    (io_master_awburst)
    ,.axi_3_aw_len      (io_master_awlen)
    ,.axi_3_aw_size     (io_master_awsize)
    ,.axi_3_aw_id       (io_master_awid)

    ,.axi_3_w_data      (io_master_wdata)
    ,.axi_3_w_valid     (io_master_wvalid)
    ,.axi_3_w_ready     (io_master_wready)
    ,.axi_3_w_last      (io_master_wlast)
    ,.axi_3_w_strb      (io_master_wstrb)
    
    ,.axi_3_b_ready     (io_master_bready)
    ,.axi_3_b_valid     (io_master_bvalid)
    ,.axi_3_b_resp      (io_master_bresp)
    ,.axi_3_b_id        (io_master_bid)
);
/*
myip_v1_0_S00_AXI myip_v1_0_S00_AXI_inst (
		.S_AXI_ACLK(clock),
		.S_AXI_ARESETN(rst_n),
		.S_AXI_AWADDR(axi_3_aw_addr),
		.S_AXI_AWPROT(),
		.S_AXI_AWVALID(axi_3_aw_valid),
		.S_AXI_AWREADY(axi_3_aw_ready),
        .S_AXI_AWID(axi_3_aw_id),

		.S_AXI_WDATA(axi_3_w_data),
		.S_AXI_WSTRB(axi_3_w_strb),
		.S_AXI_WVALID(axi_3_w_valid),
		.S_AXI_WREADY(axi_3_w_ready),
		.S_AXI_BRESP(axi_3_b_resp),
		.S_AXI_BVALID(axi_3_b_valid),
		.S_AXI_BREADY(axi_3_b_ready),
		.S_AXI_BID(axi_3_b_id),

		.S_AXI_ARADDR(axi_3_ar_addr),
		.S_AXI_ARPROT(),
		.S_AXI_ARVALID(axi_3_ar_valid),
		.S_AXI_ARREADY(axi_3_ar_ready),
        .S_AXI_ARID(axi_3_ar_id),


		.S_AXI_RDATA(axi_3_r_data),
		.S_AXI_RRESP(axi_3_r_resp),
		.S_AXI_RVALID(axi_3_r_valid),
		.S_AXI_RREADY(axi_3_r_ready),
        .S_AXI_RID(axi_3_r_id)
	);
*/
endmodule 