#include "common.h"


extern void (*lbl_802B14E4)(void **);
s32 fn_801651D0(void) {
    return 0x18;
}

s32 fn_801651D8(void) {
    return 0x10;
}

s32 fn_80165250(void) {
    return 0;
}

s32 fn_80165B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}
