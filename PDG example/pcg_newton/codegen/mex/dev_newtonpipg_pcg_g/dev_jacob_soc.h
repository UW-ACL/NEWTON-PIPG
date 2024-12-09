/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_jacob_soc.h
 *
 * Code generation for function 'dev_jacob_soc'
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
void dev_jacob_soc(const emlrtStack *sp, const emxArray_real_T *v,
                   real_T epsilon, const emxArray_real_T *P, real_T alpha,
                   emxArray_real_T *Q_out, emxArray_real_T *Q_inv);

/* End of code generation (dev_jacob_soc.h) */
