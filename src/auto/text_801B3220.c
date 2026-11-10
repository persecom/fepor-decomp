// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801B3220(void) {
    void __register_global_object(void *, void *);
    void *fn_8001C76C(void *);
    extern void fn_8001C5F8;
    extern u8 lbl_80331C60[];
    extern u8 lbl_80368230[];

    void *temp_r3 = fn_8001C76C(lbl_80368230);
    void *temp_r4 = &fn_8001C5F8;
    void *temp_r5 = lbl_80331C60;
    __register_global_object(temp_r4, temp_r5);
}
