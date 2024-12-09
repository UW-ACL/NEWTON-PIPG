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
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
int32_T binary_expand_op_9(real_T in1_data[], const boolean_T in2_data[],
                           const int32_T &in2_size, const boolean_T in3_data[],
                           const int32_T &in3_size);

int32_T proj_D_unit_with_affinejacobian(const emlrtStack &sp,
                                        const real_T z0_data[], int32_T z0_size,
                                        const real_T proj_index[22],
                                        const real_T proj_coefficients[22],
                                        real_T z_data[], real_T J_af_data[],
                                        int32_T &J_af_size);

// End of code generation (proj_D_unit_with_affinejacobian.h)
