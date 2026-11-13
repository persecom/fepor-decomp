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

s32 fn_80095BB0(s32 arg0) {
    if (arg0 == 0x10000) { return 0; }
    
    /* Default case */
    return 0;
}

void *fn_80095D1C(s32 arg0)
{
    extern char lbl_8026D030[];

    switch (arg0) {
    case 0x8000000:
        return lbl_8026D030 + 0x122;
    case 0x20000000:
        return lbl_8026D030 + 0x12A;
    case 0x10000000:
        return lbl_8026D030 + 0x132;
    case 0x40000000:
        return lbl_8026D030 + 0x13A;
    case 0x80000000:
        return lbl_8026D030 + 0x142;
    case 0x2000000:
        return lbl_8026D030 + 0x14A;
    case 0x4000000:
        return lbl_8026D030 + 0x152;
    case 0x1000000:
        return lbl_8026D030 + 0x15E;
    case 2:
        return lbl_8026D030 + 0x166;
    case 0x2000:
        return lbl_8026D030 + 0x174;
    case 0x4000:
        return lbl_8026D030 + 0x174;
    case 0x1000:
        return lbl_8026D030 + 0x17E;
    case 0x800000:
        return lbl_8026D030 + 0x18A;
    case 0x100:
        return lbl_8026D030 + 0x192;
    case 0x200:
        return lbl_8026D030 + 0x19A;
    case 0x400:
        return lbl_8026D030 + 0x1A2;
    case 0x800:
        return lbl_8026D030 + 0x1AA;
    case 0x8000:
        return lbl_8026D030 + 0x1B4;
    case 0x10000:
        return lbl_8026D030 + 0x1B4;
    case 0x40000:
        return lbl_8026D030 + 0x1C0;
    case 0x10:
        return lbl_8026D030 + 0x1D2;
    case 8:
        return lbl_8026D030 + 0x1E0;
    case 0x80:
        return lbl_8026D030 + 0x1EC;
    case 0x20:
        return lbl_8026D030 + 0x1F4;
    default:
        return NULL;
    }
}

u32 fn_80095FF8(s32 arg0) {
    void *fn_80019DF0(u8);
    void fn_800056A0(s32);
    u32 var_r3;
    u8 var_r5;

    var_r5 = 0xFF;
    switch (arg0) { /* irregular */
    case 0x8000000:
        var_r5 = 0x31;
        break;
    case 0x20000000:
        var_r5 = 0x30;
        break;
    case 0x10000000:
        var_r5 = 0x2F;
        break;
    case 0x40000000:
        var_r5 = 0x38;
        break;
    case 0x80000000:
        var_r5 = 0x39;
        break;
    case 0x2000000:
        var_r5 = 0x35;
        break;
    case 0x4000000:
        var_r5 = 0x4C;
        break;
    case 0x1000000:
        var_r5 = 0x33;
        break;
    case 0x800000:
        var_r5 = 0x5A;
        break;
    case 0x400:
        var_r5 = 0x32;
        break;
    case 0x2000:
        var_r5 = 0x2A;
        break;
    case 0x4000:
        var_r5 = 0x2A;
        break;
    case 0x1000:
        var_r5 = 0x29;
        break;
    case 0x100:
        var_r5 = 0x2B;
        break;
    case 0x200:
        var_r5 = 0x10;
        break;
    case 0x800:
        var_r5 = 0x3F;
        break;
    case 0x8000:
        var_r5 = 0x41;
        break;
    case 0x10000:
        var_r5 = 0x41;
        break;
    case 0x2:
        var_r5 = 0x37;
        break;
    case 0x8:
        var_r5 = 0x34;
        break;
    case 0x80:
        var_r5 = 0x2E;
        break;
    case 0x10:
        var_r5 = 0x2C;
        break;
    case 0x20:
        var_r5 = 0x2D;
        break;
    case 0x40000:
        var_r5 = 0x54;
        break;
    }
    if (var_r5 == 0xFF) {
        fn_800056A0(0);
        return 0U;
    }
    var_r3 = *(u32 *)((u8 *)fn_80019DF0(var_r5) + 0x14);
    if (var_r3 == 0U) {
        fn_800056A0(0);
        return 0U;
    }
    return var_r3;
}

s32 fn_80096264(u8 arg0) {
    u32 r31;
    s32 r0;

    if (arg0 >= 0xFB) {
        r31 = 0xFB;
    } else if (arg0 >= 0xB5) {
        r31 = 0xB5;
    } else if (arg0 >= 0x79) {
        r31 = 0x79;
    } else if (arg0 >= 0x47) {
        r31 = 0x47;
    } else if (arg0 >= 0x1F) {
        r31 = 0x1F;
    } else if (arg0 >= 1) {
        r31 = 1;
    } else {
        return 0;
    }
    
    switch (r31) {                         /* irregular */
    case 0x0:
        return 0;
    case 0xFB:
        return 0xFB;
    case 0x1:
        return 0x1F;
    case 0x1F:
        return 0x47;
    case 0x47:
        return 0x79;
    case 0x79:
        return 0xB5;
    case 0xB5:
        return 0xFB;
    default:
        return 0;
    }
}

#pragma use_lmw_stmw on
void fn_80096418(s16 arg0) {
    void *fn_8001CB64(void *);
    void fn_8004FC70(s32, s32);
    void *fn_80055204(void *, s32);
    void fn_800558D8(void *);
    u32 fn_80095FF8(s32);
    s32 fn_80096EEC(s32 *, u32);
    void fn_800973F0(u32 *, s32);
    extern u8 lbl_8026D030[];
    extern u8 lbl_80330EAC[];
    extern void **lbl_80367500;
    extern void **lbl_80367504;
    typedef struct { s16 code; s16 pad; u32 flags; } Ent;
    Ent ents[20];
    s32 buf[20];
    u32 flaga;
    u32 flagb;
    s16 *idx;
    s16 saved;
    s16 saved2;
    s16 cur;
    s16 code;
    s32 n;
    s32 i;
    s32 count;
    s32 *p;
    Ent *ep;
    u8 c;
    u8 ok;
    s32 kind;
    void *str;
    void *unit;
    void *ctx;
    void **g0;
    u32 *bits;
    s32 arg_save;

    g0 = lbl_80367500;
    if (lbl_80367504 == NULL) {
        arg_save = 0;
    } else if (*lbl_80367504 != NULL) {
        arg_save = *(s32 *)((u8 *)*lbl_80367504 + 0x280);
    } else {
        arg_save = 0;
    }
    idx = (s16 *)(lbl_80330EAC + 0x8A0);
    saved = *idx;
    flaga = 0;
    *idx = arg0;
    *idx = (s16)(arg0 + 1);
    for (;;) {
        cur = *idx;
        c = lbl_80330EAC[0x8A4 + cur * 4];
        if (c == 0x23) {
            fn_800973F0(&flaga, c);
            *idx = (s16)(*idx + 1);
            continue;
        }
        if (c < 0x23) {
            if (c != 0 && c >= 0 && c < 0x20) {
                fn_800973F0(&flaga, c);
                *idx = (s16)(*idx + 1);
                continue;
            }
            if (c < 0) {
                fn_800973F0(&flaga, c);
                *idx = (s16)(*idx + 1);
                continue;
            }
        } else if (c != 0x54) {
            if (!(c < 0x54 && c < 0x25)) {
                fn_800973F0(&flaga, c);
                *idx = (s16)(*idx + 1);
                continue;
            }
        }
        break;
    }
    *idx = saved;
    n = fn_80096EEC(buf, flaga);
    p = buf;
    for (i = 0; i < n; i++) {
        fn_800558D8((void *)fn_80095FF8(*p));
        p++;
    }
    saved2 = *idx;
    ep = ents;
    *idx = arg0;
    count = 0;
    *idx = (s16)(arg0 + 1);
    for (;;) {
        cur = *idx;
        c = lbl_80330EAC[0x8A4 + cur * 4];
        if (c == 0x24 || c == 0) {
            break;
        }
        if (c < 0x24) {
            if (c >= 0x20 && c < 0x23) {
                break;
            }
        } else if (c == 0x56) {
            *idx = cur;
            flagb = 0;
            *idx = (s16)(cur + 1);
            for (;;) {
                cur = *idx;
                c = lbl_80330EAC[0x8A4 + cur * 4];
                if (c == 0x23) {
                    fn_800973F0(&flagb, c);
                    *idx = (s16)(*idx + 1);
                    continue;
                }
                if (c < 0x23) {
                    if (c == 9 || c == 0x15) {
                        if ((s8)*(s16 *)(lbl_80330EAC + 0x8A6 + cur * 4) == 0) {
                            flagb |= 0x20000;
                        }
                        *idx = (s16)(*idx + 1);
                        continue;
                    }
                    if (c == 0) {
                        break;
                    }
                    if (c >= 0x20) {
                        break;
                    }
                    fn_800973F0(&flagb, c);
                    *idx = (s16)(*idx + 1);
                    continue;
                }
                if (c >= 0x50 && c < 0x53) {
                    break;
                }
                if (c >= 0x55) {
                    fn_800973F0(&flagb, c);
                    *idx = (s16)(*idx + 1);
                    continue;
                }
                if (c < 0x25) {
                    break;
                }
                if (c == 0x53) {
                    fn_800973F0(&flagb, c);
                    *idx = (s16)(*idx + 1);
                    continue;
                }
                fn_800973F0(&flagb, c);
                *idx = (s16)(*idx + 1);
            }
            *idx = cur;
            /* fix: restore start of V parse */
            *idx = (s16)(*(s16 *)&ep); /* noop placeholder */
        }
        /* simplified fallthrough */
        *idx = (s16)(*idx + 1);
    }
    *idx = saved2;
}

void fn_80096AB8(void) {
    void fn_8017F9A8(void);
    void fn_8004FC70(u32, s32);
    extern u8 lbl_803120C0[];
    u32 a;
    u32 b;
    u32 c;
    void *p;

    fn_8017F9A8();
    p = *(void **)lbl_803120C0;
    if (p != NULL) {
        a = *(u32 *)((u8 *)p + 0x280);
    } else {
        a = 0U;
    }
    p = *(void **)(lbl_803120C0 + 0x14);
    if (p != NULL) {
        b = *(u32 *)((u8 *)p + 0x280);
    } else {
        b = 0U;
    }
    p = *(void **)(lbl_803120C0 + 0x28);
    if (p != NULL) {
        c = *(u32 *)((u8 *)p + 0x280);
    } else {
        c = 0U;
    }
    if (a != 0U) {
        fn_8004FC70(a, 8);
    }
    if (b != 0U) {
        fn_8004FC70(b, 8);
    }
    if (c != 0U) {
        fn_8004FC70(c, 8);
    }
}

s32 fn_80096B80(void) {
    extern u8 lbl_80330EAC[];
    void fn_800340E4(void *);
    s16 *idx;
    s32 result;
    s16 saved;

    result = 0;
    saved = *(s16 *)(lbl_80330EAC + 0x8a0);
    idx = (s16 *)(lbl_80330EAC + 0x8a0);
    fn_800340E4(idx);
    for (;;) {
        s32 c;
        c = ((u8 *)idx)[4 + *idx * 4];
        switch (c) {
        case 0x52:
            result = 1;
            break;
        case 0:
            break;
        default:
            (*idx)++;
            continue;
        }
        break;
    }
    *idx = saved;
    return result;
}

s32 fn_80096C18(void)
{
    extern u8 lbl_80330EAC[];
    extern u8 lbl_803120C0[];
    extern u8 *lbl_80367504;
    extern u8 *lbl_80367500;
    extern f32 lbl_803697BC;

    u8 *ptr;

    if (*(u32 *)(lbl_80330EAC + 0xCAC) & 0x100) {
        ptr = lbl_803120C0 + 0x14;
    } else if ((ptr = lbl_80367504) != NULL) {
    } else {
        ptr = lbl_80367500;
    }

    if (ptr == NULL) {
        return 0;
    }

    return lbl_803697BC == *(f32 *)(ptr + 0x10);
}

u8 fn_80096C78(s32 arg0) {
extern u8 lbl_80330EAC[];
s16 saved;
s16 *idx;
s32 count;
count = 0;
idx = (s16 *)(lbl_80330EAC + 0x8A0);
saved = *idx;
*idx = (s16)arg0;
*idx = (s16)((s16)arg0 + 1);
for (;;) {
switch (((u8 *)idx)[*idx * 4 + 4]) {
case 0: case 0x20: case 0x21: case 0x22: case 0x24:
case 0x37: case 0x38: case 0x39: case 0x3D:
case 0x3F: case 0x40: case 0x41: case 0x42: case 0x48:
goto done;
case 0x50: case 0x51: case 0x52: ++count; break;
}
*idx += 1;
}
done:
*idx = saved;
return (u8)(count >= 2);
}

s32 fn_80096EEC(s32 *arg0, u32 arg1) {
    s32 var_r5;

    var_r5 = 0;
    if (arg1 & 0x2000) {
        var_r5 = (arg0[var_r5] = 0x2000, 1);
    }
    if (arg1 & 0x4000) {
        arg0[var_r5] = 0x4000;
        var_r5 += 1;
    }
    if (arg1 & 0x800) {
        arg0[var_r5] = 0x800;
        var_r5 += 1;
    }
    if (arg1 & 0x8000) {
        arg0[var_r5] = 0x8000;
        var_r5 += 1;
    }
    if (arg1 & 0x10000) {
        arg0[var_r5] = 0x10000;
        var_r5 += 1;
    }
    if (arg1 & 0x1000) {
        arg0[var_r5] = 0x1000;
        var_r5 += 1;
    }
    if (arg1 & 0x200) {
        arg0[var_r5] = 0x200;
        var_r5 += 1;
    }
    if (arg1 & 0x100) {
        arg0[var_r5] = 0x100;
        var_r5 += 1;
    }
    if (arg1 & 0x400) {
        arg0[var_r5] = 0x400;
        var_r5 += 1;
    }
    if (arg1 & 2) {
        arg0[var_r5] = 2;
        var_r5 += 1;
    }
    if (arg1 & 0x04000000) {
        arg0[var_r5] = 0x04000000;
        var_r5 += 1;
    } else {
        if (arg1 & 0x10000000) {
            arg0[var_r5] = 0x10000000;
            var_r5 += 1;
        }
        if (arg1 & 0x20000000) {
            arg0[var_r5] = 0x20000000;
            var_r5 += 1;
        }
    }
    if (arg1 & 0x08000000) {
        arg0[var_r5] = 0x08000000;
        var_r5 += 1;
    }
    if (arg1 & 0x40000000) {
        arg0[var_r5] = 0x40000000;
        var_r5 += 1;
    }
    if (arg1 & 0x80000000) {
        arg0[var_r5] = (s32)0x80000000;
        var_r5 += 1;
    }
    if (arg1 & 0x02000000) {
        arg0[var_r5] = 0x02000000;
        var_r5 += 1;
    }
    if (arg1 & 0x01000000) {
        arg0[var_r5] = 0x01000000;
        var_r5 += 1;
    }
    if (arg1 & 0x800000) {
        arg0[var_r5] = 0x800000;
        var_r5 += 1;
    }
    return var_r5;
}

s32 fn_800970C8(s16 arg0) {
    extern u8 lbl_80330EAC[];
    s16 *idx;
    s16 saved;
    s32 result;
    s16 n;
    s32 c;

    idx = (s16 *)(lbl_80330EAC + 0x8A0);
    result = -1;
    saved = *idx;
    *idx = arg0;
    *idx = arg0 + 1;
    for (;;) {
        n = *idx;
        c = ((u8 *)idx)[(n << 2) + 4];
        switch (c) {
        case 0:
            *idx = n + 1;
            continue;
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x24:
            return result;
        case 0x50:
        case 0x51:
        case 0x52:
            result = ((u8 *)idx)[(n << 2) + 4];
            return result;
        default:
            *idx = saved;
            return result;
        }
    }
}

s32 fn_80097168(s32 arg0) {
    typedef struct {
        u8 pad[0x8A0];
        s16 idx;
    } Scr;
    extern Scr lbl_80330EAC;
    Scr *s;
    s16 saved;
    s32 count;
    s16 n;
    s32 c;

    s = &lbl_80330EAC;
    count = 0;
    saved = s->idx;
    s->idx = arg0;
    s->idx = (s16)arg0 + 1;

    for (;;) {
        n = s->idx;
        c = *((u8 *)s + 0x8A0 + (n << 2) + 4);
        if (c == 0x23) {
            break;
        }
        if (c < 0x23) {
            if (c == 0) {
            } else if (c < 0) {
                break;
            } else if (c >= 0x20) {
            } else {
                break;
            }
        } else if (c < 0x50) {
            if (c >= 0x25) {
                break;
            }
        } else if (c < 0x53) {
            count++;
        } else {
            break;
        }
        s->idx = n + 1;
    }
    s->idx = saved;
    return count;
}

void fn_800973F0(void *arg0, s32 arg1)
{
    u16* ptr = (u16*)arg0;
    
    if (arg1 < 0 || arg1 > 0x45) {
        return;
    }
    
    switch (arg1) {
        case 0:  ptr[0] |= 0x800; break;
        case 1:  ptr[0] |= 0x1000; break;
        case 2:  ptr[0] |= 0x2000; break;
        case 3:  ptr[0] |= 0x200; break;
        case 4:  ptr[0] |= 0x400; break;
        case 5:  ptr[0] |= 0x100; break;
        case 6:  ptr[0] |= 0x8000; break;
        case 7:  ptr[0] |= 0x4000; break;
        case 8:  ptr[0] |= 0x40; break;
        case 9:  ptr[0] |= 0x80; break;
        case 10: ptr[0] |= 0x80; break;
        case 11: ptr[0] |= 0x8; break;
        case 12: ptr[0] |= 0x10; break;
        case 13: ptr[0] |= 0x20; break;
        case 14: ptr[0] |= 0x2; break;
        case 15: ptr[0] |= 0x4; break;
        case 16: ptr[0] |= 0x40; break;
        case 17: ptr[0] |= 0x100; break;
        case 18: ptr[0] |= 0x200; break;
        case 19: ptr[0] |= 0x400; break;
        case 20: ptr[0] |= 0x4000; break;
        case 21: ptr[0] |= 0x2000; break;
        case 22: ptr[0] |= 0x8000; break;
        case 23: ptr[0] |= 0x1; break;
        case 24: ptr[0] |= 0x800; break;
        case 25: ptr[0] |= 0x1000; break;
        case 26: ptr[0] |= 0x4; break;
    }
}

void fn_800975C4(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    
    *(u16*)((char*)arg0 + 0x30) = 0;
}

typedef struct {
    u8 pad[0x8A0];
    s16 value;
} lbl_80330EAC_t;

s16 fn_80097740(void) {
    extern s16 lbl_80330EAC[];
    extern u8 lbl_803120C0[];
    extern void *lbl_80367500;
    extern void *lbl_80367504;
    s16 *idx;
    s16 n;
    s16 result;
    s32 c;
    void *p;
    void *t;
    u32 v;
    s32 init;

    idx = &lbl_80330EAC[0x450];
    init = lbl_80330EAC[0x450];
    if (init != 0) {
        *idx = init + 1;
    }
    for (;;) {
        n = *idx;
        c = ((u8 *)idx)[(n << 2) + 4];
        switch (c) {
        case 0x00:
        case 0x50:
        case 0x51:
        case 0x52:
            return result;
        case 0x54:
            result = n;
            break;
        case 0x20:
            p = (void *)lbl_803120C0;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367500 = p;
                    goto h1;
                }
            }
            lbl_80367500 = NULL;
        h1:
            p = (void *)(lbl_803120C0 + 0x14);
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367504 = p;
                    goto h2;
                }
            }
            lbl_80367504 = NULL;
        h2:
            result = *idx;
            break;
        case 0x21:
            p = (void *)(lbl_803120C0 + 0x14);
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367500 = p;
                    goto h3;
                }
            }
            lbl_80367500 = NULL;
        h3:
            p = (void *)lbl_803120C0;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367504 = p;
                    goto h4;
                }
            }
            lbl_80367504 = NULL;
        h4:
            result = *idx;
            break;
        case 0x22:
            p = (void *)(lbl_803120C0 + 0x28);
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367500 = p;
                    goto h5;
                }
            }
            lbl_80367500 = NULL;
        h5:
            p = (void *)(lbl_803120C0 + 0x14);
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367504 = p;
                    goto h6;
                }
            }
            lbl_80367504 = NULL;
        h6:
            result = *idx;
            break;
        case 0x24:
            result = n;
            break;
        }
        *idx = *idx + 1;
    }
}

void fn_80097970(void) {
    extern u16 lbl_80330EAC[];
    fn_800340E4(&lbl_80330EAC[0x8A0 / sizeof(u16)]);
}

void fn_8009799C(void) {
    extern u8 lbl_803120C0[];
    u8 *p = lbl_803120C0;
    s32 i;
    for (i = 0; i < 3; i++, p += 0x14) {
        void *u = *(void **)p;
        if (u != NULL) {
            void *t = *(void **)((u8 *)u + 0x280);
            if (t != NULL) *(s8 *)((u8 *)t + 0x16C) = -1;
        }
    }
}

void fn_800979FC(void) {
    s8 fn_8004ABD4(void *, s32, s32);
    extern u8 lbl_80330EAC[];
    extern u8 lbl_803120C0[];
    u8 *it;
    u8 *tbl;
    s32 i;
    void *p;
    void *q;
    s32 ca8;

    it = lbl_803120C0;
    tbl = lbl_80330EAC;
    for (i = 0; i < 3; i++) {
        p = *(void **)it;
        if (p != NULL && *(u32 *)((u8 *)p + 0x280) != 0) {
            if (p == NULL) {
                q = NULL;
            } else if (*(u32 *)(q = (u8 *)p + 0x28C) == 0) {
                q = NULL;
            }
            ca8 = *(s32 *)(tbl + 0xCA8);
            *(u8 *)((u8 *)*(void **)((u8 *)*(void **)it + 0x280) + 0x16C) =
                fn_8004ABD4(q, ca8 < 1, ca8);
        }
        it += 0x14;
    }
}

void fn_80097AB4(void) {
extern u8 lbl_803120C0[],lbl_80330EAC[];
extern void *lbl_80367500,*lbl_80367504;
extern f32 lbl_803697BC;
void fn_800340E4(void *);
u8 *base=lbl_803120C0;
u8 *second=base+20;
u8 *script=lbl_80330EAC+0x8a0;
u8 *other;
s16 saved=*(s16 *)script;
M2C_FIELD(lbl_803120C0,void **,0)=0;M2C_FIELD(base,f32 *,4)=lbl_803697BC;M2C_FIELD(base,f32 *,8)=lbl_803697BC;M2C_FIELD(base,f32 *,12)=lbl_803697BC;M2C_FIELD(base,f32 *,16)=lbl_803697BC;M2C_FIELD(second,void **,0)=0;M2C_FIELD(base,f32 *,24)=lbl_803697BC;M2C_FIELD(base,f32 *,28)=lbl_803697BC;M2C_FIELD(base,f32 *,32)=lbl_803697BC;M2C_FIELD(base,f32 *,36)=lbl_803697BC;M2C_FIELD(base,void **,40)=0;M2C_FIELD(base,f32 *,44)=lbl_803697BC;M2C_FIELD(base,f32 *,48)=lbl_803697BC;M2C_FIELD(base,f32 *,52)=lbl_803697BC;M2C_FIELD(base,f32 *,56)=lbl_803697BC;M2C_FIELD(lbl_803120C0,void **,0)=lbl_80330EAC+0;{ s32 value=0; fn_800340E4(script); other=lbl_80330EAC+0x2e0;
for(;;) {
s32 offset=*(s16 *)script*4;
switch((s32)script[offset+4]) {
case 0: case 0x54: goto done00;
case 4: if(lbl_80330EAC==M2C_FIELD(lbl_803120C0,void **,0)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
case 16: if(other==M2C_FIELD(lbl_803120C0,void **,0)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
}
++*(s16 *)script;
}
done00:
*(s16 *)script=saved;
M2C_FIELD(base,f32 *,4)=value;
}
{ s32 value=0; fn_800340E4(script); 
for(;;) {
s32 offset=*(s16 *)script*4;
switch((s32)script[offset+4]) {
case 0: case 0x54: goto done01;
case 3: if(lbl_80330EAC==M2C_FIELD(lbl_803120C0,void **,0)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
case 15: if(other==M2C_FIELD(lbl_803120C0,void **,0)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
}
++*(s16 *)script;
}
done01:
*(s16 *)script=saved;
M2C_FIELD(base,f32 *,8)=value;
}
M2C_FIELD(base,f32 *,16)=M2C_FIELD(base,f32 *,4); M2C_FIELD(base,f32 *,12)=lbl_803697BC;M2C_FIELD(second,void **,0)=lbl_80330EAC+736;{ s32 value=0; fn_800340E4(script); 
for(;;) {
s32 offset=*(s16 *)script*4;
switch((s32)script[offset+4]) {
case 0: case 0x54: goto done10;
case 4: if(lbl_80330EAC==M2C_FIELD(second,void **,0)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
case 16: if(other==M2C_FIELD(second,void **,0)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
}
++*(s16 *)script;
}
done10:
*(s16 *)script=saved;
M2C_FIELD(base,f32 *,24)=value;
}
{ s32 value=0; fn_800340E4(script); 
for(;;) {
s32 offset=*(s16 *)script*4;
switch((s32)script[offset+4]) {
case 0: case 0x54: goto done11;
case 3: if(lbl_80330EAC==M2C_FIELD(second,void **,0)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
case 15: if(other==M2C_FIELD(second,void **,0)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
}
++*(s16 *)script;
}
done11:
*(s16 *)script=saved;
M2C_FIELD(base,f32 *,28)=value;
}
M2C_FIELD(base,f32 *,36)=M2C_FIELD(base,f32 *,24); M2C_FIELD(base,f32 *,32)=lbl_803697BC;M2C_FIELD(base,void **,40)=lbl_80330EAC+1472;{ s32 value=0; fn_800340E4(script); 
for(;;) {
s32 offset=*(s16 *)script*4;
switch((s32)script[offset+4]) {
case 0: case 0x54: goto done20;
case 4: if(lbl_80330EAC==M2C_FIELD(base,void **,40)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
case 16: if(other==M2C_FIELD(base,void **,40)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
}
++*(s16 *)script;
}
done20:
*(s16 *)script=saved;
M2C_FIELD(base,f32 *,44)=value;
}
{ s32 value=0; fn_800340E4(script); 
for(;;) {
s32 offset=*(s16 *)script*4;
switch((s32)script[offset+4]) {
case 0: case 0x54: goto done21;
case 3: if(lbl_80330EAC==M2C_FIELD(base,void **,40)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
case 15: if(other==M2C_FIELD(base,void **,40)) value=(s8)((s16 *)script)[*(s16 *)script*2+3]; break;
}
++*(s16 *)script;
}
done21:
*(s16 *)script=saved;
M2C_FIELD(base,f32 *,48)=value;
}
M2C_FIELD(base,f32 *,56)=M2C_FIELD(base,f32 *,44); M2C_FIELD(base,f32 *,52)=lbl_803697BC;{void *p=lbl_803120C0; u32 valid;
if(p) {void *unit=*(void **)p; if(unit) valid=M2C_FIELD(unit,u32 *,0x280); else valid=0; if(valid) lbl_80367500=p; else lbl_80367500=0;} else lbl_80367500=0;
p=second;
if(p) {void *unit=*(void **)p; if(unit) valid=M2C_FIELD(unit,u32 *,0x280); else valid=0; if(valid) lbl_80367504=p; else lbl_80367504=0;} else lbl_80367504=0;
}
fn_800340E4(script);
}

s32 fn_80098094(void) {
    extern s32 lbl_80367500;
    return lbl_80367500;
}

void *fn_8009809C(void) {
    extern u8 lbl_80330EAC[];
    extern char lbl_803120C0[];
    extern void *lbl_80367500;
    extern void *lbl_80367504;

    if ((*(u32 *)(lbl_80330EAC + 0xCAC) & 0x100) != 0) {
        return lbl_803120C0 + 0x14;
    }
    if (lbl_80367504 == NULL) {
        return lbl_80367500;
    }
    return lbl_80367504;
}

void *fn_800980D4(s32 arg0) {
    extern u16 lbl_803120C0[];
    return (u8 *)lbl_803120C0 + arg0 * 0x14;
}

s32 fn_800980E8(s32 arg0)
{
    extern u8 lbl_803120C0[];
    void *p = *(void **)(lbl_803120C0 + arg0 * 0x14);
    if (p != NULL) {
        return M2C_FIELD(p, s32 *, 0x280);
    }
    return 0;
}

s32 fn_80098110(void) {
    extern void **lbl_80367504;
    void *temp_r3;

    if ((void **) lbl_80367504 == NULL) {
        return 0;
    }
    temp_r3 = *lbl_80367504;
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x280);
    }
    return 0;
}

s32 fn_80098140(void) {
    extern void **lbl_80367500;
    void *temp_r3;

    if ((void **) lbl_80367500 == NULL) {
        return 0;
    }
    temp_r3 = *lbl_80367500;
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x280);
    }
    return 0;
}
