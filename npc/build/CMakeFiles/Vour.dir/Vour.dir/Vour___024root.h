// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vour.h for the primary calling header

#ifndef VERILATED_VOUR___024ROOT_H_
#define VERILATED_VOUR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vour__Syms;

class Vour___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);
    CData/*0:0*/ our__DOT____Vtogcov__a;
    CData/*0:0*/ our__DOT____Vtogcov__b;
    CData/*0:0*/ our__DOT____Vtogcov__f;

    // INTERNAL VARIABLES
    Vour__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vour___024root(Vour__Syms* symsp, const char* name);
    ~Vour___024root();
    VL_UNCOPYABLE(Vour___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
