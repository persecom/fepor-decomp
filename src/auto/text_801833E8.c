/* Functions from 0x801833E8 to 0x801A2AB4, found by decomp-toolkit. */
#include "common.h"

f32 fn_801833E8(void) {
    extern f32 lbl_8036ACC0;
    return lbl_8036ACC0;
}

s32 fn_801833F0(void) {
    return 0x1B0;
}

s32 fn_801833F8(void) {
    return 0x90;
}

s32 fn_8018361C(void) {
    return 4;
}

s32 fn_801837CC(void) {
    return 3;
}

s32 fn_8018386C(void) {
    return 0;
}

s32 fn_801838CC(void) {
    return 1;
}

s32 fn_8018394C(void) {
    return 2;
}

void fn_80185060(void *arg0, void *arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == (u32) M2C_FIELD(arg1, u32 *, 0x30)) {
        M2C_FIELD(arg1, void **, 0x34) = arg0;
    }
}

void fn_80185244(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x34) > (s32) M2C_FIELD(arg0, s32 *, 0x3C)) {
        fn_8000C188();
    }
}

void fn_8018548C(void *arg0) {
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 0xB);
}

void fn_801854B4(void *arg0) {
    M2C_UNK fn_8004B1B4(s32);
    fn_8004B1B4(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_801857F0(void *arg0) {
    u8 fn_8004BF80(s32);
    if (fn_8004BF80(M2C_FIELD(arg0, s32 *, 0x30)) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_8018B004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}

void fn_8018B2C4(void *arg0) {
    M2C_UNK fn_80050BCC(s32, M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x10;
    fn_80050BCC(M2C_FIELD(arg0, s32 *, 0x30), 0);
}

void fn_8018B698(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

void fn_8018B6A4(void *arg0) {
    M2C_UNK fn_8005F7E0(s32, u8, u8, u8);
    fn_8005F7E0(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, M2C_FIELD(arg0, u8 *, 0x34), M2C_FIELD(arg0, u8 *, 0x35), M2C_FIELD(arg0, u8 *, 0x36));
}

void fn_8018B854(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) M2C_FIELD(temp_r5, u8 *, 0x24);
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) M2C_FIELD(temp_r5, u8 *, 0x25);
    M2C_FIELD(arg0, u8 *, 0x36) = (u8) M2C_FIELD(temp_r5, u8 *, 0x26);
    M2C_FIELD(arg0, u8 *, 0x37) = (u8) M2C_FIELD(temp_r5, u8 *, 0x27);
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}

void fn_8018C9A4(void *arg0) {
    M2C_UNK fn_8005FA14(s32, M2C_UNK);
    fn_8005FA14(M2C_FIELD(arg0, s32 *, 0x34), 1);
}

void fn_8018CB7C(void) {
    M2C_UNK fn_8018CCB8();
    fn_8018CCB8();
}

void fn_8018D25C(void *arg0) {
    s32 fn_80018ADC();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = fn_80018ADC();
}

void fn_801908B4(void) {

}

void fn_80190F14(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_80193E58(void) {

}

void fn_80193F3C(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_80194174(void) {

}

void fn_801950CC(void *arg0) {
    M2C_UNK fn_800C426C(s32);
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x30);
    if (temp_r3 != 0U) {
        fn_800C426C(temp_r3 - 0x10);
    }
}

void fn_80195170(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 4) = arg1;
}

void fn_80195880(void *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 1;
}

void fn_80196794(void) {
    M2C_UNK fn_8003D538();
    fn_8003D538();
}

void fn_80196818(void *arg0) {
    M2C_UNK fn_801B3258(s32, void *);
    fn_801B3258(M2C_FIELD(arg0, s32 *, 0x30), arg0);
}

void fn_80196840(void) {

}

void fn_80196844(void) {

}

void fn_801968CC(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x78);
    if (temp_r0 != temp_r5) {
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (temp_r0 + arg1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (temp_r5 + arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = 3;
}

void fn_801985F0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
}

s32 fn_801992F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x128);
}

s32 fn_80199310(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x124);
}

void fn_80199484(void *arg0) {
    M2C_UNK fn_800E5B68();
    M2C_UNK fn_80198CA4();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 3) {
        fn_80198CA4();
        return;
    }
    fn_800E5B68();
}

void fn_80199CEC(void *arg0) {
    M2C_UNK fn_800498A4(s32, M2C_UNK, M2C_UNK);
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x34), 0, 2);
}

void fn_8019AB90(void *arg0) {
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x5C), 0, 2);
}

void fn_8019D038(void *arg0) {
    M2C_UNK fn_8017E394(s32, M2C_UNK, void *, M2C_UNK);
    fn_8017E394(M2C_FIELD(arg0, s32 *, 0x34), 0, arg0, 3);
}

void fn_8019D360(void *arg0) {
    void *temp_r5;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x35) == 0) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(temp_r5, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x1C) & 0xFFFFFF3F);
        M2C_FIELD(arg0, u8 *, 0x35) = 1U;
    }
}

void fn_8019D4F4(void *arg0) {
    M2C_UNK fn_8004FC70(s32, M2C_UNK);
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 5);
}

s32 fn_8019D90C(void) {
    M2C_UNK fn_80194E10();
    fn_80194E10();
    return 1;
}

s32 fn_8019D930(void) {
    M2C_UNK fn_80194F54();
    M2C_UNK fn_80195880();
    fn_80194F54();
    fn_80195880();
    return 1;
}

s32 fn_8019E4EC(void) {
    u8 fn_800A69D8(M2C_UNK *, s32 *);
    M2C_UNK spC;
    s32 sp8;

    if (fn_800A69D8(&spC, &sp8) != 0) {
        return sp8;
    }
    return 0;
}

void fn_8019E5B0(void) {
    M2C_UNK fn_8000A274(M2C_UNK);
    fn_8000A274(0);
}

s32 fn_8019E690(s32 arg0) {
    extern u8 lbl_8036728B;
    u8 var_r0;

    var_r0 = lbl_8036728B | 1;
    if (arg0 != 0) {
        var_r0 = lbl_8036728B & 0xFE;
    }
    lbl_8036728B = var_r0;
    return 1;
}

s32 fn_8019E6B4(void) {
    M2C_UNK fn_8018CF08();
    fn_8018CF08();
    return 1;
}

void fn_8019EAC8(void *arg0) {
    M2C_UNK fn_800F18A4(s32, s32);
    fn_800F18A4(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x34));
}

s32 fn_8019ED74(void) {
    return 1;
}

void fn_8019FC4C(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_8001772C();
    if (fn_8001772C() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_8019FC88(void) {
    M2C_UNK fn_80017774();
    fn_80017774();
    return 1;
}

s32 fn_8019FCAC(void) {
    M2C_UNK fn_8001779C();
    fn_8001779C();
    return 1;
}

s32 fn_8019FE2C(void) {
    M2C_UNK fn_800C0658();
    M2C_UNK fn_800177E0();
    fn_800C0658();
    fn_800177E0();
    return 1;
}

s32 fn_801A01D8(s8 arg0) {
    M2C_UNK fn_80013864();
    M2C_UNK fn_80040844();
    M2C_UNK fn_80040DA4();
    extern s8 lbl_8036728A;
    lbl_8036728A = arg0;
    fn_80040844();
    fn_80040DA4();
    fn_80013864();
    return 1;
}

void fn_801A06CC(void) {
    M2C_UNK fn_8003BE50();
    fn_8003BE50();
}

void fn_801A0C3C(void *arg0, u32 arg1) {
    M2C_UNK fn_8000C60C();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) == arg1) {
        fn_8000C60C();
    }
}

void fn_801A25C4(void) {
    M2C_UNK fn_80016180();
    M2C_UNK fn_8005376C();
    M2C_UNK fn_800C1BDC();
    extern s32 lbl_80367110;
    if (lbl_80367110 & 1) {
        fn_8000C60C();
        fn_800C1BDC();
        fn_80016180();
        fn_8005376C();
    }
}

void fn_801A2764(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

