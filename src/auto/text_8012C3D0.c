/* Functions from 0x8012C3D0 to 0x8013275C, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
#include "unit.h"

f32 lbl_8036A500 = 300.0f;
f32 lbl_8036A50C = 1.0f;
f32 lbl_8036A510 = 0.0f;
f32 lbl_8036A514 = 288.0f;
f32 lbl_8036A518 = 24.0f;

s32 fn_8012C3D0(void) {
    return 0x168;
}

s32 fn_8012C3D8(void) {
    return 0x128;
}

s32 fn_8012C3E0(void) {
    return 0x16;
}

void fn_8012C3E8(void *arg0) {
    void (**func_ptr)(void) = (void (**)(void))((void**)arg0)[1] + 0x1F;
    func_ptr[0]();
}

M2C_UNK *fn_8012C414(void) {
    u8 fn_80109B0C(s32);
    M2C_UNK fn_80231D94(M2C_UNK *, void *, u8, M2C_UNK *);
    extern M2C_UNK lbl_802758F8;
    extern M2C_UNK lbl_8032FE60;
    extern s32 lbl_80367A88;

    u8 temp_r5 = fn_80109B0C(lbl_80367A88);
    void *temp_r4 = &lbl_802758F8 + 0x10A;
    M2C_UNK *temp_r3 = &lbl_8032FE60;

    fn_80231D94(temp_r3, temp_r4, temp_r5, temp_r3);
    return temp_r3;
}

void *fn_8012C460(void) {
    extern void *lbl_802758F8;
    return (u8 *)&lbl_802758F8 + 0x11B;
}

s32 fn_8012C470(void) {
    void fn_80109B00(void *, u8);
    u8 fn_80109B0C(void *);
    extern void *lbl_80367240;
    extern void *lbl_80367A88;
    u32 flags;
    s32 val;

    val = fn_80109B0C(lbl_80367A88);
    flags = *(u32 *)((u8 *)lbl_80367240 + 0x10);
    if (flags & 0x01000001) {
        val -= 1;
    }
    if (flags & 0x02000002) {
        val += 1;
    }
    if (val > 0xFF) {
        val = 0xFF;
    }
    if (val < 0) {
        val = 0;
    }
    fn_80109B00(lbl_80367A88, val);
    return 0;
}

M2C_UNK *fn_8012C4F0(void) {
    u8 fn_80109B24(s32);
    M2C_UNK fn_80231D94(M2C_UNK *, void *, u8, M2C_UNK *);
    extern M2C_UNK lbl_802758F8;
    extern M2C_UNK lbl_8032FE60;
    extern s32 lbl_80367A88;
    
    s32 r3 = lbl_80367A88;
    u8 r5 = fn_80109B24(r3);
    void *r4 = &lbl_802758F8 + 0x13C;
    M2C_UNK *r3_ptr = &lbl_8032FE60;
    
    fn_80231D94(r3_ptr, r4, r5, r3_ptr);
    return r3_ptr;
}

void *fn_8012C53C(void) {
    extern u16 lbl_802758F8[];
    return (u8 *)lbl_802758F8 + 0x14d;
}

s32 fn_8012C54C(void) {
    void fn_80109B18(void *, u8);
    u8 fn_80109B24(void *);
    extern void *lbl_80367240;
    extern void *lbl_80367A88;
    u32 flags;
    s32 val;

    val = fn_80109B24(lbl_80367A88);
    flags = *(u32 *)((u8 *)lbl_80367240 + 0x10);
    if (flags & 0x01000001) {
        val -= 1;
    }
    if (flags & 0x02000002) {
        val += 1;
    }
    if (val > 0xFF) {
        val = 0xFF;
    }
    if (val < 0) {
        val = 0;
    }
    fn_80109B18(lbl_80367A88, val);
    return 0;
}

void *fn_8012C618(void) {
    extern u16 lbl_802758F8[];
    return (u8 *)lbl_802758F8 + 0x175;
}

s32 fn_8012C628(void) {
    void fn_80109B30(void *, u8);
    u8 fn_80109B48(void *);
    extern void *lbl_80367240;
    extern void *lbl_80367A88;
    u32 flags;
    s32 val;

    val = fn_80109B48(lbl_80367A88);
    flags = *(u32 *)((u8 *)lbl_80367240 + 0x10);
    if (flags & 0x01000001) {
        val -= 1;
    }
    if (flags & 0x02000002) {
        val += 1;
    }
    if (val > 0xFF) {
        val = 0xFF;
    }
    if (val < 0) {
        val = 0;
    }
    fn_80109B30(lbl_80367A88, val);
    return 0;
}

void *fn_8012C6F0(void) {
    extern char lbl_802758F8[];
    return &lbl_802758F8[0x19B];
}

s32 fn_8012C700(void) {
    M2C_UNK fn_80109B54(s32, f32);
    f32 fn_80109BA8(s32);
    extern void *lbl_80367240;
    extern s32 lbl_80367A88;
    extern f32 lbl_8036A4AC;
    extern f32 lbl_8036A4D8;
    f32 var_f1;
    s32 temp_r4;

    var_f1 = fn_80109BA8(lbl_80367A88);
    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 0x10);
    if (temp_r4 & 0x01000001) {
        var_f1 -= lbl_8036A4D8;
    }
    if (temp_r4 & 0x02000002) {
        var_f1 += lbl_8036A4D8;
    }
    if (var_f1 > lbl_8036A4AC) {
        var_f1 = lbl_8036A4AC;
    }
    if (var_f1 < lbl_8036A4D8) {
        var_f1 = lbl_8036A4D8;
    }
    fn_80109B54(lbl_80367A88, var_f1);
    return 0;
}

void fn_8012C788(s32 arg0) {
    extern u16 lbl_80291084[108];
    void *fn_8000CAA0(u16 *, u16 *);

    u16 *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80291084[0], &lbl_80291084[0]);
    
    *(u32 *)((u8 *)temp_r3 + 0x54) = arg0;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 2;
}

void fn_8012C7C8(s32 arg0) {
    extern u16 lbl_80291084[108];
    void *temp_r3;

    temp_r3 = (void *)fn_8000CAA0(lbl_80291084, lbl_80291084);
    *(s32 *)((u8 *)temp_r3 + 0x54) = arg0;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 1;
}

void fn_8012C808(void *arg0) {
    M2C_UNK fn_8000C070(M2C_UNK);
    s32 fn_8000E0E4(void *);
    M2C_UNK fn_80056AE0(s32, s32);
    extern u16 lbl_802EF4C8;
    extern u8 lbl_80275AC0[];

    if ((u8) *(u8 *)((char *)&lbl_802EF4C8 + 8) == 0x81) {
        fn_8000C070(0);
    }
    
    if ((s8) M2C_FIELD(arg0, u8 *, 0x62) >= 0) {
        u8 temp_r0 = M2C_FIELD(arg0, u8 *, 0x6C);
        switch (temp_r0) {
            case 0:
            case 1:
                fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0x5A)));
                return;
            case 3:
                goto block_11;
            case 2:
            case 4:
                fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0x6B)));
                return;
        }
    } else {
        u8 temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x6C);
        switch (temp_r0_2) {
            case 0:
            case 1:
                fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0x8A)));
                return;
            case 3:
                goto block_11;
            case 2:
            case 4:
                fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0x9B)));
                return;
        }
    }
block_11:
    fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0xAB)));
}

void fn_8012C964(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);  // Updated to reflect 3 arguments
    extern u16 lbl_80290FA0[114];  // 228 bytes -> 114 u16

    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80290FA0, arg0, lbl_80290FA0);
    *(u32 *)((u8 *)temp_r3 + 0x54) = 0;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 3;
}

s32 fn_8012C9E8(void *arg1) {
    s32 *field = (s32*)((u8*)arg1 + 0x1A0);
    *field ^= 0x80000000;
    return 1;
}

void fn_8012C9FC(s8 arg0) {
    extern u16 lbl_80290EB0[120];
    void *fn_8000CAA0(void *, void *);

    void *temp_r3;
    temp_r3 = fn_8000CAA0(lbl_80290EB0, lbl_80290EB0);
    *(u8*)((uintptr_t)temp_r3 + 0x60) = arg0;
    *(u32*)((uintptr_t)temp_r3 + 0x54) = 0;
    *(u8*)((uintptr_t)temp_r3 + 0x6C) = 0;
}

extern u8 lbl_80290E88[16];
void fn_8012CA40(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_80290E88[16];
    fn_8000CAA0(lbl_80290E88, arg0);
}

void fn_8012CE34(void *arg0) {
    s32 fn_8000E0E4(void *);
    void fn_80056AE0(s32, s32);
    extern u8 lbl_80275AC0[];

    u8 temp_r0;
    u8 temp_r0_2;

    M2C_FIELD(arg0, u8 *, 0x62) = 0U;

    if ((s8) M2C_FIELD(arg0, u8 *, 0x62) < 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x6C);
        switch (temp_r0) {
        case 0:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0x5A)));
            return;
        case 1:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0x6B)));
            return;
        case 2:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0x7B)));
            return;
        default:
            return;
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x6C);
        switch (temp_r0_2) {
        case 0:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0x8A)));
            return;
        case 1:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0x9B)));
            return;
        case 2:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *) (lbl_80275AC0 + 0xAB)));
            return;
        default:
            return;
        }
    }
}

s32 fn_8012D554(void) {
    return 0;
}

void fn_8012D55C(void *arg0) {
    s32 fn_8000E0E4(void *);
    M2C_UNK fn_80056AE0(s32, s32);
    extern u8 lbl_80275AC0[];

    M2C_FIELD(arg0, u8 *, 0x62) = -1;
    if ((s8) M2C_FIELD(arg0, u8 *, 0x62) >= 0) {
        return;
    }
    
    switch (M2C_FIELD(arg0, u8 *, 0x6C)) {
        case 0:
        case 1:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0x5A]));
            break;
        case 2:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0x6B]));
            break;
        case 3:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0x7B]));
            break;
        case 4:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0x7B]));
            break;
        default: // All cases 5-39 fall here
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0xAB]));
            break;
    }
}

s32 fn_8012DC74(void *arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    f32 fn_8005A028(M2C_UNK, s32, u8, f32, f32, f32, f32);
    extern f32 lbl_8036A4EC;
    u32 temp_r5;
    u8 temp_r4;
    u8 temp_r6;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x64) == 0) {
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x63);
        if (temp_r4 == (s32) (M2C_FIELD(arg0, u8 *, 0x6D) - 1)) {
            return 0;
        }
        M2C_FIELD(arg0, u8 *, 0x63) = (u8) (temp_r4 + 1);
        M2C_FIELD(arg0, s8 *, 0x65) = 0;
        goto block_4;
    }
block_4:
    M2C_FIELD(arg0, u8 *, 0x64) = (u8) (M2C_FIELD(arg0, u8 *, 0x64) + 1);
    temp_r6 = M2C_FIELD(arg0, u8 *, 0x63);
    temp_r5 = (temp_r6 - 1) * 0x120;
    M2C_FIELD(arg0, s16 *, 0x68) = (s16) fn_8005A028(2, temp_r5, temp_r6, (f32) temp_r5, (f32) (temp_r6 * 0x120), lbl_8036A4EC, (f32) M2C_FIELD(arg0, u8 *, 0x64));
    if ((u8) M2C_FIELD(arg0, u8 *, 0x64) == 0x10) {
        M2C_FIELD(arg0, u8 *, 0x64) = 0U;
        if ((s8) M2C_FIELD(arg0, u8 *, 0x62) < 0) {
            fn_8000C070(arg0, 6);
        } else {
            fn_8000C070(arg0, 1);
        }
    }
    return 1;
}

void fn_8012DED8(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    M2C_UNK fn_80057860(s32, s16);
    s16 temp_r3;
    u32 temp_r0;
    u32 temp_r3_2;

    M2C_FIELD(arg0, s16 *, 0x6A) = (s16) (M2C_FIELD(arg0, s16 *, 0x6A) - M2C_FIELD(arg0, u8 *, 0x6F));
    fn_80057860(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s16 *, 0x6A));
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x6A);
    temp_r3_2 = (u32) temp_r3 >> 0x1FU;
    temp_r0 = (temp_r3 << 0x1B) - temp_r3_2;
    if ((((temp_r0 << 5) | (temp_r0 >> 0x1BU)) + temp_r3_2) == 0) {
        fn_8000C188(arg0);
    }
}

void fn_8012DF40(void *arg0) {
    u8 temp_r3;
    s16 temp_r4;
    u32 temp_r5;

    M2C_FIELD(arg0, s16 *, 0x6A) = (s16) (M2C_FIELD(arg0, s16 *, 0x6A) + M2C_FIELD(arg0, u8 *, 0x6F));
    fn_80057860(M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s16 *, 0x6A));
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x6A);
    temp_r5 = (u32) temp_r4 >> 0x1FU;
    temp_r3 = (u8) ((temp_r4 << 0x1B) - temp_r5);
    if ((((temp_r3 << 5) | (temp_r3 >> 0x1BU)) + temp_r5) == 0) {
        fn_8000C188(arg0);
    }
}

void fn_8012EF04(s32 arg0) {
    extern u16 lbl_80275AC0[];
    u16* ptr = &lbl_80275AC0[0x67];
    fn_8005C8B4(ptr, &lbl_80275AC0);
    if (fn_8005BA10(ptr) != 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_8012F26C(void) {
    return 0;
}

void fn_8012F5A8(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg0 = 0;
    *arg1 = 0x14;
    *arg2 = 0x30;
    *arg3 = 0x28;
}

void fn_801302C0(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1E0, 0);
}

s32 fn_80130858(void) {
    return 0;
}

void fn_80130860(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0, 0, 0x80, 0x1E0);
}

void fn_80130890(void) {
    fn_80225058(0, 0, 0x78, 0x1E0);
}

void fn_801308C0(void) {
    fn_80225058(0xF8, 0, 0x120, 0x1E0);
}

void fn_801308F0(void) {
    fn_80225058(0, 0x60, 0x260, 0x120);
}

void fn_80130920(void) {
    fn_80225058(0xF8, 0x60, 0x120, 0x120);
}

void fn_80130B10(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    switch (arg1) {                                 /* irregular */
    case 0:
        *arg2 = 0;
        *arg3 = 0;
        *arg4 = 0x30;
        *arg5 = 0x14;
        return;
    case 1:
        *arg2 = 0;
        *arg3 = 0x2A8;
        *arg4 = 0x30;
        *arg5 = 0x2BC;
        return;
    }
}

void *fn_80130B68(void *arg0, void *arg1, s32 arg2) {
    s32 fn_800A8A88(s32);
    extern u16 lbl_80275AC0[29];
    void *temp_r4;
    void *temp_r4_2;

    switch (arg2) {                                 /* irregular */
    case 1:
        temp_r4 = *(void**)((char*)arg1 + 0xC);
        if (temp_r4 == NULL) {
            fn_80231D94((char*)&lbl_80275AC0 + 0x25B);
        } else {
            fn_80231D94(arg0, (char*)&lbl_80275AC0 + 0x264, fn_800A8A88(*(s32*)((char*)temp_r4 + 0x188)));
        }
block_13:
    default:
        return arg0;
    case 2:
        temp_r4_2 = *(void**)((char*)arg1 + 0x10);
        if (temp_r4_2 == NULL) {
            fn_80231D94((char*)&lbl_80275AC0 + 0x25B);
        } else {
            fn_80231D94(arg0, (char*)&lbl_80275AC0 + 0x264, fn_800A8A88(*(s32*)((char*)temp_r4_2 + 0x188)));
        }
        goto block_13;
    case 0:
        return NULL;
    }
}

s32 fn_80130C54(void *arg1, s32 arg2) {
    s32 var_r3;

    var_r3 = 0;
    switch (arg2) {                                 /* irregular */
    case 0:
        return -(s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0), void **, 0x188), u16 *, 0x5A);
    case 1:
        if ((u32) M2C_FIELD(arg1, u32 *, 0xC) != 0U) {
            var_r3 = 1;
        }
        if ((u32) M2C_FIELD(arg1, u32 *, 0x10) != 0U) {
            return var_r3 + 1;
        }
        return var_r3;
    default:
        return 0;
    }
}

void fn_80130CDC(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    switch (arg1) {                                 /* irregular */
    case 0:
        *arg2 = 0;
        *arg3 = 0;
        *arg4 = 0x30;
        *arg5 = 0x14;
        return;
    case 1:
        *arg2 = 0;
        *arg3 = 0x294;
        *arg4 = 0x30;
        *arg5 = 0x2A8;
        return;
    }
}

extern u16 jumptable_802911EC[];
s32 fn_80131020(s32 arg0, s32 arg1)
{
    if (arg1 >= 8) {
        return 0;
    }
    
    switch (arg1) {
        case 0:
            return fn_80092ADC(0x0);
        case 1:
            return fn_80092ADC(0x1);
        case 2:
            return fn_80092ADC(0x2);
        case 3:
            return fn_80092ADC(0x3);
        case 4:
            return fn_80092ADC(0x4);
        case 5:
            return fn_80092ADC(0x5);
        case 6:
            return fn_80092ADC(0x6);
        case 7:
            return fn_80092ADC(0x7);
    }
    
    return 0;
}

void *fn_801310F4(s32 arg1) {
    extern u32 jumptable_80291210[];
    extern u8 lbl_80275AC0[];
    
    if (arg1 >= 8) {
        // Return default case (offset 0x247 from lbl_80275AC0)
        return &lbl_80275AC0[0x247];
    }
    
    // Jump table access
    return (void *) jumptable_80291210[arg1];
}

s32 fn_801311A4(void* arg0, void** arg1, s32 arg2) {
    if (arg2 >= 8) {
        return 0;
    }
    
    switch (arg2) {
        case 0:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x14;
            break;
        case 1:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x208;
            break;
        case 2:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x21c;
            break;
        case 3:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x230;
            break;
        case 4:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x244;
            break;
        case 5:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x258;
            break;
        case 6:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x26c;
            break;
        case 7:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x280;
            break;
    }
    
    return 1;
}

extern s32 fn_8010424C(void*);
s32 fn_80131464(void** arg1, s32 arg2) {
    void* temp_r3;
    s32 result; 
    
    temp_r3 = *arg1;
    
    switch (arg2) {                                 /* irregular */
    case 0:
        result = -(s32)(*(u16*)((u8*)temp_r3 + 0x188 + 0x5a));
        break;
    case 1:
        result = (*(u16*)((u8*)temp_r3 + 0x194) < 0) ? 1 : 0;
        break;
    case 2:
        result = fn_8010424C((u8*)temp_r3 + 0x1A4);
        break;
    default:
        result = 0;
        break;
    }
    
    return result;
}

void *fn_801314DC(s32 arg1) {
    extern u16 lbl_80275AC0[];
    switch (arg1) {
    case 0:
        return &lbl_80275AC0[0x314 / sizeof(u16)];
    case 1:
        return &lbl_80275AC0[0x328 / sizeof(u16)];
    default:
        return &lbl_80275AC0[0x247 / sizeof(u16)];
    }
}

void fn_80131524(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5)
{
  s32 *new_var;
  s32 *new_var2;
  switch (arg1)
  {
    case 0:
      *arg2 = 0;
      *arg3 = 0;
      *arg4 = 0x30;
      *arg5 = 0x14;
      return;

    new_var2 = arg2;
    case 1:
      new_var = new_var2;
      *new_var = 0;
      arg2 += 0;
      *arg3 = 0x1CC;
      *arg4 = (float) 0x30;
      *arg5 = 0x1E0;
      return;

    case 2:
      *arg2 = 0;
      *arg3 = 0x1E0;
      *arg4 = 0x30;
      *arg5 = 0x1F4;
      return;

  }

}

void fn_801315B0(void* arg0, s32 arg1) {
    if (arg1 > 6) {
        return;
    }
    switch(arg1) {
    case 0:
        return;
    case 1:
        {
            u8* ptr = &((u8*)arg0)[0x33c]; // lbl_80275AC0 + 0x33c
            fn_80231D94(ptr);
        }
        break;
    case 2:
        {
            u8* ptr = &((u8*)arg0)[0x33c]; // lbl_80275AC0 + 0x33c
            fn_80231D94(ptr);
        }
        break;
    case 3:
        {
            // Check if byte at offset 0x21 is zero
            if (((u8*)arg0)[0x21] == 0) {
                u8* ptr = &((u8*)arg0)[0x340]; // lbl_80275AC0 + 0x340
                fn_80231D94(ptr);
            }
        }
        break;
    case 4:
        {
            // Compare byte at offset 0x22 to something
            u8 r6 = ((u8*)arg0)[0x22];
            if (arg1 == r6) {
                u8* ptr = &((u8*)arg0)[0x345]; // lbl_80275AC0 + 0x345
                fn_80231D94(ptr);
            }
        }
        break;
    case 5:
        {
            u8* ptr = &((u8*)arg0)[0x33c]; // lbl_80275AC0 + 0x33c
            fn_80231D94(ptr);
        }
        break;
    case 6:
        {
            s32 r3 = arg1; // value is not used in this case, probably just to pass it to a helper function
            u8* ptr = &((u8*)arg0)[0x33c]; // lbl_80275AC0 + 0x33c
            fn_80231D94(ptr);
        }
        break;
    }
}

s32 fn_80131714(s32 arg0, s32 arg1)
{
    s32 r3;
    s32 r4;
    
    if (arg1 >= 6) {
        return 0;
    }
    
    switch (arg1) {
    case 0:
        r4 = *(u32*)(arg0 + 0x0);
        r3 = *(u16*)(r4 + 0x188);
        return -r3;
    case 1:
        return *(u8*)(arg0 + 0x1F);
    case 2:
        return *(u8*)(arg0 + 0x20);
    case 3:
        {
            s32 var = *(u8*)(arg0 + 0x22);
            r3 = *(u8*)(arg0 + 0x21) + (var * 100);
            return r3;
        }
    case 4:
        r3 = fn_8003A398(arg0);
        return r3;
    case 5:
        r3 = fn_8003A5B4(arg0);
        return r3;
    case 6:
        r3 = fn_8003A1E0(arg0);
        return r3;
    default:
        return 0;
    }
}

void *fn_801317B0(s32 arg0, s32 arg1) {
    extern u8 lbl_80275AC0[];
    switch (arg1) {
    case 1:
        return &lbl_80275AC0[0x34B];
    case 2:
        return &lbl_80275AC0[0x35F];
    case 3:
        return &lbl_80275AC0[0x376];
    case 4:
        return &lbl_80275AC0[0x38B];
    case 5:
        return &lbl_80275AC0[0x39F];
    case 6:
        return &lbl_80275AC0[0x3B4];
    default:
        return &lbl_80275AC0[0x247];
    }
}

void fn_80131854(s32 arg0, s32 arg1, s32 arg2, s32* arg3)
{
    switch (arg0)
    {
        case 0:
            *(u32*)arg1 = 0;
            *(u32*)arg2 = 0x30;
            *(u32*)arg3 = 0;
            *(u32*)(arg3 + 1) = 0x14;
            break;

        case 1:
            *(u32*)arg1 = 0;
            *(u32*)arg2 = 0x30;
            *(u32*)arg3 = 0x154;
            *(u32*)(arg3 + 1) = 0x168;
            break;

        case 2:
            *(u32*)arg1 = 0;
            *(u32*)arg2 = 0x30;
            *(u32*)arg3 = 0x168;
            *(u32*)(arg3 + 1) = 0x17c;
            break;

        case 3:
            *(u32*)arg1 = 0;
            *(u32*)arg2 = 0x30;
            *(u32*)arg3 = 0x17c;
            *(u32*)(arg3 + 1) = 0x190;
            break;

        case 4:
            *(u32*)arg1 = 0;
            *(u32*)arg2 = 0x30;
            *(u32*)arg3 = 0x190;
            *(u32*)(arg3 + 1) = 0x1a4;
            break;

        case 5:
            *(u32*)arg1 = 0;
            *(u32*)arg2 = 0x30;
            *(u32*)arg3 = 0x1a4;
            *(u32*)(arg3 + 1) = 0x1b8;
            break;

        case 6:
            *(u32*)arg1 = 0;
            *(u32*)arg2 = 0x30;
            *(u32*)arg3 = 0x1b8;
            *(u32*)(arg3 + 1) = 0x1cc;
            break;

        default:
            break;
    }

    return;
}

u16 fn_80131AA8(void *arg1, s32 arg2) {
    void *temp_r3;
    u16 temp_r0;

    switch (arg2) {                                 /* irregular */
    case 0:
        temp_r3 = M2C_FIELD(M2C_FIELD(arg1, void **, 0), void **, 0x188);
        temp_r0 = M2C_FIELD(temp_r3, u16 *, 0x5A);
        return (u16) -(s32) temp_r0;
    case 1:
        temp_r3 = M2C_FIELD(arg1, void **, 8);
        if (temp_r3 == NULL) {
            return 0U;
        }
        return M2C_FIELD(temp_r3, u16 *, 0xE);
    case 2:
        return (u16) M2C_FIELD(arg1, u8 *, 0x1C);
    case 3:
        return (u16) M2C_FIELD(arg1, u8 *, 0x1D);
    case 4:
        return (u16) M2C_FIELD(arg1, u8 *, 0x1E);
    default:
        return 0U;
    }
}

void fn_80131B9C(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    switch (arg1) {                                 /* irregular */
    case 0:
        *arg2 = 0;
        *arg3 = 0;
        *arg4 = 0x30;
        *arg5 = 0x14;
        return;
    case 1:
        *arg2 = 0;
        *arg3 = 0x104;
        *arg4 = 0x30;
        *arg5 = 0x118;
        return;
    case 2:
        *arg2 = 0;
        *arg3 = 0x118;
        *arg4 = 0x30;
        *arg5 = 0x12C;
        return;
    case 3:
        *arg2 = 0;
        *arg3 = 0x12C;
        *arg4 = 0x30;
        *arg5 = 0x140;
        return;
    case 4:
        *arg2 = 0;
        *arg3 = 0x140;
        *arg4 = 0x30;
        *arg5 = 0x154;
        return;
    }
}

s32 fn_80131C78(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5) {
    s32 r30;
    s32 r31;
    s32 r4;
    
    if (param_5 > 7) {
        return 0;
    }
    
    r31 = param_1;
    r30 = *(s32*)((u32)param_4 + 0x18C);
    r4 = *(s32*)((u32)param_4);
    
    // Jump table handling
    switch (param_5) {
        case 0:
            return fn_8003B258(param_4);
        case 1:
            // fall through
            break;
        case 2:
            return fn_8003AFA0(param_4);
        case 3:
            // fall through  
            break;
        case 4:
            return fn_8003AF28(param_4);
        case 5:
            // fall through
            break;
        case 6:
            return fn_8003AEB0(param_4);
        case 7:
            // fall through
            break;
        case 8:
            return fn_8003ACF8(param_4);
        case 9:
            // fall through
            break;
        case 10:
            return fn_8003AA40(param_4);
        case 11:
            // fall through
            break;
        case 12:
            return fn_8003A778(param_4);
    }
    
    return 0;
}

void fn_80131F70(void)
{
    // Implementation for fn_80131F70
    return;
}

void fn_80132018(s32 arg0)
{
    if (arg0 > 7) {
        return;
    }
}

void fn_801320B8(void* arg0, f32 arg1) {
    void** reg = (void**)arg0;
    s32 temp_r5;
    
    if ((s32)arg1 < 7) {
        temp_r5 = *(s32*)((u8*)arg0 + 0x4);
        
        switch ((s32)arg1) {
        case 0:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0x1b8;
            *(u32*)&reg[3] = 0x14;
            break;
        case 1:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0x8c;
            *(u32*)&reg[3] = 0x78;
            break;
        case 2:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xa0;
            *(u32*)&reg[3] = 0x8c;
            break;
        case 3:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xb4;
            *(u32*)&reg[3] = 0xa0;
            break;
        case 4:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xc8;
            *(u32*)&reg[3] = 0xb4;
            break;
        case 5:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xdc;
            *(u32*)&reg[3] = 0xc8;
            break;
        case 6:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xf0;
            *(u32*)&reg[3] = 0xdc;
            break;
        }
    }
}

void *fn_801321F4(void *arg0, void **arg1, s32 arg2) {
    u8 fn_800386B0(void *);
    s8 fn_8003B2D0(void *);
    void *fn_800A8978(void *);
    extern M2C_UNK lbl_80275AC0;
    s8 temp_r3;
    void *temp_r30;

    temp_r30 = *arg1;
    switch (arg2) {                                 /* irregular */
    case 1:
        return fn_800A8978(M2C_FIELD(temp_r30, void **, 0x18C));
    case 2:
        fn_80231D94(&lbl_80275AC0 + 0x33C, (s8) M2C_FIELD(temp_r30, u8 *, 0x19A));
block_19:
    default:
        return arg0;
    case 3:
        if (fn_800386B0(temp_r30) == 0xFF) {
            fn_80231D94(arg0, (s8) (&lbl_80275AC0 + 0x340));
        } else {
            fn_80231D94(arg0, (s8) (&lbl_80275AC0 + 0x33C), (void *) fn_800386B0(temp_r30));
        }
        goto block_19;
    case 4:
        fn_80231D94(&lbl_80275AC0 + 0x33C, (s8) M2C_FIELD(temp_r30, u8 *, 0x1A8));
        goto block_19;
    case 5:
        temp_r3 = fn_8003B2D0(temp_r30);
        if (temp_r3 >= (s8) M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x18C), u8 *, 0x4C)) {
            fn_80231D94(arg0, (s8) (&lbl_80275AC0 + 0x4B6), &lbl_80275AC0 + 0x423, &lbl_80275AC0 + 0x428);
        } else {
            fn_80231D94(arg0, (s8) (&lbl_80275AC0 + 0x4BF), (void *) temp_r3);
        }
        goto block_19;
    case 0:
        return NULL;
    }
}

s8 fn_8013236C(void **arg1, s32 arg2) {
    u8 fn_800386B0();
    s8 fn_8003B2D0();
    void *temp_r3;

    temp_r3 = *arg1;
    switch (arg2) {                                 /* irregular */
    case 1:
        return -(s8) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x18C), u16 *, 0x38);
    case 3:
        return (s8) fn_800386B0();
    case 5:
        return fn_8003B2D0();
    case 4:
        return (s8) M2C_FIELD(temp_r3, u8 *, 0x1A8);
    case 2:
        return (s8) M2C_FIELD(temp_r3, u8 *, 0x19A);
    case 0:
        return -(s8) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x188), u16 *, 0x5A);
    default:
        return 0;
    }
}

void *fn_80132414(s32 arg0, s32 arg1) {
    extern u8 lbl_80275AC0[];
    switch (arg1) {
    case 1:
        return &lbl_80275AC0[0x4C4];
    case 2:
        return &lbl_80275AC0[0x4D9];
    case 3:
        return &lbl_80275AC0[0x4EB];
    case 4:
        return &lbl_80275AC0[0x4FE];
    case 5:
        return &lbl_80275AC0[0x510];
    default:
        return &lbl_80275AC0[0x247];
    }
}

void fn_801324A0(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5)
{
  switch (arg1)
  {
    case 0:
      *arg2 = 0;
      *arg3 = 0;
      *arg4 = 0x30;
      *arg5 = 0x14;
      return;

    case 1:
      *arg2 = 0;
      *arg3 = 0x14;
      *arg4 = 0x30;
      *arg5 = 0x28;

    return;
    case 2:
      *arg2 = 0;
      *arg3 = 0x28;
      *arg4 = 0x30;
      *arg5 = 0x3C;
      return;

    case 3:
      *arg3 = 0x3C;
      *arg4 = 0x30;
      *arg2 = 0;
      *arg5 = 0x50;
      return;

    case 4:
      *arg2 = 0;
      *arg3 = 0x50;
      *arg4 = 0x30;
      *arg5 = 0x64;
      return;

    case 5:
      *arg2 = 0;
      *arg3 = 0x64;
      *arg4 = 0x30;
      *arg5 = 0x78;
      return;

  }

}

void *fn_801325A8(void **arg1, s32 arg2) {
    void *fn_800A8978(s32);
    extern u16 lbl_80275AC0[29];
    void *temp_r3;
    
    temp_r3 = *arg1;
    
    switch (arg2) {
    case 0:
        return NULL;
    case 1:
        return fn_800A8978(M2C_FIELD(temp_r3, s32 *, 0x18C));
    case 2:
        if (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 0x80000000) {
            return &lbl_80275AC0 + 0x523;
        }
        return &lbl_80275AC0 + 0x527;
    default:
        return NULL;
    case 3:
        return NULL;
    }
}

s32 fn_80132624(void **arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = *arg1;
    switch (arg2) {                                 /* irregular */
    case 0:
        return -(s32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x188), u16 *, 0x5A);
    case 1:
        return -(s32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x18C), u16 *, 0x38);
    case 2:
        return (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 0x80000000) == 0;
    default:
        return 0;
    }
}

void *fn_80132688(s32 arg1) {
    extern u16 lbl_80275AC0[];
    switch (arg1) {
    case 1:
        return &lbl_80275AC0[0x4C4 / 2];
    case 2:
        return &lbl_80275AC0[0x52E / 2];
    default:
        return &lbl_80275AC0[0x247 / 2];
    }
}

void fn_801326D0(s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5)
{
  s32 *new_var;
  switch (arg1)
  {
    case 0:
      new_var = arg2;
      *new_var = 0;
      *arg3 = 0;
      *arg4 = 0x30;
      *arg5 = 0x14;
      return;

    case 1:
      *new_var = 0;
      *arg3 = 0x14;
      *arg4 = 0x30;
      *arg5 = 0x28;
      return;

    case 2:
      *new_var = 0;
      *arg3 = 0x2BC;
      if (1)
    {
    }
      *arg4 = 0x30;
      *arg5 = 0x2D0;
      return;

  }

}

extern f32 lbl_8036A500;
extern f32 lbl_8036A50C;
extern f32 lbl_8036A510;
extern f32 lbl_8036A4F0;
extern u8 lbl_80275AC0[];
extern u32 jumptable_8029137C[];
extern u8 lbl_80275AC0[];
