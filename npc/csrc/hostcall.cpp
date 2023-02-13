#include "../include/include.h"
#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/common.h"
#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/macro.h"
#include "/home/ran/ysyx/ysyx-workbench/npc/csrc/include/utils.h"

void set_nemu_state(int state, vaddr_t pc, int halt_ret) {
  // difftest_skip_ref();
  npc_state.state = state;
  npc_state.halt_pc = pc;
  npc_state.halt_ret = halt_ret;
}
