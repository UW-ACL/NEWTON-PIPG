//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_pipg_initialize.cpp
//
// Code generation for function 'dev_pipg_initialize'
//

// Include files
#include "dev_pipg_initialize.h"
#include "_coder_dev_pipg_mex.h"
#include "dev_pipg_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Declarations
static void dev_pipg_once();

// Function Definitions
static void dev_pipg_once()
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void dev_pipg_initialize()
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
    dev_pipg_once();
  }
}

// End of code generation (dev_pipg_initialize.cpp)
