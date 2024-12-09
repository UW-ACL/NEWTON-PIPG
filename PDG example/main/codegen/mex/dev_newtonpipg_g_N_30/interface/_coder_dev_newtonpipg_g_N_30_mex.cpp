//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_newtonpipg_g_N_30_mex.cpp
//
// Code generation for function '_coder_dev_newtonpipg_g_N_30_mex'
//

// Include files
#include "_coder_dev_newtonpipg_g_N_30_mex.h"
#include "_coder_dev_newtonpipg_g_N_30_api.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "dev_newtonpipg_g_N_30_initialize.h"
#include "dev_newtonpipg_g_N_30_terminate.h"
#include "dev_newtonpipg_g_N_30_types.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void dev_newtonpipg_g_N_30_mexFunction(dev_newtonpipg_g_N_30StackData *SD,
                                       int32_T nlhs, mxArray *plhs[1],
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
                        21, "dev_newtonpipg_g_N_30");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "dev_newtonpipg_g_N_30");
  }
  // Call the function.
  dev_newtonpipg_g_N_30_api(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  dev_newtonpipg_g_N_30StackData *c_dev_newtonpipg_g_N_30StackDat{nullptr};
  c_dev_newtonpipg_g_N_30StackDat =
      static_cast<dev_newtonpipg_g_N_30StackData *>(
          new dev_newtonpipg_g_N_30StackData);
  mexAtExit(&dev_newtonpipg_g_N_30_atexit);
  // Module initialization.
  dev_newtonpipg_g_N_30_initialize();
  try { // Dispatch the entry-point.
    dev_newtonpipg_g_N_30_mexFunction(c_dev_newtonpipg_g_N_30StackDat, nlhs,
                                      plhs, nrhs, prhs);
    // Module termination.
    dev_newtonpipg_g_N_30_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete c_dev_newtonpipg_g_N_30StackDat;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_dev_newtonpipg_g_N_30_mex.cpp)
