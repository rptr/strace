/*
 * Copyright (c) 2016-2018 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include <asm/unistd.h>

#ifdef __NR_setuid32

# define SYSCALL_NR	__NR_setuid32
# define SYSCALL_NAME	"setuid32"
# define UGID_TYPE	int
# define GETUGID	geteuid()
# define CHECK_OVERFLOWUGID(arg)
# include "setugid.c"

#else

SKIP_MAIN_UNDEFINED("__NR_setuid32")

#endif
