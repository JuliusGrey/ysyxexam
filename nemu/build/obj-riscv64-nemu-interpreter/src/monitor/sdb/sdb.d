cmd_/home/pigfly/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/monitor/sdb/sdb.o := unused

source_/home/pigfly/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/monitor/sdb/sdb.o := src/monitor/sdb/sdb.c

deps_/home/pigfly/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/monitor/sdb/sdb.o := \
    $(wildcard include/config/device.h) \
  /home/pigfly/ysyx-workbench/nemu/include/isa.h \
  /home/pigfly/ysyx-workbench/nemu/src/isa/riscv64/include/isa-def.h \
  /home/pigfly/ysyx-workbench/nemu/include/common.h \
    $(wildcard include/config/target/am.h) \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/pigfly/ysyx-workbench/nemu/include/macro.h \
  /home/pigfly/ysyx-workbench/nemu/include/debug.h \
  /home/pigfly/ysyx-workbench/nemu/include/utils.h \
    $(wildcard include/config/target/native/elf.h) \
  /home/pigfly/ysyx-workbench/nemu/include/cpu/cpu.h \
  src/monitor/sdb/sdb.h \
  /home/pigfly/ysyx-workbench/nemu/include/memory/paddr.h \
    $(wildcard include/config/pc/reset/offset.h) \

/home/pigfly/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/monitor/sdb/sdb.o: $(deps_/home/pigfly/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/monitor/sdb/sdb.o)

$(deps_/home/pigfly/ysyx-workbench/nemu/build/obj-riscv64-nemu-interpreter/src/monitor/sdb/sdb.o):
