############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project CNN
set_top CNN
add_files source/CNN.cpp
add_files -tb source/test_CONV_LAYER1.cpp
open_solution "solution1"
set_part {xc7z020clg484-2} -tool vivado
create_clock -period 10 -name default
#source "./CNN/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
