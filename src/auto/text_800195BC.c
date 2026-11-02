/* Functions from 0x800195BC to 0x8001EE58, found by decomp-toolkit. */
#include "common.h"

void fn_800195CC(void) {

}

f32 fn_800195EC(void) {
    extern f32 lbl_80368CE8;
    return lbl_80368CE8;
}

f32 fn_80019804(void) {
    extern f32 lbl_80368CE8;
    return lbl_80368CE8;
}

s32 fn_80019DA8(u8 arg0) {
    extern s32 lbl_8036720C;
    return lbl_8036720C + (arg0 * 0xC);
}

s32 fn_8001B954(s32 *arg0) {
    return *arg0;
}

s32 fn_8001B95C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

u8 fn_8001DDB4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1E);
}

u8 fn_8001DDBC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1E);
}

