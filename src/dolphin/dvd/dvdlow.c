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
extern s32 lbl_80368550;

extern u32 lbl_80368514;
extern u32 lbl_80368510;
extern s32 lbl_803684FC;
extern s32 lbl_80368500;
extern void (*lbl_803684F8)();

extern void* __OSSystemCallVectorStart;
extern void* __OSSystemCallVectorEnd;

extern s32* FstStart_8036857C;
extern s32 lbl_80368588;

extern u16 Scb_803394;

u32 __OSGetResetSWState(void);

extern void OSDisableInterrupts(void);
extern void OSRestoreInterrupts(void);

volatile u32 __DIRegs[16] : 0xCC006000;

typedef struct DVDCommand {
    s32 command;
    void *addr;
    u32 length;
    u32 offset;
    void *callback;
} DVDCommand;

static DVDCommand CommandList_80339E70[3];

extern u16 AlarmForTimeout_80339ED8[20];
extern void AlarmHandlerForTimeout(void *, void *);
extern void OSCreateAlarm(void *);
extern void OSSetAlarm(void *, s64, void *);

static void SetTimeoutAlarm(s64 timeout) {
    OSCreateAlarm(AlarmForTimeout_80339ED8);
    OSSetAlarm(AlarmForTimeout_80339ED8, timeout, AlarmHandlerForTimeout);
}

void __DVDLowSetWAType(u32 type, u32 location);

void __DVDInitWA(void) {
    extern s32 NextCommandNumber_80368574;
    
    NextCommandNumber_80368574 = 0;
    CommandList_80339E70[0].command = -1;
    __DVDLowSetWAType(0, 0);
    OSInitAlarm();
}

#pragma use_lmw_stmw on
void __DVDInterruptHandler(s32 type, OSContext *context) {
    s64 __OSGetSystemTime(void);
    void fn_80204770(void *);
    void fn_8020B940(void *, u32, u32, void *);
    void fn_8020BD68(u32, void *);
    extern s32 lbl_80368570;
    extern s64 lbl_80368560;
    extern s32 lbl_80366F58;
    extern s32 StopAtNextInt_80368530;
    extern u32 ResetOccurred_80368548;
    extern s64 LastResetEnd_80368540;
    extern void (*lbl_8036853C)(s32);
    extern s32 WaitingCoverClose_8036854C;
    extern s32 lbl_80368550;
    extern s32 NextCommandNumber_80368574;
    extern void (*Callback_80368538)(u32);
    OSContext sp10;
    u32 masked;
    u8 *base;
    u32 intVal;
    u32 regand;
    u32 *diBase;
    u32 reg;
    s32 finished;

    (void)type;
    base = (u8 *)CommandList_80339E70;
    intVal = 0;
    if (lbl_80368570 != 0) {
        lbl_80368560 = __OSGetSystemTime();
        lbl_80366F58 = 0;
        *(u32 *)(base + 0xB8) = *(u32 *)(base + 0xC4);
        *(u32 *)(base + 0xBC) = *(u32 *)(base + 0xC8);
        *(u32 *)(base + 0xC0) = *(u32 *)(base + 0xCC);
        if (StopAtNextInt_80368530 == 1) {
            intVal |= 8;
        }
    }
    lbl_80368570 = 0;
    diBase = (u32 *)0xCC006000;
    StopAtNextInt_80368530 = 0;
    reg = diBase[0];
    masked = reg & 0x2A;
    regand = (reg & 0x54) & (masked << 1);
    if (regand & 0x40) {
        intVal |= 8;
    }
    if (regand & 0x10) {
        intVal |= 1;
    }
    if (regand & 4) {
        intVal |= 2;
    }
    if (intVal != 0) {
        ResetOccurred_80368548 = 0;
        fn_80204770(base + 0x68);
    }
    *(volatile u32 *)0xCC006000 = regand | masked;
    if (ResetOccurred_80368548 != 0) {
        if ((u64)(__OSGetSystemTime() - LastResetEnd_80368540) >
            ((*(u32 *)0x800000F8 >> 2) / 1000) * 200) {
            {
                volatile u32 *diPtr = (volatile u32 *)0xCC006000;
                reg = *++diPtr;
                if (((reg & 4) & ((reg << 1) & 4)) & 4) {
                    if (lbl_8036853C) {
                        lbl_8036853C(4);
                    }
                    lbl_8036853C = 0;
                }
                *diPtr = *diPtr;
            }
            goto after_cover;
        }
    }
    if (WaitingCoverClose_8036854C != 0) {
        {
            volatile u32 *diPtr = (volatile u32 *)0xCC006000;
            reg = *++diPtr;
            masked = (reg & 4) & ((reg << 1) & 4);
            if (masked & 4) {
                intVal |= 4;
            }
            *diPtr = masked | (reg & 2);
        }
        WaitingCoverClose_8036854C = 0;
    } else {
        *(volatile u32 *)0xCC006004 = 0;
    }
after_cover:
    if ((intVal & 8) && (lbl_80368550 == 0)) {
        intVal &= ~8;
    }
    finished = 0;
    if (intVal & 1) {
        s32 off = NextCommandNumber_80368574 * 0x14;
        s32 c = *(s32 *)(base + off);
        if (c == 1) {
            NextCommandNumber_80368574++;
            fn_8020B940(*(void **)(base + off + 4), *(u32 *)(base + off + 8),
                        *(u32 *)(base + off + 0xC), *(void **)(base + off + 0x10));
            finished = 1;
        } else if (c == 2) {
            NextCommandNumber_80368574++;
            fn_8020BD68(*(u32 *)(base + off + 0xC), *(void **)(base + off + 0x10));
            finished = 1;
        }
    }
    if (finished == 0) {
        void (*cb)(u32);
        *(s32 *)base = -1;
        NextCommandNumber_80368574 = 0;
        OSClearContext(&sp10);
        OSSetCurrentContext(&sp10);
        if (intVal != 0) {
            cb = Callback_80368538;
            Callback_80368538 = 0;
            if (cb) {
                cb(intVal);
            }
            lbl_80368550 = 0;
        }
    }
    OSClearContext(&sp10);
    OSSetCurrentContext(context);
}
#pragma use_lmw_stmw reset

void fn_8020B84C(void) {
    extern u16 Scb_80339420[];
    extern s32 NextCommandNumber_80368574;
    
    s32 cmd_idx = NextCommandNumber_80368574 * 0x14;
    s32 cmd = Scb_80339420[cmd_idx];
    
    switch (cmd) {
        case 1:
            NextCommandNumber_80368574++;
            fn_8020B940(Scb_80339420[cmd_idx + 1], 
                       Scb_80339420[cmd_idx + 2], 
                       Scb_80339420[cmd_idx + 3], 
                       Scb_80339420[cmd_idx + 4]);
            return;
        case 2:
            NextCommandNumber_80368574++;
            fn_8020BD68(Scb_80339420[cmd_idx + 3], 
                       Scb_80339420[cmd_idx + 4]);
            return;
    }
}

void AlarmHandlerForTimeout(void *arg0, void *arg1)
{
    extern void (*Callback_80368538)(int);

    void (*callback)(int);
    OSContext context;

    callback = Callback_80368538;

    __OSMaskInterrupts(0x400);

    OSClearContext(&context);
    OSSetCurrentContext(&context);

    Callback_80368538 = 0;

    if (callback != 0) {
        callback(0x10);
    }

    OSClearContext(&context);
    OSSetCurrentContext((OSContext *)arg1);
}

void fn_8020BA50(void *addr, u32 length, u32 offset, void *callback) {
    extern s32 NextCommandNumber_80368574;
    extern u32 WorkAroundSeekLocation_80368558;
    u32 offsetToSeek;

    if ((offset & ~0x7FFF) == 0) {
        offsetToSeek = 0;
    } else {
        offsetToSeek = (offset & ~0x7FFF) + WorkAroundSeekLocation_80368558;
    }

    CommandList_80339E70[0].command = 2;
    CommandList_80339E70[0].offset = offsetToSeek;
    CommandList_80339E70[0].callback = callback;
    CommandList_80339E70[1].command = 1;
    CommandList_80339E70[1].addr = addr;
    CommandList_80339E70[1].length = length;
    CommandList_80339E70[1].offset = offset;
    CommandList_80339E70[1].callback = callback;
    CommandList_80339E70[2].command = -1;
    NextCommandNumber_80368574 = 0;
    fn_8020BD68(offsetToSeek, callback);
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
BOOL fn_8020BAD0(void *addr, u32 length, u32 offset, void *callback) {
    extern volatile u32 WorkAroundType_80368554;
    extern s32 NextCommandNumber_80368574;
    extern s32 lbl_80366F58;
    extern s64 lbl_80368560;
    void fn_8020B940(void *, u32, u32, void *);
    void fn_8020BA50(void *, u32, u32, void *);
    void *fn_8020F404(void);
    s64 __OSGetSystemTime(void);
    void fn_8020B84C(void *, void *);
    u32 current;
    u32 end;
    s64 delay;
    s64 elapsed;
    u32 ticks5;
    u32 bus;
    s32 nearby;
    s32 padding;
    s32 cached;
    u32 lastLen;
    u32 lastOff;
    u32 previous;
    u32 requested;
    u32 *readOffset;
    u32 *prevLength;
    u32 *prevOffset;
    u8 *base;

    base = (u8 *)CommandList_80339E70;
    readOffset = (u32 *)(base + 0xCC);
    __DIRegs[6] = length;
    *(void **)(base + 0xC4) = addr;
    *(u32 *)(base + 0xC8) = length;
    *readOffset = offset;
    if (WorkAroundType_80368554 == 0) {
        CommandList_80339E70[0].command = -1;
        NextCommandNumber_80368574 = 0;
        fn_8020B940(addr, length, offset, callback);
    } else if (WorkAroundType_80368554 == 1) {
        if (lbl_80366F58 != 0) {
            fn_8020BA50(addr, length, offset, callback);
        } else {
            prevLength = (u32 *)(base + 0xBC);
            current = *readOffset;
            prevOffset = (u32 *)(base + 0xC0);
            lastLen = prevLength[0];
            lastOff = prevOffset[0];
            current = current >> 15;
            lastLen = lastLen - 1;
            end = (lastOff + lastLen) >> 15;
            if (*(u8 *)((u8 *)fn_8020F404() + 8) != 0) {
                cached = 1;
            } else {
                cached = 0;
            }
            if (cached != 0) {
                padding = 5;
            } else {
                padding = 15;
            }
            if (current > end - 2 || (cached = padding + 3, current < end + cached)) {
                nearby = 1;
            } else {
                nearby = 0;
            }
            if (nearby == 0) {
                CommandList_80339E70[0].command = -1;
                NextCommandNumber_80368574 = 0;
                fn_8020B940(addr, length, offset, callback);
            } else {
                previous = *prevLength;
                requested = *prevOffset;
                previous = previous - 1;
                lastOff = *readOffset;
                previous = requested + previous;
                previous = previous >> 15;
                requested = lastOff >> 15;
                if (previous == requested || (previous + 1) == requested) {
                    elapsed = __OSGetSystemTime() - lbl_80368560;
                    bus = *(u32 *)0x800000F8 / 4;
                    ticks5 = (bus / 1000) * 5;
                    if (elapsed > (s64)ticks5) {
                        CommandList_80339E70[0].command = -1;
                        NextCommandNumber_80368574 = 0;
                        fn_8020B940(addr, length, offset, callback);
                    } else {
                        CommandList_80339E70[0].command = 1;
                        CommandList_80339E70[0].addr = addr;
                        CommandList_80339E70[0].length = length;
                        CommandList_80339E70[0].offset = offset;
                        CommandList_80339E70[0].callback = callback;
                        CommandList_80339E70[1].command = -1;
                        NextCommandNumber_80368574 = 0;
                        delay = (s64)ticks5 - elapsed + (((bus / 125000) * 500) >> 3);
                        OSCreateAlarm(base + 0x40);
                        OSSetAlarm(base + 0x40, delay, fn_8020B84C);
                    }
                } else {
                    fn_8020BA50(addr, length, offset, callback);
                }
            }
        }
    }
    return TRUE;
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset
BOOL fn_8020BD68(u32 offset, void *callback) {
    extern void *Callback_80368538;

    Callback_80368538 = callback;
    StopAtNextInt_80368530 = 0;
    __DIRegs[2] = 0xAB000000;
    __DIRegs[3] = offset >> 2;
    __DIRegs[7] = 1;
    SetTimeoutAlarm((*(u32 *)0x800000F8 / 4) * 10);
    return TRUE;
}

BOOL DVDLowWaitCoverClose(void *callback) {
    extern void *Callback_80368538;
    extern s32 WaitingCoverClose_8036854C;
    volatile u32 *di;

    Callback_80368538 = callback;
    WaitingCoverClose_8036854C = TRUE;
    di = __DIRegs;
    StopAtNextInt_80368530 = FALSE;
    di[1] = 2;
    return TRUE;
}

void DVDLowStopMotor(void) {
    OSDisableInterrupts();
    lbl_803685E8 = 0;
    OSRestoreInterrupts();
}

s32 fn_8020BF58(void *callback)
{
    extern void *Callback_80368538;

    u32 ticks;

    Callback_80368538 = callback;
    StopAtNextInt_80368530 = 0;

    __DIRegs[2] = 0xE0000000;
    __DIRegs[7] = 1;

    ticks = (*(u32 *)0x800000F8 >> 2) * 10;

    OSCreateAlarm(AlarmForTimeout_80339ED8);
    OSSetAlarm(
        AlarmForTimeout_80339ED8,
        (s64)(u32)ticks,
        AlarmHandlerForTimeout
    );

    return 1;
}

s32 fn_8020BFE4(u32 arg0, void *arg1) {
    extern void *Callback_80368538;
    extern s32 StopAtNextInt_80368530;
    extern u16 AlarmForTimeout_80339ED8[20];

    void OSCreateAlarm(void *);
    void OSSetAlarm(void *, unsigned long long, void *);
    void AlarmHandlerForTimeout(void);

    volatile u32 *dvd;
    u32 ticks;

    Callback_80368538 = arg1;
    StopAtNextInt_80368530 = 0;

    dvd = (volatile u32 *)0xCC006000;

    dvd[2] = 0x12000000;
    dvd[4] = 0x20;
    dvd[5] = arg0;
    dvd[6] = 0x20;
    dvd[7] = 3;

    ticks = (*(volatile u32 *)0x800000F8 >> 2) * 10;

    OSCreateAlarm(AlarmForTimeout_80339ED8);
    OSSetAlarm(
        AlarmForTimeout_80339ED8,
        (unsigned long long)ticks,
        (void *)AlarmHandlerForTimeout
    );

    return 1;
}

void fn_8020C080(void) {
    s32 var_r3;
    var_r3 = 0;
    if (lbl_80368614 == 0) {
        lbl_80368618 = NULL;
        lbl_8036861C = NULL;
        lbl_80368620 = NULL;
        lbl_80368624 = NULL;
        lbl_80368628 = NULL;
        lbl_8036862C = NULL;
        lbl_80368630 = NULL;
        lbl_80368634 = NULL;
        lbl_80368638 = NULL;
        lbl_8036863C = NULL;
        lbl_80368640 = NULL;
        lbl_80368644 = NULL;
        lbl_80368648 = NULL;
        lbl_8036864C = NULL;
        lbl_80368650 = NULL;
        lbl_80368654 = NULL;
        if (lbl_803682F0 == 0x1A83) {
            var_r3 = 1;
        }
    } else {
        var_r3 = 0;
    }
    lbl_803685E8 = (void (*)(void))fn_80013E50(var_r3);
}

s32 fn_8020C118(u32 command, void *callback)
{
    extern void *Callback_80368538;

    u32 ticks;

    Callback_80368538 = callback;
    StopAtNextInt_80368530 = 0;

    __DIRegs[2] = command | 0xE2000000;
    __DIRegs[7] = 1;

    ticks = (*(u32 *)0x800000F8 >> 2) * 10;

    OSCreateAlarm(AlarmForTimeout_80339ED8);
    OSSetAlarm(
        AlarmForTimeout_80339ED8,
        (s64)(u32)ticks,
        AlarmHandlerForTimeout
    );

    return 1;
}

void fn_8020C1A4(u8 arg0, u32 arg1, void *arg2) {
    extern void *Callback_80368538;
    extern s32 StopAtNextInt_80368530;
    extern u16 AlarmForTimeout_80339ED8[20];

    void OSCreateAlarm(void *);
    void OSSetAlarm(void *, unsigned long long, void *);
    void AlarmHandlerForTimeout(void);

    volatile u32 *dvd;
    u32 ticks;

    Callback_80368538 = arg2;
    StopAtNextInt_80368530 = 0;

    if (arg0 != 0) {
        dvd = (volatile u32 *)0xCC006000;

        dvd[2] = arg1 | 0x0001E400;
        dvd[7] = 1;

        ticks = (*(volatile u32 *)0x800000F8 >> 2) * 10;

        OSCreateAlarm(AlarmForTimeout_80339ED8);

        OSSetAlarm(
            AlarmForTimeout_80339ED8,
            (unsigned long long)ticks,
            (void *)AlarmHandlerForTimeout
        );
    }

    return;
}

void DVDLowReset(void) {
    u32 temp_r30;
    u32 temp_r4;
    u32 temp_r26;
    u32 temp_r28;
    u64 temp_r27;
    u64 temp_ret;
    
    *(u32 *)0xCC006004 = 2;
    temp_r30 = *(u32 *)0xCC003024;
    *(u32 *)0xCC003024 = (temp_r30 & 0xFFFFFFFB) | 1;
    temp_ret = __OSGetSystemTime();
    temp_r26 = (u32) temp_ret;
    temp_r27 = temp_ret;
    
    // Calculate delay based on system time
    temp_r28 = ((*(u32 *)0x800000F8 / 500000) * 0xC) >> 3U;
    
    do {
        temp_r4 = ((__OSGetSystemTime() - temp_r27) ^ 0x80000000);
    } while (-((temp_r4 - temp_r4) ^ 0x80000000) != 0);
    
    *(u32 *)0xCC003024 = temp_r30 | 5;
    *(s32 *)0x80368548 = 1;
    temp_ret = __OSGetSystemTime();
    *(u32 *)0x80368540 = (u32) temp_ret;
    *(u32 *)0x80368544 = (u32) temp_ret;
}

BOOL fn_8020C2FC(void) {
    StopAtNextInt_80368530 = TRUE;
    lbl_80368550 = TRUE;
    return TRUE;
}

#pragma scheduling off
void *fn_8020C310(void) {
    extern void *Callback_80368538;
    extern s32 WaitingCoverClose_8036854C;
    void *cb;
    u32 base;

    base = 0xCC000000;
    *(u32 *)(base + 0x6004) = 0;
    cb = Callback_80368538;
    WaitingCoverClose_8036854C = 0;
    Callback_80368538 = 0;
    return cb;
}
#pragma scheduling on
s32 fn_8020C370(void *arg0) {
    extern u8 lbl_80339F00[];

    if (arg0 == lbl_80339F00) {
        return 1;
    }

    if (arg0 == AlarmForTimeout_80339ED8) {
        return 1;
    }

    return 0;
}

