/* Functions from 0x80132800 to 0x80149F38, found by decomp-toolkit. */
#include "common.h"

s32 fn_8013286C(void) {
    return 2;
}

s32 fn_80132874(void) {
    return 0x10;
}

s32 fn_8013289C(void) {
    return 0;
}

s32 fn_8013290C(void) {
    return 0;
}

s32 fn_8013296C(void) {
    return 0;
}

s32 fn_801329C8(void) {
    return 0;
}

s32 fn_80132A2C(void) {
    return 2;
}

s32 fn_80132A34(void) {
    return 0x10;
}

s32 fn_80132A5C(void) {
    return 0;
}

void fn_80132CDC(void) {
    M2C_UNK fn_8000C188();
    fn_8000C188();
}

s32 fn_80134E40(void) {
    return 4;
}

s32 fn_80134FF0(void) {
    return 0;
}

s32 fn_80135074(void) {
    return 5;
}

s32 fn_8013507C(void) {
    return 0;
}

s32 fn_80136D78(void) {
    return 0x10;
}

s32 fn_80136D80(void) {
    return 0x20;
}

s32 fn_80136E68(void) {
    return 1;
}

s32 fn_80136E70(void) {
    return 8;
}

s32 fn_80136E78(void) {
    return 0x10;
}

s32 fn_80136F24(void) {
    return 6;
}

void fn_801378E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

void fn_80137EA0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
}

s32 fn_80138AB8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void fn_8013B308(void) {

}

void fn_8013B32C(void) {

}

s16 fn_8013B35C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xD4);
}

void fn_8013B594(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0xD4) = arg1;
}

void fn_8013B69C(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0xD4) = arg1;
}

s16 fn_8013B6A4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xD4);
}

s32 fn_8013C3AC(void) {
    return 0;
}

void fn_8013D13C(void) {

}

s32 fn_8013E380(void) {
    return 0x38;
}

s32 fn_8013E388(void) {
    return 0x62;
}

s32 fn_8013E390(void) {
    return 0x1C;
}

s32 fn_8013E450(void) {
    return 0;
}

s32 fn_8013E458(void) {
    return 0;
}

s32 fn_8013E460(void) {
    return 0x1C;
}

s32 fn_8013E468(void) {
    return 0x1C;
}

s32 fn_8013E470(void) {
    return 0x1C;
}

void fn_8013E4BC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) | arg1);
}

u8 fn_8013E4CC(void *arg0, s32 arg1) {
    return (u8) (M2C_FIELD(arg0, u8 *, 9) & arg1);
}

void fn_8013E4DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 fn_8013E588(void) {
    return 0x1C;
}

s16 fn_8013E63C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

s16 fn_8013E644(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xC);
}

s32 fn_8013E64C(void) {
    return 0x3B;
}

s16 fn_8013E654(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xE);
}

f32 fn_8013E65C(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x18);
}

s16 fn_8013E664(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xA);
}

s16 fn_8013E66C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 8);
}

s32 fn_8013E674(void) {
    return 0x68;
}

s16 fn_8013E67C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x20);
}

s16 fn_8013E6D8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x16);
}

s16 fn_8013E6E0(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x12);
}

s16 fn_8013E6E8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x14);
}

s16 fn_8013E6F0(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1C);
}

s32 fn_8013E824(void) {
    return 1;
}

s16 fn_8013E82C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1E);
}

s16 fn_8013E834(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x1E);
}

s16 fn_8013EED8(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA));
}

s16 fn_8013EEEC(void *arg0) {
    return (s16) (M2C_FIELD(arg0, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x14));
}

void fn_8013F3C0(void) {

}

void fn_8013F3C4(void) {

}

void fn_8013F3C8(void) {

}

void fn_8013F3CC(void) {

}

s32 fn_8013FBC0(s32 arg0) {
    return arg0 + 0x12;
}

void fn_8013FBC8(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 fn_8013FBD4(s32 arg0) {
    return arg0 + 0xA;
}

void fn_8013FC64(void) {

}

void fn_8013FEC0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) - 1);
}

void fn_8013FED0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) + 1);
}

void fn_8013FEE0(void) {
    extern u8 lbl_80367AD8;
    lbl_80367AD8 -= 1;
}

void fn_801402C4(void) {
    M2C_UNK fn_80141B00();
    fn_80141B00();
}

void fn_801402E4(void) {
    M2C_UNK fn_80141D94();
    fn_80141D94();
}

s32 fn_80140B04(s32 arg0) {
    return arg0 + 4;
}

void fn_801426B4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x40) = 0;
}

void fn_80144688(void) {

}

s32 fn_8014468C(void) {
    return 0;
}

void fn_80144694(void) {

}

void fn_801447A4(void *arg0, s32 arg1) {
    extern s32 lbl_80367AE0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x3C) = arg1;
    lbl_80367AE0 = arg1;
}

s32 fn_80144850(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x128), s32 *, 0x3C);
}

void fn_80144B1C(void **arg0, void *arg1) {
    M2C_FIELD(*arg0, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    *M2C_FIELD(arg1, void ***, 4) = *arg0;
}

void fn_80144B5C(void) {

}

s32 fn_80144D74(s32 arg0) {
    return arg0 + 4;
}

void fn_80144D7C(void) {

}

void fn_80144D80(void) {

}

void fn_8014517C(void) {
    M2C_UNK fn_800B2CCC();
    fn_800B2CCC();
}

s32 fn_80146AE4(void) {
    extern s32 lbl_80367AF8;
    return lbl_80367AF8 & 1;
}

void fn_80146AF0(void) {
    extern s32 lbl_80367AF8;
    lbl_80367AF8 &= 0xFFFFFFFE;
}

s32 fn_80149B3C(void) {
    return 0;
}

void fn_80149DB0(void) {

}

void fn_80149E50(void) {

}

void fn_80149E54(void) {

}

void fn_80149E58(void) {

}

void fn_80149E5C(void) {

}

void fn_80149E60(void) {

}

void fn_80149E64(void) {

}

void fn_80149E68(void) {

}

s32 fn_80149E6C(void) {
    return 0;
}

void fn_80149E74(void) {

}

u8 fn_80149E78(void **arg0) {
    return M2C_FIELD(*arg0, u8 *, 6);
}

void fn_80149ECC(void) {

}

void fn_80149ED0(void) {

}

void fn_80149ED4(void) {

}

void fn_80149ED8(void) {

}

void fn_80149EDC(void) {

}

u8 fn_80149EE0(void **arg0) {
    return M2C_FIELD(*arg0, u8 *, 7);
}

s32 fn_80149F10(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

s32 fn_80149F1C(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 8);
}

void fn_80149F28(void) {

}

void fn_80149F2C(void) {

}

s32 fn_80149F30(void) {
    return -1;
}

