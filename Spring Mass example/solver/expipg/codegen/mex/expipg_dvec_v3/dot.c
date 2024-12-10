/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dot.c
 *
 * Code generation for function 'dot'
 *
 */

/* Include files */
#include "dot.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T b_dot(const real_T a[8], const real_T b[8])
{
  real_T c;
  int32_T k;
  c = 0.0;
  for (k = 0; k < 8; k++) {
    c += a[k] * b[k];
  }
  return c;
}

real_T dot(const real_T a[16], const real_T b[16])
{
  real_T c;
  int32_T k;
  c = 0.0;
  for (k = 0; k < 16; k++) {
    c += a[k] * b[k];
  }
  return c;
}

/* End of code generation (dot.c) */
