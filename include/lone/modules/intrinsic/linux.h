/* SPDX-License-Identifier: AGPL-3.0-or-later */

#ifndef LONE_MODULES_INTRINSIC_LINUX_HEADER
#define LONE_MODULES_INTRINSIC_LINUX_HEADER

#include <lone/definitions.h>
#include <lone/types.h>

/* ╭────────────────────────┨ LONE / MODULE / LINUX ┠───────────────────────╮
   │                                                                        │
   │    Linux system calls and process parameters.                          │
   │                                                                        │
   ╰────────────────────────────────────────────────────────────────────────╯ */

void lone_modules_intrinsic_linux_initialize(struct lone_lisp *lone, int argc, char **argv, char **envp, struct lone_auxiliary_vector *auxv);

LONE_PRIMITIVE(linux_system_call);

#endif /* LONE_MODULES_INTRINSIC_LINUX_HEADER */
