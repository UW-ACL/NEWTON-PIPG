//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_newtonpipg_g_with_timer_mex.cpp
//
// Code generation for function '_coder_dev_newtonpipg_g_with_timer_mex'
//

// Include files
#include "_coder_dev_newtonpipg_g_with_timer_mex.h"
#include "_coder_dev_newtonpipg_g_with_timer_api.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "dev_newtonpipg_g_with_timer_initialize.h"
#include "dev_newtonpipg_g_with_timer_terminate.h"
#include "dev_newtonpipg_g_with_timer_types.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void dev_newtonpipg_g_with_timer_mexFunction(
    c_dev_newtonpipg_g_with_timerSt *SD, int32_T nlhs, mxArray *plhs[1],
    int32_T nrhs, const mxArray *prhs[20])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 20) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 20, 4,
                        27, "dev_newtonpipg_g_with_timer");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "dev_newtonpipg_g_with_timer");
  }
  // Call the function.
  dev_newtonpipg_g_with_timer_api(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  c_dev_newtonpipg_g_with_timerSt *d_dev_newtonpipg_g_with_timerSt{nullptr};
  d_dev_newtonpipg_g_with_timerSt =
      static_cast<c_dev_newtonpipg_g_with_timerSt *>(
          new c_dev_newtonpipg_g_with_timerSt);
  mexAtExit(&dev_newtonpipg_g_with_timer_atexit);
  // Module initialization.
  dev_newtonpipg_g_with_timer_initialize();
  try { // Dispatch the entry-point.
    dev_newtonpipg_g_with_timer_mexFunction(d_dev_newtonpipg_g_with_timerSt,
                                            nlhs, plhs, nrhs, prhs);
    // Module termination.
    dev_newtonpipg_g_with_timer_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete d_dev_newtonpipg_g_with_timerSt;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_dev_newtonpipg_g_with_timer_mex.cpp)
