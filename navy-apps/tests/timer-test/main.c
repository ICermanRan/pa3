#include <sys/time.h>
#include <stdio.h>
#include <NDL.h>

int main() {
  // int sec = 1;
  // struct timeval timer;
  // timer.tv_sec  = 0;
  // timer.tv_usec = 0;
  // while(1) {
  //   while(timer.tv_sec < sec) {
  //     gettimeofday(&timer, NULL);
  //   }
  //   printf("timer: %dseconds\n", sec);
  //   sec++;
  // }

  /****************************************/
  // uint32_t sec   = 1;
  // uint32_t sec_t = 0;

  // while(1) {
  //   while(sec_t < sec) {
  //     sec_t = NDL_GetTicks() / 1000;//因为NDL_GetTicks()以ms为单位返回,而1s = 1000ms
  //   }
  //   printf("timer: %d seconds\n", sec);
  //   sec++;
  // }
  /**************************************/
    int i=0;
  while(NDL_GetTicks()/500){
    printf("%d time has gone 0.5s\n",i);
    i++;
  }
  return 0;
}