#ifndef __V0_CONF_H__
#define __V0_CONF_H__

//#define V0_DEBUG_TABS
#define V0_PRINT_XCPT
#define V0_DEBUG_TABS

//#include <valhalla/param.h>

#define V0_CACHELINE_SIZE   32 // cacheline size
#define V0_CACHESTRIDE_SIZE 128 // cache fetch size
#define V0_WORD_SIZE        4
#define V0_MAX_INSTS        256
#define V0_HASH_SIZE        V0_MAX_INSTS
#define V0_MAX_IOPORTS      256 // must fit in val-field of struct v0op
#define V0_PAGE_SIZE        1024
#define _MEGABYTE           (1024U * 1024U)
#define V0_TEXT_ADR         V0_PAGE_SIZE
#define V0_MEM_SIZE         (8 * _MEGABYTE)
#define V0_FB_ADR           0xe0000000 // 3.5 gigabytes
#define V0_FB_WIDTH         640
#define V0_FB_HEIGHT        360
#if defined(V0THR)
#define V0_THR_STK_SIZE     V0_PAGE_SIZE
#define V0_NTHR             16
#endif

#endif /* __V0_CONF_H__ */

