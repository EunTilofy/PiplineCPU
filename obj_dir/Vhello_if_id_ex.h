// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello.h for the primary calling header

#ifndef VERILATED_VHELLO_IF_ID_EX_H_
#define VERILATED_VHELLO_IF_ID_EX_H_  // guard

#include "verilated.h"


class Vhello__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_if_id_ex final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mem_load;
    CData/*0:0*/ reg_wr;
    CData/*0:0*/ mem_wr;
    CData/*2:0*/ mem_opt;
    CData/*0:0*/ mem_signed;
    CData/*4:0*/ reg_anum;
    CData/*4:0*/ reg_bnum;
    CData/*4:0*/ reg_wnum;
    CData/*1:0*/ alu_sela;
    CData/*1:0*/ alu_selb;
    CData/*2:0*/ ALUctr;
    CData/*0:0*/ ALUext;
    CData/*2:0*/ branch;
    IData/*31:0*/ imm;
    IData/*31:0*/ pc;

    // INTERNAL VARIABLES
    Vhello__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhello_if_id_ex(Vhello__Syms* symsp, const char* v__name);
    ~Vhello_if_id_ex();
    VL_UNCOPYABLE(Vhello_if_id_ex);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vhello_if_id_ex* obj);

#endif  // guard
