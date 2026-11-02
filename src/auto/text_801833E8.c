/* Functions from 0x801833E8 to 0x801A2AB4, found by decomp-toolkit. */
#include "common.h"

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

s32 fn_8018361C(void) {
    return 4;
}

s32 fn_801837CC(void) {
    return 3;
}

s32 fn_8018386C(void) {
    return 0;
}

s32 fn_801838CC(void) {
    return 1;
}

s32 fn_8018394C(void) {
    return 2;
}

void fn_80185060(void *arg0, void *arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == (u32) M2C_FIELD(arg1, u32 *, 0x30)) {
        M2C_FIELD(arg1, void **, 0x34) = arg0;
    }
}

void fn_8018548C(void *arg0) {
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 0xB);
}

void fn_801854B4(void *arg0) {
    M2C_UNK fn_8004B1B4(s32);
    fn_8004B1B4(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_8018B004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}

void fn_8018B698(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

void fn_8018CB7C(void) {
    M2C_UNK fn_8018CCB8();
    fn_8018CCB8();
}

void fn_801908B4(void) {

}

void fn_80190F14(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_80193E58(void) {

}

void fn_80193F3C(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_80194174(void) {

}

void fn_80195170(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 4) = arg1;
}

void fn_80195880(void *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 1;
}

void fn_80196794(void) {
    M2C_UNK fn_8003D538();
    fn_8003D538();
}

void fn_80196840(void) {

}

void fn_80196844(void) {

}

void fn_801985F0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
}

s32 fn_801992F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x128);
}

s32 fn_80199310(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x124);
}

void fn_8019D4F4(void *arg0) {
    M2C_UNK fn_8004FC70(s32, M2C_UNK);
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 5);
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

void fn_8019E5B0(void) {
    M2C_UNK fn_8000A274(M2C_UNK);
    fn_8000A274(0);
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

s32 fn_8019ED74(void) {
    return 1;
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

s32 fn_8019FE2C(void) {
    M2C_UNK fn_800C0658();
    M2C_UNK fn_800177E0();
    fn_800C0658();
    fn_800177E0();
    return 1;
}

void fn_801A06CC(void) {
    M2C_UNK fn_8003BE50();
    fn_8003BE50();
}

