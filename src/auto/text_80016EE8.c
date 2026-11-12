// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80016EE8(void) {
    void fn_8022C260(void *, s32 (*)(s32), s32 (*)(s32, s16), s32, s32);
    void __register_global_object(void *, void (*)(void), void *);
    void fn_80016F40(void);
    s32 fn_800169A8(s32, s16);
    s32 fn_80016F78(s32);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802B14D8[];

    fn_8022C260(lbl_802B14E4, fn_80016F78, fn_800169A8, 0x280, 0x9F);
    __register_global_object(NULL, fn_80016F40, lbl_802B14D8);
}

__declspec(section ".ctors") static void (*const lbl_80267A8C)(void) = fn_80016EE8;
