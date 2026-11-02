/* Functions from 0x800330F8 to 0x80055C70, found by decomp-toolkit. */
#include "common.h"

void fn_80037814(void) {

}

u8 fn_8003F1C0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 8);
}

s32 fn_8003F1C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x190);
}

void fn_8003F1EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x194) = arg1;
}

s32 fn_8003F204(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x194);
}

u8 fn_8003F20C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19E);
}

s32 fn_80040844(void) {
    extern s32 lbl_803672AC;
    return lbl_803672AC;
}

