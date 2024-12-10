//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonxpipg_mexutil.cpp
//
// Code generation for function 'dev_newtonxpipg_mexutil'
//

// Include files
#include "dev_newtonxpipg_mexutil.h"
#include "rt_nonfinite.h"

// Function Definitions
void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, nullptr, 1, &pArray, "disp", true,
                        location);
}

// End of code generation (dev_newtonxpipg_mexutil.cpp)
