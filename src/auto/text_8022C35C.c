// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void *dtor_8022C35C(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    if (arg0 != (void *)0) {
        u32 count = *(u32 *)((char *)arg0 + 0x10);
        u32 capacity = *(u32 *)((char *)arg0 + 0x8);
        if (count < capacity) {
            u32 *dtorPtr = (u32 *)((char *)arg0 + 0xC);
            if (*dtorPtr != 0) {
                u32 elemSize = *(u32 *)((char *)arg0 + 0x4);
                void *base = *(void **)arg0;
                void *r31 = (char *)base + elemSize * count;
                while (1) {
                    elemSize = *(u32 *)((char *)arg0 + 0x4);
                    r31 = (char *)r31 - elemSize;
                    ((void (*)(void *, s32))(*(u32 *)((char *)arg0 + 0xC)))(r31, -1);
                    *(u32 *)((char *)arg0 + 0x10) = *(u32 *)((char *)arg0 + 0x10) - 1;
                    if (*(u32 *)((char *)arg0 + 0x10) == 0) {
                        break;
                    }
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}
