module ysyx_050518_load_ext(
    input [2:0]     func3,

    input [63:0]    mrd,

    output reg [63:0]   rd

    
);

wire [63:0]  lb;
wire [63:0]  lh;
wire [63:0]  lw;
wire [63:0]  lbu;
wire [63:0]  lhu;
wire [63:0]  lwu;
wire [63:0]  ld;


assign lb = {{56{mrd[7]}},mrd[7:0]};
assign lh = {{48{mrd[15]}},mrd[15:0]};
assign lw = {{32{mrd[31]}},mrd[31:0]};

assign lbu = {{56{1'b0}},mrd[7:0]};
assign lhu = {{48{1'b0}},mrd[15:0]};
assign lwu = {{32{1'b0}},mrd[31:0]};

assign ld  = mrd;
always@(*)begin
case (func3)
    3'b000: rd = lb; 
    3'b001: rd = lh; 
    3'b010: rd = lw; 
    3'b011: rd = ld; 

    3'b100: rd = lbu; 
    3'b101: rd = lhu; 
    3'b110: rd = lwu; 

    3'b111: rd = 64'b0;
    default : rd = 64'b0; 


endcase
end
endmodule
 module ysyx_050518_lsu_stage(
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

    output reg              rd_w_o,
    output  [63:0]          rd_o,
    output reg [4:0]        rd_addr_o,


    output                  skip_ref,

    output [63:0]           dcache_addr,
    output                  dcache_read,
    output                  dcache_write,
    output [1:0]            dcache_write_len,
    output [63:0]           dcache_write_data,
    input  [63:0]           dcache_read_data,
    input                   dcache_valid,
    input                   dcache_ready,
    output reg              valid_o,  

    output                  rw_valid_o,
    output                  rw_write_o,
    input                   rw_valid_i,
    input [31:0]            data_read_i,
    input                   data_ready_to_read,        //unsed
    output[31:0]            rw_w_data_i,
    output[63:0]            rw_addr_i,
    output[ 3:0]            rw_size_i,

    output                  stall,

    output                  pipe3_allowin

);

assign pipe3_allowin = (dcache_valid&&lsu_en&&(dcache_addr[31:28]!=4'ha))||(!lsu_en)||((dcache_addr[31:28]==4'ha)&&lsu_en&&rw_valid_i);

wire [63:0]                 rs1;
wire [63:0]                 rs2;




ysyx_050518_mux2t1_64 rs1_sel_mux(
    .sel(rs1_sel)
    ,.in0(rs1_reg)
    ,.in1(rd_second_stage)
    ,.out(rs1)

);
ysyx_050518_mux2t1_64 rs2_sel_mux(
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
assign      dcache_read         = lsu_en&&(!lsu_w)&&(dcache_addr[31:28]!=4'ha);
assign      dcache_write        = lsu_en&&lsu_w&&(dcache_addr[31:28]!=4'ha); 
assign      dcache_write_len    = func3[1:0];


wire                    rd_w_wire;
assign rd_w_wire =      rd_w&&(dcache_valid||rw_valid_i);


assign rw_valid_o = lsu_en&&(dcache_addr[31:28]==4'ha);
assign rw_write_o = lsu_en&&(dcache_addr[31:28]==4'ha)&&lsu_w;
assign rw_w_data_i= rs2[31:0];
assign rw_addr_i = dcache_addr;
assign rw_size_i ={1'b0,func3[1:0]};


    always@(posedge clk)begin
        if(!rst_n)begin
            rd_w_o      <= 1'b0;
        end
        else if(1'b1)begin
            rd_addr_o   <= rdr;
            rd_w_o      <= rd_w_wire&&lsu_en;
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

reg rd_sel1;
always@(posedge clk)begin
    if(!rst_n)begin
        rd_sel1 <= 1'b1;
    end
    else begin
        rd_sel1 <= (dcache_addr[31:28]==4'ha);
    end

end

wire [63:0] load_ext_in = rd_sel1?{32'b0,data_read_i}:dcache_read_data;

ysyx_050518_load_ext load_ext1(
     .mrd(load_ext_in)
    ,.rd(rd_o)
    ,.func3(func3_r)
);


assign skip_ref = lsu_en&&(dcache_addr[31:28]==4'ha);

endmodule

//  defination of rtype
//  the number of read bytes




