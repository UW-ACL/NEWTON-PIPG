/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * expipg_dvec_v3_terminate.c
 *
 * Code generation for function 'expipg_dvec_v3_terminate'
 *
 */

/* Include files */
#include "expipg_dvec_v3_terminate.h"
#include "_coder_expipg_dvec_v3_mex.h"
#include "expipg_dvec_v3_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void expipg_dvec_v3_atexit(void)
{
  mexFunctionCreateRootTLS();
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void expipg_dvec_v3_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (expipg_dvec_v3_terminate.c) */
