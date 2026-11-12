/* Functions from 0x80103748 to 0x80105504, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
#include "unit.h"

extern u32 lbl_802A66D8[];
extern f64 lbl_8036A100;
extern f32 lbl_8036A0F8;
extern u16 lbl_80366E80;

void fn_80105D4C(void *, u8);

s32 fn_80103748(void) {
    return 0x21;
}

void *fn_80103750(void) {
    extern u16 lbl_802734D0[29];
    return &lbl_802734D0[0x56/2];
}

s32 fn_80103760(void *arg0, s32 arg1) {
    void fn_80016358(void *);
    void fn_80024398(void *, s32, s32);
    extern u8 lbl_803679B4[8];

    fn_80016358(arg0);
    fn_80024398(lbl_803679B4, arg1, 0);
    return 4;
}

void *fn_801037A0(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0xa3;
}

s32 fn_801037B0(void) {
    void fn_80105D4C(void *, u8);
    extern u8 lbl_80330708[];
    void *p;
    s32 i;

    p = lbl_80330708 + 0x74;
    i = 0;
    do {
        fn_80105D4C(p, (u8)i);
        i += 1;
    } while (i < 0x40);
    return 6;
}

void *fn_80103808(void) {
    extern u16 lbl_802734D0[];
    return &lbl_802734D0[0xB8 / 2];
}

s32 fn_80103818(void) {
    return 0;
}

s32 fn_80103820(void) {
    s32 fn_8000BCA4(void *);
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    M2C_UNK fn_800A8400();
    extern M2C_UNK lbl_802734D0;
    extern M2C_UNK lbl_802845E8;
    extern M2C_UNK lbl_8028EAD8;
    extern M2C_UNK lbl_8028ED04;
    extern M2C_UNK lbl_8028ED80;
    extern M2C_UNK lbl_8028EDD4;
    extern M2C_UNK lbl_8028EE28;
    extern u8 lbl_80367964;
    extern M2C_UNK *lbl_80367968;
    extern u8 lbl_8036796C;
    extern M2C_UNK *lbl_80367970;
    extern u8 lbl_80367974;
    extern M2C_UNK *lbl_80367978;
    extern u8 lbl_8036797C;
    extern M2C_UNK lbl_80367980;
    s32 temp_r31;

    temp_r31 = fn_8000BCA4(&lbl_802734D0 + 0xC4);
    fn_800A8400();
    fn_8000C070(temp_r31, 0);
    if ((s8) lbl_80367964 == 0) {
        lbl_80367964 = 1;
        lbl_80367968 = &lbl_8028EE28;
    }
    if ((s8) lbl_8036796C == 0) {
        lbl_8036796C = 1;
        lbl_80367970 = &lbl_8028EDD4;
    }
    if ((s8) lbl_80367974 == 0) {
        lbl_80367974 = 1;
        lbl_80367978 = &lbl_8028ED80;
    }
    if ((s8) lbl_8036797C == 0) {
        M2C_FIELD(&lbl_80367980, M2C_UNK **, 4) = &lbl_802845E8;
        M2C_FIELD(&lbl_80367980, M2C_UNK **, 0) = &lbl_8028EAD8;
        M2C_FIELD(&lbl_80367980, M2C_UNK **, 4) = &lbl_8028ED04;
        lbl_8036797C = 1;
    }
    fn_80024398(&lbl_80367980, temp_r31, 0);
    return 6;
}

s32 fn_80103918(void) {
    return 0x20;
}

s32 fn_80103920(void) {
    return 0x108;
}

s32 fn_80103928(void) {
    return 0x20;
}

s32 fn_80103930(void) {
    return 0xAC;
}

s32 fn_80103938(void) {
    return 0xA0;
}

void *fn_80103940(void) {
    extern char lbl_802734D0[];
    return &lbl_802734D0[0xCF];
}

s32 fn_80103950(void) {
    return 0;
}

void *fn_80103958(void) {
    extern u16 lbl_802734D0[];
    return &lbl_802734D0[0xF4 / 2];
}

s32 fn_80103968(void) {
    return 0;
}

void *fn_80103970(void) {
    extern char lbl_802734D0[];
    return &lbl_802734D0[0x119];
}

s32 fn_80103980(void) {
    return 0;
}

void *fn_80103988(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x138;
}

s32 fn_80103998(void) {
    return 0;
}

s32 fn_801039A0(void *, void *, void *arg2) {
    s32 fn_8000BCA4(void *);
    void fn_8000C070(s32, s32);
    void fn_800A8400(void);
    void fn_80168E90(s32);
    extern u8 lbl_802734D0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    s32 temp_r31;
    u8 *temp_r5;
    u8 *table;
    u8 *dst;
    u8 *str;
    f32 f1;
    f32 f0;

    if ((u8)M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        return 0x10;
    }
    table = lbl_802CA518;
    dst = lbl_802EF4C8;
    f1 = *(f32 *)(lbl_80330708 + 0x534);
    str = lbl_802734D0;
    f0 = *(f32 *)(lbl_80330708 + 0x538);
    temp_r5 = table + (s8)(s32)f1 + (((s32)(s8)(s32)f0) << 6);
    dst[0x14] = temp_r5[0xD];
    temp_r31 = fn_8000BCA4(str + 0xC4);
    fn_800A8400();
    fn_8000C070(temp_r31, 0);
    fn_80168E90(temp_r31);
    return 6;
}

void *fn_80103A5C(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x142;
}

s32 fn_80103A6C(void) {
    return 0;
}

s32 fn_80103A74(void) {
    s32 fn_8000BCA4(void *);
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    M2C_UNK fn_800A8400();
    M2C_UNK fn_800C93EC(M2C_UNK *);
    M2C_UNK fn_800C992C(M2C_UNK *, void *, s32);
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800C9ABC(M2C_UNK *, void *, M2C_UNK *);
    M2C_UNK fn_801EAABC(M2C_UNK, s32);
    s32 strlen(void *);
    extern u8 lbl_802734D0[];
    extern u8 lbl_80330708[];

    s32 temp_r31;
    M2C_UNK spC;
    M2C_UNK sp8;

    temp_r31 = fn_8000BCA4((char *) &lbl_802734D0 + 0xC4);
    fn_800C9ABC(&spC, lbl_80330708 + 0x504, &sp8);
    fn_800C992C(&spC, &lbl_802734D0[0x157], strlen((u8 *)lbl_802734D0 + 0x157));
    fn_800A8400();
    fn_8000C070(temp_r31, 0);
    fn_801EAABC(fn_800C93EC(&spC), temp_r31);
    fn_800C9A60(&spC, -1);
    return 6;
}

void *fn_80103B20(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x161;
}

s32 fn_80103B30(void) {
    return 0;
}

s32 fn_80103B38(void) {
    s32 fn_8000BCA4(void *);
    void fn_800A8400(void);
    void fn_8000C070(s32, s32);
    void fn_8011AC78(s32);
    extern char lbl_802734D0[];

    s32 temp_r31 = fn_8000BCA4(lbl_802734D0 + 0xC4);
    fn_800A8400();
    fn_8000C070(temp_r31, 0);
    fn_8011AC78(temp_r31);
    return 6;
}

void *fn_80103B8C(void) {
    extern u16 lbl_802734D0[];
    return (char *) &lbl_802734D0 + 0x167;
}

s32 fn_80103B9C(void) {
    return 0;
}

s32 fn_80103BA4(void) {
    s32 fn_8000BCA4(void *);
    void fn_8000C070(s32, s32);
    void fn_8000CAA0(void *, s32);
    void fn_800A8400(void);
    extern char lbl_802734D0[];
    extern struct { u8 pad[0x100]; } lbl_8028EB50;
    s32 temp_r31;

    temp_r31 = fn_8000BCA4(lbl_802734D0 + 0xC4);
    if (temp_r31 != 0) {
        fn_800A8400();
        fn_8000C070(temp_r31, 0);
    }
    fn_8000CAA0(&lbl_8028EB50, temp_r31);
    return 6;
}

void *fn_80103C04(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x17b;
}

s32 fn_80103C14(void) {
    return 0;
}

s32 fn_80103C1C(void) {
    s32 fn_8000BCA4(void *);
    void fn_8000C070(s32, s32);
    void fn_8000CAA0(void *, s32);
    void fn_800A8400(void);
    extern char lbl_802734D0[];
    extern struct { u8 pad[0x100]; } lbl_8028EB10;
    s32 temp_r31;

    temp_r31 = fn_8000BCA4(lbl_802734D0 + 0xC4);
    if (temp_r31 != 0) {
        fn_800A8400();
        fn_8000C070(temp_r31, 0);
    }
    fn_8000CAA0(&lbl_8028EB10, temp_r31);
    return 6;
}

void *fn_80103C7C(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x18c;
}

s32 fn_80103C8C(void) {
    return 0;
}

s32 fn_80103C94(void) {
    s32 fn_8000BCA4(void *);
    void fn_8000C070(s32, s32);
    void fn_8000CAA0(void *, s32);
    void fn_800A8400(void);
    extern char lbl_802734D0[];
    extern struct { u8 pad[0x100]; } lbl_8028EAE8;
    s32 temp_r31;

    temp_r31 = fn_8000BCA4(lbl_802734D0 + 0xC4);
    if (temp_r31 != 0) {
        fn_800A8400();
        fn_8000C070(temp_r31, 0);
    }
    fn_8000CAA0(&lbl_8028EAE8, temp_r31);
    return 6;
}

void *fn_80103CF4(void) {
    extern u8 lbl_802734D0[];
    return &lbl_802734D0[0x191];
}

s32 fn_80103D04(void) {
    return 0;
}

s32 fn_80103D0C(void) {
    s32 fn_8000BCA4(void *);
    void fn_800A8400(void);
    void fn_8000C070(s32, s32);
    void fn_80132B00(s32, s32);
    extern char lbl_802734D0[];

    s32 temp_r31 = fn_8000BCA4(lbl_802734D0 + 0xC4);
    fn_800A8400();
    fn_8000C070(temp_r31, 0);
    fn_80132B00(temp_r31, 1);
    return 6;
}

void *fn_80103D64(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x1a4;
}

s32 fn_80103D74(void) {
    return 0;
}

s32 fn_80103D7C(void) {
    void fn_800C3AB0(void *, void *);
    s32 fn_800C3D48(void *);
    extern char lbl_802734D0[];
    extern u8 lbl_803200AC[0x640];
    char *str;
    u8 *obj;

    obj = lbl_803200AC;
    str = lbl_802734D0;
    while (fn_800C3D48(obj) >= 0) {
        fn_800C3AB0(obj, str + 0x1B1);
    }
    return 6;
}

#pragma global_optimizer off
char *fn_80103DDC(void *arg0, void *arg1) {
    void fn_80231D94(void *, void *, ...);
    extern char lbl_8032BB18[];
    extern u8 lbl_802734D0[];
    s32 a;
    s32 c;
    u8 *row;

    a = *(s32 *)((char *)arg0 + 4);
    c = *(s32 *)((char *)*(void **)((char *)arg1 + 0x18) + 0x3c);
    row = (u8 *)(c + a);
    fn_80231D94(lbl_8032BB18, lbl_802734D0 + 0x1bf, a, row[0x14]);
    return lbl_8032BB18;
}
#pragma global_optimizer reset
s32 fn_80103E30(void) {
    return 0;
}

void *fn_80103E38(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x1cc;
}

s32 fn_80103E48(void) {
    return 0;
}

#pragma global_optimizer off
char *fn_80103E50(s32 arg0, void *arg1) {
    void fn_80231D94(void *, void *, ...);
    extern char lbl_8032BAF8[];
    extern u8 lbl_802734D0[];
    extern f32 lbl_8036A0D8;
    void *p;

    p = *(void **)((u8 *)arg1 + 0x18);
    p = *(void **)((u8 *)p + 0x3c);
    fn_80231D94(lbl_8032BAF8, lbl_802734D0 + 0x1dc, lbl_8036A0D8 * *(f32 *)((u8 *)p + 0xc));
    return lbl_8032BAF8;
}
#pragma global_optimizer reset
s32 fn_80103EA4(s32 arg0, void *arg1) {
    extern void *lbl_80367240;
    u16 temp_r5;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r5 = M2C_FIELD(temp_r6, u16 *, 0x10);
    if ((temp_r5 != 0) && ((u16) M2C_FIELD(temp_r6, u16 *, 0x12) < 0xFCU) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x01000001)) {
        M2C_FIELD(temp_r6, u16 *, 0x10) = (u16) (temp_r5 - 1);
        M2C_FIELD(temp_r6, u16 *, 0x12) = (u16) (M2C_FIELD(temp_r6, u16 *, 0x12) + 1);
        M2C_FIELD(temp_r6, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(temp_r6, u16 *, 0x10) / M2C_FIELD(temp_r6, f32 *, 8));
        M2C_FIELD(temp_r6, s8 *, 0x1B) = 1;
    } else if ((temp_r5 < 0xC0U) && ((u16) M2C_FIELD(temp_r6, u16 *, 0x12) != 0) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x02000002)) {
        M2C_FIELD(temp_r6, u16 *, 0x10) += 1;
        M2C_FIELD(temp_r6, u16 *, 0x12) -= 1;
        M2C_FIELD(temp_r6, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(temp_r6, u16 *, 0x10) / M2C_FIELD(temp_r6, f32 *, 8));
        M2C_FIELD(temp_r6, s8 *, 0x1B) = 1;
    }
    return 0;
}

#pragma global_optimizer off
char *fn_80103FA4(s32 arg0, void *arg1) {
    void fn_80231D94(void *, void *, ...);
    extern char lbl_8032BAD8[];
    extern u8 lbl_802734D0[];
    extern f32 lbl_8036A0E8;
    u8 *fmt;
    f32 scale;
    void *p;
    f32 val;

    fmt = lbl_802734D0;
    scale = lbl_8036A0E8;
    p = *(void **)((u8 *)arg1 + 0x18);
    p = *(void **)((u8 *)p + 0x3c);
    val = *(f32 *)((u8 *)p + 8);
    fn_80231D94(lbl_8032BAD8, fmt + 0x1eb, val * scale);
    return lbl_8032BAD8;
}
#pragma global_optimizer reset

s32 fn_80103FF8(s32 arg0, void *arg1) {
    extern void *lbl_80367240;
    extern f32 lbl_8036A0F0;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg1, void **, 0x3C);
    if ((M2C_FIELD(temp_r5, f32 *, 8) > 0.0f) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x01000001)) {
        M2C_FIELD(temp_r5, f32 *, 8) -= lbl_8036A0F0;
        M2C_FIELD(temp_r5, s16 *, 0x10) = (s16) (M2C_FIELD(temp_r5, f32 *, 8) * M2C_FIELD(temp_r5, f32 *, 0xC));
        M2C_FIELD(temp_r5, s16 *, 0x12) = (s16) (M2C_FIELD(temp_r5, f32 *, 8) - (f32) M2C_FIELD(temp_r5, u16 *, 0x10));
        M2C_FIELD(temp_r5, s8 *, 0x1B) = 1;
    } else if ((M2C_FIELD(temp_r5, u16 *, 0x10) < 0xC0U) && (M2C_FIELD(temp_r5, u16 *, 0x12) < 0x100U) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x02000002)) {
        M2C_FIELD(temp_r5, f32 *, 8) += lbl_8036A0F0;
        M2C_FIELD(temp_r5, s16 *, 0x10) = (s16) (M2C_FIELD(temp_r5, f32 *, 8) * M2C_FIELD(temp_r5, f32 *, 0xC));
        M2C_FIELD(temp_r5, s16 *, 0x12) = (s16) (M2C_FIELD(temp_r5, f32 *, 8) - (f32) M2C_FIELD(temp_r5, u16 *, 0x10));
        M2C_FIELD(temp_r5, s8 *, 0x1B) = 1;
    }
    return 0;
}

void fn_80104134(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, M2C_UNK, s32);
    fn_8017A810(arg1, 4, arg0);
}

void fn_80104160(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, s32);
    fn_8017A430(arg1, 4, arg0);
}

s32 fn_8010418C(void *arg0, s32 arg1) {
    s32 count;
    u8 *p;

    p = (u8 *)arg0;
    count = 0;
    if ((p[0] >> 5) & 7) {
        count = 1;
    }
    if (arg1 + 1 == count) {
        return 0x1B;
    }

    if ((*(u16 *)p >> 7) & 7) {
        count += 1;
    }
    if (arg1 + 1 == count) {
        return 0x1C;
    }

    if ((p[1] >> 4) & 7) {
        count += 1;
    }
    if (arg1 + 1 == count) {
        return 0x1D;
    }

    p = (u8 *)arg0;
    if ((p[0] >> 2) & 7) {
        count += 1;
    }
    if (arg1 + 1 == count) {
        return 0x1E;
    }

    p = (u8 *)arg0;
    if (p[1] & 7) {
        count += 1;
    }
    if (arg1 + 1 == count) {
        return 0x1F;
    }

    return 0;
}

s32 fn_8010424C(void *arg0) {
    s32 count;
    u8 *p;

    p = (u8 *)arg0;
    count = 0;
    if ((p[0] >> 5) & 7) {
        count = 1;
    }
    if ((*(u16 *)p >> 7) & 7) {
        count += 1;
    }
    if ((p[1] >> 4) & 7) {
        count += 1;
    }
    p = (u8 *)arg0;
    if ((p[0] >> 2) & 7) {
        count += 1;
    }
    p = (u8 *)arg0;
    if (p[1] & 7) {
        count += 1;
    }
    return count;
}

void fn_801042A8(void *arg0, u32 arg1, s32 arg2) {
    struct { u8 hi:3; u8 lo:5; } *p;
    struct { u16 hi:6; u16 mid:3; u16 lo:7; } *h;
    struct { u8 hi:1; u8 mid:3; u8 lo:4; } *q;
    struct { u8 a:3; u8 b:3; u8 c:2; } *r;
    struct { u8 hi:5; u8 lo:3; } *s;
    struct { u8 hi:3; u8 lo:5; } *t;
    struct { u8 a:3; u8 b:3; u8 c:2; } *u;

    switch (arg1) {
    case 0:
        p = arg0;
        p->hi = arg2;
        break;
    case 2:
        h = arg0;
        h->mid = arg2;
        break;
    case 3:
        q = (void *)((u8 *)arg0 + 1);
        q->mid = arg2;
        break;
    case 4:
        r = arg0;
        r->b = arg2;
        break;
    case 5:
        s = (void *)((u8 *)arg0 + 1);
        s->lo = arg2;
        break;
    case 14:
        t = (void *)((u8 *)arg0 + 2);
        t->hi = arg2;
        break;
    case 15:
        u = (void *)((u8 *)arg0 + 2);
        u->b = arg2;
        break;
    }
}

s32 fn_80104338(void *arg0, u32 arg1) {
    struct { u8 hi:3; u8 lo:5; } *p;
    struct { u16 hi:6; u16 mid:3; u16 lo:7; } *h;
    struct { u8 hi:1; u8 mid:3; u8 lo:4; } *q;
    struct { u8 a:3; u8 b:3; u8 c:2; } *r;
    struct { u8 hi:5; u8 lo:3; } *s;
    struct { u8 hi:3; u8 lo:5; } *t;
    struct { u8 a:3; u8 b:3; u8 c:2; } *u;

    switch (arg1) {
    case 0:
        p = arg0;
        return p->hi;
    case 1:
        return 0;
    case 2:
        h = arg0;
        return h->mid;
    case 3:
        q = (void *)((u8 *)arg0 + 1);
        return q->mid;
    case 4:
        r = arg0;
        return r->b;
    case 5:
        s = (void *)((u8 *)arg0 + 1);
        return s->lo;
    case 6:
        return 0;
    case 7:
        return 0;
    case 8:
        return 0;
    case 9:
        return 0;
    case 10:
        return 0;
    case 11:
        return 0;
    case 12:
        return 0;
    case 13:
        return 0;
    case 14:
        t = (void *)((u8 *)arg0 + 2);
        return t->hi;
    case 15:
        u = (void *)((u8 *)arg0 + 2);
        return u->b;
    }
    return -1;
}

extern u32 lbl_8028F210[];
s32 fn_801043FC(s32 arg0) {
    return lbl_8028F210[arg0];
}

void fn_80104410(void *arg0) {
    struct { u8 hi:3; u8 lo:5; } *p;
    struct { u16 hi:6; u16 mid:3; u16 lo:7; } *h;
    struct { u8 hi:1; u8 mid:3; u8 lo:4; } *q;
    struct { u8 a:3; u8 b:3; u8 c:2; } *r;
    struct { u8 hi:5; u8 lo:3; } *s;
    struct { u8 hi:3; u8 lo:5; } *t;
    struct { u8 a:3; u8 b:3; u8 c:2; } *u;

    p = arg0;
    p->hi = 0;
    h = arg0;
    h->mid = 0;
    q = (void *)((u8 *)arg0 + 1);
    q->mid = 0;
    r = arg0;
    r->b = 0;
    s = (void *)((u8 *)arg0 + 1);
    s->lo = 0;
    t = (void *)((u8 *)arg0 + 2);
    t->hi = 0;
    u = (void *)((u8 *)arg0 + 2);
    u->b = 0;
}

void fn_8010446C(u8 *arg0) {
    struct {
        u8 hi : 3;
        u8 lo : 5;
    } *p = (void *)arg0;
    p->hi = 0;
}

void fn_80104480(void *arg0) {
    struct { u8 hi:3; u8 lo:5; } *p;
    struct { u16 hi:6; u16 mid:3; u16 lo:7; } *h;
    struct { u8 hi:1; u8 mid:3; u8 lo:4; } *q;
    struct { u8 a:3; u8 b:3; u8 c:2; } *r;
    struct { u8 hi:5; u8 lo:3; } *s;

    p = arg0;
    p->hi = 0;
    h = arg0;
    h->mid = 0;
    q = (void *)((u8 *)arg0 + 1);
    q->mid = 0;
    r = arg0;
    r->b = 0;
    s = (void *)((u8 *)arg0 + 1);
    s->lo = 0;
}

u32 fn_801044C4(void *arg0) {
    s32 temp_r4;

    temp_r4 = ((u8) M2C_FIELD(arg0, u8 *, 2) >> 5U) & 7;
    return (u32) ((7 - temp_r4) | (temp_r4 - 7)) >> 0x1FU;
}

u32 fn_801044E0(void *arg0) {
    s32 temp_r4;

    temp_r4 = ((u8) M2C_FIELD(arg0, u8 *, 2) >> 2U) & 7;
    return (u32) ((4 - temp_r4) | (temp_r4 - 4)) >> 0x1FU;
}

s32 fn_801044FC(u8 *arg0) {
    u8 b0;
    u8 b1;

    b0 = arg0[0];
    if ((b0 >> 5) & 7) {
        return 1;
    }
    if ((*(u16 *)arg0 >> 7) & 7) {
        return 1;
    }
    b1 = arg0[1];
    if ((b1 >> 4) & 7) {
        return 1;
    }
    if ((b0 >> 2) & 7) {
        return 1;
    }
    return (b1 & 7) != 0;
}

void fn_8010455C(void *arg0, u8 arg1) {
    typedef struct {
        u8 hi:5;
        u8 cnt:3;
    } Lo3;
    u8 *p;
    u8 b;
    u16 h;
    s32 v;

    p = (u8 *)arg0;
    switch ((s32)arg1) {
    case 1:
        b = p[0];
        v = (b >> 5U) & 7;
        if (v != 0) {
            p[0] = (u8)((b & ~0xE0) | (((v - 1) << 5) & 0xE0));
        }
        h = *(u16 *)p;
        v = (h >> 7U) & 7;
        if (v != 0) {
            *(u16 *)p = (u16)((h & ~0x380) | (((v - 1) << 7) & 0x380));
        }
        p = (u8 *)arg0;
        b = p[1];
        v = (b >> 4U) & 7;
        if (v != 0) {
            p[1] = (u8)((b & ~0x70) | (((v - 1) << 4) & 0x70));
        }
        p = (u8 *)arg0;
        b = p[0];
        v = (b >> 2U) & 7;
        if (v != 0) {
            p[0] = (u8)((b & ~0x1C) | (((v - 1) << 2) & 0x1C));
        }
        p = (u8 *)arg0;
        b = p[2];
        v = (b >> 5U) & 7;
        if (v != 0) {
            p[2] = (u8)((b & ~0xE0) | (((v - 1) << 5) & 0xE0));
        }
        p = (u8 *)arg0;
        b = p[2];
        v = (b >> 2U) & 7;
        if (v != 0) {
            p[2] = (u8)((b & ~0x1C) | (((v - 1) << 2) & 0x1C));
        }
        return;
    case 0:
        p = (u8 *)arg0;
        b = p[1];
        v = b & 7;
        if (v != 0) {
            ((Lo3 *)&p[1])->cnt = v - 1;
        }
        break;
    }
}

s32 fn_80104628(void *arg0, u8 arg1) {
    u8 *temp_r3;
    u8 *r10;
    s32 r9;

    temp_r3 = (u8 *) arg0;
    r9 = 0;

    if ((temp_r3[0] >> 5) & 7) {
        r9 = 1;
    }
    if ((temp_r3[0] >> 7) & 7) {
        r9 += 1;
    }
    if ((temp_r3[1] >> 4) & 7) {
        r9 += 1;
    }
    if ((temp_r3[0] >> 2) & 7) {
        r9 += 1;
    }
    if (temp_r3[1] & 7) {
        r9 += 1;
    }

    if (r9 == 0) {
        return 0;
    }

    r10 = (u8 *) arg0;
    if (arg1 == 1) {
        u8 temp_r4;

        temp_r4 = (r10[0] >> 5) & 7;
        if (temp_r4 != 0) {
            r10[0] = ((r10[0] & ~0xE0) | (((temp_r4 - 1) << 5) & 0xE0));
        }

        temp_r4 = (r10[0] >> 7) & 7;
        if (temp_r4 != 0) {
            r10[0] = ((r10[0] & ~0x380) | (((temp_r4 - 1) << 7) & 0x380));
        }

        temp_r4 = (r10[1] >> 4) & 7;
        if (temp_r4 != 0) {
            r10[1] = ((r10[1] & ~0x70) | (((temp_r4 - 1) << 4) & 0x70));
        }

        temp_r4 = (r10[0] >> 2) & 7;
        if (temp_r4 != 0) {
            r10[0] = ((r10[0] & ~0x1C) | (((temp_r4 - 1) << 2) & 0x1C));
        }

        temp_r4 = (r10[2] >> 5) & 7;
        if (temp_r4 != 0) {
            r10[2] = ((r10[2] & ~0xE0) | (((temp_r4 - 1) << 5) & 0xE0));
        }

        temp_r4 = (r10[2] >> 2) & 7;
        if (temp_r4 != 0) {
            r10[2] = ((r10[2] & ~0x1C) | (((temp_r4 - 1) << 2) & 0x1C));
        }
    } else if (arg1 == 0) {
        u8 temp_r4;

        temp_r4 = r10[1] & 7;
        if (temp_r4 != 0) {
            r10[1] = ((r10[1] & ~0x7) | ((temp_r4 - 1) & 0x7));
        }
    }

    r9 = 0;
    temp_r3 = (u8 *) arg0;

    if ((temp_r3[0] >> 5) & 7) {
        r9 = 1;
    }
    if ((temp_r3[0] >> 7) & 7) {
        r9 += 1;
    }
    if ((temp_r3[1] >> 4) & 7) {
        r9 += 1;
    }
    if ((temp_r3[0] >> 2) & 7) {
        r9 += 1;
    }
    if (temp_r3[1] & 7) {
        r9 += 1;
    }

    if (r9 == 0) {
        return 1;
    }

    return 0;
}

s32 fn_801047D0(void) {
    extern void *lbl_803679C0;
    return *(s32 *)((char *)lbl_803679C0 + 0x4);
}

u32 fn_80104930(u16 *arg0, u16 arg1) {
    return *arg0 < arg1;
}

s32 fn_80104944(void) {
    extern s32 lbl_803679C0;
    return lbl_803679C0;
}

extern void* lbl_803679C0;
extern u8 lbl_8032BB44[20];
void* fn_8010494C(void* arg0) {
    void* temp_r0 = lbl_803679C0;
    
    if (arg0 != NULL) {
        lbl_803679C0 = arg0;
    } else {
        lbl_803679C0 = &lbl_8032BB44;
    }
    
    return temp_r0;
}

u8 *fn_80104970(u8 *arg0) {
    u8 is_double;
    u8 b0;
    u8 b1;

    b0 = arg0[0];
    if ((b0 >= 0x81U && b0 <= 0x9FU) || (b0 >= 0xE0U && b0 <= 0xFCU)) {
        b1 = arg0[1];
        if ((b1 >= 0x40U && b1 <= 0x7EU) || (b1 >= 0x80U && b1 <= 0xFCU)) {
            is_double = 1;
        } else {
            is_double = 0;
        }
    } else {
        is_double = 0;
    }
    return arg0 + 1 + (is_double != 0);
}

#pragma use_lmw_stmw on
void *fn_801049E0(u8 *arg0, void **arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5)
{
    u16 sp8;
    void **ctx = lbl_803679C0;
    u8 is_double;
    u8 *next;
    u16 code;
    void *base;
    void *end;
    void *start;
    void *entry;
    f32 width;
    s32 fn_801053E4(s32, s32, u16 *, void *);
    s32 fn_80105474(s32, s32, void *, void *);

    if (((arg0[0] >= 0x81U && arg0[0] <= 0x9FU) || (arg0[0] >= 0xE0U && arg0[0] <= 0xFCU))
        && ((arg0[1] >= 0x40U && arg0[1] <= 0x7EU) || (arg0[1] >= 0x80U && arg0[1] <= 0xFCU))) {
        is_double = 1;
    } else {
        is_double = 0;
    }

    if (is_double != 0) {
        code = *(u8 *)(arg0 + 1);
        next = arg0 + 2;
        code = (u16)(code | (*(s8 *)((u8 *)arg0 + 0) << 8));
    } else {
        code = *(u8 *)arg0;
        next = arg0 + 1;
    }
    sp8 = code;

    if (*(u16 *)ctx[3] != code) {
        base = ctx[1];
        start = (u8 *)base + *(u16 *)((u8 *)base + 0x22);
        end = (u8 *)start + ((s32)ctx[2] << 4);
        ctx[3] = (void *)fn_801053E4((s32)start, (s32)end, &sp8, fn_80104930);
        entry = ctx[3];
        if (end == entry || *(u16 *)entry != sp8) {
            ctx[3] = (void *)fn_80105474((s32)start, (s32)end, &lbl_80366E80, fn_80104930);
            entry = ctx[3];
            if (end == entry || *(u16 *)entry != 0x8199U) {
                ctx[3] = start;
            }
        }
    }

    {
        u8 *temp_r5;
        u8 *temp_r6;
        s32 idx;
        s32 stride;
        s32 off;
        s32 tmp;

        temp_r5 = ctx[3];
        *arg4 = (s8)temp_r5[0xC];
        temp_r6 = ctx[1];
        idx = *(u16 *)(temp_r5 + 2);
        stride = *(s32 *)(temp_r6 + 0x14);
        off = *(s32 *)(temp_r6 + 0x24);
        tmp = idx * stride;
        tmp = off + tmp;
        tmp = (s32)temp_r6 + tmp;
        *arg1 = (void *)tmp;
        *arg2 = *(u16 *)(temp_r5 + 4);
        *arg3 = *(u16 *)(temp_r5 + 6);
    }

    if (*(u16 *)((void **)lbl_803679C0)[3] & 0xFF00) {
        width = (f32)*arg4;
    } else {
        width = lbl_8036A0F8 * (f32)(s32)*(u16 *)((u8 *)((void **)lbl_803679C0)[1] + 0xC);
    }
    *arg5 = (s32)width;
    return next;
}
#pragma use_lmw_stmw reset

void fn_80104BF4(void* arg0, void* arg1) {
    if (arg0 != NULL && arg1 != NULL) {
        char* ptr0 = (char*)arg0;
        char* ptr1 = (char*)arg1;
        
        while (*ptr0 != 0 && *ptr0 == *ptr1) {
            ptr0++;
            ptr1++;
        }
        
        if (*ptr0 == 0) {
            *(u8*)arg1 = 0;
        }
    }
}

s32 fn_80104D90(void) {
    void *fn_8005C84C(void *);
    extern u8 lbl_80273788[];
    extern u8 lbl_8032BB44[20];
    extern void *lbl_803679C0;
    u16 *p;
    u32 n;
    u16 off;
    u8 *ctx;
    u16 sum;
    u8 *file;
    u8 *base;

    file = fn_8005C84C(lbl_80273788);
    ctx = lbl_8032BB44;
    *(u8 **)(ctx + 4) = file;
    sum = *(u16 *)(file + 0x8) + *(u16 *)(file + 0xA);
    *(u16 *)(file + 0x12) = sum;
    *(u16 *)(file + 0x10) = sum;
    off = *(u16 *)(file + 0x22);
    n = (*(u32 *)(file + 0x24) - off) >> 4;
    *(u32 *)(ctx + 8) = n;
    p = (u16 *)(*(u8 **)(ctx + 4) + off + ((n - 1) * 0x10));
    while (*p == 0) {
        p = (u16 *)((u8 *)p - 0x10);
        *(u32 *)(ctx + 8) -= 1;
    }
    off = *(u16 *)(file + 0x22);
    base = lbl_8032BB44;
    lbl_803679C0 = base;
    *(u8 **)(base + 0xC) = *(u8 **)(ctx + 4) + off;
    return 1;
}

u32 fn_80104E40(void) {
    extern void *lbl_803679C0;
    u8 *ptr;

    ptr = *(u8 **)((u8 *)lbl_803679C0 + 0x4);

    return *(u16 *)(ptr + 0x8) + *(u16 *)(ptr + 0xA);
}

extern void *lbl_803679C0;
u16 fn_80104E58(void) {
    extern void *lbl_803679C0;
    return *(u16 *)((u8 *)(*(void **)((u8 *)lbl_803679C0 + 4)) + 0xC);
}

extern u16 lbl_80366E80;
s8 fn_80104E68(void *arg0) {
    return 0;
}

s8 fn_80104FC4(void** arg0) {
    void *temp_r3;
    void *temp_r31;
    u8 temp_r0;
    u8 temp_r0_2;
    s8 var_r0;
    void *var_r30;
    u16 sp8;
    
    temp_r3 = *arg0;
    temp_r31 = lbl_803679C0;
    
    temp_r0 = *(u8*)temp_r3;
    
    if (temp_r0 >= 0x81 && temp_r0 <= 0x9f) {
        // First condition: 0x81 to 0x9f
    } else if (temp_r0 >= 0xe0 && temp_r0 <= 0xfc) {
        // Second condition: 0xe0 to 0xfc
    } else {
        var_r0 = 0;
        goto end;
    }
    
    temp_r0_2 = *(u8*)((char*)temp_r3 + 1);
    if (temp_r0_2 < 0x40) {
        // First condition: less than 0x40
    } else if (temp_r0_2 <= 0x7e) {
        // Second condition: less or equal to 0x7e
    } else if (temp_r0_2 >= 0x80) {
        // Third condition: greater or equal to 0x80
    } else if (temp_r0_2 <= 0xfc) {
        // Fourth condition: less or equal to 0xfc
    } else {
        var_r0 = 0;
        goto end;
    }
    
    var_r0 = 1;

end:
    if (var_r0 != 0) {
        var_r30 = (char*)temp_r3 + 2;
        sp8 = (u16)((*(u8*)((char*)temp_r3 + 1) & 0xFF) | ((s8)*(u8*)temp_r3 << 8));
    } else {
        var_r30 = (char*)temp_r3 + 1;
        sp8 = *(u8*)temp_r3;
    }
    
    // Placeholder for function calls - this is a complex pattern
    *arg0 = var_r30;
    return 0;
}

void *fn_80105284(void *arg0, void *arg1) {
    void *fn_8005C84C(void *);
    u8 *file;
    u16 sum;
    u16 off;
    u32 n;
    u16 *p;

    *(u8 **)((u8 *)arg0 + 4) = fn_8005C84C(arg1);
    file = *(u8 **)((u8 *)arg0 + 4);
    sum = *(u16 *)(file + 0x8) + *(u16 *)(file + 0xA);
    *(u16 *)(file + 0x12) = sum;
    *(u16 *)(file + 0x10) = sum;
    off = *(u16 *)(file + 0x22);
    n = (*(u32 *)(file + 0x24) - off) >> 4;
    *(u32 *)((u8 *)arg0 + 8) = n;
    p = (u16 *)(*(u8 **)((u8 *)arg0 + 4) + *(u16 *)(file + 0x22) + ((*(u32 *)((u8 *)arg0 + 8) - 1) * 0x10));
    while (*p == 0) {
        p = (u16 *)((u8 *)p - 0x10);
        *(u32 *)((u8 *)arg0 + 8) -= 1;
    }
    *(u8 **)((u8 *)arg0 + 0xC) = *(u8 **)((u8 *)arg0 + 4) + *(u16 *)(file + 0x22);
    return *(void **)((u8 *)arg0 + 4);
}

void *fn_80105334(void *arg0, s16 arg1) {
    void fn_8005C7E8(void *);
    void fn_800C428C(void *);
    void fn_800C4588(void *);
    void *p;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) != 0) {
            p = M2C_FIELD(arg0, void **, 4);
            if (p != NULL) {
                fn_800C4588(p);
                M2C_FIELD(arg0, void **, 4) = NULL;
                goto clear;
            }
        }
        p = M2C_FIELD(arg0, void **, 4);
        if (p != NULL) {
            fn_8005C7E8(p);
        }
    clear:
        M2C_FIELD(arg0, void **, 4) = NULL;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801053CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

#pragma use_lmw_stmw on
s32 fn_801053E4(s32 arg0, s32 arg1, u16 *arg2, u8 (*arg3)(s32, u16)) {
    s32 count;
    s32 mid_ptr;
    s32 mid;
    s32 lo;
    u8 (*pred)(s32, u16);
    u16 *key_ptr;

    lo = arg0;
    key_ptr = arg2;
    pred = arg3;
    count = (arg1 - lo) / 16;
    while (count > 0) {
        mid = count / 2;
        mid_ptr = lo + mid * 16;
        if (pred(mid_ptr, *key_ptr) != 0) {
            lo = mid_ptr + 0x10;
            count -= mid + 1;
        } else {
            count = mid;
        }
    }
    return lo;
}
#pragma use_lmw_stmw on
s32 fn_80105474(s32 arg0, s32 arg1, s32 *arg2, u8 (*arg3)(s32, u16)) {
    s32 lo;
    u8 (*pred)(s32, u16);
    s32 mid;
    s32 mid_ptr;
    s32 count;
    s32 key;

    lo = arg0;
    count = arg1 - lo;
    key = *arg2;
    pred = arg3;
    count /= 16;
    while (count > 0) {
        mid = count / 2;
        mid_ptr = lo + (mid << 4);
        if (pred(mid_ptr, (u16)key) != 0) {
            lo = mid_ptr + 0x10;
            count -= mid + 1;
        } else {
            count = mid;
        }
    }
    return lo;
}
#pragma use_lmw_stmw reset
extern u16 lbl_802734D0;
extern u32 jumptable_8028F290[];
