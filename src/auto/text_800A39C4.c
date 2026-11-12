// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_800A39C4(void);
__declspec(section ".ctors") static void (*const lbl_80267AC4)(void) = fn_800A39C4;

void fn_800A39C4(void) {
    typedef struct { void *a; void *b; } Pair;
    extern u8 lbl_8028C52C[];
    extern u8 lbl_802845E8[];
    extern u8 lbl_8028C4D8[];
    extern u32 lbl_80366E28;
    extern void *lbl_803677A0;
    extern Pair lbl_803677A4;
    extern void *lbl_803677AC;

    lbl_803677A0 = lbl_8028C52C;
    lbl_803677A4.b = lbl_802845E8;
    lbl_803677A4.a = &lbl_80366E28;
    lbl_803677AC = lbl_8028C4D8;
}
