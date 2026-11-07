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
    M2C_UNK fn_80036150(M2C_UNK *);
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_8019BCC0(s8, s8, s32);
    M2C_UNK fn_801A49AC(M2C_UNK *, u8, M2C_UNK *);
    M2C_UNK fn_801A7794(M2C_UNK *, s32, s32, M2C_UNK *);
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_80330EAC;
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

void *fn_801A46BC(void *arg0, void *arg1) {
    M2C_UNK fn_80029E58(void *, void *);
    void *sp8;
    
    sp8 = (void *)fn_80029E58(arg0, arg1);
    return sp8;
}

void fn_801A4958(void *arg0) {
    s32 *field_cac = (s32 *)((u8 *)arg0 + 0xCAC);
    *field_cac = *field_cac | 4;
    fn_801A601C(arg0, (u8 *)arg0 + 0x2E0, 0);
    fn_80034068((u8 *)arg0 + 0x8A0, 0x54, 0);
}

void fn_801A7CDC(void *arg0)
{
    fn_801A9EB8(arg0);
    fn_801A9EB8((char *)arg0 + 0x2E0);
    fn_801A9EB8((char *)arg0 + 0x5C0);
    fn_800340F0((char *)arg0 + 0x8A0);
    *(s32 *)((char *)arg0 + 0xCA8) = 0;
    *(s32 *)((char *)arg0 + 0xCAC) = 0;
    *(s32 *)((char *)arg0 + 0xCB0) = 0;
    *(s32 *)((char *)arg0 + 0xCB4) = 0;
    *(s32 *)((char *)arg0 + 0xCBC) = 0;
    *(s32 *)((char *)arg0 + 0xCC0) = 0;
}

#include "global.h"
extern u16 lbl_802EF4C8;
extern s32 lbl_802EF4E0;
