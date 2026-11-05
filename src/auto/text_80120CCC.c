/* Functions from 0x80120CCC to 0x80127D80, found by decomp-toolkit. */
#include "common.h"

void fn_80120CCC(u16 *arg0) {
    *arg0 &= ~0x130;
}

void fn_80121328(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x4E) = (u8) (M2C_FIELD(arg0, u8 *, 0x4E) + 1);
}

void fn_801213EC(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0x4C) = 0;
    *(u8 *)((u8 *)arg0 + 0x4D) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x4E) = 0;
    *(u8 *)((u8 *)arg0 + 0x4F) = 8;
    *(s16 *)((u8 *)arg0 + 0x28) = (u8)*(u8 *)((u8 *)arg0 + 0x4F);
}

extern u8 lbl_8032BDE8[16];
void fn_80121A70(void) {
    fn_80121A98(&lbl_8032BDE8);
}

void fn_80121D30(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0, 0x33, 0x260, 0x177);
}

void fn_80122000(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x400C) == 0) {
        s32 temp_r4;
        s32 temp_r5;
        
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x4000);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4004);
        
        temp_r5 = (temp_r5 + 0x100) << 6;
        temp_r5 = temp_r5 & 0x3FC0;
        temp_r5 = temp_r5 + temp_r4;
        
        M2C_FIELD(arg0, u8 *, temp_r5) = 0;
        M2C_FIELD(arg0, s32 *, 0x4004) = 0;
        M2C_FIELD(arg0, s32 *, 0x4000) = (s32) (M2C_FIELD(arg0, s32 *, 0x4000) + 1);
        
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x4000);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4004);
        
        temp_r5 = (temp_r5 + 0x100) << 6;
        temp_r5 = temp_r5 & 0x3FC0;
        temp_r5 = temp_r5 + temp_r4;
        
        M2C_FIELD(arg0, u8 *, temp_r5) = 0;
        M2C_FIELD(arg0, u8 *, 0x400C) = 1;
    }
}

void fn_801229F8(void *arg0) {
    u8 temp_r4;

    M2C_FIELD(arg0, u8 *, 0x47) = (u8) (M2C_FIELD(arg0, u8 *, 0x47) + 1);
    temp_r4 = M2C_FIELD(arg0, u8 *, 0x47);
    if ((s8) temp_r4 > 0x60) {
        M2C_FIELD(arg0, u8 *, 0x47) = (u8) (temp_r4 - 0x40);
        M2C_FIELD(arg0, u8 *, 0x46) = (u8) (M2C_FIELD(arg0, u8 *, 0x46) - 0x40);
    }
}

void fn_80122DD0(void *arg0, s16 arg1, s16 arg2) {
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s16 *, 0x60) = arg1;
    }
    if (arg2 >= 0) {
        M2C_FIELD(arg0, s16 *, 0x62) = arg2;
    }
}

void fn_80122DEC(void *arg0, s32 arg1, s16 arg2, s16 arg3) {
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x60) = arg2;
    M2C_FIELD(arg0, s16 *, 0x62) = arg3;
}

void fn_80122DFC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x49) = arg1;
}

void fn_80122E04(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x4A) = arg1;
    M2C_FIELD(arg0, s8 *, 0x4B) = arg2;
}

void fn_80122E10(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x50) = arg1;
}

void fn_80122E18(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x45) = arg1;
}

void fn_80122E20(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x44) = arg1;
}

void fn_80122E28(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x4C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x4E) = arg2;
}

void fn_80122E34(void *arg0, u32 arg1) {
    s32 fn_80109180(u32, void *);
    if (arg1 != 0U) {
        M2C_FIELD(arg0, s32 *, 0x64) = fn_80109180(arg1, arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
}

void fn_801232F4(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x70) = farg0;
    M2C_FIELD(arg0, f32 *, 0x74) = farg1;
}

void fn_80123300(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
}

void fn_80123BE8(void) {

}

void fn_80123CFC(void) {
    M2C_UNK fn_801246FC();
    fn_801246FC();
}

void fn_80125E5C(void *arg0) {
    u8 fn_800AA188();
    if (fn_800AA188() != 0) {
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x4C));
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3C) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x50));
    }
}

void fn_8012600C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801260D4(void) {
    extern s32 lbl_80367110;
    lbl_80367110 &= 0xFFFFFF7F;
}

extern u8 lbl_80290480[16];
void fn_80126184(void) {
    fn_8000BF00(&lbl_80290480);
}

u8 fn_8012687C(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA5];
}

void fn_8012688C(s8 arg0) {
    extern u16 lbl_80330708;
    *(u8*)(((char*)&lbl_80330708) + 0xA8) = arg0;
}

void fn_80126C44(u16 *arg0, u16 arg1) {
    *arg0 = (*arg0 & ~0x130) | (arg1 & 0x130);
}

void fn_80126C54(u16 *arg0) {
    *arg0 = (*arg0 & ~0x130) | 0xD0;
}

s32 fn_80126C90(void) {
    M2C_UNK fn_8016969C();
    fn_8016969C();
    return 1;
}

s32 fn_80126CB4(void) {
    M2C_UNK fn_8000BCA4(void *);
    M2C_UNK fn_80169804();
    extern M2C_UNK lbl_80275048;
    fn_8000BCA4(&lbl_80275048 + 0x467);
    fn_80169804();
    return 1;
}

s32 fn_80126CE8(void) {
    M2C_UNK fn_8011AC44();
    fn_8011AC44();
    return 1;
}

s32 fn_80126D40(u8 arg0) {
    M2C_UNK fn_80105CEC(void *, u8);
    extern M2C_UNK lbl_80330708;
    fn_80105CEC(&lbl_80330708 + 0x84, arg0);
    return 1;
}

s32 fn_80126DB0(u8 arg0) {
    extern s32 lbl_80330708;
    void *r4 = &lbl_80330708 + 0x74;
    fn_80105CEC(r4, arg0);
    return 1;
}

s32 fn_80126E20(void) {
    M2C_UNK fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80290550;
    fn_8000CAF0(&lbl_80290550, 3);
    return 1;
}

s32 fn_80126EB0(s32 arg0, s32 arg1) {
    M2C_UNK fn_80013E24(s32);
    s8 fn_8005BA00();
    M2C_UNK fn_8005BA08(s8);
    M2C_UNK fn_8005C4C4(s32, M2C_UNK);
    s8 fn_800C4740();
    s8 temp_r31;

    temp_r31 = fn_8005BA00();
    fn_8005BA08(fn_800C4740());
    fn_80013E24(arg0);
    fn_8005C4C4(arg0, 4);
    fn_8003FCCC(arg1);
    fn_8005C4C4(arg1, 4);
    fn_8005BA08(temp_r31);
    return 1;
}

s32 fn_80126F34(void) {
    M2C_UNK fn_8005C7C8();
    fn_8005C7C8();
    return 1;
}

s32 fn_80126F58(void) {
    M2C_UNK fn_8003FCCC();
    fn_8003FCCC();
    return 1;
}

s32 fn_80126F7C(void) {
    M2C_UNK fn_8011D5EC();
    fn_8011D5EC();
    return 1;
}

s32 fn_80126FA0(s32 arg0) {
    u32 fn_8000BCA4(void *, M2C_UNK *);
    M2C_UNK fn_8011D87C(s32);
    M2C_UNK fn_8011D908(s32, M2C_UNK);
    extern M2C_UNK lbl_80275048;
    if (fn_8000BCA4(&lbl_80275048 + 0x472, &lbl_80275048) != 0U) {
        fn_8011D87C(arg0);
        return 1;
    }
    fn_8011D908(arg0, 0);
    return 1;
}

void fn_80127084(void) {
    M2C_UNK fn_800F1BFC();
    fn_800F1BFC();
}

void fn_80127150(void *arg0) {
    extern void *lbl_80367A68;
    if (((u8) M2C_FIELD(arg0, u8 *, 0x2D) == 0) && (M2C_FIELD(arg0, u8 *, 0x2C) & 2)) {
        lbl_80367A68 = arg0;
    }
}

void fn_80127594(void *arg0) {
    M2C_UNK fn_80109C1C(s32, M2C_UNK);
    fn_80109C1C(M2C_FIELD(arg0, s32 *, 0x30), 5);
}

void fn_80127C48(void) {
    fn_8000C0C0(&lbl_80290480);
}

void fn_80127C70(void) {

}

void fn_80127C74(void) {

}

void fn_80127C78(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    M2C_UNK fn_80013778(s32, s32);
    M2C_UNK fn_800138BC(s32);
    s32 fn_800142B8();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x58) != 0) {
        M2C_FIELD(arg0, u8 *, 0x58) = 0U;
        fn_80013778(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s32 *, 0x50));
    }
    fn_800138BC(M2C_FIELD(arg0, s32 *, 0x54));
    if (fn_800142B8() != 6) {
        fn_8000C188(arg0);
    }
}
extern u32 lbl_80367110;
