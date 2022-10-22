module encode83(
	input [7:0] data_in,
	input en,

	output reg Ys,//指示信号
	output reg [3:0] data_out
);

	always@(en or data_in) begin
		if(!en)
			begin
				data_out <= 4'b0000;
				Ys <= 1'b0;
			end
		else
			begin
				casex (data_in)
					8'b1???_???? : begin data_out <= 4'b0111; Ys <= 1'b1; end
				  8'b01??_???? : begin data_out <= 4'b0110; Ys <= 1'b1; end
					8'b001?_???? : begin data_out <= 4'b0101; Ys <= 1'b1; end 
					8'b0001_???? : begin data_out <= 4'b0100; Ys <= 1'b1; end
					8'b0000_1??? : begin data_out <= 4'b0011; Ys <= 1'b1; end
					8'b0000_01?? : begin data_out <= 4'b0010; Ys <= 1'b1; end
					8'b0000_001? : begin data_out <= 4'b0001; Ys <= 1'b1; end
					8'b0000_0001 : begin data_out <= 4'b0000; Ys <= 1'b1; end
					8'b0000_0000 : begin data_out <= 4'b1111; Ys <= 1'b0; end //此时8个输入全为0,seg全灭
					//default:       begin data_out <= 4'b1000; Ys <= 1'b1; ;
				endcase
			end
	end

endmodule









