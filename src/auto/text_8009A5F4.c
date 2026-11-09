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

void fn_8009A5F4(void) {
    void fn_8000BF00(void *);
    extern u8 lbl_80289EB8[16];
    fn_8000BF00(lbl_80289EB8);
}

void fn_8009A61C(s32 arg0) {
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_80289EB8[16];
    fn_8000CAF0(lbl_80289EB8, arg0);
}

void fn_8009A648(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3E) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_803697E0;
    M2C_FIELD(arg0, s8 *, 0x3D) = 0;
}

void fn_8009A660(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) M2C_FIELD(arg0, u8 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_803697E4;
    M2C_FIELD(arg0, u8 *, 0x3D) = (u8) M2C_FIELD(arg0, u8 *, 0x3F);
}

void fn_8009A864(void *arg0) {
    void fn_8006D8E8(u32);
    u32 v = *(u32 *)((char *)arg0 + 0x38);
    if (v != 0) {
        fn_8006D8E8(v);
    }
}

void fn_8009A890(void *arg0) {
    M2C_UNK fn_80055C8C(void *, void *, void *);
    M2C_UNK fn_80059208(void *, void *);
    void fn_8009A934(void *);
    void fn_8009A970(void *);
    extern u8 lbl_8026D404[];

    M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x34) = 0.0f;
    M2C_FIELD(arg0, u8 *, 0x3D) = 0;
    M2C_FIELD(arg0, u8 *, 0x3F) = 0xC0;
    M2C_FIELD(arg0, u8 *, 0x40) = 0xA;
    M2C_FIELD(arg0, u8 *, 0x3E) = 0;
    M2C_FIELD(arg0, u8 *, 0x3C) = 0;
    M2C_FIELD(arg0, s16 *, 0x42) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s16 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    fn_80055C8C(lbl_8026D404 + 0xD8, fn_8009A934, arg0);
    fn_80059208(fn_8009A970, arg0);
}

void fn_8009A934(void *arg0) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026D404[];
    *(s32 *)((char *)arg0 + 0x38) = fn_8006D948(lbl_8026D404 + 0xD8);
}

s32 fn_8009ADC0(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    void fn_800075D8(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(u8);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8005926C(s32, s32, s32, s32, s32, s32, s32, s32);
    void fn_8014C880(void *, s32, u8 *, u8 *);
    extern u8 lbl_8026D3F8[];
    extern f32 lbl_803697E4;
    extern f32 lbl_803697FC;
    extern f32 lbl_80369808;
    extern f32 lbl_8036980C;
    extern f32 lbl_8036982C;
    extern f32 lbl_80369830;
    extern f32 lbl_80369834;
    extern f32 lbl_80369844;
    extern f64 lbl_80369848;
    extern f32 lbl_80369850;
    extern f32 lbl_80369854;
    extern f32 lbl_80369858;
    extern f32 lbl_8036985C;
    extern f32 lbl_80369860;
    static s32 width = 0x46;
    u8 buf[12];
    u8 sp9;
    u8 sp8;
    s32 saved;
    s32 var_r30;
    s32 temp_r29;

    saved = arg0;
    temp_r29 = arg1;
    sp9 = 0;
    sp8 = 0;
    fn_8014C880(lbl_80330708, 0, &sp9, &sp8);
    fn_8000A258();
    fn_80009D74(farg0, farg1, lbl_80369808, lbl_8036980C);
    fn_80009F90(saved, 3, 0x11);
    fn_80009B8C(temp_r29);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_803697E4, lbl_80369850, lbl_80369854, lbl_80369830, lbl_80369834, lbl_80369844);
    fn_800075D8();
    fn_80007884();
    *(s32 *)&buf[0] = *(s32 *)&lbl_8026D3F8[0];
    var_r30 = 0x30;
    *(s32 *)&buf[4] = *(s32 *)&lbl_8026D3F8[4];
    buf[8] = lbl_8026D3F8[8];
    temp_r29 = buf[(s8)sp9];
    if ((s8)sp8 != 0) {
        s8 arg7;
        fn_8000A258();
        fn_80009F90(saved, 6, 0x11);
        fn_8000A248();
        arg7 = sp8;
        fn_8005926C(0x38, 0xB, 0, 0, 0x10, 0x18, 0xC, arg7);
        fn_8000A258();
        fn_80009F90(saved, 7, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)width, lbl_8036982C, lbl_803697E4, lbl_803697E4, lbl_80369858, lbl_803697FC);
        fn_800075D8();
        fn_80007884();
        var_r30 = 0x82;
    }
    fn_8000A258();
    fn_80009F90(saved, 5, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C((f32)(var_r30 - 8), lbl_8036985C, lbl_803697E4, (f32)((s8)sp9 * 0x19), (f32)temp_r29, lbl_80369860);
    fn_800075D8();
    fn_80007884();
    var_r30 += temp_r29;
    fn_80009B28();
    return var_r30;
}

