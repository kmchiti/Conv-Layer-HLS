set moduleName CONV
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {CONV}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_img int 8 regular {array 10000 { 1 3 } 1 1 }  }
	{ kernel int 8 regular {array 27 { 1 3 } 1 1 }  }
	{ kernel_offset int 8 regular  }
	{ bias int 8 regular  }
	{ output_img int 8 regular {array 9604 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_img", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "kernel", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_offset", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bias", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "output_img", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_img_address0 sc_out sc_lv 14 signal 0 } 
	{ input_img_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_img_q0 sc_in sc_lv 8 signal 0 } 
	{ kernel_address0 sc_out sc_lv 5 signal 1 } 
	{ kernel_ce0 sc_out sc_logic 1 signal 1 } 
	{ kernel_q0 sc_in sc_lv 8 signal 1 } 
	{ kernel_offset sc_in sc_lv 8 signal 2 } 
	{ bias sc_in sc_lv 8 signal 3 } 
	{ output_img_address0 sc_out sc_lv 14 signal 4 } 
	{ output_img_ce0 sc_out sc_logic 1 signal 4 } 
	{ output_img_we0 sc_out sc_logic 1 signal 4 } 
	{ output_img_d0 sc_out sc_lv 8 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_img_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "input_img", "role": "address0" }} , 
 	{ "name": "input_img_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_img", "role": "ce0" }} , 
 	{ "name": "input_img_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_img", "role": "q0" }} , 
 	{ "name": "kernel_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "kernel", "role": "address0" }} , 
 	{ "name": "kernel_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel", "role": "ce0" }} , 
 	{ "name": "kernel_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel", "role": "q0" }} , 
 	{ "name": "kernel_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel_offset", "role": "default" }} , 
 	{ "name": "bias", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bias", "role": "default" }} , 
 	{ "name": "output_img_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "output_img", "role": "address0" }} , 
 	{ "name": "output_img_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_img", "role": "ce0" }} , 
 	{ "name": "output_img_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_img", "role": "we0" }} , 
 	{ "name": "output_img_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_img", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6"],
		"CDFG" : "CONV",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "106062", "EstimateLatencyMax" : "106062",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_img", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "kernel", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "kernel_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_img", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IBRAM_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OBRAM_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WBRAM_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CNN_mac_muladd_7nbkb_U1", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CNN_mac_muladd_7nbkb_U2", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CNN_mac_muladd_7nbkb_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	CONV {
		input_img {Type I LastRead 2 FirstWrite -1}
		kernel {Type I LastRead 3 FirstWrite -1}
		kernel_offset {Type I LastRead 0 FirstWrite -1}
		bias {Type I LastRead 0 FirstWrite -1}
		output_img {Type O LastRead -1 FirstWrite 10}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "106062", "Max" : "106062"}
	, {"Name" : "Interval", "Min" : "106062", "Max" : "106062"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
]}

set Spec2ImplPortList { 
	input_img { ap_memory {  { input_img_address0 mem_address 1 14 }  { input_img_ce0 mem_ce 1 1 }  { input_img_q0 mem_dout 0 8 } } }
	kernel { ap_memory {  { kernel_address0 mem_address 1 5 }  { kernel_ce0 mem_ce 1 1 }  { kernel_q0 mem_dout 0 8 } } }
	kernel_offset { ap_none {  { kernel_offset in_data 0 8 } } }
	bias { ap_none {  { bias in_data 0 8 } } }
	output_img { ap_memory {  { output_img_address0 mem_address 1 14 }  { output_img_ce0 mem_ce 1 1 }  { output_img_we0 mem_we 1 1 }  { output_img_d0 mem_din 1 8 } } }
}
