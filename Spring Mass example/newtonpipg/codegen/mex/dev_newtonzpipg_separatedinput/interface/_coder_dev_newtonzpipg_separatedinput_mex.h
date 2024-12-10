//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_newtonzpipg_separatedinput_mex.h
//
// Code generation for function '_coder_dev_newtonzpipg_separatedinput_mex'
//

#pragma once

// Include files
#include "dev_newtonzpipg_separatedinput_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void dev_newtonzpipg_separatedinput_mexFunction(
    c_dev_newtonzpipg_separatedinpu *SD, int32_T nlhs, mxArray *plhs[1],
    int32_T nrhs, const mxArray *prhs[17]);

MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

// End of code generation (_coder_dev_newtonzpipg_separatedinput_mex.h)
