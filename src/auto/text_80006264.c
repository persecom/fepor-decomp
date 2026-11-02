/* Functions from 0x80006264 to 0x80011968, found by decomp-toolkit. */
#include "common.h"

s32 fn_800067B4(void) {
    extern s32 lbl_80367118;
    return lbl_80367118;
}

void fn_80009B80(s8 arg0) {
    extern void *lbl_80367140;
    M2C_FIELD(lbl_80367140, s8 *, 0x24) = arg0;
}

void fn_8000A280(void) {

}

void fn_8000A3F8(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) (M2C_FIELD(arg0, u8 *, 0x2E) - 1);
}

u8 fn_8000A418(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2E);
}

s32 fn_8000ACD8(void) {
    return 0;
}

void fn_8000B4D0(void) {

}

void fn_8000C060(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

void fn_8000C068(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_8000C188(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void fn_8000CD80(s32 arg0) {
    extern s32 lbl_80367158;
    lbl_80367158 = arg0;
}

s32 fn_800113B4(void) {
    return 0;
}

s32 fn_800113BC(void) {
    return 0;
}

