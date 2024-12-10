/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_expipg_dvec_v3_mex.c
 *
 * Code generation for function '_coder_expipg_dvec_v3_mex'
 *
 */

/* Include files */
#include "_coder_expipg_dvec_v3_mex.h"
#include "_coder_expipg_dvec_v3_api.h"
#include "expipg_dvec_v3_data.h"
#include "expipg_dvec_v3_initialize.h"
#include "expipg_dvec_v3_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&expipg_dvec_v3_atexit);
  /* Module initialization. */
  expipg_dvec_v3_initialize();
  /* Dispatch the entry-point. */
  unsafe_expipg_dvec_v3_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  expipg_dvec_v3_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void unsafe_expipg_dvec_v3_mexFunction(int32_T nlhs, mxArray *plhs[4],
                                       int32_T nrhs, const mxArray *prhs[33])
{
  const mxArray *outputs[4];
  int32_T i;
  /* Check for proper number of arguments. */
  if (nrhs != 33) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 33, 4, 14, "expipg_dvec_v3");
  }
  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "expipg_dvec_v3");
  }
  /* Call the function. */
  expipg_dvec_v3_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_expipg_dvec_v3_mex.c) */
