/* Functions from 0x801F196C to 0x801FC620, found by decomp-toolkit. */
#include "common.h"
extern void *lbl_803683F4;
extern struct {
    u32 pad0;
    u32 pad4;
    u32 *pad8;
    u32 padC;
} lbl_8029B068;
extern void* fn_800C08AC(void *, s32, void *);

extern f32 lbl_8036B910;
extern f32 lbl_8036B914;
extern f32 lbl_8036B918;
extern f32 lbl_8036B91C;
extern f32 lbl_8036B920;
extern f32 lbl_8036B924;
extern f32 lbl_8036B928;
extern f32 lbl_8036B92C;
extern f32 lbl_8036B930;
extern f32 lbl_8036B934;
extern f32 lbl_8036B938;
extern f32 lbl_8036B93C;
extern f32 lbl_8036B940;
extern f32 lbl_8036B944;
extern f64 lbl_8036B948;
extern void* lbl_8029A8C8[];
extern void fn_80050E80(void);
extern void fn_8005C7C8(void*);
extern void fn_8003F670();
extern void fn_80013D4C(void);
extern void fn_8005BCAC(void);
extern void fn_800C4B8C(void);

extern void* lbl_80367240;
extern u16 lbl_80280B58[18];

void fn_801F196C(M2C_UNK **arg0) {
    extern u16 lbl_8028459C[];
    extern u16 lbl_80286610[];
    extern u16 lbl_802862E4[];
    extern u16 lbl_8029A874[];
    *arg0 = (M2C_UNK *)&lbl_8028459C;
    *arg0 = (M2C_UNK *)&lbl_80286610;
    *arg0 = (M2C_UNK *)&lbl_802862E4;
    *arg0 = (M2C_UNK *)&lbl_8029A874;
}

void fn_801F1D70(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern u8 lbl_8029A910[];
    extern u8 lbl_8027F730[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029A910, arg0);
    *(s32 *)((u8 *)temp_r31 + 0x30) = fn_800C4638(0xB0, lbl_8027F730 + 0xA4, 0);
}

void fn_801F1DC4(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0x30);
    *temp_r3 &= 0xFFFFFFFE;
}

void fn_801F1DD8(s32 arg0) {
    u8 fn_800A5C88(s32, void *);
    extern void *lbl_80367240;
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    temp_r31 = temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3);
    if ((fn_800A5C88(temp_r3, lbl_80367240) == 0) || (temp_r31 & 0x1000)) {
        fn_8000C188(arg0);
    }
}

void fn_801F1E38(void *arg0) {
    void fn_800A5D1C(void *, s32, s32);
    void *inner;
    s32 idx;
    inner = *(void **)((u8 *)arg0 + 0x30);
    idx = *(s32 *)((u8 *)inner + 4);
    fn_800A5D1C(*(void **)((u8 *)lbl_8029A8C8 + idx * 0xC), 0, 1);
}

void fn_801F1E78(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0x30);
    *temp_r3 |= 1;
}

void fn_801F1E8C(void *arg0) {
    M2C_UNK fn_8006EDA0(s32);
    M2C_UNK fn_800C4588(s32);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    fn_8006EDA0(temp_r31 + 0x4C);
    fn_800C4588(temp_r31);
}

void fn_801F20A8(s32 arg0) {
    extern u8 lbl_8027F730[];
    s32 fn_8005C6A0(void *);
    void fn_8000C188(s32);

    if (fn_8005C6A0(lbl_8027F730 + 0xE1) & 0x2000) {
        fn_8000C188(arg0);
    }
}

void fn_801F20F0(void *arg0) {
    void *fn_8000E0E4(void *);
    void fn_8006EEFC(void *, void *);
    void fn_80147188(s32);
    void fn_802343E0(void *, void *);
    void fn_80234450(void *, void *);
    extern u8 lbl_8027F730[];

    struct Slot {
        s16 x;
        s16 y;
        s16 w;
        u8 flag;
        u8 pad;
    };
    struct Obj {
        s32 unk0;
        s32 unk4;
        s16 unk8;
        s16 unkA;
        s16 unkC;
        s16 unkE;
        s16 unk10;
        s16 unk12;
        s16 unk14;
        s16 unk16;
        s16 unk18;
        struct Slot slots[6];
        s16 pad4A;
        u8 unk4C[4];
        u8 unk50[4];
    };
    struct Obj *temp_r31;
    void *a3;
    u8 *a4;
    s32 c40;
    s32 z;

    temp_r31 = *(struct Obj **)((u8 *)arg0 + 0x30);
    z = 0;
    temp_r31->unk0 = z;
    temp_r31->unk4 = z;
    temp_r31->unk8 = -0x64;
    temp_r31->unkA = -0x64;
    temp_r31->unk16 = 0x30;
    temp_r31->unk18 = 0x70;
    fn_80147188(0);
    a4 = lbl_8027F730;
    c40 = 0x40;
    temp_r31->slots[0].x = *(s16 *)((u8 *)temp_r31 + 0x16) + 0x2A;
    z = 0;
    a3 = (u8 *)temp_r31 + 0x50;
    a4 = a4 + 0xF6;
    temp_r31->slots[0].y = temp_r31->unk18 + 0xB;
    temp_r31->slots[0].w = c40;
    temp_r31->slots[0].flag = z;
    temp_r31->slots[1].x = temp_r31->unk16 + 0xC4;
    temp_r31->slots[1].y = temp_r31->unk18 + 0xB;
    temp_r31->slots[1].w = c40;
    temp_r31->slots[1].flag = z;
    temp_r31->slots[2].x = temp_r31->unk16 + 0x15E;
    temp_r31->slots[2].y = temp_r31->unk18 + 0xB;
    temp_r31->slots[2].w = c40;
    temp_r31->slots[2].flag = z;
    temp_r31->slots[3].x = temp_r31->unk16 + 0x2A;
    temp_r31->slots[3].y = temp_r31->unk18 + 0x93;
    temp_r31->slots[3].w = c40;
    temp_r31->slots[3].flag = z;
    temp_r31->slots[4].x = temp_r31->unk16 + 0xC4;
    temp_r31->slots[4].y = temp_r31->unk18 + 0x93;
    temp_r31->slots[4].w = c40;
    temp_r31->slots[4].flag = z;
    temp_r31->slots[5].x = temp_r31->unk16 + 0x15E;
    temp_r31->slots[5].y = temp_r31->unk18 + 0x93;
    temp_r31->slots[5].w = c40;
    temp_r31->slots[5].flag = z;
    fn_80234450(a3, a4);
    fn_802343E0(temp_r31->unk50, fn_8000E0E4(lbl_8027F730 + 0xFC));
    fn_802343E0(temp_r31->unk50, lbl_8027F730 + 0x107);
    fn_802343E0(temp_r31->unk50, fn_8000E0E4(lbl_8027F730 + 0x10F));
    fn_802343E0(temp_r31->unk50, lbl_8027F730 + 0x118);
    fn_802343E0(temp_r31->unk50, fn_8000E0E4(lbl_8027F730 + 0x120));
    temp_r31->unkC = 4;
    temp_r31->unkE = temp_r31->unk8;
    temp_r31->unk10 = temp_r31->unkA;
    temp_r31->unk12 = temp_r31->slots[temp_r31->unk4].x;
    temp_r31->unk14 = temp_r31->slots[temp_r31->unk4].y;
    temp_r31->unkC = 0;
    temp_r31->unk8 = temp_r31->unk12;
    temp_r31->unkA = temp_r31->unk14;
    fn_8006EEFC(temp_r31->unk4C, lbl_8027F730 + 0xE1);
}

void fn_801F230C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_800075D8(void);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B80(u8);
    void fn_80009B8C(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    void **fn_8006EDD8(s32, s32);
    void fn_8007CB3C(void *, s32);
    void fn_8008BF68(s16, s16, s32);
    s32 *fn_8018D900(s32);
    extern u8 lbl_8027F730[];
    extern void *lbl_8029A8C8[];
    extern f32 lbl_8036B808;
    extern f32 lbl_8036B80C;
    extern f32 lbl_8036B810;
    extern f32 lbl_8036B814;
    extern f32 lbl_8036B818;
    extern f32 lbl_8036B81C;
    extern f32 lbl_8036B820;
    extern f32 lbl_8036B824;
    extern f32 lbl_8036B828;
    extern f32 lbl_8036B82C;
    extern f32 lbl_8036B830;
    extern f32 lbl_8036B834;
    extern f32 lbl_8036B838;
    extern f32 lbl_8036B83C;
    extern f64 lbl_8036B840;
    extern f64 lbl_8036B848;

    u8 col0[4];
    u8 col1[4];
    u8 col2[4];
    u8 col3[4];
    u8 col4[4];
    u8 col5[4];
    u8 col6[4];
    void *obj;
    void *p;
    u8 *ep;
    s32 i;
    s32 n;
    s32 t;
    s32 tw;
    u16 h;
    u16 w;
    f32 f29;
    f32 f30;
    f32 f31;
    f32 fx;
    f32 fy;
    s32 tex;
    void **pp;
    void *texp;
    s16 tmp;

    obj = *(void **)((u8 *)arg0 + 0x30);
    if (!(*(s32 *)obj & 1)) {
        if (*(s16 *)((u8 *)obj + 0xC) > 0) {
            *(s16 *)((u8 *)obj + 0xC) = (s16)(*(s16 *)((u8 *)obj + 0xC) - 1);
            {
                s16 c = *(s16 *)((u8 *)obj + 0xC);
                s16 e = *(s16 *)((u8 *)obj + 0xE);
                s16 x = *(s16 *)((u8 *)obj + 0x12);
                t = 4 - c;
                *(s16 *)((u8 *)obj + 8) =
                    (s16)fn_800067BC(4, (f32)e, (f32)x, (f32)t, lbl_8036B808);
            }
            {
                s16 y0 = *(s16 *)((u8 *)obj + 0x10);
                s16 y1 = *(s16 *)((u8 *)obj + 0x14);
                *(s16 *)((u8 *)obj + 0xA) =
                    (s16)fn_800067BC(4, (f32)y0, (f32)y1, (f32)t, lbl_8036B808);
            }
        }
        p = obj;
        i = 0;
        for (n = 3; n != 0; n--) {
            if (i == *(s32 *)((u8 *)obj + 4)) {
                *((u8 *)p + 0x20) = 1;
            } else {
                *((u8 *)p + 0x20) = 0;
            }
            if (*((u8 *)p + 0x20) != 0) {
                tmp = (s16)(*(s16 *)((u8 *)p + 0x1E) + 0xA);
                *(s16 *)((u8 *)p + 0x1E) = tmp;
                if (*(s16 *)((u8 *)p + 0x1E) > 0x80) {
                    *(s16 *)((u8 *)p + 0x1E) = 0x80;
                }
            } else {
                tmp = (s16)(*(s16 *)((u8 *)p + 0x1E) - 0xA);
                *(s16 *)((u8 *)p + 0x1E) = tmp;
                if (*(s16 *)((u8 *)p + 0x1E) < 0x20) {
                    *(s16 *)((u8 *)p + 0x1E) = 0x20;
                }
            }
            i++;
            if (i == *(s32 *)((u8 *)obj + 4)) {
                *((u8 *)p + 0x28) = 1;
            } else {
                *((u8 *)p + 0x28) = 0;
            }
            if (*((u8 *)p + 0x28) != 0) {
                tmp = (s16)(*(s16 *)((u8 *)p + 0x26) + 0xA);
                *(s16 *)((u8 *)p + 0x26) = tmp;
                if (*(s16 *)((u8 *)p + 0x26) > 0x80) {
                    *(s16 *)((u8 *)p + 0x26) = 0x80;
                }
            } else {
                tmp = (s16)(*(s16 *)((u8 *)p + 0x26) - 0xA);
                *(s16 *)((u8 *)p + 0x26) = tmp;
                if (*(s16 *)((u8 *)p + 0x26) < 0x20) {
                    *(s16 *)((u8 *)p + 0x26) = 0x20;
                }
            }
            p = (u8 *)p + 0x10;
            i++;
        }

        fn_8000A258();
        fn_80009D74(lbl_8036B80C, lbl_8036B80C, lbl_8036B810, lbl_8036B814);
        fn_80009B8C(0xFF);
        fn_8000A248();
        *(s32 *)col0 = *fn_8018D900(1);
        pp = fn_8006EDD8(*(s32 *)((u8 *)obj + 0x4C), 0);
        texp = *pp;
        h = *(u16 *)((u8 *)texp + 2);
        w = *(u16 *)texp;
        fn_8000A258();
        fn_80009F90(*(s32 *)((u8 *)obj + 0x4C), 0, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B80C, lbl_8036B80C, lbl_8036B80C, lbl_8036B80C);
        fy = lbl_8036B80C + (f32)w;
        fx = lbl_8036B80C + (f32)h;
        fn_80007818(fx, fy, fx, fy);
        fn_800076AC(col0[0], col0[1], col0[2], 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009C0C(lbl_8036B818);
        fn_8000A248();
        *(s32 *)col1 = *fn_8018D900(1);
        pp = fn_8006EDD8(*(s32 *)((u8 *)obj + 0x4C), 3);
        texp = *pp;
        h = *(u16 *)((u8 *)texp + 2);
        w = *(u16 *)texp;
        fn_8000A258();
        fn_80009F90(*(s32 *)((u8 *)obj + 0x4C), 3, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B80C, lbl_8036B81C, lbl_8036B80C, lbl_8036B80C);
        fx = lbl_8036B80C + (f32)h;
        fn_80007818(fx, lbl_8036B81C + (f32)w, fx, lbl_8036B80C + (f32)w);
        fn_800076AC(col1[0], col1[1], col1[2], 0xFF);
        fn_800075D8();
        fn_80007884();

        *(s32 *)col2 = *fn_8018D900(1);
        pp = fn_8006EDD8(*(s32 *)((u8 *)obj + 0x4C), 3);
        texp = *pp;
        h = *(u16 *)((u8 *)texp + 2);
        w = *(u16 *)texp;
        fn_8000A258();
        fn_80009F90(*(s32 *)((u8 *)obj + 0x4C), 3, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B820, lbl_8036B81C, lbl_8036B80C + (f32)h, lbl_8036B80C);
        fn_80007818(lbl_8036B820 + (f32)h, lbl_8036B81C + (f32)w, lbl_8036B80C, lbl_8036B80C + (f32)w);
        fn_800076AC(col2[0], col2[1], col2[2], 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009C0C(lbl_8036B818);
        fn_8000A248();
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(0xF0, 0x3D, 2, 0, 0, fn_8000E0E4(lbl_8027F730 + 0x128), lbl_8036B814, lbl_8036B80C);

        fn_8000A258();
        fn_80009C0C(lbl_8036B818);
        fn_8000A248();
        *(s32 *)col3 = *fn_8018D900(1);
        pp = fn_8006EDD8(*(s32 *)((u8 *)obj + 0x4C), 1);
        texp = *pp;
        h = *(u16 *)((u8 *)texp + 2);
        w = *(u16 *)texp;
        fn_8000A258();
        fn_80009F90(*(s32 *)((u8 *)obj + 0x4C), 1, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B824, lbl_8036B828, lbl_8036B80C, lbl_8036B80C);
        fn_80007818(lbl_8036B824 + (f32)h, lbl_8036B828 + (f32)w, lbl_8036B80C + (f32)h, lbl_8036B80C + (f32)w);
        fn_800076AC(col3[0], col3[1], col3[2], 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009C0C(lbl_8036B818);
        fn_8000A248();
        *(s32 *)col4 = *fn_8018D900(1);
        pp = fn_8006EDD8(*(s32 *)((u8 *)obj + 0x4C), 2);
        texp = *pp;
        h = *(u16 *)((u8 *)texp + 2);
        w = *(u16 *)texp;
        fn_8000A258();
        fn_80009F90(*(s32 *)((u8 *)obj + 0x4C), 2, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B82C, lbl_8036B830, lbl_8036B80C, lbl_8036B80C);
        fn_80007818(lbl_8036B82C + (f32)h, lbl_8036B830 + (f32)w, lbl_8036B80C + (f32)h, lbl_8036B80C + (f32)w);
        fn_800076AC(col4[0], col4[1], col4[2], 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009C0C(lbl_8036B834);
        fn_8000A248();
        f30 = (f32)*(s16 *)((u8 *)obj + 0x18);
        f29 = (f32)*(s16 *)((u8 *)obj + 0x16);
        *(s32 *)col5 = *fn_8018D900(1);
        pp = fn_8006EDD8(*(s32 *)((u8 *)obj + 0x4C), 4);
        texp = *pp;
        h = *(u16 *)((u8 *)texp + 2);
        w = *(u16 *)texp;
        fn_8000A258();
        fn_80009F90(*(s32 *)((u8 *)obj + 0x4C), 4, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(f29, f30, lbl_8036B80C, lbl_8036B80C);
        fn_80007818(f29 + (f32)h, f30 + (f32)w, lbl_8036B80C + (f32)h, lbl_8036B80C + (f32)w);
        fn_800076AC(col5[0], col5[1], col5[2], 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009C0C(lbl_8036B818);
        fn_8000A248();
        ep = (u8 *)lbl_8029A8C8;
        f31 = lbl_8036B80C;
        p = obj;
        i = 0;
        do {
            fn_8000A258();
            fn_80009B80((u8)*(s16 *)((u8 *)p + 0x1E));
            fn_8000A248();
            fn_8000A258();
            fn_8000A174(0, 0x13);
            fn_8000A248();
            fn_8000E0E4(*(void **)(ep + 4));
            tw = (u16)fn_80010B78((void *)0, -1, lbl_8036B814);
            fn_8001003C(
                (s16)((*(s16 *)((u8 *)p + 0x1A) + 0x3C) - ((tw >> 1) & 0x7FFF)),
                *(s16 *)((u8 *)p + 0x1C), 1, 1, 0,
                fn_8000E0E4(*(void **)(ep + 4)), lbl_8036B814, lbl_8036B80C);
            tex = (u16)(ep[8] + 5);
            fy = (f32)(*(s16 *)((u8 *)p + 0x1C) + 0x28);
            fx = (f32)(*(s16 *)((u8 *)p + 0x1A) + 4);
            *(s32 *)col6 = *fn_8018D900(1);
            pp = fn_8006EDD8(*(s32 *)((u8 *)obj + 0x4C), tex);
            texp = *pp;
            h = *(u16 *)((u8 *)texp + 2);
            w = *(u16 *)texp;
            fn_8000A258();
            fn_80009F90(*(s32 *)((u8 *)obj + 0x4C), tex, 0x11);
            fn_8000A248();
            fn_80007898(1);
            fn_80007838(fx, fy, lbl_8036B80C, lbl_8036B80C);
            fn_80007818(fx + (f32)h, fy + (f32)w, f31 + (f32)h, f31 + (f32)w);
            fn_800076AC(col6[0], col6[1], col6[2], 0xFF);
            fn_800075D8();
            fn_80007884();
            fn_8000A258();
            fn_80009B80(0x80);
            fn_8000A248();
            i++;
            ep += 0xC;
            p = (u8 *)p + 8;
        } while (i < 6);

        fn_8000A258();
        fn_80009C0C(lbl_8036B814);
        fn_8000A248();
        fn_8000A258();
        fn_80009C0C(lbl_8036B838);
        fn_8000A248();
        fn_8008BF68(*(s16 *)((u8 *)obj + 8), *(s16 *)((u8 *)obj + 0xA), 1);
        fn_8000A258();
        fn_80009C0C(lbl_8036B83C);
        fn_8000A248();
        fn_8007CB3C((u8 *)obj + 0x50, 0);
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}

void fn_801F2DB4(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern u8 lbl_8029AF78[];
    extern u8 lbl_8027F868[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029AF78, arg0);
    M2C_FIELD(temp_r31, s32 *, 0x30) = fn_800C4638(0xE8, lbl_8027F868 + 0x11BC, 0);
}

#pragma use_lmw_stmw on
void fn_801F2E08(void *arg0) {
    s32 fn_80019E8C(s32);
    void fn_8000C070(void *, s32);
    void fn_80057E6C(s32);
    void fn_8008A290(s32, s32);
    u8 fn_8008A59C(void);
    void fn_801475FC(char *, s32);
    u8 fn_801E3570(void *, s32);
    extern void *lbl_80367240;
    extern char lbl_8027F868[];
    extern u8 lbl_8029A9E8[];
    extern u8 lbl_80331FB8[];
    void *obj;
    s32 pressed;
    s32 stick;
    s32 held;
    s32 tmp;
    s32 pages;
    s16 idx;

    obj = *(void **)((u8 *)arg0 + 0x30);
    held = *(s32 *)((u8 *)lbl_80367240 + 4);
    stick = *(s32 *)((u8 *)lbl_80367240 + 0xC);
    pressed = held & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ held);
    if (((pressed & 0x100) && (fn_8008A59C() == 0)) || ((pressed & 0x200) && (fn_8008A59C() == 0))) {
        fn_801475FC(lbl_8027F868 + 0x11BD, 0x64);
        fn_8000C070(arg0, 1);
        fn_8008A290(3, 0xB4);
        return;
    }
    if ((stick & 0x08000008) && (fn_8008A59C() == 0)) {
        for (;;) {
            *(s16 *)((u8 *)obj + 0xE) = (s16)(*(s16 *)((u8 *)obj + 0xE) - 1);
            if (*(s16 *)((u8 *)obj + 0xE) < 0) {
                *(s16 *)((u8 *)obj + 0xE) = (s16)(*(u8 *)((u8 *)obj + 0x29) - 1);
            }
            if (*(u8 *)((u8 *)obj + 0x11) != 1) {
                break;
            }
            if (fn_801E3570(lbl_80331FB8, fn_80019E8C(*(s32 *)(lbl_8029A9E8 + *(s16 *)((u8 *)obj + 0xE) * 8))) != 0) {
                break;
            }
        }
        goto scroll_dec_test;
    scroll_dec_body:
        *(s16 *)((u8 *)obj + 0x2C) = (s16)(*(s16 *)((u8 *)obj + 0x2C) - 1);
    scroll_dec_test:
        idx = *(s16 *)((u8 *)obj + 0xE);
        if ((idx / 3) - *(s16 *)((u8 *)obj + 0x2C) > 0) {
            goto scroll_inc_test;
        }
        if (*(s16 *)((u8 *)obj + 0x2C) > 0) {
            goto scroll_dec_body;
        }
        goto scroll_inc_test;
    scroll_inc_body:
        *(s16 *)((u8 *)obj + 0x2C) = (s16)(*(s16 *)((u8 *)obj + 0x2C) + 1);
    scroll_inc_test:
        idx = *(s16 *)((u8 *)obj + 0xE);
        if ((idx / 3) - *(s16 *)((u8 *)obj + 0x2C) < 7) {
            goto scroll_done;
        }
        pages = *(u8 *)((u8 *)obj + 0x29) / 3;
        if ((*(u8 *)((u8 *)obj + 0x29) % 3) > 0) {
            pages += 1;
        }
        if (*(s16 *)((u8 *)obj + 0x2C) < (s32)(pages - 8)) {
            goto scroll_inc_body;
        }
    scroll_done:
        fn_80057E6C(*(s32 *)((u8 *)obj + 0xDC));
        tmp = *(s16 *)((u8 *)obj + 0xE) - *(s16 *)((u8 *)obj + 0x2C) * 3;
        *(s16 *)((u8 *)obj + 0x16) = 0;
        *(s16 *)((u8 *)obj + 0x12) = (s16)((tmp % 3) * 0xA0 + 0x45);
        *(s16 *)((u8 *)obj + 0x14) = (s16)((tmp / 3) * 0x1C + 0x9C);
        fn_801475FC(lbl_8027F868 + 0x11CD, 0x64);
        fn_8000C070(arg0, 3);
        return;
    }
    if ((stick & 0x04000004) && (fn_8008A59C() == 0)) {
        for (;;) {
            *(s16 *)((u8 *)obj + 0xE) = (s16)(*(s16 *)((u8 *)obj + 0xE) + 1);
            if (*(s16 *)((u8 *)obj + 0xE) >= *(u8 *)((u8 *)obj + 0x29)) {
                *(s16 *)((u8 *)obj + 0xE) = 0;
            }
            if (*(u8 *)((u8 *)obj + 0x11) != 1) {
                break;
            }
            if (fn_801E3570(lbl_80331FB8, fn_80019E8C(*(s32 *)(lbl_8029A9E8 + *(s16 *)((u8 *)obj + 0xE) * 8))) != 0) {
                break;
            }
        }
        goto scroll2_dec_test;
    scroll2_dec_body:
        *(s16 *)((u8 *)obj + 0x2C) = (s16)(*(s16 *)((u8 *)obj + 0x2C) - 1);
    scroll2_dec_test:
        idx = *(s16 *)((u8 *)obj + 0xE);
        if ((idx / 3) - *(s16 *)((u8 *)obj + 0x2C) > 0) {
            goto scroll2_inc_test;
        }
        if (*(s16 *)((u8 *)obj + 0x2C) > 0) {
            goto scroll2_dec_body;
        }
        goto scroll2_inc_test;
    scroll2_inc_body:
        *(s16 *)((u8 *)obj + 0x2C) = (s16)(*(s16 *)((u8 *)obj + 0x2C) + 1);
    scroll2_inc_test:
        idx = *(s16 *)((u8 *)obj + 0xE);
        if ((idx / 3) - *(s16 *)((u8 *)obj + 0x2C) < 7) {
            goto scroll2_done;
        }
        pages = *(u8 *)((u8 *)obj + 0x29) / 3;
        if ((*(u8 *)((u8 *)obj + 0x29) % 3) > 0) {
            pages += 1;
        }
        if (*(s16 *)((u8 *)obj + 0x2C) < (s32)(pages - 8)) {
            goto scroll2_inc_body;
        }
    scroll2_done:
        fn_80057E6C(*(s32 *)((u8 *)obj + 0xE0));
        tmp = *(s16 *)((u8 *)obj + 0xE) - *(s16 *)((u8 *)obj + 0x2C) * 3;
        *(s16 *)((u8 *)obj + 0x16) = 0;
        *(s16 *)((u8 *)obj + 0x12) = (s16)((tmp % 3) * 0xA0 + 0x45);
        *(s16 *)((u8 *)obj + 0x14) = (s16)((tmp / 3) * 0x1C + 0x9C);
        fn_801475FC(lbl_8027F868 + 0x11CD, 0x64);
        fn_8000C070(arg0, 3);
    }
}
void fn_801F31D0(void *arg0) {
    s32 fn_8005C6A0(s32);
    if (fn_8005C6A0(M2C_FIELD(arg0, s32 *, 0x30) + 0xB4) & 0x2000) {
        fn_8000C188(arg0);
    }
}

void fn_801F3214(void *arg0) {
    struct Entry {
        s32 unk0;
        char *name;
    };
    struct Work {
        u8 pad0[4];
        void *unk4;
        s32 unk8;
        u8 padC[2];
        s16 unkE;
        u8 pad10[0x10];
        u8 unk20;
        u8 pad21[5];
        u8 unk26;
        u8 pad27;
        u8 unk28;
        u8 pad29[0xB];
        struct Entry *unk34;
        u8 pad38[0x1C];
        char unk54[0x60];
        char unkB4[0x28];
        s32 unkDC;
        s32 unkE0;
    };
    void fn_80057E64(s32, s32);
    char *fn_8000E0E4(char *);
    void fn_8006EDA0(void *);
    void fn_8006EEFC(void *, char *);
    char *fn_80234450(char *, const char *);
    char *fn_802343E0(char *, const char *);
    extern char lbl_8027F868[];
    char buf[64];
    struct Work *p;

    p = M2C_FIELD(arg0, struct Work **, 0x30);
    p->unk8 = 2;
    p->unk54[0] = 0;
    p->unk20 = 0;
    p->unk26 = 0;
    p->unk28 = 0;
    fn_80057E64(p->unkDC, 1);
    fn_80057E64(p->unkE0, 1);
    fn_80234450(p->unk54, lbl_8027F868 + 0x11E9);
    fn_802343E0(p->unk54, fn_8000E0E4(lbl_8027F868 + 0x11EF));
    fn_802343E0(p->unk54, lbl_8027F868 + 0x11FA);
    fn_802343E0(p->unk54, fn_8000E0E4(lbl_8027F868 + 0x1209));
    if (p->unk4 != NULL) {
        if (p->unk4 != NULL) {
            fn_8006EDA0(&p->unk4);
            p->unk4 = NULL;
        }
    }
    fn_80234450(buf, lbl_8027F868 + 0x1214);
    fn_802343E0(buf, p->unk34[p->unkE].name);
    fn_8006EEFC(&p->unk4, buf);
    fn_80234450(p->unkB4, buf);
}

void fn_801F3338(void *arg0) {
    s32 fn_80019E8C(s32);
    M2C_UNK fn_8008A290(M2C_UNK, M2C_UNK);
    u8 fn_8008A59C();
    u8 fn_801E3570(void *, s32);
    extern u8 lbl_8027F868[];
    extern u8 lbl_8029A9E8[];
    extern u8 lbl_80331FB8[];
    extern f32 lbl_8036B850;
    extern f32 lbl_8036B854;
    s32 temp_r27;
    s16 temp_r29;
    void *temp_r30;
    s32 temp_r31;
    s32 temp_r3;
    s16 temp_r3_2;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r4_3;
    s16 temp_r5;
    s16 temp_r7;
    s32 temp_r5_2;
    s32 temp_r5_3;
    u32 temp_r6;
    u32 var_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0x30);
    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    temp_r31 = M2C_FIELD(lbl_80367240, s32 *, 0xC);
    temp_r29 = M2C_FIELD(temp_r30, s16 *, 0xE);
    temp_r27 = temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3);
    if ((temp_r27 & 0x100) && (fn_8008A59C() == 0)) {
        if (M2C_FIELD(temp_r30, u8 *, 0x11) == 1) {
            if (fn_801E3570(lbl_80331FB8, fn_80019E8C(*(s32 *)(lbl_8029A9E8 + M2C_FIELD(temp_r30, s16 *, 0xE) * 8))) != 0) {
                fn_801475FC(lbl_8027F868 + 0x121C, 0x64);
                fn_8000C070(arg0, 2);
                fn_8008A290(3, 0xB4);
                return;
            }
        }
    }
    if ((temp_r27 & 0x200) && (fn_8008A59C() == 0)) {
        fn_801475FC(lbl_8027F868 + 0x11BD, 0x64);
        fn_8000C070(arg0, 0);
        fn_8008A290(3, 0xB4);
        return;
    }
    if (temp_r31 & 0x08000008) {
        temp_r3_2 = M2C_FIELD(temp_r30, s16 *, 0xE);
        if (temp_r3_2 >= 3) {
            M2C_FIELD(temp_r30, s16 *, 0xE) = (s16)(temp_r3_2 - 3);
            temp_r4 = M2C_FIELD(temp_r30, s16 *, 0x2C);
            if ((((M2C_FIELD(temp_r30, s16 *, 0xE) / 3) - temp_r4) <= 0) && (temp_r4 > 0)) {
                M2C_FIELD(temp_r30, s16 *, 0x2C) = (s16)(temp_r4 - 1);
                M2C_FIELD(temp_r30, f32 *, 0x30) = (f32)lbl_8036B850;
            }
        }
    }
    if (temp_r31 & 0x04000004) {
        temp_r4_2 = M2C_FIELD(temp_r30, s16 *, 0xE) + 3;
        if (temp_r4_2 <= (s32)(M2C_FIELD(temp_r30, u8 *, 0x29) - 1)) {
            M2C_FIELD(temp_r30, s16 *, 0xE) = temp_r4_2;
            temp_r5 = M2C_FIELD(temp_r30, s16 *, 0x2C);
            if ((s32)((M2C_FIELD(temp_r30, s16 *, 0xE) / 3) - temp_r5) >= 7) {
                var_r3 = M2C_FIELD(temp_r30, u8 *, 0x29) / 3;
                if ((M2C_FIELD(temp_r30, u8 *, 0x29) % 3) > 0) {
                    var_r3 += 1;
                }
                if (temp_r5 < (s32)(var_r3 - 8)) {
                    M2C_FIELD(temp_r30, s16 *, 0x2C) = (s16)(M2C_FIELD(temp_r30, s16 *, 0x2C) + 1);
                    M2C_FIELD(temp_r30, f32 *, 0x30) = (f32)lbl_8036B854;
                }
            }
        }
    }
    if ((temp_r31 & 0x01000001) && ((M2C_FIELD(temp_r30, s16 *, 0xE) % 3) != 0)) {
        M2C_FIELD(temp_r30, s16 *, 0xE) = (s16)(M2C_FIELD(temp_r30, s16 *, 0xE) - 1);
    }
    if ((temp_r31 & 0x02000002) && ((s32)(M2C_FIELD(temp_r30, s16 *, 0xE) % 3) != 2)) {
        temp_r4_3 = M2C_FIELD(temp_r30, s16 *, 0xE) + 1;
        if (temp_r4_3 <= (s32)(M2C_FIELD(temp_r30, u8 *, 0x29) - 1)) {
            M2C_FIELD(temp_r30, s16 *, 0xE) = temp_r4_3;
        }
    }
    temp_r7 = M2C_FIELD(temp_r30, s16 *, 0xE);
    if (temp_r29 != temp_r7) {
        temp_r5_2 = M2C_FIELD(temp_r30, s16 *, 0x2C) * 3;
        M2C_FIELD(temp_r30, s16 *, 0x16) = 4;
        M2C_FIELD(temp_r30, s16 *, 0x18) = (s16)M2C_FIELD(temp_r30, s16 *, 0x12);
        M2C_FIELD(temp_r30, s16 *, 0x1A) = (s16)M2C_FIELD(temp_r30, s16 *, 0x14);
        temp_r6 = (temp_r7 - temp_r5_2) / 3;
        temp_r5_3 = temp_r6 * 0x1C;
        M2C_FIELD(temp_r30, s16 *, 0x1C) = (s16)((((temp_r7 - temp_r5_2) % 3) * 0xA0) + 0x45);
        M2C_FIELD(temp_r30, s16 *, 0x1E) = (s16)(temp_r5_3 + 0x9C);
        fn_801475FC(lbl_8027F868 + 0x122C, 0x64);
    }
}

void fn_801F363C(void *arg0) {
    struct Entry {
        u32 unk0;
        char *name;
    };
    struct Work {
        u8 pad0[4];
        void *unk4;
        s32 unk8;
        u8 padC[2];
        s16 unkE;
        u8 pad10;
        u8 unk11;
        s16 unk12;
        s16 unk14;
        s16 unk16;
        u8 pad18[8];
        u8 unk20;
        u8 pad21[5];
        u8 unk26;
        u8 unk27;
        u8 unk28;
        u8 unk29;
        s16 unk2A;
        s16 unk2C;
        u8 pad30[4];
        struct Entry *unk34;
        u8 pad38[4];
        char unk3C[0x18];
        char unk54[0x60];
        char unkB4[0x28];
        s32 unkDC;
        s32 unkE0;
    };
    void fn_80057E64(s32, s32);
    char *fn_8000E0E4(char *);
    void fn_8006EDA0(void *);
    char *fn_80234450(char *, const char *);
    char *fn_802343E0(char *, const char *);
    extern char lbl_8027F868[];
    extern u8 lbl_8029A9E8[];
    extern u8 lbl_8029AB60[];
    extern u8 lbl_8029AD68[];
    extern u8 lbl_8029AF18[];
    struct Work *p;
    struct Entry *vr;
    s32 var_r3;
    s32 diff;
    s32 quotient;
    s32 remainder;

    p = M2C_FIELD(arg0, struct Work **, 0x30);
    p->unk8 = 5;
    p->unk54[0] = 0;
    p->unk20 = 0;
    p->unk26 = 1;
    p->unk28 = 1;
    fn_80057E64(p->unkDC, 0);
    fn_80057E64(p->unkE0, 0);
    fn_80234450(p->unk3C, lbl_8027F868 + 0x1248);
    p->unk27 = p->unk11;
    switch (p->unk11) {
    case 1:
        p->unk34 = (struct Entry *)lbl_8029A9E8;
        break;
    case 2:
        p->unk34 = (struct Entry *)lbl_8029AB60;
        break;
    case 3:
        p->unk34 = (struct Entry *)lbl_8029AD68;
        break;
    case 4:
        p->unk34 = (struct Entry *)lbl_8029AF18;
        break;
    }
    vr = p->unk34;
    p->unk29 = 0;
    while (vr->unk0 != 0) {
        vr++;
        p->unk29 = (u8)(p->unk29 + 1);
    }
    var_r3 = p->unk29 / 3;
    if (p->unk29 % 3 > 0) {
        var_r3++;
    }
    p->unk2A = (s16)(var_r3 * 0x1C + 0x30);
    if (p->unk2A > 0x10C) {
        p->unk2A = 0x10C;
    }
    diff = (s32)p->unkE - (s32)p->unk2C * 3;
    p->unk16 = 0;
    quotient = diff / 3;
    remainder = diff % 3;
    p->unk12 = (s16)(remainder * 0xA0 + 0x45);
    p->unk14 = (s16)(quotient * 0x1C + 0x9C);
    fn_80234450(p->unk54, lbl_8027F868 + 0x1259);
    fn_802343E0(p->unk54, fn_8000E0E4(lbl_8027F868 + 0x11EF));
    fn_802343E0(p->unk54, lbl_8027F868 + 0x125F);
    fn_802343E0(p->unk54, fn_8000E0E4(lbl_8027F868 + 0x1267));
    fn_802343E0(p->unk54, lbl_8027F868 + 0x1272);
    fn_802343E0(p->unk54, fn_8000E0E4(lbl_8027F868 + 0x1209));
    if (p->unk4 != NULL) {
        if (p->unk4 != NULL) {
            fn_8006EDA0(&p->unk4);
            p->unk4 = NULL;
        }
    }
}

void fn_801F3890(void) {
    u16 *r29 = (u16 *)0x8036C56C;
    u16 r30, r4, r5, r6, r7, r0, r3, r0_0, r0_1, r0_2, r0_3, r0_4, r0_5, r0_6;
    u16 *r28;
    s16 r31;
    
    r30 = r29[0x0C/2];
    r28 = (u16 *)0x8036C56C + 0x20/2 + r30;
    r7 = *(u8 *)(0x8036C56C + 0x11);
    r3 = r28[r30/2];
    r5 = (u16)lbl_80367240; // This is a global pointer to 0x80367240
    r6 = *(u16 *)(r5 + 0x4);
    r0 = *(u8 *)(r3 + 0x2);
    r4 = *(u16 *)(r5 + 0x8);
    
    // if (r7 != r0) 
    if (r7 != r0) {
        u16 temp = r4 ^ r6;
        u16 mask = r6 & temp;
        if ((mask << 9) == 0) { // Check bit 23
            *(u8 *)(0x8036C56C + 0x10) = r7; 
        } else {
            *(u8 *)(0x8036C56C + 0x10) = r0;
        }
    }

    // This looks like a bit field or something similar
    if ((*(u16 *)(r5 + 0xC) & 0x4000) != 0) {
         *(u16 *)(0x8036C56C + 0xE) = 0;
         r0_0 = *(u16 *)(0x8027F868 + 0x121C);
         *(float *)(0x8036C56C + 0x30) = *(float *)0x8036B858;
         // r3 holds r27 which is arg0 from the start
         // r4 = 0x64 = 100 
         fn_801475FC(r29, 0x64);
         fn_8000C070(r29, 1);  
         fn_8008A290(r29, 3, 0xB4); 
    } else {
        if ((*(u16 *)(r5 + 0xC) & 0x8000) != 0) { // Check bit 22
            *(u16 *)(0x8036C56C + 0xE) = 0;
            r0_1 = *(u16 *)(0x8027F868 + 0x11BD); 
            fn_801475FC(r29, 0x64);
            fn_8000C070(r29, 4);
        } else {
            r0_2 = *(u16 *)(r5 + 0xC); // This is likely a mask
            r31 = r0_2;

            if ((r31 & 0x8) == 0) { // Check bit 3 
                *(u16 *)(0x8036C56C + 0xC) = r30 - 1;
                // More logic to handle counter...
                if (*(u16 *)(0x8036C56C + 0xC) >= 0) {
                    *(u16 *)(0x8036C56C + 0xC) = 0;
                }
            } else {
                *(u16 *)(0x8036C56C + 0xC) = r30 + 1;
                // Same logic again to handle counter...
                if (*(u16 *)(0x8036C56C + 0xC) < ((*(u8 *)r28))) {
                    *(u16 *)(0x8036C56C + 0xC) = ((*(u8 *)r28)) - 1;
                }
            }

            // Final bit check and call
            if (r30 != *(u16 *)(0x8036C56C + 0xC))
            {
                r0_3 = *(u16 *)(0x8027F868 + 0x122C);
                fn_801475FC(r29, 0x64);
            }
        }
    }
}

#pragma cplusplus on
extern "C" void fn_801F3C1C(void *arg0) {
    void fn_8006EDA0(void *);
    void fn_80161F7C(void);
    void fn_80057A10(void *, s32);
    void fn_800C4588(void *);
    struct Obj {
        u8 pad[0x2C];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6(s32) = 0;
    };
    void *obj;
    Obj *p;

    obj = *(void **)((u8 *)arg0 + 0x30);
    if (*(u32 *)((u8 *)obj + 4) != 0) {
        if (*(u32 *)((u8 *)obj + 4) != 0) {
            fn_8006EDA0((u8 *)obj + 4);
            *(u32 *)((u8 *)obj + 4) = 0;
        }
    }
    fn_8006EDA0(obj);
    fn_80161F7C();
    fn_80057A10(*(void **)((u8 *)obj + 0xDC), 1);
    fn_80057A10(*(void **)((u8 *)obj + 0xE0), 1);
    p = *(Obj **)((u8 *)obj + 0xE4);
    if (p != NULL) {
        p->v6(1);
    }
    fn_800C4588(obj);
}
#pragma cplusplus reset

void fn_801F3CB0(s32 arg0) {
    extern u8 lbl_8027F868[];
    s32 fn_8005C6A0(void *);
    s32 fn_80161FB8(void);
    void fn_80162054(void);
    void fn_8000C188(s32);

    if (fn_8005C6A0(lbl_8027F868 + 0x1293) & 0x2000) {
        if (fn_80161FB8() != 0) {
            fn_80162054();
            fn_8000C188(arg0);
        }
    }
}

#pragma use_lmw_stmw on
void fn_801F3E60(void *arg0) {
    typedef struct { u8 r, g, b, a; } Color;
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B80(s32);
    void fn_80009B8C(s32);
    void fn_80009B98(void);
    void fn_80009BC0(void (*)(s32, s16 *), s16 *);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s16, s16, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    s32 fn_80019E8C(s32);
    void fn_80057020(s32);
    void fn_80057860(s32, s16);
    void fn_80057880(s32, s32);
    void fn_80057898(s32, s32);
    void fn_800578A0(s32, f32);
    void fn_800578A8(s32, s32, s32, s32);
    void fn_80057AE0(s32);
    u16 **fn_8006EDD8(s32, s32);
    void fn_8007CB3C(void *, s32);
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    void fn_8008BF68(s16, s16, s32);
    void *fn_800A8A88(s32);
    void fn_80152010(s16, s16, s32, s32, s32);
    void fn_8015F24C(s32, s32, s32, s32, s32);
    Color *fn_8018D900(s32);
    u8 fn_801E3570(void *, s32, void *);
    void fn_801F52A8(s32, s16 *);
    void fn_8022C9FC(s32, s32);
    f32 fn_8022CB78(void);
    f64 fn_80238638(f32);
    extern s32 OSGetTime(void);
    extern void __div2i(s32, s32);
    extern u8 lbl_8027F868[];
    extern u8 lbl_80331FB8[];
    extern s8 lbl_803683E0;
    extern s16 lbl_803683E4[4];
    extern f32 lbl_8036B850;
    extern f32 lbl_8036B854;
    extern f32 lbl_8036B858;
    extern f32 lbl_8036B85C;
    extern f32 lbl_8036B860;
    extern f32 lbl_8036B864;
    extern f32 lbl_8036B868;
    extern f32 lbl_8036B86C;
    extern f32 lbl_8036B870;
    extern f32 lbl_8036B874;
    extern f32 lbl_8036B878;
    extern f32 lbl_8036B87C;
    extern f32 lbl_8036B880;
    extern f32 lbl_8036B884;
    extern f32 lbl_8036B888;
    extern f32 lbl_8036B88C;
    extern f32 lbl_8036B890;
    extern f32 lbl_8036B894;
    extern f32 lbl_8036B898;
    extern f32 lbl_8036B89C;
    extern f32 lbl_8036B8A0;
    extern f32 lbl_8036B8A4;
    extern f32 lbl_8036B8A8;
    extern f32 lbl_8036B8AC;
    extern f32 lbl_8036B8B0;
    extern f32 lbl_8036B8B4;
    extern f32 lbl_8036B8B8;
    extern f32 lbl_8036B8BC;
    extern f32 lbl_8036B8C0;
    extern f32 lbl_8036B8C4;
    extern f32 lbl_8036B8C8;

    Color c0, c1, c2, c3, c4, c5, c6, c7, c8;
    void *p;
    u8 *slot;
    s32 t;
    s32 texA;
    s32 texB;
    s32 alpha;
    u16 *tex;
    u16 tw, th;
    s32 i;
    s32 y;
    void *str;
    void *label;
    s32 w;
    s32 rows;
    f32 f31v, f30v, f29v;

    p = *(void **)((u8 *)arg0 + 0x30);
    slot = (u8 *)p + 0x20;
    if (*(s16 *)((u8 *)p + 0x16) > 0) {
        *(s16 *)((u8 *)p + 0x16) = (s16)(*(s16 *)((u8 *)p + 0x16) - 1);
        t = 4 - *(s16 *)((u8 *)p + 0x16);
        *(s16 *)((u8 *)p + 0x12) = (s16)fn_800067BC(4, (f32)*(s16 *)((u8 *)p + 0x18), (f32)*(s16 *)((u8 *)p + 0x1C), (f32)t, lbl_8036B85C);
        *(s16 *)((u8 *)p + 0x14) = (s16)fn_800067BC(4, (f32)*(s16 *)((u8 *)p + 0x1A), (f32)*(s16 *)((u8 *)p + 0x1E), (f32)t, lbl_8036B85C);
    }
    fn_8000A258();
    fn_80009D74(lbl_8036B858, lbl_8036B858, lbl_8036B860, lbl_8036B854);
    fn_80009B8C(0xFF);
    fn_8000A248();
    switch (*(u8 *)((u8 *)p + 0x10)) {
    case 1: texA = 5; break;
    case 2: texA = 6; break;
    case 3: texA = 7; break;
    case 4: texA = 8; break;
    default: texA = 0; break;
    }
    switch (*(u8 *)((u8 *)p + 0x11)) {
    case 1: texB = 5; break;
    case 2: texB = 6; break;
    case 3: texB = 7; break;
    case 4: texB = 8; break;
    default: texB = 0; break;
    }
    *(s16 *)((u8 *)p + 0x38) = (s16)(*(s16 *)((u8 *)p + 0x38) - 0x10);
    if (*(s16 *)((u8 *)p + 0x38) < 0) {
        *(s16 *)((u8 *)p + 0x38) = 0;
    }
    *(s16 *)((u8 *)p + 0x3A) = (s16)(*(s16 *)((u8 *)p + 0x3A) + 0x10);
    if (*(s16 *)((u8 *)p + 0x3A) > 0xFF) {
        *(s16 *)((u8 *)p + 0x3A) = 0xFF;
    }
    c0 = *fn_8018D900(1);
    tex = *fn_8006EDD8(*(s32 *)p, texA);
    tw = tex[1];
    th = tex[0];
    fn_8000A258();
    fn_80009F90(*(s32 *)p, texA, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B858, lbl_8036B858, lbl_8036B858, lbl_8036B858);
    fn_80007818(lbl_8036B858 + (f32)tw, lbl_8036B858 + (f32)th, lbl_8036B858 + (f32)tw, lbl_8036B858 + (f32)th);
    fn_800076AC(c0.r, c0.g, c0.b, 0xFF);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B864);
    fn_8000A248();
    alpha = (u8)*(s16 *)((u8 *)p + 0x3A);
    c1 = *fn_8018D900(1);
    tex = *fn_8006EDD8(*(s32 *)p, texB);
    tw = tex[1];
    th = tex[0];
    fn_8000A258();
    fn_80009F90(*(s32 *)p, texB, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B858, lbl_8036B858, lbl_8036B858, lbl_8036B858);
    fn_80007818(lbl_8036B858 + (f32)tw, lbl_8036B858 + (f32)th, lbl_8036B858 + (f32)tw, lbl_8036B858 + (f32)th);
    fn_800076AC(c1.r, c1.g, c1.b, alpha);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B868);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B850);
    fn_8000A248();
    if (*(u32 *)((u8 *)p + 8) & 4) {
        c2 = *fn_8018D900(1);
        tex = *fn_8006EDD8(*(s32 *)p, 2);
        tw = tex[1];
        th = tex[0];
        fn_8000A258();
        fn_80009F90(*(s32 *)p, 2, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B858, lbl_8036B86C, lbl_8036B858, lbl_8036B858);
        fn_80007818(lbl_8036B858 + (f32)tw, lbl_8036B86C + (f32)th, lbl_8036B858 + (f32)tw, lbl_8036B858 + (f32)th);
        fn_800076AC(c2.r, c2.g, c2.b, 0xFF);
        fn_800075D8();
        fn_80007884();
        c3 = *fn_8018D900(1);
        tex = *fn_8006EDD8(*(s32 *)p, 2);
        tw = tex[1];
        th = tex[0];
        fn_8000A258();
        fn_80009F90(*(s32 *)p, 2, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B870, lbl_8036B86C, lbl_8036B858 + (f32)tw, lbl_8036B858);
        fn_80007818(lbl_8036B870 + (f32)tw, lbl_8036B86C + (f32)th, lbl_8036B858, lbl_8036B858 + (f32)th);
        fn_800076AC(c3.r, c3.g, c3.b, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_8000A258();
        fn_80009C0C(lbl_8036B850);
        fn_8000A248();
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001003C(0xB4, 0x3D, 2, 0, 0, fn_8000E0E4((u8 *)p + 0x3C), lbl_8036B854, lbl_8036B858);
        fn_8000A258();
        fn_80009C0C(lbl_8036B850);
        fn_8000A248();
        c4 = *fn_8018D900(1);
        tex = *fn_8006EDD8(*(s32 *)p, 0);
        tw = tex[1];
        th = tex[0];
        fn_8000A258();
        fn_80009F90(*(s32 *)p, 0, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B874, lbl_8036B878, lbl_8036B858, lbl_8036B858);
        fn_80007818(lbl_8036B874 + (f32)tw, lbl_8036B878 + (f32)th, lbl_8036B858 + (f32)tw, lbl_8036B858 + (f32)th);
        fn_800076AC(c4.r, c4.g, c4.b, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_8000A258();
        fn_80009C0C(lbl_8036B850);
        fn_8000A248();
        c5 = *fn_8018D900(1);
        tex = *fn_8006EDD8(*(s32 *)p, 1);
        tw = tex[1];
        th = tex[0];
        fn_8000A258();
        fn_80009F90(*(s32 *)p, 1, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B87C, lbl_8036B880, lbl_8036B858, lbl_8036B858);
        fn_80007818(lbl_8036B87C + (f32)tw, lbl_8036B880 + (f32)th, lbl_8036B858 + (f32)tw, lbl_8036B858 + (f32)th);
        fn_800076AC(c5.r, c5.g, c5.b, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_8000A258();
        fn_80009C0C(lbl_8036B884);
        fn_8000A248();
    }
    if (slot[0] == 1) {
        y = 0x78;
        for (i = 0; i < 4; i++) {
            switch (slot[2 + i]) {
            case 1: label = fn_8000E0E4(lbl_8027F868 + 0x12A9); break;
            case 2: label = fn_8000E0E4(lbl_8027F868 + 0x12B2); break;
            case 3: label = fn_8000E0E4(lbl_8027F868 + 0x12BB); break;
            case 4: label = fn_8000E0E4(lbl_8027F868 + 0x12C4); break;
            default: label = NULL; break;
            }
            if (label != NULL) {
                fn_8000A258();
                if (i == *(s16 *)((u8 *)p + 0xC)) {
                    fn_80009B80(0x80);
                } else {
                    fn_80009B80(0x40);
                }
                fn_80009C0C(lbl_8036B850);
                fn_8000A248();
                c6 = *fn_8018D900(1);
                tex = *fn_8006EDD8(*(s32 *)p, 3);
                tw = tex[1];
                th = tex[0];
                fn_8000A258();
                fn_80009F90(*(s32 *)p, 3, 0x11);
                fn_8000A248();
                fn_80007898(1);
                fn_80007838(lbl_8036B888, (f32)y, lbl_8036B858, lbl_8036B858);
                fn_80007818(lbl_8036B888 + (f32)tw, (f32)y + (f32)th, lbl_8036B858 + (f32)tw, lbl_8036B858 + (f32)th);
                fn_800076AC(c6.r, c6.g, c6.b, 0xFF);
                fn_800075D8();
                fn_80007884();
                fn_8000A258();
                fn_80009C0C(lbl_8036B850);
                fn_8000A248();
                str = fn_8000E0E4(label);
                w = fn_80010B78(str, -1, lbl_8036B854);
                fn_8001003C((s16)(0xB0 - (w / 2)), (s16)(y + 7), 1, 1, 0, str, lbl_8036B854, lbl_8036B858);
                fn_8000A258();
                fn_80009B80(0x80);
                fn_80009C0C(lbl_8036B854);
                fn_8000A248();
                y += 0x30;
            }
        }
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036B854);
    fn_8000A248();
    fn_80057AE0(*(s32 *)((u8 *)p + 0xDC));
    fn_80057AE0(*(s32 *)((u8 *)p + 0xE0));
    if (*(u8 *)((u8 *)p + 0x28) == 1) {
        rows = *(u8 *)((u8 *)p + 0x29) / 3;
        if ((*(u8 *)((u8 *)p + 0x29) % 3) > 0) {
            rows += 1;
        }
        if (rows > 8) {
            fn_800578A8(*(s32 *)((u8 *)p + 0xE4), 0x22D, 0x98, 0xE0);
            fn_80057860(*(s32 *)((u8 *)p + 0xE4), *(s16 *)((u8 *)p + 0x2C));
            rows = *(u8 *)((u8 *)p + 0x29) / 3;
            if ((*(u8 *)((u8 *)p + 0x29) % 3) > 0) {
                rows += 1;
            }
            fn_80057898(*(s32 *)((u8 *)p + 0xE4), rows);
            fn_80057880(*(s32 *)((u8 *)p + 0xE4), 8);
            fn_800578A0(*(s32 *)((u8 *)p + 0xE4), lbl_8036B8C8);
            fn_80057020(*(s32 *)((u8 *)p + 0xE4));
        }
    }
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
    (void)c7; (void)c8; (void)f31v; (void)f30v; (void)f29v;
    (void)fn_80009BC0; (void)fn_801F52A8; (void)fn_8015F24C;
    (void)fn_80152010; (void)fn_801E3570; (void)fn_80019E8C;
    (void)fn_800A8A88; (void)fn_8007CB3C; (void)fn_8008AB7C;
    (void)fn_8008BF68; (void)fn_8022C9FC; (void)fn_8022CB78;
    (void)fn_80238638; (void)OSGetTime; (void)__div2i;
    (void)lbl_803683E0; (void)lbl_803683E4; (void)lbl_80331FB8;
}
#pragma use_lmw_stmw reset

void fn_801F52A8(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

extern u8 lbl_8029B0E0[16];
void fn_801F52DC(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8029B0E0[16];
    fn_8000CAA0(lbl_8029B0E0, arg0);
}

void fn_801F5308(void* arg0) {
    s32 temp_r3;
    void* temp_r4;

    temp_r3 = *(s32*)((u8*)lbl_80367240 + 4);
    if (temp_r3 & (*(s32*)((u8*)lbl_80367240 + 8) ^ temp_r3) & 0x100) {
        u16* ptr = (u16*)((u8*)&lbl_80280B58 + 0x5A);
        fn_801475FC(ptr, 0x64);
        temp_r4 = *(void**)((u8*)arg0 + 0x50);
        *(u16*)((u8*)temp_r4 + 0x2) = 0xC8;
        fn_8000C188(arg0, temp_r4);
    }
}

void fn_801F5374(void* arg0) {
    s32 temp_r3;
    void* temp_r4;

    temp_r3 = *(s32*)((u8*)lbl_80367240 + 4);
    if (temp_r3 & (*(s32*)((u8*)lbl_80367240 + 8) ^ temp_r3) & 0x100) {
        u16* ptr = (u16*)((u8*)&lbl_80280B58 + 0x5A);
        fn_801475FC(ptr, 0x64);
        temp_r4 = *(void**)((u8*)arg0 + 0x50);
        *(u16*)((u8*)temp_r4 + 0x2) = 0xC8;
        fn_8000C188(arg0, temp_r4);
    }
}

void fn_801F53E0(void *arg0)
{
    extern u8 lbl_803682F0;

    fn_801E2594(&lbl_803682F0);

    if (fn_800EB774() == 0) {
        fn_801DDBA8(
            *(void **)((u8 *)arg0 + 0x50),
            fn_8000E0E4((u8 *)lbl_80280B58 + 0x6A),
            0,
            0,
            0
        );
        return;
    }

    fn_801475FC((u8 *)lbl_80280B58 + 0x77, 0x64);

    fn_801DDBA8(
        *(void **)((u8 *)arg0 + 0x50),
        fn_8000E0E4((u8 *)lbl_80280B58 + 0x8A),
        0,
        1,
        0
    );
}

void fn_801F5484(void *arg0)
{
    extern u8 lbl_803682F0;

    if (fn_800EB774() == 0) {
        fn_801DFE60(&lbl_803682F0, arg0);
        return;
    }

    fn_801E2594(&lbl_803682F0);

    fn_801475FC((u8 *)lbl_80280B58 + 0x77, 0x64);

    fn_801DDBA8(
        *(void **)((u8 *)arg0 + 0x50),
        fn_8000E0E4((u8 *)lbl_80280B58 + 0x8A),
        0,
        1,
        0
    );

    fn_8000C070(arg0, 0x4B);
}

void fn_801F5518(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

void fn_801F5544(void *arg0) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, s32);
    void fn_8000BF00(void *);
    s32 fn_8000E0E4(void *);
    void fn_801475FC(void *, s32);
    void fn_801DDBA8(void *, s32, s32, s32, s32);
    extern u8 lbl_80331FB8[];
    void *tmp;
    s32 code;
    s32 flag;

    tmp = fn_8000C0C0(&lbl_8029B068);
    if (tmp == NULL) {
        flag = 0;
    } else {
        flag = *(u8 *)((u8 *)tmp + 0x4C);
    }
    if (flag == 4) {
        fn_801475FC((u8 *)lbl_80280B58 + 0x77, 0x64);
        fn_801DDBA8(*(void **)((u8 *)arg0 + 0x50), fn_8000E0E4((u8 *)lbl_80280B58 + 0x9A), 0, 1, 0);
        fn_8000C070(arg0, 0x59);
    } else {
        tmp = fn_8000C0C0(&lbl_8029B068);
        if (tmp == NULL) {
            code = -1;
        } else {
            code = *(s32 *)((u8 *)tmp + 0x40);
        }
        switch (code) {
        case 0x4146454A:
            fn_801475FC((u8 *)lbl_80280B58 + 0xAB, 0x64);
            fn_801DDBA8(*(void **)((u8 *)arg0 + 0x50), fn_8000E0E4((u8 *)lbl_80280B58 + 0xBB), 0, 0, 0);
            *(u16 *)(lbl_80331FB8 + 0x10) |= 8;
            break;
        case 0x4145374A:
        case 0x41453745:
        case 0x41453758:
        case 0x41453759:
            fn_801475FC((u8 *)lbl_80280B58 + 0xAB, 0x64);
            fn_801DDBA8(*(void **)((u8 *)arg0 + 0x50), fn_8000E0E4((u8 *)lbl_80280B58 + 0xC8), 0, 0, 0);
            *(u16 *)(lbl_80331FB8 + 0x10) |= 0x10;
            break;
        case 0x4245384A:
        case 0x42453845:
        case 0x42453850:
            fn_801475FC((u8 *)lbl_80280B58 + 0xAB, 0x64);
            fn_801DDBA8(*(void **)((u8 *)arg0 + 0x50), fn_8000E0E4((u8 *)lbl_80280B58 + 0xD5), 0, 0, 0);
            *(u16 *)(lbl_80331FB8 + 0x10) |= 0x20;
            break;
        case 0:
            fn_801475FC((u8 *)lbl_80280B58 + 0x77, 0x64);
            fn_801DDBA8(*(void **)((u8 *)arg0 + 0x50), fn_8000E0E4((u8 *)lbl_80280B58 + 0xE2), 0, 1, 0);
            fn_8000C070(arg0, 0x59);
            break;
        default:
            fn_801475FC((u8 *)lbl_80280B58 + 0x77, 0x64);
            fn_801DDBA8(*(void **)((u8 *)arg0 + 0x50), fn_8000E0E4((u8 *)lbl_80280B58 + 0xF1), 0, 1, 0);
            fn_8000C070(arg0, 0x59);
            break;
        }
    }
    fn_8000BF00(&lbl_8029B068);
}

void fn_801F5A28(void *arg0) {
    void *fn_8000C0C0(void *);
    void fn_8000C188(void *);
    void fn_8000C070(void *, s32);
    void fn_801475FC(void *, s32);
    void fn_8000BF00(void *);
    extern void *lbl_80367240;
    extern u16 lbl_80280B58[18];
    void *tmp;
    s32 var_r0;
    s32 temp_r4_2;
    void *temp_r5;

    tmp = fn_8000C0C0(&lbl_8029B068);
    if (tmp == NULL) {
        var_r0 = 0;
    } else {
        var_r0 = *(u8 *)((u8 *)tmp + 0x4C);
    }
    if (var_r0 == 2) {
        *(u8 *)((u8 *)arg0 + 0x54) = 0;
        temp_r5 = *(void **)((u8 *)arg0 + 0x50);
        *(s16 *)((u8 *)temp_r5 + 2) = 0xC8;
        fn_8000C188(arg0);
        return;
    }
    temp_r4_2 = *(s32 *)((u8 *)lbl_80367240 + 4);
    if ((temp_r4_2 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r4_2) & 0x200) != 0) {
        fn_801475FC((u8 *)&lbl_80280B58 + 0x111, 0x64);
        temp_r5 = *(void **)((u8 *)arg0 + 0x50);
        *(s16 *)((u8 *)temp_r5 + 2) = 0xC8;
        fn_8000C070(arg0, 0);
        fn_8000BF00(&lbl_8029B068);
    }
}

void fn_801F5AEC(void *arg0) {
    s32 fn_8000E0E4(void *);
    void fn_801DDBA8(void *, s32, s32, s32, s32);
    void fn_801475FC(void *, s32);
    void fn_8000C188(void *);
    void fn_8000C070(void *, s32);
    extern void *lbl_80367240;
    extern u16 lbl_80280B58[18];
    s32 temp_r3;
    s32 pressed;
    void *temp_r5;

    temp_r3 = *(s32 *)((u8 *)lbl_80367240 + 4);
    pressed = temp_r3 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r3);
    if (pressed & 0x100) {
        fn_801475FC((u8 *)&lbl_80280B58 + 0x5A, 0x64);
        fn_801DDBA8(*(void **)((u8 *)arg0 + 0x50), fn_8000E0E4((u8 *)&lbl_80280B58 + 0x121), 0, 0, 0);
        fn_8000C188(arg0);
        return;
    }
    if (pressed & 0x200) {
        fn_801475FC((u8 *)&lbl_80280B58 + 0x111, 0x64);
        temp_r5 = *(void **)((u8 *)arg0 + 0x50);
        *(s16 *)((u8 *)temp_r5 + 2) = 0xC8;
        fn_8000C070(arg0, 0x63);
    }
}

void fn_801F5BAC(void) {

}

void fn_801F5BB0(void *arg0) {
    void *tmp = *(void **)((u8 *)arg0 + 0x50);
    if (tmp != NULL) {
        fn_800C4588(tmp);
        *(void **)((u8 *)arg0 + 0x50) = NULL;
    }
    fn_80109020(0);
    fn_8000BF00(&lbl_8029B068);
}

void fn_801F5C04(void *arg0) {
    void *fn_800C4638(s32, void *, s32);
    void fn_80109180(void *, void *);
    void *memset(void *, s32, s32);
    extern u16 lbl_80280B58[18];
    void *temp_r31;

    *(void **)((u8 *)arg0 + 0x50) = fn_800C4638(0x1EA, (u8 *)&lbl_80280B58 + 0x12A, 0);
    temp_r31 = *(void **)((u8 *)arg0 + 0x50);
    memset(temp_r31, 0, 0x1EA);
    *((s16 *)temp_r31) = (*(((s16 *)temp_r31) + 1) = 0);
    *(((s16 *)temp_r31) + 0xF) = 0;
    fn_80109180((u8 *)&lbl_80280B58 + 0x12B, arg0);
}

void fn_801F5C88(void *arg0) {
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    M2C_UNK fn_801DCD3C(s32);
    M2C_UNK fn_801DDAC8(s32);
    extern f32 lbl_8036B8E8;
extern f32 lbl_8036B8EC;
extern f32 lbl_8036B908;
extern s32 lbl_80368408;
extern s32 lbl_8036840C;
    fn_8000A258();
    fn_80009D74(lbl_8036B8E8, lbl_8036B8E8, lbl_8036B908, lbl_8036B8EC);
    fn_8000A248();
    fn_801DDAC8(M2C_FIELD(arg0, s32 *, 0x50));
    fn_801DCD3C(M2C_FIELD(arg0, s32 *, 0x50));
}

void fn_801F5CDC(void) {
    fn_8000CAF0(&lbl_8029B068, 3);
}

void fn_801F5D08(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x4C) = 4;
}

void fn_801F5D14(void *arg0)
{
    u8 *object;
    u32 value;
    u32 flags;

    object = (u8 *)arg0;

    if (fn_802655A8(
            *(u32 *)(object + 0x38),
            object + 0x4B
        ) == 0) {

        flags = object[0x4B] & 0x30;

        if (flags != 0x30) {
            fn_8000C070(arg0, 2);
            return;
        }
    }

    if (*(u32 *)(object + 0x40) == 0x38) {
        fn_80266840(
            *(u32 *)(object + 0x38),
            object + 0x40,
            object + 0x4B
        );

        value = *(u32 *)(object + 0x40);

        fn_800056CC(
            lbl_80280B58 + 0x136,
            value
        );

        if ((value + 0x10000) != 0xFFFF) {
            fn_8000C070(arg0, 3);
            object[0x4C] = 3;
        }
    } else {
        fn_8000C188(arg0);
    }
}

void fn_801F5DD0(void *arg0)
{
    u8 *object;
    s32 r;

    object = (u8 *)arg0;

    r = fn_802655A8(*(u32 *)(object + 0x38), object + 0x4B);
    if (r == 0) {
        r = object[0x4B];
        if ((r & 0x30) != 0x30) {
            fn_8000C070(arg0, 2);
            return;
        }
    }
    if (r & 2) {
        return;
    }

    if (fn_80266998(*(u32 *)(object + 0x38), object + 0x44, object + 0x4B) == 0) {
        r = object[0x4B];
        if ((r & 0x30) != 0x30) {
            fn_8000C070(arg0, 2);
            return;
        }
    }

    fn_8000C188(arg0);
}

void fn_801F5E74(void *arg0) {
    s16 temp_r4;
    u32 temp_r8;

    temp_r4 = *(s16*)((char*)arg0 + 0x48);
    *(s16*)((char*)arg0 + 0x48) = temp_r4 + 1;
    if (temp_r4 + 1 > 0xF0) {
        fn_8000C070(2);
        return;
    }

    if (!(fn_802655A8(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x4B)) == 0) || 
        !(*(char*)((char*)arg0 + 0x4B) == 0x20) ||
        !(fn_80266998(*(s32*)((char*)arg0 + 0x38), ((void*)(*(u32*)((char*)arg0 + 0x38) * 0x14)), ((char*)arg0 + 0x4B)) == 0)) {
        return;
    }
    
    if (!(fn_802655A8(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x4B)) == 0) ||
        !(*(char*)((char*)arg0 + 0x4B) == 0x30)) {
        return;
    }
    
    temp_r8 = *(u32*)((char*)arg0 + 0x40);
    fn_800056CC((void*)((char*)&lbl_80280B58 + 0x149), 
                (s8)(*(char*)(temp_r8 + 0x0)), 
                (s8)(*(char*)(temp_r8 + 0x1)), 
                (s8)(*(char*)(temp_r8 + 0x2)), 
                (s8)(*(char*)(temp_r8 + 0x3)), 
                *(u32*)((char*)arg0 + 0x40));
    fn_8000C188(arg0);
    *(s16*)((char*)arg0 + 0x48) = 0;
}

void fn_801F5F58(void *arg0) {
    extern s8 *lbl_803683F0;
    u32 v;
    s8 *p;

    v = *(u32 *)((u8 *)arg0 + 0x40);
    p = lbl_803683F0;
    if ((v >> 24) == (u32)p[0] && ((v >> 16) & 0xFF) == (u32)p[1] && ((v >> 8) & 0xFF) == (u32)p[2] && (v & 0xFF) == (u32)p[3]) {
        *(u32 *)((u8 *)arg0 + 0x40) = -1;
    } else {
        fn_8000C070(arg0, 2);
    }
}

void fn_801F5FE0(void *arg0) {
    s16 temp_r4;
    u32 temp_r8;

    temp_r4 = *(s16*)((char*)arg0 + 0x48);
    *(s16*)((char*)arg0 + 0x48) = temp_r4 + 1;
    if (temp_r4 + 1 > 0xF0) {
        fn_8000C070(2);
        return;
    }
    if (!(fn_8026569C(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x4B)) == 0) || 
        !(fn_802655A8(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x4B)) == 0) ||
        !(*(char*)((char*)arg0 + 0x4B) == 0x28) ||
        !(fn_80266840(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x40), ((char*)arg0 + 0x4B)) == 0)) {
        return;
    }
    temp_r8 = *(u32*)((char*)arg0 + 0x40);
    fn_800056CC((void*)((char*)&lbl_80280B58 + 0x164), 
                temp_r8 >> 24, 
                (u8)(temp_r8 >> 16), 
                (u8)(temp_r8 >> 8), 
                (u8)temp_r8, 
                temp_r8);
    *(s16*)((char*)arg0 + 0x48) = 0;
    fn_8000C188(arg0);
}

void fn_801F60B0(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    s32 fn_8026573C(void *, u8 *);
    void fn_802658B0(void *, void *, s32, void *, void *, void *, void *);
    void fn_801F6164(s32, s32);
    extern void *lbl_803683F4;
    void *tmp;
    s32 ret;

    if (*(u32 *)((u8 *)arg0 + 0x3C) == 0) {
        fn_8000C188(arg0);
        *(s16 *)((u8 *)arg0 + 0x48) = 0;
        *(u8 *)((u8 *)arg0 + 0x4A) = 0x64;
        return;
    }
    *(u8 *)((u8 *)arg0 + 0x4C) = 2;
    lbl_803683F4 = arg0;
    tmp = *(void **)((u8 *)arg0 + 0x38);
    fn_802658B0(tmp, tmp, 1,
                *(void **)((u8 *)arg0 + 0x30),
                *(void **)((u8 *)arg0 + 0x34),
                (u8 *)arg0 + 0x4B,
                &fn_801F6164);
    ret = fn_8026573C(*(void **)((u8 *)arg0 + 0x38), (u8 *)arg0 + 0x4A);
    *(s16 *)((u8 *)arg0 + 0x48) = (s16)(*(s16 *)((u8 *)arg0 + 0x48) + 1);
    if (*(s16 *)((u8 *)arg0 + 0x48) > 0xF0 && ret == 0) {
        fn_8000C070(arg0, 1);
    }
}

void fn_801F6164(s32 unused, s32 arg1) {
    extern void *lbl_803683F4;
    M2C_FIELD(lbl_803683F4, s32 *, 0x3C) = arg1;
}

void fn_801F6170(void *arg0) {
    extern s32 lbl_80280B48[4];
    
    s32 i;
    s32 temp_r5;
    s32 *ptr;

    M2C_FIELD(arg0, u8 *, 0x4C) = 1;
    
    for (i = 0; i < 4; i++) {
        ptr = &M2C_FIELD(arg0, s32 *, 0x18 + (i << 2));
        
        M2C_FIELD(arg0, s32 *, 0x18) = lbl_80280B48[0];
        M2C_FIELD(arg0, s32 *, 0x1C) = lbl_80280B48[1];
        M2C_FIELD(arg0, s32 *, 0x20) = lbl_80280B48[2];
        M2C_FIELD(arg0, s32 *, 0x24) = lbl_80280B48[3];
        
        if (fn_8023C410(*ptr, lbl_80280B48[1], lbl_80280B48[0]) == 4) {
            temp_r5 = lbl_80280B48[i];
            
            M2C_FIELD(arg0, s32 *, 0x38) = temp_r5;
            M2C_FIELD(arg0, s32 *, 0x3C) = 2;
            M2C_FIELD(arg0, s16 *, 0x48) = 0;
            
            fn_8000C188(arg0, 2, temp_r5, i << 2, lbl_80280B48[3], lbl_80280B48[2], lbl_80280B48[1], lbl_80280B48[0]);
            return;
        }
    }
}

void fn_801F6260(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0x4C) = 0;
    fn_8005C7C8((u8 *)&lbl_80280B58 + 0x18C);
}

extern u8 lbl_8029B198[16];
void fn_801F649C(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8029B198[16];
    fn_8000CAA0(lbl_8029B198, arg0);
}

void fn_801F64C8(void) {
    extern u16 lbl_80280CF0[];
    fn_80109020((u8 *)lbl_80280CF0 + 0x20);
}

void fn_801F64F4(s32 arg0) {
    void fn_8000C188(s32);
    void fn_801480D8(s32);
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x300) {
        fn_8000C188(arg0);
        fn_801480D8(0x1388);
    }
}

void fn_801F6538(void) {
    extern u16 lbl_80280CF0[];
    fn_80147188(0xFA);
    fn_8014832C(0, (u8 *)lbl_80280CF0 + 0x33, 0x64, 1);
    fn_80109180((u8 *)lbl_80280CF0 + 0x20, 0);
    fn_800A84A0();
    fn_8018DC98();
}

void fn_801F6594(void) {
    void fn_80108FA8(void *);
    void fn_801480D8(s32);
    extern u16 lbl_80280CF0[];
    fn_80108FA8(lbl_80280CF0 + 0x10);
    fn_801480D8(0x1388);
}

void fn_801F65C8(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern u8 lbl_8029B27C[];
    extern u8 lbl_80280D38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029B27C, arg0);
    M2C_FIELD(temp_r31, s32 *, 0x30) = fn_800C4638(0x18, lbl_80280D38 + 0x6A, 0);
}

void fn_801F661C(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern u8 lbl_8029B1F8[];
    extern u8 lbl_80280D38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029B1F8, arg0);
    M2C_FIELD(temp_r31, s32 *, 0x30) = fn_800C4638(0x210, lbl_80280D38 + 0x6A, 0);
}

void fn_801F6670(void *arg0)
{
    void fn_80161F7C(void);
    void fn_8000C60C(void *);
    void fn_8006EDA0(void *);
    void fn_800C4588(void *);
    struct {
        u8 pad[0x10];
        void *unk10;
    } *work = *(void **)((u8 *)arg0 + 0x30);

    fn_80161F7C();
    if (*(void **)((u8 *)arg0 + 0x34) != NULL) {
        fn_8000C60C(*(void **)((u8 *)arg0 + 0x34));
    }
    if (work->unk10 != NULL) {
        fn_8006EDA0(&work->unk10);
    }
    fn_800C4588(work);
}

extern s32 lbl_80368400;
extern u8 lbl_80368404;
void fn_801F66D4(void *arg0) {
    void fn_8000C188(void *);
    s32 held;
    s32 pressed;
    void *obj;
    s32 state;

    held = M2C_FIELD(lbl_80367240, s32 *, 4);
    pressed = held & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ held);
    obj = M2C_FIELD(arg0, void **, 0x30);
    if ((s8)lbl_80368404 == 0) {
        lbl_80368400 = 0;
        lbl_80368404 = 1;
    }
    state = M2C_FIELD(obj, s32 *, 0);
    switch (state) {
    case 0:
        M2C_FIELD(obj, s32 *, 0) = 1;
        M2C_FIELD(obj, s32 *, 4) = 0;
        lbl_80368400 = 0;
        break;
    case 1:
        if ((pressed & 0x100) || (pressed & 0x200)) {
            fn_8000C188(arg0);
        }
        break;
    }
}

void fn_801F676C(void *arg0) {
    void fn_800075D8(void);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    void fn_801F690C(void *, f32, f32);
    extern u8 lbl_80280D38[];
    void *temp_r31;
    void *temp_r30;
    f32 fw;

    temp_r30 = *(void **)((u8 *)arg0 + 0x30);
    fn_8000A258();
    fn_80009D74(lbl_8036B910, lbl_8036B910, lbl_8036B914, lbl_8036B918);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_80009F90(*(s32 *)((u8 *)temp_r30 + 0x10), 1, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B920, lbl_8036B924, lbl_8036B910, lbl_8036B910);
    fn_80007818(lbl_8036B928, lbl_8036B92C, lbl_8036B920, lbl_8036B930);
    fn_800075D8();
    fn_80007884();
    fn_80007898(1);
    fn_80007838(lbl_8036B910, lbl_8036B924, lbl_8036B920, lbl_8036B910);
    fn_80007818(lbl_8036B920, lbl_8036B92C, lbl_8036B910, lbl_8036B930);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    temp_r31 = fn_8000E0E4(lbl_80280D38 + 0x6B);
    fw = (f32)fn_80010B78(temp_r31, -1, lbl_8036B934);
    fn_8001003C((s32)(lbl_8036B920 - lbl_8036B938 * fw), 0x1E, 2, 0, 0, temp_r31, lbl_8036B934, lbl_8036B910);
    fn_8000A258();
    fn_80009C0C(lbl_8036B93C);
    fn_8000A248();
    fn_801F690C(temp_r30, lbl_8036B940, lbl_8036B944);
}

void fn_801F690C(void *arg0, f32 farg0, f32 farg1) {
    void fn_800066B4(s32, s32, u32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    void **fn_8006EDD8(s32, s32);
    u8 fn_8014BC10(void *);
    u8 fn_8014BEE0(void *);
    u8 fn_8014C078(void *);
    u8 fn_8014C12C(void *);
    void fn_8015A2D8(s32, s32, s32, s32, s32, s32);
    s32 *fn_8018D900(s32);
    extern u8 lbl_80280D38[];
    extern u8 lbl_80330708[];
    extern f32 lbl_8036B910;
    extern f32 lbl_8036B918;
    extern f32 lbl_8036B91C;
    extern f32 lbl_8036B934;
    extern f64 lbl_8036B948;
    extern f32 lbl_8036B950;
    extern f32 lbl_8036B954;
    extern f32 lbl_8036B958;
    extern f32 lbl_8036B95C;
    extern f32 lbl_8036B960;
    extern f32 lbl_8036B964;
    extern f32 lbl_8036B968;
    extern f32 lbl_8036B96C;
    extern f32 lbl_8036B970;
    extern f32 lbl_8036B974;
    extern f32 lbl_8036B978;
    extern f32 lbl_8036B97C;
    extern f32 lbl_8036B980;
    extern f32 lbl_8036B984;
    extern f32 lbl_8036B988;
    extern f32 lbl_8036B98C;
    extern f32 lbl_8036B990;
    extern f32 lbl_8036B994;
    extern f32 lbl_8036B998;
    extern f64 lbl_8036B9A0;

    u32 sp1C;
    s32 sp18;
    s32 sp14;
    u8 sp10[4];
    s32 spC;
    s32 sp8;
    void *self = arg0;
    f32 fx = farg0;
    f32 fy = farg1;
    u16 h;
    u16 w;
    void *str;
    u8 val;
    f32 f31;
    f32 f28;
    f32 f27;
    s32 tw;
    void *label;

    fn_800066B4(*(s32 *)((u8 *)self + 8), *(s32 *)((u8 *)self + 0xC), &sp1C, &sp18, &sp14);
    if (sp1C > 0x63U) {
        sp1C = 0x63U;
        sp18 = 0x3B;
        sp14 = 0x3B;
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    *(s32 *)sp10 = *fn_8018D900(1);
    {
        void **p = fn_8006EDD8(*(s32 *)((u8 *)self + 0x10), 0);
        void *tex = *p;
        h = *(u16 *)((u8 *)tex + 2);
        w = *(u16 *)tex;
    }
    fn_8000A258();
    fn_80009F90(*(s32 *)((u8 *)self + 0x10), 0, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(fx, fy, lbl_8036B910, lbl_8036B910);
    fn_80007818(fx + (f32)h, fy + (f32)w, (f32)h, (f32)w);
    fn_800076AC(sp10[0], sp10[1], sp10[2], 0xFF);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();

    str = fn_8000E0E4(lbl_80280D38 + 0x7D);
    fn_8001003C((s32)(lbl_8036B950 + fx), (s32)(lbl_8036B954 + fy), 1, 1, 0, str, lbl_8036B918, lbl_8036B910);

    fn_8001003C((s32)(lbl_8036B958 + fx), (s32)(lbl_8036B95C + fy), 6, 1, 0, lbl_80280D38 + 0x93,
                *(s16 *)(lbl_80330708 + 0x12), lbl_8036B934, lbl_8036B910);

    f31 = lbl_8036B960 + fx;
    str = fn_8000E0E4(lbl_80280D38 + 0xB4);
    sp8 = sp18;
    spC = sp14;
    fn_8001003C((s32)f31, (s32)(lbl_8036B964 + fy), 1, 1, 0, lbl_80280D38 + 0x96, str, (s32)sp1C,
                lbl_8036B918, lbl_8036B910);

    f28 = lbl_8036B968 + fy;
    fn_8001003C((s32)f31, (s32)f28, 1, 1, 0, fn_8000E0E4(lbl_80280D38 + 0xC9), lbl_8036B918, lbl_8036B910);

    val = fn_8014C12C(lbl_80330708);
    fn_8000E0E4(lbl_80280D38 + 0xC9);
    tw = fn_80010B78((void *)0, -1, lbl_8036B918);
    f27 = lbl_8036B970 + fy;
    fn_8001003C((s32)(lbl_8036B96C + (f31 + (f32)tw)), (s32)f27, 6, 1, 0, lbl_80280D38 + 0xDF, val,
                lbl_8036B934, lbl_8036B910);

    f28 = lbl_8036B974 + fx;
    fn_8001003C((s32)f28, (s32)(lbl_8036B968 + fy), 1, 1, 0, fn_8000E0E4(lbl_80280D38 + 0xE2), lbl_8036B918,
                lbl_8036B910);

    val = fn_8014C078(lbl_80330708);
    fn_8000E0E4(lbl_80280D38 + 0xE2);
    tw = fn_80010B78((void *)0, -1, lbl_8036B918);
    fn_8001003C((s32)(lbl_8036B96C + (f28 + (f32)tw)), (s32)f27, 6, 1, 0, lbl_80280D38 + 0xDF, val,
                lbl_8036B934, lbl_8036B910);

    fn_8001003C((s32)f31, (s32)(lbl_8036B978 + fy), 1, 1, 0, fn_8000E0E4(lbl_80280D38 + 0xF9), lbl_8036B918,
                lbl_8036B910);

    val = fn_8014BEE0(lbl_80330708);
    fn_8000E0E4(lbl_80280D38 + 0xF9);
    tw = fn_80010B78((void *)0, -1, lbl_8036B918);
    fn_8001003C((s32)(lbl_8036B96C + (f31 + (f32)tw)), (s32)(lbl_8036B97C + fy), 6, 1, 0,
                lbl_80280D38 + 0xDF, val, lbl_8036B934, lbl_8036B910);

    f28 = lbl_8036B980 + fx;
    f27 = lbl_8036B984 + fy;
    fn_8001003C((s32)f28, (s32)f27, 0x19, 1, 0, fn_8000E0E4(lbl_80280D38 + 0x10E), lbl_8036B934,
                lbl_8036B910);

    val = fn_8014BC10(lbl_80330708);
    fn_8000E0E4(lbl_80280D38 + 0x10E);
    tw = fn_80010B78((void *)0, -1, lbl_8036B918);
    fn_8001003C((s32)(lbl_8036B96C + (f28 + (f32)tw)), (s32)f27, 6, 1, 0, lbl_80280D38 + 0xDF, val,
                lbl_8036B934, lbl_8036B910);

    fn_8000A258();
    fn_80009C0C(lbl_8036B988);
    fn_8000A248();
    fn_8015A2D8((s32)(lbl_8036B968 + fx), (s32)(fy - lbl_8036B98C), 0x10A, 0x30, 0xFF, 0x10);
    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();

    switch (lbl_80330708[0x10]) {
    case 0x5B:
        label = fn_8000E0E4(lbl_80280D38 + 0x125);
        break;
    case 0x5C:
        label = fn_8000E0E4(lbl_80280D38 + 0x132);
        break;
    case 0x5D:
        label = fn_8000E0E4(lbl_80280D38 + 0x13F);
        break;
    case 0x5E:
        label = fn_8000E0E4(lbl_80280D38 + 0x14C);
        break;
    case 0x5F:
        label = fn_8000E0E4(lbl_80280D38 + 0x159);
        break;
    case 0x60:
        label = fn_8000E0E4(lbl_80280D38 + 0x166);
        break;
    default:
        label = 0;
        break;
    }
    tw = fn_80010B78(label, -1, lbl_8036B918);
    {
        f32 x = lbl_8036B990 + fx;
        x = x - (f32)(((s32)tw + ((u32)(s32)tw >> 31)) >> 1);
        fn_8001003C((s32)x, (s32)(fy - lbl_8036B994), 1, 1, 0, label, lbl_8036B918, lbl_8036B910);
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036B998);
    fn_8000A248();
}

void fn_801F7194(void *arg0) {
    s32 fn_80059208(void (*)(void *), void *);
    s32 fn_80161FB8(void);
    void fn_80162054(void);
    void fn_8000C188(void *);
    void fn_801F676C(void *);
    s32 fn_8005C6A0(void *);
    extern u8 lbl_80280D38[];
    if ((fn_8005C6A0(lbl_80280D38 + 0x173) & 0x2000) && (fn_80161FB8() != 0)) {
        fn_80162054();
        M2C_FIELD(arg0, s32 *, 0x34) = fn_80059208(fn_801F676C, arg0);
        fn_8000C188(arg0);
    }
}

void fn_801F7200(void *arg0) {
    extern u8 lbl_80330708[];
    extern u8 lbl_80280D38[];
    void fn_80147188(s32);
    void fn_8006EEFC(void *, void *);
    void fn_80162018(void);
    u32 *obj;
    u8 *base;
    u32 t0;

    obj = *(u32 **)((u8 *)arg0 + 0x30);
    fn_80147188(0x3E8);
    obj[0] = 0;
    obj[1] = 0;
    base = lbl_80330708;
    t0 = *(u32 *)(base + 0x60);
    obj[3] = *(u32 *)(base + 0x64);
    obj[2] = t0;
    fn_8006EEFC(obj + 4, lbl_80280D38 + 0x173);
    fn_80162018();
}

void fn_801F726C(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    fn_8006EDA0(temp_r31);
    fn_800C4588(temp_r31);
}

void fn_801F7434(void *arg0) {
    void *temp_r31;
    s32 var_r29;
    u8 var_r28;
    u8 *var_r30;
    u8 temp_r3;
    s32 temp_r0;
    u8 *var_r27;

    temp_r31 = *(void**)((u8*)arg0 + 0x30);
    *(u8*)((u8*)temp_r31 + 0x88) = 1;
    *(u8*)((u8*)temp_r31 + 0x5) = 0;
    *(u8*)((u8*)temp_r31 + 0x16) = 1;
    *(u8*)((u8*)temp_r31 + 0x17) = 1;
    *(u16*)((u8*)temp_r31 + 0x18) = 0;
    *(u16*)((u8*)temp_r31 + 0x1A) = 0x1C2;
    *(u16*)((u8*)temp_r31 + 0x1C) = 0x3D;
    *(u8*)((u8*)temp_r31 + 0xCE) = 0;
    *(u8*)((u8*)temp_r31 + 0x10E) = 0;
    *(u8*)((u8*)temp_r31 + 0x14E) = 0;
    *(u8*)((u8*)temp_r31 + 0x18E) = 0;
    *(u8*)((u8*)temp_r31 + 0x1CE) = 0;
    
    var_r29 = 0;
    var_r30 = (u8*)fn_8000E0E4((u8*)temp_r31 + (u16)((u8*)temp_r31 + 0x6) * 4 + 0xB0, 0, 1);
    
loop_1:
    temp_r3 = *var_r30;
    if (temp_r3 == 0 || temp_r3 == 0xA) {
        var_r27 = (u8*)temp_r31 + 0xCE;
        if (var_r29 > 0) {
            memcpy(var_r27, ((u8*)var_r30 - 1), var_r29);
        }
        temp_r0 = var_r29 + 0xCE;
        ((u8*)temp_r31)[temp_r0] = 0;
        temp_r31 = (u8*)temp_r31 + 0x40;
        var_r28 += 1;
        if (*(u8*)var_r30 == 0) {
            ((u8*)temp_r31)[-0x40] = var_r28;
            return;
        }
        var_r30 += 1;
        goto loop_1;
    } else {
        var_r30 += 1;
        var_r29 += 1;
        goto loop_1;
    }
}

void fn_801F75D4(void* arg0) {
    s32 temp_r3;
    s32 temp_r4;
    u8* ptr;
    
    if (arg0 == NULL) {
        return;
    }

    temp_r3 = *(s32*)((char*)arg0 + 0x50);
    if (temp_r3 == 0) {
        return;
    }
    
    ptr = (u8*)(*(u32*)((char*)arg0 + 0x50));
    *(u32*)((char*)ptr + 0x64) = 0;

    temp_r4 = *(s32*)((char*)arg0 + 0x78);
    if (temp_r4 != 0) {
        *(s32*)((char*)arg0 + 0x16C) = 0;
        *(s32*)((char*)arg0 + 0x170) = 0;
        *(u32*)((char*)arg0 + 0x54) = 0;
        *ptr = 0;
    }
    
    *(u32*)((char*)arg0 + 0x198) = 0;
}

void fn_801F7750(void *arg0)
{
    extern u8 lbl_80280D38[];
    extern void fn_80234450(s32 arg0, s32 arg1);
    extern void *fn_8000E0E4(const char *arg0);
    extern void fn_802343E0(void *arg0, const char *arg1);

    u8 *object;
    u8 *strings;

    object = *(u8 **)((u8 *)arg0 + 0x30);
    strings = lbl_80280D38;

    object[0x88] = 0;
    object[0x4] = 1;
    object[0x5] = 1;
    *(u16 *)(object + 0x8) = 0x31;
    *(u16 *)(object + 0xA) =
        (u16)(*(s16 *)(object + 0x6) * 0x18 + 0x78);
    object[0x16] = 0;

    fn_80234450((s32)(object + 0x28), (s32)(strings + 0x23E));

    fn_802343E0(object + 0x28, fn_8000E0E4((const char *)(strings + 0x1F1)));
    fn_802343E0(object + 0x28, (const char *)(strings + 0x1FC));

    fn_802343E0(object + 0x28, fn_8000E0E4((const char *)(strings + 0x204)));
    fn_802343E0(object + 0x28, (const char *)(strings + 0x20F));

    fn_802343E0(object + 0x28, fn_8000E0E4((const char *)(strings + 0x244)));
}

void fn_801F7838(s32 arg0) {
    extern u8 lbl_80280D38[];
    s32 fn_8005C6A0(void *);
    void fn_8000C188(s32);

    if (fn_8005C6A0(lbl_80280D38 + 0x24F) & 0x2000) {
        fn_8000C188(arg0);
    }
}

void fn_801F7880(void* arg0) {
    s32 var_r4;
    void* temp_r31;
    void* temp_r5;
    
    temp_r31 = *(void**)((u8*)arg0 + 0x30);
    memset(temp_r31, 0, 0x210);
    *(u16*)((u8*)temp_r31 + 0x8c) = 0xff;
    var_r4 = 0;
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 1) {
        var_r4 = 1;
        *(u32*)((u8*)temp_r31 + 0x98) = 0x80280F2D;
        *(u32*)((u8*)temp_r31 + 0xb0) = 0x8028106C;
        *(u8*)((u8*)temp_r31 + 0xc8) = 0;
    }
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 2) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F3A;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x8028107C;
        var_r4 += 1;
        *(u8*)temp_r5 = 1;
    }
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 4) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F47;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x8028108C;
        var_r4 += 1;
        *(u8*)temp_r5 = 2;
    }
    
    if ((*(u16*)((u8*)temp_r31 + 0x10) & 0x10) || (*(u16*)((u8*)temp_r31 + 0x10) & 0x20)) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F54;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x8028109C;
        var_r4 += 1;
        *(u8*)temp_r5 = 3;
    }
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 0x10) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F61;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x802810AC;
        var_r4 += 1;
        *(u8*)temp_r5 = 4;
    }
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 0x20) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F6E;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x802810BC;
        var_r4 += 1;
        *(u8*)temp_r5 = 5;
    }
    
    *(u8*)((u8*)temp_r31 + 0x94) = var_r4;
    *(u8*)((u8*)temp_r31 + 0x8a) = -1;
    temp_r5 = (u8*)temp_r31 + *(u16*)((u8*)temp_r31 + 0x6);
    *(u8*)((u8*)temp_r31 + 0x89) = *(u8*)((u8*)temp_r5 + 0xc8);
    
    fn_8006EEFC(temp_r31, 0x80280F05, temp_r5);
}

void fn_801F7A60(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_800075D8(void);
    void fn_80007698(s32);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    s32 fn_80019F04(s32);
    void **fn_8006EDD8(void *, s32);
    void fn_8007CB3C(void *, s32);
    void fn_8007D024(s32, s32, f32, f32, f32, f32);
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    void fn_8008BF68(s16, s16, s32);
    void *fn_8016614C(s32, s32);
    s32 *fn_8018D900(s32);
    extern u8 lbl_80280D38[];
    extern f32 lbl_8036B910;
    extern f32 lbl_8036B918;
    extern f32 lbl_8036B91C;
    extern f32 lbl_8036B920;
    extern f32 lbl_8036B924;
    extern f32 lbl_8036B938;
    extern f32 lbl_8036B93C;
    extern f32 lbl_8036B95C;
    extern f32 lbl_8036B988;
    extern f64 lbl_8036B9A0;
    extern f32 lbl_8036B9A8;
    extern f32 lbl_8036B9AC;
    extern f32 lbl_8036B9B0;
    extern f32 lbl_8036B9B4;
    extern f32 lbl_8036B9B8;
    extern f32 lbl_8036B9BC;
    extern f32 lbl_8036B9C0;
    extern f32 lbl_8036B9C4;
    extern f32 lbl_8036B9C8;
    extern f32 lbl_8036B9CC;
    extern f32 lbl_8036B9D0;
    extern f32 lbl_8036B9D4;
    extern f32 lbl_8036B9D8;
    extern f32 lbl_8036B9DC;
    extern f32 lbl_8036B9E0;
    extern f32 lbl_8036B9E4;
    extern f32 lbl_8036B9E8;
    extern f32 lbl_8036B9EC;
    extern f32 lbl_8036B9F0;
    extern f32 lbl_8036B9F4;
    extern f32 lbl_8036B9F8;
    extern f32 lbl_8036B9FC;
    extern f64 lbl_8036B948;

    u8 c0[4], c1[4], c2[4], c3[4], c4[4];
    f32 f0, f1, f2;
    f32 fx;
    s32 i;
    s32 t;
    s32 tw;
    s32 item;
    s32 flag;
    u16 h, w;
    s16 y;
    s16 maxw;
    void **pp;
    void *p;
    void *str;
    void *self;
    u8 *slot;

    self = *(void **)((u8 *)arg0 + 0x30);
    if ((s8)*(u8 *)((u8 *)self + 0x88) == 0) {
        *(s16 *)((u8 *)self + 0x8E) = (s16)(*(s16 *)((u8 *)self + 0x8E) - 0x1E);
        if (*(s16 *)((u8 *)self + 0x8E) < 0) {
            *(s16 *)((u8 *)self + 0x8E) = 0;
        }
        f2 = *(f32 *)((u8 *)self + 0x90);
        f1 = lbl_8036B9A8;
        f0 = lbl_8036B910;
        f1 = f2 - f1;
        *(f32 *)((u8 *)self + 0x90) = f1;
        f1 = *(f32 *)((u8 *)self + 0x90);
        if (f1 < f0) {
            *(f32 *)((u8 *)self + 0x90) = f0;
        }
    }
    flag = *(u8 *)((u8 *)self + 0x88);
    if (flag == 1) {
        *(s16 *)((u8 *)self + 0x8E) = (s16)(*(s16 *)((u8 *)self + 0x8E) + 0x1E);
        if (*(s16 *)((u8 *)self + 0x8E) > 0x80) {
            *(s16 *)((u8 *)self + 0x8E) = 0x80;
        }
        f2 = *(f32 *)((u8 *)self + 0x90);
        f1 = lbl_8036B9A8;
        f0 = lbl_8036B918;
        f1 = f2 + f1;
        *(f32 *)((u8 *)self + 0x90) = f1;
        f1 = *(f32 *)((u8 *)self + 0x90);
        if (f1 > f0) {
            *(f32 *)((u8 *)self + 0x90) = f0;
        }
    }
    *(s16 *)((u8 *)self + 0x8C) = (s16)(*(s16 *)((u8 *)self + 0x8C) + 0x14);
    if (*(s16 *)((u8 *)self + 0x8C) > 0xFF) {
        *(s16 *)((u8 *)self + 0x8C) = 0xFF;
    }

    i = 0;
    slot = (u8 *)self;
    do {
        if (*(s16 *)(slot + 0xC) > 0) {
            *(s16 *)(slot + 0xC) = (s16)(*(s16 *)(slot + 0xC) - 1);
            t = 4 - *(s16 *)(slot + 0xC);
            *(s16 *)(slot + 8) = (s16)fn_800067BC(4, (f32)*(s16 *)(slot + 0xE), (f32)*(s16 *)(slot + 0x12), (f32)t, lbl_8036B9AC);
            *(s16 *)(slot + 0xA) = (s16)fn_800067BC(4, (f32)*(s16 *)(slot + 0x10), (f32)*(s16 *)(slot + 0x14), (f32)t, lbl_8036B9AC);
        }
        i += 1;
        slot += 0x12;
    } while (i < 2);

    fn_8000A258();
    fn_80009D74(lbl_8036B910, lbl_8036B910, lbl_8036B9B0, lbl_8036B918);
    fn_80009B8C(0xFF);
    fn_8000A248();

    if ((s8)*(u8 *)((u8 *)self + 0x8A) != -1) {
        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 0), (s8)*(u8 *)((u8 *)self + 0x8A) + 4, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B9B4, lbl_8036B9B8, lbl_8036B910, lbl_8036B910);
        fn_80007818(lbl_8036B9BC, lbl_8036B9C0, lbl_8036B9C4, lbl_8036B9C8);
        fn_80007698(0xFF);
        fn_80007884();
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), (s8)*(u8 *)((u8 *)self + 0x89) + 4, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B9B4, lbl_8036B9B8, lbl_8036B910, lbl_8036B910);
    fn_80007818(lbl_8036B9BC, lbl_8036B9C0, lbl_8036B9C4, lbl_8036B9C8);
    fn_80007698((u8)*(s16 *)((u8 *)self + 0x8C));
    fn_80007884();

    fn_8007D024(0xB3, 0xFB, lbl_8036B95C, lbl_8036B9B8, lbl_8036B9CC, (f32)(*(u8 *)((u8 *)self + 0x94) * 0x18 + 0x18));

    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();

    p = self;
    i = 0;
    y = 0x78;
    while (i < *(u8 *)((u8 *)self + 0x94)) {
        fn_8001003C(0x38, y, 1, 1, 0, fn_8000E0E4(*(void **)((u8 *)p + 0x98)), lbl_8036B918, lbl_8036B910);
        p = (u8 *)p + 4;
        y = (s16)(y + 0x18);
        i += 1;
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036B918);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B9D0);
    fn_8000A248();

    if (*(u8 *)((u8 *)self + 4) != 0) {
        fn_8008BF68(*(s16 *)((u8 *)self + 8), *(s16 *)((u8 *)self + 0xA), *(u8 *)((u8 *)self + 5));
        fn_8008AB7C(*(s16 *)((u8 *)self + 8) + 0x50, *(s16 *)((u8 *)self + 0xA) + 0xE, 0xA0, 0x17, 0x19, 0x64, *(u8 *)((u8 *)self + 5));
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036B9D0);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B910, lbl_8036B910, lbl_8036B910, lbl_8036B910);
    fn_80007818(lbl_8036B9D4, lbl_8036B9D8, lbl_8036B910, lbl_8036B910);
    fn_800076AC(0, 0, 0, (u8)*(s16 *)((u8 *)self + 0x8E));
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B988);
    fn_8000A248();

    *(s32 *)c0 = *fn_8018D900(1);
    pp = fn_8006EDD8(*(void **)((u8 *)self + 0), 0);
    h = ((u16 *)*pp)[1];
    w = ((u16 *)*pp)[0];
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 0, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B9DC, lbl_8036B924, lbl_8036B910, lbl_8036B910);
    fn_80007818(lbl_8036B9DC + (f32)h, lbl_8036B924 + (f32)w, lbl_8036B910 + (f32)h, lbl_8036B910 + (f32)w);
    fn_800076AC(c0[0], c0[1], c0[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();

    *(s32 *)c1 = *fn_8018D900(1);
    pp = fn_8006EDD8(*(void **)((u8 *)self + 0), 1);
    h = ((u16 *)*pp)[1];
    w = ((u16 *)*pp)[0];
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 1, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B9E0, lbl_8036B9E4, lbl_8036B910, lbl_8036B910);
    fn_80007818(lbl_8036B9E0 + (f32)h, lbl_8036B9E4 + (f32)w, lbl_8036B910 + (f32)h, lbl_8036B910 + (f32)w);
    fn_800076AC(c1[0], c1[1], c1[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036B93C);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();

    *(s32 *)c2 = *fn_8018D900(1);
    pp = fn_8006EDD8(*(void **)((u8 *)self + 0), 2);
    h = ((u16 *)*pp)[1];
    w = ((u16 *)*pp)[0];
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 2, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B910, lbl_8036B9E8, lbl_8036B910, lbl_8036B910);
    f1 = lbl_8036B910 + (f32)h;
    fn_80007818(f1, lbl_8036B9E8 + (f32)w, f1, lbl_8036B910 + (f32)w);
    fn_800076AC(c2[0], c2[1], c2[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    *(s32 *)c3 = *fn_8018D900(1);
    pp = fn_8006EDD8(*(void **)((u8 *)self + 0), 2);
    h = ((u16 *)*pp)[1];
    w = ((u16 *)*pp)[0];
    fn_8000A258();
    fn_80009F90(*(void **)((u8 *)self + 0), 2, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B920, lbl_8036B9E8, lbl_8036B910 + (f32)h, lbl_8036B910);
    fn_80007818(lbl_8036B920 + (f32)h, lbl_8036B9E8 + (f32)w, lbl_8036B910, lbl_8036B910 + (f32)w);
    fn_800076AC(c3[0], c3[1], c3[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();

    if ((s8)*(u8 *)((u8 *)self + 0x88) == 0) {
        fn_8001003C(0xF0, 0x3D, 2, 0, 0, fn_8000E0E4(lbl_80280D38 + 0x2C4), lbl_8036B918, lbl_8036B910);
    }
    flag = *(u8 *)((u8 *)self + 0x88);
    if (flag == 1) {
        fn_8001003C(0x8C, 0x3D, 2, 0, 0, fn_8000E0E4(lbl_80280D38 + 0x2D4), lbl_8036B918, lbl_8036B910);
        fn_8001003C(0x1C2, 0x3D, 2, 0, 0, fn_8000E0E4(lbl_80280D38 + 0x2E0), lbl_8036B918, lbl_8036B910);
        fn_8001003C(0x1FE, 0x3D, 2, 0, 0, fn_8000E0E4(lbl_80280D38 + 0x2E8), lbl_8036B918, lbl_8036B910);
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036B93C);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B9D0);
    fn_8000A248();

    if (*(u8 *)((u8 *)self + 0x16) != 0) {
        fn_8008BF68(*(s16 *)((u8 *)self + 0x1A), *(s16 *)((u8 *)self + 0x1C), *(u8 *)((u8 *)self + 0x17));
        fn_8008AB7C(*(s16 *)((u8 *)self + 0x1A) + 0x1C, *(s16 *)((u8 *)self + 0x1C) + 0xC, 0x50, 0x18, 0x19, 0x4B, *(u8 *)((u8 *)self + 0x17));
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036B9EC);
    fn_8000A248();

    if (*(f32 *)((u8 *)self + 0x90) != lbl_8036B910) {
        fn_8000A258();
        fn_80009D74(lbl_8036B920, lbl_8036B9F0, lbl_8036B9F4, *(f32 *)((u8 *)self + 0x90));
        fn_8000A248();

        *(s32 *)c4 = *fn_8018D900(1);
        pp = fn_8006EDD8(*(void **)((u8 *)self + 0), 3);
        h = ((u16 *)*pp)[1];
        w = ((u16 *)*pp)[0];
        fn_8000A258();
        fn_80009F90(*(void **)((u8 *)self + 0), 3, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_80007838(lbl_8036B9F8, lbl_8036B9FC, lbl_8036B910, lbl_8036B910);
        fn_80007818(lbl_8036B9F8 + (f32)h, lbl_8036B9FC + (f32)w, lbl_8036B910 + (f32)h, lbl_8036B910 + (f32)w);
        fn_800076AC(c4[0], c4[1], c4[2], 0xFF);
        fn_800075D8();
        fn_80007884();

        fn_8000A258();
        fn_80009C0C(lbl_8036B91C);
        fn_8000A248();

        str = fn_8000E0E4(*(void **)((u8 *)self + 0x98 + *(s16 *)((u8 *)self + 6) * 4));
        tw = fn_80010B78(str, -1, lbl_8036B918);
        fn_8001003C((s16)(-6 - (tw / 2)), -0x68, 2, 0, 0, str, lbl_8036B918, lbl_8036B910);

        item = fn_80019F04(*(s32 *)((u8 *)self + 0xC8) + *(s16 *)((u8 *)self + 6) + 0x5B);
        str = fn_8016614C(item, 0);
        if (str != 0) {
            fn_8001003C(-0x50, -0x42, 2, 0, 0, fn_8000E0E4(str), lbl_8036B918, lbl_8036B910);
        }
        str = fn_8016614C(item, 1);
        if (str != 0) {
            fn_8001003C(0x28, -0x42, 2, 0, 0, fn_8000E0E4(str), lbl_8036B918, lbl_8036B910);
        }

        p = self;
        maxw = 0;
        i = 0;
        while (i < *(u8 *)((u8 *)self + 0x95)) {
            tw = fn_80010B78((u8 *)p + 0xCE, -1, lbl_8036B918);
            if ((s16)tw > maxw) {
                maxw = (s16)tw;
            }
            p = (u8 *)p + 0x40;
            i += 1;
        }

        fx = (lbl_8036B938 * (f32)(0x1D0 - maxw)) + lbl_8036B9F8;
        p = self;
        i = 0;
        y = -0x16;
        while (i < *(u8 *)((u8 *)self + 0x95)) {
            fn_8001003C((s16)fx, y, 0xF, 0, 0, (u8 *)p + 0xCE, lbl_8036B918, lbl_8036B910);
            p = (u8 *)p + 0x40;
            y = (s16)(y + 0x18);
            i += 1;
        }

        fn_8000A258();
        fn_80009C0C(lbl_8036B918);
        fn_8000A248();
    }

    fn_8000A258();
    fn_80009D74(lbl_8036B910, lbl_8036B910, lbl_8036B9F4, lbl_8036B918);
    fn_8000A248();
    fn_8007CB3C((u8 *)self + 0x28, 0);
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}

extern u8 lbl_8029B438[16];
void fn_801F8798(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8029B438[16];
    fn_8000CAA0(lbl_8029B438, arg0);
}

s32 fn_801F87C4(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0x10] == 0x20;
}

void fn_801F87E0(void) {
    void fn_80013D4C(void);
    void fn_8003F670(void *);
    void fn_80050E80(void);
    void fn_8005BCAC(void);
    void fn_8005C7C8(void *);
    void fn_800C4B8C(void);
    extern u8 lbl_80281028[];
    extern void *lbl_80368408;
    extern void *lbl_8036840C;
    void *p;

    fn_80050E80();
    fn_8005C7C8(lbl_80281028 + 0x1FE);
    p = lbl_80368408;
    if (p != NULL) {
        fn_8003F670(p);
        lbl_80368408 = NULL;
    }
    p = lbl_8036840C;
    if (p != NULL) {
        fn_8003F670(p);
        lbl_8036840C = NULL;
    }
    fn_80013D4C();
    fn_8005BCAC();
    fn_800C4B8C();
    fn_800C4B8C();
}

void fn_801F8850(s32 arg0) {
    extern u16 lbl_80281028[];

    fn_800C08AC((u8 *)lbl_80281028 + 0x20E, arg0, lbl_80281028);
}

#pragma global_optimizer off
void fn_801F8880(void) {
    void fn_800C50FC();
    s32 fn_800C52C8(void);
    void fn_800C469C(void *);
    void fn_80013E24(void *);
    void *fn_8003FCCC(void *);
    void fn_8005C84C(void *);
    void fn_80050F64(void);
    extern u8 lbl_80281028[];
    extern u8 lbl_8029B41C[];
    extern void *lbl_80368408;
    extern void *lbl_8036840C;
    extern u8 lbl_80367708;

    fn_800C50FC(lbl_80281028 + 0x215, 0x180000);
    fn_800C50FC(lbl_80281028 + 0x220, fn_800C52C8(), lbl_80281028);
    fn_800C469C(lbl_80281028 + 0x215);
    fn_80013E24(lbl_80281028 + 0x22C);
    lbl_80368408 = fn_8003FCCC(*(void **)(lbl_8029B41C + 4));
    lbl_8036840C = fn_8003FCCC(lbl_80281028 + 0x23F);
    fn_8005C84C(lbl_80281028 + 0x1FE);
    fn_80050F64();
    lbl_80367708 = 0;
}
#pragma global_optimizer on
void fn_801F892C(void) {
    M2C_UNK fn_8002D4B8();
    fn_8002D4B8();
}

void fn_801F894C(s32 arg0) {
    extern u16 lbl_80281028[];

    fn_800C08AC((u8 *)lbl_80281028 + 0x24D, arg0, lbl_80281028);
}

void fn_801F897C(void) {
    void fn_8014D2B0(void *, s32);
    void fn_8002D548(void);
    extern u8 lbl_80330708[];

    fn_8014D2B0(lbl_80330708, 0x1F);
    fn_8002D548();
}

void fn_801F89AC(s32 arg0, s32 arg1) {
    extern u8 lbl_8029B394[];
    extern f32 lbl_8036BA00;
    void *fn_8000CAA0(void *, s32);
    void fn_801FB410(void *);
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029B394, arg1);
    if (temp_r31 != 0) {
        fn_801FB410((u8 *)temp_r31 + 0x30);
        *(f32 *)((u8 *)temp_r31 + 0x3C) = lbl_8036BA00;
        *(s32 *)((u8 *)temp_r31 + 0x4C) = 0;
        *(s32 *)((u8 *)temp_r31 + 0x50) = 0;
        ((u8 *)temp_r31)[0x54] = 5;
        *(s32 *)((u8 *)temp_r31 + 0x48) = arg0;
    }
}

void fn_801F8A18(void *arg0) {
    struct Node {
        struct Node *prev;
        struct Node *next;
    };
    struct List {
        s32 unk0;
        struct Node node;
    };
    struct Obj {
        u8 pad[0x30];
        struct List list;
    };
    void fn_8006EDA0(void *);
    void fn_801FB220(void *, struct List *, struct Node **, struct Node **);
    struct Node *sp10;
    struct Node *spC;
    u8 sp8[4];
    struct Node *end;
    struct Obj *self;

    self = (struct Obj *)arg0;
    if (*(u32 *)((u8 *)arg0 + 0x50) != 0) {
        fn_8006EDA0((u8 *)self + 0x50);
    }
    if (self != NULL) {
        if (&self->list != NULL) {
            if (&self->list != NULL) {
                if (&self->list != NULL) {
                    end = &self->list.node;
                    sp10 = end;
                    spC = end->next;
                    fn_801FB220(sp8, &self->list, &spC, &sp10);
                }
            }
        }
    }
}

#pragma optimization_level 2
#pragma use_lmw_stmw on
#pragma opt_pointer_aliasing off
void fn_801F8A98(void *arg0) {
    void fn_800152F8(s32, s32, s32, s32, s32, s32, s32, s32, void *);
    void fn_800506E0(void *, s32, void *);
    void fn_800616A0(void *);
    void fn_8006140C(void *);
    void *fn_80061870(void);
    s32 fn_800639B4(void);
    void fn_8006EEFC(void *, void *);
    void *fn_800A8A00(void *);
    void fn_80108FA8(void *);
    void *fn_80109180(void *, void *);
    void fn_801FA8B4(void *, void *);
    void fn_801FB2EC(void *, void *, void *, void *);
    void fn_80231D94(void *, void *, ...);
    void *memset(void *, s32, u32);
    u32 fn_801F8D38(void **, void **);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_80281028[];
    extern void *lbl_8029B378[];
    extern f32 lbl_8036BA00;
    extern f32 lbl_8036BA04;

    typedef struct Node {
        struct Node *unk0;
        struct Node *unk4;
        void *unk8;
    } Node;

    char buf[0x20];
    u8 flags[8];
    struct {
        void *owner;
        void *obj;
    } pair;
    void *sp14;
    void *sp10;
    void *self;
    void *unit;
    void *base;
    register void *strs;
    Node *n;
    void *fmt259;
    register s32 i;

    self = arg0;
    fn_800152F8(1, 0, 0, 0, 0, 1, 1, 0, flags);
    i = 1;
    base = (u8 *)self + 0x34;
    do {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(void **)((u8 *)unit + 0x188) != NULL) {
            if (flags[((u8 *)*(void **)((u8 *)unit + (short)0x190))[8]] != 0) {
                u32 *p;
                pair.owner = unit;
                pair.obj = (void *)0;
                if (pair.obj != (void *)0) {
                    fn_800616A0(pair.obj);
                }
                pair.obj = fn_80061870();
                p = (u32 *)pair.obj;
                *(void **)((u8 *)pair.obj + 4) = (u8 *)unit + 0x1C;
                *p |= 0x50028400;
                fn_800506E0(unit, 0, p);
                *(s32 *)((u8 *)pair.obj + 0x44) = fn_800639B4();
                fn_8006140C(pair.obj);
                sp14 = base;
                fn_801FB2EC(&sp10, (u8 *)self + 0x30, &sp14, &pair.owner);
                if (pair.obj != (void *)0) {
                    fn_800616A0(pair.obj);
                }
            }
        }
        i += 1;
    } while (0x9F >= i);
    fn_801FA8B4((void *)((u32)self + 0x30U), fn_801F8D38);
    n = *(Node **)base;
    strs = lbl_80281028;
    n = n->unk0;
    fmt259 = (u8 *)strs + 0x259;
    n = n->unk0;
    n = n->unk0;
    n = n->unk0;
    while (n != (Node *)base) {
        fn_80231D94(buf, (u8 *)strs + 0x268, fn_800A8A00(*(void **)((u8 *)n->unk8 + 0x188)));
        fn_80231D94(fmt259, (u8 *)strs + 0x273, *(s8 *)((u8 *)self + 0x54));
        fn_80108FA8(buf);
        fn_80108FA8(fmt259);
        n = n->unk4;
    }
    memset((u8 *)self + 0x58, 0, 0x10);
    {
        f32 lim = lbl_8036BA00;
        f32 f = lbl_8036BA04 + *(f32 *)((u8 *)self + 0x3C);
        s32 count = ((s32 *)self)[0xC];
        *(f32 *)((u8 *)self + 0x40) = f + (f32)(u32)((count - 5) * 0x50);
        *(s32 *)((u8 *)self + 0x48) = (s32)((*(f32 *)((u8 *)self + 0x40) / lim) * (f32)*(s32 *)((u8 *)self + 0x48));
        *(f32 *)((u8 *)self + 0x44) = *(f32 *)((u8 *)self + 0x40) / (f32)*(s32 *)((u8 *)self + 0x48);
        fn_80109180(lbl_80281028 + 0x284, self);
        *(void **)((u8 *)self + 0x4C) = fn_80109180(lbl_80281028 + 0x293, self);
    }
    fn_8006EEFC((u8 *)self + 0x50, lbl_8029B378[1]);
}
#pragma opt_pointer_aliasing reset
#pragma optimization_level reset
#pragma use_lmw_stmw on

u32 fn_801F8D38(void **arg0, void **arg1) {
    u16 temp_r0;
    u16 temp_r0_3;
    u16 temp_r3;
    u8 temp_r4_2;
    u8 temp_r0_2;
    u8 temp_r3_2;
    u16 temp_r3_3;
    void *temp_r5;
    void *temp_r4;
    void *temp_r6;
    void *p;
    u16 a;
    u16 b;

    temp_r5 = *arg0;
    temp_r6 = *arg1;
    temp_r4 = M2C_FIELD(temp_r5, void **, 0x190);
    if ((u8)M2C_FIELD((s32)temp_r4, u8 *, 8) == 6) {
        if ((u8)M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x190), u8 *, 8) != 6) {
            return 1U;
        }
    }
    temp_r4_2 = M2C_FIELD(temp_r4, u8 *, 8);
    if (temp_r4_2 != 6) {
        if ((u8)M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x190), u8 *, 8) == 6) {
            return 0U;
        }
    }
    if (temp_r4_2 == 6) {
        if ((u8)M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x190), u8 *, 8) == 6) {
            temp_r3_2 = M2C_FIELD(temp_r5, u8 *, 0x234);
            temp_r0_2 = M2C_FIELD(temp_r6, u8 *, 0x234);
            if (temp_r3_2 == temp_r0_2) {
                temp_r3_3 = M2C_FIELD(temp_r5, u16 *, 0x22A);
                temp_r0_3 = M2C_FIELD(temp_r6, u16 *, 0x22A);
                if (temp_r3_3 == temp_r0_3) {
                    p = M2C_FIELD(temp_r5, void **, 0x188);
                    a = M2C_FIELD(p, u16 *, 0x5A);
                    p = M2C_FIELD(temp_r6, void **, 0x188);
                    b = M2C_FIELD(p, u16 *, 0x5A);
                    return (u32)(a - b) >> 0x1FU;
                }
                return (u32)(temp_r3_3 - temp_r0_3) >> 0x1FU;
            }
            return (u32)(temp_r3_2 - temp_r0_2) >> 0x1FU;
        }
    }
    temp_r3 = M2C_FIELD(temp_r5, u16 *, 0x22A);
    temp_r0 = M2C_FIELD(temp_r6, u16 *, 0x22A);
    if (temp_r3 == temp_r0) {
        p = M2C_FIELD(temp_r5, void **, 0x188);
        a = M2C_FIELD(p, u16 *, 0x5A);
        p = M2C_FIELD(temp_r6, void **, 0x188);
        b = M2C_FIELD(p, u16 *, 0x5A);
        return (u32)(a - b) >> 0x1FU;
    }
    return (u32)(temp_r3 - temp_r0) >> 0x1FU;
}

#pragma global_optimizer off
void fn_801F8E30(void *arg0) {
    void fn_80007340(void *, void *);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B80(s32);
    void fn_80009B8C(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8000C070(void *, s32);
    void *fn_8000E0E4(void *);
    void fn_8001019C(s32, s32, s32, void *, ...);
    s32 fn_800102BC(s32, f32);
    void fn_8004BD1C(void *, f32 *, f32);
    void fn_8004DDB8(s32);
    void fn_8005F780(void *, s32);
    void fn_8005F7B0(void *, s32);
    void fn_8005F7E0(void *, s32, s32, s32);
    void fn_80060060(void *);
    void fn_800609DC(void *);
    void fn_8006ECCC(void *, void *, s32);
    void *fn_800A8978(void *);
    void *fn_800A8A88(void *);
    void fn_80109020(void *);
    void fn_80202024(void *, void *, void *);
    void fn_80202300(void *, s32, f32);
    void fn_80202574(void *, void *, f32, f32, f32);
    void fn_802025E8(void *, void *, f32, f32, f32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_80231D94(void *, void *, ...);
    f64 fn_802387C8(f64, f64);
    void fn_80069F04(void);
    void fn_801F9464(void);
    extern s32 lbl_80367110;
    extern u8 lbl_80281028[];
    extern f32 lbl_8036BA00, lbl_8036BA04, lbl_8036BA18, lbl_8036BA1C, lbl_8036BA20;
    extern f32 lbl_8036BA38, lbl_8036BA3C, lbl_8036BA40, lbl_8036BA44, lbl_8036BA48;
    extern f32 lbl_8036BA4C, lbl_8036BA50, lbl_8036BA54, lbl_8036BA58, lbl_8036BA5C;
    extern f32 lbl_8036BA60, lbl_8036BA64, lbl_8036BA68, lbl_8036BA6C, lbl_8036BA70;
    extern f64 lbl_8036BA28, lbl_8036BA30;

    f32 sp8[2];
    u8 sp14[0x30];
    u8 sp44[0x30];
    u8 sp74[0x20];
    u16 sp94, sp96;
    f32 f26, f27, f28, f29, f30, f31;
    f32 scroll, period, y, limit, step, y2;
    void *obj, *node, *end, *unit, *draw;
    void **p;
    u8 flag;
    char buf[0x20];

    if (lbl_80367110 & 1) {
        fn_8000C070(arg0, 3);
        return;
    }
    fn_8000A258();
    fn_80009D74(lbl_8036BA18, lbl_8036BA18, lbl_8036BA1C, lbl_8036BA20);
    fn_80009B8C(0xFF);
    fn_80009B80(0x80);
    fn_8000A248();
    f29 = *(f32 *)((u8 *)arg0 + 0x3C);
    period = (f32)fn_802387C8(lbl_8036BA28, lbl_8036BA30);
    f27 = (f32)(s32)(period * (f29 + lbl_8036BA38 / period)) / period;
    obj = *(void **)((u8 *)arg0 + 0x4C);
    if (obj != NULL) {
        flag = 0;
        if (f27 <= lbl_8036BA00) {
            if (lbl_8036BA18 < f27 + lbl_8036BA04) {
                flag = 1;
            }
        }
        if (flag) {
            *(f32 *)((u8 *)obj + 0x40) = lbl_8036BA3C;
            *(f32 *)((u8 *)obj + 0x44) = f27;
        } else {
            goto clear;
        }
    } else {
clear:
        fn_80109020(lbl_80281028 + 0x293);
        *(void **)((u8 *)arg0 + 0x4C) = NULL;
    }
    f30 = f27 + lbl_8036BA04;
    f30 = f30 + lbl_8036BA38 * (f32)(0x50 - fn_800102BC(-1, lbl_8036BA20));
    p = *(void ***)((u8 *)arg0 + 0x34);
    p = (void **)*p;
    p = (void **)*p;
    p = (void **)*p;
    end = *p;
    node = *(void **)((u8 *)arg0 + 0x38);
    f31 = lbl_8036BA00;
    f29 = lbl_8036BA40;
    for (; node != end; node = *(void **)((u8 *)node + 4), f30 += f29) {
        flag = 0;
        if (f30 <= f31) {
            if (lbl_8036BA18 < f30 + lbl_8036BA40) {
                flag = 1;
            }
        }
        if (flag) {
            unit = *(void **)((u8 *)node + 8);
            fn_8000A258();
            fn_8000A174(NULL, 0x13);
            fn_8000A248();
            fn_8001019C((s32)lbl_8036BA44, (s32)f30, 2, fn_800A8A88(*(void **)((u8 *)unit + 0x188)));
            fn_8001019C((s32)lbl_8036BA48, (s32)f30, 2, fn_800A8978(*(void **)((u8 *)unit + 0x18C)));
            if (*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8) != 6) {
                fn_8001019C((s32)lbl_8036BA4C, (s32)f30, 2, lbl_80281028 + 0x29F,
                    fn_8000E0E4(lbl_80281028 + 0x2A6), (s8)*(u8 *)((u8 *)unit + 0x19A));
                fn_8001019C((s32)lbl_8036BA50, (s32)f30, 2, lbl_80281028 + 0x2B1,
                    *(u16 *)((u8 *)unit + 0x22A), fn_8000E0E4(lbl_80281028 + 0x2B8));
            } else {
                fn_80231D94(buf, lbl_80281028 + 0x2D4, *(u8 *)((u8 *)unit + 0x234));
                fn_8001019C((s32)lbl_8036BA4C, (s32)f30, 2, fn_8000E0E4(buf));
            }
            f28 = f30 + (f32)fn_800102BC(-1, lbl_8036BA20);
            fn_8006ECCC(*(void **)((u8 *)arg0 + 0x50), sp74, 2);
            sp94 = fn_80222A80(sp74);
            sp96 = fn_80222A90(sp74);
            fn_8000A258();
            fn_8000A174(sp74, 0x10);
            fn_8000A248();
            fn_80007898(1);
            fn_800077D8(lbl_8036BA54, f28, (f32)sp94, (f32)sp96);
            fn_80007884();
        }
    }
    f26 = lbl_8036BA04 + *(f32 *)((u8 *)arg0 + 0x3C);
    fn_8000A258();
    fn_8000A174(NULL, 0x410);
    fn_80009B8C(0xFF);
    fn_8000A248();
    fn_80007898(0xB);
    fn_80007340(fn_801F9464, NULL);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036BA58);
    fn_8000A248();
    p = *(void ***)((u8 *)arg0 + 0x34);
    p = (void **)*p;
    p = (void **)*p;
    p = (void **)*p;
    end = *p;
    node = *(void **)((u8 *)arg0 + 0x38);
    f29 = lbl_8036BA5C;
    f31 = lbl_8036BA00;
    f30 = lbl_8036BA40;
    for (; node != end; node = *(void **)((u8 *)node + 4), f26 += f30) {
        y2 = f26 - f29;
        flag = 0;
        if (y2 <= f31) {
            if (lbl_8036BA18 < y2 + lbl_8036BA60) {
                flag = 1;
            }
        }
        if (flag) {
            fn_80202300(sp44, 0x79, lbl_8036BA64);
            fn_80202300(sp14, 0x78, lbl_8036BA68);
            fn_80202024(sp14, sp44, sp14);
            fn_802025E8(sp14, sp14, lbl_8036BA6C, lbl_8036BA6C, lbl_8036BA6C);
            draw = *(void **)((u8 *)node + 0xC);
            f28 = lbl_8036BA40 + f26;
            f27 = lbl_8036BA70;
            fn_8004BD1C(*(void **)((u8 *)node + 8), sp8, lbl_8036BA6C);
            fn_80202574(sp14, (u8 *)draw + 0x10, f27 + sp8[0], f28 + sp8[1], lbl_8036BA1C);
            fn_8005F7E0(draw, 0x80, 0x80, 0x80);
            fn_8005F7B0(draw, 0xFF);
            fn_8005F780(draw, 0xFF);
            fn_80060060(draw);
            fn_800609DC(draw);
            fn_80007898(0xB);
            fn_80007340(fn_80069F04, draw);
            fn_80007884();
        }
    }
    fn_8004DDB8(0x63);
}
#pragma global_optimizer on

void fn_801F9464(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void fn_801F9498(void *arg0) {
    M2C_UNK fn_8000C188();
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x44));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48) - 1;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r0;
    if (temp_r0 < 0) {
        fn_8000C188();
    }
}

#pragma use_lmw_stmw on
void fn_801F94D8(void *arg0) {
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009B8C(s32);
    void fn_80009B80(s32);
    void fn_8000A248(void);
    void fn_8000C070(void *, s32);
    void fn_8000A174(s32, s32);
    void fn_80009C0C(f32);
    void *fn_8000E0E4(void *);
    s16 fn_80010B78(void *, s32, f32);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, f32, f32, ...);
    void *fn_800A8978(void *);
    f32 fn_801099A0(void *, s32);
    void fn_80231D94(void *, void *, ...);
    extern s32 lbl_80367110;
    extern u8 lbl_80281028[];
    extern f32 lbl_8036BA18;
    extern f32 lbl_8036BA20;
    extern f32 lbl_8036BA74;
    extern f64 lbl_8036BA10;
    extern f32 lbl_8036BA78;
    extern f32 lbl_8036BA7C;
    extern f32 lbl_8036BA80;
    extern f32 lbl_8036BA84;

    char sp8[0x80];
    void *temp_r29;
    void **var_r31;
    u8 sel_byte;
    s32 sel;
    s32 n;
    void *nameStr;
    void *other;
    void *entry;
    void *str;
    void *fmtStr;
    void *obj;
    f32 f31;
    f32 f30;
    s16 w;
    u16 val22a;
    s8 val19a;

    temp_r29 = arg0;
    if (lbl_80367110 & 1) {
        fn_8000C070(temp_r29, 3);
        return;
    }
    fn_8000A258();
    fn_80009D74(lbl_8036BA18, lbl_8036BA18, lbl_8036BA74, lbl_8036BA20);
    fn_80009B8C(0xFF);
    fn_80009B80(0x80);
    fn_8000A248();
    sel_byte = ((u8 *)temp_r29)[0x54];
    fn_8000A258();
    fn_8000A174(0, 0x13);
    sel = (s8)sel_byte;
    fn_80009C0C((f32)(sel * 2));
    fn_8000A248();
    n = -sel;
    var_r31 = (void **)((u8 *)temp_r29 + 0x34);
    if (n >= 0) {
        for (; n > 0; n--) {
            var_r31 = (void **)var_r31[1];
        }
    } else {
        for (n = sel; n > 0; n--) {
            var_r31 = (void **)*var_r31;
        }
    }
    if ((s8)sel_byte > 0) {
        entry = *(void **)((u8 *)temp_r29 + ((sel & 1) << 3) + 0x58);
        if (entry != 0) {
            fn_8000A258();
            fn_80009B8C((s32)fn_801099A0(entry, 9));
            fn_8000A248();
            f31 = fn_801099A0(entry, 1);
            f30 = lbl_8036BA78;
            str = fn_800A8978(*(void **)((u8 *)var_r31[2] + 0x18C));
            w = fn_80010B78(str, -1, lbl_8036BA20);
            f30 = f30 - (f32)(w >> 1);
            fn_8001003C((s32)f30, (s32)(lbl_8036BA7C + f31), 1, 1, 0, str, lbl_8036BA20, lbl_8036BA18);
            obj = var_r31[2];
            val22a = *(u16 *)((u8 *)obj + 0x22A);
            val19a = *(s8 *)((u8 *)obj + 0x19A);
            nameStr = fn_8000E0E4(lbl_80281028 + 0x2B8);
            fmtStr = fn_8000E0E4(lbl_80281028 + 0x2A6);
            fn_80231D94(sp8, lbl_80281028 + 0x2E6, fmtStr, val19a, val22a, nameStr);
            f30 = lbl_8036BA78;
            w = fn_80010B78(sp8, -1, lbl_8036BA20);
            f30 = f30 - (f32)(w >> 1);
            fn_8001003C((s32)f30, (s32)(lbl_8036BA80 + f31), 1, 1, 0, sp8, lbl_8036BA20, lbl_8036BA18);
        }
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036BA84);
    fn_8000A248();
    other = *var_r31;
    if ((s8)(sel + 1) < 5) {
        entry = *(void **)((u8 *)temp_r29 + (((sel + 1) & 1) << 3) + 0x58);
        if (entry != 0) {
            fn_8000A258();
            fn_80009B8C((s32)fn_801099A0(entry, 9));
            fn_8000A248();
            f31 = fn_801099A0(entry, 1);
            f30 = lbl_8036BA78;
            str = fn_800A8978(*(void **)((u8 *)((void **)other)[2] + 0x18C));
            w = fn_80010B78(str, -1, lbl_8036BA20);
            f30 = f30 - (f32)(w >> 1);
            fn_8001003C((s32)f30, (s32)(lbl_8036BA7C + f31), 1, 1, 0, str, lbl_8036BA20, lbl_8036BA18);
            obj = ((void **)other)[2];
            val22a = *(u16 *)((u8 *)obj + 0x22A);
            val19a = *(s8 *)((u8 *)obj + 0x19A);
            nameStr = fn_8000E0E4(lbl_80281028 + 0x2B8);
            fmtStr = fn_8000E0E4(lbl_80281028 + 0x2A6);
            fn_80231D94(sp8, lbl_80281028 + 0x2E6, fmtStr, val19a, val22a, nameStr);
            f30 = lbl_8036BA78;
            w = fn_80010B78(sp8, -1, lbl_8036BA20);
            f30 = f30 - (f32)(w >> 1);
            fn_8001003C((s32)f30, (s32)(lbl_8036BA80 + f31), 1, 1, 0, sp8, lbl_8036BA20, lbl_8036BA18);
        }
    }
}
void fn_801F99C4(void *arg0) {
    s32 fn_800A8A00(void *);
    void *fn_80109180(void *, void *);
    void fn_80109448(void *, s32, s32, f32, f32, f32);
    void fn_80109C80(void *, s32);
    void fn_80231D94(void *, void *, ...);
    extern u8 lbl_80281028[];
    extern f32 lbl_8036BA18;
    extern f32 lbl_8036BA88;
    extern f32 lbl_8036BA8C;

    char sp8[0x20];
    void **var_r4;
    void *temp_r28;
    void *temp_r31;
    s8 var_r30;
    void *temp_r29;
    s32 var_r3;
    void *temp_r3;
    void *temp_r3_2;
    s32 temp_r4;
    f32 f2;

    temp_r29 = arg0;
    var_r4 = (void **)((u8 *)temp_r29 + 0x34);
    var_r30 = *(s8 *)((u8 *)arg0 + 0x54);
    var_r3 = -var_r30;
    temp_r31 = (u8 *)temp_r29 + ((var_r30 & 1) << 3);
    if (var_r3 >= 0) {
        if (var_r3) {
            for (; var_r3 != 0; var_r3--) {
                var_r4 = (void **)var_r4[1];
            }
        }
    } else {
        var_r3 = -var_r3;
        for (; var_r3 != 0; var_r3--) {
            var_r4 = (void **)*var_r4;
        }
    }
    temp_r28 = lbl_80281028 + 0x259;
    fn_80231D94(sp8, lbl_80281028 + 0x268, fn_800A8A00(*(void **)((u8 *)*(void **)((u8 *)var_r4 + 8) + 0x188)));
    fn_80231D94(temp_r28, lbl_80281028 + 0x273, (s8)*(u8 *)((u8 *)temp_r29 + 0x54));
    *(void **)((u8 *)temp_r31 + 0x58) = fn_80109180(sp8, temp_r29);
    *(void **)((u8 *)temp_r31 + 0x5C) = fn_80109180(temp_r28, *(void **)((u8 *)temp_r31 + 0x58));
    temp_r4 = var_r30 * 2;
    f2 = lbl_8036BA18;
    temp_r3 = *(void **)((u8 *)temp_r31 + 0x58);
    *(f32 *)((u8 *)temp_r3 + 0x40) = f2;
    *(f32 *)((u8 *)temp_r3 + 0x44) = f2;
    *(f32 *)((u8 *)temp_r3 + 0x48) = (f32)temp_r4;
    temp_r3_2 = *(void **)((u8 *)temp_r31 + 0x5C);
    *(f32 *)((u8 *)temp_r3_2 + 0x40) = f2;
    *(f32 *)((u8 *)temp_r3_2 + 0x44) = f2;
    *(f32 *)((u8 *)temp_r3_2 + 0x48) = (f32)temp_r4;
    fn_80109C80(*(void **)((u8 *)temp_r31 + 0x58), 0x18);
    fn_80109448(*(void **)((u8 *)temp_r31 + 0x58), 1, 5, lbl_8036BA88, lbl_8036BA18, lbl_8036BA8C);
    fn_80109C80(*(void **)((u8 *)temp_r31 + 0x5C), 0x18);
    fn_80109448(*(void **)((u8 *)temp_r31 + 0x5C), 1, 5, lbl_8036BA88, lbl_8036BA18, lbl_8036BA8C);
    *(u16 *)((u8 *)temp_r29 + 0x28) = 0xF0;
}

void fn_801F9C8C(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C60C(void *);
    s32 v;

    v = *(u8 *)((u8 *)arg0 + 0x54) - 1;
    *(u8 *)((u8 *)arg0 + 0x54) = v;
    if ((s8)v == 0) {
        fn_8000C070(arg0, 2);
    } else {
        arg0 = (u8 *)arg0 + ((v & 1) << 3);
        arg0 = *(void **)((u8 *)arg0 + 0x58);
        if (arg0 != NULL) {
            fn_8000C60C(arg0);
        }
    }
}

void fn_801F9CE0(s32 arg0) {
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) {
        fn_8000C188(arg0);
    }
}

void fn_801F9D1C(s32 arg0, s32 arg1) {
    void *fn_801F9D50(s32);
    M2C_FIELD(fn_801F9D50(arg1), s32 *, 0x48) = arg0;
}

void *fn_801F9D50(void *arg0)
{
    extern u8 lbl_8029B32C[];
    extern f32 lbl_8036BA00;
    void *fn_8000CAA0(void *, void *);
    void fn_801FB048(void *, u32);
    struct Entry {
        u8 pad[0x30];
        u32 unk30;
        u32 unk34;
        u32 unk38;
        f32 unk3c;
        u8 pad40[0xc];
        u32 unk4c;
    } *entry;
    struct Entry *tmp;
    u32 *p;

    entry = (struct Entry *)fn_8000CAA0(lbl_8029B32C, arg0);
    tmp = entry;
    if (tmp != NULL) {
        p = &tmp->unk30;
        tmp->unk30 = 0;
        tmp->unk34 = 0;
        p[2] = 0;
        tmp->unk3c = lbl_8036BA00;
        tmp->unk4c = 0;
        fn_801FB048(p, 0x28);
    }
    return entry;
}

void fn_801F9DC0(u32 arg0) {
    M2C_UNK fn_801FB1C0(s32, M2C_UNK);
    if ((arg0 != 0U) && ((arg0 + 0x30) != 0) && ((arg0 + 0x30) != 0)) {
        fn_801FB1C0(arg0 + 0x30, 0);
    }
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_801F9E00(void *arg0) {
    s32 fn_80109180(void *, void *);
    void fn_8014DBE0(void *, s32, u8 *, u16 *, s32 *);
    s32 fn_8014DC04(void *);
    void fn_801FAA9C(void *, void *, s32, void *);
    extern u8 lbl_80330708[];
    extern u8 lbl_80281028[];
    extern f32 lbl_8036BA00;
    extern f32 lbl_8036BA04;
    extern f64 lbl_8036BA08;
    extern f64 lbl_8036BA10;

    typedef struct {
        u8 pad[0x30];
        u32 unk30;
        s32 unk34;
        u8 *unk38;
        f32 unk3C;
        f32 unk40;
        f32 unk44;
        s32 unk48;
        s32 unk4C;
    } Obj;

    struct {
        u8 kind;
        u8 pad;
        u16 field;
        s32 val;
    } packet;
    s32 spC;
    u16 spA;
    u8 sp8;
    s32 temp_r31;
    s32 *p_spC;
    u16 *p_spA;
    void *temp_r28;
    s32 var_r27;
    s32 var_r26;
    Obj *obj;
    s32 temp_r0;
    u8 pk;
    f32 lim;
    f32 f;
    s32 count;

    temp_r28 = lbl_80330708 + 0x3C4;
    obj = (Obj *)arg0;
    var_r27 = 0;
    packet.kind = 0xFF;
    packet.val = 0;
    packet.field = 0;
    temp_r31 = fn_8014DC04(temp_r28);
    p_spC = &spC;
    p_spA = &spA;
    var_r26 = 0;
    goto loop_check;
loop_body:
    fn_8014DBE0(temp_r28, var_r26, &sp8, p_spA, p_spC);
    pk = packet.kind;
    if (pk == sp8) {
        goto accumulate;
    }
    if (pk != 0x1C) {
        goto else_path;
    }
    if (sp8 != 0x1D) {
        goto else_path;
    }
accumulate:
    temp_r0 = spC - var_r27;
    var_r27 = spC;
    packet.field += spA;
    packet.val += temp_r0;
    goto loop_next;
else_path:
    if (pk != 0xFF) {
        fn_801FAA9C(&obj->unk30, obj->unk38 + (obj->unk34 << 3), 1, &packet);
    }
    packet.kind = sp8;
    temp_r0 = spC - var_r27;
    packet.field = spA;
    var_r27 = spC;
    packet.val = temp_r0;
loop_next:
    var_r26 += 1;
loop_check:
    if (var_r26 < temp_r31) {
        goto loop_body;
    }
    if (packet.kind != 0xFF) {
        fn_801FAA9C(&obj->unk30, obj->unk38 + (obj->unk34 << 3), 1, &packet);
    }
    lim = lbl_8036BA00;
    f = lbl_8036BA04 + obj->unk3C;
    count = obj->unk34;
    obj->unk40 = f + (f32)(u32)(count << 6);
    obj->unk48 = (s32)((obj->unk40 / lim) * (f32)obj->unk48);
    obj->unk44 = obj->unk40 / (f32)obj->unk48;
    fn_80109180(lbl_80281028 + 0x2F3, obj);
    obj->unk4C = fn_80109180(lbl_80281028 + 0x301, obj);
}

#pragma global_optimizer off
void fn_801FA00C(void *arg0) {
void fn_8000A258(void); void fn_80009D74(f32,f32,f32,f32);
void fn_80009B8C(s32); void fn_80009B80(s32); void fn_8000A248(void);
void fn_8000C070(void*,s32); void fn_80109020(void*);
void fn_8000A174(s32,s32); void *fn_8000E0E4(void*);
s32 fn_800102BC(s32,f32); s16 fn_80010B78(void*,s32,f32);
void fn_8001003C(s32,s32,s32,s32,s32,void*,f32,f32,...);
void fn_80231D94(void*,void*,...); f64 fn_802387C8(f64,f64);
extern s32 lbl_80367110;
extern u8 lbl_80281028[];
extern f32 lbl_8036BA18,lbl_8036BA1C,lbl_8036BA20,lbl_8036BA38,lbl_8036BA00,lbl_8036BA04,lbl_8036BA88,lbl_8036BA94,lbl_8036BA98,lbl_8036BA9C,lbl_8036BAA0,lbl_8036BAA4,lbl_8036BAA8;
extern f64 lbl_8036BA28,lbl_8036BA30;
f32 limit, y, scroll, step, x, period, offset;
u8 *end, *ent, *base;
void *str, *a, *b, *obj;
u8 flag;
u32 minutes, seconds, hours, time;
f32 tx, scale, zero;
if(lbl_80367110 & 1) {fn_8000C070(arg0,1);return;}
fn_8000A258();
fn_80009D74(lbl_8036BA18,lbl_8036BA18,lbl_8036BA1C,lbl_8036BA20);
fn_80009B8C(255); fn_80009B80(128); fn_8000A248();
scroll=*(f32*)((u8*)arg0+0x3c);
period=(f32)fn_802387C8(lbl_8036BA28,lbl_8036BA30);
scroll=(f32)(s32)(period*(scroll+lbl_8036BA38/period))/period;
obj=*(void**)((u8*)arg0+0x4c);
if(obj) {
flag=0;
if(scroll<=lbl_8036BA00) { if(lbl_8036BA18<scroll+lbl_8036BA04) flag=1;}
if(flag) {*(f32*)((u8*)obj+0x40)=lbl_8036BA94;*(f32*)((u8*)obj+0x44)=scroll;}
else goto clear;
} else {
clear:
fn_80109020(lbl_80281028+0x301);*(void**)((u8*)arg0+0x4c)=0;
}
y=scroll+lbl_8036BA04;
offset=lbl_8036BA38*(f32)(64-fn_800102BC(-1,lbl_8036BA20));
y=y+offset;
base=*(u8**)((u8*)arg0+0x38);
ent=base;
end=base+*(u32*)((u8*)arg0+0x34)*8;
limit=lbl_8036BA00;step=lbl_8036BA88;
for(;ent!=end;ent+=8,y+=step){
flag=0;
if(y<=limit) {if(lbl_8036BA18<y+lbl_8036BA88)flag=1;}
if(flag){
a=lbl_80281028+0x30c;b=lbl_80281028+0x31b;
fn_80231D94(a,lbl_80281028+0x32c,*ent);
fn_80231D94(b,lbl_80281028+0x33d,*ent);
fn_8000A258();fn_8000A174(0,19);fn_8000A248();
str=fn_8000E0E4(a);
fn_8001003C((s32)((f32)(128-(fn_80010B78(str,-1,lbl_8036BA20)>>1))-lbl_8036BA98),(s32)y,1,1,0,str,lbl_8036BA20,lbl_8036BA18);
fn_8001003C((s32)(lbl_8036BA9C+lbl_8036BA98),(s32)y,1,1,0,fn_8000E0E4(b),lbl_8036BA20,lbl_8036BA18);
x=lbl_8036BAA0;
x=x+lbl_8036BA98;
fn_8001003C((s32)x,(s32)y,1,1,0,lbl_80281028+0x350,lbl_8036BA20,lbl_8036BA18,*(u16*)(ent+2));
fn_8001003C((s32)(lbl_8036BAA4+x),(s32)y,32,1,0,lbl_80281028+0x354,lbl_8036BA20,lbl_8036BA18,fn_8000E0E4(lbl_80281028+0x357));
tx=lbl_8036BAA8+lbl_8036BA98;scale=lbl_8036BA20;zero=lbl_8036BA18;
time=*(u32*)(ent+4);
hours=time/3600;time%=3600;seconds=time%60;minutes=time/60;
fn_8001003C((s32)tx,(s32)y,33,1,0,lbl_80281028+0x364,scale,zero,hours,minutes,seconds);
}
}
}
#pragma global_optimizer on

void fn_801FA478(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x44));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48) - 1;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r0;
    if (temp_r0 < 0) {
        fn_8000C188();
    }
}

void fn_801FA4B8(s32 arg0, s32 arg1) {
    extern u8 lbl_8029B2F4[];
    extern f32 lbl_8036BA00;
    void *fn_8000CAF0(void *, s32);
    void *temp;
    f32 f;
    s32 zero;

    temp = fn_8000CAF0(lbl_8029B2F4, arg1);
    if (temp != NULL) {
        zero = 0;
        f = lbl_8036BA00;
        *(s32 *)((u8 *)temp + 0x30) = zero;
        *(f32 *)((u8 *)temp + 0x38) = f;
        *(s32 *)((u8 *)temp + 0x44) = arg0;
    }
}

void fn_801FA508(void *arg0) {
    void *x = *(void **)((u8 *)arg0 + 0x30);
    if (x != NULL) {
        fn_8003F670(x);
    }
}

void fn_801FA534(void *arg0)
{
    void *fn_8003FCCC(void *);
    s32 *fn_8000D2BC(void *);
    extern u8 lbl_8029B2D8[];
    extern u8 lbl_80281028[];
    s32 *tmp;

    *(void **)((u8 *)arg0 + 0x30) = fn_8003FCCC(*(void **)(lbl_8029B2D8 + 4));
    tmp = fn_8000D2BC(lbl_80281028 + 0x373);
    *(s32 *)((u8 *)arg0 + 0x34) = *tmp;
    *(f32 *)((u8 *)arg0 + 0x3C) =
        *(f32 *)((u8 *)arg0 + 0x38) + (f32)(u32)(*(s32 *)((u8 *)arg0 + 0x34) * 0x30);
    *(f32 *)((u8 *)arg0 + 0x40) =
        *(f32 *)((u8 *)arg0 + 0x3C) / (f32)*(s32 *)((u8 *)arg0 + 0x44);
}

__declspec(section ".rodata") static const char staff_fmt[] = "#F04%s";

#pragma global_optimizer off
void fn_801FA5DC(void *arg0) {
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009B8C(s32);
    void fn_80009B80(s32);
    void fn_8000A248(void);
    void fn_8000C070(void *, s32);
    void *fn_8000D2BC(void *);
    void fn_8000A174(s32, s32);
    s16 fn_80010B78(void *, s32, f32);
    void fn_8001019C(s32, s32, s32, void *, ...);
    f64 fn_802387C8(f64, f64);
    extern s32 lbl_80367110;
    extern f32 lbl_8036BA18;
    extern f32 lbl_8036BA1C;
    extern f32 lbl_8036BA20;
    extern f64 lbl_8036BA28;
    extern f64 lbl_8036BA30;
    extern f32 lbl_8036BA38;
    extern f64 lbl_8036BA10;
    extern f32 lbl_8036BA00;
    extern f32 lbl_8036BAAC;
    extern f32 lbl_8036BAB0;
    extern u8 lbl_80281028[];

    typedef struct {
        void *str0;
        void *str4;
        void *str8;
    } Entry;

    f32 limit;
    f32 scroll;
    f32 step;
    f32 period;
    s16 w;
    u8 flag;
    Entry *ent;
    u32 i;

    if (lbl_80367110 & 1) {
        fn_8000C070(arg0, 1);
        return;
    }
    fn_8000A258();
    fn_80009D74(lbl_8036BA18, lbl_8036BA18, lbl_8036BA1C, lbl_8036BA20);
    fn_80009B8C(0xFF);
    fn_80009B80(0x80);
    fn_8000A248();
    step = *(f32 *)((u8 *)arg0 + 0x38);
    period = (f32)fn_802387C8(lbl_8036BA28, lbl_8036BA30);
    scroll = (f32)(s32)(period * (step + lbl_8036BA38 / period)) / period;
    ent = (Entry *)fn_8000D2BC(lbl_80281028 + 0x387);
    limit = lbl_8036BA00;
    step = lbl_8036BAAC;
    for (i = 0; i < *(u32 *)((u8 *)arg0 + 0x34); i++) {
        flag = 0;
        if (scroll <= limit) {
            if (lbl_8036BA18 < scroll + lbl_8036BAAC) {
                flag = 1;
            }
        }
        if (flag != 0) {
            fn_8000A258();
            fn_8000A174(0, 0x13);
            fn_8000A248();
            if ((u32)ent->str0 != 0U) {
                w = fn_80010B78(ent->str0, -1, lbl_8036BA20);
                fn_8001019C((s32)(f32)(0x120 - w), (s32)scroll, 1, ent->str0);
            }
            if ((u32)ent->str4 != 0U) {
                w = fn_80010B78(ent->str4, -1, lbl_8036BA20);
                fn_8001019C((s32)(f32)(0x130 - (w >> 1)), (s32)scroll, 1, ent->str4);
            }
            if ((u32)ent->str8 != 0U) {
                fn_80010B78(ent->str8, -1, lbl_8036BA20);
                fn_8001019C((s32)lbl_8036BAB0, (s32)scroll, 1, (void *)(lbl_80281028 + 0x39A), ent->str8);
            }
        }
        scroll += step;
        ent++;
    }
}
#pragma global_optimizer reset
void fn_801FA874(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x40));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) - 1;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (temp_r0 < 0) {
        fn_8000C188();
    }
}

#pragma peephole off
void fn_801FAA9C(void *arg0, void *arg1, u32 arg2, void *arg3) {
    typedef struct {
        s32 a;
        s32 b;
    } Elem;
    typedef struct {
        u32 cap;
        u32 size;
        Elem *data;
    } Vec;
    void fn_800C428C(void *);
    void *fn_800C42D8(u32);
    void fn_801FB548(Vec *);
    void fn_8022CF78(void);
    void fn_80232058(void *, const char *, ...);
    extern char __files[];
    extern char lbl_80281028[];

    Vec *vec;
    Elem *fill;
    u32 count;
    Elem *pos;
    Vec tmp;

    count = arg2;
    vec = (Vec *)arg0;
    pos = (Elem *)arg1;
    fill = (Elem *)arg3;
    if (count == 0) {
        return;
    }
    if (count > 0x1FFFFFFFU || vec->size > 0x1FFFFFFFU - count) {
        char *files = __files;
        char *msg = lbl_80281028;
        fn_80232058(files + 0xA0, msg + 0x3A1);
        fn_8022CF78();
    }
    if (vec->size + count <= vec->cap) {
        Elem *dst = vec->data + vec->size;
        Elem *fill_out = fill;
        s32 n = dst - pos;
        if (count > (u32)n) {
            Elem *p = dst;
            Elem *src;
            u32 ctr;
            for (ctr = count - (u32)n; ctr != 0; ctr--) {
                if (p != NULL) {
                    *p = *fill;
                }
                p++;
                count--;
                vec->size++;
            }
            for (src = pos; src < dst; src++, p++) {
                if (p != NULL) {
                    *p = *src;
                }
                vec->size++;
            }
        } else {
            Elem *src = dst - count;
            Elem *p = dst;
            u32 words;
            u8 *from_b;
            u8 *to_b;
            s32 off;

            for (; src < dst; src++, p++) {
                if (p != NULL) {
                    *p = *src;
                }
                vec->size++;
            }
            off = (n - (s32)count) * 8;
            if ((u8 *)dst - off <= (u8 *)fill && (u8 *)fill < (u8 *)dst) {
                fill_out = (Elem *)((u8 *)fill + count * 8);
            }
            from_b = (u8 *)pos + off;
            to_b = (u8 *)dst;
            if (from_b > (u8 *)pos) {
                words = (u32)(from_b + 7 - (u8 *)pos) >> 3;
                for (; (words >> 3) != 0;) {
                    u32 ctr = words >> 3;
                    do {
                        to_b[-8] = from_b[-8];
                        *(u16 *)(to_b - 6) = *(u16 *)(from_b - 6);
                        *(s32 *)(to_b - 4) = *(s32 *)(from_b - 4);
                        to_b[-0x10] = from_b[-0x10];
                        *(u16 *)(to_b - 0xe) = *(u16 *)(from_b - 0xe);
                        *(s32 *)(to_b - 0xc) = *(s32 *)(from_b - 0xc);
                        to_b[-0x18] = from_b[-0x18];
                        *(u16 *)(to_b - 0x16) = *(u16 *)(from_b - 0x16);
                        *(s32 *)(to_b - 0x14) = *(s32 *)(from_b - 0x14);
                        to_b[-0x20] = from_b[-0x20];
                        *(u16 *)(to_b - 0x1e) = *(u16 *)(from_b - 0x1e);
                        *(s32 *)(to_b - 0x1c) = *(s32 *)(from_b - 0x1c);
                        to_b[-0x28] = from_b[-0x28];
                        *(u16 *)(to_b - 0x26) = *(u16 *)(from_b - 0x26);
                        *(s32 *)(to_b - 0x24) = *(s32 *)(from_b - 0x24);
                        to_b[-0x30] = from_b[-0x30];
                        *(u16 *)(to_b - 0x2e) = *(u16 *)(from_b - 0x2e);
                        *(s32 *)(to_b - 0x2c) = *(s32 *)(from_b - 0x2c);
                        to_b[-0x38] = from_b[-0x38];
                        *(u16 *)(to_b - 0x36) = *(u16 *)(from_b - 0x36);
                        *(s32 *)(to_b - 0x34) = *(s32 *)(from_b - 0x34);
                        to_b[-0x40] = from_b[-0x40];
                        *(u16 *)(to_b - 0x3e) = *(u16 *)(from_b - 0x3e);
                        *(s32 *)(to_b - 0x3c) = *(s32 *)(from_b - 0x3c);
                        from_b -= 0x40;
                        to_b -= 0x40;
                    } while (--ctr != 0);
                    break;
                }
                words &= 7;
                if (words != 0) {
                    do {
                        to_b[-8] = from_b[-8];
                        *(u16 *)(to_b - 6) = *(u16 *)(from_b - 6);
                        *(s32 *)(to_b - 4) = *(s32 *)(from_b - 4);
                        from_b -= 8;
                        to_b -= 8;
                    } while (--words != 0);
                }
            }
        }
        {
            Elem *out = pos;
            u32 left = count;
            if (left != 0) {
                u32 ctr = left >> 3;
                if (ctr != 0) {
                    do {
                        ((u8 *)out)[0] = ((u8 *)fill_out)[0];
                        *(u16 *)((u8 *)out + 2) = *(u16 *)((u8 *)fill_out + 2);
                        *(s32 *)((u8 *)out + 4) = *(s32 *)((u8 *)fill_out + 4);
                        ((u8 *)out)[8] = ((u8 *)fill_out)[0];
                        *(u16 *)((u8 *)out + 0xa) = *(u16 *)((u8 *)fill_out + 2);
                        *(s32 *)((u8 *)out + 0xc) = *(s32 *)((u8 *)fill_out + 4);
                        ((u8 *)out)[0x10] = ((u8 *)fill_out)[0];
                        *(u16 *)((u8 *)out + 0x12) = *(u16 *)((u8 *)fill_out + 2);
                        *(s32 *)((u8 *)out + 0x14) = *(s32 *)((u8 *)fill_out + 4);
                        ((u8 *)out)[0x18] = ((u8 *)fill_out)[0];
                        *(u16 *)((u8 *)out + 0x1a) = *(u16 *)((u8 *)fill_out + 2);
                        *(s32 *)((u8 *)out + 0x1c) = *(s32 *)((u8 *)fill_out + 4);
                        ((u8 *)out)[0x20] = ((u8 *)fill_out)[0];
                        *(u16 *)((u8 *)out + 0x22) = *(u16 *)((u8 *)fill_out + 2);
                        *(s32 *)((u8 *)out + 0x24) = *(s32 *)((u8 *)fill_out + 4);
                        ((u8 *)out)[0x28] = ((u8 *)fill_out)[0];
                        *(u16 *)((u8 *)out + 0x2a) = *(u16 *)((u8 *)fill_out + 2);
                        *(s32 *)((u8 *)out + 0x2c) = *(s32 *)((u8 *)fill_out + 4);
                        ((u8 *)out)[0x30] = ((u8 *)fill_out)[0];
                        *(u16 *)((u8 *)out + 0x32) = *(u16 *)((u8 *)fill_out + 2);
                        *(s32 *)((u8 *)out + 0x34) = *(s32 *)((u8 *)fill_out + 4);
                        ((u8 *)out)[0x38] = ((u8 *)fill_out)[0];
                        *(u16 *)((u8 *)out + 0x3a) = *(u16 *)((u8 *)fill_out + 2);
                        *(s32 *)((u8 *)out + 0x3c) = *(s32 *)((u8 *)fill_out + 4);
                        out = (Elem *)((u8 *)out + 0x40);
                    } while (--ctr != 0);
                }
                left &= 7;
                if (left != 0) {
                    do {
                        ((u8 *)out)[0] = ((u8 *)fill_out)[0];
                        *(u16 *)((u8 *)out + 2) = *(u16 *)((u8 *)fill_out + 2);
                        *(s32 *)((u8 *)out + 4) = *(s32 *)((u8 *)fill_out + 4);
                        out = (Elem *)((u8 *)out + 8);
                    } while (--left != 0);
                }
            }
        }
        return;
    }

    {
        u32 cap;
        Elem *p;
        Elem *dst;
        Elem *src;
        Elem *end;
        u32 t;
        Elem *tp;
        u32 ts;
        u32 z;

        z = 0;
        tmp.cap = z;
        tmp.size = z;
        tmp.data = (Elem *)z;
        cap = 1;
        z = vec->cap;
        if (z != 0) {
            cap = z;
        }
        while (vec->size + count > cap) {
            if (cap < 0x0FFFFFFFU) {
                cap *= 2;
            } else {
                cap = 0x1FFFFFFFU;
            }
        }
        p = (Elem *)fn_800C42D8(cap * 8);
        if (p == NULL) {
            char *files = __files;
            char *msg = lbl_80281028;
            fn_80232058(files + 0xA0, msg + 0x3BE);
            fn_8022CF78();
        }
        tmp.data = p;
        tmp.cap = cap;
        dst = p;
        src = vec->data;
        end = vec->data + vec->size;
        for (; src < pos; src++, dst++) {
            if (dst != NULL) {
                *dst = *src;
            }
            tmp.size++;
        }
        {
            u32 ctr;
            for (ctr = count; ctr != 0; ctr--) {
                if (dst != NULL) {
                    *dst = *fill;
                }
                dst++;
                tmp.size++;
            }
        }
        for (; src < end; src++, dst++) {
            if (dst != NULL) {
                *dst = *src;
            }
            tmp.size++;
        }
        if (&tmp != vec) {
            t = tmp.cap;
            tmp.cap = vec->cap;
            vec->cap = t;
            tp = tmp.data;
            tmp.data = vec->data;
            vec->data = tp;
            ts = tmp.size;
            tmp.size = vec->size;
            vec->size = ts;
        }
        fn_801FB548(&tmp);
        if (tmp.data != NULL) {
            fn_800C428C(tmp.data);
        }
    }
}
#pragma peephole on
void fn_801FB048(void *arg0, u32 arg1) {
    typedef struct {
        s32 unk0;
        s32 unk4;
    } Elem;
    typedef struct {
        u32 cap;
        s32 size;
        Elem *data;
    } Vec;
    void fn_800C428C(void *);
    void *fn_800C42D8(u32);
    void fn_801FB548(Vec *);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    extern char __files[];
    extern char lbl_80281028[];
    Vec *vec = arg0;
    Vec tmp;
    Elem *p;
    Elem *src;
    Elem *dst;
    Elem *end;
    u32 t;
    Elem *tp;
    s32 ts;

    if (arg1 > vec->cap) {
        if (arg1 > 0x1FFFFFFF) {
            fn_80232058(__files + 0xA0, lbl_80281028 + 0x3D8);
            fn_8022CF78();
        }
        tmp.cap = 0;
        tmp.size = 0;
        tmp.data = NULL;
        p = fn_800C42D8(arg1 * 8);
        if (p == NULL) {
            fn_80232058(__files + 0xA0, lbl_80281028 + 0x3BE);
            fn_8022CF78();
        }
        tmp.data = p;
        dst = p;
        tmp.cap = arg1;
        src = vec->data;
        end = src + vec->size;
        for (; src < end; src++, dst++) {
            if (dst != NULL) {
                *dst = *src;
            }
            tmp.size++;
        }
        if (&tmp != vec) {
            t = tmp.cap;
            tmp.cap = vec->cap;
            vec->cap = t;
            tp = tmp.data;
            tmp.data = vec->data;
            vec->data = tp;
            ts = tmp.size;
            tmp.size = vec->size;
            vec->size = ts;
        }
        fn_801FB548(&tmp);
        if (tmp.data != NULL) {
            fn_800C428C(tmp.data);
        }
    }
}

void *fn_801FB1C0(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    void fn_801FB548(void *);

    if (arg0 != NULL) {
        fn_801FB548(arg0);
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            fn_800C428C(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801FB220(void **ret, s32 *list, void **start, void **end) {
    struct Node {
        struct Node *prev;
        struct Node *next;
        s32 owner;
        void *obj;
    };
    void fn_800616A0(void *);
    void fn_800C428C(void *);
    struct Node *first;
    struct Node *last;
    struct Node *a;
    struct Node *node;
    void **value;

    first = (struct Node *)*start;
    last = (struct Node *)*end;
    if (first == last) {
        *ret = last;
        return;
    }
    a = last->prev;
    first->prev->next = a->next;
    a->next->prev = first->prev;
    while (*start != *end) {
        value = (void **)((u8 *)*(struct Node **)start + 8);
        if (value != NULL) {
            if (value[1] != NULL) {
                fn_800616A0(value[1]);
            }
        }
        node = (struct Node *)*start;
        *start = node->next;
        fn_800C428C(node);
        (*list)--;
    }
    *ret = *end;
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void *fn_800C42D8(u32);
extern "C" void fn_800C428C(void *);
extern "C" void fn_800506E0(s32, s32, void *);
extern "C" void fn_8006140C(void *);
extern "C" void fn_800616A0(void *);
extern "C" void *fn_80061870(void);
extern "C" s32 fn_800639B4(void);
extern "C" M2C_UNK fn_8022CF78(void);
extern "C" M2C_UNK fn_80232058(void *, const char *, ...);
extern "C" void fn_801FB2EC(void **arg0, s32 *arg1, void ***arg2, s32 *arg3) {
    struct Obj {
        u32 flags;
        s32 unk4;
        u8 pad8[0x3C];
        s32 unk44;
    };
    struct Value {
        s32 owner;
        Obj *obj;
    };
    struct Node {
        Node *prev;
        Node *next;
        Value value;
    };
    struct Holder {
        void *list;
        Node *node;
        Holder(void *l, Node *n) : list(l), node(n) {}
        ~Holder() {
            if (node != 0) {
                fn_800C428C(node);
            }
        }
    };
    extern char __files[];
    extern char lbl_80281028[];
    Value *value;
    Node *node;
    s32 owner;
    void *list;
    Obj *obj;
    Node *pos;
    Node *n;

    list = arg1 + 1;
    node = (Node *)fn_800C42D8(0x10);
    if (node == 0) {
        fn_80232058(__files + 0xA0, lbl_80281028 + 0x3BE);
        fn_8022CF78();
    }
    {
        Holder h(list, node);
        value = &h.node->value;
        if (value != 0) {
            owner = *arg3;
            value->owner = owner;
            value->obj = 0;
            if (value->obj != 0) {
                fn_800616A0(value->obj);
            }
            value->obj = (Obj *)fn_80061870();
            value->obj->unk4 = owner + 0x1C;
            obj = value->obj;
            obj->flags |= 0x50028400;
            fn_800506E0(owner, 0, obj);
            value->obj->unk44 = fn_800639B4();
            fn_8006140C(value->obj);
        }
        pos = (Node *)*arg2;
        n = h.node;
        h.node = 0;
        pos->prev->next = n;
        n->prev = pos->prev;
        pos->prev = n;
        n->next = pos;
        (*arg1)++;
        *arg0 = n;
    }
}

#pragma use_lmw_stmw reset
#pragma cplusplus reset

int fn_801FB410(void *arg0) {
    u32 *ptr;

    ptr = (u32 *)((u8 *)arg0 + 0x4);
    *(u32 *)arg0 = 0;
    ptr[1] = (u32)ptr;
    ptr[0] = (u32)ptr;
}

void fn_801FB428(void *arg0, void *arg1, s32 (*compare)(void *, void *))
{
    typedef struct Node {
        struct Node *prev;
        struct Node *next;
    } Node;

    typedef struct List {
        s32 count;
        Node sentinel;
        Node *first;
    } List;

    extern void fn_801FB580(void *, void *, void *);

    List *dst;
    List *src;
    Node *dstNode;
    Node *srcNode;
    Node *dstEnd;
    Node *srcEnd;
    Node *rangeEnd;
    Node *last;
    Node *prev;
    s32 count;

    dst = (List *)arg0;
    src = (List *)arg1;

    if (dst == src) {
        return;
    }

    dstNode = dst->first;
    dstEnd = &dst->sentinel;
    srcNode = src->first;
    srcEnd = &src->sentinel;

    while (dstNode != dstEnd) {
        if (srcNode != srcEnd) {
            if (compare((u8 *)srcNode + 8, (u8 *)dstNode + 8)) {
                rangeEnd = srcNode->next;
                count = 1;

                while (rangeEnd != srcEnd) {
                    if (!compare((u8 *)rangeEnd + 8, (u8 *)dstNode + 8)) {
                        break;
                    }

                    rangeEnd = rangeEnd->next;
                    count++;
                }

                last = rangeEnd->prev;
                prev = srcNode->prev;

                prev->next = last->next;
                last->next->prev = prev;

                dstNode->prev->next = srcNode;
                srcNode->prev = dstNode->prev;

                srcNode = rangeEnd;

                dstNode->prev = last;
                last->next = dstNode;

                src->count -= count;
                dst->count += count;
            }
        }

        dstNode = dstNode->next;

        if (srcNode == srcEnd) {
            break;
        }
    }

    if (srcNode != srcEnd) {
        fn_801FB580(dst, &dstNode, src);
    }
}

#pragma global_optimizer off
void fn_801FB548(u32 *arg0) {
    u8 (*start)[8];
    u8 (*end)[8];

    start = (u8 (*)[8])arg0[2];
    end = start + arg0[1];
    for (; start < end; start++) {
    }
    arg0[1] = 0;
}
#pragma global_optimizer on
void fn_801FB580(u32 *arg0, void **arg1, void *arg2)
{
    struct ListNode {
        struct ListNode *prev;
        struct ListNode *next;
    };
    struct ListNode *list;
    struct ListNode *sentinel;
    struct ListNode *next;
    struct ListNode *prev;

    if (*(u32 *)arg2 == 0) {
        return;
    }

    sentinel = (struct ListNode *)((u8 *)arg2 + 4);
    list = *(struct ListNode **)arg1;
    next = sentinel->next;
    prev = sentinel->prev;

    sentinel->next = sentinel;
    sentinel->prev = sentinel;

    list->prev->next = next;
    next->prev = list->prev;
    list->prev = prev;
    prev->next = list;

    *arg0 = *arg0 + *(u32 *)arg2;
    *(u32 *)arg2 = 0;
}

#pragma use_lmw_stmw on
void fn_801FB5D8(s32 *arg0, u8 *arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    void fn_8021FBB8(void);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_8022224C(s32, s32 *);
    void fn_802240C8(s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    u16 fn_802072A0(void);
    void *fn_801FBF98(void *, void *, u16 *, u32 (*)(void *, u16));
    u32 fn_801FB9CC(void *, u16);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void fn_80220DEC(s32, s32, s32);
    extern f32 lbl_8036BAB8;
    extern f64 lbl_8036BAC0;
    extern u32 lbl_80368410[2];

    u8 tex[0x20];
    s32 color;
    u16 code;
    s32 *var_r21;
    u8 *var_r20;
    u8 *var_r22;
    s32 var_r24;
    s32 var_r25;
    s32 var_r23;
    s32 var_r26;
    s32 var_r27;
    s32 var_r28;
    s32 var_r30;
    u32 *var_r29;
    void *var_r31;
    void *found;
    void *end;
    u8 temp_r3;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r0;
    s16 var_r4;
    f32 temp_f1;
    s32 conv_hi;
    s32 conv_lo;
    volatile u8 *wg;
    s16 temp_r6;
    f32 fadv;

    var_r21 = arg0;
    var_r20 = arg1;

    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021F4E4(0xD, 1);
    fn_8021FBF0(0, 9, 1, 3, 0);
    fn_8021FBF0(0, 0xD, 1, 0, 0);
    fn_80222334(1);
    fn_80222370(4, 0, 0, 0, 0, 0, 2);
    color = *var_r21;
    fn_8022224C(4, &color);
    fn_802240C8(1);
    fn_80223F2C(0, 0, 0, 4);
    fn_80223A5C(0, 0xF, 0xF, 0xF, 0xA);
    fn_80223AE4(0, 0, 0, 0, 1, 0);
    fn_80223AA0(0, 7, 4, 5, 7);
    fn_80223B4C(0, 0, 0, 0, 1, 0);
    fn_80220428(1);
    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);

    var_r22 = var_r20;
    temp_f1 = lbl_8036BAB8 * farg3;
    var_r24 = (s32)farg1;
    var_r28 = (s16)(s32)farg2;
    var_r23 = (s32)temp_f1;
    var_r27 = (s16)(s32)temp_f1;
    var_r25 = (s32)farg0;
    var_r26 = (s16)var_r23;
    var_r30 = (s16)var_r24 + var_r26;
    var_r29 = lbl_80368410;

    goto loop_check;
loop_body:
    if ((s8)temp_r3 == 0xA) {
        var_r30 += var_r26;
        var_r24 += var_r23;
        var_r22 += 1;
        var_r25 = (s32)farg0;
        goto loop_check;
    }
    if (fn_802072A0() != 1) {
        var_r4 = (s8)var_r22[0];
        var_r22 += 1;
    } else {
        temp_r0 = var_r22[0];
        if (((temp_r0 >= 0x81U && temp_r0 <= 0x9FU) || (temp_r0 >= 0xE0U && temp_r0 <= 0xFCU))
            && (((temp_r0_2 = var_r22[1], temp_r0_2 >= 0x40U) && (temp_r0_2 <= 0x7EU))
                || ((temp_r0_2 >= 0x80U) && (temp_r0_2 <= 0xFCU)))) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            var_r4 = (s8)var_r22[0];
            var_r22 += 1;
        } else {
            var_r4 = *(s16 *)var_r22;
            var_r22 += 2;
        }
    }
    var_r31 = (void *)var_r29[0];
    code = (u16)var_r4;
    end = (u8 *)var_r31 + var_r29[1] * 0x140;
    found = fn_801FBF98(var_r31, end, &code, fn_801FB9CC);
    if (end == found || *(u16 *)((u8 *)found + 0x120) != code) {
        found = var_r31;
    }
    fn_80222644(tex, found, 0x18, 0x18, 0, 0, 0, 0);
    fn_80222C50(tex, 0);
    fn_80220DEC(0x80, 0, 4);
    wg = (volatile u8 *)0xCC010000;
    temp_r6 = (s16)var_r25 + (s16)var_r27;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r25;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r24;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r28;
    *(wg - 0x8000) = 0;
    *(wg - 0x8000) = 0;
    *(volatile s16 *)(wg - 0x8000) = temp_r6;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r24;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r28;
    *(wg - 0x8000) = 1;
    *(wg - 0x8000) = 0;
    *(volatile s16 *)(wg - 0x8000) = temp_r6;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r30;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r28;
    *(wg - 0x8000) = 1;
    *(wg - 0x8000) = 1;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r25;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r30;
    *(volatile s16 *)(wg - 0x8000) = (s16)var_r28;
    *(wg - 0x8000) = 0;
    *(wg - 0x8000) = 1;
    conv_hi = 0x43300000;
    conv_lo = *(u16 *)((u8 *)found + 0x122);
    fadv = (f32)(*(f64 *)&conv_hi - lbl_8036BAC0);
    fadv = fadv * farg3;
    var_r25 = var_r25 + (s32)fadv;
loop_check:
    temp_r3 = *var_r22;
    if ((s8)temp_r3 != 0) {
        goto loop_body;
    }
}
u32 fn_801FB9CC(void *arg0, u16 arg1) {
    return *(u16 *)((u8 *)arg0 + 0x120) < arg1;
}

s32 fn_801FB9E0(u8 *arg0) {
    u16 fn_802072A0(s32);
    s32 var_r31;
    u8 *var_r30;
    u8 temp_r3;
    u8 ch;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r0;

    if ((s8)*arg0 == 0) {
        return 0;
    }
    var_r30 = arg0;
    var_r31 = 0x18;
    goto loop_check;
loop_body:
    ch = temp_r3;
    if ((s8)ch == 0xA) {
        var_r31 += 0x18;
        var_r30 += 1;
        goto loop_check;
    }
    if (fn_802072A0(ch) != 1) {
        var_r30 += 1;
        goto loop_check;
    }
    temp_r0 = var_r30[0];
    if ((((temp_r0 >= 0x81U) && (temp_r0 <= 0x9FU)) || ((temp_r0 >= 0xE0U) && (temp_r0 <= 0xFCU)))
        && (((temp_r0_2 = var_r30[1], temp_r0_2 >= 0x40U) && (temp_r0_2 <= 0x7EU))
            || ((temp_r0_2 >= 0x80U) && (temp_r0_2 <= 0xFCU)))) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r30 += 1;
    } else {
        var_r30 += 2;
    }
loop_check:
    temp_r3 = *var_r30;
    if ((s8)temp_r3 != 0) {
        goto loop_body;
    }
    return var_r31;
}

extern u16 lbl_8029B520[];
s32 fn_801FBC30(s32 arg0) {
    return ((s32 **)lbl_8029B520)[1][arg0];
}

void fn_801FBC84(void);

void fn_801FBC48(void) {
    extern u32 lbl_80368410[2];
    u32 *p = lbl_80368410;
    if (p[0] == 0) {
        p[0] = 0;
        p[1] = 0;
        fn_801FBC84();
    }
}

#pragma use_lmw_stmw on
void fn_801FBC84(void) {
    void DCFlushRange(void *, u32);
    void fn_800C4588(s32);
    s32 fn_800C45B8(s32, char *, s32);
    void *fn_800C4604(s32, s32, char *, s32);
    void fn_800DE9FC(void *);
    void fn_801FC038(void *, void *);
    void fn_801FC43C(void *, void *, u16 *);
    void fn_801FC4F8(void *, void *, void *);
    u16 fn_802072A0(void);
    void fn_80207628(s32, s32);
    void fn_802078A4(u8 *, void *, s32, s32, s32 *);
    void *memset(void *, s32, u32);
    extern char lbl_80281420[];
    extern u8 lbl_8029B478[];
    extern u16 lbl_8029B520[];
    extern u32 lbl_80368410[2];

    struct Tree {
        s32 count;
        void *root;
        void *first;
    } tree;
    u8 sp30[8];
    u8 sp28[8];
    u8 sp20[8];
    u8 sp1C[4];
    u8 sp18b[4];
    u8 sp14b[4];
    u32 spC;
    u32 sp8;
    s16 sp12;
    s16 sp10;
    void *tables;
    void *list;
    u8 *str;
    s32 h1;
    s32 h2;
    void *glyphs;
    u32 *lbl;
    void *end;
    u8 temp_r3;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r0;
    u16 code;
    s8 tmp_ch;

    fn_801FC4F8(&tree, &sp8, &spC);
    tables = (void *)lbl_8029B520;
    goto outer_cond;
outer_body:
    if (fn_802072A0() == 1) {
        goto do_list;
    }
    if (list == (void *)lbl_8029B478) {
        goto outer_next;
    }
do_list:
    goto list_cond;
list_body:
    str = *(u8 **)list;
    goto char_cond;
char_body:
    if ((s32)(s8)temp_r3 == 0xA) {
        str += 1;
        goto char_cond;
    }
    if (fn_802072A0() != 1) {
        tmp_ch = (s8)str[0];
        str += 1;
        sp12 = tmp_ch;
        fn_801FC43C(sp30, &tree, (u16 *)&sp12);
        goto char_cond;
    }
    temp_r0 = str[0];
    if (((temp_r0 >= 0x81U && temp_r0 <= 0x9FU) || (temp_r0 >= 0xE0U && temp_r0 <= 0xFCU))
        && (((temp_r0_2 = str[1], temp_r0_2 >= 0x40U) && (temp_r0_2 <= 0x7EU))
            || ((temp_r0_2 >= 0x80U) && (temp_r0_2 <= 0xFCU)))) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        tmp_ch = (s8)str[0];
        str += 1;
        sp10 = tmp_ch;
        fn_801FC43C(sp28, &tree, (u16 *)&sp10);
    } else {
        fn_801FC43C(sp20, &tree, (u16 *)str);
        str += 2;
    }
char_cond:
    temp_r3 = *str;
    if ((s8)temp_r3 != 0) {
        goto char_body;
    }
    list = (u8 *)list + 4;
list_cond:
    if (*(void **)list != NULL) {
        goto list_body;
    }
outer_next:
    tables = (u8 *)tables + 4;
outer_cond:
    list = *(void **)tables;
    if (list != NULL) {
        goto outer_body;
    }

    if (fn_802072A0() == 1) {
        h1 = fn_800C45B8(0xFFF6F11C, lbl_80281420 + 0xA6D, 0);
        h2 = fn_800C45B8(0xFFFB3000, lbl_80281420 + 0xA6D, 0);
    } else {
        h1 = fn_800C45B8(0xFFFEFEE0, lbl_80281420 + 0xA6D, 0);
        h2 = fn_800C45B8(-0x3000, lbl_80281420 + 0xA6D, 0);
    }
    fn_80207628(h1, h2);
    glyphs = fn_800C4604(0, tree.count * 0x140, lbl_80281420 + 0xA6D, 0);
    lbl_80368410[0] = (u32)glyphs;
    memset(glyphs, 0, tree.count * 0x140);
    *(void **)sp14b = tree.first;
    lbl = lbl_80368410;
    end = &tree.root;
    lbl_80368410[1] = tree.count;
    goto glyph_cond;
glyph_body:
    code = *(u16 *)((u8 *)*(void **)sp14b + 0xC);
    if ((code & 0xFF00) == 0) {
        sp1C[0] = (u8)code;
        sp1C[1] = 0;
    } else {
        sp1C[0] = (u8)((s32)(code & 0xFF00) >> 8);
        sp1C[1] = (u8)code;
        sp1C[2] = 0;
    }
    fn_802078A4(sp1C, glyphs, 0, 6, (s32 *)sp18b);
    *(u16 *)((u8 *)glyphs + 0x120) = *(u16 *)((u8 *)*(void **)sp14b + 0xC);
    *(u16 *)((u8 *)glyphs + 0x122) = (u16)*(s32 *)sp18b;
    fn_800DE9FC(sp14b);
    glyphs = (u8 *)glyphs + 0x140;
glyph_cond:
    if (*(void **)sp14b != end) {
        goto glyph_body;
    }
    DCFlushRange((void *)*lbl, tree.count * 0x140);
    fn_800C4588(h2);
    fn_800C4588(h1);
    if (tree.root != NULL) {
        fn_801FC038(&tree, tree.root);
    }
}
s32 fn_801FBF98(s32 arg0, s32 arg1, u16 *arg2, u8 (*arg3)(s32, u16)) {
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r26;
    u32 var_r31;

    var_r26 = arg0;
    var_r31 = (arg1 - var_r26) / 320;
loop_4:
    if ((s32) var_r31 > 0) {
        temp_r29 = (s32) ((var_r31 >> 0x1FU) + var_r31) >> 1;
        temp_r30 = var_r26 + (temp_r29 * 0x140);
        if (arg3(temp_r30, *arg2) != 0) {
            var_r26 = temp_r30 + 0x140;
            var_r31 -= temp_r29 + 1;
        } else {
            var_r31 = (u32) temp_r29;
        }
        goto loop_4;
    }
    return var_r26;
}

#pragma use_lmw_stmw on
void fn_801FC038(void *arg0, void *arg1) {
    void fn_800C428C(void *);
    void fn_801FC400(void *);
    void fn_801FC404(void *);
    void fn_801FC408(void *, void *, s32);
    void *fn_801FC42C(void *);
    void fn_801FC434(void *, void *);
    void *fn_801FC438(void *);
    void *v27;
    void *v28;
    void *v29;

    v29 = *(void **)((u8 *)arg1 + 0);
    if (v29 != 0) {
        v28 = *(void **)((u8 *)v29 + 0);
        if (v28 != 0) {
            v27 = *(void **)((u8 *)v28 + 0);
            if (v27 != 0) {
                if (*(void **)((u8 *)v27 + 0) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v27 + 0));
                }
                if (*(void **)((u8 *)v27 + 4) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v27 + 4));
                }
                fn_801FC434(fn_801FC438(arg0), (u8 *)v27 + 0xC);
                fn_801FC408(fn_801FC42C(arg0), v27, 1);
            }
            v27 = *(void **)((u8 *)v28 + 4);
            if (v27 != 0) {
                if (*(void **)((u8 *)v27 + 0) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v27 + 0));
                }
                if (*(void **)((u8 *)v27 + 4) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v27 + 4));
                }
                fn_801FC434(fn_801FC438(arg0), (u8 *)v27 + 0xC);
                fn_801FC408(fn_801FC42C(arg0), v27, 1);
            }
            fn_801FC438(arg0);
            fn_801FC42C(arg0);
            fn_800C428C(v28);
        }
        v27 = *(void **)((u8 *)v29 + 4);
        if (v27 != 0) {
            v28 = *(void **)((u8 *)v27 + 0);
            if (v28 != 0) {
                if (*(void **)((u8 *)v28 + 0) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v28 + 0));
                }
                if (*(void **)((u8 *)v28 + 4) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v28 + 4));
                }
                fn_801FC434(fn_801FC438(arg0), (u8 *)v28 + 0xC);
                fn_801FC408(fn_801FC42C(arg0), v28, 1);
            }
            v28 = *(void **)((u8 *)v27 + 4);
            if (v28 != 0) {
                if (*(void **)((u8 *)v28 + 0) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v28 + 0));
                }
                if (*(void **)((u8 *)v28 + 4) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v28 + 4));
                }
                fn_801FC434(fn_801FC438(arg0), (u8 *)v28 + 0xC);
                fn_801FC408(fn_801FC42C(arg0), v28, 1);
            }
            fn_801FC438(arg0);
            fn_801FC42C(arg0);
            fn_800C428C(v27);
        }
        fn_801FC404(arg0);
        fn_801FC400((u8 *)arg0 + 4);
        fn_800C428C(v29);
    }
    v27 = *(void **)((u8 *)arg1 + 4);
    if (v27 != 0) {
        v28 = *(void **)((u8 *)v27 + 0);
        if (v28 != 0) {
            v29 = *(void **)((u8 *)v28 + 0);
            if (v29 != 0) {
                if (*(void **)((u8 *)v29 + 0) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v29 + 0));
                }
                if (*(void **)((u8 *)v29 + 4) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v29 + 4));
                }
                fn_801FC434(fn_801FC438(arg0), (u8 *)v29 + 0xC);
                fn_801FC408(fn_801FC42C(arg0), v29, 1);
            }
            v29 = *(void **)((u8 *)v28 + 4);
            if (v29 != 0) {
                if (*(void **)((u8 *)v29 + 0) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v29 + 0));
                }
                if (*(void **)((u8 *)v29 + 4) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v29 + 4));
                }
                fn_801FC434(fn_801FC438(arg0), (u8 *)v29 + 0xC);
                fn_801FC408(fn_801FC42C(arg0), v29, 1);
            }
            fn_801FC438(arg0);
            fn_801FC42C(arg0);
            fn_800C428C(v28);
        }
        v28 = *(void **)((u8 *)v27 + 4);
        if (v28 != 0) {
            v29 = *(void **)((u8 *)v28 + 0);
            if (v29 != 0) {
                if (*(void **)((u8 *)v29 + 0) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v29 + 0));
                }
                if (*(void **)((u8 *)v29 + 4) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v29 + 4));
                }
                fn_801FC434(fn_801FC438(arg0), (u8 *)v29 + 0xC);
                fn_801FC408(fn_801FC42C(arg0), v29, 1);
            }
            v29 = *(void **)((u8 *)v28 + 4);
            if (v29 != 0) {
                if (*(void **)((u8 *)v29 + 0) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v29 + 0));
                }
                if (*(void **)((u8 *)v29 + 4) != 0) {
                    fn_801FC038(arg0, *(void **)((u8 *)v29 + 4));
                }
                fn_801FC434(fn_801FC438(arg0), (u8 *)v29 + 0xC);
                fn_801FC408(fn_801FC42C(arg0), v29, 1);
            }
            fn_801FC438(arg0);
            fn_801FC42C(arg0);
            fn_800C428C(v28);
        }
        fn_801FC404(arg0);
        fn_801FC400((u8 *)arg0 + 4);
        fn_800C428C(v27);
    }
    fn_800C428C(arg1);
}
#pragma use_lmw_stmw reset

void fn_801FC400(void) {

}

void fn_801FC404(void) {

}

void fn_801FC408(void *arg0, void *arg1) {
    void fn_800C428C(void *);
    fn_800C428C(arg1);
}

s32 fn_801FC42C(s32 arg0) {
    return arg0 + 4;
}

void fn_801FC434(void) {

}

void fn_801FC438(void) {

}

void *fn_801FC518(void *arg0, void *arg1, u8 arg2, u8 arg3, u16 *arg4);

void fn_801FC43C(void *arg0, void *arg1, u16 *arg2) {
    u16 var_r5;
    u16 var_r6;
    void *var_r10;
    void *var_r8;
    void *var_r9;

    var_r9 = (u8 *)arg1 + 4;
    var_r8 = NULL;
    var_r6 = 1;
    var_r5 = 1;
    var_r10 = *(void **)((u8 *)arg1 + 4);
    
loop_4:
    if (var_r10 != NULL) {
        var_r9 = var_r10;
        if (*arg2 < *(u16 *)((u8 *)var_r10 + 0xC)) {
            var_r10 = *(void **)((u8 *)var_r10 + 0x0);
            var_r5 = 1;
        } else {
            var_r8 = var_r10;
            var_r10 = *(void **)((u8 *)var_r10 + 0x4);
            var_r5 = 0;
            var_r6 = 0;
        }
        goto loop_4;
    }
    
    if ((var_r8 == NULL) || (*(u16 *)((u8 *)var_r8 + 0xC) < *arg2)) {
        *(void **)arg0 = (void *)fn_801FC518(arg1, var_r9, var_r5, var_r6, arg2);
        *(u8 *)((u8 *)arg0 + 4) = 0x0;
        return;
    }
    
    *(void **)arg0 = var_r8;
    *(u8 *)((u8 *)arg0 + 4) = 0x1;
}

void fn_801FC4F8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_arg2 = (arg2 < 0 ? 0 : arg2);
    
    *(s32*)(arg0 + 0x4) = arg1;
    *(u32*)(arg0 + 0x8) = (u32)temp_arg2;
}

#pragma use_lmw_stmw on
void *fn_801FC518(void *arg0, void *arg1, u8 arg2, u8 arg3, u16 *arg4) {
    void *fn_800C42D8(u32);
    void fn_800D6C1C(void *, void *);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    extern char __files[];
    extern char lbl_80281420[];
    void *node;
    u16 *value;

    if (M2C_FIELD(arg0, u32 *, 0) > (u32)-2) {
        fn_80232058(__files + 0xA0, lbl_80281420 + 0xA6E);
        fn_8022CF78();
    }
    node = fn_800C42D8(0x10);
    if (node == NULL) {
        fn_80232058(__files + 0xA0, lbl_80281420 + 0xA89);
        fn_8022CF78();
    }
    value = (u16 *)((char *)node + 0xC);
    if (value != NULL) {
        *value = *arg4;
    }
    M2C_FIELD(node, void **, 4) = NULL;
    M2C_FIELD(node, void **, 0) = NULL;
    M2C_FIELD(node, u32 *, 8) = (u32)arg1 | (M2C_FIELD(node, u32 *, 8) & 1);
    if (arg2) {
        M2C_FIELD(arg1, void **, 0) = node;
    } else {
        M2C_FIELD(arg1, void **, 4) = node;
    }
    M2C_FIELD(arg0, u32 *, 0)++;
    fn_800D6C1C(node, M2C_FIELD(arg0, void **, 4));
    if (arg3) {
        M2C_FIELD(arg0, void **, 8) = node;
    }
    return node;
}
#pragma use_lmw_stmw reset
extern u16 lbl_80280B58[18];
extern u16* lbl_8027F730;
extern u16* lbl_8029A910;
extern u8 lbl_8027F710[32];
extern u8 lbl_80330708[1400];

u8 fn_801F19A0(void) {
    s32 fn_8000D354(void *);
    s32 temp_r3;
    s8 var_r0;

    temp_r3 = fn_8000D354(lbl_8027F710 + 0x15);
    switch ((s32)lbl_80330708[0xA6]) {
    case 3:
        var_r0 = 3;
        break;
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }
    temp_r3 = temp_r3 + var_r0;
    return *(u8 *)(temp_r3 + 0x18);
}

u8 fn_801F1A2C(void) {
    void *fn_8000D354(void *);
    s8 var_r0;
    void *temp_r3;

    temp_r3 = fn_8000D354(lbl_8027F710 + 0x15);
    switch ((s32)lbl_80330708[0xA6]) {
    case 3:
        var_r0 = 3;
        break;
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }
    temp_r3 = (void *)((u8 *)temp_r3 + var_r0);
    return *(u8 *)((u8 *)temp_r3 + 0x14);
}

u8 fn_801F1AB8(void) {
    s32 fn_8000D354(void *);
    s32 temp_r3;
    s8 var_r0;

    temp_r3 = fn_8000D354(lbl_8027F710 + 0x15);
    switch ((s32)lbl_80330708[0xA6]) {
    case 3:
        var_r0 = 3;
        break;
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }
    temp_r3 = temp_r3 + var_r0;
    return *(u8 *)(temp_r3 + 0x10);
}

u8 fn_801F1B44(void) {
    s32 fn_8000D354(void *);
    s32 temp_r3;
    s8 var_r0;

    temp_r3 = fn_8000D354(lbl_8027F710 + 0x15);
    switch ((s32)lbl_80330708[0xA6]) {
    case 3:
        var_r0 = 3;
        break;
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }
    temp_r3 = temp_r3 + var_r0;
    return *(u8 *)(temp_r3 + 0xC);
}

u8 fn_801F1BD0(void) {
    void *fn_8000D354(void *);
    s8 var_r0;
    void *temp_r3;

    temp_r3 = fn_8000D354(lbl_8027F710 + 0x15);
    switch ((s32)lbl_80330708[0xA6]) {
    case 3:
        var_r0 = 3;
        break;
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }
    temp_r3 = (void *)((u8 *)temp_r3 + var_r0);
    return *(u8 *)((u8 *)temp_r3 + 0x8);
}

u8 fn_801F1C5C(void) {
    s32 fn_8000D354(void *);
    s32 temp_r3;
    s8 var_r0;

    temp_r3 = fn_8000D354(lbl_8027F710 + 0x15);
    switch ((s32)lbl_80330708[0xA6]) {
    case 3:
        var_r0 = 3;
        break;
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }
    temp_r3 = temp_r3 + var_r0;
    return *(u8 *)(temp_r3 + 4);
}

u8 fn_801F1CE8(void)
{
    s32 fn_8000D354(void *);

    s32 temp_r3;
    s8 var_r0;

    temp_r3 = fn_8000D354(lbl_8027F710 + 0x15);

    switch ((s32)lbl_80330708[0xA6]) {
    case 3:
        var_r0 = 3;
        break;
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }

    temp_r3 = temp_r3 + var_r0;
    return *(u8 *)temp_r3;
}

#include "common.h"
extern u8 lbl_8027F710[];
extern u8 lbl_80330708[];
#include "global.h"
#include "unit.h"

extern s32 lbl_802343E0(void *, void *);
extern s32 lbl_80234450(void *, void *, s32, s32);
#include "global.h"
#include "structs.h"

extern u16 lbl_80280D38[40];
