//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_xpipg_g_for_N_30_mex.cpp
//
// Code generation for function '_coder_dev_xpipg_g_for_N_30_mex'
//

// Include files
#include "_coder_dev_xpipg_g_for_N_30_mex.h"
#include "_coder_dev_xpipg_g_for_N_30_api.h"
#include "dev_xpipg_g_for_N_30_data.h"
#include "dev_xpipg_g_for_N_30_initialize.h"
#include "dev_xpipg_g_for_N_30_terminate.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void dev_xpipg_g_for_N_30_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                      int32_T nrhs, const mxArray *prhs[18])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 18) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 18, 4,
                        20, "dev_xpipg_g_for_N_30");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "dev_xpipg_g_for_N_30");
  }
  // Call the function.
  dev_xpipg_g_for_N_30_api(prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&dev_xpipg_g_for_N_30_atexit);
  // Module initialization.
  dev_xpipg_g_for_N_30_initialize();
  try { // Dispatch the entry-point.
    dev_xpipg_g_for_N_30_mexFunction(nlhs, plhs, nrhs, prhs);
    // Module termination.
    dev_xpipg_g_for_N_30_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_dev_xpipg_g_for_N_30_mex.cpp)
