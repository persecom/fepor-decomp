/* Functions from 0x80149FB8 to 0x8014A25C, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

void fn_80149FB8(void *arg0) {
    extern u8 lbl_8029275C[];
    extern u8 lbl_802925F8[];
    extern u8 lbl_802927F4[];
    *(void **)((u8 *)arg0 + 0x18) = lbl_802927F4;
    *(void **)((u8 *)arg0 + 8) = lbl_8029275C;
    *(void **)((u8 *)arg0 + 0x18) = lbl_802925F8;
}

void fn_80149FE0(void *arg0) {
    extern u8 lbl_8029275C[];
    extern u8 lbl_802927CC[];
    extern u8 lbl_802927F4[];
    *(void **)((u8 *)arg0 + 0x18) = lbl_802927F4;
    *(void **)((u8 *)arg0 + 8) = lbl_8029275C;
    *(void **)((u8 *)arg0 + 0x18) = lbl_802927CC;
}

void fn_8014A008(void *arg0) {
    extern u8 lbl_8029275C[];
    extern u8 lbl_802927E0[];
    extern u8 lbl_802927F4[];
    *(void **)((u8 *)arg0 + 0x18) = lbl_802927F4;
    *(void **)((u8 *)arg0 + 8) = lbl_8029275C;
    *(void **)((u8 *)arg0 + 0x18) = lbl_802927E0;
}

void fn_8014A030(s32 arg0) {
    void fn_80147188(s32);
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_802928A8[];
    extern s8 lbl_80367B09;
    extern s8 lbl_80367B0A;
    extern s8 lbl_80367B0B;
    extern s8 lbl_80367B0C;

    lbl_80367B0A = 0;
    lbl_80367B09 = 0;
    lbl_80367B0C = 0;
    lbl_80367B0B = 0;
    fn_80147188(0);
    fn_8000CAA0(lbl_802928A8, arg0);
}

void fn_8014A084(s32 arg0) {
    M2C_UNK fn_8000C060(s32, M2C_UNK);
    M2C_UNK fn_800C426C(s32);
    M2C_UNK fn_80109020(M2C_UNK);
    M2C_UNK fn_80146AF0();
    extern s32 lbl_80367B00;
    fn_80109020(0);
    fn_8000C060(arg0, 0);
    fn_800C426C(lbl_80367B00);
    lbl_80367B00 = 0;
    fn_80146AF0();
}

void fn_8014A0D4(void *arg0) {
    void *fn_80109180(void *, void *);
    void fn_800AA1CC(void);
    void fn_80024398(void *, void *, s32);
    void fn_80146B00(void);
    extern u8 lbl_80276F00[];
    extern s8 lbl_80367700;
    extern s8 lbl_80367701;
    extern s8 lbl_80367705;
    extern s32 lbl_80367B60;
    void *tmp;

    fn_80109180(&lbl_80276F00[0xD], arg0);
    tmp = fn_80109180(&lbl_80276F00[0x16], arg0);
    *((u8 *)tmp + 0x60) = 0;
    fn_800AA1CC();
    lbl_80367705 = 1;
    lbl_80367700 = 0;
    lbl_80367701 = 0;
    fn_80024398(&lbl_80367B60, arg0, 0);
    fn_80146B00();
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
}

void fn_8014A160(void *arg0) {
    extern f32 lbl_8036A7B8;
    extern f32 lbl_8036A7BC;
    extern u8 lbl_80276F00[];
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8001019C(s32, s32, s32, void *, ...);
    void *fn_801090C0(void *);
    void fn_80109C1C(void *, s32);
    void fn_80109C80(void *, s32);

    fn_8000A258();
    fn_80009D74(lbl_8036A7B8, lbl_8036A7B8, lbl_8036A7B8, lbl_8036A7BC);
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_8001019C(0x20, 0x1A4, 1, lbl_80276F00 + 0x2B);
    *(s32 *)((u8 *)arg0 + 0x30) = *(s32 *)((u8 *)arg0 + 0x30) + 1;
    if (*(s32 *)((u8 *)arg0 + 0x30) == 0xE10) {
        fn_80109C1C(fn_801090C0(lbl_80276F00 + 0xD), 0xFF);
        fn_80109C80(fn_801090C0(lbl_80276F00 + 0x16), 0xFF);
    }
    if (*(s32 *)((u8 *)arg0 + 0x30) == 0x1C20) {
        fn_80109C80(fn_801090C0(lbl_80276F00 + 0xD), 0xFF);
        fn_80109C1C(fn_801090C0(lbl_80276F00 + 0x16), 0xFF);
        *(s32 *)((u8 *)arg0 + 0x30) = 0;
    }
}

