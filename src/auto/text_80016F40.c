/* Functions from 0x80016F40 to 0x80019558, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_80330708[700]; // 1400 bytes / 2 = 700 u16s

void* fn_8014C5A8(u16 *, u8);
extern u8 lbl_802841B0[16];


void fn_80016F40(void) {
    extern u16 lbl_802B14E4[];
    extern void fn_800169A8(void);
    fn_8022C1E8(lbl_802B14E4, fn_800169A8, 0x280, 0x9F);
}

void *fn_80016F78(void *arg0) {
    void fn_8022C260(void *, s32 (*)(s32), s32 (*)(s32, s16), s32, s32);
    s32 fn_8001C76C(s32);
    s32 fn_8001C5F8(s32, s16);

    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    fn_8022C260((u8 *)arg0 + 0x1CC, fn_8001C76C, fn_8001C5F8, 8, 4);
    fn_8022C260((u8 *)arg0 + 0x1EC, fn_8001C76C, fn_8001C5F8, 8, 4);
    M2C_FIELD(arg0, s16 *, 0x228) = 0;
    M2C_FIELD(arg0, s16 *, 0x22A) = 0;
    M2C_FIELD(arg0, s16 *, 0x22C) = 0;
    M2C_FIELD(arg0, s16 *, 0x22E) = 0;
    M2C_FIELD(arg0, s16 *, 0x230) = 0;
    M2C_FIELD(arg0, s16 *, 0x232) = 0;
    M2C_FIELD(arg0, s8 *, 0x234) = 0;
    M2C_FIELD(arg0, s8 *, 0x235) = 0;
    return arg0;
}

void *fn_80017240(u8 *arg0) {
    void *fn_80016BDC(char *);
    extern char lbl_80268128[];

    if (fn_8014C5A8(lbl_80330708, *arg0) == NULL) {
        return NULL;
    }
    return fn_80016BDC(lbl_80268128 + 0x4C);
}

u8 fn_80017290(u8 *arg0) {
    void *fn_8014C5A8(u16 *, u8);
    u16* temp_r3;
    
    temp_r3 = fn_8014C5A8(lbl_80330708, *arg0);
    if (temp_r3 == NULL) {
        return -1; /* try signed */
    }
    return *(u8*)((char*)temp_r3 + 3);
}

void fn_800173B4(u8 *arg0, void *arg1) {
    u8 fn_80105BC0(void *, M2C_UNK);
    if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0)) {
        *arg0 = 1;
        return;
    }
    *arg0 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x190), u8 *, 8);
}

void fn_80017414(void *arg0, s32 arg1) {
    s16 fn_8017A9B0(s32);
    s8 fn_8017A9DC(s32);
    M2C_FIELD(arg0, s16 *, 0) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 2) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 4) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 6) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 8) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 0xA) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s8 *, 0xC) = fn_8017A9DC(arg1);
    M2C_FIELD(arg0, s8 *, 0xD) = fn_8017A9DC(arg1);
}

void fn_800174A8(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A5C4(s32, u16);
    M2C_UNK fn_8017A5EC(s32, u8);
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 0));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 2));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 4));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 6));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 8));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 0xA));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xC));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xD));
}

void fn_8001753C(s16 *arg0) {
    s16 fn_8000CEE4(M2C_UNK);
    *arg0 = fn_8000CEE4(0xE4C);
}

s32 fn_8001772C(void) {
    void *fn_8000C0C0(void *);
    void *p;

    p = fn_8000C0C0(lbl_802841B0);
    if (p != NULL && M2C_FIELD(p, u8 *, 0x3C) == 0) {
        return 1;
    }
    return 0;
}

void fn_80017774(void) {
    fn_8000BF00(&lbl_802841B0);
}

void fn_8001779C(s32 arg0) {
    void *fn_8000C0C0(void *);
    void fn_800180F4(void *, u8);
    void *p;

    p = fn_8000C0C0(lbl_802841B0);
    if (p != NULL) {
        fn_800180F4(p, arg0);
    }
}

void fn_800177E0(s32 arg0) {
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern char lbl_80268330[];
    void *p;

    p = fn_8000CAF0(lbl_802841B0, arg0);
    M2C_FIELD(p, s32 *, 0x40) = fn_800C4638(0x1400, lbl_80268330 + 0x4E, 0);
    M2C_FIELD(p, u8 *, 0x44) = 0;
    M2C_FIELD(p, u8 *, 0x3C) = 0;
}

void fn_80017BFC(void) {
    M2C_UNK fn_8001840C();
    fn_8001840C();
}

s32 fn_80018A08(u8 arg0) {
    f32 var_f2;
    
    if (lbl_803671C4 == 0) {
        return 0;
    }
    if (lbl_803671C8 == 0) {
        f32 *ptr = (f32*) 0x80330708;
        *(f32 *) (((u32) lbl_803671C4) + 0x4C) = ptr[0x14B];
        *(f32 *) (((u32) lbl_803671C4) + 0x50) = ptr[0x14C];
        *(f32 *) (((u32) lbl_803671C4) + 0x54) = ptr[0x14F];
    }

    var_f2 = lbl_80368C8C;
    if (arg0 != 0) {
        var_f2 = lbl_80368CAC;
    }
    if (fabsf(*(f32 *) (((u32) lbl_803671C4) + 0x4C) - *(f32 *) (((u32) lbl_803671C4) + 0x40)) > var_f2) {
        return 1;
    }
    if (fabsf(*(f32 *) (((u32) lbl_803671C4) + 0x50) - *(f32 *) (((u32) lbl_803671C4) + 0x44)) > var_f2) {
        return 1;
    }
    return 0;
}

s32 fn_80018ADC(void) {
    extern s32 lbl_803671C4;
    return lbl_803671C4;
}

void fn_80018AE4(void) {
    extern u8 lbl_803671C0;
    lbl_803671C0 -= 1;
}

void fn_80018AF4(void) {
    lbl_803671C0 += 1;
}

void fn_80018B04(void) {
    u8 temp = lbl_80366DB0;
    lbl_803671C0 = temp;
    lbl_80366DB0 = 0xFF;
}

void fn_80018B18(void) {
    extern u8 lbl_80366DB0;
    extern u8 lbl_803671C0;
    lbl_80366DB0 = lbl_803671C0;
}

void fn_800193CC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x18) = farg0;
}

