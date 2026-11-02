/* Functions from 0x80103748 to 0x80105504, found by decomp-toolkit. */
#include "common.h"

s32 fn_80103748(void) {
    return 0x21;
}

s32 fn_80103818(void) {
    return 0;
}

s32 fn_80103918(void) {
    return 0x20;
}

s32 fn_80103920(void) {
    return 0x108;
}

s32 fn_80103928(void) {
    return 0x20;
}

s32 fn_80103930(void) {
    return 0xAC;
}

s32 fn_80103938(void) {
    return 0xA0;
}

s32 fn_80103950(void) {
    return 0;
}

s32 fn_80103968(void) {
    return 0;
}

s32 fn_80103980(void) {
    return 0;
}

s32 fn_80103998(void) {
    return 0;
}

s32 fn_80103A6C(void) {
    return 0;
}

s32 fn_80103B30(void) {
    return 0;
}

s32 fn_80103B9C(void) {
    return 0;
}

s32 fn_80103C14(void) {
    return 0;
}

s32 fn_80103C8C(void) {
    return 0;
}

s32 fn_80103D04(void) {
    return 0;
}

s32 fn_80103D74(void) {
    return 0;
}

s32 fn_80103E30(void) {
    return 0;
}

s32 fn_80103E48(void) {
    return 0;
}

void fn_80104134(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, M2C_UNK, s32);
    fn_8017A810(arg1, 4, arg0);
}

void fn_80104160(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, s32);
    fn_8017A430(arg1, 4, arg0);
}

u32 fn_801044C4(void *arg0) {
    s32 temp_r4;

    temp_r4 = ((u8) M2C_FIELD(arg0, u8 *, 2) >> 5U) & 7;
    return (u32) ((7 - temp_r4) | (temp_r4 - 7)) >> 0x1FU;
}

u32 fn_801044E0(void *arg0) {
    s32 temp_r4;

    temp_r4 = ((u8) M2C_FIELD(arg0, u8 *, 2) >> 2U) & 7;
    return (u32) ((4 - temp_r4) | (temp_r4 - 4)) >> 0x1FU;
}

s32 fn_80104944(void) {
    extern s32 lbl_803679C0;
    return lbl_803679C0;
}

void fn_801053CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

