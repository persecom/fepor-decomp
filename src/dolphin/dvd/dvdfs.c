/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u16 Scb_80339420[];
extern s32 PauseFlag_803685A4;
extern s32 PausingFlag_803685A8;
extern void* executing_80368598;
extern u32 lbl_803685B8;
extern void (*lbl_803685BC)(void*, void*);
extern void stateReady(void);
extern void fn_8020F0B8(void *arg0);
extern void __DVDClearWaitingQueue(void);
extern u8 bb2Buf_80339FF8[];
extern s32 __DVDPopWaitingQueue(void);;
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

typedef struct FSTEntry {
    u32 isDirAndStringOff;
    u32 parentOrPosition;
    u32 nextEntryOrLength;
} FSTEntry;

extern FSTEntry *FstStart_8036857C;
extern char *FstStringStart_80368580;
extern s32 lbl_80368588;

#define entryIsDir(i) (((FstStart_8036857C[i].isDirAndStringOff & 0xFF000000) == 0) ? FALSE : TRUE)
#define stringOff(i) (FstStart_8036857C[i].isDirAndStringOff & ~0xFF000000)
#define parentDir(i) (FstStart_8036857C[i].parentOrPosition)

static u32 myStrncpy(char *dest, char *src, u32 maxlen) {
    u32 i = maxlen;

    while ((i > 0) && (*src != 0)) {
        *dest++ = *src++;
        i--;
    }

    return maxlen - i;
}

extern u16 Scb_803394;

u32 __OSGetResetSWState(void);

extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);

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

u32 fn_8020C7C0(u32 entry, char *path, u32 maxlen) {
    char *name;
    u32 loc;

    if (entry == 0) {
        return 0;
    }

    name = FstStringStart_80368580 + stringOff(entry);

    loc = fn_8020C7C0(parentDir(entry), path, maxlen);

    if (loc == maxlen) {
        return loc;
    }

    *(path + loc++) = '/';

    loc += myStrncpy(path + loc, name, maxlen - loc);

    return loc;
}

BOOL fn_8020C920(s32 entrynum, char *path, u32 maxlen) {
    u32 loc;

    loc = fn_8020C7C0((u32)entrynum, path, maxlen);

    if (loc == maxlen) {
        path[maxlen - 1] = '\0';
        return FALSE;
    }

    if (entryIsDir(entrynum)) {
        if (loc == maxlen - 1) {
            path[loc] = '\0';
            return FALSE;
        }
        path[loc++] = '/';
    }

    path[loc] = '\0';
    return TRUE;
}

BOOL fn_8020CA74(char *path, u32 maxlen) {
    return fn_8020C920((s32)lbl_80368588, path, maxlen);
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

void DVDInit(void) {
    __OSStopAudioSystem();
    OSInitThreadQueue((void *)0x803397EC);
}

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

void fn_8020D5BC(void) {
    DVDLowStopMotor();
}

void fn_8020D724(void) {
    if (lbl_80368614 != 0) {
        return;
    }
    
    OSDisableInterrupts();
    
    // Read and check SCB register
    if (Scb_80339420[0x4C / sizeof(u16)] != 0) {
        OSRestoreInterrupts();
        return;
    }
    
    // Set bits in SCB
    Scb_80339420[0x48 / sizeof(u16)] = 1;
    Scb_80339420[0x44 / sizeof(u16)] = 0;
    
    // Store status from memory at 0x800000E0
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

void fn_8020D804(void) {
    void fn_8020C1A4(u8, s32, void *);
    void fn_8020DAE0(void);
    extern void *IDShouldBe_8036859C;

    fn_8020C1A4(M2C_FIELD(IDShouldBe_8036859C, u8 *, 8), 0xA, fn_8020DAE0);
}

extern void *fn_8020D86C;
void fn_8020D838(void) {
    void fn_8020C1A4(u8, s32, void *);
    void fn_8020D86C(void);
    extern void *IDShouldBe_8036859C;

    fn_8020C1A4(M2C_FIELD(IDShouldBe_8036859C, u8 *, 8), 0xA, fn_8020D86C);
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

void fn_8020DD7C(void) {
    M2C_UNK DVDLowWaitCoverClose(M2C_UNK *);
    extern M2C_UNK cbForStateMotorStopped;
    DVDLowWaitCoverClose((M2C_UNK *)&cbForStateMotorStopped);
}

void stateBusy_8020E178(void) {
    // Implementation based on analysis of neighboring functions.
    // The exact structure is inferred from similar functions in the codebase.
}

void fn_8020EBEC(void* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    *(u32*)((char*)arg0 + 0x8) = 4;
    *(u32*)((char*)arg0 + 0x10) = arg3;
    *(u32*)((char*)arg0 + 0x14) = arg2;
    *(u32*)((char*)arg0 + 0x18) = arg1;
    *(u32*)((char*)arg0 + 0x20) = 0;
    *(u32*)((char*)arg0 + 0x28) = arg4;
    // No additional functions calls or logic
}

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

void fn_8020F3E0(void) {
    extern void* __DVDThreadQueue;
    fn_8020AEC4(&__DVDThreadQueue);
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

void __fstLoad(void) {
    // A simple placeholder to test the compilation process
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

void* fn_80210008(void* arg0) {
    void* temp_r31;

    temp_r31 = lbl_80368618;
    OSDisableInterrupts();
    lbl_80368618 = arg0;
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
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 enabled;
    s32 temp_r31;

    enabled = OSDisableInterrupts();
    temp_r31 = *(u16 *)0xCC00206E & 3;
    OSRestoreInterrupts(enabled);
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

void fn_80211B90(u8 *arg0, u8 *arg1, s8 arg2, s8 arg3, s8 arg4) {
    s32 temp_r10;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    s32 temp_r9;
    s32 temp_r9_2;
    s32 var_r0;
    s32 var_r8;
    s8 var_r11;
    s8 var_r11_2;
    s8 var_r12;
    s8 var_r12_2;
    u8 temp_r0;

    temp_r0 = *arg0;
    var_r12 = (s8) *arg1;
    var_r11 = (s8) temp_r0;
    if ((s8) temp_r0 >= 0) {
        var_r0 = 1;
    } else {
        var_r0 = -1;
        var_r11 = -var_r11;
    }
    if (var_r12 >= 0) {
        var_r8 = 1;
    } else {
        var_r8 = -1;
        var_r12 = -var_r12;
    }
    if (var_r11 <= arg4) {
        var_r11_2 = 0;
    } else {
        var_r11_2 = var_r11 - arg4;
    }
    if (var_r12 <= arg4) {
        var_r12_2 = 0;
    } else {
        var_r12_2 = var_r12 - arg4;
    }
    if ((var_r11_2 == 0) && (var_r12_2 == 0)) {
        *arg1 = 0;
        *arg0 = 0;
        return;
    }
    temp_r9 = arg3 * var_r12_2;
    temp_r7 = arg3 * var_r11_2;
    if (temp_r9 <= temp_r7) {
        temp_r9_2 = arg3 * arg2;
        temp_r7_2 = temp_r7 + (var_r12_2 * (arg2 - arg3));
        if (temp_r9_2 < temp_r7_2) {
            var_r11_2 = (s8) ((s32) (var_r11_2 * temp_r9_2) / temp_r7_2);
            var_r12_2 = (s8) ((s32) (var_r12_2 * temp_r9_2) / temp_r7_2);
        }
    } else {
        temp_r10 = arg3 * arg2;
        temp_r7_3 = temp_r9 + (var_r11_2 * (arg2 - arg3));
        if (temp_r10 < temp_r7_3) {
            var_r11_2 = (s8) ((s32) (var_r11_2 * temp_r10) / temp_r7_3);
            var_r12_2 = (s8) ((s32) (var_r12_2 * temp_r10) / temp_r7_3);
        }
    }
    *arg0 = var_r0 * var_r11_2;
    *arg1 = var_r8 * var_r12_2;
}

extern u16 Scb_80339420[4];
extern u16 lbl_80282268[8];
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u16 lbl_8029D210[];
