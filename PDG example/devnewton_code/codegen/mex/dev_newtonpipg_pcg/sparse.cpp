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
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo gb_emlrtRSI{
    302,            // lineNo
    "sparse/times", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    125,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    521,                // lineNo
    "allocEqsizeBinop", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo pb_emlrtRSI{
    194,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo qb_emlrtRSI{
    204,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo rb_emlrtRSI{
    206,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    18,      // lineNo
    "spfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\sparfun\\spfun.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    462,                // lineNo
    "sparse/spfunImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    465,                // lineNo
    "sparse/spfunImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo vb_emlrtRSI{
    468,                // lineNo
    "sparse/spfunImpl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    1482,                 // lineNo
    "sparse/spallocLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo yb_emlrtRSI{
    176,             // lineNo
    "sparse/sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo bc_emlrtRSI{
    14,              // lineNo
    "sparse/fillIn", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\fillIn.m" // pathName
};

static emlrtRSInfo cc_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" // pathName
};

static emlrtRSInfo dc_emlrtRSI{
    437,           // lineNo
    "scalarBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo ec_emlrtRSI{
    13,       // lineNo
    "sparse", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\sparfun\\sparse.m" // pathName
};

static emlrtRTEInfo f_emlrtRTEI{
    1632,              // lineNo
    31,                // colNo
    "assertValidSize", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo g_emlrtRTEI{
    1629,              // lineNo
    9,                 // colNo
    "assertValidSize", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo h_emlrtRTEI{
    178,             // lineNo
    39,              // colNo
    "sparse/sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    460,                // lineNo
    34,                 // colNo
    "sparse/spfunImpl", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    1498,     // lineNo
    38,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    1500,     // lineNo
    39,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    1501,     // lineNo
    39,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    203,     // lineNo
    9,       // colNo
    "binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    302,      // lineNo
    13,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    459,      // lineNo
    12,       // colNo
    "sparse", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pName
};

// Function Definitions
namespace coder {
void sparse::b_plus(const real_T a[496], real_T s[496]) const
{
  int32_T idx;
  idx = colidx[0];
  for (int32_T row{0}; row < 496; row++) {
    if ((idx < colidx[1]) && (row + 1 == rowidx[idx - 1])) {
      s[row] = a[row] + d[idx - 1];
      idx++;
    } else {
      s[row] = a[row];
    }
  }
}

void sparse::b_times(const emlrtStack *sp, const boolean_T a[496],
                     sparse *s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T numalloc;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &hb_emlrtRSI;
  numalloc = 0;
  for (idx = 0; idx < 496; idx++) {
    if (a[idx]) {
      numalloc++;
    }
  }
  if (numalloc <= -(colidx[colidx.size(0) - 1] + MIN_int32_T)) {
    numalloc = (numalloc + colidx[colidx.size(0) - 1]) - 1;
  } else {
    numalloc = MAX_int32_T;
  }
  numalloc = muIntScalarMin_sint32(numalloc, 496);
  if (numalloc < 1) {
    numalloc = 1;
  }
  c_st.site = &ib_emlrtRSI;
  s->d.set_size(&o_emlrtRTEI, &c_st, numalloc);
  s->rowidx.set_size(&p_emlrtRTEI, &c_st, numalloc);
  s->colidx.set_size(&q_emlrtRTEI, &c_st, 2);
  s->colidx[0] = 1;
  numalloc = 1;
  idx = colidx[0];
  for (int32_T row{0}; row < 496; row++) {
    real_T val;
    if ((idx < colidx[1]) && (row + 1 == rowidx[idx - 1])) {
      val = static_cast<real_T>(a[row]) * d[idx - 1];
      idx++;
    } else {
      val = 0.0;
    }
    if (val != 0.0) {
      s->d[numalloc - 1] = val;
      s->rowidx[numalloc - 1] = row + 1;
      numalloc++;
    }
  }
  s->colidx[1] = numalloc;
}

void sparse::minus(const real_T a[320], real_T s[320]) const
{
  int32_T idx;
  idx = colidx[0];
  for (int32_T row{0}; row < 320; row++) {
    if ((idx < colidx[1]) && (row + 1 == rowidx[idx - 1])) {
      s[row] = a[row] - d[idx - 1];
      idx++;
    } else {
      s[row] = a[row];
    }
  }
}

void sparse::plus(const real_T b[496], real_T s[496]) const
{
  int32_T idx;
  idx = colidx[0];
  for (int32_T row{0}; row < 496; row++) {
    if ((idx < colidx[1]) && (row + 1 == rowidx[idx - 1])) {
      s[row] = d[idx - 1] + b[row];
      idx++;
    } else {
      s[row] = b[row];
    }
  }
}

void sparse::times(const emlrtStack *sp, real_T b, sparse *s) const
{
  array<real_T, 2U> S;
  array<real_T, 1U> tmpd;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &gb_emlrtRSI;
  if (0.0 * b == 0.0) {
    int32_T currRowIdx;
    int32_T i;
    int32_T idx;
    int32_T numalloc;
    b_st.site = &pb_emlrtRSI;
    c_st.site = &sb_emlrtRSI;
    currRowIdx = colidx[colidx.size(0) - 1];
    if (colidx[colidx.size(0) - 1] - 1 < 1) {
      numalloc = 0;
    } else {
      numalloc = colidx[colidx.size(0) - 1] - 1;
    }
    tmpd.set_size(&t_emlrtRTEI, &c_st, numalloc);
    for (i = 0; i < numalloc; i++) {
      tmpd[i] = d[i] * b;
    }
    if (tmpd.size(0) != colidx[colidx.size(0) - 1] - 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &i_emlrtRTEI, "MATLAB:samelen",
                                    "MATLAB:samelen", 0);
    }
    d_st.site = &tb_emlrtRSI;
    e_st.site = &wb_emlrtRSI;
    f_st.site = &yb_emlrtRSI;
    if (colidx[colidx.size(0) - 1] - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&f_st, &g_emlrtRTEI,
                                    "Coder:toolbox:SparseNegativeSize",
                                    "Coder:toolbox:SparseNegativeSize", 0);
    }
    if (colidx[colidx.size(0) - 1] - 1 >= MAX_int32_T) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &f_emlrtRTEI, "Coder:toolbox:SparseMaxSize",
          "Coder:toolbox:SparseMaxSize", 2, 12, MAX_int32_T);
    }
    if (colidx[colidx.size(0) - 1] - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(&e_st, &h_emlrtRTEI,
                                    "Coder:toolbox:SparseNzmaxTooSmall",
                                    "Coder:toolbox:SparseNzmaxTooSmall", 0);
    }
    if (colidx[colidx.size(0) - 1] - 1 >= 1) {
      numalloc = colidx[colidx.size(0) - 1] - 2;
    } else {
      numalloc = 0;
    }
    s->d.set_size(&s_emlrtRTEI, &e_st, numalloc + 1);
    for (i = 0; i <= numalloc; i++) {
      s->d[i] = 0.0;
    }
    s->rowidx.set_size(&s_emlrtRTEI, &e_st, numalloc + 1);
    for (i = 0; i <= numalloc; i++) {
      s->rowidx[i] = 0;
    }
    if (colidx[colidx.size(0) - 1] - 1 < 1) {
      numalloc = 1;
    } else {
      numalloc = colidx[colidx.size(0) - 1];
    }
    for (i = 0; i <= numalloc - 2; i++) {
      s->rowidx[i] = rowidx[i];
    }
    s->colidx.set_size(&s_emlrtRTEI, &c_st, colidx.size(0));
    numalloc = colidx.size(0);
    for (i = 0; i < numalloc; i++) {
      s->colidx[i] = colidx[i];
    }
    d_st.site = &ub_emlrtRSI;
    if (colidx[colidx.size(0) - 1] - 1 > 2147483646) {
      e_st.site = &cc_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (int32_T k{0}; k <= currRowIdx - 2; k++) {
      s->d[k] = tmpd[k];
    }
    d_st.site = &vb_emlrtRSI;
    idx = 1;
    i = colidx.size(0);
    e_st.site = &bc_emlrtRSI;
    for (int32_T k{0}; k <= i - 2; k++) {
      numalloc = s->colidx[k];
      s->colidx[k] = idx;
      while (numalloc < s->colidx[k + 1]) {
        real_T val;
        currRowIdx = s->rowidx[numalloc - 1];
        val = s->d[numalloc - 1];
        numalloc++;
        if (val != 0.0) {
          s->d[idx - 1] = val;
          s->rowidx[idx - 1] = currRowIdx;
          idx++;
        }
      }
    }
    s->colidx[s->colidx.size(0) - 1] = idx;
  } else {
    int32_T i;
    int32_T numalloc;
    S.set_size(&r_emlrtRTEI, &st, 496, 1);
    for (i = 0; i < 496; i++) {
      S[i] = rtNaN;
    }
    b_st.site = &qb_emlrtRSI;
    c_st.site = &dc_emlrtRSI;
    i = colidx[0];
    numalloc = colidx[1] - 1;
    for (int32_T idx{i}; idx <= numalloc; idx++) {
      S[rowidx[idx - 1] - 1] = d[idx - 1] * b;
    }
    b_st.site = &rb_emlrtRSI;
    c_st.site = &ec_emlrtRSI;
    numalloc = 0;
    for (int32_T k{0}; k < 496; k++) {
      if (S[k] != 0.0) {
        numalloc++;
      }
    }
    numalloc = muIntScalarMax_sint32(numalloc, 1);
    s->d.set_size(&s_emlrtRTEI, &c_st, numalloc);
    for (i = 0; i < numalloc; i++) {
      s->d[i] = 0.0;
    }
    s->colidx.set_size(&s_emlrtRTEI, &c_st, 2);
    s->colidx[0] = 1;
    s->rowidx.set_size(&s_emlrtRTEI, &c_st, numalloc);
    for (i = 0; i < numalloc; i++) {
      s->rowidx[i] = 0;
    }
    s->rowidx[0] = 1;
    numalloc = 0;
    for (int32_T currRowIdx{0}; currRowIdx < 496; currRowIdx++) {
      real_T val;
      val = S[currRowIdx];
      if (val != 0.0) {
        s->rowidx[numalloc] = currRowIdx + 1;
        s->d[numalloc] = val;
        numalloc++;
      }
    }
    s->colidx[1] = numalloc + 1;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void sparse::times(const emlrtStack *sp, const real_T b[496], sparse *s) const
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T numalloc;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &hb_emlrtRSI;
  numalloc = -1;
  for (idx = 0; idx < 496; idx++) {
    if (b[idx] != 0.0) {
      numalloc++;
    }
  }
  if (colidx[colidx.size(0) - 1] - 1 <= 2147483646 - numalloc) {
    numalloc += colidx[colidx.size(0) - 1];
  } else {
    numalloc = MAX_int32_T;
  }
  numalloc = muIntScalarMin_sint32(numalloc, 496);
  if (numalloc < 1) {
    numalloc = 1;
  }
  c_st.site = &ib_emlrtRSI;
  s->d.set_size(&o_emlrtRTEI, &c_st, numalloc);
  s->rowidx.set_size(&p_emlrtRTEI, &c_st, numalloc);
  s->colidx.set_size(&q_emlrtRTEI, &c_st, 2);
  s->colidx[0] = 1;
  numalloc = 1;
  idx = colidx[0];
  for (int32_T row{0}; row < 496; row++) {
    real_T val;
    if ((idx < colidx[1]) && (row + 1 == rowidx[idx - 1])) {
      val = d[idx - 1] * b[row];
      idx++;
    } else {
      val = 0.0 * b[row];
    }
    if (val != 0.0) {
      s->d[numalloc - 1] = val;
      s->rowidx[numalloc - 1] = row + 1;
      numalloc++;
    }
  }
  s->colidx[1] = numalloc;
}

} // namespace coder

// End of code generation (sparse.cpp)
