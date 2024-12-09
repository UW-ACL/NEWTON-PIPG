/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eigSkewHermitianStandard.h
 *
 * Code generation for function 'eigSkewHermitianStandard'
 *
 */

#pragma once

/* Include files */
#include "dev_newtonpipg_pcg_g_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void eigSkewHermitianStandard(const emlrtStack *sp, const emxArray_real_T *A,
                              emxArray_creal_T *V, emxArray_creal_T *D);

/* End of code generation (eigSkewHermitianStandard.h) */
