/* Functions from 0x801A7D78 to 0x801AE2D4, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_80367218;
u32 fn_801A7D78(u32 arg0, s16 arg1) {
    M2C_UNK fn_8001C5F8(s32, M2C_UNK);
    M2C_UNK fn_800C428C(u32);
    M2C_UNK fn_801A9EB8(u32);
    M2C_UNK fn_8022C1E8(s32, M2C_UNK (*)(s32, M2C_UNK), M2C_UNK, M2C_UNK);

    if (arg0 != 0U) {
        if ((arg0 + 0x5C0) != 0) {
            fn_801A9EB8(arg0 + 0x5C0);
            fn_8001C5F8(arg0 + 0x84C, -1);
            fn_8001C5F8(arg0 + 0x844, -1);
            if (((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0)) {
                fn_8022C1E8(arg0 + 0x7AC, fn_8001C5F8, 8, 4);
                fn_8022C1E8(arg0 + 0x78C, fn_8001C5F8, 8, 4);
            }
        }
        if ((arg0 + 0x2E0) != 0) {
            fn_801A9EB8(arg0 + 0x2E0);
            fn_8001C5F8(arg0 + 0x56C, -1);
            fn_8001C5F8(arg0 + 0x564, -1);
            if (((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0)) {
                fn_8022C1E8(arg0 + 0x4CC, fn_8001C5F8, 8, 4);
                fn_8022C1E8(arg0 + 0x4AC, fn_8001C5F8, 8, 4);
            }
        }
        if (arg0 != 0U) {
            fn_801A9EB8(arg0);
            fn_8001C5F8(arg0 + 0x28C, -1);
            fn_8001C5F8(arg0 + 0x284, -1);
            if ((arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U)) {
                fn_8022C1E8(arg0 + 0x1EC, fn_8001C5F8, 8, 4);
                fn_8022C1E8(arg0 + 0x1CC, fn_8001C5F8, 8, 4);
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

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

extern s32 fn_80015320(s32 arg0, s32 arg1);
extern void fn_80015610(s32 arg0, s32 arg1);
s32 fn_801A80D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    /* Based on a minimal attempt to understand the function */
    if (arg4 == 0) {
        return 0;
    }
    
    fn_80015320(arg0, arg1);
    
    /* This is just placeholder code as there's significant complexity and unclear parts in assembly */
    return 0;
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

void fn_801A8B48(s32 arg0) {
    if (arg0 >= 0) {
        if (arg0 < 0x14) {
            s32 var_r3 = arg0;
            lbl_80367218 = 0x910 + var_r3;
            var_r3 = (var_r3 * 0x28) - 0x1010;
            if (var_r3 >= 0) {
                lbl_80367218 = arg0;
            } else if (var_r3 < 0x14) {
                lbl_80367218 = var_r3 + 0x10A;
            }
        }
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

void fn_801A8DA4(void *arg0) {
    s32 fn_80036F5C(void *, s32);
    void *fn_80036FD0(void *, s32);
    u8 fn_8003701C(void *);
    u8 fn_80038128(void *, void *);
    M2C_UNK fn_80036E48(void *, s32);
    M2C_UNK fn_800368C8(void *, s32, M2C_UNK *);
    M2C_UNK fn_8003B8D4(M2C_UNK *);
    
    s32 var_r28;
    void *temp_r3;
    u8 sp11;
    u8 sp10;
    u8 spF;
    u8 spE;
    u8 spD;
    u8 spC;
    M2C_UNK sp8;

    M2C_FIELD(arg0, u8 *, 0xC) = 0;
    M2C_FIELD(arg0, u8 *, 0x10) = 0;
    M2C_FIELD(arg0, u8 *, 0xF) = 0;
    M2C_FIELD(arg0, u8 *, 0xE) = 0;
    M2C_FIELD(arg0, u8 *, 0xD) = 0;
    M2C_FIELD(arg0, u8 *, 0x11) = 0;
    
    var_r28 = 0;
loop_6:
    if (var_r28 < (s32) fn_8003701C(arg0)) {
        temp_r3 = fn_80036FD0(arg0, var_r28);
        if ((temp_r3 != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x190) == (u32) M2C_FIELD(temp_r3, u32 *, 0x190)) && (fn_80038128(arg0, temp_r3) <= 3U)) {
            fn_80036E48(temp_r3, M2C_FIELD(arg0, s32 *, 0x188));
            fn_80036F5C(arg0, var_r28);
            fn_800368C8(arg0, 0, &sp8);
            fn_800368C8(temp_r3, 0, &sp8);
        }
        var_r28 += 1;
        goto loop_6;
    }
    fn_8003B8D4(&sp8);
    M2C_FIELD(arg0, s16 *, 0x298) = (s16) (M2C_FIELD(arg0, s16 *, 0x298) + (s8) spC);
    M2C_FIELD(arg0, s16 *, 0x29A) = (s16) (M2C_FIELD(arg0, s16 *, 0x29A) + (s8) spD);
    M2C_FIELD(arg0, s16 *, 0x29E) = (s16) (M2C_FIELD(arg0, s16 *, 0x29E) + (s8) spE);
    M2C_FIELD(arg0, s16 *, 0x2A0) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A0) + (s8) spF);
    M2C_FIELD(arg0, s16 *, 0x2A4) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A4) + (s8) sp10);
    M2C_FIELD(arg0, s16 *, 0x2A6) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A6) + (s8) sp11);
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

#pragma opt_common_subs off
void fn_801A9AF8(void *arg0) {
    struct Obj {
        u8 pad0[0x1A4];
        u16 unk1A4;
        u16 unk1A6;
        s8 unk1A8;
        u8 pad1A9[0x1BC - 0x1A9];
        u8 unk1BC[0x20C - 0x1BC];
        u8 unk20C[8];
        u8 pad214[0x280 - 0x214];
        void *unk280;
        u8 unk284[8];
        u8 unk28C[8];
        s8 unk294;
        u8 pad295[0x2C8 - 0x295];
        s8 unk2C8;
    } *p = arg0;
    u8 fn_80105BC0(void *, s32);
    void fn_80093154(void *, u8, void *);
    void *temp_r3;

    fn_800381EC(p->unk280, p->unk1A8);
    temp_r3 = p->unk280;
    M2C_FIELD(temp_r3, u16 *, 0x1A4) = p->unk1A4;
    M2C_FIELD(temp_r3, u16 *, 0x1A6) = p->unk1A6;
    if (p->unk1A8 == 0 && fn_80105BC0(p->unk1BC, 0x5C) == 0) {
        M2C_FIELD(p->unk280, u32 *, 0x1A0) |= 0x01000000;
    }
    if (p->unk294 >= 0) {
        fn_8001C4FC(p->unk284, p->unk28C);
        fn_8001D5F4(p->unk284, (u8)p->unk2C8);
        fn_80093154(p->unk280, p->unk294, p->unk284);
        fn_800947E0(p->unk280);
        temp_r3 = p->unk280;
        M2C_FIELD(temp_r3, u8 *, 0x20C) = p->unk20C[0];
        M2C_FIELD(temp_r3, u8 *, 0x20D) = p->unk20C[1];
        M2C_FIELD(temp_r3, u8 *, 0x20E) = p->unk20C[2];
        M2C_FIELD(temp_r3, u8 *, 0x20F) = p->unk20C[3];
        M2C_FIELD(temp_r3, u8 *, 0x210) = p->unk20C[4];
        M2C_FIELD(temp_r3, u8 *, 0x211) = p->unk20C[5];
        M2C_FIELD(temp_r3, u8 *, 0x212) = p->unk20C[6];
        M2C_FIELD(temp_r3, u8 *, 0x213) = p->unk20C[7];
        if (p->unk2C8 <= 0) {
            fn_800951D0(p->unk280, -1);
        }
    }
}
#pragma opt_common_subs reset
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

void *fn_801A9CF4(void *dst, void *src) {
    if (src != dst) {
        fn_80037E88();
        *(u32*)(((char*)dst) + 0x280) = *(u32*)(((char*)src) + 0x280);
        fn_8001C4FC(((char*)dst) + 0x284, ((char*)src) + 0x284);
        fn_8001C4FC(((char*)dst) + 0x28C, ((char*)src) + 0x28C);
        *(u8*)(((char*)dst) + 0x294) = *(u8*)(((char*)src) + 0x294);
        *(u8*)(((char*)dst) + 0x295) = *(u8*)(((char*)src) + 0x295);
        *(u8*)(((char*)dst) + 0x296) = *(u8*)(((char*)src) + 0x296);
        *(s16*)(((char*)dst) + 0x298) = *(s16*)(((char*)src) + 0x298);
        *(s16*)(((char*)dst) + 0x29A) = *(s16*)(((char*)src) + 0x29A);
        *(s16*)(((char*)dst) + 0x29C) = *(s16*)(((char*)src) + 0x29C);
        *(s16*)(((char*)dst) + 0x29E) = *(s16*)(((char*)src) + 0x29E);
        *(s16*)(((char*)dst) + 0x2A0) = *(s16*)(((char*)src) + 0x2A0);
        *(s16*)(((char*)dst) + 0x2A2) = *(s16*)(((char*)src) + 0x2A2);
        *(s16*)(((char*)dst) + 0x2A4) = *(s16*)(((char*)src) + 0x2A4);
        *(s16*)(((char*)dst) + 0x2A6) = *(s16*)(((char*)src) + 0x2A6);
        *(s16*)(((char*)dst) + 0x2A8) = *(s16*)(((char*)src) + 0x2A8);
        *(s16*)(((char*)dst) + 0x2AA) = *(s16*)(((char*)src) + 0x2AA);
        *(s16*)(((char*)dst) + 0x2AC) = *(s16*)(((char*)src) + 0x2AC);
        *(u16*)(((char*)dst) + 0x2AE) = *(u16*)(((char*)src) + 0x2AE);
        *(u32*)(((char*)dst) + 0x2B0) = *(u32*)(((char*)src) + 0x2B0);
        *(u8*)(((char*)dst) + 0x2B4) = *(u8*)(((char*)src) + 0x2B4);
        *(u8*)(((char*)dst) + 0x2B5) = *(u8*)(((char*)src) + 0x2B5);
        *(u8*)(((char*)dst) + 0x2B6) = *(u8*)(((char*)src) + 0x2B6);
        *(u8*)(((char*)dst) + 0x2B7) = *(u8*)(((char*)src) + 0x2B7);
        *(u8*)(((char*)dst) + 0x2B8) = *(u8*)(((char*)src) + 0x2B8);
        *(s16*)(((char*)dst) + 0x2BA) = *(s16*)(((char*)src) + 0x2BA);
        *(s16*)(((char*)dst) + 0x2BC) = *(s16*)(((char*)src) + 0x2BC);
        *(s16*)(((char*)dst) + 0x2BE) = *(s16*)(((char*)src) + 0x2BE);
        *(s16*)(((char*)dst) + 0x2C0) = *(s16*)(((char*)src) + 0x2C0);
        *(s16*)(((char*)dst) + 0x2C2) = *(s16*)(((char*)src) + 0x2C2);
        *(s16*)(((char*)dst) + 0x2C4) = *(s16*)(((char*)src) + 0x2C4);
        *(u8*)(((char*)dst) + 0x2C6) = *(u8*)(((char*)src) + 0x2C6);
        *(u8*)(((char*)dst) + 0x2C7) = *(u8*)(((char*)src) + 0x2C7);
        *(u8*)(((char*)dst) + 0x2C8) = *(u8*)(((char*)src) + 0x2C8);
        *(u8*)(((char*)dst) + 0x2C9) = *(u8*)(((char*)src) + 0x2C9);
        *(u8*)(((char*)dst) + 0x2CA) = *(u8*)(((char*)src) + 0x2CA);
        *(u8*)(((char*)dst) + 0x2CB) = *(u8*)(((char*)src) + 0x2CB);
        *(u8*)(((char*)dst) + 0x2CC) = *(u8*)(((char*)src) + 0x2CC);
        *(s16*)(((char*)dst) + 0x2CE) = *(s16*)(((char*)src) + 0x2CE);
        *(u8*)(((char*)dst) + 0x2D6) = *(u8*)(((char*)src) + 0x2D6);
        *(u8*)(((char*)dst) + 0x2D7) = *(u8*)(((char*)src) + 0x2D7);
        *(u8*)(((char*)dst) + 0x2D8) = *(u8*)(((char*)src) + 0x2D8);
        *(u8*)(((char*)dst) + 0x2D9) = *(u8*)(((char*)src) + 0x2D9);
        *(u8*)(((char*)dst) + 0x2DA) = *(u8*)(((char*)src) + 0x2DA);
        *(u8*)(((char*)dst) + 0x2DB) = *(u8*)(((char*)src) + 0x2DB);
        *(u8*)(((char*)dst) + 0x2DC) = *(u8*)(((char*)src) + 0x2DC);
        *(u8*)(((char*)dst) + 0x2DD) = *(u8*)(((char*)src) + 0x2DD);
        *(u8*)(((char*)dst) + 0x2DE) = *(u8*)(((char*)src) + 0x2DE);
    }
    return dst;
}

void fn_801A9EB8(void *arg0) {
    void fn_8003B6F0(void *, s32);
    void fn_8001D580(void *);

    fn_8003B6F0(arg0, 0);
    *(u32*)(((char*)arg0) + 0x280) = 0;
    fn_8001D580(((char*)arg0) + 0x284);
    fn_8001D580(((char*)arg0) + 0x28C);
    *(s8*)(((char*)arg0) + 0x294) = -1;
    *(u8*)(((char*)arg0) + 0x295) = 0;
    *(u8*)(((char*)arg0) + 0x296) = 0;
    *(s16*)(((char*)arg0) + 0x298) = 0;
    *(s16*)(((char*)arg0) + 0x29A) = 0;
    *(s16*)(((char*)arg0) + 0x29C) = 0;
    *(s16*)(((char*)arg0) + 0x29E) = 0;
    *(s16*)(((char*)arg0) + 0x2A0) = 0;
    *(s16*)(((char*)arg0) + 0x2A2) = 0;
    *(s16*)(((char*)arg0) + 0x2A4) = 0;
    *(s16*)(((char*)arg0) + 0x2A6) = 0;
    *(s16*)(((char*)arg0) + 0x2A8) = 0;
    *(s16*)(((char*)arg0) + 0x2AA) = 0;
    *(s16*)(((char*)arg0) + 0x2AC) = 0;
    *(u16*)(((char*)arg0) + 0x2AE) = 0;
    *(u32*)(((char*)arg0) + 0x2B0) = 0;
    *(u8*)(((char*)arg0) + 0x2B4) = 0;
    *(u8*)(((char*)arg0) + 0x2B5) = 0;
    *(u8*)(((char*)arg0) + 0x2B6) = 0;
    *(s16*)(((char*)arg0) + 0x2C2) = 0;
    *(s16*)(((char*)arg0) + 0x2C4) = 0;
    *(u8*)(((char*)arg0) + 0x2C6) = 0;
    *(u8*)(((char*)arg0) + 0x2C7) = 0;
    *(u8*)(((char*)arg0) + 0x2C8) = 0;
    *(u8*)(((char*)arg0) + 0x2C9) = 0;
    *(u8*)(((char*)arg0) + 0x2CA) = 0;
    *(u8*)(((char*)arg0) + 0x2CB) = 0;
    *(u8*)(((char*)arg0) + 0x2CC) = 0;
    *(s16*)(((char*)arg0) + 0x2CE) = 0;
    *(u32*)(((char*)arg0) + 0x2D0) = 0;
    *(u8*)(((char*)arg0) + 0x2D4) = 0;
    *(u8*)(((char*)arg0) + 0x2D5) = 0;
    *(u8*)(((char*)arg0) + 0x2D6) = 0;
    *(u8*)(((char*)arg0) + 0x2DE) = 0;
    *(u8*)(((char*)arg0) + 0x2DD) = 0;
    *(u8*)(((char*)arg0) + 0x2DC) = 0;
    *(u8*)(((char*)arg0) + 0x2DB) = 0;
    *(u8*)(((char*)arg0) + 0x2DA) = 0;
    *(u8*)(((char*)arg0) + 0x2D9) = 0;
    *(u8*)(((char*)arg0) + 0x2D8) = 0;
    *(u8*)(((char*)arg0) + 0x2D7) = 0;
    *(u8*)(((char*)arg0) + 0x2B7) = 0xFF;
    *(u8*)(((char*)arg0) + 0x2B8) = 0xFF;
    *(s16*)(((char*)arg0) + 0x2BA) = -1;
    *(s16*)(((char*)arg0) + 0x2BC) = -1;
    *(s16*)(((char*)arg0) + 0x2BE) = -1;
    *(s16*)(((char*)arg0) + 0x2C0) = -1;
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

extern u8 lbl_802973C8[16];
void fn_801AA120(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_802973C8[16];
    fn_8000CAA0(lbl_802973C8, arg0);
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

void fn_801AB358(void *arg0) {
    extern u8 lbl_80330708[];
    u16 *var_r3 = (u16 *)arg0;
    u8 *var_r4 = &lbl_80330708[0];
    var_r3[0x2E/2] = 0;
    var_r3[0x2F/2] = (u8)((var_r4[0x9C] >> 6) & 3);
    if ((var_r4[0x9F] >> 4) & 1) {
        var_r3[0x2E/2] |= 0x4000;
    }
    var_r3[0x30/2] = (u8)((var_r4[0x9C] >> 5) & 1);
    var_r3[0x31/2] = (u8)((var_r4[0x9C] >> 3) & 3);
    var_r3[0x32/2] = var_r4[0xA0];
    if ((var_r4[0x9C] >> 2) & 1) {
        var_r3[0x2E/2] |= 1;
    }
    if ((var_r4[0x9C] >> 1) & 1) {
        var_r3[0x2E/2] |= 2;
    }
    if (var_r4[0x9C] & 1) {
        var_r3[0x2E/2] |= 4;
    }
    var_r3[0x33/2] = (u8)((var_r4[0x9D] >> 6) & 3);
    if ((var_r4[0x9D] >> 5) & 1) {
        var_r3[0x2E/2] |= 8;
    }
    if ((var_r4[0x9D] >> 4) & 1) {
        var_r3[0x2E/2] |= 0x10;
    }
    var_r3[0x34/2] = (u8)((var_r4[0x9D] >> 2) & 3);
    if ((var_r4[0x9D] >> 1) & 1) {
        var_r3[0x2E/2] |= 0x20;
    }
    if (var_r4[0x9D] & 1) {
        var_r3[0x2E/2] |= 0x40;
    }
    if ((var_r4[0x9E] >> 7) & 1) {
        var_r3[0x2E/2] |= 0x80;
    }
    if ((var_r4[0x9E] >> 6) & 1) {
        var_r3[0x2E/2] |= 0x100;
    }
    if ((var_r4[0x9E] >> 5) & 1) {
        var_r3[0x2E/2] |= 0x200;
    }
    if ((var_r4[0x9E] >> 4) & 1) {
        var_r3[0x2E/2] |= 0x400;
    }
    if ((var_r4[0x9F] >> 5) & 1) {
        var_r3[0x2E/2] |= 0x2000;
    }
    var_r3[0x36/2] = (u8)((var_r4[0x9E] >> 2) & 3);
    var_r3[0x37/2] = var_r4[0xA4];
    var_r3[0x38/2] = var_r4[0xA5];
    if ((var_r4[0x9E] >> 1) & 1) {
        var_r3[0x2E/2] |= 0x800;
    }
    if (var_r4[0x9E] & 1) {
        var_r3[0x2E/2] |= 0x1000;
    }
    var_r4[0x9E] = (var_r4[0x9E] & ~2);
}

void fn_801ACF4C(void *arg0) {
    extern u8 lbl_80368220;
    extern u16 lbl_80368224[];
    extern f32 lbl_8036AFA0;
    extern f32 lbl_8036B028;
    extern u8 lbl_802972C0[];
    extern f64 lbl_8036AFC0;
    extern f32 lbl_8036B030;
    extern f32 lbl_8036B01C;
    extern f32 lbl_8036B02C;
    extern void fn_801ADD58;
    
    s32 var_r30;
    f32 temp_f2;
    f32 temp_f3;
    s32 temp_r4;
    u16 *temp_r4_ptr;
    
    if (lbl_80368220 == 0) {
        lbl_80368220 = 1;
    }
    temp_r4_ptr = lbl_80368224;
    temp_r4_ptr[0] = 0x30;
    temp_r4_ptr[1] = 0x80;
    temp_r4_ptr[2] = 0x208;
    temp_r4_ptr[3] = 0xFE;
    temp_f2 = *(f32*)((char*)arg0 + 0x38);
    if (temp_f2 > lbl_8036AFA0) {
        *(f32*)((char*)arg0 + 0x38) = temp_f2 - lbl_8036B028;
        if (*(f32*)((char*)arg0 + 0x38) < lbl_8036AFA0) {
            *(f32*)((char*)arg0 + 0x38) = lbl_8036AFA0;
        }
    }
    temp_f2 = *(f32*)((char*)arg0 + 0x38);
    if (temp_f2 < lbl_8036AFA0) {
        *(f32*)((char*)arg0 + 0x38) = temp_f2 + lbl_8036B028;
        if (*(f32*)((char*)arg0 + 0x38) > lbl_8036AFA0) {
            *(f32*)((char*)arg0 + 0x38) = lbl_8036AFA0;
        }
    }
    fn_8000A258();
    fn_80009BC0(&fn_801ADD58, (u16*)lbl_80368224);
    fn_8000A248();
    var_r30 = 0;
    do {
        temp_r4 = *(u8*)((char*)arg0 + 0x36) + (var_r30 - 1);
        if ((temp_r4 >= 0) && (temp_r4 < *(u8*)((char*)arg0 + 0x31)) && (*(u8*)(lbl_802972C0 + (temp_r4 * 0xC)) == 1)) {
            temp_f3 = *(f32*)((char*)arg0 + 0x38);
            fn_801AB8A8(arg0, lbl_8036B02C, (lbl_8036B030 * temp_f3) + ((lbl_8036B030 * (f32) var_r30) + lbl_8036B01C), temp_f3, lbl_8036B030);
        }
        var_r30 += 1;
    } while (var_r30 < 0xA);
    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
}

void fn_801ADD58(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

#pragma cplusplus on
extern "C" void fn_801ADD8C(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}
#pragma cplusplus reset
void fn_801ADFCC(void *arg0, void *arg1) {
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r4;
    s32 temp_r3;
    
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s8 *, 9) = 0;
        M2C_FIELD(arg1, s8 *, 8) = 0;
        M2C_FIELD(arg1, s8 *, 7) = 0;
        M2C_FIELD(arg1, s8 *, 6) = 0;
        M2C_FIELD(arg1, s8 *, 5) = 0;
        M2C_FIELD(arg1, s8 *, 4) = 0;
        M2C_FIELD(arg1, s8 *, 3) = 0;
        M2C_FIELD(arg1, s8 *, 2) = 0;
        M2C_FIELD(arg1, s8 *, 1) = 0;
        M2C_FIELD(arg1, s8 *, 0) = 0;
        
        if (arg0 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                M2C_FIELD(arg1, void **, 0x14) = M2C_FIELD(arg0, void **, 0x14);
            }
            
            // Process some values based on data from arg0
            temp_r3 = M2C_FIELD(arg0, s16 *, 0x40); // r3 = (u16) *(arg0 + 0x40)
            temp_r4 = temp_r3 * 0x1a;
            temp_r4 += 0x1b;
            temp_r29 = temp_r4;
            temp_r29 = (s16)temp_r29; // extsh
            
            if (M2C_FIELD(arg0, s16 *, 0x42) >= 0) {
                // If 0x42 field >= 0
                temp_r28 = temp_r29;
                temp_r29 = 0x10;
                M2C_FIELD(arg1, s16 *, 0x42) = temp_r29;
                M2C_FIELD(arg1, s16 *, 0x44) = temp_r28;
            } else {
                // If 0x42 field < 0
                if (M2C_FIELD(arg0, s16 *, 0x40) != 0) {
                    temp_r3 = M2C_FIELD(arg0, s16 *, 0x44); // Get r3 from 0x44
                
                    // Calculate new values for attributes
                    temp_r29 += 1; // r29 += 1;
                    temp_r29 >> 1; // r29 = r29 >> 1;
                    
                    temp_r28 += 1; // r28 += 1;
                    temp_r28 >> 1; // r28 = r28 >> 1;
                    
                    M2C_FIELD(arg1, s16 *, 0x42) = temp_r29;
                    M2C_FIELD(arg1, s16 *, 0x44) = temp_r28;
                }
            }
            
            // Handle more attribute values
            if (M2C_FIELD(arg1, u8 *, 0x3c) != 0) {
                temp_r3 = M2C_FIELD(arg1, u8 *, 0x2d); 
                if (temp_r3 == 0) {
                    temp_r3 = M2C_FIELD(arg1, u8 *, 0x2e);
                    if (temp_r3 != 0) {
                        temp_r4 = 0;
                        temp_r3 = 1; 
                        goto label_0x638c;
                    } else {
                        temp_r3 = 0;
                        temp_r4 = 0;
                        goto label_0x638c;
                    }
                }
            }
            temp_r4 = M2C_FIELD(arg1, s32 *, 0x34);
            if (temp_r4 == 0) {
                temp_r4 = 1;
            } else {
                temp_r3 = M2C_FIELD(arg1, s32 *, 0x38); 
                temp_r3 = *(s32*)((u8*)arg1 + 0x8);
            }
        label_0x638c:
            // Handle the return value
            if (temp_r4 != 0) {
                temp_r3 = 0;
            }
        }
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

s32 fn_801AE24C(void *arg0) {
    extern u16 lbl_80297590[];
    return *(s32*)((char*)lbl_80297590 + ((u32)*(u16*)((char*)arg0 + 0x3E) << 2));
}

void *fn_801AE264(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_8029759C[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_8029759C;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801AE2D0(void) {

}
#include "common.h"
extern u16 lbl_80367218;
