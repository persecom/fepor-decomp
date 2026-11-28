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
    volatile u16 *base;
    volatile u16 *regH;
    volatile u16 *regL;
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    base = __peReg;
    regH = base + hi;
    ctrH0 = *((volatile u16 *)base + hi);
    regL = base + lo;
    do {
        ctrH1 = ctrH0;
        ctrL = *regL;
        ctrH0 = *regH;
    } while (ctrH0 != ctrH1);
    return (ctrH0 << 16) | ctrL;
}

extern u16* __cpReg;

static inline u32 __GXReadCPCounterU32(u32 lo, u32 hi) {
    volatile u16 *base;
    volatile u16 *regH;
    volatile u16 *regL;
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    base = __cpReg;
    regH = base + hi;
    ctrH0 = *((volatile u16 *)base + hi);
    regL = base + lo;
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

#pragma peephole off

#pragma peephole off

#pragma peephole on

#pragma peephole off

#pragma peephole on

/* Transform a point by the model-view matrix and project it to screen space (perspective or ortho). */

#pragma ppc_intrinsics on

#pragma peephole off

#pragma peephole on

#pragma optimization_level 3

#pragma optimization_level reset

void fn_80224F04(u16 *unused) {
    u8 *gx = (u8 *)__GXData;
    f32 sx, sy, sz, ox, oy, oz;
    f32 zmin, zmax;

    sx = *(f32 *)(gx + 0x4FC) / 2.0f;
    sy = -*(f32 *)(gx + 0x500) / 2.0f;
    ox = 342.0f + (*(f32 *)(gx + 0x4F4) + (*(f32 *)(gx + 0x4FC) / 2.0f));
    oy = 342.0f + (*(f32 *)(gx + 0x4F8) + (*(f32 *)(gx + 0x500) / 2.0f));

    zmax = *(f32 *)(gx + 0x508) * *(f32 *)(gx + 0x510);
    zmin = *(f32 *)(gx + 0x504) * *(f32 *)(gx + 0x510);
    sz = zmax - zmin;
    oz = zmax + *(f32 *)(gx + 0x50C);

    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x0005101A;
    GXWGFifo.f32 = sx;
    GXWGFifo.f32 = sy;
    GXWGFifo.f32 = sz;
    GXWGFifo.f32 = ox;
    GXWGFifo.f32 = oy;
    GXWGFifo.f32 = oz;
}

void fn_80224F94(u32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) { u16 *gx; if(arg0==0) farg1-=lbl_8036BDC0; gx=__GXData; *(f32*)((char*)gx+0x4F4)=farg0; *(f32*)((char*)gx+0x4F8)=farg1; *(f32*)((char*)gx+0x4FC)=farg2; *(f32*)((char*)gx+0x500)=farg3; *(f32*)((char*)gx+0x504)=farg4; *(f32*)((char*)gx+0x508)=farg5; fn_80224F04(gx); __GXData[1]=1; }

void GXSetViewport(f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) { u16 *gx=__GXData; *(f32*)((char*)gx+0x4F4)=farg0; *(f32*)((char*)gx+0x4F8)=farg1; *(f32*)((char*)gx+0x4FC)=farg2; *(f32*)((char*)gx+0x500)=farg3; *(f32*)((char*)gx+0x504)=farg4; *(f32*)((char*)gx+0x508)=farg5; fn_80224F04(gx); __GXData[1]=1; }

typedef enum _GXAttrType {
    GX_NONE_80225034,
    GX_DIRECT_80225034,
    GX_INDEX8,
    GX_INDEX16_80225034,
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
} GXTexObj_80225034;
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
    GXTexRegion *(*texRegionCallback)(GXTexObj_80225034 *, GXTexMapID);
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
static void Copy6Floats(const register f32 src[6], register volatile f32 *dest) {
    register f32 ps01, ps23, ps45;
    asm {
psq_l ps01, 0(src), 0, 0
psq_l ps23, 8(src), 0, 0
psq_l ps45, 16(src), 0, 0
psq_st ps01, 0(dest), 0, 0
psq_st ps23, 8(dest), 0, 0
psq_st ps45, 16(dest), 0, 0
    }
}
void fn_80225034(f32 *vp) {
    extern u16* __GXData;
    Copy6Floats(&(*(GXData *const *)&__GXData)->vpLeft, vp);
}

#pragma optimization_level 2
void GXSetScissor(s32 left, s32 top, s32 wd, s32 ht)
{
  u8 *gx;
  s32 x0;
  s32 y0;
  u32 x1;
  u32 y1;
  u32 adjustedHeight;
  gx = (u8 *) __GXData;
  y0 = top + 0x156;
  adjustedHeight = ((u32) ht) - 1;
  *((u32 *) (gx + 0xF8)) = __rlwimi(*((u32 *) (gx + 0xF8)), y0, 0, 21, 31);
  x0 = left + 0x156;
  x1 = ((u32) wd) - 1;
  y1 = ((u32) y0) + adjustedHeight;
  *((u32 *) (gx + 0xF8)) = __rlwimi(*((u32 *) (gx + 0xF8)), x0, 12, 9, 19);
  x1 = ((u32) x0) + x1;
  adjustedHeight = y1;
  *((u32 *) (gx + 0xFC)) = __rlwimi(*((u32 *) (gx + 0xFC)), adjustedHeight, 0, 21, 31);
  *((u32 *) (gx + 0xFC)) = __rlwimi(*((u32 *) (gx + 0xFC)), x1, 12, 9, 19);
  GXWGFifo.u8 = 0x61;
  GXWGFifo.u32 = *((u32 *) (gx + 0xF8));
  GXWGFifo.u8 = 0x61;
  GXWGFifo.u32 = *((u32 *) (gx + 0xFC));
  *((u16 *) (gx + 2)) = 0;
}
#pragma push
#pragma optimization_level 4
void fn_802250D0(u32 *left, u32 *top, u32 *wd, u32 *ht)
{
  u32 tp;
  u32 lf;
  u32 bm;
  u32 rt;

  tp = *(u32 *)((u8 *)__GXData + 0xF8) & 0x7FF;
  lf = (*(u32 *)((u8 *)__GXData + 0xF8) & 0x7FF000) >> 12;
  bm = *(u32 *)((u8 *)__GXData + 0xFC) & 0x7FF;
  rt = (*(u32 *)((u8 *)__GXData + 0xFC) & 0x7FF000) >> 12;

  *left = lf - 342;
  *top = tp - 342;
  *wd = rt - lf + 1;
  *ht = bm - tp + 1;
}
#pragma pop

#pragma peephole off
void fn_80225118(s32 x, s32 y)
{
  u32 value;
  s32 yoff;
  s32 xoff;

  xoff = x + 0x156;
  yoff = y + 0x156;
  value = __rlwimi(__rlwimi(0, (u32)xoff, 31, 22, 31) + 0, (u32)yoff, 9, 12, 21);
  GXWGFifo.u8 = 0x61;
  value = __rlwimi(value, 0x59, 24, 0, 7);
  GXWGFifo.u32 = value;
  __GXData[1] = 0;
}
void fn_80225158(u32 arg0)
{
  u8 cmd = 0x10;
  u16 *gx;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = 0x1005;
  GXWGFifo.u32 = arg0;
  __GXData[1] = 1;
}

void fn_80225180(s32 arg0)
{
  int new_var2;
  u32 value;
  int new_var;
  u16 *gx;
  new_var = 0;
  new_var2 = 5;
  if (arg0 < new_var2)
  {
    gx = __GXData;
    GXWGFifo.u8 = 8;
    GXWGFifo.u8 = 0x30;
    value = (GXWGFifo.u32 = *((u32 *) (((u8 *) gx) + 0x80)));
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1018;
    GXWGFifo.u32 = value;
  }
  else
  {
    gx = __GXData;
    GXWGFifo.u8 = 8;
    arg0 += new_var;
    GXWGFifo.u8 = 0x40;
    value = (GXWGFifo.u32 = *((u32 *) (((u8 *) gx) + 0x84)));
    GXWGFifo.u8 = 0x10;
    GXWGFifo.u32 = 0x1019;
    GXWGFifo.u32 = value;
  }
  __GXData[1] = 1;
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma peephole on
void fn_80225204(u32 perf0, u32 perf1)
{
    u16 *gx;
    u32 val;
    s32 old;

    switch (M2C_FIELD(__GXData, s32 *, 0x59C)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 34:
        GXWGFifo.u8 = 0x10;
        GXWGFifo.u32 = 0x1006;
        GXWGFifo.u32 = 0;
        break;
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = 0x23000000;
        break;
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = 0x24000000;
        break;
    case 35:
    default:
        break;
    }
    gx = __GXData;
    switch (M2C_FIELD(gx, s32 *, 0x5A0)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 21:
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = 0x67000000;
        break;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
        val = M2C_FIELD(gx, u32 *, 0x5A4);
        val = __rlwimi(val, 0, 4, 24, 27);
        M2C_FIELD(gx, u32 *, 0x5A4) = val;
        GXWGFifo.u8 = 8;
        GXWGFifo.u8 = 0x20;
        GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x5A4);
        break;
    case 17:
    case 18:
    case 19:
    case 20:
        __cpReg[3] = 0;
        break;
    case 22:
    default:
        break;
    }

    gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x59C) = perf0;
    switch (M2C_FIELD(gx, u32 *, 0x59C)) {
    case 0:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x273; break;
    case 1:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x14A; break;
    case 2:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x16B; break;
    case 3:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x84; break;
    case 4:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0xC6; break;
    case 5:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x210; break;
    case 6:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x252; break;
    case 7:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x231; break;
    case 8:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x1AD; break;
    case 9:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x1CE; break;
    case 10:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x21; break;
    case 11:
        GXWGFifo.u8 = 0x10; GXWGFifo.u32 = 0x1006; GXWGFifo.u32 = 0x153; break;
    case 12:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5181; break;
    case 13:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x7181; break;
    case 14:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x6181; break;
    case 15:
        val = 0x2300 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x1E7F; break;
    case 16:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x53C1; break;
    case 17:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5381; break;
    case 18:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5341; break;
    case 19:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5301; break;
    case 20:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x52C1; break;
    case 21:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5281; break;
    case 22:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5241; break;
    case 23:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5201; break;
    case 24:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x51C1; break;
    case 25:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5D81; break;
    case 26:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5981; break;
    case 27:
        val = 0x2301 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x5581; break;
    case 28:
        val = 0x2403 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x3F3A; break;
    case 29:
        val = 0x2403 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x3E95; break;
    case 30:
        val = 0x2403 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x3F19; break;
    case 31:
        val = 0x2403 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x3EF8; break;
    case 32:
        val = 0x2403 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x3ED7; break;
    case 33:
        val = 0x2403 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x3EB6; break;
    case 34:
        val = 0x2403 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val - 0x3E53; break;
    case 35:
        break;
    }

    gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x5A0) = perf1;
    switch (M2C_FIELD(gx, u32 *, 0x5A0)) {
    case 0:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x42; break;
    case 1:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x84; break;
    case 2:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x63; break;
    case 3:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x129; break;
    case 8:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x252; break;
    case 21:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x21; break;
    case 4:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x14B; break;
    case 5:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x18D; break;
    case 6:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x1CF; break;
    case 7:
        val = 0x6700 << 16; GXWGFifo.u8 = 0x61; GXWGFifo.u32 = val + 0x211; break;
    case 9:
        val = M2C_FIELD(gx, u32 *, 0x5A4);
        val = __rlwimi(val, 2, 4, 24, 27);
        M2C_FIELD(gx, u32 *, 0x5A4) = val;
        GXWGFifo.u8 = 8; GXWGFifo.u8 = 0x20;
        GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x5A4);
        break;
    case 10:
        val = M2C_FIELD(gx, u32 *, 0x5A4);
        val = __rlwimi(val, 3, 4, 24, 27);
        M2C_FIELD(gx, u32 *, 0x5A4) = val;
        GXWGFifo.u8 = 8; GXWGFifo.u8 = 0x20;
        GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x5A4);
        break;
    case 11:
        val = M2C_FIELD(gx, u32 *, 0x5A4);
        val = __rlwimi(val, 4, 4, 24, 27);
        M2C_FIELD(gx, u32 *, 0x5A4) = val;
        GXWGFifo.u8 = 8; GXWGFifo.u8 = 0x20;
        GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x5A4);
        break;
    case 12:
        val = M2C_FIELD(gx, u32 *, 0x5A4);
        val = __rlwimi(val, 5, 4, 24, 27);
        M2C_FIELD(gx, u32 *, 0x5A4) = val;
        GXWGFifo.u8 = 8; GXWGFifo.u8 = 0x20;
        GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x5A4);
        break;
    case 13:
        val = M2C_FIELD(gx, u32 *, 0x5A4);
        val = __rlwimi(val, 6, 4, 24, 27);
        M2C_FIELD(gx, u32 *, 0x5A4) = val;
        GXWGFifo.u8 = 8; GXWGFifo.u8 = 0x20;
        GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x5A4);
        break;
    case 14:
        val = M2C_FIELD(gx, u32 *, 0x5A4);
        val = __rlwimi(val, 7, 4, 24, 27);
        M2C_FIELD(gx, u32 *, 0x5A4) = val;
        GXWGFifo.u8 = 8; GXWGFifo.u8 = 0x20;
        GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x5A4);
        break;
    case 15:
        val = M2C_FIELD(gx, u32 *, 0x5A4);
        val = __rlwimi(val, 9, 4, 24, 27);
        M2C_FIELD(gx, u32 *, 0x5A4) = val;
        GXWGFifo.u8 = 8; GXWGFifo.u8 = 0x20;
        GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x5A4);
        break;
    case 16:
        val = M2C_FIELD(gx, u32 *, 0x5A4);
        val = __rlwimi(val, 8, 4, 24, 27);
        M2C_FIELD(gx, u32 *, 0x5A4) = val;
        GXWGFifo.u8 = 8; GXWGFifo.u8 = 0x20;
        GXWGFifo.u32 = M2C_FIELD(gx, u32 *, 0x5A4);
        break;
    case 17:
        __cpReg[3] = 2; break;
    case 18:
        __cpReg[3] = 3; break;
    case 19:
        __cpReg[3] = 4; break;
    case 20:
        __cpReg[3] = 5; break;
    case 22:
        break;
    }

    __GXData[1] = 0;
}
#pragma pop
#pragma global_optimizer off
#pragma scheduling off
#pragma peephole on
void fn_80225A4C(u32 *cnt0, u32 *cnt1) {
    u32 ctr0;
    u32 ctr1;
    u32 ctr2;
    u32 ctr3;
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;
    volatile u16 *base;

    base = __cpReg;

{
 volatile u16 *regL;
 volatile u16 *regH;
    regH = base + 0x21;
    ctr0 = base[0x21];
    regL = base + 0x20;
    do {
        ctrH1 = ctr0;
        ctrL = *regL;
        ctr0 = *regH;
    } while (ctr0 != ctrH1);
    ctr0 = (ctr0 << 16) | ctrL;
}

{
 volatile u16 *regL;
 volatile u16 *regH;
    regH = base + 0x23;
    ctr1 = base[0x23];
    regL = base + 0x22;
    do {
        ctrH1 = ctr1;
        ctrL = *regL;
        ctr1 = *regH;
    } while (ctr1 != ctrH1);
    ctr1 = (ctr1 << 16) | ctrL;
}

{
 volatile u16 *regL;
 volatile u16 *regH;
    regH = base + 0x25;
    ctr2 = base[0x25];
    regL = base + 0x24;
    do {
        ctrH1 = ctr2;
        ctrL = *regL;
        ctr2 = *regH;
    } while (ctr2 != ctrH1);
    ctr2 = (ctr2 << 16) | ctrL;
}

{
 volatile u16 *regL;
 volatile u16 *regH;
    regH = base + 0x27;
    ctr3 = base[0x27];
    regL = base + 0x26;
    do {
        ctrH1 = ctr3;
        ctrL = *regL;
        ctr3 = *regH;
    } while (ctr3 != ctrH1);
    ctr3 = (ctr3 << 16) | ctrL;
}

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
#pragma scheduling reset
#pragma global_optimizer reset
void fn_80225BF4(void) {
    extern u16 *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

#pragma scheduling off
void fn_80225C04(u32 *top_pixels_in, u32 *top_pixels_out, u32 *bot_pixels_in, u32 *bot_pixels_out, u32 *clear_pixels_in, u32 *copy_clks) {
    u32 v;
    v = __GXReadPECounterU32(0xC, 0xD);
    *top_pixels_in = v * 4;
    v = __GXReadPECounterU32(0xE, 0xF);
    *top_pixels_out = v * 4;
    v = __GXReadPECounterU32(0x10, 0x11);
    *bot_pixels_in = v * 4;
    v = __GXReadPECounterU32(0x12, 0x13);
    *bot_pixels_out = v * 4;
    v = __GXReadPECounterU32(0x14, 0x15);
    *clear_pixels_in = v * 4;
    *copy_clks = __GXReadPECounterU32(0x16, 0x17);
}
#pragma scheduling reset
void fn_80225D3C(void)
{
  extern u16 *__GXData;
  u8 cmd = 0x61;
  u16 *gx;
  u32 a = 0x57000000;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = a;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = a + 0xAAA;
  __GXData[1] = 0;
}

#pragma global_optimizer off
#pragma scheduling off
#pragma peephole on
void fn_80225D6C(u32 *arg0, u32 *arg1, u32 *arg2, u32 *arg3) {
    *arg2 = __GXReadCPCounterU32(32, 33);
    *arg3 = __GXReadCPCounterU32(34, 35);
    *arg0 = __GXReadCPCounterU32(36, 37);
    *arg1 = __GXReadCPCounterU32(38, 39);
}
