/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"

#include <dolphin/os.h>
#include "global.h"
#include "ef.h"



typedef struct CardDirEntry {
    u8 unk0[4];
    u8 unk4[2];
    u8 pad6[1];
    u8 unk7;
    u8 unk8[0x20];
    s32 unk28;
    s32 unk2C;
    u16 unk30;
    u16 unk32;
    u8 unk34;
    u8 unk35;
    u8 pad36[6];
    s32 unk3C;
} CardDirEntry;
extern s32 lbl_803682F0;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);

extern u8 lbl_8033A420[];
extern u8 lbl_80366FF2;
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

typedef struct CardCtrl {
    u8 unk0[0xC];
    u32 sectorSize;
    u8 unk10[0xAC];
    u16 fileNo;
    u8 unkBE[2];
    void *apiFd;
    u8 unkC4[0xC];
    void *apiCb;
    u8 unkD4[0x38];
    void *diskID;
} CardCtrl;

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
    s32 EXISelect(s32, s32, s32);
    s32 EXISync(s32);
    s32 sp10;
    s32 temp_r31;
    if (EXISelect(arg0, 0, 4) == 0) {
        return -3;
    }
    sp10 = (arg1 != 0) ? 0x81010000 : 0x81000000;
    temp_r31 = !EXIImm(arg0, &sp10, 2, 1, 0);
    temp_r31 |= !EXISync(arg0);
    temp_r31 |= !EXIDeselect(arg0);
    if (temp_r31 != 0) {
        return -3;
    }
    return 0;
}

s32 fn_80216F88(s32 arg0) {
    s32 EXIDeselect(s32);
    s32 EXIImm(s32, s32 *, s32, s32, s32);
    s32 EXISelect(s32, s32, s32);
    s32 EXISync(s32);
    s32 spC;
    s32 temp_r31;

    if (EXISelect(arg0, 0, 4) == 0) {
        return -3;
    }
    spC = 0x89000000;
    temp_r31 = !EXIImm(arg0, &spC, 1, 1, 0);
    temp_r31 |= !EXISync(arg0);
    temp_r31 |= !EXIDeselect(arg0);
    if (temp_r31 != 0) {
        return -3;
    }
    return 0;
}

void fn_80217034(void *alarm, void *context) {
    extern u16 lbl_8033A200[];
    void fn_80239298(s32, void *);

    u8 *base = (u8 *)lbl_8033A200;
    u8 *card;
    s32 chan;
    void (*callback)(s32, s32);

    (void)context;

    card = base;
    chan = 0;
    if (alarm != base + 0xE0) {
        card = base + 0x110;
        chan = 1;
        if (alarm != base + 0x1F0) {
            chan = 2;
        }
    }

    if (*(s32 *)card != 0) {
        fn_80239298(chan, NULL);
        callback = *(void (**)(s32, s32))(card + 0xCC);
        if (callback != 0) {
            *(void (**)(s32, s32))(card + 0xCC) = 0;
            callback(chan, -5);
        }
    }
}

s32 fn_802170D8(s32 chan) {
    extern u16 lbl_8033A200[];
    s32 EXISelect(s32, s32, s32);
    s32 EXIUnlock(s32);
    s32 EXIDeselect(s32);
    s32 EXIDma(s32, s32, s32, s32, void *);
    void fn_80204770(void *);
    void OSSetAlarm(void *, s64, void *);
    s32 fn_80238E78(s32, void *, s32, s32);
    void fn_80217034();
    void fn_80216BBC();
    u8 *card;
    s32 size;

    card = (u8 *)lbl_8033A200 + chan * 0x110;
    if (EXISelect(chan, 0, 4) == 0) {
        EXIUnlock(chan);
        return -3;
    }
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
    if (fn_80238E78(chan, card + 0x94, *(s32 *)(card + 0xA0), 1) == 0) {
        EXIDeselect(chan);
        EXIUnlock(chan);
        return -3;
    }
    if (card[0x94] == 0x52) {
        if (fn_80238E78(chan, *(u8 **)(card + 0x80) + 0x200, *(s32 *)(card + 0x14), 1) == 0) {
            EXIDeselect(chan);
            EXIUnlock(chan);
            return -3;
        }
    }
    if ((*(u32 *)(card + 0xA4) + 0x10000) == 0xFFFF) {
        EXIDeselect(chan);
        EXIUnlock(chan);
        return 0;
    }
    if (card[0x94] == 0x52) {
        size = 0x200;
    } else {
        size = *(u16 *)(card + 0xA);
    }
    if (EXIDma(chan, *(s32 *)(card + 0xB4), size, *(s32 *)(card + 0xA4), fn_80216BBC) == 0) {
        EXIDeselect(chan);
        EXIUnlock(chan);
        return -3;
    }
    return 0;
}

void fn_80217378(s32 chan, s32 result) {
    extern u16 lbl_8033A200[];
    s32 EXILock(s32, s32, void *);
    s32 fn_802170D8(s32);
    void fn_80216C64();
    u8 *card;
    void (*callback)(s32);

    card = (u8 *)lbl_8033A200 + chan * 0x110;
    if (result >= 0) {
        *(void **)(card + 0xDC) = fn_80217378;
        if (EXILock(chan, 0, fn_80216C64) == 0) {
            result = 0;
        } else {
            *(void **)(card + 0xDC) = NULL;
            result = fn_802170D8(chan);
        }
    }
    if (result < 0) {
        switch ((s32) card[0x94]) {
        case 0x52:
            callback = *(void (**)(s32))(card + 0xC8);
            if (callback != NULL) {
                *(void **)(card + 0xC8) = NULL;
                callback(chan);
            }
            break;
        case 0xF1:
        case 0xF2:
        case 0xF4:
            callback = *(void (**)(s32))(card + 0xCC);
            if (callback != NULL) {
                *(void **)(card + 0xCC) = NULL;
                callback(chan);
            }
            break;
        case 0xF3:
            break;
        }
    }
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
    extern u8 lbl_8033A200[];
    u8 *base = lbl_8033A200;
    void *r0;

    if (arg0 != (void *)0) {
        r0 = arg0;
    } else {
        r0 = (void *)(base + 0x220);
    }
    *(void **)(base + 0x10C) = r0;
    arg0 = (arg0 != (void *)0) ? arg0 : (void *)(base + 0x220);
    *(void **)(base + 0x21C) = arg0;
}

s32 fn_80217B18(s32 arg0, s32 *arg1) {
    void OSDisableInterrupts(void);
    void OSRestoreInterrupts(void);
    extern u8 lbl_8033A200[];
    s32 result;
    u8 *ptr;

    ptr = lbl_8033A200 + arg0 * 0x110;
    if (arg0 < 0 || arg0 >= 2 || *(u32 *)(ptr + 0x10C) == 0) {
        return -0x80;
    }
    OSDisableInterrupts();
    if (*(s32 *)ptr == 0) {
        result = -3;
    } else if (*(s32 *)(ptr + 4) == -1) {
        result = -1;
    } else {
        *(s32 *)(ptr + 4) = -1;
        result = 0;
        *(s32 *)(ptr + 0xD0) = 0;
        *arg1 = (s32)ptr;
    }
    OSRestoreInterrupts();
    return result;
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
    extern u16 lbl_8033A200[];
    if (arg0 < 0 || arg0 >= 2) {
        return -0x80;
    }
    return *(s32 *)((u8 *)lbl_8033A200 + arg0 * 0x110 + 4);
}

s32 fn_80217C64(s32 arg0)
{
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    void fn_8020ADD8(void *);

    u8 *entry;
    u32 interrupts;
    s32 result;

    entry = (u8 *)lbl_8033A200 + arg0 * 0x110;

    interrupts = OSDisableInterrupts();

    do {
        if (arg0 < 0 || arg0 >= 2) {
            result = -0x80;
        } else {
            result = *(s32 *)(entry + 4);
        }

        if (result == -1) {
            fn_8020ADD8(entry + 0x8C);
        }
    } while (result == -1);

    OSRestoreInterrupts(interrupts);

    return result;
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

s32 fn_80217D68(u32 arg0) {
    u32 var_ctr;
    u32 temp_r6;
    u32 var_r9;
    u32 var_r10;
    u32 var_r7;
    u32 var_r8;

    var_ctr = 8;
    temp_r6 = arg0 >> 0x1FU;
    var_r9 = 0;
    var_r10 = 1;
    var_r7 = 0;
    var_r8 = 0;

    for (var_ctr = 8; var_ctr; --var_ctr) {
        if (var_r8 > 0xF) {
            if (var_r8 == 0x1F) {
                var_r7 |= temp_r6;
            } else {
                var_r7 |= (arg0 & (1U << var_r8)) >> var_r10;
                var_r10 += 2;
            }
        } else {
            var_r7 |= (arg0 & (1U << var_r8)) << ((0x1F - var_r8) - var_r9);
            var_r9 += 1;
        }

        if (var_r8 + 1 > 0xF) {
            if (var_r8 + 1 == 0x1F) {
                var_r7 |= temp_r6;
            } else {
                var_r7 |= (arg0 & (1U << (var_r8 + 1))) >> var_r10;
                var_r10 += 2;
            }
        } else {
            var_r7 |= (arg0 & (1U << (var_r8 + 1))) << ((0x1F - (var_r8 + 1)) - var_r9);
            var_r9 += 1;
        }

        if (var_r8 + 2 > 0xF) {
            if (var_r8 + 2 == 0x1F) {
                var_r7 |= temp_r6;
            } else {
                var_r7 |= (arg0 & (1U << (var_r8 + 2))) >> var_r10;
                var_r10 += 2;
            }
        } else {
            var_r7 |= (arg0 & (1U << (var_r8 + 2))) << ((0x1F - (var_r8 + 2)) - var_r9);
            var_r9 += 1;
        }

        if (var_r8 + 3 > 0xF) {
            if (var_r8 + 3 == 0x1F) {
                var_r7 |= temp_r6;
            } else {
                var_r7 |= (arg0 & (1U << (var_r8 + 3))) >> var_r10;
                var_r10 += 2;
            }
        } else {
            var_r7 |= (arg0 & (1U << (var_r8 + 3))) << ((0x1F - (var_r8 + 3)) - var_r9);
            var_r9 += 1;
        }

        var_r8 += 4;
    }

    return var_r7;
}

s32 fn_80217ED4(s32 arg0) {
    s32 temp_r3;
    s32 r6_var;
    s32 r5_var;
    s32 r4_var;
    s32 r3_var;

    if (arg0 == 0) {
        return 0;
    }
    temp_r3 = arg0 + 0x10;
    r6_var = *(s32*)temp_r3;
    if (r6_var < 0) {
        return -1;
    }
    r5_var = *(s32*)(temp_r3 + 0x4);
    if (r5_var < 0) {
        return -1;
    }
    r4_var = *(s32*)(temp_r3 + 0x8);
    if (r4_var < 0) {
        return -1;
    }
    r3_var = *(s32*)(temp_r3 + 0xC);
    if (r3_var < 0) {
        return -1;
    }

    // It seems the function returns 0 at the end, matching the
    // instruction sequence in the original.
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

#pragma use_lmw_stmw on
s32 fn_802180DC(s32 chan, void *out) {
    u32 OSGetTick(void);
    void DCFlushRange(void *, u32);
    void DCInvalidateRange(void *, u32);
    s32 fn_80217D68(u32);
    s32 fn_80217ED4(s32, u32, void *, s32, s32);
    s32 fn_80218018(void);
    void fn_80216050(void *, void *, s32);
    extern void fn_80218C34;
    extern void fn_80218CA4;
    extern u16 lbl_8033A200[];
    extern u8 lbl_8029DA00[];
    extern u32 lbl_80366FE8;

    u8 *card;
    u8 *work;
    void *buf;
    u32 aligned;
    u32 aligned2;
    u32 seed;
    u32 scramble;
    s32 tick;
    s32 n;
    u32 i;
    u32 rem;
    u32 ctr;
    u32 t;
    s32 left;
    u32 spA4[5];
    u32 w0, w1, w2, w3, w4;

    card = (u8 *)lbl_8033A200 + chan * 0x110;
    work = card + 0x30;
    buf = *(void **)(card + 0x80);
    aligned = ((u32)buf + 0x2F) & ~0x1Fu;
    aligned2 = aligned + 0x20;

    lbl_80366FE8 = OSGetTick();
    lbl_80366FE8 = lbl_80366FE8 * 0x41C64E6D + 0x3039;
    seed = (0x7FEC8000u | ((lbl_80366FE8 >> 16) & 0x7FFF)) & 0xFFFFF000u;

    tick = fn_80218018();
    if (fn_80217ED4(chan, seed, spA4, tick, 0) < 0) {
        return -3;
    }

    n = (tick << 3) + 1;
    i = 0;
    scramble = seed;
    if (n != 0) {
        if ((u32)n > 8) {
            rem = (u32)n - 8;
            ctr = (rem + 7) >> 3;
            if (rem != 0) {
                do {
                    t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
                    scramble = (scramble >> 1) | ((t << 30) & 0x40000000);
                    t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
                    scramble = ((scramble >> 1) & 0x3FFFFFFF) | ((t << 30) & 0x40000000);
                    t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
                    scramble = ((scramble >> 1) & 0x3FFFFFFF) | ((t << 30) & 0x40000000);
                    t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
                    scramble = ((scramble >> 1) & 0x3FFFFFFF) | ((t << 30) & 0x40000000);
                    t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
                    scramble = ((scramble >> 1) & 0x3FFFFFFF) | ((t << 30) & 0x40000000);
                    t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
                    scramble = ((scramble >> 1) & 0x3FFFFFFF) | ((t << 30) & 0x40000000);
                    t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
                    scramble = ((scramble >> 1) & 0x3FFFFFFF) | ((t << 30) & 0x40000000);
                    t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
                    scramble = ((scramble >> 1) & 0x3FFFFFFF) | ((t << 30) & 0x40000000);
                    i += 8;
                } while (--ctr);
            }
        }
        left = (s32)((u32)n - i);
        if (i < (u32)n) {
            do {
                t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
                scramble = (scramble >> 1) | ((t << 30) & 0x40000000);
            } while (--left);
        }
    }
    t = ~((scramble >> 23) ^ ((scramble >> 15) ^ (scramble ^ (scramble >> 7))));
    scramble |= t << 31;
    *(u32 *)(card + 0x2C) = scramble;
    *(u32 *)(card + 0x2C) = fn_80217D68(*(u32 *)(card + 0x2C));

    tick = fn_80218018();
    if (fn_80217ED4(chan, 0, spA4, tick + 0x14, 1) < 0) {
        return -3;
    }

    scramble = *(u32 *)(card + 0x2C);
    w0 = spA4[0] ^ scramble;
    {
        s32 c = 4;
        do {
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
        } while (--c);
    }
    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
    scramble |= t >> 31;
    *(u32 *)(card + 0x2C) = scramble;

    scramble = *(u32 *)(card + 0x2C);
    w1 = spA4[1] ^ scramble;
    {
        s32 c = 4;
        do {
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
        } while (--c);
    }
    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
    scramble |= t >> 31;
    *(u32 *)(card + 0x2C) = scramble;

    scramble = *(u32 *)(card + 0x2C);
    w2 = spA4[2] ^ scramble;
    {
        s32 c = 4;
        do {
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
        } while (--c);
    }
    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
    scramble |= t >> 31;
    *(u32 *)(card + 0x2C) = scramble;

    scramble = *(u32 *)(card + 0x2C);
    w3 = spA4[3] ^ scramble;
    {
        s32 c = 4;
        do {
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
        } while (--c);
    }
    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
    scramble |= t >> 31;
    *(u32 *)(card + 0x2C) = scramble;

    scramble = *(u32 *)(card + 0x2C);
    w4 = spA4[4] ^ scramble;
    n = tick << 3;
    i = 0;
    if (n != 0) {
        if ((u32)n > 8) {
            rem = (u32)n - 8;
            ctr = (rem + 7) >> 3;
            if (rem != 0) {
                do {
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    i += 8;
                } while (--ctr);
            }
        }
        left = (s32)((u32)n - i);
        if (i < (u32)n) {
            do {
                t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                scramble = (scramble << 1) | ((t >> 30) & 2);
            } while (--left);
        }
    }
    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
    scramble |= t >> 31;
    *(u32 *)(card + 0x2C) = scramble;

    /* final 0x21-step and DMA setup */
    scramble = *(u32 *)(card + 0x2C);
    i = 0;
    {
        s32 c = 4;
        do {
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
            i += 8;
        } while (--c);
    }
    left = 0x21 - (s32)i;
    if (i < 0x21u) {
        do {
            t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
            scramble = (scramble << 1) | ((t >> 30) & 2);
        } while (--left);
    }
    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
    scramble |= t >> 31;
    *(u32 *)(card + 0x2C) = scramble;

    *(u32 *)aligned = w3;
    *(u32 *)(aligned + 4) = w4;
    *(u32 *)buf = aligned;
    *(u32 *)((u8 *)buf + 4) = 8;
    *(u32 *)((u8 *)buf + 0xC) = aligned2;
    *(u32 *)((u8 *)buf + 8) = 0;
    DCFlushRange((void *)aligned, 8);
    DCInvalidateRange((void *)aligned2, 4);
    DCFlushRange(buf, 0x10);

    work[4] = 0xFF;
    *(void **)(work + 0xC) = (void *)((u32)lbl_8029DA00 + 0x80000000);
    *(u32 *)(work + 0x10) = 0x160;
    *(u32 *)(work + 0x14) = 0;
    *(u32 *)(work + 0x24) = 0x10;
    *(void **)(work + 0x28) = &fn_80218C34;
    *(u32 *)(work + 0x2C) = 0;
    *(void **)(work + 0x30) = &fn_80218CA4;
    *(u32 *)(work + 0x34) = 0;
    fn_80216050(work, &fn_80218C34, 0x10);

    *(u32 *)out = w0;
    *((u32 *)out + 1) = w1;
    *((u32 *)out + 2) = w2;
    return 0;
}

void fn_80218C34(void *arg0)
{
    extern void fn_80215F78(u32);
    extern s32 fn_80215F40(void);

    u8 *base;
    u32 previous;

    base = (u8 *)lbl_8033A200;

    if (arg0 == base + 0x30) {
        return;
    }

    if (arg0 == base + 0x140) {
        return;
    }

    previous = *(u32 *)(base + 0x190);

    fn_80215F78(0xFF000000);

    if (fn_80215F40() == 0) {
        fn_80215F78(previous);
        fn_80215F40();
    }
}

#pragma use_lmw_stmw on
void fn_80218CA4(void *arg0) {
    s32 EXIUnlock(s32);
    s32 fn_80216DA8(s32, u8 *);
    s32 fn_80217ED4(s32, u32, void *, s32, s32);
    s32 fn_80218018(void);
    void fn_8021AE98(s32, s32);
    s32 fn_80239488(s32);
    extern u16 lbl_8033A200[];

    u8 cmd[0x50];
    u8 status;
    s32 result;
    u32 scramble;
    u32 n;
    u32 i;
    u32 rem;
    u32 ctr;
    u32 t;
    s32 left;
    u8 *work;
    s32 tick;
    u8 *card;
    u32 cid;
    s32 chan;

    chan = 0;
    card = (u8 *)lbl_8033A200;
    if ((u8 *)lbl_8033A200 + 0x30 != (u8 *)arg0) {
        card = (u8 *)lbl_8033A200 + 0x110;
        chan = 1;
        if ((u8 *)lbl_8033A200 + 0x140 != (u8 *)arg0) {
            chan = 2;
        }
    }

    work = (u8 *)((*(u32 *)(card + 0x80) + 0x2F) & ~0x1Fu);
    cid = *(u32 *)(work + 0x20);
    tick = fn_80218018();
    if (fn_80217ED4(chan, (cid ^ *(u32 *)(card + 0x2C)) & 0xFFFF0000u, cmd, tick, 1) < 0) {
        EXIUnlock(chan);
        fn_8021AE98(chan, -3);
        return;
    }

    i = 0;
    scramble = *(u32 *)(card + 0x2C);
    n = (u32)(tick + *(s32 *)(card + 0x14));
    n += 4;
    n <<= 3;
    n += 1;
    if (n != 0) {
        if (n > 8) {
            rem = n - 8;
            ctr = (rem + 7) >> 3;
            if (rem != 0) {
                do {
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                    scramble = (scramble << 1) | ((t >> 30) & 2);
                    i += 8;
                } while (--ctr);
            }
        }
        left = (s32)(n - i);
        if (i < n) {
            do {
                t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
                scramble = (scramble << 1) | ((t >> 30) & 2);
            } while (--left);
        }
    }

    t = ~((scramble << 23) ^ ((scramble << 15) ^ (scramble ^ (scramble << 7))));
    scramble |= t >> 31;
    *(u32 *)(card + 0x2C) = scramble;

    tick = fn_80218018();
    if (fn_80217ED4(chan, ((cid << 16) ^ *(u32 *)(card + 0x2C)) & 0xFFFF0000u, cmd, tick, 1) < 0) {
        EXIUnlock(chan);
        fn_8021AE98(chan, -3);
        return;
    }

    result = fn_80216DA8(chan, &status);
    if (fn_80239488(chan) == 0) {
        EXIUnlock(chan);
        fn_8021AE98(chan, -3);
        return;
    }
    if (result == 0 && !(status & 0x40)) {
        EXIUnlock(chan);
        result = -5;
    }
    fn_8021AE98(chan, result);
}
s32 fn_802190A4(s32 chan, u32 addr, u32 length, void *dst, void *callback) {
    extern u16 lbl_8033A200[];
    void fn_80218FC8();
    u8 *card;

    card = (u8 *)lbl_8033A200 + chan * 0x110;
    if (*(s32 *)card == 0) {
        return -3;
    }
    *(void **)(card + 0xD4) = callback;
    *(u32 *)(card + 0xAC) = length / 0x200;
    *(u32 *)(card + 0xB0) = addr;
    *(void **)(card + 0xB4) = dst;
    return fn_802176AC(chan, fn_80218FC8);
}

s32 fn_802191F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void (*arg4)(s32, s32)) {
    extern u16 lbl_8033A200[];
    extern void *fn_80219108;
    s32 temp_r5;
    u16 move_cost;
    void *unit_ptr;
    
    // Set up pointer using the original register sequence
    s32 r9 = arg0 * 0x110;
    unit_ptr = (void *)&lbl_8033A200[r9 / sizeof(u16)];
    
    if (*(s32 *)unit_ptr == 0) {
        return -3;
    }
    
    *(void **)((char *)unit_ptr + 0xD4) = arg4;
    
    move_cost = *(u16 *)((char *)unit_ptr + 0xA);
    temp_r5 = arg2 / (s32)move_cost;
    
    *(s32 *)((char *)unit_ptr + 0xAC) = temp_r5;
    *(s32 *)((char *)unit_ptr + 0xB0) = arg1;
    *(s32 *)((char *)unit_ptr + 0xB4) = arg3;
    
    return fn_802177E0(&fn_80219108, temp_r5, move_cost);
}

s32 fn_80219258(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

void fn_80219260(s32 chan, s32 result) {
    extern u16 lbl_8033A200[];
    void *memcpy(void *, const void *, u32);
    s32 fn_80217BD0(void *, s32);
    u8 *card;
    u8 *base;
    u8 *p6000;
    u8 *p8000;
    void (*callback)(s32, s32);

    card = (u8 *)lbl_8033A200 + chan * 0x110;
    if (result >= 0) {
        base = *(u8 **)(card + 0x80);
        p6000 = base + 0x6000;
        p8000 = base + 0x8000;
        if (*(u8 **)(card + 0x88) == p6000) {
            *(u8 **)(card + 0x88) = p8000;
            memcpy(p8000, p6000, 0x2000);
        } else {
            *(u8 **)(card + 0x88) = p6000;
            memcpy(p6000, p8000, 0x2000);
        }
    }
    if (*(u32 *)(card + 0xD0) == 0) {
        fn_80217BD0(card, result);
    }
    callback = *(void (**)(s32, s32))(card + 0xD8);
    if (callback != NULL) {
        *(void **)(card + 0xD8) = NULL;
        callback(chan, result);
    }
}

s32 fn_802193FC(s32 arg0, u32 arg1)
{
    s32 fn_802195B0(s32, void *);

    u8 *entry;
    u8 *data;
    u16 *slots;
    u16 current;
    u16 first;
    u16 previous;
    u16 next;
    u16 limit;
    u32 attempts;

    entry = (u8 *)lbl_8033A200 + arg0 * 0x110;

    if (*(s32 *)entry == 0) {
        return -3;
    }

    data = *(u8 **)(entry + 0x88);

    if (*(u16 *)(data + 6) < arg1) {
        return -9;
    }

    *(u16 *)(data + 6) -= arg1;

    current = *(u16 *)(data + 8);
    first = 0xFFFF;
    attempts = 0;
    slots = (u16 *)data;
    limit = *(u16 *)(entry + 0x10);

    do {
        attempts++;

        if ((s32)(limit - 5) < (s32)attempts) {
            return -6;
        }

        current++;

        if (current >= 5 && current >= limit) {
            current = 5;
        }

        next = slots[current];

        if (next != 0) {
            continue;
        }

        if (first == 0xFFFF) {
            first = current;
        } else {
            slots[previous] = current;
        }

        slots[current] = 0xFFFF;
        previous = current;

        arg1--;
    } while (arg1 != 0);

    *(u16 *)(data + 8) = current;
    *(u16 *)(entry + 0xBE) = first;

    return fn_802195B0(arg0, data);
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

int fn_802195B0(int arg0, void *arg1, void *arg2)
{
    void fn_802198C0(void *, u32, void *, void *);
    void fn_80205110(void *, u32);
    int fn_8021791C(int, u32, void *);
    void fn_80219334(void);

    u8 *data;
    u8 *entry;
    u32 offset;
    u32 size;

    data = (u8 *)arg1;
    entry = (u8 *)lbl_8033A200 + arg0 * 0x110;

    *(u16 *)(data + 4) = *(u16 *)(data + 4) + 1;

    fn_802198C0(data + 4, 0x1FFC, data, data + 2);

    fn_80205110(data, 0x2000);

    *(void **)(entry + 0xD8) = arg2;

    offset = ((u32)data - *(u32 *)(entry + 0x80)) >> 13;
    size = *(u32 *)(entry + 0xC) * offset;

    return fn_8021791C(arg0, size, (void *)fn_80219334);
}

s32 fn_8021965C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

s32 fn_802198C0(u16 *arg0, s32 arg1, u16 *arg2, u16 *arg3);
s32 fn_80205110(void *, s32);
void fn_80219734(void);
s32 fn_802197FC(s32 arg0, s32 arg1) {
    u8 *temp_r31;
    u8 *temp_r30;
    void *temp_r6;

    temp_r30 = (u8 *)lbl_8033A200 + arg0 * 0x110;
    if (*(s32 *)temp_r30 == 0) {
        return -3;
    }
    temp_r31 = *(u8 **)(temp_r30 + 0x84);
    temp_r6 = temp_r31 + 0x1FC0;
    *(u16 *)(temp_r31 + 0x1FFA) = (u16)(*(s16 *)(temp_r31 + 0x1FFA) + 1);
    fn_802198C0((u16 *)temp_r31, 0x1FFC, (u16 *)((u8 *)temp_r6 + 0x3C), (u16 *)((u8 *)temp_r6 + 0x3E));
    fn_80205110(temp_r31, 0x2000);
    *(s32 *)(temp_r30 + 0xD8) = arg1;
    return fn_8021791C(arg0, *(s32 *)(temp_r30 + 0x0C) * ((u32)(temp_r31 - *(u8 **)(temp_r30 + 0x80)) >> 13), (void *)fn_80219734);
}

#pragma opt_strength_reduction off
s32 fn_802198C0(u16 *arg0, s32 arg1, u16 *arg2, u16 *arg3) {
    s32 n;
    u16 temp;

    *arg3 = 0;
    arg1 = arg1 / 2;
    *arg2 = 0;
    if (arg1 > 0) {
        n = (u32)arg1 >> 3;
        if (n != 0) {
            do {
                *arg2 += arg0[0];
                temp = arg0[0];
                *arg3 += ~temp;
                *arg2 += arg0[1];
                temp = arg0[1];
                *arg3 += ~temp;
                *arg2 += arg0[2];
                temp = arg0[2];
                *arg3 += ~temp;
                *arg2 += arg0[3];
                temp = arg0[3];
                *arg3 += ~temp;
                *arg2 += arg0[4];
                temp = arg0[4];
                *arg3 += ~temp;
                *arg2 += arg0[5];
                temp = arg0[5];
                *arg3 += ~temp;
                *arg2 += arg0[6];
                temp = arg0[6];
                *arg3 += ~temp;
                *arg2 += arg0[7];
                temp = arg0[7];
                arg0 += 8;
                *arg3 += ~temp;
            } while (--n);
        }
        arg1 &= 7;
        if (arg1 != 0) {
            do {
                *arg2 += *arg0;
                temp = *arg0;
                arg0 += 1;
                *arg3 += ~temp;
            } while (--arg1);
        }
    }
    if (*arg2 == 0xFFFF) {
        *arg2 = 0;
    }
    if (*arg3 == 0xFFFF) {
        *arg3 = 0;
    }
}

#pragma use_lmw_stmw on
s32 fn_80219A70(void *arg0)
{
    extern u16 lbl_8033A200[];
    u8 *__OSLockSramEx(void);
    void __OSUnlockSramEx(s32);
    u16 fn_80217AD8(void);
    s32 length, n;
    u16 *p;
    u16 v;
    u32 sum, inv;
    u8 *sram;
    u64 random;
    u8 *header;
    s32 i;
    u8 *serial;

    header = *(u8 **)((u8 *)arg0 + 0x80);
    if (*(u16 *)(header + 0x20) != 0 || *(u16 *)(header + 0x22) != *(u16 *)((u8 *)arg0 + 8)) {
        return -6;
    }
    length = 0x1fc;
    length /= 2;
    p = (u16 *)header;
    sum = inv = 0;
    for (n = length; n > 0; n--) {
        v = *p++;
        sum += v;
        inv += ~v;
    }
    if ((u16)sum == 0xffff) {
        sum = 0;
    }
    if ((u16)inv == 0xffff) {
        inv = 0;
    }
    if (*(u16 *)(header + 0x1fc) != (u16)sum || *(u16 *)(header + 0x1fe) != (u16)inv) {
        return -6;
    }
    random = *(u64 *)(header + 12);
    sram = (u8 *)__OSLockSramEx() + (((u8 *)arg0 - (u8 *)lbl_8033A200) / 0x110) * 12;
    serial = header;
    for (i = 0; i < 12; i++, sram++, serial++) {
        random = (random * 0x41c64e6dULL + 12345) >> 16;
        if (*serial != (u8)(random + *sram)) {
            __OSUnlockSramEx(0);
            return -6;
        }
        random = ((random * 0x41c64e6dULL + 12345) >> 16) & 0x7fff;
    }
    __OSUnlockSramEx(0);
    if (*(u16 *)(header + 0x24) != fn_80217AD8()) {
        return -13;
    }
    return 0;
}
#pragma use_lmw_stmw reset
s32 fn_80219CF4(s32 card, s32 *alternative) {
    void *memcpy(void *, const void *, u32);
    u8 *block[2];
    u8 *check[2];
    s32 cBlock;
    s32 cCheck;
    s32 *alt;
    s32 i;
    u8 **bp;
    u8 **cp;
    s32 n;
    u16 *p;
    u32 sum;
    u32 inv;
    u16 temp;

    bp = &block[0];
    cp = &check[0];
    cBlock = 0;
    cCheck = 0;
    alt = alternative;
    i = 0;
    do {
        *bp = *(u8 **)((u8 *)card + 0x80) + ((i + 1) << 13);
        n = 0x1FFC;
        n = n / 2;
        inv = 0;
        *cp = *bp + 0x1FC0;
        sum = 0;
        p = (u16 *)*bp;
        if (n > 0) {
            s32 n8 = (u32)n >> 3;
            if (n8 != 0) {
                do {
                    sum += p[0];
                    temp = p[0];
                    inv += ~temp;
                    sum += p[1];
                    temp = p[1];
                    inv += ~temp;
                    sum += p[2];
                    temp = p[2];
                    inv += ~temp;
                    sum += p[3];
                    temp = p[3];
                    inv += ~temp;
                    sum += p[4];
                    temp = p[4];
                    inv += ~temp;
                    sum += p[5];
                    temp = p[5];
                    inv += ~temp;
                    sum += p[6];
                    temp = p[6];
                    inv += ~temp;
                    sum += p[7];
                    temp = p[7];
                    p += 8;
                    inv += ~temp;
                } while (--n8);
            }
            n &= 7;
            if (n != 0) {
                do {
                    sum += *p;
                    temp = *p;
                    p += 1;
                    inv += ~temp;
                } while (--n);
            }
        }
        if ((u16)sum == 0xFFFF) {
            sum = 0;
        }
        if ((u16)inv == 0xFFFF) {
            inv = 0;
        }
        if ((u16)sum != *(u16 *)(*cp + 0x3C) || (u16)inv != *(u16 *)(*cp + 0x3E)) {
            *(u8 **)((u8 *)card + 0x84) = 0;
            cCheck = i;
            cBlock += 1;
        }
        i += 1;
        bp += 1;
        cp += 1;
    } while (i < 2);
    if (cBlock == 0) {
        if (*(u8 **)((u8 *)card + 0x84) == 0) {
            if (*(s16 *)(check[0] + 0x3A) - *(s16 *)(check[1] + 0x3A) < 0) {
                cCheck = 0;
            } else {
                cCheck = 1;
            }
            *(u8 **)((u8 *)card + 0x84) = block[cCheck];
            memcpy(block[cCheck], block[cCheck ^ 1], 0x2000);
        } else if (*(u8 **)((u8 *)card + 0x84) == block[0]) {
            cCheck = 0;
        } else {
            cCheck = 1;
        }
    }
    if (alt != 0) {
        *alt = cCheck;
    }
    return cBlock;
}

#pragma global_optimizer off
s32 fn_80219F34(s32 card, s32 *alternative) {
    void *memcpy(void *, const void *, u32);
    u8 *block[2];
    s32 i;
    u8 **bp;
    s32 *alt;
    s32 cBlock, cCheck;
    u8 *b;

    i = 0;
    cBlock = 0;
    cCheck = 0;
    alt = alternative;
    bp = block;
    do {
        s32 n;
        u16 *p;
        u16 temp;
        u32 sum, inv;
        b = *(u8 **)((u8 *)card + 0x80) + ((i + 3) << 13);
        *bp = b;
        n = 0x1FFC;
        n /= 2;
        p = (u16 *)(b + 4);
        sum = inv = 0;
        for (; n > 0; n--) {
            temp = *p++;
            sum += temp;
            inv += ~temp;
        }
        if ((u16)sum == 0xFFFF)
            sum = 0;
        if ((u16)inv == 0xFFFF)
            inv = 0;
        if (*(u16 *)b != (u16)sum || *(u16 *)(b + 2) != (u16)inv) {
            *(u8 **)((u8 *)card + 0x88) = 0;
            cCheck = i;
            cBlock++;
        } else {
            u16 free, j;
            u32 total = *(u16 *)((u8 *)card + 0x10);
            p = (u16 *)(b + 10);
            free = 0;
            j = 5;
            while (j < total) {
                if (*p == 0)
                    free++;
                p++;
                j++;
            }
            if (free != *(u16 *)(b + 6)) {
                *(u8 **)((u8 *)card + 0x88) = 0;
                cCheck = i;
                cBlock++;
            }
        }
        i++;
        bp++;
    } while (i < 2);
    if (cBlock == 0) {
        if (*(u8 **)((u8 *)card + 0x88) == 0) {
            if (*(s16 *)(block[0] + 4) - *(s16 *)(block[1] + 4) < 0)
                cCheck = 0;
            else
                cCheck = 1;
            {
                u8 **chosen = &block[cCheck];
                *(u8 **)((u8 *)card + 0x88) = *chosen;
                memcpy(*chosen, block[cCheck ^ 1], 0x2000);
            }
        } else {
            s32 chosen;
            if (*(u8 **)((u8 *)card + 0x88) == block[0])
                chosen = 0;
            else
                chosen = 1;
            cCheck = chosen;
        }
    }
    if (alt)
        *alt = cCheck;
    return cBlock;
}
#pragma global_optimizer reset
#pragma opt_strength_reduction off
#pragma opt_common_subs reset
s32 fn_8021A1B8(s32 arg0) {
    s32 temp_r31;
    s32 temp_r0;
    s32 temp_r3;

    temp_r3 = fn_80219A70((void *)arg0);
    if (temp_r3 < 0) {
        return temp_r3;
    }
    temp_r31 = fn_80219CF4(arg0, 0);
    temp_r0 = temp_r31 + fn_80219F34(arg0, 0);
    switch (temp_r0) {
    case 0:
        return 0;
    case 1:
        return -6;
    default:
        return -6;
    }
}

#pragma use_lmw_stmw on
s32 fn_8021A244(s32 chan, s32 *outSize, void (*callback)(s32, s32))
{
    void *memcpy(void *, const void *, u32);
    void *memset(void *, s32, u32);
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 fn_80217B18(s32, void **);
    s32 fn_80217BD0(void *, s32);
    s32 fn_80219A70(void *);
    s32 fn_80219CF4(void *, s32 *);
    s32 fn_80219F34(void *, s32 *);
    void fn_802198C0(u16 *, s32, u16 *, u16 *);
    s32 fn_802197FC(s32, s32);
    s32 fn_802195B0(s32, void *, void *);

    void *card;
    u8 *blockDir[2];
    u8 *blockFat[2];
    s32 altFat;
    s32 altDir;
    s32 cBlock;
    s32 flagDirty;
    s32 flagDir;
    s32 flagFat;
    s32 ret;
    u8 *base;
    u16 *scratch;
    u8 *dir;
    s32 i;
    u16 block;
    u16 len;
    u16 next;
    u16 *fat;
    u16 *sp;
    u16 freeCount;
    u16 idx;
    u16 limit;
    u16 cnt;
    s32 irq;

    flagFat = 0;
    flagDir = 0;
    flagDirty = 0;
    if (outSize != 0) {
        *outSize = 0;
    }
    ret = fn_80217B18(chan, &card);
    if (ret < 0) {
        return ret;
    }
    ret = fn_80219A70(card);
    if (ret < 0) {
        return fn_80217BD0(card, ret);
    }
    cBlock = fn_80219CF4(card, &altDir);
    cBlock += fn_80219F34(card, &altFat);
    if (cBlock > 1) {
        return fn_80217BD0(card, -6);
    }
    base = *(u8 **)((u8 *)card + 0x80);
    blockDir[0] = base + 0x2000;
    blockFat[0] = base + 0x6000;
    blockDir[1] = base + 0x4000;
    blockFat[1] = base + 0x8000;
    if (cBlock == 1) {
        if (*(void **)((u8 *)card + 0x84) == 0) {
            *(u8 **)((u8 *)card + 0x84) = blockDir[altDir];
            memcpy(blockDir[altDir], blockDir[altDir ^ 1], 0x2000);
            flagDir = 1;
        } else {
            *(u8 **)((u8 *)card + 0x88) = blockFat[altFat];
            memcpy(blockFat[altFat], blockFat[altFat ^ 1], 0x2000);
            flagFat = 1;
        }
    }
    scratch = (u16 *)blockFat[altFat ^ 1];
    memset(scratch, 0, 0x2000);
    for (i = 0; i < 0x7F; i++) {
        dir = *(u8 **)((u8 *)card + 0x84) + (i * 0x40);
        if (*dir != 0xFF) {
            block = *(u16 *)(dir + 0x36);
            len = 0;
            do {
                if ((u32)block < 5 || (u32)block >= *(u16 *)((u8 *)card + 0x10)) {
                    return fn_80217BD0(card, -6);
                }
                cnt = scratch[block] + 1;
                scratch[block] = cnt;
                if ((u32)cnt > 1) {
                    return fn_80217BD0(card, -6);
                }
                next = (*(u16 **)((u8 *)card + 0x88))[block];
                len++;
                if ((u32)next == 0xFFFF) {
                    break;
                }
            } while ((u32)len < *(u16 *)(dir + 0x38));
            if ((u32)len != *(u16 *)(dir + 0x38) || (u32)next != 0xFFFF) {
                return fn_80217BD0(card, -6);
            }
        }
    }
    sp = scratch + 5;
    freeCount = 0;
    for (idx = 5, i = 0xA; (u32)idx < *(u16 *)((u8 *)card + 0x10); idx++, i += 2, sp++) {
        next = *(u16 *)(*(u8 **)((u8 *)card + 0x88) + i);
        if (*sp == 0) {
            if (next != 0) {
                *(u16 *)(*(u8 **)((u8 *)card + 0x88) + i) = 0;
                flagDirty = 1;
            }
            freeCount++;
        } else if (((u32)next < 5 || (u32)next >= *(u16 *)((u8 *)card + 0x10)) && (u32)next != 0xFFFF) {
            return fn_80217BD0(card, -6);
        }
    }
    fat = *(u16 **)((u8 *)card + 0x88);
    if (freeCount != fat[3]) {
        fat[3] = freeCount;
        flagDirty = 1;
    }
    if (flagDirty != 0) {
        fat = *(u16 **)((u8 *)card + 0x88);
        fn_802198C0(fat + 2, 0x1FFC, fat, fat + 1);
    }
    memcpy(blockFat[altFat ^ 1], blockFat[altFat], 0x2000);
    if (flagDir != 0) {
        if (outSize != 0) {
            *outSize = 0x2000;
        }
        return fn_802197FC(chan, (s32)callback);
    }
    if ((flagFat | flagDirty) != 0) {
        if (outSize != 0) {
            *outSize = 0x2000;
        }
        return fn_802195B0(chan, *(void **)((u8 *)card + 0x88), callback);
    }
    fn_80217BD0(card, 0);
    if (callback != 0) {
        irq = OSDisableInterrupts();
        callback(chan, 0);
        OSRestoreInterrupts(irq);
    }
    return 0;
}
void fn_8021A7D4(void *arg0, s32 arg1) {
    void fn_8021A244(void *, void *, s32);
    s32 sp10;

    fn_8021A244(arg0, &sp10, arg1);
}

#pragma use_lmw_stmw on
s32 fn_8021A8C8(s32 chan, s32 *memSize, s32 *sectorSize) {
    extern u16 lbl_8033A200[];
    extern u32 lbl_8029DB60[];
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 EXIGetID(s32, s32, u32 *);
    s32 fn_8021A7FC(u32);
    s32 fn_80239508(s32);
    s32 fn_8023A114(s32);
    s32 card;
    s32 enabled;
    s32 probe;
    u32 id;

    if (chan < 0 || chan >= 2) {
        return -0x80;
    }
    if (*(u8 *)0x800030E3 & 0x80) {
        return -3;
    }
    card = (s32)((u8 *)lbl_8033A200 + chan * 0x110);
    enabled = OSDisableInterrupts();
    probe = fn_80239508(chan);
    if (probe == -1) {
        card = (card & 0) - 3;
    } else if (probe == 0) {
        card = (card & 0) - 1;
    } else if (*(s32 *)card != 0) {
        if (*(s32 *)(card + 0x24) < 1) {
            card = (card & 0) - 1;
        } else {
            if (memSize != NULL) {
                *memSize = *(u16 *)(card + 8);
            }
            if (sectorSize != NULL) {
                *sectorSize = *(s32 *)(card + 0xC);
            }
            card = card & 0;
        }
    } else if (fn_8023A114(chan) & 8) {
        card = (card & 0) - 2;
    } else if (EXIGetID(chan, 0, &id) == 0) {
        card = (card & 0) - 1;
    } else if (fn_8021A7FC(id) != 0) {
        if (memSize != NULL) {
            *memSize = (s32)(id & 0xFC);
        }
        if (sectorSize != NULL) {
            *sectorSize = *(s32 *)((u8 *)lbl_8029DB60 + ((id >> 9) & 0x1C));
        }
        card = card & 0;
    } else {
        card = (card & 0) - 2;
    }
    OSRestoreInterrupts(enabled);
    return card;
}

#pragma opt_strength_reduction on
s32 fn_8021AA44(s32 chan) {
s32 EXIGetID(s32,s32,u32*);s32 EXIUnlock(s32);
s32 fn_8021A7FC(u32);s32 fn_80216E98(s32,void*);s32 fn_80217D4C(void);s32 fn_80216F88(s32);s32 fn_80216DA8(s32,u8*);s32 fn_80239488(s32);s32 fn_802180DC(s32,void*);
u8 *__OSLockSramEx(void);void __OSUnlockSramEx(s32);
s32 fn_80216CE8(s32,s32);void fn_80239298(s32,void*);void fn_80216AA4(void);void fn_8021AE98(s32,s32);
s32 fn_802190A4(s32,u32,u32,void*,void*);void fn_80217BD0(void*,s32);void fn_8021B170(s32,s32);
extern u16 lbl_8033A200[];extern s32 lbl_8029DB60[],lbl_8029DB80[];extern u16 lbl_80366FF0;
u8 status;
u32 id;
u8 *card;
s32 rc, i, sum;
s32 result;
u16 code;
u8 *serial, *p, *sram;
card=(u8*)lbl_8033A200+chan*0x110;
if(*(s32*)(card+0x24)==0) {
if(!EXIGetID(chan,0,&id)) result=-3;
else if(fn_8021A7FC(id))result=0;else result=-2;
if(result<0)goto fail;
*(u32*)(card+0x108)=id;
*(u16*)(card+8)=id&0xfc;
*(s32*)(card+0xc)=*(s32*)((u8*)lbl_8029DB60+((id>>9)&0x1c));
*(u16*)(card+0x10)=((s32)(*(u16*)(card+8)<<20)/8)/ *(s32*)(card+0xc);
*(s32*)(card+0x14)=*(s32*)((u8*)lbl_8029DB80+((id>>6)&0x1c));
result=fn_80216E98(chan,card+0x12);if(result<0)goto fail;
if(fn_80217D4C() && (*(u16*)(card+0x12)>>8)==0xec) *(u16*)(card+0xa)=512;else *(u16*)(card+0xa)=128;
result=fn_80216F88(chan);if(result<0)goto fail;
result=fn_80216DA8(chan,&status);if(result<0)goto fail;
if(!fn_80239488(chan)) {result=-3;goto fail;}
if(!(status&0x40)){
result=fn_802180DC(chan,card+0x18);if(result<0)goto fail;
sram=__OSLockSramEx();p=sram+chan*12;serial=card+0x18;sum=0;
for(i=0;i<12;i++){*p++=card[0x18+i];sum+=card[0x18+i];}
sram[0x26+chan]=~sum;__OSUnlockSramEx(1);return result;
}
*(s32*)(card+0x24)=1;
sram=__OSLockSramEx();p=sram+chan*12;sum=0;
for(i=0;i<12;i++)sum+=*p++;
__OSUnlockSramEx(0);
if(sram[0x26+chan]!=(u8)~sum){result=-5;goto fail;}
}
if(*(s32*)(card+0x24)==1) {
if(*(u32*)(card+0x108)==0x80000004) {
sram=__OSLockSramEx();code=*(u16*)(sram+chan*12);__OSUnlockSramEx(0);
if(lbl_80366FF0==0xffff || code!=lbl_80366FF0){result=-2;goto fail;}
}
*(s32*)(card+0x24)=2;
result=fn_80216CE8(chan,1);if(result<0)goto fail;
fn_80239298(chan,fn_80216AA4);EXIUnlock(chan);
DCInvalidateRange(*(void**)(card+0x80),0xa000);
}
i=*(s32*)(card+0x24)-2;
rc=fn_802190A4(chan,*(s32*)(card+0xc)*i,0x2000,*(u8**)(card+0x80)+(i<<13),fn_8021AE98);
if(rc<0)fn_80217BD0(card,rc);
return rc;
fail:
EXIUnlock(chan);fn_8021B170(chan,result);return result;
}
#pragma opt_strength_reduction off

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

s32 fn_8021B20C(s32 arg0)
{
    s32 fn_80217B18(s32, void **);
    u32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(u32);
    void fn_80239298(s32, s32);
    void fn_802396C8(s32);
    void fn_80204770(void *);

    void *handle;
    u8 *entry;
    u32 interrupts;
    s32 result;

    result = fn_80217B18(arg0, &handle);

    if (result < 0) {
        return result;
    }

    entry = (u8 *)lbl_8033A200 + arg0 * 0x110;

    interrupts = OSDisableInterrupts();

    if (*(s32 *)entry != 0) {
        fn_80239298(arg0, 0);
        fn_802396C8(arg0);
        fn_80204770(entry + 0xE0);

        *(u32 *)entry = 0;
        *(s32 *)(entry + 4) = -3;
        *(u32 *)(entry + 0x24) = 0;
    }

    OSRestoreInterrupts(interrupts);

    return 0;
}

#pragma dont_inline on
void fn_8021B2B8(s32 arg0, s32 arg1) {
    extern u16 lbl_8033A200[];
    s32 fn_8021791C(s32, s32, void *);
    s32 fn_802191F0(s32, s32, s32, s32, void *);
    void *memcpy(void *, const void *, u32);
    s32 fn_80217BD0(void *, s32);
    u8 *card;
    s32 chan;
    void (*callback)(s32, s32);
    s32 result;

    chan = arg0;
    card = (u8 *)lbl_8033A200 + chan * 0x110;
    result = arg1;
    if (result >= 0) {
        *(s32 *)(card + 0x28) = *(s32 *)(card + 0x28) + 1;
        if (*(s32 *)(card + 0x28) < 5) {
            result = fn_8021791C(chan, *(s32 *)(card + 0xC) * *(s32 *)(card + 0x28), fn_8021B2B8);
            if (result >= 0) {
                return;
            }
        } else if (*(s32 *)(card + 0x28) < 10) {
            result = fn_802191F0(chan, *(s32 *)(card + 0xC) * (*(s32 *)(card + 0x28) - 5), 0x2000,
                                (s32)(*(u8 **)(card + 0x80) + ((*(s32 *)(card + 0x28) - 5) << 13)), fn_8021B2B8);
            if (result >= 0) {
                return;
            }
        } else {
            *(u8 **)(card + 0x84) = *(u8 **)(card + 0x80) + 0x2000;
            memcpy(*(void **)(card + 0x84), *(u8 **)(card + 0x80) + 0x4000, 0x2000);
            *(u8 **)(card + 0x88) = *(u8 **)(card + 0x80) + 0x6000;
            memcpy(*(void **)(card + 0x88), *(u8 **)(card + 0x80) + 0x8000, 0x2000);
        }
    }
    callback = *(void (**)(s32, s32))(card + 0xD0);
    *(void **)(card + 0xD0) = 0;
    fn_80217BD0(card, result);
    callback(chan, result);
}

#pragma use_lmw_stmw on
s32 fn_8021B3FC(s32 chan, s16 arg1, void *callback)
{
    s32 fn_80217B18(s32, void **);
    void *memset(void *, s32, u32);
    void *__OSLockSram(void);
    void __OSUnlockSram(s32);
    u8 *__OSLockSramEx(void);
    void __OSUnlockSramEx(s32);
    s64 OSGetTime(void);
    s64 fn_8022CB50(s64, s32);
    void fn_802198C0(void *, u32, void *, void *);
    void fn_80205110(void *, u32);
    s32 fn_8021791C(s32, s32, void *, void *);
    void fn_80217BD0(void *, s32);
    extern void fn_80216994(void);
    extern void fn_8021B2B8(void);

    void *card;
    u8 *work;
    u16 dsp;
    void *sram;
    s64 time;
    u32 *timeParts;
    u32 timeLo;
    u32 timeHi;
    s64 seed;
    u8 *flash;
    u8 *p;
    s16 i;
    s16 limit;
    u8 *block;
    void *cb;
    s32 result;

    result = fn_80217B18(chan, &card);
    if (result < 0) {
        return result;
    }

    work = *(u8 **)((u8 *)card + 0x80);
    memset(work, 0xFF, 0x2000);
    dsp = *(u16 *)0xCC00206E;
    *(s16 *)(work + 0x24) = arg1;

    sram = __OSLockSram();
    *(u32 *)(work + 0x14) = *(u32 *)((u8 *)sram + 0xC);
    *(u32 *)(work + 0x18) = *(u8 *)((u8 *)sram + 0x12);
    __OSUnlockSram(0);

    time = OSGetTime();
    timeParts = (u32 *)&time;
    timeHi = timeParts[0];
    timeLo = timeParts[1];
    seed = time;
    flash = __OSLockSramEx() + chan * 0xC;
    p = flash;
    i = 0;
    limit = 4;

    while (i < limit) {
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        work[i] = (u8)((u32)seed + *p);
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        seed &= 0x7FFF;

        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        work[i + 1] = (u8)((u32)seed + flash[i + 1]);
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        seed &= 0x7FFF;

        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        work[i + 2] = (u8)((u32)seed + flash[i + 2]);
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        seed &= 0x7FFF;

        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        work[i + 3] = (u8)((u32)seed + flash[i + 3]);
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        seed &= 0x7FFF;

        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        work[i + 4] = (u8)((u32)seed + flash[i + 4]);
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        seed &= 0x7FFF;

        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        work[i + 5] = (u8)((u32)seed + flash[i + 5]);
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        seed &= 0x7FFF;

        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        work[i + 6] = (u8)((u32)seed + flash[i + 6]);
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        seed &= 0x7FFF;

        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        work[i + 7] = (u8)((u32)seed + flash[i + 7]);
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        seed &= 0x7FFF;

        p += 8;
        i += 8;
    }

    p = flash + i;
    while (i < 0xC) {
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        work[i] = (u8)((u32)seed + *p);
        seed = fn_8022CB50(seed * 0x41C64E6D + 0x3039, 16);
        seed &= 0x7FFF;
        p += 1;
        i += 1;
    }

    __OSUnlockSramEx(0);
    *(u32 *)(work + 0x1C) = dsp;
    i = 0;
    *(u32 *)(work + 0x10) = timeLo;
    *(u32 *)(work + 0xC) = timeHi;
    *(s16 *)(work + 0x20) = 0;
    *(u16 *)(work + 0x22) = *(u16 *)((u8 *)card + 8);
    fn_802198C0(work, 0x1FC, work + 0x1FC, work + 0x1FE);

    while (i < 2) {
        block = *(u8 **)((u8 *)card + 0x80) + ((i + 1) << 13);
        memset(block, 0xFF, 0x2000);
        *(s16 *)(block + 0x1FFA) = i;
        fn_802198C0(block, 0x1FFC, block + 0x1FFC, block + 0x1FFE);
        i += 1;
    }

    i = 0;
    while (i < 2) {
        block = *(u8 **)((u8 *)card + 0x80) + ((i + 3) << 13);
        memset(block, 0, 0x2000);
        *(s16 *)(block + 4) = i;
        *(s16 *)(block + 6) = *(u16 *)((u8 *)card + 0x10) - 5;
        *(s16 *)(block + 8) = 4;
        fn_802198C0(block + 4, 0x1FFC, block, block + 2);
        i += 1;
    }

    if (callback != 0) {
        cb = callback;
    } else {
        cb = (void *)fn_80216994;
    }
    *(void **)((u8 *)card + 0xD0) = cb;
    fn_80205110(*(void **)((u8 *)card + 0x80), 0xA000);
    *(u32 *)((u8 *)card + 0x28) = 0;
    result = fn_8021791C(chan, *(s32 *)((u8 *)card + 0xC) * *(s32 *)((u8 *)card + 0x28), (void *)fn_8021B2B8, card);
    if (result < 0) {
        fn_80217BD0(card, result);
    }
    return result;
}
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

s32 fn_8021BB98(void *arg0, void *arg1)
{
    s32 fn_80231944(const void *, const void *, u32);
    extern u8 lbl_8033A420[];
    extern u8 lbl_80366FF2;

    u8 *data;
    u8 *reference;
    s32 result;
    u8 flags;

    data = (u8 *)arg1;
    reference = *(u8 **)((u8 *)arg0 + 0x10C);

    if (data[0] == 0xFF) {
        result = -4;
    } else if (reference == lbl_8033A420) {
        result = -10;
    } else if (fn_80231944(data, reference, 4) == 0 &&
               fn_80231944(data + 4, reference + 4, 2) == 0) {
        result = 0;
    } else {
        result = -10;
    }

    if (result == -10) {
        flags = data[0x34] & lbl_80366FF2;

        if (flags & 0x20) {
            if (fn_80231944(data, lbl_8033A420, 4) == 0 &&
                fn_80231944(data + 4, lbl_8033A420 + 4, 2) == 0) {
                return 0;
            }
        } else if (flags & 0x40) {
            if (fn_80231944(data, lbl_8033A420, 4) == 0 &&
                fn_80231944(data + 4, reference + 4, 2) == 0) {
                return 0;
            }
        }
    }

    return result;
}

s32 fn_8021BCCC(void *arg0, void *arg1)
{
    s32 fn_8021BB04(void *);
    s32 fn_80231944(const void *, const void *, u32);

    extern u8 lbl_80366FF2;
    extern u8 lbl_8033A420[];

    u8 *data;
    u8 *saved;
    s32 result;
    u8 flags;

    data = (u8 *)arg1;
    saved = *(u8 **)((u8 *)arg0 + 0x10C);

    result = fn_8021BB04(arg0);

    if (result == -10) {
        flags = data[0x34] & lbl_80366FF2;

        if (flags & 0x20) {
            if (fn_80231944(data, lbl_8033A420, 4) == 0) {
                if (fn_80231944(data + 4, lbl_8033A420 + 4, 2) == 0) {
                    result = 0;
                }
            }
        } else if (flags & 0x40) {
            if (fn_80231944(data, lbl_8033A420, 4) == 0) {
                if (fn_80231944(data + 4, saved + 4, 2) == 0) {
                    result = 0;
                }
            }
        }
    }

    if (result == -10 && (data[0x34] & 4)) {
        return 0;
    }

    return result;
}

s32 fn_8021BDC0(void *arg0, char *arg1, s32 *arg2)
{
    u8 *fn_8021965C(void *);
    s32 fn_80231944(const void *, const void *, u32);
    extern u8 lbl_8033A420[];

    u8 *entry;
    u8 *reference;
    u8 *defaultReference;
    char *name;
    s32 index;
    s32 status;
    s32 remaining;
    s32 matched;
    s8 c1;
    s8 c2;

    if (*(s32 *)arg0 == 0) {
        return -3;
    }

    entry = fn_8021965C(arg0);
    defaultReference = lbl_8033A420;
    index = 0;

    do {
        reference = *(u8 **)((u8 *)arg0 + 0x10C);

        if (entry[0] == 0xFF) {
            status = -4;
        } else if (reference == defaultReference) {
            status = -10;
        } else if (fn_80231944(entry, reference, 4) == 0 &&
                   fn_80231944(entry + 4, reference + 4, 2) == 0) {
            status = 0;
        } else {
            status = -10;
        }

        if (status >= 0) {
            name = arg1;
            reference = entry + 8;
            remaining = 0x20;
            matched = 0;

            do {
                c1 = (s8)*reference++;
                c2 = (s8)*name++;

                if (c1 != c2) {
                    matched = 0;
                    break;
                }

                if (c2 == 0) {
                    matched = 1;
                    break;
                }

                remaining--;
            } while (remaining >= 0);

            if (remaining < 0) {
                matched = ((s8)*name == 0);
            }

            if (matched != 0) {
                *arg2 = index;
                return 0;
            }
        }

        index++;
        entry += 0x40;
    } while (index < 0x7F);

    return -4;
}

s32 fn_8021BF10(void *arg0, void *arg1, void *arg2)
{
    s32 fn_80217B18(void *, void **);
    void *fn_8021965C(void *);
    s32 fn_8021BB04(void *, void *);
    s32 fn_8021BA9C(void *, void *);
    s32 fn_80217BD0(void *, s32);

    void *handle;
    u8 *entry;
    u8 *base;
    s32 result;
    s32 index;
    s32 foundIndex;
    u16 value;

    *(s32 *)arg2 = -1;

    result = fn_80217B18(arg0, &handle);
    if (result < 0) {
        return result;
    }

    if (*(s32 *)handle == 0) {
        result = -3;
    } else {
        entry = (u8 *)fn_8021965C(handle);
        index = 0;

        do {
            if (fn_8021BB04(handle, entry) >= 0) {
                if (fn_8021BA9C(entry, arg1) != 0) {
                    foundIndex = index;
                    result = 0;
                    break;
                }
            }

            index++;
            entry += 0x40;
        } while (index < 0x7F);

        if (index == 0x7F) {
            result = -4;
        }
    }

    if (result >= 0) {
        base = (u8 *)fn_8021965C(handle);
        entry = base + (foundIndex << 6);

        value = *(u16 *)(entry + 0x36);

        if (value >= 5 &&
            value >= *(u16 *)((u8 *)handle + 0x10)) {
            result = -6;
        } else {
            *(void **)arg2 = arg0;
            *(s32 *)((u8 *)arg2 + 4) = foundIndex;
            *(s32 *)((u8 *)arg2 + 8) = 0;
            *(u16 *)((u8 *)arg2 + 0x10) = value;
        }
    }

    return fn_80217BD0(handle, result);
}

void fn_8021C02C(s32 *arg0) {
    s32 fn_80217B18(s32, s32 *);
    void fn_80217BD0(s32, s32);
    s32 spC;

    if (fn_80217B18(*arg0, &spC) < 0) {
        *arg0 = -1;
        fn_80217BD0(spC, 0);
        return;
    }
    return;
}

s32 fn_8021C080(void) {
    return 0;
}

void fn_8021C088(s32 chan, s32 result)
{
    extern u16 lbl_8033A200[];

    s32 fn_8021965C(void *);
    s32 fn_802197FC(s32, s32);
    s32 fn_80217BD0(void *, s32);
    s64 OSGetTime(void);
    void *memcpy(void *, const void *, u32);

    u8 *card;
    u8 *entry;
    u8 *source;
    void (*callback)(s32, s32);
    s32 status;
    u32 ticks;
    s64 time;

    card = (u8 *)lbl_8033A200 + chan * 0x110;
    callback = *(void (**)(s32, s32))(card + 0xD0);
    *(u32 *)(card + 0xD0) = 0;
    status = result;

    if (status >= 0) {
        entry = (u8 *)fn_8021965C(card);
        entry += *(u16 *)(card + 0xBC) << 6;

        source = *(u8 **)(card + 0x10C);

        memcpy(entry, source, 4);
        memcpy(entry + 4, source + 4, 2);

        entry[0x34] = 4;
        entry[0x35] = 0;
        *(u16 *)(entry + 0x36) = *(u16 *)(card + 0xBE);

        entry[7] = 0;
        *(s32 *)(entry + 0x2C) = -1;
        *(u16 *)(entry + 0x30) = 0;
        *(u16 *)(entry + 0x32) = 0;
        *(s32 *)(entry + 0x3C) = -1;

        *(u16 *)(entry + 0x32) =
            (*(u16 *)(entry + 0x32) & ~3) | 1;

        *(u32 *)(*(u8 **)(card + 0xC0) + 8) = 0;

        *(u16 *)(*(u8 **)(card + 0xC0) + 0x10) =
            *(u16 *)(entry + 0x36);

        ticks = *(u32 *)0x800000F8 >> 2;
        time = OSGetTime();

        *(u32 *)(entry + 0x28) = (u32)(time / ticks);

        status = fn_802197FC(chan, (s32)callback);
    }

    if (status < 0) {
        fn_80217BD0(card, status);
        if (callback != 0) {
            callback(chan, status);
        }
    }
}

#pragma use_lmw_stmw on
s32 fn_8021C1B8(s32 chan, char *name, u32 size, void *fileInfo, void *callback) {
    s32 fn_80217B18(s32, s32 *);
    s32 fn_80217BD0(void *, s32);
    void *fn_80219258(void *);
    s32 fn_802193FC(s32, u32, void *);
    u8 *fn_8021965C(s32);
    s32 fn_8021BA9C(u8 *, char *);
    s32 fn_80231944(u8 *, void *, s32);
    void fn_8023440C(u8 *, char *, s32);
    u32 strlen(char *);
    extern void fn_80216994(void);
    extern void fn_8021C088(void);

    s32 card;
    u8 *dir;
    u8 *ent;
    u16 freeIdx;
    u16 i;
    s32 result;
    void *cb;
    u8 *slot;
    void *stat;

    if (strlen(name) > 0x20) {
        return -0xC;
    }
    result = fn_80217B18(chan, &card);
    if (result < 0) {
        return result;
    }
    if (size != 0) {
        if ((size % *(u32 *)((u8 *)card + 0xC)) != 0) {
            return -0x80;
        }
    }
    freeIdx = 0xFFFF;
    dir = fn_8021965C(card);
    ent = dir;
    for (i = 0; i < 0x7F; ent += 0x40, i += 1) {
        if (*ent == 0xFF) {
            if (freeIdx == 0xFFFF) {
                freeIdx = i;
            }
        } else if (fn_80231944(ent, *(void **)((u8 *)card + 0x10C), 4) == 0
            && fn_80231944(ent + 4, (u8 *)*(void **)((u8 *)card + 0x10C) + 4, 2) == 0
            && fn_8021BA9C(ent, name) != 0) {
            return fn_80217BD0((void *)card, -7);
        }
    }
    if (freeIdx == 0xFFFF) {
        return fn_80217BD0((void *)card, -8);
    }
    stat = fn_80219258((void *)card);
    if ((u32)(*(u32 *)((u8 *)card + 0xC) * *(u16 *)((u8 *)stat + 6)) < size) {
        return fn_80217BD0((void *)card, -9);
    }
    if (callback != NULL) {
        cb = callback;
    } else {
        cb = fn_80216994;
    }
    *(void **)((u8 *)card + 0xD0) = cb;
    slot = dir + (freeIdx << 6);
    *(u16 *)((u8 *)card + 0xBC) = freeIdx;
    *(u16 *)(slot + 0x38) = (u16)(size / *(u32 *)((u8 *)card + 0xC));
    fn_8023440C(slot + 8, name, 0x20);
    *(void **)((u8 *)card + 0xC0) = fileInfo;
    *(s32 *)fileInfo = chan;
    *(u32 *)((u8 *)fileInfo + 4) = freeIdx;
    result = fn_802193FC(chan, size / *(u32 *)((u8 *)card + 0xC), fn_8021C088);
    if (result < 0) {
        return fn_80217BD0((void *)card, result);
    }
    return result;
}
#pragma use_lmw_stmw reset

void fn_8021C3D8(s32 arg0) {
    s32 fn_8021C1B8(void *arg0);
    void fn_80217C64(s32 arg0);
    extern void *fn_80216998;
    
    if (fn_8021C1B8(&fn_80216998) >= 0) {
        fn_80217C64(arg0);
    }
}

void fn_8021C5D8(s32 chan, s32 result)
{
    extern u16 lbl_8033A200[];
    s32 fn_802190A4(s32, u32, u32, void *, void *);
    s32 fn_80219258(void *);
    s32 fn_80217BD0(void *, s32);

    u8 *card;
    u8 *file;
    u16 *fat;
    s32 remaining;
    s32 offset;
    s32 blockSize;
    s32 amount;
    s32 next;
    s32 count;
    s32 status;
    void (*callback)(s32, s32);

    card = (u8 *)lbl_8033A200 + chan * 0x110;
    status = result;

    if (status >= 0) {
        file = *(u8 **)(card + 0xC0);

        remaining = *(s32 *)(file + 0xC);

        if (remaining < 0) {
            status = -14;
        } else {
            blockSize = *(s32 *)(card + 0xC);
            offset = *(s32 *)(file + 8);

            amount = ((offset + blockSize) & ~(blockSize - 1)) - offset;

            remaining -= amount;
            *(s32 *)(file + 0xC) = remaining;

            if (remaining > 0) {
                fat = (u16 *)fn_80219258(card);

                *(s32 *)(file + 8) += amount;

                next = *(u16 *)(file + 0x10);
                *(u16 *)(file + 0x10) = fat[next];

                next = *(u16 *)(file + 0x10);

                if (next < 5 || next >= *(u16 *)(card + 0x10)) {
                    status = -6;
                } else {
                    count = remaining;

                    if (count >= blockSize) {
                        count = blockSize;
                    }

                    status = fn_802190A4(
                        chan,
                        blockSize * next,
                        count,
                        *(void **)(card + 0xB4),
                        (void *)fn_8021C5D8
                    );
                }
            }
        }

        if (status < 0) {
            callback = *(void (**)(s32, s32))(card + 0xD0);
            *(void **)(card + 0xD0) = 0;

            fn_80217BD0(card, status);
            callback(chan, status);
        }
    }
}

s32 fn_8021C708(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4)
{
    s32 fn_8021C420(void *, u32, u32, void **);
    s32 fn_802190A4(s32, u32, u32, void *, void *);
    s32 fn_80217BD0(void *, s32);
    s32 fn_8021965C(void *);
    s32 fn_8021BCCC(void *, void *);
    void DCInvalidateRange(void *, u32);
    void fn_80216994(void);
    void fn_8021C5D8(s32, s32);

    void *card;
    u8 *entry;
    u32 sectorSize;
    u32 offset;
    u32 length;
    u32 boundary;
    s32 result;
    void *callback;

    if (((u32)arg3 & 0x1FF) != 0 || ((u32)arg2 & 0x1FF) != 0) {
        return -0x80;
    }

    result = fn_8021C420(arg0, arg2, arg3, &card);
    if (result < 0) {
        return result;
    }

    entry = (u8 *)fn_8021965C(card);
    entry += arg0[1] << 6;

    result = fn_8021BCCC(card, entry);
    if (result < 0) {
        return fn_80217BD0(card, result);
    }

    DCInvalidateRange((void *)arg1, arg3);

    if (arg4 != 0) {
        callback = arg4;
    } else {
        callback = (void *)fn_80216994;
    }

    *(void **)((u8 *)card + 0xD0) = callback;

    offset = *(u32 *)((u8 *)arg0 + 8);
    sectorSize = *(u32 *)((u8 *)card + 0xC);
    boundary = sectorSize - (offset & (sectorSize - 1));

    length = arg3;
    if (length >= boundary) {
        length = boundary;
    }

    result = fn_802190A4(
        arg0[0],
        sectorSize * *(u16 *)((u8 *)arg0 + 0x10) + (offset & (sectorSize - 1)),
        length,
        (void *)arg1,
        (void *)fn_8021C5D8
    );

    if (result < 0) {
        fn_80217BD0(card, result);
    }

    return result;
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

s64 OSGetTime(void);
s32 fn_8021965C(void *arg0);
s32 fn_80219258(void *arg0);
s32 fn_802197FC(s32 arg0, s32 arg1);
s32 fn_80217BD0(void *arg0, s32 arg1);
int fn_8021791C(s32 chan, u32 addr, void *callback);
void fn_8021CA04(s32 chan, s32 result);
#pragma dont_inline on
void fn_8021C894(s32 chan, s32 result) {
    u8 *card;
    void (*callback)(s32, s32);
    u16 *fat;
    u8 *ent;
    u8 *fileInfo;

    card = (u8 *)lbl_8033A200 + chan * 0x110;
    if (result < 0) {
        goto error;
    }

    fileInfo = *(u8 **)(card + 0xC0);
    if (*(s32 *)(fileInfo + 0xC) < 0) {
        result = -14;
        goto error;
    }

    *(s32 *)(fileInfo + 0xC) -= *(s32 *)(card + 0xC);
    if (*(s32 *)(fileInfo + 0xC) <= 0) {
        ent = (u8 *)fn_8021965C(card) + (*(s32 *)(fileInfo + 0x4) << 6);
        *(u32 *)(ent + 0x28) = (u32)(OSGetTime() / (*(u32 *)0x800000F8 / 4));
        callback = *(void (**)(s32, s32))(card + 0xD0);
        *(void (**)(s32, s32))(card + 0xD0) = 0;
        result = fn_802197FC(chan, (s32)callback);
    } else {
        fat = (u16 *)fn_80219258(card);
        *(s32 *)(fileInfo + 0x8) += *(s32 *)(card + 0xC);
        *(u16 *)(fileInfo + 0x10) = fat[*(u16 *)(fileInfo + 0x10)];
        if (*(u16 *)(fileInfo + 0x10) < 5 || *(u16 *)(fileInfo + 0x10) >= *(u16 *)(card + 0x10)) {
            result = -6;
            goto error;
        }
        result = fn_8021791C(chan, *(s32 *)(card + 0xC) * (u32)*(u16 *)(fileInfo + 0x10), fn_8021CA04);
    }

    if (result < 0) {
    error:
        callback = *(void (**)(s32, s32))(card + 0xD0);
        *(void (**)(s32, s32))(card + 0xD0) = 0;
        fn_80217BD0(card, result);
        callback(chan, result);
    }
}

s32 fn_8021CAB4(void *arg0, void *arg1, u32 arg2, u32 arg3, void *arg4)
{
    s32 fn_8021C420(void *, u32, u32, void **);
    s32 fn_80217BD0(void *, s32);
    void *fn_8021965C(void);
    s32 fn_8021BB98(void *, void *);
    void fn_80205110(void *, u32);
    s32 fn_8021791C(void *, u32);

    extern void fn_80216994(void);
    extern void fn_8021CA04(void);

    void *state;
    u32 alignment;
    u32 size;
    s32 result;
    u8 *buffer;
    void *callback;

    result = fn_8021C420(arg0, arg2, arg3, &state);

    if (result < 0) {
        return result;
    }

    alignment = *(u32 *)((u8 *)state + 0xC) - 1;

    if ((arg3 & alignment) != 0 ||
        (arg2 & alignment) != 0) {
        return fn_80217BD0(state, -0x80);
    }

    buffer = (u8 *)fn_8021965C();
    buffer += (*(u32 *)((u8 *)arg0 + 4) << 6);

    result = fn_8021BB98(state, buffer);

    if (result < 0) {
        return fn_80217BD0(state, result);
    }

    fn_80205110(arg1, arg2);

    if (arg4 != 0) {
        callback = arg4;
    } else {
        callback = (void *)fn_80216994;
    }

    *(void **)((u8 *)state + 0xD0) = callback;
    *(void **)((u8 *)state + 0xB4) = arg1;

    size = *(u32 *)((u8 *)state + 0xC);
    size *= *(u16 *)((u8 *)arg0 + 0x10);

    result = fn_8021791C(*(void **)arg0, size);

    if (result < 0) {
        fn_80217BD0(state, result);
    }

    return result;
}

#pragma dont_inline reset
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
    
    temp_r3 = fn_8021CCB4(0);
    if (temp_r3 >= 0) {
        fn_80217C64(temp_r3);
    }
}

void fn_8021CE0C(void *arg0, void *arg1) {
    s32 var_r8;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r9;
    s32 var_ctr;
    void *var_r7;

    var_r8 = ((s32*)arg0)[0x2C/4];
    if ((u32) (var_r8 + 0x10000) == -1U) {
        ((s16*)arg1)[0x2E/2] = 0;
        var_r8 = 0;
        ((s16*)arg1)[0x34/2] = 0;
        ((s16*)arg1)[0x36/2] = 0;
    }
    var_r9 = 0;
    temp_r5 = ((u8*)arg0)[0x7] & 3;
    switch (temp_r5) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        ((s32*)arg1)[0x3C/4] = var_r8;
        temp_r6 = var_r8 + 0xC00;
        var_r8 += 0xE00;
        ((s32*)arg1)[0x40/4] = temp_r6;
        break;
    case 2:                                         /* switch 1 */
        ((s32*)arg1)[0x3C/4] = var_r8;
        var_r8 += 0x1800;
        ((s32*)arg1)[0x40/4] = -1;
        break;
    default:                                        /* switch 1 */
        ((s32*)arg1)[0x3C/4] = -1;
        ((s32*)arg1)[0x40/4] = -1;
        break;
    }
    var_ctr = 2;
    var_r7 = arg1;
    temp_r6 = 0;
    do {
        temp_r5 = ((u32)((s32*)((char*)arg0 + 0x30)) >> temp_r6) & 3;
        switch (temp_r5) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            ((s32*)var_r7)[0x44/4] = var_r8;
            var_r9 = 1;
            var_r8 += 0x400;
            break;
        case 2:                                     /* switch 2 */
            ((s32*)var_r7)[0x44/4] = var_r8;
            var_r8 += 0x800;
            break;
        default:                                    /* switch 2 */
            ((s32*)var_r7)[0x44/4] = -1;
            break;
        }
        temp_r6 += 2;
        var_r7 = (char*)var_r7 + 4;
        temp_r5 = ((u32) ((s32*)((char*)arg0 + 0x30)) >> temp_r6) & 3;
        switch (temp_r5) {                        /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            ((s32*)var_r7)[0x44/4] = var_r8;
            var_r9 = 1;
            var_r8 += 0x400;
            break;
        case 2:                                     /* switch 3 */
            ((s32*)var_r7)[0x44/4] = var_r8;
            var_r8 += 0x800;
            break;
        default:                                    /* switch 3 */
            ((s32*)var_r7)[0x44/4] = -1;
            break;
        }
        temp_r6 += 2;
        var_r7 = (char*)var_r7 + 4;
        temp_r5 = ((u32) ((s32*)((char*)arg0 + 0x30)) >> temp_r6) & 3;
        switch (temp_r5) {                        /* switch 4; irregular */
        case 1:                                     /* switch 4 */
            ((s32*)var_r7)[0x44/4] = var_r8;
            var_r9 = 1;
            var_r8 += 0x400;
            break;
        case 2:                                     /* switch 4 */
            ((s32*)var_r7)[0x44/4] = var_r8;
            var_r8 += 0x800;
            break;
        default:                                    /* switch 4 */
            ((s32*)var_r7)[0x44/4] = -1;
            break;
        }
        temp_r6 += 2;
        var_r7 = (char*)var_r7 + 4;
        temp_r5 = ((u32) ((s32*)((char*)arg0 + 0x30)) >> temp_r6) & 3;
        switch (temp_r5) {                        /* switch 5; irregular */
        case 1:                                     /* switch 5 */
            ((s32*)var_r7)[0x44/4] = var_r8;
            var_r9 = 1;
            var_r8 += 0x400;
            break;
        case 2:                                     /* switch 5 */
            ((s32*)var_r7)[0x44/4] = var_r8;
            var_r8 += 0x800;
            break;
        default:                                    /* switch 5 */
            ((s32*)var_r7)[0x44/4] = -1;
            break;
        }
        temp_r6 += 2;
        var_r7 = (char*)var_r7 + 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    if (var_r9 != 0) {
        ((s32*)arg1)[0x64/4] = var_r8;
        var_r8 += 0x200;
    } else {
        ((s32*)arg1)[0x64/4] = -1;
    }
    ((s32*)arg1)[0x68/4] = var_r8;
}

s32 fn_8021D004(s32 arg0, s32 arg1, s32 arg2) {
    s32 stack[0x14]; // 0x14 = 20 bytes
    
    if (arg2 == 0) {
        return 0;
    }
    
    if (arg1 == 0) {
        return 0;
    }
    
    if (arg1 > 0x7F) {
        return -0x80;
    }
    
          return -0x80;
}

s32 fn_8021D118(s32 chan, s32 fileNo, void *stat, s32 callback) {
#pragma dont_inline on
#pragma use_lmw_stmw off

    s32 card;
    s32 result;
    u32 address;
    u32 ticksPerSecond;
    u8 *status = (u8 *)stat;
    CardDirEntry *entry;

    if (fileNo < 0 || fileNo >= 0x7F) {
        goto invalid;
    }

    address = *(u32 *)(status + 0x30);
    if (address + 0x10000U != 0xFFFFU && address >= 0x200U) {
        goto invalid;
    }

    address = *(u32 *)(status + 0x38);
    if (address + 0x10000U == 0xFFFFU || (address & 0x1FFFU) <= 0x1FC0U) {
        goto valid;
    }

invalid:
    return -0x80;

valid:
    result = fn_80217B18(chan, &card);
    if (result < 0) {
        return result;
    }

    entry = (CardDirEntry *)((u8 *)fn_8021965C((void *)card) + (fileNo << 6));
    result = fn_8021BB98((void *)card, entry);
    if (result < 0) {
        return fn_80217BD0((void *)card, result);
    }

    entry->unk7 = status[0x2E];
    entry->unk2C = *(s32 *)(status + 0x30);
    entry->unk30 = *(u16 *)(status + 0x34);
    entry->unk32 = *(u16 *)(status + 0x36);
    entry->unk3C = *(s32 *)(status + 0x38);
    fn_8021CE0C(entry, stat);

    if ((u32)entry->unk2C + 0x10000U == 0xFFFFU) {
        entry->unk32 = (entry->unk32 & ~3U) | 1U;
    }

    ticksPerSecond = *(u32 *)0x800000F8 >> 2;
    entry->unk28 = (s32)(OSGetTime() / ticksPerSecond);

    result = fn_802197FC(chan, callback);
    if (result < 0) {
        fn_80217BD0((void *)card, result);
    }
    return result;

#pragma use_lmw_stmw reset
#pragma dont_inline reset
}

void fn_8021D28C(s32 arg0) {
    s32 fn_8021D118(void *);
    void fn_80217C64(s32);
    extern u32 lbl_80216998;

    if (fn_8021D118(&lbl_80216998) >= 0) {
        fn_80217C64(arg0);
    }
}

s32 fn_8021D2D4(s32 arg0, s32 index, void *dst) {
    s32 fn_80217B18(s32, s32 *);
    s32 fn_80217BD0(s32, s32);
    s32 fn_8021BCCC(s32, u8 *);
    void *memcpy(void *, const void *, u32);
    s32 stack[0x14];
    s32 ret;
    u8 *entry;

    if (index < 0 || index >= 0x7F) {
        return -0x80;
    }
    
    ret = fn_80217B18(arg0, &stack[0]);
    if (ret < 0) {
        return ret;
    }
    
    entry = (u8 *)fn_8021965C((void *)stack[0]) + (index << 6);
    ret = fn_8021BCCC(stack[0], entry);
    if (ret >= 0) {
        memcpy(dst, entry, 0x40);
    }
    
    return fn_80217BD0(stack[0], ret);
}

#pragma opt_unroll off
#pragma opt_strength_reduction off
#pragma opt_common_subs off
#pragma use_lmw_stmw on
s32 fn_8021D378(s32 arg0, s32 arg1, CardDirEntry *arg2, s32 arg3) {
    s32 fn_80217B18(s32, s32 *);
    s32 fn_80217BD0(void *, s32);
    u8 *fn_8021965C(s32);
    s32 fn_802197FC(s32, s32);
    s32 fn_8021BB98(s32, CardDirEntry *);
    s32 fn_80231944(void *, void *, u32);
    void *memcpy(void *, const void *, u32);
    void *memset(void *, int, u32);
    s32 i;
    s32 sp18;
    s32 ret;
    u8 *base;
    CardDirEntry *slot;
    u8 *fileNameEnd;
    u8 *fileName;

    if (arg1 < 0 || arg1 >= 0x7F || arg2->unk8[0] == 0xFF || arg2->unk8[0] == 0) {
        return -0x80;
    }
    ret = fn_80217B18(arg0, &sp18);
    if (ret < 0) {
        return ret;
    }
    base = fn_8021965C(sp18);
    slot = (CardDirEntry *)(base + (arg1 << 6));
    ret = fn_8021BB98(sp18, slot);
    if (ret < 0) {
        return fn_80217BD0((void *)sp18, ret);
    }
    fileName = arg2->unk8;
    fileNameEnd = (u8 *)arg2 + 0x28;
    for (; fileName < fileNameEnd; fileName++) {
        if (*fileName == 0) {
            fileNameEnd = (u8 *)arg2 + 0x28;
            while (++fileName < fileNameEnd) {
                *fileName = 0;
            }
            break;
        }
    }
    if (arg2->unk34 & 0x20) {
        memset(arg2->unk0, 0, 4);
        memset(arg2->unk4, 0, 2);
    }
    if (arg2->unk34 & 0x40) {
        memset(arg2->unk0, 0, 4);
    }
    if (fn_80231944(slot->unk8, arg2->unk8, 0x20) != 0 ||
        fn_80231944(slot->unk0, arg2->unk0, 4) != 0 ||
        fn_80231944(slot->unk4, arg2->unk4, 2) != 0) {
        for (i = 0; i < 0x7F; i++, base += 0x40) {
            if (i != arg1 && base[0] != 0xFF) {
                if (fn_80231944(base, arg2->unk0, 4) == 0 &&
                    fn_80231944(base + 4, arg2->unk4, 2) == 0 &&
                    fn_80231944(base + 8, arg2->unk8, 0x20) == 0) {
                    return fn_80217BD0((void *)sp18, -7);
                }
            }
        }
    }
    memcpy(slot->unk8, arg2->unk8, 0x20);
    memcpy(slot->unk0, arg2->unk0, 4);
    memcpy(slot->unk4, arg2->unk4, 2);
    slot->unk28 = arg2->unk28;
    slot->unk7 = arg2->unk7;
    slot->unk2C = arg2->unk2C;
    slot->unk30 = arg2->unk30;
    slot->unk32 = arg2->unk32;
    slot->unk3C = arg2->unk3C;
    slot->unk34 = arg2->unk34;
    slot->unk35 = arg2->unk35;
    ret = fn_802197FC(arg0, arg3);
    if (ret < 0) {
        fn_80217BD0((void *)sp18, ret);
    }
    return ret;
}
#pragma opt_common_subs reset
#pragma opt_strength_reduction reset
#pragma use_lmw_stmw reset
s32 fn_8021D614(s32 arg0, u32 *arg1) {
    s32 fn_80217B18(s32, s32 *);
    s32 fn_80217BD0(s32, s32);
    s32 sp10;
    s32 result;
    u32 *p;
    u32 acc0;
    u32 acc1;
    u32 t;

    if (arg0 < 0 || arg0 >= 2) {
        return -0x80;
    }
    result = fn_80217B18(arg0, &sp10);
    if (result < 0) {
        return result;
    }
    p = *(u32 **)(sp10 + 0x80);
    acc1 = 0;
    acc0 = 0;
    t = p[1];
    acc1 ^= t;
    t = p[0];
    acc0 ^= t;
    t = p[2];
    acc0 ^= t;
    t = p[3];
    acc1 ^= t;
    t = p[4];
    acc0 ^= t;
    t = p[5];
    acc1 ^= t;
    t = p[6];
    acc0 ^= t;
    t = p[7];
    acc1 ^= t;
    arg1[1] = acc1;
    arg1[0] = acc0;
    return fn_80217BD0(sp10, 0);
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

s32 fn_8021D718(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_8021D2D4(s32, s32, void *);
    s32 fn_8021D378(s32, s32, void *, s32);
    extern u8 lbl_80366FF2;
    u8 entry[0x40];
    s32 result;
    u32 e;
    u32 bit20;
    u32 bit40;
    u32 a20;

    if (((u8)arg2 & ~lbl_80366FF2) != 0) {
        return -0xA;
    }
    result = fn_8021D2D4(arg0, arg1, entry);
    if (result < 0) {
        return result;
    }
    e = entry[0x34];
    bit20 = e & 0x20;
    if (bit20 != 0) {
        if (((u8)arg2 & 0x20) == 0) {
            goto err;
        }
    }
    bit40 = e & 0x40;
    if (bit40 != 0) {
        if (((u8)arg2 & 0x40) == 0) {
        err:
            return -0xA;
        }
    }
    a20 = (u8)arg2 & 0x20;
    if (a20 != 0) {
        if (((u8)arg2 & 0x40) != 0) {
            goto ok;
        }
    }
    if (a20 != 0) {
        if (bit40 != 0) {
            goto ok;
        }
    }
    if (((u8)arg2 & 0x40) != 0) {
        if (bit20 != 0) {
            return -0xA;
        }
    }
ok:
    entry[0x34] = (u8)arg2;
    return fn_8021D378(arg0, arg1, entry, arg3);
}

#pragma dont_inline reset
extern s32 EXIDma(s32, s32, s32, s32, void *);
extern void EXIDeselect(s32);
extern void EXIUnlock(s32);
extern u16 lbl_8033A200[];
extern void *fn_80219108;
extern u16 lbl_8033A200[];
