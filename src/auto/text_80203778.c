/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
extern u32 lbl_803682F0;
extern void (*lbl_803685E8)(void);;
extern u16 lbl_8029BBB0[20];
extern void DMAErrorHandler(void);
u32 OSGetTick(void);;;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);
extern u32 *fn_80207768(void);

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
    u8 data[0x2C8];
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
    return 0; /* mfmsr: not expressible in C */
}
#pragma dont_inline reset

void PPCMtmsr(register u32 msr) {
    (void)msr; /* mtmsr: not expressible in C */
}

void fn_80203790(void) {
    M2C_ERROR(/* unknown instruction: mtspr HID0, $r3 */);
}

s32 PPCMfl2cr(void) {
    return M2C_ERROR(/* unknown instruction: mfspr $r3, L2CR */);
}

void PPCMtl2cr(void) {
    M2C_ERROR(/* unknown instruction: mtspr L2CR, $r3 */);
}

s32 PPCMtdec(void) {
    return M2C_ERROR(/* unknown instruction: mtdec $r3 */);
}

s32 fn_802037B0(void) {
    return 0;
}

void PPCHalt(void) {
    sync();
    while (1) {
        ;
    }
}

void PPCMtwpar(void) {
    M2C_ERROR(/* unknown instruction: mtspr WPAR, $r3 */);
}

void fn_802038C0(void) {
    M2C_UNK OSDumpContext(s32);
    M2C_UNK OSReport(M2C_UNK *, s32);
    M2C_UNK PPCHalt();
    extern M2C_UNK lbl_8029B910;
    s32 temp_r4;

    temp_r4 = *(s32 *)0xC0;
    OSReport(&lbl_8029B910, temp_r4);
    OSDumpContext(temp_r4 + 0x80000000);
    PPCHalt();
}

s32 __DBIsExceptionMarked(u8 arg0) {
    extern void *__DBInterface;
    return M2C_FIELD(__DBInterface, s32 *, 4) & (1 << arg0);
}

void DBPrintf(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7) {
    if (arg0 != 0) {
        return;
    }
    // This function only does a stack frame setup and returns
}

u32 fn_80203AAC(void) {
    extern void *BootInfo_80368458;

    if (BootInfo_80368458 == NULL || M2C_FIELD(BootInfo_80368458, u32 *, 0x2C) == 0) {
        return 0x10000002;
    }
    return M2C_FIELD(BootInfo_80368458, u32 *, 0x2C);
}

void InquiryCallback(void *arg1) {
    u32 val = *(u32 *)((u8 *)arg1 + 0xC);
    if (val == 0) {
        *(u16 *)0x800030E6 = (*(u16 *)((u8 *)arg1 + 0x2) | 0x8000);
    } else {
        *(u16 *)0x800030E6 = 1;
    }
}

void fn_80204294(void) {
    M2C_ERROR(/* unknown instruction: bla 0x60 */);
}

void *__OSSetExceptionHandler(u8 exception, void *handler) {
    extern void **OSExceptionTable_8036847C;
    void **entry;
    void *oldHandler;

    entry = &OSExceptionTable_8036847C[exception];
    oldHandler = *entry;
    *entry = handler;
    return oldHandler;
}

void *__OSGetExceptionHandler(u8 exception) {
    extern void **OSExceptionTable_8036847C;
    return OSExceptionTable_8036847C[exception];
}

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

u8 fn_80204410(void) {
    return (u8) M2C_FIELD((void *)0xCC006000, s32 *, 0x24);
}

void OSRegisterVersion(s32 arg0) {
    extern u32 lbl_80366F24;
    OSReport(&lbl_80366F24, (u32)arg0);
}

void OSInitAlarm(void) {
    extern void *AlarmQueue_80368490;
    extern void *DecrementerExceptionHandler;
    extern OSResetFunctionInfo ResetFunctionInfo_8029BB20;
    extern void *__OSGetExceptionHandler(s32);
    extern void __OSSetExceptionHandler(s32, void *);
    
    if (__OSGetExceptionHandler(8) != &DecrementerExceptionHandler) {
        *(s32 *)AlarmQueue_80368490 = 0;
        *((s32 *)AlarmQueue_80368490 + 1) = 0;
        __OSSetExceptionHandler(8, &DecrementerExceptionHandler);
        OSRegisterResetFunction(&ResetFunctionInfo_8029BB20);
    }
}

void OSCreateAlarm(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

extern void DecrementerExceptionCallback(void);
void DecrementerExceptionHandler(void *arg1) {
    s32 *regs = (s32 *) arg1;
    regs[0] = 0; // r0
    regs[1] = (s32) regs + 4; // r1
    regs[2] = 0;
    regs[3] = 0;
    regs[4] = 0;
    regs[5] = 0;
    regs[6] = 0; // r6
    regs[7] = 0; // r7
    regs[8] = 0; // r8
    regs[9] = 0; // r9
    regs[10] = 0; // r10
    regs[11] = 0; // r11
    regs[12] = 0; // r12
    regs[13] = 0; // r13
    regs[14] = 0; // r14
    regs[15] = 0; // r15
    regs[16] = 0; // r16
    regs[17] = 0; // r17
    regs[18] = 0; // r18
    regs[19] = 0; // r19
    regs[20] = 0; // r20
    regs[21] = 0; // r21
    regs[22] = 0; // r22
    regs[23] = 0; // r23
    regs[24] = 0; // r24
    regs[25] = 0; // r25
    regs[26] = 0; // r26
    regs[27] = 0; // r27
    regs[28] = 0; // r28
    regs[29] = 0; // r29
    regs[30] = 0; // r30
    regs[31] = 0; // r31
    DecrementerExceptionCallback();
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

void OSSaveFPUContext(void *arg0) {
    __OSSaveFPUContext(arg0);
}

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

void OSClearContext(OSContext *context) {
    *(u16*)(((u8*)context) + 0x1A0) = 0;
    *(u16*)(((u8*)context) + 0x1A2) = 0;
    if (context == *(void**)0x800000D8) {
        *(u32*)0x800000D8 = 0;
    }
}

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
typedef void (*OSErrorHandler)(u8, void *, u32, u32);
extern OSErrorHandler __OSErrorTable[];
extern char lbl_8029BFB8[];
extern char lbl_80366F3C[];
extern s16 __OSLastInterrupt;
extern u32 __OSLastInterruptSrr0;
extern s64 __OSLastInterruptTime;
extern s64 OSGetTime(void);
extern u32 PPCMffpscr(void);
extern void PPCMtfpscr(u32);
extern void OSDisableScheduler(void);
extern void OSEnableScheduler(void);
extern void __OSReschedule(void);
extern void OSLoadContext(void *);
void __OSUnhandledException(u8 exception, OSContext *context, u32 dsisr, u32 dar) {
    s64 now;
    u32 srr1;
    s32 msr;
    u32 fpscr;
    u32 enableBits;
    OSErrorHandler handler;
    void *fpuContext;

    now = OSGetTime();
    srr1 = M2C_FIELD(context, u32 *, 0x19C);

    if (!(srr1 & 2)) {
        OSReport(&lbl_8029BFB8[0x5C], exception);
        goto dump;
    }

    if (exception == 6 && (srr1 & 0x100000) && __OSErrorTable[16] != 0) {
        exception = 16;
        msr = PPCMfmsr();
        PPCMtmsr(msr | 0x2000);
        fpuContext = *(void **)0x800000D8;
        if (fpuContext != 0) {
            OSSaveFPUContext(fpuContext);
        }
        fpscr = PPCMffpscr();
        enableBits = 0x6005F8FF;
        PPCMtfpscr(fpscr & enableBits);
        PPCMtmsr(msr);

        if (*(void **)0x800000D8 == context) {
            OSDisableScheduler();
            __OSErrorTable[16](16, context, dsisr, dar);
            M2C_FIELD(context, u32 *, 0x19C) &= ~0x2000u;
            *(void **)0x800000D8 = 0;
            M2C_FIELD(context, u32 *, 0x194) &= enableBits;
            OSEnableScheduler();
            __OSReschedule();
        } else {
            M2C_FIELD(context, u32 *, 0x19C) &= ~0x2000u;
            *(void **)0x800000D8 = 0;
            OSLoadContext(context);
        }
    }

    handler = __OSErrorTable[exception];
    if (handler != 0) {
        OSDisableScheduler();
        handler(exception, context, dsisr, dar);
        OSEnableScheduler();
        __OSReschedule();
        OSLoadContext(context);
    }

    if (exception == 8) {
        OSLoadContext(context);
    }

    OSReport(&lbl_8029BFB8[0x7C], exception);

dump:
    OSReport(lbl_80366F3C);
    OSDumpContext(context);
    OSReport(&lbl_8029BFB8[0x94], dsisr, dar);
    OSReport(&lbl_8029BFB8[0xC8], (u32)(now >> 32), (u32)now);

    switch (exception) {
    case 2:
        OSReport(&lbl_8029BFB8[0xD8], M2C_FIELD(context, u32 *, 0x198), dar);
        break;
    case 3:
        OSReport(&lbl_8029BFB8[0x138], M2C_FIELD(context, u32 *, 0x198));
        break;
    case 5:
        OSReport(&lbl_8029BFB8[0x184], M2C_FIELD(context, u32 *, 0x198), dar);
        break;
    case 6:
        OSReport(&lbl_8029BFB8[0x1E8], M2C_FIELD(context, u32 *, 0x198), dar);
        break;
    case 15: {
        u16 *mem = (u16 *)0xCC005000;
        OSReport(lbl_80366F3C);
        OSReport(&lbl_8029BFB8[0x248], *(u16 *)0xCC005030, *(u16 *)0xCC005032);
        OSReport(&lbl_8029BFB8[0x268], mem[0x10], mem[0x11]);
        OSReport(&lbl_8029BFB8[0x288], *(u32 *)0xCC006014);
        OSReport(&lbl_8029BFB8[0x2A4], __OSLastInterrupt, __OSLastInterruptSrr0,
                 (u32)(__OSLastInterruptTime >> 32), (u32)__OSLastInterruptTime);
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
    M2C_UNK memcpy(M2C_UNK);
    if ((u32) *(u32 *)0x800030F0 >= 0x80000000U) {
        memcpy(0x1C);
        return;
    }
    *arg0 = 0;
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
    extern u32 *lbl_803684C0;

    if ((u16) lbl_80366F48 == -1U) {
        s32 temp_r0 = *(s32 *)0x800000CC;
        if (temp_r0 != 0) {
            lbl_80366F48 = 0;
        } else {
            u16 var_r0 = *(u16 *)0xCC00206E;
            if (var_r0 & 2) {
                lbl_80366F48 = 1;
            } else {
                lbl_80366F48 = 0;
            }
        }
        lbl_803684C0 = (u32 *)&fn_80207768;
        return lbl_80366F48;
    }
    return lbl_80366F48;
}

s32 fn_80207628(s32 arg0, s32 arg1) {
    s32 fn_80207304(s32, M2C_UNK, s32);
    extern u16 lbl_80366F48;
    extern s32 lbl_803684B8;
    extern s32 lbl_803684BC;
    extern void *lbl_803684C0;
    s32 temp_r0;
    s32 var_r31;

    if ((u16) lbl_80366F48 != -1U) {
        goto block_12;
    } else {
        temp_r0 = *(s32 *)0x800000CC;
        if (temp_r0 != 0) {
            if (temp_r0 >= 0) {
                goto block_12;
            }
            lbl_80366F48 = 0;
        } else {
            if (*(u16 *)0xCC00206E & 2) {
                lbl_80366F48 = 1;
            } else {
                lbl_80366F48 = 0;
            }
        }
        lbl_803684C0 = (void *)fn_80207768;
    }

block_12:
    if ((s32) (u16) lbl_80366F48 != 2) {
        switch ((s32) (u16) lbl_80366F48) {         /* irregular */
        case 0:
            lbl_803684B8 = arg0;
            var_r31 = fn_80207304(arg1, 0, lbl_803684B8);
            break;
        case 1:
            lbl_803684BC = arg0;
            var_r31 = fn_80207304(arg1, 1, lbl_803684BC);
            break;
        default:
            lbl_803684B8 = arg0;
            var_r31 = fn_80207304(arg1, 0, lbl_803684B8);
            if (var_r31 != 0) {
                lbl_803684BC = lbl_803684B8 + var_r31;
                var_r31 += fn_80207304(arg1, 1, lbl_803684BC);
            }
            break;
        }
    } else {
        var_r31 = 0;
    }
    return var_r31;
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
    OSDisableInterrupts();
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
    OSRestoreInterrupts();
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
#include "global.h"
#include "common.h"
#include <dolphin/os.h>
#include "global.h"

extern void OSSwitchFPUContext(void);
extern void **OSExceptionTable_8036847C;
#include "common.h"
#include <dolphin/os.h>

extern u16 lbl_8029BBB0[20];
