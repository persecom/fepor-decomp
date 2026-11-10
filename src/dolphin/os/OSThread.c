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

void *SelectThread(s32 arg0) {
    s32 fn_802059EC(void);
    s32 fn_802059F8(void *);
    void OSSetCurrentContext(void *);
    void OSClearContext(void *);
    void OSLoadContext(void *);
    void OSEnableInterrupts(void);
    void OSDisableInterrupts(void);
    extern s32 Reschedule_80368520;
    extern s32 RunQueueBits_80368518;
    extern s32 RunQueueHint_8036851C;
    extern void *RunQueue_80339478[];
    extern void (*SwitchThreadCallback_80366F50)(void *, void *);
    void **queue;
    void *thread;
    void *next;
    void *tail;
    void *pred;
    s32 prio;
    void **q;
    s32 yield;
    s32 cur;

    queue = RunQueue_80339478;
    yield = arg0;
    if (Reschedule_80368520 > 0) {
        return NULL;
    }
    cur = fn_802059EC();
    thread = *(void **)0x800000E4;
    if ((u32)cur != (u32)thread) {
        return NULL;
    }
    if (thread != NULL) {
        if (*(u16 *)((u8 *)thread + 0x2C8) == 2) {
            if (yield == 0) {
                s32 bits = RunQueueBits_80368518;
                if (*(s32 *)((u8 *)thread + 0x2D0) <= (s32)__cntlzw((u32)bits)) {
                    return NULL;
                }
            }
            *(u16 *)((u8 *)thread + 0x2C8) = 1;
            *(void **)((u8 *)thread + 0x2DC) = (void *)((u8 *)queue + (*(s32 *)((u8 *)thread + 0x2D0) * 8));
            q = *(void ***)((u8 *)thread + 0x2DC);
            tail = q[1];
            if (tail == NULL) {
                q[0] = thread;
            } else {
                *(void **)((u8 *)tail + 0x2E0) = thread;
            }
            *(void **)((u8 *)thread + 0x2E4) = tail;
            *(void **)((u8 *)thread + 0x2E0) = NULL;
            (*(void ***)((u8 *)thread + 0x2DC))[1] = thread;
            {
                s32 one = 1;
                RunQueueBits_80368518 |= one << (0x1F - *(s32 *)((u8 *)thread + 0x2D0));
                RunQueueHint_8036851C = one;
            }
        }
        if ((*(u16 *)((u8 *)thread + 0x1A2) & 2) == 0) {
            if (fn_802059F8(thread) != 0) {
                return NULL;
            }
        }
    }
    if ((u32)RunQueueBits_80368518 == 0) {
        SwitchThreadCallback_80366F50(*(void **)0x800000E4, NULL);
        *(void **)0x800000E4 = NULL;
        OSSetCurrentContext((u8 *)queue + 0x730);
        do {
            OSEnableInterrupts();
            while ((u32)RunQueueBits_80368518 == 0) {
            }
            OSDisableInterrupts();
        } while ((u32)RunQueueBits_80368518 == 0);
        OSClearContext((u8 *)queue + 0x730);
    }
    RunQueueHint_8036851C = 0;
    prio = __cntlzw((u32)RunQueueBits_80368518);
    q = (void **)((u8 *)queue + (prio * 8));
    next = q[0];
    pred = *(void **)((u8 *)next + 0x2E0);
    if (pred == NULL) {
        q[1] = NULL;
    } else {
        *(void **)((u8 *)pred + 0x2E4) = NULL;
    }
    q[0] = pred;
    if (q[0] == NULL) {
        s32 one = 1;
        RunQueueBits_80368518 &= ~(one << (0x1F - prio));
    }
    *(void **)((u8 *)next + 0x2DC) = NULL;
    *(u16 *)((u8 *)next + 0x2C8) = 2;
    SwitchThreadCallback_80366F50(*(void **)0x800000E4, next);
    *(void **)0x800000E4 = next;
    OSSetCurrentContext(next);
    OSLoadContext(next);
    return next;
}

void __OSReschedule(void) {
    extern s32 RunQueueHint_8036851C;
    if (RunQueueHint_8036851C != 0) {
        SelectThread(0);
    }
}

void fn_8020A740(void *arg0) {
    void **r3 = (void **)arg0;
    void **r4 = (void **)M2C_FIELD(arg0, void **, 0x2DC);
    void **r5 = (void **)M2C_FIELD(arg0, void **, 0x2E0);
    void **r6 = (void **)M2C_FIELD(arg0, void **, 0x2E4);

    if (r5 == NULL) {
        M2C_FIELD(r4, void **, 4) = r6;
    } else {
        M2C_FIELD(r5, void **, 0x2E4) = r6;
    }

    if (r6 == NULL) {
        M2C_FIELD(r4, void **, 0) = r5;
    } else {
        M2C_FIELD(r6, void **, 0x2E0) = r5;
    }

    if ((void *)M2C_FIELD(r4, void **, 0) == NULL) {
        extern s32 RunQueueBits_80368518;
        s32 shift = 0x1F - M2C_FIELD(arg0, s32 *, 0x2D0);
        RunQueueBits_80368518 &= ~(1 << shift);
    }

    M2C_FIELD(arg0, void **, 0x2DC) = NULL;
}

s64 OSGetTime(void) {
    u32 hi;
    u32 lo;
    u32 hi2;

    do {
        hi = __mftbu();
        lo = __mftb();
        hi2 = __mftbu();
    } while (hi != hi2);

    return ((s64)hi << 32) | lo;
}

s32 OSGetTick(void) {
    return M2C_ERROR(/* unknown instruction: mftb $r3, 0x10c */);
}

void fn_8020B0F8(s32 arg0, void *arg1) {
    extern u16 lbl_8029CEB8[];
    extern u16 lbl_8029CE88[];
    
    s32 r5, r0, r11;
    s32 temp_r0, temp_r0_2;
    s32 r3, r7, r7_2, r8;
    u32 r6;
    
    // Initial setup from assembly
    r5 = arg0 / 365;
    r11 = r5 * 0x16D;
    
loop_4:
    if (r5 < 1) {
        r0 = 0;
    } else {
        // More complex calculation
        s32 temp1 = (r5 - 1) / 400;  // mulhw with appropriate constants
        s32 temp2 = (r5 + 3) / 4;    // Need to handle this carefully
        s32 temp3 = (r5 - 1) / 100;  // Division with the right constants
        
        // The actual implementation based on how the assembly looks
        r0 = ((r5 - 1) / 400) + (((r5 + 3) / 4) - ((r5 - 1) / 100));
    }
    
    temp_r0 = r11 + r0;
    if (arg0 < temp_r0) {
        r11 -= 0x16D;
        r5 -= 1;
        goto loop_4;
    }
    
    M2C_FIELD(arg1, u32 *, 0x14) = r5; // Store year
    
    temp_r0_2 = arg0 - temp_r0;
    M2C_FIELD(arg1, s32 *, 0x1C) = temp_r0_2; // Store day of year
    
    // Leap year calculation
    r7 = 1;
    r8 = 0;
    
    if ((r5 % 4) == 0) {
        r8 = 1;
    }
    
    if ((r8 == 0) && ((r5 % 100) != 0)) {
        r7 = 0;
    }

    // Select correct table
    if (r7 != 0) {
        r6 = (u32) lbl_8029CEB8;
    } else {
        r6 = (u32) lbl_8029CE88;
    }
    
    // Month and day calculation loop  
    r3 = 0x30;
    r7_2 = 0xC;
    
    do {
        r3 -= 4;
        r7_2 -= 1;
    } while (temp_r0_2 < (s32) *(u16 *) (r6 + r3));
    
    M2C_FIELD(arg1, s32 *, 0x10) = r7_2; // Store month
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) ((temp_r0_2 - *(u16 *) (r6 + r3)) + 1); // Store day
}
