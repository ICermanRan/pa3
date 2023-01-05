/***********************
author:ran
description:译码模块
*************************/
`include "vsrc/defines.v"
module ysyx_220578_IDU 
#(parameter ADDR_WIDTH = 5, 
            DATA_WIDTH = 64, 
            INST_WIDTH = 32, 
            INSTADDR_WIDTH = 64, 
            PC_WIDTH = 64)
(
    //from IFU
    input [INST_WIDTH - 1:0] inst_in,          //32位指令
    input [PC_WIDTH - 1:0] pc_in,     //指令地址 
    
    //from regs
    input [DATA_WIDTH-1:0] src1_in,  //源寄存器1数据
    input [DATA_WIDTH-1:0] src2_in,  //源寄存器2数据
    
    //to regs
    output [ADDR_WIDTH - 1:0] rs1_addr,           //源寄存器1(地址)
    output [ADDR_WIDTH - 1:0] rs2_addr,           //源寄存器2(地址)
    
    //to EXU
    output [INST_WIDTH - 1:0] inst_out,          //32位指令
    //output [31:0]         pc_out,     //指令地址 
    output [6:0] opcode,        //7位操作码
    output [4:0] rd_addr,            //目标寄存器(地址)
    output reg [DATA_WIDTH-1:0] op1,         //源寄存器1数据
    output reg [DATA_WIDTH-1:0] op2,         //源寄存器2数据
    output [2:0] func3,   
    output [6:0] func7
    //output reg [31:0] imm           //符号扩展后的32位立即数
);


    // wire I_type;
    // wire U_type;
    // wire S_type;
    // wire J_type;
    // wire R_type;
    // wire B_type;

    wire [DATA_WIDTH - 1:0] I_imm;
    wire [DATA_WIDTH - 1:0] U_imm;
    wire [DATA_WIDTH - 1:0] S_imm;
    wire [DATA_WIDTH - 1:0] J_imm;
    wire [DATA_WIDTH - 1:0] R_imm;
    wire [DATA_WIDTH - 1:0] B_imm;


//把指令及指令地址传给EXU 
    assign inst_out = inst_in;
    //assign inst_addr_out = inst_addr_in;

//对指令inst译码，赋给不同的操作数
    assign opcode = inst_in[6 : 0];
    assign rs1_addr = inst_in[19 : 15];
    assign rs2_addr = inst_in[24 : 20];
    assign rd_addr = inst_in[11 : 7];
    assign func3 = inst_in[14 : 12];
    assign func7  = inst_in[31:25];

 //不同指令类型的立即数产生(要实现符号位扩展,这里是扩展到64位)
    assign I_imm = { {52{inst_in[31]}}, inst_in[31:20] };//符号位扩展
    assign U_imm = { inst_in[31:12], {44{1'b0}} };
    assign J_imm = { {43{inst_in[31]}}, inst_in[31], inst_in[19:12], inst_in[20], inst_in[30:21], 1'b0};
    assign B_imm = { {51{inst_in[31]}}, inst_in[31], inst_in[7], inst_in[30:25], inst_in[11:8], 1'b0};
    assign S_imm = { {52{inst_in[31]}}, inst_in[31:25], inst_in[11:7]};



    always@(*) begin
        case(opcode)
            `ysyx_220578_INST_TYPE_I:begin
                case(func3)
                    `ysyx_220578_INSTfunc3_addi:begin
                        //rs1_addr = inst[19 : 15];
                        //rs2_addr = inst[24 : 20];
                        //rd = inst[11 : 7];
                        op1     = src1_in;   
                        op2     = I_imm;
                    end
                    
                    default:begin
                        op1     = 64'b0;   
                        op2     = 64'b0;
                    end
                endcase
            end
            default:begin
                op1     = 64'b0;   
                op2     = 64'b0;
            
            end
        endcase

    end
endmodule
