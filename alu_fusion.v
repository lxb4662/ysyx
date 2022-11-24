//`define MUL_BOOTH
module alu_fusion(
    input clk,
    input rst_n,
    input [63:0]    in0,
    input [63:0]    in1,
    input [6:0]     alu_op,

    input           en,
    output          valid,
    output          ready,

    output[63:0]    out

);

    wire [63:0]     iadd;
    wire [63:0]     isub;
    wire [63:0]     islt;
    wire [63:0]     isltu;
    wire [63:0]     iand;
    wire [63:0]     ior;
    wire [63:0]     isll;
    wire [63:0]     isra;
    wire [63:0]     isrl;
    wire [63:0]     ixor;
    
    wire [63:0]     imul;
    wire [63:0]     imulh;
    wire [63:0]     imulhu;
    wire [63:0]     imulhsu;
    wire [63:0]     idiv;
    wire [63:0]     idivu;
    wire [63:0]     irem;
    wire [63:0]     iremu;


    wire [31:0]     addw;
    wire [31:0]     subw;
    wire [31:0]     sllw;
    wire [31:0]     srlw;
    wire [31:0]     sraw;


    wire [31:0]     mulw;
    wire [31:0]     divw;
    wire [31:0]     divuw;
    wire [31:0]     remw;
    wire [31:0]     remuw;

    wire w;
    assign w = alu_op[6];

    wire sub;
    assign sub = alu_op[4];

    wire [63:0] in1_w;
    wire [63:0] in2_w;

    assign in1_w = {{32{1'b0}},in0[31:0]};
    assign in2_w = {{32{1'b0}},in1[31:0]};

    wire [63:0] add_in1;
    assign add_in1 = w?in1_w:in0;

    wire [63:0]add_in2_w_sel;
    assign add_in2_w_sel = w?in2_w:in1;

    wire [63:0] add_in2;
    assign add_in2 = sub?(~add_in2_w_sel):add_in2_w_sel;

    wire [63:0] add_out;
    ysyx_22050518_add add(.in1(add_in1),.in2(add_in2),.c_in(alu_op[4]),.out(add_out));



    wire [63:0]     mul_out_h;
    wire [63:0]     mul_out_l;

    wire [63:0]     in1_w_sel;
    wire [63:0]     in2_w_sel;

    assign in1_w_sel = w?in1_w:in0;
    assign in2_w_sel = w?in2_w:in1;

    reg [1:0]   mul_sign;
    always@(*)begin
        case(alu_op[2:0])
            3'b000: mul_sign = 2'b11;
            3'b001: mul_sign = 2'b11;
            3'b010: mul_sign = 2'b10;
            3'b011: mul_sign = 2'b00;
            default: mul_sign = 2'b11;
        endcase
    end

    wire mul_valid;
    wire mul_ready;
    `ifdef MUL_BOOTH
    mul mul1(
        .clk            (clk)
        ,.rst_n         (rst_n)
        ,.mul_valid     (en&((alu_op[4:0]==5'b11000)|(alu_op[4:0]==5'b11001)|(alu_op[4:0]==5'b11010)|(alu_op[4:0]==5'b11011)))
        ,.flush         (1'b0)
        ,.mulw          (alu_op[6])
        ,.mul_signed    (mul_sign)
        ,.multiplicand  (in1_w_sel)
        ,.multiplier    (in2_w_sel)
        ,.out_ready     (mul_ready)
        ,.out_valid     (mul_valid)
        ,.result_hi     (mul_out_h)
        ,.result_lo     (mul_out_l)
    );
    `endif
    `ifndef MUL_BOOTH
    assign imul      = $signed(in1_w_sel)*$signed(in2_w_sel);
    assign imulh     = $signed(in1_w_sel)*$signed(in2_w_sel)>>64;
    assign imulhu    = (in1_w_sel*in2_w_sel)>>64;
    assign imulhsu   = ( $signed(in1_w_sel)*(in2_w_sel))>>64;
    assign ready_m   = 1'b1;
    `endif
    /*
    //assign idiv      = w?($signed(in1_w_sel[31:0])/$signed(in2_w_sel[31:0])):($signed(in1_w_sel)/$signed(in2_w_sel));
    //assign idivu     = in1_w_sel/in2_w_sel;
    //assign irem      =  w?($signed(in1_w_sel[31:0])%$signed(in2_w_sel[31:0])):($signed(in1_w_sel)%$signed(in2_w_sel));
    //assign iremu     = in1_w_sel%in2_w_sel;
    */
    `ifdef MUL_BOOTH
    assign imul      = mul_out_l;
    assign imulh     = mul_out_h;
    assign imulhu    = mul_out_h;
    assign imulhsu   = mul_out_h;

    assign ready_m = mul_ready&~((alu_op[4:0]==5'b11000)|(alu_op[4:0]==5'b11001)|(alu_op[4:0]==5'b11010)|(alu_op[4:0]==5'b11011))|mul_valid;
    `endif


    assign idiv      = div_q;
    assign idivu     = div_q;
    assign irem      = div_r;
    assign iremu     = div_r;
    


    assign iadd = add_out;
    assign isub = add_out;
    assign isltu= (in0<in1)?64'b1:64'b0;
    assign islt = ($signed(in0)<$signed(in1))?64'b1:64'b0;
    assign ixor = in1_w_sel ^ in2_w_sel;
    //assign isrl = in1_w_sel >> in2_w_sel;
    //assign isll = in1_w_sel << in2_w_sel;
    assign ior  = in1_w_sel | in2_w_sel;
    assign iand = in1_w_sel & in2_w_sel;
    //assign isub = in1_w_sel - in2_w_sel;
    //assign isra = w?{{32{israw[31]}},israw[31:0]}:($signed(in1_w_sel) )>>> (in2_w_sel&64'b111111);
    wire [63:0] israw;
    //assign israw = ($signed(in1_w_sel[31:0]) )>>> (in2_w_sel&64'b111111);

    wire [63:0] isar_l;
    assign isra = w?israw:isar_l;
    shift shift1(.in0(in1_w_sel),.in1(in2_w_sel&(w?64'b11111:64'b111111)),.logic_r(isrl),.logic_l(isll),.arithmetic_r(isar_l),.arithmetic_wr(israw));

    always@(*)begin
        case(alu_op[4:0])
            5'b00000:   out_r = iadd;
            5'b10000:   out_r = isub;
            5'b00001:   out_r = isll;
            5'b00010:   out_r = islt;
            5'b00011:   out_r = isltu;
            5'b00100:   out_r = ixor;
            5'b00101:   out_r = isrl;
            5'b01101:   out_r = isra;
            5'b00110:   out_r = ior;
            5'b00111:   out_r = iand;
            5'b11000:   out_r = imul;
            5'b11001:   out_r = imulh;
            5'b11010:   out_r = imulhsu;
            5'b11011:   out_r = imulhu;
            5'b11100:   out_r = idiv;
            5'b11101:   out_r = idivu;
            5'b11110:   out_r = irem;
            5'b11111:   out_r = iremu;
            default:    out_r = 64'b0;
        endcase


    end

    reg [63:0] out_r;
    assign out = w?{{32{out_r[31]}},out_r[31:0]}:out_r;

    wire [63:0] div_q;
    wire [63:0] div_r;

    wire        div_valid;
    wire        div_ready;
    ysyx_22050518_div div_1(
         .clk(clk)
        ,.rst_n(rst_n)
        ,.dividend(in0)
        ,.divisor(in1)
        ,.div_valid(en&((alu_op[4:0]==5'b11100)|(alu_op[4:0]==5'b11101)|(alu_op[4:0]==5'b11110)|(alu_op[4:0]==5'b11111)))
        ,.divw(w)
        ,.div_signed(alu_op[4:0]==5'b11100)
        ,.flush(1'b0)
        ,.out_valid(div_valid)
        ,.out_ready(div_ready)
        ,.quotient(div_q)
        ,.remainder(div_r)
    );

    assign valid = ((alu_op[4:0]==5'b11100)|(alu_op[4:0]==5'b11101)|(alu_op[4:0]==5'b11110)|(alu_op[4:0]==5'b11111))?div_valid:1'b1;

    wire ready_d;
    wire ready_m;
    assign ready_d = div_ready&~((alu_op[4:0]==5'b11100)|(alu_op[4:0]==5'b11101)|(alu_op[4:0]==5'b11110)|(alu_op[4:0]==5'b11111))|div_valid;
    assign ready   = ready_d&&ready_m;


endmodule 