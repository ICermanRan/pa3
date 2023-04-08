#include <am.h>
#include <npc.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  // kbd->keydown = 0;
  // kbd->keycode = AM_KEY_NONE;
   uint32_t code = inl(KBD_ADDR);
  // kbd->keydown = 0;
  // kbd->keycode = AM_KEY_NONE;
  //根据keyboard.c
    //keycode在按键按下时=0x80??,没有按键按下时=0x??
    //if down, keycode=键盘码??; kewdown=1
    //if not down, keycode=0x7f??; kewdown=0
  kbd->keydown = (code & KEYDOWN_MASK ? true : false);
  kbd->keycode = code & ~KEYDOWN_MASK;
}
