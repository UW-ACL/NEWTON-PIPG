/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "abs.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void b_abs(const real_T x[1600], real_T y[1600])
{
  int32_T i;
  for (i = 0; i < 1600; i++) {
    y[i] = muDoubleScalarAbs(x[i]);
  }
}

/* End of code generation (abs.c) */
