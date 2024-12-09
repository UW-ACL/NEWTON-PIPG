//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo lf_emlrtRSI{
    144,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo mf_emlrtRSI{
    402,                  // lineNo
    "find_first_indices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

// Function Definitions
namespace coder {
int32_T eml_find(const emlrtStack &sp, const boolean_T x[10], int32_T i_data[])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T iv[2];
  int32_T i_size;
  int32_T ii;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &lf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  i_size = 0;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii < 10)) {
    if (x[ii]) {
      i_size++;
      i_data[i_size - 1] = ii + 1;
      if (i_size >= 10) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (i_size < 1) {
    i_size = 0;
  }
  iv[0] = 1;
  iv[1] = i_size;
  b_st.site = &mf_emlrtRSI;
  internal::indexShapeCheck(b_st, 10, iv);
  return i_size;
}

} // namespace coder

// End of code generation (find.cpp)
