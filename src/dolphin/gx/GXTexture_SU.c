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

extern u16 lbl_80368784;
extern s32 lbl_803682F0;
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

extern u16 *__peReg;

extern u16* __peReg;

extern u32 lbl_80368738;
extern u32 lbl_80368770;

extern s32 jumptable_8029E0B8[];

extern u16* __GXData;

extern u16 *__GXData;

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

#pragma use_lmw_stmw on
void fn_802240F0(u32 arg0, u32 *arg1, f32 a, f32 b, f32 c, f32 d) {
    s32 fn_8022C568(f32);
    extern f32 lbl_8036BD58;
    extern f32 lbl_8036BD5C;
    extern f32 lbl_8036BD60;
    extern f64 lbl_8036BD68;
    extern f32 lbl_8036BD70;
    extern f64 lbl_8036BD78;
    extern f32 lbl_8036BD80;
    f32 sp24;
    f32 sp20;
    f32 f31, f3, f4, half, two, z;
    f64 one, halfd;
    s32 exp;
    u32 *ptr;
    s32 slot_r26;
    s32 acc0;
    s32 slot_r25;
    s32 slot_r28;
    s32 f0r;
    s32 ef;
    s32 flag;

    ef = 0;
    flag = (arg0 >> 3) & 1;
    ptr = arg1;
    f0r = ef;
    slot_r28 = arg0 & 7;
    slot_r26 = 0;
    acc0 = 0;
    slot_r25 = 0;
    if (flag) {
        if (d == c || b == a) {
            sp24 = lbl_8036BD58;
            sp20 = lbl_8036BD58;
        } else {
            f3 = lbl_8036BD5C / (b - a);
            sp24 = f3 * (d - c);
            sp20 = f3 * (a - c);
        }
    } else {
        if (d == c || b == a) {
            f3 = lbl_8036BD58;
            f4 = lbl_8036BD60;
            f31 = f3;
        } else {
            f32 t0 = d - c;
            f32 t1 = b - a;
            f4 = d / t0;
            f31 = a / t1;
            f3 = (d * c) / (t0 * t1);
        }
        for (exp = 0; f4 > one;) {
            one = lbl_8036BD68;
            half = lbl_8036BD60;
            break;
        }
        half = lbl_8036BD60;
        one = lbl_8036BD68;
        for (exp = 0; f4 > one; exp++) {
            f4 *= half;
        }
        halfd = lbl_8036BD78;
        two = lbl_8036BD70;
        z = lbl_8036BD58;
        for (; f4 > z && f4 < halfd; exp--) {
            f4 *= two;
        }
        exp += 1;
        sp24 = f3 / (f32)(1 << exp);
        ef = __rlwimi(ef, fn_8022C568(lbl_8036BD80 * f4), 0, 8, 31);
        sp20 = f31;
        f0r = __rlwimi(f0r, exp, 0, 27, 31);
        {
            s32 ta = ef;
            s32 tb = f0r;
            ta = __rlwimi(ta, 0xef, 24, 0, 7);
            tb = __rlwimi(tb, 0xf0, 24, 0, 7);
            ef = ta;
            f0r = tb;
        }
    }
    {
        u32 w24 = *(u32 *)&sp24;
        u32 t = *ptr;
        u32 reg;
        u32 w20;
        acc0 = __rlwimi(acc0, w24, 20, 21, 31);
        reg = acc0;
        GXWGFifo.u8 = 0x61;
        reg = __rlwimi(reg, w24, 20, 13, 20);
        w20 = *(u32 *)&sp20;
        reg = __rlwimi(reg, w24, 20, 12, 12);
        reg = __rlwimi(reg, 0xee, 24, 0, 7);
        GXWGFifo.u32 = reg;
        slot_r25 = __rlwimi(slot_r25, w20, 20, 21, 31);
        reg = slot_r25;
        GXWGFifo.u8 = 0x61;
        reg = __rlwimi(reg, w20, 20, 13, 20);
        reg = __rlwimi(reg, w20, 20, 12, 12);
        GXWGFifo.u32 = (u32)ef;
        reg = __rlwimi(reg, flag, 20, 11, 11);
        GXWGFifo.u8 = 0x61;
        reg = __rlwimi(reg, slot_r28, 21, 8, 10);
        reg = __rlwimi(reg, 0xf1, 24, 0, 7);
        GXWGFifo.u32 = (u32)f0r;
        slot_r26 = __rlwimi(slot_r26, t, 24, 8, 31);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = reg;
        reg = __rlwimi(slot_r26, 0xf2, 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = reg;
        __GXData[1] = 0;
    }
}
#pragma use_lmw_stmw reset
