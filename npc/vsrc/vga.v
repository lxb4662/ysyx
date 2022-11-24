module pri(
    input           clk,
    input           rst_n,
    
    input [63:0]            araddr,
    input                   arvalid,
    output                  arready,
    input [3:0]             arid,
    input [1:0]             arbrust,
    input [7:0]             arlen,
    input [2:0]             arsize,

    output [31:0]           rdata,
    output                  rvalid,
    input                   ready,
    output [3:0]            rid,
    output                  rlast,
    output [1:0]            rresp,

    input [63:0]            awaddr,
    input                   awvalid,
    output                  awready,
    input [3:0]             awid,
    input [1:0]             awbrust,
    input [7:0]             awlen,
    input [2:0]             awsize,

    input [31:0]            wdata,
    input                   wvalid,
    output                  wready,
    input                   wlast,
    input [3:0]             wstrb,

    input                   bready,
    output                  bvalid,
    output [3:0]            bresp,
    output [3:0]            bid
);

reg [4:0]   ar_fsm;
reg [4:0]   ar_fsm_next;


always@(*)begin
    case(ar_fsm)
        5'b00000: ar_fsm_next = arvalid ?5'b00001:ar_fsm;
        5'b00001: ar_fsm_next = 5'b0;
    endcase
end

always@(posedge clk)
    if(!rst_n)begin
        ar_fsm <= 5'b0;
    end
    else begin
        ar_fsm <= ar_fsm_next;
    end

assign arready = (ar_fsm==5'b00000);

endmodule