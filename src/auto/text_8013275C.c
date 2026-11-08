// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8013275C(void) {
    extern u32* lbl_80367AA8;
    extern u32* lbl_80367AAC;
    extern u32* lbl_80367AB0;
    extern u32* lbl_80367AB4;
    extern u32* lbl_80367AB8;
    extern u32* lbl_80367ABC;
    extern u32* lbl_80367AC0;
    extern u32 lbl_80367AC4[2];
    extern u32* lbl_80367ACC;

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

    register u32* r3 asm("r3");
    register u32* r4 asm("r4");
    register u32* r5 asm("r5");
    register u32* r6 asm("r6");
    register u32* r7 asm("r7");
    register u32* r8 asm("r8");
    register u32* r9 asm("r9");
    register u32* r10 asm("r10");
    register u32* r11 asm("r11");
    register u32* r12 asm("r12");
    register u32* r30 asm("r30");
    register u32* r31 asm("r31");

    // Store the base address of data tables to function pointers in correct order
    r12 = (u32*)lbl_80291694;
    r31 = (u32*)lbl_802916E0;
    r11 = (u32*)lbl_80291648;
    r10 = (u32*)lbl_802915FC;
   	r9 = (u32*)lbl_802915B0;
	r8 = (u32*)lbl_80291564;
	r7 = (u32*)lbl_80291518;
	r5 = (u32*)lbl_80291428;
	r3 = (u32*)lbl_80291448;
	r4 = (u32*)lbl_8029149C;

    // Assign function pointers 
    lbl_80367AA8 = r31;
    lbl_80367AAC = r12;
    lbl_80367AB0 = r11;
    lbl_80367AB4 = r10;
    lbl_80367AB8 = r9;
    lbl_80367ABC = r8;
    lbl_80367AC0 = r7;
    lbl_80367AC4[0] = (u32)r5;
    lbl_80367AC4[1] = (u32)r4;
    lbl_80367ACC = r3;
}
