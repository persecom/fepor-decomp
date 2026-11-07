/* Functions from 0x801A7D78 to 0x801AE2D4, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_80367218;
void *fn_801A7F5C(void *arg0) {
    fn_801A7FA4(arg0);
    fn_801A7FA4((char *)arg0 + 0x2E0);
    fn_801A7FA4((char *)arg0 + 0x5C0);
    *(s32 *)((char *)arg0 + 0xCAC) = 0;
    return arg0;
}

u16 *fn_801A7FF4(void *arg0) {
    s8 temp = ((s8 *)arg0)[0x2C8 / sizeof(s8)];
    if (temp <= 0) {
        return &lbl_80367218;
    }
    return (u16 *)((u8 *)arg0 + 0x284);
}

void fn_801A859C(void *arg0) {
    s8 temp;
    temp = fn_8003B2D0();
    M2C_FIELD(arg0, s8 *, 0x2B7) = temp;
    M2C_FIELD(arg0, u8 *, 0x2B8) = (u8) M2C_FIELD(arg0, u8 *, 0x1A8);
    M2C_FIELD(arg0, s16 *, 0x2BA) = (s16) M2C_FIELD(arg0, s16 *, 0x298);
    M2C_FIELD(arg0, s16 *, 0x2BC) = (s16) M2C_FIELD(arg0, s16 *, 0x29A);
    M2C_FIELD(arg0, s16 *, 0x2BE) = (s16) M2C_FIELD(arg0, s16 *, 0x2A2);
    M2C_FIELD(arg0, s16 *, 0x2C0) = (s16) M2C_FIELD(arg0, s16 *, 0x2A8);
}

void fn_801A85F4(s32 arg0) {
    M2C_UNK fn_80105CEC(s32, M2C_UNK);
    fn_80105CEC(arg0 + 0x1BC, 0x4C);
    fn_80105CEC(arg0 + 0x1BC, 0x31);
    fn_80105CEC(arg0 + 0x1BC, 0x30);
    fn_80105CEC(arg0 + 0x1BC, 0x5A);
    fn_80105CEC(arg0 + 0x1BC, 0x2F);
    fn_80105CEC(arg0 + 0x1BC, 0x38);
    fn_80105CEC(arg0 + 0x1BC, 0x35);
    fn_80105CEC(arg0 + 0x1BC, 0x39);
    fn_80105CEC(arg0 + 0x1BC, 0x33);
}

s32 fn_801A8688(s32 arg0) {
    u8 fn_80105BC0(s32, M2C_UNK);
    if ((fn_80105BC0(arg0 + 0x1BC, 0x29) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x41) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x4C) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x31) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2F) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x30) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x32) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x3F) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x10) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x35) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2B) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2C) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2E) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x33) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x38) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x34) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x39) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x36) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x42) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x5A) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2D) == 0)) {
        return 0;
    }
    fn_80105CEC(arg0 + 0x1BC, 0x29);
    fn_80105CEC(arg0 + 0x1BC, 0x41);
    fn_80105CEC(arg0 + 0x1BC, 0x4C);
    fn_80105CEC(arg0 + 0x1BC, 0x31);
    fn_80105CEC(arg0 + 0x1BC, 0x2F);
    fn_80105CEC(arg0 + 0x1BC, 0x30);
    fn_80105CEC(arg0 + 0x1BC, 0x32);
    fn_80105CEC(arg0 + 0x1BC, 0x3F);
    fn_80105CEC(arg0 + 0x1BC, 0x10);
    fn_80105CEC(arg0 + 0x1BC, 0x35);
    fn_80105CEC(arg0 + 0x1BC, 0x2B);
    fn_80105CEC(arg0 + 0x1BC, 0x2C);
    fn_80105CEC(arg0 + 0x1BC, 0x2E);
    fn_80105CEC(arg0 + 0x1BC, 0x33);
    fn_80105CEC(arg0 + 0x1BC, 0x38);
    fn_80105CEC(arg0 + 0x1BC, 0x34);
    fn_80105CEC(arg0 + 0x1BC, 0x39);
    fn_80105CEC(arg0 + 0x1BC, 0x36);
    fn_80105CEC(arg0 + 0x1BC, 0x42);
    fn_80105CEC(arg0 + 0x1BC, 0x5A);
    fn_80105CEC(arg0 + 0x1BC, 0x2D);
    return 1;
}

void fn_801A8AF4(void *arg0) {
    s16 *temp1;
    s16 *temp2;
    
    temp1 = (s16*)((u8*)arg0 + 0x2A2);
    if (*temp1 > 0x64) {
        *temp1 = 0x64;
    }
    if (*temp1 < 0) {
        *temp1 = 0;
    }
    
    temp2 = (s16*)((u8*)arg0 + 0x2A8);
    if (*temp2 > 0x64) {
        *temp2 = 0x64;
    }
    if (*temp2 < 0) {
        *temp2 = 0;
    }
}

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

s32 fn_801A9FD8(void *arg0) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x1A0);
    return -((temp >> 0xC) & 1) & ~((temp >> 0xC) & 1);
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

void fn_801AA03C(s32 arg1) {
    fn_800F5504(arg1, 0x15);
}

void fn_801AA14C(void *arg0) {
    M2C_UNK fn_800A7EC4();
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) & 0xFE);
    fn_800A7EC4();
}

void fn_801AAD74(void *arg0) {
    s16 var = M2C_FIELD(arg0, s16 *, 0x32);
    if (var != 0) {
        fn_801AA228();
    }
}

void fn_801AE2D0(void) {

}
