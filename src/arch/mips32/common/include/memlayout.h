#ifndef __ARCH_MIPS32_COMMON_INCLUDE_MEMLAYOUT__
#define __ARCH_MIPS32_COMMON_INCLUDE_MEMLAYOUT__


/*
 * Segment
 */
#define SEG_USER_BASE   0x0
#define SEG_LOW_CACHED  0x8000000
#define SEG_LOW_DIRECT  0xa0000000
#define SEG_KERNEL      0xc0000000


#define PHYS_MEM_SIZE   0x10000000

#endif
