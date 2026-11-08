/* Functions from 0x8022C518 to 0x8022CCF8, found by decomp-toolkit. */
#include "common.h"

u32 fn_8022C518(u32* arg0, u32 arg1) {
    u32 r0 = arg0[0];
    u32 r11 = arg0[1];
    u32 r12 = arg0[2];
    
    arg0 = (u32*)((u8*)arg0 + r0);
    if (r11 < 0) {
        return 0;
    }
    
    arg0 = (u32*)((u8*)arg0 + r12);
    return arg0[arg1];
}

s32 fn_8022CB08(s32 arg0, u32 arg1, s32 arg2) {
    return (arg0 << arg2) | (arg1 >> (0x20 - arg2)) | (arg1 << (arg2 - 0x20));
}

u32 fn_8022CB2C(u32 arg0, u32 arg1, s32 arg2) {
    u32 r8;
    u32 r10;
    
    r8 = 0x20 - arg2;
    r10 = arg1 >> r8;
    r10 = arg0 | (arg1 << arg2);
    r10 = arg1 >> r8;
    return r10;
}
typedef struct {
    u32* vtable;
    u32* data1;
    u32* data2;
} SomeStruct;
