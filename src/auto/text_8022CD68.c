/* Functions from 0x8022CD68 to 0x80267A7C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_803689A8;

s32 fn_80230BBC(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 >> 0x1F;
    return (temp_r4 ^ arg0) - temp_r4;
}

s32 fn_80230BCC(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 >> 0x1F;
    return (temp_r4 ^ arg0) - temp_r4;
}

void __prep_buffer(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - (M2C_FIELD(arg0, s32 *, 0x18) & M2C_FIELD(arg0, s32 *, 0x2C)));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
}

void __end_critical_region(void) {

}

void __begin_critical_region(void) {

}

void __kill_critical_regions(void) {

}

s32 fn_80235A7C(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 fn_80203AAC();
    M2C_UNK fn_8022B530(s32, s32, s32 *, s32);
    s32 fn_8023A964(M2C_UNK);
    s32 fn_8023A9D4(s32, s32);
    extern s32 lbl_803687F8;
    s32 var_r3;

    if (!(fn_80203AAC() & 0x20000000)) {
        var_r3 = 0;
        if ((s32) lbl_803687F8 == 0) {
            var_r3 = fn_8023A964(0xE100);
            if (var_r3 == 0) {
                lbl_803687F8 = 1;
            }
        }
        if (var_r3 != 0) {
            return 1;
        }
        if (fn_8023A9D4(arg1, *arg2) != 0) {
            *arg2 = 0;
            return 1;
        }
        goto block_8;
    }
block_8:
    fn_8022B530(arg0, arg1, arg2, arg3);
    return 0;
}

void fn_80238788(void) {
    M2C_UNK fn_80235B4C();
    fn_80235B4C();
}

void fn_802387A8(void) {
    M2C_UNK fn_80235D88();
    fn_80235D88();
}

void fn_802387C8(void) {
    M2C_UNK fn_802360C4();
    fn_802360C4();
}

f32 fn_80238A0C(void) {
    f64 fn_80238710();
    return (f32) fn_80238710();
}

f32 fn_80238A30(void) {
    f64 fn_80238638();
    return (f32) fn_80238638();
}

f32 fn_80238A54(void) {
    f64 fn_802380D0();
    return (f32) fn_802380D0();
}

f32 fn_80238A78(void) {
    f64 fn_80238788();
    return (f32) fn_80238788();
}

void fn_80238A9C(void) {
    M2C_UNK fn_802387E8();
    fn_802387E8();
}

void fn_80238ABC(void) {
    M2C_UNK fn_8023108C();
    fn_8023108C();
}

s32 Hu_IsStub(void) {
    return 0;
}

void fn_8023C53C(void) {

}

void fn_8023C540(void) {

}

s32 fn_8023C544(void) {
    return 0;
}

s32 fn_8023C54C(void) {
    return 0;
}

s32 fn_8023C554(void) {
    return 0;
}

void fn_8023C55C(void) {

}

void fn_8023C560(void) {

}

s32 AMC_IsStub(void) {
    return 1;
}

void fn_80243F14(void *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s8 *, 8) = (s8) (((u8) *M2C_FIELD(arg0, u8 **, 0) >> 4U) & 7);
    M2C_FIELD(arg0, s8 *, 9) = (s8) (*M2C_FIELD(arg0, u8 **, 0) & 0xF);
    M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
}

s32 fn_8024A430(u16 arg0) {
    void *fn_802509D8();
    s32 fn_80256738(u8, u8, s32, M2C_UNK, s32 *);
    s32 sp8;
    s32 temp_r31;
    void *temp_r3;

    temp_r3 = fn_802509D8();
    if (temp_r3 == NULL) {
        return 0;
    }
    temp_r31 = arg0 | 0x80000000;
    if (fn_80256738(M2C_FIELD(temp_r3, u8 *, 5), M2C_FIELD(temp_r3, u8 *, 4), temp_r31, 1, &sp8) != 0) {
        return temp_r31 == sp8;
    }
    return 0;
}

extern s32 lbl_803689A8;
s32 fn_8024A4AC(s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 var_r28;
    u8 var_r3;
    char *temp_r7;
    
    var_r28 = 0;
    var_r3 = fn_80255FB0();
loop_7:
    if ((u32) (var_r3 + 0x10000) == -1U) {
        return var_r28;
    }
    temp_r29 = var_r3 * 0x458;
    temp_r7 = (char*) lbl_803689A8 + temp_r29;
    if (var_r3 == *(s32*)(temp_r7 + 0xF4)) {
        s32 temp_r0 = *(s32*)(temp_r7 + 0x114);
        s32 temp_r1 = *(s32*)(temp_r7 + 0x118);
        if ((temp_r1 & 2) != 0 || (temp_r0 & 0) != 0) {
            fn_8025F534(arg1, *(u8*)(temp_r7 + 0x217), arg2);
        } else {
            fn_8025F534(arg1, *(u8*)(temp_r7 + 0x122), arg2);
        }
        var_r28 = 1;
        var_r3 = *(u8*)((char*)lbl_803689A8 + (temp_r29 + 0xEC));
        goto loop_7;
    }
    return var_r28;
}

void fn_8024A674(s32 arg0, s32 arg1) {
    M2C_UNK fn_80260060(M2C_UNK, s32, s32);
    fn_80260060(7, arg0, arg1);
    fn_80260060(0xA, arg0, arg1);
    fn_80260060(0x5B, arg0, arg1);
    fn_80260060(0x80, arg0, arg1);
    fn_80260060(0x84, arg0, arg1);
}

u32 fn_8024B370(void) {
    s32 fn_80243F50();
    s32 temp_r3;

    temp_r3 = fn_80243F50();
    return (u32) ((-1 - temp_r3) | (temp_r3 + 1)) >> 0x1FU;
}

void fn_8024B3A0(s32 arg0) {
    M2C_UNK fn_80244D64(s32);
    M2C_UNK fn_802636F4();
    M2C_UNK fn_8026372C();
    fn_8026372C();
    fn_80244D64(arg0);
    fn_802636F4();
}

void fn_8024B3D8(s32 arg0, s32 arg1) {
    M2C_UNK fn_802450A4(s32, s32);
    fn_8026372C();
    fn_802450A4(arg0, arg1);
    fn_802636F4();
}

void fn_8024B420(s32 arg0) {
    M2C_UNK fn_80245188(s32);
    fn_8026372C();
    fn_80245188(arg0);
    fn_802636F4();
}

void fn_8024B458(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80245290(s32, s32, s32);
    fn_8026372C();
    fn_80245290(arg0, arg1, arg2);
    fn_802636F4();
}

void fn_8024B4B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_8026372C();
    fn_8024534C(arg0, arg1, arg2, arg3);
    fn_802636F4();
}

s32 fn_8024B654(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_8024A4AC(s32, s32, s32);
    s32 temp_r31;

    fn_8026372C();
    temp_r31 = fn_8024A4AC(arg0, arg1, arg2);
    fn_802636F4();
    return temp_r31;
}

s32 fn_8024B6B4(s32 arg0, s32 arg1, s32 arg2) {
    s32 fn_8024A590(s32, s32, s32);
    s32 temp_r31;

    fn_8026372C();
    temp_r31 = fn_8024A590(arg0, arg1, arg2);
    fn_802636F4();
    return temp_r31;
}

s32 fn_8024B714(s32 arg0) {
    s32 fn_8024A6F8(s32);
    s32 temp_r31;

    fn_8026372C();
    temp_r31 = fn_8024A6F8(arg0);
    fn_802636F4();
    return temp_r31;
}

void fn_8024B8EC(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8024A780(s32, s32, s32, M2C_UNK, M2C_UNK);
    fn_8026372C();
    fn_8024A780(arg0, arg1, arg2, 0, -1);
    fn_802636F4();
}

void fn_8024C5C8(void) {

}

void fn_8024C7C4(s8 *arg0, s8 *arg1) {
    extern s32 lbl_803689A4;
    if (lbl_803689A4 & 1) {
        *arg0 = 0x40;
        *arg1 = 0;
        return;
    }
    if (!(lbl_803689A4 & 2)) {
        *arg1 = 0;
    }
}

void fn_8024C7F8(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0x59) = arg1;
    M2C_FIELD(arg0, s8 *, 0x5C) = arg2;
    M2C_FIELD(arg0, s8 *, 0x5D) = arg3;
}

s32 fn_80250698(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_80250734(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

s32 fn_80250874(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

void fn_80250884(void) {
    extern u32 lbl_803689E4;
    s32 temp_r31;

    temp_r31 = lbl_803689E4;
    if (temp_r31 != 0) {
        fn_80183BE4(temp_r31, 0x1D);
    }
}

s32 fn_8025093C(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_802509C8(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

void fn_802511F8(void *arg0, u32 *arg1) {
    M2C_UNK fn_80250B58(void *, u32 *);
    u32 fn_802575A0(void *);
    M2C_UNK fn_80260174(u8, u8, u8);
    u16 temp_r3_2;
    u16 var_r0;
    u32 temp_r3;

    temp_r3 = *arg1;
    if ((temp_r3 >> 0x18U) == 0) {
        M2C_FIELD(arg0, u16 *, 0x12E) = (u16) (M2C_FIELD(arg0, u16 *, 0x12E) + (s8) (u8) (temp_r3 >> 8U));
    } else {
        M2C_FIELD(arg0, u16 *, 0x12E) = (u16) (M2C_FIELD(arg0, u8 *, 0x131) + (s8) (u8) (temp_r3 >> 8U));
    }
    temp_r3_2 = M2C_FIELD(arg0, u16 *, 0x12E);
    if ((s16) temp_r3_2 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 0x7F;
        if (temp_r3_2 <= 0x7FU) {
            var_r0 = temp_r3_2;
        }
    }
    M2C_FIELD(arg0, u16 *, 0x12E) = var_r0;
    M2C_FIELD(arg0, s8 *, 0x130) = (s8) ((u32) *arg1 >> 0x10U);
    if (fn_802575A0(arg0) != 0U) {
        fn_80260174(M2C_FIELD(arg0, u8 *, 0x121), M2C_FIELD(arg0, u8 *, 0x122), (u8) M2C_FIELD(arg0, u16 *, 0x12E));
    }
    *arg1 = 4;
    fn_80250B58(arg0, arg1);
}

s32 fn_80255E88(void *arg0) {
    M2C_FIELD(arg0, void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 8);
}

s32 fn_80257820(u16 arg0) {
    extern f32 lbl_8036C268;
    return (s32) (lbl_8036C268 * (f32) arg0);
}

void fn_80257C04(void *arg0) {
    M2C_UNK fn_80257998();
    M2C_FIELD(arg0, s8 *, 1) = 0;
    fn_80257998();
}

void *fn_80258AD8(void) {
    extern u16 lbl_8035B220[];
    return &lbl_8035B220[0x60C];
}

void fn_80258D74(void) {
    M2C_UNK fn_80262410();
    fn_80262410();
}

void fn_80259A5C(void) {
    M2C_UNK DCFlushRangeNoSync(s32, M2C_UNK);
    M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
    extern s32 lbl_80368A94;
    memset(lbl_80368A94, 0, 0x100);
    DCFlushRangeNoSync(lbl_80368A94, 0x100);
}

void fn_80259CD8(u16 *arg0, u16 *arg1, s16 arg2) {
    *arg0 = (arg2 - (s16) *arg1) / 160;
    *arg1 += (s16) *arg0 * 0xA0;
}

void fn_80259D94(s32 *arg0, s16 *arg1, s32 *arg2) {
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r0;

    temp_r0 = *arg2;
    if (temp_r0 <= -0xA0) {
        if (temp_r0 <= -0xC80) {
            var_r0 = 0x14;
        } else {
            var_r0 = (s16) (-temp_r0 / 160);
        }
        *arg1 = var_r0;
    } else if (temp_r0 >= 0xA0) {
        if (temp_r0 >= 0xC80) {
            var_r0_2 = -0x14;
        } else {
            var_r0_2 = (s16) (-temp_r0 / 160);
        }
        *arg1 = var_r0_2;
    } else {
        *arg1 = 0;
    }
    *arg0 = *arg2;
    *arg2 += *arg1 * 0xA0;
}

void fn_8025EC10(u32 arg0) {
    extern s8 lbl_80368AAF;
    extern s8 lbl_80368AB0;
    extern s8 lbl_80368AB1;
    extern s8 lbl_80368AB2;
    extern s32 lbl_80368AB4;
    extern s32 lbl_80368AB8;
    extern s32 lbl_80368ABC;
    extern s8 lbl_80368AC0;
    lbl_80368ABC = 0;
    lbl_80368AB8 = 0;
    lbl_80368AB4 = 0;
    lbl_80368AB2 = 1;
    lbl_80368AB1 = 3;
    lbl_80368AC0 = 0;
    lbl_80368AB0 = (arg0 >> 1U) & 1;
    lbl_80368AAF = (arg0 >> 2U) & 1;
}

u8 fn_8025ED80(void) {
    extern u8 lbl_80368978;
    return lbl_80368978;
}

u16 fn_802611F8(void) {
    extern u32 lbl_803670B8;
    u32 temp_r0;

    temp_r0 = lbl_803670B8 * 0xA8351D63;
    lbl_803670B8 = temp_r0;
    return (u16) (temp_r0 >> 6U);
}

void fn_8026146C(s32 *arg0) {
    *arg0 <<= 8;
}

void fn_8026147C(u32 *arg0, s32 arg1) {
    u32 fn_80247F60(s32);
    *arg0 = (u32) (((u32) (*arg0 << 0x10) / fn_80247F60(arg1)) * 0x3E8) >> 5U;
}

u32 fn_802614C4(u32 arg0) {
    return arg0 >> 8U;
}

void fn_802616E4(s8 arg0) {
    extern s8 lbl_80368AD0;
    lbl_80368AD0 = arg0;
}

u8 fn_802616EC(void) {
    extern u8 lbl_80368AD0;
    return lbl_80368AD0;
}

void fn_80261714(s32 arg0) {
    extern s32 lbl_80368AA4;
    lbl_80368AA4 = arg0;
}

void fn_8026171C(s32 arg0, s32 arg1) {
    extern s32 lbl_80368AA0;
    M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), s32 *, 0x1C) = arg1;
}

u8 fn_80261B00(s32 arg0) {
    extern s32 lbl_80368AA0;
    return M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), u8 *, 0x9C);
}

u8 fn_80261B14(s32 arg0) {
    extern s32 lbl_80368AA0;
    return M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), u8 *, 0x90);
}

u16 fn_80261B28(s32 arg0) {
    extern s32 lbl_80368AA0;
    return M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), u16 *, 0x70);
}

s32 fn_80261B3C(s32 arg0) {
    extern s32 lbl_80368AA0;
    return M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), s32 *, 0x7C);
}

void fn_80261B50(s32 arg0, s8 arg1) {
    extern u16 lbl_80368AA0;
    M2C_FIELD((lbl_80368AA0 + (arg0 * 0xF8)), u8 *, 0xA0) = arg1;
}

void fn_80262290(void) {
    M2C_UNK fn_80263074();
    fn_80263074();
}

void fn_802622B0(void) {
    M2C_UNK fn_802631E4();
    fn_802631E4();
}

void fn_802622F4(void) {

}

void fn_80262410(void) {
    M2C_UNK fn_80262B1C();
    fn_80262B1C();
}

void fn_802624B8(void) {
    M2C_UNK fn_802627D4();
    fn_802627D4();
}

void fn_802624D8(void) {

}

void fn_802624F8(void) {
    extern s32 lbl_80368A90;
    lbl_80368A90 = 0;
}

void fn_80262504(void) {
    extern s32 lbl_80368A8C;
    lbl_80368A8C = 1;
}

void fn_80262AD0(void) {
    M2C_UNK fn_802142B0();
    fn_802142B0();
}

s32 fn_80262AF0(void) {
    return fn_802142B0() + 0x500;
}

s32 fn_80262B14(s32 arg0) {
    return arg0 - 0x500;
}

void fn_80262B1C(s32 arg0, s32 arg1) {
    u32 fn_80215F30();
    extern u32 lbl_80368AE4;
    extern s32 lbl_80368AE8;
    u32 temp_r31;
    u32 temp_r3;
    u32 var_r0;

    if (arg0 != 0) {
        temp_r31 = (arg1 + 0x1F) & 0xFFFFFFE0;
        temp_r3 = fn_80215F30();
        var_r0 = temp_r31;
        if (temp_r31 < temp_r3) {
            var_r0 = temp_r3;
        }
        lbl_80368AE4 = var_r0;
    }
    lbl_80368AE8 = arg0;
}

void fn_80263384(void) {
    extern s32 lbl_80368B08;
    extern s32 lbl_80368B18;
    lbl_80368B18 = 1;
    lbl_80368B08 = 1;
}

void fn_802633F8(void) {
    M2C_UNK fn_8020AEC4(M2C_UNK *);
    extern M2C_UNK lbl_80368B00;
    fn_8020AEC4(&lbl_80368B00);
}

void fn_802634E4(void) {
    M2C_UNK fn_802137E8();
    fn_802137E8();
}

void fn_802636C8(void) {
    extern s32 lbl_80368AF8;
    extern s16 lbl_80368AFC;
    lbl_80368AF8 = OSDisableInterrupts();
    lbl_80368AFC = 1;
}

void fn_80263764(void) {
    M2C_UNK OSDisableInterrupts();
    OSDisableInterrupts();
}

void fn_80263784(void) {
    M2C_UNK OSEnableInterrupts();
    OSEnableInterrupts();
}

void fn_80263830(void *arg0) {
    M2C_UNK fn_8026386C(f32, f32, f32, f32, f32);
    M2C_FIELD(arg0, s8 *, 0x13C) = 0;
    fn_8026386C(M2C_FIELD(arg0, f32 *, 0x140), M2C_FIELD(arg0, f32 *, 0x148), M2C_FIELD(arg0, f32 *, 0x144), M2C_FIELD(arg0, f32 *, 0x14C), M2C_FIELD(arg0, f32 *, 0x150));
}

void fn_80263C94(u8 arg0, void *arg1, void *arg2) {
    M2C_UNK fn_802648CC(s32, s32, s32, void *);
    switch ((s32) arg0) {                           /* irregular */
    case 0:
        if ((u8) M2C_FIELD(arg2, u8 *, 0x1C4) == 0) {
            fn_802648CC(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8), arg2);
        }
        /* fallthrough */
    case 1:
        return;
    }
}

void fn_80263CF0(void *arg0) {
    M2C_UNK fn_80263D30(f32, f32, f32, f32, f32, f32);
    M2C_FIELD(arg0, s8 *, 0x1C4) = 0;
    fn_80263D30(M2C_FIELD(arg0, f32 *, 0x1C8), M2C_FIELD(arg0, f32 *, 0x1D0), M2C_FIELD(arg0, f32 *, 0x1CC), M2C_FIELD(arg0, f32 *, 0x1D4), M2C_FIELD(arg0, f32 *, 0x1D8), M2C_FIELD(arg0, f32 *, 0x1DC));
}

void fn_80264B7C(void *arg0) {
    M2C_UNK fn_802649AC();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    fn_802649AC();
}

void fn_80266FFC(void) {

}

void fn_80267000(void) {

}
extern u16 lbl_802A1E10[4];
extern u16 lbl_8034CBB4[288];
extern u16 lbl_8035D118[];
#include "common.h"

extern s32 lbl_80368B2C;
extern u16 lbl_80368AA0;
extern u16 lbl_80368AA0;
