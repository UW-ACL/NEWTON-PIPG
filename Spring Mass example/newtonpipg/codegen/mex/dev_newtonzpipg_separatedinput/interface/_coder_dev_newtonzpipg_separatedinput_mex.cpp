//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_newtonzpipg_separatedinput_mex.cpp
//
// Code generation for function '_coder_dev_newtonzpipg_separatedinput_mex'
//

// Include files
#include "_coder_dev_newtonzpipg_separatedinput_mex.h"
#include "_coder_dev_newtonzpipg_separatedinput_api.h"
#include "dev_newtonzpipg_separatedinput_data.h"
#include "dev_newtonzpipg_separatedinput_initialize.h"
#include "dev_newtonzpipg_separatedinput_terminate.h"
#include "dev_newtonzpipg_separatedinput_types.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void dev_newtonzpipg_separatedinput_mexFunction(
    c_dev_newtonzpipg_separatedinpu *SD, int32_T nlhs, mxArray *plhs[1],
    int32_T nrhs, const mxArray *prhs[17])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 17) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 17, 4,
                        30, "dev_newtonzpipg_separatedinput");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 30,
                        "dev_newtonzpipg_separatedinput");
  }
  // Call the function.
  e_dev_newtonzpipg_separatedinpu(SD, prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  c_dev_newtonzpipg_separatedinpu *f_dev_newtonzpipg_separatedinpu{nullptr};
  f_dev_newtonzpipg_separatedinpu =
      static_cast<c_dev_newtonzpipg_separatedinpu *>(
          new c_dev_newtonzpipg_separatedinpu);
  mexAtExit(&dev_newtonzpipg_separatedinput_atexit);
  // Module initialization.
  dev_newtonzpipg_separatedinput_initialize();
  try {
    // Dispatch the entry-point.
    dev_newtonzpipg_separatedinput_mexFunction(f_dev_newtonzpipg_separatedinpu,
                                               nlhs, plhs, nrhs, prhs);
    // Module termination.
    dev_newtonzpipg_separatedinput_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
  delete f_dev_newtonzpipg_separatedinpu;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_dev_newtonzpipg_separatedinput_mex.cpp)
