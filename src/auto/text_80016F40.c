/* Functions from 0x80016F40 to 0x80019558, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_80330708[700]; // 1400 bytes / 2 = 700 u16s

void* fn_8014C5A8(u16 *, u8);
extern u8 lbl_802841B0[16];


void fn_80016F40(void) {
    extern u16 lbl_802B14E4[];
    extern void fn_800169A8(void);
    fn_8022C1E8(lbl_802B14E4, fn_800169A8, 0x280, 0x9F);
}

void *fn_80016F78(void *arg0) {
    void fn_8022C260(void *, s32 (*)(s32), s32 (*)(s32, s16), s32, s32);
    s32 fn_8001C76C(s32);
    s32 fn_8001C5F8(s32, s16);

    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    fn_8022C260((u8 *)arg0 + 0x1CC, fn_8001C76C, fn_8001C5F8, 8, 4);
    fn_8022C260((u8 *)arg0 + 0x1EC, fn_8001C76C, fn_8001C5F8, 8, 4);
    M2C_FIELD(arg0, s16 *, 0x228) = 0;
    M2C_FIELD(arg0, s16 *, 0x22A) = 0;
    M2C_FIELD(arg0, s16 *, 0x22C) = 0;
    M2C_FIELD(arg0, s16 *, 0x22E) = 0;
    M2C_FIELD(arg0, s16 *, 0x230) = 0;
    M2C_FIELD(arg0, s16 *, 0x232) = 0;
    M2C_FIELD(arg0, s8 *, 0x234) = 0;
    M2C_FIELD(arg0, s8 *, 0x235) = 0;
    return arg0;
}

void *fn_80017010(u8 *arg0) {
    void *fn_8000E0E4(void *);
    extern u8 lbl_80268128[];
    u8 *temp_r3;
    void *var_r31 = lbl_80268128 + 0x1D;
    u8 temp_r4 = *arg0;
    u8 var_r0;

    switch (temp_r4) {
    case 0:
    case 5:
    case 6: {
        temp_r3 = fn_8014C5A8(lbl_80330708, temp_r4);
        if (temp_r3 == NULL) {
            var_r0 = 0;
        } else {
            u8 temp_r0 = *temp_r3;
            switch (temp_r0) {
            case 0: var_r0 = 0; break;
            case 1: var_r0 = 8; break;
            case 2: var_r0 = 7; break;
            case 3: var_r0 = 4; break;
            case 4: var_r0 = 5; break;
            default: var_r0 = 0; break;
            }
            switch (var_r0) {
            case 5: var_r31 = lbl_80268128 + 0x40; break;
            case 8: var_r31 = lbl_80268128 + 0x46; break;
            case 0: var_r31 = lbl_80268128 + 0x34; break;
            case 4: var_r31 = lbl_80268128 + 0x3A; break;
            default: break;
            }
        }
        break;
    }
    case 3: {
        temp_r3 = fn_8014C5A8(lbl_80330708, temp_r4);
        if (temp_r3 == NULL) {
            var_r0 = 0;
        } else {
            u8 temp_r0 = *temp_r3;
            switch (temp_r0) {
            case 0: var_r0 = 0; break;
            case 1: var_r0 = 8; break;
            case 2: var_r0 = 7; break;
            case 3: var_r0 = 4; break;
            case 4: var_r0 = 5; break;
            default: var_r0 = 0; break;
            }
            switch (var_r0) {
            case 6: break;
            case 7: var_r31 = lbl_80268128 + 0x22; break;
            case 4: var_r31 = lbl_80268128 + 0x28; break;
            case 5: var_r31 = lbl_80268128 + 0x2E; break;
            default: break;
            }
        }
        break;
    }
    default:
        break;
    }
    if (var_r31 != NULL) {
        var_r31 = fn_8000E0E4(var_r31);
    }
    return var_r31;
}

void *fn_80017240(u8 *arg0) {
    void *fn_80016BDC(char *);
    extern char lbl_80268128[];

    if (fn_8014C5A8(lbl_80330708, *arg0) == NULL) {
        return NULL;
    }
    return fn_80016BDC(lbl_80268128 + 0x4C);
}

s32 fn_80017290(u8 *arg0) {
    void *fn_8014C5A8(void *, u8);
    void *temp_r3;

    temp_r3 = fn_8014C5A8(lbl_80330708, *arg0);
    if (temp_r3 == NULL) {
        return -1;
    }
    return *(u8 *)((char *)temp_r3 + 3);
}

s32 fn_80017318(u8 *arg0) {
    u8 *p;

    p = fn_8014C5A8(lbl_80330708, *arg0);
    if (p == NULL) {
        return 0;
    }
    switch (*p) {
    case 0:
        return 0;
    case 1:
        return 8;
    case 2:
        return 7;
    case 3:
        return 4;
    case 4:
        return 5;
    }
    return 0;
}

void fn_800173B4(u8 *arg0, void *arg1) {
    u8 fn_80105BC0(void *, M2C_UNK);
    if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0)) {
        *arg0 = 1;
        return;
    }
    *arg0 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x190), u8 *, 8);
}

void fn_80017414(void *arg0, s32 arg1) {
    s16 fn_8017A9B0(s32);
    s8 fn_8017A9DC(s32);
    M2C_FIELD(arg0, s16 *, 0) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 2) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 4) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 6) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 8) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s16 *, 0xA) = fn_8017A9B0(arg1);
    M2C_FIELD(arg0, s8 *, 0xC) = fn_8017A9DC(arg1);
    M2C_FIELD(arg0, s8 *, 0xD) = fn_8017A9DC(arg1);
}

void fn_800174A8(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A5C4(s32, u16);
    M2C_UNK fn_8017A5EC(s32, u8);
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 0));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 2));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 4));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 6));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 8));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 0xA));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xC));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xD));
}

void fn_8001753C(s16 *arg0) {
    s16 fn_8000CEE4(M2C_UNK);
    *arg0 = fn_8000CEE4(0xE4C);
}

void fn_80017570(s32 arg0)
{
    if (arg0 >= 0x17) {
        return;
    }
    
    switch(arg0) {
        case 0:
            // Load lbl_80268128 + 0xE8
            break;
        case 1:
            // Load lbl_80268128 + 0xEE
            break;
        case 2:
            // Load lbl_80268128 + 0xF5
            break;
        case 3:
            // Load lbl_80268128 + 0xFD
            break;
        case 4:
            // Load lbl_80268128 + 0x105
            break;
        case 5:
            // Load lbl_80268128 + 0x10E
            break;
        case 6:
            // Load lbl_80268128 + 0x116
            break;
        case 7:
            // Load lbl_80268128 + 0x11D
            break;
        case 8:
            // Load lbl_80268128 + 0x125
            break;
        case 9:
            // Load lbl_80268128 + 0x12E
            break;
        case 10:
            // Load lbl_80268128 + 0x135
            break;
        case 11:
            // Load lbl_80268128 + 0x13B
            break;
        case 12:
            // Load lbl_80268128 + 0x141
            break;
        case 13:
            // Load lbl_80268128 + 0x148
            break;
        case 14:
            // Load lbl_80268128 + 0x14F
            break;
        case 15:
            // Load lbl_80268128 + 0x158
            break;
        case 16:
            // Load lbl_80268128 + 0x15F
            break;
        case 17:
            // Load lbl_80268128 + 0x166
            break;
        case 18:
            // Load lbl_80268128 + 0x16D
            break;
        case 19:
            // Load lbl_80268128 + 0x175
            break;
        case 20:
            // Load lbl_80268128 + 0x17D
            break;
        case 21:
            // Load lbl_80268128 + 0x186
            break;
        case 22:
            // Load lbl_80268128 + 0x18D
            break;
        case 23:
            // Load lbl_80268128 + 0x195
            break;
    }
    
    fn_8000E0E4();
}

s32 fn_8001772C(void) {
    void *fn_8000C0C0(void *);
    void *p;

    p = fn_8000C0C0(lbl_802841B0);
    if (p != NULL && M2C_FIELD(p, u8 *, 0x3C) == 0) {
        return 1;
    }
    return 0;
}

void fn_80017774(void) {
    fn_8000BF00(&lbl_802841B0);
}

void fn_8001779C(s32 arg0) {
    void *fn_8000C0C0(void *);
    void fn_800180F4(void *, u8);
    void *p;

    p = fn_8000C0C0(lbl_802841B0);
    if (p != NULL) {
        fn_800180F4(p, arg0);
    }
}

void fn_800177E0(s32 arg0) {
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern char lbl_80268330[];
    void *p;

    p = fn_8000CAF0(lbl_802841B0, arg0);
    M2C_FIELD(p, s32 *, 0x40) = fn_800C4638(0x1400, lbl_80268330 + 0x4E, 0);
    M2C_FIELD(p, u8 *, 0x44) = 0;
    M2C_FIELD(p, u8 *, 0x3C) = 0;
}

s32 fn_80017840(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 sp0;
    s32 v5;
    s32 v6;
    
    if (arg4 == 0) {
        return 0;
    }
    
    v5 = *(s32*)((char*)0x800000F8 + arg1);
    sp0 = *(s32*)((char*)0x800000F8 + arg2);
    v6 = *(s32*)((char*)0x800000F8 + arg3);
    
    if (v5 == 0) {
        return 0;
    }
    
    if (sp0 == 0) {
        if (v6 == 1) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 1;
    }
}

extern s32 lbl_80367110;
extern f32 lbl_80368C88;
extern f64 lbl_80368C98;
extern f32 lbl_80368CA0;
extern f32 lbl_80368C8C;
extern u8 lbl_802CA434[];
void fn_8000C188(void *);
void fn_80017C1C(void *, f32);
f32 fn_80059F64(f32, f32, f32, f32);
f32 fn_80059F78(s32, f32, f32, f32, f32);
f32 fn_8005A028(s32, f32, f32, f32, f32);
void fn_80017998(void *arg0) {
    void fn_8000C188(void *);
    void fn_80017C1C(void *, f32);
    f32 fn_80059F64(f32, f32, f32, f32);
    f32 fn_80059F78(s32, f32, f32, f32, f32);
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    extern s32 lbl_80367110;
    extern f32 lbl_80368C88;

    s32 mode;
    s32 lim;
    f32 f1;

    *(s32 *)((u8 *)arg0 + 0x34) = *(s32 *)((u8 *)arg0 + 0x34) + 1;
    if ((lbl_80367110 & 1) != 0) {
        *(s32 *)((u8 *)arg0 + 0x34) = *(s32 *)((u8 *)arg0 + 0x38);
    }
    if (*(s32 *)((u8 *)arg0 + 0x34) >= *(s32 *)((u8 *)arg0 + 0x38)) {
        *(s32 *)((u8 *)arg0 + 0x34) = *(s32 *)((u8 *)arg0 + 0x38);
        fn_8000C188(arg0);
        *((u8 *)arg0 + 0x3c) = 1;
    }
    f1 = lbl_80368C88;
    mode = *(s32 *)((u8 *)arg0 + 0x30);
    switch (mode) {
    case 0:
        lim = *(s32 *)((u8 *)arg0 + 0x38);
        f1 = fn_80059F64(f1, (f32)lim, (f32)lim, (f32)*(s32 *)((u8 *)arg0 + 0x34));
        break;
    case 1:
        lim = *(s32 *)((u8 *)arg0 + 0x38);
        f1 = fn_80059F78(2, f1, (f32)lim, (f32)lim, (f32)*(s32 *)((u8 *)arg0 + 0x34));
        break;
    case 2:
        lim = *(s32 *)((u8 *)arg0 + 0x38);
        f1 = fn_8005A028(2, f1, (f32)lim, (f32)lim, (f32)*(s32 *)((u8 *)arg0 + 0x34));
        break;
    case 3: {
        s32 half;
        lim = *(s32 *)((u8 *)arg0 + 0x38);
        half = lim / 2;
        if (*(s32 *)((u8 *)arg0 + 0x34) < half) {
            f1 = fn_80059F78(2, f1, (f32)half, (f32)half, (f32)*(s32 *)((u8 *)arg0 + 0x34));
        } else {
            f1 = fn_8005A028(2, (f32)half, (f32)lim, (f32)half, (f32)(*(s32 *)((u8 *)arg0 + 0x34) - half));
        }
        break;
    }
    }
    fn_80017C1C(arg0, f1);
}

void fn_80017BFC(void) {
    M2C_UNK fn_8001840C();
    fn_8001840C();
}

void fn_800180F4(void *arg0, u8 arg1) {
    void fn_80018594(void *);
    void fn_80017C1C(void *);
    void fn_8000C070(void *, s32);
    extern s32 lbl_803671C4;
    extern u8 lbl_803671C8;
    extern u8 lbl_802CA434[];
    extern f32 lbl_80368CA0;
    extern f32 lbl_80368C88;
    extern f32 lbl_80368C8C;
    extern f64 lbl_80368C98;

    s32 sp20[3];
    s32 sp14[3];
    s32 sp2C[3];
    s32 sp8[3];
    void *cam;
    u8 *dst;
    s32 found;
    s32 c45;
    s32 c46;
    u8 idx;
    void *walk;
    void *slot;
    f32 f1;
    f32 f2;
    f32 f0;
    s32 t;
    s32 i;

    cam = (void *)lbl_803671C4;
    *(s32 *)((u8 *)arg0 + 0x30) = arg1;
    fn_80018594(arg0);
    dst = lbl_802CA434;
    f1 = lbl_80368CA0;
    f2 = lbl_80368C88;
    f0 = lbl_80368C8C;
    found = 0;
    *(f32 *)(dst + 0x28) = f1;
    *(f32 *)(dst + 0x34) = f1;
    *(f32 *)(dst + 0x58) = f2;
    *(f32 *)(dst + 0x5c) = f2;
    *(f32 *)(dst + 0x60) = f2;
    *(f32 *)(dst + 0x64) = f2;
    *(f32 *)(dst + 0x68) = f2;
    *(f32 *)(dst + 0x6c) = f2;
    *(s32 *)(dst + 0x1c) = found;
    *(f32 *)(dst + 0x70) = f0;
    c45 = *((u8 *)arg0 + 0x45);
    if (((u32)(-c45 | c45) >> 31) == 0) {
        sp20[0] = *(s32 *)((u8 *)cam + 0x40);
        sp20[1] = *(s32 *)((u8 *)cam + 0x44);
        sp20[2] = *(s32 *)((u8 *)cam + 0x48);
        *(f32 *)(dst + 0x4c) = *(f32 *)&sp20[0];
        *(f32 *)(dst + 0x50) = *(f32 *)&sp20[1];
        *(f32 *)(dst + 0x54) = *(f32 *)&sp20[2];
        *(f32 *)(dst + 0x40) = *(f32 *)&sp20[0];
        *(f32 *)(dst + 0x44) = *(f32 *)&sp20[1];
        *(f32 *)(dst + 0x48) = *(f32 *)&sp20[2];
    } else {
        if (c45 == 0) {
            found = 0;
        } else {
            walk = *(void **)((u8 *)arg0 + 0x48);
            found = 0;
            for (i = c45; i != 0; i--) {
                t = *(s32 *)((u8 *)walk + 4);
                if ((f32)t == f2) {
                    found = 1;
                    break;
                }
                walk = (u8 *)walk + 0x14;
            }
        }
        if ((u8)found == 0) {
            idx = *((u8 *)arg0 + 0x44);
            found = 0;
            sp14[0] = *(s32 *)((u8 *)cam + 0x40);
            *((u8 *)*(void **)((u8 *)arg0 + 0x40) + idx * 0x14) = (u8)found;
            sp14[1] = *(s32 *)((u8 *)cam + 0x44);
            sp14[2] = *(s32 *)((u8 *)cam + 0x48);
            slot = (u8 *)*(void **)((u8 *)arg0 + 0x40) + idx * 0x14;
            *(s32 *)((u8 *)slot + 4) = found;
            idx = *((u8 *)arg0 + 0x44);
            slot = (u8 *)*(void **)((u8 *)arg0 + 0x40) + (idx * 0x14);
            *(f32 *)((u8 *)slot + 8) = *(f32 *)&sp14[0];
            *(f32 *)((u8 *)slot + 0xc) = *(f32 *)&sp14[1];
            *(f32 *)((u8 *)slot + 0x10) = *(f32 *)&sp14[2];
            *((u8 *)arg0 + 0x44) = idx + 1;
        }
    }
    c46 = *((u8 *)arg0 + 0x46);
    if (((u32)(-c46 | c46) >> 31) == 0) {
        f32 tf;
        dst = lbl_802CA434;
        tf = *(f32 *)((u8 *)cam + 4);
        *(f32 *)(dst + 4) = tf;
        *(f32 *)(dst + 0x10) = tf;
        tf = *(f32 *)((u8 *)cam + 8);
        *(f32 *)(dst + 8) = tf;
        *(f32 *)(dst + 0x14) = tf;
        tf = *(f32 *)((u8 *)cam + 0xc);
        *(f32 *)(dst + 0xc) = tf;
        *(f32 *)(dst + 0x18) = tf;
    } else {
        if (c46 == 0) {
            found = 0;
        } else {
            walk = *(void **)((u8 *)arg0 + 0x4c);
            found = 0;
            f0 = lbl_80368C88;
            for (i = c46; i != 0; i--) {
                t = *(s32 *)((u8 *)walk + 4);
                if ((f32)t == f0) {
                    found = 1;
                    break;
                }
                walk = (u8 *)walk + 0x14;
            }
        }
        if ((u8)found == 0) {
            f32 fx, fy, fz;
            idx = *((u8 *)arg0 + 0x44);
            fx = *(f32 *)((u8 *)cam + 4);
            fy = *(f32 *)((u8 *)cam + 8);
            fz = *(f32 *)((u8 *)cam + 0xc);
            *((u8 *)*(void **)((u8 *)arg0 + 0x40) + idx * 0x14) = 1;
            sp2C[0] = *(s32 *)&fx;
            sp2C[1] = *(s32 *)&fy;
            sp2C[2] = *(s32 *)&fz;
            slot = (u8 *)*(void **)((u8 *)arg0 + 0x40) + idx * 0x14;
            *(s32 *)((u8 *)slot + 4) = 0;
            idx = *((u8 *)arg0 + 0x44);
            sp8[0] = sp2C[0];
            sp8[1] = sp2C[1];
            sp8[2] = sp2C[2];
            slot = (u8 *)*(void **)((u8 *)arg0 + 0x40) + (idx * 0x14);
            *(f32 *)((u8 *)slot + 8) = *(f32 *)&sp8[0];
            *(f32 *)((u8 *)slot + 0xc) = *(f32 *)&sp8[1];
            *(f32 *)((u8 *)slot + 0x10) = *(f32 *)&sp8[2];
            *((u8 *)arg0 + 0x44) = idx + 1;
        }
    }
    fn_80018594(arg0);
    lbl_803671C8 = 3;
    lbl_803671C4 = (s32)lbl_802CA434;
    fn_80017C1C(arg0);
    fn_8000C070(arg0, 0);
}

void fn_8001840C(void *arg0)
{
    extern s32 lbl_803671C4;
    extern u8 lbl_803671C8;
    extern s32 lbl_80367110;
    extern u16 lbl_80330708[700];
    extern u8 lbl_802CA2C8[];

    extern f32 lbl_80368CA4;
    extern f32 lbl_80368CA0;
    extern f32 lbl_80368C88;
    extern f32 lbl_80368C8C;
    extern f32 lbl_80368CA8;

    void fn_8014CBD8(void *, f32, f32);
    void fn_800C4588(void *);

    u8 *dst;
    u8 *src;
    u8 *obj;
    u8 *data;
    f32 x;
    f32 y;
    f32 z;
    f32 a;
    f32 b;
    f32 c;
    f32 v0;
    f32 v1;
    f32 v2;

    obj = (u8 *)arg0;
    src = (u8 *)lbl_803671C4;
    data = (u8 *)lbl_80330708;
    dst = lbl_802CA2C8;

    x = *(f32 *)(src + 0x40);
    y = *(f32 *)(src + 0x44);
    z = *(f32 *)(src + 0x48);

    fn_8014CBD8(data, x - lbl_80368CA4, y - lbl_80368CA4);

    *(f32 *)(dst + 0x28) = lbl_80368CA0;
    *(f32 *)(dst + 0x34) = lbl_80368CA0;

    *(f32 *)(dst + 0x58) = lbl_80368C88;
    *(f32 *)(dst + 0x5C) = lbl_80368C88;
    *(f32 *)(dst + 0x60) = lbl_80368C88;
    *(f32 *)(dst + 0x64) = lbl_80368C88;
    *(f32 *)(dst + 0x68) = lbl_80368C88;
    *(f32 *)(dst + 0x6C) = lbl_80368C88;

    *(s32 *)(dst + 0x1C) = 0;
    *(f32 *)(dst + 0x70) = lbl_80368C8C;

    a = *(f32 *)(src + 0x40);
    b = *(f32 *)(src + 0x44);
    c = *(f32 *)(src + 0x48);

    *(f32 *)(dst + 0x4C) = a;
    *(f32 *)(dst + 0x50) = b;
    *(f32 *)(dst + 0x54) = c;

    *(f32 *)(dst + 0x40) = a;
    *(f32 *)(dst + 0x44) = b;
    *(f32 *)(dst + 0x48) = c;

    v2 = *(f32 *)(src + 0x18);
    *(f32 *)(dst + 0x0C) = v2;
    *(f32 *)(dst + 0x18) = v2;

    v0 = *(f32 *)(src + 0x10);
    *(f32 *)(dst + 0x04) = v0;
    *(f32 *)(dst + 0x10) = v0;

    v1 = *(f32 *)(src + 0x14);
    *(f32 *)(dst + 0x08) = v1;
    *(f32 *)(dst + 0x14) = v1;

    *(f32 *)(dst + 0x70) = lbl_80368CA8;

    if (lbl_80367110 & 1) {
        *(f32 *)(dst + 0x10) = v0;

        x = *(f32 *)(data + 0x52C);
        y = *(f32 *)(data + 0x530);
        z = *(f32 *)(data + 0x53C);

        *(f32 *)(dst + 0x4C) = x;
        *(f32 *)(dst + 0x50) = y;
        *(f32 *)(dst + 0x54) = z;

        *(f32 *)(dst + 0x40) = x;
        *(f32 *)(dst + 0x44) = y;
        *(f32 *)(dst + 0x48) = z;

        *(f32 *)(dst + 0x14) = v1;
        *(f32 *)(dst + 0x18) = v2;
    }

    lbl_803671C8 = 0;
    lbl_803671C4 = (s32)lbl_802CA2C8;

    obj[0x3C] = 1;

    fn_800C4588(*(void **)(obj + 0x40));

    *(s32 *)(obj + 0x40) = 0;
}

void fn_80018594(void *arg0) {
    s32 i;
    s32 j;
    s32 off;
    void *base;
    void *cur;
    void *nxt;
    s32 t4, t8, tc, t10;
    u8 t0;
    u8 idx;
    void *slot;

    i = 0;
    *((u8 *)arg0 + 0x45) = 0;
    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *((u8 *)arg0 + 0x46) = 0;
    *(s32 *)((u8 *)arg0 + 0x4C) = 0;
    *((u8 *)arg0 + 0x47) = 0;
    *(s32 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;

    while (i < *((u8 *)arg0 + 0x44)) {
        j = 0;
        off = 0;
        while (j < (*((u8 *)arg0 + 0x44) - 1) - i) {
            base = *(void **)((u8 *)arg0 + 0x40);
            cur = (u8 *)base + off;
            if (*(s32 *)((u8 *)cur + 4) > *(s32 *)((u8 *)cur + 0x18)) {
                nxt = (u8 *)base + (j + 1) * 0x14;
                t0 = *(u8 *)cur;
                t4 = *(s32 *)((u8 *)cur + 4);
                t8 = *(s32 *)((u8 *)cur + 8);
                tc = *(s32 *)((u8 *)cur + 0xc);
                t10 = *(s32 *)((u8 *)cur + 0x10);
                *(u8 *)cur = *(u8 *)nxt;
                *(s32 *)((u8 *)cur + 4) = *(s32 *)((u8 *)nxt + 4);
                *(s32 *)((u8 *)cur + 8) = *(s32 *)((u8 *)nxt + 8);
                *(s32 *)((u8 *)cur + 0xc) = *(s32 *)((u8 *)nxt + 0xc);
                *(s32 *)((u8 *)cur + 0x10) = *(s32 *)((u8 *)nxt + 0x10);
                nxt = (u8 *)*(void **)((u8 *)arg0 + 0x40) + (j + 1) * 0x14;
                *(u8 *)nxt = t0;
                *(s32 *)((u8 *)nxt + 4) = t4;
                *(s32 *)((u8 *)nxt + 8) = t8;
                *(s32 *)((u8 *)nxt + 0xc) = tc;
                *(s32 *)((u8 *)nxt + 0x10) = t10;
            }
            off += 0x14;
            j += 1;
        }
        i += 1;
    }

    i = 0;
    while (i < *((u8 *)arg0 + 0x44)) {
        j = 0;
        off = 0;
        while (j < (*((u8 *)arg0 + 0x44) - 1) - i) {
            base = *(void **)((u8 *)arg0 + 0x40);
            cur = (u8 *)base + off;
            if (*(u8 *)cur > *(u8 *)((u8 *)cur + 0x14)) {
                nxt = (u8 *)base + (j + 1) * 0x14;
                t0 = *(u8 *)cur;
                t4 = *(s32 *)((u8 *)cur + 4);
                t8 = *(s32 *)((u8 *)cur + 8);
                tc = *(s32 *)((u8 *)cur + 0xc);
                t10 = *(s32 *)((u8 *)cur + 0x10);
                *(u8 *)cur = *(u8 *)nxt;
                *(s32 *)((u8 *)cur + 4) = *(s32 *)((u8 *)nxt + 4);
                *(s32 *)((u8 *)cur + 8) = *(s32 *)((u8 *)nxt + 8);
                *(s32 *)((u8 *)cur + 0xc) = *(s32 *)((u8 *)nxt + 0xc);
                *(s32 *)((u8 *)cur + 0x10) = *(s32 *)((u8 *)nxt + 0x10);
                nxt = (u8 *)*(void **)((u8 *)arg0 + 0x40) + (j + 1) * 0x14;
                *(u8 *)nxt = t0;
                *(s32 *)((u8 *)nxt + 4) = t4;
                *(s32 *)((u8 *)nxt + 8) = t8;
                *(s32 *)((u8 *)nxt + 0xc) = tc;
                *(s32 *)((u8 *)nxt + 0x10) = t10;
            }
            off += 0x14;
            j += 1;
        }
        i += 1;
    }

    i = 0;
    off = 0;
    while (i < *((u8 *)arg0 + 0x44)) {
        cur = (u8 *)*(void **)((u8 *)arg0 + 0x40) + off;
        idx = *(u8 *)cur;
        slot = (u8 *)arg0 + (idx * 4) + 0x48;
        if (*(void **)slot == NULL) {
            *(void **)slot = cur;
        }
        *((u8 *)arg0 + idx + 0x45) = *((u8 *)arg0 + idx + 0x45) + 1;
        t4 = *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x40) + off + 4);
        if (t4 > *(s32 *)((u8 *)arg0 + 0x38)) {
            *(s32 *)((u8 *)arg0 + 0x38) = t4;
        }
        off += 0x14;
        i += 1;
    }
}

void fn_800187F0(void) {
    void *p;

    p = (void *)lbl_803671C4;
    if (p != NULL) {
        M2C_FIELD(p, f32 *, 0x4C) = M2C_FIELD(lbl_80330708, f32 *, 0x52C);
        M2C_FIELD(p, f32 *, 0x50) = M2C_FIELD(lbl_80330708, f32 *, 0x530);
        M2C_FIELD(p, f32 *, 0x54) = M2C_FIELD(lbl_80330708, f32 *, 0x53C);
        M2C_FIELD(p, f32 *, 0x40) = M2C_FIELD(p, f32 *, 0x4C);
        M2C_FIELD(p, f32 *, 0x44) = M2C_FIELD(p, f32 *, 0x50);
        M2C_FIELD(p, f32 *, 0x48) = M2C_FIELD(p, f32 *, 0x54);
    }
    p = (void *)lbl_803671C4;
    if (p != NULL) {
        M2C_FIELD(p, f32 *, 0x10) = M2C_FIELD(p, f32 *, 0x4);
        M2C_FIELD(p, f32 *, 0x14) = M2C_FIELD(p, f32 *, 0x8);
        M2C_FIELD(p, f32 *, 0x18) = M2C_FIELD(p, f32 *, 0xC);
    }
}

s32 fn_800188A4(u8 arg0) {
    extern f32 lbl_80368CB0;
    f32 var_f2;
    u8 r;
    void *p;
    void *q;

    p = (void *) lbl_803671C4;
    if (p == NULL) {
        r = 0;
    } else {
        if ((u8) lbl_803671C8 == 0) {
            M2C_FIELD(p, f32 *, 0x4C) = M2C_FIELD(lbl_80330708, f32 *, 0x52C);
            M2C_FIELD(p, f32 *, 0x50) = M2C_FIELD(lbl_80330708, f32 *, 0x530);
            M2C_FIELD(p, f32 *, 0x54) = M2C_FIELD(lbl_80330708, f32 *, 0x53C);
        }
        p = (void *) lbl_803671C4;
        var_f2 = lbl_80368C8C;
        if (arg0 != 0) {
            var_f2 = lbl_80368CAC;
        }
        if ((f32) __fabs((f64) (M2C_FIELD(p, f32 *, 0x4C) - M2C_FIELD(p, f32 *, 0x40))) > var_f2) {
            r = 1;
        } else if ((f32) __fabs((f64) (M2C_FIELD(p, f32 *, 0x50) - M2C_FIELD(p, f32 *, 0x44))) > var_f2) {
            r = 1;
        } else {
            r = 0;
        }
    }
    if (r == 1) {
        return 1;
    }
    q = (void *) lbl_803671C4;
    if (q == NULL) {
        r = 0;
    } else {
        var_f2 = lbl_80368CB0;
        if (arg0 != 0) {
            var_f2 = lbl_80368C8C;
        }
        if ((f32) __fabs((f64) (M2C_FIELD(q, f32 *, 0x4) - M2C_FIELD(q, f32 *, 0x10))) > var_f2) {
            r = 1;
        } else if ((f32) __fabs((f64) (M2C_FIELD(q, f32 *, 0x8) - M2C_FIELD(q, f32 *, 0x14))) > var_f2) {
            r = 1;
        } else if ((f32) __fabs((f64) (M2C_FIELD(q, f32 *, 0xC) - M2C_FIELD(q, f32 *, 0x18))) > var_f2) {
            r = 1;
        } else {
            r = 0;
        }
    }
    if (r != 1) {
        goto zero;
    }
    return 1;
zero:
    return 0;
}

s32 fn_80018A08(u8 arg0) {
    f32 var_f2;
    
    if (lbl_803671C4 == 0) {
        return 0;
    }
    if (lbl_803671C8 == 0) {
        f32 *ptr = (f32*) 0x80330708;
        *(f32 *) (((u32) lbl_803671C4) + 0x4C) = ptr[0x14B];
        *(f32 *) (((u32) lbl_803671C4) + 0x50) = ptr[0x14C];
        *(f32 *) (((u32) lbl_803671C4) + 0x54) = ptr[0x14F];
    }

    var_f2 = lbl_80368C8C;
    if (arg0 != 0) {
        var_f2 = lbl_80368CAC;
    }
    if (fabsf(*(f32 *) (((u32) lbl_803671C4) + 0x4C) - *(f32 *) (((u32) lbl_803671C4) + 0x40)) > var_f2) {
        return 1;
    }
    if (fabsf(*(f32 *) (((u32) lbl_803671C4) + 0x50) - *(f32 *) (((u32) lbl_803671C4) + 0x44)) > var_f2) {
        return 1;
    }
    return 0;
}

void fn_80018AAC(void) {
    extern long lbl_803671C4;
    void **vtable;

    vtable = *(void ***)(lbl_803671C4 + 0x74);
    ((void (*)(void))(*(void **)((u8 *)vtable + 0x8)))();
}

s32 fn_80018ADC(void) {
    extern s32 lbl_803671C4;
    return lbl_803671C4;
}

void fn_80018AE4(void) {
    extern u8 lbl_803671C0;
    lbl_803671C0 -= 1;
}

void fn_80018AF4(void) {
    lbl_803671C0 += 1;
}

void fn_80018B04(void) {
    u8 temp = lbl_80366DB0;
    lbl_803671C0 = temp;
    lbl_80366DB0 = 0xFF;
}

void fn_80018B18(void) {
    extern u8 lbl_80366DB0;
    extern u8 lbl_803671C0;
    lbl_80366DB0 = lbl_803671C0;
}

#pragma cplusplus on
extern "C" void fn_80018B24(void) {
    f32 fn_80059F64(f32, f32, f32, f32);
    void *fn_80040844(void);
    void fn_80202300(f32 *, s32, f32);
    void fn_80202024(f32 *, f32 *, f32 *);
    void fn_802029C4(f32 *, f32 *, f32 *);
    void fn_80067FE8(f32 *, f32 *, f32 *);
    void fn_8006785C(s32, void (*)(void *), void *);
    void fn_800193D8(void *);
    extern long lbl_803671C4;
    extern u8 lbl_8036728B;
    extern s32 lbl_802CA518[];
    extern f32 lbl_80368C88;
    extern f32 lbl_80368CA4;
    extern f32 lbl_80368CBC;
    extern f32 lbl_80368CB4;
    extern f32 lbl_80368CB8;
    extern f32 lbl_80368CC0;
    extern f32 lbl_80368CC4;
    struct Cam {
        u8 pad[0x74];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
    };
    f32 sp38[12];
    f32 sp8[12];
    void *r31;
    f32 f31;
    f32 f30;
    f32 f29;
    void *child;
    f32 t;
    f32 a;
    f32 b;

    ((Cam *)lbl_803671C4)->v3();
    r31 = (void *)lbl_803671C4;
    if ((lbl_8036728B & 1) != 0) {
        t = lbl_80368C88;
        *(f32 *)((u8 *)r31 + 0x64) = t;
        *(f32 *)((u8 *)r31 + 0x68) = t;
    } else {
        f29 = lbl_80368CA4 * (f32)lbl_802CA518[1];
        f30 = lbl_80368CA4 * (f32)lbl_802CA518[0];
        f31 = fn_80059F64(lbl_80368C88, lbl_80368CB4, lbl_80368CB8,
                          *(f32 *)((u8 *)r31 + 0x18) - lbl_80368CBC);
        if (f31 < lbl_80368C88) {
            f31 = lbl_80368C88;
        }
        if (f31 > lbl_80368CB4) {
            f31 = lbl_80368CB4;
        }
        a = *(f32 *)((u8 *)r31 + 0x40);
        *(f32 *)((u8 *)r31 + 0x64) = -fn_80059F64(lbl_80368C88, f31, f30, a - f30);
        a = *(f32 *)((u8 *)r31 + 0x44);
        *(f32 *)((u8 *)r31 + 0x68) = -fn_80059F64(lbl_80368C88, f31, f29, a - f29);
    }
    t = *(f32 *)((u8 *)r31 + 0x18);
    child = *(void **)r31;
    *(f32 *)((u8 *)child + 0xF8) = t;
    t = *(f32 *)((u8 *)r31 + 0x10);
    child = *(void **)r31;
    *(f32 *)((u8 *)child + 0xFC) = t;
    t = *(f32 *)((u8 *)r31 + 0x14);
    child = *(void **)r31;
    *(f32 *)((u8 *)child + 0x100) = t;
    a = *(f32 *)((u8 *)r31 + 0x40);
    b = *(f32 *)((u8 *)r31 + 0x58);
    t = *(f32 *)((u8 *)r31 + 0x64);
    child = *(void **)r31;
    *(f32 *)((u8 *)child + 0xE0) = (a + b) + t;
    a = *(f32 *)((u8 *)r31 + 0x44);
    b = *(f32 *)((u8 *)r31 + 0x5C);
    t = *(f32 *)((u8 *)r31 + 0x68);
    child = *(void **)r31;
    *(f32 *)((u8 *)child + 0xE4) = (a + b) + t;
    {
        void *cam = fn_80040844();
        f32 z;
        f32 c0;
        f32 c4;
        a = *(f32 *)((u8 *)r31 + 0x48);
        b = *(f32 *)((u8 *)r31 + 0x60);
        t = *(f32 *)((u8 *)*(void **)((u8 *)cam + 0x30) + 0x48);
        z = lbl_80368C88;
        c0 = lbl_80368CC0;
        c4 = lbl_80368CC4;
        child = *(void **)r31;
        *(f32 *)((u8 *)child + 0xE8) = (a + b) - t;
        child = *(void **)r31;
        *(f32 *)((u8 *)child + 0xEC) = z;
        child = *(void **)r31;
        *(f32 *)((u8 *)child + 0xF0) = c0;
        child = *(void **)r31;
        *(f32 *)((u8 *)child + 0xF4) = z;
        child = *(void **)r31;
        *(f32 *)((u8 *)child + 0xD4) = z;
        child = *(void **)r31;
        *(f32 *)((u8 *)child + 0xD8) = z;
        child = *(void **)r31;
        *(f32 *)((u8 *)child + 0xDC) = -*(f32 *)((u8 *)child + 0xF8);
        child = *(void **)r31;
        fn_80202300(sp8, 0x58, c4 * *(f32 *)((u8 *)child + 0x100));
        child = *(void **)r31;
        fn_80202300(sp38, 0x5A, c4 * *(f32 *)((u8 *)child + 0xFC));
    }
    fn_80202024(sp38, sp8, sp38);
    child = *(void **)r31;
    fn_802029C4(sp38, (f32 *)((u8 *)child + 0xD4), (f32 *)((u8 *)child + 0xD4));
    child = *(void **)r31;
    fn_802029C4(sp38, (f32 *)((u8 *)child + 0xEC), (f32 *)((u8 *)child + 0xEC));
    child = *(void **)r31;
    *(f32 *)((u8 *)child + 0xD4) =
        *(f32 *)((u8 *)child + 0xD4) + *(f32 *)((u8 *)child + 0xE0);
    child = *(void **)r31;
    *(f32 *)((u8 *)child + 0xD8) =
        *(f32 *)((u8 *)child + 0xD8) + *(f32 *)((u8 *)child + 0xE4);
    child = *(void **)r31;
    *(f32 *)((u8 *)child + 0xDC) =
        *(f32 *)((u8 *)child + 0xDC) + *(f32 *)((u8 *)child + 0xE8);
    child = *(void **)r31;
    fn_80067FE8((f32 *)((u8 *)child + 0xD4), (f32 *)((u8 *)child + 0xEC), (f32 *)((u8 *)child + 0xE0));
    fn_8006785C(0, fn_800193D8, r31);
}

void fn_80018E0C(void)
{
    extern u8 lbl_803671C0;
    extern u8 lbl_803671C8;
    extern s32 lbl_803671C4;
    extern u8 lbl_802CA2C8[];
    extern u8 lbl_80268330[];

    void fn_801475FC(void *, s32);

    s32 value;
    s32 index;
    u8 *base;

    base = lbl_802CA2C8;

    if (lbl_803671C0 == 0) {
        value = (s32)lbl_803671C8;
        value++;
        index = value % 2;

        lbl_803671C8 = (u8)index;

        switch (index) {
        case 0:
            lbl_803671C4 = (s32)(base + 0);
            break;
        case 1:
            lbl_803671C4 = (s32)(base + 0x78);
            break;
        case 2:
            lbl_803671C4 = (s32)(base + 0xF0);
            break;
        case 3:
            lbl_803671C4 = (s32)(base + 0x16C);
            break;
        }
    }

    fn_801475FC(lbl_80268330 + 0x18C, 0x64);
}

#pragma cplusplus on
#pragma optimization_level 2
#pragma peephole off
extern "C" void fn_80018F08(void) {
    s32 fn_80068548(void);
    extern u8 lbl_802CA2C8[];
    extern u8 lbl_803671C1;
    extern f32 lbl_80368C88;
    extern f32 lbl_80368CC8;
    extern f32 lbl_80368CA0;
    struct Obj {
        u8 pad[0x74];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual f32 v2(s32) = 0;
    };
    struct Slot { u8 pad[0x78]; };
    struct Slot *base;
    struct Slot *slot;
    f32 f1;

    base = (struct Slot *)lbl_802CA2C8;
    slot = (struct Slot *)((char *)base + 0);
    *(s32 *)((u8 *)slot + 0x20) = 0;
    *(s32 *)base = fn_80068548();
    *(f32 *)((u8 *)slot + 0x10) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x4) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x14) = lbl_80368CC8;
    *(f32 *)((u8 *)slot + 0x8) = lbl_80368CC8;
    f1 = ((Obj *)slot)->v2(*(s32 *)((u8 *)slot + 0x20));
    {
        struct Slot *saved = slot;
        slot = (struct Slot *)((char *)base + 0x78);
        *(f32 *)((u8 *)saved + 0x18) = f1;
        *(f32 *)((u8 *)saved + 0xC) = f1;
        *((u8 *)saved + 0x24) = 1;
        lbl_803671C0 = 0;
        lbl_803671C1 = 0;
        *(f32 *)((u8 *)saved + 0x40) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x4C) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x44) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x50) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x48) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x54) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x28) = lbl_80368CA0;
        *(f32 *)((u8 *)saved + 0x34) = lbl_80368CA0;
        *(f32 *)((u8 *)saved + 0x58) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x5C) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x60) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x64) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x68) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x6C) = lbl_80368C88;
        *(s32 *)((u8 *)saved + 0x1C) = 0;
        *(f32 *)((u8 *)saved + 0x70) = lbl_80368C8C;
    }

    *(s32 *)((u8 *)slot + 0x20) = 0;
    *(s32 *)((u8 *)base + 0x78) = fn_80068548();
    *(f32 *)((u8 *)slot + 0x10) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x4) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x14) = lbl_80368CC8;
    *(f32 *)((u8 *)slot + 0x8) = lbl_80368CC8;
    f1 = ((Obj *)slot)->v2(*(s32 *)((u8 *)slot + 0x20));
    {
        struct Slot *saved = slot;
        slot = (struct Slot *)((char *)base + 0xF0);
        *(f32 *)((u8 *)saved + 0x18) = f1;
        *(f32 *)((u8 *)saved + 0xC) = f1;
        *((u8 *)saved + 0x24) = 1;
        lbl_803671C0 = 0;
        lbl_803671C1 = 0;
        *(f32 *)((u8 *)saved + 0x40) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x4C) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x44) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x50) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x48) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x54) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x28) = lbl_80368CA0;
        *(f32 *)((u8 *)saved + 0x34) = lbl_80368CA0;
        *(f32 *)((u8 *)saved + 0x58) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x5C) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x60) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x64) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x68) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x6C) = lbl_80368C88;
        *(s32 *)((u8 *)saved + 0x1C) = 0;
        *(f32 *)((u8 *)saved + 0x70) = lbl_80368C8C;
    }

    *(s32 *)((u8 *)slot + 0x20) = 0;
    *(s32 *)((u8 *)base + 0xF0) = fn_80068548();
    *(f32 *)((u8 *)slot + 0x10) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x4) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x14) = lbl_80368CC8;
    *(f32 *)((u8 *)slot + 0x8) = lbl_80368CC8;
    f1 = ((Obj *)slot)->v2(*(s32 *)((u8 *)slot + 0x20));
    {
        struct Slot *saved = slot;
        slot = (struct Slot *)((char *)base + 0x16C);
        *(f32 *)((u8 *)saved + 0x18) = f1;
        *(f32 *)((u8 *)saved + 0xC) = f1;
        *((u8 *)saved + 0x24) = 1;
        lbl_803671C0 = 0;
        lbl_803671C1 = 0;
        *(f32 *)((u8 *)saved + 0x40) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x4C) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x44) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x50) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x48) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x54) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x28) = lbl_80368CA0;
        *(f32 *)((u8 *)saved + 0x34) = lbl_80368CA0;
        *(f32 *)((u8 *)saved + 0x58) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x5C) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x60) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x64) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x68) = lbl_80368C88;
        *(f32 *)((u8 *)saved + 0x6C) = lbl_80368C88;
        *(s32 *)((u8 *)saved + 0x1C) = 0;
        *(f32 *)((u8 *)saved + 0x70) = lbl_80368C8C;
    }

    *(s32 *)((u8 *)slot + 0x20) = 0;
    *(s32 *)((u8 *)base + 0x16C) = fn_80068548();
    *(f32 *)((u8 *)slot + 0x10) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x4) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x14) = lbl_80368CC8;
    *(f32 *)((u8 *)slot + 0x8) = lbl_80368CC8;
    f1 = ((Obj *)slot)->v2(*(s32 *)((u8 *)slot + 0x20));
    *(f32 *)((u8 *)slot + 0x18) = f1;
    *(f32 *)((u8 *)slot + 0xC) = f1;
    *((u8 *)slot + 0x24) = 1;
    lbl_803671C0 = 0;
    lbl_803671C1 = 0;
    *(f32 *)((u8 *)slot + 0x40) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x4C) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x44) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x50) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x48) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x54) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x28) = lbl_80368CA0;
    *(f32 *)((u8 *)slot + 0x34) = lbl_80368CA0;
    *(f32 *)((u8 *)slot + 0x58) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x5C) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x60) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x64) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x68) = lbl_80368C88;
    *(f32 *)((u8 *)slot + 0x6C) = lbl_80368C88;
    *(s32 *)((u8 *)slot + 0x1C) = 0;
    *(f32 *)((u8 *)slot + 0x70) = lbl_80368C8C;
    lbl_803671C8 = 0;
    lbl_803671C4 = (s32)base;
}
#pragma peephole reset
#pragma optimization_level reset
#pragma cplusplus reset

#pragma cplusplus reset

#pragma cplusplus on
static inline void fn_80018F08_init(u8 *base, u8 *slot) {
    s32 fn_80068548(void);
    extern u8 lbl_803671C1;
    extern f32 lbl_80368C88;
    extern f32 lbl_80368CC8;
    extern f32 lbl_80368CA0;
    struct Obj {
        u8 pad[0x74];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual f32 v2(s32) = 0;
    };
    f32 f1;
    *(s32 *)(slot + 0x20) = 0;
    *(s32 *)slot = fn_80068548();
    *(f32 *)(slot + 0x10) = lbl_80368C88;
    *(f32 *)(slot + 0x4) = lbl_80368C88;
    *(f32 *)(slot + 0x14) = lbl_80368CC8;
    *(f32 *)(slot + 0x8) = lbl_80368CC8;
    f1 = ((Obj *)slot)->v2(*(s32 *)(slot + 0x20));
    *(f32 *)(slot + 0x18) = f1;
    *(f32 *)(slot + 0xC) = f1;
    slot[0x24] = 1;
    lbl_803671C0 = 0;
    lbl_803671C1 = 0;
    *(f32 *)(slot + 0x40) = lbl_80368C88;
    *(f32 *)(slot + 0x4C) = lbl_80368C88;
    *(f32 *)(slot + 0x44) = lbl_80368C88;
    *(f32 *)(slot + 0x50) = lbl_80368C88;
    *(f32 *)(slot + 0x48) = lbl_80368C88;
    *(f32 *)(slot + 0x54) = lbl_80368C88;
    *(f32 *)(slot + 0x28) = lbl_80368CA0;
    *(f32 *)(slot + 0x34) = lbl_80368CA0;
    *(f32 *)(slot + 0x58) = lbl_80368C88;
    *(f32 *)(slot + 0x5C) = lbl_80368C88;
    *(f32 *)(slot + 0x60) = lbl_80368C88;
    *(f32 *)(slot + 0x64) = lbl_80368C88;
    *(f32 *)(slot + 0x68) = lbl_80368C88;
    *(f32 *)(slot + 0x6C) = lbl_80368C88;
    *(s32 *)(slot + 0x1C) = 0;
    *(f32 *)(slot + 0x70) = lbl_80368C8C;
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_80019384(void *arg0, s32 arg1) {
    struct Obj {
        u8 pad[0x74];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual f32 v2(s32) = 0;
    };
    *(s32 *)((char *)arg0 + 0x20) = arg1 & 3;
    *(f32 *)((char *)arg0 + 0xC) = ((Obj *)arg0)->v2(*(s32 *)((char *)arg0 + 0x20));
}
#pragma cplusplus reset

void fn_800193CC(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x18) = farg0;
}

void fn_800193D8(void *arg0)
{
    s32 temp = *(s32*)((u8*)arg0 + 0x274);
    if (temp < 1) {
        return;
    }
    *(f32*)((u8*)arg0 + 0x1A0) = 0.0f;
    *(f32*)((u8*)arg0 + 0x1A4) = 0.0f;
    *(f32*)((u8*)arg0 + 0x1A8) = 0.0f;
    *(f32*)((u8*)arg0 + 0x1AC) = 0.0f;
}

