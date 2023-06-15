/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "../local-include/reg.h"

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  // cpu.mepc = epc;   // PC -> CSR[mepc];将当前PC值保存到mepc寄存器
  // cpu.mcause = NO;  // NO -> CSR[mcause];在mcause寄存器中设置异常号
  csr(mepc)   = epc;
  csr(mcause) = NO;

  #ifdef CONFIG_ETRACE
    // printf("ETRACE interrupt/exception: mepc == %lx, mcause == %lx, mtvec == %lx\n", cpu.mepc, cpu.mcause, cpu.mtvec);
    Log_cyan("ETRACE interrupt/exception: mepc == %lx, mcause == %lx, mtvec == %lx, mstatus == %lx", csr(mepc), csr(mcause), csr(mtvec), csr(mstatus));  
  #endif
  // return cpu.mtvec; // CSR[mtvec] -> handler_addr;从mtvec寄存器中取出异常入口地址
  //Log_cyan("异常入口地址 cpu.mtvec = %lx", csr(mtvec));
  return csr(mtvec);

}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
