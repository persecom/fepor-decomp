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

extern void* lbl_80367488;
extern s32 lbl_803693C0;
extern s32 lbl_803693C4;
extern f64 lbl_803693C8;
extern f32 lbl_803693D4;
extern f32 lbl_803693D8;
extern f32 lbl_803693E4;

extern u8 lbl_80330708[1400];

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

#pragma scheduling reset

void fn_8009197C(void) {
    extern u32 lbl_803120A0[];
    extern s32 lbl_803674F8;
    
    while (lbl_803674F8 != 0) {
        lbl_803674F8--;
        fn_8000C188(lbl_803120A0[lbl_803674F8]);
    }
}

void fn_800919D8(void) {
    M2C_UNK fn_8000C188(s32, s32);
    extern u32 lbl_803120A0[];
    extern s32 lbl_803674F8;
    s32 temp_r4;

    if ((s32) lbl_803674F8 != 0) {
        temp_r4 = lbl_803674F8 - 1;
        lbl_803674F8 = temp_r4;
        fn_8000C188(lbl_803120A0[temp_r4], temp_r4);
    }
}

void fn_80091A1C(void *arg0) {
    u32 **temp_r30 = (u32**)((u8*)arg0 + 0x8);
    u16 temp_r0 = *(u16*)((u8*)*temp_r30 + 0x2C);
    *(void**)arg0 = *temp_r30;
    *(u8*)((u8*)arg0 + 0x9) = (u8)(temp_r0 & 0xFF);
}

void fn_80091B38(void *arg0) {
    extern f32 lbl_80369764;
    extern f32 lbl_803697A4;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_803697A4;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_80369764;
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    M2C_FIELD(arg0, s8 *, 0x55) = 8;
    M2C_FIELD(arg0, s8 *, 0x56) = 3;
}

void fn_80091B84(void *arg0) {
    u8 r3, r4;
    
    r3 = ((u8*)arg0)[0x54];
    r4 = ((u8*)arg0)[0x55];
    
    if (r3 <= r4) {
        f32 f0, f1, f2, f3, f4;
        
        // First call
        f0 = *(f32*)((u8*)arg0 + 0x3C);
        f1 = *(f32*)((u8*)arg0 + 0x48);
        f2 = (f32)r3;
        f3 = (f32)r4;
        f4 = *(f32*)0x803697B0; // lbl_803697B0
        arg0 = (void*)fn_800067BC(0U, f0, f1, f2, f3, f4);
        
        *(f32*)((u8*)arg0 + 0x30) = *(f32*)((u8*)arg0 + 0x30);
        
        // Second call
        f0 = *(f32*)((u8*)arg0 + 0x40);
        f1 = *(f32*)((u8*)arg0 + 0x4C);
        f2 = (f32)r3;
        f3 = (f32)r4;
        f4 = *(f32*)0x803697B0; // lbl_803697B0
        arg0 = (void*)fn_800067BC(0U, f0, f1, f2, f3, f4);
        
        *(f32*)((u8*)arg0 + 0x34) = *(f32*)((u8*)arg0 + 0x34);
        
        // Third call
        r4 = ((u8*)arg0)[0x54];
        f1 = *(f32*)((u8*)arg0 + 0x44);
        f2 = (f32)r4;
        f3 = *(f32*)((u8*)arg0 + 0x50);
        f4 = *(f32*)0x803697B0; // lbl_803697B0
        arg0 = (void*)fn_800067BC(0U, f1, f2, f3, f4, 0);
        
        *(f32*)((u8*)arg0 + 0x38) = *(f32*)((u8*)arg0 + 0x38);
        
        ((u8*)arg0)[0x54] = r4 + 1;
    }
    
    if (fn_800AA188() != 0) {
        f32 f0, f1, f2;
        f0 = *(f32*)((u8*)arg0 + 0x30);
        f1 = *(f32*)((u8*)arg0 + 0x34);
        f2 = *(f32*)((u8*)arg0 + 0x38);
        
        arg0 = (void*)fn_8008B2B0((s32)f0, (s32)f1, (s32)f2, ((u8*)arg0)[0x6F], (u8*)arg0 + 0x58);
        fn_80009B28();
    }
}

s8 fn_80091DE0(void* arg0, void* arg1) {
    s8 var_r31;
    u32 temp_r0;

    if ((((u32)arg1 & 5) ^ 0) != 0) {
        var_r31 = 3;
loop_2:
        temp_r0 = *(u32*)((u32)arg0 + (var_r31 * 8) + 0x1CC);
        if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
            return var_r31;
        }
        var_r31 -= 1;
        if (var_r31 < 0) {
            goto block_19;
        }
        goto loop_2;
    }
    
    temp_r0 = *(u32*)((u32)arg0 + 0x204);
    if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
        return 7;
    }
    
    temp_r0 = *(u32*)((u32)arg0 + 0x200);
    if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
        return 6;
    }
    
    temp_r0 = *(u32*)((u32)arg0 + 0x1FC);
    if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
        return 5;
    }
    
    temp_r0 = *(u32*)((u32)arg0 + 0x1F8);
    if ((temp_r0 != 0U) && (temp_r0 == (u32)arg1)) {
        return 4;
    }
    
block_19:
    return -1;
}

u8 fn_80091EF0(void *arg1) {
    u8 fn_800940B0();
    s32 temp_r6;
    s32 temp_r8;

    temp_r8 = M2C_FIELD(arg1, s32 *, 0x3C);
    temp_r6 = M2C_FIELD(arg1, s32 *, 0x38) & 0;
    if ((((temp_r8 & 5) ^ 0) | (temp_r6 ^ 0)) != 0) {
        return fn_800940B0() != 0;
    }
    if ((((temp_r8 & 0x18) ^ 0) | (temp_r6 ^ 0)) != 0) {
        return fn_800940B0();
    }
    return 0U;
}

s32 fn_80091F70(s32 arg0, s32 arg1) {
    s32 fn_800061F4();
    s32 fn_8001C914(s32, s32);
    void *fn_8001C9BC(s32);
    u8 var_r0;
    u8 var_r0_2;
    void *temp_r3;
    void *temp_r3_2;

    if (fn_800061F4() == 0x10) {
        temp_r3 = fn_8001C9BC(arg1);
        if (temp_r3 == NULL) {
            var_r0 = 0;
        } else if ((u32) M2C_FIELD(temp_r3, u32 *, 0) == 0U) {
            var_r0 = 0;
        } else {
            var_r0 = M2C_FIELD(temp_r3, u8 *, 4);
        }
        if (var_r0 == 0) {
            return 0;
        }
        return fn_8001C914(arg0, arg1);
    }
    temp_r3_2 = fn_8001C9BC(arg1);
    if (temp_r3_2 == NULL) {
        var_r0_2 = 0;
    } else if ((u32) M2C_FIELD(temp_r3_2, u32 *, 0) == 0U) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = M2C_FIELD(temp_r3_2, u8 *, 5);
    }
    if (var_r0_2 == 0) {
        return 0;
    }
    return fn_8001C914(arg0, arg1);
}

void fn_8009204C(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r0;
    s32 temp_r3_3;
    s32 temp_r0_2;
    s32 temp_r3_4;
    s32 temp_r0_3;
    s32 temp_r5_4;
    s32 temp_r3_5;
    s32 temp_r0_4;
    u8 *temp_r31;
    void *temp_r30;
    void *temp_r29;
    void *temp_r28;
    
    if (arg0 == NULL) {
        return;
    }
    arg0 = *(void**)((u8*)arg0 + 0x8);
    if (arg0 == NULL) {
        return;
    }
    temp_r31 = (u8*)arg0;
    temp_r30 = arg1;
    if ((*(u16 *)((u8*)arg1 + 0x10) & 0x4000) != 0) {
        *(u32*)((u8*)temp_r31 + 0x5C) = 1;
        *(u8*)((u8*)temp_r31 + 0x9) = 1;
        if (*(u32*)((u8*)arg1 + 0x30)) {
            fn_8004B984(arg1);
        }
    }
    *(s32*)((u8*)temp_r31 + 0x58) = *(s32*)((u8*)arg1 + 0x30);
    *(f32*)((u8*)temp_r31 + 0x50) = *(f32*)((u8*)arg1 + 0x24);
    *(f32*)((u8*)temp_r31 + 0x54) = *(f32*)((u8*)arg1 + 0x28);
    temp_r3 = *(s32*)((u8*)arg1 + 0x30);
    if (temp_r3 == 0) {
        return;
    }
    temp_r5 = *(s32*)((u8*)temp_r31 + 0x5C);
    if (temp_r5 != 0) {
        fn_8004BE88(temp_r3, 1);
        *(u8*)((u8*)temp_r31 + 0x9) = *(u8*)((u8*)arg1 + 0x3C);
        *(s32*)((u8*)temp_r31 + 0xAC) = temp_r3;
        if (*(u32*)((u8*)arg1 + 0x40)) {
            fn_8007B990();
        }
        if (*(u32*)((u8*)arg1 + 0x44)) {
            fn_800616A0();
        }
    }
    fn_800C4588(temp_r31);
}

void fn_8009233C(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u32 temp_r4;
    s32 r31;
    
    r31 = arg1;
    temp_r3 = (arg0 & 0xFFFF);
    temp_r4 = ((r31 << 16) | temp_r3);
    *(u32*)(lbl_80330708 + 0x90) = temp_r4;
}

void fn_80092414(s32 arg0) {
    M2C_UNK fn_8001CBA0(s32);
    fn_8001CBA0(arg0 + 0x20C);
}

void fn_80092438(void *arg0) {
    if (*(u8*)((u8*)arg0 + 0x20C) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x24) != 0) {
        *(u8*)((u8*)arg0 + 0x20C) = 1;
    }
    if (*(u8*)((u8*)arg0 + 0x20D) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x25) != 0) {
        *(u8*)((u8*)arg0 + 0x20D) = 1;
    }
    if (*(u8*)((u8*)arg0 + 0x20E) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x26) != 0) {
        *(u8*)((u8*)arg0 + 0x20E) = 1;
    }
    if (*(u8*)((u8*)arg0 + 0x20F) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x27) != 0) {
        *(u8*)((u8*)arg0 + 0x20F) = 1;
    }
    if (*(u8*)((u8*)arg0 + 0x213) == 0 && fn_80105BC0((u8*)arg0 + 0x1BC, 0x28) != 0) {
        *(u8*)((u8*)arg0 + 0x213) = 1;
    }
}

u8 fn_80092ADC(void *arg0, u8 arg1) {
    u8 var_r31;
    s32 r30;
    void *r29;
    void *r28;
    
    r30 = (s32) arg1;
    r29 = arg0;
    r28 = arg0;
    
    // Load value at r28 + 0x20c
    var_r31 = *(u8 *)((u8 *)r28 + 0x20C);
    
    // Check if arg1 != 7
    if ((r30 & 0xFF) != 7) {
        // Call fn_80105BC0 with r28 + 0x1BC and 0x28
        if (fn_80105BC0((u8 *)r28 + 0x1BC, 0x28) == 0) {
            // Load address at r28 + 0x18C
            u32 temp = *(u32 *)((u8 *)r28 + 0x18C);
            // Add index to get the address to check
            u8 *addr = (u8 *)temp + r30;
            if (*(u8 *)(addr + 0x2C) != 0) {
                // Fall through to return 0, which is already set
                goto end;
            }
        } else {
            // Fall through to return 0, which is already set
            goto end;
        }
    }
    
    // Check arg1 value with switches
    switch (r30) {
        case 0:
            if (fn_80105BC0((u8 *)r28 + 0x1BC, 0x24) != 0) {
                goto block_21;
            }
            var_r31 = 0;
            break;
        case 1:
            if (fn_80105BC0((u8 *)r28 + 0x1BC, 0x25) != 0) {
                goto block_21;
            }
            var_r31 = 0;
            break;
        case 2:
            if (fn_80105BC0((u8 *)r28 + 0x1BC, 0x26) != 0) {
                goto block_21;
            }
            var_r31 = 0;
            break;
        case 3:
            if (fn_80105BC0((u8 *)r28 + 0x1BC, 0x27) != 0) {
                goto block_21;
            }
            var_r31 = 0;
            break;
        case 7:
            if (fn_80105BC0((u8 *)r28 + 0x1BC, 0x28) != 0) {
                goto block_21;
            }
            var_r31 = 0;
            break;
        default:
block_21:
            if (fn_80105BC0((u8 *)r28 + 0x1BC, 2) == 0) {
                // Fall through to end
                goto end;
            }
            if ((s32)var_r31 > 0xFB) {
                var_r31 = 0xFB;
            }
            break;
    }

end:
    if (var_r31 > 0x79U) {
        var_r31 = 0x79;
    }
    
    return var_r31;
}

u8 fn_80092C50(void *arg0, u8 arg1, u8 arg2) {
    void *r29;
    u8 r30;
    u8 r31;
    
    if ((arg1 & 0x7) != 7) {
        r29 = (u8 *)arg0 + 0x1BC;
        if (fn_80105BC0(r29, 0x28) == 0) {
            return 0;
        }
        
        r30 = *((u8 *)arg0 + 0x18C + arg1);
        if (r30 == 0) {
            switch (arg1) {
                case 0:
                    if (fn_80105BC0(r29, 0x24) == 0) {
                        return 0;
                    }
                    break;
                case 1:
                    if (fn_80105BC0(r29, 0x25) == 0) {
                        return 0;
                    }
                    break;
                case 2:
                    if (fn_80105BC0(r29, 0x26) == 0) {
                        return 0;
                    }
                    break;
                case 3:
                    if (fn_80105BC0(r29, 0x27) == 0) {
                        return 0;
                    }
                    break;
                case 7:
                    if (fn_80105BC0(r29, 0x28) == 0) {
                        return 0;
                    }
                    break;
                default:
                    return 0;
            }
        } else {
            r31 = arg2;
            if (r31 > 0xFB) {
                r31 = 0xFB;
            }
            if (fn_80105BC0(r29, 2) != 0) {
                return r31;
            } else {
                if (r31 > 0x79) {
                    r31 = 0x79;
                }
                return r31;
            }
        }
    } else {
        r31 = arg2;
        if (r31 > 0x79) {
            r31 = 0x79;
        }
        return r31;
    }
    
    return 0;
}

u8 fn_80092F38(void *arg0) {
    u8 var_r4;

    var_r4 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1EC) != 0U) {
        var_r4 = 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1F4) != 0U) {
        var_r4 = var_r4 + 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1FC) != 0U) {
        var_r4 = var_r4 + 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x204) != 0U) {
        var_r4 = var_r4 + 1;
    }

    return var_r4;
}

s32 fn_80093088(void *arg0) {
    s32 i = 0;
    for (;;) {
        if (*(u32 *)fn_80037BBC(arg0, i) != 0)
            break;
        i++;
        if (i == 4) {
            i = -1;
            break;
        }
    }
    if (i == 0) {
        if (*(u32 *)((u8 *)arg0 + 0x1ec) != 0)
            return 0;
        if (*(u32 *)((u8 *)arg0 + 0x1f4) != 0)
            return 1;
        if (*(u32 *)((u8 *)arg0 + 0x1fc) != 0)
            return 2;
        if (*(u32 *)((u8 *)arg0 + 0x204) != 0)
            return 3;
        return -1;
    }
    return -1;
}

void fn_80093154(s32 arg0, u8 arg1, s32 arg2) {
    M2C_UNK fn_8001C4FC(s32, s32);
    s32 r6;
    u32 r0;

    r6 = arg0;
    r0 = arg1;
    if (r0 < 4U) {
        r0 <<= 24;
        r0 >>= 29;
        r0 += 0x1CC;
        r0 += r6;
        fn_8001C4FC(r0, arg2);
        return;
    }
    r0 -= 4;
    r0 <<= 24;
    r0 >>= 29;
    r0 += 0x1EC;
    r0 += r6;
    fn_8001C4FC(r0, arg2);
}

void fn_800931B0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8001C4FC(s32, s32);
    fn_8001C4FC(arg0 + ((arg1 << 3) & 0x7F8) + 0x1EC, arg2);
}

void fn_800931E4(s32 arg0, s32 arg1, s32 arg2) {
    fn_8001C4FC(arg0 + ((arg1 << 3) & 0x7F8) + 0x1CC, arg2);
}

s32 fn_80093218(void *arg1) {
    s32 r4;
    s32 r6;

    r6 = *(s32 *)((u8 *)arg1 + 0x38);
    r4 = *(s32 *)((u8 *)arg1 + 0x3c);
    if ((r4 & 8) == 0) {
        return 0;
    }
    if ((r6 & 0x100) == 0) {
        return 0;
    }
    return 1;
}

u8 fn_8009326C(void *arg0, void *arg1) {
    u8 fn_800940B0(void *, void *);
    u8 fn_80105BC0(void *, s32);
    u64 flags;
    u8 ok;

    ok = 0;
    flags = M2C_FIELD(arg1, u64 *, 0x38);
    if (!(flags & 4)) {
        return 0;
    }
    if (flags & 0x200) {
        if (fn_80105BC0((u8 *)arg0 + 0x1BC, 9)) {
            ok = 1;
        } else {
            ok = 0;
        }
    } else if (((M2C_FIELD(arg0, u8 *, 0x1A5) >> 4) & 7) == 0) {
        ok = 1;
    } else if (flags & 2) {
        ok = 0;
    } else if (flags & 4) {
        ok = 0;
    } else if (flags & 0x40) {
        ok = 1;
    } else {
        ok = 1;
    }
    if (ok == 0) {
        return 0;
    }
    return fn_800940B0(arg0, arg1) != 0;
}

s32 fn_8009339C(void *arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r7;
    u8 var_r6;

    var_r6 = 1;
    temp_r7 = *(u32*)((u8*)arg1 + 0x3c);
    temp_r4 = *(u32*)((u8*)arg1 + 0x38);
    if ((temp_r7 & 1) == 0) {
        return 0;
    }
    if ((temp_r7 & 0x200) != 0) {
        if (fn_80105BC0((u8*)arg0 + 0x1bc, 9) != 0) {
            var_r6 = 1;
        } else {
            var_r6 = 0;
        }
    } else if (((*(u8*)((u8*)arg0 + 0x1a5) >> 4U) & 7) == 0) {

    } else if ((temp_r7 & 2) != 0) {
        var_r6 = 0;
    } else if ((temp_r7 & 4) != 0) {
        var_r6 = 0;
    }
    if (var_r6 == 0) {
        return 0;
    }
    return fn_800940B0(arg0, arg1) != 0;
}

s32 fn_80094614(void* arg0, void* arg1) {
    s32 r5;
    s32 r7;

    r7 = *(s32*)((char*)arg1 + 0x3C);
    r5 = *(s32*)((char*)arg1 + 0x38); 
    
    if ((r7 & 0x200) || (r5 & 0)) {
        return fn_80105BC0((s32)arg0 + 0x1BC, 9) != 0;
    }
    
    if (!(((u8)((char*)arg0)[0x1A5] >> 4U) & 7)) {
        return 1;
    }
    
    if ((r7 & 2) || (r5 & 0)) {
        return 0;
    }
    
    if ((r7 & 4) || (r5 & 0)) {
        return 0;
    }
    
    if ((r7 & 0x40) || (r5 & 0)) {
        return 1;
    }
    
    return 1;
}

void fn_800946F0(s32 arg0) {
    s32 r30;
    void *temp_r3;

    r30 = 0;
    do {
        temp_r3 = (void *)fn_80037BD0(arg0, r30);
        if ((temp_r3 != NULL) && (*(u32*)temp_r3 != 0U)) {
            *(u8*)((u8*)temp_r3 + 4) = *(u8*)((u8*)temp_r3 + 4) & ~0x40;
        }
        r30 += 1;
    } while (r30 < 8);
}

void fn_800947E0(s32 arg0) {
    u32 sp40;
    u32 sp38;
    u32 sp30;
    u32 sp28;
    u32 sp20;
    u32 sp18;
    u32 sp10;
    u32 sp8;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r19;
    s32 var_r19_2;
    s32 var_r20_2;
    s32 var_r21_2;
    s32 var_r21_3;
    s32 var_r22;
    u32 *var_r20;
    u32 *var_r21;
    u32 *var_r23;
    u32 *var_r31;

    fn_8001C76C(&sp28);
    fn_8001C76C(&sp30);
    fn_8001C76C(&sp38);
    fn_8001C76C(&sp40);
    fn_8001C76C(&sp8);
    fn_8001C76C(&sp10);
    fn_8001C76C(&sp18);
    fn_8001C76C(&sp20);
    var_r20 = &sp28;
    var_r31 = &sp8;
    var_r23 = var_r20;
    var_r22 = arg0;
    var_r21 = var_r31;
    var_r19 = 0;
    do {
        fn_8001C4FC(var_r23, fn_80037BBC(arg0, var_r19));
        fn_80037BBC(arg0, var_r19);
        fn_8001D580();
        fn_8001C4FC(var_r21, var_r22 + 0x1EC);
        fn_8001D580(var_r22 + 0x1EC);
        var_r19 += 1;
        var_r22 += 8;
        var_r21 += 8;
        var_r23 += 8;
    } while (var_r19 < 4);
    var_r21_2 = 0;
    var_r19_2 = 0;
    do {
        if ((u32) *var_r20 != 0U) {
            temp_r3 = ((var_r19_2 * 8) & 0x7F8) + 0x1CC;
            var_r19_2 += 1;
            fn_8001C4FC(arg0 + temp_r3, var_r20);
        }
        var_r21_2 += 1;
        var_r20 += 8;
    } while (var_r21_2 < 4);
    var_r20_2 = 0;
    var_r21_3 = 0;
    do {
        if ((u32) *var_r31 != 0U) {
            temp_r3_2 = ((var_r21_3 * 8) & 0x7F8) + 0x1EC;
            var_r21_3 += 1;
            fn_8001C4FC(arg0 + temp_r3_2, var_r31);
        }
        var_r20_2 += 1;
        var_r31 += 8;
    } while (var_r20_2 < 4);
    fn_8001C5F8(&sp20, -1);
    fn_8001C5F8(&sp18, -1);
    fn_8001C5F8(&sp10, -1);
    fn_8001C5F8(&sp8, -1);
    fn_8001C5F8(&sp40, -1);
    fn_8001C5F8(&sp38, -1);
    fn_8001C5F8(&sp30, -1);
    fn_8001C5F8(&sp28, -1);
}

void fn_800949A4(s32 arg0, s8 arg1) {
    if (arg1 < 4) {
        fn_80037BBC();
        fn_8001D580(arg0);
        fn_800947E0(arg0);
        return;
    }
    fn_8001D580(arg0 + (((arg1 - 4) * 8) + 0x1EC));
    fn_800947E0(arg0);
}

s32 fn_80094A08(s32 arg0) {
    u8 fn_8001D684();
    M2C_UNK fn_80037BD0();
    M2C_UNK fn_800947E0(s32);
    fn_80037BD0();
    if (fn_8001D684() != 0) {
        fn_800947E0(arg0);
        return 1;
    }
    return 0;
}

s32 fn_80094A54(s32 arg0, s32 arg1)
{
  M2C_UNK fn_8001C5F8(M2C_UNK *, M2C_UNK);
  M2C_UNK fn_8001C76C(M2C_UNK *);
  M2C_UNK *new_var;
  M2C_UNK fn_8001D780(M2C_UNK *, s32);
  s32 fn_80094ABC(s32, M2C_UNK *);
  M2C_UNK sp8;
  short temp_r31;
  fn_8001C76C(&sp8);
  fn_8001D780(&sp8, arg1);
  new_var = &sp8;
  temp_r31 = fn_80094ABC(arg0, new_var);
  fn_8001C5F8(&sp8, -1);
  return temp_r31;
}

void fn_80095070(void* arg0, void* arg1, s32 arg2) {
    s32* r3 = (s32*)arg0;
    s32* r4 = (s32*)arg1;
    
    if (arg2 == 1) {
        s32 i;
        for (i = 0; i < 9; i++) {
            *(r3 + i) = *(r4 + i);
        }
    } else {
        s32 i;
        for (i = 0; i < 9; i++) {
            *(r3 + i) = 0;
        }
    }
}

s32 fn_800955BC(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1EC) == 0U) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1F4) == 0U) {
        return 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1FC) == 0U) {
        return 2;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x204) == 0U) {
        return 3;
    }
    return -1;
}

s32 fn_80095614(s32 arg0) {
    u32 *fn_80037BBC(s32, s32);
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if ((u32) *fn_80037BBC(arg0, var_r31) == 0U) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return -1;
    }
    goto loop_1;
}

void fn_80095678(void) {
    fn_8000BF00(&lbl_80289B00);
}

void fn_800956A0(s32 arg0) {
    extern u8 lbl_8036728B;
    if (!(lbl_8036728B & 2)) {
        fn_8000CAF0(&lbl_80289B00, arg0);
    }
}

void fn_80095850(void *arg0) {
    void *fn_80018ADC();
    M2C_UNK fn_80018AE4();
    M2C_UNK fn_80019384(s32);
    extern f32 lbl_803697C0;
    void *temp_r3;

    temp_r3 = fn_80018ADC();
    M2C_FIELD(temp_r3, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    fn_80019384(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(temp_r3, f32 *, 0x70) = (f32) lbl_803697C0;
    fn_80018AE4();
}

s32 fn_800958A4(s32 arg0) {
    extern u16 lbl_80330EAC[];
    return *(s32*)(lbl_80330EAC + (((u32) (-arg0 | arg0) >> 0x1DU) & 4) + 0xCBC);
}

s32 fn_800958C4(s32 arg0) {
    s32 fn_80095FF8(M2C_UNK);
    if (arg0 & 0x80) {
        return fn_80095FF8(0x80);
    }
    if (arg0 & 0x20) {
        return fn_80095FF8(0x20);
    }
    if (arg0 & 8) {
        return fn_80095FF8(8);
    }
    if (arg0 & 0x10) {
        return fn_80095FF8(0x10);
    }
    return 0;
}

s32 fn_80095BB0(s32 arg0) {
    if (arg0 == 0x10000) { return 0; }
    
    /* Default case */
    return 0;
}

s32 fn_80096264(u8 arg0) {
    u32 r31;
    s32 r0;

    if (arg0 >= 0xFB) {
        r31 = 0xFB;
    } else if (arg0 >= 0xB5) {
        r31 = 0xB5;
    } else if (arg0 >= 0x79) {
        r31 = 0x79;
    } else if (arg0 >= 0x47) {
        r31 = 0x47;
    } else if (arg0 >= 0x1F) {
        r31 = 0x1F;
    } else if (arg0 >= 1) {
        r31 = 1;
    } else {
        return 0;
    }
    
    switch (r31) {                         /* irregular */
    case 0x0:
        return 0;
    case 0xFB:
        return 0xFB;
    case 0x1:
        return 0x1F;
    case 0x1F:
        return 0x47;
    case 0x47:
        return 0x79;
    case 0x79:
        return 0xB5;
    case 0xB5:
        return 0xFB;
    default:
        return 0;
    }
}

s32 fn_80096B80(void){extern u8 lbl_80330EAC[];void fn_800340E4(void*);s16 *idx=(s16*)(lbl_80330EAC+0x8a0);s16 saved=*idx;s32 result=0;fn_800340E4(idx);for(;;){u8 c=((u8*)idx)[4+*idx*4];if(c==0)break;if(c==0x52){result=1;break;}if(c>0x52)break;*idx=*idx+1;}*idx=saved;return result;}

u8 fn_800970C8(s16 arg0){extern u8 lbl_80330EAC[];s16 saved;u8 result=0xff,c;s16 *idx=(s16*)(lbl_80330EAC+0x8a0);saved=*idx;*idx=arg0;*idx=arg0+1;for(;;){s16 n=*idx;c=lbl_80330EAC[0x8a4+n*4];if(c==0x23)break;if(c<0x23){if(c==0)break;if(c<0x20)break;}else if(c<0x50){if(c>=0x25)break;}else if(c<0x53){result=c;break;}else break;*idx=n+1;}*idx=saved;return result;}

s32 fn_80097168(s16 arg0){extern u8 lbl_80330EAC[];s16 saved; s32 count=0; u8 c; s16 *idx=(s16*)(lbl_80330EAC+0x8a0);saved=*idx;*idx=arg0;*idx=arg0+1;for(;;){s16 n=*idx;c=lbl_80330EAC[0x8a4+n*4];if(c==0x23)break;if(c<0x23){if(c==0)break;if(c<0x20)break;}else if(c<0x50){if(c>=0x25)break;}else if(c<0x53)count++;else break;*idx=n+1;}*idx=saved;return count;}

void fn_800973F0(void *arg0, s32 arg1)
{
    u16* ptr = (u16*)arg0;
    
    if (arg1 < 0 || arg1 > 0x45) {
        return;
    }
    
    switch (arg1) {
        case 0:  ptr[0] |= 0x800; break;
        case 1:  ptr[0] |= 0x1000; break;
        case 2:  ptr[0] |= 0x2000; break;
        case 3:  ptr[0] |= 0x200; break;
        case 4:  ptr[0] |= 0x400; break;
        case 5:  ptr[0] |= 0x100; break;
        case 6:  ptr[0] |= 0x8000; break;
        case 7:  ptr[0] |= 0x4000; break;
        case 8:  ptr[0] |= 0x40; break;
        case 9:  ptr[0] |= 0x80; break;
        case 10: ptr[0] |= 0x80; break;
        case 11: ptr[0] |= 0x8; break;
        case 12: ptr[0] |= 0x10; break;
        case 13: ptr[0] |= 0x20; break;
        case 14: ptr[0] |= 0x2; break;
        case 15: ptr[0] |= 0x4; break;
        case 16: ptr[0] |= 0x40; break;
        case 17: ptr[0] |= 0x100; break;
        case 18: ptr[0] |= 0x200; break;
        case 19: ptr[0] |= 0x400; break;
        case 20: ptr[0] |= 0x4000; break;
        case 21: ptr[0] |= 0x2000; break;
        case 22: ptr[0] |= 0x8000; break;
        case 23: ptr[0] |= 0x1; break;
        case 24: ptr[0] |= 0x800; break;
        case 25: ptr[0] |= 0x1000; break;
        case 26: ptr[0] |= 0x4; break;
    }
}

void fn_800975C4(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    
    *(u16*)((char*)arg0 + 0x30) = 0;
}

s16 fn_80097740(void) {
    extern u8 lbl_80330EAC[];
    extern u8 lbl_803120C0[];
    extern void *lbl_80367500;
    extern void *lbl_80367504;
    s16 *idx;
    s16 n;
    s16 result;
    s32 c;
    void *e6;
    void *e7;
    void *p;
    void *t;
    u32 v;
    s32 init;

    idx = (s16 *)(lbl_80330EAC + 0x8a0);
    init = *idx;
    if (init != 0) {
        *idx = init + 1;
    }
    e6 = lbl_803120C0 + 0x14;
    e7 = lbl_803120C0 + 0x28;
    for (;;) {
        n = *idx;
        c = ((u8 *)idx)[(n << 2) + 4];
        switch (c) {
        case 0x20:
            p = (void *)lbl_803120C0;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367500 = p;
                    goto h1;
                }
            }
            lbl_80367500 = NULL;
        h1:
            p = e6;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367504 = p;
                    goto h2;
                }
            }
            lbl_80367504 = NULL;
        h2:
            result = *idx;
            break;
        case 0x21:
            p = e6;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367500 = p;
                    goto h3;
                }
            }
            lbl_80367500 = NULL;
        h3:
            p = (void *)lbl_803120C0;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367504 = p;
                    goto h4;
                }
            }
            lbl_80367504 = NULL;
        h4:
            result = *idx;
            break;
        case 0x22:
            p = e7;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367500 = p;
                    goto h5;
                }
            }
            lbl_80367500 = NULL;
        h5:
            p = e6;
            if (p != NULL) {
                t = *(void **)p;
                v = (t != NULL) ? M2C_FIELD(t, u32 *, 0x280) : 0;
                if (v != 0) {
                    lbl_80367504 = p;
                    goto h6;
                }
            }
            lbl_80367504 = NULL;
        h6:
            result = *idx;
            break;
        case 0x24:
            result = n;
            break;
        case 0x00:
            return result;
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x54:
            return result;
        }
        *idx = *idx + 1;
    }
}

void fn_80097970(void) {
    extern u16 lbl_80330EAC[];
    fn_800340E4(&lbl_80330EAC[0x8A0 / sizeof(u16)]);
}

void fn_8009799C(void) {
    extern u16 lbl_803120C0[32]; // 64 bytes, 16-element array of u16

    void* r4;
    u16* r3 = lbl_803120C0;

    // First check
    r4 = (void*)M2C_FIELD(r3, void**, 0);
    if (r4 != NULL) {
        void* temp_r4 = M2C_FIELD(r4, void**, 0x280);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s8*, 0x16C) = -1;
        }
    }

    // Second check
    r4 = (void*)M2C_FIELD(r3, void**, 0x5); // offset 0x14 in words
    if (r4 != NULL) {
        void* temp_r4_2 = M2C_FIELD(r4, void**, 0x280);
        if (temp_r4_2 != NULL) {
            M2C_FIELD(temp_r4_2, s8*, 0x16C) = -1;
        }
    }

    // Third check
    r4 = (void*)M2C_FIELD(r3, void**, 0x5); // offset 0x14 in words
    if (r4 != NULL) {
        void* temp_r4_3 = M2C_FIELD(r4, void**, 0x280);
        if (temp_r4_3 != NULL) {
            M2C_FIELD(temp_r4_3, s8*, 0x16C) = -1;
        }
    }
}

void fn_800979FC(void){s8 fn_8004ABD4(void*,s32,s32);extern u8 lbl_80330EAC[];extern u8 lbl_803120C0[];s32 i;for(i=0;i<3;i++){void *p=*(void**)(lbl_803120C0+i*0x14);if(p&&*(u32*)((u8*)p+0x280)){void *q=(u8*)p+0x28c;if(*(u32*)q==0)q=0;*(u8*)((u8*)*(u32*)((u8*)p+0x280)+0x16c)=fn_8004ABD4(q,*(u32*)(lbl_80330EAC+0xca8)<=1,*(u32*)(lbl_80330EAC+0xca8));}}}

s32 fn_80098094(void) {
    extern s32 lbl_80367500;
    return lbl_80367500;
}

void *fn_8009809C(void) {
    extern void *lbl_80367500;
    extern void *lbl_80367504;
    extern char lbl_803120C0[0x40];

    u32* temp = (u32*)0x80330EAC;
    if ((*temp & 0x100) != 0) {
        return &lbl_803120C0 + 0x14;
    }
    if (lbl_80367504 == NULL) {
        return lbl_80367500;
    }
    return lbl_80367504;
}

void *fn_800980D4(s32 arg0) {
    extern u16 lbl_803120C0[];
    return &lbl_803120C0[arg0 * 0x28];
}

s32 fn_800980E8(s32 arg0)
{
    extern u16 lbl_803120C0[0x10];
    u16* ptr = &lbl_803120C0[arg0 * 0x14 / sizeof(u16)];
    if (ptr == NULL)
        return 0;
    return ptr[0x280 / sizeof(u16)];
}

s32 fn_80098110(void) {
    extern void **lbl_80367504;
    void *temp_r3;

    if ((void **) lbl_80367504 == NULL) {
        return 0;
    }
    temp_r3 = *lbl_80367504;
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x280);
    }
    return 0;
}

s32 fn_80098140(void) {
    extern void **lbl_80367500;
    void *temp_r3;

    if ((void **) lbl_80367500 == NULL) {
        return 0;
    }
    temp_r3 = *lbl_80367500;
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x280);
    }
    return 0;
}
