#! /bin/bash

verilator --cc --exe top_module.v simulate.cpp 
make -C obj_dir/ -f Vtop_module.mk
./obj_dir/Vtop_module
