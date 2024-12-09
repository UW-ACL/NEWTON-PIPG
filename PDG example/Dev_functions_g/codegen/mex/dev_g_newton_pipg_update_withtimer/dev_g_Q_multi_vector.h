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
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void Q_v_unit(const emlrtStack &sp, const coder::array<real_T, 1U> &v,
              const coder::array<real_T, 2U> &Q, const real_T proj_index[22],
              coder::array<real_T, 1U> &v_out);

void b_Q_v_unit(const emlrtStack &sp, const coder::array<real_T, 1U> &v,
                const coder::array<real_T, 2U> &Q, const real_T proj_index[22],
                coder::array<real_T, 1U> &v_out);

void dev_g_Q_multi_vector(const emlrtStack &sp,
                          const coder::array<real_T, 3U> &Q,
                          const coder::array<real_T, 1U> &v,
                          const real_T proj_index_all[660], real_T nx,
                          real_T nu, coder::array<real_T, 1U> &out);

// End of code generation (dev_g_Q_multi_vector.h)
