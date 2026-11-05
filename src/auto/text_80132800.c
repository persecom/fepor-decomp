/* Functions from 0x80132800 to 0x80149F38, found by decomp-toolkit. */
#include "common.h"
#include "dolphin/os.h"

extern u8 lbl_80276BC8[29];
extern u8 lbl_803301A8[1344];

typedef struct Vec2s {
    s16 x;
    s16 y;
} Vec2s;

typedef struct {
    u8 unk0;
} Unk1;


typedef struct ListNode {
    struct ListNode *prev;
    struct ListNode *next;
    void *val;
} ListNode;

void *fn_80132800(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x50 / 2];
}

void *fn_80132810(void) {
    extern u16 lbl_80276008[];
    return (u16*)((u8*)&lbl_80276008 + 0xB2);
}

s32 fn_80132820(void) {
    M2C_UNK fn_80024398(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80367AC4;
    
    s32 var_4 = 0; // explicitly declare local to control register use
    
    fn_80024398(&lbl_80367AC4, var_4);
    return 4;
}

void *fn_8013284C(void) {
    extern u16 lbl_80276008;
    return (u8*)&lbl_80276008 + 0x124;
}

void *fn_8013285C(void) {
    extern u16 lbl_80276008;
    return (u16*)((uintptr_t)&lbl_80276008 + 0x97);
}

s32 fn_8013286C(void) {
    return 2;
}

s32 fn_80132874(void) {
    return 0x10;
}

void *fn_8013287C(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x2D0];
}

s32 fn_8013289C(void) {
    return 0;
}

s32 fn_801328A4(void) {
    extern u16 lbl_80276008[];
    fn_801C1C64(0x17C, 0x50, &lbl_80276008[0x394], 0xFA, 0x7D0, 0xFA, 3);
    return 5;
}

void *fn_801328EC(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x1DC];
}

void *fn_801328FC(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x7E];
}

s32 fn_8013290C(void) {
    return 0;
}

s32 fn_80132914(void) {
    extern u16 lbl_80276008[616 / sizeof(u16)];
    u16* ptr = &lbl_80276008[0x129];
    fn_8006F09C(&lbl_80276008[0x117], &lbl_80276008[0x120], ptr);
    return 5;
}

void *fn_8013294C(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x132 * 2];
}

void *fn_8013295C(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x280];
}

s32 fn_8013296C(void) {
    return 0;
}

s32 fn_80132974(void) {
    extern u16 lbl_80276008[];
    fn_8006F10C(&lbl_80276008[0x45c], &lbl_80276008[0x480]);
    return 5;
}

void *fn_801329A8(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x56C];
}

void *fn_801329B8(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x2D6];
}

s32 fn_801329C8(void) {
    return 0;
}

s32 fn_801329D0(void) {
    extern u16 lbl_80276008[];
    fn_800C0658();
    fn_8006F6A4((u8*)&lbl_80276008[0x186], 0, 0);
    return 5;
}

void *fn_80132A0C(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x364];
}

void *fn_80132A1C(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x6EC];
}

s32 fn_80132A2C(void) {
    return 2;
}

s32 fn_80132A34(void) {
    return 0x10;
}

void *fn_80132A3C(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x3C4];
}

void *fn_80132A4C(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x1FA];
}

s32 fn_80132A5C(void) {
    return 0;
}

s32 fn_80132A64(void) {
    extern u16 lbl_80331FB8[36]; // 72 bytes = 36 * 2-byte entries
    
    s32 i;
    
    i = 0;
    lbl_80331FB8[0x8] |= 1;
    lbl_80331FB8[0x8] |= 2;
    lbl_80331FB8[0x8] |= 4;
    lbl_80331FB8[0x8] |= 8;
    lbl_80331FB8[0x8] |= 0x10;
    lbl_80331FB8[0x8] |= 0x20;
    
    do {
        fn_801E35BC(lbl_80331FB8, i);
        i += 1;
    } while (i < 0x80);
    
    return 6;
}

void *fn_80132B00(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    M2C_UNK fn_8016A6A4(void *);
    extern u8 lbl_80276270[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80276270, arg0);
    if (temp_r3 != NULL) {
        fn_8016A6A4(temp_r3);
    }
    M2C_FIELD(temp_r3, s32 *, 0x44) = arg1;
    return temp_r3;
}

void fn_80132B58(void *arg0) {
    M2C_UNK fn_8003F670(s32);
    M2C_UNK fn_80161F7C();
    M2C_UNK fn_8016A650(void *, M2C_UNK);
    fn_80161F7C();
    fn_8003F670(M2C_FIELD(arg0, s32 *, 0x48));
    if (arg0 != NULL) {
        fn_8016A650(arg0, 0);
    }
}

void fn_80132BA0(void *arg0) {
    s32 fn_8003FCCC();
    M2C_UNK fn_80162018();
    M2C_UNK fn_801620AC();
    fn_80162018();
    fn_801620AC();
    M2C_FIELD(arg0, s32 *, 0x48) = fn_8003FCCC();
}

void fn_80132BD8(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    s32 fn_80161FB8();
    if (fn_80161FB8() != 0) {
        fn_8000C188(arg0);
    }
}

void fn_80132C14(s32 arg0) {
    void *fn_8014D8FC(void *);
    M2C_UNK fn_80162054(void);
    M2C_UNK fn_8016A5DC(s32, s32, f32);
    extern u8 lbl_80330708[];
    fn_80162054();
    fn_8016A5DC(arg0, M2C_FIELD(fn_8014D8FC(lbl_80330708), s32 *, 0x44), 90.0f);
}

void fn_80132C5C(void *arg0) {
    M2C_UNK fn_8016E9DC(void *);
    M2C_UNK fn_801CE070(void *, const char *, void *);
    M2C_UNK fn_80234450(void *, const char *);
    extern u8 lbl_802762DC[];
    extern u8 lbl_8032FE80[];

    switch (M2C_FIELD(arg0, s32 *, 0x44)) {
    case 0:
        fn_8016E9DC(arg0);
        break;
    case 1:
        fn_80234450(lbl_8032FE80, (const char *)lbl_802762DC + 0x2C);
        fn_801CE070(lbl_8032FE80, (const char *)lbl_802762DC + 0x2C, arg0);
        break;
    }
}

void fn_80132CDC(void) {
    M2C_UNK fn_8000C188();
    fn_8000C188();
}

void fn_80133E50(s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    s32 r3 = arg2 + (arg4 >> 1);
    s32 r4 = arg1 + (arg3 >> 1);
    fn_8008AB7C(r3, r4, arg3, 0x18, 0x19, 0x4C, arg5);
}

s16 fn_8013432C(void *arg0) {
    s16 var_r4;
    u32 temp_r3;
    u32 temp_r0;

    var_r4 = 0;
    temp_r0 = *(u32*)((u8*)arg0 + 0x4c);
    temp_r3 = (u32)arg0 + 0x50 + ((temp_r0 & 0xFF) * 0x48);
    if ((u32) *(u32*) temp_r3 != 0U) {
        var_r4 = 1;
    }
    if ((u32) *(u32*) (temp_r3 + 0x8) != 0U) {
        var_r4 += 1;
    }
    if ((u32) *(u32*) (temp_r3 + 0x10) != 0U) {
        var_r4 += 1;
    }
    if ((u32) *(u32*) (temp_r3 + 0x18) != 0U) {
        var_r4 += 1;
    }
    if ((u32) *(u32*) (temp_r3 + 0x20) != 0U) {
        var_r4 += 1;
    }
    if ((u32) *(u32*) (temp_r3 + 0x28) != 0U) {
        var_r4 += 1;
    }
    if ((u32) *(u32*) (temp_r3 + 0x30) != 0U) {
        var_r4 += 1;
    }
    if ((u32) *(u32*) (temp_r3 + 0x38) != 0U) {
        var_r4 += 1;
    }
    if ((u32) *(u32*) (temp_r3 + 0x40) != 0U) {
        var_r4 += 1;
    }
    return var_r4;
}

void *fn_801343F8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_UNK *fn_8000D354(void *);
    M2C_UNK fn_80134E48(s32, s32, s32, s32, s32);
    M2C_UNK fn_80231D94(void *, void *, u8);
    extern M2C_UNK lbl_80276354;
    extern M2C_UNK lbl_802764BC;
    extern M2C_UNK lbl_80291794;
    extern M2C_UNK lbl_80330708;
    void *temp_r31;

    fn_80134E48(arg2, arg3, arg4, arg5, arg6);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80291794;
    temp_r31 = &lbl_802764BC + 0x218;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    fn_80231D94(temp_r31, &lbl_802764BC + 0x228, M2C_FIELD(&lbl_80330708, u8 *, 0x10));
    M2C_FIELD(arg0, M2C_UNK **, 0x50) = fn_8000D354(temp_r31);
    if ((M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x50) == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x50) = &lbl_80276354;
    }
    return arg0;
}

void fn_80134B58(void *arg0) {
    M2C_UNK fn_801569C4(M2C_UNK, M2C_UNK, s16, s16, M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x10)();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x3D) != 0) {
        fn_801569C4(0, 0, (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xE6, 0x10);
    }
}

void fn_80134BD0(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    fn_8008AB7C(arg1 + (arg3 >> 1), arg2 + (arg4 >> 1), arg3, 0x17, 0x19, 0x4C, arg5);
}

void fn_80134C24(s32 *arg0, void *arg1) {
    s32 fn_800102BC(M2C_UNK, s32, s16, s32, s16, s16, s16, f32);
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *);
    extern f32 lbl_8036A5AC;
    s16 sp8;
    s16 spA;
    s16 temp_r27;
    s16 temp_r29;
    s16 temp_r5;
    s16 temp_r7;
    s16 temp_r9;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_r10;

    temp_r9 = M2C_FIELD(arg1, s16 *, 0x44);
    temp_r7 = M2C_FIELD(arg1, s16 *, 0x3e);
    temp_r29 = M2C_FIELD(arg1, s16 *, 0x46);
    temp_r8 = (s16) ((M2C_FIELD(arg1, s16 *, 0x16) - M2C_FIELD(arg1, s16 *, 0x12)) / temp_r9);
    temp_r10 = (s16) temp_r8;
    temp_r6 = (s16) (temp_r10 * (M2C_FIELD(arg1, s16 *, 0x3e) % temp_r9));
    temp_r4 = temp_r29 * (s16) (temp_r7 / temp_r9);
    temp_r5 = temp_r6 + M2C_FIELD(arg1, s16 *, 0x48);
    temp_r27 = temp_r4 + M2C_FIELD(arg1, s16 *, 0x4a);
    temp_r3 = fn_800102BC(-1, temp_r4, temp_r5, temp_r6, temp_r7, (s16) temp_r8, temp_r9, lbl_8036A5AC);
    sp8 = temp_r5;
    spA = temp_r27 + (s16) ((s32) (temp_r29 - temp_r3) >> 1);
    *arg0 = *fn_8013F748(arg1, (M2C_UNK *)&sp8, &spA);
}

s32 fn_80134E40(void) {
    return 4;
}

s32 fn_80134FF0(void) {
    return 0;
}

s32 fn_80135074(void) {
    return 5;
}

s32 fn_8013507C(void) {
    return 0;
}

s32 fn_80135664(void *arg0, void *arg1) {
    u8 fn_80105BC0(s32, u8);
    u8 (*temp_r12)(void *, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(void *, s32), 0x74);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x78)) != 0;
    }
    return fn_80105BC0(M2C_FIELD(arg0, s32 *, 0xCC) + 0x1BC, M2C_FIELD(arg1, u8 *, 0x18)) == 0;
}

void fn_801356D0(void **arg0, s32 arg1) {
    M2C_UNK fn_8022C518(s32, s32);
    extern M2C_UNK lbl_80291860;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    void *temp_r30;
    void *var_r31;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
    sp14 = arg1;
    temp_r30 = arg0 + 0x40;
    sp8 = M2C_FIELD(&lbl_80291860, s32 *, 0);
    spC = M2C_FIELD(&lbl_80291860, s32 *, 4);
    sp10 = M2C_FIELD(&lbl_80291860, s32 *, 8);
    sp18 = M2C_FIELD(&lbl_80291860, s32 *, 0);
    var_r31 = M2C_FIELD(temp_r30, void **, 4);
    sp1C = M2C_FIELD(&lbl_80291860, s32 *, 4);
    sp20 = M2C_FIELD(&lbl_80291860, s32 *, 8);
    sp24 = arg1;
loop_2:
    if (var_r31 != temp_r30) {
        fn_8022C518(M2C_FIELD(var_r31, s32 *, 8), sp14);
        var_r31 = M2C_FIELD(var_r31, void **, 4);
        goto loop_2;
    }
}

s32 fn_80136268(void *arg0, void *arg1) {
    u8 (*temp_r12)(void *, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(void *, s32), 0x74);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x78)) != 0;
    }
    return M2C_FIELD(arg1, u8 *, 0x19) != 0;
}

s32 fn_801362C8(void *arg0) {
    s16 *var_r4;
    s16 var_r3;

    if ((u32) *(u32 *)((char *)arg0 + 0x68) == 0U) {
        return 0;
    }
    var_r4 = (s16 *) *(u32 *)((char *)arg0 + 0x70);
    var_r3 = *(s16 *)((char *)arg0 + 0x4E);
    if (var_r3 >= 0) {
        do {
            if (var_r3 <= 0) {
                break;
            }
            var_r4 = (s16 *) var_r4[1];
            var_r3 -= 1;
        } while(1);
    } else {
        do {
            if (var_r3 >= 0) {
                break;
            }
            var_r4 = (s16 *) *var_r4;
            var_r3 += 1;
        } while(1);
    }
    return var_r4[2];
}

void fn_80136320(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *, s32, s16, s32, s16, s16);
    M2C_UNK spC;
    s16 spA;
    s16 sp8;
    s16 temp_r10;
    s16 temp_r12;
    s16 temp_r9;
    s32 temp_r11;
    s32 temp_r6;
    s32 temp_r8;

    temp_r12 = M2C_FIELD(arg1, s16 *, 0x56);
    temp_r9 = M2C_FIELD(arg1, s16 *, 0x4E);
    temp_r8 = temp_r9 / temp_r12;
    temp_r10 = M2C_FIELD(arg1, s16 *, 0x54);
    temp_r11 = (s16) (M2C_FIELD(arg1, s16 *, 0x16) - M2C_FIELD(arg1, s16 *, 0x12)) / temp_r12;
    spA = ((s16) ((s16) temp_r8 - temp_r10) << 5) + M2C_FIELD(arg1, s16 *, 0x5E);
    temp_r6 = (s16) temp_r11 * (s16) (M2C_FIELD(arg1, s16 *, 0x4E) % temp_r12);
    sp8 = temp_r6 + M2C_FIELD(arg1, s16 *, 0x5C);
    *arg0 = *fn_8013F748(arg1, &spC, &sp8, temp_r6, (s16) temp_r11, temp_r8, temp_r9, temp_r10);
}

void **fn_801363C4(void **arg0, s16 arg1) {
    void fn_800C428C(void**);
    extern void* lbl_8028FDB0;
    extern void* lbl_8029186C;
    extern void* lbl_80292230;

    if (arg0 != NULL) {
        *arg0 = &lbl_8029186C;
        if (arg0 != NULL) {
            *arg0 = &lbl_80292230;
            if (arg0 != NULL) {
                *arg0 = &lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80136430(void *arg0) {
    s16 r8 = *(s16*) ((u8*) arg0 + 0xC);
    s16 r7 = *(s16*) ((u8*) arg0 + 0x10);
    s16 r6 = *(s16*) ((u8*) arg0 + 0xA);
    s16 r5 = *(s16*) ((u8*) arg0 + 0xE);
    s16 r4 = 5;
    s16 r0 = 0xC;

    r7 = r8 - r7;
    r7 = (s16) r7;
    *(s16*) ((u8*) arg0 + 0x12) = r4;
    r4 = r6 - r5;
    r4 = (s16) r4;
    r5 = r7 - 0xC;
    *(s16*) ((u8*) arg0 + 0x14) = r0;
    r4 = r4 - 0x5;
    *(s16*) ((u8*) arg0 + 0x16) = r4;
    *(s16*) ((u8*) arg0 + 0x18) = r5;
}

s16 fn_80136474(void *arg0) {
    return (s16) ((s32) ((s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14)) - (M2C_FIELD(arg0, s16 *, 0x5E) * 2)) / 32);
}

s16 fn_801366E4(void *arg0) {
    return (s16) ((s32) ((s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14)) - M2C_FIELD(arg0, s16 *, 0x5E)) / 32);
}

s32 fn_80136D78(void) {
    return 0x10;
}

s32 fn_80136D80(void) {
    return 0x20;
}

s32 fn_80136E68(void) {
    return 1;
}

s32 fn_80136E70(void) {
    return 8;
}

s32 fn_80136E78(void) {
    return 0x10;
}

s32 fn_80136F24(void) {
    return 6;
}

void fn_80136F2C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    M2C_UNK fn_800C428C();
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r5;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_4:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        *arg2 = M2C_FIELD(temp_r3_2, void ***, 4);
        fn_800C428C();
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void fn_80136FDC(void *arg0) {
    M2C_UNK fn_8008B464(s32, M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x10)();
    fn_8008B464(M2C_FIELD(arg0, s32 *, 0x3C), 0, 0);
}

extern f32 lbl_8036A620;
extern f32 lbl_8036A628;
extern f64 lbl_8036A630;
extern u8 lbl_802767E0[192];
extern void fn_8000A258(void);
extern s32 fn_8000A174(s32, u16);
extern void fn_8000A248(void);
extern void *fn_8000E0E4(s32);
extern s32 fn_8001003C(s16, s16, u8, u8, u8, void*, f32, f32, f32);
extern s32 fn_8007CCE8(s32, f32, f32);
void fn_801377BC(void *arg0, s16 arg1, s16 arg2, s32 arg3, s8 arg4, s8 arg5, s8 arg6) {
    u16 temp_r0;
    
    fn_8000A258();
    temp_r0 = *(u32*)((char*)arg0 + 0x34) | 3;
    fn_8000A174(0, temp_r0);
    fn_8000A248();
    
    // Call to fn_8001003C with correct arguments - first call
    fn_8001003C(arg1, arg2, 6, 1, 0, fn_8000E0E4(arg3), lbl_8036A620, lbl_8036A628, lbl_8036A630);
    
    // Second call with conditions
    if (arg4 < arg6) {
        fn_8001003C((arg1 + 0x2F), arg2, 1, 1, 0, &lbl_802767E0 + 0x44, arg4, lbl_8036A620, lbl_8036A628);
    } else {
        fn_8001003C((arg1 + 0x2F), arg2, 0x22, 1, 0, &lbl_802767E0 + 0x44, arg4, lbl_8036A620, lbl_8036A628);
    }
    
    fn_8007CCE8((arg5 - arg4), (f32)(arg1 + 0x46), (f32)(arg2 + 4));
}

void fn_801378E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

void fn_80137EA0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

void fn_80138808(void *arg0, s32 arg1) {
    M2C_UNK fn_800506E0(s32, M2C_UNK, void *);
    M2C_UNK fn_8006140C(void *, void *);
    M2C_UNK fn_800616A0();
    void *fn_80061870();
    s32 fn_800639B4();
    s32 temp_r31;
    void *temp_r4;
    void *temp_r5;

    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x3C);
    if ((void *) M2C_FIELD(arg0, void **, 0x50) != NULL) {
        fn_800616A0();
    }
    M2C_FIELD(arg0, void **, 0x50) = fn_80061870();
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 *, 4) = (s32) (temp_r31 + 0x1C);
    temp_r5 = M2C_FIELD(arg0, void **, 0x50);
    M2C_FIELD(temp_r5, s32 *, 0) = (s32) (M2C_FIELD(temp_r5, s32 *, 0) | 0x50020000 | 0x8400);
    fn_800506E0(temp_r31, 0, temp_r5);
    temp_r4 = M2C_FIELD(arg0, void **, 0x50);
    M2C_FIELD(temp_r4, s32 *, 0x44) = fn_800639B4();
    fn_8006140C(M2C_FIELD(arg0, void **, 0x50), temp_r4);
}

void fn_80138898(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) (M2C_FIELD(arg0, s16 *, 0xA) + 0x108);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0xC) + 0x55);
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 7;
    M2C_FIELD(arg0, s16 *, 0x16) = 0x108;
    M2C_FIELD(arg0, s16 *, 0x18) = 0x4F;
}

void fn_801388D4(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

s32 fn_80138908(void) {
    f32 fn_8013893C();
    extern f32 lbl_8036A618;
    return (s32) (lbl_8036A618 * fn_8013893C());
}

s32 fn_80138AB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void fn_80138D14(void *arg0) {
    s16 temp_r4;
    s16 temp_r5;
    s16 temp_r6;
    s16 temp_r7;

    temp_r7 = M2C_FIELD(arg0, s16 *, 0xc);
    temp_r6 = M2C_FIELD(arg0, s16 *, 0x10);
    temp_r5 = M2C_FIELD(arg0, s16 *, 0xa);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0xe);

    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) (temp_r4 - temp_r5);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) (temp_r6 - temp_r7);
}

void fn_80138D44(void *arg0) {
    s16 *ptr = (s16 *)arg0;
    ptr[0x12/2] = 3;
    ptr[0x14/2] = 5;
    ptr[0x16/2] = (s16) ((s16) (ptr[0xE/2] - ptr[0xA/2]) - 3);
    ptr[0x18/2] = (s16) ((s16) (ptr[0x10/2] - ptr[0xC/2]) - 5);
}

void *fn_80138DCC(void *arg0, s16 arg1) {
    M2C_UNK fn_800616A0();
    M2C_UNK fn_800C428C(void *);
    extern M2C_UNK lbl_8028FDB0;
    extern M2C_UNK lbl_80291A3C;
    extern M2C_UNK lbl_80292230;
    s32 temp_cr0_eq;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80291A3C;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            fn_800616A0();
        }
        temp_cr0_eq = arg0 == NULL;
        if (temp_cr0_eq == 0) {
            M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80292230;
            if (temp_cr0_eq == 0) {
                M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80139A50(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x1D8];
}

void fn_8013A9F4(void *arg0) {
    M2C_UNK fn_80155F20(M2C_UNK, M2C_UNK, s16, s16, M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x10)();
    fn_80155F20(0, 0, (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xFF, 0x10);
}

s32 fn_8013AC00(void *arg0, s32 arg1) {
    u8 (*temp_r12)(s32, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(s32, s32), 0x7C);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x80)) != 0;
    }
    return 1;
}

void fn_8013AC54(void *arg0) {
    M2C_UNK arg0_field_0x48;
    s32 arg0_field_0x54 = *(s32 *)((char *)arg0 + 0x54);
    
    arg0_field_0x48 = *(M2C_UNK *)((char *)arg0 + 0x48);
    if (arg0_field_0x54 != 0) {
        *(s32 *)arg0 = *(s32 *)((char *)arg0 + 0x50);
        *(s32 *)((char *)arg0 + 0x50) = arg0_field_0x54;
        *(M2C_UNK *)((char *)arg0 + 0x48) = arg0_field_0x48;
    }
}

void fn_8013ACC4(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *, s32, s16, s16, s16, s16);
    M2C_UNK spC;
    s16 spA;
    s16 sp8;
    s16 temp_r10;
    s16 temp_r6;
    s16 temp_r7;
    s16 temp_r8;
    s16 temp_r9;
    s32 temp_r6_2;

    temp_r10 = M2C_FIELD(arg1, s16 *, 0x4E);
    temp_r6 = M2C_FIELD(arg1, s16 *, 0x58);
    temp_r8 = M2C_FIELD(arg1, s16 *, 0x5A);
    temp_r7 = M2C_FIELD(arg1, s16 *, 0x64);
    temp_r9 = (s16) (temp_r10 / temp_r6) - M2C_FIELD(arg1, s16 *, 0x56);
    temp_r6_2 = temp_r8 * temp_r9;
    sp8 = (M2C_FIELD(M2C_FIELD(arg1, void **, 0), s32 (**)(void *), 0x34)(arg1) * (s16) (M2C_FIELD(arg1, s16 *, 0x4E) % temp_r6)) + M2C_FIELD(arg1, s16 *, 0x62);
    spA = temp_r6_2 + temp_r7;
    *arg0 = *fn_8013F748(arg1, &spC, &sp8, temp_r6_2, temp_r7, temp_r8, temp_r9, temp_r10);
}

void fn_8013B064(s32 arg0, s32 arg1) {
    M2C_UNK fn_800506E0(s32, M2C_UNK, void *);
    M2C_UNK fn_8006140C(void *, void *);
    M2C_UNK fn_800616A0();
    void *fn_80061870();
    s32 fn_800639B4();
    M2C_UNK fn_8013BAD4(M2C_UNK *, s32, s32 *, s32 *);
    void *sp14;
    s32 sp10;
    s32 spC;
    M2C_UNK sp8;
    void *temp_r3;

    sp10 = arg1;
    sp14 = NULL;
    temp_r3 = fn_80061870();
    sp14 = temp_r3;
    M2C_FIELD(temp_r3, s32 *, 4) = (s32) (arg1 + 0x1C);
    M2C_FIELD(sp14, s32 *, 0) = (s32) (M2C_FIELD(sp14, s32 *, 0) | 0x50020000 | 0x8400);
    fn_800506E0(arg1, 0, sp14);
    M2C_FIELD(sp14, s32 *, 0x44) = fn_800639B4();
    fn_8006140C(temp_r3, sp14);
    spC = arg0 + 0x74;
    fn_8013BAD4(&sp8, arg0 + 0x70, &spC, &sp10);
    if (sp14 != NULL) {
        fn_800616A0();
    }
}

void fn_8013B120(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void fn_8013B254(void *arg0) {
    s16 temp_r3;
    s16 temp_r5;
    void *temp_r6;

    M2C_FIELD(arg0, s16 *, 0x64) = (s16) (M2C_FIELD(arg0, s16 *, 0x64) + 8);
    M2C_FIELD(arg0, s16 *, 0x92) = (s16) (((s16) (M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)) >> 1) - 0x20);
    M2C_FIELD(arg0, s16 *, 0x94) = 0;
    M2C_FIELD(arg0, s16 *, 0x96) = 0;
    M2C_FIELD(arg0, s16 *, 0xBA) = (s16) (((s16) (M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)) >> 1) - 0x20);
    M2C_FIELD(arg0, s16 *, 0xBC) = (s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14));
    M2C_FIELD(arg0, s16 *, 0xBE) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s32 *, 0x48) = 0;
    temp_r6 = M2C_FIELD(arg0, void **, 0x48);
    temp_r5 = M2C_FIELD(temp_r6, s16 *, 0xA);
    temp_r3 = temp_r5 - 0x20;
    M2C_FIELD(temp_r6, s16 *, 0xE) = (s16) (temp_r3 + (s16) (M2C_FIELD(temp_r6, s16 *, 0xE) - temp_r5));
    M2C_FIELD(temp_r6, s16 *, 0xA) = temp_r3;
    M2C_FIELD(temp_r6, s16 *, 0x10) = (s16) (M2C_FIELD(temp_r6, s16 *, 0xC) + (s16) (M2C_FIELD(temp_r6, s16 *, 0x10) - M2C_FIELD(temp_r6, s16 *, 0xC)));
}

void fn_8013B308(void) {

}

s16 fn_8013B30C(void *arg0) {
    return (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12)) / (s16) M2C_FIELD(arg0, s16 *, 0x58));
}

void fn_8013B32C(void) {

}

s16 fn_8013B330(void *arg0) {
    return (s16) ((s32) ((s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14)) - (M2C_FIELD(arg0, s16 *, 0x64) * 2)) / (s16) M2C_FIELD(arg0, s16 *, 0x5A));
}

s16 fn_8013B35C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xD4);
}

void fn_8013B594(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0xD4) = arg1;
}

void fn_8013B69C(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0xD4) = arg1;
}

s16 fn_8013B6A4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xD4);
}

void fn_8013BA08(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    void fn_800616A0();
    void fn_800C428C(void **);
    void **temp_r5;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_4;
    void **temp_r0;
    void *temp_r3_3;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    *M2C_FIELD(temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = temp_r5;
loop_7:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        temp_r3_3 = temp_r3_2 + 8;
        if ((temp_r3_3 != NULL) && ((u32) M2C_FIELD(temp_r3_3, u32 *, 4)) != 0U) {
            fn_800616A0();
        }
        temp_r3_4 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_4, void ***, 4);
        fn_800C428C(temp_r3_4);
        *arg1 -= 1;
        goto loop_7;
    }
    *arg0 = temp_r0;
}

void fn_8013BBF8(void *arg0) {
    *(s32 *) arg0 = 0;
    *(s32 **) ((char *) arg0 + 4) = (s32 *) ((char *) arg0 + 4);
    *(s32 **) ((char *) arg0 + 4) = (s32 *) ((char *) arg0 + 4);
}

void fn_8013C388(void *arg0) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8013C3AC(void) {
    return 0;
}

#pragma cplusplus on
struct RefObj {
    virtual ~RefObj();
    s32 refCount;
};
extern "C" void fn_8015B954(s32, s32, s32);
extern "C" void fn_8013CA2C(void *arg0) {
    struct Obj {
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
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
    };
    ((Obj *)arg0)->v30();
    fn_8015B954(0, 0, 0x10);
}
#pragma cplusplus reset
void fn_8013CD7C(void) {
    extern s8 lbl_802EF4C8;
    *(s8*)((char*)&lbl_802EF4C8 + 8) = 0x80;
}

void fn_8013CD90(void) {
    return;
}

s32 fn_8013CDCC(void) {
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_80276908;
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0x80;
    fn_801475FC(&lbl_80276908 + 0x73, 0x64);
    return 1;
}

s32 fn_8013CE64(void) {
    extern u16 lbl_802EF4C8;
    *(u8*)((u32)&lbl_802EF4C8 + 8) = 0x81;
    return 5;
}

void fn_8013D10C(void) {
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
}

void fn_8013D13C(void) {

}

void fn_8013D140(void *arg0) {
    M2C_UNK fn_80009B80(M2C_UNK);
    M2C_UNK fn_80153634(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x80)();
    fn_80153634(0, 0, 0x10);
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}

void fn_8013DD1C(s32 arg0, void *arg1) {
    M2C_UNK fn_80009B80(M2C_UNK);
    u8 var_r3;
    u8 var_r3_2;

    fn_8000A258();
    fn_8000A174(0, 0x13);
    var_r3 = 0;
    if ((M2C_FIELD(arg1, u8 *, 0x2D) == 0) && (M2C_FIELD(arg1, u8 *, 0x2E) == 0)) {
        var_r3 = 1;
    }
    var_r3_2 = 0x40;
    if (var_r3 != 0) {
        var_r3_2 = 0x80;
    }
    fn_80009B80(var_r3_2);
    fn_8000A248();
}

#pragma cplusplus on
extern "C" void *fn_8000B908(u8);
extern "C" void fn_8013E218(void *arg0, void *arg1) {
    struct Obj {
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
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
        virtual s16 v31() = 0;
        virtual s16 v32() = 0;
    };
    s32 i;
    void *p;

    for (i = 0; i < M2C_FIELD(arg1, s8 *, 0x60); i++) {
        p = fn_8000B908(*(u8 *)((u32)arg1 + (i + 0x40)));
        M2C_FIELD(p, s16 *, 0x30) += ((Obj *)arg0)->v31();
        M2C_FIELD(p, s16 *, 0x32) += ((Obj *)arg0)->v32();
    }
}
#pragma cplusplus reset

void fn_8013E300(void) {
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0;
}

void *fn_8013E314(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern M2C_UNK lbl_80291C50;
    extern M2C_UNK lbl_80291DA0;
    extern M2C_UNK lbl_802920E0;
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80291C50;
        if (temp_cr0_eq == 0) {
            M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80291DA0;
            if (temp_cr0_eq == 0) {
                M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_802920E0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_8013E380(void) {
    return 0x38;
}

s32 fn_8013E388(void) {
    return 0x62;
}

s32 fn_8013E390(void) {
    return 0x1C;
}

#pragma cplusplus on
extern "C" void fn_8015B820(s32, s32, s32);
extern "C" void fn_8013E398(void *arg0) {
    struct Obj {
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
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
    };
    ((Obj *)arg0)->v30();
    fn_8015B820(0, 0, 0x10);
}
#pragma cplusplus reset

void *fn_8013E440(void) {
    extern void *lbl_80276908;
    return (char *)lbl_80276908 + 0x9F;
}

s32 fn_8013E450(void) {
    return 0;
}

s32 fn_8013E458(void) {
    return 0;
}

s32 fn_8013E460(void) {
    return 0x1C;
}

s32 fn_8013E468(void) {
    return 0x1C;
}

s32 fn_8013E470(void) {
    return 0x1C;
}

void fn_8013E478(void *arg0) {
    M2C_UNK fn_80009B80(M2C_UNK);
    M2C_UNK fn_80009C0C(f32);
    extern f32 lbl_8036A6D0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x80)();
    fn_8000A258();
    fn_80009C0C(lbl_8036A6D0);
    fn_80009B80(0x80);
    fn_8000A248();
}

void fn_8013E4BC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) | arg1);
}

u8 fn_8013E4CC(void *arg0, s32 arg1) {
    return (u8) (M2C_FIELD(arg0, u8 *, 9) & arg1);
}

void fn_8013E4DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

void *fn_8013E4E4(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern void *lbl_80291DA0;
    extern void *lbl_802920E0;
    
    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80291DA0;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_8013E540(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C();
    extern M2C_UNK lbl_802920E0;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_802920E0;
        if (arg1 > 0) {
            fn_800C428C();
        }
    }
    return arg0;
}

s32 fn_8013E588(void) {
    return 0x1C;
}

void fn_8013E590(void *arg0) {
    ((void (*)(void))M2C_FIELD(M2C_FIELD(arg0, void **, 4), void (**)(void), 0xA0))();
}

s16 fn_8013E5BC(void *arg0) {
    s32 temp_r31;
    s16 temp_r4;

    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(), 0x50)();
    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x48)(arg0);
    return (s16) ((temp_r31 - (temp_r4 * 2)) / 3);
}

s16 fn_8013E63C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

s16 fn_8013E644(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xC);
}

s32 fn_8013E64C(void) {
    return 0x3B;
}

s16 fn_8013E654(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xE);
}

f32 fn_8013E65C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x18);
}

s16 fn_8013E664(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xA);
}

s16 fn_8013E66C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 8);
}

s32 fn_8013E674(void) {
    return 0x68;
}

s16 fn_8013E67C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x20);
}

s16 fn_8013E684(void *arg0, void *arg1) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(), 0x90)();
    return (s16) ((s32) ((temp_r3 + (s8) M2C_FIELD(arg1, u8 *, 0x60)) - 1) / temp_r3);
}

s16 fn_8013E6D8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x16);
}

s16 fn_8013E6E0(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x12);
}

s16 fn_8013E6E8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x14);
}

s16 fn_8013E6F0(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1C);
}

#pragma cplusplus on
extern "C" s16 fn_8013E6F8(void *arg0) {
    struct Obj {
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
        virtual s16 v16() = 0;
        virtual void v17() = 0;
        virtual s32 v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
        virtual void v31() = 0;
        virtual void v32() = 0;
        virtual void v33() = 0;
        virtual s16 v34() = 0;
    };
    s16 t = ((Obj *)arg0)->v18() - ((Obj *)arg0)->v16() * 2;
    return t / ((Obj *)arg0)->v34();
}
#pragma cplusplus reset

s16 fn_8013E780(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(), 0x50)();
    return (s16) (temp_r31 - (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x48)(arg0) * 2));
}

s8 fn_8013E7E8(void *arg1) {
    return (s8) M2C_FIELD(arg1, u8 *, 0x60);
}

void *fn_8013E804(void) {
    extern u8 lbl_80276908[];
    return &lbl_80276908[0xAF];
}

void *fn_8013E814(void) {
    extern u8 lbl_80276908[];
    return &lbl_80276908[0xC8];
}

s32 fn_8013E824(void) {
    return 1;
}

s16 fn_8013E82C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1E);
}

s16 fn_8013E834(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1E);
}

void fn_8013EB6C(void **arg0) {
    void (**func_ptr)(void);
    
    func_ptr = (void (**)(void))((char *) *arg0 + 0x10);
    (*func_ptr)();
    
    fn_801528E4(0, 0, 0x10);
}

void fn_8013ED84(void *arg0, s16 arg1) {
    s16 temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x3C) > 0) {
        temp_r5 = M2C_FIELD(arg0, s16 *, 0x40);
        if (temp_r5 != arg1) {
            if (arg1 < temp_r5) {
                M2C_FIELD(arg0, s16 *, 0x62) = 1;
                M2C_FIELD(arg0, s8 *, 0x59) = 0;
            } else {
                M2C_FIELD(arg0, s16 *, 0x8A) = 1;
                M2C_FIELD(arg0, s8 *, 0x81) = 0;
            }
            M2C_FIELD(arg0, s16 *, 0x40) = arg1;
        }
    }
}

s16 fn_8013EED8(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA));
}

s16 fn_8013EEEC(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14));
}

#pragma cplusplus on
extern "C" void *fn_8013F038(void *arg0, s16 arg1, u8 arg2) {
    struct Item {
        virtual ~Item();
        virtual void *find(s16, u8);
        u8 pad[4];
        s16 id;
    };
    struct Node {
        Node *next;
        void *pad;
        Item *item;
    };
    Node *end = (Node *)((char *)arg0 + 0x40);
    Node *it;
    Node *head = *(Node **)((char *)arg0 + 0x44);
    Item *res = 0;

    for (it = end; it != head; it = it->next) {
        Item *item = it->item;
        if (arg1 == item->id) {
            res = item;
            break;
        }
        if (arg2 != 0) {
            res = (Item *)item->find(arg1, arg2);
            if (res != 0) {
                break;
            }
        }
    }
    return res;
}
#pragma cplusplus off

#pragma cplusplus on
extern "C" void fn_8013FC68(void ***, s32 *, void ***);
#pragma cplusplus on
void fn_8013F0F0(void) {
    return;
}
#pragma cplusplus off

void fn_8013F3C0(void) {

}

void fn_8013F3C4(void) {

}

void fn_8013F3C8(void) {

}

void fn_8013F3CC(void) {

}

void fn_80059C2C(s32, s32, s32, s32, s32);
void fn_8013F3D0(void) {
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void *fn_8013F6B8(void *arg0, void *arg1, void *arg2) {
    void fn_8013F748(void *, void *, void *);
    struct Point {
        s16 x;
        s16 y;
    };
    struct Point pt;
    struct Point temp2;
    struct Point temp;

    pt.x = 0;
    pt.y = 0;
    fn_8013F748(arg0, &pt, &pt);
    temp = *(struct Point *)arg2;
    temp.x -= pt.x;
    temp.y -= pt.y;
    temp2 = temp;
    *(s16 *)((char *)arg1 + 0) = temp2.x;
    *(s16 *)((char *)arg1 + 2) = temp2.y;
    return arg1;
}

void fn_8013F920(void *arg1) {
    s16 *ptr = (s16*)arg1;
    s16 temp;

    // Process first element
    if (ptr[0] < 0) {
        temp = 0;
    } else if (ptr[0] > 0x7FF) {
        temp = 0x7FF;
    } else {
        temp = ptr[0];
    }
    ptr[0] = temp;

    // Process second element
    if (ptr[1] < 0) {
        temp = 0;
    } else if (ptr[1] > 0x7FF) {
        temp = 0x7FF;
    } else {
        temp = ptr[1];
    }
    ptr[1] = temp;

    // Process third element
    if (ptr[2] < 0) {
        temp = 0;
    } else if (ptr[2] > 0x7FF) {
        temp = 0x7FF;
    } else {
        temp = ptr[2];
    }
    ptr[2] = temp;

    // Process fourth element
    if (ptr[3] < 0) {
        temp = 0;
    } else if (ptr[3] > 0x7FF) {
        temp = 0x7FF;
    } else {
        temp = ptr[3];
    }
    ptr[3] = temp;

    fn_80225058(ptr[0], ptr[1], ptr[2] - ptr[0], ptr[3] - ptr[1]);
}

s32 fn_8013FA10(void) {
    f32 fn_80138AC0();
    extern f32 lbl_8036A728;
    return (s32) (lbl_8036A728 * fn_80138AC0());
}

s32 fn_8013FBC0(s32 arg0) {
    return arg0 + 0x12;
}

void fn_8013FBC8(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_8013FBD4(s32 arg0) {
    return arg0 + 0xA;
}

void fn_8013FBDC(void *arg0, void *arg1) {
    *(s16*)arg0 += *(s16*)arg1;
    *(s16*)((char*)arg0 + 2) += *(s16*)((char*)arg1 + 2);
}

void fn_8013FC00(void *arg0, void *arg1) {
    *(s16 *)((char *)arg0 + 0x0) = *(s16 *)((char *)arg1 + 0x0);
    *(s16 *)((char *)arg0 + 0x2) = *(s16 *)((char *)arg1 + 0x2);
}

void fn_8013FC64(void) {

}

void fn_8013FC68(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_r0;
    void **temp_r3;
    void **temp_r4;

    temp_r3 = *arg2;
    temp_r0 = M2C_FIELD(temp_r3, void ***, 4);
    *arg2 = temp_r0;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), void ***, 4) = temp_r0;
    temp_r4 = M2C_FIELD(temp_r3, void ***, 4);
    *temp_r4 = M2C_FIELD(temp_r3, void **, 0);
    fn_800C428C(temp_r3, temp_r4);
    *arg1 -= 1;
    *arg0 = *arg2;
}

void fn_8013FDA0(void *arg0) {
    u32 temp_r5;
    void **var_r0;
    void **var_r3;

    temp_r5 = M2C_FIELD(arg0, u32 *, 0x34);
    if (temp_r5 != 0U) {
        var_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void ***, 8);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r5 != 0U) {
            var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void ***, 8);
        } else {
            var_r3 = NULL;
        }
        M2C_FIELD(*var_r3, M2C_UNK (**)(), 0x24)();
    }
}

void fn_8013FEC0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) - 1);
}

void fn_8013FED0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) + 1);
}

void fn_8013FEE0(void) {
    extern u8 lbl_80367AD8;
    lbl_80367AD8 -= 1;
}

void fn_8013FEF0(void) {
    lbl_803671C0 += 1;
}

void fn_801400F4(void *arg0, void *arg1) {
    u32 sp10;
    u32 spC;
    void *sp8;
    void *var_r3;
    u32 temp_r5;

    if (arg1 != NULL) {
        temp_r5 = (u32)arg0 + 0x38;
        var_r3 = *(void **)((char *)arg0 + 0x3C);
        if (var_r3 != (void *)temp_r5) {
            do {
                var_r3 = *(void **)((char *)var_r3 + 0x4);
            } while ((var_r3 != (void *)temp_r5) && (*(u32 *)((char *)var_r3 + 0x8) != (u32)arg1));
        }
        if (var_r3 == (void *)temp_r5) {
            sp8 = arg1;
            fn_8013FCE0(&spC, (char *)arg0 + 0x34, &temp_r5, &sp8);
            if (sp8 != NULL) {
                *(u32 *)((char *)sp8 + 0x4) = *(u32 *)((char *)sp8 + 0x4) + 1;
            }
        }
    }
}

void fn_8014017C(s32 arg3) {
    extern u32 lbl_802922E4[3];
    extern u32 lbl_802922D8[3];
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r3 = lbl_802922E4[0];
    temp_r4 = lbl_802922E4[1];
    temp_r5 = lbl_802922E4[2];
    temp_r3 = lbl_802922E4[0];
    temp_r4 = lbl_802922E4[1];
    temp_r5 = lbl_802922E4[2];
    temp_r6 = lbl_802922D8[0];
    temp_r3 = lbl_802922D8[1];
    temp_r4 = lbl_802922D8[2];
    temp_r5 = lbl_802922D8[0];
    temp_r6 = lbl_802922D8[1];
    temp_r3 = lbl_802922D8[2];
    fn_80140830(&temp_r3, &temp_r5, arg3, lbl_802922D8[1], lbl_802922D8[0]);
}

void fn_80140210(void) {
    fn_80140E58(0x1);
}

void fn_80140258(void) {
    fn_801414F8(0x2);
}

void fn_8014027C(void) {
    fn_801414F8(0x1);
}

void fn_801402A0(void) {
    fn_801414F8(0x0);
}

void fn_801402C4(void) {
    M2C_UNK fn_80141B00();
    fn_80141B00();
}

void fn_801402E4(void) {
    M2C_UNK fn_80141D94();
    fn_80141D94();
}

void *fn_801403F0(void *arg0) {
    *(u8 *)((uintptr_t)arg0 + 0x30) = 0;
    fn_80142060((char *)arg0 + 0x34);
    return arg0;
}

s32 fn_80140B04(s32 arg0) {
    return arg0 + 4;
}

void fn_80140D98(void *arg0, f32 farg1) {
    extern f32 lbl_8036A730;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f2;
    s32 temp_r0;
    u32 temp_r7;
    void *var_r3;
    void *var_r4;

    var_f2 = farg1;
    temp_r7 = M2C_FIELD(arg0, u32 *, 0x34);
    if (temp_r7 != 0U) {
        var_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 8);
    } else {
        var_r4 = NULL;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x40);
    temp_f4 = (f32) (M2C_FIELD(var_r4, s16 *, 0x24) + 1);
    temp_f3 = (f32) (M2C_FIELD(arg0, s16 *, 0x28) + 1);
    switch (temp_r0) {                              /* irregular */
    case 0:
        var_f2 = (lbl_8036A730 / temp_f4) * (temp_f4 - temp_f3);
        break;
    case 1:
        var_f2 = (lbl_8036A730 / temp_f4) * temp_f3;
        break;
    }
    if (temp_r7 != 0U) {
        var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 8);
    } else {
        var_r3 = NULL;
    }
    M2C_FIELD(var_r3, f32 *, 0x2C) = var_f2;
}

void fn_80142018(Vec2s *out, void *arg0) {
    s16 w = M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA);
    s16 h = M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC);
    out->x = w;
    out->y = h;
}

void fn_8014203C(void *arg0, Vec2s *size) {
    s16 x = M2C_FIELD(arg0, s16 *, 0xA);
    s16 w = size->x;
    s16 h = size->y;
    M2C_FIELD(arg0, s16 *, 0xE) = x + w;
    M2C_FIELD(arg0, s16 *, 0x10) = M2C_FIELD(arg0, s16 *, 0xC) + h;
}

void fn_801426B4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x40) = 0;
}

void fn_801426C0(void *arg0) {
    M2C_UNK fn_80140304(M2C_UNK);

    if (*(u32 *)((u8 *)arg0 + 0x34) != 0U) {
        *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 0x8C) = 0;
        *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x38) + 0x8E) = 0;
    } else {
        *(s16 *)((u8 *)arg0 + 0x38) = 0;
        *(s16 *)((u8 *)arg0 + 0x3A) = 0;
    }

    if (arg0 != NULL) {
        fn_80140304(0);
    }
}

void fn_80142714(void *arg0) {
    M2C_UNK fn_801569C4(M2C_UNK, M2C_UNK, s16, s16, M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x10)();
    fn_801569C4(0, 0, (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xE6, 0x10);
}

void fn_80142780(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    fn_8008AB7C(arg1 + (arg3 >> 1), arg2 + (arg4 >> 1), arg3, 0x17, 0x19, 0x4C, arg5);
}

void fn_801427D4(void *arg0, s16 arg1, s16 arg2, s32 *arg4, s32 arg5) {
    M2C_UNK fn_8008D264(s32, s32, s16, s16, f32);
    fn_8008D264(*arg4, arg5, arg1, arg2, *(f32 *)((u8 *)arg0 + 0x128));
}

void fn_80142814(s32 arg0, s16 arg1, s16 arg2, s32 arg3, s32 *arg4, s32 arg5) {
    M2C_UNK fn_8008D000(s32, s32, s32, s32);
    fn_8008D000(*arg4, arg5, arg1, arg2);
}

void fn_801434E4(s32 arg0, s16 arg1, s16 arg2, s32 arg3, s32 *arg4, s32 arg5) {
    M2C_UNK fn_8008D510(s32, s32, s32, s32);
    fn_8008D510(*arg4, arg5, arg1, arg2);
}

s32 fn_8014351C(void *arg0, s32 arg1) {
    u8 (*temp_r12)(s32, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(s32, s32), 0x120);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x124)) != 0;
    }
    return 1;
}

void fn_80143570(void *arg0) {
    typedef struct { u8 unk0; } Unk1;
    M2C_UNK fn_80144B60(void *, Unk1);
    Unk1 e;
    s32 i;

    for (i = 0; i != 11; i++) {
        fn_80144B60((u8 *)arg0 + (i * 0xC + 0x90), e);
    }
}

void *fn_801436AC(void) {
    extern u16 lbl_80276008[];
    return &lbl_80276008[0x2B0];
}

void fn_80143B24(s32 arg0) {
    M2C_UNK fn_8022C518(u32);
    M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_802922F0;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u32 var_r30;

    memset(arg0 + 0x4E, 0, 0x16);
    memset(arg0 + 0x64, 0, 0x16);
    var_r30 = arg0 + 0x90;
    sp14 = M2C_FIELD(&lbl_802922F0, s32 *, 0);
    sp18 = M2C_FIELD(&lbl_802922F0, s32 *, 4);
    sp1C = M2C_FIELD(&lbl_802922F0, s32 *, 8);
    sp8 = M2C_FIELD(&lbl_802922F0, s32 *, 0);
    spC = M2C_FIELD(&lbl_802922F0, s32 *, 4);
    sp10 = M2C_FIELD(&lbl_802922F0, s32 *, 8);
loop_2:
    if (var_r30 != (u32) (arg0 + 0x114)) {
        fn_8022C518(var_r30);
        var_r30 += 0xC;
        goto loop_2;
    }
}

void fn_80143BC8(s32 *arg0, void *arg1) {
    s32 *temp_r4;
    s16 temp_r6;
    s16 temp_r7;
    s16 temp_r8;
    s16 sp8;
    s16 spA;

    temp_r4 = (s32*)((char*)arg1 + ((s32 (*)(void*))*(u32*)((char*)arg1+0x30))(arg1)*2);
    temp_r6 = *(s16*)((char*)arg1 + 0x8A);
    temp_r8 = *(s16*)((char*)temp_r4 + 0x4E);
    temp_r7 = *(s16*)((char*)temp_r4 + 0x64);
    sp8 = *(s16*)((char*)arg1 + 0x88);
    spA = (s16)((((temp_r7 - temp_r8) << 5) + temp_r6));
    *arg0 = fn_8013F748(arg1, &sp8, &sp8, temp_r6, temp_r7, temp_r8);
}

s16 fn_80143C58(void **arg0) {
    return M2C_FIELD((arg0 + (M2C_FIELD(*arg0, s32 (**)(), 0x30)() * 2)), s16 *, 0x64);
}

void fn_80144584(void *arg0, s16 arg1) {
    void fn_8013F2A4(void *, s32);
    void fn_8022C1E8(void *, void *, s32, s32);
    void fn_800C428C(void *);
    extern u16 lbl_80292358;
    extern u16 lbl_80292488;
    extern void fn_80144610;

    if (arg0 != NULL) {
        *(u16**)arg0 = &lbl_80292358;
        if (arg0 != NULL) {
            *(u16**)arg0 = &lbl_80292488;
            fn_8022C1E8((u8*)arg0 + 0x90, &fn_80144610, 0xC, 0xB);
            fn_8013F2A4(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
}

void *fn_80144610(void *arg0, s16 arg1) {
    char *sp10;
    s32 spC;
    s32 sp8;
    
    if (arg0 != NULL) {
        sp10 = (char *)arg0 + 4;
        spC = *(s32 *)((char *)arg0 + 0x8);
        fn_80144D84(&sp8, arg0, &spC, &sp10);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80144688(void) {

}

s32 fn_8014468C(void) {
    return 0;
}

void fn_80144694(void) {

}

void fn_801447A4(void *arg0, s32 arg1) {
    extern s32 lbl_80367AE0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x3C) = arg1;
    lbl_80367AE0 = arg1;
}

s32 fn_80144850(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x3C);
}

void *fn_80144A0C(void *arg0, s16 arg1) {
    extern u16 lbl_80292504;
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 0x44) = &lbl_80292504;
        (*(void (**)(void*))((char*)*(u32**)((char*)arg0 + 0x44) + 0x10))(&lbl_80292504);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80144B1C(void **arg0, void *arg1) {
    M2C_FIELD(*arg0, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    *M2C_FIELD(arg1, void ***, 4) = *arg0;
}

void fn_80144B5C(void) {

}

s32 fn_80144D74(s32 arg0) {
    return arg0 + 4;
}

void fn_80144D7C(void) {

}

void fn_80144D80(void) {

}

void fn_80145124(void) {
    void *r3;
    void *r4;
    void *r5;
    void *r6;
    void *r7;
    void *r8;
    void *r9;
    
    r5 = *(void **)0x803630A0;
    if (*(u32 *)r5 == 0) {
        return;
    }
    
    r7 = (char *)r5 + 4;
    r6 = *(void **)r4;
    r8 = *(void **)((char *)r5 + 8);
    *(u32 *)r7 = 0;
    r9 = *(void **)((char *)r5 + 4);
    *(void **)((char *)r7 + 4) = r7;
    *(void **)(r7) = r7;
    *(void **)r6 = r8;
    *(void **)((char *)r6 + 4) = r6;
    *(void **)r9 = r6;
    *(void **)((char *)r9 + 4) = r9;
    *(void **)r3 = r6;
    *(u32 *)r5 = 0;
}

void fn_8014517C(void) {
    M2C_UNK fn_800B2CCC();
    fn_800B2CCC();
}

void fn_8014519C(void) {
    M2C_UNK fn_800B2D94();
    fn_800B2D94();
}

void fn_801452A8(void) {
    M2C_UNK fn_800B3248();
    fn_800B3248();
}

void fn_801452C8(void) {
    M2C_UNK fn_800B2F20();
    fn_800B2F20();
}

void fn_801452E8(void) {
    M2C_UNK fn_800B2E78();
    fn_800B2E78();
}

s32 fn_80145308(s32 arg0, s32 arg1) {
    extern u8 lbl_80276008[];
    
    s32 var_r3 = 0;
    s32 i;
    
    for (i = 0; i < 0x94; i++) {
        if (lbl_80276008[arg0 + i] == arg1) {
            var_r3 = i;
            break;
        }
    }
    
    return var_r3;
}

void fn_80145520(void) {
    M2C_UNK fn_8000BF00(void *);
    void *fn_8000CAF0(void *, M2C_UNK);
    extern M2C_UNK lbl_80292558;
    extern u8 lbl_80367AEE;
    extern f32 lbl_8036A778;
    extern f32 lbl_8036A77C;
    void *temp_r3;

    fn_8000BF00(&lbl_80292558 + 0x28);
    fn_8000BF00(&lbl_80292558 + 0x3C);
    fn_8000BF00(&lbl_80292558 + 0x50);
    fn_8000BF00(&lbl_80292558 + 0x64);
    fn_8000BF00(&lbl_80292558 + 0x78);
    fn_8000BF00(&lbl_80292558 + 0x8C);
    temp_r3 = fn_8000CAF0(&lbl_80292558 + 0x64, 3);
    M2C_FIELD(temp_r3, f32 *, 0x30) = (f32) lbl_8036A778;
    M2C_FIELD(temp_r3, f32 *, 0x34) = (f32) lbl_8036A77C;
    M2C_FIELD(temp_r3, f32 *, 0x38) = (f32) lbl_80367AEE;
}

void fn_8014571C(void) {
    M2C_UNK fn_8000BF00(void *);
    void *fn_8000CAF0(void *, M2C_UNK);
    extern M2C_UNK lbl_80292558;
    extern u8 lbl_80367AEE;
    extern f32 lbl_8036A778;
    extern f32 lbl_8036A77C;
    void *temp_r3;

    fn_8000BF00(&lbl_80292558 + 0x28);
    fn_8000BF00(&lbl_80292558 + 0x3C);
    fn_8000BF00(&lbl_80292558 + 0x50);
    fn_8000BF00(&lbl_80292558 + 0x64);
    fn_8000BF00(&lbl_80292558 + 0x78);
    fn_8000BF00(&lbl_80292558 + 0x8C);
    temp_r3 = fn_8000CAF0(&lbl_80292558 + 0x28, 3);
    M2C_FIELD(temp_r3, f32 *, 0x30) = (f32) lbl_8036A778;
    M2C_FIELD(temp_r3, f32 *, 0x34) = (f32) lbl_8036A77C;
    M2C_FIELD(temp_r3, f32 *, 0x38) = (f32) lbl_80367AEE;
}

void fn_8014595C(void *arg0) {
    extern s32 lbl_80367110;
    extern s8 lbl_80367AEE;
    extern f32 lbl_8036A790;
    extern f32 lbl_8036A798;
    
    if (lbl_80367110 & 3) {
        lbl_80367AEE = 0x78;
        fn_8000C188();
        return;
    }
    
    M2C_FIELD(arg0, f32 *, 0x30) = M2C_FIELD(arg0, f32 *, 0x30) + lbl_8036A790;
    
    // Simple function call with direct argument passing
    fn_800067BC(0, M2C_FIELD(arg0, f32 *, 0x38), lbl_8036A798, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    
    // Store result in global variable
    lbl_80367AEE = (s8)M2C_FIELD(arg0, f32 *, 0x30);
    
    // Check condition for call
    if (M2C_FIELD(arg0, f32 *, 0x30) == M2C_FIELD(arg0, f32 *, 0x34)) {
        fn_8000C188(arg0);
    }
}

void fn_80145C5C(void *arg0) {
    f32 fn_800067BC(M2C_UNK, f32, f32, f32, f32);
    extern s32 lbl_80367110;
    extern s8 lbl_80367AEE;
    extern f32 lbl_8036A790;
    extern f32 lbl_8036A79C;
    if (lbl_80367110 & 3) {
        lbl_80367AEE = 0x46;
        fn_8000C188();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) + lbl_8036A790);
    lbl_80367AEE = (s8) fn_800067BC(0, (f32) (u8) (s32) M2C_FIELD(arg0, f32 *, 0x38), lbl_8036A79C, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
    M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
    if (M2C_FIELD(arg0, f32 *, 0x30) == M2C_FIELD(arg0, f32 *, 0x34)) {
        fn_8000C188(arg0);
    }
}

void fn_80145E9C(void) {
    M2C_UNK fn_800B28FC();
    fn_800B28FC();
}

s32 fn_80146AE4(void) {
    extern s32 lbl_80367AF8;
    return lbl_80367AF8 & 1;
}

void fn_80146AF0(void) {
    extern s32 lbl_80367AF8;
    lbl_80367AF8 &= 0xFFFFFFFE;
}

void fn_80146B00(void) {
    extern s32 lbl_80367AF8;
    lbl_80367AF8 |= 1;
}

void fn_8014716C(u8 arg0) {
    extern u16 lbl_80367AF8;
    if (arg0) {
        lbl_80367AF8 |= 2;
    } else {
        lbl_80367AF8 &= 0xFFFD;
    }
}

void fn_80147548(void *arg1, s32 arg2) {
    f32 var1 = *(f32*)((u8*)arg1 + 0);
    f32 var2 = *(f32*)((u8*)arg1 + 4);
    f32 var3 = *(f32*)((u8*)arg1 + 8);
    fn_80147578(arg2, var1, var2, var3);
}

void fn_801478D0(s16 arg0) {
    extern u16 lbl_8032FFC8[240];
    
    s32 i;
    u8 *ptr;
    
    ptr = (u8 *)&lbl_8032FFC8[0];
    for (i = 0; i < 0xA; i++) {
        if ((ptr[0xC] & 1) != 0) {
            if (arg0 <= 0) {
                void (*func)(u8 *) = (void (*)(u8 *))(*(u32 **)(ptr + 8) + 4);
                func(ptr);
            } else if ((ptr[0xC] & 8) == 0) {
                s16 temp;
                temp = (s16)((f32)arg0 / 1.0f); // Using 1.0f since there's no global for the value
                if (temp <= 0) {
                    temp = 1;
                }
                ptr[0x28] = ptr[0x16];
                ptr[0x29] = 0;
                ptr[0x2E] = temp;
                ptr[0x2C] = 0;
                ptr[0xC] = ptr[0xC] | 8;
            }
        }
        ptr += 0x30;
    }
}

void fn_80147B24(f32 farg0, f32 farg1, f32 farg2) {
    s8 fn_80147B9C();
    extern u16 lbl_8032FFC8[240];
    s8 temp_r3;
    void *temp_r4;

    temp_r3 = fn_80147B9C();
    if (temp_r3 >= 0) {
        temp_r4 = &lbl_8032FFC8 + (temp_r3 * 0x30);
        *(f32*)((u8*)temp_r4 + 0x1C) = farg0;
        *(f32*)((u8*)temp_r4 + 0x20) = farg1;
        *(f32*)((u8*)temp_r4 + 0x24) = farg2;
        *(u8*)((u8*)temp_r4 + 0xC) = (*(u8*)((u8*)temp_r4 + 0xC) | 2);
    }
}

void fn_80147EBC(s16 arg0) {
    extern M2C_UNK lbl_8032FF08;
    extern f32 lbl_8036A7A0;
    M2C_UNK *var_r29;
    s16 var_r30;
    s32 var_r28;

    var_r29 = &lbl_8032FF08;
    var_r28 = 0;
    do {
        if ((M2C_FIELD(var_r29, u8 *, 0xC) & 1) && (M2C_FIELD(M2C_FIELD(var_r29, void **, 8), u8 (**)(M2C_UNK *), 0x6C)(var_r29) != 0)) {
            var_r30 = (s16) ((f32) arg0 / lbl_8036A7A0);
            if (var_r30 <= 0) {
                var_r30 = 1;
            }
            M2C_FIELD(M2C_FIELD(var_r29, void **, 8), M2C_UNK (**)(M2C_UNK *), 0x18)(var_r29);
            M2C_FIELD(var_r29, s8 *, 0x28) = 0;
            M2C_FIELD(var_r29, u8 *, 0x29) = (u8) M2C_FIELD(var_r29, u8 *, 0x2A);
            M2C_FIELD(var_r29, s16 *, 0x2E) = var_r30;
            M2C_FIELD(var_r29, s16 *, 0x2C) = 0;
        }
        var_r28 += 1;
        var_r29 += 0x30;
    } while (var_r28 < 4);
}

void fn_8014876C(void *arg0, s8 arg1, s16 arg2) {
    extern f32 lbl_8036A7A0;
    extern f64 lbl_8036A788;
    s16 var_r6;

    var_r6 = (s16) ((f32) arg2 / lbl_8036A7A0);
    if (var_r6 <= 0) {
        var_r6 = 1;
    }
    M2C_FIELD(arg0, u8 *, 0x28) = (u8) M2C_FIELD(arg0, u8 *, 0x16);
    M2C_FIELD(arg0, s8 *, 0x29) = arg1;
    M2C_FIELD(arg0, s16 *, 0x2E) = var_r6;
    M2C_FIELD(arg0, s16 *, 0x2C) = 0;
}

extern f32 lbl_8036A788;
void fn_801487D0(void *arg0, s16 arg1) {
    extern f32 lbl_8036A7A0;
    s16 var_r31;
    void *temp_r4;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 (**)(), 0x6c)() != 0) {
        var_r31 = (s16) ((f32) arg1 / lbl_8036A7A0);
        if (var_r31 <= 0) {
            var_r31 = 1;
        }
        temp_r4 = M2C_FIELD(arg0, void **, 8); 
        M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x18), M2C_UNK (**)(void *), 0) (arg0);
        M2C_FIELD(arg0, s8 *, 0x28) = 0;
        M2C_FIELD(arg0, u8 *, 0x29) = (u8) M2C_FIELD(arg0, u8 *, 0x2A);
        M2C_FIELD(arg0, s16 *, 0x2E) = var_r31;
        M2C_FIELD(arg0, s16 *, 0x2C) = 0;
    }
}

void fn_80148888(void *arg0, s16 arg1) {
    extern f32 lbl_8036A7A0;
    s16 var_r4;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 (**)(), 0x6C)() == 0) {
        if (arg1 <= 0) {
            if (!(M2C_FIELD(arg0, u8 *, 0xC) & 4)) {
                M2C_FIELD(arg0, u8 *, 0x2A) = (u8) M2C_FIELD(arg0, u8 *, 0x16);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *), 0x14)(arg0);
            return;
        }
        if (!(M2C_FIELD(arg0, u8 *, 0xC) & 4)) {
            register var_r4 = (s16) ((f32) arg1 / lbl_8036A7A0);
            if (var_r4 <= 0) {
                var_r4 = 1;
            }
            M2C_FIELD(arg0, u8 *, 0x2A) = (u8) M2C_FIELD(arg0, u8 *, 0x16);
            M2C_FIELD(arg0, u8 *, 0x28) = (u8) M2C_FIELD(arg0, u8 *, 0x16);
            M2C_FIELD(arg0, s8 *, 0x29) = 0;
            M2C_FIELD(arg0, s16 *, 0x2E) = var_r4;
            M2C_FIELD(arg0, s16 *, 0x2C) = 0;
            M2C_FIELD(arg0, u8 *, 0xC) = (u8) (M2C_FIELD(arg0, u8 *, 0xC) | 4);
        }
    }
}

void fn_80148980(void *arg0, s16 arg1) {
    extern f32 lbl_8036A7A0;
    s16 var_r5;

    if (arg1 <= 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(), 0x10)();
        return;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0xC) & 8)) {
        register var_r5 = (s16) ((f32) arg1 / lbl_8036A7A0);
        if (0 >= var_r5) {
            var_r5 = 1;
        }
        M2C_FIELD(arg0, u8 *, 0x28) = (u8) M2C_FIELD(arg0, u8 *, 0x16);
        M2C_FIELD(arg0, s8 *, 0x29) = 0;
        M2C_FIELD(arg0, s16 *, 0x2E) = var_r5;
        M2C_FIELD(arg0, s16 *, 0x2C) = 0;
        M2C_FIELD(arg0, u8 *, 0xC) = (u8) (M2C_FIELD(arg0, u8 *, 0xC) | 8);
    }
}

s8 fn_80149734(void) {
    s32 fn_800AF704(s8);
    s8 var_r31;

    var_r31 = 0;
loop_1:
    if (fn_800AF704(var_r31) == 0U) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 3) {
        return -1;
    }
    goto loop_1;
}

s32 fn_80149974(void *arg0) {
    u8 temp = *(u8 *)((u8 *)arg0 + 4);
    return (fn_800AF704((s8)temp) >> 1U) & 1;
}

s8 fn_801499A0(void) {
    u8 fn_800B2494(s8);

    s8 var_r31 = 0;
loop_1:
    if (fn_800B2494(var_r31) == 0) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 8) {
        return -1;
    }
    goto loop_1;
}

void fn_80149A18(void *arg0, s32 arg1) {
    M2C_UNK fn_800B24D8(s8, s32);
    M2C_UNK fn_800B26B0(s8, s32);
    u8 temp_r3;

    M2C_FIELD(arg0, u8 *, 4) = M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 (**)(), 0x1C)();
    temp_r3 = M2C_FIELD(arg0, u8 *, 4);
    if ((s8) temp_r3 >= 0) {
        fn_800B24D8((s8) temp_r3, arg1);
        fn_800B26B0((s8) M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 (**)(void *), 0x64)(arg0));
    }
}

s32 fn_80149B3C(void) {
    return 0;
}

void fn_80149B44(void *arg0) {
    M2C_UNK fn_800B1C54(s8);
    u8 temp_r3;

    temp_r3 = *(u8 *)((char *)arg0 + 4);
    if ((s8) temp_r3 >= 0) {
        fn_800B1C54((s8) temp_r3);
    }
}

s32 fn_80149D4C(void *arg0) {
    s32 fn_800B1B24(s8);
    s8 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s8 *, 4);
    if (temp_r3 < 0) {
        return 0;
    }
    return fn_800B1B24(temp_r3);
}

void fn_80149D84(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(), 0xC)();
}

void fn_80149DB0(void) {

}

void fn_80149DB4(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(u8), 0x28)(M2C_FIELD(arg0, u8 *, 0xD));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *, u8), 0x20)(arg0, M2C_FIELD(arg0, u8 *, 0xE));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *, u8), 0x24)(arg0, M2C_FIELD(arg0, u8 *, 0xF));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *, u8), 0x3C)(arg0, M2C_FIELD(arg0, u8 *, 0x10));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(void *, s16), 0x38)(arg0, M2C_FIELD(arg0, s16 *, 0x12));
}

void fn_80149E50(void) {

}

void fn_80149E54(void) {

}

void fn_80149E58(void) {

}

void fn_80149E5C(void) {

}

void fn_80149E60(void) {

}

void fn_80149E64(void) {

}

void fn_80149E68(void) {

}

s32 fn_80149E6C(void) {
    return 0;
}

void fn_80149E74(void) {

}

u8 fn_80149E78(void **arg0) {
    return M2C_FIELD(*arg0, u8 *, 6);
}

u16 fn_80149E84(void **arg0) {
    void *temp_r3;
    
    temp_r3 = *arg0;
    if (M2C_FIELD(temp_r3, u8 *, 5) & 4) {
        return 0x3E8; 
    }
    
    return M2C_FIELD(temp_r3, u16 *, 0x12) & 0xFFFF;
}

u8 fn_80149EA8(void **arg0) {
    void *temp_r3;
    
    temp_r3 = *arg0;
    if (M2C_FIELD(temp_r3, u8 *, 5) & 4) {
        return 0;
    }
    return M2C_FIELD(temp_r3, u8 *, 0xC);
}

void fn_80149ECC(void) {

}

void fn_80149ED0(void) {

}

void fn_80149ED4(void) {

}

void fn_80149ED8(void) {

}

void fn_80149EDC(void) {

}

u8 fn_80149EE0(void **arg0) {
    return M2C_FIELD(*arg0, u8 *, 7);
}

u8 fn_80149EEC(void **arg0) {
    void *temp_r3;
    
    temp_r3 = *arg0;
    if ((M2C_FIELD(temp_r3, u8 *, 5)) & 4) {
        return 0;
    } else {
        return M2C_FIELD(temp_r3, u8 *, 0xF);
    }
}

s32 fn_80149F10(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

s32 fn_80149F1C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

void fn_80149F28(void) {

}

void fn_80149F2C(void) {

}

s32 fn_80149F30(void) {
    return -1;
}
#include "common.h"
#include "global.h"

typedef struct {
    void *unk0;
    s32 unk4;
} Struct801405E0;

typedef struct {
    Struct801405E0 *unk0;
    s32 unk4;
} Struct801405E0_2;

typedef struct {
    Struct801405E0_2 *unk38;
    s32 unk34;
    s32 unk3C;
} Struct8013FC68_Args;
extern u32 lbl_80291A74;
extern u32 lbl_80291B70;
extern u32 lbl_80295478;
extern u8 lbl_803301A8[];
extern u8 lbl_8032FF08[];
#include "common.h"
extern u32 lbl_802922F0;
#include "include/structs.h"
extern s32 gUnknown_0x8013C030;
void fn_80139D60_C(void *arg0, void *arg1);
