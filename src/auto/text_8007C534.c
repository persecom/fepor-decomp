// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
#include "global.h"

extern u8 lbl_802845E8[128];
extern u8 lbl_80288F9C[76];
extern u8 lbl_80288CC0[76];
extern u8 lbl_80288F50[76];
extern u8 lbl_80288F04[76];
extern void *lbl_8036748C;
extern void *lbl_80367490;
extern void *lbl_80367494;
extern void *lbl_80367498;
extern void *lbl_8036749C;
extern void *lbl_803674A0;
extern void *lbl_803674A4;
extern void *lbl_803674A8;
extern void *lbl_803674AC;
extern void *lbl_803674B0[2];
extern u8 lbl_80288EB8[76];
extern u8 lbl_80288E6C[76];
extern u8 lbl_80288E20[76];
extern u8 lbl_80288DD4[76];
extern u8 lbl_80288D88[76];
extern u8 lbl_80288C68[40];
extern u8 lbl_80288D0C[128];

void fn_8007C534(void) {
    void **p;
    void *v;

    p = lbl_803674B0;
    p[1] = lbl_802845E8;
    v = lbl_80288CC0;
    lbl_8036748C = v;
    lbl_80367490 = lbl_80288F9C;
    lbl_80367494 = lbl_80288F50;
    lbl_80367498 = lbl_80288F04;
    lbl_8036749C = lbl_80288EB8;
    lbl_803674A0 = lbl_80288E6C;
    lbl_803674A4 = lbl_80288E20;
    lbl_803674A8 = lbl_80288DD4;
    lbl_803674AC = lbl_80288D88;
    lbl_803674B0[0] = lbl_80288C68;
    p[1] = lbl_80288D0C;
}

#pragma section "ctors"
__declspec(section "ctors") void *const lbl_80267AB8 = fn_8007C534;
