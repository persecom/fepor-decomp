#include "common.h"
extern u32 lbl_802EF4C8[];
extern u16 lbl_80278080[];
extern u16 lbl_80294604[];
extern u8 lbl_80330708[];
extern u16 lbl_803680E8[];
extern f32 lbl_8036AC2C;
extern f32 lbl_8036AC30;
extern f32 lbl_8036AC34;
extern f32 lbl_8036AC40;
extern f32 lbl_8036AC48;
extern f32 lbl_8036AC5C;
extern f32 lbl_8036AC60;
extern f32 lbl_8036AC64;
extern f32 lbl_8036AC68;
extern f32 lbl_8036AC6C;
extern f32 lbl_8036AC70;
extern f32 lbl_8036AC74;
extern f32 lbl_8036AC78;
extern f32 lbl_8036AB94;
extern u16 lbl_80294604[];
extern u16 lbl_80295580[10];
extern f32 lbl_8036ABB0;
extern f32 lbl_8036ABBC;
extern f32 lbl_8036ABA0;
extern f32 lbl_8036A9C0;

extern void (*lbl_802B14E4)(void **);

static inline u8 IsSlotFilled(void *obj, s16 slot) {
    u32 *fn_80037BD0(s32, s32);
    s32 idx = slot;
    u32 *item = fn_80037BD0(M2C_FIELD(obj, s32 *, 0x58), idx);

    if (M2C_FIELD(obj, s32 *, 0x5C) == 1 && *item == 0) {
        if (slot == 0 || slot == 4 || *fn_80037BD0(M2C_FIELD(obj, s32 *, 0x58), idx - 1) != 0) {
            return 1;
        }
    }
    return *item != 0;
}

static inline u8 IsSlotAvailable(void *obj, s16 slot) {
    if (slot >= 0 && slot <= 3 && !(M2C_FIELD(obj, s32 *, 0x60) & 1)) {
        return 0;
    }
    if (slot >= 4 && slot <= 7 && !(M2C_FIELD(obj, s32 *, 0x60) & 2)) {
        return 0;
    }
    return IsSlotFilled(obj, slot);
}

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

void fn_80163C98(s32 *arg0, void *arg1) {
    s16 temp_r0;
    s16 var_r0;
    s16 var_r5;

    temp_r0 = *(s16 *)((u8 *)arg1 + 0x4C);
    if (temp_r0 < 0) {
        var_r0 = 0;
        var_r5 = 0;
    } else {
        var_r5 = *(s16 *)((u8 *)arg1 + 0x64);
        var_r0 = (*(s16 *)((u8 *)arg1 + 0x54) * (temp_r0 & 3)) + *(s16 *)((u8 *)arg1 + 0x66);
    }
 
    *(s16 *)((u8 *)arg1 + 0x8) = var_r5;
    *(s16 *)((u8 *)arg1 + 0xA) = var_r0;  
    *arg0 = *(s32 *)fn_8013F748(arg1, (void *)((u8 *)arg1 + 0x4C));
}

void fn_80163E50(void *arg0) {
    *(s16 *)((char *)arg0 + 0x12) = 2;
    *(s16 *)((char *)arg0 + 0x14) = 2;
    *(s16 *)((char *)arg0 + 0x16) = 0x106;
    *(s16 *)((char *)arg0 + 0x18) = 0x86;
}

void fn_80163E70(void **arg0) {
    void (**func_ptr)(void) = (void (**)(void))((u8*)*arg0 + 0x20);
    (*func_ptr)();
}

void fn_80164940(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    fn_8008AB7C(arg1 + (arg3 >> 1), arg2 + (arg4 >> 1), arg3, 0x18, 0x19, 0x4C, arg5);
}

s32 fn_801649C8(void *arg0, s32 *arg1) {
    u8 (*temp_r12)(s32 *, s32);

    temp_r12 = M2C_FIELD(arg0, u8 (**)(s32 *, s32), 0x70);
    if (temp_r12 != NULL) {
        return temp_r12(arg1, M2C_FIELD(arg0, s32 *, 0x74)) != 0;
    }
    return fn_80093DA8(M2C_FIELD(arg0, s32 *, 0x58), *arg1);
}

void fn_80164A24(void *arg0) {
    fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58));
}

void fn_80164A48(void *arg0) {
    if (*(u32 *)((char *)arg0 + 0x58) != 0) {
        fn_800947E0();
    }
}

#pragma scheduling off
s32 fn_80164BB0(void *arg0) {
    u32 *fn_80037BD0(s32, s32);
    s16 slot = M2C_FIELD(arg0, s16 *, 0x4C);
    s32 idx = slot;

    if ((idx < 0) || (slot > 7)) {
        return 0;
    }
    return (s32) fn_80037BD0(M2C_FIELD(arg0, s32 *, 0x58), idx);
}
#pragma scheduling reset
s16 fn_80164FBC(void *arg0, s16 arg1) {
    for (; arg1 >= 0; arg1--) {
        if (IsSlotAvailable(arg0, arg1)) {
            break;
        }
    }
    return arg1;
}

void fn_801650DC(void *arg0) {
    *(s16 *)((char *)arg0 + 0x12) = 2;
    *(s16 *)((char *)arg0 + 0x14) = 0x1A;
    *(s16 *)((char *)arg0 + 0x16) = 0x106;
    *(s16 *)((char *)arg0 + 0x18) = 0x12A;
}

void *fn_80165160(void *arg0, s16 arg1) {
    M2C_UNK fn_8013F2A4(void *, s32);
    M2C_UNK fn_800C428C(void *);
    extern u8 lbl_80293B30[];
    extern u8 lbl_80293BB8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293B30;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293BB8;
            fn_8013F2A4(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_801651D0(void) {
    return 0x18;
}

s32 fn_801651D8(void) {
    return 0x10;
}

void *fn_801651E0(void *arg0, s16 arg1) {
    M2C_UNK fn_8013F2A4(void *, s32);
    M2C_UNK fn_800C428C(void *);
    extern u8 lbl_80293B74[];
    extern u8 lbl_80293BB8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293B74;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293BB8;
            fn_8013F2A4(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_80165250(void) {
    return 0;
}

#pragma cplusplus on
extern "C" void fn_80165300(void *arg0) {
    void fn_80154138(s32, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80154138(0, 0, 0x10);
}
#pragma cplusplus reset
void fn_801658DC(s32 arg0, s32 arg1) {
    s32 fn_8000E0E4(s32);
    s32 strlen(void);
    void fn_800C96F8(s32, s32, s32);

    s32 temp_r31 = fn_8000E0E4(arg1);
    fn_800C96F8(arg0 + 0x3C, temp_r31, strlen());
}

void *fn_8016592C(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    M2C_UNK fn_800C9A60(void *, s32);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_80293C00[];
    extern u8 lbl_80293C2C[];
    extern u8 lbl_80293C84[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293C00;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293C2C;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80293C84;
                fn_800C9A60((u8 *)arg0 + 0x3C, -1);
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                    if (arg0 != NULL) {
                        M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                    }
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_801659D4(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    M2C_UNK fn_800C9A60(void *, s32);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_80293C2C[];
    extern u8 lbl_80293C84[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293C2C;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293C84;
            fn_800C9A60((u8 *)arg0 + 0x3C, -1);
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80165A6C(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    M2C_UNK fn_800C9A60(void *, s32);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_80293C58[];
    extern u8 lbl_80293C84[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80293C58;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293C84;
            fn_800C9A60((u8 *)arg0 + 0x3C, -1);
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80165B04(void *arg0) {
    return *(void **)((char *)arg0 + 0x50);
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

s32 fn_801660A8(void) {
    return (M2C_FIELD(&lbl_80330708, u8 *, 0x10) * 7) + 0x39A81;
}

u32 fn_8016614C(s32 arg0) {
    extern u8 lbl_80330708[];
    s32 temp_r0;
    u32 temp_r3;
    u32 var_r6;

    temp_r0 = arg0 * 4;
    var_r6 = *(u32*)(temp_r0 + 0x14);
    if (arg0 == 2) {
        return var_r6;
    }
    if (arg0 == 3) {
        arg0 = 2;
    }
    if (*(u8*)(0xA6 + lbl_80330708) == 1) {
        temp_r3 = *(u32*)(arg0 * 4 + 0x24);
        if (temp_r3 != 0U) {
            var_r6 = temp_r3;
        }
    } else if (*(u8*)(0xA6 + lbl_80330708) == 2) {
        temp_r3 = *(u32*)(arg0 * 4 + 0x30);
        if (temp_r3 != 0U) {
            var_r6 = temp_r3;
        }
    }
    return var_r6;
}

u8 fn_801661CC(void *arg0) {
    extern u8 lbl_80330708[];
    switch ((s32) lbl_80330708[0xA6]) { /* irregular */
    case 0:
        return M2C_FIELD(arg0, u8 *, 0x3D);
    case 1:
        return M2C_FIELD(arg0, u8 *, 0x3E);
    case 2:
        return M2C_FIELD(arg0, u8 *, 0x3F);
    case 3:
        return M2C_FIELD(arg0, u8 *, 0x40);
    default:
        return 0U;
    }
}

void *fn_801662F0(u32 *arg0) {
    extern u16 lbl_802778A8[];
    u32 temp = (u32)*arg0;
    if (temp == 0U) {
        return (void *)&lbl_802778A8[0xE7];
    }
    return (void *)fn_8000E0E4();
}

extern u16 lbl_8028DED0[];
void *fn_80166940(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern u8 lbl_80293CD0[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x40) = lbl_80293CD0;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0x40) = lbl_8028DED0;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801669B0(void* arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    
    // Load various data from globals
    temp_r3 = lbl_802EF4C8[arg1];
    temp_r4 = *(u32*)&lbl_80278080[temp_r3 * 2 + 0x10];
    temp_r5 = *(u32*)&lbl_80294604[temp_r3 * 2 + 0x10];
    temp_r6 = *(u16*)&lbl_80330708[arg1 * 2];
    temp_r7 = *(u16*)&lbl_803680E8[arg1 * 2];
    temp_r8 = *(u16*)&lbl_80278080[temp_r3 * 2 + 0x12];
    
    // Store values to arg0
    *(u32*)arg0 = temp_r4;
    *(u32*)((char*)arg0 + 4) = temp_r5;
    *(u16*)((char*)arg0 + 8) = (u16)temp_r6;
    *(u16*)((char*)arg0 + 0xA) = (u16)temp_r7;
    *(u16*)((char*)arg0 + 0xC) = (u16)temp_r8;
}

void fn_80166CB0(s32 arg0) {
    extern s32 *lbl_80367240;
    extern u8 lbl_80330D68[];
    extern f32 lbl_8036A92C;
    extern s32 lbl_8036A938;
    extern f32 lbl_8036A93C;
    extern f32 lbl_8036A940;
    extern u8 lbl_80277A20[];
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r5;

    temp_r5 = lbl_80367240[1];
    if (temp_r5 & (lbl_80367240[2] ^ temp_r5) & 0x0F001F7F) {
        if (!(M2C_FIELD(&lbl_80330D68, s32 *, 0) & 1)) {
            temp_f2 = lbl_8036A93C + *(f32 *)(lbl_80330D68 + 0xDC);
            *(s32 *)(lbl_80330D68) |= lbl_8036A938;
            temp_f1 = lbl_8036A940 + *(f32 *)(lbl_80330D68 + 0xE0);
            *(f32 *)(lbl_80330D68 + 0xFC) = *(f32 *)(lbl_80330D68 + 0xF4);
            *(f32 *)(lbl_80330D68 + 0x100) = *(f32 *)(lbl_80330D68 + 0xF8);
            *(f32 *)(lbl_80330D68 + 0x104) = temp_f2;
            *(f32 *)(lbl_80330D68 + 0x108) = temp_f1;
            *(f32 *)(lbl_80330D68 + 0x114) = *(f32 *)(lbl_80330D68 + 0x10C);
            *(f32 *)(lbl_80330D68 + 0x118) = *(f32 *)(lbl_80330D68 + 0x110);
            *(f32 *)(lbl_80330D68 + 0x11C) = lbl_8036A92C;
            *(f32 *)(lbl_80330D68 + 0x120) = lbl_8036A92C;
            *(s32 *)(lbl_80330D68 + 0xCC) = 8;
            fn_801475FC(lbl_80277A20 + 0x6C, 0x64, *(s32 *)(lbl_80330D68), *(f32 *)(lbl_80330D68 + 0x110), *(f32 *)(lbl_80330D68 + 0x10C), temp_f1, lbl_8036A940, temp_f2, *(f32 *)(lbl_80330D68 + 0xF8), *(f32 *)(lbl_80330D68 + 0xF4));
        }
        fn_8000C188(arg0);
    }
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

void fn_8016758C(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *fn_8000C0C0(void *, void *);
    void fn_8000CAF0(void *, s32);
    void fn_8005C8B4(void *);
    void fn_801475FC(void *, s32);
    void fn_80167190(void *, s32, f32, f32);
    void *memset(void *, int, s32);

    extern u8 lbl_80293D20[32];
    extern u8 lbl_80330D68[296];
    extern u8 lbl_80277A20[59];
    extern f32 lbl_8036A92C;

    void *temp_r3;
    u8 var_r0;

    temp_r3 = fn_8000C0C0(lbl_80293D20, lbl_80293D20);
    if (temp_r3 == NULL) {
        var_r0 = 0;
    } else if (*(u8 *)((uintptr_t)temp_r3 + 0x2E) != 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        fn_8000CAF0(lbl_80293D20, arg1);
        memset(lbl_80330D68, 0, 0x124);
        *(f32 *)((uintptr_t)arg0 + 0xDC) = farg0;
        *(f32 *)((uintptr_t)arg0 + 0xE0) = farg1;
        *(f32 *)((uintptr_t)arg0 + 0xF4) = farg0;
        *(f32 *)((uintptr_t)arg0 + 0xF8) = farg1;
        *(f32 *)((uintptr_t)arg0 + 0x10C) = lbl_8036A92C;
        *(f32 *)((uintptr_t)arg0 + 0x110) = lbl_8036A92C;
        fn_8005C8B4(lbl_80277A20 + 0x42);
        fn_801475FC(lbl_80277A20 + 0x52, 0x64);
        fn_80167190(arg0, arg2, farg0, farg1);
    }
}

void fn_80168D3C(s32 arg0) {
    void fn_801676AC(void *, s32);
    extern u8 lbl_80330D68[16];
    fn_801676AC(lbl_80330D68, arg0);
}

#pragma opt_common_subs off
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
#pragma opt_common_subs reset
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

void fn_801690B0(s32 arg0) {
    M2C_UNK fn_8000C070(M2C_UNK);
    M2C_UNK fn_8013FDA0(s32);
    extern void *lbl_80367240;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 8);
    if (temp_r4 & (temp_r4 ^ M2C_FIELD(lbl_80367240, s32 *, 4)) & 0x200) {
        fn_8000C070(1);
    }
    fn_8013FDA0(arg0);
}

#pragma cplusplus on
extern "C" void fn_8016915C(void *);
extern "C" u8 lbl_80291AC8[];
extern "C" void *fn_80169104(void *arg0) {
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
    fn_8016915C(arg0);
    M2C_FIELD(arg0, void **, 0) = lbl_80291AC8;
    M2C_FIELD(arg0, s16 *, 0xD4) = 1;
    ((Obj *) arg0)->m28();
    return arg0;
}
#pragma cplusplus reset
void fn_80169498(void) {
    M2C_FIELD(&lbl_80330708, s8 *, 0x55) = 1;
}

void fn_801694AC(s32 arg0) {
    void *fn_8000CAA0(M2C_UNK *, M2C_UNK *);
    extern M2C_UNK lbl_80294060;
    M2C_FIELD(fn_8000CAA0(&lbl_80294060, &lbl_80294060), s32 *, 0x30) = arg0;
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

void fn_80169644(void *arg0) {
    u32 fn_8000BCA4(void *);
    void fn_8000A408(void);
    void fn_8007D064(s32, void *, s32);
    void fn_8013FEF0(void);
    extern u8 lbl_80277BC0[];

    fn_8013FEF0();
    if (fn_8000BCA4(lbl_80277BC0 + 0xBE) != 0) {
        fn_8000A408();
    }
    fn_8007D064(*(s32 *)((u8 *)arg0 + 0x30), arg0, *(s32 *)((u8 *)arg0 + 0x34));
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

s32 fn_801696E0(void) {
    extern u16 lbl_80293D8C[];
    s32 v = fn_8000C0C0(lbl_80293D8C);
    return v != 0;
}

void *fn_80169714(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    void fn_801403F0(void);
    void fn_8000CAF0(void *, void *);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80293D8C[];
    extern u8 lbl_80293D50[];

    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80293D8C, arg0, lbl_80293D8C);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(s32 *)((u8 *)temp_r3 + 0x40) = 0;
        *(s32 *)((u8 *)temp_r3 + 0x44) = 0;
        *(s32 *)((u8 *)temp_r3 + 0x48) = 0;
        *(s32 *)((u8 *)temp_r3 + 0x4C) = 0;
        *(s32 *)((u8 *)temp_r3 + 0x50) = 0;
    }
    fn_8000CAF0(lbl_80293D50, temp_r3);
    fn_8000C070(temp_r3, 8);
    return temp_r3;
}

void *fn_8016978C(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    void fn_8000CAF0(void *, void *);
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    M2C_UNK fn_801403F0();
    extern u16 lbl_80293D50[];
    extern u16 lbl_80293D8C[];

    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80293D8C, arg0, lbl_80293D8C);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(s32*)((char*)temp_r3 + 0x40) = 0;
        *(s32*)((char*)temp_r3 + 0x44) = 0;
        *(s32*)((char*)temp_r3 + 0x48) = 0;
        *(s32*)((char*)temp_r3 + 0x4C) = 0;
        *(s32*)((char*)temp_r3 + 0x50) = 0;
    }
    fn_8000CAF0(lbl_80293D50, temp_r3);
    fn_8000C070(temp_r3, 0x10);
    return temp_r3;
}

void *fn_80169804(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    void fn_8000CAF0(void *, void *);
    extern u16 lbl_80293D8C[];
    extern u16 lbl_80293D50[];

    void *temp_r4;

    temp_r4 = fn_8000CAA0(lbl_80293D8C, arg0, lbl_80293D8C);
    if (temp_r4 != NULL) {
        fn_801403F0();
        *(s32 *)((u8 *)temp_r4 + 0x40) = 0;
        *(s32 *)((u8 *)temp_r4 + 0x44) = 0;
        *(s32 *)((u8 *)temp_r4 + 0x48) = 0;
        *(s32 *)((u8 *)temp_r4 + 0x4C) = 0;
        *(s32 *)((u8 *)temp_r4 + 0x50) = 0;
    }
    fn_8000CAF0(lbl_80293D50, temp_r4);
    return temp_r4;
}

void fn_80169870(void *arg0) {
    M2C_UNK fn_80140304(void *, M2C_UNK);
    M2C_UNK fn_80145520();
    M2C_UNK fn_80148980(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_8032FF08;
    extern s32 lbl_80367110;
    extern s32 lbl_80367AE0;
    s32 temp_cr0_eq;

    fn_80161F7C();
    fn_8003F670(M2C_FIELD(arg0, s32 *, 0x44));
    fn_8003F670(M2C_FIELD(arg0, s32 *, 0x48));
    temp_cr0_eq = arg0 == NULL;
    if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0)) {
        fn_80140304(arg0, 0);
    }
    lbl_80367AE0 = 0;
    if (!(lbl_80367110 & 0x10)) {
        fn_80145520();
        fn_80148980(&lbl_8032FF08, 0x1F4);
    }
}

void fn_801698EC(void *arg0) {
    M2C_UNK fn_8000C5B8();
    s32 fn_80024398(void *, M2C_UNK);
    void *fn_80169948();
    extern f32 lbl_8036A9C0;
    s32 temp_r31;
    void *temp_r3;

    temp_r3 = fn_80169948();
    M2C_FIELD(temp_r3, f32 *, 0x18) = (f32) lbl_8036A9C0;
    M2C_FIELD(temp_r3, s16 *, 0x1E) = 0;
    temp_r31 = fn_80024398(arg0, 0);
    fn_8000C5B8();
    M2C_FIELD(arg0, s32 *, 0x4C) = temp_r31;
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

void fn_80169BF4(void *arg0) {
    M2C_UNK fn_8000A3F8(s32);
    M2C_UNK fn_8013FEC0(void *);
    M2C_UNK fn_80023FF4(void *);
    M2C_UNK fn_8000C188(void *);
    s32 temp_r31;
    void *temp_r3;

    fn_8000A3F8(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FEC0(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x50);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s8 *, 0x62) = temp_r31;
    fn_8000C188(arg0);
}

void fn_80169C54(void *arg0) {
    M2C_UNK fn_801C1464(void *);
    fn_8000A408(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FED0(arg0);
    fn_801C1464(arg0);
}

void fn_80169C94(void *arg0) {
    M2C_UNK fn_8000A3F8(s32);
    M2C_UNK fn_8013FEC0(void *);
    M2C_UNK fn_80023FF4(void *);
    M2C_UNK fn_8000C188(void *);
    s32 temp_r31;
    void *temp_r3;

    fn_8000A3F8(M2C_FIELD(arg0, s32 *, 0x4C));
    fn_8013FEC0(arg0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x50);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s8 *, 0x62) = temp_r31;
    fn_8000C188(arg0);
}

void fn_80169CF4(void *arg0) {
    extern u8 lbl_80330708[];
    
    fn_8000A408(*(s32**)((char*)arg0 + 0x4C));
    
    if (*(u32*)((char*)arg0 + 0x40) != 0) {
        fn_801090C0();
        fn_8000A430();
    }
    
    fn_8013FED0(arg0);
    
    *(u8*)((char*)lbl_80330708 + 0x54) = 1;
    
    fn_801D3B14(arg0, lbl_80330708);
}

void fn_80169D58(void *arg0) {
    void *fn_801090C0(void *);
    void fn_8000A420(void *);
    void *temp;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x4C));
    temp = M2C_FIELD(arg0, void **, 0x40);
    if (temp != NULL) {
        fn_8000A420(fn_801090C0(temp));
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

void fn_80169F30(void *arg0) {
    M2C_UNK fn_8000C070(M2C_UNK);
    M2C_UNK fn_801658DC(void *);
    extern M2C_UNK lbl_80277BC0;
    switch ((s32) M2C_FIELD(&lbl_802EF4C8, u8 *, 8)) { /* irregular */
    case 0x81:
        fn_8000C070(0x11);
        return;
    case 0x80:
        fn_8000A420(M2C_FIELD(arg0, s32 *, 0x4C));
        if (fn_8013FF94(arg0, -0x1000, 0) != 0U) {
            fn_801658DC(&lbl_80277BC0 + 0xF0);
        }
        fn_8000C188(arg0);
        return;
    }
}

void fn_80169FC0(void* arg0) {
    void* temp_r3;
    void* temp_r31;

    temp_r3 = (void*)fn_80169948();
    *(f32*)((char*)temp_r3 + 0x18) = lbl_8036A9C0;
    *(s16*)((char*)temp_r3 + 0x1E) = 0;
    temp_r31 = (void*)fn_80024398(arg0, 0);
    fn_8000C5B8();
    *(s8*)((char*)temp_r31 + 0x61) = 0;
    *(void**)((char*)arg0 + 0x4C) = temp_r31;
    *(void**)((char*)arg0 + 0x50) = temp_r31;
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

void *fn_8016A6DC(void *arg0, s16 arg1) {
    extern u16 lbl_802940AC[76];
    extern u16 lbl_802920E0[76];
    
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_802940AC;
        if (arg0 != NULL) {
            *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
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
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x16b);
}

void *fn_8016A824(void) {
    extern u16 lbl_80277BC0;
    return (void *)((char *)&lbl_80277BC0 + 0x178);
}

void fn_8016A888(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x196);
}

void *fn_8016A8B4(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x1a5;
}

void *fn_8016A918(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_802941E4[];
    extern void *lbl_80291F60[];
    extern void *lbl_802920E0[];

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 4) = lbl_802941E4;
        if (arg0 != NULL) {
            *(void **)((u8 *)arg0 + 4) = lbl_80291F60;
            if (arg0 != NULL) {
                *(void **)((u8 *)arg0 + 4) = lbl_802920E0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_8016ABB0(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x1ad);
}

void *fn_8016ABDC(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x1b7;
}

s32 fn_8016ABEC(s32 arg1) {
    void *fn_8000C0C0(void *);
    extern u16 lbl_80293D8C;
extern void *lbl_8028D9A4[];
    void *temp_r3 = &lbl_80293D8C;
    *(s32*)((u8*)fn_8000C0C0(temp_r3) + 0x50) = arg1;
    fn_8000C070(0xC);
    return 4;
}

void fn_8016AC30(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x1bf);
}

void *fn_8016AC5C(void) {
    extern u16 lbl_80277BC0[80];
    return &lbl_80277BC0[0x1C8 / sizeof(u16)];
}

u8 fn_8016AC6C(void) {
    u8 fn_801E3620(M2C_UNK *);
    extern M2C_UNK lbl_80331FB8;
    u8 var_r3;

    var_r3 = 2;
    if (fn_801E3620(&lbl_80331FB8) != 0) {
        var_r3 = 0;
    }
    return var_r3;
}

s32 fn_8016ACA8(void *arg1, void *arg2) {
    M2C_UNK fn_8000C070(M2C_UNK);
    void *fn_8000C0C0(M2C_UNK *);
    M2C_UNK fn_80176888(void *, void *, s16, f32, f32);
    extern u16 lbl_80277BC0[];
    extern u8 lbl_80293D8C[];

    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        void *temp_r3 = M2C_FIELD(arg1, void **, 0x3C);
        s16 temp_r3_2 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s16 (**)(void *), 0x5C)(temp_r3);
        void *temp_r3_3 = M2C_FIELD(arg1, void **, 0x3C);
        s32 temp_r4 = temp_r3_2 + M2C_FIELD(arg2, s16 *, 0x30);
        s16 temp_r3_4 = M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), s16 (**)(void *, s32, s16), 0x60)(temp_r3_3, temp_r4, temp_r3_2);
        fn_80176888((void *) (lbl_80277BC0 + 0x1D1), arg1, temp_r3_4, (f32) temp_r4, (f32) (temp_r3_4 + M2C_FIELD(arg2, s16 *, 0x32)));
        return 0;
    }
    M2C_FIELD(fn_8000C0C0((void *) lbl_80293D8C), void **, 0x50) = arg1;
    fn_8000C070(0xB);
    return 4;
}

void fn_8016ADAC(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x1E2);
}

void *fn_8016ADD8(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x1ed;
}

void *fn_8016AE6C(void) {
    extern u16 lbl_80277BC0[];
    return &lbl_80277BC0[0x101];
}

s32 fn_8016AE7C(s32 arg0, s32 arg1, void *arg2) {
    M2C_UNK fn_80024398(void *, s32, s32);
    void *fn_800C42D8(u32);
    extern u8 lbl_802845E8[];
    extern u8 lbl_802920E0[];
    extern u8 lbl_80293D64[];
    extern u8 lbl_802940AC[];
    extern u8 lbl_80294144[];
    extern u8 lbl_80294194[];
    extern s8 lbl_803680F0;
    extern void *lbl_803680F4;
    extern s8 lbl_803680F8;
    extern void *lbl_803680FC;
    void *p;

    if (M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        return 0;
    }
    if (lbl_803680F0 == 0) {
        lbl_803680F4 = lbl_80294194;
        lbl_803680F0 = 1;
    }
    if (lbl_803680F8 == 0) {
        lbl_803680FC = lbl_80294144;
        lbl_803680F8 = 1;
    }
    p = fn_800C42D8(0x20);
    if (p != NULL) {
        M2C_FIELD(p, void **, 4) = lbl_802845E8;
        M2C_FIELD(p, void **, 0) = lbl_80293D64;
        M2C_FIELD(p, void **, 4) = lbl_802920E0;
        M2C_FIELD(p, s16 *, 8) = 0;
        M2C_FIELD(p, s16 *, 0xA) = 0;
        M2C_FIELD(p, s16 *, 0xC) = 0x80;
        M2C_FIELD(p, s16 *, 0xE) = 0;
        M2C_FIELD(p, s16 *, 0x10) = 2;
        M2C_FIELD(p, s16 *, 0x12) = 0xC;
        M2C_FIELD(p, s16 *, 0x14) = 0x10;
        M2C_FIELD(p, s16 *, 0x16) = 0;
        M2C_FIELD(p, f32 *, 0x18) = 0.0f;
        M2C_FIELD(p, s16 *, 0x1C) = 0x20;
        M2C_FIELD(p, s16 *, 0x1E) = 4;
        M2C_FIELD(p, void **, 4) = lbl_802940AC;
    }
    M2C_FIELD(p, s16 *, 8) = 0x9E;
    M2C_FIELD(p, s16 *, 0xA) = 0xB5;
    M2C_FIELD(p, s16 *, 0xC) = 0x8A;
    M2C_FIELD(p, s16 *, 0x14) = 0;
    M2C_FIELD(p, f32 *, 0x18) = 880.0f;
    M2C_FIELD(p, s16 *, 0x1E) = 4;
    fn_80024398(p, arg1, 0);
    return 4;
}

void fn_8016AFC4(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4((u8 *)lbl_80277BC0 + 0x20b);
}

void *fn_8016AFF0(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x21c;
}

u8 fn_8016B000(void *arg0) {
    extern u8 lbl_80330708[];
    u8 temp_r3;
    u8 var_r0;

    if (lbl_80330708[0x55] != 0) {
        return 3U;
    }
    temp_r3 = fn_801C13F0();
    *(u8 *)((uintptr_t)arg0 + 4) = temp_r3;
    var_r0 = 2;
    if (temp_r3 != 0) {
        var_r0 = 0;
    }
    return var_r0;
}

void fn_8016B060(void *arg0, void *arg2) {
    M2C_UNK fn_80007124();
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80009C0C(f32);
    s32 fn_800102BC(M2C_UNK, f32);
    s32 fn_80010B78(M2C_UNK, f32);
    M2C_UNK fn_801533F8(s32, s32, u8, M2C_UNK);
    s32 *fn_8018D900(M2C_UNK);
    extern f32 lbl_8036A9CC;
    extern f32 lbl_8036A9D8;
    extern f32 lbl_8036A9DC;
    extern f32 lbl_8036A9E0;
    s32 spC;
    s32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    s16 temp_r5;
    s32 temp_r31;
    s32 temp_r6;
    void **temp_r3;
    void **temp_r3_2;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x4C)();
    fn_8000A258();
    fn_80009C0C(lbl_8036A9D8);
    fn_8000A248();
    temp_r3 = M2C_FIELD(arg2, void ***, 0x34);
    M2C_FIELD(*temp_r3, M2C_UNK (**)(void **, void *), 0x18)(temp_r3, arg2);
    temp_r31 = (s32) (0x9A - fn_80010B78(-1, lbl_8036A9CC)) >> 1;
    temp_r5 = M2C_FIELD(arg2, s16 *, 0x30);
    temp_r6 = 0x24 - fn_800102BC(-1, lbl_8036A9CC);
    temp_f31 = (f32) temp_r5;
    temp_f30 = (f32) M2C_FIELD(arg2, s16 *, 0x32);
    fn_80007898(6, temp_r5, temp_r6);
    fn_80007858(temp_f31 + (f32) temp_r31, temp_f30 + (f32) (temp_r6 >> 1));
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        spC = *fn_8018D900(0);
        fn_80007668(&spC);
    } else if ((u8) M2C_FIELD(arg0, u8 *, 4) != 0) {
        sp8 = *fn_8018D900(0x13);
        fn_80007668(&sp8);
        fn_80007220(1, lbl_8036A9DC);
    } else {
        fn_80007220(1, lbl_8036A9DC);
    }
    temp_r3_2 = M2C_FIELD(arg2, void ***, 0x34);
    M2C_FIELD(*temp_r3_2, M2C_UNK (**)(void **, void *), 0x18)(temp_r3_2, arg2);
    fn_80007124();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036A9E0);
    fn_8000A248();
    fn_801533F8((s32) temp_f31, (s32) temp_f30, M2C_FIELD(arg2, u8 *, 0x38), 0x10);
}

void fn_8016B30C(void) {
    extern u16 lbl_80277BC0[];
    fn_8000E0E4(&lbl_80277BC0[0x230 / sizeof(u16)]);
}

void *fn_8016B338(void) {
    extern u16 lbl_80277BC0[];
    return (u8 *)lbl_80277BC0 + 0x23a;
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

extern u8 lbl_80294514[16];
void fn_8016B6D4(s32 arg0) {
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_80294514[16];
    fn_8000CAF0(lbl_80294514, arg0);
}

void fn_8016B700(void) {
    extern u16 lbl_80294550[];
    fn_8000CAA0(lbl_80294550, fn_800C0658(), lbl_80294550);
}

extern u8 lbl_80294460[16];
void fn_8016B730(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_80294460[16];
    fn_8000CAA0(lbl_80294460, arg0);
}

void fn_8016B75C(void) {
    s32 temp_r31;
    
    temp_r31 = fn_800C0658();
    fn_80040844();
    fn_80043A00(0x168, 0x10E, temp_r31);
}

extern void fn_8005376C(void);
extern void fn_8006EDA0(void *);
extern void fn_800C4588(void);
void fn_8016B79C(void *arg0) {
    void *var_r3;
    void *temp_r31;

    var_r3 = arg0;
    if (var_r3 != NULL) {
        var_r3 = *(void**)((char*)var_r3 + 0x3C);
    }

loop_2:
    if (var_r3 == NULL) {
        goto skip;
    }
    temp_r31 = *(void**)((char*)var_r3 + 0x38);
    fn_800C4588();
    var_r3 = temp_r31;
    goto loop_2;

skip:
    if (*(u32*)((char*)arg0 + 0x38) != 0) {
        fn_8006EDA0((void*)((char*)arg0 + 0x38));
    }
    fn_8005376C();
}

void fn_8016B800(void *arg0) {
    char *ptr = (char *)arg0;
    ptr[0x74] = 0;
    ptr[0x78] = 0;
    ptr[0x7C] = 0;
    ptr[0x80] = 0;
    *(u16 *)(ptr + 0x84) = 0;
    *(u16 *)(ptr + 0x86) = 0;
    *(u16 *)(ptr + 0x88) = 0;
    *(u16 *)(ptr + 0x8A) = 0;
}

void fn_8016BA5C(void *arg0) {
    extern u32 lbl_80277EA0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0x10;
    M2C_FIELD(arg0, u8 *, 0x35) = 0;
    M2C_FIELD(arg0, u16 *, 0x36) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, u32 *, 0x54) = 0;
    M2C_FIELD(arg0, u8 *, 0x58) = 0;
    M2C_FIELD(arg0, u8 *, 0x59) = 0;
    M2C_FIELD(arg0, u8 *, 0x5A) = 0;
    M2C_FIELD(arg0, u8 *, 0x5B) = 0xA;
    fn_8016C3C8(0);
    fn_8005C8B4(&lbl_80277EA0 + 0x78);
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
}

void fn_8016BADC(void *arg0) {
    void *temp_r30;
    void *temp_r31;
    void *var_r3;

    if ((u8) *(u8 *) ((char *) arg0 + 0x34) == 0) {
        fn_80040844();
        fn_8004327C();
        temp_r30 = *(void **) ((char *) arg0 + 0x40);
        if (temp_r30 != NULL) {
            *(u32 *) ((char *) temp_r30 + 0x2C) = 0U;
            if (*(u32 *) ((char *) arg0 + 0x54) != 0U) {
                fn_8007B990();
                *(u32 *) ((char *) arg0 + 0x54) = 0U;
            }
            if (*(u32 *) ((char *) temp_r30 + 0x2C) != 0U) {
                fn_8003A114();
                *(u32 *) ((char *) arg0 + 0x54) = fn_8007BA4C(0);
            }
        }
        var_r3 = *(void **) ((char *) arg0 + 0x3C);
loop_8:
        if (var_r3 != NULL) {
            temp_r31 = *(void **) ((char *) var_r3 + 0x38);
            fn_800C4588();
            var_r3 = temp_r31;
            goto loop_8;
        }
        fn_8000C60C(*(u32 *) ((char *) arg0 + 0x60));
        if (*(u32 *) ((char *) arg0 + 0x38) != 0U) {
            fn_8006EDA0((char *) arg0 + 0x38);
        }
        fn_801DE074();
        fn_801457B4();
        fn_8005376C();
        *(u8 *) ((char *) arg0 + 0x34) = 1U;
    }
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

void fn_8016EC74(void *arg0) {
    M2C_UNK fn_80184C7C(void *, s32, s32, s32);
    M2C_UNK fn_80138808(void *, void *);
    void *temp_r31;
    void *temp_r3;
    void *temp_r4;

    temp_r31 = M2C_FIELD(arg0, void **, 0x18);
    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }
    temp_r3 = M2C_FIELD(temp_r31, void **, 0x44);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, void **, 0x3C);
        if (temp_r4 != NULL) {
            fn_80138808(temp_r3, temp_r4);
        }
    }
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

void fn_8016ED6C(s32 arg0) {
    M2C_UNK fn_80183BE4(void *, s32);
    void *temp_r31;
    void *temp_r30;

    temp_r30 = M2C_FIELD(&lbl_802EF4C8, void **, 0);
    temp_r31 = M2C_FIELD(&lbl_802EF4C8, void **, 4);
    if ((temp_r30 != NULL) && (M2C_FIELD(temp_r30, s32 *, 0x1A0) & 0x800000) && (fn_80091D74(temp_r30) == 0)) {
        fn_80183BE4(temp_r30, arg0);
    }
    if ((temp_r31 != NULL) && (M2C_FIELD(temp_r31, s32 *, 0x1A0) & 0x800000) && (fn_80091D74(temp_r31) == 0)) {
        fn_80183BE4(temp_r31, arg0);
    }
}

void fn_8016EE14(void *arg0) {
    M2C_UNK fn_80184C7C(void *, s32, s32, s32);
    M2C_UNK fn_80138808(void *, void *);
    void *temp_r31;
    void *temp_r3;
    void *temp_r4;

    temp_r31 = M2C_FIELD(arg0, void **, 0x18);
    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }
    temp_r3 = M2C_FIELD(temp_r31, void **, 0x44);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, void **, 0x3C);
        if (temp_r4 != NULL) {
            fn_80138808(temp_r3, temp_r4);
        }
    }
}

void fn_8016EE7C(void) {
    void *ptr = lbl_802EF4C8;
    fn_8003BE50(ptr);
}

void fn_8016F0C4(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    fn_8000C070(arg0, *(u8 *)((char *)arg0 + 0x65));
}

void fn_8016F0E8(void *arg0) {
    void fn_8000C5E0(void *);
    void fn_80023FF4(void *);
    register void *temp_r3;
    void *temp_r31;
    s32 temp_r30_2;
    s32 temp_r30;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x5C));
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r30 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s8 *, 0x62) = temp_r30;
    temp_r31 = M2C_FIELD(arg0, void **, 0x60);
    fn_8000A420(temp_r31);
    temp_r30_2 = M2C_FIELD(temp_r31, s8 *, 0x62);
    fn_80023FF4(temp_r31);
    M2C_FIELD(temp_r31, s8 *, 0x62) = temp_r30_2;
    fn_8013FEC0(arg0);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 0x100, 0));
    fn_8000C188(arg0);
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

void fn_8016F220(void *arg0) {
    M2C_UNK fn_80184C7C(void *, s32, s32, s32);
    M2C_UNK fn_80138808(void *, void *);
    s32 temp_r31;
    void *temp_r3;
    void *temp_r4;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x5C));
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s8 *, 0x62) = temp_r31;
    fn_8000A420(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FEC0(arg0);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 0x100, 0));

    temp_r3 = M2C_FIELD(lbl_802EF4C8, void **, 0);
    if (temp_r3 != NULL) {
        fn_80184C7C(temp_r3, 0, 4, 0);
    }

    temp_r3 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r3 != NULL) {
        temp_r4 = M2C_FIELD(temp_r3, void **, 0x3C);
        if (temp_r4 != NULL) {
            fn_80138808(temp_r3, temp_r4);
        }
    }

    fn_8000C188(arg0);
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
    s32 temp_r31;
    void *temp_r3;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x5C));
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s8 *, 0x62) = temp_r31;
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

void fn_8016F4D0(void *arg0) {
    M2C_UNK fn_8000C5E0(void *);
    M2C_UNK fn_80023FF4(void *);
    s32 temp_r31;
    void *temp_r3;

    fn_8000A3F8(M2C_FIELD(arg0, void **, 0x5C));
    fn_8000C5E0(M2C_FIELD(arg0, void **, 0x5C));
    temp_r3 = M2C_FIELD(arg0, void **, 0x5C);
    temp_r31 = M2C_FIELD(temp_r3, s8 *, 0x62);
    fn_80023FF4(temp_r3);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s8 *, 0x62) = temp_r31;
    fn_8000A420(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FEC0(arg0);
    fn_8013FF00(arg0, fn_8013FF94(arg0, 0x100, 0));
    fn_8000C188(arg0);
}

void fn_8016F5DC(void *arg0) {
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x60));
    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
}

void fn_8016F628(void *arg0) {
    void *temp_r31;
    s32 temp_r0;

    temp_r31 = M2C_FIELD(arg0, void **, 0x4C);
    M2C_FIELD(temp_r31, s8 *, 0x48) = 0;
    M2C_FIELD(temp_r31, s32 *, 0x60) = 3;
    M2C_FIELD(temp_r31, s8 *, 0x4B) = 0;
    M2C_FIELD(temp_r31, s32 *, 0x70) = 0;
    M2C_FIELD(temp_r31, s32 *, 0x74) = 0;
    M2C_FIELD(temp_r31, s16 *, 0x4C) = fn_80164E78(temp_r31);
    fn_8013FF00(arg0, temp_r31);
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

void fn_80171218(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    extern u16 lbl_8028FDB0[4];
    extern u16 lbl_80292230[10];
    extern u16 lbl_8029518C[11];
    extern u16 lbl_802951B8[11];
    extern f32 lbl_8036AB6C;

    *(u16**)arg0 = lbl_8028FDB0;
    *((s32*)arg0 + 1) = 0;
    *((u16**)arg0 + 1) = lbl_80292230;
    *((s16*)arg0 + 4) = -1;
    *((s16*)arg0 + 5) = arg1;
    *((s16*)arg0 + 6) = arg2;
    *((s16*)arg0 + 7) = arg1 + arg3;
    *((s16*)arg0 + 8) = arg2 + 0x2C;
    *((s16*)arg0 + 9) = 0;
    *((s16*)arg0 + 10) = 0;
    *((s16*)arg0 + 11) = arg3;
    *((s16*)arg0 + 12) = 0x2C;
    *((s16*)arg0 + 13) = 0;
    *((s16*)arg0 + 14) = 0;
    *((s8*)arg0 + 30) = 0xFF;
    *((s8*)arg0 + 31) = 0xFF;
    *((s8*)arg0 + 32) = 0xFF;
    *((s8*)arg0 + 33) = 0xFF;
    *((s16*)arg0 + 17) = arg4;
    *((s16*)arg0 + 18) = 0;
    *((f32*)arg0 + 10) = lbl_8036AB6C;
    *((f32*)arg0 + 11) = lbl_8036AB6C;
    *((f32*)arg0 + 12) = lbl_8036AB6C;
    *((s32*)arg0 + 14) = 0;
    *((s32*)arg0 + 15) = 0;
    *(u16**)arg0 = lbl_802951B8;
    *((s16*)arg0 + 30) = 0;
    *((s16*)arg0 + 31) = 0;
    *((s16*)arg0 + 15) = 2;
    *((s16*)arg0 + 16) = 8;
    *((s16*)arg0 + 17) = (arg1 + arg3) - arg1 - 2;
    *((s16*)arg0 + 18) = (arg2 + 0x2C) - arg2 - 8;
    *(u16**)arg0 = lbl_8029518C;
    *((s16*)arg0 + 30) = 0;
    *((s16*)arg0 + 31) = 0;
    *((s16*)arg0 + 15) = 0;
    *((s16*)arg0 + 16) = 0;
    *((s16*)arg0 + 17) = (arg1 + arg3) - arg1;
    *((s16*)arg0 + 18) = (arg2 + 0x2C) - arg2;
    *((s32*)arg0 + 14) = (*((s32*)arg0 + 14) | 0x10);
}

void fn_80171B18(s32 arg0, s32 arg1, s32 arg2)
{
    *(u32*)(*(u32*)(*(u32*)(arg0 + 0x10) + 0x4) + 0x50) = arg2;
}

u8 fn_801723A0(u32 *arg0, s32 arg1) {
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
    extern u8 lbl_80294B10[0xA0];

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

s32 fn_80173C24(void *arg0) {
    s32 temp_r0;
    
    if (arg0 == NULL) {
        return 0;
    }
    
    temp_r0 = *(s32*)arg0;
    
    if ((temp_r0 & 1) == 0) {
        return 0;
    }
    
    temp_r0 = (temp_r0 >> 1) & 0x7FF;
    
    if (temp_r0 < 0 || temp_r0 > 255) {
        return 0;
    }
    
    return temp_r0;
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

void fn_80175124(void *arg0, s32 arg1) {
    s32 temp_r3;
    u8 var_r0;
    
    *(u32 *)arg0 = (arg1 & 0x3F) | ((*(u32 *)arg0) & 0xFFFFFFC0);
    temp_r3 = *(s32 *)((char *)arg0 + 0x4);
    if (temp_r3 == 0) {
        var_r0 = 0;
    } else {
        var_r0 = *(u8 *)(temp_r3 + 0x15) & 1;
    }
    if (var_r0 == 0) {
        var_r0 = *(u8 *)((char *)arg0 + 0x54) & 1;
    }
    if ((var_r0 !=0)) {
        *(s32 *)((char *)arg0 + 0x68) |= 0x80000000;
        *(u32 *)((char *)arg0 + 0x84) = 0;
        *(s32 *)((char *)arg0 + 0x7C) = 0x1000000;
    } else {
        *(u32 *)((char *)arg0 + 0x80) = (*(u32 *)((char *)arg0 + 0x80) & 0xF0FFFFFF) | 0x4000000;
        *(s32 *)((char *)arg0 + 0x7C) = 0x1000000;
    }
}

s32 fn_801758C4(u32 arg0, u32 arg1) {
    if (arg0 == arg1) {
        return 0;
    }
    if ((fn_80093088(arg0) != 0) && (fn_80093088(arg1) != 0)) {
        return 0;
    }
    return 1;
}

u8 fn_80175924(s32 **arg0, s32 arg1) {
    s32 *temp_r5;

    temp_r5 = *arg0;
    return fn_80093DA8(arg1, *temp_r5, temp_r5);
}

void *fn_80175C34(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80294BD0[];
    extern void *lbl_80291FF8[];
    extern void *lbl_802920E0[];

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 4) = lbl_80294BD0;
        if (arg0 != NULL) {
            *(void **)((u8 *)arg0 + 4) = lbl_80291FF8;
            if (arg0 != NULL) {
                *(void **)((u8 *)arg0 + 4) = lbl_802920E0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80175CA0(void) {
    extern u8 lbl_8036816C;
    extern u32 lbl_80368170;
    extern u8 lbl_80368174;
    extern u32 lbl_80368178;
    extern u8 lbl_8036817C;
    extern u32 lbl_80368180;
    extern u8 lbl_80368184;
    extern u32 lbl_80368188;
    extern u8 lbl_80368190;
    extern u32 lbl_80368194;
    extern u8 lbl_80368198;
    extern u32 lbl_8036819C;
    extern f32 lbl_8036AB70;
    
    extern void* lbl_8028459C;
    extern void* lbl_80292090;
    extern void* lbl_80295110;
    extern void* lbl_80294FD0;
    extern void* lbl_802845E8;
    extern void* lbl_802945C0;
    extern void* lbl_802920E0;
    extern void* lbl_80291FF8;
    extern void* lbl_80294BD0;
    extern void* lbl_80294F30;
    extern void* lbl_80294F80;
    extern void* lbl_80295020;
    extern void* lbl_80295070;
    extern void* lbl_802950C0;
    
    void *fn_800C42D8(u32 arg);
    void *temp_r3;

    if ((s8) lbl_8036816C == 0) {
        lbl_8036816C = 1;
        lbl_80368170 = (u32)&lbl_802950C0;
    }
    if ((s8) lbl_80368174 == 0) {
        lbl_80368174 = 1;
        lbl_80368178 = (u32)&lbl_80295070;
    }
    if ((s8) lbl_8036817C == 0) {
        lbl_8036817C = 1;
        lbl_80368180 = (u32)&lbl_80295020;
    }
    if ((s8) lbl_80368184 == 0) {
        u32 addr1, addr2, addr3, addr4;
        addr1 = (u32)&lbl_8028459C;
        addr2 = (u32)&lbl_80292090;
        addr3 = (u32)&lbl_80295110;
        addr4 = (u32)&lbl_80294FD0;
        lbl_80368188 = addr1;
        lbl_80368188 = addr2;
        lbl_80368188 = addr3;
        lbl_80368188 = addr4;
        lbl_80368184 = 1;
    }
    if ((s8) lbl_80368190 == 0) {
        lbl_80368190 = 1;
        lbl_80368194 = (u32)&lbl_80294F80;
    }
    if ((s8) lbl_80368198 == 0) {
        lbl_80368198 = 1;
        lbl_8036819C = (u32)&lbl_80294F30;
    }
    
    temp_r3 = fn_800C42D8(0x24);
    if (temp_r3 != NULL) {
        *(void**)((char*)temp_r3 + 4) = &lbl_802845E8;
        *(void***)((char*)temp_r3 + 0) = &lbl_802945C0;
        *(void**)((char*)temp_r3 + 4) = &lbl_802920E0;
        *(s16*)((char*)temp_r3 + 8) = 0;
        *(s16*)((char*)temp_r3 + 0xA) = 0;
        *(s16*)((char*)temp_r3 + 0xC) = 0x80;
        *(s16*)((char*)temp_r3 + 0xE) = 0;
        *(s16*)((char*)temp_r3 + 0x10) = 2;
        *(s16*)((char*)temp_r3 + 0x12) = 0xC;
        *(s16*)((char*)temp_r3 + 0x14) = 0x10;
        *(s16*)((char*)temp_r3 + 0x16) = 0;
        *(f32*)((char*)temp_r3 + 0x18) = lbl_8036AB70;
        *(s16*)((char*)temp_r3 + 0x1C) = 0x20;
        *(s16*)((char*)temp_r3 + 0x1E) = 4;
        *(void**)((char*)temp_r3 + 4) = &lbl_80291FF8;
        *(s16*)((char*)temp_r3 + 0x20) = 2;
        *(void**)((char*)temp_r3 + 4) = &lbl_80294BD0;
    }
}

void fn_801766C0(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 *puVar1;
    s32 iVar2;
    s32 iVar3;
    
    puVar1 = lbl_802EF4C8;
    iVar2 = *puVar1;
    iVar3 = (iVar2 + 1) & 0xff;
    if (iVar3 < 0) {
        iVar3 += 0x100;
    }
    puVar1[0x4b] = param_3;
    puVar1[0x4c] = param_4;
}

void fn_80176888(s32 arg0, f32 farg0, f32 farg1) {
    void *fn_8000CAA0(void *, void *);
    extern u16 lbl_80294580[16];

    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80294580, &lbl_80294580);
    *(f32*)((u8*)temp_r3 + 0x30) = farg0;
    *(f32*)((u8*)temp_r3 + 0x34) = farg1;
    *(s32*)((u8*)temp_r3 + 0x54) = arg0;
}

void fn_801768E4(s32 arg0) {
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_80330D68[];
    
    s32 temp_r5;
    u32 var_r3;

    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        temp_r5 = *(s32 *)((u8 *)lbl_80367240 + 4);
        if ((temp_r5 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r5)) & 0x0F001F7F) {
            fn_801673D0(lbl_80330D68);
            fn_8000C188(arg0);
        }
    }
}

void fn_80176968(void *arg0) {
    extern u16 lbl_80330D68[];
    extern s32 lbl_80368DC4;
    void fn_8016758C(u16 *, void *, s32, f32, f32);
    f32 temp_f1 = *(f32 *)((char *)arg0 + 0x30);
    f32 temp_f2 = *(f32 *)((char *)arg0 + 0x34);
    s32 temp_r5 = *(s32 *)((char *)arg0 + 0x54);
    fn_8016758C(lbl_80330D68, arg0, temp_r5, temp_f1, temp_f2);
    *(u16 *)((char *)lbl_80330D68 + 0xD8) = 1;
    *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
}

void *fn_801769C0(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern M2C_UNK lbl_80291FF8;
    extern M2C_UNK lbl_802920E0;
    extern M2C_UNK lbl_80294B38;
    extern M2C_UNK lbl_80294BD0;
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == NULL;
    if (temp_cr0_eq == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80294B38;
        if (temp_cr0_eq == 0) {
            M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80294BD0;
            if (temp_cr0_eq == 0) {
                M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_80291FF8;
                if (temp_cr0_eq == 0) {
                    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_802920E0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma cplusplus on
extern "C" void fn_8015AD7C(s32, s32, s32, s16, s32, s32);
extern "C" void fn_80161AA8(s32, s32, s16, s32, s32, void *);
extern "C" s32 fn_80009B80(u8);
extern "C" void fn_80176A3C(void *arg0, s32 arg1) {
    struct Obj {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual s16 v17() = 0;
        virtual s32 v18() = 0;
        virtual s16 v19() = 0;
        virtual s16 v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
        virtual void v31() = 0;
        virtual void v32() = 0;
        virtual s16 v33(s32) = 0;
    };
    struct Color {
        u8 r, g, b, a;
    };
    s16 y;
    s16 h;
    struct Color col;

    ((Obj *)arg0)->v30();
    y = ((Obj *)arg0)->v19();
    if (y == 0) {
        y = ((Obj *)arg0)->v20() * ((Obj *)arg0)->v33(arg1) + ((Obj *)arg0)->v17() * 2;
    }
    fn_8015AD7C(0, 0, ((Obj *)arg0)->v18(), y, 0xE6, 0x10);
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
    y = y - ((Obj *)arg0)->v20() - 8;
    h = ((Obj *)arg0)->v18() - 0x10;
    col.r = 0xFF;
    col.g = 0xFF;
    col.b = 0xFF;
    col.a = 0x33;
    fn_80161AA8(8, y, h + 8, y, 0x10, &col);
}

extern "C" void fn_80176DDC(s32 arg0, void *arg1) {
    void fn_8013E300(void);
    void *fn_8000C0C0(void *);
    u8 temp_r0;

    fn_8013E300();
    temp_r0 = *(u8 *)((u8 *)fn_8000C0C0(lbl_80294604) + 0x64);
    if ((s8)temp_r0 < 0) {
        return;
    }
    *(s8 *)((u8 *)arg1 + 0x62) = (s8)temp_r0;
}

#pragma cplusplus reset

void fn_80176E24(s32 arg0, void *arg1) {
    extern u16 lbl_80294604[];
    void *fn_8000C0C0(u16 *, u16 *);
    
    u8 *src = (u8 *) fn_8000C0C0((u16 *)lbl_80294604, (u16 *)lbl_80294604);
    *(u8 *)((u8 *)arg1 + 0x64) = *(u8 *)(src + 0x62);
    fn_8013E2C8(arg0, arg1);
}

void fn_80176E78(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x431);
}

void *fn_80176EA4(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x43a;
}

void fn_80177028(void **arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    s32 fn_800102BC(M2C_UNK, f32);
    s16 fn_80010B78(s32, M2C_UNK, f32);
    s32 *fn_8018D900(M2C_UNK);
    extern f32 lbl_8036AB6C;
    extern f32 lbl_8036AB8C;
    s32 spC;
    s32 sp8;
    f32 temp_f31;
    s16 temp_r28;
    s16 temp_r29;
    s16 temp_r29_2;
    s32 temp_r31;
    s32 temp_r5;
    void **temp_r3_2;
    void *temp_r3;
    void *temp_r3_3;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    temp_r3 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r29 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s16 (**)(void *), 0x58)(temp_r3);
    temp_r3_2 = M2C_FIELD(arg2, void ***, 0x34);
    temp_r28 = (s16) ((s32) (temp_r29 - fn_800102BC(-1, lbl_8036AB6C)) >> 1);
    temp_r3_3 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r31 = M2C_FIELD(*temp_r3_2, s32 (**)(void **, void *), 0x18)(temp_r3_2, arg2);
    temp_r29_2 = M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), s16 (**)(void *), 0x94)(temp_r3_3);
    temp_r5 = M2C_FIELD(arg2, s16 *, 0x32) + 6;
    temp_f31 = (f32) (M2C_FIELD(arg2, s16 *, 0x30) + ((s32) (temp_r29_2 - fn_80010B78(temp_r31, -1, lbl_8036AB6C)) >> 1));
    fn_80007898(6, temp_r5);
    fn_80007858(temp_f31, (f32) temp_r5 + (f32) temp_r28);
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        spC = *fn_8018D900(0);
        fn_80007668(&spC);
    } else {
        sp8 = *fn_8018D900(6);
        fn_80007668(&sp8);
        fn_80007220(1, lbl_8036AB8C);
    }
    fn_80007124(temp_r31);
    fn_80007884();
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
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
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x491);
}

void *fn_80177430(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x49b;
}

s32 fn_80177440(s32 arg1) {
    s32 *temp_r3;
    
    temp_r3 = (s32*)fn_8000C0C0((u16 *)lbl_80294604);
    *(s32*)((uintptr_t)temp_r3 + 0x60) = arg1;
    *(u8*)((uintptr_t)lbl_802EF4C8 + 0x8) = 0x8A;
    fn_8000C070(0x2F, lbl_802EF4C8);
    fn_8000C5B8(*(s32*)((uintptr_t)temp_r3 + 0x5C));
    return 4;
}

void fn_801774A8(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x4a5);
}

void *fn_801774D4(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x4af;
}

void fn_8017754C(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x4b9);
}

void *fn_80177578(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x4c3;
}

void fn_801775F0(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x4cd);
}

void *fn_8017761C(void) {
    return (u8 *)lbl_80278080 + 0x4d7;
}

void fn_80177854(void **arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80007124(s32);
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    s32 fn_800102BC(M2C_UNK, f32);
    s16 fn_80010B78(s32, M2C_UNK, f32);
    M2C_UNK fn_8005AC24(M2C_UNK *, s32, s32, s32);
    s32 *fn_8018D900(M2C_UNK);
    extern M2C_UNK lbl_802F0308;
    extern f32 lbl_8036AB6C;
    extern f32 lbl_8036AB8C;
    s32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    s16 temp_r26;
    s16 temp_r26_2;
    s16 temp_r29;
    s16 temp_r30;
    s32 temp_r28;
    s32 temp_r3_2;
    s32 temp_r4;
    void **temp_r3;
    void **temp_r3_4;
    void **temp_r3_6;
    void **temp_r3_7;
    void *temp_r3_3;
    void *temp_r3_5;
    void *temp_r5;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    temp_r3 = M2C_FIELD(arg2, void ***, 0x34);
    temp_r3_2 = M2C_FIELD(*temp_r3, s32 (**)(void **), 0x1C)(temp_r3);
    temp_r5 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r4 = (s32) (-temp_r3_2 | temp_r3_2) >> 0x1F;
    temp_r26 = M2C_FIELD(M2C_FIELD(temp_r5, void **, 4), s16 (**)(void *, s32, void *), 0x58)(temp_r5, temp_r4, temp_r5);
    temp_r3_3 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r30 = (s16) ((s32) (temp_r26 - fn_800102BC(-1, lbl_8036AB6C)) >> 1);
    temp_r3_4 = M2C_FIELD(arg2, void ***, 0x34);
    temp_r29 = (s16) ((s32) (M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 4), s16 (**)(void *), 0x58)(temp_r3_3) - 0x18) >> 1);
    temp_r3_5 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r28 = M2C_FIELD(*temp_r3_4, s32 (**)(void **, void *), 0x18)(temp_r3_4, arg2);
    temp_r26_2 = M2C_FIELD(M2C_FIELD(temp_r3_5, void **, 4), s16 (**)(void *), 0x94)(temp_r3_5);
    temp_f31 = (f32) (M2C_FIELD(arg2, s16 *, 0x30) + ((s32) (temp_r26_2 - fn_80010B78(temp_r28, -1, lbl_8036AB6C)) >> 1));
    temp_f30 = (f32) M2C_FIELD(arg2, s16 *, 0x32);
    fn_80007898(6);
    fn_80007858(temp_f31 + (f32) (s16) (0x18 & temp_r4), temp_f30 + (f32) temp_r30);
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        sp8 = *fn_8018D900(0);
        fn_80007668(&sp8);
    } else {
        fn_80007220(1, lbl_8036AB8C);
    }
    fn_80007124(temp_r28);
    fn_80007884();
    temp_r3_6 = M2C_FIELD(arg2, void ***, 0x34);
    if (M2C_FIELD(*temp_r3_6, s32 (**)(void **), 0x1C)(temp_r3_6) != 0) {
        temp_r3_7 = M2C_FIELD(arg2, void ***, 0x34);
        fn_8005AC24(&lbl_802F0308, (s32) temp_f31, (s32) (temp_f30 + (f32) temp_r29), M2C_FIELD(*temp_r3_7, s32 (**)(void **), 0x1C)(temp_r3_7));
    }
    fn_8000A258();
    fn_80009B80(0x80);
    fn_8000A248();
}

void fn_80177AD4(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x4ed);
}

void *fn_80177B00(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x4f6;
}

u8 fn_80177B10(void) {
    return 0;
}

u16 fn_80177C78(void) {
    return *(u16 *)((char *)lbl_80278080 + 0x50A * 2);
}

void *fn_80177CA4(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x516;
}

void fn_80177E48(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x52d);
}

void *fn_80177E74(void) {
    extern u16 lbl_80278080[];
    return (u8 *)lbl_80278080 + 0x538;
}

void fn_8017807C(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x54d);
}

void *fn_801780A8(void) {
    return (char *)&lbl_80278080 + 0x55B;
}

s32 fn_801781DC(void *arg0, void *arg1, void *arg2) {
    void fn_8000C070(void *, u8);
    void *fn_8000C0C0(void *);
    void fn_8000C5B8(void *);
    void *fn_8000CAA0(void *, void *);
    extern u8 lbl_80294580[];
    void *proc;
    f32 x;
    f32 y;

    if (M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        x = M2C_FIELD(arg1, s16 *, 0x30) + M2C_FIELD(arg2, s16 *, 0x30);
        y = M2C_FIELD(arg1, s16 *, 0x32) + M2C_FIELD(arg2, s16 *, 0x32);
        switch (M2C_FIELD(arg0, s8 *, 4)) {
        case 0:
            proc = fn_8000CAA0(lbl_80294580, arg1);
            M2C_FIELD(proc, f32 *, 0x30) = x;
            M2C_FIELD(proc, f32 *, 0x34) = y;
            M2C_FIELD(proc, void **, 0x54) = (u8 *)lbl_80278080 + 0x569;
            break;
        case 1:
            proc = fn_8000CAA0(lbl_80294580, arg1);
            M2C_FIELD(proc, f32 *, 0x30) = x;
            M2C_FIELD(proc, f32 *, 0x34) = y;
            M2C_FIELD(proc, void **, 0x54) = (u8 *)lbl_80278080 + 0x57B;
            break;
        case 2:
            proc = fn_8000CAA0(lbl_80294580, arg1);
            M2C_FIELD(proc, f32 *, 0x30) = x;
            M2C_FIELD(proc, f32 *, 0x34) = y;
            M2C_FIELD(proc, void **, 0x54) = (u8 *)lbl_80278080 + 0x224;
            break;
        }
        return 0;
    }
    proc = fn_8000C0C0(lbl_80294604);
    ((u8 *)lbl_802EF4C8)[8] = 0x83;
    fn_8000C070(proc, 0x28);
    fn_8000C5B8(M2C_FIELD(proc, void **, 0x5C));
    return 4;
}

void fn_80178350(void) {
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x58d);
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
    extern u16 lbl_80278080[];
    fn_8000E0E4((u8 *)lbl_80278080 + 0x59e);
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

s32 fn_801788A0(struct unit* arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    
    if (arg0 == NULL) {
        return 0;
    }
    
    temp_r3 = M2C_FIELD(arg0, u32*, 0x34);
    temp_r5 = temp_r3 - 1;
    if (temp_r5 & 0xFFFF) {
        temp_r6 = lbl_802EF4C8[(temp_r3 & 0xFFFF)];
    } else {
        temp_r6 = temp_r5;
    }
    
    temp_r7 = M2C_FIELD(arg0, s32*, 0x10);
    if (temp_r7 < 0) {
        temp_r7 = arg2;
    }
    
    temp_r8 = M2C_FIELD(arg0, s32*, 0x14);
    if (temp_r8 < 0) {
        temp_r8 = arg1;
    }
    
    if (arg2 >= temp_r7 && arg2 <= temp_r8) {
        temp_r4 = lbl_80278080[(arg2 - temp_r7)];
        if (temp_r4 >= temp_r6) {
            return 1;
        }
    }
    
    return 0;
}

#pragma cplusplus on
extern "C" void fn_8017899C(void *arg0) {
    void fn_8015BA88(s32, s32, s16, s16, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_8015BA88(0, 0,
        (s16)(*(s16 *)((u8 *)arg0 + 0xE) - *(s16 *)((u8 *)arg0 + 0xA)),
        (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xC)),
        0xB3, 0x10);
}
#pragma cplusplus reset

void *fn_80178A08(void *arg0, s16 arg1) {
    extern u16 lbl_802951E4[76];
    extern u16 lbl_802920E0[76];
    
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_802951E4;
        if (arg0 != NULL) {
            *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
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

s16 fn_80178A7C(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(), 0x50)();
    return (s16) ((temp_r31 - (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x48)(arg0) * 2)) / 3);
}

void fn_80178B98(void *arg0, s16 arg1) {
    s32 temp_r3;
    s32 var_r29;

    temp_r3 = *(s32 *)((char *)arg0 + 0x78);
    if (temp_r3 != 0) {
        var_r29 = temp_r3 - 1;
        if ((var_r29 < 0) || (var_r29 > 0x1F)) {
            var_r29 = 0;
        }
        *(s16 *)((char *)arg0 + 0x7C) = var_r29;
    }
    *(s16 *)((char *)arg0 + 0x80) = arg1;
    *(s16 *)((char *)arg0 + 0x82) = arg1;
}

#pragma cplusplus on
extern "C" M2C_UNK fn_80009D74(f32, f32, f32, f32);
extern "C" M2C_UNK fn_80009B8C(u8);
extern "C" M2C_UNK fn_80009B80(u8);
extern "C" void fn_80178C5C(void *arg0, void *arg1) {
    struct Obj {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual s16 v21() = 0;
        virtual s16 v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual f32 v25() = 0;
    };
    extern f32 lbl_8036AB6C;
    bool flag;

    fn_8000A258();
    fn_80009D74(((Obj *)arg0)->v21(), ((Obj *)arg0)->v22(), ((Obj *)arg0)->v25(), lbl_8036AB6C);
    fn_80009B8C(0xFF);
    flag = false;
    if (M2C_FIELD(arg1, u8 *, 0x2D) == 0 && M2C_FIELD(arg1, u8 *, 0x2E) == 0) {
        flag = true;
    }
    fn_80009B80(flag ? 0x80 : 0x40);
    fn_8000A248();
}

#pragma cplusplus on
extern "C" void fn_80178D88(void *arg0) {
    struct Obj {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
    };
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_80009B80(u8);
    void fn_8000A248(void);
    extern f32 lbl_8036AB80;

    ((Obj *)arg0)->v30();
    fn_8000A258();
    fn_80009C0C(lbl_8036AB80);
    fn_80009B80(0x80);
    fn_8000A248();
}
#pragma cplusplus reset

#pragma cplusplus reset

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

void fn_801793EC(void **arg0, void *arg2) {
    M2C_UNK fn_80007124();
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007858(f32, f32);
    s32 fn_80010770(M2C_UNK, f32);
    u32 fn_80010B78(M2C_UNK, f32);
    s32 *fn_8018D900(M2C_UNK);
    extern f32 lbl_8036AB6C;
    s32 spC;
    s32 sp8;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    u32 temp_r3;
    u32 temp_r4;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    temp_f31 = (f32) M2C_FIELD(arg2, s16 *, 0x30);
    temp_f30 = (f32) M2C_FIELD(arg2, s16 *, 0x32);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xC)(arg0);
    temp_r3 = fn_80010B78(-1, lbl_8036AB6C);
    temp_f31_2 = temp_f31 - (f32) ((s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xC)(arg0);
    temp_r4 = 0x1C - fn_80010770(-1, lbl_8036AB6C);
    fn_80007898(6, temp_r4);
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        spC = *fn_8018D900(0);
        fn_80007668(&spC);
    } else {
        sp8 = *fn_8018D900(2);
        fn_80007668(&sp8);
    }
    fn_80007858(temp_f31_2, temp_f30 + (f32) ((s32) ((temp_r4 >> 0x1FU) + temp_r4) >> 1));
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xC)(arg0);
    fn_80007124();
    fn_80007884();
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

void *fn_80179D70(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_8029518C[];
    extern u8 lbl_802951B8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_8029518C;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_802951B8;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80179F8C(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5) {
    M2C_UNK fn_8017A000(s16 *, s16 *, s32);
    extern u16 lbl_80291B1C;

    s16 spA;
    s16 spC;
    s16 spE;
    s16 sp8;
    s16 temp_r4, temp_r5, temp_r6, temp_r7;

    sp8 = arg3;
    spC = arg1;
    spE = arg2;
    spA = arg4;
    
    fn_8017A000(&spC, &sp8, arg5);
    *(u16 **)arg0 = &lbl_80291B1C;
    *(u16 *)((char *)arg0 + 0xD4) = 1;
    (*(void (**)(void *, u16 *))(*(u32 **)arg0 + 0x0A))(arg0, &lbl_80291B1C);
    return arg0;
}

void *fn_8017A238(void *arg0, s16 arg1) {
    extern u16 lbl_80294CB8[76];
    extern u16 lbl_802920E0[76];
    
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 4) = lbl_80294CB8;
        if (arg0 != NULL) {
            *(u16**)((char*)arg0 + 4) = lbl_802920E0;
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_8017A294(void *arg0, s16 arg1) {
    M2C_UNK fn_800C428C(void *);
    extern u16 lbl_8028FDB0[];
    extern u16 lbl_80292230[];
    extern u8 lbl_80295160[];
    extern u8 lbl_802951B8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_80295160;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_802951B8;
            if (arg0 != NULL) {
                M2C_FIELD(arg0, void **, 0) = lbl_80292230;
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, void **, 0) = lbl_8028FDB0;
                }
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_8017A38C(void *arg0, void *arg1) {
    u8 **ptr = (u8 **) ((u8 *)arg0 + 4);
    u8 *addr;
    u8 r6;

    addr = *ptr;
    *ptr = addr + 1;
    *(u8*)addr = *(u8*)((u8*)arg1 + 0);
    
    addr = *ptr;
    *ptr = addr + 1;
    *(u8*)addr = *(u8*)((u8*)arg1 + 1);

    addr = *ptr;
    *ptr = addr + 1;
    *(u8*)addr = *(u8*)((u8*)arg1 + 2);
    
    addr = *ptr;
    *ptr = addr + 1;
    *(u8*)addr = *(u8*)((u8*)arg1 + 3);
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
    fn_80234450(M2C_FIELD(arg0, s32 *, 4), arg2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + arg1);
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

void *fn_8017A764(void *arg0, s32 arg1) {
    extern u16 lbl_802842A4[10];
    extern u16 lbl_802842B8[12];
    s32 temp_r3;

    M2C_FIELD(arg0, void **, 0x10) = &lbl_802842A4;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, void **, 0x10) = &lbl_802842B8;
    temp_r3 = fn_8000D2BC(arg1, &lbl_802842B8, 0);
    M2C_FIELD(arg0, s32 *, 4) = temp_r3;
    M2C_FIELD(arg0, s32 *, 0) = temp_r3;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    return arg0;
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

s32 fn_8017A950(void *arg0) {
    u8 *temp_r4;
    u8 *temp_r5;
    u8 val1, val2, val3, val4;

    temp_r5 = (u8 *)M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r5 + 1);
    val1 = *temp_r5;
    
    temp_r4 = (u8 *)M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r4 + 1);
    val2 = *temp_r4;

    temp_r5 = (u8 *)M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r5 + 1);
    val3 = *temp_r5;

    temp_r4 = (u8 *)M2C_FIELD(arg0, u8 **, 4);
    M2C_FIELD(arg0, u8 **, 4) = (u8 *) (temp_r4 + 1);
    val4 = *temp_r4;
    
    return ((s32)(val1 << 0x18)) + ((s32)(val2 << 0x10) & 0xFF0000) + ((s32)(val3 << 8) & 0xFF00) + (s32)val4;
}

u8 fn_8017A9DC(void *arg0) {
    u8 *temp_r4;

    temp_r4 = *(u8 **)((char *)arg0 + 4);
    *(u8 **)((char *)arg0 + 4) = temp_r4 + 1;
    return *temp_r4;
}

void fn_8017A9F0(s32 arg0, s32 arg1, void *arg2) {
    void *fn_8000CAA0(void *, void *);
    void fn_8000C070(void *, u8);
    extern u8 lbl_80295370[];
    void *proc;

    proc = fn_8000CAA0(lbl_80295370, arg2);
    M2C_FIELD(proc, s32 *, 0x30) = arg0;
    M2C_FIELD(proc, s32 *, 0x38) = arg1;
    fn_8000C070(proc, 3);
}

void fn_8017AA48(s32 arg0, s32 arg1, void *arg2) {
    void *fn_8000CAA0(void *, void *);
    void fn_8000C070(void *, u8);
    extern u8 lbl_80295370[];
    void *proc;

    proc = fn_8000CAA0(lbl_80295370, arg2);
    M2C_FIELD(proc, s32 *, 0x30) = arg0;
    M2C_FIELD(proc, s32 *, 0x38) = arg1;
    fn_8000C070(proc, 0);
}

s32 fn_80105A5C();
#pragma cplusplus on
extern "C" void fn_801547E4(s16, s16, s16, s16, s32, s32, s32, f32);
extern "C" void fn_8017B4A8(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(s32) = 0;
    };
    extern u8 lbl_80278780[];
    extern f32 lbl_8036ABA8;
    u8 *unit;
    s32 num;
    f32 target;
    f32 cur;

    unit = M2C_FIELD(arg0, u8 **, 0x4C);
    num = fn_80105A5C(unit + 0x1BC);
    target = num - fn_80105A5C(M2C_FIELD(unit, u8 **, 0x18C) + 0x1C);
    cur = M2C_FIELD(arg0, f32 *, 0x50);
    if (target < cur) {
        M2C_FIELD(arg0, f32 *, 0x50) = cur - lbl_8036ABA8;
        if (M2C_FIELD(arg0, f32 *, 0x50) < target) {
            M2C_FIELD(arg0, f32 *, 0x50) = target;
        }
        fn_801475FC(lbl_80278780 + 0x87, 0x64);
    } else if (target > cur) {
        M2C_FIELD(arg0, f32 *, 0x50) = cur + lbl_8036ABA8;
        if (M2C_FIELD(arg0, f32 *, 0x50) > target) {
            M2C_FIELD(arg0, f32 *, 0x50) = target;
        }
        fn_801475FC(lbl_80278780 + 0x9E, 0x64);
    }
    ((Obj *)arg0)->v2(arg1);
    fn_801547E4(
        0,
        0,
        M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA),
        M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC),
        M2C_FIELD(M2C_FIELD(unit, u8 **, 0x18C), u8 *, 0x40),
        0xCC,
        0x10,
        M2C_FIELD(arg0, f32 *, 0x50)
    );
}
#pragma cplusplus reset

#pragma use_lmw_stmw on
void fn_8017B5F4(void *arg0, s16 arg1, s16 arg2, u8 arg3, void *arg4, s32 arg5, u8 arg6) {
    M2C_UNK fn_80006B18(s32, s32, M2C_UNK, M2C_UNK, u8);
    M2C_UNK fn_80007220(M2C_UNK, f32);
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_8001019C(s16, s16, s32, void *, ...);
    s32 fn_800102BC(M2C_UNK, f32);
    M2C_UNK fn_8005AC24(void *, s32, s32, u8);
    s32 fn_8010586C(void *);
    s32 *fn_8018D900(s32);
    extern u8 lbl_80278780[];
    extern u8 lbl_802F0350[];
    extern f32 lbl_8036AB94;
    extern f32 lbl_8036ABB8;
    
    s16 temp_arg1 = arg1;
    s16 temp_arg2 = arg2;
    u8 temp_arg6 = arg6;
    s32 flag = temp_arg6 != 0;
    s32 sp8;
    s16 off;

    fn_8000A258();
    fn_8000A174(0, (u16) (M2C_FIELD(arg0, s32 *, 0x34) | 3));
    fn_80009B8C(arg3);
    fn_8000A248();
    off = (0x20 - fn_800102BC(-1, lbl_8036AB94)) >> 1;
    fn_8001019C(temp_arg1 + 0x20, temp_arg2 + off, flag, lbl_80278780 + 0xB3, fn_8010586C(arg4));
    fn_80007898(6);
    sp8 = *fn_8018D900(flag);
    fn_80007668(&sp8);
    fn_80007220(1, lbl_8036ABB8);
    fn_80006B18(temp_arg1 + 0x8C, temp_arg2 + off, 0, 0, M2C_FIELD(arg4, u8 *, 0x1A));
    fn_80007884();
    fn_8005AC24(lbl_802F0350, temp_arg1, temp_arg2, M2C_FIELD(arg4, u8 *, 0x19));
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
}
void fn_8017B728(void *arg0, s16 arg1, s16 arg2, s32 arg3, void *arg4, u8 arg6) {
    M2C_UNK fn_8001019C(s16, s16, u8, void *, s32);
    s32 fn_800102BC(M2C_UNK, f32);
    M2C_UNK fn_8005AC24(M2C_UNK *, s16, s16, u8);
    s32 fn_8010586C(void *);
    extern M2C_UNK lbl_80278780;
    extern M2C_UNK lbl_802F0350;
    extern f32 lbl_8036AB94;
    s16 temp_r28;
    u8 var_r31;

    var_r31 = 0;
    if (arg6 != 0) {
        var_r31 = 0x12;
    }
    fn_8000A258();
    fn_8000A174(0, (u16) (M2C_FIELD(arg0, s32 *, 0x34) | 3));
    fn_80009B8C(arg3);
    fn_8000A248();
    temp_r28 = (s16) ((s32) (0x20 - fn_800102BC(-1, lbl_8036AB94)) >> 1);
    fn_8001019C((s16) (arg1 + 0x20), (s16) (arg2 + temp_r28), var_r31, &lbl_80278780 + 0xB3, fn_8010586C(arg4));
    fn_8005AC24(&lbl_802F0350, arg1, arg2, M2C_FIELD(arg4, u8 *, 0x19));
    fn_8000A258();
    fn_80009B8C(0xFF);
    fn_8000A248();
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

s32 fn_8017C22C(s32 arg0, u8 arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 r5;
    s32 r6;
    s32 r7;
    
    if (arg1 < 0) {
        return 0;
    }

    if (arg1 >= 0x20) {
        r5 = arg1 >> 5;
        r6 = -(r5 << 5);
        r7 = r5 >> 3;

        if (r7 != 0) {
            do {
                arg0 += 0x20;
                r7 -= 1;
            } while (r7 != 0);
        }

        r5 &= 7;
        if (r5 != 0) {
            do {
                arg0 += 4;
                r5 -= 1;
            } while (r5 != 0);
        }

        arg1 += r6;
    }

    temp_r3 = *(s32*)arg0;
    
    if (temp_r3 & (1 << arg1)) {
        return fn_80019DF0(arg1);
    }

    return 0;
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

void *fn_8017C40C(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80295404[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80295404;
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

void fn_8017C478(void *arg0) {
    s16 var_r5;
    s16 var_r4;
    s16 var_r6;
    s16 var_r7;
    s16 var_r8;

    var_r8 = *(s16 *)((char *)arg0 + 0xC);
    var_r7 = *(s16 *)((char *)arg0 + 0x10);
    var_r6 = *(s16 *)((char *)arg0 + 0xA);
    var_r5 = *(s16 *)((char *)arg0 + 0xE);

    var_r7 = var_r8 - var_r7;
    var_r7 = (s16)var_r7;
    *(s16 *)((char *)arg0 + 0x12) = 3;
    var_r4 = var_r6 - var_r5;
    var_r4 = (s16)var_r4;
    var_r5 = var_r7 - 5;
    *(s16 *)((char *)arg0 + 0x14) = 5;
    var_r4 = var_r4 - 3;
    *(s16 *)((char *)arg0 + 0x16) = var_r4;
    *(s16 *)((char *)arg0 + 0x18) = var_r5;
}

void fn_8017D4B8(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *, s16, s32, s16, void *);
    M2C_UNK spC;
    s16 r6;
    s16 r8;
    s32 r7;

    r8 = *(s16 *)((u8 *)arg1 + 0xC);
    r6 = *(s16 *)((u8 *)arg1 + 0xA);
    r7 = (s16) (*(s16 *)((u8 *)arg1 + 0x10) - r8) >> 1;
    *(s16 *)((u8 *)arg1 + 0xa) = (s16) r7;
    *(s16 *)((u8 *)arg1 + 0x8) = (s16) ((s16) (*(s16 *)((u8 *)arg1 + 0xE) - r6)) >> 2;
    *arg0 = *fn_8013F748(arg1, &spC, (s16 *)((u8 *)arg1 + 0x8), r6, r7, r8, arg1);
}

s16 fn_8017D604(s32 arg0, s16 arg1) {
    f32 fn_80037818(u8);
    u8 fn_80105BC0(s32, M2C_UNK);
    extern f32 lbl_8036ABD8;
    s16 var_r31;

    if (arg1 == 0) {
        return 0;
    }
    var_r31 = (s16) (lbl_8036ABD8 + fn_80037818((u8) arg1));
    if (fn_80105BC0(arg0 + 0x1BC, 0x4B) != 0) {
        var_r31 = (s16) ((var_r31 * 0xA) / 7);
    }
    if (fn_80105BC0(arg0 + 0x1BC, 0xB) != 0) {
        var_r31 = (s16) ((s32) (((u32) var_r31 >> 0x1FU) + var_r31) >> 1);
    }
    if (var_r31 < 1) {
        var_r31 = 1;
    }
    return var_r31;
}

u32 fn_8017D6D8(void *arg0) {
    f32 fn_80037818(s32, u8);
    u8 fn_8003D13C(s32);
    u8 fn_80105BC0(s32, M2C_UNK);
    extern f32 lbl_8036ABD8;
    s16 temp_r0;
    s16 temp_r4;
    s16 var_r29;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r3;
    u32 var_r3;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x3E);
    temp_r3 = fn_8003D13C(M2C_FIELD(arg0, s32 *, 0x40)) - temp_r4;
    var_r3 = (u32) (-temp_r3 & ~temp_r3) >> 0x1FU;
    if (var_r3 != 0) {
        temp_r0 = temp_r4 + 1;
        temp_r30 = M2C_FIELD(arg0, s32 *, 0x40);
        temp_r31 = M2C_FIELD(&lbl_80330708, s32 *, 0x1C);
        if (temp_r0 == 0) {
            var_r29 = 0;
        } else {
            var_r29 = (s16) (lbl_8036ABD8 + fn_80037818(temp_r30, (u8) temp_r0));
            if (fn_80105BC0(temp_r30 + 0x1BC, 0x4B) != 0) {
                var_r29 = (s16) ((var_r29 * 0xA) / 7);
            }
            if (fn_80105BC0(temp_r30 + 0x1BC, 0xB) != 0) {
                var_r29 = (s16) ((s32) (((u32) var_r29 >> 0x1FU) + var_r29) >> 1);
            }
            if (var_r29 < 1) {
                var_r29 = 1;
            }
        }
        var_r3 = var_r29 <= temp_r31;
    }
    return var_r3;
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

s32 fn_8017E08C(void) {
    return fn_8000C0C0(&lbl_80295580) != 0;
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

void fn_8017E2BC(void) {
    void *fn_8000C0C0(void *);
    extern u16 lbl_80295550[24];

    void *temp_r3;
    
    temp_r3 = fn_8000C0C0(lbl_80295550);
    if (temp_r3 != NULL) {
        void* temp_r6;
        
        temp_r6 = *(void **)((u8 *)temp_r3 + 0x38);
        if (temp_r6 != NULL) {
            *(u8 *)((u8 *)temp_r6 + 0x43) = 2;
            *(u8 *)((u8 *)temp_r6 + 0x42) = 0xF;
            *(u8 *)((u8 *)temp_r6 + 0x41) = 0;
        }

        temp_r6 = *(void **)((u8 *)temp_r3 + 0x3C);
        if (temp_r6 != NULL) {
            *(u8 *)((u8 *)temp_r6 + 0x43) = 2;
            *(u8 *)((u8 *)temp_r6 + 0x42) = 0xF;
            *(u8 *)((u8 *)temp_r6 + 0x41) = 0;
        }
    }
}

s32 fn_8017E328(void) {
    extern u16 lbl_80295550[];
    s32 v = fn_8000C0C0(lbl_80295550);
    return v != 0;
}

void fn_8017E35C(void) {
    u32 fn_8000C0C0(u16 *param);
    void fn_8000C070(s32 param);
    extern u16 lbl_80295550;
    
    if (fn_8000C0C0(&lbl_80295550) != 0) {
        fn_8000C070(0);
    }
}

void fn_8017E394(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *fn_8000CAF0(void *, void *);
    void fn_8017E5B0(void *, void *, void *, void *);
    extern u8 lbl_80295550[];

    fn_8017E5B0(fn_8000CAF0(lbl_80295550, arg2), arg0, arg1, arg3);
}

void fn_8017E540(void* arg0) {
    s32 i;
    void** ptr;

    i = 0;
    ptr = (void**)arg0;
    do {
        if (ptr[0xE] != NULL) {
            fn_8000C60C();
        }
        i += 1;
        ptr += 1;  
    } while (i < 2);
    
    fn_8006D8E8(ptr[-1]);  
    ptr[-1] = 0;           
}

void fn_8017E8A0(void) {
    M2C_UNK fn_8017E8C0();
    fn_8017E8C0();
}

void fn_8017E8C0(void *arg0) {
    M2C_UNK fn_800075D8();
    M2C_UNK fn_8000770C(f32, f32, f32, f32, f32, f32);
    M2C_UNK fn_80009B28();
    M2C_UNK fn_80009F90(u32, s32, M2C_UNK);
    M2C_UNK fn_8001019C(s16, M2C_UNK, M2C_UNK, u32);
    s32 fn_80010B78(u32, M2C_UNK, f32);
    M2C_UNK fn_8005926C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
    f32 fn_80059EB8(u8, u8, f32, f32);
    f32 fn_80059F64(u8, f32, f32, f32);
    u32 fn_80098170(void *);
    s32 fn_800981D0();
    M2C_UNK fn_8017EE3C(u32, u8, M2C_UNK, s32, s32, M2C_UNK, f32, f32);
    M2C_UNK fn_802380D0(f32);
    M2C_UNK fn_80238638();
    extern f32 lbl_8036AC2C;
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC34;
    extern f32 lbl_8036AC40;
    extern f32 lbl_8036AC48;
    extern f32 lbl_8036AC5C;
    extern f32 lbl_8036AC60;
    extern f32 lbl_8036AC64;
    extern f32 lbl_8036AC68;
    extern f32 lbl_8036AC6C;
    extern f32 lbl_8036AC70;
    extern f32 lbl_8036AC74;
    extern f32 lbl_8036AC78;
    f32 temp_f1;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f3;
    s32 temp_r24;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r29;
    s32 temp_r31;
    u32 temp_r23;
    u32 temp_r26_2;
    u32 temp_r28;
    u32 temp_r30;
    u32 temp_r31_2;
    u32 temp_r3_2;
    u8 temp_r26_3;
    u8 temp_r28_2;
    u8 temp_r30_2;
    u8 temp_r3;
    u8 temp_r4_2;
    void *temp_r4;

    if (((void *) M2C_FIELD(arg0, void **, 0x38) != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && ((u8) M2C_FIELD(arg0, u8 *, 0x40) != 0)) {
        temp_r29 = fn_800981D0();
        temp_r28 = fn_80098170(M2C_FIELD(arg0, void **, 0x38));
        temp_r4 = M2C_FIELD(arg0, void **, 0x38);
        temp_r27 = (s32) M2C_FIELD(temp_r4, f32 *, 4);
        temp_r26 = (s32) M2C_FIELD(temp_r4, f32 *, 8);
        temp_r25 = (s32) (M2C_FIELD(arg0, f32 *, 0x30) + lbl_8036AC30);
        temp_r24 = (s32) (M2C_FIELD(arg0, f32 *, 0x34) + lbl_8036AC30);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x42) != 0) {
            M2C_FIELD(arg0, u8 *, 0x41) = (u8) (M2C_FIELD(arg0, u8 *, 0x41) + 1);
            temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x42);
            temp_f31 = fn_80059F64(temp_r4_2, (lbl_8036AC34 * (f32) temp_r4_2) / lbl_8036AC40, (f32) temp_r4_2, (f32) M2C_FIELD(arg0, u8 *, 0x41));
            fn_80238638();
            fn_802380D0(temp_f31);
            if ((u8) M2C_FIELD(arg0, u8 *, 0x41) >= (u8) M2C_FIELD(arg0, u8 *, 0x42)) {
                M2C_FIELD(arg0, u8 *, 0x42) = 0U;
            }
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x45) != 0) {
            M2C_FIELD(arg0, u8 *, 0x44) = (u8) (M2C_FIELD(arg0, u8 *, 0x44) + 1);
            temp_f1 = fn_80059EB8(M2C_FIELD(arg0, u8 *, 0x45), M2C_FIELD(arg0, u8 *, 0x44), lbl_8036AC30, lbl_8036AC2C);
            if ((u8) M2C_FIELD(arg0, u8 *, 0x44) >= (u8) M2C_FIELD(arg0, u8 *, 0x45)) {
                M2C_FIELD(arg0, u8 *, 0x45) = 0U;
            } else {
                temp_r3 = M2C_FIELD(arg0, u8 *, 0x40);
                temp_f3 = (f32) temp_r3;
                temp_r30 = M2C_FIELD(arg0, u32 *, 0x3C);
                temp_f31_2 = lbl_8036AC5C - lbl_8036AC48;
                temp_r31 = (s32) ((temp_f3 * temp_f1) / lbl_8036AC2C);
                fn_8000A258(temp_r3, lbl_8036AC2C, temp_f3);
                fn_80009D74((f32) temp_r25, (f32) temp_r24, temp_f31_2, lbl_8036AC48);
                fn_80009F90(temp_r30, temp_r29, 0x21);
                fn_80009B8C((u8) temp_r31);
                fn_8000A248();
                fn_80007898(1);
                fn_8000770C(lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC60, lbl_8036AC64);
                fn_800075D8();
                fn_80007884();
                fn_80009B28();
            }
        }
        temp_r30_2 = M2C_FIELD(arg0, u8 *, 0x40);
        temp_r31_2 = M2C_FIELD(arg0, u32 *, 0x3C);
        if (temp_r28 != 0U) {
            fn_8000A258();
            fn_80009D74((f32) (temp_r25 + 0x2E), (f32) (temp_r24 - 0xC), lbl_8036AC68, lbl_8036AC48);
            fn_8000A174(0, 0x13);
            fn_80009B8C(temp_r30_2);
            fn_8000A248();
            temp_r3_2 = 0xB0 - fn_80010B78(temp_r28, -1, lbl_8036AC48);
            fn_8001019C((s16) ((s32) ((temp_r3_2 >> 0x1FU) + temp_r3_2) >> 1), 0, 1, temp_r28);
            fn_8000A258();
            fn_80009D74((f32) (temp_r25 + 0x2E), (f32) (temp_r24 - 0xC), lbl_8036AC6C, lbl_8036AC48);
            fn_80009F90(temp_r31_2, 4, 0x11);
            fn_80009B8C(temp_r30_2);
            fn_8000A248();
            fn_80007898(2);
            fn_8000770C(lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC70, lbl_8036AC74);
            fn_800075D8();
            fn_80007884();
            fn_80009B28();
        }
        fn_8017EE3C(M2C_FIELD(arg0, u32 *, 0x3C), M2C_FIELD(arg0, u8 *, 0x40), 0xFF, temp_r27, temp_r26, 0, (f32) (temp_r25 + 0x32), (f32) (temp_r24 + 0x1E));
        fn_8017EE3C(M2C_FIELD(arg0, u32 *, 0x3C), M2C_FIELD(arg0, u8 *, 0x40), 0x60, temp_r26, temp_r26, 0, (f32) (temp_r25 + 0x32), (f32) (temp_r24 + 0x1E));
        temp_r28_2 = M2C_FIELD(arg0, u8 *, 0x40);
        temp_r26_2 = M2C_FIELD(arg0, u32 *, 0x3C);
        fn_8000A258();
        fn_80009D74((f32) (temp_r25 + 0x1F), (f32) (temp_r24 + 0x17), lbl_8036AC78, lbl_8036AC48);
        fn_80009F90(temp_r26_2, 7, 0x11);
        fn_80009B8C(temp_r28_2);
        fn_8000A248();
        fn_8005926C(0, 0, 0, 0, 0x14, 0x1C, 0xF, temp_r27);
        fn_80009B28();
        temp_r26_3 = M2C_FIELD(arg0, u8 *, 0x40);
        temp_r23 = M2C_FIELD(arg0, u32 *, 0x3C);
        fn_8000A258();
        fn_80009D74((f32) temp_r25, (f32) temp_r24, lbl_8036AC5C, lbl_8036AC48);
        fn_80009F90(temp_r23, temp_r29, 0x11);
        fn_80009B8C(temp_r26_3);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC60, lbl_8036AC64);
        fn_800075D8();
        fn_80007884();
        fn_80009B28();
    }
}

void fn_8017EE3C(s32 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, u8 arg5, f32 farg0, f32 farg1) {
    extern f32 lbl_8036AC44;
    extern f32 lbl_8036AC48;
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC4C;
    f32 var_f31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r28 = arg3;
    s32 var_r29;
    s32 var_r30;

    if (var_r28 != 0) {
        var_f31 = lbl_8036AC44;
        var_r30 = 0x10;
        if (arg5 != 0) {
            var_r30 = 0x20;
            var_f31 -= lbl_8036AC48;
        }
        if (arg4 > 0x28) {
            fn_8000A258();
            fn_80009D74(farg0, farg1, var_f31, lbl_8036AC48);
            fn_80009F90(arg0, 6, (u16) (var_r30 | 1));
            fn_80009B8C(arg1);
            fn_8000A248();
            var_r29 = -6;
            do {
                s32 var_r30_2 = 0x28;
                if (var_r28 <= 0x28) {
                    var_r30_2 = var_r28;
                }
                fn_80007898(1);
                temp_r3 = var_r30_2 * 5;
                fn_8000770C(temp_r3, lbl_8036AC30, (f32) var_r29, lbl_8036AC30, lbl_8036AC30, (f32) (temp_r3 + 1), lbl_8036AC4C);
                fn_800076AC(arg2, arg2, arg2, 0xFF);
                fn_800075D8();
                fn_80007884();
                var_r28 -= 0x28;
                var_r29 += 0xE;
            } while (var_r28 > 0);
        } else {
            fn_8000A258();
            fn_80009D74(farg0, farg1, var_f31, lbl_8036AC48);
            fn_80009F90(arg0, 5, (u16) (var_r30 | 1));
            fn_80009B8C(arg1);
            fn_8000A248();
            fn_80007898(1);
            temp_r3_2 = var_r28 * 5;
            fn_8000770C(temp_r3_2, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, (f32) (temp_r3_2 + 1), lbl_8036AC4C);
            fn_800076AC(arg2, arg2, arg2, 0xFF);
            fn_800075D8();
            fn_80007884();
        }
        fn_80009B28();
    }
}

void fn_8017F040(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAF0(M2C_UNK *, s32);
    extern M2C_UNK lbl_80295508;
    void *temp_r3;

    if ((arg0 != 0) && (arg1 != 0)) {
        temp_r3 = fn_8000CAF0(&lbl_80295508, arg2);
        M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
        M2C_FIELD(temp_r3, s32 *, 0x3C) = arg1;
    }
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

void fn_8017F540(void *arg0) {
    f32 fn_8005A028(M2C_UNK, s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC40;
    extern f32 lbl_8036AC88;
    extern f32 lbl_8036AC38;

    f32 sp8;
    f32 dummy;
    s32 temp_r4 = *(s32 *)((u8 *)arg0 + 0x3C);

    *(s32 *)((u8 *)arg0 + 0x3C) = temp_r4 + 1;
    
    // Load the floating point constants needed
    sp8 = lbl_8036AC88;  // load f1
    dummy = lbl_8036AC30;  // load f2  
    dummy = lbl_8036AC40;  // load f3
    
    *(f32 *)((u8 *)arg0 + 0x38) = fn_8005A028(2, temp_r4, lbl_8036AC88, lbl_8036AC30, lbl_8036AC40, (f32) *(s32 *)((u8 *)arg0 + 0x3C));
    
    if (*(s32 *)((u8 *)arg0 + 0x3C) >= 0xA) {
        *(s32 *)((u8 *)arg0 + 0x3C) = 0;
        fn_8000C188(arg0);
    }
}

void fn_8017F5C8(void *arg0) {
    M2C_UNK fn_8006D8E8(s32);
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F5EC(void *arg0) {
    s32 fn_8006D948(void *);
    void fn_80059208(void *, void *);
    extern u16 lbl_802788B8[];
    extern f32 lbl_8036AC88;
    
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(u16 *)((u8 *)arg0 + 0x40) = 0xFF;
    *(s32 *)((u8 *)arg0 + 0x34) = fn_8006D948((u8 *)lbl_802788B8 + 0x122);
    *(f32 *)((u8 *)arg0 + 0x38) = lbl_8036AC88;
    fn_80059208((void *)0x8017F650, arg0);
}

void fn_8017F650(void *arg0) {
    f32 fn_8000A258(f32, f32);
    f32 fn_8009822C(f32 *, s32);
    f32 fn_80009D74(f32, f32, f32, f32);
    u8 fn_80009B8C(u8);
    void fn_8000A248();
    void fn_80007898(s32);
    void fn_800075D8();
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884();
    void fn_80009B28();
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC48;
    extern f32 lbl_8036AC74;
    extern f32 lbl_8036AC7C;
    extern f32 lbl_8036AC8C;
    extern f32 lbl_8036AC90;

    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp8;

    fn_8009822C(&sp8, *(s32 *)((u8 *)arg0 + 0x30));
    sp14 = sp8;
    sp18 = *(f32 *)((u8 *)arg0 + 0xC);
    sp1C = *(f32 *)((u8 *)arg0 + 0x10);
    fn_8000A258(sp1C, sp8);
    sp14 += *(f32 *)((u8 *)arg0 + 0x38);
    fn_80009D74(sp14, sp18, lbl_8036AC7C, lbl_8036AC48);
    *(s32 *)((u8 *)arg0 + 0x34) = 0xA;
    *(s32 *)((u8 *)arg0 + 0x34) = 0x11;
    fn_80009B8C(*(u8 *)((u8 *)arg0 + 0x40));
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036AC8C, lbl_8036AC30, lbl_8036AC30, lbl_8036AC30, lbl_8036AC90, lbl_8036AC74);
    fn_800075D8();
    fn_80007884();
    fn_80009B28();
}

void fn_8017F70C(s32 arg0) {
    void *fn_8000CAF0(M2C_UNK *, M2C_UNK *);
    extern M2C_UNK lbl_802954B0;
    M2C_FIELD(fn_8000CAF0(&lbl_802954B0, &lbl_802954B0), s32 *, 0x30) = arg0;
}

void fn_8017F7D4(void *arg0) {
    f32 fn_8005A028(M2C_UNK, s32, f32, f32, f32, f32);
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC40;
    extern f32 lbl_8036AC4C;
    extern f32 lbl_8036AC58;
    extern f32 lbl_8036AC94;
    f32 temp_f1;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r4 + 1);
    temp_f1 = fn_8005A028(2, temp_r4, lbl_8036AC30, lbl_8036AC58, lbl_8036AC40, (f32) M2C_FIELD(arg0, s32 *, 0x3C)) - lbl_8036AC94;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((temp_f1 * temp_f1) - lbl_8036AC4C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) >= 0xA) {
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        fn_8000C188(arg0);
    }
}

void fn_8017F86C(void *arg0) {
    M2C_UNK fn_8006D8E8(s32);
    fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_8017F890(void *arg0)
{
    s32 fn_8006D948(void *);
    void fn_80059208(void *, void *);
    void fn_8017F8EC(void);
    extern u8 lbl_802788B8[];

    *(s32 *)((char *)arg0 + 0x3C) = 0;
    *(s32 *)((char *)arg0 + 0x40) = 0xFF;
    *(s32 *)((char *)arg0 + 0x34) = fn_8006D948(lbl_802788B8 + 0x122);
    fn_80059208(fn_8017F8EC, arg0);
}

void fn_8017F8EC(void *arg0) {
    void fn_800075D8(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(u8);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(f32, f32);
    void fn_8009822C(f32 *, s32);
    
    extern f32 lbl_8036AC30;
    extern f32 lbl_8036AC48;
    extern f32 lbl_8036AC74;
    extern f32 lbl_8036AC7C;
    extern f32 lbl_8036AC98;
    extern f32 lbl_8036AC9C;

    s32 temp_r5;  // local variable
    f32 temp_f1, temp_f2, temp_f3, temp_f4, temp_f5, temp_f6;  // floating point temporaries
    
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x30);
    fn_8009822C(&temp_f1, temp_r5);
    
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_f3 = temp_f1;
    fn_8000A258(temp_f2, temp_f3);
    
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x38);
    temp_f4 = temp_f2 + temp_f3;
    
    fn_80009D74(M2C_FIELD(arg0, f32 *, 0x14),
                temp_f4,
                lbl_8036AC7C,
                lbl_8036AC48);
                
    fn_80009F90(M2C_FIELD(arg0, s32 *, 0x34), 9, 0x11);
    fn_80009B8C((u8) M2C_FIELD(arg0, u32 *, 0x40));
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036AC98,
               lbl_8036AC30,
               lbl_8036AC30,
               lbl_8036AC30,
               lbl_8036AC9C,
               lbl_8036AC74);
    fn_800075D8();
    fn_80007884();
    fn_80009B28();
}

void fn_8017F9A8(void) {
    extern u16 lbl_802788B8[];
    fn_8005C8B4((u8 *)lbl_802788B8 + 0x122);
}

void *fn_8017FB80(u32 arg0) {
    void *fn_8000CAA0(void *, u32, void *);
    void *fn_8000CAF0(void *, u32, void *);
    extern u16 lbl_802955A8[];
    extern u32 lbl_80295764[];
    
    void *var_r31;
    u32 arg = arg0;
    
    if (arg != 0) {
        var_r31 = fn_8000CAA0(lbl_802955A8, arg, lbl_802955A8);
    } else {
        var_r31 = fn_8000CAF0(lbl_802955A8, arg, lbl_802955A8);
    }
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(u32 **)((u8 *)var_r31 + 0x40) = lbl_80295764;
        *(u32 *)((u8 *)var_r31 + 0x44) = 0;
    }
    return var_r31;
}

void fn_8017FC00(void) {
    fn_8013FF94(0x81, 0);
    fn_8013AD70((s32*)*(u32*)((u8*)&lbl_80330708 + 0xB0));
}

void fn_8017FC70(void *arg0, s32 arg1) {
    void fn_8013FF94(s32, s32);
    u32 *fn_80037BD0(s32, s16);
    s16 var_r3;
    s16 var_r31;
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

void fn_8017FE84(s32 arg0) {
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    fn_8013FF94(0x81, 0);
    fn_8013FF94(arg0, 0x82, 0);
    switch ((s32) M2C_FIELD(&lbl_802EF4C8, u8 *, 8)) { /* irregular */
    case 0x80:
        fn_8000C070(arg0, 5);
        /* fallthrough */
    case 0x81:
        return;
    }
}

void fn_8017FEF8(s32 arg0) {
    fn_8013FF94(0x81, 0);
}

void fn_80180620(void) {

}

s32 fn_80180E2C(s32 arg0) {
    u8 fn_80036B20(s32, s32);
    void *fn_80036FD0(s32, s32);
    u8 fn_8003701C(void);
    u8 count;
    s32 i;
    void *obj;

    count = fn_8003701C();
    for (i = 0; i < count; i++) {
        obj = fn_80036FD0(arg0, i);
        if (obj != NULL) {
            switch (M2C_FIELD(M2C_FIELD(obj, void **, 0x190), u8 *, 8)) {
            case 0:
            case 5:
                if (fn_80036B20(arg0, i)) {
                    return 1;
                }
                break;
            }
        }
    }
    return 0;
}

#pragma cplusplus on
extern "C" void fn_80180ED4(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0(s32) = 0;
    };
    if (M2C_FIELD(arg0, u32 *, 0x44) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x44));
    }
    ((Obj *)arg0)->v0(-1);
}
#pragma cplusplus reset

void fn_801812A0(void) {
    void fn_8005C8B4(void *);
    extern u8 lbl_802789F0[];
    fn_8005C8B4(lbl_802789F0 + 0x116);
}

#pragma opt_common_subs off
void fn_801812CC(void *arg0) {
    u8 fn_8005BA10(void *);
    s32 fn_8003FCCC(void *);
    void fn_8000C188(void *);
    extern u8 lbl_802789F0[];

    if (fn_8005BA10(lbl_802789F0 + 0x116)) {
        M2C_FIELD(arg0, s32 *, 0x44) = fn_8003FCCC(lbl_802789F0 + 0x116);
        fn_8000C188(arg0);
    }
}

void fn_80181328(void **arg0) {
    void (**func_ptr)(void) = (void (**)(void))(*arg0);
    func_ptr[0x20 / sizeof(void*)]();
}

#pragma opt_common_subs reset

#pragma cplusplus on
extern "C" s32 fn_80036A24(s32, s16);
extern "C" void fn_80157700(s32, s16, u8, s32);
extern "C" void fn_80157930(s32, s32, s16, s16, s32, s32);
extern "C" void fn_8018179C(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    s16 y;

    ((Obj *)arg0)->v2();
    fn_80157930(0, 0, (s16)(M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16)(M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xE6, 0x10);
    y = (s16)(M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)) + 2;
    fn_80157700(0, y, 5 - fn_80036A24(M2C_FIELD(arg0, s32 *, 0x48), (s16)(M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC))), 0x10);
}
#pragma cplusplus reset

u8 fn_80181B9C(void *arg0, void *arg1) {
    s8 fn_80036DE0(s32, void *);
    u8 fn_80036B20(s32, s32);
    u8 ret;
    u8 res;
    s32 obj;
    s8 idx;

    if (arg1 == NULL) {
        return 0;
    }
    ret = 0;
    switch (M2C_FIELD(M2C_FIELD(arg1, void **, 0x190), u8 *, 8)) {
    case 0:
    case 5:
        obj = M2C_FIELD(arg0, s32 *, 0x48);
        if (M2C_FIELD(M2C_FIELD(arg1, void **, 0x188), u32 *, 0x50) == 0) {
            res = 0;
        } else {
            idx = fn_80036DE0(obj, arg1);
            if (idx < 0) {
                res = 0;
            } else {
                res = fn_80036B20(obj, idx);
            }
        }
        ret = res;
        break;
    }
    return ret;
}

void fn_80181C40(s32 *arg0, void *arg1) {
    struct Point {
        s16 x;
        s16 y;
    };
    struct Point *fn_8013F748(void *, struct Point *, struct Point *);
    struct Point out;
    struct Point in;
    s16 idx;
    s32 row;

    idx = M2C_FIELD(arg1, s16 *, 0x4E);
    row = M2C_FIELD(arg1, s16 *, 0x54) * idx;
    in.x = M2C_FIELD(arg1, s16 *, 0x56);
    in.y = row + M2C_FIELD(arg1, s16 *, 0x58);
    *(struct Point *)arg0 = *fn_8013F748(arg1, &out, &in);
}

typedef struct ListNode {
    struct ListNode *prev;
    struct ListNode *next;
} ListNode;

typedef struct List {
    u32 unk0;
    ListNode node;
} List;

typedef struct ListOwner {
    void *vtbl;
    u8 pad4[0x58];
    List list;
} ListOwner;

ListOwner *fn_80181CA4(ListOwner *arg0, s16 arg1) {
    M2C_UNK fn_8013F2A4(void *, s32);
    M2C_UNK fn_800C428C(void *);
    M2C_UNK fn_80136F2C(void *, List *, ListNode **, ListNode **);
    extern u8 lbl_802956B8[];
    ListNode *sp10;
    ListNode *spC;
    u8 sp8[4];
    ListNode *end;

    if (arg0 != NULL) {
        arg0->vtbl = lbl_802956B8;
        if (&arg0->list != NULL) {
            if (&arg0->list != NULL) {
                if (&arg0->list != NULL) {
                    end = &arg0->list.node;
                    sp10 = end;
                    spC = end->next;
                    fn_80136F2C(sp8, &arg0->list, &spC, &sp10);
                }
            }
        }
        fn_8013F2A4(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80181D44(void *arg0) {
    s16 var_r5;
    s16 var_r4;
    s16 var_r6;
    s16 var_r7;
    
    var_r6 = *(s16 *)((char *)arg0 + 0xA);
    var_r7 = *(s16 *)((char *)arg0 + 0xC);
    var_r5 = *(s16 *)((char *)arg0 + 0xE);
    var_r4 = *(s16 *)((char *)arg0 + 0x10);
    
    *(s16 *)((char *)arg0 + 0x12) = 3;
    *(s16 *)((char *)arg0 + 0x14) = 5;
    
    var_r7 = var_r7 - var_r4;
    *(s16 *)((char *)arg0 + 0x18) = var_r7 - 5;
    
    var_r4 = var_r6 - var_r5;
    *(s16 *)((char *)arg0 + 0x16) = var_r4 - 3;
}

s32 fn_80181DD8(void *arg0) {
    void **ptr = M2C_FIELD(arg0, void **, 0x188);
    s32 val = ((s32*)ptr)[0x50/4];
    return (val ^ (val >> 31)) - (val >> 31);
}

#pragma opt_common_subs reset
s32 fn_8018256C(void) {
    return 1;
}

s32 fn_80182574(s32 arg0) {
    M2C_UNK fn_8010AC58(s32);
    u8 fn_8010B658(s32);
    u8 fn_8010B8E4(s32);
    u8 fn_8010BB74(s32);
    u8 fn_8010BEB8(s32);
    u8 fn_8010C244(s32);
    u8 fn_8010C4B0(s32);
    u8 fn_8010C504(s32);
    u8 fn_8010F670(M2C_UNK *);
    extern M2C_UNK fn_800FB5C8;
    extern M2C_UNK lbl_8032B3C0;
    if (M2C_FIELD(&lbl_8032B3C0, u8 *, 1) & 4) {
        return 1;
    }
    if ((fn_8010F670(&fn_800FB5C8) == 0) && (fn_8010C4B0(arg0) != 0) && (fn_8010C504(arg0) != 0)) {
        if (fn_8010C244(arg0) != 0) {
            return 1;
        }
        if (fn_8010BEB8(arg0) != 0) {
            return 1;
        }
        if (fn_8010BB74(arg0) != 0) {
            fn_8010AC58(arg0);
        } else if (fn_8010B8E4(arg0) != 0) {
            fn_8010AC58(arg0);
        } else if (fn_8010B658(arg0) != 0) {
            fn_8010AC58(arg0);
        }
        goto block_15;
    }
block_15:
    return 1;
}

s32 fn_80182704(void *arg0) {
    struct Obj {
        u8 pad0[0x236];
        u8 unk236;
        u8 pad237[0x254 - 0x237];
        u32 unk254;
    };
    s8 fn_80017290(u8 *);
    s8 fn_800172D4(u8 *);
    u8 fn_800BE968(u8, u8, u8);
    void fn_801014BC(void *, s16, s16, s32, u16, s32, s32, s32);
    void fn_80101448(void *, s16, s16, s32, u16, s32, s32, s32);
    extern u8 lbl_8032B3C0[];
    struct Obj *p = arg0;
    s8 temp_r30;
    s8 temp_r3;

    temp_r30 = fn_80017290(&p->unk236);
    temp_r3 = fn_800172D4(&p->unk236);
    if ((lbl_8032B3C0[1] & 2) || (p->unk254 & 0x03000000)) {
        return 0;
    }
    fn_801014BC(p, temp_r3, temp_r30, 1, 0xFFFF, 1, 0, -1);
    if (lbl_8032B3C0[0x21C] == 0) {
        fn_80101448(p, temp_r3, temp_r30, 1, 0xFFFF, 1, 0, -1);
    }
    if (lbl_8032B3C0[0x21C] != 0) {
        u8 d = ((u8 *)lbl_802EF4C8)[0xD];
        if ((s8)fn_800172D4(&p->unk236) == (s8)d) {
            u8 e = ((u8 *)lbl_802EF4C8)[0xE];
            if ((s8)fn_80017290(&p->unk236) == (s8)e) {
                if (fn_800BE968(0xE, ((u8 *)lbl_802EF4C8)[0xD], ((u8 *)lbl_802EF4C8)[0xE]) != 0) {
                    ((u8 *)lbl_802EF4C8)[0x8] = 0xE;
                }
            }
        }
    }
    return 1;
}

s32 fn_8018286C(s32 arg0, s32 arg1) {
    if (arg0 < 0 || arg1 < 0) {
        return -1;
    }
    
    if (arg0 == 0) {
        if (arg1 == 0) return 0x12C;
        if (arg1 == 1) return 0x1F4;
        if (arg1 == 2) return 0x258;
    } else if (arg0 == 1) {
        if (arg1 == 0) return 0x12C;
        if (arg1 == 1) return 0x1F4;
        if (arg1 == 2) return 0x258;
    } else if (arg0 == 2) {
        if (arg1 == 0) return 0x12C;
        if (arg1 == 1) return 0x1F4;
        if (arg1 == 2) return 0x258;
    }
    
    return -1;
}

s32 fn_80182A0C(s32 arg0) {
    extern u8 fn_80182C84[];
    
    if (fn_8010F52C(fn_80182C84) == 0) {
        if (fn_8018D4CC(arg0, fn_80182C84) == 0) {
            if (fn_800F5504(fn_80182C84, 0xF) == 0) {
                s16 var_r5;
                s16 var_r4;
                if (fn_80101F0C(fn_80182C84, arg0, &var_r5, &var_r4) != 0) {
                    fn_801014BC(arg0, var_r5, var_r4, 1, 0xFFFF, 1, 0, -1);
                }
            }
        }
    }
    return 1;
}

s32 fn_80182AC4(s32 arg0) {
    u8 fn_800F5504(u8 *, s32);
    void fn_801014BC(s32, s16, s16, s32, u16, s32, s32, s32);
    u8 fn_80101F0C(u8 *, s32, s16 *, s16 *);
    u8 fn_8010F52C(s32, u8 *);
    u8 fn_8018D4CC(s32, u8 *);
    extern u8 fn_800FB5C8[];
    extern u8 fn_80182CE4[];
    s16 spA;
    s16 sp8;

    if ((fn_8010F52C(arg0, fn_800FB5C8) == 0) && (fn_8018D4CC(arg0, fn_800FB5C8) == 0) && (fn_800F5504(fn_80182CE4, 0xF) == 0) && (fn_80101F0C(fn_80182CE4, arg0, &spA, &sp8) != 0)) {
        fn_801014BC(arg0, spA, sp8, 1, 0xFFFF, 1, 0, -1);
    }
    return 1;
}

s32 fn_80182B7C(s32 arg0) {
    void *fn_80017240(s32);
    u8 fn_800F5504(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_801014BC(s32, s16, s16, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    u8 fn_80101F0C(M2C_UNK *, s32, s16 *, s16 *);
    u8 fn_8010F52C(s32, M2C_UNK *);
    u8 fn_8018D4CC(s32, M2C_UNK *);
    extern M2C_UNK fn_80182E80;
    extern u16 lbl_8032B3C0[];
    s16 spA;
    s16 sp8;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(fn_80017240(arg0 + 0x236), s32 *, 0x1A0);
    if (temp_r3 & 0x98) {
        lbl_8032B3C0[4] = 1;
        return 0;
    }
    if (temp_r3 & 4) {
        lbl_8032B3C0[4] = 4;
        return 0;
    }
    if ((fn_8010F52C(arg0, &fn_80182E80) == 0) && (fn_8018D4CC(arg0, &fn_80182E80) == 0) && (fn_800F5504(&fn_80182E80, 0xF) == 0) && (fn_80101F0C(&fn_80182E80, arg0, &spA, &sp8) != 0)) {
        fn_801014BC(arg0, spA, sp8, 1, 0xFFFF, 1, 0, -1);
    }
    return 1;
}

void fn_80182C84(void *arg0)
{
    void *ptr = M2C_FIELD(arg0, void **, 0x62);
    if (ptr != 0)
    {
        M2C_FIELD(arg0, void **, 0x62) = 0;
    }
}

s32 fn_80182CE4(s32 arg0, s32 arg1) {
    if (arg0 < 0 || arg0 >= 0x190) {
        return -1;
    }

    switch(arg1) {
        case 0:
            return lbl_802EF4C8[arg0];
        case 1:
            return lbl_80278080[arg0];
        case 2:
            return lbl_80294604[arg0];
        case 3:
            return lbl_803680E8[arg0] & 0xFF;
        case 4:
            return lbl_80330708[arg0];
        default:
            return -1;
    }
}

void fn_801832F8(s32 arg0) {
    extern u32 lbl_802EF4C8[];
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[440];
    extern u8 lbl_80368208[8];

    u8 val = ((u16*)lbl_802EF4C8)[8];
    lbl_803681F0 = val;
    if (val == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0xF8]);
        fn_80091A1C();
    } else {
        fn_8000E0E4(&lbl_80278BB8[0x102]);
        fn_80091A1C();
    }
    fn_80024398(lbl_80368208, arg0, 0);
}

#include "common.h"
extern u32 lbl_802EF4C8[];
extern u16 lbl_80278080[];
extern u16 lbl_80294550[];
extern f32 lbl_8036AB94;
extern u16 lbl_80277EA0;
extern u16 lbl_80293D8C;
extern void *lbl_8028D9A4[];
extern u8 lbl_80367220;
extern s32 lbl_80367228;
extern s32 lbl_8036722C;
#include <common.h>
#include "global.h"
#include "unit.h"

extern u16* gSomeBssVar; // lbl_802EF4C8
#include "common.h"
#include "dolphin/os.h"
extern u16 lbl_80292230[];
extern u16 lbl_8028FDB0[];
extern u16 lbl_80292208[];
extern u16 lbl_80292488[];
extern f32 lbl_8036AB6C;
extern f32 lbl_8036AB70;
#include "global.h"

extern f32 lbl_8036A9CC;
extern f32 lbl_8036A9D8;
extern f32 lbl_8036A9DC;
extern f32 lbl_8036A9E0;
extern f64 lbl_8036A9B8;
