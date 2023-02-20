#include <time.h>
#include <sys/time.h>
#include <stdio.h>
static struct timeval tv_begin ={tv_sec:0,tv_usec:0};
int main(int argc, char *argv[]) {
  struct timeval tv_end;



  while(1){
    
    gettimeofday(&tv_end,NULL);
    // printf("tv_end is %ld\n",tv_end.tv_usec);
  if((tv_end.tv_usec + tv_end.tv_sec*1000000 - tv_begin.tv_usec - tv_begin.tv_sec*1000000)>= 500000){
    
    printf("tv_end is %ld\n",tv_end.tv_usec + tv_end.tv_sec*1000000);
    // printf("diff is %ld\n",tv_end.tv_usec - tv_begin.tv_usec);
    tv_begin.tv_usec = tv_end.tv_usec;
    tv_begin.tv_sec =  tv_end.tv_sec;
  }}
}
