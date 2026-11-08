/* Functions from 0x800725C8 to 0x800732BC, found by decomp-toolkit. */
#include "common.h"
extern u16 lbl_801D3B14[];
extern void *lbl_801D8A28;
extern void *lbl_801D8A30;

void fn_800725C8(M2C_UNK **arg0) {
    extern M2C_UNK lbl_8028459C;
    extern M2C_UNK lbl_80285FE8;
    *arg0 = &lbl_8028459C;
    *arg0 = &lbl_80285FE8 + 0x628;
    *arg0 = &lbl_80285FE8 + 0x2FC;
    *arg0 = &lbl_80285FE8 + 0xC;
}

void fn_80072624(void) {
    M2C_UNK fn_8003BE50(void *);
    u8 fn_80091D74();
    extern M2C_UNK lbl_802EF4C8;
    if ((M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), s32 *, 0x1A0) & 0x800000) && (fn_80091D74() == 0)) {
        fn_8003BE50(M2C_FIELD(&lbl_802EF4C8, void **, 0));
    }
    if ((M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 4), s32 *, 0x1A0) & 0x800000) && (fn_80091D74() == 0)) {
        fn_8003BE50(M2C_FIELD(&lbl_802EF4C8, void **, 4));
    }
}

void fn_800726A8(s32 arg0) {
    u8 fn_80091D74();
    M2C_UNK fn_80183BE4(void *, s32);
    extern M2C_UNK lbl_802EF4C8;
    if ((M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), s32 *, 0x1A0) & 0x800000) && (fn_80091D74() == 0)) {
        fn_80183BE4(M2C_FIELD(&lbl_802EF4C8, void **, 0), arg0);
    }
    if ((M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 4), s32 *, 0x1A0) & 0x800000) && (fn_80091D74() == 0)) {
        fn_80183BE4(M2C_FIELD(&lbl_802EF4C8, void **, 4), arg0);
    }
}

void fn_8007278C(void) {
    M2C_UNK fn_8000E0E4(void *);
    M2C_UNK fn_80091A1C();
    M2C_UNK fn_800A8A88(s32);
    extern M2C_UNK lbl_8026BC88;
    extern M2C_UNK lbl_802EF4C8;
    if ((void *) M2C_FIELD(&lbl_802EF4C8, void **, 4) != NULL) {
        fn_800A8A88(M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 4), s32 *, 0x188));
        fn_80091A1C();
        return;
    }
    fn_8000E0E4(&lbl_8026BC88 + 0x1A5);
    fn_80091A1C();
}

void fn_800727E0(void) {
    extern u16 lbl_802EF4C8[12];
    fn_800285C0(lbl_802EF4C8);
    fn_8001D2C8();
    fn_80091A1C();
}

void fn_80072810(void) {
    extern u16 lbl_802EF4C8[12];
    extern u8 lbl_8032BB58[516];
    u16* ptr = lbl_802EF4C8;
    fn_8010FF24(lbl_8032BB58, ptr[0x19E], ptr[0x19F], 7);
    fn_8010FA2C();
    fn_8001D2C8();
    fn_80091A1C();
}

void fn_80072890(void) {
    M2C_UNK fn_80184C7C(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_802EF4C8;
    fn_80184C7C(M2C_FIELD(&lbl_802EF4C8, s32 *, 4), 0, 4, 0);
}

void fn_800728C8(void) {
    extern u16 lbl_802EF4C8;
    fn_80184C7C(lbl_802EF4C8, 0, 4, 0);
}

void fn_80072900(s32 arg0) {
    extern s32 lbl_802EF4C8;
    extern s32 lbl_8036737C;

    *(volatile u8 *) (lbl_802EF4C8 + 8) = 0;
    fn_80024398(&lbl_8036737C, arg0, 0);
}

void fn_8007293C(void) {
    extern u8 lbl_80330708[];
    lbl_80330708[0x54] = (u8)(lbl_80330708[0x54] & 0x7F);
}

void fn_80072954(void) {
    M2C_UNK fn_801D3B14(M2C_UNK *);
    extern M2C_UNK lbl_80330708;
    M2C_FIELD(&lbl_80330708, u8 *, 0x54) = (u8) (M2C_FIELD(&lbl_80330708, u8 *, 0x54) | 0x80);
    fn_801D3B14(&lbl_80330708);
}

void fn_80072A2C(void) {
    extern u16 lbl_80311D50[];
    lbl_80311D50[0x54] = 0xC8;
    lbl_80311D50[0x3A] = -0x20;
}

void fn_80072AD4(void) {
    M2C_UNK fn_8000C188();
    extern void *lbl_80367240;
    if (M2C_FIELD(lbl_80367240, s32 *, 4) & 0x300) {
        fn_8000C188();
    }
}

void fn_80072B04(void *arg0) {
    void fn_801DDBA8(void *, u8 *, s32, s32, s32);
    s32 fn_8000E0E4(u8 *);
    extern u8 lbl_8026BE40[];
    extern u16 lbl_80311D50[];
    fn_801DDBA8(lbl_80311D50, lbl_8026BE40 + 0x11A, 0, 0, 0);
    M2C_FIELD(arg0, s16 *, 0x28) = 0x258;
    M2C_FIELD(arg0, s32 *, 0x34) = fn_8000E0E4(lbl_8026BE40 + 0x127);
}

void fn_80072CB0(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

void fn_80072CDC(void *arg0) {
    void fn_801DDBA8(void *, u8 *, s32, s32, s32);
    extern u8 lbl_8026BE40[];
    extern u16 lbl_80311D50[];
    fn_801DDBA8(lbl_80311D50, lbl_8026BE40 + 0x155, 0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = -0x80;
}

void fn_80072D30(void *arg0) {
    void fn_801DDBA8(void *, u8 *, s32, s32, s32);
    extern u8 lbl_8026BE40[];
    extern u16 lbl_80311D50[];
    fn_801DDBA8(lbl_80311D50, lbl_8026BE40 + 0x162, 0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_80072D84(void *arg0) {
    void fn_801DDBA8(void *, u8 *, s32, s32, s32);
    extern u8 lbl_8026BE40[];
    extern u16 lbl_80311D50[];
    fn_801DDBA8(lbl_80311D50, lbl_8026BE40 + 0x16F, 0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_80072DD8(void *arg0) {
    void fn_801DDBA8(void *, u8 *, s32, s32, s32);
    extern u8 lbl_8026BE40[];
    extern u16 lbl_80311D50[];
    fn_801DDBA8(lbl_80311D50, lbl_8026BE40 + 0x179, 0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_80072E2C(void *arg0) {
    M2C_UNK fn_801DDBA8(M2C_UNK *, void *, M2C_UNK, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_8026BE40;
    extern M2C_UNK lbl_80311D50;
    fn_801DDBA8(&lbl_80311D50, &lbl_8026BE40 + 0x188, 0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_80072E80(void *arg0) {
    void fn_801DDBA8(void *, u8 *, s32, s32, s32);
    extern u8 lbl_8026BE40[];
    extern u16 lbl_80311D50[];
    fn_801DDBA8(lbl_80311D50, lbl_8026BE40 + 0x199, 0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = -2;
}

void fn_80072ED4(void *arg0) {
    void fn_801DDBA8(void *, u8 *, s32, s32, s32);
    extern u8 lbl_8026BE40[];
    extern u16 lbl_80311D50[];
    fn_801DDBA8(lbl_80311D50, lbl_8026BE40 + 0x12D, 0, 1, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = -3;
}

void fn_8007303C(s32 arg0) {
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    s32 fn_800EB774();
    s32 temp_r3;

    temp_r3 = fn_800EB774();
    switch (temp_r3) {                              /* irregular */
    case 0:
    case -66:
        fn_8000C070(arg0, 1);
        return;
    case -3:
        fn_8000C070(arg0, 2);
        return;
    case -2:
        fn_8000C070(arg0, 3);
        return;
    case -6:
    case -13:
        fn_8000C070(arg0, 4);
        return;
    case -5:
        fn_8000C070(arg0, 5);
        return;
    case -65:
        fn_8000C070(arg0, 6);
        return;
    case -128:
        fn_8000C070(arg0, 7);
        return;
    case -4:
    case -64:
        fn_8000C070(arg0, 8);
        return;
    default:
        fn_8000C070(arg0, 7);
        return;
    }
}

void fn_80073164(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_80073188(void *arg0) {
    void *memset(void *, s32, u32);
    void fn_801E3118(void *, void *, s32);
    extern u8 lbl_8026BE40[];
    extern u16 lbl_80311D50[];
    extern M2C_UNK lbl_803682F0;
    memset(lbl_80311D50, 0, 0x1EA);
    lbl_80311D50[1] = 0;
    lbl_80311D50[0] = 0;
    lbl_80311D50[0xF] = 0;
    M2C_FIELD(arg0, u8 **, 0x34) = lbl_8026BE40 + 0x1A6;
    M2C_FIELD(arg0, u16 *, 0x38) = 0;
    M2C_FIELD(arg0, u16 *, 0x3A) = 0x20;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

extern u16 lbl_802EF4C8[12];
extern u8 lbl_8036723A;
extern u8 lbl_8026BE40[];
extern u8 lbl_80286DA8[];
extern u16 lbl_80311D50[124];
extern void fn_80006220(s32);
extern void fn_8002D780(s32);
extern void fn_8000BD98(void *);
extern void fn_8000BCA4(void *);
extern void fn_8000CAA0(void *, s32);
extern void fn_80023DE8(void);
