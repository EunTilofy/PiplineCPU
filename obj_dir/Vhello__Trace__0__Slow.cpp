// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhello__Syms.h"


VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+106,"MemRW_Mem", false,-1);
    tracep->declBit(c+107,"MemRW_EX", false,-1);
    tracep->declBus(c+108,"inst_IF", false,-1, 31,0);
    tracep->declBus(c+109,"inst_ID", false,-1, 31,0);
    tracep->declBus(c+110,"Data_in", false,-1, 31,0);
    tracep->declBus(c+111,"Addr_out", false,-1, 31,0);
    tracep->declBus(c+112,"PC_out_IF", false,-1, 31,0);
    tracep->declBus(c+113,"PC_out_ID", false,-1, 31,0);
    tracep->declBus(c+114,"PC_out_EX", false,-1, 31,0);
    tracep->declBus(c+115,"Data_out", false,-1, 31,0);
    tracep->declBus(c+116,"Data_out_WB", false,-1, 31,0);
    tracep->pushNamePrefix("core_als ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+106,"MemRW_Mem", false,-1);
    tracep->declBit(c+107,"MemRW_EX", false,-1);
    tracep->declBus(c+108,"inst_IF", false,-1, 31,0);
    tracep->declBus(c+109,"inst_ID", false,-1, 31,0);
    tracep->declBus(c+110,"Data_in", false,-1, 31,0);
    tracep->declBus(c+111,"Addr_out", false,-1, 31,0);
    tracep->declBus(c+112,"PC_out_IF", false,-1, 31,0);
    tracep->declBus(c+113,"PC_out_ID", false,-1, 31,0);
    tracep->declBus(c+114,"PC_out_EX", false,-1, 31,0);
    tracep->declBus(c+115,"Data_out", false,-1, 31,0);
    tracep->declBus(c+116,"Data_out_WB", false,-1, 31,0);
    tracep->declBit(c+1,"if_id_stalled", false,-1);
    tracep->declBit(c+1,"id_ex_stalled", false,-1);
    tracep->declBit(c+1,"pcg_branch", false,-1);
    tracep->declBit(c+47,"pcg_isjalr", false,-1);
    tracep->declBus(c+48,"pcg_offset", false,-1, 31,0);
    tracep->declBus(c+2,"pcg_jalr_reg", false,-1, 31,0);
    tracep->declBus(c+117,"radata", false,-1, 31,0);
    tracep->declBus(c+118,"rbdata", false,-1, 31,0);
    tracep->declBus(c+49,"rwdata", false,-1, 31,0);
    tracep->declBit(c+50,"reg_wen", false,-1);
    tracep->declBus(c+51,"reg_anum", false,-1, 4,0);
    tracep->declBus(c+52,"reg_bnum", false,-1, 4,0);
    tracep->declBus(c+53,"reg_wnum", false,-1, 4,0);
    tracep->declBit(c+54,"id_ex_hangon_ra", false,-1);
    tracep->declBit(c+55,"id_ex_hangon_rb", false,-1);
    tracep->declBit(c+56,"ex_overwrite_ra", false,-1);
    tracep->declBit(c+57,"ex_overwrite_rb", false,-1);
    tracep->declBus(c+3,"id_ex_over_data", false,-1, 31,0);
    tracep->declBus(c+119,"ex_over_data", false,-1, 31,0);
    tracep->declBus(c+58,"reg_anum_id", false,-1, 4,0);
    tracep->declBus(c+51,"reg_anum_ex", false,-1, 4,0);
    tracep->declBus(c+59,"reg_bnum_id", false,-1, 4,0);
    tracep->declBus(c+52,"reg_bnum_ex", false,-1, 4,0);
    tracep->declBus(c+60,"reg_wnum_ex", false,-1, 4,0);
    tracep->declBus(c+61,"reg_wnum_m", false,-1, 4,0);
    tracep->declBit(c+62,"reg_wr_ex", false,-1);
    tracep->declBit(c+63,"reg_wr_m", false,-1);
    tracep->declBit(c+64,"mem_load_ex", false,-1);
    tracep->declBit(c+65,"mem_load_m", false,-1);
    tracep->declBus(c+3,"aluresult_ex", false,-1, 31,0);
    tracep->declBus(c+119,"mem_dat_i_w_m", false,-1, 31,0);
    tracep->pushNamePrefix("bypasser_0 ");
    tracep->declBus(c+58,"reg_anum_id", false,-1, 4,0);
    tracep->declBus(c+59,"reg_bnum_id", false,-1, 4,0);
    tracep->declBus(c+51,"reg_anum_ex", false,-1, 4,0);
    tracep->declBus(c+52,"reg_bnum_ex", false,-1, 4,0);
    tracep->declBus(c+60,"reg_wnum_ex", false,-1, 4,0);
    tracep->declBus(c+61,"reg_wnum_m", false,-1, 4,0);
    tracep->declBit(c+62,"reg_wr_ex", false,-1);
    tracep->declBit(c+64,"mem_load_ex", false,-1);
    tracep->declBus(c+3,"aluresult_ex", false,-1, 31,0);
    tracep->declBit(c+63,"reg_wr_m", false,-1);
    tracep->declBit(c+65,"mem_load_m", false,-1);
    tracep->declBus(c+119,"mem_dat_i_w_m", false,-1, 31,0);
    tracep->declBit(c+54,"id_ex_hangon_ra", false,-1);
    tracep->declBit(c+55,"id_ex_hangon_rb", false,-1);
    tracep->declBit(c+56,"ex_overwrite_ra", false,-1);
    tracep->declBit(c+57,"ex_overwrite_rb", false,-1);
    tracep->declBus(c+3,"id_ex_over_data", false,-1, 31,0);
    tracep->declBus(c+119,"ex_over_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_0 ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+54,"id_ex_hangon_ra", false,-1);
    tracep->declBit(c+55,"id_ex_hangon_rb", false,-1);
    tracep->declBit(c+56,"ex_overwrite_ra", false,-1);
    tracep->declBit(c+57,"ex_overwrite_rb", false,-1);
    tracep->declBus(c+3,"id_ex_over_data", false,-1, 31,0);
    tracep->declBus(c+119,"ex_over_data", false,-1, 31,0);
    tracep->declBus(c+117,"radata", false,-1, 31,0);
    tracep->declBus(c+118,"rbdata", false,-1, 31,0);
    tracep->declBus(c+51,"reg_anum", false,-1, 4,0);
    tracep->declBus(c+52,"reg_bnum", false,-1, 4,0);
    tracep->declBus(c+60,"reg_wnum_ex", false,-1, 4,0);
    tracep->declBus(c+114,"PC_out_EX", false,-1, 31,0);
    tracep->declBus(c+2,"pcg_jalr_reg", false,-1, 31,0);
    tracep->declBus(c+48,"pcg_offset", false,-1, 31,0);
    tracep->declBit(c+107,"MemRW_EX", false,-1);
    tracep->declBit(c+1,"pcg_branch", false,-1);
    tracep->declBit(c+47,"pcg_isjalr", false,-1);
    tracep->declBit(c+62,"reg_wr_ex", false,-1);
    tracep->declBit(c+64,"mem_load_ex", false,-1);
    tracep->declBus(c+3,"aluresult_ex", false,-1, 31,0);
    tracep->declBus(c+2,"radata_wrapper", false,-1, 31,0);
    tracep->declBus(c+120,"rbdata_wrapper", false,-1, 31,0);
    tracep->declBit(c+66,"hangon_ra", false,-1);
    tracep->declBit(c+67,"hangon_rb", false,-1);
    tracep->declBus(c+68,"hangon_data", false,-1, 31,0);
    tracep->declBus(c+3,"aluresult", false,-1, 31,0);
    tracep->declBit(c+4,"zero", false,-1);
    tracep->declBit(c+5,"less", false,-1);
    tracep->declBus(c+6,"dataa", false,-1, 31,0);
    tracep->declBus(c+7,"datab", false,-1, 31,0);
    tracep->declBus(c+69,"ALUctr", false,-1, 2,0);
    tracep->declBit(c+70,"ALUext", false,-1);
    tracep->pushNamePrefix("alu_0 ");
    tracep->declBus(c+6,"dataa", false,-1, 31,0);
    tracep->declBus(c+7,"datab", false,-1, 31,0);
    tracep->declBus(c+69,"ALUctr", false,-1, 2,0);
    tracep->declBit(c+70,"ALUext", false,-1);
    tracep->declBit(c+5,"less", false,-1);
    tracep->declBit(c+4,"zero", false,-1);
    tracep->declBus(c+3,"aluresult", false,-1, 31,0);
    tracep->declBus(c+8,"reverse", false,-1, 31,0);
    tracep->declBus(c+9,"temp", false,-1, 31,0);
    tracep->declBit(c+10,"carry", false,-1);
    tracep->declBit(c+11,"of", false,-1);
    tracep->declBus(c+12,"offset", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ex_m_0 ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gprfile_0 ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+51,"reg_anum", false,-1, 4,0);
    tracep->declBus(c+52,"reg_bnum", false,-1, 4,0);
    tracep->declBus(c+117,"radata", false,-1, 31,0);
    tracep->declBus(c+118,"rbdata", false,-1, 31,0);
    tracep->declBus(c+53,"reg_wnum", false,-1, 4,0);
    tracep->declBit(c+50,"reg_wen", false,-1);
    tracep->declBus(c+49,"rwdata", false,-1, 31,0);
    tracep->declBus(c+14,"i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+15+i*1,"gprs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_0 ");
    tracep->declBus(c+113,"PC_out_ID", false,-1, 31,0);
    tracep->declBus(c+109,"inst_ID", false,-1, 31,0);
    tracep->declBus(c+58,"reg_anum_id", false,-1, 4,0);
    tracep->declBus(c+59,"reg_bnum_id", false,-1, 4,0);
    tracep->declBus(c+71,"inst", false,-1, 31,0);
    tracep->declBus(c+72,"imm", false,-1, 31,0);
    tracep->declBus(c+58,"reg_anum", false,-1, 4,0);
    tracep->declBus(c+59,"reg_bnum", false,-1, 4,0);
    tracep->declBus(c+73,"reg_wnum", false,-1, 4,0);
    tracep->declBus(c+74,"ALUctr", false,-1, 2,0);
    tracep->declBus(c+75,"mem_opt", false,-1, 2,0);
    tracep->declBus(c+76,"branch", false,-1, 2,0);
    tracep->declBus(c+77,"alu_sela", false,-1, 1,0);
    tracep->declBus(c+78,"alu_selb", false,-1, 1,0);
    tracep->declBit(c+79,"ALUext", false,-1);
    tracep->declBit(c+80,"mem_wr", false,-1);
    tracep->declBit(c+81,"reg_wr", false,-1);
    tracep->declBit(c+82,"mem_load", false,-1);
    tracep->declBit(c+83,"mem_signed", false,-1);
    tracep->pushNamePrefix("decode_0 ");
    tracep->declBus(c+71,"inst", false,-1, 31,0);
    tracep->declBus(c+72,"imm", false,-1, 31,0);
    tracep->declBus(c+58,"reg_anum", false,-1, 4,0);
    tracep->declBus(c+59,"reg_bnum", false,-1, 4,0);
    tracep->declBus(c+73,"reg_wnum", false,-1, 4,0);
    tracep->declBus(c+74,"ALUctr", false,-1, 2,0);
    tracep->declBit(c+79,"ALUext", false,-1);
    tracep->declBus(c+77,"alu_sela", false,-1, 1,0);
    tracep->declBus(c+78,"alu_selb", false,-1, 1,0);
    tracep->declBit(c+80,"mem_wr", false,-1);
    tracep->declBit(c+81,"reg_wr", false,-1);
    tracep->declBit(c+82,"mem_load", false,-1);
    tracep->declBus(c+75,"mem_opt", false,-1, 2,0);
    tracep->declBit(c+83,"mem_signed", false,-1);
    tracep->declBus(c+76,"branch", false,-1, 2,0);
    tracep->declBus(c+84,"op", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_ex_0 ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+1,"id_ex_stalled", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_0 ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+1,"if_id_stalled", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifx_0 ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+108,"inst_IF", false,-1, 31,0);
    tracep->declBus(c+112,"PC_out_IF", false,-1, 31,0);
    tracep->declBus(c+48,"pcg_offset", false,-1, 31,0);
    tracep->declBus(c+2,"pcg_jalr_reg", false,-1, 31,0);
    tracep->declBit(c+47,"pcg_isjalr", false,-1);
    tracep->declBit(c+1,"pcg_branch", false,-1);
    tracep->declBit(c+85,"pc_reg_en", false,-1);
    tracep->declBus(c+13,"pc_out", false,-1, 31,0);
    tracep->declBus(c+86,"pc_now", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg_0 ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+85,"pc_reg_en", false,-1);
    tracep->declBit(c+47,"pcg_isjalr", false,-1);
    tracep->declBit(c+1,"pcg_branch", false,-1);
    tracep->declBus(c+48,"pcg_offset", false,-1, 31,0);
    tracep->declBus(c+2,"pcg_jalr_reg", false,-1, 31,0);
    tracep->declBus(c+13,"pc_out", false,-1, 31,0);
    tracep->declBus(c+86,"pc_now", false,-1, 31,0);
    tracep->declBus(c+86,"pc", false,-1, 31,0);
    tracep->declBus(c+121,"pc_base", false,-1, 31,0);
    tracep->declBus(c+122,"pc_addition", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("m_0 ");
    tracep->declBus(c+110,"Data_in", false,-1, 31,0);
    tracep->declBus(c+115,"Data_out", false,-1, 31,0);
    tracep->declBus(c+111,"Addr_out", false,-1, 31,0);
    tracep->declBus(c+61,"reg_wnum_m", false,-1, 4,0);
    tracep->declBit(c+63,"reg_wr_m", false,-1);
    tracep->declBit(c+65,"mem_load_m", false,-1);
    tracep->declBus(c+119,"mem_dat_i_w_m", false,-1, 31,0);
    tracep->declBit(c+106,"MemRW_Mem", false,-1);
    tracep->pushNamePrefix("load_sext_0 ");
    tracep->declBus(c+110,"current", false,-1, 31,0);
    tracep->declBus(c+87,"mem_mode", false,-1, 2,0);
    tracep->declBus(c+88,"low_addr", false,-1, 1,0);
    tracep->declBit(c+89,"mem_signed", false,-1);
    tracep->declBus(c+119,"target", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("save_sext_0 ");
    tracep->declBus(c+90,"current", false,-1, 31,0);
    tracep->declBus(c+87,"mem_mode", false,-1, 2,0);
    tracep->declBus(c+88,"low_addr", false,-1, 1,0);
    tracep->declBus(c+115,"target", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("m_wb_0 ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("staller_0 ");
    tracep->declBit(c+47,"pcg_isjalr", false,-1);
    tracep->declBit(c+1,"pcg_branch", false,-1);
    tracep->declBit(c+1,"id_ex_stalled", false,-1);
    tracep->declBit(c+1,"if_id_stalled", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_0 ");
    tracep->declBus(c+116,"Data_out_WB", false,-1, 31,0);
    tracep->declBus(c+49,"rwdata", false,-1, 31,0);
    tracep->declBus(c+53,"reg_wnum", false,-1, 4,0);
    tracep->declBit(c+50,"reg_wen", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_if__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_if__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+108,"inst", false,-1, 31,0);
    tracep->declBus(c+86,"pc", false,-1, 31,0);
}

VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_id__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_id__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+71,"inst", false,-1, 31,0);
    tracep->declBus(c+91,"pc", false,-1, 31,0);
}

VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_id__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_id__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+82,"mem_load", false,-1);
    tracep->declBit(c+81,"reg_wr", false,-1);
    tracep->declBit(c+80,"mem_wr", false,-1);
    tracep->declBus(c+75,"mem_opt", false,-1, 2,0);
    tracep->declBit(c+83,"mem_signed", false,-1);
    tracep->declBus(c+58,"reg_anum", false,-1, 4,0);
    tracep->declBus(c+59,"reg_bnum", false,-1, 4,0);
    tracep->declBus(c+73,"reg_wnum", false,-1, 4,0);
    tracep->declBus(c+77,"alu_sela", false,-1, 1,0);
    tracep->declBus(c+78,"alu_selb", false,-1, 1,0);
    tracep->declBus(c+74,"ALUctr", false,-1, 2,0);
    tracep->declBit(c+79,"ALUext", false,-1);
    tracep->declBus(c+72,"imm", false,-1, 31,0);
    tracep->declBus(c+91,"pc", false,-1, 31,0);
    tracep->declBus(c+76,"branch", false,-1, 2,0);
}

VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_ex__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_ex__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+64,"mem_load", false,-1);
    tracep->declBit(c+62,"reg_wr", false,-1);
    tracep->declBit(c+92,"mem_wr", false,-1);
    tracep->declBus(c+93,"mem_opt", false,-1, 2,0);
    tracep->declBit(c+94,"mem_signed", false,-1);
    tracep->declBus(c+51,"reg_anum", false,-1, 4,0);
    tracep->declBus(c+52,"reg_bnum", false,-1, 4,0);
    tracep->declBus(c+60,"reg_wnum", false,-1, 4,0);
    tracep->declBus(c+95,"alu_sela", false,-1, 1,0);
    tracep->declBus(c+96,"alu_selb", false,-1, 1,0);
    tracep->declBus(c+69,"ALUctr", false,-1, 2,0);
    tracep->declBit(c+70,"ALUext", false,-1);
    tracep->declBus(c+48,"imm", false,-1, 31,0);
    tracep->declBus(c+97,"pc", false,-1, 31,0);
    tracep->declBus(c+98,"branch", false,-1, 2,0);
}

VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_ex__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_ex__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3,"aluresult", false,-1, 31,0);
    tracep->declBus(c+118,"rbdata", false,-1, 31,0);
    tracep->declBit(c+64,"mem_load", false,-1);
    tracep->declBit(c+62,"reg_wr", false,-1);
    tracep->declBit(c+92,"mem_wr", false,-1);
    tracep->declBus(c+93,"mem_opt", false,-1, 2,0);
    tracep->declBit(c+94,"mem_signed", false,-1);
    tracep->declBus(c+60,"reg_wnum", false,-1, 4,0);
}

VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_m__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_m__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+68,"aluresult", false,-1, 31,0);
    tracep->declBus(c+90,"rbdata", false,-1, 31,0);
    tracep->declBit(c+65,"mem_load", false,-1);
    tracep->declBit(c+63,"reg_wr", false,-1);
    tracep->declBit(c+99,"mem_wr", false,-1);
    tracep->declBus(c+87,"mem_opt", false,-1, 2,0);
    tracep->declBit(c+89,"mem_signed", false,-1);
    tracep->declBus(c+61,"reg_wnum", false,-1, 4,0);
}

VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_m__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_m__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+68,"aluresult", false,-1, 31,0);
    tracep->declBus(c+119,"mem_dat_i_w", false,-1, 31,0);
    tracep->declBus(c+115,"Data_out", false,-1, 31,0);
    tracep->declBit(c+65,"mem_load", false,-1);
    tracep->declBit(c+63,"reg_wr", false,-1);
    tracep->declBus(c+61,"reg_wnum", false,-1, 4,0);
}

VL_ATTR_COLD void Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_wb__0(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_wb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+100,"aluresult", false,-1, 31,0);
    tracep->declBus(c+101,"mem_dat_i_w", false,-1, 31,0);
    tracep->declBus(c+102,"Data_out", false,-1, 31,0);
    tracep->declBit(c+103,"mem_load", false,-1);
    tracep->declBit(c+50,"reg_wr", false,-1);
    tracep->declBus(c+53,"reg_wnum", false,-1, 4,0);
}

VL_ATTR_COLD void Vhello___024root__trace_init_top(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_init_top\n"); );
    // Body
    Vhello___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("core_als ");
    tracep->pushNamePrefix("ex_0 ");
    tracep->pushNamePrefix("if_ex_m_ex ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_ex__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_ex_ex ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_ex__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ex_m_0 ");
    tracep->pushNamePrefix("if_ex_m_ex ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_ex__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_ex_m_m ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_m__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_0 ");
    tracep->pushNamePrefix("if_id_ex_id ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_id__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_if_id_id ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_id__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_ex_0 ");
    tracep->pushNamePrefix("if_id_ex_ex ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_ex__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_ex_id ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_id__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("if_ex_m_ex ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_ex__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_ex_m_m ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_m__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_0 ");
    tracep->pushNamePrefix("if_if_id_id ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_id__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_if_id_if ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_if__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("if_id_ex_ex ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_ex__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_ex_id ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_id_ex_id__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_if_id_id ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_id__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_if_id_if ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_if__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_m_wb_m ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_m__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_m_wb_wb ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifx_0 ");
    tracep->pushNamePrefix("if_if_id_if ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_if_id_if__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("m_0 ");
    tracep->pushNamePrefix("if_ex_m_m ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_ex_m_m__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_m_wb_m ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_m__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("m_wb_0 ");
    tracep->pushNamePrefix("if_m_wb_m ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_m__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_m_wb_wb ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_0 ");
    tracep->pushNamePrefix("if_m_wb_wb ");
    Vhello___024root__trace_init_sub__TOP__core_als__DOT__if_m_wb_wb__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vhello___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhello___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhello___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhello___024root__trace_register(Vhello___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vhello___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vhello___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vhello___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhello___024root__trace_full_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhello___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_full_top_0\n"); );
    // Init
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhello___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhello___024root__trace_full_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->core_als__DOT__pcg_branch));
    bufp->fullIData(oldp+2,(vlSelf->core_als__DOT__pcg_jalr_reg),32);
    bufp->fullIData(oldp+3,(vlSelf->core_als__DOT__ex_0__DOT__aluresult),32);
    bufp->fullBit(oldp+4,(vlSelf->core_als__DOT__ex_0__DOT__zero));
    bufp->fullBit(oldp+5,(vlSelf->core_als__DOT__ex_0__DOT__less));
    bufp->fullIData(oldp+6,(vlSelf->core_als__DOT__ex_0__DOT__dataa),32);
    bufp->fullIData(oldp+7,(vlSelf->core_als__DOT__ex_0__DOT__datab),32);
    bufp->fullIData(oldp+8,(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse),32);
    bufp->fullIData(oldp+9,(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp),32);
    bufp->fullBit(oldp+10,(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry));
    bufp->fullBit(oldp+11,(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of));
    bufp->fullCData(oldp+12,((0x1fU & vlSelf->core_als__DOT__ex_0__DOT__datab)),5);
    bufp->fullIData(oldp+13,(vlSelf->core_als__DOT__ifx_0__DOT__pc_out),32);
    bufp->fullIData(oldp+14,(vlSelf->core_als__DOT__gprfile_0__DOT__i),32);
    bufp->fullIData(oldp+15,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0]),32);
    bufp->fullIData(oldp+16,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[1]),32);
    bufp->fullIData(oldp+17,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[2]),32);
    bufp->fullIData(oldp+18,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[3]),32);
    bufp->fullIData(oldp+19,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[4]),32);
    bufp->fullIData(oldp+20,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[5]),32);
    bufp->fullIData(oldp+21,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[6]),32);
    bufp->fullIData(oldp+22,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[7]),32);
    bufp->fullIData(oldp+23,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[8]),32);
    bufp->fullIData(oldp+24,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[9]),32);
    bufp->fullIData(oldp+25,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[10]),32);
    bufp->fullIData(oldp+26,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[11]),32);
    bufp->fullIData(oldp+27,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[12]),32);
    bufp->fullIData(oldp+28,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[13]),32);
    bufp->fullIData(oldp+29,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[14]),32);
    bufp->fullIData(oldp+30,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[15]),32);
    bufp->fullIData(oldp+31,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[16]),32);
    bufp->fullIData(oldp+32,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[17]),32);
    bufp->fullIData(oldp+33,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[18]),32);
    bufp->fullIData(oldp+34,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[19]),32);
    bufp->fullIData(oldp+35,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[20]),32);
    bufp->fullIData(oldp+36,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[21]),32);
    bufp->fullIData(oldp+37,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[22]),32);
    bufp->fullIData(oldp+38,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[23]),32);
    bufp->fullIData(oldp+39,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[24]),32);
    bufp->fullIData(oldp+40,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[25]),32);
    bufp->fullIData(oldp+41,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[26]),32);
    bufp->fullIData(oldp+42,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[27]),32);
    bufp->fullIData(oldp+43,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[28]),32);
    bufp->fullIData(oldp+44,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[29]),32);
    bufp->fullIData(oldp+45,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[30]),32);
    bufp->fullIData(oldp+46,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[31]),32);
    bufp->fullBit(oldp+47,((2U == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch))));
    bufp->fullIData(oldp+48,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm),32);
    bufp->fullIData(oldp+49,(vlSelf->core_als__DOT__rwdata),32);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wr));
    bufp->fullCData(oldp+51,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum),5);
    bufp->fullCData(oldp+52,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum),5);
    bufp->fullCData(oldp+53,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wnum),5);
    bufp->fullBit(oldp+54,(((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_he27d2afb__0) 
                            & ((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                         >> 0xfU)) 
                               == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum)))));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_he27d2afb__0) 
                            & ((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                         >> 0x14U)) 
                               == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum)))));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                            & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum) 
                               == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                            & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum) 
                               == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))));
    bufp->fullCData(oldp+58,((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum),5);
    bufp->fullCData(oldp+61,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum),5);
    bufp->fullBit(oldp+62,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wr));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wr));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_load));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_load));
    bufp->fullBit(oldp+66,(vlSelf->core_als__DOT__ex_0__DOT__hangon_ra));
    bufp->fullBit(oldp+67,(vlSelf->core_als__DOT__ex_0__DOT__hangon_rb));
    bufp->fullIData(oldp+68,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult),32);
    bufp->fullCData(oldp+69,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr),3);
    bufp->fullBit(oldp+70,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUext));
    bufp->fullIData(oldp+71,(vlSymsp->TOP__core_als__DOT__if_if_id_id.inst),32);
    bufp->fullIData(oldp+72,(vlSelf->core_als__DOT__id_0__DOT__imm),32);
    bufp->fullCData(oldp+73,((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+74,((7U & ((0x33U == (0x7fU 
                                               & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                     ? (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                        >> 0xcU) : 
                                    ((0x13U == (0x7fU 
                                                & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                      ? (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                         >> 0xcU) : 
                                     ((0x63U == (0x7fU 
                                                 & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                       ? ((3U == (3U 
                                                  & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                     >> 0xdU)))
                                           ? 3U : 2U)
                                       : 0U))))),3);
    bufp->fullCData(oldp+75,((((0x23U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)) 
                               | (3U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)))
                               ? ((0U == (3U & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                >> 0xcU)))
                                   ? 1U : ((1U == (3U 
                                                   & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                      >> 0xcU)))
                                            ? 3U : 
                                           ((2U == 
                                             (3U & 
                                              (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                               >> 0xcU)))
                                             ? 7U : 0U)))
                               : 0U)),3);
    bufp->fullCData(oldp+76,(((0x6fU == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                               ? 1U : ((0x67U == (0x7fU 
                                                  & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                        ? 2U : ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                                 ? 
                                                ((0x4000U 
                                                  & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                   ? 7U
                                                   : 6U)
                                                  : 
                                                 ((0x2000U 
                                                   & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                   ? 0U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                    ? 5U
                                                    : 4U)))
                                                 : 0U)))),3);
    bufp->fullCData(oldp+77,(vlSelf->core_als__DOT__id_0__DOT__alu_sela),2);
    bufp->fullCData(oldp+78,(vlSelf->core_als__DOT__id_0__DOT__alu_selb),2);
    bufp->fullBit(oldp+79,((1U & ((0x33U == (0x7fU 
                                             & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                   ? (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                      >> 0x1eU) : (IData)(
                                                          (0x40005013U 
                                                           == 
                                                           (0x4000707fU 
                                                            & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)))))));
    bufp->fullBit(oldp+80,((0x23U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))));
    bufp->fullBit(oldp+81,(vlSelf->core_als__DOT__id_0__DOT__reg_wr));
    bufp->fullBit(oldp+82,((3U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))));
    bufp->fullBit(oldp+83,((IData)((3U == (0x607fU 
                                           & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)))));
    bufp->fullCData(oldp+84,((0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)),7);
    bufp->fullBit(oldp+85,(vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_en));
    bufp->fullIData(oldp+86,(vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc),32);
    bufp->fullCData(oldp+87,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt),3);
    bufp->fullCData(oldp+88,((3U & vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult)),2);
    bufp->fullBit(oldp+89,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_signed));
    bufp->fullIData(oldp+90,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.rbdata),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__core_als__DOT__if_if_id_id.pc),32);
    bufp->fullBit(oldp+92,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_wr));
    bufp->fullCData(oldp+93,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_opt),3);
    bufp->fullBit(oldp+94,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_signed));
    bufp->fullCData(oldp+95,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela),2);
    bufp->fullCData(oldp+96,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb),2);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.pc),32);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch),3);
    bufp->fullBit(oldp+99,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_wr));
    bufp->fullIData(oldp+100,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.aluresult),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.mem_dat_i_w),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.Data_out),32);
    bufp->fullBit(oldp+103,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.mem_load));
    bufp->fullBit(oldp+104,(vlSelf->clk));
    bufp->fullBit(oldp+105,(vlSelf->rst));
    bufp->fullBit(oldp+106,(vlSelf->MemRW_Mem));
    bufp->fullBit(oldp+107,(vlSelf->MemRW_EX));
    bufp->fullIData(oldp+108,(vlSelf->inst_IF),32);
    bufp->fullIData(oldp+109,(vlSelf->inst_ID),32);
    bufp->fullIData(oldp+110,(vlSelf->Data_in),32);
    bufp->fullIData(oldp+111,(vlSelf->Addr_out),32);
    bufp->fullIData(oldp+112,(vlSelf->PC_out_IF),32);
    bufp->fullIData(oldp+113,(vlSelf->PC_out_ID),32);
    bufp->fullIData(oldp+114,(vlSelf->PC_out_EX),32);
    bufp->fullIData(oldp+115,(vlSelf->Data_out),32);
    bufp->fullIData(oldp+116,(vlSelf->Data_out_WB),32);
    bufp->fullIData(oldp+117,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs
                              [vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum]),32);
    bufp->fullIData(oldp+118,(vlSelf->core_als__DOT__rbdata),32);
    bufp->fullIData(oldp+119,(vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target),32);
    bufp->fullIData(oldp+120,((((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                                & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum) 
                                   == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))
                                ? vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target
                                : ((IData)(vlSelf->core_als__DOT__ex_0__DOT__hangon_rb)
                                    ? vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult
                                    : vlSelf->core_als__DOT__rbdata))),32);
    bufp->fullIData(oldp+121,(((2U == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch))
                                ? vlSelf->core_als__DOT__pcg_jalr_reg
                                : vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc)),32);
    bufp->fullIData(oldp+122,(((IData)(vlSelf->core_als__DOT__pcg_branch)
                                ? (vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm 
                                   - (IData)(0xcU))
                                : 4U)),32);
}
