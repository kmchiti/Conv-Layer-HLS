// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _CNN_HH_
#define _CNN_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "CONV.h"
#include "CNN_mac_muladd_15cud.h"
#include "CNN_mac_muladd_4ndEe.h"
#include "CNN_buff_input_img.h"
#include "CNN_buff_output_img.h"
#include "CNN_img_port_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_IMG_PORT_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_IMG_PORT_ID_WIDTH = 1,
         unsigned int C_M_AXI_IMG_PORT_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_IMG_PORT_DATA_WIDTH = 32,
         unsigned int C_M_AXI_IMG_PORT_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_IMG_PORT_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_IMG_PORT_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_IMG_PORT_BUSER_WIDTH = 1>
struct CNN : public sc_module {
    // Port declarations 57
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > m_axi_img_port_AWVALID;
    sc_in< sc_logic > m_axi_img_port_AWREADY;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_ADDR_WIDTH> > m_axi_img_port_AWADDR;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_ID_WIDTH> > m_axi_img_port_AWID;
    sc_out< sc_lv<8> > m_axi_img_port_AWLEN;
    sc_out< sc_lv<3> > m_axi_img_port_AWSIZE;
    sc_out< sc_lv<2> > m_axi_img_port_AWBURST;
    sc_out< sc_lv<2> > m_axi_img_port_AWLOCK;
    sc_out< sc_lv<4> > m_axi_img_port_AWCACHE;
    sc_out< sc_lv<3> > m_axi_img_port_AWPROT;
    sc_out< sc_lv<4> > m_axi_img_port_AWQOS;
    sc_out< sc_lv<4> > m_axi_img_port_AWREGION;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_AWUSER_WIDTH> > m_axi_img_port_AWUSER;
    sc_out< sc_logic > m_axi_img_port_WVALID;
    sc_in< sc_logic > m_axi_img_port_WREADY;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_DATA_WIDTH> > m_axi_img_port_WDATA;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_DATA_WIDTH/8> > m_axi_img_port_WSTRB;
    sc_out< sc_logic > m_axi_img_port_WLAST;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_ID_WIDTH> > m_axi_img_port_WID;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_WUSER_WIDTH> > m_axi_img_port_WUSER;
    sc_out< sc_logic > m_axi_img_port_ARVALID;
    sc_in< sc_logic > m_axi_img_port_ARREADY;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_ADDR_WIDTH> > m_axi_img_port_ARADDR;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_ID_WIDTH> > m_axi_img_port_ARID;
    sc_out< sc_lv<8> > m_axi_img_port_ARLEN;
    sc_out< sc_lv<3> > m_axi_img_port_ARSIZE;
    sc_out< sc_lv<2> > m_axi_img_port_ARBURST;
    sc_out< sc_lv<2> > m_axi_img_port_ARLOCK;
    sc_out< sc_lv<4> > m_axi_img_port_ARCACHE;
    sc_out< sc_lv<3> > m_axi_img_port_ARPROT;
    sc_out< sc_lv<4> > m_axi_img_port_ARQOS;
    sc_out< sc_lv<4> > m_axi_img_port_ARREGION;
    sc_out< sc_uint<C_M_AXI_IMG_PORT_ARUSER_WIDTH> > m_axi_img_port_ARUSER;
    sc_in< sc_logic > m_axi_img_port_RVALID;
    sc_out< sc_logic > m_axi_img_port_RREADY;
    sc_in< sc_uint<C_M_AXI_IMG_PORT_DATA_WIDTH> > m_axi_img_port_RDATA;
    sc_in< sc_logic > m_axi_img_port_RLAST;
    sc_in< sc_uint<C_M_AXI_IMG_PORT_ID_WIDTH> > m_axi_img_port_RID;
    sc_in< sc_uint<C_M_AXI_IMG_PORT_RUSER_WIDTH> > m_axi_img_port_RUSER;
    sc_in< sc_lv<2> > m_axi_img_port_RRESP;
    sc_in< sc_logic > m_axi_img_port_BVALID;
    sc_out< sc_logic > m_axi_img_port_BREADY;
    sc_in< sc_lv<2> > m_axi_img_port_BRESP;
    sc_in< sc_uint<C_M_AXI_IMG_PORT_ID_WIDTH> > m_axi_img_port_BID;
    sc_in< sc_uint<C_M_AXI_IMG_PORT_BUSER_WIDTH> > m_axi_img_port_BUSER;
    sc_out< sc_lv<5> > kernel_address0;
    sc_out< sc_logic > kernel_ce0;
    sc_in< sc_lv<8> > kernel_q0;
    sc_out< sc_lv<3> > bias_address0;
    sc_out< sc_logic > bias_ce0;
    sc_in< sc_lv<8> > bias_q0;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const6;
    sc_signal< sc_lv<1> > ap_var_for_const1;
    sc_signal< sc_lv<1> > ap_var_for_const7;
    sc_signal< sc_lv<2> > ap_var_for_const3;
    sc_signal< sc_lv<4> > ap_var_for_const4;
    sc_signal< sc_lv<3> > ap_var_for_const2;
    sc_signal< sc_lv<32> > ap_var_for_const5;


    // Module declarations
    CNN(sc_module_name name);
    SC_HAS_PROCESS(CNN);

    ~CNN();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    CNN_img_port_m_axi<0,8,32,5,16,16,16,16,C_M_AXI_IMG_PORT_ID_WIDTH,C_M_AXI_IMG_PORT_ADDR_WIDTH,C_M_AXI_IMG_PORT_DATA_WIDTH,C_M_AXI_IMG_PORT_AWUSER_WIDTH,C_M_AXI_IMG_PORT_ARUSER_WIDTH,C_M_AXI_IMG_PORT_WUSER_WIDTH,C_M_AXI_IMG_PORT_RUSER_WIDTH,C_M_AXI_IMG_PORT_BUSER_WIDTH,C_M_AXI_IMG_PORT_TARGET_ADDR,C_M_AXI_IMG_PORT_USER_VALUE,C_M_AXI_IMG_PORT_PROT_VALUE,C_M_AXI_IMG_PORT_CACHE_VALUE>* CNN_img_port_m_axi_U;
    CNN_buff_input_img* buff_input_img_U;
    CNN_buff_output_img* buff_output_img_U;
    CNN_buff_output_img* buff_result_img_U;
    CONV* grp_CONV_fu_363;
    CNN_mac_muladd_15cud<1,1,15,4,16,17>* CNN_mac_muladd_15cud_U13;
    CNN_mac_muladd_4ndEe<1,1,4,15,16,17>* CNN_mac_muladd_4ndEe_U14;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<41> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > img_port_blk_n_AR;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_mid2_fu_460_p3;
    sc_signal< sc_logic > img_port_blk_n_R;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_lv<1> > exitcond2_reg_896;
    sc_signal< sc_logic > img_port_blk_n_AW;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > img_port_blk_n_W;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > exitcond3_reg_872;
    sc_signal< sc_lv<1> > exitcond3_reg_872_pp1_iter1_reg;
    sc_signal< sc_logic > img_port_blk_n_B;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_logic > ap_CS_fsm_pp3_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter1;
    sc_signal< bool > ap_block_pp3_stage0;
    sc_signal< sc_lv<1> > exitcond4_reg_926;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond1_reg_842;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > img_port_AWVALID;
    sc_signal< sc_logic > img_port_AWREADY;
    sc_signal< sc_logic > img_port_WVALID;
    sc_signal< sc_logic > img_port_WREADY;
    sc_signal< sc_logic > img_port_ARVALID;
    sc_signal< sc_logic > img_port_ARREADY;
    sc_signal< sc_lv<32> > img_port_ARADDR;
    sc_signal< sc_lv<32> > img_port_ARLEN;
    sc_signal< sc_logic > img_port_RVALID;
    sc_signal< sc_logic > img_port_RREADY;
    sc_signal< sc_lv<8> > img_port_RDATA;
    sc_signal< sc_logic > img_port_RLAST;
    sc_signal< sc_lv<1> > img_port_RID;
    sc_signal< sc_lv<1> > img_port_RUSER;
    sc_signal< sc_lv<2> > img_port_RRESP;
    sc_signal< sc_logic > img_port_BVALID;
    sc_signal< sc_logic > img_port_BREADY;
    sc_signal< sc_lv<2> > img_port_BRESP;
    sc_signal< sc_lv<1> > img_port_BID;
    sc_signal< sc_lv<1> > img_port_BUSER;
    sc_signal< sc_lv<14> > indvar_reg_305;
    sc_signal< sc_lv<14> > indvar_reg_305_pp0_iter1_reg;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<14> > indvar4_reg_317;
    sc_signal< sc_lv<14> > indvar1_reg_328;
    sc_signal< sc_lv<14> > indvar1_reg_328_pp2_iter1_reg;
    sc_signal< bool > ap_block_state31_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state32_pp2_stage0_iter1;
    sc_signal< bool > ap_block_state33_pp2_stage0_iter2;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<14> > indvar5_reg_340;
    sc_signal< sc_lv<14> > indvar5_reg_340_pp3_iter1_reg;
    sc_signal< bool > ap_block_state42_pp3_stage0_iter0;
    sc_signal< bool > ap_block_state43_pp3_stage0_iter1;
    sc_signal< bool > ap_block_state44_pp3_stage0_iter2;
    sc_signal< bool > ap_block_pp3_stage0_11001;
    sc_signal< sc_lv<8> > reg_374;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_lv<1> > tmp_fu_379_p2;
    sc_signal< sc_lv<1> > tmp_reg_758;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > tmp_30_fu_395_p1;
    sc_signal< sc_lv<64> > tmp_30_reg_763;
    sc_signal< sc_lv<15> > tmp_41_fu_399_p1;
    sc_signal< sc_lv<15> > tmp_41_reg_768;
    sc_signal< sc_lv<5> > p_shl1_fu_403_p3;
    sc_signal< sc_lv<5> > p_shl1_reg_773;
    sc_signal< sc_lv<8> > tmp_31_fu_411_p5;
    sc_signal< sc_lv<8> > tmp_31_reg_779;
    sc_signal< sc_lv<5> > indvar_flatten_next_fu_429_p2;
    sc_signal< sc_lv<5> > indvar_flatten_next_reg_788;
    sc_signal< sc_lv<1> > exitcond_fu_435_p2;
    sc_signal< sc_lv<1> > exitcond_reg_793;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_423_p2;
    sc_signal< sc_lv<4> > j_mid2_fu_447_p3;
    sc_signal< sc_lv<4> > j_mid2_reg_803;
    sc_signal< sc_logic > ap_sig_ioackin_img_port_ARREADY;
    sc_signal< bool > ap_block_state3_io;
    sc_signal< sc_lv<5> > p_shl1_mid2_fu_494_p3;
    sc_signal< sc_lv<5> > p_shl1_mid2_reg_815;
    sc_signal< sc_lv<8> > tmp_32_mid2_fu_512_p3;
    sc_signal< sc_lv<8> > tmp_32_mid2_reg_820;
    sc_signal< sc_lv<2> > i_mid2_fu_518_p3;
    sc_signal< sc_lv<2> > i_mid2_reg_825;
    sc_signal< sc_lv<32> > img_port_addr_reg_830;
    sc_signal< sc_lv<1> > exitcond1_fu_537_p2;
    sc_signal< sc_lv<1> > exitcond1_reg_842_pp0_iter1_reg;
    sc_signal< sc_lv<14> > indvar_next_fu_543_p2;
    sc_signal< sc_lv<14> > indvar_next_reg_846;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<8> > img_port_addr_read_reg_851;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<8> > sum_fu_594_p2;
    sc_signal< sc_lv<8> > sum_reg_861;
    sc_signal< sc_lv<32> > img_port_addr_2_reg_866;
    sc_signal< sc_lv<1> > exitcond3_fu_609_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state17_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state18_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state19_pp1_stage0_iter2;
    sc_signal< sc_logic > ap_sig_ioackin_img_port_WREADY;
    sc_signal< bool > ap_block_state19_io;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<14> > indvar_next2_fu_615_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<8> > buff_output_img_q0;
    sc_signal< sc_lv<8> > buff_output_img_load_reg_886;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<4> > j_4_fu_626_p2;
    sc_signal< sc_lv<4> > j_4_reg_891;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<1> > exitcond2_fu_631_p2;
    sc_signal< sc_lv<1> > exitcond2_reg_896_pp2_iter1_reg;
    sc_signal< sc_lv<14> > indvar_next1_fu_637_p2;
    sc_signal< sc_lv<14> > indvar_next1_reg_900;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<8> > img_port_addr_1_read_reg_905;
    sc_signal< sc_lv<32> > img_port_addr_3_reg_910;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_lv<5> > tmp_49_cast2_fu_661_p1;
    sc_signal< sc_lv<5> > tmp_49_cast2_reg_916;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_lv<6> > tmp_49_cast_fu_665_p1;
    sc_signal< sc_lv<6> > tmp_49_cast_reg_921;
    sc_signal< sc_lv<1> > exitcond4_fu_669_p2;
    sc_signal< sc_lv<1> > exitcond4_reg_926_pp3_iter1_reg;
    sc_signal< sc_lv<14> > indvar_next3_fu_675_p2;
    sc_signal< sc_lv<14> > indvar_next3_reg_930;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter0;
    sc_signal< sc_lv<8> > img_port_addr_3_read_reg_935;
    sc_signal< sc_lv<8> > sum2_fu_707_p2;
    sc_signal< sc_lv<8> > sum2_reg_940;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_lv<14> > buff_output_img_addr_1_reg_955;
    sc_signal< sc_lv<8> > i_5_fu_727_p2;
    sc_signal< sc_lv<8> > i_5_reg_960;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_sig_ioackin_img_port_AWREADY;
    sc_signal< sc_logic > grp_CONV_fu_363_ap_ready;
    sc_signal< sc_logic > grp_CONV_fu_363_ap_done;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state17;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state31;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter2;
    sc_signal< bool > ap_block_pp3_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp3_exit_iter0_state42;
    sc_signal< sc_logic > ap_enable_reg_pp3_iter2;
    sc_signal< sc_logic > buff_input_img_ce0;
    sc_signal< sc_lv<8> > buff_input_img_q0;
    sc_signal< sc_lv<14> > buff_input_img_address1;
    sc_signal< sc_logic > buff_input_img_ce1;
    sc_signal< sc_logic > buff_input_img_we1;
    sc_signal< sc_lv<8> > buff_input_img_d1;
    sc_signal< sc_lv<14> > buff_output_img_address0;
    sc_signal< sc_logic > buff_output_img_ce0;
    sc_signal< sc_logic > buff_output_img_we0;
    sc_signal< sc_lv<8> > buff_output_img_d0;
    sc_signal< sc_lv<14> > buff_result_img_address0;
    sc_signal< sc_logic > buff_result_img_ce0;
    sc_signal< sc_logic > buff_result_img_we0;
    sc_signal< sc_lv<8> > buff_result_img_q0;
    sc_signal< sc_logic > grp_CONV_fu_363_ap_start;
    sc_signal< sc_logic > grp_CONV_fu_363_ap_idle;
    sc_signal< sc_lv<14> > grp_CONV_fu_363_input_img_address0;
    sc_signal< sc_logic > grp_CONV_fu_363_input_img_ce0;
    sc_signal< sc_lv<5> > grp_CONV_fu_363_kernel_address0;
    sc_signal< sc_logic > grp_CONV_fu_363_kernel_ce0;
    sc_signal< sc_lv<8> > grp_CONV_fu_363_kernel_offset;
    sc_signal< sc_lv<14> > grp_CONV_fu_363_output_img_address0;
    sc_signal< sc_logic > grp_CONV_fu_363_output_img_ce0;
    sc_signal< sc_logic > grp_CONV_fu_363_output_img_we0;
    sc_signal< sc_lv<8> > grp_CONV_fu_363_output_img_d0;
    sc_signal< sc_lv<5> > indvar_flatten_reg_270;
    sc_signal< sc_lv<2> > i_reg_281;
    sc_signal< sc_lv<4> > j_reg_293;
    sc_signal< sc_lv<14> > ap_phi_mux_indvar_phi_fu_309_p4;
    sc_signal< sc_lv<14> > ap_phi_mux_indvar1_phi_fu_332_p4;
    sc_signal< sc_lv<14> > ap_phi_mux_indvar5_phi_fu_344_p4;
    sc_signal< sc_lv<8> > i_i_reg_352;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_logic > ap_CS_fsm_state49;
    sc_signal< sc_logic > grp_CONV_fu_363_ap_start_reg;
    sc_signal< sc_lv<64> > indvar2_fu_549_p1;
    sc_signal< sc_lv<64> > tmp_35_fu_562_p1;
    sc_signal< sc_lv<64> > indvar6_fu_621_p1;
    sc_signal< sc_lv<64> > indvar3_fu_643_p1;
    sc_signal< sc_lv<64> > indvar7_fu_681_p1;
    sc_signal< sc_lv<64> > tmp_40_fu_716_p1;
    sc_signal< sc_lv<64> > tmp_i_fu_721_p1;
    sc_signal< sc_lv<64> > tmp_31_mid2_cast_fu_482_p1;
    sc_signal< sc_lv<64> > p_sum6_cast_fu_600_p1;
    sc_signal< sc_lv<64> > p_sum_cast_fu_652_p1;
    sc_signal< sc_logic > ap_reg_ioackin_img_port_ARREADY;
    sc_signal< sc_logic > ap_reg_ioackin_img_port_AWREADY;
    sc_signal< sc_logic > ap_reg_ioackin_img_port_WREADY;
    sc_signal< bool > ap_block_pp1_stage0_01001;
    sc_signal< sc_lv<8> > tmp_1_i_fu_733_p2;
    sc_signal< sc_lv<2> > tmp_s_fu_389_p1;
    sc_signal< sc_lv<17> > tmp_s_fu_389_p2;
    sc_signal< sc_lv<2> > i_4_fu_441_p2;
    sc_signal< sc_lv<1> > tmp_mid1_fu_454_p2;
    sc_signal< sc_lv<2> > tmp_30_mid1_fu_470_p0;
    sc_signal< sc_lv<15> > tmp_30_mid1_fu_470_p2;
    sc_signal< sc_lv<15> > tmp_31_mid2_fu_476_p3;
    sc_signal< sc_lv<5> > p_shl1_mid1_fu_486_p3;
    sc_signal< sc_lv<8> > tmp_32_mid1_fu_500_p5;
    sc_signal< sc_lv<5> > tmp_42_cast6_fu_554_p1;
    sc_signal< sc_lv<5> > tmp_34_fu_557_p2;
    sc_signal< sc_lv<3> > tmp_42_fu_573_p1;
    sc_signal< sc_lv<6> > tmp_42_cast_fu_570_p1;
    sc_signal< sc_lv<6> > p_shl2_fu_576_p3;
    sc_signal< sc_lv<6> > tmp_33_fu_584_p2;
    sc_signal< sc_lv<8> > tmp_44_cast_fu_590_p1;
    sc_signal< sc_lv<17> > grp_fu_740_p3;
    sc_signal< sc_lv<17> > grp_fu_749_p3;
    sc_signal< sc_lv<3> > tmp_43_fu_686_p1;
    sc_signal< sc_lv<6> > p_shl3_fu_690_p3;
    sc_signal< sc_lv<6> > tmp_38_fu_698_p2;
    sc_signal< sc_lv<8> > tmp_53_cast_fu_703_p1;
    sc_signal< sc_lv<5> > tmp_39_fu_712_p2;
    sc_signal< sc_lv<15> > grp_fu_740_p0;
    sc_signal< sc_lv<4> > grp_fu_740_p1;
    sc_signal< sc_lv<16> > grp_fu_740_p2;
    sc_signal< sc_lv<4> > grp_fu_749_p0;
    sc_signal< sc_lv<15> > grp_fu_749_p1;
    sc_signal< sc_lv<16> > grp_fu_749_p2;
    sc_signal< sc_lv<41> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    sc_signal< sc_logic > ap_idle_pp3;
    sc_signal< sc_logic > ap_enable_pp3;
    sc_signal< sc_lv<17> > grp_fu_740_p10;
    sc_signal< sc_lv<17> > grp_fu_749_p00;
    sc_signal< sc_lv<15> > tmp_30_mid1_fu_470_p00;
    sc_signal< sc_lv<17> > tmp_s_fu_389_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<41> ap_ST_fsm_state1;
    static const sc_lv<41> ap_ST_fsm_state2;
    static const sc_lv<41> ap_ST_fsm_state3;
    static const sc_lv<41> ap_ST_fsm_state4;
    static const sc_lv<41> ap_ST_fsm_state5;
    static const sc_lv<41> ap_ST_fsm_state6;
    static const sc_lv<41> ap_ST_fsm_state7;
    static const sc_lv<41> ap_ST_fsm_state8;
    static const sc_lv<41> ap_ST_fsm_state9;
    static const sc_lv<41> ap_ST_fsm_state10;
    static const sc_lv<41> ap_ST_fsm_pp0_stage0;
    static const sc_lv<41> ap_ST_fsm_state14;
    static const sc_lv<41> ap_ST_fsm_state15;
    static const sc_lv<41> ap_ST_fsm_state16;
    static const sc_lv<41> ap_ST_fsm_pp1_stage0;
    static const sc_lv<41> ap_ST_fsm_state20;
    static const sc_lv<41> ap_ST_fsm_state21;
    static const sc_lv<41> ap_ST_fsm_state22;
    static const sc_lv<41> ap_ST_fsm_state23;
    static const sc_lv<41> ap_ST_fsm_state24;
    static const sc_lv<41> ap_ST_fsm_state25;
    static const sc_lv<41> ap_ST_fsm_state26;
    static const sc_lv<41> ap_ST_fsm_state27;
    static const sc_lv<41> ap_ST_fsm_state28;
    static const sc_lv<41> ap_ST_fsm_state29;
    static const sc_lv<41> ap_ST_fsm_state30;
    static const sc_lv<41> ap_ST_fsm_pp2_stage0;
    static const sc_lv<41> ap_ST_fsm_state34;
    static const sc_lv<41> ap_ST_fsm_state35;
    static const sc_lv<41> ap_ST_fsm_state36;
    static const sc_lv<41> ap_ST_fsm_state37;
    static const sc_lv<41> ap_ST_fsm_state38;
    static const sc_lv<41> ap_ST_fsm_state39;
    static const sc_lv<41> ap_ST_fsm_state40;
    static const sc_lv<41> ap_ST_fsm_state41;
    static const sc_lv<41> ap_ST_fsm_pp3_stage0;
    static const sc_lv<41> ap_ST_fsm_state45;
    static const sc_lv<41> ap_ST_fsm_state46;
    static const sc_lv<41> ap_ST_fsm_state47;
    static const sc_lv<41> ap_ST_fsm_state48;
    static const sc_lv<41> ap_ST_fsm_state49;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1A;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_3;
    static const int C_M_AXI_IMG_PORT_TARGET_ADDR;
    static const int C_M_AXI_IMG_PORT_USER_VALUE;
    static const int C_M_AXI_IMG_PORT_PROT_VALUE;
    static const int C_M_AXI_IMG_PORT_CACHE_VALUE;
    static const int C_M_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_2710;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_2584;
    static const sc_lv<17> ap_const_lv17_2710;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<15> ap_const_lv15_2710;
    static const sc_lv<14> ap_const_lv14_2710;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<14> ap_const_lv14_2584;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<17> ap_const_lv17_2584;
    static const sc_lv<17> ap_const_lv17_7530;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const6();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const7();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const5();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_pp3_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state48();
    void thread_ap_CS_fsm_state49();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_01001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp2_stage0();
    void thread_ap_block_pp2_stage0_11001();
    void thread_ap_block_pp2_stage0_subdone();
    void thread_ap_block_pp3_stage0();
    void thread_ap_block_pp3_stage0_11001();
    void thread_ap_block_pp3_stage0_subdone();
    void thread_ap_block_state11_pp0_stage0_iter0();
    void thread_ap_block_state12_pp0_stage0_iter1();
    void thread_ap_block_state13_pp0_stage0_iter2();
    void thread_ap_block_state17_pp1_stage0_iter0();
    void thread_ap_block_state18_pp1_stage0_iter1();
    void thread_ap_block_state19_io();
    void thread_ap_block_state19_pp1_stage0_iter2();
    void thread_ap_block_state31_pp2_stage0_iter0();
    void thread_ap_block_state32_pp2_stage0_iter1();
    void thread_ap_block_state33_pp2_stage0_iter2();
    void thread_ap_block_state3_io();
    void thread_ap_block_state42_pp3_stage0_iter0();
    void thread_ap_block_state43_pp3_stage0_iter1();
    void thread_ap_block_state44_pp3_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state11();
    void thread_ap_condition_pp1_exit_iter0_state17();
    void thread_ap_condition_pp2_exit_iter0_state31();
    void thread_ap_condition_pp3_exit_iter0_state42();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_enable_pp2();
    void thread_ap_enable_pp3();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_idle_pp2();
    void thread_ap_idle_pp3();
    void thread_ap_phi_mux_indvar1_phi_fu_332_p4();
    void thread_ap_phi_mux_indvar5_phi_fu_344_p4();
    void thread_ap_phi_mux_indvar_phi_fu_309_p4();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_ioackin_img_port_ARREADY();
    void thread_ap_sig_ioackin_img_port_AWREADY();
    void thread_ap_sig_ioackin_img_port_WREADY();
    void thread_bias_address0();
    void thread_bias_ce0();
    void thread_buff_input_img_address1();
    void thread_buff_input_img_ce0();
    void thread_buff_input_img_ce1();
    void thread_buff_input_img_d1();
    void thread_buff_input_img_we1();
    void thread_buff_output_img_address0();
    void thread_buff_output_img_ce0();
    void thread_buff_output_img_d0();
    void thread_buff_output_img_we0();
    void thread_buff_result_img_address0();
    void thread_buff_result_img_ce0();
    void thread_buff_result_img_we0();
    void thread_exitcond1_fu_537_p2();
    void thread_exitcond2_fu_631_p2();
    void thread_exitcond3_fu_609_p2();
    void thread_exitcond4_fu_669_p2();
    void thread_exitcond_flatten_fu_423_p2();
    void thread_exitcond_fu_435_p2();
    void thread_grp_CONV_fu_363_ap_start();
    void thread_grp_CONV_fu_363_kernel_offset();
    void thread_grp_fu_740_p0();
    void thread_grp_fu_740_p1();
    void thread_grp_fu_740_p10();
    void thread_grp_fu_740_p2();
    void thread_grp_fu_749_p0();
    void thread_grp_fu_749_p00();
    void thread_grp_fu_749_p1();
    void thread_grp_fu_749_p2();
    void thread_i_4_fu_441_p2();
    void thread_i_5_fu_727_p2();
    void thread_i_mid2_fu_518_p3();
    void thread_img_port_ARADDR();
    void thread_img_port_ARLEN();
    void thread_img_port_ARVALID();
    void thread_img_port_AWVALID();
    void thread_img_port_BREADY();
    void thread_img_port_RREADY();
    void thread_img_port_WVALID();
    void thread_img_port_blk_n_AR();
    void thread_img_port_blk_n_AW();
    void thread_img_port_blk_n_B();
    void thread_img_port_blk_n_R();
    void thread_img_port_blk_n_W();
    void thread_indvar2_fu_549_p1();
    void thread_indvar3_fu_643_p1();
    void thread_indvar6_fu_621_p1();
    void thread_indvar7_fu_681_p1();
    void thread_indvar_flatten_next_fu_429_p2();
    void thread_indvar_next1_fu_637_p2();
    void thread_indvar_next2_fu_615_p2();
    void thread_indvar_next3_fu_675_p2();
    void thread_indvar_next_fu_543_p2();
    void thread_j_4_fu_626_p2();
    void thread_j_mid2_fu_447_p3();
    void thread_kernel_address0();
    void thread_kernel_ce0();
    void thread_p_shl1_fu_403_p3();
    void thread_p_shl1_mid1_fu_486_p3();
    void thread_p_shl1_mid2_fu_494_p3();
    void thread_p_shl2_fu_576_p3();
    void thread_p_shl3_fu_690_p3();
    void thread_p_sum6_cast_fu_600_p1();
    void thread_p_sum_cast_fu_652_p1();
    void thread_sum2_fu_707_p2();
    void thread_sum_fu_594_p2();
    void thread_tmp_1_i_fu_733_p2();
    void thread_tmp_30_fu_395_p1();
    void thread_tmp_30_mid1_fu_470_p0();
    void thread_tmp_30_mid1_fu_470_p00();
    void thread_tmp_30_mid1_fu_470_p2();
    void thread_tmp_31_fu_411_p5();
    void thread_tmp_31_mid2_cast_fu_482_p1();
    void thread_tmp_31_mid2_fu_476_p3();
    void thread_tmp_32_mid1_fu_500_p5();
    void thread_tmp_32_mid2_fu_512_p3();
    void thread_tmp_33_fu_584_p2();
    void thread_tmp_34_fu_557_p2();
    void thread_tmp_35_fu_562_p1();
    void thread_tmp_38_fu_698_p2();
    void thread_tmp_39_fu_712_p2();
    void thread_tmp_40_fu_716_p1();
    void thread_tmp_41_fu_399_p1();
    void thread_tmp_42_cast6_fu_554_p1();
    void thread_tmp_42_cast_fu_570_p1();
    void thread_tmp_42_fu_573_p1();
    void thread_tmp_43_fu_686_p1();
    void thread_tmp_44_cast_fu_590_p1();
    void thread_tmp_49_cast2_fu_661_p1();
    void thread_tmp_49_cast_fu_665_p1();
    void thread_tmp_53_cast_fu_703_p1();
    void thread_tmp_fu_379_p2();
    void thread_tmp_i_fu_721_p1();
    void thread_tmp_mid1_fu_454_p2();
    void thread_tmp_mid2_fu_460_p3();
    void thread_tmp_s_fu_389_p1();
    void thread_tmp_s_fu_389_p10();
    void thread_tmp_s_fu_389_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
