// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8005ADE4(void) {
    extern u16 lbl_80285C18[36];
    extern u16 lbl_802F0308[36];
    extern u16 lbl_802F0350[36];
    extern u16 lbl_80285CCC[38];
    extern u16 lbl_80285C84[36];

    s32 r7 = (s32)lbl_80285C18;
    s32 r6 = (s32)lbl_802F0308;
    s32 r5 = (s32)lbl_802F0350;
    
    lbl_802F0308[22] = (u16)r7;
    lbl_802F0350[22] = (u16)r7;
    lbl_802F0308[22] = (u16)r5;
    lbl_802F0350[22] = (u16)r6;
}
