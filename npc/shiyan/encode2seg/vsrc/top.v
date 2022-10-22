module top(
	input [7:0] data_in,
	input en,
	output wire [3:0] led,
	output wire [7:0] seg

);

	wire [3:0] trans;
    
  assign led[2:0] = trans[2:0];
    
	encode83 encode83_inst(
	.data_in(data_in),
	.en(en),
	.Ys(led[3]),
	.data_out(trans)
	);


	bcd7seg bcd7seg_inst(
	.num(trans),
	.seg(seg)
	);

endmodule



