//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_dev_xpipg_g_for_N_30_withtimer_api.cpp
//
// Code generation for function '_coder_dev_xpipg_g_for_N_30_withtimer_api'
//

// Include files
#include "_coder_dev_xpipg_g_for_N_30_withtimer_api.h"
#include "dev_xpipg_g_for_N_30_withtimer.h"
#include "dev_xpipg_g_for_N_30_withtimer_data.h"
#include "dev_xpipg_g_for_N_30_withtimer_mexutil.h"
#include "dev_xpipg_g_for_N_30_withtimer_types.h"
#include "rt_nonfinite.h"
#include "coder_bounded_array.h"

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                               const char_T *identifier, real_T y[3190]);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[3190]);

static boolean_T b_emlrt_marshallIn(const emlrtStack &sp,
                                    const mxArray *b_nullptr,
                                    const char_T *identifier);

static boolean_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                               const char_T *identifier, real_T y[290]);

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[290]);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                               const char_T *identifier, real_T y[660]);

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[660]);

static boolean_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[326]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, real_T y[326]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[326]);

static const mxArray *emlrt_marshallOut(const struct0_T &u);

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size);

static const mxArray *emlrt_marshallOut(const real_T u[20000]);

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[3190]);

static void g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[290]);

static void h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[660]);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                               const char_T *identifier, real_T y[3190])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId, y);
  emlrtDestroyArray(&b_nullptr);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[3190])
{
  real_T dv[3190];
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, dv);
  for (int32_T i{0}; i < 29; i++) {
    for (int32_T i1{0}; i1 < 11; i1++) {
      for (int32_T i2{0}; i2 < 10; i2++) {
        y[(i + 29 * i1) + 319 * i2] = dv[(i2 + 10 * i1) + 110 * i];
      }
    }
  }
  emlrtDestroyArray(&u);
}

static boolean_T b_emlrt_marshallIn(const emlrtStack &sp,
                                    const mxArray *b_nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId);
  emlrtDestroyArray(&b_nullptr);
  return y;
}

static boolean_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = d_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                               const char_T *identifier, real_T y[290])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  c_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId, y);
  emlrtDestroyArray(&b_nullptr);
}

static void c_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[290])
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                               const char_T *identifier, real_T y[660])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId, y);
  emlrtDestroyArray(&b_nullptr);
}

static void d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[660])
{
  real_T dv[660];
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, dv);
  for (int32_T i{0}; i < 30; i++) {
    for (int32_T i1{0}; i1 < 11; i1++) {
      int32_T b_y_tmp;
      int32_T y_tmp;
      y_tmp = (i1 << 1) + 22 * i;
      b_y_tmp = i + 30 * i1;
      y[b_y_tmp] = dv[y_tmp];
      y[b_y_tmp + 330] = dv[y_tmp + 1];
    }
  }
  emlrtDestroyArray(&u);
}

static boolean_T d_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
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

static void e_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[326])
{
  static const int32_T dims{326};
  real_T(*r)[326];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[326])emlrtMxGetData(src);
  for (int32_T i{0}; i < 326; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *b_nullptr,
                             const char_T *identifier, real_T y[326])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(b_nullptr), &thisId, y);
  emlrtDestroyArray(&b_nullptr);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, real_T y[326])
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const struct0_T &u)
{
  static const char_T *sv[10]{"converge", "iter4", "iter8",      "iter12",
                              "xi",       "eta",   "solve_time", "nR",
                              "timeout",  "pipgR"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 10, (const char_T **)&sv[0]));
  b_y = nullptr;
  m = emlrtCreateLogicalScalar(u.converge);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "converge", b_y, 0);
  c_y = nullptr;
  m = emlrtCreateDoubleScalar(u.iter4);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "iter4", c_y, 1);
  d_y = nullptr;
  m = emlrtCreateDoubleScalar(u.iter8);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "iter8", d_y, 2);
  e_y = nullptr;
  m = emlrtCreateDoubleScalar(u.iter12);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "iter12", e_y, 3);
  emlrtSetFieldR2017b(y, 0, "xi", emlrt_marshallOut(u.xi.data, u.xi.size[0]),
                      4);
  emlrtSetFieldR2017b(y, 0, "eta", emlrt_marshallOut(u.eta.data, u.eta.size[0]),
                      5);
  f_y = nullptr;
  m = emlrtCreateDoubleScalar(u.solve_time);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "solve_time", f_y, 6);
  g_y = nullptr;
  m = emlrtCreateDoubleScalar(u.nR);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "nR", g_y, 7);
  emlrtSetFieldR2017b(y, 0, "timeout", emlrt_marshallOut(u.timeout), 8);
  emlrtSetFieldR2017b(y, 0, "pipgR", emlrt_marshallOut(u.pipgR), 9);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T u_size)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T i;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&u_size, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (int32_T b_i{0}; b_i < u_size; b_i++) {
    pData[i] = u_data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[20000])
{
  static const int32_T iv[2]{1, 20000};
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (int32_T i{0}; i < 20000; i++) {
    pData[i] = u[i];
  }
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[3190])
{
  static const int32_T dims[3]{10, 11, 29};
  real_T(*r)[3190];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[3190])emlrtMxGetData(src);
  for (int32_T i{0}; i < 3190; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[290])
{
  static const int32_T dims{290};
  real_T(*r)[290];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[290])emlrtMxGetData(src);
  for (int32_T i{0}; i < 290; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[660])
{
  static const int32_T dims[3]{2, 11, 30};
  real_T(*r)[660];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[660])emlrtMxGetData(src);
  for (int32_T i{0}; i < 660; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

void f_dev_xpipg_g_for_N_30_withtime(d_dev_xpipg_g_for_N_30_withtime *SD,
                                     const mxArray *const prhs[18],
                                     const mxArray **plhs)
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T A[3190];
  real_T proj_coefficient_all[660];
  real_T proj_index_all[660];
  real_T P[326];
  real_T q[326];
  real_T z_1[326];
  real_T cone_k_polar[290];
  real_T g[290];
  real_T N;
  real_T lam;
  real_T maxit;
  real_T nineq;
  real_T nu;
  real_T nx;
  real_T omg;
  real_T rho;
  real_T tol;
  boolean_T display;
  st.tls = emlrtRootTLSGlobal;
  // Marshall function inputs
  emlrt_marshallIn(st, emlrtAliasP(prhs[0]), "P", P);
  b_emlrt_marshallIn(st, emlrtAliasP(prhs[1]), "A", A);
  emlrt_marshallIn(st, emlrtAliasP(prhs[2]), "q", q);
  c_emlrt_marshallIn(st, emlrtAliasP(prhs[3]), "g", g);
  N = emlrt_marshallIn(st, emlrtAliasP(prhs[4]), "N");
  nx = emlrt_marshallIn(st, emlrtAliasP(prhs[5]), "nx");
  nu = emlrt_marshallIn(st, emlrtAliasP(prhs[6]), "nu");
  nineq = emlrt_marshallIn(st, emlrtAliasP(prhs[7]), "nineq");
  d_emlrt_marshallIn(st, emlrtAliasP(prhs[8]), "proj_index_all",
                     proj_index_all);
  d_emlrt_marshallIn(st, emlrtAliasP(prhs[9]), "proj_coefficient_all",
                     proj_coefficient_all);
  c_emlrt_marshallIn(st, emlrtAliasP(prhs[10]), "cone_k_polar", cone_k_polar);
  emlrt_marshallIn(st, emlrtAliasP(prhs[11]), "z_1", z_1);
  lam = emlrt_marshallIn(st, emlrtAliasP(prhs[12]), "lam");
  rho = emlrt_marshallIn(st, emlrtAliasP(prhs[13]), "rho");
  omg = emlrt_marshallIn(st, emlrtAliasP(prhs[14]), "omg");
  maxit = emlrt_marshallIn(st, emlrtAliasP(prhs[15]), "maxit");
  tol = emlrt_marshallIn(st, emlrtAliasP(prhs[16]), "tol");
  display = b_emlrt_marshallIn(st, emlrtAliasP(prhs[17]), "display");
  // Invoke the target function
  dev_xpipg_g_for_N_30_withtimer(
      &st, P, A, q, g, N, nx, nu, nineq, proj_index_all, proj_coefficient_all,
      cone_k_polar, z_1, lam, rho, omg, maxit, tol, display, &SD->f0.out);
  // Marshall function outputs
  *plhs = emlrt_marshallOut(SD->f0.out);
}

// End of code generation (_coder_dev_xpipg_g_for_N_30_withtimer_api.cpp)
