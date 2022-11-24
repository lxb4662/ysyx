//shift.v
module shift(
    input [63:0]        in0,
    input [63:0]        in1,

    output reg [63:0]       logic_r,
    output reg [63:0]       logic_l,
    output reg [63:0]       arithmetic_r,
    output reg [63:0]       arithmetic_wr
    


);

wire [5:0]  shamt;

assign shamt = in1[5:0];

always@(*)begin
    case(shamt)
        6'd0:logic_r = {{0{1'b0}},in0[63:0]};
        6'd1:logic_r = {{1{1'b0}},in0[63:1]};
        6'd2:logic_r = {{2{1'b0}},in0[63:2]};
        6'd3:logic_r = {{3{1'b0}},in0[63:3]};
        6'd4:logic_r = {{4{1'b0}},in0[63:4]};
        6'd5:logic_r = {{5{1'b0}},in0[63:5]};
        6'd6:logic_r = {{6{1'b0}},in0[63:6]};
        6'd7:logic_r = {{7{1'b0}},in0[63:7]};
        6'd8:logic_r = {{8{1'b0}},in0[63:8]};
        6'd9:logic_r = {{9{1'b0}},in0[63:9]};
        6'd10:logic_r = {{10{1'b0}},in0[63:10]};
        6'd11:logic_r = {{11{1'b0}},in0[63:11]};
        6'd12:logic_r = {{12{1'b0}},in0[63:12]};
        6'd13:logic_r = {{13{1'b0}},in0[63:13]};
        6'd14:logic_r = {{14{1'b0}},in0[63:14]};
        6'd15:logic_r = {{15{1'b0}},in0[63:15]};
        6'd16:logic_r = {{16{1'b0}},in0[63:16]};
        6'd17:logic_r = {{17{1'b0}},in0[63:17]};
        6'd18:logic_r = {{18{1'b0}},in0[63:18]};
        6'd19:logic_r = {{19{1'b0}},in0[63:19]};
        6'd20:logic_r = {{20{1'b0}},in0[63:20]};
        6'd21:logic_r = {{21{1'b0}},in0[63:21]};
        6'd22:logic_r = {{22{1'b0}},in0[63:22]};
        6'd23:logic_r = {{23{1'b0}},in0[63:23]};
        6'd24:logic_r = {{24{1'b0}},in0[63:24]};
        6'd25:logic_r = {{25{1'b0}},in0[63:25]};
        6'd26:logic_r = {{26{1'b0}},in0[63:26]};
        6'd27:logic_r = {{27{1'b0}},in0[63:27]};
        6'd28:logic_r = {{28{1'b0}},in0[63:28]};
        6'd29:logic_r = {{29{1'b0}},in0[63:29]};
        6'd30:logic_r = {{30{1'b0}},in0[63:30]};
        6'd31:logic_r = {{31{1'b0}},in0[63:31]};
        6'd32:logic_r = {{32{1'b0}},in0[63:32]};
        6'd33:logic_r = {{33{1'b0}},in0[63:33]};
        6'd34:logic_r = {{34{1'b0}},in0[63:34]};
        6'd35:logic_r = {{35{1'b0}},in0[63:35]};
        6'd36:logic_r = {{36{1'b0}},in0[63:36]};
        6'd37:logic_r = {{37{1'b0}},in0[63:37]};
        6'd38:logic_r = {{38{1'b0}},in0[63:38]};
        6'd39:logic_r = {{39{1'b0}},in0[63:39]};
        6'd40:logic_r = {{40{1'b0}},in0[63:40]};
        6'd41:logic_r = {{41{1'b0}},in0[63:41]};
        6'd42:logic_r = {{42{1'b0}},in0[63:42]};
        6'd43:logic_r = {{43{1'b0}},in0[63:43]};
        6'd44:logic_r = {{44{1'b0}},in0[63:44]};
        6'd45:logic_r = {{45{1'b0}},in0[63:45]};
        6'd46:logic_r = {{46{1'b0}},in0[63:46]};
        6'd47:logic_r = {{47{1'b0}},in0[63:47]};
        6'd48:logic_r = {{48{1'b0}},in0[63:48]};
        6'd49:logic_r = {{49{1'b0}},in0[63:49]};
        6'd50:logic_r = {{50{1'b0}},in0[63:50]};
        6'd51:logic_r = {{51{1'b0}},in0[63:51]};
        6'd52:logic_r = {{52{1'b0}},in0[63:52]};
        6'd53:logic_r = {{53{1'b0}},in0[63:53]};
        6'd54:logic_r = {{54{1'b0}},in0[63:54]};
        6'd55:logic_r = {{55{1'b0}},in0[63:55]};
        6'd56:logic_r = {{56{1'b0}},in0[63:56]};
        6'd57:logic_r = {{57{1'b0}},in0[63:57]};
        6'd58:logic_r = {{58{1'b0}},in0[63:58]};
        6'd59:logic_r = {{59{1'b0}},in0[63:59]};
        6'd60:logic_r = {{60{1'b0}},in0[63:60]};
        6'd61:logic_r = {{61{1'b0}},in0[63:61]};
        6'd62:logic_r = {{62{1'b0}},in0[63:62]};
        6'd63:logic_r = {{63{1'b0}},in0[63:63]};
    endcase
end


always@(*)begin
    case(shamt)
        6'd0:logic_l = {in0[63:0],{0{1'b0}}};
        6'd1:logic_l = {in0[62:0],{1{1'b0}}};
        6'd2:logic_l = {in0[61:0],{2{1'b0}}};
        6'd3:logic_l = {in0[60:0],{3{1'b0}}};
        6'd4:logic_l = {in0[59:0],{4{1'b0}}};
        6'd5:logic_l = {in0[58:0],{5{1'b0}}};
        6'd6:logic_l = {in0[57:0],{6{1'b0}}};
        6'd7:logic_l = {in0[56:0],{7{1'b0}}};
        6'd8:logic_l = {in0[55:0],{8{1'b0}}};
        6'd9:logic_l = {in0[54:0],{9{1'b0}}};
        6'd10:logic_l = {in0[53:0],{10{1'b0}}};
        6'd11:logic_l = {in0[52:0],{11{1'b0}}};
        6'd12:logic_l = {in0[51:0],{12{1'b0}}};
        6'd13:logic_l = {in0[50:0],{13{1'b0}}};
        6'd14:logic_l = {in0[49:0],{14{1'b0}}};
        6'd15:logic_l = {in0[48:0],{15{1'b0}}};
        6'd16:logic_l = {in0[47:0],{16{1'b0}}};
        6'd17:logic_l = {in0[46:0],{17{1'b0}}};
        6'd18:logic_l = {in0[45:0],{18{1'b0}}};
        6'd19:logic_l = {in0[44:0],{19{1'b0}}};
        6'd20:logic_l = {in0[43:0],{20{1'b0}}};
        6'd21:logic_l = {in0[42:0],{21{1'b0}}};
        6'd22:logic_l = {in0[41:0],{22{1'b0}}};
        6'd23:logic_l = {in0[40:0],{23{1'b0}}};
        6'd24:logic_l = {in0[39:0],{24{1'b0}}};
        6'd25:logic_l = {in0[38:0],{25{1'b0}}};
        6'd26:logic_l = {in0[37:0],{26{1'b0}}};
        6'd27:logic_l = {in0[36:0],{27{1'b0}}};
        6'd28:logic_l = {in0[35:0],{28{1'b0}}};
        6'd29:logic_l = {in0[34:0],{29{1'b0}}};
        6'd30:logic_l = {in0[33:0],{30{1'b0}}};
        6'd31:logic_l = {in0[32:0],{31{1'b0}}};
        6'd32:logic_l = {in0[31:0],{32{1'b0}}};
        6'd33:logic_l = {in0[30:0],{33{1'b0}}};
        6'd34:logic_l = {in0[29:0],{34{1'b0}}};
        6'd35:logic_l = {in0[28:0],{35{1'b0}}};
        6'd36:logic_l = {in0[27:0],{36{1'b0}}};
        6'd37:logic_l = {in0[26:0],{37{1'b0}}};
        6'd38:logic_l = {in0[25:0],{38{1'b0}}};
        6'd39:logic_l = {in0[24:0],{39{1'b0}}};
        6'd40:logic_l = {in0[23:0],{40{1'b0}}};
        6'd41:logic_l = {in0[22:0],{41{1'b0}}};
        6'd42:logic_l = {in0[21:0],{42{1'b0}}};
        6'd43:logic_l = {in0[20:0],{43{1'b0}}};
        6'd44:logic_l = {in0[19:0],{44{1'b0}}};
        6'd45:logic_l = {in0[18:0],{45{1'b0}}};
        6'd46:logic_l = {in0[17:0],{46{1'b0}}};
        6'd47:logic_l = {in0[16:0],{47{1'b0}}};
        6'd48:logic_l = {in0[15:0],{48{1'b0}}};
        6'd49:logic_l = {in0[14:0],{49{1'b0}}};
        6'd50:logic_l = {in0[13:0],{50{1'b0}}};
        6'd51:logic_l = {in0[12:0],{51{1'b0}}};
        6'd52:logic_l = {in0[11:0],{52{1'b0}}};
        6'd53:logic_l = {in0[10:0],{53{1'b0}}};
        6'd54:logic_l = {in0[9:0],{54{1'b0}}};
        6'd55:logic_l = {in0[8:0],{55{1'b0}}};
        6'd56:logic_l = {in0[7:0],{56{1'b0}}};
        6'd57:logic_l = {in0[6:0],{57{1'b0}}};
        6'd58:logic_l = {in0[5:0],{58{1'b0}}};
        6'd59:logic_l = {in0[4:0],{59{1'b0}}};
        6'd60:logic_l = {in0[3:0],{60{1'b0}}};
        6'd61:logic_l = {in0[2:0],{61{1'b0}}};
        6'd62:logic_l = {in0[1:0],{62{1'b0}}};
        6'd63:logic_l = {in0[0:0],{63{1'b0}}};
    endcase
end

always@(*)begin
    case(shamt)
        6'd0:arithmetic_r = {{0{in0[63]}},in0[63:0]};
        6'd1:arithmetic_r = {{1{in0[63]}},in0[63:1]};
        6'd2:arithmetic_r = {{2{in0[63]}},in0[63:2]};
        6'd3:arithmetic_r = {{3{in0[63]}},in0[63:3]};
        6'd4:arithmetic_r = {{4{in0[63]}},in0[63:4]};
        6'd5:arithmetic_r = {{5{in0[63]}},in0[63:5]};
        6'd6:arithmetic_r = {{6{in0[63]}},in0[63:6]};
        6'd7:arithmetic_r = {{7{in0[63]}},in0[63:7]};
        6'd8:arithmetic_r = {{8{in0[63]}},in0[63:8]};
        6'd9:arithmetic_r = {{9{in0[63]}},in0[63:9]};
        6'd10:arithmetic_r = {{10{in0[63]}},in0[63:10]};
        6'd11:arithmetic_r = {{11{in0[63]}},in0[63:11]};
        6'd12:arithmetic_r = {{12{in0[63]}},in0[63:12]};
        6'd13:arithmetic_r = {{13{in0[63]}},in0[63:13]};
        6'd14:arithmetic_r = {{14{in0[63]}},in0[63:14]};
        6'd15:arithmetic_r = {{15{in0[63]}},in0[63:15]};
        6'd16:arithmetic_r = {{16{in0[63]}},in0[63:16]};
        6'd17:arithmetic_r = {{17{in0[63]}},in0[63:17]};
        6'd18:arithmetic_r = {{18{in0[63]}},in0[63:18]};
        6'd19:arithmetic_r = {{19{in0[63]}},in0[63:19]};
        6'd20:arithmetic_r = {{20{in0[63]}},in0[63:20]};
        6'd21:arithmetic_r = {{21{in0[63]}},in0[63:21]};
        6'd22:arithmetic_r = {{22{in0[63]}},in0[63:22]};
        6'd23:arithmetic_r = {{23{in0[63]}},in0[63:23]};
        6'd24:arithmetic_r = {{24{in0[63]}},in0[63:24]};
        6'd25:arithmetic_r = {{25{in0[63]}},in0[63:25]};
        6'd26:arithmetic_r = {{26{in0[63]}},in0[63:26]};
        6'd27:arithmetic_r = {{27{in0[63]}},in0[63:27]};
        6'd28:arithmetic_r = {{28{in0[63]}},in0[63:28]};
        6'd29:arithmetic_r = {{29{in0[63]}},in0[63:29]};
        6'd30:arithmetic_r = {{30{in0[63]}},in0[63:30]};
        6'd31:arithmetic_r = {{31{in0[63]}},in0[63:31]};
        6'd32:arithmetic_r = {{32{in0[63]}},in0[63:32]};
        6'd33:arithmetic_r = {{33{in0[63]}},in0[63:33]};
        6'd34:arithmetic_r = {{34{in0[63]}},in0[63:34]};
        6'd35:arithmetic_r = {{35{in0[63]}},in0[63:35]};
        6'd36:arithmetic_r = {{36{in0[63]}},in0[63:36]};
        6'd37:arithmetic_r = {{37{in0[63]}},in0[63:37]};
        6'd38:arithmetic_r = {{38{in0[63]}},in0[63:38]};
        6'd39:arithmetic_r = {{39{in0[63]}},in0[63:39]};
        6'd40:arithmetic_r = {{40{in0[63]}},in0[63:40]};
        6'd41:arithmetic_r = {{41{in0[63]}},in0[63:41]};
        6'd42:arithmetic_r = {{42{in0[63]}},in0[63:42]};
        6'd43:arithmetic_r = {{43{in0[63]}},in0[63:43]};
        6'd44:arithmetic_r = {{44{in0[63]}},in0[63:44]};
        6'd45:arithmetic_r = {{45{in0[63]}},in0[63:45]};
        6'd46:arithmetic_r = {{46{in0[63]}},in0[63:46]};
        6'd47:arithmetic_r = {{47{in0[63]}},in0[63:47]};
        6'd48:arithmetic_r = {{48{in0[63]}},in0[63:48]};
        6'd49:arithmetic_r = {{49{in0[63]}},in0[63:49]};
        6'd50:arithmetic_r = {{50{in0[63]}},in0[63:50]};
        6'd51:arithmetic_r = {{51{in0[63]}},in0[63:51]};
        6'd52:arithmetic_r = {{52{in0[63]}},in0[63:52]};
        6'd53:arithmetic_r = {{53{in0[63]}},in0[63:53]};
        6'd54:arithmetic_r = {{54{in0[63]}},in0[63:54]};
        6'd55:arithmetic_r = {{55{in0[63]}},in0[63:55]};
        6'd56:arithmetic_r = {{56{in0[63]}},in0[63:56]};
        6'd57:arithmetic_r = {{57{in0[63]}},in0[63:57]};
        6'd58:arithmetic_r = {{58{in0[63]}},in0[63:58]};
        6'd59:arithmetic_r = {{59{in0[63]}},in0[63:59]};
        6'd60:arithmetic_r = {{60{in0[63]}},in0[63:60]};
        6'd61:arithmetic_r = {{61{in0[63]}},in0[63:61]};
        6'd62:arithmetic_r = {{62{in0[63]}},in0[63:62]};
        6'd63:arithmetic_r = {{63{in0[63]}},in0[63:63]};
    endcase
end
always@(*)begin
    case(shamt)
        6'd0:arithmetic_wr = {{32{in0[31]}},in0[31:0]};
        6'd1:arithmetic_wr = {{33{in0[31]}},in0[31:1]};
        6'd2:arithmetic_wr = {{34{in0[31]}},in0[31:2]};
        6'd3:arithmetic_wr = {{35{in0[31]}},in0[31:3]};
        6'd4:arithmetic_wr = {{36{in0[31]}},in0[31:4]};
        6'd5:arithmetic_wr = {{37{in0[31]}},in0[31:5]};
        6'd6:arithmetic_wr = {{38{in0[31]}},in0[31:6]};
        6'd7:arithmetic_wr = {{39{in0[31]}},in0[31:7]};
        6'd8:arithmetic_wr = {{40{in0[31]}},in0[31:8]};
        6'd9:arithmetic_wr = {{41{in0[31]}},in0[31:9]};
        6'd10:arithmetic_wr = {{42{in0[31]}},in0[31:10]};
        6'd11:arithmetic_wr = {{43{in0[31]}},in0[31:11]};
        6'd12:arithmetic_wr = {{44{in0[31]}},in0[31:12]};
        6'd13:arithmetic_wr = {{45{in0[31]}},in0[31:13]};
        6'd14:arithmetic_wr = {{46{in0[31]}},in0[31:14]};
        6'd15:arithmetic_wr = {{47{in0[31]}},in0[31:15]};
        6'd16:arithmetic_wr = {{48{in0[31]}},in0[31:16]};
        6'd17:arithmetic_wr = {{49{in0[31]}},in0[31:17]};
        6'd18:arithmetic_wr = {{50{in0[31]}},in0[31:18]};
        6'd19:arithmetic_wr = {{51{in0[31]}},in0[31:19]};
        6'd20:arithmetic_wr = {{52{in0[31]}},in0[31:20]};
        6'd21:arithmetic_wr = {{53{in0[31]}},in0[31:21]};
        6'd22:arithmetic_wr = {{54{in0[31]}},in0[31:22]};
        6'd23:arithmetic_wr = {{55{in0[31]}},in0[31:23]};
        6'd24:arithmetic_wr = {{56{in0[31]}},in0[31:24]};
        6'd25:arithmetic_wr = {{57{in0[31]}},in0[31:25]};
        6'd26:arithmetic_wr = {{58{in0[31]}},in0[31:26]};
        6'd27:arithmetic_wr = {{59{in0[31]}},in0[31:27]};
        6'd28:arithmetic_wr = {{60{in0[31]}},in0[31:28]};
        6'd29:arithmetic_wr = {{61{in0[31]}},in0[31:29]};
        6'd30:arithmetic_wr = {{62{in0[31]}},in0[31:30]};
        6'd31:arithmetic_wr = {{63{in0[31]}},in0[31:31]};
        default: arithmetic_wr = 64'b0;
    endcase
end

endmodule 
