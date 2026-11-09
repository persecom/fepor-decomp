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

