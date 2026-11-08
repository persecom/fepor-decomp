/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
extern s32 lbl_803682F0;
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

s32 PPCMfmsr(void) {
    return M2C_ERROR(/* unknown instruction: mfmsr $r3 */);
}

s32 PPCMtmsr(void) {
    return M2C_ERROR(/* unknown instruction: mtmsr $r3 */);
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

void OSCreateAlarm(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

s32 fn_80204CD4(s32 arg0) {
    extern s32 lbl_80366F28;
    s32 temp_r0;

    temp_r0 = lbl_80366F28;
    lbl_80366F28 = arg0;
    return temp_r0;
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

void OSSaveFPUContext(void *arg0) {
    __OSSaveFPUContext(arg0);
}

s32 fn_802059EC(void) {
    return *(s32 *)0x800000D4;
}

void *fn_80205B50(void) {
    return 0; /* OSGetStackPointer: asm (mr r3, r1) */
}

void fn_80206888(void) {
    extern s32 lbl_803684B0;
    lbl_803684B0 = 1;
}

void fn_80208780(s32 arg0, s32 arg1) {
    extern s32 lbl_803684E0;
    extern s32 lbl_803684E4;
    lbl_803684E0 = arg0;
    lbl_803684E4 = arg1;
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

void __init_user(void) {
    __init_cpp();
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

void fn_8020D1A0(void) {
    M2C_UNK fn_8020BF58(M2C_UNK *);
    extern M2C_UNK fn_8020D27C;
    fn_8020BF58(&fn_8020D27C);
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

void fn_8020D804(void) {
    void fn_8020C1A4(u8, s32, void *);
    void fn_8020DAE0(void);
    extern void *IDShouldBe_8036859C;

    fn_8020C1A4(M2C_FIELD(IDShouldBe_8036859C, u8 *, 8), 0xA, fn_8020DAE0);
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

s32 fn_8020F058(s32 arg0) {
    extern s32 autoInvalidation_80366F6C;
    s32 temp_r0;

    temp_r0 = autoInvalidation_80366F6C;
    autoInvalidation_80366F6C = arg0;
    return temp_r0;
}

s32 fn_8020F404(void) {
    return 0x80000000;
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

s32 fn_8020FFC4(s32 arg0) {
    extern s32 lbl_80368614;
    s32 temp_r31;

    temp_r31 = lbl_80368614;
    OSDisableInterrupts();
    lbl_80368614 = arg0;
    OSRestoreInterrupts();
    return temp_r31;
}

void fn_8021004C(s32 arg0) {
}

s32 fn_80211690(void) {
    extern s32 lbl_80368604;
    return lbl_80368604;
}

s32 fn_8021381C(void) {
    return (*(u16 *)0xCC005036 << 5) & 0xFFFE0;
}

s32 fn_80213904(void) {
    return *(s32 *)0xCC006C00 & 1;
}

s32 fn_802139F4(void) {
    return (((u32) *(u32 *)0xCC006C00 >> 6U) & 1) ^ 1;
}

s32 fn_80213ADC(void) {
    return ((u32) *(u32 *)0xCC006C00 >> 1U) & 1;
}

u8 fn_80213B08(void) {
    return (u8) *(s32 *)0xCC006C04;
}

u8 fn_80213B34(void) {
    return (u8) ((u32) *(u32 *)0xCC006C04 >> 8U);
}

s32 fn_802142B0(void) {
    return 0x4000;
}

s32 fn_802142B8(void) {
    extern s32 lbl_803686DC;
    return lbl_803686DC;
}

s32 fn_80214358(void) {
    return *(u16 *)0xCC00500A & 0x20;
}

void fn_80215C5C(void) {

}

s32 fn_80215F30(void) {
    extern s32 lbl_80368718;
    return lbl_80368718;
}

s32 fn_80215F38(void) {
    extern s32 lbl_8036871C;
    return lbl_8036871C;
}

s32 fn_80215F40(void) {
    return ((u16) *(u16 *)0xCC005000 >> 0xFU) & 1;
}

s32 fn_80215F50(void) {
    return ((u16) *(u16 *)0xCC005004 >> 0xFU) & 1;
}
