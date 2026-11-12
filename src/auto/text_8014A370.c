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

s32 fn_8014A370(void) {
    return 0x10;
}

s32 fn_8014A378(void) {
    return 0x10;
}

s32 fn_8014A380(void) {
    return 0x10;
}

void *fn_8014A388(void) {
    extern u16 lbl_80276F00[];
    return (u8 *)lbl_80276F00 + 0x99;
}

void *fn_8014A398(void) {
    extern u16 lbl_80276F00[];
    return (u8 *)lbl_80276F00 + 0xc6;
}

s32 fn_8014A3A8(void) {
    extern M2C_UNK lbl_8032FF08;
    extern M2C_UNK lbl_803301A8;
    u8 var_r28;
    u8 var_r28_2;
    u8 var_r30;
    u8 var_r31;
    void *temp_r29;
    void *temp_r29_2;

    var_r28 = 0;
    do {
        var_r30 = 0;
        temp_r29 = &lbl_8032FF08 + (var_r28 * 0x30);
        if ((M2C_FIELD(temp_r29, u8 *, 0xC) & 1) && (M2C_FIELD(M2C_FIELD(temp_r29, void **, 8), u8 (**)(void *), 8)(temp_r29) != 0)) {
            var_r30 = 1;
        }
        if (var_r30 != 0) {
            M2C_FIELD(M2C_FIELD(temp_r29, void **, 8), M2C_UNK (**)(void *), 0x10)(temp_r29);
        }
        var_r28 += 1;
    } while ((s32) var_r28 < 4);
    var_r28_2 = 0;
    do {
        var_r31 = 0;
        temp_r29_2 = &lbl_803301A8 + (var_r28_2 * 0x30);
        if ((M2C_FIELD(temp_r29_2, u8 *, 0xC) & 1) && (M2C_FIELD(M2C_FIELD(temp_r29_2, void **, 8), u8 (**)(void *), 8)(temp_r29_2) != 0)) {
            var_r31 = 1;
        }
        if (var_r31 != 0) {
            M2C_FIELD(M2C_FIELD(temp_r29_2, void **, 8), M2C_UNK (**)(void *), 0x10)(temp_r29_2);
        }
        var_r28_2 += 1;
    } while ((s32) var_r28_2 < 0x1C);
    return 0;
}

void *fn_8014A4C8(void) {
    extern char lbl_80276F00[];
    return &lbl_80276F00[0xCF];
}

s32 fn_8014A4D8(void) {
    return 2;
}

s32 fn_8014A4E0(void) {
    return 0;
}

void *fn_8014A4E8(void) {
    extern u16 lbl_80276F00[];
    return (char *)lbl_80276F00 + 0xDE;
}

void fn_800C426C(s32);
s32 fn_800C42AC(s32);
void *fn_8003FCCC(void *);
void fn_80024398(void *, s32, s32);
#pragma opt_strength_reduction off
s32 fn_8014A4F8(s32 arg0, s32 arg1)
{
    extern u16 lbl_80276F00[];
    void fn_800C426C(s32);
    s32 fn_800C42AC(s32);
    void *fn_8003FCCC(void *);
    void fn_80024398(void *, s32, s32);
    s32 var_r11;
    s32 var_ctr;
    s32 temp_r9, temp_r8, temp_r7, temp_r6, temp_r5, temp_r4, temp_r0, temp_r11;
    u8 *var_r3;
    u8 var_r5;
    s32 temp_r4_2;

    (void)arg0;
    lbl_80367B08 = 1;
    fn_800C426C(lbl_80367B00);
    lbl_80367B00 = 0;
    var_ctr = 0x60;
    lbl_80367B00 = fn_800C42AC(0x1800);
    var_r11 = 0;
    for (; var_ctr != 0; var_ctr--) {
        *(s32 *)(lbl_80367B00 + var_r11) = 0;
        *(s32 *)(lbl_80367B00 + (var_r11 + 4)) = 0;
        temp_r9 = var_r11 + 0x24;
        *(s32 *)(lbl_80367B00 + (var_r11 + 8)) = 0;
        temp_r8 = var_r11 + 0x28;
        *(s32 *)(lbl_80367B00 + (var_r11 + 0xC)) = 0;
        temp_r7 = var_r11 + 0x2C;
        *(s32 *)(lbl_80367B00 + (var_r11 + 0x10)) = 0;
        temp_r6 = var_r11 + 0x30;
        *(s32 *)(lbl_80367B00 + (var_r11 + 0x14)) = 0;
        temp_r5 = var_r11 + 0x34;
        *(s32 *)(lbl_80367B00 + (var_r11 + 0x18)) = 0;
        temp_r4 = var_r11 + 0x38;
        *(s32 *)(lbl_80367B00 + (var_r11 + 0x1C)) = 0;
        temp_r0 = var_r11 + 0x3C;
        temp_r11 = var_r11 + 0x20;
        *(s32 *)(lbl_80367B00 + temp_r11) = 0;
        var_r11 = temp_r11 + 0x20;
        *(s32 *)(lbl_80367B00 + temp_r9) = 0;
        *(s32 *)(lbl_80367B00 + temp_r8) = 0;
        *(s32 *)(lbl_80367B00 + temp_r7) = 0;
        *(s32 *)(lbl_80367B00 + temp_r6) = 0;
        *(s32 *)(lbl_80367B00 + temp_r5) = 0;
        *(s32 *)(lbl_80367B00 + temp_r4) = 0;
        *(s32 *)(lbl_80367B00 + temp_r0) = 0;
    }
    lbl_80367B04 = 0;
    var_r3 = fn_8003FCCC((u8 *)lbl_80276F00 + 0x6b);
    goto loop_check;
loop_body:
    if ((s8)lbl_80367B08 == 0) {
        if (var_r3[5] & 4) {
            goto block_7;
        }
    } else if (!(var_r3[5] & 4)) {
    block_7:
        temp_r4_2 = lbl_80367B04;
        lbl_80367B04 = temp_r4_2 + 1;
        *(s32 *)(lbl_80367B00 + (temp_r4_2 * 4)) = *(s32 *)var_r3;
    }
    if (var_r3[4] == 0) {
        var_r3 = 0;
    } else {
        var_r3 += var_r3[4];
    }
loop_check:
    if ((var_r3[4] == 0) ? 0 : (s32)(var_r3 + var_r3[4])) {
        goto loop_body;
    }
    var_r5 = lbl_80367B0A;
    if ((s8)lbl_80367B08 == 0) {
        var_r5 = lbl_80367B09;
    }
    lbl_80367B0D = var_r5;
    lbl_80367B0E = (lbl_80367B04 + 0x17) / 24;
    fn_80024398(&lbl_80367B44, arg1, 0);
    return 0;
}
void *fn_8014A6FC(void) {
    extern u16 lbl_80276F00[];
    return (u8 *)lbl_80276F00 + 0xEC;
}

s32 fn_8014A70C(s32 arg0, s32 arg1)
{
    extern u16 lbl_80276F00[];
    s32 off;
    s32 ctr;
    u8 *node;
    u8 *next;
    u8 flag;
    s32 idx;

    (void)arg0;
    lbl_80367B08 = 0;
    fn_800C426C(lbl_80367B00);
    lbl_80367B00 = 0;
    lbl_80367B00 = fn_800C42AC(0x1800);

    off = 0;
    ctr = 0x60;
    do {
        *(s32 *)(lbl_80367B00 + off) = 0;
        *(s32 *)(lbl_80367B00 + off + 4) = 0;
        *(s32 *)(lbl_80367B00 + off + 8) = 0;
        *(s32 *)(lbl_80367B00 + off + 0xC) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x10) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x14) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x18) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x1C) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x20) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x24) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x28) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x2C) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x30) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x34) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x38) = 0;
        *(s32 *)(lbl_80367B00 + off + 0x3C) = 0;
        off += 0x40;
    } while (--ctr != 0);

    lbl_80367B04 = 0;
    node = fn_8003FCCC((u8 *)lbl_80276F00 + 0x6b);
    goto check;

loop:
    if ((s8)lbl_80367B08 == 0) {
        if (!(node[5] & 4)) {
            goto skip_store;
        }
    } else if (node[5] & 4) {
        goto skip_store;
    }
    idx = lbl_80367B04;
    lbl_80367B04 = idx + 1;
    ((s32 *)lbl_80367B00)[idx] = *(s32 *)node;
skip_store:
    if (node[4] == 0) {
        node = NULL;
    } else {
        node += node[4];
    }
check:
    if (node[4] == 0) {
        next = NULL;
    } else {
        next = node + node[4];
    }
    if (next != NULL) {
        goto loop;
    }

    flag = lbl_80367B0A;
    if ((s8)lbl_80367B08 == 0) {
        flag = lbl_80367B09;
    }
    lbl_80367B0D = flag;
    lbl_80367B0E = (lbl_80367B04 + 0x17) / 24;
    fn_80024398(&lbl_80367B44, arg1, 0);
    return 0;
}

s32 fn_8014A910(void) {
    return 0x40;
}

s32 fn_8014A918(void) {
    return 0x10;
}

s32 fn_8014A920(void) {
    return 0x130;
}

extern s32 lbl_80367B00;
extern u8 lbl_80367B0D;

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

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

#include "common.h"
extern f32 lbl_8036A7F0;
extern M2C_UNK lbl_802CA518;
extern s32 lbl_80367B00;
extern s32 lbl_80367B04;
extern u8 lbl_80367B0D;

void fn_801475FC(s32, s32); /* extern */
#include "global.h"

extern void* fn_80019F04();
#include "common.h"
extern u8 lbl_802CA264[];
extern u8 lbl_802B14E4[];
#include "common.h"
#include "ef.h"
#include "global.h"

extern u8 lbl_80330708[];
extern u8 lbl_80277060[];
extern u8 lbl_8032BB58[];
#include "global.h"
extern u8 lbl_80330708[];
