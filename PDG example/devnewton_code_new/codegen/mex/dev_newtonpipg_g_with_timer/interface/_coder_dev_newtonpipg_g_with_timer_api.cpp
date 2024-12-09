//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_newtonpipg_g_with_timer_api.cpp
//
// Code generation for function '_coder_dev_newtonpipg_g_with_timer_api'
//

// Include files
#include "_coder_dev_newtonpipg_g_with_timer_api.h"
#include "dev_newtonpipg_g_with_timer.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "dev_newtonpipg_g_with_timer_mexutil.h"
#include "dev_newtonpipg_g_with_timer_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Declarations
static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[326];

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[326];

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[3190];

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3190];

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[290];

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[290];

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[660];

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[660];

static const mxArray *emlrt_marshallOut(const struct1_T &u);

static struct0_T f_emlrt_marshallIn(const emlrtStack &sp,
                                    const mxArray *b_nullptr,
                                    const char_T *identifier);

static struct0_T f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static boolean_T g_emlrt_marshallIn(const emlrtStack &sp,
                                    const mxArray *b_nullptr,
                                    const char_T *identifier);

static boolean_T g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static real_T (*i_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[326];

static real_T (*j_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[3190];

static real_T (*k_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[290];

static real_T (*l_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                   const emlrtMsgIdentifier *msgId))[660];

static boolean_T m_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

// Function Definitions
static real_T (*b_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[326]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[326];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[326]
{
  real_T(*y)[326];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[3190]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[3190];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[3190]
{
  real_T(*y)[3190];
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[290]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[290];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[290]
{
  real_T(*y)[290];
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp,
                                   const mxArray *b_nullptr,
                                   const char_T *identifier))[660]
{
  emlrtMsgIdentifier thisId;
  real_T(*y)[660];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                   const emlrtMsgIdentifier *parentId))[660]
{
  real_T(*y)[660];
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const struct1_T &u)
{
  static const char_T *sv[6]{"converge",   "xi",    "eta",
                             "solve_time", "ntime", "k"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T i;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 6, (const char_T **)&sv[0]));
  b_y = nullptr;
  m = emlrtCreateLogicalScalar(u.converge);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "converge", b_y, 0);
  c_y = nullptr;
  m = emlrtCreateNumericArray(1, ((coder::array<real_T, 1U> *)&u.xi)->size(),
                              mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.xi.size(0); b_i++) {
    pData[i] = u.xi[b_i];
    i++;
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "xi", c_y, 1);
  d_y = nullptr;
  m = emlrtCreateNumericArray(1, ((coder::array<real_T, 1U> *)&u.eta)->size(),
                              mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u.eta.size(0); b_i++) {
    pData[i] = u.eta[b_i];
    i++;
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "eta", d_y, 2);
  e_y = nullptr;
  m = emlrtCreateDoubleScalar(u.solve_time);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "solve_time", e_y, 3);
  f_y = nullptr;
  m = emlrtCreateDoubleScalar(u.ntime);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "ntime", f_y, 4);
  g_y = nullptr;
  m = emlrtCreateDoubleScalar(u.k);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "k", g_y, 5);
  return y;
}

static struct0_T f_emlrt_marshallIn(const emlrtStack &sp,
                                    const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static struct0_T f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[7]{"newtonratio",      "newtonactive",
                                     "linesearch_step",  "linsearch_amount",
                                     "newtonwaitlinear", "newtonwaitexp",
                                     "newtonwait_factor"};
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)&sp, parentId, u, 7,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "newtonratio";
  y.newtonratio =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0,
                                                      0, "newtonratio")),
                       &thisId);
  thisId.fIdentifier = "newtonactive";
  y.newtonactive =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0,
                                                      1, "newtonactive")),
                       &thisId);
  thisId.fIdentifier = "linesearch_step";
  y.linesearch_step =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0,
                                                      2, "linesearch_step")),
                       &thisId);
  thisId.fIdentifier = "linsearch_amount";
  y.linsearch_amount =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0,
                                                      3, "linsearch_amount")),
                       &thisId);
  thisId.fIdentifier = "newtonwaitlinear";
  y.newtonwaitlinear =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0,
                                                      4, "newtonwaitlinear")),
                       &thisId);
  thisId.fIdentifier = "newtonwaitexp";
  y.newtonwaitexp =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0,
                                                      5, "newtonwaitexp")),
                       &thisId);
  thisId.fIdentifier = "newtonwait_factor";
  y.newtonwait_factor =
      emlrt_marshallIn(sp,
                       emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)&sp, u, 0,
                                                      6, "newtonwait_factor")),
                       &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T g_emlrt_marshallIn(const emlrtStack &sp,
                                    const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static boolean_T g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
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

static boolean_T m_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "logical", false, 0U,
                          (const void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

void dev_newtonpipg_g_with_timer_api(c_dev_newtonpipg_g_with_timerSt *SD,
                                     const mxArray *const prhs[20],
                                     const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  struct0_T newton_coeff;
  struct1_T out;
  real_T(*A)[3190];
  real_T(*proj_coefficient_all)[660];
  real_T(*proj_index_all)[660];
  real_T(*P)[326];
  real_T(*q)[326];
  real_T(*z_1)[326];
  real_T(*cone_k_polar)[290];
  real_T(*g)[290];
  real_T N;
  real_T lam;
  real_T maxit;
  real_T nineq;
  real_T nu;
  real_T nx;
  real_T omg;
  real_T pertub;
  real_T rho;
  real_T tol;
  boolean_T display;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  P = b_emlrt_marshallIn(st, emlrtAlias(prhs[0]), "P");
  A = c_emlrt_marshallIn(st, emlrtAlias(prhs[1]), "A");
  q = b_emlrt_marshallIn(st, emlrtAlias(prhs[2]), "q");
  g = d_emlrt_marshallIn(st, emlrtAlias(prhs[3]), "g");
  N = emlrt_marshallIn(st, emlrtAliasP(prhs[4]), "N");
  nx = emlrt_marshallIn(st, emlrtAliasP(prhs[5]), "nx");
  nu = emlrt_marshallIn(st, emlrtAliasP(prhs[6]), "nu");
  nineq = emlrt_marshallIn(st, emlrtAliasP(prhs[7]), "nineq");
  proj_index_all =
      e_emlrt_marshallIn(st, emlrtAlias(prhs[8]), "proj_index_all");
  proj_coefficient_all =
      e_emlrt_marshallIn(st, emlrtAlias(prhs[9]), "proj_coefficient_all");
  cone_k_polar = d_emlrt_marshallIn(st, emlrtAlias(prhs[10]), "cone_k_polar");
  z_1 = b_emlrt_marshallIn(st, emlrtAlias(prhs[11]), "z_1");
  lam = emlrt_marshallIn(st, emlrtAliasP(prhs[12]), "lam");
  rho = emlrt_marshallIn(st, emlrtAliasP(prhs[13]), "rho");
  omg = emlrt_marshallIn(st, emlrtAliasP(prhs[14]), "omg");
  newton_coeff = f_emlrt_marshallIn(st, emlrtAliasP(prhs[15]), "newton_coeff");
  maxit = emlrt_marshallIn(st, emlrtAliasP(prhs[16]), "maxit");
  tol = emlrt_marshallIn(st, emlrtAliasP(prhs[17]), "tol");
  pertub = emlrt_marshallIn(st, emlrtAliasP(prhs[18]), "pertub");
  display = g_emlrt_marshallIn(st, emlrtAliasP(prhs[19]), "display");
  // Invoke the target function
  dev_newtonpipg_g_with_timer(SD, &st, *P, *A, *q, *g, N, nx, nu, nineq,
                              *proj_index_all, *proj_coefficient_all,
                              *cone_k_polar, *z_1, lam, rho, omg, &newton_coeff,
                              maxit, tol, pertub, display, &out);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(out);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_dev_newtonpipg_g_with_timer_api.cpp)
