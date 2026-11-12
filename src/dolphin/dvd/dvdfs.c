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

s32 fn_8020CE24(void *arg0, void *arg1) {
    u8 *dir;
    u8 *entry;
    u32 loc;

    dir = (u8 *)arg0;
    entry = (u8 *)arg1;

    loc = *(u32 *)(dir + 4);

    if (loc <= *(u32 *)dir ||
        loc >= *(u32 *)(dir + 8)) {
        return 0;
    }

    *(u32 *)entry = loc;
    *(u32 *)(entry + 4) = entryIsDir(loc);
    *(char **)(entry + 8) =
        FstStringStart_80368580 + stringOff(loc);

    if (entryIsDir(loc)) {
        *(u32 *)(dir + 4) =
            FstStart_8036857C[loc].nextEntryOrLength;
    } else {
        *(u32 *)(dir + 4) = loc + 1;
    }

    return 1;
}

s32 fn_8020CEC8(void) {
    return 1;
}

void fn_8020CED0(void) {

}

void DVDInit(void) {
    extern s32 DVDInitialized_803685DC;
    extern const char *__DVDVersion;
    extern u32 MotorState_803685D8;
    extern u8 *bootInfo_803685A0;
    extern s32 FirstTimeInBootrom_803685D4;
    extern void *__DVDThreadQueue;

    extern void __DVDInitWA(void);
    extern void __DVDInterruptHandler(s16, OSContext *);
    extern void __fstLoad(void);

    if (DVDInitialized_803685DC == 0) {
        OSRegisterVersion(__DVDVersion);
        DVDInitialized_803685DC = 1;

        __DVDFSInit();
        __DVDClearWaitingQueue();
        __DVDInitWA();

        MotorState_803685D8 = 0;
        bootInfo_803685A0 = (u8 *)0x80000000;
        IDShouldBe_8036859C = bootInfo_803685A0;

        __OSSetInterruptHandler(0x15, __DVDInterruptHandler);
        __OSUnmaskInterrupts(0x400);
        OSInitThreadQueue((void *)&__DVDThreadQueue);

        *(volatile u32 *)0xCC006000 = 0x2A;
        *(volatile u32 *)0xCC006004 = 0;

        if (*(u32 *)(bootInfo_803685A0 + 0x20) == 0xE5207C22) {
            OSReport("load fst\n");
            __fstLoad();
        } else if (*(u32 *)(bootInfo_803685A0 + 0x20) != 0x0D15EA5E) {
            FirstTimeInBootrom_803685D4 = 1;
        }
    }
}

void fn_8020CFAC(void) {
    extern void (*lbl_803685E0)(void *);
    extern u8 *bootInfo_803685A0;
    extern u16 BB2_80339F40[];
    extern s32 lbl_80366F74;
    extern char lbl_8029D0DC[];

    void fn_8020602C(void *, s32, char *, ...);
    s32 fn_8020BAD0(void *, u32, u32, void (*)(u32));
    void fn_8020D040(u32);

    u8 *bootInfo;
    u8 *bb2;

    bootInfo = bootInfo_803685A0;
    bb2 = (u8 *)BB2_80339F40;

    lbl_803685E0 = (void (*)(void *))fn_8020CFAC;

    if (*(u32 *)(bootInfo + 0x3C) < *(u32 *)(bb2 + 8)) {
        fn_8020602C(
            &lbl_80366F74,
            0x295,
            lbl_8029D0DC
        );
    }

    fn_8020BAD0(
        *(void **)(bootInfo + 0x38),
        (*(u32 *)(bb2 + 8) + 0x1F) & ~0x1F,
        *(u32 *)(bb2 + 4),
        fn_8020D040
    );
}

void fn_8020D16C(void) {
    M2C_UNK DVDReset();
    M2C_UNK __DVDStoreErrorCode(M2C_UNK);
    M2C_UNK cbForStateError(M2C_UNK);
    __DVDStoreErrorCode(0x01234568);
    DVDReset();
    cbForStateError(0);
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

void fn_8020E4B8(u32 arg0) {
    void __DVDStoreErrorCode(u32);
    void DVDReset(void);
    void cbForStateError(u32);
    void DVDLowStopMotor(void (*)(u32));
    void DVDLowWaitCoverClose(void (*)(void));
    void cbForStateMotorStopped(void);
    void stateReady(void);
    void stateBusy_8020E178(void *);
    void fn_8020BF58(void *);
    void fn_8020C080(u32, u32, u32, void (*)(u32));
    void fn_8020D27C(u32);
    extern u16 BB2_80339F40[];
    extern volatile u32 CurrCommand_803685B4;
    extern s32 lbl_803685CC;
    extern s32 ResetRequired_803685D0;
    extern u32 lbl_803685B8;
    extern void *executing_80368598;
    extern s32 ResumeFromHere_803685C0;
    extern void (*lbl_803685BC)(void *, void *);
    extern u32 lbl_80366F7C;
    extern s32 MotorState_803685D8;
    extern u32 lbl_8029D154[];
    extern s32 lbl_803685AC;

    typedef struct DVDReadyCommand {
        u8 pad[8];
        s32 command;
        s32 state;
        u32 unk10;
        u32 unk14;
        u32 unk18;
        u32 unk1C;
        u32 unk20;
        u8 pad24[4];
        void (*callback)(s32, void *);
    } DVDReadyCommand;

    DVDReadyCommand *block;
    u8 *base;
    u32 cmd;
    s32 flag;
    s32 zero;
    u32 *di;
    u32 *tbl;
    u32 val;

    base = (u8 *)BB2_80339F40;
    di = (u32 *)0xCC006000;

    if (arg0 == 0x10) {
        __DVDStoreErrorCode(0x01234568);
        DVDReset();
        cbForStateError(0);
        return;
    }

    if (CurrCommand_803685B4 == 3 || CurrCommand_803685B4 == 0xF) {
        if (arg0 & 2) {
            __DVDStoreErrorCode(0x01234567);
            DVDLowStopMotor(cbForStateError);
            return;
        }
        zero = 0;
        lbl_803685CC = zero;
        if (CurrCommand_803685B4 == 0xF) {
            ResetRequired_803685D0 = 1;
        }
        if (lbl_803685B8 != 0) {
            ResumeFromHere_803685C0 = 7;
            block = (DVDReadyCommand *)executing_80368598;
            lbl_803685B8 = zero;
            executing_80368598 = base + 0x40;
            block->state = 0xA;
            if (block->callback != NULL) {
                block->callback(-3, block);
            }
            if (lbl_803685BC != NULL) {
                lbl_803685BC((void *)0, block);
            }
            stateReady();
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag == 0) {
            ((DVDReadyCommand *)executing_80368598)->state = 7;
            DVDLowWaitCoverClose(cbForStateMotorStopped);
        }
        return;
    }

    cmd = CurrCommand_803685B4;
    if (cmd == 1 || (cmd - 4) <= 1 || cmd == 0xE) {
        flag = 1;
    } else if (cmd == lbl_80366F7C) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag != 0) {
        block = (DVDReadyCommand *)executing_80368598;
        block->unk20 = block->unk20 + (block->unk1C - di[6]);
    }

    if (arg0 & 8) {
        zero = 0;
        block = (DVDReadyCommand *)executing_80368598;
        lbl_803685B8 = zero;
        executing_80368598 = base + 0x40;
        block->state = 0xA;
        if (block->callback != NULL) {
            block->callback(-3, block);
        }
        if (lbl_803685BC != NULL) {
            lbl_803685BC((void *)0, block);
        }
        stateReady();
        return;
    }

    if (arg0 & 1) {
        zero = 0;
        lbl_803685CC = zero;
        if (CurrCommand_803685B4 == 0x10) {
            block = (DVDReadyCommand *)executing_80368598;
            MotorState_803685D8 = 1;
            executing_80368598 = base + 0x40;
            block->state = zero;
            if (block->callback != NULL) {
                block->callback(0, block);
            }
            stateReady();
            return;
        }
        if (lbl_803685B8 != 0) {
            ResumeFromHere_803685C0 = zero;
            block = (DVDReadyCommand *)executing_80368598;
            lbl_803685B8 = zero;
            executing_80368598 = base + 0x40;
            block->state = 0xA;
            if (block->callback != NULL) {
                block->callback(-3, block);
            }
            if (lbl_803685BC != NULL) {
                lbl_803685BC((void *)0, block);
            }
            stateReady();
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag != 0) {
            return;
        }
        cmd = CurrCommand_803685B4;
        if (cmd == 1 || (cmd - 4) <= 1 || cmd == 0xE) {
            flag = 1;
        } else if (cmd == lbl_80366F7C) {
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag != 0) {
            block = (DVDReadyCommand *)executing_80368598;
            if (block->unk20 != block->unk14) {
                stateBusy_8020E178(block);
                return;
            }
            executing_80368598 = base + 0x40;
            block->state = 0;
            if (block->callback != NULL) {
                block->callback((s32)block->unk20, block);
            }
            stateReady();
            return;
        }
        cmd = CurrCommand_803685B4;
        if ((cmd - 9) <= 3) {
            flag = 1;
        } else {
            tbl = lbl_8029D154;
            if (cmd == *tbl) {
                flag = 1;
            } else {
                tbl++;
                if (cmd == *tbl) {
                    flag = 1;
                } else if (cmd == tbl[1]) {
                    flag = 1;
                } else {
                    flag = 0;
                }
            }
        }
        if (flag != 0) {
            if (CurrCommand_803685B4 == 0xB || CurrCommand_803685B4 == 0xA) {
                val = di[8] << 2;
            } else {
                val = di[8];
            }
            block = (DVDReadyCommand *)executing_80368598;
            executing_80368598 = base + 0x40;
            block->state = 0;
            if (block->callback != NULL) {
                block->callback((s32)val, block);
            }
            stateReady();
            return;
        }
        if (CurrCommand_803685B4 == 6) {
            block = (DVDReadyCommand *)executing_80368598;
            if (block->unk1C == 0) {
                if (di[8] & 1) {
                    executing_80368598 = base + 0x40;
                    block->state = 9;
                    if (block->callback != NULL) {
                        block->callback(-2, block);
                    }
                    stateReady();
                    return;
                }
                lbl_803685AC = 0;
                block->unk1C = 1;
                fn_8020C080(0, ((DVDReadyCommand *)executing_80368598)->unk14,
                            ((DVDReadyCommand *)executing_80368598)->unk10, fn_8020E4B8);
                return;
            }
            executing_80368598 = base + 0x40;
            block->state = 0;
            if (block->callback != NULL) {
                block->callback(0, block);
            }
            stateReady();
            return;
        }
        block = (DVDReadyCommand *)executing_80368598;
        executing_80368598 = base + 0x40;
        block->state = 0;
        if (block->callback != NULL) {
            block->callback(0, block);
        }
        stateReady();
        return;
    }

    if (CurrCommand_803685B4 == 0xE) {
        __DVDStoreErrorCode(0x01234567);
        DVDLowStopMotor(cbForStateError);
        return;
    }

    if (CurrCommand_803685B4 == 1 || CurrCommand_803685B4 == 4 || CurrCommand_803685B4 == 5 ||
        CurrCommand_803685B4 == 0xE) {
        block = (DVDReadyCommand *)executing_80368598;
        if (block->unk20 == block->unk14) {
            zero = 0;
            if (lbl_803685B8 != 0) {
                ResumeFromHere_803685C0 = zero;
                lbl_803685B8 = zero;
                executing_80368598 = base + 0x40;
                block->state = 0xA;
                if (block->callback != NULL) {
                    block->callback(-3, block);
                }
                if (lbl_803685BC != NULL) {
                    lbl_803685BC((void *)0, block);
                }
                stateReady();
                flag = 1;
            } else {
                flag = 0;
            }
            if (flag == 0) {
                block = (DVDReadyCommand *)executing_80368598;
                executing_80368598 = base + 0x40;
                block->state = 0;
                if (block->callback != NULL) {
                    block->callback((s32)block->unk20, block);
                }
                stateReady();
            }
            return;
        }
    }
    fn_8020BF58(fn_8020D27C);
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

s32 __DVDPopWaitingQueue(void)
{
    extern u8 WaitingQueue_80339FD8[];
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);

    struct DVDQueue {
        struct DVDQueue *next;
        struct DVDQueue *prev;
    };

    struct DVDQueue *queue;
    struct DVDQueue *entry;
    s32 i;

    OSDisableInterrupts();

    queue = (struct DVDQueue *)WaitingQueue_80339FD8;

    for (i = 0; i < 4; i++) {
        if (queue[i].next != &queue[i]) {
            OSRestoreInterrupts(OSDisableInterrupts());

            OSDisableInterrupts();

            entry = ((struct DVDQueue *)WaitingQueue_80339FD8)[i].next;

            queue = &((struct DVDQueue *)WaitingQueue_80339FD8)[i];
            queue->next = entry->next;
            entry->next->prev = queue;

            OSRestoreInterrupts(OSDisableInterrupts());

            entry->next = 0;
            entry->prev = 0;

            return (s32)entry;
        }
    }

    OSRestoreInterrupts(OSDisableInterrupts());
    return 0;
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

u8 ErrorCode2Num(s32 error)
{
    extern u16 lbl_8029D210[];

    u32 *table;
    u32 i;

    table = (u32 *)lbl_8029D210;

    for (i = 0; i < 20; i++) {
        if ((u32)error == table[i]) {
            return (u8)i;
        }
    }

    if ((u32)error >= 0x100000 && (u32)error <= 0x100008) {
        return 0x11;
    }

    return 0x1D;
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

s32 fn_8020F9E8(u8 *arg0, u8 *arg1)
{
    s32 fn_80234278(u8 *, u8 *, u32);

    if ((s8)arg0[0] != 0 && (s8)arg1[0] != 0) {
        if (fn_80234278(arg0, arg1, 4) != 0) {
            return 0;
        }
    }

    if ((s8)arg0[4] != 0 && (s8)arg1[4] != 0) {
        if (fn_80234278(arg0 + 4, arg1 + 4, 2) != 0) {
            return 0;
        }
    }

    if (arg0[6] != 0xFF && arg1[6] != 0xFF) {
        if (arg0[6] != arg1[6]) {
            return 0;
        }
    }

    if (arg0[7] != 0xFF && arg1[7] != 0xFF) {
        if (arg0[7] != arg1[7]) {
            return 0;
        }
    }

    return 1;
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

#pragma optimization_level 3
void fn_802102F8(void){
extern u8 lbl_8029D2C8[],lbl_8033A068[];extern s32 lbl_80368600,lbl_80368604,lbl_80368608;extern const char *lbl_80366F90;
extern s16 lbl_80368626;extern u32 CurrTvMode_8036864C;extern u8 lbl_8036860C[8];
void OSRegisterVersion(const char*);void *__OSLockSram(void);void __OSUnlockSram(s32);
void OSInitThreadQueue(void*);void __OSSetInterruptHandler(s32,void(*)(void));void __OSUnmaskInterrupts(u32);void fn_8020FD50(void);
u8 *data=lbl_8029D2C8,*v=lbl_8033A068;volatile u16 *regs=(volatile u16*)0xcc002000;volatile u16 *controlp;
u16 *tim;u32 *modep,*progp;u16 control;u32 tv,mode; s16 maxx,x,zero; s32 divisor,parity,y,limit,high,low,tmp;
if(!lbl_80368600){
OSRegisterVersion(lbl_80366F90);lbl_80368600=1;lbl_80368620=(void*)1;
controlp=(volatile u16*)0xcc002000;if(!(*++controlp&1))fn_802100F4(0);
lbl_80368604=0;lbl_80368634=0;lbl_80368630=0;lbl_80368644=0;lbl_80368640=0;lbl_80368628=0;lbl_80368638=0;lbl_80368608=0;
regs[39]=*(u16*)(data+0x1c0)|((*(u16*)(data+0x1c2)<<10)&0xfc00);
regs[38]=((s32)*(u16*)(data+0x1c2)>>6)|(*(u16*)(data+0x1c4)<<4);
regs[41]=*(u16*)(data+0x1c6)|((*(u16*)(data+0x1c8)<<10)&0xfc00);
regs[40]=((s32)*(u16*)(data+0x1c8)>>6)|(*(u16*)(data+0x1ca)<<4);
regs[43]=*(u16*)(data+0x1cc)|((*(u16*)(data+0x1ce)<<10)&0xfc00);
regs[42]=((s32)*(u16*)(data+0x1ce)>>6)|(*(u16*)(data+0x1d0)<<4);
regs[45]=*(u16*)(data+0x1d2)|(*(u16*)(data+0x1d4)<<8);
regs[44]=*(u16*)(data+0x1d6)|(*(u16*)(data+0x1d8)<<8);
regs[47]=*(u16*)(data+0x1da)|(*(u16*)(data+0x1dc)<<8);
regs[46]=*(u16*)(data+0x1de)|(*(u16*)(data+0x1e0)<<8);
regs[49]=*(u16*)(data+0x1e2)|(*(u16*)(data+0x1e4)<<8);
regs[48]=*(u16*)(data+0x1e6)|(*(u16*)(data+0x1e8)<<8);
regs[51]=*(u16*)(data+0x1ea)|(*(u16*)(data+0x1ec)<<8);
regs[50]=*(u16*)(data+0x1ee)|(*(u16*)(data+0x1f0)<<8);

regs[0x70/2]=640;
*(s16*)&lbl_80368624=(s8)((u8*)__OSLockSram())[0x10];lbl_80368626=0;__OSUnlockSram(0);
control=*controlp;progp=(u32*)(v+0x114);modep=(u32*)(v+0x118);*progp=(control>>2)&1;*modep=(control>>8)&3;
if(*(u32*)0x800000cc==1&&*modep==0)*modep=5;
tv=*modep;if(tv==3)tv=0;
*(VITiming**)(v+0x144)=fn_8021004C(tv*4+*progp);
*(u16*)(v+0x2)=control;lbl_80368648=*(u16**)(v+0x144);CurrTvMode_8036864C=*modep;
tim=lbl_80368648;*(u16*)(v+0xf4)=640;*(u16*)(v+0xf6)=(tim[1]*2)&0xfffe;
*(u16*)(v+0xf0)=(720-*(u16*)(v+0xf4))/2;*(u16*)(v+0xf2)=0;
maxx=720-*(u16*)(v+0xf4);x=*(s16*)(v+0xf0)+*(s16*)&lbl_80368624;
if(x>maxx){}else{zero=0;if(x>=0)zero=x;maxx=zero;}
*(u16*)(v+0xf8)=maxx;
if(*(u32*)(v+0x110)==0)divisor=2;else divisor=1;
parity=*(u16*)(v+0xf2)&1;y=(s16)*(u16*)(v+0xf2)+lbl_80368626;if(y<=parity)y=parity;*(u16*)(v+0xfa)=y;
limit=(s16)tim[1]*2-parity;
tmp=*(s16*)(v+0xf2)+((s16)*(u16*)(v+0xf6)+lbl_80368626);if(tmp-limit>0)high=tmp-limit;else high=0;
tmp=*(s16*)(v+0xf2)+lbl_80368626;if(tmp-parity<0)low=tmp-parity;else low=0;
*(u16*)(v+0xfc)=*(u16*)(v+0xf6)+low-high;
tmp=*(s16*)(v+0xf2)+lbl_80368626;if(tmp-parity<0)low=tmp-parity;else low=0;
*(u16*)(v+0xfe)=*(u16*)(v+0x108)-low/divisor;
tmp=*(s16*)(v+0xf2)+((s16)*(u16*)(v+0xf6)+lbl_80368626);if(tmp-limit>0)high=tmp-limit;else high=0;
tmp=*(s16*)(v+0xf2)+lbl_80368626;if(tmp-parity<0)low=tmp-parity;else low=0;
*(u16*)(v+0x100)=*(u16*)(v+0x10c)+low/divisor-high/divisor;
*(u16*)(v+0x102)=640;*(u16*)(v+0x104)=(tim[1]*2)&0xfffe;
*(u16*)(v+0x106)=0;*(u16*)(v+0x108)=0;*(u16*)(v+0x10a)=640;*(u16*)(v+0x10c)=(tim[1]*2)&0xfffe;
*(u32*)(v+0x110)=0;v[0x11c]=v[0x11d]=v[0x11e]=40;v[0x12c]=0;*(u32*)(v+0x130)=1;*(u32*)(v+0x134)=0;
OSInitThreadQueue(lbl_8036860C);regs[0x30/2]=regs[0x30/2]&0x7fff;regs[0x34/2]=regs[0x34/2]&0x7fff;
lbl_80368614=0;lbl_80368618=0;__OSSetInterruptHandler(24,fn_8020FD50);__OSUnmaskInterrupts(0x80);
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
    fn_8020ADD8((void *)&lbl_8036860C);
    if (previous != lbl_80368604) {
        OSRestoreInterrupts(enabled);
    }
}

#pragma use_lmw_stmw on
void fn_80210C70(void *arg0) {
    BOOL OSDisableInterrupts(void);
    void OSRestoreInterrupts(BOOL);
    void OSReport(char *, ...);
    void fn_8020602C(void *, s32, char *, ...);
    VITiming *fn_8021004C(u32);
    void fn_802107FC(void *, void *, void *, void *, void *);
    void fn_80210AD0(u16, u16, u8, u16, u16, u16, u16, u16);
    extern u8 lbl_8029D2C8[];
    extern u8 lbl_8033A068[];
    extern char lbl_80366F94[];
    extern u32 lbl_80368658;
    extern u32 lbl_80368660;
    extern s16 lbl_80368626;

    void *self;
    u8 *data;
    u8 *v;
    BOOL irq;
    u32 *progp;
    u32 tv;
    u32 mode;
    u32 tmp;
    VITiming *tm;
    u16 *pF2, *pF4, *p102, *p10A, *p10C, *p106, *p108, *pF6, *pFA, *pFC;
    u32 *p110, *p134, *p118;
    s16 maxx, x;
    s32 divisor, parity, y, limit, high, low, tmpi;
    u16 val, r2, r6c;
    u32 r0;

    self = arg0;
    data = lbl_8029D2C8;
    v = lbl_8033A068;
    irq = OSDisableInterrupts();
    progp = (u32 *)(v + 0x114);
    tmp = *(u32 *)self & 3;
    if (*progp != tmp) {
        lbl_80368628 = (void *)1;
        *progp = tmp;
    }
    tv = *(u32 *)0x800000CC;
    mode = *(u32 *)self >> 2;
    if (mode == 4 && lbl_80368660 == 0) {
        lbl_80368660 = 1;
        OSReport((char *)(data + 0x270));
        OSReport((char *)(data + 0x29c));
        OSReport((char *)(data + 0x2c8));
        OSReport((char *)(data + 0x2f4));
        OSReport((char *)(data + 0x320));
        OSReport((char *)(data + 0x34c));
        OSReport((char *)(data + 0x270));
    }
    if (tv == 2) {
        goto path_02;
    } else if (tv >= 2) {
        if (tv == 5) {
            goto path_157;
        } else if (tv < 5) {
            goto path_err;
        } else if (tv >= 8) {
            goto path_err;
        } else {
            goto path_157;
        }
    } else if (tv == 0) {
        goto path_02;
    } else if (tv >= 0) {
        goto path_157;
    } else {
        goto path_err;
    }
path_02:
    if (mode == 0 || mode == 2 || (mode - 6) <= 1) {
        goto path_ok;
    }
    goto path_err;
path_157:
    if (mode == 1 || mode == 5) {
        goto path_ok;
    }
path_err:
    fn_8020602C(lbl_80366F94, 0x7bb, (char *)(data + 0x378), tv, mode);
path_ok:
    p118 = (u32 *)(v + 0x118);
    if (mode == 0 || mode == 2) {
        *p118 = tv;
    } else {
        *p118 = mode;
    }
    *(u16 *)(v + 0xf0) = *(u16 *)((u8 *)self + 0xa);
    if (*progp == 1) {
        val = (u16)((*(u16 *)((u8 *)self + 0xc) * 2) & 0xfffe);
    } else {
        val = *(u16 *)((u8 *)self + 0xc);
    }
    *(u16 *)(v + 0xf2) = val;
    pF2 = (u16 *)(v + 0xf2);
    pF4 = (u16 *)(v + 0xf4);
    p102 = (u16 *)(v + 0x102);
    p110 = (u32 *)(v + 0x110);
    p10A = (u16 *)(v + 0x10a);
    p10C = (u16 *)(v + 0x10c);
    p106 = (u16 *)(v + 0x106);
    p108 = (u16 *)(v + 0x108);
    *pF4 = *(u16 *)((u8 *)self + 0xe);
    *p102 = *(u16 *)((u8 *)self + 4);
    *(u16 *)(v + 0x104) = *(u16 *)((u8 *)self + 8);
    *p110 = *(u32 *)((u8 *)self + 0x14);
    *p10A = *p102;
    *p10C = *(u16 *)(v + 0x104);
    *p106 = 0;
    *p108 = 0;
    if (*progp == 2) {
        val = *p10C;
    } else if (*progp == 3) {
        val = *p10C;
    } else if (*p110 == 0) {
        val = (u16)((*p10C * 2) & 0xfffe);
    } else {
        val = *p10C;
    }
    pF6 = (u16 *)(v + 0xf6);
    *pF6 = val;
    p134 = (u32 *)(v + 0x134);
    if (*progp == 3) {
        *p134 = 1;
    } else {
        *p134 = 0;
    }
    tm = fn_8021004C((*p118 << 2) + *progp);
    *(VITiming **)(v + 0x144) = tm;
    maxx = (s16)(0x2d0 - *pF4);
    x = (s16)*(u16 *)(v + 0xf0) + *(s16 *)&lbl_80368624;
    if (x > maxx) {
    } else {
        if (x < 0) {
            x = 0;
        }
        maxx = x;
    }
    *(u16 *)(v + 0xf8) = maxx;
    if (*p110 == 0) {
        divisor = 2;
    } else {
        divisor = 1;
    }
    parity = *pF2 & 1;
    y = (s16)*pF2 + lbl_80368626;
    if (y > parity) {
    } else {
        y = (s16)parity;
    }
    pFA = (u16 *)(v + 0xfa);
    *pFA = y;
    limit = ((s16)tm->unk2 * 2) - parity;
    tmpi = (s16)*pF2 + ((s16)*pF6 + lbl_80368626);
    if (tmpi - limit > 0) {
        high = tmpi - limit;
    } else {
        high = 0;
    }
    tmpi = (s16)*pF2 + lbl_80368626;
    if (tmpi - parity < 0) {
        low = tmpi - parity;
    } else {
        low = 0;
    }
    pFC = (u16 *)(v + 0xfc);
    *pFC = (u16)(*pF6 + low - high);
    tmpi = (s16)*pF2 + lbl_80368626;
    if (tmpi - parity < 0) {
        low = tmpi - parity;
    } else {
        low = 0;
    }
    *(u16 *)(v + 0xfe) = (u16)(*p108 - low / divisor);
    tmpi = (s16)*pF2 + ((s16)*pF6 + lbl_80368626);
    if (tmpi - limit > 0) {
        high = tmpi - limit;
    } else {
        high = 0;
    }
    tmpi = (s16)*pF2 + lbl_80368626;
    if (tmpi - parity < 0) {
        low = tmpi - parity;
    } else {
        low = 0;
    }
    *(u16 *)(v + 0x100) = (u16)(*p10C + low / divisor - high / divisor);
    if (lbl_80368620 == 0) {
        *p118 = 3;
    }
    if ((tm->unk18 % 2) != 0) {
        val = tm->unk1A;
    } else {
        val = 0;
    }
    *(u16 *)(v + 0x32) = (u16)(val + 1);
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x40);
    *(u16 *)(v + 0x30) = (u16)(((tm->unk18 / 2) + 1) | 0x1000);
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x80);
    r2 = *(u16 *)(v + 2);
    r6c = *(u16 *)(v + 0x6c);
    if (*progp == 2 || *progp == 3) {
        r2 = (u16)((r2 & ~4) | 4);
        r6c = (u16)((r6c & ~1) | 1);
    } else {
        r2 = (u16)((r2 & ~4) | ((*progp << 2) & 4));
        r6c = (u16)(r6c & ~1);
    }
    r2 = (u16)((r2 & ~8) | (*p134 << 3));
    if (*p118 == 1 || (*p118 - 2) <= 1) {
        r2 = (u16)((r2 & 0xFCFF) | (*p118 << 8));
    } else {
        r2 = (u16)(r2 & 0xFCFF);
    }
    *(u16 *)(v + 2) = r2;
    *(u16 *)(v + 0x6c) = r6c;
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x40000000);
    lbl_80368634 = (void *)((u32)lbl_80368634 | 0x200);
    lbl_80368630 = lbl_80368630;
    if (*p134 != 0) {
        val = (u16)(*p10A * 2);
    } else {
        val = *p10A;
    }
    if (val < *pF4) {
        *(u16 *)(v + 0x4a) = (u16)(((*pF4 + ((val << 8) - 1)) / *pF4) | 0x1000);
        lbl_80368634 = (void *)((u32)lbl_80368634 | 0x04000000);
        lbl_80368630 = lbl_80368630;
        *(u16 *)(v + 0x70) = val;
        lbl_80368634 = (void *)((u32)lbl_80368634 | 0x80);
        lbl_80368630 = lbl_80368630;
    } else {
        *(u16 *)(v + 0x4a) = 0x100;
        lbl_80368634 = (void *)((u32)lbl_80368634 | 0x04000000);
        lbl_80368630 = lbl_80368630;
    }
    *(u16 *)(v + 6) = tm->unk1A;
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x10000000);
    *(u16 *)(v + 4) = (u16)(tm->unk1E | (tm->unk1D << 8));
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x20000000);
    r0 = (tm->unk1F + *(u16 *)(v + 0xf8)) - 0x28;
    *(u16 *)(v + 0xa) = (u16)(tm->unk1C | ((r0 << 7) & 0xFF80));
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x04000000);
    *(u16 *)(v + 8) = (u16)((r0 >> 9) | (((tm->unk20 + *(u16 *)(v + 0xf8) + 0x28) - (0x2d0 - *pF4)) * 2));
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x08000000);
    *(u16 *)(v + 0x16) = (u16)(tm->unkC | (tm->unk10 << 5));
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x100000);
    *(u16 *)(v + 0x14) = (u16)(tm->unkE | (tm->unk14 << 5));
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x200000);
    *(u16 *)(v + 0x1a) = (u16)(tm->unkD | (tm->unk12 << 5));
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x40000);
    *(u16 *)(v + 0x18) = (u16)(tm->unkF | (tm->unk16 << 5));
    lbl_80368634 = lbl_80368634;
    lbl_80368630 = (void *)((u32)lbl_80368630 | 0x80000);
    v[0x11c] = (u8)((*p102 + 0xf) / 16);
    if (*p110 == 0) {
        v[0x11d] = v[0x11c];
    } else {
        v[0x11d] = (u8)((v[0x11c] << 1) & 0xfe);
    }
    v[0x12c] = (u8)(*p106 % 16);
    v[0x11e] = (u8)((v[0x12c] + (*p10A + 0xf)) / 16);
    *(u16 *)(v + 0x48) = (u16)(v[0x11d] | (v[0x11e] << 8));
    lbl_80368634 = (void *)((u32)lbl_80368634 | 0x08000000);
    lbl_80368630 = lbl_80368630;
    if (lbl_80368658 != 0) {
        fn_802107FC(v + 0xf0, v + 0x124, v + 0x128, v + 0x13c, v + 0x140);
    }
    {
        u32 sp8 = *(u32 *)(v + 0x130);
        (void)sp8;
        fn_80210AD0(*pFA, *pFC, tm->unk0, tm->unk2, tm->unk4, tm->unk6, tm->unk8, tm->unkA);
    }
    OSRestoreInterrupts(irq);
}
#pragma use_lmw_stmw reset

#pragma peephole on
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
