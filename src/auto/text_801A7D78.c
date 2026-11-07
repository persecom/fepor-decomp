/* Functions from 0x801A7D78 to 0x801AE2D4, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_80367218;
void *fn_801A7F5C(void *arg0) {
    fn_801A7FA4(arg0);
    fn_801A7FA4((char *)arg0 + 0x2E0);
    fn_801A7FA4((char *)arg0 + 0x5C0);
    *(s32 *)((char *)arg0 + 0xCAC) = 0;
    return arg0;
}

u16 *fn_801A7FF4(void *arg0) {
    s8 temp = ((s8 *)arg0)[0x2C8 / sizeof(s8)];
    if (temp <= 0) {
        return &lbl_80367218;
    }
    return (u16 *)((u8 *)arg0 + 0x284);
}

void fn_801A859C(void *arg0) {
    s8 temp;
    temp = fn_8003B2D0();
    M2C_FIELD(arg0, s8 *, 0x2B7) = temp;
    M2C_FIELD(arg0, u8 *, 0x2B8) = (u8) M2C_FIELD(arg0, u8 *, 0x1A8);
    M2C_FIELD(arg0, s16 *, 0x2BA) = (s16) M2C_FIELD(arg0, s16 *, 0x298);
    M2C_FIELD(arg0, s16 *, 0x2BC) = (s16) M2C_FIELD(arg0, s16 *, 0x29A);
    M2C_FIELD(arg0, s16 *, 0x2BE) = (s16) M2C_FIELD(arg0, s16 *, 0x2A2);
    M2C_FIELD(arg0, s16 *, 0x2C0) = (s16) M2C_FIELD(arg0, s16 *, 0x2A8);
}

void fn_801A85F4(s32 arg0) {
    M2C_UNK fn_80105CEC(s32, M2C_UNK);
    fn_80105CEC(arg0 + 0x1BC, 0x4C);
    fn_80105CEC(arg0 + 0x1BC, 0x31);
    fn_80105CEC(arg0 + 0x1BC, 0x30);
    fn_80105CEC(arg0 + 0x1BC, 0x5A);
    fn_80105CEC(arg0 + 0x1BC, 0x2F);
    fn_80105CEC(arg0 + 0x1BC, 0x38);
    fn_80105CEC(arg0 + 0x1BC, 0x35);
    fn_80105CEC(arg0 + 0x1BC, 0x39);
    fn_80105CEC(arg0 + 0x1BC, 0x33);
}

s32 fn_801A8688(s32 arg0) {
    u8 fn_80105BC0(s32, M2C_UNK);
    if ((fn_80105BC0(arg0 + 0x1BC, 0x29) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x41) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x4C) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x31) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2F) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x30) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x32) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x3F) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x10) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x35) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2B) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2C) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2E) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x33) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x38) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x34) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x39) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x36) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x42) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x5A) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2D) == 0)) {
        return 0;
    }
    fn_80105CEC(arg0 + 0x1BC, 0x29);
    fn_80105CEC(arg0 + 0x1BC, 0x41);
    fn_80105CEC(arg0 + 0x1BC, 0x4C);
    fn_80105CEC(arg0 + 0x1BC, 0x31);
    fn_80105CEC(arg0 + 0x1BC, 0x2F);
    fn_80105CEC(arg0 + 0x1BC, 0x30);
    fn_80105CEC(arg0 + 0x1BC, 0x32);
    fn_80105CEC(arg0 + 0x1BC, 0x3F);
    fn_80105CEC(arg0 + 0x1BC, 0x10);
    fn_80105CEC(arg0 + 0x1BC, 0x35);
    fn_80105CEC(arg0 + 0x1BC, 0x2B);
    fn_80105CEC(arg0 + 0x1BC, 0x2C);
    fn_80105CEC(arg0 + 0x1BC, 0x2E);
    fn_80105CEC(arg0 + 0x1BC, 0x33);
    fn_80105CEC(arg0 + 0x1BC, 0x38);
    fn_80105CEC(arg0 + 0x1BC, 0x34);
    fn_80105CEC(arg0 + 0x1BC, 0x39);
    fn_80105CEC(arg0 + 0x1BC, 0x36);
    fn_80105CEC(arg0 + 0x1BC, 0x42);
    fn_80105CEC(arg0 + 0x1BC, 0x5A);
    fn_80105CEC(arg0 + 0x1BC, 0x2D);
    return 1;
}

void fn_801A895C(void *arg0, void **arg1) {
    M2C_UNK fn_800056CC(void *, u8, M2C_UNK *);
    s32 fn_800927EC(void *);
    u8 fn_80092ADC(void *, u8);
    extern M2C_UNK lbl_8027B650;
    s32 temp_cr0_eq;
    u8 var_r0;
    u8 var_r0_2;
    u8 var_r0_3;
    void *temp_r3;
    void *temp_r4;

    temp_r4 = *arg1;
    temp_cr0_eq = temp_r4 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            var_r0 = M2C_FIELD(temp_r4, u8 *, 0x12);
        } else {
            var_r0 = 0xC;
        }
        if (var_r0 != 8) {
            if (temp_r4 != NULL) {
                var_r0_2 = M2C_FIELD(temp_r4, u8 *, 0x12);
            } else {
                var_r0_2 = 0xC;
            }
            if (var_r0_2 != 9) {
                M2C_FIELD(arg0, u8 *, 0x2C6) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C6) | fn_800927EC(arg0));
                temp_r3 = *arg1;
                if (temp_r3 != NULL) {
                    var_r0_3 = M2C_FIELD(temp_r3, u8 *, 0x12);
                } else {
                    var_r0_3 = 0xC;
                }
                fn_800056CC(&lbl_8027B650 + 0x16A, fn_80092ADC(arg0, var_r0_3), &lbl_8027B650);
            }
        }
    }
}

extern u8 lbl_802EFDB8[104];
extern u16 lbl_80330EAC[1634];
u8 fn_8000CD88(s16);
u8 fn_8000CE68(s16);
s32 fn_801A8A28(void *arg0) {
    u8 temp_r3;
    s16 *temp_r4;

    temp_r3 = *(lbl_802EFDB8 + *(u8 *) (lbl_802EFDB8 + 0x60));

    if (temp_r3 & 1) {
        return 0x50;
    }

    if (temp_r3 & 2) {
        return 0x51;
    }

    if (temp_r3 & 4) {
        return 0x52;
    }

    if (*(u8 *) ((uintptr_t) arg0 + 0x2CA) != 0) {
        *(u8 *) ((uintptr_t) arg0 + 0x2CA) = 0U;
        *(u32 *) (lbl_80330EAC + 0xCAC) = *(u32 *) (lbl_80330EAC + 0xCAC) | 0x1000;
        return 0x51;
    }

    temp_r4 = (s16 *) ((uintptr_t) arg0 + 0x2A2);

    if (fn_8000CD88(*temp_r4) == 0) {
        return 0x52;
    }

    return (fn_8000CE68(*(s16 *) ((uintptr_t) arg0 + 0x2A8)) != 0) + 0x50;
}

void fn_801A8AF4(void *arg0) {
    s16 *temp1;
    s16 *temp2;
    
    temp1 = (s16*)((u8*)arg0 + 0x2A2);
    if (*temp1 > 0x64) {
        *temp1 = 0x64;
    }
    if (*temp1 < 0) {
        *temp1 = 0;
    }
    
    temp2 = (s16*)((u8*)arg0 + 0x2A8);
    if (*temp2 > 0x64) {
        *temp2 = 0x64;
    }
    if (*temp2 < 0) {
        *temp2 = 0;
    }
}

void fn_801A8CB8(void *arg0, void *arg1) {
    M2C_UNK fn_800368C8(void *, s32, void *);
    M2C_UNK fn_80036E48(void *, s32);
    s32 fn_80036F5C(void *, s32);
    void *fn_80036FD0(void *, s32);
    u8 fn_8003701C(void *);
    u8 fn_80038128(void *, void *);
    M2C_UNK fn_8003B8D4(void *);
    void *temp_r3;
    void *temp_r3_2;
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    M2C_FIELD(arg1, s8 *, 9) = 0;
    M2C_FIELD(arg1, s8 *, 8) = 0;
    M2C_FIELD(arg1, s8 *, 7) = 0;
    M2C_FIELD(arg1, s8 *, 6) = 0;
    M2C_FIELD(arg1, s8 *, 5) = 0;
    M2C_FIELD(arg1, s8 *, 4) = 0;

loop_6:
    if (var_r31 < (s32) fn_8003701C(arg0)) {
        temp_r3 = fn_80036FD0(arg0, var_r31);
        if ((temp_r3 != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x190) == (u32) M2C_FIELD(temp_r3, u32 *, 0x190)) && (fn_80038128(arg0, temp_r3) <= 3U)) {
            fn_80036E48(temp_r3, M2C_FIELD(arg0, s32 *, 0x188));
            var_r30 = fn_80036F5C(arg0, var_r31);
            fn_800368C8(arg0, var_r30, arg1);
            fn_800368C8(temp_r3, var_r30, arg1);
        }
        var_r31 += 1;
        goto loop_6;
    }
    fn_8003B8D4(arg1);
}

void fn_801A8F14(void *arg0, void *arg1) {
    u8 fn_801B8550(s32);
    if (fn_801B8550(M2C_FIELD(arg1, s32 *, 0x280)) != 0) {
        M2C_FIELD(arg0, s16 *, 0x2A4) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x2A2) = (s16) (M2C_FIELD(arg0, s16 *, 0x29E) - M2C_FIELD(arg1, s16 *, 0x2A0));
    M2C_FIELD(arg0, s16 *, 0x2A8) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A4) - M2C_FIELD(arg1, s16 *, 0x2A6));
}

void fn_801A949C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
}

void fn_801A9600(void *arg0, void *arg1) {
    u8 temp_r4;
    u32 *var_r3;
    void **temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_3;
    u32 temp_r5;

    ((u8*)arg0)[0x294] = -1;
    fn_8001C4FC(arg0, 0x284);
    fn_8001C4FC(arg1, 0x28C);
    ((u8*)arg0)[0x2C8] =*((u8*)arg1 + 4);
    *((u16*)arg0 + 0x2AE/2) = 0;
    temp_r4 = ((u8*)arg0)[0x2C8];
    if (temp_r4 <= 0) {
        var_r3 = (u32*)lbl_80367218;
    } else {
        var_r3 = (u32*)((u8*)arg0 + 0x284);
    }
    if (*(var_r3) != 0) {
        if (temp_r4 <= 0) {
            var_r3 = (u32*)lbl_80367218;
        } else {
            var_r3 = (u32*)((u8*)arg0 + 0x284);
        }
        if (fn_80094614(arg0, *var_r3) == 0) {
            fn_8001D580((u8*)arg0 + 0x284);
        }
    }
    temp_r5 = ((u32*)arg0)[0x28C/4];
    if (temp_r5 != 0) {
        temp_r4_2 = (void*)temp_r5;
        *((u16*)arg0 + 0x2AE/2) = *((u16*)arg0 + 0x2AE/2) | ((u32*)temp_r4_2)[0x0C/4];
    }
    temp_r3_2 = (void**)fn_80037C20(arg0);
    if (temp_r3_2 != NULL) {
        temp_r4_3 = *temp_r3_2;
        if (temp_r4_3 != NULL) {
            *((u16*)arg0 + 0x2AE/2) = *((u16*)arg0 + 0x2AE/2) | ((u32*)temp_r4_3)[0x0C/4];
        }
    }
}

s32 fn_801A99E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 var_r31;
    s32 var_r30;
    
    if (arg0 == 0) {
        return 0;
    }
    
    var_r31 = arg1 + 1;
    if (var_r31 > 1) {
        var_r31 = 1;
    }
    
    var_r30 = arg2 + 1;
    if (var_r30 > 1) {
        var_r30 = 1;
    }
    
    return (arg3 * var_r30 + (var_r31 * arg2)) * arg0;
}

void fn_801A9AF8(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;

    fn_800381EC(arg0, *(s8*)((char*)arg0 + 0x1A8));
    temp_r3 = *(void**)((char*)arg0 + 0x280);
    *(u16*)((char*)temp_r3 + 0x1A4) = *(u16*)((char*)arg0 + 0x1A4);
    *(u16*)((char*)temp_r3 + 0x1A6) = *(u16*)((char*)arg0 + 0x1A6);
    if (*(s8*)((char*)arg0 + 0x1A8) < 0) {
        if (fn_80105BC0((char*)arg0 + 0x1BC, 0x5C) != 0) {
            temp_r3_2 = *(void**)((char*)arg0 + 0x280);
            *(u32*)((char*)temp_r3_2 + 0x1A0) |= 0x01000000;
        }
    }
    if (*(s8*)((char*)arg0 + 0x294) >= 0) {
        fn_8001C4FC((char*)arg0 + 0x284, (char*)arg0 + 0x28C);
        fn_8001D5F4((char*)arg0 + 0x284, *(u8*)((char*)arg0 + 0x2C8));
        fn_80093154(*(void**)((char*)arg0 + 0x280), *(u8*)((char*)arg0 + 0x294), (char*)arg0 + 0x284);
        fn_800947E0(*(void**)((char*)arg0 + 0x280));
        temp_r3_3 = *(void**)((char*)arg0 + 0x280);
        *(u8*)((char*)temp_r3_3 + 0x20C) = *(u8*)((char*)arg0 + 0x20C);
        *(u8*)((char*)temp_r3_3 + 0x20D) = *(u8*)((char*)arg0 + 0x20D);
        *(u8*)((char*)temp_r3_3 + 0x20E) = *(u8*)((char*)arg0 + 0x20E);
        *(u8*)((char*)temp_r3_3 + 0x20F) = *(u8*)((char*)arg0 + 0x20F);
        *(u8*)((char*)temp_r3_3 + 0x210) = *(u8*)((char*)arg0 + 0x210);
        *(u8*)((char*)temp_r3_3 + 0x211) = *(u8*)((char*)arg0 + 0x211);
        *(u8*)((char*)temp_r3_3 + 0x212) = *(u8*)((char*)arg0 + 0x212);
        *(u8*)((char*)temp_r3_3 + 0x213) = *(u8*)((char*)arg0 + 0x213);
        if (*(s8*)((char*)arg0 + 0x2C8) > 0) {
            fn_800951D0(*(void**)((char*)arg0 + 0x280), -1);
        }
    }
}

void fn_801A9C0C(void *arg0) {
    M2C_UNK fn_80050E14(u16, void *);
    M2C_UNK fn_800A89C0(void *);
    M2C_UNK fn_800A8A2C(void *);
    extern u8 lbl_802CA264[];
    extern u8 lbl_80331B70[];
    extern u8 lbl_80331BD4[];
    extern s8 lbl_80368218;
    extern s8 lbl_80368219;
    u16 temp_r3;

    if (lbl_80368218 == 0) {
        fn_800A8A2C(lbl_80331B70);
        lbl_80368218 = 1;
    }
    if (lbl_80368219 == 0) {
        fn_800A89C0(lbl_80331BD4);
        lbl_80368219 = 1;
    }
    temp_r3 = *(u16 *)(lbl_80331BD4 + 0x3A);
    *(s8 *)(lbl_80331BD4 + 0x4C) = 0x64;
    *(u16 *)(lbl_80331BD4 + 0x3A) = temp_r3 | 0x1000;
    fn_80050E14(temp_r3, lbl_80331BD4);
    *(void **)((u8 *)arg0 + 0x188) = lbl_80331B70;
    *(void **)((u8 *)arg0 + 0x18C) = lbl_80331BD4;
    *(void **)((u8 *)arg0 + 0x190) = lbl_802CA264;
}

void fn_801A9CB8(void *arg0, s32 arg1) {
    M2C_UNK fn_80037E88();
    fn_80037E88();
    M2C_FIELD(arg0, s32 *, 0x280) = arg1;
}

s32 fn_801A9FC8(void) {
    return 0;
}

s32 fn_801A9FD0(void) {
    return 0;
}

s32 fn_801A9FD8(void *arg0) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x1A0);
    return -((temp >> 0xC) & 1) & ~((temp >> 0xC) & 1);
}

s32 fn_801A9FF0(void) {
    return 0;
}

s32 fn_801A9FF8(void) {
    return 0;
}

s32 fn_801AA034(void) {
    return 0;
}

void fn_801AA03C(s32 arg1) {
    fn_800F5504(arg1, 0x15);
}

void fn_801AA14C(void *arg0) {
    M2C_UNK fn_800A7EC4();
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) & 0xFE);
    fn_800A7EC4();
}

void fn_801AA1B0(void *arg0) {
    M2C_UNK fn_80057A10(s32, M2C_UNK);
    M2C_UNK fn_801AB004(void *);
    M2C_UNK fn_8000C60C(s32);
    M2C_UNK fn_8006EDA0(void *);
    struct Obj {
        u8 pad[0x50];
        u32 field50;
    };
    struct Obj *obj = arg0;

    if (*(u8 *)((u8 *)arg0 + 0x69) == 0) {
        fn_80057A10(*(s32 *)((u8 *)arg0 + 0x54), 1);
        fn_80057A10(*(s32 *)((u8 *)arg0 + 0x58), 1);
        fn_801AB004(arg0);
        fn_8000C60C(*(s32 *)((u8 *)arg0 + 0x6C));
        if (obj->field50 != 0) {
            fn_8006EDA0(&obj->field50);
        }
        *(u8 *)((u8 *)arg0 + 0x69) = 1;
    }
}

void fn_801AAD74(void *arg0) {
    s16 var = M2C_FIELD(arg0, s16 *, 0x32);
    if (var != 0) {
        fn_801AA228();
    }
}

#pragma opt_common_subs off
void fn_801AADA4(void *arg0) {
    s32 fn_80059208(void *, void *);
    u16 fn_8005C6A0(char *);
    void fn_8006EEFC(void *, void *);
    void fn_8000C188(void *);
    void fn_801ADA50(void *);
    extern u8 lbl_8027B838[];
    if (fn_8005C6A0((char *)lbl_8027B838 + 0x320) & 0x2000) {
        fn_8006EEFC((char *)arg0 + 0x50, (char *)lbl_8027B838 + 0x320);
        *(s32 *)((char *)arg0 + 0x6C) = fn_80059208(fn_801ADA50, arg0);
        fn_8000C188(arg0);
    }
}
#pragma opt_common_subs reset
void fn_801AE154(void **arg0) {
    M2C_UNK fn_80152548(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8015267C(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_801527B0(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
    fn_80152548(0x16, 0x10, 0x10);
    fn_801527B0(0x1C, 0x40, 0x10);
    fn_8015267C(0x88, 0x40, 0x10);
}

void fn_801AE1B0(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *);
    s16 sel = *(s16 *)((u8 *)arg1 + 0x3E);
    M2C_UNK spC;
    s16 sp8[2];
    s16 a;
    s16 b;

    switch (sel) {
    case 0:
        a = *(s16 *)((u8 *)arg1 + 0x40) * 0x1A + 0x28;
        b = 0x18;
        break;
    case 1:
        a = 0x24;
        b = 0x50;
        break;
    case 2:
        a = 0x90;
        b = 0x50;
        break;
    }
    sp8[0] = a;
    sp8[1] = b;
    *arg0 = *(s32 *)fn_8013F748(arg1, &spC, sp8);
}

void fn_801AE2D0(void) {

}
#include "common.h"
extern u16 lbl_80367218;
