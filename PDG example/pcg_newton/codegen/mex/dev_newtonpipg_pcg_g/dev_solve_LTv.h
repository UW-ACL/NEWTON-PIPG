/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_solve_LTv.h
 *
 * Code generation for function 'dev_solve_LTv'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void dev_solve_LTv(const emlrtStack *sp, const real_T L[5800],
                   const real_T v[290], real_T X[290]);

/* End of code generation (dev_solve_LTv.h) */
