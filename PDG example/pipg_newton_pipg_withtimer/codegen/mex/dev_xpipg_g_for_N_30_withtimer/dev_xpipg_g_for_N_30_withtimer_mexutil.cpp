//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_xpipg_g_for_N_30_withtimer_mexutil.cpp
//
// Code generation for function 'dev_xpipg_g_for_N_30_withtimer_mexutil'
//

// Include files
#include "dev_xpipg_g_for_N_30_withtimer_mexutil.h"
#include "rt_nonfinite.h"

// Function Definitions
real_T c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

real_T emlrt_marshallIn(const emlrtStack &sp,
                        const mxArray *a__output_of_feval_,
                        const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

// End of code generation (dev_xpipg_g_for_N_30_withtimer_mexutil.cpp)
