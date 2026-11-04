/* Functions from 0x80127E94 to 0x8012C368, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_8036A3C0;
extern f32 lbl_8036A3C4;
extern f32 lbl_8036A3C8;

void fn_80128160(s32 arg0, s32 arg1, f32 *arg2) {
    f32 temp_f4;
    f32 temp_f5;
    
    if (arg1 < 1) {
        arg1 = 1;
    }
    
    // Load from the array at arg2 + arg1, then subtract arg2[0]
    temp_f4 = *(f32*)((u8*)arg2 + (arg1 << 2)); // arg2[arg1]
    temp_f5 = *arg2; // arg2[0]

    // Use temp_f4 and temp_f5 as necessary
    *(f32*)((u8*)arg2 + (arg1 << 2)) = temp_f5;
    *(f32*)((u8*)arg2 + 0x0) = temp_f4; 
}

void fn_801285C4(void *arg0) {
    f32 fn_801099A0(s32, M2C_UNK);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x30) = fn_801099A0(temp_r31, 0);
    M2C_FIELD(arg0, f32 *, 0x34) = fn_801099A0(temp_r31, 1);
}

void fn_801286F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) & ~arg1);
}

void fn_80128708(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 8) = arg1;
}

s32 fn_80128710(void) {
    return 0;
}

s32 fn_801287B8(void) {
    return 0;
}

void fn_8012955C(void) {
    M2C_UNK fn_800558D8(void *);
    extern M2C_UNK lbl_80275740;
    fn_800558D8(&lbl_80275740 + 0x15B);
}

void fn_80129588(s32 arg0, u32 arg1) {
    void *fn_8000CAA0(M2C_UNK *);
    void *fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80290BD0;
    void *var_r3;

    if (arg1 != 0U) {
        var_r3 = fn_8000CAA0(&lbl_80290BD0);
    } else {
        var_r3 = fn_8000CAF0(&lbl_80290BD0, 3);
    }
    M2C_FIELD(var_r3, s32 *, 0x30) = arg0;
}

void fn_801295DC(void *arg0) {
    u8 fn_80040824();
    M2C_UNK fn_80049B1C(s32, M2C_UNK);
    if (fn_80040824() != 0) {
        fn_80049B1C(M2C_FIELD(arg0, s32 *, 0x30), 1);
    }
}

void fn_8012975C(void *arg0) {
    u8 fn_80040824();
    M2C_UNK fn_80049B78(s32, M2C_UNK);
    if (fn_80040824() != 0) {
        fn_80049B78(M2C_FIELD(arg0, s32 *, 0x30), 1);
    }
}

void fn_80129888(void *arg0) {
    u8 fn_80040824();
    M2C_UNK fn_80049B78(s32, M2C_UNK);
    s32 temp_r31;

    if (fn_80040824() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
        fn_80049B78(temp_r31, 1);
    }
}

void fn_80129F68(void *arg0) {
    M2C_UNK fn_80049174(s32, void *, s32 *, M2C_UNK);
    extern s32 lbl_8036A40C;
    s32 sp8;

    sp8 = lbl_8036A40C;
    fn_80049174(*M2C_FIELD(arg0, s32 **, 0x30), arg0, &sp8, 0xA);
}

void fn_8012A240(void) {
    M2C_UNK fn_8012A530();
    fn_8012A530();
}

void fn_8012B458(void *arg0) {
    M2C_UNK fn_8000C60C(s32);
    extern s32 lbl_80367110;
    if (lbl_80367110 & 1) {
        fn_8000C60C(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

