// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801A7D3C(void) {
    extern u8 lbl_80330EAC[];
    extern u16 lbl_80330EA0[];
    extern void fn_801A7D78;
    
    fn_801A7F5C(lbl_80330EAC);
    __register_global_object(&fn_801A7D78, lbl_80330EA0);
}
