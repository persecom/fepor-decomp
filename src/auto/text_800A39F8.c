/* Functions from 0x800A39F8 to 0x800A9384, found by decomp-toolkit. */
#include "common.h"
extern u8 lbl_8028C750[16];
extern u16 lbl_8026E408[];
extern void fn_802343E0(void *, s32);
extern void fn_80234450(void *, void *, void *);
extern u8 lbl_80312A80[0x30];


extern s32 lbl_803677A4;
s32 fn_800A3A04(s32 arg0, s32 arg1) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    fn_80024398(&lbl_803677A4, arg1, 0);
    return 0;
}

void *fn_800A3A30(void) {
    extern u8 lbl_8026E168[];
    return &lbl_8026E168[0x2E];
}

s32 fn_800A3D08(void) {
    extern M2C_UNK lbl_803123A0;
    if ((s32) M2C_FIELD(&lbl_803123A0, s32 *, 0xA0) != 0) {
        return M2C_FIELD(&lbl_803123A0, s32 *, 0x50);
    }
    return 0;
}

s32 fn_800A3D2C(void) {
    extern u16 lbl_803123A0[208];
    
    if (lbl_803123A0[0xA0/2] != 0) {
        u16* src = &lbl_803123A0[0x8C/2]; 
        memcpy(src, src, 0x10);
        return 1;
    }
    return 0;
}

s32 fn_800A3D74(void) {
    extern u16 lbl_803123A0[208]; // 416 bytes = 208 * 2-byte words
    
    if (lbl_803123A0[0x50] != 0) { // 0xA0/2 = 0x50, since it's u16*
        memcpy(&lbl_803123A0[0x40], &lbl_803123A0[0x40], 0xC); // 0x80/2 = 0x40, size 0xC in words
        return 1;
    }
    return 0;
}

s32 fn_800A45C4(void) {
    M2C_UNK fn_8020F334(M2C_UNK *);
    extern M2C_UNK lbl_803123A0;
    if (((s32) M2C_FIELD(&lbl_803123A0, s32 *, 0xA0) != 0) && ((u8) M2C_FIELD(&lbl_803123A0, u8 *, 0xA5) == 0)) {
        M2C_FIELD(&lbl_803123A0, s8 *, 0xA4) = 0;
        if ((u32) M2C_FIELD(&lbl_803123A0, u32 *, 0xB0) != 0U) {
            fn_8020F334(&lbl_803123A0);
            M2C_FIELD(&lbl_803123A0, u32 *, 0xB0) = 0U;
        }
        if (0 < 0xA) {
            M2C_FIELD(&lbl_803123A0, s32 *, 0xDC) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0xE8) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0xF4) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x100) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x10C) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x118) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x124) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x130) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x13C) = 0;
            M2C_FIELD(&lbl_803123A0, s32 *, 0x148) = 0;
        }
        M2C_FIELD(&lbl_803123A0, s32 *, 0x164) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x170) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x17C) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x158) = -1;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xA8) = (s32) M2C_FIELD(&lbl_803123A0, s32 *, 0x64);
        M2C_FIELD(&lbl_803123A0, s32 *, 0xBC) = (s32) M2C_FIELD(&lbl_803123A0, s32 *, 0x54);
        M2C_FIELD(&lbl_803123A0, s32 *, 0xB8) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xC0) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xAC) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0xB4) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x180) = 0;
        M2C_FIELD(&lbl_803123A0, s32 *, 0x184) = 0;
        M2C_FIELD(&lbl_803123A0, f32 *, 0xC4) = (f32) M2C_FIELD(&lbl_803123A0, f32 *, 0xC8);
        M2C_FIELD(&lbl_803123A0, s32 *, 0xD0) = 0;
        return 1;
    }
    return 0;
}

void fn_800A46CC(void) {
    extern u8 lbl_803123A0[];
    lbl_803123A0[0xA5] = 0;
}

void fn_800A46E0(void) {
    extern u8 lbl_803123A0[];
    lbl_803123A0[0xA5] = 1;
}

s32 fn_800A4BC4(void) {
    extern M2C_UNK lbl_803123A0;
    s32 temp_r0;
    s32 var_r4;
    u32 temp_r7;

    if ((s32) M2C_FIELD(&lbl_803123A0, s32 *, 0xA0) != 0) {
        temp_r7 = M2C_FIELD(&lbl_803123A0, s32 *, 0x80) * M2C_FIELD(&lbl_803123A0, s32 *, 0x84);
        temp_r0 = ((temp_r7 >> 2U) + 0x1F) & 0xFFFFFFE0;
        var_r4 = (((M2C_FIELD(&lbl_803123A0, s32 *, 0x44) + 0x1F) & 0xFFFFFFE0) * 0xA) + ((temp_r7 + 0x1F) & 0xFFFFFFE0) + temp_r0 + temp_r0;
        if ((u8) M2C_FIELD(&lbl_803123A0, u8 *, 0xA7) != 0) {
            var_r4 += (((M2C_FIELD(&lbl_803123A0, s32 *, 0x48) * 4) + 0x1F) & 0xFFFFFFE0) * 3;
        }
        return var_r4 + 0x1000;
    }
    return 0;
}

s32 fn_800A4C48(void) {
    extern u8 lbl_803123A0[416];
    
    if (((s32) *(u32*) (lbl_803123A0 + 0xA0)) != 0 &&
        ((u8) *(u8*) (lbl_803123A0 + 0xA4)) == 0) {
        if (((u8) *(u8*) (lbl_803123A0 + 0xA7)) != 0) {
            if (((u8) *(u8*) (lbl_803123A0 + 0xA5)) == 1) {
                return 0;
            }
            *(u8*) (lbl_803123A0 + 0xA5) = 0;
        }
        if (((u32) *(u32*) (lbl_803123A0 + 0xB0)) == 0U) {
            *(s32*) (lbl_803123A0 + 0xA0) = 0;
            fn_8020C79C();
            return 1;
        }
    }
    return 0;
}

void fn_800A4FF8(void) {
    s32 OSDisableInterrupts();
    M2C_UNK OSRestoreInterrupts(s32);
    M2C_UNK fn_8021371C(u32);
    extern s32 lbl_803677B0;
    extern u32 lbl_803677B8;
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    if ((u32) lbl_803677B8 != 0U) {
        fn_8021371C(lbl_803677B8);
    }
    OSRestoreInterrupts(temp_r31);
    lbl_803677B0 = 0;
}

void fn_800A57D8(void) {
    M2C_UNK fn_80220428(M2C_UNK);
    M2C_UNK fn_80222334(M2C_UNK);
    M2C_UNK fn_802239D0(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223D94(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223DDC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802240C8(M2C_UNK);
    M2C_UNK fn_802245D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80224684(M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80224684(1, 7, 1);
    fn_802245D8(0, 1, 0, 0xF);
    fn_80220428(1);
    fn_80222334(0);
    fn_802240C8(1);
    fn_80223F2C(0, 0, 0, 0xFF);
    fn_802239D0(0, 3);
    fn_80223D94(0, 0, 0);
    fn_80223D94(1, 0, 0);
    fn_80223D94(2, 0, 0);
    fn_80223D94(3, 0, 0);
    fn_80223DDC(0, 0, 1, 2, 3);
    fn_80223DDC(1, 0, 0, 0, 3);
    fn_80223DDC(2, 1, 1, 1, 3);
    fn_80223DDC(3, 2, 2, 2, 3);
}

void fn_800A58F0(s32 arg0) {
    u32 fn_8000BCA4(void *, M2C_UNK *);
    void *fn_8000CAF0(M2C_UNK *, u32, M2C_UNK *);
    extern M2C_UNK lbl_8026E1B0;
    extern M2C_UNK lbl_8028C6A8;

    u32 temp_r3;
    void *temp_r4;

    temp_r3 = fn_8000BCA4(&lbl_8026E1B0 + 0x15, &lbl_8026E1B0);
    if (temp_r3 != 0U) {
        temp_r4 = fn_8000CAF0(&lbl_8028C6A8, temp_r3, &lbl_8028C6A8);
        *(s32 *)((char *)temp_r4 + 0x30) = arg0;
    }
}

void fn_800A5944(s32 arg0) {
    M2C_UNK fn_8006EDA0(s32);
    fn_8006EDA0(arg0 + 0x34);
}

void fn_800A5BB4(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    s32 fn_8005C6A0(s32);
    M2C_UNK fn_8006EEFC(s32, s32);
    if (fn_8005C6A0(arg0 + 0x44) & 0x2000) {
        fn_8006EEFC(arg0 + 0x34, arg0 + 0x44);
        fn_8000C188(arg0);
    }
}

extern u16 lbl_802B9E80;
s32 fn_800A5C88(void) {
    extern u16 lbl_8028C678[];
    s32 v = fn_8000C0C0(lbl_8028C678);
    return v != 0;
}

void fn_800A5CBC(void) {
    extern u16 lbl_8028C678[];
    u32 temp_r3 = fn_8000C0C0(&lbl_8028C678[0]);
    if (temp_r3 != 0) {
        fn_8000C070(0x63);
    }
}

void fn_800A5CF4(void) {
    M2C_UNK fn_800A3A68(M2C_UNK, M2C_UNK);
    fn_800A3A68(0, 0x64);
}

void fn_800A6450(void) {
    extern void fn_8000D3EC(void *, void *);
    extern void fn_8010554C();
    extern void fn_80196078();

    extern u8 lbl_8026E208[];
    extern u8 lbl_8028C6D8[];

    // Replacing direct address loading with indirects that match more carefully
    fn_8000D3EC((u8*)&lbl_8026E208 + 0xCE, (u8*)&lbl_8028C6D8 + 0x18);
    fn_8000D3EC((u8*)&lbl_8026E208 + 0xE0, (u8*)&lbl_8028C6D8 + 0x28);
    fn_8000D3EC((u8*)&lbl_8026E208 + 0xEF, (u8*)&lbl_8028C6D8 + 0x38);
    fn_8000D3EC((u8*)&lbl_8026E208 + 0x101, (u8*)&lbl_8028C6D8 + 0x48);
    fn_8000D3EC((u8*)&lbl_8026E208 + 0x113, (u8*)&lbl_8028C6D8 + 0x58);
    fn_8000D3EC((u8*)&lbl_8026E208 + 0x125, (u8*)&lbl_8028C6D8 + 0x68);
    fn_8000D3EC((u8*)&lbl_8026E208 + 0x139, (u8*)&lbl_8028C6D8 + 0x68);
    fn_8010554C();
    fn_80196078();
}

void fn_800A65A4(s32 arg0) {
    M2C_UNK fn_80183BE4(s32, s32, s32 *);
    extern s32 lbl_802EF4C8;
    fn_80183BE4(lbl_802EF4C8, arg0, &lbl_802EF4C8);
}

s32 fn_800A65D4(s32 arg0) {
    u8 fn_80105BC0(s32, M2C_UNK);
    if (fn_80105BC0(arg0 + 0x1BC, 8) == 0) {
        return 0;
    }
    return fn_80105BC0(arg0 + 0x1BC, 9) == 0;
}

s32 fn_800A66B4(void) {
    s32 fn_801044E0(s32);
    extern s32 lbl_802EF4C8;
    extern u8 lbl_80367289;
    u8 temp_r0;
    u8 var_r4;

    var_r4 = 1;
    temp_r0 = lbl_80367289 - 1;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r4 = 0;
    }
    if (var_r4 == 0) {
        return 0;
    }
    return fn_801044E0(lbl_802EF4C8 + 0x1A4);
}

s32 fn_800A6720(s32 arg0) {
    extern u16 lbl_802EF4C8[12];
    extern u8 lbl_80330EAC[3268];
    fn_801A75DC(&lbl_80330EAC, *(s32*)(&lbl_802EF4C8), -1);
    fn_801A4714(&lbl_80330EAC, lbl_802EF4C8[5], &lbl_80330EAC);
    lbl_80330EAC[0x1A6] = (u8) (lbl_80330EAC[0x1A6] | 0xE0);
    fn_8019CA24(arg0, 0, &lbl_80330EAC);
    return 1;
}

void fn_800A67A4(void) {
    extern u16 lbl_802EF4C8;
    void fn_801044C4(s32);
    s32 val = (s32)(*(u16*)&lbl_802EF4C8);
    fn_801044C4(val + 0x1A4);
}

s32 fn_800A67D4(s32 arg0) {
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];
    
    fn_801A75DC(lbl_80330EAC, *(s32*)lbl_802EF4C8, -1);
    fn_801A4714(lbl_80330EAC, lbl_802EF4C8[5], lbl_80330EAC);
    fn_8010446C(lbl_80330EAC + 0x1A4);
    fn_8019CA6C(arg0, 0);
    return 1;
}

s32 fn_800A6850(void *arg0) {
    return (((u8) M2C_FIELD(arg0, u8 *, 0x1A4) >> 5U) & 7) != 0;
}

s32 fn_800A6868(s32 arg0) {
    M2C_UNK fn_8019C994(s32, M2C_UNK);
    M2C_UNK fn_801A47B0(M2C_UNK *, u8, M2C_UNK, M2C_UNK *);
    M2C_UNK fn_801A75DC(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_80330EAC;
    fn_801A75DC(&lbl_80330EAC, M2C_FIELD(&lbl_802EF4C8, s32 *, 0), -1);
    fn_801A47B0(&lbl_80330EAC, M2C_FIELD(&lbl_802EF4C8, u8 *, 0xA), 0x7F, &lbl_80330EAC);
    fn_8019C994(arg0, 0);
    return 1;
}

s32 fn_800A68D8(void *arg0) {
    s8 fn_8003B2D0();
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 0x1A8);
    return (s8) temp_r31 < fn_8003B2D0();
}

s32 fn_800A6990(void *arg0) {
    s8 fn_8003B2D0();
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 0x1A8);
    return (s8) temp_r31 < fn_8003B2D0();
}

s32 fn_800A69D8(s32 *arg0, s32 *arg1) {
    extern void *fn_8000C0C0(void *, void *);
    
    void *temp_r3;
    
    temp_r3 = fn_8000C0C0(lbl_8028C750, lbl_8028C750);
    if (temp_r3 != NULL) {
        *arg0 = *(s16 *)((u8 *)temp_r3 + 0x44);
        *arg1 = *(s16 *)((u8 *)temp_r3 + 0x46);
        return 1;
    }
    return 0;
}

void fn_800A6A3C(void) {
    if (fn_8000C0C0(&lbl_8028C750) != 0U) {
        fn_8000C070(7);
    }
}

void fn_800A6A74(void) {
    u32 temp_r3 = fn_8000C0C0(&lbl_8028C750);
    if (temp_r3 != 0) {
        fn_8000C070(0x6);
    }
}

void fn_800A6AAC(void) {
    extern u8 lbl_8028C750[16];
    u32 fn_8000C0C0(u16 *arg);

    if (fn_8000C0C0((u16 *)&lbl_8028C750) != 0U) {
        void fn_8000C070(s32 arg);
        fn_8000C070(5);
    }
}

void fn_800A6AE4(void) {
    u32 temp_r3 = fn_8000C0C0(lbl_8028C750);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 4);
    }
}

extern u8 lbl_8028C750[16];
void fn_800A6B1C(void) {
    fn_8000BF00(&lbl_8028C750);
}

void fn_800A6D78(void *arg0) {
    extern f32 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    f32 temp_f0;
    f32 temp_f1;
    void *var_r0;
    u8 temp_r4_2;
    
    // Load floating point values from lbl_80330708
    temp_f1 = lbl_80330708[0x524 / 4];
    temp_f0 = lbl_80330708[0x528 / 4];
    
    // Convert to integers and store in stack
    *(s32*)((char*)arg0 + 0x8) = (s32)temp_f1;
    *(s32*)((char*)arg0 + 0x10) = (s32)temp_f0;
    
    // Load bytes from lbl_802CA518
    temp_r4_2 = lbl_802CA518[0xC];
    temp_r0 = lbl_802CA518[0x10];
    
    // Sign extend the bytes (convert to signed 32-bit)
    temp_r4_2 = (s8)temp_r4_2;
    temp_r0 = (s8)temp_r0;
    
    // Calculate address
    temp_r4 = (s32)&lbl_802CA518;
    temp_r5 = (s32)&lbl_802B14E4;
    
    // Add the base address with the byte values (as offsets)
    temp_r4 += temp_r4_2;
    temp_r0 <<= 6;  // Shift left by 6 bits (multiply by 64)
    temp_r4 += temp_r0;
    
    // Load byte from calculated address + offset 0xD
    temp_r4_2 = *(u8*)((char*)temp_r4 + 0xD);
    
    if (temp_r4_2 != 0) {
        temp_r0 = (temp_r4_2 - 1) * 0x280;
        var_r0 = (void*)((char*)&lbl_802B14E4 + temp_r0);
    } else {
        var_r0 = NULL;
    }
    
    *(void**)((char*)arg0 + 0x30) = var_r0;
    *(s16*)((char*)arg0 + 0x36) = -1;
    
    if (var_r0 == NULL) {
        fn_8000C070(6);
    }
}

void fn_800A6E20(void *arg0) {
    extern f32 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];

    s32 temp_r3;
    void *var_r30;

    f32 temp_f1 = lbl_80330708[0x524 / 4];
    f32 temp_f0 = lbl_80330708[0x528 / 4];
    s32 temp_r31 = (s32)temp_f1;
    s32 temp_r30_2 = (s32)temp_f0;
    
    temp_r3 = lbl_802CA518[(temp_r31 + (temp_r30_2 << 6)) + 0xD];
    if (temp_r3 != 0) {
        var_r30 = &lbl_802B14E4[(temp_r3 - 1) * 0x280];
    } else {
        var_r30 = NULL;
    }
    
    if (var_r30 != NULL) {
        void **ptr = (void **)arg0;
        if (*ptr == NULL) {
            fn_8000C070(arg0, 2);
        }
        if (*ptr != var_r30) {
            *((s16 *)arg0 + 0x36/2) = -1;
        }
        *ptr = var_r30;
        return;
    }
    
    if (*(void **)arg0 != NULL) {
        fn_8000C070(arg0, 3);
    }
}

void fn_800A6F10(void *arg0) {
    extern M2C_UNK lbl_802B14E4;
    extern M2C_UNK lbl_802CA518;
    extern M2C_UNK lbl_80330708;
    u8 temp_r4;
    void *var_r4;

    temp_r4 = M2C_FIELD((&lbl_802CA518 + (s8) M2C_FIELD(&lbl_80330708, f32 *, 0x524) + ((s8) M2C_FIELD(&lbl_80330708, f32 *, 0x528) << 6)), u8 *, 0xD);
    if (temp_r4 != 0) {
        var_r4 = &lbl_802B14E4 + ((temp_r4 - 1) * 0x280);
    } else {
        var_r4 = NULL;
    }
    if (var_r4 != NULL) {
        M2C_FIELD(arg0, u8 *, 0x39) = (u8) M2C_FIELD(arg0, u8 *, 0x3B);
        M2C_FIELD(arg0, u8 *, 0x38) = (u8) M2C_FIELD(arg0, u8 *, 0x3A);
        M2C_FIELD(arg0, void **, 0x30) = var_r4;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x39) = 0U;
    M2C_FIELD(arg0, u8 *, 0x38) = 0U;
    M2C_FIELD(arg0, void **, 0x30) = NULL;
}

void fn_800A6FB8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x39) = 0;
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x36) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_800A6FD4(void *arg0) {
    u32 *field_40 = (u32*)((char*)arg0 + 0x40);
    if (*field_40 != 0) {
        fn_8006D8E8();
    }
    *field_40 = 0;
}

void fn_800A7014(void *arg0) {
    void fn_80055C8C(void *, void *, void *, void *, int, int);
    void fn_80059208(void *, void *);
    extern u16 lbl_8026E378[];
    extern void fn_800A70A0(void);
    extern void fn_800A70DC(void);

    M2C_FIELD(arg0, s16 *, 0x36) = -1;
    M2C_FIELD(arg0, u8 *, 0x38) = 0;
    M2C_FIELD(arg0, u8 *, 0x39) = 0;
    M2C_FIELD(arg0, u8 *, 0x3A) = 0xE0;
    M2C_FIELD(arg0, u8 *, 0x3B) = 4;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x44) = -1;
    M2C_FIELD(arg0, s16 *, 0x46) = -1;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    fn_80055C8C(&lbl_8026E378[0x28 / sizeof(u16)], &fn_800A70A0, arg0, &lbl_8026E378, 0, -1);
    fn_80059208(&fn_800A70DC, arg0);
}

void fn_800A7EC0(void) {

}

void fn_800A828C(s32 arg0) {
    fn_8006EDA0(arg0 + 0x30);
}

void fn_800A82B0(void *arg0) {
    s32 fn_800067B4();
    M2C_UNK fn_800076AC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80007770(s32, f32, f32, f32, f32);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007870(f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_80009F90(s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369B60;
    extern f32 lbl_80369B64;
    extern f32 lbl_80369B68;
    extern f32 lbl_80369B6C;
    extern f32 lbl_80369B70;
    extern f32 lbl_80369B74;
    extern f32 lbl_80369B78;
    extern f32 lbl_80369B7C;
    extern f32 lbl_80369B80;
    f32 temp_f2;
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (fn_800067B4() & 0x3FF);
    fn_8000A258();
    fn_80009D74(lbl_80369B60, lbl_80369B60, lbl_80369B64, lbl_80369B68);
    fn_80009F90(M2C_FIELD(arg0, s32 *, 0x30), 0, 0);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369B60, lbl_80369B60, lbl_80369B6C, lbl_80369B70);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_f2 = lbl_80369B74 * (f32) temp_r3;
    fn_80007770(temp_r3, lbl_80369B60, temp_f2, lbl_80369B68, lbl_80369B78 + temp_f2);
    fn_80007870(lbl_80369B7C);
    fn_80007884();
    fn_8000A258();
    fn_80009F90(M2C_FIELD(arg0, s32 *, 0x30), 1, 0x30);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369B60, lbl_80369B60, lbl_80369B6C, lbl_80369B70);
    fn_800076AC(0x32, 0x32, 0x32, 0);
    fn_80007870(lbl_80369B80);
    fn_80007884();
}

s32 fn_800A83C8(void) {
    extern u16 lbl_8026E3C0[8];
    s32 result = fn_8000BCA4(&lbl_8026E3C0[0x38 / 2]);
    return result != 0;
}

void fn_800A8400(void) {
    M2C_UNK fn_8009A514();
    M2C_UNK fn_800A6A3C();
    M2C_UNK fn_8018DB4C();
    fn_8009A514();
    fn_800A6A3C();
    fn_8018DB4C();
}

void fn_800A8428(void) {
    M2C_UNK fn_8009A54C();
    M2C_UNK fn_800A6A74();
    M2C_UNK fn_8018DB90();
    fn_8009A54C();
    fn_800A6A74();
    fn_8018DB90();
}

void fn_800A8450(void) {
    M2C_UNK fn_8009A584();
    M2C_UNK fn_800A6AAC();
    M2C_UNK fn_8018DC18();
    fn_8009A584();
    fn_800A6AAC();
    fn_8018DC18();
}

void fn_800A8478(void) {
    M2C_UNK fn_8009A5BC();
    M2C_UNK fn_800A6AE4();
    M2C_UNK fn_8018DC58();
    fn_8009A5BC();
    fn_800A6AE4();
    fn_8018DC58();
}

void fn_800A84A0(void) {
    M2C_UNK fn_8009A5F4();
    M2C_UNK fn_800A6B1C();
    M2C_UNK fn_8018DC98();
    fn_8009A5F4();
    fn_800A6B1C();
    fn_8018DC98();
}

void fn_800A84C8(s32 arg0) {
    M2C_UNK fn_8018DCC0(s32);
    M2C_UNK fn_800A6B44(s32);
    M2C_UNK fn_8009A61C();
    fn_8009A61C();
    fn_800A6B44(arg0);
    fn_8018DCC0(arg0);
}

s32 fn_800A883C(void *arg0, s32 arg1) {
    u8 r0;
    if (arg1 != 0) {
        r0 = *(u8 *)((u8 *)arg0 + 0x43) & 0xF;
    } else {
        r0 = (*(u8 *)((u8 *)arg0 + 0x43) >> 4) & 0xF;
    }
    *(u8 *)((u8 *)arg0 + 0x8) = r0;
    return r0 << 0x18;
}

s32 fn_800A886C(u8 arg0, u8 arg1) {
    switch (arg0) {
    case 0:
    case 8:
        return 0x10;
    case 1:
        return 0x11;
    case 2:
        return 0x12;
    case 3:
        return 0x13;
    case 4:
        return 0x15;
    case 5:
        return 0x17;
    case 6:
        return 0x16;
    case 7:
        if (arg1) {
            return 0x18;
        } else {
            return 0x14;
        }
    }
    return 0;
}

u8 *fn_800A88E0(void *arg0) {
    fn_80234450(lbl_80312A80, &lbl_8026E408[0x2C], lbl_80312A80);
    fn_802343E0(lbl_80312A80, *(s32*)((char*)arg0 + 0xC) + 4);
    return lbl_80312A80;
}

void *fn_800A893C(void *arg0) {
    void *result;

    if (arg0 == NULL) {
        result = &lbl_8026E408[0x5F];
    } else {
        result = (void *)fn_8000E0E4();
    }
    
    return result;
}

s32 fn_800A8978(void *arg0) {
    s32 fn_8000E0E4(s32);
    if (fn_8000D354(M2C_FIELD(arg0, s32 *, 4)) != 0U) {
        return fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
    }
    return M2C_FIELD(arg0, s32 *, 0);
}

void *fn_800A89C0(void *arg0) {
    M2C_UNK memset(M2C_UNK, M2C_UNK);
    M2C_FIELD(arg0, s16 *, 0x3A) = 0;
    memset(0, 0x64);
    return arg0;
}

s32 fn_800A8A00(s32 *arg0) {
    s32 strchr(s32, M2C_UNK);
    return strchr(*arg0, 0x5F) + 1;
}

s32 fn_800A8A2C(s32 arg0) {
    memset((void*)arg0, 0, 0x64);
    return arg0;
}

void fn_800A8A64(void *arg0) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 8));
}

void fn_800A8AE4(s32 arg0) {
    extern u16 lbl_8026E470[];
    fn_8006EDA0(arg0 + 0x30);
    fn_8005C7C8(&lbl_8026E470[0x58 / sizeof(u16)]);
}

void fn_800A8BD8(void *arg0) {
    extern u16 *lbl_80367240;
    extern u8 lbl_8026E470[];
    
    if (lbl_80367240[2] & 0x1100) {
        fn_801475FC((u8 *)&lbl_8026E470 + 0x82, 0x64);
        fn_801481CC((u8 *)&lbl_8026E470 + 0x73, 0x1F4);
        ((u8 *)arg0)[0x38] = 1;
        fn_8000C070(arg0, 2);
    }
}

void fn_800A90B4(void) {
    M2C_UNK fn_80148618(void *, M2C_UNK);
    extern M2C_UNK lbl_8026E470;
    fn_80148618(&lbl_8026E470 + 0x73, 0x1F4);
}

void fn_800A90E4(s32 arg0) {
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_8026E470;
    extern void *lbl_80367240;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3) & 0x1F70) {
        fn_801475FC(&lbl_8026E470 + 0x82, 0x64);
        fn_8000C188(arg0);
    }
}

extern void *D_800E53FC;
void fn_800A9174(void) {
    D_800E53FC = 0;
    return;
}

void fn_800A9274(s32 arg0) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803677EC;
    fn_80024398(&lbl_803677EC, arg0, 0);
}

void fn_800A92A0(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_800A92C4(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 0);
}

void fn_800A92F0(void) {
    extern u16 lbl_8026E470[];
    fn_8005C7C8(&lbl_8026E470[0x58 / sizeof(u16)]);
}

void fn_800A931C(s32 arg0) {
    M2C_UNK fn_8005BCD0();
    M2C_UNK fn_8005C84C(void *, M2C_UNK *);
    void *fn_80109180(void *, s32);
    extern M2C_UNK lbl_8026E470;
    extern f32 lbl_80369BA8;
    extern f32 lbl_80369C08;
    extern f32 lbl_80369C10;
    void *temp_r3;

    fn_8005C84C(&lbl_8026E470 + 0x58, &lbl_8026E470);
    fn_8005BCD0();
    temp_r3 = fn_80109180(&lbl_8026E470 + 0x96, arg0);
    M2C_FIELD(temp_r3, f32 *, 0x40) = (f32) lbl_80369C08;
    M2C_FIELD(temp_r3, f32 *, 0x44) = (f32) lbl_80369BA8;
    M2C_FIELD(temp_r3, f32 *, 0x48) = (f32) lbl_80369C10;
}

#include "common.h"
extern u16 lbl_8026E168[];
extern void *D_800E53FC;
extern void *lbl_8026E470;
extern f32 lbl_80369BA8;
extern f32 lbl_80369C0C;
extern f32 lbl_80369BB0;
extern u8 lbl_802842B8[];
extern u8 lbl_802842A4[];
