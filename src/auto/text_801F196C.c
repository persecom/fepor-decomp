/* Functions from 0x801F196C to 0x801FC620, found by decomp-toolkit. */
#include "common.h"

void fn_801F1DC4(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0x30);
    *temp_r3 &= 0xFFFFFFFE;
}

void fn_801F1E78(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0x30);
    *temp_r3 |= 1;
}

void fn_801F1E8C(void *arg0) {
    M2C_UNK fn_8006EDA0(s32);
    M2C_UNK fn_800C4588(s32);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    fn_8006EDA0(temp_r31 + 0x4C);
    fn_800C4588(temp_r31);
}

void fn_801F5518(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

void fn_801F5BAC(void) {

}

void fn_801F5D08(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x4C) = 4;
}

void fn_801F892C(void) {
    M2C_UNK fn_8002D4B8();
    fn_8002D4B8();
}

void fn_801F9464(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void fn_801F9D1C(s32 arg0, s32 arg1) {
    void *fn_801F9D50(s32);
    M2C_FIELD(fn_801F9D50(arg1), s32 *, 0x48) = arg0;
}

void fn_801FC400(void) {

}

void fn_801FC404(void) {

}

s32 fn_801FC42C(s32 arg0) {
    return arg0 + 4;
}

void fn_801FC434(void) {

}

void fn_801FC438(void) {

}

