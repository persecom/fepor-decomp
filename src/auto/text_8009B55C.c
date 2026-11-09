/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
extern void* lbl_803674E8;
extern f32 lbl_803696C8;

extern s32 lbl_803682F0;
extern void *lbl_8026CC58;
extern void *lbl_80289998;
extern f32 lbl_80369690;
extern f32 lbl_803696A8;
extern f32 lbl_803696AC;

extern void* lbl_80367488;
extern s32 lbl_803693C0;
extern s32 lbl_803693C4;
extern f64 lbl_803693C8;
extern f32 lbl_803693D4;
extern f32 lbl_803693D8;
extern f32 lbl_803693E4;

extern u8 lbl_80330708[1400];

extern u16 *lbl_803674E0;

#pragma inline

extern f32 lbl_8036A118;
extern f32 lbl_8036A120;
extern f32 lbl_8036A130;
extern f32 lbl_8036A154;

extern f32 lbl_80369768;
extern u16 lbl_80289A60[];

extern u8 lbl_80289B00[16];

extern void* fn_800980D4(s32 arg0);
extern void fn_8017E394(void* arg0, void* arg1, void* arg2, s32 arg3);

extern u8 lbl_80289EB8[16];

extern f32 lbl_803697E0;
extern f32 lbl_803697E4;

#pragma scheduling reset

void fn_8009B55C(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    M2C_UNK fn_800075D8();
    M2C_UNK fn_8000770C(f32, f32, f32, f32, f32, f32);
    M2C_UNK fn_80009F90(s32, M2C_UNK, M2C_UNK);
    extern f32 lbl_803697E4;
    extern f32 lbl_803697F8;
    extern f32 lbl_803697FC;
    extern f32 lbl_80369808;
    extern f32 lbl_8036980C;
    extern f32 lbl_8036981C;
    extern f32 lbl_80369830;
    extern f32 lbl_80369844;
    extern f32 lbl_80369860;
    extern f32 lbl_80369868;
    extern f32 lbl_8036987C;
    extern f32 lbl_80369880;
    extern f32 lbl_80369884;
    extern f32 lbl_80369888;
    extern f32 lbl_8036988C;

    switch (arg1) {
    case 0:
        fn_8000A258();
        fn_80009D74(farg0, farg1, lbl_80369808, lbl_8036980C);
        fn_80009F90(arg0, 8, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_8036987C, lbl_803697FC, lbl_803697E4, lbl_803697E4, lbl_80369860, lbl_8036981C);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_8000770C(lbl_80369880, lbl_803697FC, lbl_80369830, lbl_803697E4, lbl_80369884, lbl_8036981C);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_8000770C(lbl_80369888, lbl_803697FC, lbl_80369868, lbl_803697E4, lbl_803697FC, lbl_8036981C);
        fn_800075D8();
        fn_80007884();
        break;
    case 1:
        fn_8000A258();
        fn_80009D74(farg0, farg1, lbl_80369808, lbl_8036980C);
        fn_80009F90(arg0, 9, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_803697F8, lbl_803697FC, 0.0f, 0.0f, lbl_803697F8, lbl_8036981C);
        fn_800075D8();
        fn_80007884();
        break;
    case 2:
        fn_8000A258();
        fn_80009D74(farg0, farg1, lbl_80369808, lbl_8036980C);
        fn_80009F90(arg0, 0xA, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369844, lbl_803697FC, 0.0f, 0.0f, lbl_8036988C, lbl_803697FC);
        fn_800075D8();
        fn_80007884();
        break;
    }
}

void fn_8009B738(void* arg0, void* arg1) {
    if (arg1 != NULL && arg0 != NULL) {
        u32* src = (u32*)arg1;
        u32* dst = (u32*)arg0;
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        dst[5] = src[5];
        dst[6] = src[6];
    }
}

void fn_8009CF28(void) {
    void fn_80007124(u8 *);
    void fn_80007790(f32, f32, f32, f32);
    void fn_80007858(f32, f32);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007884(void);
    extern u8 lbl_8026D568[];
    extern s32 lbl_80367110;
    extern f32 lbl_803698FC;
    extern f32 lbl_80369900;
    extern f32 lbl_8036992C;
    extern f32 lbl_80369930;
    extern f32 lbl_80369934;
    extern f32 lbl_80369938;
    extern f32 lbl_8036993C;
    extern f32 lbl_80369940;
    extern f32 lbl_80369944;
    extern f32 lbl_80369948;
    extern f32 lbl_8036994C;
    extern f32 lbl_80369950;
    extern f32 lbl_80369954;
    extern f32 lbl_80369958;
    extern f32 lbl_8036995C;
    extern f32 lbl_80369960;
    extern f32 lbl_80369964;
    extern f32 lbl_80369968;

    fn_8000A258();
    fn_80009D74(lbl_803698FC, lbl_803698FC, lbl_803698FC, lbl_80369900);
    fn_8000A174(0, 0);
    fn_8000A248();
    fn_80007898(4);
    fn_80007790(lbl_80369930, lbl_80369934, lbl_80369938, lbl_80369934);
    fn_80007884();
    fn_80007898(4);
    fn_80007790(lbl_80369938, lbl_80369934, lbl_80369938, lbl_8036993C);
    fn_80007884();
    fn_80007898(4);
    fn_80007790(lbl_80369938, lbl_8036993C, lbl_80369930, lbl_8036993C);
    fn_80007884();
    fn_80007898(4);
    fn_80007790(lbl_80369930, lbl_80369934, lbl_80369930, lbl_8036993C);
    fn_80007884();
    fn_80007898(4);
    fn_80007790(lbl_80369940, lbl_80369944, lbl_80369948, lbl_80369944);
    fn_80007884();
    fn_80007898(4);
    fn_80007790(lbl_8036992C, lbl_8036994C, lbl_8036992C, lbl_80369950);
    fn_80007884();
    fn_80007898(4);
    fn_80007790(lbl_80369954, lbl_80369944, lbl_80369958, lbl_80369944);
    fn_80007884();
    fn_80007898(4);
    fn_80007790(lbl_8036995C, lbl_80369960, lbl_8036995C, lbl_80369964);
    fn_80007884();
    fn_8000A258();
    fn_8000A174(0, 3);
    fn_8000A248();
    if (lbl_80367110 & 2) {
        fn_80007898(7);
        fn_80007858(lbl_80369930, lbl_80369934);
        fn_80007124(lbl_8026D568 + 0x47);
        fn_80007884();
    }
    if (lbl_80367110 & 1) {
        fn_80007898(7);
        fn_80007858(lbl_80369968, lbl_80369934);
        fn_80007124(lbl_8026D568 + 0x49);
        fn_80007884();
    }
}

void fn_8009E574(void) {
    extern u16 lbl_80312100[];
    lbl_80312100[0x62] = 0x1;
}

void fn_8009E588(void) {
    s32 fn_8006EB9C(void);
    void fn_8021F1B8(s32, void *, void *);
    s32 spC;
    s32 sp8;

    fn_8021F1B8(fn_8006EB9C(), &sp8, &spC);
}

void fn_8009E5B4(void) {
    s32 fn_8006EB9C(void *);
    void fn_8021F1B8(s32, void *, void *);
    extern u8 lbl_80312100[];
    s32 sp8;

    lbl_80312100[0xC4] = 0;
    fn_8021F1B8(fn_8006EB9C(lbl_80312100), &sp8, lbl_80312100 + 0xB4);
}

void fn_8009E5F8(void) {
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x24) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x28) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x2C) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x30) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x34) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x38) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x3C) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x40) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x64) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x68) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x6C) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x70) = 0;
}

void fn_8009E638(void) {
    extern u16 lbl_80312100[100];
    *(u16*)((u8*)lbl_80312100 + 0xe) = 0;
}

void fn_8009E64C(void) {
    u32 OSGetTick(void);
    extern u8 lbl_80312100[];
    u8 *p = lbl_80312100;

    *(u32 *)(p + 0x1c) = OSGetTick() - *(u32 *)(p + 0x1c);
}

void fn_8009E688(void) {
    extern u16 lbl_80312100;
    u32* ptr = (u32*)((char*)&lbl_80312100 + 0x1C);
    *ptr = OSGetTick();
}

void fn_8009E6B4(void) {
    u32 OSGetTick(void);
    extern u8 lbl_80312100[];
    u8 *p = lbl_80312100;

    *(u32 *)(p + 0x10) = OSGetTick() - *(u32 *)(p + 0x10);
}

void fn_8009E6F0(void) {
    extern u16 lbl_80312100;
    *(u32*)((char*)&lbl_80312100 + 0x10) = OSGetTick();
}

void fn_8009E71C(void) {
    s32 OSGetTick(M2C_UNK *);
    M2C_UNK fn_800070C8(void *, void *, void *, void *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0xC) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 0xC));
    fn_800070C8(&lbl_80312100 + 0xB8, &lbl_80312100 + 0xBC, &lbl_80312100 + 0xBE, &lbl_80312100 + 0xC0);
}

void fn_8009E774(void) {
    extern u16 lbl_80312100[];
    *(u32 *)((u8 *)lbl_80312100 + 0xc) = OSGetTick();
}

void fn_8009E7A0(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 8) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 8));
}

void fn_8009E7DC(void) {
    extern u16 lbl_80312100[100];
    s32 tick = OSGetTick();
    lbl_80312100[0] = (u16)tick;
}

void fn_8009E808(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 4) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 4));
}

void fn_8009E844(void) {
    s32 OSGetTick();
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 4) = OSGetTick();
}

void fn_8009E9A0(void) {
    s32 OSGetTick();
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x14) = (s32) (OSGetTick() - M2C_FIELD(&lbl_80312100, s32 *, 0));
}

void fn_8009E9D0(void) {
    s32 OSGetTick();
    M2C_UNK fn_8006EB9C();
    M2C_UNK fn_8021F1B8(M2C_UNK *, void *);
    M2C_UNK fn_80225BF4(s32 *);
    extern s32 lbl_80312100;
    extern M2C_UNK lbl_803121C8;
    M2C_UNK sp8;

    lbl_80312100 = OSGetTick();
    fn_80225BF4(&lbl_80312100);
    fn_8006EB9C();
    fn_8021F1B8(&sp8, &lbl_803121C8 + 0x9C);
}

