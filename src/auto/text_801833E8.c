/* Functions from 0x801833E8 to 0x801A2AB4, found by decomp-toolkit. */
#include "common.h"

#pragma cplusplus on
extern "C" void fn_8017A000(void *);
extern "C" void fn_80193950(void *);
extern "C" u8 lbl_8029656C[];
#pragma cplusplus reset

f32 fn_801833E8(void) {
    extern f32 lbl_8036ACC0;
    return lbl_8036ACC0;
}

s32 fn_801833F0(void) {
    return 0x1B0;
}

s32 fn_801833F8(void) {
    return 0x90;
}

s32 fn_8018361C(void) {
    return 4;
}

s32 fn_801837CC(void) {
    return 3;
}

s32 fn_8018386C(void) {
    return 0;
}

s32 fn_801838CC(void) {
    return 1;
}

s32 fn_801838D4(void) {
    extern u8 lbl_803681F0;
    s32 val = lbl_803681F0;
    if (val < 0x33) {
        return 0;
    }
    return 3;
}

void fn_80183920(void) {
    extern u8 lbl_80278BB8[];
    fn_8000E0E4(&lbl_80278BB8[0x197]);
}

s32 fn_8018394C(void) {
    return 2;
}

s32 fn_80183954(void) {
    extern u8 lbl_803681F0;
    return 3 & ~((s32) ~((lbl_803681F0 - 0x32) | (0x32 - lbl_803681F0)) >> 0x1F);
}

extern u16 lbl_80295A78[10];
s32 fn_80183A5C(void) {
    return fn_8000C0C0(&lbl_80295A78) != 0;
}

void fn_80185060(void *arg0, void *arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == (u32) M2C_FIELD(arg1, u32 *, 0x30)) {
        M2C_FIELD(arg1, void **, 0x34) = arg0;
    }
}

void fn_80185244(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x34) > (s32) M2C_FIELD(arg0, s32 *, 0x3C)) {
        fn_8000C188();
    }
}

void fn_8018548C(void *arg0) {
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 0xB);
}

void fn_801854B4(void *arg0) {
    M2C_UNK fn_8004B1B4(s32);
    fn_8004B1B4(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_801857F0(void *arg0) {
    u8 fn_8004BF80(s32);
    if (fn_8004BF80(M2C_FIELD(arg0, s32 *, 0x30)) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_80185AF4(void *arg0) {
    extern void *lbl_80367240;
    s32 temp_r0;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x3E) != 0) {
        temp_r0 = M2C_FIELD(lbl_80367240, s32 *, 4);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x34) == 1) {
            if (temp_r0 & 0x100) {
                M2C_FIELD(arg0, s32 *, 0x34) = 2;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x78) = (f32) M2C_FIELD(arg0, s32 *, 0x34);
            }
        } else if (!(temp_r0 & 0x100)) {
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x78) = (f32) M2C_FIELD(arg0, s32 *, 0x34);
        }
    }
}

s32 fn_80185B94(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0x5C), f32 *, 0x5C) = (f32) M2C_FIELD(M2C_FIELD(temp_r5, void **, 0x4C), s32 *, 0x34);
    return 0;
}

void fn_80186028(void *arg0) {
    M2C_UNK fn_800536B0(void *, void *, f32, f32, f32);
    s32 *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    fn_800536B0(M2C_FIELD(arg0, void **, 0x34), temp_r4, M2C_FIELD(temp_r4, f32 *, 4), M2C_FIELD(temp_r4, f32 *, 8), M2C_FIELD(temp_r4, f32 *, 0xC));
    temp_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x30), s32 **, 0x5C);
    *temp_r3 &= 0xFFFFFFBF;
}

void fn_8018A7E4(void *arg0) {
    extern f32 lbl_8036ACEC;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    *(f32 *)((u8 *)temp_r3 + 0x10) = lbl_8036ACEC;
    *(f32 *)((u8 *)temp_r3 + 0x14) = lbl_8036ACEC;
    *(f32 *)((u8 *)temp_r3 + 0x18) = lbl_8036ACEC;
}

void fn_8018A7FC(void *arg0) {
    extern f32 lbl_8036ACEC;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg0, f32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x4C) = lbl_8036ACEC;
    M2C_FIELD(arg0, f32 *, 0x50) = lbl_8036ACEC;
}

void fn_8018B004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}

void fn_8018B010(void *arg0) {
    void *temp_r3;

    fn_80050BCC(M2C_FIELD(arg0, void **, 0x30), 0xFF);
    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r3, f32 *, 4) = M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(temp_r3, f32 *, 8) = M2C_FIELD(arg0, f32 *, 0x44);
    M2C_FIELD(temp_r3, f32 *, 0xC) = M2C_FIELD(arg0, f32 *, 0x48);
}

void fn_8018B2C4(void *arg0) {
    M2C_UNK fn_80050BCC(s32, M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x10;
    fn_80050BCC(M2C_FIELD(arg0, s32 *, 0x30), 0);
}

void fn_8018B2FC(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r4, f32 *, 4) = M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(temp_r4, f32 *, 8) = M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(temp_r4, f32 *, 0xC) = M2C_FIELD(arg0, f32 *, 0x3C);
}

void fn_8018B3DC(void *arg0) {
    M2C_UNK fn_8005F7B0(s32, u8);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30) + 0x1C;
    fn_8005F7E0(temp_r31, M2C_FIELD(arg0, u8 *, 0x38), M2C_FIELD(arg0, u8 *, 0x39), M2C_FIELD(arg0, u8 *, 0x3A));
    fn_8005F7B0(temp_r31, M2C_FIELD(arg0, u8 *, 0x3B));
}

void fn_8018B698(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

void fn_8018B6A4(void *arg0) {
    M2C_UNK fn_8005F7E0(s32, u8, u8, u8);
    fn_8005F7E0(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, M2C_FIELD(arg0, u8 *, 0x34), M2C_FIELD(arg0, u8 *, 0x35), M2C_FIELD(arg0, u8 *, 0x36));
}

void fn_8018B854(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) M2C_FIELD(temp_r5, u8 *, 0x24);
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) M2C_FIELD(temp_r5, u8 *, 0x25);
    M2C_FIELD(arg0, u8 *, 0x36) = (u8) M2C_FIELD(temp_r5, u8 *, 0x26);
    M2C_FIELD(arg0, u8 *, 0x37) = (u8) M2C_FIELD(temp_r5, u8 *, 0x27);
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}

void fn_8018B920(void *arg0) {
    extern f32 lbl_8036ACEC;
    *(s32 *)((char *)arg0 + 0x40) = 0;
    *(f32 *)((char *)arg0 + 0x44) = lbl_8036ACEC;
}

void fn_8018C964(void *arg0) {
    u8 fn_8004BF80(s32);
    if (fn_8004BF80(M2C_FIELD(arg0, s32 *, 0x30)) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_8018C9A4(void *arg0) {
    M2C_UNK fn_8005FA14(s32, M2C_UNK);
    fn_8005FA14(M2C_FIELD(arg0, s32 *, 0x34), 1);
}

void fn_8018CB7C(void) {
    M2C_UNK fn_8018CCB8();
    fn_8018CCB8();
}

void fn_8018D25C(void *arg0) {
    s32 fn_80018ADC();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = fn_80018ADC();
}

void fn_8018D7A4(s32 arg0, s32 arg1) {
    void fn_8002C47C(void *, s32);
    void fn_8002F728(void *);
    extern u8 lbl_80284E20[];
    extern u8 lbl_80296078[];
    extern u8 lbl_802EF4E0[];
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } obj;

    obj.vtbl = lbl_80284E20;
    obj.unk4 = arg0;
    obj.vtbl = lbl_80296078;
    obj.unk8 = arg1;
    fn_8002F728(lbl_802EF4E0);
    fn_8002C47C(&obj, 0);
}

extern u8 lbl_80296128[16];
void fn_8018DC98(void) {
    fn_8000BF00(&lbl_80296128);
}

s32 fn_8018DD0C(void) {
    return 0;
}

void fn_8018DD3C(s32 arg0) {
    M2C_UNK fn_80059208(M2C_UNK *, s32);
    s32 fn_8005C6A0(void *, M2C_UNK *);
    M2C_UNK fn_8006EEFC(s32, void *);
    extern M2C_UNK fn_8018DE24;
    extern M2C_UNK lbl_80279B1C;
    if (fn_8005C6A0(&lbl_80279B1C + 0x105, &lbl_80279B1C) & 0x2000) {
        fn_8006EEFC(arg0 + 0x34, &lbl_80279B1C + 0x105);
        fn_8000C188(arg0);
        fn_80059208(&fn_8018DE24, arg0);
    }
}

void fn_8018DDA8(void *arg0) {
    M2C_UNK fn_8005C8B4(void *, M2C_UNK *, M2C_UNK, M2C_UNK, f32);
    extern M2C_UNK lbl_80279B1C;
    extern f32 lbl_8036AD98;
    extern f32 lbl_8036AD9C;
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x32) = 1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036AD98;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036AD9C;
    M2C_FIELD(arg0, s16 *, 0x44) = 0;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s16 *, 0x54) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x4A) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x4C) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x4E) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x50) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x52) = 0xFFFF;
    fn_8005C8B4(&lbl_80279B1C + 0x105, &lbl_80279B1C, 0x10000, 0, lbl_8036AD98);
}

void fn_8018E98C(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x3C)();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32), 0x40)(arg0, arg1);
}

void fn_8018EFE0(void *arg0, s32 arg1) {
    s32 fn_8000E0E4(void *, M2C_UNK *);
    M2C_UNK fn_8001019C(s16, s16, M2C_UNK, s32);
    s32 fn_800102BC(M2C_UNK, s16, s16, f32);
    s16 fn_80010B78(M2C_UNK, f32);
    extern M2C_UNK lbl_80279C40;
    extern f32 lbl_8036ADF0;
    s16 temp_r30;
    s16 temp_r3;
    s16 temp_r4;
    s32 temp_r31;

    temp_r31 = fn_8000E0E4(&lbl_80279C40 + 0xA0, &lbl_80279C40);
    temp_r3 = fn_80010B78(-1, lbl_8036ADF0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x12);
    temp_r30 = (s16) ((s32) ((s16) (M2C_FIELD(arg0, s16 *, 0x16) - temp_r4) - temp_r3) >> 1);
    fn_8001019C(temp_r30, (s16) (arg1 + (s16) ((s32) (0x1C - fn_800102BC(-1, temp_r4, temp_r3, lbl_8036ADF0)) >> 1)), 2, temp_r31);
}

void fn_80190020(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x44) = 8;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0x1C;
    M2C_FIELD(arg0, s16 *, 0x14) = 0x14;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)) - 0x1C);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)) - 0x14);
}

void fn_801900E0(void *arg0) {
    s32 r3 = (s32)arg0;
    s16 r4, r5, r6, r7;
    
    *(s16 *)(r3 + 0x40) = 0x18;
    *(s16 *)(r3 + 0x42) = 0;
    r7 = *(s16 *)(r3 + 0xc);
    r6 = *(s16 *)(r3 + 0x10);
    r5 = *(s16 *)(r3 + 0xa);
    r4 = *(s16 *)(r3 + 0xe);
    r6 = r7 - r6;
    r6 = (s16) r6;
    r4 = r5 - r4;
    *(s16 *)(r3 + 0x12) = 2;
    r4 = (s16) r4;
    r6 = r6 - 2;
    *(s16 *)(r3 + 0x14) = 2;
    r4 = r4 - 2;
    *(s16 *)(r3 + 0x16) = r4;
    *(s16 *)(r3 + 0x18) = r6;
}

void fn_801903D8(void *arg0, s32 arg1) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x44) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x2C)();
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, s32), 0x30)(arg0, arg1);
}

void *fn_80190818(void *arg0, s16 arg1) {
    extern void *lbl_80296228;
    extern void *lbl_80292230;
    extern void *lbl_8028FDB0;
    void fn_800616A0(void);
    void fn_8005C7E8(void);
    void fn_800C428C(void *);

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = &lbl_80296228;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            fn_800616A0();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            fn_8005C7E8();
        }

        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = &lbl_80292230;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = &lbl_8028FDB0;
            }
        }

        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }

    return arg0;
}

void fn_801908B4(void) {

}

void fn_80190F14(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_80191374(void *arg0) {
    void *temp_r3;
    
    fn_8013FF00(arg0, fn_8013FF94(-0x1000, 0));
    *(u8*)((u8*)arg0 + 0x4B) = 0;
    
    temp_r3 = *(void**)((u8*)arg0 + 0x68);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r3) != 0) {
        fn_801658DC(*(s32*)((u8*)temp_r3 + 0x4C));
    }
}

#pragma cplusplus on
extern "C" void *fn_801938F8(void *arg0) {
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual void m14() = 0;
        virtual void m18() = 0;
        virtual void m1C() = 0;
        virtual void m20() = 0;
        virtual void m24() = 0;
        virtual void m28() = 0;
    };
    fn_80193950(arg0);
    *(void **)((u8 *)arg0 + 0x0) = (void *)lbl_8029656C;
    *(s32 *)((u8 *)arg0 + 0x60) = 2;
    ((Obj *) arg0)->m28();
    return arg0;
}
#pragma cplusplus reset

void *fn_80193AF0(void *arg0, s16 arg1) {
    M2C_UNK fn_80165100(void *, s32);
    M2C_UNK fn_800C428C(void *);
    extern u8 lbl_8029656C[];
    extern u8 lbl_80293B74[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_8029656C;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293B74;
            fn_80165100(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80193C3C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    M2C_UNK fn_8001C5F8(void *, M2C_UNK);
    M2C_UNK fn_800C428C(void **);
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_3;
    void **temp_r5;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_4:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        fn_8001C5F8(temp_r3_2 + 8, -1);
        temp_r3_3 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_3, void ***, 4);
        fn_800C428C(temp_r3_3);
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

void *fn_80193DD8(u32 arg0) {
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, u32);
    void fn_801403F0(void *);
    extern u8 lbl_802965C0[];
    extern u8 lbl_80296674[];
    void *var_r31;

    if (arg0 != 0U) {
        var_r31 = fn_8000CAA0(lbl_802965C0, arg0);
    } else {
        var_r31 = fn_8000CAF0(lbl_802965C0, arg0);
    }
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(s32 *)((u8 *)var_r31 + 0x40) = 0;
        *(u8 **)((u8 *)var_r31 + 0x44) = lbl_80296674;
    }
    return var_r31;
}

void fn_80193E58(void) {

}

void fn_80193F3C(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_80194064(void *arg0) {
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0x20));
    temp_r6 = M2C_FIELD(arg0, void **, 0x44);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x34);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_80194174(void) {

}

extern u8 lbl_802966D8[16];
void fn_80194E10(void) {
    fn_8000BF00(&lbl_802966D8);
}

void fn_801950CC(void *arg0) {
    M2C_UNK fn_800C426C(s32);
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x30);
    if (temp_r3 != 0U) {
        fn_800C426C(temp_r3 - 0x10);
    }
}

void fn_80195170(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 4) = arg1;
}

void fn_80195880(void *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 1;
}

s32 fn_80196420(s32 arg0, void *arg1) {
    s8 fn_8003A398();
    s8 fn_8003A5B4(s32);
    s8 temp_r31;
    s8 temp_r3;
    s8 var_r4;
    s8 var_r5;

    temp_r31 = fn_8003A398();
    temp_r3 = fn_8003A5B4(arg0);
    var_r4 = temp_r31 + M2C_FIELD(arg1, u8 *, 0x27);
    var_r5 = temp_r3 + M2C_FIELD(arg1, u8 *, 0x28);
    if (var_r4 > 0x14) {
        var_r4 = 0x14;
    }
    if (var_r5 > 0x63) {
        var_r5 = 0x63;
    }
    if ((var_r4 == temp_r31) && (var_r5 == temp_r3)) {
        return 0;
    }
    return 1;
}

void fn_80196794(void) {
    M2C_UNK fn_8003D538();
    fn_8003D538();
}

void fn_80196818(void *arg0) {
    M2C_UNK fn_801B3258(s32, void *);
    fn_801B3258(M2C_FIELD(arg0, s32 *, 0x30), arg0);
}

void fn_80196840(void) {

}

void fn_80196844(void) {

}

void fn_801968CC(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x78);
    if (temp_r0 != temp_r5) {
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (temp_r0 + arg1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (temp_r5 + arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = 3;
}

void fn_801985F0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
}

s32 fn_801992F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x128);
}

s32 fn_801992F8(void *arg0) {
    extern u16 lbl_802967B0[];
    return *(u16*)((char*)lbl_802967B0 + (M2C_FIELD(arg0, s32 *, 0x124) << 2));
}

s32 fn_80199310(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x124);
}

void fn_80199484(void *arg0) {
    M2C_UNK fn_800E5B68();
    M2C_UNK fn_80198CA4();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 3) {
        fn_80198CA4();
        return;
    }
    fn_800E5B68();
}

void fn_801994B8(void *arg0, s32 arg1) {
    M2C_UNK fn_800E5DEC(void *, s32);
    M2C_UNK fn_801986E0();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x14C) != 0) {
        fn_801986E0();
    }
    fn_800E5DEC(arg0, arg1);
}

void fn_80199B88(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, void *);
    M2C_UNK fn_8017A5EC(s32, u8);
    fn_8017A430(arg1, 4, arg0);
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 4));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 5));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 6));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 7));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 8));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 9));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xA));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xB));
}

void fn_80199C2C(void) {
    M2C_UNK fn_8000BF00(void *);
    extern M2C_UNK lbl_802968E8;
    fn_8000BF00(&lbl_802968E8 + 0x50);
    fn_8000BF00(&lbl_802968E8 + 0x88);
    fn_8000BF00(&lbl_802968E8 + 0xFC);
    fn_8000BF00(&lbl_802968E8 + 0x138);
    fn_8000BF00(&lbl_802968E8 + 0x198);
    fn_8000BF00(&lbl_802968E8 + 0x238);
    fn_8000BF00(&lbl_802968E8 + 0x2B0);
    fn_8000BF00(&lbl_802968E8 + 0x318);
    fn_8000BF00(&lbl_802968E8 + 0x3C4);
    fn_8000BF00(&lbl_802968E8 + 0x410);
    fn_8000BF00(&lbl_802968E8 + 0x474);
    fn_8000BF00(&lbl_802968E8 + 0x508);
    fn_8000BF00(&lbl_802968E8 + 0x5EC);
}

void fn_80199CC0(s32 arg0) {
    extern s32 lbl_80296ED4;
    fn_8000CAA0(&lbl_80296ED4, arg0, &lbl_80296ED4);
}

void fn_80199CEC(void *arg0) {
    M2C_UNK fn_800498A4(s32, M2C_UNK, M2C_UNK);
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x34), 0, 2);
}

s32 fn_8019A01C(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x34);
}

void fn_8019A088(void *arg0) {
    M2C_UNK fn_80049D30(s32);
    fn_80049D30(M2C_FIELD(arg0, s32 *, 0x34));
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x34), 0, 0);
}

extern s32 lbl_8036AEF8;
s32 fn_8019A7A8(void *arg0) {
    u8 color[4] = {0x80, 0x80, 0x80, 0x40};
    u8 *dst;

    dst = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 **, 0x5C);
    dst[0x88] = color[0];
    dst[0x89] = color[1];
    dst[0x8A] = color[2];
    dst[0x8B] = color[3];
    return 1;
}

void fn_8019A7E8(s32 arg0) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_80296DF0;
    fn_8000CAA0(&lbl_80296DF0, arg0, &lbl_80296DF0);
    fn_8019D51C(0, 0);
}

void fn_8019AB90(void *arg0) {
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x5C), 0, 2);
}

void fn_8019ABBC(void *arg0) {
    M2C_UNK fn_8000C188();
    if ((s16) M2C_FIELD(arg0, s16 *, 0x68) >= (s32) (M2C_FIELD(arg0, s16 *, 0x6A) - 4)) {
        fn_8000C188();
    }
}

s32 fn_8019B25C(void *arg0) {
    u8 color[4] = {0x80, 0x80, 0x80, 0x40};
    u8 *dst;

    dst = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 **, 0x5C);
    dst[0x88] = color[0];
    dst[0x89] = color[1];
    dst[0x8A] = color[2];
    dst[0x8B] = color[3];
    return 1;
}

void fn_8019B29C(void *arg0) {
    u8 fn_8005F9B8(void *, s32);
    u32 *flags;

    flags = (u32 *) (M2C_FIELD(arg0, u8 **, 0x5C) + 0x14);
    if (fn_8005F9B8(flags, 0x12) || (*flags & 0x10)) {
        fn_8000C188(arg0);
    }
}

void fn_8019B2FC(void *arg0) {
    M2C_UNK fn_80049D30(s32);
    M2C_UNK fn_800498A4(s32, M2C_UNK, M2C_UNK);
    void fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_80330708[];

    fn_80049D30(M2C_FIELD(arg0, s32 *, 0x5C));
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x5C), 0, 0);
    fn_8014CBD8(lbl_80330708, M2C_FIELD(arg0, s8 *, 0x66), M2C_FIELD(arg0, s8 *, 0x67));
}

void fn_8019B6B4(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296938[];
    extern u8 lbl_8027AA38[];

    fn_8019D51C(fn_8000CAA0(lbl_80296938, arg0), arg1, lbl_8027AA38 + 0x166);
}

void fn_8019B704(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(s32, void *);
    extern M2C_UNK lbl_8027AA38;
    extern M2C_UNK lbl_80296D5C;
    u32 var_r30;
    void *temp_r31;
    void *temp_r3;

    temp_r31 = fn_8000CAA0(&lbl_80296D5C, arg0, &lbl_80296D5C);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x17A);
    var_r30 = 0U;
    M2C_FIELD(temp_r31, s8 *, 0x5C) = 0;
    temp_r3 = *M2C_FIELD(temp_r31, void ***, 0x34);
    if (temp_r3 != NULL) {
        var_r30 = M2C_FIELD(temp_r3, u32 *, 0x280);
    }
    if (var_r30 != 0U) {
        fn_8004FC70(var_r30, 8);
        fn_8004FC70(var_r30, 9);
    }
}

void fn_8019B79C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(s32, void *);
    extern M2C_UNK lbl_8027AA38;
    extern M2C_UNK lbl_80296D5C;
    u32 var_r31;
    void *temp_r31;
    void *temp_r3;

    temp_r31 = fn_8000CAA0(&lbl_80296D5C, arg0, &lbl_80296D5C);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x185);
    M2C_FIELD(temp_r31, s8 *, 0x5C) = 1;
    temp_r3 = *M2C_FIELD(temp_r31, void ***, 0x34);
    if (temp_r3 != NULL) {
        var_r31 = M2C_FIELD(temp_r3, u32 *, 0x280);
    } else {
        var_r31 = 0U;
    }
    if (var_r31 != 0U) {
        fn_8004FC70(var_r31, 8);
        fn_8004FC70(var_r31, 9);
    }
}

void fn_8019B83C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(s32, void *);
    extern M2C_UNK lbl_8027AA38;
    extern M2C_UNK lbl_80296D5C;
    void *temp_r31;

    temp_r31 = fn_8000CAA0(&lbl_80296D5C, arg0, &lbl_80296D5C);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x194);
    M2C_FIELD(temp_r31, s8 *, 0x5C) = 3;
}

void fn_8019B8A0(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296D5C[];
    extern u8 lbl_8027AA38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296D5C, arg0);
    fn_8019D51C(temp_r31, arg1, lbl_8027AA38 + 0x1A4);
    M2C_FIELD(temp_r31, u8 *, 0x5C) = 2;
}

void fn_8019BC50(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296CF8[];
    u8 *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296CF8, arg2);
    fn_8019D51C(temp_r31, 0, NULL);
    temp_r31[0x5D] = arg0;
    temp_r31[0x5E] = arg1;
    temp_r31[0x5C] = 1;
}

void fn_8019BCC0(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296CF8[];
    u8 *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296CF8, arg2);
    fn_8019D51C(temp_r31, 0, NULL);
    temp_r31[0x5D] = arg0;
    temp_r31[0x5E] = arg1;
    temp_r31[0x5C] = 0;
}

void fn_8019BD8C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(s32, M2C_UNK);
    extern M2C_UNK lbl_80296CAC;
    fn_8000CAA0(&lbl_80296CAC, arg0, &lbl_80296CAC);
    fn_8019D51C(arg1, 0);
}

void fn_8019C00C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296D5C[];
    extern u8 lbl_8027AA38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296D5C, arg0);
    fn_8019D51C(temp_r31, arg1, lbl_8027AA38 + 0x1A4);
    M2C_FIELD(temp_r31, u8 *, 0x5C) = 2;
}

extern s32* lbl_80367240;
extern s32* lbl_8036ACC0;
extern void* fn_8005306C(void*);
extern void* fn_80053658(void*, s32, void*);
extern void* fn_800536CC(s32);
extern void* fn_800536D8(void*, s32);
extern void* fn_80053C30(s32, void*);
extern void* fn_8019CC04;
extern void* lbl_8027AA38;
extern void* lbl_80296C00;
void fn_8019C160(s32 arg0, s32 arg1) {
    fn_8000CAA0(&lbl_80296C00, arg0, &lbl_80296C00);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x1F5);
}

void fn_8019C1B0(void *arg0) {
    u8 temp_r4;

    if (((M2C_UNK (*)()) M2C_FIELD(arg0, M2C_UNK (**)(), 0x58)) != NULL) {
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x40);
        if (!(temp_r4 & 4)) {
            M2C_FIELD(arg0, u8 *, 0x40) = (u8) (temp_r4 | 4);
            M2C_FIELD(arg0, M2C_UNK (**)(), 0x58)();
        }
    }
}

void fn_8019D038(void *arg0) {
    M2C_UNK fn_8017E394(s32, M2C_UNK, void *, M2C_UNK);
    fn_8017E394(M2C_FIELD(arg0, s32 *, 0x34), 0, arg0, 3);
}

void fn_8019D068(s32 arg0)
{
  u32 temp_r31;
  u32 fn_800980E8(M2C_UNK);
  M2C_UNK fn_80184A00(u32, u32, M2C_UNK, s32);
  u32 temp_r30;
  temp_r31 = fn_800980E8(0);
  temp_r30 = fn_800980E8(1);
  if ((temp_r31 != 0U) && (temp_r30 != 0U))
  {
    fn_80184A00(temp_r31, temp_r30, 0x10, arg0);
    fn_80184A00(temp_r30, temp_r31, 0x10, arg0);
  }
}

void fn_8019D150(void *arg0) {
    u8 fn_80098568(void **);
    M2C_UNK fn_80183B24(s32, void *);
    s32 var_r3;
    s32 var_r3_2;
    void *temp_r3;
    void *temp_r3_2;

    if (fn_80098568(M2C_FIELD(arg0, void ***, 0x34)) != 0) {
        temp_r3 = *M2C_FIELD(arg0, void ***, 0x34);
        if (temp_r3 != NULL) {
            var_r3 = M2C_FIELD(temp_r3, s32 *, 0x280);
        } else {
            var_r3 = 0;
        }
        fn_80183B24(var_r3, arg0);
        return;
    }
    temp_r3_2 = *M2C_FIELD(arg0, void ***, 0x34);
    if (temp_r3_2 != NULL) {
        var_r3_2 = M2C_FIELD(temp_r3_2, s32 *, 0x280);
    } else {
        var_r3_2 = 0;
    }
    fn_80184C7C(var_r3_2, 0, 0x18, 0);
}

void fn_8019D360(void *arg0) {
    void *temp_r5;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x35) == 0) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(temp_r5, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x1C) & 0xFFFFFF3F);
        M2C_FIELD(arg0, u8 *, 0x35) = 1U;
    }
}

void fn_8019D458(void *arg0) {
    M2C_UNK fn_80184618(s32, void *);
    M2C_UNK fn_80184BE8(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80184C7C(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80184C7C(M2C_FIELD(arg0, s32 *, 0x30), 5, 0x10, 0);
    fn_80184BE8(M2C_FIELD(arg0, s32 *, 0x30), 0, 0x10, 0);
    fn_80184618(M2C_FIELD(arg0, s32 *, 0x30), arg0);
}

void fn_8019D4F4(void *arg0) {
    M2C_UNK fn_8004FC70(s32, M2C_UNK);
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 5);
}

s32 fn_8019D90C(void) {
    M2C_UNK fn_80194E10();
    fn_80194E10();
    return 1;
}

s32 fn_8019D930(void) {
    M2C_UNK fn_80194F54();
    M2C_UNK fn_80195880();
    fn_80194F54();
    fn_80195880();
    return 1;
}

s32 fn_8019E4EC(void) {
    u8 fn_800A69D8(M2C_UNK *, s32 *);
    M2C_UNK spC;
    s32 sp8;

    if (fn_800A69D8(&spC, &sp8) != 0) {
        return sp8;
    }
    return 0;
}

void fn_8019E5B0(void) {
    M2C_UNK fn_8000A274(M2C_UNK);
    fn_8000A274(0);
}

s32 fn_8019E690(s32 arg0) {
    extern u8 lbl_8036728B;
    u8 var_r0;

    var_r0 = lbl_8036728B | 1;
    if (arg0 != 0) {
        var_r0 = lbl_8036728B & 0xFE;
    }
    lbl_8036728B = var_r0;
    return 1;
}

s32 fn_8019E6B4(void) {
    M2C_UNK fn_8018CF08();
    fn_8018CF08();
    return 1;
}

void fn_8019E764(u32 arg0, void *arg1) {
    u32 temp_r3;
    if (arg1 != 0) {
        M2C_FIELD(arg1, u32 *, 0x1C) = arg0;
        temp_r3 = M2C_FIELD(arg1, u32 *, 0x20);
        if (temp_r3 != 0) {
            ((void (*)(u32))((void **)(temp_r3))[0x48])(arg0);
        }
    }
}

void fn_8019EAC8(void *arg0) {
    M2C_UNK fn_800F18A4(s32, s32);
    fn_800F18A4(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x34));
}

s32 fn_8019ED74(void) {
    return 1;
}

void fn_8019FC4C(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_8001772C();
    if (fn_8001772C() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_8019FC88(void) {
    M2C_UNK fn_80017774();
    fn_80017774();
    return 1;
}

s32 fn_8019FCAC(void) {
    M2C_UNK fn_8001779C();
    fn_8001779C();
    return 1;
}

s32 fn_8019FCD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_80017840(M2C_UNK, s32, f32, f32, f32);
    fn_80017840(1, arg0, (f32) arg1, (f32) arg2, (f32) arg3);
    return 1;
}

s32 fn_8019FE2C(void) {
    M2C_UNK fn_800C0658();
    M2C_UNK fn_800177E0();
    fn_800C0658();
    fn_800177E0();
    return 1;
}

extern s32 lbl_8036AF6C;
extern u8 lbl_80367298[];
void fn_801A0100(s8 arg0, s8 arg1, s8 arg2) {
    lbl_80367298[0] = arg0;
    lbl_80367298[1] = arg1;
    lbl_80367298[2] = arg2;
    lbl_80367298[3] = lbl_8036AF6C;

    fn_80040844(arg2, arg1, arg0, lbl_80367298);
    fn_80045C68();
    fn_80013864();
}

s32 fn_801A01D8(s8 arg0) {
    M2C_UNK fn_80013864();
    M2C_UNK fn_80040844();
    M2C_UNK fn_80040DA4();
    extern s8 lbl_8036728A;
    lbl_8036728A = arg0;
    fn_80040844();
    fn_80040DA4();
    fn_80013864();
    return 1;
}

void fn_801A06CC(void) {
    M2C_UNK fn_8003BE50();
    fn_8003BE50();
}

void fn_801A0C3C(void *arg0, u32 arg1) {
    M2C_UNK fn_8000C60C();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) == arg1) {
        fn_8000C60C();
    }
}

void fn_801A0CA8(void *arg0) {
    u8 fn_8004FA88(s32, s32);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x54);
    fn_8004FC70(temp_r31, M2C_FIELD(arg0, s32 *, 0x60));
    if (fn_8004FA88(temp_r31, M2C_FIELD(arg0, s32 *, 0x60)) != 0) {
        fn_80184C7C(temp_r31, M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x64), arg0);
        M2C_FIELD(arg0, s32 *, 0x60) = -1;
        fn_8000C188(arg0);
    }
}

s32 fn_801A1E6C(s8 arg0, s8 arg1) {
    void *fn_8000C0C0(void *, void *);
    f32 fn_80023430(void *, void *, f32, f32);
    extern u16 lbl_80296F90[];
    extern u8 lbl_802CA518[];
    extern f64 lbl_8036AF78;
    
    void *temp_r3;
    s32 var_r31;
    s32 temp_r4;
    s32 temp_r0;

    temp_r3 = fn_8000C0C0(&lbl_80296F90, &lbl_80296F90);
    if (temp_r3 != NULL) {
        var_r31 = *(s32 *)((char *)temp_r3 + 0x3C);
    } else {
        var_r31 = 1;
    }
    
    temp_r4 = (s32)arg0;
    temp_r0 = (s32)arg1;
    
    return (s32)(fn_80023430(&lbl_802CA518, &lbl_802CA518, (f32)temp_r4, (f32)temp_r0) * (f32)var_r31);
}

void fn_801A25C4(void) {
    M2C_UNK fn_80016180();
    M2C_UNK fn_8005376C();
    M2C_UNK fn_800C1BDC();
    extern s32 lbl_80367110;
    if (lbl_80367110 & 1) {
        fn_8000C60C();
        fn_800C1BDC();
        fn_80016180();
        fn_8005376C();
    }
}

void fn_801A2764(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
#include "common.h"

extern s32 lbl_8036AF6C;
extern u8 lbl_80367298[];
#include "common.h"
extern u16 lbl_80291AC8[];
#include "global.h"

extern u32 lbl_80295A00[];
extern u32 lbl_80295A20[];
extern f32 lbl_8036ACE0;
extern f32 lbl_8036ACEC;
extern f32 lbl_8036AD04;
extern f32 lbl_8036ACF0;

void *fn_8000A388(u32*, u32*, void*);
void *fn_8000CA64(u32*, s32);
u8 fn_8004C0F0(s32);
void *fn_8004FE90(s32, u8);
void *fn_8004FE98(s32, s32);
void *fn_800506E0(s32, s32, void*);
void *fn_800508C4(s32);
f32 fn_80059F64(f32, f32, f32, f32);
void *fn_8005FC74(void*, void*, s32);
void *fn_8005FEE8(void*, f32);
s32 fn_80060440(s32);
void *fn_800639B4();
