// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_8022C260(s32 arg0, M2C_UNK (*arg1)(s32, M2C_UNK), M2C_UNK (*arg2)(s32, M2C_UNK), s32 arg3, u32 arg4) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 i;
    s32 arg0_copy = arg0;
    s32 arg3_copy = arg3;
    u32 arg4_copy = arg4;
    M2C_UNK (*arg2_ptr)(s32, M2C_UNK) = arg2;

    temp_r3 = arg0;
    temp_r4 = arg3;
    temp_r5 = arg4;
    temp_r6 = 0;
loop_1:
    if (temp_r6 >= arg4) {
        goto block_5;
    }
    arg1(arg0_copy, 1);
    arg0_copy += arg3;
    temp_r6 += 1;
    goto loop_1;

block_5:
    i = arg4;
    if ((i != 0) && (arg2_ptr != NULL)) {
        s32 temp_arg = arg0 + (arg3 * i);
loop_7:
        if (i == 0) {
            return;
        }
        temp_arg -= arg3;
        arg2_ptr(temp_arg, -1);
        i -= 1;
        goto loop_7;
    }
}
