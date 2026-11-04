/* Functions from 0x800AD24C to 0x800C3F18, found by decomp-toolkit. */
#include "common.h"

s32 fn_800AD284(s32 arg0, s16 arg1) {
    M2C_UNK fn_8001C5F8(s32, M2C_UNK);
    M2C_UNK fn_800C428C(s32);
    if (arg0 != 0) {
        fn_8001C5F8(arg0 + 4, -1);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_800AD2DC(s32 arg0) {
    M2C_UNK fn_8001C76C(s32);
    fn_8001C76C(arg0 + 4);
    return arg0;
}

extern M2C_UNK lbl_802EF4E0;
extern void fn_8002F61C(M2C_UNK *);
extern void fn_8002F62C(M2C_UNK *);
extern void fn_8002F740(void);
extern void fn_8003E8DC(void);
void fn_800ADD48(void) {
    fn_8002F62C(&lbl_802EF4E0);
    fn_8002F740();
    fn_8003E8DC();
    fn_8002F61C(&lbl_802EF4E0);
}

void fn_800AE904(void *arg0) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x4C), s32 *, 0x4C) = 0;
}

void fn_800B16EC(void *arg0) {
    M2C_UNK fn_800B1720(M2C_UNK, s32);
    fn_800B1720(0, *M2C_FIELD(arg0, s32 **, 4) + 0x40);
}

void fn_800B4060(void) {
    M2C_UNK fn_800AECC0();
    fn_800AECC0();
}

void fn_800B4794(void) {
    extern s8 lbl_80367810;
    lbl_80367810 = 0;
}

void fn_800B47A0(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

s32 fn_800B49C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void fn_800B49D0(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 8);
}

void fn_800B49E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s32 *, 0x84) = arg3;
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 1);
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x8C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}

s32 fn_800B4A14(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s32 *, 0x84) = arg3;
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 1);
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
loop_1:
    if (!(M2C_FIELD(arg0, u16 *, 0x90) & 2)) {
        fn_8020A51C();
        goto loop_1;
    }
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void fn_800B50E4(void) {
    M2C_UNK fn_800B4C20();
    M2C_UNK fn_8020A51C();
loop_1:
    fn_800B4C20();
    fn_8020A51C();
    goto loop_1;
}

s32 fn_800B6A30(void) {
    return 0;
}

s32 fn_800B6A38(void) {
    return 1;
}

void fn_800B6A70(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 < 0) {
        arg0 = 0;
    }
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg2 < 0) {
        arg2 = 0;
    }
    *(s32 *)(arg0 + 0x7C) = arg1;
    *(s32 *)(arg0 + 0x80) = arg2;
}

s32 fn_800B6AA8(s32 arg0) {
    extern f32 lbl_80369CF4;
    return (s32) (lbl_80369CF4 * (f32) arg0);
}

s32 fn_800B6B20(void) {
    extern s32 lbl_8028D298;
    
    fn_8000CAA0(&lbl_8028D298, fn_800C0658(), &lbl_8028D298);
    fn_80013864();
    return 1;
}

extern void *lbl_8033216C;
void fn_800B6B58(void) {
    *(u16 *)lbl_8033216C = 0;
}

extern s32 lbl_8036B3A4;
extern s32 lbl_8036B3A4;
s32 fn_800B6B94(s32 arg0, s32 arg1) {
    if (arg0 < 0) {
        arg0 = 0;
    }
    *(s32 *)(arg0 + 0x7C) = arg1;
    *(s32 *)(arg0 + 0x80) = lbl_8036B3A4;
    return 1;
}

extern M2C_UNK lbl_8028E7F8;
s32 fn_800B6CD8(u32 arg0) {
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    OSReport();
    return 1;
}

s32 fn_800B6D20(s32 arg0) {
    M2C_UNK fn_8014CC5C(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_80330708;
    fn_8014CC5C(&lbl_80330708, arg0, &lbl_80330708);
    return 1;
}

void fn_800B6F48(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

s32 fn_800B6F6C(s32 arg0) {
    s32 ret;
    
    ret = arg0;
    if (ret < 0) {
        ret = 0;
    }
    return ret;
}

void fn_800B6FB8(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

s32 fn_800B6FE4(u32 arg0) {
    M2C_UNK fn_80013864();
    M2C_UNK fn_801EAABC(u32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_801EAABC(arg0, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B7044(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    return arg0;
}

s32 fn_800B7140(u32 arg0) {
    M2C_UNK fn_801070FC(u32);
    M2C_UNK fn_80107294(M2C_UNK);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_80107294(5);
    fn_801070FC(arg0);
    return 1;
}

u8 fn_800B719C(u8 arg0) {
    u8 fn_800F32A4();
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0U;
    }
    return fn_800F32A4();
}

s32 fn_800B7250(void) {
    M2C_UNK fn_800162B8();
    M2C_UNK fn_800163F8();
    fn_800162B8();
    fn_800163F8();
    fn_80016180();
    return 1;
}

s32 fn_800B7948(void) {
    M2C_UNK fn_801453F0();
    fn_801453F0();
    return 1;
}

s32 fn_800B796C(void) {
    M2C_UNK fn_80145488();
    fn_80145488();
    return 1;
}

s32 fn_800B7990(void) {
    M2C_UNK fn_80145520();
    fn_80145520();
    return 1;
}

s32 fn_800B79B4(s32 arg0) {
    M2C_UNK fn_801455B8(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    fn_801455B8(var_r3);
    return 1;
}

s32 fn_800B79E4(void) {
    M2C_UNK fn_80145684();
    fn_80145684();
    return 1;
}

s32 fn_800B7A08(void) {
    M2C_UNK fn_8014571C();
    fn_8014571C();
    return 1;
}

s32 fn_800B7C04(void) {
    M2C_UNK fn_801457B4();
    fn_801457B4();
    return 1;
}

s32 fn_800B7C28(void) {
    M2C_UNK fn_80145828();
    fn_80145828();
    return 1;
}

s32 fn_800B8108(void) {
    M2C_UNK fn_8016B5E8();
    fn_8016B5E8();
    return 1;
}

s32 fn_800B812C(void) {
    M2C_UNK fn_8016B68C();
    fn_8016B68C();
    return 1;
}

s32 fn_800B8150(void) {
    M2C_UNK fn_8016B60C();
    fn_8016B60C();
    return 1;
}

s32 fn_800B8174(void) {
    M2C_UNK fn_8016B64C();
    fn_8016B64C();
    return 1;
}

s32 fn_800B8198(void) {
    M2C_UNK fn_800C0658();
    M2C_UNK fn_8016B6D4();
    fn_800C0658();
    fn_8016B6D4();
    return 1;
}

s32 fn_800B8534(void) {
    extern M2C_UNK lbl_802EFDB8;
    M2C_UNK *var_r3;
    M2C_UNK *var_r5;
    s32 var_ctr;

    var_r3 = &lbl_802EFDB8;
    M2C_FIELD(&lbl_802EFDB8, s8 *, 0x61) = 0;
    var_r5 = &lbl_802EFDB8;
    M2C_FIELD(&lbl_802EFDB8, s8 *, 0x60) = 0;
    var_ctr = 2;
    do {
        M2C_FIELD(var_r3, s8 *, 0) = 0;
        M2C_FIELD(var_r5, s16 *, 0x20) = 0;
        M2C_FIELD(var_r3, s8 *, 1) = 0;
        M2C_FIELD(var_r5, s16 *, 0x22) = 0;
        M2C_FIELD(var_r3, s8 *, 2) = 0;
        M2C_FIELD(var_r5, s16 *, 0x24) = 0;
        M2C_FIELD(var_r3, s8 *, 3) = 0;
        M2C_FIELD(var_r5, s16 *, 0x26) = 0;
        M2C_FIELD(var_r3, s8 *, 4) = 0;
        M2C_FIELD(var_r5, s16 *, 0x28) = 0;
        M2C_FIELD(var_r3, s8 *, 5) = 0;
        M2C_FIELD(var_r5, s16 *, 0x2A) = 0;
        M2C_FIELD(var_r3, s8 *, 6) = 0;
        M2C_FIELD(var_r5, s16 *, 0x2C) = 0;
        M2C_FIELD(var_r3, s8 *, 7) = 0;
        M2C_FIELD(var_r5, s16 *, 0x2E) = 0;
        M2C_FIELD(var_r3, s8 *, 8) = 0;
        M2C_FIELD(var_r5, s16 *, 0x30) = 0;
        M2C_FIELD(var_r3, s8 *, 9) = 0;
        M2C_FIELD(var_r5, s16 *, 0x32) = 0;
        M2C_FIELD(var_r3, s8 *, 0xA) = 0;
        M2C_FIELD(var_r5, s16 *, 0x34) = 0;
        M2C_FIELD(var_r3, s8 *, 0xB) = 0;
        M2C_FIELD(var_r5, s16 *, 0x36) = 0;
        M2C_FIELD(var_r3, s8 *, 0xC) = 0;
        M2C_FIELD(var_r5, s16 *, 0x38) = 0;
        M2C_FIELD(var_r3, s8 *, 0xD) = 0;
        M2C_FIELD(var_r5, s16 *, 0x3A) = 0;
        M2C_FIELD(var_r3, s8 *, 0xE) = 0;
        M2C_FIELD(var_r5, s16 *, 0x3C) = 0;
        M2C_FIELD(var_r3, s8 *, 0xF) = 0;
        var_r3 += 0x10;
        M2C_FIELD(var_r5, s16 *, 0x3E) = 0;
        var_r5 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    return 1;
}

s32 fn_800B85EC(void) {
    M2C_UNK fn_80025680(s32, s32);
    s32 fn_800B864C();
    extern s32 lbl_80367240;
    fn_80025680(lbl_80367240, fn_800B864C());
    return 0;
}

s32 fn_800B861C(void) {
    M2C_UNK fn_80025690(s32, s32);
    s32 fn_800B864C();
    extern s32 lbl_80367240;
    fn_80025690(lbl_80367240, fn_800B864C());
    return 0;
}

s32 fn_800B870C(u32 arg0) {
    s32 fn_8000BCA4();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    return fn_8000BCA4();
}

s32 fn_800B874C(u32 arg0) {
    M2C_UNK fn_8000BD98();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_8000BD98();
    return 0;
}

u8 fn_800B8790(void) {
    return fn_80089948();
}

void fn_800B8804(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_80089948();
    if (fn_80089948() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B8840(void) {
    M2C_UNK fn_80089970();
    fn_80089970();
    return 1;
}

s32 fn_800B8864(s32 arg0) {
    M2C_UNK fn_80089980(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0x7D0;
    }
    fn_80089980(var_r3);
    return 1;
}

s32 fn_800B8894(s32 arg0) {
    M2C_UNK fn_800899D4(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0x7D0;
    }
    fn_800899D4(var_r3);
    return 1;
}

u8 fn_800B88C4(void) {
    return fn_80089ED8();
}

void fn_800B8938(s32 arg0) {
    u8 fn_80089ED8();
    if (fn_80089ED8() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B8974(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_80089F00(u8, u8, u8, s32, s32);
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r5 = arg2;
    var_r6 = arg3;
    var_r7 = arg4;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    if (var_r3 > 0xFF) {
        var_r3 = 0xFF;
    }
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    if (var_r4 > 0xFF) {
        var_r4 = 0xFF;
    }
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    if (var_r5 > 0xFF) {
        var_r5 = 0xFF;
    }
    if (var_r6 < 0) {
        var_r6 = 0x1F4;
    }
    if (var_r7 < 0) {
        var_r7 = 0x1F4;
    }
    fn_80089F00((u8) var_r3, (u8) var_r4, (u8) var_r5, var_r6, var_r7);
    return 1;
}

u8 fn_800B8A04(void) {
    return fn_8008A59C();
}

s32 fn_800B8A28(u8 arg0, s32 arg1) {
    extern void fn_8008A290(u8, s32);
    s32 var_r4 = arg1;

    if (var_r4 < 0) {
        var_r4 = 0x1F4;
    }
    fn_8008A290(arg0, var_r4);
    return 1;
}

s32 fn_800B8AD8(void) {
    M2C_UNK fn_801C18FC();
    fn_801C18FC();
    return 1;
}

void fn_800B8D34(void) {
    M2C_UNK fn_8006F014();
    fn_8006F014();
}

s32 fn_800B8D54(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    M2C_UNK fn_8006F020();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F020();
    fn_80013864();
    return 1;
}

s32 fn_800B8DE4(u32 arg0, u32 arg1, u32 arg2) {
    M2C_UNK fn_8006F09C();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F09C();
    fn_80013864();
    return 1;
}

s32 fn_800B8E5C(u32 arg0, u32 arg1) {
    M2C_UNK fn_8006F10C();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F10C();
    fn_80013864();
    return 1;
}

s32 fn_800B90C4(u32 arg0) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFCB4(void);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFCB4();
    return 1;
}

s32 fn_800B9130(u32 arg0, s32 arg1) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFD40(s32);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFD40(arg1);
    return 1;
}

s32 fn_800B91AC(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFD60(s32, s32, s32, s32);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFD60(arg1, arg2, arg3, arg4);
    return 1;
}

s32 fn_800B9258(u32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFD8C(s32, s32);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFD8C(arg1, arg2 != 0);
    return 1;
}

s32 fn_800BAEAC(s32 arg0) {
    extern M2C_UNK lbl_8026ECB8;
    extern u16 lbl_80367A58;
    if (fn_8000BCA4(&lbl_8026ECB8 + 0xA50) == 0U) {
        return 0;
    }
    return (lbl_80367A58 & 0x10) == 0;
}

s32 fn_800BAEF8(void) {
    M2C_UNK fn_8011D650();
    fn_8011D650();
    return 1;
}

s32 fn_800BAF1C(s32 arg0) {
    M2C_UNK fn_8011D79C(s32);
    M2C_UNK fn_8011D908(s32, s32);
    extern M2C_UNK lbl_8026ECB8;
    if (fn_8000BCA4(&lbl_8026ECB8 + 0xA50, &lbl_8026ECB8) != 0U) {
        fn_8011D79C(arg0);
        return 1;
    }
    fn_8011D908(arg0, fn_800C0658());
    return 1;
}

u8 fn_800BB04C(s32 arg0) {
    u8 fn_800BDD08(void *, s32, M2C_UNK *);
    extern M2C_UNK lbl_80330708;
    return fn_800BDD08(&lbl_80330708 + 0xB4, arg0, &lbl_80330708);
}

s32 fn_800BB080(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    return arg0;
}

s32 fn_800BB9E0(void) {
    return 1;
}

s32 fn_800BBC50(void) {
    extern s32 lbl_80367110;
    return lbl_80367110;
}

u16 fn_800BBD68(void) {
    void *fn_80019E04();
    void *temp_r3;

    temp_r3 = fn_80019E04();
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u16 *, 0xE);
}

s32 fn_800BC6E8(u8 arg0, s32 arg2) {
    M2C_UNK fn_8001D780(s32);
    M2C_UNK fn_80037BD0();
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_80037BD0();
    fn_8001D780(arg2);
    return 1;
}

s32 fn_800BC760(u8 arg0, s8 arg1) {
    M2C_UNK fn_800949A4(s8);
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_800949A4(arg1);
    return 1;
}

s32 fn_800BC7C8(u8 arg0) {
    M2C_UNK fn_80094A54();
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_80094A54();
    return 1;
}

s32 fn_800BC82C(u8 arg0, s32 arg1) {
    s32 fn_80093010(void *, s32);
    extern M2C_UNK lbl_802B14E4;
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || ((u32) M2C_FIELD(var_r31, u32 *, 0x188) == 0U)) {
        return 0;
    }
    return fn_80093010(var_r31, fn_80019E04(arg1));
}

u8 fn_800BD5AC(void) {
    void *fn_80016BDC();
    void *temp_r3;

    temp_r3 = fn_80016BDC();
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u8 *, 0x198);
}

s32 fn_800BF694(void) {
    return 1;
}

void fn_800C0624(void *arg0) {
    s32 fn_80013B60(M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x30) = fn_80013B60(0);
}

void fn_800C0980(void) {
    M2C_UNK fn_80018AE4();
    fn_80018AE4();
}

void fn_800C09E4(s32 arg0) {
    s32 fn_800142B8();
    fn_80013880();
    if (fn_800142B8() != 6) {
        fn_8000C188(arg0);
    }
}

void fn_800C0C1C(void) {
    u16 fn_80089634();
    M2C_UNK fn_80089650(M2C_UNK, M2C_UNK);
    if (fn_80089634() != 6) {
        fn_80089650(3, 0x85);
    }
}

void fn_800C0CA4(void *arg0) {
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x50));
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}

void fn_800C10B4(void) {
    M2C_UNK fn_80016180();
    fn_80016180();
}

void fn_800C11F4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = -1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0x10;
}

s32 fn_800C273C(void *arg0, u16 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x24) + arg1;
}

void fn_800C28CC(void) {
    M2C_UNK fn_80013880();
    fn_80013880();
}

void fn_800C2930(s32 arg0, s32 arg1) {
    extern u32 *lbl_80330EAC;
    fn_801A7CDC(lbl_80330EAC, lbl_80330EAC);
    fn_8017A810(arg1, 0x480, arg0);
}

s32 fn_800C30CC(s32 arg0, s32 arg1) {
    return arg0 + ((arg1 - 1) * 0x18);
}

void fn_800C3364(s32 arg0, s32 arg1) {
    s32 r31 = arg0;
    s32 r30 = 0;
    
    do {
        fn_8001C15C(r31, arg1);
        r30 += 1;
        r31 += 8;
    } while (r30 < 0xC8);
}

void fn_800C33C0(s32 arg0, s32 arg1) {
    s32 r31 = arg0;
    s32 r30 = 0;
    
    do {
        fn_8001C21C(r31, arg1);
        r30 += 1;
        r31 += 8;
    } while (r30 < 0xC8);
}

void fn_800C3864(s32 arg0, s32 arg1) {
    M2C_UNK fn_8001D580(s32);
    fn_8001D580(arg0 + (arg1 * 8));
}

