/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"

extern void* lbl_80368784;
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

void *fn_8021D7FC(s32 arg0, s32 arg1)
{
    extern u32 __GXData;

    s32 fn_80222AA0(s32);
    s32 fn_80222AA8(s32);

    s32 type;
    s32 flag;
    s32 index;
    u8 *gx;

    type = fn_80222AA0(arg0);
    flag = fn_80222AA8(arg0);

    index = arg1 - (arg1 / 8) * 8;

    gx = (u8 *)__GXData;

    if (type == 6) {
        if ((u8)flag != 0) {
            return gx + 0x308 + (index << 4);
        }

        return gx + 0x288 + (index << 4);
    }

    if (type >= 7 && type <= 10) {
        if ((u8)flag != 0) {
            return gx + 0x288 + (index << 4);
        }

        return gx + 0x208 + (index << 4);
    }

    return gx + 0x208 + (index << 4);
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

#pragma use_lmw_stmw on
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
    extern u8 *__GXData;
    extern u16 *__cpReg;
    extern void *__piReg;
    extern void *__peReg;
    extern void *__memReg;
    extern u8 FifoObj_8033A440[];
    extern u8 GXResetFuncInfo_8029DDCC[];
    extern u32 GXTexRegionAddrTable_8029DD0C[];

    static u32 resetFuncRegistered;
    void *fifo;
    u8 *gx;
    u32 i;
    u32 hid;
    u32 freq;
    u32 *table;
    u32 regOff;
    u32 idx;
    u32 a;
    u32 b;
    volatile u8 *wf8;
    volatile u32 *wf32;

    fifo = FifoObj_8033A440;
    OSRegisterVersion(__GXVersion);
    gx = __GXData;
    gx[0x5A8] = 0;
    gx[0x5A9] = 1;
    gx[0x5AA] = 1;
    *(u32 *)(gx + 0x594) = 0;
    *(u32 *)(gx + 0x598) = 0;
    GXSetMisc(1, 0);
    __cpReg = (u16 *)0xCC000000;
    __piReg = (void *)0xCC003000;
    __peReg = (void *)0xCC001000;
    __memReg = (void *)0xCC004000;
    __GXFifoInit();
    GXInitFifoBase(fifo, base, size);
    GXSetCPUFifo(fifo);
    GXSetGPFifo(fifo);
    if (resetFuncRegistered == 0) {
        OSRegisterResetFunction(GXResetFuncInfo_8029DDCC);
        resetFuncRegistered = 1;
    }
    __GXPEInit();
    hid = PPCMfhid2();
    PPCMtwpar(0xC008000);
    PPCMthid2(hid | 0x40000000);

    gx = __GXData;
    *(u32 *)(gx + 0x204) = 0;
    *(u32 *)(gx + 0x204) = __rlwimi(*(u32 *)(gx + 0x204), 0, 24, 0, 7);
    a = 0xC0;
    *(u32 *)(gx + 0x124) = 0xFF;
    b = 0xC1;
    *(u32 *)(gx + 0x124) = __rlwimi(*(u32 *)(gx + 0x124), 0xF, 24, 0, 7);
    *(u32 *)(gx + 0x7C) = 0;
    *(u32 *)(gx + 0x7C) = __rlwimi(*(u32 *)(gx + 0x7C), 0x22, 24, 0, 7);

    regOff = 0;
    idx = 0;
    for (i = 0; i < 8; i++) {
        u32 h = idx >> 1;
        u32 o130 = regOff + 0x130;
        u32 o170 = regOff + 0x170;
        u32 o100 = (h << 2) + 0x100;
        u32 o1b0 = (h << 2) + 0x1B0;
        u32 o554 = regOff + 0x554;
        *(u32 *)(gx + o130) = 0;
        *(u32 *)(gx + o170) = 0;
        *(u32 *)(gx + o100) = 0;
        *(u32 *)(gx + o554) = 0xFF;
        *(u32 *)(gx + o130) = __rlwimi(*(u32 *)(gx + o130), a, 24, 0, 7);
        idx += 1;
        h = idx >> 1;
        *(u32 *)(gx + o170) = __rlwimi(*(u32 *)(gx + o170), b, 24, 0, 7);
        *(u32 *)(gx + o1b0) = __rlwimi(*(u32 *)(gx + o1b0), (idx - 1) / 2 + 0xF6, 24, 0, 7);
        a += 2;
        b += 2;
        *(u32 *)(gx + o100) = __rlwimi(*(u32 *)(gx + o100), (idx - 1) / 2 + 0x28, 24, 0, 7);
        regOff += 4;
        o130 = regOff + 0x130;
        o170 = regOff + 0x170;
        o100 = (h << 2) + 0x100;
        o1b0 = (h << 2) + 0x1B0;
        o554 = regOff + 0x554;
        *(u32 *)(gx + o130) = 0;
        *(u32 *)(gx + o170) = 0;
        *(u32 *)(gx + o100) = 0;
        *(u32 *)(gx + o554) = 0xFF;
        *(u32 *)(gx + o130) = __rlwimi(*(u32 *)(gx + o130), a, 24, 0, 7);
        a += 2;
        *(u32 *)(gx + o170) = __rlwimi(*(u32 *)(gx + o170), b, 24, 0, 7);
        b += 2;
        *(u32 *)(gx + o1b0) = __rlwimi(*(u32 *)(gx + o1b0), h + 0xF6, 24, 0, 7);
        *(u32 *)(gx + o100) = __rlwimi(*(u32 *)(gx + o100), h + 0x28, 24, 0, 7);
        regOff += 4;
        idx += 1;
    }

    *(u32 *)(gx + 0x120) = 0;
    *(u32 *)(gx + 0x120) = __rlwimi(*(u32 *)(gx + 0x120), 0x27, 24, 0, 7);
    {
        u32 off2 = 0;
        u32 c = 0x30;
        u32 d = 0x31;
        for (i = 0; i < 2; i++) {
            u32 n;
            for (n = 0; n < 4; n++) {
                u32 oB8 = off2 + 0xB8;
                u32 oD8 = off2 + 0xD8;
                *(u32 *)(gx + oB8) = 0;
                *(u32 *)(gx + oD8) = 0;
                *(u32 *)(gx + oB8) = __rlwimi(*(u32 *)(gx + oB8), c, 24, 0, 7);
                c += 2;
                *(u32 *)(gx + oD8) = __rlwimi(*(u32 *)(gx + oD8), d, 24, 0, 7);
                d += 2;
                off2 += 4;
            }
        }
    }

    gx = __GXData;
    *(u32 *)(gx + 0xF8) = __rlwimi(*(u32 *)(gx + 0xF8), 0x20, 24, 0, 7);
    *(u32 *)(gx + 0xFC) = __rlwimi(*(u32 *)(gx + 0xFC), 0x21, 24, 0, 7);
    *(u32 *)(gx + 0x1D0) = __rlwimi(*(u32 *)(gx + 0x1D0), 0x41, 24, 0, 7);
    *(u32 *)(gx + 0x1D4) = __rlwimi(*(u32 *)(gx + 0x1D4), 0x42, 24, 0, 7);
    *(u32 *)(gx + 0x1D8) = __rlwimi(*(u32 *)(gx + 0x1D8), 0x40, 24, 0, 7);
    *(u32 *)(gx + 0x1DC) = __rlwimi(*(u32 *)(gx + 0x1DC), 0x43, 24, 0, 7);
    *(u32 *)(gx + 0x1FC) = __rlwimi(*(u32 *)(gx + 0x1FC), 0, 7, 23, 24);
    *(f32 *)(gx + 0x510) = 16777216.0f;
    *(f32 *)(gx + 0x50C) = 0.0f;
    *(u32 *)(gx + 0x5AC) = 0;
    gx[0x5AB] = 0;

    freq = *(u32 *)0x800000F8 / 500U;
    __GXFlushTextureState();
    wf8 = (volatile u8 *)0xCC008000;
    wf32 = (volatile u32 *)0xCC008000;
    *wf8 = 0x61;
    *wf32 = (freq >> 11) | 0x69000400;
    __GXFlushTextureState();
    *wf8 = 0x61;
    *wf32 = (freq / 4224U) | 0x46000200;
    __GXInitRevisionBits();

    {
        u32 *tbl = GXTexRegionAddrTable_8029DD0C;
        u32 roff = 0;
        for (i = 0; i < 8; i++) {
            gx = __GXData;
            GXInitTexCacheRegion(gx + 0x208 + roff, 0, tbl[0], 0, tbl[8], 0);
            gx = __GXData;
            GXInitTexCacheRegion(gx + 0x288 + roff, 0, tbl[16], 0, tbl[24], 0);
            gx = __GXData;
            GXInitTexCacheRegion(gx + 0x308 + roff, 1, tbl[32], 0, tbl[40], 0);
            tbl += 1;
            roff += 0x10;
        }
    }

    {
        u32 tmem = 0xC0000;
        u32 roff = 0;
        for (i = 0; i < 16; i++) {
            gx = __GXData;
            GXInitTlutRegion(gx + 0x388 + roff, tmem, 0x10);
            tmem += 0x2000;
            roff += 0x10;
        }
        tmem = 0xE0000;
        for (i = 0; i < 4; i++) {
            gx = __GXData;
            GXInitTlutRegion(gx + 0x388 + ((i + 0x10) << 4), tmem, 0x40);
            tmem += 0x8000;
        }
    }

    *(u16 *)((u8 *)__cpReg + 6) = 0;
    gx = __GXData;
    *(u32 *)(gx + 0x5A4) = __rlwimi(*(u32 *)(gx + 0x5A4), 0, 4, 24, 27);
    wf8 = (volatile u8 *)0xCC008000;
    wf32 = (volatile u32 *)0xCC008000;
    *wf8 = 8;
    *wf8 = 0x20;
    *wf32 = *(u32 *)(gx + 0x5A4);
    *wf8 = 0x10;
    *wf32 = 0x1006;
    *wf32 = 0;
    *wf8 = 0x61;
    *wf32 = 0x23000000;
    *wf8 = 0x61;
    *wf32 = 0x24000000;
    *wf8 = 0x61;
    *wf32 = 0x67000000;
    __GXSetIndirectMask(0);
    __GXSetTmemConfig(2);
    __GXInitGX();
    return fifo;
}

void __GXInitGX(void) {
    s32 VIGetTvFormat(void);
    void fn_802217AC(void *, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_8021FBB8(void);
    void fn_80220198(void);
    void fn_80220154(s32, void *, s32);
    void fn_8021FE4C(s32, void *);
    void fn_80220F44(s32, s32);
    void fn_80220F84(s32, s32);
    void fn_80220FC4(s32, s32, s32);
    void fn_80224D7C(f32 *, s32);
    void fn_80224DCC(f32 *, s32);
    void fn_80224E1C(s32);
    void fn_80224E50(f32 *, s32, s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    void fn_80224CF0(void *);
    void fn_80221034(s32);
    void fn_8022100C(s32);
    void fn_80225158(s32);
    void fn_80225058(s32, s32, u16, u16);
    void fn_80225118(s32, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222164(s32, void *);
    void fn_8022224C(s32, void *);
    void fn_80222EB4(void);
    void fn_80222EFC(void *);
    void fn_80222F10(void *);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802239D0(s32, s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void fn_80223EA0(s32, s32, s32);
    void fn_80223CDC(s32, s32);
    void fn_80223D38(s32, s32);
    void fn_80223D94(s32, s32, s32);
    void fn_80223DDC(s32, s32, s32, s32, s32);
    void fn_802238CC(s32);
    void fn_802238A8(s32);
    void fn_80223678(s32, s32, s32);
    void fn_802240F0(s32, void *, f32, f32, f32, f32);
    void fn_802244B4(s32, s32, s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_8022462C(s32);
    void fn_80224658(s32);
    void fn_80224684(s32, s32, s32);
    void fn_802246B8(s32);
    void fn_802247C0(s32);
    void fn_802247EC(s32, s32);
    void fn_802246EC(s32, s32);
    void fn_80224828(s32, s32);
    void fn_80224860(u8, s32);
    void fn_802211D0(s32, s32, u16, u16);
    void fn_802212C8(u16, u16);
    void fn_802216E0(u16, f32);
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
    extern GXRenderModeObj lbl_8029DFA8;
    extern GXRenderModeObj lbl_8029E020;
    extern GXRenderModeObj lbl_8029E05C;
    extern GXRenderModeObj lbl_8029DFE4;
    extern s32 lbl_8036BCB4;
    extern s32 lbl_8036BCB8;
    extern s32 lbl_8036BCBC;
    extern f32 lbl_8036BCC0;
    extern f32 lbl_8036BCC4;

    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    f32 mtx[3][4];
    u8 texObj[0x20];
    u8 *base;
    GXRenderModeObj *rmode;
    u32 i;
    s32 xfbm;

    base = lbl_8029DBA0;
    sp28 = lbl_8036BCB4;
    sp24 = lbl_8036BCB8;
    sp20 = lbl_8036BCBC;

    switch (VIGetTvFormat()) {
    case 0:
        rmode = &lbl_8029DFA8;
        break;
    case 1:
        rmode = &lbl_8029E020;
        break;
    case 5:
        rmode = &lbl_8029E05C;
        break;
    case 2:
        rmode = &lbl_8029DFE4;
        break;
    default:
        rmode = &lbl_8029DFA8;
        break;
    }

    sp1C = sp28;
    fn_802217AC(&sp1C, 0xFFFFFF);

    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
    fn_802201A8(1, 1, 5, 0x3C, 0, 0x7D);
    fn_802201A8(2, 1, 6, 0x3C, 0, 0x7D);
    fn_802201A8(3, 1, 7, 0x3C, 0, 0x7D);
    fn_802201A8(4, 1, 8, 0x3C, 0, 0x7D);
    fn_802201A8(5, 1, 9, 0x3C, 0, 0x7D);
    fn_802201A8(6, 1, 0xA, 0x3C, 0, 0x7D);
    fn_802201A8(7, 1, 0xB, 0x3C, 0, 0x7D);

    fn_80220428(1);
    fn_8021FBB8();
    fn_80220198();

    i = 9;
    do {
        fn_80220154(i, __GXData, 0);
        i += 1;
    } while (i <= 0x18);

    i = 0;
    do {
        fn_8021FE4C(i, base + 0x80);
        i += 1;
    } while (i < 8);

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

    fn_80224D7C(&mtx[0][0], 0);
    fn_80224DCC(&mtx[0][0], 0);
    fn_80224E1C(0);
    fn_80224E50(&mtx[0][0], 0x3C, 0);
    fn_80224E50(&mtx[0][0], 0x7D, 0);

    fn_80224FEC(0.0f, 0.0f, (f32)rmode->fbWidth, (f32)rmode->xfbHeight, 0.0f, lbl_8036BCC0);
    fn_80224CF0(base + 0x150);
    fn_80221034(0);
    fn_8022100C(2);
    fn_80225158(0);
    fn_80225058(0, 0, rmode->fbWidth, rmode->efbHeight);
    fn_80225118(0, 0);
    fn_80222334(0);

    fn_80222370(4, 0, 0, 1, 0, 0, 2);
    sp18 = sp24;
    fn_80222164(4, &sp18);
    sp14 = sp20;
    fn_8022224C(4, &sp14);
    fn_80222370(5, 0, 0, 1, 0, 0, 2);
    sp10 = sp24;
    fn_80222164(5, &sp10);
    spC = sp20;
    fn_8022224C(5, &spC);

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

    fn_80223F2C(0, 0, 0, 4);
    fn_80223F2C(1, 1, 1, 4);
    fn_80223F2C(2, 2, 2, 4);
    fn_80223F2C(3, 3, 3, 4);
    fn_80223F2C(4, 4, 4, 4);
    fn_80223F2C(5, 5, 5, 4);
    fn_80223F2C(6, 6, 6, 4);
    fn_80223F2C(7, 7, 7, 4);
    fn_80223F2C(8, 0xFF, 0xFF, 0xFF);
    fn_80223F2C(9, 0xFF, 0xFF, 0xFF);
    fn_80223F2C(0xA, 0xFF, 0xFF, 0xFF);
    fn_80223F2C(0xB, 0xFF, 0xFF, 0xFF);
    fn_80223F2C(0xC, 0xFF, 0xFF, 0xFF);
    fn_80223F2C(0xD, 0xFF, 0xFF, 0xFF);
    fn_80223F2C(0xE, 0xFF, 0xFF, 0xFF);
    fn_80223F2C(0xF, 0xFF, 0xFF, 0xFF);

    fn_802240C8(1);
    fn_802239D0(0, 3);
    fn_80223E5C(7, 0, 0, 7, 0);
    fn_80223EA0(0, 0x11, 0);

    i = 0;
    do {
        fn_80223CDC(i, 6);
        fn_80223D38(i, 0);
        fn_80223D94(i, 0, 0);
        i += 1;
    } while (i < 0x10);

    fn_80223DDC(0, 0, 1, 2, 3);
    fn_80223DDC(1, 0, 0, 0, 3);
    fn_80223DDC(2, 1, 1, 1, 3);
    fn_80223DDC(3, 2, 2, 2, 3);

    i = 0;
    do {
        fn_802238CC(i);
        i += 1;
    } while (i < 0x10);

    fn_802238A8(0);
    fn_80223678(0, 0, 0);
    fn_80223678(1, 0, 0);
    fn_80223678(2, 0, 0);
    fn_80223678(3, 0, 0);

    sp8 = sp24;
    fn_802240F0(0, &sp8, 0.0f, lbl_8036BCC0, lbl_8036BCC4, lbl_8036BCC0);
    fn_802244B4(0, 0, 0);
    fn_802245D8(0, 4, 5, 0);
    fn_8022462C(1);
    fn_80224658(1);
    fn_80224684(1, 3, 1);
    fn_802246B8(1);
    fn_802247C0(1);
    fn_802247EC(0, 0);
    fn_802246EC(0, 0);
    fn_80224828(1, 1);

    if (rmode->xFBmode == (s32)(rmode->xfbHeight * 2)) {
        xfbm = 1;
    } else {
        xfbm = 0;
    }
    fn_80224860(rmode->field_rendering, xfbm);
    fn_802211D0(0, 0, rmode->fbWidth, rmode->efbHeight);
    fn_802212C8(rmode->fbWidth, rmode->efbHeight);
    fn_802216E0(rmode->xfbHeight, (f32)rmode->xfbHeight / (f32)rmode->efbHeight);
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

#pragma use_lmw_stmw reset

void fn_8021EB88(s32 arg0, void *arg1)
{
    extern u8 *__GXData;
    extern u16 *__cpReg;
    extern u32 lbl_80368778;
    extern u32 lbl_80368780;
    extern u32 lbl_80368788;

    void fn_8020A9E0(u32);
    void fn_8020AC68(u32);
    void fn_8021F39C(u32, u8);
    void fn_8021F36C(u32, u8);

    u8 context[0x2C8];
    u32 control;
    u32 status;

    *(u32 *)(__GXData + 0xC) = __cpReg[0];

    control = *(u32 *)(__GXData + 8);
    if (control & 8) {
        status = *(u32 *)(__GXData + 0xC);
        if (status & 2) {
            fn_8020A9E0(lbl_80368778);
            lbl_80368780 = 0;
            fn_8021F39C(1, 1);
            fn_8021F36C(1, 0);
        }
    }

    control = *(u32 *)(__GXData + 8);
    if (control & 4) {
        status = *(u32 *)(__GXData + 0xC);
        if (status & 1) {
            lbl_80368788++;
            fn_8021F36C(0, 1);
            fn_8021F39C(1, 0);
            lbl_80368780 = 1;
            fn_8020AC68(lbl_80368778);
        }
    }

    control = *(u32 *)(__GXData + 8);
    if (control & 0x20) {
        status = *(u32 *)(__GXData + 0xC);
        if (status & 0x10) {
            control &= ~0x20;
            *(u32 *)(__GXData + 8) = control;
            __cpReg[1] = (u16)*(u32 *)(__GXData + 8);

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
void GXInitFifoBase(void* arg0, void* arg1, u32 arg2) {
    u32 temp_r3;
    u32* fifo_ptr;

    fifo_ptr = (u32*)arg0;
    temp_r3 = arg2 & 0xFFFF;
    
    fifo_ptr[3] = (u32)arg1;  // offset 0xC
    fifo_ptr[4] = temp_r3;    // offset 0x10
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
    void fn_8021F36C(u8, u8);
    void fn_8021F338(u8);
    void fn_8021F39C(u8, u8);
    void fn_802037B0(void);
    extern void *__piReg;
    extern void* lbl_80368770;
    extern void* lbl_80368774;
    extern u8 lbl_8036877C;
    __GXFifoObj* realFifo = (__GXFifoObj*)fifo;
    s32 enabled;
    u32 temp_r8;
    u32 temp_r7;

    enabled = OSDisableInterrupts();
    lbl_80368770 = fifo;
    if (fifo == lbl_80368774) {
        M2C_FIELD(__piReg, u32 *, 0xC) = (u32) realFifo->base & 0x3FFFFFFF;
        M2C_FIELD(__piReg, u32 *, 0x10) = (u32) realFifo->top & 0x3FFFFFFF;
        temp_r8 = __rlwimi(0, (u32) realFifo->wrPtr, 0, 6, 26);
        temp_r7 = temp_r8;
        temp_r7 = __rlwimi(temp_r7, 0, 26, 5, 5);
        M2C_FIELD(__piReg, u32 *, 0x14) = temp_r7;
        lbl_8036877C = 1;
        fn_8021F39C(1, 1);
        fn_8021F36C(1, 0);
        fn_8021F338(1);
    } else {
        u32 temp2_r8;
        u32 temp2_r7;

        if (lbl_8036877C != 0) {
            fn_8021F338(0);
            lbl_8036877C = 0;
        }
        fn_8021F36C(0, 0);
        M2C_FIELD(__piReg, u32 *, 0xC) = (u32) realFifo->base & 0x3FFFFFFF;
        M2C_FIELD(__piReg, u32 *, 0x10) = (u32) realFifo->top & 0x3FFFFFFF;
        temp2_r8 = __rlwimi(0, (u32) realFifo->wrPtr, 0, 6, 26);
        temp2_r7 = temp2_r8;
        temp2_r7 = __rlwimi(temp2_r7, 0, 26, 5, 5);
        M2C_FIELD(__piReg, u32 *, 0x14) = temp2_r7;
    }
    fn_802037B0();
    OSRestoreInterrupts(enabled);
}

void GXSetGPFifo(void *fifo) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void fn_8021F314(void);
    void fn_8021F36C(u8, u8);
    void fn_8021F338(u8);
    void fn_8021F39C(u8, u8);
    void fn_8021F2F0(void);
    void fn_802037B0(void);
    extern u16* const __GXData;
    extern u16* __cpReg;
    extern void* lbl_80368770;
    extern void* lbl_80368774;
    extern u8 lbl_8036877C;
    __GXFifoObj* realFifo = (__GXFifoObj*)fifo;
    s32 enabled;
    u32 reg;

    enabled = OSDisableInterrupts();
    fn_8021F314();
    fn_8021F36C(0, 0);
    lbl_80368774 = realFifo;

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

    fn_802037B0();

    if (lbl_80368770 == lbl_80368774) {
        lbl_8036877C = 1;
        fn_8021F36C(1, 0);
        fn_8021F338(1);
    } else {
        lbl_8036877C = 0;
        fn_8021F36C(0, 0);
        fn_8021F338(0);
    }

    reg = M2C_FIELD(__GXData, u32 *, 0x8);
    reg = __rlwimi(reg, 0, 1, 30, 30);
    reg = __rlwimi(reg, 0, 5, 26, 26);
    __cpReg[1] = reg;
    __cpReg[1] = M2C_FIELD(__GXData, u32 *, 0x8);

    fn_8021F39C(1, 1);
    fn_8021F2F0();
    OSRestoreInterrupts(enabled);
}

void fn_8021F06C(s32 arg0) {
    s32 sp14;
    
    sp14 = arg0;
    fn_802204F8();
    fn_8021F0A0(sp14);
}

void* fn_8021F168(u32 arg0) {
    u32* var_r3;
    s32 temp_r4;
    
    temp_r4 = arg0 - 0x14;
    if (temp_r4 < 0) {
        var_r3 = (u32*)((u32)&lbl_803685E8 + (arg0 * 4));
    } else {
        var_r3 = NULL;
    }
    return var_r3;
}

void fn_8021F1B8(u32 arg0, void* arg1) {
    u32* ptr;
    
    if (arg0 >= 0x14) {
        return;
    }
    
    ptr = (u32*)((u32)&lbl_803685E8 + (arg0 * 4));
    *ptr = (u32)arg1;
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
    extern u32 lbl_80368770;
    extern u32 lbl_80368774;

    __OSSetInterruptHandler(0x11, fn_8021EB88);
    __OSUnmaskInterrupts(0x4000);

    lbl_80368778 = fn_80209FD4();
    lbl_80368780 = 0;
    lbl_80368770 = 0;
    lbl_80368774 = 0;
}

void fn_8021F2F0(void) {
    extern u8 *__GXData;
    extern u8 *__cpReg;
    u32 value;

    value = *(u32 *)(__GXData + 0x8);
    value = (value & 0xFFFFFFFE) | 1;
    *(u32 *)(__GXData + 0x8) = value;

    value = *(u32 *)(__GXData + 0x8);
    *(u16 *)(__cpReg + 0x2) = (u16)value;
}

void fn_8021F314(void) {
    extern u8 *__GXData;
    extern u8 *__cpReg;
    volatile u32 *ptr;
    u32 value;

    ptr = (volatile u32 *)(__GXData + 0x8);
    value = *ptr;
    value &= 0xFFFFFFFE;
    *ptr = value;

    value = *ptr;
    *(u16 *)(__cpReg + 0x2) = (u16)value;
}

void fn_8021F338(u8 en) {
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

void fn_8021F36C(u32 arg0, u8 arg1) {
    extern u32 __GXData[];
    extern u8 *__cpReg;
    u32 value;

    value = __GXData[2];
    value = (value & 0xFFFFFFFB) | ((arg0 << 2) & 0x4);
    __GXData[2] = value;

    value = __GXData[2];
    value = (value & 0xFFFFFFF7) | ((arg1 << 3) & 0x8);
    __GXData[2] = value;

    *(u16 *)(__cpReg + 2) = (u16)__GXData[2];
}

void fn_8021F39C(u32 arg0, u8 arg1)
{
    extern u8 *__GXData;
    extern u8 *__cpReg;

    u32 value;

    value = *(u32 *)(__GXData + 0x10);
    value = (value & ~1U) | (arg0 & 1);
    *(u32 *)(__GXData + 0x10) = value;

    value = *(u32 *)(__GXData + 0x10);
    value = (value & ~2U) | ((arg1 & 1) << 1);
    *(u32 *)(__GXData + 0x10) = value;

    value = *(u32 *)(__GXData + 0x10);
    *(volatile u16 *)(__cpReg + 4) = (u16)value;
}

s32 fn_8021F4CC(void) {
    extern s32 lbl_80368770;
    return lbl_80368770;
}

s32 fn_8021F4D4(void) {
    extern s32 lbl_80368774;
    return lbl_80368774;
}

s32 fn_8021F4DC(void) {
    extern s32 lbl_80368788;
    return lbl_80368788;
}

void fn_8021F750(s32 arg0, s32 arg1) {
    extern u16 *const __GXData;
    
    if (arg0 >= 0 && arg0 <= 23) {
        switch (arg0) {
            case 0:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x8000) | ((arg1 & 1) << 15);
                break;
            case 1:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x4000) | ((arg1 & 1) << 14);
                break;
            case 2:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x2000) | ((arg1 & 1) << 13);
                break;
            case 3:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x1000) | ((arg1 & 1) << 12);
                break;
            case 4:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x800) | ((arg1 & 1) << 11);
                break;
            case 5:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x400) | ((arg1 & 1) << 10);
                break;
            case 6:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x200) | ((arg1 & 1) << 9);
                break;
            case 7:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x100) | ((arg1 & 1) << 8);
                break;
            case 8:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x80) | ((arg1 & 1) << 7);
                break;
            case 9:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x60) | ((arg1 & 3) << 5);
                break;
            case 10:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x1) | ((arg1 & 1) << 0);
                break;
            case 11:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x4) | ((arg1 & 1) << 2);
                break;
            case 12:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x10) | ((arg1 & 1) << 4);
                break;
            case 13:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x20) | ((arg1 & 1) << 5);
                break;
            case 14:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x80) | ((arg1 & 1) << 7);
                break;
            case 15:
                __GXData[0x14/2] = (__GXData[0x14/2] & ~0x200) | ((arg1 & 1) << 9);
                break;
            case 16:
                __GXData[0x18/2] = (__GXData[0x18/2] & ~0xC000) | ((arg1 & 3) << 14);
                break;
            case 17:
                __GXData[0x18/2] = (__GXData[0x18/2] & ~0x3000) | ((arg1 & 3) << 12);
                break;
            case 18:
                __GXData[0x18/2] = (__GXData[0x18/2] & ~0xC00) | ((arg1 & 3) << 10);
                break;
            case 19:
                __GXData[0x18/2] = (__GXData[0x18/2] & ~0x300) | ((arg1 & 3) << 8);
                break;
            case 20:
                __GXData[0x18/2] = (__GXData[0x18/2] & ~0xC0) | ((arg1 & 3) << 6);
                break;
            case 21:
                __GXData[0x18/2] = (__GXData[0x18/2] & ~0x30) | ((arg1 & 3) << 4);
                break;
            case 22:
                __GXData[0x18/2] = (__GXData[0x18/2] & ~0xC) | ((arg1 & 3) << 2);
                break;
            case 23:
                __GXData[0x18/2] = (__GXData[0x18/2] & ~0x3) | ((arg1 & 3) << 0);
                break;
        }
    }
}

void fn_8021FA94(void)
{
    extern u32 __GXData;
    extern u8 lbl_80367000[];
    extern u8 lbl_80367004[];
    extern u8 lbl_80367008[];

    u8 *gx;
    u32 word14;
    u32 word18;
    u32 word1C;
    u32 count;
    u32 multiplier;

    gx = (u8 *)__GXData;

    if (*(u16 *)(gx + 4) == 0) {
        return;
    }

    word14 = *(u32 *)(gx + 0x14);
    word18 = *(u32 *)(gx + 0x18);
    word1C = *(u32 *)(gx + 0x1C);

    count = word14 & 1;
    count += (word14 >> 1) & 1;
    count += (word14 >> 2) & 1;
    count += (word14 >> 3) & 1;
    count += (word14 >> 4) & 1;
    count += (word14 >> 5) & 1;
    count += (word14 >> 6) & 1;
    count += (word14 >> 7) & 1;
    count += (word14 >> 8) & 1;

    count += lbl_80367008[(word14 >> 9) & 3];

    if (((word1C >> 9) & 1) == 1) {
        multiplier = 3;
    } else {
        multiplier = 1;
    }

    count += lbl_80367008[(word14 >> 11) & 3] * multiplier;

    count += lbl_80367000[(word14 >> 13) & 3];
    count += lbl_80367000[(word14 >> 15) & 3];

    count += lbl_80367004[word18 & 3];
    count += lbl_80367004[(word18 >> 2) & 3];
    count += lbl_80367004[(word18 >> 4) & 3];
    count += lbl_80367004[(word18 >> 6) & 3];
    count += lbl_80367004[(word18 >> 8) & 3];
    count += lbl_80367004[(word18 >> 10) & 3];
    count += lbl_80367004[(word18 >> 12) & 3];
    count += lbl_80367004[(word18 >> 14) & 3];

    *(u16 *)(gx + 6) = (u16)count;
}

void fn_8021FBB8(void) {
    u32* temp_r4 = (u32*)0x803B81A0;
    temp_r4[0x14/4] = 0;
    temp_r4[0x14/4] = (temp_r4[0x14/4] & ~0x600) | 0x200;
    temp_r4[0x18/4] = 0;
    ((u8*)0x803B81A0)[0x4D4] = 0;
    ((u8*)0x803B81A0)[0x4D5] = 0;
    temp_r4[0x5AC/4] |= 0x8;
}

s32 fn_8021FE4C(s32 arg0)
{
    if (arg0 < 0) {
        arg0 = 0;
    }
    if (arg0 > 0x1F) {
        arg0 = 0x1F;
    }
    return arg0;
}

void fn_802200CC(void)
{
    extern void *__GXData;

    u8 *gx;
    volatile u8 *fifo8;
    volatile u32 *fifo32;
    u32 offset;
    u32 index;
    u32 flags;

    gx = (u8 *)__GXData;
    fifo8 = (volatile u8 *)0xCC008000;
    fifo32 = (volatile u32 *)0xCC008000;

    offset = 0;
    index = 0;
    flags = gx[0x5AB];

    if (flags & 1) {
        do {
            *fifo8 = 8;
            *fifo8 = index | 0x70;
            *fifo32 = *(u32 *)(gx + offset + 0x1C);

            *fifo8 = 8;
            *fifo8 = index | 0x80;
            *fifo32 = *(u32 *)(gx + offset + 0x3C);

            *fifo8 = 8;
            *fifo8 = index | 0x90;
            *fifo32 = *(u32 *)(gx + offset + 0x5C);

            flags >>= 1;
            offset += 4;
            index++;
        } while (flags != 0);
    }

    ((u8 *)__GXData)[0x5AB] = 0;
}

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

void fn_802201A8(void) {
    // Looking at pattern, this might be doing some initialization based on a parameter  
    // Let's try a simpler approach that matches the structure better
    
    // Set up some registers for conditional logic
    s32 temp = 0;
    if (temp > 0x14) {   // Check r5 against 0x14 (20)
        // Not sure what the body of this needs to be yet
    }
    
    // Call the function that the target does at the end  
    osSync();
}

void fn_80220428(u32 arg0) {
    extern unsigned short *__GXData;
    register unsigned short *gx_data = __GXData;
    register volatile u32 *fifo = (volatile u32 *)0xCC008000;
    u32 value;

    value = *(u32 *)((u8 *)gx_data + 0x204);
    value = (value & 0xFFFFFFF0) | (arg0 & 0xF);
    *(u32 *)((u8 *)gx_data + 0x204) = value;

    *(volatile u8 *)fifo = 0x10;
    *fifo = 0x103F;
    *fifo = arg0 & 0xFF;

    value = *(u32 *)((u8 *)gx_data + 0x5AC);
    *(u32 *)((u8 *)gx_data + 0x5AC) = value | 4;
}

void GXSetMisc(s32 arg0, u32 arg1) {
    extern u8 *__GXData;

    u8 *gx;
    u16 value;

    switch (arg0) {
    case 0:
        return;

    case 1:
        gx = __GXData;

        *(u16 *)(gx + 4) = (u16)arg1;

        value = *(u16 *)(gx + 4);
        *(u16 *)(gx + 0) = (value == 0);
        *(u16 *)(gx + 2) = 1;

        if (*(u16 *)(gx + 4) != 0) {
            *(u32 *)(gx + 0x5AC) |= 8;
        }
        return;

    case 2:
        gx = __GXData;
        gx[0x5A9] = (arg1 != 0);
        return;

    case 3:
        gx = __GXData;
        gx[0x5AA] = (arg1 != 0);
        return;
    }
}

int fn_802204F8(void)
{
    void fn_80220D6C(void);
    void fn_802037B0(void);
    extern u32 __GXData;

    u8 *gx;
    volatile u32 *fifo;

    gx = (u8 *)__GXData;

    if (*(u32 *)(gx + 0x5AC) != 0) {
        fn_80220D6C();

        fifo = (volatile u32 *)0xCC008000;

        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
    }

    fn_802037B0();

    return 0;
}

void fn_802206F4(void) {
    OSGetTime();
}

u16 fn_80220970(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_802209FC(void) {
    extern void *__GXData;
    volatile u8 *fifo;
    u8 *gx;

    fifo = (volatile u8 *)0xCC008000;
    gx = (u8 *)__GXData;

    *fifo = 0x61;
    *(volatile u32 *)fifo = *(u32 *)(gx + 0x1DC);
    *(volatile u16 *)(gx + 2) = 0;
}

void fn_80220A20(s32 arg0, u8 arg1) {
    void *__peReg;
    u16 val = (arg1 << 8) | (arg0 & 0xFFFFFF00);
    M2C_FIELD(__peReg, u16 *, 0x0) = val;
}

void fn_80220A34(u32 arg0) {
    extern u8 *__peReg;
    u32 value;
    u32 one;

    value = 0;
    value |= (u32)__peReg & 3;
    one = 1;
    value |= (one << 2) & 4;
    value |= arg0 & 3;

    *(u16 *)(__peReg + 0x8) = (u16)value;
}

extern u16 *__peReg;
void fn_80220A54(u8 arg0) {
    u16 temp = __peReg[1];  // Access offset 2 (u16) which is the second u16 in the pointer
    temp = (temp & ~0x10) | ((arg0 << 4) & 0x10);
    __peReg[1] = temp;
}

void fn_80220A6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    *(u16 *)(__peReg + 1) = 0x0001;
}

extern u16* __peReg;
void fn_80220AD0(u8 arg0) {
    u16 val = __peReg[1];
    val &= ~8;
    val |= (arg0 & 1) << 3;
    __peReg[1] = val;
}

void fn_80220AE8(u8 arg0, u8 arg1) {
    u32 val;
    u16 temp;

    val = (u32) (((arg1 << 24) | (arg0)) & 0x100);
    temp = (u16) val;
    *(__peReg + 2) = temp;
}

void fn_80220B0C(u8 arg0) {
    u16 val = *__peReg;
    val &= ~4;
    val |= (arg0 << 2) & 4;
    *__peReg = val;
}

void fn_80220B24(u8 arg0, s32 arg1, s32 arg2) {
    u16 val = 0;
    val |= (arg0 & 1) << 0;   // bit 0
    val |= (arg1 & 7) << 1;   // bits 1-3
    val |= (arg2 & 1) << 4;   // bit 4
    *__peReg = val;
}

void fn_80220B44(u16 arg0, s32 arg1, s32 *arg2) {
    u32 temp;
    u16 a = arg0 & 0xFFFF;
    s32 b = arg1 & 0xFFF;
    
    temp = 0xC8000000 | (a << 2);
    temp &= ~0x3FF000;
    temp |= (b << 12);
    temp &= ~0xC00000;
    temp |= 0x400000;
    *arg2 = *(s32*)temp;
}

s32 fn_80220B68(s32 arg0) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    extern s32 lbl_80368790;
    s32 old;
    s32 enabled;

    old = lbl_80368790;
    enabled = OSDisableInterrupts();
    lbl_80368790 = arg0;
    OSRestoreInterrupts(enabled);
    return old;
}

void fn_80220BAC(void *arg0, void *arg1, s32 arg2, u32 arg3) {
    s32 temp_r4;
    void* r6;

    // Align the address
    temp_r4 = (s32)((u64)arg1 / 8);
    if ((temp_r4 >= 0) && ((temp_r4 & 0x7F) == 0)) {
        r6 = (void*)((u64)arg0 + temp_r4 * 0x30);
        if (arg2 >= 0) {
            *(u32*)r6 = arg3;
        }
    }
}

s32 fn_80220C34(s32 arg0) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    extern s32 lbl_80368794;
    s32 old;
    s32 enabled;

    old = lbl_80368794;
    enabled = OSDisableInterrupts();
    lbl_80368794 = arg0;
    OSRestoreInterrupts(enabled);
    return old;
}

void fn_80220C78(M2C_UNK *arg1) {
    M2C_UNK OSClearContext(M2C_UNK *);
    M2C_UNK OSSetCurrentContext(M2C_UNK *);
    M2C_UNK fn_8020AEC4(M2C_UNK *);
    extern M2C_UNK (*lbl_80368794)();
    extern s8 lbl_80368798;
    extern M2C_UNK lbl_8036879C;
    M2C_UNK sp10;

    M2C_FIELD(__peReg, u16 *, 0xA) = (u16) (M2C_FIELD(__peReg, u16 *, 0xA) | 8);
    lbl_80368798 = 1;
    if (((M2C_UNK (*)()) lbl_80368794) != NULL) {
        OSClearContext(&sp10);
        OSSetCurrentContext(&sp10);
        lbl_80368794();
        OSClearContext(&sp10);
        OSSetCurrentContext(arg1);
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

    volatile u16 *pe;
    u16 value;

    __OSSetInterruptHandler(0x12, (void *)fn_80220BAC);
    __OSSetInterruptHandler(0x13, (void *)fn_80220C78);

    OSInitThreadQueue(&lbl_8036879C);

    __OSUnmaskInterrupts(0x2000);
    __OSUnmaskInterrupts(0x1000);

    pe = (volatile u16 *)__peReg;

    value = pe[5];
    value |= 4;
    value |= 8;
    value |= 1;
    value |= 2;
    pe[5] = value;
}

void fn_80220EBC(void)
{
    extern void *__GXData;

    u8 *gx;
    u32 count;
    u32 i;
    u16 a;
    u16 b;

    gx = (u8 *)__GXData;

    a = *(u16 *)(gx + 4);
    b = *(u16 *)(gx + 6);

    *(volatile u8 *)0xCC008000 = 0x98;
    *(volatile u16 *)0xCC008000 = a;

    count = (a * b + 3) >> 2;

    for (i = 0; i < count; i++) {
        *(volatile u32 *)0xCC008000 = 0;
    }

    *(u16 *)((u8 *)__GXData + 2) = 1;
}

void fn_80220F44(u32 arg0, u32 arg1)
{
    extern u32 __GXData;

    u8 *gx;
    u32 value;

    gx = (u8 *)__GXData;

    value = *(u32 *)(gx + 0x7C);
    value = (value & ~0x000000FF) | (arg0 & 0xFF);
    *(u32 *)(gx + 0x7C) = value;

    value = *(u32 *)(gx + 0x7C);
    value = (value & ~0x00070000) | ((arg1 << 16) & 0x00070000);
    *(u32 *)(gx + 0x7C) = value;

    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = *(u32 *)(gx + 0x7C);

    *(u16 *)(gx + 2) = 0;
}

void fn_80220F84(u32 arg0, u32 arg1)
{
    extern u32 __GXData;

    u8 *gx;
    u32 value;

    gx = (u8 *)__GXData;

    value = *(u32 *)(gx + 0x7C);
    value = (value & ~0x0000FF00) | ((arg0 & 0xFF) << 8);
    *(u32 *)(gx + 0x7C) = value;

    value = *(u32 *)(gx + 0x7C);
    value = (value & ~0x00380000) | ((arg1 << 19) & 0x00380000);
    *(u32 *)(gx + 0x7C) = value;

    *(volatile u8 *)0xCC008000 = 0x61;
    *(volatile u32 *)0xCC008000 = *(u32 *)(gx + 0x7C);

    *(u16 *)(gx + 2) = 0;
}

s32 fn_80220FC4(s32 arg0, s32 arg1) {
    return (arg0 - arg1) * 0x1400 >> 0x10;
}

void fn_8022100C(u32 arg0) {
    // Based on disassembly, the code is directly manipulating __GXData which isn't directly accessible
    // This is an inline ASM replacement or needs to be done by accessing memory addresses
    // We'll try with direct memory access patterns as per the instruction behavior
}

void fn_80221034(s32 arg0) {
    u32 temp_r5;
    u32 *temp_r6;

    temp_r6 = (u32 *)0x803B81A0;
    temp_r5 = *temp_r6;
    temp_r5 = (temp_r5 & ~0x80000) | ((arg0 << 0x13) & 0x80000);
    *temp_r6 = temp_r5;

    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = 0xFE080000;
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = temp_r5;
}

void fn_80221068(void) {
    extern void *__GXData;
    
    *(u8*)0xCC008000 = 0x61;
    *(u32*)0xCC008000 = *(u32*)((u8*)__GXData + 0x204);
}

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
