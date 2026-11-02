/* Functions from 0x800A39F8 to 0x800A9384, found by decomp-toolkit. */
#include "common.h"

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

