/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
extern void* lbl_803674E8;
extern f32 lbl_803696C8;

extern s32 lbl_803682F0;
extern void *lbl_8026CC58;
extern void *lbl_80289998;
extern f32 lbl_80369690;
extern f32 lbl_803696A8;
extern f32 lbl_803696AC;

extern void* lbl_80367488;
extern s32 lbl_803693C0;
extern s32 lbl_803693C4;
extern f64 lbl_803693C8;
extern f32 lbl_803693D4;
extern f32 lbl_803693D8;
extern f32 lbl_803693E4;

extern u8 lbl_80330708[1400];

extern u16 *lbl_803674E0;

#pragma inline

extern f32 lbl_8036A118;
extern f32 lbl_8036A120;
extern f32 lbl_8036A130;
extern f32 lbl_8036A154;

extern f32 lbl_80369768;
extern u16 lbl_80289A60[];

extern u8 lbl_80289B00[16];

extern void* fn_800980D4(s32 arg0);
extern void fn_8017E394(void* arg0, void* arg1, void* arg2, s32 arg3);

extern u8 lbl_80289EB8[16];

extern f32 lbl_803697E0;
extern f32 lbl_803697E4;

#pragma scheduling reset

s32 fn_80098170(void **arg0) {
    s32 fn_800A8A88(s32);
    void *temp_r3;
    void *var_r0;
    void *var_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, void **, 0x280);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r3 != NULL) {
            var_r3 = M2C_FIELD(temp_r3, void **, 0x280);
        } else {
            var_r3 = NULL;
        }
        return fn_800A8A88(M2C_FIELD(var_r3, s32 *, 0x188));
    }
    return 0;
}

u8 fn_800981D0(void **arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *var_r0;
    void *var_r3;

    temp_r3_2 = *arg0;
    if (temp_r3_2 != NULL) {
        var_r0 = M2C_FIELD(temp_r3_2, void **, 0x280);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r3_2 != NULL) {
            var_r3 = M2C_FIELD(temp_r3_2, void **, 0x280);
        } else {
            var_r3 = NULL;
        }
        return M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8);
    }
    temp_r3 = M2C_FIELD(temp_r3_2, void **, 0x190);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u8 *, 8);
}

void fn_800983E0(void *arg0, void **arg1) {
    f32 fn_80023068(M2C_UNK *, f32, f32, f32);
    extern M2C_UNK lbl_802CA518;
    extern f32 lbl_803697D0;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f2;
    void *temp_r6;
    void *var_r0;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_3;

    temp_r6 = *arg1;
    if (temp_r6 != NULL) {
        var_r0 = M2C_FIELD(temp_r6, void **, 0x280);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r6 != NULL) {
            var_r3 = M2C_FIELD(temp_r6, void **, 0x280);
        } else {
            var_r3 = NULL;
        }
        sp8 = M2C_FIELD(var_r3, f32 *, 4);
        if (temp_r6 != NULL) {
            var_r3_2 = M2C_FIELD(temp_r6, void **, 0x280);
        } else {
            var_r3_2 = NULL;
        }
        spC = M2C_FIELD(var_r3_2, f32 *, 8);
        if (temp_r6 != NULL) {
            var_r3_3 = M2C_FIELD(temp_r6, void **, 0x280);
        } else {
            var_r3_3 = NULL;
        }
        sp10 = M2C_FIELD(var_r3_3, f32 *, 0xC);
    } else {
        temp_f1 = lbl_803697D0 + (f32) (s8) M2C_FIELD(temp_r6, u8 *, 0x19E);
        temp_f2 = lbl_803697D0 + (f32) (s8) M2C_FIELD(temp_r6, u8 *, 0x19F);
        sp8 = temp_f1;
        spC = temp_f2;
        sp10 = fn_80023068(&lbl_802CA518, temp_f1, temp_f2, lbl_803697D0);
    }
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 4) = spC;
    M2C_FIELD(arg0, f32 *, 8) = sp10;
}

void *fn_800984FC(void **arg0) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 == NULL) {
        return NULL;
    }
    if (*(int *)((char *)temp_r3 + 0x28C) == 0) {
        return NULL;
    }
    return (char *)temp_r3 + 0x28C;
}

void fn_80098524(void **arg0) {
    void *temp_r3;
    u32 var_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r3 = *(u32 *)((char *)temp_r3 + 0x280);
    } else {
        var_r3 = 0U;
    }
    if (var_r3 != 0U) {
        fn_8004BE88(0);
    }
}

void fn_80098A9C(s32 arg0) {
    extern u16 lbl_80330EAC[];
    extern u8 lbl_80289C54[];

    if (lbl_80330EAC[0x6D6] & 0x200)
    {
        fn_8019A7E8();
        return;
    }

    fn_8000CAA0(lbl_80289C54, arg0, lbl_80289C54);
}

void fn_80098AE4(void *arg0) {
    M2C_UNK fn_8004B1B4(s32);
    M2C_UNK fn_8009799C();
    M2C_UNK fn_8004FE98(s32, M2C_UNK);
    M2C_UNK fn_8005376C();
    M2C_UNK fn_800980D4(s32);
    s32 fn_800980E8(s32);
    u8 fn_80098568();
    register s32 var_r31;
    unsigned int temp_r3;

    fn_8005376C();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x40) == 0) {
        fn_8009799C();
        var_r31 = 0;
        do {
            temp_r3 = fn_800980E8(var_r31);
            if (temp_r3 != 0) {
                fn_800980D4(var_r31);
                if (fn_80098568() != 0) {
                    fn_8004B1B4(temp_r3);
                } else {
                    fn_8004FE98(temp_r3, 0);
                }
            }
            var_r31 += 1;
        } while (var_r31 < 3);
    }
}

void fn_80098B74(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
}

void fn_80098B80(void *arg0) {
    M2C_UNK fn_80095678();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_80095678();
    }
}

void fn_80098BAC(void *arg0) {
    M2C_UNK fn_800956A0();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_800956A0();
    }
}

void fn_80098BD8(void *arg0) {
    M2C_UNK fn_801B61CC();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_801B61CC();
    }
}

void fn_80098D04(s32 arg0) {
    M2C_UNK fn_8018CAD8(M2C_UNK, M2C_UNK, s32);
    fn_8018CAD8(0x64, 0x1E, arg0);
}

void fn_80098D30(void *arg0) {
    s32 temp_r31;
    s32 temp_r30;

    fn_80055204(*((s32**)arg0 + 0xE), 0);
    fn_8000D354();
    temp_r31 = fn_80098140();
    temp_r30 = fn_80098110();
    fn_8018CAD8(0x32, 0x1E, arg0);
    fn_8018CA68(temp_r31);
    fn_8018CA68(temp_r30);
}

void fn_80098E1C(s32 arg0) {
    s32 fn_800980E8(s32);
    void fn_80050BF4(s32);
    void fn_800980D4(s32);
    u8 fn_80098568(void);
    void fn_80183B24(s32, s32);
    
    register s32 var_r31;
    register s32 temp_r3;
    
    var_r31 = 0;
    do {
        temp_r3 = fn_800980E8(var_r31);
        if (temp_r3 != 0) {
            fn_80050BF4(0);
            fn_800980D4(var_r31);
            if (fn_80098568() != 0) {
                fn_80183B24(temp_r3, arg0);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 3);
}

void fn_80099994(void *arg0) {
    M2C_UNK fn_8004FC70(s32);
    u8 fn_800504FC(s32, M2C_UNK);
    u8 fn_80096C78(s16);
    s32 fn_800971F8(s16);
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r3_2;
    u8 temp_r3;

    temp_r29 = fn_80098140();
    temp_r30 = fn_800971F8(M2C_FIELD(arg0, s16 *, 0x46));
    temp_r3 = fn_80096C78(M2C_FIELD(arg0, s16 *, 0x46));
    M2C_FIELD(arg0, s16 *, 0x44) = -1;
    if ((temp_r30 & 0xFFC00000) && (fn_800504FC(temp_r29, 4) != 0)) {
        M2C_FIELD(arg0, s16 *, 0x44) = 4;
    } else {
        temp_r3_2 = fn_80096D64();
        if (temp_r3_2 != 3) {
            if (temp_r3_2 < 3) {
                if (temp_r3_2 != 0) {
                    if (temp_r3_2 < 0) {

                    } else if ((temp_r3 != 0) && (fn_800504FC(temp_r29, 0xD) != 0)) {
                        M2C_FIELD(arg0, s16 *, 0x44) = 0xD;
                    } else {
                        M2C_FIELD(arg0, s16 *, 0x44) = 0xC;
                    }
                } else {
                    goto block_8;
                }
            }
        } else {
block_8:
            if ((temp_r3 != 0) && (fn_800504FC(temp_r29, 3) != 0)) {
                M2C_FIELD(arg0, s16 *, 0x44) = 3;
            } else {
                M2C_FIELD(arg0, s16 *, 0x44) = 2;
            }
        }
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x44) < 0) {
        fn_800056A0(0);
        fn_8000C070(arg0, 7);
        return;
    }
    fn_8004FC70(temp_r29);
}

void fn_80099BF8(void *arg0) {
    s32 temp_r26;
    s32 temp_r29;
    s32 var_r27;
    s32 arg0_0;

    temp_r29 = fn_800971F8(M2C_FIELD(arg0, s16 *, 0x46));
    arg0_0 = fn_80096EEC((s32 (*)[]) &arg0, temp_r29);
    var_r27 = 0;
loop_4:
    if (var_r27 < arg0_0) {
        temp_r26 = ((s32*)(&arg0))[arg0_0 - (var_r27 + 1)];
        if ((u32) (temp_r26 + 0xFFFC0000) != 0U) {
            *(s32*)((char*)arg0 + 0x60) = temp_r26;
        }
        var_r27 += 1;
        goto loop_4;
    }
    if (temp_r29 & 2) {
        fn_8000C070(arg0, 6);
    }
}

void fn_80099D2C(void *arg0) {
    M2C_UNK fn_800056A0(M2C_UNK);
    M2C_FIELD(arg0, u8 *, 0x42) = (u8) (M2C_FIELD(arg0, u8 *, 0x42) + 1);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x42) >= 0xA) {
        fn_800056A0(0);
        fn_8000C070(arg0, 7);
        return;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x43) != 0) {
        fn_800056A0(0);
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x41) > 0) {
        fn_8000C070(arg0, 1);
        return;
    }
    fn_8000C070(arg0, 0);
}

void fn_80099DC4(s32 arg0) {
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    s32 fn_80096D64();
    s32 temp_r3;

    temp_r3 = fn_80096D64();
    switch (temp_r3) {                              /* irregular */
    case 0:
        fn_8000C070(arg0, 3);
        return;
    case 1:
        fn_8000C070(arg0, 2);
        return;
    case 2:
        fn_8000C070(arg0, 4);
        return;
    case 3:
        fn_8000C070(arg0, 5);
        return;
    }
}

void fn_80099E54(void *arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    s32 fn_800970C8(s16);
    s8 fn_80097168(s16);
    s16 fn_80097740();
    s32 fn_8009809C();
    M2C_FIELD(arg0, s16 *, 0x46) = fn_80097740();
    M2C_FIELD(arg0, s32 *, 0x38) = fn_80098094();
    M2C_FIELD(arg0, s32 *, 0x3C) = fn_8009809C();
    M2C_FIELD(arg0, s8 *, 0x43) = 0;
    if (fn_800970C8(M2C_FIELD(arg0, s16 *, 0x46)) == 0) {
        fn_8000C070(arg0, 7);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x41) = fn_80097168(M2C_FIELD(arg0, s16 *, 0x46));
    M2C_FIELD(arg0, s8 *, 0x42) = 0;
}

void fn_80099ED0(void *arg0) {
    M2C_UNK fn_80096418(s16);
    fn_80096418(M2C_FIELD(arg0, s16 *, 0x46));
}

void fn_80099EF4(void *arg0) {
    M2C_UNK fn_8017E35C();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x34) != 2) {
        fn_8017E35C();
    }
}

void fn_80099F20(void* arg0) {
    void* temp_r31;
    void* temp_r4;

    if ((u8)((char*)arg0 + 0x34) != 2) {
        temp_r31 = fn_800980D4(0);
        temp_r4 = fn_800980D4(1);
        if ((u8)((char*)arg0 + 0x34) != 1) {
            fn_8017E394(temp_r31, temp_r4, arg0, 0);
        } else {
            fn_8017E394(NULL, arg0, NULL, 0);
        }
    }
}

void fn_80099FAC(s32 arg0) {
    u32 fn_800980E8(M2C_UNK);
    M2C_UNK fn_80184A00(u32, u32, M2C_UNK, s32);
    M2C_UNK fn_80184C7C(u32, M2C_UNK, M2C_UNK, s32);
    u32 temp_r29;
    u32 temp_r30;
    u32 temp_r31;

    temp_r31 = fn_800980E8(0);
    temp_r30 = fn_800980E8(1);
    temp_r29 = fn_800980E8(2);
    fn_80184C7C(temp_r31, 8, 0x10, arg0);
    if (temp_r30 != 0U) {
        fn_80184A00(temp_r31, temp_r30, 0x18, arg0);
        fn_80184A00(temp_r30, temp_r31, 0x18, arg0);
        fn_80184C7C(temp_r30, 8, 0x10, arg0);
        if (temp_r29 != 0U) {
            fn_80184A00(temp_r29, temp_r30, 0x18, arg0);
            fn_80184C7C(temp_r29, 8, 0x10, arg0);
        }
    }
}

void fn_8009A514(void) {
    u32 temp_r3 = fn_8000C0C0(lbl_80289EB8);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 4);
    }
}

void fn_8009A5BC(void) {
    if (fn_8000C0C0(&lbl_80289EB8) != 0U) {
        fn_8000C070(1);
    }
}

void fn_8009A5F4(void) {
    fn_8000BF00(&lbl_80289EB8);
}

void fn_8009A648(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3E) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_803697E0;
    M2C_FIELD(arg0, s8 *, 0x3D) = 0;
}

void fn_8009A660(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) M2C_FIELD(arg0, u8 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_803697E4;
    M2C_FIELD(arg0, u8 *, 0x3D) = (u8) M2C_FIELD(arg0, u8 *, 0x3F);
}

void fn_8009A864(void *arg0) {
    M2C_UNK fn_8006D8E8(u32);
    if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
        fn_8006D8E8(M2C_FIELD(arg0, u32 *, 0x38));
    }
}

void fn_8009A890(void *arg0) {
    M2C_UNK fn_80055C8C(void *, void *, void *);
    M2C_UNK fn_80059208(void *, void *);
    void fn_8009A934(void *);
    void fn_8009A970(void *);
    extern u8 lbl_8026D404[];

    M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x34) = 0.0f;
    M2C_FIELD(arg0, u8 *, 0x3D) = 0;
    M2C_FIELD(arg0, u8 *, 0x3F) = 0xC0;
    M2C_FIELD(arg0, u8 *, 0x40) = 0xA;
    M2C_FIELD(arg0, u8 *, 0x3E) = 0;
    M2C_FIELD(arg0, u8 *, 0x3C) = 0;
    M2C_FIELD(arg0, s16 *, 0x42) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s16 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    fn_80055C8C(lbl_8026D404 + 0xD8, fn_8009A934, arg0);
    fn_80059208(fn_8009A970, arg0);
}

void fn_8009A934(void *arg0) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026D404[];
    M2C_FIELD(arg0, s32 *, 0x38) = fn_8006D948(lbl_8026D404 + 0xD8);
}

void fn_8009B55C(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    M2C_UNK fn_800075D8();
    M2C_UNK fn_8000770C(f32, f32, f32, f32, f32, f32);
    M2C_UNK fn_80009F90(s32, M2C_UNK, M2C_UNK);
    extern f32 lbl_803697E4;
    extern f32 lbl_803697F8;
    extern f32 lbl_803697FC;
    extern f32 lbl_80369808;
    extern f32 lbl_8036980C;
    extern f32 lbl_8036981C;
    extern f32 lbl_80369830;
    extern f32 lbl_80369844;
    extern f32 lbl_80369860;
    extern f32 lbl_80369868;
    extern f32 lbl_8036987C;
    extern f32 lbl_80369880;
    extern f32 lbl_80369884;
    extern f32 lbl_80369888;
    extern f32 lbl_8036988C;
    switch (arg1) {                                 /* irregular */
    case 0:
        fn_8000A258();
        fn_80009D74(farg0, farg1, lbl_80369808, lbl_8036980C);
        fn_80009F90(arg0, 8, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_8036987C, lbl_803697FC, lbl_803697E4, lbl_803697E4, lbl_80369860, lbl_8036981C);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_8000770C(lbl_80369880, lbl_803697FC, lbl_80369830, lbl_803697E4, lbl_80369884, lbl_8036981C);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_8000770C(lbl_80369888, lbl_803697FC, lbl_80369868, lbl_803697E4, lbl_803697FC, lbl_8036981C);
        fn_800075D8();
        fn_80007884();
        return;
    case 1:
        fn_8000A258();
        fn_80009D74(farg0, farg1, lbl_80369808, lbl_8036980C);
        fn_80009F90(arg0, 9, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_803697F8, lbl_803697FC, lbl_803697E4, lbl_803697E4, lbl_803697F8, lbl_8036981C);
        fn_800075D8();
        fn_80007884();
        return;
    case 2:
        fn_8000A258();
        fn_80009D74(farg0, farg1, lbl_80369808, lbl_8036980C);
        fn_80009F90(arg0, 0xA, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369844, lbl_803697FC, lbl_803697E4, lbl_803697E4, lbl_8036988C, lbl_803697FC);
        fn_800075D8();
        fn_80007884();
        return;
    }
}

void fn_8009B738(void* arg0, void* arg1) {
    if (arg1 != NULL && arg0 != NULL) {
        u32* src = (u32*)arg1;
        u32* dst = (u32*)arg0;
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        dst[5] = src[5];
        dst[6] = src[6];
    }
}

void fn_8009E574(void) {
    extern u16 lbl_80312100[];
    lbl_80312100[0x62] = 0x1;
}

void fn_8009E588(void) {
    M2C_UNK fn_8006EB9C();
    M2C_UNK fn_8021F1B8(M2C_UNK *, M2C_UNK *);
    M2C_UNK spC;
    M2C_UNK sp8;

    fn_8006EB9C();
    fn_8021F1B8(&sp8, &spC);
}

void fn_8009E5B4(void) {
    extern u16 lbl_80312100[];
    
    lbl_80312100[0x62] = 0;
    fn_8006EB9C(lbl_80312100);
    fn_8021F1B8(&lbl_80312100[0x2D], &lbl_80312100[0x6E]);
}

void fn_8009E5F8(void) {
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x24) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x28) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x2C) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x30) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x34) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x38) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x3C) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x40) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x64) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x68) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x6C) = 0;
    M2C_FIELD(&lbl_80312100, s32 *, 0x70) = 0;
}

void fn_8009E638(void) {
    extern u16 lbl_80312100[100];
    *(u16*)((u8*)lbl_80312100 + 0xe) = 0;
}

void fn_8009E64C(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x1C) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 0x1C));
}

void fn_8009E688(void) {
    extern u16 lbl_80312100;
    u32* ptr = (u32*)((char*)&lbl_80312100 + 0x1C);
    *ptr = OSGetTick();
}

void fn_8009E6B4(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x10) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 0x10));
}

void fn_8009E6F0(void) {
    extern u16 lbl_80312100;
    *(u32*)((char*)&lbl_80312100 + 0x10) = OSGetTick();
}

void fn_8009E71C(void) {
    s32 OSGetTick(M2C_UNK *);
    M2C_UNK fn_800070C8(void *, void *, void *, void *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0xC) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 0xC));
    fn_800070C8(&lbl_80312100 + 0xB8, &lbl_80312100 + 0xBC, &lbl_80312100 + 0xBE, &lbl_80312100 + 0xC0);
}

void fn_8009E774(void) {
    extern u16 lbl_80312100[];
    *(u32*)((char*)&lbl_80312100 + 0x1C) = OSGetTick();
}

void fn_8009E7A0(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 8) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 8));
}

void fn_8009E7DC(void) {
    extern u16 lbl_80312100[100];
    s32 tick = OSGetTick();
    lbl_80312100[0] = (u16)tick;
}

void fn_8009E808(void) {
    s32 OSGetTick(M2C_UNK *);
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 4) = (s32) (OSGetTick(&lbl_80312100) - M2C_FIELD(&lbl_80312100, s32 *, 4));
}

void fn_8009E844(void) {
    s32 OSGetTick();
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 4) = OSGetTick();
}

void fn_8009E9A0(void) {
    s32 OSGetTick();
    extern M2C_UNK lbl_80312100;
    M2C_FIELD(&lbl_80312100, s32 *, 0x14) = (s32) (OSGetTick() - M2C_FIELD(&lbl_80312100, s32 *, 0));
}

void fn_8009EA14(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern s32 lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EA90(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern s32 lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EB7C(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009EC38(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_8009ECF4(s32 arg0) {
    fn_801E32C4(&lbl_803682F0, arg0);
}

void fn_8009F000(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 0);
}

void fn_8009F02C(s32 arg0) {
    fn_801E323C(&lbl_803682F0, arg0);
}

void fn_8009F054(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_800A5C88();
    M2C_UNK fn_800A5CBC();
    extern void *lbl_80367240;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3) & 0x1000) {
        fn_800A5CBC();
        fn_8000C188(arg0);
        return;
    }
    if (fn_800A5C88() == 0) {
        fn_8000C188(arg0);
    }
}
