// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello.h for the primary calling header

#ifndef VERILATED_VHELLO___024ROOT_H_
#define VERILATED_VHELLO___024ROOT_H_  // guard

#include "verilated.h"
class Vhello_if_ex_m;
class Vhello_if_id_ex;
class Vhello_if_if_id;
class Vhello_if_m_wb;


class Vhello__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello___024root final : public VerilatedModule {
  public:
    // CELLS
    Vhello_if_m_wb* __PVT__core_als__DOT__if_m_wb_m;
    Vhello_if_m_wb* __PVT__core_als__DOT__if_m_wb_wb;
    Vhello_if_ex_m* __PVT__core_als__DOT__if_ex_m_ex;
    Vhello_if_ex_m* __PVT__core_als__DOT__if_ex_m_m;
    Vhello_if_id_ex* __PVT__core_als__DOT__if_id_ex_id;
    Vhello_if_id_ex* __PVT__core_als__DOT__if_id_ex_ex;
    Vhello_if_if_id* __PVT__core_als__DOT__if_if_id_if;
    Vhello_if_if_id* __PVT__core_als__DOT__if_if_id_id;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(MemRW_Mem,0,0);
    VL_OUT8(MemRW_EX,0,0);
    CData/*0:0*/ core_als__DOT__pcg_branch;
    CData/*0:0*/ core_als__DOT__ex_0__DOT__hangon_ra;
    CData/*0:0*/ core_als__DOT__ex_0__DOT__hangon_rb;
    CData/*0:0*/ core_als__DOT__ex_0__DOT__zero;
    CData/*0:0*/ core_als__DOT__ex_0__DOT__less;
    CData/*0:0*/ core_als__DOT__ex_0__DOT__alu_0__DOT__carry;
    CData/*0:0*/ core_als__DOT__ex_0__DOT__alu_0__DOT__of;
    CData/*1:0*/ core_als__DOT__id_0__DOT__alu_sela;
    CData/*1:0*/ core_als__DOT__id_0__DOT__alu_selb;
    CData/*0:0*/ core_als__DOT__id_0__DOT__reg_wr;
    CData/*0:0*/ core_als__DOT__ifx_0__DOT__pc_reg_en;
    CData/*0:0*/ core_als__DOT__bypasser_0__DOT____VdfgTmp_he27d2afb__0;
    CData/*0:0*/ core_als__DOT__bypasser_0__DOT____VdfgTmp_h86285c8d__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst_IF,31,0);
    VL_OUT(inst_ID,31,0);
    VL_IN(Data_in,31,0);
    VL_OUT(Addr_out,31,0);
    VL_OUT(PC_out_IF,31,0);
    VL_OUT(PC_out_ID,31,0);
    VL_OUT(PC_out_EX,31,0);
    VL_OUT(Data_out,31,0);
    VL_OUT(Data_out_WB,31,0);
    IData/*31:0*/ core_als__DOT__pcg_jalr_reg;
    IData/*31:0*/ core_als__DOT__rbdata;
    IData/*31:0*/ core_als__DOT__rwdata;
    IData/*31:0*/ core_als__DOT__m_0__DOT____Vcellout__load_sext_0__target;
    IData/*31:0*/ core_als__DOT__ex_0__DOT__aluresult;
    IData/*31:0*/ core_als__DOT__ex_0__DOT__dataa;
    IData/*31:0*/ core_als__DOT__ex_0__DOT__datab;
    IData/*31:0*/ core_als__DOT__ex_0__DOT__alu_0__DOT__reverse;
    IData/*31:0*/ core_als__DOT__ex_0__DOT__alu_0__DOT__temp;
    IData/*31:0*/ core_als__DOT__id_0__DOT__imm;
    IData/*31:0*/ core_als__DOT__ifx_0__DOT__pc_out;
    IData/*31:0*/ core_als__DOT__ifx_0__DOT__pc_reg_0__DOT__pc;
    IData/*31:0*/ core_als__DOT__gprfile_0__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> core_als__DOT__gprfile_0__DOT__gprs;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhello__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhello___024root(Vhello__Syms* symsp, const char* v__name);
    ~Vhello___024root();
    VL_UNCOPYABLE(Vhello___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
