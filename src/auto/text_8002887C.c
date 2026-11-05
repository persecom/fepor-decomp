/* Functions from 0x8002887C to 0x80033080, found by decomp-toolkit. */
#include "common.h"

void fn_80029784(void) {
    u8 fn_800AA188();
    M2C_UNK fn_800F214C();
    extern s32 lbl_80367110;
    if ((fn_800AA188() != 0) && !(lbl_80367110 & 0x80)) {
        fn_800F214C();
        fn_800F20E0();
    }
}

s32 fn_80029848(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0);
}

s32 fn_80029E4C(s32 arg0, void *arg1) {
    if (arg0 >= 0) {
        return M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0);
    }

    return 0;
}

void fn_8002AD04(void) {
    // Function body reconstructed from disassembly
    // Based on similar functions and the original assembly
}

void fn_8002C940(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, M2C_UNK);
    extern M2C_UNK lbl_802EF4E0;
    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) == 1) {
        fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002CCF0(void *arg0, void *arg1) {
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, u8);
    u8 fn_8003DD7C(void *);
    extern M2C_UNK lbl_802EF4E0;
    s32 temp_r4;

    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u32 *, 0x190) == (u32) M2C_FIELD(arg1, u32 *, 0x190)) {
        temp_r4 = M2C_FIELD(arg1, s32 *, 0x1A0);
        if ((temp_r4 & 2) && !(temp_r4 & 0x100000) && (fn_8003DD7C(M2C_FIELD(arg1, void **, 0x194)) != 0)) {
            fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), M2C_FIELD(M2C_FIELD(arg1, void **, 0x194), u8 *, 0x198));
        }
    }
}

void fn_8002CD70(void *arg1) {
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, M2C_UNK);
    u8 fn_800BF1E8(M2C_UNK *);
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_802EF4E0;
    M2C_FIELD(&lbl_802EF4C8, void **, 4) = arg1;
    if (fn_800BF1E8(&lbl_802EF4C8) != 0) {
        fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002CDCC(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, M2C_UNK);
    u8 fn_8003DC80(void *, void *);
    u8 fn_80093088(void *);
    extern M2C_UNK lbl_802EF4E0;
    if ((fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) == 1) && (fn_8003DC80(M2C_FIELD(arg0, void **, 4), arg1) != 0) && (fn_80093088(arg1) == 0)) {
        fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002CE5C(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    M2C_UNK fn_8002F6E8(M2C_UNK *, u8, u8, u8, M2C_UNK);
    s8 fn_8003B2D0(void *);
    extern M2C_UNK lbl_802EF4E0;
    u8 temp_r31;

    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) != 1) {
        temp_r31 = M2C_FIELD(arg1, u8 *, 0x1A8);
        if ((s8) temp_r31 != fn_8003B2D0(arg1)) {
            fn_8002F6E8(&lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
        }
    }
}

void fn_8002D398(void) {

}

void fn_8002D39C(void) {

}

void fn_8002D44C(void) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
}

void fn_8002D82C(void) {
    M2C_UNK fn_80146AF0();
    extern s32 lbl_80367254;
    fn_80146AF0();
    lbl_80367254 = 0;
}

void fn_8002DF54(void) {
    M2C_UNK fn_80147188(M2C_UNK);
    extern s8 lbl_80367AEC;
    extern s8 lbl_80367AEE;
    extern s8 lbl_80367AF6;
    fn_80147188(0);
    lbl_80367AEC = 0x64;
    lbl_80367AEE = 0x64;
    lbl_80367AF6 = 0;
}

s32 fn_8002EA74(void) {
    return 0;
}

void fn_8002F0B0(void) {
    M2C_UNK fn_800F20E0();
    fn_800F20E0();
}

void fn_8002F61C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}

void fn_8002F728(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = -1;
}

void fn_8002F76C(void) {

}

void fn_8002F770(void) {

}

void fn_8002F774(void) {

}

void *fn_8002F778(void) {
    extern void *lbl_802694B8;
    return (char*)&lbl_802694B8 + 0xDE;
}

s32 *fn_8002FA54(void) {
    M2C_UNK fn_8002BD44(s32, M2C_UNK);
    M2C_UNK fn_8002F658(M2C_UNK);
    s32 fn_8002F740();
    s32 *fn_8014CB14(M2C_UNK *, s32, M2C_UNK *);
    extern s32 lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    extern M2C_UNK lbl_80330708;
    s32 *var_r3;

    fn_8002BD44(lbl_802EF4C8, 0);
    var_r3 = &lbl_802EF4E0;
    if ((s32) lbl_802EF4E0 != 0) {
        fn_8002F658(0);
        var_r3 = fn_8014CB14(&lbl_80330708, fn_8002F740(), &lbl_80330708);
    }
    return var_r3;
}

void fn_80031508(s32 arg0) {
    M2C_UNK fn_80029C08(s32, s32 *);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_802EFCB8;
    
    s32 var_r3 = *(s32*)((char*)&lbl_802EF4C8 + 0x0);
    fn_80029C08(var_r3, &lbl_802EF4C8);
    fn_8002EB54(&lbl_802EFCB8, arg0);
}

void fn_80031598(s32 arg0) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32);
    u8 fn_8001DD04(s32, M2C_UNK *);
    M2C_UNK fn_8003CE88(s32, u8, M2C_UNK *);
    extern M2C_UNK lbl_80285088;
    extern M2C_UNK lbl_802EF4C8;
    fn_8003CE88(M2C_FIELD(&lbl_802EF4C8, s32 *, 4), fn_8001DD04(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), &lbl_802EF4C8), &lbl_802EF4C8);
    fn_8004A224();
    fn_8000CAA0(&lbl_80285088, arg0);
}

void fn_800315F8(void) {
    M2C_UNK fn_8004A1F0(M2C_UNK *, s8);
    M2C_UNK fn_8014CB14(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_80330708;
    s8 temp_r4;

    temp_r4 = (s8) M2C_FIELD(&lbl_80330708, f32 *, 0x524);
    M2C_FIELD(&lbl_802EF4C8, s8 *, 0xF) = temp_r4;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 0x10) = (s8) M2C_FIELD(&lbl_80330708, f32 *, 0x528);
    fn_8004A1F0(&lbl_802EF4C8, temp_r4);
    fn_8014CB14(&lbl_80330708, M2C_FIELD(&lbl_802EF4C8, s32 *, 0), &lbl_80330708);
}

void fn_80031748(s32 arg0) {
    s32 *fn_800285C0(s32 *, s32 *);
    M2C_UNK fn_8002A084(s32, s32, s32 *);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern M2C_UNK lbl_80285050;
    extern M2C_UNK lbl_80285348;
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_802EFD7C;
    extern u8 lbl_8036726E;
    fn_8002A084(lbl_802EF4C8, *fn_800285C0(&lbl_802EF4C8, &lbl_802EF4C8), &lbl_802EF4C8);
    if ((s8) lbl_8036726E == 0) {
        M2C_FIELD(&lbl_802EFD7C, M2C_UNK **, 4) = &lbl_80285050;
        M2C_FIELD(&lbl_802EFD7C, M2C_UNK **, 4) = &lbl_80285348;
        lbl_8036726E = 1;
    }
    fn_8002EB54(&lbl_802EFD7C, arg0);
}

void fn_800317D4(s32 arg0) {
    extern s32 lbl_802EF4C8;
    extern void *lbl_802EFCB8;

    fn_800285C0(&lbl_802EF4C8, &lbl_802EF4C8);
    fn_8002A8CC(lbl_802EF4C8, *(s32 *)(((char *)lbl_802EF4C8 + 4)), &lbl_802EF4C8 );
    fn_8002EB54(&lbl_802EFCB8, arg0);
}

void fn_8003182C(s32 arg0) {
    extern s32 lbl_802EF4C8;
    extern u8 lbl_8036726D;
    extern void *lbl_80285050;
    extern void *lbl_80285314;
    extern void *lbl_802EFD70;

    fn_8002A2BC(lbl_802EF4C8, &lbl_802EF4C8);
    if ((s8) lbl_8036726D == 0) {
        *(void **)((char *)lbl_802EFD70 + 4) = &lbl_80285050;
        *(void **)((char *)lbl_802EFD70 + 4) = &lbl_80285314;
        lbl_8036726D = 1;
    }
    fn_8002EB54(&lbl_802EFD70, arg0);
}

void fn_800319E8(s32 arg0) {
    M2C_UNK fn_8002A784(s32, u8 *);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern M2C_UNK lbl_80285050;
    extern M2C_UNK lbl_802852E0;
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_802EFD4C;
    extern u8 lbl_8036726A;
    u8 sp8;

    sp8 = M2C_FIELD(&lbl_802EF4C8, u8 *, 0x13);
    fn_8002A784(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), &sp8);
    if ((s8) lbl_8036726A == 0) {
        M2C_FIELD(&lbl_802EFD4C, M2C_UNK **, 4) = &lbl_80285050;
        M2C_FIELD(&lbl_802EFD4C, M2C_UNK **, 4) = &lbl_802852E0;
        lbl_8036726A = 1;
    }
    fn_8002EB54(&lbl_802EFD4C, arg0);
}

void fn_80031C18(s32 arg0) {
    M2C_UNK fn_8002B2E8(s32, s32 *);
    M2C_UNK fn_8002EB54(M2C_UNK *, s32);
    extern M2C_UNK lbl_80285050;
    extern M2C_UNK lbl_80285210;
    extern M2C_UNK lbl_80285244;
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_802EFD28;
    extern u8 lbl_80367267;

    void *temp_r3 = &lbl_802EF4C8;
    fn_8002B2E8(*(s32*)temp_r3, temp_r3);

    if ((s8) lbl_80367267 == 0) {
        M2C_FIELD(&lbl_802EFD28, M2C_UNK **, 4) = &lbl_80285050;
        M2C_FIELD(&lbl_802EFD28, M2C_UNK **, 4) = &lbl_80285244;
        M2C_FIELD(&lbl_802EFD28, M2C_UNK **, 4) = &lbl_80285210;
        lbl_80367267 = 1;
    }
    
    fn_8002EB54(&lbl_802EFD28, arg0);
}

void fn_800323BC(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    extern f64 lbl_80368E80;
    
    if ((u32) M2C_FIELD(arg1, u32 *, 0x40) != 0U) {
        s32 temp_r11;
        s32 temp_r10;
        s32 temp_r9;
        
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void (**)(s32 *, s32 *, s32 *), 8)(&temp_r11, &temp_r10, &temp_r9);
        fn_8000A258();
        fn_80009D74(temp_r11 + 0x20, (f32)(temp_r11 + 0x20), (f32)(temp_r10 + 0x30), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8) temp_r9);
        fn_8000A248();
        fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40));
        fn_80090990();
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}

void *fn_80032B4C(void) {
    extern void *lbl_802695F0;
    return (void *)((u32)&lbl_802695F0 + 0x14F);
}

void fn_80033024(void) {
    M2C_UNK fn_8004A224();
    fn_8004A224();
}
#include "common.h"

extern u16 lbl_80284E00[8];
extern u16 lbl_80284E20[8];
extern u32 lbl_802EF4E0[502];
extern u8 lbl_802CA518[151280];
extern u8 lbl_802B14E4[101760];
