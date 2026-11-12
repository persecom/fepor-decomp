/* Functions from 0x8014A370 to 0x8014E350, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80367B00;
extern s32 lbl_80367B04;
extern u8 lbl_80367B0E;
extern u8 lbl_80367B44;

typedef struct { u8 a; u8 b; } Entry;
typedef struct { u8 pad[0x544]; s8 count; Entry entries[256]; } Obj;
extern u8 lbl_80367B08;
extern u8 lbl_80367B09;
extern u8 lbl_80367B0A;
extern u8 lbl_80367B0B;
extern u16 lbl_80292F60[];
extern f32 lbl_8036A7D0;
extern f32 lbl_8036A7D4;
extern f32 lbl_8036A7D8;
extern f32 lbl_8036A7DC;
extern f32 lbl_8036A7E0;
extern f64 lbl_8036A7E8;
extern u8 lbl_80367B0C;
extern u8 lbl_80367B0D;

void fn_800C426C(s32);
s32 fn_800C42AC(s32);
void *fn_8003FCCC(void *);
void fn_80024398(void *, s32, s32);

extern s32 lbl_80367B00;
extern u8 lbl_80367B0D;

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

#pragma cplusplus on

#pragma cplusplus off

extern u16 *g_AccessoryArray;

void fn_8017A430(void *, s32, void *);
void fn_8017A5EC(void *, u8);
void fn_8017A574(void *, s32);
void fn_8017A5C4(void *, u16);
void fn_8017A4CC(void *, s32, s32);
void fn_80105A30(void *, void *);
void fn_80014F94(void *, void *);
void fn_80199B88(void *, void *);
void fn_800BDAF8(void *, void *);
void fn_8017A480(void *, s32, void *);
void fn_8017A3E0(void *, s32, u8);
#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset
extern u16 lbl_80367B68;

void fn_80234450(s32, u32);

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern u16 lbl_80367B14;
extern u16 lbl_80367B14;
#include "common.h"
extern f32 lbl_8036A7F0;
extern u8 lbl_802CA518[];
extern s32 lbl_80367B00;
extern s32 lbl_80367B04;
extern u8 lbl_80367B0D;

void fn_801475FC(s32, s32); /* extern */
#include "global.h"

extern void* fn_80019F04();
#include "common.h"
extern u16 lbl_802CA264[50];
extern u16 lbl_802B14E4[];
#include "common.h"
#include "ef.h"
#include "global.h"

extern u8 lbl_80330708[];
extern u8 lbl_80277060[];
extern u8 lbl_8032BB58[];
#include "global.h"
extern u8 lbl_80330708[];

void fn_8014CF10(s8* arg0, s8 arg1, s8 arg2) {
    s8 temp = *arg0;
    *(arg0 + (temp * 2 + 0x545)) = arg1;
    *(arg0 + (temp * 2 + 0x546)) = arg2;
    *arg0 = temp + 1;
}

#pragma opt_strength_reduction off
s8 fn_8014CF48(Obj *arg0, s32 arg1) {
    s32 fn_80106DC8(s32, void *);
    Entry sp8[0x40];
    s32 i;
    Entry *p;
    Entry *q;
    s32 n;
    s32 count;
    s32 ctr;
    u8 b;
    u8 a;

    arg0->count = 0;
    count = fn_80106DC8(arg1, sp8);
    i = 0;
    if (count > 0) {
        n = count - 8;
        if (count > 8) {
            p = sp8;
            for (ctr = (u32)(n + 7) >> 3; ctr != 0; ctr--) {
                if (n <= 0) break;
                b = p->b; a = p->a;
                arg0->entries[(s8)arg0->count].a = a;
                arg0->entries[(s8)arg0->count].b = b;
                arg0->count++;
                b = p[1].b; a = p[1].a;
                arg0->entries[(s8)arg0->count].a = a;
                arg0->entries[(s8)arg0->count].b = b;
                arg0->count++;
                b = p[2].b; a = p[2].a;
                arg0->entries[(s8)arg0->count].a = a;
                arg0->entries[(s8)arg0->count].b = b;
                arg0->count++;
                b = p[3].b; a = p[3].a;
                arg0->entries[(s8)arg0->count].a = a;
                arg0->entries[(s8)arg0->count].b = b;
                arg0->count++;
                b = p[4].b; a = p[4].a;
                arg0->entries[(s8)arg0->count].a = a;
                arg0->entries[(s8)arg0->count].b = b;
                arg0->count++;
                b = p[5].b; a = p[5].a;
                arg0->entries[(s8)arg0->count].a = a;
                arg0->entries[(s8)arg0->count].b = b;
                arg0->count++;
                b = p[6].b; a = p[6].a;
                arg0->entries[(s8)arg0->count].a = a;
                arg0->entries[(s8)arg0->count].b = b;
                i += 8;
                arg0->count++;
                b = p[7].b; a = p[7].a;
                p += 8;
                arg0->entries[(s8)arg0->count].a = a;
                arg0->entries[(s8)arg0->count].b = b;
                arg0->count++;
            }
        }
        q = &sp8[i];
        for (ctr = count - i; ctr != 0; ctr--) {
            if (i >= count) break;
            b = q->b; a = q->a;
            q++;
            arg0->entries[(s8)arg0->count].a = a;
            arg0->entries[(s8)arg0->count].b = b;
            arg0->count++;
        }
    }
    return (s8)count;
}
#pragma opt_strength_reduction reset

void fn_8014D204(Obj *arg0, s8 arg1, s8 arg2) {
    arg0->count = 0;
    {
        s8 idx = arg0->count;
        arg0->entries[idx].a = arg1;
    }
    {
        s8 idx = arg0->count;
        arg0->entries[idx].b = arg2;
    }
    arg0->count = arg0->count + 1;
}

void fn_8014D244(u8 *arg0, u8 arg1, u8 arg2) {
    arg0[arg1 + 0x14] = arg2;
}

void fn_8014D254(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 0x14) = arg1;
    M2C_FIELD(arg0, s8 *, 0x15) = arg2;
    M2C_FIELD(arg0, s8 *, 0x16) = arg3;
    M2C_FIELD(arg0, s8 *, 0x17) = arg4;
}

void fn_8014D268(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r5 = var_r4 - temp_r0;
    if (temp_r5 < 0) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + (temp_r0 - var_r4));
    } else {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + temp_r5);
    }
    if (var_r4 > 0x98967F) {
        var_r4 = 0x98967F;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4;
}

void fn_8014D2B0(void *arg0, u8 arg1) {
    u8 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x10);
    if (temp_r5 != arg1) {
        M2C_FIELD(arg0, u8 *, 0x51E) = temp_r5;
        M2C_FIELD(arg0, u8 *, 0x10) = arg1;
    }
}

void fn_8014D3B4(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x11);
    switch ((s32) temp_r0) {                        /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x11) = 3U;
        return;
    case 3:
        M2C_FIELD(arg0, u8 *, 0x11) = 1U;
        return;
    case 1:
        M2C_FIELD(arg0, u8 *, 0x11) = 2U;
        return;
    case 2:
        M2C_FIELD(arg0, u8 *, 0x11) = 0U;
        M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + 1);
        return;
    }
}

void fn_8014D678(void *arg0) {
 *(s32 *)((u8 *)arg0 + 0x64) = 0;
 *(s32 *)((u8 *)arg0 + 0x60) = 0;
 lbl_80330708[0x55] = 0;
 lbl_80330708[0x51] = 0;
}

void fn_8014D698(void *arg0, u8 arg1, u8 arg2, s32 arg3, u8 arg4) {
    void *fn_8000D2BC(void *);
    void fn_80016DE0(void);
    void fn_8003F670(s32);
    s32 fn_8003FCCC(void);
    void fn_8005C4C4(void *, s32);
    void fn_800BE068(void *);
    void fn_800C32A4(void *);
    void fn_800C341C(void *);
    void fn_80105D4C(void *, u8);
    void fn_8010FF90(void *);
    void fn_801998B0(void *);
    void fn_801A7CDC(void *);
    void *fn_801E45FC(void);
    extern u8 lbl_80277060[];
    extern u8 lbl_80330EAC[];
    extern u8 lbl_8032BB58[];
    extern u8 lbl_803200AC[];
    extern u8 lbl_803206EC[];
    u8 var_r27;
    s32 var_r26;
    s32 temp_r28;
    u32 *temp_r3;
    u32 count;
    u32 i;
    u8 *var_r29;
    u8 *var_r30;
    u8 *p;
    s32 j;

    var_r27 = arg2;
    var_r26 = arg3;
    *(s16 *)((u8 *)arg0 + 0) = 0;
    *(s16 *)((u8 *)arg0 + 2) = 0;
    *(s16 *)((u8 *)arg0 + 4) = 0;
    *(s16 *)((u8 *)arg0 + 6) = 0;
    *(s16 *)((u8 *)arg0 + 8) = 0;
    *(s16 *)((u8 *)arg0 + 0xA) = 0;
    *(s16 *)((u8 *)arg0 + 0xC) = 0;
    *(s16 *)((u8 *)arg0 + 0xE) = 0;
    *(u8 *)((u8 *)arg0 + 0x10) = 1;
    *(u8 *)((u8 *)arg0 + 0x54) = 4;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(u8 *)((u8 *)arg0 + 0x51) = 0;
    *(u8 *)((u8 *)arg0 + 0x55) = 0;
    *(u8 *)((u8 *)arg0 + 0x57) = arg4;
    *(s32 *)((u8 *)arg0 + 0x5C) = 0;
    *(s32 *)((u8 *)arg0 + 0x58) = 0;
    *(u8 *)((u8 *)arg0 + 0x51C) = arg1;
    fn_801998B0((u8 *)arg0 + 0x9C);
    *(u8 *)((u8 *)arg0 + 0xA6) = var_r27;
    *(u8 *)((u8 *)arg0 + 0x9F) = (*(u8 *)((u8 *)arg0 + 0x9F) & ~0x80) | ((var_r26 << 7) & 0x80);
    *(s32 *)((u8 *)arg0 + 0x80) = 0;
    *(s32 *)((u8 *)arg0 + 0x7C) = 0;
    *(s32 *)((u8 *)arg0 + 0x78) = 0;
    *(s32 *)((u8 *)arg0 + 0x74) = 0;
    *(s32 *)((u8 *)arg0 + 0x90) = 0;
    *(s32 *)((u8 *)arg0 + 0x8C) = 0;
    *(s32 *)((u8 *)arg0 + 0x88) = 0;
    *(s32 *)((u8 *)arg0 + 0x84) = 0;
    fn_801E45FC();
    temp_r28 = fn_8003FCCC();
    temp_r3 = fn_8000D2BC(lbl_80277060 + 0x1AF);
    var_r29 = (u8 *)temp_r3 + 4;
    count = temp_r3[0];
    var_r30 = var_r29 + var_r27;
    for (i = 0; i < count; i++) {
        if (var_r30[5] & 2) {
            fn_80105D4C((u8 *)arg0 + 0x74, var_r29[0]);
        }
        if (var_r30[5] & 1) {
            fn_80105D4C((u8 *)arg0 + 0x84, var_r29[0]);
        }
        var_r30 += 0x18;
        var_r29 += 0x18;
    }
    fn_8005C4C4(fn_801E45FC(), 4);
    fn_8003F670(temp_r28);
    fn_800BE068((u8 *)arg0 + 0xB4);
    fn_801A7CDC(lbl_80330EAC);
    fn_80016DE0();
    fn_8010FF90(lbl_8032BB58);
    fn_800C341C(lbl_803200AC);
    fn_800C32A4(lbl_803206EC);
    p = (u8 *)arg0;
    for (j = 0; j < 5; j++) {
        p[0x3C4] = 0;
        p[0x3C5] = 0;
        *(s16 *)(p + 0x3C6) = 0;
        *(s32 *)(p + 0x3C8) = 0;
        p[0x3CC] = 0;
        p[0x3CD] = 0;
        *(s16 *)(p + 0x3CE) = 0;
        *(s32 *)(p + 0x3D0) = 0;
        p[0x3D4] = 0;
        p[0x3D5] = 0;
        *(s16 *)(p + 0x3D6) = 0;
        *(s32 *)(p + 0x3D8) = 0;
        p[0x3DC] = 0;
        p[0x3DD] = 0;
        *(s16 *)(p + 0x3DE) = 0;
        *(s32 *)(p + 0x3E0) = 0;
        p[0x3E4] = 0;
        p[0x3E5] = 0;
        *(s16 *)(p + 0x3E6) = 0;
        *(s32 *)(p + 0x3E8) = 0;
        p[0x3EC] = 0;
        p[0x3ED] = 0;
        *(s16 *)(p + 0x3EE) = 0;
        *(s32 *)(p + 0x3F0) = 0;
        p[0x3F4] = 0;
        p[0x3F5] = 0;
        *(s16 *)(p + 0x3F6) = 0;
        *(s32 *)(p + 0x3F8) = 0;
        p[0x3FC] = 0;
        p[0x3FD] = 0;
        *(s16 *)(p + 0x3FE) = 0;
        *(s32 *)(p + 0x400) = 0;
        p += 0x40;
    }
}

s32 fn_8014D8BC(void *arg0) {
    u8 v;
    s32 ret;

    v = *(u8 *)((u8 *)arg0 + 0x10);
    ret = 0;
    if (v < 9U) {
        if (v == 0U) {
            ret = 1;
        }
    }
    return ret;
}

s32 fn_8014D8DC(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x10);
    if ((temp_r0 >= 9U) || (temp_r0 == 0)) {
        return 1;
    }
    return 0;
}

void fn_8014D8FC(void *arg0) {
    M2C_UNK fn_80019F04(u8);
    fn_80019F04(M2C_FIELD(arg0, u8 *, 0x10));
}

s32 fn_8014DA68(void) {
    extern u8 lbl_80330708[];
    return ((lbl_80330708[0x9F] >> 7) & 1) ? 1 : 0;
}

void fn_8014DBE0(u8 *base, s32 idx, u8 *out0, u16 *out1, s32 *out2) {
    idx *= 8;
    *out0 = base[idx];
    base += idx;
    *out1 = *(u16 *)(base + 2);
    *out2 = *(s32 *)(base + 4);
}

s32 fn_8014DC04(void *arg0) {
    s32 var_r4;
    s32 var_ctr;
    void *var_r3;

    var_r3 = arg0;
    var_r4 = 0;
    var_ctr = 4;

loop_1:
    if (((u16*)var_r3)[1] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[5] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[9] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[13] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[17] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[21] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[25] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[29] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[33] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[37] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    var_r3 = (char*)var_r3 + 0x50;
    var_r4 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        return -1;
    }
    goto loop_1;
}

void fn_8014DE70(s32 arg0) {
    extern u8 lbl_802937EC[];
    extern s8 lbl_80367700;
    extern s8 lbl_80367701;
    lbl_80367701 = 0;
    lbl_80367700 = 0;
    fn_8000CAA0(lbl_802937EC, arg0);
}

void fn_8014DF68(void *arg0)
{
    extern u8 lbl_8036723A;
    extern u8 lbl_80277238[];
    extern s32 lbl_80367110;
    extern s32 lbl_80367B84;
    extern void **lbl_80367B70;

    extern void fn_8000C070(void *, s32);
    extern void fn_800BDBC8(void *, void *);
    extern void fn_8011D908(void *, void *);

    if (lbl_8036723A == 9) {
        fn_8000C070(arg0, 0x63);
    } else {
        fn_800BDBC8(
            (u8 *)lbl_80330708 + 0xB4,
            lbl_80277238 + 0x79
        );

        lbl_80367110 &= ~1;

        fn_8011D908(
            lbl_80367B70[lbl_80367B84],
            arg0
        );
    }
}

void fn_8014DFE8(s32 arg0) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_80367B94;
    fn_80024398(&lbl_80367B94, arg0, 0);
}

#pragma global_optimizer off
void fn_8014E014(void) {
    void fn_8005B918(void *);
    u8 fn_8005B888(s32);
    void *fn_8005B8AC(s32);
    s32 fn_8005B8CC(void);
    void fn_8005B8E8(void);
    void fn_80231D94(void *, void *, ...);
    void fn_8003FCCC(void *);
    void fn_8005C4C4(void *, s32);
    void fn_800056CC(void *, void *, ...);
    void *fn_8000D1B4(s32);
    u8 fn_80019CC0(void);
    s32 fn_800C42AC(s32);
    char *fn_8000E0E4(void *);
    s32 strlen(char *);
    extern u8 lbl_80277238[];
    extern s32 lbl_80367B78;
    extern u32 *lbl_80367B70;
    extern u8 *lbl_80367B74;
    extern s32 lbl_80367B7C;
    extern s32 lbl_80367B80;
    char sp8[0x18];
    s32 i;
    s32 j;
    char *s;
    char *p;
    u8 flag;
    u8 c;
    u32 *arr;
    u32 idx;
    u32 val;

    fn_8005B918(lbl_80277238 + 0x28);
    i = 0;
    goto loop_check;
    do {
        if (fn_8005B888(i) == 0) {
            fn_80231D94(&sp8, lbl_80277238 + 0x2D, fn_8005B8AC(i));
            fn_8003FCCC(&sp8);
            fn_8005C4C4(&sp8, 4);
            fn_800056CC(lbl_80277238 + 0x59, &sp8);
        }
        i += 1;
    loop_check:
        ;
    } while (i < fn_8005B8CC());
    fn_8005B8E8();
    lbl_80367B78 = 0;
    i = 0;
    do {
        fn_8000D1B4(i);
        if (fn_80019CC0() == 5) {
            lbl_80367B78 += 1;
        }
        i += 1;
    } while (i < 0x2800);
    lbl_80367B70 = (u32 *)fn_800C42AC(lbl_80367B78 << 2);
    lbl_80367B74 = (u8 *)fn_800C42AC(lbl_80367B78);
    lbl_80367B78 = 0;
    j = 0;
    do {
        fn_8000D1B4(j);
        if (fn_80019CC0() == 5) {
            val = (u32)fn_8000D1B4(j);
            arr = lbl_80367B70;
            idx = lbl_80367B78 << 2;
            *(u32 *)((u8 *)arr + idx) = val;
            val = *(u32 *)((u8 *)lbl_80367B70 + (lbl_80367B78 << 2));
            if (val == 0) {
                flag = 0;
            } else {
                s = fn_8000E0E4((void *)val);
                if ((s32)s[0] != 0x24) {
                    flag = 0;
                } else if ((s32)s[1] != 0x52) {
                    flag = 0;
                } else {
                    flag = 1;
                }
            }
            if (flag == 0) {
                lbl_80367B74[lbl_80367B78] = 0;
            } else {
                lbl_80367B74[lbl_80367B78] = 1;
                val = *(u32 *)((u8 *)lbl_80367B70 + (lbl_80367B78 << 2));
                if (val == 0) {
                    flag = 0;
                } else {
                    s = fn_8000E0E4((void *)val);
                    p = (char *)strlen(s);
                    p = (char *)((s32)p - 5);
                    p = (char *)((s32)s + (s32)p);
                    if ((s32)p[0] == 0x24 && (s32)p[1] == 0x55 && (s32)p[2] == 0x42 && (s32)p[3] == 0x24 && (s32)p[4] == 0x48) {
                        flag = 1;
                    } else {
                        flag = 0;
                    }
                }
                if (flag != 0) {
                    lbl_80367B74[lbl_80367B78] = 2;
                } else {
                    val = *(u32 *)((u8 *)lbl_80367B70 + (lbl_80367B78 << 2));
                    if (val == 0) {
                        flag = 0;
                    } else {
                        p = fn_8000E0E4((void *)val);
                        goto scan;
                        do {
                            if ((s8)c == 0x24 && (s32)p[1] == 0x55 && (s32)p[2] == 0x42 && (s32)p[3] == 0x24 && (s32)p[4] == 0x48) {
                                flag = 1;
                                goto scan_done;
                            }
                            p += 1;
                        scan:
                            c = *p;
                        } while ((s8)c != 0);
                        flag = 0;
                    scan_done:
                        ;
                    }
                    if (flag != 0) {
                        lbl_80367B74[lbl_80367B78] = 4;
                    }
                }
            }
            lbl_80367B78 += 1;
        }
        j += 1;
    } while (j < 0x2800);
    lbl_80367B7C = 0;
    lbl_80367B80 = (lbl_80367B78 + 0x17) / 24;
}
#pragma global_optimizer reset
