module bcd7seg(
  input  [3:0] num,
  output reg [7:0] seg
);

	always@(num)
		begin
				case(num)
						4'b0000:begin seg <= 8'b1000_0001;end//数字0
						4'b0001:begin seg <= 8'b1100_1111;end//数字1
						4'b0010:begin seg <= 8'b1001_0010;end//数字2
						4'b0011:begin seg <= 8'b1000_0110;end//数字3
						4'b0100:begin seg <= 8'b1100_1100;end//数字4
						4'b0101:begin seg <= 8'b1010_0100;end//数字5
						4'b0110:begin seg <= 8'b1010_0000;end//数字6
						4'b0111:begin seg <= 8'b1000_1111;end//数字7
						4'b1000:begin seg <= 8'b1000_0000;end//数字8
						4'b1001:begin seg <= 8'b1000_0100;end//数字9
						4'b1111:begin seg <= 8'b1111_1111;end//无输入，全灭
						default: $stop;
				endcase
		end
	
endmodule
