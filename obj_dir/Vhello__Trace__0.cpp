// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhello__Syms.h"


void Vhello___024root__trace_chg_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhello___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_chg_top_0\n"); );
    // Init
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhello___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vhello___024root__trace_chg_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+0,(vlSelf->core_als__DOT__pcg_branch));
        bufp->chgIData(oldp+1,(vlSelf->core_als__DOT__pcg_jalr_reg),32);
        bufp->chgIData(oldp+2,(vlSelf->core_als__DOT__ex_0__DOT__aluresult),32);
        bufp->chgBit(oldp+3,(vlSelf->core_als__DOT__ex_0__DOT__zero));
        bufp->chgBit(oldp+4,(vlSelf->core_als__DOT__ex_0__DOT__less));
        bufp->chgIData(oldp+5,(vlSelf->core_als__DOT__ex_0__DOT__dataa),32);
        bufp->chgIData(oldp+6,(vlSelf->core_als__DOT__ex_0__DOT__datab),32);
        bufp->chgIData(oldp+7,(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse),32);
        bufp->chgIData(oldp+8,(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp),32);
        bufp->chgBit(oldp+9,(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry));
        bufp->chgBit(oldp+10,(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of));
        bufp->chgCData(oldp+11,((0x1fU & vlSelf->core_als__DOT__ex_0__DOT__datab)),5);
        bufp->chgIData(oldp+12,(vlSelf->core_als__DOT__ifx_0__DOT__pc_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+13,(vlSelf->core_als__DOT__gprfile_0__DOT__i),32);
        bufp->chgIData(oldp+14,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0]),32);
        bufp->chgIData(oldp+15,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[1]),32);
        bufp->chgIData(oldp+16,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[2]),32);
        bufp->chgIData(oldp+17,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[3]),32);
        bufp->chgIData(oldp+18,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[4]),32);
        bufp->chgIData(oldp+19,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[5]),32);
        bufp->chgIData(oldp+20,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[6]),32);
        bufp->chgIData(oldp+21,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[7]),32);
        bufp->chgIData(oldp+22,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[8]),32);
        bufp->chgIData(oldp+23,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[9]),32);
        bufp->chgIData(oldp+24,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[10]),32);
        bufp->chgIData(oldp+25,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[11]),32);
        bufp->chgIData(oldp+26,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[12]),32);
        bufp->chgIData(oldp+27,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[13]),32);
        bufp->chgIData(oldp+28,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[14]),32);
        bufp->chgIData(oldp+29,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[15]),32);
        bufp->chgIData(oldp+30,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[16]),32);
        bufp->chgIData(oldp+31,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[17]),32);
        bufp->chgIData(oldp+32,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[18]),32);
        bufp->chgIData(oldp+33,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[19]),32);
        bufp->chgIData(oldp+34,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[20]),32);
        bufp->chgIData(oldp+35,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[21]),32);
        bufp->chgIData(oldp+36,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[22]),32);
        bufp->chgIData(oldp+37,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[23]),32);
        bufp->chgIData(oldp+38,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[24]),32);
        bufp->chgIData(oldp+39,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[25]),32);
        bufp->chgIData(oldp+40,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[26]),32);
        bufp->chgIData(oldp+41,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[27]),32);
        bufp->chgIData(oldp+42,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[28]),32);
        bufp->chgIData(oldp+43,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[29]),32);
        bufp->chgIData(oldp+44,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[30]),32);
        bufp->chgIData(oldp+45,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+46,((2U == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch))));
        bufp->chgIData(oldp+47,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm),32);
        bufp->chgIData(oldp+48,(vlSelf->core_als__DOT__rwdata),32);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wr));
        bufp->chgCData(oldp+50,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum),5);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum),5);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wnum),5);
        bufp->chgBit(oldp+53,(((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_he27d2afb__0) 
                               & ((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                            >> 0xfU)) 
                                  == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum)))));
        bufp->chgBit(oldp+54,(((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_he27d2afb__0) 
                               & ((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                            >> 0x14U)) 
                                  == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum)))));
        bufp->chgBit(oldp+55,(((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                               & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum) 
                                  == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))));
        bufp->chgBit(oldp+56,(((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                               & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum) 
                                  == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))));
        bufp->chgCData(oldp+57,((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+58,((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum),5);
        bufp->chgCData(oldp+60,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum),5);
        bufp->chgBit(oldp+61,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wr));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wr));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_load));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_load));
        bufp->chgBit(oldp+65,(vlSelf->core_als__DOT__ex_0__DOT__hangon_ra));
        bufp->chgBit(oldp+66,(vlSelf->core_als__DOT__ex_0__DOT__hangon_rb));
        bufp->chgIData(oldp+67,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult),32);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr),3);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUext));
        bufp->chgIData(oldp+70,(vlSymsp->TOP__core_als__DOT__if_if_id_id.inst),32);
        bufp->chgIData(oldp+71,(vlSelf->core_als__DOT__id_0__DOT__imm),32);
        bufp->chgCData(oldp+72,((0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+73,((7U & ((0x33U == (0x7fU 
                                                  & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                        ? (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                           >> 0xcU)
                                        : ((0x13U == 
                                            (0x7fU 
                                             & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                            ? (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                               >> 0xcU)
                                            : ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                                ? (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                        >> 0xdU)))
                                                    ? 3U
                                                    : 2U)
                                                : 0U))))),3);
        bufp->chgCData(oldp+74,((((0x23U == (0x7fU 
                                             & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)) 
                                  | (3U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)))
                                  ? ((0U == (3U & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                   >> 0xcU)))
                                      ? 1U : ((1U == 
                                               (3U 
                                                & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                   >> 0xcU)))
                                               ? 3U
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                       >> 0xcU)))
                                                   ? 7U
                                                   : 0U)))
                                  : 0U)),3);
        bufp->chgCData(oldp+75,(((0x6fU == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                  ? 1U : ((0x67U == 
                                           (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                           ? 2U : (
                                                   (0x63U 
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
        bufp->chgCData(oldp+76,(vlSelf->core_als__DOT__id_0__DOT__alu_sela),2);
        bufp->chgCData(oldp+77,(vlSelf->core_als__DOT__id_0__DOT__alu_selb),2);
        bufp->chgBit(oldp+78,((1U & ((0x33U == (0x7fU 
                                                & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                      ? (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                         >> 0x1eU) : (IData)(
                                                             (0x40005013U 
                                                              == 
                                                              (0x4000707fU 
                                                               & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)))))));
        bufp->chgBit(oldp+79,((0x23U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))));
        bufp->chgBit(oldp+80,(vlSelf->core_als__DOT__id_0__DOT__reg_wr));
        bufp->chgBit(oldp+81,((3U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))));
        bufp->chgBit(oldp+82,((IData)((3U == (0x607fU 
                                              & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)))));
        bufp->chgCData(oldp+83,((0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)),7);
        bufp->chgBit(oldp+84,(vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_en));
        bufp->chgIData(oldp+85,(vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc),32);
        bufp->chgCData(oldp+86,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt),3);
        bufp->chgCData(oldp+87,((3U & vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult)),2);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_signed));
        bufp->chgIData(oldp+89,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.rbdata),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__core_als__DOT__if_if_id_id.pc),32);
        bufp->chgBit(oldp+91,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_wr));
        bufp->chgCData(oldp+92,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_opt),3);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_signed));
        bufp->chgCData(oldp+94,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela),2);
        bufp->chgCData(oldp+95,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb),2);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.pc),32);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch),3);
        bufp->chgBit(oldp+98,(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_wr));
        bufp->chgIData(oldp+99,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.aluresult),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.mem_dat_i_w),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.Data_out),32);
        bufp->chgBit(oldp+102,(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.mem_load));
    }
    bufp->chgBit(oldp+103,(vlSelf->clk));
    bufp->chgBit(oldp+104,(vlSelf->rst));
    bufp->chgBit(oldp+105,(vlSelf->MemRW_Mem));
    bufp->chgBit(oldp+106,(vlSelf->MemRW_EX));
    bufp->chgIData(oldp+107,(vlSelf->inst_IF),32);
    bufp->chgIData(oldp+108,(vlSelf->inst_ID),32);
    bufp->chgIData(oldp+109,(vlSelf->Data_in),32);
    bufp->chgIData(oldp+110,(vlSelf->Addr_out),32);
    bufp->chgIData(oldp+111,(vlSelf->PC_out_IF),32);
    bufp->chgIData(oldp+112,(vlSelf->PC_out_ID),32);
    bufp->chgIData(oldp+113,(vlSelf->PC_out_EX),32);
    bufp->chgIData(oldp+114,(vlSelf->Data_out),32);
    bufp->chgIData(oldp+115,(vlSelf->Data_out_WB),32);
    bufp->chgIData(oldp+116,(vlSelf->core_als__DOT__gprfile_0__DOT__gprs
                             [vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum]),32);
    bufp->chgIData(oldp+117,(vlSelf->core_als__DOT__rbdata),32);
    bufp->chgIData(oldp+118,(vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target),32);
    bufp->chgIData(oldp+119,((((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                               & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum) 
                                  == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))
                               ? vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target
                               : ((IData)(vlSelf->core_als__DOT__ex_0__DOT__hangon_rb)
                                   ? vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult
                                   : vlSelf->core_als__DOT__rbdata))),32);
    bufp->chgIData(oldp+120,(((2U == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch))
                               ? vlSelf->core_als__DOT__pcg_jalr_reg
                               : vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc)),32);
    bufp->chgIData(oldp+121,(((IData)(vlSelf->core_als__DOT__pcg_branch)
                               ? (vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm 
                                  - (IData)(0xcU)) : 4U)),32);
}

void Vhello___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_cleanup\n"); );
    // Init
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
