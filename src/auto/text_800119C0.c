/* Functions from 0x800119C0 to 0x80016EE8, found by decomp-toolkit. */
#include "common.h"

void *fn_800119C0(void) {
    extern u16 lbl_80267DC8;
    return (u16*)&lbl_80267DC8 + 0x43;
}

s32 fn_800119D0(void) {
    return 0x18;
}

s32 fn_800119D8(void) {
    return 0x18;
}

void fn_80013864(void) {
    extern void *lbl_803671A4;
    M2C_FIELD(lbl_803671A4, s8 *, 0x1C) = 1;
}

void fn_80013874(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
}

s32 fn_80013880(void) {
    return 0;
}

s32 fn_800138BC(void *arg0) {
    s32 *temp_r3;
    extern void *lbl_80367180;
    M2C_UNK fn_80011EDC();

    lbl_80367180 = arg0;
    temp_r3 = M2C_FIELD(lbl_80367180, s32 **, 0x18) - 4;
    fn_80011EDC();
    M2C_FIELD(lbl_80367180, s32 **, 0x18) = temp_r3;
    return *temp_r3;
}

void fn_80013A6C(s32 arg0) {
    extern void *lbl_80367180;
    extern s32 lbl_80367188;
    s32 *temp_r4;

    temp_r4 = M2C_FIELD(lbl_80367180, s32 **, 0x18);
    M2C_FIELD(lbl_80367180, s32 **, 0x18) = (s32 *) (temp_r4 + 4);
    *temp_r4 = arg0;
    lbl_80367188 += 1;
}

void fn_80013F48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
}

void fn_800142B0(s32 arg0) {
    extern s32 lbl_803671A8;
    lbl_803671A8 = arg0;
}

s32 fn_800142B8(void) {
    extern s32 lbl_803671A8;
    return lbl_803671A8;
}

void fn_800142C0(s32 *arg0, s16 *arg1) {
    extern s16 lbl_8036719E;
    extern s32 lbl_803671A0;
    *arg0 = lbl_803671A0;
    *arg1 = lbl_8036719E;
}

s32 fn_800142D4(s32 arg0) {
    extern s32 lbl_803671A4;
    s32 temp_r0;

    temp_r0 = lbl_803671A4;
    lbl_803671A4 = arg0;
    return temp_r0;
}

void fn_800142E4(void) {
    extern u16 lbl_80284098;
    fn_8000A440(1, (u16*)&lbl_80284098);
}

void fn_80014310(void *arg0, s32 arg1, void *arg2) {
    if (arg0 != NULL) {
        void **v0 = M2C_FIELD(arg0, void **, 0x4);
        *(s32*)((char*)arg0 + 0x14) = arg1;
        fn_80059208(arg1);
        *(s32*)((char*)arg0 + 0x1C) = (s32)arg2;
    }
}

s32 fn_8001434C(void *arg0) {
    u8 fn_8005BB2C();
    if (fn_8005BB2C() == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_800144D0(void *arg0) {
    u8 fn_80089640();
    if (fn_80089640() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8001451C(void *arg0) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80014558(void* arg0, void* arg1, s32 arg2) {
    u32* temp_r3;
    
    if (arg0 == NULL || arg1 == NULL) {
        return 0;
    }
    
    temp_r3 = (u32*)M2C_FIELD(arg0, s32**, 0x4);
    *temp_r3 = (u32)arg1;
    
    return (s32)M2C_FIELD(arg1, s32**, arg2);
}

s32 fn_80014594(void *arg0) {
    u8 fn_8008A59C();
    if (fn_8008A59C() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_800145E0(void *arg0) {
    void *temp_r3;
    
    temp_r3 = *(void **)((u8 *)arg0 + 4);
    fn_8008A290((u8)((u32) temp_r3 >> 16), *(s32 *)((u8 *)temp_r3 + 4));
    *(void **)((u8 *)arg0 + 4) = (void *) ((u8 *)*(void **)((u8 *)arg0 + 4) + 8);
    return 1;
}

extern s32 fn_8006785C(s16, s32, void *);
s32 fn_800146E8(void *arg0)
{
    s32 *temp_r3 = (s32 *)arg0;
    s32 *temp_r3_2 = (s32 *)temp_r3[1];
    s16 temp_r4 = (s16)((u32)temp_r3_2[0] >> 16);
    fn_8006785C(temp_r4, temp_r3_2[1], arg0);
    temp_r3[1] = (s32)((s32 *)temp_r3[1] + 2);
    return 1;
}

u8 fn_80014E70(void) {
    extern u8 lbl_803671B8;
    return lbl_803671B8;
}

extern s32 lbl_803671B8;
extern void* lbl_803671B4;
void fn_80014EA8(void) {
    fn_80146F0C();
    lbl_803671B8 = 1;
    while (1) {
        fn_8020AC68(lbl_803671B4);
        fn_80146D44();
        fn_8020A9E0(lbl_803671B4);
        fn_802107A8();
    }
}

void fn_80014F30(void *arg0, s32 arg1) {
    s8 fn_8017A9DC(s32);
    M2C_FIELD(arg0, s8 *, 0) = fn_8017A9DC(arg1);
    M2C_FIELD(arg0, s8 *, 1) = fn_8017A9DC(arg1);
    M2C_FIELD(arg0, s8 *, 2) = fn_8017A9DC(arg1);
    M2C_FIELD(arg0, s8 *, 3) = fn_8017A9DC(arg1);
}

void fn_80014F94(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A5EC(s32, u8);
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 1));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 2));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 3));
}

void fn_8001520C(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, u8 *, 1) = arg1;
    M2C_FIELD(arg0, u8 *, 0) = (u8) (arg1 == 3);
    M2C_FIELD(arg0, s8 *, 2) = -1;
    M2C_FIELD(arg0, s8 *, 3) = -1;
}

void fn_800152F8(s8 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5, s8 arg6, s8 arg7, void *arg_sp8) {
    M2C_FIELD(arg_sp8, s8 *, 0) = arg0;
    M2C_FIELD(arg_sp8, s8 *, 1) = arg1;
    M2C_FIELD(arg_sp8, s8 *, 2) = arg2;
    M2C_FIELD(arg_sp8, s8 *, 3) = arg3;
    M2C_FIELD(arg_sp8, s8 *, 4) = arg4;
    M2C_FIELD(arg_sp8, s8 *, 5) = arg5;
    M2C_FIELD(arg_sp8, s8 *, 6) = arg6;
    M2C_FIELD(arg_sp8, s8 *, 7) = arg7;
}

s32 fn_80015610(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 temp_r3;

    temp_r0 = M2C_FIELD(arg0, u8 *, 8);
    temp_r3 = M2C_FIELD(arg1, u8 *, 8);
    if (temp_r0 == temp_r3) {
        return 0;
    }
    if ((temp_r0 == 1) || (temp_r3 == 1)) {
        return 1;
    }
    return 2;
}

s32 fn_80015648(u8 arg0, u8 arg1) {
    if (arg0 == arg1) {
        return 0;
    }
    if ((arg0 == 1) || (arg1 == 1)) {
        return 1;
    }
    return 2;
}

void fn_800156A0(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;

    temp_r5 = M2C_FIELD(arg1, void **, 0x184);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, void **, 0x180) = (void *) M2C_FIELD(arg1, void **, 0x180);
    } else {
        M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x180);
        temp_r5_2 = M2C_FIELD(arg0, void **, 4);
        if (temp_r5_2 != NULL) {
            M2C_FIELD(temp_r5_2, s32 *, 0x184) = 0;
        }
    }
    temp_r5_3 = M2C_FIELD(arg1, void **, 0x180);
    if (temp_r5_3 != NULL) {
        M2C_FIELD(temp_r5_3, void **, 0x184) = (void *) M2C_FIELD(arg1, void **, 0x184);
    } else {
        M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(arg1, void **, 0x184);
        temp_r3 = M2C_FIELD(arg0, void **, 0);
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s32 *, 0x180) = 0;
        }
    }
    M2C_FIELD(arg1, void **, 0x180) = NULL;
    M2C_FIELD(arg1, void **, 0x184) = NULL;
}

void fn_8001594C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = arg1;
}

void fn_80015960(s32 arg0) {
    M2C_UNK *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_80284128;
    fn_8000CAA0(&lbl_80284128, arg0, &lbl_80284128);
}

void fn_80015CBC(void) {
    M2C_UNK *fn_80015320(M2C_UNK, M2C_UNK *);
    void fn_8003A064(void);
    void fn_8007C3BC(void);
    void fn_8007C4D4(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r31;
    void *var_r3;

    fn_80015320(4, &sp8);
    var_r31 = 1;
    do {
        if (var_r31 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r31 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8003A064();
            fn_8007C3BC();
            fn_8007C4D4(0x100);
        }
        var_r31 += 1;
    } while ((s32)var_r31 <= 0x9F);
}

void fn_80015D54(void) {
    M2C_UNK *fn_80015320(M2C_UNK, M2C_UNK *);
    void fn_8003A114(void);
    void fn_8007C3BC(void);
    void fn_8007C4D4(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r31;
    void *var_r3;

    fn_80015320(3, &sp8);
    var_r31 = 1;
    do {
        if (var_r31 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r31 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8003A114();
            fn_8007C3BC();
            fn_8007C4D4(0x108);
        }
        var_r31 += 1;
    } while ((s32)var_r31 <= 0x9F);
}

void fn_800160D4(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8004E040();
    u32 fn_80055D94(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    if (fn_80055D94(0x200) == 0U) {
        fn_80015320(3, &sp8);
        var_r29 = 1;
        do {
            if (var_r29 != 0) {
                var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
            } else {
                var_r3 = NULL;
            }
            if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
                fn_8004E040();
            }
            var_r29 += 1;
        } while ((s32) var_r29 <= 0x9F);
    }
}

void fn_80016180(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_80050C90();
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    fn_80015320(3, &sp8);
    var_r29 = 1;
    do {
        if (var_r29 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_80050C90();
        }
        var_r29 += 1;
    } while ((s32) var_r29 <= 0x9F);
}

void fn_8001621C(void) {
    M2C_UNK fn_8004EA60(M2C_UNK);
    extern M2C_UNK lbl_802CA264;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_3;

    var_r3 = M2C_FIELD(&lbl_802CA264, void **, 0x3C);
loop_2:
    if (var_r3 != NULL) {
        temp_r31 = M2C_FIELD(var_r3, void **, 0x184);
        fn_8004EA60(0);
        var_r3 = temp_r31;
        goto loop_2;
    }
    var_r3_2 = M2C_FIELD(&lbl_802CA264, void **, 0x48);
loop_5:
    if (var_r3_2 != NULL) {
        temp_r31_2 = M2C_FIELD(var_r3_2, void **, 0x184);
        fn_8004EA60(0);
        var_r3_2 = temp_r31_2;
        goto loop_5;
    }
    var_r3_3 = M2C_FIELD(&lbl_802CA264, void **, 0x54);
loop_8:
    if (var_r3_3 != NULL) {
        temp_r31_3 = M2C_FIELD(var_r3_3, void **, 0x184);
        fn_8004EA60(0);
        var_r3_3 = temp_r31_3;
        goto loop_8;
    }
}

void fn_800163F8(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8004EB14(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    fn_80015320(3, &sp8);
    var_r29 = 1;
    do {
        if (var_r29 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8004EB14(0);
        }
        var_r29 += 1;
    } while ((s32) var_r29 <= 0x9F);
}

s32 fn_800169A8(s32 arg0, s16 arg1) {
    M2C_UNK fn_800C428C(s32);
    M2C_UNK fn_8022C1E8(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
    extern M2C_UNK fn_8001C5F8;
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == 0;
    if (temp_cr0_eq == 0) {
        if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0) && (temp_cr0_eq == 0) && (temp_cr0_eq == 0) && (temp_cr0_eq == 0) && (temp_cr0_eq == 0)) {
            fn_8022C1E8(arg0 + 0x1EC, &fn_8001C5F8, 8, 4);
            fn_8022C1E8(arg0 + 0x1CC, &fn_8001C5F8, 8, 4);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80016A3C(s32 arg0) {
    extern void* lbl_802B14E4;
    extern void fn_8003CA94(void*, s32);

    void* var_r31 = &lbl_802B14E4;
    s32 i = 0;
    do {
        fn_8003CA94(var_r31, arg0);
        i += 1;
        var_r31 = (char*)var_r31 + 0x280;
    } while (i < 0x9F);
}

s32 fn_80016A9C(s32 arg0) {
    s32 fn_80037710();
    extern M2C_UNK lbl_802CA264;
    if ((u32) *(&lbl_802CA264 + (arg0 * 0xC)) != 0U) {
        return fn_80037710();
    }
    return 0;
}
#include "common.h"
