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

void fn_80222A3C(u32 *t, s32 min_filt, s32 mag_filt) {
    extern u8 GX2HWFiltConv[8];

    t[0] = __rlwimi(t[0], (mag_filt == 1) ? 1 : 0, 4, 27, 27);
    t[0] = __rlwimi(t[0], GX2HWFiltConv[min_filt], 5, 24, 26);
}

s32 fn_80222A74(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) << 5) & 0x03FFFFE0;
}

s32 GXGetTexObjWidth(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x3FF) + 1;
}

s32 GXGetTexObjHeight(void *arg0) {
    return (((u32) M2C_FIELD(arg0, u32 *, 8) >> 0xAU) & 0x3FF) + 1;
}

s32 fn_80222AA0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

u8 fn_80222AA8(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0x1F) & 1) == 1;
}

u8 fn_80222AC0(u32 *arg0) {
    extern M2C_UNK lbl_80367050;
    return ((u8 *)&lbl_80367050)[(*arg0 >> 5) & 7];
}

void fn_80222AD4(void *obj, void *region, s32 map) {
    extern u8 lbl_80367010[8], lbl_80367018[8], lbl_80367020[8], lbl_80367028[8], lbl_80367030[8], lbl_80367038[8], lbl_80367040[8];
    u32 stack[6];
    u32 *tex = obj;
    u32 *reg = region;
    u32 *tlut;
    u8 *gx;
    u8 *slot;

    stack[0] = 0;
    tex[0] = __rlwimi(tex[0], lbl_80367010[map], 24, 0, 7);
    tex[1] = __rlwimi(tex[1], lbl_80367018[map], 24, 0, 7);
    tex[2] = __rlwimi(tex[2], lbl_80367020[map], 24, 0, 7);
    reg[0] = __rlwimi(reg[0], lbl_80367028[map], 24, 0, 7);
    reg[1] = __rlwimi(reg[1], lbl_80367030[map], 24, 0, 7);
    tex[3] = __rlwimi(tex[3], lbl_80367038[map], 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = tex[0];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = tex[1];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = tex[2];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg[0];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg[1];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = tex[3];
    if (!(*((u8 *)tex + 0x1f) & 2)) {
        tlut = (*(u32 *(**)(u32))((u8 *)__GXData + 0x4CC))(tex[6]);
        tlut[1] = __rlwimi(tlut[1], lbl_80367040[map], 24, 0, 7);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.u32 = tlut[1];
    }
    gx = (u8 *)__GXData;
    slot = gx + map * 4;
    *(u32 *)(slot + 0x514) = tex[2];
    *(u32 *)(slot + 0x534) = tex[0];
    *(u32 *)(gx + 0x5AC) |= 1;
    *(u16 *)(gx + 2) = 0;
    (void)stack[0];
}

void fn_80222C50(s32 arg0, s32 arg1) {
    s32 fn_80222AD4(s32, s32, s32);
    extern u16 * const __GXData;
    s32 (*callback)(void);

    callback = *(s32 (**)(void))((u8 *)__GXData + 0x4C8);
    fn_80222AD4(arg0, callback(), arg1);
}

void fn_80222CA4(u32 *obj, u32 arg1, u32 arg2, u16 arg3) {
    obj[0] = 0;
    obj[0] = __rlwimi(obj[0], arg2, 10, 20, 21);
    obj[1] = __rlwimi(obj[1], arg1, 27, 11, 31);
    obj[1] = __rlwimi(obj[1], 0x64, 24, 0, 7);
    *(u16 *)(obj + 2) = arg3;
}

s32 fn_80222CDC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) << 5) & 0x03FFFFE0;
}

u16 fn_80222CE8(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}

void fn_80222CF0(u32 *texture, void *arg1)
{
    void __GXFlushTextureState(void);
    u32 *region;
    register u32 v;
    struct Copy { u32 a, b, c; };

    region = (*(u32 *(**)(void *))((u8 *)__GXData + 0x4CC))(arg1);
    __GXFlushTextureState();
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = texture[1];
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = region[0];
    __GXFlushTextureState();
    v = region[0];
    texture[0] = __rlwimi(texture[0], v, 0, 22, 31);
    *(struct Copy *)(region + 1) = *(struct Copy *)texture;
}

void GXInitTexCacheRegion(void *region, s8 is_32b, u32 tmem_even, s32 size_even, u32 tmem_odd, s32 size_odd)
{
    s32 var_r9;

    switch (size_even) {
    case 0:
        var_r9 = 3;
        break;
    case 1:
        var_r9 = 4;
        break;
    case 2:
        var_r9 = 5;
        break;
    }
    *(u32 *)region = 0;
    *(u32 *)region = __rlwimi(*(u32 *)region, tmem_even >> 5, 0, 17, 31);
    *(u32 *)region = __rlwimi(*(u32 *)region, var_r9, 15, 14, 16);
    *(u32 *)region = __rlwimi(*(u32 *)region, var_r9, 18, 11, 13);
    *(u32 *)region = __rlwimi(*(u32 *)region, 0, 21, 10, 10);

    switch (size_odd) {
    case 0:
        var_r9 = 3;
        break;
    case 1:
        var_r9 = 4;
        break;
    case 2:
        var_r9 = 5;
        break;
    case 3:
        var_r9 = 0;
        break;
    }
    *((u32 *)region + 1) = 0;
    *((u32 *)region + 1) = __rlwimi(*((u32 *)region + 1), tmem_odd >> 5, 0, 17, 31);
    *((u32 *)region + 1) = __rlwimi(*((u32 *)region + 1), var_r9, 15, 14, 16);
    *((u32 *)region + 1) = __rlwimi(*((u32 *)region + 1), var_r9, 18, 11, 13);
    *((s8 *)region + 0xC) = is_32b;
    *((s8 *)region + 0xD) = 1;
}

void GXInitTlutRegion(u32 *arg0,u32 arg1,u32 arg2) {
u32 t;
*arg0=0;t=arg1-0x80000;
*arg0=__rlwimi(*arg0,t>>9,0,22,31);
*arg0=__rlwimi(*arg0,arg2,10,11,21);
*arg0=__rlwimi(*arg0,0x65,24,0,7);
}

void fn_80222EB4(void) {
void __GXFlushTextureState(void);
__GXFlushTextureState();
*(u8*)0xCC008000=0x61;
*(u32*)0xCC008000=0x66001000;
*(u8*)0xCC008000=0x61;
*(u32*)0xCC008000=0x66001100;
__GXFlushTextureState();
}

s32 fn_80222EFC(s32 arg0) {
    u32 *p;
    s32 old;

    p = (u32 *)((u8 *)__GXData + 0x4C8);
    old = *p;
    *p = (u32)arg0;
    return old;
}

s32 fn_80222F10(s32 arg0) {
    u32 *p;
    s32 old;

    p = (u32 *)((u8 *)__GXData + 0x4CC);
    old = *p;
    *p = (u32)arg0;
    return old;
}

typedef enum _GXAttrType {
    GX_NONE_80222F24,
    GX_DIRECT_80222F24,
    GX_INDEX8,
    GX_INDEX16_80222F24,
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
} GXTexObj_80222F24;
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
    GXTexRegion *(*texRegionCallback)(GXTexObj_80222F24 *, GXTexMapID);
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
static void fn_80222F24(u32 tmap, u32 tcoord) {
    extern u16 * const __GXData;
    u32 w;
    u32 h;
    u8 s_bias;
    u8 t_bias;
    w = ((int)(((*(GXData *const *)&__GXData)->tImage0[tmap]) >> (0)) & ((1 << (10)) - 1));
    h = ((int)(((*(GXData *const *)&__GXData)->tImage0[tmap]) >> (10)) & ((1 << (10)) - 1));
    do {
        ((*(GXData *const *)&__GXData)->suTs0[tcoord]) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->suTs0[tcoord]), (w), (0), 32 - (0) - (16), 31 - (0)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->suTs1[tcoord]) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->suTs1[tcoord]), (h), (0), 32 - (0) - (16), 31 - (0)));
    } while (0);
    s_bias = ((int)(((*(GXData *const *)&__GXData)->tMode0[tmap]) >> (0)) & ((1 << (2)) - 1)) == 1;
    t_bias = ((int)(((*(GXData *const *)&__GXData)->tMode0[tmap]) >> (2)) & ((1 << (2)) - 1)) == 1;
    do {
        ((*(GXData *const *)&__GXData)->suTs0[tcoord]) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->suTs0[tcoord]), (s_bias), (16), 32 - (16) - (1), 31 - (16)));
    } while (0);
    do {
        ((*(GXData *const *)&__GXData)->suTs1[tcoord]) = ((u32)__rlwimi((u32)((*(GXData *const *)&__GXData)->suTs1[tcoord]), (t_bias), (16), 32 - (16) - (1), 31 - (16)));
    } while (0);
    do {
        GXWGFifo.u8 = (u8)(0x61);
        GXWGFifo.u32 = (u32)((*(GXData *const *)&__GXData)->suTs0[tcoord]);
        ((void)0);
    } while (0);
    do {
        GXWGFifo.u8 = (u8)(0x61);
        GXWGFifo.u32 = (u32)((*(GXData *const *)&__GXData)->suTs1[tcoord]);
        ((void)0);
    } while (0);
    (*(GXData *const *)&__GXData)->bpSentNot = 0;
}

void fn_80222FC4(void)
{
    u32 lim;
    u32 i;
    u32 n;
    u32 a;
    u32 b;
    u32 off;
    u32 odd;
    u32 *p;
    u8 *gx;
    u32 t;

    if (*(u32 *)((u8 *)__GXData + 0x594) != 0xFF) {
        t = *(u32 *)((u8 *)__GXData + 0x204);
        i = 0;
        n = ((t >> 10) & 0xF) + 1;
        lim = (t >> 16) & 7;
        for (; i < lim; i++) {
            switch (i) {
            case 0:
                t = *(u32 *)((u8 *)__GXData + 0x120);
                a = t & 7;
                b = (t >> 3) & 7;
                break;
            case 1:
                t = *(u32 *)((u8 *)__GXData + 0x120);
                a = (t >> 6) & 7;
                b = (t >> 9) & 7;
                break;
            case 2:
                t = *(u32 *)((u8 *)__GXData + 0x120);
                a = (t >> 12) & 7;
                b = (t >> 15) & 7;
                break;
            case 3:
                t = *(u32 *)((u8 *)__GXData + 0x120);
                a = (t >> 18) & 7;
                b = (t >> 21) & 7;
                break;
            }
            if (!(*(u32 *)((u8 *)__GXData + 0x594) & (1 << b))) {
                fn_80222F24(a, b);
            }
        }
        i = 0;
        lim = i;
        for (; i < n; i++) {
            gx = (u8 *)__GXData;
            off = (i >> 1) << 2;
            t = *(u32 *)(gx + 0x554 + lim);
            odd = i & 1;
            p = (u32 *)(gx + off + 0x100);
            a = t & 0xFFFFFEFF;
            if (odd) {
                b = (*p >> 15) & 7;
            } else {
                b = (*p >> 3) & 7;
            }
            if (a != 0xFF && !(*(u32 *)(gx + 0x594) & (1 << b)) && (*(u32 *)(gx + 0x598) & (1 << i))) {
                fn_80222F24(a, b);
            }
            lim += 4;
        }
    }
}

void __GXSetTmemConfig(u32 nTmemConfig)
{
    /* Program GX TMEM bank layout for the given texture-memory config. */
    switch (nTmemConfig) {
    case 2:
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8C0D8000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x900DC000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8D0D8800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x910DC800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8E0D9000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x920DD000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8F0D9800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x930DD800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAC0DA000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB00DC400;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAD0DA800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB10DCC00;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAE0DB000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB20DD400;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAF0DB800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB30DDC00;
        break;
    case 1:
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8C0D8000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x900DC000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8D0D8800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x910DC800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8E0D9000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x920DD000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8F0D9800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x930DD800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAC0DA000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB00DE000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAD0DA800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB10DE800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAE0DB000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB20DF000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAF0DB800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB30DF800;
        break;
    case 0:
    default:
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8C0D8000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x900DC000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8D0D8400;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x910DC400;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8E0D8800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x920DC800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x8F0D8C00;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x930DCC00;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAC0D9000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB00DD000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAD0D9400;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB10DD400;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAE0D9800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB20DD800;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xAF0D9C00;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0xB30DDC00;
        break;
    }
}

void fn_80223494(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg_sp8, s32 arg_spC) {
    u32 value = 0;
    value = __rlwimi(value, arg1, 0, 30, 31);
    value = __rlwimi(value, arg2, 2, 28, 29);
    value = __rlwimi(value, arg3, 4, 25, 27);
    value = __rlwimi(value, arg_spC, 7, 23, 24);
    value = __rlwimi(value, arg4, 9, 19, 22);
    value = __rlwimi(value, arg5, 13, 16, 18);
    value = __rlwimi(value, arg6, 16, 13, 15);
    value = __rlwimi(value, arg_sp8, 19, 12, 12);
    value = __rlwimi(value, arg7, 20, 11, 11);
    value = __rlwimi(value, arg0 + 0x10, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = value;
    ((u16 *)__GXData)[1] = 0;
}

void fn_80223500(s32 mtx_id, const f32 offset[2][3], s8 scale_exp) {
    s32 mtx[6];
    u32 reg;
    u32 id;

    switch (mtx_id) {
    case 1:
    case 2:
    case 3:
        id = mtx_id - 1;
        break;
    case 5:
    case 6:
    case 7:
        id = mtx_id - 5;
        break;
    case 9:
    case 10:
    case 11:
        id = mtx_id - 9;
        break;
    default:
        id = 0;
        break;
    }

    mtx[0] = (int)(1024.0f * offset[0][0]) & 0x7FF;
    mtx[1] = (int)(1024.0f * offset[1][0]) & 0x7FF;
    scale_exp += 17;

    reg = 0;
    reg = __rlwimi(reg, mtx[0], 0, 21, 31);
    reg = __rlwimi(reg, mtx[1], 11, 10, 20);
    reg = __rlwimi(reg, scale_exp & 3, 22, 8, 9);
    reg = __rlwimi(reg, id * 3 + 6, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;

    mtx[2] = (int)(1024.0f * offset[0][1]) & 0x7FF;
    mtx[3] = (int)(1024.0f * offset[1][1]) & 0x7FF;

    reg = 0;
    reg = __rlwimi(reg, mtx[2], 0, 21, 31);
    reg = __rlwimi(reg, mtx[3], 11, 10, 20);
    reg = __rlwimi(reg, (scale_exp >> 2) & 3, 22, 8, 9);
    reg = __rlwimi(reg, id * 3 + 7, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;

    mtx[4] = (int)(1024.0f * offset[0][2]) & 0x7FF;
    mtx[5] = (int)(1024.0f * offset[1][2]) & 0x7FF;

    reg = 0;
    reg = __rlwimi(reg, mtx[4], 0, 21, 31);
    reg = __rlwimi(reg, mtx[5], 11, 10, 20);
    reg = __rlwimi(reg, (scale_exp >> 4) & 3, 22, 8, 9);
    reg = __rlwimi(reg, id * 3 + 8, 24, 0, 7);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = reg;

    __GXData[1] = 0;
}

void fn_80223678(s32 arg0,s32 arg1,s32 arg2) {
switch(arg0) {
case 0: {
u8 *gx=(u8 *)__GXData;
*(u32 *)(gx+296)=__rlwimi(*(u32 *)(gx+296),arg1,0,28,31);
*(u32 *)(gx+296)=__rlwimi(*(u32 *)(gx+296),arg2,4,24,27);
*(u32 *)(gx+296)=__rlwimi(*(u32 *)(gx+296),37,24,0,7);
GXWGFifo.u8=0x61;
GXWGFifo.u32=*(u32 *)(gx+296);
break;
}
case 1: {
u8 *gx=(u8 *)__GXData;
*(u32 *)(gx+296)=__rlwimi(*(u32 *)(gx+296),arg1,8,20,23);
*(u32 *)(gx+296)=__rlwimi(*(u32 *)(gx+296),arg2,12,16,19);
*(u32 *)(gx+296)=__rlwimi(*(u32 *)(gx+296),37,24,0,7);
GXWGFifo.u8=0x61;
GXWGFifo.u32=*(u32 *)(gx+296);
break;
}
case 2: {
u8 *gx=(u8 *)__GXData;
*(u32 *)(gx+300)=__rlwimi(*(u32 *)(gx+300),arg1,0,28,31);
*(u32 *)(gx+300)=__rlwimi(*(u32 *)(gx+300),arg2,4,24,27);
*(u32 *)(gx+300)=__rlwimi(*(u32 *)(gx+300),38,24,0,7);
GXWGFifo.u8=0x61;
GXWGFifo.u32=*(u32 *)(gx+300);
break;
}
case 3: {
u8 *gx=(u8 *)__GXData;
*(u32 *)(gx+300)=__rlwimi(*(u32 *)(gx+300),arg1,8,20,23);
*(u32 *)(gx+300)=__rlwimi(*(u32 *)(gx+300),arg2,12,16,19);
*(u32 *)(gx+300)=__rlwimi(*(u32 *)(gx+300),38,24,0,7);
GXWGFifo.u8=0x61;
GXWGFifo.u32=*(u32 *)(gx+300);
break;
}
}
__GXData[1]=0;
}

void fn_802237BC(s32 arg0,s32 arg1,s32 arg2) {
 u8 *gx;
 if(arg2==0xFF) arg2=0;
 if(arg1==0xFF) arg1=0;
 switch(arg0) {
 case 0:
 gx=(u8 *)__GXData;
 *(u32 *)(gx+0x120)=__rlwimi(*(u32 *)(gx+0x120),arg2,0,29,31);
 *(u32 *)(gx+0x120)=__rlwimi(*(u32 *)(gx+0x120),arg1,3,26,28);
 break;
case 1:
 gx=(u8 *)__GXData;
 *(u32 *)(gx+0x120)=__rlwimi(*(u32 *)(gx+0x120),arg2,6,23,25);
 *(u32 *)(gx+0x120)=__rlwimi(*(u32 *)(gx+0x120),arg1,9,20,22);
 break;
case 2:
 gx=(u8 *)__GXData;
 *(u32 *)(gx+0x120)=__rlwimi(*(u32 *)(gx+0x120),arg2,12,17,19);
 *(u32 *)(gx+0x120)=__rlwimi(*(u32 *)(gx+0x120),arg1,15,14,16);
 break;
case 3:
 gx=(u8 *)__GXData;
 *(u32 *)(gx+0x120)=__rlwimi(*(u32 *)(gx+0x120),arg2,18,11,13);
 *(u32 *)(gx+0x120)=__rlwimi(*(u32 *)(gx+0x120),arg1,21,8,10);
 break;
 }
 GXWGFifo.u8=0x61;
 GXWGFifo.u32=*(u32 *)((u8 *)__GXData+0x120);
 gx=(u8 *)__GXData;
 *(u32 *)(gx+0x5AC)|=3;
 *(u16 *)(gx+2)=0;
}

void fn_802238A8(u8 arg0) {
    u32 *gxData = (u32 *)__GXData;
    gxData[0x204 / 4] = __rlwimi(gxData[0x204 / 4], (u32)arg0, 16, 13, 15);
    gxData[0x5AC / 4] |= 6;
}

void fn_802238CC(s32 arg0) {
    void fn_80223494(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
    fn_80223494(arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

void fn_80223914(s32 arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4) {
    void fn_80223494(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
    s32 tmp;
    s32 a;

    if (arg3) {
        tmp = 6;
    } else {
        tmp = 0;
    }
    a = tmp;
    if (arg2) {
        tmp = 7;
    } else {
        tmp = 0;
    }
    fn_80223494(arg0, arg1, 0, tmp, arg4, a, a, 0, 0, 0);
}

void fn_80223978(void) {

}

void __GXSetIndirectMask(s32 arg0) {
 u8 *gx = (u8 *)__GXData;
 *(u32 *)(gx + 0x124) = __rlwimi(*(u32 *)(gx + 0x124), arg0, 0, 24, 31);
 *(volatile u8 *)0xCC008000 = 0x61;
 *(volatile u32 *)0xCC008000 = *(u32 *)(gx + 0x124);
 *(u16 *)(gx + 2) = 0;
}

void __GXFlushTextureState(void)
{
  extern u16 * const __GXData;
  u8 cmd = 0x61;
  u16 *gx;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = *((u32 *) (((u8 *) __GXData) + 0x124));
  __GXData[1] = 0;
}

void GXSetNumTexGens(s32 arg0, u32 arg1)
{
    extern u8 lbl_8029E2E0[];
    u32 *table;
    u32 *p;
    u32 *q;
    u8 *gx;
    u8 *base;
    u32 value;
    u32 other;

    table = (u32 *)lbl_8029E2E0;

    if (arg0 == 0) {
        p = table + arg1;
        q = p + 0xA;
    } else {
        q = table + arg1 + 0xF;
        p = table + arg1 + 5;
    }

    gx = (u8 *)__GXData;
    base = gx + (arg0 << 2);

    value = (*(u32 *)(base + 0x130) & 0xFF000000) | (*p & 0x00FFFFFF);
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = value;
    *(u32 *)(base + 0x130) = value;

    other = (*(u32 *)(base + 0x170) & 0xFF00000F) | (*q & 0x00FFFFF0);
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = other;
    *(u32 *)(base + 0x170) = other;
    *(u16 *)(gx + 2) = 0;
}

void GXSetTevColorIn(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 *ptr = (u32 *)__GXData;
    u32 value = ptr[(0x130 / 4) + arg0];
    value = __rlwimi(value, arg1, 12, 16, 19);
    *(u8 *)0xCC008000 = 0x61;
    value = __rlwimi(__rlwimi(__rlwimi(value, arg2, 8, 20, 23), arg3, 4, 24, 27), arg4, 0, 28, 31);
    *(u32 *)0xCC008000 = value;
    ptr[(0x130 / 4) + arg0] = value;
    *(u16 *)((u8 *)ptr + 2) = 0;
}

void GXSetTevAlphaIn(s32 stage, s32 a, s32 b, s32 c, s32 d) {
    u32 *ptr = (u32 *)__GXData;
    u32 value = ptr[(0x170 / 4) + stage];
    value = __rlwimi(value, a, 13, 16, 18);
    *(u8 *)0xCC008000 = 0x61;
    value = __rlwimi(__rlwimi(__rlwimi(value, b, 10, 19, 21), c, 7, 22, 24), d, 4, 25, 27);
    *(u32 *)0xCC008000 = value;
    ptr[(0x170 / 4) + stage] = value;
    *(u16 *)((u8 *)ptr + 2) = 0;
}

#pragma opt_propagation on
