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
#include <memory/paddr.h>
#include "local-include/reg.h"

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
// 这就是所谓的内置程序
static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;

  /* Set the initial mstatus register for interrupt. */
  // cpu.csr[4] = 0xa00001800;//mstatus = 0xa00001800;
  csr(mstatus) = 0xa00001800;
}

//init_isa()-设置状态机的初始状态，干了两件事
//第一件事：往Memory中存放程序-通过memcpy()往M中拷贝一段内置程序img
//第二件事：调用restart()-设置cpu.pc = RESET_VECTOR, 该值可通过menuconfig配置, 默认为0x80000000
                      //-设置cpu.gpr[0] = 0, 0号寄存器恒为0
void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
