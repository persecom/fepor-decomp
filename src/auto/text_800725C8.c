/* Functions from 0x800725C8 to 0x800732BC, found by decomp-toolkit. */
#include "common.h"

void fn_80072CB0(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

void fn_8007303C(s32 arg0) {
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    s32 fn_800EB774();
    s32 temp_r3;

    temp_r3 = fn_800EB774();
    switch (temp_r3) {                              /* irregular */
    case 0:
    case -66:
        fn_8000C070(arg0, 1);
        return;
    case -3:
        fn_8000C070(arg0, 2);
        return;
    case -2:
        fn_8000C070(arg0, 3);
        return;
    case -6:
    case -13:
        fn_8000C070(arg0, 4);
        return;
    case -5:
        fn_8000C070(arg0, 5);
        return;
    case -65:
        fn_8000C070(arg0, 6);
        return;
    case -128:
        fn_8000C070(arg0, 7);
        return;
    case -4:
    case -64:
        fn_8000C070(arg0, 8);
        return;
    default:
        fn_8000C070(arg0, 7);
        return;
    }
}

void fn_80073164(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}
