import "DPI-C" function void mtrace(input int pc ,input int addr,input int a0,input int a1,input int len);
module ifu(
    input                           clk,
    input                           rst_n,

    output [32+1+2-1:0]             r,
    input                           addr_ok,
    input  [32+1-1:0]               re,

    input                           jup,
    input  [31:0]                   jup_addr,

    output reg  [64:0]              if_dc_reg,
    input                           dc_ready_in

);


    wire            re_valid;
    wire [31:0]     re_data;
    assign {re_data,re_valid} = re;



    reg [31:0]     pc;
    wire [31:0]    next_pc;



    assign next_pc = jup?jup_addr:(pc + 32'd4);

    always@(posedge clk)begin
        if(!rst_n)begin
            pc <= 32'h80000000;
        end
        else begin
            if(dc_ready_in&&addr_ok||jup)begin
                pc <= next_pc;
            end
        end
    end

    reg [31:0]  PC_if1;
    reg [31:0]  PC_if2;
    always@(posedge clk)begin
        if(!rst_n)begin
            PC_if1 <= 32'b0;
        end
        else begin
            if(dc_ready_in&&addr_ok)begin
                PC_if1 <= pc;
            end
        end
    end

    wire [31:0] r_addr;
    wire        r_req;
    wire [1:0]  r_length;


    assign r_addr = pc;
    assign r_req = dc_ready_in&&(!jup);
    assign r_length = 2'b10;

    assign r = {r_addr,r_length,r_req};


    reg [32+1-1:0]  wait_reg;
    always@(posedge clk)begin
        if(!rst_n)begin
            wait_reg <= 'b0;
        end
        else begin
            if(re_valid)begin
               wait_reg <= {re_valid,re_data}; 
            end
        end
    end

    reg             fsm;
    reg             fsm_next;
    always@(*)begin
        case(fsm)
            1'b0:   fsm_next = ((!dc_ready_in)&&re_valid)?1'b1:1'b0;
            1'b1:   fsm_next = dc_ready_in?1'b0:1'b1;
        endcase
    end
    always@(posedge clk)begin
        if(!rst_n)begin
            fsm <= 1'b0;
        end
        else begin
            fsm <= fsm_next;
        end
    end


    always@(posedge clk)begin
        if(!rst_n)begin
            if_dc_reg <= 'd0;
        end
        else begin
            if(dc_ready_in)begin
                if_dc_reg <= {(fsm==1'b0)?re_data:wait_reg[31:0],PC_if1,(~jup)&&((fsm==1'b0)?re_valid:wait_reg[32])};
            end
        end
    end


endmodule 


module dc(
    input                   clk,
    input                   rst_n,

    input [32+32+1-1:0]     if_dc,
    input                   jup,
    input [5+64+1-1:0]      wb_dc,
    

    output reg [1023:0]     dc_ex,
    output                  ready_in,
    input                   next_stage_ready
    
);

    wire [31:0] inst;
    wire [31:0] pc;
    wire        valid_i;

    assign {inst,pc,valid_i} = if_dc;

    wire [6:0]  opcode;
    wire [4:0]  rd;
    wire [2:0]  func3;
    wire [4:0]  rs1;
    wire [4:0]  rs2;
    wire [6:0]  func7;

    assign {func7,rs2,rs1,func3,rd,opcode} = inst;

    wire [11:0] csr_addr;
    assign csr_addr = inst[31:20];

    // 立即数扩�?????

    wire [11:0] imm_i;
    wire [11:0] imm_s;
    wire [19:0] imm_u;
    wire [11:0] imm_b;
    wire [19:0] imm_j;

    assign imm_i = inst[31:20];
    assign imm_s = {inst[31:25],inst[11:7]};
    assign imm_u = {inst[31:12]};
    assign imm_b = {inst[31],inst[7],inst[30:25],inst[11:8]};
    assign imm_j = {inst[31],inst[19:12],inst[20],inst[30:21]};

    imm_decode imm_decode(
        .imm_i_l_jalr(imm_i)
        ,.imm_s(imm_s)
        ,.imm_u(imm_u)
        ,.imm_b(imm_b)
        ,.imm_jal(imm_j)
        ,.sel({lui||auipc,jal,bxx,store,alu_iw||alu_i||load||jalr})
        ,.out(imm)
    );


    wire [63:0] imm;

    wire [63:0] rs1_d;
    wire [63:0] rs2_d;

    assign rs1_d = (wb_write&&(rs1==wb_rd))?wb_data:rv64_reg[rs1];
    assign rs2_d = (wb_write&&(rs2==wb_rd))?wb_data:rv64_reg[rs2];

    

    wire lui;
    wire auipc;
    wire jal;
    wire jalr;
    wire bxx;
    wire load;
    wire store;
    wire alu_i;
    wire alu_r;
    wire alu_iw;
    wire alu_w;
    wire csrr;
    wire ebreak;
    wire ecall;
    wire mret;


    assign lui = (opcode==7'b0110111);
    assign auipc = (opcode==7'b0010111);
    assign jal = (opcode==7'b1101111);
    assign jalr = (opcode==7'b1100111);
    assign bxx = (opcode==7'b1100011);
    assign load = (opcode==7'b0000011);
    assign store = (opcode==7'b0100011);
    assign alu_i = (opcode==7'b0010011);
    assign alu_r = (opcode==7'b0110011);
    assign alu_iw = (opcode==7'b0011011);
    assign alu_w = (opcode==7'b0111011);
    assign csrr = (opcode==7'b1110011)&&(func3!=3'b000);
    assign ebreak = (inst==32'h00100073);
    assign ecall =  (inst==32'h00000073);
    assign mret =   (inst==32'b00110000001000000000000001110011);


    wire [3:0]  alu_sel;
    assign alu_sel = {alu_i,alu_r,alu_iw,alu_w};


    // 通用寄存�?????

    wire [4:0]  wb_rd;
    wire [63:0] wb_data;
    wire        wb_write;
    assign {wb_data,wb_rd,wb_write} = wb_dc;


    reg [63:0] rv64_reg [31:0];
    integer i;
    always@(posedge clk)begin
        if(!rst_n)begin
            for (i = 0 ; i<32;i = i+1)begin
                rv64_reg[i] <= 64'd0;
            end
        end
        else begin
            if(wb_write)begin
                rv64_reg[wb_rd] <= (wb_rd==5'b0)?64'h0:wb_data;
            end
        end
    end


    wire alu_in1_sel;
    wire alu_in2_sel;

    assign {alu_in1_sel,alu_in2_sel} = {auipc||jal||bxx,alu_i||alu_iw||auipc||jal||jalr||bxx};

    wire rd_write = alu_i||alu_iw||alu_r||alu_w||load||lui||auipc||jal||jalr||csrr;


    reg [1:0]  rd_sel;
    always@(*)begin
        if(auipc||alu_i||alu_iw||alu_r||alu_w)begin
            rd_sel = 2'b00;         //alu 
        end
        else begin
            if(lui)begin
                rd_sel = 2'b10;     //imm
            end
            else begin
                if(jal||jalr)begin
                    rd_sel = 2'b01;
                end
                else begin
                    if(csrr)begin
                        rd_sel = 2'b11;
                    end
                    else begin
                        rd_sel = 2'b00;
                    end 
                end
            end
        end
    end

    
    reg [3:0]  alu_op;
    always@(*)begin
        case({alu_r,alu_i,alu_w,alu_iw})
            4'b1000: alu_op = {func7[0],func3};
            4'b0100: alu_op = {1'b0,func3};
            4'b0010: alu_op = {func7[0],func3};
            4'b0001: alu_op = {1'b0,func3};
            default: alu_op = 4'b0;
        endcase
    end

    wire sub;
    wire sra;
    assign sub = (alu_r||alu_w)&&(func3==3'b000)&&(func7==7'b0100000);
    assign sra = (alu_r||alu_w||alu_i||alu_iw)&&(func3==3'b101)&&(func7[6:1]==6'b010000);







    always@(posedge clk)begin
        if(!rst_n)begin
            dc_ex <= 1024'd0;
        end
        else begin
            if(next_stage_ready)begin
                dc_ex <= {csr_addr,csrr,rs1,rs2,rs1_d,rs2_d,imm,pc,alu_in1_sel,alu_in2_sel,rd_sel,rd,func3,func7,lui,auipc,jal,jalr,bxx,load,store,alu_sel,sub,sra,alu_op,rd_write,ecall,mret,ebreak,valid_i&&(~jup)};
            end
        end
    end





    assign ready_in = next_stage_ready;


endmodule 







module exu(
    input               clk,
    input               rst_n,
    input [1023:0]      dc_ex,
    input [64+5+1-1:0]        sideway,
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
    assign {csr_addr,csrr,rs1_a,rs2_a,rs1,rs2,imm,pc,alu_in1_sel,alu_in2_sel,rd_sel,rd,func3,func7,lui,auipc,jal,jalr,bxx,load,store,alu_sel,sub,sra,alu_op,rd_write,ecall,mret,ebreak,valid_i} = dc_ex;

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

    reg [64+64-1:0] rs1_rs2_reg;
    always@(posedge clk)begin
        if(!rst_n)begin
            rs1_rs2_reg <= 'b0;
        end
        else begin
            if(fsm==4'h0)begin
                rs1_rs2_reg <= {rs1_sw,rs2_sw};
            end
        end
    end





    wire [63:0] alu_in1_1;
    wire [63:0] alu_in2_1;

    assign alu_in1_1 = alu_in1_sel ?{32'd0,pc}:rs1_sw;
    assign alu_in2_1 = alu_in2_sel ?imm:rs2_sw;
    wire [63:0] alu_in1;
    wire [63:0] alu_in2;
    assign alu_in1 = (alu_w||alu_iw)?alu_in1_1:alu_in1_1;
    assign alu_in2 = (alu_w||alu_iw)?alu_in2_1:alu_in2_1;

    assign exu_ready_in = (fsm==4'b0)&&(alu_op[3]!=1'b1)||(fsm==4'b1)&&mul_out_valid||(!valid_i)||(fsm==4'h2)&&div_out_valid;

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
    ysyx_050518_shift ysyx_050518_shift(.in0((alu_w||alu_iw)?{32'b0,alu_in1[31:0]}:alu_in1),.in1((alu_w||alu_iw)?{59'd0,alu_in2[4:0]}:alu_in2),.sra(sra),.sra_left_in((alu_w||alu_iw)?alu_in1[31]:alu_in1[63]),.logic_r(shift_srl),.logic_l(alu_sll),.a_r_w(shift_arw));

    assign alu_srl = (alu_w||alu_iw)?shift_arw:shift_srl;

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
        ,.mul_signed({alu_op[1],alu_op[1]&alu_op[0]})
        ,.multiplicand(rs1_rs2_reg[127:64])
        ,.multiplier(rs1_rs2_reg[63:0])
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
        ,.dividend(rs1_rs2_reg[127:64])
        ,.divisor(rs1_rs2_reg[63:0])
        ,.div_valid(fsm==4'h2)
        ,.divw(1'b0)
        ,.div_signed(!func3[0])
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

    always@(*)begin
        case(alu_op)
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
        ,.write(csrr&&valid_i)
        ,.ecall(ecall&&valid_i)
        ,.epc(pc)
        ,.no(64'h11)
        ,.data_out(csr_out)

        ,.mepc(mepc)
        ,.mcause(mcause)
        ,.mstatus(mstatus)
        ,.mtvec(mtvec)
    );







    always@(posedge clk)begin
        if(ebreak&&valid_i)
            $finish;
    end

    always@(posedge clk)begin
        if(!rst_n)begin
            jup<=1'b0;
            jup_addr<=32'b0;
        end
        else begin
            jup<=(jalr||jal||ecall||mret)&&valid_i||(bxx&&b_ans&&valid_i);
            jup_addr <= ecall?mtvec[31:0]:(mret?mepc[31:0]:alu_add[31:0]);
        end
    end

    reg [63:0]  rd_data;
    always@(*)begin
        case(rd_sel)
            2'b00:  rd_data = (alu_iw||alu_w)?{{32{alu_out[31]}},alu_out[31:0]}:alu_out;
            2'b01:  rd_data = {32'b0,pc} + 64'd4;
            2'b10:  rd_data = imm;
            2'b11:  rd_data = csr_out;
        endcase
    end

    reg [32+64+5+1+1-1:0]    wb_reg;
    wire rd_valid;
    assign rd_valid = valid_i&&(~(load||store))&&(~alu_op[3])||valid_i&&(~(load||store))&&((alu_op[3:2]==2'b10)&&mul_out_valid||(alu_op[3:2]==2'b11)&&div_out_valid)||valid_i&&csrr;
    always@(posedge clk)begin
        if(!rst_n)begin
            wb_reg <= 70'd0;
        end
        else begin
            wb_reg <= {pc,rd_data,rd,rd_write,rd_valid};
        end
    end

    assign wb = wb_reg;

endmodule


module lsu(
    input clk,
    input rst_n,

    input [1023:0]                      dc_ls,
    input [64+5+1-1:0]                  sideway,
    output                              lsu_ready_in,
    output [1+32+64+5+1+1-1:0]                 wb,

    output [64+64-1:0]                      mtime_mtimecmp,

    output [32 + 64 + 1 + 2+ 1 -1:0]        cache_bus_req,
    // addr data valid lenght write
    input [64 + 1 + 1 -1 :0]                cache_bus_rsp,
    // data addr_on data_ok

    output [1 + 4 + 32 - 1 : 0]             sram_busr_out,
    //  r_addr r_type r_req
    input [1 + 1 + 128 - 1 :0]              sram_busr_in,
    // r_rdy re_data re_valid 

    output [32 + 128 + 4 + 16 + 1 - 1 : 0]  sram_busw_out,
    //  {sram_w_addr,sram_w_data,sram_w_type,sram_w_strb,sram_w_req};
    input                                   sram_busw_in   


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
    assign ls_addr = rs1_sw + imm;

    wire [63:0] store_data = rs2_sw;

    wire [31:0] ls_addr_all;
    assign ls_addr_all = (fsm==4'h0)?ls_addr:ls_addr_reg;
    wire addr_in_cache;
    assign addr_in_cache = ls_addr_all[31:28]==4'h8;


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

    always@(posedge clk)begin
        if(store&&valid_i&&addr_ok)begin
            mtrace(pc,ls_addr,rs2_sw[31:0],rs2_sw[63:32],func3[1:0]);
        end
    end


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

    assign cache_addr   = (fsm==4'h0)?ls_addr:ls_addr_reg;
    assign cache_wdata  = (fsm==4'h0)?store_data:rs2_sw_reg;
    assign cache_type   = cache_len;
    assign cache_valid  = (load||store)&&addr_in_cache&&valid_i&&((fsm==4'h0)||(fsm==4'h1));
    assign cache_write  = addr_in_cache&&store&&valid_i;

    assign cache_bus_req = {cache_addr,cache_wdata,cache_type,cache_valid,cache_write};
    assign {cache_rdata,cache_addr_ok,cache_data_ok} = cache_bus_rsp;







    /////////////////////////////////   
    // SRAM PORT
    /////////////////////////////////

    wire [31:0]     sram_r_addr;
    wire [3:0]      sram_r_type;
    wire            sram_r_req;

    wire            sram_r_rdy;
    wire [127:0]    sram_re_data;
    wire            sram_re_valid;

    assign sram_r_addr = ls_addr;
    assign sram_r_type = sram_len;
    assign sram_r_req  = load&&(!addr_in_cache)&&valid_i;

    assign sram_busr_out = {sram_r_addr,sram_r_type,sram_r_req};
    assign {sram_r_rdy,sram_re_data,sram_re_valid} = sram_busr_in;

    wire sram_read_ready_in;
    assign sram_read_ready_in = sram_r_rdy;
    

    wire [31:0]     sram_w_addr;
    wire [127:0]    sram_w_data;
    wire [3:0]      sram_w_type;
    wire [15:0]     sram_w_strb;
    wire            sram_w_req;

    wire            sram_w_rdy;

    assign sram_w_addr = (fsm==4'h0)?ls_addr:ls_addr_reg;
    assign sram_w_data = (fsm==4'h0)?store_data:rs2_sw_reg;
    assign sram_w_type = sram_len;
    assign sram_w_strb = ~16'd0;
    assign sram_w_req  = (store)&&(~addr_in_cache)&&valid_i&&((fsm==4'h0)||(fsm==4'h1));

    assign sram_busw_out = {sram_w_addr,sram_w_data,sram_w_type,sram_w_strb,sram_w_req};
    assign sram_w_rdy = sram_busw_in;

    wire sram_write_ready_in = sram_w_rdy;


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

module ysyx_050518_shift(
    input [63:0]        in0,
    input [63:0]        in1,
    input               sra,
    input               sra_left_in,
    output reg [63:0]       logic_r,
    output reg [63:0]       logic_l,
    output reg [63:0]       a_r_w,
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




module load_ext(
    input [2:0]     func3,
    input [63:0]    data_in,
    output reg [63:0]   data_out

);
always@(*)begin
    case(func3)
        3'b000:  data_out = {{56{data_in[7]}},data_in[7:0]};
        3'b001:  data_out = {{48{data_in[15]}},data_in[15:0]};
        3'b010:  data_out = {{32{data_in[31]}},data_in[31:0]};
        3'b011:  data_out = {data_in[63:0]};
        3'b100:  data_out = {{56{1'b0}},data_in[7:0]};
        3'b101:  data_out = {{48{1'b0}},data_in[15:0]};
        3'b110:  data_out = {{32{1'b0}},data_in[31:0]};
        3'b111:  data_out = {data_in[63:0]};
    endcase
end

endmodule


module imm_decode (
  input [11:0]        imm_i_l_jalr,
  input [11:0]        imm_s,
  input [11:0]        imm_b, 
  input [19:0]        imm_jal, 
  input [19:0]        imm_u, 
  input [ 4:0]        sel,
  output reg [63:0]   out  

);
  wire [63:0]         ext_imm_iljalr;
  wire [63:0]         ext_imm_s;
  wire [63:0]         ext_imm_b;
  wire [63:0]         ext_imm_jal;
  wire [63:0]         ext_imm_u;
  wire [63:0]         ext_i_shamt;

  assign ext_imm_iljalr = {{52{imm_i_l_jalr[11]}},imm_i_l_jalr};
  assign ext_imm_s      = {{52{imm_s[11]}},imm_s};
  assign ext_imm_b      = {(imm_b[11]==1'b0)?{51{1'b0}}:{51{1'b1}},imm_b,1'b0};
  assign ext_imm_jal    = {(imm_jal[19]==1'b0)?{43{1'b0}}:{43{1'b1}},imm_jal,1'b0};
  assign ext_imm_u      = {(imm_u[19]==1'b0)?{32{1'b0}}:{32{1'b1}},imm_u,12'b0};
  assign ext_i_shamt    = {{58{1'b0}},ext_imm_iljalr[5:0]};



  always@(*)begin
    case(sel )
    5'b00001:   out = ext_imm_iljalr;
    5'b00010:   out = ext_imm_s;
    5'b00100:   out = ext_imm_b;
    5'b01000:   out = ext_imm_jal;
    5'b10000:   out = ext_imm_u;
    default:out = 64'b0;

    endcase     
  end

endmodule

module sram_bus_interconnect(
    input clk,
    input rst_n,

    input   [32+4+1-1:0]        r_in_0,
    output  [128+1+1-1:0]       r_out_0,

    input [32+128+4+16+1-1:0]   w_in_0,
    output                      w_out_0,

    
    input   [32+4+1-1:0]        r_in_1,
    output  [128+1+1-1:0]       r_out_1,

    input [32+128+4+16+1-1:0]   w_in_1,
    output                      w_out_1,
    
    input   [32+4+1-1:0]        r_in_2,
    output  [128+1+1-1:0]       r_out_2,

    input [32+128+4+16+1-1:0]   w_in_2,
    output                      w_out_2,

    output reg  [32+4+1-1:0]        r_in_3,
    input  [128+1+1-1:0]       r_out_3,

    output reg [32+128+4+16+1-1:0]   w_in_3,
    input                       w_out_3

);

    wire [31:0]     r0_addr;
    wire [3:0]      r0_type;
    wire            r0_req;

    wire            r0_rdy;
    wire [127:0]    re0_data;
    wire            re0_valid;

    assign {r0_addr,r0_type,r0_req} = r_in_0;

    wire [31:0]     r3_addr;
    wire [3:0]      r3_type;
    wire            r3_req;

    wire            r3_rdy;
    wire [127:0]    re3_data;
    wire            re3_valid;

    assign {re3_data,r3_rdy,re3_valid} = r_out_3;


    reg [1:0]   r_fsm;
    reg [1:0]   r_fsm_pri;
    reg [1:0]   r_fsm_next;

    always@(*)begin
       case(r_fsm) 
        2'b00:      r_fsm_next = r_fsm_pri;
        default:    r_fsm_next = is_ret?2'b00:r_fsm;
       endcase
    end

    always@(*)begin
        if(r_in_0[0])begin
            r_fsm_pri = 2'b1;
        end
        else begin
            if(r_in_1[0])begin
                r_fsm_pri = 2'b10;
            end
            else begin
                if(r_in_2[0])begin
                    r_fsm_pri = 2'b11;
                end
                else begin
                    r_fsm_pri = 2'b00;
                end
            end
        end
    end
    always@(posedge clk)begin
        if(!rst_n)begin
            r_fsm <= 2'b00;
        end
        else begin
            r_fsm <= r_fsm_next;
        end
    end

    wire is_ret;
    assign is_ret = re3_valid;


    wire [1:0]  r_sel;
    assign r_sel = (r_fsm==2'b00)?r_fsm_pri:r_fsm;
    always@(*)begin
        case(r_sel)
            2'b01:  r_in_3 = r_in_0;
            2'b10:  r_in_3 = r_in_1;
            2'b11:  r_in_3 = r_in_2;
            default:r_in_3 = 'b0;
        endcase
    end

    assign r_out_0 = {re3_data,r3_rdy&&(r_sel==2'b01),re3_valid&&(r_sel==2'b01)};
    assign r_out_1 = {re3_data,r3_rdy&&(r_sel==2'b10),re3_valid&&(r_sel==2'b10)};
    assign r_out_2 = {re3_data,r3_rdy&&(r_sel==2'b11),re3_valid&&(r_sel==2'b11)};


    /////////////////////////////////   
    // w channel
    /////////////////////////////////


    reg [1:0]   w_fsm;
    reg [1:0]   w_fsm_next;
    reg [1:0]   w_pri;


    always@(*)begin
        if(w_in_0[0])begin
            w_pri = 2'b01;
        end
        else begin
            if(w_in_1[0])begin
                w_pri = 2'b10;
            end
            else begin
                if(w_in_2[0])begin
                    w_pri = 2'b11;
                end
                else begin
                    w_pri = 2'b00;
                end
            end
        end

    end

    always@(posedge clk)begin
        if(!rst_n)begin
            w_fsm <= 2'b00;
        end
        else begin
            w_fsm <= w_fsm_next;
        end
    end

    always@(*)begin
        case(w_fsm)
            2'b00: w_fsm_next = w_out_3?2'b00:w_pri;
            default:w_fsm_next = w_out_3?2'b00:w_fsm;
        endcase
    end


    wire [1:0]  w_sel;
    assign w_sel = (w_fsm==2'b00)?w_pri:w_fsm;
    always@(*)begin
        case(w_sel)
            2'b01: w_in_3 = w_in_0;
            2'b10: w_in_3 = w_in_1;
            2'b11: w_in_3 = w_in_2;
            default: w_in_3 = 'b0;
        endcase
    end

    assign w_out_0 = w_out_3&&(w_sel==2'b01);
    assign w_out_1 = w_out_3&&(w_sel==2'b10);
    assign w_out_2 = w_out_3&&(w_sel==2'b11);



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

module ysyx_22050518_add (
 input [63:0]    in1, 
 input [63:0]    in2,
 input            c_in,
 output           c_out,
 output [63:0]    out 
);
 wire [63:0]    a;
 wire [63:0]    b;
 wire [63:0]    g;
 wire [63:0]    p;
  wire [63:0]    s;


assign c_out = c_64;
assign c_0 = c_in;
assign a = in1;
assign b = in2;
wire c_0; 
wire c_1; 
wire c_2; 
wire c_3; 
wire c_4; 
wire c_5; 
wire c_6; 
wire c_7; 
wire c_8; 
wire c_9; 
wire c_10; 
wire c_11; 
wire c_12; 
wire c_13; 
wire c_14; 
wire c_15; 
wire c_16; 
wire c_17; 
wire c_18; 
wire c_19; 
wire c_20; 
wire c_21; 
wire c_22; 
wire c_23; 
wire c_24; 
wire c_25; 
wire c_26; 
wire c_27; 
wire c_28; 
wire c_29; 
wire c_30; 
wire c_31; 
wire c_32; 
wire c_33; 
wire c_34; 
wire c_35; 
wire c_36; 
wire c_37; 
wire c_38; 
wire c_39; 
wire c_40; 
wire c_41; 
wire c_42; 
wire c_43; 
wire c_44; 
wire c_45; 
wire c_46; 
wire c_47; 
wire c_48; 
wire c_49; 
wire c_50; 
wire c_51; 
wire c_52; 
wire c_53; 
wire c_54; 
wire c_55; 
wire c_56; 
wire c_57; 
wire c_58; 
wire c_59; 
wire c_60; 
wire c_61; 
wire c_62; 
wire c_63; 
wire c_64;
ysyx_22050518_full_adder_1bit full_adder_0(.a(a[0]),.b(b[0]),.c_in(c_0),.c_out(),.s(s[0]));
ysyx_22050518_full_adder_1bit full_adder_1(.a(a[1]),.b(b[1]),.c_in(c_1),.c_out(),.s(s[1]));
ysyx_22050518_full_adder_1bit full_adder_2(.a(a[2]),.b(b[2]),.c_in(c_2),.c_out(),.s(s[2]));
ysyx_22050518_full_adder_1bit full_adder_3(.a(a[3]),.b(b[3]),.c_in(c_3),.c_out(),.s(s[3]));
ysyx_22050518_full_adder_1bit full_adder_4(.a(a[4]),.b(b[4]),.c_in(c_4),.c_out(),.s(s[4]));
ysyx_22050518_full_adder_1bit full_adder_5(.a(a[5]),.b(b[5]),.c_in(c_5),.c_out(),.s(s[5]));
ysyx_22050518_full_adder_1bit full_adder_6(.a(a[6]),.b(b[6]),.c_in(c_6),.c_out(),.s(s[6]));
ysyx_22050518_full_adder_1bit full_adder_7(.a(a[7]),.b(b[7]),.c_in(c_7),.c_out(),.s(s[7]));
ysyx_22050518_full_adder_1bit full_adder_8(.a(a[8]),.b(b[8]),.c_in(c_8),.c_out(),.s(s[8]));
ysyx_22050518_full_adder_1bit full_adder_9(.a(a[9]),.b(b[9]),.c_in(c_9),.c_out(),.s(s[9]));
ysyx_22050518_full_adder_1bit full_adder_10(.a(a[10]),.b(b[10]),.c_in(c_10),.c_out(),.s(s[10]));
ysyx_22050518_full_adder_1bit full_adder_11(.a(a[11]),.b(b[11]),.c_in(c_11),.c_out(),.s(s[11]));
ysyx_22050518_full_adder_1bit full_adder_12(.a(a[12]),.b(b[12]),.c_in(c_12),.c_out(),.s(s[12]));
ysyx_22050518_full_adder_1bit full_adder_13(.a(a[13]),.b(b[13]),.c_in(c_13),.c_out(),.s(s[13]));
ysyx_22050518_full_adder_1bit full_adder_14(.a(a[14]),.b(b[14]),.c_in(c_14),.c_out(),.s(s[14]));
ysyx_22050518_full_adder_1bit full_adder_15(.a(a[15]),.b(b[15]),.c_in(c_15),.c_out(),.s(s[15]));
ysyx_22050518_full_adder_1bit full_adder_16(.a(a[16]),.b(b[16]),.c_in(c_16),.c_out(),.s(s[16]));
ysyx_22050518_full_adder_1bit full_adder_17(.a(a[17]),.b(b[17]),.c_in(c_17),.c_out(),.s(s[17]));
ysyx_22050518_full_adder_1bit full_adder_18(.a(a[18]),.b(b[18]),.c_in(c_18),.c_out(),.s(s[18]));
ysyx_22050518_full_adder_1bit full_adder_19(.a(a[19]),.b(b[19]),.c_in(c_19),.c_out(),.s(s[19]));
ysyx_22050518_full_adder_1bit full_adder_20(.a(a[20]),.b(b[20]),.c_in(c_20),.c_out(),.s(s[20]));
ysyx_22050518_full_adder_1bit full_adder_21(.a(a[21]),.b(b[21]),.c_in(c_21),.c_out(),.s(s[21]));
ysyx_22050518_full_adder_1bit full_adder_22(.a(a[22]),.b(b[22]),.c_in(c_22),.c_out(),.s(s[22]));
ysyx_22050518_full_adder_1bit full_adder_23(.a(a[23]),.b(b[23]),.c_in(c_23),.c_out(),.s(s[23]));
ysyx_22050518_full_adder_1bit full_adder_24(.a(a[24]),.b(b[24]),.c_in(c_24),.c_out(),.s(s[24]));
ysyx_22050518_full_adder_1bit full_adder_25(.a(a[25]),.b(b[25]),.c_in(c_25),.c_out(),.s(s[25]));
ysyx_22050518_full_adder_1bit full_adder_26(.a(a[26]),.b(b[26]),.c_in(c_26),.c_out(),.s(s[26]));
ysyx_22050518_full_adder_1bit full_adder_27(.a(a[27]),.b(b[27]),.c_in(c_27),.c_out(),.s(s[27]));
ysyx_22050518_full_adder_1bit full_adder_28(.a(a[28]),.b(b[28]),.c_in(c_28),.c_out(),.s(s[28]));
ysyx_22050518_full_adder_1bit full_adder_29(.a(a[29]),.b(b[29]),.c_in(c_29),.c_out(),.s(s[29]));
ysyx_22050518_full_adder_1bit full_adder_30(.a(a[30]),.b(b[30]),.c_in(c_30),.c_out(),.s(s[30]));
ysyx_22050518_full_adder_1bit full_adder_31(.a(a[31]),.b(b[31]),.c_in(c_31),.c_out(),.s(s[31]));
ysyx_22050518_full_adder_1bit full_adder_32(.a(a[32]),.b(b[32]),.c_in(c_32),.c_out(),.s(s[32]));
ysyx_22050518_full_adder_1bit full_adder_33(.a(a[33]),.b(b[33]),.c_in(c_33),.c_out(),.s(s[33]));
ysyx_22050518_full_adder_1bit full_adder_34(.a(a[34]),.b(b[34]),.c_in(c_34),.c_out(),.s(s[34]));
ysyx_22050518_full_adder_1bit full_adder_35(.a(a[35]),.b(b[35]),.c_in(c_35),.c_out(),.s(s[35]));
ysyx_22050518_full_adder_1bit full_adder_36(.a(a[36]),.b(b[36]),.c_in(c_36),.c_out(),.s(s[36]));
ysyx_22050518_full_adder_1bit full_adder_37(.a(a[37]),.b(b[37]),.c_in(c_37),.c_out(),.s(s[37]));
ysyx_22050518_full_adder_1bit full_adder_38(.a(a[38]),.b(b[38]),.c_in(c_38),.c_out(),.s(s[38]));
ysyx_22050518_full_adder_1bit full_adder_39(.a(a[39]),.b(b[39]),.c_in(c_39),.c_out(),.s(s[39]));
ysyx_22050518_full_adder_1bit full_adder_40(.a(a[40]),.b(b[40]),.c_in(c_40),.c_out(),.s(s[40]));
ysyx_22050518_full_adder_1bit full_adder_41(.a(a[41]),.b(b[41]),.c_in(c_41),.c_out(),.s(s[41]));
ysyx_22050518_full_adder_1bit full_adder_42(.a(a[42]),.b(b[42]),.c_in(c_42),.c_out(),.s(s[42]));
ysyx_22050518_full_adder_1bit full_adder_43(.a(a[43]),.b(b[43]),.c_in(c_43),.c_out(),.s(s[43]));
ysyx_22050518_full_adder_1bit full_adder_44(.a(a[44]),.b(b[44]),.c_in(c_44),.c_out(),.s(s[44]));
ysyx_22050518_full_adder_1bit full_adder_45(.a(a[45]),.b(b[45]),.c_in(c_45),.c_out(),.s(s[45]));
ysyx_22050518_full_adder_1bit full_adder_46(.a(a[46]),.b(b[46]),.c_in(c_46),.c_out(),.s(s[46]));
ysyx_22050518_full_adder_1bit full_adder_47(.a(a[47]),.b(b[47]),.c_in(c_47),.c_out(),.s(s[47]));
ysyx_22050518_full_adder_1bit full_adder_48(.a(a[48]),.b(b[48]),.c_in(c_48),.c_out(),.s(s[48]));
ysyx_22050518_full_adder_1bit full_adder_49(.a(a[49]),.b(b[49]),.c_in(c_49),.c_out(),.s(s[49]));
ysyx_22050518_full_adder_1bit full_adder_50(.a(a[50]),.b(b[50]),.c_in(c_50),.c_out(),.s(s[50]));
ysyx_22050518_full_adder_1bit full_adder_51(.a(a[51]),.b(b[51]),.c_in(c_51),.c_out(),.s(s[51]));
ysyx_22050518_full_adder_1bit full_adder_52(.a(a[52]),.b(b[52]),.c_in(c_52),.c_out(),.s(s[52]));
ysyx_22050518_full_adder_1bit full_adder_53(.a(a[53]),.b(b[53]),.c_in(c_53),.c_out(),.s(s[53]));
ysyx_22050518_full_adder_1bit full_adder_54(.a(a[54]),.b(b[54]),.c_in(c_54),.c_out(),.s(s[54]));
ysyx_22050518_full_adder_1bit full_adder_55(.a(a[55]),.b(b[55]),.c_in(c_55),.c_out(),.s(s[55]));
ysyx_22050518_full_adder_1bit full_adder_56(.a(a[56]),.b(b[56]),.c_in(c_56),.c_out(),.s(s[56]));
ysyx_22050518_full_adder_1bit full_adder_57(.a(a[57]),.b(b[57]),.c_in(c_57),.c_out(),.s(s[57]));
ysyx_22050518_full_adder_1bit full_adder_58(.a(a[58]),.b(b[58]),.c_in(c_58),.c_out(),.s(s[58]));
ysyx_22050518_full_adder_1bit full_adder_59(.a(a[59]),.b(b[59]),.c_in(c_59),.c_out(),.s(s[59]));
ysyx_22050518_full_adder_1bit full_adder_60(.a(a[60]),.b(b[60]),.c_in(c_60),.c_out(),.s(s[60]));
ysyx_22050518_full_adder_1bit full_adder_61(.a(a[61]),.b(b[61]),.c_in(c_61),.c_out(),.s(s[61]));
ysyx_22050518_full_adder_1bit full_adder_62(.a(a[62]),.b(b[62]),.c_in(c_62),.c_out(),.s(s[62]));
ysyx_22050518_full_adder_1bit full_adder_63(.a(a[63]),.b(b[63]),.c_in(c_63),.c_out(),.s(s[63]));
assign g[0]    = a[0]&b[0];
assign p[0]    = a[0]|b[0];
assign c_1    = g[0]|p[0]&c_0;
assign g[1]    = a[1]&b[1];
assign p[1]    = a[1]|b[1];
assign c_2    = g[1]|p[1]&c_1;
assign g[2]    = a[2]&b[2];
assign p[2]    = a[2]|b[2];
assign c_3    = g[2]|p[2]&c_2;
assign g[3]    = a[3]&b[3];
assign p[3]    = a[3]|b[3];
assign c_4    = g[3]|p[3]&c_3;
assign g[4]    = a[4]&b[4];
assign p[4]    = a[4]|b[4];
assign c_5    = g[4]|p[4]&c_4;
assign g[5]    = a[5]&b[5];
assign p[5]    = a[5]|b[5];
assign c_6    = g[5]|p[5]&c_5;
assign g[6]    = a[6]&b[6];
assign p[6]    = a[6]|b[6];
assign c_7    = g[6]|p[6]&c_6;
assign g[7]    = a[7]&b[7];
assign p[7]    = a[7]|b[7];
assign c_8    = g[7]|p[7]&c_7;
assign g[8]    = a[8]&b[8];
assign p[8]    = a[8]|b[8];
assign c_9    = g[8]|p[8]&c_8;
assign g[9]    = a[9]&b[9];
assign p[9]    = a[9]|b[9];
assign c_10    = g[9]|p[9]&c_9;
assign g[10]    = a[10]&b[10];
assign p[10]    = a[10]|b[10];
assign c_11    = g[10]|p[10]&c_10;
assign g[11]    = a[11]&b[11];
assign p[11]    = a[11]|b[11];
assign c_12    = g[11]|p[11]&c_11;
assign g[12]    = a[12]&b[12];
assign p[12]    = a[12]|b[12];
assign c_13    = g[12]|p[12]&c_12;
assign g[13]    = a[13]&b[13];
assign p[13]    = a[13]|b[13];
assign c_14    = g[13]|p[13]&c_13;
assign g[14]    = a[14]&b[14];
assign p[14]    = a[14]|b[14];
assign c_15    = g[14]|p[14]&c_14;
assign g[15]    = a[15]&b[15];
assign p[15]    = a[15]|b[15];
assign c_16    = g[15]|p[15]&c_15;
assign g[16]    = a[16]&b[16];
assign p[16]    = a[16]|b[16];
assign c_17    = g[16]|p[16]&c_16;
assign g[17]    = a[17]&b[17];
assign p[17]    = a[17]|b[17];
assign c_18    = g[17]|p[17]&c_17;
assign g[18]    = a[18]&b[18];
assign p[18]    = a[18]|b[18];
assign c_19    = g[18]|p[18]&c_18;
assign g[19]    = a[19]&b[19];
assign p[19]    = a[19]|b[19];
assign c_20    = g[19]|p[19]&c_19;
assign g[20]    = a[20]&b[20];
assign p[20]    = a[20]|b[20];
assign c_21    = g[20]|p[20]&c_20;
assign g[21]    = a[21]&b[21];
assign p[21]    = a[21]|b[21];
assign c_22    = g[21]|p[21]&c_21;
assign g[22]    = a[22]&b[22];
assign p[22]    = a[22]|b[22];
assign c_23    = g[22]|p[22]&c_22;
assign g[23]    = a[23]&b[23];
assign p[23]    = a[23]|b[23];
assign c_24    = g[23]|p[23]&c_23;
assign g[24]    = a[24]&b[24];
assign p[24]    = a[24]|b[24];
assign c_25    = g[24]|p[24]&c_24;
assign g[25]    = a[25]&b[25];
assign p[25]    = a[25]|b[25];
assign c_26    = g[25]|p[25]&c_25;
assign g[26]    = a[26]&b[26];
assign p[26]    = a[26]|b[26];
assign c_27    = g[26]|p[26]&c_26;
assign g[27]    = a[27]&b[27];
assign p[27]    = a[27]|b[27];
assign c_28    = g[27]|p[27]&c_27;
assign g[28]    = a[28]&b[28];
assign p[28]    = a[28]|b[28];
assign c_29    = g[28]|p[28]&c_28;
assign g[29]    = a[29]&b[29];
assign p[29]    = a[29]|b[29];
assign c_30    = g[29]|p[29]&c_29;
assign g[30]    = a[30]&b[30];
assign p[30]    = a[30]|b[30];
assign c_31    = g[30]|p[30]&c_30;
assign g[31]    = a[31]&b[31];
assign p[31]    = a[31]|b[31];
assign c_32    = g[31]|p[31]&c_31;
assign g[32]    = a[32]&b[32];
assign p[32]    = a[32]|b[32];
assign c_33    = g[32]|p[32]&c_32;
assign g[33]    = a[33]&b[33];
assign p[33]    = a[33]|b[33];
assign c_34    = g[33]|p[33]&c_33;
assign g[34]    = a[34]&b[34];
assign p[34]    = a[34]|b[34];
assign c_35    = g[34]|p[34]&c_34;
assign g[35]    = a[35]&b[35];
assign p[35]    = a[35]|b[35];
assign c_36    = g[35]|p[35]&c_35;
assign g[36]    = a[36]&b[36];
assign p[36]    = a[36]|b[36];
assign c_37    = g[36]|p[36]&c_36;
assign g[37]    = a[37]&b[37];
assign p[37]    = a[37]|b[37];
assign c_38    = g[37]|p[37]&c_37;
assign g[38]    = a[38]&b[38];
assign p[38]    = a[38]|b[38];
assign c_39    = g[38]|p[38]&c_38;
assign g[39]    = a[39]&b[39];
assign p[39]    = a[39]|b[39];
assign c_40    = g[39]|p[39]&c_39;
assign g[40]    = a[40]&b[40];
assign p[40]    = a[40]|b[40];
assign c_41    = g[40]|p[40]&c_40;
assign g[41]    = a[41]&b[41];
assign p[41]    = a[41]|b[41];
assign c_42    = g[41]|p[41]&c_41;
assign g[42]    = a[42]&b[42];
assign p[42]    = a[42]|b[42];
assign c_43    = g[42]|p[42]&c_42;
assign g[43]    = a[43]&b[43];
assign p[43]    = a[43]|b[43];
assign c_44    = g[43]|p[43]&c_43;
assign g[44]    = a[44]&b[44];
assign p[44]    = a[44]|b[44];
assign c_45    = g[44]|p[44]&c_44;
assign g[45]    = a[45]&b[45];
assign p[45]    = a[45]|b[45];
assign c_46    = g[45]|p[45]&c_45;
assign g[46]    = a[46]&b[46];
assign p[46]    = a[46]|b[46];
assign c_47    = g[46]|p[46]&c_46;
assign g[47]    = a[47]&b[47];
assign p[47]    = a[47]|b[47];
assign c_48    = g[47]|p[47]&c_47;
assign g[48]    = a[48]&b[48];
assign p[48]    = a[48]|b[48];
assign c_49    = g[48]|p[48]&c_48;
assign g[49]    = a[49]&b[49];
assign p[49]    = a[49]|b[49];
assign c_50    = g[49]|p[49]&c_49;
assign g[50]    = a[50]&b[50];
assign p[50]    = a[50]|b[50];
assign c_51    = g[50]|p[50]&c_50;
assign g[51]    = a[51]&b[51];
assign p[51]    = a[51]|b[51];
assign c_52    = g[51]|p[51]&c_51;
assign g[52]    = a[52]&b[52];
assign p[52]    = a[52]|b[52];
assign c_53    = g[52]|p[52]&c_52;
assign g[53]    = a[53]&b[53];
assign p[53]    = a[53]|b[53];
assign c_54    = g[53]|p[53]&c_53;
assign g[54]    = a[54]&b[54];
assign p[54]    = a[54]|b[54];
assign c_55    = g[54]|p[54]&c_54;
assign g[55]    = a[55]&b[55];
assign p[55]    = a[55]|b[55];
assign c_56    = g[55]|p[55]&c_55;
assign g[56]    = a[56]&b[56];
assign p[56]    = a[56]|b[56];
assign c_57    = g[56]|p[56]&c_56;
assign g[57]    = a[57]&b[57];
assign p[57]    = a[57]|b[57];
assign c_58    = g[57]|p[57]&c_57;
assign g[58]    = a[58]&b[58];
assign p[58]    = a[58]|b[58];
assign c_59    = g[58]|p[58]&c_58;
assign g[59]    = a[59]&b[59];
assign p[59]    = a[59]|b[59];
assign c_60    = g[59]|p[59]&c_59;
assign g[60]    = a[60]&b[60];
assign p[60]    = a[60]|b[60];
assign c_61    = g[60]|p[60]&c_60;
assign g[61]    = a[61]&b[61];
assign p[61]    = a[61]|b[61];
assign c_62    = g[61]|p[61]&c_61;
assign g[62]    = a[62]&b[62];
assign p[62]    = a[62]|b[62];
assign c_63    = g[62]|p[62]&c_62;
assign g[63]    = a[63]&b[63];
assign p[63]    = a[63]|b[63];
assign c_64    = g[63]|p[63]&c_63;
assign out = s;
endmodule 


module ysyx_22050518_full_adder_1bit(
    input a,
    input b,
    input c_in,
    output c_out,
    output s
    );
    assign s = ~a&~b&c_in|~a&b&~c_in|a&~b&~c_in|a&b&c_in;
    assign c_out = a & b|a&c_in|b&c_in;
    
    
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

    reg [15:0]  fsm;
    reg [15:0]  fsm_next;
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
    wire [127:0]    result_signed;
    assign result_signed = re_sign?(~result_reg+1'b1):result_reg;



   wire multiplicand_sign;
   wire multiplier_sign;
   assign {multiplicand_sign,multiplier_sign} = mul_signed;



    reg [127:0]  multiplicand_reg;
    reg [63:0]  multiplier_reg;
    reg [127:0] result_reg;


 

    wire [63:0] multiplicand_unsign;
    wire [63:0] multiplier_unsign;
    assign multiplicand_unsign =(multiplicand_sign&&multiplicand[63])?(64'b1+~multiplicand):multiplicand;
    assign multiplier_unsign = (multiplier_sign&&multiplier[63])?(64'b1+~multiplier):multiplier;

    always@(posedge clk)begin
        if(!rst_n)begin
            multiplicand_reg <= 'b0;
            multiplier_reg   <= 'b0;
        end
        else begin
            if(mul_valid&&(fsm=='d0))begin
                multiplicand_reg <= {{64{1'd0}},multiplicand_unsign};
                multiplier_reg   <= multiplier_unsign;
            end
            else if(fsm!='d0)begin
                multiplicand_reg <= {multiplicand_reg[126:0],1'b0};
                multiplier_reg   <= {1'b0,multiplier_reg[63:1]};
            end
        end
    end
    wire last;
    assign last = fsm == 'd32;
    always@(posedge clk)begin
        if(!rst_n)begin
            result_reg <= 'b0;
        end
        else begin
            if(fsm=='d0)
                result_reg <= 'b0;
            else
                result_reg <= multiplier_reg[0]?result_reg+multiplicand_reg:result_reg;
        end
    end


    reg re_sign;
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
    reg [6:0]   fsm_next;


    always@(posedge clk)begin
        if(!rst_n||flush)begin
            fsm <= 7'b0;
        end
        else begin  
            fsm <= fsm_next;
        end
    end

    always@(*)begin
        case(fsm)
            7'd0: fsm_next = (div_valid)?7'd1:7'd0;
            7'd1: fsm_next = 7'd2;
            7'd2: fsm_next = 7'd3;
            7'd3: fsm_next = 7'd4;
            7'd4: fsm_next = 7'd5;
            7'd5: fsm_next = 7'd6;
            7'd6: fsm_next = 7'd7;
            7'd7: fsm_next = 7'd8;
            7'd8: fsm_next = 7'd9;
            7'd9: fsm_next = 7'd10;
            7'd10: fsm_next = 7'd11;
            7'd11: fsm_next = 7'd12;
            7'd12: fsm_next = 7'd13;
            7'd13: fsm_next = 7'd14;
            7'd14: fsm_next = 7'd15;
            7'd15: fsm_next = 7'd16;
            7'd16: fsm_next = 7'd17;
            7'd17: fsm_next = 7'd18;
            7'd18: fsm_next = 7'd19;
            7'd19: fsm_next = 7'd20;
            7'd20: fsm_next = 7'd21;
            7'd21: fsm_next = 7'd22;
            7'd22: fsm_next = 7'd23;
            7'd23: fsm_next = 7'd24;
            7'd24: fsm_next = 7'd25;
            7'd25: fsm_next = 7'd26;
            7'd26: fsm_next = 7'd27;
            7'd27: fsm_next = 7'd28;
            7'd28: fsm_next = 7'd29;
            7'd29: fsm_next = 7'd30;
            7'd30: fsm_next = 7'd31;
            7'd31: fsm_next = 7'd32;
            7'd32: fsm_next = 7'd33;
            7'd33: fsm_next = 7'd34;
            7'd34: fsm_next = 7'd35;
            7'd35: fsm_next = 7'd36;
            7'd36: fsm_next = 7'd37;
            7'd37: fsm_next = 7'd38;
            7'd38: fsm_next = 7'd39;
            7'd39: fsm_next = 7'd40;
            7'd40: fsm_next = 7'd41;
            7'd41: fsm_next = 7'd42;
            7'd42: fsm_next = 7'd43;
            7'd43: fsm_next = 7'd44;
            7'd44: fsm_next = 7'd45;
            7'd45: fsm_next = 7'd46;
            7'd46: fsm_next = 7'd47;
            7'd47: fsm_next = 7'd48;
            7'd48: fsm_next = 7'd49;
            7'd49: fsm_next = 7'd50;
            7'd50: fsm_next = 7'd51;
            7'd51: fsm_next = 7'd52;
            7'd52: fsm_next = 7'd53;
            7'd53: fsm_next = 7'd54;
            7'd54: fsm_next = 7'd55;
            7'd55: fsm_next = 7'd56;
            7'd56: fsm_next = 7'd57;
            7'd57: fsm_next = 7'd58;
            7'd58: fsm_next = 7'd59;
            7'd59: fsm_next = 7'd60;
            7'd60: fsm_next = 7'd61;
            7'd61: fsm_next = 7'd62;
            7'd62: fsm_next = 7'd63;
            7'd63: fsm_next = 7'd64;
            7'd64: fsm_next = 7'd65;
            7'd65: fsm_next = 7'd00;
            default: fsm_next = 7'd0;
        endcase
    end 

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

    `ifdef full_div;
    
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
            ans <= 64'b0;
        end
        else begin
            case(fsm)
            7'd0:   ans <= 64'b0;
            7'd1: ans <= {!add_out[127],63'b0};
            7'd2: ans <= {ans[63],!add_out[127],62'b0};
            7'd3: ans <= {ans[63:62],!add_out[127],61'b0};
            7'd4: ans <= {ans[63:61],!add_out[127],60'b0};
            7'd5: ans <= {ans[63:60],!add_out[127],59'b0};
            7'd6: ans <= {ans[63:59],!add_out[127],58'b0};
            7'd7: ans <= {ans[63:58],!add_out[127],57'b0};
            7'd8: ans <= {ans[63:57],!add_out[127],56'b0};
            7'd9: ans <= {ans[63:56],!add_out[127],55'b0};
            7'd10: ans <= {ans[63:55],!add_out[127],54'b0};
            7'd11: ans <= {ans[63:54],!add_out[127],53'b0};
            7'd12: ans <= {ans[63:53],!add_out[127],52'b0};
            7'd13: ans <= {ans[63:52],!add_out[127],51'b0};
            7'd14: ans <= {ans[63:51],!add_out[127],50'b0};
            7'd15: ans <= {ans[63:50],!add_out[127],49'b0};
            7'd16: ans <= {ans[63:49],!add_out[127],48'b0};
            7'd17: ans <= {ans[63:48],!add_out[127],47'b0};
            7'd18: ans <= {ans[63:47],!add_out[127],46'b0};
            7'd19: ans <= {ans[63:46],!add_out[127],45'b0};
            7'd20: ans <= {ans[63:45],!add_out[127],44'b0};
            7'd21: ans <= {ans[63:44],!add_out[127],43'b0};
            7'd22: ans <= {ans[63:43],!add_out[127],42'b0};
            7'd23: ans <= {ans[63:42],!add_out[127],41'b0};
            7'd24: ans <= {ans[63:41],!add_out[127],40'b0};
            7'd25: ans <= {ans[63:40],!add_out[127],39'b0};
            7'd26: ans <= {ans[63:39],!add_out[127],38'b0};
            7'd27: ans <= {ans[63:38],!add_out[127],37'b0};
            7'd28: ans <= {ans[63:37],!add_out[127],36'b0};
            7'd29: ans <= {ans[63:36],!add_out[127],35'b0};
            7'd30: ans <= {ans[63:35],!add_out[127],34'b0};
            7'd31: ans <= {ans[63:34],!add_out[127],33'b0};
            7'd32: ans <= {ans[63:33],!add_out[127],32'b0};
            7'd33: ans <= {ans[63:32],!add_out[127],31'b0};
            7'd34: ans <= {ans[63:31],!add_out[127],30'b0};
            7'd35: ans <= {ans[63:30],!add_out[127],29'b0};
            7'd36: ans <= {ans[63:29],!add_out[127],28'b0};
            7'd37: ans <= {ans[63:28],!add_out[127],27'b0};
            7'd38: ans <= {ans[63:27],!add_out[127],26'b0};
            7'd39: ans <= {ans[63:26],!add_out[127],25'b0};
            7'd40: ans <= {ans[63:25],!add_out[127],24'b0};
            7'd41: ans <= {ans[63:24],!add_out[127],23'b0};
            7'd42: ans <= {ans[63:23],!add_out[127],22'b0};
            7'd43: ans <= {ans[63:22],!add_out[127],21'b0};
            7'd44: ans <= {ans[63:21],!add_out[127],20'b0};
            7'd45: ans <= {ans[63:20],!add_out[127],19'b0};
            7'd46: ans <= {ans[63:19],!add_out[127],18'b0};
            7'd47: ans <= {ans[63:18],!add_out[127],17'b0};
            7'd48: ans <= {ans[63:17],!add_out[127],16'b0};
            7'd49: ans <= {ans[63:16],!add_out[127],15'b0};
            7'd50: ans <= {ans[63:15],!add_out[127],14'b0};
            7'd51: ans <= {ans[63:14],!add_out[127],13'b0};
            7'd52: ans <= {ans[63:13],!add_out[127],12'b0};
            7'd53: ans <= {ans[63:12],!add_out[127],11'b0};
            7'd54: ans <= {ans[63:11],!add_out[127],10'b0};
            7'd55: ans <= {ans[63:10],!add_out[127],9'b0};
            7'd56: ans <= {ans[63:9],!add_out[127],8'b0};
            7'd57: ans <= {ans[63:8],!add_out[127],7'b0};
            7'd58: ans <= {ans[63:7],!add_out[127],6'b0};
            7'd59: ans <= {ans[63:6],!add_out[127],5'b0};
            7'd60: ans <= {ans[63:5],!add_out[127],4'b0};
            7'd61: ans <= {ans[63:4],!add_out[127],3'b0};
            7'd62: ans <= {ans[63:3],!add_out[127],2'b0};
            7'd63: ans <= {ans[63:2],!add_out[127],1'b0};
            7'd64: ans <= {ans[63:1],!add_out[127]};
            default: ans <= 64'b0;
            endcase
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
    output [63:0]   mie,
    


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