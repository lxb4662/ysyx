module alu_fusion(
    input [63:0]    in0,
    input [63:0]    in1,
    input [6:0]     alu_op,


    output reg [63:0]   out_i,
    output reg [63:0]   out_m,
    output reg [63:0]   out_w,
    output reg [63:0]   out_mw,
    output reg [63:0]   out

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


    ysyx_22050518_mul mul1(
        .clk(clk)
        ,.rst_n(rst_n)
        ,.mul_valid()
        ,.flush()
        ,.mulw(alu_op[6])
        ,.mul_signed()
        ,.multiplicand(in1_w_sel)
        ,.multiplier(in2_w_sel)
        ,.mul_ready()
        ,.out_valid()
        ,.result_hi(mul_out_h)
        ,.result_lo(mul_out_l)
    );


    assign imul      = mul_out_l;
    assign imulh     = mul_out_h;
    assign imulhu    = mul_out_h;
    assign imulhsu   = mul_out_h;
    assign idiv      = $signed(in1_w_sel)/$signed(in2_w_sel);
    assign idivu     = in1_w_sel/in2_w_sel;
    assign irem      = $signed(in1_w_sel)%$signed(in2_w_sel);
    assign iremu     = in1_w_sel%in2_w_sel;


    


    assign iadd = add_out;
    assign isub = add_out;
    assign isltu= (in0<in1)?64'b1:64'b0;
    assign islt = ($signed(in0)<$signed(in1))?64'b1:64'b0;
    assign ixor = in1_w_sel ^ in2_w_sel;
    assign isrl = in1_w_sel >> in2_w_sel;
    assign isll = in1_w_sel << in2_w_sel;
    assign ior  = in1_w_sel | in2_w_sel;
    assign iand = in1_w_sel & in2_w_sel;
    //assign isub = in1_w_sel - in2_w_sel;
    assign isra = w?israw:($signed(in1_w_sel) )>>> (in2_w_sel&64'b111111);
    wire [63:0] israw;
    assign israw = ($signed(in1_w_sel[31:0]) )>>> (in2_w_sel&64'b111111);

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

    reg [64:0] out_r;
    assign out = w?{{32{out_r[31]}},out_r[31:0]}:out_r;


endmodule 