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

void fn_801FC95C(void) {
    M2C_UNK fn_8006EDA0(M2C_UNK *);
    extern M2C_UNK lbl_80368418;
    fn_8006EDA0(&lbl_80368418);
}

void fn_801FCC44(void) {
    M2C_UNK fn_8006EDA0(M2C_UNK *);
    extern M2C_UNK lbl_80368418;
    fn_8006EDA0(&lbl_80368418);
}

void fn_801FCC68(s32 arg0) {
    u32 fn_8000CAF0(void *, s32, void *);
    void fn_801FCCA0(void);
    extern u16 lbl_8029B574[];
    
    u16* ptr = lbl_8029B574;
    if (fn_8000CAF0(ptr, arg0, ptr) != 0U) {
        fn_801FCCA0();
    }
}

extern s32 lbl_803679F0;
void fn_801FDA40(void) {
    lbl_803679F0 = 0;
}

void fn_801FDE64(void) {
    M2C_UNK fn_8006EDA0(M2C_UNK *);
    extern M2C_UNK lbl_80368418;
    fn_8006EDA0(&lbl_80368418);
}

void fn_801FDEB8(void) {
    M2C_UNK fn_801FDED8();
    fn_801FDED8();
}

extern u16 lbl_8029B634[10];
s32 fn_801FE32C(void) {
    return fn_8000C0C0(&lbl_8029B634) != 0;
}

void fn_801FE3DC(void *arg0) {
    extern u32 lbl_80368438;
    if (lbl_80368438 != 0) {
        fn_8006EDA0(&lbl_80368438);
    }
    if (*(u32 *)((char *)arg0 + 0x44) != 0) {
        fn_8003F670();
        *(u32 *)((char *)arg0 + 0x44) = 0;
    }
}

s32 fn_801FE430(void) {
    extern s32 lbl_803682A4;
    u32 temp = lbl_803682A4;
    temp &= 0x20;
    if (temp == 0) {
        return 1;
    }
    return 0;
}

void fn_801FE444(void) {
    extern void *lbl_80281F00;
    fn_8005C870((char *)&lbl_80281F00 + 0x4D, 0);
    fn_8005C870((char *)&lbl_80281F00 + 0x64, 0);
}

void fn_801FE488(void *arg0) {
    extern void *lbl_80281F00;
    extern u32 lbl_80368438;

    s32 temp_r3 = fn_8005BA10((char *)&lbl_80281F00 + 0x4D, &lbl_80281F00);
    if (temp_r3 != 0) {
        temp_r3 = fn_8005BA10((char *)&lbl_80281F00 + 0x64, NULL);
        if (temp_r3 == 0) {
            return;
        }
        if (lbl_80368438 != 0) {
            fn_8006EEFC(&lbl_80368438, (char *)&lbl_80281F00 + 0x4D);
        }
        M2C_FIELD(arg0, u32 *, 0x44) = fn_8003FCCC((char *)&lbl_80281F00 + 0x64);
        fn_8000C188(arg0);
    }
}

void fn_801FE520(void *arg0) {
    M2C_UNK fn_8000E0E4(s32);
    s16 fn_800102BC(M2C_UNK, f32);
    s16 fn_80010B78(M2C_UNK, f32);
    extern f32 lbl_8036BB58;
    s16 temp_r31;
    s16 temp_r3;

    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 0x34));
    temp_r31 = fn_80010B78(-1, lbl_8036BB58);
    temp_r3 = fn_800102BC(-1, lbl_8036BB58);
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) (temp_r31 + 0x20);
    M2C_FIELD(arg0, s16 *, 0x40) = (s16) (temp_r3 + 0x40);
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) ((s32) (0x260 - M2C_FIELD(arg0, s16 *, 0x3E)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) ((s32) (0x1C0 - M2C_FIELD(arg0, s16 *, 0x40)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x3C) = 0xA;
}

void fn_801FEF30(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 4;
}

void fn_801FEF44(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0xD2;
}

void fn_801FEF58(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 2;
    M2C_FIELD(arg0, s16 *, 0x28) = 4;
}

void *fn_801FEFA0(void) {
    void *fn_8000CAF0(M2C_UNK *, M2C_UNK);
    s32 fn_800C4304(void *, M2C_UNK *);
    s32 fn_800C4740();
    extern M2C_UNK lbl_80281F00;
    extern M2C_UNK lbl_8029B5DC;
    void *temp_r31;

    temp_r31 = fn_8000CAF0(&lbl_8029B5DC, 3);
    M2C_FIELD(temp_r31, s32 *, 0x34) = fn_800C4740();
    M2C_FIELD(temp_r31, s32 *, 0x38) = fn_800C4304(&lbl_80281F00 + 0x75, &lbl_80281F00);
    return temp_r31;
}

s32 fn_801FEFF8(void) {
    return 0;
}

void fn_801FF060(void *arg0) {
    s32 temp_r3;

    temp_r3 = *(s32 *)((char *)arg0 + 0x48);
    if (temp_r3 != 0) {
        *(s32 *)((char *)arg0 + 0x48) = temp_r3 - 1;
    }
}

void fn_801FF0F8(void *arg0) {
    s32 temp_r3;

    temp_r3 = *(s32 *)((char *)arg0 + 0x48);
    if (temp_r3 != 0) {
        *(s32 *)((char *)arg0 + 0x48) = temp_r3 - 1;
    }
}

void fn_801FF33C(void) {

}

void fn_801FF3AC(void *arg0) {
    M2C_UNK fn_8013CD7C();
    fn_8013CD7C();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x258;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

void fn_801FF3E8(void *arg0) {
    s32 r5;
    
    fn_8013CD7C();
    r5 = *(s32*)((char*)arg0 + 0x28);
    r5 = r5 + 1;
    *(s32*)((char*)arg0 + 0x28) = r5;
    
    if (r5 < *(s32*)((char*)arg0 + 0x2C)) {
        return;
    }
    
    // Call the complex function
    fn_80166D8C();
}

void fn_801FF480(void *arg0) {
    M2C_UNK fn_801FE84C(M2C_UNK, M2C_UNK, s32, s32, s32 *);
    extern s32 lbl_8036BB50;
    s32 sp8;
    s32 temp_r31;

    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x80)();
    sp8 = lbl_8036BB50;
    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(void *), 0x54)(arg0);
    fn_801FE84C(0, 0, M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(void *), 0x50)(arg0), temp_r31, &sp8);
}

s32 fn_801FFD54(void) {
    return 0;
}

s32 fn_801FFD5C(void) {
    return 0;
}

s32 fn_801FFD64(void) {
    return 0;
}

s32 fn_801FFD6C(void) {
    return 0;
}

s32 fn_801FFD74(void) {
    return 0;
}

void fn_801FFD7C(s32 arg0) {
    extern u16 lbl_8029B748;
    s32* ptr = (s32*)&lbl_8029B748;
    fn_8000CAA0(ptr, arg0, ptr);
}

void fn_801FFE8C(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_801FFF08(s32 arg0) {
    fn_801E2F9C(&lbl_803682F0, arg0);
}

extern u16 lbl_8029B7FC[10];
s32 fn_8020055C(void) {
    return fn_8000C0C0(&lbl_8029B7FC) != 0;
}

void fn_80200750(void *arg0) {
    extern f32 lbl_8036BBD8;
    s16 temp_r3;
    register s16 temp_r31;

    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 0x34));
    temp_r31 = fn_80010B78(-1, lbl_8036BBD8);
    temp_r3 = fn_800102BC(-1, lbl_8036BBD8);
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) (temp_r31 + 0x20);
    M2C_FIELD(arg0, s16 *, 0x40) = (s16) (temp_r3 + 0x40);
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) ((s32) (0x260 - M2C_FIELD(arg0, s16 *, 0x3E)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) ((s32) ((int)0x1C0 - M2C_FIELD(arg0, s16 *, 0x40)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x3C) = 0xA;
}

void fn_80201160(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 4;
}

void fn_80201174(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0xD2;
}

void fn_80201188(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 2;
    M2C_FIELD(arg0, s16 *, 0x28) = 4;
}

void fn_802015A0(void) {

}

void fn_80201610(void *arg0) {
    fn_8013CD7C();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x258;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

s32 fn_802016E4(void) {
    return 0x9C;
}

void fn_80202300(s32 arg0, s32 arg1, f32 farg0) {
    f32 fn_80238A30(f32);
    f32 fn_80238A54(f32);
    void fn_80202370(s32, s32, f32, f32);

    f32 temp_f31 = fn_80238A30(farg0);
    fn_80202370(arg0, arg1, temp_f31, fn_80238A54(farg0));
}

void fn_80202540(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    extern f32 lbl_8036BC38;
    extern f32 lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8036BC38;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036BC38;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg2;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_8036BC38;
}

f32 fn_80202574(f64 farg0, f64 farg1, f64 farg2) {
    M2C_ERROR(/* unknown instruction: ps_sum1 $f5, $f1, $f5, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f7, $f2, $f7, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f8, $f3, $f8, $f8 */);
    return (f32) farg0;
}

void fn_802025C0(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    extern f32 lbl_8036BC3C;
    
    *(f32*)((u8*)arg0 + 0x0) = farg0;
    *(f32*)((u8*)arg0 + 0x4) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0xC) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0x14) = farg1;
    *(f32*)((u8*)arg0 + 0x18) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0x20) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0x28) = farg2;
    *(f32*)((u8*)arg0 + 0x2C) = lbl_8036BC3C;
}

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

void fn_80204294(void) {
    M2C_ERROR(/* unknown instruction: bla 0x60 */);
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
    return (void *)__builtin_return_address(0);
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

    temp_r4 = M2C_FIELD(arg0, void **, 0x2E0);
    temp_r5 = M2C_FIELD(arg0, void **, 0x2DC);
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

extern void *IDShouldBe_8036859C;
extern void *fn_8020DAE0;
extern void fn_8020C1A4(u8, u32, void *);
void fn_8020D804(void) {
    u8 var_r3 = *(u8 *)((char *)IDShouldBe_8036859C + 0x8);
    fn_8020C1A4(var_r3, 0xA, &fn_8020DAE0);
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
    switch(arg0) {
        case 0 ... 31:
            return;
        default:
            return;
    }
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

void fn_80216994(void) {

}

void fn_80217488(void) {
    lbl_803682F0 = 0;
}

u16 fn_80217AD8(void) {
    extern u16 lbl_80368740;
    return lbl_80368740;
}

s32 fn_80219258(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_8021965C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

void fn_8021C02C(s32 *arg0) {
    s32 fn_80217B18(s32, s32 *);
    M2C_UNK fn_80217BD0(s32, M2C_UNK);
    s32 spC;

    if (fn_80217B18(*arg0, &spC) < 0) {
        return;
    }
    *arg0 = -1;
    fn_80217BD0(spC, 0);
}

s32 fn_8021C080(void) {
    return 0;
}

void fn_8021C84C(s32 arg0) {
    s32 temp_r3;
    s32 temp_r4;
    
    if (arg0 >= 0) {
        temp_r3 = fn_80013E50(arg0);
        temp_r4 = fn_80013E60(temp_r3, arg0);
        fn_80013E74((void*)temp_r4, arg0);
    }
}

void fn_8021CDC4(void) {
    s32 temp_r3;
    
    temp_r3 = fn_80013E50(0);
    fn_80013E74((void*)temp_r3, 0);
}

void fn_8021D28C(s32 arg0) {
    M2C_UNK fn_80217C64(s32);
    s32 fn_8021D118(M2C_UNK *);
    extern M2C_UNK fn_80216998;
    if (fn_8021D118(&fn_80216998) < 0) {
        return;
    }
    fn_80217C64(arg0);
}

void fn_8021ED98(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

s32 fn_8021F250(s32 *arg0) {
    return *arg0;
}

s32 fn_8021F258(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 fn_8021F4CC(void) {
    extern s32 lbl_80368770;
    return lbl_80368770;
}

s32 fn_8021F4D4(void) {
    extern s32 lbl_80368774;
    return lbl_80368774;
}

s32 fn_8021F4DC(void) {
    extern s32 lbl_80368788;
    return lbl_80368788;
}

void fn_80220198(void) {
    *(s8 *)0xCC008000 = 0x48;
}

u16 fn_80220970(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_80221A2C(s32 arg0) {
    extern void *__GXData;
    M2C_FIELD(__GXData, s32 *, 0x1EC) = (s32) ((M2C_FIELD(__GXData, s32 *, 0x1EC) & ~0x180) | ((arg0 << 7) & 0x180));
}

void fn_80221D6C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

void fn_80221FE8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x30) = farg2;
}

void fn_802220DC(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg1;
}

s32 fn_80222A74(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) << 5) & 0x03FFFFE0;
}

s32 fn_80222A80(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x3FF) + 1;
}

s32 fn_80222A90(void *arg0) {
    return (((u32) M2C_FIELD(arg0, u32 *, 8) >> 0xAU) & 0x3FF) + 1;
}

s32 fn_80222AA0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

u8 fn_80222AA8(void *arg0) {
    return (u8) (((M2C_FIELD(arg0, u8 *, 0x1F) & 1) - 1) == 0);
}

s32 fn_80222CDC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) << 5) & 0x03FFFFE0;
}

u16 fn_80222CE8(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}

void fn_80223978(void) {

}

void fn_80224E1C(void *arg0, s32 arg1) {
    *(s32*)((u8*)arg0 + 0x50) = arg1;
    *(s32*)((u8*)arg0 + 0x54) = arg1;
}

void fn_80225BF4(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

void TRKDestructEvent(void *arg0) {
    M2C_UNK fn_8022699C(s32);
    fn_8022699C(M2C_FIELD(arg0, s32 *, 8));
}

void fn_80225F4C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = -1;
}

extern u8 lbl_80289EB8[16];
void TRKNubWelcome(void) {
    TRK_board_display(&lbl_80289EB8);
}

s32 TRKTerminateNub(void) {
    M2C_UNK fn_80226B68();
    fn_80226B68();
    return 0;
}

s32 fn_8022692C(void *arg0, u32 arg1) {
    s32 var_r5;

    var_r5 = 0;
    if (arg1 > 0x880U) {
        var_r5 = 0x301;
    } else {
        M2C_FIELD(arg0, u32 *, 0xC) = arg1;
        if (arg1 > (u32) M2C_FIELD(arg0, u32 *, 8)) {
            M2C_FIELD(arg0, u32 *, 8) = arg1;
        }
    }
    return var_r5;
}

s32 fn_80226B68(void) {
    return 0;
}

void usr_put_initialize(void) {

}

s32 TRKInitializeDispatcher(void) {
    return 0;
}

s32 fn_80227E34(void) {
    return 0;
}

s32 fn_80227E3C(void) {
    return 0;
}

s32 fn_80227E44(void) {
    M2C_UNK fn_8022AD08();
    M2C_UNK fn_8022B078(s32 *, M2C_UNK, M2C_UNK);
    M2C_UNK memset(s32 *, M2C_UNK, M2C_UNK);
    s8 sp10;
    s8 spC;
    s32 sp8;

    memset(&sp8, 0, 0x40);
    spC = 0x80;
    sp8 = 0x40;
    sp10 = 0;
    fn_8022B078(&sp8, 0x40, 0x40);
    fn_8022AD08();
    return 0;
}

s32 fn_802287A8(void) {
    return 0;
}

s32 fn_802287B0(void) {
    return 0;
}

s32 fn_802287B8(void) {
    return 0;
}

void EnableMetroTRKInterrupts(void) {
    M2C_UNK fn_8022B120();
    fn_8022B120();
}

void TRKUARTInterruptHandler(void) {

}

s32 TRKTargetContinue(void) {
    M2C_UNK ReserveEXI2Port();
    M2C_UNK TRKSwapAndGo();
    M2C_UNK TRKTargetSetStopped(M2C_UNK);
    M2C_UNK UnreserveEXI2Port();
    TRKTargetSetStopped(0);
    UnreserveEXI2Port();
    TRKSwapAndGo();
    ReserveEXI2Port();
    return 0;
}

s32 fn_8022B5EC(s32 arg1, s32 *arg2) {
    s32 sp8;
    s32 temp_cr0_eq;
    s32 temp_cr0_lt;
    u8 temp_r0;
    u8 temp_r3;

    if (fn_8022B490() == 0) {
        return 1;
    }
    if (fn_80227FDC() == 0) {
        return 1;
    }
    sp8 = *arg2;
    temp_r3 = fn_8022A4E0(0xD1, 0, &sp8, arg1);
    temp_r0 = temp_r3;
    temp_cr0_eq = (s32) temp_r0 == 1;
    temp_cr0_lt = (s32) temp_r0 < 1;
    *arg2 = sp8;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_lt != 0) {
            if ((s32) temp_r0 < 0) {
                goto block_12;
            }
            return 0;
        }
        if ((s32) temp_r0 < 3) {
            return 2;
        }
        goto block_12;
    }
block_12:
    return 1;
}

s32 udp_cc_post_stop(void) {
    return -1;
}

s32 udp_cc_pre_continue(void) {
    return -1;
}

s32 udp_cc_peek(void) {
    return 0;
}

s32 udp_cc_write(void) {
    return 0;
}

s32 udp_cc_read(void) {
    return 0;
}

s32 udp_cc_close(void) {
    return -1;
}

s32 udp_cc_open(void) {
    return -1;
}

s32 udp_cc_shutdown(void) {
    return -1;
}

s32 udp_cc_initialize(void) {
    return -1;
}

s32 ddh_cc_initinterrupts(void) {
    M2C_UNK fn_8023C540();
    fn_8023C540();
    return 0;
}

s32 ddh_cc_peek(void) {
    M2C_UNK fn_8022BB3C(M2C_UNK *, M2C_UNK *, s32);
    s32 fn_8023C544();
    s32 fn_8023C54C(M2C_UNK *, s32);
    extern M2C_UNK lbl_8033D7E8;
    M2C_UNK sp8;
    s32 temp_r3;

    temp_r3 = fn_8023C544();
    if (temp_r3 <= 0) {
        return 0;
    }
    if (fn_8023C54C(&sp8, temp_r3) == 0) {
        fn_8022BB3C(&lbl_8033D7E8, &sp8, temp_r3);
        return temp_r3;
    }
    return -0x2719;
}

s32 ddh_cc_post_stop(void) {
    M2C_UNK fn_8023C55C();
    fn_8023C55C();
    return 0;
}

s32 ddh_cc_pre_continue(void) {
    M2C_UNK fn_8023C560();
    fn_8023C560();
    return 0;
}

void ddh_cc_write(s32 arg0, s32 arg1, u32 arg2) {
    void *ptr = (char *)arg1 + arg0;
    *(u32 *)ptr = arg2;
}

s32 ddh_cc_close(void) {
    return 0;
}

s32 ddh_cc_open(void) {
    extern s32 lbl_803687B8;
    if ((s32) lbl_803687B8 != 0) {
        return -0x2715;
    }
    lbl_803687B8 = 1;
    return 0;
}

s32 ddh_cc_shutdown(void) {
    return 0;
}

void ddh_cc_initialize(void) {
    return;
}

s32 fn_8022BC94(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 gdev_cc_initinterrupts(void) {
    M2C_UNK fn_8026738C();
    fn_8026738C();
    return 0;
}

s32 gdev_cc_post_stop(void) {
    M2C_UNK fn_80267000();
    fn_80267000();
    return 0;
}

s32 gdev_cc_pre_continue(void) {
    M2C_UNK fn_80266FFC();
    fn_80266FFC();
    return 0;
}

s32 gdev_cc_close(void) {
    return 0;
}

s32 gdev_cc_open(void) {
    extern s32 lbl_803687C0;
    if ((s32) lbl_803687C0 != 0) {
        return -0x2715;
    }
    lbl_803687C0 = 1;
    return 0;
}

s32 gdev_cc_shutdown(void) {
    return 0;
}

void fn_8022C038(s32 *arg0) {
    M2C_UNK OSRestoreInterrupts(s32);
    OSRestoreInterrupts(*arg0);
}

void fn_8022C05C(s32 *arg0) {
    s32 OSDisableInterrupts();
    *arg0 = OSDisableInterrupts();
}

void fn_8022C08C(void) {

}

void __register_global_object(s32 arg0, s32 arg1, void *arg2) {
    extern void *__global_destructor_chain;
    M2C_FIELD(arg2, void **, 0) = (void *) __global_destructor_chain;
    M2C_FIELD(arg2, s32 *, 4) = arg1;
    M2C_FIELD(arg2, s32 *, 8) = arg0;
    __global_destructor_chain = arg2;
}

