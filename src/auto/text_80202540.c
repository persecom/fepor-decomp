/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y; } FPair;
#include <dolphin/os.h>
extern s32 gSaveDataBase;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);

// From Dolphin SDK's vec.c, handwritten PSVECCrossProduct function
static void PSVECCrossProduct(f32 *a, f32 *b, f32 *out) {
    f32 temp[4];
    temp[0] = a[1] * b[2] - a[2] * b[1];
    temp[1] = a[2] * b[0] - a[0] * b[2];
    temp[2] = a[0] * b[1] - a[1] * b[0];
    temp[3] = 0.0f;
    out[0] = temp[0];
    out[1] = temp[1];
    out[2] = temp[2];
    out[3] = temp[3];
}


extern s32 lbl_80368614;
extern void (*lbl_803685E8)(void);
extern void* lbl_80368618;
extern void* lbl_8036861C;
extern void* lbl_80368620;
extern void* lbl_80368624;
extern void* lbl_80368628;
extern void* lbl_8036862C;
extern void* lbl_80368630;
extern void* lbl_80368634;
extern void* lbl_80368638;
extern void* lbl_8036863C;
extern void* lbl_80368640;
extern void* lbl_80368644;
extern void* lbl_80368648;
extern void* lbl_8036864C;
extern void* lbl_80368650;
extern void* lbl_80368654;

u8 ErrorCode2Num(s32);

extern u8 lbl_802820B8[];
extern u32 lbl_80368448;

static u32 sFaceResAddrs[8];
static u32 sFaceResIds[8];
static s16 lbl_80339328[8];
static s16 lbl_80339338[8];

extern s32 lbl_803679F0;

extern u16 lbl_8029B634[10];

#pragma opt_common_subs off

#pragma opt_common_subs reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern u16 lbl_8029B7FC[10];

#pragma opt_common_subs off

#pragma opt_common_subs reset

extern u16 lbl_8029B7A4[10];

#pragma opt_common_subs off

#pragma opt_common_subs reset

extern void *IDShouldBe_8036859C;
extern void *fn_8020DAE0;
extern void fn_8020C1A4(u8, u32, void *);

extern u8 lbl_80289EB8[16];
#include "common.h"
#include <dolphin/os.h>
extern s32 gSaveDataBase;
extern s32 fn_80015A14(void);
#include "common.h"
#include <dolphin/os.h>
extern s32 gFallingParticleVelY;
extern s32 gFallingParticleVelXCenter;
extern s32 gFallingParticleVelYCenter;
extern s32 gFallingParticleVelXRange;
extern s32 gFallingParticleVelYRange;
extern u8 gFallingParticleAlphaMin;
extern u8 gFallingParticleAlphaMax;
extern f32 gFloatZero;
extern f32 gFloatOne;

typedef f32 Mtx[3][4];
void PSMTXTrans(register Mtx m, register f32 xT, register f32 yT, register f32 zT) {
    register f32 c0 = 0.0f;
    register f32 c1 = 1.0f;
    asm {
stfs xT, 12(m)
stfs yT, 28(m)
psq_st c0, 4(m), 0, 0
psq_st c0, 32(m), 0, 0
stfs c0, 16(m)
stfs c1, 20(m)
stfs c0, 24(m)
stfs c1, 40(m)
stfs zT, 44(m)
stfs c1, 0(m)
    }
}

#pragma push
#pragma optimization_level 1
asm void fn_80202574(const register Mtx src, register Mtx dst, register f32 xT, register f32 yT, register f32 zT) {
    nofralloc
    psq_l fp4, 0(src), 0, 0
    frsp xT, xT
    psq_l fp5, 8(src), 0, 0
    frsp yT, yT
    psq_l fp7, 24(src), 0, 0
    frsp zT, zT
    psq_l fp8, 40(src), 0, 0
    psq_st fp4, 0(dst),  0, 0
    ps_sum1 fp5, xT, fp5, fp5
    psq_l fp6, 16(src), 0, 0
    psq_st fp5, 8(dst), 0, 0
    ps_sum1 fp7, yT, fp7, fp7
    psq_l fp9, 32(src), 0, 0
    psq_st fp6, 16(dst), 0, 0
    ps_sum1 fp8, zT, fp8, fp8
    psq_st fp7, 24(dst), 0, 0
    psq_st fp9, 32(dst), 0, 0
    psq_st fp8, 40(dst), 0, 0
    blr
}
#pragma pop

void PSMTXScale(register Mtx m, register f32 xS, register f32 yS, register f32 zS) {
    register f32 c0 = 0.0f;
    asm {
stfs xS, 0(m)
psq_st c0, 4(m), 0, 0
psq_st c0, 12(m), 0, 0
stfs yS, 20(m)
psq_st c0, 24(m), 0, 0
psq_st c0, 32(m), 0, 0
stfs zS, 40(m)
stfs c0, 44(m)
    }
}

#pragma push
#pragma optimization_level 1
asm void fn_802025E8(const register Mtx src, register Mtx dst, register f32 xS, register f32 yS, register f32 zS) {
    nofralloc
    frsp xS, xS
    psq_l fp4, 0(src), 0, 0
    frsp yS, yS
    psq_l fp5, 8(src), 0, 0
    frsp zS, zS
    ps_muls0 fp4, fp4, xS
    psq_l fp6, 16(src), 0, 0
    ps_muls0 fp5, fp5, xS
    psq_l fp7, 24(src), 0, 0
    ps_muls0 fp6, fp6, yS
    psq_l fp8, 32(src), 0, 0
    psq_st fp4, 0(dst), 0, 0
    ps_muls0 fp7, fp7, yS
    psq_l fp2, 40(src), 0, 0
    psq_st fp5, 8(dst), 0, 0
    ps_muls0 fp8, fp8, zS
    psq_st fp6, 16(dst), 0, 0
    ps_muls0 fp2, fp2, zS
    psq_st fp7, 24(dst), 0, 0
    psq_st fp8, 32(dst), 0, 0
    psq_st fp2, 40(dst), 0, 0
    blr
}
#pragma pop

void fn_80202640(register f32 (*m)[4], const register f32 *q) {
    extern f32 lbl_8036BC38;
    register f32 c_zero, c_one, c_two, scale;
    register f32 tmp0, tmp1, tmp2, tmp3, tmp4;
    register f32 tmp5, tmp6, tmp7, tmp8, tmp9;
    c_one = lbl_8036BC38;

	asm {
        psq_l tmp0, 0(q), 0, 0
        psq_l tmp1, 8(q), 0, 0
        fsubs c_zero, c_one, c_one
        fadds c_two, c_one, c_one
        ps_mul tmp2, tmp0, tmp0
        ps_merge10 tmp5, tmp0, tmp0
        ps_madd tmp4, tmp1, tmp1, tmp2
        ps_mul tmp3, tmp1, tmp1
        ps_sum0 scale, tmp4, tmp4, tmp4
        ps_muls1 tmp7, tmp5, tmp1
        fres tmp9, scale
        ps_sum1 tmp4, tmp3, tmp4, tmp2
        ps_nmsub scale, scale, tmp9, c_two
        ps_muls1 tmp6, tmp1, tmp1
        ps_mul scale, tmp9, scale
        ps_sum0 tmp2, tmp2, tmp2, tmp2
        fmuls scale, scale, c_two
        ps_madd tmp8, tmp0, tmp5, tmp6
        ps_msub tmp6, tmp0, tmp5, tmp6
        psq_st c_zero, 12(m), 1, 0
        ps_nmsub tmp2, tmp2, scale, c_one
        ps_nmsub tmp4, tmp4, scale, c_one
        psq_st c_zero, 44(m), 1, 0
        ps_mul tmp8, tmp8, scale
        ps_mul tmp6, tmp6, scale
        psq_st tmp2, 40(m), 1, 0
        ps_madds0 tmp5, tmp0, tmp1, tmp7
        ps_merge00 tmp1, tmp8, tmp4
        ps_nmsub tmp7, tmp7, c_two, tmp5
        ps_merge10 tmp0, tmp4, tmp6
        psq_st tmp1, 16(m), 0, 0
        ps_mul tmp5, tmp5, scale
        ps_mul tmp7, tmp7, scale
        psq_st tmp0, 0(m), 0, 0
        psq_st tmp5, 8(m), 1, 0
        ps_merge10 tmp3, tmp7, c_zero
        ps_merge01 tmp9, tmp7, tmp5
        psq_st tmp3, 24(m), 0, 0
        psq_st tmp9, 32(m), 0, 0
	}
}

#pragma push
#pragma peephole off
void fn_802026E4(f32 *out, f32 *eye, f32 *up, f32 *target) {
    void fn_802031E8(f32 *, f32 *);
    void fn_80203290(f32 *, f32 *, f32 *);
    f32 back[3], right[3], vertical[3];
    back[0] = eye[0] - target[0];
    back[1] = eye[1] - target[1];
    back[2] = eye[2] - target[2];
    fn_802031E8(back, back);
    fn_80203290(up, back, right);
    fn_802031E8(right, right);
    fn_80203290(back, right, vertical);
    out[0] = right[0];
    out[1] = right[1];
    out[2] = right[2];
    out[3] = -((f32)(eye[2] * right[2]) + ((f32)(eye[0] * right[0]) + (f32)(eye[1] * right[1])));
    out[4] = vertical[0];
    out[5] = vertical[1];
    out[6] = vertical[2];
    out[7] = -((f32)(eye[2] * vertical[2]) + ((f32)(eye[0] * vertical[0]) + (f32)(eye[1] * vertical[1])));
    out[8] = back[0];
    out[9] = back[1];
    out[10] = back[2];
    out[11] = -((f32)(eye[2] * back[2]) + ((f32)(eye[0] * back[0]) + (f32)(eye[1] * back[1])));
}
#pragma pop
void fn_80202870(f32 *m, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 fn_80238A0C(f32);
    extern f32 lbl_8036BC38, lbl_8036BC3C, lbl_8036BC40, lbl_8036BC4C, lbl_8036BC50;
    f32 t;
    f32 z;
    f32 scale;

    scale = lbl_8036BC40 * lbl_8036BC50;
    farg0 = scale * farg0;
    t = farg1;
    t = lbl_8036BC38 / fn_80238A0C(farg0);
    m[0] = farg2 * (t / farg1);
    z = lbl_8036BC3C;
    m[1] = z;
    m[2] = -farg4;
    m[3] = z;
    m[4] = z;
    m[5] = t * farg3;
    m[6] = -farg5;
    m[7] = z;
    m[8] = z;
    m[9] = z;
    m[10] = lbl_8036BC4C;
    m[11] = z;
}
#pragma scheduling on
void C_MTXLightOrtho(f32 *m, f32 t, f32 b, f32 l, f32 r, f32 sx, f32 sy, f32 tx, f32 ty)
{
  extern const f32 lbl_8036BC38;
  extern const f32 lbl_8036BC48;
  extern const f32 lbl_8036BC3C;
  f32 tmp;
  f32 tmp2;
  f32 tmp3;

  tmp = lbl_8036BC38 / (r - l);
  tmp3 = lbl_8036BC48 * tmp;
  m[0] = tmp3 * sx;
  m[1] = lbl_8036BC3C;
  m[2] = lbl_8036BC3C;
  tmp2 = sx * (tmp * -(r + l));
  m[3] = tx + tmp2;
  tmp = lbl_8036BC38 / (t - b);
  m[4] = lbl_8036BC3C;
  tmp3 = lbl_8036BC48 * tmp;
  m[5] = tmp3 * sy;
  m[6] = lbl_8036BC3C;
  tmp2 = sy * (tmp * -(t + b));
  m[7] = ty + tmp2;
  m[8] = lbl_8036BC3C;
  m[9] = lbl_8036BC3C;
  m[10] = lbl_8036BC3C;
  m[11] = lbl_8036BC38;
}
#pragma scheduling off
#pragma push
asm void fn_802029C4(const register f32 (*m)[4], const register f32 *src, register f32 *dst) {
    nofralloc
    psq_l f0, 0(src), 0, 0
    psq_l f2, 0(m), 0, 0
    psq_l f1, 8(src), 1, 0
    ps_mul f4, f2, f0
    psq_l f3, 8(m), 0, 0
    ps_madd f5, f3, f1, f4
    psq_l f8, 16(m), 0, 0
    ps_sum0 f6, f5, f6, f5
    psq_l f9, 24(m), 0, 0
    ps_mul f10, f8, f0
    psq_st f6, 0(dst), 1, 0
    ps_madd f11, f9, f1, f10
    psq_l f2, 32(m), 0, 0
    ps_sum0 f12, f11, f12, f11
    psq_l f3, 40(m), 0, 0
    ps_mul f4, f2, f0
    psq_st f12, 4(dst), 1, 0
    ps_madd f5, f3, f1, f4
    ps_sum0 f6, f5, f6, f5
    psq_st f6, 8(dst), 1, 0
    blr
}
#pragma pop

#pragma push
asm void fn_80202A18(const register f32 (*m)[4], const register f32 *src, register f32 *dst) {
    nofralloc
    psq_l f0, 0x0(m), 0, 0
    psq_l f6, 0x0(src), 0, 0
    psq_l f2, 0x10(m), 0, 0
    ps_mul f8, f0, f6
    psq_l f4, 0x20(m), 0, 0
    ps_mul f10, f2, f6
    psq_l f7, 0x8(src), 1, 0
    ps_mul f12, f4, f6
    psq_l f3, 0x18(m), 0, 0
    ps_sum0 f8, f8, f8, f8
    psq_l f5, 0x28(m), 0, 0
    ps_sum0 f10, f10, f10, f10
    psq_l f1, 0x8(m), 0, 0
    ps_sum0 f12, f12, f12, f12
    ps_madd f9, f1, f7, f8
    psq_st f9, 0x0(dst), 1, 0
    ps_madd f11, f3, f7, f10
    psq_st f11, 0x4(dst), 1, 0
    ps_madd f13, f5, f7, f12
    psq_st f13, 0x8(dst), 1, 0
    blr
}
#pragma pop

#pragma scheduling on
void fn_80202A6C(f32 *m, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
 f32 fn_80238A0C(f32);
 extern f32 lbl_8036BC58, lbl_8036BC60, lbl_8036BC64, lbl_8036BC68, lbl_8036BC6C;
 f32 t, r, one, z;
 farg0=lbl_8036BC68*farg0; farg0=lbl_8036BC6C*farg0; t=fn_80238A0C(farg0);
 one=lbl_8036BC58; t=one/t;
 m[0]=t/farg1; r=one/(farg3-farg2); z=lbl_8036BC60;
 m[1]=z; m[2]=z; m[3]=z; m[4]=z; m[5]=t; m[6]=z; m[7]=z; m[8]=z; m[9]=z;
 m[10]=-farg2*r; m[11]=r*-(farg3*farg2); m[12]=z; m[13]=z; m[14]=lbl_8036BC64; m[15]=z;
}
#pragma scheduling reset
#pragma push
#pragma scheduling on
void C_MTXOrtho(f32 (*m)[4], f32 t, f32 b, f32 l, f32 r, f32 n, f32 f) {
    extern const f32 lbl_8036BC58;
    extern const f32 lbl_8036BC5C;
    extern const f32 lbl_8036BC60;
    extern const f32 lbl_8036BC64;
    f32 tmp;

    tmp = lbl_8036BC58 / (r - l);
    m[0][0] = lbl_8036BC5C * tmp;
    m[0][1] = lbl_8036BC60;
    m[0][2] = lbl_8036BC60;
    m[0][3] = (tmp * -(r + l));
    tmp = lbl_8036BC58 / (t - b);
    m[1][0] = lbl_8036BC60;
    m[1][1] = lbl_8036BC5C * tmp;
    m[1][2] = lbl_8036BC60;
    m[1][3] = (tmp * -(t + b));
    m[2][0] = lbl_8036BC60;
    m[2][1] = lbl_8036BC60;
    tmp = lbl_8036BC58 / (f - n);
    m[2][2] = (lbl_8036BC64 * tmp);
    m[2][3] = (-f * tmp);
    m[3][0] = lbl_8036BC60;
    m[3][1] = lbl_8036BC60;
    m[3][2] = lbl_8036BC60;
    m[3][3] = lbl_8036BC58;
}
#pragma pop

#pragma push
typedef f32 Mtx44[4][4];
asm void fn_80202BD4(const register Mtx44 src, register Mtx44 dst) {
nofralloc
psq_l f1, 0x0(src), 0, 0
psq_st f1, 0x0(dst), 0, 0
psq_l f1, 0x8(src), 0, 0
psq_st f1, 0x8(dst), 0, 0
psq_l f1, 0x10(src), 0, 0
psq_st f1, 0x10(dst), 0, 0
psq_l f1, 0x18(src), 0, 0
psq_st f1, 0x18(dst), 0, 0
psq_l f1, 0x20(src), 0, 0
psq_st f1, 0x20(dst), 0, 0
psq_l f1, 0x28(src), 0, 0
psq_st f1, 0x28(dst), 0, 0
psq_l f1, 0x30(src), 0, 0
psq_st f1, 0x30(dst), 0, 0
psq_l f1, 0x38(src), 0, 0
psq_st f1, 0x38(dst), 0, 0
blr
}
#pragma pop

#pragma push
asm void fn_80202C18(const register Mtx44 a, const register Mtx44 b, register Mtx44 ab) {
nofralloc
psq_l f0, 0x0(a), 0, 0
psq_l f2, 0x0(b), 0, 0
ps_muls0 f6, f2, f0
psq_l f3, 0x10(b), 0, 0
psq_l f4, 0x20(b), 0, 0
ps_madds1 f6, f3, f0, f6
psq_l f1, 0x8(a), 0, 0
psq_l f5, 0x30(b), 0, 0
ps_madds0 f6, f4, f1, f6
psq_l f0, 0x10(a), 0, 0
ps_madds1 f6, f5, f1, f6
psq_l f1, 0x18(a), 0, 0
ps_muls0 f8, f2, f0
ps_madds1 f8, f3, f0, f8
psq_l f0, 0x20(a), 0, 0
ps_madds0 f8, f4, f1, f8
ps_madds1 f8, f5, f1, f8
psq_l f1, 0x28(a), 0, 0
ps_muls0 f10, f2, f0
ps_madds1 f10, f3, f0, f10
psq_l f0, 0x30(a), 0, 0
ps_madds0 f10, f4, f1, f10
ps_madds1 f10, f5, f1, f10
psq_l f1, 0x38(a), 0, 0
ps_muls0 f12, f2, f0
psq_l f2, 0x8(b), 0, 0
ps_madds1 f12, f3, f0, f12
psq_l f0, 0x0(a), 0, 0
ps_madds0 f12, f4, f1, f12
psq_l f3, 0x18(b), 0, 0
ps_madds1 f12, f5, f1, f12
psq_l f1, 0x8(a), 0, 0
ps_muls0 f7, f2, f0
psq_l f4, 0x28(b), 0, 0
ps_madds1 f7, f3, f0, f7
psq_l f5, 0x38(b), 0, 0
ps_madds0 f7, f4, f1, f7
psq_l f0, 0x10(a), 0, 0
ps_madds1 f7, f5, f1, f7
psq_l f1, 0x18(a), 0, 0
ps_muls0 f9, f2, f0
psq_st f6, 0x0(ab), 0, 0
ps_madds1 f9, f3, f0, f9
psq_l f0, 0x20(a), 0, 0
ps_madds0 f9, f4, f1, f9
psq_st f8, 0x10(ab), 0, 0
ps_madds1 f9, f5, f1, f9
psq_l f1, 0x28(a), 0, 0
ps_muls0 f11, f2, f0
psq_st f10, 0x20(ab), 0, 0
ps_madds1 f11, f3, f0, f11
psq_l f0, 0x30(a), 0, 0
ps_madds0 f11, f4, f1, f11
psq_st f12, 0x30(ab), 0, 0
ps_madds1 f11, f5, f1, f11
psq_l f1, 0x38(a), 0, 0
ps_muls0 f13, f2, f0
psq_st f7, 0x8(ab), 0, 0
ps_madds1 f13, f3, f0, f13
psq_st f9, 0x18(ab), 0, 0
ps_madds0 f13, f4, f1, f13
psq_st f11, 0x28(ab), 0, 0
ps_madds1 f13, f5, f1, f13
psq_st f13, 0x38(ab), 0, 0
blr
}
#pragma pop

#pragma ppc_intrinsics on
s32 fn_80202D1C(f32 *src, f32 *inv) {
    void fn_80202BD4(f32 *, f32 *);
    extern f32 lbl_8036BC58;
    extern f32 lbl_8036BC60;
    f32 sp10[16];
    f32 one;
    f32 zero;
    f64 zpair;
    f32 f1;
    f32 f4;
    f32 f0;
    f32 t;
    s32 i;
    s32 j;
    s32 pivot;
    s32 off;
    s32 col;
    s32 r5;
    s32 r6;
    s32 r0;
    s32 ctr;

    fn_80202BD4(src, sp10);
    one = lbl_8036BC58;
    zero = lbl_8036BC60;
    ((f32 *)&zpair)[0] = zero;
    ((f32 *)&zpair)[1] = zero;
    inv[0] = one;
    *(f64 *)&inv[1] = zpair;
    *(f64 *)&inv[3] = zpair;
    inv[5] = one;
    *(f64 *)&inv[6] = zpair;
    *(f64 *)&inv[8] = zpair;
    inv[10] = one;
    *(f64 *)&inv[11] = zpair;
    *(f64 *)&inv[13] = zpair;
    inv[15] = one;

    i = 0;
    off = 0;
    col = 0;
    do {
        f1 = zero;
        pivot = i;
        j = i;
        r5 = j << 4;
        ctr = 4 - j;
        if (j < 4) {
            do {
                r0 = r5 + col;
                f0 = __fabsf(*(f32 *)((s8 *)sp10 + r0));
                if (f0 > f1) {
                    f1 = f0;
                    pivot = j;
                }
                j += 1;
                r5 += 0x10;
            } while (--ctr);
        }
        if (zero == f1)
            return 0;
        if (pivot != i) {
            r5 = pivot << 4;
            t = *(f32 *)((s8 *)sp10 + off);
            *(f32 *)((s8 *)sp10 + off) = *(f32 *)((s8 *)sp10 + r5);
            *(f32 *)((s8 *)sp10 + r5) = t;
            t = *(f32 *)((s8 *)inv + off);
            *(f32 *)((s8 *)inv + off) = *(f32 *)((s8 *)inv + r5);
            *(f32 *)((s8 *)inv + r5) = t;
            r6 = off + 4; r0 = r5 + 4;
            t = *(f32 *)((s8 *)sp10 + r6);
            *(f32 *)((s8 *)sp10 + r6) = *(f32 *)((s8 *)sp10 + r0);
            *(f32 *)((s8 *)sp10 + r0) = t;
            t = *(f32 *)((s8 *)inv + r6);
            *(f32 *)((s8 *)inv + r6) = *(f32 *)((s8 *)inv + r0);
            *(f32 *)((s8 *)inv + r0) = t;
            r6 = off + 8; r0 = r5 + 8;
            t = *(f32 *)((s8 *)sp10 + r6);
            *(f32 *)((s8 *)sp10 + r6) = *(f32 *)((s8 *)sp10 + r0);
            *(f32 *)((s8 *)sp10 + r0) = t;
            t = *(f32 *)((s8 *)inv + r6);
            *(f32 *)((s8 *)inv + r6) = *(f32 *)((s8 *)inv + r0);
            *(f32 *)((s8 *)inv + r0) = t;
            r6 = off + 0xC; r0 = r5 + 0xC;
            t = *(f32 *)((s8 *)sp10 + r6);
            *(f32 *)((s8 *)sp10 + r6) = *(f32 *)((s8 *)sp10 + r0);
            *(f32 *)((s8 *)sp10 + r0) = t;
            t = *(f32 *)((s8 *)inv + r6);
            *(f32 *)((s8 *)inv + r6) = *(f32 *)((s8 *)inv + r0);
            *(f32 *)((s8 *)inv + r0) = t;
        }
        f4 = one / *(f32 *)((s8 *)sp10 + (off + col));
        f0 = *(f32 *)((s8 *)sp10 + off) * f4; *(f32 *)((s8 *)sp10 + off) = f0;
        f0 = *(f32 *)((s8 *)inv + off) * f4; *(f32 *)((s8 *)inv + off) = f0;
        r0 = off + 4;
        f0 = *(f32 *)((s8 *)sp10 + r0) * f4; *(f32 *)((s8 *)sp10 + r0) = f0;
        f0 = *(f32 *)((s8 *)inv + r0) * f4; *(f32 *)((s8 *)inv + r0) = f0;
        r0 = off + 8;
        f0 = *(f32 *)((s8 *)sp10 + r0) * f4; *(f32 *)((s8 *)sp10 + r0) = f0;
        f0 = *(f32 *)((s8 *)inv + r0) * f4; *(f32 *)((s8 *)inv + r0) = f0;
        r0 = off + 0xC;
        f0 = *(f32 *)((s8 *)sp10 + r0) * f4; *(f32 *)((s8 *)sp10 + r0) = f0;
        f0 = *(f32 *)((s8 *)inv + r0) * f4; *(f32 *)((s8 *)inv + r0) = f0;
        j = 0; r5 = 0; ctr = 2;
        do {
            if (j != i) {
                f4 = *(f32 *)((s8 *)sp10 + (r5 + col));
                f0 = f4 * *(f32 *)((s8 *)sp10 + off); t = *(f32 *)((s8 *)sp10 + r5) - f0; *(f32 *)((s8 *)sp10 + r5) = t;
                f0 = f4 * *(f32 *)((s8 *)inv + off); t = *(f32 *)((s8 *)inv + r5) - f0; *(f32 *)((s8 *)inv + r5) = t;
                r0 = off + 4; r6 = r5 + 4;
                f0 = f4 * *(f32 *)((s8 *)sp10 + r0); t = *(f32 *)((s8 *)sp10 + r6) - f0; *(f32 *)((s8 *)sp10 + r6) = t;
                f0 = f4 * *(f32 *)((s8 *)inv + r0); t = *(f32 *)((s8 *)inv + r6) - f0; *(f32 *)((s8 *)inv + r6) = t;
                r0 = off + 8; r6 = r5 + 8;
                f0 = f4 * *(f32 *)((s8 *)sp10 + r0); t = *(f32 *)((s8 *)sp10 + r6) - f0; *(f32 *)((s8 *)sp10 + r6) = t;
                f0 = f4 * *(f32 *)((s8 *)inv + r0); t = *(f32 *)((s8 *)inv + r6) - f0; *(f32 *)((s8 *)inv + r6) = t;
                r0 = off + 0xC; r6 = r5 + 0xC;
                f0 = f4 * *(f32 *)((s8 *)sp10 + r0); t = *(f32 *)((s8 *)sp10 + r6) - f0; *(f32 *)((s8 *)sp10 + r6) = t;
                f0 = f4 * *(f32 *)((s8 *)inv + r0); t = *(f32 *)((s8 *)inv + r6) - f0; *(f32 *)((s8 *)inv + r6) = t;
            }
            j += 1; r5 += 0x10;
            if (j != i) {
                f4 = *(f32 *)((s8 *)sp10 + (r5 + col));
                f0 = f4 * *(f32 *)((s8 *)sp10 + off); t = *(f32 *)((s8 *)sp10 + r5) - f0; *(f32 *)((s8 *)sp10 + r5) = t;
                f0 = f4 * *(f32 *)((s8 *)inv + off); t = *(f32 *)((s8 *)inv + r5) - f0; *(f32 *)((s8 *)inv + r5) = t;
                r0 = off + 4; r6 = r5 + 4;
                f0 = f4 * *(f32 *)((s8 *)sp10 + r0); t = *(f32 *)((s8 *)sp10 + r6) - f0; *(f32 *)((s8 *)sp10 + r6) = t;
                f0 = f4 * *(f32 *)((s8 *)inv + r0); t = *(f32 *)((s8 *)inv + r6) - f0; *(f32 *)((s8 *)inv + r6) = t;
                r0 = off + 8; r6 = r5 + 8;
                f0 = f4 * *(f32 *)((s8 *)sp10 + r0); t = *(f32 *)((s8 *)sp10 + r6) - f0; *(f32 *)((s8 *)sp10 + r6) = t;
                f0 = f4 * *(f32 *)((s8 *)inv + r0); t = *(f32 *)((s8 *)inv + r6) - f0; *(f32 *)((s8 *)inv + r6) = t;
                r0 = off + 0xC; r6 = r5 + 0xC;
                f0 = f4 * *(f32 *)((s8 *)sp10 + r0); t = *(f32 *)((s8 *)sp10 + r6) - f0; *(f32 *)((s8 *)sp10 + r6) = t;
                f0 = f4 * *(f32 *)((s8 *)inv + r0); t = *(f32 *)((s8 *)inv + r6) - f0; *(f32 *)((s8 *)inv + r6) = t;
            }
            j += 1; r5 += 0x10;
        } while (--ctr);
        i += 1; off += 0x10; col += 4;
    } while (i < 4);
    return 1;
}

#pragma push
asm void fn_8020310C(const register f32 (*m)[4], const register f32 *src, register f32 *dst) {
    nofralloc
    psq_l f0, 0x0(src), 0, 0
    psq_l f2, 0x30(m), 0, 0
    psq_l f1, 0x8(src), 1, 0
    ps_mul f4, f0, f2
    psq_l f3, 0x38(m), 0, 0
    ps_madd f5, f1, f3, f4
    ps_merge11 f12, f1, f1
    ps_sum0 f13, f5, f5, f5
    psq_l f4, 0x0(m), 0, 0
    ps_merge00 f13, f13, f13
    psq_l f5, 0x8(m), 0, 0
    ps_div f13, f12, f13
    psq_l f6, 0x10(m), 0, 0
    psq_l f7, 0x18(m), 0, 0
    psq_l f8, 0x20(m), 0, 0
    psq_l f9, 0x28(m), 0, 0
    ps_mul f4, f0, f4
    ps_madd f2, f1, f5, f4
    ps_mul f6, f0, f6
    ps_madd f3, f1, f7, f6
    ps_mul f8, f0, f8
    ps_sum0 f2, f2, f2, f2
    ps_madd f9, f1, f9, f8
    ps_sum1 f2, f3, f2, f3
    ps_sum0 f3, f9, f9, f9
    ps_mul f2, f2, f13
    psq_st f2, 0x0(dst), 0, 0
    ps_mul f3, f3, f13
    psq_st f3, 0x8(dst), 1, 0
    blr
}
#pragma pop

asm void fn_80203184(const register f32 *a, const register f32 *b, register f32 *ab) {
    psq_l f2, 0(a), 0, 0
    psq_l f4, 0(b), 0, 0
    ps_add f6, f2, f4
    psq_st f6, 0(ab), 0, 0
    psq_l f3, 8(a), 1, 0
    psq_l f5, 8(b), 1, 0
    ps_add f7, f3, f5
    psq_st f7, 8(ab), 1, 0
}

asm void fn_802031A8(const register f32 *a, const register f32 *b, register f32 *ab) {
    psq_l f2, 0(a), 0, 0
    psq_l f4, 0(b), 0, 0
    ps_sub f6, f2, f4
    psq_st f6, 0(ab), 0, 0
    psq_l f3, 8(a), 1, 0
    psq_l f5, 8(b), 1, 0
    ps_sub f7, f3, f5
    psq_st f7, 8(ab), 1, 0
}

void fn_802031CC(const register f32 *src, register f32 *dst, register f32 scale) {
    register f32 vxy, vz, rxy, rz;

    asm {
        psq_l vxy, 0x0(src), 0, 0
        psq_l vz, 0x8(src), 1, 0
        ps_muls0 rxy, vxy, scale
        psq_st rxy, 0x0(dst), 0, 0
        ps_muls0 rz, vz, scale
        psq_st rz, 0x8(dst), 1, 0
    }
}

void fn_802031E8(const register f32 *src, register f32 *unit) {
    extern f32 lbl_8036BC70;
    extern f32 lbl_8036BC74;
    register f32 c_half = lbl_8036BC70;
    register f32 c_three = lbl_8036BC74;
    register f32 v1_xy;
    register f32 v1_z;
    register f32 xx_zz;
    register f32 xx_yy;
    register f32 sqsum;
    register f32 rsqrt;
    register f32 nwork0;
    register f32 nwork1;

    asm {
        psq_l v1_xy, 0x0(src), 0, 0
        ps_mul xx_yy, v1_xy, v1_xy
        psq_l v1_z, 0x8(src), 1, 0
        ps_madd xx_zz, v1_z, v1_z, xx_yy
        ps_sum0 sqsum, xx_zz, v1_z, xx_yy
        frsqrte rsqrt, sqsum
        fmuls nwork0, rsqrt, rsqrt
        fmuls nwork1, rsqrt, c_half
        fnmsubs nwork0, nwork0, sqsum, c_three
        fmuls rsqrt, nwork0, nwork1
        ps_muls0 v1_xy, v1_xy, rsqrt
        psq_st v1_xy, 0x0(unit), 0, 0
        ps_muls0 v1_z, v1_z, rsqrt
        psq_st v1_z, 0x8(unit), 1, 0
    }
}

f32 Vec_Length(const register f32 *v) {
    extern f32 lbl_8036BC70;
    extern f32 lbl_8036BC74;
    register f32 vxy, vzz;
    register f32 sqmag, rmag;
    register f32 nwork0, nwork1;
    register f32 c_three, c_half, c_zero;

    c_half = lbl_8036BC70;

    asm {
        psq_l vxy, 0x0(v), 0, 0
        ps_mul vxy, vxy, vxy
        lfs vzz, 0x8(v)
        fsubs c_zero, c_half, c_half
        ps_madd sqmag, vzz, vzz, vxy
        ps_sum0 sqmag, sqmag, vxy, vxy
        fcmpu cr0, sqmag, c_zero
        beq L_000005F0
        frsqrte rmag, sqmag
    }

    c_three = lbl_8036BC74;

    asm {
        fmuls nwork0, rmag, rmag
        fmuls nwork1, rmag, c_half
        fnmsubs nwork0, nwork0, sqmag, c_three
        fmuls rmag, nwork0, nwork1
        fmuls sqmag, sqmag, rmag
    L_000005F0:
    }

    return sqmag;
}

asm f32 fn_80203270(const register f32 *a, const register f32 *b) {
    psq_l f2, 4(a), 0, 0
    psq_l f3, 4(b), 0, 0
    ps_mul f2, f2, f3
    psq_l f5, 0(a), 0, 0
    psq_l f4, 0(b), 0, 0
    ps_madd f3, f5, f4, f2
    ps_sum0 f1, f3, f2, f2
}

asm void fn_80203290(const register f32 *a, const register f32 *b, register f32 *axb) {
    psq_l f1, 0(b), 0, 0
    lfs f2, 8(a)
    psq_l f0, 0(a), 0, 0
    ps_merge10 f6, f1, f1
    lfs f3, 8(b)
    ps_mul f4, f1, f2
    ps_muls0 f7, f1, f0
    ps_msub f5, f0, f3, f4
    ps_msub f8, f0, f6, f7
    ps_merge11 f9, f5, f5
    ps_merge01 f10, f5, f8
    psq_st f9, 0(axb), 1, 0
    ps_neg f10, f10
    psq_st f10, 4(axb), 0, 0
}

f32 PSVECDistance(const register f32 *a, const register f32 *b) {
    extern f32 lbl_8036BC70;
    extern f32 lbl_8036BC74;
    register f32 v0yz, v1yz, v0xy, v1xy, dyz, dxy;
    register f32 sqdist, rdist;
    register f32 nwork0, nwork1;
    register f32 c_half, c_three, c_zero;

    asm {
        psq_l v0yz, 0x4(a), 0, 0
        psq_l v1yz, 0x4(b), 0, 0
        ps_sub dyz, v0yz, v1yz
        psq_l v0xy, 0x0(a), 0, 0
        psq_l v1xy, 0x0(b), 0, 0
        ps_mul dyz, dyz, dyz
        ps_sub dxy, v0xy, v1xy
    }

    c_half = lbl_8036BC70;

    asm {
        ps_madd sqdist, dxy, dxy, dyz
        fsubs c_zero, c_half, c_half
        ps_sum0 sqdist, sqdist, dyz, dyz
        fcmpu cr0, c_zero, sqdist
        beq L_00000CBC
    }

    c_three = lbl_8036BC74;

    asm {
        frsqrte rdist, sqdist
        fmuls nwork0, rdist, rdist
        fmuls nwork1, rdist, c_half
        fnmsubs nwork0, nwork0, sqdist, c_three
        fmuls rdist, nwork0, nwork1
        fmuls sqdist, sqdist, rdist
    L_00000CBC:
    }

    return sqdist;
}
