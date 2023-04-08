`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"

module ysyx_22050078_npc 
#(parameter ADDR_WIDTH = 5, 
            DATA_WIDTH = 64, 
            INST_WIDTH = 32, 
            INSTADDR_WIDTH = 64, 
            PC_WIDTH = 64)
(
    input clk,
    input rst_n,
    input en

);

//1.rst: /////////////////////////////////////////////////
    wire rst_n_sync;
    stdrst u_stdrst( 
      .clk          (clk),
      .rst_n        (rst_n),
      .o_rst_n_sync (rst_n_sync)
    );

//2.cpu: /////////////////////////////////////////////////
    //PCU to IFU/EXU/PCU
    wire [`CPU_WIDTH-1:0] pc;

    //IFU to IDU
    wire [`INST_WIDTH-1:0] inst_IFU2IDU;


    //IDU to regfile
    wire [`REG_ADDRW-1:0] rs1_addr_IDU2regs;
    wire [`REG_ADDRW-1:0] rs2_addr_IDU2regs;
    wire [`REG_ADDRW-1:0] rd_addr_IDU2regs;
    wire                  rd_wen_IDU2regs ;            

    //regfile to EXU/PCU
    wire [`CPU_WIDTH-1:0] rs1_data;
    
    //regfile to EXU/LSU
    wire [`CPU_WIDTH-1:0] rs2_data;


    //IDU to EXU
    wire [`EXU_OPT_WIDTH-1:0] exu_opt_IDU2EXU;
    wire [`EXU_SEL_WIDTH-1:0] exu_src_sel_IDU2EXU;
   
    //IDU to EXU/PCU
    wire [`CPU_WIDTH-1:0] imm;
    
    //IDU to LSU/WBU
    wire [`LSU_OPT_WIDTH-1:0] lsu_opt;

    //EXU to LSU/WBU
    wire [`CPU_WIDTH-1:0] exu_res;

    //LSU to WBU
    wire [`CPU_WIDTH-1:0] lsu_res_LSU2WBU;
    
    //EXU to PCU
    wire zero_EXU2PCU;

    //IDU to PCU
    wire brch_IDU2PCU;
    wire jal_IDU2PCU;
    wire jalr_IDU2PCU;

    //WBU to regfile
    wire [`CPU_WIDTH-1:0] rd_data_WBU2regs;

    //use for sim
    wire a0zero;
    wire [2:0] s_id_err;

    ysyx_22050078_regfile u_regfile(
      .clk      (clk              ),
      .i_wen    (rd_wen_IDU2regs  ),
      .i_waddr  (rd_addr_IDU2regs ),
      .i_wdata  (rd_data_WBU2regs ),
      .i_rs1_addr (rs1_addr_IDU2regs),
      .i_rs2_addr (rs2_addr_IDU2regs),
      .o_rs1_data (rs1_data),
      .o_rs2_data (rs2_data),
      .s_a0zero (a0zero )
    );

    ysyx_22050078_IFU u_IFU(
      .en       (en               ),
      .clk      (clk              ),
      .i_pc     (pc               ), //PCU to IFU
      .rst_n    (rst_n_sync       ),     
      .inst_out (inst_IFU2IDU     )               
    );

    ysyx_22050078_IDU u_IDU(
      .inst_in  (inst_IFU2IDU      ),
      .o_rd_addr(rd_addr_IDU2regs  ),
      .o_rs1_addr(rs1_addr_IDU2regs),
      .o_rs2_addr(rs2_addr_IDU2regs),
      .o_rd_wen (rd_wen_IDU2regs   ),
      .o_imm    (imm               ),
      .o_exu_src_sel(exu_src_sel_IDU2EXU),
      .o_exu_opt(exu_opt_IDU2EXU   ),
      .o_lsu_opt(lsu_opt           ),
      .o_brch   (brch_IDU2PCU      ),
      .o_jal    (jal_IDU2PCU       ),
      .o_jalr   (jalr_IDU2PCU      ),
      .s_id_err (s_id_err          )
    );

    ysyx_22050078_EXU u_EXU(
      .clk       (clk              ),
      .pc        (pc               ),
      .i_rs1_data(rs1_data         ),
      .i_rs2_data(rs2_data         ),
      .i_imm     (imm              ),
      .i_src_sel (exu_src_sel_IDU2EXU),
      .i_exopt   (exu_opt_IDU2EXU  ),
      .o_exu_res (exu_res          ),
      .o_zero    (zero_EXU2PCU     )
    );

    ysyx_22050078_LSU u_LSU( 
      .en        (en          ),
      .clk       (clk         ),
      .rst_n     (rst_n_sync  ),
      .i_opt     (lsu_opt     ),
      .i_addr    (exu_res     ),
      .i_regst   (rs2_data    ),
      .o_regld   (lsu_res_LSU2WBU)
    );

    ysyx_22050078_WBU u_WBU(
      .i_exu_res (exu_res        ),
      .i_lsu_res (lsu_res_LSU2WBU),
      .i_load_en (~lsu_opt[0]    ),
      .o_rd      (rd_data_WBU2regs)
    );

    ysyx_22050078_PCU u_PCU(
      .clk      (clk          ),
      .rst_n    (rst_n_sync   ),
      .i_brch   (brch_IDU2PCU ),
      .i_jal    (jal_IDU2PCU  ),
      .i_jalr   (jalr_IDU2PCU ),
      .i_zero   (zero_EXU2PCU ),
      .i_rs1    (rs1_data     ),
      .i_imm    (imm          ),
      .o_pc     (pc           )
    );

  //3.sim:  ////////////////////////////////////////////////////////
  import "DPI-C" function void check_rst(input bit rst_flag);
  import "DPI-C" function bit check_finish(input int finish_flag);
  import "DPI-C" function void check_error();
  import "DPI-C" function void check_good_or_bad(input bit rst_flag, input longint rtl_pc);
  always @(*) 
   begin
    check_rst(rst_n_sync);  
    if(check_finish(inst_IFU2IDU)) //inst == ebreak
     begin
      // $display("\n----------EBREAK: HIT !!%s!! TRAP!!---------------\n",a0zero ? "GOOD":"BAD");
      check_good_or_bad(~a0zero, pc);
      // $finish;
     end
    if(rst_n_sync & |inst_IFU2IDU & s_id_err[0]) 
      begin
        $display("\n----------inst decode error, pc = %x, opcode == %b---------------\n", pc, inst_IFU2IDU[ 6: 0] );
        check_error();
      end
    if(rst_n_sync & |inst_IFU2IDU & s_id_err[1]) 
      begin
        $display("\n----------inst decode error, pc = %x, funct3 == %b---------------\n", pc, inst_IFU2IDU[14:12] );
        check_error();
      end
    if(rst_n_sync & |inst_IFU2IDU & s_id_err[2]) 
      begin
        $display("\n----------inst decode error, pc = %x, funct7 == %b---------------\n", pc, inst_IFU2IDU[31: 25] );
        check_error();
      end
   end


endmodule
