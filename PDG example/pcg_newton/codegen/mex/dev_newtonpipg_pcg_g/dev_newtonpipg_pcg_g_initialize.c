/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_newtonpipg_pcg_g_initialize.c
 *
 * Code generation for function 'dev_newtonpipg_pcg_g_initialize'
 *
 */

/* Include files */
#include "dev_newtonpipg_pcg_g_initialize.h"
#include "_coder_dev_newtonpipg_pcg_g_mex.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

/* Function Declarations */
static void dev_newtonpipg_pcg_g_once(void);

/* Function Definitions */
static void dev_newtonpipg_pcg_g_once(void)
{
  mex_InitInfAndNan();
  timeKeeper_init();
}

void dev_newtonpipg_pcg_g_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    dev_newtonpipg_pcg_g_once();
  }
}

/* End of code generation (dev_newtonpipg_pcg_g_initialize.c) */
