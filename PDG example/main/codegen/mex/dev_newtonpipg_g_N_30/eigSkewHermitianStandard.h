//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eigSkewHermitianStandard.h
//
// Code generation for function 'eigSkewHermitianStandard'
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
namespace coder {
void eigSkewHermitianStandard(const emlrtStack &sp, const real_T A_data[],
                              const int32_T A_size[2], creal_T V_data[],
                              int32_T V_size[2], creal_T D_data[],
                              int32_T D_size[2]);

}

// End of code generation (eigSkewHermitianStandard.h)
