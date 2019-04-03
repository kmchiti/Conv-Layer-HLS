set moduleName CNN
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
set C_modelName {CNN}
set C_modelType { void 0 }
set C_modelArgList {
	{ img_port int 8 regular {axi_master 2}  }
	{ kernel int 8 regular {array 27 { 1 3 } 1 1 }  }
	{ bias int 8 regular {array 8 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "img_port", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "img_port","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "kernel", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "kernel","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 26,"step" : 1}]}]}]} , 
 	{ "Name" : "bias", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "bias","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 7,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 57
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_img_port_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_img_port_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_img_port_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_img_port_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_img_port_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_img_port_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_img_port_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_img_port_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_img_port_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_img_port_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_img_port_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_img_port_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_img_port_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_img_port_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_img_port_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_img_port_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_img_port_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_img_port_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_img_port_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_img_port_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_img_port_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_img_port_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_img_port_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_img_port_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_img_port_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_img_port_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_img_port_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_img_port_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_img_port_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_img_port_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_img_port_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_img_port_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_img_port_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_img_port_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_img_port_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_img_port_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_img_port_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_img_port_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_img_port_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_img_port_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_img_port_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_img_port_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_img_port_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_img_port_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_img_port_BUSER sc_in sc_lv 1 signal 0 } 
	{ kernel_address0 sc_out sc_lv 5 signal 1 } 
	{ kernel_ce0 sc_out sc_logic 1 signal 1 } 
	{ kernel_q0 sc_in sc_lv 8 signal 1 } 
	{ bias_address0 sc_out sc_lv 3 signal 2 } 
	{ bias_ce0 sc_out sc_logic 1 signal 2 } 
	{ bias_q0 sc_in sc_lv 8 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m_axi_img_port_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "AWVALID" }} , 
 	{ "name": "m_axi_img_port_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "AWREADY" }} , 
 	{ "name": "m_axi_img_port_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "img_port", "role": "AWADDR" }} , 
 	{ "name": "m_axi_img_port_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "AWID" }} , 
 	{ "name": "m_axi_img_port_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "img_port", "role": "AWLEN" }} , 
 	{ "name": "m_axi_img_port_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "img_port", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_img_port_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_port", "role": "AWBURST" }} , 
 	{ "name": "m_axi_img_port_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_port", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_img_port_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_port", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_img_port_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "img_port", "role": "AWPROT" }} , 
 	{ "name": "m_axi_img_port_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_port", "role": "AWQOS" }} , 
 	{ "name": "m_axi_img_port_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_port", "role": "AWREGION" }} , 
 	{ "name": "m_axi_img_port_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "AWUSER" }} , 
 	{ "name": "m_axi_img_port_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "WVALID" }} , 
 	{ "name": "m_axi_img_port_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "WREADY" }} , 
 	{ "name": "m_axi_img_port_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "img_port", "role": "WDATA" }} , 
 	{ "name": "m_axi_img_port_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_port", "role": "WSTRB" }} , 
 	{ "name": "m_axi_img_port_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "WLAST" }} , 
 	{ "name": "m_axi_img_port_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "WID" }} , 
 	{ "name": "m_axi_img_port_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "WUSER" }} , 
 	{ "name": "m_axi_img_port_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "ARVALID" }} , 
 	{ "name": "m_axi_img_port_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "ARREADY" }} , 
 	{ "name": "m_axi_img_port_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "img_port", "role": "ARADDR" }} , 
 	{ "name": "m_axi_img_port_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "ARID" }} , 
 	{ "name": "m_axi_img_port_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "img_port", "role": "ARLEN" }} , 
 	{ "name": "m_axi_img_port_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "img_port", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_img_port_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_port", "role": "ARBURST" }} , 
 	{ "name": "m_axi_img_port_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_port", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_img_port_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_port", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_img_port_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "img_port", "role": "ARPROT" }} , 
 	{ "name": "m_axi_img_port_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_port", "role": "ARQOS" }} , 
 	{ "name": "m_axi_img_port_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "img_port", "role": "ARREGION" }} , 
 	{ "name": "m_axi_img_port_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "ARUSER" }} , 
 	{ "name": "m_axi_img_port_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "RVALID" }} , 
 	{ "name": "m_axi_img_port_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "RREADY" }} , 
 	{ "name": "m_axi_img_port_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "img_port", "role": "RDATA" }} , 
 	{ "name": "m_axi_img_port_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "RLAST" }} , 
 	{ "name": "m_axi_img_port_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "RID" }} , 
 	{ "name": "m_axi_img_port_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "RUSER" }} , 
 	{ "name": "m_axi_img_port_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_port", "role": "RRESP" }} , 
 	{ "name": "m_axi_img_port_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "BVALID" }} , 
 	{ "name": "m_axi_img_port_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "BREADY" }} , 
 	{ "name": "m_axi_img_port_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "img_port", "role": "BRESP" }} , 
 	{ "name": "m_axi_img_port_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "BID" }} , 
 	{ "name": "m_axi_img_port_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "img_port", "role": "BUSER" }} , 
 	{ "name": "kernel_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "kernel", "role": "address0" }} , 
 	{ "name": "kernel_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel", "role": "ce0" }} , 
 	{ "name": "kernel_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "kernel", "role": "q0" }} , 
 	{ "name": "bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "bias", "role": "address0" }} , 
 	{ "name": "bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce0" }} , 
 	{ "name": "bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bias", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "12", "13"],
		"CDFG" : "CNN",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_CONV_fu_363"},
			{"State" : "ap_ST_fsm_state47", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_CONV_fu_363"}],
		"Port" : [
			{"Name" : "img_port", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "img_port_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "img_port_blk_n_R", "Type" : "RtlSignal"},
					{"Name" : "img_port_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "img_port_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "img_port_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "kernel", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_CONV_fu_363", "Port" : "kernel"}]},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CNN_img_port_m_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buff_input_img_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buff_output_img_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buff_result_img_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_CONV_fu_363", "Parent" : "0", "Child" : ["6", "7", "8", "9", "10", "11"],
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
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_CONV_fu_363.IBRAM_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_CONV_fu_363.OBRAM_U", "Parent" : "5"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_CONV_fu_363.WBRAM_U", "Parent" : "5"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_CONV_fu_363.CNN_mac_muladd_7nbkb_U1", "Parent" : "5"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_CONV_fu_363.CNN_mac_muladd_7nbkb_U2", "Parent" : "5"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_CONV_fu_363.CNN_mac_muladd_7nbkb_U3", "Parent" : "5"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CNN_mac_muladd_15cud_U13", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CNN_mac_muladd_4ndEe_U14", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	CNN {
		img_port {Type IO LastRead 19 FirstWrite 16}
		kernel {Type I LastRead 3 FirstWrite -1}
		bias {Type I LastRead 19 FirstWrite -1}}
	CONV {
		input_img {Type I LastRead 2 FirstWrite -1}
		kernel {Type I LastRead 3 FirstWrite -1}
		kernel_offset {Type I LastRead 0 FirstWrite -1}
		bias {Type I LastRead 0 FirstWrite -1}
		output_img {Type O LastRead -1 FirstWrite 10}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
]}

set Spec2ImplPortList { 
	img_port { m_axi {  { m_axi_img_port_AWVALID VALID 1 1 }  { m_axi_img_port_AWREADY READY 0 1 }  { m_axi_img_port_AWADDR ADDR 1 32 }  { m_axi_img_port_AWID ID 1 1 }  { m_axi_img_port_AWLEN LEN 1 8 }  { m_axi_img_port_AWSIZE SIZE 1 3 }  { m_axi_img_port_AWBURST BURST 1 2 }  { m_axi_img_port_AWLOCK LOCK 1 2 }  { m_axi_img_port_AWCACHE CACHE 1 4 }  { m_axi_img_port_AWPROT PROT 1 3 }  { m_axi_img_port_AWQOS QOS 1 4 }  { m_axi_img_port_AWREGION REGION 1 4 }  { m_axi_img_port_AWUSER USER 1 1 }  { m_axi_img_port_WVALID VALID 1 1 }  { m_axi_img_port_WREADY READY 0 1 }  { m_axi_img_port_WDATA DATA 1 32 }  { m_axi_img_port_WSTRB STRB 1 4 }  { m_axi_img_port_WLAST LAST 1 1 }  { m_axi_img_port_WID ID 1 1 }  { m_axi_img_port_WUSER USER 1 1 }  { m_axi_img_port_ARVALID VALID 1 1 }  { m_axi_img_port_ARREADY READY 0 1 }  { m_axi_img_port_ARADDR ADDR 1 32 }  { m_axi_img_port_ARID ID 1 1 }  { m_axi_img_port_ARLEN LEN 1 8 }  { m_axi_img_port_ARSIZE SIZE 1 3 }  { m_axi_img_port_ARBURST BURST 1 2 }  { m_axi_img_port_ARLOCK LOCK 1 2 }  { m_axi_img_port_ARCACHE CACHE 1 4 }  { m_axi_img_port_ARPROT PROT 1 3 }  { m_axi_img_port_ARQOS QOS 1 4 }  { m_axi_img_port_ARREGION REGION 1 4 }  { m_axi_img_port_ARUSER USER 1 1 }  { m_axi_img_port_RVALID VALID 0 1 }  { m_axi_img_port_RREADY READY 1 1 }  { m_axi_img_port_RDATA DATA 0 32 }  { m_axi_img_port_RLAST LAST 0 1 }  { m_axi_img_port_RID ID 0 1 }  { m_axi_img_port_RUSER USER 0 1 }  { m_axi_img_port_RRESP RESP 0 2 }  { m_axi_img_port_BVALID VALID 0 1 }  { m_axi_img_port_BREADY READY 1 1 }  { m_axi_img_port_BRESP RESP 0 2 }  { m_axi_img_port_BID ID 0 1 }  { m_axi_img_port_BUSER USER 0 1 } } }
	kernel { ap_memory {  { kernel_address0 mem_address 1 5 }  { kernel_ce0 mem_ce 1 1 }  { kernel_q0 mem_dout 0 8 } } }
	bias { ap_memory {  { bias_address0 mem_address 1 3 }  { bias_ce0 mem_ce 1 1 }  { bias_q0 mem_dout 0 8 } } }
}

set busDeadlockParameterList { 
	{ img_port { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ img_port 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ img_port 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
