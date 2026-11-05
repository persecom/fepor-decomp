/* Functions from 0x8014E3A0 to 0x801620BC, found by decomp-toolkit. */
#include "common.h"

s32 fn_8014E3A0(void) {
    return 0;
}

s32 fn_8014E3A8(void) {
    return 0x260;
}

s32 fn_8014E3C0(void) {
    return 9;
}

s32 fn_8014E414(void) {
    return 0;
}

extern u16 lbl_80367B7C;
extern u32 lbl_80367B78;
extern u8 lbl_80277238[];
extern u32 lbl_80367B70;
void *fn_8014E41C(void *arg1) {
    u16 temp_r0 = lbl_80367B7C;
    u8 temp_r4 = *(u8*)((char*)arg1 + 0x3A);
    u32 temp_r5;
    
    temp_r5 = (temp_r0 * 0x18) + temp_r4;
    if (temp_r5 >= lbl_80367B78) {
        return (void*)(lbl_80277238 + 0x85);
    }
    return *(void**)(lbl_80367B70 + (temp_r5 * 4));
}

void fn_8014E7F8(void *arg0) {
    M2C_UNK fn_8014E864();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        fn_8014E864();
    }
}

s32 fn_801512D8(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367BA0;
    fn_800D758C(lbl_80367BA0);
    return 0;
}

void fn_801513A0(void *arg0) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800C9B6C(M2C_UNK *);
    M2C_UNK fn_800DC518(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK sp8;

    fn_800C9B6C(&sp8);
    fn_800DC518(M2C_FIELD(arg0, s32 *, 0x424), &sp8, 0);
    fn_800C9A60(&sp8, -1);
}

void fn_801515AC(void) {
    extern s32 lbl_80367BA8;
    lbl_80367BA8 = 0;
}

s32 fn_801515B8(void *arg0) {
    void **temp_r4;
    void *temp_r3;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void ***, 0x4C);
    temp_r3 = *temp_r4;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x10), M2C_UNK (**)(void *, void **), 0x28)(temp_r3, temp_r4);
    return 0;
}

s32 fn_801515F4(void *arg0) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x4C), s8 *, 0xC4) = 1;
    return 0;
}

u8 fn_801517C0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xC4);
}

void fn_801517C8(void *arg0) {
    M2C_UNK fn_800535B0();
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
        fn_800535B0();
    }
}

void fn_80151894(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, void **, 0xB0);
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x30);
        M2C_FIELD(temp_r3_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 8) | 2);
    }
}

void fn_801518B4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

s32 fn_801518D0(void *arg0, s32 arg1) {
    void *fn_800536FC(u16);
    s32 fn_8005F9B8(s32);
    void *temp_r3;

    M2C_FIELD(arg0, void **, 0xB0) = fn_800536FC((u16) M2C_FIELD(arg0, s32 *, 0xAC));
    temp_r3 = M2C_FIELD(arg0, void **, 0xB0);
    if (temp_r3 != NULL) {
        if ((u32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), u32 *, 0x5C) != 0U) {
            return fn_8005F9B8(arg1);
        }
        return 0;
    }
    return 0;
}

s32 fn_801519C0(void *arg0) {
    void **r4;

    r4 = (void **)M2C_FIELD(arg0, void **, 0xB0);
    if (r4 == NULL) {
        return 0;
    }
    r4 = (void **)M2C_FIELD(r4, void **, 0x30);
    if (r4 == NULL) {
        return 0;
    }
    r4 = (void **)M2C_FIELD(r4, void **, 0x5C);
    if (r4 == NULL) {
        return 0;
    }
    r4 = (void **)M2C_FIELD(r4, void **, 0x44);
    if (r4 == NULL) {
        return 0;
    }
    return M2C_FIELD(r4, s32 *, 0x18);
}

extern s32 lbl_803680C8;
extern void *lbl_80330D18;
extern void *lbl_80367BE8;
void fn_80152A18(s16 arg0, s16 arg1, s32 arg2) {
    s32 temp_r0 = *(s16*)((char*)lbl_80367BE8 + 0x4) - *(s16*)((char*)lbl_80367BE8 + 0x0);
    s32 temp_r0_2 = *(s16*)((char*)lbl_80367BE8 + 0x6) - *(s16*)((char*)lbl_80367BE8 + 0x2);

    if ((temp_r0 != 0) && (temp_r0_2 != 0)) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg2 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) arg0, (f32) arg1, (f32) *(s16*)((char*)lbl_80367BE8 + 0x0),
                    (f32) *(s16*)((char*)lbl_80367BE8 + 0x2),
                    (f32) temp_r0, (f32) temp_r0_2);
        fn_80007884();
    }
}

void fn_80154BE4(void) {
    M2C_UNK fn_8015C674();
    fn_8015C674();
}

s32 fn_8015512C(s32 arg0, s32 arg1) {
    s32 temp;
    
    if (arg0 == 0 || arg1 == 0) {
        return 0;
    }
    
    temp = arg0 * arg1;
    
    return temp;
}

void fn_8015BA88(void) {
    M2C_UNK fn_8015FC7C();
    fn_8015FC7C();
}

void fn_80161F7C(void) {
    M2C_UNK fn_8006EDA0(M2C_UNK *);
    extern M2C_UNK lbl_803680C8;
    extern M2C_UNK lbl_803680CC;
    extern s32 lbl_803680D0;
    s32 temp_r0;

    temp_r0 = lbl_803680D0 - 1;
    lbl_803680D0 = temp_r0;
    if (temp_r0 == 0) {
        fn_8006EDA0(&lbl_803680C8);
        fn_8006EDA0(&lbl_803680CC);
    }
}

u8 fn_80161FB8(void) {
    extern u16 lbl_80293AD8[];
    s32 var_r31;

    var_r31 = 0;
    if ((fn_8005BA10((s32)lbl_80293AD8[1]) != 0) && (fn_8005BA10((s32)lbl_80293AD8[2]) != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

void fn_80162018(void) {
    extern u32 lbl_80293AD8[];
    fn_8005C8B4(lbl_80293AD8[2]);
    fn_8005C8B4(lbl_80293AD8[3]);
}

void fn_80162054(void) {
    extern u32 lbl_80293AD8[];
    
    fn_8005C8B4(lbl_80293AD8[2]);
    fn_8005C8B4(lbl_80293AD8[3]);
}

s32 fn_801620AC(void) {
    extern char lbl_80293B10[];
    return *(s32*)((u8*)lbl_80293B10 + 4);
}

