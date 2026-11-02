/* Functions from 0x801EAA2C to 0x801F18D4, found by decomp-toolkit. */
#include "common.h"

void fn_801EAA2C(s8 *arg0) {
    *arg0 = -1;
}

void fn_801EBFA0(void) {

}

void fn_801EBFA4(void) {

}

s32 fn_801EBFA8(void) {
    return 0xB0;
}

s32 fn_801EC17C(void) {
    return 0x60;
}

u8 fn_801EC3AC(void) {
    extern u8 lbl_803683B8;
    return (u8) (lbl_803683B8 == 0x86);
}

s32 fn_801EC6CC(void) {
    return 2;
}

void fn_801EC7B4(void) {

}

void fn_801ED838(void) {
    extern s32 lbl_803683D0;
    lbl_803683D0 -= 1;
}

void fn_801EDEC8(void *arg0) {
    extern s32 lbl_80367110;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (lbl_80367110 & 4);
    lbl_80367110 |= 4;
}

void fn_801EED74(void) {
    M2C_UNK fn_801EE0C8();
    fn_801EE0C8();
}

s32 fn_801F1100(void) {
    return 0;
}

s32 fn_801F1108(void) {
    return 0;
}

