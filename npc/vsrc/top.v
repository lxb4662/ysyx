module top(
    input clk,
    input rst_n,
    output [31:0 ]ir,
    output[63:0 ]ira,
    output jup,
    output ecall,
    input wire   uart_get,
    output wire   uart_en,
    output wire [7:0] uart_out,

    output     reg          stop_n,
    output     reg          skip,
    output [63:0]          pc_dut,



    output                  axi_0_clk,
    output                  axi_0_rst_n,

    output [3:0]            axi_0_ar_id,
    output [1:0]            axi_0_ar_brust,
    output [7:0]            axi_0_ar_len,
    output [2:0]            axi_0_ar_size,
    output [63:0]           axi_0_ar_addr,
    output                  axi_0_ar_valid,
    input                   axi_0_ar_ready,

    input [31:0]            axi_0_r_data,
    input                   axi_0_r_valid,
    output                  axi_0_r_ready,
    input [3:0]             axi_0_r_id,
    input                   axi_0_r_last,
    input [1:0]             axi_0_r_resp,

    output [63:0]           axi_0_aw_addr,
    output                  axi_0_aw_valid,
    input                   axi_0_aw_ready,
    output [3:0]            axi_0_aw_id,
    output [1:0]            axi_0_aw_brust,
    output [7:0]            axi_0_aw_len,
    output [2:0]            axi_0_aw_size,

    output [31:0]           axi_0_w_data,
    output                  axi_0_w_valid,
    input   wire            axi_0_w_ready, 
    output                  axi_0_w_last,
    output   [3:0]          axi_0_w_strb,

    output                  axi_0_b_ready,
    input                   axi_0_b_valid,
    input  [1:0]            axi_0_b_resp,
    input  [3:0]            axi_0_b_id,

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
    input  [3:0]            axi_1_b_id
);

//assign skip = stall[2]&(exu_en||lsu_en||pri_en);
reg stop_1;
reg stop_2;
reg skip_1;
reg skip_2;
reg skip_3;
always@(posedge clk)begin
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
        stop_1  <= stall[2]&(exu_en||lsu_en||pri_en)&pipe3_allowin_exu&&pipe3_allowin_lsu;
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

always@(posedge clk)begin
    if(!rst_n)begin
        pc_dut1 <= 64'b0;
        pc_dut2 <= 64'b0;
        pc_dut3 <= 64'b0;
        pc_dut4 <= 64'b0;
        pipe3_allowin <= 4'b0;
    end
    else begin

        pc_dut1 <= pc_out;      //  exu_lsu_out
        pc_dut2 <= pc_dut1;     //  
        pc_dut3 <= pc_dut2;
        pc_dut4 <= pc_dut3;
        pipe3_allowin <= pipe3_allowin_exu&pipe3_allowin_lsu;

    end
end

assign pc_dut = pc_dut2;
assign ira = inst_addr;
assign ir = inst;


assign axi_0_aw_id = 4'b1;
assign axi_0_aw_brust = 3'b1;
assign axi_0_aw_len = 8'b0;
assign axi_0_aw_size = 3'b10;

assign axi_0_w_last = axi_0_w_valid;
assign axi_0_w_strb = 4'b0;

assign axi_0_ar_id = 4'b1;
assign axi_0_ar_brust = 2'b0;
assign axi_0_ar_len = 8'b0;
assign axi_0_ar_size = 3'b10;

assign axi_1_aw_id = 4'b10;
assign axi_1_aw_brust = 3'b1;
assign axi_1_aw_len = 8'b0;
assign axi_1_aw_size = 3'b10;

assign axi_1_w_last = axi_1_w_valid;
assign axi_1_w_strb = 4'b0;

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
    first_stage stage1(
        .clk            (clk),
        .rst_n          (rst_n),

        .ir             (icache_data),
        .ira            (icache_addr),
        .ivalid         (icache_valid),
        .valid_o        (icache_valid_o),
        .valid_o1       (stage_valid_1),

        .jup            (jup_c),
        .jup_addr       (jup_addr_c),
        .stall_1         (stall[1]),
        .stall_0         (stall[0]),

        .rs1            (rs1),
        .rs1_addr       (rs1_addr),
        .rs2_addr       (rs2_addr),
        .rs2            (rs2),
        .imm            (imm),
        .pc             (pc),
        .pc_out         (pc_out),
        .func3          (func3),
        .func7          (func7),
        
        .i_alu          (i_alu),
        .ii_alu          (ii_alu),
        .ir_alu          (ir_alu),
        .w_alu          (w_alu),
        .wi_alu          (wi_alu),
        .wr_alu          (wr_alu),
        .m_alu          (m_alu),
        .mw_alu          (mw_alu),

        .jal            (jal),
        .jalr           (jalr),
        .lui            (lui),
        .auipc            (auipc),
        .bxx            (b),
        .w              (w_type),
        .sub_sra        (sub_sra),

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

    wire [63:0]         jup_addr_exu;
    wire                jup_exu;
    wire [63:0]         jup_addr;

    assign jup = jup_csr||jup_exu;

    assign jup_addr = jup_exu?jup_addr_exu:jup_addr_csr;



    wire i_alu;
    wire ii_alu;
    wire ir_alu;
    wire w_alu;
    wire wi_alu;
    wire wr_alu;
    wire m_alu;
    wire mw_alu;

    wire pipe3_allowin_exu;
    wire pipe3_allowin_lsu;

    exu_stage exu(

        .clk            (clk),
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
        .w_type         (w_type),
        .sub_sra        (sub_sra),
        .i_alu          (i_alu),
        .ii_alu         (ii_alu),
        .ir_alu         (ir_alu),
        .w_alu          (w_alu),
        .m_alu          (m_alu),
        .mw_alu          (mw_alu),

        .rs1_reg        (rs1),
        .rs2_reg        (rs2),
        .rd_second_stage(rd_second_stage),
        .rs1_sel           (rs1_sel),
        .rs2_sel           (rs2_sel),
        .imm            (imm),
        .pc             (pc_out ),
        .func3          (func3),
        .func7          (func7),

        .jup            (jup_exu),
        .jup_addr       (jup_addr_exu),

        .rd_addr        (rd_addr),
        .rd_w_en        (rd_w_en)
        ,.rd_wire       (exu_rd_wire)

        ,.rd_o          (rd_o_exu)
        ,.rd_addr_o     (rdr_o_exu)
        ,.rd_w_o        (rd_w_o_exu)

        ,.pipe3_allowin  (pipe3_allowin_exu)


    );

    wire lsu_w;

    wire [31:0]     inst;
    wire [63:0]     inst_addr;
    wire            skip_ref;
    wire            dstall;
    lsu_stage lsu(

         .clk               (clk)
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
        ,.rd_second_stage(rd_second_stage)

        ,.func3             (func3)
        ,.lsu_w             (lsu_w)

        ,.rdr               (rd_addr)
        ,.rd_w              (rd_w_en)


        ,.dcache_addr              (dcache_addr)
        ,.dcache_read              (dcache_read)
        ,.dcache_write             (dcache_write)
        ,.dcache_write_len         (dcache_write_len)
        ,.dcache_write_data           (dcache_write_data)
        ,.dcache_read_data              (dcache_read_data)
        ,.dcache_valid             (dcache_valid)
        ,.dcache_ready             (dcache_ready)
        ,.stall             (dstall)

        //reg write 
        ,.rd_o              (rd_o_lsu)
        ,.rd_addr_o         (rdr_o_lsu)
        ,.rd_w_o            (rd_w_o_lsu)

        ,.uart_en           (uart_en)
        ,.uart_out          (uart_out)
        ,.uart_get          (uart_get)

        ,.skip_ref          (skip_ref)
        
        ,.pipe3_allowin      (pipe3_allowin_lsu)
    );

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




wire mret;

wire [63:0]     mtvec_wire;
    csr_top csr_reg (
    .clk(clk)
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
wire            rdr_w_o_pri;
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

    output [63:0]           axi_1_aw_addr;
    output                  axi_1_aw_valid;
    input                   axi_1_aw_ready;
    output [3:0]            axi_1_aw_id;
    output [1:0]            axi_1_aw_brust;
    output [7:0]            axi_1_aw_len;
    output [2:0]            axi_1_aw_size;

    output [31:0]           axi_1_w_data;
    output                  axi_1_w_valid;
    input   wire            axi_1_w_ready;
    output                  axi_1_w_last;
    output   [3:0]          axi_1_w_strb;

    output                  axi_1_b_ready;
    input                   axi_1_b_valid;
    input  [1:0]            axi_1_b_resp;
    input  [3:0]            axi_1_b_id;
axi_rw peripheral(
    .clk(clk)
    ,.rst_n(rst_n)

	.rw_valid_i()
    .rw_write_i()
	,.rw_valid_o()
    ,.data_read_o()
    ,.data_ready_to_read()
    ,.rw_w_data_i()
    ,.rw_addr_i()
    ,.rw_size_i()

    ,.aclk      (axi_2_clk)
    ,.arst_n    (axi_2_rst_n)

    ,.wavalid   (axi_2_aw_valid)
    ,.waaddr    (axi_2_aw_addr)
    ,.waready   (axi_2_aw_ready)

    ,.wdata     (axi_2_w_data)
    ,.wready    (axi_2_w_ready)
    ,.wvalid    (axi_2_w_valid)

    ,.bresp     (axi_2_b_resp)
    ,.bvalid    (axi_2_b_valid)
    ,.bready    (axi_2_b_ready)

    ,.ravalid   (axi_2_ar_valid)
    ,.raaddr    (axi_2_ar_addr)
    ,.raready   (axi_2_ar_ready)

    ,.rvalid    (axi_2_r_valid)
    ,.rdata     (axi_2_r_data)
    ,.rready    (axi_2_r_ready)



);




wire [63:0]     icache_addr;
wire [31:0]     icache_data;
wire            icache_valid;
wire            icache_valid_o;
wire            icache_ready;

    icache icache (
         .clk(clk)
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
    );

    wire [63:0]         rd_second_stage;
    wire [4:0]         rdr_second_stage;
    assign rd_second_stage = (rd_w_o_lsu?rd_o_lsu:(rd_w_o_pri?rd_o_pri:rd_o_exu));
    wire rs1_sel ;
    wire rs2_sel ;
    wire rdr_second_stage = (rd_w_o_lsu?rdr_o_lsu:(rd_w_o_pri?rdr_o_pri:rdr_o_exu));
    assign rs1_sel = (rdr_second_stage == rs1_addr)&&(rd_w_o_lsu||rd_w_o_exu||rd_w_o_pri);
    assign rs2_sel = (rdr_second_stage == rs2_addr)&&(rd_w_o_lsu||rd_w_o_exu||rd_w_o_pri);


    wire [3:0]          stall;
    wire                jup_c;
    wire [63:0]         jup_addr_c;

   ctl ctl1(
    .clk(clk)
    ,.rst_n(rst_n)
    ,.jup(jup)
    ,.jup_addr(jup_addr)

    ,.ivalid(icache_valid)

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

    icache dcache (
         .clk       (clk)
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
    );

endmodule 