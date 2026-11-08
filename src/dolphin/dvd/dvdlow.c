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

extern s32 StopAtNextInt_80368530;
extern u16 lbl_80368550;

extern u32 lbl_80368514;
extern u32 lbl_80368510;
extern s32 lbl_803684FC;
extern s32 lbl_80368500;
extern void (*lbl_803684F8)();

extern void* __OSSystemCallVectorStart;
extern void* __OSSystemCallVectorEnd;

extern s32* FstStart_8036857C;
extern s32 lbl_80368588;

extern u16 Scb_803394;

u32 __OSGetResetSWState(void);

extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);

volatile u32 __DIRegs[16] : 0xCC006000;

extern u16 AlarmForTimeout_80339ED8[20];
extern void AlarmHandlerForTimeout(void *, void *);
extern void OSCreateAlarm(void *);
extern void OSSetAlarm(void *, s64, void *);

static void SetTimeoutAlarm(s64 timeout) {
    OSCreateAlarm(AlarmForTimeout_80339ED8);
    OSSetAlarm(AlarmForTimeout_80339ED8, timeout, AlarmHandlerForTimeout);
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

BOOL fn_8020BD68(u32 offset, void *callback) {
    extern void *Callback_80368538;
    extern u16 AlarmForTimeout_80339ED8[20];
    extern void AlarmHandlerForTimeout(void *, void *);
    extern void OSCreateAlarm(void *);
    extern void OSSetAlarm(void *, s64, void *);
    s64 timeout;

    Callback_80368538 = callback;
    StopAtNextInt_80368530 = 0;
    ((volatile u32 *)0xCC006000)[2] = 0xAB000000;
    ((volatile u32 *)0xCC006000)[3] = offset >> 2;
    ((volatile u32 *)0xCC006000)[7] = 1;
    timeout = (*(u32 *)0x800000F8 / 4) * 10;
    OSCreateAlarm(AlarmForTimeout_80339ED8);
    OSSetAlarm(AlarmForTimeout_80339ED8, timeout, AlarmHandlerForTimeout);
    return TRUE;
}

s32 DVDLowWaitCoverClose(s32 arg0) {
    extern s32 Callback_80368538;
    extern s32 WaitingCoverClose_8036854C;
    
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

