//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// timeKeeper.h
//
// Code generation for function 'timeKeeper'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
namespace internal {
namespace b_time {
namespace impl {
void timeKeeper(const emlrtStack &sp, const emlrtTimespec newTime,
                emlrtTimespec &savedTime);

real_T timeKeeper(const emlrtStack &sp, const emlrtTimespec &savedTime,
                  real_T &outTime_tv_nsec);

} // namespace impl
} // namespace b_time
} // namespace internal
} // namespace coder
void timeKeeper_init();

// End of code generation (timeKeeper.h)
