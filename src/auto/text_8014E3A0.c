/* Functions from 0x8014E3A0 to 0x801620BC, found by decomp-toolkit. */
#include "common.h"

s32 fn_8014E3A0(void) {
    return 0;
}

s32 fn_8014E3A8(void) {
    return 0x260;
}

s32 fn_8014E3C0(void) {
    return 9;
}

s32 fn_8014E414(void) {
    return 0;
}

void fn_801515AC(void) {
    extern s32 lbl_80367BA8;
    lbl_80367BA8 = 0;
}

s32 fn_801515F4(void *arg0) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x4C), s8 *, 0xC4) = 1;
    return 0;
}

u8 fn_801517C0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xC4);
}

