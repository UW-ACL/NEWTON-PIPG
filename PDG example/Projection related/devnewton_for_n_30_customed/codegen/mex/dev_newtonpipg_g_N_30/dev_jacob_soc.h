//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_jacob_soc.h
//
// Code generation for function 'dev_jacob_soc'
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
void dev_jacob_soc(const emlrtStack &sp, const real_T v_data[], int32_T v_size,
                   real_T epsilon, const real_T P_data[], int32_T P_size,
                   real_T alpha, real_T Q_out_data[], int32_T Q_out_size[2],
                   real_T Q_inv_data[], int32_T Q_inv_size[2]);

// End of code generation (dev_jacob_soc.h)
