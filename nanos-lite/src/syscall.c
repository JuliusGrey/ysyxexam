#include <common.h>
#include "syscall.h"
#include <proc.h>
// enum {
//   SYS_exit,
//   SYS_yield,
//   SYS_open,
//   SYS_read,
//   SYS_write,
//   SYS_kill,
//   SYS_getpid,
//   SYS_close,
//   SYS_lseek,
//   SYS_brk,
//   SYS_fstat,
//   SYS_time,
//   SYS_signal,
//   SYS_execve,
//   SYS_fork,
//   SYS_link,
//   SYS_unlink,
//   SYS_wait,
//   SYS_times,
//   SYS_gettimeofday
// };
// int sys_write(int fd, const void *buf, size_t count){
//   // printf("come to here!!!\n");
//   switch (fd)
//   {
//   case 1:
//     {int i = 0;
//      char *buf_c = (char *)buf;
//     for(int k = 0; k <count; k++){
//       if(buf_c[k] =='\0'){
//         return i;
//       }else{
//         i++;
//         putch(buf_c[k]);
//       }
//     }
//     return i;}
//     break;
//   case 2:
//     {int i = 0;
//      char *buf_c = (char *)buf;
//     for(int k = 0; k <count; k++){
//       if(buf_c[k] =='\0'){
//         return i;
//       }else{
//         i++;
//         putch(buf_c[k]);
//       }
//     }
//     return i;}
//     break;
  
//   default:
//   return -1;
//     break;
//   }
// }
int fs_gettimeofday(void* tv, void*tz){
  uint64_t time_us = io_read(AM_TIMER_UPTIME).us;
  uint64_t* tv_u64 = tv;
  // *test = 0;
  // *(test + 1) = 0;
  *(tv_u64 )  = time_us / 1000000;
  *(tv_u64 + 1)  = time_us % 1000000;
  // printf("come to here");
  // return gettimeofday(tv, tz);
  return 0;

} 

int fs_execve( char *filename){
  // void naive_uload(PCB *pcb, const char *filename) ;
  naive_uload(NULL,filename);

  return -1;

} 

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  // if(a[0] != 4)printf("    a[0] %d\n",a[0]);
  // printf("a[0] is %d\n",a[0]);

  switch (a[0]) {
    case SYS_yield:yield();c ->GPRx = 0;break;
    case SYS_exit:c ->GPRx =fs_execve("/bin/menu");break;
    case SYS_write: c ->GPRx = fs_write(c ->GPR2,(void*)c ->GPR3,c ->GPR4);break;
    case SYS_brk: memcpy((void*)c ->GPR2, &c ->GPR3,8);c ->GPRx = 0;break;
    case SYS_open: c ->GPRx = fs_open((void*)c ->GPR2, c ->GPR3, c ->GPR4);break;
    case SYS_read: c ->GPRx = fs_read(c ->GPR2, (void*)c ->GPR3, c ->GPR4);break;
    case SYS_lseek: c ->GPRx = fs_lseek(c ->GPR2, c ->GPR3, c ->GPR4);break;
    case SYS_close: c ->GPRx = fs_close(c ->GPR2);break;
    case SYS_gettimeofday : c ->GPRx =fs_gettimeofday((void*)c ->GPR2,(void*)c ->GPR3);break;
    case SYS_execve : c ->GPRx =fs_execve((void*)c ->GPR2);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
