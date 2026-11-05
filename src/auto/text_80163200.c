#include "common.h"
extern u32 lbl_802EF4C8[];
extern u16 lbl_80278080[];
extern u8 lbl_80330708[];
extern u16 lbl_803680E8[];
extern f32 lbl_8036AB94;
extern u16 lbl_80294604[];
extern f32 lbl_8036ABB0;
extern f32 lbl_8036ABBC;
extern f32 lbl_8036ABA0;

extern void (*lbl_802B14E4)(void **);
void fn_80163200(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    *(s8*)((u8*)arg0 + 0) = arg1;
    *(s8*)((u8*)arg0 + 1) = arg2;
    *(s8*)((u8*)arg0 + 2) = arg3;
    *(s8*)((u8*)arg0 + 3) = arg4;
}

void fn_80163214(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    *(s16*)((u8*)arg0 + 0) = arg1;
    *(s16*)((u8*)arg0 + 2) = arg2;
    *(s16*)((u8*)arg0 + 4) = arg3;
    *(s16*)((u8*)arg0 + 6) = arg4;
}

void fn_801635CC(void *arg0, s32 arg1) {
    u32 *fn_80037BD0(s32, s16);
    s16 var_r31;
    s16 var_r3;
    u32 *temp_r29;
    u8 var_r0;

    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    var_r31 = 0;
loop_18:
    if (var_r31 < 8) {
        if ((var_r31 >= 0) && (var_r31 <= 3) && !(M2C_FIELD(arg0, s32 *, 0x60) & 1)) {
            var_r0 = 0;
        } else if ((var_r31 >= 4) && (var_r31 <= 7) && !(M2C_FIELD(arg0, s32 *, 0x60) & 2)) {
            var_r0 = 0;
        } else {
            temp_r29 = fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), var_r31);
            if (((s32) M2C_FIELD(arg0, s32 *, 0x5C) == 1) && ((u32) *temp_r29 == 0U) && ((var_r31 == 0) || (var_r31 == 4) || ((u32) *fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), var_r31 - 1) != 0U))) {
                var_r0 = 1;
            } else {
                var_r0 = *temp_r29 != 0U;
            }
        }
        if (var_r0 == 0) {
            var_r31 += 1;
            goto loop_18;
        }
    }
    var_r3 = -1;
    if (var_r31 < 8) {
        var_r3 = var_r31;
    }
    M2C_FIELD(arg0, s16 *, 0x4C) = var_r3;
}

void fn_80163708(void *arg0) {
    *(s16 *)((char *)arg0 + 0x12) = 2;
    *(s16 *)((char *)arg0 + 0x14) = 2;
    *(s16 *)((char *)arg0 + 0x16) = 0x106;
    *(s16 *)((char *)arg0 + 0x18) = 0x10E;
}

void fn_80163E50(void *arg0) {
    *(s16 *)((char *)arg0 + 0x12) = 2;
    *(s16 *)((char *)arg0 + 0x14) = 2;
    *(s16 *)((char *)arg0 + 0x16) = 0x106;
    *(s16 *)((char *)arg0 + 0x18) = 0x86;
}

void fn_80164A24(void *arg0) {
    fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58));
}

void fn_801650DC(void *arg0) {
    *(s16 *)((char *)arg0 + 0x12) = 2;
    *(s16 *)((char *)arg0 + 0x14) = 0x1A;
    *(s16 *)((char *)arg0 + 0x16) = 0x106;
    *(s16 *)((char *)arg0 + 0x18) = 0x12A;
}

s32 fn_801651D0(void) {
    return 0x18;
}

s32 fn_801651D8(void) {
    return 0x10;
}

s32 fn_80165250(void) {
    return 0;
}

void fn_801658DC(s32 arg0, s32 arg1) {
    s32 fn_8000E0E4(s32);
    s32 strlen(void);
    void fn_800C96F8(s32, s32, s32);

    s32 temp_r31 = fn_8000E0E4(arg1);
    fn_800C96F8(arg0 + 0x3C, temp_r31, strlen());
}

M2C_UNK **fn_801659D4(M2C_UNK **arg0, s16 arg1) {
    M2C_UNK fn_800C428C(M2C_UNK **);
    M2C_UNK fn_800C9A60(void *, M2C_UNK);
    extern M2C_UNK lbl_8028FDB0;
    extern M2C_UNK lbl_80292230;
    extern M2C_UNK lbl_80293C2C;
    extern M2C_UNK lbl_80293C84;

    if (arg0 != NULL) {
        *arg0 = &lbl_80293C2C;
        *arg0 = &lbl_80293C84;
        fn_800C9A60((void *) (arg0 + 0x3C), -1);
        if (arg0 != NULL) {
            *arg0 = &lbl_80292230;
            *arg0 = &lbl_8028FDB0;
        }
    }

    if (arg1 > 0) {
        fn_800C428C(arg0);
    }

    return arg0;
}

void fn_80165B04(void *arg0) {
    void **r3 = (void **)((char *)arg0 + 0x50);
    return;
}

s32 fn_80165B0C(void *arg0) {
    return *(s32 *)((char *)arg0 + 0x4C);
}

s32 fn_80165B14(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

void fn_80165B1C(void) {
    M2C_UNK fn_80040844();
    M2C_UNK fn_800472D4();
    fn_80040844();
    fn_800472D4();
}

void *fn_801662F0(u32 *arg0) {
    extern u16 lbl_802778A8[];
    u32 temp = (u32)*arg0;
    if (temp == 0U) {
        return (void *)&lbl_802778A8[0xE7];
    }
    return (void *)fn_8000E0E4();
}

s32 fn_80166D8C(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80293D20;
    void *temp_r3;

    temp_r3 = fn_8000C0C0((M2C_UNK *)&lbl_80293D20);
    if (temp_r3 == NULL) {
        return 0;
    }
    return *(u8 *)((uintptr_t)temp_r3 + 0x2E) == 0;
}

void fn_8016746C(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *fn_8000C0C0(void *, void *);
    void fn_8000CAF0(void *, s32);
    void fn_8005C8B4(void *);
    void fn_801475FC(void *, s32);
    void fn_80166DD0(void *, s32, f32, f32);
    void *memset(void *, s32, s32);
    extern u8 lbl_80293D20[];
    extern u8 lbl_80330D68[];
    extern u8 lbl_80277A20[];
    extern f32 lbl_8036A92C;
    
    void *temp_r3 = fn_8000C0C0(lbl_80293D20, lbl_80293D20);
    
    if (temp_r3 == NULL) {
        return;
    }
    
    if (*(u8*)((u8*)temp_r3 + 0x2E) != 0) {
        return;
    }
    
    fn_8000CAF0(lbl_80293D20, arg1);
    memset(lbl_80330D68, 0, 0x124);
    
    *(f32*)((u8*)arg0 + 0xDC) = farg0;
    *(f32*)((u8*)arg0 + 0xE0) = farg1;
    *(f32*)((u8*)arg0 + 0xF4) = farg0;
    *(f32*)((u8*)arg0 + 0xF8) = farg1;
    *(f32*)((u8*)arg0 + 0x10C) = lbl_8036A92C;
    *(f32*)((u8*)arg0 + 0x110) = lbl_8036A92C;
    
    fn_8005C8B4(lbl_80277A20 + 0x42);
    fn_801475FC(lbl_80277A20 + 0x52, 0x64);
    fn_80166DD0(arg0, arg2, farg0, farg1);
}

void fn_80168D68(s32 arg0) {
    u32 fn_8005C6A0(void *);
    void fn_8006EEFC(void *, void *);
    M2C_UNK fn_8000C188(s32);
    extern u8 lbl_80277A20[];
    extern u8 lbl_80330D68[];
    u8 ok;

    if (!(fn_8005C6A0(lbl_80277A20 + 0x42) & 0x2000)) {
        ok = 0;
    } else {
        fn_8006EEFC(lbl_80330D68 + 0xC4, lbl_80277A20 + 0x42);
        ok = 1;
    }
    if (ok) {
        fn_8000C188(arg0);
    }
}

void fn_80168ED4(void *arg0) {
    M2C_UNK fn_8003F670(s32);
    M2C_UNK fn_80161F7C(void *);
    M2C_UNK fn_8016A650(void *, M2C_UNK);
    fn_80161F7C(arg0);
    fn_8003F670(M2C_FIELD(arg0, s32 *, 0x44));
    if (arg0 != NULL) {
        fn_8016A650(arg0, 0);
    }
}

void fn_80168F1C(void *arg0) {
    s32 fn_8003FCCC();
    M2C_UNK fn_80162018(void *);
    M2C_UNK fn_801620AC();
    fn_80162018(arg0);
    fn_801620AC();
    M2C_FIELD(arg0, s32 *, 0x44) = fn_8003FCCC();
}

void fn_80168F54(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    s32 fn_80161FB8();
    if (fn_80161FB8() != 0) {
        fn_8000C188(arg0);
    }
}

void fn_801695BC(s32 arg0, s32 arg2) {
    void *fn_8000CAA0(u16 *, u16 *);
    extern u16 lbl_80294030[24];

    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80294030, lbl_80294030);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg2;
}

void fn_80169640(void) {
    return;
}

void fn_8016969C(void) {
    s32 fn_8000C0C0(u16 *);
    u16 lbl_80293D8C;
    s32 temp_r31;

    temp_r31 = fn_8000C0C0(&lbl_80293D8C);
    if (temp_r31 != 0) {
        fn_800AA208();
        fn_8000C60C(temp_r31);
    }
}

void fn_80169AF0(void) {
    return;
}

void fn_80169AF4(void *arg0) {
    M2C_UNK fn_8000A408(s32);
    M2C_UNK fn_8013FED0(void *);
    M2C_UNK fn_801BE748(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_801BE748(arg0);
}

void fn_80169B34(void *arg0) {
    M2C_UNK fn_8000A3F8(s32);
    M2C_UNK fn_8013FEC0(void *);
    M2C_UNK fn_8000C188(void *);
    fn_8000A3F8(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FEC0(arg0);
    fn_8000C188(arg0);
}

void fn_80169B74(void *arg0) {
    M2C_UNK fn_8000A408(s32);
    M2C_UNK fn_8013FED0(void *);
    M2C_UNK fn_801BE6A8(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_801BE6A8(arg0);
}

void fn_80169BB4(void *arg0) {
    M2C_UNK fn_8000A408(s32);
    M2C_UNK fn_8013FED0(void *);
    M2C_UNK fn_8017FB80(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_8017FB80(arg0);
}

void fn_80169C54(void *arg0) {
    M2C_UNK fn_801C1464(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_801C1464(arg0);
}

void fn_80169D58(void *arg0) {
    void *temp_r3;
    temp_r3 = *(void**)((u8*)arg0 + 0x4C);
    fn_8000A3F8(temp_r3);
    if (*(u32*)((u8*)arg0 + 0x40) != 0) {
        fn_801090C0();
        fn_8000A420();
    }
    fn_8013FEC0(arg0);
    fn_8000C188(arg0);
}

void fn_80169DAC(void *arg0) {
    M2C_UNK fn_8016E9DC(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_8016E9DC(arg0);
}

void fn_80169DEC(void *arg0) {
    M2C_UNK fn_8000A3F8(s32);
    M2C_UNK fn_8013FEC0(void *);
    fn_8000A3F8(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FEC0(arg0);
    fn_8000C188(arg0);
}

void fn_80169E2C(void *arg0) {
    fn_8000A420(M2C_FIELD(arg0, s32 *, 0x50));
}

void fn_80169E50(void *arg0) {
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x50));
}

void fn_80169E74(void *arg0) {
    M2C_UNK fn_8016E92C(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_8016E92C(arg0);
}

void fn_8016A57C(void *arg0) {
    s32 fn_801090C0(void *);
    void *p;

    p = M2C_FIELD(arg0, void **, 0x40);
    if (p != NULL) {
        fn_8000A420(fn_801090C0(p));
    }
}

void fn_8016A5AC(void *arg0) {
    s32 fn_801090C0(void *);
    void *p;

    p = M2C_FIELD(arg0, void **, 0x40);
    if (p != NULL) {
        fn_8000A430(fn_801090C0(p));
    }
}

void fn_8016A5DC(void *arg0, void *arg1, f32 arg2) {
    M2C_UNK fn_80109020(void *);
    s32 fn_80109180(void *, void *);
    M2C_UNK fn_80109A54(s32, s32, f32);
    void *p;

    p = M2C_FIELD(arg0, void **, 0x40);
    if (p != NULL) {
        fn_80109020(p);
    }
    if (arg1 != NULL) {
        M2C_FIELD(arg0, void **, 0x40) = arg1;
        fn_80109A54(fn_80109180(arg1, arg0), 2, arg2);
    }
}

s32 fn_8016A650(s32 arg0, s16 arg1) {
    M2C_UNK fn_80140304(s32, s32);
    if (arg0 != 0) {
        fn_80140304(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_8016A6A4(void *arg0) {
    M2C_UNK fn_801403F0(void *);
    fn_801403F0(arg0);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    return arg0;
}

void fn_8016A738(void) {
    void fn_8013E300(void);
    void fn_8000C0C0(s32);
    s32 fn_8013FF94(s32, s32);
    void fn_801658DC(s32, s32);

    extern u8 lbl_80293D8C[];
    extern u8 lbl_80277BC0[];

    fn_8013E300();
    fn_8000C0C0((s32)&lbl_80293D8C);
    if (fn_8013FF94(-0x1000, 0) != 0) {
        fn_801658DC((s32)&lbl_80277BC0 + 0x14C, 0);
    }
}

void fn_8016A7F8(void) {
      extern u16 lbl_80277BC0[0x1F6 + 1];
      fn_8000E0E4(&lbl_80277BC0[0x5AC]);
  }

void *fn_8016A824(void) {
    extern u16 lbl_80277BC0;
    return (void *)((char *)&lbl_80277BC0 + 0x178);
}

void fn_8016A888(void) {
    extern u16 lbl_80277BC0[400];
    fn_8000E0E4(&lbl_80277BC0[0x196]);
}

void *fn_8016A8B4(void) {
    extern u16 lbl_80277BC0[];
    return (void *)&lbl_80277BC0[0x1A5];
}

void fn_8016ABB0(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4(&lbl_80277BC0[0x658]);
}

void *fn_8016ABDC(void) {
    extern u16 lbl_80277BC0[];
    return &lbl_80277BC0[0x34A];
}

s32 fn_8016ABEC(s32 arg1) {
    void *fn_8000C0C0(void *);
    extern u16 lbl_80293D8C;
    void *temp_r3 = &lbl_80293D8C;
    *(s32*)((u8*)fn_8000C0C0(temp_r3) + 0x50) = arg1;
    fn_8000C070(0xC);
    return 4;
}

void fn_8016AC30(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4(&lbl_80277BC0[0x6fc]);
}

void *fn_8016AC5C(void) {
    extern u16 lbl_80277BC0[80];
    return &lbl_80277BC0[0x1C8 / sizeof(u16)];
}

void fn_8016ADAC(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4(&lbl_80277BC0[0x3C4]);
}

void *fn_8016ADD8(void) {
    extern u16 lbl_80277BC0[80];
    return &lbl_80277BC0[0x1EC / sizeof(u16)];
}

void *fn_8016AE6C(void) {
    extern u16 lbl_80277BC0[];
    return &lbl_80277BC0[0x101];
}

void fn_8016AFC4(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4(&lbl_80277BC0[0x20A]);
}

void *fn_8016AFF0(void) {
    extern u16 lbl_80277BC0[];
    return &lbl_80277BC0[0x438];
}

void fn_8016B30C(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4(&lbl_80277BC0[0x230 / sizeof(u16)]);
}

void *fn_8016B338(void) {
    extern u16 lbl_80277BC0[];
    return &lbl_80277BC0[0x8E8];
}

void fn_8016B5E8(void) {
    M2C_UNK fn_8004327C();
    fn_80040844();
    fn_8004327C();
}

void fn_8016B60C(void) {
    void *fn_8000BCA4(void *);
    extern u16 lbl_80277EA0;
    void *temp_r3;

    temp_r3 = fn_8000BCA4(&lbl_80277EA0 + 0xB2);
    if (temp_r3 != NULL) {
        *(u32*)((char*)temp_r3 + 0x30) = *(u32*)((char*)temp_r3 + 0x30) | 4;
    }
}

void fn_8016B68C(void) {
    void *fn_8000BCA4(void *);
    extern u16 lbl_80277EA0[40]; // 80 bytes / 2 bytes per u16 = 40

    void *temp_r3;

    temp_r3 = fn_8000BCA4((u8 *)lbl_80277EA0 + 0x59); // Direct offset calculation
    if (temp_r3 != NULL) {
        *(u8 *)((u8 *)temp_r3 + 0x35) = 0xA;
        *(u32 *)((u8 *)temp_r3 + 0x30) &= 0xFFFFFFEF;
    }
}

void fn_8016B700(void) {
    extern u16 lbl_80294550[];
    fn_8000CAA0(lbl_80294550, fn_800C0658(), lbl_80294550);
}

void fn_8016B75C(void) {
    s32 temp_r31;
    
    temp_r31 = fn_800C0658();
    fn_80040844();
    fn_80043A00(0x168, 0x10E, temp_r31);
}

void fn_8016E0E4(void *arg0) {
    M2C_UNK fn_800076AC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009B8C(u8);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8016DBA4(void *, f32, f32);
    extern f32 lbl_8036AA34;
    extern f32 lbl_8036AAB4;
    extern f32 lbl_8036AB24;
    extern f32 lbl_8036AB28;
    extern f32 lbl_8036AB2C;
    extern f32 lbl_8036AB30;
    extern f32 lbl_8036AB34;
    extern f32 lbl_8036AB38;
    fn_8000A258();
    fn_80009B8C(M2C_FIELD(arg0, u8 *, 0x58));
    fn_80009D74(lbl_8036AA34, lbl_8036AA34, lbl_8036AB2C, lbl_8036AAB4);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x12);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_8036AA34, lbl_8036AA34, lbl_8036AB24, lbl_8036AB28);
    fn_800076AC(0, 0, 0, 0x80);
    fn_80007884();
    fn_8000A258();
    fn_80009D74(lbl_8036AA34, lbl_8036AA34, lbl_8036AB30, lbl_8036AAB4);
    fn_8000A248();
    fn_8016DBA4(arg0, lbl_8036AB34, lbl_8036AB38);
    fn_8000A258();
    fn_80009B8C(0xFFU);
    fn_8000A248();
}

void fn_8016EC70(void) {
    return;
}

void fn_8016ECDC(void) {
    M2C_UNK fn_8003BE50(void *);
    register void *temp_r31;
    void *temp_r30;
    u8 fn_80091D74(void *);

    temp_r30 = M2C_FIELD(&lbl_802EF4C8, void **, 0);
    temp_r31 = M2C_FIELD(&lbl_802EF4C8, void **, 4);
    if ((temp_r30 != NULL) && (M2C_FIELD((unsigned)temp_r30, s32 *, 0x1A0) & 0x800000) && (fn_80091D74(temp_r30) == 0)) {
        fn_8003BE50(temp_r30);
    }
    if ((temp_r31 != NULL) && (M2C_FIELD(temp_r31, s32 *, 0x1A0) & 0x800000) && (fn_80091D74(temp_r31) == 0)) {
        fn_8003BE50(temp_r31);
    }
}

void fn_8016F0C4(void *arg0) {
    u8 temp = *(u8 *)((uintptr_t)arg0 + 0x65);
    fn_8000C070(temp);
}

void fn_8016F194(void *arg0) {
    fn_8000A408(*(s32**)((u8*)arg0 + 0x5C));
    fn_8013FED0(arg0);
    fn_801AE3F8(arg0);
}

void fn_8016F1D4(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
}

void fn_8016F2EC(void *arg0) {
    fn_8000A408(*(s32**)((u8*)arg0 + 0x5C));
    fn_8013FED0(arg0);
    fn_80193DD8(arg0);
}

void fn_8016F32C(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
}

void fn_8016F378(void *arg0) {
    M2C_UNK fn_8000C5E0(void *);
    M2C_UNK fn_80023FF4(void *);
    s8 temp_r31;
    void *temp_r3;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x5C));
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r31 = (s8) M2C_FIELD(temp_r3, u8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), u8 *, 0x62) = (u8) temp_r31;
    fn_8000A420(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FEC0(arg0);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 0x100, 0));
    fn_8000C188(arg0);
}

void fn_8016F484(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
}

void fn_8016F5DC(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
}

void fn_8016FE5C(void) {
    return;
}

void fn_80170034(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x5C));
}

void fn_80170794(void *arg0) {
    s16 fn_80164E78(void *, s32);
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x4C);
    M2C_FIELD(temp_r31, s8 *, 0x48) = 1;
    M2C_FIELD(temp_r31, s16 *, 0x4C) = fn_80164E78(temp_r31, 0);
}

void fn_80170E08(void *arg0) {
    *(u8*)((char*)arg0 + 0x54) = 1;
}

u8 fn_801723A0(u32 *arg0, s32 arg1) {
    u8 fn_800939FC(s32, u32);
    u32 temp_r0;

    if ((arg0 == NULL) || (temp_r0 = *arg0, ((temp_r0 == 0U) != 0))) {
        return 0U;
    }
    return fn_800939FC(arg1, temp_r0);
}

void fn_80172C44(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x5C));
}

s32 fn_80172C68(void *arg0) {
    if ((arg0 == NULL) || ((u32) M2C_FIELD(arg0, u32 *, 0) == 0U)) {
        return 0;
    }
    return (((u8) M2C_FIELD(arg0, u8 *, 5) >> 7U) & 1) != 0;
}

void fn_801731FC(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x5C));
}

void fn_801734D8(void *arg0) {
    s32 temp_r30;
    void **temp_r31;
    void **temp_r3;
    void *temp_r4;
    void fn_80143570(s32);
    void fn_801436AC(s32);
    void fn_80143784(s32, s32);
    void fn_80143C9C(s32);
    void fn_8000CAA0(void *, void *);
    void fn_8000C188(void *);
    void fn_8013FEC0(void *);

    extern u32 lbl_802EF4C8[];
    extern u8 lbl_80294B10[];

    temp_r3 = (void **)((u32 *)arg0 + 0x4C / sizeof(u32));
    temp_r31 = (void **)((u32 *)arg0 + 0x50 / sizeof(u32));
    ((void (*)(void **, s32))((u32 *)*temp_r3)[0x34 / sizeof(u32)])(temp_r3, lbl_802EF4C8[0]);
    ((void (*)(void **, s32))((u32 *)*temp_r31)[0x34 / sizeof(u32)])(temp_r31, lbl_802EF4C8[1]);
    temp_r30 = ((s32 *)arg0)[0x54 / sizeof(s32)];
    fn_80143784(temp_r30, lbl_802EF4C8[0]);
    fn_80143784(temp_r30, lbl_802EF4C8[1]);
    fn_80143570(temp_r30);
    // Simple loop without complex field access
    {
        s8 i;
        for (i = 0; i < 8; i++) {
            temp_r4 = *(void**)((u32*)arg0 + 0x68 / sizeof(u32));
            if ((u32)temp_r4 != 0U) {
                fn_801436AC(temp_r30);
            }
        }
    }
    fn_80143C9C(temp_r30);
    fn_8013FEC0(arg0);
    fn_8000CAA0(lbl_80294B10, arg0);
    fn_8000C188(arg0);
}

void fn_80174204(void) {
    return;
}

void fn_80174E0C(s32 arg0) {
    void fn_800AAE78(s32, s32, s32);
    void fn_8013FED0(s32);

    fn_800AAE78(0xCC, -1, -1);
    fn_8013FED0(arg0);
}

u8 fn_80175924(s32 **arg0, s32 arg1) {
    s32 *temp_r5;

    temp_r5 = *arg0;
    return fn_80093DA8(arg1, *temp_r5, temp_r5);
}

void fn_80176E78(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x431 * 0x2]);
}

void *fn_80176EA4(void) {
    return &lbl_80278080[0x874];
}

void fn_8017729C(void) {
    fn_8000E0E4(&lbl_80278080[0x235]);
}

extern u16 lbl_80278080[257];
void *fn_801772C8(void) {
    return &lbl_80278080[0x23A];
}

u8 fn_801772D8(void) {
    extern u8 lbl_80330708[];
    u8 var_r4;

    var_r4 = 0;
    if (lbl_80330708[0x51] != 0) {
        var_r4 = 2;
    }
    return var_r4;
}

void fn_80177404(void) {
    fn_8000E0E4(&lbl_80278080[0x922]);
}

void *fn_80177430(void) {
    return &lbl_80278080[0x936];
}

void fn_801774A8(void) {
    fn_8000E0E4(&lbl_80278080[0x94A]);
}

void *fn_801774D4(void) {
    u16* temp = &lbl_80278080[0x4AF];
    return (void*)temp;
}

void fn_8017754C(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x12e4]);
}

void *fn_80177578(void) {
    extern u16 lbl_80278080[];
    return &lbl_80278080[0x4AF];
}

void fn_801775F0(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x1334]);
}

void *fn_8017761C(void) {
    return &lbl_80278080[0x4d7];
}

void fn_80177AD4(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x4EC / sizeof(u16)]);
}

void *fn_80177B00(void) {
    extern u16 lbl_80278080[];
    return &lbl_80278080[0x13d8];
}

u8 fn_80177B10(void) {
    return 0;
}

u16 fn_80177C78(void) {
    return *(u16 *)((char *)lbl_80278080 + 0x50A * 2);
}

void *fn_80177CA4(void) {
    return (void *)&lbl_80278080[0x516];
}

void fn_80177E48(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0xA5A]);
}

void *fn_80177E74(void) {
    extern u16 lbl_80278080[];
    return &lbl_80278080[0x14e0];
}

void fn_8017807C(void) {
    fn_8000E0E4(&lbl_80278080[0x1534]);
}

void *fn_801780A8(void) {
    return (char *)&lbl_80278080 + 0x55B;
}

void fn_80178350(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x1634]);
}

void *fn_8017837C(void) {
    return (char *)&lbl_80278080 + 0x596;
}

s32 fn_8017838C(void) {
    u8 fn_8014D8DC(u8 *);
    extern u8 lbl_80330708[];
    u8 temp_r3;
    
    temp_r3 = fn_8014D8DC(lbl_80330708);
    return 2 & ~((temp_r3 | -temp_r3) >> 31);
}

void fn_8017849C(void) {
    fn_8000E0E4(&lbl_80278080[0xB3C]);
}

void *fn_801784C8(void) {
    return (char *)&lbl_80278080 + 0x5A7;
}

void fn_80178628(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x5C0 / sizeof(u16)]);
}

void *fn_80178654(void) {
    return (char *)&lbl_80278080 + 0x5CB;
}

s32 fn_80178664(void) {
    return 0;
}

s32 fn_80178A64(void) {
    return 0;
}

s32 fn_80178A6C(void) {
    return 0;
}

s32 fn_80178A74(void) {
    return 0x1C;
}

void fn_80179248(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x66A / sizeof(u16)]);
}

void *fn_80179274(void) {
    return (char *)&lbl_80278080 + 0x674;
}

u8 fn_80179284(void) {
    s32 fn_800C3E54(M2C_UNK *);
    extern M2C_UNK lbl_803200AC;
    s32 temp_r3;
    u8 var_r0;

    temp_r3 = fn_800C3E54(&lbl_803200AC);
    var_r0 = 2;
    if (((u32) (-temp_r3 | temp_r3) >> 0x1FU) != 0) {
        var_r0 = 0;
    }
    return var_r0;
}

void fn_801793B4(void) {
    M2C_UNK fn_80009B80(M2C_UNK);
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_80009B80(0x80);
    fn_8000A248();
}

void fn_80179594(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4(&lbl_80278080[0x690 / sizeof(u16)]);
}

void *fn_801795C0(void) {
    return (char *)&lbl_80278080 + 0x69A;
}

s32 fn_80179D40(s32 arg0) {
    fn_8014510C();
    return arg0;
}

void fn_8017A3E0(void *arg0, s32 arg1, u8 arg2) {
    memset(M2C_FIELD(arg0, s32 *, 4), arg2, arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

void fn_8017A430(void *arg0, s32 arg1, s32 arg2) {
    memcpy(M2C_FIELD(arg0, s32 *, 4), arg2, arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

void fn_8017A480(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80234450(s32, s32);
    s32 *ptr = (s32 *)M2C_FIELD(arg0, s32 *, 4);
    fn_80234450(*ptr, arg2);
    *ptr += arg1;
}

void fn_8017A574(void *arg0, u32 arg1) {
    u8* r5_ptr = *(u8**)((char*)arg0 + 4);
    *(u8**)((char*)arg0 + 4) = r5_ptr + 1;
    *r5_ptr = (u8)(arg1 >> 24);

    r5_ptr = *(u8**)((char*)arg0 + 4);
    *(u8**)((char*)arg0 + 4) = r5_ptr + 1;
    *r5_ptr = (u8)(arg1 >> 16);

    r5_ptr = *(u8**)((char*)arg0 + 4);
    *(u8**)((char*)arg0 + 4) = r5_ptr + 1;
    *r5_ptr = (u8)(arg1 >> 8);

    r5_ptr = *(u8**)((char*)arg0 + 4);
    *(u8**)((char*)arg0 + 4) = r5_ptr + 1;
    *r5_ptr = (u8)arg1;
}

void fn_8017A5C4(void *arg0, u8 arg1) {
    u8 *temp_r5;
    u8 *temp_r5_2;

    temp_r5 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r5 + 1);
    *temp_r5 = (u8) (arg1 >> 8U);
    temp_r5_2 = M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r5_2 + 1);
    *temp_r5_2 = arg1;
}

void fn_8017A5EC(void *arg0, s8 arg1) {
    s8 **temp_r5 = (s8 **)((u8*)arg0 + 4);
    *temp_r5 += 1;
    **temp_r5 = arg1;
}

void fn_8017A7D4(void *arg0, s32 arg1) {
    extern u16 lbl_802842A4;
    extern u16 lbl_802842B8;
    *(u16**)((char*)arg0 + 0x10) = &lbl_802842A4;
    *(s32*)((char*)arg0 + 4) = 0;
    *(s32*)arg0 = 0;
    *(s32*)((char*)arg0 + 8) = 0;
    *(u8*)((char*)arg0 + 0xC) = 0;
    *(u16**)((char*)arg0 + 0x10) = &lbl_802842B8;
    *(s32*)((char*)arg0 + 4) = arg1;
    *(s32*)arg0 = arg1;
    *(u8*)((char*)arg0 + 0xC) = 0;
}

void fn_8017A810(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK memcpy(s32, s32, s32);
    memcpy(arg2, M2C_FIELD(arg0, s32 *, 4), arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
}

u8 fn_8017A9DC(void *arg0) {
    u8 *temp_r4;

    temp_r4 = *(u8 **)((char *)arg0 + 4);
    *(u8 **)((char *)arg0 + 4) = temp_r4 + 1;
    return *temp_r4;
}

s32 fn_8017B8F8(s32 arg1) {
    return arg1 != 0;
}

void fn_8017BE00(void *arg0) {
    M2C_UNK fn_80105D4C(s32, u8, s32);
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105D4C(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0x3C) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x58) = 0;
}

void fn_8017BF6C(void *arg0) {
    f32 fn_800067BC(M2C_UNK, s32, f32, f32, f32, f32);
    extern f32 lbl_8036AB94;
    extern f32 lbl_8036ABA0;
    extern f32 lbl_8036ABBC;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34) + 1;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (temp_r0 >= 0x20) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x58) = 2;
        M2C_FIELD(M2C_FIELD((unsigned short)arg0, void **, 0x30), f32 *, 0x60) = (f32) lbl_8036ABBC;
        temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
        fn_80105D4C(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
        fn_8000C188(arg0);
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x60) = fn_800067BC(5, temp_r4, lbl_8036ABBC, lbl_8036AB94, (f32) temp_r4, lbl_8036ABA0);
}

void fn_8017C028(void *arg0) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105D4C(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
}

void fn_8017C05C(void *arg0) {
    f32 fn_800067BC(M2C_UNK, s32, f32, f32, f32, f32);
    extern f32 lbl_8036AB94;
    extern f32 lbl_8036ABA0;
    extern f32 lbl_8036ABBC;
    s32 temp_r0;
    s32 temp_r4_2;
    void *temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34) + 1;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (temp_r0 >= 0x20) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        temp_r4 = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(temp_r4, s32 *, 0x58) = 0;
        fn_8000C188(temp_r4);
        return;
    }
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x60) = fn_800067BC(5, temp_r4_2, lbl_8036ABBC, lbl_8036AB94, (f32) temp_r4_2, lbl_8036ABA0);
}

void fn_8017C0EC(void *arg0) {
    M2C_UNK fn_80105CEC(s32, u8, s32);
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105CEC(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0x3C) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x58) = 0;
}

void fn_8017C140(void *arg0) {
    extern f32 lbl_8036AB94;
    *(s32 *)((char *)arg0 + 0x34) = 0;
    *(s32 *)((char *)*(void **)((char *)arg0 + 0x30) + 0x58) = 2;
    *(s32 *)((char *)*(void **)((char *)arg0 + 0x30) + 0x5C) = *(s32 *)((char *)arg0 + 0x38);
    *(f32 *)((char *)*(void **)((char *)arg0 + 0x30) + 0x60) = lbl_8036AB94;
}

void fn_8017C170(void *arg0) {
    f32 fn_800067BC(M2C_UNK, s32, f32, f32, f32, f32);
    extern f32 lbl_8036AB94;
    extern f32 lbl_8036ABA0;
    extern f32 lbl_8036ABBC;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34) + 1;
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r0;
    if (temp_r0 >= 0x20) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x58) = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x60) = (f32) lbl_8036AB94;
        temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
        fn_80105CEC(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
        fn_8000C188(arg0);
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x60) = fn_800067BC(5, temp_r4, lbl_8036AB94, lbl_8036ABBC, (f32) temp_r4, lbl_8036ABA0);
}

void fn_8017C304(void *arg0) {
    s32 temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x4C);
    fn_80105CEC(temp_r5 + 0x1BC, M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u8 *, 0x18), temp_r5);
}

void fn_8017C3C8(void *arg0, void *arg1, s32 arg2) {
    extern f32 lbl_8036ABA0;
    s32 *temp_r3;
    s32 temp_r4;
    
    temp_r3 = *(s32 **)((char *)arg0 + 0x30);
    *(s32 *)((char *)arg0 + 0x34) = 0;
    *(f32 *)((char *)temp_r3 + 0x60) = lbl_8036ABA0;
    
    temp_r4 = *(s32 *)((char *)arg0 + 0x18c);
    fn_80105A5C(temp_r4 + 0x1c, arg1);
}

void fn_8017DEE8(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4) != 0U) {
        fn_8006D8E8();
    }
}

void fn_8017DF14(void *arg0) {
    s32 fn_8006D948(u16 *, u16 *);
    extern u16 lbl_802788A0[17];
    u16* ptr = (u16*)&lbl_802788A0[0];
    *(s32*)arg0 = fn_8006D948(ptr, ptr);
}

s32 fn_8017DF4C(void) {
    return 0;
}

void fn_8017E1B8(void *arg0, u32 arg1) {
    if (*(u32 *)((u8 *)arg0 + 0x30) == arg1) {
        fn_8000C60C();
    }
}

void fn_8017E2AC(void *arg0) {
    f32 temp = *(f32*)((u8*)arg0 + 0x44);
    *(f32*)((u8*)*(void**)((u8*)arg0 + 0x30) + 0x4) = temp;
}

void fn_8017E35C(void) {
    u32 fn_8000C0C0(u16 *param);
    void fn_8000C070(s32 param);
    extern u16 lbl_80295550;
    
    if (fn_8000C0C0(&lbl_80295550) != 0) {
        fn_8000C070(0);
    }
}

void fn_8017E8A0(void) {
    M2C_UNK fn_8017E8C0();
    fn_8017E8C0();
}

void fn_8017F1D4(void *arg0) {
    M2C_UNK fn_8006D8E8(s32);
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F474(s32 arg0) {
    void *fn_8000CAF0(M2C_UNK *);
    extern M2C_UNK lbl_802954DC;
    if (arg0 != 0) {
        M2C_FIELD(fn_8000CAF0(&lbl_802954DC), s32 *, 0x30) = arg0;
    }
}

void fn_8017F4B0(void *arg0) {
    f32 fn_80059F64(s32, f32, f32, f32, f32);
    extern f32 lbl_8036AC2C;
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC84;
    extern f64 lbl_8036AC38;

    s32 *temp_r31 = (s32 *) arg0;
    s32 temp_r3 = M2C_FIELD(temp_r31, s32 *, 0x3c);
    M2C_FIELD(temp_r31, s32 *, 0x3c) = temp_r3 + 1;

    M2C_FIELD(temp_r31, s32 *, 0x40) = (s32) fn_80059F64(temp_r3, lbl_8036AC2C, lbl_8036AC30, lbl_8036AC84, (f32) M2C_FIELD(temp_r31, s32 *, 0x3c));
    
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x3c) >= 5) {
        M2C_FIELD(temp_r31, s32 *, 0x3c) = 0;
        fn_8000C188(arg0);
    }
}

void fn_8017F5C8(void *arg0) {
    M2C_UNK fn_8006D8E8(s32);
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F86C(void *arg0) {
    M2C_UNK fn_8006D8E8(s32);
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F9A8(void) {
    extern u16 lbl_802788B8[];
    fn_8005C8B4(&lbl_802788B8[0x244]);
}

void fn_8017FC00(void) {
    fn_8013FF94(0x81, 0);
    fn_8013AD70((s32*)*(u32*)((u8*)&lbl_80330708 + 0xB0));
}

s32 fn_8018256C(void) {
    return 1;
}
#include "common.h"
extern u32 lbl_802EF4C8[];
extern u16 lbl_80278080[];
extern u16 lbl_80294550[];
extern f32 lbl_8036AB94;
extern u16 lbl_80277EA0;
