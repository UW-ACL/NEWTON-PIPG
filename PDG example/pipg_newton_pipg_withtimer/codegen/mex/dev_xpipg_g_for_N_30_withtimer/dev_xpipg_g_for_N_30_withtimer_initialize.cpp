//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_xpipg_g_for_N_30_withtimer_initialize.cpp
//
// Code generation for function 'dev_xpipg_g_for_N_30_withtimer_initialize'
//

// Include files
#include "dev_xpipg_g_for_N_30_withtimer_initialize.h"
#include "_coder_dev_xpipg_g_for_N_30_withtimer_mex.h"
#include "dev_xpipg_g_for_N_30_withtimer_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Declarations
static void e_dev_xpipg_g_for_N_30_withtime();

// Function Definitions
static void e_dev_xpipg_g_for_N_30_withtime()
{
  mex_InitInfAndNan();
  timeKeeper_init();
}

void dev_xpipg_g_for_N_30_withtimer_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    e_dev_xpipg_g_for_N_30_withtime();
  }
}

// End of code generation (dev_xpipg_g_for_N_30_withtimer_initialize.cpp)
