/* Functions from 0x801AE3F8 to 0x801B3220, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
extern u16 lbl_802917D0;
extern struct unk_struct lbl_80331C6C;

void *fn_801AE3F8(u32 arg0) {
    void *fn_8000CAA0(void *, u32, void *);
    void *fn_8000CAF0(void *, u32, void *);
    void fn_801403F0(void *);
    extern u8 lbl_802975D0[];
    extern u8 lbl_80297890[];

    void *var_r31;

    if (arg0 != 0U) {
        var_r31 = fn_8000CAA0(lbl_802975D0, arg0, lbl_802975D0);
    } else {
        var_r31 = fn_8000CAF0(lbl_802975D0, arg0, lbl_802975D0);
    }
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(s32 *)((u8 *)var_r31 + 0x40) = 0;
        *(s32 *)((u8 *)var_r31 + 0x44) = 0;
        *(s32 *)((u8 *)var_r31 + 0x48) = 0;
        *(s32 *)((u8 *)var_r31 + 0x4C) = 0;
        *(s32 *)((u8 *)var_r31 + 0x50) = 0;
        *(s32 *)((u8 *)var_r31 + 0x54) = 0;
        *(s32 *)((u8 *)var_r31 + 0x58) = 0;
        *(s32 *)((u8 *)var_r31 + 0x60) = 0;
        *(s32 *)((u8 *)var_r31 + 0x64) = 0;
        *(u8 **)((u8 *)var_r31 + 0x6C) = lbl_80297890;
    }
    return var_r31;
}

void fn_801AE498(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_801AE73C(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_8027BD18;
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    s32 temp_r4;
    u8 var_r3;

    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 4);
        if (temp_r4 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4) & 0x300) {
            fn_801475FC(&lbl_8027BD18 + 0x36E, 0x64);
            fn_8000C188(arg0);
        }
    }
}

void fn_801AE7C0(void *arg0) {
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x50));
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x88);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801AE81C(void *arg0) {
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x58));
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x88);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801AE878(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    s32 fn_8013AC54(s32);
    M2C_UNK fn_8013AD70(s32, s32);
    void **fn_8013FF94(M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_80330708;
    s32 temp_r31;
    void **temp_r30;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x54);
    temp_r30 = fn_8013FF94(0xA, 0);
    fn_8013AD70(temp_r31, M2C_FIELD(&lbl_80330708, s32 *, 0xB0));
    M2C_FIELD(*temp_r30, M2C_UNK (**)(void **, s32), 0x34)(temp_r30, fn_8013AC54(temp_r31));
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x68));
}

void fn_801AE908(void *arg0) {
    s32 fn_8013AC54(s32);
    M2C_UNK fn_8013AD70(s32, s32);
    void **fn_8013FF94(M2C_UNK, M2C_UNK);
    extern u16 lbl_80330708[700]; // 1400 bytes / 2 = 700 u16 elements
    
    s32 temp_r31;
    void **temp_r30;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x54);
    temp_r30 = fn_8013FF94(0xA, 0);

    fn_8013AD70(temp_r31, M2C_FIELD(&lbl_80330708, s32 *, 0xAC));
    temp_r31 = fn_8013AC54(temp_r31);
    M2C_FIELD(*temp_r30, M2C_UNK (**)(void **, s32), 0x34)(temp_r30, temp_r31);
}

void fn_801AE980(void *arg0) {
    int val = *(u8*)((char*)arg0 + 0x68);
    fn_8000C070(val);
}

void fn_801AE9A4(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    M2C_UNK fn_8011D79C(s32);
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(M2C_UNK, M2C_UNK);
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_8027BD18;
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    s32 temp_r4;
    u8 var_r3;

    fn_8013FF00(arg0, fn_8013FF94(-0x1000, 0));
    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 4);
        if (temp_r4 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4) & 0x300) {
            fn_8013FF00(arg0, M2C_FIELD(arg0, s32 *, 0x54));
            fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x68));
            fn_801475FC(&lbl_8027BD18 + 0x36E, 0x64);
            fn_8000C188(arg0);
        }
    }
}

void fn_801AECF8(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(M2C_UNK, M2C_UNK);
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_8027BD18;
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    s32 temp_r5;
    u8 var_r3;

    fn_8013FF00(arg0, fn_8013FF94(-0x1000, 0));
    var_r3 = 0;
    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if ((var_r3 == 0) && (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x300)) {
        fn_8013FF00(arg0, M2C_FIELD(arg0, s32 *, 0x48));
        fn_801475FC(&lbl_8027BD18 + 0x36E, 0x64);
        fn_8000C188(arg0);
    }
}

void fn_801AEE58(void) {
    // Very basic implementation to get some match at least
    // This function seems to set up actions or initialize unit state
    
    // Simple empty function that might match the prologue/epilogue 
    return;
}

void fn_801AF020(void *arg0) {
    extern u8 lbl_802EF4C8[24];
    extern u8 lbl_80330708[1400];
    extern u8 lbl_803200AC[1600];

    void *temp_r31;
    s32 temp_r31_2;
    s32 temp_r31_3;
    void *temp_r6;

    temp_r31 = *(void **)((u8 *)arg0 + 0x64);
    switch (*(u8 *)((u8 *)&lbl_802EF4C8 + 0x8)) { /* irregular */
    case 0x81:
        temp_r31_2 = *(s32 *)((u8 *)arg0 + 0x48) + 0x60;
        if (*(s16 *)(((u8 *)*(void **)((u8 *)arg0 + 0x54)) + 0x4E) != 0x7FFF) {
            fn_8013AC54();
            fn_80094ABC(temp_r31_2);
        } else if (fn_8014D8DC(&lbl_80330708) != 0) {
            fn_800C3C1C(&lbl_803200AC, temp_r31_2);
        }
        *(u8 *)((u8 *)&lbl_80330708 + 0x51) = 1;
        return;
    case 0x80:
        {
            s16 sp8 = *(s16 *)(((u8 *)temp_r31) + 0xA);
            s16 spA = 0x108;
            fn_801402A0(temp_r31, &sp8, 0);
            *(s32 *)(((u8 *)temp_r31) + 0x3C) = 1;
            fn_8011D79C(*(s32 *)(((u8 *)*(void **)((u8 *)arg0 + 0x6C)) + 0x2C));
            fn_801AFD60(arg0);
            temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
            temp_r31_3 = *(s32 *)(((u8 *)temp_r6) + 0x70);
            if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
                fn_801658DC(temp_r31_3);
            }
            fn_8000C070(arg0, 0x18);
        }
        return;
    default:
        return;
    }
}

void fn_801AF148(void *arg0) {
    s32 *fn_8013FF94(void *, s32, s32, void *);
    void *fn_8013BC10(s32, s32);
    void fn_80024398(void *, s32, s32);
    void fn_801658DC(s32);

    void *temp_r3;
    void *temp_r6;
    s32 temp_r31;

    temp_r3 = fn_8013BC10(0, 0);
    *(u16*)((u8*)temp_r3 + 0x8) = 0x178;
    *(u16*)((u8*)temp_r3 + 0xA) = 0x3C;
    *(u8*)((u8*)temp_r3 + 0x24) = 1;
    fn_80024398(arg0, 0, 0x3C);
    temp_r6 = *(void**)((u8*)arg0 + 0x6C);
    temp_r31 = *(s32*)((u8*)temp_r6 + 0x8C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0) {
        fn_801658DC(temp_r31);
    }
}

void fn_801AF1C8(void *arg0) {
    s16 sp12;
    s16 sp10;
    s16 spE;
    s16 spC;
    s16 spA;
    s16 sp8;
    s16 temp_r5;
    s16 temp_r7;
    s16 temp_r7_2;
    void *temp_r28;
    void *temp_r29;
    void *temp_r31;

    temp_r29 = M2C_FIELD(arg0, void **, 0x54);
    temp_r31 = M2C_FIELD(arg0, void **, 0x64);
    temp_r28 = (void *)fn_8013FF94(4, 0);
    
    temp_r7 = M2C_FIELD(temp_r29, s16 *, 0xC);
    sp10 = 0x260;
    sp12 = temp_r7;
    fn_80140258(arg0, temp_r29, &sp10, 0, temp_r7);
    
    spC = 0x138;
    spE = 0x74;
    fn_8014027C(arg0, temp_r28, &spC, 0);
    
    temp_r5 = M2C_FIELD(temp_r28, s16 *, 0xA) + 0x108;
    M2C_FIELD(temp_r28, s16 *, 0xE) = temp_r5;
    M2C_FIELD(temp_r28, s16 *, 0x4A) = 0x14;
    M2C_FIELD(temp_r28, s16 *, 0x4C) = 0;
    M2C_FIELD(M2C_FIELD(temp_r28, void **, 0), M2C_UNK (**)(void *, M2C_UNK, s16), 0x28)(temp_r28, 0x14, temp_r5);
    M2C_FIELD(temp_r28, s8 *, 0x48) = 1;
    M2C_FIELD(temp_r28, s8 *, 0x44) = 2;
    
    temp_r7_2 = M2C_FIELD(temp_r31, s16 *, 0xA);
    sp8 = temp_r7_2;
    spA = 0xA7;
    fn_801402A0(arg0, temp_r31, &sp8, 0, temp_r7_2);
    
    M2C_FIELD(temp_r31, s32 *, 0x3C) = 0;
    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x34));
}

int fn_801B04F8(int arg0, int arg1) {
    int v0;
    int *v1;
    int v2;
    
    v1 = (int *)arg0;
    v0 = v1[0x5];
    v2 = v0 & 0xFFFF;
    
    if (arg1 < 0) {
        return 0;
    }
    
    if (v2 == 0) {
        return 0;
    }
    
    if (v2 != arg1) {
        return 0;
    }
    
    return 1;
}

void fn_801B0F60(void *arg0) {
    M2C_UNK fn_80024398(void *, M2C_UNK, M2C_UNK);
    void *fn_8013BC10(M2C_UNK, M2C_UNK);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r3;
    void *temp_r6;

    temp_r3 = fn_8013BC10(0, 0);
    M2C_FIELD(temp_r3, s16 *, 8) = 0x198;
    M2C_FIELD(temp_r3, s16 *, 0xA) = 0x3C;
    M2C_FIELD(temp_r3, s8 *, 0x24) = 1;
    fn_80024398(arg0, 0, 0x3C);
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x8C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

extern s32 lbl_80273DF8[];
extern u16* lbl_80296128;
void fn_801B1218(void* arg0, void* arg1) {
    if (arg0 != NULL && arg1 != NULL) {
        s32 r3 = M2C_FIELD(arg0, s32*, 0x48);
        s32 r4 = M2C_FIELD(arg1, s32*, 0x10);
        if (r4 > 0) {
            fn_80036B20((char*)arg0 + 0x9C, (char*)arg1 + 0x34, r4, r3, 1);
        }
        
        fn_8003F5F8(arg0, arg1);
    }
}

void fn_801B1480(void *arg0) {
    M2C_UNK fn_8000D8BC(M2C_UNK, s32, void *);
    M2C_UNK fn_8011D79C(s32);
    void *fn_8013FF94(M2C_UNK, M2C_UNK);
    void *temp_r5;

    temp_r5 = fn_8013FF94(2, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s8 *, 0x3C) = 0;
    fn_8000D8BC(0, M2C_FIELD(temp_r5, s32 *, 0x3C), temp_r5);
    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x18));
}

void fn_801B1B7C(void *arg0) {
    void *fn_800C42D8(M2C_UNK);
    M2C_UNK fn_80133FBC(void *, M2C_UNK *, M2C_UNK);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801400F4(void *, void *);
    M2C_UNK fn_80140234(void *, void *, M2C_UNK);
    M2C_UNK fn_801658DC(s32);
    void *fn_801B3150(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_80368230;
    s32 temp_r31;
    void *temp_r4;
    void *temp_r6;
    void *var_r0;

    var_r0 = fn_800C42D8(0x68);
    if (var_r0 != NULL) {
        var_r0 = fn_801B3150(0x138, 0xA8, 0x108, 0x78, 0x190);
    }
    M2C_FIELD((short)arg0, void **, 0x48) = var_r0;
    temp_r4 = M2C_FIELD(arg0, void **, 0x48);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 4) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) + 1);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s16 *, 8) = 6;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s8 *, 0x3C) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s16 *, 0x24) = 8;
    fn_80133FBC(M2C_FIELD(arg0, void **, 0x48), &lbl_80368230, 0);
    fn_801400F4(arg0, M2C_FIELD(arg0, void **, 0x48));
    fn_80140234(arg0, M2C_FIELD(arg0, void **, 0x48), 0);
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x74);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801B1C60(void) {

}

void fn_801B2644(void *arg0) {
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0xC));
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x6C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801B26A0(void *arg0) {
    void *fn_800C42D8(M2C_UNK, s16, s16);
    void *fn_801343F8(s16, s16, s16, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80134CE8(void *, M2C_UNK);
    M2C_UNK fn_801400F4(void *, void *, M2C_UNK);
    M2C_UNK fn_801402E4(void *, void *, M2C_UNK, M2C_UNK);
    s16 temp_r4;
    s16 temp_r5;
    void *temp_r30;
    void *var_r0;

    temp_r30 = M2C_FIELD(arg0, void **, 0x40);
    temp_r4 = M2C_FIELD(temp_r30, s16 *, 0xC);
    temp_r5 = M2C_FIELD(temp_r30, s16 *, 0xA) - 0x20;
    var_r0 = fn_800C42D8(0x54, temp_r4, temp_r5);
    if (var_r0 != NULL) {
        var_r0 = fn_801343F8(M2C_FIELD(temp_r30, s16 *, 0x3E), temp_r5, (s16) (temp_r4 + 0x20), 0x108, 0xD0, 0x1F4);
    }
    M2C_FIELD(arg0, void **, 0x44) = var_r0;
    temp_r30 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r30 != NULL) {
        M2C_FIELD(temp_r30, s32 *, 4) = (s32) (M2C_FIELD(temp_r30, s32 *, 4) + 1);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s16 *, 8) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s16 *, 0x46) = 0x30;
    fn_80134CE8(M2C_FIELD(arg0, void **, 0x44), 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s16 *, 0x24) = 4;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s8 *, 0x3C) = 0;
    fn_801400F4(arg0, M2C_FIELD(arg0, void **, 0x44), 4);
    fn_801402E4(arg0, M2C_FIELD(arg0, void **, 0x44), 0, 1);
}

void fn_801B27A0(void *arg0) {
    extern f32 lbl_8036B0B8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x30) = (f32) lbl_8036B0B8;
}

void *fn_801B2A80(u32 arg0) {
    void *fn_8000CAA0(void *, u32, void *);
    void *fn_8000CAF0(void *, u32, void *);
    void fn_801403F0(void *);
    extern u8 lbl_802975D0[];
    extern u8 lbl_80297890[];
    
    void *var_r31;
    
    if (arg0 != 0U) {
        var_r31 = fn_8000CAA0(lbl_802975D0, arg0, lbl_802975D0);
    } else {
        var_r31 = fn_8000CAF0(lbl_802975D0, arg0, lbl_802975D0);
    }
    
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(s32 *)((u8 *)var_r31 + 0x40) = 0;
        *(s32 *)((u8 *)var_r31 + 0x44) = 0;
        *(s32 *)((u8 *)var_r31 + 0x48) = 0;
        *(s32 *)((u8 *)var_r31 + 0x4C) = 0;
        *(s32 *)((u8 *)var_r31 + 0x50) = 0;
        *(s32 *)((u8 *)var_r31 + 0x54) = 0;
        *(s32 *)((u8 *)var_r31 + 0x58) = 0;
        *(s32 *)((u8 *)var_r31 + 0x60) = 0;
        *(s32 *)((u8 *)var_r31 + 0x64) = 0;
        *(u8 **)((u8 *)var_r31 + 0x6C) = lbl_80297890;
    }
    return var_r31;
}

void fn_801B2DA8(void *arg0) {
    extern u16 lbl_802EF4C8;
    s32 temp_r31;
    void *temp_r6;

    switch ((s32) M2C_FIELD(&lbl_802EF4C8, u8 *, 8)) { /* irregular */
    case 0x80:
        fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x58));
        temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
        temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x88);
        if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
            fn_801658DC(temp_r31);
        }
        fn_8000C070(arg0, 0x25);
        /* fallthrough */
    case 0x81:
        return;
    }
}

void fn_801B2EBC(void *arg0) {
    void *fn_800C42D8(M2C_UNK);
    M2C_UNK fn_8011D908(s32, void *);
    M2C_UNK fn_80134CE8(void *, M2C_UNK);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801400F4(void *, void *, M2C_UNK);
    M2C_UNK fn_801658DC(s32);
    void *fn_801B31E4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 temp_r31;
    void *temp_r4;
    void *temp_r6;
    void *var_r0;

    var_r0 = fn_800C42D8(0x4C);
    if (var_r0 != NULL) {
        var_r0 = fn_801B31E4(0x138, 0x6C, 0x108, 0xD0, 0x226);
    }
    M2C_FIELD(arg0, void **, 0x40) = var_r0;
    temp_r4 = M2C_FIELD(arg0, void **, 0x40);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 4) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) + 1);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s16 *, 8) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s16 *, 0x46) = 0x38;
    fn_80134CE8(M2C_FIELD(arg0, void **, 0x40), 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s16 *, 0x24) = 8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s8 *, 0x3C) = 0;
    fn_801400F4(arg0, M2C_FIELD(arg0, void **, 0x40), 8);
    fn_8011D908(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 4), arg0);
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x80);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void **fn_801B31E4(void **arg0) {
    fn_80134E48();
    *arg0 = (void**)&lbl_802917D0;
    return arg0;
}
extern s32 lbl_80367110;
extern s32 *lbl_80367240;
extern u8 lbl_8027BD18[];
#include "global.h"
#include "unit.h"

extern struct Unit *lbl_802EF4C8;
