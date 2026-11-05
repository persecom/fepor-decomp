/* Functions from 0x80074370 to 0x8007C534, found by decomp-toolkit. */
#include "common.h"
#include "structs.h"

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
    void *temp_r3;
    
    temp_r3 = (char*)lbl_802EF4C8 + 4;
    fn_80037BD0(*(s32*)temp_r3, *(u8*)((char*)arg1 + 0x3A));
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

void fn_80075400(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern u32 lbl_8026C0B8;
    void *ptr = &lbl_8026C0B8;
    ptr = (char *) ptr + 0x1E9;
    fn_8000E0E4(ptr);
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

void fn_80077008(void) {
    M2C_UNK fn_80007668(s32 *);
    s32 *fn_8018D900(M2C_UNK);
    s32 sp8;

    sp8 = *fn_8018D900(6);
    fn_80007668(&sp8);
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

s32 fn_80077B4C(void) {
    return 0;
}

s32 fn_80077C8C(void) {
    return 0;
}

void *fn_80077D88(void) {
    extern u8 lbl_8026C0B8[];
    return &lbl_8026C0B8[0x442];
}

s32 fn_80077D98(void) {
    return 0;
}

s32 fn_80077EF8(void) {
    return 0;
}

s32 fn_80078420(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

s32 fn_80078618(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
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

s32 fn_80078E24(void *arg0) {
    fn_80006220((s16) ((u32) *M2C_FIELD(arg0, u32 **, 4) >> 0x10U));
    M2C_UNK fn_80006220(s16);
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
    M2C_UNK fn_8000C60C();
    extern M2C_UNK lbl_80312040;
    s32 temp_r30;

    if (arg0 != NULL) {
        temp_r30 = M2C_FIELD(arg0, u8 *, 0x40) * 4;
        if ((u32) *(&lbl_80312040 + temp_r30) != 0U) {
            fn_8000C60C();
        }
        *(&lbl_80312040 + temp_r30) = 0;
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

