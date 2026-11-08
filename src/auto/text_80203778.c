/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern s32 lbl_803682F0;;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);
extern u32 *fn_80207768(void);


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

typedef struct OSResetFunctionInfo OSResetFunctionInfo;
struct OSResetFunctionInfo {
    BOOL (*func)(BOOL final);
    u32 priority;
    OSResetFunctionInfo *next;
    OSResetFunctionInfo *prev;
};

typedef struct OSResetFunctionQueue {
    OSResetFunctionInfo *head;
    OSResetFunctionInfo *tail;
} OSResetFunctionQueue;

extern OSResetFunctionQueue ResetFunctionQueue_803684E8;

typedef struct OSContext {
    u8 data[0x2C8];
} OSContext;

void OSRegisterResetFunction(OSResetFunctionInfo *info);
BOOL __OSCallResetFunctions(BOOL final);
void __OSReboot(u32 resetCode, u32 bootDol);
void OSClearContext(OSContext *context);
void OSSetCurrentContext(OSContext *context);
void fn_80206E1C(u32 bootDol, u32 resetCode, char **argv);
s32 __OSSyncSram(void);

s32 PPCMfmsr(void) {
    return M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
}

s32 PPCMtmsr(void) {
    return M2C_ERROR(/* unknown instruction: mtmsr $r3 */);
}

void fn_80203790(void) {
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r3 */);
}

s32 PPCMfl2cr(void) {
    return M2C_ERROR(/* unknown instruction: mfspr $r3, L2CR */);
}

void PPCMtl2cr(void) {
    M2C_ERROR(/* unknown instruction: mtspr L2CR, $r3 */);
}

s32 PPCMtdec(void) {
    return M2C_ERROR(/* unknown instruction: mtdec $r3 */);
}

s32 fn_802037B0(void) {
    return 0;
}

void PPCHalt(void) {
    sync();
    while (1) {
        ;
    }
}

void PPCMtwpar(void) {
    M2C_ERROR(/* unknown instruction: mtspr WPAR, $r3 */);
}

void fn_802038C0(void) {
    M2C_UNK OSDumpContext(s32);
    M2C_UNK OSReport(M2C_UNK *, s32);
    M2C_UNK PPCHalt();
    extern M2C_UNK lbl_8029B910;
    s32 temp_r4;

    temp_r4 = *(s32 *)0xC0;
    OSReport(&lbl_8029B910, temp_r4);
    OSDumpContext(temp_r4 + 0x80000000);
    PPCHalt();
}

s32 __DBIsExceptionMarked(u8 arg0) {
    extern void *__DBInterface;
    return M2C_FIELD(__DBInterface, s32 *, 4) & (1 << arg0);
}

void DBPrintf(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7) {
    if (arg0 != 0) {
        return;
    }
    // This function only does a stack frame setup and returns
}

u32 fn_80203AAC(void) {
    extern void *BootInfo_80368458;

    if (BootInfo_80368458 == NULL || M2C_FIELD(BootInfo_80368458, u32 *, 0x2C) == 0) {
        return 0x10000002;
    }
    return M2C_FIELD(BootInfo_80368458, u32 *, 0x2C);
}

void InquiryCallback(void *arg1) {
    u32 val = *(u32 *)((u8 *)arg1 + 0xC);
    if (val == 0) {
        *(u16 *)0x800030E6 = (*(u16 *)((u8 *)arg1 + 0x2) | 0x8000);
    } else {
        *(u16 *)0x800030E6 = 1;
    }
}

void fn_80204294(void) {
    M2C_ERROR(/* unknown instruction: bla 0x60 */);
}

void *__OSSetExceptionHandler(u8 exception, void *handler) {
    extern void **OSExceptionTable_8036847C;
    void **entry;
    void *oldHandler;

    entry = &OSExceptionTable_8036847C[exception];
    oldHandler = *entry;
    *entry = handler;
    return oldHandler;
}

void *__OSGetExceptionHandler(u8 exception) {
    extern void **OSExceptionTable_8036847C;
    return OSExceptionTable_8036847C[exception];
}

s32 __OSPSInit(void) {
    M2C_UNK ICFlashInvalidate();
    s32 PPCMfhid2();
    M2C_UNK PPCMthid2(s32);
    PPCMthid2(PPCMfhid2() | 0xA0000000);
    ICFlashInvalidate();
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtspr GQR0, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR1, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR2, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR3, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR4, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR5, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR6, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR7, $r3 */);
    return 0;
}

u8 fn_80204410(void) {
    return (u8) M2C_FIELD((void *)0xCC006000, s32 *, 0x24);
}

void OSRegisterVersion(s32 arg0) {
    extern u32 lbl_80366F24;
    OSReport(&lbl_80366F24, (u32)arg0);
}

void OSInitAlarm(void) {
    extern void *AlarmQueue_80368490;
    extern void *DecrementerExceptionHandler;
    extern OSResetFunctionInfo ResetFunctionInfo_8029BB20;
    extern void *__OSGetExceptionHandler(s32);
    extern void __OSSetExceptionHandler(s32, void *);
    
    if (__OSGetExceptionHandler(8) != &DecrementerExceptionHandler) {
        *(s32 *)AlarmQueue_80368490 = 0;
        *((s32 *)AlarmQueue_80368490 + 1) = 0;
        __OSSetExceptionHandler(8, &DecrementerExceptionHandler);
        OSRegisterResetFunction(&ResetFunctionInfo_8029BB20);
    }
}

void OSCreateAlarm(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

extern void DecrementerExceptionCallback(void);
void DecrementerExceptionHandler(void *arg1) {
    s32 *regs = (s32 *) arg1;
    regs[0] = 0; // r0
    regs[1] = (s32) regs + 4; // r1
    regs[2] = 0;
    regs[3] = 0;
    regs[4] = 0;
    regs[5] = 0;
    regs[6] = 0; // r6
    regs[7] = 0; // r7
    regs[8] = 0; // r8
    regs[9] = 0; // r9
    regs[10] = 0; // r10
    regs[11] = 0; // r11
    regs[12] = 0; // r12
    regs[13] = 0; // r13
    regs[14] = 0; // r14
    regs[15] = 0; // r15
    regs[16] = 0; // r16
    regs[17] = 0; // r17
    regs[18] = 0; // r18
    regs[19] = 0; // r19
    regs[20] = 0; // r20
    regs[21] = 0; // r21
    regs[22] = 0; // r22
    regs[23] = 0; // r23
    regs[24] = 0; // r24
    regs[25] = 0; // r25
    regs[26] = 0; // r26
    regs[27] = 0; // r27
    regs[28] = 0; // r28
    regs[29] = 0; // r29
    regs[30] = 0; // r30
    regs[31] = 0; // r31
    DecrementerExceptionCallback();
}

s32 fn_80204CD4(s32 arg0) {
    extern s32 lbl_80366F28;
    s32 temp_r0;

    temp_r0 = lbl_80366F28;
    lbl_80366F28 = arg0;
    return temp_r0;
}

s32 OSGetArenaHi(void) {
    extern s32 __OSArenaHi_803684A8;
    return __OSArenaHi_803684A8;
}

s32 OSGetArenaLo(void) {
    extern s32 __OSArenaLo_80366F30;
    return __OSArenaLo_80366F30;
}

void OSSetArenaHi(s32 arg0) {
    extern s32 __OSArenaHi_803684A8;
    __OSArenaHi_803684A8 = arg0;
}

void OSSetArenaLo(s32 arg0) {
    extern s32 __OSArenaLo_80366F30;
    __OSArenaLo_80366F30 = arg0;
}

extern u32 __OSArenaLo_80366F30;
u32 fn_80204DE0(u32 arg0, u32 arg1) {
    u32 temp_r0;
    u32 temp_r4;
    u32 temp_r5;
    u32 temp_r6;

    temp_r4 = arg1 - 1;
    temp_r5 = ~temp_r4;
    temp_r0 = __OSArenaLo_80366F30 + temp_r4;
    temp_r6 = temp_r5 & temp_r0;
    temp_r0 = temp_r6 + arg0;
    temp_r0 = temp_r0 + temp_r4;
    temp_r0 = temp_r5 & temp_r0;
    __OSArenaLo_80366F30 = temp_r0;
    return temp_r6;
}

void DCInvalidateRange(s32 arg0, u32 arg1) {
    s32 var_r3;
    u32 var_ctr;

    if (arg1 > 0U) {
        // Adjusted loop based on instruction sequence from target
        var_r3 = arg0 & 0x1F;
        var_ctr = (arg1 + var_r3 + 0x1F) >> 5U;
        do {
            M2C_DCACHE_INVALIDATE(arg0);
            arg0 += 0x20;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

void DCFlushRange(void* addr, u32 len) {
    if (len != 0) {
        osDCFlushRange(addr, len);
    }
}

void fn_80205110(void* addr, u32 len) {
    if (len != 0) {
        osL2GlobalInvalidate(addr, len);
    }
}

void DCFlushRangeNoSync(s32 arg0, u32 arg1) {
    if (arg1 > 0) {
        s32 temp_r5 = (arg1 + (arg0 & 0x1F) + 0x1F) >> 5;
        s32 r3 = arg0;
        u32 ctr = temp_r5;
        
        do {
            M2C_DCACHE_CLEAN_INVALIDATE(r3);
            r3 += 0x20;
            ctr--;
        } while (ctr != 0);
    }
}

void fn_8020516C(void* addr, u32 len) {
    if (len != 0) {
        DCFlushRange(addr, len);
    }
}

void fn_80205198(void *addr, u32 nBytes) {
    if (nBytes <= 0) {
        return;
    }
    nBytes = (nBytes + ((u32) addr & 31) + 31) >> 5;
    do {
        __dcbz(addr, 0);
        addr = (u8 *) addr + 32;
    } while (--nBytes);
}

void ICInvalidateRange(void *addr, u32 nBytes) {
    if (nBytes <= 0) {
        return;
    }
    nBytes = (nBytes + ((u32) addr & 31) + 31) >> 5;
    do {
        __icbi(addr, 0);
        addr = (u8 *) addr + 32;
    } while (--nBytes);
    __sync();
    __isync();
}

void fn_80205348(s32 arg0, s32 arg1, u32 arg2) {
    M2C_ERROR(/* unknown instruction: mtspr DMA_U, $r6 */);
    M2C_ERROR(/* unknown instruction: mtspr DMA_L, $r6 */);
}

u32 fn_80205390(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8020536C(s32, s32, u32);
    s32 var_r28;
    s32 var_r29;
    u32 temp_r3;
    u32 var_r31;

    var_r28 = arg0;
    var_r29 = arg1;
    temp_r3 = (u32) (arg2 + 0x1F) >> 5U;
    var_r31 = temp_r3;
loop_6:
    if (var_r31 != 0) {
        if (var_r31 < 0x80U) {
            fn_8020536C(var_r28, var_r29, var_r31);
            var_r31 = 0;
        } else {
            fn_8020536C(var_r28, var_r29, 0U);
            var_r31 -= 0x80;
            var_r28 += 0x1000;
            var_r29 += 0x1000;
        }
        goto loop_6;
    }
    return (u32) (temp_r3 + 0x7F) >> 7U;
}

extern u32 __SPR_392;
s32 fn_8020543C(s32 arg0)
{
    s32 r4 = __SPR_392;
    r4 = (r4 >> 4) & 0xF;
    if (r4 > arg0)
        return 1;
    return 0;
}

void L2GlobalInvalidate(void* addr, u32 len) {
    if (len != 0) {
        osL2GlobalInvalidate(addr, len);
    }
}

void OSSaveFPUContext(void *arg0) {
    __OSSaveFPUContext(arg0);
}

s32 fn_802059EC(void) {
    return *(s32 *)0x800000D4;
}

void *fn_80205B50(void) {
    return 0; /* OSGetStackPointer: asm (mr r3, r1) */
}

void OSClearContext(OSContext *context) {
    *(u16*)(((u8*)context) + 0x1A0) = 0;
    *(u16*)(((u8*)context) + 0x1A2) = 0;
    if (context == *(void**)0x800000D8) {
        *(u32*)0x800000D8 = 0;
    }
}

void fn_802067E0(s32 arg0) {
    ICFlashInvalidate();
    sync();
    isync();
}

void fn_80206808(void) {
    return;
}

void fn_80206888(void) {
    extern s32 lbl_803684B0;
    lbl_803684B0 = 1;
}

void __OSGetExecParams(s32 *arg0) {
    M2C_UNK memcpy(M2C_UNK);
    if ((u32) *(u32 *)0x800030F0 >= 0x80000000U) {
        memcpy(0x1C);
        return;
    }
    *arg0 = 0;
}

extern u16 InterruptHandlerTable_803684C8[32];
s32 fn_80207BAC(s16 arg0) {
    return InterruptHandlerTable_803684C8[arg0];
}

void __OSModuleInit(void) {
    s32 *ptr = (s32 *)0x800030CC;
    ptr[0] = 0;
    ptr[-1] = 0;
    ptr[1] = 0;
}

s32 fn_802083C8(s32 arg0) {
    if (arg0 != 0) {
        *(s16 *)0xCC004010 = 0xFF;
        __OSMaskInterrupts(0xF0000000);
    }
    return 1;
}

extern u16 StopAtNextInt_80368530;
extern u16 lbl_80368550;
#include "global.h"
#include "common.h"
#include <dolphin/os.h>
#include "global.h"

extern void OSSwitchFPUContext(void);
extern void **OSExceptionTable_8036847C;
