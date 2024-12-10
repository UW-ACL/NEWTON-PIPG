//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonxpipg_terminate.cpp
//
// Code generation for function 'dev_newtonxpipg_terminate'
//

// Include files
#include "dev_newtonxpipg_terminate.h"
#include "_coder_dev_newtonxpipg_mex.h"
#include "dev_newtonxpipg_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void dev_newtonxpipg_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void dev_newtonxpipg_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (dev_newtonxpipg_terminate.cpp)
