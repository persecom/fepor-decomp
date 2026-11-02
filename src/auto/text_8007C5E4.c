/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"

s32 fn_8007C65C(void) {
    extern void *lbl_80367488;
    void *temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367488, void **, 0x54);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x36) = 7;
    }
    return 0;
}

void fn_8007CCE8(void) {
    M2C_UNK fn_80087F50();
    fn_80087F50();
}

void fn_8007CF98(void) {
    M2C_UNK fn_8007F844();
    fn_8007F844();
}

void fn_8007CFB8(void) {
    M2C_UNK fn_80082298();
    fn_80082298();
}

void fn_8007D004(void) {
    M2C_UNK fn_80086020();
    fn_80086020();
}

void fn_8007D7E8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

void fn_8007DAB4(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

u16 fn_80089634(void) {
    extern void *lbl_803674E4;
    return M2C_FIELD(lbl_803674E4, u16 *, 0x32);
}

void fn_80089970(void) {
    extern void *lbl_803674EC;
    M2C_FIELD(lbl_803674EC, s16 *, 0x32) = 0;
}

u16 fn_8008A56C(void) {
    extern void *lbl_803674E0;
    return M2C_FIELD(lbl_803674E0, u16 *, 0x32);
}

void fn_8008D834(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3A) = 0x10;
    M2C_FIELD(arg0, s8 *, 0x3B) = 0;
    M2C_FIELD(arg0, s8 *, 0x3C) = -1;
}

void fn_8008D850(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3A) = 0;
    M2C_FIELD(arg0, s8 *, 0x3B) = 0x10;
    M2C_FIELD(arg0, s8 *, 0x3C) = 1;
}

s32 fn_80098094(void) {
    extern s32 lbl_80367500;
    return lbl_80367500;
}

void fn_80098B74(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
}

