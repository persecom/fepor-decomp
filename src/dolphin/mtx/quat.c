/* Dolphin SDK MTX library, quat.c: 0x80203320-0x80203778 (C_QUATRotAxisRad, C_QUATMtx, C_QUATSlerp). */
#include "common.h"

#pragma fp_contract off

typedef struct {
    f32 x, y, z, w;
} Quaternion;

typedef f32 Mtx[3][4];

static inline float sqrtf(float x) {
    static const double _half = .5;
    static const double _three = 3.0;
    volatile float y;

    if (x > 0.0f) {
        double guess = __frsqrte((double) x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        y = (float) (x * guess);
        return y;
    }
    return x;
}

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

void fn_802033AC(Quaternion *r, Mtx m) {
    f32 tr;
    f32 s;
    s32 i;
    s32 j;
    s32 k;
    s32 nxt[3] = { 1, 2, 0 };
    f32 q[3];

    tr = m[0][0] + m[1][1] + m[2][2];
    if (tr > 0.0f) {
        s = (f32) sqrtf(tr + 1.0f);
        r->w = s * 0.5f;
        s = 0.5f / s;
        r->x = (m[2][1] - m[1][2]) * s;
        r->y = (m[0][2] - m[2][0]) * s;
        r->z = (m[1][0] - m[0][1]) * s;
    } else {
        i = 0;
        if (m[1][1] > m[0][0]) {
            i = 1;
        }
        if (m[2][2] > m[i][i]) {
            i = 2;
        }
        j = nxt[i];
        k = nxt[j];
        s = (f32) sqrtf((m[i][i] - (m[j][j] + m[k][k])) + 1.0f);
        q[i] = s * 0.5f;
        if (s != 0.0f) {
            s = 0.5f / s;
        }
        r->w = (m[k][j] - m[j][k]) * s;
        q[j] = (m[i][j] + m[j][i]) * s;
        q[k] = (m[i][k] + m[k][i]) * s;
        r->x = q[0];
        r->y = q[1];
        r->z = q[2];
    }
}

void fn_80203604(Quaternion *p, Quaternion *q, Quaternion *r, f32 t) {
    f32 fn_80238A30(f32);
    f32 fn_80238A78(f32);
    f32 theta;
    f32 sin_th;
    f32 cos_th;
    f32 tp;
    f32 tq;

    cos_th = p->x * q->x + p->y * q->y + p->z * q->z + p->w * q->w;
    tq = 1.0f;
    if (cos_th < 0.0f) {
        cos_th = -cos_th;
        tq = -tq;
    }
    if (cos_th <= 0.99999f) {
        theta = fn_80238A78(cos_th);
        sin_th = fn_80238A30(theta);
        tp = fn_80238A30((1.0f - t) * theta) / sin_th;
        tq *= fn_80238A30(t * theta) / sin_th;
    } else {
        tp = 1.0f - t;
        tq *= t;
    }
    r->x = tp * p->x + tq * q->x;
    r->y = tp * p->y + tq * q->y;
    r->z = tp * p->z + tq * q->z;
    r->w = tp * p->w + tq * q->w;
}

