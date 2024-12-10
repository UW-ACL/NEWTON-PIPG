//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_pipg_mex.cpp
//
// Code generation for function '_coder_dev_pipg_mex'
//

// Include files
#include "_coder_dev_pipg_mex.h"
#include "_coder_dev_pipg_api.h"
#include "dev_pipg_data.h"
#include "dev_pipg_initialize.h"
#include "dev_pipg_terminate.h"
#include "dev_pipg_types.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void dev_pipg_mexFunction(dev_pipgStackData *SD, int32_T nlhs, mxArray *plhs[1],
                          int32_T nrhs, const mxArray *prhs[1])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        8, "dev_pipg");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "dev_pipg");
  }
  // Call the function.
  b_dev_pipg_api(SD, prhs[0], &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  dev_pipgStackData *dev_pipgStackDataGlobal{nullptr};
  dev_pipgStackDataGlobal =
      static_cast<dev_pipgStackData *>(new dev_pipgStackData);
  mexAtExit(&dev_pipg_atexit);
  // Module initialization.
  dev_pipg_initialize();
  try {
    // Dispatch the entry-point.
    dev_pipg_mexFunction(dev_pipgStackDataGlobal, nlhs, plhs, nrhs, prhs);
    // Module termination.
    dev_pipg_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete dev_pipgStackDataGlobal;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_dev_pipg_mex.cpp)
