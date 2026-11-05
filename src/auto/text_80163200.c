#include "common.h"


extern void (*lbl_802B14E4)(void **);
s32 fn_80165B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}
