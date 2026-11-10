// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_800A39C4(void) {
    extern u8 lbl_8028C52C[];
    extern u8 lbl_802845E8[];
    extern u8 lbl_8028C4D8[];
    extern u8 lbl_80366E28[];
    extern void *lbl_803677A0;
    extern u8 lbl_803677A4[];
    extern void *lbl_803677AC;
    lbl_803677A0 = (void*)lbl_8028C52C;
    *(u32*)((u8*)lbl_803677A4 + 4) = (u32)lbl_802845E8;
    *(u32*)lbl_803677A4 = (u32)lbl_80366E28;
    lbl_803677AC = (void*)lbl_8028C4D8;
    return;
}
