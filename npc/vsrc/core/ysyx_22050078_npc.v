`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"

module ysyx_22050078_npc (
    input wire clk,
    input wire rst_n
    // input en
);

//1.rst: /////////////////////////////////////////////////
    wire rst_n_sync;
    stl_rst u_stl_rst( 
      .clk          (clk       ),
      .rst_n        (rst_n     ),
      .o_rst_n_sync (rst_n_sync)
    );

//2.cpu: /////////////////////////////////////////////////
    //control signals:
    wire [`CPU_WIDTH-1:0] pc;
    wire pc_wen;    //bypass to BRU 
    wire ifid_wen;  //bypass to pipe_IF_ID
    wire ifid_bubble;//bypass to pipe_IF_ID
    wire idex_bubble;//bypass to pipe_ID_EX
    wire idu_ldstbp;//bypass to pipe_ID_EX
    wire exu_ldstbp;//pipe_ID_EX to bypass

    //simulation signals:
    wire [2:0] s_id_err;
    wire       s_a0zero;
    wire [`CPU_WIDTH-1:0] s_idu_diffpc;//pipe_IF_ID to pipe_ID_EX
    wire [`CPU_WIDTH-1:0] s_exu_diffpc;//pipe_ID_EX to pipe_EX_LS
    wire [`CPU_WIDTH-1:0] s_lsu_diffpc;//pipe_EX_LS to pipe_LS_WB
    wire [`CPU_WIDTH-1:0] s_wbu_diffpc;//pipe_LS_WB to simulation

/*2.1: ifu、pipe_IF_ID *//////////////////////////////////////////////// 
    wire [`CPU_WIDTH-1:0]  ifu_pc;
    wire [`CPU_WIDTH-1:0]  pc_IFU2pipe_IF_ID;
    wire [`INST_WIDTH-1:0] inst_IFU2pipe_IF_ID;
    wire [`INST_WIDTH-1:0] inst_pipe_IF_ID2IDU;

    //pc from BRU
    assign ifu_pc = pc;
    assign pc_IFU2pipe_IF_ID = pc;
    
    ysyx_22050078_IFU u_IFU(
      // .en       (en               ),
      .clk      (clk                ),
      .i_pc     (ifu_pc             ), //BRU to IFU
      .rst_n    (rst_n_sync         ),     
      .inst_out (inst_IFU2pipe_IF_ID) //IFU to pipe_IF_ID              
    );

    ysyx_22050078_pipe_if_id u_pipe_IF_ID(
      .clk                     (clk                     ),
      .rst_n                   (rst_n_sync              ),
      .i_wen                   (ifid_wen                ), //bypass to  pipe_IF_ID
      .i_bubble                (ifid_bubble             ), //BRU to  pipe_IF_ID
      .i_ifu_inst              (inst_IFU2pipe_IF_ID     ), //IFU to pipe_IF_ID
      .i_ifu_pc                (pc_IFU2pipe_IF_ID       ), //IFU to pipe_IF_ID
      .o_pipe_ifid2idu_inst    (inst_pipe_IF_ID2IDU     ), //pipe_IF_ID to IDU
      .o_pipe_ifid2pipe_idex_pc(pc_pipe_IF_ID2pipe_ID_EX), //pipe_IF_ID to pipe_ID_EX
      .s_idu_diffpc            (s_idu_diffpc            )  //pipe_IF_ID to pipe_ID_EX
    );
    
/*2.2: idu、pipe_ID_EX *//////////////////////////////////////////////// 

  /**************************IDU**************************/    
    wire [`REG_ADDRW-1:0]     rd_addr_IDU2pipe_ID_EX;
    wire                      rd_wen_IDU2pipe_ID_EX; 
    wire [`CPU_WIDTH-1:0]     imm_pipe_ID_EX2EXU;
    wire [`EXU_SEL_WIDTH-1:0] src_sel_IDU2pipe_ID_EX;
    wire [`EXU_OPT_WIDTH-1:0] exopt_IDU2pipe_ID_EX;
    wire [2:0]                lsfunc3_IDU2pipe_ID_EX;
    wire                      ld_en_IDU2pipe_ID_EX;                      
    wire                      st_en_IDU2pipe_ID_EX; 
    
    //IDU to BRU
    wire                      jal_IDU2BRU;  
    wire                      jalr_IDU2BRU;
    wire                      brch_IDU2BRU;
    wire [2:0]                bfunc3_IDU2BRU;

    //IDU to bypass
    wire [`REG_ADDRW-1:0]     rs1_addr_IDU2bypass;
    wire [`REG_ADDRW-1:0]     rs2_addr_IDU2bypass;
    
    //IDU to pipe_id_EX、BRU
    wire [`CPU_WIDTH-1:0]     idu_imm;
  
    ysyx_22050078_IDU u_IDU(
      //from IFU
      .inst_in      (inst_pipe_IF_ID2IDU   ),
      //to bypass
      .o_rs1_addr   (rs1_addr_IDU2bypass   ),
      .o_rs2_addr   (rs2_addr_IDU2bypass   ),
      //to pipe_ID_EX
      .o_rd_addr    (rd_addr_IDU2pipe_ID_EX),
      .o_rd_wen     (rd_wen_IDU2pipe_ID_EX ),
      .o_imm        (idu_imm               ),
      .o_src_sel    (src_sel_IDU2pipe_ID_EX),
      .o_exopt      (exopt_IDU2pipe_ID_EX  ),
      //to LSU
      .o_lsu_func3  (lsfunc3_IDU2pipe_ID_EX),
      .o_lsu_ld_en  (ld_en_IDU2pipe_ID_EX  ),
      .o_lsu_st_en  (st_en_IDU2pipe_ID_EX  ),//also to bypass
      //to BRU
      .o_jal        (jal_IDU2BRU           ),
      .o_jalr       (jalr_IDU2BRU          ),
      .o_brch       (brch_IDU2BRU          ),
      .o_bfunc3     (bfunc3_IDU2BRU        ),
      //for sim
      .s_id_err     (s_id_err              )
    );

  /**************************pipe_ID_EX**************************/ 
    //from bypass
    wire [`CPU_WIDTH-1:0]     rs1_data_bypass2pipe_ID_EX;
    wire [`CPU_WIDTH-1:0]     rs2_data_bypass2pipe_ID_EX;
    
    //pipe_ID_EX to EXU
    wire [`CPU_WIDTH-1:0]     rs1_data_pipe_ID_EX2EXU;
    wire [`CPU_WIDTH-1:0]     rs2_data_pipe_ID_EX2EXU;
    wire [`EXU_SEL_WIDTH-1:0] src_sel_pipe_ID_EX2EXU;
    wire [`EXU_OPT_WIDTH-1:0] exopt_pipe_ID_EX2EXU;

    //from pipe_IF_ID come to pipe_ID_EX
    wire [`CPU_WIDTH-1:0]     pc_pipe_IF_ID2pipe_ID_EX;
    wire [`REG_ADDRW-1:0]     rd_addr_pipe_ID_EX2EXU;

    //pipe_ID_EX to pipe_EX_LS
    wire [`CPU_WIDTH-1:0]     pc_pipe_ID_EX2pipe_EX_LS;
    wire [`REG_ADDRW-1:0]     rd_addr_pipe_ID_EX2pipe_EX_LS;
    wire                      rdwen_pipe_ID_EX2pipe_EX_LS;
    wire [2:0]                lsfunc3_pipe_ID_EX2pipe_EX_LS;
    wire                      ld_en_pipe_ID_EX2pipe_EX_LS;                      
    wire                      st_en_pipe_ID_EX2pipe_EX_LS; 

    ysyx_22050078_pipe_id_ex u_pipe_id_ex(
      //contrl signals:
      .clk                     (clk                          ),
      .rst_n                   (rst_n_sync                   ),
      .i_bubble                (idex_bubble                  ), //bypass to  pipe_ID_EX
      //from IDU
      .i_idu_imm               (idu_imm                      ),
      .i_idu_rd_addr           (rd_addr_IDU2pipe_ID_EX       ),
      .i_idu_rdwen             (rd_wen_IDU2pipe_ID_EX        ),
      .i_idu_src_sel           (src_sel_IDU2pipe_ID_EX       ),
      .i_idu_exopt             (exopt_IDU2pipe_ID_EX         ),
      .i_idu_func3             (lsfunc3_IDU2pipe_ID_EX       ),
      .i_idu_ld_en             (ld_en_IDU2pipe_ID_EX         ),
      .i_idu_st_en             (st_en_IDU2pipe_ID_EX         ),
      //from bypass
      .i_idu_rs1_data          (rs1_data_bypass2pipe_ID_EX   ),
      .i_idu_rs2_data          (rs2_data_bypass2pipe_ID_EX   ),
      .i_idu_ldstbp            (idu_ldstbp                   ),
      //from pipe_IF_ID
      .i_idu_pc                (pc_pipe_IF_ID2pipe_ID_EX     ),
      .s_idu_diffpc            (s_idu_diffpc                 ),
      //to EXU
      .o_exu_pc                (pc_pipe_ID_EX2pipe_EX_LS     ),
      .o_exu_imm               (imm_pipe_ID_EX2EXU           ),
      .o_exu_rs1_data          (rs1_data_pipe_ID_EX2EXU      ),
      .o_exu_rs2_data          (rs2_data_pipe_ID_EX2EXU      ),//to EXU、bypass
      .o_exu_src_sel           (src_sel_pipe_ID_EX2EXU       ),
      .o_exu_exopt             (exopt_pipe_ID_EX2EXU         ),
      //to pipe_EX_LS
      .o_exu_rd_addr           (rd_addr_pipe_ID_EX2pipe_EX_LS),
      .o_exu_rdwen             (rdwen_pipe_ID_EX2pipe_EX_LS ),
      .o_exu_func3             (lsfunc3_pipe_ID_EX2pipe_EX_LS),
      .o_exu_ld_en             (ld_en_pipe_ID_EX2pipe_EX_LS  ),
      .o_exu_st_en             (st_en_pipe_ID_EX2pipe_EX_LS  ),
      .s_exu_diffpc            (s_exu_diffpc                 ),
      //to bypass logic
      .o_exu_ldstbp            (exu_ldstbp                   )  
    );
    
/*2.3: exu、pipe_EX_LS *////////////////////////////////////////////////    
    
  /**************************EXU**************************/ 
    //EXU to pipe_EX_LS、bypass
    wire [`CPU_WIDTH-1:0] exu_exres;
    
    ysyx_22050078_EXU u_EXU(
      .clk       (clk                    ),
      .pc        (pc                     ),
      .i_rs1_data(rs1_data_pipe_ID_EX2EXU),
      .i_rs2_data(rs2_data_pipe_ID_EX2EXU),
      .i_imm     (imm_pipe_ID_EX2EXU     ),
      .i_src_sel (src_sel_pipe_ID_EX2EXU ),
      .i_exopt   (exopt_pipe_ID_EX2EXU   ),
      .o_exu_res (exu_exres              )
    );

  /**************************pipe_EX_LS**************************/ 
    //from bypass
    wire [`CPU_WIDTH-1:0] rs2_data_bypass2pipe_EX_LS;
    //to LSU
    wire [`CPU_WIDTH-1:0] exres_pipe_EX_LS2LSU;
    wire                  ld_en_pipe_EX_LS2LSU; 
    wire                  st_en_pipe_EX_LS2LSU;
    wire [2:0]            lsfunc3_pipe_EX_LS2LSU;
    wire [`CPU_WIDTH-1:0] rs2_data_pipe_EX_LS2LSU;

    //to pipe_LS_WB
    wire [`REG_ADDRW-1:0] rd_addr_pipe_EX_LS2pipe_LS_WB;
    wire                  rd_wen_pipe_EX_LS2pipe_LS_WB;


    ysyx_22050078_pipe_ex_ls u_pipe_ex_ls(
      //contrl signals:
      .clk            (clk                          ),
      .rst_n          (rst_n_sync                   ),
      //from EXU
      .i_exu_res      (exu_exres                    ),
      //from bypass
      .o_exu_rs2_data (rs2_data_bypass2pipe_EX_LS   ),
      //from pipe_ID_EX
      .i_exu_rd_addr  (rd_addr_pipe_ID_EX2pipe_EX_LS),
      .i_exu_rdwen    (rdwen_pipe_ID_EX2pipe_EX_LS ),
      .i_exu_func3    (lsfunc3_pipe_ID_EX2pipe_EX_LS),
      .i_exu_ld_en    (ld_en_pipe_ID_EX2pipe_EX_LS  ),
      .i_exu_st_en    (st_en_pipe_ID_EX2pipe_EX_LS  ),
      .s_exu_diffpc   (s_exu_diffpc                 ),
      //to LSU
      .o_lsu_rs2_data (rs2_data_pipe_EX_LS2LSU      ),
      .o_lsu_exres    (exres_pipe_EX_LS2LSU         ),//also to pipe_LS_WB
      .o_lsu_ld_en    (ld_en_pipe_EX_LS2LSU         ),//also to pipe_LS_WB
      .o_lsu_st_en    (st_en_pipe_EX_LS2LSU         ),
      .o_lsu_func3    (lsfunc3_pipe_EX_LS2LSU       ),
      //to pipe_LS_WB
      .o_lsu_rd_addr  (rd_addr_pipe_EX_LS2pipe_LS_WB),
      .o_lsu_rdwen    (rd_wen_pipe_EX_LS2pipe_LS_WB ),
      .s_lsu_diffpc   (s_lsu_diffpc                 )
    );

/*2.4: LSU、pipe_LS_WB *////////////////////////////////////////////////
    
    /**************************LSU**************************/
    //to pipe_LS_WB、bypss
    wire [`CPU_WIDTH-1:0] lsu_lsres;

    
    ysyx_22050078_LSU u_LSU( 
      .clk       (clk                    ),
      .i_lsfunc3 (lsfunc3_pipe_EX_LS2LSU ),
      .i_ld_en   (ld_en_pipe_EX_LS2LSU   ),
      .i_st_en   (st_en_pipe_EX_LS2LSU   ),
      .i_addr    (exres_pipe_EX_LS2LSU   ),
      .i_regst   (rs2_data_pipe_EX_LS2LSU),
      .o_regld   (lsu_lsres              )
    );
  /**************************pipe_LS_WB**************************/ 
    wire [`CPU_WIDTH-1:0] exres_pipe_EX_LS2pipe_LS_WB;
    wire                  ld_en_pipe_EX_LS2pipe_LS_WB;

    wire [`CPU_WIDTH-1:0] exres_pipe_LS_WB2WBU;
    wire [`CPU_WIDTH-1:0] lsres_pipe_LS_WB2WBU;
    wire [`REG_ADDRW-1:0] lsu_rd_addr_r;
    wire                  lsu_rdwen_r;
    wire                  lsu_ld_en_r;


    assign exres_pipe_EX_LS2pipe_LS_WB = exres_pipe_EX_LS2LSU;
    assign ld_en_pipe_EX_LS2pipe_LS_WB = ld_en_pipe_EX_LS2LSU;

    ysyx_22050078_pipe_ls_wb u_pipe_ls_wb(
      //contrl signals:
      .clk          (clk                          ),
      .rst_n        (rst_n_sync                   ),
      //from EXU
      .i_lsu_lsres  (lsu_lsres                    ),
      //from pipe_EX_LS
      .i_lsu_exres  (exres_pipe_EX_LS2pipe_LS_WB  ),
      .i_lsu_rdid   (rd_addr_pipe_EX_LS2pipe_LS_WB),
      .i_lsu_rdwen  (rd_wen_pipe_EX_LS2pipe_LS_WB ),
      .i_lsu_lden   (ld_en_pipe_EX_LS2pipe_LS_WB  ),
      .s_lsu_diffpc (s_lsu_diffpc                 ),
      //to WBU
      .o_wbu_exres  (exres_pipe_LS_WB2WBU         ),
      .o_wbu_lsres  (lsres_pipe_LS_WB2WBU         ),
      .o_wbu_rdid   (lsu_rd_addr_r                ),
      .o_wbu_rdwen  (lsu_rdwen_r                  ),
      .o_wbu_lden   (lsu_ld_en_r                  ),
      .s_wbu_diffpc (s_wbu_diffpc                 )
    );
    


/*2.5: WBU *////////////////////////////////////////////////   
  /**************************WBU**************************/
    wire [`CPU_WIDTH-1:0]      wbu_rd_data;
    wire [`REG_ADDRW-1:0]      wbu_rd_addr;
    wire                       wbu_rdwen;

    //pipe_LS_WB to WBU
    assign wbu_rd_addr = lsu_rd_addr_r;
    assign wbu_rdwen   = lsu_ld_en_r;

    ysyx_22050078_WBU u_WBU(
      .i_exu_res (exres_pipe_LS_WB2WBU        ),
      .i_lsu_res (lsres_pipe_LS_WB2WBU        ),
      .i_load_en (lsu_ld_en_r                 ),
      .o_rd      (wbu_rd_data                 )
    );

/*2.6: bypass, regfile read/write. *////////////////////////////////////////////////
    //from IDU
    wire                  st_en_IDU2bypass;//从IDU to pipe_ID_EX 数据路径上分支截取
    
    assign st_en_IDU2bypass = st_en_IDU2pipe_ID_EX;

    //from pipe_ID_EX to pipe_EX_LS 数据路径
    wire                  ld_en_EXU2bypass;//从pipe_ID_EX to pipe_EX_LS 数据路径上分支截取
    wire                  rdwen_EXU2bypass;//从pipe_ID_EX to pipe_EX_LS 数据路径上分支截取
    wire [`REG_ADDRW-1:0] rd_addr_EXU2bypass;//从pipe_ID_EX to pipe_EX_LS 数据路径上分支截取
    
    assign ld_en_EXU2bypass   = ld_en_pipe_ID_EX2pipe_EX_LS;
    assign rdwen_EXU2bypass   = rdwen_pipe_ID_EX2pipe_EX_LS;
    assign rd_addr_EXU2bypass = rd_addr_pipe_ID_EX2pipe_EX_LS;

    //from pipe_ID_EX to EXU 数据路径
    wire [`CPU_WIDTH-1:0] rs2_data_pipe_ID_EX2bypass;

    assign rs2_data_pipe_ID_EX2bypass = rs2_data_pipe_ID_EX2EXU;

    //from pipe_EX_LS to LSU 数据路径
    wire                  ld_en_LSU2bypass;//从pipe_EX_LS to LSU 数据路径上分支截取
    wire [`CPU_WIDTH-1:0] exres_LSU2bypass;//从pipe_EX_LS to LSU 数据路径上分支截取

    assign ld_en_LSU2bypass   = ld_en_pipe_EX_LS2LSU;  
    assign exres_LSU2bypass   = exres_pipe_EX_LS2LSU;

    //from pipe_EX_LS to pipe_LS_WB 数据路径
    wire                  rdwen_LSU2bypass;//从pipe_EX_LS to pipe_LS_WB 数据路径上分支截取
    wire [`REG_ADDRW-1:0] rd_addr_LSU2bypass;//从pipe_EX_LS to pipe_LS_WB 数据路径上分支截取
    
    assign rdwen_LSU2bypass   = rd_wen_pipe_EX_LS2pipe_LS_WB;
    assign rd_addr_LSU2bypass = rd_addr_pipe_EX_LS2pipe_LS_WB;


    ysyx_22050078_bypass u_bypass(
      .clk           (clk),
      /*generate rs1_data, rs2_data*/
      //from IDU
      .i_idu_rs1_addr(rs1_addr_IDU2bypass          ),
      .i_idu_rs2_addr(rs2_addr_IDU2bypass          ),
      .i_idu_st_en   (st_en_IDU2bypass             ),
      //from pipe_ID_EX to pipe_EX_LS 数据路径
      .i_exu_ld_en   (ld_en_EXU2bypass             ),
      .i_exu_rdwen   (rdwen_EXU2bypass             ),
      .i_exu_rd_addr (rd_addr_pipe_ID_EX2pipe_EX_LS),
      //from EXU
      .i_exu_exres   (exu_exres                    ),
      //from LSU
      .i_lsu_ld_en   (ld_en_LSU2bypass             ),
      .i_lsu_rdwen   (rdwen_LSU2bypass             ),
      .i_lsu_rd_addr (rd_addr_LSU2bypass           ),
      .i_lsu_lsres   (lsu_lsres                    ),
      .i_lsu_exres   (exres_LSU2bypass             ),
      //from WBU
      .i_wbu_rdwen   (wbu_rdwen                    ),
      .i_wbu_rd_addr (wbu_rd_addr                  ),
      .i_wbu_rd_data (wbu_rd_data                  ),
      //to pipe_ID_EX、BRU
      .o_idu_rs1_data(rs1_data_bypass2pipe_ID_EX   ),
      .o_idu_rs2_data(rs2_data_bypass2pipe_ID_EX   ),
      //to BRU
      .o_pc_wen      (pc_wen                       ),
      //to pipe_IF_ID
      .o_ifid_wen    (ifid_wen                     ),
      //to pipe_ID_EX
      .o_idex_bubble (idex_bubble                  ),
      
      /*generate reg-store*/
      //from pipe_ID_EX to EXU 数据路径
      .i_exu_rs2     (rs2_data_pipe_ID_EX2bypass   ),
      //from pipe_ID_EX
      .i_exu_ldstbp  (exu_ldstbp                   ),
      //to pipe_ID_EX
      .o_idu_ldstbp  (idu_ldstbp                   ),
      //to pipe_EX_LS
      .o_exu_rs2     (rs2_data_bypass2pipe_EX_LS   ),
      //for sim
      .s_a0zero      (s_a0zero                     )
    );
    
    
    
/*2.7:BRU *////////////////////////////////////////////////
    //from bypass
    wire [`CPU_WIDTH-1:0]     rs1_data_bypass2BRU;
    wire [`CPU_WIDTH-1:0]     rs2_data_bypass2BRU;

    assign rs1_data_bypass2BRU = rs1_data_bypass2pipe_ID_EX;
    assign rs2_data_bypass2BRU = rs2_data_bypass2pipe_ID_EX;

    //from pipe_IF_ID come to pipe_ID_EX 的数据路径
    wire [`CPU_WIDTH-1:0]     prepc_pipe_IF_ID2BRU;
    
    assign prepc_pipe_IF_ID2BRU = pc_pipe_IF_ID2pipe_ID_EX;
    
    ysyx_22050078_BRU u_BRU(
      .clk            (clk                 ),
      .rst_n          (rst_n_sync          ),
      //from bypass
      .i_pcwen        (pc_wen              ),
      .i_rs1_data     (rs1_data_bypass2BRU ),
      .i_rs2_data     (rs2_data_bypass2BRU ),
      //from IDU
      .i_brch         (brch_IDU2BRU        ),
      .i_jal          (jal_IDU2BRU         ),
      .i_jalr         (jalr_IDU2BRU        ),
      .i_bfunc3       (bfunc3_IDU2BRU      ),
      .i_imm          (idu_imm             ),
      .i_prepc        (prepc_pipe_IF_ID2BRU),
      //to IFU,
      .o_pc           (pc                  ),
      .o_if2id_bubble (ifid_bubble         )
    );    
    
    
//3.sim:  ////////////////////////////////////////////////////////
  
/*3.1: update rst state and wb stage pc to sim. *////////////////////////////////////////////////
  import "DPI-C" function void check_rst(input bit rst_flag);
  import "DPI-C" function void diff_read_pc(input longint rtl_pc);
  
  always @(*) begin
    check_rst   (rst_n_sync);
    // diff_read_pc(s_wbu_diffpc);
    diff_read_pc(pc);
  end
  
/*3.2: update wb stage finish. *////////////////////////////////////////////////
  import "DPI-C" function bit check_finish(input int finish_flag);
  import "DPI-C" function void check_error();
  import "DPI-C" function void check_good_or_bad(input bit rst_flag, input longint rtl_pc);
  
  wire [`INST_WIDTH-1:0] s_wbu_inst;
  assign s_wbu_inst = inst_IFU2pipe_IF_ID;

  always @(*) begin
    if(check_finish(s_wbu_inst)) begin //inst == ebreak
      // $display("\n----------EBREAK: HIT !!%s!! TRAP!!---------------\n",a0zero ? "GOOD":"BAD");
      check_good_or_bad(~s_a0zero, s_wbu_diffpc);
      // $finish;
    end
  end

  always @(*) begin
    if(rst_n_sync & |inst_pipe_IF_ID2IDU & s_id_err[0]) begin
        $display("\n----------inst decode error, pc = %x, opcode == %b---------------\n", pc_IFU2pipe_IF_ID, inst_pipe_IF_ID2IDU[ 6: 0] );
        check_error();
     end
    if(rst_n_sync & |inst_pipe_IF_ID2IDU & s_id_err[1]) begin
        $display("\n----------inst decode error, pc = %x, funct3 == %b---------------\n", pc_IFU2pipe_IF_ID, inst_pipe_IF_ID2IDU[14:12] );
        check_error();
     end
    if(rst_n_sync & |inst_pipe_IF_ID2IDU & s_id_err[2]) begin
        $display("\n----------inst decode error, pc = %x, funct7 == %b---------------\n", pc_IFU2pipe_IF_ID, inst_pipe_IF_ID2IDU[31: 25]);
        check_error();
     end
    if(rst_n_sync & |inst_pipe_IF_ID2IDU & |s_id_err) begin
        $finish;
     end
  end    
    
    

endmodule
