/* Functions from 0x800A39F8 to 0x800A9384, found by decomp-toolkit. */
#include "common.h"
extern u8 lbl_8028C750[16];


void *fn_800A3A30(void) {
    extern u8 lbl_8026E168[];
    return &lbl_8026E168[0x2E];
}

s32 fn_800A45C4(void) {
    M2C_UNK fn_8020F334(M2C_UNK *);
    extern M2C_UNK lbl_803123A0;
    if (((s32) M2C_FIELD(&lbl_803123A0, s32 *, 0xA0) != 0) && ((u8) M2C_FIELD(&lbl_803123A0, u8 *, 0xA5) == 0)) {
        M2C_FIELD(&lbl_803123A0, s8 *, 0xA4) = 0;
        if ((u32) M2C_FIELD(&lbl_803123A0, u32 *, 0xB0) != 0U) {
            fn_8020F334(&lbl_803123A0);
            M2C_FIELD(&lbl_803123A0, u32 *, 0xB0) = 0U;
        }
        if (0 < 0xA) {
            M2C_FIELD(&lbl_803123A0, s32 *, 0xDC) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0xE8) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0xF4) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x100) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x10C) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x118) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x124) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x130) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x13C) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x148) = 0;
        }
        M2C_FIELD(&lbl_803123A0, s32 *, 0x164) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x170) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x17C) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x158) = -1;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xA8) = (s32) M2C_FIELD(&lbl_803123A0, s32 *, 0x64);
        M2C_FIELD(&lbl_803123A0, s32 *, 0xBC) = (s32) M2C_FIELD(&lbl_803123A0, s32 *, 0x54);
        M2C_FIELD(&lbl_803123A0, s32 *, 0xB8) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xC0) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xAC) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xB4) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x180) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x184) = 0;
        M2C_FIELD(&lbl_803123A0, f32 *, 0xC4) = (f32) M2C_FIELD(&lbl_803123A0, f32 *, 0xC8);
        M2C_FIELD(&lbl_803123A0, s32 *, 0xD0) = 0;
        return 1;
    }
    return 0;
}

void fn_800A4FF8(void) {
    s32 OSDisableInterrupts();
    M2C_UNK OSRestoreInterrupts(s32);
    M2C_UNK fn_8021371C(u32);
    extern s32 lbl_803677B0;
    extern u32 lbl_803677B8;
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    if ((u32) lbl_803677B8 != 0U) {
        fn_8021371C(lbl_803677B8);
    }
    OSRestoreInterrupts(temp_r31);
    lbl_803677B0 = 0;
}

void fn_800A57D8(void) {
    M2C_UNK fn_80220428(M2C_UNK);
    M2C_UNK fn_80222334(M2C_UNK);
    M2C_UNK fn_802239D0(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223D94(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223DDC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802240C8(M2C_UNK);
    M2C_UNK fn_802245D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80224684(M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80224684(1, 7, 1);
    fn_802245D8(0, 1, 0, 0xF);
    fn_80220428(1);
    fn_80222334(0);
    fn_802240C8(1);
    fn_80223F2C(0, 0, 0, 0xFF);
    fn_802239D0(0, 3);
    fn_80223D94(0, 0, 0);
    fn_80223D94(1, 0, 0);
    fn_80223D94(2, 0, 0);
    fn_80223D94(3, 0, 0);
    fn_80223DDC(0, 0, 1, 2, 3);
    fn_80223DDC(1, 0, 0, 0, 3);
    fn_80223DDC(2, 1, 1, 1, 3);
    fn_80223DDC(3, 2, 2, 2, 3);
}

void fn_800A5944(s32 arg0) {
    M2C_UNK fn_8006EDA0(s32);
    fn_8006EDA0(arg0 + 0x34);
}

void fn_800A5BB4(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    s32 fn_8005C6A0(s32);
    M2C_UNK fn_8006EEFC(s32, s32);
    if (fn_8005C6A0(arg0 + 0x44) & 0x2000) {
        fn_8006EEFC(arg0 + 0x34, arg0 + 0x44);
        fn_8000C188(arg0);
    }
}

void fn_800A5CF4(void) {
    M2C_UNK fn_800A3A68(M2C_UNK, M2C_UNK);
    fn_800A3A68(0, 0x64);
}

s32 fn_800A65D4(s32 arg0) {
    u8 fn_80105BC0(s32, M2C_UNK);
    if (fn_80105BC0(arg0 + 0x1BC, 8) == 0) {
        return 0;
    }
    return fn_80105BC0(arg0 + 0x1BC, 9) == 0;
}

s32 fn_800A66B4(void) {
    s32 fn_801044E0(s32);
    extern s32 lbl_802EF4C8;
    extern u8 lbl_80367289;
    u8 temp_r0;
    u8 var_r4;

    var_r4 = 1;
    temp_r0 = lbl_80367289 - 1;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r4 = 0;
    }
    if (var_r4 == 0) {
        return 0;
    }
    return fn_801044E0(lbl_802EF4C8 + 0x1A4);
}

s32 fn_800A6850(void *arg0) {
    return (((u8) M2C_FIELD(arg0, u8 *, 0x1A4) >> 5U) & 7) != 0;
}

s32 fn_800A68D8(void *arg0) {
    s8 fn_8003B2D0();
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 0x1A8);
    return (s8) temp_r31 < fn_8003B2D0();
}

s32 fn_800A6990(void *arg0) {
    s8 fn_8003B2D0();
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 0x1A8);
    return (s8) temp_r31 < fn_8003B2D0();
}

void fn_800A6AE4(void) {
    u32 temp_r3 = fn_8000C0C0(lbl_8028C750);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 4);
    }
}

extern u8 lbl_8028C750[16];
void fn_800A6B1C(void) {
    fn_8000BF00(&lbl_8028C750);
}

void fn_800A6FB8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x39) = 0;
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x36) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_800A7EC0(void) {

}

void fn_800A828C(s32 arg0) {
    fn_8006EDA0(arg0 + 0x30);
}

void fn_800A82B0(void *arg0) {
    s32 fn_800067B4();
    M2C_UNK fn_800076AC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80007770(s32, f32, f32, f32, f32);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007870(f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_80009F90(s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369B60;
    extern f32 lbl_80369B64;
    extern f32 lbl_80369B68;
    extern f32 lbl_80369B6C;
    extern f32 lbl_80369B70;
    extern f32 lbl_80369B74;
    extern f32 lbl_80369B78;
    extern f32 lbl_80369B7C;
    extern f32 lbl_80369B80;
    f32 temp_f2;
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (fn_800067B4() & 0x3FF);
    fn_8000A258();
    fn_80009D74(lbl_80369B60, lbl_80369B60, lbl_80369B64, lbl_80369B68);
    fn_80009F90(M2C_FIELD(arg0, s32 *, 0x30), 0, 0);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369B60, lbl_80369B60, lbl_80369B6C, lbl_80369B70);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_f2 = lbl_80369B74 * (f32) temp_r3;
    fn_80007770(temp_r3, lbl_80369B60, temp_f2, lbl_80369B68, lbl_80369B78 + temp_f2);
    fn_80007870(lbl_80369B7C);
    fn_80007884();
    fn_8000A258();
    fn_80009F90(M2C_FIELD(arg0, s32 *, 0x30), 1, 0x30);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369B60, lbl_80369B60, lbl_80369B6C, lbl_80369B70);
    fn_800076AC(0x32, 0x32, 0x32, 0);
    fn_80007870(lbl_80369B80);
    fn_80007884();
}

void fn_800A8400(void) {
    M2C_UNK fn_8009A514();
    M2C_UNK fn_800A6A3C();
    M2C_UNK fn_8018DB4C();
    fn_8009A514();
    fn_800A6A3C();
    fn_8018DB4C();
}

void fn_800A8428(void) {
    M2C_UNK fn_8009A54C();
    M2C_UNK fn_800A6A74();
    M2C_UNK fn_8018DB90();
    fn_8009A54C();
    fn_800A6A74();
    fn_8018DB90();
}

void fn_800A8450(void) {
    M2C_UNK fn_8009A584();
    M2C_UNK fn_800A6AAC();
    M2C_UNK fn_8018DC18();
    fn_8009A584();
    fn_800A6AAC();
    fn_8018DC18();
}

void fn_800A8478(void) {
    M2C_UNK fn_8009A5BC();
    M2C_UNK fn_800A6AE4();
    M2C_UNK fn_8018DC58();
    fn_8009A5BC();
    fn_800A6AE4();
    fn_8018DC58();
}

void fn_800A84A0(void) {
    M2C_UNK fn_8009A5F4();
    M2C_UNK fn_800A6B1C();
    M2C_UNK fn_8018DC98();
    fn_8009A5F4();
    fn_800A6B1C();
    fn_8018DC98();
}

void fn_800A84C8(s32 arg0) {
    M2C_UNK fn_8018DCC0(s32);
    M2C_UNK fn_800A6B44(s32);
    M2C_UNK fn_8009A61C();
    fn_8009A61C();
    fn_800A6B44(arg0);
    fn_8018DCC0(arg0);
}

s32 fn_800A8978(void *arg0) {
    s32 fn_8000E0E4(s32);
    if (fn_8000D354(M2C_FIELD(arg0, s32 *, 4)) != 0U) {
        return fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
    }
    return M2C_FIELD(arg0, s32 *, 0);
}

s32 fn_800A8A00(s32 *arg0) {
    s32 strchr(s32, M2C_UNK);
    return strchr(*arg0, 0x5F) + 1;
}

void fn_800A8A64(void *arg0) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 8));
}

void fn_800A90B4(void) {
    M2C_UNK fn_80148618(void *, M2C_UNK);
    extern M2C_UNK lbl_8026E470;
    fn_80148618(&lbl_8026E470 + 0x73, 0x1F4);
}

void fn_800A90E4(s32 arg0) {
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_8026E470;
    extern void *lbl_80367240;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3) & 0x1F70) {
        fn_801475FC(&lbl_8026E470 + 0x82, 0x64);
        fn_8000C188(arg0);
    }
}

void fn_800A9274(s32 arg0) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803677EC;
    fn_80024398(&lbl_803677EC, arg0, 0);
}

void fn_800A92A0(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_800A92C4(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 0);
}
#include "common.h"
extern u16 lbl_8026E168;
