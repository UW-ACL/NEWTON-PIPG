//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_HtZ_g.cpp
//
// Code generation for function 'dev_HtZ_g'
//

// Include files
#include "dev_HtZ_g.h"
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo vg_emlrtRSI{
    20,          // lineNo
    "dev_HtZ_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pathName
};

static emlrtECInfo hc_emlrtECI{
    -1,          // nDims
    20,          // lineNo
    5,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pName
};

static emlrtDCInfo lb_emlrtDCI{
    8,           // lineNo
    1,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo mb_emlrtDCI{
    8,           // lineNo
    1,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    4                                           // checkKind
};

static emlrtBCInfo td_emlrtBCI{
    1,           // iFirst
    290,         // iLast
    14,          // lineNo
    36,          // colNo
    "w",         // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo ud_emlrtBCI{
    1,           // iFirst
    290,         // iLast
    18,          // lineNo
    50,          // colNo
    "w",         // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo vd_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    14,          // lineNo
    9,           // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo wd_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    18,          // lineNo
    9,           // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo xd_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    20,          // lineNo
    34,          // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtDCInfo nb_emlrtDCI{
    20,          // lineNo
    34,          // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    1                                           // checkKind
};

static emlrtBCInfo yd_emlrtBCI{
    1,           // iFirst
    290,         // iLast
    20,          // lineNo
    57,          // colNo
    "w",         // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtDCInfo ob_emlrtDCI{
    20,          // lineNo
    57,          // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo pb_emlrtDCI{
    20,          // lineNo
    9,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    1                                           // checkKind
};

static emlrtBCInfo ae_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    20,          // lineNo
    9,           // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtRTEInfo og_emlrtRTEI{
    8,           // lineNo
    1,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pName
};

static emlrtRTEInfo pg_emlrtRTEI{
    12,          // lineNo
    28,          // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pName
};

static emlrtRTEInfo qg_emlrtRTEI{
    20,          // lineNo
    30,          // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pName
};

static emlrtRTEInfo rg_emlrtRTEI{
    20,          // lineNo
    55,          // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pName
};

static emlrtRTEInfo sg_emlrtRTEI{
    20,          // lineNo
    9,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pName
};

// Function Declarations
static void binary_expand_op_25(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const coder::array<real_T, 2U> &in2,
                                const coder::array<real_T, 2U> &in3);

// Function Definitions
static void binary_expand_op_25(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const coder::array<real_T, 2U> &in2,
                                const coder::array<real_T, 2U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(1) == 1) {
    loop_ub = in2.size(1);
  } else {
    loop_ub = in3.size(1);
  }
  in1.set_size(&qg_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(1) != 1);
  stride_1_0 = (in3.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] + in3[i * stride_1_0];
  }
}

void dev_HtZ_g(const emlrtStack &sp, const real_T A[3190], const real_T w[290],
               real_T ne, coder::array<real_T, 1U> &out)
{
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> r1;
  coder::array<real_T, 2U> temp_w_tmp;
  coder::array<real_T, 1U> r3;
  coder::array<int32_T, 2U> r2;
  emlrtStack st;
  real_T s;
  int32_T i;
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  // n_e stands for the amount of equaitons in A. The other definition are the
  // same.
  if (!(ne + 319.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ne + 319.0, &mb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  s = static_cast<int32_T>(muDoubleScalarFloor(ne + 319.0));
  if (ne + 319.0 != s) {
    emlrtIntegerCheckR2012b(ne + 319.0, &lb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  out.set_size(&og_emlrtRTEI, &sp, static_cast<int32_T>(ne + 319.0));
  if (ne + 319.0 != s) {
    emlrtIntegerCheckR2012b(ne + 319.0, &lb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  loop_ub = static_cast<int32_T>(ne + 319.0);
  for (i = 0; i < loop_ub; i++) {
    out[i] = 0.0;
  }
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    int16_T temp_index[10];
    int16_T i1;
    i1 = static_cast<int16_T>(10 * b_i + 1);
    for (i = 0; i < 10; i++) {
      temp_index[i] = static_cast<int16_T>(i + i1);
    }
    if (muDoubleScalarIsNaN(ne)) {
      temp_w_tmp.set_size(&pg_emlrtRTEI, &sp, 1, 1);
      temp_w_tmp[0] = rtNaN;
    } else if (ne < 1.0) {
      temp_w_tmp.set_size(&pg_emlrtRTEI, &sp, 1, 0);
    } else {
      temp_w_tmp.set_size(&pg_emlrtRTEI, &sp, 1,
                          static_cast<int32_T>(ne - 1.0) + 1);
      loop_ub = static_cast<int32_T>(ne - 1.0);
      for (i = 0; i <= loop_ub; i++) {
        temp_w_tmp[i] = static_cast<real_T>(i) + 1.0;
      }
    }
    if (b_i + 1 == 1) {
      real_T y[11];
      int32_T aoffset;
      for (i = 0; i < 10; i++) {
        aoffset = temp_index[i];
        if (aoffset > 290) {
          emlrtDynamicBoundsCheckR2012b(aoffset, 1, 290, &td_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      for (int32_T c_i{0}; c_i < 11; c_i++) {
        aoffset = c_i * 10;
        s = 0.0;
        for (loop_ub = 0; loop_ub < 10; loop_ub++) {
          s += A[aoffset + loop_ub] * w[temp_index[loop_ub] - 1];
        }
        y[c_i] = s;
      }
      for (i = 0; i < 11; i++) {
        if (i + 1 > out.size(0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, out.size(0), &vd_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        out[i] = y[i];
      }
    } else {
      int32_T iv[2];
      int32_T aoffset;
      int32_T c_i;
      if (b_i + 1 <= 29) {
        real_T y[11];
        for (i = 0; i < 10; i++) {
          aoffset = temp_index[i];
          if (aoffset > 290) {
            emlrtDynamicBoundsCheckR2012b(aoffset, 1, 290, &ud_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
        }
        for (c_i = 0; c_i < 11; c_i++) {
          aoffset = c_i * 10;
          s = 0.0;
          for (loop_ub = 0; loop_ub < 10; loop_ub++) {
            i = aoffset + loop_ub;
            s += A[(i % 10 + 10 * (i / 10)) + 110 * b_i] *
                 w[temp_index[loop_ub] - 1];
          }
          y[c_i] = s;
        }
        i = 11 * b_i + 1;
        for (aoffset = 0; aoffset < 11; aoffset++) {
          c_i = aoffset + i;
          if (c_i > out.size(0)) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out.size(0), &wd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          out[c_i - 1] = y[aoffset];
        }
      }
      iv[0] = (*(int32_T(*)[2])temp_w_tmp.size())[0];
      iv[1] = (*(int32_T(*)[2])temp_w_tmp.size())[1];
      st.site = &vg_emlrtRSI;
      coder::internal::indexShapeCheck(st, out.size(0), iv);
      loop_ub = temp_w_tmp.size(1);
      r.set_size(&qg_emlrtRTEI, &sp, 1, temp_w_tmp.size(1));
      i = 11 * b_i;
      for (aoffset = 0; aoffset < loop_ub; aoffset++) {
        s = static_cast<real_T>(i) + temp_w_tmp[aoffset];
        if (s != static_cast<int32_T>(s)) {
          emlrtIntegerCheckR2012b(s, &nb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(s) < 1) ||
            (static_cast<int32_T>(s) > out.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s), 1, out.size(0),
                                        &xd_emlrtBCI, (emlrtConstCTX)&sp);
        }
        r[aoffset] = out[static_cast<int32_T>(s) - 1];
      }
      r1.set_size(&rg_emlrtRTEI, &sp, 1, temp_w_tmp.size(1));
      aoffset = 10 * (b_i - 1);
      for (c_i = 0; c_i < loop_ub; c_i++) {
        s = static_cast<real_T>(aoffset) + temp_w_tmp[c_i];
        if (s != static_cast<int32_T>(s)) {
          emlrtIntegerCheckR2012b(s, &ob_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(s) < 1) || (static_cast<int32_T>(s) > 290)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s), 1, 290,
                                        &yd_emlrtBCI, (emlrtConstCTX)&sp);
        }
        r1[c_i] = w[static_cast<int32_T>(s) - 1];
      }
      if (muDoubleScalarIsNaN(ne)) {
        temp_w_tmp.set_size(&s_emlrtRTEI, &sp, 1, 1);
        temp_w_tmp[0] = rtNaN;
      } else if (ne < 1.0) {
        temp_w_tmp.set_size(&s_emlrtRTEI, &sp, 1, 0);
      } else {
        temp_w_tmp.set_size(&s_emlrtRTEI, &sp, 1,
                            static_cast<int32_T>(ne - 1.0) + 1);
        loop_ub = static_cast<int32_T>(ne - 1.0);
        for (aoffset = 0; aoffset <= loop_ub; aoffset++) {
          temp_w_tmp[aoffset] = static_cast<real_T>(aoffset) + 1.0;
        }
      }
      loop_ub = temp_w_tmp.size(1);
      r2.set_size(&sg_emlrtRTEI, &sp, 1, temp_w_tmp.size(1));
      for (aoffset = 0; aoffset < loop_ub; aoffset++) {
        s = static_cast<real_T>(i) + temp_w_tmp[aoffset];
        if (s != static_cast<int32_T>(s)) {
          emlrtIntegerCheckR2012b(s, &pb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(s) < 1) ||
            (static_cast<int32_T>(s) > out.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s), 1, out.size(0),
                                        &ae_emlrtBCI, (emlrtConstCTX)&sp);
        }
        r2[aoffset] = static_cast<int32_T>(s);
      }
      if (r.size(1) == r1.size(1)) {
        loop_ub = r.size(1);
        r3.set_size(&qg_emlrtRTEI, &sp, r.size(1));
        aoffset = (r.size(1) / 2) << 1;
        c_i = aoffset - 2;
        for (i = 0; i <= c_i; i += 2) {
          __m128d r4;
          __m128d r5;
          r4 = _mm_loadu_pd(&r[i]);
          r5 = _mm_loadu_pd(&r1[i]);
          _mm_storeu_pd(&r3[i], _mm_add_pd(r4, r5));
        }
        for (i = aoffset; i < loop_ub; i++) {
          r3[i] = r[i] + r1[i];
        }
      } else {
        st.site = &vg_emlrtRSI;
        binary_expand_op_25(st, r3, r, r1);
      }
      loop_ub = r2.size(1);
      if (r3.size(0) != r2.size(1)) {
        emlrtSubAssignSizeCheck1dR2017a(r2.size(1), r3.size(0), &hc_emlrtECI,
                                        (emlrtConstCTX)&sp);
      }
      for (i = 0; i < loop_ub; i++) {
        out[r2[i] - 1] = r3[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_HtZ_g.cpp)
