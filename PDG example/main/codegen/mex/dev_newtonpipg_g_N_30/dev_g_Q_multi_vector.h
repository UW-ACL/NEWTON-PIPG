//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_Q_multi_vector.h
//
// Code generation for function 'dev_g_Q_multi_vector'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
int32_T Q_v_unit(const emlrtStack &sp, const real_T v_data[], int32_T v_size,
                 const real_T Q_u_data[], const int32_T Q_u_size[2],
                 const real_T proj_index[22], real_T v_out_data[]);

int32_T b_Q_v_unit(const emlrtStack &sp, const real_T v_data[], int32_T v_size,
                   const real_T Q_u_data[], const int32_T Q_u_size[2],
                   const real_T proj_index[22], real_T v_out_data[]);

// End of code generation (dev_g_Q_multi_vector.h)
