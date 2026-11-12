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

s32 fn_80081CF4(void) {
    extern f32 lbl_8036948C;
    extern f32 lbl_80369494;
    extern f32 lbl_8036955C;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369528;
    extern f32 lbl_803695AC;
    extern f32 lbl_803695B0;
    extern f32 lbl_80369470;

    s32 r27 = 0;
    s32 r31 = 0;
    f32 f1, f2, f3, f0, f29, f30, f31;
    
    f1 = lbl_8036948C;
    f3 = lbl_80369494;
    f0 = lbl_8036955C;
    
    f30 = f1 + f0;
    f29 = lbl_8036942C;

    fn_80086020(0, 0xb3, f30, f3);
    fn_8000A258();

    f0 = lbl_80369528;
    f2 = lbl_803695AC;
    f1 = lbl_803695B0;

    f31 = f2 + f29;
    f30 = f1 + f29;
    f0 = f0 + f30;

    while (r27 < 8) {
        if (r27 >= 4) {
            // Process in a loop to handle different branches
            f32 x = 192.0f;  // 0x43300000
            f32 y = *(f32*)0x80369470;
            
            if (r27 >= 4) {
                f0 = x - y;
                f29 = f31 + f0;
            } else {
                f0 = x - y;
                f29 = f30 + f0;
            }
        }
        
        // Call external function
        fn_80093DA8(r27, 0x4);
        
        if (r27 >= 4) {
            fn_8008D510(0, 0, f29);  // Parameters are guessed
        }
        
        r27++;
        r31 += 0x1C;
    }
    
    fn_8000A258();
    fn_80009C0C(0);
    fn_8000A248(); 

    return 0;
}

void fn_80083278(void *arg0) {
    extern M2C_UNK lbl_80330EAC;
    extern f32 lbl_80369430;
    extern f32 lbl_803695C8;
    fn_80082298(&lbl_80330EAC, 1, lbl_80369430 + *(f32 *)((u8 *)arg0 + 0x14), lbl_803695C8 + *(f32 *)((u8 *)arg0 + 0x18));
}

void fn_800832C0(void *arg0, f32 farg0, f32 farg1) {
    typedef struct { u8 r, g, b, a; } Color;
    void fn_800875B4(s32, s32, f32, f32, f32, f32);
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
    void fn_80087F50(s32, f32, f32);
    s8 fn_8003B258(void *);
    s8 fn_8003B614(void *);
    s8 fn_8003AFA0(void *);
    s8 fn_8003B5D0(void *);
    s8 fn_8003AF28(void *);
    s8 fn_8003B58C(void *);
    s8 fn_8003AEB0(void *);
    s8 fn_8003B548(void *);
    s8 fn_8003ACF8(void *);
    s8 fn_8003B518(void *);
    s8 fn_8003AA40(void *);
    s8 fn_8003B4D4(void *);
    s8 fn_8003A778(void *);
    s8 fn_8003B490(void *);
    extern u8 lbl_8026C86C[];
    extern s32 lbl_803674F4;
    extern f32 lbl_80369418;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_80369434;
    extern f32 lbl_80369438;
    extern f32 lbl_8036943C;
    extern f32 lbl_8036944C;
    extern f32 lbl_803694A4;
    extern f32 lbl_803694C4;
    extern f32 lbl_803694D4;
    extern f32 lbl_803694E4;
    extern f32 lbl_8036951C;
    extern f32 lbl_80369574;
    extern f32 lbl_80369578;
    extern f32 lbl_8036958C;
    extern f32 lbl_803695CC;
    extern f32 lbl_803695D0;
    extern f32 lbl_803695D4;
    extern f32 lbl_803695D8;
    extern f32 lbl_803695DC;
    f32 x, y, bx, by, sh, sw, w, h, tx;
    f32 sx, sy, vx, vy, barx, bary, y2, y3, sx2, sy2, vx2, barx2, bary2, bary3;
    Color color;
    u16 *tex;
    void *str;
    s32 id;
    s8 lim, cur, mx;
    u8 col;

    x = farg0;
    y = farg1;
    fn_800875B4(0xB3, 0, x, y, lbl_803694C4, lbl_803695D4);
    fn_8000A258();
    fn_80009C0C(lbl_8036942C);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8026C86C + 0x31B);
    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(1);
    bx = lbl_8036943C + x;
    by = lbl_80369438 + y;
    fn_800077D8(bx, by, lbl_803694D4, lbl_80369434);
    fn_800075D8();
    fn_800076AC(0, 0, 0, 0xFF);
    fn_80007884();
    tex = *fn_8006EDD8(lbl_803674F4, 0x1D);
    sh = lbl_80369430 * tex[0];
    sw = lbl_80369430 * tex[1];
    color = *fn_8018D900(1);
    tex = *fn_8006EDD8((id = lbl_803674F4), 0x1D);
    w = tex[1];
    h = tex[0];
    fn_8000A258();
    fn_80009F90(id, 0x1D, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007870(lbl_80369418);
    tx = bx + lbl_803694D4;
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

    lim = (s8)M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), s8 *, 0x4D);
    mx = fn_8003B258(arg0);
    cur = fn_8003B614(arg0);
    fn_8000A258();
    fn_80009C0C(lbl_803695CC);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8026C86C + 0x329);
    sx = lbl_803695D8 + x;
    sy = lbl_8036944C + y;
    fn_8001003C((s32)sx, (s32)sy, 6, 1, 0, str, lbl_80369430, lbl_80369418);
    col = 1;
    if (cur >= lim) {
        col = 0x22;
    }
    vx = lbl_8036958C + sx;
    fn_8001003C((s32)vx, (s32)sy, col, 1, 0, lbl_8026C86C + 0x240, lbl_80369430, lbl_80369418, cur);
    barx = lbl_803695D0 + sx;
    bary = lbl_803694E4 + sy;
    fn_80087F50(mx - cur, barx, bary);
    fn_8000A258();
    fn_80009C0C(lbl_8036951C);
    fn_8000A248();

    lim = (s8)M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), s8 *, 0x4E);
    mx = fn_8003AFA0(arg0);
    cur = fn_8003B5D0(arg0);
    fn_8000A258();
    fn_80009C0C(lbl_803695CC);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8026C86C + 0x330);
    y2 = lbl_80369574 + y;
    fn_8001003C((s32)sx, (s32)y2, 6, 1, 0, str, lbl_80369430, lbl_80369418);
    col = 1;
    if (cur >= lim) {
        col = 0x22;
    }
    fn_8001003C((s32)vx, (s32)y2, col, 1, 0, lbl_8026C86C + 0x240, lbl_80369430, lbl_80369418, cur);
    bary2 = lbl_803694E4 + y2;
    fn_80087F50(mx - cur, barx, bary2);
    fn_8000A258();
    fn_80009C0C(lbl_8036951C);
    fn_8000A248();

    lim = (s8)M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), s8 *, 0x4F);
    mx = fn_8003AF28(arg0);
    cur = fn_8003B58C(arg0);
    fn_8000A258();
    fn_80009C0C(lbl_803695CC);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8026C86C + 0x338);
    y3 = lbl_80369578 + y;
    fn_8001003C((s32)sx, (s32)y3, 6, 1, 0, str, lbl_80369430, lbl_80369418);
    col = 1;
    if (cur >= lim) {
        col = 0x22;
    }
    fn_8001003C((s32)vx, (s32)y3, col, 1, 0, lbl_8026C86C + 0x240, lbl_80369430, lbl_80369418, cur);
    bary3 = lbl_803694E4 + y3;
    fn_80087F50(mx - cur, barx, bary3);
    fn_8000A258();
    fn_80009C0C(lbl_8036951C);
    fn_8000A248();

    lim = (s8)M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), s8 *, 0x50);
    mx = fn_8003AEB0(arg0);
    cur = fn_8003B548(arg0);
    fn_8000A258();
    fn_80009C0C(lbl_803695CC);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8026C86C + 0x340);
    sx2 = lbl_803695DC + x;
    sy2 = lbl_803694A4 + y;
    fn_8001003C((s32)sx2, (s32)sy2, 6, 1, 0, str, lbl_80369430, lbl_80369418);
    col = 1;
    if (cur >= lim) {
        col = 0x22;
    }
    vx2 = lbl_8036958C + sx2;
    fn_8001003C((s32)vx2, (s32)sy2, col, 1, 0, lbl_8026C86C + 0x240, lbl_80369430, lbl_80369418, cur);
    barx2 = lbl_803695D0 + sx2;
    fn_80087F50(mx - cur, barx2, lbl_803694E4 + sy2);
    fn_8000A258();
    fn_80009C0C(lbl_8036951C);
    fn_8000A248();

    mx = fn_8003ACF8(arg0);
    cur = fn_8003B518(arg0);
    fn_8000A258();
    fn_80009C0C(lbl_803695CC);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8026C86C + 0x349);
    fn_8001003C((s32)sx2, (s32)sy, 6, 1, 0, str, lbl_80369430, lbl_80369418);
    col = 1;
    if (cur >= 0x28) {
        col = 0x22;
    }
    fn_8001003C((s32)vx2, (s32)sy, col, 1, 0, lbl_8026C86C + 0x240, lbl_80369430, lbl_80369418, cur);
    fn_80087F50(mx - cur, barx2, bary);
    fn_8000A258();
    fn_80009C0C(lbl_8036951C);
    fn_8000A248();

    lim = (s8)M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), s8 *, 0x52);
    mx = fn_8003AA40(arg0);
    cur = fn_8003B4D4(arg0);
    fn_8000A258();
    fn_80009C0C(lbl_803695CC);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8026C86C + 0x351);
    fn_8001003C((s32)sx2, (s32)y2, 6, 1, 0, str, lbl_80369430, lbl_80369418);
    col = 1;
    if (cur >= lim) {
        col = 0x22;
    }
    fn_8001003C((s32)vx2, (s32)y2, col, 1, 0, lbl_8026C86C + 0x240, lbl_80369430, lbl_80369418, cur);
    fn_80087F50(mx - cur, barx2, bary2);
    fn_8000A258();
    fn_80009C0C(lbl_8036951C);
    fn_8000A248();

    lim = (s8)M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), s8 *, 0x53);
    mx = fn_8003A778(arg0);
    cur = fn_8003B490(arg0);
    fn_8000A258();
    fn_80009C0C(lbl_803695CC);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(lbl_8026C86C + 0x358);
    fn_8001003C((s32)sx2, (s32)y3, 6, 1, 0, str, lbl_80369430, lbl_80369418);
    col = 1;
    if (cur >= lim) {
        col = 0x22;
    }
    fn_8001003C((s32)vx2, (s32)y3, col, 1, 0, lbl_8026C86C + 0x240, lbl_80369430, lbl_80369418, cur);
    fn_80087F50(mx - cur, barx2, bary3);
    fn_8000A258();
    fn_80009C0C(lbl_8036951C);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_80369430);
    fn_8000A248();
}

