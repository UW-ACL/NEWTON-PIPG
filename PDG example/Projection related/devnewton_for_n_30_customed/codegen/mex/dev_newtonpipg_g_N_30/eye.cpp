//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eye.cpp
//
// Code generation for function 'eye'
//

// Include files
#include "eye.h"
#include "rt_nonfinite.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo
    ed_emlrtRSI{
        50,    // lineNo
        "eye", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" // pathName
    };

static emlrtRSInfo fd_emlrtRSI{
    21,                           // lineNo
    "checkAndSaturateExpandSize", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\checkAndSaturateExpandSize.m" // pathName
};

static emlrtRTEInfo v_emlrtRTEI{
    58,                   // lineNo
    23,                   // colNo
    "assertValidSizeArg", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" // pName
};

// Function Definitions
namespace coder {
void eye(const emlrtStack &sp, real_T varargin_1, real_T I_data[],
         int32_T I_size[2])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &ed_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &fd_emlrtRSI;
  if (varargin_1 != varargin_1) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &v_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  I_size[1] = static_cast<int32_T>(varargin_1);
  I_size[0] = static_cast<int32_T>(varargin_1);
  loop_ub = static_cast<int32_T>(varargin_1) * static_cast<int32_T>(varargin_1);
  if (loop_ub - 1 >= 0) {
    std::memset(&I_data[0], 0, static_cast<uint32_T>(loop_ub) * sizeof(real_T));
  }
  if (static_cast<int32_T>(varargin_1) > 0) {
    loop_ub = static_cast<uint8_T>(static_cast<int32_T>(varargin_1));
    for (int32_T k{0}; k < loop_ub; k++) {
      I_data[k + static_cast<int32_T>(varargin_1) * k] = 1.0;
    }
  }
}

} // namespace coder

// End of code generation (eye.cpp)
