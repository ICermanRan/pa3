#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

//NAME(key)宏,用于将传入的"key"参数转换为对应的字符串
//使用'#'运算符,将key转换为字符串字面量
#define NAME(key) \
  [AM_KEY_##key] = #key,

//keyname字符指针数组,使用了宏定义和属性来初始化数组元素
static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE", //使用了一个名为AM_KEY_NONE的预定义常量作为索引，将数组的第一个元素设为字符串"NONE"
  AM_KEYS(NAME)           //然后使用AM_KEYS(NAME) 将展开后的具体键名作为索引，将对应的字符串赋值给数组的相应位置。
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  int i;
  for(i = 0; i < len; i++) {
    putch(*((char *)buf + i));
  }

  return i;
  // return 0;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  // AM_INPUT_KEYBRD_T keyboard = io_read(AM_INPUT_KEYBRD);
  // if (keyboard.keycode != 0) { //按键有效
  //   if (keyboard.keydown) { //按键按下
  //     //通过snprintf将事件写入到buf中,包括换行符\n
  //     printf("kd %s\n", keyname[keyboard.keycode]);
  //     snprintf((char *)buf, len, "kd %s", keyname[keyboard.keycode]);
  //   }
  //   else {                  //按键未按下
  //     //写入ku
  //     snprintf((char *)buf, len, "ku %s", keyname[keyboard.keycode]);
  //   }
    
  //   return len; //在按键有效情况下,返回写入的实际长度
  // }
  // else {  //按键无效
  //   return 0;
  // }
  AM_INPUT_KEYBRD_T keyboard = io_read(AM_INPUT_KEYBRD);
  if(keyboard.keycode == 0) { // there is no key down or up.
    return 0;
  }
  else {
    switch(keyboard.keydown) {
      case 0:  snprintf((char *)buf,len,"ku %2d %s\n", keyboard.keycode, keyname[keyboard.keycode]); break; 
      case 1:  snprintf((char *)buf,len,"kd %2d %s\n", keyboard.keycode, keyname[keyboard.keycode]); break; 
    }
    return len;
  } 

}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  // printf("屏幕大小-WIDTH:%d HEIGHT:%d\n", cfg.width, cfg.height);
  snprintf((char *)buf, len, "WIDTH:%d\nHEIGHT:%d\n", cfg.width, cfg.height);
  return 1;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T dispinfo = io_read(AM_GPU_CONFIG);
  AM_GPU_FBDRAW_T ctl;
  ctl.pixels = (void *)buf;
  ctl.sync   = true;
  // printf("fb_write offset = %d\n", offset);

  // there 2 method to support gpu, check fs.c init_fs() and navy-apps/libs/libndl/NDL.c: NDL_DrawRect() to match.

  // method 1: only write w for one time, and use loop to finish all, slow but support native.
  // ctl.x = (offset/4) % dispinfo.width;
  // ctl.y = (offset/4) / dispinfo.width;
  // ctl.w = len/4;
  // ctl.h = 1;

  // method 2: use high 32bit to store w, low 32bit to store h. fast but not support native!
  ctl.x      = offset % dispinfo.width;//偏移量对屏幕的宽度取模可以得到列数
  ctl.y      = offset / dispinfo.width;//因为每一行的字节数等于屏幕的宽度。所以 ctl.y = offset / dispinfo.width 表示偏移量所在的行数。
  ctl.w      = len >> 32;                 // high 32bit.
  ctl.h      = len & 0x00000000FFFFFFFF;  // low 32bit.

  // printf("ctl.x: %d, ctl.y: %d, ctl.w: %d, ctl.h: %d\n", ctl.x, ctl.y, ctl.w, ctl.h);
  io_write(AM_GPU_FBDRAW, ctl.x, ctl.y, ctl.pixels, ctl.w, ctl.h, ctl.sync);
  return 0;

}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
