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

void fn_8007CFD8(s32 *arg0) {
    M2C_UNK fn_8008563C(s32 *);
    s32 sp8;

    sp8 = *arg0;
    fn_8008563C(&sp8);
}

void fn_8007D004(void) {
    M2C_UNK fn_80086020();
    fn_80086020();
}

void fn_8007D024(void) {
    M2C_UNK fn_80086C14();
    fn_80086C14();
}

void fn_8007D044(void) {
    M2C_UNK fn_800875B4();
    fn_800875B4();
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

s32 fn_80089ED8(void) {
    extern void *lbl_803674E8;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(lbl_803674E8, u16 *, 0x32);
    if ((temp_r0 == 1) || (temp_r0 == 2)) {
        return 1;
    }
    return 0;
}

u16 fn_8008A56C(void) {
    extern void *lbl_803674E0;
    return M2C_FIELD(lbl_803674E0, u16 *, 0x32);
}

void fn_8008CD34(void) {
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
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

void fn_8008DA60(void) {
    M2C_UNK fn_8008DA80();
    fn_8008DA80();
}

void fn_8008F49C(void) {
    M2C_UNK fn_8008F4BC();
    fn_8008F4BC();
}

void fn_80092414(s32 arg0) {
    M2C_UNK fn_8001CBA0(s32);
    fn_8001CBA0(arg0 + 0x20C);
}

s32 fn_80098094(void) {
    extern s32 lbl_80367500;
    return lbl_80367500;
}

s32 fn_80098110(void) {
    extern void **lbl_80367504;
    void *temp_r3;

    if ((void **) lbl_80367504 == NULL) {
        return 0;
    }
    temp_r3 = *lbl_80367504;
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x280);
    }
    return 0;
}

void fn_80098B74(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
}

void fn_80098B80(void *arg0) {
    M2C_UNK fn_80095678();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_80095678();
    }
}

void fn_80098BAC(void *arg0) {
    M2C_UNK fn_800956A0();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_800956A0();
    }
}

void fn_80098BD8(void *arg0) {
    M2C_UNK fn_801B61CC();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_801B61CC();
    }
}

void fn_80098D04(s32 arg0) {
    M2C_UNK fn_8018CAD8(M2C_UNK, M2C_UNK, s32);
    fn_8018CAD8(0x64, 0x1E, arg0);
}

void fn_80099ED0(void *arg0) {
    M2C_UNK fn_80096418(s16);
    fn_80096418(M2C_FIELD(arg0, s16 *, 0x46));
}

void fn_80099EF4(void *arg0) {
    M2C_UNK fn_8017E35C();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_8017E35C();
    }
}

void fn_8009EA14(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EA90(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EB7C(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EC38(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009F000(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 0);
}

