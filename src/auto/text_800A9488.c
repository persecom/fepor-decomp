/* Functions from 0x800A9488 to 0x800AD1F4, found by decomp-toolkit. */
#include "common.h"
#pragma cplusplus on
extern "C" void fn_8001C76C(void *);
extern "C" void fn_8001C5F8(void *, s32);
struct ItemABA {
    u32 unk0, unk4;
    ItemABA() { fn_8001C76C(this); }
    ~ItemABA() { fn_8001C5F8(this, -1); }
};
#pragma cplusplus reset

#pragma use_lmw_stmw on

typedef struct {
    u8 flag : 1;
    u8 unk : 7;
} Entry9Bits;

static inline void *fn_800AA794_helper(void) {
    extern u8 lbl_802B14E4[101760];
    extern u8 lbl_802CA518[151280];
    extern u8 lbl_80330708[1400];
    s8 sx = *(float *)&lbl_80330708[0x524];
    s8 sy = *(float *)&lbl_80330708[0x528];
    u8 id = lbl_802CA518[sx + (sy << 6) + 0xD];
    if (id != 0) {
        return &lbl_802B14E4[(id - 1) * 0x280];
    }
    return NULL;
}

void *fn_800A9488(void) {
    extern u8 lbl_8026E470[];
    return (void *)((u32)lbl_8026E470 + 0xCC);
}

s32 fn_800A9498(void) {
    return 0x100;
}

s32 fn_800A94A0(void) {
    return 0x48;
}

s32 fn_800A94A8(void) {
    return 0x18;
}

s32 fn_800A94B0(void) {
    return 0x140;
}

s32 fn_800A94B8(void) {
    return 0;
}

void *fn_800A9638(void) {
    extern u8 lbl_8026E470[];
    return (void *)((u32)lbl_8026E470 + 0x110);
}

s32 fn_800A9648(void) {
    M2C_UNK fn_80006220(M2C_UNK);
    fn_80006220(5);
    return 5;
}

void *fn_800A9670(void) {
    extern u8 lbl_8026E470[];
    return (void *)((u32)lbl_8026E470 + 0x110);
}

s32 fn_800A9680(void) {
    fn_80006220(5);
    return 5;
}

void *fn_800A96A8(void) {
    extern u8 lbl_8026E470[];
    return (void *)((u32)lbl_8026E470 + 0x13F);
}

s32 fn_800A96B8(void) {
    return 0x40;
}

s32 fn_800A96C0(void) {
    return 0x110;
}

s32 fn_800A96C8(void) {
    return 0x140;
}

s32 fn_800A96D0(void) {
    return 0;
}

s32 fn_800A96D8(void) {
    extern u8 lbl_80330708[];
    u8 x;

    x = lbl_80330708[0xA6] + 1;
    lbl_80330708[0xA6] = x;
    lbl_80330708[0xA6] = x % 4;
    return 0;
}

s32 fn_800A9710(void) {
    extern u8 lbl_80331FB8[];
    lbl_80331FB8[0x44] = 2;
    return 0;
}

#pragma cplusplus on
extern "C" M2C_UNK fn_800072B0(s32 *, s32 *, s32 *, s32 *, s32, s32, s32);
extern "C" M2C_UNK fn_800075D8();
extern "C" M2C_UNK fn_800077D8(f32, f32, f32, f32);
extern "C" M2C_UNK fn_80007884();
extern "C" M2C_UNK fn_80007898(M2C_UNK);
extern "C" M2C_UNK fn_80009B8C(M2C_UNK);
extern "C" M2C_UNK fn_80009D74(f32, f32, f32, f32);
extern "C" M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
extern "C" M2C_UNK fn_8000A248();
extern "C" M2C_UNK fn_8000A258();
extern "C" void fn_8001019C(s32, s32, s32, void *, ...);
extern "C" void fn_800A9728(M2C_UNK arg0, void *arg1) {
    struct Model {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual f32 v25() = 0;
    };
    extern u8 lbl_8026E470[];
    extern u8 lbl_802832E0[];
    extern u8 lbl_80330708[];
    extern s32 lbl_80369B98;
    extern s32 lbl_80369B9C;
    extern s32 lbl_80369BA0;
    extern s32 lbl_80369BA4;
    extern f32 lbl_80369BA8;
    extern f32 lbl_80369BB0;
    extern f64 lbl_80369C00;
    extern f32 lbl_80369C1C;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 var_r3;
    void *var_r7;

    fn_8000A258();
    fn_80009D74((f32) M2C_FIELD(arg1, s16 *, 0x30), (f32) M2C_FIELD(arg1, s16 *, 0x32), M2C_FIELD(arg1, Model **, 0x3C)->v25(), lbl_80369BB0);
    fn_8000A174(0, 0x12);
    var_r3 = 0;
    if (((u8) M2C_FIELD(arg1, u8 *, 0x2D) == 0) && ((u8) M2C_FIELD(arg1, u8 *, 0x2E) == 0)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        fn_80009B8C(0x80);
    }
    fn_8000A248();
    fn_80007898(3);
    fn_800077D8(lbl_80369BA8, lbl_80369C1C, (f32) M2C_FIELD(arg1, s16 *, 0x34), (f32) (M2C_FIELD(arg1, s16 *, 0x36) + 0x10));
    fn_800075D8();
    sp8 = lbl_80369BA4;
    spC = lbl_80369BA0;
    sp10 = lbl_80369B9C;
    sp14 = lbl_80369B98;
    fn_800072B0(&sp14, &sp10, &spC, &sp8, lbl_80369B9C, lbl_80369BA0, lbl_80369BA4);
    fn_80007884();

    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    switch (lbl_80330708[0xA6]) {
    case 0:
        var_r7 = lbl_8026E470 + 0x150;
        break;
    case 1:
        var_r7 = lbl_8026E470 + 0x157;
        break;
    case 2:
        var_r7 = lbl_8026E470 + 0x15C;
        break;
    case 3:
        var_r7 = lbl_8026E470 + 0x163;
        break;
    default:
        var_r7 = NULL;
        break;
    }
    fn_8001019C(0x160, 0, 1, lbl_8026E470 + 0x168, var_r7);
    fn_8001019C(0x148, 0x18, 1, lbl_8026E470 + 0x177, *(void **)(lbl_802832E0 + 4));
}
#pragma cplusplus reset

void *fn_800A9AFC(void) {
    extern char lbl_8026E470[];
    return &lbl_8026E470[0x19B];
}

s32 fn_800A9B0C(void) {
    M2C_UNK fn_800EB884();
    fn_800EB884();
    fn_80006220(3);
    return 5;
}

#pragma cplusplus on
extern "C" void fn_800A9B38(void *arg0, void *arg1, void *arg2) {
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007858(f32, f32);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007124(void);
    void fn_8000727C(f32);
    void fn_80007884(void);
    struct Model {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual f32 v25() = 0;
    };
    struct Drawer {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4(void *) = 0;
    };
    extern f32 lbl_80369BB0;
    extern f32 lbl_80369C20;
    extern f32 lbl_80369C24;

    fn_8000A258();
    fn_80009D74((f32) M2C_FIELD(arg1, s16 *, 0x30), (f32) M2C_FIELD(arg1, s16 *, 0x32),
        M2C_FIELD(arg1, Model **, 0x3C)->v25() - lbl_80369C20, lbl_80369BB0);
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_80007898(5);
    fn_80007858((f32) M2C_FIELD(arg2, s16 *, 0x30), (f32) M2C_FIELD(arg2, s16 *, 0x32));
    fn_800076AC(0, 0, 0, 0xFF);
    M2C_FIELD(arg2, Drawer **, 0x34)->v4(arg2);
    fn_80007124();
    fn_8000727C(lbl_80369C24);
    fn_80007884();
}
#pragma cplusplus reset

void *fn_800A9C5C(void) {
    extern u16 lbl_8026E470[];
    return (u8 *)lbl_8026E470 + 0x1b1;
}

s32 fn_800A9C6C(s32 unused, void *arg1) {
    void fn_801FFD7C(s32);
    fn_801FFD7C(*(s32 *)((char *)arg1 + 0x18));
    fn_80006220(3);
    return 5;
}

void *fn_800A9C9C(void) {
    extern u16 lbl_8026E470[];
    return (u8 *)lbl_8026E470 + 0x1be;
}

s32 fn_800A9CAC(void) {
    M2C_UNK fn_800EBACC(M2C_UNK, M2C_UNK);
    fn_800EBACC(0, 0);
    fn_80006220(3);
    return 5;
}

void *fn_800A9CE0(void) {
    extern u16 lbl_8026E470[];
    return (u8 *)lbl_8026E470 + 0x1d2;
}

s32 fn_800A9CF0(void) {
    M2C_UNK fn_800EBD78(M2C_UNK, M2C_UNK);
    fn_800EBD78(0, 0);
    fn_80006220(3);
    return 5;
}

void *fn_800A9D24(void) {
    extern u16 lbl_8026E470[];
    return (u8 *)lbl_8026E470 + 0x1e6;
}

s32 fn_800A9D34(void) {
    extern void *lbl_80367240;
    extern u8 lbl_80367701;
    extern s8 lbl_80367702;
    fn_80006220(4);
    if ((u32) (M2C_FIELD(lbl_80367240, s32 *, 4) & 0x60) == 0x60) {
        lbl_80367701 ^= 1;
    }
    if (M2C_FIELD(lbl_80367240, s32 *, 4) & 0x10) {
        lbl_80367702 = 1;
    }
    return 5;
}

void *fn_800A9D90(void) {
    extern u16 lbl_8026E470[];
    return (u8 *)lbl_8026E470 + 0x1f7;
}

s32 fn_800A9DA0(void) {
    fn_80006220(2);
    return 5;
}

void *fn_800A9DC8(void) {
    extern u16 lbl_8026E470[];
    return &lbl_8026E470[0x105];
}

s32 fn_800A9DD8(void) {
    fn_80006220(5);
    return 5;
}

void *fn_800A9E00(void) {
    extern u8 lbl_8026E470[];
    return (void *)((u32)lbl_8026E470 + 0xCC);
}

s32 fn_800A9E10(void *arg0) {
    u32 fn_80019ED0(s32);
    extern void *lbl_80367240;
    u32 flags;
    s32 delta;

    flags = *(u32 *)((u8 *)lbl_80367240 + 0x10);
    if (flags & 0x01000001) {
        delta = -1;
    }
    if (flags & 0x02000002) {
        delta = 1;
    }
    if (fn_80019ED0((s8)((u8 *)arg0)[4] + delta) == 0) {
        return 0;
    }
    ((u8 *)arg0)[4] = ((u8 *)arg0)[4] + delta;
    return 0;
}

s32 fn_800AA078(void *arg0) {
    s32 fn_8000CEE4(M2C_UNK);
    void fn_80016DE0(void);
    void *fn_80019ED0(s32);
    void fn_8014D2B0(void *, u8);
    void fn_8014D698(void *, u8, M2C_UNK, M2C_UNK, M2C_UNK);
    extern u8 lbl_80330708[];
    extern u64 lbl_80331FB8[];
    u8 saved;

    saved = lbl_80330708[0xA6];
    fn_80016DE0();
    fn_8014D698(lbl_80330708, (u8)(fn_8000CEE4(0x1E) + 1), 0, 0, 1);
    lbl_80330708[0xA6] = saved;
    {
        void *tmp = fn_80019ED0(((s8 *)arg0)[4]);
        u8 val = *(u8 *)((u8 *)tmp + 0x3C);
        fn_8014D2B0(lbl_80330708, val);
    }
    lbl_80331FB8[1] = 0x0123456789ABCDEFULL;
    fn_80006220(0xA);
    return 5;
}

void fn_800AA134(void) {
    M2C_UNK fn_8000BF00(void *);
    extern u8 lbl_8028CDF0[];
    fn_8000BF00(lbl_8028CDF0);
}

void fn_800AA15C(void) {
    extern u8 lbl_8028CDF0[];
    void fn_8000CAF0(void *, s32);
    fn_8000CAF0(lbl_8028CDF0, 4);
}

u32 *fn_8000C0C0(u32 arg0);
s32 fn_800AA188(void) {
    void *fn_8000C0C0(void *);
    extern u8 lbl_8028CDF0[];
    void *p;

    p = fn_8000C0C0(lbl_8028CDF0);
    if (p != NULL) {
        return *(s32 *)((u8 *)p + 0x60) == 0;
    }
    return 0;
}

void fn_800AA1CC(void)
{
    void *fn_8000C0C0(void *);
    extern u8 lbl_8028CDF0[];
    void *p;
    u32 v;

    p = fn_8000C0C0(lbl_8028CDF0);
    if (p != NULL) {
        v = *(u32 *)((u8 *)p + 0x60);
        *(u32 *)((u8 *)p + 0x60) = v + 1;
    }
}

void fn_800AA208(void)
{
    void *fn_8000C0C0(void *);
    extern u8 lbl_8028CDF0[];
    void *p;
    u32 v;

    p = fn_8000C0C0(lbl_8028CDF0);
    if (p != NULL) {
        v = *(u32 *)((u8 *)p + 0x60);
        *(u32 *)((u8 *)p + 0x60) = v - 1;
    }
}

void fn_800AA244(void) {
    M2C_UNK fn_800F0774();
    M2C_UNK fn_800F2E70();
    fn_800F2E70();
    fn_800F0774();
}

s32 fn_800AA268(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60) != 0;
}

void fn_800AA27C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}


s32 fn_800AA288(s32 arg0) {
    s32 fn_8003F224(s32, s32);
    s32 fn_8003F47C(void);
    void fn_80040844(void);
    s32 fn_800431E4(void);
    u8 fn_80105E88(s32, s32);
    s32 count;
    s32 list;
    s32 i;
    s32 item;

    fn_80040844();
    list = fn_800431E4();
    count = fn_8003F47C();
    for (i = 0; i < count; i++) {
        item = fn_8003F224(list, i);
        if (fn_80105E88(item, arg0)) {
            return item;
        }
    }
    return 0;
}
s32 fn_800AA304(s8 arg0, s8 arg1) {
    extern struct {
        u8 pad0[0xD];
        u8 unitMap[0x6100];
        u8 pad1;
        s16 costMap[0x4040];
        s8 fogMap[64];
    } lbl_802CA518;
    extern u8 lbl_802B14E4[];
    extern void *lbl_802EF4C8[];
    s16 val;
    u8 id;
    void *unit;

    val = lbl_802CA518.costMap[arg0 + arg1 * 64];
    if (val < 0) {
        return 0;
    }
    if (val == 0) {
        return 1;
    }
    if (lbl_802CA518.fogMap[arg0 + arg1 * 64] != 0) {
        return 0;
    }
    id = lbl_802CA518.unitMap[arg0 + arg1 * 64];
    if (id != 0) {
        unit = lbl_802B14E4 + (id - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit != NULL && unit != lbl_802EF4C8[0]) {
        return 0;
    }
    return 1;
}

void fn_800AA3C0(void) {
    void fn_8004A1F0(void);
    void fn_8004A224(void);
    void fn_800AACDC(void *);

    extern u8 lbl_802B14E4[101760];
    extern u8 lbl_802CA518[151280];
    extern u8 lbl_80330708[1400];
    extern void *lbl_80367240;
    extern void *lbl_80367800;
    extern s8 lbl_80367804;

    void *unit;
    u8 id;
    s8 sx;
    s8 sy;
    struct {
        struct {
            u8 pad[2];
            s8 unk2;
            s8 unk3;
        } *unk0;
        u32 unk4;
    } *ctrl;

    if (lbl_80367804 == 0) {
        lbl_80367800 = NULL;
        lbl_80367804 = 1;
    }

    sx = *(float *)&lbl_80330708[0x524];
    sy = *(float *)&lbl_80330708[0x528];
    id = lbl_802CA518[sx + (sy << 6) + 0xD];
    unit = (id != 0) ? &lbl_802B14E4[(id - 1) * 0x280] : NULL;

    if (lbl_80367800 != unit) {
        ctrl = lbl_80367240;
        if ((ctrl->unk4 & 0xF) != 0 || ctrl->unk0->unk2 != 0 || ctrl->unk0->unk3 != 0) {
            if (unit == NULL) {
                fn_8004A1F0();
                lbl_80367800 = NULL;
            }
        } else if ((u32)(((lbl_80330708[0x9F] >> 6) & 1)) != 1U) {
            lbl_80367800 = unit;
            if (unit == NULL || *(u8 *)(*(u32 *)((char *)unit + 0x190) + 8) == 0) {
                fn_8004A1F0();
            } else {
                fn_800AACDC(unit);
                fn_8004A224();
            }
        }
    }
}

void *fn_800AA5F0(void *arg0) {
    extern void *lbl_802CA264;
    u32 var_r0;
    void *var_r3;
    void *var_r4;
    void *var_r5;

    var_r4 = *(void **)lbl_802CA264;
    if (var_r4 == NULL) {
        return NULL;
    }

    if (arg0 != NULL) {
        u8 *temp_r0 = *(u8 **)((char *)arg0 + 0x190);
        temp_r0 = *(u8 **)((char *)temp_r0 + 8);
        if ((temp_r0 != NULL) && (*temp_r0 != 0)) {
            arg0 = NULL;
        }
    }

    if (arg0 == NULL) {
    loop_40:
        var_r3 = var_r4;
        do {
            s32 *temp_r0 = *(s32 **)((char *)var_r4 + 0x1A0);
            if (*temp_r0 & 5) {
                var_r0 = 0;
            } else {
                u16 *temp_r1 = *(u16 **)((char *)var_r4 + 0x1A4);
                if (((*temp_r1 >> 7) & 7) == 0) {
                    u8 *temp_r2 = *(u8 **)((char *)var_r4 + 0x1A5);
                    if ((*temp_r2 & 7) != 0) {
                        var_r0 = 0;
                    } else {
                        var_r0 = 1;
                    }
                } else {
                    var_r0 = 0;
                }
            }

            if (var_r0 != 0) {
                return var_r4;
            }
            var_r4 = *(void **)((char *)var_r4 + 0x184);
        } while (var_r4 != NULL);
        return NULL;
    } else {
        var_r5 = *(void **)((char *)arg0 + 0x184);
        if (var_r5 == NULL) {
            var_r5 = var_r4;
        }
    loop_15:
        var_r3 = var_r5;
        do {
            s32 *temp_r0 = *(s32 **)((char *)var_r3 + 0x1A0);
            if (*temp_r0 & 5) {
                var_r0 = 0;
            } else {
                u16 *temp_r1 = *(u16 **)((char *)var_r3 + 0x1A4);
                if (((*temp_r1 >> 7) & 7) == 0) {
                    u8 *temp_r2 = *(u8 **)((char *)var_r3 + 0x1A5);
                    if ((*temp_r2 & 7) != 0) {
                        var_r0 = 0;
                    } else {
                        var_r0 = 1;
                    }
                } else {
                    var_r0 = 0;
                }
            }

            if (var_r0 == 0) {
                var_r3 = *(void **)((char *)var_r3 + 0x184);
                goto loop_15;
            }
            return var_r3;
        } while (0); /* Never reached */
    }
}

s32 fn_800AA76C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = arg2;
    temp_r0 = arg0 + var_r5;
    if (temp_r0 > arg1) {
        return arg1 - arg0;
    }
    if (temp_r0 < 0) {
        var_r5 = -arg0;
    }
    return var_r5;
}

void *fn_800AA794(void) {
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    s8 sx;
    s8 sy;
    u8 id;

    sx = (s8)*(f32 *)(lbl_80330708 + 0x524);
    sy = (s8)*(f32 *)(lbl_80330708 + 0x528);
    id = lbl_802CA518[sx + (sy << 6) + 0xD];
    if (id != 0) {
        return &lbl_802B14E4[(id - 1) * 0x280];
    }
    return NULL;
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
void fn_800AA89C(void *arg0) {
    u8 fn_8001DDBC(void *);
    void fn_8002011C(u8 *, s8, s8, u8, u8);
    void **fn_80037BBC(void *, s32);
    u8 fn_8009339C(void *);
    u8 fn_80105BC0(void *, s32);
    extern u8 lbl_802CA518[151280];

    u8 saved;
    void *self;
    s32 slot;
    s8 bestMax;
    s8 bestMin;
    u8 *map;
    u8 *unitSlot;
    u32 pp;
    void *item;
    u32 atk;
    s8 y;
    s8 x;
    s32 yOff;
    u8 *rowBase;
    u8 *cell;
    s32 idx2;

    self = arg0;
    bestMin = 0x64;
    map = lbl_802CA518;
    bestMax = 0;
    unitSlot = map + 0xD;
    slot = 0;
    saved = unitSlot[(s8)*(u8 *)((u8 *)self + 0x19E) + ((s8)*(u8 *)((u8 *)self + 0x19F) << 6)];
    unitSlot[(s8)*(u8 *)((u8 *)self + 0x19E) + ((s8)*(u8 *)((u8 *)self + 0x19F) << 6)] = 0;

    goto slot_cmp;
slot_loop:
    pp = (u32)fn_80037BBC(self, slot);
    item = *(void **)pp;
    if (item == NULL) {
        goto slots_done;
    }
    if (fn_8009339C(self) == 0) {
        goto slot_next;
    }
    item = *(void **)pp;
    if (item != NULL) {
        pp = ((u8 *)item)[0x1D];
    } else {
        pp = 0;
    }
    if (item != NULL) {
        atk = fn_8001DDBC(item);
    } else {
        atk = 0;
    }
    atk = (u8)atk;
    if (bestMin > (s32)pp || (s32)atk > bestMax) {
        if ((s32)pp < bestMin) {
            bestMin = (s8)pp;
        }
        if (bestMax < (s32)atk) {
            bestMax = (s8)atk;
        }
        y = 0;
        yOff = 0;
        rowBase = lbl_802CA518;
        goto y_cmp;
y_loop:
        cell = rowBase;
        idx2 = yOff << 1;
        x = 0;
        goto x_cmp;
x_loop:
        if (*(s16 *)(map + idx2 + 0x610E) >= 0
            && (s8)cell[0xE18E] == 0
            && cell[0xD] == 0) {
            fn_8002011C(lbl_802CA518, x, y, (u8)pp, (u8)atk);
        }
        idx2 += 2;
        cell += 1;
        x += 1;
x_cmp:
        if ((s32)x < *(s32 *)map) {
            goto x_loop;
        }
        yOff += 0x40;
        rowBase += 0x40;
        y += 1;
y_cmp:
        if ((s32)y < *(s32 *)(map + 4)) {
            goto y_loop;
        }
    }
slot_next:
    slot += 1;
slot_cmp:
    if (slot < 4) {
        goto slot_loop;
    }
slots_done:
    if (fn_80105BC0((u8 *)self + 0x1BC, 0x43) != 0) {
        u8 *map2 = lbl_802CA518;
        y = 0;
        yOff = 0;
        rowBase = map2;
        goto y2_cmp;
y2_loop:
        cell = rowBase;
        idx2 = yOff << 1;
        x = 0;
        goto x2_cmp;
x2_loop:
        if (*(s16 *)(map2 + idx2 + 0x610E) >= 0
            && (s8)cell[0xE18E] == 0
            && cell[0xD] == 0) {
            fn_8002011C(lbl_802CA518, x, y, 1, 2);
        }
        idx2 += 2;
        cell += 1;
        x += 1;
x2_cmp:
        if ((s32)x < *(s32 *)map2) {
            goto x2_loop;
        }
        yOff += 0x40;
        rowBase += 0x40;
        y += 1;
y2_cmp:
        if ((s32)y < *(s32 *)(map + 4)) {
            goto y2_loop;
        }
    }

    unitSlot[(s8)*(u8 *)((u8 *)self + 0x19E) + ((s8)*(u8 *)((u8 *)self + 0x19F) << 6)] = saved;
}
#pragma opt_strength_reduction reset
#pragma use_lmw_stmw reset

void fn_800AAB3C(void *arg0) {
    u8 fn_8001DDBC(void);
    void fn_8002011C(void *, u8, u8, u8);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void **fn_80037BBC(void *, s32);
    u8 fn_8009339C(void *);
    extern u16 lbl_802CA518;

    s32 var_r27;
    s8 var_r28;
    s8 var_r29;
    u8 var_r0;
    u8 var_r0_2;
    void **temp_r3;
    void *temp_r3_2;
    u8 temp_r31;

    fn_80022DAC(&lbl_802CA518, 5, -1);
    fn_80022DAC(&lbl_802CA518, 8, 0);
    fn_80022FD8(&lbl_802CA518, 6);
    var_r29 = 0x64;
    var_r28 = 0;
    var_r27 = 0;
loop_1:
    temp_r3 = fn_80037BBC(arg0, var_r27);
    if ((void *) *temp_r3 != NULL) {
        if (fn_8009339C(arg0) != 0) {
            temp_r3_2 = *temp_r3;
            if (temp_r3_2 != NULL) {
                var_r0 = M2C_FIELD(temp_r3_2, u8 *, 0x1D);
            } else {
                var_r0 = 0;
            }
            if (temp_r3_2 != NULL) {
                var_r0_2 = fn_8001DDBC();
            } else {
                var_r0_2 = 0;
            }
            if ((var_r29 > (s32) var_r0) || ((s32) var_r0_2 > var_r28)) {
                if ((s32) var_r0 < var_r29) {
                    var_r29 = (s8) var_r0;
                }
                if (var_r28 < (s32) var_r0_2) {
                    var_r28 = (s8) var_r0_2;
                }
                fn_8002011C(&lbl_802CA518, M2C_FIELD(arg0, u8 *, 0x19E), M2C_FIELD(arg0, u8 *, 0x19F), var_r0);
            }
        }
        var_r27 += 1;
        if (var_r27 < 4) {
            goto loop_1;
        }
    }
}

void fn_800AAC64(void *arg0) {
    extern u8 lbl_802CA518[];
    
    fn_80022FD8(lbl_802CA518, 5);
    fn_800227F8(lbl_802CA518, *(s32*)((char*)arg0 + 0x18C));
    fn_80022748(lbl_802CA518, 0);
    fn_800213D0(lbl_802CA518, *(u8*)((char*)arg0 + 0x19E), *(u8*)((char*)arg0 + 0x19F), 0x3E8, 0, 0);
}

void fn_800AAE78(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    void *fn_8000CAA0(void *, void *);
    void *fn_80037BD0(void *, s32);
    void fn_8001C4FC(void *, void *);
    void fn_80091CD8(void *);
    void fn_8018DBD8(void);
    void fn_800256A0(void *, s32);
    void fn_8000C070(void *, s32);
    extern u8 lbl_8028CEF8[];
    extern void *lbl_802EF4C8[];
    extern u8 lbl_80312ACC[];
    extern u8 lbl_80330708[];
    extern void *lbl_80367240;
    typedef struct {
        u8 pad[0x28];
        s16 unk28;
        u8 pad2A[0x30 - 0x2A];
        void *unk30;
        void *unk34;
        s16 unk38;
        s16 unk3A;
        u8 unk3C;
        u8 unk3D;
        u8 unk3E;
        u8 unk3F;
        u8 pad40;
        u8 unk41;
        u8 unk42;
        u8 unk43;
        u8 unk44;
        u8 unk45;
    } Obj;
    s32 col;
    s32 row;
    u8 *entry;
    u8 *rowPtr;
    u8 *base;
    Obj *self;

    {
        void *ret;
        void **ef;
        void *w1;
        void *w0;
        ret = fn_8000CAA0(lbl_8028CEF8, arg0);
        ef = lbl_802EF4C8;
        row = 0;
        w1 = ef[1];
        base = lbl_80312ACC;
        w0 = ef[0];
        self = ret;
        self->unk30 = w0;
        rowPtr = base;
        self->unk34 = w1;
        self->unk3A = -1;
        self->unk38 = -1;
        self->unk43 = 0;
        self->unk41 = 0;
    }
    do {
        col = 0;
        entry = rowPtr;
        do {
            *(s16 *)entry = 0x1E;
            *(s16 *)(entry + 2) = (s16)(((col & 3) * 0x1C) + 0x71);
            if (row != 0) {
                *(s16 *)entry = (s16)(*(s16 *)entry + 0x118);
            }
            if (col >= 4) {
                *(s16 *)(entry + 2) = (s16)(*(s16 *)(entry + 2) + 0x88);
            }
            if (row != 0) {
                fn_8001C4FC(entry + 4, fn_80037BD0(self->unk34, col));
            } else {
                fn_8001C4FC(entry + 4, fn_80037BD0(self->unk30, col));
            }
            col += 1;
            entry += 0x10;
        } while (col < 8);
        row += 1;
        rowPtr += 0x80;
    } while (row < 2);
    self->unk44 = 0;
    fn_80091CD8(self->unk30);
    fn_80091CD8(self->unk34);
    rowPtr = base;
    for (row = 0; row < 2; row++, rowPtr += 0x80) {
        for (entry = rowPtr, col = 0; col < 8; entry += 0x10, col++) {
            if (col < 4 && self->unk44 != 0) {
                entry[0xC] = 0;
            } else {
                entry[0xC] = (*(s32 *)(entry + 4) != 0);
            }
        }
    }
    col = 0;
    entry = base;
    self->unk3C = 0;
    while (1) {
        if (col >= 8) {
            col = -1;
            break;
        }
        if (entry[0xC] != 0) {
            break;
        }
        entry += 0x10;
        col += 1;
    }
    self->unk3D = col;
    if ((s8)self->unk3D < 0) {
        col = 0;
        self->unk3C = 1;
        while (1) {
            if (col >= 8) {
                col = -1;
                break;
            }
            if (base[0x8C] != 0) {
                break;
            }
            base += 0x10;
            col += 1;
        }
        self->unk3D = col;
    }
    self->unk3E = 0;
    self->unk3F = 0;
    fn_8018DBD8();
    lbl_80330708[0x51D] = 0xF;
    self->unk42 = 1;
    self->unk45 = arg1;
    if (arg2 >= 0) {
        self->unk42 = 0;
        self->unk41 = 0;
        for (row = 0; row < 2; row++, base += 0x80) {
            for (entry = base, col = 0; col < 8; entry += 0x10, col++) {
                if (col < 4 && self->unk44 != 0) entry[0xC] = 0;
                else entry[0xC] = (*(s32 *)(entry + 4) != 0);
            }
        }
        self->unk3C = arg2;
        self->unk3D = arg3;
        fn_8000C070(self, 1);
    }
}

#pragma use_lmw_stmw on
void fn_800AB2A4(void *arg0) {
    void *fn_8000CAA0(void *, void *);
    void *fn_80037BD0(void *, s32);
    void fn_8001C4FC(void *, void *);
    void fn_80091CD8(void *);
    void fn_8018DBD8(void);
    void fn_800256A0(void *, s32);
    void fn_8000C070(void *, s32);
    extern u8 lbl_8028CE90[];
    extern void *lbl_802EF4C8[];
    extern u8 lbl_80312ACC[];
    extern u8 lbl_80330708[];
    extern void *lbl_80367240;
    typedef struct {
        u8 pad[0x28];
        s16 unk28;
        u8 pad2A[0x30 - 0x2A];
        void *unk30;
        void *unk34;
        s16 unk38;
        s16 unk3A;
        u8 unk3C;
        u8 unk3D;
        u8 unk3E;
        u8 unk3F;
        u8 pad40;
        u8 unk41;
        u8 unk42;
        u8 unk43;
        u8 unk44;
        u8 unk45;
    } Obj;
    s32 row;
    u8 *rowPtr;
    u8 *base;
    Obj *self;
    s32 col;
    u8 *entry;

    {
        void *ret;
        void **ef;
        void *w1;
        void *w0;
        ret = fn_8000CAA0(lbl_8028CE90, arg0);
        ef = lbl_802EF4C8;
        row = 0;
        w1 = ef[1];
        rowPtr = lbl_80312ACC;
        w0 = ef[0];
        self = ret;
        self->unk30 = w0;
        base = rowPtr;
        self->unk34 = w1;
        self->unk3A = -1;
        self->unk38 = -1;
        self->unk43 = row;
        self->unk41 = row;
    }
    do {
        col = 0;
        entry = rowPtr;
        do {
            *(s16 *)entry = 0x1E;
            *(s16 *)(entry + 2) = (s16)(((col & 3) * 0x1C) + 0x71);
            if (row != 0) {
                *(s16 *)entry = (s16)(*(s16 *)entry + 0x118);
            }
            if (col >= 4) {
                *(s16 *)(entry + 2) = (s16)(*(s16 *)(entry + 2) + 0x88);
            }
            if (row != 0) {
                fn_8001C4FC(entry + 4, fn_80037BD0(self->unk34, col));
            } else {
                fn_8001C4FC(entry + 4, fn_80037BD0(self->unk30, col));
            }
            col += 1;
            entry += 0x10;
        } while (col < 8);
        row += 1;
        rowPtr += 0x80;
    } while (row < 2);
    self->unk44 = 0;
    fn_80091CD8(self->unk30);
    fn_80091CD8(self->unk34);
    rowPtr = base;
    for (row = 0; row < 2; row++, rowPtr += 0x80) {
        for (entry = rowPtr, col = 0; col < 8; entry += 0x10, col++) {
            if (col < 4 && self->unk44 != 0) {
                entry[0xC] = 0;
            } else {
                entry[0xC] = (*(s32 *)(entry + 4) != 0);
            }
        }
    }
    col = 0;
    entry = base;
    self->unk3C = 0;
    while (1) {
        if (col >= 8) {
            col = -1;
            break;
        }
        if (entry[0xC] != 0) {
            break;
        }
        entry += 0x10;
        col += 1;
    }
    self->unk3D = col;
    if ((s8)self->unk3D < 0) {
        col = 0;
        self->unk3C = 1;
        while (1) {
            if (col >= 8) {
                col = -1;
                break;
            }
            if (base[0x8C] != 0) {
                break;
            }
            base += 0x10;
            col += 1;
        }
        self->unk3D = col;
    }
    self->unk3E = 0;
    self->unk3F = 0;
    fn_8018DBD8();
    lbl_80330708[0x51D] = 0xF;
    self->unk42 = 1;
    self->unk28 = 4;
    self->unk45 = 0x9A;
    if (*((u8 *)lbl_802EF4C8 + 8) == 0x28) {
        fn_800256A0(lbl_80367240, 0x100);
        self->unk3C = 0;
        self->unk3D = *((u8 *)lbl_802EF4C8 + 0xA);
        fn_8000C070(self, 3);
    }
}
void fn_800AB73C(void) {
    M2C_UNK fn_800AB75C();
    fn_800AB75C();
}

void fn_800AB75C(void *arg0) {
    void fn_8001C76C(void *);
    void *fn_8001C4FC(void *, void *);
    void *fn_8001C5F8(void *, s32);
    void fn_800ABA3C(void *);
    extern u8 lbl_80312ACC[];

    u8 sp8[8];
    u8 *var_r3;
    s32 j;
    u8 temp_x;
    void *self;
    s32 i;
    s8 y;
    u8 *var_r7;
    u8 *var_r8;

    self = arg0;
    *(u8 *)((u8 *)self + 0x43) = 1;
    ((Entry9Bits *)(lbl_80312ACC + ((s8)*(u8 *)((u8 *)self + 0x3C) << 7)
                                  + ((s8)*(u8 *)((u8 *)self + 0x3D) << 4) + 9))->flag = 0;
    ((Entry9Bits *)(lbl_80312ACC + ((s8)*(u8 *)((u8 *)self + 0x3E) << 7)
                                  + ((s8)*(u8 *)((u8 *)self + 0x3F) << 4) + 9))->flag = 0;
    fn_8001C76C(sp8);
    fn_8001C4FC(sp8, lbl_80312ACC + ((s8)*(u8 *)((u8 *)self + 0x3C) << 7)
                                 + ((s8)*(u8 *)((u8 *)self + 0x3D) << 4) + 4);
    fn_8001C4FC(lbl_80312ACC + ((s8)*(u8 *)((u8 *)self + 0x3C) << 7)
                           + ((s8)*(u8 *)((u8 *)self + 0x3D) << 4) + 4,
                lbl_80312ACC + ((s8)*(u8 *)((u8 *)self + 0x3E) << 7)
                             + ((s8)*(u8 *)((u8 *)self + 0x3F) << 4) + 4);
    fn_8001C4FC(lbl_80312ACC + ((s8)*(u8 *)((u8 *)self + 0x3E) << 7)
                           + ((s8)*(u8 *)((u8 *)self + 0x3F) << 4) + 4, sp8);
    fn_800ABA3C(self);
    var_r8 = (u8 *)(u32)lbl_80312ACC;
    for (i = 0; i < 2; i++, var_r8 += 0x80) {
        for (var_r7 = var_r8, j = 0; j < 8; var_r7 += 0x10, j++) {
            if (j < 4 && *(u8 *)((u8 *)self + 0x44) != 0) {
                *(u8 *)(var_r7 + 0xC) = 0;
            } else {
                *(u8 *)(var_r7 + 0xC) = (*(s32 *)(var_r7 + 4) != 0);
            }
        }
    }
    temp_x = *(u8 *)((u8 *)self + 0x3E);
    y = *(u8 *)((u8 *)self + 0x3F);
    var_r3 = lbl_80312ACC + ((s8)*(u8 *)((u8 *)self + 0x3E) << 7) + (y << 4);
    if (y >= 0) {
        while (1) {
            if (*(u8 *)(var_r3 + 0xC) != 0) {
                break;
            }
            var_r3 -= 0x10;
            y -= 1;
        }
    }
    if (y - (s8)*(u8 *)((u8 *)self + 0x40) >= 0) {
        *(u8 *)((u8 *)self + 0x3C) = temp_x;
        *(u8 *)((u8 *)self + 0x3D) = (u8)y;
    }
    fn_8001C5F8(sp8, -1);
}

#pragma cplusplus on
#pragma opt_strength_reduction off
extern "C" void *fn_8001C4FC(void *, void *);
extern "C" void fn_8001D580(void *);
#pragma cplusplus off
void fn_800ABA3C(void) {
    void fn_8001C76C(void *);
    void fn_8001D580(void *);
    void fn_8001C5F8(void *, s32);
    extern u8 lbl_80312ACC[];
    u8 *base;
    {
        u8 a[4][8];
        s32 off, n;
        u8 *p;
        u8 *q;
        u8 *dst;
        s32 i;
        u8 *check;
        fn_8001C76C(a[0]); fn_8001C76C(a[1]); fn_8001C76C(a[2]); fn_8001C76C(a[3]);

        q = a[0];
        for(i=0,p=q;i<4;i++,p+=8) fn_8001D580(p);
        base=lbl_80312ACC;
        i=0; n=i; off=i; dst=base+0;
        for(i=0,p=dst,check=base;i<4;i++,p+=16,check+=16) {
            if (*(u32 *)(check+4)!=0) {
                u8 *out = (u8 *)a+off;
                n++; off+=8;
                fn_8001C4FC(out,p+4);
            }
            fn_8001D580(p+4);
        }
        for(i=0;i<n;q+=8,dst+=16,i++) fn_8001C4FC(dst+4,q);
        fn_8001C5F8(a[3],-1); fn_8001C5F8(a[2],-1); fn_8001C5F8(a[1],-1); fn_8001C5F8(a[0],-1);

    }
    {
        u8 a[4][8];
        s32 off, n;
        u8 *p;
        u8 *q;
        u8 *dst;
        s32 i;
        u8 *check;
        fn_8001C76C(a[0]); fn_8001C76C(a[1]); fn_8001C76C(a[2]); fn_8001C76C(a[3]);

        q = a[0];
        for(i=0,p=q;i<4;i++,p+=8) fn_8001D580(p);
        base=lbl_80312ACC;
        i=0; n=i; off=i; dst=base+64;
        for(i=0,p=dst,check=base;i<4;i++,p+=16,check+=16) {
            if (*(u32 *)(check+68)!=0) {
                u8 *out = (u8 *)a+off;
                n++; off+=8;
                fn_8001C4FC(out,p+4);
            }
            fn_8001D580(p+4);
        }
        for(i=0;i<n;q+=8,dst+=16,i++) fn_8001C4FC(dst+4,q);
        fn_8001C5F8(a[3],-1); fn_8001C5F8(a[2],-1); fn_8001C5F8(a[1],-1); fn_8001C5F8(a[0],-1);

    }
    {
        u8 a[4][8];
        s32 off, n;
        u8 *p;
        u8 *q;
        u8 *dst;
        s32 i;
        u8 *check;
        fn_8001C76C(a[0]); fn_8001C76C(a[1]); fn_8001C76C(a[2]); fn_8001C76C(a[3]);

        q = a[0];
        for(i=0,p=q;i<4;i++,p+=8) fn_8001D580(p);
        base=lbl_80312ACC;
        i=0; n=i; off=i; dst=base+128;
        for(i=0,p=dst,check=base;i<4;i++,p+=16,check+=16) {
            if (*(u32 *)(check+132)!=0) {
                u8 *out = (u8 *)a+off;
                n++; off+=8;
                fn_8001C4FC(out,p+4);
            }
            fn_8001D580(p+4);
        }
        for(i=0;i<n;q+=8,dst+=16,i++) fn_8001C4FC(dst+4,q);
        fn_8001C5F8(a[3],-1); fn_8001C5F8(a[2],-1); fn_8001C5F8(a[1],-1); fn_8001C5F8(a[0],-1);

    }
    {
        u8 a[4][8];
        s32 off, n;
        u8 *p;
        u8 *q;
        u8 *dst;
        s32 i;
        u8 *check;
        fn_8001C76C(a[0]); fn_8001C76C(a[1]); fn_8001C76C(a[2]); fn_8001C76C(a[3]);

        q = a[0];
        for(i=0,p=q;i<4;i++,p+=8) fn_8001D580(p);
        base=lbl_80312ACC;
        i=0; n=i; off=i; dst=base+192;
        for(i=0,p=dst,check=base;i<4;i++,p+=16,check+=16) {
            if (*(u32 *)(check+196)!=0) {
                u8 *out = (u8 *)a+off;
                n++; off+=8;
                fn_8001C4FC(out,p+4);
            }
            fn_8001D580(p+4);
        }
        for(i=0;i<n;q+=8,dst+=16,i++) fn_8001C4FC(dst+4,q);
        fn_8001C5F8(a[3],-1); fn_8001C5F8(a[2],-1); fn_8001C5F8(a[1],-1); fn_8001C5F8(a[0],-1);

    }
}
void fn_800ABE74(void *arg0) {
    void fn_800AC0C0(void);
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    s32 fn_8000E0E4(void *);
    u64 *fn_8001CB64(void *);
    void fn_801475FC(void *, s32);
    void fn_80166AE8(s16, s32, s32, void *, void *);
    u8 fn_80166D8C(void *);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, void *, f32, f32);
    extern void *lbl_80367240;
    extern u8 lbl_80330D68[];
    extern u8 lbl_80312ACC[];
    extern u8 lbl_8026E858[];
    extern u32 lbl_80368DC4;
    u32 var_r31;
    void *var_r30;
    s32 var_r29;
    register s32 str;
    register u8 *entry;
    u32 a;

    var_r30 = arg0;
    fn_800AC0C0();
    a = ((u32 *)lbl_80367240)[1];
    var_r31 = a & (((u32 *)lbl_80367240)[2] ^ a);
    if (fn_80166D8C(lbl_80330D68) != 0) {
        if (var_r31 & 0xA00) {
            fn_801673D0(lbl_80330D68);
        }
    } else if (var_r31 & 0x100) {
        register var_r31 = 0;
        entry = lbl_80312ACC + (((s8)*(u8 *)((u8 *)var_r30 + 0x3C)) << 7)
                              + (((s8)*(u8 *)((u8 *)var_r30 + 0x3D)) << 4);
        if (*(u32 *)(entry + 4) != 0) {
            if (*fn_8001CB64(entry + 4) & 0x200) {
                var_r31 = 1;
            }
        }
        if ((u8)var_r31 != 0) {
            var_r31 = ((s8)*(u8 *)((u8 *)var_r30 + 0x3D)) << 4;
            var_r29 = ((s8)*(u8 *)((u8 *)var_r30 + 0x3C)) << 7;
            str = fn_8000E0E4(lbl_8026E858 + 0xE7);
            entry = lbl_80312ACC + var_r29;
            fn_80166AE8(*(s16 *)((u8 *)entry + var_r31),
                        *(s16 *)((u8 *)entry + var_r31 + 2) + 0x28,
                        str, var_r30, entry);
        } else {
            fn_8000C188(var_r30);
            fn_801475FC(lbl_8026E858 + 0xEF, 0x64);
        }
    } else if (var_r31 & 0x200) {
        *(u8 *)((u8 *)var_r30 + 0x3C) = *(u8 *)((u8 *)var_r30 + 0x3E);
        *(u8 *)((u8 *)var_r30 + 0x3D) = *(u8 *)((u8 *)var_r30 + 0x3F);
        fn_8000C070(var_r30, 0);
        fn_801475FC(lbl_8026E858 + 0xFF, 0x64);
    } else if (var_r31 & 0x800) {
        entry = lbl_80312ACC + (((s8)*(u8 *)((u8 *)var_r30 + 0x3C)) << 7)
                              + (((s8)*(u8 *)((u8 *)var_r30 + 0x3D)) << 4);
        if (*(u32 *)(entry + 4) != 0) {
            fn_8016746C(lbl_80330D68, var_r30, entry + 4,
                        (f32)*(s16 *)entry,
                        (f32)(*(s16 *)(entry + 2) + 0x28));
            *(u32 *)lbl_80330D68 |= lbl_80368DC4;
        }
    }
}

void fn_800AC0C0(void *arg0) {
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, void *, f32, f32);
    void fn_801673D0(void *);
    extern void *lbl_80367240;
    extern u8 lbl_80312ACC[];
    extern u8 lbl_8026E858[];
    extern u8 lbl_80330D68[];

    u8 var_r7;
    u32 temp_r0;
    u32 temp_r6;
    u32 temp_r3;
    s32 var_r6;
    u8 *var_r5;
    register s32 temp_r8;
    s32 temp_r5;
    s32 temp_r4;
    s32 var_r7_2;
    u8 *var_r5_2;
    u8 *var_r4;
    u8 *temp_r7;
    void *self = arg0;

    var_r7 = 0;
    temp_r0 = ((u32 *)lbl_80367240)[3];
    temp_r6 = ((u32 *)lbl_80367240)[1];
    temp_r3 = temp_r6 & (((u32 *)lbl_80367240)[2] ^ temp_r6);
    if ((temp_r0 & 0x01000001) && ((s32)*(u8 *)((u8 *)self + 0x3C) == 1)) {
        var_r6 = *(s8 *)((u8 *)self + 0x3D);
        var_r5 = lbl_80312ACC + (var_r6 * 0x10);
        while (1) {
            if (var_r6 < 0) {
                break;
            }
            if (var_r5[0xC] != 0) {
                break;
            }
            var_r5 -= 0x10;
            var_r6 -= 1;
        }
        if (var_r6 < 0) {
            return;
        }
        var_r7 = 1;
        *(u8 *)((u8 *)self + 0x3C) = 0;
        *(u8 *)((u8 *)self + 0x3D) = (u8)var_r6;
    }
    if ((temp_r0 & 0x02000002) && (*(s8 *)((u8 *)self + 0x3C) == 0)) {
        var_r6 = *(s8 *)((u8 *)self + 0x3D);
        var_r5 = lbl_80312ACC + (var_r6 * 0x10);
        while (1) {
            if (var_r6 < 0) {
                break;
            }
            if (var_r5[0x8C] != 0) {
                break;
            }
            var_r5 -= 0x10;
            var_r6 -= 1;
        }
        if (var_r6 < 0) {
            return;
        }
        var_r7 = 0;
        *(u8 *)((u8 *)self + 0x3C) = 1;
        *(u8 *)((u8 *)self + 0x3D) = (u8)var_r6;
    }
    if (temp_r0 & 0x08000008) {
        temp_r5 = *(s8 *)((u8 *)self + 0x3D);
        temp_r8 = *(s8 *)((u8 *)self + 0x3C);
        var_r6 = temp_r5 - 1;
        temp_r5 = temp_r8 * 0x80;
        var_r5 = lbl_80312ACC + temp_r5 + var_r6 * 0x10;
        while (1) {
            if (var_r6 < 0) {
                break;
            }
            if (var_r5[0xC] != 0) {
                break;
            }
            var_r5 -= 0x10;
            var_r6 -= 1;
        }
        temp_r5 = *(s8 *)((u8 *)self + 0x40);
        temp_r4 = var_r6 - temp_r5;
        if (temp_r4 < 0 || temp_r4 > 3) {
            if (!(temp_r3 & 0x08000008)) {
                return;
            }
            var_r7_2 = temp_r5 + 3;
            temp_r5 = temp_r8 * 0x80;
            var_r5_2 = lbl_80312ACC + temp_r5 + var_r7_2 * 0x10;
            while (1) {
                if (var_r7_2 < 0) {
                    break;
                }
                if (var_r5_2[0xC] != 0) {
                    break;
                }
                var_r5_2 -= 0x10;
                var_r7_2 -= 1;
            }
            var_r6 = var_r7_2;
        }
        *(u8 *)((u8 *)self + 0x3D) = (u8)var_r6;
        var_r7 = 1;
    }
    if (temp_r0 & 0x04000004) {
        temp_r5 = *(s8 *)((u8 *)self + 0x3D);
        temp_r8 = *(s8 *)((u8 *)self + 0x3C);
        var_r7_2 = temp_r5 + 1;
        temp_r5 = temp_r8 * 0x80;
        var_r4 = lbl_80312ACC + temp_r5 + var_r7_2 * 0x10;
        while (1) {
            if (var_r7_2 >= 8) {
                var_r7_2 = -1;
                break;
            }
            if (var_r4[0xC] != 0) {
                break;
            }
            var_r4 += 0x10;
            var_r7_2 += 1;
        }
        temp_r5 = *(s8 *)((u8 *)self + 0x40);
        temp_r4 = var_r7_2 - temp_r5;
        if (temp_r4 < 0 || temp_r4 > 3) {
            if (!(temp_r3 & 0x04000004)) {
                return;
            }
            var_r7_2 = temp_r5;
        }
        *(u8 *)((u8 *)self + 0x3D) = (u8)var_r7_2;
        var_r7 = 1;
    }
    if (var_r7 != 0) {
        fn_801475FC(lbl_8026E858 + 0x10F, 0x64);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            temp_r7 = lbl_80312ACC + (*(s8 *)((u8 *)self + 0x3C) << 7)
                                  + (*(s8 *)((u8 *)self + 0x3D) << 4);
            if (*(u32 *)(temp_r7 + 4) != 0) {
                fn_80166DD0(lbl_80330D68, temp_r7 + 4,
                            (f32)*(s16 *)temp_r7,
                            (f32)(*(s16 *)(temp_r7 + 2) + 0x28));
            } else {
                fn_801673D0(lbl_80330D68);
            }
        }
    }
}

void fn_800AC400(void) {
    M2C_UNK func_8000BF00(void*);
    extern u16 lbl_8028CDF0[];
    func_8000BF00(lbl_8028CDF0);
}

void fn_800AC5DC(void *arg0) {
    void fn_800AC810(void);
    u8 fn_80166D8C(void *);
    void fn_801673D0(void *);
    u64 *fn_8001CB64(void *);
    s32 fn_8000E0E4(void *);
    void fn_80166AE8(s16, s32, s32, void *, void *);
    void fn_8000C070(void *, s32);
    void fn_801475FC(void *, s32);
    void fn_8016746C(void *, void *, void *, f32, f32);

    extern void *lbl_80367240;
    extern u8 lbl_80330D68[];
    extern u8 lbl_80312ACC[];
    extern u8 lbl_8026E858[];
    extern u32 lbl_80368DC4;

    void *self;
    u32 pressed;

    self = arg0;
    fn_800AC810();
    pressed = ((u32 *)lbl_80367240)[1] & (((u32 *)lbl_80367240)[2] ^ ((u32 *)lbl_80367240)[1]);
    if (fn_80166D8C(lbl_80330D68) != 0) {
        if (pressed & 0xA00) {
            fn_801673D0(lbl_80330D68);
        }
    } else if (pressed & 0x100) {
        pressed = 0;
        {
            u8 *entry = lbl_80312ACC + ((s8)*(u8 *)((char *)self + 0x3C) << 7)
                                      + ((s8)*(u8 *)((char *)self + 0x3D) << 4);
            if (*(u32 *)(entry + 4) != 0) {
                if (*fn_8001CB64(entry + 4) & 0x200) {
                    pressed = 1;
                }
            }
        }
        if ((u8)pressed != 0) {
            s32 off_c;
            s32 str;
            u8 *entry;
            pressed = (s8)*(u8 *)((char *)self + 0x3D) << 4;
            off_c = (s8)*(u8 *)((char *)self + 0x3C) << 7;
            str = fn_8000E0E4(lbl_8026E858 + 0xE7);
            entry = lbl_80312ACC + off_c;
            fn_80166AE8(*(s16 *)(entry + pressed),
                        *(s16 *)(entry + pressed + 2) + 0x28,
                        str, self, entry);
        } else {
            fn_8000C070(self, 1);
            fn_801475FC(lbl_8026E858 + 0xEF, 0x64);
        }
    } else if (pressed & 0x200) {
        fn_8000C070(self, 2);
        fn_801475FC(lbl_8026E858 + 0xFF, 0x64);
    } else if (pressed & 0x800) {
        u8 *entry = lbl_80312ACC + ((s8)*(u8 *)((char *)self + 0x3C) << 7)
                                  + ((s8)*(u8 *)((char *)self + 0x3D) << 4);
        s16 x = *(s16 *)entry;
        fn_8016746C(lbl_80330D68, self, entry + 4, (f32)x,
                    (f32)(*(s16 *)(entry + 2) + 0x28));
    }
    *(u32 *)lbl_80330D68 |= lbl_80368DC4;
}

void fn_800AC810(void *arg0) {
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, void *, f32, f32);
    extern void *lbl_80367240;
    extern u8 lbl_80312ACC[];
    extern u8 lbl_8026E858[];
    extern u8 lbl_80330D68[];
    extern f64 lbl_80369C28;
    s32 var_r8;
    s32 flags;
    s32 buttons;
    s32 pressed;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 tmp;
    u8 *entry;
    s16 x;
    s16 y;

    var_r8 = 0;
    flags = *(s32 *)((u8 *)lbl_80367240 + 0xC);
    buttons = *(s32 *)((u8 *)lbl_80367240 + 4);
    pressed = buttons & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ buttons);
    if (flags & 0x01000001) {
        tmp = *(u8 *)((u8 *)arg0 + 0x3C);
        if (tmp == 1) {
            var_r7 = *(s8 *)((u8 *)arg0 + 0x3D);
            var_r6 = var_r7;
            var_r5 = (s32)(lbl_80312ACC + var_r7 * 0x10);
        loop1:
            if (var_r6 >= 0 && *(u8 *)(var_r5 + 0xC) == 0) {
                var_r5 -= 0x10;
                var_r6 -= 1;
                goto loop1;
            }
            var_r5 = var_r6;
            if (var_r5 < 0) {
                var_r5 = (s32)(lbl_80312ACC + var_r7 * 0x10);
            loop1b:
                if (var_r7 >= 8) {
                    var_r7 = -1;
                } else if (*(u8 *)(var_r5 + 0xC) == 0) {
                    var_r5 += 0x10;
                    var_r7 += 1;
                    goto loop1b;
                }
                var_r5 = var_r7;
            }
            if (var_r5 < 0) {
                return;
            }
            var_r8 = 1;
            *(u8 *)((u8 *)arg0 + 0x3C) = 0;
            *(u8 *)((u8 *)arg0 + 0x3D) = var_r5;
        }
    }
    if (flags & 0x02000002) {
        tmp = *(s8 *)((u8 *)arg0 + 0x3C);
        if (tmp == 0) {
            var_r6 = *(s8 *)((u8 *)arg0 + 0x3D);
            var_r7 = var_r6;
            var_r5 = (s32)(lbl_80312ACC + var_r6 * 0x10);
        loop2:
            if (var_r7 >= 0 && *(u8 *)(var_r5 + 0x8C) == 0) {
                var_r5 -= 0x10;
                var_r7 -= 1;
                goto loop2;
            }
            if (var_r7 < 0) {
                var_r5 = (s32)(lbl_80312ACC + var_r6 * 0x10);
            loop2b:
                if (var_r6 >= 8) {
                    var_r6 = -1;
                } else if (*(u8 *)(var_r5 + 0x8C) == 0) {
                    var_r5 += 0x10;
                    var_r6 += 1;
                    goto loop2b;
                }
                var_r7 = var_r6;
            }
            if (var_r7 < 0) {
                return;
            }
            var_r8 = 1;
            *(u8 *)((u8 *)arg0 + 0x3C) = 1;
            *(u8 *)((u8 *)arg0 + 0x3D) = var_r7;
        }
    }
    if (flags & 0x08000008) {
        var_r6 = *(s8 *)((u8 *)arg0 + 0x3C);
        var_r7 = *(s8 *)((u8 *)arg0 + 0x3D) - 1;
        var_r5 = (s32)(lbl_80312ACC + (var_r6 << 7) + (var_r7 * 0x10));
    loop3:
        if (var_r7 >= 0 && *(u8 *)(var_r5 + 0xC) == 0) {
            var_r5 -= 0x10;
            var_r7 -= 1;
            goto loop3;
        }
        if (var_r7 < 0) {
            if (!(pressed & 0x08000008)) {
                return;
            }
            var_r7 = 7;
            var_r5 = (s32)(lbl_80312ACC + (var_r6 << 7) + 0x70);
        loop3b:
            if (var_r7 >= 0 && *(u8 *)(var_r5 + 0xC) == 0) {
                var_r5 -= 0x10;
                var_r7 -= 1;
                goto loop3b;
            }
        }
        *(u8 *)((u8 *)arg0 + 0x3D) = var_r7;
        var_r8 = 1;
    }
    if (flags & 0x04000004) {
        var_r6 = *(s8 *)((u8 *)arg0 + 0x3C);
        tmp = *(s8 *)((u8 *)arg0 + 0x3D) + 1;
        var_r5 = (s32)(lbl_80312ACC + (var_r6 << 7) + (tmp * 0x10));
    loop4:
        if (tmp >= 8) {
            tmp = -1;
        } else if (*(u8 *)(var_r5 + 0xC) == 0) {
            var_r5 += 0x10;
            tmp += 1;
            goto loop4;
        }
        if (tmp < 0) {
            if (!(pressed & 0x04000004)) {
                return;
            }
            tmp = 0;
            var_r5 = (s32)(lbl_80312ACC + (var_r6 << 7));
        loop4b:
            if (tmp >= 8) {
                tmp = -1;
            } else if (*(u8 *)(var_r5 + 0xC) == 0) {
                var_r5 += 0x10;
                tmp += 1;
                goto loop4b;
            }
        }
        *(u8 *)((u8 *)arg0 + 0x3D) = tmp;
        var_r8 = 1;
    }
    if ((u8)var_r8 != 0) {
        fn_801475FC(lbl_8026E858 + 0x10F, 0x64);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            entry = lbl_80312ACC + ((*(s8 *)((u8 *)arg0 + 0x3C)) << 7)
                + (*(s8 *)((u8 *)arg0 + 0x3D) * 0x10);
            x = *(s16 *)entry;
            y = *(s16 *)(entry + 2);
            fn_80166DD0(lbl_80330D68, entry + 4, (f32)x, (f32)(y + 0x28));
        }
    }
}

void fn_800ACCF8(void) {
    M2C_UNK fn_800ACD18();
    fn_800ACD18();
}

#pragma use_lmw_stmw on
void fn_800ACD18(void *arg0)
{
    void fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80009B8C(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    void fn_8008B464(s32, s32, s32);
    void fn_8008BBF8(s32, s32, s32, s32, s32, u8);
    void fn_8008BE84(s16, s16);
    void fn_8008BF68(s16, s16, s32);
    void fn_8008D510(void *, s32, s32, s16);
    s32 fn_80093DA8(s32);
    u8 fn_80166D8C(void *);
    extern u8 lbl_80312ACC[];
    extern u8 lbl_80330D68[];
    extern f64 lbl_80369C28;
    extern f32 lbl_80369C30;
    extern f32 lbl_80369C34;
    extern f32 lbl_80369C38;
    extern f32 lbl_80369C3C;
    extern f32 lbl_80369C40;
    extern f32 lbl_80369C44;
    extern f32 lbl_80369C48;
    extern f32 lbl_80369C4C;
    extern f32 lbl_80369C50;
    extern f32 lbl_80369C54;
    extern f32 lbl_80369C58;
    extern s32 lbl_8036C480;
    extern s32 lbl_8036C484;

    s32 pair1[2];
    s32 pair2[2];
    s32 *pp;
    f32 saved;
    f32 f31;
    s32 t;
    s32 sum;
    s32 tmp;
    s32 x;
    s32 col;
    u8 *row;
    s16 v38;
    s16 y28;
    s16 x27;
    s32 v27;
    u8 *ent;
    s32 i;
    u8 *ent4;
    u8 b0;
    u8 b1;

    t = *(s16 *)((u8 *)arg0 + 0x28) + 1;
    switch (*(u8 *)((u8 *)arg0 + 0x42)) {
    case 0:
        f31 = lbl_80369C30;
        break;
    case 1:
        f31 = lbl_80369C34 * (f32)(5 - t);
        break;
    case 2:
        f31 = lbl_80369C34 * (f32)t;
        break;
    default:
        f31 = lbl_80369C38;
        break;
    }

    fn_800067BC(5, lbl_80369C38, lbl_80369C30, f31, lbl_80369C30);
    fn_8000A258();
    fn_80009D74(lbl_80369C3C, lbl_80369C40, lbl_80369C44, lbl_80369C30);
    f31 *= lbl_80369C48;
    saved = f31;
    fn_80009B8C((s32)f31);
    fn_8000A248();

    pp = pair1;
    v27 = *(s32 *)((u8 *)arg0 + 0x34);
    pp[0] = lbl_8036C480;
    pp[1] = lbl_8036C484;
    pp[0] = *(s32 *)((u8 *)arg0 + 0x30);
    pp[1] = v27;
    fn_8008B464(v27, 0, 0);
    fn_8008BBF8(0, 0x64, 0x108, 0x110, 0, *(u8 *)((u8 *)arg0 + 0x45));
    fn_8000A258();
    fn_80009C0C(lbl_80369C4C);
    fn_8000A248();

    i = 0;
    ent = lbl_80312ACC + 0x80;
    do {
        ent4 = ent + 4;
        x = *(s32 *)(ent + 4);
        if (((u32)(-x | x) >> 31) != 0) {
            fn_8008D510(ent4, fn_80093DA8(v27), *(s16 *)ent - 0x118, *(s16 *)(ent + 2));
        }
        i += 1;
        ent += 0x10;
    } while (i < 8);

    fn_8000A258();
    fn_80009D74(lbl_80369C50, lbl_80369C40, lbl_80369C44, lbl_80369C30);
    f31 = saved;
    fn_80009B8C((s32)f31);
    fn_8000A248();

    pp = pair2;
    pp[0] = lbl_8036C480;
    pp[1] = lbl_8036C484;
    pp[0] = *(s32 *)((u8 *)arg0 + 0x30);
    pp[1] = *(s32 *)((u8 *)arg0 + 0x34);
    fn_8008B464(pair2[0], 0, 0);
    fn_8008BBF8(0, 0x64, 0x108, 0x110, 0, *(u8 *)((u8 *)arg0 + 0x45));
    fn_8000A258();
    fn_80009C0C(lbl_80369C4C);
    fn_8000A248();

    i = 0;
    ent = lbl_80312ACC;
    do {
        ent4 = ent + 4;
        x = *(s32 *)(ent + 4);
        if (((u32)(-x | x) >> 31) != 0) {
            fn_8008D510(ent4, fn_80093DA8(pair2[0]), *(s16 *)ent, *(s16 *)(ent + 2));
        }
        i += 1;
        ent += 0x10;
    } while (i < 8);

    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();

    if (*(u8 *)((u8 *)arg0 + 0x42) == 0) {
        fn_8000A258();
        fn_80009C0C(lbl_80369C4C);
        fn_8000A248();

        v38 = *(s16 *)((u8 *)arg0 + 0x38);
        if (v38 < 0) {
            b0 = *(u8 *)((u8 *)arg0 + 0x3C);
            b1 = *(u8 *)((u8 *)arg0 + 0x3D);
            row = lbl_80312ACC + ((s8)b0 << 7);
            col = (s8)b1 << 4;
            *(s16 *)((u8 *)arg0 + 0x38) = *(s16 *)(row + col);
            b0 = *(u8 *)((u8 *)arg0 + 0x3C);
            b1 = *(u8 *)((u8 *)arg0 + 0x3D);
            row = lbl_80312ACC + ((s8)b0 << 7);
            col = (s8)b1 << 4;
            *(s16 *)((u8 *)arg0 + 0x3A) = *(s16 *)(row + col + 2);
        } else {
            b0 = *(u8 *)((u8 *)arg0 + 0x3C);
            b1 = *(u8 *)((u8 *)arg0 + 0x3D);
            row = lbl_80312ACC + ((s8)b0 << 7);
            col = (s8)b1 << 4;
            sum = v38 + *(s16 *)(row + col);
            sum = ((u32)sum >> 31) + sum;
            *(s16 *)((u8 *)arg0 + 0x38) = sum >> 1;
            b0 = *(u8 *)((u8 *)arg0 + 0x3C);
            b1 = *(u8 *)((u8 *)arg0 + 0x3D);
            row = lbl_80312ACC + ((s8)b0 << 7);
            col = (s8)b1 << 4;
            sum = *(s16 *)((u8 *)arg0 + 0x3A) + *(s16 *)(row + col + 2);
            sum = ((u32)sum >> 31) + sum;
            *(s16 *)((u8 *)arg0 + 0x3A) = sum >> 1;
        }

        b0 = *(u8 *)((u8 *)arg0 + 0x3E);
        b1 = *(u8 *)((u8 *)arg0 + 0x3F);
        row = lbl_80312ACC + ((s8)b0 << 7);
        col = (s8)b1 << 4;
        tmp = (s32)(row + col);
        x27 = *(s16 *)(row + col);
        y28 = *(s16 *)(tmp + 2);

        fn_8000A258();
        fn_80009C0C(lbl_80369C54);
        fn_8000A248();
        fn_8008BF68(*(s16 *)((u8 *)arg0 + 0x38), *(s16 *)((u8 *)arg0 + 0x3A), fn_80166D8C(lbl_80330D68) == 0);
        fn_8000A258();
        fn_80009C0C(lbl_80369C58);
        fn_8000A248();

        if (*(u8 *)((u8 *)arg0 + 0x41) == 1) {
            fn_8008BE84(x27, y28);
            fn_8000A258();
            fn_80009C0C(lbl_80369C30);
            fn_8000A248();
            fn_8008AB7C(x27 + 0x74, y28 + 0xD, 0xED, 0x18, 0x19, 0x4B, 0);
            fn_8000A258();
            fn_80009C0C(lbl_80369C4C);
            fn_8000A248();
        }

        fn_8000A258();
        fn_80009C0C(lbl_80369C30);
        fn_8000A248();
        b0 = *(u8 *)((u8 *)arg0 + 0x3C);
        b1 = *(u8 *)((u8 *)arg0 + 0x3D);
        row = lbl_80312ACC + ((s8)b0 << 7);
        col = (s8)b1 << 4;
        fn_8008AB7C(*(s16 *)(row + col) + 0x74, *(s16 *)((u8 *)arg0 + 0x3A) + 0xD, 0xED, 0x18, 0x19, 0x4B, 1);
        fn_8000A258();
        fn_80009C0C(lbl_80369C4C);
        fn_8000A248();
    }
}
#include "common.h"

#pragma use_lmw_stmw on

extern u8 lbl_80312ACC[];
