/* Functions from 0x801A2AC4 to 0x801A7D3C, found by decomp-toolkit. */
#include "common.h"

s32 fn_801A2E68(void) {
    M2C_UNK fn_8002A084();
    extern s32 lbl_802EF4E0;
    fn_8002A084();
    return lbl_802EF4E0 != 0;
}

u32 fn_801A2FE0(void) {
    extern void *lbl_8036C574;
    extern void *lbl_8036C5F4;

    *(void **)((char *)lbl_8036C574 + 0x20) = lbl_8036C5F4;
    return 0;
}

s32 fn_801A30B8(void) {
    return 1;
}
