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

void fn_80081830(void *arg0) {
    typedef struct { u8 r, g, b, a; } Color;
    void fn_800875B4(s32, s32, void *, f32, f32, f32, f32);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80009C0C(f32);
    void *fn_8000E0E4(void *);
    void fn_8000A174(s32, s32);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007884(void);
    u16 **fn_8006EDD8(s32, s32);
    Color *fn_8018D900(s32);
    void fn_80009F90(s32, s32, s32);
    void fn_80007870(f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    s8 fn_8003A5B4(void *);
    void fn_80231D94(void *, void *, s8, ...);
    s16 fn_80010B78(void *, s32, f32);
    u32 fn_800A883C(void *, s32);
    s32 fn_800A886C(s8 *);
    void fn_8005AC24(void *, s32, s32, s32);
    extern u8 lbl_8026C86C[];
    extern u8 lbl_802F0350[];
    extern s32 lbl_803674F4;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_80369434;
    extern f32 lbl_80369438;
    extern f32 lbl_8036943C;
    extern f32 lbl_803694BC;
    extern f32 lbl_803694E4;
    extern f32 lbl_8036953C;
    extern f32 lbl_80369458;
    extern f32 lbl_80369560;
    extern f32 lbl_80369574;
    extern f32 lbl_8036959C;
    extern f32 lbl_803695A4;
    extern f32 lbl_803695A8;
    f32 by;
    f32 bx;
    f32 y = M2C_FIELD(arg0, f32 *, 0x18);
    f32 x = lbl_80369430 + M2C_FIELD(arg0, f32 *, 0x14);
    void *obj58 = M2C_FIELD(arg0, void **, 0x58);
    void *unit = M2C_FIELD(obj58, void **, 0x18C);
    Color color;
    f32 h, w, sw, sh, tx;
    u16 *tex;
    void *str;
    s32 id, xpos;
    s16 width;
    s8 spC, sp8;
    char buf[64];

    fn_800875B4(0xB3, 0, obj58, x, y, lbl_8036953C, lbl_80369458);
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8026C86C + 0x2D4);
    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(1);
    bx = lbl_803694E4 + x;
    by = lbl_80369438 + y;
    fn_800077D8(bx, by, lbl_80369560, lbl_80369434);
    fn_800075D8();
    fn_800076AC(0, 0, 0, 0xFF);
    fn_80007884();
    tex = *fn_8006EDD8(lbl_803674F4, 0x1D);
    sh = (f32)tex[0] * lbl_80369430;
    sw = (f32)tex[1] * lbl_80369430;
    color = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x1D);
    w = (f32)tex[1];
    h = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x1D, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    tx = bx + lbl_80369560;
    fn_80007838(tx, by, lbl_80369418, lbl_80369418);
    fn_80007818(tx + sw, by + sh, w, h);
    fn_800076AC(color.r, color.g, color.b, 0xFF);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_8001003C((s32)(lbl_80369438 + bx), (s32)(by - lbl_8036943C), 9, 0, 0, str, lbl_80369430, lbl_80369418);
    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_80231D94(buf, lbl_8026C86C + 0x215, fn_8003A5B4(M2C_FIELD(arg0, void **, 0x58)));
    width = fn_80010B78(buf, -1, lbl_80369430);
    fn_8001003C((s32)((lbl_803695A4 + x) - (f32)(width / 2)), (s32)(lbl_8036959C + y), 1, 1, 0, buf, lbl_80369430, lbl_80369418);
    spC = (s8)(fn_800A883C(unit, 0) >> 24);
    xpos = (s32)(lbl_803694BC + x);
    fn_8005AC24(lbl_802F0350, xpos, (s32)(lbl_80369574 + y), fn_800A886C(&spC));
    sp8 = (s8)(fn_800A883C(unit, 1) >> 24);
    fn_8005AC24(lbl_802F0350, xpos, (s32)(lbl_803695A8 + y), fn_800A886C(&sp8));
    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
}
