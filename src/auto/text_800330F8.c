/* Functions from 0x800330F8 to 0x80055C70, found by decomp-toolkit. */
#include "common.h"

void fn_800340E4(s16 *arg0) {
    *arg0 = 0;
}

void fn_80034120(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) + 1);
}

void fn_80037814(void) {

}

void fn_8003D5FC(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, u8 *, 0x199) = arg1;
    }
}

u8 fn_8003F1C0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 8);
}

s32 fn_8003F1C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x190);
}

s32 fn_8003F1D0(s32 *arg0, s32 arg1) {
    return *arg0 & arg1;
}

void fn_8003F1DC(s32 *arg0, s32 arg1) {
    *arg0 |= arg1;
}

void fn_8003F1EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x194) = arg1;
}

void fn_8003F1F4(s32 *arg0, s32 arg1) {
    *arg0 &= ~arg1;
}

s32 fn_8003F204(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x194);
}

u8 fn_8003F20C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19E);
}

u8 fn_8003F214(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19F);
}

s32 fn_8003F21C(s32 arg0) {
    return arg0 + 0x1A0;
}

s32 fn_80040844(void) {
    extern s32 lbl_803672AC;
    return lbl_803672AC;
}

void fn_8004084C(s32 arg0) {
    extern s32 lbl_803672AC;
    lbl_803672AC = arg0;
}

s32 fn_800431E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

f32 fn_80043DD8(void) {
    extern void *lbl_803672A8;
    return M2C_FIELD(lbl_803672A8, f32 *, 0x10) / M2C_FIELD(lbl_803672A8, f32 *, 8);
}

u8 fn_80047AF8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x61);
}

void fn_8004982C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x48);
}

s32 fn_80049D58(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 2) & 3) == 0;
}

s32 fn_80049D6C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 2) & 3) != 0;
}

s32 fn_80049E1C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_8004DC54(s8 arg0) {
    extern s8 lbl_803672BC;
    lbl_803672BC = arg0;
}

void fn_8004FE90(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 2) = arg1;
}

void fn_80052B44(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80052F90(void *arg0) {
    extern f32 lbl_80369084;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_80369084;
}

s32 fn_80052F9C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x2C), u8 *, 4) & 3;
}

void fn_800536CC(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x34) = arg1;
}

void fn_800536D8(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x30) = arg1;
}

void fn_80053D84(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) | 0x80000000);
}

