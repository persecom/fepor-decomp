/* Functions from 0x80074370 to 0x8007C534, found by decomp-toolkit. */
#include "common.h"

void fn_80074370(void *arg0) {
    extern s32 lbl_80367468;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) lbl_80367468;
}

s32 fn_8007485C(void) {
    return 0;
}

s32 fn_80074864(void) {
    return 0;
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

s32 fn_800754E0(void) {
    return 1;
}

s32 fn_800754E8(void) {
    return 9;
}

s32 fn_8007551C(void) {
    return 1;
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

s32 fn_80077934(void) {
    return 0;
}

s32 fn_80077A30(void) {
    return 0;
}

s32 fn_80077B4C(void) {
    return 0;
}

s32 fn_80077C8C(void) {
    return 0;
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

