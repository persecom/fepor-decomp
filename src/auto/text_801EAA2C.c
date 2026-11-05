/* Functions from 0x801EAA2C to 0x801F18D4, found by decomp-toolkit. */
#include "common.h"

void fn_801EAA2C(s8 *arg0) {
    *arg0 = -1;
}

void fn_801EAA38(s32 arg0) {
    M2C_UNK fn_8000E0E4(void *, M2C_UNK *);
    M2C_UNK fn_80024398(s32, M2C_UNK);
    void *fn_8013BFFC();
    extern M2C_UNK lbl_8027EE08;
    fn_8000E0E4(&lbl_8027EE08 + 0x12B, &lbl_8027EE08);
    M2C_FIELD(fn_8013BFFC(), s8 *, 0x24) = 1;
    fn_80024398(arg0, 0);
}

void fn_801EAC14(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    fn_8013FEC0();
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x54));
}

void fn_801EAE68(void *arg0) {
    M2C_UNK fn_8012C788(M2C_UNK *, void *);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8014004C(void *);
    extern M2C_UNK fn_801EAB90;
    
    void *temp_r4 = &fn_801EAB90;
    fn_8012C788(temp_r4, arg0);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x50));
    if (fn_8013FF94(arg0, -0x1000, 0) != 0) {
        fn_8014004C(arg0);
    }
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

void fn_801EB23C(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8014004C(void *);
    M2C_UNK fn_8016E9DC(void *);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x50));
    if (fn_8013FF94(arg0, -0x1000, 0) != 0) {
        fn_8014004C(arg0);
    }
    fn_8016E9DC(arg0);
}

void fn_801EB72C(s32 arg0) {
    M2C_UNK fn_80018AE4();
    M2C_UNK fn_800A8478();
    u32 fn_8013FF94(s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80140210(s32, u32, M2C_UNK);
    M2C_UNK fn_8018DB4C();
    extern u8 lbl_803671C0;
loop_2:
    if ((u8) lbl_803671C0 != 0) {
        fn_80018AE4();
        goto loop_2;
    }
    fn_800A8478();
    fn_8018DB4C();
    if (fn_8013FF94(arg0, 0x40, 0) != 0U) {
        fn_80140210(arg0, fn_8013FF94(arg0, 0x40, 0), 1);
    }
}

void fn_801EB7A8(s32 arg0) {
    extern u8 lbl_803671C0;
    extern u16 lbl_8027EE08[];
    
    if (lbl_803671C0 == 0) {
        fn_80018AF4();
    }
    fn_800A8450();
    fn_801EB81C(arg0);
    fn_801EB98C(arg0);
    if (fn_8013FF94(arg0, -0x1000, 0) == 0) {
        u16* ptr;
        ptr = &lbl_8027EE08[0x21F];
        fn_801658DC(ptr);
    }
}

void fn_801EBE00(void *arg0) {
    s32 fn_8003FCCC();
    u8 fn_8005BA10();
    s32 fn_80161FB8();
    void fn_80162054();
    void fn_801620AC(void* arg0);
    fn_801620AC(arg0);
    if (fn_8005BA10() != 0) {
        if (fn_80161FB8() == 0) {
            return;
        }
        fn_80162054();
        fn_801620AC(arg0);
        *(s32*)((char*)arg0 + 0x4C) = fn_8003FCCC();
        fn_8000C188(arg0);
    }
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

void fn_801ED9DC(void *arg0) {
    s32 fn_8000CAA0(s32, void *);
    void fn_8000BCA4(void *);

    if (fn_8000CAA0(1, arg0) != 0) {
        fn_8000BCA4(arg0);
    }
}

void fn_801EDA88(s32 arg0) {
    void *fn_8000CAA0(void *, void *);
    
    void *temp_r3 = fn_8000CAA0(0, 0);
    *(s32 *)(((u8 *) temp_r3) + 0x30) = arg0;
    *(u8 *)(((u8 *) temp_r3) + 0x38) = 0;
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

void fn_801EDB70(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x3A) = -1;
    M2C_FIELD(arg0, s8 *, 0x39) = 1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x38) != 1) {
        return;
    }
    fn_8000C070(0xA);
}

void fn_801EDEC8(void *arg0) {
    extern s32 lbl_80367110;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (lbl_80367110 & 4);
    lbl_80367110 |= 4;
}

void fn_801EDF7C(void *arg0) {
    M2C_UNK fn_800162B8();
    u8 fn_80040824();
    M2C_UNK fn_8014C718(M2C_UNK *, void *);
    extern M2C_UNK lbl_80330708;
    M2C_FIELD(arg0, u8 *, 0x39) = fn_80040824();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x39) != 0) {
        fn_8014C718(&lbl_80330708, arg0);
    }
    fn_800162B8();
}

void fn_801EDFCC(void) {
    extern u16 lbl_8032FF08[96];
    
    fn_80146AF0(lbl_8032FF08);
    fn_801487D0((u16*)lbl_8032FF08, 0x3E8);
    fn_8014876C((u16*)lbl_8032FF08, 0x64, 0x3E8);
}

void fn_801EE018(void *arg0) {
    extern u16 lbl_8032FF08[192];
    s16 temp_r5;

    temp_r5 = *(s16 *)((char *)arg0 + 0x3A);
    fn_80148980((u8 *)&lbl_8032FF08 + (temp_r5 * 0x30), 0x3E8, temp_r5);
}

void fn_801EE054(void *arg0) {
    extern void *lbl_8027F26C[];
    s8 fn_80148618(void *, s32);
    *(u16 *)((char *)arg0 + 0x3A) = (u16) fn_80148618((void *)&lbl_8027F26C[0x195], 1);
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

void fn_801F0A08(void *arg0) {
    M2C_UNK fn_8005376C();
    M2C_UNK fn_800C428C(s32);
    void *temp_r3;

    fn_800C428C(M2C_FIELD(arg0, s32 *, 0x38));
    fn_800C428C(M2C_FIELD(arg0, s32 *, 0x3C));
    fn_800C428C(M2C_FIELD(arg0, s32 *, 0x40));
    fn_800C428C(M2C_FIELD(arg0, s32 *, 0x44));
    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x10), M2C_UNK (**)(M2C_UNK), 0xC)(1);
    }
    fn_8005376C();
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

s32 fn_801F1644(void *arg0, s8 arg2) {
    u8 fn_800A8504(s32, s8);
    extern void *lbl_803683D8;
    if (fn_800A8504(M2C_FIELD(lbl_803683D8, s32 *, 0x18C), arg2) == 0) {
        return 3;
    }
    M2C_FIELD(arg0, s8 *, 4) = arg2;
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

void fn_801F1848(void *arg1) {
    s32 *fn_8018D900(s32);
    void fn_80007668(s32 *);

    if (((u8 *) arg1)[0x38] != 0) {
        s32 sp8;
        sp8 = *fn_8018D900(7);
        fn_80007668(&sp8);
    }
}

#include "common.h"
extern u16 lbl_8029A5FC;
extern u16 lbl_802EF4C8;
