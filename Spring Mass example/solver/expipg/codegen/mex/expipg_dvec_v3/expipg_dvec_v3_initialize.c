/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * expipg_dvec_v3_initialize.c
 *
 * Code generation for function 'expipg_dvec_v3_initialize'
 *
 */

/* Include files */
#include "expipg_dvec_v3_initialize.h"
#include "_coder_expipg_dvec_v3_mex.h"
#include "expipg_dvec_v3_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

/* Function Declarations */
static void expipg_dvec_v3_once(void);

/* Function Definitions */
static void expipg_dvec_v3_once(void)
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void expipg_dvec_v3_initialize(void)
{
  mexFunctionCreateRootTLS();
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, false, 0U, NULL);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    expipg_dvec_v3_once();
  }
}

/* End of code generation (expipg_dvec_v3_initialize.c) */
