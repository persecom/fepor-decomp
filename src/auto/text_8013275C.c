// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8013275C(void) {
    extern u8 lbl_802845E8[128];
    extern u8 lbl_802916E0[80];
    extern u8 lbl_80291694[76];
    extern u8 lbl_80291648[76];
    extern u8 lbl_802915FC[76];
    extern u8 lbl_802915B0[76];
    extern u8 lbl_80291564[76];
    extern u8 lbl_80291518[76];
    extern u8 lbl_80291428[32];
    extern u8 lbl_80291448[84];
    extern u8 lbl_8029149C[124];
    extern void *lbl_80367AA8;
    extern void *lbl_80367AAC;
    extern void *lbl_80367AB0;
    extern void *lbl_80367AB4;
    extern void *lbl_80367AB8;
    extern void *lbl_80367ABC;
    extern void *lbl_80367AC0;
    extern void *lbl_80367AC4[2];
    extern void *lbl_80367ACC;
    void **p;
    void *v;

    p = lbl_80367AC4;
    p[1] = lbl_802845E8;
    v = lbl_802916E0;
    lbl_80367AA8 = v;
    lbl_80367AAC = lbl_80291694;
    lbl_80367AB0 = lbl_80291648;
    lbl_80367AB4 = lbl_802915FC;
    lbl_80367AB8 = lbl_802915B0;
    lbl_80367ABC = lbl_80291564;
    lbl_80367AC0 = lbl_80291518;
    lbl_80367AC4[0] = lbl_80291428;
    p[1] = lbl_8029149C;
    lbl_80367ACC = lbl_80291448;
}
