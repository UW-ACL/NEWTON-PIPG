//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_newtonxpipg_mex.h
//
// Code generation for function '_coder_dev_newtonxpipg_mex'
//

#pragma once

// Include files
#include "dev_newtonxpipg_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void dev_newtonxpipg_mexFunction(dev_newtonxpipgStackData *SD, int32_T nlhs,
                                 mxArray *plhs[1], int32_T nrhs,
                                 const mxArray *prhs[1]);

MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

// End of code generation (_coder_dev_newtonxpipg_mex.h)
