module stdrst(
  input  clk,
  input  rst_n,
  output wire o_rst_n_sync
);

<<<<<<< HEAD
  reg rst_n_r1, rst_n_r2;

  always @(posedge clk) begin
    if(!rst_n) 
      begin
        rst_n_r1 <= 1'b0;
        rst_n_r2 <= 1'b0;
      end
    else
      begin
        rst_n_r1 <= 1'b1;
        rst_n_r2 <= rst_n_r1;
      end
  end

  assign o_rst_n_sync = rst_n_r2;
=======
  // reg rst_n_r1, rst_n_r2;

  // always @(posedge clk) begin
  //   if(!rst_n) 
  //     begin
  //       rst_n_r1 <= 1'b0;
  //       rst_n_r2 <= 1'b0;
  //     end
  //   else
  //     begin
  //       rst_n_r1 <= 1'b1;
  //       rst_n_r2 <= rst_n_r1;
  //     end
  // end

  // assign o_rst_n_sync = rst_n_r2;
  assign o_rst_n_sync = rst_n;
>>>>>>> test


endmodule
