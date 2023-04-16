module ysyx_22050518_exu_stage(
    input           clk,
    input           rst_n,


    input           exu_en,
    input [4:0]     rd_addr,
    input           rd_w_en,
    input [6:0]     alu_op,

    input [2:0]     func3,
    input [6:0]     func7,

    input           rs1_sel,
    input           rs2_sel,

    input           jal,
    input           jalr,
    input           bxx,
    input           lui,
    input           auipc,

    input [63:0]    pc,
    input [63:0]    rs1_reg,
    input [63:0]    rs2_reg,
    input [63:0]    imm,
    input [63:0]    rd_second_stage,
    


    input           alu_in1_sel,
    input           alu_in2_sel,


    output                  jup,
    output  [63:0]          jup_addr,

    output reg  [63:0]      rd_o,
    output reg  [4:0]       rd_addr_o,
    output reg              rd_w_o ,
    //output reg              valid_o,

    output                  pipe3_allowin

);

wire [63:0]     rs1;
wire [63:0]     rs2;
assign pipe3_allowin = alu_f_ready|(!exu_en);
wire [63:0]   rd_wire;

ysyx_22050518_mux2t1_64 rs1_sel_mux(
    .sel(rs1_sel)
    ,.in0(rs1_reg)
    ,.in1(rd_second_stage)
    ,.out(rs1)

);
ysyx_22050518_mux2t1_64 rs2_sel_mux(
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
        if(pipe3_allowin)begin
            rd_o        <= rd_wire;
            rd_w_o      <= rd_w_en&&exu_en&&alu_f_valid;
            rd_addr_o   <= rd_addr;

        end
    end

end
/*
always@(posedge clk)begin
    if(!rst_n)begin
        valid_o <= 1'b0;
    end
    else begin
        valid_o <= alu_f_valid|(pipe3_allowin&&(auipc|jal|jalr|bxx|lui));
    end
end

*/
assign    jup         = (jal|jalr|(bxx &( b_ans==64'b1)))&&pipe3_allowin&&exu_en;
assign    jup_addr    = jp_addr_wire;

reg   [63:0]     alu_out_w;
wire  [63:0]     alu_in1_w;
wire  [63:0]     alu_in2_w;
wire  [63:0]     alu_in1_w1;
wire  [63:0]     alu_in2_w1;

wire  [63:0]     rd_sel1_wire;
wire  [63:0]     rd_sel2_wire;
wire  [63:0]     rd_sel3_wire;

ysyx_22050518_mux2t1_64 aluin1sel (
    .sel (alu_in1_sel   ),
    .in0 (rs1           ),
    .in1 (pc            ),
    .out (alu_in1_w1    )
);
ysyx_22050518_mux2t1_64 aluin2sel (
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
wire            alu_f_valid;
wire            alu_f_ready;
ysyx_22050518_alu_fusion aluf(
     .clk(clk)
    ,.rst_n(rst_n)
    ,.in0(alu_in1_w1)
    ,.in1(alu_in2_w1)
    ,.alu_op(alu_op)
    ,.en(alu_op[4:3]==2'b11)
    ,.valid(alu_f_valid)
    ,.ready(alu_f_ready)
    ,.out(alu_f_out)
);

/*


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
*/


ysyx_22050518_mux2t1_64 rdsel1 (
    .sel (jal|jalr      ),
    .in0 (alu_f_out     ),
    .in1 (pc+64'd4      ),
    .out (rd_sel1_wire      )
);
ysyx_22050518_mux2t1_64 rdsel2 (
    .sel (lui       ),
    .in0 (rd_sel1_wire           ),
    .in1 (imm  ),
    .out (rd_sel2_wire       )
);
ysyx_22050518_mux2t1_64 rdsel3 (
    .sel (auipc       ),
    .in0 (rd_sel2_wire           ),
    .in1 (imm + pc  ),
    .out (rd_wire       )
);

ysyx_22050518_mux2t1_64 jp_addr_sel (
    .sel (bxx|jal       ),
    .in0 (rs1+ imm      ),
    .in1 (pc + imm      ),
    .out (jp_addr_wire       )
);



wire [63:0]             eq_b;
wire [63:0]             slt_b;
wire [63:0]             sltu_b;

ysyx_22050518_comp com_bxx(
     .in0(rs1)
    ,.in1(rs2)
    ,.eq(eq_b)
    ,.slt(slt_b)
    ,.sltu(sltu_b)

);

reg      b_ans;
always@(*)begin
    case(func3)
    3'b000: b_ans = eq_b[0];
    3'b001: b_ans = ~eq_b[0];
    3'b100: b_ans = slt_b[0];
    3'b101: b_ans = ~slt_b[0];
    3'b110: b_ans = sltu_b[0];
    3'b111: b_ans = ~sltu_b[0];
    default:b_ans = 64'b0; 
    endcase 
end

endmodule 