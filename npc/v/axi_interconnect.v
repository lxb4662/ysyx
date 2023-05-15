module ysyx_22050518_axi_interconnect(
    input [3:0]            axi_0_ar_id,
    input [1:0]            axi_0_ar_brust,
    input [7:0]            axi_0_ar_len,
    input [2:0]            axi_0_ar_size,
    input [63:0]           axi_0_ar_addr,
    input                  axi_0_ar_valid,
    output reg                 axi_0_ar_ready,

    output reg [31:0]            axi_0_r_data,
    output reg                   axi_0_r_valid,
    input                    axi_0_r_ready,
    output reg [3:0]             axi_0_r_id,
    output reg                   axi_0_r_last,
    output reg [1:0]             axi_0_r_resp,

    input [63:0]           axi_0_aw_addr,
    input                  axi_0_aw_valid,
    output reg             axi_0_aw_ready,
    input [3:0]            axi_0_aw_id,
    input [1:0]            axi_0_aw_brust,
    input [7:0]            axi_0_aw_len,
    input [2:0]            axi_0_aw_size,

    input [31:0]           axi_0_w_data,
    input                  axi_0_w_valid,
    output reg             axi_0_w_ready, 
    input                  axi_0_w_last,
    input   [3:0]          axi_0_w_strb,

    input                  axi_0_b_ready,
    output reg                 axi_0_b_valid,
    output reg  [1:0]          axi_0_b_resp,
    output reg  [3:0]          axi_0_b_id,

    input [3:0]            axi_1_ar_id,
    input [1:0]            axi_1_ar_brust,
    input [7:0]            axi_1_ar_len,
    input [2:0]            axi_1_ar_size,
    input [63:0]           axi_1_ar_addr,
    input                  axi_1_ar_valid,
    output reg                 axi_1_ar_ready,

    output reg [31:0]            axi_1_r_data,
    output reg                   axi_1_r_valid,
    input                    axi_1_r_ready,
    output reg [3:0]             axi_1_r_id,
    output reg                   axi_1_r_last,
    output reg [1:0]             axi_1_r_resp,

    input [63:0]           axi_1_aw_addr,
    input                  axi_1_aw_valid,
    output reg                 axi_1_aw_ready,
    input [3:0]            axi_1_aw_id,
    input [1:0]            axi_1_aw_brust,
    input [7:0]            axi_1_aw_len,
    input [2:0]            axi_1_aw_size,

    input [31:0]           axi_1_w_data,
    input                  axi_1_w_valid,
    output reg             axi_1_w_ready, 
    input                  axi_1_w_last,
    input   [3:0]          axi_1_w_strb,

    input                  axi_1_b_ready,
    output reg                 axi_1_b_valid,
    output reg  [1:0]          axi_1_b_resp,
    output reg  [3:0]          axi_1_b_id,

    input [3:0]            axi_2_ar_id,
    input [1:0]            axi_2_ar_brust,
    input [7:0]            axi_2_ar_len,
    input [2:0]            axi_2_ar_size,
    input [63:0]           axi_2_ar_addr,
    input                  axi_2_ar_valid,
    output reg                 axi_2_ar_ready,

    output reg [31:0]            axi_2_r_data,
    output reg                   axi_2_r_valid,
    input                    axi_2_r_ready,
    output reg [3:0]             axi_2_r_id,
    output reg                   axi_2_r_last,
    output reg [1:0]             axi_2_r_resp,

    input [63:0]           axi_2_aw_addr,
    input                  axi_2_aw_valid,
    output reg                 axi_2_aw_ready,
    input [3:0]            axi_2_aw_id,
    input [1:0]            axi_2_aw_brust,
    input [7:0]            axi_2_aw_len,
    input [2:0]            axi_2_aw_size,

    input [31:0]           axi_2_w_data,
    input                  axi_2_w_valid,
    output reg             axi_2_w_ready, 
    input                  axi_2_w_last,
    input   [3:0]          axi_2_w_strb,

    input                  axi_2_b_ready,
    output reg                 axi_2_b_valid,
    output reg  [1:0]          axi_2_b_resp,
    output reg  [3:0]          axi_2_b_id,


    output reg                  axi_3_clk,
    output reg                  axi_3_rst_n,

    output reg [3:0]            axi_3_ar_id,
    output reg [1:0]            axi_3_ar_brust,
    output reg [7:0]            axi_3_ar_len,
    output reg [2:0]            axi_3_ar_size,
    output reg [63:0]           axi_3_ar_addr,
    output reg                  axi_3_ar_valid,
    input                   axi_3_ar_ready,

    input [31:0]            axi_3_r_data,
    input                   axi_3_r_valid,
    output reg                  axi_3_r_ready,
    input [3:0]             axi_3_r_id,
    input                   axi_3_r_last,
    input [1:0]             axi_3_r_resp,

    output reg [63:0]           axi_3_aw_addr,
    output reg                  axi_3_aw_valid,
    input                   axi_3_aw_ready,
    output reg [3:0]            axi_3_aw_id,
    output reg [1:0]            axi_3_aw_brust,
    output reg [7:0]            axi_3_aw_len,
    output reg [2:0]            axi_3_aw_size,

    output reg [31:0]           axi_3_w_data,
    output reg                  axi_3_w_valid,
    input   wire            axi_3_w_ready, 
    output reg                  axi_3_w_last,
    output reg   [3:0]          axi_3_w_strb,

    output reg                  axi_3_b_ready,
    input                   axi_3_b_valid,
    input  [1:0]            axi_3_b_resp,
    input  [3:0]            axi_3_b_id
);

// read addr part
/*
reg [3:0]   read_fsm;
reg [3:0]   read_fsm_next;

always@(*)begin
    case(read_fsm)
        4'b0: read_fsm_next = axi_0_ar_valid?:4'b0;

    endcase
end

always@(posedge clk)begin
    if(!rst_n)begin
        read_fsm <= 4'b0;
    end
    else begin
        read_fsm <= read_fsm_next;
    end
end
*/
reg [2:0]   ar_sel;
always@(*)begin
    if(axi_0_ar_valid)begin
        ar_sel = 3'b100;
    end
    else if(axi_1_ar_valid)begin
        ar_sel = 3'b010;
    end
    else if(axi_2_ar_valid)begin
        ar_sel = 3'b001;
    end
    else begin
        ar_sel = 3'b0;
    end

end

always@(*)begin
    case(ar_sel)
        3'b100: axi_3_ar_valid = axi_0_ar_valid;
        3'b010: axi_3_ar_valid = axi_1_ar_valid;
        3'b001: axi_3_ar_valid = axi_2_ar_valid;
        default: axi_3_ar_valid = 1'b0;
    endcase
end
always@(*)begin
    case(ar_sel)
        3'b100: axi_3_ar_id = axi_0_ar_id;
        3'b010: axi_3_ar_id = axi_1_ar_id;
        3'b001: axi_3_ar_id = axi_2_ar_id;
        default: axi_3_ar_id = 4'b0;
    endcase
end


always@(*)begin
    case(ar_sel)
        3'b100: axi_3_ar_brust = axi_0_ar_brust;
        3'b010: axi_3_ar_brust = axi_1_ar_brust;
        3'b001: axi_3_ar_brust = axi_2_ar_brust;
        default: axi_3_ar_brust = 2'b0;
    endcase
end


always@(*)begin
    case(ar_sel)
        3'b100: axi_3_ar_len = axi_0_ar_len;
        3'b010: axi_3_ar_len = axi_1_ar_len;
        3'b001: axi_3_ar_len = axi_2_ar_len;
        default: axi_3_ar_len = 8'b0;
    endcase
end


always@(*)begin
    case(ar_sel)
        3'b100: axi_3_ar_size = axi_0_ar_size;
        3'b010: axi_3_ar_size = axi_1_ar_size;
        3'b001: axi_3_ar_size = axi_2_ar_size;
        default: axi_3_ar_size = 3'b0;
    endcase
end

always@(*)begin
    case(ar_sel)
        3'b100: axi_3_ar_addr = axi_0_ar_addr;
        3'b010: axi_3_ar_addr = axi_1_ar_addr;
        3'b001: axi_3_ar_addr = axi_2_ar_addr;
        default: axi_3_ar_addr = 64'b0;
    endcase
end


always@(*)begin
    case(ar_sel)
        3'b100: axi_0_ar_ready = axi_3_ar_ready;
        default: axi_0_ar_ready = 1'b0;
    endcase
end
always@(*)begin
    case(ar_sel)
        3'b010: axi_1_ar_ready = axi_3_ar_ready;
        default: axi_1_ar_ready = 1'b0;
    endcase
end
always@(*)begin
    case(ar_sel)
        3'b001: axi_2_ar_ready = axi_3_ar_ready;
        default: axi_2_ar_ready = 1'b0;
    endcase
end


// read channel

always@(*)begin
    case(axi_3_r_id)
    4'b0001: axi_0_r_data = axi_3_r_data;
    default: axi_0_r_data = 32'b0;
    endcase
end
always@(*)begin
    case(axi_3_r_id)
    4'b0010: axi_1_r_data = axi_3_r_data;
    default: axi_1_r_data = 32'b0;
    endcase
end
always@(*)begin
    case(axi_3_r_id)
    4'b0011: axi_2_r_data = axi_3_r_data;
    default: axi_2_r_data = 32'b0;
    endcase
end
//
always@(*)begin
    case(axi_3_r_id)
    4'b0001: axi_0_r_valid = axi_3_r_valid;
    default: axi_0_r_valid = 1'b0;
    endcase
end
always@(*)begin
    case(axi_3_r_id)
    4'b0010: axi_1_r_valid = axi_3_r_valid;
    default: axi_1_r_valid = 1'b0;
    endcase
end
always@(*)begin
    case(axi_3_r_id)
    4'b0011: axi_2_r_valid = axi_3_r_valid;
    default: axi_2_r_valid = 1'b0;
    endcase
end

// rready
always@(*)begin
    case(axi_3_r_id)
    4'b0001: axi_3_r_ready = axi_0_r_ready;
    4'b0010: axi_3_r_ready = axi_1_r_ready;
    4'b0011: axi_3_r_ready = axi_2_r_ready;
    default: axi_3_r_ready = 1'b0;
    endcase
end

always@(*)begin
    case(axi_3_r_id)
    4'b0001: axi_0_r_id = axi_3_r_id;
    default: axi_0_r_id = 4'b0;
    endcase
end
always@(*)begin
    case(axi_3_r_id)
    4'b0010: axi_1_r_id = axi_3_r_id;
    default: axi_1_r_id = 4'b0;
    endcase
end
always@(*)begin
    case(axi_3_r_id)
    4'b0011: axi_2_r_id = axi_3_r_id;
    default: axi_2_r_id = 4'b0;
    endcase
end

always@(*)begin
    case(axi_3_r_id)
    4'b0001: axi_0_r_last = axi_3_r_last;
    default: axi_0_r_last = 1'b0;
    endcase
end
always@(*)begin
    case(axi_3_r_id)
    4'b0010: axi_1_r_last = axi_3_r_last;
    default: axi_1_r_last = 1'b0;
    endcase
end
always@(*)begin
    case(axi_3_r_id)
    4'b0011: axi_2_r_last = axi_3_r_last;
    default: axi_2_r_last = 1'b0;
    endcase

end


always@(*)begin
    case(axi_3_r_id)
    4'b0001: axi_0_r_resp = axi_3_r_resp;
    default: axi_0_r_resp = 2'b0;
    endcase

end
always@(*)begin
    case(axi_3_r_id)
    4'b0010: axi_1_r_resp = axi_3_r_resp;
    default: axi_1_r_resp = 2'b0;
    endcase

end
always@(*)begin
    case(axi_3_r_id)
    4'b0011: axi_2_r_resp = axi_3_r_resp;
    default: axi_2_r_resp = 2'b0;
    endcase

end


//          aw

reg [2:0]   aw_sel;
always@(*)begin
    if(axi_0_aw_valid)begin
        aw_sel = 3'b100;
    end
    else if(axi_1_aw_valid)begin
        aw_sel = 3'b010;
    end
    else if(axi_2_aw_valid)begin
        aw_sel = 3'b001;
    end
    else begin
        aw_sel = 3'b0;
    end

end
always@(*)begin
    case(aw_sel)
        3'b100: axi_3_aw_valid = axi_0_aw_valid;
        3'b010: axi_3_aw_valid = axi_1_aw_valid;
        3'b001: axi_3_aw_valid = axi_2_aw_valid;
        default: axi_3_aw_valid = 1'b0;
    endcase
end
always@(*)begin
    case(aw_sel)
        3'b100: axi_3_aw_id = axi_0_aw_id;
        3'b010: axi_3_aw_id = axi_1_aw_id;
        3'b001: axi_3_aw_id = axi_2_aw_id;
        default: axi_3_aw_id = 4'b0;
    endcase
end


always@(*)begin
    case(aw_sel)
        3'b100: axi_3_aw_brust = axi_0_aw_brust;
        3'b010: axi_3_aw_brust = axi_1_aw_brust;
        3'b001: axi_3_aw_brust = axi_2_aw_brust;
        default: axi_3_aw_brust = 2'b0;
    endcase
end


always@(*)begin
    case(aw_sel)
        3'b100: axi_3_aw_len = axi_0_aw_len;
        3'b010: axi_3_aw_len = axi_1_aw_len;
        3'b001: axi_3_aw_len = axi_2_aw_len;
        default: axi_3_aw_len = 8'b0;
    endcase
end


always@(*)begin
    case(aw_sel)
        3'b100: axi_3_aw_size = axi_0_aw_size;
        3'b010: axi_3_aw_size = axi_1_aw_size;
        3'b001: axi_3_aw_size = axi_2_aw_size;
        default: axi_3_aw_size = 3'b0;
    endcase
end

always@(*)begin
    case(aw_sel)
        3'b100: axi_3_aw_addr = axi_0_aw_addr;
        3'b010: axi_3_aw_addr = axi_1_aw_addr;
        3'b001: axi_3_aw_addr = axi_2_aw_addr;
        default: axi_3_aw_addr = 64'b0;
    endcase
end


always@(*)begin
    case(aw_sel)
        3'b100: axi_0_aw_ready = axi_3_aw_ready;
        default: axi_0_aw_ready = 1'b0;
    endcase
end
always@(*)begin
    case(aw_sel)
        3'b010: axi_1_aw_ready = axi_3_aw_ready;
        default: axi_1_aw_ready = 1'b0;
    endcase
end
always@(*)begin
    case(aw_sel)
        3'b001: axi_2_aw_ready = axi_3_aw_ready;
        default: axi_2_aw_ready = 1'b0;
    endcase
end


reg [2:0]   w_sel;
always@(*)begin
    if(axi_0_w_valid)begin
        w_sel = 3'b100;
    end
    else if(axi_1_w_valid)begin
        w_sel = 3'b010;
    end
    else if(axi_2_w_valid)begin
        w_sel = 3'b001;
    end
    else begin
        w_sel = 3'b0;
    end
end

always@(*)begin
    case(w_sel)
        3'b100: axi_3_w_data = axi_0_w_data;
        3'b010: axi_3_w_data = axi_1_w_data;
        3'b001: axi_3_w_data = axi_2_w_data;
        default: axi_3_w_data = 32'b0;
    endcase
end
always@(*)begin
    case(w_sel)
        3'b100: axi_3_w_valid = axi_0_w_valid;
        3'b010: axi_3_w_valid = axi_1_w_valid;
        3'b001: axi_3_w_valid = axi_2_w_valid;
        default: axi_3_w_valid = 1'b0;
    endcase
end
always@(*)begin
    case(w_sel)
        3'b100: axi_3_w_last = axi_0_w_last;
        3'b010: axi_3_w_last = axi_1_w_last;
        3'b001: axi_3_w_last = axi_2_w_last;
        default: axi_3_w_last = 1'b0;
    endcase
end
always@(*)begin
    case(w_sel)
        3'b100: axi_3_w_strb = axi_0_w_strb;
        3'b010: axi_3_w_strb = axi_1_w_strb;
        3'b001: axi_3_w_strb = axi_2_w_strb;
        default: axi_3_w_strb = 4'b0;
    endcase
end

always@(*)begin
    case(w_sel)
        3'b100: axi_0_w_ready = axi_3_w_ready;
        default: axi_0_w_ready = 1'b0;
    endcase
end
always@(*)begin
    case(w_sel)
        3'b010: axi_1_w_ready = axi_3_w_ready;
        default: axi_1_w_ready = 1'b0;
    endcase
end
always@(*)begin
    case(w_sel)
        3'b001: axi_2_w_ready = axi_3_w_ready;
        default: axi_2_w_ready = 1'b0;
    endcase
end



always@(*)begin
    case(axi_3_b_id)
    4'b0001: axi_0_b_id = axi_3_b_id;
    default: axi_0_b_id = 4'b0;
    endcase
end
always@(*)begin
    case(axi_3_b_id)
    4'b0010: axi_1_b_id = axi_3_b_id;
    default: axi_1_b_id = 4'b0;
    endcase
end
always@(*)begin
    case(axi_3_b_id)
    4'b0011: axi_2_b_id = axi_3_b_id;
    default: axi_2_b_id = 4'b0;
    endcase
end

// rready
always@(*)begin
    case(axi_3_b_id)
    4'b0001: axi_3_b_ready = axi_0_b_ready;
    4'b0010: axi_3_b_ready = axi_1_b_ready;
    4'b0011: axi_3_b_ready = axi_2_b_ready;
    default: axi_3_b_ready = 1'b0;
    endcase
end


always@(*)begin
    case(axi_3_b_id)
    4'b0001: axi_0_b_valid = axi_3_b_valid;
    default: axi_0_b_valid = 1'b0;
    endcase
end
always@(*)begin
    case(axi_3_b_id)
    4'b0010: axi_1_b_valid = axi_3_b_valid;
    default: axi_1_b_valid = 1'b0;
    endcase
end
always@(*)begin
    case(axi_3_b_id)
    4'b0011: axi_2_b_valid = axi_3_b_valid;
    default: axi_2_b_valid = 1'b0;
    endcase
end


always@(*)begin
    case(axi_3_b_id)
    4'b0001: axi_0_b_resp = axi_3_b_resp;
    default: axi_0_b_resp = 2'b0;
    endcase
end
always@(*)begin
    case(axi_3_b_id)
    4'b0010: axi_1_b_resp = axi_3_b_resp;
    default: axi_1_b_resp = 2'b0;
    endcase
end
always@(*)begin
    case(axi_3_b_id)
    4'b0011: axi_2_b_resp = axi_3_b_resp;
    default: axi_2_b_resp = 2'b0;
    endcase
end

endmodule