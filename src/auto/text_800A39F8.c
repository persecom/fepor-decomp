/* Functions from 0x800A39F8 to 0x800A9384, found by decomp-toolkit. */
#include "common.h"

s32 fn_800A6850(void *arg0) {
    return (((u8) M2C_FIELD(arg0, u8 *, 0x1A4) >> 5U) & 7) != 0;
}

void fn_800A6FB8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x39) = 0;
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x36) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_800A7EC0(void) {

}
