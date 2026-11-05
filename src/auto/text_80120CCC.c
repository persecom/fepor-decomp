/* Functions from 0x80120CCC to 0x80127D80, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 field_0x84;
} SomeStruct;

void fn_80120CCC(u16 *arg0) {
    *arg0 &= ~0x130;
}

void fn_80120E4C(void *arg0) {
    f32 fn_800067BC(u32, u8, u8, u8, f32, f32, f32, f32);
    
    M2C_FIELD(arg0, u8 *, 0x36) = (u8) (M2C_FIELD(arg0, u8 *, 0x36) + 1);
    {
        u8 temp_r7 = M2C_FIELD(arg0, u8 *, 0x34);
        u8 temp_r5 = M2C_FIELD(arg0, u8 *, 0x35);
        u8 temp_r4 = M2C_FIELD(arg0, u8 *, 0x36);
        
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0x41) = (s8) fn_800067BC(0, temp_r4, temp_r5, temp_r7, 
            (f32) temp_r7, (f32) temp_r5, (f32) temp_r4, (f32) M2C_FIELD(arg0, u8 *, 0x37));
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0x36) == (u8) M2C_FIELD(arg0, u8 *, 0x37)) {
        fn_8000C188(arg0);
    }
}

void fn_80121328(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x4E) = (u8) (M2C_FIELD(arg0, u8 *, 0x4E) + 1);
}

void fn_80121338(void *arg0) {
    f32 fn_800067BC(M2C_UNK, u8, u8, u8, f32, f32, f32, f32);
    
    u8 temp_r7 = M2C_FIELD(arg0, u8 *, 0x4C);
    u8 temp_r5 = M2C_FIELD(arg0, u8 *, 0x4D);
    u8 temp_r4 = M2C_FIELD(arg0, u8 *, 0x4E);
    
    // The function call seems complex but essentially this is just doing some math operations
    M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (s32) fn_800067BC(0, temp_r4, temp_r5, temp_r7, (f32) temp_r7, (f32) temp_r5, (f32) temp_r4, (f32) M2C_FIELD(arg0, u8 *, 0x4F));
    
    // Set the other fields to zero/8
    M2C_FIELD(arg0, u8 *, 0x4D) = 0U;
    M2C_FIELD(arg0, u8 *, 0x4E) = 0U;
    M2C_FIELD(arg0, u8 *, 0x4F) = 8U;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg0, u8 *, 0x4F);
}

void fn_801213EC(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0x4C) = 0;
    *(u8 *)((u8 *)arg0 + 0x4D) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x4E) = 0;
    *(u8 *)((u8 *)arg0 + 0x4F) = 8;
    *(s16 *)((u8 *)arg0 + 0x28) = (u8)*(u8 *)((u8 *)arg0 + 0x4F);
}

void fn_80121414(void) {
    extern u8 lbl_8032BDE8[];
    s32 r9;
    s32 var_ctr;
    s32 r3, r4, r5, r6;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    *(u32 *)(&lbl_8032BDE8[0x4000]) = 0;
    *(u32 *)(&lbl_8032BDE8[0x4004]) = 0;
    *(u8 *)(&lbl_8032BDE8[0x400C]) = 0;

    var_ctr = 0x20;
    r9 = 0;
    do {
        temp_r3 = ((r9 + 0x100) << 6);
        temp_r4 = ((r9 + 0x105) << 6);
        temp_r5 = ((r9 + 0x106) << 6);
        temp_r6 = ((r9 + 0x107) << 6);

        *(u8 *)(&lbl_8032BDE8[temp_r3 & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[((r9 + 0x101) << 6) & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[((r9 + 0x102) << 6) & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[((r9 + 0x103) << 6) & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[temp_r4 & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[temp_r5 & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[temp_r6 & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[((r9 + 0x104) << 6) & 0x3FC0]) = 0;

        r9 += 8;
        var_ctr -= 1;
    } while (var_ctr != 0);
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

void fn_80122170(u32 *arg0) {
    u32 temp_r3;
    
    // Direct read of the 16-bit value at offset 0x4000
    if ((*(u16 *)((u8 *)arg0 + 0x4000) & 0x4000) == 0) {
        *(u32 *)((u8 *)arg0 + 0x4000) = (*(u32 *)((u8 *)arg0 + 0x4000) | 0x40000000);
    }
}

u8 fn_801229C4(void *arg0) {
    return (u8) ((s8) M2C_FIELD(arg0, u8 *, 0x45) <= ((s8) M2C_FIELD(arg0, u8 *, 0x47) - (s8) M2C_FIELD(arg0, u8 *, 0x46)));
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

void fn_80122C84(void *arg0) {
    s32* var_r30;
    s32 var_r29;

    var_r30 = (s32*)arg0;
    var_r29 = 0;
    do {
        fn_800C428C(*var_r30);
        *var_r30 = 0;
        var_r29 += 1;
        var_r30 += 1;
    } while (var_r29 < 5);
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

void fn_8012323C(void* arg0) {
    if (arg0 != NULL) {
        s32 val = *(s32*)((u8*)arg0 + 0x84);
        if (val != 0x24) {
            *(s32*)((u8*)arg0 + 0x84) = 0;
        } else {
            fn_80238638(arg0, 1); // call to helper function
            *(s32*)((u8*)arg0 + 0x84) = 0;
        }
    }
}

void fn_801232F4(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x70) = farg0;
    M2C_FIELD(arg0, f32 *, 0x74) = farg1;
}

void fn_80123300(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
}

void fn_80123634(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(), 0x38)();
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x70);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x74));
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x70);
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (M2C_FIELD(arg0, f32 *, 0x6C) == temp_f1_2) {
            M2C_FIELD(arg0, f32 *, 0x6C) = temp_f1_2;
        }
    } else if (temp_f1 > temp_f0) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x74));
        temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x70);
        M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
        if (M2C_FIELD(arg0, f32 *, 0x6C) == temp_f1_3) {
            M2C_FIELD(arg0, f32 *, 0x6C) = temp_f1_3;
        }
    }
}

void fn_8012391C(void *arg0) {
    void *fn_8000C0C0(M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_8000C60C();
    M2C_UNK fn_80123988(void *);
    extern M2C_UNK lbl_80290408;
    extern u8 lbl_8036728A;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_80290408, &lbl_80290408);
    if ((temp_r3 == NULL) || ((s32) M2C_FIELD(temp_r3, s32 *, 0x34) != (s32) lbl_8036728A)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            fn_8000C60C();
        }
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        fn_80123988(arg0);
    }
}

void fn_80123BE8(void) {

}

void fn_80123BEC(void *arg0) {
    u32 *ptr = (u32 *) ((char *) arg0 + 0x30);
    if (*ptr != 0) {
        fn_8000C60C();
    }
    *ptr = 0;
}

void fn_80123C2C(void *arg0) {
    extern void *fn_80123D1C;
    extern s32 fn_8006785C(s32, void **, void *);
    extern s32 fn_80124424(void *);
    extern s32 fn_800AA188(void);
    
    // This is very basic - let's examine the structure carefully
    if (*(u8*)((u8*)arg0 + 0x4D) != 0) {
        fn_8006785C(2, &fn_80123D1C, arg0);
        goto block_4;
    }
    if (fn_800AA188() != 0) {
        fn_8006785C(2, &fn_80123D1C, arg0);
block_4:
        fn_80124424(arg0);
    }
}

void fn_80123CFC(void) {
    M2C_UNK fn_801246FC();
    fn_801246FC();
}

void fn_80125AE0(void *arg0) {
    void *fn_80040844(f64, f32, f32);
    M2C_UNK fn_80059F64(f32, f32, f32, f32);
    f64 fn_80238638();
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A398;
    extern f32 lbl_8036A39C;
    extern f64 lbl_8036A3A0;
    extern f64 lbl_8036A3A8;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f3;
    f64 temp_f1_2;

    if (fn_800AA188() != 0) {
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + M2C_FIELD(arg0, f32 *, 0x34));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C);
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (temp_f1 == lbl_8036A398) {
            M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (temp_f1 - lbl_8036A398);
        }
        fn_80059F64(lbl_8036A30C, lbl_8036A39C, lbl_8036A398, M2C_FIELD(arg0, f32 *, 0x4C));
        temp_f3 = (f32) fn_80238638();
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x30);
        temp_f1_2 = (f64) temp_f2 * (lbl_8036A3A0 + (f64) temp_f3);
        temp_f31 = (f32) (temp_f1_2 * lbl_8036A3A8);
        M2C_FIELD(M2C_FIELD(fn_80040844(temp_f1_2, temp_f2, temp_f3), void **, 0x30), f32 *, 0x48) = temp_f31;
    }
}

void fn_80125B94(void *arg0) {
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A35C;
    extern f32 lbl_8036A3B0;
    *(f32*)((char*)arg0 + 0x4c) = lbl_8036A30C;
    *(f32*)((char*)arg0 + 0x34) = lbl_8036A3B0;
    *(f32*)((char*)arg0 + 0x30) = lbl_8036A35C;
}

void fn_80125E5C(void *arg0) {
    u8 fn_800AA188();
    if (fn_800AA188() != 0) {
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x4C));
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3C) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x50));
    }
}

void fn_80125EB8(void *arg0) {
    if (fn_800AA188() != 0) {
        M2C_FIELD(arg0, u8 *, 0x49) = (u8) (M2C_FIELD(arg0, u8 *, 0x49) + 1);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x49) >= 0x80U) {
            M2C_FIELD(arg0, u8 *, 0x49) = 0x80U;
            fn_8000C188(arg0);
        }
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x4C));
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3C) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x50));
    }
}

void fn_80125FC8(void *arg0) {
    extern u8 lbl_80125BB0[];
    fn_80040844();
    fn_800462FC(0, lbl_80125BB0);
    fn_8006D8E8(((s32*)arg0)[0x15]);
}

void fn_8012600C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_8012601C(void *arg0) {
    extern s32 lbl_80367110;
    fn_80088F34();
    lbl_80367110 = ((s32*)arg0)[0x1B];
}

void fn_80126050(void) {
    extern u8 lbl_80367A6C;
    fn_8000C070(lbl_80367A6C);
}

void fn_80126074(void *arg0) {
    extern s32 lbl_80367110;
    extern u8 lbl_80367A6C;
    extern u8 lbl_8032FE48[];
    extern u8 lbl_802905F8[];
    
    ((s32*)arg0)[0x1B] = lbl_80367110;
    fn_80088F34();
    lbl_80367A6C = 0x63;
    fn_80024398(lbl_8032FE48, arg0, 0);
    fn_8000CAF0(lbl_802905F8, arg0);
}

void fn_801260D4(void) {
    extern s32 lbl_80367110;
    lbl_80367110 &= 0xFFFFFF7F;
}

extern u8 lbl_80290480[16];
void fn_80126184(void) {
    fn_8000BF00(&lbl_80290480);
}

void fn_80126204(u16 *arg0) {
    *arg0 &= 0xEDFF;
}

u8 fn_80126830(void) {
    extern u8 lbl_80330708[];
    u8 temp = lbl_80330708[0x9D];
    temp = (temp >> 1) & 1;
    temp = (temp == 0);
    return temp;
}

void fn_8012684C(s8 arg0) {
    extern u8 lbl_80330708[];
    lbl_80330708[0xA5] = arg0;
    fn_80199818(&lbl_80330708[0x9C], &lbl_80330708);
}

u8 fn_8012687C(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA5];
}

void fn_8012688C(s8 arg0) {
    extern u16 lbl_80330708;
    *(u8*)(((char*)&lbl_80330708) + 0xA8) = arg0;
}

void fn_8012689C(s32 arg0) {
    extern u8 lbl_80330708[1400];
    u8 *ptr = &lbl_80330708[0x9F];
    if (arg0 == 1) {
        *ptr |= 0x40;
    } else {
        *ptr &= ~0x40;
    }
}

void fn_801268D4(s32 arg0) {
    extern u8 lbl_80330708[1400];
    u8 *ptr = &lbl_80330708[0x9C];
    if (arg0 == 1) {
        *ptr |= 0x4;
    } else {
        *ptr &= ~0x4;
    }
}

void fn_8012690C(s32 arg0) {
    extern u16 lbl_80330708;
    u8 *temp = (u8 *) &lbl_80330708;
    if (arg0 == 1) {
        *temp |= 2;
    } else {
        *temp &= ~2;
    }
}

void fn_80126A98(s32 arg0) {
    extern u8 lbl_802EF4C8[24];
    extern u8 lbl_80330708[1400];
    extern u8 lbl_80275048[206];
    
    switch ((s32) lbl_802EF4C8[8]) {
    case 0x81:
        {
            u8 temp = lbl_80330708[0x9D];
            temp = temp & ~2;
            lbl_80330708[0x9D] = temp;
            fn_8011D79C(&lbl_80275048[0x42A], &lbl_80330708, 0);
        }
        break;
    case 0x80:
        {
            u8 temp = lbl_80330708[0x9D];
            temp = temp | 2;
            lbl_80330708[0x9D] = temp;
            fn_8011D650(&lbl_80330708, 1);
        }
        break;
    }
    fn_8000C188(arg0);
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

s32 fn_80127000(void) {
    M2C_UNK fn_8008D6D8(M2C_UNK);
    fn_8008D6D8(0);
    return 1;
}

s32 fn_80127054(void) {
    extern u16 lbl_80290510[];
    fn_8000CAF0(lbl_80290510, 4);
    return 0;
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

void fn_80127AC4(void) {
    extern u16 lbl_80275048[];
    
    fn_8000BD98(&lbl_80275048[0x472 >> 1]);
    fn_8000BD98(&lbl_80275048[0x50C >> 1]);
    fn_8000BD98(&lbl_80275048[0xE0 >> 1]);
    fn_8000BD98(&lbl_80275048[0x467 >> 1]);
    fn_8000BD98(&lbl_80275048[0x15B >> 1]);
    fn_8000BD98(&lbl_80275048[0x513 >> 1]);
    fn_8008D988();
    fn_8004A1F0();
    fn_80091858();
    fn_800162B8();
}

u8 fn_80127B50(s32 arg0) {
    s32 fn_8000C0C0(void*, void*);
    s32 fn_802342B8(s32, s32);
    s32 temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_80290480, &lbl_80290480);
    if (temp_r3 == 0) {
        return 0U;
    }
    return (u8) (fn_802342B8(arg0, temp_r3 + 0x30) == 0);
}

s32 fn_80127BA8(s32 arg0, s32 arg1) {
    s32 var_r3;
    s32 var_r4;
    s32 temp_r5;
    s32 temp_r6;

    if (arg0 != 0) {
        var_r3 = 0;
        var_r4 = 0;
        do {
            temp_r5 = arg1 + var_r4;
            temp_r6 = arg0 + var_r4;
            if (temp_r5 != temp_r6) {
                return 0;
            }
            ++var_r4;
        } while (var_r4 < arg0);
    }
    return 1;
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
#include "common.h"

extern f32 lbl_8036A278;
extern f32 lbl_8036A27C;
extern f32 lbl_8036A280;
extern f32 lbl_8036A284;
extern f32 lbl_8036A288;
extern f32 lbl_8036A28C;
extern f32 lbl_8036A290;
extern f32 lbl_8036A294;
extern f32 lbl_8036A298;
extern f64 lbl_8036A2A0;

extern s32 *fn_8018D900(s32);
extern void fn_80007124(void *);
extern void fn_80007668(s32 *);
extern void fn_800076AC(s32, s32, s32, s32);
extern void fn_80007790(f32, f32, f32, f32);
extern void fn_80007858(f32, f32);
extern void fn_80007884(void);
extern void fn_80007898(s32);
extern void fn_80009B8C(u8);
extern void fn_80009B98(void);
extern void fn_80009BC0(void *, s32);
extern void fn_80009D74(f32, f32, f32, f32);
extern void fn_8000A174(s32, s32);
extern void fn_8000A248(void);
extern void fn_8000A258(void);
extern void fn_80057020(u32);
extern void fn_80057860(s32);
extern s32 fn_80231D94(void *, void *, s32);
extern s32 fn_80234200(void *, s32);

void fn_80121D30(void);
#include "common.h"
extern f32 lbl_8036A30C;
extern f32 lbl_8036A35C;
extern f32 lbl_8036A3B8;
extern void *lbl_80274F74;
