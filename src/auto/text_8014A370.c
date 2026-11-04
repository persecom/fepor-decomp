/* Functions from 0x8014A370 to 0x8014E350, found by decomp-toolkit. */
#include "common.h"

s32 fn_8014A370(void) {
    return 0x10;
}

s32 fn_8014A378(void) {
    return 0x10;
}

s32 fn_8014A380(void) {
    return 0x10;
}

void *fn_8014A4C8(void) {
    extern char lbl_80276F00[];
    return &lbl_80276F00[0xCF];
}

s32 fn_8014A4D8(void) {
    return 2;
}

s32 fn_8014A4E0(void) {
    return 0;
}

s32 fn_8014A910(void) {
    return 0x40;
}

s32 fn_8014A918(void) {
    return 0x10;
}

s32 fn_8014A920(void) {
    return 0x130;
}

s32 fn_8014A960(void) {
    return 0;
}

s32 fn_8014AD88(void) {
    return 0;
}

s32 fn_8014AD90(void) {
    return 0x200;
}

s32 fn_8014AD98(void) {
    return 0;
}

s32 fn_8014ADA0(void) {
    return 0xFFFF;
}

u16 fn_8014ADBC(void) {
    extern void *lbl_80367B14;
    return M2C_FIELD(lbl_80367B14, u16 *, 0x12);
}

s32 fn_8014B20C(void) {
    return 0x7F;
}

s32 fn_8014B214(void) {
    return 0;
}

s32 fn_8014B21C(void) {
    return 3;
}

s32 fn_8014B224(void) {
    return 0x200;
}

s32 fn_8014B22C(void) {
    return -0x2000;
}

s32 fn_8014B234(void) {
    return 0x1FFF;
}

s32 fn_8014B264(void) {
    return 0xFF;
}

void *fn_8014B26C(void) {
    extern char lbl_80276F00[];
    return &lbl_80276F00[0x119];
}

s32 fn_8014B2E4(void) {
    return 0;
}

s32 fn_8014B314(void) {
    return 1;
}

void fn_8014BB58(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 sp8;

    fn_8000A258();
    fn_8000A174(0, 0x23);
    fn_8000A248();
    fn_80007898(0xA);
    fn_80007858((f32) arg0, (f32) arg1);
    sp8 = *arg2;
    fn_80007668(&sp8);
    fn_80007124(arg3);
    fn_80007884();
}

void fn_8014C5F4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x70) = (s16) (M2C_FIELD(arg0, s16 *, 0x70) + arg1);
}

s32 fn_8014C6B8(void) {
    M2C_UNK fn_80040844();
    M2C_UNK fn_80040854();
    fn_80040844();
    fn_80040854();
    return 1;
}

s32 fn_8014C6E0(void) {
    u8 fn_80040824();
    M2C_UNK fn_800AA134();
    if (fn_80040824() == 0) {
        return 0;
    }
    fn_800AA134();
    return 1;
}

void fn_8014C774(void) {
    M2C_UNK fn_80040854();
    M2C_UNK fn_80040844();
    fn_80040844();
    fn_80040854();
}

void fn_8014C798(void) {
    M2C_UNK fn_80018EC0();
    M2C_UNK fn_80040844();
    M2C_UNK fn_80042558();
    fn_80018EC0();
    fn_80040844();
    fn_80042558();
}

void fn_8014D254(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 0x14) = arg1;
    M2C_FIELD(arg0, s8 *, 0x15) = arg2;
    M2C_FIELD(arg0, s8 *, 0x16) = arg3;
    M2C_FIELD(arg0, s8 *, 0x17) = arg4;
}

void fn_8014D268(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r5 = var_r4 - temp_r0;
    if (temp_r5 < 0) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + (temp_r0 - var_r4));
    } else {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + temp_r5);
    }
    if (var_r4 > 0x98967F) {
        var_r4 = 0x98967F;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4;
}

void fn_8014D2B0(void *arg0, u8 arg1) {
    u8 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x10);
    if (temp_r5 != arg1) {
        M2C_FIELD(arg0, u8 *, 0x51E) = temp_r5;
        M2C_FIELD(arg0, u8 *, 0x10) = arg1;
    }
}

void fn_8014D3B4(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x11);
    switch ((s32) temp_r0) {                        /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x11) = 3U;
        return;
    case 3:
        M2C_FIELD(arg0, u8 *, 0x11) = 1U;
        return;
    case 1:
        M2C_FIELD(arg0, u8 *, 0x11) = 2U;
        return;
    case 2:
        M2C_FIELD(arg0, u8 *, 0x11) = 0U;
        M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + 1);
        return;
    }
}

void fn_8014D8FC(void *arg0) {
    M2C_UNK fn_80019F04(u8);
    fn_80019F04(M2C_FIELD(arg0, u8 *, 0x10));
}

void fn_8014DFE8(s32 arg0) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_80367B94;
    fn_80024398(&lbl_80367B94, arg0, 0);
}

