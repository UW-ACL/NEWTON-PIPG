/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_newtonpipg_pcg_g_terminate.c
 *
 * Code generation for function 'dev_newtonpipg_pcg_g_terminate'
 *
 */

/* Include files */
#include "dev_newtonpipg_pcg_g_terminate.h"
#include "_coder_dev_newtonpipg_pcg_g_mex.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void emlrtExitTimeCleanupDtorFcn(const void *r);

/* Function Definitions */
static void emlrtExitTimeCleanupDtorFcn(const void *r)
{
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void dev_newtonpipg_pcg_g_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtPushHeapReferenceStackR2021a(
      &st, false, NULL, (void *)&emlrtExitTimeCleanupDtorFcn, NULL, NULL, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void dev_newtonpipg_pcg_g_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (dev_newtonpipg_pcg_g_terminate.c) */
