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
extern s32 lbl_80368508;
extern u32 lbl_8036850C;
extern s64 __OSStartTime;
extern void (*lbl_803684F8)();

#pragma peephole off

#pragma peephole reset

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

s32 fn_80208D18(void) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s64 __OSGetSystemTime(void);
    s64 __div2i(s64, s64);
    s32 state;
    s32 enabled;
    s32 pad;
    s64 now;
    s32 soft;
    u32 freq;
    u32 thresh;
    u32 n;
    s64 t;
    s64 q;

    enabled = OSDisableInterrupts();
    now = __OSGetSystemTime();
    pad = 0;

    if (!(*(u32 *)0xCC003000 & 0x10000)) {
        if (lbl_803684FC == 0) {
            soft = 1;
            lbl_803684FC = soft;
            if (*(s64 *)&lbl_80368508 == 0) {
                soft = 0;
            }
            lbl_80368514 = (u32)now;
            state = soft;
            lbl_80368510 = (u32)((u64)now >> 32);
        } else {
            soft = 1;
            if (*(s64 *)&lbl_80368508 == 0) {
                freq = *(u32 *)0x800000F8 >> 2;
                thresh = ((u32)((freq * (u64)0x431BDE83u) >> 32) >> 15) * 0x64 >> 3;
                if ((u64)(now - *(s64 *)&lbl_80368510) < (u64)thresh) {
                    soft = 0;
                }
            }
            if (soft != 0) {
                state = 1;
            } else {
                state = 0;
            }
        }
    } else if (lbl_803684FC != 0) {
        lbl_803684FC = 0;
        state = lbl_80368500;
        if (state != 0) {
            *(s64 *)&lbl_80368508 = now;
        } else {
            *(s64 *)&lbl_80368508 = 0;
        }
    } else if (*(s64 *)&lbl_80368508 != 0) {
        freq = *(u32 *)0x800000F8 >> 2;
        thresh = ((u32)((freq * (u64)0x10624DD3u) >> 32) >> 6) * 0x28;
        if ((u64)(now - *(s64 *)&lbl_80368508) < (u64)thresh) {
            state = 1;
        } else {
            *(s64 *)&lbl_80368508 = 0;
            state = 0;
        }
    } else {
        *(s64 *)&lbl_80368508 = 0;
        state = 0;
    }

    lbl_80368500 = state;

    n = *(u8 *)0x800030E3 & 0x1F;
    if (n != 0) {
        freq = *(u32 *)0x800000F8 >> 2;
        t = __OSStartTime + (s64)(s32)(n * 0x3C) * (s64)freq;
        if (t < now) {
            q = __div2i(now - t, (s64)freq);
            q = __div2i(q, 2);
            if ((q & 1) == 0) {
                state = 1;
            } else {
                state = 0;
            }
        }
    }

    (void)pad;
    OSRestoreInterrupts(enabled);
    return state;
}

