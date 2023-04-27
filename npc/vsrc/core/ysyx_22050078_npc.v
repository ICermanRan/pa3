`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.v"

module ysyx_22050078_npc (
    input  i_clk,
    input  i_rst_n
);

//1.rst: /////////////////////////////////////////////////
    wire rst_n_sync;
    stl_rst u_stl_rst( 
      .i_clk          (i_clk       ),
      .i_rst_n        (i_rst_n     ),
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
    wire [`CPU_WIDTH-1:0]   ifu_pc,ifu_pc_r;
    wire [`INST_WIDTH-1:0]  ifu_ins,ifu_ins_r;

    //pc from BRU
    assign ifu_pc = pc;
    // assign pc_IFU2pipe_IF_ID = pc;
    
    ysyx_22050078_IFU u_IFU(
      .i_pc    (ifu_pc    ), //BRU to IFU
      .i_rst_n (rst_n_sync),     
      .o_ins   (ifu_ins   ) //IFU to pipe_IF_ID  
    );


    ysyx_22050078_pipe_if_id u_pipe_IF_ID(
    .i_clk        (i_clk        ),
    .i_rst_n      (rst_n_sync   ),
    .i_wen        (ifid_wen     ),
    .i_bubble     (ifid_bubble  ),
    .i_ifu_ins    (ifu_ins      ),
    .i_ifu_pc     (ifu_pc       ),
    .o_idu_ins    (ifu_ins_r    ),
    .o_idu_pc     (ifu_pc_r     ),
    .s_idu_diffpc (s_idu_diffpc )
  );
    
/*2.2: idu、pipe_ID_EX *//////////////////////////////////////////////// 

  /**************************IDU**************************/    
    // wire [`REG_ADDRW-1:0]     rd_addr_IDU2pipe_ID_EX;
    // wire                      rd_wen_IDU2pipe_ID_EX; 
    // wire [`CPU_WIDTH-1:0]     imm_pipe_ID_EX2EXU;
    // wire [`EXU_SEL_WIDTH-1:0] src_sel_IDU2pipe_ID_EX;
    // wire [`EXU_OPT_WIDTH-1:0] exopt_IDU2pipe_ID_EX;
    // wire [2:0]                lsfunc3_IDU2pipe_ID_EX;
    // wire                      ld_en_IDU2pipe_ID_EX;                      
    // wire                      st_en_IDU2pipe_ID_EX; 
    
    // //IDU to BRU
    // wire                      jal_IDU2BRU;  
    // wire                      jalr_IDU2BRU;
    // wire                      brch_IDU2BRU;
    // wire [2:0]                bfunc3_IDU2BRU;

    // //IDU to bypass
    // wire [`REG_ADDRW-1:0]     rs1_addr_IDU2bypass;
    // wire [`REG_ADDRW-1:0]     rs2_addr_IDU2bypass;
    
    // //IDU to pipe_id_EX、BRU
    // wire [`CPU_WIDTH-1:0]     idu_imm;

  wire [`REG_ADDRW-1:0]      idu_rs1id,idu_rs2id;
  wire [`REG_ADDRW-1:0]      idu_rdid,idu_rdid_r;
  wire                       idu_rdwen,idu_rdwen_r;
  wire [`CPU_WIDTH-1:0]      idu_imm,idu_imm_r;
  wire [`CPU_WIDTH-1:0]      idu_rs1,idu_rs1_r;
  wire [`CPU_WIDTH-1:0]      idu_rs2,idu_rs2_r;
  wire [`EXU_SEL_WIDTH-1:0]  idu_src_sel,idu_src_sel_r;
  wire [`EXU_OPT_WIDTH-1:0]  idu_exopt,idu_exopt_r;
  wire [2:0]                 idu_lsfunc3,idu_lsfunc3_r;
  wire                       idu_lden,idu_lden_r;
  wire                       idu_sten,idu_sten_r;
  wire [`CPU_WIDTH-1:0]      idu_pc,idu_pc_r;
  // for branch uint:
  wire                       idu_jal,idu_jalr,idu_brch;
  wire [2:0]                 idu_bfun3;

  
    // ysyx_22050078_IDU u_IDU(
    //   //from IFU
    //   .i_inst      (inst_pipe_IF_ID2IDU   ),
    //   //to bypass
    //   .o_rs1_addr   (rs1_addr_IDU2bypass   ),
    //   .o_rs2_addr   (rs2_addr_IDU2bypass   ),
    //   //to pipe_ID_EX
    //   .o_rd_addr    (rd_addr_IDU2pipe_ID_EX),
    //   .o_rd_wen     (rd_wen_IDU2pipe_ID_EX ),
    //   .o_imm        (idu_imm               ),
    //   .o_src_sel    (src_sel_IDU2pipe_ID_EX),
    //   .o_exopt      (exopt_IDU2pipe_ID_EX  ),
    //   //to LSU
    //   .o_lsu_func3  (lsfunc3_IDU2pipe_ID_EX),
    //   .o_lsu_ld_en  (ld_en_IDU2pipe_ID_EX  ),
    //   .o_lsu_st_en  (st_en_IDU2pipe_ID_EX  ),//also to bypass
    //   //to BRU
    //   .o_jal        (jal_IDU2BRU           ),
    //   .o_jalr       (jalr_IDU2BRU          ),
    //   .o_brch       (brch_IDU2BRU          ),
    //   .o_bfunc3     (bfunc3_IDU2BRU        ),
    //   //for sim
    //   .s_id_err     (s_id_err              )
    // );

    ysyx_22050078_IDU u_IDU(
    .i_ins       (ifu_ins_r   ),
    .o_rs1id     (idu_rs1id   ),
    .o_rs2id     (idu_rs2id   ),
    .o_rdid      (idu_rdid    ),
    .o_rdwen     (idu_rdwen   ),
    .o_imm       (idu_imm     ),
    .o_src_sel   (idu_src_sel ),
    .o_exopt     (idu_exopt   ),
    .o_lsu_func3 (idu_lsfunc3 ),
    .o_lsu_lden  (idu_lden    ),
    .o_lsu_sten  (idu_sten    ),
    .o_jal       (idu_jal     ),
    .o_jalr      (idu_jalr    ),
    .o_brch      (idu_brch    ),
    .o_bfun3     (idu_bfun3   ),
    .s_id_err    (s_id_err    )
  );

  /**************************pipe_ID_EX**************************/ 
    //from bypass
    // wire [`CPU_WIDTH-1:0]     rs1_data_bypass2pipe_ID_EX;
    // wire [`CPU_WIDTH-1:0]     rs2_data_bypass2pipe_ID_EX;
    
    // //pipe_ID_EX to EXU
    // wire [`CPU_WIDTH-1:0]     rs1_data_pipe_ID_EX2EXU;
    // wire [`CPU_WIDTH-1:0]     rs2_data_pipe_ID_EX2EXU;
    // wire [`EXU_SEL_WIDTH-1:0] src_sel_pipe_ID_EX2EXU;
    // wire [`EXU_OPT_WIDTH-1:0] exopt_pipe_ID_EX2EXU;

    //from pipe_IF_ID come to pipe_ID_EX
    // wire [`CPU_WIDTH-1:0]     pc_pipe_IF_ID2pipe_ID_EX;
    // wire [`REG_ADDRW-1:0]     rd_addr_pipe_ID_EX2EXU;

    // //pipe_ID_EX to pipe_EX_LS
    // wire [`CPU_WIDTH-1:0]     pc_pipe_ID_EX2pipe_EX_LS;
    // wire [`REG_ADDRW-1:0]     rd_addr_pipe_ID_EX2pipe_EX_LS;
    // wire                      rdwen_pipe_ID_EX2pipe_EX_LS;
    // wire [2:0]                lsfunc3_pipe_ID_EX2pipe_EX_LS;
    // wire                      ld_en_pipe_ID_EX2pipe_EX_LS;                      
    // wire                      st_en_pipe_ID_EX2pipe_EX_LS; 

    // ysyx_22050078_pipe_id_ex u_pipe_id_ex(
    //   //contrl signals:
    //   .clk                     (clk                          ),
    //   .rst_n                   (rst_n_sync                   ),
    //   .i_bubble                (idex_bubble                  ), //bypass to  pipe_ID_EX
    //   //from IDU
    //   .i_idu_imm               (idu_imm                      ),
    //   .i_idu_rd_addr           (rd_addr_IDU2pipe_ID_EX       ),
    //   .i_idu_rdwen             (rd_wen_IDU2pipe_ID_EX        ),
    //   .i_idu_src_sel           (src_sel_IDU2pipe_ID_EX       ),
    //   .i_idu_exopt             (exopt_IDU2pipe_ID_EX         ),
    //   .i_idu_func3             (lsfunc3_IDU2pipe_ID_EX       ),
    //   .i_idu_ld_en             (ld_en_IDU2pipe_ID_EX         ),
    //   .i_idu_st_en             (st_en_IDU2pipe_ID_EX         ),
    //   //from bypass
    //   .i_idu_rs1_data          (rs1_data_bypass2pipe_ID_EX   ),
    //   .i_idu_rs2_data          (rs2_data_bypass2pipe_ID_EX   ),
    //   .i_idu_ldstbp            (idu_ldstbp                   ),
    //   //from pipe_IF_ID
    //   .i_idu_pc                (pc_pipe_IF_ID2pipe_ID_EX     ),
    //   .s_idu_diffpc            (s_idu_diffpc                 ),
    //   //to EXU
    //   .o_exu_pc                (pc_pipe_ID_EX2pipe_EX_LS     ),
    //   .o_exu_imm               (imm_pipe_ID_EX2EXU           ),
    //   .o_exu_rs1_data          (rs1_data_pipe_ID_EX2EXU      ),
    //   .o_exu_rs2_data          (rs2_data_pipe_ID_EX2EXU      ),//to EXU、bypass
    //   .o_exu_src_sel           (src_sel_pipe_ID_EX2EXU       ),
    //   .o_exu_exopt             (exopt_pipe_ID_EX2EXU         ),
    //   //to pipe_EX_LS
    //   .o_exu_rd_addr           (rd_addr_pipe_ID_EX2pipe_EX_LS),
    //   .o_exu_rdwen             (rdwen_pipe_ID_EX2pipe_EX_LS ),
    //   .o_exu_func3             (lsfunc3_pipe_ID_EX2pipe_EX_LS),
    //   .o_exu_ld_en             (ld_en_pipe_ID_EX2pipe_EX_LS  ),
    //   .o_exu_st_en             (st_en_pipe_ID_EX2pipe_EX_LS  ),
    //   .s_exu_diffpc            (s_exu_diffpc                 ),
    //   //to bypass wire
    //   .o_exu_ldstbp            (exu_ldstbp                   )  
    // );

    assign idu_pc = ifu_pc_r;

     ysyx_22050078_pipe_id_ex u_pipe_id_ex(
    .i_clk         (i_clk         ),
    .i_rst_n       (rst_n_sync    ),
    .i_bubble      (idex_bubble   ),
    .i_idu_imm     (idu_imm       ),
    // .i_idu_rs1     (idu_rs1       ),
    // .i_idu_rs2     (idu_rs2       ),
    // .i_idu_rdid    (idu_rdid      ),
    .i_idu_rs1_data     (idu_rs1       ),
    .i_idu_rs2_data     (idu_rs2       ),
    .i_idu_rd_addr    (idu_rdid      ),
    .i_idu_rdwen   (idu_rdwen     ),
    .i_idu_src_sel (idu_src_sel   ),
    .i_idu_exopt   (idu_exopt     ),
    .i_idu_func3   (idu_lsfunc3   ),
    .i_idu_lden    (idu_lden      ),
    .i_idu_sten    (idu_sten      ),
    .i_idu_ldstbp  (idu_ldstbp    ),
    .i_idu_pc      (idu_pc        ),
    .s_idu_diffpc  (s_idu_diffpc  ),
    .o_exu_imm     (idu_imm_r     ),
    // .o_exu_rs1     (idu_rs1_r     ),
    // .o_exu_rs2     (idu_rs2_r     ),
    // .o_exu_rdid    (idu_rdid_r    ),
    .o_exu_rs1_data     (idu_rs1_r     ),
    .o_exu_rs2_data     (idu_rs2_r     ),
    .o_exu_rd_addr    (idu_rdid_r    ),
    .o_exu_rdwen   (idu_rdwen_r   ),
    .o_exu_src_sel (idu_src_sel_r ),
    .o_exu_exopt   (idu_exopt_r   ),
    .o_exu_func3   (idu_lsfunc3_r ),
    .o_exu_lden    (idu_lden_r    ),
    .o_exu_sten    (idu_sten_r    ),
    .o_exu_ldstbp  (exu_ldstbp    ),
    .o_exu_pc      (idu_pc_r      ),
    .s_exu_diffpc  (s_exu_diffpc  )
  );
    
/*2.3: exu、pipe_EX_LS *////////////////////////////////////////////////    
    
  /**************************EXU**************************/ 
    //EXU to pipe_EX_LS、bypass
    // wire [`CPU_WIDTH-1:0] exu_exres;
    
    // ysyx_22050078_EXU u_EXU(
    //   // .clk       (clk                    ),
    //   .pc        (pc                     ),
    //   .i_rs1_data(rs1_data_pipe_ID_EX2EXU),
    //   .i_rs2_data(rs2_data_pipe_ID_EX2EXU),
    //   .i_imm     (imm_pipe_ID_EX2EXU     ),
    //   .i_src_sel (src_sel_pipe_ID_EX2EXU ),
    //   .i_exopt   (exopt_pipe_ID_EX2EXU   ),
    //   .o_exu_res (exu_exres              )
    // );
   wire [`CPU_WIDTH-1:0]      exu_exres,exu_exres_r;
   wire [`CPU_WIDTH-1:0]      exu_rs2,exu_rs2_bp,exu_rs2_r;
   wire [`REG_ADDRW-1:0]      exu_rdid,exu_rdid_r;
   wire                       exu_rdwen,exu_rdwen_r;
   wire [2:0]                 exu_lsfunc3,exu_lsfunc3_r;
   wire                       exu_lden,exu_lden_r;
   wire                       exu_sten,exu_sten_r;


    ysyx_22050078_EXU u_EXU(
    .i_pc      (idu_pc_r      ),
    // .i_rs1     (idu_rs1_r     ),
    // .i_rs2     (idu_rs2_r     ),
    .i_rs1_data     (idu_rs1_r     ),
    .i_rs2_data     (idu_rs2_r     ),
    .i_imm     (idu_imm_r     ),
    .i_src_sel (idu_src_sel_r ),
    .i_exopt   (idu_exopt_r   ),
    .o_exu_res (exu_exres     )
  );
  /**************************pipe_EX_LS**************************/ 
    // //from bypass
    // wire [`CPU_WIDTH-1:0] rs2_data_bypass2pipe_EX_LS;
    // //to LSU
    // wire [`CPU_WIDTH-1:0] exres_pipe_EX_LS2LSU;
    // wire                  ld_en_pipe_EX_LS2LSU; 
    // wire                  st_en_pipe_EX_LS2LSU;
    // wire [2:0]            lsfunc3_pipe_EX_LS2LSU;
    // wire [`CPU_WIDTH-1:0] rs2_data_pipe_EX_LS2LSU;

    // //to pipe_LS_WB
    // wire [`REG_ADDRW-1:0] rd_addr_pipe_EX_LS2pipe_LS_WB;
    // wire                  rd_wen_pipe_EX_LS2pipe_LS_WB;


    // ysyx_22050078_pipe_ex_ls u_pipe_ex_ls(
    //   //contrl signals:
    //   .clk            (clk                          ),
    //   .rst_n          (rst_n_sync                   ),
    //   //from EXU
    //   .i_exu_res      (exu_exres                    ),
    //   //from bypass
    //   .i_exu_rs2_data (rs2_data_bypass2pipe_EX_LS   ),
    //   //from pipe_ID_EX
    //   .i_exu_rd_addr  (rd_addr_pipe_ID_EX2pipe_EX_LS),
    //   .i_exu_rdwen    (rdwen_pipe_ID_EX2pipe_EX_LS ),
    //   .i_exu_func3    (lsfunc3_pipe_ID_EX2pipe_EX_LS),
    //   .i_exu_ld_en    (ld_en_pipe_ID_EX2pipe_EX_LS  ),
    //   .i_exu_st_en    (st_en_pipe_ID_EX2pipe_EX_LS  ),
    //   .s_exu_diffpc   (s_exu_diffpc                 ),
    //   //to LSU
    //   .o_lsu_rs2_data (rs2_data_pipe_EX_LS2LSU      ),
    //   .o_lsu_exres    (exres_pipe_EX_LS2LSU         ),//also to pipe_LS_WB
    //   .o_lsu_ld_en    (ld_en_pipe_EX_LS2LSU         ),//also to pipe_LS_WB
    //   .o_lsu_st_en    (st_en_pipe_EX_LS2LSU         ),
    //   .o_lsu_func3    (lsfunc3_pipe_EX_LS2LSU       ),
    //   //to pipe_LS_WB
    //   .o_lsu_rd_addr  (rd_addr_pipe_EX_LS2pipe_LS_WB),
    //   .o_lsu_rdwen    (rd_wen_pipe_EX_LS2pipe_LS_WB ),
    //   .s_lsu_diffpc   (s_lsu_diffpc                 )
    // );
    assign exu_rs2 = idu_rs2_r;
    assign exu_rdid = idu_rdid_r;
    assign exu_rdwen = idu_rdwen_r;
    assign exu_lsfunc3 = idu_lsfunc3_r;
    assign exu_lden = idu_lden_r;
    assign exu_sten = idu_sten_r;

     ysyx_22050078_pipe_ex_ls u_pipe_ex_ls(
      //contrl signals:
      .i_clk            (i_clk                          ),
      .i_rst_n          (rst_n_sync                   ),
      //from EXU
      .i_exu_exres    (exu_exres                    ),
      //from bypass
      .i_exu_rs2_data (exu_rs2_bp                   ),
      //from pipe_ID_EX
      .i_exu_rd_addr  (exu_rdid                     ),
      .i_exu_rdwen    (exu_rdwen                    ),
      .i_exu_func3    (exu_lsfunc3                  ),
      .i_exu_lden    (exu_lden                     ),
      .i_exu_sten    (exu_sten                     ),
      .s_exu_diffpc   (s_exu_diffpc                 ),
      //to LSU
      .o_lsu_exres    (exu_exres_r                  ),//also to pipe_LS_WB
      .o_lsu_rs2_data (exu_rs2_r                    ),      
      .o_lsu_lden    (exu_lden_r                   ),//also to pipe_LS_WB
      .o_lsu_sten    (exu_sten_r                   ),
      .o_lsu_func3    (exu_lsfunc3_r                ),
      //to pipe_LS_WB
      .o_lsu_rd_addr  (exu_rdid_r                   ),
      .o_lsu_rdwen    (exu_rdwen_r                  ),
      .s_lsu_diffpc   (s_lsu_diffpc                 )
    );

/*2.4: LSU、pipe_LS_WB *////////////////////////////////////////////////
    
    /**************************LSU**************************/
    //to pipe_LS_WB、bypss
    // wire [`CPU_WIDTH-1:0] lsu_lsres;

    
    // ysyx_22050078_LSU u_LSU( 
    //   .clk       (clk                    ),
    //   .i_lsfunc3 (lsfunc3_pipe_EX_LS2LSU ),
    //   .i_ld_en   (ld_en_pipe_EX_LS2LSU   ),
    //   .i_st_en   (st_en_pipe_EX_LS2LSU   ),
    //   .i_addr    (exres_pipe_EX_LS2LSU   ),
    //   .i_regst   (rs2_data_pipe_EX_LS2LSU),
    //   .o_regld   (lsu_lsres              )
    // );

    wire [`CPU_WIDTH-1:0]      lsu_exres,lsu_exres_r;
    wire [`CPU_WIDTH-1:0]      lsu_lsres,lsu_lsres_r;
    wire                       lsu_lden, lsu_lden_r;
    wire [`REG_ADDRW-1:0]      lsu_rdid, lsu_rdid_r;
    wire                       lsu_rdwen,lsu_rdwen_r;

    
    ysyx_22050078_LSU u_LSU( 
      .i_clk       (i_clk                    ),
      .i_lsfunc3 (exu_lsfunc3_r          ),
      .i_lden   (exu_lden_r             ),
      .i_sten   (exu_sten_r             ),
      .i_addr    (exu_exres_r            ),
      .i_regst   (exu_rs2_r              ),
      .o_regld   (lsu_lsres              )
    );
  /**************************pipe_LS_WB**************************/ 
    // wire [`CPU_WIDTH-1:0] exres_pipe_EX_LS2pipe_LS_WB;
    // wire                  ld_en_pipe_EX_LS2pipe_LS_WB;

    // wire [`CPU_WIDTH-1:0] exres_pipe_LS_WB2WBU;
    // wire [`CPU_WIDTH-1:0] lsres_pipe_LS_WB2WBU;
    // wire [`REG_ADDRW-1:0] lsu_rd_addr_r;
    // wire                  lsu_rdwen_r;
    // wire                  lsu_ld_en_r;


    // assign exres_pipe_EX_LS2pipe_LS_WB = exres_pipe_EX_LS2LSU;
    // assign ld_en_pipe_EX_LS2pipe_LS_WB = ld_en_pipe_EX_LS2LSU;

    // ysyx_22050078_pipe_ls_wb u_pipe_ls_wb(
    //   //contrl signals:
    //   .clk          (clk                          ),
    //   .rst_n        (rst_n_sync                   ),
    //   //from EXU
    //   .i_lsu_lsres  (lsu_lsres                    ),
    //   //from pipe_EX_LS
    //   .i_lsu_exres  (exres_pipe_EX_LS2pipe_LS_WB  ),
    //   .i_lsu_rdid   (rd_addr_pipe_EX_LS2pipe_LS_WB),
    //   .i_lsu_rdwen  (rd_wen_pipe_EX_LS2pipe_LS_WB ),
    //   .i_lsu_lden   (ld_en_pipe_EX_LS2pipe_LS_WB  ),
    //   .s_lsu_diffpc (s_lsu_diffpc                 ),
    //   //to WBU
    //   .o_wbu_exres  (exres_pipe_LS_WB2WBU         ),
    //   .o_wbu_lsres  (lsres_pipe_LS_WB2WBU         ),
    //   .o_wbu_rdid   (lsu_rd_addr_r                ),
    //   .o_wbu_rdwen  (lsu_rdwen_r                  ),
    //   .o_wbu_lden   (lsu_ld_en_r                  ),
    //   .s_wbu_diffpc (s_wbu_diffpc                 )
    // );
    
    assign lsu_exres = exu_exres_r;
    assign lsu_lden  = exu_lden_r;
    assign lsu_rdid  = exu_rdid_r;
    assign lsu_rdwen = exu_rdwen_r;

    ysyx_22050078_pipe_ls_wb u_pipe_ls_wb(
      //contrl signals:
      .i_clk          (i_clk                          ),
      .i_rst_n        (rst_n_sync                   ),
      //from EXU
      .i_lsu_lsres  (lsu_lsres                    ),
      //from pipe_EX_LS
      .i_lsu_exres  (lsu_exres                    ),
      .i_lsu_rd_addr(lsu_rdid                     ),
      .i_lsu_rdwen  (lsu_rdwen                    ),
      .i_lsu_lden   (lsu_lden                     ),
      .s_lsu_diffpc (s_lsu_diffpc                 ),
      //to WBU
      .o_wbu_exres  (lsu_exres_r                  ),
      .o_wbu_lsres  (lsu_lsres_r                  ),
      .o_wbu_rd_addr(lsu_rdid_r                   ),
      .o_wbu_rdwen  (lsu_rdwen_r                  ),
      .o_wbu_lden   (lsu_lden_r                   ),
      .s_wbu_diffpc (s_wbu_diffpc                 )
    );


/*2.5: WBU *////////////////////////////////////////////////   
  /**************************WBU**************************/
    // wire [`CPU_WIDTH-1:0]      wbu_rd_data;
    // wire [`REG_ADDRW-1:0]      wbu_rd_addr;
    // wire                       wbu_rdwen;

    // //pipe_LS_WB to WBU
    // assign wbu_rd_addr = lsu_rd_addr_r;
    // assign wbu_rdwen   = lsu_ld_en_r;

    // ysyx_22050078_WBU u_WBU(
    //   .i_exu_res (exres_pipe_LS_WB2WBU        ),
    //   .i_lsu_res (lsres_pipe_LS_WB2WBU        ),
    //   .i_load_en (lsu_ld_en_r                 ),
    //   .o_rd      (wbu_rd_data                 )
    // );

    wire [`CPU_WIDTH-1:0]      wbu_rd;
    wire [`REG_ADDRW-1:0]      wbu_rdid;
    wire                       wbu_rdwen;

    assign wbu_rdid  = lsu_rdid_r ;
    assign wbu_rdwen = lsu_rdwen_r;

    ysyx_22050078_WBU u_WBU(
      .i_exu_res (lsu_exres_r        ),
      .i_lsu_res (lsu_lsres_r        ),
      .i_load_en (lsu_lden_r         ),
      .o_rd      (wbu_rd             )
    );

/*2.6: bypass, regfile read/write. *////////////////////////////////////////////////
    //from IDU
    // wire                  st_en_IDU2bypass;//从IDU to pipe_ID_EX 数据路径上分支截取
    
    // assign st_en_IDU2bypass = st_en_IDU2pipe_ID_EX;

    // //from pipe_ID_EX to pipe_EX_LS 数据路径
    // wire                  ld_en_EXU2bypass;//从pipe_ID_EX to pipe_EX_LS 数据路径上分支截取
    // wire                  rdwen_EXU2bypass;//从pipe_ID_EX to pipe_EX_LS 数据路径上分支截取
    // wire [`REG_ADDRW-1:0] rd_addr_EXU2bypass;//从pipe_ID_EX to pipe_EX_LS 数据路径上分支截取
    
    // assign ld_en_EXU2bypass   = ld_en_pipe_ID_EX2pipe_EX_LS;
    // assign rdwen_EXU2bypass   = rdwen_pipe_ID_EX2pipe_EX_LS;
    // assign rd_addr_EXU2bypass = rd_addr_pipe_ID_EX2pipe_EX_LS;

    // //from pipe_ID_EX to EXU 数据路径
    // wire [`CPU_WIDTH-1:0] rs2_data_pipe_ID_EX2bypass;

    // assign rs2_data_pipe_ID_EX2bypass = rs2_data_pipe_ID_EX2EXU;

    // //from pipe_EX_LS to LSU 数据路径
    // wire                  ld_en_LSU2bypass;//从pipe_EX_LS to LSU 数据路径上分支截取
    // wire [`CPU_WIDTH-1:0] exres_LSU2bypass;//从pipe_EX_LS to LSU 数据路径上分支截取

    // assign ld_en_LSU2bypass   = ld_en_pipe_EX_LS2LSU;  
    // assign exres_LSU2bypass   = exres_pipe_EX_LS2LSU;

    // //from pipe_EX_LS to pipe_LS_WB 数据路径
    // wire                  rdwen_LSU2bypass;//从pipe_EX_LS to pipe_LS_WB 数据路径上分支截取
    // wire [`REG_ADDRW-1:0] rd_addr_LSU2bypass;//从pipe_EX_LS to pipe_LS_WB 数据路径上分支截取
    
    // assign rdwen_LSU2bypass   = rd_wen_pipe_EX_LS2pipe_LS_WB;
    // assign rd_addr_LSU2bypass = rd_addr_pipe_EX_LS2pipe_LS_WB;


    // ysyx_22050078_bypass u_bypass(
    //   .clk           (clk),
    //   /*generate rs1_data, rs2_data*/
    //   //from IDU
    //   .i_idu_rs1_addr(rs1_addr_IDU2bypass          ),
    //   .i_idu_rs2_addr(rs2_addr_IDU2bypass          ),
    //   .i_idu_st_en   (st_en_IDU2bypass             ),
    //   //from pipe_ID_EX to pipe_EX_LS 数据路径
    //   .i_exu_ld_en   (ld_en_EXU2bypass             ),
    //   .i_exu_rdwen   (rdwen_EXU2bypass             ),
    //   .i_exu_rd_addr (rd_addr_pipe_ID_EX2pipe_EX_LS),
    //   //from EXU
    //   .i_exu_exres   (exu_exres                    ),
    //   //from LSU
    //   .i_lsu_ld_en   (ld_en_LSU2bypass             ),
    //   .i_lsu_rdwen   (rdwen_LSU2bypass             ),
    //   .i_lsu_rd_addr (rd_addr_LSU2bypass           ),
    //   .i_lsu_lsres   (lsu_lsres                    ),
    //   .i_lsu_exres   (exres_LSU2bypass             ),
    //   //from WBU
    //   .i_wbu_rdwen   (wbu_rdwen                    ),
    //   .i_wbu_rd_addr (wbu_rd_addr                  ),
    //   .i_wbu_rd_data (wbu_rd_data                  ),
    //   //to pipe_ID_EX、BRU
    //   .o_idu_rs1_data(rs1_data_bypass2pipe_ID_EX   ),
    //   .o_idu_rs2_data(rs2_data_bypass2pipe_ID_EX   ),
    //   //to BRU
    //   .o_pc_wen      (pc_wen                       ),
    //   //to pipe_IF_ID
    //   .o_ifid_wen    (ifid_wen                     ),
    //   //to pipe_ID_EX
    //   .o_idex_bubble (idex_bubble                  ),
      
    //   /*generate reg-store*/
    //   //from pipe_ID_EX to EXU 数据路径
    //   .i_exu_rs2     (rs2_data_pipe_ID_EX2bypass   ),
    //   //from pipe_ID_EX
    //   .i_exu_ldstbp  (exu_ldstbp                   ),
    //   //to pipe_ID_EX
    //   .o_idu_ldstbp  (idu_ldstbp                   ),
    //   //to pipe_EX_LS
    //   .o_exu_rs2     (rs2_data_bypass2pipe_EX_LS   ),
    //   //for sim
    //   .s_a0zero      (s_a0zero                     )
    // );

    ysyx_22050078_bypass u_bypass(
      .i_clk           (i_clk),
      /*generate rs1_data, rs2_data*/
      //from IDU
      .i_idu_rs1_addr(idu_rs1id          ),
      .i_idu_rs2_addr(idu_rs2id          ),
      .i_idu_sten   (idu_sten             ),
      //from pipe_ID_EX to pipe_EX_LS 数据路径
      .i_exu_lden   (exu_lden             ),
      .i_exu_rdwen   (exu_rdwen             ),
      .i_exu_rd_addr (exu_rdid),
      //from EXU
      .i_exu_exres   (exu_exres                    ),
      //from LSU
      .i_lsu_lden   (lsu_lden             ),
      .i_lsu_rdwen   (lsu_rdwen             ),
      .i_lsu_rd_addr (lsu_rdid           ),
      .i_lsu_lsres   (lsu_lsres                    ),
      .i_lsu_exres   (lsu_exres             ),
      //from WBU
      .i_wbu_rdwen   (wbu_rdwen                    ),
      .i_wbu_rd_addr (wbu_rdid                  ),
      .i_wbu_rd_data (wbu_rd                  ),
      //to pipe_ID_EX、BRU
      .o_idu_rs1_data(idu_rs1   ),
      .o_idu_rs2_data(idu_rs2   ),
      //to BRU
      .o_pc_wen      (pc_wen                       ),
      //to pipe_IF_ID
      .o_ifid_wen    (ifid_wen                     ),
      //to pipe_ID_EX
      .o_idex_bubble (idex_bubble                  ),
      
      /*generate reg-store*/
      //from pipe_ID_EX to EXU 数据路径
      .i_exu_rs2     (exu_rs2   ),
      //from pipe_ID_EX
      .i_exu_ldstbp  (exu_ldstbp                   ),
      //to pipe_ID_EX
      .o_idu_ldstbp  (idu_ldstbp                   ),
      //to pipe_EX_LS
      .o_exu_rs2     (exu_rs2_bp   ),
      //for sim
      .s_a0zero      (s_a0zero                     )
    );
    
    
    
/*2.7:BRU *////////////////////////////////////////////////
    //from bypass
    // wire [`CPU_WIDTH-1:0]     rs1_data_bypass2BRU;
    // wire [`CPU_WIDTH-1:0]     rs2_data_bypass2BRU;

    // assign rs1_data_bypass2BRU = rs1_data_bypass2pipe_ID_EX;
    // assign rs2_data_bypass2BRU = rs2_data_bypass2pipe_ID_EX;

    // //from pipe_IF_ID come to pipe_ID_EX 的数据路径
    // wire [`CPU_WIDTH-1:0]     prepc_pipe_IF_ID2BRU;
    
    // assign prepc_pipe_IF_ID2BRU = pc_pipe_IF_ID2pipe_ID_EX;
    
    // ysyx_22050078_BRU u_BRU(
    //   .clk            (clk                 ),
    //   .rst_n          (rst_n_sync          ),
    //   //from bypass
    //   .i_pcwen        (pc_wen              ),
    //   .i_rs1_data     (rs1_data_bypass2BRU ),
    //   .i_rs2_data     (rs2_data_bypass2BRU ),
    //   //from IDU
    //   .i_brch         (brch_IDU2BRU        ),
    //   .i_jal          (jal_IDU2BRU         ),
    //   .i_jalr         (jalr_IDU2BRU        ),
    //   .i_bfunc3       (bfunc3_IDU2BRU      ),
    //   .i_imm          (idu_imm             ),
    //   .i_prepc        (prepc_pipe_IF_ID2BRU),
    //   //to IFU,
    //   .o_pc           (pc                  ),
    //   .o_if2id_bubble (ifid_bubble         )
    // );

    ysyx_22050078_BRU u_BRU(
      .i_clk            (i_clk                 ),
      .i_rst_n          (rst_n_sync          ),
      //from bypass
      .i_pcwen        (pc_wen              ),
      .i_rs1_data     (idu_rs1 ),
      .i_rs2_data     (idu_rs2 ),
      //from IDU
      .i_brch         (idu_brch        ),
      .i_jal          (idu_jal         ),
      .i_jalr         (idu_jalr        ),
      .i_bfunc3       (idu_bfun3      ),
      .i_imm          (idu_imm             ),
      .i_prepc        (idu_pc),
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
    diff_read_pc(s_wbu_diffpc);
    // diff_read_pc(pc);
  end
  
/*3.2: update wb stage finish. *////////////////////////////////////////////////
  import "DPI-C" function void rtl_pmem_read (input longint raddr, output longint rdata, input bit ren);
  import "DPI-C" function bit check_finish(input int finish_flag);
  import "DPI-C" function void check_error();
  import "DPI-C" function void check_good_or_bad(input bit rst_flag, input longint rtl_pc);
  
  wire [`CPU_WIDTH-1:0] s_wbu_inst;
  wire [`INST_WIDTH-1:0] check_inst;
  // assign s_wbu_inst = inst_IFU2pipe_IF_ID;

  always @(*) begin
    // $display("s_wbu_diffpc = %h", s_wbu_diffpc);
    rtl_pmem_read (s_wbu_diffpc, s_wbu_inst, i_rst_n);
  end

  assign check_inst = s_wbu_inst[`INST_WIDTH-1:0];

  always @(*) begin
    // rtl_pmem_read (s_wbu_diffpc, s_wbu_inst, rst_n);
    if(check_finish(check_inst)) begin //inst == ebreak
      $display("\n----------EBREAK: HIT !!%s!! TRAP!!---------------\n", s_a0zero ? "GOOD":"BAD");
      check_good_or_bad(~s_a0zero, s_wbu_diffpc);
      $finish;
    end
  end

  // always @(*) begin
  //   if(rst_n_sync & |inst_pipe_IF_ID2IDU & s_id_err[0]) begin
  //       $display("\n----------inst decode error, pc = %x, opcode == %b---------------\n", pc_IFU2pipe_IF_ID, inst_pipe_IF_ID2IDU[ 6: 0] );
  //       check_error();
  //    end
  //   if(rst_n_sync & |inst_pipe_IF_ID2IDU & s_id_err[1]) begin
  //       $display("\n----------inst decode error, pc = %x, funct3 == %b---------------\n", pc_IFU2pipe_IF_ID, inst_pipe_IF_ID2IDU[14:12] );
  //       check_error();
  //    end
  //   if(rst_n_sync & |inst_pipe_IF_ID2IDU & s_id_err[2]) begin
  //       $display("\n----------inst decode error, pc = %x, funct7 == %b---------------\n", pc_IFU2pipe_IF_ID, inst_pipe_IF_ID2IDU[31: 25]);
  //       check_error();
  //    end
  //   if(rst_n_sync & |inst_pipe_IF_ID2IDU & |s_id_err) begin
  //       $finish;
  //    end
  // end   

   always @(*) begin
    if(rst_n_sync & |ifu_ins_r & s_id_err[0]) begin
        $display("\n----------inst decode error, pc = %x, opcode == %b---------------\n", ifu_pc_r, ifu_ins_r[ 6: 0] );
        check_error();
     end
    if(rst_n_sync & |ifu_ins_r & s_id_err[1]) begin
        $display("\n----------inst decode error, pc = %x, funct3 == %b---------------\n", ifu_pc_r, ifu_ins_r[14:12] );
        check_error();
     end
    if(rst_n_sync & |ifu_ins_r & s_id_err[2]) begin
        $display("\n----------inst decode error, pc = %x, funct7 == %b---------------\n", ifu_pc_r, ifu_ins_r[31: 25]);
        check_error();
     end
    if(rst_n_sync & |ifu_ins_r & |s_id_err) begin
        $finish;
     end
  end     
    
    

endmodule



// `include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/core/defines.sv"
// module ysyx_22050078_npc(
//   input                 i_clk   ,
//   input                 i_rst_n
// );
//   // 1.rst : ////////////////////////////////////////////////////////
//   logic rst_n_sync;
//   stl_rst u_stl_rst(
//   	.i_clk        (i_clk      ),
//     .i_rst_n      (i_rst_n    ),
//     .o_rst_n_sync (rst_n_sync )
//   );
  
//   // 2.cpu:  ////////////////////////////////////////////////////////
//   // control signals:
//   logic [`CPU_WIDTH-1:0]  pc;
//   logic pc_wen, ifid_wen, ifid_bubble, idex_bubble, idu_ldstbp, exu_ldstbp;

//   // simulation signals:
//   logic [2:0]             s_id_err;
//   logic                   s_a0zero;
//   logic [`CPU_WIDTH-1:0]  s_idu_diffpc,s_exu_diffpc,s_lsu_diffpc,s_wbu_diffpc;

//   // 2.1 ifu ///////////////////////////////////////////////
//   logic [`CPU_WIDTH-1:0]  ifu_pc,ifu_pc_r;
//   logic [`INS_WIDTH-1:0]  ifu_ins,ifu_ins_r;

//   assign ifu_pc = pc;

//   ysyx_22050078_IFU u_ifu(
//     .i_rst_n (rst_n_sync),
//     .i_pc    (ifu_pc    ),
//     .o_ins   (ifu_ins   )
//   );

//   ysyx_22050078_pipe_if_id u_pipe_if_id(
//     .i_clk        (i_clk        ),
//     .i_rst_n      (rst_n_sync   ),
//     .i_wen        (ifid_wen     ),
//     .i_bubble     (ifid_bubble  ),
//     .i_ifu_ins    (ifu_ins      ),
//     .i_ifu_pc     (ifu_pc       ),
//     .o_idu_ins    (ifu_ins_r    ),
//     .o_idu_pc     (ifu_pc_r     ),
//     .s_idu_diffpc (s_idu_diffpc )
//   );

//   // 2.2 idu ///////////////////////////////////////////////
//   // for next stage:
//   logic [`REG_ADDRW-1:0]      idu_rs1id,idu_rs2id;
//   logic [`REG_ADDRW-1:0]      idu_rdid,idu_rdid_r;
//   logic                       idu_rdwen,idu_rdwen_r;
//   logic [`CPU_WIDTH-1:0]      idu_imm,idu_imm_r;
//   logic [`CPU_WIDTH-1:0]      idu_rs1,idu_rs1_r;
//   logic [`CPU_WIDTH-1:0]      idu_rs2,idu_rs2_r;
//   logic [`EXU_SEL_WIDTH-1:0]  idu_src_sel,idu_src_sel_r;
//   logic [`EXU_OPT_WIDTH-1:0]  idu_exopt,idu_exopt_r;
//   logic [2:0]                 idu_lsfunc3,idu_lsfunc3_r;
//   logic                       idu_lden,idu_lden_r;
//   logic                       idu_sten,idu_sten_r;
//   logic [`CPU_WIDTH-1:0]      idu_pc,idu_pc_r;
//   // for branch uint:
//   logic                       idu_jal,idu_jalr,idu_brch;
//   logic [2:0]                 idu_bfun3;

//   ysyx_22050078_IDU u_idu(
//     .i_ins       (ifu_ins_r   ),
//     .o_rs1id     (idu_rs1id   ),
//     .o_rs2id     (idu_rs2id   ),
//     .o_rdid      (idu_rdid    ),
//     .o_rdwen     (idu_rdwen   ),
//     .o_imm       (idu_imm     ),
//     .o_src_sel   (idu_src_sel ),
//     .o_exopt     (idu_exopt   ),
//     .o_lsu_func3 (idu_lsfunc3 ),
//     .o_lsu_lden  (idu_lden    ),
//     .o_lsu_sten  (idu_sten    ),
//     .o_jal       (idu_jal     ),
//     .o_jalr      (idu_jalr    ),
//     .o_brch      (idu_brch    ),
//     .o_bfun3     (idu_bfun3   ),
//     .s_id_err    (s_id_err    )
//   );

//   assign idu_pc = ifu_pc_r;

//   ysyx_22050078_pipe_id_ex u_pipe_id_ex(
//     .i_clk         (i_clk         ),
//     .i_rst_n       (rst_n_sync    ),
//     .i_bubble      (idex_bubble   ),
//     .i_idu_imm     (idu_imm       ),
//     .i_idu_rs1     (idu_rs1       ),
//     .i_idu_rs2     (idu_rs2       ),
//     .i_idu_rdid    (idu_rdid      ),
//     .i_idu_rdwen   (idu_rdwen     ),
//     .i_idu_src_sel (idu_src_sel   ),
//     .i_idu_exopt   (idu_exopt     ),
//     .i_idu_func3   (idu_lsfunc3   ),
//     .i_idu_lden    (idu_lden      ),
//     .i_idu_sten    (idu_sten      ),
//     .i_idu_ldstbp  (idu_ldstbp    ),
//     .i_idu_pc      (idu_pc        ),
//     .s_idu_diffpc  (s_idu_diffpc  ),
//     .o_exu_imm     (idu_imm_r     ),
//     .o_exu_rs1     (idu_rs1_r     ),
//     .o_exu_rs2     (idu_rs2_r     ),
//     .o_exu_rdid    (idu_rdid_r    ),
//     .o_exu_rdwen   (idu_rdwen_r   ),
//     .o_exu_src_sel (idu_src_sel_r ),
//     .o_exu_exopt   (idu_exopt_r   ),
//     .o_exu_func3   (idu_lsfunc3_r ),
//     .o_exu_lden    (idu_lden_r    ),
//     .o_exu_sten    (idu_sten_r    ),
//     .o_exu_ldstbp  (exu_ldstbp    ),
//     .o_exu_pc      (idu_pc_r      ),
//     .s_exu_diffpc  (s_exu_diffpc  )
//   );

  

//   // 2.3 exu ///////////////////////////////////////////////
//   logic [`CPU_WIDTH-1:0]      exu_exres,exu_exres_r;
//   logic [`CPU_WIDTH-1:0]      exu_rs2,exu_rs2_bp,exu_rs2_r;
//   logic [`REG_ADDRW-1:0]      exu_rdid,exu_rdid_r;
//   logic                       exu_rdwen,exu_rdwen_r;
//   logic [2:0]                 exu_lsfunc3,exu_lsfunc3_r;
//   logic                       exu_lden,exu_lden_r;
//   logic                       exu_sten,exu_sten_r;

//   ysyx_22050078_EXU u_exu(
//     .i_pc      (idu_pc_r      ),
//     // .i_rs1     (idu_rs1_r     ),
//     // .i_rs2     (idu_rs2_r     ),
//     .i_rs1_data     (idu_rs1_r     ),
//     .i_rs2_data     (idu_rs2_r     ),
//     .i_imm     (idu_imm_r     ),
//     .i_src_sel (idu_src_sel_r ),
//     .i_exopt   (idu_exopt_r   ),
//     .o_exu_res (exu_exres     )
//   );

//   assign exu_rs2 = idu_rs2_r;
//   assign exu_rdid = idu_rdid_r;
//   assign exu_rdwen = idu_rdwen_r;
//   assign exu_lsfunc3 = idu_lsfunc3_r;
//   assign exu_lden = idu_lden_r;
//   assign exu_sten = idu_sten_r;

//   ysyx_22050078_pipe_ex_ls u_pipe_ex_ls(
//     .i_clk        (i_clk        ),
//     .i_rst_n      (rst_n_sync   ),
//     .i_exu_exres  (exu_exres    ),
//     // .i_exu_rs2    (exu_rs2_bp   ),
//     // .i_exu_rdid   (exu_rdid     ),
//     .i_exu_rs2_data    (exu_rs2_bp   ),
//     .i_exu_rd_addr   (exu_rdid     ),
//     .i_exu_rdwen  (exu_rdwen    ),
//     .i_exu_func3  (exu_lsfunc3  ),
//     .i_exu_lden   (exu_lden     ),
//     .i_exu_sten   (exu_sten     ),
//     .s_exu_diffpc (s_exu_diffpc ),
//     .o_lsu_exres  (exu_exres_r  ),
//     // .o_lsu_rs2    (exu_rs2_r    ),
//     // .o_lsu_rdid   (exu_rdid_r   ),
//     .o_lsu_rs2_data    (exu_rs2_r    ),
//     .o_lsu_rd_addr   (exu_rdid_r   ),
//     .o_lsu_rdwen  (exu_rdwen_r  ),
//     .o_lsu_func3  (exu_lsfunc3_r),
//     .o_lsu_lden   (exu_lden_r   ),
//     .o_lsu_sten   (exu_sten_r   ),
//     .s_lsu_diffpc (s_lsu_diffpc )
//   );

//   // 2.4 lsu ///////////////////////////////////////////////
//   logic [`CPU_WIDTH-1:0]      lsu_exres,lsu_exres_r;
//   logic [`CPU_WIDTH-1:0]      lsu_lsres,lsu_lsres_r;
//   logic                       lsu_lden, lsu_lden_r;
//   logic [`REG_ADDRW-1:0]      lsu_rdid, lsu_rdid_r;
//   logic                       lsu_rdwen,lsu_rdwen_r;

//   ysyx_22050078_LSU u_lsu(
//     .i_clk     (i_clk         ),
//     .i_lsfunc3 (exu_lsfunc3_r ),
//     .i_lden    (exu_lden_r    ),
//     .i_sten    (exu_sten_r    ),
//     .i_addr    (exu_exres_r   ),
//     .i_regst   (exu_rs2_r     ),
//     .o_regld   (lsu_lsres     )
//   );

//   assign lsu_exres = exu_exres_r;
//   assign lsu_lden  = exu_lden_r;
//   assign lsu_rdid  = exu_rdid_r;
//   assign lsu_rdwen = exu_rdwen_r;

//   ysyx_22050078_pipe_ls_wb u_pipe_ls_wb(
//   	.i_clk        (i_clk        ),
//     .i_rst_n      (rst_n_sync   ),
//     .i_lsu_exres  (lsu_exres    ),
//     .i_lsu_lsres  (lsu_lsres    ),
//     // .i_lsu_rdid   (lsu_rdid     ),
//     .i_lsu_rd_addr   (lsu_rdid     ),
//     .i_lsu_rdwen  (lsu_rdwen    ),
//     .i_lsu_lden   (lsu_lden     ),
//     .s_lsu_diffpc (s_lsu_diffpc ),
//     .o_wbu_exres  (lsu_exres_r  ),
//     .o_wbu_lsres  (lsu_lsres_r  ),
//     // .o_wbu_rdid   (lsu_rdid_r   ),
//     .o_wbu_rd_addr   (lsu_rdid_r   ),
//     .o_wbu_rdwen  (lsu_rdwen_r  ),
//     .o_wbu_lden   (lsu_lden_r   ),
//     .s_wbu_diffpc (s_wbu_diffpc  )
//   );

//   // 2.5 wbu ///////////////////////////////////////////////
//   logic [`CPU_WIDTH-1:0]      wbu_rd;
//   logic [`REG_ADDRW-1:0]      wbu_rdid;
//   logic                       wbu_rdwen;

//   assign wbu_rdid  = lsu_rdid_r ;
//   assign wbu_rdwen = lsu_rdwen_r;
//   ysyx_22050078_WBU u_wbu(
//     .i_exu_res (lsu_exres_r ),
//     .i_lsu_res (lsu_lsres_r ),
//     .i_load_en  (lsu_lden_r  ),
//     .o_rd      (wbu_rd      )
//   );

//   // 2.6 bypass, regfile read/write. ///////////////////////
//   ysyx_22050078_bypass u_bypass(
//     .i_clk         (i_clk         ),
//     // generate rs1,rs2:
//     // .i_idu_rs1id   (idu_rs1id     ),
//     // .i_idu_rs2id   (idu_rs2id     ),
//     .i_idu_rs1_addr   (idu_rs1id     ),
//     .i_idu_rs2_addr   (idu_rs2id     ),
//     .i_idu_sten    (idu_sten      ),
//     .i_exu_lden    (exu_lden      ),
//     .i_exu_rdwen   (exu_rdwen     ),
//     // .i_exu_rdid    (exu_rdid      ),
//     .i_exu_rd_addr    (exu_rdid      ),
//     .i_exu_exres   (exu_exres     ),
//     .i_lsu_lden    (lsu_lden      ),
//     .i_lsu_rdwen   (lsu_rdwen     ),
//     // .i_lsu_rdid    (lsu_rdid      ),
//     .i_lsu_rd_addr    (lsu_rdid      ),
//     .i_lsu_lsres   (lsu_lsres     ),
//     .i_lsu_exres   (lsu_exres     ),   
//     .i_wbu_rdwen   (wbu_rdwen     ),
//     // .i_wbu_rdid    (wbu_rdid      ),
//     // .i_wbu_rd      (wbu_rd        ),
//     // .o_idu_rs1     (idu_rs1       ),
//     // .o_idu_rs2     (idu_rs2       ),
//     .i_wbu_rd_addr    (wbu_rdid      ),
//     .i_wbu_rd_data      (wbu_rd        ),
//     .o_idu_rs1_data     (idu_rs1       ),
//     .o_idu_rs2_data     (idu_rs2       ),
//     .o_pc_wen      (pc_wen        ),
//     .o_ifid_wen    (ifid_wen      ),
//     .o_idex_bubble (idex_bubble   ),
//     // generate regst:
//     .i_exu_rs2     (exu_rs2       ),
//     .o_idu_ldstbp  (idu_ldstbp    ),
//     .i_exu_ldstbp  (exu_ldstbp    ),
//     .o_exu_rs2     (exu_rs2_bp    ),
//     .s_a0zero      (s_a0zero      )
//   );

//   // 2.7 bru ///////////////////////////////////////////////
//   ysyx_22050078_BRU u_bru(
//     .i_clk        (i_clk       ),
//     .i_rst_n      (rst_n_sync  ),
//     .i_pcwen      (pc_wen      ),
//     .i_jal        (idu_jal     ),
//     .i_jalr       (idu_jalr    ),
//     .i_brch       (idu_brch    ),
//     // .i_bfun3      (idu_bfun3   ),
//     // .i_rs1        (idu_rs1     ),
//     // .i_rs2        (idu_rs2     ),
//     .i_bfunc3      (idu_bfun3   ),
//     .i_rs1_data        (idu_rs1     ),
//     .i_rs2_data        (idu_rs2     ),
//     .i_imm        (idu_imm     ),
//     .i_prepc      (idu_pc      ),
//     .o_pc         (pc          ),
//     // .o_ifid_bubble(ifid_bubble )
//     .o_if2id_bubble(ifid_bubble )
//   );

//   // 3.sim:  ////////////////////////////////////////////////////////
//   // 3.1 update rst state and wb stage pc to sim.
//   import "DPI-C" function void check_rst(input bit rst_flag);
//   import "DPI-C" function void diff_read_pc(input longint rtl_pc);
//   always @(*) begin
//     check_rst(rst_n_sync);
//     diff_read_pc(s_wbu_diffpc);
//   end

//   // 3.2 update wb stage finish.
//   import "DPI-C" function void rtl_pmem_read (input longint raddr, output longint rdata, input bit ren);
//   import "DPI-C" function bit check_finish(input int ins);
//   import "DPI-C" function void check_error();
//   import "DPI-C" function void check_good_or_bad(input bit rst_flag, input longint rtl_pc);
  
//   wire [`CPU_WIDTH-1:0] s_wbu_ins;
//   wire [`INS_WIDTH-1:0] check_inst;

//   always@(*)begin
//     rtl_pmem_read (s_wbu_diffpc, s_wbu_ins, i_rst_n);
//     if(check_finish({s_wbu_ins & `CPU_WIDTH'h00000000FFFFFFFF}[`INS_WIDTH-1:0]))begin  //ins == ebreak.
//       // $display("\n----------EBREAK: HIT !!%s!! TRAP!!---------------\n",s_a0zero? "GOOD":"BAD");
//       check_good_or_bad(~s_a0zero, s_wbu_diffpc);
//       $finish;
//     end
//   end

//   always@(*)begin
//     if(rst_n_sync & |ifu_ins_r & s_id_err[0]) $display("\n----------ins decode error, pc = %x, opcode == %b---------------\n",ifu_pc_r,ifu_ins_r[ 6: 0] );
//     if(rst_n_sync & |ifu_ins_r & s_id_err[1]) $display("\n----------ins decode error, pc = %x, funct3 == %b---------------\n",ifu_pc_r,ifu_ins_r[14:12] );
//     if(rst_n_sync & |ifu_ins_r & s_id_err[2]) $display("\n----------ins decode error, pc = %x, funct7 == %b---------------\n",ifu_pc_r,ifu_ins_r[31:25] );
//     if(rst_n_sync & |ifu_ins_r & |s_id_err ) $finish; //ins docode err.
//   end


// endmodule
