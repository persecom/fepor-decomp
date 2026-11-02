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

s32 fn_8014B2E4(void) {
    return 0;
}

s32 fn_8014B314(void) {
    return 1;
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

void fn_8014D2B0(void *arg0, u8 arg1) {
    u8 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x10);
    if (temp_r5 != arg1) {
        M2C_FIELD(arg0, u8 *, 0x51E) = temp_r5;
        M2C_FIELD(arg0, u8 *, 0x10) = arg1;
    }
}

void fn_8014D8FC(void *arg0) {
    M2C_UNK fn_80019F04(u8);
    fn_80019F04(M2C_FIELD(arg0, u8 *, 0x10));
}

