/* Functions from 0x8010554C to 0x80110128, found by decomp-toolkit. */
#include "common.h"

static inline s32 fn_8010EF74_cost(u8 *map, s8 x, s8 y) {
    return (*(s16 **)(map + 0x14190))[x + (y << 6)];
}

static inline u8 fn_8010CF28_check(void *a, void *b) {
    u8 fn_80015610(void *, void *);
    return fn_80015610(a, b) == 1;
}

extern double lbl_8036A128;
extern double lbl_8036A120;
extern f32 lbl_8036A134;
extern f32 lbl_8036A130;

typedef struct AiParam {
    void *p;
    u8 b4;
    u8 b5;
    u8 b6;
    u8 b7;
    s32 unk8;
    u8 bC[4];
} AiParam;

typedef struct AiBest {
    void *unit;
    s16 y;
    s16 x;
    u8 rank;
} AiBest;

#pragma cplusplus on
struct UnkObject {
    u8 pad[4];
    virtual void v0();
    virtual void v1(s32);
};
#pragma cplusplus off

struct UnkCycler {
    u8 pad0[4];
    u8 unk4;
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

s32 fn_80105710(void *arg0) {
    u8 fn_80019CC0(void *);
    s32 fn_80019E04(void *);
    s32 off;
    s32 i;
    u8 status;

    if (*(u8 *)((u8 *)arg0 + 0x1B) == 0) {
        return 0;
    }
    i = 0;
    off = 0;
    while (i < *(u8 *)((u8 *)arg0 + 0x1B)) {
        status = fn_80019CC0(*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x20) + off));
        switch (status) {
        case 3:
            return fn_80019E04(*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x20) + (i * 4)));
        case 0:
        default:
            break;
        }
        off += 4;
        i += 1;
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

#pragma use_lmw_stmw on
void fn_80105F0C(void *arg0, u32 arg1, s32 arg2) {
    void fn_800056CC(const char *, ...);
    void *fn_8000CAA0(void *, u32);
    u32 fn_8000D354(void *);
    void fn_80016180(void);
    void fn_800163F8(void);
    void *fn_80016BDC(void *);
    void fn_8002297C(void *);
    void fn_8003816C(void *, u8, u8);
    void fn_8004FE98(void *, s32);
    void fn_800C1BDC(void);
    void fn_800C4588(void *);
    void *fn_800C45B8(s32, void *, s32);
    void *fn_80107468(void *);
    s32 fn_80107874(void *, void *);
    void fn_80107B54(void *, u32 *, u8);
    u8 *fn_80107D64(void *, u8 *, u8 *, s32, s32, void *);
    void fn_80184750(void *, s32, s32, s32);
    s32 fn_801A1CC8(void);
    void fn_80234450(void *, void *);
    extern u8 lbl_802738F8[];
    extern u8 lbl_8028F2E0[];
    extern u16 lbl_802B14E4[];
    extern u8 lbl_802CA518[];
    extern u32 lbl_80367110;
    u8 sp8[0x68];
    void *self;
    u32 arg1b;
    s32 mode;
    s32 nibble;
    void *base;
    s32 count;
    u8 *entry;
    s32 i;
    void *obj;
    void *unit;
    u8 *src;
    u8 *dst;
    u8 t;
    u8 *p;
    u8 last;
    void *tmp;

    self = arg0;
    arg1b = arg1;
    mode = arg2;
    fn_800056CC((const char *)(lbl_802738F8 + 0x33), self);
    if (fn_8000D354(self) != 0) {
        nibble = fn_801A1CC8() & 0xF;
        if (lbl_80367110 & 1) {
            arg1b = 0;
        }
        if (arg1b == 0) {
            base = fn_800C45B8(-0x6A40, lbl_802738F8 + 0x46, 0);
            count = fn_80107874(self, base);
            if (count > 0) {
                entry = (u8 *)base;
                i = 0;
                while (i < count) {
                    if (mode == 2) {
                        goto case2;
                    }
                    if (mode >= 2) {
                        goto check4;
                    }
                    if (mode == 0) {
                        goto case0;
                    }
                    if (mode >= 0) {
                        goto case1;
                    }
                    goto after_sw;
                check4:
                    if (mode >= 4) {
                        goto after_sw;
                    }
                case0:
                    if ((u8)(s32)fn_80107468(entry) != 0) {
                        src = fn_80107D64(*(void **)(entry + 4), entry + 0xA, entry + 0xB, 1, count, base);
                        dst = entry + 0xC;
                        if (src != 0) {
                        copy0:
                            t = *src;
                            if (t == 0x10) {
                                goto copy0_done;
                            }
                            *dst = t;
                            dst += 1;
                            src += 1;
                            goto copy0;
                        copy0_done:
                            ;
                        }
                        *dst = 0x10;
                    }
                    goto after_sw;
                case1:
                    if ((u8)(s32)fn_80107468(entry) != 0) {
                        entry[0xA] = entry[0x8];
                        entry[0xB] = entry[0x9];
                        entry[0xC] = 0x10;
                    }
                    goto after_sw;
                case2:
                    obj = *(void **)entry;
                    {
                        u32 *buf = (u32 *)sp8;
                        *(s32 *)(sp8 + 0x10) = 0;
                        sp8[0x30] = 0;
                        *(s32 *)(sp8 + 0x48) = 0;
                        *(s32 *)(sp8 + 0x14) = 0;
                        sp8[0x31] = 0;
                        *(s32 *)(sp8 + 0x4C) = 0;
                        *(s32 *)(sp8 + 0x18) = 0;
                        sp8[0x32] = 0;
                        *(s32 *)(sp8 + 0x50) = 0;
                        *(s32 *)(sp8 + 0x1C) = 0;
                        sp8[0x33] = 0;
                        *(s32 *)(sp8 + 0x54) = 0;
                        *(s32 *)(sp8 + 0x20) = 0;
                        sp8[0x34] = 0;
                        *(s32 *)(sp8 + 0x58) = 0;
                        *(s32 *)(sp8 + 0x24) = 0;
                        sp8[0x35] = 0;
                        *(s32 *)(sp8 + 0x5C) = 0;
                        *(s32 *)(sp8 + 0x28) = 0;
                        sp8[0x36] = 0;
                        *(s32 *)(sp8 + 0x60) = 0;
                        *(s32 *)(sp8 + 0x2C) = 0;
                        sp8[0x37] = 0;
                        *(s32 *)(sp8 + 0x64) = 0;
                        fn_80107B54(entry, buf, entry[0x10D]);
                    }
                    unit = 0;
                    {
                        u8 id = *(u8 *)((u8 *)obj + 0x3C);
                        if (id != 0) {
                            if (id != 0) {
                                unit = (u8 *)lbl_802B14E4 + (id - 1) * 0x280;
                            }
                        } else if (!(entry[0x10C] & 1) && *(u32 *)sp8 != 0) {
                            unit = fn_80016BDC(*(void **)sp8);
                            if (unit != 0) {
                                *(u8 *)((u8 *)obj + 0x3C) = *(u8 *)((u8 *)unit + 0x198);
                            }
                        }
                    }
                    if (unit != 0 && (*(u32 *)((u8 *)unit + 0x1A0) & 0x9D)) {
                        unit = 0;
                    }
                    *(void **)(entry + 4) = unit;
                    if (unit != 0) {
                        src = fn_80107D64(*(void **)(entry + 4), entry + 0xA, entry + 0xB, 1, count, base);
                        dst = entry + 0xC;
                        if (src != 0) {
                        copy2:
                            t = *src;
                            if (t == 0x10) {
                                goto copy2_done;
                            }
                            *dst = t;
                            dst += 1;
                            src += 1;
                            goto copy2;
                        copy2_done:
                            ;
                        }
                        *dst = 0x10;
                    }
                after_sw:
                    if (*(void **)(entry + 4) != 0) {
                        fn_8003816C(*(void **)(entry + 4), entry[0xA], entry[0xB]);
                    }
                    obj = *(void **)(entry + 4);
                    if (obj != 0) {
                        if (nibble != 0) {
                            fn_80184750(obj, nibble, 0, 0);
                        } else {
                            s32 ch;
                            p = entry + 0xC;
                            ch = 0x10;
                            last = 0x10;
                            goto scan_chk;
                        scan_lp:
                            ch = t;
                            last = t;
                            p += 1;
                        scan_chk:
                            t = *p;
                            if (t != 0x10) {
                                goto scan_lp;
                            }
                            fn_80184750(obj, ch, 0, 0);
                        }
                        fn_8004FE98(obj, 0);
                    }
                    i += 1;
                    entry += 0x110;
                }
            }
            fn_800C4588(base);
            fn_8002297C(lbl_802CA518);
            fn_800163F8();
            fn_80016180();
            fn_800C1BDC();
        } else {
            tmp = fn_8000CAA0(lbl_8028F2E0, arg1b);
            fn_80234450((u8 *)tmp + 0x30, self);
            *(u8 *)((u8 *)tmp + 0x60) = (u8)mode;
            *(u8 *)((u8 *)tmp + 0x64) = (u8)nibble;
        }
    }
}
#pragma use_lmw_stmw reset

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

void fn_80106690(void *arg0) {
    s32 fn_8004F128(void *);
    void fn_8000C188(void *);
    void *entry;
    s32 count;
    s32 value;
    void *p;

    value = *(u8 *)((u8 *)arg0 + 0x65);
    *(u8 *)((u8 *)arg0 + 0x65) = (u8)(value + 1);

    if (value <= 0x2A30) {
        entry = *(void **)((u8 *)arg0 + 0x68);
        count = 0;
        while (count < *(u8 *)((u8 *)arg0 + 0x63)) {
            p = *(void **)((u8 *)entry + 4);
            if (p != NULL) {
                if ((u8)fn_8004F128(p) == 0) {
                    return;
                }
            }
            count++;
            entry = (u8 *)entry + 0x110;
        }
    }
    fn_8000C188(arg0);
}

void fn_8010671C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
}

#pragma use_lmw_stmw on
void fn_80106728(u8 *arg0) {
    void fn_8000C188(void);
    void *fn_80016BDC(void *);
    void fn_8003816C(void *, u8, u8);
    void fn_8004F5EC(void *, s32);
    void *fn_80107468(void *);
    void fn_80107B54(void *, u32 *, u8);
    u8 *fn_80107D64(void *, u8 *, u8 *, s32, s32, void *);
    extern u16 lbl_802B14E4[];
    u8 sp8[0x68];
    u8 idx;
    void *base;
    u8 count;
    u8 *entry;
    s32 kind;
    void *obj;
    void *unit;
    u8 *src;
    u8 *dst;
    u8 t;
    u8 *p;

    p = arg0;
    idx = p[0x62];
    count = p[0x63];
    if (idx >= count) {
        fn_8000C188();
        return;
    }
    kind = p[0x60];
    base = *(void **)(p + 0x68);
    entry = (u8 *)base + idx * 0x110;
    if (kind == 2) {
        goto case2;
    }
    if (kind >= 2) {
        goto check4;
    }
    if (kind == 0) {
        goto case0;
    }
    if (kind >= 0) {
        goto case1;
    }
    goto after_sw;
check4:
    if (kind >= 4) {
        goto after_sw;
    }
case0:
    if ((u8)(s32)fn_80107468(entry) != 0) {
        src = fn_80107D64(*(void **)(entry + 4), entry + 0xA, entry + 0xB, 1, count, base);
        dst = entry + 0xC;
        if (src != 0) {
        copy0:
            t = *src;
            if (t == 0x10) {
                goto copy0_done;
            }
            *dst = t;
            dst += 1;
            src += 1;
            goto copy0;
        copy0_done:
            ;
        }
        *dst = 0x10;
    }
    goto after_sw;
case1:
    if ((u8)(s32)fn_80107468(entry) != 0) {
        entry[0xA] = entry[0x8];
        entry[0xB] = entry[0x9];
        entry[0xC] = 0x10;
    }
    goto after_sw;
case2:
    obj = *(void **)entry;
    {
        u32 *buf = (u32 *)sp8;
        *(s32 *)(sp8 + 0x10) = 0;
        sp8[0x30] = 0;
        *(s32 *)(sp8 + 0x48) = 0;
        *(s32 *)(sp8 + 0x14) = 0;
        sp8[0x31] = 0;
        *(s32 *)(sp8 + 0x4C) = 0;
        *(s32 *)(sp8 + 0x18) = 0;
        sp8[0x32] = 0;
        *(s32 *)(sp8 + 0x50) = 0;
        *(s32 *)(sp8 + 0x1C) = 0;
        sp8[0x33] = 0;
        *(s32 *)(sp8 + 0x54) = 0;
        *(s32 *)(sp8 + 0x20) = 0;
        sp8[0x34] = 0;
        *(s32 *)(sp8 + 0x58) = 0;
        *(s32 *)(sp8 + 0x24) = 0;
        sp8[0x35] = 0;
        *(s32 *)(sp8 + 0x5C) = 0;
        *(s32 *)(sp8 + 0x28) = 0;
        sp8[0x36] = 0;
        *(s32 *)(sp8 + 0x60) = 0;
        *(s32 *)(sp8 + 0x2C) = 0;
        sp8[0x37] = 0;
        *(s32 *)(sp8 + 0x64) = 0;
        fn_80107B54(entry, buf, entry[0x10D]);
    }
    unit = 0;
    {
        u8 id = *(u8 *)((u8 *)obj + 0x3C);
        if (id != 0) {
            if (id != 0) {
                unit = (u8 *)lbl_802B14E4 + (id - 1) * 0x280;
            }
        } else if (!(entry[0x10C] & 1) && *(u32 *)sp8 != 0) {
            unit = fn_80016BDC(*(void **)sp8);
            if (unit != 0) {
                *(u8 *)((u8 *)obj + 0x3C) = *(u8 *)((u8 *)unit + 0x198);
            }
        }
    }
    if (unit != 0 && (*(u32 *)((u8 *)unit + 0x1A0) & 0x9D)) {
        unit = 0;
    }
    *(void **)(entry + 4) = unit;
    if (unit != 0) {
        src = fn_80107D64(*(void **)(entry + 4), entry + 0xA, entry + 0xB, 1, count, base);
        dst = entry + 0xC;
        if (src != 0) {
        copy2:
            t = *src;
            if (t == 0x10) {
                goto copy2_done;
            }
            *dst = t;
            dst += 1;
            src += 1;
            goto copy2;
        copy2_done:
            ;
        }
        *dst = 0x10;
    }
after_sw:
    if (*(void **)(entry + 4) != 0) {
        fn_8003816C(*(void **)(entry + 4), entry[0xA], entry[0xB]);
    }
    if (*(void **)(entry + 4) != 0) {
        fn_8004F5EC(*(void **)(entry + 4), 0);
    }
    arg0[0x62] = (u8)(arg0[0x62] + 1);
}
#pragma use_lmw_stmw reset

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
s32 fn_80107874(void *arg0, void *arg1) {
    void fn_800056CC(const char *, ...);
    void *fn_8000D2BC(void *);
    s32 fn_80015680(void *);
    void fn_8001B894(u32 *);
    s32 fn_8001B940(u32 *);
    void fn_80107B54(u32 *, void *, u8);
    void *fn_80234198(void *, void *);
    extern u8 lbl_802738F8[];
    extern u8 lbl_802CA264[];
    extern s32 lbl_802CA518[];
    u32 spC;
    u32 sp8;
    u8 sp10[0x68];
    s32 a;
    s32 r30v;
    s32 b;
    s32 n;
    s32 count;
    u8 flags;
    void *self;
    void *out;
    s32 i;

    self = arg0;
    out = arg1;
    count = 0;
    flags = 0;
    *(s32 *)(sp10 + 0x10) = 0; sp10[0x30] = 0; *(s32 *)(sp10 + 0x48) = 0;
    *(s32 *)(sp10 + 0x14) = 0; sp10[0x31] = 0; *(s32 *)(sp10 + 0x4C) = 0;
    *(s32 *)(sp10 + 0x18) = 0; sp10[0x32] = 0; *(s32 *)(sp10 + 0x50) = 0;
    *(s32 *)(sp10 + 0x1C) = 0; sp10[0x33] = 0; *(s32 *)(sp10 + 0x54) = 0;
    *(s32 *)(sp10 + 0x20) = 0; sp10[0x34] = 0; *(s32 *)(sp10 + 0x58) = 0;
    *(s32 *)(sp10 + 0x24) = 0; sp10[0x35] = 0; *(s32 *)(sp10 + 0x5C) = 0;
    *(s32 *)(sp10 + 0x28) = 0; sp10[0x36] = 0; *(s32 *)(sp10 + 0x60) = 0;
    *(s32 *)(sp10 + 0x2C) = 0; sp10[0x37] = 0; *(s32 *)(sp10 + 0x64) = 0;
    if (fn_80234198(self, lbl_802738F8 + 0x58) != 0) {
        flags |= 1;
    }
    if (fn_80015680(lbl_802CA264) == 0 && fn_80015680(lbl_802CA264 + 0x3C) == 0) {
        flags |= 2;
    }
    sp8 = (u32)fn_8000D2BC(self);
    if (sp8 == 0) {
        spC = 0;
    } else {
        r30v = fn_8001B940(&sp8);
        switch ((u8)fn_8001B940(&sp8)) {
        case 2:
            a = 1;
            b = 0;
            break;
        case 3:
            a = fn_8001B940(&sp8);
            b = fn_8001B940(&sp8);
            fn_8001B894(&sp8);
            break;
        case 4:
            a = fn_8001B940(&sp8);
            b = fn_8001B940(&sp8);
            break;
        }
        sp8 = (sp8 + 3) & ~3;
        spC = sp8;
    }
    n = (u8)r30v;
    r30v = (s32)lbl_802CA518;
    a = (u8)a;
    for (i = 0; i < n; i++) {
        *(s32 *)((u8 *)out + 4) = 0;
        ((u8 *)out)[0xC] = 0x10;
        ((u8 *)out)[0x10D] = 0;
        *(u32 *)out = spC;
        ((u8 *)out)[0x10C] = flags;
        ((u8 *)out)[0x10D] = (u8)b;
        fn_80107B54(&spC, sp10, ((u8 *)out)[0x10D]);
        if (a == 0) {
            s8 x = sp10[0xB];
            s8 y = sp10[0xC];
            u8 *map = (u8 *)lbl_802CA518 + x + (y << 6);
            if (map[0xD] != 0 || map[0x300D] != 0) {
                fn_800056CC((const char *)(lbl_802738F8 + 0x61), x, y, *(void **)sp10);
                continue;
            }
        }
        if ((s8)sp10[0xB] < lbl_802CA518[0] && (s8)sp10[0xC] < ((s32 *)r30v)[1]
            && (s8)sp10[0xD] < lbl_802CA518[0] && (s8)sp10[0xE] < ((s32 *)r30v)[1]) {
            count += 1;
            *(s32 *)((u8 *)out + 4) = 0;
            ((u8 *)out)[8] = sp10[0xB];
            ((u8 *)out)[9] = sp10[0xC];
            ((u8 *)out)[0xA] = sp10[0xD];
            ((u8 *)out)[0xB] = sp10[0xE];
            out = (u8 *)out + 0x110;
        }
    }
    return count;
}
#pragma use_lmw_stmw on
void fn_80107B54(u32 *arg0, u32 *arg1, u8 arg2) {
    s32 fn_8001B894(u32 *);
    u8 fn_8001B940(u32 *);
    void fn_800056CC(const char *, ...);
    extern u8 lbl_802738F8[];
    u32 *var_r27;
    u32 *var_r28;
    u8 var_r29;
    s32 j;
    u32 *q;
    s32 i;
    s32 temp;
    s32 off;

    var_r27 = arg0;
    var_r28 = arg1;
    var_r29 = arg2;
    var_r28[0] = fn_8001B894(var_r27);
    var_r28[1] = fn_8001B894(var_r27);
    fn_8001B894(var_r27);
    j = 0;
    q = var_r28;
    do {
        temp = fn_8001B894(var_r27);
        j += 1;
        *(u32 *)((u8 *)q + 0x10) = temp;
        q += 1;
    } while (j < 8);
    q = 0;
    j = (s32)var_r28;
    do {
        temp = fn_8001B894(var_r27);
        q = (u32 *)((s32)q + 1);
        *(u32 *)((u8 *)j + 0x48) = temp;
        j = j + 4;
    } while ((s32)q < 5);
    fn_8001B940(var_r27);
    fn_8001B940(var_r27);
    fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x5C] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x5D] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x5E] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x5F] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x60] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x61] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x62] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x63] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x64] = fn_8001B940(var_r27);
    *(u32 *)((u8 *)var_r28 + 0x38) = fn_8001B894(var_r27);
    *(u32 *)((u8 *)var_r28 + 0x3C) = fn_8001B894(var_r27);
    *(u32 *)((u8 *)var_r28 + 0x40) = fn_8001B894(var_r27);
    *(u32 *)((u8 *)var_r28 + 0x44) = fn_8001B894(var_r27);
    ((u8 *)var_r28)[0x65] = 0;
    ((u8 *)var_r28)[0xB] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0xC] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0xD] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0xE] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0xA] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x9] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x8] = fn_8001B940(var_r27);
    ((u8 *)var_r28)[0x66] = fn_8001B940(var_r27);
    j = 0;
    do {
        temp = fn_8001B940(var_r27);
        off = j + 0x30;
        j += 1;
        ((u8 *)var_r28)[off] = temp;
    } while (j < 8);
    *var_r27 = (*var_r27 + 3) & ~3;
    ((u8 *)var_r28)[0x67] = var_r29;
    fn_800056CC((const char *)(lbl_802738F8 + 0x9A),
                var_r28[0],
                var_r28[1],
                *(s8 *)((u8 *)var_r28 + 0xD),
                *(s8 *)((u8 *)var_r28 + 0xE));
}

s32 fn_80107D64(void *arg0, u8 *arg1, u8 *arg2, u8 arg3, s32 arg4, void *arg5) {
    void *fn_80040844(void);
    u8 fn_8004434C(void *, s32, s32);
    u8 fn_80040B1C(void *, s32, s32);
    void fn_800AAC64(void *);
    void *fn_80019DBC(u8);
    void fn_800056A0(s32);
    void fn_8001FC24(void *);
    s32 fn_8001FC40(void *, s8, s8);
    extern u8 lbl_802CA518[];
    extern u16 lbl_802B14E4[];

    u8 *yp;
    s32 x;
    s32 y;
    u8 terrain;
    s32 cost;
    s32 ring;
    s32 bestCost;
    s32 bestX;
    s32 bestY;
    s32 i;
    void *unit;
    u8 *p;
    u8 *map;
    u8 *map1;
    s32 row;
    u8 id;
    void *tmp;
    u8 *cell;

    yp = arg2;
    x = (s8)*arg1;
    y = (s8)*arg2;
    if (fn_8004434C(fn_80040844(), x, y) != 0) {
        return 0;
    }
    terrain = fn_80040B1C(fn_80040844(), x, y);
    if (arg3 != 0 && arg0 != NULL) {
        fn_800AAC64(arg0);
    }
    map = lbl_802CA518;
    if (x < 0 || y < 0 || x >= *(s32 *)map || y >= *(s32 *)(map + 4)) {
        cost = -1;
    } else if ((u8)terrain != (u8)fn_80040B1C(fn_80040844(), x, y)) {
        cost = -1;
    } else {
        row = y << 6;
        tmp = fn_80019DBC(map[0x100D + x + row]);
        if (*(u8 *)(*(u8 **)((u8 *)tmp + 8) + 7) != 0) {
            cost = -1;
        } else {
            id = map[0xD + x + row];
            if (id != 0) {
                unit = (u8 *)lbl_802B14E4 + ((id - 1) * 0x280);
            } else {
                unit = NULL;
            }
            if (arg0 != NULL && unit == arg0) {
                cost = 0;
            } else if (unit != NULL) {
                cost = -1;
            } else if (map[0x300D + x + row] != 0) {
                cost = -1;
            } else if (arg3 != 0) {
                cost = (*(s16 **)(map + 0x14190))[x + row];
            } else {
                cost = 0;
            }
        }
    }
    if (cost < 0) {
        ring = 0;
        map = lbl_802CA518;
        map1 = map + 0x10000;
        do {
            bestX = -1;
            bestY = -1;
            bestCost = 0x2710;
            i = 0;
            ring += 1;
            y -= 1;
            while (i < ring) {
                p = arg5;
                if (x < 0 || y < 0 || x >= *(s32 *)map || y >= *(s32 *)(map + 4)) {
                    cost = -1;
                } else if ((u8)terrain != (u8)fn_80040B1C(fn_80040844(), x, y)) {
                    cost = -1;
                } else {
                    if (arg5 != NULL && arg4 > 0) {
                        s32 ctr = arg4;
                        do {
                            if ((s8)p[0xA] == x && (s8)p[0xB] == y) {
                                cost = -1;
                                goto arm1_done;
                            }
                            p += 0x110;
                        } while (--ctr != 0);
                    }
                    {
                        s32 xx = (s8)x;
                        s32 yy = (s8)y << 6;
                        cell = map + xx + yy;
                        tmp = fn_80019DBC(cell[0x100D]);
                        if (*(u8 *)(*(u8 **)((u8 *)tmp + 8) + 7) != 0) {
                            cost = -1;
                        } else {
                            id = cell[0xD];
                            if (id != 0) {
                                unit = (u8 *)lbl_802B14E4 + ((id - 1) * 0x280);
                            } else {
                                unit = NULL;
                            }
                            if (arg0 != NULL && unit == arg0) {
                                cost = 0;
                            } else if (unit != NULL) {
                                cost = -1;
                            } else if (cell[0x300D] != 0) {
                                cost = -1;
                            } else if (arg3 != 0) {
                                cost = (*(s16 **)(map1 + 0x4190))[xx + yy];
                            } else {
                                cost = 0;
                            }
                        }
                    }
                }
            arm1_done:
                if (cost >= 0 && cost < bestCost) {
                    bestCost = cost;
                    bestX = x;
                    bestY = y;
                }
                i += 1;
                x -= 1;
                y += 1;
            }
            i = 0;
            while (i < ring) {
                p = arg5;
                if (x < 0 || y < 0 || x >= *(s32 *)map || y >= *(s32 *)(map + 4)) {
                    cost = -1;
                } else if ((u8)terrain != (u8)fn_80040B1C(fn_80040844(), x, y)) {
                    cost = -1;
                } else {
                    if (arg5 != NULL && arg4 > 0) {
                        s32 ctr = arg4;
                        do {
                            if ((s8)p[0xA] == x && (s8)p[0xB] == y) {
                                cost = -1;
                                goto arm2_done;
                            }
                            p += 0x110;
                        } while (--ctr != 0);
                    }
                    {
                        s32 xx = (s8)x;
                        s32 yy = (s8)y << 6;
                        cell = map + xx + yy;
                        tmp = fn_80019DBC(cell[0x100D]);
                        if (*(u8 *)(*(u8 **)((u8 *)tmp + 8) + 7) != 0) {
                            cost = -1;
                        } else {
                            id = cell[0xD];
                            if (id != 0) {
                                unit = (u8 *)lbl_802B14E4 + ((id - 1) * 0x280);
                            } else {
                                unit = NULL;
                            }
                            if (arg0 != NULL && unit == arg0) {
                                cost = 0;
                            } else if (unit != NULL) {
                                cost = -1;
                            } else if (cell[0x300D] != 0) {
                                cost = -1;
                            } else if (arg3 != 0) {
                                cost = (*(s16 **)(map1 + 0x4190))[xx + yy];
                            } else {
                                cost = 0;
                            }
                        }
                    }
                }
            arm2_done:
                if (cost >= 0 && cost < bestCost) {
                    bestCost = cost;
                    bestX = x;
                    bestY = y;
                }
                i += 1;
                x += 1;
                y += 1;
            }
            i = 0;
            while (i < ring) {
                p = arg5;
                if (x < 0 || y < 0 || x >= *(s32 *)map || y >= *(s32 *)(map + 4)) {
                    cost = -1;
                } else if ((u8)terrain != (u8)fn_80040B1C(fn_80040844(), x, y)) {
                    cost = -1;
                } else {
                    if (arg5 != NULL && arg4 > 0) {
                        s32 ctr = arg4;
                        do {
                            if ((s8)p[0xA] == x && (s8)p[0xB] == y) {
                                cost = -1;
                                goto arm3_done;
                            }
                            p += 0x110;
                        } while (--ctr != 0);
                    }
                    {
                        s32 xx = (s8)x;
                        s32 yy = (s8)y << 6;
                        cell = map + xx + yy;
                        tmp = fn_80019DBC(cell[0x100D]);
                        if (*(u8 *)(*(u8 **)((u8 *)tmp + 8) + 7) != 0) {
                            cost = -1;
                        } else {
                            id = cell[0xD];
                            if (id != 0) {
                                unit = (u8 *)lbl_802B14E4 + ((id - 1) * 0x280);
                            } else {
                                unit = NULL;
                            }
                            if (arg0 != NULL && unit == arg0) {
                                cost = 0;
                            } else if (unit != NULL) {
                                cost = -1;
                            } else if (cell[0x300D] != 0) {
                                cost = -1;
                            } else if (arg3 != 0) {
                                cost = (*(s16 **)(map1 + 0x4190))[xx + yy];
                            } else {
                                cost = 0;
                            }
                        }
                    }
                }
            arm3_done:
                if (cost >= 0 && cost < bestCost) {
                    bestCost = cost;
                    bestX = x;
                    bestY = y;
                }
                i += 1;
                x += 1;
                y -= 1;
            }
            i = 0;
            while (i < ring) {
                p = arg5;
                if (x < 0 || y < 0 || x >= *(s32 *)map || y >= *(s32 *)(map + 4)) {
                    cost = -1;
                } else if ((u8)terrain != (u8)fn_80040B1C(fn_80040844(), x, y)) {
                    cost = -1;
                } else {
                    if (arg5 != NULL && arg4 > 0) {
                        s32 ctr = arg4;
                        do {
                            if ((s8)p[0xA] == x && (s8)p[0xB] == y) {
                                cost = -1;
                                goto arm4_done;
                            }
                            p += 0x110;
                        } while (--ctr != 0);
                    }
                    {
                        s32 xx = (s8)x;
                        s32 yy = (s8)y << 6;
                        cell = map + xx + yy;
                        tmp = fn_80019DBC(cell[0x100D]);
                        if (*(u8 *)(*(u8 **)((u8 *)tmp + 8) + 7) != 0) {
                            cost = -1;
                        } else {
                            id = cell[0xD];
                            if (id != 0) {
                                unit = (u8 *)lbl_802B14E4 + ((id - 1) * 0x280);
                            } else {
                                unit = NULL;
                            }
                            if (arg0 != NULL && unit == arg0) {
                                cost = 0;
                            } else if (unit != NULL) {
                                cost = -1;
                            } else if (cell[0x300D] != 0) {
                                cost = -1;
                            } else if (arg3 != 0) {
                                cost = (*(s16 **)(map1 + 0x4190))[xx + yy];
                            } else {
                                cost = 0;
                            }
                        }
                    }
                }
            arm4_done:
                if (cost >= 0 && cost < bestCost) {
                    bestCost = cost;
                    bestX = x;
                    bestY = y;
                }
                i += 1;
                x -= 1;
                y -= 1;
            }
            if (bestCost != 0x2710) {
                x = bestX;
                y = bestY;
                goto found;
            }
        } while (ring < 0x10);
        fn_800056A0(0);
        fn_8001FC24(lbl_802CA518);
        return 0;
    }
found:
    if (arg3 == 0) {
        return 0;
    }
    *arg1 = (u8)x;
    *yp = (u8)y;
    if (x != (s8)*((u8 *)arg0 + 0x19E) || y != (s8)*((u8 *)arg0 + 0x19F)) {
        return fn_8001FC40(lbl_802CA518, (s8)x, (s8)y);
    }
    fn_8001FC24(lbl_802CA518);
    return 0;
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

#pragma cplusplus on
extern "C" void fn_80108718(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
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
    void fn_800AA1CC(void *);
    void *fn_80109180(s32, void *);
    extern f32 lbl_8036A130;
    f32 f;
    void *p;

    *(void **)((char *)arg0 + 0x34) = fn_80109180(*(s32 *)((char *)arg0 + 0x30), arg0);
    f = lbl_8036A130;
    p = *(void **)((char *)arg0 + 0x34);
    *(f32 *)((char *)p + 0x38) = f;
    p = *(void **)((char *)arg0 + 0x34);
    *(f32 *)((char *)p + 0x3C) = f;
    fn_800AA1CC(p);
}

void fn_80108FA8(void) {
    void *fn_8000D2BC(void);
    void fn_8005C8B4(s32);
    s32 i;
    void *entry;
    void *list;
    s8 *ptr;

    list = fn_8000D2BC();
    i = 0;
    entry = list;
    goto check;
loop:
    ptr = *(s8 **)((char *)entry + 0x14);
    if (*ptr != 1) {
    } else {
        fn_8005C8B4(*(s32 *)(ptr + 8));
    }
    entry = (char *)entry + 4;
    i += 1;
check:
    if (i < *(u8 *)((char *)list + 4)) {
        goto loop;
    }
}

void fn_80109020(u8 *arg0) {
    extern u8 lbl_8028F390[];
    extern void *lbl_803679D8;
    extern void *lbl_803679DC;
    void fn_8000BF00(void *);
    void fn_8000BF6C(void *, void *);
    void fn_8000C60C(void *);
    void *fn_8011D484(void);
    void fn_8010913C(void);
    void *var_r3;

    if (arg0 == NULL) {
        fn_8000BF00(lbl_8028F390);
        return;
    }
    if ((s8)arg0[0] == 0x54 && (s8)arg0[1] == 0x42 && (s8)arg0[2] == 0x47 && (s8)arg0[3] == 0) {
        var_r3 = fn_8011D484();
    } else {
        lbl_803679DC = NULL;
        lbl_803679D8 = arg0;
        fn_8000BF6C(lbl_8028F390, fn_8010913C);
        var_r3 = lbl_803679DC;
    }
    if (var_r3 != NULL) {
        fn_8000C60C(var_r3);
    }
}

s32 fn_801090C0(s8 *arg0)
{
    extern s32 lbl_803679DC;
    extern s8 *lbl_803679D8;
    extern u8 lbl_8028F390[];
    void fn_8011D484(s8 *);
    void fn_8010913C(void);
    void fn_8000BF6C(void *, void (*)(void));
    void *tbl;

    if (arg0[0] == 0x54 && arg0[1] == 0x42 && arg0[2] == 0x47 && arg0[3] == 0) {
        fn_8011D484(arg0);
    } else {
        lbl_803679DC = 0;
        tbl = lbl_8028F390;
        lbl_803679D8 = arg0;
        fn_8000BF6C(tbl, fn_8010913C);
    }
    return lbl_803679DC;
}

void fn_8010913C(void *arg0) {
    s32 fn_802342B8(s32, s32);
    extern s32 lbl_803679D8;
    extern void *lbl_803679DC;
    if (fn_802342B8(*M2C_FIELD(arg0, s32 **, 0x30), lbl_803679D8) == 0) {
        lbl_803679DC = arg0;
    }
}

void *fn_80109180(s32 arg0, u32 arg1) {
    void *fn_8000CAF0(void *, u32);
    void fn_80109F88(void *, s32);
    extern u8 lbl_8028F390[];
    void *tbl;
    void *result;

    tbl = lbl_8028F390;
    if (arg1 == 0U) {
        arg1 = 3U;
    }
    result = fn_8000CAF0(tbl, arg1);
    fn_80109F88(result, arg0);
    return result;
}

#pragma cplusplus on
extern "C" void fn_801091D8(void *arg0) {
    struct Obj {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    s32 i;
    u8 *list;
    u8 *entry;

    i = 0;
    list = *(u8 **)((u8 *)arg0 + 0x30);
    entry = list;
    goto check;
loop:
    ((Obj *)*(void **)(entry + 0x14))->v2();
    entry += 4;
    i += 1;
check:
    if (i < list[4]) {
        goto loop;
    }
}
#pragma cplusplus reset
void fn_80009B80(s8 arg0);
void fn_80009B8C(s8 arg0);
void fn_80009C20(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8);
void fn_80109244(struct Arg0 *arg0) {
    struct UnkCycler *outer;
    struct Arg0 *a0 = arg0;
    s32 i;
    s32 temp_r31;
    f32 f1_2;

    a0->unk3C = a0->unk3C + a0->unk38;
    if (a0->unk3C >= a0->unk34) {
        a0->unk3C = a0->unk3C - a0->unk34;
    }
    fn_8000A258();
    outer = a0->unk30;
    fn_80009C20(outer, a0->unk40, a0->unk44, a0->unk48 + (f32)outer->unk6, a0->unk4C, a0->unk50, a0->unk54, a0->unk58, arg0->unk5C);
    fn_80009B8C(a0->unk60);
    fn_80009B80(a0->unk61);
    fn_8000A248();
    if (outer->unk5 == 0) {
        i = outer->unk4 - 1;
        do {
            outer->unk14[i]->v1(0xFF);
            i--;
        } while (i >= 0);
    } else if (outer->unk5 == 2) {
        temp_r31 = (s32)a0->unk3C;
        f1_2 = lbl_8036A134 * (a0->unk3C - (f32)temp_r31);
        if (f1_2 != lbl_8036A130) {
            outer->unk14[(temp_r31 + 1) % outer->unk4]->v1((s32)f1_2);
        }
        outer->unk14[temp_r31]->v1(0xFF);
    } else if (outer->unk5 == 1) {
        outer->unk14[(s32)a0->unk3C]->v1(0xFF);
    }
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_80009B80(0x80);
    fn_8000A248();
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
    void *p;
    u32 byte;

    p = *(void **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)p + 8) = farg0;
    farg0 = lbl_8036A140;
    p = *(void **)((u8 *)arg0 + 0x30);
    byte = *(u8 *)((u8 *)p + 4);
    *(f32 *)((u8 *)arg0 + 0x34) = (f32)byte;
    p = *(void **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)arg0 + 0x38) = *(f32 *)((u8 *)arg0 + 0x34) / (farg0 * *(f32 *)((u8 *)p + 8));
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
    void *temp_r4;
    u8 *temp_r6;
    s32 kind;
    f32 t;
    f32 scale;

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
    t = *(f32 *)((u8 *)arg0 + 0x4C);
    *(f32 *)((u8 *)arg0 + 0x4C) = t * (scale = lbl_8036A14C);
    t = *(f32 *)((u8 *)arg0 + 0x50);
    *(f32 *)((u8 *)arg0 + 0x50) = t * scale;
}

#pragma cplusplus on
extern "C" void fn_80109F88(void *arg0, void *arg1) {
    void *fn_8000D2BC(void *);
    void fn_801FDA70(void *);
    void fn_801FCC68(void *);
    void fn_801FC6E0(void *, f32);
    void fn_801FC634(void *, f32);
    extern f32 lbl_8036A118;
    extern f32 lbl_8036A130;
    extern f32 lbl_8036A140;
    extern f32 lbl_8036A14C;
    extern f32 lbl_8036A150;
    extern u32 lbl_8028F594[];
    extern u32 lbl_8028F5E4[];
    extern u32 lbl_8028FEEC[];
    extern u32 lbl_8028F5BC[];
    extern u32 lbl_8028F5A8[];
    extern u32 lbl_8028F3F8[];
    extern u32 lbl_8028F5D0[];
    struct Obj {
        u8 pad[4];
        virtual void v0();
    };
    f32 one;
    f32 zerof;
    s32 var_r31;
    void *temp_r30;
    void *var_r29;
    u8 *temp_r3;
    u8 temp_r0;
    u8 *temp_r6;
    f32 scale;
    f32 *p;
    u8 temp_r0_3;
    u8 temp_r4;
    void *temp_r3_3;

    one = lbl_8036A130;
    zerof = lbl_8036A118;
    *(f32 *)((u8 *)arg0 + 0x48) = one;
    *(f32 *)((u8 *)arg0 + 0x44) = one;
    *(f32 *)((u8 *)arg0 + 0x40) = one;
    *(f32 *)((u8 *)arg0 + 0x50) = one;
    *(f32 *)((u8 *)arg0 + 0x4C) = one;
    *(f32 *)((u8 *)arg0 + 0x58) = zerof;
    *(f32 *)((u8 *)arg0 + 0x54) = zerof;
    *(f32 *)((u8 *)arg0 + 0x5C) = one;
    *((u8 *)arg0 + 0x60) = 0xFF;
    *((u8 *)arg0 + 0x61) = 0x80;
    *(void **)((u8 *)arg0 + 0x30) = fn_8000D2BC(arg1);
    var_r31 = 0;
    temp_r30 = *(void **)((u8 *)arg0 + 0x30);
    var_r29 = temp_r30;
    while (var_r31 < (s32)*((u8 *)temp_r30 + 4)) {
        temp_r3 = (u8 *)*(void **)((u8 *)var_r29 + 0x14);
        temp_r0 = temp_r3[0];
        switch ((s32)temp_r0) {
        case 1:
            if (temp_r3 != NULL) {
                *(void **)(temp_r3 + 4) = lbl_8028F594;
                *(void **)(temp_r3 + 4) = lbl_8028F5E4;
                temp_r3[0] = temp_r0;
                temp_r3[1] = 0x24;
            }
            break;
        case 2:
            if (temp_r3 != NULL) {
                *(void **)(temp_r3 + 4) = lbl_8028F594;
                *(void **)(temp_r3 + 4) = lbl_8028FEEC;
                temp_r3[0] = temp_r0;
                temp_r3[1] = 0x28;
            }
            break;
        case 3:
            if (temp_r3 != NULL) {
                *(void **)(temp_r3 + 4) = lbl_8028F594;
                *(void **)(temp_r3 + 4) = lbl_8028F5BC;
                temp_r3[0] = temp_r0;
                temp_r3[1] = 0x18;
            }
            break;
        case 4:
            if (temp_r3 != NULL) {
                *(void **)(temp_r3 + 4) = lbl_8028F594;
                *(void **)(temp_r3 + 4) = lbl_8028F5A8;
                temp_r3[0] = temp_r0;
                temp_r3[1] = 0x14;
            }
            break;
        case 5:
            if (temp_r3 != NULL) {
                *(void **)(temp_r3 + 4) = lbl_8028F594;
                *(void **)(temp_r3 + 4) = lbl_8028F3F8;
                temp_r3[0] = temp_r0;
                temp_r3[1] = 0x20;
            }
            break;
        case 6:
            if (temp_r3 != NULL) {
                *(void **)(temp_r3 + 4) = lbl_8028F594;
                *(void **)(temp_r3 + 4) = lbl_8028F5E4;
                *(void **)(temp_r3 + 4) = lbl_8028F5D0;
                temp_r3[0] = temp_r0;
                temp_r3[1] = 0x34;
            }
            break;
        }
        ((Obj *)*(void **)((u8 *)var_r29 + 0x14))->v0();
        var_r29 = (u8 *)var_r29 + 4;
        var_r31 += 1;
    }
    switch ((s32)*((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0xE)) {
    case 1:
        fn_801FDA70(arg0);
        break;
    case 2:
        fn_801FCC68(arg0);
        break;
    case 3:
        fn_801FC6E0(arg0, lbl_8036A150);
        break;
    case 4:
        fn_801FC634(arg0, lbl_8036A150);
        break;
    }
    temp_r3_3 = *(void **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)arg0 + 0x50) = lbl_8036A130;
    *(f32 *)((u8 *)arg0 + 0x4C) = lbl_8036A130;
    temp_r6 = *(u8 **)((u8 *)temp_r3_3 + 0x14);
    if ((s32)temp_r6[0] != 1) {
    } else {
        *(f32 *)((u8 *)arg0 + 0x4C) = (f32)(s32)(*(u16 *)(temp_r6 + 0x20) - *(u16 *)(temp_r6 + 0x1C));
        *(f32 *)((u8 *)arg0 + 0x50) = (f32)(s32)(*(u16 *)(temp_r6 + 0x22) - *(u16 *)(temp_r6 + 0x1E));
    }
    scale = lbl_8036A14C;
    p = (f32 *)((u8 *)arg0 + 0x4C);
    *p = *p * scale;
    p = (f32 *)((u8 *)arg0 + 0x50);
    *p = *p * scale;
    temp_r0_3 = *((u8 *)temp_r3_3 + 0xC);
    if (temp_r0_3 != 0 && temp_r0_3 != 0xFF) {
        *((u8 *)arg0 + 0x61) = (u8)((temp_r0_3 >> 1) + 1);
    }
    *(f32 *)((u8 *)arg0 + 0x3C) = lbl_8036A130;
    temp_r3_3 = *(void **)((u8 *)arg0 + 0x30);
    temp_r4 = *((u8 *)temp_r3_3 + 4);
    if (temp_r4 == 1 || lbl_8036A130 == *(f32 *)((u8 *)temp_r3_3 + 8)) {
        *(f32 *)((u8 *)arg0 + 0x34) = lbl_8036A118;
        *(f32 *)((u8 *)arg0 + 0x38) = lbl_8036A130;
    } else {
        *(f32 *)((u8 *)arg0 + 0x34) = (f32)(u32)temp_r4;
        *(f32 *)((u8 *)arg0 + 0x38) = *(f32 *)((u8 *)arg0 + 0x34) / (lbl_8036A140 * *(f32 *)((u8 *)temp_r3_3 + 8));
    }
}
#pragma cplusplus off

extern u16 lbl_80312060[32];
void fn_8010A4D4(void *arg0) {
    char *p;
    s8 dest;
    s32 i;

    p = arg0;
    dest = 0;
    i = 0;
    while (i < *(s16 *)((char *)arg0 + 8)) {
        if (*(u8 *)(p + 0xE) != 0) {
        } else {
            s32 off = dest * 6;
            u8 *out;
            u8 c;
            s16 b;
            s16 a;
            c = *(u8 *)(p + 0x10);
            b = *(s16 *)(p + 0xC);
            a = *(s16 *)(p + 0xA);
            dest = (s8)(dest + 1);
            out = (u8 *)lbl_80312060 + off;
            *(s16 *)(out + 0) = a;
            *(s16 *)(out + 2) = b;
            *(s16 *)(out + 4) = c;
        }
        p += 8;
        i++;
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

#pragma use_lmw_stmw on
void fn_8010A704(void *arg0, u8 arg1) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_80007770(f32, f32, f32, f32);
    void fn_80007790(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009EB0(s32, u8, u8, s32);
    void fn_80009F90(s32, u8, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    extern s32 lbl_8036C4D8;
    extern s32 lbl_8036C4DC;
    extern s32 lbl_8036C4E0;
    extern s32 lbl_8036C4E4;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 *p;
    u8 alpha;
    s16 a;
    s16 b;

    fn_8000A258();
    if (*(u8 *)((u8 *)arg0 + 0x10) & 2) {
        fn_80009EB0(*(s32 *)((u8 *)arg0 + 0xC), *(u8 *)((u8 *)arg0 + 0x12), *(u8 *)((u8 *)arg0 + 0x11), 0x11);
    } else {
        fn_80009F90(*(s32 *)((u8 *)arg0 + 0xC), *(u8 *)((u8 *)arg0 + 0x12), 0x11);
    }
    fn_8000A248();
    a = *(s16 *)((u8 *)arg0 + 0x18);
    b = *(s16 *)((u8 *)arg0 + 0x14);
    if (a == b) {
        *(s16 *)((u8 *)arg0 + 0x18) = (s16)(b + *(u16 *)((u8 *)arg0 + 0x20) - *(u16 *)((u8 *)arg0 + 0x1C));
    }
    a = *(s16 *)((u8 *)arg0 + 0x1A);
    b = *(s16 *)((u8 *)arg0 + 0x16);
    if (a == b) {
        *(s16 *)((u8 *)arg0 + 0x1A) = (s16)(b + *(u16 *)((u8 *)arg0 + 0x22) - *(u16 *)((u8 *)arg0 + 0x1E));
    }
    alpha = arg1;
    if (arg1 == 0xFF) {
        alpha = *(u8 *)((u8 *)arg0 + 0x13);
    }
    sp24 = lbl_8036C4D8;
    sp20 = lbl_8036C4DC;
    sp1C = lbl_8036C4E0;
    sp18 = lbl_8036C4E4;
    p = (u8 *)&sp24;
    p[0] = ((u8 *)arg0)[0x24];
    p[1] = ((u8 *)arg0)[0x25];
    p[2] = ((u8 *)arg0)[0x26];
    p[3] = (u8)((alpha * ((u8 *)arg0)[0x27]) >> 8);
    p = (u8 *)&sp20;
    p[0] = ((u8 *)arg0)[0x28];
    p[1] = ((u8 *)arg0)[0x29];
    p[2] = ((u8 *)arg0)[0x2A];
    p[3] = (u8)((alpha * ((u8 *)arg0)[0x2B]) >> 8);
    p = (u8 *)&sp1C;
    p[0] = ((u8 *)arg0)[0x2C];
    p[1] = ((u8 *)arg0)[0x2D];
    p[2] = ((u8 *)arg0)[0x2E];
    p[3] = (u8)((alpha * ((u8 *)arg0)[0x2F]) >> 8);
    p = (u8 *)&sp18;
    p[0] = ((u8 *)arg0)[0x30];
    p[1] = ((u8 *)arg0)[0x31];
    p[2] = ((u8 *)arg0)[0x32];
    p[3] = (u8)((alpha * ((u8 *)arg0)[0x33]) >> 8);
    fn_80007898(3);
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
    fn_800075D8();
    sp8 = sp18;
    spC = sp1C;
    sp10 = sp20;
    sp14 = sp24;
    fn_800072B0(&sp14, &sp10, &spC, &sp8);
    fn_80007884();
}
#pragma use_lmw_stmw reset

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

void fn_8010ABC0(void *arg0)
{
    void fn_8006EEFC(void *, void *);
    void fn_8005C4C4(void *, s32);
    u8 fn_8006EBA4(void *, s32);

    u8 *obj;
    u8 flags;

    obj = (u8 *)arg0;

    if (!(obj[0x10] & 0x80)) {
        fn_8006EEFC(obj + 0x0C, *(void **)(obj + 0x08));

        if (obj[0x10] & 1) {
            fn_8005C4C4(*(void **)(obj + 0x08), 4);
        }

        if ((u8)fn_8006EBA4(*(void **)(obj + 0x0C), obj[0x12]) != 0) {
            flags = obj[0x10];
            obj[0x10] = flags | 2;
            obj[0x11] = 0;
        }

        obj[0x10] |= 0x80;
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

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
s32 fn_8010B01C(void *arg0, s8 arg1, s8 arg2) {
    void fn_80015320(s32, void *);
    s32 fn_8001DD54(void *, void *);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void **fn_80037BBC(void *, s32);
    u8 fn_8009339C(void *);
    void fn_800951D0(void *, s32);
    u8 fn_800F4D78(void *, void *, void **);
    u8 fn_800F7E9C(void *, s8, s8, void *);
    void fn_800FB96C(s32, s8, s8, void *, u8, u8, s8, s32, s32);
    void fn_800FDDBC(s8, s8, u8, u8, s32);
    u8 fn_80100FD0(s8, s8, s8, s8, u8);
    extern u8 lbl_802CA518[];
    extern u16 lbl_802B14E4[];

    struct Unit {
        u8 pad0[0x188];
        u32 unk188;
        u8 pad18C[4];
        void *unk190;
        u8 pad194[0xA];
        u8 unk19E;
        u8 unk19F;
        u32 unk1A0;
    };
    struct Item {
        u8 pad0[0x1D];
        u8 unk1D;
    };
    struct Result {
        u8 x;
        u8 y;
        u16 slot;
        struct Unit *unit;
        s32 score;
    } result;
    struct Result best;
    u8 flags[8];
    s32 pad;
    u8 *map;
    struct Unit *unit;
    s32 slot;
    void **item;
    s32 unitId;

    best.score = 0x80000000;
    best.unit = NULL;
    fn_80022DAC(lbl_802CA518, 5, -1);
    fn_80022FD8(lbl_802CA518, 5);
    map = lbl_802CA518;
    (*(s16 **)(map + 0x14190))[(s8)arg1 + ((s8)arg2 << 6)] = 0;

    slot = 0;
loop_slot:
    item = fn_80037BBC(arg0, slot);
    if (*item != NULL) {
        if (fn_8009339C(arg0) != 0) {
            result.slot = (u16)slot;
            fn_80015320(1, flags);
            unitId = 1;
            do {
                if ((u8)unitId != 0) {
                    unit = (struct Unit *)((u8 *)lbl_802B14E4 + (((u8)unitId - 1) * 0x280));
                } else {
                    unit = NULL;
                }
                if (unit->unk188 != 0) {
                    if (flags[((u8 *)unit->unk190)[8]] != 0) {
                        if (fn_800F4D78(arg0, unit, item) != 0) {
                            if ((unit->unk1A0 & 0x010000DC) == 0) {
                                u8 temp_r3_2 = unit->unk19E;
                                u8 var_r5 = 0;
                                u8 temp_r6 = unit->unk19F;
                                if (((s8)temp_r3_2 < (s8)map[8])
                                    || ((s32)((s8)map[0xA] - 1) < (s8)temp_r3_2)
                                    || ((s8)temp_r6 < (s8)map[9])
                                    || ((s32)((s8)map[0xB] - 1) < (s8)temp_r6)) {
                                    var_r5 = 1;
                                }
                                if (var_r5 == 0) {
                                    u8 var_r0;
                                    if (*item != NULL) {
                                        var_r0 = fn_8001DD54(*item, arg0);
                                    } else {
                                        var_r0 = 0;
                                    }
                                    if (fn_80100FD0(arg1, arg2, (s8)unit->unk19E, (s8)unit->unk19F, (u32)var_r0) != 0) {
                                        u8 var_r0_2;
                                        u8 var_r0_3;
                                        if (*item != NULL) {
                                            var_r0_2 = fn_8001DD54(*item, unit);
                                        } else {
                                            var_r0_2 = 0;
                                        }
                                        if (*item != NULL) {
                                            var_r0_3 = ((struct Item *)*item)->unk1D;
                                        } else {
                                            var_r0_3 = 0;
                                        }
                                        fn_800FDDBC((s8)unit->unk19E, (s8)unit->unk19F, var_r0_3, var_r0_2, 6);
                                        result.unit = unit;
                                        if (fn_800F7E9C(arg0, arg1, arg2, &result) != 0) {
                                            if (result.score > best.score) {
                                                best.x = result.x;
                                                best.score = result.score;
                                                best.y = result.y;
                                                best.slot = result.slot;
                                                best.unit = result.unit;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                ++unitId;
            } while (unitId <= 0x9F);
        }
        slot += 1;
        if (slot < 4) {
            goto loop_slot;
        }
    }

    if (best.unit != NULL) {
        fn_800951D0(arg0, best.slot);
        pad = 0;
        fn_800FB96C(0xF, (s8)best.x, (s8)best.y, best.unit,
                    best.unit->unk19E, best.unit->unk19F,
                    (s8)best.slot, 0, 0);
        return 1;
    }
    return 0;
}
u8 fn_8010B30C(void *arg0, s8 arg1, s16 arg2) {
    u8 fn_80015610(s32, s32);
    void fn_8001F9C4(u8 *, s8, s8, s8, s32);
    void fn_80022DAC(u8 *, s32, s32);
    void fn_80022FD8(u8 *, s32);
    u8 fn_8003863C(void *);
    void fn_800FB96C(s32, s8, s8, void *, u8, u8, s8, s32, s32);
    u8 fn_800FE84C(s8, s8);
    u8 fn_80105BC0(void *, u8);
    extern u8 lbl_802CA518[151280];
    extern u16 lbl_802B14E4[];
    extern s32 lbl_8036A158;
    extern s32 lbl_80273B30[];
    extern u8 lbl_8032B3C0[];

    s16 sp10;
    s32 sp8;
    u8 found;
    s32 *scan;
    s32 xMin;
    s32 yMin;
    s32 xMax;
    s32 yMax;
    s32 y;
    s32 x;
    s32 xShift;
    u8 *cell;
    void *unit;
    s32 *ent;
    s32 pri;
    s32 bestPri;
    s32 bestId;
    void *bestUnit;

    found = 0;
    sp10 = arg2;
    scan = &lbl_8036A158;
    goto scan_cmp;
scan_loop:
    if (fn_80105BC0((u8 *)arg0 + 0x1BC, (u8)*scan) != 0) {
        found = 1;
    } else {
        scan += 1;
        goto scan_cmp;
    }
    goto scan_done;
scan_cmp:
    if (*scan != -1) {
        goto scan_loop;
    }
scan_done:
    if (found == 0) {
        return 0;
    }

    fn_80022FD8(lbl_802CA518, 5);
    fn_80022DAC(lbl_802CA518, 0xB, -1);
    fn_8001F9C4(lbl_802CA518, arg1, (s8)sp10, 1, 0);

    bestPri = 0x7F;
    xMin = (s16)arg1 - 1;
    if (xMin < (s8)lbl_802CA518[8]) {
        xMin = (s8)lbl_802CA518[8];
    }
    yMin = sp10 - 1;
    if (yMin < (s8)lbl_802CA518[9]) {
        yMin = (s8)lbl_802CA518[9];
    }
    xMax = (s16)arg1 + 1;
    if (xMax > (s8)lbl_802CA518[0xA] - 1) {
        xMax = (s8)lbl_802CA518[0xA] - 1;
    }
    yMax = sp10 + 1;
    if (yMax > (s8)lbl_802CA518[0xB] - 1) {
        yMax = (s8)lbl_802CA518[0xB] - 1;
    }

    y = yMin;
    goto outer_cmp;
outer:
    x = xMin;
    xShift = (s8)y << 6;
    goto inner_cmp;
inner:
    if ((*(s16 **)(lbl_802CA518 + 0x14190))[(s8)x + xShift] >= 0) {
        cell = lbl_802CA518 + xShift + (s8)x;
        if ((s8)cell[0xE18E] == 0 && fn_800FE84C((s8)x, (s8)y) == 0) {
            if (cell[0xD] != 0) {
                if (cell[0xD] != 0) {
                    unit = (u8 *)lbl_802B14E4 + (cell[0xD] - 1) * 0x280;
                } else {
                    unit = NULL;
                }
                if (fn_80015610(*(s32 *)((u8 *)arg0 + 0x190), *(s32 *)((u8 *)unit + 0x190)) == 0) {
                    pri = 0;
                    ent = lbl_80273B30;
                    goto tab_cmp;
tab_loop:
                    if (fn_80105BC0((u8 *)arg0 + 0x1BC, (u8)ent[0]) == 0
                        || ((u8 (*)(void *, void *))ent[1])(arg0, unit) == 0) {
                        ent += 2;
                        pri += 1;
                        goto tab_cmp;
                    }
                    goto tab_found;
tab_cmp:
                    if ((u32)ent[1] != 0) {
                        goto tab_loop;
                    }
tab_found:
                    if ((s8)ent[0] >= 0) {
                        if ((s8)pri <= (s8)bestPri) {
                            if ((s8)pri != (s8)bestPri
                                || fn_8003863C(unit) >= fn_8003863C(bestUnit)) {
                                bestPri = pri;
                                bestId = (s8)ent[0];
                                bestUnit = unit;
                            }
                        }
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

    if ((s8)bestPri != 0x7F) {
        sp8 = 0;
        fn_800FB96C(0x12, arg1, (s8)sp10, bestUnit,
                    *(u8 *)((u8 *)bestUnit + 0x19E),
                    *(u8 *)((u8 *)bestUnit + 0x19F),
                    (s8)(bestId - 0x18), 0, sp8);
    }
    return lbl_8032B3C0[0x21C];
}
#pragma use_lmw_stmw reset

s32 fn_8010B60C(void *arg0, void *arg1) {
    u8 fn_80105BC0(void *, s32);
    if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x18) != 0) {
        return 0;
    }
    return *(u32 *)((u8 *)arg1 + 0x1A0) & 1;
}

#pragma use_lmw_stmw on
u8 fn_8010B658(void *arg0) {
    void fn_800FE2A0(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    u8 fn_80015610(s32, s32);
    void **fn_80037BD0(void *, s8);
    s32 fn_8010067C(s16, s16, void *);
    void fn_801014BC(void *, s32, s32, s32, s32, s32, s32, s32);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802CA518[151280];
    extern u16 lbl_802B14E4[];
    extern u8 fn_800FB5C8[];

    void *other;
    s8 found;
    s8 idx;
    u8 *map;
    u8 *map2;
    void *self;
    s32 xShift;
    u8 *row;
    s32 t;
    s32 bestDist;
    u8 bestCost;
    s16 bestX;
    s16 bestY;
    s32 y;
    s32 x;

    self = arg0;
    if ((lbl_8032B3C0[1] & 2) || (*(u32 *)((u8 *)self + 0x254) & 0x03000000)) {
        return 0;
    }
    map = lbl_802CA518;
    bestCost = 0xFF;
    bestDist = 0x7FFFFFFF;
    fn_800FE2A0(self, 5, *(s32 *)map * *(s32 *)(map + 4));
    map2 = lbl_802CA518;
    y = ((s8 *)map2)[9];
    goto outer_cmp;
outer:
    x = ((s8 *)map2)[8];
    xShift = (s8)y << 6;
    row = map2 + xShift;
    goto inner_cmp;
inner:
    t = (s8)x + xShift;
    if (((s16 *)(map2 + 0x610E))[t] >= 0) {
        other = row + (s8)x;
        if (*(s8 *)((u8 *)other + 0xE18E) == 0) {
            if (fn_800FE84C((s8)x, (s8)y) == 0) {
                u8 id = ((u8 *)other)[0xD];
                if (id != 0) {
                    if (id != 0) {
                        other = (void *)((s32)((u8 *)lbl_802B14E4 + (id - 1) * 0x280) + (0 & (s32)other));
                    } else {
                        other = (void *)(0 & (s32)other);
                    }
                    if (self != other && fn_80015610(*(s32 *)((u8 *)self + 0x190), *(s32 *)((u8 *)other + 0x190)) != 1) {
                        void *item;
                        u8 typ;
                        u8 sub;
                        s32 dist;
                        s16 cost;
                        found = -1;
                        idx = 4;
                        goto slot_cmp;
                    slot_loop:
                        item = *fn_80037BD0(other, idx);
                        if (item == NULL) {
                            goto slot_done;
                        }
                        if (item != NULL) {
                            typ = ((u8 *)item)[0x12];
                        } else {
                            typ = 0xC;
                        }
                        if (typ == 0xA) {
                            if (item != NULL) {
                                sub = ((u8 *)item)[0x14];
                            } else {
                                sub = 0xC;
                            }
                            if (sub == 0x81) {
                                found = idx;
                                goto slot_done;
                            }
                        }
                        idx += 1;
                    slot_cmp:
                        if (idx < 8) {
                            goto slot_loop;
                        }
                    slot_done:
                        if (found >= 0) {
                            dist = fn_8010067C((s16)x, (s16)y, fn_800FB5C8);
                            if (dist <= bestDist) {
                                u8 bc = bestCost;
                                cost = *(s16 *)((s32)*(s16 **)(map + 0x14190) + (t << 1));
                                if (cost < (s32)bc) {
                                    bestDist = dist;
                                    bestCost = (u8)cost;
                                    bestX = (s16)x;
                                    bestY = (s16)y;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    x += 1;
inner_cmp:
    if (x <= (s8)map2[0xA] - 1) {
        goto inner;
    }
    y += 1;
outer_cmp:
    if (y <= (s8)map2[0xB] - 1) {
        goto outer;
    }
    if ((u32)(bestDist - 0x7FFF0000) != 0xFFFFU) {
        s32 bx;
        s32 by;
        u8 *p;
        u8 tile;
        u8 v;
        bx = (s8)bestX;
        by = (s8)bestY;
        p = map + bx;
        v = ((u8 *)self)[0x198];
        p = (u8 *)((s32)p + (by << 6));
        tile = p[0xD];
        if (tile != v) {
            fn_801014BC(self, bestX, bestY, 1, 0xFFFF, 0, 0, -1);
        }
    }
    return lbl_8032B3C0[0x21C];
}
#pragma use_lmw_stmw reset
u8 fn_8010B8E4(void *arg0) {
    void fn_800FE2A0(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    void *fn_80019DBC(u8);
    u8 fn_80015610(s32, s32);
    s32 fn_8010067C(s16, s16, void *);
    void fn_801014BC(void *, s32, s32, s32, s32, s32, s32, s32);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802CA518[151280];
    extern u16 lbl_802B14E4[];
    extern u8 fn_800FB5C8[];

    void *self;
    s32 xShift;
    u8 *row;
    u8 *row2;
    s32 t;
    s32 bestDist;
    u8 bestCost;
    s16 bestX;
    s16 bestY;
    s32 y;
    s32 x;
    u8 *map;
    u8 *map2;
    void *other;

    self = arg0;
    if ((lbl_8032B3C0[1] & 2) || (*(u32 *)((u8 *)self + 0x254) & 0x03000000)) {
        return 0;
    }
    map = lbl_802CA518;
    bestCost = 0xFF;
    bestDist = 0x7FFFFFFF;
    fn_800FE2A0(self, 5, *(s32 *)map * *(s32 *)(map + 4));
    map2 = lbl_802CA518;
    y = ((s8 *)map2)[9];
    goto outer_cmp;
outer:
    x = ((s8 *)map2)[8];
    xShift = (s8)y << 6;
    row = map2 + xShift;
    row2 = map + xShift;
    goto inner_cmp;
inner:
    other = (void *)(s32)(s8)x;
    t = (s32)other + xShift;
    if (((s16 *)(map2 + 0x610E))[t] >= 0) {
        if ((s8)*(row + (s32)other + 0xE18E) == 0) {
            if (fn_800FE84C((s8)(s32)other, (s8)y) == 0) {
                u8 id;
                void *info;
                s32 flags;

                other = row2 + (s32)other;
                info = fn_80019DBC(((u8 *)other)[0x100D]);
                if (*(u8 *)(*(u8 **)((u8 *)info + 8) + 6) != 0) {
                    id = ((u8 *)other)[0xD];
                    if (id != 0) {
                        if (id != 0) {
                            other = (u8 *)lbl_802B14E4 + (id - 1) * 0x280;
                        } else {
                            other = NULL;
                        }
                        if (fn_80015610(*(s32 *)((u8 *)self + 0x190), *(s32 *)((u8 *)other + 0x190)) != 1) {
                            flags = *(s32 *)((u8 *)other + 0x254);
                            if (!(flags & 0x03000000)) {
                                goto block_23;
                            }
                            if (!(flags & 4)) {
                                goto skip;
                            }
                            goto block_23;
                        }
                    } else {
                        goto block_23;
                    }
                } else {
                    id = ((u8 *)other)[0xD];
                    if (id != 0) {
                        if (id != 0) {
                            other = (u8 *)lbl_802B14E4 + (id - 1) * 0x280;
                        } else {
                            other = NULL;
                        }
                        if (fn_80015610(*(s32 *)((u8 *)self + 0x190), *(s32 *)((u8 *)other + 0x190)) != 1) {
                            if (*(s32 *)((u8 *)other + 0x254) & 4) {
                                goto block_23;
                            }
                        }
                    }
                }
                goto skip;
            block_23:
                {
                    s32 dist;
                    s16 cost;
                    dist = fn_8010067C((s16)x, (s16)y, fn_800FB5C8);
                    if (dist <= bestDist) {
                        u8 bc = bestCost;
                        cost = *(s16 *)((s32)*(s16 **)(map + 0x14190) + (t << 1));
                        if (cost < (s32)bc) {
                            bestDist = dist;
                            bestCost = (u8)cost;
                            bestX = (s16)x;
                            bestY = (s16)y;
                        }
                    }
                }
            }
        }
    }
skip:
    x += 1;
inner_cmp:
    if (x <= (s8)map2[0xA] - 1) {
        goto inner;
    }
    y += 1;
outer_cmp:
    if (y <= (s8)map2[0xB] - 1) {
        goto outer;
    }
    if ((u32)(bestDist - 0x7FFF0000) != 0xFFFFU) {
        s32 bx;
        s32 by;
        u8 *p;
        u8 tile;
        u8 v;
        bx = (s8)bestX;
        by = (s8)bestY;
        p = map + bx;
        v = ((u8 *)self)[0x198];
        p = (u8 *)((s32)p + (by << 6));
        tile = p[0xD];
        if (tile != v) {
            fn_801014BC(self, bestX, bestY, 1, 0xFFFF, 0, 0, -1);
        }
    }
    return lbl_8032B3C0[0x21C];
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
    void *self;
    s8 by;
    s8 bx;
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

    self = arg0;
    if ((lbl_8032B3C0[1] & 2) || (*(u32 *)((u8 *)self + 0x254) & 0x03000000)) {
        return 0;
    }
    map = lbl_802CA518;
    bestCost = 0xFF;
    bestDist = 0x7FFFFFFF;
    fn_800FE2A0(self, 5, -1);
    bx = *(s8 *)((u8 *)self + 0x19E);
    by = *(s8 *)((u8 *)self + 0x19F);
    {
        s32 x0 = bx;
        s32 y0 = by;
        s8 range;
        s32 lim;
        s32 yMin;
        range = fn_8003A398(self);
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
                    s16 cost = *(s16 *)((s32)*(s16 **)(map + 0x14190) + (t << 1));
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
        s32 bx2;
        s32 by2;
        u8 *p;
        u8 tile;
        u8 v;
        bx2 = (s8)best1;
        by2 = (s8)best2;
        p = map + bx2;
        v = ((u8 *)self)[0x198];
        p = (u8 *)((s32)p + (by2 << 6));
        tile = p[0xD];
        if (tile != v) {
            fn_801014BC(self, best1, best2, 1, 0xFFFF, 0, 0, -1);
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

#pragma use_lmw_stmw on
#pragma optimization_level 2
#pragma opt_strength_reduction off
u8 fn_8010BEB8(void *arg0) {
    u8 fn_80092F38(void *);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void fn_800FE2A0(void *, s32, s32);
    void fn_8018D7A4(void *, void *);
    void fn_8002F658(void *, s32);
    void *fn_8002F740(void);
    void **fn_80037BD0(void *, s32);
    void *fn_80019E04(void *);
    s8 fn_8003B2D0(void *);
    s32 fn_80230BCC(s32);
    void fn_8010F3F4(void *, s8, s8, s16 *, s16 *);
    void fn_80094ABC(void *, void *);
    s32 fn_80093010(void *, void *);
    void fn_800949A4(void *, s8);
    void fn_800FB96C(s32, s8, s8, void *, s8, s8, s8, s32, s32);
    extern u8 lbl_802CA518[];
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_80273B40[];
    extern void fn_800FB60C(void);

    s16 sp12;
    s16 sp10;
    s32 sp8;
    register void *bestUnit;
    register s8 bestSlot;
    register void **bestItem;
    register s32 i;
    register void *grp;
    register s8 slot;
    register u8 *tbl;
    s8 lo;
    void **pick;
    void **other;
    s8 priA;
    void *key;
    u8 *map;
    s8 rem;
    s8 hi;
    s8 cur;
    s32 distA;
    s32 distB;
    u8 t;
    void *p;
    void **cand;

    map = lbl_802CA518;
    if ((u8)fn_80092F38(arg0) >= 4U) {
        return 0U;
    }
    if ((lbl_8032B3C0[1] & 2) || (*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        fn_80022DAC(map, 5, -1);
        fn_80022FD8(map, 5);
        (*(s16 **)(map + 0x14190))[(s8)((u8 *)arg0)[0x19E] + ((s8)((u8 *)arg0)[0x19F] << 6)] = 0;
    } else {
        fn_800FE2A0(arg0, 5, -1);
    }
    fn_8018D7A4(arg0, fn_800FB60C);
    bestUnit = NULL;
    tbl = lbl_802EF4E0;
    bestItem = NULL;
    i = 0;
    while (i < *(s32 *)tbl) {
        fn_8002F658(tbl, i);
        grp = fn_8002F740();
        for (slot = 4; slot < 8; slot++) {
            p = *fn_80037BD0(grp, slot);
            if (p != NULL) {
                if (p != NULL) {
                    t = *(u8 *)((u8 *)p + 0x12);
                } else {
                    t = 0xC;
                }
                if (t == 0xA) {
                    if (p != NULL) {
                        t = *(u8 *)((u8 *)p + 0x14);
                    } else {
                        t = 0xC;
                    }
                    if (t == 0x81) {
                        cand = fn_80037BD0(grp, slot);
                        if (bestItem == NULL) {
                            bestUnit = grp;
                            bestSlot = slot;
                            bestItem = cand;
                        } else {
                            key = *(void **)cand;
                            other = bestItem;
                            pick = cand;
                            if (key == fn_80019E04(&lbl_80273B40[0x1D])) {
                                priA = 0xA;
                            } else if (key == fn_80019E04(&lbl_80273B40[0x2B])) {
                                priA = fn_8003B2D0(arg0);
                            } else {
                                priA = 0;
                            }
                            lo = priA;
                            key = *(void **)bestItem;
                            if (key == fn_80019E04((u8 *)lbl_80273B40 + 0x1D)) {
                                cur = 0xA;
                            } else if (key == fn_80019E04((u8 *)lbl_80273B40 + 0x2B)) {
                                cur = fn_8003B2D0(arg0);
                            } else {
                                cur = 0;
                            }
                            hi = cur;
                            if (priA != cur) {
                                if (priA > cur) {
                                    lo = cur;
                                    hi = priA;
                                    pick = bestItem;
                                    other = cand;
                                }
                                rem = (s8)(fn_8003B2D0(arg0) - ((u8 *)arg0)[0x1A8]);
                                distA = fn_80230BCC(rem - hi);
                                distB = fn_80230BCC(rem - lo);
                                if (distB > distA) {
                                    goto set_other;
                                }
                                goto after_dist;
                            set_other:
                                pick = other;
                            after_dist:
                                ;
                            } else {
                                t = *(u8 *)((u8 *)bestItem + 4);
                                if (*(u8 *)((u8 *)cand + 4) < t) {
                                    pick = cand;
                                } else if (*(u8 *)((u8 *)cand + 4) > t) {
                                    pick = bestItem;
                                } else {
                                    pick = cand;
                                }
                            }
                            if (pick != bestItem) {
                                bestUnit = grp;
                                bestSlot = slot;
                                bestItem = pick;
                            }
                        }
                    }
                }
            } else {
                break;
            }
        }
        i += 1;
    }
    if (bestUnit != NULL) {
        fn_8010F3F4(arg0, (s8)((u8 *)bestUnit)[0x19E], (s8)((u8 *)bestUnit)[0x19F], &sp12, &sp10);
        fn_80094ABC(arg0, bestItem);
        rem = (s8)fn_80093010(arg0, *bestItem);
        fn_800949A4(bestUnit, bestSlot);
        sp8 = 0;
        fn_800FB96C(0x34, (s8)sp12, (s8)sp10, arg0, (s8)sp12, (s8)sp10, rem, 0, 0);
    }
    return lbl_8032B3C0[0x21C];
}
#pragma optimization_level reset
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
#pragma optimization_level 2
s32 fn_8010C244(void *arg0) {
    void *fn_80019E04(void *);
    void *fn_80037BD0(void *, s32);
    s8 fn_8003B2D0(void *);
    void fn_800FB96C(s32, s8, s8, void *, s8, s8, s8, s32, s32);
    void fn_801025BC(void *, s16 *, s16 *);
    s32 fn_80230BCC(s32);
    extern u8 lbl_80273B40[];
    extern u8 lbl_8032B3C0[];
    s16 sp12;
    s16 sp10;
    s32 sp8;
    s32 idx;
    s32 a;
    s8 temp;
    s8 valCur;
    void *chosen;
    s8 valBest;
    void *item;
    void *slot;
    u8 *p;
    void *best;
    s32 i;
    void *key;

    best = 0;
    i = 0;
    p = arg0;
loop:
    slot = p + 0x1EC;
    item = *(void **)slot;
    if (item == 0) {
        goto after_loop;
    }
    if (*(u8 *)((u8 *)item + 0x12) == 0xA && *(u8 *)((u8 *)item + 0x14) == 0x81) {
        if (best == 0) {
            best = slot;
        } else {
            key = *(void **)best;
            chosen = best;
            if (key == fn_80019E04(lbl_80273B40 + 0x1D)) {
                valBest = 0xA;
            } else if (key == fn_80019E04(lbl_80273B40 + 0x2B)) {
                valBest = fn_8003B2D0(arg0);
            } else {
                valBest = 0;
            }
            key = *(void **)slot;
            temp = valBest;
            if (key == fn_80019E04(&lbl_80273B40[0x1D])) {
                valCur = 0xA;
            } else if (key == fn_80019E04(&lbl_80273B40[0x2B])) {
                valCur = fn_8003B2D0(arg0);
            } else {
                valCur = 0;
            }
            if ((s8)valBest != (s8)valCur) {
                if ((s8)valBest > (s8)valCur) {
                    temp = valCur;
                    valCur = valBest;
                    chosen = slot;
                    slot = best;
                }
                valBest = (s8)(fn_8003B2D0(arg0) - ((u8 *)arg0)[0x1A8]);
                a = fn_80230BCC((s8)(valBest - (s8)valCur));
                if (fn_80230BCC((s8)(valBest - (s8)temp)) > a) {
                    chosen = slot;
                }
            } else if (*(u8 *)((u8 *)slot + 4) > *(u8 *)((u8 *)best + 4)) {
                chosen = best;
            } else if (*(u8 *)((u8 *)slot + 4) < *(u8 *)((u8 *)best + 4)) {
                chosen = slot;
            } else {
                chosen = best;
            }
            best = chosen;
        }
    }
    i += 1;
    p += 8;
    if (i < 4) {
        goto loop;
    }
after_loop:
    if (best == 0) {
        return 0;
    }
    for (idx = 4; idx < 8; idx++) {
        if (best == fn_80037BD0(arg0, idx)) {
            break;
        }
    }
    sp12 = (s8)((u8 *)arg0)[0x19E];
    sp10 = (s8)((u8 *)arg0)[0x19F];
    if (!(lbl_8032B3C0[1] & 2) && !(*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        fn_801025BC(arg0, &sp12, &sp10);
    }
    sp8 = 0;
    fn_800FB96C(4, (s8)sp12, (s8)sp10, arg0, (s8)sp12, (s8)sp10, (s8)idx, 0, 0);
    return best != 0;
}
#pragma optimization_level reset
#pragma use_lmw_stmw reset

s32 fn_8010C4B0(void *arg0) {
    void *fn_8000D354(s32);
    u8 fn_80102EA8();
    if (fn_80102EA8() != 0) {
        return 1;
    }
    return M2C_FIELD(fn_8000D354(M2C_FIELD(arg0, s32 *, 0x240)), u8 *, 7) != 0;
}

s32 fn_8010C504(void *arg0) {
    u8 fn_80102EA8(void);
    s8 fn_8003B2D0(void *);
    s32 fn_8022C568(f32);
    void *fn_8000D354(void *);
    extern f64 lbl_8036A168;
    extern f32 lbl_8036A160;
    extern f32 lbl_8036A164;
    u8 saved;
    s32 result;
    u32 val;
    u32 flags;
    u8 *data;
    f32 ratio;

    if (fn_80102EA8() != 0) {
        saved = *(u8 *)((u8 *)arg0 + 0x1A8);
        ratio = (f32)(s8)saved / (f32)fn_8003B2D0(arg0);
        if (ratio <= lbl_8036A160) {
            *(u32 *)((u8 *)arg0 + 0x254) |= 1;
            return 1;
        }
        *(u32 *)((u8 *)arg0 + 0x254) &= ~1U;
        return 0;
    }

    result = 0;
    {
        s8 b2d = fn_8003B2D0(arg0);
        s8 v = (s8)*(u8 *)((u8 *)arg0 + 0x1A8);
        val = fn_8022C568((lbl_8036A164 * (f32)v) / (f32)b2d);
    }
    data = fn_8000D354(*(void **)((u8 *)arg0 + 0x240));
    flags = *(u32 *)((u8 *)arg0 + 0x254);
    if (flags & 1) {
        if (data[6] <= val) {
            *(u32 *)((u8 *)arg0 + 0x254) = flags & ~1U;
        } else {
            result = 1;
        }
    } else if (data[5] > val) {
        result = 1;
        *(u32 *)((u8 *)arg0 + 0x254) = flags | 1;
    }
    return result;
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
s32 fn_8010C674(void *arg0, s32 arg1, u8 (*arg2)(void *)) {
    s32 fn_8001DD54(void *,void *);
    void fn_80022DAC(void *,s32,s32); void fn_80022FD8(void *,s32);
    void **fn_80037BBC(void *,s32);
    s8 fn_8003A398(void *); s8 fn_8003A778(void *);
    s32 fn_800F7838(void *,s16,s16); s32 fn_800F7994(void *,s16,s16);
    void fn_800FB96C(s32,s8,s8,void *,u8,u8,s8,s32,s32);
    u32 fn_800FCF48(s8,s8);
    void fn_800FE2A0(void *,s32,s32); void fn_80100D18(void *,void *,s32);
    extern u8 lbl_8032B3C0[],lbl_802CA518[];
    extern u16 lbl_802B14E4[];
    extern s16 lbl_80273B78[];
    u8 *flags=lbl_8032B3C0;
    u8 *map=lbl_802CA518;
    s16 bestX,bestY;
    void *best;
    s32 minX,maxX,maxY,row;
    s32 slot=arg1;
    s32 y,range,minY;
    void *item;
    u8 extra;
    s32 k,bestScore;
    s32 score;
    s16 ny,nx;
    void *unit;
    s16 *dir;
    u8 rank;
    s16 chosenX,chosenY;
    s32 x;
    if ((flags[1]&2) || (*(u32 *)((u8 *)arg0+0x254)&0x03000000)) {
        fn_80022DAC(map,5,-1); fn_80022FD8(map,5);
        (*(s16 **)(map+0x14190))[(s8)*((u8 *)arg0+0x19e)+((s8)*((u8 *)arg0+0x19f)<<6)]=0;
    } else fn_800FE2A0(arg0,5,-1);
    fn_80100D18(arg0,fn_80037BBC(arg0,slot),-1);
    x=*(s8 *)((u8 *)arg0+0x19e); y=*(s8 *)((u8 *)arg0+0x19f);
    best=NULL; rank=(u8)-1;
    item=*fn_80037BBC(arg0,slot);
    if(item) extra=fn_8001DD54(item,arg0); else extra=(u8)0;
    range=fn_8003A398(arg0)+(u8)extra;
    minX=x-range; if(minX<(s8)lbl_802CA518[8]) minX=(s8)lbl_802CA518[8];
    minY=y-range; if(minY<(s8)lbl_802CA518[9]) minY=(s8)lbl_802CA518[9];
    maxX=x+range; if(maxX>(s8)lbl_802CA518[10]-1) maxX=(s8)lbl_802CA518[10]-1;
    maxY=y+range; if(maxY>(s8)lbl_802CA518[11]-1) maxY=(s8)lbl_802CA518[11]-1;
    for(row=minY;row<=maxY;row++) {
        for(x=minX;x<=maxX;x++) {
            u8 id=map[((s8)row<<6)+(s8)x+13];
            if(id && id!=*((u8 *)arg0+0x198)) {
                if(id) unit=(u8 *)lbl_802B14E4+(id-1)*0x280; else unit=NULL;
                if(!(flags[1]&4) && arg2 && arg2(unit)) continue;
                if((u8)rank<fn_8003A778(unit)) continue;
                {
                u8 *grid=lbl_802CA518;
                dir=lbl_80273B78; score=0; k=0; bestScore=0x80000000;
                do {
                    s32 index;
                    nx=(s16)x+dir[0]; ny=(s16)row+dir[1];
                    index=(s8)nx+((s8)ny<<6);
                    if((s16)(*(s16 **)(grid+0x14190))[index]>=0) {
                        u8 *p=grid+index;
                        if((s8)p[0xe18e]==0) {
                            u8 occupant=p[13];
                            if(occupant==0 || occupant==*((u8 *)arg0+0x198)) {
                                score+=fn_800F7994(arg0,nx,ny);
                                score+=fn_800F7838(arg0,nx,ny);
                                score-=(fn_800FCF48((s8)nx,(s8)ny)>>4)&0xfff;
                                if(bestScore<score) {chosenX=nx;chosenY=ny;bestScore=score;}
                            }
                        }
                    }
                    ++k; score=0; dir+=2;
                } while(k<4);
                }
                if((u32)(bestScore+0x80000000)!=0) {
                    rank=fn_8003A778(unit);bestX=chosenX;bestY=chosenY;best=unit;
                }
            }
        }
    }
    if(best) {
        fn_800FB96C(16,(s8)bestX,(s8)bestY,best,*((u8 *)best+0x19e),*((u8 *)best+0x19f),(s8)slot,0,0);
    }
    return best!=NULL;
}
#pragma opt_strength_reduction reset

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

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
s32 fn_8010CACC(void *arg0, s32 arg1, u8 (*arg2)(void *)) {
    s32 fn_8001DD54(void *,void *);
    void fn_80022DAC(void *,s32,s32); void fn_80022FD8(void *,s32);
    void **fn_80037BBC(void *,s32);
    s8 fn_8003A398(void *); u8 fn_8003863C(void *); u8 fn_8010CF28(void *,void *,s16 *,s16 *);
    s32 fn_800F7838(void *,s16,s16); s32 fn_800F7994(void *,s16,s16);
    void fn_800FB96C(s32,s8,s8,void *,u8,u8,s8,s32,s32);
    u32 fn_800FCF48(s8,s8);
    void fn_800FE2A0(void *,s32,s32); void fn_80100D18(void *,void *,s32);
    extern u8 lbl_8032B3C0[],lbl_802CA518[];
    extern u16 lbl_802B14E4[];
    extern s16 lbl_80273B78[];
    u8 *map=lbl_802CA518;
    u8 *flags=lbl_8032B3C0;
    s16 bestX,bestY;
    void *best;
    s32 minX,maxY,row;
    s32 slot=arg1;
    s32 range,minY;
    s32 startX,startY;
    void *item;
    u8 extra;
    s32 k,score;
    s32 bestScore;
    s16 ny,nx;
    void *unit;
    s16 *dir;
    u8 *rowMap;
    u8 rank;
    s32 maxX;
    s16 chosenX,chosenY;
    s32 x;
    if ((flags[1]&2) || (*(u32 *)((u8 *)arg0+0x254)&0x03000000)) {
        fn_80022DAC(map,5,-1); fn_80022FD8(map,5);
        (*(s16 **)(map+0x14190))[(s8)*((u8 *)arg0+0x19e)+((s8)*((u8 *)arg0+0x19f)<<6)]=0;
    } else fn_800FE2A0(arg0,5,-1);
    fn_80100D18(arg0,fn_80037BBC(arg0,slot),-1);
    startX=*(s8 *)((u8 *)arg0+0x19e); startY=*(s8 *)((u8 *)arg0+0x19f);
    best=NULL; rank=0;
    item=*fn_80037BBC(arg0,slot);
    if(item) extra=fn_8001DD54(item,arg0); else extra=0;
    range=(s8)fn_8003A398(arg0); range+=(u8)extra;
    minX=startX-range; if(minX<(s8)lbl_802CA518[8]) minX=(s8)lbl_802CA518[8];
    minY=startY-range; if(minY<(s8)lbl_802CA518[9]) minY=(s8)lbl_802CA518[9];
    maxX=startX+range; if(maxX>(s8)lbl_802CA518[10]-1) maxX=(s8)lbl_802CA518[10]-1;
    maxY=startY+range; if(maxY>(s8)lbl_802CA518[11]-1) maxY=(s8)lbl_802CA518[11]-1;
    for(row=minY;maxY>=row;++row) {
        rowMap=map+((s8)row<<6);
        for(x=minX;x<=maxX;x++) {
            u8 id=rowMap[(s8)x+13];
            if(id && id!=*((u8 *)arg0+0x198)) {
                if(id) unit=(u8 *)lbl_802B14E4+(id-1)*0x280; else unit=NULL;
                if((*(u32 *)((u8 *)unit+0x1a0)&1)!=0) continue;
                if(!(flags[1]&4) && arg2 && arg2(unit)) continue;
                if((*(u32 *)((u8 *)unit+0x254)&9)!=0) continue;
                if((u8)rank>fn_8003863C(unit)) continue;
                {
                u8 *grid=lbl_802CA518;
                score=0; dir=lbl_80273B78; k=score; bestScore=0x80000000;
                do {
                    s32 index;
                    nx=(s16)x+dir[0]; ny=(s16)row+dir[1];
                    index=(s8)nx+((s8)ny<<6);
                    if((s16)(*(s16 **)(grid+0x14190))[index]>=0) {
                        u8 *p=grid+index;
                        if((s8)p[0xe18e]==0) {
                            u8 occupant=p[13];
                            if(occupant==0 || occupant==*((u8 *)arg0+0x198)) {
                                score+=fn_800F7994(arg0,nx,ny);
                                score+=fn_800F7838(arg0,nx,ny);
                                score-=(fn_800FCF48((s8)nx,(s8)ny)>>4)&0xfff;
                                if(bestScore<score) {chosenX=nx;chosenY=ny;bestScore=score;}
                            }
                        }
                    }
                    ++k; score=0; dir+=2;
                } while(k<4);
                }
                if((u32)(bestScore+0x80000000)!=0) {
                    rank=fn_8003863C(unit);bestX=chosenX;bestY=chosenY;best=unit;
                }
            }
        }
    }
    if(best) {
        if(fn_8010CF28(arg0,best,&chosenX,&chosenY)==1) {
            fn_800FB96C(16,(s8)bestX,(s8)bestY,best,*((u8 *)best+0x19e),*((u8 *)best+0x19f),(s8)slot,(u8)chosenX,(u8)chosenY);
        } else best=NULL;
    }
    return best!=NULL;
}
#pragma opt_strength_reduction reset

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
s32 fn_8010CF28(s32 arg0, void *arg1, s16 *arg2, s16 *arg3) {
void fn_80015320(s32,void *);
u8 fn_80015610(void *,void *); u8 fn_8001DD04(s32);
void fn_800FC6B0(void *);
u16 fn_800FCF48(s8,s8);
void fn_800FCF74(s32,s32); void fn_800FD774(s32);
void fn_800FE2A0(void *,s32,s32);
void fn_800FE490(s8,s8,void *,s32,s32); u8 fn_800FE84C(s8,s8);
extern u8 lbl_802CA518[]; extern u16 lbl_802B14E4[];

    u8 sp8[8];
    s16 temp_r3_3;
    s32 temp_cr0_eq;
    s32 temp_r21;
    s32 temp_r22;
    s32 temp_r23;
    s32 var_r0;
    s32 var_r4;
    s32 var_r16_2;
    s32 var_r17;
    s32 var_r17_2;
    s32 var_r18_2;
    u16 temp_r3_4;
    u16 var_r16;
    u8 temp_r24_2;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r5;
    u8 var_r19;
    s32 var_r21;
    u8 var_r7;
    void *temp_r19;
    void *temp_r24;
    void *var_r18;
    void *var_r20;
    void *var_r24;
    void *var_r27;

    u8 *map=lbl_802CA518;
    fn_800FC6B0(*(void **)((u8 *)arg1+0x190));
    var_r20 = NULL;
    fn_80015320(0, &sp8);
    var_r21 = 1;
    do {
        if ((u8)var_r21 != 0) {
            var_r27 = (u8 *)lbl_802B14E4 + (((u8)var_r21 - 1) * 0x280);
        } else {
            var_r27 = NULL;
        }
        if (((u32) *(u32 *)((u8 *)var_r27+0x188) != 0U) && (sp8[(*(u8 **)((u8 *)var_r27+0x190))[8]] != 0)) {
            temp_r3 = *(u8 *)((u8 *)var_r27+0x19E);
            var_r7 = 0;
            temp_r4 = *(u8 *)((u8 *)var_r27+0x19F);
            if (((s8) temp_r3 < (s8) *(s8 *)(lbl_802CA518+0x8)) || ((s32) ((s8) *(s8 *)(lbl_802CA518+0xA) - 1) < (s8) temp_r3) || ((s8) temp_r4 < (s8) *(s8 *)(lbl_802CA518+0x9)) || ((s32) ((s8) *(s8 *)(lbl_802CA518+0xB) - 1) < (s8) temp_r4)) {
                var_r7 = 1;
            }
            if ((var_r7 == 0) && !(*(u32 *)((u8 *)var_r27+0x1A0) & 0x010000DC) && (fn_800FCF48((s8)temp_r3,(s8)temp_r4) > 0U)) {
                var_r20 = var_r27;
            }
        }
        var_r21 += 1;
    } while ((s32) var_r21 <= 0x9F);
    if (var_r20 == NULL) {
        fn_800FD774(arg0);
        fn_800FCF74(arg0, 0x9F);
        return 0;
    }
    fn_800FE2A0(var_r20, 6, *(s32 *)lbl_802CA518 * *(s32 *)(lbl_802CA518+4));
    var_r19 = 0xFF;
    var_r17 = (s8) *(s8 *)(lbl_802CA518+0x9);
    var_r18 = NULL;
for (; var_r17 <= (s32) ((s8) *(s8 *)(lbl_802CA518+0xB) - 1); var_r17++) {
        temp_r23 = (s8)var_r17 << 6;
        var_r16_2 = (s8) *(s8 *)(lbl_802CA518+0x8);
for (; var_r16_2 <= (s32) ((s8) *(s8 *)(lbl_802CA518+0xA) - 1); var_r16_2++) {
            temp_r21 = ((s8)var_r16_2 + temp_r23) * 2;
            if (*(s16 *)(lbl_802CA518+temp_r21+0x818e) >= 0) {
                temp_r24 = lbl_802CA518 + temp_r23 + (s8)var_r16_2;
                if ((*(s8 *)((u8 *)temp_r24+0xe18e) == 0) && (fn_800FE84C((s8)var_r16_2,(s8)var_r17) == 0)) {
                    temp_r3_2 = *(u8 *)((u8 *)temp_r24+13);
                    if (temp_r3_2 != 0) {
                        if (temp_r3_2 != 0) {
                            var_r24 = (u8 *)lbl_802B14E4 + ((temp_r3_2 - 1) * 0x280);
                        } else {
                            var_r24 = NULL;
                        }
                        if (fn_8010CF28_check(*(void **)((u8 *)var_r20+0x190), *(void **)((u8 *)var_r24+0x190)) != 0) {
                            temp_r3_3 = *(s16 *)(map + (temp_r21 + 0x818E));
                            if (temp_r3_3 < (s32) var_r19) {
                                var_r19 = (u8) temp_r3_3;
                                var_r18 = var_r24;
                            }
                        }
                    }
                }
            }
        }
    }
    if (var_r18 == NULL) {
        fn_800FD774(arg0);
        fn_800FCF74(arg0, 0x9F);
        return 0;
    }
    fn_800FE490((s8) *(u8 *)((u8 *)var_r18+0x19E), (s8) *(u8 *)((u8 *)var_r18+0x19F), arg1, 6, -1);
    var_r16 = 0xFFFF;
    temp_r24_2 = fn_8001DD04(arg0);
    var_r17_2 = (s8) *(s8 *)(lbl_802CA518+0x9);
for (; var_r17_2 <= (s32) ((s8) *(s8 *)(lbl_802CA518+0xB) - 1); var_r17_2++) {
        temp_r22 = (s8)var_r17_2 << 6;
        var_r18_2 = (s8) *(s8 *)(lbl_802CA518+0x8);
for (; var_r18_2 <= (s32) ((s8) *(s8 *)(lbl_802CA518+0xA) - 1); var_r18_2++) {
            if (*(s16 *)(lbl_802CA518+((s8)var_r18_2+temp_r22)*2+0x818e) >= 0) {
                temp_r19 = lbl_802CA518 + temp_r22 + (s8)var_r18_2;
                if ((*(s8 *)((u8 *)temp_r19+0xe18e) == 0) && (fn_800FE84C((s8)var_r18_2,(s8)var_r17_2) == 0) && ((u8) *(u8 *)((u8 *)temp_r19+13) == 0)) {
                    temp_r3_4 = fn_800FCF48(var_r18_2, var_r17_2);
                    temp_r4_2 = *(u8 *)((u8 *)arg1+0x19f);
                    var_r4 = (s8) temp_r4_2 - var_r17_2;
                    if (((s8) temp_r4_2 - var_r17_2) < 0) {
                        var_r4 = -var_r4;
                    }
                    temp_r5 = *(u8 *)((u8 *)arg1+0x19e);
                    var_r0 = (s8) temp_r5 - var_r18_2;
                    if (((s8) temp_r5 - var_r18_2) < 0) {
                        var_r0 = -var_r0;
                    }
                    if (((s32) temp_r24_2 >= (s16) (var_r0 + var_r4)) && (temp_r3_4 < var_r16)) {
                        *arg2 = (s16) var_r18_2;
                        var_r16 = temp_r3_4;
                        *arg3 = (s16) var_r17_2;
                    }
                }
            }
        }
    }
    fn_800FD774(arg0);
    fn_800FCF74(arg0, 0x9F);
    return var_r16 != 0xFFFF;
}
#pragma opt_strength_reduction reset

void fn_8010D364(void) {
    M2C_UNK fn_8010D384();
    fn_8010D384();
}

#pragma use_lmw_stmw on
s32 fn_8010D384(void *arg0, s32 arg1, u8 (*arg2)(void *)) {
    s32 fn_8001DD54(void *, void *);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void **fn_80037BBC(void *, s32);
    s8 fn_80037E00(void *);
    u8 fn_8003863C(void *);
    s8 fn_8003A398(void *);
    s8 fn_8003CFF0(void *, void *);
    u8 fn_800934CC(void *);
    s32 fn_800F7838(void *, s8, s8);
    s32 fn_800F7994(void *, s8, s8);
    void fn_800FB96C(s32, s8, s8, void *, u8, u8, s8, s32, s32);
    u32 fn_800FCF48(s8, s8);
    void fn_800FDDBC(s8, s8, u8, u8, s32);
    void fn_800FE2A0(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    void fn_80100D18(void *, void *, s32);
    u8 fn_801044FC(void *);
    void fn_801A49AC(void *, s8);
    void fn_801A7A68(void *, void *, void *);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802CA518[];
    extern u16 lbl_802B14E4[];
    extern AiParam lbl_80273BB8;
    extern AiParam lbl_80273BA8;
    extern u8 lbl_80330EAC[];

    AiParam sp28;
    AiParam sp18;
    u8 *flags;
    u8 *map;
    s32 slot;
    void **weapon;
    void *best;
    s16 bestY;
    s16 bestX;
    u8 bestRank;
    s32 minX;
    s32 maxX;
    s32 maxY;
    s32 row;
    s32 minY;
    u8 *map9;
    long x;
    s32 y;
    u8 extra;
    s32 range;
    void *item;
    void *unit;
    s32 score;
    s32 bestScore;
    s32 i;
    s16 chosenX;
    s16 chosenY;
    u8 *pMaxX;
    u8 *map11;
    s8 iy;
    s8 ix;

    flags = lbl_8032B3C0;
    map = lbl_802CA518;
    slot = arg1;

    if ((flags[1] & 2) || (*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        fn_80022DAC(map, 5, -1);
        fn_80022FD8(map, 5);
        (*(s16 **)(map + 0x14190))[(s8)*((u8 *)arg0 + 0x19e) + ((s8)*((u8 *)arg0 + 0x19f) << 6)] = 0;
    } else {
        fn_800FE2A0(arg0, 5, -1);
    }

    weapon = fn_80037BBC(arg0, slot);
    fn_80100D18(arg0, weapon, -1);
    bestRank = 0;
    best = NULL;
    x = *(s8 *)((u8 *)arg0 + 0x19e);
    y = *(s8 *)((u8 *)arg0 + 0x19f);
    item = *weapon;
    if (item) {
        extra = fn_8001DD54(item, arg0);
    } else {
        extra = 0;
    }
    range = (s8)fn_8003A398(arg0);
    range += (u8)extra;

    minX = x - range;
    if (minX < (s8)lbl_802CA518[8]) {
        minX = (s8)lbl_802CA518[8];
    }
    minY = y - range;
    map9 = lbl_802CA518;
    if (minY < (s8)map9[9]) {
        minY = (s8)map9[9];
    }
    maxX = x + range;
    pMaxX = &lbl_802CA518[10];
    if (maxX > (s8)*pMaxX - 1) {
        maxX = (s8)*pMaxX - 1;
    }
    maxY = y + range;
    map11 = lbl_802CA518;
    if (maxY > (s8)map11[11] - 1) {
        maxY = (s8)map11[11] - 1;
    }

    for (row = minY; row <= maxY; row++) {
        for (x = minX; x <= maxX; x++) {
            u8 id = map[((s8)row << 6) + (s8)x + 0xD];
            u8 ok;
            u8 wextra, wrange;
            s8 ciff;

            if (id == 0 || id == *((u8 *)arg0 + 0x198)) {
                continue;
            }
            if (id != 0) {
                unit = (u8 *)lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (!(flags[1] & 4) && arg2 != NULL && arg2(unit) == 0) {
                continue;
            }
            if (fn_801044FC((u8 *)unit + 0x1a4) == 1) {
                continue;
            }

            for (i = 0; i < 4; i++) {
                if (*fn_80037BBC(unit, i) != NULL) {
                    if (fn_800934CC(unit) != 0) {
                        ok = 1;
                        goto ok_done;
                    }
                }
            }
            ok = 0;
ok_done:
            if (ok == 0) {
                continue;
            }

            item = *weapon;
            if (item != NULL) {
                wextra = fn_8001DD54(item, arg0);
            } else {
                wextra = 0;
            }
            item = *weapon;
            if (item != NULL) {
                wrange = *((u8 *)item + 0x1d);
            } else {
                wrange = 0;
            }
            fn_800FDDBC((s8)*((u8 *)unit + 0x19e), (s8)*((u8 *)unit + 0x19f), wrange, wextra, 6);

            {
                u8 *grid = lbl_802CA518;
                u8 *grid2 = lbl_802CA518;
                bestScore = 0x80000000;
                for (iy = (s8)map9[9]; iy <= (s8)map11[11] - 1; iy++) {
                    s32 yoff = (s8)iy << 6;
                    u8 *rowY = grid + yoff;
                    u8 *rowY2 = grid2 + yoff;
                    for (ix = (s8)lbl_802CA518[8]; ix <= (s8)*pMaxX - 1; ix++) {
                        s32 t = (s8)ix + yoff;
                        s32 t2 = t * 2;
                        if (*(s16 *)(grid + t2 + 0x610e) >= 0
                            && (s8)rowY[(s32)ix + 0xe18e] == 0
                            && fn_800FE84C(ix, iy) == 0
                            && *(u16 *)(grid2 + t2 + 0xc18e) != 0) {
                            u8 occ = rowY2[(s8)ix + 0xd];
                            if (occ == 0 || occ == *((u8 *)arg0 + 0x198)) {
                                score = fn_800F7994(arg0, ix, iy);
                                score += fn_800F7838(arg0, ix, iy);
                                score -= (fn_800FCF48(ix, iy) >> 4) & 0xfff;
                                if (bestScore < score) {
                                    bestScore = score;
                                    chosenX = (s16)ix;
                                    chosenY = (s16)iy;
                                }
                            }
                        }
                    }
                }
            }

            if ((u32)(bestScore + 0x80000000) == 0) {
                continue;
            }

            sp18 = lbl_80273BB8;
            sp18.p = unit;
            sp18.b4 = *((u8 *)unit + 0x19e);
            sp18.b5 = *((u8 *)unit + 0x19f);
            sp18.b6 = fn_80037E00(unit);
            sp28 = lbl_80273BA8;
            sp28.p = arg0;
            sp28.b4 = (u8)(s8)chosenX;
            sp28.b5 = (u8)(s8)chosenY;
            fn_801A7A68(lbl_80330EAC, &sp28, &sp18);
            fn_801A49AC(lbl_80330EAC, (s8)slot);

            ciff = fn_8003CFF0(arg0, unit);
            if (ciff < 5) {
                continue;
            }
            if ((s32)bestRank > (s32)(ciff + fn_8003863C(unit))) {
                continue;
            }
            bestRank = (u8)(ciff + fn_8003863C(unit));
            bestX = chosenX;
            bestY = chosenY;
            best = unit;
        }
    }

    if (best != NULL) {
        fn_800FB96C(0x10, (s8)bestX, (s8)bestY, best,
                    *((u8 *)best + 0x19e), *((u8 *)best + 0x19f), (s8)slot, 0, 0);
    }
    return best != NULL;
}

#pragma use_lmw_stmw on
s32 fn_8010D984(void *arg0, s32 arg1, u8 (*arg2)(void *)) {
    s32 fn_8001DD54(void *, void *);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void **fn_80037BBC(void *, s32);
    s8 fn_80037E00(void *);
    s8 fn_8003A398(void *);
    s8 fn_8003AFA0(void *);
    s8 fn_8003CFF0(void *, void *);
    u8 fn_800934CC(void *, void *);
    u64 *fn_8001CB64(void *);
    s32 fn_800F7838(void *, s8, s8);
    s32 fn_800F7994(void *, s8, s8);
    void fn_800FB96C(s32, s8, s8, void *, u8, u8, s8, s32, s32);
    u32 fn_800FCF48(s8, s8);
    void fn_800FDDBC(s8, s8, u8, u8, s32);
    void fn_800FE2A0(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    void fn_80100D18(void *, void *, s32);
    void fn_801A49AC(void *, s8);
    void fn_801A7A68(void *, void *, void *);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802CA518[];
    extern u16 lbl_802B14E4[];
    extern AiParam lbl_80273B98;
    extern AiParam lbl_80273B88;
    extern u8 lbl_80330EAC[];

    AiParam sp28;
    AiParam sp18;
    u8 *flags;
    u8 *map;
    s32 slot;
    void **weapon;
    void *best;
    s16 bestY;
    s16 bestX;
    u8 bestRank;
    s32 minX;
    s32 maxX;
    s32 maxY;
    s32 row;
    s32 minY;
    u8 *map9;
    long x;
    s32 y;
    u8 extra;
    s32 range;
    void *item;
    void *unit;
    s32 score;
    s32 bestScore;
    s32 i;
    s16 chosenX;
    s16 chosenY;
    u8 *pMaxX;
    u8 *map11;
    s8 iy;
    s8 ix;

    flags = lbl_8032B3C0;
    map = lbl_802CA518;
    slot = arg1;

    if ((flags[1] & 2) || (*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        fn_80022DAC(map, 5, -1);
        fn_80022FD8(map, 5);
        (*(s16 **)(map + 0x14190))[(s8)*((u8 *)arg0 + 0x19e) + ((s8)*((u8 *)arg0 + 0x19f) << 6)] = 0;
    } else {
        fn_800FE2A0(arg0, 5, -1);
    }

    weapon = fn_80037BBC(arg0, slot);
    fn_80100D18(arg0, weapon, -1);
    bestRank = 0;
    best = NULL;
    x = *(s8 *)((u8 *)arg0 + 0x19e);
    y = *(s8 *)((u8 *)arg0 + 0x19f);
    item = *weapon;
    if (item) {
        extra = fn_8001DD54(item, arg0);
    } else {
        extra = 0;
    }
    range = (s8)fn_8003A398(arg0);
    range += (u8)extra;

    minX = x - range;
    if (minX < (s8)lbl_802CA518[8]) {
        minX = (s8)lbl_802CA518[8];
    }
    minY = y - range;
    map9 = lbl_802CA518;
    if (minY < (s8)map9[9]) {
        minY = (s8)map9[9];
    }
    maxX = x + range;
    pMaxX = &lbl_802CA518[10];
    if (maxX > (s8)*pMaxX - 1) {
        maxX = (s8)*pMaxX - 1;
    }
    maxY = y + range;
    map11 = lbl_802CA518;
    if (maxY > (s8)map11[11] - 1) {
        maxY = (s8)map11[11] - 1;
    }

    for (row = minY; row <= maxY; row++) {
        for (x = minX; x <= maxX; x++) {
            u8 id = map[((s8)row << 6) + (s8)x + 0xD];
            u8 ok;
            u8 wextra, wrange;
            s8 ciff;

            if (id == 0 || id == *((u8 *)arg0 + 0x198)) {
                continue;
            }
            if (id != 0) {
                unit = (u8 *)lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (!(flags[1] & 4) && arg2 != NULL && arg2(unit) == 0) {
                continue;
            }
            if (((*((u8 *)unit + 0x1A5) >> 4) & 7) != 0) {
                continue;
            }
            if ((*(u16 *)((u8 *)*(void **)((u8 *)unit + 0x18C) + 0x3A) & 1) == 0) {
                continue;
            }

            for (i = 0; i < 4; i++) {
                void **sp = fn_80037BBC(unit, i);
                if (*sp != NULL) {
                    if ((*fn_8001CB64(sp) & 6ULL) != 0 && fn_800934CC(unit, *sp) != 0) {
                        ok = 1;
                        goto ok_done;
                    }
                }
            }
            ok = 0;
ok_done:
            if (ok == 0) {
                continue;
            }

            item = *weapon;
            if (item != NULL) {
                wextra = fn_8001DD54(item, arg0);
            } else {
                wextra = 0;
            }
            item = *weapon;
            if (item != NULL) {
                wrange = *((u8 *)item + 0x1d);
            } else {
                wrange = 0;
            }
            fn_800FDDBC((s8)*((u8 *)unit + 0x19e), (s8)*((u8 *)unit + 0x19f), wrange, wextra, 6);

            {
                u8 *grid = lbl_802CA518;
                u8 *grid2 = lbl_802CA518;
                bestScore = 0x80000000;
                for (iy = (s8)map9[9]; iy <= (s8)map11[11] - 1; iy++) {
                    s32 yoff = (s8)iy << 6;
                    u8 *rowY = grid + yoff;
                    u8 *rowY2 = grid2 + yoff;
                    for (ix = (s8)lbl_802CA518[8]; ix <= (s8)*pMaxX - 1; ix++) {
                        s32 t = (s8)ix + yoff;
                        s32 t2 = t * 2;
                        if (*(s16 *)(grid + t2 + 0x610e) >= 0
                            && (s8)rowY[(s32)ix + 0xe18e] == 0
                            && fn_800FE84C(ix, iy) == 0
                            && *(u16 *)(grid2 + t2 + 0xc18e) != 0) {
                            u8 occ = rowY2[(s8)ix + 0xd];
                            if (occ == 0 || occ == *((u8 *)arg0 + 0x198)) {
                                score = fn_800F7994(arg0, ix, iy);
                                score += fn_800F7838(arg0, ix, iy);
                                score -= (fn_800FCF48(ix, iy) >> 4) & 0xfff;
                                if (bestScore < score) {
                                    bestScore = score;
                                    chosenX = (s16)ix;
                                    chosenY = (s16)iy;
                                }
                            }
                        }
                    }
                }
            }

            if ((u32)(bestScore + 0x80000000) == 0) {
                continue;
            }

            sp18 = lbl_80273B98;
            sp18.p = unit;
            sp18.b4 = *((u8 *)unit + 0x19e);
            sp18.b5 = *((u8 *)unit + 0x19f);
            sp18.b6 = fn_80037E00(unit);
            sp28 = lbl_80273B88;
            sp28.p = arg0;
            sp28.b4 = (u8)(s8)chosenX;
            sp28.b5 = (u8)(s8)chosenY;
            fn_801A7A68(lbl_80330EAC, &sp28, &sp18);
            fn_801A49AC(lbl_80330EAC, (s8)slot);

            ciff = fn_8003CFF0(arg0, unit);
            if (ciff < 5) {
                continue;
            }
            if ((s32)bestRank > (s32)(ciff + fn_8003AFA0(unit))) {
                continue;
            }
            bestRank = (u8)(ciff + fn_8003AFA0(unit));
            bestX = chosenX;
            bestY = chosenY;
            best = unit;
        }
    }

    if (best != NULL) {
        fn_800FB96C(0x10, (s8)bestX, (s8)bestY, best,
                    *((u8 *)best + 0x19e), *((u8 *)best + 0x19f), (s8)slot, 0, 0);
    }
    return best != NULL;
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw reset
s32 fn_8010DFC0(void *arg0, s32 arg1, u8 (*arg2)(void *)) {
    s32 fn_8001DD54(void *,void *);
    void fn_80022DAC(void *,s32,s32); void fn_80022FD8(void *,s32);
    void **fn_80037BBC(void *,s32);
    s8 fn_8003A398(void *); u8 fn_8003863C(void *); u8 fn_801044FC(void *);
    s32 fn_800F7838(void *,s16,s16); s32 fn_800F7994(void *,s16,s16);
    void fn_800FB96C(s32,s8,s8,void *,u8,u8,s8,s32,s32);
    u32 fn_800FCF48(s8,s8);
    void fn_800FE2A0(void *,s32,s32); void fn_80100D18(void *,void *,s32);
    extern u8 lbl_8032B3C0[],lbl_802CA518[];
    extern u16 lbl_802B14E4[];
    extern s16 lbl_80273B78[];
    u8 *flags=lbl_8032B3C0;
    u8 *map=lbl_802CA518;
    s16 bestX,bestY;
    void *best;
    s32 minX,maxX,maxY,row;
    s32 slot=arg1;
    s32 range,minY;
    s32 startX,startY;
    void *item;
    u8 extra;
    s32 k,score;
    s32 bestScore;
    s16 ny,nx;
    void *unit;
    s16 *dir;
    u8 rank;
    s16 chosenX,chosenY;
    s32 x;
    s32 baseX;
    if ((flags[1]&2) || (*(u32 *)((u8 *)arg0+0x254)&0x03000000)) {
        fn_80022DAC(map,5,-1); fn_80022FD8(map,5);
        (*(s16 **)(map+0x14190))[(s8)*((u8 *)arg0+0x19e)+((s8)*((u8 *)arg0+0x19f)<<6)]=0;
    } else fn_800FE2A0(arg0,5,-1);
    fn_80100D18(arg0,fn_80037BBC(arg0,slot),-1);
    startX=*(s8 *)((u8 *)arg0+0x19e); startY=*(s8 *)((u8 *)arg0+0x19f);
    best=NULL; rank=0;
    item=*fn_80037BBC(arg0,slot);
    if(item) extra=fn_8001DD54(item,arg0); else extra=0;
    range=(s8)fn_8003A398(arg0); range+=(u8)extra;
    minX=startX-range; if(minX<(s8)lbl_802CA518[8]) minX=(s8)lbl_802CA518[8];
    minY=startY-range; if(minY<(s8)lbl_802CA518[9]) minY=(s8)lbl_802CA518[9];
    maxX=startX+range; if(maxX>(s8)lbl_802CA518[10]-1) maxX=(s8)lbl_802CA518[10]-1;
    maxY=startY+range; if(maxY>(s8)lbl_802CA518[11]-1) maxY=(s8)lbl_802CA518[11]-1;
    for(row=minY;row<=maxY;row++) {
        for(x=minX;x<=maxX;x++) {
            u8 id=map[((s8)row<<6)+(s8)x+13];
            if(id && id!=*((u8 *)arg0+0x198)) {
                if(id) unit=(u8 *)lbl_802B14E4+(id-1)*0x280; else unit=NULL;
                if(!(flags[1]&4) && arg2 && arg2(unit)) continue;
                if(!fn_801044FC((u8 *)unit+0x1a4)) continue;
                if((u8)rank>fn_8003863C(unit)) continue;
                {
                u8 *grid=lbl_802CA518;
                score=0; dir=lbl_80273B78; baseX=(s16)x; k=score; bestScore=0x80000000;
                do {
                    s32 index;
                    nx=baseX+dir[0]; ny=(s16)row+dir[1];
                    index=(s8)nx+((s8)ny<<6);
                    if((s16)(*(s16 **)(grid+0x14190))[index]>=0) {
                        u8 *p=grid+index;
                        if((s8)p[0xe18e]==0) {
                            u8 occupant=p[13];
                            if(occupant==0 || occupant==*((u8 *)arg0+0x198)) {
                                score+=fn_800F7994(arg0,nx,ny);
                                score+=fn_800F7838(arg0,nx,ny);
                                score-=(fn_800FCF48((s8)nx,(s8)ny)>>4)&0xfff;
                                if(bestScore<score) {chosenX=nx;chosenY=ny;bestScore=score;}
                            }
                        }
                    }
                    ++k; score=0; dir+=2;
                } while(k<4);
                }
                if((u32)(bestScore+0x80000000)!=0) {
                    rank=fn_8003863C(unit);bestX=chosenX;bestY=chosenY;best=unit;
                }
            }
        }
    }
    if(best) {
        fn_800FB96C(16,(s8)bestX,(s8)bestY,best,*((u8 *)best+0x19e),*((u8 *)best+0x19f),(s8)slot,0,0);
    }
    return best!=NULL;
}
#pragma opt_strength_reduction reset

#pragma use_lmw_stmw on
u32 fn_8010E3F0(void *arg0, s32 arg1) {
    u8 fn_80015610(s32, s32);
    u8 fn_8001DD54(void *);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void *fn_80037BBC(void *, s32);
    s8 fn_8003A398(void *);
    s32 fn_800F7838(void *, s16, s16);
    s32 fn_800F7994(void *, s16, s16);
    void fn_800FB96C(s32, s8, s8, s32, s8, s8, s8, s32);
    u32 fn_800FCF48(s8, s8);
    void fn_800FE2A0(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    s32 fn_8010E804(void *, s16, s16, s32, u8);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802CA518[151280];
    extern u16 lbl_802B14E4[];

    s32 sp14;
    s32 sp10;
    s32 sp8;
    s16 bestY;
    s16 bestX;
    s32 bestScore;
    void *list;
    s8 range;
    s32 yMax;
    s32 xMax;
    s8 yCur;
    s32 xCur;
    s32 rowOff;
    u8 *row;
    u8 id;
    u8 ok;
    s32 score;
    s32 a;
    s32 b;
    s8 y;
    s8 x;
    s32 count;
    void *other;
    u8 *mapBase;
    void *self;
    u8 *map;
    u8 *flags;

    flags = lbl_8032B3C0;
    map = lbl_802CA518;
    self = arg0;
    sp10 = arg1;
    mapBase = map;
    if ((flags[1] & 4) != 0) {
        return 0;
    }
    count = 0;
    for (y = (s8)map[9]; y <= (s8)map[0xB] - 1; y++) {
        row = map + ((s8)y << 6);
        for (x = (s8)map[8]; x <= (s8)map[0xA] - 1; x++) {
            id = row[(s8)x + 0xD];
            if (id != 0) {
                if (id != 0) {
                    other = (u8 *)lbl_802B14E4 + (id - 1) * 0x280;
                } else {
                    other = NULL;
                }
                if ((fn_80015610(*(s32 *)((u8 *)self + 0x190), *(s32 *)((u8 *)other + 0x190)) != 1)
                    && ((*(u32 *)((u8 *)other + 0x254) & 1) != 0)) {
                    count += 1;
                }
            }
        }
    }
    if (count < 3) {
        return 0;
    }
    if (((flags[1] & 2) != 0) || ((*(u32 *)((u8 *)self + 0x254) & 0x03000000) != 0)) {
        fn_80022DAC(mapBase, 5, -1);
        fn_80022FD8(mapBase, 5);
        {
            s8 uy = (s8)((u8 *)self)[0x19F];
            s8 ux = (s8)((u8 *)self)[0x19E];
            s16 *tbl = *(s16 **)(mapBase + 0x14190);
            tbl[(s8)ux + ((s8)uy << 6)] = 0;
        }
    } else {
        fn_800FE2A0(self, 5, -1);
    }
    bestScore = -1;
    bestX = -1;
    list = fn_80037BBC(self, sp10);
    {
        s8 ux = (s8)((u8 *)self)[0x19E];
        s8 uy = (s8)((u8 *)self)[0x19F];
        range = fn_8003A398(self);
        sp14 = ux - range;
        if (sp14 < (s8)map[8]) {
            sp14 = (s8)map[8];
        }
        yCur = uy - range;
        if (yCur < (s8)map[9]) {
            yCur = (s8)map[9];
        }
        xMax = ux + range;
        if (xMax > (s8)map[0xA] - 1) {
            xMax = (s8)map[0xA] - 1;
        }
        yMax = uy + range;
        if (yMax > (s8)map[0xB] - 1) {
            yMax = (s8)map[0xB] - 1;
        }
    }
    for (; yCur <= yMax; yCur++) {
        xCur = sp14;
        rowOff = (s8)yCur << 6;
        for (; xCur <= xMax; xCur++) {
            if (((s16 *)(map + 0x610E))[(s8)xCur + rowOff] >= 0
                && (s8)map[rowOff + ((s8)xCur + 0xE18E)] == 0
                && fn_800FE84C((s8)xCur, (s8)yCur) == 0) {
                id = map[rowOff + ((s8)xCur + 0xD)];
                if (id == 0 || id == ((u8 *)self)[0x198]) {
                    if (*(u32 *)list != 0) {
                        ok = fn_8001DD54(self);
                    } else {
                        ok = 0;
                    }
                    score = fn_8010E804(self, (s16)xCur, (s16)yCur, 1, ok);
                    if (score != 0 && score > bestScore) {
                        bestScore = score;
                        bestX = (s16)xCur;
                        bestY = (s16)yCur;
                    } else if (score == bestScore) {
                        a = fn_800F7994(self, bestX, bestY) + fn_800F7838(self, bestX, bestY);
                        a -= (fn_800FCF48((s8)bestX, (s8)bestY) >> 4) & 0xFFF;
                        b = fn_800F7994(self, (s16)xCur, (s16)yCur) + fn_800F7838(self, (s16)xCur, (s16)yCur);
                        b -= (fn_800FCF48((s8)(s16)xCur, (s8)(s16)yCur) >> 4) & 0xFFF;
                        if (a < b) {
                            bestX = (s16)xCur;
                            bestY = (s16)yCur;
                        }
                    }
                }
            }
        }
    }
    if (bestScore != -1) {
        sp8 = 0;
        fn_800FB96C(0x10, (s8)bestX, (s8)bestY, 0, (s8)bestX, (s8)bestY, (s8)sp10, 0);
    }
    return (u32)((-1 - bestScore) | (bestScore + 1)) >> 31;
}
s32 fn_8010E804(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 fn_80015610(s32, s32);
    void fn_8001F9C4(u8 *, s8, s8, s8, s32);
    void fn_80022DAC(u8 *, s32, s32);
    void fn_80022FD8(u8 *, s32);
    u8 fn_800FE84C(s8, s8);
    extern u8 lbl_802CA518[151280];
    extern u16 lbl_802B14E4[];
    int var_r26;
    int var_r28;
    register u8 temp_r3;
    int temp_r0;
    s32 var_r27;
    unsigned int temp_r30;
    register s32 var_r25;
    u8 *var_r21;
    s32 var_r24;
    s32 var_r23;
    int var_r7;
    u8 *temp_r21;

    var_r28 = 0;
    fn_80022FD8(lbl_802CA518, 6);
    fn_80022DAC(lbl_802CA518, 0xB, -1);
    fn_8001F9C4(lbl_802CA518, arg1, arg2, arg4, 1);
    fn_8001F9C4(lbl_802CA518, arg1, arg2, arg3 - 1, -1);
    fn_80022FD8(lbl_802CA518, 5);

    var_r27 = (s16)arg1 - (s16)arg4;
    if (var_r27 < (s8)lbl_802CA518[8]) {
        var_r27 = (s8)lbl_802CA518[8];
    }
    var_r7 = (s16)arg2 - (s16)arg4;
    if (var_r7 < (s8)lbl_802CA518[9]) {
        var_r7 = (s8)lbl_802CA518[9];
    }
    var_r26 = (s16)arg1 + (s16)arg4;
    temp_r0 = (s8)lbl_802CA518[0xA] - 1;
    if (var_r26 > temp_r0) {
        var_r26 = temp_r0;
    }
    var_r25 = (s16)arg2 + (s16)arg4;
    temp_r0 = (s8)lbl_802CA518[0xB] - 1;
    if (var_r25 > temp_r0) {
        var_r25 = temp_r0;
    }

    var_r24 = var_r7;
    for (; var_r24 <= (int)var_r25; ++var_r24) {
    var_r23 = var_r27;
    temp_r30 = (s8)var_r24 << 6;
    goto loop_inner_cmp;
loop_inner:
    if (*(s16 *)(lbl_802CA518 + (((s8)var_r23 + temp_r30) * 2) + 0x818E) >= 0) {
        temp_r21 = lbl_802CA518 + temp_r30 + (s8)var_r23;
        if (((s8)temp_r21[0xE18E] == 0) && (fn_800FE84C((s8)var_r23, (s8)var_r24) == 0)) {
            temp_r3 = temp_r21[0xD];
            if (temp_r3) {
                if (temp_r3) {
                    var_r21 = (u8 *)lbl_802B14E4 + (temp_r3 - 1) * 0x280;
                } else {
                    var_r21 = NULL;
                }
                if ((fn_80015610(*(s32 *)((u8 *)arg0 + 0x190), *(s32 *)(var_r21 + 0x190)) != 1)
                    && (*(s32 *)(var_r21 + 0x254) & 1)) {
                    ++var_r28;
                }
            }
        }
    }
    var_r23 += 1;
loop_inner_cmp:
    if (var_r23 <= var_r26) {
        goto loop_inner;
    }
    }
    return var_r28;
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
s32 fn_8010EA20(void *arg0, s32 arg1, u8 (*arg2)(void *)) {
    u8 fn_8001DD54(void *, void *);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void **fn_80037BBC(void *, s32);
    s8 fn_8003A398(void *);
    s8 fn_8003B2D0(void *);
    s32 fn_800F7838(void *, s8, s8);
    s32 fn_800F7994(void *, s8, s8);
    void fn_800FB96C(s32, s8, s8, void *, u8, u8, s8, s32, s32);
    u32 fn_800FCF48(s8, s8);
    void fn_800FDDBC(s8, s8, u8, u8, s32);
    void fn_800FE2A0(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802CA518[];
    extern u16 lbl_802B14E4[];
    extern f32 lbl_8036A170;

    u8 *flags;
    u8 *map;
    s32 slot;
    u8 (*cb)(void *);
    u8 bestCost;
    s16 bestX;
    s16 bestY;
    void *best;
    s32 minX;
    s32 maxX;
    s32 maxY;
    s32 minY;
    void **itemSlot_store[1];
    s8 ax;
    s8 ay;
    u8 extra;
    s32 range;
    s32 x;
    s32 y;
    void *unit;
    u8 id;
    u8 extra2;
    u8 kind;
    s32 bestScore;
    s8 iy;
    s8 ix;
    s32 score;
    s32 idx;
    s32 idx2;
    s8 maximum;
    f32 numerator;
    f32 denominator;
    s32 ratio;
    s16 chosenX;
    s16 chosenY;
    u8 occ;
    u8 *mapBase;
    u8 *rowY;
    void *item;
    u8 *map2;
    u8 *map3;

    flags = lbl_8032B3C0;
    slot = arg1;
    cb = arg2;
    map = lbl_802CA518;
    if ((flags[1] & 2) || (*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        fn_80022DAC(map, 5, -1);
        fn_80022FD8(map, 5);
        (*(s16 **)(map + 0x14190))[(s8)*((u8 *)arg0 + 0x19e) + ((s8)*((u8 *)arg0 + 0x19f) << 6)] = 0;
    } else {
        fn_800FE2A0(arg0, 5, -1);
    }
    bestCost = 0x64;
    best = NULL;
    itemSlot_store[0] = fn_80037BBC(arg0, slot);
    item = *itemSlot_store[0];
    ax = (s8)*((u8 *)arg0 + 0x19e);
    ay = (s8)*((u8 *)arg0 + 0x19f);
    if (item != NULL) {
        extra = (u8)fn_8001DD54(item, arg0);
    } else {
        extra = 0;
    }
    range = (s8)fn_8003A398(arg0);
    range += (u8)extra;
    minX = ax - range;
    if (minX < (s8)lbl_802CA518[8]) {
        minX = (s8)lbl_802CA518[8];
    }
    minY = ay - range;
    mapBase = lbl_802CA518;
    if (minY < (s8)mapBase[9]) {
        minY = (s8)mapBase[9];
    }
    maxX = ax + range;
    if (maxX > (s8)lbl_802CA518[10] - 1) {
        maxX = (s8)lbl_802CA518[10] - 1;
    }
    maxY = ay + range;
    if (maxY > (s8)lbl_802CA518[11] - 1) {
        maxY = (s8)lbl_802CA518[11] - 1;
    }
    map2 = lbl_802CA518;
    map3 = lbl_802CA518;
    for (y = minY; y <= maxY; y++) {
        for (x = minX; x <= maxX; x++) {
            id = map3[((s8)y << 6) + (s8)x + 0xD];
            if (id != 0) {
                if (id != 0) {
                    unit = (u8 *)lbl_802B14E4 + (id - 1) * 0x280;
                } else {
                    unit = NULL;
                }
                if (unit != arg0) {
                    if ((flags[1] & 4) || cb == NULL || cb(unit) == 0) {
                        if (*(u32 *)((u8 *)unit + 0x254) & 1) {
                            item = *itemSlot_store[0];
                            if (item != NULL) {
                                extra2 = (u8)fn_8001DD54(item, arg0);
                            } else {
                                extra2 = 0;
                            }
                            item = *itemSlot_store[0];
                            if (item != NULL) {
                                kind = *((u8 *)item + 0x1D);
                            } else {
                                kind = 0;
                            }
                            fn_800FDDBC((s8)*((u8 *)unit + 0x19e), (s8)*((u8 *)unit + 0x19f), kind, extra2, 6);
                            bestScore = 0x80000000;
                            for (iy = (s8)mapBase[9]; iy <= (s8)lbl_802CA518[11] - 1; iy++) {
                                rowY = map + ((s8)iy << 6);
                                for (ix = (s8)lbl_802CA518[8]; ix <= (s8)lbl_802CA518[10] - 1; ix++) {
                                    idx = (s8)ix + ((s8)iy << 6);
                                    idx2 = idx * 2;
                                    if (*(s16 *)(map + idx2 + 0x610e) >= 0
                                        && (s8)rowY[(s32)ix + 0xE18E] == 0
                                        && fn_800FE84C(ix, iy) == 0
                                        && *(u16 *)(map2 + idx2 + 0xC18E) != 0) {
                                        occ = rowY[(s8)ix + 0xD];
                                        if (occ == 0 || occ == *((u8 *)arg0 + 0x198)) {
                                            score = fn_800F7994(arg0, ix, iy);
                                            score += fn_800F7838(arg0, ix, iy);
                                            score -= (fn_800FCF48(ix, iy) >> 4) & 0xFFF;
                                            if (bestScore < score) {
                                                bestScore = score;
                                                chosenX = (s16)ix;
                                                chosenY = (s16)iy;
                                            }
                                        }
                                    }
                                }
                            }
                            if ((u32)(bestScore + 0x80000000) != 0) {
                                maximum = fn_8003B2D0(unit);
                                numerator = (f32)(s8)*((u8 *)unit + 0x1A8);
                                denominator = (f32)maximum;
                                ratio = (s32)((lbl_8036A170 * numerator) / denominator);
                                if ((u8)ratio <= bestCost) {
                                    bestCost = (u8)ratio;
                                    bestX = chosenX;
                                    bestY = chosenY;
                                    best = unit;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (best != NULL) {
        fn_800FB96C(0x10, (s8)bestX, (s8)bestY, best,
            *((u8 *)best + 0x19e), *((u8 *)best + 0x19f), (s8)slot, 0, 0);
    }
    return best != NULL;
}
#pragma opt_strength_reduction reset
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw reset

void fn_8010EF34(void) {
    M2C_UNK fn_8010EF74();
    fn_8010EF74();
}

void fn_8010EF54(void) {
    M2C_UNK fn_8010EF74();
    fn_8010EF74();
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
s32 fn_8010EF74(void *arg0, s32 arg1, u8 (*arg2)(void *)) {
    s32 fn_8001DD54(void *,void *);
    void fn_80022DAC(void *,s32,s32); void fn_80022FD8(void *,s32);
    void **fn_80037BBC(void *,s32);
    s8 fn_8003A398(void *); s8 fn_8003B2D0(void *);
    extern f32 lbl_8036A170;
    s32 fn_800F7838(void *,s16,s16); s32 fn_800F7994(void *,s16,s16);
    void fn_800FB96C(s32,s8,s8,void *,u8,u8,s8,s32,s32);
    u32 fn_800FCF48(s8,s8);
    void fn_800FE2A0(void *,s32,s32); void fn_80100D18(void *,void *,s32);
    extern u8 lbl_8032B3C0[],lbl_802CA518[];
    extern u16 lbl_802B14E4[];
    extern s16 lbl_80273B78[];
    u8 *flags=lbl_8032B3C0;
    u8 *map=lbl_802CA518;
    s16 bestX,bestY;
    void *best;
    s32 minX,maxX,maxY,row;
    s32 slot=arg1;
    s32 range,minY;
    s32 startX;
    s32 startY;
    void *item;
    u8 extra;
    s32 k,score;
    s32 bestScore;
    s16 ny,nx;
    void *unit;
    s16 *dir;
    s32 rank;
    s16 chosenX,chosenY;
    s32 x;
    s32 ratio;
    if ((flags[1]&2) || (*(u32 *)((u8 *)arg0+0x254)&0x03000000)) {
        fn_80022DAC(map,5,-1); fn_80022FD8(map,5);
        (*(s16 **)(map+0x14190))[(s8)*((u8 *)arg0+0x19e)+((s8)*((u8 *)arg0+0x19f)<<6)]=0;
    } else fn_800FE2A0(arg0,5,-1);
    fn_80100D18(arg0,fn_80037BBC(arg0,slot),-1);
    startX=*(s8 *)((u8 *)arg0+0x19e); startY=*(s8 *)((u8 *)arg0+0x19f);
    best=NULL; rank=100;
    item=*fn_80037BBC(arg0,slot);
    if(item) extra=fn_8001DD54(item,arg0); else extra=0;
    range=(s8)fn_8003A398(arg0); range+=(u8)extra;
    minX=startX-range; if(minX<(s8)lbl_802CA518[8]) minX=(s8)lbl_802CA518[8];
    minY=startY-range; if(minY<(s8)lbl_802CA518[9]) minY=(s8)lbl_802CA518[9];
    maxX=startX+range; if(maxX>(s8)lbl_802CA518[10]-1) maxX=(s8)lbl_802CA518[10]-1;
    maxY=startY+range; if(maxY>(s8)lbl_802CA518[11]-1) maxY=(s8)lbl_802CA518[11]-1;
    for(row=minY;row<=maxY;row++) {
        for(x=minX;x<=maxX;x++) {
            u8 id=map[((s8)row<<6)+(s8)x+13];
            if(id && id!=*((u8 *)arg0+0x198)) {
                if(id) unit=(u8 *)lbl_802B14E4+(id-1)*0x280; else unit=NULL;
                if(!(flags[1]&4) && arg2 && arg2(unit)) continue;
                if((*(u32 *)((u8 *)unit+0x254)&1)==0) continue;
                {
                    s8 maximum=fn_8003B2D0(unit);
                    u8 value=*((u8 *)unit+0x1a8);
                    f32 numerator=(f32)(s8)value;
                    f32 denominator=(f32)maximum;
                    ratio=(s32)((lbl_8036A170*numerator)/denominator);
                }
                if((u8)ratio>(u8)rank) continue;
                {
                u8 *grid=lbl_802CA518;
                score=0; dir=lbl_80273B78; k=score; bestScore=0x80000000;
                do {
                    s32 index;
                    nx=(s16)x+dir[0]; ny=(s16)row+dir[1];
                    index=(s8)nx+((s8)ny<<6);
                    if((s16)(*(s16 **)(grid+0x14190))[index]>=0) {
                        u8 *p=grid+index;
                        if((s8)p[0xe18e]==0) {
                            u8 occupant=p[13];
                            if(occupant==0 || occupant==*((u8 *)arg0+0x198)) {
                                score+=fn_800F7994(arg0,nx,ny);
                                score+=fn_800F7838(arg0,nx,ny);
                                score-=(fn_800FCF48((s8)nx,(s8)ny)>>4)&0xfff;
                                if(bestScore<score) {chosenX=nx;chosenY=ny;bestScore=score;}
                            }
                        }
                    }
                    ++k; score=0; dir+=2;
                } while(k<4);
                }
                if((u32)(bestScore+0x80000000)!=0) {
                    rank=ratio;bestX=chosenX;bestY=chosenY;best=unit;
                }
            }
        }
    }
    if(best) {
        fn_800FB96C(16,(s8)bestX,(s8)bestY,best,*((u8 *)best+0x19e),*((u8 *)best+0x19f),(s8)slot,0,0);
    }
    return best!=NULL;
}

s32 fn_8010F3F4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5)
{
    extern u8 lbl_802CA518[];
    extern s16 lbl_80273B78[];

    extern s32 fn_800F7994(void *, s32, s32);
    extern s32 fn_800F7838(void *, s32, s32);
    extern u32 fn_800FCF48(s32, s32);

    u8 *base;
    s16 *direction;
    s16 *heightTable;
    s32 x;
    s32 y;
    s32 dx;
    s32 dy;
    s32 index;
    s32 score;
    s32 bestScore;
    s32 i;
    u32 value;

    base = lbl_802CA518;
    direction = lbl_80273B78;
    heightTable = *(s16 **)(base + 0x14190);

    bestScore = (s32)0x80000000;
    score = 0;

    for (i = 0; i < 4; i++, direction += 2) {
        x = (s16)((s16)arg1 + direction[0]);
        y = (s16)((s16)arg2 + direction[1]);

        index = (s8)x + ((s8)y << 6);

        if (heightTable[index] < 0) {
            continue;
        }

        if ((s8)base[0xE18E + index] != 0) {
            continue;
        }

        value = base[0xD + index];

        if (value != 0) {
            if (value != *((u8 *)arg0 + 0x198)) {
                continue;
            }
        }

        score += fn_800F7994(arg0, (s8)x, (s8)y);
        score += fn_800F7838(arg0, (s8)x, (s8)y);

        value = fn_800FCF48((s8)x, (s8)y);
        score -= (value >> 4) & 0xFFF;

        if (score > bestScore) {
            *(s16 *)arg4 = (s16)x;
            *(s16 *)arg5 = (s16)y;
            bestScore = score;
        }
    }

    return bestScore != (s32)0x80000000;
}

#pragma opt_strength_reduction reset

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

void *fn_8010F9BC(void *arg0, s8 arg1, s8 arg2, u8 arg3) {
    s32 count;
    s32 i;
    char *p;
    s32 dx;
    s32 dy;

    count = *(s32 *)((char *)arg0 + 0x200);
    p = (char *)arg0;
    for (i = 0; i < count; i++, p += 8) {
        dx = arg1 - *(s8 *)(p + 0);
        dy = arg2 - *(s8 *)(p + 1);
        if (dx * dx + dy * dy <= 1) {
            if (arg3 == 0 || arg3 == *(u8 *)(p + 2)) {
                return p;
            }
        }
    }
    return NULL;
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

void fn_8010FDB8(void *arg0, s8 arg1, s8 arg2, s8 arg3, void *src) {
    char *entry;
    u16 half;
    u8 byte;

    half = *(u16 *)((char *)src + 0xE);
    entry = (char *)arg0 + (*(s32 *)((char *)arg0 + 0x200) << 3);
    byte = *(u8 *)((char *)src + 0x18);
    *(u8 *)(entry + 0) = arg1;
    *(u8 *)(entry + 1) = arg2;
    *(u8 *)(entry + 2) = 7;
    *(u8 *)(entry + 3) = arg3;
    *(u8 *)(entry + 0xA) = 0;
    *(s32 *)((char *)arg0 + 0x200) = *(s32 *)((char *)arg0 + 0x200) + 1;
    *(u8 *)(entry + 4) = half;
    *(u8 *)(entry + 5) = byte;
    *(u8 *)(entry + 6) = 0;
    *(u8 *)(entry + 7) = 0;
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

void *fn_8010FEEC(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    char *temp_r8;

    temp_r8 = (char *)arg0 + (*(s32 *)((char *)arg0 + 0x200) << 3);
    *(u8 *)(temp_r8 + 0x0) = arg1;
    *(u8 *)(temp_r8 + 0x1) = arg2;
    *(u8 *)(temp_r8 + 0x2) = arg3;
    *(u8 *)(temp_r8 + 0x3) = arg4;
    *(u8 *)(temp_r8 + 0xA) = 0;
    *(s32 *)((char *)arg0 + 0x200) = *(s32 *)((char *)arg0 + 0x200) + 1;
    return temp_r8;
}

void *fn_8010FF24(void *arg0, s8 arg1, s8 arg2, u8 arg3) {
    s32 count;
    s32 i;
    char *p;

    count = *(s32 *)((char *)arg0 + 0x200);
    p = (char *)arg0;
    for (i = 0; i < count; i++, p += 8) {
        if (arg1 == *(s8 *)(p + 0) && arg2 == *(s8 *)(p + 1)) {
            if (arg3 == 0 || arg3 == *(u8 *)(p + 2)) {
                return p;
            }
        }
    }
    return NULL;
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

s32 fn_80110048(void *arg0) {
    extern void *lbl_8032BD5C[0x20];
    void **p;
    s32 i;

    p = lbl_8032BD5C;
    for (i = 0; i < 0x20; i++) {
        if (*p == NULL) {
            lbl_8032BD5C[i] = arg0;
            goto done;
        }
        p++;
    }
    i = -1;
done:
    return i;
}

#pragma peephole off
s32 fn_80110094(void) {
    extern u32 lbl_8032BD5C[32];
    u32 *p = lbl_8032BD5C;
    s32 ret;

    p[0] = 0;
    ret = 1;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    p[11] = 0;
    p[12] = 0;
    p[13] = 0;
    p[14] = 0;
    p[15] = 0;
    p[16] = 0;
    p[17] = 0;
    p[18] = 0;
    p[19] = 0;
    p[20] = 0;
    p[21] = 0;
    p[22] = 0;
    p[23] = 0;
    p[24] = 0;
    p[25] = 0;
    p[26] = 0;
    p[27] = 0;
    p[28] = 0;
    p[29] = 0;
    p[30] = 0;
    p[31] = 0;
    return ret;
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
