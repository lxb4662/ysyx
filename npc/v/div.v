`define full_div
module ysyx_22050518_div(
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
    output [63:0]   quotient,
    output [63:0]   remainder


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
    
    ysyx_22050518_add   add0(.in1(add_in1_r[63:0]),.in2(_add_in2_r[63:0]),.c_in(1'b1),.out(add_out[63:0]),.c_out(c_out_add_0));
    ysyx_22050518_add   add1(.in1(add_in1_r[127:64]),.in2(_add_in2_r[127:64]),.c_in(c_out_add_0),.out(add_out[127:64]),.c_out());
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

    assign q_signed = div_w_r?(sign_r[0]?ans:(({{32{1'b1}},~(ans[31:0])})+64'b1)):(sign_r[0]?ans:((~ans)+64'b1));
    wire [63:0]r_signed;


    assign r_signed = div_w_r?(sign_r[1]?add_in1_r[63:0]:(({{32{1'b1}},~(add_in1_r[31:0])})+64'b1)):(sign_r[1]?add_in1_r[63:0]:((~add_in1_r[63:0])+64'b1));

    assign remainder = r_signed;
    assign quotient = q_signed;

 



endmodule
