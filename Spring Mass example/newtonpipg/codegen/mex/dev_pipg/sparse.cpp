//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sparse.cpp
//
// Code generation for function 'sparse'
//

// Include files
#include "sparse.h"
#include "dev_pipg_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo ib_emlrtRSI{
    292,           // lineNo
    "sparse/plus", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    161,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    411,                     // lineNo
    "sparseFullEqsizeBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    297,            // lineNo
    "sparse/minus", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRTEInfo j_emlrtRTEI{
    59,             // lineNo
    27,             // colNo
    "sparse/binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pName
};

static emlrtRTEInfo ub_emlrtRTEI{
    125,     // lineNo
    5,       // colNo
    "binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pName
};

// Function Definitions
namespace coder {
void sparse::b_minus(const emlrtStack *sp, const ::coder::array<real_T, 1U> &a,
                     ::coder::array<real_T, 1U> &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T fullRowIncrement;
  int32_T idx;
  int32_T idxInc;
  int32_T y;
  boolean_T x[2];
  boolean_T b_y;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if ((a.size(0) != 1) && (m != 1) && (a.size(0) != m)) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  y = a.size(0);
  y = muIntScalarMax_sint32(y, m);
  s.set_size(&ub_emlrtRTEI, &st, y);
  for (idxInc = 0; idxInc < y; idxInc++) {
    s[idxInc] = 0.0;
  }
  b_st.site = &jb_emlrtRSI;
  x[0] = (m == a.size(0));
  x[1] = true;
  b_y = true;
  idxInc = 0;
  exitg1 = false;
  while ((!exitg1) && (idxInc < 2)) {
    if (!x[idxInc]) {
      b_y = false;
      exitg1 = true;
    } else {
      idxInc++;
    }
  }
  if (b_y) {
    idxInc = 1;
    fullRowIncrement = 1;
  } else {
    idxInc = (m != 1);
    fullRowIncrement = (a.size(0) != 1);
  }
  idx = colidx[0];
  c_st.site = &kb_emlrtRSI;
  if (y > 2147483646) {
    d_st.site = &w_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (int32_T row{0}; row < y; row++) {
    if ((idx < colidx[1]) && ((row + 1 == rowidx[idx - 1]) || (idxInc == 0))) {
      s[row] = a[row * fullRowIncrement] - d[idx - 1];
      idx += idxInc;
    } else {
      s[row] = a[row * fullRowIncrement];
    }
  }
}

void sparse::b_plus(const emlrtStack *sp, const ::coder::array<real_T, 1U> &a,
                    ::coder::array<real_T, 1U> &s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T fullRowIncrement;
  int32_T idx;
  int32_T idxInc;
  int32_T y;
  boolean_T x[2];
  boolean_T b_y;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ib_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if ((a.size(0) != 1) && (m != 1) && (a.size(0) != m)) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  y = a.size(0);
  y = muIntScalarMax_sint32(y, m);
  s.set_size(&ub_emlrtRTEI, &st, y);
  for (idxInc = 0; idxInc < y; idxInc++) {
    s[idxInc] = 0.0;
  }
  b_st.site = &jb_emlrtRSI;
  x[0] = (m == a.size(0));
  x[1] = true;
  b_y = true;
  idxInc = 0;
  exitg1 = false;
  while ((!exitg1) && (idxInc < 2)) {
    if (!x[idxInc]) {
      b_y = false;
      exitg1 = true;
    } else {
      idxInc++;
    }
  }
  if (b_y) {
    idxInc = 1;
    fullRowIncrement = 1;
  } else {
    idxInc = (m != 1);
    fullRowIncrement = (a.size(0) != 1);
  }
  idx = colidx[0];
  c_st.site = &kb_emlrtRSI;
  if (y > 2147483646) {
    d_st.site = &w_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (int32_T row{0}; row < y; row++) {
    if ((idx < colidx[1]) && ((row + 1 == rowidx[idx - 1]) || (idxInc == 0))) {
      s[row] = a[row * fullRowIncrement] + d[idx - 1];
      idx += idxInc;
    } else {
      s[row] = a[row * fullRowIncrement];
    }
  }
}

} // namespace coder

// End of code generation (sparse.cpp)
