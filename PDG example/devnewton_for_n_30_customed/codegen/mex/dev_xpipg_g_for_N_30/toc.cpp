//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// toc.cpp
//
// Code generation for function 'toc'
//

// Include files
#include "toc.h"
#include "dev_xpipg_g_for_N_30_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include "emlrt.h"

// Variable Definitions
static emlrtRSInfo xb_emlrtRSI{
    31,    // lineNo
    "toc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\timefun\\toc.m" // pathName
};

static emlrtRSInfo yb_emlrtRSI{
    36,    // lineNo
    "toc", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\timefun\\toc.m" // pathName
};

// Function Definitions
namespace coder {
real_T toc(const emlrtStack &sp, const emlrtTimespec &savedTime)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec tnow;
  real_T tstart_tv_nsec;
  real_T tstart_tv_sec;
  int32_T status;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &xb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  tstart_tv_sec =
      internal::b_time::impl::timeKeeper(st, savedTime, tstart_tv_nsec);
  st.site = &yb_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&tnow);
  d_st.site = &m_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &l_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv[0], 12, status);
  }
  return (tnow.tv_sec - tstart_tv_sec) +
         (tnow.tv_nsec - tstart_tv_nsec) / 1.0E+9;
}

} // namespace coder

// End of code generation (toc.cpp)
