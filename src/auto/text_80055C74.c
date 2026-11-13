/* Functions from 0x80055C74 to 0x8005A29C, found by decomp-toolkit. */
#include "common.h"

s32 fn_80055C74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

u8 fn_80055C7C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 5);
}

s32 fn_80055C84(s32 *arg0) {
    return *arg0;
}

void *fn_8000CAA0(void *, s32, void *);             /* extern */
s32 fn_80234450(void *, s32);                       /* extern */
extern u16 lbl_80285BD0[16];
void fn_80055C8C(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80285BD0, arg2);
    *(s32 *)((char *)temp_r3 + 0x6C) = arg1;
    fn_80234450((char *)temp_r3 + 0x30, arg0);
}

void fn_80055CE4(void *arg0)
{
    extern u8 lbl_8026AD80[];
    extern u32 fn_8005BA10(void *);
    extern void fn_800056CC(const char *, ...);
    extern void fn_8000C188(void *);

    u8 *obj;
    u32 count;
    void (*callback)(void *);

    obj = (u8 *)arg0;

    count = *(u16 *)(obj + 0x68);
    *(u16 *)(obj + 0x68) = count + 1;

    if (count > 0x2A30 || (u8)fn_8005BA10(obj + 0x30) != 0) {
        callback = *(void (**)(void *))(obj + 0x6C);

        if (callback != 0) {
            callback(*(void **)(obj + 0x18));
        }

        fn_800056CC(
            (const char *)lbl_8026AD80 + 0x91,
            obj + 0x30
        );

        fn_8000C188(obj);
    }
}

void fn_80055D68(void *arg0) {
    *(u16 *)((char *)arg0 + 0x68) = 0;
    fn_8005C8B4((char *)arg0 + 0x30);
}

s32 fn_80055D94(void) {
    return 0;
}

void fn_80055D9C(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x32) = -1;
    }
}

void fn_80055DB0(void *arg0, u8 *arg1) {
    arg1[*(u8 *)((u8 *)arg0 + 0x30)] = 1;
}

void fn_800561A8(void) {
    M2C_UNK fn_800561EC();
    fn_800561EC();
}

void fn_800561C8(void *arg0) {
    M2C_UNK fn_80067304(s32);
    fn_80067304(M2C_FIELD(arg0, s32 *, 0x4C));
}

void fn_800561EC(void *arg0) {
    void fn_8000C188(void *);
    extern u32 lbl_80369100;
    extern f64 lbl_80369118;
    extern f64 lbl_80369120;
    extern f32 lbl_80369108;
    extern f32 lbl_8036910C;
    extern f32 lbl_80369110;
    extern f32 lbl_80369114;
    u8 sp8[4];
    s32 half;
    s32 period;
    s32 pos;
    s32 t;
    f32 f;
    u8 *dst;
    u8 c0, c1, c2;
    u8 r, g, b;

    *(u32 *)sp8 = lbl_80369100;
    switch (*(u8 *)((u8 *)arg0 + 0x31)) {
    case 0:
        *(s16 *)((u8 *)arg0 + 0x36) += 1;
        if (*(s16 *)((u8 *)arg0 + 0x36) >= *(s16 *)((u8 *)arg0 + 0x34)) {
            *(s16 *)((u8 *)arg0 + 0x36) = *(s16 *)((u8 *)arg0 + 0x34);
            fn_8000C188(arg0);
        }
        period = *(s16 *)((u8 *)arg0 + 0x34);
        pos = *(s16 *)((u8 *)arg0 + 0x36);
        half = period >> 1;
        pos = pos % period;
        if (pos < half) {
            f = lbl_80369108 + (((f32)pos * lbl_8036910C) / (f32)half);
        } else {
            f = lbl_8036910C + (((f32)(pos - half) * lbl_80369110) / (f32)half);
        }
        t = (s32)f;
        c0 = *(u8 *)((u8 *)arg0 + 0x38);
        c1 = *(u8 *)((u8 *)arg0 + 0x39);
        c2 = *(u8 *)((u8 *)arg0 + 0x3A);
        dst = *(u8 **)((u8 *)arg0 + 0x4C);
        r = (u8)(((f32)t * ((f32)c0 - lbl_80369108)) * lbl_80369114 + lbl_80369108);
        g = (u8)(((f32)t * ((f32)c1 - lbl_80369108)) * lbl_80369114 + lbl_80369108);
        b = (u8)(((f32)t * ((f32)c2 - lbl_80369108)) * lbl_80369114 + lbl_80369108);
        dst[4] = r;
        sp8[0] = r;
        dst[5] = g;
        sp8[1] = g;
        dst[6] = b;
        sp8[2] = b;
        dst[7] = sp8[3];
        break;
    case 1:
        *(s16 *)((u8 *)arg0 + 0x36) += *(s8 *)((u8 *)arg0 + 0x32);
        if (*(s16 *)((u8 *)arg0 + 0x36) <= 0) {
            *(s16 *)((u8 *)arg0 + 0x36) = 0;
            fn_8000C188(arg0);
        }
        if (*(s16 *)((u8 *)arg0 + 0x36) >= *(s16 *)((u8 *)arg0 + 0x34)) {
            *(s16 *)((u8 *)arg0 + 0x36) = *(s16 *)((u8 *)arg0 + 0x34);
        }
        c1 = *(u8 *)((u8 *)arg0 + 0x39);
        c0 = *(u8 *)((u8 *)arg0 + 0x38);
        pos = *(s16 *)((u8 *)arg0 + 0x36);
        c2 = *(u8 *)((u8 *)arg0 + 0x3A);
        period = *(s16 *)((u8 *)arg0 + 0x34);
        dst = *(u8 **)((u8 *)arg0 + 0x4C);
        r = (u8)(lbl_80369108 + ((f32)pos * ((f32)c0 - lbl_80369108)) / (f32)period);
        g = (u8)(lbl_80369108 + ((f32)pos * ((f32)c1 - lbl_80369108)) / (f32)period);
        b = (u8)(lbl_80369108 + ((f32)pos * ((f32)c2 - lbl_80369108)) / (f32)period);
        dst[4] = r;
        dst[5] = g;
        dst[6] = b;
        sp8[0] = r;
        sp8[1] = g;
        sp8[2] = b;
        dst[7] = sp8[3];
        break;
    }
}

void fn_80056580(void) {
    void *fn_8000C0C0(void *);
    extern u8 lbl_80285B90[];
    void *temp_r3;

    temp_r3 = fn_8000C0C0(lbl_80285B90);
    if (temp_r3 != NULL) {
        *(s8 *)((u8 *)temp_r3 + 0x36) = -1;
    }
}

void fn_800565B8(void *arg0) {
    M2C_UNK fn_80067708(M2C_UNK, M2C_UNK, void (*)(void *), void *);
    void fn_8000C188(void *);
    void fn_800566D4(void *);
    extern f32 lbl_80369108;
    extern f32 lbl_80369130;
    extern f32 lbl_80369134;
    f32 temp_f0;

    fn_80067708(4, 4, fn_800566D4, arg0);
    temp_f0 = lbl_80369134 - (f32) (s8) M2C_FIELD(arg0, u8 *, 0x35);
    M2C_FIELD(arg0, s8 *, 0x34) = (s8) (lbl_80369108 + (lbl_80369130 - ((lbl_80369130 * (temp_f0 * temp_f0)) / (lbl_80369134 * lbl_80369134))));
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) (M2C_FIELD(arg0, u8 *, 0x35) + M2C_FIELD(arg0, u8 *, 0x36));
    if ((s8) M2C_FIELD(arg0, u8 *, 0x35) > 0xA) {
        M2C_FIELD(arg0, u8 *, 0x35) = 0xA;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x35) < 0) {
        M2C_FIELD(arg0, u8 *, 0x35) = 0;
        fn_8000C188(arg0);
    }
}

void fn_80056698(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_800566D4(void *arg0) {
    void fn_80066D00(s32);
    void fn_80067984(s32);
    void fn_80067EDC(s32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_802209FC(void);
    void fn_80220DEC(s32, s32, s32);
    void fn_8022124C(s32, s32, s32, s32);
    void fn_802212FC(s32, s32, s32, s32);
    void fn_80221BA8(void *, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void fn_802228D8(void *, s32, s32, s32, s32, s32, f32, f32, f32);
    void fn_80222C50(void *, s32);
    void fn_80222EB4(void);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    extern f32 lbl_80369108;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369138;
    extern f32 lbl_8036913C;
    u8 sp8[0x28];
    void *tex;
    u8 alpha;
    f32 fv1;
    f32 fu1;
    f32 fz1;
    f32 fzero;
    s32 endArg;

    tex = *(void **)((u8 *)arg0 + 0x30);
    if (tex != NULL) {
        alpha = *((u8 *)arg0 + 0x34);
        if (tex != NULL) {
            if (*((u8 *)arg0 + 0x37) == 0 && (s32)alpha > 0) {
                fn_80067EDC(0);
                fn_80222334(1);
                fn_80222370(4, 0, 1, 1, 0, 0, 2);
                fn_802240C8(1);
                fn_80223A5C(0, 0xF, 0xF, 0xF, 8);
                fn_80223AE4(0, 0, 0, 0, 1, 0);
                fn_80223AA0(0, 7, 7, 7, 5);
                fn_80223B4C(0, 0, 0, 0, 1, 0);
                fn_80220428(1);
                fn_80223F2C(0, 0, 0, 4);
                fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
                fn_80222644(sp8, tex, 0x260, 0x1C0, 4, 0, 0, 0);
                fn_802228D8(sp8, 1, 1, 0, 0, 0, lbl_80369108, lbl_80369108, lbl_80369108);
                fn_80222C50(sp8, 0);
                fn_802245D8(1, 4, 5, 7);
                fn_80224684(0, 3, 0);
                fn_8021FBB8();
                fn_8021F4E4(9, 1);
                fn_8021F4E4(0xB, 1);
                fn_8021F4E4(0xD, 1);
                fn_8021FBF0(0, 9, 1, 4, 0);
                fn_8021FBF0(0, 0xB, 1, 5, 0);
                fn_8021FBF0(0, 0xD, 1, 4, 0);
                fn_80220DEC(0x80, 0, 4);
                fzero = lbl_80369108;
                fz1 = lbl_80369138;
                endArg = -1;
                fu1 = lbl_8036912C;
                fv1 = lbl_8036913C;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fz1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fu1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fz1;
                *(volatile f32 *)0xCC008000 = fv1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fu1;
                *(volatile f32 *)0xCC008000 = fu1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fv1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fu1;
                fn_80066D00(endArg);
                fn_80067984(0);
            }
            fn_8022124C(0, 0, 0x260, 0x1C0);
            fn_802212FC(0x260, 0x1C0, 4, 0);
            fn_80221BA8(tex, 0);
            fn_802209FC();
            fn_80222EB4();
            *((u8 *)arg0 + 0x37) = 0;
        }
    }
}

void *fn_80056A04(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_800C4588(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80056A60(void *arg0) {
    void *fn_800C4638(s32, void *, s32);
    extern u8 lbl_8026AD80[];
    extern f32 lbl_80369108;
    extern f32 lbl_80369140;
    extern f32 lbl_80369144;
    u8 *p;
    f32 f0;
    f32 f1;

    p = arg0;
    *(void **)(p + 0x14) = fn_800C4638(0x80, lbl_8026AD80 + 0xA9, 0);
    f0 = lbl_80369108;
    f1 = lbl_80369140;
    *(f32 *)(p + 8) = f0;
    f0 = lbl_80369144;
    *(f32 *)(p + 0xC) = f1;
    *(f32 *)(p + 0x10) = f0;
    *(u8 *)(p + 3) = 0xFF;
    *(u8 *)(p + 0) = 0;
    *(u16 *)(p + 4) = 0x30;
    **(u8 **)(p + 0x14) = 0;
    return arg0;
}

void fn_80056AE0(void *arg0, u32 arg1) {
    M2C_UNK fn_80234450(s32);
    if (arg1 != 0U) {
        fn_80234450(M2C_FIELD(arg0, s32 *, 0x14));
    }
}

void fn_80056B0C(void *arg0) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(u8);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001003C(s16, s16, s32, s32, s32, void *, ...);
    s32 fn_80010770(u8 *, s32, f32);
    s32 fn_80010B78(u8 *, s32, f32);
    extern s32 lbl_803690D8;
    extern s32 lbl_803690DC;
    extern s32 lbl_803690E0;
    extern s32 lbl_803690E4;
    extern s32 lbl_803690E8;
    extern s32 lbl_803690EC;
    extern s32 lbl_803690F0;
    extern s32 lbl_803690F4;
    extern s32 lbl_803690F8;
    extern s32 lbl_803690FC;
    extern f32 lbl_80369108;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369138;
    extern s32 lbl_8036C41C;
    extern s32 lbl_8036C420;
    extern s32 lbl_8036C424;
    extern s32 lbl_8036C428;
    extern s32 lbl_8036C42C;
    extern s32 lbl_8036C430;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
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
    s32 temp_r30;
    s32 temp_r3_2;
    s32 temp_r5;
    s32 temp_r4;
    u8 *temp_r3;
    u8 temp_r0;

    fn_8000A258();
    fn_80009B8C(*(u8 *)((u8 *)arg0 + 3));
    fn_80009D74(lbl_80369108, *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C + *(f32 *)((u8 *)arg0 + 0x10), lbl_8036912C);
    fn_8000A174(0, 0x12);
    fn_8000A248();
    temp_r0 = *(u8 *)((u8 *)arg0 + 0);
    temp_r30 = (s16)(*(s16 *)((u8 *)arg0 + 4) / 3);
    switch ((s32)temp_r0) {
    case 0:
        fn_80007898(3);
        fn_80007838(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        sp38 = lbl_803690DC;
        sp3C = lbl_803690D8;
        sp40 = lbl_8036C420;
        sp44 = lbl_8036C41C;
        fn_800072B0(&sp44, &sp40, &sp3C, &sp38);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        temp_r30 = temp_r30 + temp_r30;
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_800076AC(0, 0, 0, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_80007898(3);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)*(s16 *)((u8 *)arg0 + 4), lbl_80369108, lbl_80369108);
        sp28 = lbl_8036C428;
        sp2C = lbl_8036C424;
        sp30 = lbl_803690E4;
        sp34 = lbl_803690E0;
        fn_800072B0(&sp34, &sp30, &sp2C, &sp28);
        fn_800075D8();
        fn_80007884();
        break;
    case 1:
        fn_80007898(3);
        fn_80007838(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        sp18 = lbl_803690EC;
        sp1C = lbl_803690E8;
        sp20 = lbl_8036C430;
        sp24 = lbl_8036C42C;
        fn_800072B0(&sp24, &sp20, &sp1C, &sp18);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)*(s16 *)((u8 *)arg0 + 4), lbl_80369108, lbl_80369108);
        fn_800076AC(0, 0, 0, 0xFF);
        fn_800075D8();
        fn_80007884();
        break;
    case 2:
        fn_80007898(1);
        fn_80007838(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108);
        temp_r30 = temp_r30 + temp_r30;
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_800076AC(0, 0, 0, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_80007898(3);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)*(s16 *)((u8 *)arg0 + 4), lbl_80369108, lbl_80369108);
        sp8 = lbl_803690FC;
        spC = lbl_803690F8;
        sp10 = lbl_803690F4;
        sp14 = lbl_803690F0;
        fn_800072B0(&sp14, &sp10, &spC, &sp8);
        fn_800075D8();
        fn_80007884();
        break;
    }
    temp_r3 = *(u8 **)((u8 *)arg0 + 0x14);
    if ((temp_r3 != NULL) && ((s8)*temp_r3 != 0)) {
        fn_8000A258();
        fn_80009D74(*(f32 *)((u8 *)arg0 + 8), *(f32 *)((u8 *)arg0 + 0xC), *(f32 *)((u8 *)arg0 + 0x10), lbl_8036912C);
        fn_8000A174(0, 0x13);
        fn_8000A248();
        temp_r30 = fn_80010B78(*(u8 **)((u8 *)arg0 + 0x14), -1, lbl_8036912C);
        temp_r3_2 = fn_80010770(*(u8 **)((u8 *)arg0 + 0x14), -1, lbl_8036912C);
        temp_r5 = 0x260 - temp_r30;
        temp_r4 = (u32)temp_r5 >> 0x1FU;
        temp_r3_2 = *(s16 *)((u8 *)arg0 + 4) - temp_r3_2;
        temp_r4 = temp_r4 + temp_r5;
        temp_r4 = temp_r4 >> 1;
        temp_r0 = (u32)temp_r3_2 >> 0x1FU;
        temp_r0 = temp_r0 + temp_r3_2;
        temp_r0 = (u8)(temp_r0 >> 1);
        fn_8001003C((s16)temp_r4, (s16)((s32)((((u32)temp_r3_2) >> 0x1FU) + temp_r3_2) >> 1), 1, 1, 0, *(u8 **)((u8 *)arg0 + 0x14), lbl_8036912C, lbl_80369108);
    }
    fn_80009B28();
}

void fn_80057020(void *arg0) {
    void fn_800075D8(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, u8, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80057AE0(void *);
    extern f32 lbl_80369108;
    extern f64 lbl_80369118;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369148;
    extern f32 lbl_8036914C;
    typedef u8 (*VFn)(void *);
    s32 temp_r25;
    s32 var_r27;
    s32 var_r28;
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r31;
    s32 temp_r4;
    void *temp_r3;

    (void)lbl_80369118;
    var_r31 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_r29 = (s32)*(f32 *)((u8 *)arg0 + 4);
    var_r28 = (s32)*(f32 *)((u8 *)arg0 + 8);
    if (*(void **)((u8 *)arg0 + 0x24) != NULL) {
        var_r28 += 8;
        var_r31 -= 0x10;
    }
    if (var_r31 < 0x10) {
        return;
    }
    fn_8000A258();
    fn_80009D74((f32)temp_r29, (f32)var_r28, lbl_8036912C + *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
    fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[5](arg0), 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, lbl_8036914C);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009D74((f32)temp_r29, (f32)(var_r28 + 8), lbl_8036912C + *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
    fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[6](arg0), 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, (f32)(var_r31 - 0x10));
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    temp_r30 = var_r28 + var_r31;
    fn_80009D74((f32)temp_r29, (f32)(temp_r30 - 8), lbl_8036912C + *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
    fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[7](arg0), 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, lbl_8036914C);
    fn_800075D8();
    fn_80007884();
    temp_r4 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_r25 = (var_r31 * *(s32 *)((u8 *)arg0 + 0x1C)) / temp_r4;
    var_r27 = (var_r31 * *(s32 *)((u8 *)arg0 + 0x18)) / temp_r4;
    if (temp_r25 + var_r27 > var_r31) {
        var_r27 = var_r31 - var_r27;
    }
    if (var_r27 < 0x10) {
        if (var_r27 <= 4) {
            var_r27 = 4;
        }
        fn_8000A258();
        fn_80009D74((f32)temp_r29, (f32)(var_r28 + temp_r25), *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[3](arg0), 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, (f32)var_r27);
        fn_800075D8();
        fn_80007884();
    } else {
        s32 mid;
        fn_8000A258();
        mid = var_r28 + temp_r25;
        fn_80009D74((f32)temp_r29, (f32)mid, *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[2](arg0), 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, lbl_8036914C);
        fn_800075D8();
        fn_80007884();
        fn_8000A258();
        fn_80009D74((f32)temp_r29, (f32)(mid + 8), *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[3](arg0), 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, (f32)(var_r27 - 0x10));
        fn_800075D8();
        fn_80007884();
        fn_8000A258();
        fn_80009D74((f32)temp_r29, (f32)(var_r27 + (mid - 8)), *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[4](arg0), 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, lbl_8036914C);
        fn_800075D8();
        fn_80007884();
    }
    temp_r3 = *(void **)((u8 *)arg0 + 0x24);
    if (temp_r3 != NULL) {
        if (*(s32 *)((u8 *)arg0 + 0x1C) <= 0) {
            *((u8 *)temp_r3 + 0x55) = 0;
        } else {
            *((u8 *)temp_r3 + 0x55) = 1;
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) + *(s32 *)((u8 *)arg0 + 0x18) >= *(s32 *)((u8 *)arg0 + 0x14)) {
            *((u8 *)*(void **)((u8 *)arg0 + 0x28) + 0x55) = 0;
        } else {
            *((u8 *)*(void **)((u8 *)arg0 + 0x28) + 0x55) = 1;
        }
        {
            void *b = *(void **)((u8 *)arg0 + 0x24);
            *(f32 *)((u8 *)b + 0x38) = (f32)(temp_r29 + 5);
            *(f32 *)((u8 *)b + 0x3C) = (f32)(var_r28 - 8);
            *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x24) + 0x40) = *(f32 *)((u8 *)arg0 + 0xC);
            fn_80057AE0(*(void **)((u8 *)arg0 + 0x24));
        }
        {
            void *b = *(void **)((u8 *)arg0 + 0x28);
            *(f32 *)((u8 *)b + 0x38) = (f32)(temp_r29 + 5);
            *(f32 *)((u8 *)b + 0x3C) = (f32)(temp_r30 + 8);
            *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x28) + 0x40) = *(f32 *)((u8 *)arg0 + 0xC);
            fn_80057AE0(*(void **)((u8 *)arg0 + 0x28));
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) < *(s32 *)((u8 *)arg0 + 0x20)) {
            void *b = *(void **)((u8 *)arg0 + 0x24);
            if (*((u8 *)b + 0x54) != 0) {
                *(s32 *)((u8 *)b + 0x4C) = 0x1E;
            } else {
                *(s32 *)((u8 *)b + 0x4C) = 1;
            }
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) > *(s32 *)((u8 *)arg0 + 0x20)) {
            void *b = *(void **)((u8 *)arg0 + 0x28);
            if (*((u8 *)b + 0x54) != 0) {
                *(s32 *)((u8 *)b + 0x4C) = 0x1E;
            } else {
                *(s32 *)((u8 *)b + 0x4C) = 1;
            }
        }
    }
    *(s32 *)((u8 *)arg0 + 0x20) = *(s32 *)((u8 *)arg0 + 0x1C);
}

void fn_800576D4(void *arg0, u8 arg1) {
    void fn_8006D8E8(void *);
    void fn_800C428C(void *);
    void *fn_800C42D8(s32);
    s32 fn_8006D948(void *);
    extern u8 lbl_8026AD80[];
    extern f32 lbl_80369108;
    void *temp;
    f32 f0;
    s32 zero;

    temp = *(void **)((u8 *)arg0 + 0x24);
    if (temp != NULL) {
        if (temp != NULL) {
            fn_8006D8E8(*(void **)((u8 *)temp + 0x30));
            fn_800C428C(temp);
        }
        *(void **)((u8 *)arg0 + 0x24) = NULL;
    }
    temp = *(void **)((u8 *)arg0 + 0x28);
    if (temp != NULL) {
        if (temp != NULL) {
            fn_8006D8E8(*(void **)((u8 *)temp + 0x30));
            fn_800C428C(temp);
        }
        *(void **)((u8 *)arg0 + 0x28) = NULL;
    }
    if (arg1 != 0) {
        temp = fn_800C42D8(0x58);
        if (temp != NULL) {
            *(s32 *)((u8 *)temp + 0x44) = 8;
            zero = 0;
            *(s32 *)((u8 *)temp + 0x48) = zero;
            *(s32 *)((u8 *)temp + 0x30) = fn_8006D948(lbl_8026AD80 + 0xBF);
            *(s32 *)((u8 *)temp + 0x4C) = zero;
            f0 = lbl_80369108;
            *(u8 *)((u8 *)temp + 0x55) = 1;
            *(u8 *)((u8 *)temp + 0x54) = 1;
            *(s32 *)((u8 *)temp + 0x50) = 0x30;
            *(f32 *)((u8 *)temp + 0x38) = f0;
            *(f32 *)((u8 *)temp + 0x3C) = f0;
            *(f32 *)((u8 *)temp + 0x40) = f0;
            *(u8 *)((u8 *)temp + 0x34) = zero;
        }
        *(void **)((u8 *)arg0 + 0x24) = temp;
        temp = fn_800C42D8(0x58);
        if (temp != NULL) {
            *(s32 *)((u8 *)temp + 0x44) = 4;
            zero = 0;
            *(s32 *)((u8 *)temp + 0x48) = zero;
            *(s32 *)((u8 *)temp + 0x30) = fn_8006D948(lbl_8026AD80 + 0xBF);
            *(s32 *)((u8 *)temp + 0x4C) = zero;
            f0 = lbl_80369108;
            *(u8 *)((u8 *)temp + 0x55) = 1;
            *(u8 *)((u8 *)temp + 0x54) = 1;
            *(s32 *)((u8 *)temp + 0x50) = 0x30;
            *(f32 *)((u8 *)temp + 0x38) = f0;
            *(f32 *)((u8 *)temp + 0x3C) = f0;
            *(f32 *)((u8 *)temp + 0x40) = f0;
            *(u8 *)((u8 *)temp + 0x34) = zero;
        }
        *(void **)((u8 *)arg0 + 0x28) = temp;
        *(u8 *)(*(u8 **)((u8 *)arg0 + 0x24) + 0x34) = 1;
        *(u8 *)(*(u8 **)((u8 *)arg0 + 0x28) + 0x34) = 1;
        *(u8 *)(*(u8 **)((u8 *)arg0 + 0x24) + 0x54) = 0;
        *(u8 *)(*(u8 **)((u8 *)arg0 + 0x28) + 0x54) = 0;
    }
}

void fn_80057860(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x18);
    if (var_r4 > temp_r0) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
}

void fn_80057880(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r4 > temp_r0) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4;
}

void fn_80057898(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}

void fn_800578A0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
}

void fn_800578A8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, f32 *, 4) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 8) = (f32) arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
}

void *fn_800578F0(void *arg0, s16 arg1) {
    void fn_8006D8E8(void *);
    void fn_800C428C(void *);
    extern u8 lbl_80285BF0[];
    void *temp;

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x2C) = lbl_80285BF0;
        fn_8006D8E8(*(void **)arg0);
        temp = *(void **)((u8 *)arg0 + 0x24);
        if (temp != NULL) {
            if (temp != NULL) {
                fn_8006D8E8(*(void **)((u8 *)temp + 0x30));
                fn_800C428C(temp);
            }
        }
        temp = *(void **)((u8 *)arg0 + 0x28);
        if (temp != NULL) {
            if (temp != NULL) {
                fn_8006D8E8(*(void **)((u8 *)temp + 0x30));
                fn_800C428C(temp);
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80057998(void *arg0) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026AD80[];
    extern u8 lbl_80285BF0[];
    extern f32 lbl_80369108;
    f32 f0;
    s32 zero;

    *(void **)((u8 *)arg0 + 0x2C) = lbl_80285BF0;
    *(s32 *)arg0 = fn_8006D948(lbl_8026AD80 + 0xAA);
    f0 = lbl_80369108;
    zero = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = zero;
    *(s32 *)((u8 *)arg0 + 0x18) = zero;
    *(s32 *)((u8 *)arg0 + 0x1C) = zero;
    *(s32 *)((u8 *)arg0 + 0x20) = zero;
    *(f32 *)((u8 *)arg0 + 4) = f0;
    *(f32 *)((u8 *)arg0 + 8) = f0;
    *(f32 *)((u8 *)arg0 + 0xC) = f0;
    *(s32 *)((u8 *)arg0 + 0x24) = zero;
    *(s32 *)((u8 *)arg0 + 0x28) = zero;
    return arg0;
}

void *fn_80057A10(void *arg0, s16 arg1) {
    M2C_UNK fn_8006D8E8(s32);
    M2C_UNK fn_800C428C(void *);
    if (arg0 != NULL) {
        fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x30));
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80057A64(void *arg0, s32 arg1) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026AD80[];
    extern f32 lbl_80369108;
    u8 *p = arg0;
    f32 f0;

    *(s32 *)(p + 0x44) = arg1;
    *(s32 *)(p + 0x48) = 0;
    *(s32 *)(p + 0x30) = fn_8006D948(lbl_8026AD80 + 0xBF);
    *(s32 *)(p + 0x4C) = 0;
    f0 = lbl_80369108;
    *(u8 *)(p + 0x55) = 1;
    *(u8 *)(p + 0x54) = 1;
    *(s32 *)(p + 0x50) = 0x30;
    *(f32 *)(p + 0x38) = f0;
    *(f32 *)(p + 0x3C) = f0;
    *(f32 *)(p + 0x40) = f0;
    *(u8 *)(p + 0x34) = 0;
    return arg0;
}

#pragma use_lmw_stmw on
void fn_80057AE0(void *arg0) {
    void fn_80007538(void);
    void fn_800075D8(void);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    extern f32 lbl_80369108;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369134;
    extern f32 lbl_80369150;
    extern f32 lbl_80369154;
    s32 var_r27;
    s32 var_r26;
    void *temp_r28;
    s32 temp_r31;
    s32 var_r30;
    s32 var_r29;
    s32 temp_r0;
    s32 temp_r3;
    f32 temp_f6;
    f32 temp_f0;
    f32 temp_f3;

    temp_r28 = arg0;
    *(s32 *)((u8 *)temp_r28 + 0x48) = *(s32 *)((u8 *)temp_r28 + 0x48) + 1;
    if (*(s32 *)((u8 *)temp_r28 + 0x4C) > 0) {
        *(s32 *)((u8 *)temp_r28 + 0x48) = *(s32 *)((u8 *)temp_r28 + 0x48) + 1;
        *(s32 *)((u8 *)temp_r28 + 0x4C) = *(s32 *)((u8 *)temp_r28 + 0x4C) - 1;
    }
    temp_r0 = *(s32 *)((u8 *)temp_r28 + 0x48);
    temp_r3 = *(s32 *)((u8 *)temp_r28 + 0x50);
    if (temp_r0 >= temp_r3) {
        *(s32 *)((u8 *)temp_r28 + 0x48) = temp_r0 - temp_r3;
    }
    temp_r31 = (s32)(lbl_80369108 + (((f32)*(s32 *)((u8 *)temp_r28 + 0x48) * lbl_80369150) / (f32)*(s32 *)((u8 *)temp_r28 + 0x50)));
    if (*(u8 *)((u8 *)temp_r28 + 0x55) != 0) {
        var_r30 = 0x10;
        var_r29 = 0x20;
        var_r27 = 0;
        if (*(u8 *)((u8 *)temp_r28 + 0x34) == 1) {
            var_r27 = 1;
            var_r30 = var_r30 / 2;
            var_r29 = var_r29 / 2;
        }
        fn_8000A258();
        fn_80009D74(*(f32 *)((u8 *)temp_r28 + 0x38), *(f32 *)((u8 *)temp_r28 + 0x3C), *(f32 *)((u8 *)temp_r28 + 0x40), lbl_8036912C);
        fn_80009F90(*(s32 *)((u8 *)temp_r28 + 0x30), var_r27, 0x11);
        fn_8000A248();
        var_r27 = (-var_r30) / 2;
        var_r26 = (-var_r29) / 2;
        if (*(u8 *)((u8 *)temp_r28 + 0x54) != 0) {
            temp_r0 = *(s32 *)((u8 *)temp_r28 + 0x4C);
            temp_r3 = *(s32 *)((u8 *)temp_r28 + 0x44);
            temp_f6 = lbl_80369154 * lbl_80369154;
            temp_f0 = lbl_80369154 - (f32)temp_r0;
            temp_f3 = lbl_80369134;
            temp_r3 = (s32)(lbl_80369108 + (temp_f3 - ((temp_f3 * (temp_f0 * temp_f0)) / temp_f6)));
            if (temp_r3 != 4) { /* WRONG - using adj */ }
            switch (*(s32 *)((u8 *)temp_r28 + 0x44)) {
            case 8:
                var_r27 -= temp_r3;
                break;
            case 4:
                var_r27 += temp_r3;
                break;
            case 1:
                var_r27 -= temp_r3;
                break;
            case 2:
                var_r27 += temp_r3;
                break;
            }
        }
        fn_80007898(2);
        switch (*(s32 *)((u8 *)temp_r28 + 0x44)) {
        case 8:
        case 4:
            fn_800077D8((f32)var_r26, (f32)var_r27, (f32)var_r29, (f32)var_r30);
            break;
        default:
            fn_800077D8((f32)var_r27, (f32)var_r26, (f32)var_r30, (f32)var_r29);
            break;
        }
        fn_800077B0((f32)(temp_r31 * var_r30), lbl_80369108, (f32)var_r30, (f32)var_r29);
        fn_800075D8();
        switch (*(s32 *)((u8 *)temp_r28 + 0x44)) {
        case 4:
            fn_80007538();
        case 2:
            fn_80007538();
        case 8:
            fn_80007538();
            break;
        }
        fn_80007884();
    }
}
#pragma use_lmw_stmw reset
void fn_80057E54(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x34) = arg1;
}

void fn_80057E5C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x54) = arg1;
}

void fn_80057E64(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x55) = arg1;
}

void fn_80057E6C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x54) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0x1E;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
}

void fn_80057E90(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x40) = farg0;
}

void fn_80057E98(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) arg2;
}

extern u8 lbl_80285B6C[16];
void fn_80057EDC(void) {
    fn_8000BF00(&lbl_80285B6C);
}

s32 fn_80057F04(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_8006135C(s32, s32);
    void fn_800056CC(const char *, ...);
    void fn_800056A0(s32);
    void fn_8000A388(void *, void *, s32);
    void *fn_8000CAF0(void *, s32);
    void fn_80058A0C(void *, s32, s32, s32);
    void fn_80057FD4(void);
    extern u8 lbl_8026AD80[];
    extern u8 lbl_80285B6C[16];
    void *temp_r31;

    if (fn_8006135C(arg0, arg1) < 0 || fn_8006135C(arg0, arg2) < 0) {
        fn_800056CC((const char *)lbl_8026AD80 + 0xD0, arg1, arg2);
        fn_800056A0(0);
    }
    fn_8000A388(lbl_80285B6C, fn_80057FD4, arg0);
    temp_r31 = fn_8000CAF0(lbl_80285B6C, arg3);
    fn_80058A0C(temp_r31, arg0, arg1, arg2);
    return (s32)temp_r31;
}

void fn_80057FD4(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) == arg1) {
        fn_8000BF00(&lbl_80285B6C);
    }
}

void fn_80058008(void *arg0) {
    M2C_UNK fn_8000C60C(s32);
    if (M2C_FIELD(arg0, u16 *, 0x54) & 4) {
        fn_8005EA14(M2C_FIELD(arg0, s32 *, 0x34));
    }
    fn_8000C60C(M2C_FIELD(arg0, s32 *, 0x30));
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x40));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

void fn_8005806C(void *arg0) {
    extern f32 lbl_80369108;
    extern f32 lbl_80369158;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    u32 temp_r3;

    M2C_FIELD(arg0, u8 *, 0x53) = (u8) (M2C_FIELD(arg0, u8 *, 0x53) + 1);
    if ((s32) M2C_FIELD(arg0, u8 *, 0x53) >= 0x14) {
        M2C_FIELD(arg0, u8 *, 0x53) = 0x14U;
        fn_8000C188();
    }
    temp_f6 = lbl_80369158 * lbl_80369158;
    temp_f0 = lbl_80369158 - (f32) M2C_FIELD(arg0, u8 *, 0x53);
    temp_f4 = (f32) M2C_FIELD(arg0, u8 *, 0x3F);
    temp_f3 = lbl_80369108 - temp_f4;
    M2C_FIELD(arg0, s8 *, 0x3B) = (s8) (temp_f4 + (temp_f3 - ((temp_f3 * (temp_f0 * temp_f0)) / temp_f6)));
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x4C) * M2C_FIELD(arg0, u8 *, 0x51);
    temp_f3_2 = lbl_80369158 - (f32) M2C_FIELD(arg0, u8 *, 0x53);
    temp_f4_2 = (f32) temp_r3;
    temp_f2 = (f32) ((s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1) - temp_f4_2;
    M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (temp_f4_2 + (temp_f2 - ((temp_f2 * (temp_f3_2 * temp_f3_2)) / temp_f6)));
}

#pragma use_lmw_stmw on
void fn_800581A4(void *arg0) {
    typedef struct { f32 v[9]; u8 b[4]; } Node40;
    void fn_8005EB5C(void *, void *);
    void fn_8005E644(void *);
    extern f32 lbl_80369104;
    extern f32 lbl_80369108;
    extern f64 lbl_80369118;
    extern f32 lbl_8036912C;
    extern f32 lbl_8036915C;
    extern f64 lbl_80369160;
    extern f32 lbl_80369168;
    extern u32 lbl_803690D4;
    Node40 n0, n1, n2, n3;
    u8 t;
    u8 alpha;
    u32 col;
    u32 col2;
    s32 i, j, k;
    s32 idx;
    f32 *dst;
    f32 *src;
    f32 f12, f9, f5, f6, f11, f7, f8, f10;
    f32 a, b, c;
    f32 scale;
    s32 count;
    u16 n48, n4e, n4c, n4a;
    u8 n51;
    Node40 *base;
    f32 *out;

    i = 0;
    while (i < (s32)M2C_FIELD(arg0, u16 *, 0x4C)) {
        base = (Node40 *)M2C_FIELD(arg0, void **, 0x40);
        n48 = M2C_FIELD(arg0, u16 *, 0x48);
        n4e = M2C_FIELD(arg0, u16 *, 0x4E);
        n4c = M2C_FIELD(arg0, u16 *, 0x4C);
        if (i > 0) {
            n0 = base[(n48 + i - 1) % n4e];
        } else {
            n0 = base[(n48 + i) % n4e];
        }
        n1 = base[(n48 + i) % n4e];
        if (i < (s32)(n4c - 1)) {
            n2 = base[(n48 + i + 1) % n4e];
        } else {
            n2 = n1;
        }
        if (i < (s32)(n4c - 2)) {
            n3 = base[(n48 + i + 2) % n4e];
        } else {
            n3 = n2;
        }
        n51 = M2C_FIELD(arg0, u8 *, 0x51);
        for (t = 0; t < n51; t++) {
            f12 = (lbl_8036912C + (f32)t) / (f32)n51;
            idx = (t + i * n51) * 0x28;
            f9 = lbl_80369104 * f12;
            f5 = f12 - lbl_8036912C;
            f6 = lbl_8036912C - f12;
            f11 = lbl_8036915C - f9;
            f7 = f12 * f12;
            f6 = f6 * f6;
            f8 = f5 * f12;
            f10 = lbl_8036912C + f9;
            f9 = f5 * f5;
            f5 = f11 * f7;
            f7 = f12 * f6;
            f6 = f10 * f9;
            f8 = f12 * f8;
            out = (f32 *)((u8 *)M2C_FIELD(arg0, void **, 0x44) + idx);
            src = &n0.v[0];
            for (k = 0; k < 2; k++) {
                a = f5 * src[20] + f6 * src[10] + (f32)(f7 * (lbl_80369160 * (f64)(src[20] - src[0]))) + (f32)(f8 * (lbl_80369160 * (f64)(src[30] - src[10])));
                b = f5 * src[21] + f6 * src[11] + (f32)(f7 * (lbl_80369160 * (f64)(src[21] - src[1]))) + (f32)(f8 * (lbl_80369160 * (f64)(src[31] - src[11])));
                c = f5 * src[22] + f6 * src[12] + (f32)(f7 * (lbl_80369160 * (f64)(src[22] - src[2]))) + (f32)(f8 * (lbl_80369160 * (f64)(src[32] - src[12])));
                out[0] = a;
                out[1] = b;
                out[2] = c;
                src += 3;
                out = (f32 *)((u8 *)out + 0xC);
            }
        }
        i++;
    }
    n51 = M2C_FIELD(arg0, u8 *, 0x51);
    n4c = M2C_FIELD(arg0, u16 *, 0x4C);
    n4a = M2C_FIELD(arg0, u16 *, 0x4A);
    scale = (f32)(M2C_FIELD(arg0, u8 *, 0x3B) * 0x60 / 255) - lbl_80369108;
    count = n4c * n51 - n4a;
    for (i = 0; i < (s32)n4a; i++) {
        idx = (i + count) * 0x28;
        alpha = (u8)(lbl_80369108 + (f32)i * scale / (f32)(n51 - 1));
        *((u8 *)M2C_FIELD(arg0, void **, 0x44) + idx + 0x24) = alpha;
        dst = (f32 *)((u8 *)M2C_FIELD(arg0, void **, 0x44) + idx);
        dst[6] = dst[0] + (lbl_80369168 * (dst[3] - dst[0])) / lbl_8036912C;
        dst[7] = dst[1] + (lbl_80369168 * (dst[4] - dst[1])) / lbl_8036912C;
        dst[8] = dst[2] + (lbl_80369168 * (dst[5] - dst[2])) / lbl_8036912C;
    }
    if (M2C_FIELD(arg0, u16 *, 0x54) & 4) {
        col = lbl_803690D4;
        ((u8 *)&col)[3] = (u8)(M2C_FIELD(arg0, u8 *, 0x3B) >> 1);
        col2 = col;
        fn_8005EB5C(M2C_FIELD(arg0, void **, 0x34), &col2);
        fn_8005E644(M2C_FIELD(arg0, void **, 0x34));
    }
}
#pragma use_lmw_stmw reset

void fn_800588EC(s32 arg0) {
    void fn_8000C070(s32, s32);
    fn_8000C070(arg0, 0);
}

void fn_80058910(void *arg0, u8 arg1) {
    M2C_UNK fn_8005EA14(s32);
    M2C_UNK fn_8005EB80(s32, M2C_UNK);
    if (arg1 != 0) {
        fn_8005EB80(M2C_FIELD(arg0, s32 *, 0x34), 6);
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) | 4);
        return;
    }
    fn_8005EA14(M2C_FIELD(arg0, s32 *, 0x34));
    M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) & 0xFFFFFFFB);
}

#pragma scheduling off
void fn_80058970(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x38) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x39) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) M2C_FIELD(arg0, u8 *, 0x38);
    M2C_FIELD(arg0, u8 *, 0x3D) = (u8) M2C_FIELD(arg0, u8 *, 0x39);
    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) M2C_FIELD(arg0, u8 *, 0x3A);
    M2C_FIELD(arg0, u8 *, 0x3F) = (u8) M2C_FIELD(arg0, u8 *, 0x3B);
    if (((u8) M2C_FIELD(arg1, u8 *, 0) < 0x80U) && ((u8) M2C_FIELD(arg1, u8 *, 1) < 0x80U) && ((u8) M2C_FIELD(arg1, u8 *, 2) < 0x80U)) {
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) & 0xFFFE);
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) | 2);
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) & 0xFFFFFFFD);
    M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) | 1);
}
#pragma scheduling reset
void fn_80058A0C(void* arg0, s32 arg1, s32 arg2, s32 arg3) {
    // Just setting the first field to make sure we have a valid compile
    *(u16*)((char*)arg0 + 0x34) = (u16)arg1;
}

void fn_8005902C(s32 arg0, s16 arg1) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80285B34[];
    void *temp;

    temp = fn_8000CAA0(lbl_80285B34, arg0);
    *(s16 *)((u8 *)temp + 0x32) = arg1;
}

void fn_8005906C(void *arg0) {
    M2C_UNK fn_8000C188();
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) {
        fn_8000C188();
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) (M2C_FIELD(arg0, s16 *, 0x30) + 1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x30) == (s16) M2C_FIELD(arg0, s16 *, 0x32)) {
        fn_8000C188();
    }
}

void fn_800590CC(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
}

void fn_800590D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80285B08[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80285B08, arg3);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg1;
    *(s32 *)((u8 *)temp_r3 + 0x38) = arg2;
}

void fn_80059138(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80285B08[];
    u32 var_r6;
    void *temp_r3;

    var_r6 = arg3;
    if (var_r6 == 0) {
        var_r6 = 3;
    }
    temp_r3 = fn_8000CAF0(lbl_80285B08, var_r6);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg1;
    *(s32 *)((u8 *)temp_r3 + 0x38) = arg2;
}

void fn_800591A0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x30)(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_800591CC(void *arg0) {
    void fn_8000C070(void *, s32);

    *(s32 *)((u8 *)arg0 + 0x38) = *(s32 *)((u8 *)arg0 + 0x38) - 1;
    if (*(s32 *)((u8 *)arg0 + 0x38) <= 0) {
        fn_8000C070(arg0, 0x63);
    }
}

void fn_80059208(s32 arg0, s32 arg1) {
    extern u8 lbl_80285AF0[];
    void *fn_8000CAF0(u8 *, s32);
    s32 *obj;
    obj = (s32 *)fn_8000CAF0(lbl_80285AF0, arg1);
    obj[0x30 / 4] = arg0;
}

void fn_80059240(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x30)(M2C_FIELD(arg0, s32 *, 0x18));
}

void fn_8005926C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 var_r27;
    s32 var_r28;
    
    var_r27 = arg7;
    if (var_r27 == 0) {
        fn_80007898(1);
        return;
    }
    var_r28 = 0;
loop_4:
    if (var_r27 != 0) {
        fn_80007898(1);
        var_r28 -= arg6;
        var_r27 = (s32) (var_r27 / 10);
        goto loop_4;
    }
}

f32 fn_80059440(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f64 fn_80237E90(f32);
    extern f32 lbl_80369108;
    extern f32 lbl_8036916C;
    extern f32 lbl_80369170;
    extern f32 lbl_80369174;
    extern f32 lbl_80369178;
    extern f32 lbl_8036917C;
    f32 dx;
    f32 dy;
    f32 ang;
    f32 c;

    dx = farg2 - farg0;
    dy = farg3 - farg1;
    if ((dx < lbl_8036916C) && (dx > lbl_80369170)) {
        if (dy > lbl_80369108) {
            return lbl_80369108;
        }
        return lbl_80369174;
    }
    ang = (f32)fn_80237E90(dx / dy);
    ang = lbl_80369178 * ang;
    if (dy < lbl_80369108) {
        ang += lbl_80369174;
    }
    c = lbl_8036917C;
    return ang - c * (f32)(s32)(ang / c);
}

f32 fn_80059500(f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4)
{
  extern f32 lbl_80369104;
  extern f32 lbl_8036912C;
  extern f32 lbl_8036915C;
  extern f64 lbl_80369160;
  f32 temp_f10;
  f32 temp_f12;
  f32 temp_f6;
  temp_f12 = lbl_80369104 * farg4;
  temp_f10 = farg4 - lbl_8036912C;
  temp_f6 = lbl_8036912C - farg4;
  return (f32) ((((f64) (farg4 * (temp_f10 * farg4))) * (lbl_80369160 * ((f64) (farg3 - farg1)))) + ((((f64) (farg4 * (temp_f6 * temp_f6))) * (lbl_80369160 * ((f64) (farg2 - farg0)))) + ((f64) ((((lbl_8036912C + temp_f12) * (temp_f10 * temp_f10)) * farg1) + (((lbl_8036915C - (lbl_80369104 * farg4)) * (farg4 * farg4)) * farg2)))));
}

#pragma use_lmw_stmw on
void fn_8005956C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0) {
    void fn_80059C2C(s32, s32, s32, s32, s32);
    void fn_80066D00(s32);
    void fn_80201FC4(void *);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222644(void *, s32, s32, s32, s32, s32, s32, s32);
    void fn_802228D8(void *, s32, s32, s32, s32, s32, f32, f32, f32);
    void fn_80222C50(void *, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    extern f32 lbl_80369108;
    extern f64 lbl_80369118;
    extern f32 lbl_80369128;
    extern f32 lbl_8036912C;

    u8 sp58[0x30];
    u8 sp28[0x30];
    u8 sp8[0x20];
    f32 scale;
    f32 fz;
    f32 f0;
    f32 f1;
    s32 x1;
    s32 y1;
    s32 a0;
    s32 a1;
    s32 a2;
    s32 a3;
    s32 a4;
    s32 a6;
    void *p;
    s32 t;

    fz = farg0;
    a4 = arg4;
    a0 = arg0;
    a1 = arg1;
    a2 = arg2;
    a3 = arg3;
    a6 = arg6;

    fn_80059C2C(arg0, arg1, arg2, arg3, arg5);
    p = sp8;
    t = a6;
    fn_80222644(p, t, a2 & 0xFFFF, a3 & 0xFFFF, 0x11, 0, 0, 0);
    f0 = lbl_80369108;
    fn_802228D8(sp8, 1, 1, 0, 0, 0, f0, f0, f0);
    fn_80222C50(sp8, 0);
    fn_80222C50(sp8, 1);
    fn_80201FC4(sp58);
    scale = lbl_80369128 * (f32)a4;
    *(f32 *)(sp58 + 0xC) = scale / (f32)a2;
    fn_80201FC4(sp28);
    *(f32 *)(sp28 + 0x1C) = scale / (f32)a3;
    fn_80220428(2);
    fn_802240C8(2);
    fn_80222334(1);
    fn_80222370(4, 0, 1, 1, 0, 0, 2);
    fn_80223F2C(0, 0, 0, 4);
    fn_80223A5C(0, 0xF, 0xF, 0xF, 0xF);
    fn_80223AE4(0, 0, 0, 0, 1, 0);
    fn_80223AA0(0, 4, 7, 7, 7);
    fn_80223B4C(0, 0, 0, 0, 0, 0);
    fn_80223F2C(1, 1, 1, 0xFF);
    fn_80223A5C(1, 0xF, 0xF, 0xF, 0);
    fn_80223AE4(1, 0, 0, 0, 1, 0);
    fn_80223AA0(1, 4, 7, 7, 0);
    fn_80223B4C(1, 1, 0, 0, 0, 0);
    fn_80224E50(sp58, 0x1E, 1);
    fn_80224E50(sp28, 0x21, 1);
    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021F4E4(0xD, 1);
    fn_8021FBF0(0, 9, 1, 4, 0);
    fn_8021FBF0(0, 0xD, 1, 4, 0);
    fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
    fn_802201A8(1, 1, 4, 0x21, 0, 0x7D);
    fn_80223E5C(6, 1, 0, 3, 0xFF);
    fn_80224684(0, 3, 0);
    fn_802245D8(1, 6, 7, 0);
    fn_80220DEC(0x80, 0, 4);

    x1 = a0 + a2;
    y1 = a1 + a3;
    (void)lbl_80369118;
    f0 = lbl_80369108;
    f1 = lbl_8036912C;

    *(volatile f32 *)0xCC008000 = (f32)a0;
    *(volatile f32 *)0xCC008000 = (f32)a1;
    *(volatile f32 *)0xCC008000 = fz;
    *(volatile f32 *)0xCC008000 = f0;
    *(volatile f32 *)0xCC008000 = f0;

    *(volatile f32 *)0xCC008000 = (f32)x1;
    *(volatile f32 *)0xCC008000 = (f32)a1;
    *(volatile f32 *)0xCC008000 = fz;
    *(volatile f32 *)0xCC008000 = f1;
    *(volatile f32 *)0xCC008000 = f0;

    *(volatile f32 *)0xCC008000 = (f32)x1;
    *(volatile f32 *)0xCC008000 = (f32)y1;
    *(volatile f32 *)0xCC008000 = fz;
    *(volatile f32 *)0xCC008000 = f1;
    *(volatile f32 *)0xCC008000 = f1;

    *(volatile f32 *)0xCC008000 = (f32)a0;
    *(volatile f32 *)0xCC008000 = (f32)y1;
    *(volatile f32 *)0xCC008000 = fz;
    *(volatile f32 *)0xCC008000 = f0;
    *(volatile f32 *)0xCC008000 = f1;

    fn_80066D00(-1);
}
void fn_800599D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_8022124C(s32, s32, s32, s32);
    void fn_802212FC(s32, s32, s32, s32);
    void fn_80221BA8(s32, s32);
    void fn_802209FC(void);
    void fn_80222EB4(void);
    s32 a2;
    s32 a3;
    s32 a4;

    a4 = arg4;
    a3 = arg3;
    a2 = arg2;
    fn_8022124C(arg0 & 0xFFFF, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3 & 0xFFFF);
    fn_802212FC((u16)a2, (u16)a3, 0x27, 0);
    fn_80221BA8(a4, 0);
    fn_802209FC();
    fn_80222EB4();
}

void fn_80059A4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r3;
    f32 temp_f1;
    f32 temp_f2;

    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021FBF0(0, 9, 1, 4, 0);
    fn_80220428(0);
    fn_80222334(1);
    fn_80222370(4, 0, 1, 1, 0, 0, 2);
    fn_802240C8(1);
    fn_80223F2C(0, 0xFF, 0xFF, 4);
    fn_802239D0(0, 4);
    fn_80224684(0, 3, 0);
    fn_802245D8(1, 0, 7, 0);
    fn_80220DEC(0x80, 0, 4);

    temp_r0 = arg0 + arg2;
    temp_r3 = arg1 + arg3;

    *(f32 *)0xCC008000 = (f32) arg0;
    *(f32 *)0xCC008000 = (f32) arg1;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = (f32) temp_r0;
    *(f32 *)0xCC008000 = (f32) arg1;

    temp_f2 = (f32) temp_r0;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = temp_f2;
    *(f32 *)0xCC008000 = (f32) temp_r3;

    temp_f1 = (f32) arg0;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = temp_f1;
    *(f32 *)0xCC008000 = (f32) temp_r3;

    *(f32 *)0xCC008000 = 0.0f;

    fn_80066D00(-1);
}

f32 fn_80059EB8(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = arg0 >> 1;
    temp_r0 = arg1 % arg0;
    if (temp_r0 < temp_r5) {
        return farg0 + (((f32) temp_r0 * (farg1 - farg0)) / (f32) temp_r5);
    }
    return farg1 + (((f32) (temp_r0 - temp_r5) * (farg0 - farg1)) / (f32) temp_r5);
}

f32 fn_80059F64(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    return farg0 + ((farg3 * (farg1 - farg0)) / farg2);
}

f32 fn_80059F78(s32 n, f32 a, f32 b, f32 c, f32 d) {
f32 diff = b-a;
f32 x = d;
f32 y = c;
s32 i;
for(i=1;i<n;i++) { x *= d; y *= c; }
return a + diff*x/y;
}

f32 fn_8005A028(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f4;
    f32 var_f5;
    s32 temp_r4;
    s32 var_ctr_2;
    s32 var_r5;
    u32 var_ctr;

    temp_f0 = farg2 - farg3;
    var_f5 = farg2;
    var_r5 = 1;
    temp_f2 = farg1 - farg0;
    var_f4 = temp_f0;
    if (arg0 > 1) {
        temp_r4 = arg0 - 8;
        if ((s32) (arg0 - 1) > 8) {
            var_ctr = (u32) (temp_r4 + 6) >> 3U;
            if (temp_r4 > 1) {
                do {
                    var_r5 += 8;
                    var_f4 = var_f4 * temp_f0 * temp_f0 * temp_f0 * temp_f0 * temp_f0 * temp_f0 * temp_f0 * temp_f0;
                    var_f5 = var_f5 * farg2 * farg2 * farg2 * farg2 * farg2 * farg2 * farg2 * farg2;
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_ctr_2 = arg0 - var_r5;
        if (var_r5 < arg0) {
            do {
                var_f4 *= temp_f0;
                var_f5 *= farg2;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    return farg0 + (temp_f2 - ((temp_f2 * var_f4) / var_f5));
}

void fn_8005A1E8(void *arg0, f32 *arg1, f32 *arg2) {
void *fn_80068548(void);
void fn_80225034(f32 *);
void fn_80224AD8(void *, f32 *, f32 *, f32 *, f32 *, f32 *, f32, f32, f32);
extern f32 lbl_80369108;
f32 vals[7]; f32 sp8[6];
if(arg0==NULL) arg0=fn_80068548();
vals[0]=lbl_80369108;
vals[1]=*(f32 *)((u8 *)arg0+36);
vals[2]=*(f32 *)((u8 *)arg0+44);
vals[3]=*(f32 *)((u8 *)arg0+56);
vals[4]=*(f32 *)((u8 *)arg0+60);
vals[5]=*(f32 *)((u8 *)arg0+76);
vals[6]=*(f32 *)((u8 *)arg0+80);
fn_80225034(sp8);
fn_80224AD8((u8 *)arg0+0xA4,vals,sp8,arg2,arg2+1,arg2+2,arg1[0],arg1[1],arg1[2]);
}

#include "global.h"
#include "structs.h"

extern u16 lbl_80285BB0[16];
