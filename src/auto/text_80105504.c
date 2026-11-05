// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_80105504(void) {
    extern u32 fn_80105334;
    extern u8 lbl_8032BB38[12];
    extern u32 lbl_8032BB44[5];
    
    lbl_8032BB44[0] = 0;
    lbl_8032BB44[1] = 0;
    lbl_8032BB44[2] = 0;
    lbl_8032BB44[3] = 0;
    
    __register_global_object(lbl_8032BB44, fn_80105334, &lbl_8032BB38);
}
