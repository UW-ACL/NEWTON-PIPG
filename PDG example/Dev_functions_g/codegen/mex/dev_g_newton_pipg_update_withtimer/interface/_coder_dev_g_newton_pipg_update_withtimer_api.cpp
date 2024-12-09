//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_g_newton_pipg_update_withtimer_api.cpp
//
// Code generation for function '_coder_dev_g_newton_pipg_update_withtimer_api'
//

// Include files
#include "_coder_dev_g_newton_pipg_update_withtimer_api.h"
#include "dev_g_newton_pipg_update_withtimer.h"
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "dev_g_newton_pipg_update_withtimer_mexutil.h"
#include "rt_nonfinite.h"

// Function Declarations
static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[3190];

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3190];

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[326];

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[326];

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[660];

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[660];

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[290];

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[290];

static const mxArray *emlrt_marshallOut(const real_T u[616]);

static real_T (*f_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[616];

static real_T (*f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[616];

static real_T (*h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3190];

static real_T (*i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[326];

static real_T (*j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[660];

static real_T (*k_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[290];

static real_T (*l_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[616];

// Function Definitions
static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[3190]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3190];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3190]
{
  real_T(*y)[3190];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[326]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[326];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[326]
{
  real_T(*y)[326];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[660]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[660];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[660]
{
  real_T(*y)[660];
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[290]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[290];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[290]
{
  real_T(*y)[290];
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[616])
{
  static const int32_T i{0};
  static const int32_T i1{616};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &i1, 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[616]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[616];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[616]
{
  real_T(*y)[616];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3190]
{
  static const int32_T dims[3]{10, 11, 29};
  real_T(*ret)[3190];
  int32_T iv[3];
  boolean_T bv[3]{false, false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 3U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[3190])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[326]
{
  static const int32_T dims{326};
  real_T(*ret)[326];
  int32_T i;
  boolean_T b{false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[326])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[660]
{
  static const int32_T dims[3]{2, 11, 30};
  real_T(*ret)[660];
  int32_T iv[3];
  boolean_T bv[3]{false, false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 3U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (real_T(*)[660])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*k_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[290]
{
  static const int32_T dims{290};
  real_T(*ret)[290];
  int32_T i;
  boolean_T b{false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[290])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*l_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[616]
{
  static const int32_T dims{616};
  real_T(*ret)[616];
  int32_T i;
  boolean_T b{false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret = (real_T(*)[616])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void d_dev_g_newton_pipg_update_with(const mxArray *const prhs[14],
                                     const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *prhs_copy_idx_9;
  real_T(*A)[3190];
  real_T(*proj_coefficient_all)[660];
  real_T(*proj_index_all)[660];
  real_T(*R)[616];
  real_T(*dzw)[616];
  real_T(*P)[326];
  real_T(*temp_prime)[326];
  real_T(*diag_J_k_p)[290];
  real_T alpha;
  real_T beta;
  real_T delta_Y;
  real_T ne;
  real_T nu;
  real_T nx;
  real_T rho;
  st.tls = emlrtRootTLSGlobal;
  dzw = (real_T(*)[616])mxMalloc(sizeof(real_T[616]));
  prhs_copy_idx_9 = emlrtProtectR2012b(prhs[9], 9, false, -1);
  // Marshall function inputs
  A = b_emlrt_marshallIn(st, emlrtAlias(prhs[0]), "A");
  P = c_emlrt_marshallIn(st, emlrtAlias(prhs[1]), "P");
  nx = emlrt_marshallIn(st, emlrtAliasP(prhs[2]), "nx");
  nu = emlrt_marshallIn(st, emlrtAliasP(prhs[3]), "nu");
  ne = emlrt_marshallIn(st, emlrtAliasP(prhs[4]), "ne");
  proj_index_all =
      d_emlrt_marshallIn(st, emlrtAlias(prhs[5]), "proj_index_all");
  proj_coefficient_all =
      d_emlrt_marshallIn(st, emlrtAlias(prhs[6]), "proj_coefficient_all");
  diag_J_k_p = e_emlrt_marshallIn(st, emlrtAlias(prhs[7]), "diag_J_k_p");
  temp_prime = c_emlrt_marshallIn(st, emlrtAlias(prhs[8]), "temp_prime");
  R = f_emlrt_marshallIn(st, emlrtAlias(prhs_copy_idx_9), "R");
  alpha = emlrt_marshallIn(st, emlrtAliasP(prhs[10]), "alpha");
  beta = emlrt_marshallIn(st, emlrtAliasP(prhs[11]), "beta");
  rho = emlrt_marshallIn(st, emlrtAliasP(prhs[12]), "rho");
  delta_Y = emlrt_marshallIn(st, emlrtAliasP(prhs[13]), "delta_Y");
  // Invoke the target function
  dev_g_newton_pipg_update_withtimer(
      &st, *A, *P, nx, nu, ne, *proj_index_all, *proj_coefficient_all,
      *diag_J_k_p, *temp_prime, *R, alpha, beta, rho, delta_Y, *dzw);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(*dzw);
}

// End of code generation (_coder_dev_g_newton_pipg_update_withtimer_api.cpp)
