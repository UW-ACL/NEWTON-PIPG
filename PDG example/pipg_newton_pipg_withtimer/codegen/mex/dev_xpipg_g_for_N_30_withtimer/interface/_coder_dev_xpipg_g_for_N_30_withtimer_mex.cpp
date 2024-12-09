//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_xpipg_g_for_N_30_withtimer_mex.cpp
//
// Code generation for function '_coder_dev_xpipg_g_for_N_30_withtimer_mex'
//

// Include files
#include "_coder_dev_xpipg_g_for_N_30_withtimer_mex.h"
#include "_coder_dev_xpipg_g_for_N_30_withtimer_api.h"
#include "dev_xpipg_g_for_N_30_withtimer_data.h"
#include "dev_xpipg_g_for_N_30_withtimer_initialize.h"
#include "dev_xpipg_g_for_N_30_withtimer_terminate.h"
#include "dev_xpipg_g_for_N_30_withtimer_types.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void dev_xpipg_g_for_N_30_withtimer_mexFunction(
    d_dev_xpipg_g_for_N_30_withtime *SD, int32_T nlhs, mxArray *plhs[1],
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
                        30, "dev_xpipg_g_for_N_30_withtimer");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 30,
                        "dev_xpipg_g_for_N_30_withtimer");
  }
  // Call the function.
  f_dev_xpipg_g_for_N_30_withtime(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  d_dev_xpipg_g_for_N_30_withtime *g_dev_xpipg_g_for_N_30_withtime{nullptr};
  g_dev_xpipg_g_for_N_30_withtime =
      static_cast<d_dev_xpipg_g_for_N_30_withtime *>(
          new d_dev_xpipg_g_for_N_30_withtime);
  mexAtExit(&dev_xpipg_g_for_N_30_withtimer_atexit);
  // Module initialization.
  dev_xpipg_g_for_N_30_withtimer_initialize();
  try { // Dispatch the entry-point.
    dev_xpipg_g_for_N_30_withtimer_mexFunction(g_dev_xpipg_g_for_N_30_withtime,
                                               nlhs, plhs, nrhs, prhs);
    // Module termination.
    dev_xpipg_g_for_N_30_withtimer_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete g_dev_xpipg_g_for_N_30_withtime;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_dev_xpipg_g_for_N_30_withtimer_mex.cpp)
