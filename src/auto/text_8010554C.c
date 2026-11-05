/* Functions from 0x8010554C to 0x80110128, found by decomp-toolkit. */
#include "common.h"

void *fn_8000E0E4(void);

void *fn_801057BC(void *arg0) {
    void *fn_8000E0E4();
    extern u16 lbl_802738A8;
    void *temp_r31;
    void *temp_r3;

    temp_r31 = &lbl_802738A8 + 8;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x10) == 0U) {
        return temp_r31;
    }
    temp_r3 = fn_8000E0E4();
    if (temp_r3 != NULL) {
        return temp_r3;
    }
    return temp_r31;
}

void fn_80105A04(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, M2C_UNK, s32);
    fn_8017A810(arg1, 0x10, arg0);
}

void fn_80105A30(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, s32);
    fn_8017A430(arg1, 0x10, arg0);
}

void fn_8010671C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
}

s32 fn_8010866C(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_803679C8;
    fn_800D758C(lbl_803679C8);
    return 0;
}

s32 fn_80108694(void) {
    extern s32 lbl_803679C8;
    fn_800D758C(lbl_803679C8);
    fn_800DC3B0(lbl_803679C8);
    fn_800DAA38();
    return 0;
}

void fn_801086CC(void *arg0) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800C9B6C(M2C_UNK *);
    M2C_UNK fn_800DC518(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK sp8;

    fn_800C9B6C(&sp8);
    fn_800DC518(M2C_FIELD(arg0, s32 *, 0x424), &sp8, 0);
    fn_800C9A60(&sp8, -1);
}

s32 fn_80108948(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_803679D0;
    fn_800D758C(lbl_803679D0);
    return 0;
}

void fn_80108BD0(s16 arg1, s16 arg2, s32 arg3) {
    void *fn_8000D2BC();
    s16 temp_r6_2;
    s32 temp_r6;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r7;

    temp_r3 = fn_8000D2BC();
    temp_r7 = M2C_FIELD(temp_r3, void **, 0x14);
    temp_r6 = arg1 + arg3;
    M2C_FIELD(temp_r7, s16 *, 8) = (s16) (arg1 + 2);
    temp_r6_2 = temp_r6 - 0x32;
    M2C_FIELD(temp_r7, s16 *, 0xA) = (s16) (arg2 + 2);
    M2C_FIELD(temp_r7, s16 *, 0xC) = (s16) (temp_r6 - 4);
    M2C_FIELD(temp_r7, s16 *, 0xE) = (s16) (arg2 + 0x72);
    temp_r4 = M2C_FIELD(temp_r3, void **, 0x18);
    M2C_FIELD(temp_r4, s16 *, 0x18) = arg1;
    M2C_FIELD(temp_r4, s16 *, 0x14) = arg1;
    M2C_FIELD(temp_r4, s16 *, 0x1A) = arg2;
    M2C_FIELD(temp_r4, s16 *, 0x16) = arg2;
    temp_r4_2 = M2C_FIELD(temp_r3, void **, 0x1C);
    M2C_FIELD(temp_r4_2, s16 *, 0x18) = temp_r6_2;
    M2C_FIELD(temp_r4_2, s16 *, 0x14) = temp_r6_2;
    M2C_FIELD(temp_r4_2, s16 *, 0x1A) = arg2;
    M2C_FIELD(temp_r4_2, s16 *, 0x16) = arg2;
    temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x20);
    M2C_FIELD(temp_r3_2, s16 *, 0x14) = (s16) (arg1 + 0x32);
    M2C_FIELD(temp_r3_2, s16 *, 0x18) = temp_r6_2;
    M2C_FIELD(temp_r3_2, s16 *, 0x1A) = arg2;
    M2C_FIELD(temp_r3_2, s16 *, 0x16) = arg2;
}

void fn_80108F38(void) {
    M2C_UNK fn_800AA208();
    fn_800AA208();
}

void fn_80108F58(void *arg0) {
    M2C_UNK fn_800AA1CC(void *);
    void *fn_80109180(s32, void *);
    extern f32 lbl_8036A130;
    void *temp_r3;

    M2C_FIELD(arg0, void **, 0x34) = fn_80109180(M2C_FIELD(arg0, s32 *, 0x30), arg0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), f32 *, 0x38) = (f32) lbl_8036A130;
    temp_r3 = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(temp_r3, f32 *, 0x3C) = (f32) lbl_8036A130;
    fn_800AA1CC(temp_r3);
}

void fn_8010913C(void *arg0) {
    s32 fn_802342B8(s32, s32);
    extern s32 lbl_803679D8;
    extern void *lbl_803679DC;
    if (fn_802342B8(*M2C_FIELD(arg0, s32 **, 0x30), lbl_803679D8) == 0) {
        lbl_803679DC = arg0;
    }
}

void fn_80109B00(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0xE) = arg1;
}

u8 fn_80109B0C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0xE);
}

void fn_80109B18(void *arg0, s8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0xD) = arg1;
}

u8 fn_80109B24(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0xD);
}

void fn_80109B30(void *arg0, u8 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0xC) = arg1;
    M2C_FIELD(arg0, s8 *, 0x61) = (s8) (((arg1 >> 1U) & 0x7F) + 1);
}

u8 fn_80109B48(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0xC);
}

void fn_80109B54(void *arg0, f32 farg0) {
    extern f32 lbl_8036A140;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 8) = farg0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 4);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) / (lbl_8036A140 * M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 8)));
}

f32 fn_80109BA8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 8);
}

void fn_80109CE8(void *arg0) {
    f32 fn_800067BC(M2C_UNK, f32, f32, f32, f32);
    M2C_UNK fn_8000C188(void *);
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    M2C_FIELD(temp_r31, s8 *, 0x60) = (s8) fn_800067BC(0, (f32) M2C_FIELD(arg0, s32 *, 0x3C), (f32) M2C_FIELD(arg0, s32 *, 0x40), (f32) M2C_FIELD(arg0, s32 *, 0x34), (f32) M2C_FIELD(arg0, s32 *, 0x38));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x34) >= (s32) M2C_FIELD(arg0, s32 *, 0x38)) {
        fn_8000C188(arg0);
    }
}

void fn_8010AB78(void *arg0) {
    if (*(u8*)((char*)arg0 + 0x10) & 0x80) {
        fn_8006EDA0((char*)arg0 + 0xC);
        *(u8*)((char*)arg0 + 0x10) = *(u8*)((char*)arg0 + 0x10) & 0x7F;
    }
}

void fn_8010AC4C(void) {

}

void fn_8010AC50(void) {

}

void fn_8010AC54(void) {

}

s32 fn_8010B60C(void *arg1) {
    if (fn_80105BC0((u8*)arg1 + 0x1BC, 0x18) != 0) {
        return 0;
    }
    return *(u32*)((u8*)arg1 + 0x1A0) & 1;
}

s32 fn_8010C4B0(void *arg0) {
    void *fn_8000D354(s32);
    u8 fn_80102EA8();
    if (fn_80102EA8() != 0) {
        return 1;
    }
    return M2C_FIELD(fn_8000D354(M2C_FIELD(arg0, s32 *, 0x240)), u8 *, 7) != 0;
}

s32 fn_8010CA94(void) {
    return 0;
}

s32 fn_8010CA9C(void) {
    return 0;
}

s32 fn_8010CAA4(void) {
    return 0;
}

void fn_8010CAAC(void) {
    M2C_UNK fn_8010EA20();
    fn_8010EA20();
}

void fn_8010D364(void) {
    M2C_UNK fn_8010D384();
    fn_8010D384();
}

void fn_8010EF34(void) {
    M2C_UNK fn_8010EF74();
    fn_8010EF74();
}

void fn_8010EF54(void) {
    M2C_UNK fn_8010EF74();
    fn_8010EF74();
}

void fn_8010F970(void) {
    s32 fn_80019E04();
    extern u16 lbl_8028F5F8[96];
    u16 *var_r31;

    var_r31 = (u16 *)lbl_8028F5F8;
    do {
        if ((u32) var_r31[0] != 0U) {
            var_r31[2] = fn_80019E04();
            var_r31 += 0x6;
        } else {
            return;
        }
    } while (1);
}

void fn_8010FB7C(s32 arg0, s32 arg1) {
    fn_8017A810(arg1, 0x204, arg0);
}

void fn_8010FBA8(s32 arg0, s32 arg1) {
    fn_8017A430(arg1, 0x204, arg0);
}

void fn_8010FBD4(void) {

}

void fn_8010FD70(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    char *temp_r9;

    temp_r9 = (char*)arg0 + (*(s32*)((char*)arg0 + 0x200) << 3);
    *(u8*)(temp_r9 + 0x0) = arg1;
    *(u8*)(temp_r9 + 0x1) = arg2;
    *(u8*)(temp_r9 + 0x2) = 0xA;
    *(u8*)(temp_r9 + 0x3) = arg3;
    *(u8*)(temp_r9 + 0xA) = 0x0;
    *(s32*)((char*)arg0 + 0x200) = *(s32*)((char*)arg0 + 0x200) + 1;
    *(u8*)(temp_r9 + 0x4) = 0x0;
    *(u8*)(temp_r9 + 0x5) = 0x0;
    *(u8*)(temp_r9 + 0x6) = 0x0;
    *(u8*)(temp_r9 + 0x7) = arg4;
}

void fn_8010FDB8(s32 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    s32 *temp_r8;
    u32 temp_r9;
    u8 temp_r10;

    temp_r8 = (s32*)(arg0 + ((*(s32*)(arg0 + 0x200)) << 3));
    *(u8*)(temp_r8 + 0x0) = arg1;
    *(u8*)(temp_r8 + 0x1) = arg2;
    *(u8*)(temp_r8 + 0x2) = 7;
    *(u8*)(temp_r8 + 0x3) = arg3;
    *(u8*)(temp_r8 + 0xA) = 0;

    temp_r9 = *(u32*)(arg0 + 0x200);
    *(u32*)(arg0 + 0x200) = temp_r9 + 1;

    temp_r10 = *(u8*)(arg0 + 0xE);
    *(u8*)(temp_r8 + 0x4) = temp_r10;

    temp_r10 = *(u8*)(arg0 + 0x18);
    *(u8*)(temp_r8 + 0x5) = temp_r10;

    *(u8*)(temp_r8 + 0x6) = 0;
    *(u8*)(temp_r8 + 0x7) = 0;
}

void fn_8010FEEC(void *arg0) {
    *(u8*)((char*)arg0 + 4) = 0;
    *(u8*)((char*)arg0 + 5) = 0;
}

s32 fn_8010FF88(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x200);
}

s32 fn_80110030(void *arg0) {
    extern u16 lbl_8032BD5C[];
    u8 r0 = *(u8*)((char*)arg0 + 7);
    return lbl_8032BD5C[r0];
}

s32 fn_80110048(u32 arg0) {
    extern u32 lbl_8032BD5C;
    s32 var_ctr;
    s32 var_r5;
    u32 *var_r4;

    var_r4 = &lbl_8032BD5C;
    var_r5 = 0;
    var_ctr = 0x20;
loop_1:
    if ((u32) *var_r4 == 0U) {
        (&lbl_8032BD5C)[var_r5] = arg0;
    } else {
        var_r4 += 4;
        var_r5 += 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            var_r5 = -1;
        } else {
            goto loop_1;
        }
    }
    return var_r5;
}

