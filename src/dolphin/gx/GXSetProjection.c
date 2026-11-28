/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

// GXTexObj structure (from headers or similar functions)
typedef struct {
    u32 dummy[4];
} GXTexObj;

#pragma fp_contract off

typedef struct { f32 x, y; } F32Pair;

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

extern u16* __GXData;

extern u16 *__GXData;

extern f32 lbl_8036BDC0;

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

static inline u32 __GXReadCPCounterU32(u32 lo, u32 hi) {
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    volatile u16 *regH = (volatile u16 *)__cpReg + hi;
    volatile u16 *regL = (volatile u16 *)__cpReg + lo;

    ctrH0 = *regH;
    do {
        ctrH1 = ctrH0;
        ctrL = *regL;
        ctrH0 = *regH;
    } while (ctrH0 != ctrH1);
    return (ctrH0 << 16) | ctrL;
}

extern u16 *__GXData;
extern u16 *__GXData;
extern u16 *__GXData;
extern u16 *__GXData;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16 *__GXData;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16 *__GXData;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16* lbl_80368790;
extern u16* __peReg;
extern u16 *__GXData;

void fn_80222644(void *, void *, u16, u16, s32, s32, s32, u8);

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

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

#pragma peephole on

#pragma peephole on

#pragma peephole on

#pragma peephole on

#pragma peephole reset

#pragma opt_propagation on

#pragma global_optimizer off

#pragma global_optimizer on

#pragma global_optimizer on

/* Transform a point by the model-view matrix and project it to screen space (perspective or ortho). */

#pragma ppc_intrinsics on
#pragma optimization_level 3

#pragma ppc_intrinsics on
static inline void WriteProjPS(const register f32 proj[6], register volatile void *dest) {
    register f32 p01, p23, p45;
    asm {
psq_l p01, 0(proj), 0, 0
psq_l p23, 8(proj), 0, 0
psq_l p45, 16(proj), 0, 0
psq_st p01, 0(dest), 0, 0
psq_st p23, 0(dest), 0, 0
psq_st p45, 0(dest), 0, 0
    }
}
static inline void __GXSetProjection(void) {
    u32 reg = 0x00061020;
    GXWGFifo.u8 = (u8)(0x10);
    GXWGFifo.u32 = (u32)(reg);
    WriteProjPS((f32 *)((u8 *)__GXData + 0x4DC), (volatile void *)0xCC008000);
    GXWGFifo.u32 = (u32)(*(u32 *)((u8 *)__GXData + 0x4D8));
}
void GXSetProjection(f32 *mtx, s32 type)
{
    u8 *gx;

    gx = (u8 *)__GXData;
    *(s32 *)(gx + 0x4D8) = type;
    *(f32 *)(gx + 0x4DC) = mtx[0];
    *(f32 *)(gx + 0x4E4) = mtx[5];
    *(f32 *)(gx + 0x4EC) = mtx[10];
    *(f32 *)(gx + 0x4F0) = mtx[11];
    if (type == 1) {
        *(f32 *)(gx + 0x4E0) = mtx[3];
        *(f32 *)(gx + 0x4E8) = mtx[7];
    } else {
        *(f32 *)(gx + 0x4E0) = mtx[2];
        *(f32 *)(gx + 0x4E8) = mtx[6];
    }
    __GXSetProjection();
    *(u16 *)((u8 *)__GXData + 2) = 1;
}

#pragma peephole off

#pragma peephole on

