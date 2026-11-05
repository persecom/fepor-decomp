/* Functions from 0x801101D0 to 0x80120CC0, found by decomp-toolkit. */
#include "common.h"

// Global data for this function
u8 lbl_8028FDB0[0x10] = { 0 };
u8 lbl_80292230[0x28] = { 0 };
u8 lbl_802921E0[0x28] = { 0 };

extern f32 lbl_8036A1E8;
extern f32 lbl_8036A1F8;

extern u8 lbl_80367A48;

u8 fn_80110220(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A7);
}

void fn_80112DFC(void *arg0, u8 arg1) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
    if (temp_r3 != NULL) {
        if (arg1 != 0) {
            *temp_r3 |= 0x80;
            return;
        }
        *temp_r3 &= 0xFFFFFF7F;
    }
}

u8 fn_80112F3C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A4);
}

void fn_80113648(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x128) = farg0;
}

f32 fn_80113650(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x128);
}

void fn_8011386C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14C) = -1;
}

s32 fn_80113878(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x19C) != 0;
}

u8 fn_8011388C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1B4);
}

s32 fn_80113894(void *arg0) {
    u8 fn_8019906C(s32);
    s32 fn_80199114(s32);
    if ((fn_8019906C(M2C_FIELD(arg0, s32 *, 0x11C)) != 0) && (fn_80199114(M2C_FIELD(arg0, s32 *, 0x11C)) != -1)) {
        return 1;
    }
    return 0;
}

void fn_801138E8(void *arg0) {
    M2C_UNK fn_801990A4(s32);
    fn_801990A4(M2C_FIELD(arg0, s32 *, 0x11C));
}

void fn_8011390C(void *arg0) {
    M2C_UNK fn_801990DC(s32);
    fn_801990DC(M2C_FIELD(arg0, s32 *, 0x11C));
}

u8 fn_80113F68(void *arg0) {
    extern f32 lbl_8036A184;
    return (u8) (lbl_8036A184 != M2C_FIELD(arg0, f32 *, 0x104));
}

s32 fn_80116604(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x11C);
}

void fn_8011660C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1B8) = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1B8) > 1) {
        M2C_FIELD(arg0, s8 *, 0x1A4) = 1;
        M2C_FIELD(arg0, s8 *, 0x1A5) = 1;
    }
}

void fn_8011662C(void *arg0, s32 arg1) {
    s32 fn_80165B04(s32);
    s32 fn_80165B0C(s32);
    M2C_UNK fn_801C4468(s32);
    M2C_UNK fn_801C6008(s32);
    s32 temp_r3;

    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1CC) = fn_80165B0C(arg1);
        M2C_FIELD(arg0, s32 *, 0x1D0) = fn_80165B04(arg1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1CC) == 2) {
            fn_801C4468(M2C_FIELD(arg0, s32 *, 0xE0));
        }
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1CC);
        if (((temp_r3 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) == 1)) || ((temp_r3 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) == 3))) {
            fn_801C6008(M2C_FIELD(arg0, s32 *, 0xE0));
        }
    }
}

s32 fn_80117CC0(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + arg1;
}

void fn_80117F1C(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    M2C_UNK fn_8013FEC0();
    fn_8013FEC0();
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x48));
}

void fn_80117F54(s32 arg0) {
    extern u16 lbl_802EF4C8[];
    
    void fn_8013FED0(void);
    void fn_8007D064(s32, s32, s32);

    fn_8013FED0();
    fn_8007D064((s32)lbl_802EF4C8[0], arg0, 0);
}

void fn_801181D0(void) {
    M2C_UNK fn_80006198();
    M2C_UNK fn_80006220(M2C_UNK);
    fn_80006220(0xE);
    fn_80006198();
}

void fn_80118388(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_800A8400();
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_80118404(s32 arg0) {
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_8011843C(s32 arg0) {
    M2C_UNK fn_8013FED0();
    M2C_UNK fn_801AA120(s32);
    fn_8013FED0();
    fn_801AA120(arg0);
}

void fn_80118470(s32 arg0) {
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801184A8(s32 arg0) {
    M2C_UNK fn_8016B730(s32);
    fn_8013FED0();
    fn_8016B730(arg0);
}

void fn_8011A2FC(s32 arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    s32 temp_r31;
    
    // Call fn_8013FF94 with parameters 0x40 and 0
    temp_r3 = fn_8013FF94(0x40, 0);
    
    // Check if return value is zero
    if (temp_r3 == 0) {
        // Call fn_800C42D8 with parameter 0x3C
        temp_r31 = fn_800C42D8(0x3C);
        
        // Check if the return value is not null
        if (temp_r31 != 0) {
            // Setup for structure initialization - load the addresses of our globals
            temp_r4 = (s32)&lbl_8028FDB0;
            temp_r5 = (s32)&lbl_80292230;
            temp_r6 = (s32)&lbl_802921E0;
            
            // Initialize structure fields
            *(u32*)temp_r31 = temp_r4;
            *(u32*)(temp_r31 + 4) = 0;
            *(u32*)(temp_r31 + 0x0) = temp_r5;
            
            *(s16*)(temp_r31 + 8) = -1;
            *(s16*)(temp_r31 + 0xa) = 0;
            *(s16*)(temp_r31 + 0xc) = 0;
            *(s16*)(temp_r31 + 0xe) = 0x260;
            *(s16*)(temp_r31 + 0x10) = 0x1C0;
            *(s16*)(temp_r31 + 0x12) = 0;
            *(s16*)(temp_r31 + 0x14) = 0;
            *(s16*)(temp_r31 + 0x16) = 0x260;
            *(s16*)(temp_r31 + 0x18) = 0x1C0;
            *(s16*)(temp_r31 + 0x1a) = 0;
            *(s16*)(temp_r31 + 0x1c) = 0;
            
            *(u8*)(temp_r31 + 0x1e) = 0xFF;
            *(u8*)(temp_r31 + 0x1f) = 0xFF;
            *(u8*)(temp_r31 + 0x20) = 0xFF;
            *(u8*)(temp_r31 + 0x21) = 0xFF;
            *(s16*)(temp_r31 + 0x22) = 0x316;
            *(s16*)(temp_r31 + 0x24) = 0;
            
            *(f32*)(temp_r31 + 0x28) = 1.0f;
            *(f32*)(temp_r31 + 0x2c) = 1.0f;
            *(f32*)(temp_r31 + 0x30) = 1.0f;
            
            *(u32*)(temp_r31 + 0x34) = 0;
            *(u32*)(temp_r31 + 0x38) = 0;
            
            // Update the base address
            *(u32*)temp_r31 = temp_r6;
            
            // Continue initialization
            *(s16*)(temp_r31 + 8) = 0x40;
            *(u8*)(temp_r31 + 0x24) = 8;
            *(f32*)(temp_r31 + 0x2c) = 0.0f;
            
            // Call fn_801400F4 with parameters
            temp_r5 = *(u32*)(temp_r31 + 0x34);
            temp_r5 = temp_r5 | 0x10;
            *(u32*)(temp_r31 + 0x34) = temp_r5;
            
            fn_801400F4(arg0, (void*)temp_r31, temp_r5);
            fn_80140234(arg0, (void*)temp_r31, 1);
        }
    }
}

void fn_8011AB98(void) {
    M2C_UNK fn_801620AC();
    M2C_UNK fn_8005C8B4();
    M2C_UNK fn_80162018();
    fn_801620AC();
    fn_8005C8B4();
    fn_80162018();
}

void fn_8011AE2C(void *arg0) {
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_80050C90(s32);
    fn_8003816C(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, u8 *, 0x58), M2C_FIELD(arg0, u8 *, 0x59));
    fn_80050C90(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_8011B2EC(void) {
    M2C_UNK fn_800F20E0();
    M2C_UNK fn_800F214C();
    fn_800F214C();
    fn_800F20E0();
}

void fn_8011B570(void) {

}

void fn_8011B574(void) {

}

s32 fn_8011B578(void) {
    return 0xB0;
}

void fn_8011B580(void *arg0, void *arg1) {
    s8 temp_r31;
    void *temp_r3;
    void **temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    s32 (*func_ptr)(void) = (s32 (*)(void))temp_r4[0x7C / 4];
    
    temp_r31 = (s8) M2C_FIELD(arg1, u8 *, 0x60);
    func_ptr();
    temp_r3 = M2C_FIELD(arg1, void **, 0x3C);
    fn_8008C1D8(0, 0, 0, (temp_r31 * M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s16 (**)(void *), 0x58)(temp_r3)) + 0x20, 2);
}

void fn_8011B5FC(void *arg0, void *arg1) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 fn_800102BC(M2C_UNK, f32, f32);
    M2C_UNK fn_80071D28();
    M2C_UNK fn_8008AB7C(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern f32 lbl_8036A1E8;
    extern f32 lbl_8036A234;
    extern f32 lbl_8036A238;
    extern f32 lbl_8036A23C;
    f32 temp_f2;
    s16 temp_r31;
    s32 temp_r29;
    s32 temp_r30;

    fn_80071D28();
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(void *, void *), 0x7C)(arg0, arg1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A234);
    fn_8000A248();
    temp_f2 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0);
    temp_r29 = (s32) (lbl_8036A238 * temp_f2);
    temp_r30 = fn_800102BC(-1, lbl_8036A1E8, temp_f2) >> 1;
    temp_r31 = M2C_FIELD(arg1, s16 *, 0x3A);
    fn_8008AB7C(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0) >> 1, temp_r31 + temp_r30, temp_r29, 0x17, 0xA, 0x28, 1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A23C);
    fn_8000A248();
}

s16 fn_8011B710(void *arg0) {
    s16 (*func)(void) = (s16 (*)(void)) M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x50);
    s16 temp_r3 = func();
    return (0x260 - temp_r3) >> 1;
}

s32 fn_8011B74C(void) {
    return 0x40;
}

void fn_8011B978(void) {
    extern u32 lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x357);
}

void *fn_8011B9A4(void) {
    extern u16 lbl_80274508[];
    return &lbl_80274508[0x364 / sizeof(u16)];
}

u8 fn_8011B9B4(void) {
    extern u8 lbl_80367A48;
    return (u8) (lbl_80367A48 == 0x88);
}

void *fn_8011BB24(void) {
    extern u8 lbl_80274508;
    return &lbl_80274508 + 0x38F;
}

void *fn_8011BD34(void) {
    extern u8 lbl_80274508;
    return &lbl_80274508 + 0x3C6;
}

u8 fn_8011BD44(void) {
    extern u8 lbl_80367A48;
    return (u8) (lbl_80367A48 == 0x86);
}

s32 fn_8011BD58(void) {
    extern s8 lbl_802EF4C8[];
    return lbl_802EF4C8[0x1F];
}

void *fn_8011BD9C(void) {
    extern M2C_UNK lbl_80274508;
    return &lbl_80274508 + 0x3D8;
}

u8 fn_8011BDAC(void) {
    extern u8 lbl_80367A48;
    u8 temp = lbl_80367A48;
    temp = 0x85 - temp;
    return (u8) __builtin_clz(temp) >> 24;
}

extern s8 lbl_802EF4C8[];
s32 fn_8011BDC0(void) {
    lbl_802EF4C8[8] = 0x85;
    return 5;
}

void fn_8011BDD8(void *arg0) {
    extern u32 lbl_80274508;
    fn_8000E0E4((u32*)((s8*)&lbl_80274508 + 0x3E1));
}

void *fn_8011BE14(void) {
    extern void *lbl_80274508;
    return (char *)&lbl_80274508 + 0x3F0;
}

s32 fn_8011BE60(void) {
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0x84;
    return 5;
}

void fn_8011BE78(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x402);
}

void *fn_8011BEA4(void) {
    extern void *lbl_80274508;
    return (char *)&lbl_80274508 + 0x412;
}

u8 fn_8011BEB4(void) {
    extern u8 lbl_80367A48;
    u8 temp = lbl_80367A48;
    temp = 0x83 - temp;
    return (u8) __builtin_clz(temp) >> 24;
}

void fn_8011BEE0(void) {
    extern u8 lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x41D);
}

void *fn_8011BF0C(void) {
    extern u8 lbl_80274508;
    return &lbl_80274508 + 0x429;
}

u8 fn_8011BF1C(void) {
    u8 temp = lbl_80367A48;
    temp = 0x82 - temp;
    return (__builtin_clz(temp) & 0x1F);
}

void fn_8011BF48(void) {
    extern u8 lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x435);
}

void *fn_8011BF74(void) {
    extern u8 lbl_80274508[];
    return &lbl_80274508[0x442];
}

u8 fn_8011BF84(void) {
    extern u8 lbl_80367A48;
    u8 temp = lbl_80367A48;
    temp = 0x81 - temp;
    return (u8) __builtin_ctz(temp);
}

s32 fn_8011BF98(void) {
    *(u8*)((u32)&lbl_802EF4C8 + 8) = 0x81;
    return 5;
}

void fn_8011BFB0(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern u8 lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x44F);
}

void *fn_8011BFDC(void) {
    extern u8 lbl_80274508;
    return &lbl_80274508 + 0x45C;
}

u8 fn_8011BFEC(void) {
    extern u8 lbl_80367A48;
    u8 temp = lbl_80367A48;
    temp = 0x80 - temp;
    return (u8) __builtin_clz(temp);
}

s32 fn_8011C000(void) {
    lbl_802EF4C8[8] = 0x80;
    return 5;
}

s32 fn_8011C5B4(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367A50;
    fn_800D758C(lbl_80367A50);
    return 0;
}

void fn_8011C9A8(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 0xEC) = arg1;
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xF4);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF8);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xEC);
    if (temp_r5 >= (s32) (temp_r6 + temp_r4)) {
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) ((temp_r5 - temp_r4) + 1);
        return;
    }
    if (temp_r5 < temp_r6) {
        M2C_FIELD(arg0, s32 *, 0xF4) = temp_r5;
    }
}

s32 fn_8011C9E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xEC);
}

s32 fn_8011C9EC(s32 arg0) {
    return arg0 + 0xAC;
}

void fn_8011CB18(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0xC8);
}

void fn_8011CB2C(void *arg0) {
    M2C_UNK (*temp_r12)();

    M2C_FIELD(arg0, s8 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0xC8);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0xFC);
    if (temp_r12 != NULL) {
        temp_r12();
    }
}

void fn_8011DCB4(void) {
    M2C_UNK fn_8008A290(M2C_UNK, M2C_UNK);
    fn_8008A290(2, 0x10B);
}

void fn_8011DCDC(void *arg0) {
    fn_8008A290(3, M2C_FIELD(arg0, s16 *, 0x68));
}

void fn_8011DD08(void *arg0) {
    s32 fn_8008A56C();
    if (fn_8008A56C() & 2) {
        if (fn_8008A56C() & 4) {
            M2C_FIELD(arg0, s8 *, 0x64) = 2;
            return;
        }
        if (fn_8008A56C() & 8) {
            M2C_FIELD(arg0, s8 *, 0x64) = 5;
            return;
        }
        goto block_5;
    }
block_5:
    fn_8008A290(3, M2C_FIELD(arg0, s16 *, 0x68));
    M2C_FIELD(arg0, s8 *, 0x64) = 2;
}

void fn_801207BC(void) {
    extern s32 lbl_80367110;
    extern u16 lbl_80367A58;
    lbl_80367A58 &= 0xFFFFFFFB;
    lbl_80367110 |= 2;
}

