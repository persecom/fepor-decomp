/* Functions from 0x8010554C to 0x80110128, found by decomp-toolkit. */
#include "common.h"

extern double lbl_8036A128;
extern double lbl_8036A120;
extern f32 lbl_8036A134;
extern f32 lbl_8036A130;

#pragma cplusplus on
struct UnkObject {
    u8 pad[4];
    virtual void v0();
    virtual void v1(s32);
};
#pragma cplusplus off

struct UnkCycler {
    s32 unk0;
    s32 unk4;
    u8 unk5;
    u16 unk6;
    u8 pad8[0x14 - 8];
    struct UnkObject *unk14[];
};

struct Arg0 {
    u8 pad0[0x30];
    struct UnkCycler *unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
    f32 unk54;
    f32 unk58;
    f32 unk5C;
    u8 unk60;
    u8 unk61;
};

extern u16 lbl_802737A0[];

static inline void *GetUnitIfBitSet(u32 *bits, u8 id) {
    void *fn_80019DF0(u8);
    s32 n = id;

    if (n < 0) {
        return NULL;
    } else {
        u32 *p = bits;

        while (n >= 32) {
            p++;
            n -= 32;
        }
        if (!(*p & (1 << n))) {
            return NULL;
        }
        return fn_80019DF0(id);
    }
}

void fn_8010554C(void) {
    extern u16 lbl_802737A0[];
    extern u16 lbl_8028F2D0[];
    
    fn_8000D3EC(&lbl_802737A0[0xCE/2], &lbl_8028F2D0[0], &lbl_802737A0[0]);
    fn_8000D3EC(&lbl_802737A0[0xE2/2], &lbl_8028F2D0[0], &lbl_802737A0[0]);
    fn_8000D3EC(&lbl_802737A0[0xF2/2], &lbl_8028F2D0[0], &lbl_802737A0[0]);
}

s32 fn_801055B0(s32 arg0) {
    void fn_800BEAC0(s32, s32, s32, s32);
    void fn_80094A08(s32, s32);
    extern struct {
        s32 unk0;
        s32 unk4;
        u8 unk8;
        u8 unk9;
        s8 unkA;
        u8 padB[4];
        u8 unkF;
        u8 unk10;
    } lbl_802EF4C8;
    extern u8 lbl_80330EAC[];
    s8 temp;

    fn_800BEAC0(arg0, lbl_802EF4C8.unk8, lbl_802EF4C8.unkF, lbl_802EF4C8.unk10);

    temp = lbl_802EF4C8.unkA;
    if (temp < 0) {
        return 1;
    }

    fn_80094A08(lbl_802EF4C8.unk0, temp);
    *(u32 *)(lbl_80330EAC + 0xCAC) |= 0x2000;
    return 1;
}

void fn_80105624(s32 arg0) {
    void *fn_800285C0(void *);
    void fn_8001EDB8(void *, s32);
    void fn_80026770(void *, void *);
    void fn_800319E8(s32);
    extern struct {
        s32 unk0;
        s32 unk4;
        u8 unk8;
        u8 unk9;
        s8 unkA;
        u8 padB[4];
        u8 unkF;
        u8 unk10;
    } lbl_802EF4C8;
    u8 sp8;
    void *temp;

    lbl_802EF4C8.unk8 = 0xA;
    temp = fn_800285C0(&lbl_802EF4C8);
    fn_8001EDB8(&sp8, *(s32 *)temp);
    fn_80026770(&lbl_802EF4C8, &sp8);
    fn_800319E8(arg0);
}

s32 fn_8010568C(s32 arg0) {
    void fn_8001EDA0(u8 *);
    void fn_8001EDB8(u8 *);
    void fn_8002A784(s32, u8 *);
    u8 fn_80105BC0(s32, s32);
    extern s32 lbl_802EF4E0[];
    u32 sp10;
    u32 spC;
    u32 sp8;

    fn_8001EDB8((u8 *)&spC);
    *(u8 *)&sp10 = *(u8 *)&spC;
    if (fn_80105BC0(arg0 + 0x1BC, 0x3C) != 0) {
        fn_8001EDA0((u8 *)&sp10);
    }
    *(u8 *)&sp8 = *(u8 *)&sp10;
    fn_8002A784(arg0, (u8 *)&sp8);
    if (lbl_802EF4E0[0] != 0) {
        return 1;
    }
    return 0;
}

void *fn_801057BC(void *arg0) {
    extern u8 lbl_802738A8[];
    void *fn_8000E0E4(u32);
    u8 *base;
    void *result;
    u32 value;

    base = lbl_802738A8 + 8;
    value = M2C_FIELD(arg0, u32 *, 0x10);
    if (value == 0) {
        return base;
    }
    result = fn_8000E0E4(value);
    if (result != NULL) {
        return result;
    }
    return base;
}

void *fn_80105814(void *arg0) {
    extern u8 lbl_802738A8[];
    void *fn_8000E0E4(u32);
    u8 *base;
    void *result;
    u32 value;

    base = lbl_802738A8 + 8;
    value = M2C_FIELD(arg0, u32 *, 0xC);
    if (value == 0) {
        return base;
    }
    result = fn_8000E0E4(value);
    if (result != NULL) {
        return result;
    }
    return base;
}

void *fn_8010586C(void *arg0) {
    extern u8 lbl_802738A8[];
    void *fn_8000E0E4(u32);
    u8 *base;
    void *result;
    u32 value;

    base = lbl_802738A8 + 0x2D;
    value = M2C_FIELD(arg0, u32 *, 8);
    if (value == 0) {
        return base;
    }
    result = fn_8000E0E4(value);
    if (result != NULL) {
        return result;
    }
    return base;
}

void fn_80105A04(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, M2C_UNK, s32);
    fn_8017A810(arg1, 0x10, arg0);
}

void fn_80105A30(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, s32);
    fn_8017A430(arg1, 0x10, arg0);
}

s32 fn_80105A5C(s32 *arg0) {
    s32 total = 0;
    u8 i;

    for (i = 0; i < 0x62; i++) {
        if (GetUnitIfBitSet((u32 *)arg0, i) != NULL) {
            total += M2C_FIELD(GetUnitIfBitSet((u32 *)arg0, i), u8 *, 0x1A);
        }
    }
    return total;
}

s32 fn_80105BC0(void *arg0, u8 arg1) {
    s32 fn_80019DF0(u8);
    u32 *p = arg0;
    s32 n = arg1;
    s32 r;

    if (n < 0) {
        r = 0;
    } else {
        while (n >= 32) {
            p++;
            n -= 32;
        }
        if (!(*p & (1 << n))) {
            r = 0;
        } else {
            r = fn_80019DF0(arg1);
        }
    }
    return r != 0;
}

s32 fn_80105C5C(s32 *arg0, u8 arg1) {
    s32 fn_80019DF0(u8);
    u32 *p = (u32 *)arg0;
    s32 n = arg1;

    if (n < 0) {
        return 0;
    }
    while (n >= 32) {
        p++;
        n -= 32;
    }
    if (*p & (1 << n)) {
        return fn_80019DF0(arg1);
    }
    return 0;
}

void fn_80105CEC(s32 *arg0, u8 arg1) {
    u32 *p = (u32 *)arg0;
    s32 n = arg1;

    if (n < 0) {
        return;
    }
    while (n >= 32) {
        p++;
        n -= 32;
    }
    *p &= ~(1 << n);
}

void fn_80105D4C(s32 *arg0, u8 arg1) {
    u32 *p = (u32 *)arg0;
    s32 n = arg1;

    if (n < 0) {
        return;
    }
    while (n >= 32) {
        p++;
        n -= 32;
    }
    *p |= 1 << n;
}

void fn_80105DAC(s32 *arg0, s32 arg1) {
    s32 *fn_80019DF0(u8);
    s32 fn_802342B8(s32, s32);
    u8 i;
    u32 *p;
    s32 n;

    if (arg1 != 0) {
        for (i = 0; i < 0x62; i++) {
            if (fn_802342B8(arg1, *fn_80019DF0(i)) == 0) {
                n = i;
                if (n >= 0) {
                    p = (u32 *)arg0;
                    while (n >= 32) {
                        p++;
                        n -= 32;
                    }
                    *p |= 1 << n;
                }
                break;
            }
        }
    }
}

u8 fn_80105E88(s32 arg0, s32 arg1) {
    s32 fn_8000D354(s32);
    void *fn_80234198(void *, u8 *);
    extern u8 lbl_802738F8[];
    void *temp_r3;
    if (fn_8000D354(arg0) == 0U) {
        return 0U;
    }
    temp_r3 = fn_80234198((void *)arg0, lbl_802738F8 + 0x26);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return (u8)((s8) * (u8 *)((u8 *)temp_r3 + 5) == (arg1 + 0x30));
}

extern void fn_8002297C(void* arg0);
extern s32 fn_80183AB4(s32 arg0, s8 arg1, s8 arg2, void* arg3);
extern s32 fn_80184264(void* arg0, u16 arg1, void* arg2);
void fn_801065A8(void* arg0)
{
    u8 r0;
    u16 r3;
    u32 r28;
    s32 r29;
    void* r30;

    r28 = (u32)arg0;
    r0 = *(u8*)(r28 + 0x60);
    r3 = *(u8*)(r28 + 0x64);
    r30 = *(void**)(r28 + 0x68);
    
    r3 |= 0x80;
    
    if (r0 < 2)
    {
        if (r0 != 0)
        {
            r3 |= 0x10;
        }
    }

    r29 = 0;
    
loop_10:
    if (r29 < *(u8*)(r28 + 0x63))
    {
        if (*(u32*)((uintptr_t)r30 + 4) != 0)
        {
            if (r0 == 3)
            {
                fn_80183AB4(1, *(s8*)((uintptr_t)r30 + 0xA), *(s8*)((uintptr_t)r30 + 0xB), arg0);
            }
            else
            {
                fn_80184264((void*)((uintptr_t)r30 + 0xC), r3, arg0);
            }
        }
        r29 += 1;
        r30 = (void*)((uintptr_t)r30 + 0x110);
        goto loop_10;
    }
    
    fn_8002297C((void*)0x802CA518);
    *(u8*)(r28 + 0x61) = 1;
}

void fn_8010671C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
}

#pragma use_lmw_stmw on
void fn_801069A0(u8 *arg0) {
    void *fn_800C45B8(s32, void *, s32);
    u8 fn_80107874(void *, void *);
    void fn_8000C070(void *, s32);
    u8 fn_801A2300(void);
    u32 fn_8000D2BC(void *);
    u8 fn_8001B940(u32 *);
    u32 fn_8001B894(u32 *);
    void fn_80107B54(u32 *, void *, s32);
    void fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_802738F8[];
    extern u8 lbl_80330708[];
    u32 sp8;
    u32 spC;
    u8 sp10[0x68];
    s32 var_r30;
    s32 var_r31;
    s32 var_r26;
    s32 var_r27;
    s32 var_r28;
    s32 var_r29;
    u32 var_r0;
    s32 temp;

    *(void **)(arg0 + 0x68) = fn_800C45B8(-0x6A40, lbl_802738F8 + 0x46, 0);
    arg0[0x63] = fn_80107874(arg0 + 0x30, *(void **)(arg0 + 0x68));
    arg0[0x62] = 0;
    arg0[0x61] = 0;
    if (arg0[0x63] == 0) {
        fn_8000C070(arg0, 0x63);
        return;
    }
    if (fn_801A2300() == 0) {
        return;
    }
    var_r30 = 0;
    temp = (s32)(arg0 + 0x30);
    var_r31 = var_r30;
    sp8 = fn_8000D2BC((void *)temp);
    if (sp8 == 0) {
        var_r0 = 0;
        goto after_parse;
    }
    var_r29 = fn_8001B940(&sp8);
    var_r0 = fn_8001B940(&sp8);
    if ((s32)var_r0 == 3) {
        goto case3;
    } else if ((s32)var_r0 >= 3) {
        goto check5;
    }
    if ((s32)var_r0 >= 2) {
        goto case2;
    }
    goto sw_end;
case2:
    var_r28 = 0;
    goto sw_end;
check5:
    if ((s32)var_r0 >= 5) {
        goto sw_end;
    }
    goto case4;
case3:
    fn_8001B940(&sp8);
    var_r28 = fn_8001B940(&sp8);
    fn_8001B894(&sp8);
    goto sw_end;
case4:
    fn_8001B940(&sp8);
    var_r28 = fn_8001B940(&sp8);
sw_end:
    var_r0 = (sp8 + 3) & ~3;
    sp8 = var_r0;
after_parse:
    spC = var_r0;
    if (var_r0 != 0) {
        var_r26 = 0;
        var_r27 = (u8)var_r29;
        *(s32 *)(sp10 + 0x10) = var_r26;
        sp10[0x30] = var_r26;
        *(s32 *)(sp10 + 0x48) = var_r26;
        *(s32 *)(sp10 + 0x14) = var_r26;
        sp10[0x31] = var_r26;
        *(s32 *)(sp10 + 0x4C) = var_r26;
        *(s32 *)(sp10 + 0x18) = var_r26;
        sp10[0x32] = var_r26;
        *(s32 *)(sp10 + 0x50) = var_r26;
        *(s32 *)(sp10 + 0x1C) = var_r26;
        sp10[0x33] = var_r26;
        *(s32 *)(sp10 + 0x54) = var_r26;
        *(s32 *)(sp10 + 0x20) = var_r26;
        sp10[0x34] = var_r26;
        *(s32 *)(sp10 + 0x58) = var_r26;
        *(s32 *)(sp10 + 0x24) = var_r26;
        sp10[0x35] = var_r26;
        *(s32 *)(sp10 + 0x5C) = var_r26;
        *(s32 *)(sp10 + 0x28) = var_r26;
        sp10[0x36] = var_r26;
        *(s32 *)(sp10 + 0x60) = var_r26;
        *(s32 *)(sp10 + 0x2C) = var_r26;
        sp10[0x37] = var_r26;
        *(s32 *)(sp10 + 0x64) = var_r26;
        goto loop_cmp;
    loop_body:
        fn_80107B54(&spC, sp10, var_r28);
        var_r26 += 1;
        var_r30 += (s8)sp10[0xD];
        var_r31 += (s8)sp10[0xE];
    loop_cmp:
        if (var_r26 < var_r27) {
            goto loop_body;
        }
        var_r27 = (s8)(var_r30 / var_r27);
        var_r26 = (s8)(var_r31 / (s32)(u8)var_r29);
    }
    fn_8014CBD8(lbl_80330708, (f32)(s8)var_r27, (f32)(s8)var_r26);
}
#pragma use_lmw_stmw reset

u32 fn_8000D2BC();                                  /* extern */
u8 fn_8001B940(u32 *);                              /* extern */
u8 fn_8001B894(u32 *);                              /* extern */
void fn_80107B54(u32 *, u32 *, u8);                 /* extern */
void fn_80106F68(s8 *arg1, s8 *arg2) {
    u32 temp_r3;
    u8 temp_r3_2;
    u32 var_r0;
    u32 sp8;
    u32 spC;
    u32 *sp10;
    s32 var_r25;
    s32 var_r30;
    s32 var_r31;
    u8 var_r26;
    u8 var_r27;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp41;
    s32 sp42;
    s32 sp43;
    s32 sp44;
    s32 sp45;
    s32 sp46;
    s32 sp47;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;

    var_r26 = 0;
    var_r27 = 0;
    var_r31 = 0;
    var_r30 = 0;
    temp_r3 = fn_8000D2BC();
    sp8 = temp_r3;
    if (temp_r3 == 0) {
        var_r0 = 0;
    } else {
        var_r27 = fn_8001B940(&sp8);
        temp_r3_2 = fn_8001B940(&sp8);
        switch ((s32) temp_r3_2) {                  /* irregular */
        case 2:
            var_r26 = 0;
            break;
        case 3:
            fn_8001B940(&sp8);
            var_r26 = fn_8001B940(&sp8);
            fn_8001B894(&sp8);
            break;
        case 4:
            fn_8001B940(&sp8);
            var_r26 = fn_8001B940(&sp8);
            break;
        }
        var_r0 = (sp8 + 3) & 0xFFFFFFFC;
        sp8 = var_r0;
    }
    spC = var_r0;
    if (var_r0 != 0) {
        sp20 = 0;
        var_r25 = 0;
        sp40 = 0;
        sp58 = 0;
        sp24 = 0;
        sp41 = 0;
        sp5C = 0;
        sp28 = 0;
        sp42 = 0;
        sp60 = 0;
        sp2C = 0;
        sp43 = 0;
        sp64 = 0;
        sp30 = 0;
        sp44 = 0;
        sp68 = 0;
        sp34 = 0;
        sp45 = 0;
        sp6C = 0;
        sp38 = 0;
        sp46 = 0;
        sp70 = 0;
        sp3C = 0;
        sp47 = 0;
        sp74 = 0;
loop_15:
        if (var_r25 < (s32) var_r27) {
            fn_80107B54(&spC, sp10, var_r26);
            var_r25 += 1;
            var_r31 += (s8) *(((u8*)sp10)+0x1D);
            var_r30 += (s8) *(((u8*)sp10)+0x1E);
            goto loop_15;
        }
        *arg1 = (s8) (var_r31 / (s32) var_r27);
        *arg2 = (s8) (var_r30 / (s32) var_r27);
    }
}

extern u16 lbl_802B14E4[];
void fn_801070FC(void) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s8 sp40;
    s8 sp41;
    s8 sp42;
    s8 sp43;
    s8 sp44;
    s8 sp45;
    s8 sp46;
    s8 sp47;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    u32 *sp8;
    u32 temp_r3;
    u32 var_r28;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 var_r30;
    u8 var_r31;
    void *var_r3;

    // Setup locals
    sp20 = 0;
    sp40 = 0;
    sp58 = 0;
    sp24 = 0;
    sp41 = 0;
    sp5C = 0;
    sp28 = 0;
    sp42 = 0;
    sp60 = 0;
    sp2C = 0;
    sp43 = 0;
    sp64 = 0;
    sp30 = 0;
    sp44 = 0;
    sp68 = 0;
    sp34 = 0;
    sp45 = 0;
    sp6C = 0;
    sp38 = 0;
    sp46 = 0;
    sp70 = 0;
    sp3C = 0;
    sp47 = 0;
    sp74 = 0;
    
    temp_r3 = fn_8000D2BC();
    sp8 = &temp_r3;
    if (temp_r3 == 0) {
        return;
    }
    
    var_r31 = fn_8001B940(sp8);
    temp_r3_2 = fn_8001B940(sp8);
    
    switch ((s32) temp_r3_2) {                  /* irregular */
    case 2:
        var_r30 = 0;
        break;
    case 3:
        fn_8001B940(sp8);
        var_r30 = fn_8001B940(sp8);
        fn_8001B894(sp8);
        break;
    case 4:
        fn_8001B940(sp8);
        var_r30 = fn_8001B940(sp8);
        break;
    }
    
    temp_r3 = (*sp8 + 3) & 0xFFFFFFFC;
    *sp8 = temp_r3;
    
    return;
}

extern void *fn_80016BDC(char *);
void *fn_80107468(void *arg0) {
    void *temp_r31;
    void *temp_r29;
    
    temp_r31 = fn_80016BDC("unit");
    if (temp_r31 == NULL) {
        return NULL;
    }
    
    temp_r29 = *(void **)((char *)arg0 + 0x14);
    if (temp_r29 == NULL) {
        return NULL;
    }
    
    return *(void **)((char *)temp_r29 + 0x18);
}

s32 fn_8010764C(u8 *arg0) {
    void fn_80107B54(u32 *, u32 *, u8);
    void *fn_80016BDC(void *);
    void fn_8003816C(void *, u8, u8);
    void fn_8003D5FC(void *, u8);
    void fn_8003D60C(void *, s32);
    void fn_8003D68C(void *, s32);
    void fn_8003EAE8(void *, void *);
    void fn_80050BCC(void *, s32);
    void fn_80050C90(void *);
    extern u8 lbl_802738F8[];
    extern struct { u8 pad[0x30]; void *unk30; u8 pad34[8]; void *unk3C; } lbl_802CA264;
    u8 sp8[0x68];
    void *unit;
    void *obj;
    void *found;
    s32 kind;
    s32 i;

    for (i = 0; i < 8; i++) {
        *(s32 *)(sp8 + 0x10 + i * 4) = 0;
        sp8[0x30 + i] = 0;
        *(s32 *)(sp8 + 0x48 + i * 4) = 0;
    }
    obj = *(void **)arg0;
    fn_80107B54((u32 *)arg0, (u32 *)sp8, arg0[0x10D]);
    unit = fn_80016BDC(*(void **)sp8);
    if (unit == NULL) {
        if ((arg0[0x10C] & 2) || (sp8[8] & 8)) {
            kind = sp8[9];
            unit = lbl_802CA264.unk30;
            if (kind == 4) {
                goto after_sw;
            } else if (kind >= 4) {
                goto check6;
            }
            if (kind >= 0) {
                goto do_call;
            }
            goto after_sw;
        check6:
            if (kind >= 6) {
                goto after_sw;
            }
        do_call:
            fn_8003D60C(unit, kind);
        after_sw:
            fn_8003EAE8(unit, sp8);
            fn_8003D60C(unit, 5);
        } else {
            unit = NULL;
            goto skip_type;
        }
    }
    {
        u8 t = *(u8 *)(*(s32 *)((u8 *)unit + 0x190) + 8);
        if (t == 6) {
            unit = NULL;
        } else if (t == 7) {
            fn_8003D60C(unit, 5);
            fn_8003D5FC(unit, sp8[0x67]);
        }
    }
skip_type:
    found = fn_80016BDC(lbl_802738F8 + 0x50);
    if (found != NULL && unit == found) {
        fn_8003D68C(unit, 0);
        goto ok;
    }
    {
        void *var_r4;
        void *var_r5;

        var_r4 = &lbl_802CA264;
        var_r5 = *(void **)((u8 *)var_r4 + 0x3C);
        goto loop_cmp;
    loop_body:
        var_r4 = *(void **)((u8 *)var_r5 + 0x184);
        if ((found != var_r5) && !(*(s32 *)((u8 *)var_r5 + 0x1A0) & 0x200000)) {
            unit = var_r5;
            fn_8003D60C(var_r5, 0);
            goto ok;
        }
        var_r5 = var_r4;
    loop_cmp:
        if (var_r5 != NULL) {
            goto loop_body;
        }
    }
    *(void **)(arg0 + 4) = NULL;
    *((u8 *)obj + 0x3C) = 0;
    return 0;
ok:
    fn_8003816C(unit, sp8[0xB], sp8[0xC]);
    fn_80050C90(unit);
    fn_80050BCC(unit, 0);
    *(void **)(arg0 + 4) = unit;
    *((u8 *)obj + 0x3C) = *((u8 *)unit + 0x198);
    return 1;
}

#pragma use_lmw_stmw on
void fn_80107B54(u32 *arg0, u32 *arg1, u8 arg2) {
    s32 fn_8001B894(u32 *);
    u8 fn_8001B940(u32 *);
    void fn_800056CC(const char *, ...);
    extern u8 lbl_802738F8[];
    s32 i;
    u32 *p;
    s32 temp;
    s32 off;
    s8 t6;
    s8 t7;

    arg1[0] = fn_8001B894(arg0);
    arg1[1] = fn_8001B894(arg0);
    fn_8001B894(arg0);
    i = 0;
    p = arg1;
    do {
        temp = fn_8001B894(arg0);
        i += 1;
        *(u32 *)((u8 *)p + 0x10) = temp;
        p += 1;
    } while (i < 8);
    i = 0;
    p = arg1;
    do {
        temp = fn_8001B894(arg0);
        i += 1;
        *(u32 *)((u8 *)p + 0x48) = temp;
        p += 1;
    } while (i < 5);
    fn_8001B940(arg0);
    fn_8001B940(arg0);
    fn_8001B940(arg0);
    ((u8 *)arg1)[0x5C] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x5D] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x5E] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x5F] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x60] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x61] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x62] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x63] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x64] = fn_8001B940(arg0);
    *(u32 *)((u8 *)arg1 + 0x38) = fn_8001B894(arg0);
    *(u32 *)((u8 *)arg1 + 0x3C) = fn_8001B894(arg0);
    *(u32 *)((u8 *)arg1 + 0x40) = fn_8001B894(arg0);
    *(u32 *)((u8 *)arg1 + 0x44) = fn_8001B894(arg0);
    ((u8 *)arg1)[0x65] = 0;
    ((u8 *)arg1)[0xB] = fn_8001B940(arg0);
    ((u8 *)arg1)[0xC] = fn_8001B940(arg0);
    ((u8 *)arg1)[0xD] = fn_8001B940(arg0);
    ((u8 *)arg1)[0xE] = fn_8001B940(arg0);
    ((u8 *)arg1)[0xA] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x9] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x8] = fn_8001B940(arg0);
    ((u8 *)arg1)[0x66] = fn_8001B940(arg0);
    i = 0;
    do {
        temp = fn_8001B940(arg0);
        off = i + 0x30;
        i += 1;
        ((u8 *)arg1)[off] = temp;
    } while (i < 8);
    *arg0 = (*arg0 + 3) & ~3;
    ((u8 *)arg1)[0x67] = arg2;
    t6 = ((u8 *)arg1)[0xD];
    t7 = ((u8 *)arg1)[0xE];
    fn_800056CC((const char *)(lbl_802738F8 + 0x9A),
                arg1[0],
                arg1[1],
                t6,
                t7);
}
#pragma use_lmw_stmw reset

s32 fn_8010866C(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_803679C8;
    fn_800D758C(lbl_803679C8);
    return 0;
}

s32 fn_80108694(void) {
    M2C_UNK **fn_800D758C(s32);
    extern s32 lbl_803679C8;
    M2C_UNK fn_800DC3B0(s32);
    M2C_UNK fn_800DAA38(void);
    s32 *global;
    s32 *object;

    global = &lbl_803679C8;
    fn_800D758C(*global);

    object = (s32 *)*global;
    fn_800DC3B0(*(s32 *)((u8 *)object + 0x424));

    fn_800DAA38();
    return 0;
}

void fn_801086CC(void *arg0) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800C9B6C(M2C_UNK *);
    M2C_UNK fn_800DC518(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK sp8;

    fn_800C9B6C(&sp8);
    fn_800DC518(M2C_FIELD(arg0, s32 *, 0x424), &sp8, 0);
    fn_800C9A60(&sp8, -1);
}

void fn_80108718(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_800D7254();
    void *temp_r3;
    void **vt;

    fn_800D7254();
    temp_r3 = M2C_FIELD(arg0, void **, 0x424);
    vt = M2C_FIELD(temp_r3, void **, 0x40);
    ((M2C_UNK (*)(void *, s32, s32, s32)) vt[22])(temp_r3, arg1, arg2, arg3);
}

s32 fn_80108948(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_803679D0;
    fn_800D758C(lbl_803679D0);
    return 0;
}

s32 fn_80108970(void) {
    M2C_UNK **fn_800D758C(s32);
    extern s32 lbl_803679D0;
    M2C_UNK fn_800DC3B0(s32);
    M2C_UNK fn_800DA748(void);
    s32 *global;
    s32 *object;

    global = &lbl_803679D0;
    fn_800D758C(*global);

    object = (s32 *)*global;
    fn_800DC3B0(*(s32 *)((u8 *)object + 0x424));

    fn_800DA748();
    return 0;
}

#pragma cplusplus on
extern "C" void fn_801089A8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_800D7254(void);
    struct Obj {
        u8 pad[0x40];
        virtual void v0(s32, s32, s32) = 0;
        virtual void v1(s32, s32, s32) = 0;
        virtual void v2(s32, s32, s32) = 0;
        virtual void v3(s32, s32, s32) = 0;
        virtual void v4(s32, s32, s32) = 0;
        virtual void v5(s32, s32, s32) = 0;
        virtual void v6(s32, s32, s32) = 0;
        virtual void v7(s32, s32, s32) = 0;
        virtual void v8(s32, s32, s32) = 0;
        virtual void v9(s32, s32, s32) = 0;
        virtual void v10(s32, s32, s32) = 0;
        virtual void v11(s32, s32, s32) = 0;
        virtual void v12(s32, s32, s32) = 0;
        virtual void v13(s32, s32, s32) = 0;
        virtual void v14(s32, s32, s32) = 0;
        virtual void v15(s32, s32, s32) = 0;
        virtual void v16(s32, s32, s32) = 0;
        virtual void v17(s32, s32, s32) = 0;
        virtual void v18(s32, s32, s32) = 0;
        virtual void v19(s32, s32, s32) = 0;
        virtual void v20(s32, s32, s32) = 0;
    };
    fn_800D7254();
    (*(Obj **)((u8 *)arg0 + 0x424))->v20(arg1, arg2, arg3);
}
#pragma cplusplus reset

void fn_80108BD0(s16 arg1, s16 arg2, s32 arg3) {
    extern void *fn_8000D2BC(void);
    
    void *temp_r7;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r3_2;
    
    temp_r7 = fn_8000D2BC();
    
    *(u16*)((char*)temp_r7 + 0x8) = (u16)(arg1 + 2);
    *(u16*)((char*)temp_r7 + 0xA) = (u16)(arg2 + 2);
    *(u16*)((char*)temp_r7 + 0xC) = (u16)(arg1 + arg3 - 4);
    *(u16*)((char*)temp_r7 + 0xE) = (u16)(arg2 + 0x72);
    
    temp_r4 = *(void**)((char*)temp_r7 + 0x18);
    *(u16*)((char*)temp_r4 + 0x18) = arg1;
    *(u16*)((char*)temp_r4 + 0x14) = arg1;
    *(u16*)((char*)temp_r4 + 0x1A) = arg2;
    *(u16*)((char*)temp_r4 + 0x16) = arg2;
    
    temp_r4_2 = *(void**)((char*)temp_r7 + 0x1C);
    *(u16*)((char*)temp_r4_2 + 0x18) = (u16)(arg1 + arg3 - 0x32);
    *(u16*)((char*)temp_r4_2 + 0x14) = (u16)(arg1 + arg3 - 0x32);
    *(u16*)((char*)temp_r4_2 + 0x1A) = arg2;
    *(u16*)((char*)temp_r4_2 + 0x16) = arg2;
    
    temp_r3_2 = *(void**)((char*)temp_r7 + 0x20);
    *(u16*)((char*)temp_r3_2 + 0x14) = (u16)(arg1 + 0x32);
    *(u16*)((char*)temp_r3_2 + 0x18) = (u16)(arg1 + arg3 - 0x32);
    *(u16*)((char*)temp_r3_2 + 0x1A) = arg2;
    *(u16*)((char*)temp_r3_2 + 0x16) = arg2;
}

void fn_80108C80(s32 arg0, s32 arg1) {
    extern u8 lbl_8028F3AC[];
    void *fn_8000CAA0(u8 *, s32);
    s32 *obj;
    obj = (s32 *)fn_8000CAA0(lbl_8028F3AC, arg1);
    obj[0x30 / 4] = arg0;
}

void fn_80108CB8(void *arg0) {
    void fn_8000C188(void *);
    extern void *lbl_80367240;
    extern f32 lbl_8036A110;
    extern f32 lbl_8036A114;
    extern f32 lbl_8036A118;
    extern f32 lbl_8036A11C;
    s32 temp_r5;
    s32 temp_r4_3;
    f32 scale;
    f32 divisor;
    f32 one;
    f32 v64;
    f32 v1b;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x200) {
        fn_8000C188(arg0);
    }
    scale = lbl_8036A110;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x40) = -(((f32)(s8)M2C_FIELD(M2C_FIELD(lbl_80367240, void **, 0), u8 *, 2) * scale) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x40));
    divisor = lbl_8036A114;
    one = lbl_8036A118;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x44) = ((f32)(s8)M2C_FIELD(M2C_FIELD(lbl_80367240, void **, 0), u8 *, 3) * scale) + M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x44);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x54) = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x54) - ((f32)M2C_FIELD(M2C_FIELD(lbl_80367240, void **, 0), u8 *, 6) / divisor);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x54) = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x54) + ((f32)M2C_FIELD(M2C_FIELD(lbl_80367240, void **, 0), u8 *, 7) / divisor);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x54) < one) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x54) = one;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x58) = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x54);
    temp_r4_3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r4_3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4_3) & 0x1000) {
        v64 = lbl_8036A11C;
        v1b = lbl_8036A118;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x40) = v64;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x44) = v64;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x54) = v1b;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x58) = v1b;
    }
    if (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 1) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x3C) = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x3C) + (f32)(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x30), u8 *, 4) - 1);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x3C) = (s32)M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x3C) % M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x30), u8 *, 4);
    }
    if (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 2) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x3C) = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x3C) + one;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x3C) = (s32)M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x3C) % M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x30), u8 *, 4);
    }
}

void fn_80108F38(void) {
    M2C_UNK fn_800AA208();
    fn_800AA208();
}

void fn_80108F58(void *arg0) {
    M2C_UNK fn_800AA1CC(void *);
    void *fn_80109180(s32, void *);
    extern f32 lbl_8036A130;
    void *temp_r3;

    M2C_FIELD(arg0, void **, 0x34) = fn_80109180(M2C_FIELD(arg0, s32 *, 0x30), arg0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x38) = (f32) lbl_8036A130;
    temp_r3 = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(temp_r3, f32 *, 0x3C) = (f32) lbl_8036A130;
    fn_800AA1CC(temp_r3);
}

void fn_80108FA8(void) {
    void **r29;
    s32 r31;
    
    r29 = (void**)fn_8000D2BC();
    r31 = 0;
    
loop_1:
    if (r31 < *(u8*)((u8*)r29 + 0x4)) {
        u32 *temp_r3_2 = *(u32**)((u8*)r29 + 0x14);
        if ((s32)*((u8**)temp_r3_2)[0] != 1) {
            // do nothing
        } else {
            fn_8005C8B4(*((s32*)((u8**)temp_r3_2)[0] + 2));
        }
        r29 += 1;
        r31 += 1;
        goto loop_1;
    }
}

void fn_8010913C(void *arg0) {
    s32 fn_802342B8(s32, s32);
    extern s32 lbl_803679D8;
    extern void *lbl_803679DC;
    if (fn_802342B8(*M2C_FIELD(arg0, s32 **, 0x30), lbl_803679D8) == 0) {
        lbl_803679DC = arg0;
    }
}

extern u16 lbl_8028F390;
s32 fn_80109180(s32 arg0, u32 arg1) {
    s32 fn_8000CAF0(u16 *, u32);
    s32 fn_80109F88(s32);

    u32 var_r4;
    s32 temp_r31;

    if (arg1 == 0U) {
        arg1 = 3U;
    }

    temp_r31 = fn_8000CAF0(&lbl_8028F390, arg1);
    fn_80109F88(arg0);
    return temp_r31;
}

void fn_80109448(void *arg0, s32 arg1) {
    void *temp_r3;
    s32 temp_r5;

    if (arg1 != 0) {
        temp_r3 = *(void **)((char *)arg0 + 0x34);
        temp_r5 = ((s32)*(u32*)((char *)arg0 + 0x38)) >> 0x18;
        while (temp_r5 < 0x10) {
            if (*(u32 *)((char *)temp_r3 + (temp_r5 * 0x4)) != 0) {
                fn_80107B54(arg0, *(void **)((char *)temp_r3 + (temp_r5 * 0x4)), arg1);
            }
            temp_r5 += 1;
            if (temp_r5 >= 0x10) {
                break;
            }
        }
    }
}

void fn_80109890(s32 arg0, s32 arg1) {
    void *fn_800B2754(void);
    M2C_UNK fn_800336A0(M2C_UNK *, M2C_UNK *, s32);

    s32 temp_r5;
    s32 *var_r4;
    s32 var_r6;
    s32 var_r7;
    
    void* temp_r3 = fn_800B2754();
    if (arg1 < 0) {
        arg1 = -arg1;
        arg0 = -arg0;
    }
    var_r6 = arg0;
    var_r7 = arg1;
    temp_r5 = *(s32*)((uintptr_t)temp_r3 + 0x1C) >> 2;
    
    if (var_r6 >= 0) { }
    
    if (var_r7 < temp_r5) {
        if (var_r7 >= 0) {
            var_r4 = (s32*)((uintptr_t)temp_r3 + 0x48);
            if (arg0 - arg1 > 0) {
                *(var_r4) = -(*(var_r4));
                *(var_r4 + 0x14) = -(*(var_r4 + 0x14));
                *(var_r4 + 0x1C) = *var_r4;
                *(var_r4 + 0x28) = *(var_r4 + 0x14);
                *(var_r4 + 0x30) = -(*var_r4 + *(var_r4 + 0x14));
                *(var_r4 + 0x34) = *var_r4;
                *(var_r4 + 0x38) = *(var_r4 + 0x14);
            } else if (arg0 - arg1 < 0) {
                *(var_r4 + 0x1C) = *var_r4;
                *(var_r4 + 0x28) = *(var_r4 + 0x14);
                *(var_r4 + 0x30) = (*var_r4 + *(var_r4 + 0x14));
                *(var_r4 + 0x34) = *var_r4;
                *(var_r4 + 0x38) = *(var_r4 + 0x14);
            }
        }
    } else {
        var_r4 = (s32*)((uintptr_t)temp_r3 + 0x48);
        if (arg0 < 0) {
            var_r4 = (s32*)((uintptr_t)temp_r3 + 0x4C);
        }
        fn_800336A0(var_r4, var_r4 + 0xA, var_r7 - temp_r5);
    }
}

float fn_801099A0(float* arg0, s32 arg1) {
    u32 temp_r3;
    float var_f1 = 0.0f;
    
    // Extract upper 8 bits using r4 right shift of 24 (clrlwi r4, r3, 24 in target)
    temp_r3 = (u32)arg1 >> 24;
    
    // Conditional branch based on the top 8 bits value
    if (temp_r3 <= 10) {
        // Load a jump table address
        void* jumptable = (void*)0x8028F514;
        void** jumptable_ptr = (void**)jumptable;
        
        // Fetch function from jump table at index temp_r3
        void* func_addr = jumptable_ptr[temp_r3];
        
        if (func_addr != NULL) {
            // Direct call to the function in the jump table via CTR register
            float (*func)(float*, s32) = (float (*)(float*, s32))func_addr;
            var_f1 = func(arg0, arg1);
        }
    }
    
    return var_f1;
}

void fn_80109A54(f32 arg0, f32 arg1, s32 arg2, void* arg3) {
    if (arg0 == 0.0f) {
        return;
    }

    if (arg2 < 0 || arg2 > 10) {
        return;
    }

    switch (arg2) {
        case 0:
            *(f32*)((char*)arg3 + 0x40) = arg1;
            break;
        case 1:
            *(f32*)((char*)arg3 + 0x44) = arg1;
            break;
        case 2:
            *(f32*)((char*)arg3 + 0x48) = arg1;
            break;
        case 3:
            *(f32*)((char*)arg3 + 0x4C) = arg1;
            break;
        case 4:
            *(f32*)((char*)arg3 + 0x50) = arg1;
            break;
        case 5:
            *(f32*)((char*)arg3 + 0x54) = arg1;
            break;
        case 6:
            *(f32*)((char*)arg3 + 0x58) = arg1;
            break;
        case 7:
            *(f32*)((char*)arg3 + 0x5C) = arg1;
            break;
        case 8:
            *(s32*)((char*)arg3 + 0x54) = (s32)arg1;
            break;
        case 9:
            *(s32*)((char*)arg3 + 0x58) = (s32)arg1;
            break;
        case 10:
            *(s32*)((char*)arg3 + 0x5C) = (s32)arg1;
            break;
    }
}

void fn_80109B00(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0xE) = arg1;
}

u8 fn_80109B0C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0xE);
}

void fn_80109B18(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0xD) = arg1;
}

u8 fn_80109B24(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0xD);
}

void fn_80109B30(void *arg0, u8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0xC) = arg1;
    M2C_FIELD(arg0, s8 *, 0x61) = (s8) (((arg1 >> 1U) & 0x7F) + 1);
}

u8 fn_80109B48(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0xC);
}

void fn_80109B54(void *arg0, f32 farg0) {
    extern f32 lbl_8036A140;
    f32 mul;

    *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 8) = farg0;
    mul = lbl_8036A140;
    *(f32 *)((u8 *)arg0 + 0x34) = (f32)*(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 4);
    *(f32 *)((u8 *)arg0 + 0x38) =
        *(f32 *)((u8 *)arg0 + 0x34) /
        (mul * *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 8));
}

f32 fn_80109BA8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 8);
}

void fn_80109BB4(void *arg0, u8 arg1) {
    void *fn_8000CAF0(void *, void *);
    extern u8 lbl_8028F360[];
    void *temp_r3;
    s16 temp_r5;

    temp_r3 = fn_8000CAF0(lbl_8028F360, arg0);
    *(void **)((char *)temp_r3 + 0x30) = arg0;
    temp_r5 = (s16)arg1;
    *(u32 *)((char *)temp_r3 + 0x34) = 0;
    *(u32 *)((char *)temp_r3 + 0x38) = (u32)temp_r5;
    *(u32 *)((char *)temp_r3 + 0x3C) = (u32)*(u8 *)((char *)arg0 + 0x60);
    *(u32 *)((char *)temp_r3 + 0x40) = 0;
    *(s16 *)((char *)arg0 + 0x28) = temp_r5;
}

void fn_80109C1C(void *arg0, u8 arg1) {
    void *fn_8000CAF0(void *, void *);
    extern u8 lbl_8028F360[];
    void *temp_r3;

    temp_r3 = fn_8000CAF0(lbl_8028F360, arg0);
    *(void **)((char *)temp_r3 + 0x30) = arg0;
    *(u32 *)((char *)temp_r3 + 0x34) = 0;
    *(u32 *)((char *)temp_r3 + 0x38) = (u32)arg1;
    *(u32 *)((char *)temp_r3 + 0x3C) = (u32)*(u8 *)((char *)arg0 + 0x60);
    *(u32 *)((char *)temp_r3 + 0x40) = 0;
}

void fn_80109C80(void *arg0, u8 arg1) {
    void *fn_8000CAF0(void *, void *);
    extern u8 lbl_8028F360[];
    void *temp_r3;

    temp_r3 = fn_8000CAF0(lbl_8028F360, arg0);
    *(void **)((char *)temp_r3 + 0x30) = arg0;
    *(u32 *)((char *)temp_r3 + 0x34) = 0;
    *(u32 *)((char *)temp_r3 + 0x38) = (u32)arg1;
    *(u32 *)((char *)temp_r3 + 0x3C) = 0;
    *(u32 *)((char *)temp_r3 + 0x40) = 0xFF;
    *(u8 *)((char *)arg0 + 0x60) = 0;
}

void fn_80109CE8(void *arg0) {
    f32 fn_800067BC(M2C_UNK, f32, f32, f32, f32);
    M2C_UNK fn_8000C188(void *);
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    M2C_FIELD(temp_r31, s8 *, 0x60) = (s8) fn_800067BC(0, (f32) M2C_FIELD(arg0, s32 *, 0x3C), (f32) M2C_FIELD(arg0, s32 *, 0x40), (f32) M2C_FIELD(arg0, s32 *, 0x34), (f32) M2C_FIELD(arg0, s32 *, 0x38));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x34) >= (s32) M2C_FIELD(arg0, s32 *, 0x38)) {
        fn_8000C188(arg0);
    }
}

void fn_80109DC0(void) {
    u32 i;
    s32 j;

    for (i = 0; i < 0x60; i++) {
        j = i;
        if ((u32)j >= 0x20) {
            if (lbl_802737A0[i] & 0x1000) {
                if (i != 0x5F) {
                    j = i + 1;
                    lbl_802737A0[j] |= 0x2000;
                }
            }
        }
    }
}

void fn_80109EEC(void *arg0) {
    extern f32 lbl_8036A130;
    extern f32 lbl_8036A14C;
    f32 zero;
    f32 scale;
    f32 *p;
    void *temp_r4;
    u8 *temp_r6;
    s32 kind;

    zero = lbl_8036A130;
    temp_r4 = *(void **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)arg0 + 0x50) = zero;
    *(f32 *)((u8 *)arg0 + 0x4C) = zero;
    temp_r6 = *(u8 **)((u8 *)temp_r4 + 0x14);
    kind = temp_r6[0];
    switch (kind) {
    case 1:
        *(f32 *)((u8 *)arg0 + 0x4C) = (f32)(s32)(*(u16 *)(temp_r6 + 0x20) - *(u16 *)(temp_r6 + 0x1C));
        *(f32 *)((u8 *)arg0 + 0x50) = (f32)(s32)(*(u16 *)(temp_r6 + 0x22) - *(u16 *)(temp_r6 + 0x1E));
        break;
    }
    scale = lbl_8036A14C;
    p = (f32 *)((u8 *)arg0 + 0x4C);
    *p = *p * scale;
    p = (f32 *)((u8 *)arg0 + 0x50);
    *p = *p * scale;
}

extern u16 lbl_80312060[32];
void fn_8010A4D4(void *arg0) {
    void *r8;
    s32 r10;
    s32 r11;
    s32 temp_r0;
    void *temp_r9;
    s32 r0;
    
    r8 = arg0;
    r10 = 0;
    r11 = 0;
loop_5:
    r0 = *(s16*)((char*)arg0 + 0x8);
    if (r11 < r0) {
        if (*(u8*)((char*)r8 + 0xE) != 0) {

        } else {
            temp_r0 = r10 * 6;
            r10 += 1;
            temp_r9 = (void*)((char*)lbl_80312060 + temp_r0);
            *(s16*)((char*)temp_r9 + 0x0) = *(s16*)((char*)r8 + 0xA);
            *(s16*)((char*)temp_r9 + 0x2) = *(s16*)((char*)r8 + 0xC);
            *(s16*)((char*)temp_r9 + 0x4) = *(s16*)((char*)r8 + 0x10);
        }
        r8 = (void*)((char*)r8 + 0x8);
        r11 += 1;
        goto loop_5;
    }
}

void fn_8010A53C(void *arg0, s32 arg1) {
    void *fn_8000E0E4(void *);
    s32 fn_80010B78(void *, s32, f32);
    void fn_8000A258(void);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007858(f32, f32);
    void fn_80007870(f32);
    s32 *fn_8018D900(u8);
    void fn_80007668(s32 *);
    void fn_80007698(s32);
    void fn_80007220(u8, f32);
    void fn_800071D8(u8, f32);
    void fn_80007124(void *);
    void fn_80007884(void);
    extern f32 lbl_8036A130;
    extern f32 lbl_8036A118;
    extern f32 lbl_8036A154;
    s32 sp8;
    f32 var_f31;
    void *temp_r31;
    s32 temp_r30;
    void *temp_r29;
    s8 temp_r0;
    s32 temp;

    temp_r29 = arg0;
    var_f31 = lbl_8036A130;
    temp_r31 = fn_8000E0E4(*(void **)((u8 *)arg0 + 8));
    temp_r30 = arg1;
    temp_r0 = *(s8 *)((u8 *)temp_r29 + 0x14);
    switch (temp_r0) {
    case -1:
        var_f31 = (f32)*(s16 *)((u8 *)temp_r29 + 0xC);
        break;
    case 0:
        temp = fn_80010B78(temp_r31, -1, lbl_8036A118);
        var_f31 = (f32)(*(s16 *)((u8 *)temp_r29 + 0xC) - (temp / 2));
        break;
    case 1:
        var_f31 = (f32)(*(s16 *)((u8 *)temp_r29 + 0xC) - fn_80010B78(temp_r31, -1, lbl_8036A118));
        break;
    }
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_80007898(6);
    fn_80007858(var_f31, (f32)*(s16 *)((u8 *)temp_r29 + 0xE));
    fn_80007870((f32)*(s8 *)((u8 *)temp_r29 + 2));
    sp8 = *fn_8018D900(*(u8 *)((u8 *)temp_r29 + 0x12));
    fn_80007668(&sp8);
    fn_80007698(temp_r30);
    fn_80007220(*(u8 *)((u8 *)temp_r29 + 0x10), lbl_8036A154);
    fn_800071D8(*(u8 *)((u8 *)temp_r29 + 0x11), lbl_8036A118);
    fn_80007124(temp_r31);
    fn_80007884();
}

#pragma cplusplus on
extern "C" void fn_8010A998(void *arg0, u8 arg1) {
    void fn_80007698(u8);
    void fn_80007770(f32, f32, f32, f32);
    void fn_80007790(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009EB0(s32, u8, u8, s32);
    void fn_80009F90(s32, u8, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);

    struct Obj {
        u8 pad[4];
        virtual void method();
    };

    s16 var_r4;
    s16 var_r5;
    s16 a;
    s16 b;
    u8 var_r31;

    var_r31 = arg1;
    if (!(*(u8 *)((u8 *)arg0 + 0x10) & 0x80)) {
        ((Obj *)arg0)->method();
    }
    fn_8000A258();
    if (*(u8 *)((u8 *)arg0 + 0x10) & 2) {
        fn_80009EB0(*(s32 *)((u8 *)arg0 + 0xC), *(u8 *)((u8 *)arg0 + 0x12), *(u8 *)((u8 *)arg0 + 0x11), 0x11);
    } else {
        fn_80009F90(*(s32 *)((u8 *)arg0 + 0xC), *(u8 *)((u8 *)arg0 + 0x12), 0x11);
    }
    fn_8000A248();
    var_r4 = *(u16 *)((u8 *)arg0 + 0x20) - *(u16 *)((u8 *)arg0 + 0x1C);
    if (var_r4 < 0) {
        var_r4 = -var_r4;
    }
    var_r5 = *(u16 *)((u8 *)arg0 + 0x22) - *(u16 *)((u8 *)arg0 + 0x1E);
    if (var_r5 < 0) {
        var_r5 = -var_r5;
    }
    a = *(s16 *)((u8 *)arg0 + 0x18);
    b = *(s16 *)((u8 *)arg0 + 0x14);
    if (a == b) {
        *(s16 *)((u8 *)arg0 + 0x18) = b + var_r4;
    }
    a = *(s16 *)((u8 *)arg0 + 0x1A);
    b = *(s16 *)((u8 *)arg0 + 0x16);
    if (a == b) {
        *(s16 *)((u8 *)arg0 + 0x1A) = b + var_r5;
    }
    if (var_r31 == 0xFF) {
        var_r31 = *(u8 *)((u8 *)arg0 + 0x13);
    }
    fn_80007898(1);
    fn_80007790(
        (f32)*(s16 *)((u8 *)arg0 + 0x14),
        (f32)*(s16 *)((u8 *)arg0 + 0x16),
        (f32)*(s16 *)((u8 *)arg0 + 0x18),
        (f32)*(s16 *)((u8 *)arg0 + 0x1A));
    fn_80007770(
        (f32)*(u16 *)((u8 *)arg0 + 0x1C),
        (f32)*(u16 *)((u8 *)arg0 + 0x1E),
        (f32)*(u16 *)((u8 *)arg0 + 0x20),
        (f32)*(u16 *)((u8 *)arg0 + 0x22));
    fn_80007698(var_r31);
    fn_80007884();
}
#pragma cplusplus reset
void fn_8010AB78(void *arg0) {
    if (*(u8*)((char*)arg0 + 0x10) & 0x80) {
        fn_8006EDA0((char*)arg0 + 0xC);
        *(u8*)((char*)arg0 + 0x10) = *(u8*)((char*)arg0 + 0x10) & 0x7F;
    }
}

void fn_8010AC4C(void) {

}

void fn_8010AC50(void) {

}

void fn_8010AC54(void) {

}

s32 fn_8010AC58(s32 arg0, s32 arg1) {
    extern u32 lbl_802F757C;
    extern u32 lbl_80330EAC[];
    extern u32 lbl_80330E64[];
    
    // Function signature appears to be: s32 fn_8010AC58(s32 arg0, s32 arg1)
    if (arg0 < 0) {
        return 0;
    }
    
    if ((s32) lbl_802F757C != 0) {
        return 0;
    }
    
    if ((s32) lbl_80330EAC[arg1] == 0) {
        return 0;
    }
    
    if ((s32) lbl_80330E64[arg1] == 0) {
        return 0;
    }
    
    // Return 1 if all conditions are satisfied
    return 1;
}

void fn_8010AEC8(void) {
    // This function appears to be a stub or placeholder.
    // It does not perform any operations but exists in the ROM.
    return;
}

s32 fn_8010B60C(void *arg0, void *arg1) {
    u8 fn_80105BC0(void *, s32);
    if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x18) != 0) {
        return 0;
    }
    return *(u32 *)((u8 *)arg1 + 0x1A0) & 1;
}

#pragma use_lmw_stmw on
u8 fn_8010BB74(void *arg0) {
    void fn_800FE2A0(void *, s32, s32);
    s8 fn_8003A398(void *);
    u8 fn_800FE84C(s8, s8);
    void *fn_80019DBC(u8);
    s32 fn_8010067C(s16, s16, void *);
    void fn_801014BC(void *, s32, s32, s32, s32, s32, s32, s32);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802CA518[151280];
    extern u8 fn_800FB5C8[];
    s32 x0;
    s32 y0;
    s32 xShift;
    u8 *row;
    u8 *row2;
    s32 t;
    s32 bestDist;
    u8 bestCost;
    s16 best1;
    s16 best2;
    s32 xMin;
    s32 xMax;
    s32 yMax;
    s32 y;
    s32 x;
    u8 *map;
    u8 *map2;
    u8 flag;

    flag = lbl_8032B3C0[1];
    if (!(flag & 2) && (*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        return 0;
    }
    map = lbl_802CA518;
    bestCost = 0xFF;
    bestDist = 0x7FFFFFFF;
    fn_800FE2A0(arg0, 5, -1);
    x0 = ((u8 *)arg0)[0x19E];
    y0 = ((u8 *)arg0)[0x19F];
    x0 = (s8)x0;
    y0 = (s8)y0;
    {
        s8 range;
        s32 lim;
        s32 yMin;
        range = fn_8003A398(arg0);
        xMin = x0 - range;
        if (xMin < (s8)lbl_802CA518[8]) {
            xMin = (s8)lbl_802CA518[8];
        }
        yMin = y0 - range;
        if (yMin < (s8)lbl_802CA518[9]) {
            yMin = (s8)lbl_802CA518[9];
        }
        xMax = x0 + range;
        lim = (s8)lbl_802CA518[0xA] - 1;
        if (xMax > lim) {
            xMax = lim;
        }
        yMax = y0 + range;
        lim = (s8)lbl_802CA518[0xB] - 1;
        if (yMax > lim) {
            yMax = lim;
        }
        y = yMin;
    }
    map2 = lbl_802CA518;
    goto outer_cmp;
outer:
    x = xMin;
    xShift = (s8)y << 6;
    row = map2 + xShift;
    row2 = map + xShift;
    goto inner_cmp;
inner:
    t = (s8)x + xShift;
    if (((s16 *)(map2 + 0x610E))[t] >= 0) {
        u8 *cell = row + (s8)x;
        if ((s8)cell[0xE18E] == 0 && fn_800FE84C((s8)x, (s8)y) == 0 && cell[0xD] == 0) {
            void *tmp = fn_80019DBC(*(row2 + ((s8)x + 0x100D)));
            if (*(u8 *)(*(u8 **)((u8 *)tmp + 8) + 6) != 0) {
                s32 dist = fn_8010067C((s16)x, (s16)y, fn_800FB5C8);
                if (dist <= bestDist) {
                    s16 cost = (*(s16 **)(map + 0x14190))[t];
                    if (cost < (s32)bestCost) {
                        bestDist = dist;
                        bestCost = (u8)cost;
                        best1 = (s16)x;
                        best2 = (s16)y;
                    }
                }
            }
        }
    }
    x += 1;
inner_cmp:
    if (x <= xMax) {
        goto inner;
    }
    y += 1;
outer_cmp:
    if (y <= yMax) {
        goto outer;
    }
    if ((u32)(bestDist - 0x7FFF0000) != 0xFFFFU) {
        if (map[(s8)best1 + ((s8)best2 << 6) + 0xD] != ((u8 *)arg0)[0x198]) {
            fn_801014BC(arg0, best1, best2, 1, 0xFFFF, 0, 0, -1);
        }
    }
    return lbl_8032B3C0[0x21C];
}
#pragma use_lmw_stmw reset

u8 fn_8010BDE0(s32 arg0) {
    u8 fn_80102334(s32, s32, s16 *, s16 *);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802EF4C8[];
    s16 spA;
    s16 sp8;

    if (fn_80102334(arg0, 0, &spA, &sp8) != 0) {
        fn_801014BC(arg0, spA, sp8, 1, 0xFFFF, 1, 0, -1);
        if ((lbl_8032B3C0[0x21C] != 0)) {
            if ((spA == (s8) lbl_802EF4C8[0xD]) && (sp8 == (s8) lbl_802EF4C8[0xE])) {
                fn_800FB9C0(0x2C, 0, (s8) spA, (s8) sp8, -1, 0, 0);
            }
        }
        return lbl_8032B3C0[0x21C];
    }
    return 0U;
}

s32 fn_8010C4B0(void *arg0) {
    void *fn_8000D354(s32);
    u8 fn_80102EA8();
    if (fn_80102EA8() != 0) {
        return 1;
    }
    return M2C_FIELD(fn_8000D354(M2C_FIELD(arg0, s32 *, 0x240)), u8 *, 7) != 0;
}

s32 fn_8010CA94(void) {
    return 0;
}

s32 fn_8010CA9C(void) {
    return 0;
}

s32 fn_8010CAA4(void) {
    return 0;
}

void fn_8010CAAC(void) {
    M2C_UNK fn_8010EA20();
    fn_8010EA20();
}

void fn_8010D364(void) {
    M2C_UNK fn_8010D384();
    fn_8010D384();
}

#pragma use_lmw_stmw on
s32 fn_8010E804(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 fn_80015610(s32, s32);
    void fn_8001F9C4(u8 *, s8, s8, s8, s32);
    void fn_80022DAC(u8 *, s32, s32);
    void fn_80022FD8(u8 *, s32);
    u8 fn_800FE84C(s8, s8);
    extern u8 lbl_802CA518[151280];
    extern u16 lbl_802B14E4[];
    s32 count;
    s32 xMin;
    s32 xMax;
    s32 yMax;
    s32 x;
    s32 y;
    s32 xShift;
    u8 *ptr;

    count = 0;
    fn_80022FD8(lbl_802CA518, 6);
    fn_80022DAC(lbl_802CA518, 0xB, -1);
    fn_8001F9C4(lbl_802CA518, arg1, arg2, arg4, 1);
    fn_8001F9C4(lbl_802CA518, arg1, arg2, arg3 - 1, -1);
    fn_80022FD8(lbl_802CA518, 5);

    xMin = (s16)arg1 - (s16)arg4;
    if (xMin < (s8)lbl_802CA518[8]) {
        xMin = (s8)lbl_802CA518[8];
    }
    {
        s32 yMin = (s16)arg2 - (s16)arg4;
        if (yMin < (s8)lbl_802CA518[9]) {
            yMin = (s8)lbl_802CA518[9];
        }
        xMax = (s16)arg1 + (s16)arg4;
        if (xMax > (s8)lbl_802CA518[0xA] - 1) {
            xMax = (s8)lbl_802CA518[0xA] - 1;
        }
        yMax = (s16)arg2 + (s16)arg4;
        if (yMax > (s8)lbl_802CA518[0xB] - 1) {
            yMax = (s8)lbl_802CA518[0xB] - 1;
        }
        x = yMin;
    }

    goto loop_outer_cmp;
loop_outer:
    y = xMin;
    xShift = (s8)x << 6;
    goto loop_inner_cmp;
loop_inner:
    if (*(s16 *)(lbl_802CA518 + (((s8)y + xShift) * 2) + 0x818E) >= 0) {
        ptr = lbl_802CA518 + xShift + (s8)y;
        if (((s8)ptr[0xE18E] == 0) && (fn_800FE84C((s8)y, (s8)x) == 0)) {
            if (ptr[0xD] != 0) {
                if (ptr[0xD] != 0) {
                    ptr = (u8 *)lbl_802B14E4 + (ptr[0xD] - 1) * 0x280;
                } else {
                    ptr = NULL;
                }
                if ((fn_80015610(*(s32 *)((u8 *)arg0 + 0x190), *(s32 *)(ptr + 0x190)) != 1)
                    && (*(s32 *)(ptr + 0x254) & 1)) {
                    count += 1;
                }
            }
        }
    }
    y += 1;
loop_inner_cmp:
    if (y <= xMax) {
        goto loop_inner;
    }
    x += 1;
loop_outer_cmp:
    if (x <= yMax) {
        goto loop_outer;
    }
    return count;
}
#pragma use_lmw_stmw reset

void fn_8010EF34(void) {
    M2C_UNK fn_8010EF74();
    fn_8010EF74();
}

void fn_8010EF54(void) {
    M2C_UNK fn_8010EF74();
    fn_8010EF74();
}

void fn_8010F52C(void* arg0, int arg1)
{
    *(u32*)arg0 = arg1;
}

void fn_8010F970(void) {
    u32 fn_80019E04(u32);
    extern u32 lbl_8028F5F8[48];
    u32 *p;

    for (p = lbl_8028F5F8; p[0] != 0; p += 3) {
        p[1] = fn_80019E04(p[0]);
    }
}

void fn_8010F9BC(s32 arg0)
{
    if (arg0 < 0) {
        arg0 = 0;
    }
}

extern u8 lbl_803679E0;
extern M2C_UNK lbl_803679E4;
void fn_8001C5F8(void);
extern u8 lbl_8032BDDC[];
M2C_UNK *fn_8010FA2C(void *arg0) {
    s32 fn_80019E24(s32 arg0);
    M2C_UNK *fn_8001C76C(M2C_UNK *);
    M2C_UNK fn_8001D5F4(M2C_UNK *, u8);
    M2C_UNK fn_8001D818(M2C_UNK *, s32);
    M2C_UNK *__register_global_object(M2C_UNK *, M2C_UNK *, M2C_UNK *);

    if ((s8) lbl_803679E0 == 0) {
        __register_global_object(fn_8001C76C(&lbl_803679E4), (M2C_UNK *)fn_8001C5F8, (M2C_UNK *)lbl_8032BDDC);
        lbl_803679E0 = 1;
    }
    fn_8001D818(&lbl_803679E4, fn_80019E24(M2C_FIELD(arg0, u8 *, 4)));
    fn_8001D5F4(&lbl_803679E4, M2C_FIELD(arg0, u8 *, 5));
    return &lbl_803679E4;
}

void fn_8010FAA8(void) {
    extern u8 lbl_8032BB58[516];
    extern u8 lbl_802CA518[151280];
    s32 var_r31;
    void *var_r29;
    u8 temp_r0;
    u8 *temp_r3;

    var_r31 = 0;
    var_r29 = &lbl_8032BB58;
loop_9:
    if (var_r31 < *(s32 *) (&lbl_8032BB58 + 0x200)) {
        temp_r0 = *(u8 *) ((char *) var_r29 + 2);
        switch ((s32) temp_r0) {                    /* irregular */
        case 6:
            fn_8001F91C(&lbl_802CA518, *(u8 *) var_r29, *(u8 *) ((char *) var_r29 + 1), (s8) *(u8 *) ((char *) var_r29 + 3));
            break;
        case 9:
            temp_r3 = &lbl_802CA518[*(u8 *) var_r29];
            temp_r3 += (s8) *(u8 *) ((char *) var_r29 + 1) << 6;
            if (*(u8 *) ((char *) temp_r3 + 0xD) == 0) {
                *(u8 *) ((char *) temp_r3 + 0x300D) = *(u8 *) ((char *) temp_r3 + 0x300D) | 2;
            }
            break;
        }
        var_r29 = (char *) var_r29 + 8;
        var_r31 += 1;
        goto loop_9;
    }
}

void fn_8010FB7C(s32 arg0, s32 arg1) {
    fn_8017A810(arg1, 0x204, arg0);
}

void fn_8010FBA8(s32 arg0, s32 arg1) {
    fn_8017A430(arg1, 0x204, arg0);
}

void fn_8010FBD4(void) {

}

extern u8 lbl_8028F2D0[];
void fn_8010FBD8(void) {
    fn_8000D3EC(&lbl_802737A0[0x67], &lbl_8028F2D0[0]);
    fn_8000D3EC(&lbl_802737A0[0x71], &lbl_8028F2D0[0]); 
    fn_8000D3EC(&lbl_802737A0[0x79], &lbl_8028F2D0[0]);
}

void fn_8010FD70(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    char *temp_r9;

    temp_r9 = (char*)arg0 + (*(s32*)((char*)arg0 + 0x200) << 3);
    *(u8*)(temp_r9 + 0x0) = arg1;
    *(u8*)(temp_r9 + 0x1) = arg2;
    *(u8*)(temp_r9 + 0x2) = 0xA;
    *(u8*)(temp_r9 + 0x3) = arg3;
    *(u8*)(temp_r9 + 0xA) = 0x0;
    *(s32*)((char*)arg0 + 0x200) = *(s32*)((char*)arg0 + 0x200) + 1;
    *(u8*)(temp_r9 + 0x4) = 0x0;
    *(u8*)(temp_r9 + 0x5) = 0x0;
    *(u8*)(temp_r9 + 0x6) = 0x0;
    *(u8*)(temp_r9 + 0x7) = arg4;
}

void fn_8010FDB8(s32 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    s32 *temp_r8;
    u32 temp_r9;
    u8 temp_r10;

    temp_r8 = (s32*)(arg0 + ((*(s32*)(arg0 + 0x200)) << 3));
    *(u8*)(temp_r8 + 0x0) = arg1;
    *(u8*)(temp_r8 + 0x1) = arg2;
    *(u8*)(temp_r8 + 0x2) = 7;
    *(u8*)(temp_r8 + 0x3) = arg3;
    *(u8*)(temp_r8 + 0xA) = 0;

    temp_r9 = *(u32*)(arg0 + 0x200);
    *(u32*)(arg0 + 0x200) = temp_r9 + 1;

    temp_r10 = *(u8*)(arg0 + 0xE);
    *(u8*)(temp_r8 + 0x4) = temp_r10;

    temp_r10 = *(u8*)(arg0 + 0x18);
    *(u8*)(temp_r8 + 0x5) = temp_r10;

    *(u8*)(temp_r8 + 0x6) = 0;
    *(u8*)(temp_r8 + 0x7) = 0;
}

void fn_8010FE08(void *arg0, s8 arg1, s8 arg2, u8 arg3) {
    s32 i;
    s32 count = *(s32 *)((u8 *)arg0 + 0x200);
    if (count <= 0) {
        return;
    }

    for (i = 0; i < count; i++) {
        u8 *src = (u8 *)arg0 + (i * 8);
        if ((arg1 == *(s8 *)(src + 0)) && (arg2 == *(s8 *)(src + 1)) && ((arg3 == 0) || (arg3 == *(u8 *)(src + 2)))) {
            s32 j;
            u8 *dst = (u8 *)arg0 + (*(s32 *)((u8 *)arg0 + 0x200) - 1) * 8;
            for (j = i; j < *(s32 *)((u8 *)arg0 + 0x200) - 1; j++) {
                src += 8;
                dst[0] = src[0];
                dst[1] = src[1];
                dst[2] = src[2];
                dst[3] = src[3];
                dst[4] = src[4];
                dst[5] = src[5];
                dst[6] = src[6];
                dst[7] = src[7];
                dst -= 8;
            }
            *(s32 *)((u8 *)arg0 + 0x200) -= 1;
            i--;
            count--;
        }
    }
}

void fn_8010FEEC(void *arg0) {
    *(u8*)((char*)arg0 + 4) = 0;
    *(u8*)((char*)arg0 + 5) = 0;
}

void *fn_8010FF24(void *arg0, s8 arg1, s8 arg2, u8 arg3) {
    void **ptr_list = (void **)arg0;
    s32 counter;
    s32 i;

    counter = *(s32 *)((u8 *)ptr_list + 0x200);  // Load counter from offset 0x200 
    if (counter <= 0) {
        return NULL;
    }

    for (i = 0; i < counter; i++) {
        void *current = ptr_list[i];
        s8 field0 = *(s8 *)((u8 *)current + 0x0);  // Load s8 value at offset 0x0
        s8 field1 = *(s8 *)((u8 *)current + 0x1);  // Load s8 value at offset 0x1
        u8 field2 = *(u8 *)((u8 *)current + 0x2);  // Load u8 value at offset 0x2

        if (arg1 == field0 && arg2 == field1) {
            if (arg3 != 0) {
                if (arg3 == field2) {
                    return current;
                }
                goto block_6;  
            }
            return current;
        }
block_6:
        ;  // Empty body for label
    }

    return NULL;  // No match found in loop
}

s32 fn_8010FF88(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x200);
}

void fn_8010FF90(void *arg0) {
    extern u32 lbl_8032BD5C[32];

    *(s32 *)((char *)arg0 + 0x200) = 0;
    *(u8 *)((char *)arg0 + 0) = 0;
    *(u8 *)((char *)arg0 + 1) = 0;
    *(u8 *)((char *)arg0 + 2) = 0;
    *(u8 *)((char *)arg0 + 3) = 0;
    lbl_8032BD5C[0] = 0;
    lbl_8032BD5C[1] = 0;
    lbl_8032BD5C[2] = 0;
    lbl_8032BD5C[3] = 0;
    lbl_8032BD5C[4] = 0;
    lbl_8032BD5C[5] = 0;
    lbl_8032BD5C[6] = 0;
    lbl_8032BD5C[7] = 0;
    lbl_8032BD5C[8] = 0;
    lbl_8032BD5C[9] = 0;
    lbl_8032BD5C[10] = 0;
    lbl_8032BD5C[11] = 0;
    lbl_8032BD5C[12] = 0;
    lbl_8032BD5C[13] = 0;
    lbl_8032BD5C[14] = 0;
    lbl_8032BD5C[15] = 0;
    lbl_8032BD5C[16] = 0;
    lbl_8032BD5C[17] = 0;
    lbl_8032BD5C[18] = 0;
    lbl_8032BD5C[19] = 0;
    lbl_8032BD5C[20] = 0;
    lbl_8032BD5C[21] = 0;
    lbl_8032BD5C[22] = 0;
    lbl_8032BD5C[23] = 0;
    lbl_8032BD5C[24] = 0;
    lbl_8032BD5C[25] = 0;
    lbl_8032BD5C[26] = 0;
    lbl_8032BD5C[27] = 0;
    lbl_8032BD5C[28] = 0;
    lbl_8032BD5C[29] = 0;
    lbl_8032BD5C[30] = 0;
    lbl_8032BD5C[31] = 0;
}

s32 fn_80110030(void *arg0) {
    extern s32 lbl_8032BD5C[];
    return lbl_8032BD5C[*(u8 *)((u8 *)arg0 + 7)];
}

s32 fn_80110048(u32 arg0) {
    extern u32 lbl_8032BD5C;
    s32 var_ctr;
    s32 var_r5;
    u32 *var_r4;

    var_r4 = &lbl_8032BD5C;
    var_r5 = 0;
    var_ctr = 0x20;
loop_1:
    if ((u32) *var_r4 == 0U) {
        (&lbl_8032BD5C)[var_r5] = arg0;
    } else {
        var_r4 += 4;
        var_r5 += 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            var_r5 = -1;
        } else {
            goto loop_1;
        }
    }
    return var_r5;
}

#pragma peephole off
s32 fn_80110094(void) {
    extern u32 lbl_8032BD5C[32];

    lbl_8032BD5C[0] = 0;
    lbl_8032BD5C[1] = 0;
    lbl_8032BD5C[2] = 0;
    lbl_8032BD5C[3] = 0;
    lbl_8032BD5C[4] = 0;
    lbl_8032BD5C[5] = 0;
    lbl_8032BD5C[6] = 0;
    lbl_8032BD5C[7] = 0;
    lbl_8032BD5C[8] = 0;
    lbl_8032BD5C[9] = 0;
    lbl_8032BD5C[10] = 0;
    lbl_8032BD5C[11] = 0;
    lbl_8032BD5C[12] = 0;
    lbl_8032BD5C[13] = 0;
    lbl_8032BD5C[14] = 0;
    lbl_8032BD5C[15] = 0;
    lbl_8032BD5C[16] = 0;
    lbl_8032BD5C[17] = 0;
    lbl_8032BD5C[18] = 0;
    lbl_8032BD5C[19] = 0;
    lbl_8032BD5C[20] = 0;
    lbl_8032BD5C[21] = 0;
    lbl_8032BD5C[22] = 0;
    lbl_8032BD5C[23] = 0;
    lbl_8032BD5C[24] = 0;
    lbl_8032BD5C[25] = 0;
    lbl_8032BD5C[26] = 0;
    lbl_8032BD5C[27] = 0;
    lbl_8032BD5C[28] = 0;
    lbl_8032BD5C[29] = 0;
    lbl_8032BD5C[30] = 0;
    lbl_8032BD5C[31] = 0;
    return 1;
}
#pragma peephole reset
#include "global.h"
extern u16 lbl_8028F3AC;
#include "common.h"
#include "units.h"
extern u8 D_801A39D4;
extern u8 D_8017C3CC;

void fn_8010F670(void) {
    D_8017C3CC = (D_801A39D4 & 0x20) ? 1 : 0;
}
