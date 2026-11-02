/* Functions from 0x80127E94 to 0x8012C368, found by decomp-toolkit. */
#include "common.h"

void fn_801286F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) & ~arg1);
}

void fn_80128708(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 8) = arg1;
}

s32 fn_80128710(void) {
    return 0;
}

s32 fn_801287B8(void) {
    return 0;
}

void fn_801295DC(void *arg0) {
    u8 fn_80040824();
    M2C_UNK fn_80049B1C(s32, M2C_UNK);
    if (fn_80040824() != 0) {
        fn_80049B1C(M2C_FIELD(arg0, s32 *, 0x30), 1);
    }
}

void fn_80129F68(void *arg0) {
    M2C_UNK fn_80049174(s32, void *, s32 *, M2C_UNK);
    extern s32 lbl_8036A40C;
    s32 sp8;

    sp8 = lbl_8036A40C;
    fn_80049174(*M2C_FIELD(arg0, s32 **, 0x30), arg0, &sp8, 0xA);
}

void fn_8012A240(void) {
    M2C_UNK fn_8012A530();
    fn_8012A530();
}

void fn_8012B458(void *arg0) {
    M2C_UNK fn_8000C60C(s32);
    extern s32 lbl_80367110;
    if (lbl_80367110 & 1) {
        fn_8000C60C(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

