/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

typedef struct GXColor { u8 r, g, b, a; } GXColor;

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

// GXTexObj structure (from headers or similar functions)
typedef struct {
    u32 dummy[4];
} GXTexObj;

#pragma fp_contract off

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

extern u16 * const __GXData;

extern u16 * const __GXData;

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

extern u16 * const __GXData;
extern u16 * const __GXData;
extern u16 * const __GXData;
extern u16 * const __GXData;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16 * const __GXData;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16 * const __GXData;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern u16* lbl_80368790;
extern u16* __peReg;
extern u16 * const __GXData;

#pragma optimization_level 2

#pragma optimization_level reset
void fn_80222644(void *, void *, u16, u16, s32, s32, s32, u8);

/* Pack LOD / filter / anisotropy fields into a GXTexObj. */

#pragma optimization_level 3

#pragma optimization_level reset

#pragma global_optimizer off
#pragma opt_strength_reduction off

#pragma opt_strength_reduction on
#pragma global_optimizer on

#pragma optimization_level 3

#pragma optimization_level reset

#pragma optimization_level 3

#pragma optimization_level reset

#pragma scheduling off

#pragma scheduling reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

void fn_80223C14(s32 id, u32 *color)
{
  u32 sRG;
  u32 sBA;
  u32 regRA;
  u32 regBG;

  sRG = color[0];
  sBA = color[1];

  regRA = (0xE0 + id * 2) << 24;
  regRA = __rlwimi(regRA, (sRG >> 16) & 0x7FF, 0, 21, 31);
  regRA = __rlwimi(regRA, sBA & 0x7FF, 12, 9, 19);

  regBG = (0xE1 + id * 2) << 24;
  regBG = __rlwimi(regBG, (sBA >> 16) & 0x7FF, 0, 21, 31);
  regBG = __rlwimi(regBG, sRG & 0x7FF, 12, 9, 19);

  GXWGFifo.u8 = 0x61;
  GXWGFifo.u32 = regRA;
  GXWGFifo.u8 = 0x61;
  GXWGFifo.u32 = regBG;
  GXWGFifo.u8 = 0x61;
  GXWGFifo.u32 = regBG;
  GXWGFifo.u8 = 0x61;
  GXWGFifo.u32 = regBG;

  __GXData[1] = 0;
}

void fn_80223C78(s32 id, u32 *color) {
    u32 rgba;
    u32 regRA;
    u32 regBG;

    rgba = *color;

    regRA = (0xE0 + id * 2) << 24;
    regRA = __rlwimi(regRA, rgba >> 24, 0, 24, 31);
    regRA = __rlwimi(regRA, rgba & 0xFF, 12, 12, 19);
    regRA = __rlwimi(regRA, 8, 20, 8, 11);

    regBG = (0xE1 + id * 2) << 24;
    regBG = __rlwimi(regBG, (rgba >> 8) & 0xFF, 0, 24, 31);
    regBG = __rlwimi(regBG, (rgba >> 16) & 0xFF, 12, 12, 19);
    regBG = __rlwimi(regBG, 8, 20, 8, 11);

    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = regRA;
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = regBG;

    __GXData[1] = 0;
}
void fn_80223CDC(s32 arg0, s32 arg1) {
    u8 cmd;
    u16 *gx;
    u32 *reg;

    gx = __GXData;
    reg = (u32 *)((u8 *)gx + (arg0 >> 1) * 4 + 0x1B0);
    if (arg0 & 1) {
        *reg = __rlwimi(*reg, arg1, 14, 13, 17);
    } else {
        *reg = __rlwimi(*reg, arg1, 4, 23, 27);
    }
    cmd = 0x61;
    GXWGFifo.u8 = cmd;
    GXWGFifo.u32 = *reg;
    __GXData[1] = 0;
}

void fn_80223D38(s32 arg0, s32 arg1) {
    u8 cmd;
    u16 *gx;
    u32 *reg;

    gx = __GXData;
    reg = (u32 *)((u8 *)gx + (arg0 >> 1) * 4 + 0x1B0);
    if (arg0 & 1) {
        *reg = __rlwimi(*reg, arg1, 19, 8, 12);
    } else {
        *reg = __rlwimi(*reg, arg1, 9, 18, 22);
    }
    cmd = 0x61;
    GXWGFifo.u8 = cmd;
    GXWGFifo.u32 = *reg;
    __GXData[1] = 0;
}

void GXSetTevSwapMode(s32 arg0, s32 arg1, s32 arg2) {
    u8 *gx = (u8 *)__GXData;
    u32 *reg = (u32 *)(gx + arg0 * 4 + 0x170);
    *reg = __rlwimi(*reg, arg1, 0, 30, 31);
    *reg = __rlwimi(*reg, arg2, 2, 28, 29);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = *reg;
    *(u16 *)(gx + 2) = 0;
}

void GXSetTevSwapModeTable(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *gx;
    s32 idx2;
    u32 *reg;
    u32 *reg2;
    u8 cmd;

    idx2 = arg0 << 1;
    gx = (u8 *)__GXData;
    reg = (u32 *)(gx + idx2 * 4 + 0x1B0);
    *reg = __rlwimi(*reg, arg1, 0, 30, 31);
    reg2 = (u32 *)(gx + (idx2 + 1) * 4 + 0x1B0);
    *reg = __rlwimi(*reg, arg2, 2, 28, 29);
    cmd = 0x61;
    GXWGFifo.u8 = cmd;
    GXWGFifo.u32 = *reg;
    *reg2 = __rlwimi(*reg2, arg3, 0, 30, 31);
    *reg2 = __rlwimi(*reg2, arg4, 2, 28, 29);
    GXWGFifo.u8 = cmd;
    GXWGFifo.u32 = *reg2;
    *(u16 *)(gx + 2) = 0;
}

void fn_80223E5C(s32 arg0,u8 arg1,s32 arg2,s32 arg3,u8 arg4) {

u32 v=__rlwimi(0xF3000000,(u32)arg1,0,24,31);
v=__rlwimi(v,(u32)arg4,8,16,23);
v=__rlwimi(v,arg0,16,13,15);
v=__rlwimi(v,arg3,19,10,12);
v=__rlwimi(v,arg2,22,8,9);
GXWGFifo.u8=0x61;
GXWGFifo.u32=v;
__GXData[1]=0;
}

typedef enum _GXAttrType {
    GX_NONE_80223EA0,
    GX_DIRECT_80223EA0,
    GX_INDEX8,
    GX_INDEX16_80223EA0,
} GXAttrType;
typedef enum _GXTexFmt {
    GX_TF_I4 = 0x0,
    GX_TF_I8 = 0x1,
    GX_TF_IA4 = 0x2,
    GX_TF_IA8 = 0x3,
    GX_TF_RGB565 = 0x4,
    GX_TF_RGB5A3 = 0x5,
    GX_TF_RGBA8 = 0x6,
    GX_TF_CMPR = 0xE,
    GX_CTF_R4 = 0x0 | 0x20,
    GX_CTF_RA4 = 0x2 | 0x20,
    GX_CTF_RA8 = 0x3 | 0x20,
    GX_CTF_YUVA8 = 0x6 | 0x20,
    GX_CTF_A8 = 0x7 | 0x20,
    GX_CTF_R8 = 0x8 | 0x20,
    GX_CTF_G8 = 0x9 | 0x20,
    GX_CTF_B8 = 0xA | 0x20,
    GX_CTF_RG8 = 0xB | 0x20,
    GX_CTF_GB8 = 0xC | 0x20,
    GX_TF_Z8 = 0x1 | 0x10,
    GX_TF_Z16 = 0x3 | 0x10,
    GX_TF_Z24X8 = 0x6 | 0x10,
    GX_CTF_Z4 = 0x0 | 0x10 | 0x20,
    GX_CTF_Z8M = 0x9 | 0x10 | 0x20,
    GX_CTF_Z8L = 0xA | 0x10 | 0x20,
    GX_CTF_Z16L = 0xC | 0x10 | 0x20,
    GX_TF_A8 = GX_CTF_A8,
} GXTexFmt;
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
typedef enum _GXZTexOp {
    GX_ZT_DISABLE,
    GX_ZT_ADD,
    GX_ZT_REPLACE,
    GX_MAX_ZTEXOP,
} GXZTexOp;
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
} GXTexObj_80223EA0;
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
    GXTexRegion *(*texRegionCallback)(GXTexObj_80223EA0 *, GXTexMapID);
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
static struct {
    u32 rid : 8;
    u32 dest : 2;
    u32 shift : 2;
    u32 clamp : 1;
    u32 sub : 1;
    u32 bias : 2;
    u32 sela : 3;
    u32 selb : 3;
    u32 selc : 3;
    u32 seld : 3;
    u32 swap : 2;
    u32 mode : 2;
} TEVAOpTableST1[5] = {
    {193, 0, 0, 1, 0, 0, 7, 4, 0, 7, 0, 0},
    {193, 0, 0, 1, 0, 0, 7, 7, 7, 0, 0, 0},
    {193, 0, 0, 1, 0, 0, 7, 4, 0, 7, 0, 0},
    {193, 0, 0, 1, 0, 0, 7, 7, 7, 4, 0, 0},
    {193, 0, 0, 1, 0, 0, 7, 7, 7, 0, 0, 0},
};
void fn_80223EA0(s32 op_, s32 fmt_, s32 bias_) {
    GXZTexOp op = (GXZTexOp)op_;
    GXTexFmt fmt = (GXTexFmt)fmt_;
    u32 bias = (u32)bias_;
    extern u16 * const __GXData;
    u32 zenv0;
    u32 zenv1;
    u32 type;
    zenv0 = 0;
    do {
        (zenv0) = ((u32)__rlwimi((u32)(zenv0), (bias), (0), 32 - (0) - (24), 31 - (0)));
    } while (0);
    do {
        (zenv0) = ((u32)__rlwimi((u32)(zenv0), (0xF4), (24), 32 - (24) - (8), 31 - (24)));
    } while (0);
    zenv1 = 0;
    switch (fmt) {
    case GX_TF_Z8:
        type = 0;
        break;
    case GX_TF_Z16:
        type = 1;
        break;
    case GX_TF_Z24X8:
        type = 2;
        break;
    default:
        type = 2;
        break;
    }
    do {
        (zenv1) = ((u32)__rlwimi((u32)(zenv1), (type), (0), 32 - (0) - (2), 31 - (0)));
    } while (0);
    do {
        (zenv1) = ((u32)__rlwimi((u32)(zenv1), (op), (2), 32 - (2) - (2), 31 - (2)));
    } while (0);
    do {
        (zenv1) = ((u32)__rlwimi((u32)(zenv1), (0xF5), (24), 32 - (24) - (8), 31 - (24)));
    } while (0);
    do {
        GXWGFifo.u8 = (u8)(0x61);
        GXWGFifo.u32 = (u32)(zenv0);
        ((void)0);
    } while (0);
    do {
        GXWGFifo.u8 = (u8)(0x61);
        GXWGFifo.u32 = (u32)(zenv1);
        ((void)0);
    } while (0);
    (*(GXData *const *)&__GXData)->bpSentNot = 0;
}

void GXSetTevOrder(s32 stage, s32 coord, s32 map, s32 color) {
    extern u32 lbl_8029E330[];
    u8 *gx;
    u32 *p;
    u32 val;
    u32 raw;
    u32 tex;
    u32 *reg;
    u32 channel;
    s32 enable;
    u32 w;
    reg = (u32 *)((u8 *)__GXData + 0x100 + (stage / 2) * 4);
    ((u32 *)((u8 *)__GXData + 0x554))[stage] = map;
    raw = map & ~0x100;
    tex = raw >= 8 ? 0 : raw;
    if (coord >= 8) {
        p = (u32 *)__GXData;
        val = *(u32 *)((u8 *)p + 0x598);
        gx = (u8 *)p + 0x598;
        coord = 0;
        *(u32 *)gx = val & ~(1 << stage);
    } else {
        p = (u32 *)__GXData;
        gx = (u8 *)p + 0x598;
        val = *(u32 *)((u8 *)p + 0x598);
        *(u32 *)gx = val | (1 << stage);
    }
    if (stage & 1) {
        *reg = __rlwimi(*reg, tex, 12, 17, 19);
        *reg = __rlwimi(*reg, coord, 15, 14, 16);
        channel = (color == 255) ? 7 : lbl_8029E330[color];
        *reg = __rlwimi(*reg, channel, 19, 10, 12);
        enable = map != 255 && !(map & 0x100);
        *reg = __rlwimi(*reg, enable, 18, 13, 13);
    } else {
        *reg = __rlwimi(*reg, tex, 0, 29, 31);
        *reg = __rlwimi(*reg, coord, 3, 26, 28);
        channel = (color == 255) ? 7 : lbl_8029E330[color];
        *reg = __rlwimi(*reg, channel, 7, 22, 24);
        enable = map != 255 && !(map & 0x100);
        *reg = __rlwimi(*reg, enable, 6, 25, 25);
    }
    GXWGFifo.u8 = 0x61;
    w = *reg;
    GXWGFifo.u32 = w;
    *(u16 *)((u8 *)__GXData + 2) = 0;
    *(u32 *)((u8 *)__GXData + 0x5AC) |= 1;
}

void GXSetNumTevStages(u8 arg0) {
    u32 *gxData = (u32 *)__GXData;
    gxData[0x204 / 4] = __rlwimi(gxData[0x204 / 4], (u32)arg0 - 1, 10, 18, 21);
    gxData[0x5AC / 4] |= 4;
}
