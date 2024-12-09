//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// proj_D_unit_with_affinejacobian.h
//
// Code generation for function 'proj_D_unit_with_affinejacobian'
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
void binary_expand_op_9(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                        const coder::array<boolean_T, 1U> &in2,
                        const coder::array<boolean_T, 1U> &in3);

void d_proj_D_unit_with_affinejacobi(const emlrtStack &sp,
                                     const coder::array<real_T, 1U> &z0,
                                     const real_T proj_index[22],
                                     const real_T proj_coefficients[22],
                                     coder::array<real_T, 1U> &z,
                                     coder::array<real_T, 1U> &J_af);

void ge(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
        const coder::array<real_T, 1U> &in2,
        const coder::array<real_T, 1U> &in3);

void le(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
        const coder::array<real_T, 1U> &in2,
        const coder::array<real_T, 1U> &in3);

// End of code generation (proj_D_unit_with_affinejacobian.h)
