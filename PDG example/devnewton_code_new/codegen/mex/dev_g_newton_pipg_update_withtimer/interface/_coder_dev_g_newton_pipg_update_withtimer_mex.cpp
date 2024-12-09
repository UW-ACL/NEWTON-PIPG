//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_g_newton_pipg_update_withtimer_mex.cpp
//
// Code generation for function '_coder_dev_g_newton_pipg_update_withtimer_mex'
//

// Include files
#include "_coder_dev_g_newton_pipg_update_withtimer_mex.h"
#include "_coder_dev_g_newton_pipg_update_withtimer_api.h"
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "dev_g_newton_pipg_update_withtimer_initialize.h"
#include "dev_g_newton_pipg_update_withtimer_terminate.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void dev_g_newton_pipg_update_withtimer_mexFunction(int32_T nlhs,
                                                    mxArray *plhs[1],
                                                    int32_T nrhs,
                                                    const mxArray *prhs[14])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 14) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 14, 4,
                        34, "dev_g_newton_pipg_update_withtimer");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 34,
                        "dev_g_newton_pipg_update_withtimer");
  }
  // Call the function.
  d_dev_g_newton_pipg_update_with(prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&dev_g_newton_pipg_update_withtimer_atexit);
  // Module initialization.
  dev_g_newton_pipg_update_withtimer_initialize();
  try { // Dispatch the entry-point.
    dev_g_newton_pipg_update_withtimer_mexFunction(nlhs, plhs, nrhs, prhs);
    // Module termination.
    dev_g_newton_pipg_update_withtimer_terminate();
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

// End of code generation (_coder_dev_g_newton_pipg_update_withtimer_mex.cpp)
