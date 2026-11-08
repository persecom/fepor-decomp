// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8001EE58(void) {
    extern u16 lbl_80367218;
    extern u8 lbl_803206EC[];
    extern u8 lbl_802CA4B0[];
    extern void fn_8001C5F8(void);
    
    u8 var_r31;
    u8 temp_r0;
    u8 temp_r3;
    u8 temp_r0_2;
    s32 temp_r4;

    var_r31 = *(u8 *)(&lbl_80367218 + 5);
    *(u8 *)(&lbl_80367218 + 5) = var_r31 & ~0x3F;
    *(s32 *)(&lbl_80367218) = 0;
    temp_r0 = *(u8 *)(&lbl_80367218 + 5);
    temp_r3 = (temp_r0 & ~0x80);
    temp_r0_2 = (temp_r3 & ~0x40);
    *(u8 *)(&lbl_80367218 + 5) = temp_r3;
    temp_r4 = temp_r0_2 & 0x3F;
    *(s8 *)(&lbl_80367218 + 4) = 0;
    *(u8 *)(&lbl_80367218 + 5) = temp_r0_2;
    if (temp_r4 != 0) {
        fn_800C3220(lbl_803206EC, temp_r4);
        *(u8 *)(&lbl_80367218 + 5) = *(u8 *)(&lbl_80367218 + 5) & ~0x3F;
    }
    __register_global_object(&lbl_80367218, fn_8001C5F8, lbl_802CA4B0);
}
