#ifndef _LINUX_EARLY_DEBUG_H
#define _LINUX_EARLY_DEBUG_H

#define DBG_HVC_PRINT	1

#ifndef __ASSEMBLY__
extern void kernel_dbg_print(uint64_t, uint64_t, uint64_t);
#endif /* __ASSEMBLY__ */

#endif /* _LINUX_EARLY_DEBUG_H */
