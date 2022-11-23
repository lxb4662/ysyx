module exu_stage(
    input           clk,
    input           rst_n,

    input [2:0]     func3,
    input [6:0]     func7,

    input           rs1_sel,
    input           rs2_sel,

    input           i_alu,
    input           ii_alu,
    input           ir_alu,
    input           w_alu,
    input           wi_alu,
    input           wr_alu,
    input           m_alu,
    input           mw_alu,

    input           jal,
    input           jalr,
    input           bxx,
    input           lui,
    input           auipc,
    input           sub_sra,

    input           w_type,

    input [63:0]    pc,
    input [63:0]    rs1_reg,
    input [63:0]    rs2_reg,
    input [63:0]    imm,
    input [63:0]    rd_second_stage,
    


    input [6:0]     alu_op,
    input [4:0]     rd_addr,
    input           exu_en,
    input           rd_w_en,
    input           alu_in1_sel,
    input           alu_in2_sel,


    output           jup,
    output  [63:0]   jup_addr,

    output reg [63:0]   rd_o,
    output wire [63:0]  rd_wire,
    output reg [4:0]    rd_addr_o,
    output reg          rd_w_o ,
    output reg          valid,

    output              pipe3_allowin

);

wire [63:0]     rs1;
wire [63:0]     rs2;
assign pipe3_allowin = 1'b1;

mux2t1_64 rs1_sel_mux(
    .sel(rs1_sel)
    ,.in0(rs1_reg)
    ,.in1(rd_second_stage)
    ,.out(rs1)

);
mux2t1_64 rs2_sel_mux(
    .sel(rs2_sel)
    ,.in0(rs2_reg)
    ,.in1(rd_second_stage)
    ,.out(rs2)

);

wire [63:0] jp_addr_wire;
always@(posedge clk )begin
    if((!rst_n))begin
        rd_w_o       <= rd_w_en;
        //jup             <= 1'b0;
    end
    else begin
        valid <= exu_en;
        if(pipe3_allowin)begin
            rd_o        <= rd_wire;
            rd_w_o      <= rd_w_en&&exu_en;
            rd_addr_o   <= rd_addr;

        end
    end

end


assign    jup         = (jal|jalr|(bxx &( b_ans==64'b1)))&&pipe3_allowin&&exu_en;
assign    jup_addr    = jp_addr_wire;

reg  [63:0]     alu_out_w;
wire [63:0]     alu_in1_w;
wire [63:0]     alu_in2_w;
wire [63:0]     alu_in1_w1;
wire [63:0]     alu_in2_w1;
reg  [63:0]     rd_sel1_wire;
reg  [63:0]     rd_sel2_wire;
reg  [63:0]     rd_sel3_wire;

mux2t1_64 aluin1sel (
    .sel (alu_in1_sel   ),
    .in0 (rs1           ),
    .in1 (pc            ),
    .out (alu_in1_w1     )
);
mux2t1_64 aluin2sel (
    .sel (alu_in2_sel   ),
    .in0 (rs2           ),
    .in1 (imm           ),
    .out (alu_in2_w1     )
);

/*
mux2t1_64 aluin1sel1 (
    .sel (w_type                    ),
    .in0 (alu_in1_w1                ),
    .in1 ({32'b0,alu_in1_w1[31:0]}  ),
    .out (alu_in1_w                 )
);
mux2t1_64 aluin2sel1 (
    .sel (w_type                    ),
    .in0 (alu_in2_w1                ),
    .in1 ({32'b0,alu_in2_w1[31:0]}  ),
    .out (alu_in2_w                 )
);
*/


wire [63:0]     out_i;
wire [63:0]     out_m;
wire [63:0]     out_w;
wire [63:0]     out_mw;

wire [4:0]     sel_i;
wire [4:0]     sel_m;
wire [3:0]     sel_w;
wire [3:0]     sel_mw;

wire [63:0]     alu_f_out;

alu_fusion aluf(
    .in0(alu_in1_w1)
    ,.in1(alu_in2_w1)
    ,.alu_op(alu_op)

    ,.out(alu_f_out)
);
wire [1:0]  alu_f_out_sel;

encode4_2 alu_sel_enco(
    .in0({mw_alu,w_alu,m_alu,i_alu}),
    .out0(alu_f_out_sel)
);

mux4t1_64 aluf_out_sel(
    .sel(alu_f_out_sel),
    .in0(out_i),
    .in1(out_m),
    .in2(out_w),
    .in3(out_mw),
    .out()
);



mux2t1_64 rdsel1 (
    .sel (jal|jalr      ),
    .in0 (alu_f_out     ),
    .in1 (pc+64'd4      ),
    .out (rd_sel1_wire      )
);
mux2t1_64 rdsel2 (
    .sel (lui       ),
    .in0 (rd_sel1_wire           ),
    .in1 (imm  ),
    .out (rd_sel2_wire       )
);
mux2t1_64 rdsel3 (
    .sel (auipc       ),
    .in0 (rd_sel2_wire           ),
    .in1 (imm + pc  ),
    .out (rd_wire       )
);

mux2t1_64 jp_addr_sel (
    .sel (bxx|jal       ),
    .in0 (rs1+ imm      ),
    .in1 (pc + imm      ),
    .out (jp_addr_wire       )
);

/*
always@(*)begin
    case(alu_op)
    4'b0000:    alu_out_w = alu_in1_w + alu_in2_w;
    4'b0001:    alu_out_w = alu_in1_w << alu_in2_w;
    4'b0010:    alu_out_w = slt;
    4'b0011:    alu_out_w = uslt;
    4'b0100:    alu_out_w = alu_in1_w ^ alu_in2_w;
    4'b0101:    alu_out_w = alu_in1_w >> alu_in2_w;
    4'b0110:    alu_out_w = alu_in1_w | alu_in2_w;
    4'b0111:    alu_out_w = alu_in1_w & alu_in2_w;
    4'b1000:    alu_out_w = alu_in1_w - alu_in2_w;
    4'b1101:    alu_out_w = alu_in1_w >>> alu_in2_w;
    default:    alu_out_w = 64'b0;
    endcase

end
*/


wire [63:0]             eq;
wire [63:0]             neq;
wire [63:0]             slt;
wire [63:0]             snlt;
wire [63:0]             uslt;
wire [63:0]             usnlt;

comparator com1(
     .in1(alu_in1_w)
    ,.in2(alu_in2_w)
    ,.eq(eq)
    ,.neq(neq)
    ,.slt(slt)
    ,.snlt(snlt)
    ,.uslt(uslt)
    ,.usnlt(usnlt)

);

wire [63:0]             eq_b;
wire [63:0]             neq_b;
wire [63:0]             slt_b;
wire [63:0]             snlt_b;
wire [63:0]             uslt_b;
wire [63:0]             usnlt_b;

comparator com_bxx(
     .in1(rs1)
    ,.in2(rs2)
    ,.eq(eq_b)
    ,.neq(neq_b)
    ,.slt(slt_b)
    ,.snlt(snlt_b)
    ,.uslt(uslt_b)
    ,.usnlt(usnlt_b)

);

reg [63:0]     b_ans;
always@(*)begin
    case(func3)
    3'b000: b_ans <= eq_b;
    3'b001: b_ans <= neq_b;
    3'b100: b_ans <= slt_b;
    3'b101: b_ans <= snlt_b;
    3'b110: b_ans <= uslt_b;
    3'b111: b_ans <= usnlt_b;
    default:b_ans <= 63'b0; 
    endcase 
end





endmodule 