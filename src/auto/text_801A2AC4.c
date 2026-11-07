/* Functions from 0x801A2AC4 to 0x801A7D3C, found by decomp-toolkit. */
#include "common.h"

s32 fn_801A2E68(void) {
    M2C_UNK fn_8002A084();
    extern s32 lbl_802EF4E0;
    fn_8002A084();
    return lbl_802EF4E0 != 0;
}

void fn_801A2EA0(s32 arg0) {
    extern u16 lbl_802EF4C8;
    s8 sp8;

    sp8 = 0x43;
    fn_80026770(&lbl_802EF4C8, &sp8);
    fn_800319E8(arg0);
}

s32 fn_801A2EEC(void) {
    extern u16 lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    s8 spC;
    u8 sp8;

    spC = 0x43;
    fn_80026770(&lbl_802EF4C8, &spC);
    sp8 = M2C_FIELD(&lbl_802EF4C8, u8 *, 0x13);
    fn_8002A784(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), &sp8);
    return lbl_802EF4E0 != 0;
}

u32 fn_801A2FE0(void) {
    extern void *lbl_8036C574;
    extern void *lbl_8036C5F4;

    *(void **)((char *)lbl_8036C574 + 0x20) = lbl_8036C5F4;
    return 0;
}

s32 fn_801A30B8(void) {
    return 1;
}

s32 fn_801A30C0(s32 arg0) {
    extern u16 lbl_802EF4C8;
    extern u16 lbl_80330EAC;

    fn_8003816C(M2C_FIELD(&lbl_802EF4C8, s32 *, 4), M2C_FIELD(&lbl_802EF4C8, u8 *, 0xF), M2C_FIELD(&lbl_802EF4C8, u8 *, 0x10));
    fn_801A7794(&lbl_80330EAC, M2C_FIELD(&lbl_802EF4C8, s32 *, 0), M2C_FIELD(&lbl_802EF4C8, s32 *, 4), &lbl_80330EAC);
    fn_801A49AC(&lbl_80330EAC, M2C_FIELD(&lbl_802EF4C8, u8 *, 0xA), &lbl_80330EAC);
    fn_80036150(&lbl_80330EAC);
    fn_8019BCC0((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xF), (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0x10), arg0);
    return 0;
}

extern u16 lbl_80330EAC[];
void fn_801A372C(void) {
    u16* temp_r31;
    
    temp_r31 = (u16*)lbl_80330EAC;
    fn_80104480(&temp_r31[0x242]); // 0x484 / 2
    fn_80104480((u16*)(((u8*)temp_r31) + 0x560) + 0x1A4); // Equivalent to the original instruction pattern
}
#include "global.h"
extern u16 lbl_802EF4C8;
extern s32 lbl_802EF4E0;
