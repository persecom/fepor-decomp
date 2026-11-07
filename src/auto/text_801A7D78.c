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

void fn_801A9C0C(void *arg0) {
    M2C_UNK fn_80050E14(u16, void *);
    M2C_UNK fn_800A89C0(void *);
    M2C_UNK fn_800A8A2C(void *);
    extern u8 lbl_802CA264[];
    extern u8 lbl_80331B70[];
    extern u8 lbl_80331BD4[];
    extern s8 lbl_80368218;
    extern s8 lbl_80368219;
    u16 temp_r3;

    if (lbl_80368218 == 0) {
        fn_800A8A2C(lbl_80331B70);
        lbl_80368218 = 1;
    }
    if (lbl_80368219 == 0) {
        fn_800A89C0(lbl_80331BD4);
        lbl_80368219 = 1;
    }
    temp_r3 = *(u16 *)(lbl_80331BD4 + 0x3A);
    *(s8 *)(lbl_80331BD4 + 0x4C) = 0x64;
    *(u16 *)(lbl_80331BD4 + 0x3A) = temp_r3 | 0x1000;
    fn_80050E14(temp_r3, lbl_80331BD4);
    *(void **)((u8 *)arg0 + 0x188) = lbl_80331B70;
    *(void **)((u8 *)arg0 + 0x18C) = lbl_80331BD4;
    *(void **)((u8 *)arg0 + 0x190) = lbl_802CA264;
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

void fn_801AA1B0(void *arg0) {
    M2C_UNK fn_80057A10(s32, M2C_UNK);
    M2C_UNK fn_801AB004(void *);
    M2C_UNK fn_8000C60C(s32);
    M2C_UNK fn_8006EDA0(void *);
    if (*(u8 *)((u8 *)arg0 + 0x69) == 0) {
        fn_80057A10(*(s32 *)((u8 *)arg0 + 0x54), 1);
        fn_80057A10(*(s32 *)((u8 *)arg0 + 0x58), 1);
        fn_801AB004(arg0);
        fn_8000C60C(*(s32 *)((u8 *)arg0 + 0x6C));
        if (*(u32 *)((u8 *)arg0 + 0x50) != 0) {
            fn_8006EDA0((char *)arg0 + 0x50);
        }
        *(u8 *)((u8 *)arg0 + 0x69) = 1;
    }
}

void fn_801AAD74(void *arg0) {
    s16 var = M2C_FIELD(arg0, s16 *, 0x32);
    if (var != 0) {
        fn_801AA228();
    }
}

#pragma opt_common_subs off
void fn_801AADA4(void *arg0) {
    s32 fn_80059208(void *, void *);
    u16 fn_8005C6A0(char *);
    void fn_8006EEFC(void *, void *);
    void fn_8000C188(void *);
    void fn_801ADA50(void *);
    extern u8 lbl_8027B838[];
    if (fn_8005C6A0((char *)lbl_8027B838 + 0x320) & 0x2000) {
        fn_8006EEFC((char *)arg0 + 0x50, (char *)lbl_8027B838 + 0x320);
        *(s32 *)((char *)arg0 + 0x6C) = fn_80059208(fn_801ADA50, arg0);
        fn_8000C188(arg0);
    }
}
#pragma opt_common_subs reset
void fn_801AE154(void **arg0) {
    M2C_UNK fn_80152548(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8015267C(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_801527B0(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
    fn_80152548(0x16, 0x10, 0x10);
    fn_801527B0(0x1C, 0x40, 0x10);
    fn_8015267C(0x88, 0x40, 0x10);
}

void fn_801AE1B0(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, void *, s16 *);
    s16 spC;
    s16 sp8[2];
    s16 a;
    s16 b;

    switch (*(s16 *)((u8 *)arg1 + 0x3E)) {
    case 0:
        a = *(s16 *)((u8 *)arg1 + 0x40) * 0x1A + 0x28;
        b = 0x18;
        break;
    case 1:
        a = 0x24;
        b = 0x50;
        break;
    case 2:
        a = 0x90;
        b = 0x50;
        break;
    }
    sp8[0] = a;
    sp8[1] = b;
    *arg0 = *(s32 *)fn_8013F748(arg1, &spC, sp8);
}

void fn_801AE2D0(void) {

}
