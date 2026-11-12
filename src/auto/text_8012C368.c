// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8012C368(void) {
    extern u8 lbl_802845E8[128];
    extern u8 lbl_80286664[128];
    extern u8 lbl_80290E30[88];
    extern u8 lbl_80290DDC[84];
    extern u8 lbl_80290D88[84];
    extern u8 lbl_80290D34[84];
    extern u8 lbl_80290C30[128];
    extern u8 lbl_80290CB4[128];
    extern void *lbl_80367A8C;
    extern void *lbl_80367A90;
    extern void *lbl_80367A94;
    extern void *lbl_80367A98;
    extern void *lbl_80367A9C;
    void *p86664;
    void *pE30;
    void *pDDC;
    void *pD88;
    void *pD34;
    void *pC30;
    void *pCB4;

    *(void **)((u8 *)&lbl_80367A9C + 4) = lbl_802845E8;
    p86664 = lbl_80286664;
    pE30 = lbl_80290E30;
    pDDC = lbl_80290DDC;
    pD88 = lbl_80290D88;
    pD34 = lbl_80290D34;
    pC30 = lbl_80290C30;
    *(void **)((u8 *)&lbl_80367A9C + 4) = p86664;
    pCB4 = lbl_80290CB4;
    lbl_80367A8C = pE30;
    lbl_80367A90 = pDDC;
    lbl_80367A94 = pD88;
    lbl_80367A98 = pD34;
    lbl_80367A9C = pC30;
    *(void **)((u8 *)&lbl_80367A9C + 4) = pCB4;
}
