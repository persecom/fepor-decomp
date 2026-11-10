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

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern s32* FstStart_8036857C;
extern s32 lbl_80368588;

extern u16 Scb_803394;

u32 __OSGetResetSWState(void);

extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void* RunQueue_80339478[];
extern s32 RunQueueBits_80368518;
extern s32 RunQueueHint_8036851C;

void fn_8020B294(s64 ticks, void *td) {
    s64 fn_8022C9FC(s64, s64);
    s64 __div2i(s64, s64);
    void fn_8020B0F8(s32, void *);
    s64 d;
    s64 tmp;
    s32 days;
    s32 secs;
    s32 hours;
    s32 eight;
    u32 *hw;
    u32 timer;
    u32 msDiv;
    u32 usDiv;

    eight = 8;
    hw = (u32 *)0x80000000;
    timer = hw[0x3E] >> 2;
    d = fn_8022C9FC(ticks, (s64)timer);
    if (d < 0) {
        d += (s64)(hw[0x3E] >> 2);
    }
    timer = hw[0x3E] >> 2;
    msDiv = (u32)((((u64)0x431BDE83ULL * timer) >> 32) >> 15);
    tmp = __div2i(d * eight, (s64)msDiv);
    *(s32 *)((u8 *)td + 0x24) = (s32)fn_8022C9FC(tmp, 1000);
    timer = hw[0x3E] >> 2;
    usDiv = (u32)((((u64)0x10624DD3ULL * timer) >> 32) >> 6);
    tmp = __div2i(d, (s64)usDiv);
    *(s32 *)((u8 *)td + 0x20) = (s32)fn_8022C9FC(tmp, 1000);
    ticks -= d;
    timer = hw[0x3E] >> 2;
    tmp = __div2i(ticks, (s64)timer);
    days = (s32)(__div2i(tmp, 86400) + 0xB2575);
    secs = (s32)fn_8022C9FC(__div2i(ticks, (s64)timer), 86400);
    if (secs < 0) {
        days -= 1;
        secs += 86400;
    }
    fn_8020B0F8(days, td);
    hours = secs / 60;
    *(s32 *)((u8 *)td + 0x8) = hours / 60;
    *(s32 *)((u8 *)td + 0x4) = hours % 60;
    *(s32 *)((u8 *)td + 0x0) = secs % 60;
}

void __init_user(void) {
    __init_cpp();
}

void _ExitProcess(void) {
    M2C_UNK PPCHalt();
    PPCHalt();
}
