/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u16 Scb_80339420[];
extern s32 gSaveDataBase;;
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

void __OSSystemCallVectorStart(void);
void __OSSystemCallVectorEnd(void);

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern s32* FstStart_8036857C;
extern s32 currentDirectory;

extern u16 Scb_803394;

u32 __OSGetResetSWState(void);

extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void* RunQueue_80339478[];
extern s32 RunQueueBits_80368518;
extern s32 RunQueueHint_8036851C;

s32 fn_8020931C(s32 commit, s32 offset);

void fn_80209AE8(u32 arg0) {
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    s32 fn_8020931C(s32, s32);
    extern u16 Scb_80339420[];

    u8 *scb;
    volatile s32 *locked;
    u32 interrupts;
    u32 mode;
    u8 flags;
    u8 pad[8];

    scb = (u8 *)Scb_80339420;
    mode = (arg0 & 1) << 6;

    interrupts = OSDisableInterrupts();
    locked = (volatile s32 *)(scb + 0x48);

    if (*locked != 0) {
        OSRestoreInterrupts(interrupts);
        scb = NULL;
    } else {
        *(u32 *)(scb + 0x44) = interrupts;
        *locked = 1;
    }

    flags = scb[0x11];
    if (mode == (flags & 0x40)) {
        fn_8020931C(0, 0);
    } else {
        scb[0x11] = flags & ~0x40;
        flags = scb[0x11];
        scb[0x11] = flags | mode;
        fn_8020931C(1, 0);
    }
}

s32 fn_80209B8C(s32 arg0) {
    extern u16 Scb_80339420[];
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    s32 fn_8020931C(s32, s32);

    u8 *scb;
    s32 *locked;
    u32 irq;
    u16 result;
    u8 pad[8];

    scb = (u8 *)Scb_80339420;
    irq = OSDisableInterrupts();
    locked = (s32 *)(scb + 0x48);
    if (*locked) {
        OSRestoreInterrupts(irq);
        scb = 0;
    } else {
        *(u32 *)(scb + 0x44) = irq;
        *locked = 1;
        scb += 0x14;
    }
    scb += arg0 << 1;
    result = *(u16 *)(scb + 0x1c);
    fn_8020931C(0, 0x14);
    return result;
}

void fn_80209C10(s32 arg0, u16 arg1) {
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    s32 fn_8020931C(s32, s32);
    extern u16 Scb_80339420[];
    u8 *scb;
    volatile s32 *locked;
    u32 interrupts;
    u16 *entry;
    u8 pad[8];

    scb = (u8 *)Scb_80339420;
    interrupts = OSDisableInterrupts();
    locked = (volatile s32 *)(scb + 0x48);
    if (*locked != 0) {
        OSRestoreInterrupts(interrupts);
        scb = NULL;
    } else {
        *(u32 *)(scb + 0x44) = interrupts;
        *locked = 1;
        scb += 0x14;
    }
    entry = (u16 *)(scb + (arg0 << 1));
    if (*(entry += 14) != arg1) {
        *entry = arg1;
        fn_8020931C(1, 0x14);
    } else {
        fn_8020931C(0, 0x14);
    }
    (void)pad;
}

u16 OSGetGbsMode(void) {
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    s32 fn_8020931C(s32, s32);

    u8 *scb;
    s32 *locked;
    u32 irq;
    u16 result;
    u8 pad[8];

    scb = (u8 *)Scb_80339420;
    irq = OSDisableInterrupts();
    locked = (s32 *)(scb + 0x48);
    if (*locked) {
        OSRestoreInterrupts(irq);
        scb = 0;
    } else {
        *(u32 *)(scb + 0x44) = irq;
        *locked = 1;
        scb += 0x14;
    }
    result = *(u16 *)(scb + 0x28);
    fn_8020931C(0, 0x14);
    return result;
}

void OSSetGbsMode(u16 mode) {
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    s32 fn_8020931C(s32, s32);

    u8 *scb;
    volatile s32 *locked;
    u32 interrupts;
    u16 low;
    u8 pad[8];

    low = mode;
    scb = (u8 *)Scb_80339420;
    if ((u32)(mode & 0x7C00) == 0x5000 || (u32)(low & 0xC0) == 0xC0) {
        mode = 0;
    }

    interrupts = OSDisableInterrupts();
    locked = (volatile s32 *)(scb + 0x48);
    if (*locked != 0) {
        OSRestoreInterrupts(interrupts);
        scb = NULL;
    } else {
        *(u32 *)(scb + 0x44) = interrupts;
        *locked = 1;
        scb += 0x14;
    }

    if ((u16)mode == *(u16 *)(scb + 0x28)) {
        fn_8020931C(0, 0x14);
    } else {
        *(u16 *)(scb + 0x28) = mode;
        fn_8020931C(1, 0x14);
    }
    (void)pad;
}

#pragma push
asm void fn_80209DE4(void) {
entry __OSSystemCallVectorStart
    nofralloc
    mfspr r9, HID0
    ori r10, r9, 0x8
    mtspr HID0, r10
    isync
    sync
    mtspr HID0, r9
    rfi
entry __OSSystemCallVectorEnd
    nop
}
#pragma pop

#pragma scheduling off
#pragma opt_strength_reduction off
