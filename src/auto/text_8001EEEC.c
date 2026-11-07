/* Functions from 0x8001EEEC to 0x80028864, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 field_0x0;
    s32 field_0x4;
    s32 field_0x8;
    s32 field_0xC;
    s32 field_0x10;
    s32 field_0x14;
    s32 field_0x18;
    s32 field_0x1C;
    s32 field_0x20;
    s32 field_0x24;
    s32 field_0x28;
    s32 field_0x2C;
    s32 field_0x30;
    s32 field_0x34;
    s32 field_0x38;
} Actor;


void fn_8001EEEC(Actor* actor) {
    if (actor == NULL || actor->field_0x0 == 0) {
        return;
    }
    actor->field_0x4 = 0;
    actor->field_0x34 = 5;
    actor->field_0x38 = 1;
}

void fn_8001EF7C(void) {

}

s32 fn_8001F4CC(void *arg0, s8 arg1, s8 arg2) {
    if (arg1 < (s8) M2C_FIELD(arg0, u8 *, 8)) {
        return 0;
    }
    if (arg1 >= (s8) M2C_FIELD(arg0, u8 *, 0xA)) {
        return 0;
    }
    if (arg2 < (s8) M2C_FIELD(arg0, u8 *, 9)) {
        return 0;
    }
    return arg2 < (s8) M2C_FIELD(arg0, u8 *, 0xB);
}

s32 fn_8001F85C(s32 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    s32 var_r0;
    s32 var_r8;
    u8 var_r0_2;

    var_r8 = arg2 - arg4;
    if (var_r8 < 0) {
        var_r8 = -var_r8;
    }
    var_r0 = arg1 - arg3;
    if (var_r0 < 0) {
        var_r0 = -var_r0;
    }
    if ((s32)(var_r0 + var_r8) != 1) {
        return 0;
    }
    if (arg1 < arg3) {
        var_r0_2 = 2;
    } else if (arg1 > arg3) {
        var_r0_2 = 1;
    } else if (arg2 < arg4) {
        var_r0_2 = 4;
    } else if (arg2 > arg4) {
        var_r0_2 = 8;
    } else {
        var_r0_2 = 0x10;
    }
    return ((M2C_FIELD((arg0 + ((arg1 + (arg2 << 6)) * 2)), u16 *, 0x408E) & var_r0_2) != 0) != 0;
}

void fn_8001FC24(void *arg0) {
    *(u8*)((char*)arg0 + 0x4194) = 0x10;
}

s32 fn_8001FC34(s32 arg0) {
    return arg0 + 0x14194;
}

u8 *fn_8001FC7C(void *arg0, u8 *arg1, s8 arg2, s8 arg3);
u8 *fn_8001FC40(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, u8 *, 0xC) = 1;
    return fn_8001FC7C(arg0, (u8 *)arg0 + 0x14194, arg1, arg2);
}

extern u8 lbl_80366DB8[8];
s32 fn_8000CEE4(s32);
u8 *fn_8001FC7C(void *arg0, u8 *arg1, s8 arg2, s8 arg3) {
    u8 cand[4];
    u16 dist[4];
    u8 buf[0x88];
    u8 *start;
    u8 *src;
    u8 *dst;
    u8 *out;
    s32 i;
    u16 min;
    u8 n;
    u8 dir;

    start = arg1;
    while (M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + (arg3 << 6)] != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x24EEA) != 0) {
            if (((u16 *)((u8 *)arg0 + 0x408E))[(s8)(arg2 + 1) + (arg3 << 6)] & 0x10) {
                dist[0] = 0xFFFF;
            } else {
                dist[0] = M2C_FIELD(arg0, s16 **, 0x14190)[(s8)(arg2 + 1) + (arg3 << 6)];
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[(s8)(arg2 - 1) + (arg3 << 6)] & 0x20) {
                dist[1] = 0xFFFF;
            } else {
                dist[1] = M2C_FIELD(arg0, s16 **, 0x14190)[(s8)(arg2 - 1) + (arg3 << 6)];
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[arg2 + ((s8)(arg3 + 1) << 6)] & 0x80) {
                dist[3] = 0xFFFF;
            } else {
                dist[3] = M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + ((s8)(arg3 + 1) << 6)];
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[arg2 + ((s8)(arg3 - 1) << 6)] & 0x40) {
                dist[2] = 0xFFFF;
            } else {
                dist[2] = M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + ((s8)(arg3 - 1) << 6)];
            }
        } else {
            if (((u16 *)((u8 *)arg0 + 0x408E))[(s8)(arg2 + 1) + (arg3 << 6)] & 0x1) {
                dist[0] = M2C_FIELD(arg0, s16 **, 0x14190)[(s8)(arg2 + 1) + (arg3 << 6)];
            } else {
                dist[0] = 0xFFFF;
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[(s8)(arg2 - 1) + (arg3 << 6)] & 0x2) {
                dist[1] = M2C_FIELD(arg0, s16 **, 0x14190)[(s8)(arg2 - 1) + (arg3 << 6)];
            } else {
                dist[1] = 0xFFFF;
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[arg2 + ((s8)(arg3 + 1) << 6)] & 0x8) {
                dist[3] = M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + ((s8)(arg3 + 1) << 6)];
            } else {
                dist[3] = 0xFFFF;
            }
            if (((u16 *)((u8 *)arg0 + 0x408E))[arg2 + ((s8)(arg3 - 1) << 6)] & 0x4) {
                dist[2] = M2C_FIELD(arg0, s16 **, 0x14190)[arg2 + ((s8)(arg3 - 1) << 6)];
            } else {
                dist[2] = 0xFFFF;
            }
        }
        min = 0xFFFF;
        n = 0;
        for (i = 0; i < 4; i++) {
            if (min > dist[i]) {
                min = dist[i];
            }
        }
        for (i = 0; i < 4; i++) {
            if (min == dist[i]) {
                cand[n++] = lbl_80366DB8[i];
            }
        }
        switch (n) {
        case 1:
            dir = cand[0];
            break;
        case 2:
        case 3:
        case 4:
            dir = cand[fn_8000CEE4(n)];
            break;
        }
        *arg1++ = dir;
        switch (dir) {
        case 1:
            arg2++;
            break;
        case 2:
            arg2--;
            break;
        case 8:
            arg3++;
            break;
        case 4:
            arg3--;
            break;
        }
    }
    src = arg1;
    out = start;
    dst = buf;
    while (src > start) {
        *dst++ = *--src;
    }
    *dst = 0x10;
    src = buf;
    while (*src != 0x10) {
        *out++ = *src++;
    }
    *out = 0x10;
    return start;
}

void fn_8002134C(struct unit* arg0)
{
    u16* temp_r5;
    u16 value;
    
    if (arg0 == NULL) {
        return;
    }
    
    // Load pointer at arg0 + 0x34, then dereference it
    temp_r5 = *(u16**)((char*)arg0 + 0x34);
    
    // Load u16 value from array at offset 0x1C and store back to arg0 + 0x18 
    value = temp_r5[0x1C/sizeof(u16)];
    *(u16*)((char*)arg0 + 0x18) = value;
}

void fn_80022748(void *arg0, void *arg1) {
    u8 temp_r0;

    if (arg1 == NULL) {
        M2C_FIELD(arg0, s8 *, 0x24EE4) = 0;
        M2C_FIELD(arg0, s8 *, 0x24EE5) = 0;
        M2C_FIELD(arg0, s8 *, 0x24EE6) = 0;
        M2C_FIELD(arg0, s8 *, 0x24EE7) = 0;
        return;
    }
    temp_r0 = M2C_FIELD(arg1, u8 *, 8);
    if ((s32) temp_r0 != 1) {
        if ((s32) temp_r0 < 1) {
            if ((s32) temp_r0 < 0) {
                return;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            M2C_FIELD(arg0, s8 *, 0x24EE4) = 0;
            M2C_FIELD(arg0, s8 *, 0x24EE5) = 1;
            M2C_FIELD(arg0, s8 *, 0x24EE6) = 0;
            M2C_FIELD(arg0, s8 *, 0x24EE7) = 0;
            return;
        }
        if ((s32) temp_r0 < 4) {
            M2C_FIELD(arg0, s8 *, 0x24EE4) = 0;
            M2C_FIELD(arg0, s8 *, 0x24EE5) = 1;
            M2C_FIELD(arg0, s8 *, 0x24EE6) = 0;
            M2C_FIELD(arg0, s8 *, 0x24EE7) = 0;
            return;
        }
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x24EE4) = 1;
    M2C_FIELD(arg0, s8 *, 0x24EE5) = 0;
    M2C_FIELD(arg0, s8 *, 0x24EE6) = 1;
    M2C_FIELD(arg0, s8 *, 0x24EE7) = 1;
}

void fn_800227D0(s32 arg0, s32 arg1, s8 arg2) {
    void *temp_r3;

    temp_r3 = (void *)(arg0 + 0x10000 + (arg1 << 1));
    *(s16 *)((u8 *)temp_r3 + 0x4214) = arg2;
    if (arg2 < 0) {
        *(s16 *)((u8 *)temp_r3 + 0x4214) = 0x7FFE;
    }
}

s32 fn_80022FB0(u16 arg0) {
    return arg0 + (arg0 << 0x10);
}

s32 fn_80022FC4(void) {
    return 0x2000;
}

void fn_80022FCC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14190) = arg1;
}

void fn_80022FD8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 *temp_r4;

    temp_r3 = *(s32*)(arg0 + 0x10000);
    if (arg1 >= temp_r3) {
        return;
    }
    
    temp_r4 = (s32*)(arg0 + 0x10004 + (arg1 << 2));
    *temp_r4 = arg2;
    
    arg2 = *(s32*)(arg0 + 0x10008);
    if (arg1 >= arg2) {
        return;
    }
    
    arg2 = *(s32*)(arg0 + 0x1000C + (arg1 << 2));
    *temp_r4 = arg2;
}

f32 fn_800233D0(void *arg0, s8 arg1, s8 arg2, u8 arg3) {
    f32 var_f1;
    f32 var_f2;
    f32 var_f0;

    s32 temp_r6 = (s32)arg3;
    s32 temp_r7 = (s32)arg2;
    s32 temp_r5 = (s32)arg1;
    
    temp_r5 = (temp_r7 << 6) + temp_r5;
    temp_r6 = (temp_r6 << 2) + temp_r5;
    
    var_f0 = *(f32 *)((char *)arg0 + 0x42D4 + (temp_r6 << 1));
    var_f2 = *(f32 *)0x80368D80;
    var_f1 = *(f32 *)0x80330708; // This address is loaded in the instruction
    var_f1 = var_f1 - var_f2;
    var_f1 = var_f1 * var_f0;

    return var_f1;
}

extern struct {
    u8 pad0[0xD];
    u8 unitMap[0x6100];
    u8 pad1;
    s16 costMap[0x4040];
    s8 fogMap[64];
} lbl_802CA518;
void fn_80023DC0(void) {
    fn_8002297C(&lbl_802CA518);
}

void fn_80023E18(void) {
    fn_8000C188();
}

void fn_80023ED0(void) {
    extern s32 lbl_8036723C;
    lbl_8036723C += 1;
}

void *fn_800241C8(void *arg0) {
    void *var_r6;
    void *var_r5;

    var_r6 = M2C_FIELD(arg0, void **, 0x18);
    var_r5 = arg0;
    
    if (var_r6 == NULL) {
        return NULL;
    }
    
loop_6:
    if ((u32) M2C_FIELD(var_r6, u32 *, 0) != (u32) M2C_FIELD(arg0, u32 *, 0)) {
        return var_r6;
    }
    
    if (var_r6 == NULL) {
        return var_r5;
    }
    
    var_r5 = var_r6;
    var_r6 = M2C_FIELD(var_r6, void **, 0x18);
    goto loop_6;
}

void fn_80024364(void **arg0) {
    void (*func)(void) = (void (*)(void)) M2C_FIELD(*arg0, void (**)(void), 0x20);
    func();
}

s32 fn_80024390(void) {
    return 0;
}

void fn_80024728(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
}

void fn_80024734(void *arg0) {
    void **temp_r3;
    M2C_FIELD(arg0, void **, 0x3C);
    temp_r3 = (void **)M2C_FIELD(arg0, void **, 0x3C);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), M2C_UNK (**)(void *, void *), 0x18)(temp_r3, arg0);
}

void fn_80024D18(void *arg1) {
    extern u32 *lbl_80367240;
    extern u8 lbl_80268D90[];
    
    u32 temp_r6 = lbl_80367240[1];
    if (temp_r6 & (lbl_80367240[2] ^ temp_r6) & 0x0C00000C) {
        ((u8*)arg1)[0x62] = 0;
        fn_801475FC(&lbl_80268D90[0x71], 0x64);
    }
}

extern u32 lbl_80367240;
void fn_80024D74(void *arg0) {
    u32 r0;
    u32 r3;
    u32 r5;
    
    // Load global pointer and data from arg0 + 0x4
    r3 = *(u32*)((char*)arg0 + 0x4);
    
    // Perform AND operation with 0x300, check if result is zero
    r0 = r3 & 0x300;
    if (r0 == 0) {
        return;
    }
    
    // Load byte from arg0 + 0x62, extend sign and add to arg0
    r0 = *(u8*)((char*)arg0 + 0x62);
    r0 = (s8)r0;
    r3 = (u32)((char*)arg0 + r0);
    
    // Call function with result
    fn_8000B908(r3);
    
    // Load arg0 + 0x34
    r5 = *(u32*)((char*)arg0 + 0x34);
    
    // Call virtual function via pointer (ptr at r5 + 0x38)  
    ((void (*)(void))*(u32*)(*(u32*)r5 + 0x38))();
}

s32 fn_80025440(void) {
    u8 fn_80166D8C(M2C_UNK *);
    extern M2C_UNK lbl_80330D68;
    s32 var_r3;

    var_r3 = 0x20;
    if (fn_80166D8C(&lbl_80330D68) != 0) {
        var_r3 = 0x40;
    }
    return var_r3;
}

s32 fn_80025478(void) {
    u8 fn_80166D8C(M2C_UNK *);
    extern M2C_UNK lbl_80330D68;
    s32 var_r3;

    var_r3 = 9;
    if (fn_80166D8C(&lbl_80330D68) != 0) {
        var_r3 = 0x40;
    }
    return var_r3;
}

void fn_800254B0(void **arg0) {
    void (**func_ptr)(void) = (void (**)(void))(*arg0);
    func_ptr[2]();
}

void *fn_800254DC(void) {
    extern u16 lbl_80268D90;
    u16* ptr = &lbl_80268D90;
    return ptr + 0x1A;
}

void fn_800254EC(void **arg0) {
    void (**vtable)(void) = (void (**)(void)) *arg0;
    vtable[3]();
}

void *fn_80025518(void) {
    extern u16 lbl_80268D90;
    return (u8*)&lbl_80268D90 + 0x1E;
}

void *fn_80025528(void) {
    extern u8 lbl_80268D90[];
    return &lbl_80268D90[0x2E];
}

s32 fn_80025538(void) {
    return 0;
}

s32 fn_80025540(void) {
    return 5;
}

s32 fn_80025548(void) {
    return 0;
}

s32 fn_80025550(void) {
    return 0;
}

s32 fn_80025558(void) {
    return 0;
}

s32 fn_80025560(void) {
    return 0;
}

s32 fn_80025568(void) {
    return 0;
}

s32 fn_80025570(void) {
    return 0;
}

s32 fn_80025578(void) {
    return 0;
}

s32 fn_80025580(void) {
    return 0;
}

s32 fn_80025588(void) {
    return 1;
}

s32 fn_80025590(void) {
    return 0x10;
}

s32 fn_80025598(void) {
    return 0;
}

s32 fn_800255A0(void) {
    return 0x10;
}

s32 fn_800255A8(s32 *arg0, s32 arg1) {
    return *(arg0 + (arg1 << 2));
}

void fn_800255B8(void) {

}

f32 fn_800255BC(void) {
    extern f32 lbl_80368DC0;
    return lbl_80368DC0;
}

s32 fn_800255C4(void) {
    return 0;
}

s32 fn_800255CC(void) {
    return 0;
}

void fn_800255D4(void) {

}

s32 fn_800255D8(void) {
    return 0;
}

s32 fn_800255E0(void) {
    return 0xC0;
}

void fn_800255E8(void) {

}

s32 fn_800255EC(void) {
    return 0;
}

void *fn_800255F4(void) {
    extern u16 lbl_80268D90;
    return (void *)((u8 *)&lbl_80268D90 + 0xC2);
}

s32 fn_80025604(void) {
    return 0;
}

s32 fn_8002560C(void) {
    return 0;
}

void *fn_80025614(void) {
    extern u16 lbl_80268D90[];
    return &lbl_80268D90[0x8C / sizeof(u16)];
}

void fn_80025624(void *arg0, s8 arg1) {
    M2C_UNK fn_80212CC0(u8, M2C_UNK);
    extern M2C_UNK lbl_80330708;
    if ((u32) (((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x9E) >> 1U) & 1) != 1) {
        fn_80212CC0(M2C_FIELD(arg0, u8 *, 0x1C), 1);
        M2C_FIELD(arg0, s8 *, 0x20) = arg1;
    }
}

void fn_80025680(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) & ~arg1);
}

void fn_80025690(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | arg1);
}

void fn_800256A0(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = ~(arg1 | arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & temp_r4);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & temp_r4);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) & temp_r4);
}

void fn_800256CC(void *arg0) {
    u32 temp_r4;
    void *temp_r3;
    void *temp_r4_10;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;

    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0);
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 2) < -0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x01000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 2) > 0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x02000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 3) < -0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x04000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 3) > 0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x08000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 4) < -0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x10000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 4) > 0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x20000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 5) < -0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x40000000);
    }
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 5) > 0x23) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 0x80000000);
    }
    temp_r4 = M2C_FIELD(arg0, u32 *, 0x18);
    if (temp_r4 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~temp_r4);
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x01000000) {
            temp_r4_2 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_2, u8 *, 2) < 0) {
                M2C_FIELD(temp_r4_2, u8 *, 2) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x02000000) {
            temp_r4_3 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_3, u8 *, 2) > 0) {
                M2C_FIELD(temp_r4_3, u8 *, 2) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x04000000) {
            temp_r4_4 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_4, u8 *, 3) < 0) {
                M2C_FIELD(temp_r4_4, u8 *, 3) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x08000000) {
            temp_r4_5 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_5, u8 *, 3) > 0) {
                M2C_FIELD(temp_r4_5, u8 *, 3) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x10000000) {
            temp_r4_6 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_6, u8 *, 4) < 0) {
                M2C_FIELD(temp_r4_6, u8 *, 4) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x20000000) {
            temp_r4_7 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_7, u8 *, 4) > 0) {
                M2C_FIELD(temp_r4_7, u8 *, 4) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x40000000) {
            temp_r4_8 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_8, u8 *, 5) < 0) {
                M2C_FIELD(temp_r4_8, u8 *, 5) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x80000000) {
            temp_r4_9 = M2C_FIELD(arg0, void **, 0);
            if ((s8) M2C_FIELD(temp_r4_9, u8 *, 5) > 0) {
                M2C_FIELD(temp_r4_9, u8 *, 5) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x40) {
            temp_r4_10 = M2C_FIELD(arg0, void **, 0);
            if ((u8) M2C_FIELD(temp_r4_10, u8 *, 6) != 0) {
                M2C_FIELD(temp_r4_10, u8 *, 6) = 0U;
            }
        }
        if (M2C_FIELD(arg0, u32 *, 0x18) & 0x20) {
            temp_r3 = M2C_FIELD(arg0, void **, 0);
            if ((u8) M2C_FIELD(temp_r3, u8 *, 7) != 0) {
                M2C_FIELD(temp_r3, u8 *, 7) = 0U;
            }
        }
    }
}

extern u8 lbl_802EF438[144];
void *fn_8002595C(s32 arg0) {
    return &lbl_802EF438 + (arg0 * 0x24);
}

s32 fn_80025F0C(s8 arg0, s8 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_802848DC[];
    extern u8 lbl_802B14E4[];
    void *obj;
    void *unit;
    u8 id;

    if (lbl_802CA518.unitMap[arg0 + arg1 * 64] == 0) {
        return 0;
    }
    obj = fn_8000CAA0(lbl_802848DC, arg2);
    id = lbl_802CA518.unitMap[arg0 + arg1 * 64];
    if (id != 0) {
        unit = lbl_802B14E4 + (id - 1) * 0x280;
    } else {
        unit = NULL;
    }
    M2C_FIELD(obj, void **, 0x30) = unit;
    return 1;
}

void fn_80025FA4(void *arg0) {
    M2C_UNK fn_8003E8DC(s32);
    fn_8003E8DC(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_80025FC8(void) {
    extern M2C_UNK lbl_80330EAC[];
    fn_801A4BE0(lbl_80330EAC);
}

void fn_80025FF0(void *arg0) {
    M2C_UNK fn_8019B704(void *, M2C_UNK);
    M2C_UNK fn_801A4958(M2C_UNK *);
    M2C_UNK fn_801A4A88(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_801A75DC(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_80330EAC[];
    fn_801A75DC(lbl_80330EAC, M2C_FIELD(arg0, s32 *, 0x30), -1);
    fn_801A4958(lbl_80330EAC);
    fn_801A4A88(lbl_80330EAC, -0xA);
    fn_8019B704(arg0, 0);
}

void fn_80026054(s32 arg0) {
    M2C_UNK fn_800BEAC0(s32, M2C_UNK, u8, u8);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    if ((s8)lbl_80330EAC[0x488] == 0) {
        fn_800BEAC0(arg0, 0, lbl_802EF4C8[0xF], lbl_802EF4C8[0x10]);
    }
}

void fn_80026130(void) {
    extern u16 lbl_80330EAC[];
    void fn_801A4BE0(u16 *arg0);
    void fn_80050C90(void);
    
    fn_801A4BE0(&lbl_80330EAC[0]);
    if (lbl_80330EAC[0x656] & 0x10) {
        if (lbl_80330EAC[0x140] != 0) {
            fn_80050C90();
        }
        if (lbl_80330EAC[0x2B0] != 0) {
            fn_80050C90();
        }
    }
}

void fn_80026204(void) {
    extern u16 lbl_802EF4E0;
    s32 temp_r3;
    void *temp_r4;

    temp_r3 = 0;
loop_2:
    if (temp_r3 < (s32) lbl_802EF4E0) {
        fn_8002F658(&lbl_802EF4E0, temp_r3);
        temp_r4 = (void *)fn_8002F740();
        temp_r3 += 1;
        M2C_FIELD(temp_r4, s32 *, 0x1A0) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x1A0) & 0xFFFFFFFE);
        goto loop_2;
    }
}

void fn_8002626C(void) {
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 4), u8 *, 0x1A5) = (u8) ((M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 4), u8 *, 0x1A5) & ~7) | 1);
    M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), s32 *, 0x1A0) = (s32) (M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), s32 *, 0x1A0) | 0x1000);
}

void fn_8002629C(s32 *arg0, s32 arg1) {
    s32 fn_80019E04(void *);
    M2C_UNK fn_8002AD04(s32, s32);
    void *fn_8002F658(s32 *, s32);
    s8 fn_8003AFA0(s32);
    M2C_UNK fn_8019C0C0(s32, M2C_UNK *);
    M2C_UNK fn_801A4958(M2C_UNK *);
    M2C_UNK fn_801A75DC(M2C_UNK *, s32, M2C_UNK, M2C_UNK *);
    extern M2C_UNK fn_80026374;
    extern M2C_UNK lbl_80268E40;
    extern s32 lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    extern M2C_UNK lbl_80330EAC;
    
    s32 temp_r28;
    s32 var_r25;
    s8 temp_r3;
    u8 temp_r26;
    u8 temp_r27;
    void *temp_r29;

    temp_r28 = *arg0;
    fn_8002AD04(temp_r28, fn_80019E04(&lbl_80268E40 + 0x1A6));
    var_r25 = 0;
    
loop_2:
    if (var_r25 < lbl_802EF4E0) {
        temp_r29 = fn_8002F658(&lbl_802EF4E0, var_r25);
        temp_r27 = M2C_FIELD(temp_r29, u8 *, 3);
        temp_r26 = M2C_FIELD(temp_r29, u8 *, 2);
        temp_r3 = fn_8003AFA0(*arg0);
        M2C_FIELD(temp_r29, s8 *, 0) = 3;
        var_r25 += 1;
        M2C_FIELD(temp_r29, s8 *, 1) = temp_r3;
        M2C_FIELD(temp_r29, u8 *, 2) = temp_r26;
        M2C_FIELD(temp_r29, u8 *, 3) = temp_r27;
        goto loop_2;
    }
    
    fn_801A75DC(&lbl_80330EAC, lbl_802EF4C8, -1, &lbl_80330EAC);
    fn_801A4958(&lbl_80330EAC);
    fn_8019C0C0(arg1, &fn_80026374);
}

void fn_800264BC(s32 *arg0, s32 arg1) {
    void *fn_80019E04(void *, M2C_UNK *);
    M2C_UNK fn_8002AB9C(s32, s32);
    M2C_UNK fn_8019C110(s32, M2C_UNK *);
    M2C_UNK fn_801A4958(M2C_UNK *);
    M2C_UNK fn_801A75DC(M2C_UNK *, s32, M2C_UNK, M2C_UNK *);
    extern u8 lbl_80268E40[];
    extern s32 lbl_802EF4C8;
    extern u8 lbl_80330EAC[];
    extern void fn_80026544;

    s32 temp_r31;
    
    temp_r31 = *arg0;
    fn_8002AB9C(temp_r31, (s32)fn_80019E04((u8 *)&lbl_80268E40 + 0x1AF, (M2C_UNK *)&lbl_80268E40));
    fn_801A75DC((M2C_UNK *)&lbl_80330EAC, lbl_802EF4C8, -1, (M2C_UNK *)&lbl_80330EAC);
    fn_801A4958((M2C_UNK *)&lbl_80330EAC);
    fn_8019C110(arg1, &fn_80026544);
}

void fn_8002666C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}

void fn_80026678(void *arg0) {
    M2C_UNK fn_800949A4(s32, u8);
    M2C_UNK fn_80094ABC(s32, void *, M2C_UNK, M2C_UNK *);
    M2C_UNK fn_801A4BE0(M2C_UNK *);
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_80330EAC;
    s32 temp_r31;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x54);
    temp_r31 = M2C_FIELD(&lbl_802EF4C8, s32 *, 4);
    M2C_FIELD(temp_r4, u8 *, 5) = (u8) (M2C_FIELD(temp_r4, u8 *, 5) & ~0x40);
    fn_80094ABC(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), temp_r4, 0, &lbl_802EF4C8);
    fn_800949A4(temp_r31, M2C_FIELD(&lbl_802EF4C8, u8 *, 0xA));
    fn_801A4BE0(&lbl_80330EAC);
}

void fn_800266E4(s32 arg0) {
    extern s32 *lbl_802EF4C8;
    extern void *lbl_80330EAC;
    
    fn_80034A8C(lbl_80330EAC, lbl_802EF4C8[0], 0xA, arg0, 1);
}

void fn_80026724(void *arg0) {
    void fn_80091518(void);
    void fn_800915E8(void);
    extern s32 *lbl_802EF4C8;

    s32 var_r5 = lbl_802EF4C8[0];
    if ((u8) *(u8 *) &((s32 **)var_r5)[0x190][2] != 1) {
        fn_800915E8();
        return;
    }
    fn_80091518();
}

void fn_80026770(void *arg0) {
    void fn_8001EDA0(s32, void *);
    u8 *src = (u8 *)arg0 + 0x13;
    *(u8 *)arg0 = *src;
    fn_8001EDA0((s32)arg0 + 0x13, arg0);
}

void fn_800267A0(s32 arg0) {
    void fn_8001C7F0(s32, s32, s32);
    s32 *fn_80037BD0(s32, s32);
    extern struct {
        s32 unk0;
        s32 unk4;
        u8 unk8;
        u8 unk9;
        s8 unkA;
        u8 pad[0x18 - 0xB];
    } lbl_802EF4C8;
    fn_8001C7F0(lbl_802EF4C8.unk0, *fn_80037BD0(lbl_802EF4C8.unk0, lbl_802EF4C8.unkA), arg0);
}

void fn_80026850(s32 arg0) {
    M2C_UNK fn_80037BD0(s32, s8);
    M2C_UNK fn_800913D4(s32, s32);
    extern M2C_UNK lbl_802EF4C8;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(&lbl_802EF4C8, s32 *, 0);
    fn_80037BD0(temp_r31, (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xA));
    fn_800913D4(arg0, temp_r31);
}

void fn_80026994(void) {
    M2C_UNK fn_8003BE50(s32);
    extern M2C_UNK lbl_802EF4C8;
    fn_8003BE50(M2C_FIELD(&lbl_802EF4C8, s32 *, 4));
}

s32 fn_800269C0(s32 arg0) {
    u8 fn_8003C038(void *);
    M2C_UNK fn_80183BE4(void *, s32);
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_80330EAC;
    void *temp_r31;

    if (M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) & 0x100) {
        return 0;
    }
    temp_r31 = M2C_FIELD(&lbl_802EF4C8, void **, 4);
    if ((s8) M2C_FIELD(temp_r31, u8 *, 0x1A8) == 0) {
        return 0;
    }
    if (fn_8003C038(temp_r31) == 0) {
        return 0;
    }
    fn_80183BE4(temp_r31, arg0);
    return 1;
}

void fn_80026A54(void) {
    extern s32 lbl_802EF4C8;
    void fn_8003BE50(s32);
    s32 temp = lbl_802EF4C8;
    fn_8003BE50(temp);
}

s32 fn_80026A80(s32 arg0) {
    u8 fn_8003C038(void *);
    M2C_UNK fn_80183BE4(void *, s32);
    extern void *lbl_802EF4C8;
    void *temp_r31;

    temp_r31 = lbl_802EF4C8;
    if ((s8) M2C_FIELD(temp_r31, u8 *, 0x1A8) == 0) {
        return 0;
    }
    if (fn_8003C038(temp_r31) == 0) {
        return 0;
    }
    fn_80183BE4(temp_r31, arg0);
    return 1;
}

s32 fn_80026AF4(s32 arg0) {
    extern u16 lbl_80330EAC[];
    
    void *temp_r6;
    void *var_r7;
    u8 var_r0;
    void *temp_r4;
    
    var_r7 = NULL;
    temp_r6 = &lbl_80330EAC[0x2E0 / 2];
    
    if (((u8) *(u8*)(((u8*)(&lbl_80330EAC[0x190 / 2])) + 8) == 0) && 
        ((u8) *(u8*)(((u8*)(&lbl_80330EAC)) + 0x2C6) != 0)) {
        var_r7 = &lbl_80330EAC;
    }
    
    if (!(lbl_80330EAC[0xCAC / 2] & 1) && 
        ((u8) *(u8*)(((u8*)(((void**)(&lbl_80330EAC[0x190 / 2]))[0])) + 8) == 0) && 
        ((u8) *(u8*)(((u8*)temp_r6) + 0x2C6) != 0)) {
        var_r7 = temp_r6;
    }
    
    if (var_r7 == NULL) {
        return 0;
    }
    
    if ((s8) *(u8*)(((u8*)var_r7) + 0x1A8) == 0) {
        return 0;
    }
    
    temp_r4 = ((void**)var_r7)[0x28C / 4];
    if (temp_r4 != NULL) {
        var_r0 = *(u8*)(((u8*)temp_r4) + 0x12);
    } else {
        var_r0 = 0xC;
    }
    
    fn_800910D8((s8) var_r0, arg0, -1, -1, -1);
    return 1;
}

void fn_80026E2C(s32 arg0) {
    extern M2C_UNK lbl_802EF4C8;
    fn_8012AA90((s8) M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 4), u8 *, 0x19E), (s8) M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 4), u8 *, 0x19F), arg0);
    M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 4), u8 *, 0x1A5) = (u8) ((M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 4), u8 *, 0x1A5) & ~7) | 1);
}

void fn_80026E88(s32 arg0) {
    M2C_UNK fn_8003EA24(void *, u8, u8);
    M2C_UNK fn_80183D7C(void *, s32, s8, s8, s32);
    extern M2C_UNK lbl_802EF4C8;
    s32 temp_r30;

    temp_r30 = M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), s32 *, 0x194);
    M2C_FIELD(&lbl_802EF4C8, s32 *, 4) = temp_r30;
    fn_8003EA24(M2C_FIELD(&lbl_802EF4C8, void **, 0), M2C_FIELD(&lbl_802EF4C8, u8 *, 0xF), M2C_FIELD(&lbl_802EF4C8, u8 *, 0x10));
    fn_80183D7C(M2C_FIELD(&lbl_802EF4C8, void **, 0), temp_r30, (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xF), (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0x10), arg0);
}

void fn_80026F08(void) {
    extern u16 lbl_802EF4C8[12];
    fn_80050C90((u32*)&lbl_802EF4C8[2]);
    lbl_802EF4C8[4] = 1;
    lbl_802EF4C8[0x1A5 / 2] = (u8) ((lbl_802EF4C8[0x1A5 / 2] & ~7) | 1);
}

void fn_80026F5C(void *arg0) {
    M2C_UNK fn_8012AA90(s32, s32, void *);
    fn_8012AA90((s32) M2C_FIELD(arg0, f32 *, 0x30), (s32) M2C_FIELD(arg0, f32 *, 0x34), arg0);
}

void fn_80026FA0(void *arg0) {
    M2C_UNK fn_8003816C(s32, s32, s32);
    M2C_UNK fn_80183EAC(s32, s32, s32, s32, void *);
    extern M2C_UNK lbl_802EF4C8;
    fn_8003816C(M2C_FIELD(&lbl_802EF4C8, s32 *, 4), (s32) M2C_FIELD(arg0, f32 *, 0x30), (s32) M2C_FIELD(arg0, f32 *, 0x34));
    fn_80183EAC(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), M2C_FIELD(&lbl_802EF4C8, s32 *, 4), (s32) M2C_FIELD(arg0, f32 *, 0x30), (s32) M2C_FIELD(arg0, f32 *, 0x34), arg0);
}

void fn_8002807C(void *arg0) {
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_80050C90(s32);
    fn_8003816C(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u8 *, 0xB), M2C_FIELD(arg0, u8 *, 0xC));
    fn_80050C90(M2C_FIELD(arg0, s32 *, 0));
    fn_8002297C(&lbl_802CA518);
}

void fn_800280C8(s32 arg0, s32 *arg1) {
    extern u8 lbl_802EF4C8[];
    
    if (arg0 >= 0x64) {
        arg0 = 0;
    }
    
    *arg1 = *(s32 *)((char *)lbl_802EF4C8 + arg0 * 4);
}

void fn_800281D8(void *arg0) {
    void *temp_r3;

    M2C_FIELD(arg0, s8 *, 0x12) = 1;
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r3, s32 *, 0x1A0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 0xFFFFFFFE);
}

void fn_8002833C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(arg1, u8 *, 0x19E);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) M2C_FIELD(arg1, u8 *, 0x19F);
    M2C_FIELD(arg0, s8 *, 0x11) = fn_8003A398(arg1);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = -1;
    M2C_FIELD(arg0, u8 *, 0xD) = (u8) M2C_FIELD(arg1, u8 *, 0x19E);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) M2C_FIELD(arg1, u8 *, 0x19F);
    M2C_FIELD(arg0, s8 *, 0xF) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
}

void fn_8002846C(void *arg0) {
    /* Initialize a struct to 0 with some special values. */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = -1;
    M2C_FIELD(arg0, s8 *, 0xC) = -1;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = -1;
    M2C_FIELD(arg0, s8 *, 0xD) = -1;
    M2C_FIELD(arg0, s8 *, 0xE) = -1;
    M2C_FIELD(arg0, s8 *, 0xF) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
}

void fn_800285C0(void *arg0) {
    M2C_UNK fn_80037BD0(s32, s8);
    fn_80037BD0(M2C_FIELD(arg0, s32 *, 0), (s8) M2C_FIELD(arg0, u8 *, 0xA));
}

void fn_800285EC(void) {
    extern u8 lbl_80367707;
    extern s32 lbl_80330EAC[];
    
    if (lbl_80367707 == 0) {
        if ((*(lbl_80330EAC + 0x32B) & 0x80000000) != 0) {
            fn_80098A9C();
            return;
        }
        *(lbl_80330EAC + 0x32B) |= 0x10000000;
        fn_800D5818();
    }
}

void fn_8002863C(void) {

}

extern M2C_UNK lbl_80284668;
s32 fn_80028640(void) {
    s32 fn_8000C0C0(M2C_UNK *);
    extern M2C_UNK lbl_80284668;
    return fn_8000C0C0(&lbl_80284668) != 0;
}

void fn_80028674(void) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
}

void fn_80028694(void) {
    extern u16 lbl_80268E40[];
    fn_800C50FC(&lbl_80268E40[0x212 / sizeof(u16)], fn_800C52C8(), lbl_80268E40);
}

void fn_80028724(void) {
    u8 fn_800BDD08(void *, void *, M2C_UNK *);
    M2C_UNK fn_80146AF0();
    M2C_UNK fn_8014876C(M2C_UNK *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_801487D0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80268E40;
    extern M2C_UNK lbl_8032FF08;
    extern M2C_UNK lbl_80330708;
    if (fn_800BDD08(&lbl_80330708 + 0xB4, &lbl_80268E40 + 0x21E, &lbl_80330708) == 0) {
        fn_80146AF0();
        fn_801487D0(&lbl_8032FF08, 0x3E8);
        fn_8014876C(&lbl_8032FF08, 0x64, 0x3E8);
    }
}

void fn_800287E4(void) {
    extern u8 lbl_80330708[];
    
    fn_8014C7C0(lbl_80330708, lbl_80330708 + 0x504);
    fn_8014C798(lbl_80330708);
    fn_800163F8();
    fn_80016180();
}

void fn_80028824(s32 arg0) {
    extern void *lbl_80330708;
    void *temp_r5;
    
    temp_r5 = lbl_80330708;
    fn_8014C718(temp_r5, arg0, temp_r5);
    fn_800162B8();
}

s32 fn_80028854(void) {
    extern s32 lbl_802EF4C8;
    return lbl_802EF4C8;
}
extern u8 lbl_802EF438[];
