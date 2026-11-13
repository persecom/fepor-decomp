// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80183374(void) {
    extern u8 lbl_802845E8[];
    extern u8 lbl_80286664[];
    extern u8 lbl_80295770[];
    extern u8 lbl_802957C8[];
    extern u8 lbl_80295848[];
    extern u8 lbl_802958A0[];
    extern u8 lbl_802958F8[];
    extern u8 lbl_80295950[];
    extern u8 lbl_802959A8[];
    extern void *lbl_803681F4;
    extern void *lbl_803681F8;
    extern void *lbl_803681FC;
    extern void *lbl_80368200;
    extern void *lbl_80368204;
    extern void *lbl_80368208;

    (&lbl_80368208)[1] = &lbl_802845E8;
    (&lbl_80368208)[1] = &lbl_80286664;
    lbl_803681F4 = &lbl_802959A8;
    lbl_803681F8 = &lbl_80295950;
    lbl_803681FC = &lbl_802958F8;
    lbl_80368200 = &lbl_802958A0;
    lbl_80368204 = &lbl_80295848;
    lbl_80368208 = &lbl_80295770;
    (&lbl_80368208)[1] = &lbl_802957C8;
}
