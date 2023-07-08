#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <fcntl.h>  //使用其中的库函数open
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int canvas_w = 0, canvas_h = 0; 

// 以毫秒为单位返回系统时间
uint32_t NDL_GetTicks() {
  struct timeval timer;
  uint32_t one_ms;
  gettimeofday(&timer, NULL);
  one_ms = timer.tv_sec * 1000000;//1s = 1000ms
  return one_ms;
}

int NDL_PollEvent(char *buf, int len) {
  int fd = open("/dev/events", 0, 0);
  // printf("fd = %d\n", fd);
  if (read(fd, buf, len)) {
    // printf("读成功,返回1\n");
    return 1;
  }
  else {
    // printf("读失败,返回0\n");
    return 0;
  }
  close(fd);
}

void NDL_OpenCanvas(int *w, int *h) {
  int fd = open("/proc/dispinfo", 0, 0);
  if(fd == -1){
    printf("open /proc/dispinfo error");
    return ;
  }

  printf("fd = %d,打开画布成功\n", fd);
  char buf[64];
  if (read(fd, buf, sizeof(buf))) { //通过read->dispinfo_read,获取VGA屏幕大小
    printf("read屏幕成功,width: %d, height: %d\n", screen_w, screen_h);
    //通过sscanf将
    sscanf(buf, "WIDTH:%d\nHEIGHT:%d\n", &screen_w, &screen_h);//将buf中第一个%d的数值赋给screen_w, 第二个赋给screen_h
    assert(screen_w >= *w && screen_h >= *h);
    if (*w == 0 && *h == 0) {
      *w = screen_w;
      *h = screen_h;
    }
  }
  close(fd);
  
  // if (getenv("NWM_APP")) {
  //   int fbctl = 4;
  //   fbdev = 5;
  //   screen_w = *w; screen_h = *h;
  //   char buf[64];
  //   int len = sprintf(buf, "%d %d", screen_w, screen_h);
  //   // let NWM resize the window and create the frame buffer
  //   write(fbctl, buf, len);
  //   while (1) {
  //     // 3 = evtdev
  //     int nread = read(3, buf, sizeof(buf) - 1);
  //     if (nread <= 0) continue;
  //     buf[nread] = '\0';
  //     if (strcmp(buf, "mmap ok") == 0) break;
  //   }
  //   close(fbctl);
  // }
}

// 向画布`(x, y)`坐标处绘制`w*h`的矩形图像, 并将该绘制区域同步到屏幕上
// 图像像素按行优先方式存储在`pixels`中, 每个像素用32位整数以`00RRGGBB`的方式描述颜色
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  int fd = open("/dev/fb", 0, 0);
  if (fd == -1) {
    printf("open /dev/fb error");
    return ;
  }
  //获取画布/图片大小,方便后续绘制
  canvas_w = w;
  canvas_h = h;
  // printf("canvas_w = %d, canvas_h = %d\n", canvas_w, canvas_h);

  int canvas_xmin = screen_w/2 - canvas_w/2;//画布最左横坐标
  int canvas_xmax = screen_w/2 + canvas_w/2;//画布最右横坐标
  int canvas_ymin = screen_h/2 - canvas_h/2;//画布最上纵坐标
  int canvas_ymax = screen_h/2 + canvas_h/2;//画布最下纵坐标

  //画布绘制起始点(x,y)初始为(0,0),位于屏幕左上角
  //而在下面将x,y的值这样修改的原因,是为了让起始点到达画布居中时的左上角
  //((screen_h - h) / 2)表示居中画布离屏幕上方的行数,再乘以screen_w,则表示这些行数所占的像素
  //因为画布是从下一行的canvas_xmin处开始绘制,所以要加上一个((screen_w - w) / 2)
  //如此一来, x * y就表示:偏移量 offset 从屏幕缓冲区起始位置开始到canvas_xmin的像素偏移量
  x = 1;
  y = screen_w * ((screen_h - h) / 2) + ((screen_w - w) / 2);

  lseek(fd, x * y, SEEK_SET);//设置绘制坐标起始点
  //使用了一个技巧来存储矩形的宽度和高度,因为size_t是64位无符号数据类型
  //将屏幕宽度w存储在len的高32位, 将屏幕高度h存储在len的低32位
  //这样在fb_write就可以通过位运算获得屏幕大小信息
  write(fd, pixels, ((size_t)w << 32) | ((size_t)h & 0x00000000FFFFFFFF));

  close(fd);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  
  // int fd = open("/proc/dispinfo", 0, 0);
  // char buf[50];
  // read(fd, buf, 64);
  // int len = strlen(buf), flag = 0;

  // for(int i = 0; i < len; i++) {
  //   if ('0' <= buf[i] && buf[i] <= '9') {
  //     if (!flag) screen_w = screen_w * 10 + buf[i] - '0';
  //     else screen_h = screen_h * 10 + buf[i] - '0';
  //   } else if (buf[i] == ':') flag ^= 1;
  // }
  return 0;
}

void NDL_Quit() {
}
