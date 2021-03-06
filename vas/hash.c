#include <stdint.h>

/* the following two snippets were posted on stackoverflow by Thomas Mueller */

uint32_t
tmhash32(unsigned long u)
{
    u = ((u >> 16) ^ u) * 0x45d9f3b;
    u = ((u >> 16) ^ u) * 0x45d9f3b;
    u = (u >> 16) ^ u;

    return u;
}

uint64_t
tmhash64(uint64_t u)
{
    u = (u ^ (u >> 30)) * UINT64_C(0xbf58476d1ce4e5b9);
    u = (u ^ (u >> 27)) * UINT64_C(0x94d049bb133111eb);
    u = u ^ (u >> 31);

    return u;
}

