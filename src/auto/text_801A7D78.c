/* Functions from 0x801A7D78 to 0x801AE2D4, found by decomp-toolkit. */
#include "common.h"

void fn_801A8F14(void *arg0, void *arg1) {
    u8 fn_801B8550(s32);
    if (fn_801B8550(M2C_FIELD(arg1, s32 *, 0x280)) != 0) {
        M2C_FIELD(arg0, s16 *, 0x2A4) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x2A2) = (s16) (M2C_FIELD(arg0, s16 *, 0x29E) - M2C_FIELD(arg1, s16 *, 0x2A0));
    M2C_FIELD(arg0, s16 *, 0x2A8) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A4) - M2C_FIELD(arg1, s16 *, 0x2A6));
}

void fn_801A949C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
}

void fn_801A9CB8(void *arg0, s32 arg1) {
    M2C_UNK fn_80037E88();
    fn_80037E88();
    M2C_FIELD(arg0, s32 *, 0x280) = arg1;
}

s32 fn_801A9FC8(void) {
    return 0;
}

s32 fn_801A9FD0(void) {
    return 0;
}

s32 fn_801A9FF0(void) {
    return 0;
}

s32 fn_801A9FF8(void) {
    return 0;
}

s32 fn_801AA034(void) {
    return 0;
}

void fn_801AA14C(void *arg0) {
    M2C_UNK fn_800A7EC4();
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) & 0xFE);
    fn_800A7EC4();
}

void fn_801AE2D0(void) {

}
