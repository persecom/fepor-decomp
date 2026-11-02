/* Functions from 0x800C40F4 to 0x801035C8, found by decomp-toolkit. */
#include "common.h"

void fn_800C5F78(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 4;
}

void fn_800C5F84(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 3;
}

void fn_800C5F90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 2;
}

void fn_800C5FFC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

M2C_UNK *fn_800C93EC(void *arg0) {
    extern M2C_UNK lbl_80369DC0;
    M2C_UNK *temp_r3;

    temp_r3 = M2C_FIELD(arg0, M2C_UNK **, 8);
    if (temp_r3 == NULL) {
        return &lbl_80369DC0;
    }
    return temp_r3;
}

s32 fn_800D3590(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    return temp_r4 & (M2C_FIELD(arg0, s32 *, 8) ^ temp_r4);
}

void fn_800D588C(s32 arg0) {
    extern s32 lbl_8036787C;
    lbl_8036787C = arg0;
}

void fn_800D67E4(void) {

}

void fn_800D67E8(void) {

}

s32 fn_800D6810(s32 arg0) {
    return arg0 + 4;
}

void fn_800D6874(void) {

}

void fn_800D7588(void) {

}

void fn_800DA330(void) {
    extern s8 lbl_803678BC;
    extern s8 lbl_803678BD;
    lbl_803678BC = 0;
    lbl_803678BD = 0;
}

s32 fn_800DA5FC(void) {
    extern void *lbl_803678B8;
    return M2C_FIELD(lbl_803678B8, s32 *, 0x10);
}

void fn_800DB520(void) {

}

void fn_800DB524(void) {

}

void fn_800DB528(void) {

}

void fn_800DB98C(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x6C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x70) = farg1;
    M2C_FIELD(arg0, f32 *, 0x74) = farg2;
}

void fn_800DB99C(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x60) = farg0;
    M2C_FIELD(arg0, f32 *, 0x64) = farg1;
    M2C_FIELD(arg0, f32 *, 0x68) = farg2;
}

void fn_800DB9AC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x54) = farg0;
    M2C_FIELD(arg0, f32 *, 0x58) = farg1;
    M2C_FIELD(arg0, f32 *, 0x5C) = farg2;
}

void fn_800DB9D8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x48) = farg0;
    M2C_FIELD(arg0, f32 *, 0x4C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x50) = farg2;
}

s32 fn_800DBEC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C);
}

void fn_800DBED0(void) {

}

void fn_800DBED4(void) {

}

void fn_800DC010(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
}

s32 fn_800DC018(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_800DC3B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x110);
}

s32 fn_800DC3B8(s32 arg0) {
    return arg0 + 0xAC;
}

s32 fn_800DC44C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB0);
}

void fn_800DEE90(void) {

}

void fn_800DEE94(void) {

}

s32 fn_800DEEBC(s32 arg0) {
    return arg0 + 4;
}

void fn_800DEEFC(void) {

}

void fn_800DF410(f32 *arg0, f32 *arg1) {
    *arg1 = *arg0;
}

void fn_800DF664(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
}

void fn_800DF670(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 1;
}

u8 fn_800DF6A8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

s32 fn_800DF6B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

void fn_800E2218(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
}

void fn_800E29E0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
}

s32 fn_800E2E50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_800E2E58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}

s32 fn_800E2E60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}

s32 fn_800E2E68(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

void fn_800E3F48(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
}

void fn_800E3F54(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 1;
}

void fn_800E4164(void) {

}

void fn_800E4168(void) {

}

void fn_800E416C(void) {

}

void fn_800E4170(void) {

}

void fn_800E4174(void) {

}

void fn_800E43E8(void) {

}

void fn_800E45CC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
}

s32 fn_800E4BD8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x114);
}

void fn_800E4C14(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x104) = farg0;
}

s32 fn_800E5068(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF8);
}

s32 fn_800E5690(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

s32 fn_800E56BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE0);
}

u8 fn_800E56C4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xD0);
}

void fn_800E56CC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xD0) = 0;
}

void fn_800E76D0(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
}

void fn_800E76D8(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3C) = arg1;
}

void fn_800E78DC(void) {

}

u8 fn_800E7C80(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

void fn_800E7C88(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 1;
}

s32 fn_800E8BB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2B4);
}

void fn_800E8BBC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2B4) = arg1;
}

void fn_800E8FAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
}

u8 fn_800E8FB4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xFD);
}

void fn_800E8FBC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0xF0) = farg0;
    M2C_FIELD(arg0, f32 *, 0xF4) = farg1;
    M2C_FIELD(arg0, f32 *, 0xF8) = farg2;
}

f32 fn_800E9018(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x104);
}

u8 fn_800E903C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xAC);
}

void fn_800E9044(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xAC) = 0;
}

void fn_800E9050(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xAC) = 1;
}

void fn_800EB558(void) {
    extern s32 lbl_80367110;
    lbl_80367110 &= 0xFFFFFEFF;
}

u8 fn_800F8308(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A8);
}

s16 fn_800F8310(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x2A2);
}

s16 fn_800F8318(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x29A);
}

s16 fn_800F8320(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x298);
}

s16 fn_800F833C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x29C);
}

s32 fn_800F8344(s32 arg0) {
    return arg0 + 0x2E0;
}

void fn_800F834C(void) {

}

void fn_800FC490(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x31) = 0;
}

s32 fn_800FC5F8(void) {
    extern s32 lbl_80367904;
    return lbl_80367904;
}

