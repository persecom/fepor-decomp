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

void fn_800931B0(s32 arg0, u8 arg1, s32 arg2) {
    M2C_UNK fn_8001C4FC(s32, s32);
    fn_8001C4FC(arg0 + (arg1 << 3) + 0x1EC, arg2);
}

void fn_800931E4(s32 arg0, u8 arg1, s32 arg2) {
    fn_8001C4FC(arg0 + (arg1 << 3) + 0x1CC, arg2);
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

