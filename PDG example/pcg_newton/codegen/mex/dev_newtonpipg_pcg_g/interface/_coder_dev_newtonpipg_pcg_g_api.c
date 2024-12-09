/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_dev_newtonpipg_pcg_g_api.c
 *
 * Code generation for function '_coder_dev_newtonpipg_pcg_g_api'
 *
 */

/* Include files */
#include "_coder_dev_newtonpipg_pcg_g_api.h"
#include "dev_newtonpipg_pcg_g.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_mexutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo xk_emlrtRTEI = {
    1,                                 /* lineNo */
    1,                                 /* colNo */
    "_coder_dev_newtonpipg_pcg_g_api", /* fName */
    ""                                 /* pName */
};

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, real_T y[326]);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[326]);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, real_T y[3190]);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[3190]);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, real_T y[290]);

static const mxArray *g_emlrt_marshallOut(const struct1_T u);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[290]);

static const mxArray *h_emlrt_marshallOut(const emxArray_real_T *u);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, real_T y[660]);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[660]);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct0_T *y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct0_T *y);

static boolean_T m_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier);

static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[326]);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[3190]);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[290]);

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[660]);

static boolean_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, real_T y[326])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[326])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, real_T y[3190])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[3190])
{
  real_T dv[3190];
  int32_T i;
  int32_T i1;
  int32_T i2;
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, dv);
  for (i = 0; i < 29; i++) {
    for (i1 = 0; i1 < 11; i1++) {
      for (i2 = 0; i2 < 10; i2++) {
        y[(i + 29 * i1) + 319 * i2] = dv[(i2 + 10 * i1) + 110 * i];
      }
    }
  }
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, real_T y[290])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static const mxArray *g_emlrt_marshallOut(const struct1_T u)
{
  static const char_T *sv[7] = {"converge", "xi",      "eta", "solve_time",
                                "ntime",    "pcgtime", "k"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&sv[0]));
  b_y = NULL;
  m = emlrtCreateLogicalScalar(u.converge);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "converge", b_y, 0);
  emlrtSetFieldR2017b(y, 0, "xi", h_emlrt_marshallOut(u.xi), 1);
  emlrtSetFieldR2017b(y, 0, "eta", h_emlrt_marshallOut(u.eta), 2);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(u.solve_time);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "solve_time", c_y, 3);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(u.ntime);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "ntime", d_y, 4);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u.pcgtime);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "pcgtime", e_y, 5);
  f_y = NULL;
  m = emlrtCreateDoubleScalar(u.k);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "k", f_y, 6);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[290])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *h_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, &u->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[0]; b_i++) {
    pData[i] = u_data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, real_T y[660])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[660])
{
  real_T dv[660];
  int32_T i;
  int32_T i1;
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, dv);
  for (i = 0; i < 30; i++) {
    for (i1 = 0; i1 < 11; i1++) {
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

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[10] = {
      "newtonratio",       "newtonactive",     "linesearch_step",
      "linsearch_amount",  "newtonwaitlinear", "newtonwaitexp",
      "newtonwait_factor", "pcg_max_iter",     "pcg_max_tol",
      "linesearch_amount"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 10,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "newtonratio";
  y->newtonratio =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        0, "newtonratio")),
                         &thisId);
  thisId.fIdentifier = "newtonactive";
  y->newtonactive =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        1, "newtonactive")),
                         &thisId);
  thisId.fIdentifier = "linesearch_step";
  y->linesearch_step =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        2, "linesearch_step")),
                         &thisId);
  thisId.fIdentifier = "linsearch_amount";
  y->linsearch_amount =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        3, "linsearch_amount")),
                         &thisId);
  thisId.fIdentifier = "newtonwaitlinear";
  y->newtonwaitlinear =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        4, "newtonwaitlinear")),
                         &thisId);
  thisId.fIdentifier = "newtonwaitexp";
  y->newtonwaitexp =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        5, "newtonwaitexp")),
                         &thisId);
  thisId.fIdentifier = "newtonwait_factor";
  y->newtonwait_factor =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtConstCTX)sp, u, 0, 6, "newtonwait_factor")),
                         &thisId);
  thisId.fIdentifier = "pcg_max_iter";
  y->pcg_max_iter =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        7, "pcg_max_iter")),
                         &thisId);
  thisId.fIdentifier = "pcg_max_tol";
  y->pcg_max_tol =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        8, "pcg_max_tol")),
                         &thisId);
  thisId.fIdentifier = "linesearch_amount";
  y->linesearch_amount =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtConstCTX)sp, u, 0, 9, "linesearch_amount")),
                         &thisId);
  emlrtDestroyArray(&u);
}

static boolean_T m_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *nullptr,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = n_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[326])
{
  static const int32_T dims = 326;
  real_T(*r)[326];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[326])emlrtMxGetData(src);
  for (i = 0; i < 326; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret[3190])
{
  static const int32_T dims[3] = {10, 11, 29};
  real_T(*r)[3190];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[3190])emlrtMxGetData(src);
  for (i = 0; i < 3190; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[290])
{
  static const int32_T dims = 290;
  real_T(*r)[290];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[290])emlrtMxGetData(src);
  for (i = 0; i < 290; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, real_T ret[660])
{
  static const int32_T dims[3] = {2, 11, 30};
  real_T(*r)[660];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[660])emlrtMxGetData(src);
  for (i = 0; i < 660; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static boolean_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "logical", false, 0U,
                          (const void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

void dev_newtonpipg_pcg_g_api(dev_newtonpipg_pcg_gStackData *SD,
                              const mxArray *const prhs[20],
                              const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  struct0_T newton_coeff;
  struct1_T out;
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
  real_T pertub;
  real_T rho;
  real_T tol;
  boolean_T display;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "P", P);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "A", A);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "q", q);
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "g", g);
  N = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "N");
  nx = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "nx");
  nu = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "nu");
  nineq = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "nineq");
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "proj_index_all",
                     proj_index_all);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "proj_coefficient_all",
                     proj_coefficient_all);
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "cone_k_polar", cone_k_polar);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "z_1", z_1);
  lam = emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "lam");
  rho = emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "rho");
  omg = emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "omg");
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "newton_coeff", &newton_coeff);
  maxit = emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "maxit");
  tol = emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "tol");
  pertub = emlrt_marshallIn(&st, emlrtAliasP(prhs[18]), "pertub");
  display = m_emlrt_marshallIn(&st, emlrtAliasP(prhs[19]), "display");
  /* Invoke the target function */
  emxInitStruct_struct1_T(&st, &out, &xk_emlrtRTEI);
  dev_newtonpipg_pcg_g(SD, &st, P, A, q, g, N, nx, nu, nineq, proj_index_all,
                       proj_coefficient_all, cone_k_polar, z_1, lam, rho, omg,
                       &newton_coeff, maxit, tol, pertub, display, &out);
  /* Marshall function outputs */
  *plhs = g_emlrt_marshallOut(out);
  emxFreeStruct_struct1_T(&st, &out);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_dev_newtonpipg_pcg_g_api.c) */
