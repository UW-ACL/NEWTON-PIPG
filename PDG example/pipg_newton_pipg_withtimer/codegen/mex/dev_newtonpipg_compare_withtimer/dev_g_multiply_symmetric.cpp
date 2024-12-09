//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_multiply_symmetric.cpp
//
// Code generation for function 'dev_g_multiply_symmetric'
//

// Include files
#include "dev_g_multiply_symmetric.h"
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "rt_nonfinite.h"
#include <cstring>

// Variable Definitions
static emlrtBCInfo ye_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    32,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo af_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    29,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo bf_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    42,                         // colNo
    "A",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo cf_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    39,                         // colNo
    "A",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo df_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    52,                         // colNo
    "B",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo ef_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    49,                         // colNo
    "B",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo ff_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    22,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo gf_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    19,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo hf_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    15,                         // lineNo
    28,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo if_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    15,                         // lineNo
    25,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo jf_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    15,                         // lineNo
    18,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo kf_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    15,                         // lineNo
    15,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

// Function Definitions
void dev_g_multiply_symmetric(const emlrtStack &sp, const real_T A_data[],
                              const int32_T A_size[2], const real_T B_data[],
                              const int32_T B_size[2], real_T C_data[],
                              int32_T C_size[2])
{
  int32_T i;
  int32_T loop_ub;
  //  Get the size of the matrices
  //  Initialize the resulting matrix C
  i = A_size[0];
  C_size[1] = A_size[0];
  C_size[0] = A_size[0];
  loop_ub = A_size[0] * A_size[0];
  if (loop_ub - 1 >= 0) {
    std::memset(&C_data[0], 0, static_cast<uint32_T>(loop_ub) * sizeof(real_T));
  }
  //  Calculate the product A * B, leveraging its symmetric property
  for (int32_T b_i{0}; b_i < i; b_i++) {
    loop_ub = A_size[1];
    for (int32_T j{0}; j <= b_i; j++) {
      for (int32_T k{0}; k < loop_ub; k++) {
        int32_T C_data_tmp;
        if (j + 1 > C_size[1]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, C_size[1], &ye_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > C_size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C_size[0], &af_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (k + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub, &bf_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > i) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &cf_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (j + 1 > B_size[1]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, B_size[1], &df_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (k + 1 > B_size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, B_size[0], &ef_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (j + 1 > C_size[1]) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, C_size[1], &ff_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_i + 1 > C_size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C_size[0], &gf_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        C_data_tmp = j + C_size[1] * b_i;
        C_data[C_data_tmp] +=
            A_data[k + A_size[1] * b_i] * B_data[j + B_size[1] * k];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      //  Use the computed value for the symmetric element
      if (j + 1 > C_size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, C_size[1], &hf_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > C_size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C_size[0], &if_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (b_i + 1 > C_size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C_size[1], &jf_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      if (j + 1 > C_size[0]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, C_size[0], &kf_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      C_data[b_i + C_size[1] * j] = C_data[j + C_size[1] * b_i];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (dev_g_multiply_symmetric.cpp)
