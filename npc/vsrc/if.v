
`include "vsrc/define.v"

`ifndef SOC
    import "DPI-C" function void mtrace(input int pc ,input int addr,input int a0,input int a1,input int len);
`endif


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
`ifdef SOC
    always@(posedge clk)begin
        if(!rst_n)begin
            pc <= 32'h30000000;
        end
        else begin
            if(dc_ready_in&&addr_ok||jup)begin
                pc <= next_pc;
            end
        end
    end
`else 
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
`endif

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
    

    output reg [289:0]      dc_ex,
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
        ,.imm_csrr(rs1)
        ,.sel({csr_imm_inst,lui||auipc,jal,bxx,store,alu_iw||alu_i||load||jalr})
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

    wire fence_i;

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
    assign fence_i = (inst==32'h0000100f);


    /////////////// CSR ///////////////////
    wire inst_csrw;
    wire inst_csrs;
    wire inst_csrc;

    assign inst_csrw = valid_i&&csrr&&(func3[1:0]==2'b01);
    assign inst_csrs = valid_i&&csrr&&(func3[1:0]==2'b10);
    assign inst_csrc = valid_i&&csrr&&(func3[1:0]==2'b11);


    wire    csr_write;
    wire    csr_read;

    wire    csr_imm_inst;

    assign csr_write = (inst_csrs||inst_csrc)&&(rs1!=5'd0)||inst_csrw;
    assign csr_read  = inst_csrw&&(rd!=5'd0)||inst_csrs||inst_csrc;
    assign csr_imm_inst  = csrr&&func3[2];




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

    wire rd_write;
    assign rd_write = alu_i||alu_iw||alu_r||alu_w||load||lui||auipc||jal||jalr||(csrr&&csr_read);


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
            dc_ex <= 'd0;
        end
        else begin
            if(next_stage_ready)begin
                dc_ex <= {fence_i,csr_addr,csr_write,csrr,rs1,rs2,rs1_d,rs2_d,imm,pc,alu_in1_sel,alu_in2_sel,rd_sel,rd,func3,func7,lui,auipc,jal,jalr,bxx,load,store,alu_sel,sub,sra,alu_op,rd_write,ecall,mret,ebreak,ready_in&&valid_i&&(~jup)};
            end
        end
    end





    assign ready_in = next_stage_ready;


endmodule 











module shift_round(
    input [63:0]    in0,
    input [5:0]     in1,
    input           sra,
    input           sra_lin,
    output [63:0]   out_r,
    output [63:0]   out_l

);
    wire [63:0] t_0;
    wire [63:0] t_1;
    wire [63:0] t_2;
    wire [63:0] t_3;
    wire [63:0] t_4;
    wire [63:0] t_5;

    wire r_in;
    assign r_in = sra?sra_lin:1'b0;

    assign t_0 = in1[0]?{r_in,in0[63:1]}:in0;
    assign t_1 = in1[1]?{{2{r_in}},t_0[63:2]}:t_0;
    assign t_2 = in1[2]?{{4{r_in}},t_1[63:4]}:t_1;
    assign t_3 = in1[3]?{{8{r_in}},t_2[63:8]}:t_2;
    assign t_4 = in1[4]?{{16{r_in}},t_3[63:16]}:t_3;
    assign t_5 = in1[5]?{{21{r_in}},t_4[63:32]}:t_4;

    wire [63:0] tl_0;
    wire [63:0] tl_1;
    wire [63:0] tl_2;
    wire [63:0] tl_3;
    wire [63:0] tl_4;
    wire [63:0] tl_5;

    assign tl_0 =  in1[0]?{in0[62:0],1'b0}:in0;
    assign tl_1 =  in1[1]?{tl_0[61:0],2'b0}:tl_0;
    assign tl_2 =  in1[2]?{tl_1[59:0],4'b0}:tl_1;
    assign tl_3 =  in1[3]?{tl_2[55:0],8'b0}:tl_2;
    assign tl_4 =  in1[4]?{tl_3[47:0],16'b0}:tl_3;
    assign tl_5 =  in1[5]?{tl_4[31:0],32'b0}:tl_4;

    assign out_r = t_5;
    assign out_l = tl_5;

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
  input [4:0]         imm_csrr,
  input [ 5:0]        sel,
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
    6'b000001:   out = ext_imm_iljalr;
    6'b000010:   out = ext_imm_s;
    6'b000100:   out = ext_imm_b;
    6'b001000:   out = ext_imm_jal;
    6'b010000:   out = ext_imm_u;
    6'b100000:   out = {59'd0,imm_csrr};
    default:out = 64'b0;

    endcase     
  end

endmodule

module sram_bus_interconnect(
    input clk,
    input rst_n,

    input   [`MEM_BUS_ADDR_WIDTH+`MEM_BUS_TYPE_WIDTH+1-1:0]                             r_in_0,
    output  [`MEM_BUS_DATA_WIDTH+1+1-1:0]                                               r_out_0,

    input   [`MEM_BUS_ADDR_WIDTH+`MEM_BUS_DATA_WIDTH+`MEM_BUS_TYPE_WIDTH+16+1-1:0]      w_in_0,
    output                                                                              w_out_0,

    
    input   [`MEM_BUS_ADDR_WIDTH+`MEM_BUS_TYPE_WIDTH+1-1:0]                             r_in_1,
    output  [`MEM_BUS_DATA_WIDTH+1+1-1:0]                                               r_out_1,

    input   [`MEM_BUS_ADDR_WIDTH+`MEM_BUS_DATA_WIDTH+`MEM_BUS_TYPE_WIDTH+16+1-1:0]      w_in_1,
    output                                                                              w_out_1,
    
    input   [`MEM_BUS_ADDR_WIDTH+`MEM_BUS_TYPE_WIDTH+1-1:0]                             r_in_2,
    output  [`MEM_BUS_DATA_WIDTH+1+1-1:0]                                               r_out_2,

    input   [`MEM_BUS_ADDR_WIDTH+`MEM_BUS_DATA_WIDTH+`MEM_BUS_TYPE_WIDTH+16+1-1:0]      w_in_2,
    output                                                                              w_out_2,

    output reg  [`MEM_BUS_ADDR_WIDTH+`MEM_BUS_TYPE_WIDTH+1-1:0]                         r_in_3,
    input  [`MEM_BUS_DATA_WIDTH+1+1-1:0]       r_out_3,

    output reg [`MEM_BUS_ADDR_WIDTH+`MEM_BUS_DATA_WIDTH+`MEM_BUS_TYPE_WIDTH+16+1-1:0]   w_in_3,
    input                       w_out_3

);

    wire [`MEM_BUS_ADDR_WIDTH-1:0]      r0_addr;
    wire [`MEM_BUS_TYPE_WIDTH-1:0]      r0_type;
    wire                                r0_req;

    wire                                r0_rdy;
    wire [`MEM_BUS_DATA_WIDTH-1:0]      re0_data;
    wire            re0_valid;

    assign {r0_addr,r0_type,r0_req} = r_in_0;

    wire [`MEM_BUS_ADDR_WIDTH-1:0]      r3_addr;
    wire [`MEM_BUS_TYPE_WIDTH-1:0]      r3_type;
    wire            r3_req;

    wire            r3_rdy;
    wire [`MEM_BUS_DATA_WIDTH-1:0]      re3_data;
    wire            re3_valid;

    assign {re3_data,r3_rdy,re3_valid} = r_out_3;


    reg [1:0]   r_fsm;
    reg [1:0]   r_fsm_pri;
    reg [1:0]   r_fsm_next;

    always@(*)begin
       case(r_fsm) 
        2'b00:      r_fsm_next = r_fsm_pri;
        default:    r_fsm_next = is_ret?(r_in_0[0]&r_in_1[0]&r_in_2[0]?r_fsm_pri:2'b00):r_fsm;
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

    assign r_out_0 = {re3_data,r3_rdy&&(r_sel==2'b01),re3_valid&&(r_fsm==2'b01)};
    assign r_out_1 = {re3_data,r3_rdy&&(r_sel==2'b10),re3_valid&&(r_fsm==2'b10)};
    assign r_out_2 = {re3_data,r3_rdy&&(r_sel==2'b11),re3_valid&&(r_fsm==2'b11)};


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











module mul_unused(   
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



