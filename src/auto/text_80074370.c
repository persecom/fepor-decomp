/* Functions from 0x80074370 to 0x8007C534, found by decomp-toolkit. */
#include "common.h"
#include "structs.h"
extern u8 D_802EF4C8[24];

void fn_80074370(void *arg0) {
    extern s32 lbl_80367468;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) lbl_80367468;
}

extern s32 lbl_80330D68;
s32 fn_8007437C(void) {
    u8 fn_80166D8C(M2C_UNK *);
    extern M2C_UNK lbl_80330D68;
    s32 var_r3;

    var_r3 = 0x10;
    if (fn_80166D8C(&lbl_80330D68) != 0) {
        var_r3 = 0x40;
    }
    return var_r3;
}

s32 fn_80074758(void *arg2) {
    extern u8 lbl_802EF4C8;
    extern s32 lbl_80311FF4;
    if ((u8) *((u8 *) arg2 + 0x39) != 0) {
        return 0x10;
    }
    *((u8 *) &lbl_802EF4C8 + 0xa) = (u8) *((u8 *) arg2 + 0x3A);
    fn_80024398(&lbl_80311FF4, 0);
    return 4;
}

s32 fn_8007485C(void) {
    return 0;
}

s32 fn_80074864(void) {
    return 0;
}

void fn_800749D4(void) {
    M2C_UNK fn_8000E0E4(void *);
    u8 fn_8014D8DC(M2C_UNK *);
    extern M2C_UNK lbl_8026C0B8;
    extern M2C_UNK lbl_80330708;
    if (fn_8014D8DC(&lbl_80330708) != 0) {
        fn_8000E0E4(&lbl_8026C0B8 + 0x134);
        return;
    }
    fn_8000E0E4(&lbl_8026C0B8 + 0x141);
}

s32 fn_80074A28(void) {
    return 9;
}

s32 fn_80074A30(void) {
    return 0x18;
}

s32 fn_80074ADC(void) {
    return 0;
}

void fn_80074C30(void *arg0) {
    extern s32 lbl_802EF4C8[];
    *(s32 *)((u8 *)arg0 + 0xC) = lbl_802EF4C8[1];
}

void *fn_80074DDC(void) {
    extern u8 lbl_8026C0B8[];
    return &lbl_8026C0B8[0x191];
}

s32 fn_80074DEC(u8 arg2) {
    u8 fn_8001C0C8();
    u32 *fn_80037BD0(s32, u8);
    extern M2C_UNK lbl_802EF4C8;
    if ((u32) *fn_80037BD0(M2C_FIELD(&lbl_802EF4C8, s32 *, 4), arg2) == 0U) {
        return 3;
    }
    return 2 & -((fn_8001C0C8() == 0) & 1);
}

void fn_80074E4C(void **arg0, void *arg2) {
    M2C_UNK fn_80037BD0(s32, u8);
    M2C_UNK fn_8008D510(s32, s16, s16);
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    fn_80037BD0(M2C_FIELD(&lbl_802EF4C8, s32 *, 4), M2C_FIELD(arg2, u8 *, 0x3A));
    fn_8008D510(M2C_FIELD(arg2, u8 *, 0x39) == 0, M2C_FIELD(arg2, s16 *, 0x30), M2C_FIELD(arg2, s16 *, 0x32));
}

void fn_80074EDC(void *arg1) {
    extern s32 lbl_802EF4C8[];
    
    fn_80037BD0(lbl_802EF4C8[1], *(u8*)((char*)arg1 + 0x3A));
}

void fn_80074F0C(void *arg0) {
    extern s32 lbl_802EF4C8[];
    *(s32 *)((u8 *)arg0 + 0xC) = lbl_802EF4C8[1];
}

void fn_800752F4(void) {
    extern u8 lbl_8026C0B8;
    fn_8000E0E4((u8 *)&lbl_8026C0B8 + 0x1C8);
}

void fn_80075320(void) {
    extern u8 lbl_8026C0B8;
    fn_8000E0E4((u8 *)&lbl_8026C0B8 + 0x1D0);
}

s32 fn_8007534C(void) {
    extern u8 lbl_802EF4C8;
    *(u8 *)((u32)&lbl_802EF4C8 + 8) = 0;
    return 9;
}

void fn_80075364(void) {
    extern u8 lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x1D6);
}

void fn_80075390(void) {
    extern u8 lbl_8026C0B8;
    fn_8000E0E4((u8 *)&lbl_8026C0B8 + 0x1DC);
}

void fn_800753D4(void) {
    extern u16 lbl_8026C0B8[];
    u16* temp = &lbl_8026C0B8[0x3C6];
    fn_8000E0E4(temp);
}

void fn_80075400(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern u32 lbl_8026C0B8;
    void *ptr = &lbl_8026C0B8;
    ptr = (char *) ptr + 0x1E9;
    fn_8000E0E4(ptr);
}

void fn_80075444(void *arg0) {
    extern u32 lbl_8026C0B8[];
    void fn_8000E0E4(void *);
    fn_8000E0E4((void *) &lbl_8026C0B8[0x1A]);
}

void fn_800754B4(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x1F5);
}

s32 fn_800754E0(void) {
    return 1;
}

s32 fn_800754E8(void) {
    return 9;
}

s32 fn_8007551C(void) {
    return 1;
}

void fn_8007553C(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x212);
}

s32 fn_80075568(void) {
    return 0;
}

s32 fn_80075570(void) {
    return 6;
}

void fn_80075578(void) {
    extern u16 lbl_8026C0B8[];
    u16* var = &lbl_8026C0B8[0x21A];
    fn_8000E0E4(var);
}

s32 fn_800755A4(void) {
    M2C_UNK fn_800919D8();
    fn_800919D8();
    return 9;
}

s32 fn_800755F4(void) {
    return 1;
}

s32 fn_8007565C(void) {
    return 0;
}

void fn_80075878(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x220 / sizeof(u16)]);
}

void fn_800758A4(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x22A / sizeof(u16)]);
}

s32 fn_80075A9C(void *arg1, void *arg2) {
    s32 fn_8000E0E4(void *);
    M2C_UNK fn_80166AE8(s32, s32, s32, void *);
    extern M2C_UNK lbl_8026C0B8;
    extern M2C_UNK lbl_802EF4C8;
    s16 temp_r28;
    s16 temp_r30;
    s16 temp_r31;
    s32 temp_r29;
    void *temp_r27;

    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) != 0) {
        temp_r27 = M2C_FIELD(arg1, void **, 0x3C);
        temp_r31 = M2C_FIELD(arg2, s16 *, 0x32);
        temp_r28 = M2C_FIELD(arg2, s16 *, 0x30);
        temp_r29 = fn_8000E0E4(&lbl_8026C0B8 + 0x23C);
        temp_r30 = M2C_FIELD(M2C_FIELD(temp_r27, void **, 4), s16 (**)(void *), 0x60)(temp_r27);
        fn_80166AE8(M2C_FIELD(M2C_FIELD(temp_r27, void **, 4), s16 (**)(void *), 0x5C)(temp_r27) + temp_r28, temp_r30 + (temp_r31 - 0x3C), temp_r29, arg1);
        return 0;
    }
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0x28;
    return 6;
}

void fn_80075B54(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x244 / sizeof(u16)]);
}

void fn_80075B80(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x244 / sizeof(u16)]);
}

void fn_80075BAC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x25b]);
}

void fn_80075DAC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x514]);
}

void fn_80075DD8(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x52A]);
}

void fn_80075FB8(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x2B0 / sizeof(u16)]);
}

void fn_80075FE4(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x2B9 * 2]);
}

s32 fn_800760B8(void *arg2) {
    extern u16 lbl_802EF4C8;
    if ((u8) *(u8*)((u8*)arg2 + 0x39) != 0) {
        return 0x10;
    }
    *(u16*)((u8*)&lbl_802EF4C8 + 0x0) = 0x4;
    return 0x6;
}

s32 fn_80076148(void *arg2) {
    extern u16 lbl_802EF4C8;
    if (*(u8 *) ((char *) arg2 + 0x39) == 2) {
        return 0x10;
    }
    *(u8 *) ((char *) &lbl_802EF4C8 + 0xA) = *(u8 *) ((char *) arg2 + 0x3A);
    return 5;
}

s32 fn_80076380(void *arg0) {
    if (*(u8 *)((uintptr_t)arg0 + 0x39) == 2) {
        return 0x10;
    }
    return 5;
}

s32 fn_80076494(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

s32 fn_800766B0(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

void fn_80076740(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x586]);
}

void fn_8007676C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x592]);
}

s32 fn_800767FC(void) {
    extern u16 lbl_802EF4C8;
    *(u8 *)&lbl_802EF4C8 = 0x2E;
    return 5;
}

void fn_80076814(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x2D0 / sizeof(u16)]);
}

void fn_80076840(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x2DC / sizeof(u16)]);
}

void fn_80076910(void *arg2) {
    extern u16 lbl_802EF4C8[];
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 0) {
        M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0x1D;
    }
    return;
}

s32 fn_8007693C(void) {
    M2C_UNK fn_8004A224();
    M2C_UNK fn_800AA80C(s32);
    extern s32 lbl_802EF4C8;
    fn_800AA80C(lbl_802EF4C8);
    fn_8004A224();
    return 0;
}

s32 fn_80076970(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

void fn_80076994(void) {
    extern u16 lbl_8026C0B8[];
    s32 var = 0x2ef;
    fn_8000E0E4(&lbl_8026C0B8[var]);
}

void fn_800769C0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x5ea]);
}

void fn_80076B3C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x60a]);
}

void fn_80076B68(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x612]);
}

s32 fn_80076C38(void) {
    extern u16 lbl_802EF4C8;
    ((u8 *)&lbl_802EF4C8)[8] = 0x21;
    return 5;
}

void fn_80076C50(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0xc5c]);
}

void fn_80076C7C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x636]);
}

s32 fn_80076D4C(void) {
    extern u16 lbl_802EF4C8;
    *(u8 *)((u32)&lbl_802EF4C8 + 8) = 0x22;
    return 5;
}

void fn_80076D64(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern u16 lbl_8026C0B8[];
    
    fn_8000E0E4((void *) (lbl_8026C0B8 + 0x652));
}

void fn_80076D90(void) {
    extern u16 lbl_8026C0B8[];
    s32 offset = 0x332; // Trying to match the instruction directly, using exact value from target
    fn_8000E0E4(&lbl_8026C0B8[offset]);
}

s32 fn_80076E9C(void) {
    extern u16 lbl_802EF4C8;
    *(u8 *)((u32)&lbl_802EF4C8 + 8) = 6;
    return 5;
}

void fn_80076F28(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x33C]);
}

void fn_80076F54(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0xD24]);
}

void fn_80077008(void) {
    M2C_UNK fn_80007668(s32 *);
    s32 *fn_8018D900(M2C_UNK);
    s32 sp8;

    sp8 = *fn_8018D900(6);
    fn_80007668(&sp8);
}

void fn_80077074(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x1A9]);
}

void fn_800770A0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0xD74]);
}

void fn_800771BC(void) {
    extern u16 lbl_8026C0B8[];
    M2C_UNK fn_8000E0E4(void *);
    fn_8000E0E4(&lbl_8026C0B8[0x366 / sizeof(u16)]);
}

void fn_800771E8(void) {
    extern u16 lbl_8026C0B8[];
    M2C_UNK fn_8000E0E4(void *);
    fn_8000E0E4(&lbl_8026C0B8[0x36E / sizeof(u16)]);
}

void fn_800772EC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x6EE]);
}

void fn_80077318(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x702]);
}

s32 fn_800773C8(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x11;
    return 5;
}

void fn_800773E0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x702]);
}

void fn_8007740C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0xE50]);
}

void fn_800774DC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x73A]);
}

void fn_80077508(void) {
    extern u16 lbl_8026C0B8[];
    u16 *ptr = &lbl_8026C0B8[0x3A6];
    fn_8000E0E4(ptr);
}

void fn_80077534(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x3AE]);
}

s32 fn_80077560(void) {
    return 0xB;
}

void fn_80077568(s8 *arg0) {
    *arg0 = 2;
}

void fn_80077694(s8 *arg0) {
    *arg0 = 1;
}

s32 fn_800777D4(void) {
    return 0xC;
}

void fn_800777DC(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x3B6);
}

void fn_80077808(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x3BE);
}

void fn_80077834(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x3C7);
}

void fn_80077860(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x3CF);
}

void fn_8007788C(void) {
    extern s32 lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x3D9);
}

s32 fn_800778B8(void) {
    u8 fn_800BE968(M2C_UNK, u8, u8);
    extern M2C_UNK lbl_802EF4C8;
    if ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0x12) != 0) {
        return 3;
    }
    return 3 & -((fn_800BE968(9, M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), u8 *, 0x19E), M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), u8 *, 0x19F)) == 0) & 1);
}

s32 fn_8007791C(void) {
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 9;
    return 5;
}

s32 fn_80077934(void) {
    return 0;
}

void fn_8007793C(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x3E4);
}

void fn_80077968(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x3EE);
}

s32 fn_80077994(void) {
    M2C_UNK fn_8002B2E8();
    extern M2C_UNK lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    if (M2C_FIELD(&lbl_802EF4C8, u8 *, 0x16) & 4) {
        return 3;
    }
    if ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0x12) != 0) {
        return 3;
    }
    if (M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), s32 *, 0x1A0) & 2) {
        return 3;
    }
    fn_8002B2E8();
    return 3 & ~((s32) (-lbl_802EF4E0 | lbl_802EF4E0) >> 0x1F);
}

s32 fn_80077A18(void) {
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0x1C;
    return 5;
}

s32 fn_80077A30(void) {
    return 0;
}

void fn_80077A38(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x3F6);
}

void fn_80077A64(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x3FF]);
}

s32 fn_80077B24(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x1B;
    return 5;
}

void *fn_80077B3C(void) {
    extern u16 lbl_8026C0B8[];
    return (void*)((uintptr_t)&lbl_8026C0B8 + 0x408);
}

s32 fn_80077B4C(void) {
    return 0;
}

void fn_80077B54(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x410 / sizeof(u16)]);
}

void fn_80077B80(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x418 / sizeof(u16)]);
}

s32 fn_80077C64(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x10;
    return 5;
}

void *fn_80077C7C(void) {
    extern u16 lbl_8026C0B8[];
    return (void*)((uintptr_t)&lbl_8026C0B8 + 0x421);
}

s32 fn_80077C8C(void) {
    return 0;
}

void fn_80077C94(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x2168]);
}

void fn_80077CC0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x21D]);
}

s32 fn_80077D70(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x1A;
    return 5;
}

void *fn_80077D88(void) {
    extern u8 lbl_8026C0B8[];
    return &lbl_8026C0B8[0x442];
}

s32 fn_80077D98(void) {
    return 0;
}

s32 fn_80077ED0(void) {
    extern u16 lbl_802EF4C8;
    lbl_802EF4C8 = 0x19;
    return 5;
}

void *fn_80077EE8(void) {
    extern u16 lbl_8026C0B8[];
    return (void*)((uintptr_t)&lbl_8026C0B8 + 0x478);
}

s32 fn_80077EF8(void) {
    return 0;
}

void fn_80077F2C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x490 / sizeof(u16)]);
}

s32 fn_80077FE0(void) {
    extern u16 lbl_802EF4C8;
    lbl_802EF4C8 = 0x14;
    return 5;
}

void *fn_80077FF8(void) {
    extern u16 lbl_8026C0B8[];
    return (void*)((uintptr_t)&lbl_8026C0B8 + 0x498);
}

s32 fn_800780E8(void) {
    extern u16 lbl_802EF4C8;
    *(u8 *)((u8 *)&lbl_802EF4C8 + 8) = 0x11;
    return 5;
}

s32 fn_80078420(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

void fn_8007849C(void) {
    extern u16 lbl_802EF4C8;
    *((u8*)&lbl_802EF4C8 + 8) = 0x15;
}

s32 fn_80078618(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

s32 fn_80078694(void) {
    extern u16 lbl_802EF4C8;
    ((u8*)&lbl_802EF4C8)[8] = 0x27;
    return 5;
}

s32 fn_800786AC(void) {
    void *fn_8001CB64();
    M2C_UNK fn_8002BEFC(s32, u32);
    u32 *fn_80037BBC(s32, s32);
    u8 fn_8009339C(s32, u32);
    extern M2C_UNK lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    s32 var_r30;
    u32 *temp_r3;
    void *temp_r3_2;

    if ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0x12) != 0) {
        return 3;
    }
    var_r30 = 0;
loop_3:
    temp_r3 = fn_80037BBC(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), var_r30);
    if ((u32) *temp_r3 != 0U) {
        temp_r3_2 = fn_8001CB64();
        if (((((M2C_FIELD(temp_r3_2, s32 *, 4) & 1) ^ 0) | ((M2C_FIELD(temp_r3_2, s32 *, 0) & 0) ^ 0)) != 0) && (fn_8009339C(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), *temp_r3) != 0)) {
            fn_8002BEFC(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), *temp_r3);
            if ((s32) lbl_802EF4E0 != 0) {
                return 0;
            }
        }
        var_r30 += 1;
        if (var_r30 >= 4) {
            goto block_9;
        }
        goto loop_3;
    }
block_9:
    return 3;
}

s32 fn_800787F8(void) {
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0xF;
    return 5;
}

s32 fn_800789B4(void) {
    *(u8 *)((u32)&D_802EF4C8 + 8) = 2;
    return 5;
}

s32 fn_80078DE0(void) {
    *(u8 *)((u32)&D_802EF4C8 + 8) = 1;
    return 5;
}

s32 fn_80078E24(void *arg0) {
    fn_80006220((s16) ((u32) *M2C_FIELD(arg0, u32 **, 4) >> 0x10U));
    M2C_FIELD(arg0, u32 **, 4) = (u32 *) (M2C_FIELD(arg0, u32 **, 4) + 4);
    return 1;
}

s32 fn_80078E70(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80078E84(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80078E98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80078EAC(void *arg0) {
    u8 fn_80018A08(M2C_UNK);
    if (fn_80018A08(0) != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80078FF0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80079004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_800790CC(void) {
    return 0;
}

void fn_80079E08(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
}

void fn_80079F44(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
}

void fn_8007A198(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
}

void fn_8007A2A0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
}

void fn_8007ACCC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s16 *, 0x36) = 1;
    M2C_FIELD(arg0, s16 *, 0x34) = 1;
}

void fn_8007ACE4(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_r5 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) & 0xFFFFFF1F);
        M2C_FIELD(temp_r5, s16 *, 0x36) = 1;
    }
}

void fn_8007AD08(void *arg0, s16 arg1, s16 arg2) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x54);
    if (temp_r3 != NULL) {
        if (arg1 > 0) {
            M2C_FIELD(temp_r3, s16 *, 0x34) = arg1;
        }
        if (arg2 > 0) {
            M2C_FIELD(temp_r3, s16 *, 0x36) = arg2;
        }
    }
}

void fn_8007AD30(void *arg0, s32 arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_r5 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) & 0xFFFFFF1F);
        if ((s16) M2C_FIELD(temp_r5, s16 *, 0x36) != -1) {
            M2C_FIELD(temp_r5, s16 *, 0x36) = 1;
        }
        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) | arg1);
    }
}

void fn_8007AD6C(void *arg0) {
    extern u16 lbl_80312040[];
    void fn_8000C60C(void);

    if (arg0 != NULL) {
        s32 index = *(u8 *)((u8 *)arg0 + 0x40);
        u16 *ptr = &lbl_80312040[index * 2];
        if (*ptr != 0) {
            fn_8000C60C();
        }
        *ptr = 0;
    }
}

void fn_8007ADC8(s32 arg0) {
    M2C_UNK fn_8000C60C();
    extern M2C_UNK lbl_80312040;
    s32 temp_r30;

    temp_r30 = arg0 * 4;
    if ((u32) *(&lbl_80312040 + temp_r30) != 0U) {
        fn_8000C60C();
    }
    *(&lbl_80312040 + temp_r30) = 0;
}

void fn_8007AF00(void *arg0) {
    extern M2C_UNK lbl_80312040;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(*(&lbl_80312040 + (M2C_FIELD(arg0, s32 *, 0x30) * 4)), u8 *, 0x41);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) < (s32) M2C_FIELD(arg0, s32 *, 0x40)) {
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = 4;
}

void fn_8007B01C(void *arg0) {
    extern M2C_UNK lbl_80312040;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(*(&lbl_80312040 + (M2C_FIELD(arg0, s32 *, 0x60) * 4)), u8 *, 0x42);
}

void fn_8007B104(void *arg0) {
    extern u16 lbl_80312040[8];
    s32 temp_r5 = *(s32*)((char*)arg0 + 0x60);
    s32 temp_r4 = (s32)lbl_80312040;
    *(s32*)((char*)arg0 + 0x68) = 0;
    *(u8*)(temp_r4 + (temp_r5 << 2) + 0x42) = 0;
}

void fn_8007B128(void *arg0) {
    f32 fn_800067BC(M2C_UNK, f32, f32, f32, f32);
    M2C_UNK fn_8000C188(void *);
    s32 temp_r3;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x38) = fn_800067BC(5, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34), (f32) M2C_FIELD(arg0, s32 *, 0x3C), (f32) M2C_FIELD(arg0, s32 *, 0x38));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r3 == (s32) M2C_FIELD(arg0, s32 *, 0x38)) {
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r3 + 1);
}

void fn_8007C018(void *arg0) {
    M2C_UNK fn_80200270(s32);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        fn_80200270(*M2C_FIELD(arg0, s32 **, 0x34));
    }
}

s32 fn_8007C3F8(void) {
    extern s32 lbl_80367478;
    return lbl_80367478;
}

s32 fn_8007C400(void) {
    extern s32 lbl_8036747C;
    return lbl_8036747C;
}
#include "common.h"
#include "structs.h"

extern u8 lbl_802EF4C8[0x40];
extern u16 lbl_8026C0B8[];
extern u8 lbl_802EF4C8[];
extern void *fn_8001CB64(void);
extern void *fn_800285C0(void *);
extern u16 lbl_8026C0B8[];
