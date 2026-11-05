/* Functions from 0x800A9488 to 0x800AD1F4, found by decomp-toolkit. */
#include "common.h"

#pragma use_lmw_stmw on

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

s32 fn_800A9CAC(void) {
    M2C_UNK fn_800EBACC(M2C_UNK, M2C_UNK);
    fn_800EBACC(0, 0);
    fn_80006220(3);
    return 5;
}

s32 fn_800A9CF0(void) {
    M2C_UNK fn_800EBD78(M2C_UNK, M2C_UNK);
    fn_800EBD78(0, 0);
    fn_80006220(3);
    return 5;
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

s32 fn_800A9DA0(void) {
    fn_80006220(2);
    return 5;
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

void fn_800AB73C(void) {
    M2C_UNK fn_800AB75C();
    fn_800AB75C();
}

void fn_800ACCF8(void) {
    M2C_UNK fn_800ACD18();
    fn_800ACD18();
}

