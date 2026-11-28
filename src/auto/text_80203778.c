/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

typedef struct FontImageHeader {
 u8 pad[0x10]; u16 width, height; s32 sheetSize; u16 pad18, columns, rows, sheetWidth, sheetHeight, widthOffset; u32 imageOffset; u32 pad28; u8 palette[4];
} FontImageHeader;

BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);

typedef void (*OSErrorHandler)(u8, void *, ...);
extern OSErrorHandler __OSErrorTable[];
extern u32 lbl_80366F38;
extern void PPCMtfpscr(u32);

int OSReport(void *msg, ...);

extern u32 gSaveDataBase;
extern void (*lbl_803685E8)(void);;
extern u16 lbl_8029BBB0[20];
volatile u16 __DSPRegsInit[] : (0xCC005000);
void DMAErrorHandler(u8 error, void *context, ...);
u32 OSGetTick(void);;;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);
extern u8 *fn_80207768(u16 arg0, u8 *arg1, s32 *arg2, s32 *arg3);

static inline BOOL IsSjisTrailByte(u8 c) {
    return (0x40 <= c && c <= 0xFC) && c != 0x7F;
}


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

static u32 sFaceResAddrs[8];
static u32 sFaceResIds[8];
static s16 lbl_80339328[8];
static s16 lbl_80339338[8];

extern s32 lbl_803679F0;

typedef struct Cell {
    struct Cell *prev;
    struct Cell *next;
    s32 size;
} Cell;

typedef struct HeapDesc {
    s32 size;
    void *free;
    void *allocated;
} HeapDesc;

extern HeapDesc *lbl_80368498;
extern s32 lbl_8036849C;
extern void *lbl_803684A0;
extern void *lbl_803684A4;

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
    u32 gpr[32];
    u32 cr;
    u32 lr;
    u32 ctr;
    u32 xer;
    f64 fpr[32];
    u32 fpscr_pad;
    u32 fpscr;
    u32 srr0;
    u32 srr1;
    u16 mode;
    u16 state;
    u32 gqr[8];
    u32 psf_pad;
    f64 psf[32];
} OSContext;

void OSRegisterResetFunction(OSResetFunctionInfo *info);
BOOL __OSCallResetFunctions(BOOL final);
void __OSReboot(u32 resetCode, u32 bootDol);
void OSClearContext(OSContext *context);
void OSSetCurrentContext(OSContext *context);
void OSDumpContext(OSContext *context);
void fn_80206E1C(u32 bootDol, u32 resetCode, char **argv);
s32 __OSSyncSram(void);

#pragma push
#pragma dont_inline on
asm u32 PPCMfmsr(void) {
    nofralloc
    mfmsr r3
    blr
}

asm void PPCMtmsr(register u32 msr) {
    nofralloc
    mtmsr msr
    blr
}

asm u32 PPCMfhid0(void) {
    nofralloc
    mfspr r3, HID0
    blr
}

asm void fn_80203790(register u32 hid0) {
    nofralloc
    mtspr HID0, hid0
    blr
}

asm u32 PPCMfl2cr(void) {
    nofralloc
    mfspr r3, L2CR
    blr
}

asm void PPCMtl2cr(register u32 l2cr) {
    nofralloc
    mtspr L2CR, l2cr
    blr
}

__declspec(weak) asm void PPCMtdec(register u32 dec) {
    nofralloc
    mtdec dec
    blr
}

asm void PPCSync(void) {
    nofralloc
    sc
    blr
}

__declspec(weak) asm void PPCHalt(void) {
    nofralloc
    sync
loop:
    nop
    li r3, 0
    nop
    b loop
}

asm void PPCMtmmcr0(register u32 v) {
    nofralloc
    mtspr MMCR0, v
    blr
}

asm void PPCMtmmcr1(register u32 v) {
    nofralloc
    mtspr MMCR1, v
    blr
}

asm void PPCMtpmc1(register u32 v) {
    nofralloc
    mtspr PMC1, v
    blr
}

asm void PPCMtpmc2(register u32 v) {
    nofralloc
    mtspr PMC2, v
    blr
}

asm void PPCMtpmc3(register u32 v) {
    nofralloc
    mtspr PMC3, v
    blr
}

asm void PPCMtpmc4(register u32 v) {
    nofralloc
    mtspr PMC4, v
    blr
}

u32 PPCMffpscr(void) {
    union { f64 f; struct { u32 pad; u32 fpscr; } u; } m;

    asm {
        mffs fp31
        stfd fp31, m.f;
    }
    return m.u.fpscr;
}

void PPCMtfpscr(register u32 fpscr) {
    union { f64 f; struct { u32 pad; u32 fpscr; } u; } m;

    asm {
        li    r4, 0
        stw   r4, m.u.pad;
        stw   fpscr, m.u.fpscr
        lfd   fp31, m.f
        mtfsf 0xff, fp31
    }
}

asm u32 PPCMfhid2(void) {
    nofralloc
    mfspr r3, 920
    blr
}

asm void PPCMthid2(register u32 v) {
    nofralloc
    mtspr 920, v
    blr
}

asm u32 fn_80203854(void) {
    nofralloc
    sync
    mfspr r3, WPAR
    blr
}

asm void PPCMtwpar(register u32 wpar) {
    nofralloc
    mtspr WPAR, wpar
    blr
}

void PPCDisableSpeculation(void) {
    fn_80203790(PPCMfhid0() | 0x200);
}

asm void PPCSetFpNonIEEEMode(void) {
    nofralloc
    mtfsb1 29
    blr
}
#pragma pop

void DBInit(void) {
    extern u8 __DBExceptionDestination[];
    extern u32 __DBInterface;
    extern u32 DBVerbose;

    __DBInterface = 0x80000040;
    *(u32 *)0x80000048 =
        (u32)__DBExceptionDestination + 0x80000000;
    DBVerbose = 1;
}

void fn_802038C0(void) { extern char lbl_8029B910[24]; s32 physical=*(s32*)0xC0; OSContext *context=(OSContext*)(physical+0x80000000); OSReport(lbl_8029B910); OSDumpContext(context); PPCHalt(); }

void __DBExceptionDestination(void);
void fn_802038C0(void);
asm void __DBExceptionDestination(void) {
    void fn_802038C0(void);
nofralloc
mfmsr r3
ori r3, r3, 0x30
mtmsr r3
b fn_802038C0
}

s32 __DBIsExceptionMarked(u8 arg0) {
    extern void *__DBInterface;
    return M2C_FIELD(__DBInterface, s32 *, 4) & (1 << arg0);
}

void DBPrintf(u8 level, char *fmt, ...) {
}

extern u8 ZeroPS_80368470[];
extern f64 ZeroF_80368468;
#pragma push
asm void __OSFPRInit(void) {
    nofralloc

    mfmsr r3
    ori r3, r3, 0x2000
    mtmsr r3

    mfspr r3, 0x398
    rlwinm. r3, r3, 3, 0x1f, 0x1f
    beq skip_ps_init

    lis r3, ZeroPS_80368470@ha
    addi r3, r3, ZeroPS_80368470@l
    psq_l f0, 0(r3), 0, 0
    ps_mr f1, f0
    ps_mr f2, f0
    ps_mr f3, f0
    ps_mr f4, f0
    ps_mr f5, f0
    ps_mr f6, f0
    ps_mr f7, f0
    ps_mr f8, f0
    ps_mr f9, f0
    ps_mr f10, f0
    ps_mr f11, f0
    ps_mr f12, f0
    ps_mr f13, f0
    ps_mr f14, f0
    ps_mr f15, f0
    ps_mr f16, f0
    ps_mr f17, f0
    ps_mr f18, f0
    ps_mr f19, f0
    ps_mr f20, f0
    ps_mr f21, f0
    ps_mr f22, f0
    ps_mr f23, f0
    ps_mr f24, f0
    ps_mr f25, f0
    ps_mr f26, f0
    ps_mr f27, f0
    ps_mr f28, f0
    ps_mr f29, f0
    ps_mr f30, f0
    ps_mr f31, f0

skip_ps_init:
    lfd f0, ZeroF_80368468(r13)
    fmr f1, f0
    fmr f2, f0
    fmr f3, f0
    fmr f4, f0
    fmr f5, f0
    fmr f6, f0
    fmr f7, f0
    fmr f8, f0
    fmr f9, f0
    fmr f10, f0
    fmr f11, f0
    fmr f12, f0
    fmr f13, f0
    fmr f14, f0
    fmr f15, f0
    fmr f16, f0
    fmr f17, f0
    fmr f18, f0
    fmr f19, f0
    fmr f20, f0
    fmr f21, f0
    fmr f22, f0
    fmr f23, f0
    fmr f24, f0
    fmr f25, f0
    fmr f26, f0
    fmr f27, f0
    fmr f28, f0
    fmr f29, f0
    fmr f30, f0
    fmr f31, f0

    mtfsf 0xff, f0
    blr
}
#pragma pop

#pragma peephole off
u32 OSGetConsoleType(void)
{
    extern void *BootInfo_80368458;
    u32 console;

    if (!BootInfo_80368458 || !(console = *(u32 *)((char *)BootInfo_80368458 + 0x2C))) {
        console = 0x10000002;
        return console;
    }
    return console;
}
#pragma peephole off
void InquiryCallback(void *unused, void *arg1) {
    extern u8 DriveInfo_80339360[];
    switch (*(s32 *)((u8 *)arg1 + 0xC)) {
    case 0:
        *(u16 *)0x800030E6 = *(u16 *)(DriveInfo_80339360 + 2) | 0x8000;
        break;
    default:
        *(u16 *)0x800030E6 = 1;
        break;
    }
}
#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
#pragma peephole off
void OSInit(void) {
    extern s32 AreWeInitialized_80368478, __OSInIPL, __OSIsGcam, __DVDLongFileNameFlag, __PADSpec;
    extern u32 *BI2DebugFlag_8036845C;
    extern u32 BI2DebugFlagHolder_80368460;
    extern u8 *BootInfo_80368458;
    extern u8 DriveInfo_80339360[], lbl_8029B928[], lbl_80366F1C[8], __ArenaLo[], __ArenaHi[], _stack_addr[];
    extern s64 __OSStartTime;
    extern char *__OSVersion;
    void *OSGetArenaHi(void);
    void *OSGetArenaLo(void);
    void OSSetArenaHi(void *);
    void OSSetArenaLo(void *);
    s64 __OSGetSystemTime(void);
    void __OSGetExecParams(void *);
    void PPCMtmmcr1(u32);
    void PPCMtpmc1(u32);
    void PPCMtpmc2(u32);
    void PPCMtpmc4(u32);
    void OSExceptionInit(void);
    void __OSInitSystemCall(void);
    void OSInitAlarm(void);
    void __OSModuleInit(void);
    void __OSInterruptInit(void);
    void *__OSSetInterruptHandler(s32, void *);
    void __OSResetSWInterruptHandler(void);
    void __OSContextInit(void);
    void __OSCacheInit(void);
    void EXIInit(void);
    void SIInit(void);
    void __OSInitSram(void);
    void __OSThreadInit(void);
    void __OSInitAudioSystem(void);
    void __OSInitMemoryProtection(void);
    void OSRegisterVersion(char *);
    void EnableMetroTRKInterrupts(void);
    u32 OSGetResetCode(void);
    void *memset(void *, s32, u32);
    void OSEnableInterrupts(void);
    void DVDInit(void);
    void DCInvalidateRange(void *, u32);
    void DVDInquiryAsync(void *, void *, void *);

    u8 *bi2;
    u32 console;
    void *hi;
    s32 reset;
    u32 *preserve;
    u32 *endp;
    u32 end;
    void *arena;
    u8 *strings;
    u8 *drive;

    drive = DriveInfo_80339360;
    strings = lbl_8029B928;
    if (!AreWeInitialized_80368478) {
        AreWeInitialized_80368478 = 1;
        __OSStartTime = __OSGetSystemTime();
        OSDisableInterrupts();
        __OSGetExecParams(drive + 0x50);
        PPCMtmmcr0(0);
        PPCMtmmcr1(0);
        PPCMtpmc1(0);
        PPCMtpmc2(0);
        PPCMtpmc3(0);
        PPCMtpmc4(0);
        PPCDisableSpeculation();
        PPCSetFpNonIEEEMode();
        BI2DebugFlag_8036845C = 0;
        BootInfo_80368458 = (u8 *)0x80000000;
        __DVDLongFileNameFlag = 0;
        bi2 = *(u8 **)0x800000f4;
        if (bi2) {
            BI2DebugFlag_8036845C = (u32 *)(bi2 + 0xc);
            __PADSpec = *(u32 *)(bi2 + 0x24);
            *(u8 *)0x800030e8 = (u8)*BI2DebugFlag_8036845C;
            *(u8 *)0x800030e9 = (u8)__PADSpec;
        } else if (*(u32 *)0x80000034) {
            BI2DebugFlagHolder_80368460 = *(u8 *)0x800030e8;
            BI2DebugFlag_8036845C = &BI2DebugFlagHolder_80368460;
            __PADSpec = *(u8 *)0x800030e9;
        }
        __DVDLongFileNameFlag = 1;
        arena = *(void **)(BootInfo_80368458 + 0x30);
        if (!arena) arena = __ArenaLo;
        OSSetArenaLo(arena);
        if (!*(u32 *)(BootInfo_80368458 + 0x30) && BI2DebugFlag_8036845C && *BI2DebugFlag_8036845C < 2) {
            OSSetArenaLo((void *)(((u32)_stack_addr + 31) & ~31));
        }
        arena = *(void **)(BootInfo_80368458 + 0x34);
        if (!arena) arena = __ArenaHi;
        OSSetArenaHi(arena);
        OSExceptionInit();
        __OSInitSystemCall();
        OSInitAlarm();
        __OSModuleInit();
        __OSInterruptInit();
        __OSSetInterruptHandler(22, __OSResetSWInterruptHandler);
        __OSContextInit();
        __OSCacheInit();
        EXIInit();
        SIInit();
        __OSInitSram();
        __OSThreadInit();
        __OSInitAudioSystem();
        PPCMthid2(PPCMfhid2() & ~0x40000000);
        if (!__OSInIPL) {
            __OSInitMemoryProtection();
        }
        OSReport(strings + 0x44);
        OSReport(strings + 0x54, strings + 0x6c, strings + 0x78);
        OSReport(strings + 0x84);
        if (!BootInfo_80368458 || !(console = *(u32 *)(BootInfo_80368458 + 0x2c))) {
            console = 0x10000002;
        }
        switch (console & 0xf0000000) {
        case 0:
            OSReport(strings + 0x94);
            break;
        case 0x10000000:
        case 0x20000000:
            switch (console & 0x0fffffff) {
            case 0x10000000:
                OSReport(strings + 0xa0);
                break;
            case 0x10000001:
                OSReport(strings + 0xb0);
                break;
            case 0x10000002:
                OSReport(strings + 0xc0);
                break;
            case 0x10000003:
                OSReport(strings + 0xd0);
                break;
            default:
                OSReport(strings + 0xe0, (console & 0x0fffffff) - 3, console, console & 0x0fffffff);
                break;
            }
            break;
        default:
            OSReport(lbl_80366F1C);
            break;
        }
        OSReport(strings + 0xfc, *(u32 *)(BootInfo_80368458 + 0x28) >> 20);
        hi = OSGetArenaHi();
        OSReport(strings + 0x10c, OSGetArenaLo(), hi);
        OSRegisterVersion(__OSVersion);
        if (BI2DebugFlag_8036845C && *BI2DebugFlag_8036845C >= 2) {
            EnableMetroTRKInterrupts();
        }
        if (OSGetResetCode() & 0x80000000) {
            reset = 1;
        } else {
            reset = 0;
        }
        if (reset == 0) {
            memset(OSGetArenaLo(), 0, (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
        } else if (!(preserve = (u32 *)(drive + 0x5c), *preserve)) {
            memset(OSGetArenaLo(), 0, (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
        } else if ((u32)OSGetArenaLo() < *preserve) {
            if ((u32)OSGetArenaHi() <= *preserve) {
                memset(OSGetArenaLo(), 0, (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
            } else {
                memset(OSGetArenaLo(), 0, *preserve - (u32)OSGetArenaLo());
                hi = OSGetArenaHi();
                endp = (u32 *)(drive + 0x60);
                end = *endp;
                if ((u32)hi > end) {
                    memset((void *)end, 0, (u32)OSGetArenaHi() - end);
                }
            }
        }
        OSEnableInterrupts();
        if (!__OSInIPL) {
            DVDInit();
            if (__OSIsGcam) {
                *(u16 *)0x800030e6 = 0x9000;
            } else {
                DCInvalidateRange(drive, 32);
                DVDInquiryAsync(drive + 0x20, drive, InquiryCallback);
            }
        }
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
void OSExceptionInit(void) {
    extern u32 __OSEVSetNumber[];
    extern u8 __OSEVStart[];
    extern u8 __OSEVEnd[];
    extern u8 __OSDBINTSTART[];
    extern u8 __OSDBINTEND[];
    extern u8 __OSDBJUMPEND[];
    extern u8 __DBVECTOR[];
    extern u8 lbl_8029B928[];
    extern u32 *BI2DebugFlag_8036845C;
    extern void *OSExceptionTable_8036847C;
    extern void OSDefaultExceptionHandler[];
    extern void DBPrintf(char *, ...);
    extern void *memcpy(void *, const void *, u32);
    extern void DCFlushRangeNoSync(void *, u32);
    extern void ICInvalidateRange(void *, u32);
    extern s32 __DBIsExceptionMarked(u8);
    extern void *__OSSetExceptionHandler(u8, void *);
    u32 *osevSetNumber;
    u8 *strings;
    u32 *entry;
    u32 dbJumpSize;
    u8 i;
    u32 setNumber;
    u8 *osevStart;
    u32 size;
    u32 *codeAddr;
    u32 *p;
    u32 nops;
    u32 *dest;
    u8 j;
    u32 dbSize;

    strings = lbl_8029B928;
    osevSetNumber = __OSEVSetNumber;
    setNumber = osevSetNumber[0];
    osevStart = __OSEVStart;
    size = __OSEVEnd - osevStart;
    codeAddr = (u32 *)0x80000060;

    if (*codeAddr == 0) {
        DBPrintf((char *)(strings + 0x160));
        dbSize = __OSDBINTEND - __OSDBINTSTART;
        memcpy(codeAddr, __OSDBINTSTART, dbSize);
        DCFlushRangeNoSync(codeAddr, dbSize);
        __sync();
        ICInvalidateRange(codeAddr, dbSize);
    }

    entry = (u32 *)(strings + 0x124);
    dbJumpSize = __OSDBJUMPEND - __OSDBINTEND;
    i = 0;


    while (i < 15) {
        if (BI2DebugFlag_8036845C != NULL && *BI2DebugFlag_8036845C >= 2 && __DBIsExceptionMarked(i)) {
            DBPrintf((char *)(strings + 0x17C), i);
        } else {
            osevSetNumber[0] = setNumber | i;
            if (__DBIsExceptionMarked(i)) {
                DBPrintf((char *)(strings + 0x1AC), i);
                memcpy(__DBVECTOR, __OSDBINTEND, dbJumpSize);
            } else {
                p = (u32 *)__DBVECTOR;
                for (nops = 0; nops < dbJumpSize; nops += 4) {
                    *p++ = 0x60000000;
                }
            }
            dest = (u32 *)(*entry + 0x80000000);
            memcpy(dest, osevStart, size);
            DCFlushRangeNoSync(dest, size);
            __sync();
            ICInvalidateRange(dest, size);
        }
        entry++;
        i++;
    }

    OSExceptionTable_8036847C = (void *)0x80003000;
    j = 0;
    while (j < 15) {
        __OSSetExceptionHandler(j, OSDefaultExceptionHandler);
        j++;
    }
    osevSetNumber[0] = setNumber;
    DBPrintf((char *)(strings + 0x1DC));
}
#pragma pop

void __OSEVStart(void);
void __OSEVEnd(void);
void __OSEVSetNumber(void);
void __DBVECTOR(void);
void __OSDBINTSTART(void);
void __OSDBINTEND(void);
void __OSDBJUMPEND(void);
#pragma push
static asm void __OSDBIntegrator(void) {
    nofralloc
entry __OSDBINTSTART
    li      r5, 0x40
    mflr    r3
    stw     r3, 0xC(r5)
    lwz     r3, 0x8(r5)
    oris    r3, r3, 0x8000
    mtlr    r3
    li      r3, 0x30 // MSR_IR | MSR_DR     // turn on memory addressing
    mtmsr   r3
    blr
entry __OSDBINTEND
}
#pragma pop

#pragma push
asm void fn_80204294(void) {
    nofralloc
    bla     0x60
entry __OSDBJUMPEND
}
#pragma pop

#pragma peephole off
void *__OSSetExceptionHandler(u8 exception, void *handler) {
    extern void *OSExceptionTable_8036847C;
    void **table;
    void **entry;
    void *oldHandler;
    u32 index;

    index = exception;
    table = (void **)OSExceptionTable_8036847C;
    entry = table + index;

    oldHandler = *entry;
    *entry = handler;

    return oldHandler;
}
void *__OSGetExceptionHandler(u8 exception) {
    extern void **OSExceptionTable_8036847C;
    return OSExceptionTable_8036847C[exception];
}

void OSDefaultExceptionHandler(u8 exception, OSContext *context);
#pragma push
static asm void OSExceptionVector(void) {
    nofralloc

entry __OSEVStart
    // Save r4 into SPRG0
    mtsprg  0, r4

    // Load current context physical address into r4
    lwz     r4, 0x00C0

    // Save r3 - r5 into the current context
    stw     r3, 12(r4)
    mfsprg  r3, 0
    stw     r3, 16(r4)
    stw     r5, 20(r4)

    lhz     r3, 418(r4)
    ori     r3, r3, 0x02
    sth     r3, 418(r4)

    // Save misc registers
    mfcr    r3
    stw     r3, 0x80(r4)
    mflr    r3
    stw     r3, 0x84(r4)
    mfctr   r3
    stw     r3, 0x88(r4)
    mfxer   r3
    stw     r3, 0x8C(r4)
    mfsrr0  r3
    stw     r3, 0x198(r4)
    mfsrr1  r3
    stw     r3, 0x19C(r4)
    mr      r5, r3

entry __DBVECTOR
    nop

    // Set SRR1[IR|DR] to turn on address
    // translation at the next RFI
    mfmsr   r3
    ori     r3, r3, 0x30
    mtsrr1  r3

    // This lets us change the exception number based on the
    // exception we're installing.
entry __OSEVSetNumber
    addi    r3, 0, 0x0000

    // Load current context virtual address into r4
    lwz     r4, 0xD4

    // Check non-recoverable interrupt
    rlwinm. r5, r5, 0, 30, 30
    bne     recoverable
    addis   r5, 0,  OSDefaultExceptionHandler@ha
    addi    r5, r5, OSDefaultExceptionHandler@l
    mtsrr0  r5
    rfi
    // NOT REACHED HERE

recoverable:
    // Locate exception handler.
    rlwinm  r5, r3, 2, 22, 29               // r5 contains exception*4
    lwz     r5, 0x3000(r5)
    mtsrr0  r5

    // Final state
    // r3 - exception number
    // r4 - pointer to context
    // r5 - garbage
    // srr0 - exception handler
    // srr1 - address translation enalbed, not yet recoverable

    rfi
    // NOT REACHED HERE
    // The handler will restore state

entry __OSEVEnd
    nop
}
#pragma pop

#pragma push
typedef u8 __OSException;
asm void OSDefaultExceptionHandler(register __OSException exception, register OSContext* context) {
    void __OSUnhandledException(__OSException exception, OSContext *context, u32 dsisr, u32 dar);
nofralloc
stw r0, 0(context); stw r1, 4(context); stw r2, 8(context); stmw r6, 24(context); mfspr r0, 913; stw r0, 424(context); mfspr r0, 914; stw r0, 428(context); mfspr r0, 915; stw r0, 432(context); mfspr r0, 916; stw r0, 436(context); mfspr r0, 917; stw r0, 440(context); mfspr r0, 918; stw r0, 444(context); mfspr r0, 919; stw r0, 448(context);
mfdsisr r5
mfdar r6
stwu r1, -8(r1)
b __OSUnhandledException
}
#pragma pop

#pragma peephole reset
#pragma push
void __OSPSInit(void) {
    void ICFlashInvalidate(void);
    u32 PPCMfhid2();
    void PPCMthid2(u32 newhid2);
    PPCMthid2(PPCMfhid2() | 0x80000000 | 0x20000000);
    ICFlashInvalidate();
    __sync();
    asm
    {
li r3, 0
mtspr 912 , r3
mtspr 913 , r3
mtspr 914 , r3
mtspr 915 , r3
mtspr 916 , r3
mtspr 917 , r3
mtspr 918 , r3
mtspr 919 , r3
    }
}
#pragma pop

volatile u32 __PIRegs[64] : 0xCC006000;
#pragma peephole off
u8 fn_80204410(void) {
    u32 *regs = (u32 *)__PIRegs;
    return (u8)regs[9];
}
void OSRegisterVersion(s32 arg0) {
    void OSReport(void *, ...);
    extern u32 lbl_80366F24;
    OSReport(&lbl_80366F24, arg0);
}
#pragma peephole on
void OSInitAlarm(void) {
    struct AlarmQueue {
        void *head;
        void *tail;
    };
    extern struct AlarmQueue AlarmQueue_80368490;
    extern void DecrementerExceptionHandler[];
    extern OSResetFunctionInfo ResetFunctionInfo_8029BB20;
    void *__OSGetExceptionHandler(s32);
    void __OSSetExceptionHandler(s32, void *);
    void OSRegisterResetFunction(OSResetFunctionInfo *);

    if (__OSGetExceptionHandler(8) != DecrementerExceptionHandler) {
        AlarmQueue_80368490.tail = 0;
        AlarmQueue_80368490.head = 0;
        __OSSetExceptionHandler(8, DecrementerExceptionHandler);
        OSRegisterResetFunction(&ResetFunctionInfo_8029BB20);
    }
}

void OSCreateAlarm(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

#pragma use_lmw_stmw on
void InsertAlarm(void *alarm_p, s64 fire, void (*handler)(void *, OSContext *)) {
    struct AlarmQueue {
        struct OSAlarm *head;
        struct OSAlarm *tail;
    };
    struct OSAlarm {
        void (*handler)(void *, OSContext *);
        u32 tag;
        s64 fire;
        struct OSAlarm *prev;
        struct OSAlarm *next;
        s64 period;
        s64 start;
    };
    extern struct AlarmQueue AlarmQueue_80368490;
    extern s64 __OSGetSystemTime(void);
    extern void PPCMtdec(u32);
    struct OSAlarm *next;
    struct OSAlarm *prev;
    s64 time;
    s32 zg;
    struct OSAlarm *alarm;

    zg = 0;
    alarm = (struct OSAlarm *)alarm_p;
    if (zg < alarm->period) {
        time = __OSGetSystemTime();
        fire = alarm->start;
        if (alarm->start < time) {
            fire += alarm->period * ((time - alarm->start) / alarm->period + 1);
        }
    }

    alarm->handler = handler;
    alarm->fire = fire;

    for (next = AlarmQueue_80368490.head; next != 0; next = next->next) {
        if (fire < next->fire) {
            alarm->prev = next->prev;
            next->prev = alarm;
            alarm->next = next;
            prev = alarm->prev;
            if (prev != 0) {
                prev->next = alarm;
                return;
            }
            AlarmQueue_80368490.head = alarm;
            time = __OSGetSystemTime();
            if (alarm->fire - time < 0) {
                PPCMtdec(0);
            } else if (alarm->fire - time < 0x80000000LL) {
                PPCMtdec((u32)(alarm->fire - time));
            } else {
                PPCMtdec(0x7FFFFFFF);
            }
            return;
        }
    }

    alarm->next = 0;
    prev = AlarmQueue_80368490.tail;
    AlarmQueue_80368490.tail = alarm;
    alarm->prev = prev;
    if (prev != 0) {
        prev->next = alarm;
        return;
    }
    AlarmQueue_80368490.tail = alarm;
    AlarmQueue_80368490.head = alarm;
    time = __OSGetSystemTime();
    if (alarm->fire - time < 0) {
        PPCMtdec(0);
    } else if (alarm->fire - time < 0x80000000LL) {
        PPCMtdec((u32)(alarm->fire - time));
    } else {
        PPCMtdec(0x7FFFFFFF);
    }
}

#pragma use_lmw_stmw on
void OSSetAlarm(void *alarm, s64 tick, void (*handler)(void *, OSContext *)) {
    extern u32 OSDisableInterrupts(void);
    extern void OSRestoreInterrupts(u32);
    extern s64 __OSGetSystemTime(void);
    extern void InsertAlarm(void *, s64, void (*)(void *, OSContext *));
    u32 enabled;

    enabled = OSDisableInterrupts();
    *(s32 *)((u8 *)alarm + 0x1C) = 0;
    *(s32 *)((u8 *)alarm + 0x18) = 0;
    InsertAlarm(alarm, __OSGetSystemTime() + tick, handler);
    OSRestoreInterrupts(enabled);
}

#pragma use_lmw_stmw on
void OSCancelAlarm(void *alarm_p) {
    struct AlarmQueue {
        struct OSAlarm *head;
        struct OSAlarm *tail;
    };
    struct OSAlarm {
        void (*handler)(void *, OSContext *);
        u32 tag;
        s64 fire;
        struct OSAlarm *prev;
        struct OSAlarm *next;
        s64 period;
        s64 start;
    };
    extern struct AlarmQueue AlarmQueue_80368490;
    extern u32 OSDisableInterrupts(void);
    extern void OSRestoreInterrupts(u32);
    extern s64 __OSGetSystemTime(void);
    extern void PPCMtdec(u32);
    struct OSAlarm *alarm;
    struct OSAlarm *next;
    u32 enabled;
    s64 time;

    alarm = (struct OSAlarm *)alarm_p;
    enabled = OSDisableInterrupts();
    if (alarm->handler == 0) {
        OSRestoreInterrupts(enabled);
        return;
    }

    next = alarm->next;
    if (next == 0) {
        AlarmQueue_80368490.tail = alarm->prev;
    } else {
        next->prev = alarm->prev;
    }
    if (alarm->prev != 0) {
        alarm->prev->next = next;
    } else {
        AlarmQueue_80368490.head = next;
        if (next != 0) {
            time = __OSGetSystemTime();
            time = next->fire - time;
            if (time < 0) {
                PPCMtdec(0);
            } else if (time < 0x80000000LL) {
                PPCMtdec((u32)time);
            } else {
                PPCMtdec(0x7FFFFFFF);
            }
        }
    }
    alarm->handler = 0;
    OSRestoreInterrupts(enabled);
}

#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
void DecrementerExceptionCallback(u8 type, OSContext *context)
{
  struct AlarmQueue
  {
    void *head;
    void *tail;
  };
  struct OSAlarm
  {
    void (*handler)(void *, OSContext *);
    u32 tag;
    s64 fire;
    struct OSAlarm *prev;
    struct OSAlarm *next;
    s64 period;
  };
  extern struct AlarmQueue AlarmQueue_80368490;
  extern s64 __OSGetSystemTime(void);
  extern void PPCMtdec(u32);
  extern void OSLoadContext(OSContext *);
  extern void InsertAlarm(void *, s64, void (*)(void *, OSContext *));
  extern s32 OSDisableScheduler(void);
  extern s32 OSEnableScheduler(void);
  extern void __OSReschedule(void);
  struct OSAlarm *alarm;
  struct OSAlarm *next;
  void (*handler)(void *, OSContext *);
  s64 time;
  OSContext exceptionContext;

  time = __OSGetSystemTime();
  alarm = AlarmQueue_80368490.head;
  if (alarm == NULL)
  {
    OSLoadContext(context);
  }
  if (time < alarm->fire)
  {
    struct OSAlarm *a = alarm;
    s64 delta = a->fire - __OSGetSystemTime();
    if (delta < 0)
    {
      PPCMtdec(0);
    }
    else if (delta < 0x80000000)
    {
      PPCMtdec((u32)delta);
    }
    else
    {
      PPCMtdec(0x7FFFFFFF);
    }
    OSLoadContext(context);
  }
  next = alarm->next;
  AlarmQueue_80368490.head = next;
  if (next == NULL)
  {
    AlarmQueue_80368490.tail = NULL;
  }
  else
  {
    next->prev = NULL;
  }
  handler = alarm->handler;
  alarm->handler = NULL;
  if (0 < alarm->period)
  {
    InsertAlarm(alarm, 0, handler);
  }
  if (AlarmQueue_80368490.head != NULL)
  {
    struct OSAlarm *a = AlarmQueue_80368490.head;
    s64 delta = a->fire - __OSGetSystemTime();
    if (delta < 0)
    {
      PPCMtdec(0);
    }
    else if (delta < 0x80000000)
    {
      PPCMtdec((u32)delta);
    }
    else
    {
      PPCMtdec(0x7FFFFFFF);
    }
  }
  OSDisableScheduler();
  OSClearContext(&exceptionContext);
  OSSetCurrentContext(&exceptionContext);
  handler(alarm, context);
  OSClearContext(&exceptionContext);
  OSSetCurrentContext(context);
  OSEnableScheduler();
  __OSReschedule();
  OSLoadContext(context);
}
#pragma use_lmw_stmw reset
void DecrementerExceptionCallback(u8 type, OSContext *context);
#pragma push
typedef s64 OSTime;
typedef struct OSAlarm_80204ABC OSAlarm_80204ABC;
typedef void (*OSAlarmHandler)(OSAlarm_80204ABC *alarm, OSContext *context);
struct OSAlarm_80204ABC {
    OSAlarmHandler handler;
    u32 tag;
    OSTime fire;
    OSAlarm_80204ABC *prev;
    OSAlarm_80204ABC *next;
    OSTime period;
    OSTime start;
};
typedef struct {
    OSAlarm_80204ABC *head;
    OSAlarm_80204ABC *tail;
} OSAlarmQueue;
static void SetTimer(OSAlarm_80204ABC *alarm) {
    OSTime __OSGetSystemTime();
    void PPCMtdec(u32 newDec);
    OSTime delta = alarm->fire - __OSGetSystemTime();
    if (delta < 0) {
        PPCMtdec(0);
    } else if (delta < 0x80000000) {
        PPCMtdec((u32)delta);
    } else {
        PPCMtdec(0x7fffffff);
    }
}
static OSAlarmQueue AlarmQueue;
static asm void DecrementerExceptionHandler(register __OSException exception,
register OSContext* context) {
    void DecrementerExceptionCallback(register __OSException exception, register OSContext *context);
nofralloc
stw r0, 0(context); stw r1, 4(context); stw r2, 8(context); stmw r6, 24(context); mfspr r0, 913; stw r0, 424(context); mfspr r0, 914; stw r0, 428(context); mfspr r0, 915; stw r0, 432(context); mfspr r0, 916; stw r0, 436(context); mfspr r0, 917; stw r0, 440(context); mfspr r0, 918; stw r0, 444(context); mfspr r0, 919; stw r0, 448(context);
stwu r1, -8(r1)
b DecrementerExceptionCallback
}
#pragma pop

#pragma peephole off
BOOL fn_80204B0C(BOOL final) {
    extern void OSCancelAlarm(void *);
    extern BOOL fn_8020F620(void *);
    extern void *AlarmQueue_80368490;
    void *alarm;
    void *next;

    if (final != FALSE) {
        alarm = AlarmQueue_80368490;
        next = (alarm) ? M2C_FIELD(alarm, void **, 0x14) : NULL;

        while (alarm != NULL) {
            if (fn_8020F620(alarm) == FALSE) {
                OSCancelAlarm(alarm);
            }
            alarm = next;
            next = (alarm) ? M2C_FIELD(alarm, void **, 0x14) : NULL;
        }
    }
    return TRUE;
}
#pragma peephole reset

static Cell *DLExtract(Cell *list, Cell *cell) {
    if (cell->next) {
        cell->next->prev = cell->prev;
    }
    if (cell->prev == NULL) {
        return cell->next;
    } else {
        cell->prev->next = cell->next;
        return list;
    }
}

Cell *fn_80204BAC(Cell *list, Cell *cell) {
    Cell *prev;
    Cell *next;

    for (next = list, prev = NULL; next; prev = next, next = next->next) {
        if (cell <= next) {
            break;
        }
    }

    cell->next = next;
    cell->prev = prev;
    if (next) {
        next->prev = cell;
        if ((char *)cell + cell->size == (char *)next) {
            cell->size += next->size;
            cell->next = next = next->next;
            if (next) {
                next->prev = cell;
            }
        }
    }
    if (prev) {
        prev->next = cell;
        if ((char *)prev + prev->size == (char *)cell) {
            prev->size += cell->size;
            prev->next = next;
            if (next) {
                next->prev = prev;
            }
        }
        return list;
    } else {
        return cell;
    }
}

void fn_80204C58(s32 heap, void *ptr) {
    HeapDesc *hd;
    Cell *cell;

    cell = (Cell *)((char *)ptr - 0x20);
    hd = &lbl_80368498[heap];
    hd->allocated = DLExtract(hd->allocated, cell);
    hd->free = fn_80204BAC(hd->free, cell);
}

s32 fn_80204CD4(s32 arg0) {
    extern s32 lbl_80366F28;
    s32 temp_r0;

    temp_r0 = lbl_80366F28;
    lbl_80366F28 = arg0;
    return temp_r0;
}

void *fn_80204CE4(void *arenaStart, void *arenaEnd, s32 maxHeaps) {
    extern s32 lbl_80366F28;
    u32 arraySize;
    s32 i;
    HeapDesc *hd;

    arraySize = sizeof(HeapDesc) * maxHeaps;
    lbl_80368498 = arenaStart;
    lbl_8036849C = maxHeaps;

    for (i = 0; i < lbl_8036849C; i++) {
        hd = &lbl_80368498[i];
        hd->size = -1;
        hd->free = hd->allocated = NULL;
    }

    lbl_80366F28 = -1;

    arenaStart = (void *)((u32)lbl_80368498 + arraySize);
    arenaStart = (void *)(((u32)arenaStart + 31) & ~31);

    lbl_803684A0 = arenaStart;
    lbl_803684A4 = (void *)((u32)arenaEnd & ~31);

    return arenaStart;
}

s32 fn_80204D54(void *start, void *end)
{
    s32 i;
    Cell *cell;
    HeapDesc *hd;
    start = (void *)(((u32)start + 31) & ~31);
    end = (void *)((u32)end & ~31);
    for (i = 0; i < lbl_8036849C; i++) {
        hd = &lbl_80368498[i];
        if (hd->size < 0) {
            hd->size = (u32)end - (u32)start;
            cell = start;
            cell->prev = NULL;
            cell->next = NULL;
            cell->size = hd->size;
            hd->free = cell;
            hd->allocated = NULL;
            return i;
        }
    }
    return -1;
}

s32 OSGetArenaHi(void) {
    extern s32 __OSArenaHi_803684A8;
    return __OSArenaHi_803684A8;
}

s32 OSGetArenaLo(void) {
    extern s32 __OSArenaLo_80366F30;
    return __OSArenaLo_80366F30;
}

void OSSetArenaHi(s32 arg0) {
    extern s32 __OSArenaHi_803684A8;
    __OSArenaHi_803684A8 = arg0;
}

void OSSetArenaLo(s32 arg0) {
    extern s32 __OSArenaLo_80366F30;
    __OSArenaLo_80366F30 = arg0;
}

extern u32 __OSArenaLo_80366F30;
u32 OSAllocFromArenaLo(u32 arg0, u32 arg1) {
    u32 temp_r0;
    u32 temp_r4;
    u32 temp_r5;
    u32 temp_r6;

    temp_r4 = arg1 - 1;
    temp_r5 = ~temp_r4;
    temp_r0 = __OSArenaLo_80366F30 + temp_r4;
    temp_r6 = temp_r5 & temp_r0;
    temp_r0 = temp_r6 + arg0;
    temp_r0 = temp_r0 + temp_r4;
    temp_r0 = temp_r5 & temp_r0;
    __OSArenaLo_80366F30 = temp_r0;
    return temp_r6;
}

void __OSInitAudioSystem(void) {
    u8 *OSGetArenaHi(void);
    void DCFlushRange(void *, u32);
    u32 OSGetTick(void);
    void *memcpy(void *, void *, u32);
    extern u8 DSPInitCode_8029BB30[];
    u32 tick, v;
    u16 tmp;

    memcpy(OSGetArenaHi() - 0x80, (void *)0x81000000, 0x80);
    memcpy((void *)0x81000000, DSPInitCode_8029BB30, 0x80);
    DCFlushRange((void *)0x81000000, 0x80);

    __DSPRegsInit[9] = 0x43;
    __DSPRegsInit[5] = 0x8AC;
    __DSPRegsInit[5] |= 1;
    while (__DSPRegsInit[5] & 1) {}

    __DSPRegsInit[0] = 0;
    while (((__DSPRegsInit[2] << 16) | __DSPRegsInit[3]) & 0x80000000) {}

    *(volatile u32 *)(&__DSPRegsInit[16]) = 0x01000000;
    *(volatile u32 *)(&__DSPRegsInit[18]) = 0;
    *(volatile u32 *)(&__DSPRegsInit[20]) = 0x20;

    tmp = __DSPRegsInit[5];
    while (!(tmp & 0x20)) {
        tmp = __DSPRegsInit[5];
    }
    __DSPRegsInit[5] = tmp;

    tick = OSGetTick();
    while ((s32)(OSGetTick() - tick) < 0x892) {}

    *(volatile u32 *)(&__DSPRegsInit[16]) = 0x01000000;
    *(volatile u32 *)(&__DSPRegsInit[18]) = 0;
    *(volatile u32 *)(&__DSPRegsInit[20]) = 0x20;

    tmp = __DSPRegsInit[5];
    while (!(tmp & 0x20)) {
        tmp = __DSPRegsInit[5];
    }
    __DSPRegsInit[5] = tmp;

    __DSPRegsInit[5] &= ~0x800;
    while (__DSPRegsInit[5] & 0x400) {}
    __DSPRegsInit[5] &= ~4;

    tmp = __DSPRegsInit[2];
    while (!(tmp & 0x8000)) {
        tmp = __DSPRegsInit[2];
    }
    v = tmp;
    v = __DSPRegsInit[3];

    __DSPRegsInit[5] |= 4;
    __DSPRegsInit[5] = 0x8AC;
    __DSPRegsInit[5] |= 1;
    while (__DSPRegsInit[5] & 1) {}

    memcpy((void *)0x81000000, OSGetArenaHi() - 0x80, 0x80);
}

#pragma push
typedef u32 OSTick;
volatile u16 __DSPRegs[] : (0xCC005000);
void __OSStopAudioSystem(void) {
    OSTick OSGetTick(void);
    u16 reg16;
    u32 start_tick;
    __DSPRegs[5] = 0x804;
    reg16 = __DSPRegs[27];
    __DSPRegs[27] = reg16 & ~0x8000;
    reg16 = (__DSPRegs[5]);
    while (reg16 & (0x400)) {
        reg16 = (__DSPRegs[5]);
    };
    reg16 = (__DSPRegs[5]);
    while (reg16 & (0x200)) {
        reg16 = (__DSPRegs[5]);
    };
    __DSPRegs[5] = 0x8ac;
    __DSPRegs[0] = 0;
    while (((__DSPRegs[2] << 16) | __DSPRegs[3]) & 0x80000000)
        ;
    start_tick = OSGetTick();
    while ((s32)(OSGetTick() - start_tick) < 0x2c)
        ;
    reg16 = __DSPRegs[5];
    __DSPRegs[5] = reg16 | 1;
    reg16 = (__DSPRegs[5]);
    while (reg16 & (0x001)) {
        reg16 = (__DSPRegs[5]);
    };
}
#pragma pop
#pragma push
asm void DCEnable(void) {
nofralloc
sync
mfspr r3, 1008
ori r3, r3, 0x4000
mtspr 1008 , r3
blr
}
#pragma pop

asm void DCInvalidateRange(register void* addr, register u32 nBytes) {
nofralloc
cmplwi nBytes, 0
blelr
clrlwi r5, addr, 27
add nBytes, nBytes, r5
addi nBytes, nBytes, 31
srwi nBytes, nBytes, 5
mtctr nBytes
@1
dcbi r0, addr
addi addr, addr, 32
bdnz @1
blr
}

#pragma opt_unroll_loops off
#pragma push
asm void DCFlushRange(register void* addr, register u32 nBytes) {
nofralloc
cmplwi nBytes, 0
blelr
clrlwi r5, addr, 27
add nBytes, nBytes, r5
addi nBytes, nBytes, 31
srwi nBytes, nBytes, 5
mtctr nBytes
@1
dcbf r0, addr
addi addr, addr, 32
bdnz @1
sc
blr
}
#pragma pop
#pragma push
asm void fn_80205110(register void* addr, register u32 nBytes) {
nofralloc
cmplwi nBytes, 0
blelr
clrlwi r5, addr, 27
add nBytes, nBytes, r5
addi nBytes, nBytes, 31
srwi nBytes, nBytes, 5
mtctr nBytes
@1
dcbst r0, addr
addi addr, addr, 32
bdnz @1
sc
blr
}
#pragma pop

asm void DCFlushRangeNoSync(register void* addr, register u32 nBytes) {
nofralloc
cmplwi nBytes, 0
blelr
clrlwi r5, addr, 27
add nBytes, nBytes, r5
addi nBytes, nBytes, 31
srwi nBytes, nBytes, 5
mtctr nBytes
@1
dcbf r0, addr
addi addr, addr, 32
bdnz @1
blr
}

asm void fn_8020516C(register void* addr, register u32 nBytes) {
nofralloc
cmplwi nBytes, 0
blelr
clrlwi r5, addr, 27
add nBytes, nBytes, r5
addi nBytes, nBytes, 31
srwi nBytes, nBytes, 5
mtctr nBytes
@1
dcbst r0, addr
addi addr, addr, 32
bdnz @1
blr
}

asm void fn_80205198(register void* addr, register u32 nBytes) {
nofralloc
cmplwi nBytes, 0
blelr
clrlwi r5, addr, 27
add nBytes, nBytes, r5
addi nBytes, nBytes, 31
srwi nBytes, nBytes, 5
mtctr nBytes
@1
dcbz r0, addr
addi addr, addr, 32
bdnz @1
blr
}

#pragma intrinsic __icbi
asm void ICInvalidateRange(register void* addr, register u32 nBytes) {
nofralloc
cmplwi nBytes, 0
blelr
clrlwi r5, addr, 27
add nBytes, nBytes, r5
addi nBytes, nBytes, 31
srwi nBytes, nBytes, 5
mtctr nBytes
@1
icbi r0, addr
addi addr, addr, 32
bdnz @1
sync
isync
blr
}
asm void ICFlashInvalidate(void) {
nofralloc
mfspr r3, 1008
ori r3, r3, 0x800
mtspr 1008 , r3
blr
}

asm void ICEnable(void) {
nofralloc
isync
mfspr r3, 1008
ori r3, r3, 0x8000
mtspr 1008 , r3
blr
}

static asm void fn_8020521C(void) {
nofralloc
mfmsr r5
ori r5, r5, 0x1000
mtmsr r5
lis r3, 0x8000
li r4, 1024
mtctr r4
_touchloop:
dcbt 0,r3
dcbst 0,r3
addi r3,r3,32
bdnz _touchloop
mfspr r4, 920
oris r4, r4, 0x100F
mtspr 920 , r4
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
lis r3, 0xE000
ori r3, r3, 0x0002
mtspr 543 , r3
ori r3, r3, 0x01fe
mtspr 542 , r3
isync
lis r3, 0xE000
li r6, 512
mtctr r6
li r6, 0
_lockloop:
dcbz_l r6, r3
addi r3, r3, 32
bdnz+ _lockloop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
nop
blr
}

void fn_802052E8(void) {
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    void fn_8020521C(void);

    u32 interrupts;

    interrupts = OSDisableInterrupts();
    fn_8020521C();
    OSRestoreInterrupts(interrupts);
}

asm void LCDisable(void) {
nofralloc
lis r3, 0xE000
li r4, 512
mtctr r4
@1
dcbi r0, r3
addi r3, r3, 32
bdnz @1
mfspr r4, 920
rlwinm r4, r4, 0, 4, 2
mtspr 920 , r4
blr
}

asm void fn_80205348(register void* destTag, register void* srcAddr, register u32 numBlocks) {
nofralloc
rlwinm r6, numBlocks, 30, 27, 31
rlwinm srcAddr, srcAddr, 0, 4, 31
or r6, r6, srcAddr
mtspr 922 , r6
rlwinm r6, numBlocks, 2, 28, 29
or r6, r6, destTag
ori r6, r6, 0x12
mtspr 923 , r6
blr
}

asm void fn_8020536C(register void* destAddr, register void* srcTag, register u32 numBlocks) {
nofralloc
rlwinm r6, numBlocks, 30, 27, 31
rlwinm destAddr, destAddr, 0, 4, 31
or r6, r6, destAddr
mtspr 922 , r6
rlwinm r6, numBlocks, 2, 28, 29
or r6, r6, srcTag
ori r6, r6, 0x2
mtspr 923 , r6
blr
}

#pragma peephole off
u32 fn_80205390(s32 dest, s32 src, s32 size) {
    void fn_8020536C(s32, s32, u32);
    u32 remaining;
    u32 count;

    remaining = (u32)(size + 31) >> 5;
    count = (remaining + 127) >> 7;
    goto test;
    do {
        if (remaining < 128) {
            fn_8020536C(dest, src, remaining);
            remaining = 0;
        } else {
            fn_8020536C(dest, src, 0);
            remaining -= 128;
            dest += 0x1000;
            src += 0x1000;
        }
    test:
        ;
    } while (remaining != 0);
    return count;
}
#pragma peephole reset
extern u32 __SPR_392;
asm void fn_8020543C(register u32 len) {
nofralloc
@1
mfspr r4, 920
rlwinm r4, r4, 8, 28, 31
cmpw r4, r3
bgt @1
blr
}

#pragma peephole off
void L2GlobalInvalidate(void) {
    u32 PPCMfl2cr(void);
    void PPCMtl2cr(u32);
    void DBPrintf(char *, ...);

    __sync();
    PPCMtl2cr(PPCMfl2cr() & ~0x80000000);
    __sync();
    PPCMtl2cr(PPCMfl2cr() | 0x00200000);
    while (PPCMfl2cr() & 1) {
    }
    PPCMtl2cr(PPCMfl2cr() & ~0x00200000);
    while (PPCMfl2cr() & 1) {
        DBPrintf((char *)lbl_8029BBB0);
    }
}
void DMAErrorHandler(u8 error, void *context, ...) {
    u32 hid2;
    void *ctx;
    char *strings;

    ctx = context;
    strings = (char *)lbl_8029BBB0;
    hid2 = (u32)PPCMfhid2();
    OSReport(strings + 0x2C);
    OSReport(strings + 0x44, hid2, *(u32 *)((u8 *)ctx + 0x19C));
    if ((hid2 & 0x00F00000) == 0 || (*(u32 *)((u8 *)ctx + 0x19C) & 0x00200000) == 0) {
        OSReport(strings + 0x60);
        OSDumpContext(ctx);
        PPCHalt();
    }
    OSReport(strings + 0x90);
    OSReport(strings + 0xCC);
    if ((hid2 & 0x00800000) != 0) {
        OSReport(strings + 0x104);
    }
    if ((hid2 & 0x00400000) != 0) {
        OSReport(strings + 0x144);
    }
    if ((hid2 & 0x00200000) != 0) {
        OSReport(strings + 0x170);
    }
    if ((hid2 & 0x00100000) != 0) {
        OSReport(strings + 0x190);
    }
    PPCMthid2(hid2);
}
#pragma peephole off
void __OSCacheInit(void) {
    u32 PPCMfl2cr(void);
    void ICEnable(void);
    void DCEnable(void);
    void L2GlobalInvalidate(void);
    void DBPrintf(char *, ...);
    void PPCMtl2cr(u32);
    OSErrorHandler OSSetErrorHandler(u16, OSErrorHandler);
    char *strings;
    u32 msr;
    u32 bit;

    strings = (char *)lbl_8029BBB0;
    bit = PPCMfhid0() & 0x8000U;
    if (bit == 0U) {
        ICEnable();
        DBPrintf(strings + 0x1AC);
    }
    bit = PPCMfhid0() & 0x4000U;
    if (bit == 0U) {
        DCEnable();
        DBPrintf(strings + 0x1C8);
    }
    if ((PPCMfl2cr() & 0x80000000U) == 0U) {
        msr = PPCMfmsr();
        __sync();
        PPCMtmsr(0x30);
        __sync();
        __sync();
        PPCMtl2cr(PPCMfl2cr() & 0x7FFFFFFF);
        __sync();
        L2GlobalInvalidate();
        PPCMtmsr(msr);
        PPCMtl2cr((PPCMfl2cr() | 0x80000000U) & ~0x00200000U);
        DBPrintf(strings + 0x1E4);
    }
    OSSetErrorHandler(1, (OSErrorHandler)DMAErrorHandler);
    DBPrintf(strings + 0x1FC);
}
#pragma peephole on
#pragma push
static asm void __OSLoadFPUContext(register u32 dummy, register OSContext* fpucontext) {
nofralloc
lhz r5, fpucontext->state;
clrlwi. r5, r5, 31
beq _return
lfd fp0, 400 (fpucontext)
mtfsf 0xFF, fp0
mfspr r5, 920
rlwinm. r5, r5, 3, 31, 31
beq _regular_FPRs
psq_l fp0, 456 (fpucontext), 0, 0
psq_l fp1, 464 (fpucontext), 0, 0
psq_l fp2, 472 (fpucontext), 0, 0
psq_l fp3, 480 (fpucontext), 0, 0
psq_l fp4, 488 (fpucontext), 0, 0
psq_l fp5, 496 (fpucontext), 0, 0
psq_l fp6, 504 (fpucontext), 0, 0
psq_l fp7, 512 (fpucontext), 0, 0
psq_l fp8, 520 (fpucontext), 0, 0
psq_l fp9, 528 (fpucontext), 0, 0
psq_l fp10, 536 (fpucontext), 0, 0
psq_l fp11, 544 (fpucontext), 0, 0
psq_l fp12, 552 (fpucontext), 0, 0
psq_l fp13, 560 (fpucontext), 0, 0
psq_l fp14, 568 (fpucontext), 0, 0
psq_l fp15, 576 (fpucontext), 0, 0
psq_l fp16, 584 (fpucontext), 0, 0
psq_l fp17, 592 (fpucontext), 0, 0
psq_l fp18, 600 (fpucontext), 0, 0
psq_l fp19, 608 (fpucontext), 0, 0
psq_l fp20, 616 (fpucontext), 0, 0
psq_l fp21, 624 (fpucontext), 0, 0
psq_l fp22, 632 (fpucontext), 0, 0
psq_l fp23, 640 (fpucontext), 0, 0
psq_l fp24, 648 (fpucontext), 0, 0
psq_l fp25, 656 (fpucontext), 0, 0
psq_l fp26, 664 (fpucontext), 0, 0
psq_l fp27, 672 (fpucontext), 0, 0
psq_l fp28, 680 (fpucontext), 0, 0
psq_l fp29, 688 (fpucontext), 0, 0
psq_l fp30, 696 (fpucontext), 0, 0
psq_l fp31, 704 (fpucontext), 0, 0
_regular_FPRs:
lfd fp0, fpucontext->fpr[0]
lfd fp1, fpucontext->fpr[1]
lfd fp2, fpucontext->fpr[2]
lfd fp3, fpucontext->fpr[3]
lfd fp4, fpucontext->fpr[4]
lfd fp5, fpucontext->fpr[5]
lfd fp6, fpucontext->fpr[6]
lfd fp7, fpucontext->fpr[7]
lfd fp8, fpucontext->fpr[8]
lfd fp9, fpucontext->fpr[9]
lfd fp10, fpucontext->fpr[10]
lfd fp11, fpucontext->fpr[11]
lfd fp12, fpucontext->fpr[12]
lfd fp13, fpucontext->fpr[13]
lfd fp14, fpucontext->fpr[14]
lfd fp15, fpucontext->fpr[15]
lfd fp16, fpucontext->fpr[16]
lfd fp17, fpucontext->fpr[17]
lfd fp18, fpucontext->fpr[18]
lfd fp19, fpucontext->fpr[19]
lfd fp20, fpucontext->fpr[20]
lfd fp21, fpucontext->fpr[21]
lfd fp22, fpucontext->fpr[22]
lfd fp23, fpucontext->fpr[23]
lfd fp24, fpucontext->fpr[24]
lfd fp25, fpucontext->fpr[25]
lfd fp26, fpucontext->fpr[26]
lfd fp27, fpucontext->fpr[27]
lfd fp28, fpucontext->fpr[28]
lfd fp29, fpucontext->fpr[29]
lfd fp30, fpucontext->fpr[30]
lfd fp31, fpucontext->fpr[31]
_return:
blr
}
#pragma pop

#pragma push
static asm void __OSSaveFPUContext(register u32 dummy1, register u32 dummy2, register OSContext* fpucontext) {
nofralloc
lhz r3, fpucontext->state
ori r3, r3, 1
sth r3, fpucontext->state
stfd fp0, fpucontext->fpr[0]
stfd fp1, fpucontext->fpr[1]
stfd fp2, fpucontext->fpr[2]
stfd fp3, fpucontext->fpr[3]
stfd fp4, fpucontext->fpr[4]
stfd fp5, fpucontext->fpr[5]
stfd fp6, fpucontext->fpr[6]
stfd fp7, fpucontext->fpr[7]
stfd fp8, fpucontext->fpr[8]
stfd fp9, fpucontext->fpr[9]
stfd fp10, fpucontext->fpr[10]
stfd fp11, fpucontext->fpr[11]
stfd fp12, fpucontext->fpr[12]
stfd fp13, fpucontext->fpr[13]
stfd fp14, fpucontext->fpr[14]
stfd fp15, fpucontext->fpr[15]
stfd fp16, fpucontext->fpr[16]
stfd fp17, fpucontext->fpr[17]
stfd fp18, fpucontext->fpr[18]
stfd fp19, fpucontext->fpr[19]
stfd fp20, fpucontext->fpr[20]
stfd fp21, fpucontext->fpr[21]
stfd fp22, fpucontext->fpr[22]
stfd fp23, fpucontext->fpr[23]
stfd fp24, fpucontext->fpr[24]
stfd fp25, fpucontext->fpr[25]
stfd fp26, fpucontext->fpr[26]
stfd fp27, fpucontext->fpr[27]
stfd fp28, fpucontext->fpr[28]
stfd fp29, fpucontext->fpr[29]
stfd fp30, fpucontext->fpr[30]
stfd fp31, fpucontext->fpr[31]
mffs fp0
stfd fp0, 400 (fpucontext)
lfd fp0, fpucontext->fpr[0]
mfspr r3, 920
rlwinm. r3, r3, 3, 31, 31
bc 12, 2, _return
psq_st fp0, 456 (fpucontext), 0, 0
psq_st fp1, 464 (fpucontext), 0, 0
psq_st fp2, 472 (fpucontext), 0, 0
psq_st fp3, 480 (fpucontext), 0, 0
psq_st fp4, 488 (fpucontext), 0, 0
psq_st fp5, 496 (fpucontext), 0, 0
psq_st fp6, 504 (fpucontext), 0, 0
psq_st fp7, 512 (fpucontext), 0, 0
psq_st fp8, 520 (fpucontext), 0, 0
psq_st fp9, 528 (fpucontext), 0, 0
psq_st fp10, 536 (fpucontext), 0, 0
psq_st fp11, 544 (fpucontext), 0, 0
psq_st fp12, 552 (fpucontext), 0, 0
psq_st fp13, 560 (fpucontext), 0, 0
psq_st fp14, 568 (fpucontext), 0, 0
psq_st fp15, 576 (fpucontext), 0, 0
psq_st fp16, 584 (fpucontext), 0, 0
psq_st fp17, 592 (fpucontext), 0, 0
psq_st fp18, 600 (fpucontext), 0, 0
psq_st fp19, 608 (fpucontext), 0, 0
psq_st fp20, 616 (fpucontext), 0, 0
psq_st fp21, 624 (fpucontext), 0, 0
psq_st fp22, 632 (fpucontext), 0, 0
psq_st fp23, 640 (fpucontext), 0, 0
psq_st fp24, 648 (fpucontext), 0, 0
psq_st fp25, 656 (fpucontext), 0, 0
psq_st fp26, 664 (fpucontext), 0, 0
psq_st fp27, 672 (fpucontext), 0, 0
psq_st fp28, 680 (fpucontext), 0, 0
psq_st fp29, 688 (fpucontext), 0, 0
psq_st fp30, 696 (fpucontext), 0, 0
psq_st fp31, 704 (fpucontext), 0, 0
_return:
blr
}
#pragma pop

#pragma dont_inline on
#pragma push
asm void OSSaveFPUContext(register OSContext *fpucontext) {
    nofralloc
    addi    r5, fpucontext, 0
    b       __OSSaveFPUContext
}
#pragma pop
asm void OSSetCurrentContext(register OSContext *context){
    nofralloc

    addis   r4, r0, 0x8000

    stw     context, 0x00D4(r4)

    clrlwi  r5, context, 2
    stw     r5, 0x00C0(r4)

    lwz     r5, 0x00D8(r4)
    cmpw    r5, context
    bne     _disableFPU

    lwz     r6, context->srr1
    ori     r6, r6, 0x2000
    stw     r6, context->srr1
    mfmsr   r6
    ori     r6, r6, 2
    mtmsr   r6
    blr

_disableFPU:
    lwz     r6, context->srr1
    rlwinm  r6, r6, 0, 19, 17
    stw     r6, context->srr1
    mfmsr   r6
    rlwinm  r6, r6, 0, 19, 17
    ori     r6, r6, 2
    mtmsr   r6
    isync
    blr
}

#pragma dont_inline reset

s32 fn_802059EC(void) {
    // Returns the value at address 0x800000D4 (likely a global variable)
    return *(s32 *)0x800000D4;
}

asm u32 fn_802059F8(register OSContext *context) {
    nofralloc
    stmw    r13, context->gpr[13]
    mfspr   r0, GQR1
    stw     r0, context->gqr[1]
    mfspr   r0, GQR2
    stw     r0, context->gqr[2]
    mfspr   r0, GQR3
    stw     r0, context->gqr[3]
    mfspr   r0, GQR4
    stw     r0, context->gqr[4]
    mfspr   r0, GQR5
    stw     r0, context->gqr[5]
    mfspr   r0, GQR6
    stw     r0, context->gqr[6]
    mfspr   r0, GQR7
    stw     r0, context->gqr[7]
    mfcr    r0
    stw     r0, context->cr
    mflr    r0
    stw     r0, context->lr
    stw     r0, context->srr0
    mfmsr   r0
    stw     r0, context->srr1
    mfctr   r0
    stw     r0, context->ctr
    mfxer   r0
    stw     r0, context->xer
    stw     r1, context->gpr[1]
    stw     r2, context->gpr[2]
    li      r0, 0x1
    stw     r0, context->gpr[3]
    li      r3, 0
    blr
}

asm void OSLoadContext(register OSContext *context) {
    nofralloc

    lis      r4,OSDisableInterrupts@ha
    lwz      r6,context->srr0
    addi     r5,r4,OSDisableInterrupts@l
    cmplw    r6,r5
    ble      _notInRAS
    lis      r4,(OSDisableInterrupts+0xC)@ha
    addi     r0,r4,(OSDisableInterrupts+0xC)@l
    cmplw    r6,r0
    bge      _notInRAS
    stw      r5,context->srr0

_notInRAS:

    lwz     r0, context->gpr[0]
    lwz     r1, context->gpr[1]
    lwz     r2, context->gpr[2]

    lhz     r4, context->state
    rlwinm. r5, r4, 0, 30, 30
    beq     notexc
    rlwinm  r4, r4, 0, 31, 29
    sth     r4, context->state
    lmw     r5, context->gpr[5]
    b       misc
notexc:
    lmw    r13, context->gpr[13]
    misc:

    lwz     r4, context->gqr[1]
    mtspr   GQR1, r4
    lwz     r4, context->gqr[2]
    mtspr   GQR2, r4
    lwz     r4, context->gqr[3]
    mtspr   GQR3, r4
    lwz     r4, context->gqr[4]
    mtspr   GQR4, r4
    lwz     r4, context->gqr[5]
    mtspr   GQR5, r4
    lwz     r4, context->gqr[6]
    mtspr   GQR6, r4
    lwz     r4, context->gqr[7]
    mtspr   GQR7, r4

    lwz     r4, context->cr
    mtcr    r4
    lwz     r4, context->lr
    mtlr    r4
    lwz     r4, context->ctr
    mtctr   r4
    lwz     r4, context->xer
    mtxer   r4

    mfmsr   r4
    rlwinm  r4, r4, 0, 17, 15
    rlwinm  r4, r4, 0, 31, 29
    mtmsr   r4

    lwz     r4, context->srr0
    mtsrr0  r4
    lwz     r4, context->srr1
    mtsrr1  r4

    lwz     r4, context->gpr[4]
    lwz     r3, context->gpr[3]

    rfi
}

asm u32 fn_80205B50() {
    nofralloc
    mr r3, r1
    blr
}
#pragma dont_inline on
#pragma peephole off
void OSClearContext(OSContext *context) {
    context->mode = 0;
    context->state = 0;
    if (context == *(OSContext **)0x800000D8) {
        *(OSContext **)0x800000D8 = NULL;
    }
}
#pragma peephole reset
#pragma dont_inline reset
asm void fn_80205B7C(register OSContext* context, register u32 pc, register u32 newsp) {
    void OSClearContext(OSContext *context);
nofralloc
stw pc, 408 (context)
stw newsp, 4 (context)
li r11, 0
ori r11, r11, 0x00008000 | 0x00000020 | 0x00000010 | 0x00000002 | 0x00001000
stw r11, 412 (context)
li r0, 0x0
stw r0, 128 (context)
stw r0, 140 (context)
stw r2, 8 (context)
stw r13, 52 (context)
stw r0, 12 (context)
stw r0, 16 (context)
stw r0, 20 (context)
stw r0, 24 (context)
stw r0, 28 (context)
stw r0, 32 (context)
stw r0, 36 (context)
stw r0, 40 (context)
stw r0, 44 (context)
stw r0, 48 (context)
stw r0, 56 (context)
stw r0, 60 (context)
stw r0, 64 (context)
stw r0, 68 (context)
stw r0, 72 (context)
stw r0, 76 (context)
stw r0, 80 (context)
stw r0, 84 (context)
stw r0, 88 (context)
stw r0, 92 (context)
stw r0, 96 (context)
stw r0, 100 (context)
stw r0, 104 (context)
stw r0, 108 (context)
stw r0, 112 (context)
stw r0, 116 (context)
stw r0, 120 (context)
stw r0, 124 (context)
stw r0, 420 (context)
stw r0, 424 (context)
stw r0, 428 (context)
stw r0, 432 (context)
stw r0, 436 (context)
stw r0, 440 (context)
stw r0, 444 (context)
stw r0, 448 (context)
b OSClearContext
}

#pragma push
#pragma optimization_level 4
#pragma opt_propagation off
void OSDumpContext(OSContext *context) {
    extern char lbl_8029BDE0[];
    s32 __cvt_fp2unsigned(f64);
    char *str;
    OSContext exceptionContext;
    OSContext *oldCtx;
    BOOL enabled;
    u32 i;
    u32 *p;
    u32 j;
    s32 hi;
    s32 lo;
    u32 gpr;
    u32 gpr2;

    str = lbl_8029BDE0;
    OSReport(str, context);
    for (i = 0; i < 16; i++) {
        gpr2 = context->gpr[i + 16];
        gpr = context->gpr[i];
        OSReport(str + 0x44, i, gpr, gpr, i + 16, gpr2, gpr2);
    }
    OSReport(str + 0x74, context->lr, context->cr);
    OSReport(str + 0xA4, context->srr0, context->srr1);
    OSReport(str + 0xD4);
    for (i = 0; i < 4; i++) {
        OSReport(str + 0xE8, i, context->gqr[i], i + 4, context->gqr[i + 4]);
    }
    if (context->state & 1u) {
        enabled = OSDisableInterrupts();
        oldCtx = *(OSContext **)0x800000D4;
        exceptionContext.mode = 0;
        exceptionContext.state = 0;
        if (&exceptionContext == *(OSContext **)0x800000D8) {
            *(OSContext **)0x800000D8 = 0;
        }
        OSSetCurrentContext(&exceptionContext);
        OSReport(str + 0x10C);
        for (i = 0; i < 32; i += 2) {
            hi = __cvt_fp2unsigned(context->fpr[i + 1]);
            lo = __cvt_fp2unsigned(context->fpr[i]);
            OSReport(str + 0x120, i, lo, i + 1, hi);
        }
        OSReport(str + 0x13C);
        for (i = 0; i < 32; i += 2) {
            hi = __cvt_fp2unsigned(context->psf[i + 1]);
            lo = __cvt_fp2unsigned(context->psf[i]);
            OSReport(str + 0x150, i, lo, i + 1, hi);
        }
        exceptionContext.mode = 0;
        exceptionContext.state = 0;
        if (&exceptionContext == *(OSContext **)0x800000D8) {
            *(OSContext **)0x800000D8 = 0;
        }
        OSSetCurrentContext(oldCtx);
        OSRestoreInterrupts(enabled);
    }
    OSReport(str + 0x170);
    p = (u32 *)context->gpr[1];
    for (j = 0; p != 0 && (u32)p != 0xFFFFFFFF && j < 16; j++) {
        OSReport(str + 0x198, p, p[0], p[1]);
        p = (u32 *)p[0];
    }
}
#pragma pop
#pragma push
static asm void OSSwitchFPUContext(register u8 exception, register OSContext *context) {
    nofralloc
    mfmsr   r5
    ori     r5, r5, 0x2000
    mtmsr   r5
    isync
    lwz     r5, 0x19C(context)
    ori     r5, r5, 0x2000
    mtsrr1  r5
    addis   r3, r0, 0x8000
    lwz     r5, 0x00D8(r3)
    stw     context, 0x00D8(r3)
    cmpw    r5, r4
    beq     _restoreAndExit
    cmpwi   r5, 0x0
    beq     _loadNewFPUContext
    bl      __OSSaveFPUContext
_loadNewFPUContext:
    bl      __OSLoadFPUContext
_restoreAndExit:
    lwz     r3, 0x80(context)
    mtcr    r3
    lwz     r3, 0x84(context)
    mtlr    r3
    lwz     r3, 0x198(context)
    mtsrr0  r3
    lwz     r3, 0x88(context)
    mtctr   r3
    lwz     r3, 0x8C(context)
    mtxer   r3
    lhz     r3, context->state
    rlwinm  r3, r3, 0, 31, 29
    sth     r3, context->state
    lwz     r5, 20(context)
    lwz     r3, 12(context)
    lwz     r4, 16(context)
    rfi
}
#pragma pop

void __OSContextInit(void)
{
    void __OSSetExceptionHandler(s32, void *);
    void DBPrintf(char *, ...);
    extern char lbl_8029BF94[];

    __OSSetExceptionHandler(7, OSSwitchFPUContext);
    *(u32 *)0x800000D8 = 0;
    DBPrintf(lbl_8029BF94);
}

#pragma push
#pragma scheduling on
#pragma peephole on
int OSReport(void *msg, ...) {
struct { unsigned char gpr, fpr; unsigned char reserved[2]; void *input_arg_area; void *reg_save_area; } args[1];
int vprintf(const char *, void *);
__builtin_va_info(&args);
return vprintf(msg,args);
}
#pragma pop

#pragma push
#pragma peephole on
typedef struct {
    char gpr;
    char fpr;
    char reserved[2];
    char *input_arg_area;
    char *reg_save_area;
} __va_list[1];
typedef __va_list va_list;
void OSPanic(const char *file, int line, const char *msg, ...) {
    int vprintf(const char *format, va_list arg);
    u32 fn_80205B50(void);
    extern void OSDisableInterrupts(void);
    __declspec(weak) void OSReport(const char *msg, ...);
    void PPCHalt();
    va_list marker;
    u32 i;
    u32 *p;
    OSDisableInterrupts();
    ((void)msg, __builtin_va_info(&marker));
    vprintf(msg, marker);
    OSReport(" in \"%s\" on line %d.\n", file, line);
    OSReport("\nAddress:      Back Chain    LR Save\n");
    for (i = 0, p = (u32 *)fn_80205B50(); p && (u32)p != 0xffffffff && i++ < 16; p = (u32 *)*p) {
        OSReport("0x%08x:   0x%08x    0x%08x\n", p, p[0], p[1]);
    }
    PPCHalt();
}
#pragma pop

#pragma peephole on
#pragma scheduling reset
OSErrorHandler OSSetErrorHandler(u16 error, OSErrorHandler handler)
{
    u32 msr;
    OSErrorHandler oldHandler;
    BOOL enabled;
    OSContext *context;
    s32 i;
    u32 stackPad[4];
    u32 fpscr;

    (void)stackPad;

    enabled = OSDisableInterrupts();
    oldHandler = __OSErrorTable[error];
    __OSErrorTable[error] = handler;

    if (error == 16) {
        msr = PPCMfmsr();
        PPCMtmsr(msr | 0x2000);
        fpscr = PPCMffpscr();
        if (handler != 0) {
            for (context = *(OSContext **)0x800000DC; context;
                 context = *(OSContext **)((u8 *)context + 0x2FC)) {
                context->srr1 |= 0x900;
                if (!(context->state & 1)) {
                    u32 *p;
                    context->state |= 1;
                    p = (u32 *)context;
                    for (i = 4; i > 0; i--) {
                        p[0x25] = -1;
                        p[0x24] = -1;
                        p[0x73] = -1;
                        p[0x72] = -1;
                        p[0x27] = -1;
                        p[0x26] = -1;
                        p[0x75] = -1;
                        p[0x74] = -1;
                        p[0x29] = -1;
                        p[0x28] = -1;
                        p[0x77] = -1;
                        p[0x76] = -1;
                        p[0x2B] = -1;
                        p[0x2A] = -1;
                        p[0x79] = -1;
                        p[0x78] = -1;
                        p[0x2D] = -1;
                        p[0x2C] = -1;
                        p[0x7B] = -1;
                        p[0x7A] = -1;
                        p[0x2F] = -1;
                        p[0x2E] = -1;
                        p[0x7D] = -1;
                        p[0x7C] = -1;
                        p[0x31] = -1;
                        p[0x30] = -1;
                        p[0x7F] = -1;
                        p[0x7E] = -1;
                        p[0x33] = -1;
                        p[0x32] = -1;
                        p[0x81] = -1;
                        p[0x80] = -1;
                        p += 0x10;
                    }
                    context->fpscr = 4;
                }
                context->fpscr |= (lbl_80366F38 & 0xF8);
                context->fpscr &= (0x60060000 - 0x701);
            }
            fpscr |= (lbl_80366F38 & 0xF8);
            msr |= 0x900;
        } else {
            for (context = *(OSContext **)0x800000DC; context;
                 context = *(OSContext **)((u8 *)context + 0x2FC)) {
                context->srr1 &= ~0x900;
                context->fpscr &= ~0xF8;
                context->fpscr &= (0x60060000 - 0x701);
            }
            fpscr &= ~0xF8;
            msr &= ~0x900;
        }
        fpscr &= (0x60060000 - 0x701);
        PPCMtfpscr(fpscr);
        PPCMtmsr(msr);
    }
    OSRestoreInterrupts(enabled);
    return oldHandler;
}
#pragma scheduling on
extern char lbl_8029BFB8[];
extern char lbl_80366F3C;
extern s16 __OSLastInterrupt;
extern u32 __OSLastInterruptSrr0;
extern s64 __OSLastInterruptTime;
extern s64 OSGetTime(void);
extern void OSDisableScheduler(void);
extern void OSEnableScheduler(void);
extern void __OSReschedule(void);
extern void OSLoadContext(OSContext *);

#pragma push
#pragma opt_dead_code off
void __OSUnhandledException(u8 exception, OSContext *context, u32 dsisr, u32 dar) {
    OSErrorHandler *table;
    char *msgs;
    u32 srr1;
    u32 exc;
    s64 now;
    OSErrorHandler *entry;

    table = __OSErrorTable;
    msgs = lbl_8029BFB8;

    now = OSGetTime();
    srr1 = context->srr1;

    if (!(srr1 & 2)) {
        OSReport(msgs + 0x5C, exception);
        goto dump;
    }

    if (exception == 6 && (srr1 & 0x100000) && table[16] != 0) {
        u32 enableBits;
        s32 msr;
        u32 fpscr;

        exception = 16;
        msr = PPCMfmsr();
        PPCMtmsr((u32)msr | 0x2000);
        if (*(void **)0x800000D8 != 0) {
            OSSaveFPUContext(*(void **)0x800000D8);
        }
        fpscr = PPCMffpscr();
        enableBits = 0x60060000 - 0x701;
        PPCMtfpscr(fpscr & enableBits);
        PPCMtmsr((u32)msr);

        if (*(OSContext **)0x800000D8 == context) {
            OSDisableScheduler();
            table[16](16, context, dsisr, dar);
            context->srr1 &= ~0x2000;
            *(OSContext **)0x800000D8 = 0;
            context->fpscr &= enableBits;
            OSEnableScheduler();
            __OSReschedule();
        } else {
            context->srr1 &= ~0x2000;
            *(OSContext **)0x800000D8 = 0;
        }
        OSLoadContext(context);
    }

    exc = exception;
    entry = table + exception;
    if (*entry != 0) {
        OSDisableScheduler();
        (*entry)(exc, context, dsisr, dar);
        OSEnableScheduler();
        __OSReschedule();
        OSLoadContext(context);
    }

    if (exception == 8) {
        OSLoadContext(context);
    }

    OSReport(msgs + 0x7C, exception);

dump:
    OSReport(&lbl_80366F3C);
    OSDumpContext(context);
    OSReport(msgs + 0x94, dsisr, dar);
    OSReport(msgs + 0xC8, now);

    switch (exception) {
    case 2:
        OSReport(msgs + 0xD8, context->srr0, dar);
        break;
    case 3:
        OSReport(msgs + 0x138, context->srr0);
        break;
    case 5:
        OSReport(msgs + 0x184, context->srr0, dar);
        break;
    case 6:
        OSReport(msgs + 0x1E8, context->srr0, dar);
        break;
    case 15: {
        u16 *hw;
        OSReport(&lbl_80366F3C);
        hw = (u16 *)0xCC005000;
        OSReport(msgs + 0x248, hw[24], hw[25]);
        OSReport(msgs + 0x268, hw[16], hw[17]);
        OSReport(msgs + 0x288, *(u32 *)0xCC006014);
        OSReport(msgs + 0x2A4, __OSLastInterrupt, __OSLastInterruptSrr0,
                 __OSLastInterruptTime);
        break;
    }
    default:
        break;
    }

    PPCHalt();
}
#pragma push
#pragma optimization_level 4
s32 fn_80206658(u8 *addr, s32 argc, char **argv) {
    void *memset(void *, s32, u32);
    s32 strlen(const char *);
    char *strcpy(char *, const char *);
    s32 numArgs;
    char *bootInfo2;
    char *ptr;
    char **list;
    u32 i;

    bootInfo2 = (char *)addr;
    memset(bootInfo2, 0, 0x2000);

    if (argc == 0) {
        *(u32 *)(bootInfo2 + 8) = 0;
    } else {
        numArgs = argc;
        ptr = bootInfo2 + 0x2000;
        while (--argc >= 0) {
            ptr -= strlen(argv[argc]) + 1;
            strcpy(ptr, argv[argc]);
            argv[argc] = (char *)(ptr - bootInfo2);
        }

        ptr = bootInfo2 + ((ptr - bootInfo2) & ~0x3);
        ptr -= ((numArgs + 1) * 4);
        list = (char **)ptr;

        for (i = 0; i < numArgs + 1; i++) {
            list[i] = argv[i];
        }

        ptr -= 4;
        *(u32 *)ptr = numArgs;

        *(u32 *)(bootInfo2 + 8) = (ptr - bootInfo2);
    }

    return 1;
}
#pragma pop
void fn_802067E0(s32 arg0) {
    M2C_UNK ICFlashInvalidate();
    ICFlashInvalidate();
    M2C_SYNC();
    M2C_SYNC();
}

void fn_80206808(void) { return; }

#pragma peephole off
void fn_8020681C(u32 arg0, s32 arg1, s32 arg2) {
    void DVDReadAbsAsyncPrio(void *, u32, s32, s32, s32, s32);
    s32 DVDGetCommandBlockStatus(void *);
    s32 DVDKeepAlive(void);
    void __OSHotReset(s32);
    u8 cmd[0x30];

    DVDReadAbsAsyncPrio(cmd, arg0, arg1, arg2, 0, 0);
    while (DVDGetCommandBlockStatus(cmd) != 0) {
        if (DVDKeepAlive() == 0) {
            __OSHotReset(0);
        }
    }
}
#pragma peephole on
void fn_80206888(void) {
    extern s32 lbl_803684B0;
    lbl_803684B0 = 1;
}

#pragma peephole off
void __OSGetExecParams(s32 *arg0) {
    void *memcpy(void *, const void *, u32);

    if (0x80000000U <= *(u32 *)(0x80000000U + 0x30F0)) {
        memcpy(arg0, (void *)*(u32 *)(0x80000000U + 0x30F0), 0x1C);
    } else {
        *arg0 = 0;
    }
}
#pragma peephole on

#pragma peephole off
/* Return disc offset of the apploader (cached); default 0x2440 when BI2 has none. */
s32 DVDGetAppLoaderOffset(void) {
    u32 OSAllocFromArenaLo(u32, u32);
    void DVDReadAbsAsyncPrio(void *, u32, s32, s32, s32, s32);
    s32 DVDGetCommandBlockStatus(void *);
    s32 DVDKeepAlive(void);
    void __OSHotReset(s32);
    extern s32 sAppLoaderOffset;

    u8 cmd[0x38];
    u32 buf;

    if (sAppLoaderOffset != 0) {
        return sAppLoaderOffset;
    }
    if (*(s32 *)0x800030F4 != 0) {
        buf = OSAllocFromArenaLo(0x40, 0x20);
        DVDReadAbsAsyncPrio(cmd, buf, 0x40, *(s32 *)0x800030F4, 0, 0);
        while (DVDGetCommandBlockStatus(cmd) != 0) {
            if (DVDKeepAlive() == 0) {
                __OSHotReset(0);
            }
        }
        sAppLoaderOffset = *(s32 *)0x800030F4 + *(s32 *)(buf + 0x38);
    } else {
        sAppLoaderOffset = 0x2440;
    }
    return sAppLoaderOffset;
}
#pragma push
#pragma optimization_level 4
#pragma peephole off
static inline s32 Boot_GetAppLoaderOffset(void) {
    u32 OSAllocFromArenaLo(u32, u32);
    void DVDReadAbsAsyncPrio(void *, u32, s32, s32, s32, s32);
    s32 DVDGetCommandBlockStatus(void *);
    s32 DVDKeepAlive(void);
    void __OSHotReset(s32);
    extern s32 sAppLoaderOffset;
    u8 cmd[0x30];
    u32 buf;
    if (sAppLoaderOffset != 0) return sAppLoaderOffset;
    if (*(s32 *)0x800030F4 != 0) {
        buf = OSAllocFromArenaLo(0x40, 0x20);
        DVDReadAbsAsyncPrio(cmd, buf, 0x40, *(s32 *)0x800030F4, 0, 0);
        while (DVDGetCommandBlockStatus(cmd) != 0) {
            if (DVDKeepAlive() == 0) __OSHotReset(0);
        }
        sAppLoaderOffset = *(s32 *)0x800030F4 + *(s32 *)(buf + 0x38);
    } else sAppLoaderOffset = 0x2440;
    return sAppLoaderOffset;
}

#pragma push
#pragma peephole off
#pragma opt_common_subs off
#pragma optimization_level 4
#pragma opt_common_subs on
void fn_80206998(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    BOOL OSDisableInterrupts(void);
    void OSEnableInterrupts(void);
    void DVDInit(void);
    void __OSMaskInterrupts(s32);
    void __OSUnmaskInterrupts(s32);
    void OSSetArenaLo(void *);
    void ICInvalidateRange(void *, s32);
    void ICFlashInvalidate(void);
    u32 OSAllocFromArenaLo(u32, u32);
    void fn_80206658(u32, s32, s32);
    void fn_802067E0(s32);
    void fn_8020681C(u32, s32, s32);
    s32 DVDGetAppLoaderOffset(void);
    void fn_80206888(void);
    void __OSHotReset(s32);
    void DVDReadAbsAsyncPrio(void *, u32, s32, s32, s32, s32);
    void fn_8020ED90(void *, s32);
    s32 DVDGetCommandBlockStatus(void *);
    void fn_8020F058(s32);
    void fn_8020F068(void);
    u8 *fn_8020F404(void);
    s32 DVDKeepAlive(void);
    void fn_8020F504(void *);
    void fn_8021382C(s32);
    void fn_80213AEC(s32);
    void fn_80213B18(s32);
    s32 Str_NCmp(u32, void *, s32);
    void *memcpy(void *, void *, u32);
    int OSReport(void *msg, ...);
    extern s32 __OSIsGcam;
    extern s32 lbl_803684B0;
    extern s32 sAppLoaderOffset;
    extern char lbl_8029C2D8[];

    typedef void (*CB0)(void *);
    typedef s32 (*CB1)(void **, s32 *, s32 *);
    typedef s32 (*CB2)(void);
    typedef void (*SetupFn)(CB0 *, CB1 *, CB2 *);

    u8 spDC[0x34];
    s32 spD4;
    s32 spD0;
    void *spCC;
    CB2 spC8;
    CB1 spC4;
    CB0 spC0;
    u8 sp8C[0x30];
    u8 sp2C[0x30];
    s32 temp_r28;
    u32 temp_r31;
    u32 temp_r30;
    u32 temp_r3;
    s32 var_r0;

    OSDisableInterrupts();
    temp_r31 = OSAllocFromArenaLo(0x1C, 1);
    *(s32 *)temp_r31 = 1;
    *(s32 *)(temp_r31 + 4) = arg1;
    *(s32 *)(temp_r31 + 0xC) = arg2;
    *(s32 *)(temp_r31 + 0x10) = arg3;
    *(s32 *)(temp_r31 + 0x14) = arg4;
    if (arg4 == 0) {
        *(u32 *)(temp_r31 + 0x18) = OSAllocFromArenaLo(0x2000, 1);
        fn_80206658(*(u32 *)(temp_r31 + 0x18), arg5, arg6);
    }
    DVDInit();
    fn_8020F058(1);
    fn_8020F068();
    lbl_803684B0 = 0;
    fn_8020F504(fn_80206888);
    __OSMaskInterrupts(-0x20);
    __OSUnmaskInterrupts(0x400);
    OSEnableInterrupts();

    while (lbl_803684B0 != 1) {
        if (DVDKeepAlive() == 0)
            __OSHotReset(0);
    }

    if (__OSIsGcam == 0) {
        if (fn_8020F404()[8] != 0)
            var_r0 = 1;
        else
            var_r0 = 0;
        if (var_r0 != 0) {
            fn_80213AEC(0);
            fn_80213B18(0);
            fn_8020ED90(spDC, 0);
            while (DVDGetCommandBlockStatus(spDC) != 0) {
                if (DVDKeepAlive() == 0)
                    __OSHotReset(0);
            }
            fn_8021382C(0);
        }
    }

    temp_r30 = OSAllocFromArenaLo(0x20, 0x20);
    fn_8020681C(temp_r30, 0x20, DVDGetAppLoaderOffset());
    {
        s32 off = DVDGetAppLoaderOffset() + 0x20;
        fn_8020681C(0x81200000, (*(s32 *)(temp_r30 + 0x14) + 0x1F) & ~0x1F, off);
    }
    ICInvalidateRange((void *)0x81200000, (*(s32 *)(temp_r30 + 0x14) + 0x1F) & ~0x1F);

    if (Str_NCmp(temp_r30, lbl_8029C2D8, 0xA) > 0)
        var_r0 = 1;
    else
        var_r0 = 0;

    if (var_r0 != 0) {
        if ((u32)(arg0 + 0x10000) == 0xFFFFU) {
            arg0 = Boot_GetAppLoaderOffset() + *(s32 *)(temp_r30 + 0x14);
            arg0 += 0x20;
        }
        *(s32 *)(temp_r31 + 8) = arg0;
        ((SetupFn)*(void **)(temp_r30 + 0x10))(&spC0, &spC4, &spC8);
        temp_r3 = OSAllocFromArenaLo(0x1C, 1);
        memcpy((void *)temp_r3, (void *)temp_r31, 0x1C);
        *(u32 *)0x800030F0 = temp_r3;
        spC0((void *)OSReport);
        OSSetArenaLo((void *)temp_r3);

        while (spC4(&spCC, &spD0, &spD4) != 0) {
            { s32 off = spD4; s32 len = spD0; u32 dest = (u32)spCC; DVDReadAbsAsyncPrio(sp2C, dest, len, off, 0, 0); }
            while (DVDGetCommandBlockStatus(sp2C) != 0) {
                if (DVDKeepAlive() == 0)
                    __OSHotReset(0);
            }
        }

        temp_r28 = spC8();
        temp_r3 = OSAllocFromArenaLo(0x1C, 1);
        memcpy((void *)temp_r3, (void *)temp_r31, 0x1C);
        *(u32 *)0x800030F0 = temp_r3;
        *(s32 *)0xCC003024 = 7;
        OSDisableInterrupts();
        fn_802067E0(temp_r28);
    } else {
        *(s32 *)0x812FDFF0 = arg2;
        *(s32 *)0x812FDFEC = arg3;
        *(u8 *)0x800030E2 = 1;
        DVDReadAbsAsyncPrio(sp8C, 0x81300000, (*(s32 *)(temp_r30 + 0x18) + 0x1F) & ~0x1F, DVDGetAppLoaderOffset() + *(s32 *)(temp_r30 + 0x14) + 0x20, 0, 0);
        while (DVDGetCommandBlockStatus(sp8C) != 0) {
            if (DVDKeepAlive() == 0)
                __OSHotReset(0);
        }
        ICInvalidateRange((void *)0x81300000, (*(s32 *)(temp_r30 + 0x18) + 0x1F) & ~0x1F);
        OSDisableInterrupts();
        ICFlashInvalidate();
        fn_802067E0(0x81300000);
    }
}
#pragma pop
void fn_80206E1C(u32 bootDol, u32 resetCode, char **argv) {
    void fn_8020878C(s32 *, s32 *);
    int sprintf(char *, char *, ...);
    u32 OSAllocFromArenaLo(u32, u32);
    void fn_80206998(s32, s32, s32, s32, s32, s32, s32);
    extern char lbl_80366F40;

    char buffer[0x18];
    s32 sp18;
    s32 sp14;
    s32 *newArgv;
    s32 count;
    s32 i;

    fn_8020878C(&sp18, &sp14);
    sprintf(buffer, &lbl_80366F40, bootDol);

    count = 0;
    if (argv != NULL) {
        while (argv[count] != NULL) {
            count++;
        }
    }

    newArgv = (s32 *)OSAllocFromArenaLo((count + 2) * 4, 1);
    newArgv[0] = (s32)buffer;

    for (i = 1; i < count + 1; i++) {
        newArgv[i] = (s32)argv[i - 1];
    }

    fn_80206998(-1, (s32)resetCode, sp18, sp14, 0, count + 1, (s32)newArgv);
}
#pragma peephole on
/* Map a character code to an OS font sheet glyph index (SJIS if encode==1). */
int OSFontCodeToIndex(u16 encode, u16 code) {
    extern u16 OSFontAnsiIndex[];
    extern u16 OSFontSjisIndex[];
    int row;
    int col;

    if (encode == 1) {
        if (0x20 <= code && code <= 0xDF) {
            return OSFontAnsiIndex[code - 0x20];
        } else if (0x889E < code && code <= 0x9872) {
            row = ((code >> 8) - 0x88) * 188;
            col = code & 0xFF;
            if (!IsSjisTrailByte(col)) {
                return 0;
            }
            col -= 0x40;
            if (0x40 <= col) {
                col--;
            }
            return row + col + 0x2BE;
        } else if (0x8140 <= code && code < 0x879E) {
            row = ((code >> 8) - 0x81) * 188;
            col = code & 0xFF;
            if (!IsSjisTrailByte(col)) {
                return 0;
            }
            col -= 0x40;
            if (0x40 <= col) {
                col--;
            }
            return OSFontSjisIndex[row + col];
        }
    } else if (0x20 < code && code <= 0xFF) {
        return code - 0x20;
    }
    return 0;
}

/* Decode a Yay0 bitstream from src into dst (literal bytes and back-references). */
void Yay0_Decode(u8 *src, u8 *dst) {
    int link;
    int copySrc;
    int bitsPos;
    int dstPos;
    int linkPos;
    int literalPos;
    int copyLen;
    int outSize;
    u32 bitsLeft;
    u32 flags;

    outSize = *(int *)(src + 0x4);
    linkPos = *(int *)(src + 0x8);
    literalPos = *(int *)(src + 0xC);
    dstPos = 0;
    bitsLeft = 0;
    bitsPos = 16;

    do {
        if (bitsLeft == 0) {
            flags = *(u32 *)(src + bitsPos);
            bitsPos += 4;
            bitsLeft = 32;
        }

        if (flags & 0x80000000) {
            dst[dstPos++] = src[literalPos++];
        } else {
            link = (src[linkPos] << 8) | src[linkPos + 1];
            linkPos += 2;

            copySrc = dstPos - (link & 0xFFF);
            copyLen = link >> 12;
            if (copyLen == 0) {
                copyLen = src[literalPos++] + 0x12;
            } else {
                copyLen += 2;
            }

            for (; copyLen > 0; copyLen--) {
                dst[dstPos] = dst[copySrc - 1];
                dstPos++;
                copySrc++;
            }
        }
        flags <<= 1;
        bitsLeft--;
    } while (dstPos < outSize);
}

#pragma opt_common_subs off
u16 fn_802072A0(void) {
    extern u16 lbl_80366F48;
    extern void (*lbl_803684C0)(void);
    void fn_80207768(void);

    if (lbl_80366F48 != 0xFFFF) {
        return lbl_80366F48;
    }
    switch (*(s32 *)0x800000CC) {
    case 0:
        lbl_80366F48 = (*(u16 *)0xCC00206E & 2) ? 1 : 0;
        break;
    case 1:
    case 2:
    default:
        lbl_80366F48 = 0;
        break;
    }
    lbl_803684C0 = fn_80207768;
    return lbl_80366F48;
}
#pragma opt_common_subs reset
u32 fn_80207304(u8 *arg0, u16 arg1, FontImageHeader *arg2)
{
  s32 fn_802096B0(void *, s32, s32);
  void Yay0_Decode(u8 *, u8 *);
  s32 OSFontCodeToIndex(u16, u16);
  u16 *new_var5;
  extern u32 lbl_8036BCA0;
  extern u32 lbl_8036BCA4;
  s32 var_r25;
  s32 var_r26;
  s32 var_r27;
  int new_var2;
  u8 *var_r31;
  u32 size;
  s32 idx;
  u32 new_var4;
  s32 sheet;
  s32 pos;
  s32 row;
  s32 col;
  s32 x;
  u8 *base;
  int new_var3;
  s32 temp_r0;
  s32 temp_r3;
  s32 temp_r5;
  int new_var6;
  s32 temp_r8;
  s32 temp_r9;
  u32 imageOffset;
  u32 sp1C;
  u32 sp20;
  u8 *new_var;
  if (arg1 == 1)
  {
    var_r31 = arg0;
    var_r26 = 0x1AFF00;
    var_r27 = 0x4D000;
    while (var_r27 > 0)
    {
      if (var_r27 < (0x100 + 1))
      {
        var_r25 = var_r27;
      }
      else
      {
        var_r25 = 0x100;
      }
      var_r27 -= var_r25;
      do
      {
      }
      while (fn_802096B0(var_r31, var_r25, var_r26) == 0);
      var_r26 += var_r25;
      var_r31 += var_r25;
    }

  }
  else
  {
    var_r27 = (s32) arg0;
    var_r31 = (u8 *) 0x1FCF00;
    var_r26 = 0x3000;
    while (var_r26 > 0)
    {
      if (var_r26 <= 0x100)
      {
        var_r25 = var_r26;
      }
      else
      {
        var_r25 = 0x100;
      }
      var_r26 -= var_r25;
      new_var = var_r31;
      do
      {
      }
      while (fn_802096B0((u8 *) var_r27, var_r25, (s32) new_var) == 0);
      var_r31 += var_r25;
      var_r27 += var_r25;
    }

  }
  if (((arg0[0] == 0x59) && (arg0[1] == 0x61)) && (arg0[2] == 0x79))
  {
    size = *((u32 *) (arg0 + 4));
  }
  else
  {
    size = 0;
  }
  if (size == 0)
  {
    return 0;
  }
  Yay0_Decode(arg0, (u8 *) arg2);
  if (arg1 == 1)
  {
    sp1C = lbl_8036BCA0;
    temp_r0 += 0;
    sp20 = lbl_8036BCA4;
    idx = OSFontCodeToIndex(arg1, 0x54);
    temp_r9 = arg2->columns;
    temp_r8 = temp_r9 * arg2->rows;
    imageOffset = arg2->imageOffset;
    temp_r5 = arg2->height;
    temp_r0 = arg2->sheetWidth;
    sheet = idx / temp_r8;
    pos = idx % temp_r8;
    row = pos / temp_r9;
    temp_r5 = temp_r5 * row;
    col = pos - (row * temp_r9);
    x = col * arg2->width;
    base = ((u8 *) arg2) + (new_var4 = imageOffset);
    new_var6 = ((u32) (new_var2 = sheet * arg2->sheetSize)) >> 1;
    base += new_var6;
    temp_r0 = ((temp_r0 / 8) << 5) / 2;
    {
      s32 a = temp_r5 + 4;
      u8 *dst = base + (temp_r0 * (a / 8));
      dst += (x / 8) * 16;
      dst += (a % 8) * 2;
      dst += (x % 8) / 4;
      *((u16 *) dst) = ((u16 *) (&sp1C))[0];
    }
    new_var5 = &((u16 *) (&sp20))[1];
    {
      s32 a = temp_r5 + 5;
      s32 f = ((((s32) arg2->sheetWidth) / 8) << 5) / 2;
      u8 *dst = base + (f * (a / 8));
      dst += (x / 8) * 16;
      dst += (a % 8) * 2;
      dst += (x % 8) / 4;
      *((u16 *) dst) = ((u16 *) (&sp1C))[1];
    }
    {
      s32 a = temp_r5 + 6;
      s32 f = ((((s32) arg2->sheetWidth) / 8) << 5) / 2;
      u8 *dst = base + (f * (a / 8));
      dst += (x / 8) * 16;
      dst += (a % 8) * 2;
      dst += (x % 8) / 4;
      *((u16 *) dst) = ((u16 *) (&sp20))[0];
    }
    new_var3 = 16;
    {
      s32 a = temp_r5 + 7;
      s32 f = ((((s32) arg2->sheetWidth) / 8) << 5) / 2;
      u8 *dst = base + (f * (a / 8));
      dst += (x / 8) * new_var3;
      dst += (a % 8) * 2;
      dst += (x % 8) / 4;
      *((u16 *) dst) = *new_var5;
    }
  }
  return size;
}

s32 fn_80207628(s32 arg0, s32 arg1) {
    s32 fn_80207304(s32, s32, s32);
    extern s32 lbl_803684B8;
    extern s32 lbl_803684BC;
    s32 var_r31;
    u16 mode;

    mode = fn_802072A0();
    switch (mode) {
    case 0:
        lbl_803684B8 = arg0;
        var_r31 = fn_80207304(arg1, 0, lbl_803684B8);
        break;
    case 1:
        lbl_803684BC = arg0;
        var_r31 = fn_80207304(arg1, 1, lbl_803684BC);
        break;
    case 3:
    case 4:
    case 5:
        lbl_803684B8 = arg0;
        var_r31 = fn_80207304(arg1, 0, lbl_803684B8);
        if (var_r31 != 0) {
            lbl_803684BC = lbl_803684B8 + var_r31;
            var_r31 += fn_80207304(arg1, 1, lbl_803684BC);
        }
        break;
    case 2:
    default:
        var_r31 = 0;
        break;
    }
    return var_r31;
}

u8 *fn_80207768(u16 arg0, u8 *arg1, s32 *arg2, s32 *arg3) {
    extern s32 lbl_803684B8;
    extern s32 lbl_803684BC;
    extern s32 OSFontCodeToIndex(u16, u16);

    u16 code = 0;
    s32 font;

    switch (arg0) {
    case 0:
        font = lbl_803684B8;
        code = *arg1;
        if (code != 0) {
            arg1++;
        }
        break;
    case 1:
        font = lbl_803684BC;
        code = *arg1;
        if (code != 0) {
            arg1++;
            if ((((u8)code >= 0x81 && (u8)code <= 0x9f) || ((u8)code >= 0xe0 && (u8)code <= 0xfc)) != 0) {
                u8 b1 = *arg1;
                if (((b1 >= 0x40 && b1 <= 0xfc) && (b1 != 0x7f)) != 0) {
                    code = (u16)((code << 8) | *arg1++);
                }
            }
        }
        break;
    }

    *arg2 = font;
    *arg3 = OSFontCodeToIndex(arg0, code);
    return arg1;
}

#pragma push
#pragma optimization_level 3
#pragma opt_strength_reduction off
s32 fn_802078A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
extern u16 lbl_80366F48;
extern void (*lbl_803684C0)(void);
FontImageHeader *h; s32 index;
s32 mask, col, row, y, x, cells, result; u8 pixel, color;
u8 *base, *dst, *src; s32 sy, sx, dstSubY, srcSubY, dstY, srcY, stride; u8 *palette;
u16 val; s32 mode;
mode=lbl_80366F48; if (mode != 0xffff) { goto ready; } {
switch (*(s32*)0x800000cc) {
case 0: if (*(u16*)0xcc00206e & 2) val=1; else val=0; lbl_80366F48=val; break;
default: lbl_80366F48=0; break;
}
mode=lbl_80366F48;
lbl_803684C0=(void(*)(void))fn_80207768;
}
ready:
arg0=((s32(*)(s32,s32,FontImageHeader**,s32*))lbl_803684C0)(mode,arg0,&h,&index);
cells=h->columns*h->rows;
x=(index%cells % h->columns)*h->width;
y=(index%cells / h->columns)*h->height;
base=(u8*)h+h->imageOffset;
base+=((u32)((index/cells)*h->sheetSize)>>1);
palette=h->palette;
stride=((arg3*4)/8)<<5;
for(row=0;row<h->height;row++){
srcY=(y+row)/8; srcSubY=((y+row)%8)*2; dstY=(row/8)*stride; dstSubY=(row%8)*4;
for(col=0;col<h->width;col++){
sx=x+col; sy=arg2+col;
src=base+((((s32)h->sheetWidth/8)<<5)/2)*srcY;
src+=(sx/8)*16;
src+=srcSubY;
src+=(sx%8)/4;
dst=(u8*)arg1+dstY;
dst+=(sy/8)*32;
dst+=dstSubY;
dst+=(sy%8)/2;
if(sy%2) mask=15; else mask=240;
color=*src;
pixel=*dst;
color=palette[(color>>(6-(sx%4)*2))&3];
*dst=pixel | (color & mask);
}
}
if(arg4) *arg4=((u8*)h)[h->widthOffset+index];
return arg0;
}
#pragma pop
#pragma push
asm BOOL OSDisableInterrupts(void) {
nofralloc
mfmsr r3
rlwinm r4, r3, 0, 17, 15
mtmsr r4
rlwinm r3, r3, 17, 31, 31
blr
}
#pragma pop
#pragma push
asm BOOL OSEnableInterrupts(void) {
nofralloc
mfmsr r3
ori r4, r3, 0x8000
mtmsr r4
rlwinm r3, r3, 17, 31, 31
blr
}
#pragma pop

#pragma push
asm BOOL OSRestoreInterrupts(register BOOL level) {
nofralloc
cmpwi level, 0
mfmsr r4
beq _disable
ori r5, r4, 0x8000
b _restore
_disable:
rlwinm r5, r4, 0, 17, 15
_restore:
mtmsr r5
rlwinm r3, r4, 17, 31, 31
blr
}
#pragma pop

#pragma global_optimizer reset
void *__OSSetInterruptHandler(s32 arg0, void *arg1) {
    extern void *InterruptHandlerTable_803684C8;
    void **table;
    void **entry;
    void *oldHandler;
    s32 index;

    index = (s16)arg0;
    table = (void **)InterruptHandlerTable_803684C8;
    entry = table + index;

    oldHandler = *entry;
    *entry = arg1;

    return oldHandler;
}

extern void *InterruptHandlerTable_803684C8;
s32 __OSGetInterruptHandler(s16 arg0) {
    return ((u32 *)InterruptHandlerTable_803684C8)[arg0];
}

#pragma peephole off
void __OSInterruptInit(void) {
    extern void *InterruptHandlerTable_803684C8;
    extern void ExternalInterruptHandler(void);
    void *memset(void *, s32, u32);
    void __OSSetExceptionHandler(s32, void *);
    u32 __OSMaskInterrupts(u32);
    extern volatile u32 OS_PIRegs[];

    InterruptHandlerTable_803684C8 = (void *)((u8 *)0x80000000 + 0x3040);
    memset(InterruptHandlerTable_803684C8, 0, 0x80);
    *(u32 *)0x800000C4 = 0;
    *(u32 *)0x800000C8 = 0;
    OS_PIRegs[1] = 0xF0;
    __OSMaskInterrupts(~0x1FU);
    __OSSetExceptionHandler(4, ExternalInterruptHandler);
}
#pragma peephole on
volatile u16 OS_MEMRegs[64] : 0xCC004000;
volatile u16 OS_DSPRegs[64] : 0xCC005000;
volatile u32 OS_PIRegs[16] : 0xCC003000;
volatile u32 OS_AIRegs[8] : 0xCC006C00;
volatile u32 OS_EXIRegs[16] : 0xCC006800;

#pragma peephole off
/* Program hardware IRQ enables from OS interrupt mask bits; return remaining mask. */
u32 SetInterruptMask(u32 mask, u32 current) {
    u32 reg;

    switch (__cntlzw(mask)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        reg = 0;
        if (!(current & 0x80000000)) {
            reg |= 0x1;
        }
        if (!(current & 0x40000000)) {
            reg |= 0x2;
        }
        if (!(current & 0x20000000)) {
            reg |= 0x4;
        }
        if (!(current & 0x10000000)) {
            reg |= 0x8;
        }
        if (!(current & 0x08000000)) {
            reg |= 0x10;
        }
        OS_MEMRegs[0x1C / 2] = (u16)reg;
        mask &= 0x07FFFFFF;
        break;
    case 5:
    case 6:
    case 7:
        reg = OS_DSPRegs[0xA / 2];
        reg &= ~0x1F8;
        if (!(current & 0x04000000)) {
            reg |= 0x10;
        }
        if (!(current & 0x02000000)) {
            reg |= 0x40;
        }
        if (!(current & 0x01000000)) {
            reg |= 0x100;
        }
        OS_DSPRegs[0xA / 2] = (u16)reg;
        mask &= 0xF8FFFFFF;
        break;
    case 8:
        reg = OS_AIRegs[0];
        reg &= ~0x2C;
        if (!(current & 0x00800000)) {
            reg |= 0x4;
        }
        OS_AIRegs[0] = reg;
        mask &= 0xFF7FFFFF;
        break;
    case 9:
    case 10:
    case 11:
        reg = OS_EXIRegs[0];
        reg &= ~0x2C0F;
        if (!(current & 0x00400000)) {
            reg |= 0x1;
        }
        if (!(current & 0x00200000)) {
            reg |= 0x4;
        }
        if (!(current & 0x00100000)) {
            reg |= 0x400;
        }
        OS_EXIRegs[0] = reg;
        mask &= 0xFF8FFFFF;
        break;
    case 12:
    case 13:
    case 14:
        reg = OS_EXIRegs[0x14 / 4];
        reg &= ~0xC0F;
        if (!(current & 0x00080000)) {
            reg |= 0x1;
        }
        if (!(current & 0x00040000)) {
            reg |= 0x4;
        }
        if (!(current & 0x00020000)) {
            reg |= 0x400;
        }
        OS_EXIRegs[0x14 / 4] = reg;
        mask &= 0xFFF1FFFF;
        break;
    case 15:
    case 16:
        reg = OS_EXIRegs[0x28 / 4];
        reg &= ~0xF;
        if (!(current & 0x00010000)) {
            reg |= 0x1;
        }
        if (!(current & 0x00008000)) {
            reg |= 0x4;
        }
        OS_EXIRegs[0x28 / 4] = reg;
        mask &= 0xFFFE7FFF;
        break;
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
        reg = 0xF0;
        if (!(current & 0x00004000)) {
            reg |= 0x800;
        }
        if (!(current & 0x00000800)) {
            reg |= 0x8;
        }
        if (!(current & 0x00000400)) {
            reg |= 0x4;
        }
        if (!(current & 0x00000200)) {
            reg |= 0x2;
        }
        if (!(current & 0x00000100)) {
            reg |= 0x1;
        }
        if (!(current & 0x00000080)) {
            reg |= 0x100;
        }
        if (!(current & 0x00000040)) {
            reg |= 0x1000;
        }
        if (!(current & 0x00002000)) {
            reg |= 0x200;
        }
        if (!(current & 0x00001000)) {
            reg |= 0x400;
        }
        if (!(current & 0x00000020)) {
            reg |= 0x2000;
        }
        OS_PIRegs[1] = reg;
        mask &= 0xFFFF801F;
        break;
    }
    return mask;
}
#pragma global_optimizer off
#pragma scheduling off
u32 __OSMaskInterrupts(u32 arg) {
    BOOL OSDisableInterrupts(void);
    BOOL OSRestoreInterrupts(BOOL);
    u32 SetInterruptMask(u32, u32);
    u32 global;
    BOOL enabled;
    BOOL temp;
    u32 prev;
    u32 ie;
    u32 mask;

    global = arg;
    temp = OSDisableInterrupts();
    prev = *(u32 *)0x800000C4;
    enabled = temp;
    ie = *(u32 *)0x800000C8;
    mask = global & ~(prev | ie);
    global |= prev;
    *(u32 *)0x800000C4 = global;
    global |= ie;
    while (mask != 0) {
        mask = SetInterruptMask(mask, global);
    }
    OSRestoreInterrupts(enabled);
    return prev;
}
#pragma global_optimizer off
u32 __OSUnmaskInterrupts(u32 arg) {
    BOOL OSDisableInterrupts(void);
    BOOL OSRestoreInterrupts(BOOL);
    u32 SetInterruptMask(u32, u32);
    u32 global;
    BOOL enabled;
    BOOL temp;
    u32 prev;
    u32 ie;
    u32 mask;

    global = arg;
    temp = OSDisableInterrupts();
    prev = *(u32 *)0x800000C4;
    enabled = temp;
    ie = *(u32 *)0x800000C8;
    mask = global & (prev | ie);
    global = prev & ~global;
    *(u32 *)0x800000C4 = global;
    global |= ie;
    while (mask != 0) {
        mask = SetInterruptMask(mask, global);
    }
    OSRestoreInterrupts(enabled);
    return prev;
}
#pragma scheduling reset
#pragma global_optimizer reset
void fn_8020801C(u8 unused, OSContext *context) {
    extern s32 lbl_8029CDF8[];
    extern s16 __OSLastInterrupt;
    extern s64 __OSLastInterruptTime;
    extern u32 __OSLastInterruptSrr0;
    extern s64 OSGetTime(void);
    extern void OSDisableScheduler(void);
    extern void OSEnableScheduler(void);
    extern void __OSReschedule(void);
    extern void OSLoadContext(OSContext *);
    u32 cause;
    u32 exceptmask;
    u32 reg;
    u32 *prio;
    u32 bit;
    void (*handler)(s16, OSContext *);
    s16 interrupt;
    u32 stackMasked;
    u32 dummy1;
    u32 dummy2;

    (void)unused;
    (void)&dummy1;
    (void)&dummy2;
    cause = OS_PIRegs[0];
    cause &= ~0x00010000;
    if (cause == 0 || (cause & OS_PIRegs[1]) == 0) {
        OSLoadContext(context);
    }

    exceptmask = 0;
    if (cause & 0x00000080) {
        reg = OS_MEMRegs[0x1E / 2];
        if (reg & 0x00000001) { exceptmask |= 0x80000000; }
        if (reg & 0x00000002) { exceptmask |= 0x40000000; }
        if (reg & 0x00000004) { exceptmask |= 0x20000000; }
        if (reg & 0x00000008) { exceptmask |= 0x10000000; }
        if (reg & 0x00000010) { exceptmask |= 0x08000000; }
    }
    if (cause & 0x00000040) {
        reg = OS_DSPRegs[0xA / 2];
        if (reg & 0x00000008) { exceptmask |= 0x04000000; }
        if (reg & 0x00000020) { exceptmask |= 0x02000000; }
        if (reg & 0x00000080) { exceptmask |= 0x01000000; }
    }
    if ((cause & 0x00000020) && (OS_AIRegs[0] & 0x00000008)) {
        exceptmask |= 0x00800000;
    }
    if (cause & 0x00000010) {
        reg = OS_EXIRegs[0];
        if (reg & 0x00000002) { exceptmask |= 0x00400000; }
        if (reg & 0x00000008) { exceptmask |= 0x00200000; }
        if (reg & 0x00000800) { exceptmask |= 0x00100000; }
        reg = OS_EXIRegs[0x14 / 4];
        if (reg & 0x00000002) { exceptmask |= 0x00080000; }
        if (reg & 0x00000008) { exceptmask |= 0x00040000; }
        if (reg & 0x00000800) { exceptmask |= 0x00020000; }
        reg = OS_EXIRegs[0x28 / 4];
        if (reg & 0x00000002) { exceptmask |= 0x00010000; }
        if (reg & 0x00000008) { exceptmask |= 0x00008000; }
    }
    if (cause & 0x00002000) { exceptmask |= 0x00000020; }
    if (cause & 0x00001000) { exceptmask |= 0x00000040; }
    if (cause & 0x00000400) { exceptmask |= 0x00001000; }
    if (cause & 0x00000200) { exceptmask |= 0x00002000; }
    if (cause & 0x00000100) { exceptmask |= 0x00000080; }
    if (cause & 0x00000008) { exceptmask |= 0x00000800; }
    if (cause & 0x00000004) { exceptmask |= 0x00000400; }
    if (cause & 0x00000002) { exceptmask |= 0x00000200; }
    if (cause & 0x00000800) { exceptmask |= 0x00004000; }
    if (cause & 0x00000001) { exceptmask |= 0x00000100; }

    stackMasked = exceptmask & ~(*(u32 *)0x800000C4 | *(u32 *)0x800000C8);
    if (stackMasked) {
        prio = (u32 *)lbl_8029CDF8;
        while (1) {
            bit = stackMasked & *prio;
            if (bit != 0) {
                interrupt = (s16)__cntlzw(bit);
                break;
            }
            prio++;
        }
        handler = ((void (**)(s16, OSContext *))InterruptHandlerTable_803684C8)[interrupt];
        if (handler != 0) {
            if (interrupt > 4) {
                __OSLastInterrupt = interrupt;
                __OSLastInterruptTime = OSGetTime();
                __OSLastInterruptSrr0 = context->srr0;
            }
            OSDisableScheduler();
            handler(interrupt, context);
            OSEnableScheduler();
            __OSReschedule();
            OSLoadContext(context);
        }
    }
    OSLoadContext(context);
}

#pragma push
static asm void ExternalInterruptHandler(register __OSException exception,
register OSContext* context) {
    void fn_8020801C(__OSException exception, OSContext *context);
nofralloc
stw r0, 0(context); stw r1, 4(context); stw r2, 8(context); stmw r6, 24(context); mfspr r0, 913; stw r0, 424(context); mfspr r0, 914; stw r0, 428(context); mfspr r0, 915; stw r0, 432(context); mfspr r0, 916; stw r0, 436(context); mfspr r0, 917; stw r0, 440(context); mfspr r0, 918; stw r0, 444(context); mfspr r0, 919; stw r0, 448(context);
stwu r1, -0x8(r1)
b fn_8020801C
}
#pragma pop

int __OSModuleInit(void)
{
  u8 *base;
  base = (u8 *) 0x80000000;
  *((s32 *) (base + 0x30CC)) = 0;
  *((s32 *) (base + 0x30C8)) = 0;
  *((s32 *) (base + 0x30D0)) = 0;
}

#pragma scheduling on
#pragma peephole on
s32 fn_802083C8(s32 arg0) {
s32 __OSMaskInterrupts(u32);
if (arg0 != 0) {
u16 *regs = (u16*)0xCC000000;
regs[0x4010/2] = 0xFF;
__OSMaskInterrupts(0xF0000000);
}
return 1;
}
#pragma scheduling on
#pragma peephole on
void MEMIntrruptHandler(s32 interrupt, OSContext *context)
{
  u32 high;
  volatile u16 *regs;
  u32 address;
  u32 cause;
  OSErrorHandler handler;
  regs = OS_MEMRegs;
  high = *(volatile u16 *)((u8 *)regs + 0x24);
  address = regs[0x11];
  cause = regs[0x0F];
  address = __rlwimi(address, high, 16, 6, 15);
  regs[0x10] = 0;
  handler = __OSErrorTable[15];
  if (handler != 0)
  {
    handler(15, context, cause, address);
  }
  else
  {
    __OSUnhandledException(15, context, cause, address);
  }
}
#pragma push
static asm void Config24MB(void) {
nofralloc
li r7, 0x0
lis r4, 0x0
addi r4, r4, 0x2
lis r3, 0x8000
addi r3, r3, 0x1ff
lis r6, 0x100
addi r6, r6, 0x2
lis r5, 0x8100
addi r5, r5, 0xff
isync
mtdbatu 0, r7
mtdbatl 0, r4
mtdbatu 0, r3
isync
mtibatu 0, r7
mtibatl 0, r4
mtibatu 0, r3
isync
mtdbatu 2, r7
mtdbatl 2, r6
mtdbatu 2, r5
isync
mtibatu 2, r7
mtibatl 2, r6
mtibatu 2, r5
isync
mfmsr r3
ori r3, r3, 0x30
mtsrr1 r3
mflr r3
mtsrr0 r3
rfi
}
#pragma pop

#pragma push
static asm void Config48MB(void) {
nofralloc
li r7, 0x0
lis r4, 0x0
addi r4, r4, 0x2
lis r3, 0x8000
addi r3, r3, 0x3ff
lis r6, 0x200
addi r6, r6, 0x2
lis r5, 0x8200
addi r5, r5, 0x1ff
isync
mtdbatu 0, r7
mtdbatl 0, r4
mtdbatu 0, r3
isync
mtibatu 0, r7
mtibatl 0, r4
mtibatu 0, r3
isync
mtdbatu 2, r7
mtdbatl 2, r6
mtdbatu 2, r5
isync
mtibatu 2, r7
mtibatl 2, r6
mtibatu 2, r5
isync
mfmsr r3
ori r3, r3, 0x30
mtsrr1 r3
mflr r3
mtsrr0 r3
rfi
}
#pragma pop

#pragma push
static asm void RealMode(register u32 addr) {
    nofralloc
    clrlwi addr, addr, 2
    mtsrr0 addr
    mfmsr addr
    rlwinm addr, addr, 0, 28, 25
    mtsrr1 addr
    rfi
}
#pragma pop

#pragma push
#pragma inline_depth(0)
#pragma optimization_level 2
void __OSInitMemoryProtection(void) {
    u32 padding[12];
    u32 simulatedSize;
    s32 enabled;
    extern u8 ResetFunctionInfo_8029CE28[];
    void OSRegisterResetFunction(void *);
    void DCInvalidateRange(void *, u32);
    void Config24MB(void);
    void Config48MB(void);

    simulatedSize = *(u32 *)0x800000F0;
    enabled = OSDisableInterrupts();
    OS_MEMRegs[0x20 / 2] = 0;
    OS_MEMRegs[0x10 / 2] = 0xFF;
    __OSMaskInterrupts(0xF0000000);
    __OSSetInterruptHandler(0, MEMIntrruptHandler);
    __OSSetInterruptHandler(1, MEMIntrruptHandler);
    __OSSetInterruptHandler(2, MEMIntrruptHandler);
    __OSSetInterruptHandler(3, MEMIntrruptHandler);
    __OSSetInterruptHandler(4, MEMIntrruptHandler);
    OSRegisterResetFunction(ResetFunctionInfo_8029CE28);
    if (*(u32 *)0x800000F0 < *(u32 *)0x80000028 && *(u32 *)0x800000F0 == 0x1800000) {
        DCInvalidateRange((void *)0x81800000, 0x1800000);
        OS_MEMRegs[0x28 / 2] = 2;
    }
    if (simulatedSize <= 0x1800000) {
        RealMode((u32)Config24MB);
    } else if (simulatedSize <= 0x3000000) {
        RealMode((u32)Config48MB);
    }
    __OSUnmaskInterrupts(0x08000000);
    OSRestoreInterrupts(enabled);
}
#pragma pop
void fn_802086A0(void *arg0) {
    void fn_8020AEC4(void *);
    void *node;
    void *next;
    void *tmp;

    goto check;
loop:
    next = *(void **)((u8 *)node + 0x10);
    tmp = node;
    if ((u32)next == 0U) {
        *(s32 *)((u8 *)arg0 + 0x2F8) = 0;
    } else {
        *(s32 *)((u8 *)next + 0x14) = 0;
    }
    *(void **)((u8 *)arg0 + 0x2F4) = next;
    *(s32 *)((u8 *)node + 0xC) = 0;
    *(s32 *)((u8 *)node + 0x8) = 0;
    fn_8020AEC4(tmp);
check:
    node = *(void **)((u8 *)arg0 + 0x2F4);
    if ((u32)node != 0U) {
        goto loop;
    }
}

extern u16 StopAtNextInt_80368530;
extern u16 lbl_80368550;
extern void **OSExceptionTable_8036847C;
extern u16 lbl_8029BBB0[20];
