/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"

void fn_8007D7E8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

u16 fn_80089634(void) {
    extern void *lbl_803674E4;
    return M2C_FIELD(lbl_803674E4, u16 *, 0x32);
}

u16 fn_8008A56C(void) {
    extern void *lbl_803674E0;
    return M2C_FIELD(lbl_803674E0, u16 *, 0x32);
}

s32 fn_80098094(void) {
    extern s32 lbl_80367500;
    return lbl_80367500;
}

void fn_80098B74(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
}

