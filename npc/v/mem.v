//import "DPI-C" function longint mem_read (input longint a,input int len);
//import "DPI-C" function longint mem_read_inst (input longint a,input int len);
//import "DPI-C" function int mem_write (input longint a,input int len,input longint data);
import "DPI-C" function int mem_skip (input longint a);
module ysyx_22050518_mem(
    input clk,
    input rst_n,
    input en,
    input [63:0]    r_addr,
    output reg [63:0]    r_data,

    input [63:0]    inst_addr,
    output[31:0]    inst,

    input [3:0]     w_width,
    input [63:0]    w_addr,
    input [63:0]    w_data,
    output   reg       skip_ref,
    input           w_en
);

    //reg [7:0] mem [65535:0];

    //assign inst = mem_read_inst(inst_addr,4);

    //assign r_data = (en&&(!w_en))?mem_read(r_addr,8):64'b0;


    

    assign skip_ref = en&(mem_skip(w_en?w_addr:r_addr)==1);

/*
    always@(posedge clk)begin
        if(w_en)begin
            mem_write(w_addr,w_width,w_data);
        end
    end

*/


endmodule 