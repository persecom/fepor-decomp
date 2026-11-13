// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801B3220(void) {
    void *__register_global_object(void *, void (*)(void), void *);
    void *fn_8001C76C(void *);
    void fn_8001C5F8(void);
    extern u8 lbl_80331C60[];
    extern u8 lbl_80368230;

    __register_global_object(fn_8001C76C(&lbl_80368230), fn_8001C5F8, lbl_80331C60);
}
__declspec(section ".ctors") static void (*const lbl_80267B10)(void) = fn_801B3220;
