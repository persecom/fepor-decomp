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

void *fn_8021D8F8(u32 arg0) {
    extern u16 *__GXData;
    void *ret;

    if (arg0 >= 0x14) {
        ret = 0;
    } else {
        ret = __GXData + 0x388 + arg0 * 0x10;
    }
    return ret;
}

void GXInitFifoBase(void* arg0, void* arg1, u32 arg2) {
    u32 temp_r3;
    u32* fifo_ptr;

    fifo_ptr = (u32*)arg0;
    temp_r3 = arg2 & 0xFFFF;
    
    fifo_ptr[3] = (u32)arg1;  // offset 0xC
    fifo_ptr[4] = temp_r3;    // offset 0x10
}

void fn_8021ED28(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    OSDisableInterrupts();
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg2 - arg1);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 + M2C_FIELD(arg0, s32 *, 8));
    }
    OSRestoreInterrupts();
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

void fn_802206F4(void) {
    OSGetTime();
}

u16 fn_80220970(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_80220A20(s32 arg0, u8 arg1) {
    void *__peReg;
    u16 val = (arg1 << 8) | (arg0 & 0xFFFFFF00);
    M2C_FIELD(__peReg, u16 *, 0x0) = val;
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

void fn_80220C78(void* arg0, void* arg1) {
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            *(u32*)arg0 = **(u32**)arg1;
        }
    }
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
