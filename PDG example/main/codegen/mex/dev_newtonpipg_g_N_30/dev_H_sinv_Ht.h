//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_H_sinv_Ht.h
//
// Code generation for function 'dev_H_sinv_Ht'
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
void dev_H_sinv_Ht(const emlrtStack &sp, const real_T A[3190],
                   const real_T Q_data[], const int32_T Q_size[3],
                   const real_T proj_index_all[660], real_T nx, real_T Y[5800]);

// End of code generation (dev_H_sinv_Ht.h)
