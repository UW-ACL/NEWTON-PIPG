//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_multiply_symmetric.cpp
//
// Code generation for function 'dev_multiply_symmetric'
//

// Include files
#include "dev_multiply_symmetric.h"
#include "dev_newtonzpipg_separatedinput_data.h"
#include "rt_nonfinite.h"
#include <cstring>

// Function Definitions
void dev_multiply_symmetric(const emlrtStack *sp, const real_T A[128],
                            const real_T B[128], real_T C[256])
{
  //  Get the size of the matrices
  //  Initialize the resulting matrix C
  std::memset(&C[0], 0, 256U * sizeof(real_T));
  //  Calculate the product A * B, leveraging its symmetric property
  for (int32_T i{0}; i < 16; i++) {
    for (int32_T j{0}; j <= i; j++) {
      real_T d;
      int32_T b_i;
      b_i = i + (j << 4);
      d = C[b_i];
      for (int32_T k{0}; k < 8; k++) {
        d += A[i + (k << 4)] * B[k + (j << 3)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      C[b_i] = d;
      //  Use the computed value for the symmetric element
      C[j + (i << 4)] = C[b_i];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (dev_multiply_symmetric.cpp)
