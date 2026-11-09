/* Functions from 0x800A9488 to 0x800AD1F4, found by decomp-toolkit. */
#include "common.h"

#pragma use_lmw_stmw on

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
    extern M2C_UNK lbl_80330708;
    u32 temp_r0_2;
    u32 temp_r4;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(&lbl_80330708, u8 *, 0xA6) + 1;
    M2C_FIELD(&lbl_80330708, u8 *, 0xA6) = temp_r0;
    temp_r4 = temp_r0 >> 0x1FU;
    temp_r0_2 = (temp_r0 << 0x1E) - temp_r4;
    M2C_FIELD(&lbl_80330708, u8 *, 0xA6) = (u8) (((temp_r0_2 << 2) | (temp_r0_2 >> 0x1EU)) + temp_r4);
    return 0;
}

void fn_800A9710(void) {
    extern u16 lbl_80331FB8[];
    u16* ptr = &lbl_80331FB8[0x44 / 2];
    *ptr = 0x2;
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

void *fn_800A9C5C(void) {
    extern u16 lbl_8026E470[];
    return &lbl_8026E470[0x0D88];
}

s32 fn_800A9C6C(void *arg1) {
    s32 arg1_val = *(s32*)((char*)arg1 + 0x18);
    fn_801FFD7C(arg1_val);
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

s32 fn_800AA078(void *arg0) {
    struct unk3C_s {
        u8 pad[0x3C];
        u8 unk3C;
    };
    s32 fn_8000CEE4(M2C_UNK);
    void fn_80016DE0(void);
    struct unk3C_s *fn_80019ED0(s32);
    void fn_8014D2B0(void *, u8);
    void fn_8014D698(void *, u8, M2C_UNK, M2C_UNK, M2C_UNK);
    extern struct {
        u8 pad[0xA6];
        u8 unkA6;
    } lbl_80330708;
    extern u64 lbl_80331FB8[];
    u8 saved;

    saved = lbl_80330708.unkA6;
    fn_80016DE0();
    fn_8014D698(&lbl_80330708, (u8)(fn_8000CEE4(0x1E) + 1), 0, 0, 1);
    lbl_80330708.unkA6 = saved;
    fn_8014D2B0(&lbl_80330708, fn_80019ED0(((s8 *)arg0)[4])->unk3C);
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
    extern s32 lbl_8028CDF0;
    void *fn_8000CAF0(void *, s32);
    void *arg = &lbl_8028CDF0;
    fn_8000CAF0(arg, 4);
}

s32 fn_800AA188(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern M2C_UNK lbl_8028CDF0;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_8028CDF0);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x60) == 0;
    }
    return 0;
}

void fn_800AA1CC(void) {
    void *fn_8000C0C0(void *);
    extern s32 lbl_8028CDF0;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_8028CDF0);
    if (temp_r3 != NULL) {
        *(s32 *)((char *)temp_r3 + 0x60) += 1;
    }
}

void fn_800AA208(void) {
    void *fn_8000C0C0(void *);
    extern s32 lbl_8028CDF0;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_8028CDF0);
    if (temp_r3 != NULL) {
        *(s32 *)((char *)temp_r3 + 0x60) -= 1;
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
    extern M2C_UNK lbl_802B14E4;
    extern M2C_UNK lbl_802CA518;
    extern M2C_UNK lbl_80330708;
    u8 temp_r3;

    temp_r3 = M2C_FIELD((&lbl_802CA518 + (s8) M2C_FIELD(&lbl_80330708, f32 *, 0x524) + ((s8) M2C_FIELD(&lbl_80330708, f32 *, 0x528) << 6)), u8 *, 0xD);
    if (temp_r3 != 0) {
        return &lbl_802B14E4 + ((temp_r3 - 1) * 0x280);
    }
    return NULL;
}

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

void fn_800AB73C(void) {
    M2C_UNK fn_800AB75C();
    fn_800AB75C();
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
    void *var_r30 = arg0;
    s32 var_r29;
    u8 *entry;
    s32 str;

    fn_800AC0C0();
    var_r31 = ((u32 *)lbl_80367240)[1] & (((u32 *)lbl_80367240)[2] ^ ((u32 *)lbl_80367240)[1]);
    if (fn_80166D8C(lbl_80330D68) != 0) {
        if (var_r31 & 0xA00) {
            fn_801673D0(lbl_80330D68);
        }
    } else if (var_r31 & 0x100) {
        var_r31 = 0;
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
            fn_80166AE8(*(s16 *)(entry + var_r31),
                        *(s16 *)(entry + var_r31 + 2) + 0x28,
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

void fn_800ACCF8(void) {
    M2C_UNK fn_800ACD18();
    fn_800ACD18();
}
#include "common.h"

#pragma use_lmw_stmw on

extern u8 lbl_80312ACC[];
