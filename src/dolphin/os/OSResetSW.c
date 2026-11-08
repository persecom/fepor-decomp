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
void __OSResetSWInterruptHandler(void) {
    u64 time1;
    u64 time2;
    u32 temp_r29;
    s32 r5, r0, r3;
    u32 addr;

    time1 = __OSGetSystemTime();
    lbl_80368514 = (u32)time1;
    lbl_80368510 = (u32)time1;

    temp_r29 = ((*(u32*)0x800000F8 / 500000) * 0x64) >> 3;

loop_1:
    time2 = __OSGetSystemTime();
    r5 = (s32)(time2 - lbl_80368510);
    r5 = r5 ^ 0x80000000;
    
    // The original assembly checks if the difference is less than temp_r29 using a two-word compare
    if ((u32)r5 < temp_r29) {
        if (!(*(u32*)0xCC003000 & 0x10000)) {
            goto loop_1;
        }
    }

    if (*(u32*)0xCC003000 & 0x10000) {
        lbl_803684FC = 1;
        lbl_80368500 = 1;
        
        __OSMaskInterrupts(0x200);
        
        if (lbl_803684F8 != NULL) {
            void (*temp_lr)() = lbl_803684F8;
            lbl_803684F8 = NULL;
            temp_lr();
        }
    }

    *(u32*)0xCC003000 = 2;
}

s32 fn_80209010(s32 arg0, s32 arg1, s32 arg2) {
    s32 EXIDeselect(M2C_UNK);
    s32 EXIImm(M2C_UNK, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
    s32 EXILock(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *);
    s32 EXISelect(M2C_UNK, M2C_UNK, M2C_UNK);
    s32 EXISync(M2C_UNK);
    M2C_UNK EXIUnlock(M2C_UNK);
    s32 fn_80238E78(M2C_UNK, s32, s32, M2C_UNK);
    extern M2C_UNK fn_80208FB0;
    s32 sp14;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r31_3;
    s32 temp_r31_4;

    if (EXILock(0, 1, &fn_80208FB0, &fn_80208FB0) == 0) {
        return 0;
    }
    if (EXISelect(0, 1, 3) == 0) {
        EXIUnlock(0);
        return 0;
    }
    sp14 = ((arg1 << 6) + 0x100) | 0xA0000000;
    temp_r31_2 = EXIImm(0, &sp14, 4, 1, 0) == 0;
    temp_r31_3 = temp_r31_2 | (EXISync(0) == 0);
    temp_r31_4 = temp_r31_3 | (fn_80238E78(0, arg0, arg2, 1) == 0);
    temp_r31 = temp_r31_4 | (EXIDeselect(0) == 0);
    EXIUnlock(0);
    return temp_r31 == 0;
}

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
    return M2C_FIELD(&Scb_80339420, s32 *, 0x4C);
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
        extern u16 RunQueueBits_80368518;
        s32 shift = 0x1F - M2C_FIELD(arg0, s32 *, 0x2D0);
        RunQueueBits_80368518 &= ~(1 << shift);
    }

    M2C_FIELD(arg0, void **, 0x2DC) = NULL;
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

void __init_user(void) {
    __init_cpp();
}

extern s32* FstStart_8036857C;
extern s32 lbl_80368588;

extern u16 Scb_803394;

u32 __OSGetResetSWState(void);

extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);
extern void* RunQueue_80339478[];
extern s32 RunQueueBits_80368518;
extern s32 RunQueueHint_8036851C;
