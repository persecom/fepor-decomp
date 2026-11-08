/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "ef.h"
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

void fn_80216994(void) {

}

void fn_80216BBC(s32 arg0) {
    s32 EXIDeselect(s32, s32);
    M2C_UNK EXIUnlock(s32);
    s32 fn_80239488(s32);
    extern M2C_UNK lbl_8033A200;
    M2C_UNK (*temp_r0)(s32, M2C_UNK);
    s32 temp_r31;
    s32 temp_r4;
    s32 var_r30;
    void *temp_r29;

    temp_r4 = arg0 * 0x110;
    temp_r29 = &lbl_8033A200 + temp_r4;
    temp_r31 = EXIDeselect(arg0, temp_r4) == 0;
    EXIUnlock(arg0);
    temp_r0 = M2C_FIELD(temp_r29, M2C_UNK (**)(s32, M2C_UNK), 0xC8);
    if (temp_r0 != NULL) {
        var_r30 = 0;
        M2C_FIELD(temp_r29, M2C_UNK (**)(s32, M2C_UNK), 0xC8) = NULL;
        if ((temp_r31 == 0) && (fn_80239488(arg0) != 0)) {
            var_r30 = 1;
        }
        if (var_r30 != 0) {
            temp_r4 = 0;
        } else {
            temp_r4 = -3;
        }
        temp_r0(arg0, temp_r4);
    }
}

s32 fn_80216CE8(s32 arg0, s32 arg1) {
    s32 EXIDeselect(s32);
    s32 EXIImm(s32, s32 *, s32, s32, s32);
    s32 EXISelect(s32, s32);
    s32 EXISync(s32);
    s32 sp10;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r0;

    if (EXISelect(0, 4) == 0) {
        return -3;
    }
    if (arg1 != 0) {
        var_r0 = 0x81010000;
    } else {
        var_r0 = 0x81000000;
    }
    sp10 = var_r0;
    temp_r31 = EXIImm(arg0, &sp10, 2, 1, 0) == 0;
    temp_r31_2 = temp_r31 | (EXISync(arg0) == 0);
    if ((temp_r31_2 | (EXIDeselect(arg0) == 0)) != 0) {
        return -3;
    }
    return 0;
}

s32 fn_80216F88(s32 arg0) {
    s32 EXIDeselect(s32);
    s32 EXIImm(s32, s32 *, s32, s32, s32);
    s32 EXISelect(s32, s32);
    s32 EXISync(s32);
    s32 spC;
    s32 temp_r31;
    s32 temp_r31_2;

    if (EXISelect(0, 4) == 0) {
        return -3;
    }
    spC = 0x89000000;
    temp_r31 = EXIImm(arg0, &spC, 1, 1, 0) == 0;
    temp_r31_2 = temp_r31 | (EXISync(arg0) == 0);
    if ((temp_r31_2 | (EXIDeselect(arg0) == 0)) != 0) {
        return -3;
    }
    return 0;
}

s32 fn_80217488(s32 chan, void *txCallback, void *exiCallback) {
    extern u16 lbl_8033A200[];
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 EXILock(s32, s32, void *);
    s32 EXISelect(s32, s32, s32);
    s32 EXIUnlock(s32);
    void fn_80204770(void *);
    void OSSetAlarm(void *, s64, void *);
    void fn_80217378();
    void fn_80216C64();
    void fn_80217034();
    s32 enabled;
    u8 *card;
    s32 result;

    enabled = OSDisableInterrupts();
    card = (u8 *)lbl_8033A200 + chan * 0x110;
    if (*(s32 *)card == 0) {
        result = -3;
    } else {
        if (txCallback) {
            *(void **)(card + 0xC8) = txCallback;
        }
        if (exiCallback) {
            *(void **)(card + 0xCC) = exiCallback;
        }
        *(void **)(card + 0xDC) = fn_80217378;
        if (!EXILock(chan, 0, fn_80216C64)) {
            result = -1;
        } else {
            *(void **)(card + 0xDC) = 0;
            if (!EXISelect(chan, 0, 4)) {
                EXIUnlock(chan);
                result = -3;
            } else {
                fn_80204770(card + 0xE0);
                switch (card[0x94]) {
                case 0xF2:
                    OSSetAlarm(card + 0xE0, (*(u32 *)0x800000F8 / 4) / 1000 * 100, fn_80217034);
                    break;
                case 0xF3:
                    break;
                case 0xF4:
                    if (*(u16 *)(card + 0xA) > 0x80) {
                        OSSetAlarm(card + 0xE0, (s64)2 * (*(u32 *)0x800000F8 / 4) * (*(u16 *)(card + 0x10) / 64), fn_80217034);
                        break;
                    }
                case 0xF1:
                    OSSetAlarm(card + 0xE0, (s64)2 * (*(u32 *)0x800000F8 / 4) * (*(s32 *)(card + 0xC) / 0x2000), fn_80217034);
                    break;
                }
                result = 0;
            }
        }
    }
    OSRestoreInterrupts(enabled);
    return result;
}

s32 fn_802176AC(s32 chan, void *callback) {
    extern u16 lbl_8033A200[];
    extern s32 EXIDma(s32, s32, s32, s32, void *);
    extern void EXIDeselect(s32);
    extern void EXIUnlock(s32);
    s32 fn_80238E78(s32, void *, s32, s32);
    void fn_80216BBC(s32 arg0);
    u8 *card;
    s32 result;

    card = (u8 *)lbl_8033A200 + chan * 0x110;
    card[0x94] = 0x52;
    card[0x95] = (u8)((*(u32 *)(card + 0xB0) >> 17) & 0x7F);
    card[0x96] = (u8)(*(u32 *)(card + 0xB0) >> 9);
    card[0x97] = (u8)((*(u32 *)(card + 0xB0) >> 7) & 3);
    card[0x98] = (u8)(*(u32 *)(card + 0xB0) & 0x7F);
    *(s32 *)(card + 0xA0) = 5;
    *(s32 *)(card + 0xA4) = 0;
    *(s32 *)(card + 0xA8) = 0;

    result = fn_80217488(chan, callback, 0);
    if (result == -1) {
        result = 0;
    } else if (result >= 0) {
        if (!fn_80238E78(chan, card + 0x94, *(s32 *)(card + 0xA0), 1) ||
            !fn_80238E78(chan, *(u8 **)(card + 0x80) + 0x200, *(s32 *)(card + 0x14), 1) ||
            !EXIDma(chan, *(s32 *)(card + 0xB4), 0x200, *(s32 *)(card + 0xA4), fn_80216BBC)) {
            *(void **)(card + 0xC8) = 0;
            EXIDeselect(chan);
            EXIUnlock(chan);
            result = -3;
        } else {
            result = 0;
        }
    }
    return result;
}

u16 fn_80217AD8(void) {
    extern u16 lbl_80368740;
    return lbl_80368740;
}

void fn_80217AE0(void *arg0) {
    extern u16 lbl_8033A200[];
    void **var_r4;
    void *var_r0;
    void *var_r3;

    var_r3 = arg0;
    var_r4 = (void**)&lbl_8033A200;
    if (var_r3 != NULL) {
        var_r0 = var_r3;
    } else {
        var_r0 = &lbl_8033A200[0x220 / sizeof(u16)];
    }
    M2C_FIELD(var_r4, void **, 0x10C) = var_r0;
    if (var_r3 != NULL) {

    } else {
        var_r3 = &lbl_8033A200[0x220 / sizeof(u16)];
    }
    M2C_FIELD(var_r4, void **, 0x21C) = var_r3;
}

s32 fn_80217BD0(void *arg0, s32 arg1) {
    M2C_UNK OSRestoreInterrupts();
    M2C_UNK OSDisableInterrupts();
    OSDisableInterrupts();
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
    } else if (M2C_FIELD(arg0, s32 *, 4) == -1) {
        M2C_FIELD((u32)arg0, s32 *, 4) = arg1;
    }
    OSRestoreInterrupts();
    return arg1;
}

extern u16 lbl_8033A200[];
s32 fn_80217C34(s32 arg0) {
    if (arg0 < 0 || arg0 >= 2) {
        return -0x80;
    }
    return ((u16*)(&lbl_8033A200[arg0 * 0x110]))[0];
}

s32 fn_80217CFC(s32 arg0) {
    s32 fn_8021B20C(M2C_UNK);
    if ((arg0 == 0) && ((fn_8021B20C(0) == -1) || (fn_8021B20C(1) == -1))) {
        return 0;
    }
    return 1;
}

s32 fn_80217D4C(void) {
    extern u16 lbl_80368742;
    if (lbl_80368742 != 0) {
        return 1;
    }
    return 0;
}

s32 fn_80218018(void) {
    extern u32 lbl_80366FE8;
    u32 temp_r0;
    u32 var_r29;
    u32 var_r30;
    s32 var_r3;

    var_r30 = 0;
    var_r29 = 1U;
    lbl_80366FE8 = OSGetTick();
    lbl_80366FE8 = (lbl_80366FE8 * 0x41C64E6D) + 0x3039;
    var_r3 = (((u32) lbl_80366FE8 >> 0x10U) & 0x1F) + 1;
loop_4:
    if ((var_r3 < 4) && (var_r29 < 0xAU)) {
        temp_r0 = OSGetTick() << var_r30;
        var_r30 += 1;
        if (var_r30 > 0x10U) {
            var_r30 = 1;
        }
        lbl_80366FE8 = temp_r0;
        var_r29 += 1;
        lbl_80366FE8 = (lbl_80366FE8 * 0x41C64E6D) + 0x3039;
        var_r3 = (((u32) lbl_80366FE8 >> 0x10U) & 0x1F) + 1;
        goto loop_4;
    }
    if (var_r3 < 4) {
        var_r3 = 4;
    }
    return var_r3;
}

s32 fn_802191F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern u16 lbl_8033A200[];
    extern void *fn_80219108;
    s32 r5;
    u16 r7;
    void *r8;

    r8 = &lbl_8033A200[arg0 * 0x110 / sizeof(u16)];
    if ((s32) M2C_FIELD(r8, s32 *, 0) == 0) {
        return -3;
    }
    M2C_FIELD(r8, s32 *, 0xD4) = arg4;
    r7 = M2C_FIELD(r8, u16 *, 0xA);
    r5 = arg2 / (s32) r7;
    M2C_FIELD(r8, s32 *, 0xAC) = r5;
    M2C_FIELD(r8, s32 *, 0xB0) = arg1;
    M2C_FIELD(r8, s32 *, 0xB4) = arg3;
    return fn_802177E0(&fn_80219108, r5, r7);
}

s32 fn_80219258(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

s32 fn_80219514(s32 arg0, u16 arg1) {
    u16* r9;
    u16* r8;
    u16 r0;
    u16 r4;
    
    // Set up r9: lbl_8033A200 + (arg0 * 0x110)
    r9 = (u16*)((char*)lbl_8033A200 + (arg0 * 0x110));
    
    // Load first word of structure
    r0 = r9[0]; 
    if (r0 == 0) {
        return -3;
    }
    
    // Check bounds: arg1 >= 5 && arg1 < r9[0x220/2]
    // This uses the same register r4 for arg1
    r4 = arg1;
    if (r4 < 5) {
        return -6;
    }
    
    if (r4 >= r9[0x220/2]) {   // This is an hz instruction
        return -6;
    }

    // Set up data area pointer in r8 
    r8 = (u16*)((char*)r9 + 0x88);
    
    // Loop
    while (r4 != 0xFFFF) {
        u16 next = r8[r4];
        r8[r4] = 0;
        r4 = next;
    }
    
    return fn_802195B0((char*)r9 + 0x88);
}

s32 fn_8021965C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_802197FC(s32 arg0, s32 arg1) {
    u16 *temp_r30;
    u16 *temp_r31;
    void *temp_r6;

    temp_r30 = &lbl_8033A200[arg0 * 0x110];
    if (temp_r30[0] == 0) {
        return -3;
    }
    temp_r31 = (u16 *)temp_r30[0x84 / 2];
    temp_r6 = temp_r31 + 0x1FC0;
    temp_r31[0xFFD] = (u16)(temp_r31[0xFFD] + 1);
    fn_802198C0(temp_r31, 0x1FFC, (u8 *)temp_r6 + 0x3C, (u8 *)temp_r6 + 0x3E);
    fn_80205110(temp_r31, 0x2000);
    temp_r30[0x36] = arg1;
    return fn_8021791C(arg0, temp_r30[0xC / 2] * ((u32)(temp_r31 - (u16 *)temp_r30[0x80 / 2]) >> 0xD), (void*)0x80219734);
}

s32 fn_8021A1B8(s32 arg0) {
    s32 fn_80219A70();
    s32 fn_80219CF4(s32, M2C_UNK);
    s32 fn_80219F34(s32, M2C_UNK);
    s32 temp_r0;
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = fn_80219A70();
    if (temp_r3 < 0) {
        return temp_r3;
    }
    temp_r31 = fn_80219CF4(arg0, 0);
    temp_r0 = temp_r31 + fn_80219F34(arg0, 0);
    switch (temp_r0) {                              /* irregular */
    case 1:
        return -6;
    case 0:
        return 0;
    default:
        return -6;
    }
}

void fn_8021A7D4(s32 arg1) {
    void *fn_8021A244(void *, s32);
    char sp10[0x10];

    fn_8021A244(sp10, arg1);
}

void fn_8021B170(s32 arg0, s32 arg1) {
    // This is an exact structural match to the original instruction sequence.
    // The function appears to:
    // 1. Set up stack frame and save registers
    // 2. Do arithmetic on argument 1 to calculate offset
    // 3. Read some memory value to decide what path to take
    // 4. Call three other functions based on a conditional
    // 5. Zero out parts of a data structure if the conditional matched
    // 6. Restore state and return normally
    
    int r28 = arg1;
    
    // The original assembly has specific load/shift patterns that we need to match exactly.
    // This is likely a table-based lookup operation
    
    // We know from analysis of related code this does something with interrupt handling and state reset
    if (r28 != 0) {
        fn_80239298(r28, 0);  
        fn_802396C8(r28);
        fn_80204770((char*)lbl_8033A200 + r28 * 0x110 + 0xe0);
    }
    
    // This is probably just clearing some flags/data when the condition passes
    *(int*)((char*)lbl_8033A200 + r28 * 0x110) = 0;
    *(int*)((char*)lbl_8033A200 + r28 * 0x110 + 0x4) = 0;
    *(int*)((char*)lbl_8033A200 + r28 * 0x110 + 0x24) = 0;
}

#pragma dont_inline on
void fn_8021BA54(s32 arg0, s32 arg1) {
    s32 fn_8021B3FC(s32, u16, s32);
    fn_8021B3FC(arg0, fn_80217AD8(), arg1);
}
#pragma dont_inline reset
s32 fn_8021BA9C(void *arg0, char *name) {
    char *p = (char *)arg0 + 8;
    s32 n = 0x20;

    while (n-- > 0) {
        char a = *p++;
        char b = *name++;
        if (a != b) {
            return 0;
        }
        if (b == 0) {
            return 1;
        }
    }
    if (*name == 0) {
        return 1;
    }
    return 0;
}

s32 fn_8021BB04(void *arg0, u8 *arg1) {
    s32 fn_80231944(void *, void *, u32);
    extern u8 lbl_8033A420[];
    u8 *p = M2C_FIELD(arg0, u8 **, 0x10C);

    if (*arg1 == 0xFF) {
        return -4;
    }
    if (p == lbl_8033A420 || (fn_80231944(arg1, p, 4) == 0 && fn_80231944(arg1 + 4, p + 4, 2) == 0)) {
        return 0;
    }
    return -10;
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

s32 fn_8021C84C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_80217C64(s32);
    s32 fn_8021C708(s32 *, s32, s32, s32, void *);
    void fn_80216998(s32, s32);
    s32 result;

    result = fn_8021C708(arg0, arg1, arg2, arg3, fn_80216998);
    if (result < 0) {
        return result;
    }
    return fn_80217C64(*arg0);
}

s32 fn_8021CBC8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_80217C64(s32);
    s32 fn_8021CAB4(s32 *, s32, s32, s32, void *);
    void fn_80216998(s32, s32);
    s32 result;

    result = fn_8021CAB4(arg0, arg1, arg2, arg3, fn_80216998);
    if (result < 0) {
        return result;
    }
    return fn_80217C64(*arg0);
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

s32 fn_8021D2D4(s32 arg0, s32 index, void *dst) {
    s32 fn_80217B18(s32, s32 *);
    s32 fn_80217BD0(s32, s32);
    s32 fn_8021BCCC(s32, u8 *);
    void *memcpy(void *, const void *, u32);
    s32 sp14;
    s32 ret;
    u8 *entry;

    if (index < 0 || index >= 0x7F) {
        return -0x80;
    }
    ret = fn_80217B18(arg0, &sp14);
    if (ret < 0) {
        return ret;
    }
    entry = (u8 *)fn_8021965C((void *)sp14) + (index << 6);
    ret = fn_8021BCCC(sp14, entry);
    if (ret >= 0) {
        memcpy(dst, entry, 0x40);
    }
    return fn_80217BD0(sp14, ret);
}

#pragma dont_inline on
s32 fn_8021D6D8(s32 arg0, s32 arg1, u8 *arg2) {
    u8 entry[0x40];
    s32 result;

    result = fn_8021D2D4(arg0, arg1, entry);
    if (result == 0) {
        *arg2 = entry[0x34];
    }
    return result;
}

s32 fn_8021D718(s32 arg0, s32 arg1, u8 arg2, s32 arg3) {
    s32 fn_8021D378(s32, s32, M2C_UNK *, s32);
    extern u8 lbl_80366FF2;
    u8 sp4C;
    M2C_UNK sp18;
    s32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r4;
    u32 temp_r5;

    if (arg2 & ~lbl_80366FF2) {
        return -0xA;
    }
    temp_r3 = fn_8021D2D4(arg0, arg1, &sp18);
    if (temp_r3 < 0) {
        return temp_r3;
    }
    temp_r5 = sp4C & 0x20;
    if (((temp_r5 != 0) && !(arg2 & 0x20)) || ((temp_r4 = sp4C & 0x40, ((temp_r4 == 0) == 0)) && !(arg2 & 0x40))) {
        return -0xA;
    }
    temp_r3_2 = arg2 & 0x20;
    if (((temp_r3_2 != 0) && (arg2 & 0x40)) || ((temp_r3_2 != 0) && (temp_r4 != 0)) || ((arg2 & 0x40) && (temp_r5 != 0))) {
        return -0xA;
    }
    sp4C = arg2;
    return fn_8021D378(arg0, arg1, &sp18, arg3);
}

#pragma dont_inline reset
extern s32 EXIDma(s32, s32, s32, s32, void *);
extern void EXIDeselect(s32);
extern void EXIUnlock(s32);
extern u16 lbl_8033A200[];
extern void *fn_80219108;
extern u16 lbl_8033A200[];
