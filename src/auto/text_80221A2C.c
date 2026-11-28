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

#pragma use_lmw_stmw reset

void fn_80221A2C(s32 arg0) {
    M2C_FIELD(__GXData, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1EC), arg0, 7, 23, 24);
}

void GXCopyDisp(void *dest, u8 clear) {
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
    if (clear || (M2C_FIELD(__GXData, u32 *, 0x1DC) & 7) == 3) {
        if (((M2C_FIELD(__GXData, u32 *, 0x1DC) >> 6) & 1) == 1) {
            tempPeCtrl = M2C_FIELD(__GXData, u32 *, 0x1DC);
            GXWGFifo.u8 = 0x61;
            tempPeCtrl = __rlwimi(tempPeCtrl, 0, 6, 25, 25);
            GXWGFifo.u32 = tempPeCtrl;
            changePeCtrl = 1;
        }
    }

    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1E0);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1E4);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1E8);

    phyAddr = (u32)dest & 0x3FFFFFFF;
    reg = 0;
    reg = __rlwimi(reg, phyAddr >> 5, 0, 11, 31);
    reg = __rlwimi(reg, 0x4B, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;

    M2C_FIELD(__GXData, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1EC), clear, 11, 20, 20);
    M2C_FIELD(__GXData, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1EC), 1, 14, 17, 17);
    M2C_FIELD(__GXData, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1EC), 0x52, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1EC);

    if (clear) {
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1D8);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = M2C_FIELD(__GXData, u32 *, 0x1D0);
    }
    if (changePeCtrl) {
 GXWGFifo.u8 = 0x61;
 GXWGFifo.u32 = M2C_FIELD(__GXData,u32 *,0x1DC);
 }
 M2C_FIELD(__GXData,u16 *,2) = 0;
}

/* Copy the EFB into dest as a texture; optionally clear the EFB afterward. */
void GXCopyTex(void *dest, u8 clear) {
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

void fn_80221D34(void)
{
  u8 cmd = 0x61;
  u16 *gx = __GXData;
  u32 a = 0x55000000;
  u32 b;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = a + 0x3FF;
  b = 0x56000000;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = b + 0x3FF;
  __GXData[1] = 0;
}

void fn_80221D6C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

#pragma push
#pragma fp_contract off
void fn_80221D88(f32 *obj, f32 angle, u32 mode) {
    f32 cosf(f32);
    f32 a, b, c, t, x;
    if (angle <= 0.0f || angle > 90.0f)
        mode = 0;
    x = cosf(3.1415927f * angle / 180.0f);
    switch (mode) {
    case 1:
        a = (-1000.0f) * x;
        b = 1000.0f;
        c = 0.0f;
        break;
    case 2:
        t = 1.0f / (1.0f - x);
        b = t;
        a = -x * t;
        c = 0.0f;
        break;
    case 3:
        t = 1.0f / (1.0f - x);
        c = t;
        b = -x * t;
        a = 0.0f;
        break;
    case 4:
        t = 1.0f / ((1.0f - x) * (1.0f - x));
        a = t * (x * (x - 2.0f));
        b = 2.0f * t;
        c = -t;
        break;
    case 5:
        t = 1.0f / ((1.0f - x) * (1.0f - x));
        c = (-4.0f) * t;
        a = c * x;
        b = (4.0f * (1.0f + x)) * t;
        break;
    case 6:
        t = 1.0f / ((1.0f - x) * (1.0f - x));
        a = 1.0f - t * (2.0f * x * x);
        b = (4.0f * x) * t;
        c = (-2.0f) * t;
        break;
    case 0:
    default:
        a = 1.0f;
        b = 0.0f;
        c = b;
        break;
    }
    obj[4] = a;
    obj[5] = b;
    obj[6] = c;
}
#pragma pop
void fn_80221F18(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
 f32 a,b,c;
 if(farg0<0.0f) arg1=0;
 if(farg1<=0.0f || farg1>=1.0f) arg1=0;
 switch(arg1) {
 case 1: a=1.0f; b=(1.0f-farg1)/(farg1*farg0); c=0.0f; break;
 case 2: a=1.0f; b=(0.5f*(1.0f-farg1))/(farg1*farg0); c=(0.5f*(1.0f-farg1))/(farg0*(farg1*farg0)); break;
 case 3: a=1.0f; b=0.0f; c=(1.0f-farg1)/(farg0*(farg1*farg0)); break;
 case 0: default: a=1.0f; b=0.0f; c=0.0f; break;
 }
 *(f32*)((u8*)arg0+0x1c)=a;
 *(f32*)((u8*)arg0+0x20)=b;
 *(f32*)((u8*)arg0+0x24)=c;
}

void fn_80221FE8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x30) = farg2;
}

#pragma push
#pragma fp_contract off
static inline float sqrtf(float x) {
    static const double _half = .5;
    static const double _three = 3.0;
    volatile float y;

    if (x > 0.0f) {
        double guess = __frsqrte((double) x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        y = (float) (x * guess);
        return y;
    }
    return x;
}

void fn_80221FF8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    f32 mag;
    f32 vx;
    f32 vy;
    f32 vz;

    vx = -farg0;
    vy = -farg1;
    vz = -farg2 + 1.0f;

    mag = (vx * vx) + (vy * vy) + (vz * vz);
    if (mag != 0.0f) {
        mag = 1.0f / sqrtf(mag);
    }

    *(f32 *)((u8 *)arg0 + 0x34) = vx * mag;
    *(f32 *)((u8 *)arg0 + 0x38) = vy * mag;
    *(f32 *)((u8 *)arg0 + 0x3C) = vz * mag;
    *(f32 *)((u8 *)arg0 + 0x28) = farg0 * -1000000000000000000.0f;
    *(f32 *)((u8 *)arg0 + 0x2C) = farg1 * -1000000000000000000.0f;
    *(f32 *)((u8 *)arg0 + 0x30) = farg2 * -1000000000000000000.0f;
}
#pragma pop
void fn_802220DC(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg1;
}

typedef enum _GXAttrType {
    GX_NONE_802220E8,
    GX_DIRECT_802220E8,
    GX_INDEX8,
    GX_INDEX16_802220E8,
} GXAttrType;
typedef enum _GXTexMapID {
    GX_TEXMAP0,
    GX_TEXMAP1,
    GX_TEXMAP2,
    GX_TEXMAP3,
    GX_TEXMAP4,
    GX_TEXMAP5,
    GX_TEXMAP6,
    GX_TEXMAP7,
    GX_MAX_TEXMAP,
    GX_TEXMAP_NULL = 0xFF,
    GX_TEX_DISABLE = 0x100,
} GXTexMapID;
typedef enum _GXLightID {
    GX_LIGHT0 = 0x001,
    GX_LIGHT1 = 0x002,
    GX_LIGHT2 = 0x004,
    GX_LIGHT3 = 0x008,
    GX_LIGHT4 = 0x010,
    GX_LIGHT5 = 0x020,
    GX_LIGHT6 = 0x040,
    GX_LIGHT7 = 0x080,
    GX_MAX_LIGHT = 0x100,
    GX_LIGHT_NULL = 0,
} GXLightID;
typedef enum _GXPerf0 {
    GX_PERF0_VERTICES,
    GX_PERF0_CLIP_VTX,
    GX_PERF0_CLIP_CLKS,
    GX_PERF0_XF_WAIT_IN,
    GX_PERF0_XF_WAIT_OUT,
    GX_PERF0_XF_XFRM_CLKS,
    GX_PERF0_XF_LIT_CLKS,
    GX_PERF0_XF_BOT_CLKS,
    GX_PERF0_XF_REGLD_CLKS,
    GX_PERF0_XF_REGRD_CLKS,
    GX_PERF0_CLIP_RATIO,
    GX_PERF0_TRIANGLES,
    GX_PERF0_TRIANGLES_CULLED,
    GX_PERF0_TRIANGLES_PASSED,
    GX_PERF0_TRIANGLES_SCISSORED,
    GX_PERF0_TRIANGLES_0TEX,
    GX_PERF0_TRIANGLES_1TEX,
    GX_PERF0_TRIANGLES_2TEX,
    GX_PERF0_TRIANGLES_3TEX,
    GX_PERF0_TRIANGLES_4TEX,
    GX_PERF0_TRIANGLES_5TEX,
    GX_PERF0_TRIANGLES_6TEX,
    GX_PERF0_TRIANGLES_7TEX,
    GX_PERF0_TRIANGLES_8TEX,
    GX_PERF0_TRIANGLES_0CLR,
    GX_PERF0_TRIANGLES_1CLR,
    GX_PERF0_TRIANGLES_2CLR,
    GX_PERF0_QUAD_0CVG,
    GX_PERF0_QUAD_NON0CVG,
    GX_PERF0_QUAD_1CVG,
    GX_PERF0_QUAD_2CVG,
    GX_PERF0_QUAD_3CVG,
    GX_PERF0_QUAD_4CVG,
    GX_PERF0_AVG_QUAD_CNT,
    GX_PERF0_CLOCKS,
    GX_PERF0_NONE,
} GXPerf0;
typedef enum _GXPerf1 {
    GX_PERF1_TEXELS,
    GX_PERF1_TX_IDLE,
    GX_PERF1_TX_REGS,
    GX_PERF1_TX_MEMSTALL,
    GX_PERF1_TC_CHECK1_2,
    GX_PERF1_TC_CHECK3_4,
    GX_PERF1_TC_CHECK5_6,
    GX_PERF1_TC_CHECK7_8,
    GX_PERF1_TC_MISS,
    GX_PERF1_VC_ELEMQ_FULL,
    GX_PERF1_VC_MISSQ_FULL,
    GX_PERF1_VC_MEMREQ_FULL,
    GX_PERF1_VC_STATUS7,
    GX_PERF1_VC_MISSREP_FULL,
    GX_PERF1_VC_STREAMBUF_LOW,
    GX_PERF1_VC_ALL_STALLS,
    GX_PERF1_VERTICES,
    GX_PERF1_FIFO_REQ,
    GX_PERF1_CALL_REQ,
    GX_PERF1_VC_MISS_REQ,
    GX_PERF1_CP_ALL_REQ,
    GX_PERF1_CLOCKS,
    GX_PERF1_NONE,
} GXPerf1;
typedef struct _GXTexObj {
    u32 dummy[8];
} GXTexObj;
typedef struct _GXLightObj {
    u32 dummy[16];
} GXLightObj;
typedef struct _GXTexRegion {
    u32 dummy[4];
} GXTexRegion;
typedef struct _GXTlutRegion {
    u32 dummy[4];
} GXTlutRegion;
typedef struct __GXData_struct {
    u16 vNumNot;
    u16 bpSentNot;
    u16 vNum;
    u16 vLim;
    u32 cpEnable;
    u32 cpStatus;
    u32 cpClr;
    u32 vcdLo;
    u32 vcdHi;
    u32 vatA[8];
    u32 vatB[8];
    u32 vatC[8];
    u32 lpSize;
    u32 matIdxA;
    u32 matIdxB;
    u32 indexBase[4];
    u32 indexStride[4];
    u32 ambColor[2];
    u32 matColor[2];
    u32 suTs0[8];
    u32 suTs1[8];
    u32 suScis0;
    u32 suScis1;
    u32 tref[8];
    u32 iref;
    u32 bpMask;
    u32 IndTexScale0;
    u32 IndTexScale1;
    u32 tevc[16];
    u32 teva[16];
    u32 tevKsel[8];
    u32 cmode0;
    u32 cmode1;
    u32 zmode;
    u32 peCtrl;
    u32 cpDispSrc;
    u32 cpDispSize;
    u32 cpDispStride;
    u32 cpDisp;
    u32 cpTexSrc;
    u32 cpTexSize;
    u32 cpTexStride;
    u32 cpTex;
    u8 cpTexZ;
    u32 genMode;
    GXTexRegion TexRegions0[8];
    GXTexRegion TexRegions1[8];
    GXTexRegion TexRegions2[8];
    GXTlutRegion TlutRegions[20];
    GXTexRegion *(*texRegionCallback)(GXTexObj *, GXTexMapID);
    GXTlutRegion *(*tlutRegionCallback)(u32);
    GXAttrType nrmType;
    u8 hasNrms;
    u8 hasBiNrms;
    u32 projType;
    f32 projMtx[6];
    f32 vpLeft;
    f32 vpTop;
    f32 vpWd;
    f32 vpHt;
    f32 vpNearz;
    f32 vpFarz;
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    GXPerf0 perf0;
    GXPerf1 perf1;
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} GXData;
typedef struct {
    u32 reserved[3];
    u32 Color;
    f32 a[3];
    f32 k[3];
    f32 lpos[3];
    f32 ldir[3];
} __GXLightObjInt_struct;
static inline void PushLight(const register GXLightObj *lt_obj, register void *dest) {
    register u32 zero, color;
    register f32 a0_a1, a2_k0, k1_k2;
    register f32 px_py, pz_dx, dy_dz;
    asm {
lwz color, 12(lt_obj)
xor zero, zero, zero
psq_l a0_a1, 16(lt_obj), 0, 0
psq_l a2_k0, 24(lt_obj), 0, 0
psq_l k1_k2, 32(lt_obj), 0, 0
psq_l px_py, 40(lt_obj), 0, 0
psq_l pz_dx, 48(lt_obj), 0, 0
psq_l dy_dz, 56(lt_obj), 0, 0
stw zero, 0(dest)
stw zero, 0(dest)
stw zero, 0(dest)
stw color, 0(dest)
psq_st a0_a1, 0(dest), 0, 0
psq_st a2_k0, 0(dest), 0, 0
psq_st k1_k2, 0(dest), 0, 0
psq_st px_py, 0(dest), 0, 0
psq_st pz_dx, 0(dest), 0, 0
psq_st dy_dz, 0(dest), 0, 0
    }
}
void fn_802220E8(void *lt_obj_, u32 light_) {
    const GXLightObj *lt_obj = (const GXLightObj *)lt_obj_;
    GXLightID light = (GXLightID)light_;
    extern u16* const __GXData;
    u32 addr;
    u32 idx;
    __GXLightObjInt_struct *obj;
    obj = (__GXLightObjInt_struct *)lt_obj;
    idx = 31 - __cntlzw(light);
    idx &= 7;
    addr = idx * 0x10 + 0x600;
    GXWGFifo.u8 = (u8)(0x10);
    GXWGFifo.u32 = (u32)(addr | 0xF0000);
    PushLight(lt_obj, (void *)0xCC008000);
    (*(GXData *const *)&__GXData)->bpSentNot = 1;
}

void fn_80222164(s32 arg0, void *arg1) {
    u32 reg;
    u32 rgb;
    u32 colIdx;

    switch (arg0) {
    case 0:
        reg = *(u32 *)((u8 *)__GXData + 0xA8);
        rgb = *(u32 *)arg1 >> 8;
        reg = __rlwimi(reg, rgb, 8, 0, 23);
        colIdx = 0;
        break;
    case 1:
        reg = *(u32 *)((u8 *)__GXData + 0xAC);
        rgb = *(u32 *)arg1 >> 8;
        reg = __rlwimi(reg, rgb, 8, 0, 23);
        colIdx = 1;
        break;
    case 2:
        reg = *(u32 *)((u8 *)__GXData + 0xA8);
        reg = __rlwimi(reg, ((u8 *)arg1)[3], 0, 24, 31);
        colIdx = 0;
        break;
    case 3:
        reg = *(u32 *)((u8 *)__GXData + 0xAC);
        reg = __rlwimi(reg, ((u8 *)arg1)[3], 0, 24, 31);
        colIdx = 1;
        break;
    case 4:
        reg = *(u32 *)arg1;
        colIdx = 0;
        break;
    case 5:
        reg = *(u32 *)arg1;
        colIdx = 1;
        break;
    default:
        return;
    }

    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1000 + (colIdx + 10);
    GXWGFifo.u32 = reg;
    __GXData[1] = 1;
    ((u32 *)((u8 *)__GXData + 0xA8))[colIdx] = reg;
}

void GXSetChanMatColor(s32 arg0, void *arg1) {
    u32 reg;
    u32 rgb;
    u32 colIdx;

    switch (arg0) {
    case 0:
        reg = *(u32 *)((u8 *)__GXData + 0xB0);
        rgb = *(u32 *)arg1 >> 8;
        reg = __rlwimi(reg, rgb, 8, 0, 23);
        colIdx = 0;
        break;
    case 1:
        reg = *(u32 *)((u8 *)__GXData + 0xB4);
        rgb = *(u32 *)arg1 >> 8;
        reg = __rlwimi(reg, rgb, 8, 0, 23);
        colIdx = 1;
        break;
    case 2:
        reg = *(u32 *)((u8 *)__GXData + 0xB0);
        reg = __rlwimi(reg, ((u8 *)arg1)[3], 0, 24, 31);
        colIdx = 0;
        break;
    case 3:
        reg = *(u32 *)((u8 *)__GXData + 0xB4);
        reg = __rlwimi(reg, ((u8 *)arg1)[3], 0, 24, 31);
        colIdx = 1;
        break;
    case 4:
        reg = *(u32 *)arg1;
        colIdx = 0;
        break;
    case 5:
        reg = *(u32 *)arg1;
        colIdx = 1;
        break;
    default:
        return;
    }

    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1000 + (colIdx + 12);
    GXWGFifo.u32 = reg;
    __GXData[1] = 1;
    ((u32 *)((u8 *)__GXData + 0xB0))[colIdx] = reg;
}
void GXSetCullMode(u32 arg0) {
u32 *gxData = (u32*)__GXData;
u32 count = (u8)arg0;
gxData[0x204/4] = __rlwimi(gxData[0x204/4],count,4,25,27);
*(volatile u8*)0xCC008000 = 0x10;
*(volatile u32*)0xCC008000 = 0x1009;
*(volatile u32*)0xCC008000 = count;
gxData[0x5AC/4] |= 4;
}

void GXSetBlendMode(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
#pragma scheduling on
 u32 value=0;
 u32 channel=arg0&3;
 value=__rlwimi(value,arg1,1,30,30);
 value=__rlwimi(value,arg3,0,31,31);
 value=__rlwimi(value,arg2,6,25,25);
 if(arg6==0) arg5=0;
 value=__rlwimi(value,arg5,7,23,24);
 value=__rlwimi(value,arg6!=2,9,22,22);
 value=__rlwimi(value,arg6!=0,10,21,21);
 value=__rlwimi(value,arg4,2,26,29);
 value=__rlwimi(value,arg4,7,17,20);
 GXWGFifo.u8=0x10;
 GXWGFifo.u32=channel+0x100E;
 GXWGFifo.u32=value;
 if(arg0==4) {
 GXWGFifo.u8=0x10; GXWGFifo.u32=0x1010; GXWGFifo.u32=value;
 } else if(arg0==5) {
 GXWGFifo.u8=0x10; GXWGFifo.u32=0x1011; GXWGFifo.u32=value;
 }
 __GXData[1]=1;
}

#pragma scheduling reset
