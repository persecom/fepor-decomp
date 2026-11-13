/* Functions from 0x800A39F8 to 0x800A9384, found by decomp-toolkit. */
#include "common.h"
extern u8 lbl_8028C750[16];
extern u16 lbl_8026E408[];
extern void fn_802343E0(void *, s32);
extern void fn_80234450(void *, void *, void *);
extern u8 lbl_80312A80[0x30];


extern s32 lbl_803677A4;
void *fn_800A39F8(void) {
    extern u8 lbl_8026E168[];
    return lbl_8026E168;
}

s32 fn_800A3A04(s32 arg0, s32 arg1) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    fn_80024398(&lbl_803677A4, arg1, 0);
    return 0;
}

void *fn_800A3A30(void) {
    extern u8 lbl_8026E168[];
    return &lbl_8026E168[0x2E];
}

s32 fn_800A3A40(s32 arg0, s32 arg1) {
    M2C_UNK fn_8007982C(s32);
    fn_8007982C(arg1);
    return 0;
}

s32 fn_800A3A68(s32 arg0, s32 arg1) {
    struct Obj {
        u8 pad[0xA0];
        s32 active;
        u8 pad_a4[3];
        u8 flag_a7;
        u8 pad_a8[0x1C];
        f32 f_c4;
        f32 f_c8;
        f32 f_cc;
        s32 timer;
    };
    extern struct Obj lbl_803123A0;
    extern f64 lbl_80369A18;
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    u32 fn_802139F4(void);
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    s32 intr;
    f32 temp_f1;
    s32 temp_r4;
    u32 tmp;
    struct Obj *p;

    var_r30 = arg1;
    var_r29 = arg0;
    p = &lbl_803123A0;
    if (p->active != 0 && p->flag_a7 != 0) {
        tmp = fn_802139F4();
        var_r31 = 0x30;
        if (tmp == 0) {
            var_r31 = 0x20;
        }
        if (var_r29 > 0x7F) {
            var_r29 = 0x7F;
        }
        if (var_r29 < 0) {
            var_r29 = 0;
        }
        if (var_r30 > 0xEA60) {
            var_r30 = 0xEA60;
        }
        if (var_r30 < 0) {
            var_r30 = 0;
        }
        intr = OSDisableInterrupts();
        temp_f1 = (f32)var_r29;
        p = &lbl_803123A0;
        p->f_c8 = temp_f1;
        if (var_r30 != 0) {
            temp_r4 = var_r31 * var_r30;
            p->timer = temp_r4;
            temp_f1 = (temp_f1 - p->f_c4) / (f32)temp_r4;
            p->f_cc = temp_f1;
        } else {
            p->f_c4 = temp_f1;
            p->timer = 0;
        }
        OSRestoreInterrupts(intr);
        return 1;
    }
    return 0;
}

s32 fn_800A3D08(void) {
    extern u8 lbl_803123A0[];
    if (*(s32 *)(lbl_803123A0 + 0xA0) != 0) {
        return *(s32 *)(lbl_803123A0 + 0x50);
    }
    return 0;
}

s32 fn_800A3D2C(void *dst) {
    extern u8 lbl_803123A0[];
    u8 *p;

    p = lbl_803123A0;
    if (*(s32 *)(p + 0xA0) != 0) {
        memcpy(dst, p + 0x8C, 0x10);
        return 1;
    }
    return 0;
}

s32 fn_800A3D74(void *dst) {
    extern u8 lbl_803123A0[];
    u8 *p;

    p = lbl_803123A0;
    if (*(s32 *)(p + 0xA0) != 0) {
        memcpy(dst, p + 0x80, 0xC);
        return 1;
    }
    return 0;
}

void fn_800A3DBC(s16 *arg0, s16 *arg1, u32 arg2) {
    u32 fn_802097D4(void);
    void memcpy(void *, void *, u32);
    void memset(void *, s32, u32);
    extern u16 lbl_8028C578[];

    struct State {
        u8 pad0[0xA0];
        s32 flagA0;
        u8 padA4;
        u8 a5;
        u8 padA6;
        u8 a7;
        u8 padA8[0xC4 - 0xA8];
        f32 c4;
        f32 c8;
        f32 cc;
        s32 d0;
        u8 padD4[0x160 - 0xD4];
        struct {
            s16 *ptr;
            u32 remain;
            u32 pad;
        } slots[3];
        s32 slotIdx;
    };
    extern struct State lbl_803123A0;

    s16 *var_r31;
    u8 var_r30;
    u32 var_r29;
    s16 *var_r28;
    s16 *out;
    s16 *in;
    u32 left;
    u32 n;
    s16 *ring;
    s32 vol;
    s32 samp;
    s32 i;
    u32 var_ctr;
    u16 *table;
    struct State *p;

    var_r31 = arg0;
    var_r30 = 0;
    var_r29 = arg2;
    var_r28 = arg1;

    if (fn_802097D4() == 0) {
        var_r30 = 1;
    }

    if (var_r28 != NULL) {
        p = &lbl_803123A0;
        if (p->flagA0 != 0 && p->a5 == 1 && p->a7 != 0) {
            table = lbl_8028C578;
            left = var_r29;
            out = var_r31;
            in = var_r28;
            while (1) {
                n = p->slots[p->slotIdx].remain;
                if (n != 0) {
                    if (n >= left) {
                        n = left;
                    }
                    ring = p->slots[p->slotIdx].ptr;
                    for (var_ctr = n; var_ctr != 0; var_ctr--) {
                        if (p->d0 != 0) {
                            p->d0 = p->d0 - 1;
                            p->c4 = p->c4 + p->cc;
                        } else {
                            p->c4 = p->c8;
                        }
                        vol = table[(s32)p->c4];
                        samp = in[0] + ((s32)(vol * ring[0]) >> 15);
                        if (samp < -0x8000) {
                            samp = -0x8000;
                        }
                        if (samp > 0x7FFF) {
                            samp = 0x7FFF;
                        }
                        out[0] = (s16)samp;
                        samp = in[1] + ((s32)(vol * ring[1]) >> 15);
                        if (samp < -0x8000) {
                            samp = -0x8000;
                        }
                        if (samp > 0x7FFF) {
                            samp = 0x7FFF;
                        }
                        out[1] = (s16)samp;
                        out += 2;
                        in += 2;
                        ring += 2;
                        if (var_r30) {
                            samp = (s32)(table[0x64] * (out[-1] + out[-2])) >> 15;
                            if (samp < -0x8000) {
                                samp = -0x8000;
                            }
                            if (samp > 0x7FFF) {
                                samp = 0x7FFF;
                            }
                            out[-2] = (s16)samp;
                            out[-1] = (s16)samp;
                        }
                    }
                    left -= n;
                    p->slots[p->slotIdx].remain -= n;
                    p->slots[p->slotIdx].ptr = ring;
                    if (p->slots[p->slotIdx].remain == 0) {
                        i = p->slotIdx + 1;
                        p->slotIdx = i;
                        if (i >= 3) {
                            p->slotIdx = 0;
                        }
                    }
                    if (left == 0) {
                        break;
                    }
                } else {
                    memcpy(out, in, left * 4);
                    break;
                }
            }
        } else {
            memcpy(var_r31, var_r28, var_r29 * 4);
        }
    } else {
        p = &lbl_803123A0;
        if (p->flagA0 != 0 && p->a5 == 1 && p->a7 != 0) {
            table = lbl_8028C578;
            left = var_r29;
            out = var_r31;
            while (1) {
                n = p->slots[p->slotIdx].remain;
                if (n != 0) {
                    if (n >= left) {
                        n = left;
                    }
                    ring = p->slots[p->slotIdx].ptr;
                    for (var_ctr = n; var_ctr != 0; var_ctr--) {
                        if (p->d0 != 0) {
                            p->d0 = p->d0 - 1;
                            p->c4 = p->c4 + p->cc;
                        } else {
                            p->c4 = p->c8;
                        }
                        vol = table[(s32)p->c4];
                        samp = (s32)(vol * ring[0]) >> 15;
                        if (samp < -0x8000) {
                            samp = -0x8000;
                        }
                        if (samp > 0x7FFF) {
                            samp = 0x7FFF;
                        }
                        out[0] = (s16)samp;
                        samp = (s32)(vol * ring[1]) >> 15;
                        if (samp < -0x8000) {
                            samp = -0x8000;
                        }
                        if (samp > 0x7FFF) {
                            samp = 0x7FFF;
                        }
                        out[1] = (s16)samp;
                        out += 2;
                        ring += 2;
                    }
                    left -= n;
                    p->slots[p->slotIdx].remain -= n;
                    p->slots[p->slotIdx].ptr = ring;
                    if (p->slots[p->slotIdx].remain == 0) {
                        i = p->slotIdx + 1;
                        p->slotIdx = i;
                        if (i >= 3) {
                            p->slotIdx = 0;
                        }
                    }
                    if (left == 0) {
                        break;
                    }
                } else {
                    memset(out, 0, left * 4);
                    break;
                }
            }
        } else {
            memset(var_r31, 0, var_r29 * 4);
        }
    }
}

#pragma use_lmw_stmw on
s32 fn_800A41B4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern u8 lbl_803123A0[];
    void fn_800A5334(void *);
    void fn_800A5158(s32, s32, s32, s16, s16, s16, s16, s16, s16);
    void fn_800A57D8(void);
    s32 a1;
    s32 a2;
    s32 a3;
    s32 a4;
    u8 *base;

    a1 = arg1;
    a2 = arg2;
    a3 = arg3;
    a4 = arg4;
    base = lbl_803123A0;
    if (*(s32 *)(base + 0x158) >= 0) {
        fn_800A5334(arg0);
        fn_800A5158(
            *(s32 *)(lbl_803123A0 + 0x14C),
            *(s32 *)(lbl_803123A0 + 0x150),
            *(s32 *)(lbl_803123A0 + 0x154),
            (s16)a1,
            (s16)a2,
            (s16)*(s32 *)(lbl_803123A0 + 0x80),
            (s16)*(s32 *)(lbl_803123A0 + 0x84),
            (s16)a3,
            (s16)a4);
        fn_800A57D8();
        return *(s32 *)(base + 0x158);
    }
    return -1;
}
#pragma use_lmw_stmw reset
s32 fn_800A424C(s32 arg0) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 fn_8023C56C(s32, s32, s32, s32, s32);
    s32 fn_80243AD4(s32, s32, s32);
    s32 fn_8020CB38(void *, s32, s32, s32, void *, s32);
    extern void fn_800A4878(void);
    struct SlotA {
        void *ptr;
        s32 unk4;
        s32 flag;
    };
    struct SlotB {
        s32 f15c;
        s32 f160;
        s32 f164;
    };
    struct Obj {
        u8 pad0[0x50];
        s32 f50;
        s32 f54;
        u8 pad58[0x0c];
        s32 f64;
        s32 f68;
        s32 f6c;
        u8 f70[0x28];
        s32 f98;
        s32 f9c;
        u8 pa0[4];
        u8 fa4;
        u8 fa5;
        u8 fa6;
        u8 fa7;
        s32 fa8;
        s32 fac;
        s32 fb0;
        s32 fb4;
        s32 fb8;
        s32 fbc;
        s32 fc0;
        u8 padc4[0x10];
        struct SlotA slotA[10];
        s32 f14c;
        s32 f150;
        s32 f154;
        s32 f158;
        struct SlotB slotB[3];
        s32 f180;
    };
    extern struct Obj lbl_803123A0;
    struct Obj *p;
    struct Obj *r30;
    struct Obj *r23;
    s32 *r25;
    s32 r26;
    s32 r27;
    s32 r24;
    s32 intr;
    s32 v;

    p = &lbl_803123A0;
    if (p->slotA[p->fb4].flag == 0) {
        return 2;
    }
    r25 = (s32 *)((u8 *)p->slotA[p->fb4].ptr + 8);
    r26 = (s32)((u8 *)p->slotA[p->fb4].ptr + (p->f6c * 4 + 8));
    if (p->fa7 != 0) {
        if (arg0 < 0 || (u32)arg0 >= (u32)p->f98) {
            return 4;
        }
        if (p->slotB[p->f180].f164 == 0) {
            r30 = p;
            r27 = 0;
            while (r27 < p->f6c) {
                switch (*(r30->f70)) {
                    case 0:
                        if (fn_8023C56C(r26, p->f14c, p->f150, p->f154, p->f9c) != 0) {
                            return 1;
                        }
                        p->f158 = p->slotA[p->fb4].unk4;
                        break;
                    case 1:
                        v = fn_80243AD4(p->slotB[p->f180].f15c, r26 + (*r25 * arg0), 0);
                        OSDisableInterrupts();
                        p->slotB[p->f180].f164 = v;
                        p->slotB[p->f180].f160 = p->slotB[p->f180].f15c;
                        OSRestoreInterrupts(v);
                        p->f180 = p->f180 + 1;
                        if (p->f180 >= 3) {
                            p->f180 = 0;
                        }
                        break;
                    default:
                        break;
                }
                v = *r25;
                r25++;
                r30 = (struct Obj *)((u8 *)r30 + 1);
                r27++;
                r26 += v;
            }
        } else {
            return 3;
        }
    } else {
        r23 = p;
        r24 = 0;
        while (r24 < p->f6c) {
            if (*(r23->f70) == 0) {
                if (fn_8023C56C(r26, p->f14c, p->f150, p->f154, p->f9c) != 0) {
                    return 1;
                }
                p->f158 = p->slotA[p->fb4].unk4;
            }
            v = *r25;
            r25++;
            r23 = (struct Obj *)((u8 *)r23 + 1);
            r24++;
            r26 += v;
        }
    }

    p->slotA[p->fb4].flag = 0;
    p->fb4 = (p->fb4 + 1) % 10;
    intr = OSDisableInterrupts();
    if (p->slotA[p->fb8].flag == 0 && p->fb0 == 0 && p->fac == 0 && p->fa4 == 1) {
        if ((u32)p->fc0 > (u32)(p->f50 - 1)) {
            if (p->fa6 == 1) {
                p->fc0 = 0;
                p->fa8 = p->f64;
                p->fbc = p->f54;
                goto block_39;
            }
        } else {
        block_39:
            p->fb0 = 1;
            if (fn_8020CB38(p, (s32)p->slotA[p->fb8].ptr, p->fbc, p->fa8, fn_800A4878, 2) != 1) {
                p->fb0 = 0;
                p->fac = 1;
            }
        }
    }
    OSRestoreInterrupts(intr);
    return 0;
}

s32 fn_800A45C4(void) {
    M2C_UNK fn_8020F334(M2C_UNK *);
    extern M2C_UNK lbl_803123A0;
    if (((s32) M2C_FIELD(&lbl_803123A0, s32 *, 0xA0) != 0) && ((u8) M2C_FIELD(&lbl_803123A0, u8 *, 0xA5) == 0)) {
        M2C_FIELD(&lbl_803123A0, s8 *, 0xA4) = 0;
        if ((u32) M2C_FIELD(&lbl_803123A0, u32 *, 0xB0) != 0U) {
            fn_8020F334(&lbl_803123A0);
            M2C_FIELD(&lbl_803123A0, u32 *, 0xB0) = 0U;
        }
        if (0 < 0xA) {
            M2C_FIELD(&lbl_803123A0, s32 *, 0xDC) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0xE8) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0xF4) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x100) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x10C) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x118) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x124) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x130) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x13C) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x148) = 0;
        }
        M2C_FIELD(&lbl_803123A0, s32 *, 0x164) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x170) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x17C) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x158) = -1;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xA8) = (s32) M2C_FIELD(&lbl_803123A0, s32 *, 0x64);
        M2C_FIELD(&lbl_803123A0, s32 *, 0xBC) = (s32) M2C_FIELD(&lbl_803123A0, s32 *, 0x54);
        M2C_FIELD(&lbl_803123A0, s32 *, 0xB8) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xC0) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xAC) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xB4) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x180) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x184) = 0;
        M2C_FIELD(&lbl_803123A0, f32 *, 0xC4) = (f32) M2C_FIELD(&lbl_803123A0, f32 *, 0xC8);
        M2C_FIELD(&lbl_803123A0, s32 *, 0xD0) = 0;
        return 1;
    }
    return 0;
}

void fn_800A46CC(void) {
    extern u8 lbl_803123A0[];
    lbl_803123A0[0xA5] = 0;
}

void fn_800A46E0(void) {
    extern u8 lbl_803123A0[];
    lbl_803123A0[0xA5] = 1;
}

s32 fn_800A4BC4(void) {
    extern u8 lbl_803123A0[];
    u8 *p = lbl_803123A0;
    u32 prod;
    s32 v44;
    s32 w;
    s32 aligned;
    s32 sum;
    s32 t0;
    u8 a7;

    if (*(s32 *)(p + 0xA0) != 0) {
        w = *(s32 *)(p + 0x80);
        prod = w * *(s32 *)(p + 0x84);
        v44 = *(s32 *)(p + 0x44);
        a7 = p[0xA7];
        aligned = (v44 + 0x1F) & ~0x1F;
        sum = aligned * 0xA;
        sum += (prod + 0x1F) & ~0x1F;
        t0 = ((prod >> 2) + 0x1F) & ~0x1F;
        sum = sum + t0;
        sum = sum + t0;
        if (a7 != 0) {
            sum += ((((*(s32 *)(p + 0x48) << 2) + 0x1F) & ~0x1F) * 3);
        }
        return sum + 0x1000;
    }
    return 0;
}

s32 fn_800A4C48(void) {
    void fn_8020C79C(void);
    extern u8 lbl_803123A0[];
    u8 *p;

    p = lbl_803123A0;
    if (*(s32 *)(p + 0xA0) == 0) {
        goto ret0;
    }
    if (p[0xA4] != 0) {
        goto ret0;
    }
    if (p[0xA7] == 0) {
        goto check_b0;
    }
    if (p[0xA5] != 1) {
        goto clear_a5;
    }
    return 0;
clear_a5:
    p[0xA5] = 0;
check_b0:
    if (*(u32 *)(lbl_803123A0 + 0xB0) != 0U) {
        goto ret0;
    }
    *(s32 *)(p + 0xA0) = 0;
    fn_8020C79C();
    return 1;
ret0:
    return 0;
}

#pragma use_lmw_stmw on
s32 fn_800A4CD8(s32 arg0) {
    s32 fn_8020C6D4(s32, void *);
    void fn_8020C79C(void *);
    s32 fn_8020CC28(void *, void *, s32, s32, s32);
    s32 fn_802342B8(void *, void *);
    void *memset(void *, s32, s32);
    void *memcpy(void *, void *, s32);
    extern s32 lbl_803677B0;
    extern u8 lbl_803123A0[];
    extern u8 lbl_80312540[];
    extern u8 lbl_8026E1A8[];
    extern f32 lbl_80369A20;

    s32 r24;
    u8 *p6c;
    s32 off;
    u8 *types;
    u8 *loopBase;
    u8 *p80;
    u8 *p8c;
    u8 *base;

    r24 = arg0;
    if (lbl_803677B0 == 0) {
        return 0;
    }
    base = lbl_803123A0;
    if (*(s32 *)(base + 0xA0) != 0) {
        return 0;
    }
    p80 = base + 0x80;
    memset(p80, 0, 0xC);
    p8c = lbl_803123A0 + 0x8C;
    memset(p8c, 0, 0x10);
    if (fn_8020C6D4(r24, lbl_803123A0) == 0) {
        return 0;
    }
    if (fn_8020CC28(lbl_803123A0, lbl_80312540, 0x40, 0, 2) < 0) {
        fn_8020C79C(lbl_803123A0);
        return 0;
    }
    r24 = (s32)(lbl_803123A0 + 0x3C);
    memcpy((void *)r24, lbl_80312540, 0x30);
    if (fn_802342B8((void *)r24, lbl_8026E1A8) != 0) {
        fn_8020C79C(lbl_803123A0);
        return 0;
    }
    {
        u8 *tmp = lbl_803123A0;
        if ((u32)(*(u32 *)(tmp + 0x40) - 0x10000) != 0x1000U) {
            fn_8020C79C(tmp);
            return 0;
        }
        r24 = *(s32 *)(tmp + 0x5C);
        if (fn_8020CC28(tmp, lbl_80312540, 0x20, r24, 2) < 0) {
            fn_8020C79C(lbl_803123A0);
            return 0;
        }
    }
    p6c = lbl_803123A0 + 0x6C;
    memcpy(p6c, lbl_80312540, 0x14);
    off = r24 + 0x14;
    loopBase = lbl_803123A0;
    {
        u8 zero = 0;
        loopBase[0xA7] = zero;
    }
    types = loopBase;
    r24 = 0;
    goto loop_cond;
loop_body:
    switch (types[0x70]) {
    case 0:
        if (fn_8020CC28(lbl_803123A0, lbl_80312540, 0x20, off, 2) < 0) {
            fn_8020C79C(lbl_803123A0);
            return 0;
        }
        memcpy(p80, lbl_80312540, 0xC);
        off += 0xC;
        break;
    case 1:
        if (fn_8020CC28(lbl_803123A0, lbl_80312540, 0x20, off, 2) < 0) {
            fn_8020C79C(lbl_803123A0);
            return 0;
        }
        memcpy(p8c, lbl_80312540, 0x10);
        loopBase[0xA7] = 1;
        off += 0x10;
        break;
    default:
        return 0;
    }
    types += 1;
    r24 += 1;
loop_cond:
    if ((u32)r24 < *(u32 *)p6c) {
        goto loop_body;
    }
    loopBase = lbl_803123A0;
    *(s32 *)(loopBase + 0xA8) = *(s32 *)(loopBase + 0x64);
    *(s32 *)(loopBase + 0xBC) = *(s32 *)(loopBase + 0x54);
    *(s32 *)(loopBase + 0xB8) = 0;
    *(s32 *)(loopBase + 0xC0) = 0;
    *(s32 *)(loopBase + 0xAC) = 0;
    *(s32 *)(loopBase + 0x158) = -1;
    *(s32 *)(loopBase + 0xB4) = 0;
    *(s32 *)(loopBase + 0x180) = 0;
    *(s32 *)(loopBase + 0x184) = 0;
    loopBase[0xA4] = 0;
    loopBase[0xA5] = 0;
    loopBase[0xA6] = 0;
    *(s32 *)(base + 0xA0) = 1;
    *(f32 *)(loopBase + 0xC4) = lbl_80369A20;
    *(f32 *)(loopBase + 0xC8) = lbl_80369A20;
    *(s32 *)(loopBase + 0xD0) = 0;
    return 1;
}
void fn_800A4FF8(void) {
    s32 OSDisableInterrupts();
    M2C_UNK OSRestoreInterrupts(s32);
    M2C_UNK fn_8021371C(u32);
    extern s32 lbl_803677B0;
    extern u32 lbl_803677B8;
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    if ((u32) lbl_803677B8 != 0U) {
        fn_8021371C(lbl_803677B8);
    }
    OSRestoreInterrupts(temp_r31);
    lbl_803677B0 = 0;
}

void fn_800A5158(s32 arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, u16 arg5, u16 arg6, s16 arg7, s16 arg_sp8) {
    M2C_UNK fn_80220DEC(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80222644(M2C_UNK *, s32, u16, u16, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802228D8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
    M2C_UNK fn_80222C50(M2C_UNK *, M2C_UNK);
    extern f32 lbl_80369A3C;
    M2C_UNK sp48[8];
    M2C_UNK sp28[8];
    M2C_UNK sp8[8];
    s16 temp_r5;
    s16 temp_r6;
    s32 temp_r28;
    s32 temp_r29;

    fn_80222644(sp48, arg0, arg5, arg6, 1, 0, 0, 0);
    fn_802228D8(sp48, 0, 0, 0, 0, 0, lbl_80369A3C, lbl_80369A3C, lbl_80369A3C);
    fn_80222C50(sp48, 0);
    temp_r28 = (s16) arg5 >> 1;
    temp_r29 = (s16) arg6 >> 1;
    fn_80222644(sp28, arg1, (u16) temp_r28, (u16) temp_r29, 1, 0, 0, 0);
    fn_802228D8(sp28, 0, 0, 0, 0, 0, lbl_80369A3C, lbl_80369A3C, lbl_80369A3C);
    fn_80222C50(sp28, 1);
    fn_80222644(sp8, arg2, (u16) temp_r28, (u16) temp_r29, 1, 0, 0, 0);
    fn_802228D8(sp8, 0, 0, 0, 0, 0, lbl_80369A3C, lbl_80369A3C, lbl_80369A3C);
    fn_80222C50(sp8, 2);
    fn_80220DEC(0x80, 7, 4);
    *(s16 *)0xCC008000 = arg3;
    temp_r6 = arg4 + arg_sp8;
    *(s16 *)0xCC008000 = arg4;
    temp_r5 = arg3 + arg7;
    *(s16 *)0xCC008000 = 0;
    *(s16 *)0xCC008000 = 0;
    *(s16 *)0xCC008000 = 0;
    *(s16 *)0xCC008000 = temp_r5;
    *(s16 *)0xCC008000 = arg4;
    *(s16 *)0xCC008000 = 0;
    *(s16 *)0xCC008000 = 1;
    *(s16 *)0xCC008000 = 0;
    *(s16 *)0xCC008000 = temp_r5;
    *(s16 *)0xCC008000 = temp_r6;
    *(s16 *)0xCC008000 = 0;
    *(s16 *)0xCC008000 = 1;
    *(s16 *)0xCC008000 = 1;
    *(s16 *)0xCC008000 = arg3;
    *(s16 *)0xCC008000 = temp_r6;
    *(s16 *)0xCC008000 = 0;
    *(s16 *)0xCC008000 = 0;
    *(s16 *)0xCC008000 = 1;
}

void fn_800A5334(void *arg0) {
    void fn_80201FC4(void *);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80221A2C(s32);
    void fn_80222334(s32);
    void fn_80220428(s32);
    void fn_80222EB4(void);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223C14(s32, s32 *, s32);
    void fn_80223C78(s32, s32 *);
    void fn_80223CDC(s32, s32);
    void fn_80223D38(s32, s32);
    void fn_80223D94(s32, s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80224C4C(void *, s32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    void fn_80225058(s32, s32, s32, s32);
    void fn_80223DDC(s32, s32, s32, s32, s32);
    extern s32 lbl_80369A28;
    extern s32 lbl_80369A2C;
    extern s32 lbl_80369A30;
    extern s32 lbl_80369A34;
    extern s32 lbl_80369A38;
    u8 sp4C[0x44];
    u8 sp1C[0x30];
    s32 sp14[2];
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r31;
    s32 temp_r30;
    temp_r31 = M2C_FIELD(arg0, u16 *, 4);
    temp_r30 = M2C_FIELD(arg0, u16 *, 6);
    fn_80202B3C(sp4C, 0.0f, (f32)temp_r30, 0.0f, (f32)temp_r31, 0.0f, -1.0f);
    fn_80224C4C(sp4C, 1);
    fn_80224FEC(0.0f, 0.0f, (f32)temp_r31, (f32)temp_r30, 0.9f, 0.9f);
    fn_80225058(0, 0, temp_r31, temp_r30);
    fn_80201FC4(sp1C);
    fn_80224D7C(sp1C, 0);
    fn_80224E1C(0);
    fn_80224684(1, 3, 1);
    fn_802245D8(0, 1, 0, 0);
    fn_80221A2C(0);
    fn_80222334(0);
    fn_80220428(2);
    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
    fn_802201A8(1, 1, 4, 0x3C, 0, 0x7D);
    fn_80222EB4();
    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021F4E4(0xD, 1);
    fn_8021FBF0(7, 9, 1, 3, 0);
    fn_8021FBF0(7, 0xD, 1, 2, 0);
    fn_802240C8(4);
    fn_80223F2C(0, 1, 1, 0xFF);
    fn_80223A5C(0, 0xF, 8, 0xE, 2);
    fn_80223AE4(0, 0, 0, 0, 0, 0);
    fn_80223AA0(0, 7, 4, 6, 1);
    fn_80223B4C(0, 1, 0, 0, 0, 0);
    fn_80223CDC(0, 0xC);
    fn_80223D38(0, 0x1C);
    fn_80223D94(0, 0, 0);
    fn_80223F2C(1, 1, 2, 0xFF);
    fn_80223A5C(1, 0xF, 8, 0xE, 0);
    fn_80223AE4(1, 0, 0, 1, 0, 0);
    fn_80223AA0(1, 7, 4, 6, 0);
    fn_80223B4C(1, 1, 0, 0, 0, 0);
    fn_80223CDC(1, 0xD);
    fn_80223D38(1, 0x1D);
    fn_80223D94(1, 0, 0);
    fn_80223F2C(2, 0, 0, 0xFF);
    fn_80223A5C(2, 0xF, 8, 0xC, 0);
    fn_80223AE4(2, 0, 0, 0, 1, 0);
    fn_80223AA0(2, 4, 7, 7, 0);
    fn_80223B4C(2, 0, 0, 0, 1, 0);
    fn_80223D94(2, 0, 0);
    fn_80223F2C(3, 0xFF, 0xFF, 0xFF);
    fn_80223A5C(3, 1, 0, 0xE, 0xF);
    fn_80223AE4(3, 0, 0, 0, 1, 0);
    fn_80223AA0(3, 7, 7, 7, 7);
    fn_80223B4C(3, 0, 0, 0, 1, 0);
    fn_80223D94(3, 0, 0);
    fn_80223CDC(3, 0xE);
    sp14[0] = lbl_80369A28;
    sp14[1] = lbl_80369A2C;
    fn_80223C14(1, sp14, lbl_80369A28);
    sp10 = lbl_80369A30;
    fn_80223C78(0, &sp10);
    spC = lbl_80369A34;
    fn_80223C78(1, &spC);
    sp8 = lbl_80369A38;
    fn_80223C78(2, &sp8);
    fn_80223DDC(0, 0, 1, 2, 3);
}

void fn_800A57D8(void) {
    M2C_UNK fn_80220428(M2C_UNK);
    M2C_UNK fn_80222334(M2C_UNK);
    M2C_UNK fn_802239D0(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223D94(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223DDC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802240C8(M2C_UNK);
    M2C_UNK fn_802245D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80224684(M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80224684(1, 7, 1);
    fn_802245D8(0, 1, 0, 0xF);
    fn_80220428(1);
    fn_80222334(0);
    fn_802240C8(1);
    fn_80223F2C(0, 0, 0, 0xFF);
    fn_802239D0(0, 3);
    fn_80223D94(0, 0, 0);
    fn_80223D94(1, 0, 0);
    fn_80223D94(2, 0, 0);
    fn_80223D94(3, 0, 0);
    fn_80223DDC(0, 0, 1, 2, 3);
    fn_80223DDC(1, 0, 0, 0, 3);
    fn_80223DDC(2, 1, 1, 1, 3);
    fn_80223DDC(3, 2, 2, 2, 3);
}

void fn_800A58F0(s32 arg0) {
    void *fn_8000BCA4(void *);
    void *fn_8000CAF0(void *, void *);
    extern u8 lbl_8026E1B0[];
    extern u8 lbl_8028C6A8[];
    void *temp;

    temp = fn_8000BCA4(lbl_8026E1B0 + 0x15);
    if (temp != NULL) {
        temp = fn_8000CAF0(lbl_8028C6A8, temp);
        *(s32 *)((u8 *)temp + 0x30) = arg0;
    }
}

void fn_800A5944(s32 arg0) {
    M2C_UNK fn_8006EDA0(s32);
    fn_8006EDA0(arg0 + 0x34);
}

#pragma optimization_level 2
void fn_800A5968(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8000C188(void *);
    extern f32 lbl_80369A50;
    extern f32 lbl_80369A54;
    extern f32 lbl_80369A58;
    extern f32 lbl_80369A5C;
    extern f32 lbl_80369A60;
    extern f32 lbl_80369A64;
    extern f32 lbl_80369A68;
    extern f32 lbl_80369A6C;
    extern f32 lbl_80369A70;
    s32 temp_r0;
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(arg0, s32 *, 0x38) + 1;
    M2C_FIELD(arg0, s16 *, 0x40) = 0x40;
    if (M2C_FIELD(arg0, s32 *, 0x38) < 0x46) {
        M2C_FIELD(arg0, u8 *, 0x60) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_r0 >= 0x46 && temp_r0 <= 0x64) {
        M2C_FIELD(arg0, u8 *, 0x61) = 8;
        M2C_FIELD(arg0, s16 *, 0x42) = (s16)fn_800067BC(4, lbl_80369A50, lbl_80369A54, (f32)(M2C_FIELD(arg0, s32 *, 0x38) - 0x46), lbl_80369A58);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8)fn_800067BC(0, lbl_80369A5C, lbl_80369A60, (f32)(M2C_FIELD(arg0, s32 *, 0x38) - 0x46), lbl_80369A58);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_r3 >= 0xC8 && temp_r3 <= 0xDC) {
        M2C_FIELD(arg0, u8 *, 0x60) = (u8)fn_800067BC(0, lbl_80369A60, lbl_80369A5C, (f32)(temp_r3 - 0xC8), lbl_80369A64);
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) > 0xDC) {
        fn_8000C188(arg0);
    }
    fn_8000A258();
    fn_80009D74(lbl_80369A5C, lbl_80369A5C, lbl_80369A5C, lbl_80369A68);
    fn_80009B8C(0xFF);
    fn_80009F90(M2C_FIELD(arg0, s32 *, 0x34), 0, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838((f32)M2C_FIELD(arg0, s16 *, 0x40), (f32)M2C_FIELD(arg0, s16 *, 0x42), lbl_80369A5C, lbl_80369A5C);
    fn_80007818((f32)(M2C_FIELD(arg0, s16 *, 0x40) + 0x1E0), (f32)(M2C_FIELD(arg0, s16 *, 0x42) + 0xA0), lbl_80369A6C, lbl_80369A70);
    fn_800076AC(0xFF, 0xFF, 0xFF, M2C_FIELD(arg0, u8 *, 0x60));
    fn_80007884();
}
#pragma optimization_level reset
void fn_800A5BB4(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    s32 fn_8005C6A0(s32);
    M2C_UNK fn_8006EEFC(s32, s32);
    if (fn_8005C6A0(arg0 + 0x44) & 0x2000) {
        fn_8006EEFC(arg0 + 0x34, arg0 + 0x44);
        fn_8000C188(arg0);
    }
}

void fn_800A5C00(void *arg0)
{
    extern u8 lbl_8026E1B0[];

    extern void fn_80234450(void *, const char *);
    extern s32 fn_80231D94(char *, const char *, ...);
    extern void fn_802343E0(void *, const char *);
    extern void fn_8005C8B4(void *);

    u8 *obj;
    char buffer[0x10];

    obj = (u8 *)arg0;

    *(u32 *)(obj + 0x38) = 0;

    fn_80234450(
        obj + 0x44,
        (const char *)lbl_8026E1B0 + 0x2E
    );

    fn_80231D94(
        buffer,
        (const char *)lbl_8026E1B0 + 0x42,
        *(u32 *)(obj + 0x30)
    );

    fn_802343E0(obj + 0x44, buffer);

    fn_802343E0(
        obj + 0x44,
        (const char *)lbl_8026E1B0 + 0x45
    );

    fn_8005C8B4(obj + 0x44);
}

extern u16 lbl_802B9E80;
s32 fn_800A5C88(void) {
    extern u16 lbl_8028C678[];
    s32 v = fn_8000C0C0(lbl_8028C678);
    return v != 0;
}

void fn_800A5CBC(void) {
    extern u16 lbl_8028C678[];
    u32 temp_r3 = fn_8000C0C0(&lbl_8028C678[0]);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 0x63);
    }
}

void fn_800A5CF4(void) {
    M2C_UNK fn_800A3A68(M2C_UNK, M2C_UNK);
    fn_800A3A68(0, 0x64);
}

void fn_800A5D1C(void *arg0, s8 arg1, s32 arg2) {
    void *fn_8000CAF0(void *, M2C_UNK);
    u16 fn_8005C144();
    s32 fn_800C42AC(M2C_UNK);
    M2C_UNK fn_80147188(M2C_UNK);
    M2C_UNK fn_801C9724();
    M2C_UNK fn_8023440C(s32, void *, M2C_UNK);
    extern u8 lbl_8026E1B0[];
    extern u8 lbl_8028C678[];
    void *temp_r31;

    if ((u16) fn_8005C144() == 0x8000) {
        arg0 = lbl_8026E1B0 + 0x4A;
    }
    temp_r31 = fn_8000CAF0(lbl_8028C678, 5);
    M2C_FIELD(temp_r31, s32 *, 0x5C) = fn_800C42AC(0x100);
    fn_8023440C(M2C_FIELD(temp_r31, s32 *, 0x5C), arg0, 0xFE);
    M2C_FIELD(temp_r31, s8 *, 0x54) = arg1;
    M2C_FIELD(temp_r31, s32 *, 0x58) = arg2;
    fn_801C9724();
    fn_80147188(1);
}

void fn_800A5DC4(void *arg0)
{
    void fn_800A46CC(void);
    void fn_800A45C4(void);
    void fn_800A4C48(void);
    void fn_800C4588(void *);
    void fn_800A4FF8(void);
    void fn_8009E638(void);
    void fn_801C9714(void);
    void fn_800C426C(void *);
    void *fn_8006E658(void);
    void fn_80221824(u8, void *, s32, void *);
    extern u8 lbl_80330708[];
    extern s32 lbl_803682A4;
    extern f32 lbl_80369A68;
    extern f32 lbl_80369A80;
    extern f32 lbl_80369A84;
    extern s32 lbl_8036C478;
    extern u16 lbl_8036C47C;
    extern u8 lbl_8036C47E;
    struct {
        s32 unk0;
        u16 unk4;
        u8 unk6;
    } sp10;
    u32 spC;
    u32 sp8;
    s32 temp_r0;
    u16 temp_r8;
    u8 *var_r9;
    s32 var_r7;
    s32 count;
    s32 temp_r7;
    s32 var_ctr;
    u8 *var_r8;
    void *temp_r3;

    fn_800A46CC();
    fn_800A45C4();
    fn_800A4C48();
    fn_800C4588(*(void **)((u8 *)arg0 + 0x4C));
    *(s32 *)((u8 *)arg0 + 0x4C) = 0;
    fn_800A4FF8();
    fn_8009E638();
    fn_801C9714();
    fn_800C426C(*(void **)((u8 *)arg0 + 0x5C));
    if (lbl_803682A4 & 0x40) {
        temp_r3 = fn_8006E658();
        var_r9 = (u8 *)&spC;
        var_r7 = 0;
        temp_r0 = (s32)((f32)(s8)lbl_80330708[0xA1] * lbl_80369A68);
        temp_r8 = (s8)lbl_80330708[0xA1] - (u16)temp_r0;
        count = temp_r8 % 4;
        for (var_ctr = 2; var_ctr != 0; var_ctr--) {
            if (var_r7 < count) {
                *var_r9 = (u8)(s32)((f32)temp_r8 * lbl_80369A80 + lbl_80369A68);
            } else {
                *var_r9 = (u8)(s32)((f32)temp_r8 * lbl_80369A80);
            }
            temp_r7 = var_r7 + 1;
            if (temp_r7 < count) {
                var_r9[1] = (u8)(s32)((f32)temp_r8 * lbl_80369A80 + lbl_80369A68);
            } else {
                var_r9[1] = (u8)(s32)((f32)temp_r8 * lbl_80369A80);
            }
            var_r9 += 2;
            var_r7 = temp_r7 + 1;
        }
        var_r8 = (u8 *)&sp8;
        var_r7 = 0;
        for (var_ctr = 3; var_ctr != 0; var_ctr--) {
            if (var_r7 < (s32)((u16)temp_r0 % 3)) {
                *var_r8 = (u8)(s32)(lbl_80369A68 + (f32)(u16)temp_r0 / lbl_80369A84);
            } else {
                *var_r8 = (u8)(s32)((f32)(u16)temp_r0 / lbl_80369A84);
            }
            var_r8 += 1;
            var_r7 += 1;
        }
        sp10.unk0 = lbl_8036C478;
        sp10.unk4 = lbl_8036C47C;
        sp10.unk6 = lbl_8036C47E;
        *(u8 *)&sp10.unk0 = *((u8 *)&spC + 2);
        *((u8 *)&sp10.unk0 + 1) = *(u8 *)&spC;
        *((u8 *)&sp10.unk0 + 2) = *((u8 *)&sp8 + 1);
        *((u8 *)&sp10.unk0 + 3) = *(u8 *)&sp8;
        *(u8 *)&sp10.unk4 = *((u8 *)&sp8 + 2);
        *((u8 *)&sp10.unk4 + 1) = *((u8 *)&spC + 1);
        *((u8 *)&sp10.unk0 + 6) = *((u8 *)&spC + 3);
        fn_80221824(*(u8 *)((u8 *)temp_r3 + 0x19), (u8 *)temp_r3 + 0x1A, 1, &sp10);
    }
}

void fn_800A60A4(void *arg0) {
    void *fn_8006E658(void);
    void fn_8009E64C(void);
    void fn_8009E688(void);
    void fn_800A41B4(void *, u32, u32, s32, s32);
    void fn_800A424C(s32);
    void fn_800A46E0(void);
    s32 x;
    s32 y;
    void *ret;

    fn_8009E688();
    fn_800A424C(*(s32 *)((u8 *)arg0 + 0x50));
    ret = fn_8006E658();
    x = *(s32 *)((u8 *)arg0 + 0x30);
    y = *(s32 *)((u8 *)arg0 + 0x34);
    fn_800A41B4(ret, (u32)(0x260 - x) >> 1, (u32)(0x1C0 - y) >> 1, x, y);
    fn_8009E64C();
    if (*(u8 *)((u8 *)arg0 + 0x55) != 0) {
        fn_800A46E0();
        *(u8 *)((u8 *)arg0 + 0x55) = 0;
    }
}

#pragma use_lmw_stmw on
void fn_800A6114(void *arg0)
{
    void *fn_8006E658(void);
    s16 fn_800A3D08(void);
    void fn_800A3D2C(void *);
    void fn_800A3D74(void *);
    void fn_800A46F4(s32);
    void fn_800A49F4(s32);
    s32 fn_800A4BC4(void);
    void fn_800A4CD8(s32);
    void fn_800A5048(s32);
    s32 fn_800C45B8(s32, void *, s32);
    void fn_80221824(u8, void *, s32, void *);
    u32 OSGetTick(void);
    extern u8 lbl_8026E1B0[];
    extern u8 lbl_80330708[];
    extern s32 lbl_803682A4;
    extern f32 lbl_80369A68;
    extern f32 lbl_80369A80;
    extern f32 lbl_80369A84;
    extern f32 lbl_80369A90;
    extern s32 lbl_8036C478;
    extern u16 lbl_8036C47C;
    extern u8 lbl_8036C47E;
    struct {
        s32 unk0;
        u16 unk4;
        u8 unk6;
    } sp10;
    u32 spC;
    u32 sp8;
    s32 temp_r0;
    u16 temp_r8;
    u8 *var_r9;
    s32 var_r7;
    s32 count;
    s32 temp_r7;
    s32 var_ctr;
    u8 *var_r8;
    void *temp_r3;
    void *self;

    self = arg0;
    if (lbl_803682A4 & 0x40) {
        temp_r3 = fn_8006E658();
        var_r9 = (u8 *)&spC;
        var_r7 = 0;
        temp_r0 = (s32)((f32)(s8)lbl_80330708[0xA1] * lbl_80369A90);
        temp_r8 = (s8)lbl_80330708[0xA1] - (u16)temp_r0;
        count = temp_r8 % 4;
        for (var_ctr = 2; var_ctr != 0; var_ctr--) {
            if (var_r7 < count) {
                *var_r9 = (u8)(s32)((f32)temp_r8 * lbl_80369A80 + lbl_80369A68);
            } else {
                *var_r9 = (u8)(s32)((f32)temp_r8 * lbl_80369A80);
            }
            temp_r7 = var_r7 + 1;
            if (temp_r7 < count) {
                var_r9[1] = (u8)(s32)((f32)temp_r8 * lbl_80369A80 + lbl_80369A68);
            } else {
                var_r9[1] = (u8)(s32)((f32)temp_r8 * lbl_80369A80);
            }
            var_r9 += 2;
            var_r7 = temp_r7 + 1;
        }
        var_r8 = (u8 *)&sp8;
        var_r7 = 0;
        for (var_ctr = 3; var_ctr != 0; var_ctr--) {
            if (var_r7 < (s32)((u16)temp_r0 % 3)) {
                *var_r8 = (u8)(s32)(lbl_80369A68 + (f32)(u16)temp_r0 / lbl_80369A84);
            } else {
                *var_r8 = (u8)(s32)((f32)(u16)temp_r0 / lbl_80369A84);
            }
            var_r8 += 1;
            var_r7 += 1;
        }
        sp10.unk0 = lbl_8036C478;
        sp10.unk4 = lbl_8036C47C;
        sp10.unk6 = lbl_8036C47E;
        *(u8 *)&sp10.unk0 = *((u8 *)&spC + 2);
        *((u8 *)&sp10.unk0 + 1) = *(u8 *)&spC;
        *((u8 *)&sp10.unk0 + 2) = *((u8 *)&sp8 + 1);
        *((u8 *)&sp10.unk0 + 3) = *(u8 *)&sp8;
        *(u8 *)&sp10.unk4 = *((u8 *)&sp8 + 2);
        *((u8 *)&sp10.unk4 + 1) = *((u8 *)&spC + 1);
        *((u8 *)&sp10.unk0 + 6) = *((u8 *)&spC + 3);
        fn_80221824(*(u8 *)((u8 *)temp_r3 + 0x19), (u8 *)temp_r3 + 0x1A, 1, &sp10);
    }
    if (*(u8 *)((u8 *)self + 0x54) == 0) {
        *(u8 *)((u8 *)self + 0x54) = 1;
    }
    fn_800A5048(2);
    fn_800A4CD8(*(s32 *)((u8 *)self + 0x5C));
    fn_800A3D74((u8 *)self + 0x30);
    fn_800A3D2C((u8 *)self + 0x3C);
    *(s32 *)((u8 *)self + 0x4C) = fn_800C45B8(-fn_800A4BC4(), lbl_8026E1B0 + 0x56, 0);
    fn_800A49F4(*(s32 *)((u8 *)self + 0x4C));
    fn_800A46F4(1);
    {
        u32 tick = OSGetTick();
        u32 period = *(u32 *)((u8 *)self + 0x48);
        *(u32 *)((u8 *)self + 0x50) = tick % period;
    }
    *(s16 *)((u8 *)self + 0x28) = fn_800A3D08();
    *(u8 *)((u8 *)self + 0x55) = 1;
}
#pragma global_optimizer off
void fn_800A6450(void) {
    void fn_8000D3EC(void *, void *);
    void fn_8010554C(void);
    void fn_80196078(void);
    extern u8 lbl_8026E208[];
    extern u8 lbl_8028C6D8[];
    u8 *dst;

    dst = lbl_8028C6D8;
    fn_8000D3EC(lbl_8026E208 + 0xCE, dst + 0x18);
    fn_8000D3EC(lbl_8026E208 + 0xE0, dst + 0x28);
    fn_8000D3EC(lbl_8026E208 + 0xEF, dst + 0x38);
    fn_8000D3EC(lbl_8026E208 + 0x101, dst + 0x48);
    fn_8000D3EC(lbl_8026E208 + 0x113, dst + 0x58);
    fn_8000D3EC(lbl_8026E208 + 0x125, dst + 0x68);
    fn_8000D3EC(lbl_8026E208 + 0x139, dst + 0x68);
    fn_8010554C();
    fn_80196078();
}
#pragma global_optimizer on
s32 fn_800A6510(s32 arg0) {
    void fn_80094A08(s32, s32);
    void fn_8000CAA0(void *, s32, void *);
    extern struct {
        s32 unk0;
        s32 unk4;
        u8 unk8;
        u8 unk9;
        s8 unkA;
        u8 pad[0x18 - 0xB];
    } lbl_802EF4C8;
    extern u8 lbl_80330EAC[];
    extern u8 lbl_8028C6D8[];

    fn_80094A08(lbl_802EF4C8.unk0, lbl_802EF4C8.unkA);
    *(u32 *)(lbl_80330EAC + 0xCAC) |= 0x2000;
    fn_8000CAA0(lbl_8028C6D8, arg0, lbl_80330EAC);
    return 1;
}

void fn_800A6578(void) {
    void fn_8003BE50(void *);
    extern u8 lbl_802EF4C8[24];
    fn_8003BE50(*(void **)lbl_802EF4C8);
}

void fn_800A65A4(s32 arg0) {
    void fn_80183BE4(void *, s32);
    extern u8 lbl_802EF4C8[];
    fn_80183BE4(*(void **)lbl_802EF4C8, arg0);
}

s32 fn_800A65D4(s32 arg0) {
    u8 fn_80105BC0(s32, M2C_UNK);
    if (fn_80105BC0(arg0 + 0x1BC, 8) == 0) {
        return 0;
    }
    return fn_80105BC0(arg0 + 0x1BC, 9) == 0;
}

s32 fn_800A6630(s32 arg0) {
void fn_801A75DC(void *, s32, s32);
void fn_801A4714(void *, u8);
void fn_8019C8A4(s32, s32);
extern u16 lbl_802EF4C8[];
extern u16 lbl_80330EAC[];
u8 *base;
fn_801A75DC(lbl_80330EAC, *(s32 *)lbl_802EF4C8, -1);
fn_801A4714(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA));
base = (u8 *)lbl_80330EAC;
base[0x1A6] = __rlwimi((u32)base[0x1A6], 4, 2, 27, 29);
fn_8019C8A4(arg0, 0);
return 1;
}

s32 fn_800A66B4(void) {
    s32 fn_801044E0(s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80367289;
    u8 f;
    u8 t;

#pragma optimization_level 1
    f = 1;
    t = (u8)(lbl_80367289 - 1);
    if (((u32)((f | ~t) - ((u32)(f - t) >> 1)) >> 31) == 0) {
        f = 0;
    }
#pragma optimization_level reset
    if (f == 0) {
        return 0;
    }
    return fn_801044E0(*(s32 *)lbl_802EF4C8 + 0x1A4);
}

s32 fn_800A6720(s32 arg0) {
void fn_801A75DC(void *, s32, s32);
void fn_801A4714(void *, u8);
void fn_8019CA24(s32, s32);
extern u16 lbl_802EF4C8[];
extern u16 lbl_80330EAC[];
u8 *base;
fn_801A75DC(lbl_80330EAC, *(s32 *)lbl_802EF4C8, -1);
fn_801A4714(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA));
base = (u8 *)lbl_80330EAC;
((struct { u8 hi:3; u8 lo:5; } *)(base + 0x1A6))->hi = 7;
fn_8019CA24(arg0, 0);
return 1;
}

void fn_800A67A4(void) {
    void fn_801044C4(s32);
    extern u8 lbl_802EF4C8[];
    fn_801044C4(*(s32 *)lbl_802EF4C8 + 0x1A4);
}

s32 fn_800A67D4(s32 arg0) {
    void fn_801A75DC(void *, s32, s32);
    void fn_801A4714(void *, u8);
    void fn_8010446C(void *);
    void fn_8019CA6C(s32, s32);
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];

    fn_801A75DC(lbl_80330EAC, *(s32 *)lbl_802EF4C8, -1);
    fn_801A4714(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA));
    fn_8010446C((u8 *)lbl_80330EAC + 0x1A4);
    fn_8019CA6C(arg0, 0);
    return 1;
}

s32 fn_800A6850(void *arg0) {
    return (((u8) M2C_FIELD(arg0, u8 *, 0x1A4) >> 5U) & 7) != 0;
}

s32 fn_800A6868(s32 arg0) {
    void fn_801A75DC(void *, s32, s32);
    void fn_801A47B0(void *, u8, s32);
    void fn_8019C994(s32, s32);
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];

    fn_801A75DC(lbl_80330EAC, *(s32 *)lbl_802EF4C8, -1);
    fn_801A47B0(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA), 0x7F);
    fn_8019C994(arg0, 0);
    return 1;
}

s32 fn_800A68D8(void *arg0) {
    s8 fn_8003B2D0();
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 0x1A8);
    return (s8) temp_r31 < fn_8003B2D0();
}

s32 fn_800A6920(s32 arg0) {
    void fn_801A75DC(void *, s32, s32);
    void fn_801A47B0(void *, u8, s32);
    void fn_8019C9DC(s32, s32);
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];

    fn_801A75DC(lbl_80330EAC, *(s32 *)lbl_802EF4C8, -1);
    fn_801A47B0(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA), 0xA);
    fn_8019C9DC(arg0, 0);
    return 1;
}

s32 fn_800A6990(void *arg0) {
    s8 fn_8003B2D0();
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 0x1A8);
    return (s8) temp_r31 < fn_8003B2D0();
}

s32 fn_800A69D8(s32 *arg0, s32 *arg1) {
    void *fn_8000C0C0(void *);
    void *temp_r3;

    temp_r3 = fn_8000C0C0(lbl_8028C750);
    if (temp_r3 != NULL) {
        *arg0 = *(s16 *)((u8 *)temp_r3 + 0x44);
        *arg1 = *(s16 *)((u8 *)temp_r3 + 0x46);
        return 1;
    }
    return 0;
}

void fn_800A6A3C(void) {
    u32 temp_r3 = fn_8000C0C0(lbl_8028C750);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 7);
    }
}

void fn_800A6A74(void) {
    u32 temp_r3 = fn_8000C0C0(lbl_8028C750);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 6);
    }
}

void fn_800A6AAC(void) {
    u32 temp_r3 = fn_8000C0C0(lbl_8028C750);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 5);
    }
}

void fn_800A6AE4(void) {
    u32 temp_r3 = fn_8000C0C0(lbl_8028C750);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 4);
    }
}

extern u8 lbl_8028C750[16];
void fn_800A6B1C(void) {
    fn_8000BF00(&lbl_8028C750);
}

void fn_800A6B44(s32 arg0) {
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_8028C750[16];
    fn_8000CAF0(lbl_8028C750, arg0);
}

void fn_800A6B70(void *arg0) {
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_80369AA4;
    extern f64 lbl_80369AA8;
    u8 t;

    (void)lbl_80369AA8;
    t = *(u8 *)((u8 *)arg0 + 0x39);
    if (t != 0) {
        *(u8 *)((u8 *)arg0 + 0x39) = (u8)(t - 1);
    }
    *(s8 *)((u8 *)arg0 + 0x38) = (s8)fn_80059F64(
        lbl_80369AA4,
        (f32)(u32)*(u8 *)((u8 *)arg0 + 0x3A),
        (f32)(u32)*(u8 *)((u8 *)arg0 + 0x3B),
        (f32)(u32)*(u8 *)((u8 *)arg0 + 0x39));
    if (*(u8 *)((u8 *)arg0 + 0x39) == 0) {
        fn_8000C188(arg0);
        *(u32 *)((u8 *)arg0 + 0x30) = 0;
    }
}

void fn_800A6C24(void *arg0) {
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    void fn_8000C070(void *, s32);
    s8 sx;
    s8 sy;
    u8 id;
    void *unit;

    sx = (s8)*(f32 *)(lbl_80330708 + 0x524);
    sy = (s8)*(f32 *)(lbl_80330708 + 0x528);
    id = lbl_802CA518[sx + (sy << 6) + 0xD];
    if (id != 0) {
        unit = lbl_802B14E4 + (id - 1) * 0x280;
    } else {
        unit = NULL;
    }

    *(void **)((u8 *)arg0 + 0x30) = unit;

    if (*(void **)((u8 *)arg0 + 0x30) == NULL) {
        fn_8000C070(arg0, 7);
    }
}

void fn_800A6CC4(void *arg0) {
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_80369AA4;
    u8 t;

    t = *(u8 *)((u8 *)arg0 + 0x39);
    if (t < *(u8 *)((u8 *)arg0 + 0x3B)) {
        *(u8 *)((u8 *)arg0 + 0x39) = (u8)(t + 1);
        *(u8 *)((u8 *)arg0 + 0x38) = (u8)(s32)fn_80059F64(
            lbl_80369AA4,
            (f32)(u32)*(u8 *)((u8 *)arg0 + 0x3A),
            (f32)(u32)*(u8 *)((u8 *)arg0 + 0x3B),
            (f32)(u32)*(u8 *)((u8 *)arg0 + 0x39));
        if (*(u8 *)((u8 *)arg0 + 0x39) == *(u8 *)((u8 *)arg0 + 0x3B)) {
            fn_8000C188(arg0);
        }
    }
}

void fn_800A6D78(void *arg0) {
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    void fn_8000C070(void *, s32);
    s8 sx;
    s8 sy;
    u8 id;
    void *unit;

    sx = (s8)*(f32 *)(lbl_80330708 + 0x524);
    sy = (s8)*(f32 *)(lbl_80330708 + 0x528);
    id = lbl_802CA518[sx + (sy << 6) + 0xD];
    if (id != 0) {
        unit = &lbl_802B14E4[(id - 1) * 0x280];
    } else {
        unit = NULL;
    }

    *(void **)((u8 *)arg0 + 0x30) = unit;
    *(s16 *)((u8 *)arg0 + 0x36) = -1;

    if (*(void **)((u8 *)arg0 + 0x30) == NULL) {
        fn_8000C070(arg0, 6);
    }
}

void fn_800A6E20(void *arg0) {
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    void fn_8000C070(void *, s32);
    s8 sx;
    s8 sy;
    u8 id;
    void *unit;

    sx = (s8)*(f32 *)(lbl_80330708 + 0x524);
    sy = (s8)*(f32 *)(lbl_80330708 + 0x528);
    id = lbl_802CA518[sx + (sy << 6) + 0xD];
    if (id != 0) {
        unit = &lbl_802B14E4[(id - 1) * 0x280];
    } else {
        unit = NULL;
    }

    if (unit != NULL) {
        if (*(void **)((u8 *)arg0 + 0x30) == NULL) {
            fn_8000C070(arg0, 2);
        }
        if (*(void **)((u8 *)arg0 + 0x30) != unit) {
            *(s16 *)((u8 *)arg0 + 0x36) = -1;
        }
        *(void **)((u8 *)arg0 + 0x30) = unit;
    } else if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
        fn_8000C070(arg0, 3);
    }
}

void fn_800A6F10(void *arg0) {
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    s8 sx;
    s8 sy;
    u8 id;
    void *var;

    sx = (s8)*(f32 *)(lbl_80330708 + 0x524);
    sy = (s8)*(f32 *)(lbl_80330708 + 0x528);
    id = lbl_802CA518[sx + (sy << 6) + 0xD];
    if (id != 0) {
        var = &lbl_802B14E4[(id - 1) * 0x280];
    } else {
        var = NULL;
    }
    if (var != NULL) {
        ((u8 *)arg0)[0x39] = ((u8 *)arg0)[0x3B];
        ((u8 *)arg0)[0x38] = ((u8 *)arg0)[0x3A];
        *(void **)((u8 *)arg0 + 0x30) = var;
    } else {
        ((u8 *)arg0)[0x39] = 0;
        ((u8 *)arg0)[0x38] = 0;
        *(void **)((u8 *)arg0 + 0x30) = NULL;
    }
}

void fn_800A6FB8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x39) = 0;
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x36) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_800A6FD4(void *arg0) {
    void fn_8006D8E8(void *);
    void *ptr;

    ptr = *(void **)((u8 *)arg0 + 0x40);
    if (ptr != NULL) {
        fn_8006D8E8(ptr);
    }
    *(void **)((u8 *)arg0 + 0x40) = NULL;
}

void fn_800A7014(void *arg0) {
    void fn_80055C8C(void *, void *, void *);
    void fn_80059208(void *, void *);
    extern u8 lbl_8026E378[];
    void fn_800A70A0(void);
    void fn_800A70DC(void);

    *(s16 *)((u8 *)arg0 + 0x36) = -1;
    *(u8 *)((u8 *)arg0 + 0x38) = 0;
    *(u8 *)((u8 *)arg0 + 0x39) = 0;
    *(u8 *)((u8 *)arg0 + 0x3A) = 0xE0;
    *(u8 *)((u8 *)arg0 + 0x3B) = 4;
    *(s16 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s16 *)((u8 *)arg0 + 0x44) = -1;
    *(s16 *)((u8 *)arg0 + 0x46) = -1;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    fn_80055C8C(lbl_8026E378 + 0x28, fn_800A70A0, arg0);
    fn_80059208(fn_800A70DC, arg0);
}

void fn_800A70A0(void *arg0) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026E378[];
    *(s32 *)((char *)arg0 + 0x40) = fn_8006D948(lbl_8026E378 + 0x28);
}

void fn_800A70DC(void *self)
{
    extern f32 lbl_80369AB0;
    extern f32 lbl_80369AB4;
    extern f32 lbl_80369AB8;
    extern f64 lbl_80369AF8;
    void fn_8004E670(f32 *, void *, s32);

    f32 sp48[3];
    f32 x;
    f32 y;

    if (*(void **)((u8 *)self + 0x30) == NULL) {
        return;
    }
    fn_8004E670(sp48, *(void **)((u8 *)self + 0x30), 1);
    x = lbl_80369AB0 + sp48[0];
    y = lbl_80369AB0 + sp48[1];
    *(s16 *)((u8 *)self + 0x44) = (s16)(x - lbl_80369AB4);
    *(s16 *)((u8 *)self + 0x46) = (s16)(y - lbl_80369AB8);
}

#pragma use_lmw_stmw on
void fn_800A7938(s32 arg0, s32 arg1, void *arg2) {
    s8 fn_8003C114(void *);
    void fn_80006B18(s32, s32, s32, s32, s32);
    void fn_8000727C(f32);
    void fn_80007290(s32, s32, s32, s32);
    void fn_800075D8(void);
    void fn_80007668(u32 *);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(u8);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000D354(void *);
    u8 fn_80105BC0(void *, s32);
    extern u32 lbl_80369A98;
    extern u32 lbl_80369A9C;
    extern u32 lbl_80369AA0;
    extern f32 lbl_80369AA4;
    extern f32 lbl_80369ABC;
    extern f32 lbl_80369AC0;
    extern f32 lbl_80369B00;
    extern f32 lbl_80369B04;
    extern f32 lbl_80369B08;
    extern f32 lbl_80369B0C;
    extern f32 lbl_80369B10;
    extern f32 lbl_80369B14;
    extern f32 lbl_80369B18;
    extern f32 lbl_80369B1C;
    extern f32 lbl_80369B20;
    u32 sp10;
    u32 spC;
    u32 sp8;
    s32 x;
    s32 y;
    void *obj;
    s32 temp_r31;
    void *var_r30;
    s32 var_r26;
    void *temp_r3;

    x = arg0;
    obj = arg2;
    y = arg1;
    temp_r31 = (s8)fn_8003C114(*(void **)((u8 *)arg2 + 0x30));
    var_r30 = *(void **)((u8 *)*(void **)((u8 *)obj + 0x30) + 0x18C);
    fn_8000A258();
    fn_80009D74((f32)x, (f32)y, lbl_80369ABC, lbl_80369AC0);
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_80007898(6);
    fn_8000727C(lbl_80369AC0);
    fn_80006B18(0xDE, 0x30, 0, 0, temp_r31);
    fn_80007290(0x80, 0x40, 0x40, 0xFF);
    fn_800076AC(0x80, 0x40, 0x40, 0xFF);
    fn_80007884();
    var_r26 = 3;
    if (fn_80105BC0((u8 *)*(void **)((u8 *)obj + 0x30) + 0x1BC, 9) != 0) {
        var_r26 = 4;
    } else {
        if (*(void **)((u8 *)var_r30 + 0xC) != NULL) {
            temp_r3 = fn_8000D354(*(void **)((u8 *)var_r30 + 0xC));
        } else {
            temp_r3 = NULL;
        }
        var_r30 = temp_r3;
    }
    fn_8000A258();
    fn_80009D74((f32)x, (f32)y, lbl_80369ABC, lbl_80369AC0);
    fn_80009F90(*(s32 *)((u8 *)obj + 0x40), var_r26, 0x11);
    fn_80009B8C(*(u8 *)((u8 *)obj + 0x38));
    fn_8000A248();
    fn_80007898(2);
    fn_8000770C(lbl_80369B00, lbl_80369B04, lbl_80369AA4, lbl_80369AA4, (f32)((temp_r31 * 0x50) / 20), lbl_80369B08);
    fn_800075D8();
    sp10 = lbl_80369A98;
    fn_80007668(&sp10);
    fn_80007884();
    var_r26 = 0;
    if (*(u16 *)((u8 *)var_r30 + 0x3A) & 0x40) {
        var_r26 = 5;
    } else if (*(u16 *)((u8 *)var_r30 + 0x3A) & 0x100) {
        var_r26 = 6;
    } else if (*(u16 *)((u8 *)var_r30 + 0x3A) & 0x80) {
        var_r26 = 9;
    }
    fn_8000A258();
    fn_80009D74((f32)x, (f32)y, lbl_80369ABC, lbl_80369AC0);
    fn_80009F90(*(s32 *)((u8 *)obj + 0x40), var_r26, 0x11);
    fn_80009B8C(*(u8 *)((u8 *)obj + 0x38));
    fn_8000A248();
    fn_80007898(2);
    fn_8000770C(lbl_80369B0C, lbl_80369B10, lbl_80369AA4, lbl_80369AA4, lbl_80369B14, lbl_80369B14);
    fn_800075D8();
    spC = lbl_80369A9C;
    fn_80007668(&spC);
    fn_80007884();
    fn_8000A258();
    fn_80009D74((f32)x, (f32)y, lbl_80369ABC, lbl_80369AC0);
    fn_80009F90(*(s32 *)((u8 *)obj + 0x40), 1, 0x11);
    fn_80009B8C(*(u8 *)((u8 *)obj + 0x38));
    fn_8000A248();
    fn_80007898(2);
    fn_8000770C(lbl_80369B18, lbl_80369B1C, lbl_80369AA4, lbl_80369AA4, lbl_80369B20, lbl_80369B14);
    fn_800075D8();
    sp8 = lbl_80369AA0;
    fn_80007668(&sp8);
    fn_80007884();
    fn_80009B28();
}
void fn_800A7C94(void *arg0) {
    void *fn_8000CAF0(void *, void *);
    void fn_8006EEFC(void **, s32);
    void *fn_800C42AC(s32);
    void *fn_8022C414(void *, void *, void *, s32, s32);
    s32 fn_8000CEE4(s32);
    void fn_8006ECCC(void *, void *, u16);
    u16 fn_80222A80(void *);
    s16 fn_80222A90(void *);
    u8 fn_80006650(void *, void *);
    void fn_80006608(void *);
    void fn_800C426C(void *);
    extern u8 lbl_8028C7F8[];
    extern u8 lbl_8028C814[];
    extern s32 lbl_80369B2C;
    extern s32 lbl_80369B28;
    extern f32 lbl_80369B30;
    extern f32 lbl_80369B34;
    extern void fn_800A7EC0();

    struct {
        s32 sp8;
        s32 spC;
        u8 sp10[0x20];
        u16 sp30;
        s16 sp32;
    } st;
    s32 r31;
    s32 r30;
    s32 r29;
    void *r28;
    s32 r27;
    void *r26;
    void *r25;
    s16 r24;
    void *r23;
    s16 *r22;

    r25 = fn_8000CAF0(lbl_8028C7F8, arg0);
    st.spC = lbl_80369B2C;
    st.sp8 = lbl_80369B28;
    fn_8006EEFC((void **)((u8 *)r25 + 0x30), st.spC);
    r26 = *(void **)((u8 *)r25 + 0x30);
    r27 = 0x64;
    r28 = fn_8022C414(fn_800C42AC(0x110), (void *)fn_800A7EC0, NULL, 8, 0x20);
    r29 = 0;
    r22 = (s16 *)r28;
    do {
        s16 adj;
        s16 tmp16;
        u16 t;
        r30 = fn_8000CEE4(8) + 2;
        fn_8006ECCC(r26, st.sp10, (u16)r30);
        st.sp30 = fn_80222A80(st.sp10);
        tmp16 = fn_80222A90(st.sp10);
        t = st.sp30;
        st.sp32 = tmp16;
        r22[0] = 0;
        r22[1] = 0;
        r22[2] = t;
        r22[3] = tmp16;
        for (;;) {
            r24 = fn_8000CEE4(0x200);
            adj = (s16)(fn_8000CEE4(st.sp30 + 0x260) - ((u32)st.sp30 >> 1));
            r22[0] += adj;
            r22[1] += r24;
            r22[2] += adj;
            r22[3] += r24;
            for (r31 = 0, r23 = r28; r31 < r29; r23 = (u8 *)r23 + 8, r31++) {
                if (fn_80006650(r22, r23)) {
                    fn_80006608(r22);
                    if (--r27 < 0)
                        goto cleanup;
                    goto next_try;
                }
            }
            break;
        next_try:
            ;
        }
        r23 = fn_8000CAF0(lbl_8028C814, r25);
        *(f32 *)((u8 *)r23 + 0x34) = (f32)r22[0];
        *(f32 *)((u8 *)r23 + 0x38) = (f32)r22[1];
        *(s32 *)((u8 *)r23 + 0x44) = r30;
        *(void **)((u8 *)r23 + 0x30) = r25;
        *(f32 *)((u8 *)r23 + 0x3C) = lbl_80369B30;
        *(f32 *)((u8 *)r23 + 0x40) = (*(f32 *)((u8 *)r23 + 0x3C) / lbl_80369B34) * (f32)fn_8000CEE4(0x8000);
        r29 += 1;
        r22 += 4;
    } while (r29 < 0x20);
cleanup:
    if (r28 != NULL)
        fn_800C426C((u8 *)r28 - 0x10);
}
#pragma opt_peephole reset
#pragma opt_common_subs reset
#pragma optimization_level reset
void fn_800A7EC0(void) {

}

#pragma use_lmw_stmw on
void fn_800A7EC4(void *arg0) {
    void *fn_8000CAF0(void *, void *);
    void fn_8006EEFC(void *, s32);
    s32 fn_8000CEE4(s32);
    void fn_800C42AC(s32);
    void *fn_8022C414(void (*)(void), s32, s32, s32);
    void fn_8006ECCC(s32, void *, u16);
    u16 fn_80222A80(void *);
    s16 fn_80222A90(void *);
    u8 fn_80006650(void *, void *);
    void fn_80006608(void *);
    void fn_800C426C(void *);
    void fn_800A7EC0(void);
    extern u8 lbl_8028C7F8[];
    extern u8 lbl_8028C814[];
    extern s32 lbl_80369B28;
    extern s32 lbl_80369B2C;
    extern f32 lbl_80369B30;
    extern f32 lbl_80369B34;
    extern f64 lbl_80369B38;
    void *res;
    s32 sp8;
    s32 spC;
    u8 sp10[0x20];
    u16 sp30;
    s16 sp32;
    s32 unk30;
    s32 retry;
    void *arr;
    s32 count;
    u8 *cur;
    u16 span;
    u16 a;
    s16 b;
    s16 dy;
    s16 dx;
    u8 *scan;
    s32 idx;
    void *obj;

    res = fn_8000CAF0(lbl_8028C7F8, arg0);
    sp8 = lbl_80369B28;
    spC = lbl_80369B2C;
    fn_8006EEFC((u8 *)res + 0x30, lbl_80369B28);
    unk30 = M2C_FIELD(res, s32 *, 0x30);
    retry = 0x64;
    fn_800C42AC(0x110);
    arr = fn_8022C414(fn_800A7EC0, 0, 8, 0x20);
    count = 0;
    cur = (u8 *)arr;
    while (count < 0x20) {
        span = fn_8000CEE4(8) + 2;
        fn_8006ECCC(unk30, sp10, span);
        a = fn_80222A80(sp10);
        b = fn_80222A90(sp10);
        sp30 = a;
        sp32 = b;
        M2C_FIELD(cur, u16 *, 0) = 0;
        M2C_FIELD(cur, u16 *, 2) = 0;
        M2C_FIELD(cur, u16 *, 4) = sp30;
        M2C_FIELD(cur, u16 *, 6) = sp32;
recompute:
        dy = fn_8000CEE4(0x200);
        scan = (u8 *)arr;
        idx = 0;
        dx = fn_8000CEE4(span + 0x260) - (span >> 1);
        M2C_FIELD(cur, s16 *, 0) += dx;
        M2C_FIELD(cur, s16 *, 2) += dy;
        M2C_FIELD(cur, s16 *, 4) += dx;
        M2C_FIELD(cur, s16 *, 6) += dy;
        while (idx < count) {
            if (fn_80006650(cur, scan) != 0) {
                fn_80006608(cur);
                if (--retry < 0) {
                    goto cleanup;
                }
                goto recompute;
            }
            scan += 8;
            idx++;
        }
        obj = fn_8000CAF0(lbl_8028C814, res);
        M2C_FIELD(obj, f32 *, 0x34) = (f32) M2C_FIELD(cur, s16 *, 0);
        M2C_FIELD(obj, f32 *, 0x38) = (f32) M2C_FIELD(cur, s16 *, 2);
        M2C_FIELD(obj, u32 *, 0x44) = span;
        M2C_FIELD(obj, void **, 0x30) = res;
        M2C_FIELD(obj, f32 *, 0x3C) = lbl_80369B30;
        M2C_FIELD(obj, f32 *, 0x40) = (M2C_FIELD(obj, f32 *, 0x3C) / lbl_80369B34) * (f32) fn_8000CEE4(0x8000);
        count++;
        cur += 8;
    }
cleanup:
    if (arr != NULL) {
        fn_800C426C((u8 *)arr - 0x10);
    }
}
#pragma use_lmw_stmw reset

void fn_800A80F0(void *arg0) {
    M2C_UNK fn_8000A174(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, u16);
    u16 fn_80222A80(M2C_UNK *);
    u16 fn_80222A90(M2C_UNK *);
    f64 fn_802380D0(f32, f32);
    extern f32 lbl_80369B40;
    extern f32 lbl_80369B44;
    extern f32 lbl_80369B48;
    extern f32 lbl_80369B4C;
    extern f32 lbl_80369B50;
    extern f32 lbl_80369B54;
    u16 sp2A;
    u16 sp28;
    M2C_UNK sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r3;
    u32 temp_r6;

    temp_f31 = (lbl_80369B44 * (f32) fn_802380D0((lbl_80369B40 / M2C_FIELD(arg0, f32 *, 0x3C)) * M2C_FIELD(arg0, f32 *, 0x40), lbl_80369B40)) + lbl_80369B44;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + lbl_80369B48);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f0 > temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f0 - temp_f1);
    }
    fn_8006ECCC(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x30), &sp8, (u16) M2C_FIELD(arg0, s32 *, 0x44));
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_8000A174(&sp8, 0x20);
    fn_8000A248();
    fn_80007898(1);
    temp_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u32 *, 0x34);
    temp_r3 = (s32) ((lbl_80369B4C + M2C_FIELD(arg0, f32 *, 0x38)) - (f32) ((s32) ((temp_r6 >> 0x1FU) + temp_r6) >> 1)) & 0x1FF;
    fn_800077D8(temp_r3, temp_r6, M2C_FIELD(arg0, f32 *, 0x34), (f32) (temp_r3 - 0x20), (f32) sp28, (f32) sp2A);
    fn_800076AC(0xC0, 0xC0, 0xFF, (s32) (lbl_80369B50 * temp_f31));
    fn_80007870(lbl_80369B54);
    fn_80007884();
}

void fn_800A828C(s32 arg0) {
    fn_8006EDA0(arg0 + 0x30);
}

void fn_800A82B0(void *arg0) {
    s32 fn_800067B4();
    M2C_UNK fn_800076AC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80007770(s32, f32, f32, f32, f32);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007870(f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_80009F90(s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369B60;
    extern f32 lbl_80369B64;
    extern f32 lbl_80369B68;
    extern f32 lbl_80369B6C;
    extern f32 lbl_80369B70;
    extern f32 lbl_80369B74;
    extern f32 lbl_80369B78;
    extern f32 lbl_80369B7C;
    extern f32 lbl_80369B80;
    f32 temp_f2;
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (fn_800067B4() & 0x3FF);
    fn_8000A258();
    fn_80009D74(lbl_80369B60, lbl_80369B60, lbl_80369B64, lbl_80369B68);
    fn_80009F90(M2C_FIELD(arg0, s32 *, 0x30), 0, 0);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369B60, lbl_80369B60, lbl_80369B6C, lbl_80369B70);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_f2 = lbl_80369B74 * (f32) temp_r3;
    fn_80007770(temp_r3, lbl_80369B60, temp_f2, lbl_80369B68, lbl_80369B78 + temp_f2);
    fn_80007870(lbl_80369B7C);
    fn_80007884();
    fn_8000A258();
    fn_80009F90(M2C_FIELD(arg0, s32 *, 0x30), 1, 0x30);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369B60, lbl_80369B60, lbl_80369B6C, lbl_80369B70);
    fn_800076AC(0x32, 0x32, 0x32, 0);
    fn_80007870(lbl_80369B80);
    fn_80007884();
}

s32 fn_800A83C8(void) {
    extern u16 lbl_8026E3C0[8];
    s32 fn_8000BCA4(void *);
    return fn_8000BCA4((u8 *)lbl_8026E3C0 + 0x39) != 0;
}

void fn_800A8400(void) {
    M2C_UNK fn_8009A514();
    M2C_UNK fn_800A6A3C();
    M2C_UNK fn_8018DB4C();
    fn_8009A514();
    fn_800A6A3C();
    fn_8018DB4C();
}

void fn_800A8428(void) {
    M2C_UNK fn_8009A54C();
    M2C_UNK fn_800A6A74();
    M2C_UNK fn_8018DB90();
    fn_8009A54C();
    fn_800A6A74();
    fn_8018DB90();
}

void fn_800A8450(void) {
    M2C_UNK fn_8009A584();
    M2C_UNK fn_800A6AAC();
    M2C_UNK fn_8018DC18();
    fn_8009A584();
    fn_800A6AAC();
    fn_8018DC18();
}

void fn_800A8478(void) {
    M2C_UNK fn_8009A5BC();
    M2C_UNK fn_800A6AE4();
    M2C_UNK fn_8018DC58();
    fn_8009A5BC();
    fn_800A6AE4();
    fn_8018DC58();
}

void fn_800A84A0(void) {
    M2C_UNK fn_8009A5F4();
    M2C_UNK fn_800A6B1C();
    M2C_UNK fn_8018DC98();
    fn_8009A5F4();
    fn_800A6B1C();
    fn_8018DC98();
}

void fn_800A84C8(s32 arg0) {
    M2C_UNK fn_8018DCC0(s32);
    M2C_UNK fn_800A6B44(s32);
    M2C_UNK fn_8009A61C();
    fn_8009A61C();
    fn_800A6B44(arg0);
    fn_8018DCC0(arg0);
}

u32 fn_800A8504(void *arg0, u32 arg1) {
    u8 *ptr;
    u32 temp;

    ptr = *(u8 **)((u8 *)arg0 + 0x34);
    temp = __cntlzw(0x2A - (s32)*(s8 *)(ptr + (arg1 & 0xFF)));

    return temp >> 5;
}

void fn_800A8524(void *arg0, void *arg1)
{
    u8 temp_r3;
    s32 r31, r30, r29;
    s32 temp_r4, temp_r5;
    s32 temp_r8, temp_r9;
    
    if (arg0 == NULL)
        return;
    
    r31 = *(u32 *)arg0;
    r30 = *(u32 *)arg1;
    r29 = *(u32 *)((s32)arg0 + 0xC);
    
    do
    {
        temp_r3 = *(u8 *)r31++;
        *(u8 *)r30++ = temp_r3;
        if (temp_r3 == 0)
            break;
    } while (1);
}

u8 *fn_800A8704(void *arg0) {
    void fn_80234450(void *, void *);
    void fn_802343E0(void *, char *);
    char *strchr(const char *, int);
    char *temp;

    fn_80234450(lbl_80312A80, (u8 *)lbl_8026E408 + 0x26);
    temp = strchr(*(char **)arg0, 0x5F);
    fn_802343E0(lbl_80312A80, temp + 1);
    return lbl_80312A80;
}

u8 *fn_800A876C(void *arg0) {
    void fn_80234450(void *, void *);
    void fn_802343E0(void *, char *);
    char *strchr(const char *, int);
    char *temp;

    fn_80234450(lbl_80312A80, (u8 *)lbl_8026E408 + 0x2C);
    temp = strchr(*(char **)arg0, 0x5F);
    fn_802343E0(lbl_80312A80, temp + 1);
    return lbl_80312A80;
}

u8 *fn_800A87D4(void *arg0) {
    void fn_80234450(void *, void *);
    void fn_802343E0(void *, char *);
    char *strchr(const char *, int);
    char *temp;

    fn_80234450(lbl_80312A80, (u8 *)lbl_8026E408 + 0x32);
    temp = strchr(*(char **)arg0, 0x5F);
    fn_802343E0(lbl_80312A80, temp + 1);
    return lbl_80312A80;
}

s32 fn_800A883C(void *arg0, s32 arg1) {
    u8 val;
    u8 *p = &val;
    if (arg1 == 0) {
        *p = (*(u8 *)((u8 *)arg0 + 0x43) >> 4) & 0xF;
    } else {
        *p = *(u8 *)((u8 *)arg0 + 0x43) & 0xF;
    }
    return *p << 24;
}

s32 fn_800A886C(u8 *arg0) {
    switch (*arg0) {
    case 0:
        return 0;
    case 1:
        return 0x4E;
    case 2:
        return 0x47;
    case 3:
        return 0x48;
    case 4:
        return 0x49;
    case 5:
        return 0x4A;
    case 6:
        return 0x4B;
    case 7:
        return 0x4C;
    case 8:
        return 0x4D;
    default:
        return 0;
    }
}

u8 *fn_800A88E0(void *arg0) {
    void fn_80234450(void *, void *);
    void fn_802343E0(void *, s32);

    fn_80234450(lbl_80312A80, (u8 *)lbl_8026E408 + 0x58);
    fn_802343E0(lbl_80312A80, *(s32 *)((char *)arg0 + 0xC) + 4);
    return lbl_80312A80;
}

void *fn_800A893C(void *arg0) {
    void *fn_8000E0E4(void *);
    u32 field = *(u32 *)((u8 *)arg0 + 0x8);

    if (field == 0) {
        return (void *)((u8 *)lbl_8026E408 + 0x5f);
    }
    return fn_8000E0E4((void *)field);
}

s32 fn_800A8978(void *arg0) {
    s32 fn_8000E0E4(s32);
    if (fn_8000D354(M2C_FIELD(arg0, s32 *, 4)) != 0U) {
        return fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
    }
    return M2C_FIELD(arg0, s32 *, 0);
}

void *fn_800A89C0(void *arg0) {
    void *memset(void *, int, unsigned int);
    *(short *)((char *)arg0 + 0x3A) = 0;
    memset(arg0, 0, 0x64);
    return arg0;
}

s32 fn_800A8A00(s32 *arg0) {
    s32 strchr(s32, M2C_UNK);
    return strchr(*arg0, 0x5F) + 1;
}

s32 fn_800A8A2C(s32 arg0) {
    memset((void*)arg0, 0, 0x64);
    return arg0;
}

void fn_800A8A64(void *arg0) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 8));
}

s32 fn_800A8A88(void *arg0) {
    s32 fn_8000E0E4(s32);
    s32 fn_8000D354(s32);
    s32 fn_8007C378(s32);
    if (*(u32 *)((u8 *)arg0 + 4) != 0U) {
        return fn_8000E0E4(*(s32 *)((u8 *)arg0 + 4));
    }
    if (fn_8000D354(*(s32 *)((u8 *)arg0 + 0xC)) != 0U) {
        return fn_8007C378(*(s32 *)((u8 *)arg0 + 0xC));
    }
    return *(s32 *)arg0;
}

void fn_800A8AE4(s32 arg0) {
    extern u16 lbl_8026E470[];
    fn_8006EDA0(arg0 + 0x30);
    fn_8005C7C8(&lbl_8026E470[0x58 / sizeof(u16)]);
}

void fn_800A8B18(void *arg0) {
    void fn_8005C84C(void *);
    void fn_8006EEFC(void *, void *);
    s32 fn_80005E2C(s32);
    void fn_8000C070(void *, s32);
    extern u8 lbl_8026E470[];
    extern u8 lbl_803677FC;

    fn_8005C84C((u8 *)&lbl_8026E470 + 0x58);
    fn_8006EEFC((u8 *)arg0 + 0x30, (u8 *)&lbl_8026E470 + 0x62);
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    ((u8 *)arg0)[0x38] = 0;
    if (lbl_803677FC == 0 && fn_80005E2C(0) == 0) {
        fn_8000C070(arg0, 1);
        lbl_803677FC = 1;
    }
}

void fn_800A8BA0(void) {
    extern u8 lbl_8026E470[];
    void fn_80109020(s32);
    void fn_801481CC(void *, s32);

    fn_80109020(0);
    fn_801481CC(lbl_8026E470 + 0x73, 0x1F4);
}

void fn_800A8BD8(void *arg0) {
    void fn_801475FC(void *, s32);
    void fn_801481CC(void *, s32);
    void fn_8000C070(void *, s32);
    extern u8 *lbl_80367240;
    extern u8 lbl_8026E470[];

    if (*(u32 *)(lbl_80367240 + 4) & 0x1100) {
        fn_801475FC((u8 *)&lbl_8026E470 + 0x82, 0x64);
        fn_801481CC((u8 *)&lbl_8026E470 + 0x73, 0x1F4);
        ((u8 *)arg0)[0x38] = 1;
        fn_8000C070(arg0, 2);
    }
}

#pragma optimization_level 2
#pragma opt_common_subs off
void fn_800A8C4C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80007698(s32);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8006ECCC(void *, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    extern f32 lbl_80369BA8;
    extern f32 lbl_80369BAC;
    extern f32 lbl_80369BB0;
    extern f32 lbl_80369BB4;
    extern f32 lbl_80369BB8;
    extern f32 lbl_80369BBC;
    extern f32 lbl_80369BC0;
    extern f32 lbl_80369BC4;
    extern f32 lbl_80369BC8;
    extern f32 lbl_80369BCC;
    extern f32 lbl_80369BD0;
    extern f32 lbl_80369BD4;
    extern f32 lbl_80369BD8;
    extern f32 lbl_80369BDC;
    extern f32 lbl_80369BE0;
    extern f32 lbl_80369BE4;
    extern f32 lbl_80369BE8;
    extern f32 lbl_80369BEC;
    extern f32 lbl_80369BF0;
    struct {
        u8 buf[0x20];
        u16 x;
        u16 y;
    } st;
    f32 f31;
    s32 ctr;
    s32 tmp;
    void *self;

    self = arg0;
    *(s32 *)((u8 *)self + 0x34) = *(s32 *)((u8 *)arg0 + 0x34) + 1;
    fn_8000A258();
    fn_80009D74(lbl_80369BA8, lbl_80369BA8, lbl_80369BAC, lbl_80369BB0);
    fn_8000A248();
    fn_8006ECCC(*(void **)((u8 *)self + 0x30), st.buf, 0);
    st.x = fn_80222A80(st.buf);
    st.y = fn_80222A90(st.buf);
    fn_8000A258();
    fn_8000A174(st.buf, 0);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369BB4, lbl_80369BB8, (f32)(u32)st.x, (f32)(u32)st.y);
    fn_80007884();
    if (*(u8 *)((u8 *)self + 0x38) == 0 || !(*(s32 *)((u8 *)self + 0x34) & 4)) {
        ctr = *(s32 *)((u8 *)self + 0x34);
        f31 = fn_800067BC(0, lbl_80369BBC, lbl_80369BC0, (f32)(ctr % 60), lbl_80369BC4);
        if (f31 > lbl_80369BCC) {
            f31 = lbl_80369BC8 - f31;
        }
        fn_8000A258();
        fn_80009D74(lbl_80369BA8, lbl_80369BA8, lbl_80369BD0, lbl_80369BB0);
        fn_8000A248();
        fn_8006ECCC(*(void **)((u8 *)self + 0x30), st.buf, 1);
        st.x = fn_80222A80(st.buf);
        st.y = fn_80222A90(st.buf);
        fn_8000A258();
        fn_8000A174(st.buf, 0x10);
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8(lbl_80369BD4, lbl_80369BD8, (f32)(u32)st.x, (f32)(u32)st.y);
        fn_80007698((s32)f31);
        fn_80007884();
        ctr = *(s32 *)((u8 *)self + 0x34);
        f31 = fn_800067BC(0, lbl_80369BDC, lbl_80369BE0, (f32)(ctr % 180), lbl_80369BE4);
        if (f31 > lbl_80369BCC) {
            f31 = lbl_80369BC8 - f31;
        }
        fn_8000A258();
        fn_80009D74(lbl_80369BA8, lbl_80369BA8, lbl_80369BE8, lbl_80369BB0);
        fn_8000A248();
        fn_8006ECCC(*(void **)((u8 *)self + 0x30), st.buf, 2);
        st.x = fn_80222A80(st.buf);
        st.y = fn_80222A90(st.buf);
        fn_8000A258();
        fn_8000A174(st.buf, 0x10);
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8(lbl_80369BEC, lbl_80369BF0, (f32)(u32)st.x, (f32)(u32)st.y);
        tmp = (s32)f31;
        fn_800076AC(tmp, tmp, tmp, 0xFF);
        fn_80007884();
    }
}

void fn_800A8F94(s32 arg0) {
void *fn_80109180(void *, s32); void fn_80148618(void *, s32);
extern u8 lbl_8026E470[]; extern f32 lbl_80369C08; extern f32 lbl_80369BA8;
void *temp; f32 b; f32 a;
temp = fn_80109180(lbl_8026E470+0x96,arg0);
a=lbl_80369C08; b=lbl_80369BA8;
*(f32 *)((u8 *)temp+0x40)=a;
*(f32 *)((u8 *)temp+0x44)=b;
fn_80148618(lbl_8026E470+0x73,500);
}

#pragma optimization_level reset
#pragma opt_common_subs reset
void fn_800A8FE8(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    u8 fn_800A5C88(void);
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = *(s32 *)((u8 *)lbl_80367240 + 4);
    if (temp_r5 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r5) & 0x1100) {
        fn_8000C188(arg0);
        return;
    }
    if (fn_800A5C88() == 0) {
        fn_8000C070(arg0, 0);
    }
}

void fn_800A904C(s32 arg0) {
    M2C_UNK fn_800A5D1C(void *, s32, M2C_UNK);
    extern M2C_UNK lbl_8026E470;
    fn_800A5D1C(&lbl_8026E470 + 0xA3, arg0 != 0, 0);
}

extern u8 lbl_8028C870[16];
void fn_800A9088(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8028C870[16];
    fn_8000CAA0(lbl_8028C870, arg0);
}

void fn_800A90B4(void) {
    void fn_80148618(void *, s32);
    extern u8 lbl_8026E470[];
    fn_80148618(lbl_8026E470 + 0x73, 0x1F4);
}

void fn_800A90E4(s32 arg0) {
    void fn_801475FC(void *, s32);
    void fn_8000C188(s32);
    extern void *lbl_80367240;
    extern u8 lbl_8026E470[];
    s32 temp_r3;

    temp_r3 = *(s32 *)((u8 *)lbl_80367240 + 4);
    if (temp_r3 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r3) & 0x1F70) {
        fn_801475FC(lbl_8026E470 + 0x82, 0x64);
        fn_8000C188(arg0);
    }
}

void fn_800A9144(void) {
    void fn_801481CC(void *, s32);
    extern u8 lbl_8026E470[];
    fn_801481CC(lbl_8026E470 + 0x73, 0x1F4);
}

extern void *D_800E53FC;
void fn_800A9174(void) {
    void *fn_8017A764(void *, void *, s32);
    s32 fn_8017A950(void *);
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    void fn_800C4588(void *);
    extern u8 lbl_8026E470[];
    extern f32 lbl_80369BA8;
    extern f32 lbl_80369C0C;
    extern f32 lbl_80369BB0;
    extern u8 lbl_802842B8[];
    extern u8 lbl_802842A4[];
    s32 b;
    u32 a;
    struct { void *ptr; u8 *cur; s32 unk8; u8 flag; u8 pad[3]; void *vt; } tmp;
    fn_8017A764(&tmp, lbl_8026E470 + 0xb5, 0);
    tmp.cur += 4;
    a = fn_8017A950(&tmp);
    b = fn_8017A950(&tmp);
    fn_8000A258();
    fn_80009D74(lbl_80369BA8, lbl_80369BA8, lbl_80369C0C, lbl_80369BB0);
    fn_8000A174(0, 3);
    fn_8000A248();
    fn_8001003C(0xb8, 0x190, 1, 0, 1, lbl_8026E470 + 0xc2, a, b, lbl_80369BB0, lbl_80369BA8);
    tmp.vt = lbl_802842B8;
    tmp.vt = lbl_802842A4;
    if (tmp.flag != 0) {
        fn_800C4588(tmp.ptr);
        tmp.ptr = 0;
        tmp.flag = 0;
    }
}

void fn_800A9274(s32 arg0) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803677EC;
    fn_80024398(&lbl_803677EC, arg0, 0);
}

void fn_800A92A0(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_800A92C4(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 0);
}

void fn_800A92F0(void) {
    extern u16 lbl_8026E470[];
    fn_8005C7C8(&lbl_8026E470[0x58 / sizeof(u16)]);
}

void fn_800A931C(s32 arg0) {
    void fn_8005BCD0(void);
    void fn_8005C84C(void *);
    void *fn_80109180(void *, s32);
    extern u8 lbl_8026E470[];
    extern f32 lbl_80369BA8, lbl_80369C08, lbl_80369C10;
    void *temp;
    f32 b;
    f32 a;
    fn_8005C84C(lbl_8026E470 + 0x58);
    fn_8005BCD0();
    temp = fn_80109180(lbl_8026E470 + 0x96, arg0);
    a = lbl_80369C08;
    b = lbl_80369BA8;
    *(f32 *)((u8 *)temp+0x40) = a;
    a = lbl_80369C10;
    *(f32 *)((u8 *)temp+0x44) = b;
    *(f32 *)((u8 *)temp+0x48) = a;
}

#include "common.h"
extern u16 lbl_8026E168[];
extern void *D_800E53FC;
extern void *lbl_8026E470;
extern f32 lbl_80369BA8;
extern f32 lbl_80369C0C;
extern f32 lbl_80369BB0;
extern u8 lbl_802842B8[];
extern u8 lbl_802842A4[];
