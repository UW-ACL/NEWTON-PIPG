//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_newtonxpipg_mex.cpp
//
// Code generation for function '_coder_dev_newtonxpipg_mex'
//

// Include files
#include "_coder_dev_newtonxpipg_mex.h"
#include "_coder_dev_newtonxpipg_api.h"
#include "dev_newtonxpipg_data.h"
#include "dev_newtonxpipg_initialize.h"
#include "dev_newtonxpipg_terminate.h"
#include "dev_newtonxpipg_types.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void dev_newtonxpipg_mexFunction(dev_newtonxpipgStackData *SD, int32_T nlhs,
                                 mxArray *plhs[1], int32_T nrhs,
                                 const mxArray *prhs[1])
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
                        15, "dev_newtonxpipg");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "dev_newtonxpipg");
  }
  // Call the function.
  b_dev_newtonxpipg_api(SD, prhs[0], &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  dev_newtonxpipgStackData *dev_newtonxpipgStackDataGlobal{nullptr};
  dev_newtonxpipgStackDataGlobal =
      static_cast<dev_newtonxpipgStackData *>(new dev_newtonxpipgStackData);
  mexAtExit(&dev_newtonxpipg_atexit);
  // Module initialization.
  dev_newtonxpipg_initialize();
  try {
    // Dispatch the entry-point.
    dev_newtonxpipg_mexFunction(dev_newtonxpipgStackDataGlobal, nlhs, plhs,
                                nrhs, prhs);
    // Module termination.
    dev_newtonxpipg_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete dev_newtonxpipgStackDataGlobal;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_dev_newtonxpipg_mex.cpp)
