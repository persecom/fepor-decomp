/* Functions from 0x801AE3F8 to 0x801B3220, found by decomp-toolkit. */
#include "common.h"

void fn_801AE498(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_801AE73C(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_8027BD18;
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    s32 temp_r4;
    u8 var_r3;

    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 4);
        if (temp_r4 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4) & 0x300) {
            fn_801475FC(&lbl_8027BD18 + 0x36E, 0x64);
            fn_8000C188(arg0);
        }
    }
}

void fn_801AE7C0(void *arg0) {
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x50));
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x88);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801AE81C(void *arg0) {
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x58));
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x88);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801AE878(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    s32 fn_8013AC54(s32);
    M2C_UNK fn_8013AD70(s32, s32);
    void **fn_8013FF94(M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_80330708;
    s32 temp_r31;
    void **temp_r30;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x54);
    temp_r30 = fn_8013FF94(0xA, 0);
    fn_8013AD70(temp_r31, M2C_FIELD(&lbl_80330708, s32 *, 0xB0));
    M2C_FIELD(*temp_r30, M2C_UNK (**)(void **, s32), 0x34)(temp_r30, fn_8013AC54(temp_r31));
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x68));
}

void fn_801AF148(void *arg0) {
    s32 *fn_8013FF94(void *, s32, s32, void *);
    void *fn_8013BC10(s32, s32);
    void fn_80024398(void *, s32, s32);
    void fn_801658DC(s32);

    void *temp_r3;
    void *temp_r6;
    s32 temp_r31;

    temp_r3 = fn_8013BC10(0, 0);
    *(u16*)((u8*)temp_r3 + 0x8) = 0x178;
    *(u16*)((u8*)temp_r3 + 0xA) = 0x3C;
    *(u8*)((u8*)temp_r3 + 0x24) = 1;
    fn_80024398(arg0, 0, 0x3C);
    temp_r6 = *(void**)((u8*)arg0 + 0x6C);
    temp_r31 = *(s32*)((u8*)temp_r6 + 0x8C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0) {
        fn_801658DC(temp_r31);
    }
}

void fn_801B1C60(void) {

}

void fn_801B2644(void *arg0) {
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0xC));
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x6C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801B27A0(void *arg0) {
    extern f32 lbl_8036B0B8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x30) = (f32) lbl_8036B0B8;
}

