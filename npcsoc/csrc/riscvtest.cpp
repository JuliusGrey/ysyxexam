
// #include "Vriscv.h"
// #include "verilated_dpi.h"
// // #include "verilated_vcd_c.h"
// #include "Vriscv__Dpi.h"
#include "Vysyx_041728.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "axi4.hpp"
#include "axi4_mem.hpp"
#include "axi4_xbar.hpp"
#include "mmio_mem.hpp"
#include "uartlite.hpp"
#include "verilated_vcd_c.h"
#include "device.h"
// extern void getabort(svBit* abor) ;
// vluint64_t main_time = 0;  //initial 仿真时间

// static svBit abor = 0;



// double sc_time_stamp()
//  {
//      return main_time;
//  }


 
//  static const uint32_t img [] = {
//   0xff010113,  // addi
//   0xff010113,  // addi
//   0xff010113,  //addi
//   0x00100073,  // ebreak (used as nemu_trap)
// };

// uint32_t pmem_read(uint64_t addr){
//     uint64_t addrOff = addr - 0x80000000;
//     uint64_t addrRead = addrOff >> 2;
//     return img[addrRead];
// }
axi4_mem <32,64,4> mem(4096l*1024*1024);
void connect_wire(axi4_ptr <32,64,4> &inst, axi4_ptr <32,64,4> &data,Vysyx_041728 *top) {
    // connect
    // mmio
    // aw   
    inst.awaddr     = &(top->io_imaster_awaddr);
    inst.awburst    = &(top->io_imaster_awburst);
    inst.awid       = &(top->io_imaster_awid);
    inst.awlen      = &(top->io_imaster_awlen);
    inst.awready    = &(top->io_imaster_awready);
    inst.awsize     = &(top->io_imaster_awsize);
    inst.awvalid    = &(top->io_imaster_awvalid);
    // w
    inst.wdata      = &(top->io_imaster_wdata);
    inst.wlast      = &(top->io_imaster_wlast);
    inst.wready     = &(top->io_imaster_wready);
    inst.wstrb      = &(top->io_imaster_wstrb);
    inst.wvalid     = &(top->io_imaster_wvalid);
    // b
    inst.bid        = &(top->io_imaster_bid);
    inst.bready     = &(top->io_imaster_bready);
    inst.bresp      = &(top->io_imaster_bresp);
    inst.bvalid     = &(top->io_imaster_bvalid);
    // ar
    inst.araddr     = &(top->io_imaster_araddr);
    inst.arburst    = &(top->io_imaster_arburst);
    inst.arid       = &(top->io_imaster_arid);
    inst.arlen      = &(top->io_imaster_arlen);
    inst.arready    = &(top->io_imaster_arready);
    inst.arsize     = &(top->io_imaster_arsize);
    inst.arvalid    = &(top->io_imaster_arvalid);
    // r
    inst.rdata      = &(top->io_imaster_rdata);
    inst.rid        = &(top->io_imaster_rid);
    inst.rlast      = &(top->io_imaster_rlast);
    inst.rready     = &(top->io_imaster_rready);
    inst.rresp      = &(top->io_imaster_rresp);
    inst.rvalid     = &(top->io_imaster_rvalid);
    // mem

        // aw   
    data.awaddr     = &(top->io_dmaster_awaddr);
    data.awburst    = &(top->io_dmaster_awburst);
    data.awid       = &(top->io_dmaster_awid);
    data.awlen      = &(top->io_dmaster_awlen);
    data.awready    = &(top->io_dmaster_awready);
    data.awsize     = &(top->io_dmaster_awsize);
    data.awvalid    = &(top->io_dmaster_awvalid);
    // w
    data.wdata      = &(top->io_dmaster_wdata);
    data.wlast      = &(top->io_dmaster_wlast);
    data.wready     = &(top->io_dmaster_wready);
    data.wstrb      = &(top->io_dmaster_wstrb);
    data.wvalid     = &(top->io_dmaster_wvalid);
    // b
    data.bid        = &(top->io_dmaster_bid);
    data.bready     = &(top->io_dmaster_bready);
    data.bresp      = &(top->io_dmaster_bresp);
    data.bvalid     = &(top->io_dmaster_bvalid);
    // ar
    data.araddr     = &(top->io_dmaster_araddr);
    data.arburst    = &(top->io_dmaster_arburst);
    data.arid       = &(top->io_dmaster_arid);
    data.arlen      = &(top->io_dmaster_arlen);
    data.arready    = &(top->io_dmaster_arready);
    data.arsize     = &(top->io_dmaster_arsize);
    data.arvalid    = &(top->io_dmaster_arvalid);
    // r
    data.rdata      = &(top->io_dmaster_rdata);
    data.rid        = &(top->io_dmaster_rid);
    data.rlast      = &(top->io_dmaster_rlast);
    data.rready     = &(top->io_dmaster_rready);
    data.rresp      = &(top->io_dmaster_rresp);
    data.rvalid     = &(top->io_dmaster_rvalid);
  
}


int main(int argc,char **argv)
{   printf("begin");
     Verilated::commandArgs(argc,argv);
    //  Verilated::traceEverOn(true); //导出vcd波形需要加此语句
 
    //  VerilatedVcdC* tfp = new VerilatedVcdC(); 
     Vysyx_041728 *top = new Vysyx_041728("top");
    //  top->trace(tfp, 0);
    //  tfp->open("wave.vcd");
    //  Verilated::traceEverOn(true); //导出vcd波形需要加此语句
    // void init_isa();
    // init_isa();
//     long setimage(char *img);
//     long img_size =  setimage(argv[1]);
//     void init_difftest(char *ref_so_file, long img_size, int port) ;
//     init_difftest(argv[2],img_size,0);
//     printf("out of image!!!\n");
 
    //  VerilatedVcdC* tfp = new VerilatedVcdC(); //导出vcd波形需要加此语句
    // uint32_t pmem_read(uint64_t addr);
    //  Vriscv *top = new Vriscv("top");
    //  top -> reset = 1;
    

    


     top->eval();
     long setimage(char *img);
    //  char file1[50];
    //  strcpy(file1, argv[1]);
    long img_size =  setimage(argv[1]);


    void init_difftest(char *ref_so_file, long img_size, int port) ;
    // char file2[50];
    //  strcpy(file2, argv[2]);
     init_difftest(argv[2],img_size,0);


    axi4_ptr <32,64,4> inst_ptr;
    axi4_ptr <32,64,4> data_ptr;
    connect_wire(inst_ptr,data_ptr,top);


    axi4_ref <32,64,4> inst_ref(inst_ptr);
    axi4     <32,64,4> inst_sigs;
    axi4_ref <32,64,4> inst_sigs_ref(inst_sigs);

    axi4_ref <32,64,4> data_ref(data_ptr);
    axi4     <32,64,4> data_sigs;
    axi4_ref <32,64,4> data_sigs_ref(data_sigs);    
    

    mem.load_binary(argv[1],0x80000000);

        svBit diffcommit = 0;
        svBit abor = 0;
        svBit skip = 0;
        int time = 0;
        bool diff = false;
        top -> reset = 1;
        top -> clock = 0;
        time =  time +1;
        top->eval();
        // tfp->dump(time);
        top -> clock = 1;
        time =  time +1;
        top->eval();
        // tfp->dump(time);
        top -> clock = 0;
        time =  time +1;
        top->eval();
        // tfp->dump(time);
        top -> clock = 1;
        time =  time +1;

        top -> reset = 0;
        top->eval();
        // tfp->dump(time);
        // void dump_gpr() ;
        // dump_gpr() ;
        // init_difftest(file2,img_size,0);
        // while(1){
        //   void difftest_step2() ;
        //   difftest_step2() ;
        // }


        // void init_device(void) ;
        init_device() ;

        // bool skip = false;
        // bool skip_delay = false;
        int cnt  = 0;
        int diffcnt = 0;
        while(!abor &&  !diff &&diffcnt !=150 ){
          // printf("\n\nround %d\n",cnt);
          cnt ++;
          // if(cnt == 30) abort();
            svSetScope(svGetScopeFromName("top.ysyx_041728.riscvIns.Ebpro"));
            top -> getabort(&abor);
            // top -> io_instIO_data_read = pmem_readdata(top ->io_instIO_addr);
            // printf("pc is %#lx\n",top ->io_instIO_addr);
            // printf("ins is %#lx\n",pmem_readins(top -> io_pc));
            svSetScope(svGetScopeFromName("top.ysyx_041728.riscvIns.difftest"));
            top ->difftestcommit(&diffcommit);

            svSetScope(svGetScopeFromName("top.ysyx_041728.riscvIns.skipinst"));
            top -> getskip(&skip);

            top->eval();
            // skip_delay = skip;
            top -> io_mmio_ready = 1;
            if(top -> io_mmio_valid){
            if(top->io_mmio_wen){
              void pmem_writedata(uint64_t addr,int mask, uint64_t data);
              pmem_writedata(top->io_mmio_addr,top->io_mmio_mask,top->io_mmio_data_write);
            }else{
              uint64_t pmem_readdata(uint64_t addri);
             top->io_mmio_data_read =  pmem_readdata(top->io_mmio_addr);
            }} 
            inst_sigs.update_input(inst_ref);
            data_sigs.update_input(data_ref);
            top -> clock = 0;
            time =  time +1;
            top->eval();
            // tfp->dump(time);
            top -> clock = 1;
            time =  time +1;
            top->eval();
            // tfp->dump(time);
            mem.beat(inst_sigs_ref);
            mem.beat(data_sigs_ref);
             inst_sigs.update_output(inst_ref);
             data_sigs.update_output(data_ref);

            top->eval();
            void difftest_skip_ref();
            
            void difftest_step(bool & abor) ;
            if(diffcommit){
              if(skip) difftest_skip_ref();
              diffcnt = 0;
            difftest_step(diff);}
                poll_event();
            diffcnt ++;
        }
        
        printf("abor is %d\n",abor);
        printf("diffcnt is %d\n",diffcnt);
        printf("cnt is %d\n",cnt);
        printf("stop\n");
        top->final();
        // tfp ->close();
        delete top;
     return 0;
}