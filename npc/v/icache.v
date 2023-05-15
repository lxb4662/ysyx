module ysyx_22050518_icache(
    input                   clk,
    input                   rst_n,
    input [63:0]            addr,
    input                   read,
    input                   write,
    input [1:0]             write_len,
    input [63:0]            data_in,
    output[63:0]            data,
    output                  valid,
    output                  ready,

    output                  aclk,
    output                  arst_n,

    output                  wavalid,
    output reg  [63:0]      waaddr,
    input                   waready,
    
    output reg [31:0]       wdata,
    input                   wready,
    output                  wvalid,

    input  [1:0]            bresp,
    input                   bvalid,
    output                  bready,    


    output                  ravalid,
    output reg  [63:0]      raaddr,
    input                   raready,

    input                   rvalid,
    input [31:0]            rdata,
    output                  rready,

    output[5:0] 	io_sram0_addr,
	output 	        io_sram0_cen,
	output 	        io_sram0_wen,
	output[127:0] 	io_sram0_wmask,
	output[127:0] 	io_sram0_wdata,
	input[127:0] 	io_sram0_rdata,
	output[5:0] 	io_sram1_addr,
	output 	        io_sram1_cen,
	output 	        io_sram1_wen,
	output[127:0] 	io_sram1_wmask,
	output[127:0] 	io_sram1_wdata,
	input[127:0] 	io_sram1_rdata,
	output[5:0] 	io_sram2_addr,
	output 	        io_sram2_cen,
	output 	        io_sram2_wen,
	output[127:0] 	io_sram2_wmask,
	output[127:0] 	io_sram2_wdata,
	input[127:0] 	io_sram2_rdata,
	output[5:0] 	io_sram3_addr,
	output 	        io_sram3_cen,
	output 	        io_sram3_wen,
	output[127:0] 	io_sram3_wmask,
	output[127:0] 	io_sram3_wdata,
	input[127:0] 	io_sram3_rdata


);

assign bready = 1'b1;

assign aclk = clk;
assign arst_n = 1'b1;
assign ready = (status==5'b00000);
/*
wire valid;

always@(posedge clk)begin
    if(!rst_n)begin

        valid_o <= 1'b0;
    end
    else begin

        valid_o <= valid;
    end
end*/


reg [4:0]   status;
reg [4:0]  next_status;

wire dirty;
wire miss;
wire [6:0]index_a;
wire [52:0]tag_a;
wire hit;
wire [127:0] tag_arry_en_1;
wire [127:0] tag_arry_en_0;
wire [61:0 ] tag_data_in;
wire [61:0 ] tag_data_out_0[127:0];
wire [61:0 ] tag_data_out_1[127:0];

reg  random;
always@(posedge clk)begin
    if(!rst_n)begin
        random <= 1'b0;
    end
    else begin
        if(valid)begin
            random <= ~random;

        end
    end
end

assign index_a  = addr[10:4];
assign tag_a    = addr[63:11];

wire hit1;
wire hit0;

reg [6:0] index_ar;
reg [52:0]  tag_ar;
always@(posedge clk)begin
    if(!rst_n)begin
        index_ar <= 7'b0;
        tag_ar <= 53'b0;
    end
    else begin
        if((status ==5'b0)&miss)begin
        index_ar <= index_a;
        tag_ar <= tag_a;
        end
    end
end




always@(posedge clk)begin
    if(!rst_n)begin
        status <= 5'b0;
    end
    else begin
        status <= next_status;
    end
end


always@(*)begin
    case(status)
        5'b0:begin
                case({dirty,miss})
                    2'b00: next_status = 5'b0;
                    2'b01: next_status = (read||write)?5'b10000:5'b0;
                    2'b10: next_status = 5'b0;
                    2'b11: next_status = (read||write)?5'b01000:5'b0;
                    default : next_status = 5'b0;
                endcase
            end
        5'b1000: next_status = waready?5'b1001:status;
        5'b1001: next_status = waready?5'b1010:status;
        5'b1010: next_status = waready?5'b1011:status;
        5'b1011: next_status = waready?5'b1100:status;
        5'b1100: next_status = (write_fsm==4'b0)?5'b0000:status;
       
        
        5'b10000: next_status = raready?5'b10001:status;
        5'b10001: next_status = raready?5'b10010:status;
        5'b10010: next_status = raready?5'b10011:status;
        5'b10011: next_status = raready?5'b10100:status;
        5'b10100: next_status = (read_fsm==4'b0)?5'b00000:status;
        default : next_status = 5'b0;
    endcase
end


assign wavalid = (status==5'b1000)|(status==5'b1001)|(status==5'b1010)|(status==5'b1011);
assign wvalid = (write_fsm==4'b0001)|(write_fsm==4'b0010)|(write_fsm==4'b011)|(write_fsm==4'b100);

always@(*)begin
    case(status)
    5'b1000:    waaddr = {tag_arry_data_out_miss[52:0],index_a,4'b0000};
    5'b1001:    waaddr = {tag_arry_data_out_miss[52:0],index_a,4'b0100};
    5'b1010:    waaddr = {tag_arry_data_out_miss[52:0],index_a,4'b1000};
    5'b1011:    waaddr = {tag_arry_data_out_miss[52:0],index_a,4'b1100};
    default:    waaddr = 64'b0;
    endcase
end
reg [3:0]   write_fsm;
reg [3:0]   write_fsm_next;

always@(posedge clk)begin
    if(!rst_n)begin 
        write_fsm <= 4'b0;
    end
    else begin
        write_fsm <= write_fsm_next;
    end
end

always@(*)begin
    case(write_fsm)
        4'b0000:    write_fsm_next =  (status==5'b1000)?4'b1:4'b0;
        4'b0001:    write_fsm_next = wready?4'b0010:write_fsm;
        4'b0010:    write_fsm_next = wready?4'b0011:write_fsm;
        4'b0011:    write_fsm_next = wready?4'b0100:write_fsm;
        4'b0100:    write_fsm_next = wready?4'b0000:write_fsm;
        default: write_fsm_next = 4'b0;
    endcase
end


reg [3:0]   write_respone_fsm;
reg [3:0]   write_respone_fsm_next;



always@(posedge clk)begin
    if(!rst_n)begin
        write_respone_fsm <= 4'b0;
    end
    else begin
        write_respone_fsm <= write_respone_fsm_next;
    end
end

always@(*)begin
    case(status)
        5'b10000:   raaddr = {tag_ar,index_ar,4'b0000};
        5'b10001:   raaddr = {tag_ar,index_ar,4'b0100};
        5'b10010:   raaddr = {tag_ar,index_ar,4'b1000};
        5'b10011:   raaddr = {tag_ar,index_ar,4'b1100};
        default :   raaddr = 64'b0;
    endcase
end

assign ravalid = (status==5'b10000)|(status==5'b10001)|(status==5'b10010)|(status==5'b10011);

//assign rready = (read_fsm == 4'b1)|(read_fsm == 4'b10)|(read_fsm == 4'b11)|(read_fsm == 4'b100);
assign rready = 1'b1;
reg [3:0]   read_fsm;
reg [3:0]   read_fsm_next;

always@(posedge clk)begin
    if(!rst_n)begin
        read_fsm <= 4'b0;
    end
    else begin
        read_fsm <= read_fsm_next;
    end
end

always@(*)begin
    case (read_fsm)
        4'b0000:    read_fsm_next = (next_status==5'b10000)?4'b001:4'b0;
        4'b0001:    read_fsm_next = rvalid?4'b010:read_fsm;
        4'b0010:    read_fsm_next = rvalid?4'b011:read_fsm;
        4'b0011:    read_fsm_next = rvalid?4'b100:read_fsm;
        4'b0100:    read_fsm_next = rvalid?4'b000:read_fsm;
        default:    read_fsm_next = 4'b0000;
    endcase
end

reg [95:0] read_line;

always@(posedge clk)begin
    if(read_fsm_next!=read_fsm)begin
        read_line <= {rdata[31:0],read_line[95:32]};
    end
end
/*
 genvar i;
     generate
         for(i=0; i<128; i=i+1) begin:BLOCK1
             reg_62 tag_reg_0(.clk(clk), .rst_n(rst_n),.en(tag_arry_en_0),.data_in(tag_data_in),.data_out(tag_data_out_0[i]));
             reg_62 tag_reg_1(.clk(clk), .rst_n(rst_n),.en(tag_arry_en_1),.data_in(tag_data_in),.data_out(tag_data_out_1[i]));
        end
     endgenerate
*/


reg [54:0 ] tag_a_o1;
always@(posedge clk)begin
    if(!rst_n)begin
        tag_a_o1 <= 55'b0;
    end
    else begin
        tag_a_o1 <= tag_arry_data_out_1;

    end

end

assign hit0     = (tag_arry_data_out_0[52:0]==tag_a)&tag_arry_data_out_0[53];
assign hit1     = (tag_arry_data_out_1[52:0]==tag_a)&tag_arry_data_out_1[53];
assign hit      = hit0|hit1;
assign miss = !((hit1)|(hit0));
assign dirty    = miss&((random?tag_arry_data_out_1[54]:tag_arry_data_out_0[54]));

wire [6:0]tag_arry_addr;
wire [54:0]   tag_arry_data_in;
wire tag_arry_en;
wire [54:0] tag_arry_data_out_hit;
assign  tag_arry_data_out_hit = hit1?tag_arry_data_out_1:tag_arry_data_out_0;
wire [54:0] tag_arry_data_out_miss;
assign  tag_arry_data_out_miss = random?tag_arry_data_out_1:tag_arry_data_out_0;

assign tag_arry_addr = (status==5'b0)?index_a:index_ar;

 wire tag_arry_sel;

assign tag_arry_sel = hit?hit1:random;

assign tag_arry_en =((status==5'b0)&write&&hit)|((write_fsm==4'b0100)&wready)|((read_fsm==4'b0100)&rvalid);
assign tag_arry_data_in =((status==5'b0)&write)?{1'b1,tag_arry_data_out_hit[53:0]}:((write_fsm==4'b0100))?{1'b0,tag_arry_data_out_miss[53:0]}:(read_fsm==4'b0100)?{2'b01,tag_ar}:55'b0;

wire [54:0]tag_arry_data_out_0;
wire [54:0]tag_arry_data_out_1;
ysyx_22050518_tag_arry tag_arry_0(.clk(clk),.rst_n(rst_n),.en(tag_arry_en&!tag_arry_sel),.addr(tag_arry_addr),.data_in(tag_arry_data_in),.data_out(tag_arry_data_out_0));
ysyx_22050518_tag_arry tag_arry_1(
 .clk(clk)
,.rst_n(rst_n)
,.en(tag_arry_en&tag_arry_sel)
,.addr(tag_arry_addr)
,.data_in(tag_arry_data_in)
,.data_out(tag_arry_data_out_1));

wire [127:0]    Q[3:0];

wire    [3:0] CEN;
wire    [3:0] WEN;
wire    [5:0] A [3:0];
wire    [127:0] D[3:0];

wire           cache_cen;
wire           cache_wen;
wire [7:0]     cache_addr;
reg [127:0]    cache_out;
wire [127:0]   cache_in;
reg [3:0]      cache_sel;
wire [127:0]    cache_bwen;
/*
S011HD1P_X32Y2D128_BW cache0(.Q(Q[0]),.CLK(clk),.CEN(cache_cen),.WEN(cache_wen|cache_sel[0]),.BWEN(~cache_bwen),.A(cache_addr[5:0]),.D(cache_in));
S011HD1P_X32Y2D128_BW cache1(.Q(Q[1]),.CLK(clk),.CEN(cache_cen),.WEN(cache_wen|cache_sel[1]),.BWEN(~cache_bwen),.A(cache_addr[5:0]),.D(cache_in));
S011HD1P_X32Y2D128_BW cache2(.Q(Q[2]),.CLK(clk),.CEN(cache_cen),.WEN(cache_wen|cache_sel[2]),.BWEN(~cache_bwen),.A(cache_addr[5:0]),.D(cache_in));
S011HD1P_X32Y2D128_BW cache3(.Q(Q[3]),.CLK(clk),.CEN(cache_cen),.WEN(cache_wen|cache_sel[3]),.BWEN(~cache_bwen),.A(cache_addr[5:0]),.D(cache_in));
*/
assign io_sram0_addr = cache_addr[5:0];
assign io_sram0_cen  = cache_cen;
assign io_sram0_wen  = cache_wen|cache_sel[0];
assign io_sram0_wmask= ~cache_bwen;
assign io_sram0_wdata= cache_in;

assign io_sram1_addr = cache_addr[5:0];
assign io_sram1_cen  = cache_cen;
assign io_sram1_wen  = cache_wen|cache_sel[1];
assign io_sram1_wmask= ~cache_bwen;
assign io_sram1_wdata= cache_in;

assign io_sram2_addr = cache_addr[5:0];
assign io_sram2_cen  = cache_cen;
assign io_sram2_wen  = cache_wen|cache_sel[2];
assign io_sram2_wmask= ~cache_bwen;
assign io_sram2_wdata= cache_in;

assign io_sram3_addr = cache_addr[5:0];
assign io_sram3_cen  = cache_cen;
assign io_sram3_wen  = cache_wen|cache_sel[3];
assign io_sram3_wmask= ~cache_bwen;
assign io_sram3_wdata= cache_in;



reg [1:0]cache_addr_r;
always@(posedge clk)begin
    if(!rst_n)begin
        cache_addr_r <= 2'b0;
    end
    else begin
        cache_addr_r <= cache_addr[7:6];
    end

end

always@(*)begin
    case (cache_addr_r)
        2'b00:  begin   cache_out = io_sram0_rdata;    end
        2'b01:  begin   cache_out = io_sram1_rdata;    end
        2'b10:  begin   cache_out = io_sram2_rdata;    end
        2'b11:  begin   cache_out = io_sram3_rdata;    end
        default: cache_out = 128'b0;
    endcase
end
always@(*)begin
    case (cache_addr[7:6])
        2'b00:  begin     cache_sel = 4'b1110; end
        2'b01:  begin     cache_sel = 4'b1101; end
        2'b10:  begin     cache_sel = 4'b1011; end
        2'b11:  begin     cache_sel = 4'b0111; end
    endcase
end


assign cache_addr = (status==5'b0)?(hit?{hit1,index_a}:{random,index_a}):(hit?{hit1,index_ar}:{random,index_ar});
assign cache_cen = 1'b0;
assign cache_wen = !(((status==5'b0)&write&hit)|((read_fsm==4'b100)&rvalid));
assign cache_in = ((status==5'b0)&write)?write_shift:((read_fsm==4'b100)&rvalid)?{rdata,read_line}:128'b0;
assign cache_bwen = ((status==5'b0)&write)?cache_write_bwen:128'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF;
reg [127:0] cache_write_bwen ;

reg [127:0] mask;

always@(*)begin
    case(write_len)
        2'b00:  mask = 128'hff;
        2'b01:  mask = 128'hffff;
        2'b10:  mask = 128'hffffffff;
        2'b11:  mask = 128'hffffffffffffffff;
    endcase
end

always@(*)begin
    case (addr[3:0])
        4'b0000 : cache_write_bwen = mask ;
        4'b0001 : cache_write_bwen = mask << 8;
        4'b0010 : cache_write_bwen = mask << 16;
        4'b0011 : cache_write_bwen = mask << 24;
        4'b0100 : cache_write_bwen = mask << 32;
        4'b0101 : cache_write_bwen = mask << 40;
        4'b0110 : cache_write_bwen = mask << 48;
        4'b0111 : cache_write_bwen = mask << 56;
        4'b1000 : cache_write_bwen = mask << 64;
        4'b1001 : cache_write_bwen = mask << 72;
        4'b1010 : cache_write_bwen = mask << 80;
        4'b1011 : cache_write_bwen = mask << 88;
        4'b1100 : cache_write_bwen = mask << 96;
        4'b1101 : cache_write_bwen = mask << 104;
        4'b1110 : cache_write_bwen = mask << 112;
        4'b1111 : cache_write_bwen = mask << 120;
    endcase 
end


assign valid =  (status ==5'b0)&hit;
 

reg [63:0]      read_shift; 

reg [3:0]   addr_r;
always@(posedge clk)begin
    if(!rst_n)begin
        addr_r<=4'b0;


    end
    else begin
        addr_r <= addr[3:0];
    end
end

always@(*)begin
    case (addr_r)
        4'b0000 : read_shift = cache_out[63:0];
        4'b0001 : read_shift = cache_out[71:8];
        4'b0010 : read_shift = cache_out[79:16];
        4'b0011 : read_shift = cache_out[87:24];
        4'b0100 : read_shift = cache_out[95:32];
        4'b0101 : read_shift = cache_out[103:40];
        4'b0110 : read_shift = cache_out[111:48];
        4'b0111 : read_shift = cache_out[119:56];
        4'b1000 : read_shift = cache_out[127:64];
        4'b1001 : read_shift = {8'b0,cache_out[127:72]};
        4'b1010 : read_shift = {16'b0,cache_out[127:80]};
        4'b1011 : read_shift = {24'b0,cache_out[127:88]};
        4'b1100 : read_shift = {32'b0,cache_out[127:96]};
        4'b1101 : read_shift = {40'b0,cache_out[127:104]};
        4'b1110 : read_shift = {48'b0,cache_out[127:112]};
        4'b1111 : read_shift = {56'b0,cache_out[127:120]};
        default: read_shift = 64'b0;
    endcase 
end
 
 assign data = read_shift;

reg [127:0] write_shift;
always@(*)begin
    case (addr[3:0])
        4'b0000 : write_shift = {64'b0,data_in} ;
        4'b0001 : write_shift = {56'b0,data_in[63:0],8'b0 };
        4'b0010 : write_shift = {48'b0,data_in[63:0],16'b0 };
        4'b0011 : write_shift = {40'b0,data_in[63:0],24'b0 };
        4'b0100 : write_shift = {32'b0,data_in[63:0],32'b0 };
        4'b0101 : write_shift = {24'b0,data_in[63:0],40'b0 };
        4'b0110 : write_shift = {16'b0,data_in[63:0],48'b0 };
        4'b0111 : write_shift = {8'b0,data_in[63:0],56'b0 };
        4'b1000 : write_shift = {data_in[63:0],64'b0 };
        4'b1001 : write_shift = {data_in[55:0],72'b0 };
        4'b1010 : write_shift = {data_in[47:0],80'b0 };
        4'b1011 : write_shift = {data_in[39:0],88'b0 };
        4'b1100 : write_shift = {data_in[31:0],96'b0 };
        4'b1101 : write_shift = {data_in[23:0],104'b0 };
        4'b1110 : write_shift = {data_in[15:0],112'b0 };
        4'b1111 : write_shift = {data_in[7:0],120'b0 };
        default : write_shift = 128'b0;
    endcase 
end

    always@(*)begin
        case(write_fsm)
            4'b0001: wdata = cache_out[31:0];
            4'b0010: wdata = cache_out[63:32];
            4'b0011: wdata = cache_out[95:64];
            4'b0100: wdata = cache_out[127:96];
            default : wdata = 32'b0;
        endcase 
    end
 
endmodule
