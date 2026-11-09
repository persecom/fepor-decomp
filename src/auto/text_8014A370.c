/* Functions from 0x8014A370 to 0x8014E350, found by decomp-toolkit. */
#include "common.h"
extern u8 lbl_80367B08;
extern u8 lbl_80367B09;
extern u8 lbl_80367B0A;
extern u8 lbl_80367B0B;
extern u16 lbl_80292F60[];
extern f32 lbl_8036A7D0;
extern f32 lbl_8036A7D4;
extern f32 lbl_8036A7D8;
extern f32 lbl_8036A7DC;
extern f32 lbl_8036A7E0;
extern f64 lbl_8036A7E8;
extern u8 lbl_80367B0C;
extern u8 lbl_80367B0D;

s32 fn_8014A370(void) {
    return 0x10;
}

s32 fn_8014A378(void) {
    return 0x10;
}

s32 fn_8014A380(void) {
    return 0x10;
}

void *fn_8014A388(void) {
    extern u16 lbl_80276F00[];
    return &lbl_80276F00[0x132];
}

void *fn_8014A398(void) {
    extern const u16 lbl_80276F00[];
    return (void*)(((u32)&lbl_80276F00[0xC6]));
}

s32 fn_8014A3A8(void) {
    extern M2C_UNK lbl_8032FF08;
    extern M2C_UNK lbl_803301A8;
    u8 var_r28;
    u8 var_r28_2;
    u8 var_r30;
    u8 var_r31;
    void *temp_r29;
    void *temp_r29_2;

    var_r28 = 0;
    do {
        var_r30 = 0;
        temp_r29 = &lbl_8032FF08 + (var_r28 * 0x30);
        if ((M2C_FIELD(temp_r29, u8 *, 0xC) & 1) && (M2C_FIELD(M2C_FIELD(temp_r29, void **, 8), u8 (**)(void *), 8)(temp_r29) != 0)) {
            var_r30 = 1;
        }
        if (var_r30 != 0) {
            M2C_FIELD(M2C_FIELD(temp_r29, void **, 8), M2C_UNK (**)(void *), 0x10)(temp_r29);
        }
        var_r28 += 1;
    } while ((s32) var_r28 < 4);
    var_r28_2 = 0;
    do {
        var_r31 = 0;
        temp_r29_2 = &lbl_803301A8 + (var_r28_2 * 0x30);
        if ((M2C_FIELD(temp_r29_2, u8 *, 0xC) & 1) && (M2C_FIELD(M2C_FIELD(temp_r29_2, void **, 8), u8 (**)(void *), 8)(temp_r29_2) != 0)) {
            var_r31 = 1;
        }
        if (var_r31 != 0) {
            M2C_FIELD(M2C_FIELD(temp_r29_2, void **, 8), M2C_UNK (**)(void *), 0x10)(temp_r29_2);
        }
        var_r28_2 += 1;
    } while ((s32) var_r28_2 < 0x1C);
    return 0;
}

void *fn_8014A4C8(void) {
    extern char lbl_80276F00[];
    return &lbl_80276F00[0xCF];
}

s32 fn_8014A4D8(void) {
    return 2;
}

s32 fn_8014A4E0(void) {
    return 0;
}

void *fn_8014A4E8(void) {
    extern M2C_UNK lbl_80276F00;
    return &lbl_80276F00 + 0xDE;
}

void *fn_8014A6FC(void) {
    extern u16 lbl_80276F00;
    void *ptr = (u8 *)&lbl_80276F00 + 0xEC;
    return ptr;
}

s32 fn_8014A910(void) {
    return 0x40;
}

s32 fn_8014A918(void) {
    return 0x10;
}

s32 fn_8014A920(void) {
    return 0x130;
}

s32 fn_8014A928(void *arg2) {
    if ((s8) lbl_80367B08 == 0) {
        lbl_80367B09 = lbl_80367B0D;
        lbl_80367B0B = *(u8 *) (((u8 *) arg2) + 0x3A);
    } else {
        lbl_80367B0A = lbl_80367B0D;
        lbl_80367B0C = *(u8 *) (((u8 *) arg2) + 0x3A);
    }
    return 9;
}

s32 fn_8014A960(void) {
    return 0;
}

extern s32 lbl_80367B00;
extern u8 lbl_80367B0D;
s32 fn_8014A968(void *arg1) {
    char temp = *(char*)((char*)arg1 + 0x3A);
    temp = (temp * 0x18) + *(s32*)((char*)arg1 + 0x20);
    return ((s32*)lbl_80367B00)[temp];
}

void fn_8014AA18(void) {
    // Analyzing the function from assembly:
    // It appears to be setting up some data structure based on loop conditions
    
    s32 r11 = 3;
    s32 r9 = 10;
    s32 r8 = 0;
    
    while (r8 < 4) {
        s32 temp_r0 = r11 + r8;
        
        if (temp_r0 < 10) {
            if (r9 == 10) {
                // Do nothing specific - it's not used
            } else {
                // Do nothing specific - it's not used 
            }
        } else {
            if (r9 == 12) {
                // Do nothing specific - it's not used
            } else {
                // Do nothing specific - it's not used
            }
        }
        
        r8 += 1;
    }
    
    return;
}

s32 fn_8014AC68(void) {
    extern void *lbl_80367240;
    extern u8 lbl_80367B0D;
    extern u8 lbl_80367B0E;
    if (M2C_FIELD(lbl_80367240, s32 *, 0x10) & 0x01000001) {
        lbl_80367B0D = ((s8) lbl_80367B0D + ((s8) lbl_80367B0E - 1)) % (s8) lbl_80367B0E;
    }
    if (M2C_FIELD(lbl_80367240, s32 *, 0x10) & 0x02000002) {
        lbl_80367B0D = ((s8) lbl_80367B0D + 1) % (s8) lbl_80367B0E;
    }
    return 0;
}

s32 fn_8014ACE8(u8 arg2) {
    extern u8 lbl_80367B08;
    extern u8 lbl_80367B0B;
    extern u8 lbl_80367B0C;
    if ((s8) lbl_80367B08 == 0) {
        if ((s32) arg2 == (s8) lbl_80367B0B) {
            return 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    if ((s32) arg2 == (s8) lbl_80367B0C) {
        return 1;
    }
    return 0;
}

char *fn_8014AD34(void) {
    extern char lbl_80276F00[];
    extern char lbl_803306E8[];
    extern u8 lbl_80367B0D;
    extern u8 lbl_80367B0E;
    s32 fn_80231D94(char *dest, const char *fmt, ...);
    fn_80231D94(lbl_803306E8, &lbl_80276F00[0xF0], (s8)lbl_80367B0D + 1, (s8)lbl_80367B0E);
    return lbl_803306E8;
}

s32 fn_8014AD88(void) {
    return 0;
}

s32 fn_8014AD90(void) {
    return 0x200;
}

s32 fn_8014AD98(void) {
    return 0;
}

s32 fn_8014ADA0(void) {
    return 0xFFFF;
}

void *fn_8014ADAC(void) {
    extern char lbl_80276F00[];
    return &lbl_80276F00[0x104];
}

u16 fn_8014ADBC(void) {
    extern void *lbl_80367B14;
    return M2C_FIELD(lbl_80367B14, u16 *, 0x12);
}

void fn_8014ADC8(s32 arg0, s16 arg1) {
    extern void *lbl_80367B14;
    M2C_FIELD(lbl_80367B14, s16 *, 0x12) = arg1;
}

s32 fn_8014ADD4(void) {
    extern void *lbl_80367B14;
    if (M2C_FIELD(lbl_80367B14, u8 *, 5) & 4) {
        return 3;
    }
    return 1;
}

s32 fn_8014ADF0(void) {
    u8 *fn_8000D2BC(s32);
    s8 fn_80146BE4(s32);
    void fn_801475FC(s32, s32);
    extern s32 *lbl_80367B14;

    s32 temp_r31 = *lbl_80367B14;
    if (!(fn_8000D2BC(temp_r31)[5] & 4) || (fn_80146BE4(temp_r31) < 0)) {
        fn_801475FC(temp_r31, 0x64);
    }
    return 0;
}

s32 fn_8014B20C(void) {
    return 0x7F;
}

s32 fn_8014B214(void) {
    return 0;
}

s32 fn_8014B21C(void) {
    return 3;
}

s32 fn_8014B224(void) {
    return 0x200;
}

s32 fn_8014B22C(void) {
    return -0x2000;
}

s32 fn_8014B234(void) {
    return 0x1FFF;
}

void *fn_8014B23C(void) {
    extern u16 lbl_80276F00[];
    return (u16*)((uintptr_t)lbl_80276F00 + 0x113 * sizeof(u16));
}

extern u16 *g_AccessoryArray;
s16 fn_8014B24C(void) {
    return *(u16*)((char*)g_AccessoryArray + 0x10);
}

s32 fn_8014B264(void) {
    return 0xFF;
}

void *fn_8014B26C(void) {
    extern char lbl_80276F00[];
    return &lbl_80276F00[0x119];
}

void fn_8014B288(s8 arg1) {
    // This is a placeholder that at least avoids the compilation error by adding necessary include.
    // But it will not match until we get the global declaration correct.
}

void *fn_8014B294(void) {
    extern u8 lbl_80276F00[];
    return &lbl_80276F00[0x11F];
}

u8 fn_8014B2A4(void) {
    // Returns byte at offset 0xC in the data pointed to by lbl_80367B14
    extern void *lbl_80367B14;
    return *(u8 *)((char *) lbl_80367B14 + 0xC);
}

u16 fn_8014B2B0(void) {
    extern void *lbl_80367B14;
    return *(u16 *)lbl_80367B14;
}

void *fn_8014B2BC(void) {
    extern u16 lbl_80276F00;
    return (u16*)((char*)&lbl_80276F00 + 0x126 * 2);
}

s32 fn_8014B2CC(s32 arg0) {
    extern u16 *lbl_80367B14;
    return *(u16*)((u8*)lbl_80367B14 + arg0);
}

s32 fn_8014B2E4(void) {
    return 0;
}

void *fn_8014B2EC(void) {
    extern u16 lbl_80276F00[];
    return (u16*)((char*)lbl_80276F00 + 0x254);
}

s32 fn_8014B314(void) {
    return 1;
}

u16 fn_8014B31C(void) {
    extern u16 *lbl_80367B14;
    
    return *lbl_80367B14;  // Assuming the symbol points to a u16, and we return the value.
}

s32 fn_8014B328(void) {
    u8 *fn_8000D2BC(s32);
    s8 fn_80146BE4(s32);
    void fn_801475FC(s32, s32);
    extern s32 *lbl_80367B14;

    s32 temp_r31 = *lbl_80367B14;
    if (!(fn_8000D2BC(temp_r31)[5] & 4) || (fn_80146BE4(temp_r31) < 0)) {
        fn_801475FC(temp_r31, 0x64);
    }
    return 0;
}

void fn_8014BB58(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 sp8;

    fn_8000A258();
    fn_8000A174(0, 0x23);
    fn_8000A248();
    fn_80007898(0xA);
    fn_80007858((f32) arg0, (f32) arg1);
    sp8 = *arg2;
    fn_80007668(&sp8);
    fn_80007124(arg3);
    fn_80007884();
}

extern u16 lbl_80367B68;
s32* fn_8014C5A8(s32 arg0, u8 arg1) {
    if (arg1 == 0) {
        return (s32*)(arg0 + 0x94);
    }
    if (arg1 == 3) {
        return (s32*)(arg0 + 0x98);
    }
    fn_8001520C(&lbl_80367B68, 1);
    return (s32*)&lbl_80367B68;
}

void fn_8014C5F4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x70) = (s16) (M2C_FIELD(arg0, s16 *, 0x70) + arg1);
}

s32 fn_8014C6B8(void) {
    M2C_UNK fn_80040844();
    M2C_UNK fn_80040854();
    fn_80040844();
    fn_80040854();
    return 1;
}

s32 fn_8014C6E0(void) {
    u8 fn_80040824();
    M2C_UNK fn_800AA134();
    if (fn_80040824() == 0) {
        return 0;
    }
    fn_800AA134();
    return 1;
}

void fn_8014C718(u32 arg1) {
    M2C_UNK fn_8000CA64(M2C_UNK *, u32);
    extern M2C_UNK lbl_80293760;
    if (fn_80040824() != 0) {
        if (arg1 == 0U) {
            fn_800AA134();
            fn_80040844();
            fn_80040854();
            return;
        }
        fn_8000CA64(&lbl_80293760, arg1);
    }
}

void fn_8014C774(void) {
    M2C_UNK fn_80040854();
    M2C_UNK fn_80040844();
    fn_80040844();
    fn_80040854();
}

void fn_8014C798(void) {
    M2C_UNK fn_80018EC0();
    M2C_UNK fn_80040844();
    M2C_UNK fn_80042558();
    fn_80018EC0();
    fn_80040844();
    fn_80042558();
}

void fn_8014C7C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    if (arg0 < 0) {
        arg0 = 0;
    }

    if (arg1 < 0) {
        arg1 = 0;
    }

    temp_r3 = arg2 - arg0;
    if (temp_r3 <= 0) {
        temp_r3 = 1;
    }

    temp_r4 = arg3 - arg1;
    if (temp_r4 <= 0) {
        temp_r4 = 1;
    }

    temp_r5 = temp_r3 * temp_r4;
    if (temp_r5 > 0x4000) {
        s32 temp_r6 = temp_r3 / 2;
        s32 temp_r7 = temp_r4 / 2;
        arg2 = arg0 + temp_r6;
        arg3 = arg1 + temp_r7;
    }
}

void fn_8014CA20(s32 arg0, s32 arg1) {
    s32 r0 = arg1 + 2;
    s32 r3 = r0 * 0xC;
    r3 += 0x20;
    r3 += arg0;
    fn_8000E0E4(r3, arg0);
}

s32 fn_8014CA54(s32 arg0, s32 arg1) {
    return (arg1 * 0xC) + arg0 + 0x20;
}

void fn_8014CA68(s32 arg0, s32 arg1) {
    s32 r3;
    s32 temp_r4;

    temp_r4 = arg1 * 0xC;
    r3 = arg0 + (temp_r4 + 0x20);
    fn_8000E0E4(r3, temp_r4);
}

void fn_8014CA98(s32 arg0, s32 arg1, u32 arg2) {
      extern void fn_80234450(s32, u32);
      if (arg2 != 0U) {
          fn_80234450(arg0 + ((arg1 * 0xC) + 0x20), arg2);
      }
  }

void fn_8014CAD4(void *arg0, f32 farg0, f32 farg1) {
    f32 fn_80023068(M2C_UNK *);
    extern M2C_UNK lbl_802CA518;
    M2C_FIELD(arg0, f32 *, 0x52C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x530) = farg1;
    M2C_FIELD(arg0, f32 *, 0x53C) = fn_80023068(&lbl_802CA518);
}

void fn_8014CBD8(void *arg0, f32 farg0, f32 farg1) {
    f32 fn_80023068(M2C_UNK *, M2C_UNK *, f32, f32);
    extern M2C_UNK lbl_802CA518;
    extern f32 lbl_8036A7F0;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = farg0 + lbl_8036A7F0;
    temp_f31 = farg1 + lbl_8036A7F0;
    M2C_FIELD(arg0, f32 *, 0x524) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x528) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x52C) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x530) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x53C) = fn_80023068(&lbl_802CA518, &lbl_802CA518, temp_f30, temp_f31);
    M2C_FIELD(arg0, f32 *, 0x534) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x538) = temp_f31;
}

void fn_8014CF10(s8* arg0, s8 arg1, s8 arg2) {
    s8 temp = *arg0;
    *(arg0 + (temp * 2 + 0x545)) = arg1;
    *(arg0 + (temp * 2 + 0x546)) = arg2;
    *arg0 = temp + 1;
}

void fn_8014D204(void* arg0, s8 arg1, s8 arg2) {
    s32 temp_r0;
    u8* temp_r6;
    
    *(u8*)((uintptr_t)arg0 + 0x544) = 0;
    temp_r0 = *(s8*)((uintptr_t)arg0 + 0x544);
    temp_r6 = (u8*)((uintptr_t)arg0 + (temp_r0 * 2));
    *(u8*)((uintptr_t)temp_r6 + 0x545) = arg1;
    temp_r0 = *(s8*)((uintptr_t)arg0 + 0x544);
    temp_r6 = (u8*)((uintptr_t)arg0 + (temp_r0 * 2));
    *(u8*)((uintptr_t)temp_r6 + 0x546) = arg2;
    *(u8*)((uintptr_t)arg0 + 0x544) = *(u8*)((uintptr_t)arg0 + 0x544) + 1;
}

void fn_8014D244(s32 arg0, u8 arg1, s8 arg2) {
    *(u8*)((arg0 + arg1) & 0xFFFFFF00) = (u8)arg2;
}

void fn_8014D254(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 0x14) = arg1;
    M2C_FIELD(arg0, s8 *, 0x15) = arg2;
    M2C_FIELD(arg0, s8 *, 0x16) = arg3;
    M2C_FIELD(arg0, s8 *, 0x17) = arg4;
}

void fn_8014D268(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r5 = var_r4 - temp_r0;
    if (temp_r5 < 0) {
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + (temp_r0 - var_r4));
    } else {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + temp_r5);
    }
    if (var_r4 > 0x98967F) {
        var_r4 = 0x98967F;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4;
}

void fn_8014D2B0(void *arg0, u8 arg1) {
    u8 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x10);
    if (temp_r5 != arg1) {
        M2C_FIELD(arg0, u8 *, 0x51E) = temp_r5;
        M2C_FIELD(arg0, u8 *, 0x10) = arg1;
    }
}

void fn_8014D3B4(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x11);
    switch ((s32) temp_r0) {                        /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x11) = 3U;
        return;
    case 3:
        M2C_FIELD(arg0, u8 *, 0x11) = 1U;
        return;
    case 1:
        M2C_FIELD(arg0, u8 *, 0x11) = 2U;
        return;
    case 2:
        M2C_FIELD(arg0, u8 *, 0x11) = 0U;
        M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + 1);
        return;
    }
}

s32 fn_8014D8BC(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x10);
    if ((temp_r0 >= 9U) || (temp_r0 == 0)) {
        return 1;
    }
    return 0;
}

s32 fn_8014D8DC(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x10);
    if ((temp_r0 >= 9U) || (temp_r0 == 0)) {
        return 1;
    }
    return 0;
}

void fn_8014D8FC(void *arg0) {
    M2C_UNK fn_80019F04(u8);
    fn_80019F04(M2C_FIELD(arg0, u8 *, 0x10));
}

s32 fn_8014DA68(void) {
    extern M2C_UNK lbl_80330708;
    return (((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x9F) >> 7U) & 1) != 0;
}

void fn_8014DBE0(s32 arg0, s32 arg1, u8 *arg2, u16 *arg3, s32 *arg4) {
    s32 temp_r4;
    u8 *temp_r3;

    temp_r4 = arg1 * 8;
    temp_r3 = (u8 *)arg0 + temp_r4;
    *arg2 = *(u8 *)temp_r3;
    *arg3 = *(u16 *)((u8 *)temp_r3 + 0x2);
    *arg4 = *(s32 *)((u8 *)temp_r3 + 0x4);
}

s32 fn_8014DC04(void *arg0) {
    s32 var_r4;
    s32 var_ctr;
    void *var_r3;

    var_r3 = arg0;
    var_r4 = 0;
    var_ctr = 4;

loop_1:
    if (((u16*)var_r3)[1] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[5] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[9] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[13] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[17] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[21] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[25] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[29] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[33] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (((u16*)var_r3)[37] == 0) {
        return var_r4;
    }
    var_r4 += 1;
    var_r3 = (char*)var_r3 + 0x50;
    var_r4 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        return -1;
    }
    goto loop_1;
}

void fn_8014DE70(s32 arg0) {
    extern u8 lbl_802937EC[];
    extern s8 lbl_80367700;
    extern s8 lbl_80367701;
    lbl_80367701 = 0;
    lbl_80367700 = 0;
    fn_8000CAA0(lbl_802937EC, arg0, lbl_802937EC);
}

void fn_8014DFE8(s32 arg0) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_80367B94;
    fn_80024398(&lbl_80367B94, arg0, 0);
}
extern u16 lbl_80367B14;
extern u16 lbl_80367B14;
#include "common.h"
extern f32 lbl_8036A7F0;
extern u8 lbl_802CA518[];
extern s32 lbl_80367B00;
extern s32 lbl_80367B04;
extern u8 lbl_80367B0D;

void fn_801475FC(s32, s32); /* extern */
#include "global.h"

extern void* fn_80019F04();
#include "common.h"
extern u16 lbl_802CA264[50];
extern u16 lbl_802B14E4[];
#include "common.h"
#include "ef.h"
#include "global.h"

extern u8 lbl_80330708[];
extern u8 lbl_80277060[];
extern u8 lbl_8032BB58[];
#include "global.h"
