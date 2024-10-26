/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#include <math.h>
#include <errno.h>

long double remainderl(long double x, long double y)
{
#if defined(__arm__) || defined(_ARM_) || defined(__aarch64__) || defined(_ARM64_)
  return remainder(x, y);
#else
#error Not supported on your platform yet
#endif
}
