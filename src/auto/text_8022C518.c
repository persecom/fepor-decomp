/* Functions from 0x8022C518 to 0x8022CCF8, found by decomp-toolkit. */
#include "common.h"

u32 __ptmf_scall(u32* arg0, u32 arg1) {
    u32 r0 = arg0[0];
    u32 r11 = arg0[1];
    u32 r12 = arg0[2];
    
    arg0 = (u32*)((u8*)arg0 + r0);
    if (r11 < 0) {
        return 0;
    }
    
    arg0 = (u32*)((u8*)arg0 + r12);
    return arg0[arg1];
}

u32* fn_8022C540(u32* param_1, u32 param_2) {
    u32 r11 = param_1[1];
    u32 r12 = param_1[2];
    
    // According to the best attempt (which is not quite right)
    u32 r3_value = 0;
    
    if (param_2 >= 0) {
        u32* r4_ptr = param_1 + param_2;
        r3_value = r4_ptr[r12];
        return (u32*)r3_value;
    }
    
    return param_1; // Return param_1 unchanged
}

s32 fn_8022C568(f32 farg0) {
    extern M2C_UNK lbl_80282AD0;
    f32 var_f2;
    s32 temp_cr0_lt;
    s32 var_r3;

    var_r3 = 0;
    temp_cr0_lt = farg0 < (f32) M2C_FIELD(&lbl_80282AD0, f64 *, 0);
    M2C_ERROR(/* "fcmpu $cr6, $f1, $f3" is not supported, the first arg is not $cr0 */);
    if (temp_cr0_lt == 0) {
        var_r3 = -1;
        if (temp_cr0_lt != 0) {
            M2C_ERROR(/* "fcmpu $cr7, $f1, $f4" is not supported, the first arg is not $cr0 */);
            var_f2 = farg0;
            if (temp_cr0_lt == 0) {
                var_f2 = (f32) ((f64) farg0 - M2C_FIELD(&lbl_80282AD0, f64 *, 0x10));
            }
            var_r3 = (s32) var_f2;
            if (temp_cr0_lt == 0) {
                var_r3 += 0x80000000;
            }
        }
    }
    return var_r3;
}

s32 __div2u(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r9;
    s32 temp_r9_2;
    s32 temp_r9_3;
    s32 var_ctr;
    s32 var_r0;
    s32 var_r3;
    s32 var_r7;
    s32 var_r9;
    u32 temp_r10;

    if (arg0 == 0) {
        var_r0 = CLZ(arg1) + 0x20;
    } else {
        var_r0 = CLZ(arg0);
    }
    
    if (arg2 == 0) {
        var_r9 = CLZ(arg3) + 0x20;
    } else {
        var_r9 = CLZ(arg2);
    }

    if (var_r0 <= var_r9) {
        temp_r9 = 0x40 - (var_r9 + 1);
        temp_r9_2 = (0x40 - var_r0) - temp_r9;
        var_ctr = temp_r9_2;
        
        if (temp_r9_2 >= 0x20) {
            var_r7 = 0;
        } else {
            var_r7 = arg0 >> temp_r9_2;
        }
        
        if (temp_r9_2 >= 0x20) {
            var_r3 = arg1 << (temp_r9_2 - 0x20);
        } else {
            var_r3 = (arg0 << temp_r9_2) | (arg1 >> (0x20 - temp_r9_2));
        }
        
        do {
            u32 carry = (var_r7 >= arg2) ? 1 : 0;
            var_r7 -= arg2 * carry;
            var_r3 <<= 1;
            var_r3 |= carry;
            var_r7 <<= 1;
            var_ctr -= 1;
        } while (var_ctr != 0);
        
        return var_r3;
    }
    return 0;
}

s32 __div2i(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 dividend_high = arg0;
    s32 dividend_low = arg1;
    s32 divisor_high = arg2;
    s32 divisor_low = arg3;
    s32 temp_r9;
    s32 temp_r10;
    s32 temp_r0;
    s32 temp_r9_2;
    s32 temp_r9_3;
    s32 var_ctr;
    s32 var_r0;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r3_2 = dividend_high;
    var_r4 = dividend_low;
    var_r5 = divisor_high;
    var_r6 = divisor_low;
    temp_r9 = var_r3_2 & 0x80000000;
    if (temp_r9 != 0) {
        var_r4 = 0 - var_r4;
        var_r3_2 = -var_r3_2;
        if (M2C_CARRY) {
            var_r4--;
        }
    }
    temp_r10 = var_r5 & 0x80000000;
    if (temp_r10 != 0) {
        var_r6 = 0 - var_r6;
        var_r5 = -var_r5;
        if (M2C_CARRY) {
            var_r6--;
        }
    }
    var_r0 = CLZ(var_r3_2);
    if (var_r3_2 == 0) {
        var_r0 = CLZ(var_r4) + 0x20;
    }
    temp_r9_2 = CLZ(var_r5);
    if (var_r5 == 0) {
        temp_r9_2 = CLZ(var_r6) + 0x20;
    }
    if (var_r0 <= temp_r9_2) {
        var_ctr = 0x40 - temp_r9_2;
        temp_r0 = var_r0 + var_ctr;
        var_ctr = 0x40 - temp_r0;
        if (temp_r0 >= 0x20) {
            var_r7 = 0;
        } else {
            var_r7 = (u32)var_r3_2 >> (temp_r0 - 0x20);
        }
        if (var_r0 <= 0x20) {
            var_r3 = (var_r3_2 << var_r0) | (var_r4 >> (0x20 - var_r0));
        } else {
            var_r3 = var_r4 << (var_r0 - 0x20);
        }
        temp_r9_3 = temp_r9_2;
        do {
            s32 r3_4 = var_r3 * 2 + M2C_CARRY;
            s32 r7_3 = var_r7 * 2 + M2C_CARRY;
            s32 diff = r7_3 - var_r5;
            if (diff >= 0) {
                var_r7 = diff;
                var_r3 = r3_4;
            } else {
                var_r7 = r7_3;
                var_r3 = r3_4 + 1;
            }
        } while (--temp_r9_3 != 0);
        if ((temp_r9 ^ temp_r10) != 0) {
            return -var_r3;
        }
        return var_r3;
    }
    return 0;
}

s32 __mod2u(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 r0;
    s32 r9;
    s32 temp_r10;
    s32 temp_r9;
    s32 var_ctr;
    u32 r7;
    u32 r8;
    
    if (arg0 == 0) {
        r0 = CLZ(arg1) + 0x20;
    } else {
        r0 = CLZ(arg0);
    }
    
    if (arg2 == 0) {
        temp_r9 = CLZ(arg3) + 0x20;
    } else {
        temp_r9 = CLZ(arg2);
    }
    
    if (r0 > temp_r9) {
        return arg0;
    }
    
    temp_r10 = 0x40 - r0;
    var_ctr = temp_r9 - temp_r10;
    mtctr(var_ctr);
    
    if (var_ctr >= 0x20) {
        r8 = 0;
        r7 = 0;
    } else {
        r8 = arg1 >> var_ctr;
        r7 = 0;
    }
        
    if ((s32) (r0 + temp_r9) >= 0x20) {
        s32 shift = 0x20 - r0;
        r7 = arg1 << shift;
        r7 = r8 | r7;
        r8 = arg1 >> temp_r9;
    } else {
        r8 = arg1 >> temp_r9;
    }
    
    if (var_ctr < 0x20) {
        s32 shift = 0x20 - var_ctr;
        r7 = arg0 << shift;
        r7 = r8 | r7;
        r8 = arg0 >> var_ctr;
        
        do {
            u32 carry = (r7 & 0x80000000) != 0;
            
            if ((s32) r7 < 0) {
                r7 = (r7 << 1) | carry;
                temp_r9 = (r7 - arg2) - carry;
                if (temp_r9 >= 0) {
                    r7 = temp_r9;
                }
            } else {
                r7 = (r7 << 1) | carry;
                r7 = (r7 - arg2) - carry;
                if (r7 >= 0) {
                    r7 = r7;
                } else {
                    r7 = r7 + arg2;
                }
            }
            
            var_ctr--;
        } while (var_ctr != 0);
    } else {
        do {
            u32 carry = (r7 & 0x80000000) != 0;
            
            if ((s32) r7 < 0) {
                r7 = (r7 << 1) | carry;
                temp_r9 = (r7 - arg2) - carry;
                if (temp_r9 >= 0) {
                    r7 = temp_r9;
                }
            } else {
                r7 = (r7 << 1) | carry;
                r7 = (r7 - arg2) - carry;
                if (r7 >= 0) {
                    r7 = r7;
                } else {
                    r7 = r7 + arg2;
                }
            }
            
            var_ctr--;
        } while (var_ctr != 0);
    }
    
    return (s32) r7;
}

typedef struct { u32 hi; u32 lo; } UL64;

s32 fn_8022CB08(s32 arg0, u32 arg1, s32 arg2) {
    return (arg0 << arg2) | (arg1 >> (0x20 - arg2)) | (arg1 << (arg2 - 0x20));
}

u32 fn_8022CB2C(u32 hi, u32 lo, s32 s) {
    return (lo >> s) | (hi << (0x20 - s)) | (hi >> (s - 0x20));
}

u32 fn_8022CB50(s32 hi, u32 lo, s32 s) {
    s32 r8 = 0x20 - s;
    s32 r9 = s - 0x20;
    u32 r4 = lo >> s;
    r4 |= (u32)hi << r8;
    {
        s32 r10 = hi >> r9;
        if (r9 > 0) {
            r4 |= (u32)r10;
        }
    }
    return (hi >> s, r4);
}

f32 fn_8022CB78(s32 arg0, u32 arg1) {
    s32 r5;
    u32 r4_2;
    s32 r7_2;
    u32 r7_3;
    u32 r3_2;
    u32 r6_2;
    s32 temp_r7;
    s32 r7_4;
    s32 temp_r8;
    u32 r10;
    u32 r5_2;
    s32 r9;
    s32 temp_r11;
    s32 temp_r12;
    u32 r3_3;

    r5 = arg0 & 0x80000000;
    if (r5 != 0) {
        arg1 = -arg1;
        arg0 = ~arg0;
    }
    if ((arg0 | arg1) != 0) {
        temp_r7 = CLZ(arg0);
        r7_2 = temp_r7 + (((s32) ((temp_r7 << 0x1A) & 0xF8000000) >> 0x1F) & CLZ(arg1));
        r3_2 = (arg0 << r7_2) | (arg1 >> (0x20 - r7_2)) | (arg1 << (r7_2 - 0x20));
        r4_2 = arg1 << r7_2;
        r7_3 = r4_2 & 0x7FF;
        r6_2 = ((0 - r7_2) + 0x43E);
        if ((r7_3 >= 0x400) && ((r7_3 > 0x400) || (r4_2 & 0x800))) {
            r4_2 += 0x800;
            r3_2 += 1;
            r6_2 += 1;
        }
        r5_2 = (((r4_2 << 0x15) | (r4_2 >> 0xBU)) & ~0xFFE00000) | (r3_2 << 0x15);
        r7_4 = r5 | ((r6_2 << 0x14) | ((r3_2 >> 0xBU) & 0xFFFFF));
    } else {
        r5_2 = arg1;
        r7_4 = arg0;
    }
    return (f32) M2C_BITWISE(f64, r7_4);
}

typedef struct {
    u32* vtable;
    u32* data1;
    u32* data2;
} SomeStruct;

