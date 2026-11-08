// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
#include "global.h"
#include "ef.h"

extern u16 lbl_80331FB8[];
void fn_801E4380(void) {
    s32 spC;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s8 var_r30;
    u64 temp_ret;

    lbl_80331FB8[0] = 0x5359;
    lbl_80331FB8[1] = 0x5346;
    spC = 0;
    sp8 = 0;
    fn_8021D614(0, &sp8, 0x2005, 0x53595346);
    temp_ret = OSGetTime();
    temp_r5 = (s32)spC;
    temp_r4 = temp_r5 + (u32) temp_ret;
    temp_r0 = sp8 + temp_ret + ((temp_r5 < (u32) temp_ret) ? 1 : 0);
    spC = temp_r4;
    sp8 = temp_r0;
    temp_r6 = spC + (fn_80211690(temp_r4, temp_r5) * 0x7B);
    temp_r5_2 = temp_r0 + ((spC < temp_r6) ? 1 : 0);
    spC = temp_r6;
    sp8 = temp_r5_2;
    lbl_80331FB8[3] = temp_r6;
    lbl_80331FB8[2] = temp_r5_2;
    lbl_80331FB8[4] = 0;
    lbl_80331FB8[0x10] = 0;
    lbl_80331FB8[0x11] = 0;
    lbl_80331FB8[0x12] = 0x40;
    lbl_80331FB8[0x13] = 0;
    
    if (fn_802072A0(0, lbl_80331FB8, temp_r5_2, temp_r6) == 1) {
        var_r30 = 0;
    } else {
        s8 temp_r3 = fn_80209A0C();
        switch ((s32) temp_r3) {
            case 0:
                var_r30 = 1;
                break;
            case 1:
                var_r30 = 2;
                break;
            case 2:
                var_r30 = 3;
                break;
            case 3:
                var_r30 = 4;
                break;
            case 4:
                var_r30 = 5;
                break;
            case 5:
                var_r30 = 1;
                break;
        }
    }
    
    lbl_80331FB8[0x14] = var_r30;
    lbl_80331FB8[0x17] = 0;
    memset((char*)(lbl_80331FB8 + 0x9), 0, 0x1E);
    memset((char*)(lbl_80331FB8 + 0x22), 0, 2);
    lbl_80331FB8[0x18] = 0;
    lbl_80331FB8[0x17] = 0;
    lbl_80331FB8[0x16] = 0;
    lbl_80331FB8[0x15] = 0;
    lbl_80331FB8[0] = -1;
    lbl_80331FB8[1] = -1;
    lbl_80331FB8[0x14] = 1;
}
