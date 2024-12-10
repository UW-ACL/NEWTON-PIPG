//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonzpipg_separatedinput_terminate.cpp
//
// Code generation for function 'dev_newtonzpipg_separatedinput_terminate'
//

// Include files
#include "dev_newtonzpipg_separatedinput_terminate.h"
#include "_coder_dev_newtonzpipg_separatedinput_mex.h"
#include "dev_newtonzpipg_separatedinput_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void dev_newtonzpipg_separatedinput_atexit()
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

void dev_newtonzpipg_separatedinput_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (dev_newtonzpipg_separatedinput_terminate.cpp)
