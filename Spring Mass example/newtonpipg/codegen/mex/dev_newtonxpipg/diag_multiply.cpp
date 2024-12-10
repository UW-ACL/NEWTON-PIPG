//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// diag_multiply.cpp
//
// Code generation for function 'diag_multiply'
//

// Include files
#include "diag_multiply.h"
#include "dev_newtonxpipg_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo qc_emlrtRSI{
    30,              // lineNo
    "diag_multiply", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\diag_multiply.m" // pathName
};

static emlrtMCInfo c_emlrtMCI{
    27,      // lineNo
    5,       // colNo
    "error", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\lang\\error.m" // pName
};

static emlrtBCInfo cc_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    36,              // lineNo
    29,              // colNo
    "A",             // aName
    "diag_multiply", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\diag_multiply.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo dc_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    36,              // lineNo
    32,              // colNo
    "A",             // aName
    "diag_multiply", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\diag_multiply.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    36,              // lineNo
    39,              // colNo
    "P",             // aName
    "diag_multiply", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\diag_multiply.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    36,              // lineNo
    19,              // colNo
    "C",             // aName
    "diag_multiply", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\diag_multiply.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    36,              // lineNo
    22,              // colNo
    "C",             // aName
    "diag_multiply", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\diag_multiply.m", // pName
    0                                     // checkKind
};

static emlrtRSInfo od_emlrtRSI{
    27,      // lineNo
    "error", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\lang\\error.m" // pathName
};

// Function Declarations
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location);

// Function Definitions
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, nullptr, 1, &pArray, "error",
                        true, location);
}

void diag_multiply(const emlrtStack *sp, const coder::array<real_T, 2U> &P,
                   const real_T A_data[], const int32_T A_size[2],
                   real_T C_data[], int32_T C_size[2])
{
  static const int32_T iv[2]{1, 77};
  static const char_T varargin_1[77]{
      'T', 'h', 'e', ' ', 'd', 'i', 'a', 'g', 'o', 'n', 'a', 'l', ' ',
      'm', 'a', 't', 'r', 'i', 'x', ' ', 'a', 'n', 'd', ' ', 'A', ' ',
      'm', 'u', 's', 't', ' ', 'h', 'a', 'v', 'e', ' ', 'c', 'o', 'm',
      'p', 'a', 't', 'i', 'b', 'l', 'e', ' ', 'd', 'i', 'm', 'e', 'n',
      's', 'i', 'o', 'n', 's', ' ', 'f', 'o', 'r', ' ', 'm', 'u', 'l',
      't', 'i', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', '.'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  //  Get the size of the matrices
  //  Set default value for axis if missing
  //  Initialize the resulting matrix C
  C_size[0] = A_size[0];
  C_size[1] = A_size[1];
  //  Calculate the product based on the value of axis
  //  Check if P and A are compatible for multiplication
  if (P.size(1) != A_size[1]) {
    st.site = &qc_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 77, m, &varargin_1[0]);
    emlrtAssign(&y, m);
    b_st.site = &od_emlrtRSI;
    b_error(&b_st, y, &c_emlrtMCI);
  }
  //  Calculate the product of the matrix A and the diagonal matrix P
  i = A_size[0];
  for (int32_T b_i{0}; b_i < i; b_i++) {
    int32_T i1;
    i1 = A_size[1];
    for (int32_T j{0}; j < i1; j++) {
      if (b_i + 1 > A_size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, A_size[0], &cc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j + 1 > A_size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, A_size[1], &dc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j + 1 > P.size(1)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, P.size(1), &ec_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_i + 1 > C_size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C_size[0], &fc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j + 1 > C_size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, C_size[1], &gc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      C_data[b_i + C_size[0] * j] = A_data[b_i + A_size[0] * j] * P[j];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (diag_multiply.cpp)
