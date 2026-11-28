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
void GXAdjustForOverscan(const GXRenderModeObj *rmin, GXRenderModeObj *rmout, u16 hor, u16 ver) {
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

typedef enum _GXAttrType {
    GX_NONE_802211D0,
    GX_DIRECT_802211D0,
    GX_INDEX8,
    GX_INDEX16_802211D0,
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
} GXTexObj;
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
void fn_802211D0(u16 left, u16 top, u16 wd, u16 ht) {
    extern u16* const __GXData;
    (*(GXData *const *)&__GXData)->cpDispSrc = 0;
    do {
        ((*(GXData *const *)&__GXData)->cpDispSrc) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpDispSrc), (left), (0), 32 - (0) - (10), 31 - (0)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->cpDispSrc) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpDispSrc), (top), (10), 32 - (10) - (10), 31 - (10)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->cpDispSrc) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpDispSrc), (0x49), (24), 32 - (24) - (8), 31 - (24)));
    } while (0);
    (*(GXData *const *)&__GXData)->cpDispSize = 0;
    do {
        ((*(GXData *const *)&__GXData)->cpDispSize) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpDispSize), (wd - 1), (0), 32 - (0) - (10), 31 - (0)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->cpDispSize) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpDispSize), (ht - 1), (10), 32 - (10) - (10), 31 - (10)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->cpDispSize) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpDispSize), (0x4A), (24), 32 - (24) - (8), 31 - (24)));
    } while (0);
}

void fn_8022124C(u16 left, u16 top, u16 wd, u16 ht) {
    extern u16* const __GXData;
    (*(GXData *const *)&__GXData)->cpTexSrc = 0;
    do {
        ((*(GXData *const *)&__GXData)->cpTexSrc) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpTexSrc), (left), (0), 32 - (0) - (10), 31 - (0)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->cpTexSrc) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpTexSrc), (top), (10), 32 - (10) - (10), 31 - (10)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->cpTexSrc) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpTexSrc), (0x49), (24), 32 - (24) - (8), 31 - (24)));
    } while (0);
    (*(GXData *const *)&__GXData)->cpTexSize = 0;
    do {
        ((*(GXData *const *)&__GXData)->cpTexSize) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpTexSize), (wd - 1), (0), 32 - (0) - (10), 31 - (0)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->cpTexSize) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpTexSize), (ht - 1), (10), 32 - (10) - (10), 31 - (10)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->cpTexSize) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->cpTexSize), (0x4A), (24), 32 - (24) - (8), 31 - (24)));
    } while (0);
}

void fn_802212C8(s32 arg0) {
 M2C_FIELD(__GXData, u32 *, 0x1E8) = 0;
 M2C_FIELD(__GXData, u32 *, 0x1E8) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1E8), (s32)((arg0 & 0x7FFF) << 1) >> 5, 0, 22, 31);
 M2C_FIELD(__GXData, u32 *, 0x1E8) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1E8), 0x4D, 24, 0, 7);
}

void fn_8022257C(s32, u16, u16, u32 *, u32 *, u32 *);
void fn_802212FC(u16 wd, u16 ht, s32 fmt, u8 mipmap) {
    u32 rowTiles;
    u32 colTiles;
    u32 cmpTiles;
    u32 peTexFmt;
    u32 peTexFmtH;

    *((u8 *)__GXData + 0x200) = 0;
    peTexFmt = fmt & 0xF;

    if (fmt == 0x13) {
        peTexFmt = 0xB;
    }

    switch (fmt) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0x26:
        *(u32 *)((u8 *)__GXData + 0x1FC) = __rlwimi(*(u32 *)((u8 *)__GXData + 0x1FC), 3, 15, 15, 16);
        break;
    default:
        *(u32 *)((u8 *)__GXData + 0x1FC) = __rlwimi(*(u32 *)((u8 *)__GXData + 0x1FC), 2, 15, 15, 16);
        break;
    }

    *((u8 *)__GXData + 0x200) = 0x10 == (fmt & 0x10);
    peTexFmtH = (peTexFmt >> 3) & 1;
    !peTexFmt;
    *(u32 *)((u8 *)__GXData + 0x1FC) = __rlwimi(*(u32 *)((u8 *)__GXData + 0x1FC), peTexFmtH, 3, 28, 28);
    peTexFmt = peTexFmt & 7;
    fn_8022257C(fmt, wd, ht, &rowTiles, &colTiles, &cmpTiles);

    *(u32 *)((u8 *)__GXData + 0x1F8) = 0;
    *(u32 *)((u8 *)__GXData + 0x1F8) = __rlwimi(*(u32 *)((u8 *)__GXData + 0x1F8), rowTiles * cmpTiles, 0, 22, 31);
    *(u32 *)((u8 *)__GXData + 0x1F8) = __rlwimi(*(u32 *)((u8 *)__GXData + 0x1F8), 0x4D, 24, 0, 7);
    *(u32 *)((u8 *)__GXData + 0x1FC) = __rlwimi(*(u32 *)((u8 *)__GXData + 0x1FC), mipmap, 9, 22, 22);
    *(u32 *)((u8 *)__GXData + 0x1FC) = __rlwimi(*(u32 *)((u8 *)__GXData + 0x1FC), peTexFmt, 4, 25, 27);
}

void fn_8022142C(u32 arg0) {
    M2C_FIELD(__GXData, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1EC), arg0, 12, 18, 19);
    M2C_FIELD(__GXData, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1FC), 0, 12, 18, 19);
}

void fn_80221450(u32 arg0) {
    u8 flag0 = ((arg0 & 1) == 1);
    u8 flag1 = ((arg0 & 2) == 2);
    M2C_FIELD(__GXData, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1EC), flag0, 0, 31, 31);
    M2C_FIELD(__GXData, u32 *, 0x1EC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1EC), flag1, 1, 30, 30);
    M2C_FIELD(__GXData, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1FC), flag0, 0, 31, 31);
    M2C_FIELD(__GXData, u32 *, 0x1FC) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x1FC), flag1, 1, 30, 30);
}

#pragma use_lmw_stmw on
extern const f64 lbl_8036BCD8;
extern const f32 lbl_8036BCD0;
s32 __cvt_fp2unsigned(f32);
static inline u32 GX_GetNumXfbLines(u32 efbHt, u32 iScale) {
    u32 count;
    u32 realHt;
    u32 iScaleD;

    count = (efbHt - 1) * 0x100;
    realHt = (count / iScale) + 1;

    iScaleD = iScale;

    if (iScaleD > 0x80 && iScaleD < 0x100) {
        while (iScaleD % 2 == 0) {
            iScaleD /= 2;
        }

        if (efbHt % iScaleD == 0) {
            realHt++;
        }
    }

    if (realHt > 0x400) {
        realHt = 0x400;
    }

    return realHt;
}

#pragma use_lmw_stmw on
f32 fn_802214A8(u16 efbHeight, u16 xfbHeight)
{
    f32 fScale;
    f32 yScale;
    u32 iScale;
    u32 tgtHt;
    u32 realHt;

    tgtHt = xfbHeight;
    yScale = (f32)xfbHeight / (f32)efbHeight;
    iScale = (u32)(256.0f / yScale) & 0x1FF;
    realHt = GX_GetNumXfbLines(efbHeight, iScale);

    while (realHt > xfbHeight) {
        tgtHt--;
        yScale = (f32)tgtHt / (f32)efbHeight;
        iScale = (u32)(256.0f / yScale) & 0x1FF;
        realHt = GX_GetNumXfbLines(efbHeight, iScale);
    }

    fScale = yScale;
    while (realHt < xfbHeight) {
        fScale = yScale;
        tgtHt++;
        yScale = (f32)tgtHt / (f32)efbHeight;
        iScale = (u32)(256.0f / yScale) & 0x1FF;
        realHt = GX_GetNumXfbLines(efbHeight, iScale);
    }

    return fScale;
}
#pragma use_lmw_stmw reset

u32 fn_802216E0(f32 vscale)
{
    u8 enable;
    u32 iScale;
    u32 ht;
    u32 reg;

    iScale = (u32)(lbl_8036BCD0 / vscale) & 0x1FF;
    enable = (iScale != 256);

    reg = 0;
    reg = __rlwimi(reg, iScale, 0, 23, 31);
    reg = __rlwimi(reg, 0x4E, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;
    __GXData[1] = 0;
    *(u32 *)((u8 *)__GXData + 0x1EC) = __rlwimi(*(u32 *)((u8 *)__GXData + 0x1EC), enable, 10, 21, 21);
    ht = ((*(u32 *)((u8 *)__GXData + 0x1E4) >> 10) & 0x3FF) + 1;
    return GX_GetNumXfbLines(ht, iScale);
}
void GXSetCopyClear(u8 *clear, u32 z) {
    u32 val;

    val = 0;
    val = __rlwimi(val, clear[0], 0, 24, 31);
    val = __rlwimi(val, clear[3], 8, 16, 23);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = __rlwimi(val, 0x4F, 24, 0, 7);

    val = 0;
    val = __rlwimi(val, clear[2], 0, 24, 31);
    val = __rlwimi(val, clear[1], 8, 16, 23);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = __rlwimi(val, 0x50, 24, 0, 7);

    val = 0;
    val = __rlwimi(val, z, 0, 8, 31);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = __rlwimi(val, 0x51, 24, 0, 7);

    __GXData[1] = 0;
}

#pragma use_lmw_stmw on
