/* Functions from 0x80006264 to 0x80011968, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    void *unk0;
    void *unk4;
    s32 unk8;
} Struct_8000B090;

extern s32 lbl_802AEE20[5]; // array of 5 pointers
extern f64 lbl_80368C28;    // global float constant
extern u16 jumptable_80283AE8[];

extern f64 lbl_80368C28;

extern u16 lbl_80367140;

extern void *(*lbl_80366DA0)(s32);
extern f32 lbl_80368B94, lbl_80368BB8, lbl_80368B98;
extern u32 lbl_802ADAFC[9];

extern void *fn_8000A738(void *, s32);
extern void fn_8000B5F0(void *);
extern void fn_8000B70C(void *);

typedef struct HashKey {
    u32 h1;
    u32 h2;
} HashKey;

extern struct UnkStruct_802AEE80 gUnk_802AEE80;

extern s32 gUnknown_0x80369C84;
extern s32 gUnknown_0x80369C88;

s32 fn_8000D598(s8 *arg0) {
    s32 h = 0;
    while (*arg0 != 0) {
        h = *arg0++ + h * 0x25;
    }
    return h;
}

void fn_8000D5C8(void) {
    void *fn_800C4638(s32, void *, s32);
    extern u8 lbl_80267D40[];
    extern u8 lbl_802ADB20[];
    s32 ctr;
    s32 n;
    u8 *p;
    s32 off;
    s32 z;
    s32 o4, o8, oC, o10, o14, o18, o1C, o20, o24, o28, o2C, o30, o34, o38, o3C;
    s32 o40, o44, o48, o4C, o50, o54, o58, o5C, o60, o64, o68, o6C, o70, o74, o78, o7C;

    n = 0;
    p = lbl_802ADB20;
    for (ctr = 0x3F; ctr != 0; ctr--) {
        *(s32 *)(p + 8) = 0;
        n += 8;
        *(s32 *)(p + 0x7FC) = 0;
        *(s32 *)(p + 0xC) = 0;
        *(s32 *)(p + 0x800) = 0;
        *(s32 *)(p + 0x10) = 0;
        *(s32 *)(p + 0x804) = 0;
        *(s32 *)(p + 0x14) = 0;
        *(s32 *)(p + 0x808) = 0;
        *(s32 *)(p + 0x18) = 0;
        *(s32 *)(p + 0x80C) = 0;
        *(s32 *)(p + 0x1C) = 0;
        *(s32 *)(p + 0x810) = 0;
        *(s32 *)(p + 0x20) = 0;
        *(s32 *)(p + 0x814) = 0;
        *(s32 *)(p + 0x24) = 0;
        *(s32 *)(p + 0x818) = 0;
        p += 0x20;
    }
    p = lbl_802ADB20 + (n << 2);
    ctr = 0x1FD - n;
    if (n < 0x1FD) {
        do {
            *(s32 *)(p + 8) = 0;
            *(s32 *)(p + 0x7FC) = 0;
            p += 4;
        } while (--ctr);
    }
    *(s32 *)lbl_802ADB20 = 0;
    *(void **)(lbl_802ADB20 + 4) = fn_800C4638(0x28000, lbl_80267D40 + 0x78, 0);
    off = 0;
    for (ctr = 0x500; ctr != 0; ctr--) {
        z = 0;
        o4 = off + 4;
        o8 = off + 8;
        oC = off + 0xC;
        o10 = off + 0x10;
        o74 = off + 0x74;
        o78 = off + 0x78;
        o7C = off + 0x7C;
        o14 = off + 0x14;
        o18 = off + 0x18;
        o1C = off + 0x1C;
        o20 = off + 0x20;
        o24 = off + 0x24;
        o28 = off + 0x28;
        o2C = off + 0x2C;
        o30 = off + 0x30;
        o34 = off + 0x34;
        o38 = off + 0x38;
        o3C = off + 0x3C;
        o40 = off + 0x40;
        o44 = off + 0x44;
        o48 = off + 0x48;
        o4C = off + 0x4C;
        o50 = off + 0x50;
        o54 = off + 0x54;
        o58 = off + 0x58;
        o5C = off + 0x5C;
        o60 = off + 0x60;
        o64 = off + 0x64;
        o68 = off + 0x68;
        o6C = off + 0x6C;
        o70 = off + 0x70;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + off) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o4) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o8) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + oC) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o10) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o14) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o18) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o1C) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o20) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o24) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o28) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o2C) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o30) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o34) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o38) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o3C) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o40) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o44) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o48) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o4C) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o50) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o54) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o58) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o5C) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o60) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o64) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o68) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o6C) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o70) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o74) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o78) = z;
        *(s32 *)(*(u8 **)(lbl_802ADB20 + 4) + o7C) = z;
        off += 0x80;
    }
}

void fn_8000D864(s32 arg0, char *arg1) {
    void fn_80234450(char *, char *);
    s32 strlen(char *);
    extern u8 lbl_802AED10[];
    u8 *temp_r31;
    char *temp_r30;

    temp_r31 = lbl_802AED10 + (arg0 * 0x44);
    temp_r30 = arg1;
    *(s32 *)temp_r31 = strlen(temp_r30);
    fn_80234450((char *)(temp_r31 + 4), temp_r30);
}

void *fn_8000D8BC(s32 arg0, char *arg1) {
    void fn_80238ABC(char *, char *, s32);
    s32 strlen(char *);
    extern u8 lbl_802AED10[];
    u8 *temp_r31;

    temp_r31 = lbl_802AED10 + (arg0 * 0x44);
    fn_80238ABC(arg1, (char *)(temp_r31 + 4), 0xA);
    *(s32 *)temp_r31 = strlen((char *)(temp_r31 + 4));
    return temp_r31 + 4;
}

u8 *fn_8000D910(u8 *arg0, u8 arg1) {
    u8 *fn_8000D354(u8 *);
    void fn_80231E74(u8 *, s32, void *, u8 *, ...);
    void fn_80234450(u8 *, void *);
    extern u8 lbl_80267DC0[];
    extern u8 lbl_802AEB10[];
    extern u8 lbl_802AED10[];
    extern u8 *lbl_80366DA8;

    u8 sp8[0x80];
    u8 *entry;
    u32 need;
    u8 *src;
    u8 *dst;
    u8 *out;
    u8 *p;
    u8 *resolved;
    u8 c;
    u8 c1;
    u8 sjis;

    if (arg1 == 0) {
        resolved = fn_8000D354(arg0);
        if (resolved == NULL) {
            return arg0;
        }
        if ((s32)*resolved == 0x40) {
            src = resolved + 1;
            need = 0;
            p = src;
            while ((c = *p), (s8)c != 0) {
                if ((s8)c == 0x40) {
                    c1 = p[1];
                    p += 1;
                    switch ((s8)c1) {
                    case 0x40:
                        p += 1;
                        need += 1;
                        break;
                    case 0x7B:
                        c1 = p[1];
                        p += 3;
                        need += *(s32 *)(lbl_802AED10 + (((s8)c1 - 0x30) * 0x44));
                        break;
                    default:
                        need += 1;
                        goto count_body;
                    }
                } else {
count_body:
                    c = *p;
                    if ((((c >= 0x81U) && (c <= 0x9FU)) || ((c >= 0xE0U) && (c <= 0xFCU))) &&
                        (((c1 = p[1], c1 >= 0x40U) && (c1 <= 0x7EU)) || ((c1 >= 0x80U) && (c1 <= 0xFCU)))) {
                        sjis = 1;
                    } else {
                        sjis = 0;
                    }
                    if (sjis != 0) {
                        need += 2;
                        p += 2;
                    } else {
                        need += 1;
                        p += 1;
                    }
                }
            }
            if ((u32)(0x200 - (lbl_80366DA8 - lbl_802AEB10)) <= need) {
                lbl_80366DA8 = lbl_802AEB10;
            }
            dst = lbl_80366DA8;
            out = dst;
            while ((c = *src), (s8)c != 0) {
                if ((s8)c == 0x40) {
                    c1 = src[1];
                    src += 1;
                    switch ((s8)c1) {
                    case 0x40:
                        src += 1;
                        *dst = 0x40;
                        dst += 1;
                        break;
                    case 0x7B:
                        c1 = src[1];
                        src += 3;
                        entry = lbl_802AED10 + (((s8)c1 - 0x30) * 0x44);
                        fn_80234450(dst, entry + 4);
                        dst += *(s32 *)entry;
                        break;
                    default:
                        *dst = 0x40;
                        dst += 1;
                        goto copy_body;
                    }
                } else {
copy_body:
                    c = *src;
                    if ((((c >= 0x81U) && (c <= 0x9FU)) || ((c >= 0xE0U) && (c <= 0xFCU))) &&
                        (((c1 = src[1], c1 >= 0x40U) && (c1 <= 0x7EU)) || ((c1 >= 0x80U) && (c1 <= 0xFCU)))) {
                        sjis = 1;
                    } else {
                        sjis = 0;
                    }
                    if (sjis != 0) {
                        dst[0] = src[0];
                        c1 = src[1];
                        src += 2;
                        dst[1] = c1;
                        dst += 2;
                    } else {
                        c1 = *src;
                        src += 1;
                        *dst = c1;
                        dst += 1;
                    }
                }
            }
            *dst = 0;
            lbl_80366DA8 = dst + 1;
            return out;
        }
        return resolved;
    }

    fn_80231E74(sp8, 0x80, lbl_80267DC0, arg0);
    if (fn_8000D354(sp8) == NULL) {
        resolved = fn_8000D354(arg0);
        if (resolved == NULL) {
            return arg0;
        }
        if ((s32)*resolved == 0x40) {
            src = resolved + 1;
            need = 0;
            p = src;
            while ((c = *p), (s8)c != 0) {
                if ((s8)c == 0x40) {
                    c1 = p[1];
                    p += 1;
                    switch ((s8)c1) {
                    case 0x40:
                        p += 1;
                        need += 1;
                        break;
                    case 0x7B:
                        c1 = p[1];
                        p += 3;
                        need += *(s32 *)(lbl_802AED10 + (((s8)c1 - 0x30) * 0x44));
                        break;
                    default:
                        need += 1;
                        goto count_body2;
                    }
                } else {
count_body2:
                    c = *p;
                    if ((((c >= 0x81U) && (c <= 0x9FU)) || ((c >= 0xE0U) && (c <= 0xFCU))) &&
                        (((c1 = p[1], c1 >= 0x40U) && (c1 <= 0x7EU)) || ((c1 >= 0x80U) && (c1 <= 0xFCU)))) {
                        sjis = 1;
                    } else {
                        sjis = 0;
                    }
                    if (sjis != 0) {
                        need += 2;
                        p += 2;
                    } else {
                        need += 1;
                        p += 1;
                    }
                }
            }
            if ((u32)(0x200 - (lbl_80366DA8 - lbl_802AEB10)) <= need) {
                lbl_80366DA8 = lbl_802AEB10;
            }
            dst = lbl_80366DA8;
            out = dst;
            while ((c = *src), (s8)c != 0) {
                if ((s8)c == 0x40) {
                    c1 = src[1];
                    src += 1;
                    switch ((s8)c1) {
                    case 0x40:
                        src += 1;
                        *dst = 0x40;
                        dst += 1;
                        break;
                    case 0x7B:
                        c1 = src[1];
                        src += 3;
                        entry = lbl_802AED10 + (((s8)c1 - 0x30) * 0x44);
                        fn_80234450(dst, entry + 4);
                        dst += *(s32 *)entry;
                        break;
                    default:
                        *dst = 0x40;
                        dst += 1;
                        goto copy_body2;
                    }
                } else {
copy_body2:
                    c = *src;
                    if ((((c >= 0x81U) && (c <= 0x9FU)) || ((c >= 0xE0U) && (c <= 0xFCU))) &&
                        (((c1 = src[1], c1 >= 0x40U) && (c1 <= 0x7EU)) || ((c1 >= 0x80U) && (c1 <= 0xFCU)))) {
                        sjis = 1;
                    } else {
                        sjis = 0;
                    }
                    if (sjis != 0) {
                        dst[0] = src[0];
                        c1 = src[1];
                        src += 2;
                        dst[1] = c1;
                        dst += 2;
                    } else {
                        c1 = *src;
                        src += 1;
                        *dst = c1;
                        dst += 1;
                    }
                }
            }
            *dst = 0;
            lbl_80366DA8 = dst + 1;
            return out;
        }
        return resolved;
    }

    resolved = fn_8000D354(sp8);
    if (resolved == NULL) {
        return sp8;
    }
    if ((s32)*resolved == 0x40) {
        src = resolved + 1;
        need = 0;
        p = src;
        while ((c = *p), (s8)c != 0) {
            if ((s8)c == 0x40) {
                c1 = p[1];
                p += 1;
                switch ((s8)c1) {
                case 0x40:
                    p += 1;
                    need += 1;
                    break;
                case 0x7B:
                    c1 = p[1];
                    p += 3;
                    need += *(s32 *)(lbl_802AED10 + (((s8)c1 - 0x30) * 0x44));
                    break;
                default:
                    need += 1;
                    goto count_body3;
                }
            } else {
count_body3:
                c = *p;
                if ((((c >= 0x81U) && (c <= 0x9FU)) || ((c >= 0xE0U) && (c <= 0xFCU))) &&
                    (((c1 = p[1], c1 >= 0x40U) && (c1 <= 0x7EU)) || ((c1 >= 0x80U) && (c1 <= 0xFCU)))) {
                    sjis = 1;
                } else {
                    sjis = 0;
                }
                if (sjis != 0) {
                    need += 2;
                    p += 2;
                } else {
                    need += 1;
                    p += 1;
                }
            }
        }
        if ((u32)(0x200 - (lbl_80366DA8 - lbl_802AEB10)) <= need) {
            lbl_80366DA8 = lbl_802AEB10;
        }
        dst = lbl_80366DA8;
        out = dst;
        while ((c = *src), (s8)c != 0) {
            if ((s8)c == 0x40) {
                c1 = src[1];
                src += 1;
                switch ((s8)c1) {
                case 0x40:
                    src += 1;
                    *dst = 0x40;
                    dst += 1;
                    break;
                case 0x7B:
                    c1 = src[1];
                    src += 3;
                    entry = lbl_802AED10 + (((s8)c1 - 0x30) * 0x44);
                    fn_80234450(dst, entry + 4);
                    dst += *(s32 *)entry;
                    break;
                default:
                    *dst = 0x40;
                    dst += 1;
                    goto copy_body3;
                }
            } else {
copy_body3:
                c = *src;
                if ((((c >= 0x81U) && (c <= 0x9FU)) || ((c >= 0xE0U) && (c <= 0xFCU))) &&
                    (((c1 = src[1], c1 >= 0x40U) && (c1 <= 0x7EU)) || ((c1 >= 0x80U) && (c1 <= 0xFCU)))) {
                    sjis = 1;
                } else {
                    sjis = 0;
                }
                if (sjis != 0) {
                    dst[0] = src[0];
                    c1 = src[1];
                    src += 2;
                    dst[1] = c1;
                    dst += 2;
                } else {
                    c1 = *src;
                    src += 1;
                    *dst = c1;
                    dst += 1;
                }
            }
        }
        *dst = 0;
        lbl_80366DA8 = dst + 1;
        return out;
    }
    return resolved;
}

u8 *fn_8000E0E4(u8 *arg0) {
    u8 *fn_8000D354();
    M2C_UNK fn_80234450(u8 *, void *);
    extern u8 lbl_802AEB10;
    extern M2C_UNK lbl_802AED10;
    extern u8 *lbl_80366DA8;
    s32 *temp_r28;
    u32 var_r5;
    u8 *temp_r31;
    u8 *var_r29;
    u8 *var_r30;
    u8 *var_r3;
    u8 *var_r6;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r0_8;
    u8 temp_r0_9;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r4;
    u8 var_r0;
    u8 var_r0_2;

    var_r3 = fn_8000D354();
    if (var_r3 == NULL) {
        return arg0;
    }
    if ((s32) *var_r3 == 0x40) {
        var_r29 = var_r3 + 1;
        var_r5 = 0U;
        var_r6 = var_r29;
loop_25:
        temp_r3 = M2C_FIELD(var_r6, u8 *, 0);
        if ((s8) temp_r3 != 0) {
            if ((s8) temp_r3 == 0x40) {
                temp_r0 = M2C_FIELD(var_r6, u8 *, 1);
                var_r6 += 1;
                switch ((s8) temp_r0) {             /* switch 1; irregular */
                case 0x40:                          /* switch 1 */
                    var_r6 += 1;
                    var_r5 += 1;
                    break;
                case 0x7B:                          /* switch 1 */
                    temp_r0_2 = M2C_FIELD(var_r6, u8 *, 1);
                    var_r6 += 3;
                    var_r5 += *(&lbl_802AED10 + (((s8) temp_r0_2 - 0x30) * 0x44));
                    break;
                default:                            /* switch 1 */
                    var_r5 += 1;
                    goto block_12;
                }
            } else {
block_12:
                temp_r0_3 = M2C_FIELD(var_r6, u8 *, 0);
                if ((((temp_r0_3 >= 0x81U) && (temp_r0_3 <= 0x9FU)) || ((temp_r0_3 >= 0xE0U) && (temp_r0_3 <= 0xFCU))) && (((temp_r0_4 = M2C_FIELD(var_r6, u8 *, 1), ((temp_r0_4 < 0x40U) == 0)) && (temp_r0_4 <= 0x7EU)) || ((temp_r0_4 >= 0x80U) && (temp_r0_4 <= 0xFCU)))) {
                    var_r0 = 1;
                } else {
                    var_r0 = 0;
                }
                if (var_r0 != 0) {
                    var_r5 += 2;
                    var_r6 += 2;
                } else {
                    var_r5 += 1;
                    var_r6 += 1;
                }
            }
            goto loop_25;
        }
        if ((u32) (0x200 - (lbl_80366DA8 - &lbl_802AEB10)) <= var_r5) {
            lbl_80366DA8 = &lbl_802AEB10;
        }
        var_r30 = lbl_80366DA8;
        temp_r31 = var_r30;
loop_50:
        temp_r3_2 = M2C_FIELD(var_r29, u8 *, 0);
        if ((s8) temp_r3_2 != 0) {
            if ((s8) temp_r3_2 == 0x40) {
                temp_r0_5 = M2C_FIELD(var_r29, u8 *, 1);
                var_r29 += 1;
                switch ((s8) temp_r0_5) {           /* switch 2; irregular */
                case 0x40:                          /* switch 2 */
                    var_r29 += 1;
                    *var_r30 = 0x40;
                    var_r30 += 1;
                    break;
                case 0x7B:                          /* switch 2 */
                    temp_r4 = M2C_FIELD(var_r29, u8 *, 1);
                    var_r29 += 3;
                    temp_r28 = &lbl_802AED10 + (((s8) temp_r4 - 0x30) * 0x44);
                    fn_80234450(var_r30, temp_r28 + 4);
                    var_r30 = &var_r30[*temp_r28];
                    break;
                default:                            /* switch 2 */
                    *var_r30 = 0x40;
                    var_r30 += 1;
                    goto block_37;
                }
            } else {
block_37:
                temp_r0_6 = M2C_FIELD(var_r29, u8 *, 0);
                if ((((temp_r0_6 >= 0x81U) && (temp_r0_6 <= 0x9FU)) || ((temp_r0_6 >= 0xE0U) && (temp_r0_6 <= 0xFCU))) && (((temp_r0_7 = M2C_FIELD(var_r29, u8 *, 1), ((temp_r0_7 < 0x40U) == 0)) && (temp_r0_7 <= 0x7EU)) || ((temp_r0_7 >= 0x80U) && (temp_r0_7 <= 0xFCU)))) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
                if (var_r0_2 != 0) {
                    M2C_FIELD(var_r30, u8 *, 0) = M2C_FIELD(var_r29, u8 *, 0);
                    temp_r0_8 = M2C_FIELD(var_r29, u8 *, 1);
                    var_r29 += 2;
                    M2C_FIELD(var_r30, u8 *, 1) = temp_r0_8;
                    var_r30 += 2;
                } else {
                    temp_r0_9 = M2C_FIELD(var_r29, u8 *, 0);
                    var_r29 += 1;
                    M2C_FIELD(var_r30, u8 *, 0) = temp_r0_9;
                    var_r30 += 1;
                }
            }
            goto loop_50;
        }
        var_r3 = temp_r31;
        *var_r30 = 0;
        lbl_80366DA8 = var_r30 + 1;
    }
    return var_r3;
}

void fn_8000E394(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, s32 arg_sp0)
{
    s32 r30_var;
    u32 temp_r3;

    temp_r3 = fn_8010494C(lbl_802AEE20[3]);
    if ((u32) lbl_802AEE20[0] == temp_r3)
        r30_var = 0;
    else {
        if ((u32) lbl_802AEE20[1] == temp_r3)
            r30_var = 1;
        else {
            u32 *temp_r4_2 = (u32 *)(&lbl_802AEE20[1] + 4);
            if ((u32) *(temp_r4_2) == temp_r3)
                r30_var = 2;
            else if ((u32) *(temp_r4_2 + 1) == temp_r3)
                r30_var = 3;
            else if ((u32) *(temp_r4_2 + 2) == temp_r3)
                r30_var = 4;
            else
                r30_var = -1;
        }
    }

    fn_8000E7FC(arg0, arg1, arg2, arg3, arg4, arg5, farg0, farg1, farg2, farg3, farg4);

    if (r30_var == -1)
        r30_var = 0;

    temp_r3 = fn_8010494C(lbl_802AEE20[r30_var]);

    // Check remaining comparisons
    if ((u32) lbl_802AEE20[0] != temp_r3) {
        // These should all be equivalent to the original's logic but simplified:
        // Original checks: lbl_802AEE20[1], *(void**)(lbl_802AEE20 + 4), and *(void**) (lbl_802AEE20 + 8)
        u32 *temp_r4_3 = (u32 *)(&lbl_802AEE20[1]);
        if (((u32) lbl_802AEE20[1] != temp_r3) && ((u32) *(temp_r4_3 + 0) != temp_r3) && ((u32) *(temp_r4_3 + 1) != temp_r3)) {
            /* No-op */
        }
    }
}

void fn_8000E50C(void* arg0) {
    s32 r31;
    s32 r30;
    s32 r29;
    s32 r28;
    struct UnkStruct_802AEE80* r3;
    
    r3 = &gUnk_802AEE80;
    r31 = *(s32*)((s32) arg0 + 0x4);
    if (r31 == 0) {
        return;
    }
    r30 = *(s32*)r31;
    r29 = *(s32*)(r31 + 4);
    r28 = r29 - 1;
    if (r28 < 0) {
        return;
    }
    
    if ((r30 & 0x80000000) != 0) {
        r30 = r30 + 1;
    } else {
        r30 = r30 - 1;
    }
    *(s32*)(r31 + 4) = r28;
    *(s32*)r31 = r30;
}

s32 fn_8000E684(void* arg0) {
    s32* data = (s32*)0x802AEE20;
    s32 i, result = 0;
    
    for (i = 0; i < 5; i++) {
        if (data[i] == 0) {
            result = 1;
            break;
        }
    }
    
    if (result != 0) {
        return 1;
    }
    
    return fn_80004610(arg0);
}

s32 fn_800102BC(s32 arg0, f32 arg1)
{
    extern s32 lbl_802AEE20[5];
    extern f64 lbl_80368C28;

    void *fn_8010494C(void *);
    s32 fn_80104E40(void);

    s32 *table;
    void *result;
    s32 index;
    s32 value;
    s32 i;

    table = lbl_802AEE20;
    index = arg0;

    if (index == -1) {
        result = fn_8010494C((void *)table[0]);

        if (table[0] == (s32)result) {
            index = 0;
        } else if (table[1] == (s32)result) {
            index = 1;
        } else if (table[2] == (s32)result) {
            index = 2;
        } else if (table[3] == (s32)result) {
            index = 3;
        } else if (table[4] == (s32)result) {
            index = 4;
        } else {
            index = -1;
        }
    }

    value = (s32)(arg1 * (f32)fn_80104E40());

    if (index == -1) {
        index = 0;
        result = fn_8010494C((void *)table[index]);

        for (i = 0; i < 5; i++) {
            if (table[i] == (s32)result) {
                break;
            }
        }
    }

    return value;
}

s32 fn_80010428(s32 arg0, s32 arg1, f32 arg2)
{
    u32 *table;
    u32 result;
    s32 index;
    s32 value;
    u32 *p;

    if (arg1 == -1) {
        index = 0;
        result = (u32)fn_8010494C(lbl_802AEE20[index]);
        table = (u32 *)lbl_802AEE20;
        if (table[0] == result) {
            index = 0;
        } else {
            p = table + 1;
            if (table[1] == result) {
                index = 1;
            } else if (*++p == result) {
                index = 2;
            } else if (*++p == result) {
                index = 3;
            } else if (p[1] == result) {
                index = 4;
            } else {
                index = -1;
            }
        }
    }

    value = (s32)(arg2 * (f32)fn_80104FC4(arg0));

    if (index == -1) {
        index = 0;
        result = (u32)fn_8010494C(lbl_802AEE20[index]);
        if (table[0] != result) {
            p = table + 1;
            if (table[1] != result) {
                if (*++p != result) {
                    if (*++p != result) {
                        if (p[1] != result) {
                        }
                    }
                }
            }
        }
    }

    return value;
}

s32 fn_8001059C(s32 arg0, s32 arg1, f32 arg2)
{
    extern s32 lbl_802AEE20[5];

    s32 fn_8010494C(s32);
    s32 fn_80104E68(s32);

    s32 *table;
    s32 result;
    s32 index;
    s32 value;

    table = lbl_802AEE20;
    index = arg1;

    if (index == -1) {
        result = fn_8010494C(table[0]);

        if (table[0] == result) {
            index = 0;
        } else if (table[1] == result) {
            index = 1;
        } else if (table[2] == result) {
            index = 2;
        } else if (table[3] == result) {
            index = 3;
        } else if (table[4] == result) {
            index = 4;
        } else {
            index = -1;
        }
    }

    value = (s32)(arg2 * (f32)fn_80104E68(arg0));

    if (index == -1) {
        index = 0;
        result = fn_8010494C(table[index]);

        if (table[0] != result) {
            if (table[1] != result) {
                if (table[2] != result) {
                    if (table[3] != result) {
                        if (table[4] != result) {
                        }
                    }
                }
            }
        }
    }

    return value;
}

s32 fn_80010710(const char *arg0)
{
  s32 value;
  if (arg0[0] != '#')
  {
    return 0;
  }
  value = (s8) arg0[1];
  switch (value)
  {
    case 'A':

    case 'B':

    case 'C':

    case 'F':

    case 'G':

    case 'I':

    case 'R':

    case 'S':

    case 'X':

    case 'Y':
      return 4;

    case 'P':
      return 5;

    case '#':

    case 'D':

    case 'c':

    case 'e':

    case 'i':

    case 'o':

    case 's':

    case 'x':

    case 'y':
      return 2;

    default:
      return -1;

  }

}

extern f32 lbl_80368BDC;
extern f32 lbl_80368BE0;
extern f64 lbl_80368C20;
s32 fn_80010770(u8 *str, s32 idx, f32 scale) {
    register u8 *digits;
    u32 *tbl;
    u32 found;
    s32 i;
    s32 result;
    f32 fmax;
    u8 *p;
    s32 c;
    s32 code;
    s16 digi;
    s16 shift;
    s32 val;
    f32 ftmp;
    s32 rnd;

    p = str;
    if (idx == -1) {
        idx = 0;
    }
    found = (u32)fn_8010494C((void *)lbl_802AEE20[idx]);
    tbl = (u32 *)lbl_802AEE20;
    if (tbl[0] == found) {
        i = 0;
    } else if (tbl[1] == found) {
        i = 1;
    } else if (tbl[2] == found) {
        i = 2;
    } else if (tbl[3] == found) {
        i = 3;
    } else if (tbl[4] == found) {
        i = 4;
    } else {
        i = -1;
    }

    fmax = lbl_80368BDC;
    result = 0;

    while ((s8)*p != 0) {
        if (*p++ == '#') {
            c = (s8)*p++;
            code = c - '#';
            if ((u32)code <= 0x56U) {
                switch (code) {
                case 30:
                case 31:
                case 32:
                case 36:
                case 38:
                case 47:
                case 53:
                case 85:
                    p += 2;
                    break;
                case 45:
                    p += 3;
                    break;
                case 35:
                    digits = (u8 *)__alloca(8);
                    digi = 0;
                    while ((u8)digi < 2) {
                        c = (s8)*p++;
                        if (c >= '0' && c <= '9') {
                            digits[(u8)digi] = (u8)(c - '0');
                        } else if (c >= 'a' && c <= 'f') {
                            digits[(u8)digi] = (u8)(c - 0x57);
                        } else if (c >= 'A' && c <= 'F') {
                            digits[(u8)digi] = (u8)(c - 0x37);
                        }
                        digi += 1;
                    }
                    val = 0;
                    digi = 1;
                    shift = 0;
                    while (digi >= 0) {
                        val += digits[digi] << shift;
                        digi -= 1;
                        shift += 4;
                    }
                    if (val == -1) {
                        val = 0;
                    }
                    found = (u32)fn_8010494C((void *)lbl_802AEE20[val]);
                    if (tbl[0] == found) {
                    } else if (tbl[1] == found) {
                    } else if (tbl[2] == found) {
                    } else if (tbl[3] == found) {
                    } else if (tbl[4] == found) {
                    }
                    break;
                case 48:
                case 54:
                    digits = (u8 *)__alloca(8);
                    digi = 0;
                    while ((u8)digi < 2) {
                        c = (s8)*p++;
                        if (c >= '0' && c <= '9') {
                            digits[(u8)digi] = (u8)(c - '0');
                        } else if (c >= 'a' && c <= 'f') {
                            digits[(u8)digi] = (u8)(c - 0x57);
                        } else if (c >= 'A' && c <= 'F') {
                            digits[(u8)digi] = (u8)(c - 0x37);
                        }
                        digi += 1;
                    }
                    val = 0;
                    digi = 1;
                    shift = 0;
                    while (digi >= 0) {
                        val += digits[digi] << shift;
                        digi -= 1;
                        shift += 4;
                    }
                    ftmp = (f32)(u32)val * lbl_80368BE0;
                    if (ftmp > fmax) {
                        fmax = ftmp;
                    }
                    break;
                default:
                    break;
                }
            }
        } else {
            rnd = fn_80104E40();
            ftmp = fmax * (f32)rnd * scale;
            rnd = (s32)ftmp;
            if (result < rnd) {
                result = rnd;
            }
        }
    }

    if (i == -1) {
        i = 0;
    }
    found = (u32)fn_8010494C((void *)lbl_802AEE20[i]);
    if (tbl[0] == found) {
    } else if (tbl[1] == found) {
    } else if (tbl[2] == found) {
    } else if (tbl[3] == found) {
    } else if (tbl[4] == found) {
    }
    return result;
}

s32 fn_80010B78(void) {
    s32 r31, r30, r29, r28, r27;
    
    r31 = 0;
    r30 = 0;
    r29 = 0;
    r28 = gUnknown_0x80369C84 < 0;
    r27 = 0;
    
    if (r28 != 0)
        r31 = 0;
    else
        r31 = 1;
        
    return r31;
}

void fn_80010FF0(void) {
    M2C_UNK fn_801047D0();
    fn_801047D0();
}

s32 fn_80011010(s32 arg0){u32 x;u32 *p;if(arg0==-1){x=fn_8010494C(lbl_802AEE20[0],(u32)lbl_802AEE20);p=(u32*)lbl_802AEE20;if(p[0]==x)return 0;if(p[1]==x)return 1;if(p[2]==x)return 2;if(p[3]==x)return 3;if(p[4]==x)return 4;}return -1;}

void fn_800111FC(void) {
    extern s32 lbl_802AEE20[5];
    extern s32 lbl_8036716C;
    extern s8 lbl_80367170;
    s32 ret;

    if (lbl_80367170 == 0) {
        lbl_8036716C = 0;
        lbl_80367170 = 1;
    }
    if (lbl_8036716C == 0) {
        fn_80104D90(0);
        fn_8010494C(0);
        ret = fn_80104944();
        lbl_8036716C = 1;
        lbl_802AEE20[0] = ret;
    }
}

#pragma cplusplus on
extern "C" s32 fn_80011264(void **arg0) {
    struct Obj {
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        virtual s32 v8() = 0;
        virtual s32 v9() = 0;
        virtual s32 v10() = 0;
        virtual s32 v11() = 0;
        virtual s32 v12() = 0;
        virtual s32 v13() = 0;
        virtual s32 v14() = 0;
        virtual s32 v15() = 0;
    };
    return ((Obj *)arg0)->v10() / ((Obj *)arg0)->v14();
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" s32 fn_800112C0(void **arg0) {
    struct Obj {
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        virtual s32 v8() = 0;
        virtual s32 v9() = 0;
        virtual s32 v10() = 0;
        virtual s32 v11() = 0;
        virtual s32 v12() = 0;
        virtual s32 v13() = 0;
        virtual s32 v14() = 0;
        virtual s32 v15() = 0;
    };
    return ((Obj *)arg0)->v9() / ((Obj *)arg0)->v13();
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" u16 fn_8001131C(void *arg0) {
    struct Obj {
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        s32 unk04;
    };
    u16 **fn_8006EDD8(s32, s32);
    Obj *obj = (Obj *)arg0;
    return **fn_8006EDD8(obj->unk04, obj->v7());
}
extern "C" u16 fn_80011368(void *arg0) {
    struct Obj {
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        s32 unk04;
    };
    void **fn_8006EDD8(s32, s32);
    Obj *obj = (Obj *)arg0;
    return *(u16 *)((u8 *)*fn_8006EDD8(obj->unk04, obj->v7()) + 2);
}
#pragma cplusplus reset
s32 fn_800113B4(void) {
    return 0;
}

s32 fn_800113BC(void) {
    return 0;
}

#pragma cplusplus on
extern "C" void fn_800113C4(void *obj, s32 arg1, u8 *color, f32 x, f32 y, f32 z) {
    f64 fn_802387C8(f64, f64);
    void fn_80220DEC(s32, s32, s32);
    extern f64 lbl_80368C38;
    extern f64 lbl_80368C40;
    extern f32 lbl_80368BF0;
    extern f64 lbl_80368C28;
    struct Obj {
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        virtual s32 v8() = 0;
        virtual s32 v9() = 0;
        virtual s32 v10() = 0;
        virtual s32 v11() = 0;
        virtual s32 v12() = 0;
        virtual s32 v13() = 0;
        virtual s32 v14() = 0;
        virtual s32 v15() = 0;
    };
    f32 f30;
    f32 f29;
    f32 f28;
    f32 f27;
    f32 f26;
    f32 f25;
    s32 t;
    s32 idx;
    s32 w;
    s32 rem;
    u8 r, g, b, a;
    f32 f0, f1, f2, f3;
    u8 *wg;

    idx = arg1;
    if (idx < 0) {
        return;
    }
    {
        f32 f = (f32)fn_802387C8(lbl_80368C38, lbl_80368C40);
        f30 = (f32)(s32)(f * (x + (lbl_80368BF0 / f))) / f;
    }
    {
        f32 f = (f32)fn_802387C8(lbl_80368C38, lbl_80368C40);
        f29 = (f32)(s32)(f * (y + (lbl_80368BF0 / f))) / f;
    }
    t = ((Obj *)obj)->v13();
    w = ((Obj *)obj)->v11();
    rem = idx % w;
    f28 = (f32)(rem * t);
    t = ((Obj *)obj)->v14();
    w = ((Obj *)obj)->v11();
    rem = idx / w;
    f27 = (f32)(rem * t);
    f26 = (f32)((Obj *)obj)->v13();
    f25 = (f32)((Obj *)obj)->v14();
    fn_80220DEC(0x80, 0, 4);
    wg = (u8 *)0xCC010000;
    r = color[wg - (u8 *)0xCC010000];
    *(volatile f32 *)(wg - 0x8000) = f30;
    f0 = f30 + f26;
    g = color[1];
    f1 = f28 + f26;
    *(volatile f32 *)(wg - 0x8000) = f29;
    f2 = f29 + f25;
    b = color[2];
    *(volatile f32 *)(wg - 0x8000) = z;
    f3 = f27 + f25;
    a = color[3];
    *(wg - 0x8000) = r;
    *(wg - 0x8000) = g;
    *(wg - 0x8000) = b;
    *(wg - 0x8000) = a;
    *(volatile f32 *)(wg - 0x8000) = f28;
    *(volatile f32 *)(wg - 0x8000) = f27;
    *(volatile f32 *)(wg - 0x8000) = f0;
    *(volatile f32 *)(wg - 0x8000) = f29;
    *(volatile f32 *)(wg - 0x8000) = z;
    *(wg - 0x8000) = r;
    *(wg - 0x8000) = g;
    *(wg - 0x8000) = b;
    *(wg - 0x8000) = a;
    *(volatile f32 *)(wg - 0x8000) = f1;
    *(volatile f32 *)(wg - 0x8000) = f27;
    *(volatile f32 *)(wg - 0x8000) = f0;
    *(volatile f32 *)(wg - 0x8000) = f2;
    *(volatile f32 *)(wg - 0x8000) = z;
    *(wg - 0x8000) = r;
    *(wg - 0x8000) = g;
    *(wg - 0x8000) = b;
    *(wg - 0x8000) = a;
    *(volatile f32 *)(wg - 0x8000) = f1;
    *(volatile f32 *)(wg - 0x8000) = f3;
    *(volatile f32 *)(wg - 0x8000) = f30;
    *(volatile f32 *)(wg - 0x8000) = f2;
    *(volatile f32 *)(wg - 0x8000) = z;
    *(wg - 0x8000) = r;
    *(wg - 0x8000) = g;
    *(wg - 0x8000) = b;
    *(wg - 0x8000) = a;
    *(volatile f32 *)(wg - 0x8000) = f28;
    *(volatile f32 *)(wg - 0x8000) = f3;
}
#pragma cplusplus reset

void fn_800116F0(void **arg0){M2C_UNK fn_802025C0(M2C_UNK*,f32,f32,f32);M2C_UNK fn_80224E50(M2C_UNK*,M2C_UNK,M2C_UNK);extern f32 lbl_80368BDC;u8 sp8[0x30];f32 temp_f1;f32 temp_f31;temp_f1=(f32)M2C_FIELD(*arg0,s32 (**)(),0x30)();temp_f31=lbl_80368BDC/temp_f1;fn_802025C0((M2C_UNK*)sp8,lbl_80368BDC/(f32)M2C_FIELD(*arg0,s32 (**)(void**,f32),0x2C)(arg0,temp_f1),temp_f31,lbl_80368BDC);fn_80224E50((M2C_UNK*)sp8,0x21,1);}

void fn_800117B0(void *arg0) {
    M2C_UNK fn_8006EBC4(s32, M2C_UNK *, M2C_UNK *, s32, s32);
    M2C_UNK fn_80222A3C(M2C_UNK *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80222C50(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_80222CF0(M2C_UNK *, s32);
    M2C_UNK sp14;
    M2C_UNK sp8;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(), 0x24)();
    fn_8006EBC4(M2C_FIELD(arg0, s32 *, 4), &sp14, &sp8, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x28)(arg0), temp_r31);
    fn_80222A3C(&sp14, 0, 0);
    fn_80222C50(&sp14, 1);
    fn_80222CF0(&sp8, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x28)(arg0));
}

void fn_8001185C(void) {
    M2C_UNK fn_80223A5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AA0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AE4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223B4C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
    fn_80223A5C(0, 0xF, 0xF, 0xF, 0xA);
    fn_80223AE4(0, 0, 0, 0, 1, 0);
    fn_80223AA0(0, 7, 4, 5, 7);
    fn_80223B4C(0, 0, 0, 0, 1, 0);
    fn_80223F2C(0, 0, 0, 4);
}

void fn_80011910(void) {
    M2C_UNK fn_802201A8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802239D0(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802201A8(0, 1, 4, 0x21, 0, 0x7D);
    fn_802239D0(0, 0);
    fn_80223F2C(0, 0, 1, 4);
}
