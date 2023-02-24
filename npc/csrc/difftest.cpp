#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <fstream>
#include <cassert>
#include "common.h"
#include "verilated_dpi.h"
#include "Vysyx_041728__Dpi.h"


typedef struct {
  uint64_t gpr[32];
  uint64_t pc;
} CPU_state;

// static riscv64_CPU_state cpu;

uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}


void dump_gpr() {
        int i;
        for (i = 0; i < 33; i++) {
            printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
        }
}

typedef uint64_t paddr_t;
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction, int*) = NULL;

void (*ref_difftest_setreg)(uint64_t regval, int regindex) = NULL;
uint64_t (*ref_difftest_getreg)( int regindex) = NULL;


void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;




static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void(*)(paddr_t, void *, size_t , bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy =  (void(*)(void *, bool ,int *))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);



// void (*difftest_setreg)(uint64_t regval, int regindex)
  ref_difftest_setreg =  (void(*)(uint64_t,int))dlsym(handle, "difftest_setreg");
  assert(ref_difftest_setreg);
//   uint64_t (*difftest_getreg)( int regindex) = NULL;
  ref_difftest_getreg =  (uint64_t(*)(int))dlsym(handle, "difftest_getreg");
  assert(ref_difftest_getreg);




  ref_difftest_exec = (void(*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void(*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

//   Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
//   Log("The result of every instruction will be compared with %s. "
//       "This will help you a lot for debugging, but also significantly reduce the performance. "
//       "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init(port);
  uint8_t* guest_to_host(uint64_t paddr);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);

// printf("come to here !!!\n");
      CPU_state * test = (CPU_state *)cpu_gpr;
    for(int i = 0; i < 32; i++){
        ref_difftest_setreg(test->gpr[i],i);
    }
    ref_difftest_setreg(0x80000000,32);
    // printf("leave to herea !!!!!!\n");
}


bool isa_difftest_checkregs() {
//   for( int i =0 ; i < 32 ; i++ ) {
//     if(ref_r->gpr[i]!= cpu_gpr[i]){
//       printf(" diff gpr[%d]\n",i);
//     //   printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
//       printf("%s:\t%#lx\t%s:\t%#lx\n","ref",ref_r->gpr[i],"dut",cpu_gpr[i]);
//       return false;
//     }
//   }
//   if(ref_r->pc!=  cpu_gpr[32]){
//       printf("%s is diff\n","pc");
//       printf("%s:\t%#lx\t%s:\t%#lx\n","ref",ref_r->pc,"dut",cpu_gpr[32]);
//       return false;
//     }
for(int i = 0; i < 32; i++){
    if(ref_difftest_getreg(i) != cpu_gpr[i]){
        printf("diff index is %d\n",i);
        printf("%s:\t%#lx\t%s:\t%#lx\n","ref",ref_difftest_getreg(i),"dut",cpu_gpr[i]);
        return false;
    }
}
  return true;
}
// bool isa_difftest_checkregs(CPU_state *ref_r) {
//   for( int i =0 ; i < 32 ; i++ ) {
//       printf(" diff gpr[%d]\n",i);
//     //   printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
//       printf("%s:\t%#lx\t%s:\t%#lx\n","ref",ref_r->gpr[i],"dut",cpu_gpr[i]);
//       return false;
//   }
//       printf("%s is diff\n","pc");
//       printf("%s:\t%#lx\t%s:\t%#lx\n","ref",ref_r->pc,"dut",cpu_gpr[32]);
//   return true;
// }

void dump_ref() {
        int i;
        printf("ref:\n");
        for (i = 0; i < 33; i++) {
            printf("gpr[%d] = 0x%lx\n", i, ref_difftest_getreg(i));
        }
}
static void checkregs(bool & abor) {
  if (!isa_difftest_checkregs()) {
    abor = true;
    dump_gpr();
    dump_ref();
  }
}

// void difftest_step(vaddr_t pc, vaddr_t npc) {
//   CPU_state ref_r;

//   if (skip_dut_nr_inst > 0) {
//     ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
//     if (ref_r.pc == npc) {
      
//       skip_dut_nr_inst = 0;
//       checkregs(&ref_r, npc);
//       return;
//     }
//     skip_dut_nr_inst --;
//     if (skip_dut_nr_inst == 0)
//       panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
//     return;
//   }

//   if (is_skip_ref) {
//     // to skip the checking of an instruction, just copy the reg state to reference design
//     ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
//     is_skip_ref = false;
//     return;
//   }
void difftest_step(bool & abor) {
    // CPU_state ref_r;
// int testnum = 5;
  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    CPU_state * test = (CPU_state *)cpu_gpr;
    for(int i = 0; i < 32; i++){
        ref_difftest_setreg(test->gpr[i],i);
    }
    ref_difftest_setreg(test->pc,32);
    is_skip_ref = false;
    return;
  }
  // printf("come tohere");

  ref_difftest_exec(1);
  // dump_ref();

//   ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT, &testnum);

  checkregs(abor);//??pigfly pc or npc
  
}


void difftest_step2() {

  ref_difftest_exec(1);
}
