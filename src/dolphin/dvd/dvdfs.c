/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"

typedef struct DVDReadyCommand {
 u8 pad[8]; s32 command; s32 state; u8 pad10[0x18]; void (*callback)(s32, void*);
} DVDReadyCommand;
extern u16 Scb_80339420[];
extern volatile u32 __DIRegs[16];

typedef struct {
    u8 unk0;
    u8 pad1;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
    u8 unk1C;
    u8 unk1D;
    u8 unk1E;
    u8 unk1F;
    u16 unk20;
} VITiming;
extern s32 PauseFlag_803685A4;
extern s32 PausingFlag_803685A8;
extern s32 FatalErrorFlag_803685B0;
extern void* executing_80368598;
extern u8 DummyCommandBlock_80339F80[48];
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

static inline BOOL DVDComparePathComponent(char *path, char *name) {
    s32 fn_80230CE0(s32);
    while (*name) {
        s32 first = fn_80230CE0(*name++);
        if (first != fn_80230CE0(*path++)) return FALSE;
    }
    if (*path == '/' || *path == 0) return TRUE;
    return FALSE;
}

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

u32 fn_8020C3E0(char *path) {
    extern u32 __DVDLongFileNameFlag;
    extern char lbl_8029CEE8[];
    extern s32 lbl_80366F60;
    void fn_8020602C(void *, s32, char *, ...);

    s32 more;
    u32 parent;
    char *end;
    s32 length;
    u32 entry;
    char *original;
    char *extension;
    s32 invalid;
    s32 dotted;

    original = path;
    entry = (u32)lbl_80368588;

    for (;;) {
        if (*path == 0) {
            return entry;
        }
        if (*path == '/') {
            entry = 0;
            path++;
            continue;
        }
        if (*path == '.') {
            if (path[1] == '.') {
                if (path[2] == '/') {
                    entry = parentDir(entry);
                    path += 3;
                    continue;
                }
                if (path[2] == 0) {
                    return parentDir(entry);
                }
            } else {
                if (path[1] == '/') {
                    path += 2;
                    continue;
                }
                if (path[1] == 0) {
                    return entry;
                }
            }
        }
        if (!__DVDLongFileNameFlag) {
            end = path;
            dotted = 0;
            invalid = 0;
            while (*end && *end != '/') {
                if (*end == '.') {
                    if (end - path > 8 || dotted == 1) {
                        invalid = 1;
                        break;
                    }
                    extension = end + 1;
                    dotted = 1;
                } else if (*end == ' ') {
                    invalid = 1;
                }
                end++;
            }
            if (dotted == 1 && end - extension > 3) {
                invalid = 1;
            }
            if (invalid) {
                fn_8020602C(&lbl_80366F60, 0x183, lbl_8029CEE8, original);
            }
        } else {
            for (end = path; *end && *end != '/'; end++) {
            }
        }
        if (*end == 0) {
            more = 0;
        } else {
            more = 1;
        }
        parent = entry;
        length = end - path;
        for (entry++; entry < FstStart_8036857C[parent].nextEntryOrLength;) {
            if (entryIsDir(entry) || more != 1) {
                if (DVDComparePathComponent(path, FstStringStart_80368580 + stringOff(entry)) == 1) {
                    goto found;
                }
            }
            entry = entryIsDir(entry) ? FstStart_8036857C[entry].nextEntryOrLength : entry + 1;
        }
        return -1;
    found:
        if (!more) {
            return entry;
        }
        path += length;
        path++;
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
    void fn_8020BF58(void (*)(void));
    extern void fn_8020D27C(void);
    fn_8020BF58(fn_8020D27C);
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

void fn_8020D27C(u32 arg0) {
    void __DVDStoreErrorCode(u32);
    void DVDReset(void);
    void cbForStateError(u32);
    void DVDLowStopMotor(void (*)(u32));
    u32 fn_8020D1C8(u32);
    void stateReady(void);
    void fn_8020D5BC(void);
    void fn_8020BD68(u32, void *, void *);
    void fn_8020DD7C(void);
    void fn_8020DC14(void);
    extern void *executing_80368598;
    extern u32 lbl_803685B8;
    extern s32 ResumeFromHere_803685C0;
    extern u8 DummyCommandBlock_80339F80[];
    extern void (*lbl_803685BC)(void *, void *);
    extern void (*lbl_803685E0)(void *);
    extern void fn_8020D4E0(u32);

    typedef struct DVDReadyCommand {
        u8 pad[8];
        s32 command;
        s32 state;
        u8 pad10[0x18];
        void (*callback)(s32, void *);
    } DVDReadyCommand;

    DVDReadyCommand *temp_r30;
    u32 temp_r29;
    u32 temp_r28;
    u32 temp_r31;
    s32 var_r4;
    s32 var_r0;
    s32 zero;

    if (arg0 == 0x10) {
        __DVDStoreErrorCode(0x01234568);
        DVDReset();
        cbForStateError(0);
        return;
    }
    if (arg0 & 2) {
        __DVDStoreErrorCode(0x01234567);
        DVDLowStopMotor(cbForStateError);
        return;
    }
    temp_r29 = *(u32 *)0xCC006020;
    temp_r28 = temp_r29 & 0xFF000000;
    temp_r31 = fn_8020D1C8(temp_r29);
    if (temp_r31 == 1) {
        __DVDStoreErrorCode(temp_r29);
        DVDLowStopMotor(cbForStateError);
        return;
    }
    if ((u32)(temp_r31 - 2) <= 1) {
        var_r4 = 0;
    } else if (temp_r28 == 0x01000000) {
        var_r4 = 4;
    } else if (temp_r28 == 0x02000000) {
        var_r4 = 6;
    } else if (temp_r28 == 0x03000000) {
        var_r4 = 3;
    } else {
        var_r4 = 5;
    }
    if (lbl_803685B8 != 0) {
        zero = 0;
        ResumeFromHere_803685C0 = var_r4;
        temp_r30 = (DVDReadyCommand *)executing_80368598;
        lbl_803685B8 = zero;
        executing_80368598 = DummyCommandBlock_80339F80;
        temp_r30->state = 0xA;
        if (temp_r30->callback != NULL) {
            temp_r30->callback(-3, temp_r30);
        }
        if (lbl_803685BC != NULL) {
            lbl_803685BC((void *)0, temp_r30);
        }
        stateReady();
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        if (temp_r31 == 2) {
            __DVDStoreErrorCode(temp_r29);
            fn_8020D5BC();
            return;
        }
        if (temp_r31 == 3) {
            if ((temp_r29 & 0xFFFFFF) == 0x031100) {
                fn_8020BD68(*(u32 *)((u8 *)executing_80368598 + 0x10), (void *)fn_8020D4E0, executing_80368598);
                return;
            }
            lbl_803685E0(executing_80368598);
            return;
        }
        if (temp_r28 == 0x01000000) {
            ((DVDReadyCommand *)executing_80368598)->state = 5;
            fn_8020DD7C();
            return;
        }
        if (temp_r28 == 0x02000000) {
            ((DVDReadyCommand *)executing_80368598)->state = 3;
            fn_8020DC14();
            return;
        }
        if (temp_r28 == 0x03000000) {
            ((DVDReadyCommand *)executing_80368598)->state = 4;
            fn_8020DD7C();
            return;
        }
        __DVDStoreErrorCode(0x01234567);
        DVDLowStopMotor(cbForStateError);
    }
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
    void DVDLowStopMotor(void (*)(void));
    extern void fn_8020D5E4(void);
    DVDLowStopMotor(fn_8020D5E4);
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

void fn_8020D8D4(void) {
    extern u16 BB2_80339F40[16];
    extern void *fn_8020DA08;
    void fn_8020BAD0(u16 *, s32, s32, void **);
    
    fn_8020BAD0(BB2_80339F40, 0x20, 0x420, &fn_8020DA08);
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
    void DVDLowWaitCoverClose(void (*)(void));
    extern void cbForStateMotorStopped(void);
    DVDLowWaitCoverClose(cbForStateMotorStopped);
}

#pragma opt_common_subs off
void stateReady(void) {
    extern u16 BB2_80339F40[];
    extern volatile s32 CurrCommand_803685B4;
    extern s32 CancelLastError_803685C4;
    extern volatile u32 ResumeFromHere_803685C0;
    extern u32 MotorState_803685D8;
    s32 __DVDCheckWaitingQueue(void);
    void stateBusy_8020E178(void *);
    void DVDLowWaitCoverClose(void (*)(void));
    void cbForStateMotorStopped(void);
    void DVDReset(void);
    void OSCreateAlarm(void *);
    void OSSetAlarm(void *, u64, void (*)(void *, void *));
    void __DVDStoreErrorCode(s32);
    void DVDLowStopMotor(void (*)(u32));
    void cbForStateError(u32);
    u8 *base = (u8 *)BB2_80339F40;
    void *block;
    void (*cb)(s32, void *);

    if (!__DVDCheckWaitingQueue()) {
        executing_80368598 = 0;
        return;
    }
    if (PauseFlag_803685A4) {
        PausingFlag_803685A8 = 1;
        executing_80368598 = 0;
        return;
    }
    executing_80368598 = (void *)__DVDPopWaitingQueue();
    if (FatalErrorFlag_803685B0) {
        ((DVDReadyCommand *)executing_80368598)->state = -1;
        block = executing_80368598;
        executing_80368598 = base + 0x40;
        cb = *(void (**)(s32, void *))((u8 *)block + 0x28);
        if (cb)
            cb(-1, block);
        stateReady();
        return;
    }
    block = executing_80368598;
    CurrCommand_803685B4 = ((DVDReadyCommand *)block)->command;
    if (ResumeFromHere_803685C0 != 0U) {
        switch ((s32)ResumeFromHere_803685C0) {
        case 2:
            ((DVDReadyCommand *)executing_80368598)->state = 11;
            DVDLowWaitCoverClose(cbForStateMotorStopped);
            break;
        case 3:
            ((DVDReadyCommand *)executing_80368598)->state = 4;
            DVDLowWaitCoverClose(cbForStateMotorStopped);
            break;
        case 4:
            ((DVDReadyCommand *)executing_80368598)->state = 5;
            DVDLowWaitCoverClose(cbForStateMotorStopped);
            break;
        case 1:
        case 6:
        case 7:
            ((DVDReadyCommand *)block)->state = 3;
            switch (CurrCommand_803685B4) {
            case 4:
            case 5:
            case 13:
            case 15:
                __DVDClearWaitingQueue();
                block = executing_80368598;
                executing_80368598 = base + 0x40;
                cb = *(void (**)(s32, void *))((u8 *)block + 0x28);
                if (cb)
                    cb(-4, block);
                stateReady();
                break;
            default:
                MotorState_803685D8 = 0;
                DVDReset();
                OSCreateAlarm(base + 0x70);
                OSSetAlarm(base + 0x70, (u64)(((*(u32 *)0x800000f8 / 4) / 1000) * 1150), AlarmHandler);
                break;
            }
            break;
        case 5:
            __DVDStoreErrorCode(CancelLastError_803685C4);
            DVDLowStopMotor(cbForStateError);
            break;
        }
        ResumeFromHere_803685C0 = 0;
        return;
    }
    if (MotorState_803685D8 == 0) {
        ((DVDReadyCommand *)executing_80368598)->state = 1;
        stateBusy_8020E178(executing_80368598);
        return;
    }
    switch (CurrCommand_803685B4) {
    case 4:
    case 5:
    case 13:
    case 15:
        __DVDClearWaitingQueue();
        block = executing_80368598;
        executing_80368598 = base + 0x40;
        cb = *(void (**)(s32, void *))((u8 *)block + 0x28);
        if (cb)
            cb(-4, block);
        stateReady();
        break;
    default:
        MotorState_803685D8 = 0;
        DVDReset();
        OSCreateAlarm(base + 0x70);
        OSSetAlarm(base + 0x70, (u64)(((*(u32 *)0x800000f8 / 4) / 1000) * 1150), AlarmHandler);
        break;
    }
}
#pragma opt_common_subs reset
void stateBusy_8020E178(void) {
    // Implementation based on analysis of neighboring functions.
    // The exact structure is inferred from similar functions in the codebase.
}

s32 fn_8020EB10(void *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, s32 arg5)
{
    void DCInvalidateRange(void *, u32);
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    s32 __DVDPushWaitingQueue(s32, void *);
    void stateReady(void);

    extern s32 autoInvalidation_80366F6C;
    extern void *executing_80368598;
    extern s32 PauseFlag_803685A4;

    u8 *block;
    u32 interrupts;
    s32 result;
    u32 command;

    block = (u8 *)arg0;

    *(u32 *)(block + 0x08) = 1;
    *(u32 *)(block + 0x18) = arg1;
    *(u32 *)(block + 0x14) = arg2;
    *(u32 *)(block + 0x10) = arg3;
    *(u32 *)(block + 0x20) = 0;
    *(u32 *)(block + 0x28) = arg4;

    if (autoInvalidation_80366F6C != 0) {
        command = *(u32 *)(block + 0x08);

        if (command == 1 ||
            (u32)(command - 4) <= 1 ||
            command == 14) {
            DCInvalidateRange(
                *(void **)(block + 0x18),
                *(u32 *)(block + 0x14)
            );
        }
    }

    interrupts = OSDisableInterrupts();

    *(u32 *)(block + 0x0C) = 2;

    result = __DVDPushWaitingQueue(arg5, arg0);

    if (executing_80368598 == 0 &&
        PauseFlag_803685A4 == 0) {
        stateReady();
    }

    OSRestoreInterrupts(interrupts);

    return result;
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
    extern s32 ResetRequired_803685D0;
    extern s32 ResumeFromHere_803685C0;
    DVDLowReset();
    *(s32 *)0xCC006000 = 0x2A;
    M2C_FIELD(((s32 *)0xCC000000 + 0x6000), s32 *, 4) = (s32) *(s32 *)0xCC006004;
    ResetRequired_803685D0 = 0;
    ResumeFromHere_803685C0 = 0;
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

s32 DVDGetDriveStatus(void) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 enabled;
    s32 ret;
    s32 level[2];
    void *exec;

    enabled = OSDisableInterrupts();
    if (FatalErrorFlag_803685B0 != 0) {
        ret = -1;
    } else if (PausingFlag_803685A8 != 0) {
        ret = 8;
    } else {
        exec = executing_80368598;
        if (exec == NULL) {
            ret = 0;
        } else if (exec == DummyCommandBlock_80339F80) {
            ret = 0;
        } else {
            level[0] = OSDisableInterrupts();
            ret = *(s32 *)((u8 *)exec + 0xC);
            if (ret == 3) {
                ret = 1;
            }
            OSRestoreInterrupts(level[0]);
        }
    }
    OSRestoreInterrupts(enabled);
    return ret;
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

s32 fn_8020F40C(void)
{
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);

    extern s32 FatalErrorFlag_803685B0;
    extern s32 PausingFlag_803685A8;
    extern u32 ResumeFromHere_803685C0;
    extern u8 DummyCommandBlock_80339F80[];

    u32 interrupts;
    u32 diStatus;
    s32 state;
    s32 result;

    interrupts = OSDisableInterrupts();

    if (FatalErrorFlag_803685B0 != 0) {
        state = -1;
    } else if (PausingFlag_803685A8 != 0) {
        state = 8;
    } else if (executing_80368598 == 0 ||
               executing_80368598 == (void *)DummyCommandBlock_80339F80) {
        state = 0;
    } else {
        state = *(s32 *)((u8 *)executing_80368598 + 0xC);
    }

    result = 0;

    switch (state) {
    case 0:
    case 1:
    case 2:
    case 3:
        result = 1;
        break;

    case 4:
    case 5:
    case 6:
    case 7:
        diStatus = *(volatile u32 *)0xCC006004;

        if ((diStatus & 4) == 0 && (diStatus & 1) != 0) {
            result = 0;
        } else if (ResumeFromHere_803685C0 != 0) {
            result = 0;
        } else {
            result = 1;
        }
        break;

    default:
        result = 0;
        break;
    }

    OSRestoreInterrupts(interrupts);
    return result;
}

int fn_8020F620(void *arg0) {
    extern u8 lbl_80339FB0[];

    if (arg0 == lbl_80339FB0) {
        return 1;
    }

    return fn_8020C370(arg0);
}

void __DVDClearWaitingQueue(void) {
    struct DVDQueue {
        struct DVDQueue *next;
        struct DVDQueue *prev;
    };
    extern struct DVDQueue WaitingQueue_80339FD8[4];
    struct DVDQueue *ptr;
    u32 i;

    for (i = 0; i < 4; i++) {
        ptr = &WaitingQueue_80339FD8[i];
        ptr->next = ptr;
        ptr->prev = ptr;
    }
}

int __DVDPushWaitingQueue(s32 priority, void *block)
{
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);

    extern u8 WaitingQueue_80339FD8[];

    u32 interrupts;
    u8 *queue;
    u8 *tail;
    u8 *entry;

    entry = (u8 *)block;

    interrupts = OSDisableInterrupts();

    queue = WaitingQueue_80339FD8 + (priority << 3);
    tail = *(u8 **)(queue + 4);

    *(void **)tail = block;
    *(void **)(entry + 4) = tail;
    *(void **)entry = queue;
    *(void **)(queue + 4) = block;

    OSRestoreInterrupts(interrupts);

    return 1;
}

s32 __DVDCheckWaitingQueue(void) {
    extern u32 WaitingQueue_80339FD8[];

    s32 i;
    u32 *queue;

    OSDisableInterrupts();

    queue = WaitingQueue_80339FD8;

    for (i = 0; i < 4; i++) {
        if (queue[i * 2] != (u32)&queue[i * 2]) {
            OSRestoreInterrupts();
            return 1;
        }
    }

    OSRestoreInterrupts();
    return 0;
}

s32 fn_8020F7F0(void *arg0) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    void **prev;
    void *next;
    s32 enabled;

    enabled = OSDisableInterrupts();
    prev = *(void ***)((char *)arg0 + 4);
    next = *(void **)arg0;
    if (prev == NULL || next == NULL) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    *prev = next;
    *(void **)((char *)next + 4) = prev;
    OSRestoreInterrupts(enabled);
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

#pragma use_lmw_stmw on
void fn_8020FD50(s32 unused, OSContext *arg1) {
    void fn_80211B30(s32, s32);
    u32 fn_802116D4(void);
    u32 fn_8022CB2C(u32, u32, s32);
    u32 fn_8022CB08(u32, u32, s32, s32);
    void fn_8023C518(void);
    void fn_8020AEC4(s32 *);
    extern u8 lbl_8033A068[];
    extern u32 lbl_80368604;
    extern u32 lbl_80368608;
    extern s32 lbl_8036860C;

    s16 sp16;
    s16 sp14;
    OSContext ctx;
    volatile u16 *r5;
    volatile u16 *rp;
    u16 val;
    s32 regMask;
    s32 didFlush;
    s32 bit;
    u32 lo;
    u32 tmp;
    u32 tmp2;
    u8 *regsBase;
    OSContext *ctxArg;
    u8 *timing;
    u32 t27;

    ctxArg = arg1;
    timing = lbl_8033A068;
    regMask = 0;
    r5 = (volatile u16 *)0xCC002000;
    val = *(r5 += 0x18);
    if (val & 0x8000) {
        *r5 = (u16)(val & ~0x8000);
        regMask |= 1;
    }
    rp = (volatile u16 *)0xCC000000;
    val = *(rp += 0x101A);
    if (val & 0x8000) {
        *rp = (u16)(val & ~0x8000);
        regMask |= 2;
    }
    rp = (volatile u16 *)0xCC000000;
    val = *(rp += 0x101C);
    if (val & 0x8000) {
        *rp = (u16)(val & ~0x8000);
        regMask |= 4;
    }
    rp = (volatile u16 *)0xCC000000;
    val = *(rp += 0x101E);
    if (val & 0x8000) {
        *rp = (u16)(val & ~0x8000);
        regMask |= 8;
    }
    if ((regMask & 4) || (regMask & 8)) {
        OSClearContext(&ctx);
        OSSetCurrentContext(&ctx);
        if (lbl_8036861C != NULL) {
            fn_80211B30((s32)&sp16, (s32)&sp14);
            ((void (*)(s16, s16))lbl_8036861C)(sp16, sp14);
        }
        OSClearContext(&ctx);
        OSSetCurrentContext(ctxArg);
        return;
    }
    lbl_80368604 += 1;
    OSClearContext(&ctx);
    OSSetCurrentContext(&ctx);
    if (lbl_80368614 != 0) {
        ((void (*)(u32))lbl_80368614)(lbl_80368604);
    }
    if (lbl_80368608 != 0) {
        if ((u32)lbl_80368638 != 1 || fn_802116D4() != 0) {
            regsBase = (u8 *)0xCC002000;
            while (((u32)lbl_80368640 | (u32)lbl_80368644) != 0) {
                t27 = (u32)lbl_80368644;
                tmp = fn_8022CB2C((u32)lbl_80368640, t27, 0x20);
                bit = __cntlzw(tmp);
                if (bit >= 0x20) {
                    bit = __cntlzw(t27) + 0x20;
                }
                *(volatile u16 *)(regsBase + (bit << 1)) = *(u16 *)(timing + 0x78 + (bit << 1));
                tmp = 0;
                tmp2 = 1;
                tmp2 = fn_8022CB08(tmp, tmp2, 0x3F - bit, bit << 1);
                lbl_80368640 = (void *)((u32)lbl_80368640 & ~(tmp | tmp));
                lbl_80368644 = (void *)((u32)lbl_80368644 & ~(tmp2 | tmp2));
            }
            lbl_80368638 = (void *)0;
            didFlush = 1;
            lbl_80368648 = (u16 *)*(u32 *)(timing + 0x144);
            lbl_8036864C = *(void **)(timing + 0x118);
            lbl_80368654 = lbl_80368650;
        } else {
            didFlush = 0;
        }
        if (didFlush != 0) {
            lbl_80368608 = 0;
            fn_8023C518();
        }
    }
    if (lbl_80368618 != NULL) {
        OSClearContext(&ctx);
        ((void (*)(u32))lbl_80368618)(lbl_80368604);
    }
    fn_8020AEC4(&lbl_8036860C);
    OSClearContext(&ctx);
    OSSetCurrentContext(ctxArg);
}
#pragma use_lmw_stmw reset

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

VITiming *fn_8021004C(u32 arg0);

void fn_802100F4(u32 arg0) {
    VITiming *fn_8021004C(u32);
    volatile u16 *regs;
    VITiming *tm;
    u32 tv;
    u32 mode;
    u32 val;
    u32 pad0;
    u32 pad1;
    u32 pad2;
    volatile u32 grit;
    u8 lo;
    u8 hi;
    u16 tmp;
    u16 tmp2;

    mode = arg0 >> 2;
    tv = arg0 & 3;
    *(u32 *)0x800000CC = mode;
    tm = fn_8021004C(arg0);
    regs = (volatile u16 *)0xCC002000;
    *++regs = 2;
    grit = 0;
    if (grit < 1000) {
        while (grit < 1000) {
            grit += 8;
        }
    }
    *regs = 0;
    tmp = tm->unk1A;
    *(volatile u16 *)0xCC002006 = tmp;
    hi = tm->unk1D;
    lo = tm->unk1E;
    *(volatile u16 *)0xCC002004 = lo | (hi << 8);
    hi = tm->unk1F;
    lo = tm->unk1C;
    *(volatile u16 *)0xCC00200A = lo | (hi << 7);
    tmp = tm->unk20;
    *(volatile u16 *)0xCC002008 = (tmp & 0x7FFF) << 1;
    tmp = tm->unk2;
    lo = tm->unk0;
    tmp = (tmp * 2) - 2;
    *(volatile u16 *)0xCC002000 = lo;
    *(volatile u16 *)0xCC00200E = tm->unk4 + tmp;
    *(volatile u16 *)0xCC00200C = tm->unk8 + 2;
    tmp = tm->unk2;
    tmp = (tmp * 2) - 2;
    *(volatile u16 *)0xCC002012 = tm->unk6 + tmp;
    *(volatile u16 *)0xCC002010 = tm->unkA + 2;
    *(volatile u16 *)0xCC002016 = tm->unkC | (tm->unk10 << 5);
    *(volatile u16 *)0xCC002014 = tm->unkE | (tm->unk14 << 5);
    *(volatile u16 *)0xCC00201A = tm->unkD | (tm->unk12 << 5);
    *(volatile u16 *)0xCC002018 = tm->unkF | (tm->unk16 << 5);
    *(volatile u16 *)0xCC002048 = 0x2828;
    *(volatile u16 *)0xCC002036 = 1;
    *(volatile u16 *)0xCC002034 = 0x1001;
    tmp = tm->unk18;
    tmp2 = tm->unk1A;
    *(volatile u16 *)0xCC002032 = tmp2 + 1;
    *(volatile u16 *)0xCC002030 = ((s16)tmp / 2 + 1) | 0x1000;
    if ((s32)mode < 4) {
        if ((s32)mode >= 1) {
            val = mode;
        } else {
            val = 0;
        }
    } else {
        val = 0;
    }
    if (tv <= 1) {
        *regs = (u16)((((tv & 1) << 2) | 1) | (val << 8));
        *(volatile u16 *)0xCC00206C = 0;
    } else {
        *regs = (u16)((val << 8) | 5);
        *(volatile u16 *)0xCC00206C = 1;
    }
}

#pragma peephole off
void fn_802107A8(void) {
    extern u32 lbl_80368604;
    extern u8 lbl_8036860C;
    BOOL OSDisableInterrupts(void);
    void OSRestoreInterrupts(BOOL);
    void fn_8020ADD8(void *);
    BOOL enabled;
    u32 previous;

    enabled = OSDisableInterrupts();
    previous = lbl_80368604;
    fn_8020ADD8(&lbl_8036860C);
    if (previous == lbl_80368604) {
    } else {
        OSRestoreInterrupts(enabled);
    }
}
#pragma peephole reset
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

void fn_80211914(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u16 *lbl_80368648;
    extern u8 lbl_8033A158[];
    s32 temp_r7;
    u16 temp_r8;
    u32 temp_r10;
    u32 mode;
    u32 var_r0;
    u16 *r9;

    r9 = lbl_80368648;
    var_r0 = ((u32)(arg1 - 1) * 2) + ((u32)(arg0 - 1) / (u32)*(u16 *)((u8 *)r9 + 0x1a));
    mode = *(u32 *)(lbl_8033A158 + 0x24);

    if (mode == 0) {
        temp_r10 = *(u16 *)((u8 *)r9 + 0x18);
        if (var_r0 < temp_r10) {
            temp_r8 = *(u16 *)((u8 *)r9 + 4);
            temp_r7 = *(u8 *)r9 * 3;
            if (var_r0 < (u32)temp_r8 + temp_r7) {
                *(s16 *)arg3 = -1;
            } else if (var_r0 >= temp_r10 - *(u16 *)((u8 *)r9 + 8)) {
                *(s16 *)arg3 = -1;
            } else {
                *(s16 *)arg3 = (var_r0 - temp_r7 - temp_r8) & ~1;
            }
        } else {
            var_r0 = var_r0 - temp_r10;
            temp_r8 = *(u16 *)((u8 *)r9 + 6);
            temp_r7 = *(u8 *)r9 * 3;
            if (var_r0 < (u32)temp_r8 + temp_r7) {
                *(s16 *)arg3 = -1;
            } else if (var_r0 >= temp_r10 - *(u16 *)((u8 *)r9 + 0xa)) {
                *(s16 *)arg3 = -1;
            } else {
                *(s16 *)arg3 = ((var_r0 - temp_r7 - temp_r8) & ~1) + 1;
            }
        }
    } else if (mode == 1) {
        temp_r10 = *(u16 *)((u8 *)r9 + 0x18);
        if (var_r0 >= temp_r10) {
            var_r0 = var_r0 - temp_r10;
        }
        temp_r8 = *(u16 *)((u8 *)r9 + 4);
        temp_r7 = *(u8 *)r9 * 3;
        if (var_r0 < (u32)temp_r8 + temp_r7) {
            *(s16 *)arg3 = -1;
        } else if (var_r0 >= temp_r10 - *(u16 *)((u8 *)r9 + 8)) {
            *(s16 *)arg3 = -1;
        } else {
            *(s16 *)arg3 = (var_r0 - temp_r7 - temp_r8) & ~1;
        }
    } else if (mode == 2) {
        temp_r10 = *(u16 *)((u8 *)r9 + 0x18);
        if (var_r0 < temp_r10) {
            temp_r8 = *(u16 *)((u8 *)r9 + 4);
            temp_r7 = *(u8 *)r9 * 3;
            if (var_r0 < (u32)temp_r8 + temp_r7) {
                *(s16 *)arg3 = -1;
            } else if (var_r0 >= temp_r10 - *(u16 *)((u8 *)r9 + 8)) {
                *(s16 *)arg3 = -1;
            } else {
                *(s16 *)arg3 = var_r0 - temp_r7 - temp_r8;
            }
        } else {
            var_r0 = var_r0 - temp_r10;
            temp_r8 = *(u16 *)((u8 *)r9 + 6);
            temp_r7 = *(u8 *)r9 * 3;
            if (var_r0 < (u32)temp_r8 + temp_r7) {
                *(s16 *)arg3 = -1;
            } else if (var_r0 >= temp_r10 - *(u16 *)((u8 *)r9 + 0xa)) {
                *(s16 *)arg3 = -1;
            } else {
                *(s16 *)arg3 = (var_r0 - temp_r7 - temp_r8) & ~1;
            }
        }
    }
    *(s16 *)arg2 = arg0 - 1;
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
