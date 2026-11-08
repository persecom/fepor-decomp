/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u16 Scb_80339420[];
extern s32 lbl_803682F0;;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);
extern s32 lbl_80366F60;
extern s32 lbl_8029CFE8;


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
extern u16* lbl_80368648;
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

extern void DecrementerExceptionCallback(void);

extern u32 __SPR_392;

extern u16 InterruptHandlerTable_803684C8[];

extern u16 StopAtNextInt_80368530;
extern u16 lbl_80368550;

void fn_8020931C(u32 param_1) {
    if (param_1 < 0x14) {
        return;
    }
}

void __OSUnlockSram(void) {
    fn_8020931C(0);
    return;
}

s32 __OSSyncSram(void) {
    extern u16 Scb_80339420[];
    return (s32)Scb_80339420[0x4C / sizeof(u16)];
}

s32 fn_802098F8(void) {
    u16 *scb;
    
    scb = Scb_80339420;
    OSDisableInterrupts();
    if (scb[0x48 / 2] != 0) {
        OSRestoreInterrupts();
        return 0;
    } else {
        scb[0x44 / 2] = 0;
        scb[0x48 / 2] = 1;
    }
    
    return (scb[0x13 / 2] >> 7) & 1;
}

s32 fn_80209A78(void) {
    u16 *scb_ptr;
    u16 temp_r0;

    scb_ptr = Scb_80339420;
    OSDisableInterrupts();
    temp_r0 = scb_ptr[0x24];
    if (temp_r0 != 0) {
        OSRestoreInterrupts();
        return 0;
    } else {
        scb_ptr[0x24] = 1;
    }
    return (scb_ptr[0x8] >> 6) & 1;
}

void fn_80209C10(void) {
    u16 *scb = Scb_80339420;
    OSDisableInterrupts();
    if (scb[0x24] != 0) {
        OSRestoreInterrupts();
        return;
    } else {
        scb[0x24] = 1;
    }
    lbl_80368614 = *(u32 *)0x800000E0;
    lbl_80368618 = *(void **)0x800000E4;
    lbl_8036861C = *(void **)0x800000E8;
    lbl_80368620 = *(void **)0x800000EC;
    lbl_80368624 = *(void **)0x800000F0;
    lbl_80368628 = *(void **)0x800000F4;
    lbl_8036862C = *(void **)0x800000F8;
    lbl_80368630 = *(void **)0x800000FC;
    lbl_80368634 = *(void **)0x80000100;
    lbl_80368638 = *(void **)0x80000104;
    lbl_8036863C = *(void **)0x80000108;
    lbl_80368640 = *(void **)0x8000010C;
    lbl_80368644 = *(void **)0x80000110;
}

extern void* __OSSystemCallVectorStart;
extern void* __OSSystemCallVectorEnd;
void __OSInitSystemCall(void) {
    memcpy(0x80000C00, &__OSSystemCallVectorStart, &__OSSystemCallVectorEnd - &__OSSystemCallVectorStart);
    DCFlushRangeNoSync(0x80000C00, 0x100);
    sync();
    ICInvalidateRange(0x80000C00, 0x100);
}

void fn_80209E68(void) {

}

void OSInitThreadQueue(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

s32 fn_80209FD4(void) {
    return *(s32 *)0x800000E4;
}

void fn_8020A060(void *arg0) {
    extern s32 RunQueueBits_80368518;
    void *temp_r4;
    void *temp_r5;
    void *temp_r6;

    temp_r5 = M2C_FIELD(arg0, void **, 0x2DC);
    temp_r4 = M2C_FIELD(arg0, void **, 0x2E0);
    temp_r6 = M2C_FIELD(arg0, void **, 0x2E4);
    if (temp_r4 == NULL) {
        M2C_FIELD(temp_r5, void **, 4) = temp_r6;
    } else {
        M2C_FIELD(temp_r4, void **, 0x2E4) = temp_r6;
    }
    if (temp_r6 == NULL) {
        M2C_FIELD(temp_r5, void **, 0) = temp_r4;
    } else {
        M2C_FIELD(temp_r6, void **, 0x2E0) = temp_r4;
    }
    if ((void *) M2C_FIELD(temp_r5, void **, 0) == NULL) {
        RunQueueBits_80368518 &= ~(1 << (0x1F - M2C_FIELD(arg0, s32 *, 0x2D0)));
    }
    M2C_FIELD(arg0, void **, 0x2DC) = NULL;
}

s32 fn_8020A0C8(void *arg0) {
    s32 var_r4;
    void *var_r5;

    var_r4 = M2C_FIELD(arg0, s32 *, 0x2D4);
    var_r5 = M2C_FIELD(arg0, void **, 0x2F4);
loop_5:
    if (var_r5 != NULL) {
        void *temp_r3 = M2C_FIELD(var_r5, void **, 0);
        if (temp_r3 != NULL) {
            s32 temp_r0 = M2C_FIELD(temp_r3, s32 *, 0x2D0);
            if (temp_r0 < var_r4) {
                var_r4 = temp_r0;
            }
        }
        var_r5 = M2C_FIELD(var_r5, void **, 0x10);
        goto loop_5;
    }
    return var_r4;
}

void __OSReschedule(void) {
    extern s32 RunQueueHint_8036851C;
    if (RunQueueHint_8036851C != 0) {
        SelectThread(0);
    }
}

s32 OSGetTick(void) {
    return M2C_ERROR(/* unknown instruction: mftb $r3, 0x10c */);
}

void __init_user(void) {
    __init_cpp();
}

void __DVDInitWA(void) {
    extern u16 CommandList_80339E70[15];
    extern s32 NextCommandNumber_80368574;
    
    NextCommandNumber_80368574 = 0;
    CommandList_80339E70[0] = -1;
    __DVDLowSetWAType(0, 0);
    OSInitAlarm();
}

void fn_8020B84C(void) {
    extern u16 Scb_80339420[];
    extern s32 NextCommandNumber_80368574;
    
    s32 cmd_idx = NextCommandNumber_80368574 * 0x14;
    s32 cmd = Scb_80339420[cmd_idx];
    
    switch (cmd) {
        case 1:
            NextCommandNumber_80368574++;
            fn_8020B940(Scb_80339420[cmd_idx + 1], 
                       Scb_80339420[cmd_idx + 2], 
                       Scb_80339420[cmd_idx + 3], 
                       Scb_80339420[cmd_idx + 4]);
            return;
        case 2:
            NextCommandNumber_80368574++;
            fn_8020BD68(Scb_80339420[cmd_idx + 3], 
                       Scb_80339420[cmd_idx + 4]);
            return;
    }
}

void fn_8020BA50(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_8020BD68(s32, s32, M2C_UNK, M2C_UNK);
    extern M2C_UNK CommandList_80339E70;
    extern s32 NextCommandNumber_80368574;
    extern s32 WorkAroundSeekLocation_80368558;
    s32 temp_r8;
    s32 var_r10;

    temp_r8 = arg2 & 0xFFFF8000;
    if (temp_r8 == 0) {
        var_r10 = 0;
    } else {
        var_r10 = temp_r8 + WorkAroundSeekLocation_80368558;
    }
    M2C_FIELD(&CommandList_80339E70, s32 *, 0) = 2;
    M2C_FIELD(&CommandList_80339E70, s32 *, 0xC) = var_r10;
    M2C_FIELD(&CommandList_80339E70, s32 *, 0x10) = arg3;
    M2C_FIELD(&CommandList_80339E70, s32 *, 0x14) = 1;
    M2C_FIELD(&CommandList_80339E70, s32 *, 0x18) = arg0;
    M2C_FIELD(&CommandList_80339E70, s32 *, 0x1C) = arg1;
    M2C_FIELD(&CommandList_80339E70, s32 *, 0x20) = arg2;
    M2C_FIELD(&CommandList_80339E70, s32 *, 0x24) = arg3;
    M2C_FIELD(&CommandList_80339E70, s32 *, 0x28) = -1;
    NextCommandNumber_80368574 = 0;
    fn_8020BD68(var_r10, arg3, -1, 1);
}

s32 DVDLowWaitCoverClose(s32 arg0) {
    extern s32 Callback_80368538;
    extern s32 WaitingCoverClose_8036854C;
    extern u16 StopAtNextInt_80368530;
    
    Callback_80368538 = arg0;
    WaitingCoverClose_8036854C = 1;
    StopAtNextInt_80368530 = 0;
    *(u32 *)0xCC006004 = 2;
    
    return 1;
}

void DVDLowStopMotor(void) {
    OSDisableInterrupts();
    lbl_803685E8 = 0;
    OSRestoreInterrupts();
}

void fn_8020C080(void) {
    s32 var_r3;
    var_r3 = 0;
    if (lbl_80368614 == 0) {
        lbl_80368618 = NULL;
        lbl_8036861C = NULL;
        lbl_80368620 = NULL;
        lbl_80368624 = NULL;
        lbl_80368628 = NULL;
        lbl_8036862C = NULL;
        lbl_80368630 = NULL;
        lbl_80368634 = NULL;
        lbl_80368638 = NULL;
        lbl_8036863C = NULL;
        lbl_80368640 = NULL;
        lbl_80368644 = NULL;
        lbl_80368648 = NULL;
        lbl_8036864C = NULL;
        lbl_80368650 = NULL;
        lbl_80368654 = NULL;
        if (lbl_803682F0 == 0x1A83) {
            var_r3 = 1;
        }
    } else {
        var_r3 = 0;
    }
    lbl_803685E8 = (void (*)(void))fn_80013E50(var_r3);
}

void DVDLowReset(void) {
    u32 temp_r30;
    u32 temp_r4;
    u32 temp_r26;
    u32 temp_r28;
    u64 temp_r27;
    u64 temp_ret;
    
    *(u32 *)0xCC006004 = 2;
    temp_r30 = *(u32 *)0xCC003024;
    *(u32 *)0xCC003024 = (temp_r30 & 0xFFFFFFFB) | 1;
    temp_ret = __OSGetSystemTime();
    temp_r26 = (u32) temp_ret;
    temp_r27 = temp_ret;
    
    // Calculate delay based on system time
    temp_r28 = ((*(u32 *)0x800000F8 / 500000) * 0xC) >> 3U;
    
    do {
        temp_r4 = ((__OSGetSystemTime() - temp_r27) ^ 0x80000000);
    } while (-((temp_r4 - temp_r4) ^ 0x80000000) != 0);
    
    *(u32 *)0xCC003024 = temp_r30 | 5;
    *(s32 *)0x80368548 = 1;
    temp_ret = __OSGetSystemTime();
    *(u32 *)0x80368540 = (u32) temp_ret;
    *(u32 *)0x80368544 = (u32) temp_ret;
}

s32 fn_8020C310(void) {
    extern s32 Callback_80368538;
    extern s32 WaitingCoverClose_8036854C;
    s32 temp_r3;

    *(s32 *)0xCC006004 = 0;
    temp_r3 = Callback_80368538;
    WaitingCoverClose_8036854C = 0;
    Callback_80368538 = 0;
    return temp_r3;
}

void __DVDFSInit(void) {
    *(u32 *)0x80368578 = 0x80000000;
    *(void **)0x8036857C = *(void **)0x80000038;
    if (*(void **)0x8036857C != NULL) {
        *(s32 *)0x80368584 = *(s32 *)((u8 *)*(void **)0x8036857C + 0x8);
        *(void **)0x80368580 = (void *)((u8 *)*(void **)0x8036857C + *(s32 *)0x80368584 * 0xC);
    }
}

s32 fn_8020C79C(void) {
    M2C_UNK fn_8020F334();
    fn_8020F334();
    return 1;
}

s32 fn_8020CB38(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_UNK fn_8020602C(M2C_UNK *, M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8020EB10(void *, s32, s32, s32, M2C_UNK *, s32);
    extern M2C_UNK fn_8020CBF8;
    extern M2C_UNK lbl_8029CFE8;
    extern M2C_UNK lbl_80366F60;
    s32 temp_r4;

    if ((arg3 < 0) || ((u32) arg3 > (u32) M2C_FIELD(arg0, u32 *, 0x34))) {
        fn_8020602C(&lbl_80366F60, 0x2EE, &lbl_8029CFE8);
    }
    temp_r4 = arg3 + arg2;
    if ((temp_r4 < 0) || ((u32) temp_r4 >= (u32) (M2C_FIELD(arg0, u32 *, 0x34) + 0x20))) {
        fn_8020602C(&lbl_80366F60, 0x2F4, &lbl_8029CFE8);
    }
    M2C_FIELD(arg0, s32 *, 0x38) = arg4;
    fn_8020EB10(arg0, arg1, arg2, M2C_FIELD(arg0, s32 *, 0x30) + arg3, &fn_8020CBF8, arg5);
    return 1;
}

void fn_8020CBF8(void *arg1) {
    void (*temp_r12)(void);

    temp_r12 = *(void (**)(void))((char *)arg1 + 0x38);
    if (temp_r12 != NULL) {
        temp_r12();
    }
}

void fn_8020CD40(void) {
    extern void* __DVDThreadQueue;
    fn_8020AEC4(&__DVDThreadQueue);
}

s32 fn_8020CEC8(void) {
    return 1;
}

void fn_8020CED0(void) {

}

extern u16 Scb_803394;
void fn_8020CFAC(void)
{
    s32 i;
    for (i = 0; i < 0x200; i++)
    {
        if ((*(u16*)(0x803685A0 + i * 2) & 0x10) != 0)
        {
            *(u16*)(0x803685A0 + i * 2) = 0;
        }
    }
}

void fn_8020D1A0(void) {
    M2C_UNK fn_8020BF58(M2C_UNK *);
    extern M2C_UNK fn_8020D27C;
    fn_8020BF58(&fn_8020D27C);
}

s32 fn_8020D1C8(u32 arg0) {
    extern void *executing_80368598;
    extern u32 lbl_803685C8;
    extern s32 lbl_803685CC;
    u32 temp_r4;

    if ((u32) (arg0 + 0xFFFE0000) == 0x400U) {
        lbl_803685C8 = arg0;
        return 1;
    }
    temp_r4 = arg0 & 0xFFFFFF;
    if (((u32) (temp_r4 + 0xFFFA0000) == 0x2800U) || ((u32) (temp_r4 + 0xFFFE0000) == 0x3A00U) || ((u32) (temp_r4 + 0xFFF50000) == 0x5A01U)) {
        return 0;
    }
    lbl_803685CC += 1;
    if ((s32) lbl_803685CC == 2) {
        if (temp_r4 == (u32) lbl_803685C8) {
            lbl_803685C8 = temp_r4;
            return 1;
        }
        lbl_803685C8 = temp_r4;
        return 2;
    }
    lbl_803685C8 = temp_r4;
    if (((u32) (temp_r4 + 0xFFFD0000) == 0x1100U) || (M2C_FIELD(executing_80368598, u32 *, 8) == 5U)) {
        return 2;
    }
    return 3;
}

void fn_8020D4E0(u32 arg0) {
    void DVDReset(void);
    void __DVDStoreErrorCode(u32);
    void cbForStateError(u32);
    void fn_8020BF58(void *);
    void fn_8020D5BC(void);
    void fn_8020D53C(void);

    if (arg0 == 0x10) {
        __DVDStoreErrorCode(0x01234568);
        DVDReset();
        cbForStateError(0);
        return;
    }
    if (arg0 & 1) {
        fn_8020D5BC();
        return;
    }
    fn_8020BF58(fn_8020D53C);
}

void fn_8020D804(void) {
    void fn_8020C1A4(u8, s32, void *);
    void fn_8020DAE0(void);
    extern void *IDShouldBe_8036859C;

    fn_8020C1A4(M2C_FIELD(IDShouldBe_8036859C, u8 *, 8), 0xA, fn_8020DAE0);
}

void AlarmHandler(void *alarm, void *context) {
    void DVDReset(void);
    void DCInvalidateRange(void *, u32);
    void fn_8020DCE8(void *);
    extern u8 lbl_80339F60[];
    extern void *executing_80368598;
    extern void (*lbl_803685E0)(void *);

    DVDReset();
    DCInvalidateRange(lbl_80339F60, 0x20);
    lbl_803685E0 = fn_8020DCE8;
    fn_8020DCE8(executing_80368598);
}

void fn_8020DCE8(void *block) {
    void fn_8020BE28(void *, void *);
    void fn_8020DD18(void);
    extern u8 lbl_80339F60[];

    fn_8020BE28(lbl_80339F60, fn_8020DD18);
}

u32 __OSGetResetSWState(void);
u32 fn_8020ED90(void)
{
    return __OSGetResetSWState();
}

void DVDReset(void) {
    DVDLowReset();
    *(volatile u32 *)0xCC006000 = 0x2A;
    *(volatile u32 *)0xCC006004 = *(volatile u32 *)0xCC006000;
    *(volatile u32 *)0xCC006000 = 0;
    *(volatile u32 *)0xCC006004 = 0;
}

s32 fn_8020EF60(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    OSDisableInterrupts();
    temp_r0 = *(s32 *)((char *)arg0 + 0xC);
    if (temp_r0 == 3) {
        var_r31 = 1;
    } else {
        var_r31 = temp_r0;
    }
    OSRestoreInterrupts();
    return var_r31;
}

s32 fn_8020F058(s32 arg0) {
    extern s32 autoInvalidation_80366F6C;
    s32 temp_r0;

    temp_r0 = autoInvalidation_80366F6C;
    autoInvalidation_80366F6C = arg0;
    return temp_r0;
}

s32 fn_8020F404(void) {
    return 0x80000000;
}

void __DVDClearWaitingQueue(void) {
    extern u16 WaitingQueue_80339FD8[16];
    u32 *base;
    
    base = (u32 *)&WaitingQueue_80339FD8[0];
    
    base[0] = (u32)(base);
    base[1] = (u32)(base);
    base[2] = (u32)(base + 4);
    base[3] = (u32)(base + 4);
    base[4] = (u32)(base + 8);
    base[5] = (u32)(base + 8);
    base[6] = (u32)(base);
    base[7] = (u32)(base);
}

s32 fn_8020F7F0(void *arg0) {
    void **r4;
    void *r5;

    OSDisableInterrupts();
    r4 = *(void ***)((char*)arg0 + 4);
    r5 = *(void ***)arg0;
    if ((r4 == NULL) || (r5 == NULL)) {
        OSRestoreInterrupts();
        return 0;
    }
    *r4 = r5;
    *(void ***)((char*)r5 + 4) = r4;
    OSRestoreInterrupts();
    return 1;
}

void __DVDStoreErrorCode(u32 arg0) {
    u8 ErrorCode2Num(s32);
    void *__OSLockSramEx();
    M2C_UNK __OSUnlockSramEx(M2C_UNK);
    s8 var_r31;
    u32 temp_r0;
    u32 var_r31_2;
    u8 temp_r3;

    temp_r0 = arg0 + 0xFEDD0000;
    if (temp_r0 == 0x4567U) {
        var_r31 = 0xFF;
    } else if (temp_r0 == 0x4568U) {
        var_r31 = 0xFE;
    } else {
        var_r31_2 = arg0 >> 0x18U;
        temp_r3 = ErrorCode2Num(arg0 & 0xFFFFFF);
        if (var_r31_2 >= 6U) {
            var_r31_2 = 6;
        }
        var_r31 = temp_r3 + (var_r31_2 * 0x1E);
    }
    M2C_FIELD(__OSLockSramEx(), s8 *, 0x24) = var_r31;
    __OSUnlockSramEx(1);
}

void fn_8020FAE0(void) {
    if (lbl_803685E8 != NULL) {
        lbl_803685E8();
    }
}

s32 fn_8020FFC4(s32 arg0) {
    extern s32 lbl_80368614;
    s32 temp_r31;

    temp_r31 = lbl_80368614;
    OSDisableInterrupts();
    lbl_80368614 = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}

void fn_8021004C(s32 arg0) {
}

s32 fn_80211690(void) {
    extern s32 lbl_80368604;
    return lbl_80368604;
}

void fn_80211698(s32 *arg0, u32 *arg1) {
    u16 *addr = (u16 *)0xCC002000;
    u32 temp_r8;
    u32 var_r9;

    do {
        var_r9 = addr[0x17] & 0x7FF;
        temp_r8 = var_r9;
        var_r9 = addr[0x17] & 0x7FF;
    } while (temp_r8 != var_r9);
    *arg0 = addr[0x17] & 0x7FF;
    *arg1 = var_r9;
}

s32 fn_802116D4(void) {
    extern u16* lbl_80368648;
    u16 r5, r6, r3, r4;
    
    r5 = *(u16*)0xCC00202C;
    do {
        r6 = r5;
        r5 = *(u16*)0xCC00202C;
    } while (r6 != r5);
    
    r3 = *(u16*)0xCC00202E;
    r4 = *lbl_80368648;
    
    return (((r5 - 1) * 2) + ((r3 - 1) / r4)) < lbl_80368648[14] ? 1 : 0;
}

u32 fn_802117D8(void) {
    u16 temp_r0;
    u32 r5;
    u32 r6;
    u32 r30;
    void *r31;

    r31 = lbl_80368648;
    OSDisableInterrupts();
    r6 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    do {
        r6 = M2C_FIELD((void *)0xCC002000, u16 *, 0x2C) & 0x7FF;
    } while (r6 != r30);
    r5 = (M2C_FIELD((void *)0xCC002000, u16 *, 0x2E) & 0x7FF) - 1;
    r6 = r30 - 1;
    r6 *= 2;
    r30 = (r6 + (r5 / M2C_FIELD(r31, u16 *, 0x1A))) & 0xFFFF;
    OSRestoreInterrupts();
    temp_r0 = M2C_FIELD(r31, u16 *, 0x18);
    if (r30 >= temp_r0) {
        r30 -= temp_r0;
    }
    return r30 >> 1U;
}

u32 VIGetTvFormat(void) {
    u32 mode;
    
    mode = *(u32*)0x8036864C;
    if (mode > 7) {
        return 0;
    }
    
    return ((u16*)0x8029D68C)[mode];
}

s32 fn_802118D8(void) {
    s32 temp_r31;
    u16 reg_val;

    OSDisableInterrupts();
    reg_val = *(u16 *)0xCC00206E;
    temp_r31 = reg_val & 3;
    OSRestoreInterrupts();
    return temp_r31 & 1;
}

void fn_80211B30(s32 arg0, s32 arg1) {
    u32 temp_r7;
    u32 var_r8;
    
    // Load the value from 0xCC00202C and mask to get the lower 11 bits
    var_r8 = *(u16*)0xCC00202C & 0x7FF;
    
    // Loop until the value stops changing
    do {
        temp_r7 = var_r8;
        var_r8 = *(u16*)0xCC00202C & 0x7FF;
    } while (temp_r7 != var_r8);
    
    // Call fn_80211914 with masked value and arguments
    fn_80211914(*(u16*)0xCC00202E & 0x7FF, var_r8, arg0, arg1);
}

void fn_80212D78(s32 arg0) {
    extern s32 __PADSpec;
    extern M2C_UNK fn_80212DD8;
    extern M2C_UNK fn_80212F4C;
    extern M2C_UNK fn_802130C0;
    extern s32 lbl_80366FB0;
    extern M2C_UNK *lbl_80366FB4;
    __PADSpec = 0;
    switch (arg0) {                                 /* irregular */
    case 0:
        lbl_80366FB4 = &fn_80212DD8;
        break;
    case 1:
        lbl_80366FB4 = &fn_80212F4C;
        break;
    default:
        lbl_80366FB4 = &fn_802130C0;
        break;
    }
    lbl_80366FB0 = arg0;
}

s32 fn_80213530(s32 arg0) {
    s32 fn_8021275C(M2C_UNK);
    M2C_UNK fn_8021364C(M2C_UNK);
    s32 fn_8023ABD4();
    extern s32 lbl_80366FA4;
    extern u32 lbl_80368670;
    extern u32 lbl_80368688;
    extern s32 lbl_8036868C;
    s32 var_r31;
    s32 var_r3;

    if ((u32) lbl_80368688 != 0U) {
        fn_8021364C(0);
    }
    if (arg0 == 0) {
        var_r31 = 0;
        var_r3 = 0;
        if (((u32) lbl_80368670 == 0U) && ((s32) lbl_80366FA4 == 0x20)) {
            var_r3 = 1;
        }
        if ((var_r3 != 0) && (fn_8023ABD4() == 0)) {
            var_r31 = 1;
        }
        if (((s32) lbl_8036868C == 0) && (var_r31 != 0)) {
            lbl_8036868C = fn_8021275C(0xF0000000);
            return 0;
        }
        return var_r31;
    }
    lbl_8036868C = 0;
    return 1;
}

u32 fn_8021364C(u32 arg0) {
    M2C_UNK fn_8023B308(M2C_UNK *);
    M2C_UNK fn_8023B3D4(M2C_UNK *);
    extern M2C_UNK fn_802135EC;
    extern u32 lbl_80368688;
    u32 temp_r31;

    temp_r31 = lbl_80368688;
    lbl_80368688 = arg0;
    if (arg0 != 0U) {
        fn_8023B308(&fn_802135EC);
    } else {
        fn_8023B3D4(&fn_802135EC);
    }
    return temp_r31;
}

extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
s32 __PADDisableRecalibration(s32 arg0) {
    s32 r31;
    u8* addr = (u8*)0x800030E3;
    
    OSDisableInterrupts();
    if (*addr & 0x40) {
        r31 = 1;
    } else {
        r31 = 0;
    }
    *addr = (*addr & 0xBF);
    if (arg0 != 0) {
        *addr = (*addr | 0x40);
    }
    OSRestoreInterrupts();
    return r31;
}

void fn_80213760(u16 arg0, u32 arg1) {
    u16 temp_r4;
    void *temp_r5;
    void *temp_r6;
    void *temp_r7;

    OSDisableInterrupts();
    temp_r5 = (u16 *)0xCC000000 + 0x5000;
    temp_r6 = (u16 *)0xCC000000 + 0x5000;
    temp_r7 = (u16 *)0xCC000000 + 0x5000;
    M2C_FIELD(temp_r5, u16 *, 0x30) = (arg0 >> 16) | (*(u16 *)0xCC005030 & 0xFC00);
    M2C_FIELD(temp_r6, u16 *, 0x32) = (M2C_FIELD(temp_r6, u16 *, 0x32) & 0x001F) | arg0;
    temp_r4 = M2C_FIELD(temp_r7, u16 *, 0x36) & 0x8000;
    M2C_FIELD(temp_r7, u16 *, 0x36) = temp_r4 | (arg1 >> 5);
    OSRestoreInterrupts();
}

void fn_802137E8(void) {
    u16 *ptr = (u16 *)0xCC005000;
    u16 val = ptr[0x1B];
    ptr[0x1B] = val | 0x8000;
}

s32 fn_80213800(void) {
    u16* addr = (u16*)0xCC005000;
    u16 low = *(addr + 0x30/2);
    u16 high = *(addr + 0x32/2);
    return (high & 0xFFE0) | ((low << 16) & 0x03FF0000);
}

s32 fn_8021381C(void) {
    return (*(u16 *)0xCC005036 << 5) & 0xFFFE0;
}

s32 fn_80213904(void) {
    return *(s32 *)0xCC006C00 & 1;
}

s32 fn_802139F4(void) {
    return (((u32) *(u32 *)0xCC006C00 >> 6U) & 1) ^ 1;
}

s32 fn_80213ADC(void) {
    return ((u32) *(u32 *)0xCC006C00 >> 1U) & 1;
}

void fn_80213AEC(s32 arg0) {
    u32 *ptr = (u32 *)0xCC006C00;
    u32 temp = ptr[1];
    temp = (temp & 0xFFFFFF00) | ((u32)arg0 & 0xFF);
    ptr[1] = temp;
}

u8 fn_80213B08(void) {
    return (u8) *(s32 *)0xCC006C04;
}

void fn_80213B18(s32 arg0) {
    M2C_FIELD((void *)0xCC006C00, s32 *, 4) = (s32) ((M2C_FIELD((void *)0xCC006C00, s32 *, 4) & 0xFFFF00FF & ~0xFF00) | ((arg0 << 8) & 0xFF00));
}

u8 fn_80213B34(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
}

void fn_80213CB0(s32 arg0)
{
    lbl_80368698(arg0);
}

void fn_80213DD8(void) {
    void (*funcPtr)(void) = (void (*)(void))lbl_803685E8;
    if (funcPtr != NULL) {
        funcPtr();
    }
}

s32 fn_80214058(void) {
    u16 reg_val;
    
    OSDisableInterrupts();
    reg_val = *(u16 *)0xCC00500A;
    reg_val = (reg_val & 0x200) >> 9;  // Extract bit 9 (0x200 = bit 9)
    OSRestoreInterrupts();
    return (reg_val & 1);
}

s32 fn_802142B0(void) {
    return 0x4000;
}

s32 fn_802142B8(void) {
    extern s32 lbl_803686DC;
    return lbl_803686DC;
}

BOOL fn_802142C0(void)
{
    return OSGetResetButtonState() != 0;
}

void fn_80214338(void) {
    u16* addr = (u16*)0xCC005000;
    u16 val = addr[0x5];  // offset 0xA / 2 = 0x5
    val &= ~0x88;
    val |= 0x20;
    addr[0x5] = val;
}

s32 fn_80214358(void) {
    return *(u16 *)0xCC00500A & 0x20;
}

void fn_80215C5C(void) {

}

void fn_80215D2C(void) {
    char* text = "%s\n";
    OSRegisterVersion(0x43);
    OSReport(text, "ResetSW");
}

void fn_80215EF8(void) {
    extern s32 lbl_803686F8;
    extern s32 lbl_803686FC;
    extern s32 lbl_80368700;
    extern s32 lbl_80368704;
    OSDisableInterrupts();
    lbl_803686F8 = 0;
    lbl_803686FC = 0;
    lbl_80368700 = 0;
    lbl_80368704 = 0;
    OSRestoreInterrupts();
}

s32 fn_80215F30(void) {
    extern s32 lbl_80368718;
    return lbl_80368718;
}

s32 fn_80215F38(void) {
    extern s32 lbl_8036871C;
    return lbl_8036871C;
}

s32 fn_80215F40(void) {
    return ((u16) *(u16 *)0xCC005000 >> 0xFU) & 1;
}

s32 fn_80215F50(void) {
    return ((u16) *(u16 *)0xCC005004 >> 0xFU) & 1;
}

s32 fn_80215F60(void) {
    u16 *ptr = (u16 *)0xCC005000;
    u16 r0 = ptr[1];
    u16 r3 = ptr[2];
    return (r3 & ~0xFFFF0000) | (r0 << 0x10);
}

void fn_80215F78(u16 arg0) {
    *(u16 *)0xCC005000 = (u16)(arg0 >> 16);
    *(u16 *)0xCC005002 = arg0;
}

void fn_80216050(void) {
    OSDisableInterrupts();
}

void fn_80216860(void *arg0) {
    extern void *lbl_80368734;
    extern void *lbl_80368738;
    extern void *lbl_8036873C;
    void *temp_r4;
    void *var_r5;

    if ((void *) lbl_80368738 == NULL) {
        lbl_8036873C = arg0;
        lbl_80368734 = arg0;
        lbl_80368738 = arg0;
        M2C_FIELD(arg0, void **, 0x3C) = NULL;
        M2C_FIELD(arg0, void **, 0x38) = NULL;
        return;
    }
    var_r5 = lbl_80368738;
loop_8:
    if (var_r5 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 4) < (u32) M2C_FIELD(var_r5, u32 *, 4)) {
            M2C_FIELD(arg0, void **, 0x3C) = (void *) M2C_FIELD(var_r5, void **, 0x3C);
            M2C_FIELD(var_r5, void **, 0x3C) = arg0;
            M2C_FIELD(arg0, void **, 0x38) = var_r5;
            temp_r4 = M2C_FIELD(arg0, void **, 0x3C);
            if (temp_r4 == NULL) {
                lbl_80368738 = arg0;
            } else {
                M2C_FIELD(temp_r4, void **, 0x38) = arg0;
            }
        } else {
            var_r5 = M2C_FIELD(var_r5, void **, 0x38);
            goto loop_8;
        }
    }
    if (var_r5 == NULL) {
        M2C_FIELD(lbl_80368734, void **, 0x38) = arg0;
        M2C_FIELD(arg0, void **, 0x38) = NULL;
        M2C_FIELD(arg0, void **, 0x3C) = (void *) lbl_80368734;
        lbl_80368734 = arg0;
    }
}

void fn_80216900(void *arg0) {
    extern void *lbl_80368738;
    extern void *lbl_80368734;
    void *temp_r0;
    extern void *lbl_8036873C;

    M2C_FIELD((unsigned short)arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 3;
    if ((void *) lbl_80368738 == arg0) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x38);
        if (temp_r0 != NULL) {
            lbl_80368738 = temp_r0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 0x3C) = NULL;
            return;
        }
        lbl_8036873C = NULL;
        lbl_80368734 = NULL;
        lbl_80368738 = NULL;
        return;
    }
    if ((void *) lbl_80368734 == arg0) {
        lbl_80368734 = M2C_FIELD(arg0, void **, 0x3C);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0x38) = NULL;
        lbl_8036873C = lbl_80368738;
        return;
    }
    lbl_8036873C = M2C_FIELD(arg0, void **, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), void **, 0x38) = (void *) M2C_FIELD(arg0, void **, 0x38);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x3C);
}

extern s32 RunQueueHint_8036851C;
extern u16 lbl_80339F00[32];
extern u16 AlarmForTimeout_80339ED8[20];
#include <dolphin/os.h>

extern u16 lbl_80339FB0[20]; // 40 bytes = 20 * 2-byte entries
#include <dolphin/os.h>

extern u16 Reschedule_80368520;
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern void (**_ctors)(void);
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u16* lbl_80368604;
extern u16 lbl_8036860C[4];
#include <dolphin/os.h>

extern u16 Scb_80339420[42];
extern u16 Scb_80339420[];
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u32 CurrTvMode_8036864C;
extern u16 lbl_8029D68C[];
extern u16 lbl_803686D8;
#include <dolphin/os.h>

extern u16 Scb_80339420[42];
#include <dolphin/os.h>

extern u16 Scb_80339420[42]; // 84 bytes, 2-byte entries
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u16 Scb_80339420[5];
extern u16 Callback_80368538;
extern u16 StopAtNextInt_80368530;
extern u16 AlarmForTimeout_80339ED8[20];
#include "common.h"
#include <dolphin/os.h>
#include "global.h"

extern u16 Scb_803394;
extern u16 bootInfo_803685A0[];
extern u16 BB2_80339F40[];
extern u16 lbl_8029D0DC[];
extern u16 lbl_80366F74[];
