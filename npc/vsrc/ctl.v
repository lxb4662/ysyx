module ctl(
    input                       clk,
    input                       rst_n,

    input                       jup,
    input [63:0]                jup_addr,
    input                       ivalid,
    input                       pipe2_allowin,
    input                       dstall,
    output reg [3:0]            stall,
    output                      jup_o,
    output reg [63:0]           jup_addr_r

);


    always@(posedge clk)begin
        if(!rst_n)begin
            jup_addr_r  <= 64'b0;
        end
        else begin
            if(jup)begin
                jup_addr_r  <= jup_addr;
            end

        end
    end

    reg [2:0]   fsm;

    assign jup_o = fsm==3'b1;
    reg [2:0]   fsm_next;

    always@(*)begin
        case(fsm)
            3'b000: fsm_next = jup?3'b001:(3'b000);
            3'b001: fsm_next = (ivalid&pipe2_allowin)?3'b000:3'b001;
            3'b010: fsm_next = (!dstall)?3'b000:3'b010;
            default: fsm_next = 3'b000;
        endcase
    end

    always@(posedge clk)begin
        if(!rst_n)begin
            fsm <= 3'b0;
        end
        else begin
            fsm <= fsm_next;
        end
    end

    always@(*)begin
        case(fsm)
            3'b0    :stall = 4'b1111;
            3'b1    :stall = 4'b1011;
            3'b10   :stall = 4'b1100;
            default:stall=4'b1111;
        endcase
    end
endmodule