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
  AM_INPUT_KEYBRD_T keyboard = io_read(AM_INPUT_KEYBRD);
  if (keyboard.keycode != 0) { //按键有效
    if (keyboard.keydown) { //按键按下
      //通过snprintf将事件写入到buf中,包括换行符\n
      printf("kd %s\n", keyname[keyboard.keycode]);
      snprintf((char *)buf, len, "kd %s\n", keyname[keyboard.keycode]);
    }
    else {                  //按键未按下
      //写入ku
      snprintf((char *)buf, len, "ku %s\n", keyname[keyboard.keycode]);
    }
    
    return len; //在按键有效情况下,返回写入的实际长度
  }
  else {  //按键无效
    return 0;
  }
    
/***********************************************************/
  // char cbuf[30];
  // AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  // if (ev.keycode == AM_KEY_NONE) return 0;
  // int size = sprintf(cbuf, "k%s %s\n", ev.keydown ? "d" : "u", keyname[ev.keycode]);
  // int i;
  // for(i = 0; i < 30 && i < len && i < (size + 1); i++){ //把\0也复制过去,所以要加1
  //   *((char *)buf+i) = cbuf[i];
  // }
  // printf("------------%s--------%d\n", cbuf, size);
  // printf("------------%d %d\n", cbuf[5], cbuf[6]);
  // return i;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
