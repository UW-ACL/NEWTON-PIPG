//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_A_Q_D.cpp
//
// Code generation for function 'dev_g_A_Q_D'
//

// Include files
#include "dev_g_A_Q_D.h"
#include "dev_A_Q_D_unit.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "diag.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo vg_emlrtRSI{
    5,             // lineNo
    "dev_g_A_Q_D", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_A_Q_D.m" // pathName
};

static emlrtBCInfo ae_emlrtBCI{
    1,                // iFirst
    11,               // iLast
    31,               // lineNo
    16,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    3                                                // checkKind
};

static emlrtRTEInfo wi_emlrtRTEI{
    5,             // lineNo
    45,            // colNo
    "dev_g_A_Q_D", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_A_Q_D.m" // pName
};

static emlrtRTEInfo xi_emlrtRTEI{
    31,               // lineNo
    35,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

// Function Definitions
void dev_g_A_Q_D(const emlrtStack &sp, real_T A[3190],
                 const coder::array<real_T, 3U> &Q,
                 const real_T proj_index_all[660])
{
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 2U> b_Q;
  coder::array<real_T, 2U> c_A;
  coder::array<real_T, 2U> c_Q;
  coder::array<real_T, 2U> r1;
  coder::array<real_T, 2U> r2;
  coder::array<real_T, 2U> temp_index;
  coder::array<real_T, 1U> a_tmp;
  coder::array<int32_T, 1U> r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_A[110];
  int32_T iv[2];
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)dev_g_A_Q_D_complete_name,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  loop_ub_tmp = Q.size(1);
  loop_ub = Q.size(0);
  for (int32_T i{0}; i < 29; i++) {
    real_T temp;
    int32_T b_i;
    int32_T flag;
    int32_T i1;
    boolean_T exitg1;
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    st.site = &vg_emlrtRSI;
    std::copy(&A[i * 110],
              &A[static_cast<int32_T>(static_cast<uint32_T>(i * 110) + 110U)],
              &b_A[0]);
    b_Q.set_size(&wi_emlrtRTEI, &st, Q.size(0), loop_ub_tmp);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Q[i1 + b_Q.size(0) * b_i] =
            Q[(i1 + Q.size(0) * b_i) + Q.size(0) * Q.size(1) * i];
      }
    }
    emlrtMEXProfilingFunctionEntryCPP((char_T *)dev_A_Q_D_unit_complete_name,
                                      static_cast<boolean_T>(isMexOutdated),
                                      &b_profilerSentinel);
    // WE want to compute the innerproduct of A and Q.
    // When col(A) \neq row(Q), we need an L such that only the first L column
    // multiply the top square block of Q that ahs size L
    emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
    std::memset(&A[i * 110], 0, 110U * sizeof(real_T));
    emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
    temp = 1.0;
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    flag = 0;
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    exitg1 = false;
    while ((!exitg1) && (temp <= 11.0)) {
      emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
      if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
        emlrtIntegerCheckR2012b(temp, &ob_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(temp) < 1) ||
          (static_cast<int32_T>(temp) > 11)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                      &pc_emlrtBCI, &st);
      }
      b_i = ((static_cast<int32_T>(temp) - 1) << 1) + 22 * i;
      if (proj_index_all[b_i] == rtInf) {
        emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
        exitg1 = true;
      } else {
        real_T d;
        int32_T b_loop_ub;
        emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
        d = proj_index_all[b_i];
        if (d >= 11.0) {
          emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
          b_st.site = &wg_emlrtRSI;
          c_st.site = &qb_emlrtRSI;
          temp_index.set_size(&ec_emlrtRTEI, &c_st, 1,
                              static_cast<int32_T>(11.0 - temp) + 1);
          b_loop_ub = static_cast<int32_T>(11.0 - temp);
          for (i1 = 0; i1 <= b_loop_ub; i1++) {
            temp_index[i1] = temp + static_cast<real_T>(i1);
          }
          emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
          temp = proj_index_all[b_i + 1];
          emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
          flag = 1;
          emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
        } else {
          emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
          emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
          b_st.site = &xg_emlrtRSI;
          c_st.site = &qb_emlrtRSI;
          if (muDoubleScalarIsNaN(d)) {
            temp_index.set_size(&mh_emlrtRTEI, &c_st, 1, 1);
            temp_index[0] = rtNaN;
          } else if (d < temp) {
            temp_index.set_size(&mh_emlrtRTEI, &c_st, 1, 0);
          } else if (muDoubleScalarIsInf(d) && (temp == d)) {
            temp_index.set_size(&mh_emlrtRTEI, &c_st, 1, 1);
            temp_index[0] = rtNaN;
          } else {
            b_loop_ub = static_cast<int32_T>(d - temp);
            temp_index.set_size(&mh_emlrtRTEI, &c_st, 1, b_loop_ub + 1);
            for (i1 = 0; i1 <= b_loop_ub; i1++) {
              temp_index[i1] = temp + static_cast<real_T>(i1);
            }
          }
          emlrtMEXProfilingStatement(15, static_cast<boolean_T>(isMexOutdated));
          temp = proj_index_all[b_i + 1];
          emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
        }
        emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
        if (temp == 1.0) {
          int32_T c_loop_ub;
          int32_T i2;
          //  Q(temp_index, temp_index)  =
          //  dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
          //       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
          emlrtMEXProfilingStatement(18, static_cast<boolean_T>(isMexOutdated));
          b_loop_ub = temp_index.size(1);
          r1.set_size(&vh_emlrtRTEI, &st, 10, temp_index.size(1));
          for (b_i = 0; b_i < b_loop_ub; b_i++) {
            i1 = static_cast<int32_T>(temp_index[b_i]);
            for (i2 = 0; i2 < 10; i2++) {
              if (temp_index[b_i] !=
                  static_cast<int32_T>(muDoubleScalarFloor(temp_index[b_i]))) {
                emlrtIntegerCheckR2012b(temp_index[b_i], &qb_emlrtDCI, &st);
              }
              if ((i1 < 1) || (i1 > 11)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 11, &qc_emlrtBCI, &st);
              }
              r1[i2 + 10 * b_i] = b_A[i2 + 10 * (i1 - 1)];
            }
          }
          c_Q.set_size(&th_emlrtRTEI, &st, temp_index.size(1),
                       temp_index.size(1));
          for (b_i = 0; b_i < b_loop_ub; b_i++) {
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              i2 = static_cast<int32_T>(temp_index[i1]);
              if ((i2 < 1) || (i2 > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, loop_ub, &sc_emlrtBCI,
                                              &st);
              }
              c_loop_ub = static_cast<int32_T>(temp_index[b_i]);
              if ((c_loop_ub < 1) || (c_loop_ub > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(c_loop_ub, 1, loop_ub_tmp,
                                              &tc_emlrtBCI, &st);
              }
              c_Q[i1 + c_Q.size(0) * b_i] =
                  b_Q[(i2 + b_Q.size(0) * (c_loop_ub - 1)) - 1];
            }
          }
          b_st.site = &yg_emlrtRSI;
          coder::diag(b_st, c_Q, a_tmp);
          if ((a_tmp.size(0) != temp_index.size(1)) &&
              ((temp_index.size(1) != 1) && (a_tmp.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(temp_index.size(1), a_tmp.size(0),
                                        &jc_emlrtECI, &st);
          }
          r.set_size(&uh_emlrtRTEI, &st, temp_index.size(1));
          for (b_i = 0; b_i < b_loop_ub; b_i++) {
            r[b_i] = static_cast<int32_T>(temp_index[b_i]) - 1;
          }
          if (a_tmp.size(0) == r1.size(1)) {
            c_loop_ub = r1.size(1);
            r2.set_size(&vh_emlrtRTEI, &st, 10, r1.size(1));
            for (b_i = 0; b_i < c_loop_ub; b_i++) {
              for (i1 = 0; i1 <= 8; i1 += 2) {
                __m128d r3;
                r3 = _mm_loadu_pd(&r1[i1 + 10 * b_i]);
                _mm_storeu_pd(&r2[i1 + 10 * b_i],
                              _mm_mul_pd(r3, _mm_set1_pd(a_tmp[b_i])));
              }
            }
          } else {
            b_st.site = &yg_emlrtRSI;
            binary_expand_op_35(b_st, r2, r1, a_tmp);
          }
          iv[0] = 10;
          iv[1] = temp_index.size(1);
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r2.size(), 2, &kc_emlrtECI,
                                        &st);
          for (b_i = 0; b_i < b_loop_ub; b_i++) {
            for (i1 = 0; i1 < 10; i1++) {
              A[(i1 + 10 * r[b_i]) + 110 * i] = r2[i1 + 10 * b_i];
            }
          }
          //  to save computation.
          emlrtMEXProfilingStatement(21, static_cast<boolean_T>(isMexOutdated));
        } else {
          emlrtMEXProfilingStatement(19, static_cast<boolean_T>(isMexOutdated));
          if ((temp == 2.0) || (temp == 3.0)) {
            emlrtMEXProfilingStatement(20,
                                       static_cast<boolean_T>(isMexOutdated));
            b_loop_ub = temp_index.size(1);
            r.set_size(&oh_emlrtRTEI, &st, temp_index.size(1));
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              if (temp_index[b_i] !=
                  static_cast<int32_T>(muDoubleScalarFloor(temp_index[b_i]))) {
                emlrtIntegerCheckR2012b(temp_index[b_i], &pb_emlrtDCI, &st);
              }
              i1 = static_cast<int32_T>(temp_index[b_i]);
              if ((i1 < 1) || (i1 > 11)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 11, &ae_emlrtBCI, &st);
              }
              r[b_i] = i1 - 1;
            }
            b_st.site = &ah_emlrtRSI;
            a_tmp.set_size(&xi_emlrtRTEI, &b_st, temp_index.size(1));
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              a_tmp[b_i] = temp_index[b_i];
            }
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              i1 = static_cast<int32_T>(a_tmp[b_i]);
              if ((i1 < 1) || (i1 > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &uc_emlrtBCI,
                                              &b_st);
              }
            }
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              i1 = static_cast<int32_T>(a_tmp[b_i]);
              if ((i1 < 1) || (i1 > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub_tmp, &wc_emlrtBCI,
                                              &b_st);
              }
            }
            c_A.set_size(&qh_emlrtRTEI, &b_st, 10, temp_index.size(1));
            c_Q.set_size(&rh_emlrtRTEI, &b_st, temp_index.size(1),
                         temp_index.size(1));
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              for (i1 = 0; i1 < 10; i1++) {
                c_A[i1 + 10 * b_i] =
                    b_A[i1 + 10 * (static_cast<int32_T>(a_tmp[b_i]) - 1)];
              }
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                c_Q[i1 + c_Q.size(0) * b_i] =
                    b_Q[(static_cast<int32_T>(a_tmp[i1]) +
                         b_Q.size(0) * (static_cast<int32_T>(a_tmp[b_i]) - 1)) -
                        1];
              }
            }
            c_st.site = &bh_emlrtRSI;
            coder::internal::blas::mtimes(c_st, c_A, c_Q, r1);
            iv[0] = 10;
            b_loop_ub = r.size(0);
            iv[1] = r.size(0);
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r1.size(), 2, &lc_emlrtECI,
                                          &st);
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              for (i1 = 0; i1 < 10; i1++) {
                A[(i1 + 10 * r[b_i]) + 110 * i] = r1[i1 + 10 * b_i];
              }
            }
            //  a faster way is to treat diagbonal cases vs dense cases
            //  differently. Q(temp_index, temp_index) =
            //  dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp),
            //  P(temp_index), alpha);
            emlrtMEXProfilingStatement(21,
                                       static_cast<boolean_T>(isMexOutdated));
          }
        }
        // update
        emlrtMEXProfilingStatement(22, static_cast<boolean_T>(isMexOutdated));
        if (flag == 1) {
          emlrtMEXProfilingStatement(23, static_cast<boolean_T>(isMexOutdated));
          exitg1 = true;
        } else {
          emlrtMEXProfilingStatement(25, static_cast<boolean_T>(isMexOutdated));
          temp = d + 1.0;
          emlrtMEXProfilingStatement(26, static_cast<boolean_T>(isMexOutdated));
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      }
    }
    emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_g_A_Q_D.cpp)
