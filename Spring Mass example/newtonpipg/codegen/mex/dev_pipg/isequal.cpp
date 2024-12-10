//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// isequal.cpp
//
// Code generation for function 'isequal'
//

// Include files
#include "isequal.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
boolean_T isequal(const ::coder::array<real_T, 1U> &varargin_1,
                  const ::coder::array<real_T, 1U> &varargin_2)
{
  boolean_T p;
  p = (varargin_1.size(0) == varargin_2.size(0));
  if (p && (varargin_1.size(0) != 0) && (varargin_2.size(0) != 0)) {
    int32_T k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_2.size(0) - 1)) {
      if (!(varargin_1[k] == varargin_2[k])) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return p;
}

} // namespace coder

// End of code generation (isequal.cpp)
