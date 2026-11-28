/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

static inline u32 GX_ReadMemCounter(volatile u16 *high, volatile u16 *low) {
    u32 hi, old, lo;
    hi = *high;
    do {
        old = hi;
        hi = *high;
        lo = *low;
    } while (hi != old);
    return (hi << 16) | lo;
}

extern void* lbl_80368784;
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

typedef struct GXColor { u8 r, g, b, a; } GXColor;
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

typedef struct __GXFifoObj {
    u8* base;
    u8* top;
    u32 size;
    u32 hiWatermark;
    u32 loWatermark;
    void* rdPtr;
    void* wrPtr;
    s32 count;
    u8 bind_cpu;
    u8 bind_gp;
} __GXFifoObj;

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

void *fn_8021D7FC(s32 arg0, s32 arg1)
{
    extern u8 *__GXData;
    s32 fn_80222AA0(s32);
    s32 fn_80222AA8(s32);
    s32 type;
    s32 flag;
    s32 index;

    type = fn_80222AA0(arg0);
    flag = fn_80222AA8(arg0);
    index = arg1 % 8;

    if (type == 7) {
        goto def;
    } else if (type >= 7) {
        goto check11;
    }
    if (type >= 6) {
        goto case6;
    }
    goto def;
check11:
    if (type >= 11) {
        goto def;
    }
    goto case810;
case6:
    if ((u8)flag != 0) {
        return __GXData + (index << 4) + 0x308;
    }
    return __GXData + (index << 4) + 0x288;
case810:
    return __GXData + (index << 4) + 0x208;
def:
    if ((u8)flag != 0) {
        return __GXData + (index << 4) + 0x288;
    }
    return __GXData + (index << 4) + 0x208;
}

#pragma peephole off
void *fn_8021D8F8(u32 arg0)
{
    extern u8 *__GXData;
    void *result;

    if (arg0 >= 0x14) {
        result = 0;
    } else {
        result = __GXData + 0x388 + (arg0 << 4);
    }

    return result;
}

#pragma push
#pragma optimization_level 4
s32 fn_8021D91C(s32 arg0) {
    s64 OSGetTime(void);
    void fn_8021F260(s32);
    void fn_80220B68(s32);
    void fn_80220C34(s32);
    void PPCSync(void);
    void fn_80220588(void);
    extern void *__memReg;
    extern volatile u16 *__cpReg;
    extern u8 *__GXData;
    extern u32 lbl_80368758;
    extern s64 lbl_80368760;
    extern u32 lbl_80368768;
    volatile u32 *fifo;
    u32 lo;
    u32 val;
    u32 old;
    unsigned int hi;
    s64 now;
    volatile u16 *high;
    volatile u16 *low;

    if (arg0 == 0) {
        if (lbl_80368768 == 0) {
            lbl_80368758 = GX_ReadMemCounter((volatile u16 *)__memReg + 0x27, (volatile u16 *)__memReg + 0x28);
            lbl_80368760 = OSGetTime();
            lbl_80368768 = 1;
            return 0;
        }
        now = OSGetTime();
        high = (volatile u16 *)__memReg + 0x27;
        low = (volatile u16 *)__memReg + 0x28;
        hi = *high;
        do {
            old = hi;
            hi = *high;
            lo = *low;
        } while (hi != old);
        val = (hi << 16) | lo;
        if (now - lbl_80368760 < 10) {
            return 0;
        }
        if (val != lbl_80368758) {
            lbl_80368760 = now;
            lbl_80368758 = val;
            return 0;
        }
    } else {
        fn_8021F260(0);
        fn_80220B68(0);
        fn_80220C34(0);
        fifo = (volatile u32 *)0xCC008000;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        PPCSync();
        *(volatile u16 *)((u8 *)__cpReg + 2) = 0;
        *(volatile u16 *)((u8 *)__cpReg + 4) = 3;
        __GXData[0x5AA] = 1;
        fn_80220588();
    }
    return 1;
}
#pragma pop
#pragma opt_propagation off
#pragma opt_common_subs off
void __GXInitRevisionBits(void) {
    extern u8 *const __GXData;
    u32 idx3c;
    u32 one;
    u32 idx1c;
    u8 *gx;
    u32 offset;
    u32 i;
    u32 v;
    u32 eight;
    u32 regA;
    u32 regB;
    u32 regC;

    i = 0;
    offset = i << 2;


    for (; i < 8; i++) {
        one=1;
        eight=8;
        gx = __GXData;
        idx1c = offset + 0x1C;
        idx3c = offset + 0x3C;

        v = *(u32 *)(gx + idx1c);
        v = __rlwimi(v, one, 30, 1, 1);
        *(u32 *)(gx + idx1c) = v;

        v = *(u32 *)(gx + idx3c);
        v = __rlwimi(v, one, 31, 0, 0);
        *(u32 *)(gx + idx3c) = v;

        *(volatile u8 *)0xCC008000 = (u8)eight;
        *(volatile u8 *)0xCC008000 = (u8)(i | 0x80);
        *(volatile u32 *)0xCC008000 = *(u32 *)(gx + idx3c);

        offset += 4;
    }

    {
        regA = 0;
        regB = 0;
        regC = 0;

        regA = __rlwimi(regA, 1, 0, 31, 31);
        regB = __rlwimi(regB, 1, 0, 31, 31);

        regA = __rlwimi(regA, 1, 1, 30, 30);
        regA = __rlwimi(regA, 1, 2, 29, 29);
        regA = __rlwimi(regA, 1, 3, 28, 28);
        regA = __rlwimi(regA, 1, 4, 27, 27);

        regB = __rlwimi(regB, 1, 1, 30, 30);

        *(volatile u8 *)0xCC008000 = 0x10;
        *(volatile u32 *)0xCC008000 = 0x1000;

        regA = __rlwimi(regA, 1, 5, 26, 26);
        regB = __rlwimi(regB, 1, 2, 29, 29);

        *(volatile u32 *)0xCC008000 = regA;

        regC = __rlwimi(regC, 1, 0, 31, 31);

        *(volatile u8 *)0xCC008000 = 0x10;

        regB = __rlwimi(regB, 1, 3, 28, 28);

        *(volatile u32 *)0xCC008000 = 0x1012;

        regB = __rlwimi(regB, 0x58, 24, 0, 7);

        *(volatile u32 *)0xCC008000 = regC;

        *(volatile u8 *)0xCC008000 = 0x61;
        *(volatile u32 *)0xCC008000 = regB;
    }
}
#pragma opt_propagation off
#pragma opt_common_subs off
#pragma opt_lifetimes off
void *GXInit(void *base, u32 size) {
    void OSRegisterVersion(char *);
    void GXSetMisc(u32, u32);
    void __GXFifoInit(void);
    void GXInitFifoBase(void *, void *, u32);
    void GXSetCPUFifo(void *);
    void GXSetGPFifo(void *);
    void OSRegisterResetFunction(void *);
    void __GXPEInit(void);
    u32 PPCMfhid2(void);
    void PPCMtwpar(u32);
    void PPCMthid2(u32);
    void __GXFlushTextureState(void);
    void __GXInitRevisionBits(void);
    void GXInitTexCacheRegion(void *, u8, u32, u8, u32, u8);
    void GXInitTlutRegion(void *, u32, u32);
    void __GXSetIndirectMask(u32);
    void __GXSetTmemConfig(u32);
    void __GXInitGX(void);
    extern char *__GXVersion;
    extern u8 *const __GXData;
    extern u16 *__cpReg;
    extern void *__piReg;
    extern void *__peReg;
    extern void *__memReg;
    extern u8 FifoObj_8033A440[];
    extern u8 GXResetFuncInfo_8029DDCC[];
    extern u32 GXTexRegionAddrTable_8029DD0C[];

    static u32 resetFuncRegistered;
    u8 *gx;
    u32 i;
    void *fifo;

    fifo = FifoObj_8033A440;
    OSRegisterVersion(__GXVersion);
    gx = __GXData;
    gx[0x5A8] = 0;
    GXSetMisc(1, (gx[0x5A9] = 1, gx[0x5AA] = 1, *(u32 *)(gx + 0x594) = 0, *(u32 *)(gx + 0x598) = 0, 0));
    {
        u32 *regs = (u32 *)0xCC000000;
        __cpReg = (u16 *)regs;
        __piReg = (void *)((u8 *)regs + 0x3000);
        __peReg = (void *)((u8 *)regs + 0x1000);
        __memReg = (void *)((u8 *)regs + 0x4000);
    }
    __GXFifoInit();
    GXInitFifoBase(fifo, base, size);
    GXSetCPUFifo(fifo);
    GXSetGPFifo(fifo);
    if (resetFuncRegistered == 0) {
        OSRegisterResetFunction(GXResetFuncInfo_8029DDCC);
        resetFuncRegistered = 1;
    }
    __GXPEInit();
    {
        u32 hid = PPCMfhid2();
        PPCMtwpar(0xC008000);
        PPCMthid2(hid | 0x40000000);
    }

    {
        u32 regOff;
        u32 zero;
        gx = __GXData;
        regOff = 0;
        i = 0;
        *(u32 *)(gx + 0x204) = regOff;
        *(u32 *)(gx + 0x204) = __rlwimi(*(u32 *)(gx + 0x204), regOff, 24, 0, 7);
        *(u32 *)(gx + 0x124) = 0xFF;
        *(u32 *)(gx + 0x124) = __rlwimi(*(u32 *)(gx + 0x124), 0xF, 24, 0, 7);
        *(u32 *)(gx + 0x7C) = regOff;
        *(u32 *)(gx + 0x7C) = __rlwimi(*(u32 *)(gx + 0x7C), 0x22, 24, 0, 7);

        for (; i < 16; i++, regOff += 4) {
            u32 h = i >> 1;
            gx = __GXData;
            *(u32 *)(gx + 0x130 + regOff) = 0;
            *(u32 *)(gx + 0x170 + regOff) = 0;
            *(u32 *)(gx + 0x100 + h * 4) = 0;
            *(u32 *)(gx + 0x554 + regOff) = 0xFF;
            *(u32 *)(gx + 0x130 + regOff) = __rlwimi(*(u32 *)(gx + 0x130 + regOff), i * 2 + 0xC0, 24, 0, 7);
            *(u32 *)(gx + 0x170 + regOff) = __rlwimi(*(u32 *)(gx + 0x170 + regOff), i * 2 + 0xC1, 24, 0, 7);
            *(u32 *)(gx + 0x1B0 + h * 4) = __rlwimi(*(u32 *)(gx + 0x1B0 + h * 4), h + 0xF6, 24, 0, 7);
            *(u32 *)(gx + 0x100 + h * 4) = __rlwimi(*(u32 *)(gx + 0x100 + h * 4), h + 0x28, 24, 0, 7);
        }

        zero = 0;
        *(u32 *)(gx + 0x120) = zero;
        *(u32 *)(gx + 0x120) = __rlwimi(*(u32 *)(gx + 0x120), 0x27, 24, 0, 7);
        {
            u32 sh2 = zero << 1;
            u32 c = sh2 + 0x30;
            u32 d = sh2 + 0x31;
            u32 stride = zero;
            for (i = 0; i < 2; i++) {
                u32 oB8, oD8;
                gx = __GXData;
                oB8 = stride + 0xB8;
                oD8 = stride + 0xD8;
                *(u32 *)(gx + oB8) = zero;
                stride += 4;
                *(u32 *)(gx + oD8) = zero;
                *(u32 *)(gx + oB8) = __rlwimi(*(u32 *)(gx + oB8), c, 24, 0, 7);
                c += 2;
                oB8 = stride + 0xB8;
                *(u32 *)(gx + oD8) = __rlwimi(*(u32 *)(gx + oD8), d, 24, 0, 7);
                d += 2;
                oD8 = stride + 0xD8;
                *(u32 *)(gx + oB8) = zero;
                *(u32 *)(gx + oD8) = zero;
                stride += 4;
                *(u32 *)(gx + oB8) = __rlwimi(*(u32 *)(gx + oB8), c, 24, 0, 7);
                c += 2;
                oB8 = stride + 0xB8;
                *(u32 *)(gx + oD8) = __rlwimi(*(u32 *)(gx + oD8), d, 24, 0, 7);
                d += 2;
                oD8 = stride + 0xD8;
                *(u32 *)(gx + oB8) = zero;
                *(u32 *)(gx + oD8) = zero;
                stride += 4;
                *(u32 *)(gx + oB8) = __rlwimi(*(u32 *)(gx + oB8), c, 24, 0, 7);
                c += 2;
                oB8 = stride + 0xB8;
                *(u32 *)(gx + oD8) = __rlwimi(*(u32 *)(gx + oD8), d, 24, 0, 7);
                d += 2;
                oD8 = stride + 0xD8;
                *(u32 *)(gx + oB8) = zero;
                *(u32 *)(gx + oD8) = zero;
                stride += 4;
                *(u32 *)(gx + oB8) = __rlwimi(*(u32 *)(gx + oB8), c, 24, 0, 7);
                c += 2;
                *(u32 *)(gx + oD8) = __rlwimi(*(u32 *)(gx + oD8), d, 24, 0, 7);
                d += 2;
            }
        }

        *(u32 *)(gx + 0xF8) = __rlwimi(*(u32 *)(gx + 0xF8), 0x20, 24, 0, 7);
        *(u32 *)(gx + 0xFC) = __rlwimi(*(u32 *)(gx + 0xFC), 0x21, 24, 0, 7);
        *(u32 *)(gx + 0x1D0) = __rlwimi(*(u32 *)(gx + 0x1D0), 0x41, 24, 0, 7);
        *(u32 *)(gx + 0x1D4) = __rlwimi(*(u32 *)(gx + 0x1D4), 0x42, 24, 0, 7);
        *(u32 *)(gx + 0x1D8) = __rlwimi(*(u32 *)(gx + 0x1D8), 0x40, 24, 0, 7);
        *(u32 *)(gx + 0x1DC) = __rlwimi(*(u32 *)(gx + 0x1DC), 0x43, 24, 0, 7);
        *(u32 *)(gx + 0x1FC) = __rlwimi(*(u32 *)(gx + 0x1FC), zero, 7, 23, 24);
        *(f32 *)(gx + 0x510) = 1.6777216e7f;
        *(f32 *)(gx + 0x50C) = 0.0f;
        *(u32 *)(gx + 0x5AC) = zero;
        gx[0x5AB] = (u8)zero;
    }

    {
        u32 freq = *(u32 *)0x800000F8 / 500U;
        __GXFlushTextureState();
        *(volatile u8 *)0xCC008000 = 0x61;
        *(volatile u32 *)0xCC008000 = (freq >> 11) | 0x69000400;
        __GXFlushTextureState();
        *(volatile u8 *)0xCC008000 = 0x61;
        *(volatile u32 *)0xCC008000 = (freq / 4224U) | 0x46000200;
    }
    __GXInitRevisionBits();

    {
        u32 *tbl = GXTexRegionAddrTable_8029DD0C;
        for (i = 0; i < 8; i++) {
            GXInitTexCacheRegion(__GXData + 0x208 + (i << 4), 0, tbl[i], 0, tbl[i + 8], 0);
            GXInitTexCacheRegion(__GXData + 0x288 + (i << 4), 0, tbl[i + 16], 0, tbl[i + 24], 0);
            GXInitTexCacheRegion(__GXData + 0x308 + (i << 4), 1, tbl[i + 32], 0, tbl[i + 40], 0);
        }
    }

    {
        for (i = 0; i < 16; i++) {
            GXInitTlutRegion(__GXData + 0x388 + (i << 4), 0xC0000 + (i << 13), 0x10);
        }
        for (i = 0; i < 4; i++) {
            GXInitTlutRegion(__GXData + 0x388 + ((i + 0x10) << 4), 0xE0000 + (i << 15), 0x40);
        }
    }

    __cpReg[3] = 0;
    gx = __GXData;
    *(u32 *)(gx + 0x5A4) = __rlwimi(*(u32 *)(gx + 0x5A4), 0, 4, 24, 27);
    *(volatile u8 *)0xCC008000 = 8;
    *(volatile u8 *)0xCC008000 = 0x20;
    *(volatile u32 *)0xCC008000 = *(u32 *)(gx + 0x5A4);
    *(volatile u8 *)0xCC008000 = 0x10;
    *(volatile u32 *)0xCC008000 = 0x1006;
    *(volatile u32 *)0xCC008000 = 0;
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x23000000;
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x24000000;
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = 0x67000000;
    __GXSetIndirectMask(0);
    __GXSetTmemConfig(2);
    __GXInitGX();
    return fifo;
}
#pragma opt_lifetimes on
#pragma opt_propagation on
#pragma opt_common_subs on

#pragma opt_lifetimes on
#pragma opt_propagation on
#pragma opt_common_subs on
#pragma push
#pragma optimization_level 4
void __GXInitGX(void) {
    s32 VIGetTvFormat(void);
    void GXSetCopyClear(void *, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void GXSetNumChans(s32);
    void GXClearVtxDesc(void);
    void fn_80220198(void);
    void fn_80220154(s32, void *, s32);
    void GXSetVtxAttrFmtv(s32, void *);
    void fn_80220F44(s32, s32);
    void fn_80220F84(s32, s32);
    void fn_80220FC4(u32, u8, u8);
    void GXLoadPosMtxImm(f32 *, s32);
    void fn_80224DCC(f32 *, s32);
    void GXSetCurrentMtx(s32);
    void fn_80224E50(f32 *, s32, s32);
    void GXSetViewport(f32, f32, f32, f32, f32, f32);
    void fn_80224CF0(void *);
    void fn_80221034(s32);
    void fn_8022100C(s32);
    void fn_80225158(s32);
    void GXSetScissor(s32, s32, u16, u16);
    void fn_80225118(s32, s32);
    void GXSetCullMode(s32);
    void GXSetBlendMode(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222164(s32, void *);
    void GXSetChanMatColor(s32, void *);
    void fn_80222EB4(void);
    void fn_80222EFC(void *);
    void fn_80222F10(void *);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetNumTevStages(s32);
    void GXSetNumTexGens(s32, s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void fn_80223EA0(s32, s32, s32);
    void fn_80223CDC(s32, s32);
    void fn_80223D38(s32, s32);
    void GXSetTevSwapMode(s32, s32, s32);
    void GXSetTevSwapModeTable(s32, s32, s32, s32, s32);
    void fn_802238CC(s32);
    void fn_802238A8(s32);
    void fn_80223678(s32, s32, s32);
    void fn_802240F0(s32, void *, f32, f32, f32, f32);
    void fn_802244B4(s32, s32, s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_8022462C(s32);
    void fn_80224658(s32);
    void GXSetZMode(s32, s32, s32);
    void fn_802246B8(s32);
    void fn_802247C0(s32);
    void fn_802247EC(s32, s32);
    void fn_802246EC(s32, s32);
    void fn_80224828(s32, s32);
    void fn_80224860(u8, s32);
    void fn_802211D0(s32, s32, u16, u16);
    void fn_802212C8(u16, u16);
    void fn_802216E0(f32);
    void fn_80221450(s32);
    void fn_80221824(u8, void *, s32, void *);
    void fn_80221A2C(s32);
    void fn_8022142C(s32);
    void fn_80221D34(void);
    void fn_80220AD0(s32);
    void fn_80220A54(s32);
    void fn_80220B0C(s32);
    void fn_80220A6C(s32, s32, s32, s32);
    void fn_80220A20(s32, s32);
    void fn_80220A34(s32);
    void fn_80220AE8(s32, s32);
    void fn_80220B24(s32, s32, s32);
    void fn_80225204(s32, s32);
    void fn_80225BF4(void);
    void fn_8021D7FC(void);
    void *fn_8021D8F8(u32);
    extern u8 *__GXData;
    extern u8 lbl_8029DBA0[];
    extern GXRenderModeObj GXNtsc480IntDf;
    extern GXRenderModeObj GXPal528IntDf;
    extern GXRenderModeObj GXEurgb60Hz480IntDf;
    extern GXRenderModeObj GXMpal480IntDf;
    extern const GXColor lbl_8036BCB4;
    extern const GXColor lbl_8036BCB8;
    extern const GXColor lbl_8036BCBC;
    extern f32 lbl_8036BCC0;
    extern f32 lbl_8036BCC4;

    u8 texObj[0x20];
    f32 mtx[3][4];
    u8 *base = lbl_8029DBA0;
    GXColor clearColor = lbl_8036BCB4;
    GXColor ambientColor = lbl_8036BCB8;
    GXColor materialColor = lbl_8036BCBC;
    GXColor copyClear, ambient0, material0, ambient1, material1, fog;
    GXRenderModeObj *rmode;
    u32 i;
    s32 xfbm;


    switch (VIGetTvFormat()) {
    case 0:
        rmode = &GXNtsc480IntDf;
        break;
    case 1:
        rmode = &GXPal528IntDf;
        break;
    case 5:
        rmode = &GXEurgb60Hz480IntDf;
        break;
    case 2:
        rmode = &GXMpal480IntDf;
        break;
    default:
        rmode = &GXNtsc480IntDf;
        break;
    }

    copyClear = clearColor;
    GXSetCopyClear(&copyClear, 0xFFFFFF);

    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
    fn_802201A8(1, 1, 5, 0x3C, 0, 0x7D);
    fn_802201A8(2, 1, 6, 0x3C, 0, 0x7D);
    fn_802201A8(3, 1, 7, 0x3C, 0, 0x7D);
    fn_802201A8(4, 1, 8, 0x3C, 0, 0x7D);
    fn_802201A8(5, 1, 9, 0x3C, 0, 0x7D);
    fn_802201A8(6, 1, 0xA, 0x3C, 0, 0x7D);
    fn_802201A8(7, 1, 0xB, 0x3C, 0, 0x7D);

    GXSetNumChans(1);
    GXClearVtxDesc();
    fn_80220198();

    for (i = 9; i <= 0x18; i++) {
        fn_80220154(i, __GXData, 0);
    }

    for (i = 0; i < 8; i++) {
        GXSetVtxAttrFmtv(i, base + 0x80);
    }

    fn_80220F44(6, 0);
    fn_80220F84(6, 0);
    fn_80220FC4(0, 0, 0);
    fn_80220FC4(1, 0, 0);
    fn_80220FC4(2, 0, 0);
    fn_80220FC4(3, 0, 0);
    fn_80220FC4(4, 0, 0);
    fn_80220FC4(5, 0, 0);
    fn_80220FC4(6, 0, 0);
    fn_80220FC4(7, 0, 0);

    mtx[0][0] = lbl_8036BCC0;
    mtx[0][1] = 0.0f;
    mtx[0][2] = 0.0f;
    mtx[0][3] = 0.0f;
    mtx[1][0] = 0.0f;
    mtx[1][1] = lbl_8036BCC0;
    mtx[1][2] = 0.0f;
    mtx[1][3] = 0.0f;
    mtx[2][0] = 0.0f;
    mtx[2][1] = 0.0f;
    mtx[2][2] = lbl_8036BCC0;
    mtx[2][3] = 0.0f;

    GXLoadPosMtxImm(&mtx[0][0], 0);
    fn_80224DCC(&mtx[0][0], 0);
    GXSetCurrentMtx(0);
    fn_80224E50(&mtx[0][0], 0x3C, 0);
    fn_80224E50(&mtx[0][0], 0x7D, 0);

    GXSetViewport(0.0f, 0.0f, (f32)rmode->fbWidth, (f32)rmode->xfbHeight, 0.0f, lbl_8036BCC0);
    fn_80224CF0(base + 0x150);
    fn_80221034(0);
    fn_8022100C(2);
    fn_80225158(0);
    GXSetScissor(0, 0, rmode->fbWidth, rmode->efbHeight);
    fn_80225118(0, 0);
    GXSetCullMode(0);

    GXSetBlendMode(4, 0, 0, 1, 0, 0, 2);
    ambient0 = ambientColor;
    fn_80222164(4, &ambient0);
    material0 = materialColor;
    GXSetChanMatColor(4, &material0);
    GXSetBlendMode(5, 0, 0, 1, 0, 0, 2);
    ambient1 = ambientColor;
    fn_80222164(5, &ambient1);
    material1 = materialColor;
    GXSetChanMatColor(5, &material1);

    fn_80222EB4();
    fn_80222EFC(fn_8021D7FC);
    fn_80222F10(fn_8021D8F8);

    fn_80222644(texObj, base + 0x60, 4, 4, 3, 0, 0, 0);
    fn_80222C50(texObj, 0);
    fn_80222C50(texObj, 1);
    fn_80222C50(texObj, 2);
    fn_80222C50(texObj, 3);
    fn_80222C50(texObj, 4);
    fn_80222C50(texObj, 5);
    fn_80222C50(texObj, 6);
    fn_80222C50(texObj, 7);

    GXSetTevOrder(0, 0, 0, 4);
    GXSetTevOrder(1, 1, 1, 4);
    GXSetTevOrder(2, 2, 2, 4);
    GXSetTevOrder(3, 3, 3, 4);
    GXSetTevOrder(4, 4, 4, 4);
    GXSetTevOrder(5, 5, 5, 4);
    GXSetTevOrder(6, 6, 6, 4);
    GXSetTevOrder(7, 7, 7, 4);
    GXSetTevOrder(8, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(9, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xA, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xB, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xC, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xD, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xE, 0xFF, 0xFF, 0xFF);
    GXSetTevOrder(0xF, 0xFF, 0xFF, 0xFF);

    GXSetNumTevStages(1);
    GXSetNumTexGens(0, 3);
    fn_80223E5C(7, 0, 0, 7, 0);
    fn_80223EA0(0, 0x11, 0);

    for (i = 0; i < 0x10; i++) {
        fn_80223CDC(i, 6);
        fn_80223D38(i, 0);
        GXSetTevSwapMode(i, 0, 0);
    }

    GXSetTevSwapModeTable(0, 0, 1, 2, 3);
    GXSetTevSwapModeTable(1, 0, 0, 0, 3);
    GXSetTevSwapModeTable(2, 1, 1, 1, 3);
    GXSetTevSwapModeTable(3, 2, 2, 2, 3);

    for (i = 0; i < 0x10; i++) {
        fn_802238CC(i);
    }

    fn_802238A8(0);
    fn_80223678(0, 0, 0);
    fn_80223678(1, 0, 0);
    fn_80223678(2, 0, 0);
    fn_80223678(3, 0, 0);

    fog = ambientColor;
    fn_802240F0(0, &fog, 0.0f, lbl_8036BCC0, lbl_8036BCC4, lbl_8036BCC0);
    fn_802244B4(0, 0, 0);
    fn_802245D8(0, 4, 5, 0);
    fn_8022462C(1);
    fn_80224658(1);
    GXSetZMode(1, 3, 1);
    fn_802246B8(1);
    fn_802247C0(1);
    fn_802247EC(0, 0);
    fn_802246EC(0, 0);
    fn_80224828(1, 1);

    if (rmode->viHeight == (s32)(rmode->xfbHeight * 2)) {
        xfbm = 1;
    } else {
        xfbm = 0;
    }
    fn_80224860(rmode->field_rendering, xfbm);
    fn_802211D0(0, 0, rmode->fbWidth, rmode->efbHeight);
    fn_802212C8(rmode->fbWidth, rmode->efbHeight);
    fn_802216E0((f32)rmode->xfbHeight / (f32)rmode->efbHeight);
    fn_80221450(3);
    fn_80221824(rmode->aa, &rmode->sample_pattern[0][0], 1, rmode->vfilter);
    fn_80221A2C(0);
    fn_8022142C(0);
    fn_80221D34();
    fn_80220AD0(1);
    fn_80220A54(1);
    fn_80220B0C(0);
    fn_80220A6C(0, 0, 1, 0xF);
    fn_80220A20(7, 0);
    fn_80220A34(1);
    fn_80220AE8(0, 0);
    fn_80220B24(1, 7, 1);
    fn_80225204(0x23, 0x16);
    fn_80225BF4();
}
#pragma pop
#pragma use_lmw_stmw reset
#pragma peephole on

void fn_8021EB88(s32 arg0, void *arg1)
{
    extern u16 *__cpReg;
    extern u8 *const __GXData;
    extern u32 lbl_80368778;
    extern u32 lbl_80368780;
    extern u32 lbl_80368788;

    void fn_8020A9E0(u32);
    void fn_8020AC68(u32);
    void __GXWriteFifoIntReset(u32, u8);
    void __GXWriteFifoIntEnable(u32, u8);

    u8 context[0x2C8];

    *(u32 *)(__GXData + 0xC) = __cpReg[0];

    if ((*(u32 *)(__GXData + 8) >> 3) & 1) {
        if ((*(u32 *)(__GXData + 0xC) >> 1) & 1) {
            fn_8020A9E0(lbl_80368778);
            lbl_80368780 = 0;
            __GXWriteFifoIntReset(1, 1);
            __GXWriteFifoIntEnable(1, 0);
        }
    }

    if ((*(u32 *)(__GXData + 8) >> 2) & 1) {
        if (*(u32 *)(__GXData + 0xC) & 1) {
            lbl_80368788++;
            __GXWriteFifoIntEnable(0, 1);
            __GXWriteFifoIntReset(1, 0);
            lbl_80368780 = 1;
            fn_8020AC68(lbl_80368778);
        }
    }

    if ((*(u32 *)(__GXData + 8) >> 5) & 1) {
        if ((*(u32 *)(__GXData + 0xC) >> 4) & 1) {
            *(u32 *)(__GXData + 8) = __rlwimi(*(u32 *)(__GXData + 8), 0, 5, 26, 26);
            __cpReg[1] = *(u32 *)(__GXData + 8);

            if (lbl_80368784 != 0) {
                OSClearContext((void *)context);
                OSSetCurrentContext((void *)context);

                ((void (*)(void))lbl_80368784)();

                OSClearContext((void *)context);
                OSSetCurrentContext(arg1);
            }
        }
    }
}

#pragma peephole on
void GXInitFifoBase(__GXFifoObj *fifo, void *base, u32 size) {
    void fn_8021ED98(void *, s32, s32);
    void fn_8021ED28(__GXFifoObj *, void *, void *);

    fifo->base = (u8 *)base;
    fifo->top = (u8 *)base + size - 4;
    fifo->size = size;
    fifo->count = 0;
    fn_8021ED98(fifo, (s32)(size - 0x4000), (s32)((size >> 1) & ~0x1F));
    fn_8021ED28(fifo, base, base);
}

void fn_8021ED28(void *arg0, s32 arg1, s32 arg2) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 *p;
    s32 enabled;
    s32 temp;

    p = (s32 *)arg0;
    enabled = OSDisableInterrupts();
    p[5] = arg1;
    p[6] = arg2;
    p[7] = arg2 - arg1;
    temp = p[7];
    if (temp < 0) {
        p[7] = temp + p[2];
    }
    OSRestoreInterrupts(enabled);
}

void fn_8021ED98(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

void GXSetCPUFifo(void *fifo) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void __GXWriteFifoIntEnable(u8, u8);
    void __GXFifoLink(u8);
    void __GXWriteFifoIntReset(u8, u8);
    void PPCSync(void);
    extern void *__piReg;
    extern void* __GXCurrentCPUFifo;
    extern void* __GXCurrentGPFifo;
    extern u8 __GXGPFifoAttached;
    // Bind fifo as the CPU FIFO; if it is also the GP FIFO, link them and enable write interrupts.
    __GXFifoObj* realFifo = (__GXFifoObj*)fifo;
    s32 enabled;
    u32 wrPtrPhys;
    u32 piWpar;

    enabled = OSDisableInterrupts();
    __GXCurrentCPUFifo = fifo;
    if (fifo == __GXCurrentGPFifo) {
        M2C_FIELD(__piReg, u32 *, 0xC) = (u32) realFifo->base & 0x3FFFFFFF;
        M2C_FIELD(__piReg, u32 *, 0x10) = (u32) realFifo->top & 0x3FFFFFFF;
        wrPtrPhys = __rlwimi(0, (u32) realFifo->wrPtr, 0, 6, 26);
        piWpar = wrPtrPhys;
        piWpar = __rlwimi(piWpar, 0, 26, 5, 5);
        M2C_FIELD(__piReg, u32 *, 0x14) = piWpar;
        __GXGPFifoAttached = 1;
        __GXWriteFifoIntReset(1, 1);
        __GXWriteFifoIntEnable(1, 0);
        __GXFifoLink(1);
    } else {
        u32 wrPtrPhys2;
        u32 piWpar2;

        if (__GXGPFifoAttached != 0) {
            __GXFifoLink(0);
            __GXGPFifoAttached = 0;
        }
        __GXWriteFifoIntEnable(0, 0);
        M2C_FIELD(__piReg, u32 *, 0xC) = (u32) realFifo->base & 0x3FFFFFFF;
        M2C_FIELD(__piReg, u32 *, 0x10) = (u32) realFifo->top & 0x3FFFFFFF;
        wrPtrPhys2 = __rlwimi(0, (u32) realFifo->wrPtr, 0, 6, 26);
        piWpar2 = wrPtrPhys2;
        piWpar2 = __rlwimi(piWpar2, 0, 26, 5, 5);
        M2C_FIELD(__piReg, u32 *, 0x14) = piWpar2;
    }
    PPCSync();
    OSRestoreInterrupts(enabled);
}

void GXSetGPFifo(void *fifo) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void __GXFifoReadDisable(void);
    void __GXWriteFifoIntEnable(u8, u8);
    void __GXFifoLink(u8);
    void __GXWriteFifoIntReset(u8, u8);
    void __GXFifoReadEnable(void);
    void PPCSync(void);
    extern u16* const __GXData;
    extern u16* __cpReg;
    extern void* __GXCurrentCPUFifo;
    extern void* __GXCurrentGPFifo;
    extern u8 __GXGPFifoAttached;
    // Bind fifo as the GP FIFO and optionally link it with the CPU FIFO.
    __GXFifoObj* realFifo = (__GXFifoObj*)fifo;
    s32 enabled;
    u32 reg;

    enabled = OSDisableInterrupts();
    __GXFifoReadDisable();
    __GXWriteFifoIntEnable(0, 0);
    __GXCurrentGPFifo = realFifo;

    __cpReg[16] = (u32)realFifo->base;
    __cpReg[18] = (u32)realFifo->top;
    __cpReg[24] = realFifo->count;
    __cpReg[26] = (u32)realFifo->wrPtr;
    __cpReg[28] = (u32)realFifo->rdPtr;
    __cpReg[20] = realFifo->hiWatermark;
    __cpReg[22] = realFifo->loWatermark;
    __cpReg[17] = ((u32)realFifo->base & 0x3FFFFFFF) >> 16;
    __cpReg[19] = ((u32)realFifo->top & 0x3FFFFFFF) >> 16;
    __cpReg[25] = realFifo->count >> 16;
    __cpReg[27] = ((u32)realFifo->wrPtr & 0x3FFFFFFF) >> 16;
    __cpReg[29] = ((u32)realFifo->rdPtr & 0x3FFFFFFF) >> 16;
    __cpReg[21] = realFifo->hiWatermark >> 16;
    __cpReg[23] = realFifo->loWatermark >> 16;

    PPCSync();

    if (__GXCurrentCPUFifo == __GXCurrentGPFifo) {
        __GXGPFifoAttached = 1;
        __GXWriteFifoIntEnable(1, 0);
        __GXFifoLink(1);
    } else {
        __GXGPFifoAttached = 0;
        __GXWriteFifoIntEnable(0, 0);
        __GXFifoLink(0);
    }

    reg = M2C_FIELD(__GXData, u32 *, 0x8);
    reg = __rlwimi(reg, 0, 1, 30, 30);
    reg = __rlwimi(reg, 0, 5, 26, 26);
    __cpReg[1] = reg;
    __cpReg[1] = M2C_FIELD(__GXData, u32 *, 0x8);

    __GXWriteFifoIntReset(1, 1);
    __GXFifoReadEnable();
    OSRestoreInterrupts(enabled);
}

void fn_8021F0A0(__GXFifoObj *fifo);

void fn_8021F06C(s32 arg0) {
    void fn_802204F8(void);
    s32 sp14;
    
    sp14 = arg0;
    fn_802204F8();
    fn_8021F0A0((__GXFifoObj *)sp14);
}

void fn_8021F0A0(__GXFifoObj *fifo) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    extern void *__piReg;
    extern u16 *__cpReg;
    extern u8 __GXGPFifoAttached;
    s32 enabled;

    enabled = OSDisableInterrupts();
    fifo->base = (u8 *)(((u32 *)__piReg)[3] + 0x80000000);
    fifo->top = (u8 *)(((u32 *)__piReg)[4] + 0x80000000);
    fifo->wrPtr = (void *)((((u32 *)__piReg)[5] & ~0x04000000U) + 0x80000000);
    if (__GXGPFifoAttached != 0) {
        fifo->rdPtr = (void *)((__cpReg[28] | (__cpReg[29] << 16)) + 0x80000000);
        fifo->count = (s32)(__cpReg[24] | (__cpReg[25] << 16));
    } else {
        fifo->count = (s32)((u8 *)fifo->wrPtr - (u8 *)fifo->rdPtr);
        if (fifo->count < 0) {
            fifo->count += (s32)fifo->size;
        }
    }
    OSRestoreInterrupts(enabled);
}

void fn_8021F168(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4)
{
  extern u16 * const __GXData;
  extern u16 *__cpReg;
  u32 *gx;
  ((u32 *) __GXData)[3] = __cpReg[0];
  *arg0 = ((u32 *) __GXData)[3] & 1;
  *arg1 = (((u32 *) __GXData)[3] >> 1) & 1;
  *arg2 = (((u32 *) __GXData)[3] >> 2) & 1;
  *arg3 = (((u32 *) __GXData)[3] >> 3) & 1;
  *arg4 = (((u32 *) __GXData)[3] >> 4) & 1;
}

void fn_8021F1B8(__GXFifoObj *fifo, void **read, void **write)
{
    extern void *__GXCurrentCPUFifo;
    extern void *__GXCurrentGPFifo;
    extern volatile u32 *__piReg;
    extern volatile u16 *__cpReg;
    u32 val;

    if (fifo == __GXCurrentCPUFifo) {
        fifo->wrPtr = (void *)((__piReg[5] & ~0x04000000U) + 0x80000000);
    }
    if (fifo == __GXCurrentGPFifo) {
        val = __cpReg[29] << 16;
        val |= __cpReg[28];
        fifo->rdPtr = (void *)(val + 0x80000000);
        val = __cpReg[25] << 16;
        fifo->count = __cpReg[24] | val;
    } else {
        fifo->count = (u8 *)fifo->wrPtr - (u8 *)fifo->rdPtr;
        if (fifo->count < 0) {
            fifo->count += fifo->size;
        }
    }
    *read = fifo->rdPtr;
    *write = fifo->wrPtr;
}

s32 fn_8021F250(s32 *arg0) {
    return *arg0;
}

s32 fn_8021F258(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

void* fn_8021F260(void* arg0) {
    void* temp_r31;

    temp_r31 = lbl_80368784;
    OSDisableInterrupts();
    lbl_80368784 = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}

void __GXFifoInit(void)
{
    extern void fn_8021EB88(void);
    extern u32 lbl_80368778;
    extern u32 lbl_80368780;
    extern u32 __GXCurrentCPUFifo;
    extern u32 __GXCurrentGPFifo;

    __OSSetInterruptHandler(0x11, fn_8021EB88);
    __OSUnmaskInterrupts(0x4000);

    lbl_80368778 = fn_80209FD4();
    lbl_80368780 = 0;
    __GXCurrentCPUFifo = 0;
    __GXCurrentGPFifo = 0;
}

void __GXFifoReadEnable(void) {
 extern u16 *const __GXData;
 extern u8 *__cpReg;
 u8 *gx = (u8 *)__GXData;
 *(u32 *)(gx+8) = __rlwimi(*(u32 *)(gx+8), 1, 0, 31, 31);
 *(u16 *)(__cpReg+2) = *(u32 *)(gx+8);
}

void __GXFifoReadDisable(void) { extern u16 *const __GXData; extern u8 *__cpReg; u8 *gx = (u8 *)__GXData; *(u32 *)(gx+8) = __rlwimi(*(u32 *)(gx+8), 0, 0, 31, 31); *(u16 *)(__cpReg+2) = *(u32 *)(gx+8); }

void __GXFifoLink(u8 en) {
    extern u16* const __GXData;
    extern u16* __cpReg;
    u32 b;

    if (en != 0) {
        b = 1;
    } else {
        b = 0;
    }
    M2C_FIELD(__GXData, u32 *, 0x8) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x8), b, 4, 27, 27);
    __cpReg[1] = (u16) M2C_FIELD(__GXData, u32 *, 0x8);
}

void __GXWriteFifoIntEnable(u32 arg0, u8 arg1)
{
extern u16 *const __GXData;
extern u8 *__cpReg;
u8 *gx = (u8*)__GXData;
*(u32*)(gx+8) = __rlwimi(*(u32*)(gx+8),arg0,2,29,29);
*(u32*)(gx+8) = __rlwimi(*(u32*)(gx+8),(u32)arg1,3,28,28);
*(volatile u16*)(__cpReg+2) = *(u32*)(gx+8);
}

void __GXWriteFifoIntReset(u32 arg0, u8 arg1)
{
extern u16 *const __GXData;
extern u8 *__cpReg;
u8 *gx = (u8*)__GXData;
*(u32*)(gx+0x10) = __rlwimi(*(u32*)(gx+0x10),arg0,0,31,31);
*(u32*)(gx+0x10) = __rlwimi(*(u32*)(gx+0x10),(u32)arg1,1,30,30);
*(volatile u16*)(__cpReg+4) = *(u32*)(gx+0x10);
}

#pragma opt_common_subs off
void fn_8021F3CC(void) {
    void *fn_8021F4D4(void);
    void *fn_8021F4CC(void);
    struct FifoCopy { u8 bytes[128]; };
    struct FifoPad { u8 pad[0xC]; struct FifoCopy copy; };
    struct FifoPad fp;
    __GXFifoObj *gp;
    void *cpu;
    void *base;

    gp = fn_8021F4D4();
    if (gp) {
        cpu = fn_8021F4CC();
        base = gp->base;
        fp.copy = *(struct FifoCopy *)gp;
        fn_8021ED28(&fp.copy, (s32)base, (s32)base);
        GXSetGPFifo(&fp.copy);
        if (cpu == gp)
            GXSetCPUFifo(&fp.copy);
        fn_8021ED28(gp, (s32)base, (s32)base);
        GXSetGPFifo(gp);
        if (cpu == gp)
            GXSetCPUFifo(cpu);
    }
}
#pragma opt_common_subs reset
s32 fn_8021F4CC(void) {
    extern s32 __GXCurrentCPUFifo;
    return __GXCurrentCPUFifo;
}

s32 fn_8021F4D4(void) {
    extern s32 __GXCurrentGPFifo;
    return __GXCurrentGPFifo;
}

s32 fn_8021F4DC(void) {
    extern s32 lbl_80368788;
    return lbl_80368788;
}

void GXSetVtxDesc(u32 attr, s32 type) {
 extern u16 *const __GXData;
 switch (attr) {
case 0: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,0,31,31); break;
case 1: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,1,30,30); break;
case 2: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,2,29,29); break;
case 3: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,3,28,28); break;
case 4: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,4,27,27); break;
case 5: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,5,26,26); break;
case 6: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,6,25,25); break;
case 7: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,7,24,24); break;
case 8: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,8,23,23); break;
case 9: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,9,21,22); break;
case 10:
 if(type) { M2C_FIELD(__GXData,u8 *,0x4d4)=1; M2C_FIELD(__GXData,u8 *,0x4d5)=0; M2C_FIELD(__GXData,u32 *,0x4d0)=type; } else M2C_FIELD(__GXData,u8 *,0x4d4)=0;
 break;
case 25:
 if(type) { M2C_FIELD(__GXData,u8 *,0x4d5)=1; M2C_FIELD(__GXData,u8 *,0x4d4)=0; M2C_FIELD(__GXData,u32 *,0x4d0)=type; } else M2C_FIELD(__GXData,u8 *,0x4d5)=0;
 break;
case 11: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,13,17,18); break;
case 12: M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),type,15,15,16); break;
case 13: M2C_FIELD(__GXData,u32 *,0x18)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x18),type,0,30,31); break;
case 14: M2C_FIELD(__GXData,u32 *,0x18)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x18),type,2,28,29); break;
case 15: M2C_FIELD(__GXData,u32 *,0x18)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x18),type,4,26,27); break;
case 16: M2C_FIELD(__GXData,u32 *,0x18)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x18),type,6,24,25); break;
case 17: M2C_FIELD(__GXData,u32 *,0x18)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x18),type,8,22,23); break;
case 18: M2C_FIELD(__GXData,u32 *,0x18)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x18),type,10,20,21); break;
case 19: M2C_FIELD(__GXData,u32 *,0x18)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x18),type,12,18,19); break;
case 20: M2C_FIELD(__GXData,u32 *,0x18)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x18),type,14,16,17); break;
}
 if (M2C_FIELD(__GXData,u8 *,0x4d4) || M2C_FIELD(__GXData,u8 *,0x4d5)) M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),M2C_FIELD(__GXData,u32 *,0x4d0),11,19,20);
 else M2C_FIELD(__GXData,u32 *,0x14)=__rlwimi(M2C_FIELD(__GXData,u32 *,0x14),0,11,19,20);
 M2C_FIELD(__GXData,u32 *,0x5ac)|=8;
}

void GXSetVtxDescv(s32 *arg0)
{
    extern u16 *const __GXData;
    u32 attr;
    s32 type;

    while (arg0[0] != 0xFF) {
        attr = arg0[0];
        type = arg0[1];
        switch (attr) {
        case 0:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 0, 31, 31);
            break;
        case 1:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 1, 30, 30);
            break;
        case 2:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 2, 29, 29);
            break;
        case 3:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 3, 28, 28);
            break;
        case 4:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 4, 27, 27);
            break;
        case 5:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 5, 26, 26);
            break;
        case 6:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 6, 25, 25);
            break;
        case 7:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 7, 24, 24);
            break;
        case 8:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 8, 23, 23);
            break;
        case 9:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 9, 21, 22);
            break;
        case 10:
            if (type != 0) {
                M2C_FIELD(__GXData, u8 *, 0x4D4) = 1;
                M2C_FIELD(__GXData, u8 *, 0x4D5) = 0;
                M2C_FIELD(__GXData, u32 *, 0x4D0) = type;
            } else {
                M2C_FIELD(__GXData, u8 *, 0x4D4) = 0;
            }
            break;
        case 25:
            if (type != 0) {
                M2C_FIELD(__GXData, u8 *, 0x4D5) = 1;
                M2C_FIELD(__GXData, u8 *, 0x4D4) = 0;
                M2C_FIELD(__GXData, u32 *, 0x4D0) = type;
            } else {
                M2C_FIELD(__GXData, u8 *, 0x4D5) = 0;
            }
            break;
        case 11:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 13, 17, 18);
            break;
        case 12:
            M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), type, 15, 15, 16);
            break;
        case 13:
            M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 0, 30, 31);
            break;
        case 14:
            M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 2, 28, 29);
            break;
        case 15:
            M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 4, 26, 27);
            break;
        case 16:
            M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 6, 24, 25);
            break;
        case 17:
            M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 8, 22, 23);
            break;
        case 18:
            M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 10, 20, 21);
            break;
        case 19:
            M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 12, 18, 19);
            break;
        case 20:
            M2C_FIELD(__GXData, u32 *, 0x18) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x18), type, 14, 16, 17);
            break;
        }
        arg0 += 2;
    }
    if (M2C_FIELD(__GXData, u8 *, 0x4D4) || M2C_FIELD(__GXData, u8 *, 0x4D5))
        M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), M2C_FIELD(__GXData, u32 *, 0x4D0), 11, 19, 20);
    else
        M2C_FIELD(__GXData, u32 *, 0x14) = __rlwimi(M2C_FIELD(__GXData, u32 *, 0x14), 0, 11, 19, 20);
    M2C_FIELD(__GXData, u32 *, 0x5AC) |= 8;
}

#pragma optimization_level 3
void fn_8021F9D8(void)
{
  u32 new_var;
  extern u16 * const __GXData;
  u32 n;
  u32 colors;
  u32 tex;
  *((volatile u8 *) 0xCC008000) = 8;
  *((volatile u8 *) 0xCC008000) = 0x50;
  *((volatile u32 *) 0xCC008000) = *((u32 *) (((u8 *) __GXData) + 0x14));
  *((volatile u8 *) 0xCC008000) = 8;
  *((volatile u8 *) 0xCC008000) = 0x60;
  *((volatile u32 *) 0xCC008000) = *((u32 *) (((u8 *) __GXData) + 0x18));
  if (((u8 *) __GXData)[0x4d5])
  {
    n = 2;
  }
  else
    if (((u8 *) __GXData)[0x4d4])
  {
    n = 1;
  }
  else
  {
    n = 0;
  }
  new_var = (*((u32 *) (((u8 *) __GXData) + 0x14))) >> 13;
  colors = (33 - ((u32) __cntlzw(new_var & 15))) >> 1;
  tex = (33 - ((u32) __cntlzw((*((u32 *) (((u8 *) __GXData) + 0x18))) & 0xffff))) >> 1;
  *((volatile u8 *) 0xCC008000) = 0x10;
  *((volatile u32 *) 0xCC008000) = 0x1008;
  *((volatile u32 *) 0xCC008000) = (tex << 4) | (colors | (n << 2));
  __GXData[1] = 1;
}
#pragma peephole on
void fn_8021FA94(void) {
extern u32 __GXData;
extern u8 lbl_80367000[4], lbl_80367004[4], lbl_80367008[8];
u8 *gx;
u32 count;
u32 word14, word18;
s32 multiplier;
gx=(u8*)__GXData;
if (*(u16*)(gx+4)==0) return;
word14=*(u32*)(gx+0x14);
word18=*(u32*)(gx+0x18);
multiplier=(*(u32*)(gx+0x1c)&0x200)/0x200;
count=word14&1;
count+=(word14>>1)&1;
count+=(word14>>2)&1;
count+=(word14>>3)&1;
count+=(word14>>4)&1;
count+=(word14>>5)&1;
count+=(word14>>6)&1;
count+=(word14>>7)&1;
count+=(word14>>8)&1;
count+=lbl_80367008[(word14>>9)&3];
if (multiplier==1) multiplier=3; else multiplier=1;
count+=lbl_80367008[(word14>>11)&3]*multiplier;
count+=lbl_80367000[(word14>>13)&3];
count+=lbl_80367000[(word14>>15)&3];
count+=lbl_80367004[(word18>>0)&3];
count+=lbl_80367004[(word18>>2)&3];
count+=lbl_80367004[(word18>>4)&3];
count+=lbl_80367004[(word18>>6)&3];
count+=lbl_80367004[(word18>>8)&3];
count+=lbl_80367004[(word18>>10)&3];
count+=lbl_80367004[(word18>>12)&3];
count+=lbl_80367004[(word18>>14)&3];
*(u16*)(gx+6)=count;
}
#pragma peephole reset
void GXClearVtxDesc(void)
{
  extern u16 * const __GXData;
  u32 *gx;
  ((u32 *) __GXData)[0x14 / 4] = 0;
  ((u32 *) __GXData)[0x14 / 4] = __rlwimi(((u32 *) __GXData)[0x14 / 4], 1, 9, 21, 22);
  ((u32 *) __GXData)[0x18 / 4] = 0;
  ((u8 *) ((u32 *) __GXData))[0x4D4] = 0;
  ((u8 *) ((u32 *) __GXData))[0x4D5] = 0;
  ((u32 *) __GXData)[0x5AC / 4] |= 8;
}

#pragma optimization_level 3
void GXSetVtxAttrFmt(s32 vtxfmt, s32 attr, s32 cnt, s32 type, unsigned char frac)
{
  extern u8 *__GXData;
  u8 *gx;
  u32 *vatA;
  u32 *vatB;
  u32 *vatC;
  gx = __GXData + (vtxfmt << 2);
  vatA = (u32 *) (gx + 0x1C);
  vatB = (u32 *) (gx + 0x3C);
  vatC = (u32 *) (gx + 0x5C);
  switch (attr)
  {
    case 9:
      *vatA = __rlwimi(*vatA, cnt, 0, 31, 31);
      *vatA = __rlwimi(*vatA, type, 1, 28, 30);
      *vatA = __rlwimi(*vatA, frac, 4, 23, 27);
      break;

    case 10:
      *vatA = __rlwimi(*vatA, type, 10, 19, 21);
      if (cnt == 2)
    {
      *vatA = __rlwimi(*vatA, 1, 9, 22, 22);
      *vatA = __rlwimi(*vatA, 1, 31, 0, 0);
    }
    else
    {
      *vatA = __rlwimi(*vatA, cnt, 9, 22, 22);
      *vatA = __rlwimi(*vatA, 0, 31, 0, 0);
    }
      break;

    case 11:
      *vatA = __rlwimi(*vatA, cnt, 13, 18, 18);
      *vatA = __rlwimi(*vatA, type, 14, 15, 17);
      break;

    case 12:
      *vatA = __rlwimi(*vatA, cnt, 17, 14, 14);
      *vatA = __rlwimi(*vatA, type, 18, 11, 13);
      break;

    case 13:
      *vatA = __rlwimi(*vatA, cnt, 21, 10, 10);
      *vatA = __rlwimi(*vatA, type, 22, 7, 9);
      *vatA = __rlwimi(*vatA, frac, 25, 2, 6);
      break;

    case 14:
      *vatB = __rlwimi(*vatB, cnt, 0, 31, 31);
      *vatB = __rlwimi(*vatB, type, 1, 28, 30);
      *vatB = __rlwimi(*vatB, frac, 4, 23, 27);
      break;

    case 15:
      *vatB = __rlwimi(*vatB, cnt, 9, 22, 22);
      *vatB = __rlwimi(*vatB, type, 10, 19, 21);
      *vatB = __rlwimi(*vatB, frac, 13, 14, 18);
      break;

    case 16:
      *vatB = __rlwimi(*vatB, cnt, 18, 13, 13);
      *vatB = __rlwimi(*vatB, type, 19, 10, 12);
      *vatB = __rlwimi(*vatB, frac, 22, 5, 9);
      break;

    case 17:
      *vatB = __rlwimi(*vatB, cnt, 27, 4, 4);
      *vatB = __rlwimi(*vatB, type, 28, 1, 3);
      *vatC = __rlwimi(*vatC, frac, 0, 27, 31);
      break;

    case 18:
      *vatC = __rlwimi(*vatC, cnt, 5, 26, 26);
      *vatC = __rlwimi(*vatC, type, 6, 23, 25);
      *vatC = __rlwimi(*vatC, frac, 9, 18, 22);
      break;

    case 19:
      *vatC = __rlwimi(*vatC, cnt, 14, 17, 17);
      *vatC = __rlwimi(*vatC, type, 15, 14, 16);
      *vatC = __rlwimi(*vatC, frac, 18, 9, 13);
      break;

    case 20:
      *vatC = __rlwimi(*vatC, cnt, 23, 8, 8);
      *vatC = __rlwimi(*vatC, type, 24, 5, 7);
      *vatC = __rlwimi(*vatC, frac, 27, 0, 4);
      break;

    case 21:

    case 22:

    case 23:

    case 24:

    case 25:
      break;

  }

  gx = __GXData;
  *((u32 *) (gx + 0x5AC)) |= 0x10;
  gx[0x5AB] |= (u8) (1 << ((u8) vtxfmt));
}
#pragma optimization_level reset
void GXSetVtxAttrFmtv(s32 vtxfmt, void *list)
{
  extern u8 *__GXData;
  u8 *gx;
  u8 *entry=(u8 *)list;
  s32 cnt,type,attr;
  u8 frac;
  u32 *vatA;
  u32 *vatB;
  u32 *vatC;
  gx = __GXData;
  gx += vtxfmt << 2;
  vatA = (u32 *) (gx + 0x1C);
  vatB = (u32 *) (gx + 0x3C);
  vatC = (u32 *) (gx + 0x5C);
  while (*(s32 *)entry != 255) {
  attr=*(s32 *)entry;
  frac=entry[12];
  type=*(s32 *)(entry+8);
  cnt=*(s32 *)(entry+4);
  switch (attr)
  {
    case 9:
      *vatA = __rlwimi(*vatA, cnt, 0, 31, 31);
      *vatA = __rlwimi(*vatA, type, 1, 28, 30);
      *vatA = __rlwimi(*vatA, frac, 4, 23, 27);
      break;

    case 10:
      *vatA = __rlwimi(*vatA, type, 10, 19, 21);
      if (cnt == 2)
    {
      *vatA = __rlwimi(*vatA, 1, 9, 22, 22);
      *vatA = __rlwimi(*vatA, 1, 31, 0, 0);
    }
    else
    {
      *vatA = __rlwimi(*vatA, cnt, 9, 22, 22);
      *vatA = __rlwimi(*vatA, 0, 31, 0, 0);
    }
      break;

    case 11:
      *vatA = __rlwimi(*vatA, cnt, 13, 18, 18);
      *vatA = __rlwimi(*vatA, type, 14, 15, 17);
      break;

    case 12:
      *vatA = __rlwimi(*vatA, cnt, 17, 14, 14);
      *vatA = __rlwimi(*vatA, type, 18, 11, 13);
      break;

    case 13:
      *vatA = __rlwimi(*vatA, cnt, 21, 10, 10);
      *vatA = __rlwimi(*vatA, type, 22, 7, 9);
      *vatA = __rlwimi(*vatA, frac, 25, 2, 6);
      break;

    case 14:
      *vatB = __rlwimi(*vatB, cnt, 0, 31, 31);
      *vatB = __rlwimi(*vatB, type, 1, 28, 30);
      *vatB = __rlwimi(*vatB, frac, 4, 23, 27);
      break;

    case 15:
      *vatB = __rlwimi(*vatB, cnt, 9, 22, 22);
      *vatB = __rlwimi(*vatB, type, 10, 19, 21);
      *vatB = __rlwimi(*vatB, frac, 13, 14, 18);
      break;

    case 16:
      *vatB = __rlwimi(*vatB, cnt, 18, 13, 13);
      *vatB = __rlwimi(*vatB, type, 19, 10, 12);
      *vatB = __rlwimi(*vatB, frac, 22, 5, 9);
      break;

    case 17:
      *vatB = __rlwimi(*vatB, cnt, 27, 4, 4);
      *vatB = __rlwimi(*vatB, type, 28, 1, 3);
      *vatC = __rlwimi(*vatC, frac, 0, 27, 31);
      break;

    case 18:
      *vatC = __rlwimi(*vatC, cnt, 5, 26, 26);
      *vatC = __rlwimi(*vatC, type, 6, 23, 25);
      *vatC = __rlwimi(*vatC, frac, 9, 18, 22);
      break;

    case 19:
      *vatC = __rlwimi(*vatC, cnt, 14, 17, 17);
      *vatC = __rlwimi(*vatC, type, 15, 14, 16);
      *vatC = __rlwimi(*vatC, frac, 18, 9, 13);
      break;

    case 20:
      *vatC = __rlwimi(*vatC, cnt, 23, 8, 8);
      *vatC = __rlwimi(*vatC, type, 24, 5, 7);
      *vatC = __rlwimi(*vatC, frac, 27, 0, 4);
      break;

    case 21:

    case 22:

    case 23:

    case 24:

    case 25:
      break;

  }

  entry+=16;
  }
  gx = __GXData;
  *((u32 *) (gx + 0x5AC)) |= 0x10;
  gx[0x5AB] |= (u8) (1 << ((u8) vtxfmt));
}

#pragma global_optimizer off
#pragma opt_lifetimes off
void fn_802200CC(void)
{
    extern u8 *__GXData;
    u8 *gx;
    u32 index;
    u32 offset;
    u32 flags;
    u32 a;
    u32 b;
    u32 c;
    u32 t;
    u32 v;
    u32 w;
    u32 z;

    gx = __GXData;
    index = 0;
    offset = 0;
    flags = gx[0x5AB];

    do {
      if ((flags & 1) != 0) {
        *(u8 *)0xCC008000 = 8;
        t = index | 0x70;
        a = offset + 0x1C;
        *(u8 *)0xCC008000 = t;
        t = index | 0x80;
        b = offset + 0x3C;
        v = *(u32 *)((u32)gx + a);
        c = index | 0x90;
        a = offset + 0x5C;
        *(u32 *)0xCC008000 = v;
        *(u8 *)0xCC008000 = 8;
        *(u8 *)0xCC008000 = t;
        w = *(u32 *)((u32)gx + b);
        *(u32 *)0xCC008000 = w;
        *(u8 *)0xCC008000 = 8;
        *(u8 *)0xCC008000 = c;
        z = *(u32 *)((u32)gx + a);
        *(u32 *)0xCC008000 = z;
      }
        flags >>= 1;
        offset += 4;
        index += 1;
    } while (flags != 0);

    __GXData[0x5AB] = 0;
}
#pragma opt_lifetimes reset
#pragma global_optimizer reset
void fn_80220154(s32 arg0, s32 arg1, u8 arg2) {
    s32 temp_r3;
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 == 0x19) {
        var_r3 = 0xA;
    }
    temp_r3 = var_r3 - 9;

    *(u8 *)0xCC008000 = 8;
    *(u8 *)0xCC008000 = temp_r3 | 0xA0;
    *(u32 *)0xCC008000 = arg1 & 0x3FFFFFFF;
    *(u8 *)0xCC008000 = 8;
    *(u8 *)0xCC008000 = temp_r3 | 0xB0;
    *(u32 *)0xCC008000 = arg2;
}

void fn_80220198(void) {
    *(s8 *)0xCC008000 = 0x48;
}

#pragma push
#pragma optimization_level 3
void fn_802201A8(s32 stage, s32 color, s32 map, s32 arg3, s32 arg4, s32 arg5) {
    void fn_80225180(s32);
    extern u8 *__GXData;
    u32 reg = 0;
    u32 a;
    u32 b;
    u32 c;
    u32 t;

    b = 0;
    a = 5;

    switch (map) {
    case 0: a = 0; b = 1; break;
    case 1: a = 1; b = 1; break;
    case 2: a = 3; b = 1; break;
    case 3: a = 4; b = 1; break;
    case 4: a = 2; break;
    case 5: a = 2; break;
    case 6: a = 5; break;
    case 7: a = 6; break;
    case 8: a = 7; break;
    case 9: a = 8; break;
    case 10: a = 9; break;
    case 11: a = 10; break;
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18: a = 11; break;
    case 19: a = 12; break;
    case 20: break;
    }

    switch (color) {
    case 1:
        reg = __rlwimi(reg, 0, 1, 30, 30);
        t = reg;
        t = __rlwimi(t, b, 2, 29, 29);
        reg = t;
        reg = __rlwimi(reg, 0, 4, 25, 27);
        reg = __rlwimi(reg, a, 7, 20, 24);
        break;
    case 0:
        reg = __rlwimi(reg, 1, 1, 30, 30);
        reg = __rlwimi(reg, b, 2, 29, 29);
        reg = __rlwimi(reg, 0, 4, 25, 27);
        reg = __rlwimi(reg, a, 7, 20, 24);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        reg = __rlwimi(reg, 0, 1, 30, 30);
        reg = __rlwimi(reg, b, 2, 29, 29);
        reg = __rlwimi(reg, 1, 4, 25, 27);
        reg = __rlwimi(reg, a, 7, 20, 24);
        reg = __rlwimi(reg, map - 0xC, 12, 17, 19);
        reg = __rlwimi(reg, color - 2, 15, 14, 16);
        break;
    case 10:
        reg = __rlwimi(reg, 0, 1, 30, 30);
        reg = __rlwimi(reg, b, 2, 29, 29);
        if (map == 0x13) {
            reg = __rlwimi(reg, 2, 4, 25, 27);
        } else {
            reg = __rlwimi(reg, 3, 4, 25, 27);
        }
        reg = __rlwimi(reg, 2, 7, 20, 24);
        break;
    }

    *(volatile u8 *)0xCC008000 = 0x10;
    *(volatile u32 *)0xCC008000 = (u32)(stage + 0x1040);
    *(volatile u32 *)0xCC008000 = reg;
    c = 0;
    c = __rlwimi(c, arg5 - 0x40, 0, 26, 31);
    c = __rlwimi(c, arg4, 8, 23, 23);
    *(volatile u8 *)0xCC008000 = 0x10;
    *(volatile u32 *)0xCC008000 = (u32)(stage + 0x1050);
    *(volatile u32 *)0xCC008000 = c;

    switch (stage) {
    case 0:
        ((u32 *)__GXData)[0x20] = __rlwimi(((u32 *)__GXData)[0x20], arg3, 6, 20, 25);
        break;
    case 1:
        ((u32 *)__GXData)[0x20] = __rlwimi(((u32 *)__GXData)[0x20], arg3, 12, 14, 19);
        break;
    case 2:
        ((u32 *)__GXData)[0x20] = __rlwimi(((u32 *)__GXData)[0x20], arg3, 18, 8, 13);
        break;
    case 3:
        ((u32 *)__GXData)[0x20] = __rlwimi(((u32 *)__GXData)[0x20], arg3, 24, 2, 7);
        break;
    case 4:
        ((u32 *)__GXData)[0x21] = __rlwimi(((u32 *)__GXData)[0x21], arg3, 0, 26, 31);
        break;
    case 5:
        ((u32 *)__GXData)[0x21] = __rlwimi(((u32 *)__GXData)[0x21], arg3, 6, 20, 25);
        break;
    case 6:
        ((u32 *)__GXData)[0x21] = __rlwimi(((u32 *)__GXData)[0x21], arg3, 12, 14, 19);
        break;
    default:
        ((u32 *)__GXData)[0x21] = __rlwimi(((u32 *)__GXData)[0x21], arg3, 18, 8, 13);
        break;
    }
    fn_80225180(stage + 1);
}
#pragma pop
void GXSetNumChans(u32 arg0) {
 extern unsigned short *__GXData;
 u8 count;
 u32 *gxData;
 gxData = (u32 *)__GXData;
 count = arg0;
 gxData[0x204/4] = __rlwimi(gxData[0x204/4], count, 0, 28, 31);
 *(volatile u8 *)0xCC008000 = 0x10;
 *(volatile u32 *)0xCC008000 = 0x103F;
 *(volatile u32 *)0xCC008000 = count;
 gxData[0x5AC/4] |= 4;
}

void GXSetMisc(s32 arg0, u32 arg1) {
    extern u8 *__GXData;
    u8 *gx;

    switch (arg0) {
    case 0:
        break;
    case 1:
        gx = __GXData;
        *(u16 *)(gx + 4) = (u16)arg1;
        *(u16 *)(gx + 0) = !*(u16 *)(gx + 4);
        *(u16 *)(gx + 2) = 1;
        if (*(u16 *)(gx + 4) != 0) {
            *(u32 *)(gx + 0x5AC) |= 8;
        }
        break;
    case 2:
        gx = __GXData;
        gx[0x5A9] = (arg1 != 0);
        break;
    case 3:
        gx = __GXData;
        gx[0x5AA] = (arg1 != 0);
        break;
    }
}

void fn_802204F8(void)
{
    void fn_80220D6C(void);
    void PPCSync(void);
    extern u16 *__GXData;
    u8 *gx;
    volatile u32 *fifo;

    gx = (u8 *)__GXData;
    if (*(u32 *)(gx + 0x5AC) != 0) {
        fn_80220D6C();
    }

    fifo = (volatile u32 *)0xCC008000;
    *fifo = 0;
    *fifo = 0;
    *fifo = 0;
    *fifo = 0;
    *fifo = 0;
    *fifo = 0;
    *fifo = 0;
    *fifo = 0;

    PPCSync();
}

void fn_80220554(void) { s32 fn_80203854(void); void PPCMtwpar(u32); while (fn_80203854() & 1) { } PPCMtwpar(0x0C008000); }

typedef enum _GXAttrType {
    GX_NONE_80220588,
    GX_DIRECT_80220588,
    GX_INDEX8,
    GX_INDEX16_80220588,
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
typedef struct {
    u8 pad[128];
} GXFifoObj;
typedef s64 OSTime;
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
static inline u32 __GXReadMEMCounterU32(u32 regAddrL, u32 regAddrH) {
    extern void *__memReg;
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;
    ctrH0 = (*(volatile u16 *)((volatile u16 *)(__memReg) + (regAddrH)));
    do {
        ctrH1 = ctrH0;
        ctrL = (*(volatile u16 *)((volatile u16 *)(__memReg) + (regAddrL)));
        ctrH0 = (*(volatile u16 *)((volatile u16 *)(__memReg) + (regAddrH)));
    } while (ctrH0 != ctrH1);
    return (ctrH0 << 0x10) | ctrL;
}
static void __GXAbortWait(u32 clocks) {
    OSTime OSGetTime(void);
    OSTime time0;
    OSTime time1;
    time0 = OSGetTime();
    do {
        time1 = OSGetTime();
    } while (time1 - time0 <= (clocks / 4));
}
static void __GXAbortWaitPECopyDone(void) {
    u32 peCnt0;
    u32 peCnt1;
    peCnt0 = __GXReadMEMCounterU32(0x28, 0x27);
    do {
        peCnt1 = peCnt0;
        __GXAbortWait(32);
        peCnt0 = __GXReadMEMCounterU32(0x28, 0x27);
    } while (peCnt0 != peCnt1);
}
volatile u32 __PIRegs[12] : (0xCC003000);
void fn_80220588(void) {
    GXFifoObj *fn_8021F4D4(void);
    extern u16 *const __GXData;
    if ((*(GXData *const *)&__GXData)->abtWaitPECopy && fn_8021F4D4() != (GXFifoObj *)0L) {
        __GXAbortWaitPECopyDone();
    }
    __PIRegs[0x18 / 4] = 1;
    __GXAbortWait(200);
    __PIRegs[0x18 / 4] = 0;
    __GXAbortWait(20);
}

void fn_802206F4(void) {
    GXFifoObj *fn_8021F4D4(void);
    s32 fn_8021F3CC(void);
    extern u8 *const __GXData;
    void __GXInitRevisionBits(void);
    void fn_80220D6C(void);
    void PPCSync(void);

    if ((*(GXData *const *)&__GXData)->abtWaitPECopy && fn_8021F4D4() != (GXFifoObj *)0L) {
        __GXAbortWaitPECopyDone();
    }
    __PIRegs[0x18 / 4] = 1;
    __GXAbortWait(200);
    __PIRegs[0x18 / 4] = 0;
    __GXAbortWait(20);
    if (fn_8021F4D4() != (GXFifoObj *)0L) {
        fn_8021F3CC();
        __GXInitRevisionBits();
        *(u32 *)(__GXData + 0x5AC) = 0;
        if (*(u32 *)(__GXData + 0x5AC)) {
            fn_80220D6C();
        }
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        *(volatile u32 *)0xCC008000 = 0;
        PPCSync();
    }
}

void fn_802208BC(u32 token) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void fn_80220D6C(void);
    void PPCSync(void);
    extern u16 *__GXData;

    s32 interrupts;
    u32 zero;

    interrupts = OSDisableInterrupts();

    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = (token & 0xFFFF) | 0x48000000;

    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = __rlwimi(__rlwimi((token & 0xFFFF) | 0x48000000, token, 0, 16, 31), 0x47, 24, 0, 7);

    if (*(u32 *)((u8 *)__GXData + 0x5AC) != 0) {
        fn_80220D6C();
    }

    zero = 0;
    *(u32 *)0xCC008000 = zero;
    *(u32 *)0xCC008000 = zero;
    *(u32 *)0xCC008000 = zero;
    *(u32 *)0xCC008000 = zero;
    *(u32 *)0xCC008000 = zero;
    *(u32 *)0xCC008000 = zero;
    *(u32 *)0xCC008000 = zero;
    *(u32 *)0xCC008000 = zero;

    PPCSync();
    OSRestoreInterrupts(interrupts);
    *(u16 *)((u8 *)__GXData + 2) = zero;
}

u16 fn_80220970(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_8022097C(void) {
s32 OSDisableInterrupts(void);
void OSRestoreInterrupts(s32);
void OSSleepThread(void *);
void fn_802204F8(void);
extern u8 lbl_80368798;
extern u32 lbl_8036879C;
u8 cmd = 0x61;
u32 token = 0x45000002;
s32 waitEnabled;
s32 enabled = OSDisableInterrupts();
*(volatile u8 *)0xCC008000 = cmd;
*(volatile u32 *)0xCC008000 = token;
fn_802204F8();
lbl_80368798=0;
OSRestoreInterrupts(enabled);
waitEnabled=OSDisableInterrupts();
while (!lbl_80368798) OSSleepThread(&lbl_8036879C);
OSRestoreInterrupts(waitEnabled);
}

#ifndef GXWGFifo_DEFINED
#define GXWGFifo_DEFINED
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
#endif

void fn_802209FC(void)
{
  extern u16 * const __GXData;
  u8 cmd = 0x61;
  u16 *gx;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = *((u32 *) (((u8 *) __GXData) + 0x1DC));
  __GXData[1] = 0;
}

void fn_80220A20(s32 arg0, u8 arg1) {
    extern volatile u16 *__peReg;
    __peReg[3] = (arg0 << 8) | arg1;
}

void fn_80220A34(u32 arg0) {
    extern u8 *__peReg;
    u32 value = 0;
    value = __rlwimi(value, arg0, 0, 30, 31);
    value = __rlwimi(value, 1, 2, 29, 29);
    *(u16 *)(__peReg + 8) = value;
}

extern u16 *__peReg;
void fn_80220A54(u8 arg0) {
    u32 val = __peReg[1];
    val = __rlwimi(val, arg0, 4, 27, 27);
    __peReg[1] = val;
}

void fn_80220A6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    extern u16 *__peReg;
    s32 c;
    u32 val;

    c = 1;
    val = __peReg[1];
    if (arg0 != 1) {
        if (arg0 != 3) {
            c = 0;
        }
    }
    val = __rlwimi(val, c, 0, 31, 31);
    val = __rlwimi(val, arg0 == 3, 11, 20, 20);
    val = __rlwimi(val, arg0 == 2, 1, 30, 30);
    val = __rlwimi(val, arg3, 12, 16, 19);
    val = __rlwimi(val, arg1, 8, 21, 23);
    val = __rlwimi(val, arg2, 5, 24, 26);
    val = __rlwimi(val, 0x41, 24, 0, 7);
    __peReg[1] = (u16)val;
}

extern u16* __peReg;
void fn_80220AD0(u8 arg0) {
    u32 val = __peReg[1];
    val = __rlwimi(val, arg0, 3, 28, 28);
    __peReg[1] = val;
}

void fn_80220AE8(u8 arg0, u8 arg1) {
    u32 val = 0;
    val = __rlwimi(val, arg1, 0, 24, 31);
    val = __rlwimi(val, arg0, 8, 23, 23);
    __peReg[2] = val;
}

void fn_80220B0C(u8 arg0) {
    u32 val = __peReg[1];
    val = __rlwimi(val, arg0, 2, 29, 29);
    __peReg[1] = val;
}

void fn_80220B24(u8 arg0, s32 arg1, s32 arg2) {
    extern u16 *__peReg;
    *__peReg = __rlwimi(__rlwimi(__rlwimi(0, (u32)arg0, 0, 31, 31), arg1, 1, 28, 30), arg2, 4, 27, 27);
}

void fn_80220B44(u16 arg0, s32 arg1, s32 *arg2) {
    u32 addr = 0xC8000000;
    addr = __rlwimi(addr, arg0, 2, 20, 29);
    addr = __rlwimi(addr, arg1, 12, 10, 19);
    addr = __rlwimi(addr, 1, 22, 8, 9);
    *arg2 = *(s32 *)addr;
}

#pragma optimization_level 3
s32 fn_80220B68(s32 arg0) {
    extern s32 lbl_80368790;
    s32 temp_r31;

    temp_r31 = lbl_80368790;
    OSDisableInterrupts();
    lbl_80368790 = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}
#pragma optimization_level reset
void fn_80220BAC(s32 arg0, void *context) {
 extern void (*lbl_80368790)(u16);
 void OSClearContext(void *);
 void OSSetCurrentContext(void *);
 u64 tempContext[0x2C8 / 8];
 u16 token;
 u16 *pe;
 u32 value;
 token=((u16 *)__peReg)[7];
 if(lbl_80368790!=0) {
 OSClearContext(&tempContext);
 OSSetCurrentContext(&tempContext);
 lbl_80368790(token);
 OSClearContext(&tempContext);
 OSSetCurrentContext(context);
 }
 pe=(u16 *)__peReg;
 value=pe[5];
 value=__rlwimi(value,1,2,29,29);
 pe[5]=value;
}

#pragma optimization_level 3
s32 fn_80220C34(s32 arg0) {
    extern s32 lbl_80368794;
    s32 temp_r31;

    temp_r31 = lbl_80368794;
    OSDisableInterrupts();
    lbl_80368794 = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}
#pragma optimization_level reset
void fn_80220C78(s32 arg0, void *context) {
    extern void (*lbl_80368794)(void);
    extern s8 lbl_80368798;
    extern u8 lbl_8036879C;
    void OSClearContext(void *);
    void OSSetCurrentContext(void *);
    void fn_8020AEC4(void *);

    u64 tempContext[0x2C8 / 8];
    u16 *pe;
    u32 value;

    pe = (u16 *)__peReg;
    value = pe[5];
    value = __rlwimi(value, 1, 3, 28, 28);
    pe[5] = value;
    lbl_80368798 = 1;
    if (lbl_80368794 != 0) {
        OSClearContext(&tempContext);
        OSSetCurrentContext(&tempContext);
        lbl_80368794();
        OSClearContext(&tempContext);
        OSSetCurrentContext(context);
    }
    fn_8020AEC4(&lbl_8036879C);
}

void __GXPEInit(void)
{
    void __OSSetInterruptHandler(s32, void *);
    void OSInitThreadQueue(void *);
    void __OSUnmaskInterrupts(u32);

    void fn_80220BAC(void);
    void fn_80220C78(void);

    extern u32 lbl_8036879C;
    extern u16 *__peReg;

    u16 *pe;
    u32 value;

    __OSSetInterruptHandler(0x12, (void *)fn_80220BAC);
    __OSSetInterruptHandler(0x13, (void *)fn_80220C78);

    OSInitThreadQueue(&lbl_8036879C);

    __OSUnmaskInterrupts(0x2000);
    __OSUnmaskInterrupts(0x1000);

    pe = __peReg;
    value = pe[5];
    value = __rlwimi(value, 1, 2, 29, 29);
    value = __rlwimi(value, 1, 3, 28, 28);
    value = __rlwimi(value, 1, 0, 31, 31);
    value = __rlwimi(value, 1, 1, 30, 30);
    pe[5] = value;
}

void fn_80220D6C(void) {
    extern u16 *__GXData;
    void fn_80222FC4(void);
    void fn_80223978(void);
    void fn_80221068(void);
    void fn_8021F9D8(void);
    void fn_802200CC(void);
    void fn_8021FA94(void);

    u32 dirty;

    dirty = M2C_FIELD(__GXData, u32 *, 0x5AC);

    if (dirty & 0x01) {
        fn_80222FC4();
    }
    if (dirty & 0x02) {
        fn_80223978();
    }
    if (dirty & 0x04) {
        fn_80221068();
    }
    if (dirty & 0x08) {
        fn_8021F9D8();
    }
    if (dirty & 0x10) {
        fn_802200CC();
    }
    if (dirty & 0x18) {
        fn_8021FA94();
    }

    M2C_FIELD(__GXData, u32 *, 0x5AC) = 0;
}

void GXBegin(s32 primitive, s32 format, s32 count) {
    extern u16 *__GXData;
    void fn_80222FC4(void);
    void fn_80223978(void);
    void fn_80221068(void);
    void fn_8021F9D8(void);
    void fn_802200CC(void);
    void fn_8021FA94(void);
    void fn_80220EBC(void);

    u32 dirty;

    dirty = M2C_FIELD(__GXData, u32 *, 0x5AC);
    if (dirty != 0) {
        if (dirty & 0x01) {
            fn_80222FC4();
        }
        if (dirty & 0x02) {
            fn_80223978();
        }
        if (dirty & 0x04) {
            fn_80221068();
        }
        if (dirty & 0x08) {
            fn_8021F9D8();
        }
        if (dirty & 0x10) {
            fn_802200CC();
        }
        if (dirty & 0x18) {
            fn_8021FA94();
        }
        M2C_FIELD(__GXData, u32 *, 0x5AC) = 0;
    }

    if (M2C_FIELD(__GXData, u32 *, 0) == 0) {
        fn_80220EBC();
    }

    *(volatile u8 *)0xCC008000 = (u8)(format | primitive);
    *(volatile u16 *)0xCC008000 = (u16)count;
}

#pragma global_optimizer off
void fn_80220EBC(void)
{
    extern u8 *__GXData;
    u8 *gx;
    u16 a;
    u16 b;
    u32 size;
    u32 count;
    u32 zero;

    gx = __GXData;
    a = *(u16 *)(gx + 4);
    zero = 0;
    b = *(u16 *)(gx + 6);
    size = a * b;

    *(u8 *)0xCC008000 = 0x98;
    *(u16 *)0xCC008000 = a;

    count = size + 3;
    if (count - 3 > 0) {
        count >>= 2;
        while (count) {
            *(u32 *)0xCC008000 = zero;
            count--;
        }
    }

    *(u16 *)(__GXData + 2) = 1;
}
#pragma global_optimizer reset
void fn_80220F44(u32 arg0, u32 arg1) {
extern u32 __GXData;
u8 *gx=(u8*)__GXData;
*(u32*)(gx+0x7C)=__rlwimi(*(u32*)(gx+0x7C),(u8)arg0,0,24,31);
*(u32*)(gx+0x7C)=__rlwimi(*(u32*)(gx+0x7C),arg1,16,13,15);
*(volatile u8*)0xCC008000=0x61;
*(volatile u32*)0xCC008000=*(u32*)(gx+0x7C);
*(u16*)(gx+2)=0;
}

void fn_80220F84(u32 arg0, u32 arg1) {
    extern u32 __GXData;
    u8 *gx = (u8 *)__GXData;
    *(u32 *)(gx + 0x7C) = __rlwimi(*(u32 *)(gx + 0x7C), (u8)arg0, 8, 16, 23);
    *(u32 *)(gx + 0x7C) = __rlwimi(*(u32 *)(gx + 0x7C), arg1, 19, 10, 12);
    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = *(u32 *)(gx + 0x7C);
    *(u16 *)(gx + 2) = 0;
}

void fn_80220FC4(u32 coord, u8 line_enable, u8 point_enable) {
    extern u8 *const __GXData;

    ((u32 *)(__GXData + 0xB8))[coord] = __rlwimi(((u32 *)(__GXData + 0xB8))[coord], line_enable, 18, 13, 13);
    ((u32 *)(__GXData + 0xB8))[coord] = __rlwimi(((u32 *)(__GXData + 0xB8))[coord], point_enable, 19, 12, 12);
    GXWGFifo.u8 = 0x61;
    GXWGFifo.u32 = ((u32 *)(__GXData + 0xB8))[coord];
    *(u16 *)(__GXData + 2) = 0;
}

void fn_8022100C(u32 arg0) {
 extern u16 *const __GXData;
 u32 *gxData = (u32 *)__GXData;
 u32 mode = (arg0 >> 1) & 1;
 mode = __rlwimi(mode, arg0, 1, 30, 30);
 gxData[0x204 / 4] = __rlwimi(gxData[0x204 / 4], mode, 14, 16, 17);
 gxData[0x5ac / 4] |= 4;
}

#ifndef GXWGFifo_DEFINED
#define GXWGFifo_DEFINED
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
#endif

void fn_80221034(s32 arg0)
{
  u32 val;
  extern u16 *__GXData;
  u32 *gx;
  u8 cmd;
  u32 fe08;
  unsigned char pad;
  gx = (u32 *) __GXData;
  cmd = 0x61;
  fe08 = 0xFE080000;
  val = gx[0x204 / 4];
  val = __rlwimi(val, ((u32) arg0) & 0xFFFFu, 19, 12, 12);
  gx[0x204 / 4] = val;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = fe08;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = gx[0x204 / 4];
}

void fn_80221068(void)
{
  extern u16 * const __GXData;
  u8 cmd = 0x61;
  u16 *gx;
  GXWGFifo.u8 = cmd;
  GXWGFifo.u32 = *((u32 *) (((u8 *) __GXData) + 0x204));
  __GXData[1] = 0;
}

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
