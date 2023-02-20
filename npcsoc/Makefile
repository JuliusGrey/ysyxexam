DIFFTEST := ${NEMU_HOME}/build/riscv64-nemu-interpreter-so

VERILATOR = verilator -Wno-WIDTH --top-module ysyx_041728 --cc --exe --build  csrc/*.cpp  vsrc/*  -LDFLAGS "-lSDL2 -ldl" --trace
run:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR)
	./obj_dir/Vysyx_041728 $(IMG) ${DIFFTEST}
include ../Makefile
