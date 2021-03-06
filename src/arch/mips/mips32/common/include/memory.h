#ifndef __ARCH_MIPS32_COMMON_INCLUDE_MEMORY__
#define __ARCH_MIPS32_COMMON_INCLUDE_MEMORY__


#include "common/include/memlayout.h"


#ifndef PAGE_SIZE
#define PAGE_SIZE   4096
#endif

#ifndef PAGE_BITS
#define PAGE_BITS   12
#endif

#ifndef PAGE_ENTRY_COUNT
#define PAGE_ENTRY_COUNT    1024
#endif

#ifndef PAGE_LEVELS
#define PAGE_LEVELS 2
#endif

#ifndef ALIGN_MIN
#define ALIGN_MIN   1
#endif

#ifndef ALIGN_MAX
#define ALIGN_MAX   64
#endif

#ifndef ALIGN_DEFAULT
#define ALIGN_DEFAULT   4
#endif


/*
 * MIPS page mask
 */
#define KERNEL_PAGE_MASK        0xffff
#define KERNEL_PAGE_MASK_EX     0x3

#define USER_PAGE_MASK          0
#define USER_PAGE_MASK_EX       0x3

#define TLB_PFN_SHIFT_BITS      12
#define TLB_VPN2_SHIFT_BITS     13


/*
 * Addr <--> PFN
 */
#ifndef PFN_TO_ADDR
#define PFN_TO_ADDR(pfn)        ((pfn) << 12)
#endif

#ifndef ADDR_TO_PFN
#define ADDR_TO_PFN(addr)       ((addr) >> 12)
#endif

/*
 * Page table entry
 */
#ifndef GET_PDE_INDEX
#define GET_PDE_INDEX(addr)     ((addr) >> 22)
#endif

#ifndef GET_PTE_INDEX
#define GET_PTE_INDEX(addr)     (((addr) << 10) >> 22)
#endif

#ifndef GET_PAGE_OFFSET
#define GET_PAGE_OFFSET(addr)   (((addr) << 20) >> 20)
#endif

/*
 * Physical addr <--> HAL/Kernel code addr (KCODE)
 */
#ifndef PHYS_TO_KCODE
#define PHYS_TO_KCODE(addr)     ((addr) | SEG_LOW_CACHED)
#endif

#ifndef KCODE_TO_PHYS
#define KCODE_TO_PHYS(addr)     ((addr) & ~SEG_LOW_CACHED)
#endif


#endif
