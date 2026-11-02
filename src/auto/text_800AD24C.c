/* Functions from 0x800AD24C to 0x800C3F18, found by decomp-toolkit. */
#include "common.h"

void fn_800AE904(void *arg0) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x4C), s32 *, 0x4C) = 0;
}

void fn_800B4060(void) {
    M2C_UNK fn_800AECC0();
    fn_800AECC0();
}

void fn_800B4794(void) {
    extern s8 lbl_80367810;
    lbl_80367810 = 0;
}

void fn_800B47A0(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

s32 fn_800B49C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void fn_800B49D0(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 8);
}

void fn_800B50E4(void) {
    M2C_UNK fn_800B4C20();
    M2C_UNK fn_8020A51C();
loop_1:
    fn_800B4C20();
    fn_8020A51C();
    goto loop_1;
}

s32 fn_800B6A30(void) {
    return 0;
}

void fn_800B6F48(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_800B8D34(void) {
    M2C_UNK fn_8006F014();
    fn_8006F014();
}

s32 fn_800BB9E0(void) {
    return 1;
}

s32 fn_800BBC50(void) {
    extern s32 lbl_80367110;
    return lbl_80367110;
}

s32 fn_800BF694(void) {
    return 1;
}

void fn_800C0980(void) {
    M2C_UNK fn_80018AE4();
    fn_80018AE4();
}

void fn_800C10B4(void) {
    M2C_UNK fn_80016180();
    fn_80016180();
}

void fn_800C11F4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = -1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0x10;
}

s32 fn_800C273C(void *arg0, u16 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x24) + arg1;
}

void fn_800C28CC(void) {
    M2C_UNK fn_80013880();
    fn_80013880();
}

s32 fn_800C30CC(s32 arg0, s32 arg1) {
    return arg0 + ((arg1 - 1) * 0x18);
}

