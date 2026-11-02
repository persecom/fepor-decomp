/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"

s32 fn_8007C65C(void) {
    extern void *lbl_80367488;
    void *temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367488, void **, 0x54);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x36) = 7;
    }
    return 0;
}

void fn_8007CCE8(void) {
    M2C_UNK fn_80087F50();
    fn_80087F50();
}

void fn_8007CF98(void) {
    M2C_UNK fn_8007F844();
    fn_8007F844();
}

void fn_8007CFB8(void) {
    M2C_UNK fn_80082298();
    fn_80082298();
}

void fn_8007CFD8(s32 *arg0) {
    M2C_UNK fn_8008563C(s32 *);
    s32 sp8;

    sp8 = *arg0;
    fn_8008563C(&sp8);
}

void fn_8007D004(void) {
    M2C_UNK fn_80086020();
    fn_80086020();
}

void fn_8007D024(void) {
    M2C_UNK fn_80086C14();
    fn_80086C14();
}

void fn_8007D044(void) {
    M2C_UNK fn_800875B4();
    fn_800875B4();
}

void fn_8007D7E8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

void fn_8007D924(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x20) == 1) {
        M2C_FIELD(temp_r4, u8 *, 9) = (u8) (M2C_FIELD(temp_r4, u8 *, 9) + 1);
        if ((s8) M2C_FIELD(temp_r4, u8 *, 9) > 2) {
            M2C_FIELD(temp_r4, u8 *, 9) = 0U;
        }
    } else {
        M2C_FIELD(temp_r4, u8 *, 9) = (u8) (M2C_FIELD(temp_r4, u8 *, 9) - 1);
        if ((s8) M2C_FIELD(temp_r4, u8 *, 9) < 0) {
            M2C_FIELD(temp_r4, u8 *, 9) = 2U;
        }
    }
    M2C_FIELD(temp_r4, s16 *, 6) = 7;
}

void fn_8007DAB4(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

void fn_8007F7F8(s32 arg0) {
    M2C_UNK fn_8007DFE0(s32);
    M2C_UNK fn_8007E2C4(s32);
    M2C_UNK fn_8007E764(s32);
    M2C_UNK fn_8007EAD8(s32);
    M2C_UNK fn_8007F410();
    fn_8007F410();
    fn_8007EAD8(arg0);
    fn_8007E764(arg0);
    fn_8007E2C4(arg0);
    fn_8007DFE0(arg0);
}

void fn_80081CB0(s32 arg0) {
    M2C_UNK fn_8007FF58(s32);
    M2C_UNK fn_80080698(s32);
    M2C_UNK fn_800810BC(s32);
    M2C_UNK fn_80081830();
    fn_80081830();
    fn_800810BC(arg0);
    fn_80080698(arg0);
    fn_8007FF58(arg0);
}

void fn_80083DC0(void *arg0) {
    M2C_UNK fn_800832C0(s32, f32, f32);
    fn_800832C0(M2C_FIELD(arg0, s32 *, 0x58), (f32) (s32) M2C_FIELD(arg0, f32 *, 0x14), (f32) (s32) M2C_FIELD(arg0, f32 *, 0x18));
}

void fn_80083E34(s32 arg0) {
    M2C_UNK fn_80081CF4(s32);
    M2C_UNK fn_80083278(s32);
    M2C_UNK fn_80083DC0();
    fn_80083DC0();
    fn_80083278(arg0);
    fn_80081CF4(arg0);
}

void fn_800852BC(s32 arg0) {
    M2C_UNK fn_80069F04(s32);
    M2C_UNK fn_80223E5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802246B8(M2C_UNK);
    fn_802246B8(0);
    fn_80223E5C(6, 0x80, 1, 0, 0);
    fn_80069F04(arg0);
    fn_802246B8(1);
    fn_80223E5C(7, 0, 1, 7, 0);
}

void fn_80089424(s32 arg0) {
    M2C_UNK fn_8000A3F8(s32);
    s32 fn_8000A418();
    if (fn_8000A418() != 0) {
        fn_8000A3F8(arg0);
    }
}

void fn_80089554(void) {
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    extern f32 lbl_80369690;
    extern f32 lbl_803696B0;
    extern f32 lbl_803696B4;
    extern f32 lbl_803696B8;
    fn_8000A258();
    fn_80009D74(lbl_80369690, lbl_80369690, lbl_80369690, lbl_803696B0);
    fn_8000A174(0, 0x800);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369690, lbl_80369690, lbl_803696B4, lbl_803696B8);
    fn_80007884();
}

u16 fn_80089634(void) {
    extern void *lbl_803674E4;
    return M2C_FIELD(lbl_803674E4, u16 *, 0x32);
}

void fn_800898E4(void *arg0) {
    M2C_UNK fn_802209FC();
    M2C_UNK fn_8022124C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802212FC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80221BA8(s32, M2C_UNK);
    M2C_UNK fn_80222EB4();
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x54);
    fn_8022124C(0, 0, 0x260, 0x1C0);
    fn_802212FC(0x260, 0x1C0, 4, 0);
    fn_80221BA8(M2C_FIELD(temp_r31, s32 *, 0x48), 0);
    fn_802209FC();
    fn_80222EB4();
}

void fn_80089970(void) {
    extern void *lbl_803674EC;
    M2C_FIELD(lbl_803674EC, s16 *, 0x32) = 0;
}

s32 fn_80089ED8(void) {
    extern void *lbl_803674E8;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(lbl_803674E8, u16 *, 0x32);
    if ((temp_r0 == 1) || (temp_r0 == 2)) {
        return 1;
    }
    return 0;
}

u16 fn_8008A56C(void) {
    extern void *lbl_803674E0;
    return M2C_FIELD(lbl_803674E0, u16 *, 0x32);
}

void fn_8008CD34(void) {
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
}

void fn_8008CD64(f32 farg0) {
    M2C_UNK fn_80009C0C(f32);
    fn_8000A258();
    fn_80009C0C(farg0);
    fn_8000A248();
}

void fn_8008D834(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3A) = 0x10;
    M2C_FIELD(arg0, s8 *, 0x3B) = 0;
    M2C_FIELD(arg0, s8 *, 0x3C) = -1;
}

void fn_8008D850(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3A) = 0;
    M2C_FIELD(arg0, s8 *, 0x3B) = 0x10;
    M2C_FIELD(arg0, s8 *, 0x3C) = 1;
}

void fn_8008DA60(void) {
    M2C_UNK fn_8008DA80();
    fn_8008DA80();
}

void fn_8008F49C(void) {
    M2C_UNK fn_8008F4BC();
    fn_8008F4BC();
}

void fn_8008FE24(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_80092414(s32 arg0) {
    M2C_UNK fn_8001CBA0(s32);
    fn_8001CBA0(arg0 + 0x20C);
}

s32 fn_80094A08(s32 arg0) {
    u8 fn_8001D684();
    M2C_UNK fn_80037BD0();
    M2C_UNK fn_800947E0(s32);
    fn_80037BD0();
    if (fn_8001D684() != 0) {
        fn_800947E0(arg0);
        return 1;
    }
    return 0;
}

s32 fn_80095614(s32 arg0) {
    u32 *fn_80037BBC(s32, s32);
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if ((u32) *fn_80037BBC(arg0, var_r31) == 0U) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return -1;
    }
    goto loop_1;
}

s32 fn_800958C4(s32 arg0) {
    s32 fn_80095FF8(M2C_UNK);
    if (arg0 & 0x80) {
        return fn_80095FF8(0x80);
    }
    if (arg0 & 0x20) {
        return fn_80095FF8(0x20);
    }
    if (arg0 & 8) {
        return fn_80095FF8(8);
    }
    if (arg0 & 0x10) {
        return fn_80095FF8(0x10);
    }
    return 0;
}

s32 fn_80098094(void) {
    extern s32 lbl_80367500;
    return lbl_80367500;
}

s32 fn_80098110(void) {
    extern void **lbl_80367504;
    void *temp_r3;

    if ((void **) lbl_80367504 == NULL) {
        return 0;
    }
    temp_r3 = *lbl_80367504;
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x280);
    }
    return 0;
}

s32 fn_80098140(void) {
    extern void **lbl_80367500;
    void *temp_r3;

    if ((void **) lbl_80367500 == NULL) {
        return 0;
    }
    temp_r3 = *lbl_80367500;
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x280);
    }
    return 0;
}

s32 fn_80098170(void **arg0) {
    s32 fn_800A8A88(s32);
    void *temp_r3;
    void *var_r0;
    void *var_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, void **, 0x280);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r3 != NULL) {
            var_r3 = M2C_FIELD(temp_r3, void **, 0x280);
        } else {
            var_r3 = NULL;
        }
        return fn_800A8A88(M2C_FIELD(var_r3, s32 *, 0x188));
    }
    return 0;
}

u8 fn_800981D0(void **arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *var_r0;
    void *var_r3;

    temp_r3_2 = *arg0;
    if (temp_r3_2 != NULL) {
        var_r0 = M2C_FIELD(temp_r3_2, void **, 0x280);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r3_2 != NULL) {
            var_r3 = M2C_FIELD(temp_r3_2, void **, 0x280);
        } else {
            var_r3 = NULL;
        }
        return M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8);
    }
    temp_r3 = M2C_FIELD(temp_r3_2, void **, 0x190);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u8 *, 8);
}

void fn_80098B74(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
}

void fn_80098B80(void *arg0) {
    M2C_UNK fn_80095678();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_80095678();
    }
}

void fn_80098BAC(void *arg0) {
    M2C_UNK fn_800956A0();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_800956A0();
    }
}

void fn_80098BD8(void *arg0) {
    M2C_UNK fn_801B61CC();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_801B61CC();
    }
}

void fn_80098D04(s32 arg0) {
    M2C_UNK fn_8018CAD8(M2C_UNK, M2C_UNK, s32);
    fn_8018CAD8(0x64, 0x1E, arg0);
}

void fn_80099ED0(void *arg0) {
    M2C_UNK fn_80096418(s16);
    fn_80096418(M2C_FIELD(arg0, s16 *, 0x46));
}

void fn_80099EF4(void *arg0) {
    M2C_UNK fn_8017E35C();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_8017E35C();
    }
}

void fn_8009EA14(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EA90(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EB7C(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EC38(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009F000(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 0);
}

void fn_8009F054(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_800A5C88();
    M2C_UNK fn_800A5CBC();
    extern void *lbl_80367240;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3) & 0x1000) {
        fn_800A5CBC();
        fn_8000C188(arg0);
        return;
    }
    if (fn_800A5C88() == 0) {
        fn_8000C188(arg0);
    }
}

