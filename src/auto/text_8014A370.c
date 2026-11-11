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
    extern u16 lbl_80276F00;
    void *ptr = (u8 *)&lbl_80276F00 + 0xEC;
    return ptr;
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

s32 fn_8014A928(s32 unused0, s32 unused1, void *arg2) {
    if ((s8)lbl_80367B08 == 0) {
        lbl_80367B09 = lbl_80367B0D;
        lbl_80367B0B = *(u8 *)((u8 *)arg2 + 0x3A);
    } else {
        lbl_80367B0A = lbl_80367B0D;
        lbl_80367B0C = *(u8 *)((u8 *)arg2 + 0x3A);
    }
    return 9;
}

s32 fn_8014A960(void) {
    return 0;
}

extern s32 lbl_80367B00;
extern u8 lbl_80367B0D;
s32 fn_8014A968(void *arg1) {
    char temp = *(char*)((char*)arg1 + 0x3A);
    temp = (temp * 0x18) + *(s32*)((char*)arg1 + 0x20);
    return ((s32*)lbl_80367B00)[temp];
}

void fn_8014AA18(void) {
    // Analyzing the function from assembly:
    // It appears to be setting up some data structure based on loop conditions
    
    s32 r11 = 3;
    s32 r9 = 10;
    s32 r8 = 0;
    
    while (r8 < 4) {
        s32 temp_r0 = r11 + r8;
        
        if (temp_r0 < 10) {
            if (r9 == 10) {
                // Do nothing specific - it's not used
            } else {
                // Do nothing specific - it's not used 
            }
        } else {
            if (r9 == 12) {
                // Do nothing specific - it's not used
            } else {
                // Do nothing specific - it's not used
            }
        }
        
        r8 += 1;
    }
    
    return;
}

#pragma opt_strength_reduction off
s32 fn_8014AC68(void) {
    extern void *lbl_80367240;
    extern u8 lbl_80367B0D;
    extern u8 lbl_80367B0E;
    s32 e;

    if (*(u32 *)((u8 *)lbl_80367240 + 0x10) & 0x1000001) {
        e = (s8)lbl_80367B0E;
        lbl_80367B0D = ((s8)lbl_80367B0D + (e - 1)) % e;
    }
    if (*(u32 *)((u8 *)lbl_80367240 + 0x10) & 0x2000002) {
        lbl_80367B0D = ((s8)lbl_80367B0D + 1) % (s8)lbl_80367B0E;
    }
    return 0;
}
#pragma opt_strength_reduction reset
s32 fn_8014ACE8(u8 arg2) {
    extern u8 lbl_80367B08;
    extern u8 lbl_80367B0B;
    extern u8 lbl_80367B0C;
    if ((s8) lbl_80367B08 == 0) {
        if ((s32) arg2 == (s8) lbl_80367B0B) {
            return 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    if ((s32) arg2 == (s8) lbl_80367B0C) {
        return 1;
    }
    return 0;
}

char *fn_8014AD34(void) {
    extern char lbl_80276F00[];
    extern char lbl_803306E8[];
    extern u8 lbl_80367B0D;
    extern u8 lbl_80367B0E;
    s32 fn_80231D94(char *dest, const char *fmt, ...);
    fn_80231D94(lbl_803306E8, &lbl_80276F00[0xF0], (s8)lbl_80367B0D + 1, (s8)lbl_80367B0E);
    return lbl_803306E8;
}

s32 fn_8014AD88(void) {
    return 0;
}

s32 fn_8014AD90(void) {
    return 0x200;
}

s32 fn_8014AD98(void) {
    return 0;
}

s32 fn_8014ADA0(void) {
    return 0xFFFF;
}

void *fn_8014ADAC(void) {
    extern char lbl_80276F00[];
    return &lbl_80276F00[0x104];
}

u16 fn_8014ADBC(void) {
    extern void *lbl_80367B14;
    return M2C_FIELD(lbl_80367B14, u16 *, 0x12);
}

void fn_8014ADC8(s32 arg0, s16 arg1) {
    extern void *lbl_80367B14;
    M2C_FIELD(lbl_80367B14, s16 *, 0x12) = arg1;
}

s32 fn_8014ADD4(void) {
    extern void *lbl_80367B14;
    if (M2C_FIELD(lbl_80367B14, u8 *, 5) & 4) {
        return 3;
    }
    return 1;
}

s32 fn_8014ADF0(void) {
    u8 *fn_8000D2BC(s32);
    s8 fn_80146BE4(s32);
    void fn_801475FC(s32, s32);
    extern s32 *lbl_80367B14;

    s32 temp_r31 = *lbl_80367B14;
    if (!(fn_8000D2BC(temp_r31)[5] & 4) || (fn_80146BE4(temp_r31) < 0)) {
        fn_801475FC(temp_r31, 0x64);
    }
    return 0;
}

void fn_8014AE50(void *arg0, void *arg1, void *arg2) {
#pragma cplusplus on
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
        virtual void *v4(void *) = 0;
    };
    struct Obj {
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
        virtual s32 v20() = 0;
    };
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007858(f32, f32);
    void fn_80007124(void *);
    void fn_8000727C(f32);
    void fn_80007290(s32, s32, s32, s32);
    void fn_80007884(void);
    void fn_80231D94(void *, void *, ...);
    extern f32 lbl_8036A7BC;
    extern f32 lbl_8036A7C0;
    extern f32 lbl_8036A7C4;
    extern u8 lbl_80276F00[];
    char sp8[8];

    fn_8000A258();
    fn_80009D74((f32)*(s16 *)((u8 *)arg1 + 0x30), (f32)*(s16 *)((u8 *)arg1 + 0x32),
                (*(Model **)((u8 *)arg1 + 0x3C))->v25() - lbl_8036A7C0, lbl_8036A7BC);
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_80007898(5);
    fn_80007858((f32)*(s16 *)((u8 *)arg2 + 0x30), (f32)*(s16 *)((u8 *)arg2 + 0x32));
    fn_80007124((*(Drawer **)((u8 *)arg2 + 0x34))->v4(arg2));
    fn_8000727C(lbl_8036A7C4);
    if (*(u8 *)((u8 *)arg2 + 0x38) != 0) {
        fn_80007290(0xFF, 0xFF, 0, 0xFF);
    }
    if (*(u8 *)((u8 *)arg2 + 0x39) == 2) {
        fn_80007290(0, 0, 0, 0xFF);
    }
    fn_80007884();
    fn_80231D94(sp8, lbl_80276F00 + 0x10D, ((Obj *)arg0)->v20());
    fn_80007898(5);
    fn_80007858((f32)(*(s16 *)((u8 *)arg2 + 0x30) + 0x60), (f32)*(s16 *)((u8 *)arg2 + 0x32));
    fn_80007124(sp8);
    fn_8000727C(lbl_8036A7C4);
    if (*(u8 *)((u8 *)arg2 + 0x38) != 0) {
        fn_80007290(0xFF, 0xFF, 0, 0xFF);
    }
    if (*(u8 *)((u8 *)arg2 + 0x39) == 2) {
        fn_80007290(0, 0, 0, 0xFF);
    }
    fn_80007884();
#pragma cplusplus off
}

s32 fn_8014B20C(void) {
    return 0x7F;
}

s32 fn_8014B214(void) {
    return 0;
}

s32 fn_8014B21C(void) {
    return 3;
}

s32 fn_8014B224(void) {
    return 0x200;
}

s32 fn_8014B22C(void) {
    return -0x2000;
}

s32 fn_8014B234(void) {
    return 0x1FFF;
}

void *fn_8014B23C(void) {
    extern u16 lbl_80276F00[];
    return (u8 *)lbl_80276F00 + 0x113;
}

extern u16 *g_AccessoryArray;
s16 fn_8014B24C(void) {
    extern s16 *lbl_80367B14;
    return lbl_80367B14[8];
}

void fn_8014B258(u16 arg0, u16 arg1) {
    extern u8 *lbl_80367B14;

    *(u16 *)(lbl_80367B14 + 0x10) = arg1;
}

s32 fn_8014B264(void) {
    return 0xFF;
}

void *fn_8014B26C(void) {
    extern char lbl_80276F00[];
    return &lbl_80276F00[0x119];
}

u8 fn_8014B27C(void) {
    extern u8 *lbl_80367B14;

    return lbl_80367B14[0xF];
}

void fn_8014B288(u8 arg0, u8 arg1) {
    extern u8 *lbl_80367B14;
    lbl_80367B14[0xF] = arg1;
}

void *fn_8014B294(void) {
    extern u8 lbl_80276F00[];
    return &lbl_80276F00[0x11F];
}

u8 fn_8014B2A4(void) {
    // Returns byte at offset 0xC in the data pointed to by lbl_80367B14
    extern void *lbl_80367B14;
    return *(u8 *)((char *) lbl_80367B14 + 0xC);
}

void fn_8014B2B0(u8 arg0, u8 arg1) {
    extern u8 *lbl_80367B14;
    lbl_80367B14[0xC] = arg1;
}

void *fn_8014B2BC(void) {
    extern u16 lbl_80276F00;
    return (u16*)((char*)&lbl_80276F00 + 0x126 * 2);
}

u8 fn_8014B2CC(void) {
    extern u8 *lbl_80367B14;
    return lbl_80367B14[0x7];
}

void fn_8014B2D8(u8 arg0, u8 arg1) {
    extern u8 *lbl_80367B14;

    lbl_80367B14[0x7] = arg1;
}

s32 fn_8014B2E4(void) {
    return 0;
}

void *fn_8014B2EC(void) {
    extern u16 lbl_80276F00[];
    return (u8 *)lbl_80276F00 + 0x12a;
}

u8 fn_8014B2FC(void) {
    extern u8 *lbl_80367B14;

    return lbl_80367B14[0x6];
}

void fn_8014B308(u8 arg0, u8 arg1) {
    extern u8 *lbl_80367B14;

    lbl_80367B14[0x6] = arg1;
}

s32 fn_8014B314(void) {
    return 1;
}

s32 fn_8014B31C(void) {
    extern s32 *lbl_80367B14;
    return *lbl_80367B14;
}

s32 fn_8014B328(void) {
    u8 *fn_8000D2BC(s32);
    s8 fn_80146BE4(s32);
    void fn_801475FC(s32, s32);
    extern s32 *lbl_80367B14;

    s32 temp_r31 = *lbl_80367B14;
    if (!(fn_8000D2BC(temp_r31)[5] & 4) || (fn_80146BE4(temp_r31) < 0)) {
        fn_801475FC(temp_r31, 0x64);
    }
    return 0;
}

void fn_8014BB58(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 sp8;

    fn_8000A258();
    fn_8000A174(0, 0x23);
    fn_8000A248();
    fn_80007898(0xA);
    fn_80007858((f32) arg0, (f32) arg1);
    sp8 = *arg2;
    fn_80007668(&sp8);
    fn_80007124(arg3);
    fn_80007884();
}

u8 fn_8014BC10(void *arg0) {
    void *fn_80019F04(u8);
    void fn_80015320(s32, void *);
    extern u8 lbl_802CA264[];
    extern u8 lbl_802B14E4[];
    s32 score;
    void *self;
    s32 n;
    void *tbl;
    void *p;
    void *unit;
    s32 g1;
    s32 g2;
    s32 g3;
    u32 i;
    u8 flags[4];
    s16 val;
    u8 id;

    self = arg0;
    id = *(u8 *)((u8 *)self + 0x10);
    if (id < 0x5A) {
        return 0x2D;
    }
    if (id < 0x5A) {
        g1 = 0x2D;
    } else {
        tbl = fn_80019F04(id);
        val = *(s16 *)((u8 *)self + 0x12);
        g1 = 0x45;
        if (val <= *(u8 *)((u8 *)tbl + 0x57)) {
            g1 = 0x44;
            if (val <= *(u8 *)((u8 *)tbl + 0x56)) {
                g1 = 0x43;
                if (val <= *(u8 *)((u8 *)tbl + 0x55)) {
                    g1 = 0x42;
                    if (val <= *(u8 *)((u8 *)tbl + 0x54)) {
                        g1 = 0x41;
                    }
                }
            }
        }
    }
    id = *(u8 *)((u8 *)self + 0x10);
    score = 0x45 - (u8)g1;
    if (id < 0x5A) {
        g2 = 0x2D;
    } else {
        n = 0;
        p = *(void **)(lbl_802CA264 + 0x48);
        while (p != NULL) {
            u32 flags1a0 = *(u32 *)((u8 *)p + 0x1A0);
            p = *(void **)((u8 *)p + 0x184);
            if (flags1a0 & 0x8000) {
                n += 1;
            }
        }
        tbl = fn_80019F04(id);
        g2 = 0x45;
        if (n <= *(u8 *)((u8 *)tbl + 0x5B)) {
            g2 = 0x44;
            if (n <= *(u8 *)((u8 *)tbl + 0x5A)) {
                g2 = 0x43;
                if (n <= *(u8 *)((u8 *)tbl + 0x59)) {
                    g2 = 0x42;
                    if (n <= *(u8 *)((u8 *)tbl + 0x58)) {
                        g2 = 0x41;
                    }
                }
            }
        }
    }
    id = *(u8 *)((u8 *)self + 0x10);
    score += 0x45 - (u8)g2;
    if (id < 0x5A) {
        g3 = 0x2D;
    } else {
        u8 *base;
        u8 *flagp;
        s32 ctr;
        n = 0;
        fn_80015320(4, flags);
        base = lbl_802B14E4;
        flagp = flags;
        i = 1;
        for (ctr = 0x35; ctr != 0; ctr--) {
            if ((u8)i != 0) {
                unit = base + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)((u8 *)unit + 0x188) != 0 &&
                flagp[*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)] != 0) {
                n += *(u16 *)((u8 *)unit + 0x22C);
            }
            i += 1;
            if ((u8)i != 0) {
                unit = base + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)((u8 *)unit + 0x188) != 0 &&
                flagp[*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)] != 0) {
                n += *(u16 *)((u8 *)unit + 0x22C);
            }
            i += 1;
            if ((u8)i != 0) {
                unit = base + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)((u8 *)unit + 0x188) != 0 &&
                flagp[*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)] != 0) {
                n += *(u16 *)((u8 *)unit + 0x22C);
            }
            i += 1;
        }
        tbl = fn_80019F04(id);
        g3 = 0x45;
        if (n >= *(u8 *)((u8 *)tbl + 0x5F)) {
            g3 = 0x44;
            if (n >= *(u8 *)((u8 *)tbl + 0x5E)) {
                g3 = 0x43;
                if (n >= *(u8 *)((u8 *)tbl + 0x5D)) {
                    g3 = 0x42;
                    if (n >= *(u8 *)((u8 *)tbl + 0x5C)) {
                        g3 = 0x41;
                    }
                }
            }
        }
    }
    score += 0x45 - (u8)g3;
    return (u8)(0x45 - score / 3);
}

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
void fn_8014C39C(void *arg0, void *arg1) {
    void fn_8017A430(void *, s32, void *);
    void fn_8017A5EC(void *, u8);
    void fn_8017A5C4(void *, u16);
    void fn_8017A574(void *, s32);
    void fn_8017A4CC(void *, s64);
    void fn_8017A480(void *, s32, void *);
    void fn_8017A3E0(void *, s32, s32);
    void fn_80105A30(void *, void *);
    void fn_80014F94(void *, void *);
    void fn_80199B88(void *, void *);
    void fn_800BDAF8(void *, void *);
    s32 i;

    fn_8017A430(arg1, 0x10, arg0);
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x10));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x11));
    fn_8017A5C4(arg1, (u16)*(s16 *)((u8 *)arg0 + 0x12));
    for (i = 0; i < 4; i++) {
        fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x14 + i));
    }
    fn_8017A574(arg1, *(s32 *)((u8 *)arg0 + 0x18));
    fn_8017A574(arg1, *(s32 *)((u8 *)arg0 + 0x1c));
    fn_8017A430(arg1, 0x30, (u8 *)arg0 + 0x20);
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x50));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x51));
    fn_8017A5EC(arg1, (u8)(s32)*(f32 *)((u8 *)arg0 + 0x524));
    fn_8017A5EC(arg1, (u8)(s32)*(f32 *)((u8 *)arg0 + 0x528));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x54));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x55));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x56));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x57));
    fn_8017A4CC(arg1, *(s64 *)((u8 *)arg0 + 0x58));
    fn_8017A4CC(arg1, *(s64 *)((u8 *)arg0 + 0x60));
    fn_8017A574(arg1, *(s32 *)((u8 *)arg0 + 0x68));
    fn_8017A574(arg1, *(s32 *)((u8 *)arg0 + 0x6c));
    fn_8017A5C4(arg1, (u16)*(s16 *)((u8 *)arg0 + 0x70));
    fn_8017A5C4(arg1, (u16)*(s16 *)((u8 *)arg0 + 0x72));
    fn_80105A30((u8 *)arg0 + 0x74, arg1);
    fn_80105A30((u8 *)arg0 + 0x84, arg1);
    fn_80014F94((u8 *)arg0 + 0x94, arg1);
    fn_80014F94((u8 *)arg0 + 0x98, arg1);
    fn_80199B88((u8 *)arg0 + 0x9c, arg1);
    fn_800BDAF8((u8 *)arg0 + 0xb4, arg1);
    fn_8017A430(arg1, 0x140, (u8 *)arg0 + 0x3c4);
    fn_8017A480(arg1, 0x18, (u8 *)arg0 + 0x504);
    fn_8017A3E0(arg1, 8, 0);
}
#pragma opt_strength_reduction reset
extern u16 lbl_80367B68;
s32* fn_8014C5A8(s32 arg0, u8 arg1) {
    if (arg1 == 0) {
        return (s32*)(arg0 + 0x94);
    }
    if (arg1 == 3) {
        return (s32*)(arg0 + 0x98);
    }
    fn_8001520C(&lbl_80367B68, 1);
    return (s32*)&lbl_80367B68;
}

void fn_8014C5F4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x70) = (s16) (M2C_FIELD(arg0, s16 *, 0x70) + arg1);
}

void *fn_8014C604(void) {
    void fn_80015320(s32, void *);
    extern u8 lbl_802B14E4[];
    u8 sp8[8];
    u8 *best;
    s32 best_val;
    u8 *unit;
    s32 i;

    best = NULL;
    best_val = 0;
    fn_80015320(4, sp8);
    for (i = 1; i <= 0x9F; i++) {
        if ((u8)i != 0) {
            unit = (u8 *)lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0) {
                s32 v = *(u16 *)(unit + 0x22C);
                if (best_val < v) {
                    best_val = v;
                    best = unit;
                }
            }
        }
    }
    return best;
}

s32 fn_8014C6B8(void) {
    M2C_UNK fn_80040844();
    M2C_UNK fn_80040854();
    fn_80040844();
    fn_80040854();
    return 1;
}

s32 fn_8014C6E0(void) {
    u8 fn_80040824();
    M2C_UNK fn_800AA134();
    if (fn_80040824() == 0) {
        return 0;
    }
    fn_800AA134();
    return 1;
}

void fn_8014C718(void *arg0, u32 arg1) {
    u8 fn_80040824(void);
    void *fn_8000CA64(void *, u32);
    extern u8 lbl_80293760[];
    if (fn_80040824() != 0) {
        if (arg1 == 0) {
            fn_800AA134();
            fn_80040844();
            fn_80040854();
        } else {
            fn_8000CA64(lbl_80293760, arg1);
        }
    }
}

void fn_8014C774(void) {
    M2C_UNK fn_80040854();
    M2C_UNK fn_80040844();
    fn_80040844();
    fn_80040854();
}

void fn_8014C798(void) {
    M2C_UNK fn_80018EC0();
    M2C_UNK fn_80040844();
    M2C_UNK fn_80042558();
    fn_80018EC0();
    fn_80040844();
    fn_80042558();
}

void fn_8014C7C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    if (arg0 < 0) {
        arg0 = 0;
    }

    if (arg1 < 0) {
        arg1 = 0;
    }

    temp_r3 = arg2 - arg0;
    if (temp_r3 <= 0) {
        temp_r3 = 1;
    }

    temp_r4 = arg3 - arg1;
    if (temp_r4 <= 0) {
        temp_r4 = 1;
    }

    temp_r5 = temp_r3 * temp_r4;
    if (temp_r5 > 0x4000) {
        s32 temp_r6 = temp_r3 / 2;
        s32 temp_r7 = temp_r4 / 2;
        arg2 = arg0 + temp_r6;
        arg3 = arg1 + temp_r7;
    }
}

void fn_8014CA20(s32 arg0, s32 arg1) {
    s32 r0 = arg1 + 2;
    s32 r3 = r0 * 0xC;
    r3 += 0x20;
    r3 += arg0;
    fn_8000E0E4(r3, arg0);
}

s32 fn_8014CA54(s32 arg0, s32 arg1) {
    return (arg1 * 0xC) + arg0 + 0x20;
}

void fn_8014CA68(s32 arg0, s32 arg1) {
    s32 r3;
    s32 temp_r4;

    temp_r4 = arg1 * 0xC;
    r3 = arg0 + (temp_r4 + 0x20);
    fn_8000E0E4(r3, temp_r4);
}

void fn_80234450(s32, u32);
void fn_8014CA98(s32 arg0, s32 arg1, u32 arg2) {
    M2C_UNK fn_80234450(s32, u32);
    if (arg2 != 0U) {
        fn_80234450(arg0 + ((arg1 * 0xC) + 0x20), arg2);
    }
}

void fn_8014CAD4(void *arg0, f32 farg0, f32 farg1) {
    f32 fn_80023068(M2C_UNK *);
    extern M2C_UNK lbl_802CA518;
    M2C_FIELD(arg0, f32 *, 0x52C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x530) = farg1;
    M2C_FIELD(arg0, f32 *, 0x53C) = fn_80023068(&lbl_802CA518);
}

void fn_8014CBD8(void *arg0, f32 farg0, f32 farg1) {
    f32 fn_80023068(M2C_UNK *, M2C_UNK *, f32, f32);
    extern M2C_UNK lbl_802CA518;
    extern f32 lbl_8036A7F0;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = farg0 + lbl_8036A7F0;
    temp_f31 = farg1 + lbl_8036A7F0;
    M2C_FIELD(arg0, f32 *, 0x524) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x528) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x52C) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x530) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x53C) = fn_80023068(&lbl_802CA518, &lbl_802CA518, temp_f30, temp_f31);
    M2C_FIELD(arg0, f32 *, 0x534) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x538) = temp_f31;
}

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

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
