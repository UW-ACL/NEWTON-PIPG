/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_dev_newtonpipg_pcg_g_mex.c
 *
 * Code generation for function '_coder_dev_newtonpipg_pcg_g_mex'
 *
 */

/* Include files */
#include "_coder_dev_newtonpipg_pcg_g_mex.h"
#include "_coder_dev_newtonpipg_pcg_g_api.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_initialize.h"
#include "dev_newtonpipg_pcg_g_terminate.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void dev_newtonpipg_pcg_g_mexFunction(dev_newtonpipg_pcg_gStackData *SD,
                                      int32_T nlhs, mxArray *plhs[1],
                                      int32_T nrhs, const mxArray *prhs[20])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 20) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 20, 4,
                        20, "dev_newtonpipg_pcg_g");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "dev_newtonpipg_pcg_g");
  }
  /* Call the function. */
  dev_newtonpipg_pcg_g_api(SD, prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  dev_newtonpipg_pcg_gStackData *c_dev_newtonpipg_pcg_gStackData = NULL;
  c_dev_newtonpipg_pcg_gStackData =
      (dev_newtonpipg_pcg_gStackData *)emlrtMxCalloc(
          (size_t)1, (size_t)1U * sizeof(dev_newtonpipg_pcg_gStackData));
  mexAtExit(&dev_newtonpipg_pcg_g_atexit);
  /* Module initialization. */
  dev_newtonpipg_pcg_g_initialize();
  /* Dispatch the entry-point. */
  dev_newtonpipg_pcg_g_mexFunction(c_dev_newtonpipg_pcg_gStackData, nlhs, plhs,
                                   nrhs, prhs);
  /* Module termination. */
  dev_newtonpipg_pcg_g_terminate();
  emlrtMxFree(c_dev_newtonpipg_pcg_gStackData);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_dev_newtonpipg_pcg_g_mex.c) */
