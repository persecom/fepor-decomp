/* Functions from 0x80073394 to 0x80073E70, found by decomp-toolkit. */
#include "common.h"

s32 fn_800733F4(void) {
    return 1;
}

void fn_800739A8(void) {
    M2C_UNK fn_8003BE50(void *);
    u8 fn_80091D74();
    extern void *lbl_80367468;
    if ((M2C_FIELD(lbl_80367468, s32 *, 0x1A0) & 0x800000) && (fn_80091D74() == 0)) {
        fn_8003BE50(lbl_80367468);
    }
}

void fn_80073A3C(void) {
    M2C_UNK fn_8001D580(M2C_UNK *);
    extern M2C_UNK lbl_8036746C;
    fn_8001D580(&lbl_8036746C);
}

