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

void fn_80202300(s32 arg0, s32 arg1, f32 farg0) {
    f32 fn_80238A30(f32);
    f32 fn_80238A54(f32);
    void fn_80202370(s32, s32, f32, f32);

    f32 temp_f31 = fn_80238A30(farg0);
    fn_80202370(arg0, arg1, temp_f31, fn_80238A54(farg0));
}

void fn_802024D0(s32 arg0, s32 arg1, f32 farg0) {
    f32 fn_80238A30(f32);
    f32 fn_80238A54(f32);
    void fn_80202420(s32, s32, f32, f32);
    f32 temp_f31;

    temp_f31 = fn_80238A30(farg0);
    fn_80202420(arg0, arg1, temp_f31, fn_80238A54(farg0));
}

