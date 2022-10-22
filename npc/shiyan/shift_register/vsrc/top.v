module top(
    input [7:0] din,
    input rst,
    input clk,
    output reg [7:0] seg_high,
    output reg [7:0] seg_low
    );
    
    wire [7:0] y;
    
    shift_register shift_register_inst(
    .din(din),
    .rst(rst),
    .clk(clk),
    .dout(tdc)
    );
    
    register2seg register2seg_inst(
    .num(tdc),
    .seg_high(seg_high),
    .seg_low(seg_low)
    );
endmodule
