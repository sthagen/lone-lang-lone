#ifndef LONE_DEFINITIONS_HEADER
#define LONE_DEFINITIONS_HEADER

#include <asm/bitsperlong.h>

/* ╭────────────────────────────────────────────────────────────────────────╮
   │                                                                        │
   │                                      bits = 32    |    bits = 64       │
   │    digits = ceil(bits * log10(2)) =  10           |    20              │
   │                                                                        │
   ╰────────────────────────────────────────────────────────────────────────╯ */
#if __BITS_PER_LONG == 64
	#define DECIMAL_DIGITS_PER_LONG 20
#elif __BITS_PER_LONG == 32
	#define DECIMAL_DIGITS_PER_LONG 10
#else
	#error "Unsupported architecture"
#endif

#ifndef LONE_BUFFER_SIZE
	#define LONE_BUFFER_SIZE 4096
#endif

#ifndef LONE_MEMORY_SIZE
	#define LONE_MEMORY_SIZE (1024 * 1024)
#endif

#ifndef LONE_ALIGNMENT
	#define LONE_ALIGNMENT 16
#endif

#define LONE_PRIMITIVE(name)                  \
struct lone_value *lone_primitive_ ## name    \
(                                             \
	struct lone_lisp *lone,               \
	struct lone_value *module,            \
	struct lone_value *environment,       \
	struct lone_value *arguments,         \
	struct lone_value *closure            \
)

#endif /* LONE_DEFINITIONS_HEADER */
