// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801A2AB4(void) {
    extern u8 lbl_80330E90[];
    lbl_80330E90[0] = 0;
}

__declspec(section ".ctors") static void (*const lbl_80267B04)(void) = fn_801A2AB4;

