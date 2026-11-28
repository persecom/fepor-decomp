/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
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

#pragma peephole off
void PSMTXRotRad(void *m, s32 axis, f32 rad) {
    f32 sinf(f32);
    f32 cosf(f32);
    void fn_80202370(void *, s32, f32, f32);
    f32 s;
    f32 c;

    s = sinf(rad);
    c = cosf(rad);
    fn_80202370(m, axis, s, c);
}
#pragma peephole on
#pragma push
#pragma peephole off
void fn_80202370(register void *m, register s32 axis, register f32 sinA, register f32 cosA) {
    extern const f32 lbl_8036BC3C;
    extern const f32 lbl_8036BC38;
    register f32 fc0, fc1, nsinA;
    register f32 fw0, fw1, fw2, fw3;

	asm {
		frsp        sinA, sinA
		frsp        cosA, cosA
	}

    fc0 = lbl_8036BC3C;
    fc1 = lbl_8036BC38;

	asm {
		ori         axis, axis, 0x20
		ps_neg      nsinA, sinA
		cmplwi      axis, 'x'
		beq         _case_x
		cmplwi      axis, 'y'
		beq         _case_y
		cmplwi      axis, 'z'
		beq         _case_z
		b           _end

	_case_x:
		psq_st      fc1,  0(m), 1, 0
		psq_st      fc0,  4(m), 0, 0
		ps_merge00  fw0, sinA, cosA
		psq_st      fc0, 12(m), 0, 0
		ps_merge00  fw1, cosA, nsinA
		psq_st      fc0, 28(m), 0, 0
		psq_st      fc0, 44(m), 1, 0
		psq_st      fw0, 36(m), 0, 0
		psq_st      fw1, 20(m), 0, 0
		b           _end;

	_case_y:
		ps_merge00  fw0, cosA, fc0
		ps_merge00  fw1, fc0, fc1
		psq_st      fc0, 24(m), 0, 0
		psq_st      fw0,  0(m), 0, 0
		ps_merge00  fw2, nsinA, fc0
		ps_merge00  fw3, sinA, fc0
		psq_st      fw0, 40(m), 0, 0;
		psq_st      fw1, 16(m), 0, 0;
		psq_st      fw3,  8(m), 0, 0;
		psq_st      fw2, 32(m), 0, 0;
		b           _end;

	_case_z:
		psq_st      fc0,  8(m), 0, 0
		ps_merge00  fw0, sinA, cosA
		ps_merge00  fw2, cosA, nsinA
		psq_st      fc0, 24(m), 0, 0
		psq_st      fc0, 32(m), 0, 0
		ps_merge00  fw1, fc1, fc0
		psq_st      fw0, 16(m), 0, 0
		psq_st      fw2,  0(m), 0, 0
		psq_st      fw1, 40(m), 0, 0

	_end:
	}
}
#pragma pop

void fn_80202420(register s32 m, register s32 axis, register f32 sT, register f32 cT) {
    extern const f32 lbl_8036BC40;
    extern const f32 lbl_8036BC44;
    register f32 tT, fc0;
    register f32 tmp0, tmp1, tmp2, tmp3, tmp4;
    register f32 tmp5, tmp6, tmp7, tmp8, tmp9;
    tmp9 = lbl_8036BC40;
    tmp8 = lbl_8036BC44;

    asm {
        frsp cT, cT;
        psq_l tmp0, 0(axis), 0, 0;
        frsp sT, sT;
        lfs tmp1, 8(axis);
        ps_mul tmp2, tmp0, tmp0;
        fadds tmp7, tmp9, tmp9;
        ps_madd tmp3, tmp1, tmp1, tmp2;
        fsubs fc0, tmp9, tmp9;
        ps_sum0 tmp4, tmp3, tmp1, tmp2;
        fsubs tT, tmp7, cT;
        frsqrte tmp5, tmp4;
        fmuls tmp2, tmp5, tmp5;
        fmuls tmp3, tmp5, tmp9;
        fnmsubs tmp2, tmp2, tmp4, tmp8;
        fmuls tmp5, tmp2, tmp3;
        ps_merge00  cT, cT, cT;
        ps_muls0 tmp0, tmp0, tmp5;
        ps_muls0 tmp1, tmp1, tmp5;
        ps_muls0 tmp4, tmp0, tT;
        ps_muls0 tmp9, tmp0, sT;
        ps_muls0 tmp5, tmp1, tT;
        ps_muls1 tmp3, tmp4, tmp0;
        ps_muls0 tmp2, tmp4, tmp0;
        ps_muls0 tmp4, tmp4, tmp1;
        fnmsubs tmp6, tmp1, sT, tmp3;
        fmadds tmp7, tmp1, sT, tmp3;
        ps_neg tmp0, tmp9;
        ps_sum0 tmp8, tmp4, fc0, tmp9;
        ps_sum0 tmp2, tmp2, tmp6, cT;
        ps_sum1 tmp3, cT, tmp7, tmp3;
        ps_sum0 tmp6, tmp0, fc0, tmp4;
        psq_st tmp8, 8(m), 0, 0;
        ps_sum0 tmp0, tmp4, tmp4, tmp0;
        psq_st tmp2, 0(m), 0, 0;
        ps_muls0 tmp5, tmp5, tmp1;
        psq_st tmp3, 16(m), 0, 0;
        ps_sum1 tmp4, tmp9, tmp0, tmp4;
        psq_st tmp6, 24(m), 0, 0;
        ps_sum0 tmp5, tmp5, fc0, cT;
        psq_st tmp4, 32(m), 0, 0;
        psq_st tmp5, 40(m), 0, 0;
    }
}

#pragma peephole off
void fn_802024D0(s32 arg0, s32 arg1, f32 rad) {
    f32 sinf(f32);
    f32 cosf(f32);
    void fn_80202420(s32, s32, f32, f32);
    f32 s;
    f32 c;
    s = sinf(rad);
    c = cosf(rad);
    fn_80202420(arg0, arg1, s, c);
}
#pragma peephole reset
