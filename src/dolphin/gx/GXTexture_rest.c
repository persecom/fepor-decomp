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

void fn_80224304(s16 *arg0, u16 arg1, f32 *arg2) {
    s32 fn_8022C568(f32);
    extern f32 lbl_8036BD58;
    extern f32 lbl_8036BD5C;
    extern f32 lbl_8036BD70;
    extern f64 lbl_8036BD78;
    extern f64 lbl_8036BD90;
    extern f32 lbl_8036BD98;
    extern f64 lbl_8036BDA0;
    extern f32 lbl_8036BDA8;
    extern f64 lbl_8036BDB0;
    f64 f31;
    f64 f30;
    f32 f29;
    f32 f28;
    f64 f27;
    f32 f26;
    f32 f25;
    f32 f24;
    f32 f23;
    f32 var_f0;
    f32 temp_f1;
    s16 *var_r30;
    u32 var_r29;
    f32 var_f2;
    volatile f32 sp14;

    if (lbl_8036BD90 == arg2[0x3C / 4]) {
        temp_f1 = arg2[0x2C / 4] / (arg2[0x28 / 4] - lbl_8036BD5C);
        f24 = temp_f1 / arg2[0];
        var_f0 = temp_f1;
    } else {
        temp_f1 = lbl_8036BD5C / arg2[0];
        f24 = temp_f1;
        var_f0 = lbl_8036BD98 * temp_f1;
    }
    f27 = lbl_8036BDB0;
    f26 = var_f0 * var_f0;
    f28 = lbl_8036BD5C;
    var_r30 = arg0;
    f29 = lbl_8036BD58;
    var_r29 = 0;
    f30 = lbl_8036BD78;
    f31 = lbl_8036BDA0;
    f23 = lbl_8036BDA8;
    f25 = lbl_8036BD70 / (f32)arg1;
    (void)f27;
    do {
        temp_f1 = (f32)((var_r29 + 1) << 5);
        temp_f1 = temp_f1 * f25;
        temp_f1 = temp_f1 * f24;
        var_f2 = f28 + (temp_f1 * temp_f1) / f26;
        if (var_f2 > f29) {
            f64 guess = __frsqrte((f64)var_f2);
            guess = f30 * guess * (f31 - (f64)var_f2 * (guess * guess));
            guess = f30 * guess * (f31 - (f64)var_f2 * (guess * guess));
            guess = f30 * guess * (f31 - (f64)var_f2 * (guess * guess));
            sp14 = (f32)((f64)var_f2 * guess);
            var_f2 = sp14;
        }
        *var_r30 = (s16)(fn_8022C568(f23 * var_f2) & 0xFFF);
        var_r29 += 1;
        var_r30 += 1;
    } while (var_r29 < 10U);
}

void fn_802245D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(u8 *)0xCC008000 = 0x61;
    *(u16*)((char*)__GXData + 0x1d0) = *(u16*)((char*)__GXData + 0x1d0) & ~0x800 | ((0x1F - CLZ(3 - arg0)) & 1) << 6 | (arg0 & 1) & 1 | ((0x1F - CLZ(2 - arg0)) << 4) & 2 | (arg3 << 0xC) & 0xF000 | (arg1 << 8) & 0x700 | (arg2 << 5) & 0xE0;
    *(u16*)((char*)__GXData + 0x2) = 0;
}

void fn_8022462C(s32 arg0) {
    u16 *reg_ptr;
    
    reg_ptr = (u16*)((char*)__GXData + 0x1D0);
    *reg_ptr = (*reg_ptr & ~0x8) | ((arg0 << 3) & 0x8);
    *(u8*)0xCC008000 = 0x61;
    *(u8*)0xCC008000 = *reg_ptr & 0xFF;
    *(u16*)((char*)__GXData + 0x2) = 0;
}

void fn_80224658(s32 arg0) {
    u16 temp_r6;
    
    temp_r6 = (__GXData[0x1D0/2] & ~0x10) | ((arg0 << 4) & 0x10);
    *(u8 *)0xCC008000 = 0x61;
    *(u8 *)0xCC008000 = (u8)temp_r6;
    __GXData[0x1D0/2] = temp_r6;
    __GXData[1] = 0;
}

void fn_80224684(s32 arg0, s32 arg1, s32 arg2) {
    u16 *temp_r6;
    u16 temp_r7;

    temp_r6 = (u16*)__GXData;
    *(u8*)0xCC008000 = 0x61;
    temp_r7 = ((((*temp_r6 & ~1) | (arg0 & 1)) & ~0xE) | ((arg1 << 1) & 0xE)) | ((arg2 << 4) & 0x10);
    *(u8*)0xCC008000 = temp_r7;
    *temp_r6 = temp_r7;
    *(u16*)(temp_r6 + 1) = 0;
}

void fn_802246B8(u8 arg0) {
    u32 *ptr;
    u32 value;
    u32 input;
    u32 command;

    ptr = (u32 *)__GXData;
    command = 0x61;
    input = arg0;
    value = ptr[0x1DC / 4];

    value = (value & ~0x40) | ((input << 6) & 0x40);
    ptr[0x1DC / 4] = value;

    *(volatile u8 *)0xCC008000 = (u8)command;
    value = ptr[0x1DC / 4];
    *(volatile u32 *)0xCC008000 = value;

    *(volatile u16 *)((u8 *)__GXData + 2) = 0;
}

void fn_802246EC(u32 arg0, u32 arg1)
{
    extern u32 lbl_8029E358[];

    u8 *gx;
    u32 *entry;
    u32 oldValue;
    u32 value;
    u32 flag;
    volatile u8 *fifo;

    gx = (u8 *)__GXData;
    entry = &lbl_8029E358[arg0];
    fifo = (volatile u8 *)0xCC008000;

    oldValue = *(u32 *)(gx + 0x1DC);

    value = *(u32 *)(gx + 0x1DC);
    value = (value & ~7U) | (*entry & 7U);
    *(u32 *)(gx + 0x1DC) = value;

    value = *(u32 *)(gx + 0x1DC);
    value = (value & ~0x38U) | ((arg1 << 3) & 0x38U);
    *(u32 *)(gx + 0x1DC) = value;

    value = *(u32 *)(gx + 0x1DC);

    if (oldValue != value) {
        *fifo = 0x61;
        *(volatile u32 *)fifo = value;

        flag = (arg0 == 2) ? 1 : 0;

        value = *(u32 *)(gx + 0x204);
        value = (value & ~0x200U) | ((flag << 9) & 0x200U);
        *(u32 *)(gx + 0x204) = value;

        *(u32 *)(gx + 0x5AC) |= 4;

        if (*entry == 4) {
            gx = (u8 *)__GXData;

            value = *(u32 *)(gx + 0x1D4);
            value = (value & ~0x600U) |
                    (((arg0 - 4) << 9) & 0x600U);
            *(u32 *)(gx + 0x1D4) = value;

            value = *(u32 *)(gx + 0x1D4);
            value = (value & ~0xFF000000U) | 0x42000000U;
            *(u32 *)(gx + 0x1D4) = value;

            *fifo = 0x61;
            *(volatile u32 *)fifo = *(u32 *)(gx + 0x1D4);

            *(u16 *)(gx + 2) = 0;
        }
    }
}

void fn_802247C0(s32 arg0) {
    u16 temp_r6;
    
    temp_r6 = (__GXData[0x1D0/2] & ~0x4) | ((arg0 << 2) & 0x4);
    *(u8*)0xCC008000 = 0x61;
    *(u16*)0xCC008000 = temp_r6;
    __GXData[0x1D0/2] = temp_r6;
    __GXData[0x2/2] = 0;
}

void fn_802247EC(u32 arg0, u32 arg1) {
    extern unsigned short *__GXData;
    register unsigned short *gx_data = __GXData;
    register volatile u8 *fifo8 = (volatile u8 *)0xCC008000;
    register volatile u32 *fifo32 = (volatile u32 *)0xCC008000;
    u32 value;
    u32 result;

    value = *(u32 *)((u8 *)gx_data + 0x1D4);
    value = (value & 0xFFFFFF00) | (arg1 & 0xFF);

    *fifo8 = 0x61;

    result = value;
    result = (result & ~(1 << 8)) | ((arg0 & 1) << 8);

    *fifo32 = result;

    *(u32 *)((u8 *)gx_data + 0x1D4) = result;
    *(volatile u16 *)((u8 *)gx_data + 2) = 0;
}

void fn_80224828(s32 arg0, u8 arg1) {
    u32 temp_r5;
    
    temp_r5 = (u32)arg1 & 0x1;
    temp_r5 |= ((u32)arg0 << 1) & 0x2;
    temp_r5 |= 0x44000000;
    *(u8*)0xCC008000 = 0x61;
    *(u32*)(0xCC008000) = temp_r5;
    *(u16*)(__GXData + 1) = 0;
}

void fn_80224860(u8 arg0, u8 arg1) {
    u32 temp_r4;
    u16* gxData = __GXData;
    
    temp_r4 = (gxData[0x1F] & ~0x400000) | ((arg1 << 0x16) & 0x400000);
    gxData[0x1F] = temp_r4;
    *(volatile u8*)0xCC008000 = 0x61;
    *(volatile u8*)0xCC008000 = (u8)temp_r4;
    __GXFlushTextureState();
    *(volatile u8*)0xCC008000 = 0x61;
    *(volatile u8*)0xCC008000 = ((arg0 | 0x6800) & 0xFF); // Only low byte matters in final operation
    __GXFlushTextureState();
}

void fn_80224A68(s32 arg0, s32 arg1) {
    void fn_80220D6C(void);
    void fn_80220EBC(void);

    if (*(u32 *)((u8 *)__GXData + 0x5ac) != 0) {
        fn_80220D6C();
    }
    if (*(u32 *)__GXData == 0) {
        fn_80220EBC();
    }
    *(volatile u8 *)0xCC008000 = 0x40;
    *(volatile s32 *)0xCC008000 = arg0;
    *(volatile s32 *)0xCC008000 = arg1;
}

void fn_80224AD8(f32 x, f32 y, f32 z, f32 mtx[3][4], f32 *pm, f32 *vp, f32 *sx, f32 *sy, f32 *sz) {
    f32 peye_x;
    f32 peye_y;
    f32 peye_z;
    f32 xc;
    f32 yc;
    f32 zc;
    f32 wc;

    peye_x = mtx[0][3] + ((mtx[0][2] * z) + ((mtx[0][0] * x) + (mtx[0][1] * y)));
    peye_y = mtx[1][3] + ((mtx[1][2] * z) + ((mtx[1][0] * x) + (mtx[1][1] * y)));
    peye_z = mtx[2][3] + ((mtx[2][2] * z) + ((mtx[2][0] * x) + (mtx[2][1] * y)));
    if (pm[0] == 0.0f) {
        xc = (peye_x * pm[1]) + (peye_z * pm[2]);
        yc = (peye_y * pm[3]) + (peye_z * pm[4]);
        zc = pm[6] + (peye_z * pm[5]);
        wc = 1.0f / -peye_z;
    } else {
        xc = pm[2] + (peye_x * pm[1]);
        yc = pm[4] + (peye_y * pm[3]);
        zc = pm[6] + (peye_z * pm[5]);
        wc = 1.0f;
    }
    *sx = (vp[2] / 2.0f) + (vp[0] + (wc * (xc * vp[2] / 2.0f)));
    *sy = (vp[3] / 2.0f) + (vp[1] + (wc * (-yc * vp[3] / 2.0f)));
    *sz = vp[5] + (wc * (zc * (vp[5] - vp[4])));
}

void fn_80224C4C(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 != 0) {
        arg0 = arg0 + arg1 - arg2;
    }
}

void fn_80224CF0(f32 *arg0)
{
    extern f32 lbl_8036BDB8;

    u8 *gx;
    f32 *dst;
    volatile u8 *fifo8;
    volatile u32 *fifo32;
    volatile f32 *fifoFloat;
    u32 flag;

    flag = (lbl_8036BDB8 == arg0[0]) ? 0 : 1;

    gx = (u8 *)__GXData;
    *(u32 *)(gx + 0x4D8) = flag;

    dst = (f32 *)(gx + 0x4DC);

    dst[0] = arg0[1];
    dst[1] = arg0[2];
    dst[2] = arg0[3];
    dst[3] = arg0[4];
    dst[4] = arg0[5];
    dst[5] = arg0[6];

    fifo8 = (volatile u8 *)0xCC008000;
    fifo32 = (volatile u32 *)0xCC008000;
    fifoFloat = (volatile f32 *)0xCC008000;

    *fifo8 = 0x10;
    *fifo32 = 0x61020;

    *fifoFloat = dst[0];
    *fifoFloat = dst[1];
    *fifoFloat = dst[2];
    *fifoFloat = dst[3];
    *fifoFloat = dst[4];
    *fifoFloat = dst[5];

    *fifo32 = *(u32 *)(gx + 0x4D8);

    *(u16 *)(gx + 2) = 1;
}

void fn_80224DCC(void *arg0, s32 arg1) {
    u32 temp_r5 = (arg1 * 3) + 0x400;
    
    *(u8 *)0xCC008000 = 0x10;
    *(u32 *)0xCC008000 = (temp_r5 | 0x80000);
}

void fn_80224E1C(void *arg0, s32 arg1) {
    *(s32*)((u8*)arg0 + 0x50) = arg1;
    *(s32*)((u8*)arg0 + 0x54) = arg1;
}

f32 fn_80224E50(u32 arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r7;

    if (arg1 >= 0x40U) {
        var_r7 = ((arg1 - 0x40) * 4) + 0x500;
    } else {
        var_r7 = arg1 * 4;
    }
    if (arg2 == 1) {
        var_r4 = 8;
    } else {
        var_r4 = 0xC;
    }
    *(s8 *)0xCC008000 = 0x10;
    *(s8 *)0xCC008000 = (s32) (var_r7 | ((var_r4 - 1) << 0x10));
    if (arg2 == 0) {
        return M2C_ERROR(/* psq_l unimplemented */);
    }
    return M2C_ERROR(/* psq_l unimplemented */);
}

void fn_80224F04(u16 *arg0)
{
    extern f32 lbl_8036BDC0;
    extern f32 lbl_8036BDC4;

    u8 *gx;
    volatile u8 *fifo8;
    volatile u32 *fifo32;
    volatile f32 *fifoFloat;

    f32 scale;
    f32 bias;
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 e;
    f32 f;
    f32 g;
    f32 h;
    f32 negA;

    f32 result1;
    f32 result2;
    f32 result3;
    f32 result4;
    f32 result5;
    f32 result6;
    f32 product1;
    f32 product2;
    f32 product3;

    gx = (u8 *)arg0;

    fifo8 = (volatile u8 *)0xCC008000;
    fifo32 = (volatile u32 *)0xCC008000;
    fifoFloat = (volatile f32 *)0xCC008000;

    scale = lbl_8036BDC0;

    a = *(f32 *)(gx + 0x500);
    b = *(f32 *)(gx + 0x4FC);
    c = *(f32 *)(gx + 0x4F4);
    d = *(f32 *)(gx + 0x4F8);
    e = *(f32 *)(gx + 0x508);
    f = *(f32 *)(gx + 0x510);
    g = *(f32 *)(gx + 0x504);
    h = *(f32 *)(gx + 0x50C);

    negA = -a;

    result1 = b * scale;
    product1 = a * scale;
    result2 = negA * scale;

    product2 = e * f;
    product3 = g * f;

    bias = lbl_8036BDC4;

    *fifo8 = 0x10;

    result4 = c + result1;

    *fifo32 = 0x5101A;

    result5 = d + product1;

    *fifoFloat = result1;

    result3 = product2 - product3;

    result4 = bias + result4;

    *fifoFloat = result2;

    result5 = bias + result5;

    *fifoFloat = result3;
    *fifoFloat = result4;
    *fifoFloat = result5;

    result6 = product2 + h;

    *fifoFloat = result6;
}

void fn_80224F94(u32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 var_f2;

    var_f2 = farg1;
    if (arg0 == 0U) {
        var_f2 -= lbl_8036BDC0;
    }
    *(f32*)((char*)__GXData + 0x4F4) = farg0;
    *(f32*)((char*)__GXData + 0x4F8) = var_f2;
    *(f32*)((char*)__GXData + 0x4FC) = farg2;
    *(f32*)((char*)__GXData + 0x500) = farg3;
    *(f32*)((char*)__GXData + 0x504) = farg4;
    *(f32*)((char*)__GXData + 0x508) = farg5;
    fn_80224F04(__GXData);
    *(u16*)((char*)__GXData + 0x2) = 1;
}

void fn_80224FEC(f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    *(f32*)((char*)__GXData + 0x4F4) = farg0;
    *(f32*)((char*)__GXData + 0x4F8) = farg1;
    *(f32*)((char*)__GXData + 0x4FC) = farg2;
    *(f32*)((char*)__GXData + 0x500) = farg3;
    *(f32*)((char*)__GXData + 0x504) = farg4;
    *(f32*)((char*)__GXData + 0x508) = farg5;
    fn_80224F04(__GXData);
    *(u16*)((char*)__GXData + 0x2) = 1;
}

void fn_80225034(u32 arg0, u32 *dst) {
    u32 *src = (u32*)((u8*)__GXData + 0x4f4); // offset from the assembly

    dst[0] = src[arg0 + 0];
    dst[1] = src[arg0 + 1];
    dst[2] = src[arg0 + 2];
}

void fn_80225058(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r4;
    u32 temp_r6;
    u32 temp_r7;
    
    temp_r6 = (s32)(arg1 + 0x156);
    temp_r4 = (s32)(arg0 + 0x156);
    *(u32*)((char*)__GXData + 0xF8) = (s32)((*(u32*)((char*)__GXData + 0xF8) & ~0x7FF) | (temp_r6 & 0x7FF));
    *(u32*)((char*)__GXData + 0xF8) = (s32)((*(u32*)((char*)__GXData + 0xF8) & ~0x7FF000) | ((temp_r4 << 0xC) & 0x7FF000));
    *(u32*)((char*)__GXData + 0xFC) = (s32)((*(u32*)((char*)__GXData + 0xFC) & ~0x7FF) | ((temp_r6 + (arg3 - 1)) & 0x7FF));
    *(u32*)((char*)__GXData + 0xFC) = (s32)((*(u32*)((char*)__GXData + 0xFC) & ~0x7FF000) | (((temp_r4 + (arg2 - 1)) << 0xC) & 0x7FF000));
    *(char*)0xCC008000 = 0x61;
    *(char*)0xCC008000 = *(u32*)((char*)__GXData + 0xF8);
    *(char*)0xCC008000 = 0x61;
    *(char*)0xCC008000 = *(u32*)((char*)__GXData + 0xFC);
    *(u16*)((char*)__GXData + 0x2) = 0;
}

void fn_802250D0(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    u32 temp_r7;
    u32 temp_r8;
    u32 temp_r9;

    temp_r7 = *(u32*)((char*)__GXData + 0xF8);
    temp_r8 = *(u32*)((char*)__GXData + 0xFC);
    temp_r9 = (temp_r7 >> 0xC) & 0x7FF;
    *arg0 = temp_r9 - 0x156;
    *arg1 = temp_r7 & 0x7FF;
    *arg2 = (((temp_r8 >> 0xC) & 0x7FF) - temp_r9) + 1;
    *arg3 = (temp_r8 & 0x7FF) - (temp_r7 & 0x7FF) + 1;
}

void fn_80225118(void)
{
    u16* ptr = &__GXData[0x4E];
    *ptr = 0;
    ptr++;
    *ptr = 0;
}

void fn_80225158(void)
{
    u16 *temp_r4 = __GXData;
    temp_r4[0x40] = 0x1005;
    temp_r4[0x41] = 1;
}

void fn_80225180(s32 arg0) {
    s32 temp_r4;
    s32 temp_r4_2;

    if (arg0 < 5) {
        *(u8*)0xCC008000 = 8;
        *(u8*)0xCC008000 = 0x30;
        temp_r4 = *(u32*)((char*)__GXData + 0x80);
        *(u8*)0xCC008000 = temp_r4;
        *(u8*)0xCC008000 = 0x10;
        *(u8*)0xCC008000 = 0x1018;
        *(u8*)0xCC008000 = temp_r4;
    } else {
        *(u8*)0xCC008000 = 8;
        *(u8*)0xCC008000 = 0x40;
        temp_r4_2 = *(u32*)((char*)__GXData + 0x84);
        *(u8*)0xCC008000 = temp_r4_2;
        *(u8*)0xCC008000 = 0x10;
        *(u8*)0xCC008000 = 0x1019;
        *(u8*)0xCC008000 = temp_r4_2;
    }
    *(u16*)((char*)__GXData + 0x2) = 1;
}

void fn_80225A4C(u32 *cnt0, u32 *cnt1) {
    u32 ctr0;
    u32 ctr1;
    u32 ctr2;
    u32 ctr3;

    ctr0 = __GXReadCPCounterU32(0x20, 0x21);
    ctr1 = __GXReadCPCounterU32(0x22, 0x23);
    ctr2 = __GXReadCPCounterU32(0x24, 0x25);
    ctr3 = __GXReadCPCounterU32(0x26, 0x27);

    switch (M2C_FIELD(__GXData, s32 *, 0x59C)) {
    case 10:
        *cnt0 = ctr1 * 1000 / ctr0;
        break;
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
    case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
    case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
    case 31: case 32: case 33: case 34:
        *cnt0 = ctr0;
        break;
    case 35:
        *cnt0 = 0;
        break;
    default:
        *cnt0 = 0;
        break;
    }

    switch (M2C_FIELD(__GXData, s32 *, 0x5A0)) {
    case 0:
        *cnt1 = ctr3 * 4;
        break;
    case 4:
        *cnt1 = ctr2 + ctr3 * 2;
        break;
    case 5:
        *cnt1 = ctr2 * 3 + ctr3 * 4;
        break;
    case 6:
        *cnt1 = ctr2 * 5 + ctr3 * 6;
        break;
    case 7:
        *cnt1 = ctr2 * 7 + ctr3 * 8;
        break;
    case 1: case 2: case 3:
    case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16:
    case 21:
        *cnt1 = ctr3;
        break;
    case 17: case 18: case 19: case 20:
        *cnt1 = ctr2;
        break;
    case 22:
        *cnt1 = 0;
        break;
    default:
        *cnt1 = 0;
        break;
    }
}

void fn_80225BF4(void) {
    extern u16 *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

void fn_80225C04(u32 *top_pixels_in, u32 *top_pixels_out, u32 *bot_pixels_in, u32 *bot_pixels_out, u32 *clear_pixels_in, u32 *copy_clks) {
    *top_pixels_in = __GXReadPECounterU32(0xC, 0xD) * 4;
    *top_pixels_out = __GXReadPECounterU32(0xE, 0xF) * 4;
    *bot_pixels_in = __GXReadPECounterU32(0x10, 0x11) * 4;
    *bot_pixels_out = __GXReadPECounterU32(0x12, 0x13) * 4;
    *clear_pixels_in = __GXReadPECounterU32(0x14, 0x15) * 4;
    *copy_clks = __GXReadPECounterU32(0x16, 0x17);
}

void fn_80225D3C(void) {
    extern u16 *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 2) = 0x4;
}

void fn_80225D6C(u16 *arg0, u16 *arg1, u16 *arg2, u16 *arg3) {
    u16 temp_r5;
    u16 temp_r6;
    u16 temp_r7;
    u16 temp_r8;

    do {
        temp_r8 = __cpReg[0x21];
    } while (temp_r8 != __cpReg[0x21]);
    *arg2 = (temp_r8 << 0x10) | __cpReg[0x20];

    do {
        temp_r7 = __cpReg[0x23];
    } while (temp_r7 != __cpReg[0x23]);
    *arg3 = (temp_r7 << 0x10) | __cpReg[0x22];

    do {
        temp_r6 = __cpReg[0x25];
    } while (temp_r6 != __cpReg[0x25]);
    *arg0 = (temp_r6 << 0x10) | __cpReg[0x24];

    do {
        temp_r5 = __cpReg[0x27];
    } while (temp_r5 != __cpReg[0x27]);
    *arg1 = (temp_r5 << 0x10) | __cpReg[0x26];
}
