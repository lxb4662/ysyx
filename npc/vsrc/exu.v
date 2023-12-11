
//`include "vsrc/define.v"
module exu(
    input               clk,
    input               rst_n,
    input [290:0]       dc_ex,
    input [64+5+1-1:0]  sideway,
    input               i_fencei_ok,
    input               i_fenced_ok,
    output [1:0]        o_fence,
    output              exu_ready_in,
    output reg          jup,
    output reg [31:0]   jup_addr,
    output [1+32+64+5+1+1-1:0] wb
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
    wire        fence_inst;
    assign {fence_inst,csr_addr,csrr,rs1_a,rs2_a,rs1,rs2,imm,pc,alu_in1_sel,alu_in2_sel,rd_sel,rd,func3,func7,lui,auipc,jal,jalr,bxx,load,store,alu_sel,sub,sra,alu_op,rd_write,ecall,mret,ebreak,valid_i} = dc_ex;

    wire [63:0] sideway_data;
    wire [4:0]  sideway_addr;
    wire        sideway_valid;
    assign {sideway_data,sideway_addr,sideway_valid} = sideway;

    wire [63:0]     rs1_sw;
    wire [63:0]     rs2_sw;

    assign rs1_sw = (sideway_valid&&(sideway_addr==rs1_a))?sideway_data:rs1;
    assign rs2_sw = (sideway_valid&&(sideway_addr==rs2_a))?sideway_data:rs2;

    wire alu_r;
    wire alu_i;
    wire alu_w;
    wire alu_iw;
    assign {alu_i,alu_r,alu_iw,alu_w} = alu_sel;



    // fsm 
    // 0: wait inst
    // 1: wait the mul result
    // 2: wait the div result

    reg [3:0]   fsm;
    reg [3:0]   fsm_next;
    always@(*)begin
        case(fsm)
            4'h0:   fsm_next = valid_i?((alu_op[3:2]==2'b10)?4'h1:((alu_op[3:2]==2'b11)?4'h2:4'h0)):4'h0;
            4'h1:   fsm_next = mul_out_valid?4'h0:4'h1;
            4'h2:   fsm_next = div_out_valid?4'h0:4'h2;
            default:    fsm_next = 'b0;
        endcase
    end

    always@(posedge clk)begin
        if(!rst_n)begin
            fsm <= 4'h0;
        end
        else begin
            fsm <= fsm_next;   
        end
    end


    wire long_inst;
    assign long_inst = fsm==4'b01||fsm==4'b10;

    reg [1+5+32+2+3+4+64+64-1:0] r_long_inst_buf;
    always@(posedge clk)begin
        if(!rst_n)begin
            r_long_inst_buf <= 'b0;
        end
        else begin
            if(valid_i&&exu_ready_in)begin
                r_long_inst_buf <= {alu_iw|alu_w,rd,pc,rd_sel,func3,alu_op,rs1_sw,rs2_sw};
            end
        end
    end

    wire [63:0] w_long_inst_rs1;
    wire [63:0] w_long_inst_rs2;
    wire [3:0]  w_long_inst_aluop;
    wire [2:0]  w_long_inst_func3;
    wire [1:0]  w_long_inst_rd_sel;
    wire [31:0] w_long_inst_pc;
    wire [4:0]  w_long_inst_rd;
    wire        w_long_inst_w;

    assign {w_long_inst_w,w_long_inst_rd,w_long_inst_pc,w_long_inst_rd_sel,w_long_inst_func3,w_long_inst_aluop,w_long_inst_rs2,w_long_inst_rs1} = r_long_inst_buf;

    assign exu_ready_in =   (fsm==4'b00) && (!fence_hold);
    /*
                            (fsm==4'b0)&&(alu_op[3]!=1'b1)||
                            (fsm==4'b1)&&mul_out_valid||
                            (!valid_i)||
                            (fsm==4'h2)&&div_out_valid&&(!fence_hold);*/

    wire [63:0] alu_in1_1;
    wire [63:0] alu_in2_1;

    assign alu_in1_1 = alu_in1_sel ?{32'd0,pc}:rs1_sw;
    assign alu_in2_1 = alu_in2_sel ?imm:rs2_sw;
    wire [63:0] alu_in1;
    wire [63:0] alu_in2;
    assign alu_in1 = (alu_w||alu_iw)?{32'b0,alu_in1_1[31:0]}:alu_in1_1;
    assign alu_in2 = (alu_w||alu_iw)?{32'b0,alu_in2_1[31:0]}:alu_in2_1;


    reg [63:0] alu_out;

    wire [63:0] alu_and;
    wire [63:0] alu_or;
    wire [63:0] alu_xor;
    wire [63:0] alu_slt;
    wire [63:0] alu_sll;
    wire [63:0] alu_sltu;
    wire [63:0] alu_srl;
    wire [63:0] alu_add;
    wire [63:0] alu_mul;
    wire [63:0] alu_mulh;
    wire [63:0] alu_mulhsu;
    wire [63:0] alu_mulhu;
    wire [63:0] alu_div;
    wire [63:0] alu_divu;
    wire [63:0] alu_rem;
    wire [63:0] alu_remu;

    assign alu_and = alu_in1&alu_in2;
    assign alu_or = alu_in1|alu_in2;
    assign alu_xor = alu_in1^alu_in2;

    wire [63:0] shift_arw;
    wire [63:0] shift_srl;

    `ifdef SHIFT
        ysyx_050518_shift ysyx_050518_shift(
        .in0(alu_in1)
        ,.in1((alu_w||alu_iw)?{59'd0,alu_in2[4:0]}:alu_in2)
        ,.sra(sra)
        ,.sra_left_in((alu_w||alu_iw)?alu_in1[31]:alu_in1[63])
        ,.logic_r(shift_srl)
        ,.logic_l(alu_sll)
        ,.a_r_w(shift_arw));

        assign alu_srl = (alu_w||alu_iw)?shift_arw:shift_srl;
    `else
        assign alu_srl = (alu_w||alu_iw)?shift_arw:shift_srl;
        assign shift_arw = sra?(alu_in1[31:0] >>> alu_in2[4:0]):(alu_in1[31:0] >> alu_in2);
        assign shift_srl = sra?(alu_in1 >>> alu_in2[5:0]):(alu_in1 >> alu_in2);
        assign alu_sll = alu_in1 << alu_in2;
    `endif



    wire [63:0] slt;
    wire [63:0] sltu;
    wire [63:0] eq;
    ysyx_050518_comp ysyx_050518_comp(.in0(alu_in1),.in1(alu_in2),.slt(alu_slt),.sltu(alu_sltu),.eq(eq));

    wire [63:0] slt_b;
    wire [63:0] sltu_b;
    wire [63:0] eq_b;
    ysyx_050518_comp ysyx_050518_b(.in0(rs1_sw),.in1(rs2_sw),.slt(slt_b),.sltu(sltu_b),.eq(eq_b));
    reg      b_ans;
    always@(*)begin
        case(func3)
        3'b000: b_ans = eq_b[0];
        3'b001: b_ans = ~eq_b[0];
        3'b100: b_ans = slt_b[0];
        3'b101: b_ans = ~slt_b[0];
        3'b110: b_ans = sltu_b[0];
        3'b111: b_ans = ~sltu_b[0];
        default:b_ans = 1'b0; 
        endcase 
    end
    
    assign alu_mul = mul_lo;
    //assign alu_div = $signed(alu_in1)/$signed(alu_in2);
    //assign alu_rem = $signed(alu_in1)%$signed(alu_in2);

    

    wire [63:0] mul_hi;
    wire [63:0] mul_lo;
    wire        mul_ready;
    wire        mul_out_valid;
    mul mul(
        .clk(clk)
        ,.rst_n(rst_n)
        ,.mul_valid(fsm==4'h1)
        ,.flush(1'b0)
        ,.mulw()
        ,.mul_signed({w_long_inst_aluop[1],w_long_inst_aluop[1]&w_long_inst_aluop[0]})
        ,.multiplicand(w_long_inst_rs2)
        ,.multiplier(w_long_inst_rs1)
        ,.mul_ready(mul_ready)
        ,.out_valid(mul_out_valid)
        ,.result_hi(mul_hi)
        ,.result_lo(mul_lo)

    );

    wire div_ready;
    wire div_valid;
    wire div_out_valid;

    ysyx_050518_div div(
        .clk(clk)
        ,.rst_n(rst_n)
        ,.dividend(w_long_inst_rs2)
        ,.divisor(w_long_inst_rs1)
        ,.div_valid(fsm==4'h2)
        ,.divw(1'b0)
        ,.div_signed(!w_long_inst_func3[0])
        ,.flush(1'b0)

        ,.out_ready(div_ready)
        ,.out_valid(div_out_valid)

        ,.quotient(alu_div)
        ,.remainder(alu_rem)

    );

    ///////////////////////////////////////////
    // this is unfinished
    ///////////////////////////////////////////

    assign alu_add = alu_in1+((sub==1'b1)?(~alu_in2+64'b1):alu_in2);

    wire [3:0] alu_out_sel;
    assign alu_out_sel = (fsm==4'b00)?alu_op:w_long_inst_aluop;

    always@(*)begin
        case(alu_out_sel)
            4'b0000:    alu_out = alu_add;
            4'b0001:    alu_out = alu_sll;
            4'b0010:    alu_out = alu_slt;
            4'b0011:    alu_out = alu_sltu;
            4'b0100:    alu_out = alu_xor;
            4'b0101:    alu_out = alu_srl;
            4'b0110:    alu_out = alu_or;
            4'b0111:    alu_out = alu_and;
            4'b1000:    alu_out = alu_mul;
            4'b1001:    alu_out = mul_hi;
            4'b1010:    alu_out = mul_hi;
            4'b1011:    alu_out = mul_hi;
            4'b1100:    alu_out = alu_div;
            4'b1101:    alu_out = alu_div;
            4'b1110:    alu_out = alu_rem;
            4'b1111:    alu_out = alu_rem;
        endcase
    end


    reg [1:0]       fence_fsm;
    wire            fence_hold;
    assign fence_hold = fence_fsm[0]|fence_fsm[1];
    always@(posedge clk or negedge rst_n)begin
        if(!rst_n)begin
            fence_fsm <= 2'b00;
        end
        else begin
            if(fence_inst&&valid_i&&exu_ready_in)begin
                fence_fsm <= 2'b11;
            end
            else begin
                if(i_fencei_ok)begin
                    fence_fsm[0] <= 1'b0;
                end
                if(i_fenced_ok)begin
                    fence_fsm[1] <= 1'b0;
                end
            end
        end
    end

    assign o_fence = fence_fsm;


    reg  [63:0] csr_in;
    wire [63:0] csr_out;

    wire [63:0] mepc;
    wire [63:0] mcause;
    wire [63:0] mstatus;
    wire [63:0] mtvec;



    always@(*)begin
        case(func3)
            3'b001: csr_in = rs1_sw;
            3'b010: csr_in = (~rs1_sw)&csr_out;
            3'b011: csr_in = rs1_sw|csr_out;
            default: csr_in = 'd0;
        endcase
    end

    csr_reg csr(
        .clk(clk)
        ,.rst_n(rst_n)

        ,.addr(csr_addr)
        ,.data_in(csr_in)
        ,.write(csrr&&valid_i&&exu_ready_in)
        ,.ecall(ecall&&valid_i&&exu_ready_in)
        ,.epc({32'b0,pc})
        ,.no(64'h11)
        ,.data_out(csr_out)

        ,.mepc(mepc)
        ,.mcause(mcause)
        ,.mstatus(mstatus)
        ,.mtvec(mtvec)
    );



    always@(posedge clk)begin
        if(ebreak&&valid_i&&exu_ready_in)
            $finish;
    end

    always@(posedge clk)begin
        if(!rst_n)begin
            jup<=1'b0;
            jup_addr<=32'b0;
        end
        else begin
            jup<=(jalr||jal||ecall||mret)&&valid_i&&exu_ready_in||(bxx&&b_ans&&valid_i&&exu_ready_in);
            jup_addr <= ecall?mtvec[31:0]:(mret?mepc[31:0]:alu_add[31:0]);
        end
    end

    reg [63:0]  rd_data;

    wire [1:0]  w_rd_sel;
    assign w_rd_sel = long_inst?w_long_inst_rd_sel:rd_sel;
    always@(*)begin
        case(w_rd_sel)
            2'b00:  rd_data = long_inst?(w_long_inst_w?{{32{alu_out[31]}},alu_out[31:0]}:alu_out):((alu_iw||alu_w)?{{32{alu_out[31]}},alu_out[31:0]}:alu_out);
            2'b01:  rd_data = {32'b0,pc} + 64'd4;
            2'b10:  rd_data = imm;
            2'b11:  rd_data = csr_out;
        endcase
    end

    reg [32+64+5+1+1-1:0]    wb_reg;
    wire rd_valid;
    assign rd_valid =   valid_i&&exu_ready_in&&(~(load||store))&&(~alu_op[3])&&(~long_inst)||
                        long_inst&&((mul_out_valid&&fsm==4'b01)||(div_out_valid&&fsm==4'b10))||
                        valid_i&&exu_ready_in&&csrr&&(~long_inst)||
                        valid_i&&exu_ready_in&&fence_inst&&(~long_inst);

    wire [4:0]  fin_rd;
    assign fin_rd = long_inst?w_long_inst_rd:rd;
    always@(posedge clk)begin
        if(!rst_n)begin
            wb_reg <= 'd0;
        end
        else begin
            wb_reg <= {pc,rd_data,fin_rd,(rd_write||long_inst)&&rd_valid,rd_valid};
        end
    end

    assign wb = {1'b1,wb_reg};

endmodule




module ysyx_050518_shift(
    input [63:0]        in0,
    input [63:0]        in1,
    input               sra,
    input               sra_left_in,
    output reg [63:0]       logic_r,
    output reg [63:0]       logic_l,
    output reg [63:0]       a_r_w
);

wire [5:0]  shamt;

assign shamt = in1[5:0];

always@(*)begin
    case(shamt)
        6'd0:logic_r = {{0{sra?sra_left_in:1'b0}},in0[63:0]};
        6'd1:logic_r = {{1{sra?sra_left_in:1'b0}},in0[63:1]};
        6'd2:logic_r = {{2{sra?sra_left_in:1'b0}},in0[63:2]};
        6'd3:logic_r = {{3{sra?sra_left_in:1'b0}},in0[63:3]};
        6'd4:logic_r = {{4{sra?sra_left_in:1'b0}},in0[63:4]};
        6'd5:logic_r = {{5{sra?sra_left_in:1'b0}},in0[63:5]};
        6'd6:logic_r = {{6{sra?sra_left_in:1'b0}},in0[63:6]};
        6'd7:logic_r = {{7{sra?sra_left_in:1'b0}},in0[63:7]};
        6'd8:logic_r = {{8{sra?sra_left_in:1'b0}},in0[63:8]};
        6'd9:logic_r = {{9{sra?sra_left_in:1'b0}},in0[63:9]};
        6'd10:logic_r = {{10{sra?sra_left_in:1'b0}},in0[63:10]};
        6'd11:logic_r = {{11{sra?sra_left_in:1'b0}},in0[63:11]};
        6'd12:logic_r = {{12{sra?sra_left_in:1'b0}},in0[63:12]};
        6'd13:logic_r = {{13{sra?sra_left_in:1'b0}},in0[63:13]};
        6'd14:logic_r = {{14{sra?sra_left_in:1'b0}},in0[63:14]};
        6'd15:logic_r = {{15{sra?sra_left_in:1'b0}},in0[63:15]};
        6'd16:logic_r = {{16{sra?sra_left_in:1'b0}},in0[63:16]};
        6'd17:logic_r = {{17{sra?sra_left_in:1'b0}},in0[63:17]};
        6'd18:logic_r = {{18{sra?sra_left_in:1'b0}},in0[63:18]};
        6'd19:logic_r = {{19{sra?sra_left_in:1'b0}},in0[63:19]};
        6'd20:logic_r = {{20{sra?sra_left_in:1'b0}},in0[63:20]};
        6'd21:logic_r = {{21{sra?sra_left_in:1'b0}},in0[63:21]};
        6'd22:logic_r = {{22{sra?sra_left_in:1'b0}},in0[63:22]};
        6'd23:logic_r = {{23{sra?sra_left_in:1'b0}},in0[63:23]};
        6'd24:logic_r = {{24{sra?sra_left_in:1'b0}},in0[63:24]};
        6'd25:logic_r = {{25{sra?sra_left_in:1'b0}},in0[63:25]};
        6'd26:logic_r = {{26{sra?sra_left_in:1'b0}},in0[63:26]};
        6'd27:logic_r = {{27{sra?sra_left_in:1'b0}},in0[63:27]};
        6'd28:logic_r = {{28{sra?sra_left_in:1'b0}},in0[63:28]};
        6'd29:logic_r = {{29{sra?sra_left_in:1'b0}},in0[63:29]};
        6'd30:logic_r = {{30{sra?sra_left_in:1'b0}},in0[63:30]};
        6'd31:logic_r = {{31{sra?sra_left_in:1'b0}},in0[63:31]};
        6'd32:logic_r = {{32{sra?sra_left_in:1'b0}},in0[63:32]};
        6'd33:logic_r = {{33{sra?sra_left_in:1'b0}},in0[63:33]};
        6'd34:logic_r = {{34{sra?sra_left_in:1'b0}},in0[63:34]};
        6'd35:logic_r = {{35{sra?sra_left_in:1'b0}},in0[63:35]};
        6'd36:logic_r = {{36{sra?sra_left_in:1'b0}},in0[63:36]};
        6'd37:logic_r = {{37{sra?sra_left_in:1'b0}},in0[63:37]};
        6'd38:logic_r = {{38{sra?sra_left_in:1'b0}},in0[63:38]};
        6'd39:logic_r = {{39{sra?sra_left_in:1'b0}},in0[63:39]};
        6'd40:logic_r = {{40{sra?sra_left_in:1'b0}},in0[63:40]};
        6'd41:logic_r = {{41{sra?sra_left_in:1'b0}},in0[63:41]};
        6'd42:logic_r = {{42{sra?sra_left_in:1'b0}},in0[63:42]};
        6'd43:logic_r = {{43{sra?sra_left_in:1'b0}},in0[63:43]};
        6'd44:logic_r = {{44{sra?sra_left_in:1'b0}},in0[63:44]};
        6'd45:logic_r = {{45{sra?sra_left_in:1'b0}},in0[63:45]};
        6'd46:logic_r = {{46{sra?sra_left_in:1'b0}},in0[63:46]};
        6'd47:logic_r = {{47{sra?sra_left_in:1'b0}},in0[63:47]};
        6'd48:logic_r = {{48{sra?sra_left_in:1'b0}},in0[63:48]};
        6'd49:logic_r = {{49{sra?sra_left_in:1'b0}},in0[63:49]};
        6'd50:logic_r = {{50{sra?sra_left_in:1'b0}},in0[63:50]};
        6'd51:logic_r = {{51{sra?sra_left_in:1'b0}},in0[63:51]};
        6'd52:logic_r = {{52{sra?sra_left_in:1'b0}},in0[63:52]};
        6'd53:logic_r = {{53{sra?sra_left_in:1'b0}},in0[63:53]};
        6'd54:logic_r = {{54{sra?sra_left_in:1'b0}},in0[63:54]};
        6'd55:logic_r = {{55{sra?sra_left_in:1'b0}},in0[63:55]};
        6'd56:logic_r = {{56{sra?sra_left_in:1'b0}},in0[63:56]};
        6'd57:logic_r = {{57{sra?sra_left_in:1'b0}},in0[63:57]};
        6'd58:logic_r = {{58{sra?sra_left_in:1'b0}},in0[63:58]};
        6'd59:logic_r = {{59{sra?sra_left_in:1'b0}},in0[63:59]};
        6'd60:logic_r = {{60{sra?sra_left_in:1'b0}},in0[63:60]};
        6'd61:logic_r = {{61{sra?sra_left_in:1'b0}},in0[63:61]};
        6'd62:logic_r = {{62{sra?sra_left_in:1'b0}},in0[63:62]};
        6'd63:logic_r = {{63{sra?sra_left_in:1'b0}},in0[63:63]};
    endcase
end


always@(*)begin
    case(shamt)
        6'd0:logic_l = {in0[63:0],{0{1'b0}}};
        6'd1:logic_l = {in0[62:0],{1{1'b0}}};
        6'd2:logic_l = {in0[61:0],{2{1'b0}}};
        6'd3:logic_l = {in0[60:0],{3{1'b0}}};
        6'd4:logic_l = {in0[59:0],{4{1'b0}}};
        6'd5:logic_l = {in0[58:0],{5{1'b0}}};
        6'd6:logic_l = {in0[57:0],{6{1'b0}}};
        6'd7:logic_l = {in0[56:0],{7{1'b0}}};
        6'd8:logic_l = {in0[55:0],{8{1'b0}}};
        6'd9:logic_l = {in0[54:0],{9{1'b0}}};
        6'd10:logic_l = {in0[53:0],{10{1'b0}}};
        6'd11:logic_l = {in0[52:0],{11{1'b0}}};
        6'd12:logic_l = {in0[51:0],{12{1'b0}}};
        6'd13:logic_l = {in0[50:0],{13{1'b0}}};
        6'd14:logic_l = {in0[49:0],{14{1'b0}}};
        6'd15:logic_l = {in0[48:0],{15{1'b0}}};
        6'd16:logic_l = {in0[47:0],{16{1'b0}}};
        6'd17:logic_l = {in0[46:0],{17{1'b0}}};
        6'd18:logic_l = {in0[45:0],{18{1'b0}}};
        6'd19:logic_l = {in0[44:0],{19{1'b0}}};
        6'd20:logic_l = {in0[43:0],{20{1'b0}}};
        6'd21:logic_l = {in0[42:0],{21{1'b0}}};
        6'd22:logic_l = {in0[41:0],{22{1'b0}}};
        6'd23:logic_l = {in0[40:0],{23{1'b0}}};
        6'd24:logic_l = {in0[39:0],{24{1'b0}}};
        6'd25:logic_l = {in0[38:0],{25{1'b0}}};
        6'd26:logic_l = {in0[37:0],{26{1'b0}}};
        6'd27:logic_l = {in0[36:0],{27{1'b0}}};
        6'd28:logic_l = {in0[35:0],{28{1'b0}}};
        6'd29:logic_l = {in0[34:0],{29{1'b0}}};
        6'd30:logic_l = {in0[33:0],{30{1'b0}}};
        6'd31:logic_l = {in0[32:0],{31{1'b0}}};
        6'd32:logic_l = {in0[31:0],{32{1'b0}}};
        6'd33:logic_l = {in0[30:0],{33{1'b0}}};
        6'd34:logic_l = {in0[29:0],{34{1'b0}}};
        6'd35:logic_l = {in0[28:0],{35{1'b0}}};
        6'd36:logic_l = {in0[27:0],{36{1'b0}}};
        6'd37:logic_l = {in0[26:0],{37{1'b0}}};
        6'd38:logic_l = {in0[25:0],{38{1'b0}}};
        6'd39:logic_l = {in0[24:0],{39{1'b0}}};
        6'd40:logic_l = {in0[23:0],{40{1'b0}}};
        6'd41:logic_l = {in0[22:0],{41{1'b0}}};
        6'd42:logic_l = {in0[21:0],{42{1'b0}}};
        6'd43:logic_l = {in0[20:0],{43{1'b0}}};
        6'd44:logic_l = {in0[19:0],{44{1'b0}}};
        6'd45:logic_l = {in0[18:0],{45{1'b0}}};
        6'd46:logic_l = {in0[17:0],{46{1'b0}}};
        6'd47:logic_l = {in0[16:0],{47{1'b0}}};
        6'd48:logic_l = {in0[15:0],{48{1'b0}}};
        6'd49:logic_l = {in0[14:0],{49{1'b0}}};
        6'd50:logic_l = {in0[13:0],{50{1'b0}}};
        6'd51:logic_l = {in0[12:0],{51{1'b0}}};
        6'd52:logic_l = {in0[11:0],{52{1'b0}}};
        6'd53:logic_l = {in0[10:0],{53{1'b0}}};
        6'd54:logic_l = {in0[9:0],{54{1'b0}}};
        6'd55:logic_l = {in0[8:0],{55{1'b0}}};
        6'd56:logic_l = {in0[7:0],{56{1'b0}}};
        6'd57:logic_l = {in0[6:0],{57{1'b0}}};
        6'd58:logic_l = {in0[5:0],{58{1'b0}}};
        6'd59:logic_l = {in0[4:0],{59{1'b0}}};
        6'd60:logic_l = {in0[3:0],{60{1'b0}}};
        6'd61:logic_l = {in0[2:0],{61{1'b0}}};
        6'd62:logic_l = {in0[1:0],{62{1'b0}}};
        6'd63:logic_l = {in0[0:0],{63{1'b0}}};
    endcase
end

always@(*)begin
    case(shamt)
        6'd0:a_r_w = {32'D0,{0{sra?sra_left_in:1'b0}},in0[31:0]};
        6'd1:a_r_w = {32'D0,{1{sra?sra_left_in:1'b0}},in0[31:1]};
        6'd2:a_r_w = {32'D0,{2{sra?sra_left_in:1'b0}},in0[31:2]};
        6'd3:a_r_w = {32'D0,{3{sra?sra_left_in:1'b0}},in0[31:3]};
        6'd4:a_r_w = {32'D0,{4{sra?sra_left_in:1'b0}},in0[31:4]};
        6'd5:a_r_w = {32'D0,{5{sra?sra_left_in:1'b0}},in0[31:5]};
        6'd6:a_r_w = {32'D0,{6{sra?sra_left_in:1'b0}},in0[31:6]};
        6'd7:a_r_w = {32'D0,{7{sra?sra_left_in:1'b0}},in0[31:7]};
        6'd8:a_r_w = {32'D0,{8{sra?sra_left_in:1'b0}},in0[31:8]};
        6'd9:a_r_w = {32'D0,{9{sra?sra_left_in:1'b0}},in0[31:9]};
        6'd10:a_r_w = {32'D0,{10{sra?sra_left_in:1'b0}},in0[31:10]};
        6'd11:a_r_w = {32'D0,{11{sra?sra_left_in:1'b0}},in0[31:11]};
        6'd12:a_r_w = {32'D0,{12{sra?sra_left_in:1'b0}},in0[31:12]};
        6'd13:a_r_w = {32'D0,{13{sra?sra_left_in:1'b0}},in0[31:13]};
        6'd14:a_r_w = {32'D0,{14{sra?sra_left_in:1'b0}},in0[31:14]};
        6'd15:a_r_w = {32'D0,{15{sra?sra_left_in:1'b0}},in0[31:15]};
        6'd16:a_r_w = {32'D0,{16{sra?sra_left_in:1'b0}},in0[31:16]};
        6'd17:a_r_w = {32'D0,{17{sra?sra_left_in:1'b0}},in0[31:17]};
        6'd18:a_r_w = {32'D0,{18{sra?sra_left_in:1'b0}},in0[31:18]};
        6'd19:a_r_w = {32'D0,{19{sra?sra_left_in:1'b0}},in0[31:19]};
        6'd20:a_r_w = {32'D0,{20{sra?sra_left_in:1'b0}},in0[31:20]};
        6'd21:a_r_w = {32'D0,{21{sra?sra_left_in:1'b0}},in0[31:21]};
        6'd22:a_r_w = {32'D0,{22{sra?sra_left_in:1'b0}},in0[31:22]};
        6'd23:a_r_w = {32'D0,{23{sra?sra_left_in:1'b0}},in0[31:23]};
        6'd24:a_r_w = {32'D0,{24{sra?sra_left_in:1'b0}},in0[31:24]};
        6'd25:a_r_w = {32'D0,{25{sra?sra_left_in:1'b0}},in0[31:25]};
        6'd26:a_r_w = {32'D0,{26{sra?sra_left_in:1'b0}},in0[31:26]};
        6'd27:a_r_w = {32'D0,{27{sra?sra_left_in:1'b0}},in0[31:27]};
        6'd28:a_r_w = {32'D0,{28{sra?sra_left_in:1'b0}},in0[31:28]};
        6'd29:a_r_w = {32'D0,{29{sra?sra_left_in:1'b0}},in0[31:29]};
        6'd30:a_r_w = {32'D0,{30{sra?sra_left_in:1'b0}},in0[31:30]};
        6'd31:a_r_w = {32'D0,{31{sra?sra_left_in:1'b0}},in0[31:31]};
        default:a_r_w = 64'd0;
    endcase
end



endmodule



module ysyx_050518_comp(
    input [63:0]                in0,
    input [63:0]                in1,
    output [63:0]               slt,
    output [63:0]               sltu,
    output [63:0]               eq

    );
    wire [63:0] s;
    wire c_out;
    ysyx_22050518_add add1(
    .in1(in0)
    ,.in2(~in1)
    ,.c_in(1'b1)
    ,.c_out(c_out)
    ,.out(s)
    );

assign slt  = {63'b0,(in0[63]&~in1[63])|(~(in0[63]^in1[63]))&s[63]}; 
wire s_64;
assign s_64 = 1'b0^1'b1^c_out;
assign sltu = {63'b0,s_64}; 
assign eq = {63'b0,in0==in1};

endmodule




module mul(   
    input           clk,
    input           rst_n,
    input           mul_valid,
    input           flush,
    input           mulw,
    input [1:0]     mul_signed,
    input [63:0]    multiplicand,
    input [63:0]    multiplier,
    output          mul_ready,
    output          out_valid,
    output [63:0]   result_hi,
    output [63:0]   result_lo

);

    reg [15:0]  		fsm;
    reg [15:0]  		fsm_next;    
    wire [127:0]    	result_signed;
    wire 					multiplicand_sign;
    wire 					multiplier_sign;

    reg [63:0]  		multiplicand_reg;
    reg [63:0]  		multiplier_reg;
    reg [127:0] 		result_reg;


 

    wire [63:0] 		multiplicand_unsign;
    wire [63:0] 		multiplier_unsign;

	 wire [64:0]			unsign_add;
	

    reg 					re_sign;

    always@(*)begin
        if(fsm == 'd0)begin
            fsm_next = mul_valid ?16'd1:16'd0;
        end
        else begin
            if(fsm<=16'd64)
                fsm_next = fsm+16'd1;
            else 
                fsm_next = 'd0;
        end
    end

    always@(posedge clk)begin
        if(!rst_n)begin
            fsm <= 'd0;
        end
        else begin
            fsm <= flush?'d0:fsm_next;
        end
    end

    assign mul_ready = fsm=='d0;
    assign out_valid = fsm=='d65;
    assign {result_hi,result_lo} = result_signed;

    assign result_signed = re_sign?(~result_reg+1'b1):result_reg;



   assign {multiplicand_sign,multiplier_sign} = mul_signed;


    assign multiplicand_unsign =(multiplicand_sign&&multiplicand[63])?(64'b1+~multiplicand):multiplicand;
    assign multiplier_unsign = (multiplier_sign&&multiplier[63])?(64'b1+~multiplier):multiplier;

    always@(posedge clk)begin
        if(!rst_n)begin
            multiplicand_reg <= 'b0;
            multiplier_reg   <= 'b0;
        end
        else begin
            if(mul_valid&&(fsm=='d0))begin
                multiplicand_reg <= multiplicand_unsign;
                multiplier_reg   <= multiplier_unsign;
            end
            else if(fsm!='d0)begin
                //multiplicand_reg <= {multiplicand_reg[126:0],1'b0};
                multiplier_reg   <= {1'b0,multiplier_reg[63:1]};
            end
        end
    end

    always@(posedge clk)begin
        if(!rst_n)begin
            result_reg <= 'b0;
        end
        else begin
            if(fsm=='d0)
                result_reg <= 'b0;
            else
                result_reg <= {unsign_add,result_reg[63:1]};
        end
    end

	assign unsign_add = multiplier_reg[0]?result_reg[127:64]+multiplicand_reg:result_reg[127:64];

	//Adder64 adder(.a(result_reg[127:64]),.b(multiplicand_reg),.cin(1'b0),.s(unsign_add[63:0]),.cout(unsign_add[64]));

    always@(*)begin
        if(multiplicand_sign&&multiplier_sign)begin
            re_sign = multiplicand[63]^multiplier[63];
        end
        else begin
            if(multiplicand_sign||multiplier_sign)begin
                re_sign = multiplicand_sign?multiplicand[63]:multiplier[63];
            end
            else begin
                re_sign = 1'b0;
            end
        end
    end

endmodule





module ysyx_050518_div(
    input       clk,
    input       rst_n,
    input [63:0]    dividend,
    input [63:0]    divisor,
    input           div_valid,
    input           divw,
    input           div_signed,
    input           flush,
    
    output          out_ready,
    output          out_valid,
    output wire [63:0]   quotient,
    output wire [63:0]   remainder


    );

    reg [6:0]   fsm;
    wire [6:0]   fsm_next;


    always@(posedge clk)begin
        if(!rst_n||flush)begin
            fsm <= 7'b0;
        end
        else begin  
            fsm <= fsm_next;
        end
    end

    assign fsm_next = (fsm==7'b0)?((div_valid)?7'd1:7'd0):((fsm==7'd65)?7'd0:(fsm+7'd1));


    assign out_ready = (fsm==7'b0);
    assign out_valid = (fsm==7'd65);

    reg [63:0]      dividend_r;
    reg [63:0]      divisor_r;
    reg             div_w_r;
    reg             div_signed_r;

    always@(posedge clk)begin
        if(div_valid&&out_ready)begin
           dividend_r   = dividend; 
           divisor_r    = divisor;
           div_w_r      = divw;
           div_signed_r = div_signed;
        end
    end


    wire            quotient_sign;
    assign          quotient_sign  =  (!div_signed)|(div_w_r?(dividend[31] & divisor[31])|((!dividend[31]) & (!divisor[31])):(dividend[63] & divisor[63])|((!dividend[63]) & (!divisor[63])));

    wire            remainder_sign;
    assign          remainder_sign =  (!div_signed)|(div_w_r?(!dividend[31] & !divisor[31])|((dividend[31]) & (!divisor[31])):(!dividend[63] & !divisor[63])|((dividend[63]) & (!divisor[63])));

    wire [63:0]     sign_to_unsign_0 = div_w_r?(div_signed?(dividend[31] ?(~dividend)+1'b1:dividend):dividend):(div_signed?(dividend[63] ?(~dividend)+1'b1:dividend):dividend);
    wire [63:0]     sign_to_unsign_1 = div_w_r?(div_signed?(divisor[31] ?(~divisor)+1'b1:divisor):divisor):(div_signed?(divisor[63] ?(~divisor)+1'b1:divisor):divisor);

    reg [1:0]   sign_r;
    always@(posedge clk)begin
        if(fsm ==7'd1)begin
            sign_r = {remainder_sign,quotient_sign};
        end
    end


   // assign add_in1 = div_signed_r? ;

    wire [127:0]     add_out;

    reg [127:0]      add_in1_r;
    reg [127:0]      add_in2_r;

    reg [127:0]     add_in2;


    
    wire [127:0] _add_in2_r;
    assign _add_in2_r = ~add_in2_r;
    wire c_out_add_0;

    `ifdef FULL_DIV
    
    ysyx_050518_add   add0(.in1(add_in1_r[63:0]),.in2(_add_in2_r[63:0]),.c_in(1'b1),.out(add_out[63:0]),.c_out(c_out_add_0));
    ysyx_050518_add   add1(.in1(add_in1_r[127:64]),.in2(_add_in2_r[127:64]),.c_in(c_out_add_0),.out(add_out[127:64]),.c_out());
    `else
    
    assign add_out = add_in1_r + _add_in2_r +1'b1;
    `endif 

    always@(posedge clk)begin
        if(!rst_n)begin
            add_in1_r   <= 128'b0;
        end
        else begin
            if(div_valid&&out_ready)begin
                add_in1_r <= {64'b0,sign_to_unsign_0};
            end
            else begin
                if((!add_out[127]))begin
                    add_in1_r <= add_out;
                end
            end
        end
    end    

    always@(posedge clk)begin
        if(!rst_n)begin
            add_in2_r   <= 128'b0;
        end
        else begin
            if(div_valid&&out_ready)begin
                add_in2_r <= {1'b0,sign_to_unsign_1,63'b0};
            end
            else begin
                add_in2_r <= {1'b0,add_in2_r[127:1]};
            end
        end
    end    

  
    reg [63:0]      ans;

    always@(posedge clk)begin
        if(!rst_n)begin
            ans <= 'b0;
        end
        else begin
            if(fsm!='d0)begin
                ans <= {ans[62:0],!add_out[127]};
            end
            else begin
                ans <= 'b0;
            end
        end
    end
    
    wire [63:0]q_signed;

    assign quotient = div_w_r?(sign_r[0]?ans:(({{32{1'b1}},~(ans[31:0])})+64'b1)):(sign_r[0]?ans:((~ans)+64'b1));
    wire [63:0]r_signed;


    assign remainder = div_w_r?(sign_r[1]?add_in1_r[63:0]:(({{32{1'b1}},~(add_in1_r[31:0])})+64'b1)):(sign_r[1]?add_in1_r[63:0]:((~add_in1_r[63:0])+64'b1));
/*
    assign remainder = r_signed;
    assign quotient = q_signed;
*/
 
endmodule



module csr_reg(
    input clk,
    input rst_n,

    input [11:0]    addr,
    input [63:0]    data_in,
    input           write,
    input           ecall,
    input  [63:0]   epc,
    input  [63:0]   no,
    output [63:0]   data_out,

    output [63:0]   mepc,
    output [63:0]   mcause,
    output [63:0]   mstatus,
    output [63:0]   mtvec,
    output [63:0]   mip,
    output [63:0]   mie
    


);



reg [63:0]  csr_group [7:0];
wire [2:0]  csr_real_addr;
csr_addr_conveter csr_read_addr_con(
    .addr_in(addr)
    ,.addr_out(csr_real_addr)
);

assign data_out = csr_group[csr_real_addr];

assign mepc = csr_group[0];
assign mcause = csr_group[1];
assign mstatus = csr_group[2];
assign mtvec = csr_group[3];
assign mip = csr_group[5];
assign mie = csr_group[4];


    always@(posedge clk)begin
        if(!rst_n)begin
            csr_group[0] <= 64'd0;
            csr_group[1] <= 64'd0;
            csr_group[2] <= 64'ha00001800;
            csr_group[3] <= 64'd0;
            csr_group[4] <= 64'd0;
            csr_group[5] <= 64'd0;
            csr_group[6] <= 64'd0;
            csr_group[7] <= 64'd0;
        end
        else begin
            if(write)begin
                csr_group[csr_real_addr] <= data_in;
            end
            else begin
                if(ecall)begin
                    csr_group[0]<=epc;
                    csr_group[1]<=64'hb;
                end
            end
        end
    end
endmodule


module csr_addr_conveter(
    input [11:0]    addr_in,
    output reg [2:0]    addr_out

);
    always@(*)begin
        case(addr_in)
            12'h300:    addr_out= 3'b010;
            12'h304:    addr_out= 3'b100;
            12'h305:    addr_out= 3'b011;
            
            12'h341:    addr_out= 3'b000;
            12'h342:    addr_out= 3'b001;
            12'h344:    addr_out= 3'b101;
        default:        addr_out= 3'b111;
        endcase

/*
        if(addr_in == 12'h341)
            addr_out = 3'b000;
        else begin
            if(addr_in == 12'h342)
                addr_out = 3'b001;
            else begin
                if(addr_in==12'h300)
                    addr_out = 3'b010;
                else begin
                    if(addr_in==12'h305)
                        addr_out = 3'b011;
                    else begin
                        addr_out = 3'b111;
                    end
                end
            end
        end*/
    end
endmodule
