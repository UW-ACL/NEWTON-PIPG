//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sparse.cpp
//
// Code generation for function 'sparse'
//

// Include files
#include "sparse.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
void sparse::minus(const real_T a[480], real_T s[480]) const
{
  int32_T idx;
  idx = colidx[0];
  for (int32_T row{0}; row < 480; row++) {
    if ((idx < colidx[1]) && (row + 1 == rowidx[idx - 1])) {
      s[row] = a[row] - d[idx - 1];
      idx++;
    } else {
      s[row] = a[row];
    }
  }
}

void sparse::plus(const real_T a[736], real_T s[736]) const
{
  int32_T idx;
  idx = colidx[0];
  for (int32_T row{0}; row < 736; row++) {
    if ((idx < colidx[1]) && (row + 1 == rowidx[idx - 1])) {
      s[row] = a[row] + d[idx - 1];
      idx++;
    } else {
      s[row] = a[row];
    }
  }
}

} // namespace coder

// End of code generation (sparse.cpp)
