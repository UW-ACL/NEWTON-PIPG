//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_pcg_initialize.cpp
//
// Code generation for function 'dev_newtonpipg_pcg_initialize'
//

// Include files
#include "dev_newtonpipg_pcg_initialize.h"
#include "_coder_dev_newtonpipg_pcg_mex.h"
#include "dev_newtonpipg_pcg_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Declarations
static void dev_newtonpipg_pcg_once();

// Function Definitions
static void dev_newtonpipg_pcg_once()
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void dev_newtonpipg_pcg_initialize()
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
    dev_newtonpipg_pcg_once();
  }
}

// End of code generation (dev_newtonpipg_pcg_initialize.cpp)
