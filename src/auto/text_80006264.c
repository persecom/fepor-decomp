/* Functions from 0x80006264 to 0x80011968, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_802AEE20[5]; // array of 5 pointers
extern f64 lbl_80368C28;    // global float constant

void fn_80006298(s32 arg0, s32 arg1, u32 arg2) {
    s32 *var_r3;
    u32 var_ctr;

    var_r3 = (s32*)((char*)arg0 - 4);
    var_ctr = arg2 >> 2U;
    do {
        var_r3++;
        *var_r3 = arg1;
        var_ctr--;
    } while (var_ctr != 0);
}

s32 fn_800067B4(void) {
    extern s32 lbl_80367118;
    return lbl_80367118;
}

void fn_80007884(void *arg0, u32 arg1) {
    *(void**)0x80367140 = arg0;
    *(u16*)(0x80367140 + 0x28) = (u16)arg1;
}

void fn_80009B80(s8 arg0) {
    extern void *lbl_80367140;
    M2C_FIELD(lbl_80367140, s8 *, 0x24) = arg0;
}

extern u16 lbl_80367140;
void fn_80009B8C(s8 arg0) {
    s8 temp = arg0;
    lbl_80367140 = (u16)temp;
}

void fn_80009BF4(f32 farg0) {
    *(f32*)((char*)lbl_80367140 + 0x28) = farg0;
}

f32 fn_80009C00(void) {
    return *(f32*)((char*)&lbl_80367140 + 0x28);
}

void fn_80009C0C(f32 farg0) {
    f32 *ptr = (f32 *)lbl_80367140;
    *ptr = *ptr + farg0;
}

void fn_8000A248(void) {
    lbl_80367140 = 2;
}

u16 fn_8000A258(u16 arg0, u16 arg1) {
    u16 *var_r3;
    var_r3 = &lbl_80367140;
    *var_r3 = arg0;
    return arg1;
}

u8 fn_8000A268(void) {
    return *(u8*)((u8*)lbl_80367140 + 0xA9);
}

void fn_8000A274(s8 arg0) {
    *(u16*)(&lbl_80367140) = (u16)arg0;
}

void fn_8000A280(void) {

}

void fn_8000A3F8(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) (M2C_FIELD(arg0, u8 *, 0x2E) - 1);
}

void fn_8000A408(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) (M2C_FIELD(arg0, u8 *, 0x2E) + 1);
}

u8 fn_8000A418(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2E);
}

void fn_8000A420(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) (M2C_FIELD(arg0, u8 *, 0x2D) - 1);
}

void fn_8000A430(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2D) = (u8) (M2C_FIELD(arg0, u8 *, 0x2D) + 1);
}

void fn_8000A440(s32 arg0, s32 arg1) {
    extern u16 lbl_802ADAFC[9]; // 36 bytes / 2 bytes per element
    lbl_802ADAFC[arg0 * 2] = (u16)arg1;
}

s32 fn_8000A930(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 0x10);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000ACA0(void *arg0) {
    u8 temp_r4;
    void *temp_r5;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r4 & 2) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (temp_r4 & 0xFFFFFFFD);
        temp_r5 = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(temp_r5, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_r5, u8 *, 0x2D) - 1);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000ACD8(void) {
    return 0;
}

s32 fn_8000ADA0(void *arg0) {
    s32 fn_8000BF00(s32);
    s32 *ptr = (s32 *) *(s32 **)((s32 *)arg0 + 1) + 1;
    fn_8000BF00(*ptr);
    *(s32 **)((s32 *)arg0 + 1) = ptr + 2;
    return 1;
}

s32 fn_8000AEB4(void *arg0) {
    s32 fn_8000CAF0(s32, s16);
    s32 temp_r3 = ((s32 *) arg0)[1];
    fn_8000CAF0(((s32 *) temp_r3)[1], (s16) (((u32) ((s32 *) temp_r3)[0]) >> 16));
    ((s32 **) arg0)[1] = (s32 *) ((s32 *) arg0)[1] + 2;
    return 1;
}

s32 fn_8000AF04(void *arg0) {
    s32 fn_8000CAA0(s32, void *);
    void **temp_r3 = (void **)((s32 *)arg0)[1];
    fn_8000CAA0(((s32 *) temp_r3)[1], arg0);
    ((s32 **) arg0)[1] = (s32 *) ((s32 *) arg0)[1] + 2;
    return 0;
}

s32 fn_8000AF94(void *arg0) {
    u32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 **, 4);
    M2C_FIELD(arg0, u32 **, 4) = (u32 *) ((unsigned)temp_r4 + 4);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) ((u32) *temp_r4 >> 0x10U);
    return 1;
}

s32 fn_8000B37C(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4);
    M2C_FIELD(arg0, void **, 0) = temp_r4;
    M2C_FIELD(arg0, void **, 4) = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return 1;
}

void fn_8000B4D0(void) {

}

s32 fn_8000B4D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000B76C(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8000B7EC(void *arg0) {
    u32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 **, 4);
    M2C_FIELD(arg0, u32 **, 4) = (u32 *) ((s32)temp_r4 + 4);
    M2C_FIELD(arg0, s8 *, 0x2B) = (s8) ((u32) *temp_r4 >> 0x10U);
    return 1;
}

s32 fn_8000B80C(void *arg0) {
    u32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 **, 4);
    M2C_FIELD(arg0, u32 **, 4) = (u32 *) ((u32)temp_r4 + 4);
    M2C_FIELD(arg0, s8 *, 0x2A) = (s8) ((u32) *temp_r4 >> 0x10U);
    return 1;
}

s32 fn_8000B82C(void) {
    M2C_UNK fn_8000C60C();
    fn_8000C60C();
    return 0;
}

void *fn_8000B908(u8 arg0) {
    extern u16 lbl_802A66D8[];
    return &lbl_802A66D8[arg0 * 0xE0];
}

void fn_8000C060(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

void fn_8000C068(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

void fn_8000C188(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void fn_8000C52C(s32 arg0) {
    extern s32 *lbl_80367148;
    s32 *temp_r4;

    temp_r4 = lbl_80367148 - 1;
    lbl_80367148 = temp_r4;
    *temp_r4 = arg0;
}

void fn_8000C5B8(void *arg0) {
    u8 temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x2C);
    if (temp_r4 & 2) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (temp_r4 & 0xFFFFFFFD);
        temp_r4_2 = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(temp_r4_2, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_r4_2, u8 *, 0x2D) - 1);
    }
}

void fn_8000C5E0(void *arg0) {
    void *temp_r4;

    if ((void *) M2C_FIELD(arg0, void **, 0x18) != NULL) {
        M2C_FIELD(arg0, u8 *, 0x2C) = (u8) (M2C_FIELD(arg0, u8 *, 0x2C) | 2);
        temp_r4 = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(temp_r4, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_r4, u8 *, 0x2D) + 1);
    }
}

void *fn_8000CAA0(void) {
    void *fn_8000CAF0();
    void *temp_r3;
    void *temp_r5;

    temp_r3 = fn_8000CAF0();
    if ((u32) M2C_FIELD(temp_r3, u32 *, 0) == 0U) {
        return NULL;
    }
    M2C_FIELD(temp_r3, u8 *, 0x2C) = (u8) (M2C_FIELD(temp_r3, u8 *, 0x2C) | 2);
    temp_r5 = M2C_FIELD(temp_r3, void **, 0x18);
    M2C_FIELD(temp_r5, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_r5, u8 *, 0x2D) + 1);
    return temp_r3;
}

extern void *fn_8000A738(void *, s32);
extern void fn_8000B5F0(void *);
extern void fn_8000B70C(void *);
void fn_8000CC88(void *arg0) {
    *(u32*)((char*)arg0 + 0x44) = 1;
    fn_8000A738(arg0, 4);
    fn_8000B5F0(arg0);
    fn_8000B70C(arg0);
}

void fn_8000CD80(s32 arg0) {
    extern s32 lbl_80367158;
    lbl_80367158 = arg0;
}

s32 fn_8000D2BC(u8 *arg0) {
    extern void *lbl_802ADB20;
    s32 temp_r6;
    u32 temp_r5;
    u8 temp_r7;
    void *temp_r3;
    s32 var_r4;

    if (arg0 == NULL) {
        return 0;
    }
    
    temp_r6 = 0;
    temp_r5 = 0;
    
loop_4:
    temp_r7 = *arg0;
    if ((s8) temp_r7 != 0) {
        arg0 += 1;
        temp_r6 = (s8) temp_r7 + (temp_r6 * 0x25);
        temp_r5 = (s8) temp_r7 + (temp_r5 * 0x1F);
        goto loop_4; 
    }
    
    temp_r3 = (void *) ((s32 *) lbl_802ADB20 + ((temp_r6 % 509) * 4));
loop_9:
    if (temp_r3 == NULL) {
        return 0;
    }
    if (temp_r5 == (u32) M2C_FIELD(temp_r3, u32 *, 4)) {
        return M2C_FIELD(temp_r3, s32 *, 0xC);
    }
    temp_r3 = M2C_FIELD(temp_r3, void **, 0);
    goto loop_9;
}

void fn_80010FF0(void) {
    M2C_UNK fn_801047D0();
    fn_801047D0();
}

s32 fn_800113B4(void) {
    return 0;
}

s32 fn_800113BC(void) {
    return 0;
}

void fn_8001185C(void) {
    M2C_UNK fn_80223A5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AA0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AE4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223B4C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
    fn_80223A5C(0, 0xF, 0xF, 0xF, 0xA);
    fn_80223AE4(0, 0, 0, 0, 1, 0);
    fn_80223AA0(0, 7, 4, 5, 7);
    fn_80223B4C(0, 0, 0, 0, 1, 0);
    fn_80223F2C(0, 0, 0, 4);
}

void fn_80011910(void) {
    M2C_UNK fn_802201A8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802239D0(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802201A8(0, 1, 4, 0x21, 0, 0x7D);
    fn_802239D0(0, 0);
    fn_80223F2C(0, 0, 1, 4);
}
#include "common.h"
extern u16 lbl_80367140;
extern u16 lbl_80367140;
extern u16 lbl_80367140;
extern u16 lbl_80367120;
extern u16 lbl_80367128;
extern u16 lbl_80367124;
extern u16 lbl_8036712C;
