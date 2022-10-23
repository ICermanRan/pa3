module register2seg(
    input  [7:0] num,
    output reg [7:0] seg_high,
    output reg [7:0] seg_low
 );
 
    reg [3:0] high_data;
    reg [3:0] low_data;
    
    always@(num) begin
        high_data = num[7:4];
        low_data  = num[3:0];
     end
     
    always@(num) begin
        case(high_data)
            4'b0000: begin seg_high = 8'b1000_0001; end //数字0
            4'b0001: begin seg_high = 8'b1100_1111; end //数字1
            4'b0010: begin seg_high = 8'b1001_0010; end //数字2
            4'b0011: begin seg_high = 8'b1000_0110; end //数字3
            4'b0100: begin seg_high = 8'b1100_1100; end //数字4
            4'b0101: begin seg_high = 8'b1010_0100; end //数字5
            4'b0110: begin seg_high = 8'b1010_0000; end //数字6
            4'b0111: begin seg_high = 8'b1000_1111; end //数字7
            4'b1000: begin seg_high = 8'b1000_0000; end //数字8
            4'b1001: begin seg_high = 8'b1000_0100; end //数字9
            4'b1010: begin seg_high = 8'b1000_1000; end //A=10
            4'b1011: begin seg_high = 8'b1110_0000; end //B=11
            4'b1101: begin seg_high = 8'b1011_0000; end //C=12
            4'b1101: begin seg_high = 8'b1100_0010; end //D=13
            4'b1110: begin seg_high = 8'b1011_0000; end //E=14
            4'b1111: begin seg_high = 8'b1011_1000; end //F=15
						default: begin seg_high = 8'b1111_1111; end //靠
        endcase
     end
     
     
    always@(num) begin
        case(low_data)
            4'b0000: begin seg_low = 8'b1000_0001; end //数字0
            4'b0001: begin seg_low = 8'b1100_1111; end //数字1
            4'b0010: begin seg_low = 8'b1001_0010; end //数字2
            4'b0011: begin seg_low = 8'b1000_0110; end //数字3
            4'b0100: begin seg_low = 8'b1100_1100; end //数字4
            4'b0101: begin seg_low = 8'b1010_0100; end //数字5
            4'b0110: begin seg_low = 8'b1010_0000; end //数字6
            4'b0111: begin seg_low = 8'b1000_1111; end //数字7
            4'b1000: begin seg_low = 8'b1000_0000; end //数字8
            4'b1001: begin seg_low = 8'b1000_0100; end //数字9
            4'b1010: begin seg_low = 8'b1000_1000; end //A=10
            4'b1011: begin seg_low = 8'b1110_0000; end //B=11
            4'b1101: begin seg_low = 8'b1011_0000; end //C=12
            4'b1101: begin seg_low = 8'b1100_0010; end //D=13
            4'b1110: begin seg_low = 8'b1011_0000; end //E=14
            4'b1111: begin seg_low = 8'b1011_1000; end //F=15 
             default: begin seg_high = 8'b1111_1111; end //靠
        endcase
     end

endmodule           
