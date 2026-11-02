/* Functions from 0x80016F40 to 0x80019558, found by decomp-toolkit. */
#include "common.h"

s32 fn_80018ADC(void) {
    extern s32 lbl_803671C4;
    return lbl_803671C4;
}

void fn_80018B18(void) {
    extern u8 lbl_80366DB0;
    extern u8 lbl_803671C0;
    lbl_80366DB0 = lbl_803671C0;
}

void fn_800193CC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x18) = farg0;
}

