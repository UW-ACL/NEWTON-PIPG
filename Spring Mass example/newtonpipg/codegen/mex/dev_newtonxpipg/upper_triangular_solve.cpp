//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// upper_triangular_solve.cpp
//
// Code generation for function 'upper_triangular_solve'
//

// Include files
#include "upper_triangular_solve.h"
#include "dev_newtonxpipg_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <cstring>

// Variable Definitions
static emlrtRTEInfo u_emlrtRTEI{
    7,                        // lineNo
    17,                       // colNo
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m" // pName
};

static emlrtBCInfo wd_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    8,                        // lineNo
    25,                       // colNo
    "B",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo xd_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    8,                        // lineNo
    15,                       // colNo
    "X",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    12,                       // lineNo
    25,                       // colNo
    "X",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo ae_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    12,                       // lineNo
    35,                       // colNo
    "U",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo be_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    12,                       // lineNo
    38,                       // colNo
    "U",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo ce_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    12,                       // lineNo
    15,                       // colNo
    "X",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo de_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    10,                       // lineNo
    29,                       // colNo
    "X",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    10,                       // lineNo
    39,                       // colNo
    "U",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    10,                       // lineNo
    42,                       // colNo
    "U",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo ge_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    10,                       // lineNo
    49,                       // colNo
    "X",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo he_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    10,                       // lineNo
    19,                       // colNo
    "X",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\upper_triangular_solve.m", // pName
    0                                              // checkKind
};

// Function Definitions
void upper_triangular_solve(const emlrtStack *sp, const real_T U_data[],
                            const int32_T U_size[2],
                            const coder::array<real_T, 1U> &B, real_T X_data[],
                            int32_T *X_size)
{
  int32_T loop_ub;
  int32_T n;
  n = U_size[0];
  *X_size = U_size[0];
  loop_ub = U_size[0];
  if (loop_ub - 1 >= 0) {
    std::memset(&X_data[0], 0, static_cast<uint32_T>(loop_ub) * sizeof(real_T));
  }
  loop_ub = U_size[0];
  emlrtForLoopVectorCheckR2021a(static_cast<real_T>(U_size[0]), -1.0, 1.0,
                                mxDOUBLE_CLASS, U_size[0], &u_emlrtRTEI,
                                (emlrtConstCTX)sp);
  for (int32_T i{0}; i < loop_ub; i++) {
    int32_T b_i;
    int32_T c_i;
    b_i = n - i;
    if ((b_i < 1) || (b_i > B.size(0))) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, B.size(0), &wd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > *X_size) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, *X_size, &xd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    X_data[b_i - 1] = B[b_i - 1];
    c_i = n - b_i;
    for (int32_T j{0}; j < c_i; j++) {
      int32_T b_j;
      b_j = (b_i + j) + 1;
      if (b_i > *X_size) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, *X_size, &de_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_i > U_size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, U_size[0], &ee_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_j > U_size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_j, 1, U_size[1], &fe_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_j > *X_size) {
        emlrtDynamicBoundsCheckR2012b(b_j, 1, *X_size, &ge_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_i > *X_size) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, *X_size, &he_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      X_data[b_i - 1] -=
          U_data[(b_i + U_size[0] * (b_j - 1)) - 1] * X_data[b_j - 1];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (b_i > *X_size) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, *X_size, &yd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > U_size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, U_size[0], &ae_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > U_size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, U_size[1], &be_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (b_i > *X_size) {
      emlrtDynamicBoundsCheckR2012b(b_i, 1, *X_size, &ce_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    X_data[b_i - 1] /= U_data[(b_i + U_size[0] * (b_i - 1)) - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (upper_triangular_solve.cpp)
