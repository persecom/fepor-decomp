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

void fn_802240F0(u32 arg0, u32 *arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
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
    f32 var_f31;
    f32 var_f3;
    f32 var_f4;
    f32 half;
    f64 one;
    f64 halfd;
    f32 two;
    f32 z;
    /* decl order from 85.3% attempt; names = target regs after observed alloc */
    s32 r23_exp;
    u32 *r24_ptr;
    s32 r29_f0;   /* was var_r26 slot -> r29 */
    s32 r28_f2;   /* was var_r27 slot -> r28 */
    s32 r27_ee;   /* was coord slot -> r27 */
    s32 r26_f1;   /* was var_r28 slot -> r26 */
    s32 r25_coord; /* was temp_r31 slot -> r25 */
    s32 r30_ef;   /* was var_r29 slot -> r30 */
    s32 r31_flag; /* was var_r30 slot -> r31 */

    r31_flag = 0; /* will become ef zero-base; swapped below */
    /* FORCE: first assigned to r31-slot is flag */
    r31_flag = (arg0 >> 3) & 1;
    r30_ef = 0;
    r24_ptr = arg1;
    r29_f0 = r30_ef;
    r25_coord = arg0 & 7;
    r26_f1 = 0;
    r28_f2 = 0;
    r27_ee = 0;
    if (r31_flag != 0) {
        if (farg3 == farg2 || farg1 == farg0) {
            sp24 = lbl_8036BD58;
            sp20 = lbl_8036BD58;
        } else {
            var_f3 = lbl_8036BD5C / (farg1 - farg0);
            sp24 = var_f3 * (farg3 - farg2);
            sp20 = var_f3 * (farg0 - farg2);
        }
    } else {
        if (farg3 == farg2 || farg1 == farg0) {
            var_f3 = lbl_8036BD58;
            var_f4 = lbl_8036BD60;
            var_f31 = var_f3;
        } else {
            f32 temp_f0 = farg3 - farg2;
            f32 temp_f5 = farg1 - farg0;
            var_f4 = farg3 / temp_f0;
            var_f31 = farg0 / temp_f5;
            var_f3 = (farg3 * farg2) / (temp_f0 * temp_f5);
        }
        {
            s32 var_r3 = 0;
            half = lbl_8036BD60;
            one = lbl_8036BD68;
            while (var_f4 > one) {
                var_f4 *= half;
                var_r3 += 1;
            }
            halfd = lbl_8036BD78;
            two = lbl_8036BD70;
            z = lbl_8036BD58;
            while (var_f4 > z && var_f4 < halfd) {
                var_f4 *= two;
                var_r3 -= 1;
            }
            r23_exp = var_r3 + 1;
        }
        sp24 = var_f3 / (f32)(1 << r23_exp);
        r30_ef = __rlwimi(r30_ef, fn_8022C568(lbl_8036BD80 * var_f4), 0, 8, 31);
        sp20 = var_f31;
        r29_f0 = __rlwimi(r29_f0, r23_exp, 0, 27, 31);
        {
            s32 a = r30_ef;
            s32 b = r29_f0;
            a = __rlwimi(a, 0xef, 24, 0, 7);
            b = __rlwimi(b, 0xf0, 24, 0, 7);
            r30_ef = a;
            r29_f0 = b;
        }
    }

    {
        u32 bits24 = *(u32 *)&sp24;
        u32 t = *r24_ptr;
        u32 reg;
        u32 bits20;

        r27_ee = __rlwimi(r27_ee, bits24, 20, 21, 31);
        reg = r27_ee;
        *(volatile u8 *)0xCC008000 = 0x61;
        reg = __rlwimi(reg, bits24, 20, 13, 20);
        bits20 = *(u32 *)&sp20;
        reg = __rlwimi(reg, bits24, 20, 12, 12);
        reg = __rlwimi(reg, 0xee, 24, 0, 7);
        *(volatile u32 *)0xCC008000 = reg;

        r26_f1 = __rlwimi(r26_f1, bits20, 20, 21, 31);
        reg = r26_f1;
        *(volatile u8 *)0xCC008000 = 0x61;
        reg = __rlwimi(reg, bits20, 20, 13, 20);
        reg = __rlwimi(reg, bits20, 20, 12, 12);
        *(volatile u32 *)0xCC008000 = (u32)r30_ef;
        reg = __rlwimi(reg, r31_flag, 20, 11, 11);
        *(volatile u8 *)0xCC008000 = 0x61;
        reg = __rlwimi(reg, r25_coord, 21, 8, 10);
        reg = __rlwimi(reg, 0xf1, 24, 0, 7);
        *(volatile u32 *)0xCC008000 = (u32)r29_f0;
        r28_f2 = __rlwimi(r28_f2, t, 24, 8, 31);
        *(volatile u8 *)0xCC008000 = 0x61;
        *(volatile u32 *)0xCC008000 = reg;
        reg = __rlwimi(r28_f2, 0xf2, 24, 0, 7);
        *(volatile u8 *)0xCC008000 = 0x61;
        *(volatile u32 *)0xCC008000 = reg;
        __GXData[1] = 0;
    }
}

