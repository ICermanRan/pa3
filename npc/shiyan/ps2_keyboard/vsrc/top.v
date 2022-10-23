module top(
	input clk,
	input rst,
	input ps2_clk,
	input ps2_data,

	output reg overflow,
	output reg [7:0] seg_0,
  output reg [7:0] seg_1,
  output reg [7:0] seg_2,
  output reg [7:0] seg_3,
	output reg [7:0] seg_4,
	output reg [7:0] seg_5
);

	wire [7:0] trans_data;
	wire ready;


ps2_keyboard my_keyboard(
    .clk(clk),
    .rst(~rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
		.overflow(overflow),
		.data(trans_data),
		.ready(ready)
);

receive2seg my_seg(
	.data_in(trans_data),
  .ready(ready),
  .seg_0_t(seg_0),
  .seg_1_t(seg_1),
  .seg_2_t(seg_2),
  .seg_3_t(seg_3),
	.seg_4_t(seg_4),
	.seg_5_t(seg_5),
	.rst(~rst),
  .clk(clk)
);
endmodule
