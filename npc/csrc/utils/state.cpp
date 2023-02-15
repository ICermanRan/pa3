#include "utils.h"

NPCState npc_state = { .state = NPC_STOP };


int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ||
    (npc_state.state == NPC_QUIT);
  // printf("good = %d", good);
   return !good;
  // return good;
}