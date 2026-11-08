// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801F18D4(void) {
    extern u32 lbl_80339270[];
    extern u32 fn_801F196C;
    extern u8 lbl_802845E8[];
    extern u8 lbl_803392B8[];
    extern u8 lbl_80286664[];
    extern u8 lbl_802863BC[];
    extern u8 lbl_802866E4[];
    extern u8 lbl_802861E4[];
    extern u8 lbl_8029A758[];
    extern u8 lbl_8029A7F4[];
    
    fn_8022C260(lbl_80339270, &fn_801F196C, 0, 8, 9);
    *(u32**)(lbl_803392B8 + 4) = (u32*)lbl_802845E8;
    *(u32**)(lbl_803392B8 + 4) = (u32*)lbl_80286664;
    *(u32**)(lbl_803392B8 + 4) = (u32*)lbl_802863BC;
    *(u32**)(lbl_803392B8 + 4) = (u32*)lbl_802866E4;
    *(u32**)(lbl_803392B8 + 4) = (u32*)lbl_802861E4;
    *(u32**)(lbl_803392B8 + 0) = (u32*)lbl_8029A758;
    *(u32**)(lbl_803392B8 + 4) = (u32*)lbl_8029A7F4;
}
