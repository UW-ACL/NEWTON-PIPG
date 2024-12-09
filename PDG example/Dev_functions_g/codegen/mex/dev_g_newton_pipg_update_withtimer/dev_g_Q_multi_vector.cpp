//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_Q_multi_vector.cpp
//
// Code generation for function 'dev_g_Q_multi_vector'
//

// Include files
#include "dev_g_Q_multi_vector.h"
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "diag.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo ig_emlrtRSI{
    26,         // lineNo
    "Q_v_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

static emlrtRSInfo jg_emlrtRSI{
    29,         // lineNo
    "Q_v_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

static emlrtRSInfo kg_emlrtRSI{
    31,         // lineNo
    "Q_v_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

static emlrtRSInfo lg_emlrtRSI{
    34,         // lineNo
    "Q_v_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

static emlrtECInfo yb_emlrtECI{
    1,          // nDims
    29,         // lineNo
    29,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtECInfo ac_emlrtECI{
    -1,         // nDims
    29,         // lineNo
    9,          // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtECInfo bc_emlrtECI{
    -1,         // nDims
    31,         // lineNo
    10,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtECInfo cc_emlrtECI{
    -1,         // nDims
    34,         // lineNo
    10,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtBCInfo wc_emlrtBCI{
    1,            // iFirst
    11,           // iLast
    23,           // lineNo
    22,           // colNo
    "proj_index", // aName
    "Q_v_unit",   // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo bb_emlrtDCI{
    23,         // lineNo
    22,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtDCInfo cb_emlrtDCI{
    34,         // lineNo
    60,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo xc_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    60,         // colNo
    "v",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo yc_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    29,         // lineNo
    36,         // colNo
    "Q",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo db_emlrtDCI{
    29,         // lineNo
    36,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo ad_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    29,         // lineNo
    48,         // colNo
    "Q",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo bd_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    31,         // lineNo
    33,         // colNo
    "Q",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo eb_emlrtDCI{
    31,         // lineNo
    33,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    31,         // lineNo
    45,         // colNo
    "Q",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    29,         // lineNo
    64,         // colNo
    "v",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo ed_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    16,         // colNo
    "v_out",    // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo fd_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    31,         // lineNo
    61,         // colNo
    "v",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo gd_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    33,         // colNo
    "Q",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo hd_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    29,         // lineNo
    15,         // colNo
    "v_out",    // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo id_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    45,         // colNo
    "Q",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo jd_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    31,         // lineNo
    16,         // colNo
    "v_out",    // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtRTEInfo qf_emlrtRTEI{
    20,                     // lineNo
    1,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo rf_emlrtRTEI{
    26,                     // lineNo
    5,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo sf_emlrtRTEI{
    34,                     // lineNo
    16,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo tf_emlrtRTEI{
    34,                     // lineNo
    33,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo uf_emlrtRTEI{
    34,                     // lineNo
    31,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo vf_emlrtRTEI{
    34,                     // lineNo
    58,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo wf_emlrtRTEI{
    31,                     // lineNo
    33,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo xf_emlrtRTEI{
    31,                     // lineNo
    31,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo yf_emlrtRTEI{
    31,                     // lineNo
    59,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo ag_emlrtRTEI{
    31,                     // lineNo
    16,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo bg_emlrtRTEI{
    31,                     // lineNo
    30,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo cg_emlrtRTEI{
    29,                     // lineNo
    34,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo dg_emlrtRTEI{
    29,                     // lineNo
    15,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtRTEInfo eg_emlrtRTEI{
    29,                     // lineNo
    29,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

// Function Declarations
static void binary_expand_op_21(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const coder::array<real_T, 1U> &in2,
                                const coder::array<real_T, 1U> &in3,
                                const coder::array<real_T, 2U> &in4);

// Function Definitions
static void binary_expand_op_21(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const coder::array<real_T, 1U> &in2,
                                const coder::array<real_T, 1U> &in3,
                                const coder::array<real_T, 2U> &in4)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in4.size(1) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in4.size(1);
  }
  in1.set_size(&eg_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in4.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] *
             in3[static_cast<int32_T>(in4[i * stride_1_0]) - 1];
  }
}

void Q_v_unit(const emlrtStack &sp, const coder::array<real_T, 1U> &v,
              const coder::array<real_T, 2U> &Q, const real_T proj_index[22],
              coder::array<real_T, 1U> &v_out)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  coder::array<real_T, 2U> b_Q;
  coder::array<real_T, 2U> b_v;
  coder::array<real_T, 2U> temp_index;
  coder::array<real_T, 1U> a_tmp;
  coder::array<real_T, 1U> r1;
  coder::array<int32_T, 2U> r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T beta1;
  real_T temp;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = v.size(0);
  v_out.set_size(&qf_emlrtRTEI, &sp, v.size(0));
  for (i = 0; i < loop_ub; i++) {
    v_out[i] = 0.0;
  }
  temp = 1.0;
  exitg1 = false;
  while ((!exitg1) && (temp <= v.size(0))) {
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &bb_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &wc_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i = (static_cast<int32_T>(temp) - 1) << 1;
    if (proj_index[i] == rtInf) {
      exitg1 = true;
    } else {
      real_T d;
      int32_T b_loop_ub;
      int32_T i1;
      st.site = &ig_emlrtRSI;
      b_st.site = &bc_emlrtRSI;
      d = proj_index[i];
      if (muDoubleScalarIsNaN(d)) {
        temp_index.set_size(&rf_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else if (d < temp) {
        temp_index.set_size(&rf_emlrtRTEI, &b_st, 1, 0);
      } else if (muDoubleScalarIsInf(d) && (temp == d)) {
        temp_index.set_size(&rf_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else {
        b_loop_ub = static_cast<int32_T>(d - temp);
        temp_index.set_size(&rf_emlrtRTEI, &b_st, 1, b_loop_ub + 1);
        for (i1 = 0; i1 <= b_loop_ub; i1++) {
          temp_index[i1] = temp + static_cast<real_T>(i1);
        }
      }
      temp = proj_index[i + 1];
      if (temp == 1.0) {
        int32_T iv[2];
        int32_T loop_ub_tmp;
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &jg_emlrtRSI;
        coder::internal::indexShapeCheck(st, v.size(0), iv);
        b_loop_ub = temp_index.size(1);
        b_Q.set_size(&cg_emlrtRTEI, &sp, temp_index.size(1),
                     temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            int32_T i2;
            if (temp_index[i1] !=
                static_cast<int32_T>(muDoubleScalarFloor(temp_index[i1]))) {
              emlrtIntegerCheckR2012b(temp_index[i1], &db_emlrtDCI,
                                      (emlrtConstCTX)&sp);
            }
            loop_ub_tmp = static_cast<int32_T>(temp_index[i1]);
            if ((loop_ub_tmp < 1) || (loop_ub_tmp > Q.size(0))) {
              emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, Q.size(0),
                                            &yc_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i2 = static_cast<int32_T>(temp_index[i]);
            if ((i2 < 1) || (i2 > Q.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, Q.size(1), &ad_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            b_Q[i1 + b_Q.size(0) * i] =
                Q[(loop_ub_tmp + Q.size(0) * (i2 - 1)) - 1];
          }
        }
        st.site = &jg_emlrtRSI;
        coder::diag(st, b_Q, a_tmp);
        for (i = 0; i < b_loop_ub; i++) {
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &dd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
        }
        loop_ub_tmp = a_tmp.size(0);
        if ((a_tmp.size(0) != temp_index.size(1)) &&
            ((a_tmp.size(0) != 1) && (temp_index.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(a_tmp.size(0), temp_index.size(1),
                                      &yb_emlrtECI, (emlrtConstCTX)&sp);
        }
        r.set_size(&dg_emlrtRTEI, &sp, 1, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &hd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r[i] = i1;
        }
        if (a_tmp.size(0) == temp_index.size(1)) {
          r1.set_size(&eg_emlrtRTEI, &sp, a_tmp.size(0));
          for (i = 0; i < loop_ub_tmp; i++) {
            r1[i] = a_tmp[i] * v[static_cast<int32_T>(temp_index[i]) - 1];
          }
        } else {
          st.site = &jg_emlrtRSI;
          binary_expand_op_21(st, r1, a_tmp, v, temp_index);
        }
        b_loop_ub = r.size(1);
        if (r1.size(0) != r.size(1)) {
          emlrtSubAssignSizeCheck1dR2017a(r.size(1), r1.size(0), &ac_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out[r[i] - 1] = r1[i];
        }
        // check
      } else if (temp != 1.0) {
        int32_T iv[2];
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &kg_emlrtRSI;
        coder::internal::indexShapeCheck(st, v.size(0), iv);
        b_loop_ub = temp_index.size(1);
        a_tmp.set_size(&wf_emlrtRTEI, &sp, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          a_tmp[i] = temp_index[i];
        }
        b_Q.set_size(&xf_emlrtRTEI, &sp, temp_index.size(1),
                     temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            int32_T i2;
            int32_T loop_ub_tmp;
            if (a_tmp[i1] !=
                static_cast<int32_T>(muDoubleScalarFloor(a_tmp[i1]))) {
              emlrtIntegerCheckR2012b(a_tmp[i1], &eb_emlrtDCI,
                                      (emlrtConstCTX)&sp);
            }
            loop_ub_tmp = static_cast<int32_T>(a_tmp[i1]);
            if ((loop_ub_tmp < 1) || (loop_ub_tmp > Q.size(0))) {
              emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, Q.size(0),
                                            &bd_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i2 = static_cast<int32_T>(a_tmp[i]);
            if ((i2 < 1) || (i2 > Q.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, Q.size(1), &cd_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            b_Q[i1 + b_Q.size(0) * i] =
                Q[(loop_ub_tmp + Q.size(0) * (i2 - 1)) - 1];
          }
        }
        b_v.set_size(&yf_emlrtRTEI, &sp, 1, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &fd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          b_v[i] = v[i1 - 1];
        }
        r.set_size(&ag_emlrtRTEI, &sp, 1, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &jd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r[i] = i1;
        }
        st.site = &kg_emlrtRSI;
        b_st.site = &pb_emlrtRSI;
        if (a_tmp.size(0) != temp_index.size(1)) {
          if ((a_tmp.size(0) == 1) || (temp_index.size(1) == 1)) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &c_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &b_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        b_st.site = &if_emlrtRSI;
        if ((a_tmp.size(0) == 0) || (temp_index.size(1) == 0)) {
          r1.set_size(&bg_emlrtRTEI, &b_st, temp_index.size(1));
          for (i = 0; i < b_loop_ub; i++) {
            r1[i] = 0.0;
          }
        } else {
          c_st.site = &jf_emlrtRSI;
          d_st.site = &kf_emlrtRSI;
          TRANSB1 = 'T';
          TRANSA1 = 'T';
          temp = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)a_tmp.size(0);
          n_t = (ptrdiff_t)1;
          k_t = (ptrdiff_t)a_tmp.size(0);
          lda_t = (ptrdiff_t)a_tmp.size(0);
          ldb_t = (ptrdiff_t)1;
          ldc_t = (ptrdiff_t)a_tmp.size(0);
          r1.set_size(&qe_emlrtRTEI, &d_st, temp_index.size(1));
          dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &temp, &(b_Q.data())[0],
                &lda_t, &b_v[0], &ldb_t, &beta1, &(r1.data())[0], &ldc_t);
        }
        b_loop_ub = r.size(1);
        if (r1.size(0) != r.size(1)) {
          emlrtSubAssignSizeCheck1dR2017a(r.size(1), r1.size(0), &bc_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out[r[i] - 1] = r1[i];
        }
        // check
      } else {
        int32_T iv[2];
        int32_T loop_ub_tmp;
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &lg_emlrtRSI;
        coder::internal::indexShapeCheck(st, v.size(0), iv);
        loop_ub_tmp = temp_index.size(1);
        for (i = 0; i < loop_ub_tmp; i++) {
          if (temp_index[i] !=
              static_cast<int32_T>(muDoubleScalarFloor(temp_index[i]))) {
            emlrtIntegerCheckR2012b(temp_index[i], &cb_emlrtDCI,
                                    (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &xc_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
        }
        r.set_size(&sf_emlrtRTEI, &sp, 1, temp_index.size(1));
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &ed_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r[i] = i1;
        }
        st.site = &lg_emlrtRSI;
        a_tmp.set_size(&tf_emlrtRTEI, &st, temp_index.size(1));
        for (i = 0; i < loop_ub_tmp; i++) {
          a_tmp[i] = temp_index[i];
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = static_cast<int32_T>(a_tmp[i]);
          if ((i1 < 1) || (i1 > Q.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q.size(0), &gd_emlrtBCI, &st);
          }
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = static_cast<int32_T>(a_tmp[i]);
          if ((i1 < 1) || (i1 > Q.size(1))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q.size(1), &id_emlrtBCI, &st);
          }
        }
        b_st.site = &pb_emlrtRSI;
        if (a_tmp.size(0) != temp_index.size(1)) {
          if ((a_tmp.size(0) == 1) || (temp_index.size(1) == 1)) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &c_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &b_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        b_Q.set_size(&uf_emlrtRTEI, &st, temp_index.size(1),
                     temp_index.size(1));
        b_v.set_size(&vf_emlrtRTEI, &st, 1, temp_index.size(1));
        for (i = 0; i < loop_ub_tmp; i++) {
          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            b_Q[i1 + b_Q.size(0) * i] =
                Q[(static_cast<int32_T>(a_tmp[i1]) +
                   Q.size(0) * (static_cast<int32_T>(a_tmp[i]) - 1)) -
                  1];
          }
          b_v[i] = v[static_cast<int32_T>(temp_index[i]) - 1];
        }
        b_st.site = &if_emlrtRSI;
        coder::internal::blas::mtimes(b_st, b_Q, b_v, a_tmp);
        b_loop_ub = r.size(1);
        if (a_tmp.size(0) != r.size(1)) {
          emlrtSubAssignSizeCheck1dR2017a(r.size(1), a_tmp.size(0),
                                          &cc_emlrtECI, (emlrtConstCTX)&sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out[r[i] - 1] = a_tmp[i];
        }
      }
      // update
      temp = d + 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void b_Q_v_unit(const emlrtStack &sp, const coder::array<real_T, 1U> &v,
                const coder::array<real_T, 2U> &Q, const real_T proj_index[22],
                coder::array<real_T, 1U> &v_out)
{
  coder::array<real_T, 2U> b_Q;
  coder::array<real_T, 2U> b_v;
  coder::array<real_T, 2U> temp_index;
  coder::array<real_T, 1U> a_tmp;
  coder::array<real_T, 1U> r1;
  coder::array<int32_T, 2U> r;
  emlrtStack b_st;
  emlrtStack st;
  real_T temp;
  int32_T i;
  int32_T loop_ub;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  loop_ub = v.size(0);
  v_out.set_size(&qf_emlrtRTEI, &sp, v.size(0));
  for (i = 0; i < loop_ub; i++) {
    v_out[i] = 0.0;
  }
  temp = 1.0;
  exitg1 = false;
  while ((!exitg1) && (temp <= v.size(0))) {
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &bb_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &wc_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i = (static_cast<int32_T>(temp) - 1) << 1;
    if (proj_index[i] == rtInf) {
      exitg1 = true;
    } else {
      real_T d;
      int32_T b_loop_ub;
      int32_T i1;
      st.site = &ig_emlrtRSI;
      b_st.site = &bc_emlrtRSI;
      d = proj_index[i];
      if (muDoubleScalarIsNaN(d)) {
        temp_index.set_size(&rf_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else if (d < temp) {
        temp_index.set_size(&rf_emlrtRTEI, &b_st, 1, 0);
      } else if (muDoubleScalarIsInf(d) && (temp == d)) {
        temp_index.set_size(&rf_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else {
        b_loop_ub = static_cast<int32_T>(d - temp);
        temp_index.set_size(&rf_emlrtRTEI, &b_st, 1, b_loop_ub + 1);
        for (i1 = 0; i1 <= b_loop_ub; i1++) {
          temp_index[i1] = temp + static_cast<real_T>(i1);
        }
      }
      if (proj_index[i + 1] == 1.0) {
        int32_T iv[2];
        int32_T loop_ub_tmp;
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &jg_emlrtRSI;
        coder::internal::indexShapeCheck(st, v.size(0), iv);
        b_loop_ub = temp_index.size(1);
        b_Q.set_size(&cg_emlrtRTEI, &sp, temp_index.size(1),
                     temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            int32_T i2;
            if (temp_index[i1] !=
                static_cast<int32_T>(muDoubleScalarFloor(temp_index[i1]))) {
              emlrtIntegerCheckR2012b(temp_index[i1], &db_emlrtDCI,
                                      (emlrtConstCTX)&sp);
            }
            loop_ub_tmp = static_cast<int32_T>(temp_index[i1]);
            if ((loop_ub_tmp < 1) || (loop_ub_tmp > Q.size(0))) {
              emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, Q.size(0),
                                            &yc_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i2 = static_cast<int32_T>(temp_index[i]);
            if ((i2 < 1) || (i2 > Q.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, Q.size(1), &ad_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            b_Q[i1 + b_Q.size(0) * i] =
                Q[(loop_ub_tmp + Q.size(0) * (i2 - 1)) - 1];
          }
        }
        st.site = &jg_emlrtRSI;
        coder::diag(st, b_Q, a_tmp);
        for (i = 0; i < b_loop_ub; i++) {
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &dd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
        }
        loop_ub_tmp = a_tmp.size(0);
        if ((a_tmp.size(0) != temp_index.size(1)) &&
            ((a_tmp.size(0) != 1) && (temp_index.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(a_tmp.size(0), temp_index.size(1),
                                      &yb_emlrtECI, (emlrtConstCTX)&sp);
        }
        r.set_size(&dg_emlrtRTEI, &sp, 1, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &hd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r[i] = i1;
        }
        if (a_tmp.size(0) == temp_index.size(1)) {
          r1.set_size(&eg_emlrtRTEI, &sp, a_tmp.size(0));
          for (i = 0; i < loop_ub_tmp; i++) {
            r1[i] = a_tmp[i] * v[static_cast<int32_T>(temp_index[i]) - 1];
          }
        } else {
          st.site = &jg_emlrtRSI;
          binary_expand_op_21(st, r1, a_tmp, v, temp_index);
        }
        b_loop_ub = r.size(1);
        if (r1.size(0) != r.size(1)) {
          emlrtSubAssignSizeCheck1dR2017a(r.size(1), r1.size(0), &ac_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out[r[i] - 1] = r1[i];
        }
        // check
      } else {
        int32_T iv[2];
        int32_T loop_ub_tmp;
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &lg_emlrtRSI;
        coder::internal::indexShapeCheck(st, v.size(0), iv);
        loop_ub_tmp = temp_index.size(1);
        for (i = 0; i < loop_ub_tmp; i++) {
          if (temp_index[i] !=
              static_cast<int32_T>(muDoubleScalarFloor(temp_index[i]))) {
            emlrtIntegerCheckR2012b(temp_index[i], &cb_emlrtDCI,
                                    (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &xc_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
        }
        r.set_size(&sf_emlrtRTEI, &sp, 1, temp_index.size(1));
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = static_cast<int32_T>(temp_index[i]);
          if ((i1 < 1) || (i1 > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &ed_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r[i] = i1;
        }
        st.site = &lg_emlrtRSI;
        a_tmp.set_size(&tf_emlrtRTEI, &st, temp_index.size(1));
        for (i = 0; i < loop_ub_tmp; i++) {
          a_tmp[i] = temp_index[i];
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = static_cast<int32_T>(a_tmp[i]);
          if ((i1 < 1) || (i1 > Q.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q.size(0), &gd_emlrtBCI, &st);
          }
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = static_cast<int32_T>(a_tmp[i]);
          if ((i1 < 1) || (i1 > Q.size(1))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q.size(1), &id_emlrtBCI, &st);
          }
        }
        b_st.site = &pb_emlrtRSI;
        if (a_tmp.size(0) != temp_index.size(1)) {
          if ((a_tmp.size(0) == 1) || (temp_index.size(1) == 1)) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &c_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &b_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        b_Q.set_size(&uf_emlrtRTEI, &st, temp_index.size(1),
                     temp_index.size(1));
        b_v.set_size(&vf_emlrtRTEI, &st, 1, temp_index.size(1));
        for (i = 0; i < loop_ub_tmp; i++) {
          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            b_Q[i1 + b_Q.size(0) * i] =
                Q[(static_cast<int32_T>(a_tmp[i1]) +
                   Q.size(0) * (static_cast<int32_T>(a_tmp[i]) - 1)) -
                  1];
          }
          b_v[i] = v[static_cast<int32_T>(temp_index[i]) - 1];
        }
        b_st.site = &if_emlrtRSI;
        coder::internal::blas::mtimes(b_st, b_Q, b_v, a_tmp);
        b_loop_ub = r.size(1);
        if (a_tmp.size(0) != r.size(1)) {
          emlrtSubAssignSizeCheck1dR2017a(r.size(1), a_tmp.size(0),
                                          &cc_emlrtECI, (emlrtConstCTX)&sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          v_out[r[i] - 1] = a_tmp[i];
        }
      }
      // update
      temp = d + 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void dev_g_Q_multi_vector(const emlrtStack &sp,
                          const coder::array<real_T, 3U> &Q,
                          const coder::array<real_T, 1U> &v,
                          const real_T proj_index_all[660], real_T nx,
                          real_T nu, coder::array<real_T, 1U> &out)
{
  coder::array<real_T, 2U> b_Q;
  coder::array<real_T, 2U> v_temp_index;
  coder::array<real_T, 1U> b_v;
  coder::array<real_T, 1U> r2;
  coder::array<int32_T, 2U> r1;
  emlrtStack st;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  // trans is a true or false. if trans = false we compute Q'v . otherwise Qv
  loop_ub = v.size(0);
  out.set_size(&y_emlrtRTEI, &sp, v.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    out[i] = 0.0;
  }
  loop_ub_tmp = Q.size(1);
  b_loop_ub = Q.size(0);
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    int32_T iv[2];
    int32_T c_loop_ub;
    int32_T scalarLB;
    if (b_i + 1 < 30) {
      real_T b_tmp;
      int32_T vectorUB;
      b_tmp = nx + nu;
      if (muDoubleScalarIsNaN(b_tmp)) {
        v_temp_index.set_size(&s_emlrtRTEI, &sp, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (b_tmp < 1.0) {
        v_temp_index.set_size(&s_emlrtRTEI, &sp, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&s_emlrtRTEI, &sp, 1,
                              static_cast<int32_T>(b_tmp - 1.0) + 1);
        c_loop_ub = static_cast<int32_T>(b_tmp - 1.0);
        for (int32_T i{0}; i <= c_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&u_emlrtRTEI, &sp, 1, v_temp_index.size(1));
      b_tmp *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      c_loop_ub = v_temp_index.size(1) - 1;
      scalarLB = (v_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i{0}; i <= vectorUB; i += 2) {
        __m128d r;
        r = _mm_loadu_pd(&v_temp_index[i]);
        _mm_storeu_pd(&v_temp_index[i], _mm_add_pd(_mm_set1_pd(b_tmp), r));
      }
      for (int32_T i{scalarLB}; i <= c_loop_ub; i++) {
        v_temp_index[i] = b_tmp + v_temp_index[i];
      }
    } else {
      real_T b_tmp;
      int32_T vectorUB;
      if (muDoubleScalarIsNaN(nx)) {
        v_temp_index.set_size(&s_emlrtRTEI, &sp, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (nx < 1.0) {
        v_temp_index.set_size(&s_emlrtRTEI, &sp, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&s_emlrtRTEI, &sp, 1,
                              static_cast<int32_T>(nx - 1.0) + 1);
        c_loop_ub = static_cast<int32_T>(nx - 1.0);
        for (int32_T i{0}; i <= c_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&t_emlrtRTEI, &sp, 1, v_temp_index.size(1));
      b_tmp = 29.0 * (nx + nu);
      c_loop_ub = v_temp_index.size(1) - 1;
      scalarLB = (v_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i{0}; i <= vectorUB; i += 2) {
        __m128d r;
        r = _mm_loadu_pd(&v_temp_index[i]);
        _mm_storeu_pd(&v_temp_index[i], _mm_add_pd(_mm_set1_pd(b_tmp), r));
      }
      for (int32_T i{scalarLB}; i <= c_loop_ub; i++) {
        v_temp_index[i] = b_tmp + v_temp_index[i];
      }
    }
    iv[0] = (*(int32_T(*)[2])v_temp_index.size())[0];
    iv[1] = (*(int32_T(*)[2])v_temp_index.size())[1];
    st.site = &wg_emlrtRSI;
    coder::internal::indexShapeCheck(st, v.size(0), iv);
    c_loop_ub = v_temp_index.size(1);
    for (int32_T i{0}; i < c_loop_ub; i++) {
      if (v_temp_index[i] !=
          static_cast<int32_T>(muDoubleScalarFloor(v_temp_index[i]))) {
        emlrtIntegerCheckR2012b(v_temp_index[i], &emlrtDCI, (emlrtConstCTX)&sp);
      }
      scalarLB = static_cast<int32_T>(v_temp_index[i]);
      if ((scalarLB < 1) || (scalarLB > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub, &b_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
    }
    r1.set_size(&v_emlrtRTEI, &sp, 1, v_temp_index.size(1));
    for (int32_T i{0}; i < c_loop_ub; i++) {
      scalarLB = static_cast<int32_T>(v_temp_index[i]);
      if ((scalarLB < 1) || (scalarLB > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub, &c_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      r1[i] = scalarLB;
    }
    b_v.set_size(&w_emlrtRTEI, &sp, v_temp_index.size(1));
    for (int32_T i{0}; i < c_loop_ub; i++) {
      b_v[i] = v[static_cast<int32_T>(v_temp_index[i]) - 1];
    }
    b_Q.set_size(&x_emlrtRTEI, &sp, Q.size(0), loop_ub_tmp);
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      for (scalarLB = 0; scalarLB < b_loop_ub; scalarLB++) {
        b_Q[scalarLB + b_Q.size(0) * i] =
            Q[(scalarLB + Q.size(0) * i) + Q.size(0) * Q.size(1) * b_i];
      }
    }
    st.site = &hg_emlrtRSI;
    b_Q_v_unit(st, b_v, b_Q, &proj_index_all[22 * b_i], r2);
    c_loop_ub = r1.size(1);
    if (r2.size(0) != r1.size(1)) {
      emlrtSubAssignSizeCheck1dR2017a(r1.size(1), r2.size(0), &b_emlrtECI,
                                      (emlrtConstCTX)&sp);
    }
    for (int32_T i{0}; i < c_loop_ub; i++) {
      out[r1[i] - 1] = r2[i];
    }
    // Specified! only for the LCvx case
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_g_Q_multi_vector.cpp)
