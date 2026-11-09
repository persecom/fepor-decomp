/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
extern s32 lbl_803682F0;
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

static u32 lbl_803392E8[8];
static u32 lbl_80339308[8];
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
extern s32 lbl_803682F0;
extern s32 fn_80015A14(void);
#include "common.h"
#include <dolphin/os.h>
extern s32 lbl_8036841C;
extern s32 lbl_80368420;
extern s32 lbl_80368424;
extern s32 lbl_80368428;
extern s32 lbl_8036842C;
extern u8 lbl_80368430;
extern u8 lbl_80368431;
extern f32 lbl_8036BADC;
extern f32 lbl_8036BAE0;

void fn_80202540(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    extern f32 lbl_8036BC38;
    extern f32 lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8036BC38;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036BC38;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg2;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_8036BC38;
}

f32 fn_80202574(f64 farg0, f64 farg1, f64 farg2) {
    M2C_ERROR(/* unknown instruction: ps_sum1 $f5, $f1, $f5, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f7, $f2, $f7, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f8, $f3, $f8, $f8 */);
    return (f32) farg0;
}

void fn_802025C0(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    extern f32 lbl_8036BC3C;
    
    *(f32*)((u8*)arg0 + 0x0) = farg0;
    *(f32*)((u8*)arg0 + 0x4) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0xC) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0x14) = farg1;
    *(f32*)((u8*)arg0 + 0x18) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0x20) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0x28) = farg2;
    *(f32*)((u8*)arg0 + 0x2C) = lbl_8036BC3C;
}

void fn_802026E4(f32 *out, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 sp30;
    f32 sp34;
    f32 sp38;

    sp30 = arg2[0] - arg3[0];
    sp34 = arg2[1] - arg3[1];
    sp38 = arg2[2] - arg3[2];

    // Assuming fn_802031E8 is some kind of vector normalization
    // and fn_80203290 is cross product but with different parameters
    PSVECCrossProduct(&sp30, &sp34, out);
    out[3] = -(arg2[2] * sp38 + (arg2[0] * sp30 + arg2[1] * sp34));
}

void fn_80202870(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 fn_80238A0C(f32, f32);
    extern f32 lbl_8036BC38;
    extern f32 lbl_8036BC3C;
    extern f32 lbl_8036BC40;
    extern f32 lbl_8036BC4C;
    extern f32 lbl_8036BC50;
    f32 temp_f4;

    temp_f4 = lbl_8036BC38 / fn_80238A0C(lbl_8036BC50 * (lbl_8036BC40 * farg0), lbl_8036BC40);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (farg2 * (temp_f4 / farg1));
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 8) = (f32) -farg4;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_f4 * farg3);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) -farg5;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036BC4C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_8036BC3C;
}

void fn_8020293C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, f32 farg6, f32 farg7) {
    extern f32 lbl_8036BC38;
    extern f32 lbl_8036BC48;
    extern f32 lbl_8036BC3C;

    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;

    temp_f12 = lbl_8036BC38 / (farg3 - farg2);
    temp_f10 = lbl_8036BC38 / (farg0 - farg1);

    temp_f0 = farg4 * temp_f12;
    temp_f1 = temp_f12 * -(farg3 + farg2);
    temp_f2 = farg5 * temp_f10;
    temp_f3 = temp_f10 * -(farg0 + farg1);
    temp_f4 = lbl_8036BC48 * temp_f12;
    temp_f5 = lbl_8036BC48 * temp_f10;

    M2C_FIELD(arg0, f32 *, 0) = temp_f4 * farg4;
    M2C_FIELD(arg0, f32 *, 4) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 8) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0xC) = farg6 + (temp_f0 * temp_f1);
    M2C_FIELD(arg0, f32 *, 0x10) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f5 * farg5;
    M2C_FIELD(arg0, f32 *, 0x18) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg7 + (temp_f2 * temp_f3);
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_8036BC38;
}

f32 fn_80202A18(void) {
    M2C_ERROR(/* unknown instruction: ps_mul $f8, $f0, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f10, $f2, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f12, $f4, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f8, $f8, $f8, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f10, $f10, $f10, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f12, $f12, $f12, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f9, $f1, $f7, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f11, $f3, $f7, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f13, $f5, $f7, $f12 */);
    return M2C_ERROR(/* psq_l unimplemented */);
}

void fn_80202A6C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 fn_80238A0C(f32, f32);
    extern f32 lbl_8036BC58;
    extern f32 lbl_8036BC60;
    extern f32 lbl_8036BC64;
    extern f32 lbl_8036BC68;
    extern f32 lbl_8036BC6C;
    f32 temp_f3;
    f32 temp_f4;

    temp_f4 = lbl_8036BC58 / fn_80238A0C(lbl_8036BC6C * (lbl_8036BC68 * farg0), lbl_8036BC68);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f4 / farg1);
    temp_f3 = lbl_8036BC58 / (farg3 - farg2);
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (-farg2 * temp_f3);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (temp_f3 * -(farg3 * farg2));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036BC64;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036BC60;
}

void fn_80202B3C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    extern f32 lbl_8036BC58;
    extern f32 lbl_8036BC5C;
    extern f32 lbl_8036BC60;
    extern f32 lbl_8036BC64;
    f32 temp_f10;
    f32 temp_f4;
    f32 temp_f8;

    temp_f10 = lbl_8036BC58 / (farg3 - farg2);
    temp_f8 = lbl_8036BC58 / (farg0 - farg1);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (lbl_8036BC5C * temp_f10);
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_8036BC60;
    temp_f4 = lbl_8036BC58 / (farg5 - farg4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_f10 * -(farg3 + farg2));
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (lbl_8036BC5C * temp_f8);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f8 * -(farg0 + farg1));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (lbl_8036BC64 * temp_f4);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (-farg5 * temp_f4);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036BC58;
}

void fn_80202BD4(f32* src, f32* dst) {
    *(u64*)&dst[0] = *(u64*)&src[0];
    *(u64*)&dst[2] = *(u64*)&src[2];
    *(u64*)&dst[4] = *(u64*)&src[4];
    *(u64*)&dst[6] = *(u64*)&src[6];
}

f32 fn_80202C18(void) {
    M2C_ERROR(/* unknown instruction: ps_muls0 $f6, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f6, $f3, $f0, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f6, $f4, $f1, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f6, $f5, $f1, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f8, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f8, $f3, $f0, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f8, $f4, $f1, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f8, $f5, $f1, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f10, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f10, $f3, $f0, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f10, $f4, $f1, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f10, $f5, $f1, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f12, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f12, $f3, $f0, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f12, $f4, $f1, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f12, $f5, $f1, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f7, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f7, $f3, $f0, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f7, $f4, $f1, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f7, $f5, $f1, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f9, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f9, $f3, $f0, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f9, $f4, $f1, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f9, $f5, $f1, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f11, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f11, $f3, $f0, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f11, $f4, $f1, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f11, $f5, $f1, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f13, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f13, $f3, $f0, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f13, $f4, $f1, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f13, $f5, $f1, $f13 */);
    return M2C_ERROR(/* psq_l unimplemented */);
}

void fn_80203184(void) {
    M2C_ERROR(/* unknown instruction: ps_add $f6, $f2, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_add $f7, $f3, $f5 */);
}

void fn_802031A8(float *arg0, float *arg1, float *arg2) {
    arg2[0] = arg0[0] - arg1[0];
    arg2[1] = arg0[1] - arg1[1];
}

void fn_802031CC(void *arg0, void *arg1) {
    f64* a = (f64*)arg0;
    f64* b = (f64*)arg1;
    b[0] = a[0] * 0.5;
    b[1] = a[1] * 0.5;
    return;
}

f32 fn_8020322C(void *arg0) {
    extern f32 lbl_8036BC70;
    extern f32 lbl_8036BC74;
    f32 temp_f0;
    f32 var_f1;

    M2C_ERROR(/* unknown instruction: ps_mul $f0, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f1, $f1, $f1, $f0 */);
    var_f1 = M2C_ERROR(/* unknown instruction: ps_sum0 $f1, $f1, $f0, $f0 */);
    if (var_f1 != (lbl_8036BC70 - lbl_8036BC70)) {
        temp_f0 = __frsqrte(var_f1);
        var_f1 *= -((temp_f0 * temp_f0 * var_f1) - lbl_8036BC74) * (temp_f0 * lbl_8036BC70);
    }
    return var_f1;
}

f32 fn_802032CC(void) {
    extern f32 lbl_8036BC70;
    extern f32 lbl_8036BC74;
    f32 temp_f0;
    f32 var_f1;

    M2C_ERROR(/* unknown instruction: ps_sub $f2, $f0, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f2, $f2, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_sub $f0, $f0, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f1, $f0, $f0, $f2 */);
    var_f1 = M2C_ERROR(/* unknown instruction: ps_sum0 $f1, $f1, $f2, $f2 */);
    if ((lbl_8036BC70 - lbl_8036BC70) != var_f1) {
        temp_f0 = __frsqrte(var_f1);
        var_f1 *= -((temp_f0 * temp_f0 * var_f1) - lbl_8036BC74) * (temp_f0 * lbl_8036BC70);
    }
    return var_f1;
}
