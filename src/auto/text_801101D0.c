/* Functions from 0x801101D0 to 0x80120CC0, found by decomp-toolkit. */
#include "common.h"

u8 fn_80110220(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A7);
}

void fn_80112DFC(void *arg0, u8 arg1) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
    if (temp_r3 != NULL) {
        if (arg1 != 0) {
            *temp_r3 |= 0x80;
            return;
        }
        *temp_r3 &= 0xFFFFFF7F;
    }
}

u8 fn_80112F3C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A4);
}

void fn_80113648(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x128) = farg0;
}

f32 fn_80113650(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x128);
}

void fn_8011386C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14C) = -1;
}

s32 fn_80113878(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x19C) != 0;
}

u8 fn_8011388C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1B4);
}

void fn_801138E8(void *arg0) {
    M2C_UNK fn_801990A4(s32);
    fn_801990A4(M2C_FIELD(arg0, s32 *, 0x11C));
}

void fn_8011390C(void *arg0) {
    M2C_UNK fn_801990DC(s32);
    fn_801990DC(M2C_FIELD(arg0, s32 *, 0x11C));
}

u8 fn_80113F68(void *arg0) {
    extern f32 lbl_8036A184;
    return (u8) (lbl_8036A184 != M2C_FIELD(arg0, f32 *, 0x104));
}

s32 fn_80116604(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x11C);
}

void fn_8011660C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1B8) = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1B8) > 1) {
        M2C_FIELD(arg0, s8 *, 0x1A4) = 1;
        M2C_FIELD(arg0, s8 *, 0x1A5) = 1;
    }
}

s32 fn_80117CC0(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + arg1;
}

void fn_80117F1C(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    M2C_UNK fn_8013FEC0();
    fn_8013FEC0();
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x48));
}

void fn_801181D0(void) {
    M2C_UNK fn_80006198();
    M2C_UNK fn_80006220(M2C_UNK);
    fn_80006220(0xE);
    fn_80006198();
}

void fn_80118388(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_800A8400();
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_80118404(s32 arg0) {
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_8011843C(s32 arg0) {
    M2C_UNK fn_8013FED0();
    M2C_UNK fn_801AA120(s32);
    fn_8013FED0();
    fn_801AA120(arg0);
}

void fn_80118470(s32 arg0) {
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801184A8(s32 arg0) {
    M2C_UNK fn_8016B730(s32);
    fn_8013FED0();
    fn_8016B730(arg0);
}

void fn_8011AB98(void) {
    M2C_UNK fn_801620AC();
    M2C_UNK fn_8005C8B4();
    M2C_UNK fn_80162018();
    fn_801620AC();
    fn_8005C8B4();
    fn_80162018();
}

void fn_8011AE2C(void *arg0) {
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_80050C90(s32);
    fn_8003816C(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, u8 *, 0x58), M2C_FIELD(arg0, u8 *, 0x59));
    fn_80050C90(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_8011B2EC(void) {
    M2C_UNK fn_800F20E0();
    M2C_UNK fn_800F214C();
    fn_800F214C();
    fn_800F20E0();
}

void fn_8011B570(void) {

}

void fn_8011B574(void) {

}

s32 fn_8011B578(void) {
    return 0xB0;
}

s32 fn_8011B74C(void) {
    return 0x40;
}

u8 fn_8011B9B4(void) {
    extern u8 lbl_80367A48;
    return (u8) (lbl_80367A48 == 0x88);
}

u8 fn_8011BD44(void) {
    extern u8 lbl_80367A48;
    return (u8) (lbl_80367A48 == 0x86);
}

s32 fn_8011C5B4(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367A50;
    fn_800D758C(lbl_80367A50);
    return 0;
}

void fn_8011C9A8(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 0xEC) = arg1;
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xF4);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF8);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xEC);
    if (temp_r5 >= (s32) (temp_r6 + temp_r4)) {
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) ((temp_r5 - temp_r4) + 1);
        return;
    }
    if (temp_r5 < temp_r6) {
        M2C_FIELD(arg0, s32 *, 0xF4) = temp_r5;
    }
}

s32 fn_8011C9E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xEC);
}

s32 fn_8011C9EC(s32 arg0) {
    return arg0 + 0xAC;
}

void fn_8011CB18(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0xC8);
}

void fn_8011DCB4(void) {
    M2C_UNK fn_8008A290(M2C_UNK, M2C_UNK);
    fn_8008A290(2, 0x10B);
}

void fn_8011DCDC(void *arg0) {
    fn_8008A290(3, M2C_FIELD(arg0, s16 *, 0x68));
}

void fn_801207BC(void) {
    extern s32 lbl_80367110;
    extern u16 lbl_80367A58;
    lbl_80367A58 &= 0xFFFFFFFB;
    lbl_80367110 |= 2;
}

