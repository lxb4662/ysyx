
//  defination of rtype
//  the number of read bytes


`include "vsrc/define.v"
/*
module mem2axi(
    clk,
    rst_n,
    
    ir_req,
    ir_type,
    ir_addr,
    ir_rdy,
    ire_data,
    ire_valid,

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
    w_ready,

    b_ready


    );

    input clk;
    input rst_n;

    input ir_req;
    input [`MEM_BUS_TYPE_WIDTH-1:0] ir_type;
    input [`MEM_BUS_ADDR_WIDTH-1:0] ir_addr;
    output ir_rdy;

    output[`MEM_BUS_DATA_WIDTH-1:0] ire_data;
    output ire_valid;

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
    output [`AXI_STRB_WIDTH-1:0] w_strb;
    output                       w_last;
    output                       w_valid;
    input                        w_ready;

    output                       b_ready;
    reg [5:0] read_fsm;
    reg [5:0] read_fsm_next;

    reg [5:0] read_fsm_r;       //used for reseiving the data of r channel 
    reg [5:0] read_fsm_r_next;

    //      defination of the fsm 
    //      0 idel
    //      1 send addr
    //      2 WAIT for getting all the data we want
    //


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
            6'h0: read_fsm_next = ir_req?6'h1:6'h0;
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
            if(ir_rdy && ir_req)begin
                read_reg <= {ir_type,ir_addr};
            end
        end
    end

    assign ir_rdy = (read_fsm == 6'd0);


    wire [`MEM_BUS_TYPE_WIDTH-1:0] r_type_wire;
    wire [`MEM_BUS_ADDR_WIDTH-1:0] r_addr_wire;

    assign r_type_wire = read_reg[`MEM_BUS_ADDR_WIDTH+`MEM_BUS_TYPE_WIDTH-1:`MEM_BUS_ADDR_WIDTH];
    assign r_addr_wire = read_reg[`MEM_BUS_ADDR_WIDTH-1:0];








    assign ar_addr = r_addr_wire + read_offset;

    assign ar_valid = read_fsm==6'b1;
    assign ar_brust = `AXI_BRUS_WIDTH'b01;
    assign ar_len   = support_brust?ar_cnt_i[`AXI_LEN_WIDTH-1:0]:`AXI_LEN_WIDTH'b0;                    
    assign ar_size  = support_64bits?`AXI_SIZE_WIDTH'b011:`AXI_SIZE_WIDTH'b010;
    
    assign r_ready = (read_fsm_r == 6'b1)?1'b1:1'b0;

    

    // this module used to sort the distributed short data become a long data
    data_read dr1(
        .clk(clk)
        ,.rst_n(rst_n)
        ,.last_addr(r_addr_wire[2:0])
        ,.d_type(4'b0)
        ,.cnt(r_cnt)
        ,.data_in0(r_data)
        ,.data_out(ire_data)
    );

    assign ire_valid = r_valid&r_finished;

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
            6'h7:   aw_cnt_i = w_support_64bits?8'd0:8'd1;
            6'hf:   aw_cnt_i = w_support_64bits?8'd1:8'd3;
            6'h1f:   aw_cnt_i = w_support_64bits?8'd3:8'd7;
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


    reg [7:0]      w_strb_bef_shift;
    wire [7:0]     strb_bus_length_mask = w_support_64bits?~8'd0:8'b00001111;

    always@(*)begin
        case(iw_type_wire)
            6'h0:w_strb_bef_shift   =8'b00000001&strb_bus_length_mask;
            6'h1:w_strb_bef_shift   =8'b00000011&strb_bus_length_mask;
            6'h3:w_strb_bef_shift   =8'b00001111&strb_bus_length_mask;
            default:w_strb_bef_shift=8'b11111111&strb_bus_length_mask;
        endcase
    end 
    reg [7:0] strb_shifted;
    always@(*)begin
        case(iw_addr_wire[3:0])
            4'h0:strb_shifted   =w_strb_bef_shift;
            4'h1:strb_shifted   =w_strb_bef_shift<<1;
            4'h2:strb_shifted   =w_strb_bef_shift<<2;
            4'h3:strb_shifted   =w_strb_bef_shift<<3;
            4'h4:strb_shifted   =w_strb_bef_shift<<4;
            4'h5:strb_shifted   =w_strb_bef_shift<<5;
            4'h6:strb_shifted   =w_strb_bef_shift<<6;
            4'h7:strb_shifted   =w_strb_bef_shift<<7;
            default:strb_shifted   =w_strb_bef_shift;
        endcase
    end 
    


    assign w_valid = (w_fsm==2'b01)||(w_fsm==2'b10);;
    assign w_strb = strb_shifted;
    assign w_last = 'b1;
    data_write dw1(
        .d_type(w_support_64bits)
        ,.last_addr(iw_addr_wire[2:0])
        ,.data_in(iw_data_wire)
        ,.cnt(w_cnt)
        ,.data_out(w_data)
    );

    reg [`AXI_SIZE_WIDTH-1:0]   size_wire;
    always@(*)begin
        case(iw_type_wire)
            6'd0: size_wire = `AXI_SIZE_WIDTH'b00;
            6'd1: size_wire = `AXI_SIZE_WIDTH'b01;
            6'd3: size_wire = `AXI_SIZE_WIDTH'b10;
            6'd7: size_wire = w_support_64bits?`AXI_SIZE_WIDTH'b11:`AXI_SIZE_WIDTH'b10;
            default:  size_wire = w_support_64bits?`AXI_SIZE_WIDTH'b11:`AXI_SIZE_WIDTH'b10;
        endcase
    end


    assign aw_valid = (aw_fsm==2'h1);
    assign aw_addr = iw_addr_wire + aw_cnt * (w_support_64bits?32'd8:32'd4);
    assign aw_id   = `AXI_ID_WIDTH'b0;
    assign aw_len  = `AXI_LEN_WIDTH'd0;
    assign aw_size = size_wire;
    assign aw_brust= `AXI_BRUS_WIDTH'b01;


 
    


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    wire support_64bits;
    assign support_64bits = 1'b0;


    wire w_support_64bits;

    `ifdef SOC_SDRAM_64
		assign w_support_64bits =  (iw_addr_wire[31:28]==4'h8)||(iw_addr_wire[31:26]==6'h3f);
    `else
    	assign w_support_64bits = 1'b0;
    `endif
    
    
    wire support_brust;
    // support burts means : support brust and 64 data width
    `ifdef SOC_SDRAM_BRUST
        assign support_brust = r_addr_wire[`MEM_BUS_ADDR_WIDTH-1:`MEM_BUS_ADDR_WIDTH-4] == 4'hf;
    `else
        assign support_brust = 1'b0; //(r_addr_wire[`MEM_BUS_ADDR_WIDTH-1:MEM_BUS_TYPE_WIDTH-4] == 4'ha);
    `endif

    assign b_ready = 1'b1;

endmodule


module data_read(
    input           clk,
    input           rst_n,
    input [3:0]     d_type,
    input [2:0]	    last_addr,
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
            8'h01: data1  = {data[255:128],data_in0[63:0],data[63:0]};
            8'h02: data1  = {data[255:192],data_in0[63:0],data[127:0]};
            8'h03: data1  = {data_in0[63:0],data[191:0]};
            default: data1 = 'd0;
        endcase
    end

    reg [`MEM_BUS_DATA_WIDTH-1:0] data3;
    always@(*)begin
        case(d_type)
            4'd0: data3 = data0;
            4'd1: data3 = data1;
            default : data3 = 'd0;
        endcase
    end
    
    always@(*)begin
        case(last_addr[1:0])
            3'h0: data_out  = data3;
            3'h1: data_out  = data3>>8;
            3'h2: data_out  = data3>>16;
            3'h3: data_out  = data3>>24;
           
            default: data_out = 'd0;
        endcase
    end
    
endmodule 


module data_write(
    input [3:0]                         d_type,
    input [2:0]                         last_addr,
    input [`MEM_BUS_DATA_WIDTH-1:0]     data_in,
    input [7:0]                         cnt,
    output reg [63:0]                   data_out
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


reg [63:0] data_out_full; 

always@(*)begin
    case(d_type)
        4'd0:   data_out_full = {data_out_type0,data_out_type0};
        4'd1:   data_out_full = data_out_type1;
        default:data_out_full = 64'd0;
    endcase
end
    
always@(*)begin
    case(last_addr&{d_type[0],2'b11})
        3'b000:   data_out = data_out_full;
        3'b001:   data_out = data_out_full<<8;
        3'b010:   data_out = data_out_full<<16;
        3'b011:   data_out = data_out_full<<24;
        3'b100:   data_out = data_out_full<<32;
        3'b101:   data_out = data_out_full<<40;
        3'b110:   data_out = data_out_full<<48;
        3'b111:   data_out = data_out_full<<54;
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

module m_byte_shift(
    input [63:0]    i_byte_shift_in,
    input [2:0]     i_byte_shift_n,
    output [63:0]   i_byte_shift_out
);
    assign i_byte_shift_out = i_byte_shift_in << (i_byte_shift_n*8);

endmodule

module m_bit_shift(
    input [7:0]    i_byte_shift_in,
    input [2:0]    i_byte_shift_n,
    output [7:0]   i_byte_shift_out
);
    assign i_byte_shift_out = i_byte_shift_in << i_byte_shift_n;

endmodule

*/

`define SRAM_BUS_DATA_WIDTH 256
`define SRAM_BUS_ADDR_WIDTH 32
`define SRAM_BUS_TYPE_WIDTH 6
`define SRAM_BUS_STRB_WIDTH 16

`define AXI_DATA_WIDTH 64
`define AXI_ADDR_WIDTH 32
`define AXI_BRUS_WIDTH 2
`define AXI_SIZE_WIDTH 3
`define AXI_LENN_WIDTH 8
`define AXI_STRB_WIDTH 8
`define AXI_IDDD_WIDTH 4
`define AXI_RESP_WIDTH 2
module mem2axi(
    input                               clk,
    input                               rst_n,
    
    input                               ir_req,
    input  [`SRAM_BUS_TYPE_WIDTH-1:0]   ir_type,
    input  [`SRAM_BUS_ADDR_WIDTH-1:0]   ir_addr,
    output                              ir_rdy,
    output [`SRAM_BUS_DATA_WIDTH-1:0]   ire_data,
    output                              ire_valid,

    input                               iw_req,
    input  [`SRAM_BUS_TYPE_WIDTH-1:0]   iw_type,
    input  [`SRAM_BUS_ADDR_WIDTH-1:0]   iw_addr,
    input  [`SRAM_BUS_DATA_WIDTH-1:0]   iw_data,
    output                              iw_rdy,


    output [`AXI_DATA_WIDTH-1:0]        ar_addr,
    output                              ar_valid,
    output [`AXI_IDDD_WIDTH-1:0]        ar_id,
    output [`AXI_LENN_WIDTH-1:0]        ar_len,
    output [`AXI_SIZE_WIDTH-1:0]        ar_size,
    output [`AXI_BRUS_WIDTH-1:0]        ar_brust,
    input                               ar_ready,
    
    input  [`AXI_IDDD_WIDTH-1:0]        r_id,
    input  [`AXI_DATA_WIDTH-1:0]        r_data,
    input  [`AXI_RESP_WIDTH-1:0]        r_resp,
    input                               r_last,
    input                               r_valid,
    output                              r_ready,

    output [`AXI_IDDD_WIDTH-1:0]        aw_id,
    output [`AXI_ADDR_WIDTH-1:0]        aw_addr,
    output [`AXI_LENN_WIDTH-1:0]        aw_len,
    output [`AXI_SIZE_WIDTH-1:0]        aw_size,
    output [`AXI_BRUS_WIDTH-1:0]        aw_brust,
    output                              aw_valid,
    input                               aw_ready,

    output [`AXI_DATA_WIDTH-1:0]        w_data,
    output [`AXI_IDDD_WIDTH-1:0]        w_id,
    output [`AXI_STRB_WIDTH-1:0]        w_strb,
    output                              w_last,
    output                              w_valid,
    input                               w_ready,

    output                              b_ready
);
    m_mem2_axi_send_channel u_mem2_axi_send_channel(
        .clk                            (clk    ),
        .rst_n                          (rst_n  ),
        .sram_req                       (iw_req ),
        .sram_addr                      (iw_addr),
        .sram_data                      (iw_data),
        .sram_type                      (iw_type),
        .sram_rdy                       (iw_rdy),

        .aw_valid                       (aw_valid),
        .aw_addr                        (aw_addr),
        .aw_brust                       (aw_brust),
        .aw_size                        (aw_size),
        .aw_len                         (aw_len),
        .aw_id                          (aw_id),
        .aw_ready                       (aw_ready),

        .w_data                         (w_data),
        .w_valid                        (w_valid),
        .w_last                         (w_last),
        .w_strb                         (w_strb),
        .w_ready                        (w_ready),

        .b_ready                        (b_ready)

    );
    

    m_mem2_axi_read_channel u_mem2_axi_read_channel(
        .clk                            (clk    ),
        .rst_n                          (rst_n  ),

        .ir_req                         (ir_req),
        .ir_type                        (ir_type),
        .ir_addr                        (ir_addr),
        .ir_rdy                         (ir_rdy),
        .ire_data                       (ire_data),
        .ire_valid                      (ire_valid),

        .ar_valid                       (ar_valid),
        .ar_addr                        (ar_addr),
        .ar_brust                       (ar_brust),
        .ar_size                        (ar_size),
        .ar_len                         (ar_len),
        .ar_id                          (ar_id),
        .ar_ready                       (ar_ready),

        .r_valid                        (r_valid),
        .r_last                         (r_last),
        .r_data                         (r_data),
        .r_resp                         (r_resp),
        .r_id                           (r_id),
        .r_ready                        (r_ready)

    );


endmodule

module m_mem2_axi_send_channel(
    input                               clk,
    input                               rst_n,
    input                               sram_req,
    input  [`SRAM_BUS_ADDR_WIDTH-1:0]   sram_addr,
    input  [`SRAM_BUS_DATA_WIDTH-1:0]   sram_data,
    input  [`SRAM_BUS_TYPE_WIDTH-1:0]   sram_type,
    output                              sram_rdy,

    output                              aw_valid,
    output [`AXI_ADDR_WIDTH-1:0]        aw_addr,
    output [`AXI_BRUS_WIDTH-1:0]        aw_brust,
    output [`AXI_SIZE_WIDTH-1:0]        aw_size,
    output [`AXI_LENN_WIDTH-1:0]        aw_len,
    output [`AXI_IDDD_WIDTH-1:0]        aw_id,
    input                               aw_ready,

    output [`AXI_DATA_WIDTH-1:0]        w_data,
    output                              w_valid,
    output                              w_last,
    output [`AXI_STRB_WIDTH-1:0]        w_strb,
    input                               w_ready,

    output                              b_ready


);
    wire data_ena;
    wire [256-1:0] data_next;
    wire [256-1:0] data_r;
    assign data_next = sram_data;
    assign data_ena = sram_req && sram_rdy||write_addr_ok&&sending_last_addr;

    dffrs #(`SRAM_BUS_DATA_WIDTH) data_dfflr (data_ena, data_next, data_r, clk, rst_n);

    wire type_ena;
    wire [`SRAM_BUS_TYPE_WIDTH-1:0] type_next;
    wire [`SRAM_BUS_TYPE_WIDTH-1:0] type_r;
    assign type_next = sram_type;
    assign type_ena = sram_req && sram_rdy;

    dffrs #(`SRAM_BUS_TYPE_WIDTH) type_dfflr (type_ena, type_next, type_r, clk, rst_n);

    wire addr_ena;
    wire [`SRAM_BUS_ADDR_WIDTH-1:0] addr_next;
    wire [`SRAM_BUS_ADDR_WIDTH-1:0] addr_r;
    assign addr_next = sram_addr;
    assign addr_ena = sram_req && sram_rdy;

    dffrs #(`SRAM_BUS_ADDR_WIDTH) addr_dfflr (addr_ena, addr_next, addr_r, clk, rst_n);


    wire write_addr_ok;
    assign write_addr_ok = aw_valid&&aw_ready;


    wire fsm_ena;
    wire  fsm_next;
    wire  fsm_r;
    assign fsm_next = ~fsm_r;
    assign fsm_ena = sram_req && sram_rdy||write_addr_ok&&sending_last_addr;

    dffrs #(1) fsm_dfflr (fsm_ena, fsm_next, fsm_r, clk, rst_n);




    wire fsmd_ena;
    wire  fsmd_next;
    wire  fsmd_r;
    assign fsmd_next = ~fsmd_r;
    assign fsmd_ena = sram_req && sram_rdy||send_a_data&&sending_last_data;

    dffrs #(1) fsmd_dfflr (fsmd_ena, fsmd_next, fsmd_r, clk, rst_n);


    wire support_64_bits;
    `ifdef SOC
        assign support_64_bits = (addr_r[31:28]==4'd8)||(addr_r[31:28]==4'hf);
    `else 
        assign support_64_bits = 1'b0;
    `endif


    reg [7:0]   w_addr_len;

    always@(*)begin
        case({support_64_bits,type_r[4:0]})
            6'b000000: w_addr_len = 8'd1;
            6'b000001: w_addr_len = 8'd1;
            6'b000011: w_addr_len = 8'd1;
            6'b000111: w_addr_len = 8'd2;
            6'b001111: w_addr_len = 8'd4;
            6'b011111: w_addr_len = 8'd8;
            6'b100000: w_addr_len = 8'd1;
            6'b100001: w_addr_len = 8'd1;
            6'b100011: w_addr_len = 8'd1;
            6'b100111: w_addr_len = 8'd1;
            6'b101111: w_addr_len = 8'd2;
            6'b111111: w_addr_len = 8'd4;
            default:   w_addr_len = 8'd0;
        endcase
    end


    wire sending_last_addr;
    assign sending_last_addr = aw_cnt_r==w_addr_len;

    wire send_a_addr;
    assign send_a_addr = aw_valid && aw_ready;



    wire aw_cnt_ena;
    wire [7:0] aw_cnt_next;
    wire [7:0] aw_cnt_r;
    assign aw_cnt_next = sending_last_addr?'b0:(aw_cnt_r + 8'd1);
    assign aw_cnt_ena = fsm_r&&(send_a_addr||aw_cnt_r=='b0);

    dffrs #(8) aw_cnt_dfflr (aw_cnt_ena, aw_cnt_next, aw_cnt_r, clk, rst_n);

    wire aw_valid_r;
    wire aw_valid_ena;
    wire aw_valid_next;
    assign aw_valid_ena = ((aw_cnt_r=='b0)||sending_last_addr&&send_a_addr)&&fsm_r;
    assign aw_valid_next = ~aw_valid_r;

    dffrs #(1) aw_valid_dfflr (aw_valid_ena,aw_valid_next,aw_valid_r, clk, rst_n);

    wire [31:0]                 aw_addr_r;
    wire [31:0]                 aw_addr_next;
    wire                        aw_addr_ena;
    assign aw_addr_ena = fsm_r&&(send_a_addr||aw_cnt_r=='b0);;
    assign aw_addr_next = addr_r + aw_cnt_r*(support_64_bits?32'd8:32'd4);

    dffrs #(32) aw_addr_dfflr (aw_addr_ena,aw_addr_next,aw_addr_r, clk, rst_n);

    reg [`AXI_SIZE_WIDTH-1:0] w_size;
    always@(*)begin
        case({support_64_bits,type_r[4:0]})
            6'b000000: w_size = `AXI_SIZE_WIDTH'b000;
            6'b000001: w_size = `AXI_SIZE_WIDTH'b001;
            6'b000011: w_size = `AXI_SIZE_WIDTH'b010;
            6'b000111: w_size = `AXI_SIZE_WIDTH'b010;
            6'b011111: w_size = `AXI_SIZE_WIDTH'b010;
            6'b100000: w_size = `AXI_SIZE_WIDTH'b000;
            6'b100001: w_size = `AXI_SIZE_WIDTH'b001;
            6'b100011: w_size = `AXI_SIZE_WIDTH'b010;
            6'b100111: w_size = `AXI_SIZE_WIDTH'b011;
            6'b111111: w_size = `AXI_SIZE_WIDTH'b011;
        endcase
    end


    wire [`AXI_SIZE_WIDTH-1:0]  aw_size_r;
    wire [`AXI_SIZE_WIDTH-1:0]  aw_size_next;
    wire                        aw_size_ena;
    assign aw_size_ena = (aw_cnt_r=='b0)&&fsm_r;
    assign aw_size_next = w_size;

    dffrs #(`AXI_SIZE_WIDTH) aw_size_dfflr (aw_size_ena,aw_size_next,aw_size_r, clk, rst_n);


    wire [`AXI_LEN_WIDTH-1:0]   aw_len_r;
    wire [`AXI_LEN_WIDTH-1:0]   aw_len_next;
    wire                        aw_len_ena;
    assign aw_len_ena = 1'b1;
    assign aw_len_next = 'b0;

    dffrs #(`AXI_LEN_WIDTH) aw_len_dfflr (aw_len_ena,aw_len_next,aw_len_r, clk, rst_n);


    wire [`AXI_BRUS_WIDTH-1:0]  aw_brus_r;
    wire [`AXI_BRUS_WIDTH-1:0]  aw_brus_next;
    wire                        aw_brus_ena;
    assign aw_brus_ena = 1'b1;
    assign aw_brus_next = `AXI_BRUS_WIDTH'b01;

    dffrs #(`AXI_BRUS_WIDTH) aw_brus_dfflr (aw_brus_ena,aw_brus_next,aw_brus_r, clk, rst_n);




    reg [`AXI_DATA_WIDTH-1:0] w_data_gen_sub32;
    always@(*)begin
        case(type_r)
            `SRAM_BUS_TYPE_WIDTH'b0:w_data_gen_sub32 = {data_r[7:0],data_r[7:0],data_r[7:0],data_r[7:0],data_r[7:0],data_r[7:0],data_r[7:0],data_r[7:0]};
            `SRAM_BUS_TYPE_WIDTH'b1:w_data_gen_sub32 = {data_r[15:0],data_r[15:0],data_r[15:0],data_r[15:0]};
            default: w_data_gen_sub32 = w_data_gen;
        endcase
    end


    reg [`AXI_DATA_WIDTH-1:0] w_data_gen;
    always@(*)begin
        case({support_64_bits,w_cnt_r})
            9'h000: w_data_gen = {data_r[31:0],data_r[31:0]};
            9'h001: w_data_gen = {data_r[63:32],data_r[63:32]};
            9'h002: w_data_gen = {data_r[95:64],data_r[95:64]};
            9'h003: w_data_gen = {data_r[127:96],data_r[127:96]};
            9'h004: w_data_gen = {data_r[159:128],data_r[159:128]};
            9'h005: w_data_gen = {data_r[191:160],data_r[191:160]};
            9'h006: w_data_gen = {data_r[223:192],data_r[223:192]};
            9'h007: w_data_gen = {data_r[255:224],data_r[255:224]};
            9'h100: w_data_gen = {data_r[63:0]};
            9'h101: w_data_gen = {data_r[127:64]};
            9'h102: w_data_gen = {data_r[191:128]};
            9'h103: w_data_gen = {data_r[255:192]};
            default: w_data_gen = 'b0;
        endcase
    end


    reg [`AXI_STRB_WIDTH-1:0]   w_strb_gen;

    always@(*)begin
        case({support_64_bits,type_r[5:0]})
            7'b0000000: w_strb_gen = 8'b00000001;
            7'b0000001: w_strb_gen = 8'b00000011;
            7'b0000011: w_strb_gen = 8'b00001111;
            7'b0000111: w_strb_gen = 8'b00001111;
            7'b0011111: w_strb_gen = 8'b00001111;
            7'b1000000: w_strb_gen = 8'b00000001;
            7'b1000001: w_strb_gen = 8'b00000011;
            7'b1000011: w_strb_gen = 8'b00001111;
            7'b1000111: w_strb_gen = 8'b11111111;
            7'b1011111: w_strb_gen = 8'b11111111;
            default : w_strb_gen = 'b0;
        endcase
    end

    reg [`AXI_STRB_WIDTH-1:0]   w_strb_shift;
    always@(*)begin
        case(addr_r[2:0])
            3'b000: w_strb_shift = {w_strb_gen};
            3'b001: w_strb_shift = {w_strb_gen[6:0],1'b0};
            3'b010: w_strb_shift = {w_strb_gen[5:0],2'b0};
            3'b011: w_strb_shift = {w_strb_gen[4:0],3'b0};
            3'b100: w_strb_shift = {w_strb_gen[3:0],4'b0};
            3'b101: w_strb_shift = {w_strb_gen[2:0],5'b0};
            3'b110: w_strb_shift = {w_strb_gen[1:0],6'b0};
            3'b111: w_strb_shift = {w_strb_gen[0],7'b0};
        endcase
    end


    wire sending_last_data;
    assign sending_last_data = w_cnt_r==w_addr_len;

    wire send_a_data;
    assign send_a_data = w_valid&&w_ready;

    wire w_cnt_ena;
    wire [7:0] w_cnt_next;
    wire [7:0] w_cnt_r;
    assign w_cnt_next = sending_last_data?'b0:(w_cnt_r + 8'd1);
    assign w_cnt_ena = fsmd_r&&(send_a_data||(w_cnt_r=='b0));

    dffrs #(8) w_cnt_dfflr (w_cnt_ena, w_cnt_next, w_cnt_r, clk, rst_n);


    wire [`AXI_DATA_WIDTH-1:0]   w_data_r;
    wire [`AXI_DATA_WIDTH-1:0]   w_data_next;
    wire                        w_data_ena;
    assign w_data_ena = fsmd_r&&(send_a_data||(w_cnt_r=='b0));
    assign w_data_next = w_data_gen_sub32;

    dffrs #(`AXI_DATA_WIDTH) w_data_dfflr (w_data_ena,w_data_next,w_data_r, clk, rst_n);

    wire [`AXI_STRB_WIDTH-1:0]   w_strb_r;
    wire [`AXI_STRB_WIDTH-1:0]   w_strb_next;
    wire                         w_strb_ena;
    assign w_strb_ena = fsmd_r;
    assign w_strb_next = w_strb_shift;

    dffrs #(`AXI_STRB_WIDTH) w_strb_dfflr (w_strb_ena,w_strb_next,w_strb_r, clk, rst_n);


    wire                        w_valid_r;
    wire                        w_valid_next;
    wire                        a_valid_ena;
    assign w_valid_ena = fsmd_r&&((w_cnt_r==8'b0)||sending_last_data&&send_a_data);
    assign w_valid_next = ~w_valid_r;

    dffrs #(1) w_valid_dfflr (w_valid_ena,w_valid_next,w_valid_r, clk, rst_n);

    wire                        w_last_r;
    wire                        w_last_next;
    wire                        w_last_ena;
    assign w_last_ena = 1'b1;
    assign w_last_next = 1'b1;

    dffrs #(1) w_last_dfflr (w_len_ena,w_len_next,w_len_r, clk, rst_n);


    assign aw_addr = aw_addr_r;
    assign aw_valid = aw_valid_r;
    assign aw_len = aw_len_r;
    assign aw_size = aw_size_r;
    assign aw_id = 'b00;
    assign aw_brust = aw_brus_r;

    assign w_data = w_data_r;
    assign w_valid = w_valid_r;
    assign w_strb = w_strb_r;
    assign w_last = 1'b1;

    assign b_ready = 1'b1;


    assign sram_rdy  = ~fsm_r && ~fsmd_r;


endmodule

module m_mem2_axi_read_channel(

    input                               clk,
    input                               rst_n,
    
    input                               ir_req,
    input  [`SRAM_BUS_TYPE_WIDTH-1:0]   ir_type,
    input  [`SRAM_BUS_ADDR_WIDTH-1:0]   ir_addr,
    output                              ir_rdy,
    output [`SRAM_BUS_DATA_WIDTH-1:0]   ire_data,
    output                              ire_valid,

    output                              ar_valid,
    output [`AXI_ADDR_WIDTH-1:0]        ar_addr,
    output [`AXI_BRUS_WIDTH-1:0]        ar_brust,
    output [`AXI_SIZE_WIDTH-1:0]        ar_size,
    output [`AXI_LENN_WIDTH-1:0]        ar_len,
    output [`AXI_IDDD_WIDTH-1:0]        ar_id,
    input                               ar_ready,

    input                               r_valid,
    input                               r_last,
    input  [`AXI_DATA_WIDTH-1:0]        r_data,
    input  [`AXI_RESP_WIDTH-1:0]        r_resp,
    input  [`AXI_IDDD_WIDTH-1:0]        r_id,
    output                              r_ready


);

    wire fsm_r;
    wire fsm_next;
    wire fsm_ena;

    assign fsm_next = ir_req&&ir_rdy?1'b1:1'b0;
    assign fsm_ena = sending_the_last_addr&&ar_ready&&ar_valid || ir_req&&ir_rdy;

    dffrs #(1) fsmr_dfflr (fsm_ena, fsm_next, fsm_r, clk, rst_n);



    wire fsmw_r;
    wire fsmw_next;
    wire fsmw_ena;

    assign fsmw_next = ir_req&&ir_rdy?1'b1:1'b0;
    assign fsmw_ena = the_last_data || ir_req&&ir_rdy;

    dffrs #(1) fsm_dfflr (fsmw_ena, fsmw_next, fsmw_r, clk, rst_n);



    wire [`SRAM_BUS_TYPE_WIDTH-1:0] type_r;
    wire [`SRAM_BUS_TYPE_WIDTH-1:0] type_next;
    wire                            type_ena;
    assign type_ena = ir_req&&ir_rdy;
    assign type_next = ir_type;
    dffrs #(8) type_dfflr (type_ena, type_next, type_r, clk, rst_n);

    wire [`SRAM_BUS_ADDR_WIDTH-1:0] addr_r;
    wire [`SRAM_BUS_ADDR_WIDTH-1:0] addr_next;
    wire                            addr_ena;
    assign addr_ena = ir_req&&ir_rdy;
    assign addr_next = ir_addr;
    dffrs #(`SRAM_BUS_ADDR_WIDTH)addr_dfflr (addr_ena, addr_next, addr_r, clk, rst_n);

    wire support_brust;
    wire support_64_bits;

    assign support_brust = 1'b0;
    `ifdef SOC
        assign support_64_bits = ((addr_r[31:28]==4'd8))&&((type_r==`SRAM_BUS_TYPE_WIDTH'd7)||(type_r==`SRAM_BUS_TYPE_WIDTH'd15)||(type_r==`SRAM_BUS_TYPE_WIDTH'd31));
    `else
        assign support_64_bits = 1'b0;
    `endif



    reg [7:0]   w_addr_len;
    always@(*)begin
        case({support_64_bits,type_r[4:0]})
            6'b000000: w_addr_len = 8'd1;
            6'b000001: w_addr_len = 8'd1;
            6'b000011: w_addr_len = 8'd1;
            6'b000111: w_addr_len = 8'd2;
            6'b001111: w_addr_len = 8'd4;
            6'b011111: w_addr_len = 8'd8;
            6'b100000: w_addr_len = 8'd1;
            6'b100001: w_addr_len = 8'd1;
            6'b100011: w_addr_len = 8'd1;
            6'b100111: w_addr_len = 8'd1;
            6'b101111: w_addr_len = 8'd2;
            6'b111111: w_addr_len = 8'd4;
            default:w_addr_len = 8'd0;
        endcase
    end


    wire sending_the_last_addr;
    assign sending_the_last_addr = addr_send_cnt_r==w_addr_len;

    wire axi_send_an_addr = ar_valid && ar_ready;

    wire [7:0]  addr_send_cnt_r;
    wire [7:0]  addr_send_cnt_next;
    wire        addr_send_cnt_ena;

    assign addr_send_cnt_next = sending_the_last_addr?'b0:(addr_send_cnt_r+8'b1);
    assign addr_send_cnt_ena = axi_send_an_addr||fsm_r&&(addr_send_cnt_r=='b0);

    dffrs #(8) addr_send_cnt_dfflr (addr_send_cnt_ena, addr_send_cnt_next, addr_send_cnt_r, clk, rst_n);



    wire [`AXI_ADDR_WIDTH-1:0]  ar_addr_r;
    wire [`AXI_ADDR_WIDTH-1:0]  ar_addr_next;
    wire        ar_addr_ena;

    assign ar_addr_next = (addr_r + (support_64_bits?32'd8:32'd4)*addr_send_cnt_r);
    assign ar_addr_ena  = axi_send_an_addr||fsm_r&&(addr_send_cnt_r=='b0);

    dffrs #(`AXI_ADDR_WIDTH) ar_addr_dfflr (ar_addr_ena, ar_addr_next, ar_addr_r, clk, rst_n);




    wire        ar_valid_r;
    wire        ar_valid_next;
    wire        ar_valid_ena;

    assign ar_valid_next = ~sending_the_last_addr;
    assign ar_valid_ena  = axi_send_an_addr||fsm_r&&(addr_send_cnt_r=='b0);

    dffrs #(1) ar_valid_dfflr (ar_valid_ena, ar_valid_next, ar_valid_r, clk, rst_n);

    wire [`AXI_SIZE_WIDTH-1:0] ar_size_r;
    wire [`AXI_SIZE_WIDTH-1:0] ar_size_next;
    wire  ar_size_ena;
    assign ar_size_next = support_64_bits?'b11:'b10;
    assign ar_size_ena = fsm_r;
    dffrs #(`AXI_SIZE_WIDTH) ar_size_dfflr (ar_size_ena, ar_size_next, ar_size_r, clk, rst_n);

    wire [`AXI_BRUS_WIDTH-1:0] ar_brust_r;
    wire [`AXI_BRUS_WIDTH-1:0] ar_brust_next;
    wire  ar_brust_ena;
    assign ar_brust_next = `AXI_BRUS_WIDTH'b01;
    assign ar_brust_ena = fsm_r;
    dffrs #(`AXI_BRUS_WIDTH) ar_brust_dfflr (ar_brust_ena, ar_brust_next, ar_brust_r, clk, rst_n);

    wire [`AXI_IDDD_WIDTH-1:0] ar_id_r;
    wire [`AXI_IDDD_WIDTH-1:0] ar_id_next;
    wire  ar_id_ena;
    assign ar_id_next = 'b0;
    assign ar_id_ena = fsm_r;
    dffrs #(`AXI_IDDD_WIDTH) ar_id_dfflr (ar_id_ena, ar_id_next, ar_id_r, clk, rst_n);


    wire [`AXI_LENN_WIDTH-1:0] ar_len_r;
    wire [`AXI_LENN_WIDTH-1:0] ar_len_next;
    wire  ar_len_ena;
    assign ar_len_next = 'b0;
    assign ar_len_ena = fsm_r;
    dffrs #(`AXI_LENN_WIDTH) ar_len_dfflr (ar_len_ena, ar_len_next, ar_len_r, clk, rst_n);


    ///////////////////////////////////////////////////
    //
    //
    //          DATA PART
    //
    //
    ///////////////////////////////////////////////////


    wire the_last_data;
    assign the_last_data = data_read_cnt_r==w_addr_len;

    wire axi_read_a_data;
    assign axi_read_a_data = r_valid&&r_ready;

    wire [7:0]  data_read_cnt_r;
    wire [7:0]  data_read_cnt_next;
    wire        data_read_cnt_ena;

    assign data_read_cnt_next = the_last_data?'b0:data_read_cnt_r+8'b1;
    assign data_read_cnt_ena = (axi_read_a_data||the_last_data)&&fsmw_r;

    dffrs #(8) data_read_cnt_dfflr (data_read_cnt_ena, data_read_cnt_next, data_read_cnt_r, clk, rst_n);


    wire [31:0]   data_buf0_r;
    wire [31:0]   data_buf0_next;
    wire          data_buf0_ena;

    wire [31:0]   data_buf1_r;
    wire [31:0]   data_buf1_next;
    wire          data_buf1_ena;

    wire [31:0]   data_buf2_r;
    wire [31:0]   data_buf2_next;
    wire          data_buf2_ena;

    wire [31:0]   data_buf3_r;
    wire [31:0]   data_buf3_next;
    wire          data_buf3_ena;
    
    wire [31:0]   data_buf4_r;
    wire [31:0]   data_buf4_next;
    wire          data_buf4_ena;
    
    wire [31:0]   data_buf5_r;
    wire [31:0]   data_buf5_next;
    wire          data_buf5_ena;
    
    wire [31:0]   data_buf6_r;
    wire [31:0]   data_buf6_next;
    wire          data_buf6_ena;
    
    wire [31:0]   data_buf7_r;
    wire [31:0]   data_buf7_next;
    wire          data_buf7_ena;

    assign data_buf0_next = r_data[31:0];
    assign data_buf1_next = r_data[31:0];
    assign data_buf2_next = r_data[31:0];
    assign data_buf3_next = r_data[31:0];
    assign data_buf4_next = support_64_bits?r_data[63:32]:r_data[31:0];
    assign data_buf5_next = support_64_bits?r_data[63:32]:r_data[31:0];
    assign data_buf6_next = support_64_bits?r_data[63:32]:r_data[31:0];
    assign data_buf7_next = support_64_bits?r_data[63:32]:r_data[31:0];

    assign data_buf0_ena = r_valid&&r_ready&&(data_read_cnt_r==8'd0);
    assign data_buf1_ena = r_valid&&r_ready&&(data_read_cnt_r==8'd1);
    assign data_buf2_ena = r_valid&&r_ready&&(data_read_cnt_r==8'd2);
    assign data_buf3_ena = r_valid&&r_ready&&(data_read_cnt_r==8'd3);
    assign data_buf4_ena = r_valid&&r_ready&&(data_read_cnt_r==8'd0)&&support_64_bits||r_valid&&r_ready&&(data_read_cnt_r==8'd4);
    assign data_buf5_ena = r_valid&&r_ready&&(data_read_cnt_r==8'd1)&&support_64_bits||r_valid&&r_ready&&(data_read_cnt_r==8'd5);
    assign data_buf6_ena = r_valid&&r_ready&&(data_read_cnt_r==8'd2)&&support_64_bits||r_valid&&r_ready&&(data_read_cnt_r==8'd6);
    assign data_buf7_ena = r_valid&&r_ready&&(data_read_cnt_r==8'd3)&&support_64_bits||r_valid&&r_ready&&(data_read_cnt_r==8'd7);



    dffrs #(32) data_buf_dfflr0 (data_buf0_ena, data_buf0_next, data_buf0_r, clk, rst_n);
    dffrs #(32) data_buf_dfflr1 (data_buf1_ena, data_buf1_next, data_buf1_r, clk, rst_n);
    dffrs #(32) data_buf_dfflr2 (data_buf2_ena, data_buf2_next, data_buf2_r, clk, rst_n);
    dffrs #(32) data_buf_dfflr3 (data_buf3_ena, data_buf3_next, data_buf3_r, clk, rst_n);
    dffrs #(32) data_buf_dfflr4 (data_buf4_ena, data_buf4_next, data_buf4_r, clk, rst_n);
    dffrs #(32) data_buf_dfflr5 (data_buf5_ena, data_buf5_next, data_buf5_r, clk, rst_n);
    dffrs #(32) data_buf_dfflr6 (data_buf6_ena, data_buf6_next, data_buf6_r, clk, rst_n);
    dffrs #(32) data_buf_dfflr7 (data_buf7_ena, data_buf7_next, data_buf7_r, clk, rst_n);


    wire ire_valid_r;
    wire ire_valid_next;
    wire ire_valid_ena;

    assign ire_valid_ena = the_last_data && r_valid && r_ready || ire_valid_r;
    assign ire_valid_next = ~ire_valid_r;

    dffrs #(1) ire_dfflr (ire_valid_next, ire_valid_next, ire_valid_r, clk, rst_n);

    assign ire_data = support_64_bits?
    {data_buf7_r,data_buf3_r,data_buf6_r,data_buf2_r,data_buf5_r,data_buf1_r,data_buf4_r,data_buf0_r}:
    {data_buf7_r,data_buf6_r,data_buf5_r,data_buf4_r,data_buf3_r,data_buf2_r,data_buf1_r,data_buf0_r};


    
    assign ire_valid = the_last_data&&(fsmw_r);
    assign ir_rdy    = (~fsm_r)&&(~fsmw_r);




    assign ar_valid = ar_valid_r;
    assign ar_addr = ar_addr_r;
    assign ar_brust = ar_brust_r;
    assign ar_size = ar_size_r;
    assign ar_len = ar_len_r;
    assign ar_id = ar_id_r;


    assign r_ready = 1'b1;

endmodule



module dffrs #(
    parameter DW = 32
) (
    input               lden, 
    input      [DW-1:0] dnxt,
    output     [DW-1:0] qout,

    input               clk,
    input               rst_n
);

    reg [DW-1:0] qout_r;
    always@(posedge clk)begin
        if(!rst_n)begin
            qout_r <= 'b0;
        end
        else begin
            if(lden)begin
                qout_r <= dnxt;
            end
        end
    end
    assign qout = qout_r;
endmodule