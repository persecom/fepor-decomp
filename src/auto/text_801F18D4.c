// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801F18D4(void) {
    void fn_8022C260(void *, void (*)(void), void *, s32, s32);
    void fn_801F196C(void);
    extern u8 lbl_80339270[];
    extern u8 lbl_803392B8[];
    extern u8 lbl_802845E8[];
    extern u8 lbl_80286664[];
    extern u8 lbl_802863BC[];
    extern u8 lbl_802866E4[];
    extern u8 lbl_802861E4[];
    extern u8 lbl_8029A758[];
    extern u8 lbl_8029A7F4[];
    u32 *p;
    u32 a;
    u32 b;

    fn_8022C260(lbl_80339270, fn_801F196C, 0, 8, 9);
    a = (u32)lbl_802845E8;
    p = (u32 *)lbl_803392B8;
    p[1] = a;
    p[1] = (u32)lbl_80286664;
    p[1] = (u32)lbl_802863BC;
    a = (u32)lbl_802866E4;
    b = (u32)lbl_802861E4;
    p[1] = a;
    a = (u32)lbl_8029A758;
    p[1] = b;
    b = (u32)lbl_8029A7F4;
    p[0] = a;
    p[1] = b;
}
