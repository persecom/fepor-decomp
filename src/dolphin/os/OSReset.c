/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern s32 lbl_803682F0;;
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

volatile u32 __PIRegs[12] : 0xCC003000;

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

void OSRegisterResetFunction(OSResetFunctionInfo *info) {
    OSResetFunctionInfo *tmp;
    OSResetFunctionInfo *iter;

    for (iter = ResetFunctionQueue_803684E8.head; iter && iter->priority <= info->priority; iter = iter->next)
        ;

    if (iter == NULL) {
        tmp = ResetFunctionQueue_803684E8.tail;
        if (tmp == NULL) {
            ResetFunctionQueue_803684E8.head = info;
        } else {
            tmp->next = info;
        }
        info->prev = tmp;
        info->next = NULL;
        ResetFunctionQueue_803684E8.tail = info;
        return;
    }

    info->next = iter;
    tmp = iter->prev;
    iter->prev = info;
    info->prev = tmp;
    if (tmp == NULL) {
        ResetFunctionQueue_803684E8.head = info;
        return;
    }
    tmp->next = info;
}

BOOL __OSCallResetFunctions(BOOL final) {
    OSResetFunctionInfo *info;
    s32 err = 0;
    u32 priority = 0;

    for (info = ResetFunctionQueue_803684E8.head; info; info = info->next) {
        if (err && priority != info->priority)
            break;
        err |= !info->func(final);
        priority = info->priority;
    }
    err |= !__OSSyncSram();
    if (err) {
        return FALSE;
    }
    return TRUE;
}

u32 OSGetResetCode(void) {
    extern u32 lbl_803393B0[8];
    volatile u32 *piRegs = (volatile u32 *)0xCC003000;

    if (lbl_803393B0[0] != 0) {
        return 0x80000000 | lbl_803393B0[1];
    }
    return (piRegs[9] & ~7) >> 3;
}

