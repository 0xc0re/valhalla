#ifndef __VAS_TYPES_H__
#define __VAS_TYPES_H__

#include <v0/types.h>
typedef v0adr  vasmemadr;
typedef v0reg  vasword;
typedef v0ureg vasuword;

struct readbuf {
    void *data;
    char *cur;
    char *lim;
};

#endif /* __VAS_TYPES_H__ */

