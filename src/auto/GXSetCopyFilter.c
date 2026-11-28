/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16 lbl_80368784;
extern s32 gSaveDataBase;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);


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

typedef struct GXRenderModeObj {
    u32 viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u16 viXOrigin;
    u16 viYOrigin;
    u16 viWidth;
    u16 viHeight;
    s32 xFBmode;
    u8 field_rendering;
    u8 aa;
    u8 sample_pattern[12][2];
    u8 vfilter[7];
} GXRenderModeObj;

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

extern u16 *__peReg;

extern u16* __peReg;

extern u32 lbl_80368738;
extern u32 __GXCurrentCPUFifo;

extern s32 jumptable_8029E0B8[];

extern u16* const __GXData;

extern f32 lbl_8036BDC0;

typedef union {
    u8 u8;
    u16 u16;
    u32 u32;
    s8 s8;
    s16 s16;
    s32 s32;
    f32 f32;
} PPCWGPipe;

volatile PPCWGPipe GXWGFifo : 0xCC008000;

static inline u32 __GXReadPECounterU32(u32 lo, u32 hi) {
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = *((volatile u16 *)__peReg + hi);
    do {
        ctrH1 = ctrH0;
        ctrL = *((volatile u16 *)__peReg + lo);
        ctrH0 = *((volatile u16 *)__peReg + hi);
    } while (ctrH0 != ctrH1);
    return (ctrH0 << 16) | ctrL;
}

extern u16* __cpReg;

extern u16* lbl_80368790;

/* Shrink a render mode's framebuffer/VI rects to leave an overscan border. */

#pragma use_lmw_stmw on
extern f64 lbl_8036BCD8;
extern f32 lbl_8036BCD0;
s32 __cvt_fp2unsigned(f32);
#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on

void fn_80221824(u8 aa, const u8 sample_pattern[12][2], u8 vf, const u8 vfilter[7]) {
    u32 msLoc[4];
    u32 coeff0;
    u32 coeff1;

    if (aa != 0) {
        msLoc[0] = 0;
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[0][0], 0, 28, 31);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[0][1], 4, 24, 27);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[1][0], 8, 20, 23);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[1][1], 12, 16, 19);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[2][0], 16, 12, 15);
        msLoc[0] = __rlwimi(msLoc[0], sample_pattern[2][1], 20, 8, 11);
        msLoc[0] = __rlwimi(msLoc[0], 1, 24, 0, 7);

        msLoc[1] = 0;
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[3][0], 0, 28, 31);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[3][1], 4, 24, 27);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[4][0], 8, 20, 23);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[4][1], 12, 16, 19);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[5][0], 16, 12, 15);
        msLoc[1] = __rlwimi(msLoc[1], sample_pattern[5][1], 20, 8, 11);
        msLoc[1] = __rlwimi(msLoc[1], 2, 24, 0, 7);

        msLoc[2] = 0;
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[6][0], 0, 28, 31);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[6][1], 4, 24, 27);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[7][0], 8, 20, 23);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[7][1], 12, 16, 19);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[8][0], 16, 12, 15);
        msLoc[2] = __rlwimi(msLoc[2], sample_pattern[8][1], 20, 8, 11);
        msLoc[2] = __rlwimi(msLoc[2], 3, 24, 0, 7);

        msLoc[3] = 0;
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[9][0], 0, 28, 31);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[9][1], 4, 24, 27);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[10][0], 8, 20, 23);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[10][1], 12, 16, 19);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[11][0], 16, 12, 15);
        msLoc[3] = __rlwimi(msLoc[3], sample_pattern[11][1], 20, 8, 11);
        msLoc[3] = __rlwimi(msLoc[3], 4, 24, 0, 7);
    } else {
        msLoc[0] = 0x01666666;
        msLoc[1] = 0x02666666;
        msLoc[2] = 0x03666666;
        msLoc[3] = 0x04666666;
    }

    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = msLoc[0];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = msLoc[1];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = msLoc[2];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = msLoc[3];

    coeff0 = 0;
    coeff0 = __rlwimi(coeff0, 0x53, 24, 0, 7);
    coeff1 = 0;
    coeff1 = __rlwimi(coeff1, 0x54, 24, 0, 7);

    if (vf != 0) {
        coeff0 = __rlwimi(coeff0, vfilter[0], 0, 26, 31);
        coeff0 = __rlwimi(coeff0, vfilter[1], 6, 20, 25);
        coeff0 = __rlwimi(coeff0, vfilter[2], 12, 14, 19);
        coeff0 = __rlwimi(coeff0, vfilter[3], 18, 8, 13);
        coeff1 = __rlwimi(coeff1, vfilter[4], 0, 26, 31);
        coeff1 = __rlwimi(coeff1, vfilter[5], 6, 20, 25);
        coeff1 = __rlwimi(coeff1, vfilter[6], 12, 14, 19);
    } else {
        coeff0 = __rlwimi(coeff0, 0, 0, 26, 31);
        coeff0 = __rlwimi(coeff0, 0, 6, 20, 25);
        coeff0 = __rlwimi(coeff0, 21, 12, 14, 19);
        coeff0 = __rlwimi(coeff0, 22, 18, 8, 13);
        coeff1 = __rlwimi(coeff1, 21, 0, 26, 31);
        coeff1 = __rlwimi(coeff1,  0, 6, 20, 25);
        coeff1 = __rlwimi(coeff1,  0, 12, 14, 19);
    }

    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = coeff0;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = coeff1;
    __GXData[1] = 0;
}
#pragma use_lmw_stmw reset
