#define __INTRINSIC_ONLYSPECIAL
#define __INTRINSIC_SPECIAL__interlockedbittestandset /* Causes code generation in intrin-impl.h */

#include <intrin.h>

unsigned char InterlockedBitTestAndSet(__LONG32 volatile *, __LONG32) __attribute__((alias("_interlockedbittestandset")));
