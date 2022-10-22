module shift_register(
    input [7:0] din,
    input rst,
    input clk,
    output reg [7:0] dout
 );
    reg [7:0] trans;
    wire trans_8;
    
    assign trans_8 = {dout[4] ^ dout[3] ^ dout[2] ^ dout[0]};
    
    always@(clk or din or trans) begin
        if(din == 8'h00)
            trans = din + 1'b1;
        else
            trans = din;
            dout = trans;
     end
    
    always@(posedge clk) begin
        if(!rst)
            dout <= 8'd0;  
        else
            dout <= {trans_8 , dout[7:1]};
     end
 
 
 
 
endmodule
