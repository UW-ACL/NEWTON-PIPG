//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// norm.cpp
//
// Code generation for function 'norm'
//

// Include files
#include "norm.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>

// Function Definitions
namespace coder {
real_T b_norm(const real_T x[616])
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  n_t = (ptrdiff_t)616;
  incx_t = (ptrdiff_t)1;
  return dnrm2(&n_t, (real_T *)&x[0], &incx_t);
}

real_T b_norm(const array<real_T, 1U> &x)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  real_T y;
  if (x.size(0) == 0) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)x.size(0);
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, &(((array<real_T, 1U> *)&x)->data())[0], &incx_t);
  }
  return y;
}

real_T c_norm(const real_T x[326])
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (int32_T k{0}; k < 326; k++) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muDoubleScalarSqrt(y);
}

real_T d_norm(const real_T x[290])
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (int32_T k{0}; k < 290; k++) {
    real_T absxk;
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }
  return scale * muDoubleScalarSqrt(y);
}

} // namespace coder

// End of code generation (norm.cpp)
