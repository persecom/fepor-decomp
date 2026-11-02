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

void __end_critical_region(void) {

}

void __begin_critical_region(void) {

}

void __kill_critical_regions(void) {

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

void fn_8024C5C8(void) {

}

u8 fn_8025ED80(void) {
    extern u8 lbl_80368978;
    return lbl_80368978;
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

void fn_802622F4(void) {

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

s32 fn_80262B14(s32 arg0) {
    return arg0 - 0x500;
}

void fn_80266FFC(void) {

}

void fn_80267000(void) {

}

