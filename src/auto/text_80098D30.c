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

static void *get_280(void **handle) {
    void *t;

    t = *handle;
    if (t != NULL) {
        return *(void **)((u8 *)t + 0x280);
    }
    return NULL;
}

void fn_80098D30(void *arg0) {
    s32 temp_r31;
    s32 temp_r30;

    fn_80055204(**((s32 ***)arg0 + 0xE), 0);
    fn_8000D354();
    temp_r31 = fn_80098140();
    temp_r30 = fn_80098110();
    fn_8018CAD8(0x32, 0x1E, arg0);
    fn_8018CA68(temp_r31);
    fn_8018CA68(temp_r30);
}

void fn_80098DA4(void) {
    void fn_8009799C(void);
    void fn_800980D4(s32);
    s32 fn_800980E8(s32);
    u8 fn_80098568(void);
    void fn_80184C7C(s32, s32, s32, s32);
    s32 i;
    s32 temp;

    fn_8009799C();
    for (i = 0; i < 3; i++) {
        temp = fn_800980E8(i);
        if (temp != 0) {
            fn_800980D4(i);
            if (fn_80098568() == 0) {
                fn_80184C7C(temp, 0, 0x18, 0);
            }
        }
    }
}

void fn_80098E1C(s32 arg0) {
    s32 fn_800980E8(s32);
    void fn_80050BF4(s32, s32);
    void fn_800980D4(s32);
    u8 fn_80098568(void);
    void fn_80183B24(s32, s32);

    s32 var_r31;
    s32 temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = fn_800980E8(var_r31);
        if (temp_r3 != 0) {
            fn_80050BF4(temp_r3, 0);
            fn_800980D4(var_r31);
            if (fn_80098568() != 0) {
                fn_80183B24(temp_r3, arg0);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 3);
}

void fn_80099094(void *arg0) {
    void fn_800975C4(s16);
    s32 fn_800970C8(s16);
    s32 fn_800971F8(s16);
    void *fn_80095934(void *, s32, s32);
    void *fn_80053C30(void *, void *);
    void fn_800536CC(void *, void *);
    void fn_800536D8(void *, void *);
    void fn_8005306C(void *);
    void fn_80184688(void *, s32, s32, void *);
    void fn_800983E0(void *, void *);
    void fn_80147548(void *, void *, s32);
    void fn_80025624(s32, s32);
    void fn_8017F70C(void *, void *);
    void fn_8017E0C0(void *, s32, void *);
    void fn_8017F040(void *, s32, void *);
    void fn_80184C7C(void *, s32, s32, s32);
    void fn_80184BE8(void *, s32, s32, s32);
    void fn_8018CFA4(s32, s32, s32, s32, void *);
    void fn_800536B0(void *, f32, f32, f32);
    extern u8 lbl_8026D230[];
    extern s32 lbl_80367240;

    s32 sp38[3];
    s32 sp2C[3];
    s32 sp20[3];
    s32 sp14[3];
    s32 sp8[3];
    void *self;
    s32 temp_r30;
    s16 temp_r29;
    void *temp_r29_2;
    void *temp_r3;
    void *temp_r4;
    void *temp_r6;
    void *var_r0;
    void *var_r3;

    self = arg0;
    temp_r29 = *(s16 *)((u8 *)self + 0x46);
    fn_800975C4(temp_r29);
    temp_r30 = (s32)*(f32 *)((u8 *)*(void **)((u8 *)self + 0x38) + 0xC);
    if (temp_r30 == 0) {
        temp_r30 = fn_800970C8(temp_r29);
        temp_r3 = fn_80095934(*(void **)((u8 *)self + 0x38), temp_r30, fn_800971F8(temp_r29));
        if (temp_r3 != NULL) {
            temp_r29_2 = fn_80053C30(temp_r3, self);
            fn_800536CC(temp_r29_2, *(void **)*(void **)((u8 *)self + 0x38));
            fn_800536D8(temp_r29_2, *(void **)*(void **)((u8 *)self + 0x3C));
            fn_8005306C(temp_r29_2);
        }
        temp_r4 = *(void **)((u8 *)self + 0x3C);
        temp_r3 = *(void **)temp_r4;
        if (temp_r3 != NULL) {
            var_r3 = *(void **)((u8 *)temp_r3 + 0x280);
        } else {
            var_r3 = NULL;
        }
        fn_80184688(var_r3, 1, 2, self);
        fn_800983E0(sp14, *(void **)((u8 *)self + 0x3C));
        sp8[0] = sp14[0];
        sp8[1] = sp14[1];
        sp8[2] = sp14[2];
        fn_80147548(lbl_8026D230 + 0xE3, sp8, 0x64);
        fn_80025624(lbl_80367240, 4);
        if (*(u8 *)((u8 *)self + 0x34) != 2) {
            fn_8017F70C(*(void **)((u8 *)self + 0x38), self);
        }
    } else {
        fn_800983E0(sp2C, *(void **)((u8 *)self + 0x38));
        sp20[0] = sp2C[0];
        sp38[0] = sp2C[0];
        sp20[1] = sp2C[1];
        sp38[1] = sp2C[1];
        sp20[2] = sp2C[2];
        sp38[2] = sp2C[2];
        fn_80147548(lbl_8026D230 + 0x104, sp38, 0x64);
        temp_r4 = *(void **)((u8 *)self + 0x38);
        temp_r3 = *(void **)temp_r4;
        if (temp_r3 != NULL) {
            var_r0 = *(void **)((u8 *)temp_r3 + 0x280);
        } else {
            var_r0 = NULL;
        }
        if (var_r0 != NULL) {
            temp_r6 = *(void **)temp_r4;
            if (temp_r6 != NULL) {
                var_r3 = *(void **)((u8 *)temp_r6 + 0x280);
            } else {
                var_r3 = NULL;
            }
            fn_80184C7C(var_r3, 9, 2, 0);
            temp_r3 = *(void **)*(void **)((u8 *)self + 0x38);
            if (temp_r3 != NULL) {
                var_r3 = *(void **)((u8 *)temp_r3 + 0x280);
            } else {
                var_r3 = NULL;
            }
            fn_80184BE8(var_r3, 8, 8, 0);
            temp_r3 = *(void **)*(void **)((u8 *)self + 0x38);
            if (temp_r3 != NULL) {
                var_r3 = *(void **)((u8 *)temp_r3 + 0x280);
            } else {
                var_r3 = NULL;
            }
            fn_80184688(var_r3, 1, 2, self);
        }
        fn_8018CFA4(0xF, 6, 2, 0, self);
        temp_r3 = fn_80053C30(lbl_8026D230 + 0x119, self);
        fn_800536B0(temp_r3, *(f32 *)&sp20[0], *(f32 *)&sp20[1], *(f32 *)&sp20[2]);
        fn_8017E0C0(*(void **)((u8 *)self + 0x38), temp_r30, self);
        if (*(u8 *)((u8 *)self + 0x34) != 2) {
            fn_8017F040(*(void **)((u8 *)self + 0x38), temp_r30, self);
        }
        fn_80025624(lbl_80367240, 8);
    }
}

void fn_80099994(void *arg0) {
    void fn_8004FC70(s32);
    u8 fn_800504FC(s32, s32);
    u8 fn_80096C78(s16);
    s32 fn_800971F8(s16);
    s32 fn_80098140(void);
    s32 fn_80096D64(void);
    void fn_800056A0(s32);
    void fn_8000C070(void *, s32);
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r3_2;
    u8 temp_r3;
    s32 temp_r4;

    temp_r29 = fn_80098140();
    temp_r30 = fn_800971F8(M2C_FIELD(arg0, s16 *, 0x46));
    temp_r3 = fn_80096C78(M2C_FIELD(arg0, s16 *, 0x46));
    M2C_FIELD(arg0, s16 *, 0x44) = -1;
    if ((temp_r30 & 0xFFC00000) && (fn_800504FC(temp_r29, 4) != 0)) {
        M2C_FIELD(arg0, s16 *, 0x44) = 4;
    } else {
        temp_r3_2 = fn_80096D64();
        switch (temp_r3_2) {
        case 0:
        case 3:
            if ((temp_r3 != 0) && (fn_800504FC(temp_r29, 3) != 0)) {
                M2C_FIELD(arg0, s16 *, 0x44) = 3;
            } else {
                M2C_FIELD(arg0, s16 *, 0x44) = 2;
            }
            break;
        case 1:
        case 2:
            if ((temp_r3 != 0) && (fn_800504FC(temp_r29, 0xD) != 0)) {
                M2C_FIELD(arg0, s16 *, 0x44) = 0xD;
            } else {
                M2C_FIELD(arg0, s16 *, 0x44) = 0xC;
            }
            break;
        }
    }
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x44);
    if ((s16)temp_r4 < 0) {
        fn_800056A0(0);
        fn_8000C070(arg0, 7);
        return;
    }
    fn_8004FC70(temp_r29);
}

void fn_80099AD0(void *arg0) {
    s32 fn_800971F8(s16);
    void *fn_800980E8(s32);
    void *fn_800958A4(s32);
    void *fn_80095FF8(s32);
    void *fn_80053AE8(void *, void *);
    void fn_80052FB0(void *, f32 *, f32 *);
    void fn_80184A00(void *, void *, s32, void *);

    void *ptrs[3];
    f32 dst[3];
    f32 src[3];
    void **var_r31;
    s32 var_r30;
    void *temp_r29;
    void *temp_r3;
    void *temp_r4;

    if (fn_800971F8(*(s16 *)((u8 *)arg0 + 0x46)) & 0x40000) {
        ptrs[0] = fn_800980E8(0);
        ptrs[1] = fn_800958A4(0);
        ptrs[2] = fn_800958A4(1);
        var_r31 = ptrs;
        if (ptrs[0] != NULL && ptrs[1] != NULL && ptrs[2] != NULL) {
            temp_r3 = fn_800980E8(1);
            src[0] = *(f32 *)((u8 *)temp_r3 + 4);
            temp_r29 = temp_r3;
            var_r30 = 0;
            src[1] = *(f32 *)((u8 *)temp_r3 + 8);
            src[2] = *(f32 *)((u8 *)temp_r3 + 0xC);
            do {
                fn_80184A00(*var_r31, temp_r29, 0x18, arg0);
                temp_r4 = *var_r31;
                dst[0] = *(f32 *)((u8 *)temp_r4 + 4);
                dst[1] = *(f32 *)((u8 *)temp_r4 + 8);
                dst[2] = *(f32 *)((u8 *)temp_r4 + 0xC);
                temp_r3 = fn_80095FF8(0x40000);
                if (temp_r3 != NULL) {
                    fn_80052FB0(fn_80053AE8(temp_r3, arg0), dst, src);
                }
                var_r30 += 1;
                var_r31 += 1;
            } while (var_r30 < 3);
        }
    }
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

void fn_80099CA4(void *arg0) {
    void *fn_80095BB0(s32);
    void *fn_80095FF8(s32);
    void fn_80095D1C(s32);
    void *fn_80053AE8(void *, void *);
    void fn_800536CC(void *, s32);
    void fn_8005306C(void *);

    void *temp_r29;
    void *temp_r30;
    void *temp_r31;
    void *temp_r30_2;

    temp_r29 = arg0;
    temp_r31 = fn_80095BB0(*(s32 *)((u8 *)arg0 + 0x60));
    if (temp_r31 != NULL) {
        temp_r30 = fn_80095FF8(*(s32 *)((u8 *)temp_r29 + 0x60));
        fn_80095D1C(*(s32 *)((u8 *)temp_r29 + 0x60));
        if (temp_r30 != NULL) {
            temp_r30_2 = fn_80053AE8(temp_r30, temp_r29);
            fn_800536CC(temp_r30_2, *(s32 *)temp_r31);
            fn_8005306C(temp_r30_2);
        }
    }
}

void fn_80099D2C(void *arg0) {
    M2C_UNK fn_800056A0(M2C_UNK);
    *(u8 *)((char *)arg0 + 0x42) = (u8)(*(u8 *)((char *)arg0 + 0x42) + 1);
    if ((s8)*(u8 *)((char *)arg0 + 0x42) >= 0xA) {
        fn_800056A0(0);
        fn_8000C070(arg0, 7);
        return;
    }
    if ((s8)*(u8 *)((char *)arg0 + 0x43) != 0) {
        fn_800056A0(0);
    }
    if ((s8)*(u8 *)((char *)arg0 + 0x41) > 0) {
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
    switch (temp_r3) {
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
    fn_80096418(*(s16 *)((char *)arg0 + 0x46));
}

void fn_80099EF4(void *arg0) {
    void fn_8017E35C(void);
    if (*(u8 *)((char *)arg0 + 0x34) != 2) {
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
    u32 fn_800980E8(s32);
    void fn_80184A00(u32, u32, s32, s32);
    void fn_80184C7C(u32, s32, s32, s32);
    s32 temp_r28;
    u32 temp_r31;
    u32 temp_r30;
    u32 temp_r29;

    temp_r28 = arg0;
    temp_r31 = fn_800980E8(0);
    temp_r30 = fn_800980E8(1);
    temp_r29 = fn_800980E8(2);
    fn_80184C7C(temp_r31, 8, 0x10, temp_r28);
    if (temp_r30 != 0U) {
        fn_80184A00(temp_r31, temp_r30, 0x18, temp_r28);
        fn_80184A00(temp_r30, temp_r31, 0x18, temp_r28);
        fn_80184C7C(temp_r30, 8, 0x10, temp_r28);
        if (temp_r29 != 0U) {
            fn_80184A00(temp_r29, temp_r30, 0x18, temp_r28);
            fn_80184C7C(temp_r29, 8, 0x10, temp_r28);
        }
    }
}

void fn_8009A514(void) {
    u32 temp_r3 = fn_8000C0C0(lbl_80289EB8);
    if (temp_r3 != 0) {
        fn_8000C070(temp_r3, 4);
    }
}

void fn_8009A54C(void) {
    extern u8 lbl_80289EB8[16];
    extern void *fn_8000C0C0(void *);
    extern void fn_8000C070(void *, int);

    void *result;

    result = fn_8000C0C0(lbl_80289EB8);

    if (result != 0) {
        fn_8000C070(result, 3);
    }
}

void fn_8009A584(void) {
    if (fn_8000C0C0(lbl_80289EB8) != 0U) {
        fn_8000C070(0x2);
    }
}

void fn_8009A5BC(void) {
    if (fn_8000C0C0(&lbl_80289EB8) != 0U) {
        fn_8000C070(0x1);
    }
}

