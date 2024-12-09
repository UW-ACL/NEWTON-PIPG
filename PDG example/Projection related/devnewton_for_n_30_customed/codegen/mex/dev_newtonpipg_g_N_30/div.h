//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// div.h
//
// Code generation for function 'div'
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
void binary_expand_op_15(real_T in1_data[], int32_T &in1_size,
                         const real_T in2_data[], const int32_T &in2_size);

void binary_expand_op_21(creal_T in1_data[], int32_T &in1_size,
                         const creal_T in3_data[], const int32_T &in3_size);

void rdivide(creal_T in1_data[], int32_T &in1_size, const creal_T in2_data[],
             const int32_T &in2_size);

void rdivide(real_T in1_data[], int32_T &in1_size, const real_T in2_data[],
             const int32_T &in2_size);

// End of code generation (div.h)
