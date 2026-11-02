/* Functions from 0x8022CD68 to 0x80267A7C, found by decomp-toolkit. */
#include "common.h"

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

void fn_8024B420(s32 arg0) {
    M2C_UNK fn_80245188(s32);
    fn_8026372C();
    fn_80245188(arg0);
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

s32 fn_8025093C(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 fn_802509C8(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

s32 fn_80255E88(void *arg0) {
    M2C_FIELD(arg0, void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 8);
}

void fn_80257C04(void *arg0) {
    M2C_UNK fn_80257998();
    M2C_FIELD(arg0, s8 *, 1) = 0;
    fn_80257998();
}

void fn_80258D74(void) {
    M2C_UNK fn_80262410();
    fn_80262410();
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

void fn_80264B7C(void *arg0) {
    M2C_UNK fn_802649AC();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    fn_802649AC();
}

void fn_80266FFC(void) {

}

void fn_80267000(void) {

}

