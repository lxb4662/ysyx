module lsu_stage(
    input                   clk ,
    input                   rst_n,

    input [63:0]            inst_addr,
    output[31:0]            inst,

    input                   lsu_en,
    input                   lsu_w,
    input [2:0]             func3,

    input [63:0]            imm,
    input [63:0]            pc,
    input [63:0]            rs1_reg,
    input [63:0]            rs2_reg,
    input [63:0]            rd_second_stage,
    input                   rs1_sel,
    input                   rs2_sel,

    input                   rd_w,
    input [4:0]             rdr,

    output wire [63:0]      rd_wire,
    output                  rd_w_o,
    output [63:0]           rd_o,
    output reg [4:0]        rd_addr_o,

    input [63:0]            rd_i,

    output [7:0]            uart_out,
    output                  uart_en,
    input                   uart_get,

    output                  skip_ref,

    output [63:0]           dcache_addr,
    output                  dcache_read,
    output                  dcache_write,
    output [1:0]            dcache_write_len,
    output [63:0]           dcache_write_data,
    input  [63:0]           dcache_read_data,
    output                  dcache_valid,
    input                   dcache_ready,
    output reg              valid_o,  

    output                  stall,

    output                  pipe3_allowin

);

assign pipe3_allowin = (dcache_valid&&lsu_en)||(!lsu_en);

wire [63:0]                 rs1;
wire [63:0]                 rs2;

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

wire [63:0]                  mr;
wire [63:0]                  wd;
wire [63:0]                  w_m;

wire [3:0]                  w_width;

assign      w_width = (func3 == 3'b000)?4'b0001:((func3==3'b001)?4'b0010:((func3==3'b010)?4'b0100:((func3==3'b011)?4'b1000:4'b0000)));
assign      w_m  = (func3 == 3'b000)?64'hff:((func3==3'b1)?64'hffffffff:((func3==3'b010)?64'hffffffffffffffff:((func3==3'b011)?{64{1'b1}}:64'b0)));
assign      wd = rs2;
assign      mr = rs1 + imm;

assign      dcache_write_data   = rs2;
assign      dcache_addr         = rs1 + imm;
assign      dcache_read         = lsu_en&&(!lsu_w);
assign      dcache_write        = lsu_en&&lsu_w; 
assign      dcache_write_len    = func3[1:0];


reg                 rd_w_r;
assign rd_w_o = rd_w_r&&valid_r;
reg                 valid_r;

always@(posedge clk)begin
    if(!rst_n)begin
        valid_r <= 1'b0;
    end
    else begin
        valid_r <= dcache_valid;
    end
end

    always@(posedge clk)begin
        if(!rst_n)begin
            rd_w_r      <= 1'b0;
        end
        else if(pipe3_allowin)begin
            rd_w_r      <= rd_w&&lsu_en;
            rd_addr_o   <= rdr;
        end
    end


wire [63:0 ]    mem_read_data;


reg [2:0]       func3_r;
always@(posedge clk)begin
    if(!rst_n)begin
        func3_r <= 3'b0;
    end
    else begin
        func3_r <= func3;
    end
end

load_ext load_ext1(
     .mrd(dcache_read_data)
    ,.rd(rd_o)
    ,.func3(func3_r)
);


mem mem1(
     .clk(clk)
    ,.rst_n(rst_n)

    ,.en(lsu_en)
    ,.inst(inst)
    ,.inst_addr(inst_addr)

    ,.r_addr(mr)
    ,.r_data(mem_read_data)

    ,.w_width(w_width)
    ,.w_addr(mr)
    ,.w_data(wd)
    ,.w_en(lsu_w&&lsu_en)

    ,.skip_ref(skip_ref)
);

uart u1(
    .clk(clk)
    ,.rst_n(rst_n)

    ,.data(wd)
    ,.addr(mr)
    ,.w_en(lsu_w&&lsu_en)

    ,.out(uart_out)
    ,.out_en(uart_en)
    ,.get(uart_get)


);

endmodule