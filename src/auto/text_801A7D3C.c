// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801A7D3C(void) {
    void *__register_global_object(void *, void (*)(void), void *);
    void *fn_801A7F5C(void *);
    void fn_801A7D78(void);
    extern u8 lbl_80330EAC[];
    extern u8 lbl_80330EA0[];

    __register_global_object(fn_801A7F5C(lbl_80330EAC), fn_801A7D78, lbl_80330EA0);
}
__declspec(section ".ctors") static void (*const lbl_80267B08)(void) = fn_801A7D3C;
