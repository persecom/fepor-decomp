// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_800AD1F4(void) {
    void fn_8022C260(void *, s32 (*)(s32), s32 (*)(s32, s16), s32, s32);
    void __register_global_object(void *, void (*)(void), void *);
    void fn_800AD24C(void);
    s32 fn_800AD284(s32, s16);
    s32 fn_800AD2DC(s32);
    extern u8 lbl_80312ACC[];
    extern u8 lbl_80312AC0[];

    fn_8022C260(lbl_80312ACC, fn_800AD2DC, fn_800AD284, 0x10, 0x10);
    __register_global_object(NULL, fn_800AD24C, lbl_80312AC0);
}
