// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "verilated.h"

#include "Vhello__Syms.h"
#include "Vhello___024root.h"

VL_ATTR_COLD void Vhello___024root___eval_static(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vhello___024root___eval_initial(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vhello___024root___eval_final(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vhello___024root___eval_triggers__stl(Vhello___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello___024root___dump_triggers__stl(Vhello___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vhello___024root___eval_stl(Vhello___024root* vlSelf);

VL_ATTR_COLD void Vhello___024root___eval_settle(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vhello___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vhello___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("src/code/core_als.sv", 19, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vhello___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello___024root___dump_triggers__stl(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhello___024root___stl_sequent__TOP__0(Vhello___024root* vlSelf);

VL_ATTR_COLD void Vhello___024root___eval_stl(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vhello___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello___024root___dump_triggers__ico(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello___024root___dump_triggers__act(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello___024root___dump_triggers__nba(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhello___024root___ctor_var_reset(Vhello___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->MemRW_Mem = VL_RAND_RESET_I(1);
    vlSelf->MemRW_EX = VL_RAND_RESET_I(1);
    vlSelf->inst_IF = VL_RAND_RESET_I(32);
    vlSelf->inst_ID = VL_RAND_RESET_I(32);
    vlSelf->Data_in = VL_RAND_RESET_I(32);
    vlSelf->Addr_out = VL_RAND_RESET_I(32);
    vlSelf->PC_out_IF = VL_RAND_RESET_I(32);
    vlSelf->PC_out_ID = VL_RAND_RESET_I(32);
    vlSelf->PC_out_EX = VL_RAND_RESET_I(32);
    vlSelf->Data_out = VL_RAND_RESET_I(32);
    vlSelf->Data_out_WB = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__pcg_branch = VL_RAND_RESET_I(1);
    vlSelf->core_als__DOT__pcg_jalr_reg = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__rbdata = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__rwdata = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__ex_0__DOT__hangon_ra = VL_RAND_RESET_I(1);
    vlSelf->core_als__DOT__ex_0__DOT__hangon_rb = VL_RAND_RESET_I(1);
    vlSelf->core_als__DOT__ex_0__DOT__aluresult = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__ex_0__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->core_als__DOT__ex_0__DOT__less = VL_RAND_RESET_I(1);
    vlSelf->core_als__DOT__ex_0__DOT__dataa = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__ex_0__DOT__datab = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__reverse = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->core_als__DOT__ex_0__DOT__alu_0__DOT__of = VL_RAND_RESET_I(1);
    vlSelf->core_als__DOT__id_0__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__id_0__DOT__alu_sela = VL_RAND_RESET_I(2);
    vlSelf->core_als__DOT__id_0__DOT__alu_selb = VL_RAND_RESET_I(2);
    vlSelf->core_als__DOT__id_0__DOT__reg_wr = VL_RAND_RESET_I(1);
    vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_en = VL_RAND_RESET_I(1);
    vlSelf->core_als__DOT__ifx_0__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core_als__DOT__gprfile_0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core_als__DOT__gprfile_0__DOT__gprs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_he27d2afb__0 = 0;
    vlSelf->core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
