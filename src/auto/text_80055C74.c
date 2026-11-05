/* Functions from 0x80055C74 to 0x8005A29C, found by decomp-toolkit. */
#include "common.h"

s32 fn_80055C74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

u8 fn_80055C7C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 5);
}

s32 fn_80055C84(s32 *arg0) {
    return *arg0;
}

void *fn_8000CAA0(void *, s32, void *);             /* extern */
s32 fn_80234450(void *, s32);                       /* extern */
extern u16 lbl_80285BD0[16];
void fn_80055C8C(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80285BD0, arg2, &lbl_80285BD0);
    *(s32 *)((char *)temp_r3 + 0x6C) = arg1;
    fn_80234450((char *)temp_r3 + 0x30, arg0);
    return;
}

void fn_80055D68(void *arg0) {
    *(u16 *)((char *)arg0 + 0x68) = 0;
    fn_8005C8B4((char *)arg0 + 0x30);
}

s32 fn_80055D94(void) {
    return 0;
}

void fn_80055D9C(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x32) = -1;
    }
}

void fn_80055DB0(void *arg0, s32 arg1) {
    *(u8*)((char*)arg0 + 0x30) = (u8)arg1;
    *(u32*)((char*)arg0 + 0x190) = 1; // Ensure initialization of a field not in the original
}

void fn_800561A8(void) {
    M2C_UNK fn_800561EC();
    fn_800561EC();
}

void fn_800561C8(void *arg0) {
    M2C_UNK fn_80067304(s32);
    fn_80067304(M2C_FIELD(arg0, s32 *, 0x4C));
}

void fn_80056580(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern M2C_UNK lbl_80285B90;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_80285B90);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s8 *, 0x36) = -1;
    }
}

void fn_80056698(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void *fn_80056A04(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_800C4588(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80056A60(void *arg0) {
    s8 *fn_800C4638(M2C_UNK, void *, M2C_UNK);
    extern u8 lbl_8026AD80;
    extern f32 lbl_80369108;
    extern f32 lbl_80369140;
    extern f32 lbl_80369144;
    
    void *temp_r31 = arg0;
    u16 temp_r0 = 0x30; // to be stored to 0x4
    
    void *temp_r4 = &lbl_8026AD80 + 0xA9;
    
    M2C_FIELD(temp_r31, void **, 0x14) = fn_800C4638(0x80, temp_r4, 0);
    
    M2C_FIELD(temp_r31, f32 *, 8) = lbl_80369108;
    M2C_FIELD(temp_r31, f32 *, 0xC) = lbl_80369140;
    M2C_FIELD(temp_r31, f32 *, 0x10) = lbl_80369144;
    
    M2C_FIELD(temp_r31, s8 *, 3) = 0xFF; // 0xFF
    M2C_FIELD(temp_r31, s8 *, 0) = 0;
    M2C_FIELD(temp_r31, s16 *, 4) = 0x30;
    
    *M2C_FIELD(temp_r31, s8 **, 0x14) = 0;
    
    return temp_r31;
}

void fn_80056AE0(void *arg0, u32 arg1) {
    M2C_UNK fn_80234450(s32);
    if (arg1 != 0U) {
        fn_80234450(M2C_FIELD(arg0, s32 *, 0x14));
    }
}

void fn_80057860(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x18);
    if (var_r4 > temp_r0) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
}

void fn_80057880(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r4 > temp_r0) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4;
}

void fn_80057898(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}

void fn_800578A0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
}

void fn_800578A8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, f32 *, 4) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 8) = (f32) arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
}

void *fn_80057998(void *arg0) {
    s32 fn_8006D948(s32 arg0);
    extern u8 lbl_8026AD80[];
    extern u8 lbl_80285BF0[];
    extern f32 lbl_80369108;
    
    *(u32**)arg0 = (u32*)lbl_80285BF0;
    *(s32*)((char*)arg0 + 0x2c) = fn_8006D948((s32)(lbl_8026AD80 + 0xAA));
    *(s32*)((char*)arg0 + 0x14) = 0;
    *(s32*)((char*)arg0 + 0x18) = 0;
    *(s32*)((char*)arg0 + 0x1C) = 0;
    *(s32*)((char*)arg0 + 0x20) = 0;
    *(f32*)((char*)arg0 + 4) = lbl_80369108;
    *(f32*)((char*)arg0 + 8) = lbl_80369108;
    *(f32*)((char*)arg0 + 0xC) = lbl_80369108;
    *(s32*)((char*)arg0 + 0x24) = 0;
    *(s32*)((char*)arg0 + 0x28) = 0;
    return arg0;
}

void *fn_80057A10(void *arg0, s16 arg1) {
    M2C_UNK fn_8006D8E8(s32);
    M2C_UNK fn_800C428C(void *);
    if (arg0 != NULL) {
        fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x30));
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80057A64(void *arg0, s32 arg1) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026AD80[];
    extern f32 lbl_80369108;
    
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = fn_8006D948(&lbl_8026AD80[0xBF]);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s8 *, 0x55) = 1;
    M2C_FIELD(arg0, s8 *, 0x54) = 1;
    M2C_FIELD(arg0, s32 *, 0x50) = 0x30;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_80369108;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_80369108;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_80369108;
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
    return arg0;
}

void fn_80057E54(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x34) = arg1;
}

void fn_80057E5C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x54) = arg1;
}

void fn_80057E64(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x55) = arg1;
}

void fn_80057E6C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x54) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0x1E;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
}

void fn_80057E90(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x40) = farg0;
}

void fn_80057E98(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) arg2;
}

extern u8 lbl_80285B6C[16];
void fn_80057EDC(void) {
    fn_8000BF00(&lbl_80285B6C);
}

void fn_80057FD4(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) == arg1) {
        fn_8000BF00(&lbl_80285B6C);
    }
}

void fn_80058008(void *arg0) {
    M2C_UNK fn_8000C60C(s32);
    if (M2C_FIELD(arg0, u16 *, 0x54) & 4) {
        fn_8005EA14(M2C_FIELD(arg0, s32 *, 0x34));
    }
    fn_8000C60C(M2C_FIELD(arg0, s32 *, 0x30));
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x40));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

void fn_80058910(void *arg0, u8 arg1) {
    M2C_UNK fn_8005EA14(s32);
    M2C_UNK fn_8005EB80(s32, M2C_UNK);
    if (arg1 != 0) {
        fn_8005EB80(M2C_FIELD(arg0, s32 *, 0x34), 6);
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) | 4);
        return;
    }
    fn_8005EA14(M2C_FIELD(arg0, s32 *, 0x34));
    M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) & 0xFFFFFFFB);
}

void fn_8005902C(s32 arg0, s16 arg1) {
    void *fn_8000CAA0(void *, s32, void *);
    extern void lbl_80285B34;
    *(s16*)((char*)fn_8000CAA0(&lbl_80285B34, arg0, &lbl_80285B34) + 0x32) = arg1;
}

void fn_8005906C(void *arg0) {
    M2C_UNK fn_8000C188();
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) {
        fn_8000C188();
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) (M2C_FIELD(arg0, s16 *, 0x30) + 1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x30) == (s16) M2C_FIELD(arg0, s16 *, 0x32)) {
        fn_8000C188();
    }
}

void fn_800590CC(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
}

void fn_800590D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *fn_8000CAA0(void *, s32, void *);
    extern u16 lbl_80285B08[16];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80285B08, arg3, &lbl_80285B08);
    *(s32 *)((char *)temp_r3 + 0x30) = arg0;
    *(s32 *)((char *)temp_r3 + 0x34) = arg1;
    *(s32 *)((char *)temp_r3 + 0x38) = arg2;
}

void fn_80059138(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void *fn_8000CAF0(void *, u32);
    extern s16 lbl_80285B08;
    u32 var_r6;
    void *temp_r3;

    var_r6 = arg3;
    if (var_r6 == 0U) {
        var_r6 = 3U;
    }
    temp_r3 = fn_8000CAF0(&lbl_80285B08, var_r6);
    *(s32 *)((char *)temp_r3 + 0x30) = arg0;
    *(s32 *)((char *)temp_r3 + 0x34) = arg1;
    *(s32 *)((char *)temp_r3 + 0x38) = arg2;
}

void fn_800591A0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x30)(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_800591CC(void *arg0) {
    M2C_UNK fn_8000C070(M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) <= 0) {
        fn_8000C070(0x63);
    }
}

void fn_80059208(s32 arg0) {
    void *fn_8000CAF0(void *, void *);
    extern void lbl_80285AF0;
    *(s32*)((char*)fn_8000CAF0(&lbl_80285AF0, &lbl_80285AF0) + 0x30) = arg0;
}

void fn_80059240(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x30)(M2C_FIELD(arg0, s32 *, 0x18));
}

f32 fn_80059500(f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4) {
    extern f32 lbl_80369104;
    extern f32 lbl_8036912C;
    extern f32 lbl_8036915C;
    extern f64 lbl_80369160;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f6;

    temp_f12 = lbl_80369104 * farg4;
    temp_f10 = farg4 - lbl_8036912C;
    temp_f6 = lbl_8036912C - farg4;
    return (f32) (((f64) (farg4 * (temp_f10 * farg4)) * (lbl_80369160 * (f64) (farg3 - farg1))) + (((f64) (farg4 * (temp_f6 * temp_f6)) * (lbl_80369160 * (f64) (farg2 - farg0))) + (f64) (((lbl_8036912C + temp_f12) * (temp_f10 * temp_f10) * farg1) + ((lbl_8036915C - temp_f12) * (farg4 * farg4) * farg2))));
}

void fn_800599D0(u16 arg0, u16 arg1, u16 arg2, u16 arg3, s32 arg4) {
    M2C_UNK fn_802209FC();
    M2C_UNK fn_8022124C(u16, u16, u16, u16);
    M2C_UNK fn_802212FC(u16, u16, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80221BA8(s32, M2C_UNK);
    M2C_UNK fn_80222EB4();
    
    u16 temp_r5 = arg1;
    u16 temp_r6 = arg2;
    u16 temp_r7 = arg3;
    
    fn_8022124C(arg0, temp_r5, temp_r6, temp_r7);
    fn_802212FC(temp_r6, temp_r7, 0x27, 0);
    fn_80221BA8(arg4, 0);
    fn_802209FC();
    fn_80222EB4();
}

f32 fn_80059EB8(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = arg0 >> 1;
    temp_r0 = arg1 % arg0;
    if (temp_r0 < temp_r5) {
        return farg0 + (((f32) temp_r0 * (farg1 - farg0)) / (f32) temp_r5);
    }
    return farg1 + (((f32) (temp_r0 - temp_r5) * (farg0 - farg1)) / (f32) temp_r5);
}

f32 fn_80059F64(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    return farg0 + ((farg3 * (farg1 - farg0)) / farg2);
}

