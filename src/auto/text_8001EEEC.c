/* Functions from 0x8001EEEC to 0x80028864, found by decomp-toolkit. */
#include "common.h"

void fn_8001EF7C(void) {

}

s32 fn_8001FC34(s32 arg0) {
    return arg0 + 0x14194;
}

s32 fn_80022FC4(void) {
    return 0x2000;
}

void fn_80022FCC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14190) = arg1;
}

void fn_80023E18(void) {
    M2C_UNK fn_8000C188();
    fn_8000C188();
}

void fn_80023ED0(void) {
    extern s32 lbl_8036723C;
    lbl_8036723C += 1;
}

s32 fn_80024390(void) {
    return 0;
}

void fn_80024728(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
}

s32 fn_80025538(void) {
    return 0;
}

s32 fn_80025540(void) {
    return 5;
}

s32 fn_80025548(void) {
    return 0;
}

s32 fn_80025550(void) {
    return 0;
}

s32 fn_80025558(void) {
    return 0;
}

s32 fn_80025560(void) {
    return 0;
}

s32 fn_80025568(void) {
    return 0;
}

s32 fn_80025570(void) {
    return 0;
}

s32 fn_80025578(void) {
    return 0;
}

s32 fn_80025580(void) {
    return 0;
}

s32 fn_80025588(void) {
    return 1;
}

s32 fn_80025590(void) {
    return 0x10;
}

s32 fn_80025598(void) {
    return 0;
}

s32 fn_800255A0(void) {
    return 0x10;
}

void fn_800255B8(void) {

}

f32 fn_800255BC(void) {
    extern f32 lbl_80368DC0;
    return lbl_80368DC0;
}

s32 fn_800255C4(void) {
    return 0;
}

s32 fn_800255CC(void) {
    return 0;
}

void fn_800255D4(void) {

}

s32 fn_800255D8(void) {
    return 0;
}

s32 fn_800255E0(void) {
    return 0xC0;
}

void fn_800255E8(void) {

}

s32 fn_800255EC(void) {
    return 0;
}

s32 fn_80025604(void) {
    return 0;
}

s32 fn_8002560C(void) {
    return 0;
}

void fn_80025680(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) & ~arg1);
}

void fn_80025690(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | arg1);
}

void fn_800256A0(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = ~(arg1 | arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & temp_r4);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & temp_r4);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) & temp_r4);
}

void fn_80025FA4(void *arg0) {
    M2C_UNK fn_8003E8DC(s32);
    fn_8003E8DC(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_8002666C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}

void fn_80026F5C(void *arg0) {
    M2C_UNK fn_8012AA90(s32, s32, void *);
    fn_8012AA90((s32) M2C_FIELD(arg0, f32 *, 0x30), (s32) M2C_FIELD(arg0, f32 *, 0x34), arg0);
}

void fn_800281D8(void *arg0) {
    void *temp_r3;

    M2C_FIELD(arg0, s8 *, 0x12) = 1;
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r3, s32 *, 0x1A0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 0xFFFFFFFE);
}

void fn_8002846C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = -1;
    M2C_FIELD(arg0, s8 *, 0xC) = -1;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = -1;
    M2C_FIELD(arg0, s8 *, 0xD) = -1;
    M2C_FIELD(arg0, s8 *, 0xE) = -1;
    M2C_FIELD(arg0, s8 *, 0xF) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
}

void fn_8002863C(void) {

}

void fn_80028674(void) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
}

