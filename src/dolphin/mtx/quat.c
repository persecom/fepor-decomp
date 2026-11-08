/* Dolphin SDK MTX library, quat.c: 0x80203320-0x80203778 (C_QUATRotAxisRad, C_QUATMtx, C_QUATSlerp). */
#include "common.h"

#pragma fp_contract off

typedef struct {
    f32 x, y, z, w;
} Quaternion;

typedef f32 Mtx[3][4];

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

void fn_80203604(Quaternion *p, Quaternion *q, Quaternion *r, f32 t) {
    f32 fn_80238A30(f32);
    f32 fn_80238A78(f32);
    extern f32 lbl_8036BC78;
    extern f32 lbl_8036BC90;
    extern f32 lbl_8036BC98;
    f32 theta;
    f32 sin_th;
    f32 cos_th;
    f32 tp;
    f32 tq;

    cos_th = p->x * q->x + p->y * q->y + p->z * q->z + p->w * q->w;
    tq = lbl_8036BC90;
    if (cos_th < lbl_8036BC78) {
        cos_th = -cos_th;
        tq = -tq;
    }
    if (cos_th <= lbl_8036BC98) {
        theta = fn_80238A78(cos_th);
        sin_th = fn_80238A30(theta);
        tp = fn_80238A30((lbl_8036BC90 - t) * theta) / sin_th;
        tq *= fn_80238A30(t * theta) / sin_th;
    } else {
        tp = lbl_8036BC90 - t;
        tq *= t;
    }
    r->x = tp * p->x + tq * q->x;
    r->y = tp * p->y + tq * q->y;
    r->z = tp * p->z + tq * q->z;
    r->w = tp * p->w + tq * q->w;
}

