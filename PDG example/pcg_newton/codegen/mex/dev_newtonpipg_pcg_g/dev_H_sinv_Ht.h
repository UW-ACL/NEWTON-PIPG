/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_H_sinv_Ht.h
 *
 * Code generation for function 'dev_H_sinv_Ht'
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
void dev_H_sinv_Ht(const emlrtStack *sp, const real_T A[3190],
                   const emxArray_real_T *Q, const real_T proj_index_all[660],
                   real_T nx, real_T Y[5800]);

/* End of code generation (dev_H_sinv_Ht.h) */
