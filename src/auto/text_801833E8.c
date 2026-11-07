/* Functions from 0x801833E8 to 0x801A2AB4, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_8036728B;
extern u16 lbl_80295C60[];
extern f32 lbl_8036AF74;
extern f64 lbl_8036AF78;

#pragma cplusplus on
extern "C" void fn_8017A000(void *);
extern "C" void fn_80193950(void *);
extern "C" u8 lbl_8029656C[];
extern "C" u16 lbl_80291AC8[];
#pragma cplusplus reset

f32 fn_801833E8(void) {
    extern f32 lbl_8036ACC0;
    return lbl_8036ACC0;
}

s32 fn_801833F0(void) {
    return 0x1B0;
}

s32 fn_801833F8(void) {
    return 0x90;
}

void fn_80183584(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x129]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x12F]);
}

void fn_801835D0(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x135]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x13B]);
}

s32 fn_8018361C(void) {
    return 4;
}

s32 fn_801836D4(void **arg0) {
    M2C_UNK fn_80091A1C();
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 0x14) = M2C_FIELD(*arg0, s8 (**)(), 0x54)();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, M2C_UNK *), 0xC)(arg0, &lbl_802EF4C8);
    fn_80091A1C();
    return 6;
}

void fn_80183734(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x155]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x15B]);
}

void fn_80183780(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x161]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x167]);
}

s32 fn_801837CC(void) {
    return 3;
}

void fn_801837D4(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x16D]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x173]);
}

void fn_80183820(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x179]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x17F]);
}

s32 fn_8018386C(void) {
    return 0;
}

void fn_80183874(void) {
    extern u16 lbl_80278BB8[];
    fn_8000E0E4(&lbl_80278BB8[0x184 / sizeof(u16)]);
}

void fn_801838A0(void) {
    extern u8 lbl_80278BB8[];
    fn_8000E0E4(&lbl_80278BB8[0x18B]);
}

s32 fn_801838CC(void) {
    return 1;
}

s32 fn_801838D4(void) {
    extern u8 lbl_803681F0;
    s32 val = lbl_803681F0;
    if (val < 0x33) {
        return 0;
    }
    return 3;
}

void fn_801838F4(void) {
    extern u8 lbl_80278BB8[];
    fn_8000E0E4(&lbl_80278BB8[0x191]);
}

void fn_80183920(void) {
    extern u8 lbl_80278BB8[];
    fn_8000E0E4(&lbl_80278BB8[0x197]);
}

s32 fn_8018394C(void) {
    return 2;
}

s32 fn_80183954(void) {
    extern u8 lbl_803681F0;
    return 3 & ~((s32) ~((lbl_803681F0 - 0x32) | (0x32 - lbl_803681F0)) >> 0x1F);
}

extern u16 lbl_80295A78[10];
s32 fn_80183A5C(void) {
    return fn_8000C0C0(&lbl_80295A78) != 0;
}

void *fn_80183B5C(void *arg0) {
    void *fn_8000CA64(u8 *, u8 *);
    u8 fn_800AA188();
    extern u8 lbl_80295D8C[];
    
    void *temp_r3;
    temp_r3 = fn_8000CA64(lbl_80295D8C, lbl_80295D8C);
    *(void**)((char*)temp_r3 + 0x30) = arg0;
    *(u8*)((char*)temp_r3 + 0x3D) = 0;
    *(u8*)((char*)temp_r3 + 0x3C) = 1;
    *(u8*)((char*)temp_r3 + 0x3E) = 0;
    if (*(s32*)((char*)arg0 + 0x1A0) & 0x010000DC) {
        *(u8*)((char*)temp_r3 + 0x3C) = 0;
    }
    if (fn_800AA188() == 0) {
        *(u8*)((char*)temp_r3 + 0x3C) = 0;
    }
    return temp_r3;
}

void *fn_80183BE4(void *arg0) {
    void *fn_8000CA64(void *, void *);
    u8 fn_800AA188();
    extern u16 lbl_80295D8C[];
    
    void *temp_r3;
    s32 temp_r4;

    temp_r3 = fn_8000CA64(&lbl_80295D8C, &lbl_80295D8C);
    M2C_FIELD(temp_r3, void **, 0x30) = arg0;
    M2C_FIELD(temp_r3, s8 *, 0x3D) = 0;
    M2C_FIELD(temp_r3, s8 *, 0x3C) = 1;
    M2C_FIELD(temp_r3, s8 *, 0x3E) = 1;
    if (M2C_FIELD(arg0, s32 *, 0x1A0) & 0x010000DC) {
        M2C_FIELD(temp_r3, s8 *, 0x3C) = 0;
    }
    if (fn_800AA188() == 0) {
        M2C_FIELD(temp_r3, s8 *, 0x3C) = 0;
    }
    return temp_r3;
}

void fn_80183DEC(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CA64(void *, s32, void *);
    extern u16 lbl_80295CAC[28]; // 56 bytes = 28 * 2-byte words

    void *temp_r3;

    // Use explicit register assignments to match the original
    temp_r3 = fn_8000CA64(&lbl_80295CAC, arg2, &lbl_80295CAC);
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, s32 *, 0x34) = arg1;
}

void fn_80183E3C(s32 arg0, s32 arg1, s32 arg2, s8 arg3, s8 arg4, s32 arg5) {
    void *fn_8000CA64(void *, s32, void *);
    
    void *temp_r3;
    
    temp_r3 = fn_8000CA64(lbl_80295C60, arg5, lbl_80295C60);
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, s32 *, 0x34) = 0;
    M2C_FIELD(temp_r3, s8 *, 0x3A) = arg3;
    M2C_FIELD(temp_r3, s8 *, 0x3B) = arg4;
    M2C_FIELD(temp_r3, s32 *, 0x40) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x44) = arg2;
    M2C_FIELD(temp_r3, s8 *, 0x48) = 0;
    M2C_FIELD(temp_r3, s8 *, 0x49) = 0;
}

void fn_80183EAC(s32 arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4) {
    void *fn_8000CA64(void *, u32, void *);
    extern u16 lbl_80295C60[];
    
    void *temp_r3;

    temp_r3 = fn_8000CA64(&lbl_80295C60, arg4, &lbl_80295C60);
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, s32 *, 0x34) = arg1;
    M2C_FIELD(temp_r3, s8 *, 0x3A) = arg2;
    M2C_FIELD(temp_r3, s8 *, 0x3B) = arg3;
    M2C_FIELD(temp_r3, s32 *, 0x40) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x44) = 0;
    M2C_FIELD(temp_r3, s8 *, 0x48) = 0;
    M2C_FIELD(temp_r3, s8 *, 0x49) = 0;
}

void fn_80184578(s32 arg0, void *arg1, u32 arg2) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CAF0(void *, u32);
    extern u16 lbl_80295B64[];
    extern u16 fn_80185078;
    
    s32 sp38;
    u16 sp8[0x34];
    u32 var_r31;
    void *temp_r3;

    var_r31 = arg2;
    sp38 = arg0;
    fn_8000A388(&lbl_80295B64, &fn_80185078, &sp8);
    if (var_r31 == 0U) {
        var_r31 = 3U;
    }
    temp_r3 = fn_8000CAF0(&lbl_80295B64, var_r31);
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, u8 *, 0x34) = M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(temp_r3, u8 *, 0x35) = M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(temp_r3, u8 *, 0x36) = M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(temp_r3, u8 *, 0x37) = M2C_FIELD(arg1, u8 *, 3);
}

void fn_80184618(s32 arg0, u32 arg1) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CAF0(void *, u32);
    extern u16 lbl_80295A40[];
    extern u16 fn_80185078;
    
    s32 sp38;
    u16 sp8;
    u32 var_r31;

    var_r31 = arg1;
    sp38 = arg0;
    fn_8000A388(&lbl_80295A40, &fn_80185078, &sp8);
    if (var_r31 == 0U) {
        var_r31 = 3U;
    }
    M2C_FIELD(fn_8000CAF0(&lbl_80295A40, var_r31), s32 *, 0x30) = arg0;
}

void fn_80184BE8(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CAF0(void *, u32);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295A20[];
    u8 sp8[0x34];
    u32 var_r31;
    void *temp_r3;

    var_r31 = arg3;
    M2C_FIELD(sp8, void **, 0x30) = (void *)arg0;
    fn_8000A388(lbl_80295A20, fn_80185078, sp8);
    if (var_r31 == 0U) {
        var_r31 = 3U;
    }
    temp_r3 = fn_8000CAF0(lbl_80295A20, var_r31);
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, s32 *, 0x38) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x3C) = arg2;
}

void fn_80185060(void *arg0, void *arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == (u32) M2C_FIELD(arg1, u32 *, 0x30)) {
        M2C_FIELD(arg1, void **, 0x34) = arg0;
    }
}

void fn_80185078(void *arg0, void *arg1) {
    M2C_UNK fn_8000C60C(void *);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == (u32) M2C_FIELD(arg1, u32 *, 0x30)) {
        fn_8000C60C(arg0);
    }
}

void fn_801850A8(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, void *);
    s32 fn_80052B30(s32);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295AE8[];
    u8 spC[0x34];
    u32 sp8;
    void *temp_r30;
    void *temp_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(spC, void **, 0x30) = temp_r30;
    fn_8000A388(lbl_80295AE8, fn_80185078, spC);
    temp_r3 = fn_8000CA64(lbl_80295AE8, arg0);
    M2C_FIELD(temp_r3, void **, 0x30) = temp_r30;
    M2C_FIELD(temp_r3, s32 *, 0x3C) = 0x10;
    sp8 = fn_80052B30(0xC);
    M2C_FIELD(temp_r3, u8 *, 0x38) = ((u8 *)&sp8)[0];
    M2C_FIELD(temp_r3, u8 *, 0x39) = ((u8 *)&sp8)[1];
    M2C_FIELD(temp_r3, u8 *, 0x3A) = ((u8 *)&sp8)[2];
    M2C_FIELD(temp_r3, u8 *, 0x3B) = ((u8 *)&sp8)[3];
    M2C_FIELD(temp_r3, u8 *, 0x34) = ((u8 *)temp_r30)[0x24];
    M2C_FIELD(temp_r3, u8 *, 0x35) = ((u8 *)temp_r30)[0x25];
    M2C_FIELD(temp_r3, u8 *, 0x36) = ((u8 *)temp_r30)[0x26];
    M2C_FIELD(temp_r3, u8 *, 0x37) = ((u8 *)temp_r30)[0x27];
}

void fn_80185244(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x34) > (s32) M2C_FIELD(arg0, s32 *, 0x3C)) {
        fn_8000C188();
    }
}

void fn_8018548C(void *arg0) {
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 0xB);
}

void fn_801854B4(void *arg0) {
    M2C_UNK fn_8004B1B4(s32);
    fn_8004B1B4(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_801854D8(void *arg0) {
    M2C_UNK fn_8004E9D8(void *, M2C_UNK);
    M2C_UNK fn_80050C90(void *);
    M2C_UNK fn_80050BCC(void *, M2C_UNK);
    extern f32 lbl_8036ACF8;
    void *obj;

    obj = M2C_FIELD(arg0, void **, 0x30);
    *(f32 *)((u8 *)obj + 0x78) = lbl_8036ACF8;
    if (M2C_FIELD(arg0, u8 *, 0x3D) == 0) {
        obj = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(obj, u8 *, 3) = (u8) (M2C_FIELD(obj, u8 *, 3) | 4);
        fn_8004E9D8(M2C_FIELD(arg0, void **, 0x30), 0);
        obj = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(obj, u8 *, 3) = (u8) (M2C_FIELD(obj, u8 *, 3) & 0xFFFFFFFB);
        fn_80050C90(M2C_FIELD(arg0, void **, 0x30));
    }
    if (M2C_FIELD(arg0, u8 *, 0x3C) != 0) {
        fn_80050BCC(M2C_FIELD(arg0, void **, 0x30), 0xFF);
    }
}

void fn_801857F0(void *arg0) {
    u8 fn_8004BF80(s32);
    if (fn_8004BF80(M2C_FIELD(arg0, s32 *, 0x30)) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_80185A64(void *arg0) {
    M2C_UNK fn_8004F5EC(void *, M2C_UNK);
    u8 fn_800504FC(void *, M2C_UNK);
    M2C_UNK fn_800558D8(void *);
    extern M2C_UNK lbl_80278E24;
    void *temp_r3;
    void *temp_r3_2;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x3C) != 0) {
        fn_800558D8(&lbl_80278E24 + 0x1C1);
        if (fn_800504FC(M2C_FIELD(arg0, void **, 0x30), 0xA) != 0) {
            fn_8004FC70(M2C_FIELD(arg0, void **, 0x30), 0xA);
        }
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r3, u8 *, 3) = (u8) (M2C_FIELD(temp_r3, u8 *, 3) | 4);
    fn_8004F5EC(M2C_FIELD(arg0, void **, 0x30), 0);
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r3_2, u8 *, 3) = (u8) (M2C_FIELD(temp_r3_2, u8 *, 3) & 0xFFFFFFFB);
}

void fn_80185AF4(void *arg0) {
    extern void *lbl_80367240;
    s32 temp_r0;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x3E) != 0) {
        temp_r0 = M2C_FIELD(lbl_80367240, s32 *, 4);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x34) == 1) {
            if (temp_r0 & 0x100) {
                M2C_FIELD(arg0, s32 *, 0x34) = 2;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x78) = (f32) M2C_FIELD(arg0, s32 *, 0x34);
            }
        } else if (!(temp_r0 & 0x100)) {
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x78) = (f32) M2C_FIELD(arg0, s32 *, 0x34);
        }
    }
}

s32 fn_80185B94(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0x5C), f32 *, 0x5C) = (f32) M2C_FIELD(M2C_FIELD(temp_r5, void **, 0x4C), s32 *, 0x34);
    return 0;
}

void fn_80186028(void *arg0) {
    M2C_UNK fn_800536B0(void *, void *, f32, f32, f32);
    s32 *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    fn_800536B0(M2C_FIELD(arg0, void **, 0x34), temp_r4, M2C_FIELD(temp_r4, f32 *, 4), M2C_FIELD(temp_r4, f32 *, 8), M2C_FIELD(temp_r4, f32 *, 0xC));
    temp_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x30), s32 **, 0x5C);
    *temp_r3 &= 0xFFFFFFBF;
}

void fn_80186318(void *arg0) {
    s32 fn_80053C30(void *, void *);
    extern M2C_UNK lbl_80278E24;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    void *temp_r5;
    void *var_r3;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    var_r3 = &lbl_80278E24 + 0x357;
    temp_f31 = M2C_FIELD(temp_r5, f32 *, 4);
    temp_f30 = M2C_FIELD(temp_r5, f32 *, 8);
    temp_f29 = M2C_FIELD(temp_r5, f32 *, 0xC);
    if (M2C_FIELD(arg0, u16 *, 0x38) & 0x20) {
        var_r3 = &lbl_80278E24 + 0x34C;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = fn_80053C30(var_r3, arg0);
    fn_800536B0(M2C_FIELD(arg0, s32 *, 0x34), temp_f31, temp_f30, temp_f29);
}

void fn_801863BC(void *arg0) {
    extern u16 lbl_80278E24[];
    void *var_r3;
    
    var_r3 = &lbl_80278E24[0x1AA];
    if (M2C_FIELD(arg0, u16 *, 0x38) & 0x20) {
        var_r3 = &lbl_80278E24[0x1A6];
    }
    fn_800558D8(var_r3);
}

void fn_8018A7E4(void *arg0) {
    extern f32 lbl_8036ACEC;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    *(f32 *)((u8 *)temp_r3 + 0x10) = lbl_8036ACEC;
    *(f32 *)((u8 *)temp_r3 + 0x14) = lbl_8036ACEC;
    *(f32 *)((u8 *)temp_r3 + 0x18) = lbl_8036ACEC;
}

void fn_8018A7FC(void *arg0) {
    extern f32 lbl_8036ACEC;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg0, f32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x4C) = lbl_8036ACEC;
    M2C_FIELD(arg0, f32 *, 0x50) = lbl_8036ACEC;
}

void fn_8018B004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}

void fn_8018B010(void *arg0) {
    void *temp_r3;

    fn_80050BCC(M2C_FIELD(arg0, void **, 0x30), 0xFF);
    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r3, f32 *, 4) = M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(temp_r3, f32 *, 8) = M2C_FIELD(arg0, f32 *, 0x44);
    M2C_FIELD(temp_r3, f32 *, 0xC) = M2C_FIELD(arg0, f32 *, 0x48);
}

void fn_8018B2C4(void *arg0) {
    M2C_UNK fn_80050BCC(s32, M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x10;
    fn_80050BCC(M2C_FIELD(arg0, s32 *, 0x30), 0);
}

void fn_8018B2FC(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r4, f32 *, 4) = M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(temp_r4, f32 *, 8) = M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(temp_r4, f32 *, 0xC) = M2C_FIELD(arg0, f32 *, 0x3C);
}

void fn_8018B31C(void *arg0) {
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF8;
    extern f32 lbl_8036AD40;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f1;

    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + lbl_8036ACF8);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x48);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x44) * temp_f3;
    
    {
        void *temp_r4 = M2C_FIELD(arg0, void **, 0x30);
        f32 temp_f2 = M2C_FIELD(temp_r4, f32 *, 0xC);
        var_f1 = temp_f2 - (temp_f4 - (temp_f1 * temp_f3));
    }
    
    if (var_f1 > M2C_FIELD(arg0, f32 *, 0x3C)) {
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f4 * M2C_FIELD(arg0, f32 *, 0x4C));
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_8036ACEC;
        var_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0xC) = var_f1;
    if (M2C_FIELD(arg0, f32 *, 0x40) < lbl_8036AD40) {
        fn_8000C188();
    }
}

void fn_8018B3AC(void *arg0) {
    extern f32 lbl_8036ACEC;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_8036ACEC;
}

void fn_8018B3DC(void *arg0) {
    M2C_UNK fn_8005F7B0(s32, u8);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30) + 0x1C;
    fn_8005F7E0(temp_r31, M2C_FIELD(arg0, u8 *, 0x38), M2C_FIELD(arg0, u8 *, 0x39), M2C_FIELD(arg0, u8 *, 0x3A));
    fn_8005F7B0(temp_r31, M2C_FIELD(arg0, u8 *, 0x3B));
}

void fn_8018B698(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

void fn_8018B6A4(void *arg0) {
    M2C_UNK fn_8005F7E0(s32, u8, u8, u8);
    fn_8005F7E0(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, M2C_FIELD(arg0, u8 *, 0x34), M2C_FIELD(arg0, u8 *, 0x35), M2C_FIELD(arg0, u8 *, 0x36));
}

void fn_8018B854(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) M2C_FIELD(temp_r5, u8 *, 0x24);
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) M2C_FIELD(temp_r5, u8 *, 0x25);
    M2C_FIELD(arg0, u8 *, 0x36) = (u8) M2C_FIELD(temp_r5, u8 *, 0x26);
    M2C_FIELD(arg0, u8 *, 0x37) = (u8) M2C_FIELD(temp_r5, u8 *, 0x27);
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}

void fn_8018B920(void *arg0) {
    extern f32 lbl_8036ACEC;
    *(s32 *)((char *)arg0 + 0x40) = 0;
    *(f32 *)((char *)arg0 + 0x44) = lbl_8036ACEC;
}

void fn_8018BA34(void *arg0) {
    extern f32 lbl_8036ACE8;
    extern f32 lbl_8036AD2C;
    extern f32 lbl_8036AD48;
    f32 temp_f2;
    f32 temp_f3;

    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 0x15C) / lbl_8036ACE8);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x44);
    if ((f32) fabs(temp_f3 - temp_f2) > lbl_8036AD2C) {
        if (temp_f3 < temp_f2) {
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f3 + lbl_8036AD48);
        } else if (temp_f3 > temp_f2) {
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) (temp_f2 + lbl_8036AD48);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
}

void fn_8018C680(void *arg0) {
    s32 fn_800A8A88(s32);
    extern u16 lbl_80278E24;
    void fn_800056CC(void *, s32, void *);
    
    void **var_r3 = (void **)M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x188);
    var_r3 = (void **)fn_800A8A88((s32)var_r3);
    
    #pragma opt_common_subs off
    fn_800056CC(&lbl_80278E24 + 0x97B, (s32)var_r3, &lbl_80278E24);
    #pragma opt_common_subs reset
}

void fn_8018C964(void *arg0) {
    u8 fn_8004BF80(s32);
    if (fn_8004BF80(M2C_FIELD(arg0, s32 *, 0x30)) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_8018C9A4(void *arg0) {
    M2C_UNK fn_8005FA14(s32, M2C_UNK);
    fn_8005FA14(M2C_FIELD(arg0, s32 *, 0x34), 1);
}

void fn_8018C9CC(void *arg0) {
    f32 fn_8005A028(M2C_UNK, f32, f32, f32, f32);
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF8;
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x78) = fn_8005A028(2, lbl_8036ACEC, lbl_8036ACF8, (f32) M2C_FIELD(arg0, s32 *, 0x3C), (f32) M2C_FIELD(arg0, s32 *, 0x40));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40) >= (s32) M2C_FIELD(arg0, s32 *, 0x3C)) {
        fn_8000C188(arg0);
    }
}

extern u8 lbl_80296044[];
void fn_8018CA68(u32 arg0) {
    void *temp_r3;
    s32 temp_r6;

    temp_r3 = (void*)fn_8000C0C0(&lbl_80296044);
    if ((temp_r3 != NULL) && (arg0 != 0U)) {
        *(u32*)((u8*)temp_r3 + 0x48) = arg0;
        temp_r6 = *(u32*)((u8*)temp_r3 + 0x44);
        *(u32*)((u8*)temp_r3 + 0x44) = temp_r6 + 1;
        fn_80050BA8(arg0, 1, 1, temp_r6);
    }
}

void fn_8018CAD8(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000C0C0(void *, void *);
    void *fn_8000CAF0(void *, s32);
    void fn_8000C070(s32);
    
    extern u8 lbl_80296044[];
    
    void *var_r31;
    s32 var_r0;

    var_r31 = fn_8000C0C0(&lbl_80296044, &lbl_80296044);
    if (var_r31 == NULL) {
        var_r31 = fn_8000CAF0(&lbl_80296044, arg2);
    } else {
        *(s32*)((char*)var_r31 + 0x34) = *(s32*)((char*)var_r31 + 0x30);
        fn_8000C070(0);
    }
    *(s32*)((char*)var_r31 + 0x38) = arg0;
    var_r0 = 1;
    if (arg1 != 0) {
        var_r0 = arg1;
    }
    *(s32*)((char*)var_r31 + 0x40) = var_r0;
    *(s32*)((char*)var_r31 + 0x3C) = 0;
}

void fn_8018CB7C(void) {
    M2C_UNK fn_8018CCB8();
    fn_8018CCB8();
}

void fn_8018CB9C(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r31;
    void *var_r30;

    temp_r31 = fn_80067440(0);
    fn_80067440(1);
    fn_800673E4(temp_r31);
    temp_r31_2 = fn_80067440(2);
    fn_80067440(3);
    fn_800673E4(temp_r31_2);
    var_r30 = arg0;
    var_r31 = 0;
loop_2:
    if (var_r31 < *(s32*)((char*)arg0 + 0x44)) {
        fn_80050BA8(*(s32*)((char*)var_r30 + 0x48), 0, 0);
        var_r30 = (char*)var_r30 + 4;
        var_r31 += 1;
        goto loop_2;
    }
}

void fn_8018CC3C(void *arg0) {
    M2C_UNK fn_800673E4(s32);
    s32 fn_80067440(M2C_UNK);
    s32 temp_r31;
    s32 temp_r31_2;

    temp_r31 = fn_80067440(1);
    fn_80067440(0);
    fn_800673E4(temp_r31);
    temp_r31_2 = fn_80067440(3);
    fn_80067440(2);
    fn_800673E4(temp_r31_2);
    M2C_FIELD(arg0, s32 *, 0x30) = 0x64;
    M2C_FIELD(arg0, s32 *, 0x34) = 0x64;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}

void fn_8018CF08(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296018;
    void *r3;
    void *temp_r3;

    r3 = &lbl_80296018;
    temp_r3 = fn_8000C0C0(r3);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x3C) = 1;
        M2C_FIELD(temp_r3, s32 *, 0x40) = 0;
    }
}

void fn_8018CF48(s32 arg0) {
    void *fn_8000C0C0(void *, void *);
    extern u16 lbl_80296018;
    s32 var_r31;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_80296018, &lbl_80296018);
    if (temp_r3 != NULL) {
        var_r31 = *(s32*)((char*)temp_r3 + 0x34) + arg0;
        if (var_r31 < 0) {
            var_r31 = 0;
        }
        if (var_r31 > 0x64) {
            var_r31 = 0x64;
        }
        *(s32*)((char*)temp_r3 + 0x40) = var_r31;
    }
}

void fn_8018CFA4(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4) {
    u32 fn_8000C0C0(M2C_UNK *);
    void *fn_8000CAF0(M2C_UNK *, s32);
    extern M2C_UNK lbl_80296018;
    s32 var_r0;
    void *temp_r3;

    if ((fn_80018ADC() != 0U) && ((arg3 != 0) || (fn_8000C0C0(&lbl_80296018) == 0U))) {
        temp_r3 = fn_8000CAF0(&lbl_80296018, arg4);
        var_r0 = 1;
        if (arg1 != 0) {
            var_r0 = arg1;
        }
        M2C_FIELD(temp_r3, s32 *, 0x38) = var_r0;
        M2C_FIELD(temp_r3, s32 *, 0x34) = arg0;
        M2C_FIELD(temp_r3, s32 *, 0x40) = arg0;
        M2C_FIELD(temp_r3, s32 *, 0x3C) = arg2;
    }
}

void fn_8018D218(void *arg0) {
    extern u16 lbl_802797C0[6];
    void *temp_r5;
    
    temp_r5 = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_r5, f32 *, 0x58) = *(f32*)&lbl_802797C0[0];
    M2C_FIELD(temp_r5, f32 *, 0x5C) = *(f32*)&lbl_802797C0[1];
    M2C_FIELD(temp_r5, f32 *, 0x60) = *(f32*)&lbl_802797C0[2];
}

void fn_8018D25C(void *arg0) {
    s32 fn_80018ADC();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = fn_80018ADC();
}

void fn_8018D7A4(s32 arg0, s32 arg1) {
    void fn_8002C47C(void *, s32);
    void fn_8002F728(void *);
    extern u8 lbl_80284E20[];
    extern u8 lbl_80296078[];
    extern u8 lbl_802EF4E0[];
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } obj;

    obj.vtbl = lbl_80284E20;
    obj.unk4 = arg0;
    obj.vtbl = lbl_80296078;
    obj.unk8 = arg1;
    fn_8002F728(lbl_802EF4E0);
    fn_8002C47C(&obj, 0);
}

void fn_8018D7FC(void *arg0, void *arg1) {
    extern u16 lbl_802EF4E0[2008];
    if (((u8 (**)(void *))arg0)[2](arg1) != 0) {
        fn_8002F6E8(&lbl_802EF4E0, *(u8 *)((u8 *)arg1 + 0xC), *(u8 *)((u8 *)arg1 + 0xD), *(u8 *)((u8 *)arg1 + 0x198), 0);
    }
}

void fn_8018DAD4(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[];
    void *temp_r3;

    temp_r3 = fn_8000C0C0((M2C_UNK *) &lbl_80296128);
    if (temp_r3 != NULL) {
        *(u16 *)((char *)temp_r3 + 0x30) = *(u16 *)((char *)temp_r3 + 0x30) & 0xFFFFFFFD;
    }
}

void fn_8018DB4C(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[20];
    void *temp_r3;

    temp_r3 = fn_8000C0C0((M2C_UNK *)lbl_80296128);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x32) = 1;
        M2C_FIELD(temp_r3, s16 *, 0x44) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x54) = 0;
    }
}

void fn_8018DB90(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[20];
    void *temp_r3;

    temp_r3 = fn_8000C0C0((M2C_UNK *)lbl_80296128);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x32) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x44) = 8;
        M2C_FIELD(temp_r3, s16 *, 0x54) = 0xFF;
    }
}

void fn_8018DC18(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[30];
    void *temp_r3;
    M2C_UNK *temp_r4;

    temp_r4 = (M2C_UNK *)lbl_80296128;
    temp_r3 = fn_8000C0C0(temp_r4);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x32) = 1;
        M2C_FIELD(temp_r3, s16 *, 0x46) = 0xE;
    }
}

void fn_8018DC58(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[30];
    void *temp_r3;

    temp_r3 = fn_8000C0C0((M2C_UNK *)lbl_80296128);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x32) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x46) = 2;
    }
}

extern u8 lbl_80296128[16];
void fn_8018DC98(void) {
    fn_8000BF00(&lbl_80296128);
}

s32 fn_8018DD0C(void) {
    return 0;
}

void fn_8018DD3C(s32 arg0) {
    M2C_UNK fn_80059208(M2C_UNK *, s32);
    s32 fn_8005C6A0(void *, M2C_UNK *);
    M2C_UNK fn_8006EEFC(s32, void *);
    extern M2C_UNK fn_8018DE24;
    extern M2C_UNK lbl_80279B1C;
    if (fn_8005C6A0(&lbl_80279B1C + 0x105, &lbl_80279B1C) & 0x2000) {
        fn_8006EEFC(arg0 + 0x34, &lbl_80279B1C + 0x105);
        fn_8000C188(arg0);
        fn_80059208(&fn_8018DE24, arg0);
    }
}

void fn_8018DDA8(void *arg0) {
    M2C_UNK fn_8005C8B4(void *, M2C_UNK *, M2C_UNK, M2C_UNK, f32);
    extern M2C_UNK lbl_80279B1C;
    extern f32 lbl_8036AD98;
    extern f32 lbl_8036AD9C;
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x32) = 1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036AD98;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036AD9C;
    M2C_FIELD(arg0, s16 *, 0x44) = 0;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s16 *, 0x54) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x4A) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x4C) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x4E) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x50) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x52) = 0xFFFF;
    fn_8005C8B4(&lbl_80279B1C + 0x105, &lbl_80279B1C, 0x10000, 0, lbl_8036AD98);
}

void fn_8018E98C(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x3C)();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32), 0x40)(arg0, arg1);
}

void fn_8018EFE0(void *arg0, s32 arg1) {
    s32 fn_8000E0E4(void *, M2C_UNK *);
    M2C_UNK fn_8001019C(s16, s16, M2C_UNK, s32);
    s32 fn_800102BC(M2C_UNK, s16, s16, f32);
    s16 fn_80010B78(M2C_UNK, f32);
    extern M2C_UNK lbl_80279C40;
    extern f32 lbl_8036ADF0;
    s16 temp_r30;
    s16 temp_r3;
    s16 temp_r4;
    s32 temp_r31;

    temp_r31 = fn_8000E0E4(&lbl_80279C40 + 0xA0, &lbl_80279C40);
    temp_r3 = fn_80010B78(-1, lbl_8036ADF0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x12);
    temp_r30 = (s16) ((s32) ((s16) (M2C_FIELD(arg0, s16 *, 0x16) - temp_r4) - temp_r3) >> 1);
    fn_8001019C(temp_r30, (s16) (arg1 + (s16) ((s32) (0x1C - fn_800102BC(-1, temp_r4, temp_r3, lbl_8036ADF0)) >> 1)), 2, temp_r31);
}

void fn_80190020(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x44) = 8;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0x1C;
    M2C_FIELD(arg0, s16 *, 0x14) = 0x14;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)) - 0x1C);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)) - 0x14);
}

void fn_801900E0(void *arg0) {
    s32 r3 = (s32)arg0;
    s16 r4, r5, r6, r7;
    
    *(s16 *)(r3 + 0x40) = 0x18;
    *(s16 *)(r3 + 0x42) = 0;
    r7 = *(s16 *)(r3 + 0xc);
    r6 = *(s16 *)(r3 + 0x10);
    r5 = *(s16 *)(r3 + 0xa);
    r4 = *(s16 *)(r3 + 0xe);
    r6 = r7 - r6;
    r6 = (s16) r6;
    r4 = r5 - r4;
    *(s16 *)(r3 + 0x12) = 2;
    r4 = (s16) r4;
    r6 = r6 - 2;
    *(s16 *)(r3 + 0x14) = 2;
    r4 = r4 - 2;
    *(s16 *)(r3 + 0x16) = r4;
    *(s16 *)(r3 + 0x18) = r6;
}

void fn_801903D8(void *arg0, s32 arg1) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x44) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x2C)();
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, s32), 0x30)(arg0, arg1);
}

void *fn_80190818(void *arg0, s16 arg1) {
    extern void *lbl_80296228;
    extern void *lbl_80292230;
    extern void *lbl_8028FDB0;
    void fn_800616A0(void);
    void fn_8005C7E8(void);
    void fn_800C428C(void *);

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = &lbl_80296228;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            fn_800616A0();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            fn_8005C7E8();
        }

        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = &lbl_80292230;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = &lbl_8028FDB0;
            }
        }

        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }

    return arg0;
}

void fn_801908B4(void) {

}

void fn_801908B8(void *arg0, s32 arg1) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x48) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x30)();
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, s32), 0x34)(arg0, arg1);
}

s32 fn_801909E4(void *arg0, s32 *arg1) {
    s32 fn_80093DA8(s32);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        return fn_80093DA8(*arg1);
    }
    return 1;
}

void fn_80190B00(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 2;
    M2C_FIELD(arg0, s16 *, 0x14) = 8;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)) - 2);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)) - 8);
}

void fn_80190F14(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_80191224(void *arg0) {
    s32 fn_8013AC54(s32);
    M2C_UNK fn_8013AD70(s32, s32);
    void **fn_8013FF94(M2C_UNK, M2C_UNK);
    extern u16 lbl_80330708[700];

    s32 temp_r31;
    void **temp_r30;
    M2C_UNK temp_r4;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x50);
    temp_r30 = fn_8013FF94(5, 0);
    temp_r4 = (M2C_UNK) &lbl_80330708[0x56];
    fn_8013AD70(temp_r31, (s32)temp_r4);
    M2C_FIELD(*temp_r30, M2C_UNK (**)(void **, s32), 0x34)(temp_r30, fn_8013AC54(temp_r31));
}

void fn_8019129C(void *arg0) {
    u8 val = M2C_FIELD(arg0, u8 *, 0x5D);
    fn_8000C070(val);
}

void fn_80191374(void *arg0) {
    void *temp_r3;
    
    fn_8013FF00(arg0, fn_8013FF94(-0x1000, 0));
    *(u8*)((u8*)arg0 + 0x4B) = 0;
    
    temp_r3 = *(void**)((u8*)arg0 + 0x68);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r3) != 0) {
        fn_801658DC(*(s32*)((u8*)temp_r3 + 0x4C));
    }
}

void fn_80192DB8(void* arg0) {
    void** temp_r31;
    s16 spC;
    s16 spE;
    s16 spA;
    s16 sp8;
    s16 temp_r7;
    s16 temp_r7_2;

    temp_r31 = *(void**)((char*)arg0 + 0x4C);
    fn_8013F748(temp_r31, (void*)((char*)arg0 + 0x5E), (void*)((char*)temp_r31 + 0x7C));
    temp_r7 = *(s16*)((char*)temp_r31 + 0xC);
    spC = 0x260;
    spE = temp_r7;
    fn_80140258(arg0, temp_r31, &spC, 0, temp_r7);
    temp_r31 = (void**)fn_8013FF94(arg0, 1, 0);
    temp_r7_2 = *(s16*)((char*)temp_r31 + 0xC);
    sp8 = 0x260;
    spA = temp_r7_2;
    fn_80140258(arg0, temp_r31, &sp8, 0, temp_r7_2);
}

void fn_80192E54(void *arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    extern M2C_UNK lbl_802EF4C8;
    s32 temp_r31;
    void *temp_r6;

    switch ((s32) M2C_FIELD(&lbl_802EF4C8, u8 *, 8)) { /* irregular */
    case 0x80:
        fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 0xC));
        temp_r6 = M2C_FIELD(arg0, void **, 0x68);
        temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x44);
        if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
            fn_801658DC(temp_r31);
        }
        fn_8000C070(arg0, 3);
        /* fallthrough */
    case 0x81:
        return;
    }
}

void fn_80192EE8(void *arg0) {
    extern u16 lbl_80279DF0[];
    void *fn_8013BC10(void *, void *);
    s32 fn_8013FF94(void *, s32, s32, void *);
    void fn_80024398(void *, s32, s32);
    s32 fn_801658DC(s32);
    
    void *temp_r3;
    void *temp_r6;
    s32 temp_r31;
    s32 r4_r31;
    
    temp_r3 = fn_8013BC10(&lbl_80279DF0[0x4EE], &lbl_80279DF0[0x4F6]);
    M2C_FIELD(temp_r3, s16 *, 8) = 0x178;
    M2C_FIELD(temp_r3, s16 *, 0xA) = 0x3C;
    M2C_FIELD(temp_r3, s8 *, 0x24) = 1;
    fn_80024398(arg0, 0, 0x3C);
    temp_r6 = M2C_FIELD(arg0, void **, 0x68);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x4C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

#pragma cplusplus on
extern "C" void *fn_801938F8(void *arg0) {
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual void m14() = 0;
        virtual void m18() = 0;
        virtual void m1C() = 0;
        virtual void m20() = 0;
        virtual void m24() = 0;
        virtual void m28() = 0;
    };
    fn_80193950(arg0);
    *(void **)((u8 *)arg0 + 0x0) = (void *)lbl_8029656C;
    *(s32 *)((u8 *)arg0 + 0x60) = 2;
    ((Obj *) arg0)->m28();
    return arg0;
}
#pragma cplusplus reset

void *fn_80193AF0(void *arg0, s16 arg1) {
    M2C_UNK fn_80165100(void *, s32);
    M2C_UNK fn_800C428C(void *);
    extern u8 lbl_8029656C[];
    extern u8 lbl_80293B74[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_8029656C;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293B74;
            fn_80165100(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma cplusplus on
extern "C" void *fn_80193B60(void *arg0) {
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual void m14() = 0;
        virtual void m18() = 0;
        virtual void m1C() = 0;
        virtual void m20() = 0;
        virtual void m24() = 0;
        virtual void m28() = 0;
    };
    fn_8017A000(arg0);
    *(void **)((u8 *)arg0 + 0x0) = (void *)lbl_80291AC8;
    *(s16 *)((u8 *)arg0 + 0xD4) = 1;
    ((Obj *) arg0)->m28();
    return arg0;
}
#pragma cplusplus reset

void *fn_80193BB8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80179BC8(void *);
    extern u8 lbl_80292358[];
    extern f32 lbl_8036AE20;
    f32 f;

    fn_80179BC8(arg0);
    f = lbl_8036AE20;
    *(u8 **)((u8 *)arg0 + 0x0) = lbl_80292358;
    *(f32 *)((u8 *)arg0 + 0x128) = f;
    *(s16 *)((u8 *)arg0 + 0x88) = 0xC;
    *(s16 *)((u8 *)arg0 + 0x8A) = 0;
    *(s16 *)((u8 *)arg0 + 0x80) = (arg4 - (M2C_FIELD(arg0, s16 *, 0x8A) + 0xC)) / 32;
    *(s32 *)(*(u8 **)((u8 *)arg0 + 0x48) + 0x48) = 2;
    return arg0;
}

void fn_80193C3C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    M2C_UNK fn_8001C5F8(void *, M2C_UNK);
    M2C_UNK fn_800C428C(void **);
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_3;
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
        fn_8001C5F8(temp_r3_2 + 8, -1);
        temp_r3_3 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_3, void ***, 4);
        fn_800C428C(temp_r3_3);
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void *fn_80193DD8(u32 arg0) {
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, u32);
    void fn_801403F0(void *);
    extern u8 lbl_802965C0[];
    extern u8 lbl_80296674[];
    void *var_r31;

    if (arg0 != 0U) {
        var_r31 = fn_8000CAA0(lbl_802965C0, arg0);
    } else {
        var_r31 = fn_8000CAF0(lbl_802965C0, arg0);
    }
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(s32 *)((u8 *)var_r31 + 0x40) = 0;
        *(u8 **)((u8 *)var_r31 + 0x44) = lbl_80296674;
    }
    return var_r31;
}

void fn_80193E58(void) {

}

void fn_80193F3C(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_80193F5C(void *arg0) {
    extern u16 lbl_80367A58;
    s32 temp_r0;
    void *temp_r3;

    lbl_80367A58 &= 0xFFFFFFEF;
    if (arg0 != NULL) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x40);
        if (temp_r3 != NULL) {
            temp_r0 = M2C_FIELD(temp_r3, s32 *, 4) - 1;
            M2C_FIELD(temp_r3, s32 *, 4) = temp_r0;
            if ((temp_r0 == 0) && (temp_r3 != NULL)) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), M2C_UNK (**)(M2C_UNK), 8)(1);
            }
            M2C_FIELD(arg0, void **, 0x40) = NULL;
        }
        fn_80140304(arg0, 0);
    }
}

void fn_80194064(void *arg0) {
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0x20));
    temp_r6 = M2C_FIELD(arg0, void **, 0x44);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x34);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_80194174(void) {

}

void fn_80194374(void *arg0) {
    M2C_UNK fn_80024398(void *, M2C_UNK, M2C_UNK);
    void *fn_8013BC10(void *, void *);
    extern u16 lbl_8027A360[];
    s32 temp_r31;
    void *temp_r3;
    void *temp_r6;

    temp_r3 = fn_8013BC10(&lbl_8027A360[0x18C], &lbl_8027A360[0x195]);
    M2C_FIELD(temp_r3, s16 *, 8) = 0x178;
    M2C_FIELD(temp_r3, s16 *, 0xA) = 0x3C;
    M2C_FIELD(temp_r3, s8 *, 0x24) = 1;
    fn_80024398(arg0, 0, 0);
    temp_r6 = M2C_FIELD(arg0, void **, 0x44);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x28);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

extern u8 lbl_802966D8[16];
void fn_80194E10(void) {
    fn_8000BF00(&lbl_802966D8);
}

void fn_801950CC(void *arg0) {
    M2C_UNK fn_800C426C(s32);
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x30);
    if (temp_r3 != 0U) {
        fn_800C426C(temp_r3 - 0x10);
    }
}

void fn_801950FC(void *arg0) {
    extern M2C_UNK fn_800C42AC(M2C_UNK, M2C_UNK);
    extern M2C_UNK fn_8022C414(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
    extern s32 fn_80196018;
    fn_800C42AC(0x19290, 0x20000);
    M2C_FIELD(arg0, s32 *, 0x30) = fn_8022C414((void *)&fn_80196018, 0, 0x3250, 8);
}

void fn_8019514C(void *arg0, void *arg1) {
    u8 *dst = (u8 *)arg0;
    u8 *src = (u8 *)arg1;
    
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

void fn_80195170(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 4) = arg1;
}

void fn_80195880(void *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 1;
}

void fn_8019588C(void *arg0, s32 arg1) {
    extern f32 lbl_8036AE50;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8036AE50;
}

void fn_80196018(void *arg0) {
    extern f32 lbl_8036AE50;
    extern u16 lbl_8036AE4C;
    
    M2C_FIELD(arg0, u8 *, 0x8) = 0;
    M2C_FIELD(arg0, u16 *, 0xa) = 0;
    M2C_FIELD(arg0, f32 *, 0xc) = lbl_8036AE50; 
    M2C_FIELD(arg0, f32 *, 0x10) = lbl_8036AE50;
    M2C_FIELD(arg0, f32 *, 0x14) = lbl_8036AE50;
    M2C_FIELD(arg0, f32 *, 0x18) = lbl_8036AE50;
    M2C_FIELD(arg0, f32 *, 0x1c) = lbl_8036AE50;
    M2C_FIELD(arg0, u8 *, 0x4) = 0;
    M2C_FIELD(arg0, u16 *, 0x6) = 0;
    
    M2C_FIELD(arg0, u8 *, 0x0) = lbl_8036AE4C;
    M2C_FIELD(arg0, u8 *, 0x1) = lbl_8036AE4C >> 8;
    M2C_FIELD(arg0, u8 *, 0x2) = lbl_8036AE4C >> 16;
    M2C_FIELD(arg0, u8 *, 0x3) = lbl_8036AE4C >> 24;
}

s32 fn_80196420(s32 arg0, void *arg1) {
    s8 fn_8003A398();
    s8 fn_8003A5B4(s32);
    s8 temp_r31;
    s8 temp_r3;
    s8 var_r4;
    s8 var_r5;

    temp_r31 = fn_8003A398();
    temp_r3 = fn_8003A5B4(arg0);
    var_r4 = temp_r31 + M2C_FIELD(arg1, u8 *, 0x27);
    var_r5 = temp_r3 + M2C_FIELD(arg1, u8 *, 0x28);
    if (var_r4 > 0x14) {
        var_r4 = 0x14;
    }
    if (var_r5 > 0x63) {
        var_r5 = 0x63;
    }
    if ((var_r4 == temp_r31) && (var_r5 == temp_r3)) {
        return 0;
    }
    return 1;
}

s32 fn_801964C8(s32 arg0) {
    s32 *fn_800285C0(M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_8003708C(s32, s32);
    M2C_UNK fn_8009127C(s32, s32, M2C_UNK *);
    M2C_UNK fn_80094A08(s32, s8);

    extern u8 lbl_802EF4C8[];
    extern u32 lbl_80330EAC[];

    s32 temp_r31;

    temp_r31 = *fn_800285C0((s32 *)lbl_802EF4C8, (s32 *)lbl_802EF4C8);
    fn_8003708C(M2C_FIELD((s32 *)lbl_802EF4C8, s32 *, 0), temp_r31 + 0x1F);
    fn_80094A08(M2C_FIELD((s32 *)lbl_802EF4C8, s32 *, 0), (s8) M2C_FIELD((s32 *)lbl_802EF4C8, u8 *, 0xA));
    M2C_FIELD((s32 *)lbl_80330EAC, s32 *, 0xCAC) = (s32) (M2C_FIELD((s32 *)lbl_80330EAC, s32 *, 0xCAC) | 0x2000);
    fn_8009127C(temp_r31, arg0, (s32 *)lbl_80330EAC);
    return 1;
}

void fn_80196794(void) {
    M2C_UNK fn_8003D538();
    fn_8003D538();
}

void fn_80196818(void *arg0) {
    M2C_UNK fn_801B3258(s32, void *);
    fn_801B3258(M2C_FIELD(arg0, s32 *, 0x30), arg0);
}

void fn_80196840(void) {

}

void fn_80196844(void) {

}

void fn_801968CC(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x78);
    if (temp_r0 != temp_r5) {
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (temp_r0 + arg1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (temp_r5 + arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = 3;
}

void fn_80196A58(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_801232F4(u32, void *, f32, f32);
    M2C_UNK fn_80123300(s32);
    extern void *lbl_80368278;
    extern f32 lbl_8036AE8C;
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 > 0x50) {
        var_r4 = 0x50;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = arg2;
    M2C_FIELD(arg0, s32 *, 0x78) = var_r4;
    M2C_FIELD(arg0, s32 *, 0x74) = var_r4;
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, s32 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
        fn_80123300(M2C_FIELD(arg0, s32 *, 0x78));
        fn_801232F4(M2C_FIELD(arg0, u32 *, 0x64), lbl_80368278, lbl_8036AE8C, M2C_FIELD(lbl_80368278, f32 *, 0xA8));
    }
}

void fn_801985C4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x144) != 0U) {
        fn_801517F4();
    }
}

void fn_801985F0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
}

void fn_801985F8(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 == 1) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x124);
        if (temp_r0 == 6) {
            M2C_FIELD(arg0, s32 *, 0x124) = 1;
            return;
        } else if (temp_r0 == 7) {
            M2C_FIELD(arg0, s32 *, 0x124) = 2;
            return;
        } else if (temp_r0 == 8) {
            M2C_FIELD(arg0, s32 *, 0x124) = 0;
            return;
        }
    }
}

s32 fn_8019906C(void *arg0) {
    s32 fn_801518D0(s32);
    if (M2C_FIELD(arg0, u32 *, 0x144) != 0) {
        return fn_801518D0(0x12);
    }
    return 0;
}

s32 fn_801990A4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x144) != 0U) {
        return fn_801518D0(1);
    }
    return 0;
}

s32 fn_801990DC(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x144) != 0U) {
        return fn_801518D0(0);
    }
    return 0;
}

s32 fn_80199114(void *arg0) {
    s32 fn_80151948(s32);
    u32 var = *(u32*)((char*)arg0 + 0x144);
    if (var != 0U) {
        return fn_80151948(0x11);
    }
    return -1;
}

s32 fn_801992F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x128);
}

s32 fn_801992F8(void *arg0) {
    extern u16 lbl_802967B0[];
    return *(u16*)((char*)lbl_802967B0 + (M2C_FIELD(arg0, s32 *, 0x124) << 2));
}

s32 fn_80199310(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x124);
}

void fn_80199318(s32 arg0) {
    s32 temp_r3 = arg0 + 0x118;
    fn_800C9B6C(temp_r3);
}

extern s32 fn_8005F7B0(u32, u8);                         /* extern */
extern void fn_8006CAD4(u32);                            /* extern */
extern u8 fn_800E49D0(void *);                           /* extern */
extern void fn_800E5A4C(void);                           /* extern */
void fn_801993E0(void *arg0) {
    void *temp_r3;
    s32 temp_r31;

    if ((s32) M2C_FIELD(arg0, u32 *, 0x124) == 3) {
        if (M2C_FIELD(arg0, void **, 0xE0) != NULL) {
            fn_8006CAD4((u32) M2C_FIELD(arg0, u32 *, 0xE4));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE4) != 0U) {
            temp_r3 = M2C_FIELD(arg0, void **, 0xE0);
            temp_r31 = (s32) fn_800E49D0(temp_r3);
            temp_r31 = ((temp_r31 * (s32) M2C_FIELD(temp_r3, u8 *, 0xB)) / 255) & 0xFF;
            fn_8005F7B0((u32) M2C_FIELD(arg0, u32 *, 0xE4), (u8) temp_r31);
            fn_8006CAD4((u32) M2C_FIELD(arg0, u32 *, 0xE4));
        }
    } else {
        fn_800E5A4C();
    }
}

void fn_80199484(void *arg0) {
    M2C_UNK fn_800E5B68();
    M2C_UNK fn_80198CA4();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 3) {
        fn_80198CA4();
        return;
    }
    fn_800E5B68();
}

void fn_801994B8(void *arg0, s32 arg1) {
    M2C_UNK fn_800E5DEC(void *, s32);
    M2C_UNK fn_801986E0();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x14C) != 0) {
        fn_801986E0();
    }
    fn_800E5DEC(arg0, arg1);
}

extern u16 lbl_80296840[];
void* fn_80199508(void* arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void**, 0x40) = lbl_80296840;
        fn_800C9A60((u8*)arg0 + 0x138, -1);
        fn_800C9A60((u8*)arg0 + 0x12C, -1);
        fn_800C9A60((u8*)arg0 + 0x118, -1);
        fn_800E5F84(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80199818(void *arg0) {
    M2C_UNK fn_80145E9C(s32);
    M2C_UNK fn_801C7C18(u8, u8, u8);
    u32 fn_802097D4();
    extern u8 lbl_80367AE8;
    extern u8 lbl_80367AEA;
    u8 temp_r3;

    lbl_80367AE8 = M2C_FIELD(arg0, u8 *, 8);
    lbl_80367AEA = M2C_FIELD(arg0, u8 *, 9);
    if (fn_802097D4() == 1U) {
        temp_r3 = M2C_FIELD(arg0, u8 *, 2);
        if (!((temp_r3 >> 2U) & 3)) {
            M2C_FIELD(arg0, u8 *, 2) = (u8) ((temp_r3 & ~0xC) | 4);
        }
        fn_80145E9C(((u8) M2C_FIELD(arg0, u8 *, 2) >> 2U) & 3);
    } else {
        M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & ~0xC);
        fn_80145E9C(((u8) M2C_FIELD(arg0, u8 *, 2) >> 2U) & 3);
    }
    fn_801C7C18(M2C_FIELD(arg0, u8 *, 6), M2C_FIELD(arg0, u8 *, 7), M2C_FIELD(arg0, u8 *, 5));
}

void fn_80199B88(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, void *);
    M2C_UNK fn_8017A5EC(s32, u8);
    fn_8017A430(arg1, 4, arg0);
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 4));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 5));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 6));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 7));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 8));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 9));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xA));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xB));
}

void fn_80199C2C(void) {
    M2C_UNK fn_8000BF00(void *);
    extern M2C_UNK lbl_802968E8;
    fn_8000BF00(&lbl_802968E8 + 0x50);
    fn_8000BF00(&lbl_802968E8 + 0x88);
    fn_8000BF00(&lbl_802968E8 + 0xFC);
    fn_8000BF00(&lbl_802968E8 + 0x138);
    fn_8000BF00(&lbl_802968E8 + 0x198);
    fn_8000BF00(&lbl_802968E8 + 0x238);
    fn_8000BF00(&lbl_802968E8 + 0x2B0);
    fn_8000BF00(&lbl_802968E8 + 0x318);
    fn_8000BF00(&lbl_802968E8 + 0x3C4);
    fn_8000BF00(&lbl_802968E8 + 0x410);
    fn_8000BF00(&lbl_802968E8 + 0x474);
    fn_8000BF00(&lbl_802968E8 + 0x508);
    fn_8000BF00(&lbl_802968E8 + 0x5EC);
}

void fn_80199CC0(s32 arg0) {
    extern s32 lbl_80296ED4;
    fn_8000CAA0(&lbl_80296ED4, arg0, &lbl_80296ED4);
}

void fn_80199CEC(void *arg0) {
    M2C_UNK fn_800498A4(s32, M2C_UNK, M2C_UNK);
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x34), 0, 2);
}

s32 fn_8019A01C(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x34);
}

void fn_8019A088(void *arg0) {
    M2C_UNK fn_80049D30(s32);
    fn_80049D30(M2C_FIELD(arg0, s32 *, 0x34));
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x34), 0, 0);
}

extern s32 lbl_8036AEF8;
s32 fn_8019A7A8(void *arg0) {
    u8 color[4] = {0x80, 0x80, 0x80, 0x40};
    u8 *dst;

    dst = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 **, 0x5C);
    dst[0x88] = color[0];
    dst[0x89] = color[1];
    dst[0x8A] = color[2];
    dst[0x8B] = color[3];
    return 1;
}

void fn_8019A7E8(s32 arg0) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_80296DF0;
    fn_8000CAA0(&lbl_80296DF0, arg0, &lbl_80296DF0);
    fn_8019D51C(0, 0);
}

void fn_8019AB90(void *arg0) {
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x5C), 0, 2);
}

void fn_8019ABBC(void *arg0) {
    M2C_UNK fn_8000C188();
    if ((s16) M2C_FIELD(arg0, s16 *, 0x68) >= (s32) (M2C_FIELD(arg0, s16 *, 0x6A) - 4)) {
        fn_8000C188();
    }
}

s32 fn_8019B25C(void *arg0) {
    u8 color[4] = {0x80, 0x80, 0x80, 0x40};
    u8 *dst;

    dst = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 **, 0x5C);
    dst[0x88] = color[0];
    dst[0x89] = color[1];
    dst[0x8A] = color[2];
    dst[0x8B] = color[3];
    return 1;
}

void fn_8019B29C(void *arg0) {
    u8 fn_8005F9B8(void *, s32);
    u32 *flags;

    flags = (u32 *) (M2C_FIELD(arg0, u8 **, 0x5C) + 0x14);
    if (fn_8005F9B8(flags, 0x12) || (*flags & 0x10)) {
        fn_8000C188(arg0);
    }
}

void fn_8019B2FC(void *arg0) {
    M2C_UNK fn_80049D30(s32);
    M2C_UNK fn_800498A4(s32, M2C_UNK, M2C_UNK);
    void fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_80330708[];

    fn_80049D30(M2C_FIELD(arg0, s32 *, 0x5C));
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x5C), 0, 0);
    fn_8014CBD8(lbl_80330708, M2C_FIELD(arg0, s8 *, 0x66), M2C_FIELD(arg0, s8 *, 0x67));
}

void fn_8019B6B4(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296938[];
    extern u8 lbl_8027AA38[];

    fn_8019D51C(fn_8000CAA0(lbl_80296938, arg0), arg1, lbl_8027AA38 + 0x166);
}

void fn_8019B704(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(s32, void *);
    extern M2C_UNK lbl_8027AA38;
    extern M2C_UNK lbl_80296D5C;
    u32 var_r30;
    void *temp_r31;
    void *temp_r3;

    temp_r31 = fn_8000CAA0(&lbl_80296D5C, arg0, &lbl_80296D5C);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x17A);
    var_r30 = 0U;
    M2C_FIELD(temp_r31, s8 *, 0x5C) = 0;
    temp_r3 = *M2C_FIELD(temp_r31, void ***, 0x34);
    if (temp_r3 != NULL) {
        var_r30 = M2C_FIELD(temp_r3, u32 *, 0x280);
    }
    if (var_r30 != 0U) {
        fn_8004FC70(var_r30, 8);
        fn_8004FC70(var_r30, 9);
    }
}

void fn_8019B79C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(s32, void *);
    extern M2C_UNK lbl_8027AA38;
    extern M2C_UNK lbl_80296D5C;
    u32 var_r31;
    void *temp_r31;
    void *temp_r3;

    temp_r31 = fn_8000CAA0(&lbl_80296D5C, arg0, &lbl_80296D5C);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x185);
    M2C_FIELD(temp_r31, s8 *, 0x5C) = 1;
    temp_r3 = *M2C_FIELD(temp_r31, void ***, 0x34);
    if (temp_r3 != NULL) {
        var_r31 = M2C_FIELD(temp_r3, u32 *, 0x280);
    } else {
        var_r31 = 0U;
    }
    if (var_r31 != 0U) {
        fn_8004FC70(var_r31, 8);
        fn_8004FC70(var_r31, 9);
    }
}

void fn_8019B83C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(s32, void *);
    extern M2C_UNK lbl_8027AA38;
    extern M2C_UNK lbl_80296D5C;
    void *temp_r31;

    temp_r31 = fn_8000CAA0(&lbl_80296D5C, arg0, &lbl_80296D5C);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x194);
    M2C_FIELD(temp_r31, s8 *, 0x5C) = 3;
}

void fn_8019B8A0(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296D5C[];
    extern u8 lbl_8027AA38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296D5C, arg0);
    fn_8019D51C(temp_r31, arg1, lbl_8027AA38 + 0x1A4);
    M2C_FIELD(temp_r31, u8 *, 0x5C) = 2;
}

void fn_8019BC50(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296CF8[];
    u8 *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296CF8, arg2);
    fn_8019D51C(temp_r31, 0, NULL);
    temp_r31[0x5D] = arg0;
    temp_r31[0x5E] = arg1;
    temp_r31[0x5C] = 1;
}

void fn_8019BCC0(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296CF8[];
    u8 *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296CF8, arg2);
    fn_8019D51C(temp_r31, 0, NULL);
    temp_r31[0x5D] = arg0;
    temp_r31[0x5E] = arg1;
    temp_r31[0x5C] = 0;
}

void fn_8019BD8C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(s32, M2C_UNK);
    extern M2C_UNK lbl_80296CAC;
    fn_8000CAA0(&lbl_80296CAC, arg0, &lbl_80296CAC);
    fn_8019D51C(arg1, 0);
}

void fn_8019BEA4(s32 arg0) {
    M2C_UNK fn_8002F658(s32 *, s32);
    s32 fn_8002F740();
    M2C_UNK fn_80053658(void *, M2C_UNK, s32);
    M2C_UNK fn_80053680(s32);
    void *fn_80053C30(s32, s32);
    extern M2C_UNK fn_8019BF5C;
    extern s32 lbl_802EF4E0;
    s32 temp_r29;
    s32 var_r30;
    void *temp_r3;
    void *temp_r3_2;

    var_r30 = 0;
loop_4:
    if (var_r30 < (s32) lbl_802EF4E0) {
        fn_8002F658(&lbl_802EF4E0, var_r30);
        temp_r29 = fn_8002F740();
        temp_r3 = fn_80053C30(arg0 + 0x41, arg0);
        if (temp_r3 != NULL) {
            fn_80053680(temp_r29);
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), M2C_UNK **, 0x40) = &fn_8019BF5C;
            fn_80053658(temp_r3, 0, arg0);
            fn_80053658(temp_r3, 1, temp_r29);
            temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x30);
            M2C_FIELD(temp_r3_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 8) | 0x400);
        }
        var_r30 += 1;
        goto loop_4;
    }
}

s32 fn_8019BF5C(void *arg0) {
    M2C_UNK fn_80054C14(void *);
    u8 fn_8005F9B8(M2C_UNK);
    M2C_UNK fn_80184688(s32, M2C_UNK, M2C_UNK, void *);
    extern s32 lbl_802EF4E0;
    void *temp_r4;
    u8 temp_r3;
    void *temp_r31;
    s32 temp_r30;
    u32 temp_r3_2;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    temp_r31 = M2C_FIELD(temp_r4, void **, 0x4C);
    temp_r30 = M2C_FIELD(temp_r4, s32 *, 0x50);
    temp_r3_2 = M2C_FIELD(temp_r4, u32 *, 0x5C);
    if ((temp_r3_2 != 0U) && (fn_8005F9B8(0) != 0)) {
        fn_80184688(temp_r30, 1, 0x20, temp_r31);
        if (((M2C_UNK (*)(void *)) M2C_FIELD(temp_r31, M2C_UNK (**)(void *), 0x58)) != NULL) {
            temp_r3 = M2C_FIELD(temp_r31, u8 *, 0x40);
            if (!(temp_r3 & 4)) {
                M2C_FIELD(temp_r31, u8 *, 0x40) = (u8) (temp_r3 | 4);
                M2C_FIELD(temp_r31, M2C_UNK (**)(void *), 0x58)(temp_r31);
            }
        }
    }
    fn_80054C14(arg0);
    return 0;
}

void fn_8019C00C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296D5C[];
    extern u8 lbl_8027AA38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296D5C, arg0);
    fn_8019D51C(temp_r31, arg1, lbl_8027AA38 + 0x1A4);
    M2C_FIELD(temp_r31, u8 *, 0x5C) = 2;
}

void fn_8019C070(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32);
    extern u8 lbl_80296938[];
    extern u8 lbl_8027AA38[];

    fn_8000CAA0(lbl_80296938, arg0);
    fn_8019D51C((void *) (lbl_8027AA38 + 0x1D4), arg1);
}

extern s32* lbl_80367240;
extern s32* lbl_8036ACC0;
extern void* fn_8005306C(void*);
extern void* fn_80053658(void*, s32, void*);
extern void* fn_800536CC(s32);
extern void* fn_800536D8(void*, s32);
extern void* fn_80053C30(s32, void*);
extern void* fn_8019CC04;
extern void* lbl_8027AA38;
extern void* lbl_80296C00;
void fn_8019C160(s32 arg0, s32 arg1) {
    fn_8000CAA0(&lbl_80296C00, arg0, &lbl_80296C00);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x1F5);
}

void fn_8019C1B0(void *arg0) {
    u8 temp_r4;

    if (((M2C_UNK (*)()) M2C_FIELD(arg0, M2C_UNK (**)(), 0x58)) != NULL) {
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x40);
        if (!(temp_r4 & 4)) {
            M2C_FIELD(arg0, u8 *, 0x40) = (u8) (temp_r4 | 4);
            M2C_FIELD(arg0, M2C_UNK (**)(), 0x58)();
        }
    }
}

s32 fn_8019CC80(void *arg0) {
    M2C_UNK fn_8002297C(M2C_UNK *);
    M2C_UNK fn_80054C14(void *);
    u8 fn_8005F9B8(M2C_UNK);
    M2C_UNK fn_800C1060(void *);
    extern s32 lbl_802CA518;
    u8 temp_r3;
    void *temp_r31;
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    temp_r31 = M2C_FIELD(temp_r4, void **, 0x4C);
    if (((u32) M2C_FIELD(temp_r4, u32 *, 0x5C) != 0U) && (fn_8005F9B8(0) != 0)) {
        temp_r4_2 = M2C_FIELD(temp_r31, void **, 0x38);
        if (temp_r4_2 != NULL) {
            M2C_FIELD(temp_r4_2, u8 *, 0x1A6) = (u8) ((M2C_FIELD(temp_r4_2, u8 *, 0x1A6) & ~0x1C) | 0x10);
            fn_8002297C(&lbl_802CA518);
            fn_800C1060(temp_r31);
        }
        if (((M2C_UNK (*)(void *)) M2C_FIELD(temp_r31, M2C_UNK (**)(void *), 0x58)) != NULL) {
            temp_r3 = M2C_FIELD(temp_r31, u8 *, 0x40);
            if (!(temp_r3 & 4)) {
                M2C_FIELD(temp_r31, u8 *, 0x40) = (u8) (temp_r3 | 4);
                M2C_FIELD(temp_r31, M2C_UNK (**)(void *), 0x58)(temp_r31);
            }
        }
    }
    fn_80054C14(arg0);
    return 0;
}

void fn_8019D038(void *arg0) {
    M2C_UNK fn_8017E394(s32, M2C_UNK, void *, M2C_UNK);
    fn_8017E394(M2C_FIELD(arg0, s32 *, 0x34), 0, arg0, 3);
}

void fn_8019D068(s32 arg0)
{
  u32 temp_r31;
  u32 fn_800980E8(M2C_UNK);
  M2C_UNK fn_80184A00(u32, u32, M2C_UNK, s32);
  u32 temp_r30;
  temp_r31 = fn_800980E8(0);
  temp_r30 = fn_800980E8(1);
  if ((temp_r31 != 0U) && (temp_r30 != 0U))
  {
    fn_80184A00(temp_r31, temp_r30, 0x10, arg0);
    fn_80184A00(temp_r30, temp_r31, 0x10, arg0);
  }
}

void fn_8019D150(void *arg0) {
    u8 fn_80098568(void **);
    M2C_UNK fn_80183B24(s32, void *);
    s32 var_r3;
    s32 var_r3_2;
    void *temp_r3;
    void *temp_r3_2;

    if (fn_80098568(M2C_FIELD(arg0, void ***, 0x34)) != 0) {
        temp_r3 = *M2C_FIELD(arg0, void ***, 0x34);
        if (temp_r3 != NULL) {
            var_r3 = M2C_FIELD(temp_r3, s32 *, 0x280);
        } else {
            var_r3 = 0;
        }
        fn_80183B24(var_r3, arg0);
        return;
    }
    temp_r3_2 = *M2C_FIELD(arg0, void ***, 0x34);
    if (temp_r3_2 != NULL) {
        var_r3_2 = M2C_FIELD(temp_r3_2, s32 *, 0x280);
    } else {
        var_r3_2 = 0;
    }
    fn_80184C7C(var_r3_2, 0, 0x18, 0);
}

s32 fn_8019D268(void) {
    extern u16 lbl_802968E8[];
    s32 temp_r3;

    temp_r3 = fn_8000C0C0(lbl_802968E8);
    if ((temp_r3 != 0) && (fn_800537E8() == 0)) {
        fn_8000C60C(temp_r3);
        return 0;
    }
    return 1;
}

void fn_8019D360(void *arg0) {
    void *temp_r5;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x35) == 0) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(temp_r5, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x1C) & 0xFFFFFF3F);
        M2C_FIELD(arg0, u8 *, 0x35) = 1U;
    }
}

void fn_8019D458(void *arg0) {
    M2C_UNK fn_80184618(s32, void *);
    M2C_UNK fn_80184BE8(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80184C7C(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80184C7C(M2C_FIELD(arg0, s32 *, 0x30), 5, 0x10, 0);
    fn_80184BE8(M2C_FIELD(arg0, s32 *, 0x30), 0, 0x10, 0);
    fn_80184618(M2C_FIELD(arg0, s32 *, 0x30), arg0);
}

void fn_8019D4F4(void *arg0) {
    M2C_UNK fn_8004FC70(s32, M2C_UNK);
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 5);
}

s32 fn_8019D7A8(void) {
    extern u16 lbl_80367110;
    extern u8 lbl_80296F50[];
    
    void *fn_8000CAA0(void *, s32, void *);
    void fn_80013864(void);
    s32 fn_800C0658(void);
    u8 fn_80194E38(void);

    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_80194E38() != 0) {
        fn_8000CAA0(lbl_80296F50, fn_800C0658(), lbl_80296F50);
        fn_80013864();
    }
    return 1;
}

extern void fn_80194F54(void);
extern void fn_80195170(void *arg0, s8 arg1);
s32 fn_8019D8CC(s32 arg1) {
    fn_80194F54();
    fn_80195170(0, (arg1 != 0) ? 1 : 0);
    return 1;
}

s32 fn_8019D90C(void) {
    M2C_UNK fn_80194E10();
    fn_80194E10();
    return 1;
}

s32 fn_8019D930(void) {
    M2C_UNK fn_80194F54();
    M2C_UNK fn_80195880();
    fn_80194F54();
    fn_80195880();
    return 1;
}

s32 fn_8019E4EC(void) {
    u8 fn_800A69D8(M2C_UNK *, s32 *);
    M2C_UNK spC;
    s32 sp8;

    if (fn_800A69D8(&spC, &sp8) != 0) {
        return sp8;
    }
    return 0;
}

s32 fn_8019E528(void) {
    s32 spC;
    M2C_UNK sp8;

    if (fn_800A69D8(&spC, &sp8) != 0) {
        return spC;
    }
    return 0;
}

s32 fn_8019E564(s32 arg0) {
    M2C_UNK fn_8000BF00(M2C_UNK *);
    M2C_UNK fn_8000CAF0(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_80297070;
    if (arg0 != 0) {
        fn_8000CAF0(&lbl_80297070, fn_800C0658(), &lbl_80297070);
    } else {
        fn_8000BF00(&lbl_80297070);
    }
    return 1;
}

void fn_8019E5B0(void) {
    M2C_UNK fn_8000A274(M2C_UNK);
    fn_8000A274(0);
}

s32 fn_8019E640(s32 arg0) {
    u8 var_r0;
    
    var_r0 = lbl_8036728B | 0x2;
    if (arg0 != 0) {
        var_r0 = lbl_8036728B & 0xFFFFFFFD;
    }
    lbl_8036728B = var_r0;
    return 1;
}

s32 fn_8019E668(s32 arg0) {
    u8 var_r0;
    
    var_r0 = lbl_8036728B & 0xFFFFFFFB;
    if (arg0 != 0) {
        var_r0 = lbl_8036728B | 0x4;
    }
    lbl_8036728B = var_r0;
    return 1;
}

s32 fn_8019E690(s32 arg0) {
    extern u8 lbl_8036728B;
    u8 var_r0;

    var_r0 = lbl_8036728B | 1;
    if (arg0 != 0) {
        var_r0 = lbl_8036728B & 0xFE;
    }
    lbl_8036728B = var_r0;
    return 1;
}

s32 fn_8019E6B4(void) {
    M2C_UNK fn_8018CF08();
    fn_8018CF08();
    return 1;
}

void fn_8019E764(u32 arg0, void *arg1) {
    u32 temp_r3;
    if (arg1 != 0) {
        M2C_FIELD(arg1, u32 *, 0x1C) = arg0;
        temp_r3 = M2C_FIELD(arg1, u32 *, 0x20);
        if (temp_r3 != 0) {
            ((void (*)(u32))((void **)(temp_r3))[0x48])(arg0);
        }
    }
}

s32 fn_8019EA74(s32 arg0, s32 arg1) {
    void *fn_8000CAF0(void *, s32, void *);
    extern u16 lbl_80297024[];
    
    void *temp_r3;
    temp_r3 = fn_8000CAF0(lbl_80297024, fn_800C0658(), (void *)lbl_80297024);
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, s32 *, 0x34) = arg1;
    return 1;
}

void fn_8019EAC8(void *arg0) {
    M2C_UNK fn_800F18A4(s32, s32);
    fn_800F18A4(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x34));
}

s32 fn_8019EC0C(s32 arg0, s32 arg1, u8 arg2) {
    void *fn_8004721C(s32, s32, s32, s32);
    void fn_80040844(void);
    void fn_80044450(s32);
    void fn_80016180(void);
    void fn_800056A0(s32);
    
    u8 *temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    fn_80040844();
    temp_r5 = arg0;
    temp_r4 = arg1;
    temp_r3 = fn_8004721C(temp_r5, temp_r4, 0x800, 0x10);
    if (temp_r3 == NULL) {
        fn_800056A0(0);
        return 0;
    }
    
    if (arg2 != 0) {
        temp_r3[2] = (u8)(temp_r3[2] & 0xFFFFFFFD);
    } else {
        temp_r3[2] = (u8)(temp_r3[2] | 2);
    }
    
    fn_80040844();
    fn_80044450(1);
    fn_80016180();
    return 1;
}

s32 fn_8019ED74(void) {
    return 1;
}

s32 fn_8019F230(s8 arg0, s8 arg1) {
    M2C_UNK fn_800056A0(M2C_UNK);
    s32 fn_8004721C(s8, s8, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8010FEEC(M2C_UNK *, s8, s8, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8012942C(s32, s32);
    extern M2C_UNK lbl_8032BB58;
    s32 temp_r3;

    fn_80040844();
    temp_r3 = fn_8004721C(arg0, arg1, 0x200, 0x410);
    if (temp_r3 == 0) {
        fn_800056A0(0);
        return 0;
    }
    fn_8012942C(temp_r3, fn_800C0658());
    fn_8010FEEC(&lbl_8032BB58, arg0, arg1, 0x23, 0);
    fn_80013864();
    return 1;
}

void fn_8019FC4C(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_8001772C();
    if (fn_8001772C() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_8019FC88(void) {
    M2C_UNK fn_80017774();
    fn_80017774();
    return 1;
}

s32 fn_8019FCAC(void) {
    M2C_UNK fn_8001779C();
    fn_8001779C();
    return 1;
}

s32 fn_8019FCD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_80017840(M2C_UNK, s32, f32, f32, f32);
    fn_80017840(1, arg0, (f32) arg1, (f32) arg2, (f32) arg3);
    return 1;
}

s32 fn_8019FE2C(void) {
    M2C_UNK fn_800C0658();
    M2C_UNK fn_800177E0();
    fn_800C0658();
    fn_800177E0();
    return 1;
}

void fn_8019FE54(s32 arg0)
{
    if (arg0 == 0) {
        lbl_8036728B = lbl_8036728B & 0xFFFFFFFD;
    }
    else
    {
        lbl_8036728B = 0;
        lbl_8036728B = lbl_8036728B | 0x2;
        lbl_8036728B = lbl_8036728B & 0xFFFFFFFB;
    }
}

void fn_8019FEB8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 r7;

    temp_r3 = *(s32 *)arg0;
    if (temp_r3 != 0) {
        // Copying 0x1EC bytes from arg0+0x158 to arg0+0x15C
        for (r7 = 0; r7 < 0x1EC; r7 += 4) {
            *(s32 *)((char *)arg0 + 0x15C + r7) = *(s32 *)((char *)arg0 + 0x158 + r7);
        }
    }
    return;
}

s32 fn_8019FF68(void) {
    extern u8 lbl_80367710;
    if (lbl_80367710 & 0x40) {
        return 1;
    }
    return 0;
}

void fn_8019FFBC(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r3;

    temp_r3 = fn_80018ADC();
    temp_f2 = (f32) arg0;
    *(f32*) (temp_r3 + 0x8) = temp_f2;
    temp_f1 = (f32) arg1;
    *(f32*) (temp_r3 + 0x10) = temp_f2;
    *(f32*) (temp_r3 + 0xc) = temp_f1;
    *(f32*) (temp_r3 + 0x14) = temp_f1;
    fn_800193CC((f32) arg2, temp_f2);
    fn_800187F0();
}

extern s32 lbl_8036AF6C;
extern u8 lbl_80367298[];
void fn_801A0100(s8 arg0, s8 arg1, s8 arg2) {
    lbl_80367298[0] = arg0;
    lbl_80367298[1] = arg1;
    lbl_80367298[2] = arg2;
    lbl_80367298[3] = lbl_8036AF6C;

    fn_80040844(arg2, arg1, arg0, lbl_80367298);
    fn_80045C68();
    fn_80013864();
}

s32 fn_801A01D8(s8 arg0) {
    M2C_UNK fn_80013864();
    M2C_UNK fn_80040844();
    M2C_UNK fn_80040DA4();
    extern s8 lbl_8036728A;
    lbl_8036728A = arg0;
    fn_80040844();
    fn_80040DA4();
    fn_80013864();
    return 1;
}

s32 fn_801A0374(void) {
    extern s32 lbl_80330708[];
    void fn_8014C7C0(s32 *, s32);
    void fn_8014C798(s32 *);
    void fn_8014CBD8(s32 *, s8, f32, f32);
    void fn_800187F0(void);

    fn_8014C7C0(lbl_80330708, 0);
    fn_8014C798(lbl_80330708);
    fn_8014CBD8(lbl_80330708, (s8) lbl_80330708[0x52 / 4], (f32) (s8) lbl_80330708[0x52 / 4], (f32) (s8) lbl_80330708[0x53 / 4]);
    fn_800187F0();
    return 1;
}

extern u16 lbl_80330708[];
s32 fn_801A0400(s32 arg0) {
    void fn_8014C7C0(void *, s32, void *);
    
    fn_8014C7C0(lbl_80330708, arg0, lbl_80330708);
    fn_80013864();
    return 1;
}

void fn_801A06CC(void) {
    M2C_UNK fn_8003BE50();
    fn_8003BE50();
}

void fn_801A0C3C(void *arg0, u32 arg1) {
    M2C_UNK fn_8000C60C();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) == arg1) {
        fn_8000C60C();
    }
}

void fn_801A0C68(void *arg0) {
    if (fn_8004BF80(M2C_FIELD(arg0, s32 *, 0x54)) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_801A0CA8(void *arg0) {
    u8 fn_8004FA88(s32, s32);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x54);
    fn_8004FC70(temp_r31, M2C_FIELD(arg0, s32 *, 0x60));
    if (fn_8004FA88(temp_r31, M2C_FIELD(arg0, s32 *, 0x60)) != 0) {
        fn_80184C7C(temp_r31, M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x64), arg0);
        M2C_FIELD(arg0, s32 *, 0x60) = -1;
        fn_8000C188(arg0);
    }
}

void fn_801A0D20(void *arg0) {
    M2C_UNK fn_8004BF24(s32);
    M2C_UNK fn_8004FE98(s32);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x54);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) >= 0) {
        fn_8004FE98(temp_r31);
        fn_8004BF24(temp_r31);
    }
}

s32 fn_801A147C(s32 *arg1, s32 *arg2) {
    void fn_80106F68(u8 *, u8 *);
    u8 sp9;
    u8 sp8;

    fn_80106F68(&sp9, &sp8);
    *arg1 = (s32) (s8) sp9;
    *arg2 = (s32) (s8) sp8;
    return 0;
}

s32 fn_801A1604(s32 arg0) {
    u32 fn_8000CAF0(void *, u32, void *);
    void fn_80105F0C(s32, u32, s32);
    u32 fn_80127C48();
    u8 fn_80183974();
    extern u8 lbl_80296FA8[];
    extern u8 lbl_80296FCC[];
    s32 temp_r3_2;
    u32 temp_r3;
    u32 var_r3;
    u32 var_r4;

    temp_r3 = fn_8000C0C0(lbl_80296FA8, lbl_80296FA8);
    if (temp_r3 != 0U) {
        var_r4 = temp_r3;
    } else {
        var_r3 = fn_80127C48();
        if (var_r3 == 0U) {
            var_r3 = fn_800C0658();
        }
        var_r4 = fn_8000CAF0(lbl_80296FA8, var_r3, lbl_80296FA8);
    }
    fn_80105F0C(arg0, var_r4, 3);
    temp_r3_2 = fn_8000C0C0(lbl_80296FA8);
    if ((((u32) (-temp_r3_2 | temp_r3_2) >> 0x1FU) != 0) || (fn_80183974() != 0)) {
        fn_80013864();
        fn_8000CAA0(lbl_80296FCC, fn_800C0658(), lbl_80296FCC);
    }
    return 1;
}

s32 fn_801A16BC(void) {
    fn_80105F0C(0, 2);
    return 1;
}

s32 fn_801A17A0(void) {
    s32 arg0 = 0;
    s32 arg1 = 1;
    fn_80105F0C(arg0, arg1);
    return 1;
}

s32 fn_801A1934(void) {
    fn_80105F0C(0, 0);
    return 1;
}

s32 fn_801A1960(s32 arg0) {
    u32 fn_8000C0C0(u16 *, u16 *);
    u32 fn_8000CAF0(u16 *, u32, u16 *);
    u32 fn_80105F0C(s32, u32, u16);
    u32 fn_80127C48();
    extern u16 lbl_80296FA8[18];
    u32 temp_r3;
    u32 var_r3;
    u32 var_r4;

    temp_r3 = fn_8000C0C0(lbl_80296FA8, lbl_80296FA8);
    if (temp_r3 != 0U) {
        var_r4 = temp_r3;
    } else {
        var_r3 = fn_80127C48();
        if (var_r3 == 0U) {
            var_r3 = fn_800C0658();
        }
        var_r4 = fn_8000CAF0(lbl_80296FA8, var_r3, lbl_80296FA8);
    }
    fn_80105F0C(arg0, var_r4, 0);
    return 1;
}

s32 fn_801A1E6C(s8 arg0, s8 arg1) {
    void *fn_8000C0C0(void *, void *);
    f32 fn_80023430(void *, void *, f32, f32);
    extern u16 lbl_80296F90[];
    extern u8 lbl_802CA518[];
    extern f64 lbl_8036AF78;
    
    void *temp_r3;
    s32 var_r31;
    s32 temp_r4;
    s32 temp_r0;

    temp_r3 = fn_8000C0C0(&lbl_80296F90, &lbl_80296F90);
    if (temp_r3 != NULL) {
        var_r31 = *(s32 *)((char *)temp_r3 + 0x3C);
    } else {
        var_r31 = 1;
    }
    
    temp_r4 = (s32)arg0;
    temp_r0 = (s32)arg1;
    
    return (s32)(fn_80023430(&lbl_802CA518, &lbl_802CA518, (f32)temp_r4, (f32)temp_r0) * (f32)var_r31);
}

s32 fn_801A2004(s32 arg0) {
    void *fn_8000C0C0(void *, void *);
    void *fn_8000CAF0(void *, s32, void *);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    
    void *var_r3;
    
    var_r3 = fn_8000C0C0(lbl_80296F90, lbl_80296F90);
    if (var_r3 != NULL) {
        goto LAB_1ec94;
    } else {
        var_r3 = fn_8000CAF0(lbl_80296F90, fn_800C0658(), lbl_80296F90);
        M2C_FIELD(var_r3, s8 *, 0x30) = 1;
        M2C_FIELD(var_r3, s8 *, 0x31) = 0;
        M2C_FIELD(var_r3, s8 *, 0x32) = 0;
        M2C_FIELD(var_r3, s16 *, 0x34) = 0;
        M2C_FIELD(var_r3, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(var_r3, s8 *, 0x36) = 1;
        M2C_FIELD(var_r3, s32 *, 0x3C) = 1;
        M2C_FIELD(var_r3, s8 *, 0x37) = 0;
        M2C_FIELD(var_r3, s8 *, 0x38) = 0;
    }
LAB_1ec94:
    M2C_FIELD(var_r3, s32 *, 0x3C) = arg0;
    return 1;
}

s32 fn_801A212C(void) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        v = p;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
    }
    M2C_FIELD(v, s8 *, 0x32) = 2;
    return 1;
}

s32 fn_801A21C0(void) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        v = p;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
    }
    M2C_FIELD(v, s8 *, 0x32) = 2;
    return 1;
}

s32 fn_801A2254(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
        v = p;
    }
    if (arg0 != 0) {
        M2C_FIELD(v, s8 *, 0x31) = 1;
    } else {
        M2C_FIELD(v, s8 *, 0x31) = 0;
    }
    return 1;
}

u8 fn_801A2300(void) {
    void *fn_8000C0C0(void *);
    extern u8 lbl_80296F90[];
    void *p;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        return M2C_FIELD(p, u8 *, 0x30);
    }
    return 1;
}

s32 fn_801A233C(void) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        v = p;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
    }
    M2C_FIELD(v, s8 *, 0x30) = 1;
    return 1;
}

s32 fn_801A23D0(void) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        v = p;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
    }
    M2C_FIELD(v, s8 *, 0x30) = 0;
    return 1;
}

void fn_801A2570(void) {
    M2C_UNK fn_800C1060();
    extern u8 lbl_80367289;
    u8 temp_r0;
    u8 var_r5;

    var_r5 = 1;
    temp_r0 = lbl_80367289 - 1;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        fn_800C1060();
    }
}

void fn_801A25C4(void) {
    M2C_UNK fn_80016180();
    M2C_UNK fn_8005376C();
    M2C_UNK fn_800C1BDC();
    extern s32 lbl_80367110;
    if (lbl_80367110 & 1) {
        fn_8000C60C();
        fn_800C1BDC();
        fn_80016180();
        fn_8005376C();
    }
}

s32 fn_801A25FC(s8 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
        v = p;
    }
    if (arg0 != 0) {
        M2C_FIELD(v, s8 *, 0x31) = 1;
    } else {
        M2C_FIELD(v, s8 *, 0x31) = 0;
    }
    return 1;
}

u8 fn_801A2690(void) {
    void *fn_8000C0C0(u16 *);
    extern u16 lbl_80296F90;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_80296F90);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return *(u8 *)((uintptr_t)temp_r3 + 0x38);
}

void fn_801A2730(s32 arg0) {
    extern u32 fn_801A27F8;
    s32 temp_r3 = 4;
    s32 temp_r4 = 2;
    s32 temp_r5 = (s32)&fn_801A27F8;
    s32 temp_r6 = arg0;
    fn_80067708(temp_r3, temp_r4, (u32 *)temp_r5, temp_r6);
}

void fn_801A2764(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_801A27A0(void *arg0) {
    s32 fn_800C45B8(void *, M2C_UNK);
    M2C_UNK fn_80222420(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern u16 lbl_8027AD98[];
    fn_80222420(0x260, 0x1C0, 4, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = fn_800C45B8((void *)&lbl_8027AD98[0x5C5], 0);
}

#include "common.h"

extern s32 lbl_8036AF6C;
extern u8 lbl_80367298[];
#include "common.h"
extern u16 lbl_80291AC8[];
#include "global.h"

extern u32 lbl_80295A00[];
extern u32 lbl_80295A20[];
extern f32 lbl_8036ACE0;
extern f32 lbl_8036ACEC;
extern f32 lbl_8036AD04;
extern f32 lbl_8036ACF0;

void *fn_8000A388(u32*, u32*, void*);
void *fn_8000CA64(u32*, s32);
u8 fn_8004C0F0(s32);
void *fn_8004FE90(s32, u8);
void *fn_8004FE98(s32, s32);
void *fn_800506E0(s32, s32, void*);
void *fn_800508C4(s32);
f32 fn_80059F64(f32, f32, f32, f32);
void *fn_8005FC74(void*, void*, s32);
void *fn_8005FEE8(void*, f32);
s32 fn_80060440(s32);
void *fn_800639B4();
extern u16 lbl_803120A0[];
extern s32 lbl_803674F8;
extern u16 lbl_802968E8;
extern u16 lbl_802797C0[6];
extern u16 lbl_8036AE4C;
extern f32 lbl_8036AE50;
#include "common.h"

extern u16 lbl_80296FA8;
#include "global.h"
#include "unit.h"
extern u16 lbl_80295D1C[];
#include "common.h"
#include "m2c.h"

extern u16 lbl_802923E0[];
extern u16 lbl_80296018[];
extern u16 lbl_80330708[0x2B4];
#include "common.h"
#include "structs.h"
#include "ef.h"

struct UnkStruct_802EF4C8 {
    s32 unk0;
    s32 unk4;
    u8 unk8;
    u8 unk9;
    s8 unkA;
    u8 pad[0x18 - 0xB];
};

extern struct UnkStruct_802EF4C8 lbl_802EF4C8;
extern u16 lbl_80330EAC[];
extern u16 lbl_80367110;
extern u16 lbl_80330E90[4];
