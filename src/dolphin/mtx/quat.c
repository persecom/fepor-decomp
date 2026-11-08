/* Dolphin SDK MTX library, quat.c: 0x80203320-0x80203778 (C_QUATRotAxisRad, C_QUATMtx, C_QUATSlerp). */
#include "common.h"

void fn_80203320(f32 *arg0, void *arg1, f32 farg0) {
    void fn_802031E8(void *, f32 *);
    f32 fn_80238A30(f32);
    f32 fn_80238A54(f32);
    extern f32 lbl_8036BC94;
    f32 nAxis[3];
    f32 half;
    f32 s;
    f32 c;

    fn_802031E8(arg1, nAxis);
    half = lbl_8036BC94 * farg0;
    s = fn_80238A30(half);
    c = fn_80238A54(half);
    arg0[0] = s * nAxis[0];
    arg0[1] = s * nAxis[1];
    arg0[2] = s * nAxis[2];
    arg0[3] = c;
}
