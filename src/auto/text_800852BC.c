/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
typedef struct {
    f32 x, y;
    u8 unk8[4];
    s8 next;
    u8 type;
    u8 unkE[6];
} Menu888Entry;
extern void* lbl_803674E8;
extern f32 lbl_803696C8;

extern s32 lbl_803682F0;
extern u8 lbl_8026CC58[];
extern u8 lbl_80289998[];
extern f32 lbl_80369690;
extern f32 lbl_803696A8;
extern f32 lbl_803696AC;
extern f64 lbl_803696C0;

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


void fn_800852BC(s32 arg0) {
    M2C_UNK fn_80069F04(s32);
    M2C_UNK fn_80223E5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802246B8(M2C_UNK);
    fn_802246B8(0);
    fn_80223E5C(6, 0x80, 1, 0, 0);
    fn_80069F04(arg0);
    fn_802246B8(1);
    fn_80223E5C(7, 0, 1, 7, 0);
}

void fn_8008532C(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

void fn_80085360(void *arg0) {
    M2C_UNK fn_800072B0(s32 *, s32 *, s32 *, s32 *, s32, s32, s32);
    M2C_UNK fn_800075D8();
    M2C_UNK fn_80007818(f32, f32, f32, f32);
    M2C_UNK fn_80007838(f32, f32, f32, f32);
    M2C_UNK fn_80009B8C(M2C_UNK);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s16, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    M2C_UNK fn_80083E70(void *);
    M2C_UNK fn_80083F08(void *);
    M2C_UNK fn_802343E0(void *, void *);
    M2C_UNK fn_80234450(void *, void *);
    extern u8 lbl_8026C86C[];
    extern s32 lbl_80369400;
    extern s32 lbl_80369404;
    extern s32 lbl_80369408;
    extern s32 lbl_8036940C;
    extern f32 lbl_80369418;
    extern f32 lbl_8036941C;
    extern f32 lbl_80369420;
    extern f32 lbl_80369424;
    extern f32 lbl_80369428;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_80369488;
    extern s32 lbl_8036C460;
    extern s32 lbl_8036C464;
    extern s32 lbl_8036C468;
    extern s32 lbl_8036C46C;
    char sp28[128];
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s16 var_r3;
    void *temp_r31;

    if (arg0 != NULL) {
        temp_r31 = M2C_FIELD(arg0, void **, 0x30);
        fn_80083F08(temp_r31);
        fn_80083E70(temp_r31);
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_80009D74(lbl_80369418, lbl_80369418, lbl_80369488, lbl_80369430);
        fn_8000A248();
        fn_80234450(sp28, (u8 *)lbl_8026C86C + 0x1B5);
        fn_802343E0(sp28, fn_8000E0E4((u8 *)lbl_8026C86C + 0x1BB));
        fn_802343E0(sp28, (u8 *)lbl_8026C86C + 0x1C3);
        fn_802343E0(sp28, fn_8000E0E4((u8 *)lbl_8026C86C + 0x1CA));
        fn_802343E0(sp28, (u8 *)lbl_8026C86C + 0x1D1);
        fn_802343E0(sp28, fn_8000E0E4((u8 *)lbl_8026C86C + 0x1D8));
        fn_802343E0(sp28, (u8 *)lbl_8026C86C + 0x1DF);
        fn_802343E0(sp28, fn_8000E0E4((u8 *)lbl_8026C86C + 0x1E6));
        if ((u32) M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x58), u32 *, 0x194) != 0U) {
            fn_802343E0(sp28, (u8 *)lbl_8026C86C + 0x1F0);
            fn_802343E0(sp28, fn_8000E0E4((u8 *)lbl_8026C86C + 0x1F7));
        }
        fn_8000A258();
        fn_8000A174(0, 0x12);
        fn_8000A248();
        fn_80007898(3);
        fn_80007838(lbl_80369418, lbl_8036941C, lbl_80369418, lbl_80369418);
        fn_80007818(lbl_80369420, lbl_80369424, lbl_80369418, lbl_80369418);
        sp14 = lbl_80369404;
        sp10 = lbl_80369400;
        spC = lbl_8036C464;
        sp8 = lbl_8036C460;
        fn_800072B0(&sp8, &spC, &sp10, &sp14, lbl_8036C464, lbl_80369400, lbl_80369404);
        fn_800075D8();
        fn_80007884();
        fn_80007898(3);
        fn_80007838(lbl_80369418, lbl_80369424, lbl_80369418, lbl_80369418);
        fn_80007818(lbl_80369420, lbl_80369428, lbl_80369418, lbl_80369418);
        sp24 = lbl_8036C46C;
        sp20 = lbl_8036C468;
        sp1C = lbl_8036940C;
        sp18 = lbl_80369408;
        fn_800072B0(&sp18, &sp1C, &sp20, &sp24, lbl_8036940C, lbl_8036C468, lbl_8036C46C);
        fn_800075D8();
        fn_80007884();
        fn_8000A258();
        fn_80009C0C(lbl_8036942C);
        fn_8000A248();
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        var_r3 = 0x130 - (fn_80010B78(sp28, -1, lbl_80369430) / 2);
        fn_8001003C(var_r3, 0x197, 1, 1, 0, sp28, lbl_80369430, lbl_80369418);
        fn_8000A258();
        fn_80009C0C(lbl_80369430);
        fn_8000A248();
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}

void fn_8008563C(u8 *arg0, f32 x, f32 y, f32 w, f32 h) {
    typedef struct { u8 r, g, b, a; } Color;
    void fn_8000A258(void);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007884(void);
    void fn_80009C0C(f32);
    u16 **fn_8006EDD8(s32, s32);
    Color *fn_8018D900(s32);
    void fn_80009F90(s32, s32, s32);
    void fn_80007870(f32);
    void fn_800075D8(void);
    extern s32 lbl_803674F4;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_8036943C;
    extern f64 lbl_80369440;
    extern f64 lbl_80369470;
    extern f32 lbl_80369480;
    extern f32 lbl_803694CC;
    extern f32 lbl_803694D0;
    extern f32 lbl_803694E4;
    extern f32 lbl_8036951C;
    extern f32 lbl_803695AC;

    Color c0, c1, c2, c3, c4, c5, c6, c7;
    f32 fx, fy, fw, fh;
    f32 sh, sw, th, tw;
    f32 x2, y2, x3, y3, x4, y4;
    f32 edgeL, edgeR, edgeT, edgeB;
    u16 *tex;
    s32 id;
    s16 ix, iy;

    fx = x;
    fy = y;
    fw = w;
    fh = h;
    ix = (s16)(lbl_8036951C + fx);
    iy = (s16)(lbl_8036951C + fy);
    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838((f32)ix, (f32)iy, lbl_80369418, lbl_80369418);
    fn_80007818((f32)(ix + (s16)(fw - lbl_8036943C)), (f32)(iy + (s16)(fh - lbl_8036943C)), lbl_80369418, lbl_80369418);
    fn_800076AC(arg0[0], arg0[1], arg0[2], arg0[3]);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();

    tex = *fn_8006EDD8(lbl_803674F4, 0x45);
    sh = (f32)tex[0] * lbl_80369430;
    sw = (f32)tex[1] * lbl_80369430;
    c0 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x45);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x45, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    fn_80007838(fx, fy, lbl_80369418, lbl_80369418);
    fn_80007818(fx + sw, fy + sh, tw, th);
    fn_800076AC(c0.r, c0.g, c0.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = *fn_8006EDD8(lbl_803674F4, 0x47);
    sh = (f32)tex[0] * lbl_80369430;
    sw = (f32)tex[1] * lbl_80369430;
    c1 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x47);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x47, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    x2 = fx + fw;
    edgeR = x2 - lbl_80369480;
    fn_80007838(edgeR, fy, lbl_80369418, lbl_80369418);
    fn_80007818(edgeR + sw, fy + sh, tw, th);
    fn_800076AC(c1.r, c1.g, c1.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = *fn_8006EDD8(lbl_803674F4, 0x4A);
    sh = (f32)tex[0] * lbl_80369430;
    sw = (f32)tex[1] * lbl_80369430;
    c2 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x4A);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x4A, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    y2 = fy + fh;
    edgeB = y2 - lbl_803694CC;
    fn_80007838(fx, edgeB, lbl_80369418, lbl_80369418);
    fn_80007818(fx + sw, edgeB + sh, tw, th);
    fn_800076AC(c2.r, c2.g, c2.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = *fn_8006EDD8(lbl_803674F4, 0x4C);
    sh = (f32)tex[0] * lbl_80369430;
    sw = (f32)tex[1] * lbl_80369430;
    c3 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x4C);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x4C, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    fn_80007838(edgeR, edgeB, lbl_80369418, lbl_80369418);
    fn_80007818(edgeR + sw, edgeB + sh, tw, th);
    fn_800076AC(c3.r, c3.g, c3.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    c4 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x46);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x46, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    edgeL = lbl_80369480 + fx;
    {
        f32 yb = lbl_8036951C + fy;
        fn_80007838(edgeL, yb, lbl_80369418, lbl_80369418);
        x3 = edgeL + ((fw - lbl_80369480) - lbl_80369480);
        fn_80007818(x3, yb + lbl_803694D0, tw, th);
    }
    fn_800076AC(c4.r, c4.g, c4.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    c5 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x4B);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x4B, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    y3 = y2 - lbl_803694E4;
    fn_80007838(edgeL, y3, lbl_80369418, lbl_80369418);
    fn_80007818(x3, y3 + lbl_803694D0, tw, th);
    fn_800076AC(c5.r, c5.g, c5.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    c6 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x48);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x48, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    y4 = lbl_803695AC + fy;
    fn_80007838(fx, y4, lbl_80369418, lbl_80369418);
    x4 = y4 + ((fh - lbl_803694CC) - lbl_803694CC);
    fn_80007818(fx + lbl_803694D0, x4, tw, th);
    fn_800076AC(c6.r, c6.g, c6.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    c7 = *fn_8018D900(1);
    id = lbl_803674F4;
    tex = *fn_8006EDD8(id, 0x49);
    tw = (f32)tex[1];
    th = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x49, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    edgeT = x2 - lbl_8036943C;
    fn_80007838(edgeT, y4, lbl_80369418, lbl_80369418);
    fn_80007818(edgeT + lbl_803694D0, x4, tw, th);
    fn_800076AC(c7.r, c7.g, c7.b, 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
}

void fn_80086020(s32 arg0, s32 arg1, f32 x, f32 y, f32 w, f32 h) {
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007870(f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void **fn_8006EDD8(void *, s32);
    s32 *fn_8018D900(u8);
    extern void *lbl_803674F4;
    extern f64 lbl_80369440;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_8036943C;
    extern f32 lbl_80369464;
    extern f32 lbl_80369480;
    extern f32 lbl_8036949C;
    extern f32 lbl_803694D0;
    extern f32 lbl_803694E4;
    extern f32 lbl_80369500;
    extern f32 lbl_80369514;
    extern f32 lbl_8036951C;
    extern f32 lbl_80369598;
    extern f32 lbl_8036959C;
    extern f32 lbl_803695AC;
    extern f32 lbl_80369668;

    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    void *mgr;
    u16 *tex;
    f32 tw;
    f32 th;
    f32 sw;
    f32 sh;
    f32 x1;
    f32 y1;
    f32 xR;
    f32 yB;
    f32 xR2;
    f32 yB2;
    f32 xL2;
    f32 edge;
    f32 yT2;
    f32 xa;
    f32 ya;
    f32 xb;
    f32 yMid;
    f32 scale;

    sp30 = *fn_8018D900((u8)(arg1 + 0x24));
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x21);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0x21, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    x1 = lbl_8036951C + x;
    y1 = lbl_8036951C + y;
    fn_80007838(x1, y1, lbl_80369418, lbl_80369418);
    fn_80007818(x1 + (w - lbl_8036943C), y1 + (h - lbl_8036943C), th, tw);
    fn_800076AC(((u8 *)&sp30)[0], ((u8 *)&sp30)[1], ((u8 *)&sp30)[2], arg0);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 0xC);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp1C = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xC);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0xC, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    fn_80007838(x, y, lbl_80369418, lbl_80369418);
    fn_80007818(x + sh, y + sw, th, tw);
    fn_800076AC(((u8 *)&sp1C)[0], ((u8 *)&sp1C)[1], ((u8 *)&sp1C)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 0xD);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp18 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xD);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0xD, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    xR = x + w;
    xR2 = xR - lbl_80369464;
    fn_80007838(xR2, y, lbl_80369418, lbl_80369418);
    fn_80007818(xR2 + sh, y + sw, th, tw);
    fn_800076AC(((u8 *)&sp18)[0], ((u8 *)&sp18)[1], ((u8 *)&sp18)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 0xE);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp14 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xE);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0xE, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    yB = y + h;
    yB2 = yB - lbl_8036949C;
    fn_80007838(x, yB2, lbl_80369418, lbl_80369418);
    fn_80007818(x + sh, yB2 + sw, th, tw);
    fn_800076AC(((u8 *)&sp14)[0], ((u8 *)&sp14)[1], ((u8 *)&sp14)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 0xF);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp10 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xF);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0xF, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    yB2 = yB - lbl_8036959C;
    fn_80007838(xR2, yB2, lbl_80369418, lbl_80369418);
    fn_80007818(xR2 + sh, yB2 + sw, th, tw);
    fn_800076AC(((u8 *)&sp10)[0], ((u8 *)&sp10)[1], ((u8 *)&sp10)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    sp2C = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 4);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 4, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    xL2 = lbl_80369464 + x;
    fn_80007838(xL2, y, lbl_80369418, lbl_80369418);
    edge = xL2 + ((w - lbl_80369464) - lbl_80369464);
    fn_80007818(edge, y + lbl_803694D0, th, tw);
    fn_800076AC(((u8 *)&sp2C)[0], ((u8 *)&sp2C)[1], ((u8 *)&sp2C)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    sp28 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x10);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0x10, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    yT2 = yB - lbl_80369500;
    fn_80007838(xL2, yT2, lbl_80369418, lbl_80369418);
    fn_80007818(edge, yT2 + lbl_803694D0, th, tw);
    fn_800076AC(((u8 *)&sp28)[0], ((u8 *)&sp28)[1], ((u8 *)&sp28)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    sp24 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x11);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0x11, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    ya = lbl_80369668 + y;
    fn_80007838(x, ya, lbl_80369418, lbl_80369418);
    fn_80007818(x + lbl_803694D0, ya + ((h - lbl_80369668) - lbl_8036949C), th, tw);
    fn_800076AC(((u8 *)&sp24)[0], ((u8 *)&sp24)[1], ((u8 *)&sp24)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    sp20 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x12);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0x12, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    xb = xR - lbl_803694E4;
    ya = lbl_803695AC + y;
    fn_80007838(xb, ya, lbl_80369418, lbl_80369418);
    fn_80007818(xb + lbl_803694D0, ya + ((h - lbl_803695AC) - lbl_8036959C), th, tw);
    fn_800076AC(((u8 *)&sp20)[0], ((u8 *)&sp20)[1], ((u8 *)&sp20)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    if (h >= lbl_80369598) {
        tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 0x13);
        scale = lbl_80369430;
        sw = (f32)tex[0] * scale;
        sh = (f32)tex[1] * scale;
        spC = *fn_8018D900(1);
        mgr = lbl_803674F4;
        tex = (u16 *)*fn_8006EDD8(mgr, 0x13);
        th = (f32)tex[1];
        tw = (f32)tex[0];
        fn_8000A258();
        fn_80009F90(mgr, 0x13, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007870(lbl_80369418);
        yMid = ((h - lbl_80369480) * lbl_80369514) + y;
        fn_80007838(x, yMid, lbl_80369418, lbl_80369418);
        fn_80007818(x + sh, yMid + sw, th, tw);
        fn_800076AC(((u8 *)&spC)[0], ((u8 *)&spC)[1], ((u8 *)&spC)[2], 0xFF);
        fn_800075D8();
        fn_80007884();

        tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 0x14);
        scale = lbl_80369430;
        sw = (f32)tex[0] * scale;
        sh = (f32)tex[1] * scale;
        sp8 = *fn_8018D900(1);
        mgr = lbl_803674F4;
        tex = (u16 *)*fn_8006EDD8(mgr, 0x14);
        th = (f32)tex[1];
        tw = (f32)tex[0];
        fn_8000A258();
        fn_80009F90(mgr, 0x14, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007870(lbl_80369418);
        xa = lbl_80369430 + xR2;
        fn_80007838(xa, yMid, lbl_80369418, lbl_80369418);
        fn_80007818(xa + sh, yMid + sw, th, tw);
        fn_800076AC(((u8 *)&sp8)[0], ((u8 *)&sp8)[1], ((u8 *)&sp8)[2], 0xFF);
        fn_800075D8();
        fn_80007884();
    }

    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
}

void fn_80086C14(s32 arg0, s32 arg1, f32 x, f32 y, f32 w, f32 h) {
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007870(f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void **fn_8006EDD8(void *, s32);
    s32 *fn_8018D900(u8);
    extern void *lbl_803674F4;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_8036943C;
    extern f32 lbl_80369450;
    extern f32 lbl_80369464;
    extern f32 lbl_80369484;
    extern f32 lbl_803694CC;
    extern f32 lbl_803694D0;
    extern f32 lbl_80369518;
    extern f32 lbl_8036951C;
    extern f32 lbl_803695AC;

    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    void *mgr;
    u16 *tex;
    f32 tw, th;
    f32 x1, y1;
    f32 sw, sh;
    f32 xR, yB;
    f32 xR2, yB2;
    f32 xL2, yT2;
    f32 tmp;
    f32 scale;

    sp28 = *fn_8018D900((u8)(arg1 + 0x24));
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x21);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0x21, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    x1 = lbl_8036951C + x;
    y1 = lbl_8036951C + y;
    fn_80007838(x1, y1, lbl_80369418, lbl_80369418);
    fn_80007818(x1 + (w - lbl_8036943C), y1 + (h - lbl_8036943C), th, tw);
    fn_800076AC(((u8 *)&sp28)[0], ((u8 *)&sp28)[1], ((u8 *)&sp28)[2], arg0);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 6);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp14 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 6);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 6, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    fn_80007838(x, y, lbl_80369418, lbl_80369418);
    fn_80007818(x + sh, y + sw, th, tw);
    fn_800076AC(((u8 *)&sp14)[0], ((u8 *)&sp14)[1], ((u8 *)&sp14)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 7);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp10 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 7);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 7, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    xR = x + w;
    xR2 = xR - lbl_80369518;
    fn_80007838(xR2, y, lbl_80369418, lbl_80369418);
    fn_80007818(xR2 + sh, y + sw, th, tw);
    fn_800076AC(((u8 *)&sp10)[0], ((u8 *)&sp10)[1], ((u8 *)&sp10)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 8);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    spC = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 8);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 8, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    yB = y + h;
    yB2 = yB - lbl_803694CC;
    fn_80007838(x, yB2, lbl_80369418, lbl_80369418);
    fn_80007818(x + sh, yB2 + sw, th, tw);
    fn_800076AC(((u8 *)&spC)[0], ((u8 *)&spC)[1], ((u8 *)&spC)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 9);
    scale = lbl_80369430;
    sw = (f32)tex[0] * scale;
    sh = (f32)tex[1] * scale;
    sp8 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 9);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 9, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    fn_80007838(xR2, yB2, lbl_80369418, lbl_80369418);
    fn_80007818(xR2 + sh, yB2 + sw, th, tw);
    fn_800076AC(((u8 *)&sp8)[0], ((u8 *)&sp8)[1], ((u8 *)&sp8)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    sp24 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xA);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0xA, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    xL2 = lbl_80369464 + x;
    fn_80007838(xL2, y, lbl_80369418, lbl_80369418);
    tmp = xL2 + ((w - lbl_80369464) - lbl_80369518);
    fn_80007818(tmp, y + lbl_803694D0, th, tw);
    fn_800076AC(((u8 *)&sp24)[0], ((u8 *)&sp24)[1], ((u8 *)&sp24)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    sp20 = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 0xB);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0xB, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    yT2 = yB - lbl_80369450;
    fn_80007838(xL2, yT2, lbl_80369418, lbl_80369418);
    fn_80007818(tmp, yT2 + lbl_803694D0, th, tw);
    fn_800076AC(((u8 *)&sp20)[0], ((u8 *)&sp20)[1], ((u8 *)&sp20)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    sp1C = *fn_8018D900(1);
    mgr = lbl_803674F4;
    tex = (u16 *)*fn_8006EDD8(mgr, 5);
    th = (f32)tex[1];
    tw = (f32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 5, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    {
        f32 xa = lbl_80369430 + x;
        f32 ya = lbl_803695AC + y;
        fn_80007838(xa, ya, lbl_80369418, lbl_80369418);
        {
            f32 yb = ya + ((h - lbl_803694CC) - lbl_803694CC);
            fn_80007818(xa + lbl_803694D0, yb, th, tw);
            fn_800076AC(((u8 *)&sp1C)[0], ((u8 *)&sp1C)[1], ((u8 *)&sp1C)[2], 0xFF);
            fn_800075D8();
            fn_80007884();

            sp18 = *fn_8018D900(1);
            mgr = lbl_803674F4;
            tex = (u16 *)*fn_8006EDD8(mgr, 5);
            tw = (f32)tex[0];
            th = (f32)tex[1];
            fn_8000A258();
            fn_80009F90(mgr, 5, 0x11);
            fn_8000A248();
            fn_80007898(1);
            fn_80007870(lbl_80369418);
            {
                f32 xb = xR - lbl_80369484;
                fn_80007838(xb, ya, th, lbl_80369418);
                fn_80007818(xb + lbl_803694D0, yb, lbl_80369418, tw);
                fn_800076AC(((u8 *)&sp18)[0], ((u8 *)&sp18)[1], ((u8 *)&sp18)[2], 0xFF);
                fn_800075D8();
                fn_80007884();
            }
        }
    }
    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
}

void fn_800875B4(s32 arg0, s32 arg1, f32 x, f32 y, f32 w, f32 h) {
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007870(f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void **fn_8006EDD8(void *, s32);
    s32 *fn_8018D900(u8);
    extern void *lbl_803674F4;
    extern f64 lbl_80369440;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_8036943C;
    extern f32 lbl_80369484;
    extern f32 lbl_803694D0;
    extern f32 lbl_8036951C;
    extern f32 lbl_803695AC;
    extern f32 lbl_8036966C;

    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 *colp;
    void *mgr;
    u16 *tex;
    f32 tw, th;
    f32 x1, y1;
    f32 sw, sh;
    f32 xR, yB;
    f32 xR2, yB2;
    f32 xL2;
    f32 yT2;
    f32 edge;
    f32 xa, ya, yb, xb;
    f32 t0, t1;

    colp = fn_8018D900((u8)(arg1 + 0x24));
    mgr = lbl_803674F4;
    sp28 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 0x21);
    th = (f32)(u32)tex[1];
    tw = (f32)(u32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0x21, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    x1 = lbl_8036951C + x;
    y1 = lbl_8036951C + y;
    fn_80007838(x1, y1, lbl_80369418, lbl_80369418);
    fn_80007818(x1 + (w - lbl_8036943C), y1 + (h - lbl_8036943C), th, tw);
    fn_800076AC(((u8 *)&sp28)[0], ((u8 *)&sp28)[1], ((u8 *)&sp28)[2], arg0);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 0);
    t0 = (f32)(u32)tex[0];
    t1 = (f32)(u32)tex[1];
    sw = t0 * lbl_80369430;
    sh = t1 * lbl_80369430;
    colp = fn_8018D900(1);
    mgr = lbl_803674F4;
    sp14 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 0);
    th = (f32)(u32)tex[1];
    tw = (f32)(u32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 0, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    fn_80007838(x, y, lbl_80369418, lbl_80369418);
    fn_80007818(x + sh, y + sw, th, tw);
    fn_800076AC(((u8 *)&sp14)[0], ((u8 *)&sp14)[1], ((u8 *)&sp14)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 1);
    t0 = (f32)(u32)tex[0];
    t1 = (f32)(u32)tex[1];
    sw = t0 * lbl_80369430;
    sh = t1 * lbl_80369430;
    colp = fn_8018D900(1);
    mgr = lbl_803674F4;
    sp10 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 1);
    th = (f32)(u32)tex[1];
    tw = (f32)(u32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 1, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    xR = x + w;
    xR2 = xR - lbl_8036966C;
    fn_80007838(xR2, y, lbl_80369418, lbl_80369418);
    fn_80007818(xR2 + sh, y + sw, th, tw);
    fn_800076AC(((u8 *)&sp10)[0], ((u8 *)&sp10)[1], ((u8 *)&sp10)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 2);
    t0 = (f32)(u32)tex[0];
    t1 = (f32)(u32)tex[1];
    sw = t0 * lbl_80369430;
    sh = t1 * lbl_80369430;
    colp = fn_8018D900(1);
    mgr = lbl_803674F4;
    spC = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 2);
    th = (f32)(u32)tex[1];
    tw = (f32)(u32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 2, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    yB = y + h;
    yB2 = yB - lbl_803695AC;
    fn_80007838(x, yB2, lbl_80369418, lbl_80369418);
    fn_80007818(x + sh, yB2 + sw, th, tw);
    fn_800076AC(((u8 *)&spC)[0], ((u8 *)&spC)[1], ((u8 *)&spC)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = (u16 *)*fn_8006EDD8(lbl_803674F4, 3);
    t0 = (f32)(u32)tex[0];
    t1 = (f32)(u32)tex[1];
    sw = t0 * lbl_80369430;
    sh = t1 * lbl_80369430;
    colp = fn_8018D900(1);
    mgr = lbl_803674F4;
    sp8 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 3);
    th = (f32)(u32)tex[1];
    tw = (f32)(u32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 3, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    fn_80007838(xR2, yB2, lbl_80369418, lbl_80369418);
    fn_80007818(xR2 + sh, yB2 + sw, th, tw);
    fn_800076AC(((u8 *)&sp8)[0], ((u8 *)&sp8)[1], ((u8 *)&sp8)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    colp = fn_8018D900(1);
    mgr = lbl_803674F4;
    sp24 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 4);
    th = (f32)(u32)tex[1];
    tw = (f32)(u32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 4, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    xL2 = lbl_8036966C + x;
    fn_80007838(xL2, y, lbl_80369418, lbl_80369418);
    edge = xL2 + ((w - lbl_8036966C) - lbl_8036966C);
    fn_80007818(edge, y + lbl_803694D0, th, tw);
    fn_800076AC(((u8 *)&sp24)[0], ((u8 *)&sp24)[1], ((u8 *)&sp24)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    colp = fn_8018D900(1);
    mgr = lbl_803674F4;
    sp20 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 4);
    th = (f32)(u32)tex[1];
    tw = (f32)(u32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 4, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    yT2 = yB - lbl_803694D0;
    fn_80007838(xL2, yT2, lbl_80369418, tw);
    fn_80007818(edge, yT2 + lbl_803694D0, th, lbl_80369418);
    fn_800076AC(((u8 *)&sp20)[0], ((u8 *)&sp20)[1], ((u8 *)&sp20)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    colp = fn_8018D900(1);
    mgr = lbl_803674F4;
    sp1C = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 5);
    th = (f32)(u32)tex[1];
    tw = (f32)(u32)tex[0];
    fn_8000A258();
    fn_80009F90(mgr, 5, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    xa = lbl_80369430 + x;
    ya = lbl_803695AC + y;
    fn_80007838(xa, ya, lbl_80369418, lbl_80369418);
    yb = ya + ((h - lbl_803695AC) - lbl_803695AC);
    fn_80007818(xa + lbl_803694D0, yb, th, tw);
    fn_800076AC(((u8 *)&sp1C)[0], ((u8 *)&sp1C)[1], ((u8 *)&sp1C)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    colp = fn_8018D900(1);
    mgr = lbl_803674F4;
    sp18 = *colp;
    tex = (u16 *)*fn_8006EDD8(mgr, 5);
    tw = (f32)(u32)tex[0];
    th = (f32)(u32)tex[1];
    fn_8000A258();
    fn_80009F90(mgr, 5, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    xb = xR - lbl_80369484;
    fn_80007838(xb, ya, th, lbl_80369418);
    fn_80007818(xb + lbl_803694D0, yb, lbl_80369418, tw);
    fn_800076AC(((u8 *)&sp18)[0], ((u8 *)&sp18)[1], ((u8 *)&sp18)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
    (void)lbl_80369440;
}

#pragma use_lmw_stmw on
void fn_80087F50(s32 arg0, f32 farg0, f32 farg1) {
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    s32 fn_80230BCC(s32);
    void fn_80231D94(char *, char *, ...);
    s32 strlen(char *);
    extern s32 lbl_8026C7DC[];
    extern u8 lbl_8026C86C[];
    extern s32 lbl_803674F4;
    extern f64 lbl_80369470;
    extern f32 lbl_803694A4;

    char buf[8];
    s32 widths[10];
    s32 gap[4];
    s32 x0;
    s32 y0;
    s32 abs_val;
    s32 saved;
    s16 u0;
    s16 v0;
    s16 x;
    s16 y;
    s16 v_base;
    s16 u_off;
    s32 len;
    s32 i;
    char *p;
    s8 ch;

    widths[0] = lbl_8026C7DC[0];
    widths[1] = lbl_8026C7DC[1];
    widths[2] = lbl_8026C7DC[2];
    widths[3] = lbl_8026C7DC[3];
    widths[4] = lbl_8026C7DC[4];
    widths[5] = lbl_8026C7DC[5];
    widths[6] = lbl_8026C7DC[6];
    widths[7] = lbl_8026C7DC[7];
    widths[8] = lbl_8026C7DC[8];
    widths[9] = lbl_8026C7DC[9];
    gap[0] = widths[0];
    gap[1] = widths[1];
    gap[2] = widths[2];
    gap[3] = widths[3];

    if (arg0 != 0) {
        abs_val = fn_80230BCC(arg0);
        saved = lbl_803674F4;
        fn_8000A258();
        fn_80009F90(saved, 0x29, 0x11);
        fn_8000A248();
        x0 = (s32)farg0;
        y0 = (s32)farg1;
        if (arg0 > 0) {
            u0 = 0x96;
            v0 = 0;
        } else {
            u0 = 0x96;
            v0 = 0x10;
        }
        fn_80007898(1);
        fn_80007838((f32)(s16)x0, (f32)(s16)y0, (f32)u0, (f32)v0);
        fn_80007818((f32)((s16)x0 + 0xF), (f32)((s16)y0 + 0x10), (f32)(u0 + 0xF), (f32)(v0 + 0x10));
        fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_80231D94(buf, (char *)(lbl_8026C86C + 0x215), abs_val);
        len = strlen(buf);
        y = (s16)(s32)farg1;
        v_base = (s16)(0x10 & ~((s32)(-arg0 & ~arg0) >> 0x1F));
        x = (s16)(s32)(lbl_803694A4 + farg0);
        p = buf;
        for (i = 0; i < len; i++, p++) {
            u_off = (s16)(((s8)*p - 0x30) * 0xF);
            fn_80007898(1);
            fn_80007838((f32)x, (f32)y, (f32)u_off, (f32)v_base);
            fn_80007818((f32)(x + 0xF), (f32)(y + 0x10), (f32)(u_off + 0xF), (f32)(v_base + 0x10));
            fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
            fn_800075D8();
            fn_80007884();
            ch = *p;
            x = (s16)(x + gap[0] - gap[0] + widths[ch - 0x30]);
        }
    }
}

void fn_80088300(void *arg0) {
u32 *fn_80037BD0(void *, s32);
void fn_8007DAC4(void *, void *);
void fn_801475FC(void *, s32);
void fn_801673D0(void *);
extern u8 lbl_8026C86C[];
extern Menu888Entry lbl_80288FE8[][37];
extern u8 lbl_80330D68[];
extern void *lbl_80367240;
void *self = M2C_FIELD(arg0, void **, 0x30);
u32 pressed = M2C_FIELD(lbl_80367240,u32 *,4);
u32 repeat = M2C_FIELD(lbl_80367240,u32 *,12);
pressed &= M2C_FIELD(lbl_80367240,u32 *,8) ^ pressed;
if ((pressed & 0x200) || (pressed & 0x800)) {
M2C_FIELD(self,s16 *,4)=0; fn_801673D0(lbl_80330D68); return;
}
if (repeat & 0x08000008) {
s32 index=M2C_FIELD(self,s32 *,0x1c);
for (;;) {
u8 *base=(u8 *)lbl_80288FE8 + M2C_FIELD(self,s8 *,9)*0x2e4;
u32 type;
s32 valid;
index=(s8)base[index*20+8];
if(index==-1) return;
type=base[index*20+13];
if(type>=10 && type<=14) {
if(*((s16 *)self + (type-10+18))==-1) valid=0; else valid=1;
} else if(type>=2 && type<=9) {
if(*fn_80037BD0(M2C_FIELD(self,void **,0x58),type-2)!=0) valid=1; else valid=0;
} else if(type>=15 && type<=22) {
if(*((u32 *)self + (type-15+14))==0) valid=0; else valid=1;
} else valid=1;
if(valid) break;
}
M2C_FIELD(self,s32 *,0x1c)=index;
fn_8007DAC4(self,(u8 *)lbl_80288FE8+M2C_FIELD(self,s8 *,9)*0x2e4+M2C_FIELD(self,s32 *,0x1c)*20);
fn_801475FC(lbl_8026C86C+0x19b,100);
}
else if (repeat & 0x04000004) {
s32 index=M2C_FIELD(self,s32 *,0x1c);
for (;;) {
u8 *base=(u8 *)lbl_80288FE8 + M2C_FIELD(self,s8 *,9)*0x2e4;
u32 type;
s32 valid;
index=(s8)base[index*20+9];
if(index==-1) return;
type=base[index*20+13];
if(type>=10 && type<=14) {
if(*((s16 *)self + (type-10+18))==-1) valid=0; else valid=1;
} else if(type>=2 && type<=9) {
if(*fn_80037BD0(M2C_FIELD(self,void **,0x58),type-2)!=0) valid=1; else valid=0;
} else if(type>=15 && type<=22) {
if(*((u32 *)self + (type-15+14))==0) valid=0; else valid=1;
} else valid=1;
if(valid) break;
}
M2C_FIELD(self,s32 *,0x1c)=index;
fn_8007DAC4(self,(u8 *)lbl_80288FE8+M2C_FIELD(self,s8 *,9)*0x2e4+M2C_FIELD(self,s32 *,0x1c)*20);
fn_801475FC(lbl_8026C86C+0x19b,100);
}
else if (repeat & 0x01000001) {
s32 index=M2C_FIELD(self,s32 *,0x1c);
for (;;) {
u8 *base=(u8 *)lbl_80288FE8 + M2C_FIELD(self,s8 *,9)*0x2e4;
u32 type;
s32 valid;
index=(s8)base[index*20+10];
if(index==-1) return;
type=base[index*20+13];
if(type>=10 && type<=14) {
if(*((s16 *)self + (type-10+18))==-1) valid=0; else valid=1;
} else if(type>=2 && type<=9) {
if(*fn_80037BD0(M2C_FIELD(self,void **,0x58),type-2)!=0) valid=1; else valid=0;
} else if(type>=15 && type<=22) {
if(*((u32 *)self + (type-15+14))==0) valid=0; else valid=1;
} else valid=1;
if(valid) break;
}
M2C_FIELD(self,s32 *,0x1c)=index;
fn_8007DAC4(self,(u8 *)lbl_80288FE8+M2C_FIELD(self,s8 *,9)*0x2e4+M2C_FIELD(self,s32 *,0x1c)*20);
fn_801475FC(lbl_8026C86C+0x19b,100);
}
else if (repeat & 0x02000002) {
s32 index=M2C_FIELD(self,s32 *,0x1c);
for (;;) {
u8 *base=(u8 *)lbl_80288FE8 + M2C_FIELD(self,s8 *,9)*0x2e4;
u32 type;
s32 valid;
index=(s8)base[index*20+11];
if(index==-1) return;
type=base[index*20+13];
if(type>=10 && type<=14) {
if(*((s16 *)self + (type-10+18))==-1) valid=0; else valid=1;
} else if(type>=2 && type<=9) {
if(*fn_80037BD0(M2C_FIELD(self,void **,0x58),type-2)!=0) valid=1; else valid=0;
} else if(type>=15 && type<=22) {
if(*((u32 *)self + (type-15+14))==0) valid=0; else valid=1;
} else valid=1;
if(valid) break;
}
M2C_FIELD(self,s32 *,0x1c)=index;
fn_8007DAC4(self,(u8 *)lbl_80288FE8+M2C_FIELD(self,s8 *,9)*0x2e4+M2C_FIELD(self,s32 *,0x1c)*20);
fn_801475FC(lbl_8026C86C+0x19b,100);
}
}

#pragma optimization_level 3
#pragma opt_strength_reduction off
void fn_800888A4(void *arg0) {
    void fn_8000C070(void *, s32);
    void *fn_80037BD0(void *, s32);
    void fn_8007DAC4(void *, void *);
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_8016758C(void *, void *, void *, f32, f32);
    extern u8 lbl_80330D68[];
    extern u8 lbl_8026C86C[];
    extern s32 lbl_8026C7D0[];
    extern Menu888Entry lbl_80288FE8[][37];
    extern void *lbl_80367240;
    extern f32 lbl_80369670, lbl_80369674, lbl_80369678;
    s32 sp8[3];
    s32 *initial;
    s32 *select;
    u32 repeat;
    Menu888Entry (*base)[37];
    u32 pressed, buttons;
    void *self;
    Menu888Entry *entry;
    Menu888Entry *row;
    s32 valid;
    u32 type;
    self = M2C_FIELD(arg0, void * *, 0x30);
    buttons = M2C_FIELD(lbl_80367240, u32 *, 4);
    repeat = M2C_FIELD(lbl_80367240, u32 *, 0xC);
    pressed = buttons & (M2C_FIELD(lbl_80367240, u32 *, 8) ^ buttons);
    if (fn_80166D8C(lbl_80330D68) != 0) return;
    if (pressed & 0x200) {
        fn_8000C070(arg0,3);
        fn_801475FC(lbl_8026C86C+0x394,100);
        return;
    }
    if (repeat & 0x02000002) {
        fn_8000C070(arg0,1);
        M2C_FIELD(self, s32 *, 0x20) = 1;
        fn_801475FC(lbl_8026C86C+0x3A4,100);
        return;
    }
    if (repeat & 0x01000001) {
        fn_8000C070(arg0,1);
        M2C_FIELD(self, s32 *, 0x20) = -1;
        fn_801475FC(lbl_8026C86C+0x3A4,100);
        return;
    }
    if (repeat & 0x08000008) {
        fn_8000C070(arg0,2);
        M2C_FIELD(self, s32 *, 0x20) = -1;
        fn_801475FC(lbl_8026C86C+0x3C0,100);
        return;
    }
    if (repeat & 0x04000004) {
        fn_8000C070(arg0,2);
        M2C_FIELD(self, s32 *, 0x20) = 1;
        fn_801475FC(lbl_8026C86C+0x3C0,100);
        return;
    }
    if ((repeat & 0x100) && M2C_FIELD(M2C_FIELD(self, void * *, 0x58), u32 *, 0x194) != 0) {
        fn_8000C070(arg0,2);
        M2C_FIELD(self, s32 *, 0x20) = 0;
        fn_801475FC(lbl_8026C86C+0x3C0,100);
        return;
    }
    if (pressed & 0x800) {
        s32 init[3]={29,19,17};
        select=init;
        base=lbl_80288FE8;
        M2C_FIELD(self, s16 *, 4)=1;
        M2C_FIELD(self, s32 *, 0x1C)=select[M2C_FIELD(self, s8 *, 9)];
        goto check;
        next:
        row=(Menu888Entry *)((s32)base + M2C_FIELD(self, s8 *, 9)*0x2E4);
        entry=&row[M2C_FIELD(self, s32 *, 0x1C)];
        M2C_FIELD(self, s32 *, 0x1C)=entry->next;
        check:
        {
            row=base[M2C_FIELD(self, s8 *, 9)];
            entry=&row[M2C_FIELD(self, s32 *, 0x1C)];
            type=entry->type;
            if(type>=10 && type<=14) {
                if (M2C_FIELD((u8 *)self+(type-10)*2, s16 *, 0x24) == -1) valid=0; else valid=1;
            } else if(type>=2 && type<=9) {
                if (M2C_FIELD(fn_80037BD0(M2C_FIELD(self, void * *, 0x58),type-2), u32 *, 0) != 0) valid=1; else valid=0;
            } else if(type>=15 && type<=22) {
                if (M2C_FIELD((u8 *)self+(type-15)*4, u32 *, 0x38) == 0) valid=0; else valid=1;
            } else valid=1;
            if (!valid) goto next;
        }
        entry=&lbl_80288FE8[M2C_FIELD(self, s8 *, 9)][M2C_FIELD(self, s32 *, 0x1C)];
        fn_8016758C(lbl_80330D68,arg0,lbl_8026C86C+0x3E1,M2C_FIELD(entry, f32 *, 0),M2C_FIELD(entry, f32 *, 4));
        fn_8007DAC4(self,entry);
        return;
    }
    if(lbl_80330708[0x57]>=2) {
        f32 lower = lbl_80369674;
        M2C_FIELD(self, f32 *, 0x64) -= (f32)(s32)(M2C_FIELD(M2C_FIELD(lbl_80367240, void * *, 0), s8 *, 4)*lbl_80369670);
        if(M2C_FIELD(self, f32 *, 0x64)<0.0f) M2C_FIELD(self, f32 *, 0x64)+=lbl_80369678;
        {
            f32 value=M2C_FIELD(self, f32 *, 0x64);
            f32 upper=lbl_80369678;
            if(value>upper) M2C_FIELD(self, f32 *, 0x64)=value-upper;
        }
    }
}
#pragma optimization_level reset
void fn_80088CC4(void *arg0) {
    M2C_UNK fn_80088300(void *);
    M2C_UNK fn_800888A4(void *);
    s16 temp_r0;

    temp_r0 = *(s16 *)((char *)*(void **)((char *)arg0 + 0x30) + 4);
    switch (temp_r0) {
    case 0:
        fn_800888A4(arg0);
        return;
    case 1:
        fn_80088300(arg0);
        return;
    }
}

void fn_80088F34(void) {
    void *fn_8000C0C0(void *);
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_802899CC[];
    void *p;

    if (fn_8000C0C0(lbl_802899CC) != 0) {
        p = fn_8000C0C0(lbl_802899CC);
        *(u8 *)((u8 *)p + 0x30) = 0x7B;
        return;
    }
    fn_8000CAF0(lbl_802899CC, 5);
}

void fn_80088F8C(void *arg0) {
    f32 fn_800067BC(s32, s16, f32, f32, f32, f32);
    s16 temp_r4;
    f32 f4 = 6.0f;
    temp_r4 = *(s16 *)((u8 *)arg0 + 0x28);
    *(s16 *)((u8 *)arg0 + 0x34) = (s16)fn_800067BC(0, temp_r4, *(f32 *)((u8 *)arg0 + 0x38), *(f32 *)((u8 *)arg0 + 0x3C), (f32)(6 - temp_r4), f4);
}

#pragma scheduling on
void fn_80088FFC(void *arg0) {
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_80224C4C(void *, s32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    void fn_8021FBB8(void);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void fn_80220428(s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_8022097C(void);
    void fn_8000C60C(void *);
    extern f32 lbl_80369690;
    extern f32 lbl_80369694;
    extern f32 lbl_80369698;
    extern f32 lbl_8036969C;
    extern f32 lbl_803696A0;
    extern f32 lbl_803696A4;
    u8 sp8[0x40];
    u8 alpha;

    fn_80202B3C(&sp8[0], lbl_80369690, lbl_80369694, lbl_80369690, lbl_80369698, lbl_80369690, lbl_8036969C);
    fn_80224C4C(&sp8[0], 1);
    fn_80202540(&sp8[0], lbl_80369690, lbl_80369690, lbl_803696A0);
    fn_80224D7C(&sp8[0], 0);
    fn_80224E1C(0);
    fn_80224FEC(lbl_80369690, lbl_80369690, lbl_80369698, lbl_80369694, lbl_80369690, lbl_803696A4);
    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021FBF0(0, 9, 1, 3, 0);
    fn_8021F4E4(0xB, 1);
    fn_8021FBF0(0, 0xB, 1, 5, 0);
    fn_8021F4E4(0xD, 1);
    fn_8021FBF0(0, 0xD, 1, 3, 0);
    fn_80223A5C(0, 0xF, 0xA, 8, 0xF);
    fn_80223AE4(0, 0, 0, 0, 1, 0);
    fn_80223AA0(0, 7, 7, 7, 5);
    fn_80223B4C(0, 0, 0, 0, 1, 0);
    fn_80223F2C(0, 0, 0, 4);
    fn_80222C50((u8 *)arg0 + 0x4C, 0);
    fn_80220428(1);
    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
    fn_802240C8(1);
    fn_80222334(1);
    fn_80222370(4, 0, 1, 1, 0, 0, 2);
    fn_802245D8(1, 4, 5, 0);
    fn_80224684(1, 3, 0);
    alpha = (u8)*(u16 *)((u8 *)arg0 + 0x34);
    fn_80220DEC(0x98, 0, 4);
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0x3DD;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = alpha;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0x260;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0x3DD;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = alpha;
    *(volatile s16 *)0xCC008000 = 1;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 0x1C0;
    *(volatile s16 *)0xCC008000 = 0x3DD;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = alpha;
    *(volatile s16 *)0xCC008000 = 0;
    *(volatile s16 *)0xCC008000 = 1;
    *(volatile s16 *)0xCC008000 = 0x260;
    *(volatile s16 *)0xCC008000 = 0x1C0;
    *(volatile s16 *)0xCC008000 = 0x3DD;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile u8 *)0xCC008000 = alpha;
    *(volatile s16 *)0xCC008000 = 1;
    *(volatile s16 *)0xCC008000 = 1;
    if (*(u8 *)((u8 *)arg0 + 0x30) == 0x7B) {
        fn_8022097C();
        fn_8000C60C(arg0);
    }
}

void fn_800892E8(void *arg0) {
    s32 fn_80222420(s32, s32, s32, s32, s32);
    void *fn_800C45B8(s32, void *, s32);
    void DCInvalidateRange(void *, s32);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void fn_802228D8(void *, s32, s32, s32, s32, s32, f32, f32, f32);
    void *fn_8000CAF0(void *, s32);
    u8 *obj;
    s32 size;
    void *tmp;
    f32 f3c;
    f32 f38;

    obj = (u8 *)arg0;
    *(s32 *)(obj + 0x48) = 0;
    size = fn_80222420(0x260, 0x1C0, 4, 0, 0);
    *(void **)(obj + 0x48) = fn_800C45B8(-size, lbl_8026CC58 + 0x2A, 0);
    DCInvalidateRange(*(void **)(obj + 0x48), size);
    fn_80222644(obj + 0x4C, *(void **)(obj + 0x48), 0x260, 0x1C0, 4, 0, 0, 0);
    fn_802228D8(obj + 0x4C, 0, 0, 0, 0, 0, lbl_80369690, lbl_80369690, lbl_80369690);
    tmp = fn_8000CAF0(lbl_80289998, 6);
    *(void **)((u8 *)tmp + 0x54) = arg0;
    f38 = lbl_803696A8;
    f3c = lbl_803696AC;
    *(f32 *)(obj + 0x38) = f38;
    *(f32 *)(obj + 0x3C) = f3c;
    *(u16 *)(obj + 0x34) = 0;
    obj[0x30] = 0;
}

void fn_800893E0(void *arg0)
{
    extern void fn_80089424(void);
    extern void fn_8000BFEC(void *);
    extern void fn_800C4588(void *);

    u8 *obj = (u8 *)arg0;

    fn_8000BFEC(fn_80089424);
    fn_800C4588(*(void **)(obj + 0x48));
    *(u32 *)(obj + 0x48) = 0;
}

#pragma scheduling reset
void fn_80089424(s32 arg0) {
    M2C_UNK fn_8000A3F8(s32);
    s32 fn_8000A418();
    if (fn_8000A418() != 0) {
        fn_8000A3F8(arg0);
    }
}

void fn_8000BFEC(void (*arg0)(void *));
void fn_80089490(void *);
void fn_80089460(void *arg0) {
    *(u16 *)((char *)arg0 + 0x36) = 0;
    fn_8000BFEC(fn_80089490);
}

void fn_80089490(void *arg0) {
    extern u8 lbl_80289950[];
    void fn_8000A408(void *);
    u8 *tbl = lbl_80289950;
    void *v;

    if (*(u8 *)((u8 *)arg0 + 0x2B) == 0x7B) {
        return;
    }
    v = *(void **)arg0;
    if (v == tbl + 0x7C) {
        return;
    }
    if (v == (void *)(0 + (u32)tbl)) {
        return;
    }
    if (v == tbl + 0x58) {
        return;
    }
    if (v == tbl + 0x48) {
        return;
    }
    fn_8000A408(arg0);
}

s32 fn_800894F8(void) {
    void fn_8000BF00(void *);
    extern u8 lbl_802899C0[];
    fn_8000BF00(lbl_802899C0);
    return 1;
}

s32 fn_80089524(void) {
    extern u16 lbl_802899C0[];
    fn_8000CAF0(lbl_802899C0, 4);
    return 1;
}

void fn_80089554(void) {
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    extern f32 lbl_80369690;
    extern f32 lbl_803696B0;
    extern f32 lbl_803696B4;
    extern f32 lbl_803696B8;
    fn_8000A258();
    fn_80009D74(lbl_80369690, lbl_80369690, lbl_80369690, lbl_803696B0);
    fn_8000A174(0, 0x800);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369690, lbl_80369690, lbl_803696B4, lbl_803696B8);
    fn_80007884();
}

void fn_800895B8(void) {
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80289950[];
    extern u16 *lbl_803674E0;
    extern void *lbl_803674E4;
    extern void *lbl_803674E8;
    extern void *lbl_803674EC;
    void *base;
    void *tmp;

    base = lbl_80289950;
    lbl_803674E0 = fn_8000CAF0(&((u8 *)base)[0], 7);
    lbl_803674E4 = fn_8000CAF0((u8 *)base + 0x58, 7);
    tmp = fn_8000CAF0((u8 *)base + 0x18, 7);
    lbl_803674E8 = tmp;
    *(s16 *)((u8 *)tmp + 0x32) = 0;
    tmp = fn_8000CAF0((u8 *)base + 0x30, 7);
    lbl_803674EC = tmp;
    *(s16 *)((u8 *)tmp + 0x32) = 0;
}

u16 fn_80089634(void) {
    extern void *lbl_803674E4;
    return M2C_FIELD(lbl_803674E4, u16 *, 0x32);
}

u32 fn_80089640(void) {
    extern u16 *lbl_803674E4;

    return lbl_803674E4[0x19] & 1;
}

void fn_80089650(s32 arg0, s32 arg1) {
    void fn_8008A32C(void *, s32, s32);
    extern void *lbl_803674E4;

    fn_8008A32C(lbl_803674E4, arg0, arg1);
}

void fn_80089680(void *arg0) {
    void fn_80202540(void *, f32, f32, f32);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_8022224C(s32, s32 *);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802239D0(s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80224C4C(void *, s32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    extern f32 lbl_80369694;
    extern f32 lbl_80369698;
    extern f32 lbl_8036969C;
    extern f32 lbl_803696A0;
    extern f32 lbl_803696A4;
    extern f32 lbl_803696BC;
    u8 spC[0x44];
    s32 sp8;
    f32 ratio;
    f32 diff;
    f32 hi;
    f32 lo;
    f32 bc;
    u16 bits;
    u32 u34;
    u32 u36;

    if (*(u16 *)((u8 *)arg0 + 0x34) >= *(u16 *)((u8 *)arg0 + 0x36)) {
        bc = lbl_803696BC;
        bits = *(u16 *)((u8 *)arg0 + 0x32);
        bits &= 0xFFFE;
        *(u16 *)((u8 *)arg0 + 0x32) = bits;
        bits = *(u16 *)((u8 *)arg0 + 0x32);
        bits |= 2;
        *(u16 *)((u8 *)arg0 + 0x32) = bits;
        *(u8 *)((u8 *)arg0 + 0x43) = (u8)(s32)(bc * *(f32 *)((u8 *)arg0 + 0x3C));
    }
    if (*(u16 *)((u8 *)arg0 + 0x32) & 1) {
        *(u16 *)((u8 *)arg0 + 0x34) = *(u16 *)((u8 *)arg0 + 0x34) + 1;
        bc = lbl_803696BC;
        u34 = *(u16 *)((u8 *)arg0 + 0x34);
        u36 = *(u16 *)((u8 *)arg0 + 0x36);
        lo = *(f32 *)((u8 *)arg0 + 0x38);
        hi = *(f32 *)((u8 *)arg0 + 0x3C);
        ratio = (f32)u34 / (f32)u36;
        diff = hi - lo;
        *(u8 *)((u8 *)arg0 + 0x43) = (u8)(s32)(bc * (ratio * diff + lo));
    }
    if (*(u8 *)((u8 *)arg0 + 0x43) != 0) {
        fn_80202B3C(spC, lbl_80369690, lbl_80369694, lbl_80369690, lbl_80369698, lbl_80369690, lbl_8036969C);
        fn_80224C4C(spC, 1);
        fn_80202540(spC, lbl_80369690, lbl_80369690, lbl_803696A0);
        fn_80224D7C(spC, 0);
        fn_80224E1C(0);
        fn_80224FEC(lbl_80369690, lbl_80369690, lbl_80369698, lbl_80369694, lbl_80369690, lbl_803696A4);
        sp8 = *(s32 *)((u8 *)arg0 + 0x40);
        fn_8022224C(4, &sp8);
        fn_8021FBB8();
        fn_8021F4E4(9, 1);
        fn_8021FBF0(0, 9, 1, 3, 0);
        fn_802240C8(1);
        fn_802239D0(0, 4);
        fn_80223F2C(0, 0xFF, 0xFF, 4);
        fn_80220428(0);
        fn_80222334(1);
        fn_80222370(4, 0, 0, 0, 0, 0, 2);
        fn_802245D8(1, 4, 5, 0);
        fn_80224684(0, 3, 0);
        fn_80220DEC(0x98, 0, 4);
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
    }
}

void fn_800898E4(void *arg0) {
    M2C_UNK fn_802209FC();
    M2C_UNK fn_8022124C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802212FC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80221BA8(s32, M2C_UNK);
    M2C_UNK fn_80222EB4();
    void *temp_r31;

    temp_r31 = *(void **)((char *)arg0 + 0x54);
    fn_8022124C(0, 0, 0x260, 0x1C0);
    fn_802212FC(0x260, 0x1C0, 4, 0);
    fn_80221BA8(*(s32 *)((char *)temp_r31 + 0x48), 0);
    fn_802209FC();
    fn_80222EB4();
}

u32 fn_80089948(void) {
    extern u8 *lbl_803674EC;
    u16 value;

    value = *(u16 *)(lbl_803674EC + 0x32);

    if (value == 1 || value == 3) {
        return 1;
    }

    return 0;
}

void fn_80089970(void) {
    extern void *lbl_803674EC;
    M2C_FIELD(lbl_803674EC, s16 *, 0x32) = 0;
}

void fn_80089980(s32 arg0)
{
    extern f32 lbl_803696C8;
    extern void *lbl_803674EC;
    u8 *ptr;
    s32 result;

    result = (s32)((f32)arg0 / lbl_803696C8);
    ptr = (u8 *)lbl_803674EC;
    *(u16 *)(ptr + 0x32) = 3;
    *(u16 *)(ptr + 0x34) = 0;
    *(u16 *)(ptr + 0x36) = (u16)result;
}

void fn_800899D4(s32 arg0)
{
    extern f64 lbl_80369688;
    extern f32 lbl_803696C8;
    extern void *lbl_803674EC;
    u8 *ptr;
    union { f64 d; struct { u32 hi; u32 lo; } w; } conv;

    ptr = (u8 *)lbl_803674EC;
    conv.w.hi = 0x43300000;
    conv.w.lo = (u32)arg0 ^ 0x80000000;
    *(u16 *)(ptr + 0x32) = 1;
    *(u16 *)(ptr + 0x34) = 0;
    *(u16 *)(ptr + 0x36) = (u16)(s32)((f32)(conv.d - lbl_80369688) / lbl_803696C8);
}

void fn_80089A28(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802239D0(s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80224C4C(void *, s32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    extern s32 lbl_80367110;
    extern f32 lbl_80369694;
    extern f32 lbl_80369698;
    extern f32 lbl_8036969C;
    extern f32 lbl_803696A0;
    extern f32 lbl_803696A4;
    extern f32 lbl_803696B4;
    extern f32 lbl_803696CC;
    extern f32 lbl_803696D0;
    extern f32 lbl_803696D4;

    u8 sp8[0x60];
    s32 xv[4];
    f32 f31;
    f32 f30;
    f32 start;
    s32 mode;
    s32 a0;
    s32 a1;
    s32 zero;
    s32 height;
    u16 state;

    if (lbl_80367110 & 1) {
        state = *(u16 *)((u8 *)arg0 + 0x32);
        switch (state) {
        case 0:
        case 2:
            return;
        case 1:
            *(u16 *)((u8 *)arg0 + 0x32) = 2;
            return;
        case 3:
            *(u16 *)((u8 *)arg0 + 0x32) = 0;
            return;
        }
    }

    state = *(u16 *)((u8 *)arg0 + 0x32);
    switch (state) {
    case 0:
        return;
    case 1:
        *(u16 *)((u8 *)arg0 + 0x34) = *(u16 *)((u8 *)arg0 + 0x34) + 1;
        start = lbl_803696B4;
        f31 = fn_800067BC(0, start, lbl_803696CC,
                          (f32)*(u16 *)((u8 *)arg0 + 0x34),
                          (f32)*(u16 *)((u8 *)arg0 + 0x36));
        mode = 0;
        if (*(u16 *)((u8 *)arg0 + 0x34) >= *(u16 *)((u8 *)arg0 + 0x36)) {
            *(u16 *)((u8 *)arg0 + 0x32) = 2;
        }
        break;
    case 2:
        f31 = lbl_803696CC;
        mode = 0;
        break;
    case 3:
        *(u16 *)((u8 *)arg0 + 0x34) = *(u16 *)((u8 *)arg0 + 0x34) + 1;
        start = lbl_80369690;
        f31 = fn_800067BC(0, start, lbl_803696D0,
                          (f32)*(u16 *)((u8 *)arg0 + 0x34),
                          (f32)*(u16 *)((u8 *)arg0 + 0x36));
        mode = 1;
        if (*(u16 *)((u8 *)arg0 + 0x34) >= *(u16 *)((u8 *)arg0 + 0x36)) {
            *(u16 *)((u8 *)arg0 + 0x32) = 0;
        }
        break;
    }

    fn_80202B3C(sp8, lbl_80369690, lbl_80369694, lbl_80369690, lbl_80369698, lbl_80369690, lbl_8036969C);
    fn_80224C4C(sp8, 1);
    fn_80202540(sp8, lbl_80369690, lbl_80369690, lbl_803696A0);
    fn_80224D7C(sp8, 0);
    fn_80224E1C(0);
    fn_80224FEC(lbl_80369690, lbl_80369690, lbl_80369698, lbl_80369694, lbl_80369690, lbl_803696A4);
    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021F4E4(0xB, 1);
    fn_8021FBF0(0, 9, 1, 3, 0);
    fn_8021FBF0(0, 0xB, 1, 5, 0);
    fn_80220428(0);
    fn_802239D0(0, 4);
    fn_80223F2C(0, 0xFF, 0xFF, 4);
    fn_802240C8(1);
    fn_80222334(1);
    fn_80222370(4, 0, 1, 1, 0, 0, 2);
    fn_802245D8(1, 4, 5, 0);
    fn_80224684(1, 3, 0);

    if (mode == 0) {
        a0 = 0;
        a1 = 0xFF;
        f30 = lbl_803696D4 + f31;
    } else if (mode == 1) {
        f30 = f31;
        a0 = 0xFF;
        a1 = 0;
        f31 = lbl_803696B4 + f31;
    } else {
        return;
    }

    zero = 0;
    height = 0x1C0;

    fn_80220DEC(0x98, 0, 4);
    xv[0] = (s32)f31;
    xv[1] = (s32)(lbl_803696D4 + f31);
    xv[2] = (s32)f31;
    xv[3] = (s32)(lbl_803696D4 + f31);
    *(volatile s16 *)0xCC008000 = (s16)xv[0];
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = (u8)a0;
    *(volatile s16 *)0xCC008000 = (s16)xv[1];
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = (u8)a1;
    *(volatile s16 *)0xCC008000 = (s16)xv[2];
    *(volatile s16 *)0xCC008000 = (s16)height;
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = (u8)a0;
    *(volatile s16 *)0xCC008000 = (s16)xv[3];
    *(volatile s16 *)0xCC008000 = (s16)height;
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = (u8)a1;

    fn_80220DEC(0x98, 0, 4);
    xv[0] = (s32)f30;
    xv[1] = (s32)(lbl_803696B4 + f30);
    xv[2] = (s32)f30;
    xv[3] = (s32)(lbl_803696B4 + f30);
    *(volatile s16 *)0xCC008000 = (s16)xv[0];
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile s16 *)0xCC008000 = (s16)xv[1];
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile s16 *)0xCC008000 = (s16)xv[2];
    *(volatile s16 *)0xCC008000 = (s16)height;
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0xFF;
    *(volatile s16 *)0xCC008000 = (s16)xv[3];
    *(volatile s16 *)0xCC008000 = (s16)height;
    *(volatile s16 *)0xCC008000 = (s16)zero;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0xFF;
}

s32 fn_80089ED8(void) {
    extern void *lbl_803674E8;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(lbl_803674E8, u16 *, 0x32);
    if ((temp_r0 == 1) || (temp_r0 == 2)) {
        return 1;
    }
    return 0;
}

void fn_80089F00(u8 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4)
{
    extern f32 lbl_803696C8;
    extern void *lbl_803674E8;
    extern u32 lbl_8036C470;
    u8 *ptr;
    f32 div;
    union { u32 w; u8 b[4]; } color;
    s16 t0;
    s16 t1;

    div = lbl_803696C8;
    ptr = (u8 *)lbl_803674E8;
    color.w = lbl_8036C470;
    *(u16 *)(ptr + 0x32) = 1;
    ptr[0x34] = arg0;
    ptr[0x35] = arg1;
    ptr[0x36] = arg2;
    ptr[0x37] = color.b[3];
    *(u16 *)(ptr + 0x38) = 0;
    t0 = (s16)(s32)((f32)arg3 / div);
    *(u16 *)(ptr + 0x3A) = t0;
    *(u16 *)(ptr + 0x3C) = 0;
    color.b[0] = arg0;
    color.b[1] = arg1;
    color.b[2] = arg2;
    t1 = (s16)(s32)((f32)arg4 / div);
    *(u16 *)(ptr + 0x3E) = t1;
}

void fn_80089FA8(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_8022224C(s32, s32 *);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802239D0(s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80224C4C(void *, s32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    extern s32 lbl_80367110;
    extern f32 lbl_80369694;
    extern f32 lbl_80369698;
    extern f32 lbl_8036969C;
    extern f32 lbl_803696A0;
    extern f32 lbl_803696A4;
    u8 spC[0x44];
    s32 sp8;
    f32 a;
    f32 b;
    u16 state;

    if (lbl_80367110 & 1) {
        *(u8 *)((u8 *)arg0 + 0x37) = 0;
        *(u16 *)((u8 *)arg0 + 0x32) = 0;
        return;
    }
    state = *(u16 *)((u8 *)arg0 + 0x32);
    switch (state) {
    case 0:
        *(u8 *)((u8 *)arg0 + 0x37) = 0;
        break;
    case 1:
        *(u16 *)((u8 *)arg0 + 0x38) = *(u16 *)((u8 *)arg0 + 0x38) + 1;
        a = 0.0f;
        b = 255.0f;
        *(u8 *)((u8 *)arg0 + 0x37) =
            (u8)(s32)fn_800067BC(0, a, b,
                                 (f32)*(u16 *)((u8 *)arg0 + 0x38),
                                 (f32)*(u16 *)((u8 *)arg0 + 0x3A));
        if (*(u16 *)((u8 *)arg0 + 0x38) >= *(u16 *)((u8 *)arg0 + 0x3A)) {
            *(u16 *)((u8 *)arg0 + 0x32) = 2;
        }
        break;
    case 2:
        *(u16 *)((u8 *)arg0 + 0x3C) = *(u16 *)((u8 *)arg0 + 0x3C) + 1;
        a = 255.0f;
        b = 0.0f;
        *(u8 *)((u8 *)arg0 + 0x37) =
            (u8)(s32)fn_800067BC(0, a, b,
                                 (f32)*(u16 *)((u8 *)arg0 + 0x3C),
                                 (f32)*(u16 *)((u8 *)arg0 + 0x3E));
        if (*(u16 *)((u8 *)arg0 + 0x3C) >= *(u16 *)((u8 *)arg0 + 0x3E)) {
            *(u16 *)((u8 *)arg0 + 0x32) = 0;
        }
        break;
    }
    if (*(u8 *)((u8 *)arg0 + 0x37) != 0) {
        fn_80202B3C(spC, lbl_80369690, lbl_80369694, lbl_80369690, lbl_80369698, lbl_80369690, lbl_8036969C);
        fn_80224C4C(spC, 1);
        fn_80202540(spC, lbl_80369690, lbl_80369690, lbl_803696A0);
        fn_80224D7C(spC, 0);
        fn_80224E1C(0);
        fn_80224FEC(lbl_80369690, lbl_80369690, lbl_80369698, lbl_80369694, lbl_80369690, lbl_803696A4);
        fn_8021FBB8();
        fn_8021F4E4(9, 1);
        fn_8021FBF0(0, 9, 1, 3, 0);
        fn_80220428(0);
        fn_802239D0(0, 4);
        fn_80223F2C(0, 0xFF, 0xFF, 4);
        fn_802240C8(1);
        fn_80222334(1);
        fn_80222370(4, 0, 0, 0, 0, 0, 2);
        sp8 = *(s32 *)((u8 *)arg0 + 0x34);
        fn_8022224C(4, &sp8);
        fn_802245D8(1, 4, 5, 0);
        fn_80224684(1, 3, 0);
        fn_80220DEC(0x98, 0, 4);
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
    }
}

void fn_8008A290(s32 arg0, s32 arg1) {
    void fn_8008A32C(void *, s32, s32);
    extern s32 lbl_80367110;
    extern u16 *lbl_803674E0;
    s32 var_r5;
    s32 var_r6;

    var_r6 = arg0;
    var_r5 = arg1;
    if (lbl_80367110 & 1) {
        switch (var_r6 & 0xFF) {
        case 2:
            var_r6 = 0;
            break;
        case 3:
            var_r6 = 1;
            break;
        case 5:
            var_r6 = 0;
            break;
        case 6:
            var_r6 = 4;
            break;
        case 7:
            var_r6 = 0;
            break;
        }
        var_r5 = 0;
    }
    fn_8008A32C(lbl_803674E0, var_r6, var_r5);
}

u16 fn_8008A56C(void) {
    return lbl_803674E0[0x19];
}

s32 fn_8008A578(void) {
    s32 result;
    u16 temp_r4;

    result = 0;
    temp_r4 = lbl_803674E0[0x19];
    if (temp_r4 & 2) {
        if (temp_r4 & 4) {
            result = 1;
        }
    }
    return result;
}

u32 fn_8008A59C(void) {
    extern u16 *lbl_803674E0;

    return lbl_803674E0[0x19] & 1;
}

void fn_8008A5AC(void *arg0) {
    void fn_800C4588(void *);
    void fn_80202540(void *, f32, f32, f32);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_8022224C(s32, s32 *);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void fn_802239D0(s32, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80224C4C(void *, s32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    extern s32 lbl_80367110;
    extern f32 lbl_80369694;
    extern f32 lbl_80369698;
    extern f32 lbl_8036969C;
    extern f32 lbl_803696A0;
    extern f32 lbl_803696A4;
    extern f32 lbl_803696BC;
    u8 spC[0x44];
    s32 sp8;
    f32 temp_f5;
    f32 bc;
    u16 t;
    u32 u34;
    u32 u36;
    void *p;

    if (*(u16 *)((u8 *)arg0 + 0x34) >= *(u16 *)((u8 *)arg0 + 0x36) || (lbl_80367110 & 1)) {
        bc = lbl_803696BC;
        t = *(u16 *)((u8 *)arg0 + 0x32);
        t &= 0xFFFE;
        *(u16 *)((u8 *)arg0 + 0x32) = t;
        t = *(u16 *)((u8 *)arg0 + 0x32);
        t |= 2;
        *(u16 *)((u8 *)arg0 + 0x32) = t;
        *(u8 *)((u8 *)arg0 + 0x43) = (u8)(s32)(bc * *(f32 *)((u8 *)arg0 + 0x3C));
        p = *(void **)((u8 *)arg0 + 0x48);
        if (p != NULL) {
            fn_800C4588(p);
            *(void **)((u8 *)arg0 + 0x48) = NULL;
        }
    }
    if (*(u16 *)((u8 *)arg0 + 0x32) & 1) {
        *(u16 *)((u8 *)arg0 + 0x34) = *(u16 *)((u8 *)arg0 + 0x34) + 1;
        bc = lbl_803696BC;
        u34 = *(u16 *)((u8 *)arg0 + 0x34);
        u36 = *(u16 *)((u8 *)arg0 + 0x36);
        temp_f5 = *(f32 *)((u8 *)arg0 + 0x38);
        *(u8 *)((u8 *)arg0 + 0x43) = (u8)(s32)(bc * ((((f32)u34 / (f32)u36) * (*(f32 *)((u8 *)arg0 + 0x3C) - temp_f5)) + temp_f5));
    }
    if (*(u8 *)((u8 *)arg0 + 0x43) != 0) {
        fn_80202B3C(spC, lbl_80369690, lbl_80369694, lbl_80369690, lbl_80369698, lbl_80369690, lbl_8036969C);
        fn_80224C4C(spC, 1);
        fn_80202540(spC, lbl_80369690, lbl_80369690, lbl_803696A0);
        fn_80224D7C(spC, 0);
        fn_80224E1C(0);
        fn_80224FEC(lbl_80369690, lbl_80369690, lbl_80369698, lbl_80369694, lbl_80369690, lbl_803696A4);
        fn_8021FBB8();
        fn_8021F4E4(9, 1);
        fn_8021FBF0(0, 9, 1, 3, 0);
        if (*(u8 *)((u8 *)arg0 + 0x30) == 7) {
            fn_8021F4E4(0xD, 1);
            fn_8021FBF0(0, 0xD, 1, 3, 0);
            fn_80223A5C(0, 0xF, 0xA, 8, 0xF);
            fn_80223AE4(0, 0, 0, 0, 1, 0);
            fn_80223AA0(0, 7, 7, 7, 5);
            fn_80223B4C(0, 0, 0, 0, 1, 0);
            fn_80223F2C(0, 0, 0, 4);
            fn_80222C50((u8 *)arg0 + 0x4C, 0);
            fn_80220428(1);
            fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
        } else {
            fn_802239D0(0, 4);
            fn_80223F2C(0, 0xFF, 0xFF, 4);
            fn_80220428(0);
        }
        fn_802240C8(1);
        fn_80222334(1);
        fn_80222370(4, 0, 0, 0, 0, 0, 2);
        sp8 = *(s32 *)((u8 *)arg0 + 0x40);
        fn_8022224C(4, &sp8);
        fn_802245D8(1, 4, 5, 0);
        fn_80224684(1, 3, 0);
        if (*(u8 *)((u8 *)arg0 + 0x30) != 7) {
            fn_80220DEC(0x98, 0, 4);
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0x260;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0x1C0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0x260;
            *(volatile s16 *)0xCC008000 = 0x1C0;
            *(volatile s16 *)0xCC008000 = 0;
        } else {
            fn_80220DEC(0x98, 0, 4);
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0x260;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 1;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0x1C0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 1;
            *(volatile s16 *)0xCC008000 = 0x260;
            *(volatile s16 *)0xCC008000 = 0x1C0;
            *(volatile s16 *)0xCC008000 = 0;
            *(volatile s16 *)0xCC008000 = 1;
            *(volatile s16 *)0xCC008000 = 1;
        }
    }
}

#pragma use_lmw_stmw on
void fn_8008AB7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s64 OSGetTime(void);
    s64 __div2i(s64, s64);
    s64 fn_8022C9FC(s64, s64);
    f32 fn_8022CB78(s64);
    f64 fn_80238638(f32);
    s32 fn_8006ECCC(s32, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_8000A258(void);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_800075D8(void);
    s32 *fn_8018D900(u8);
    void fn_80007668(s32 *);
    void fn_80007698(s32);
    void fn_80007884(void);
    extern s32 lbl_803674F4;
    extern f32 lbl_803696E0;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    extern f32 lbl_803696F8;
    extern f32 lbl_803696FC;
    extern f32 lbl_80369700;
    extern f32 lbl_80369704;

    s32 col0, col1, col2;
    struct { u8 buf[0x20]; u16 w; u16 h; } sp;
    s32 handle, half, bottom, width, lo, hi, alpha, cidx, y, x;
    f32 phase, s;

    width = arg2; x = arg0; y = arg1; cidx = arg3; lo = arg4; hi = arg5; alpha = arg6;
    handle = lbl_803674F4;
    if (width <= 0x50) width = 0x50;
    phase = fn_8022CB78(fn_8022C9FC(__div2i(OSGetTime(), (s64)((*(u32 *)0x800000F8 >> 2) / 1000)), 0x5DC)) / lbl_803696F8;
    if ((u8)alpha == 0) alpha = lo;
    else {
        s = (f32)fn_80238638(lbl_803696FC * phase);
        alpha = (s32)(lbl_80369700 * (((f32)(u8)hi - (f32)(u8)lo) * (lbl_80369704 + s)) + (f32)(u8)lo);
    }
    fn_8006ECCC(handle, sp.buf, 0x43);
    sp.w = fn_80222A80(sp.buf); sp.h = fn_80222A90(sp.buf);
    fn_8000A258(); fn_8000A174(sp.buf, 0x11); fn_8000A248();
    lo = sp.w; hi = sp.h; fn_80007898(1);
    half = width / 2; width = x - half;
    fn_80007838((f32)width, (f32)(y - 0xA), lbl_803696E0, lbl_803696E0);
    width = lo + width; bottom = (y + hi) - 0xA;
    fn_80007818((f32)width, (f32)bottom, (f32)lo, (f32)hi);
    fn_800075D8(); col0 = *fn_8018D900((u8)cidx); fn_80007668(&col0); fn_80007698(alpha); fn_80007884();
    fn_80007898(1); x += half; half = x - lo;
    fn_80007838((f32)half, (f32)(y - 0xA), (f32)lo, lbl_803696E0);
    fn_80007818((f32)x, (f32)bottom, lbl_803696E0, (f32)hi);
    fn_800075D8(); col1 = *fn_8018D900((u8)cidx); fn_80007668(&col1); fn_80007698(alpha); fn_80007884();
    fn_8006ECCC(handle, sp.buf, 0x44);
    sp.w = fn_80222A80(sp.buf); sp.h = fn_80222A90(sp.buf);
    fn_8000A258(); fn_8000A174(sp.buf, 0x11); fn_8000A248(); fn_80007898(1);
    fn_80007838((f32)width, (f32)(y - 0xA), lbl_803696E0, lbl_803696E0);
    fn_80007818((f32)half, (f32)bottom, (f32)(u32)sp.w, (f32)(u32)sp.h);
    fn_800075D8(); col2 = *fn_8018D900((u8)cidx); fn_80007668(&col2); fn_80007698(alpha); fn_80007884();
}
u16 fn_8008AF9C(s32 arg0, s32 arg1) {
    s32 fn_8006ECCC(s32, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8000A174(void *, s32);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    extern s32 lbl_803674F4;
    extern f32 lbl_80369704;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    extern f32 lbl_80369708;
    struct {
        u8 buf[0x20];
        u16 x;
        u16 y;
    } sp;

    fn_8006ECCC(lbl_803674F4, sp.buf, 0x38);
    sp.x = fn_80222A80(sp.buf);
    sp.y = fn_80222A90(sp.buf);
    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(sp.buf, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)arg0, (f32)arg1, (f32)sp.x, (f32)sp.y);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();
    return sp.x;
}

u16 fn_8008B09C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, M2C_UNK);
    u16 fn_80222A80(M2C_UNK *);
    s16 fn_80222A90(M2C_UNK *);
    extern s32 lbl_803674F4;
    extern f32 lbl_80369704;
    extern f32 lbl_80369708;
    s16 sp2A;
    u16 sp28;
    M2C_UNK sp8;

    fn_8006ECCC(lbl_803674F4, &sp8, 0x37);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32) arg0, (f32) arg1, (f32) arg2, (f32) arg3);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();
    return sp28;
}

u16 fn_8008B1B0(s32 arg0, s32 arg1) {
    s32 fn_8006ECCC(s32, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8000A174(void *, s32);
    void fn_80007898(s32);
    void fn_800077D8(s32, f32, f32, f32, f32);
    void fn_80007884(void);
    extern s32 lbl_803674F4;
    extern f32 lbl_80369704;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    extern f32 lbl_80369708;
    struct { u8 buf[0x20]; volatile u16 x, y; } sp;
    s32 temp_x;
    s32 temp_y;

    fn_8006ECCC(lbl_803674F4, sp.buf, 0x37);
    sp.x = fn_80222A80(sp.buf);
    sp.y = fn_80222A90(sp.buf);
    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(sp.buf, 0x10);
    fn_8000A248();
    fn_80007898(1);
    temp_x = arg0;
    temp_y = arg1;
    fn_800077D8(sp.x, (f32)temp_x, (f32)temp_y, (f32)sp.x, (f32)sp.y);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();
    return sp.x;
}

void fn_8008B2B0(s32 arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_800076AC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80009B8C(u8);
    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, M2C_UNK);
    u16 fn_80222A80(M2C_UNK *);
    u16 fn_80222A90(M2C_UNK *);
    extern s32 lbl_803674F4;
    extern f32 lbl_803696E0;
    extern f32 lbl_80369704;
    extern f32 lbl_80369708;
    u16 sp2A;
    u16 sp28;
    M2C_UNK sp8;

    fn_8006ECCC(lbl_803674F4, &sp8, 0x2A);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_80009D74(lbl_803696E0, lbl_803696E0, (f32) (0x14 - arg3), lbl_80369704);
    fn_8000A174(NULL, 0x13);
    fn_80009B8C(arg2);
    fn_8000A248();
    fn_80007898(6);
    fn_80007858((f32) (arg0 + 0x18), (f32) (arg1 - 1));
    fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
    fn_80007124(arg4);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp28, (f32) (arg0 - 8), (f32) arg1, (f32) sp28, (f32) sp2A);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();
}

#pragma use_lmw_stmw on
void fn_8008B464(void *self, s32 x, s32 y) {
    void *fn_8003A114(void *);
    void *fn_8007BA4C(void *, s32);
    s32 fn_8006ECCC(s32, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_8000A258(void);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_800077D8(s32, f32, f32, f32, f32);
    void fn_80007884(void);
    void *fn_80009E44(s32);
    s32 fn_8022C568(f32, f32, f32);
    void fn_80009BC0(void (*)(s32, s32), s32);
    void fn_80009C0C(f32);
    void fn_8007B4D8(s32, s32, s32, void *);
    void fn_80009B98(void);
    void *fn_800A8A88(void *);
    void *fn_800A8978(void *);
    s32 fn_80010B78(void *, s32, f32);
    void fn_8001003C(s16, s16, s32, s32, s32, void *, ...);
    void *fn_8000E0E4(void *);
    u8 fn_800386B0(void *);
    s8 fn_8003B2D0(void *);
    void fn_8007AD6C(void *);
    void fn_8008BA50(s32, s32);
    extern s32 lbl_803674F4;
    extern u8 lbl_8026CC88[];
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    extern f32 lbl_803696E0;
    extern f32 lbl_80369700;
    extern f32 lbl_80369704;
    extern f32 lbl_80369708;
    extern f32 lbl_8036970C;
    extern f32 lbl_80369710;
    extern f32 lbl_80369714;
    extern f32 lbl_80369718;
    extern f32 lbl_8036971C;
    extern f32 lbl_80369720;

    struct { u8 buf[0x20]; volatile u16 w, h; } sp;
    f32 tmp;
    f32 width;
    s32 cb;
    void *tex;
    s32 handle;
    void *name;
    void *cls;

    tex = fn_8007BA4C(fn_8003A114(self), 0);
    handle = lbl_803674F4;
    cls = *(void **)((u8 *)self + 0x18C);
    name = *(void **)((u8 *)self + 0x188);

    fn_8006ECCC(handle, sp.buf, 0x16);
    sp.w = fn_80222A80(sp.buf);
    sp.h = fn_80222A90(sp.buf);
    fn_8000A258();
    fn_8000A174(sp.buf, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp.w, (f32)x, (f32)y, (f32)sp.w, (f32)sp.h);
    fn_80007884();

    tmp = *(f32 *)((u8 *)fn_80009E44(0) + 0xC);
    cb = fn_8022C568(lbl_8036970C + (tmp + (f32)x), tmp, lbl_8036970C);
    fn_8000A258();
    fn_80009BC0(fn_8008BA50, cb);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_80369710);
    fn_8000A248();

    if (tex != NULL) {
        fn_8007B4D8(x + 0xC0, y + 0x5D, 0xFF, tex);
    }
    fn_8000A258();
    fn_80009C0C(lbl_80369714);
    fn_8000A248();
    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();

    fn_8006ECCC(handle, sp.buf, 0x1F);
    sp.w = fn_80222A80(sp.buf);
    sp.h = fn_80222A90(sp.buf);
    fn_8000A258();
    fn_8000A174(sp.buf, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp.w, (f32)(x - 5), (f32)(y - 0xB), (f32)sp.w, (f32)sp.h);
    fn_80007884();
    fn_8000A258();
    fn_8000A174(NULL, 0x13);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_80369710);
    fn_8000A248();

    {
        void *str = fn_800A8A88(name);
        width = (f32)fn_80010B78(str, -1, lbl_80369704);
        str = fn_800A8A88(name);
        fn_8001003C((s16)(s32)(lbl_80369718 + (f32)x - lbl_80369700 * width),
                    (s16)(y - 0xB), 1, 0, 0, str, lbl_80369704, lbl_803696E0);
    }
    {
        void *str = fn_800A8978(cls);
        width = (f32)fn_80010B78(str, -1, lbl_80369704);
        str = fn_800A8978(cls);
        fn_8001003C((s16)(s32)(lbl_8036971C + (f32)x - lbl_80369700 * width),
                    (s16)(y + 0xF), 2, 0, 0, str, lbl_80369704, lbl_803696E0);
    }

    fn_8001003C((s16)(x + 0x12), (s16)(y + 0x23), 8, 0, 0,
                fn_8000E0E4(lbl_8026CC88 + 0x3B), lbl_80369704, lbl_803696E0);
    fn_8001003C((s16)(x + 0x28), (s16)(y + 0x23), 2, 0, 0,
                lbl_8026CC88 + 0x41, (s8)((u8 *)self)[0x19A], lbl_80369704, lbl_803696E0);
    fn_8001003C((s16)(x + 0x4C), (s16)(y + 0x23), 8, 0, 0,
                fn_8000E0E4(lbl_8026CC88 + 0x45), lbl_80369704, lbl_803696E0);

    if (fn_800386B0(self) == 0xFF) {
        fn_8001003C((s16)(x + 0x62), (s16)(y + 0x23), 2, 0, 0,
                    lbl_8026CC88 + 0x4B, lbl_80369704, lbl_803696E0);
    } else {
        fn_8001003C((s16)(x + 0x62), (s16)(y + 0x23), 2, 0, 0,
                    lbl_8026CC88 + 0x41, (u8)fn_800386B0(self), lbl_80369704, lbl_803696E0);
    }

    fn_8001003C((s16)(x + 0x10), (s16)(y + 0x3A), 8, 0, 0,
                fn_8000E0E4(lbl_8026CC88 + 0x50), lbl_80369704, lbl_803696E0);
    fn_8001003C((s16)(x + 0x3A), (s16)(y + 0x3A), 2, 0, 0,
                lbl_8026CC88 + 0x41, (s8)((u8 *)self)[0x1A8], lbl_80369704, lbl_803696E0);
    fn_8001003C((s16)(x + 0x54), (s16)(y + 0x3A), 0xC, 0, 0,
                lbl_8026CC88 + 0x56, fn_8003B2D0(self), lbl_80369704, lbl_803696E0);

    fn_8000A258();
    fn_80009C0C(lbl_80369720);
    fn_8000A248();
    if (tex != NULL) {
        fn_8007AD6C(tex);
    }
}
void fn_8008BA50(s32 unused, s32 arg1) {
    void fn_80225058(s32, s32, s32, s32);
    fn_80225058(arg1 - 0x40, 0, 0x87, 0x1E0);
}

void fn_8008BBF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    M2C_UNK fn_8007D004(s32, u8, f32, f32, f32, f32);
    s32 var_r5;
    u8 var_r7;

    var_r5 = arg2;
    var_r7 = arg4;
    if (var_r7 == 5) {
        var_r7 = 0;
    }
    if (var_r5 == 0) {
        var_r5 = 0x108;
    }
    fn_8007D004(arg5, var_r7, (f32) arg0, (f32) arg1, (f32) var_r5, (f32) arg3);
}

void fn_8008BC94(s32 arg0, s32 arg1, u8 arg2) {
    s32 fn_8006ECCC(s32, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_8000A258(void);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800076CC(void);
    void fn_800075D8(void);
    void fn_80007538(void);
    void fn_80007884(void);
    extern s32 lbl_803674F0;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    struct {
        u8 buf[0x20];
        u16 x;
        u16 y;
    } sp;

    fn_8006ECCC(lbl_803674F0, sp.buf, 0x14);
    sp.x = fn_80222A80(sp.buf);
    sp.y = fn_80222A90(sp.buf);
    fn_8000A258();
    fn_8000A174(sp.buf, 0x10);
    fn_8000A248();
    fn_80007898(2);
    fn_800077D8((f32)arg0, (f32)arg1, (f32)sp.y, (f32)sp.x);
    if (arg2 != 0) {
        fn_800076CC();
        fn_800075D8();
        fn_80007538();
        fn_80007884();
    }
}

void fn_8008BD90(s32 arg0, s32 arg1, u8 arg2) {
    s32 fn_8006ECCC(s32, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_8000A258(void);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800076CC(void);
    void fn_80007884(void);
    extern s32 lbl_803674F0;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    struct {
        u8 buf[0x20];
        u16 x;
        u16 y;
    } sp;

    fn_8006ECCC(lbl_803674F0, sp.buf, 0x14);
    sp.x = fn_80222A80(sp.buf);
    sp.y = fn_80222A90(sp.buf);
    fn_8000A258();
    fn_8000A174(sp.buf, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)arg0, (f32)arg1, (f32)sp.x, (f32)sp.y);
    if (arg2 == 0) {
        fn_800076CC();
    }
    fn_80007884();
}

void fn_8008BE84(s32 arg0, s32 arg1) {
    s32 fn_8006ECCC(s32, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_8000A258(void);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    extern s32 lbl_803674F0;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    struct {
        u8 buf[0x20];
        u16 x;
        u16 y;
    } sp;

    fn_8006ECCC(lbl_803674F0, sp.buf, 0x13);
    sp.x = fn_80222A80(sp.buf);
    sp.y = fn_80222A90(sp.buf);
    fn_8000A258();
    fn_8000A174(sp.buf, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)(arg0 - 0x20), (f32)(arg1 + 0xC), (f32)sp.x, (f32)sp.y);
    fn_80007884();
}

void fn_8008BF68(s32 arg0, s32 arg1, u8 arg2) {
    s32 fn_8006ECCC(s32, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_8000A258(void);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    u32 OSGetTick(void);
    f64 fn_802380D0(f64);
    extern s32 lbl_803674F0;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    extern f32 lbl_80369700;
    extern f32 lbl_80369704;
    extern f32 lbl_80369724;
    extern f32 lbl_80369728;
    extern f32 lbl_8036972C;
    struct {
        u8 buf[0x20];
        u16 x;
        u16 y;
    } sp2;
    struct {
        u8 buf[0x20];
        u16 x;
        u16 y;
    } sp;
    f32 temp_f31;
    u32 ms;
    u32 rem;
    s32 t1;
    s32 t2;
    f32 sin_arg;
    f32 sin_res;

    if (arg2 == 0) {
        fn_8006ECCC(lbl_803674F0, sp.buf, 0x13);
        sp.x = fn_80222A80(sp.buf);
        sp.y = fn_80222A90(sp.buf);
        fn_8000A258();
        fn_8000A174(sp.buf, 0x10);
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)(arg0 - 0x20), (f32)(arg1 + 0xC), (f32)sp.x, (f32)sp.y);
        fn_80007884();
        return;
    }
    ms = OSGetTick() / ((*(u32 *)0x800000F8 >> 2) / 1000);
    rem = ms % 500;
    sin_arg = lbl_80369728 * ((f32)rem / lbl_80369724);
    sin_res = (f32)fn_802380D0(sin_arg);
    temp_f31 = lbl_8036972C * (lbl_80369704 + sin_res);
    fn_8006ECCC(lbl_803674F0, sp2.buf, 0x13);
    sp2.x = fn_80222A80(sp2.buf);
    sp2.y = fn_80222A90(sp2.buf);
    fn_8000A258();
    fn_8000A174(sp2.buf, 0x10);
    fn_8000A248();
    fn_80007898(1);
    t1 = (s32)((f32)(arg0 - 0x20) - temp_f31);
    t2 = (s32)(temp_f31 * lbl_80369700 + (f32)arg1) + 0xC;
    fn_800077D8((f32)t1, (f32)t2, (f32)sp2.x, (f32)sp2.y);
    fn_80007884();
}

void fn_8008CD34(void) {
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
}

void fn_8008CD64(f32 farg0) {
    M2C_UNK fn_80009C0C(f32);
    fn_8000A258();
    fn_80009C0C(farg0);
    fn_8000A248();
}

#pragma scheduling reset
#include "common.h"
#include "unit.h"

extern s32 lbl_803674F4;
extern f32 lbl_80369704;
extern f32 lbl_80369708;
extern f64 lbl_803696E8;
extern f64 lbl_803696F0;
extern f32 lbl_803696E0;
extern f32 lbl_803696F8;
extern f32 lbl_803696FC;
extern f32 lbl_80369700;
extern u16 lbl_802899C0[256];
