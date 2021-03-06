/*
 * This file and its contents are supplied under the terms of the
 * Common Development and Distribution License ("CDDL"), version 1.0.
 * You may only use this file in accordance with the terms of version
 * 1.0 of the CDDL.
 *
 * A full copy of the text of the CDDL should have accompanied this
 * source.  A copy of the CDDL is also available via the Internet at
 * http://www.illumos.org/license/CDDL.
 */

/*
 * Copyright 2017 Joyent, Inc.
 */

#ifndef _COMPAT_FREEBSD_AMD64_MACHINE_CPU_H
#define	_COMPAT_FREEBSD_AMD64_MACHINE_CPU_H

#include <sys/cpu.h>

#define	cpu_spinwait()	SMT_PAUSE()

#endif /* _COMPAT_FREEBSD_AMD64_MACHINE_CPU_H */
