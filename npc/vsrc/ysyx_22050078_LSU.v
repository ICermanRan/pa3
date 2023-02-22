`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"
module ysyx_22050078_LSU(
  input                       clk,
  input                       rst_n,

  //from IDU
  input [`LSU_OPT_WIDTH-1:0]  i_opt,  //lsu i_opt
  
  //from EXU
  input [`CPU_WIDTH-1:0]      i_addr,// mem i_addr. from exu result.

  //from regfile src2
  input [`CPU_WIDTH-1:0]      i_regst,//for st

  //to WBU-lsu_res
  output reg [`CPU_WIDTH-1:0] o_regld //for ld
);

  wire ren = ~i_opt[0];
  wire [`CPU_WIDTH-1:0] raddr = i_addr;
  wire [`CPU_WIDTH-1:0] rdata;

  always @(*) begin
    case(i_opt)
      `LSU_LB: o_regld = {{56{rdata[ 7]}}, rdata[7:0]};
      `LSU_LH: o_regld = {{48{rdata[15]}}, rdata[15:0]};
      `LSU_LW: o_regld = {{32{rdata[31]}}, rdata[31:0]};
      `LSU_LD: o_regld = rdata;
      `LSU_LBU:o_regld = {56'b0, rdata[7:0]};
      `LSU_LHU:o_regld = {48'b0, rdata[15:0]};
      `LSU_LWU:o_regld = {32'b0, rdata[31:0]};
      default: o_regld = 64'b0;
    endcase
  end

  reg [7:0] mask, wmask;
  wire [`CPU_WIDTH-1:0] waddr, wdata;
  always @(*) begin
    case(i_opt)
      `LSU_SB:  mask = 8'b0000_0001;
      `LSU_SH:  mask = 8'b0000_0011;
      `LSU_SW:  mask = 8'b0000_1111;
      `LSU_SD:  mask = 8'b1111_1111;
      default:  mask = 8'b0;
    endcase
    
  end

  // Due to comb logic delay, there must use an reg!!
  // Think about this situation: if waddr and wdata is not ready, but write it to mem immediately. it's wrong! 

  stdreg #(
    .WIDTH     (2*`CPU_WIDTH + 8),
    .RESET_VAL (0)
  ) u_stdreg(
    .clk  (clk),
    .rst_n(rst_n),
    .i_wen(1),
    .i_din({i_addr,i_regst,mask}),
    .o_dout({waddr, wdata, wmask})
  );


  //for sim:  ////////////////////////////////////////////////////////////////////////////////////////////

  import "DPI-C" function void rtl_lsu_pmem_read(input longint raddr, output longint rdata, input bit ren);
  import "DPI-C" function void rtl_pmem_write(input longint waddr, input longint wdata, input byte wmask);

  always @(*) begin
    rtl_lsu_pmem_read(raddr, rdata, ren);
    rtl_pmem_write(waddr, wdata, wmask);    
  end

endmodule
