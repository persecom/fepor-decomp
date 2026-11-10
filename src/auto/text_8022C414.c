// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void *fn_8022C414(void *arg0, void (*arg1)(void *, s32), void (*arg2)(void *, s32), s32 arg3, u32 arg4) {
    u32 i;
    void *var_r31;
    void *var_r31_2;
    void *sp8;
    s32 spC;
    u32 sp10;
    void (*sp14)(void *, s32);
    u32 sp18;

    if (arg0 != NULL) {
        ((s32*)arg0)[0] = arg3;
        ((u32*)arg0)[1] = arg4;
        var_r31 = (char*)arg0 + 0x10;
        if (arg1 != NULL) {
            sp18 = 0;
            sp8 = var_r31;
            spC = arg3;
            sp10 = arg4;
            sp14 = arg2;
            loop_4:
            if (sp18 < arg4) {
                arg1(var_r31, 1);
                var_r31 = (char*)var_r31 + arg3;
                sp18 += 1;
                goto loop_4;
            }
            if ((sp18 < sp10) && (sp14 != NULL)) {
                var_r31_2 = (char*)sp8 + (spC * sp18);
                loop_9:
                if (sp18 != 0) {
                    var_r31_2 = (char*)var_r31_2 - spC;
                    sp14(var_r31_2, -1);
                    sp18 -= 1;
                    goto loop_9;
                }
            }
        }
    }
    return var_r31;
}
