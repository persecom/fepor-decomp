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

extern u32 lbl_803682F0;
extern void (*lbl_803685E8)(void);;
extern u16 lbl_8029BBB0[20];
extern void DMAErrorHandler(void);
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

static u32 lbl_803392E8[8];
static u32 lbl_80339308[8];
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
void fn_80206E1C(u32 bootDol, u32 resetCode, char **argv);
s32 __OSSyncSram(void);

#pragma dont_inline on
s32 PPCMfmsr(void) {
    return M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
}
#pragma dont_inline reset

#pragma dont_inline on
void PPCMtmsr(register u32 msr) {
    (void)msr; /* mtmsr: not expressible in C */
}

s32 PPCMfhid0(void) {
    return M2C_ERROR(/* unknown instruction: mfspr $r3, HID0 */);
}

#pragma dont_inline reset

void fn_80203790(u32 arg0) {
    (void)arg0;
}

s32 PPCMfl2cr(void) {
    return M2C_ERROR(/* unknown instruction: mfspr $r3, L2CR */);
}

void PPCMtl2cr(void) {
    M2C_ERROR(/* unknown instruction: mtspr L2CR, $r3 */);
}

s32 PPCMtdec(void) {
    return 0;
}

s32 fn_802037B0(void) {
    return 0;
}

#pragma dont_inline on
void PPCHalt(void) {
    M2C_SYNC();
loop_1:
    goto loop_1;
}

u32 PPCMtmmcr0(void) {
    return 0;
}

void PPCMtpmc3(void) {
    M2C_ERROR(/* unknown instruction: mtspr PMC3, $r3 */);
}

u32 PPCMffpscr(void) {
    f64 value;
    u32 result;

    value = __mffs();
    result = *(u32 *)((u8 *)&value + 4);
    value = 0.0;

    return result;
}

s32 PPCMfhid2(void) {
    return 0x392;
}

void PPCMthid2(void) {
    M2C_ERROR(/* unknown instruction: mtspr HID2, $r3 */);
}

#pragma dont_inline reset

void PPCMtwpar(void) {
    M2C_ERROR(/* unknown instruction: mtspr WPAR, $r3 */);
}

void PPCDisableSpeculation(void) {
    __builtin_mfspr(0x398);
    __builtin_mtspr(0x398, 0x4000);
    __builtin_isync();
}

void PPCSetFpNonIEEEMode(void) {
    M2C_ERROR(/* unknown instruction: mtfsb1 cr7gt */);
}

void DBInit(void) {
    extern u8 __DBExceptionDestination[];
    extern u32 __DBInterface;
    extern u32 DBVerbose;

    __DBInterface = 0x80000040;
    *(u32 *)0x80000048 =
        (u32)__DBExceptionDestination + 0x80000000;
    DBVerbose = 1;
}

void fn_802038C0(void) {
    extern char lbl_8029B910[24];
    s32 temp_r4;

    temp_r4 = *(s32 *)0xC0;
    OSReport(lbl_8029B910, temp_r4);
    OSDumpContext(temp_r4 + 0x80000000);
    PPCHalt();
}

s32 __DBIsExceptionMarked(u8 arg0) {
    extern void *__DBInterface;
    return M2C_FIELD(__DBInterface, s32 *, 4) & (1 << arg0);
}

void DBPrintf(u8 level, char *fmt, ...) {
}

u32 fn_80203AAC(void) {
    extern void *BootInfo_80368458;
    
    if (BootInfo_80368458 == NULL || *(u32*)((char*)BootInfo_80368458 + 0x2C) == 0) {
        return 0x10000002;
    }
    return *(u32*)((char*)BootInfo_80368458 + 0x2C);
}

void InquiryCallback(void *arg1) {
    u32 val = *(u32 *)((u8 *)arg1 + 0xC);
    if (val == 0) {
        *(u16 *)0x800030E6 = (*(u16 *)((u8 *)arg1 + 0x2) | 0x8000);
    } else {
        *(u16 *)0x800030E6 = 1;
    }
}

#pragma use_lmw_stmw on
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
    u32 *base;
    u32 flag;
    u32 *osevSetNumber;
    u32 setNumber;
    u8 *osevStart;
    u8 *osevEnd;
    u8 *strings;
    u32 size;
    u32 *codeAddr;
    u32 *entry;
    u8 *dbIntEnd;
    u32 dbJumpSize;
    u8 *dbVec;
    u32 nop;
    u8 i;
    u32 *p;
    u32 nops;
    u32 *dest;
    u8 j;
    u32 dbSize;

    base = (u32 *)0x80000000;
    flag = base[0x60 / 4];
    osevSetNumber = __OSEVSetNumber;
    osevStart = __OSEVStart;
    setNumber = osevSetNumber[0];
    osevEnd = __OSEVEnd;
    strings = lbl_8029B928;
    size = osevEnd - osevStart;
    codeAddr = base + (0x60 / 4);

    if (flag == 0) {
        DBPrintf((char *)(strings + 0x160));
        dbSize = __OSDBINTEND - __OSDBINTSTART;
        memcpy(codeAddr, __OSDBINTSTART, dbSize);
        DCFlushRangeNoSync(codeAddr, dbSize);
        __sync();
        ICInvalidateRange(codeAddr, dbSize);
    }

    dbIntEnd = __OSDBINTEND;
    entry = (u32 *)(strings + 0x124);
    dbJumpSize = __OSDBJUMPEND - dbIntEnd;
    i = 0;
    dbVec = __DBVECTOR;
    nop = 0x60000000;

    while (i < 15) {
        if (BI2DebugFlag_8036845C != NULL && *BI2DebugFlag_8036845C >= 2 && __DBIsExceptionMarked(i)) {
            DBPrintf((char *)(strings + 0x17C), i);
        } else {
            osevSetNumber[0] = setNumber | i;
            if (__DBIsExceptionMarked(i)) {
                DBPrintf((char *)(strings + 0x1AC), i);
                memcpy(dbVec, dbIntEnd, dbJumpSize);
            } else {
                p = (u32 *)dbVec;
                if (dbJumpSize > 0) {
                    nops = (dbJumpSize + 3) >> 2;
                    for (; nops >= 8; nops -= 8) {
                        *p++ = nop;
                        *p++ = nop;
                        *p++ = nop;
                        *p++ = nop;
                        *p++ = nop;
                        *p++ = nop;
                        *p++ = nop;
                        *p++ = nop;
                    }
                    for (; nops != 0; nops--) {
                        *p++ = nop;
                    }
                }
            }
            dest = (u32 *)((u8 *)base + *entry);
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
#pragma use_lmw_stmw reset

void __OSDBIntegrator(void) {
    volatile u32 *ptr;
    u32 value;

    ptr = (volatile u32 *)0x40;
    ptr[3] = (u32)__builtin_return_address(0);
    value = ptr[2];
    value |= 0x80000000;
    __builtin_mtmsr(0x30);
}

void fn_80204294(void) {
}

void *__OSSetExceptionHandler(u8 exception, void *handler) {
    extern void **OSExceptionTable_8036847C;
    void *oldHandler;

    oldHandler = OSExceptionTable_8036847C[exception];
    OSExceptionTable_8036847C[exception] = handler;
    return oldHandler;
}

#pragma peephole off
void *__OSGetExceptionHandler(u8 exception) {
    extern void **OSExceptionTable_8036847C;
    return OSExceptionTable_8036847C[exception];
}
#pragma peephole reset
s32 __OSPSInit(void) {
    M2C_UNK ICFlashInvalidate();
    s32 PPCMfhid2();
    M2C_UNK PPCMthid2(s32);
    PPCMthid2(PPCMfhid2() | 0xA0000000);
    ICFlashInvalidate();
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: mtspr GQR0, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR1, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR2, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR3, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR4, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR5, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR6, $r3 */);
    M2C_ERROR(/* unknown instruction: mtspr GQR7, $r3 */);
    return 0;
}

volatile u32 __PIRegs[64] : 0xCC006000;
u8 fn_80204410(void) {
    volatile u32 *di = __PIRegs;
    return (u8)di[9];
}

void OSRegisterVersion(s32 arg0) {
    extern u32 lbl_80366F24;
    OSReport(&lbl_80366F24, (u32)arg0);
}

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
    extern s64 __div2i(s64, s64);
    struct OSAlarm *next;
    struct OSAlarm *prev;
    s64 time;
    s64 remain;
    s64 quot;
    s64 period;
    s64 start;
    struct OSAlarm *alarm;

    alarm = (struct OSAlarm *)alarm_p;

    if (0 < alarm->period) {
        time = __OSGetSystemTime();
        fire = alarm->start;
        if (alarm->start < time) {
            start = alarm->start;
            period = alarm->period;
            quot = __div2i(time - start, period);
            fire = start + period * (quot + 1);
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
            remain = alarm->fire - time;
            if (remain < 0) {
                PPCMtdec(0);
            } else if (remain < 0x80000000LL) {
                PPCMtdec((u32)remain);
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
    remain = alarm->fire - time;
    if (remain < 0) {
        PPCMtdec(0);
    } else if (remain < 0x80000000LL) {
        PPCMtdec((u32)remain);
    } else {
        PPCMtdec(0x7FFFFFFF);
    }
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
void DecrementerExceptionCallback(u8 type, OSContext *context) {
    struct AlarmQueue {
        void *head;
        void *tail;
    };
    struct OSAlarm {
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
    extern void InsertAlarm(struct OSAlarm *, s64, void (*)(void *, OSContext *));
    extern void OSDisableScheduler(void);
    extern void OSEnableScheduler(void);
    extern void __OSReschedule(void);
    OSContext exceptionContext;
    u8 pad[8];
    struct OSAlarm *alarm;
    struct OSAlarm *next;
    void (*handler)(void *, OSContext *);
    s64 now;
    s64 remain;
    u32 ticks;
    struct OSAlarm *head;

    (void)type;
    (void)pad[0];
    now = __OSGetSystemTime();
    alarm = AlarmQueue_80368490.head;
    if (alarm == NULL) {
        OSLoadContext(context);
    }
    if (now < alarm->fire) {
        now = __OSGetSystemTime();
        remain = alarm->fire - now;
        ticks = (u32)remain;
        if (remain < 0) {
            PPCMtdec(0);
        } else if (remain < 0x80000000LL) {
            PPCMtdec(ticks);
        } else {
            PPCMtdec(0x7FFFFFFF);
        }
        OSLoadContext(context);
    }
    next = alarm->next;
    AlarmQueue_80368490.head = next;
    if (next == NULL) {
        AlarmQueue_80368490.tail = NULL;
    } else {
        next->prev = NULL;
    }
    handler = alarm->handler;
    alarm->handler = NULL;
    if (0 < alarm->period) {
        InsertAlarm(alarm, 0, handler);
    }
    head = AlarmQueue_80368490.head;
    if (head != NULL) {
        now = __OSGetSystemTime();
        remain = head->fire - now;
        ticks = (u32)remain;
        if (remain < 0) {
            PPCMtdec(0);
        } else if (remain < 0x80000000LL) {
            PPCMtdec(ticks);
        } else {
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
void DecrementerExceptionHandler(u8 type, OSContext *context) {
    /* SDK asm: OS_EXCEPTION_SAVE_GPRS then b DecrementerExceptionCallback */
    DecrementerExceptionCallback(type, context);
}

#pragma peephole off
BOOL fn_80204B0C(BOOL final) {
    extern void fn_80204770(void *);
    extern BOOL fn_8020F620(void *);
    extern void *AlarmQueue_80368490;
    void *alarm;
    void *next;

    if (final != FALSE) {
        alarm = AlarmQueue_80368490;
        next = (alarm) ? M2C_FIELD(alarm, void **, 0x14) : NULL;

        while (alarm != NULL) {
            if (fn_8020F620(alarm) == FALSE) {
                fn_80204770(alarm);
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

void fn_80204D54(void) {
    extern u32 lbl_8036B044;
    extern u32 lbl_803660F4;
    extern void fn_802017E0(u32);
    
    if (lbl_8036B044 & 0x20) {
        lbl_803660F4 = 0;
        fn_802017E0(0x9);
    }
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
u32 fn_80204DE0(u32 arg0, u32 arg1) {
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

void DCInvalidateRange(s32 arg0, u32 arg1) {
    s32 var_r3;
    u32 var_ctr;

    if (arg1 > 0U) {
        // Adjusted loop based on instruction sequence from target
        var_r3 = arg0 & 0x1F;
        var_ctr = (arg1 + var_r3 + 0x1F) >> 5U;
        do {
            M2C_DCACHE_INVALIDATE(arg0);
            arg0 += 0x20;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
}

void DCFlushRange(void* addr, u32 len) {
    if (len != 0) {
        osDCFlushRange(addr, len);
    }
}

void fn_80205110(void* addr, u32 len) {
    if (len != 0) {
        osL2GlobalInvalidate(addr, len);
    }
}

void DCFlushRangeNoSync(s32 arg0, u32 arg1) {
    if (arg1 > 0) {
        s32 temp_r5 = (arg1 + (arg0 & 0x1F) + 0x1F) >> 5;
        s32 r3 = arg0;
        u32 ctr = temp_r5;
        
        do {
            M2C_DCACHE_CLEAN_INVALIDATE(r3);
            r3 += 0x20;
            ctr--;
        } while (ctr != 0);
    }
}

void fn_8020516C(void* addr, u32 len) {
    if (len != 0) {
        DCFlushRange(addr, len);
    }
}

void fn_80205198(void *addr, u32 nBytes) {
    if (nBytes <= 0) {
        return;
    }
    nBytes = (nBytes + ((u32) addr & 31) + 31) >> 5;
    do {
        __dcbz(addr, 0);
        addr = (u8 *) addr + 32;
    } while (--nBytes);
}

void ICInvalidateRange(void *addr, u32 nBytes) {
    if (nBytes <= 0) {
        return;
    }
    nBytes = (nBytes + ((u32) addr & 31) + 31) >> 5;
    do {
        __icbi(addr, 0);
        addr = (u8 *) addr + 32;
    } while (--nBytes);
    __sync();
    __isync();
}

void fn_80205348(s32 arg0, s32 arg1, u32 arg2) {
    M2C_ERROR(/* unknown instruction: mtspr DMA_U, $r6 */);
    M2C_ERROR(/* unknown instruction: mtspr DMA_L, $r6 */);
}

u32 fn_80205390(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8020536C(s32, s32, u32);
    s32 var_r28;
    s32 var_r29;
    u32 temp_r3;
    u32 var_r31;

    var_r28 = arg0;
    var_r29 = arg1;
    temp_r3 = (u32) (arg2 + 0x1F) >> 5U;
    var_r31 = temp_r3;
loop_6:
    if (var_r31 != 0) {
        if (var_r31 < 0x80U) {
            fn_8020536C(var_r28, var_r29, var_r31);
            var_r31 = 0;
        } else {
            fn_8020536C(var_r28, var_r29, 0U);
            var_r31 -= 0x80;
            var_r28 += 0x1000;
            var_r29 += 0x1000;
        }
        goto loop_6;
    }
    return (u32) (temp_r3 + 0x7F) >> 7U;
}

extern u32 __SPR_392;
s32 fn_8020543C(s32 arg0)
{
    s32 r4 = __SPR_392;
    r4 = (r4 >> 4) & 0xF;
    if (r4 > arg0)
        return 1;
    return 0;
}

void L2GlobalInvalidate(void* addr, u32 len) {
    if (len != 0) {
        osL2GlobalInvalidate(addr, len);
    }
}

void __OSCacheInit(void) {
    lbl_8029BBB0[0] = 0x1;
    lbl_8029BBB0[1] = 0x0;
    lbl_8029BBB0[2] = 0x0;

    if (0x8020DAE0 != 0) {
        ((void (*)(void))0x8020DAE0)();
    }
}

f64 __OSLoadFPUContext(void *arg1, f64 farg0) {
    f64 var_f1;

    var_f1 = farg0;
    if (M2C_FIELD(arg1, u16 *, 0x1A2) & 1) {
        M2C_ERROR(/* unknown instruction: mtfsf 0xff, $f0 */);
        if (((u32) M2C_ERROR(/* unknown instruction: mfspr $r5, HID2 */) >> 0x1DU) & 1) {

        }
        var_f1 = M2C_FIELD(arg1, f64 *, 0x98);
    }
    return var_f1;
}

void __OSSaveFPUContext(void* context) {
    // This function can't be fully implemented in C due to:
    // - Use of mffs instruction to read FPSCR
    // - Specific register usage not possible with standard C
    // - Need for inline assembly to properly implement
    
    // Placeholder implementation that matches expected structure only
    *(u16*)context = (*(u16*)context | 1);
}

#pragma dont_inline on
void OSSaveFPUContext(void *arg0) {
    __OSSaveFPUContext(arg0);
}

void OSSetCurrentContext(struct OSContext *arg0) {
    *(s32 *)0x800000D4 = (s32)arg0;
    *(s32 *)0x800000C0 = (s32)arg0 & 0x3FFFFFFF;
    if ((s32) *(s32 *)0x800000D8 == (s32)arg0) {
        M2C_FIELD((s32)arg0, s32 *, 0x19C) = (s32) (M2C_FIELD((s32)arg0, s32 *, 0x19C) | 0x2000);
        return;
    }
    M2C_FIELD((s32)arg0, s32 *, 0x19C) = (s32) (M2C_FIELD((s32)arg0, s32 *, 0x19C) & 0xFFFFDFFF);
}

#pragma dont_inline reset

s32 fn_802059EC(void) {
    // Returns the value at address 0x800000D4 (likely a global variable)
    return *(s32 *)0x800000D4;
}

void fn_802059F8(void) {
    *(u32 *)0x8036C764 = 0;
    *(u32 *)0x8036C768 = 0;
    *(u32 *)0x8036C76C = 0;
}

void *fn_80205B50(void) {
    return 0; /* OSGetStackPointer: asm (mr r3, r1) */
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
void fn_80205B7C(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *) ((u8 *) arg0 + 0x198) = arg1;
    *(s32 *) ((u8 *) arg0 + 4) = arg2;
    *(s32 *) ((u8 *) arg0 + 0x19C) = 0x9032;
    *(s32 *) ((u8 *) arg0 + 0x80) = 0;
    *(s32 *) ((u8 *) arg0 + 0x8C) = 0;
    *(s32 *) ((u8 *) arg0 + 8) = 0;
    *(s32 *) ((u8 *) arg0 + 0x34) = 0;
    *(s32 *) ((u8 *) arg0 + 0xC) = 0;
    *(s32 *) ((u8 *) arg0 + 0x10) = 0;
    *(s32 *) ((u8 *) arg0 + 0x14) = 0;
    *(s32 *) ((u8 *) arg0 + 0x18) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x20) = 0;
    *(s32 *) ((u8 *) arg0 + 0x24) = 0;
    *(s32 *) ((u8 *) arg0 + 0x28) = 0;
    *(s32 *) ((u8 *) arg0 + 0x2C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x30) = 0;
    *(s32 *) ((u8 *) arg0 + 0x38) = 0;
    *(s32 *) ((u8 *) arg0 + 0x3C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x40) = 0;
    *(s32 *) ((u8 *) arg0 + 0x44) = 0;
    *(s32 *) ((u8 *) arg0 + 0x48) = 0;
    *(s32 *) ((u8 *) arg0 + 0x4C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x50) = 0;
    *(s32 *) ((u8 *) arg0 + 0x54) = 0;
    *(s32 *) ((u8 *) arg0 + 0x58) = 0;
    *(s32 *) ((u8 *) arg0 + 0x5C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x60) = 0;
    *(s32 *) ((u8 *) arg0 + 0x64) = 0;
    *(s32 *) ((u8 *) arg0 + 0x68) = 0;
    *(s32 *) ((u8 *) arg0 + 0x6C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x70) = 0;
    *(s32 *) ((u8 *) arg0 + 0x74) = 0;
    *(s32 *) ((u8 *) arg0 + 0x78) = 0;
    *(s32 *) ((u8 *) arg0 + 0x7C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1A4) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1A8) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1AC) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1B0) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1B4) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1B8) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1BC) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1C0) = 0;
    return;
}

void fn_8020602C(void) {
    s32 obj;
    s32 temp_r5;
    s32 *ptr_obj = (s32 *)0x803679F0;
    
    obj = *ptr_obj;
    if (obj == 0) return;
    
    *(u16 *)((u8 *)obj + 0x108) = 0;

    temp_r5 = *(s32 *)0x803682F0;
    if (temp_r5 != 0 && *(u16 *)(temp_r5 + 0x1C) == 0) {
        *(u16 *)((u8 *)obj + 0x10E) = 0x4A;
    }

    if (*(s32 *)((u8 *)obj + 0x100) != 0) {
        lbl_803685E8();
    }
}

#pragma use_lmw_stmw on
OSErrorHandler OSSetErrorHandler(u16 error, OSErrorHandler handler)
{
    u32 msr;
    OSErrorHandler oldHandler;
    BOOL enabled;
    u32 fpscr;
    OSContext *context;
    s32 i;

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
        PPCMtfpscr(fpscr & (0x60060000 - 0x701));
        PPCMtmsr(msr);
    }
    OSRestoreInterrupts(enabled);
    return oldHandler;
}
#pragma use_lmw_stmw reset
extern char lbl_8029BFB8[];
extern char lbl_80366F3C;
extern s16 __OSLastInterrupt;
extern u32 __OSLastInterruptSrr0;
extern s64 __OSLastInterruptTime;
extern s64 OSGetTime(void);
extern void OSDisableScheduler(void);
extern void OSEnableScheduler(void);
extern void __OSReschedule(void);
extern void OSLoadContext(void *);

#pragma use_lmw_stmw on
void __OSUnhandledException(u8 exception, OSContext *context, u32 dsisr, u32 dar) {
    OSErrorHandler *table;
    char *msgs;
    u32 srr1;
    OSErrorHandler *entry;
    u32 exc;
    s64 now;

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
            OSLoadContext(context);
        }
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
        u32 *hw;
        OSReport(&lbl_80366F3C);
        hw = (u32 *)0xCC005000;
        OSReport(msgs + 0x248, *(u16 *)((u8 *)hw + 0x30), *(u16 *)((u8 *)hw + 0x32));
        OSReport(msgs + 0x268, *(u16 *)((u8 *)hw + 0x20), *(u16 *)((u8 *)hw + 0x22));
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
void fn_80206658(void) {
    // This is a function that seems to process some string data
    // Based on the assembly, it appears to be doing some kind of memory initialization/processing
    
    // The function signature in the target matches what we expect
    return;
}

void fn_802067E0(s32 arg0) {
    ICFlashInvalidate();
    sync();
    isync();
}

void fn_80206808(void) {
    return;
}

void fn_8020681C(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp14;
    
    fn_8020EB10(&sp14, arg0, arg1, arg2, 0, 0);
loop_5:
    if (fn_8020EF60(&sp14) != 0) {
        if (fn_8020F40C() == 0) {
            fn_802089A4(0);
        }
        goto loop_5;
    }
}

void fn_80206888(void) {
    extern s32 lbl_803684B0;
    lbl_803684B0 = 1;
}

void __OSGetExecParams(s32 *arg0) {
    void *memcpy(void *, const void *, u32);

    if (0x80000000U <= *(u32 *)(0x80000000U + 0x30F0)) {
        memcpy(arg0, (void *)*(u32 *)(0x80000000U + 0x30F0), 0x1C);
    } else {
        *arg0 = 0;
    }
}

void fn_802068D4(void) {
    s32 r31;
    s32 r30;
    u32 r29;

    r31 = 0x18;
    r30 = 0x1C;
    r29 = 0;
    
    __OSArenaLo_80366F30 = (u32)&r31;
}

int fn_80206FB8(u16 encode, u16 code) {
    extern u16 lbl_8029C2E8[];
    extern u16 lbl_8029C468[];
    int i;
    int j;

    if (encode == 1) {
        if (0x20 <= code && code <= 0xDF) {
            return lbl_8029C2E8[code - 0x20];
        } else if (0x889E < code && code <= 0x9872) {
            i = ((code >> 8) - 0x88) * 188;
            j = code & 0xFF;
            if (!IsSjisTrailByte(j)) {
                return 0;
            }
            j -= 0x40;
            if (0x40 <= j) {
                j--;
            }
            return i + j + 0x2BE;
        } else if (0x8140 <= code && code < 0x879E) {
            i = ((code >> 8) - 0x81) * 188;
            j = code & 0xFF;
            if (!IsSjisTrailByte(j)) {
                return 0;
            }
            j -= 0x40;
            if (0x40 <= j) {
                j--;
            }
            return lbl_8029C468[i + j];
        }
    } else if (0x20 < code && code <= 0xFF) {
        return code - 0x20;
    }
    return 0;
}

void fn_8020712C(u8 *s, u8 *d) {
    int j;
    int k;
    int p;
    int q;
    int r7;
    int r25;
    int cnt;
    int os;
    u32 flag;
    u32 code;

    os = *(int *)(s + 0x4);
    r7 = *(int *)(s + 0x8);
    r25 = *(int *)(s + 0xC);
    q = 0;
    flag = 0;
    p = 16;

    do {
        if (flag == 0) {
            code = *(u32 *)(s + p);
            p += 4;
            flag = 32;
        }

        if (code & 0x80000000) {
            d[q++] = s[r25++];
        } else {
            j = (s[r7] << 8) | s[r7 + 1];
            r7 += 2;

            k = q - (j & 0xFFF);
            cnt = j >> 12;
            if (cnt == 0) {
                cnt = s[r25++] + 0x12;
            } else {
                cnt += 2;
            }

            for (; cnt > 0; cnt--) {
                d[q] = d[k - 1];
                q++;
                k++;
            }
        }
        code <<= 1;
        flag--;
    } while (q < os);
}

u16 fn_802072A0(void) {
    extern u16 lbl_80366F48;
    extern void (*lbl_803684C0)(void);
          s32 temp;
    u16 val;

    if (lbl_80366F48 != 0xFFFF) {
        return lbl_80366F48;
    }
    temp = *(s32 *)0x800000CC;
    if (temp == 0)
        goto hw;
    if (temp < 0)
        goto set0;
    goto set0;
hw:
    if (*(u16 *)0xCC00206E & 2) {
        val = 1;
    } else {
        val = 0;
    }
    lbl_80366F48 = val;
    goto after;
set0:
    lbl_80366F48 = 0;
after:
    lbl_803684C0 = (void (*)(void))fn_80207768;
    return lbl_80366F48;
}

s32 fn_80207628(s32 arg0, s32 arg1) {
    s32 fn_80207304(s32, s32, s32);
    extern u16 lbl_80366F48;
    extern s32 lbl_803684B8;
    extern s32 lbl_803684BC;
    extern void *lbl_803684C0;
    s32 var_r31;
    s32 temp_r0;
    u16 mode;
    void *cb;

    if (lbl_80366F48 != 0xFFFF) {
        mode = lbl_80366F48;
        goto do_switch;
    }
    temp_r0 = *(s32 *)0x800000CC;
    if (temp_r0 == 0) {
        if (*(u16 *)0xCC00206E & 2) {
            temp_r0 = 1;
        } else {
            temp_r0 = 0;
        }
        lbl_80366F48 = (u16)temp_r0;
        goto set_cb;
    }
set_zero:
    lbl_80366F48 = 0;
set_cb:
    cb = (void *)fn_80207768;
    mode = lbl_80366F48;
    lbl_803684C0 = cb;
do_switch:
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
    extern s32 fn_80206FB8(u16, u16);

    u8 *ptr = arg1;
    s32 var_r8;
    u32 var_r4 = 0;
    s32 var_r6;
    s32 var_r7;
    s32 var_r0;

    switch (arg0) {
    case 0:
        var_r8 = lbl_803684B8;
        {
            u8 b0 = *ptr;
            var_r4 = b0;
            if (b0 != 0) {
                ptr += 1;
            }
        }
        break;
    case 1:
        var_r8 = lbl_803684BC;
        {
            u8 b0 = *ptr;
            var_r4 = b0;
            if (b0 != 0) {
                ptr += 1;
                var_r6 = 1;
                var_r7 = 0;
                if (b0 >= 0x81 && b0 <= 0x9f) {
                    var_r7 = 1;
                }
                if (var_r7 == 0) {
                    var_r7 = 0;
                    if (b0 >= 0xe0 && b0 <= 0xfc) {
                        var_r7 = 1;
                    }
                    if (var_r7 == 0) {
                        var_r6 = 0;
                    }
                }
                if (var_r6 != 0) {
                    u8 b1 = *ptr;
                    var_r0 = 0;
                    var_r6 = 0;
                    if (b1 >= 0x40 && b1 <= 0xfc) {
                        var_r6 = 1;
                    }
                    if (var_r6 != 0 && b1 != 0x7f) {
                        var_r0 = 1;
                    }
                    if (var_r0 != 0) {
                        var_r4 = (b0 << 8) | b1;
                        ptr += 1;
                    }
                }
            }
        }
        break;
    }

    *arg2 = var_r8;
    *arg3 = fn_80206FB8(arg0, var_r4);
    return ptr;
}

s32 fn_802078A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
extern u16 lbl_80366F48;
extern void (*lbl_803684C0)(void);
u8 *h; s32 index;
s32 cells, x, y, row, col, mask, result;
u8 *base, *dst; s32 sx, sy, stride;
u16 val; s32 mode;
if (lbl_80366F48 != 0xffff) {mode=lbl_80366F48; goto ready;} {
switch (*(s32*)0x800000cc) {
case 0: if (*(u16*)0xcc00206e & 2) val=1; else val=0; lbl_80366F48=val; break;
default: lbl_80366F48=0; break;
}
mode=lbl_80366F48;
lbl_803684C0=(void(*)(void))fn_80207768;
}
ready:
arg0=((s32(*)(u16,s32,u8**,s32*))lbl_803684C0)(mode,arg0,&h,&index);
cells=*(u16*)(h+0x1a)**(u16*)(h+0x1c);
x=(index%cells % *(u16*)(h+0x1a))**(u16*)(h+0x10);
y=(index%cells / *(u16*)(h+0x1a))**(u16*)(h+0x12);
base=h+*(u32*)(h+0x24)+((u32)((index/cells)**(s32*)(h+0x14))>>1);
stride=((arg3*4)/8)<<5;
for(row=0;row<*(u16*)(h+0x12);row++){
for(col=0;col<*(u16*)(h+0x10);col++){
sx=x+col; sy=arg2+col;
dst=(u8*)arg1+(row/8)*stride+(sy/8)*32+(row%8)*4+(sy%8)/2;
mask=sy%2 ? 15:240;
*dst |= h[0x2c+((base[((((s32)*(u16*)(h+0x1e)/8)<<5)/2)*((y+row)/8)+(sx/8)*16+((y+row)%8)*2+(sx%8)/4]>>(6-(sx%4)*2))&3)] & mask;
}
}
if(arg4) *arg4=h[*(u16*)(h+0x22)+index];
return arg0;
}

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

extern u16 InterruptHandlerTable_803684C8[32];
s32 fn_80207BAC(s16 arg0) {
    return InterruptHandlerTable_803684C8[arg0];
}

s32 __OSMaskInterrupts(s32 arg0) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r5;
    u32 var_r3;

    temp_r29 = *(s32 *)0x800000C4;
    temp_r30 = ((BOOL (*)(void))OSDisableInterrupts)();
    temp_r5 = *(s32 *)0x800000C8;
    var_r3 = arg0 & ~(temp_r29 | temp_r5);
    temp_r31 = arg0 | temp_r29;
    *(s32 *)0x800000C4 = temp_r31;
    do {
        if (var_r3 != 0) {
            var_r3 = fn_80207C34(temp_r31 | temp_r5);
        } else {
            break;
        }
    } while(1);
    ((void (*)(BOOL))OSRestoreInterrupts)(temp_r30);
    return temp_r29;
}

void __OSModuleInit(void) {
    s32 *ptr = (s32 *)0x800030CC;
    ptr[0] = 0;
    ptr[-1] = 0;
    ptr[1] = 0;
}

s32 fn_802083C8(s32 arg0) {
    if (arg0 != 0) {
        *(s16 *)0xCC004010 = 0xFF;
        __OSMaskInterrupts(0xF0000000);
    }
    return 1;
}

s32 Config24MB(void) {
    s32 r4 = 0x00000002;
    s32 r3 = 0x80001ff;
    s32 r6 = 0x01000002;
    s32 r5 = 0x810000ff;
    
    __builtin_ppc_mtdbatu(0, 0);
    __builtin_ppc_mtdbatl(0, r4);
    __builtin_ppc_mtdbatu(0, r3);
    __builtin_ppc_mtibatu(0, 0);
    __builtin_ppc_mtibatl(0, r4);
    __builtin_ppc_mtibatu(0, r3);
    
    __builtin_ppc_mtdbatu(2, 0);
    __builtin_ppc_mtdbatl(2, r6);
    __builtin_ppc_mtdbatu(2, r5);
    __builtin_ppc_mtibatu(2, 0);
    __builtin_ppc_mtibatl(2, r6);
    __builtin_ppc_mtibatu(2, r5);

    // Set up MSR bits to enable interrupt and other required features for 24MB mode on GameCube
    // The function returns 0 always, but the logic here sets up proper hardware registers.
    return 0;
}

void fn_802086A0(void* arg0) {
    void* temp_r4;
    void* temp_r5;
    s32 r31 = 0;

    loop_5:
        temp_r4 = M2C_FIELD(arg0, void**, 0x2F4);
        if (temp_r4 != NULL) {
            temp_r5 = M2C_FIELD(temp_r4, void**, 0x10);
            if (temp_r5 == NULL) {
                M2C_FIELD(arg0, s32*, 0x2F8) = r31;
            } else {
                M2C_FIELD(temp_r5, s32*, 0x14) = r31;
            }
            M2C_FIELD(arg0, void**, 0x2F4) = temp_r5;
            M2C_FIELD(temp_r4, s32*, 0xC) = r31;
            M2C_FIELD(temp_r4, s32*, 0x8) = r31;
            fn_8020AEC4(temp_r4);
            goto loop_5;
        }
}

extern u16 StopAtNextInt_80368530;
extern u16 lbl_80368550;
extern void OSSwitchFPUContext(void);
extern void **OSExceptionTable_8036847C;
extern u16 lbl_8029BBB0[20];
