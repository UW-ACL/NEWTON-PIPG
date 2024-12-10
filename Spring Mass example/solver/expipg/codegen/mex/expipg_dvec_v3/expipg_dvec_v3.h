/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * expipg_dvec_v3.h
 *
 * Code generation for function 'expipg_dvec_v3'
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
void expipg_dvec_v3(real_T x1[1616], real_T u1[800], real_T w1[1600],
                    real_T x2[1616], real_T u2[800], real_T w2[1600],
                    real_T x3[1616], real_T u3[800], real_T w3[1600],
                    real_T err_p1, real_T err_d1, real_T err_d2, real_T lam,
                    real_T omg, real_T rho, real_T k_test, real_T k_max,
                    real_T *exit_flag, real_T eps_feas, real_T eps_infeas,
                    real_T N, const real_T Q[256], const real_T R[64],
                    const real_T A[256], const real_T AT[256],
                    const real_T B[128], const real_T BT[128],
                    const real_T x_0[16], const real_T x_N[16], real_T x_min,
                    real_T x_max, real_T u_min, real_T u_max);

/* End of code generation (expipg_dvec_v3.h) */
