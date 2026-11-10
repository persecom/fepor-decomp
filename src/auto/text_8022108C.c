/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

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

void fn_8022108C(const GXRenderModeObj *rmin, GXRenderModeObj *rmout, u16 hor, u16 ver) {
    u16 hor2 = (u16)(hor * 2);
    u16 ver2 = (u16)(ver * 2);
    u32 verf;
    u32 mode;

    if (rmin != rmout) {
        *rmout = *rmin;
    }

    mode = rmin->viTVmode & 3;
    rmout->fbWidth = (u16)(rmin->fbWidth - hor2);
    verf = (ver2 * rmin->efbHeight) / (u32)rmin->xfbHeight;
    rmout->efbHeight = (u16)(rmin->efbHeight - verf);
    if (rmin->xFBmode == 0 && mode == 0) {
        rmout->xfbHeight = (u16)(rmin->xfbHeight - ver2 / 2);
    } else {
        rmout->xfbHeight = (u16)(rmin->xfbHeight - ver2);
    }

    rmout->viWidth = (u16)(rmin->viWidth - hor2);
    if (mode == 1) {
        rmout->viHeight = (u16)(rmin->viHeight - ver2 * 2);
    } else {
        rmout->viHeight = (u16)(rmin->viHeight - ver2);
    }

    rmout->viXOrigin = (u16)(rmin->viXOrigin + hor);
    rmout->viYOrigin = (u16)(rmin->viYOrigin + ver);
}

void fn_802212C8(s32 arg0) {
    __GXData[0x1E8/2] = 0;
    __GXData[0x1E8/2] = (__GXData[0x1E8/2] & ~0x3FF) | ((arg0 >> 5) & 0x3FF);
    __GXData[0x1E8/2] = (__GXData[0x1E8/2] & ~0xFF000000) | 0x4D000000;
}

u32 fn_8022142C(void) {
    return lbl_80368770 + (lbl_80368738 * 2);
}

#pragma use_lmw_stmw on
extern f64 lbl_8036BCD8;
extern f32 lbl_8036BCD0;
s32 fn_8022C568(f32);
#pragma use_lmw_stmw on
f32 fn_802214A8(u16 efbHeight, u16 xfbHeight) {
    f64 bias;
    f32 f256;
    f32 best;
    f32 ratio;
    u32 efb;
    u32 fixed;
    u32 xfbOrig;
    u32 yScale;
    u32 save0;
    u32 efbOrig;
    u32 save1;
    u32 denom;
    u32 lines;
    u32 cmp;
    f32 tmp;
    f32 inv;

    yScale = xfbHeight;
    efb = efbHeight;
    save0 = efbHeight;
    save1 = xfbHeight;
    tmp = (f32)yScale / (f32)efb;
    inv = lbl_8036BCD0 / tmp;
    ratio = tmp;
    denom = (u32)fn_8022C568(inv) & 0x1FF;
    fixed = (efb - 1) << 8;
    lines = (fixed / denom) + 1;
    if (denom > 0x80U && denom < 0x100U) {
        while ((denom & 1) == 0) {
            denom >>= 1;
        }
        if ((efb % denom) == 0) {
            lines += 1;
        }
    }
    if (lines > 0x400U) {
        lines = 0x400U;
    }
    cmp = lines;

    bias = lbl_8036BCD8;
    f256 = lbl_8036BCD0;
    xfbOrig = save1;
    efbOrig = save0;

    while (cmp > xfbOrig) {
        yScale -= 1;
        tmp = (f32)yScale / (f32)efbOrig;
        inv = f256 / tmp;
        ratio = tmp;
        denom = (u32)fn_8022C568(inv) & 0x1FF;
        lines = (fixed / denom) + 1;
        if (denom > 0x80U && denom < 0x100U) {
            while ((denom & 1) == 0) {
                denom >>= 1;
            }
            if ((efb % denom) == 0) {
                lines += 1;
            }
        }
        if (lines > 0x400U) {
            lines = 0x400U;
        }
        cmp = lines;
    }

    best = ratio;
    bias = lbl_8036BCD8;
    f256 = lbl_8036BCD0;
    efbOrig = save0;

    while (cmp < xfbOrig) {
        yScale += 1;
        best = ratio;
        tmp = (f32)yScale / (f32)efbOrig;
        inv = f256 / tmp;
        ratio = tmp;
        denom = (u32)fn_8022C568(inv) & 0x1FF;
        lines = (fixed / denom) + 1;
        if (denom > 0x80U && denom < 0x100U) {
            while ((denom & 1) == 0) {
                denom >>= 1;
            }
            if ((efb % denom) == 0) {
                lines += 1;
            }
        }
        if (lines > 0x400U) {
            lines = 0x400U;
        }
        cmp = lines;
    }
    return best;
}
#pragma use_lmw_stmw reset

s32 fn_802216E0(s32 arg0) {
    u16 *ptr;
    s32 ret;
    
    ptr = (u16*)0x8036C260 + 0x388 + arg0 * 0x10;
    ret = *ptr;
    return (ret - *(ptr + 7)) + 0x4000;
}

#pragma use_lmw_stmw on
void fn_80221824(u8 aa, const u8 sample_pattern[12][2], u8 vf, const u8 vfilter[7]) {
    u32 reg2;
    u32 reg1;
    u32 reg3;
    u32 reg4;
    u32 reg53;
    u32 reg54;
    u32 t0;
    u32 t1;
    u32 t2;
    u32 t3;
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 t8;
    u32 t9;
    u32 t10;
    u32 t11;
    u32 t12;
    u32 t13;
    u32 t14;
    u32 t15;
    u32 t16;
    u32 t17;
    u32 t18;
    u32 t19;
    u32 t20;
    u32 t21;
    u32 t22;
    u32 t23;

    if (aa) {
        t6 = sample_pattern[3][0];
        reg2 = 0;
        t0 = sample_pattern[0][0];
        reg1 = 0;
        reg2 = __rlwimi(reg2, t6, 0, 28, 31);
        t12 = sample_pattern[6][0];
        reg1 = __rlwimi(reg1, t0, 0, 28, 31);
        reg3 = 0;
        t18 = sample_pattern[9][0];
        reg3 = __rlwimi(reg3, t12, 0, 28, 31);
        reg4 = 0;
        t1 = sample_pattern[0][1];
        reg4 = __rlwimi(reg4, t18, 0, 28, 31);
        t19 = sample_pattern[9][1];
        t13 = sample_pattern[6][1];
        reg1 = __rlwimi(reg1, t1, 4, 24, 27);
        t2 = sample_pattern[1][0];
        reg4 = __rlwimi(reg4, t19, 4, 24, 27);
        t7 = sample_pattern[3][1];
        t20 = sample_pattern[10][0];
        reg3 = __rlwimi(reg3, t13, 4, 24, 27);
        t14 = sample_pattern[7][0];
        reg1 = __rlwimi(reg1, t2, 8, 20, 23);
        t3 = sample_pattern[1][1];
        reg3 = __rlwimi(reg3, t14, 8, 20, 23);
        t4 = sample_pattern[2][0];
        reg1 = __rlwimi(reg1, t3, 12, 16, 19);
        t5 = sample_pattern[2][1];
        reg1 = __rlwimi(reg1, t4, 16, 12, 15);
        t8 = sample_pattern[4][0];
        reg2 = __rlwimi(reg2, t7, 4, 24, 27);
        t15 = sample_pattern[7][1];
        reg1 = __rlwimi(reg1, t5, 20, 8, 11);
        t9 = sample_pattern[4][1];
        t10 = sample_pattern[5][0];
        reg4 = __rlwimi(reg4, t20, 8, 20, 23);
        reg1 = __rlwimi(reg1, 1, 24, 0, 7);
        t21 = sample_pattern[10][1];
        reg2 = __rlwimi(reg2, t8, 8, 20, 23);
        t11 = sample_pattern[5][1];
        reg2 = __rlwimi(reg2, t9, 12, 16, 19);
        t16 = sample_pattern[8][0];
        reg2 = __rlwimi(reg2, t10, 16, 12, 15);
        reg3 = __rlwimi(reg3, t15, 12, 16, 19);
        t17 = sample_pattern[8][1];
        t22 = sample_pattern[11][0];
        reg3 = __rlwimi(reg3, t16, 16, 12, 15);
        reg4 = __rlwimi(reg4, t21, 12, 16, 19);
        reg4 = __rlwimi(reg4, t22, 16, 12, 15);
        t23 = sample_pattern[11][1];
        reg2 = __rlwimi(reg2, t11, 20, 8, 11);
        reg2 = __rlwimi(reg2, 2, 24, 0, 7);
        reg3 = __rlwimi(reg3, t17, 20, 8, 11);
        reg3 = __rlwimi(reg3, 3, 24, 0, 7);
        reg4 = __rlwimi(reg4, t23, 20, 8, 11);
        reg4 = __rlwimi(reg4, 4, 24, 0, 7);
    } else {
        reg1 = 0x01666666;
        reg2 = 0x02666666;
        reg3 = 0x03666666;
        reg4 = 0x04666666;
    }

    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg1;
    reg53 = __rlwimi(0, 0x53, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg2;
    reg54 = __rlwimi(0, 0x54, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg3;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg4;

    if (vf) {
        reg53 = __rlwimi(reg53, vfilter[0], 0, 26, 31);
        reg54 = __rlwimi(reg54, vfilter[4], 0, 26, 31);
        reg53 = __rlwimi(reg53, vfilter[1], 6, 20, 25);
        reg53 = __rlwimi(reg53, vfilter[2], 12, 14, 19);
        reg54 = __rlwimi(reg54, vfilter[5], 6, 20, 25);
        reg53 = __rlwimi(reg53, vfilter[3], 18, 8, 13);
        reg54 = __rlwimi(reg54, vfilter[6], 12, 14, 19);
    } else {
        reg53 = __rlwimi(reg53, 0, 0, 26, 31);
        reg53 = __rlwimi(reg53, 0, 6, 20, 25);
        reg54 = __rlwimi(reg54, 0x15, 0, 26, 31);
        reg53 = __rlwimi(reg53, 0x15, 12, 14, 19);
        reg54 = __rlwimi(reg54, 0, 6, 20, 25);
        reg54 = __rlwimi(reg54, 0, 12, 14, 19);
        reg53 = __rlwimi(reg53, 0x16, 18, 8, 13);
    }

    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg53;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg54;
    __GXData[1] = 0;
}
#pragma use_lmw_stmw reset

void fn_80221A2C(s32 arg0) {
    M2C_FIELD(__GXData, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1EC), arg0, 7, 23, 24);
}

void fn_80221A40(void)
{
    if (0 == 0) 
    {
        return;
    }
    else 
    {
        return;
    }
}

void fn_80221BA8(void *dest, u8 clear) {
    u32 reg;
    u32 tempPeCtrl;
    u32 phyAddr;
    u8 changePeCtrl;

    if (clear) {
        reg = M2C_FIELD(__GXData, u32 *, 0x1D8);
        reg = __rlwimi(reg, 1, 0, 31, 31);
        reg = __rlwimi(reg, 7, 1, 28, 30);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = reg;

        reg = M2C_FIELD(__GXData, u32 *, 0x1D0);
        reg = __rlwimi(reg, 0, 0, 31, 31);
        reg = __rlwimi(reg, 0, 1, 30, 30);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = reg;
    }

    changePeCtrl = 0;
    tempPeCtrl = M2C_FIELD(__GXData, u32 *, 0x1DC);
    if (M2C_FIELD(__GXData, u8 *, 0x200) && (tempPeCtrl & 7) != 3) {
        changePeCtrl = 1;
        tempPeCtrl = __rlwimi(tempPeCtrl, 3, 0, 29, 31);
    }
    if ((clear || (tempPeCtrl & 7) == 3) && ((tempPeCtrl >> 6) & 1) == 1) {
        changePeCtrl = 1;
        tempPeCtrl = __rlwimi(tempPeCtrl, 0, 6, 25, 25);
    }
    if (changePeCtrl) {
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = tempPeCtrl;
    }

    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1F0);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1F4);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1F8);

    phyAddr = (u32)dest & 0x3FFFFFFF;
    reg = 0;
    reg = __rlwimi(reg, phyAddr >> 5, 0, 11, 31);
    reg = __rlwimi(reg, 0x4B, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;

    M2C_FIELD(__GXData, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1FC), clear, 11, 20, 20);
    M2C_FIELD(__GXData, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1FC), 0, 14, 17, 17);
    M2C_FIELD(__GXData, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1FC), 0x52, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1FC);

    if (clear) {
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1D8);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1D0);
    }
    if (changePeCtrl) {
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1DC);
    }
    M2C_FIELD(__GXData, u16 *, 0x2) = 0;
}

void fn_80221D34(void) {
    register unsigned short *gx_data = __GXData;
    register volatile u8 *fifo8 = (volatile u8 *)0xCC008000;
    register volatile u32 *fifo32 = (volatile u32 *)0xCC008000;

    *fifo8 = 0x61;
    *fifo32 = 0x550003FF;
    *fifo8 = 0x61;
    *fifo32 = 0x560003FF;
    *(volatile u16 *)((u8 *)gx_data + 2) = 0;
}

void fn_80221D6C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

void fn_80221D88(s32 arg0, f32* arg1) {
    // Simple control flow to get closer to actual function structure
    if (arg1[0] >= 0.0f && arg1[0] <= 1.0f) {
        return;
    }

    switch (arg0) {
        case 0:
            // Simple logic - we'll expand
            return;
        case 1:
            return;
        case 2:
            return;
        case 3:
            return;
        case 4:
            return;
        case 5:
            return;
        case 6:
            return;
    }
}

void fn_80221F18(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    extern f32 lbl_8036BCE0;
    extern f32 lbl_8036BCF8;
    extern f32 lbl_8036BD0C;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f4;
    f32 var_f3;
    f32 var_f4;
    f32 var_f5;
    s32 var_r4;

    var_r4 = arg1;
    if (farg0 < lbl_8036BCE0) {
        var_r4 = 0;
    }
    if (farg1 <= lbl_8036BCE0 || farg1 >= lbl_8036BCF8) {
        var_r4 = 0;
    }
    switch (var_r4) {
    case 1:
        var_f5 = lbl_8036BCF8;
        temp_f0 = farg1 * farg0;
        var_f4 = lbl_8036BCE0;
        var_f3 = (var_f5 - farg1) / temp_f0;
        break;
    case 2:
        var_f5 = lbl_8036BCF8;
        temp_f4 = farg1 * farg0;
        temp_f1 = lbl_8036BD0C * (var_f5 - farg1);
        var_f3 = temp_f1 / temp_f4;
        var_f4 = temp_f1 / (farg0 * temp_f4);
        break;
    case 3:
        temp_f0 = farg1 * farg0;
        var_f5 = lbl_8036BCF8;
        var_f3 = lbl_8036BCE0;
        var_f4 = (var_f5 - farg1) / (farg0 * temp_f0);
        break;
    default:
    case 0:
        var_f3 = lbl_8036BCE0;
        var_f5 = lbl_8036BCF8;
        var_f4 = var_f3;
        break;
    }
    *(f32 *)((u8 *)arg0 + 0x1C) = var_f5;
    *(f32 *)((u8 *)arg0 + 0x20) = var_f3;
    *(f32 *)((u8 *)arg0 + 0x24) = var_f4;
}

void fn_80221FE8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x30) = farg2;
}

void fn_80221FF8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    extern f32 lbl_8036BCE0;
    extern f32 lbl_8036BCF8;
    extern f64 lbl_8036BD10;
    extern f64 lbl_8036BD18;
    extern f32 lbl_8036BD20;
    
    f32 temp_f0 = -farg0;
    f32 temp_f4 = -farg1;
    f32 temp_f5 = lbl_8036BCF8 - farg2;
    f32 temp_f7 = (temp_f5 * temp_f5) + ((temp_f0 * temp_f0) + (temp_f4 * temp_f4));
    f32 var_f10 = temp_f7;
    
    if (lbl_8036BCE0 != temp_f7) {
        f32 var_f7;
        if (var_f10 > lbl_8036BCE0) {
            f64 temp_f7_2 = __frsqrte(var_f10);
            f64 temp_f7_3 = lbl_8036BD10 * temp_f7_2 * (lbl_8036BD18 - ((f64) var_f10 * (temp_f7_2 * temp_f7_2)));
            f64 temp_f7_4 = lbl_8036BD10 * temp_f7_3 * (lbl_8036BD18 - ((f64) var_f10 * (temp_f7_3 * temp_f7_3)));
            f32 sp18 = (f32) ((f64) var_f10 * (lbl_8036BD10 * temp_f7_4 * (lbl_8036BD18 - ((f64) var_f10 * (temp_f7_4 * temp_f7_4)))));
            var_f7 = sp18;
        } else {
            var_f7 = var_f10;
        }
        var_f10 = lbl_8036BCF8 / var_f7;
    }
    
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (temp_f0 * var_f10);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (temp_f4 * var_f10);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f5 * var_f10);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (lbl_8036BD20 * farg0);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (lbl_8036BD20 * farg1);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (lbl_8036BD20 * farg2);
}

void fn_802220DC(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg1;
}

void fn_8022224C(s32 arg0, void *arg1) {
    switch (arg0) {
        case 0:
            *(u32 *)0xCC008000 = (*(u8 *)arg1 & 0xFF) | 0x10000000;
            break;
        default:
            break;
    }
}

void fn_80222334(void)
{
    u32 temp_r3;
    u32 var_r3;
    
    temp_r3 = OSGetTime();
    var_r3 = (temp_r3 & 0xFFFF) + 0x41F;
    if (var_r3 < 0)
        var_r3 += 0x10000;
}

