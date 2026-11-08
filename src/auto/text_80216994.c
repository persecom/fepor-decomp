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

void fn_80216994(void) {

}

void fn_80217488(void) {
    lbl_803682F0 = 0;
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

s32 fn_8021965C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84);
}

void fn_8021A7D4(s32 arg1) {
    void *fn_8021A244(void *, s32);
    char sp10[0x10];

    fn_8021A244(sp10, arg1);
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
#pragma dont_inline reset
extern s32 EXIDma(s32, s32, s32, s32, void *);
extern void EXIDeselect(s32);
extern void EXIUnlock(s32);
extern u16 lbl_8033A200[];
extern void *fn_80219108;
extern u16 lbl_8033A200[];
