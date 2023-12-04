/* SPDX-License-Identifier: AGPL-3.0-or-later */

#ifndef LONE_VALUE_BYTES_HEADER
#define LONE_VALUE_BYTES_HEADER

#include <lone/types.h>

/* ╭────────────────────────────────────────────────────────────────────────╮
   │                                                                        │
   │    Lone bytes values are initialized with a pointer to a memory        │
   │    block of known size. It can take ownership of the block             │
   │    through the transfer functions or it can make a copy of it          │
   │    via the create functions.                                           │
   │                                                                        │
   │    Transferring memory blocks allows control over deallocation.        │
   │    Disabling deallocation on garbage collection allows pointing to     │
   │    data such as statically allocated buffers and C string literals.    │
   │                                                                        │
   │    Copies will automatically include a hidden trailing null            │
   │    byte to ease compatibility with code expecting C strings.           │
   │    It's impossible to escape from them since system calls use them.    │
   │    Transferred buffers should also contain that null byte              │
   │    but the lone bytes type currently has no way to enforce this.       │
   │                                                                        │
   ╰────────────────────────────────────────────────────────────────────────╯ */

struct lone_value *lone_bytes_transfer(struct lone_lisp *lone, unsigned char *pointer, size_t count, bool should_deallocate);
struct lone_value *lone_bytes_transfer_bytes(struct lone_lisp *lone, struct lone_bytes bytes, bool should_deallocate);
struct lone_value *lone_bytes_copy(struct lone_lisp *lone, unsigned char *pointer, size_t count);

#endif /* LONE_VALUE_BYTES_HEADER */
