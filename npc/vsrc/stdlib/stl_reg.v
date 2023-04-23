module stl_reg #(
  parameter 
  WIDTH = 1,
  RESET_VAL = 0
)(
  input                     clk   ,
  input                     rst_n ,
  input                     i_wen   ,
  input         [WIDTH-1:0] i_din   ,
  output logic  [WIDTH-1:0] o_dout
);

  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) 
      o_dout <= RESET_VAL;
    else if(i_wen) 
      o_dout <= i_din;
  end

endmodule
