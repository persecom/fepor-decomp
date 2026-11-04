/* Functions from 0x800A9488 to 0x800AD1F4, found by decomp-toolkit. */
#include "common.h"

void *fn_800A9488(void) {
    extern u8 lbl_8026E470[];
    return (void *)((u32)lbl_8026E470 + 0xCC);
}

s32 fn_800A9498(void) {
    return 0x100;
}

s32 fn_800A94A0(void) {
    return 0x48;
}

s32 fn_800A94A8(void) {
    return 0x18;
}

s32 fn_800A94B0(void) {
    return 0x140;
}

s32 fn_800A94B8(void) {
    return 0;
}

void *fn_800A9638(void) {
    extern u8 lbl_8026E470[];
    return (void *)((u32)lbl_8026E470 + 0x110);
}

s32 fn_800A9648(void) {
    M2C_UNK fn_80006220(M2C_UNK);
    fn_80006220(5);
    return 5;
}

s32 fn_800A9680(void) {
    fn_80006220(5);
    return 5;
}

void *fn_800A96A8(void) {
    extern u8 lbl_8026E470[];
    return (void *)((u32)lbl_8026E470 + 0x13F);
}

s32 fn_800A96B8(void) {
    return 0x40;
}

s32 fn_800A96C0(void) {
    return 0x110;
}

s32 fn_800A96C8(void) {
    return 0x140;
}

s32 fn_800A96D0(void) {
    return 0;
}

s32 fn_800A96D8(void) {
    extern u8 lbl_80330708[];
    u8 *temp_r5 = &lbl_80330708[0xA6];
    u8 temp_r0 = *temp_r5 + 1;
    *temp_r5 = temp_r0;
    return 0;
}

s32 fn_800A9B0C(void) {
    M2C_UNK fn_800EB884();
    fn_800EB884();
    fn_80006220(3);
    return 5;
}

s32 fn_800A9CAC(void) {
    M2C_UNK fn_800EBACC(M2C_UNK, M2C_UNK);
    fn_800EBACC(0, 0);
    fn_80006220(3);
    return 5;
}

s32 fn_800A9CF0(void) {
    M2C_UNK fn_800EBD78(M2C_UNK, M2C_UNK);
    fn_800EBD78(0, 0);
    fn_80006220(3);
    return 5;
}

s32 fn_800A9D34(void) {
    extern void *lbl_80367240;
    extern u8 lbl_80367701;
    extern s8 lbl_80367702;
    fn_80006220(4);
    if ((u32) (M2C_FIELD(lbl_80367240, s32 *, 4) & 0x60) == 0x60) {
        lbl_80367701 ^= 1;
    }
    if (M2C_FIELD(lbl_80367240, s32 *, 4) & 0x10) {
        lbl_80367702 = 1;
    }
    return 5;
}

s32 fn_800A9DA0(void) {
    fn_80006220(2);
    return 5;
}

s32 fn_800A9DD8(void) {
    fn_80006220(5);
    return 5;
}

void fn_800AA244(void) {
    M2C_UNK fn_800F0774();
    M2C_UNK fn_800F2E70();
    fn_800F2E70();
    fn_800F0774();
}

s32 fn_800AA268(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60) != 0;
}

void fn_800AA27C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}

s32 fn_800AA76C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = arg2;
    temp_r0 = arg0 + var_r5;
    if (temp_r0 > arg1) {
        return arg1 - arg0;
    }
    if (temp_r0 < 0) {
        var_r5 = -arg0;
    }
    return var_r5;
}

void fn_800AB73C(void) {
    M2C_UNK fn_800AB75C();
    fn_800AB75C();
}

void fn_800ACCF8(void) {
    M2C_UNK fn_800ACD18();
    fn_800ACD18();
}

