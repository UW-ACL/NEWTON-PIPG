//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonzpipg_separatedinput_initialize.cpp
//
// Code generation for function 'dev_newtonzpipg_separatedinput_initialize'
//

// Include files
#include "dev_newtonzpipg_separatedinput_initialize.h"
#include "_coder_dev_newtonzpipg_separatedinput_mex.h"
#include "dev_newtonzpipg_separatedinput_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Declarations
static void d_dev_newtonzpipg_separatedinpu();

// Function Definitions
static void d_dev_newtonzpipg_separatedinpu()
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void dev_newtonzpipg_separatedinput_initialize()
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
    d_dev_newtonzpipg_separatedinpu();
  }
}

// End of code generation (dev_newtonzpipg_separatedinput_initialize.cpp)
