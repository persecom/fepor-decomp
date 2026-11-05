/* Functions from 0x801EAA2C to 0x801F18D4, found by decomp-toolkit. */
#include "common.h"

void fn_801EAA2C(s8 *arg0) {
    *arg0 = -1;
}

void fn_801EAC14(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    fn_8013FEC0();
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x54));
}

void fn_801EAFB4(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_800A8400();
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801EAFEC(s32 arg0) {
    M2C_UNK fn_8013FED0();
    M2C_UNK fn_801AA120(s32);
    fn_8013FED0();
    fn_801AA120(arg0);
}

void fn_801EB020(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_800A8400();
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801EB058(s32 arg0) {
    M2C_UNK fn_8013FED0();
    M2C_UNK fn_8016B730(s32);
    fn_8013FED0();
    fn_8016B730(arg0);
}

void fn_801EBE60(void) {
    M2C_UNK fn_801620AC();
    M2C_UNK fn_8005C8B4();
    M2C_UNK fn_80162018();
    fn_801620AC();
    fn_8005C8B4();
    fn_80162018();
}

void fn_801EBF7C(void) {
    M2C_UNK fn_800F20E0();
    M2C_UNK fn_800F214C();
    fn_800F214C();
    fn_800F20E0();
}

void fn_801EBFA0(void) {

}

void fn_801EBFA4(void) {

}

s32 fn_801EBFA8(void) {
    return 0xB0;
}

s32 fn_801EC17C(void) {
    return 0x60;
}

void fn_801EC370(void) {
    extern u16 lbl_8027EE08[];
    s32 offset = 0x9B0; // Calculated from the address: 0x1258 - 0x8A8 = 0x9B0
    fn_8000E0E4(&lbl_8027EE08[offset]);
}

void *fn_801EC39C(void) {
    extern u16 lbl_8027EE08;
    return (void*)(((u32)&lbl_8027EE08) + 0x4f2);
}

u8 fn_801EC3AC(void) {
    extern u8 lbl_803683B8;
    return (u8) (lbl_803683B8 == 0x86);
}

s32 fn_801EC3C0(void *arg1) {
    extern u16 lbl_802EF4C8;
    *(u8*)((char*)arg1 + 0x18) = 1;
    *(u8*)((char*)&lbl_802EF4C8 + 8) = 0x86;
    return 5;
}

void fn_801EC4F0(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4(&lbl_8027EE08[0x534]);
}

void *fn_801EC51C(void) {
    extern u16 lbl_8027EE08[];
    void *ptr = &lbl_8027EE08[0x2A2];
    return ptr;
}

void fn_801EC558(void) {
    extern u16 lbl_8027EE08;
    u16* tmp = &lbl_8027EE08;
    fn_8000E0E4(tmp + 0x2AB);
}

void *fn_801EC584(void) {
    extern u16 lbl_8027EE08[];
    return &lbl_8027EE08[0xAD0];
}

void fn_801EC5C0(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4(&lbl_8027EE08[0xAF4]);
}

void *fn_801EC5EC(void) {
    extern u16 lbl_8027EE08[];
    return &lbl_8027EE08[0x2CD];
}

void fn_801EC628(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4(&lbl_8027EE08[0x2D8 / sizeof(u16)]);
}

void *fn_801EC654(void) {
    extern u16 lbl_8027EE08[];
    return (void *)&lbl_8027EE08[0x2E4];
}

void fn_801EC690(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4(&lbl_8027EE08[0x2F0 / sizeof(u16)]);
}

void *fn_801EC6BC(void) {
    extern u16 lbl_8027EE08[];
    return &lbl_8027EE08[0x5FB];
}

s32 fn_801EC6CC(void) {
    return 2;
}

void fn_801EC74C(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4(&lbl_8027EE08[0x63A]);
}

void *fn_801EC778(void) {
    extern u16 lbl_8027EE08[];
    return &lbl_8027EE08[0x65C];
}

void fn_801EC7B4(void) {

}

void fn_801ED7D0(void *arg0) {
    s32 fn_8005E55C();
    M2C_FIELD(arg0, s32 *, 0x58) = fn_8005E55C();
}

void fn_801ED838(void) {
    extern s32 lbl_803683D0;
    lbl_803683D0 -= 1;
}

void fn_801EDAC8(void *arg0) {
    M2C_UNK fn_80169714(s32);
    M2C_UNK fn_8016978C(s32);
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x38);
    switch ((s32) temp_r0) {                        /* irregular */
    case 2:
        fn_80169714(M2C_FIELD(arg0, s32 *, 0x18));
        fn_8000C070(arg0, 0x63);
        return;
    case 3:
        fn_8016978C(M2C_FIELD(arg0, s32 *, 0x18));
        fn_8000C070(arg0, 0x63);
        return;
    }
}

void fn_801EDB38(void *arg0) {
    u8 temp_r0;

    temp_r0 = *(u8 *)((char *)arg0 + 0x38);
    if ((s32) temp_r0 >= 4) {
        return;
    }
    if ((s32) temp_r0 >= 2) {
        fn_8016969C();
    }
}

void fn_801EDEC8(void *arg0) {
    extern s32 lbl_80367110;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (lbl_80367110 & 4);
    lbl_80367110 |= 4;
}

void fn_801EE018(void *arg0) {
    extern u16 lbl_8032FF08[192];
    s16 temp_r5;

    temp_r5 = *(s16 *)((char *)arg0 + 0x3A);
    fn_80148980((u8 *)&lbl_8032FF08 + (temp_r5 * 0x30), 0x3E8, temp_r5);
}

void fn_801EE098(void) {
    M2C_UNK fn_80146B00();
    M2C_UNK fn_801478D0(M2C_UNK);
    M2C_UNK fn_80147FA8(M2C_UNK);
    fn_80147FA8(0x3E8);
    fn_801478D0(0x3E8);
    fn_80146B00();
}

void fn_801EED74(void) {
    M2C_UNK fn_801EE0C8();
    fn_801EE0C8();
}

void fn_801EED94(void) {
    M2C_UNK fn_801EE76C();
    fn_801EE76C();
}

void fn_801F09E8(void) {
    M2C_UNK fn_801F0BC4();
    fn_801F0BC4();
}

void fn_801F109C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) < 0) {
        fn_8000C188();
    }
}

void fn_801F10D4(void) {
    extern u16 lbl_8027F26C[];
    fn_8000E0E4(&lbl_8027F26C[0x1088 / sizeof(u16)]);
}

s32 fn_801F1100(void) {
    return 0;
}

s32 fn_801F1108(void) {
    return 0;
}

void fn_801F16A0(void *arg0) {
    extern u16 lbl_8029A710[];
    void fn_8000E0E4(s32);
    u8 val = *(u8*)((uintptr_t)arg0 + 4);
    s32 index = val * 4;
    s32 ptr = (s32)&lbl_8029A710[index];
    fn_8000E0E4(ptr);
}

s32 fn_801F16D4(void *arg2) {
    extern u16 lbl_802EF4C8;
    u16* ptr = &lbl_802EF4C8;
    *(u8*)((u8*)ptr + 0x14) = *(u8*)((u8*)arg2 + 0x3A);
    return 5;
}
#include "common.h"
extern u16 lbl_8029A5FC;
