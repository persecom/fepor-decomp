/* Functions from 0x8005AE20 to 0x80072408, found by decomp-toolkit. */
#include "common.h"

s32 fn_8005AE30(void) {
    return 1;
}

s32 fn_8005AE38(void) {
    return 0x400;
}

s32 fn_8005AE40(void) {
    return 0x60;
}

s32 fn_8005AE48(void) {
    return 0x20;
}

s32 fn_8005AE50(void) {
    return 2;
}

s32 fn_8005AE58(void) {
    return 0x20;
}

s32 fn_8005AE60(void) {
    return 0x20;
}

s32 fn_8005B42C(u32 *arg0, u32 arg1) {
    return (u32) *arg0 <= arg1;
}

void fn_8005B73C(void *arg0) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8005B8CC(void) {
    extern void *lbl_803672F4;
    if ((void *) lbl_803672F4 == NULL) {
        return 0;
    }
    return M2C_FIELD(lbl_803672F4, s32 *, 0x4000);
}

u8 fn_8005BA00(void) {
    extern u8 lbl_803672E8;
    return lbl_803672E8;
}

void fn_8005BA08(s8 arg0) {
    extern s8 lbl_803672E8;
    lbl_803672E8 = arg0;
}

void fn_8005BC8C(void) {
    M2C_UNK fn_8005C8D8();
    fn_8005C8D8();
}

void fn_8005BCAC(void) {
    fn_8005C8D8(-1);
}

void fn_8005BCD0(void) {
    M2C_UNK fn_8005CBC8();
    fn_8005CBC8();
}

void fn_8005C7C8(void) {
    M2C_UNK fn_8005D1DC();
    fn_8005D1DC();
}

void fn_8005C7E8(void) {
    M2C_UNK fn_8005D2CC();
    fn_8005D2CC();
}

void fn_8005C82C(void) {
    M2C_UNK fn_8005D474();
    fn_8005D474();
}

void fn_8005C870(void) {
    M2C_UNK fn_8005D330();
    fn_8005D330();
}

void fn_8005EB80(s32 arg0, s32 arg1) {
    M2C_UNK fn_8005EA14();
    M2C_UNK fn_8005EC18(s32, s32, M2C_UNK);
    if (arg0 != 0) {
        fn_8005EA14();
        fn_8005EC18(arg0, arg1, 0x40800000);
    }
}

void fn_8005F780(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x84) = arg1;
}

void fn_8005F7B0(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, u8 *, 0xB) = arg1;
    if (arg1 != 0xFF) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x20);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFFFFFDF);
}

void fn_8005F7E0(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 8) = arg1;
    M2C_FIELD(arg0, s8 *, 9) = arg2;
    M2C_FIELD(arg0, s8 *, 0xA) = arg3;
}

f32 fn_80060460(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x78);
}

f32 fn_80060468(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x58);
}

void fn_80063934(void) {
    M2C_UNK fn_8005C7E8();
    fn_8005C7E8();
}

void fn_80065E68(void) {
    M2C_UNK fn_8005C7E8();
    fn_8005C7E8();
}

s32 fn_80067478(void) {
    extern s32 lbl_80366DDC;
    return lbl_80366DDC;
}

s32 fn_800675E0(void) {
    extern s32 lbl_80366DD4;
    return lbl_80366DD4;
}

s32 fn_80068548(void) {
    extern s32 lbl_803672F8;
    return lbl_803672F8;
}

void fn_80068550(s32 arg0) {
    extern s32 lbl_803672F8;
    lbl_803672F8 = arg0;
}

u8 fn_80069DB4(void) {
    extern u8 lbl_80367302;
    return lbl_80367302;
}

u8 fn_80069E74(void) {
    extern u8 lbl_80367300;
    return lbl_80367300;
}

void fn_80069F04(s32 arg0) {
    M2C_UNK fn_80069F2C(M2C_UNK, s32);
    fn_80069F2C(-1, arg0);
}

s32 fn_8006A374(void) {
    extern s32 lbl_8036730C;
    return lbl_8036730C;
}

s32 fn_8006A37C(void) {
    extern s32 lbl_80367308;
    return lbl_80367308;
}

void fn_8006D8E8(s32 arg0) {
    M2C_UNK fn_8006EDA0(s32 *);
    s32 sp8;

    sp8 = arg0;
    fn_8006EDA0(&sp8);
}

s32 fn_8006D910(s32 arg0, s32 arg1) {
    M2C_UNK fn_8006EDE8(s32 *, s32, s32);
    s32 sp8;

    sp8 = 0;
    fn_8006EDE8(&sp8, arg0, arg1);
    return sp8;
}

s32 fn_8006D948(s32 arg0) {
    s32 sp8;

    sp8 = 0;
    fn_8006EDE8(&sp8, arg0, 0);
    return sp8;
}

void fn_8006DA5C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 fn_8006E650(void) {
    extern s32 lbl_80367318;
    return lbl_80367318;
}

s32 fn_8006E658(void) {
    extern s32 lbl_80367324;
    return lbl_80367324;
}

s32 fn_8006EB9C(void) {
    extern s32 lbl_80367320;
    return lbl_80367320;
}

s32 fn_8006EDD8(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + (arg1 * 8);
}

void fn_8006F00C(s8 arg0) {
    extern s8 lbl_80366DE9;
    lbl_80366DE9 = arg0;
}

s32 fn_8006F370(void) {
    return 0;
}

void fn_8006F378(void) {
    M2C_UNK fn_80024DE4();
    fn_80024DE4();
}

s32 fn_800703D4(void) {
    return 0;
}

void fn_80070EDC(void) {

}

void fn_80071B34(void) {
    M2C_UNK fn_8018DAD4();
    fn_8018DAD4();
}

void fn_80071B88(void) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369300;
    fn_8000A258();
    fn_80009C0C(lbl_80369300);
    fn_8000A174(0, 0x13);
    fn_8000A248();
}

s32 fn_80072150(void) {
    extern s8 lbl_80366DE8;
    lbl_80366DE8 = 0;
    return 5;
}

void fn_80072170(void *arg0) {
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_80072194(void) {
    return 0xA0;
}

s32 fn_8007219C(void) {
    return 0x100;
}

s32 fn_800721A4(void) {
    return 0x20;
}

s32 fn_800721AC(void) {
    return 0x88;
}

void fn_800721B4(void *arg0) {
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 0xC));
}

s32 fn_800721D8(void) {
    return 0x160;
}

s32 fn_800721E0(void) {
    return 0x48;
}

s16 fn_800721E8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

s32 fn_80072200(void) {
    return 0x108;
}

s32 fn_80072208(void) {
    return 0x78;
}

s32 fn_80072210(void) {
    return 0x78;
}

s32 fn_80072218(void) {
    return 0x98;
}

s16 fn_80072220(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xE);
}

s16 fn_80072228(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

s32 fn_80072230(void) {
    return 0xB0;
}

f32 fn_80072238(void) {
    extern f32 lbl_80369360;
    return lbl_80369360;
}

s32 fn_80072270(void) {
    return 4;
}

s32 fn_80072278(void) {
    return 4;
}

s32 fn_80072280(void) {
    return 0xB0;
}

s32 fn_80072288(void) {
    return 8;
}

s32 fn_80072290(void) {
    return 8;
}

s32 fn_80072320(void) {
    return 0x54;
}

s32 fn_8007234C(void) {
    return 0x54;
}

s32 fn_80072354(void) {
    return 0x50;
}

s32 fn_8007235C(void) {
    return 0x42;
}

s32 fn_80072364(void) {
    return 0x12C;
}

s32 fn_8007236C(void) {
    return 0x1C;
}

s32 fn_80072374(void) {
    return 0x14;
}

s32 fn_8007237C(void) {
    return 0x1E;
}

s32 fn_80072384(void) {
    return 0x28;
}

s32 fn_8007238C(void) {
    return 0xB4;
}

s32 fn_80072394(void) {
    return 0;
}

s32 fn_8007239C(void) {
    return 0x90;
}

s32 fn_800723C4(void) {
    return 0;
}

s32 fn_800723CC(void) {
    return 0x14;
}

s32 fn_800723D4(void) {
    return 0x190;
}

s32 fn_800723DC(void) {
    return 0x80;
}

void fn_800723E4(void *arg0) {
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
}

