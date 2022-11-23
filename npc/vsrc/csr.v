module csr(
    input               clk,
    input               rst_n,

    output reg [63:0]   mepc,
    output reg [63:0]   mstatus,
    output reg [63:0]   mcause,
    output reg [63:0]   mtvec,

    input [63:0]    mepc_write,
    input [63:0]    mstatus_write,
    input [63:0]    mcause_write,
    input [63:0]    mtvec_write,

    input               mepc_w_e,
    input               mstatus_w_e,
    input               mcause_w_e,
    input               mtvec_w_e,

);

always@(posedge clk)begin
    if(!rst_n)begin
        mstatus     <= 64'ha00001800;
        mtvec       <= 64'b0;
        mepc        <= 64'b0;
        mcause      <= 64'b0;
    end
    else begin
        if(mstatus_w_e)begin
            mstatus <= mstatus_write;
        end        
        if(mtvec_w_e)begin
            mtvec <= mtvec_write;
        end        
        if(mepc_w_e)begin
            mepc <= mepc_write;
        end        
        if(mcause_w_e)begin
            mcause <= mcause_write;
        end

    end
end

endmodule


module csr_top(
    input           clk,
    input           rst_n,
    input           en,
    input           mret,
    input           ecall,
    input           csrr,

    input [4:0]     rd_a,
    input           rd_w,

    input [63:0]    rd_sd,

    input [64:0]    pc,
    input [63:0]    rs1_reg,
    input           rs1_sel,
    input [63:0]    x17,
    input [11:0]    csr_a,
    input [2:0]     func3,


    output [63:0]   mepc,
    output [63:0]   mstatus,
    output [63:0]   mcause,
    output [63:0]   mtvec,

    output reg [63:0]   rd_o,
    output reg          rd_w_o,
    output reg [4:0]    rd_a_o,

    output jup,
    output [63:0]       jup_addr

);
    csr csr_reg(
        .clk(clk)
        ,.rst_n(rst_n)
        ,.mepc(mepc)
        ,.mstatus(mstatus)
        ,.mcause(mcause)
        ,.mtvec(mtvec)

        ,.mepc_write(mepc_write)
        ,.mstatus_write(mstatus_write)
        ,.mcause_write(mcause_write)
        ,.mtvec_write(mtvec_write)

        ,.mepc_w_e(mepc_w_e)
        ,.mstatus_w_e(mstatus_w_e)
        ,.mcause_w_e(mcause_w_e)
        ,.mtvec_w_e(mtvec_w_e)
        
    );

    wire [63:0]rs1;

    mux2t1_64 rs1_sel_mux(
    .sel(rs1_sel)
    ,.in0(rs1_reg)
    ,.in1(rd_sd)
    ,.out(rs1)
);

    wire [63:0]    mepc_write;
    wire [63:0]    mstatus_write;
    wire [63:0]    mcause_write;
    wire [63:0]    mtvec_write;

    wire               mepc_w_e;
    wire               mstatus_w_e;
    wire               mcause_w_e;
    wire               mtvec_w_e;


    wire [63:0]         csrrw;
    wire [63:0]         csrrs;
    wire [63:0]         csrrc;

    reg [63:0]         csrr_;

    assign mcause_w_e   = en&&(ecall||((csr_a==12'h342)&&csrr));
    assign mstatus_w_e  = en&&((csr_a==12'h300)&&csrr);
    assign mepc_w_e     = en&&(ecall||((csr_a==12'h341)&&csrr));
    assign mtvec_w_e    = en&&((csr_a==12'h305)&&csrr);

    assign mepc_write = ecall?pc:((csr_a==12'h341)&&csrr)?csrr_:64'b0;
    assign mcause_write = ecall?rs1:((csr_a==12'h342)&&csrr)?csrr_:64'b0;
    assign mstatus_write     = (csr_a==12'h300)&&csrr?csrr_:64'b0;
    assign mtvec_write  = (csr_a==12'h305)&&csrr?csrr_:64'b0;

    reg [63:0] csrr_csr;
    
    assign csrrw = rs1;
    assign csrrs = (~rs1)&csrr_csr;
    assign csrrc = rs1|csrr_csr;


    always@(*)begin
        case(csr_a)
            12'h342:    csrr_csr = mcause;
            12'h300:    csrr_csr = mstatus;
            12'h341:    csrr_csr = mepc;
            12'h305:    csrr_csr = mtvec;
            default:    csrr_csr = 64'b0;
        endcase
    end

    always@(*)begin
        case (func3)
            3'b001: csrr_ = csrrw;
            3'b010: csrr_ = csrrs;
            3'b011: csrr_ = csrrc;
        endcase
    end 

    wire [63:0]     rd;
    assign rd = csrr_csr;


    always@(posedge clk)begin
        if(!rst_n)begin
            rd_w_o <= 1'b0;
        end
        else begin
            if(en)begin
                rd_o <= rd;
                rd_w_o <= rd_w;
                rd_a_o <= rd_a;
            end
            else begin
                rd_w_o <= 1'b0;

            end


        end
    end

    assign jup_addr = mepc;
    assign jup = mret;
endmodule