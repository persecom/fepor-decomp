// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80183374(void) {
    extern u8 lbl_802845E8[128];
    extern u8 lbl_80286664[128];
    extern u8 lbl_80295770[24];
    extern u8 lbl_802957C8[128];
    extern u8 lbl_80295848[88];
    extern u8 lbl_802958A0[88];
    extern u8 lbl_802958F8[88];
    extern u8 lbl_80295950[88];
    extern u8 lbl_802959A8[88];
    extern u32 *lbl_803681F4;
    extern u32 *lbl_803681F8;
    extern u32 *lbl_803681FC;
    extern u32 *lbl_80368200;
    extern u32 *lbl_80368204;
    extern u32 *lbl_80368208;

    u32 *r10 = lbl_80368208;
    u32 r0;
    
    r0 = (u32)&lbl_802845E8;
    r10[1] = r0;
    r0 = (u32)&lbl_80286664;
    r10[1] = r0;
    
    r0 = (u32)&lbl_802959A8;
    *lbl_803681F4 = r0;
    r0 = (u32)&lbl_80295950;
    *lbl_803681F8 = r0;
    r0 = (u32)&lbl_802958F8;
    *lbl_803681FC = r0;
    r0 = (u32)&lbl_802958A0;
    *lbl_80368200 = r0;
    r0 = (u32)&lbl_80295848;
    *lbl_80368204 = r0;
    r0 = (u32)&lbl_80295770;
    r10[0] = r0;
    r0 = (u32)&lbl_802957C8;
    r10[1] = r0;
}
