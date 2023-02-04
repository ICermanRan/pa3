/***********************
author:ran
description:执行模块
*************************/
`include "/home/ran/ysyx/ysyx-workbench/npc/vsrc/defines.v"

module ysyx_22050078_EXU #(parameter ADDR_WIDTH = 5, DATA_WIDTH = 64, INST_WIDTH = 32)
(
    //from IDU
    input [INST_WIDTH - 1:0] inst_in,          //32位指令
    //input [31:0] inst_addr_in,     //指令地址 
    input [6:0] opcode,        //7位操作码
    input [4:0] rd_addr_in,            //目标寄存器(地址)
    input [DATA_WIDTH - 1:0] op1,         //源寄存器1数据
    input [DATA_WIDTH - 1:0] op2,         //源寄存器2数据
    input [2:0] func3,   
    input [6:0] func7,

   
    //to reg
    output reg [ADDR_WIDTH - 1:0] rd_addr_out,
    output reg [DATA_WIDTH - 1:0] rd_data_out,
    output reg rd_wen
);

 

    always@(*) begin
        case(opcode)
            `ysyx_22050078_INST_TYPE_I:begin
                case(func3)
                    `ysyx_22050078_INSTfunc3_addi:begin
                        rd_data_out = op1 + op2;
                        rd_addr_out = rd_addr_in;
                        rd_wen = 1'b1;
                    end

                    default:begin
                        rd_data_out = 64'b0;
                        rd_addr_out = 5'b0;
                        rd_wen = 1'b0;
                    end
                endcase
            
            end

            default:begin
                rd_data_out = 64'b0;
                rd_addr_out = 5'b0;
                rd_wen = 1'b0;
            end
        endcase
    end













endmodule
