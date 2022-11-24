module first_stage(
    input                   clk,
    input                   rst_n,
    
    input [31:0]            ir,
    output[63:0]            ira,
    input                   ivalid,
    output    reg           valid_o,
    output    reg           valid_o1,
    input                   hold_pipeline,
    output                  hold_pipeline_exu,

    output                  pipe2_allowin,
    input                   pipe3_allowin,

    input                   jup,
    input [63:0]            jup_addr,
    input                   stall_0,
    input                   stall_1,


    output reg [4:0]        rs1_addr,
    output reg [4:0]        rs2_addr,

    output   [63:0]         rs1,
    output   [63:0]         rs2,
    output reg [63:0]       pc,
    output reg [63:0]       pc_out,
    output reg [63:0]       imm,

    output reg [ 2:0]       func3,
    output reg [ 6:0]       func7,

    output reg              bxx,
    output reg              jalr,
    output reg              jal,
    output reg              r,
    output reg              i,
    output reg              ls,
    output reg              lui,
    output reg              auipc,
    output reg              w,

    output reg [63:0]       rd_o,

    
    input [63:0]            rd_exu,
    input [ 4:0]            rdr_exu,
    input                   rd_en_exu,

    input [63:0]            rd_lsu,
    input [ 4:0]            rdr_lsu,
    input                   rd_en_lsu,

    input [63:0]            rd_csr,
    input [ 4:0]            rdr_csr,
    input                   rd_en_csr,

    output reg              exu_en,
    output reg              lsu_en,


    output reg              alu_in1_sel,
    output reg              alu_in2_sel,  
    output reg [ 6:0]       alu_op, 
    output reg [ 4:0]       rd_addr,
    output reg              rd_w_en,
/*
    output reg              rs1_sel,
    output reg              rs2_sel,
*/

    output reg              lsu_w,

    output reg              csrr_o,
    output reg              pri_exu_en,
    output reg [11:0]       csr_addr,
    output                  ecall_o,
    output reg              mret_o,
    input       [63:0]      mtvec_wire,

);

 assign  ira = next_pc;

wire [63:0] next_pc;

assign next_pc = (pipe2_allowin)?(jup==1'b1)?jup_addr:(64'd4+pc):pc;


wire            pipe1_allowin;
assign pipe1_allowin = pipe2_allowin;

always@(posedge clk)begin
    if(!rst_n)begin
        valid_o <= 1'b0;
        valid_o1 <= 1'b0;

    end
    else begin
        if(pipe1_allowin)begin
            valid_o <= ivalid;
        end
    end
end
always@(posedge clk)begin
    if(!rst_n)begin
        pc<=64'h7FFFFFFC;

    end
    else begin
        if(pipe1_allowin&&ivalid)begin
            pc      <= next_pc;
        end
    end
end
wire    pipe1_valid_o;
assign  pipe1_valid_o = valid_o;
assign  pipe2_allowin = pipe3_allowin;

always@(posedge clk)begin
    if(!rst_n)begin
        lsu_w       <= 1'b0;
        lsu_en      <= 1'b0;
        exu_en      <= 1'b0;
        pri_exu_en  <= 1'b0;
    end 
    else begin
        if(pipe2_allowin)begin
            pc_out      <= pc;
            func3       <= func3_w;
            func7       <= func7_w;
            imm         <= imm_w;
           
            jal         <= jal_type;
            jalr        <= jalr_type;
            bxx         <= b_type;
            lui         <= lui_w;
            auipc       <= auipc_w;
            w           <= w_type;

            rs1_addr    <= rs1_addr_w;
            rs2_addr    <= rs2_addr_w;

            exu_en      <= exu_en_w&(!jup)&&valid_o;
            lsu_en      <= lsu_en_w&(!jup)&&valid_o;
            alu_op      <= alu_opcode_w;
            rd_addr     <= rd_addr_w;
            rd_w_en     <= rd_w_en_w&(!jup);
            alu_in1_sel <= alu_in1_sel_w;
            alu_in2_sel <= alu_in2_sel_w;
/*
            rs1_sel     <= rs1_sel_wire;
            rs2_sel     <= rs2_sel_wire;
 */
            lsu_w       <= s_type;

            csrr_o      <= csrr_wire;

            ecall_o     <= ecall_wire;
            pri_exu_en  <= pri_exu_en_wire&(!jup)&valid_o;
            csr_addr    <= csr_addr_wire;
            mret_o      <= mret_wire;
        end
    end
end
/*
wire [63:0]         rs1_reg_w;
wire [63:0]         rs2_reg_w;
*/
wire [63:0]         rs1_w;
wire [63:0]         rs2_w;

wire [63:0]         wb_rd_wire;
wire [ 4:0]         wb_rdr_wire;
wire                wb_w_wire;

assign wb_rd_wire = rd_en_exu?rd_exu:(rd_en_lsu?rd_lsu:rd_csr);
assign wb_rdr_wire= rd_en_exu?rdr_exu:(rd_en_lsu?rdr_lsu:rdr_csr);
assign wb_w_wire  = rd_en_exu||rd_en_lsu||rd_en_csr;

assign rs1 = rs1_w;
assign rs2 = rs2_w;
wire [63:0]     a0;
reg_group regs(
    .clk(clk),
    .rst_n(rst_n),

    .rs1_addr   (rs1_addr),
    .rs2_addr   (rs2_addr),
    .rs1        (rs1_w),
    .rs2        (rs2_w),
    .rd_addr    (wb_rdr_wire),
    .rd         (wb_rd_wire),
    .write_en   (wb_w_wire),
    .a0         (a0)
);



wire [63:0]         imm_w;
wire [4:0]          rs1_addr_w;
wire [4:0]          rs2_addr_w;
wire [4:0]          rd_addr_w;
wire                rd_w_en_w;
wire                exu_en_w;
wire                lsu_en_w;
wire [6:0]          alu_opcode_w;

wire                auipc_w;
wire                ebreak;
wire                i_type;
wire                r_type;
wire                b_type;
wire                w_type;
wire                jal_type;
wire                l_type;
wire                jalr_type;
wire                s_type;
wire                lui_w;

/*

wire              i_alu_wire;
wire              ii_alu_wire;
wire              ir_alu_wire;
wire              m_alu_wire;
wire              w_alu_wire;
wire              wi_alu_wire;
wire              wr_alu_wire;
wire              mw_alu_wire;

*/
wire [2:0]          func3_w;
wire [6:0]          func7_w;
wire                sub_sra_wire;

wire  csrr_wire;
wire [11:0] csr_addr_wire;
wire mret_wire;
wire ecall_wire;
wire pri_exu_en_wire;

wire alu_in1_sel_w;
wire alu_in2_sel_w;


inst_decode decode(
  .inst(ir)
 ,.opcode()
 ,.func3(func3_w)
 ,.func7(func7_w)
 ,.ebreak(ebreak)
 ,.jup(jup)

 ,.lui(lui_w)
 ,.auipc(auipc_w)

 ,.rs1_addr(rs1_addr_w)
 ,.rs2_addr(rs2_addr_w)
 ,.imm_exted(imm_w)
 ,.rd_w_en(rd_w_en_w)
 ,.rd_addr(rd_addr_w)
 ,.alu_op(alu_opcode_w)

 ,.exu_en(exu_en_w)
 ,.lsu_en(lsu_en_w)

 ,.alu_in1_sel(alu_in1_sel_w)
 ,.alu_in2_sel(alu_in2_sel_w)

 ,.r_type(r_type)
 ,.i_type(i_type)
 ,.jal_type(jal_type)
 ,.jalr_type(jalr_type)
 ,.b_type(b_type)
 ,.s_type(s_type)
 ,.l_type(l_type)
 ,.w_type(w_type)


/*
 ,.i_alu(i_alu_wire)
 ,.ii_alu(ii_alu_wire)
 ,.ir_alu(ir_alu_wire)
 ,.w_alu(w_alu_wire)
 ,.wi_alu(wi_alu_wire)
 ,.wr_alu(wr_alu_wire)
 ,.m_alu(m_alu_wire)
 ,.mw_alu(mw_alu_wire)
*/
 ,.ecall(ecall_wire)
 ,.csrr(csrr_wire)
 ,.mret(mret_wire)

 ,.csr_addr(csr_addr_wire)
 ,.pri_exu_en(pri_exu_en_wire)

);


// nei bu shu jv qian tui

/*
wire           rs1_sel_wire;
wire           rs2_sel_wire;
wire   [1:0]        rs1_sel_wire1;
wire   [1:0]        rs2_sel_wire1;



assign rs1_sel_wire = ((rs1_addr_w == rd_addr)&(rd_w_en))?1'b1:1'b0;
assign rs2_sel_wire = ((rs2_addr_w == rd_addr)&(rd_w_en))?1'b1:1'b0;// (rs2_addr == rd_addr_o)?2'b1:((rs2_addr ==wb_rdr_wire)?2'b10:2'b0);

*/
wire [63:0]     rd_wire;

always@(posedge clk )begin
    if(valid_o&&ebreak &&(!jup))begin
        $display("reg a0 is %d \n",a0);
        $finish;

    end 


end

endmodule