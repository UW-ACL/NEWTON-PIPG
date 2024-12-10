//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_compute_HPHt.cpp
//
// Code generation for function 'dev_compute_HPHt'
//

// Include files
#include "dev_compute_HPHt.h"
#include "dev_newtonxpipg_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo ic_emlrtRSI{
    12,                 // lineNo
    "dev_compute_HPHt", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pathName
};

static emlrtRSInfo jc_emlrtRSI{
    13,                 // lineNo
    "dev_compute_HPHt", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pathName
};

static emlrtRSInfo kc_emlrtRSI{
    21,                 // lineNo
    "dev_compute_HPHt", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pathName
};

static emlrtRSInfo lc_emlrtRSI{
    28,                 // lineNo
    "dev_compute_HPHt", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    51,                  // lineNo
    "reshapeSizeChecks", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" // pathName
};

static emlrtRSInfo nc_emlrtRSI{
    119,               // lineNo
    "computeDimsData", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" // pathName
};

static emlrtRSInfo oc_emlrtRSI{
    30,              // lineNo
    "diag_multiply", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\diag_multiply.m" // pathName
};

static emlrtMCInfo c_emlrtMCI{
    27,      // lineNo
    5,       // colNo
    "error", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\lang\\error.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    58,                   // lineNo
    23,                   // colNo
    "assertValidSizeArg", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" // pName
};

static emlrtRTEInfo m_emlrtRTEI{
    126,               // lineNo
    9,                 // colNo
    "computeDimsData", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" // pName
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    21,                 // lineNo
    17,                 // colNo
    "HPB",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    26,                 // lineNo
    26,                 // colNo
    "out",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    28,                 // lineNo
    26,                 // colNo
    "out",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    20,                 // lineNo
    18,                 // colNo
    "HPA",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtRTEInfo n_emlrtRTEI{
    81,                  // lineNo
    23,                  // colNo
    "reshapeSizeChecks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo o_emlrtRTEI{
    79,                  // lineNo
    23,                  // colNo
    "reshapeSizeChecks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    74,                  // lineNo
    13,                  // colNo
    "reshapeSizeChecks", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" // pName
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    31,                 // lineNo
    25,                 // colNo
    "out",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    31,                 // lineNo
    38,                 // colNo
    "HPA",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    28,                 // lineNo
    114,                // colNo
    "HPB",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    28,                 // lineNo
    73,                 // colNo
    "HPA",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    26,                 // lineNo
    129,                // colNo
    "P_diag",           // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    26,                 // lineNo
    114,                // colNo
    "HPB",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    26,                 // lineNo
    73,                 // colNo
    "HPA",              // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    21,                 // lineNo
    43,                 // colNo
    "P_diag",           // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    20,                 // lineNo
    44,                 // colNo
    "P_diag",           // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    13,                 // lineNo
    32,                 // colNo
    "P_diag",           // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    13,                 // lineNo
    29,                 // colNo
    "P_diag",           // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    12,                 // lineNo
    41,                 // colNo
    "P_diag",           // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    12,                 // lineNo
    20,                 // colNo
    "P_diag",           // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    17,                 // lineNo
    23,                 // colNo
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    1                                        // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    17,                 // lineNo
    23,                 // colNo
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    4                                        // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    20,                 // lineNo
    46,                 // colNo
    "P_diag",           // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    36,              // lineNo
    39,              // colNo
    "P",             // aName
    "diag_multiply", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\diag_multiply.m", // pName
    0                                     // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,                 // iFirst
    -1,                 // iLast
    26,                 // lineNo
    133,                // colNo
    "P_diag",           // aName
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m", // pName
    0                                        // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    12,         // lineNo
    28,         // colNo
    "P",        // aName
    "diag_sum", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\diag_sum.m", // pName
    0                                // checkKind
};

static emlrtRTEInfo jc_emlrtRTEI{
    13,                 // lineNo
    22,                 // colNo
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pName
};

static emlrtRTEInfo kc_emlrtRTEI{
    14,                 // lineNo
    5,                  // colNo
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pName
};

static emlrtRTEInfo lc_emlrtRTEI{
    17,                 // lineNo
    11,                 // colNo
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pName
};

static emlrtRTEInfo mc_emlrtRTEI{
    18,                 // lineNo
    5,                  // colNo
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pName
};

static emlrtRTEInfo nc_emlrtRTEI{
    21,                 // lineNo
    36,                 // colNo
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pName
};

static emlrtRTEInfo oc_emlrtRTEI{
    23,                 // lineNo
    5,                  // colNo
    "dev_compute_HPHt", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_compute_HPHt.m" // pName
};

static emlrtRTEInfo
    od_emlrtRTEI{
        19,            // lineNo
        9,             // colNo
        "indexDivide", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\indexDivide.m" // pName
    };

static emlrtRSInfo id_emlrtRSI{
    27,      // lineNo
    "error", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\lang\\error.m" // pathName
};

// Function Declarations
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location);

// Function Definitions
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, nullptr, 1, &pArray, "error",
                        true, location);
}

void dev_compute_HPHt(const emlrtStack *sp, real_T A[1024], real_T B[512],
                      const coder::array<real_T, 1U> &P_diag,
                      coder::array<real_T, 4U> &out)
{
  static const int32_T iv[2]{1, 77};
  static const char_T varargin_1[77]{
      'T', 'h', 'e', ' ', 'd', 'i', 'a', 'g', 'o', 'n', 'a', 'l', ' ',
      'm', 'a', 't', 'r', 'i', 'x', ' ', 'a', 'n', 'd', ' ', 'A', ' ',
      'm', 'u', 's', 't', ' ', 'h', 'a', 'v', 'e', ' ', 'c', 'o', 'm',
      'p', 'a', 't', 'i', 'b', 'l', 'e', ' ', 'd', 'i', 'm', 'e', 'n',
      's', 'i', 'o', 'n', 's', ' ', 'f', 'o', 'r', ' ', 'm', 'u', 'l',
      't', 'i', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', '.'};
  coder::array<real_T, 3U> HPA;
  coder::array<real_T, 3U> HPB;
  coder::array<real_T, 2U> P;
  coder::array<real_T, 2U> c_P_diag;
  coder::array<real_T, 1U> b_P_diag;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T C[1024];
  real_T b_B[1024];
  real_T T;
  real_T d;
  int32_T emptyDimValue[2];
  int32_T b_emptyDimValue;
  int32_T b_loop_ub;
  int32_T d_P_diag;
  int32_T emptyDimValue_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T loop_ub;
  int32_T maxdimlen;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  we assume that H is [-A, -B, I] if not, change the sign of A and B
  //  the out matrix is a 4 dimensional matrix. t is for the t th row
  //  the third index is for the location. 1 for diag and 2 for off-diag
  for (i = 0; i < 1024; i++) {
    A[i] = -A[i];
  }
  // we use -A
  for (i = 0; i < 512; i++) {
    B[i] = -B[i];
  }
  // we use -B
  T = (static_cast<real_T>(P_diag.size(0)) - 32.0) / 48.0;
  // T rows in totald
  // P will have the following shape(Pa, Pb.....Pa, pb, pa)
  //  Check if T is an integer
  if (P_diag.size(0) - 31 > P_diag.size(0)) {
    i = 0;
    i1 = 0;
  } else {
    if ((P_diag.size(0) - 31 < 1) || (P_diag.size(0) - 31 > P_diag.size(0))) {
      emlrtDynamicBoundsCheckR2012b(P_diag.size(0) - 31, 1, P_diag.size(0),
                                    &qb_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = P_diag.size(0) - 32;
    if (P_diag.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(P_diag.size(0), 1, P_diag.size(0),
                                    &pb_emlrtBCI, (emlrtConstCTX)sp);
    }
    i1 = P_diag.size(0);
  }
  emptyDimValue[0] = 1;
  emptyDimValue_tmp = i1 - i;
  emptyDimValue[1] = emptyDimValue_tmp;
  st.site = &ic_emlrtRSI;
  coder::internal::indexShapeCheck(&st, P_diag.size(0), emptyDimValue);
  if (P_diag.size(0) - 32 < 1) {
    loop_ub = 0;
  } else {
    if (P_diag.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, P_diag.size(0), &ob_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((P_diag.size(0) - 32 < 1) || (P_diag.size(0) - 32 > P_diag.size(0))) {
      emlrtDynamicBoundsCheckR2012b(P_diag.size(0) - 32, 1, P_diag.size(0),
                                    &nb_emlrtBCI, (emlrtConstCTX)sp);
    }
    loop_ub = P_diag.size(0) - 32;
  }
  emptyDimValue[0] = 1;
  emptyDimValue[1] = loop_ub;
  st.site = &jc_emlrtRSI;
  coder::internal::indexShapeCheck(&st, P_diag.size(0), emptyDimValue);
  st.site = &jc_emlrtRSI;
  b_st.site = &mc_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  d = muDoubleScalarFloor(T);
  if (T != d) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &l_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (static_cast<int32_T>(T) > 0) {
    if (static_cast<uint32_T>(static_cast<int32_T>(T)) == 0U) {
      emlrtDivisionByZeroErrorR2012b(&od_emlrtRTEI, &b_st);
    } else {
      b_emptyDimValue =
          static_cast<int32_T>(static_cast<uint32_T>(loop_ub) /
                               static_cast<uint32_T>(static_cast<int32_T>(T)));
    }
    if (b_emptyDimValue > loop_ub) {
      emlrtErrorWithMessageIdR2018a(&b_st, &m_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
  } else {
    b_emptyDimValue = 0;
  }
  maxdimlen = loop_ub;
  if (loop_ub < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(loop_ub, maxdimlen);
  if (b_emptyDimValue > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &p_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (static_cast<int32_T>(T) > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &p_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (static_cast<int32_T>(T) < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if (b_emptyDimValue * static_cast<int32_T>(T) != loop_ub) {
    emlrtErrorWithMessageIdR2018a(
        &st, &n_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b_P_diag.set_size(&jc_emlrtRTEI, sp, loop_ub);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_P_diag[i1] = P_diag[i1];
  }
  c_P_diag.set_size(&kc_emlrtRTEI, sp, static_cast<int32_T>(T),
                    b_emptyDimValue);
  for (i1 = 0; i1 < b_emptyDimValue; i1++) {
    loop_ub = static_cast<int32_T>(T);
    for (i2 = 0; i2 < loop_ub; i2++) {
      c_P_diag[i2 + c_P_diag.size(0) * i1] =
          b_P_diag[i1 + b_emptyDimValue * i2];
    }
  }
  //  I want to make sure that each row is the consequtive vector.
  // disp(P)
  HPA.set_size(&lc_emlrtRTEI, sp, 32, 32, HPA.size(2));
  if (!(T >= 0.0)) {
    emlrtNonNegativeCheckR2012b(T, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (T != d) {
    emlrtIntegerCheckR2012b(T, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  HPA.set_size(&lc_emlrtRTEI, sp, HPA.size(0), HPA.size(1),
               static_cast<int32_T>(T));
  HPB.set_size(&mc_emlrtRTEI, sp, 32, 16, static_cast<int32_T>(T));
  loop_ub = static_cast<int32_T>(T) << 9;
  for (i1 = 0; i1 < loop_ub; i1++) {
    HPB[i1] = 0.0;
  }
  i1 = static_cast<int32_T>(T);
  if (static_cast<int32_T>(T) - 1 >= 0) {
    d_P_diag = c_P_diag.size(1);
    if (c_P_diag.size(1) < 33) {
      i3 = 0;
      i4 = 0;
    } else {
      i3 = 32;
      i4 = c_P_diag.size(1);
    }
    b_loop_ub = i4 - i3;
  }
  for (int32_T t{0}; t < i1; t++) {
    if (t + 1 > c_P_diag.size(0)) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, c_P_diag.size(0), &mb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (i2 = 0; i2 < 32; i2++) {
      if (i2 + 1 > d_P_diag) {
        emlrtDynamicBoundsCheckR2012b(i2 + 1, 1, d_P_diag, &rb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
    //  Get the size of the matrices
    //  Set default value for axis if missing
    //  Initialize the resulting matrix C
    //  Calculate the product based on the value of axis
    //  Check if P and A are compatible for multiplication
    //  Calculate the product of the matrix A and the diagonal matrix P
    for (loop_ub = 0; loop_ub < 32; loop_ub++) {
      for (b_emptyDimValue = 0; b_emptyDimValue < 32; b_emptyDimValue++) {
        if (t + 1 > HPA.size(2)) {
          emlrtDynamicBoundsCheckR2012b(t + 1, 1, HPA.size(2), &db_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        HPA[(loop_ub + 32 * b_emptyDimValue) + 1024 * t] =
            A[loop_ub + (b_emptyDimValue << 5)] *
            c_P_diag[t + c_P_diag.size(0) * b_emptyDimValue];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    //  A *P
    st.site = &kc_emlrtRSI;
    if (t + 1 > c_P_diag.size(0)) {
      emlrtDynamicBoundsCheckR2012b(t + 1, 1, c_P_diag.size(0), &lb_emlrtBCI,
                                    &st);
    }
    i2 = i4 - i3;
    P.set_size(&nc_emlrtRTEI, &st, 1, i2);
    for (maxdimlen = 0; maxdimlen < b_loop_ub; maxdimlen++) {
      P[maxdimlen] = c_P_diag[t + c_P_diag.size(0) * (i3 + maxdimlen)];
    }
    //  Get the size of the matrices
    //  Set default value for axis if missing
    //  Initialize the resulting matrix C
    //  Calculate the product based on the value of axis
    //  Check if P and A are compatible for multiplication
    if (i2 != 16) {
      b_st.site = &oc_emlrtRSI;
      y = nullptr;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 77, m, &varargin_1[0]);
      emlrtAssign(&y, m);
      c_st.site = &id_emlrtRSI;
      b_error(&c_st, y, &c_emlrtMCI);
    }
    //  Calculate the product of the matrix A and the diagonal matrix P
    for (loop_ub = 0; loop_ub < 32; loop_ub++) {
      for (b_emptyDimValue = 0; b_emptyDimValue < 16; b_emptyDimValue++) {
        if (t + 1 > HPB.size(2)) {
          emlrtDynamicBoundsCheckR2012b(t + 1, 1, HPB.size(2), &ab_emlrtBCI,
                                        &st);
        }
        if (b_emptyDimValue + 1 > i2) {
          emlrtDynamicBoundsCheckR2012b(b_emptyDimValue + 1, 1, i2,
                                        &sb_emlrtBCI, &st);
        }
        HPB[(loop_ub + 32 * b_emptyDimValue) + 512 * t] =
            B[loop_ub + (b_emptyDimValue << 5)] * P[b_emptyDimValue];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
    // B* p
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  out.set_size(&oc_emlrtRTEI, sp, 32, 32, 2, static_cast<int32_T>(T));
  loop_ub = static_cast<int32_T>(T) << 11;
  for (i1 = 0; i1 < loop_ub; i1++) {
    out[i1] = 0.0;
  }
  i1 = static_cast<int32_T>(T);
  for (int32_T t{0}; t < i1; t++) {
    if (t + 1 < static_cast<int32_T>(T)) {
      real_T c_B[512];
      if (t + 1 > HPA.size(2)) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, HPA.size(2), &kb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i2 = 0; i2 < 32; i2++) {
        for (i3 = 0; i3 < 32; i3++) {
          b_B[i3 + (i2 << 5)] = A[i2 + (i3 << 5)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&C[0], 0, 1024U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (loop_ub = 0; loop_ub < 32; loop_ub++) {
        for (b_emptyDimValue = 0; b_emptyDimValue <= loop_ub;
             b_emptyDimValue++) {
          i2 = b_emptyDimValue << 5;
          i3 = loop_ub + i2;
          d = C[i3];
          for (maxdimlen = 0; maxdimlen < 32; maxdimlen++) {
            d += HPA[(loop_ub + 32 * maxdimlen) + 1024 * t] *
                 b_B[maxdimlen + i2];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          C[i3] = d;
          //  Use the computed value for the symmetric element
          C[b_emptyDimValue + (loop_ub << 5)] = C[i3];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      if (t + 1 > HPB.size(2)) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, HPB.size(2), &jb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i2 = 0; i2 < 32; i2++) {
        for (i3 = 0; i3 < 16; i3++) {
          c_B[i3 + (i2 << 4)] = B[i2 + (i3 << 5)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&b_B[0], 0, 1024U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (loop_ub = 0; loop_ub < 32; loop_ub++) {
        for (b_emptyDimValue = 0; b_emptyDimValue <= loop_ub;
             b_emptyDimValue++) {
          i2 = loop_ub + (b_emptyDimValue << 5);
          d = b_B[i2];
          for (maxdimlen = 0; maxdimlen < 16; maxdimlen++) {
            d += HPB[(loop_ub + 32 * maxdimlen) + 512 * t] *
                 c_B[maxdimlen + (b_emptyDimValue << 4)];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          b_B[i2] = d;
          //  Use the computed value for the symmetric element
          b_B[b_emptyDimValue + (loop_ub << 5)] = b_B[i2];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      if (t + 1 > out.size(3)) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, out.size(3), &bb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i2 = 0; i2 < 32; i2++) {
        for (i3 = 0; i3 < 32; i3++) {
          maxdimlen = i3 + (i2 << 5);
          out[(i3 + 32 * i2) + 2048 * t] = C[maxdimlen] + b_B[maxdimlen];
        }
      }
      if (t + 2 > c_P_diag.size(0)) {
        emlrtDynamicBoundsCheckR2012b(t + 2, 1, c_P_diag.size(0), &ib_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i2 = 0; i2 < 32; i2++) {
        if (i2 + 1 > c_P_diag.size(1)) {
          emlrtDynamicBoundsCheckR2012b(i2 + 1, 1, c_P_diag.size(1),
                                        &tb_emlrtBCI, (emlrtConstCTX)sp);
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      //  Calculate the product of the diagonal matrix P and matrix A
      for (loop_ub = 0; loop_ub < 32; loop_ub++) {
        if (t + 1 > out.size(3)) {
          emlrtDynamicBoundsCheckR2012b(t + 1, 1, out.size(3), &bb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        out[(loop_ub + 32 * loop_ub) + 2048 * t] =
            c_P_diag[(t + c_P_diag.size(0) * loop_ub) + 1] +
            out[(loop_ub + 32 * loop_ub) + 2048 * t];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      // didn't use symmetry
    } else {
      real_T c_B[512];
      st.site = &lc_emlrtRSI;
      if (t + 1 > HPA.size(2)) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, HPA.size(2), &hb_emlrtBCI, &st);
      }
      for (i2 = 0; i2 < 32; i2++) {
        for (i3 = 0; i3 < 32; i3++) {
          b_B[i3 + (i2 << 5)] = A[i2 + (i3 << 5)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&C[0], 0, 1024U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (loop_ub = 0; loop_ub < 32; loop_ub++) {
        for (b_emptyDimValue = 0; b_emptyDimValue <= loop_ub;
             b_emptyDimValue++) {
          i2 = b_emptyDimValue << 5;
          i3 = loop_ub + i2;
          d = C[i3];
          for (maxdimlen = 0; maxdimlen < 32; maxdimlen++) {
            d += HPA[(loop_ub + 32 * maxdimlen) + 1024 * t] *
                 b_B[maxdimlen + i2];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          C[i3] = d;
          //  Use the computed value for the symmetric element
          C[b_emptyDimValue + (loop_ub << 5)] = C[i3];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      if (t + 1 > HPB.size(2)) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, HPB.size(2), &gb_emlrtBCI, &st);
      }
      for (i2 = 0; i2 < 32; i2++) {
        for (i3 = 0; i3 < 16; i3++) {
          c_B[i3 + (i2 << 4)] = B[i2 + (i3 << 5)];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      std::memset(&b_B[0], 0, 1024U * sizeof(real_T));
      //  Calculate the product A * B, leveraging its symmetric property
      for (loop_ub = 0; loop_ub < 32; loop_ub++) {
        for (b_emptyDimValue = 0; b_emptyDimValue <= loop_ub;
             b_emptyDimValue++) {
          i2 = loop_ub + (b_emptyDimValue << 5);
          d = b_B[i2];
          for (maxdimlen = 0; maxdimlen < 16; maxdimlen++) {
            d += HPB[(loop_ub + 32 * maxdimlen) + 512 * t] *
                 c_B[maxdimlen + (b_emptyDimValue << 4)];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          b_B[i2] = d;
          //  Use the computed value for the symmetric element
          b_B[b_emptyDimValue + (loop_ub << 5)] = b_B[i2];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      if (t + 1 > out.size(3)) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, out.size(3), &cb_emlrtBCI, &st);
      }
      for (i2 = 0; i2 < 32; i2++) {
        for (i3 = 0; i3 < 32; i3++) {
          maxdimlen = i3 + (i2 << 5);
          out[(i3 + 32 * i2) + 2048 * t] = C[maxdimlen] + b_B[maxdimlen];
        }
      }
      //  Get the size of the matrices
      //  Initialize the resulting matrix C
      //  Calculate the product of the diagonal matrix P and matrix A
      for (loop_ub = 0; loop_ub < 32; loop_ub++) {
        if (t + 1 > out.size(3)) {
          emlrtDynamicBoundsCheckR2012b(t + 1, 1, out.size(3), &cb_emlrtBCI,
                                        &st);
        }
        if (loop_ub + 1 > emptyDimValue_tmp) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, emptyDimValue_tmp,
                                        &ub_emlrtBCI, &st);
        }
        out[(loop_ub + 32 * loop_ub) + 2048 * t] =
            P_diag[i + loop_ub] + out[(loop_ub + 32 * loop_ub) + 2048 * t];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      //  I don't want diag!!!
    }
    if (t + 1 > 1) {
      if (t + 1 > HPA.size(2)) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, HPA.size(2), &fb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (t + 1 > out.size(3)) {
        emlrtDynamicBoundsCheckR2012b(t + 1, 1, out.size(3), &eb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i2 = 0; i2 < 32; i2++) {
        for (i3 = 0; i3 < 32; i3++) {
          out[((i3 + 32 * i2) + 2048 * t) + 1024] =
              HPA[(i3 + 32 * i2) + 1024 * t];
        }
      }
      // don't need this
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //      HPA(:,:,1) = zeros(size(HPA(:,:,1)));
  //      out(:,:,2,:) = HPA;%This will add 0.003ms to the cost.
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (dev_compute_HPHt.cpp)
