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

s32 fn_8007C5E4(void) {
    return 0;
}

void *fn_8007C64C(void) {
    extern u16 lbl_8026C640[];
    return (u8 *)lbl_8026C640 + 0x144;
}

s32 fn_8007C65C(void) {
    extern void *lbl_80367488;
    void *temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367488, void **, 0x54);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x36) = 7;
    }
    return 0;
}

void *fn_8007C67C(void) {
    extern u16 lbl_8026C640[];
    return (u8 *)lbl_8026C640 + 0x14F;
}

s32 fn_8007C68C(void) {
    return 0;
}

void *fn_8007C6AC(void) {
    extern u16 lbl_8026C640[];
    return (u8 *)lbl_8026C640 + 0x15a;
}

void *fn_8007C6DC(void) {
    extern u16 lbl_8026C640[];
    return &lbl_8026C640[0x2d2];
}

void *fn_8007C70C(void) {
    extern u16 lbl_8026C640[];
    return &lbl_8026C640[0x5e8];
}

s32 fn_8007C71C(void) {
    return 0;
}

void *fn_8007C73C(void) {
    extern u16 lbl_8026C640[];
    return &lbl_8026C640[0x312];
}

s32 fn_8007C74C(void) {
    return 0;
}

extern void* lbl_80367488;
extern s32 lbl_803693C0;
extern s32 lbl_803693C4;
extern f64 lbl_803693C8;
extern f32 lbl_803693D4;
extern f32 lbl_803693D8;
extern f32 lbl_803693E4;
void fn_8007C968(void *arg1, void *arg2) {
    s32 sp8;
    s32 spC;
    s32 var_r30;

    var_r30 = 0;
    sp8 = lbl_803693C0;
    spC = lbl_803693C4;
    if (*(u16*)((u8*)lbl_80367488 + 0x46) & 2) {
        var_r30 = 1;
    }
    fn_8000A258();
    fn_80009D74((f32)(*(s16*)((u8*)arg1 + 0x30)), (f32)(*(s16*)((u8*)arg1 + 0x32)), lbl_803693D4, lbl_803693D8);
    fn_8000A174(0, 3);
    fn_8000A248();
    fn_80007898(5);
    fn_80007858((f32)(*(s16*)((u8*)arg2 + 0x30)), (f32)(*(s16*)((u8*)arg2 + 0x32)));
    fn_80007124((&sp8)[var_r30]);
    fn_8000727C(lbl_803693E4);
    if (*(u8*)((u8*)arg2 + 0x38) != 0) {
        fn_80007290(0xFF, 0xFF, 0, 0xFF);
    }
    if (*(u8*)((u8*)arg2 + 0x39) == 2) {
        fn_80007290(0, 0, 0, 0xFF);
    }
    fn_80007884();
}

s32 fn_8007CB08(void) {
    extern u16 lbl_80289894[];
    s32 v = fn_8000C0C0(lbl_80289894);
    return v != 0;
}

void fn_8007CCE8(void) {
    M2C_UNK fn_80087F50();
    fn_80087F50();
}

void fn_8007CF98(void) {
    M2C_UNK fn_8007F844();
    fn_8007F844();
}

void fn_8007CFB8(void) {
    M2C_UNK fn_80082298();
    fn_80082298();
}

void fn_8007CFD8(s32 *arg0) {
    M2C_UNK fn_8008563C(s32 *);
    s32 sp8;

    sp8 = *arg0;
    fn_8008563C(&sp8);
}

void fn_8007D004(void) {
    M2C_UNK fn_80086020();
    fn_80086020();
}

void fn_8007D024(void) {
    M2C_UNK fn_80086C14();
    fn_80086C14();
}

void fn_8007D044(void) {
    M2C_UNK fn_800875B4();
    fn_800875B4();
}

void fn_8007D064(s32 arg0, s32 arg2) {
    void *fn_8000CAA0(void *, void *);
    void fn_801475FC(void *, s32, void *);

    extern u16 lbl_80289894[];
    extern u8 lbl_8026C86C[];

    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80289894, lbl_80289894);
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x38) = arg2;
    fn_801475FC(lbl_8026C86C + 0x140, 0x64, lbl_8026C86C);
}

void fn_8007D0C0(void *arg0) {
    extern f32 lbl_80369418;
    extern f32 lbl_80369448;
    extern f32 lbl_8036944C;
    extern f32 lbl_80369450;
    extern f32 lbl_80369454;
    extern f32 lbl_80369458;
    extern f32 lbl_8036945C;
    extern f32 lbl_80369460;
    extern f32 lbl_80369464;
    extern f32 lbl_80369468;
    extern f32 lbl_8036946C;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r4_3;
    s16 temp_r4_4;
    s16 temp_r4_5;
    s8 temp_r0;
    void *temp_r31;

    temp_r31 = *(void **)((u8 *)arg0 + 0x30);
    *(s16 *)((u8 *)temp_r31 + 6) = *(s16 *)((u8 *)temp_r31 + 6) - 1;
    if (*(s32 *)((u8 *)temp_r31 + 0x20) == 1) {
        temp_r4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4, lbl_80369448, lbl_8036944C, (f32)(7 - temp_r4), lbl_80369450);
        temp_r4_2 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_2, lbl_80369454, lbl_80369458, (f32)(7 - temp_r4_2), lbl_80369450);
    } else {
        temp_r4_3 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4_3, lbl_8036945C, lbl_8036944C, (f32)(7 - temp_r4_3), lbl_80369450);
        temp_r4_4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_4, lbl_80369460, lbl_80369458, (f32)(7 - temp_r4_4), lbl_80369450);
    }
    *(f32 *)((u8 *)temp_r31 + 0xC) = lbl_80369464;
    *(f32 *)((u8 *)temp_r31 + 0x14) = lbl_80369468;
    temp_r4_5 = *(s16 *)((u8 *)temp_r31 + 6);
    temp_r0 = (s8) fn_800067BC(4, temp_r4_5, lbl_80369418, lbl_8036946C, (f32)(7 - temp_r4_5), lbl_80369450);
    *(s8 *)((u8 *)temp_r31 + 0xA) = temp_r0;
    *(s8 *)((u8 *)temp_r31 + 8) = temp_r0;
    if (*(s16 *)((u8 *)temp_r31 + 6) <= 0) {
        fn_8000C188(arg0);
    }
}

void fn_8007D638(void *arg0) {
    f32 fn_800067BC(s32, s16, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_80369418;
    extern f32 lbl_80369448;
    extern f32 lbl_8036944C;
    extern f32 lbl_80369450;
    extern f32 lbl_80369454;
    extern f32 lbl_80369458;
    extern f32 lbl_8036945C;
    extern f32 lbl_80369460;
    extern f32 lbl_80369464;
    extern f32 lbl_80369468;
    extern f32 lbl_8036946C;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r4_3;
    s16 temp_r4_4;
    s16 temp_r4_5;
    s8 temp_r0;
    void *temp_r31;
    f32 f_c;
    f32 f_14;

    temp_r31 = *(void **)((u8 *)arg0 + 0x30);
    *(s16 *)((u8 *)temp_r31 + 6) = *(s16 *)((u8 *)temp_r31 + 6) - 1;
    if (*(s32 *)((u8 *)temp_r31 + 0x20) == 1) {
        temp_r4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4, lbl_8036944C, lbl_8036945C, (f32)(7 - temp_r4), lbl_80369450);
        temp_r4_2 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_2, lbl_80369458, lbl_80369460, (f32)(7 - temp_r4_2), lbl_80369450);
    } else {
        temp_r4_3 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x10) = fn_800067BC(4, temp_r4_3, lbl_8036944C, lbl_80369448, (f32)(7 - temp_r4_3), lbl_80369450);
        temp_r4_4 = *(s16 *)((u8 *)temp_r31 + 6);
        *(f32 *)((u8 *)temp_r31 + 0x18) = fn_800067BC(4, temp_r4_4, lbl_80369458, lbl_80369454, (f32)(7 - temp_r4_4), lbl_80369450);
    }
    f_c = lbl_80369464;
    f_14 = lbl_80369468;
    *(f32 *)((u8 *)temp_r31 + 0xC) = f_c;
    *(f32 *)((u8 *)temp_r31 + 0x14) = f_14;
    temp_r4_5 = *(s16 *)((u8 *)temp_r31 + 6);
    temp_r0 = (s8)fn_800067BC(4, temp_r4_5, lbl_8036946C, lbl_80369418, (f32)(7 - temp_r4_5), lbl_80369450);
    *(s8 *)((u8 *)temp_r31 + 0xA) = temp_r0;
    *(s8 *)((u8 *)temp_r31 + 8) = temp_r0;
    if (*(s16 *)((u8 *)temp_r31 + 6) <= 0) {
        fn_8000C188(arg0);
    }
}

void fn_8007D7E8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

void fn_8007D924(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x20) == 1) {
        M2C_FIELD(temp_r4, u8 *, 9) = (u8) (M2C_FIELD(temp_r4, u8 *, 9) + 1);
        if ((s8) M2C_FIELD(temp_r4, u8 *, 9) > 2) {
            M2C_FIELD(temp_r4, u8 *, 9) = 0U;
        }
    } else {
        M2C_FIELD(temp_r4, u8 *, 9) = (u8) (M2C_FIELD(temp_r4, u8 *, 9) - 1);
        if ((s8) M2C_FIELD(temp_r4, u8 *, 9) < 0) {
            M2C_FIELD(temp_r4, u8 *, 9) = 2U;
        }
    }
    M2C_FIELD(temp_r4, s16 *, 6) = 7;
}

void fn_8007DAB4(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 6) = 7;
}

void fn_8007DD78(void *arg0) {
    s32 i;
    s32 j;
    s32 k;
    void **ptr_array1;
    void **ptr_array2;
    void **ptr_array3;
    void **ptr_array4;
    void **ptr_array5;
    void **temp_r3;
    void *temp_r30;
    void *temp_r31;
    
    // Clear initial fields
    *(u32*)((uintptr_t)arg0 + 0x38) = 0;
    *(u32*)((uintptr_t)arg0 + 0x3C) = 0;
    *(u32*)((uintptr_t)arg0 + 0x40) = 0;
    *(u32*)((uintptr_t)arg0 + 0x44) = 0;
    *(u32*)((uintptr_t)arg0 + 0x48) = 0;
    *(u32*)((uintptr_t)arg0 + 0x4C) = 0;
    *(u32*)((uintptr_t)arg0 + 0x50) = 0;
    *(u32*)((uintptr_t)arg0 + 0x54) = 0;
    
    // First loop
    for (i = 0; i < 0x62; i++) {
        temp_r3 = (void**)fn_80105C5C(*(u32*)((uintptr_t)arg0 + 0x58) + 0x18C, i);
        if ((temp_r3 != NULL) && (*(u8*)((uintptr_t)temp_r3 + 0x19) != 0)) {
            *(u32*)((uintptr_t)arg0 + 0x38) = (u32)temp_r3;
            arg0 = (void*)((uintptr_t)arg0 + 4);
        }
    }
    
    // Second loop
    ptr_array1 = (void**)arg0;
    i = 0;
    j = 0;
    while (j < 0x62) {
        temp_r3 = (void**)fn_80105C5C(*(u32*)((uintptr_t)arg0 + 0x58) + 0x1BC, j);
        if ((temp_r3 != NULL) && (*(u8*)((uintptr_t)temp_r3 + 0x19) != 0)) {
            k = 0;
loop_1:
            temp_r30 = (void**)fn_80105C5C(*(u32*)((uintptr_t)arg0 + 0x58) + 0x18C, k);
            if (temp_r30 != NULL) {
                // Check for equality between the elements
                if (*(u32*)((uintptr_t)temp_r3 + 0x0) != *(u32*)((uintptr_t)temp_r30 + 0x0)) {
                    i = 0;
                    if ((*(u8*)((uintptr_t)temp_r3 + 0x19) != 0) && (*(u8*)((uintptr_t)temp_r3 + 0x1A) == 0)) {
                        i = 1;
                    }
                    if (i != 0) {
                        goto block_2;
                    }
                }
            } else {
block_2:
                k++;
                if (k < 0x62) {
                    goto loop_1;
                }
            }
            if (k == 0x62) {
                *ptr_array1 = temp_r3;
                ptr_array1 += 1;
                i++;
            }
        }
        j++;
    }
    
    // Third loop
    j = 0;
    ptr_array2 = (void**)((uintptr_t)arg0 + (i << 2));
    while (j < 0x62) {
        temp_r3 = (void**)fn_80105C5C(*(u32*)((uintptr_t)arg0 + 0x58) + 0x1BC, j);
        if ((temp_r3 != NULL) && (*(u8*)((uintptr_t)temp_r3 + 0x19) != 0)) {
            k = 0;
loop_3:
            temp_r30 = (void**)fn_80105C5C(*(u32*)((uintptr_t)arg0 + 0x58) + 0x18C, k);
            if (temp_r30 != NULL) {
                if (*(u32*)((uintptr_t)temp_r3 + 0x0) != *(u32*)((uintptr_t)temp_r30 + 0x0)) {
                    i = 0;
                    if ((*(u8*)((uintptr_t)temp_r3 + 0x19) != 0) && (*(u8*)((uintptr_t)temp_r3 + 0x1A) == 0)) {
                        i = 1;
                    }
                    if (i == 0) {
                        goto block_4;
                    }
                }
            } else {
block_4:
                k++;
                if (k < 0x62) {
                    goto loop_3;
                }
            }
            if (k == 0x62) {
                *ptr_array2 = temp_r3;
                ptr_array2 += 1;
            }
        }
        j++;
    }
}

extern u8 lbl_80330708[1400];
void fn_8007DF6C(void *arg0) {
    void *temp_r31;
    
    temp_r31 = *(void**)((u8*)arg0 + 0x30);
    fn_8004BE88(*(s32*)((u8*)temp_r31 + 0x58), 1);
    lbl_80330708[0xA8] = *(u8*)((u8*)temp_r31 + 0x9);
    *(s32*)(lbl_80330708 + 0xAC) = *(s32*)((u8*)temp_r31 + 0x58);
    
    if (*(u32*)((u8*)temp_r31 + 0x5C)) {
        fn_8007B990();
    }
    if (*(u32*)((u8*)temp_r31 + 0x60)) {
        fn_800616A0();
    }
    fn_800C4588(temp_r31);
}

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

