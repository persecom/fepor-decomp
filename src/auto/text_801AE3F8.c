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

void fn_801B27A0(void *arg0) {
    extern f32 lbl_8036B0B8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x30) = (f32) lbl_8036B0B8;
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

void **fn_801B31E4(void **arg0) {
    fn_80134E48();
    *arg0 = (void**)&lbl_802917D0;
    return arg0;
}
extern s32 lbl_80367110;
extern void *lbl_80367240;
extern u8 lbl_8027BD18[];
