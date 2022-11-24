module mux2t1_64(
    input sel ,
    input [63:0]    in0,
    input [63:0]    in1,
    output[63:0]    out

    
);

assign out = sel ? in1:in0;


endmodule 
