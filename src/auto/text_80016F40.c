/* Functions from 0x80016F40 to 0x80019558, found by decomp-toolkit. */
#include "common.h"

void fn_80017414(void *arg0, s32 arg1) {
    s16 fn_8017A9B0(s32);
    s8 fn_8017A9DC(s32);
    M2C_FIELD(arg0, s16 *, 0) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 2) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 4) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 6) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 8) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 0xA) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s8 *, 0xC) = fn_8017A9DC(arg1);
    M2C_FIELD(arg0, s8 *, 0xD) = fn_8017A9DC(arg1);
}

void fn_8001753C(s16 *arg0) {
    s16 fn_8000CEE4(M2C_UNK);
    *arg0 = fn_8000CEE4(0xE4C);
}

void fn_80017BFC(void) {
    M2C_UNK fn_8001840C();
    fn_8001840C();
}

s32 fn_80018ADC(void) {
    extern s32 lbl_803671C4;
    return lbl_803671C4;
}

void fn_80018AE4(void) {
    extern u8 lbl_803671C0;
    lbl_803671C0 -= 1;
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

