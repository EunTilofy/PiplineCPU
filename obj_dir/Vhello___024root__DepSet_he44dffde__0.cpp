// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello__Syms.h"
#include "Vhello___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello___024root___dump_triggers__ico(Vhello___024root* vlSelf);
#endif  // VL_DEBUG

void Vhello___024root___eval_triggers__ico(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhello___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 32> Vhello__ConstPool__TABLE_h249d9973_0;

VL_INLINE_OPT void Vhello___024root___ico_sequent__TOP__0(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
        = ((2U & vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult)
            ? ((1U & vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult)
                ? (vlSelf->Data_in >> 0x18U) : (vlSelf->Data_in 
                                                >> 0x10U))
            : ((1U & vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult)
                ? (vlSelf->Data_in >> 8U) : vlSelf->Data_in));
    if (vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_signed) {
        if ((3U == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt))) {
            vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                = (vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                   | ((- (IData)((1U & (vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                                        >> 0xfU)))) 
                      << 0x10U));
        } else if ((1U == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt))) {
            vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                = (vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                   | ((- (IData)((1U & (vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                                        >> 7U)))) << 8U));
        }
    }
    vlSelf->core_als__DOT__ex_0__DOT__datab = ((2U 
                                                == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb))
                                                ? 4U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb))
                                                    ? vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb))
                                                     ? 
                                                    (((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                                                      & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum) 
                                                         == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))
                                                      ? vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target
                                                      : 
                                                     ((IData)(vlSelf->core_als__DOT__ex_0__DOT__hangon_rb)
                                                       ? vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult
                                                       : vlSelf->core_als__DOT__rbdata))
                                                     : 0U)));
    vlSelf->core_als__DOT__pcg_jalr_reg = (((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                                            & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum) 
                                               == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))
                                            ? vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target
                                            : ((IData)(vlSelf->core_als__DOT__ex_0__DOT__hangon_ra)
                                                ? vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult
                                                : vlSelf->core_als__DOT__gprfile_0__DOT__gprs
                                               [vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum]));
    vlSelf->core_als__DOT__ex_0__DOT__dataa = ((1U 
                                                == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela))
                                                ? vlSymsp->TOP__core_als__DOT__if_id_ex_ex.pc
                                                : (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela))
                                                     ? vlSelf->core_als__DOT__pcg_jalr_reg
                                                     : 0U)));
    if ((4U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
        if ((2U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
            if ((1U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
                vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                    = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                       & vlSelf->core_als__DOT__ex_0__DOT__datab);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__zero 
                    = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
            } else {
                vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                    = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                       | vlSelf->core_als__DOT__ex_0__DOT__datab);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__zero 
                    = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
            }
        } else if ((1U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
            if (vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUext) {
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((1U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? ((0x80000000U & vlSelf->core_als__DOT__ex_0__DOT__dataa) 
                           | (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                              >> 1U)) : vlSelf->core_als__DOT__ex_0__DOT__dataa);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((2U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? (((- (IData)((vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                        >> 0x1fU))) 
                            << 0x1eU) | (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                         >> 2U)) : vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((4U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? (((- (IData)((vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                        >> 0x1fU))) 
                            << 0x1cU) | (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                         >> 4U)) : vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((8U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? (((- (IData)((vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                        >> 0x1fU))) 
                            << 0x18U) | (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                         >> 8U)) : vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((0x10U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? (((- (IData)((vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                        >> 0x1fU))) 
                            << 0x10U) | (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                         >> 0x10U))
                        : vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp);
            } else {
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                       >> (0x1fU & vlSelf->core_als__DOT__ex_0__DOT__datab));
            }
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp;
            vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
        } else {
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                   ^ vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
        }
    } else if ((2U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
        if ((1U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse 
                = (~ vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry 
                = (1U & (IData)((1ULL & ((1ULL + ((QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__dataa)) 
                                                  + (QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse)))) 
                                         >> 0x20U))));
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                   == vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__less 
                = ((1U ^ (IData)(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry))
                    ? 1U : 0U);
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = vlSelf->core_als__DOT__ex_0__DOT__less;
        } else {
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse 
                = (~ vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry 
                = (1U & (IData)((1ULL & ((1ULL + ((QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__dataa)) 
                                                  + (QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse)))) 
                                         >> 0x20U))));
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                   == vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = ((IData)(1U) + (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                                  + vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse));
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of 
                = (((vlSelf->core_als__DOT__ex_0__DOT__dataa 
                     >> 0x1fU) == (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse 
                                   >> 0x1fU)) & ((vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                                                  >> 0x1fU)));
            vlSelf->core_als__DOT__ex_0__DOT__less 
                = ((vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                    >> 0x1fU) ^ (IData)(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of));
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = vlSelf->core_als__DOT__ex_0__DOT__less;
        }
    } else if ((1U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
        vlSelf->core_als__DOT__ex_0__DOT__aluresult 
            = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
               << (0x1fU & vlSelf->core_als__DOT__ex_0__DOT__datab));
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__zero = (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
    } else {
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
        if (vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUext) {
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = ((IData)(1U) + (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                                  + (~ vlSelf->core_als__DOT__ex_0__DOT__datab)));
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry 
                = (1U & (IData)((1ULL & ((1ULL + ((QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__dataa)) 
                                                  + (QData)((IData)(
                                                                    (~ vlSelf->core_als__DOT__ex_0__DOT__datab))))) 
                                         >> 0x20U))));
            vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
        } else {
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                   + vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry 
                = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__dataa)) 
                                          + (QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__datab))) 
                                         >> 0x20U))));
            vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->core_als__DOT__ex_0__DOT__zero) 
                     << 4U) | (((IData)(vlSelf->core_als__DOT__ex_0__DOT__less) 
                                << 3U) | (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch)));
    vlSelf->core_als__DOT__pcg_branch = Vhello__ConstPool__TABLE_h249d9973_0
        [__Vtableidx1];
    vlSelf->core_als__DOT__ifx_0__DOT__pc_out = (((2U 
                                                   == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch))
                                                   ? vlSelf->core_als__DOT__pcg_jalr_reg
                                                   : vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc) 
                                                 + 
                                                 ((IData)(vlSelf->core_als__DOT__pcg_branch)
                                                   ? 
                                                  (vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm 
                                                   - (IData)(0xcU))
                                                   : 4U));
    vlSelf->PC_out_IF = ((IData)(vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_en)
                          ? vlSelf->core_als__DOT__ifx_0__DOT__pc_out
                          : 0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello___024root___dump_triggers__act(Vhello___024root* vlSelf);
#endif  // VL_DEBUG

void Vhello___024root___eval_triggers__act(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhello___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vhello___024root___nba_sequent__TOP__0(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v0;
    __Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__core_als__DOT__gprfile_0__DOT__gprs__v32;
    __Vdlyvdim0__core_als__DOT__gprfile_0__DOT__gprs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__core_als__DOT__gprfile_0__DOT__gprs__v32;
    __Vdlyvval__core_als__DOT__gprfile_0__DOT__gprs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v32;
    __Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v32 = 0;
    // Body
    __Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v0 = 0U;
    __Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->core_als__DOT__gprfile_0__DOT__i = 0x20U;
        __Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v0 = 1U;
    } else if (VL_UNLIKELY(((0U != (IData)(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wnum)) 
                            & (IData)(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wr)))) {
        VL_WRITEF("write %x into %2#\n",32,vlSelf->core_als__DOT__rwdata,
                  5,(IData)(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wnum));
        __Vdlyvval__core_als__DOT__gprfile_0__DOT__gprs__v32 
            = vlSelf->core_als__DOT__rwdata;
        __Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v32 = 1U;
        __Vdlyvdim0__core_als__DOT__gprfile_0__DOT__gprs__v32 
            = vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wnum;
    }
    if (__Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v0) {
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[1U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[2U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[3U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[4U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[5U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[6U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[7U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[8U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[9U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0xaU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0xbU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0xcU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0xdU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0xeU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0xfU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x10U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x11U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x12U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x13U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x14U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x15U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x16U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x17U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x18U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x19U] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x1aU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x1bU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x1cU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x1dU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x1eU] = 0U;
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[0x1fU] = 0U;
    }
    if (__Vdlyvset__core_als__DOT__gprfile_0__DOT__gprs__v32) {
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[__Vdlyvdim0__core_als__DOT__gprfile_0__DOT__gprs__v32] 
            = __Vdlyvval__core_als__DOT__gprfile_0__DOT__gprs__v32;
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vhello__ConstPool__TABLE_h7af91f1a_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vhello__ConstPool__TABLE_h0e6bfecf_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vhello__ConstPool__TABLE_h92587611_0;

VL_INLINE_OPT void Vhello___024root___nba_sequent__TOP__1(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUext 
        = (1U & ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->core_als__DOT__pcg_branch)) 
                                             & ((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                                 ? 
                                                (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                 >> 0x1eU)
                                                 : (IData)(
                                                           (0x40005013U 
                                                            == 
                                                            (0x4000707fU 
                                                             & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)))))));
    vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_wr = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_wr));
    vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_signed 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_signed));
    vlSelf->core_als__DOT__ex_0__DOT__hangon_rb = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & ((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_he27d2afb__0) 
                                                      & ((0x1fU 
                                                          & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum))));
    vlSelf->core_als__DOT__ex_0__DOT__hangon_ra = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & ((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_he27d2afb__0) 
                                                      & ((0x1fU 
                                                          & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                             >> 0xfU)) 
                                                         == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum))));
    vlSymsp->TOP__core_als__DOT__if_m_wb_wb.mem_load 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_load));
    vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wr 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wr));
    vlSelf->MemRW_Mem = vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_wr;
    vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_wr 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->core_als__DOT__pcg_branch)) 
                                       & (0x23U == 
                                          (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))));
    if (vlSelf->rst) {
        vlSymsp->TOP__core_als__DOT__if_m_wb_wb.Data_out = 0U;
        vlSymsp->TOP__core_als__DOT__if_ex_m_m.rbdata = 0U;
        vlSymsp->TOP__core_als__DOT__if_m_wb_wb.mem_dat_i_w = 0U;
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela = 0U;
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb = 0U;
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm = 0U;
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch = 0U;
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr = 0U;
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum = 0U;
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum = 0U;
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.pc = 0U;
    } else {
        vlSymsp->TOP__core_als__DOT__if_m_wb_wb.Data_out 
            = vlSelf->Data_out;
        vlSymsp->TOP__core_als__DOT__if_ex_m_m.rbdata 
            = vlSelf->core_als__DOT__rbdata;
        vlSymsp->TOP__core_als__DOT__if_m_wb_wb.mem_dat_i_w 
            = vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target;
        if (vlSelf->core_als__DOT__pcg_branch) {
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela = 0U;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb = 1U;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm = 0U;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch = 0U;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr = 0U;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum = 0U;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum = 0U;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.pc = 0U;
        } else {
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela 
                = vlSelf->core_als__DOT__id_0__DOT__alu_sela;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb 
                = vlSelf->core_als__DOT__id_0__DOT__alu_selb;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm 
                = vlSelf->core_als__DOT__id_0__DOT__imm;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch 
                = ((0x6fU == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                    ? 1U : ((0x67U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                             ? 2U : ((0x63U == (0x7fU 
                                                & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                      ? ((0x4000U & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                          ? ((0x1000U 
                                              & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                              ? 7U : 6U)
                                          : ((0x2000U 
                                              & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                              ? 0U : 
                                             ((0x1000U 
                                               & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                               ? 5U
                                               : 4U)))
                                      : 0U)));
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr 
                = (7U & ((0x33U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                          ? (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                             >> 0xcU) : ((0x13U == 
                                          (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                          ? (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                             >> 0xcU)
                                          : ((0x63U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))
                                              ? ((3U 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                      >> 0xdU)))
                                                  ? 3U
                                                  : 2U)
                                              : 0U))));
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum 
                = (0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                            >> 0xfU));
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum 
                = (0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                            >> 0x14U));
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.pc 
                = vlSymsp->TOP__core_als__DOT__if_if_id_id.pc;
        }
    }
    vlSelf->PC_out_EX = vlSymsp->TOP__core_als__DOT__if_id_ex_ex.pc;
    vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_signed 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->core_als__DOT__pcg_branch)) 
                                       & (IData)((3U 
                                                  == 
                                                  (0x607fU 
                                                   & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)))));
    vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_load 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_load));
    if (vlSelf->rst) {
        vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt = 0U;
        vlSymsp->TOP__core_als__DOT__if_m_wb_wb.aluresult = 0U;
    } else {
        vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt 
            = vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_opt;
        vlSymsp->TOP__core_als__DOT__if_m_wb_wb.aluresult 
            = vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult;
    }
    vlSelf->core_als__DOT__rwdata = ((IData)(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.mem_load)
                                      ? vlSymsp->TOP__core_als__DOT__if_m_wb_wb.mem_dat_i_w
                                      : ((IData)(vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wr)
                                          ? vlSymsp->TOP__core_als__DOT__if_m_wb_wb.aluresult
                                          : 0U));
    vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wr = 
        ((~ (IData)(vlSelf->rst)) & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wr));
    vlSelf->Data_out_WB = vlSelf->core_als__DOT__rwdata;
    vlSelf->MemRW_EX = vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_wr;
    if (vlSelf->rst) {
        vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wnum = 0U;
        vlSymsp->TOP__core_als__DOT__if_if_id_id.pc = 0U;
    } else {
        vlSymsp->TOP__core_als__DOT__if_m_wb_wb.reg_wnum 
            = vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum;
        vlSymsp->TOP__core_als__DOT__if_if_id_id.pc 
            = ((IData)(vlSelf->core_als__DOT__pcg_branch)
                ? 0xffffffffU : vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc);
    }
    vlSelf->PC_out_ID = vlSymsp->TOP__core_als__DOT__if_if_id_id.pc;
    vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_load 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->core_als__DOT__pcg_branch)) 
                                       & (3U == (0x7fU 
                                                 & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst))));
    if (vlSelf->rst) {
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_opt = 0U;
        vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult = 0U;
        vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum = 0U;
        vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc = 0U;
        vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum = 0U;
        vlSymsp->TOP__core_als__DOT__if_if_id_id.inst = 0U;
    } else {
        vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult 
            = vlSelf->core_als__DOT__ex_0__DOT__aluresult;
        vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum 
            = vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum;
        if (vlSelf->core_als__DOT__pcg_branch) {
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_opt = 0U;
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum = 0U;
            vlSymsp->TOP__core_als__DOT__if_if_id_id.inst = 0x13U;
        } else {
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_opt 
                = (((0x23U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)) 
                    | (3U == (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)))
                    ? ((0U == (3U & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                     >> 0xcU))) ? 1U
                        : ((1U == (3U & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                         >> 0xcU)))
                            ? 3U : ((2U == (3U & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                  >> 0xcU)))
                                     ? 7U : 0U))) : 0U);
            vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wnum 
                = (0x1fU & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                            >> 7U));
            vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                = vlSelf->inst_IF;
        }
        if (vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_en) {
            vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc 
                = vlSelf->core_als__DOT__ifx_0__DOT__pc_out;
        }
    }
    vlSelf->Addr_out = (((IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_load) 
                         | (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_wr))
                         ? vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult
                         : 0U);
    vlSelf->Data_out = ((3U == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt))
                         ? (0xffffU & vlSymsp->TOP__core_als__DOT__if_ex_m_m.rbdata)
                         : ((1U == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt))
                             ? (0xffU & vlSymsp->TOP__core_als__DOT__if_ex_m_m.rbdata)
                             : vlSymsp->TOP__core_als__DOT__if_ex_m_m.rbdata));
    if ((2U & vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult)) {
        if ((1U & vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult)) {
            vlSelf->Data_out = (vlSelf->Data_out << 0x18U);
            vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                = (vlSelf->Data_in >> 0x18U);
        } else {
            vlSelf->Data_out = (vlSelf->Data_out << 0x10U);
            vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                = (vlSelf->Data_in >> 0x10U);
        }
    } else if ((1U & vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult)) {
        vlSelf->Data_out = (vlSelf->Data_out << 8U);
        vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
            = (vlSelf->Data_in >> 8U);
    } else {
        vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
            = vlSelf->Data_in;
    }
    if (vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_signed) {
        if ((3U == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt))) {
            vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                = (vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                   | ((- (IData)((1U & (vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                                        >> 0xfU)))) 
                      << 0x10U));
        } else if ((1U == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_opt))) {
            vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                = (vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                   | ((- (IData)((1U & (vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target 
                                        >> 7U)))) << 8U));
        }
    }
    vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wr 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->core_als__DOT__pcg_branch)) 
                                       & (IData)(vlSelf->core_als__DOT__id_0__DOT__reg_wr)));
    vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0 
        = ((IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.mem_load) 
           & (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wr));
    vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_en = 
        (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_he27d2afb__0 
        = ((~ (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.mem_load)) 
           & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_wr));
    vlSelf->inst_ID = vlSymsp->TOP__core_als__DOT__if_if_id_id.inst;
    vlSelf->core_als__DOT__id_0__DOT__imm = ((0x40U 
                                              & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                              ? ((0x20U 
                                                  & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                    ? 
                                                   ((4U 
                                                     & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0xff000U 
                                                           & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst) 
                                                          | ((0x800U 
                                                              & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                   >> 0x14U)))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                    >> 0x1fU))) 
                                                        << 0xbU) 
                                                       | (0x7ffU 
                                                          & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                             >> 0x14U)))
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                   >> 7U)))))
                                                       : 0U)
                                                      : 0U))))
                                                  : 0U)
                                              : ((0x20U 
                                                  & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                    >> 0x1fU))) 
                                                        << 0xbU) 
                                                       | ((0x7e0U 
                                                           & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                >> 7U))))
                                                       : 0U)
                                                      : 0U))))
                                                  : 
                                                 ((0x10U 
                                                   & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                   ? 
                                                  ((8U 
                                                    & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                    >> 0x1fU))) 
                                                        << 0xbU) 
                                                       | (0x7ffU 
                                                          & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                             >> 0x14U)))
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                                    >> 0x1fU))) 
                                                        << 0xbU) 
                                                       | (0x7ffU 
                                                          & (vlSymsp->TOP__core_als__DOT__if_if_id_id.inst 
                                                             >> 0x14U)))
                                                       : 0U)
                                                      : 0U))))));
    __Vtableidx2 = (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst);
    vlSelf->core_als__DOT__id_0__DOT__alu_sela = Vhello__ConstPool__TABLE_h7af91f1a_0
        [__Vtableidx2];
    __Vtableidx3 = (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst);
    vlSelf->core_als__DOT__id_0__DOT__alu_selb = Vhello__ConstPool__TABLE_h0e6bfecf_0
        [__Vtableidx3];
    __Vtableidx4 = (0x7fU & vlSymsp->TOP__core_als__DOT__if_if_id_id.inst);
    vlSelf->core_als__DOT__id_0__DOT__reg_wr = Vhello__ConstPool__TABLE_h92587611_0
        [__Vtableidx4];
}

VL_INLINE_OPT void Vhello___024root___nba_comb__TOP__0(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->core_als__DOT__rbdata = vlSelf->core_als__DOT__gprfile_0__DOT__gprs
        [vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum];
    vlSelf->core_als__DOT__pcg_jalr_reg = (((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                                            & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum) 
                                               == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))
                                            ? vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target
                                            : ((IData)(vlSelf->core_als__DOT__ex_0__DOT__hangon_ra)
                                                ? vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult
                                                : vlSelf->core_als__DOT__gprfile_0__DOT__gprs
                                               [vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_anum]));
    vlSelf->core_als__DOT__ex_0__DOT__datab = ((2U 
                                                == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb))
                                                ? 4U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb))
                                                    ? vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_selb))
                                                     ? 
                                                    (((IData)(vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0) 
                                                      & ((IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.reg_bnum) 
                                                         == (IData)(vlSymsp->TOP__core_als__DOT__if_ex_m_m.reg_wnum)))
                                                      ? vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target
                                                      : 
                                                     ((IData)(vlSelf->core_als__DOT__ex_0__DOT__hangon_rb)
                                                       ? vlSymsp->TOP__core_als__DOT__if_ex_m_m.aluresult
                                                       : vlSelf->core_als__DOT__rbdata))
                                                     : 0U)));
    vlSelf->core_als__DOT__ex_0__DOT__dataa = ((1U 
                                                == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela))
                                                ? vlSymsp->TOP__core_als__DOT__if_id_ex_ex.pc
                                                : (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.alu_sela))
                                                     ? vlSelf->core_als__DOT__pcg_jalr_reg
                                                     : 0U)));
    if ((4U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
        if ((2U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
            if ((1U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
                vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                    = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                       & vlSelf->core_als__DOT__ex_0__DOT__datab);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__zero 
                    = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
            } else {
                vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                    = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                       | vlSelf->core_als__DOT__ex_0__DOT__datab);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
                vlSelf->core_als__DOT__ex_0__DOT__zero 
                    = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
            }
        } else if ((1U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
            if (vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUext) {
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((1U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? ((0x80000000U & vlSelf->core_als__DOT__ex_0__DOT__dataa) 
                           | (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                              >> 1U)) : vlSelf->core_als__DOT__ex_0__DOT__dataa);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((2U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? (((- (IData)((vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                        >> 0x1fU))) 
                            << 0x1eU) | (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                         >> 2U)) : vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((4U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? (((- (IData)((vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                        >> 0x1fU))) 
                            << 0x1cU) | (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                         >> 4U)) : vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((8U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? (((- (IData)((vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                        >> 0x1fU))) 
                            << 0x18U) | (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                         >> 8U)) : vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp);
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = ((0x10U & vlSelf->core_als__DOT__ex_0__DOT__datab)
                        ? (((- (IData)((vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                        >> 0x1fU))) 
                            << 0x10U) | (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                                         >> 0x10U))
                        : vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp);
            } else {
                vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp 
                    = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                       >> (0x1fU & vlSelf->core_als__DOT__ex_0__DOT__datab));
            }
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp;
            vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
        } else {
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                   ^ vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
        }
    } else if ((2U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
        if ((1U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse 
                = (~ vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry 
                = (1U & (IData)((1ULL & ((1ULL + ((QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__dataa)) 
                                                  + (QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse)))) 
                                         >> 0x20U))));
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                   == vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__less 
                = ((1U ^ (IData)(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry))
                    ? 1U : 0U);
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = vlSelf->core_als__DOT__ex_0__DOT__less;
        } else {
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse 
                = (~ vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry 
                = (1U & (IData)((1ULL & ((1ULL + ((QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__dataa)) 
                                                  + (QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse)))) 
                                         >> 0x20U))));
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                   == vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = ((IData)(1U) + (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                                  + vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse));
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of 
                = (((vlSelf->core_als__DOT__ex_0__DOT__dataa 
                     >> 0x1fU) == (vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse 
                                   >> 0x1fU)) & ((vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                                                  >> 0x1fU)));
            vlSelf->core_als__DOT__ex_0__DOT__less 
                = ((vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                    >> 0x1fU) ^ (IData)(vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of));
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = vlSelf->core_als__DOT__ex_0__DOT__less;
        }
    } else if ((1U & (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUctr))) {
        vlSelf->core_als__DOT__ex_0__DOT__aluresult 
            = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
               << (0x1fU & vlSelf->core_als__DOT__ex_0__DOT__datab));
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__zero = (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
    } else {
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = 0U;
        vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = 0U;
        if (vlSymsp->TOP__core_als__DOT__if_id_ex_ex.ALUext) {
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = ((IData)(1U) + (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                                  + (~ vlSelf->core_als__DOT__ex_0__DOT__datab)));
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry 
                = (1U & (IData)((1ULL & ((1ULL + ((QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__dataa)) 
                                                  + (QData)((IData)(
                                                                    (~ vlSelf->core_als__DOT__ex_0__DOT__datab))))) 
                                         >> 0x20U))));
            vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
        } else {
            vlSelf->core_als__DOT__ex_0__DOT__aluresult 
                = (vlSelf->core_als__DOT__ex_0__DOT__dataa 
                   + vlSelf->core_als__DOT__ex_0__DOT__datab);
            vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry 
                = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__dataa)) 
                                          + (QData)((IData)(vlSelf->core_als__DOT__ex_0__DOT__datab))) 
                                         >> 0x20U))));
            vlSelf->core_als__DOT__ex_0__DOT__less = 0U;
            vlSelf->core_als__DOT__ex_0__DOT__zero 
                = (1U & (~ (IData)((0U != vlSelf->core_als__DOT__ex_0__DOT__aluresult))));
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->core_als__DOT__ex_0__DOT__zero) 
                     << 4U) | (((IData)(vlSelf->core_als__DOT__ex_0__DOT__less) 
                                << 3U) | (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch)));
    vlSelf->core_als__DOT__pcg_branch = Vhello__ConstPool__TABLE_h249d9973_0
        [__Vtableidx1];
    vlSelf->core_als__DOT__ifx_0__DOT__pc_out = (((2U 
                                                   == (IData)(vlSymsp->TOP__core_als__DOT__if_id_ex_ex.branch))
                                                   ? vlSelf->core_als__DOT__pcg_jalr_reg
                                                   : vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc) 
                                                 + 
                                                 ((IData)(vlSelf->core_als__DOT__pcg_branch)
                                                   ? 
                                                  (vlSymsp->TOP__core_als__DOT__if_id_ex_ex.imm 
                                                   - (IData)(0xcU))
                                                   : 4U));
    vlSelf->PC_out_IF = ((IData)(vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_en)
                          ? vlSelf->core_als__DOT__ifx_0__DOT__pc_out
                          : 0U);
}
