`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/01/13 15:42:14
// Design Name: 
// Module Name: mem2axi
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

//  defination of rtype
//  the number of read bytes


`define MEM_BUS_DATA_WIDTH 256
`define MEM_BUS_ADDR_WIDTH 32
`define MEM_BUS_TYPE_WIDTH 6
`define MEM_BUS_STRB_WIDTH 16

`define AXI_DATA_WIDTH 64
`define AXI_ADDR_WIDTH 32
`define AXI_BRUS_WIDTH 2
`define AXI_SIZE_WIDTH 3        // 32 bit only normally is the 3 bits
`define AXI_ID_WIDTH 4
`define AXI_LEN_WIDTH 4
`define AXI_RESP_WIDTH 2

module mem2axi(
    clk,
    rst_n,
    
    r_req,
    r_type,
    r_addr,
    r_rdy,
    re_data,
    re_valid,

    iw_req,
    iw_type,
    iw_addr,
    iw_strb,
    iw_data,
    iw_rdy,


    ar_addr,
    ar_valid,
    ar_id,
    ar_len,
    ar_size,
    ar_brust,
    ar_ready,
    
    r_id,
    r_data,
    r_resp,
    r_last,
    r_valid,
    r_ready,

    aw_id,
    aw_addr,
    aw_len,
    aw_size,
    aw_brust,
    aw_valid,
    aw_ready,

    w_data,
    w_id,
    w_strb,
    w_last,
    w_valid,
    w_ready


    );

    input clk;
    input rst_n;

    input r_req;
    input [`MEM_BUS_TYPE_WIDTH-1:0] r_type;
    input [`MEM_BUS_ADDR_WIDTH-1:0] r_addr;
    output r_rdy;

    output[`MEM_BUS_DATA_WIDTH-1:0] re_data;
    output re_valid;

    input iw_req;
    input [`MEM_BUS_TYPE_WIDTH-1:0] iw_type;
    input [`MEM_BUS_ADDR_WIDTH-1:0] iw_addr;
    input [`MEM_BUS_STRB_WIDTH-1:0] iw_strb;
    input [`MEM_BUS_DATA_WIDTH-1:0] iw_data;
    output iw_rdy;


    
    output [`AXI_ADDR_WIDTH-1:0] ar_addr;
    output                       ar_valid;
    output [`AXI_ID_WIDTH-1:0  ] ar_id;
    output [`AXI_BRUS_WIDTH-1:0] ar_brust;
    output [`AXI_SIZE_WIDTH-1:0] ar_size;
    output [`AXI_LEN_WIDTH-1:0 ] ar_len;
    input                        ar_ready;

    input [`AXI_ID_WIDTH-1:0]    r_id;
    input [`AXI_DATA_WIDTH-1:0]  r_data;
    input [`AXI_RESP_WIDTH-1:0]  r_resp;
    input                        r_last;
    input                        r_valid;
    output                       r_ready;

    output [`AXI_ID_WIDTH-1:0]   aw_id;
    output [`AXI_ADDR_WIDTH-1:0] aw_addr;
    output [`AXI_LEN_WIDTH-1:0]  aw_len;
    output [`AXI_SIZE_WIDTH-1:0] aw_size;
    output [`AXI_BRUS_WIDTH-1:0] aw_brust;
    output                       aw_valid;
    input                        aw_ready;

    output [`AXI_DATA_WIDTH-1:0] w_data;
    output [`AXI_ID_WIDTH-1:0]   w_id;
    output [`AXI_DATA_WIDTH-1:0] w_strb;
    output                       w_last;
    output                       w_valid;
    input                        w_ready;

    reg [5:0] read_fsm;
    reg [5:0] read_fsm_next;

    reg [5:0] read_fsm_r;       //used for reseiving the data of r channel 
    reg [5:0] read_fsm_r_next;

    /*      defination of the fsm 
            0 idel
            1 send addr
            2 WAIT for getting all the data we want
    */


    always@(posedge clk)begin
        if(!rst_n)begin
            read_fsm <= 6'b0;
            read_fsm_r <= 6'b0;
        end
        else begin
            read_fsm <= read_fsm_next;
            read_fsm_r <= read_fsm_r_next;
        end
    end

    always@(*)begin
        case(read_fsm)
            6'h0: read_fsm_next = r_req?6'h1:6'h0;
            6'h1: read_fsm_next = ar_ready?(ar_unfinished?6'h1:6'h2):6'h1;
            6'h2: read_fsm_next = r_finished?6'h0:6'h2;
            default: read_fsm_next = 6'h0;
            //default: read_fsm_next <= support_brust?((fsm==6'h3)?6'h0:6'h1+fsm):((fsm==6'h4)?6'h0:6'h1+fsm);
        endcase
     end
    always@(*)begin
        case(read_fsm_r)
            6'h0: read_fsm_r_next = (read_fsm==6'h1)?6'h1:6'h0;
            6'h1: read_fsm_r_next = (r_finished&&r_valid)?6'b0:6'b1;
            default: read_fsm_r_next = 6'b0;
        endcase
    end


    // read offset only used in the unbrust mode, to get the final addr
    wire [`AXI_ADDR_WIDTH-1:0] read_offset;
    assign read_offset = support_64bits?{21'b0,ar_cnt,3'b000}:{22'b0,ar_cnt,2'b00};



    wire [7:0]  ar_cnt_i;
    assign ar_cnt_i = support_64bits?ar_cnt_i_64:ar_cnt_i_32;

    // to generate the number of tansations for the 32 bits data width

    reg [7:0]   ar_cnt_i_32;
    always@(*)begin
        case(r_type_wire)
            `MEM_BUS_TYPE_WIDTH'h00:   ar_cnt_i_32 = 8'd0;
            `MEM_BUS_TYPE_WIDTH'h01:   ar_cnt_i_32 = 8'd0;
            `MEM_BUS_TYPE_WIDTH'h03:   ar_cnt_i_32 = 8'd0;
            `MEM_BUS_TYPE_WIDTH'h07:   ar_cnt_i_32 = 8'd1;
            `MEM_BUS_TYPE_WIDTH'h0f:   ar_cnt_i_32 = 8'd3;          // 16 bytes
            `MEM_BUS_TYPE_WIDTH'h1f:   ar_cnt_i_32 = 8'd7;          // 32 bytes 256bits
            `MEM_BUS_TYPE_WIDTH'h3f:   ar_cnt_i_32 = 8'd15;         // 64 bytes 512bits
            default: ar_cnt_i_32 = 8'b0;
        endcase 
    end

    // to generate the number of tansations for the 64 bits data width

    reg [7:0]   ar_cnt_i_64;
    always@(*)begin
        case(r_type_wire)
            `MEM_BUS_TYPE_WIDTH'h00:   ar_cnt_i_64 = 8'd0;
            `MEM_BUS_TYPE_WIDTH'h01:   ar_cnt_i_64 = 8'd0;
            `MEM_BUS_TYPE_WIDTH'h03:   ar_cnt_i_64 = 8'd0;
            `MEM_BUS_TYPE_WIDTH'h07:   ar_cnt_i_64 = 8'd0;
            `MEM_BUS_TYPE_WIDTH'h0f:   ar_cnt_i_64 = 8'd1;          // 16 bytes 128bits
            `MEM_BUS_TYPE_WIDTH'h1f:   ar_cnt_i_64 = 8'd3;          // 32 bytes 256bits
            `MEM_BUS_TYPE_WIDTH'h3f:   ar_cnt_i_64 = 8'd7;         // 64 bytes 512bits
            default: ar_cnt_i_64 = 8'b0;
        endcase 
    end

    

    wire   ar_unfinished;
    assign ar_unfinished = support_brust?1'b0:(ar_cnt!=ar_cnt_i);

    // the counter for addr send channel

    reg [7:0]   ar_cnt;
    always@(posedge clk)begin
        if(!rst_n)begin
            ar_cnt <= 8'd0;
        end
        else begin
            if(read_fsm==6'd0)begin
                ar_cnt <= 8'd0;
            end
            else 
            if(read_fsm == 6'd1) begin
                if(ar_ready)begin
                    ar_cnt <= ar_cnt + 8'd1;
                end
                else begin
                    ar_cnt <= ar_cnt;
                end
            end
            else begin
                ar_cnt <= 8'd0;
            end
        end
    end

    // r_cnt is the counter for the data read channel, to count the number of data got

    reg [7:0]   r_cnt;
    always@(posedge clk)begin
        if(!rst_n)begin
            r_cnt <= 8'd0;
        end
        else begin
            if(read_fsm_r==6'd0)begin
                r_cnt <= 8'd0;
            end
            else if(read_fsm_r == 6'd1) begin
                if(r_valid)begin
                    r_cnt <= r_cnt + 8'd1;
                end
                else begin
                    r_cnt <= r_cnt;
                end
            end
            else begin
                    r_cnt <= 8'd0;
            end
        end
    end

    wire r_finished = r_cnt == ar_cnt_i;


    // store the mem issue in the reg 

    reg [`MEM_BUS_ADDR_WIDTH+`MEM_BUS_TYPE_WIDTH-1:0] read_reg;
    always@(posedge clk )begin
        if(!rst_n)begin
            read_reg <= {`MEM_BUS_ADDR_WIDTH'd0,`MEM_BUS_TYPE_WIDTH'd0};
        end
        else begin
            if(r_rdy && r_req)begin
                read_reg <= {r_type,r_addr};
            end
        end
    end

    assign r_rdy = (read_fsm == 6'd0);


    wire [`MEM_BUS_TYPE_WIDTH-1:0] r_type_wire;
    wire [`MEM_BUS_ADDR_WIDTH-1:0] r_addr_wire;

    assign r_type_wire = read_reg[`MEM_BUS_ADDR_WIDTH+`MEM_BUS_TYPE_WIDTH-1:`MEM_BUS_ADDR_WIDTH];
    assign r_addr_wire = read_reg[`MEM_BUS_ADDR_WIDTH-1:0];








    assign ar_addr = r_addr_wire + read_offset;

    assign ar_valid = read_fsm==6'b1;
    assign ar_brust = `AXI_BRUS_WIDTH'b01;
    assign ar_len   = support_brust?ar_cnt_i:`AXI_LEN_WIDTH'b0;                    
    assign ar_size  = support_64bits?`AXI_SIZE_WIDTH'b011:`AXI_SIZE_WIDTH'b010;
    
    assign r_ready = (read_fsm_r == 6'b1)?1'b1:1'b0;
    /* THOSE CODE IS UNUSED 
    reg [`MEM_BUS_DATA_WIDTH-1:0] read_data_ram;
    always@(posedge clk)begin
        if(!rst_n)begin
            read_data_ram <= `MEM_BUS_DATA_WIDTH'd0;
        end
        else begin
            if(read_fsm_r==6'h1)begin
                if(r_valid)begin
                    read_data_ram <= {read_data_ram[`MEM_BUS_DATA_WIDTH-33:0],r_data[31:0]};    
                end
            end
        end
    end
    */ 
    

    // this module used to sort the distributed short data become a long data
    data_read dr1(
        .clk(clk)
        ,.rst_n(rst_n)
        ,.d_type(4'b0)
        ,.cnt(r_cnt)
        ,.data_in0(r_data)
        ,.data_out(re_data)
    );

    assign re_valid = r_valid&r_finished;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    reg [`MEM_BUS_ADDR_WIDTH + `MEM_BUS_DATA_WIDTH + `MEM_BUS_STRB_WIDTH + `MEM_BUS_TYPE_WIDTH -1 : 0 ] w_ram;
    wire [`MEM_BUS_ADDR_WIDTH-1:0] iw_addr_wire;
    wire [`MEM_BUS_DATA_WIDTH-1:0] iw_data_wire;
    wire [`MEM_BUS_STRB_WIDTH-1:0] iw_strb_wire;
    wire [`MEM_BUS_TYPE_WIDTH-1:0] iw_type_wire;
    
    assign iw_rdy = (aw_fsm==2'd0);
    reg [1:0]   aw_fsm;
    reg [1:0]   aw_fsm_next;


    assign {iw_addr_wire,iw_data_wire,iw_strb_wire,iw_type_wire} = w_ram;

    always@(posedge clk)begin
        if(!rst_n)begin
            w_ram <= {`MEM_BUS_ADDR_WIDTH'd0,`MEM_BUS_DATA_WIDTH'd0,`MEM_BUS_STRB_WIDTH'd0,`MEM_BUS_TYPE_WIDTH'd0};
        end
        else begin
            if(iw_req&&(aw_fsm==2'b0))begin
                w_ram <= {iw_addr,iw_data,iw_strb,iw_type};
            end
        end
    end

    always@(posedge clk)begin
        if(!rst_n)begin
            aw_fsm <= 2'b0;
        end
        else begin
            aw_fsm <= aw_fsm_next;
        end
    end

    always@(*)begin
        case(aw_fsm)
            2'h0: aw_fsm_next = iw_req?2'h1:2'h0;
            2'h1: aw_fsm_next = wa_fininshed?(wd_finfished?2'h0:2'h2):2'h1;
            2'h2: aw_fsm_next = wd_finfished?2'h0:2'h2;
            default: aw_fsm_next = 2'h0;
        endcase
    end
    
    wire wa_fininshed;
    assign wa_fininshed = (aw_cnt==aw_cnt_i)&&(aw_ready);

    reg [7:0]   aw_cnt;
    always@(posedge clk)begin
        if(!rst_n)begin
            aw_cnt <=  8'd0;
        end
        else begin
            if((aw_fsm==2'b1)||(aw_fsm==2'b10))begin
                if(aw_ready&(!wa_fininshed))begin
                    aw_cnt <= aw_cnt+8'b1;
                end
                else begin
                    aw_cnt <= aw_cnt;
                end
            end
            else begin
                aw_cnt <= 8'b0;
            end
        end
    end

    reg [7:0]   aw_cnt_i;

    always@(*)begin
        case(iw_type_wire)
            6'h0:   aw_cnt_i = 8'd0;
            6'h1:   aw_cnt_i = 8'd0;
            6'h2:   aw_cnt_i = 8'd0;
            6'h3:   aw_cnt_i = 8'd0;
            6'h7:   aw_cnt_i = 8'd1;
            6'hf:   aw_cnt_i = 8'd3;
            6'h1f:   aw_cnt_i = 8'd7;
            default: aw_cnt_i = 8'd0;
        endcase
    end


    reg [1:0] w_fsm;
    reg [1:0] w_fsm_next;
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
            2'b00:  w_fsm_next = iw_req?2'b01:2'b00;
            2'b01:  w_fsm_next = (wd_finfished)?2'b00:2'b01;
            default :w_fsm_next = 2'b00;
        endcase
    end

    wire wd_finfished;
    assign wd_finfished = (w_cnt==aw_cnt_i)&&w_ready;
    reg [7:0]   w_cnt;
    always@(posedge clk)begin
        if(!rst_n)begin
            w_cnt <= 8'd0;
        end
        else begin
            if(w_fsm == 2'b00)begin
                w_cnt <= 8'd0;
            end
            else begin
                if(((w_fsm==2'b01))&(w_ready)&!wd_finfished)begin
                    w_cnt <= w_cnt + 8'd1;
                end
            end
        end
    end

    assign w_valid = (w_fsm==2'b01)||(w_fsm==2'b10);
    assign w_strb = ~64'd0;
    data_write dw1(
        .d_type(4'd0)
        ,.data_in(iw_data_wire)
        ,.cnt(w_cnt)
        ,.data_out(w_data)
    );

    assign aw_valid = (aw_fsm==2'h1)||(aw_fsm==2'b10);
    assign aw_addr = iw_addr_wire + aw_cnt * 32'd4;
    assign aw_id   = `AXI_ID_WIDTH'b0;
    assign aw_len  = `AXI_LEN_WIDTH'd0;
    assign aw_size = `AXI_SIZE_WIDTH'b11;
    assign aw_brust= `AXI_BRUS_WIDTH'b01;


    reg [`AXI_SIZE_WIDTH-1:0] size_reg;
    always@(*)begin
        case(`AXI_SIZE_WIDTH)
            32: size_reg = `AXI_SIZE_WIDTH'b10;
            64: size_reg = `AXI_SIZE_WIDTH'b11;
            128:size_reg = `AXI_SIZE_WIDTH'b100;
        endcase
    end
    


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    wire support_64bits;
    assign support_64bits = 1'b0;

    wire support_brust;
    // support burts means : support brust and 64 data width
    `ifdef SOC_SDRAM_BRUST
        assign support_brust = r_addr_wire[`MEM_BUS_ADDR_WIDTH-1:`MEM_BUS_ADDR_WIDTH-4] == 4'hf;
    `else
        assign support_brust = 1'b0; //(r_addr_wire[`MEM_BUS_ADDR_WIDTH-1:MEM_BUS_TYPE_WIDTH-4] == 4'ha);
    `endif



endmodule


module data_read(
    input           clk,
    input           rst_n,
    input [3:0]     d_type,
    input [7:0]     cnt,
    input [`AXI_DATA_WIDTH-1:0]    data_in0,
    output reg [`MEM_BUS_DATA_WIDTH-1:0]   data_out
);

    reg [`MEM_BUS_DATA_WIDTH-1:0] data;


    reg [`MEM_BUS_DATA_WIDTH-1:0] data0;
    reg [`MEM_BUS_DATA_WIDTH-1:0] data1;


    always@(posedge clk)begin
        if(!rst_n)begin
            data <= 'd0;
        end
        else begin
            case (d_type)
                4'h0:   data <= data0;
                4'h1:   data <= data1;
                default:data  <= 'd0;
            endcase
        end
    end

    always@(*)begin
        case(cnt)
            8'h00: data0  = {data[255:32],data_in0[31:0]};
            8'h01: data0  = {data[255:64],data_in0[31:0],data[31:0]};
            8'h02: data0  = {data[255:96],data_in0[31:0],data[63:0]};
            8'h03: data0  = {data[255:128],data_in0[31:0],data[95:0]};
            8'h04: data0  = {data[255:160],data_in0[31:0],data[127:0]};
            8'h05: data0  = {data[255:192],data_in0[31:0],data[159:0]};
            8'h06: data0  = {data[255:224],data_in0[31:0],data[191:0]};
            8'h07: data0  = {data_in0[31:0],data[223:0]};
            default:data0 = 'd0;
        endcase
            //data0 = {data_in0[31:0],data[255:32]};
    end

    always@(*)begin
        case(cnt)
            8'h00: data1  = {data[255:64],data_in0[63:0]};
            8'h01: data1  = {data_in0[63:0],data[63:0]};
            8'h02: data1  = {data_in0[63:0],data[63:0]};
            8'h03: data1  = {data_in0[63:0],data[63:0]};
            default: data1 = 'd0;
        endcase
    end

    always@(*)begin
        case(d_type)
            4'd0: data_out = data0;
            4'd1: data_out = data1;
            default : data_out = 'd0;
        endcase
    end

endmodule 


module data_write(
    input [3:0]     d_type,
    input [`MEM_BUS_DATA_WIDTH-1:0]   data_in,
    input [7:0]     cnt,
    output reg [63:0]   data_out
);
//  type 0 is 32 bits 
//  type 1 is 64 bits

reg [31:0] data_out_type0;
reg [63:0] data_out_type1;  

always@(*)begin
    case(cnt)
        8'd0:   data_out_type0 = data_in[31:0];
        8'd1:   data_out_type0 = data_in[63:32];
        8'd2:   data_out_type0 = data_in[95:64];
        8'd3:   data_out_type0 = data_in[127:96];
        8'd4:   data_out_type0 = data_in[159:128];
        8'd5:   data_out_type0 = data_in[191:160];
        8'd6:   data_out_type0 = data_in[223:192];
        8'd7:   data_out_type0 = data_in[255:224];
        default:data_out_type0 = 32'd0;
    endcase
end 

always@(*)begin
    case(cnt)
        8'd0:   data_out_type1 = data_in[63:0];
        8'd1:   data_out_type1 = data_in[127:64];
        8'd2:   data_out_type1 = data_in[191:128];
        8'd3:   data_out_type1 = data_in[255:192];
        default:data_out_type1 = 64'd0;
    endcase
end 

always@(*)begin
    case(d_type)
        4'd0:   data_out = {data_out_type0,data_out_type0};
        4'd1:   data_out = data_out_type1;
        default:data_out = 64'd0;
    endcase
end


endmodule 


module axi_type_ctl(
    input [31:0]    addr,
    input [3:0]     length,
    output reg [3:0]     axi_type 
);

    wire addr_in_SDRAM;
    

    always@(*)begin
        case(length)
            4'd0:  axi_type = addr_in_SDRAM?4'b1:4'b0;
            4'd1:  axi_type = addr_in_SDRAM?4'b1:4'b0;
            4'd3:  axi_type = addr_in_SDRAM?4'b1:4'b0;
            4'd7:  axi_type = addr_in_SDRAM?4'b1:4'b0;
            4'd15: axi_type = addr_in_SDRAM?4'h2:4'b0;
        default:   axi_type = 4'd0;
        endcase
    end
endmodule

