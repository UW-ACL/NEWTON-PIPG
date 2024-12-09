//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_jacob_ball.h
//
// Code generation for function 'dev_jacob_ball'
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
void binary_expand_op_19(real_T in1_data[], int32_T in1_size[2],
                         const creal_T in2_data[], const int32_T in2_size[2],
                         const real_T in3_data[], const int32_T &in3_size);

int32_T binary_expand_op_22(creal_T in1_data[], const creal_T in3_data[],
                            const int32_T &in3_size, const creal_T in4_data[],
                            const int32_T &in4_size);

void dev_jacob_ball(const emlrtStack &sp, const real_T v_data[], int32_T v_size,
                    real_T R, const real_T P_data[], int32_T P_size,
                    real_T alpha, real_T Q_out_data[], int32_T Q_out_size[2],
                    real_T Q_inv_data[], int32_T Q_inv_size[2]);

int32_T times(creal_T in1_data[], const creal_T in2_data[],
              const int32_T &in2_size, const real_T in3_data[],
              const int32_T &in3_size);

// End of code generation (dev_jacob_ball.h)
