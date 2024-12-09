//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_pcg_terminate.cpp
//
// Code generation for function 'dev_newtonpipg_pcg_terminate'
//

// Include files
#include "dev_newtonpipg_pcg_terminate.h"
#include "_coder_dev_newtonpipg_pcg_mex.h"
#include "dev_newtonpipg_pcg_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void dev_newtonpipg_pcg_atexit()
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

void dev_newtonpipg_pcg_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (dev_newtonpipg_pcg_terminate.cpp)
