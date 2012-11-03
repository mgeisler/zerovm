/*
 * Copyright (c) 2011 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/*
 * NaCl Server Runtime time abstraction layer.
 * This is the host-OS-independent interface.
 */
#ifndef NATIVE_CLIENT_SRC_TRUSTED_PLATFORM_NACL_TIME_H_
#define NATIVE_CLIENT_SRC_TRUSTED_PLATFORM_NACL_TIME_H_

#include "src/platform/time.h"
#include "src/include/nacl_base.h"

EXTERN_C_BEGIN

/* NaClTimeState definition for Unix-like OSes */
struct NaClTimeState {
  uint64_t time_resolution_ns;
};

void NaClTimeInit(void);

void NaClTimeFini(void);

int NaClGetTimeOfDay(struct nacl_abi_timeval *tv);

/* internal / testing APIs */
struct NaClTimeState;  /* defined in platform-specific directory */

void NaClTimeInternalInit(struct NaClTimeState *);
void NaClTimeInternalFini(struct NaClTimeState *);

EXTERN_C_END

#endif  /* NATIVE_CLIENT_SRC_TRUSTED_PLATFORM_NACL_TIME_H_ */
