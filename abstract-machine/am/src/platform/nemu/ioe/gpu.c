#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

int width = 0;  // TODO: get the correct width
int height = 0;  // TODO: get the correct height

void __am_gpu_init() {

  //因为在初始化VGA时，映射起始地址上保存的值为
  //(screen_width() << 16) | screen_height();
  //可知，起始地址的值==height，高16bit即起始地址增加两个字节处保存的值为width
  height = inw(VGACTL_ADDR);     //H=012c    300  // only support 400*300*32
  // printf("h = %x\n", h);    //(解16位指针获取的值也是16位,但printf出来高位补0了)
  width = inw(VGACTL_ADDR + 2); //加2是因为一个word=2byte,正好读取映射地址对应的W=0190    400  // only support 400*300*32
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;//FB_ADDR==0xa1000000,VGA注册的一段映射到显存的MMIO空间
  // // printf("fb = %x\n", fb);
  // // printf("*fb = %x\n", *fb);
  // for (int i = 0; i < width * height; i ++) 
  // {
  //   fb[i] = i;
  //   // printf("fb[%d] = %d, *fb = %d\n", i, fb[i], *(fb+i));
  // }
  // outl(SYNC_ADDR, 1);
}

//AM_GPU_CONFIG, AM显示控制器信息,
//可读出屏幕大小信息width和height.
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    // .width = 0, .height = 0,
    // .vmemsz = 0
    .width = width, .height = height,
    .vmemsz = width*height*sizeof(uint32_t)
  };
}

//AM_GPU_FBDRAW, AM帧缓冲控制器
//可写入绘图信息, 向屏幕(x, y)坐标处绘制w*h的矩形图像
//图像像素按行优先方式存储在pixels中, 每个像素用32位整数以00RRGGBB的方式描述颜色. 
//若sync为true, 则马上将帧缓冲中的内容同步到屏幕上.
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;//fb指向显存地址
  uint32_t *pixels = (uint32_t *)ctl->pixels;//像素地址
  int x = ctl->x; 
  int y = ctl->y;
  int w = ctl->w; 
  int h = ctl->h;

  for(int j = 0; j < h; j++)//行
  {
    for(int i = 0; i < w; i++)//列
    {
      /*fb[下标] == *(fb+下标)，即给显存地址对应内存赋值 */
      fb[(x+i) + (y+j)*width] = *(pixels + i + j*w);//用二维数组排列思维:某个元素下标 = i+j*w(所在列+所在行*总列数)
    }
    
  }
  
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);//这里就是给vga_update_screen信号，同步屏幕
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
