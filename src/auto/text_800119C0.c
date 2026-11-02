/* Functions from 0x800119C0 to 0x80016EE8, found by decomp-toolkit. */
#include "common.h"

s32 fn_800119D0(void) {
    return 0x18;
}

s32 fn_800119D8(void) {
    return 0x18;
}

void fn_80013864(void) {
    extern void *lbl_803671A4;
    M2C_FIELD(lbl_803671A4, s8 *, 0x1C) = 1;
}

void fn_80013874(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
}

void fn_800142B0(s32 arg0) {
    extern s32 lbl_803671A8;
    lbl_803671A8 = arg0;
}

s32 fn_800142B8(void) {
    extern s32 lbl_803671A8;
    return lbl_803671A8;
}

void fn_800142C0(s32 *arg0, s16 *arg1) {
    extern s16 lbl_8036719E;
    extern s32 lbl_803671A0;
    *arg0 = lbl_803671A0;
    *arg1 = lbl_8036719E;
}

s32 fn_800142D4(s32 arg0) {
    extern s32 lbl_803671A4;
    s32 temp_r0;

    temp_r0 = lbl_803671A4;
    lbl_803671A4 = arg0;
    return temp_r0;
}

u8 fn_80014E70(void) {
    extern u8 lbl_803671B8;
    return lbl_803671B8;
}

void fn_8001594C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = arg1;
}

