#include "include.h"
#include "common.h"
#include "macro.h"
#include "utils.h"

void set_nemu_state(int state, vaddr_t pc, int halt_ret) {
  // difftest_skip_ref();
  npc_state.state = state;
  npc_state.halt_pc = pc;
  npc_state.halt_ret = halt_ret;
}
