/* Functions from 0x800330F8 to 0x80055C70, found by decomp-toolkit. */
#include "common.h"

void fn_800333DC(void* arg0, s32 arg1) {
    u16* r5;
    u16* r4;

    r5 = (u16*)((u8*)arg0 + 0x60);
    r5 = (u16*)((u8*)r5 + ((*(u8*)r5 + arg1) * 2));
    *r5 |= 0x4002;

    r4 = (u16*)((u8*)arg0 + 0x60);
    r4 = (u16*)((u8*)r4 + ((*(u8*)r4 + arg1) * 2));
    *r4 |= 4;
}

void fn_80033E70(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x400), s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 0) - M2C_FIELD(arg0, s16 *, 2));
    M2C_FIELD(arg0, void **, 0x400) = NULL;
}

void fn_800340E4(s16 *arg0) {
    *arg0 = 0;
}

void fn_800340F0(void* arg0) {
    s32 temp_r0;
    u32 zero = 0;
    
    *(u8*)((char*)arg0 + 0x404) = zero;
    *(u16*)((char*)arg0 + 0x0) = zero;
    *(u16*)((char*)arg0 + 0x2) = zero;
    *(u32*)((char*)arg0 + 0x400) = zero;
    temp_r0 = *(s16*)((char*)arg0 + 0x0);
    *(u8*)((char*)arg0 + (temp_r0 * 4) + 0x4) = zero;
    *(u16*)((char*)arg0 + (temp_r0 * 4) + 0x6) = zero;
}

void fn_80034120(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) + 1);
}

void fn_800368C8(void *arg0, u8 arg1, void *arg2) {
    void *fn_80019DA8(u8);
    void *temp_r3;

    temp_r3 = fn_80019DA8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x54));
    M2C_FIELD(arg2, u8 *, 4) = (u8) (M2C_FIELD(arg2, u8 *, 4) + (arg1 * M2C_FIELD(temp_r3, u8 *, 4)));
    M2C_FIELD(arg2, u8 *, 5) = (u8) (M2C_FIELD(arg2, u8 *, 5) + (arg1 * M2C_FIELD(temp_r3, u8 *, 5)));
    M2C_FIELD(arg2, u8 *, 6) = (u8) (M2C_FIELD(arg2, u8 *, 6) + (arg1 * M2C_FIELD(temp_r3, u8 *, 6)));
    M2C_FIELD(arg2, u8 *, 7) = (u8) (M2C_FIELD(arg2, u8 *, 7) + (arg1 * M2C_FIELD(temp_r3, u8 *, 7)));
    M2C_FIELD(arg2, u8 *, 8) = (u8) (M2C_FIELD(arg2, u8 *, 8) + (arg1 * M2C_FIELD(temp_r3, u8 *, 8)));
    M2C_FIELD(arg2, u8 *, 9) = (u8) (M2C_FIELD(arg2, u8 *, 9) + (arg1 * M2C_FIELD(temp_r3, u8 *, 9)));
}

void fn_80036984(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)(arg0 + 0x214);
    ptr[arg1] += 1;
}

u8 fn_80036FC4(s32 arg0, s32 arg1) {
    u32 addr = (arg0 + arg1 + 0x214);
    return *(u8 *)addr;
}

void fn_80036FD0(void *arg0, s32 arg1) {
    void **temp_r3;
    void *temp_r3_2;

    temp_r3 = (void **)M2C_FIELD(arg0, void **, 0x188);
    temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x50);
    temp_r3_2 = (void*)((s32)temp_r3_2 + (arg1 * 8));
    fn_80016B7C((s32)M2C_FIELD(temp_r3_2, void **, 8));
}

s32 fn_80037004(void *arg0, s32 arg1) {
    return M2C_FIELD((M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), s32 *, 0x50) + (arg1 * 8)), s32 *, 8);
}

u8 fn_8003701C(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), void **, 0x50);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return (u8) M2C_FIELD(temp_r3, s32 *, 4);
}

void fn_80037040(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, u8 *, 0x1A9) = (u8) (M2C_FIELD(arg0, u8 *, 0x1A9) + arg1);
    M2C_FIELD(arg0, u8 *, 0x1AA) = (u8) (M2C_FIELD(arg0, u8 *, 0x1AA) + arg2);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x1A9) > 0x63) {
        M2C_FIELD(arg0, u8 *, 0x1A9) = 0x63U;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x1AA) > 0x14) {
        M2C_FIELD(arg0, u8 *, 0x1AA) = 0x14U;
    }
}

void *fn_800377D8(void *arg0) {
    extern u16 lbl_8026A3A8[];
    if (*(u8 *)((u8 *)arg0 + 0x199) == 0) {
        return (void *)&lbl_8026A3A8[0x1D];
    }
    return (void *)fn_80014EDC();
}

void fn_80037814(void) {

}

s32 fn_800378CC(s32 arg0) {
    M2C_UNK fn_80165E90(s32 *, s32);
    s32 sp8;

    fn_80165E90(&sp8, arg0 + 0x1BC);
    return sp8;
}

void fn_80037AB8(void *arg0) {
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r6_4;
    void *temp_r6_5;
    void *temp_r6_6;
    void *temp_r6_7;

    temp_r6 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AB) = (s8) ((M2C_FIELD(temp_r6, u8 *, 0x4C) - M2C_FIELD(temp_r6, u8 *, 0x44)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1D));
    temp_r6_2 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AC) = (s8) ((M2C_FIELD(temp_r6_2, u8 *, 0x4D) - M2C_FIELD(temp_r6_2, u8 *, 0x45)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1E));
    temp_r6_3 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AD) = (s8) ((M2C_FIELD(temp_r6_3, u8 *, 0x4E) - M2C_FIELD(temp_r6_3, u8 *, 0x46)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1F));
    temp_r6_4 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AE) = (s8) ((M2C_FIELD(temp_r6_4, u8 *, 0x4F) - M2C_FIELD(temp_r6_4, u8 *, 0x47)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x20));
    temp_r6_5 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1AF) = (s8) ((M2C_FIELD(temp_r6_5, u8 *, 0x50) - M2C_FIELD(temp_r6_5, u8 *, 0x48)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x21));
    M2C_FIELD(arg0, s8 *, 0x1B0) = (s8) (0x28 - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x22));
    temp_r6_6 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1B1) = (s8) ((M2C_FIELD(temp_r6_6, u8 *, 0x52) - M2C_FIELD(temp_r6_6, u8 *, 0x4A)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x23));
    temp_r6_7 = M2C_FIELD(arg0, void **, 0x18C);
    M2C_FIELD(arg0, s8 *, 0x1B2) = (s8) ((M2C_FIELD(temp_r6_7, u8 *, 0x53) - M2C_FIELD(temp_r6_7, u8 *, 0x4B)) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x24));
    M2C_FIELD(arg0, s8 *, 0x1AA) = (s8) (0x14 - M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x3E));
}

s32 fn_80037BBC(s32 arg0, s32 arg1) {
    return (arg1 * 8) + arg0 + 0x1CC;
}

s32 fn_80037CCC(void *arg0) {
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1F1) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1EC) != 0U)) {
        return 0;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1F9) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1F4) != 0U)) {
        return 1;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x201) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1FC) != 0U)) {
        return 2;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x209) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x204) != 0U)) {
        return 3;
    }
    return -1;
}

s32 fn_80037E00(void *arg0) {
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1D1) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1CC) != 0U)) {
        return 0;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1D9) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1D4) != 0U)) {
        return 1;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1E1) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1DC) != 0U)) {
        return 2;
    }
    if ((((u8) M2C_FIELD(arg0, u8 *, 0x1E9) >> 7U) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x1E4) != 0U)) {
        return 3;
    }
    return -1;
}

u8 fn_80038128(void *arg0, void *arg1) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = (s8) *(u8 *)((uintptr_t)arg0 + 0x19F) - (s8) *(u8 *)((uintptr_t)arg1 + 0x19F);
    if (var_r5 < 0) {
        var_r5 = -var_r5;
    }
    var_r0 = (s8) *(u8 *)((uintptr_t)arg0 + 0x19E) - (s8) *(u8 *)((uintptr_t)arg1 + 0x19E);
    if (var_r0 < 0) {
        var_r0 = -var_r0;
    }
    return (u8) (var_r0 + var_r5);
}

void fn_8003868C(void *arg0, s8 arg1) {
    if (arg1 != -1) {
        if (arg1 >= 0) {
            if (arg1 > 0x64) {
                return;
            }
            /* Duplicate return node #4. Try simplifying control flow for better match */
            M2C_FIELD(arg0, s8 *, 0x19B) = arg1;
            return;
        }
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x19B) = arg1;
}

u8 fn_800386B0(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x190), u8 *, 8);
    if ((temp_r0 == 1) || (temp_r0 == 2) || (temp_r0 == 3)) {
        return 0xFFU;
    }
    return M2C_FIELD(arg0, u8 *, 0x19B);
}

s8 fn_8003A1C4(void *arg0) {
    return (s8) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x41) + (((u8) M2C_FIELD(arg0, u8 *, 0x1A6) >> 2U) & 7));
}

s8 fn_8003B490(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x188);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x53);
    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x24) + (M2C_FIELD(temp_r6, u8 *, 0x4B) + M2C_FIELD(arg0, u8 *, 0x1B2));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B4D4(void *arg0) {
    u8 *temp_r4;
    s8 var_r3;
    u8 temp_r6;

    temp_r4 = M2C_FIELD(arg0, void **, 0x188);
    temp_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x52);
    var_r3 = M2C_FIELD(temp_r4, u8 *, 0x23) + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x4A) + M2C_FIELD(arg0, u8 *, 0x1B1));
    if (var_r3 > (s8) temp_r6) {
        var_r3 = (s8) temp_r6;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B518(void *arg0) {
    s8 var_r3;

    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x22) + M2C_FIELD(arg0, u8 *, 0x1B0);
    if (var_r3 > 0x28) {
        var_r3 = 0x28;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B548(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = *(void **)((u8 *)arg0 + 0x18C);
    temp_r6_2 = *((u8 *)temp_r6 + 0x50);
    var_r3 = *((u8 *)*(void **)((u8 *)arg0 + 0x188) + 0x21) + (*((u8 *)temp_r6 + 0x48) + *((u8 *)arg0 + 0x1AF));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B58C(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x188);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x4F);
    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u8 *, 0x20) + (M2C_FIELD(temp_r6, u8 *, 0x47) + M2C_FIELD(arg0, u8 *, 0x1AE));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B5D0(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x18C);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x4E);
    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1F) + (M2C_FIELD(temp_r6, u8 *, 0x46) + M2C_FIELD(arg0, u8 *, 0x1AD));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B614(void *arg0) {
    s8 var_r3;
    u8 temp_r6_2;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg0, void **, 0x18C);
    temp_r6_2 = M2C_FIELD(temp_r6, u8 *, 0x4D);
    var_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1E) + (M2C_FIELD(temp_r6, u8 *, 0x45) + M2C_FIELD(arg0, u8 *, 0x1AC));
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

s8 fn_8003B658(void *arg0) {
    void *temp_r4;
    u8 temp_r6_2;
    u8 temp_r5;
    s8 var_r3;

    temp_r4 = M2C_FIELD(arg0, void **, 0x18C);
    temp_r5 = M2C_FIELD(arg0, u8 *, 0x1AB);
    temp_r6_2 = M2C_FIELD(temp_r4, u8 *, 0x4C);
    var_r3 = (M2C_FIELD(M2C_FIELD(arg0, void **, 0x188), u8 *, 0x1D) + M2C_FIELD(temp_r4, u8 *, 0x44)) + temp_r5;
    if (var_r3 > (s8) temp_r6_2) {
        var_r3 = (s8) temp_r6_2;
    }
    if (var_r3 < 0) {
        return 0;
    }
    return var_r3;
}

void fn_8003B69C(s32 arg0) {
    M2C_UNK fn_800173B4(s32, s32);
    fn_800173B4(arg0 + 0x236, arg0);
}

void fn_8003B6C4(void* arg0, s32 arg1) {
    *(s32*)((char*)arg0 + 0x190) = arg1;
    fn_800173B4((char*)arg0 + 0x236, arg0);
}

void fn_8003B8D4(void *arg0) {
    M2C_FIELD(arg0, u8 *, 4) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 4) >> 1);
    M2C_FIELD(arg0, u8 *, 5) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 5) >> 1);
    M2C_FIELD(arg0, u8 *, 6) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 6) >> 1);
    M2C_FIELD(arg0, u8 *, 7) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 7) >> 1);
    M2C_FIELD(arg0, u8 *, 8) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 8) >> 1);
    M2C_FIELD(arg0, u8 *, 9) = (u8) ((s8) M2C_FIELD(arg0, u8 *, 9) >> 1);
}

u8 fn_8003C114(void *arg0) {
    if (fn_80105BC0((char*)arg0 + 0x1BC, 0xA) != 0) {
        return 0x14U;
    }
    return *(u8*)((char*)arg0 + 0x19C);
}

void fn_8003C56C(void *arg0, s32 arg1) {
    s32 *fn_8000D354(s32);
    s32 *temp_r3;

    temp_r3 = fn_8000D354(arg1);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x244) = (s32) *temp_r3;
    }
}

void *fn_8000D354(s32);
void fn_8003C5EC(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = fn_8000D354(arg1);
    if (temp_r3 != NULL) {
        *(s32*)((char*)arg0 + 0x23C) = *(s32*)((char*)temp_r3 + 0x14);
        *(u8*)((char*)arg0 + 0x251) = 0;
    }
}

void fn_8003C634(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = fn_8000D354(arg1);
    if (temp_r3 != NULL) {
        *(s32*)((char*)arg0 + 0x238) = *(s32*)((char*)temp_r3 + 0x14);
        *(u8*)((char*)arg0 + 0x250) = 0;
    }
}

void fn_8003C67C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x238) = 0;
    M2C_FIELD(arg0, s32 *, 0x23C) = 0;
    M2C_FIELD(arg0, s32 *, 0x240) = 0;
    M2C_FIELD(arg0, s32 *, 0x244) = 0;
    M2C_FIELD(arg0, s8 *, 0x248) = 0;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0;
    M2C_FIELD(arg0, s8 *, 0x250) = 0;
    M2C_FIELD(arg0, s8 *, 0x251) = 0;
    M2C_FIELD(arg0, s32 *, 0x254) = 0;
    M2C_FIELD(arg0, s16 *, 0x258) = 0;
    M2C_FIELD(arg0, s16 *, 0x25A) = 0;
    M2C_FIELD(arg0, s32 *, 0x25C) = 0;
    M2C_FIELD(arg0, s8 *, 0x260) = 0x10;
}

s32 fn_8003C7D0(s32 arg0) {
    u8 fn_80105BC0(s32, M2C_UNK);
    if (fn_80105BC0(arg0 + 0x1BC, 6) != 0) {
        return 1;
    }
    return fn_80105BC0(arg0 + 0x1BC, 7) != 0;
}

u8 fn_8003CFF0(s32 arg0, s32 arg1) {
    s32 fn_80038128(s32, s32);
    s8 fn_8003A778(s32);
    s8 fn_8003AF28(s32);
    s8 fn_8003AFA0();
    s32 temp_r31_2;
    s32 var_r0;
    s8 temp_r30;
    s8 temp_r31;

    temp_r31 = fn_8003AFA0();
    temp_r31_2 = (temp_r31 - fn_8003A778(arg1)) * 5;
    temp_r30 = fn_8003AF28(arg0);
    var_r0 = (temp_r31_2 + temp_r30 + 0x1E) - ((fn_80038128(arg0, arg1) * 2) & 0x1FE);
    if (var_r0 > 0x64) {
        var_r0 = 0x64;
    }
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    return (u8) var_r0;
}

u8 fn_8003D094(s32 arg0, u8 arg1) {
    u8 var_r31;

    if (arg1 == 0) {
        return 0U;
    }
    var_r31 = arg1;
    if (fn_80105BC0(arg0 + 0x1BC, 0xB) != 0) {
        var_r31 *= 2;
    }
    if (fn_80105BC0(arg0 + 0x1BC, 0x4B) != 0) {
        var_r31 = (var_r31 * 7) / 10;
        if ((s32) var_r31 < 1) {
            var_r31 = 1;
        }
    }
    if ((s32) var_r31 > 0x64) {
        var_r31 = 0x64;
    }
    return var_r31;
}

void fn_8003D5FC(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, u8 *, 0x199) = arg1;
    }
}

void fn_8003D60C(void *arg0, s32 arg1) {
    M2C_UNK fn_800156A0(s32, void *);
    M2C_UNK fn_80015718(void *, void *, s32);
    M2C_UNK fn_800946F0(void *);
    extern M2C_UNK lbl_802CA264;
    s32 temp_r5;

    if (arg1 != 1) {
        if (arg1 < 1) {
            if (arg1 < 0) {

            } else {
                goto block_5;
            }
        } else if (arg1 < 4) {
block_5:
            fn_800946F0(arg0);
        }
    }
    fn_800156A0(M2C_FIELD(arg0, s32 *, 0x190), arg0);
    temp_r5 = arg1 * 0xC;
    fn_80015718(&lbl_802CA264 + temp_r5, arg0, temp_r5);
}

s32 fn_8003DC80(s32 arg0, s32 arg1) {
    s8 fn_8003AEB0(s32);
    s8 temp_r31;

    temp_r31 = fn_8003AEB0(arg1);
    return temp_r31 < fn_8003AEB0(arg0);
}

void fn_8003DCDC(void *arg0, void *arg1, s32 arg2, s8 *arg3, s8 *arg4) {
    u8 r9;
    u8 r0;
    u8 r8;
    u8 r3;

    r9 = *(u8 *) ((u8 *) arg1 + 0x19E);
    r0 = *(u8 *) ((u8 *) arg0 + 0x19E);
    r8 = *(u8 *) ((u8 *) arg0 + 0x19F);
    r3 = *(u8 *) ((u8 *) arg1 + 0x19F);

    *arg3 = (arg2 * (r0 - r9)) + r9;
    *arg4 = ((r3 - r8) * arg2) + r3;
}

void *fn_8003F1AC(s32 arg0) {
    extern u16 lbl_802CA264;
    return (void*)((char*)&lbl_802CA264 + (arg0 * 0x18));
}

u8 fn_8003F1C0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 8);
}

s32 fn_8003F1C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x190);
}

s32 fn_8003F1D0(s32 *arg0, s32 arg1) {
    return *arg0 & arg1;
}

void fn_8003F1DC(s32 *arg0, s32 arg1) {
    *arg0 |= arg1;
}

void fn_8003F1EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x194) = arg1;
}

void fn_8003F1F4(s32 *arg0, s32 arg1) {
    *arg0 &= ~arg1;
}

s32 fn_8003F204(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x194);
}

u8 fn_8003F20C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19E);
}

u8 fn_8003F214(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x19F);
}

s32 fn_8003F21C(s32 arg0) {
    return arg0 + 0x1A0;
}

void fn_8003FCCC(void) {
    void fn_8003F87C(s32);
    fn_8003F87C(0);
}

void fn_8003FFD8(void) {
    M2C_UNK fn_8003FFF8();
    fn_8003FFF8();
}

s32 fn_80040844(void) {
    extern u16 *lbl_803672AC;
    return (s32)lbl_803672AC;
}

void fn_8004084C(s32 arg0) {
    extern u16 *lbl_803672AC;
    lbl_803672AC = (u16 *)arg0;
}

u8 fn_80040B1C(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_r6;

    temp_r6 = M2C_FIELD(arg0, u8 *, 0x61);
    if (arg1 < (s32) temp_r6) {
        return 1U;
    }
    if (arg2 < (s32) temp_r6) {
        return 1U;
    }
    if (arg1 >= (s32) (M2C_FIELD(arg0, s16 *, 0) - temp_r6)) {
        return 1U;
    }
    return (u8) ((M2C_FIELD(arg0, s16 *, 2) - temp_r6) <= arg2);
}

s32 fn_800431E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

void fn_80043AC8(void *arg0) {
    M2C_UNK fn_80068550(s32);
    M2C_UNK fn_800C4588(void *);
    extern s32 lbl_803682A4;
    void *temp_r31;

    fn_80068550(M2C_FIELD(arg0, s32 *, 0x54));
    temp_r31 = M2C_FIELD(arg0, void **, 0x58);
    fn_800C4588(M2C_FIELD(temp_r31, void **, 0x114));
    M2C_FIELD(temp_r31, void **, 0x114) = NULL;
    fn_800C4588(temp_r31);
    lbl_803682A4 &= 0xFFFFFFF7;
}

f32 fn_80043DD8(void) {
    extern void *lbl_803672A8;
    return M2C_FIELD(lbl_803672A8, f32 *, 0x10) / M2C_FIELD(lbl_803672A8, f32 *, 8);
}

void fn_800462FC(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80060638(s32);
    M2C_UNK fn_80068558(s32, s32);
    s32 var_r30;
    s32 var_r31;

    var_r30 = 0;
    var_r31 = M2C_FIELD(arg0, s32 *, 0x10);
loop_2:
    if (var_r30 < (s16) M2C_FIELD(arg0, s16 *, 4)) {
        fn_80060638(var_r31 + 4);
        fn_80068558(arg1, arg2);
        var_r30 += 1;
        var_r31 += 0xC0;
        goto loop_2;
    }
}

void fn_80046400(void) {
    M2C_UNK fn_80046424(M2C_UNK);
    fn_80046424(0);
}

u8 fn_80047AF8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x61);
}

void fn_80048A3C(s8 arg0, s8 arg1, s8 arg2, void *arg3) {
    extern s8 lbl_8036728C;
    extern s8 lbl_8036728D;
    extern s8 lbl_8036728E;
    extern M2C_UNK lbl_80367290;
    lbl_8036728C = arg0;
    lbl_8036728D = arg1;
    lbl_8036728E = arg2;
    M2C_FIELD(&lbl_80367290, u8 *, 0) = (u8) M2C_FIELD(arg3, u8 *, 0);
    M2C_FIELD(&lbl_80367290, u8 *, 1) = (u8) M2C_FIELD(arg3, u8 *, 1);
    M2C_FIELD(&lbl_80367290, u8 *, 2) = (u8) M2C_FIELD(arg3, u8 *, 2);
    M2C_FIELD(&lbl_80367290, u8 *, 3) = (u8) M2C_FIELD(arg3, u8 *, 3);
}

void fn_80048A70(s8 arg0) {
    extern u8 lbl_80330708[];
    extern s8 lbl_80367289;
    s8 var_r3;

    var_r3 = arg0;
    if ((u8) lbl_80330708[0xA6] != 1) {
        var_r3 = 0;
    }
    lbl_80367289 = var_r3;
}

void fn_80049144(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1C);
    M2C_FIELD(arg0, u8 *, 0x3D) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1D);
    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1E);
    M2C_FIELD(arg0, u8 *, 0x3F) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1F);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_800494F0(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1C);
    M2C_FIELD(arg0, u8 *, 0x3D) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1D);
    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1E);
    M2C_FIELD(arg0, u8 *, 0x3F) = (u8) M2C_FIELD(temp_r5, u8 *, 0x1F);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_8004982C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x48);
}

void fn_80049A98(void *arg0) {
    M2C_UNK fn_8004AE28(s32 *, f32, f32, f32);
    u8 fn_8005F9B8(M2C_UNK);
    M2C_UNK fn_80060060(s32 *);
    fn_80060060(M2C_FIELD(arg0, s32 **, 0x34));
    if (*M2C_FIELD(arg0, s32 **, 0x34) & 0x10) {
        fn_8000C188(arg0);
        return;
    }
    if (fn_8005F9B8(8) != 0) {
        M2C_FIELD(arg0, s8 *, 0x48) = 1;
        fn_8000C188(arg0);
        return;
    }
    fn_8004AE28(M2C_FIELD(arg0, s32 **, 0x34), M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x40));
}

void fn_80049C30(void) {
}

void fn_80049C8C(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & 0xFE);
        return;
    }
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 1);
}

void fn_80049CB4(s32 arg0, void *arg1) {
    M2C_UNK fn_8005F7B0(s32, u8);
    M2C_UNK fn_8005F7E0(s32, u8, u8, u8);
    s32 temp_r31;

    temp_r31 = arg0 + 0x14;
    fn_8005F7E0(temp_r31, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1), M2C_FIELD(arg1, u8 *, 2));
    fn_8005F7B0(temp_r31, M2C_FIELD(arg1, u8 *, 3));
}

void fn_80049D08(s32 arg0) {
    extern f32 lbl_80368F2C;
    M2C_UNK fn_8005FEE8(s32, f32);
    
    s32 temp_r3 = arg0 + 0x14;
    fn_8005FEE8(temp_r3, lbl_80368F2C);
}

s32 fn_80049D58(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 2) & 3) == 0;
}

s32 fn_80049D6C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 2) & 3) != 0;
}

s32 fn_80049D84(void *arg0) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u32 *, 0xBC);
    if (temp_r3 & 0x400) {
        return 0;
    }
    return (temp_r3 >> 9U) & 1;
}

M2C_UNK *fn_80049DA4(s32 arg0, u32 arg1, u32 arg2) {
    M2C_UNK fn_802343E0(M2C_UNK *, u32);
    M2C_UNK fn_80234450(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_802EFE20;
    fn_80234450(&lbl_802EFE20, arg0, &lbl_802EFE20);
    fn_802343E0(&lbl_802EFE20, arg1);
    if (arg2 != 0U) {
        fn_802343E0(&lbl_802EFE20, arg2);
    }
    return &lbl_802EFE20;
}

s32 fn_80049E1C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void fn_8004A1F0(void) {
    extern u32* lbl_80285858;
    extern u16 lbl_80367110;
    fn_8000BF00(lbl_80285858);
    lbl_80367110 &= 0xFBFF;
}

void fn_8004A224(void) {
    void *fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80285858;
    extern s32 lbl_80367110;
    M2C_FIELD(fn_8000CAF0(&lbl_80285858, 4), s32 *, 0x30) = 0;
    lbl_80367110 |= 0x400;
}

s32 fn_8004AF30(u16 arg0) {
    u16 temp_r3 = arg0;
    if (temp_r3 == 0xFFFF) {
        return 0;
    }
    if (temp_r3 < 0x3E8) {
        return 0;
    }
    return fn_80146B10();
}

s32 fn_8004AF74(s32 arg0, s32 arg1) {
    u8 temp_r3;

    temp_r3 = *(u8 *)(arg0 + arg1 + 0xC);
    if ((temp_r3 >> 6) == 0) {
        s32 var_r0 = (temp_r3 << 0x1A);
        s32 var_r3_2 = temp_r3 >> 0x1F;
        if ((((var_r0 - var_r3_2) + var_r3_2) & 0xFFFFFFFC) < 0x20) {
            return 1;
        }
    }
    return 0;
}

s32 fn_8004AFB4(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 0x10) & (1 << arg1)) != 0;
}

void *fn_8004B0C8(void *arg0) {
    void fn_80231D94(void *, void *, void *, s32, void *);
    extern void *lbl_8026A9B0;
    extern void *lbl_802EFFC8;
    
    char *ptr1 = (char *)&lbl_8026A9B0 + 0xBC;
    char *ptr2 = (char *)&lbl_8026A9B0 + 0xA8;
    fn_80231D94(&lbl_802EFFC8, ptr1, ptr2, *(s32 *)((char *)arg0 + 4), &lbl_802EFFC8);
    
    return &lbl_802EFFC8;
}

s32 fn_8004B1A0(s32 arg0) {
    extern M2C_UNK lbl_802858C4;
    s32* ptr = &lbl_802858C4;
    return ptr[arg0];
}

void fn_8004BCCC(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A5C4(s32, u16);
    M2C_UNK fn_8017A5EC(s32, M2C_UNK);
    fn_8017A5C4(arg1, (u16) M2C_FIELD(arg0, s16 *, 0x15C));
    fn_8017A5EC(arg1, 0);
    fn_8017A5EC(arg1, 0);
}

s32 fn_8004BF80(s32 arg0, s32 arg1) {
    if (arg0 < 0) {
        arg0 = -arg0;
    }
    if (arg1 < 0) {
        arg1 = -arg1;
    }
    return (arg0 >= arg1) ? (arg0 - arg1) : (arg1 - arg0);
}

u8 fn_8004C00C(void *arg0) {
    extern f32 lbl_80368FC4;
    if ((lbl_80368FC4 + (f32) (s8) M2C_FIELD(arg0, u8 *, 0x19E)) != (M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0x10))) {
        return 1U;
    }
    return (u8) ((lbl_80368FC4 + (f32) (s8) M2C_FIELD((unsigned short)arg0, u8 *, 0x19F)) != (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg0, f32 *, 0x14)));
}

void fn_8004C0A0(void *arg0) {
    M2C_UNK fn_80040B1C(s32, s32);
    fn_80040844();
    fn_80040B1C((s32) M2C_FIELD(arg0, f32 *, 4), (s32) M2C_FIELD(arg0, f32 *, 8));
}

s32 fn_8004C0F0(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 3) & 2) != 0;
}

void fn_8004D370(void) {
    M2C_UNK fn_80067708(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
    extern M2C_UNK fn_8004C80C;
    fn_80067708(2, 1, &fn_8004C80C, 0);
}

void fn_8004DC54(s8 arg0) {
    extern u8 lbl_803672BC;
    lbl_803672BC = arg0;
}

void fn_8004DC5C(void) {
    extern void fn_80067708(s32, void *, s32);
    extern char fn_8004DC8C[];
    fn_80067708(1, &fn_8004DC8C[0], 0);
}

void fn_8004DE78(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void fn_8004DF04(void) {
    extern s16 lbl_803672C4;
    extern s16 lbl_803672C6;
    extern s16 lbl_803672C8;
    extern s16 lbl_803672CA;
    lbl_803672C4 = 0x3E8;
    lbl_803672C6 = 0x3E8;
    lbl_803672C8 = -0x3E8;
    lbl_803672CA = -0x3E8;
}

void fn_8004DF20(void *arg0) {
    u8 temp_r4;

    temp_r4 = ((u8*)arg0)[3];
    if ((temp_r4 & 2) && !(temp_r4 & 8)) {
        fn_80060060((char*)arg0 + 0x1C);
    }
}

s32 fn_8004FA88(void *arg0) {
    s32 *temp_r3 = (s32 *) arg0;
    if (temp_r3[0] == 0x1000) {
        return 0x5C;
    }
    if (temp_r3[0] == 0x4B03) {
        if (*((u8 *) temp_r3 + 0x4) != 0) {
            return 0x60;
        }
    } else {
        if (temp_r3[0] == 0x4B07) {
            return 0x5E;
        }
    }

    return 0x5A;
}

void fn_8004FE58(void *arg0) {
    extern f32 lbl_80368FCC;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s16 *, 0x15C) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 0x16E) = -1;
    M2C_FIELD(arg0, s8 *, 0x16D) = -1;
    M2C_FIELD(arg0, s8 *, 0x16C) = -1;
    M2C_FIELD(arg0, f32 *, 0x170) = (f32) lbl_80368FCC;
    M2C_FIELD(arg0, f32 *, 0x174) = (f32) lbl_80368FCC;
    M2C_FIELD(arg0, f32 *, 0x178) = (f32) lbl_80368FCC;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0;
}

void fn_8004FE90(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 2) = arg1;
}

void fn_800504FC(void *arg0) {
    s32 fn_8004B1A0(s32);
    
    s32 temp_r3 = fn_8004B1A0(0);
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x280) = temp_r3;
        M2C_FIELD(arg0, s32 *, 0x284) = fn_8004B1A0(1);
        M2C_FIELD(arg0, s32 *, 0x288) = fn_8004B1A0(2);
        M2C_FIELD(arg0, s32 *, 0x28C) = fn_8004B1A0(3);
    }
}

void fn_80050BA8(s32 arg0) {
    M2C_UNK fn_8005F788(s32);
    fn_8005F788(arg0 + 0x1C);
}

void fn_80050BCC(s32 arg0, u8 arg1) {
    fn_8005F7B0(arg0 + 0x1C, arg1);
}

void fn_80050C50(void *arg0, f32 farg0, f32 farg1) {
    f32 fn_80023430(M2C_UNK *);
    extern M2C_UNK lbl_802CA518;
    M2C_FIELD(arg0, f32 *, 4) = farg0;
    M2C_FIELD(arg0, f32 *, 8) = farg1;
    M2C_FIELD(arg0, f32 *, 0xC) = fn_80023430(&lbl_802CA518);
}

void fn_80051538(s32 *arg0) {
    M2C_UNK fn_80051564(s32 *);
    s32 sp8;

    sp8 = *arg0;
    fn_80051564(&sp8);
}

void fn_80052B44(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_80052B54(void *arg0) {
    void **temp_r31;
    void *temp_r30;
    
    if (arg0 == 0) {
        return;
    }
    temp_r31 = (void **)((char *)arg0 + 0x30);
    if (*temp_r31 == 0) {
        return;
    }
    temp_r30 = *(void **)((char *)arg0 + 0x34);
    *(s32 *)((char *)temp_r30 + 0x30) = 0x0;
    
    *(f32 *)((char *)*temp_r31 + 0xc) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x10) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x14) = *(f32 *)0x80369084;
    *(s16 *)((char *)*temp_r31 + 0x0) = 0x0;
    *(s8 *)((char *)*temp_r31 + 0x3) = -0x1;
    *(s8 *)((char *)*temp_r31 + 0x4) = -0x1;
    *(s32 *)((char *)*temp_r31 + 0x30) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x34) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x3c) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x40) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x44) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x8) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x5c) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x48) = 0x0;
    
    *(s32 *)((char *)arg0 + 0x8) = *(s32 *)0x80369080;
    *(s8 *)((char *)arg0 + 0x8) = *(s8 *)((char *)arg0 + 0x8);
    *(s8 *)((char *)arg0 + 0x9) = *(s8 *)((char *)arg0 + 0x9);
    *(s8 *)((char *)arg0 + 0x38) = *(s8 *)((char *)arg0 + 0x8);
    *(s8 *)((char *)arg0 + 0xa) = *(s8 *)((char *)arg0 + 0xa);
    *(s8 *)((char *)arg0 + 0x39) = *(s8 *)((char *)arg0 + 0x9);
    *(s8 *)((char *)arg0 + 0xb) = *(s8 *)((char *)arg0 + 0xb);
    *(s8 *)((char *)arg0 + 0x3a) = *(s8 *)((char *)arg0 + 0xa);
    *(s8 *)((char *)arg0 + 0x3b) = *(s8 *)((char *)arg0 + 0xb);
    
    *(s32 *)((char *)*temp_r31 + 0x2c) = 0x0;
    *(f32 *)((char *)*temp_r31 + 0x20) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x24) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x28) = *(f32 *)0x80369084;
    *(f32 *)((char *)*temp_r31 + 0x1c) = *(f32 *)0x80369088;
    *(f32 *)((char *)*temp_r31 + 0x18) = *(f32 *)0x8036908C;
    *(s8 *)((char *)*temp_r31 + 0x5) = 0x3;
    *(s32 *)((char *)*temp_r31 + 0x4c) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x50) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x54) = 0x0;
    *(s32 *)((char *)*temp_r31 + 0x58) = 0x0;
    
    *(s32 *)((char *)*temp_r31 + 0x8) |= 0x800;
    *(s32 *)((char *)*temp_r31 + 0x8) |= 0x2000;
}

void fn_80052F90(void *arg0) {
    extern f32 lbl_80369084;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_80369084;
}

s32 fn_80052F9C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x2C), u8 *, 4) & 3;
}

void fn_80053658(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 0x30 + (arg1 << 2)) = arg2;
}

void fn_80053680(void *arg0, void *arg1) {
    extern f32 lbl_8036909C;
    f32 *ptr0 = (f32*)M2C_FIELD(arg0, void **, 0x30);
    ptr0[3] = M2C_FIELD(arg1, f32 *, 4);
    ptr0[4] = M2C_FIELD(arg1, f32 *, 8);
    ptr0[5] = lbl_8036909C + M2C_FIELD(arg1, f32 *, 12);
}

void fn_800536B0(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0xC) = farg0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x10) = farg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x14) = farg2;
}

void fn_800536CC(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x34) = arg1;
}

void fn_800536D8(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x30) = arg1;
}

void fn_800536E4(void *arg0, void *arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) == (u32) M2C_FIELD(arg1, u32 *, 0)) {
        M2C_FIELD(arg1, void **, 4) = arg0;
    }
}

void fn_80053750(void *arg0, void *arg1) {
    if ((u16) M2C_FIELD(arg1, u16 *, 0) == (u16) *M2C_FIELD(arg0, u16 **, 0x30)) {
        M2C_FIELD(arg1, void **, 4) = arg0;
    }
}

void fn_80053D84(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r3, s32 *, 8) = (s32) (M2C_FIELD(temp_r3, s32 *, 8) | 0x80000000);
}

void fn_80054314(void *arg0) {
    u8 fn_8000A268();
    M2C_UNK fn_80069F04(void *);
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 0xB);
    if ((u8) ((temp_r31 * fn_8000A268()) / 255) != 0) {
        fn_8005F7B0(arg0);
        fn_80069F04(arg0);
        fn_8005F7B0(arg0, temp_r31);
    }
}

void fn_80054808(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    u8 fn_80055248(s32);
    if (fn_80055248(*M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 **, 0x2C)) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_80055B64(s32 arg0) {
    M2C_UNK fn_800056CC(void *);
    u32 fn_8000C0C0(M2C_UNK *);
    void *fn_8000CAF0(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_801451BC();
    u8 fn_80145308();
    extern M2C_UNK lbl_8026AC0C;
    extern M2C_UNK lbl_80285968;
    extern M2C_UNK lbl_80285990;
    if ((arg0 == 0) && (fn_8000C0C0(&lbl_80285990) == 0U) && (fn_80145308() == 0)) {
        fn_801451BC();
        fn_800056CC(&lbl_8026AC0C + 0x12E);
        return;
    }
    M2C_FIELD(fn_8000CAF0(&lbl_80285968, 4), s32 *, 0x60) = arg0;
}

void fn_80055C34(void *arg0) {
    M2C_UNK fn_8000C070(M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) >= 0) {
        fn_8000C070(0);
    }
}

extern u16 *lbl_803672AC;
#include "common.h"

extern u16 lbl_8026A660;
extern u8 lbl_802CA518[];
