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

s32 fn_8001EF80(void *arg0, s8 arg1, s8 arg2) {
    u8 *ptr;
    u8 var_r0_2;
    s32 tmp;
    
    if (arg1 < 0 || arg2 < 0) {
        return 0;
    }
    
    // Load grid data pointer
    ptr = M2C_FIELD(arg0, u8 **, 0x408E);
    
    // Check bounds
    if ((s8)(arg1 + 1) >= M2C_FIELD(arg0, u8 *, 0xA)) {
        return 0;
    }
    if ((s8)(arg2 + 1) >= M2C_FIELD(arg0, u8 *, 0xB)) {
        return 0;
    }
    if ((s8)(arg1 - 1) < M2C_FIELD(arg0, u8 *, 8)) {
        return 0;
    }
    if ((s8)(arg2 - 1) < M2C_FIELD(arg0, u8 *, 9)) {
        return 0;
    }
    
    // Check if movement is possible in all four directions
    var_r0_2 = 0x10;
    if (ptr[(s8)(arg1 + 1) + (arg2 << 6)] & 0x20) {
        var_r0_2 = 0x20;
    }
    if (ptr[(s8)(arg1 - 1) + (arg2 << 6)] & 0x40) {
        var_r0_2 = 0x40;
    }
    if (ptr[arg1 + ((s8)(arg2 + 1) << 6)] & 0x80) {
        var_r0_2 = 0x80;
    }
    if (ptr[arg1 + ((s8)(arg2 - 1) << 6)] & 0x100) {
        var_r0_2 = 0x100;
    }
    
    // Final check for valid direction
    tmp = M2C_FIELD(arg0, s16 **, 0x14190)[arg1 + (arg2 << 6)];
    if (tmp == 0) {
        return 0;
    }
    
    if ((s32)(ptr[arg1 + (arg2 << 6)] & var_r0_2) != 0) {
        return 1;
    }
    
    return 0;
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

void fn_800227F8(void* arg0, s32 arg1)
{
    s32 r30;
    s32 r31;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r0;
    
    r30 = arg1;
    r31 = (s32)arg0;
    
    // Call to fn_80019DBC
    fn_80019DBC();
    
    if (r30 != 0) {
        return;
    }
    
    // Set a bunch of values at fixed offsets from r31 
    r4 = 1;
    r5 = r31 + 0x2;
    r6 = 1;
    r7 = r31;
    
    // Loop to set some values
    r0 = 0x3;
    r5 = r31 + 0x2;
    r6 = 1;
    
    // Set several values starting at offset 0x4214 in memory
    *(u16*)(r5 + 0x4214) = r4;
    *(u16*)(r5 + 0x4216) = r4;
    *(u16*)(r5 + 0x4218) = r4;
    *(u16*)(r5 + 0x421a) = r4;
    *(u16*)(r5 + 0x421c) = r4;
    *(u16*)(r5 + 0x421e) = r4;
    *(u16*)(r5 + 0x4220) = r4;
    *(u16*)(r5 + 0x4222) = r4;
    
    // Add some more memory operations with incrementing addresses
    
    // Set another batch of values
    *(u16*)(r5 + 0x8214) = r4;  // This address seems to be r5 = offset of r31 + 0x4000 + 0x14 (0x4214)
    *(u16*)(r5 + 0x8216) = r4;
    *(u16*)(r5 + 0x8218) = r4;
    *(u16*)(r5 + 0x821a) = r4;
    *(u16*)(r5 + 0x821c) = r4;
    *(u16*)(r5 + 0x821e) = r4;
    *(u16*)(r5 + 0x8220) = r4;
    *(u16*)(r5 + 0x8222) = r4;
    
    // Add more memory operations with different offsets
    *(u16*)(r5 + 0xc214) = r4;
    *(u16*)(r5 + 0xc216) = r4;
    *(u16*)(r5 + 0xc218) = r4;
    *(u16*)(r5 + 0xc21a) = r4;
    *(u16*)(r5 + 0xc21c) = r4;
    *(u16*)(r5 + 0xc21e) = r4;
    *(u16*)(r5 + 0xc220) = r4;
    *(u16*)(r5 + 0xc222) = r4;
    
    // Another loop with similar operations, but more complex control flow
    
    // Final operations
    *(u16*)(r31 + 0x4214) = 0x7fff;  // Set to maximum value 
    *(u8*)(r31 + 0x4eea) = 1;
    
    // Conditionally set value based on input parameter
    if (arg1 != 0) {
        r4 = *(u8*)(arg1 + 0x42);
        r5 = *(s32*)(arg1 + 0x8);
        r0 = r4 + 0x8;
        r4 = *(s32*)(r5 + r0);
        
        if (r4 < 0) {
            r6 = (unsigned char)r4; // sign extend
            *(u16*)(r7 + 0x4214) = r6;
            
            // Set some more values
            r4 = 0x4;
            fn_80105BC0(arg1, r4);
            
            // Set a value in the end
            *(u8*)(r31 + 0x4eea) = (u8)((0 - *(u8*)(arg1 + 0x1c)) & 0xFF);
        }
    }
    
    return;
}

extern u16 jumptable_80284514[12];
void fn_80022DAC(s32 arg0, s32 arg1) {
    if (arg0 >= 11) {
        return;
    }
    
    switch(arg0) {
        case 0:
        case 1:
        case 2:
        case 3:
            {
                u32 tmp1 = (arg1 & 0xFF000000) >> 24; // r5 -> r3
                u32 tmp2 = (arg1 & 0x00FF0000) >> 16; // r5 -> r0  
                u32 tmp3 = (arg1 & 0x000000FF);       // r5 -> r4
                u32 tmp4 = (arg1 & 0xFF000000) << 24;
                s32 arg2 = ((tmp2 + tmp1) * 0x1000) + tmp4 + tmp3;
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 4:
            {
                u32 tmp1 = (arg1 & 0xFF000000) >> 24; // r5 -> r3
                u32 tmp2 = (arg1 & 0x00FF0000) >> 16; // r5 -> r0  
                u32 tmp3 = (arg1 & 0x000000FF);       // r5 -> r4
                u32 tmp4 = (arg1 & 0xFF000000) << 24;
                s32 arg2 = ((tmp2 + tmp1) * 0x1000) + tmp4 + tmp3;
                s32 arg3 = arg1;  
                fn_800062B0(arg2, arg3);
            }
            break;
        case 5:
            {
                u32 tmp1 = (arg1 & 0xFF000000) >> 24; // r5 -> r3
                u32 tmp2 = (arg1 & 0x00FF0000) >> 16; // r5 -> r0  
                u32 tmp3 = (arg1 & 0x000000FF);       // r5 -> r4
                u32 tmp4 = (arg1 & 0xFF000000) << 24;
                s32 arg2 = ((tmp2 + tmp1) * 0x1000) + tmp4 + tmp3;
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 6:
            {
                u32 tmp1 = (arg1 & 0xFF000000) >> 24; // r5 -> r3
                u32 tmp2 = (arg1 & 0x00FF0000) >> 16; // r5 -> r0  
                u32 tmp3 = (arg1 & 0x000000FF);       // r5 -> r4
                u32 tmp4 = (arg1 & 0xFF000000) << 24;
                s32 arg2 = ((tmp2 + tmp1) * 0x1000) + tmp4 + tmp3;
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 7:
            {
                u32 tmp1 = (arg1 & 0x0000FFFF); // r5 -> r4
                u32 tmp2 = (arg1 & 0xFFFF0000); // r5 -> r0
                s32 arg2 = tmp1 + (tmp2 >> 16);
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 8:
            {
                u32 tmp1 = (arg1 & 0x0000FFFF); // r5 -> r4
                u32 tmp2 = (arg1 & 0xFFFF0000); // r5 -> r0
                s32 arg2 = tmp1 + (tmp2 >> 16);
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 9: 
        case 10:
            {
                u32 tmp1 = (arg1 & 0x0000FFFF); // r5 -> r4
                u32 tmp2 = (arg1 & 0xFFFF0000); // r5 -> r0
                s32 arg2 = tmp1 + (tmp2 >> 16);
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
        case 11:
            {
                u32 tmp1 = (arg1 & 0x0000FFFF); // r5 -> r4
                u32 tmp2 = (arg1 & 0xFFFF0000); // r5 -> r0
                s32 arg2 = tmp1 + (tmp2 >> 16);
                s32 arg3 = arg1;
                fn_800062B0(arg2, arg3);
            }
            break;
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

void fn_80023068(u16 *a0, u16 *a1, f32 a2, f32 a3) {
    extern f32 lbl_8036A7F0;
    
    *(f32*)((u8*)a0 + 0x534) = a2;
    *(f32*)((u8*)a0 + 0x538) = a3;
    *(f32*)((u8*)a1 + 0x534) = a2;
    *(f32*)((u8*)a1 + 0x538) = a3;
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

f32 fn_80023EE0(void *arg0) {
    extern f32 lbl_80368DA8;
    extern f32 lbl_80368DAC;
    s32 temp_r0;
    s32 temp_r31;
    u8 temp_r0_2;
    void *temp_r3;
    void *temp_r3_2;

    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x61);
    temp_r31 = M2C_FIELD(arg0, s16 *, 0x28) + 1;
    switch ((s32) temp_r0_2) {                      /* irregular */
    case 1:
        temp_r3_2 = M2C_FIELD(arg0, void **, 0x3C);
        temp_r0 = M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 4), s32 (**)(void *), 0x64)(temp_r3_2) + 1;
        return (lbl_80368DA8 / (f32) temp_r0) * (f32) (temp_r0 - temp_r31);
    case 2:
        temp_r3 = M2C_FIELD(arg0, void **, 0x3C);
        return (lbl_80368DA8 / (f32) (M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s32 (**)(void *), 0x68)(temp_r3) + 1)) * (f32) temp_r31;
    case 0:
        return lbl_80368DA8;
    default:
        return lbl_80368DAC;
    }
}

void fn_80023FF4(void* arg0, s32 arg1, s32 arg2) {
    s32 r3;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    
    r3 = *(s32*)((u8*)arg0 + 0x2A);
    if (r3 == 0) {
        return;
    }
    
    r4 = *(s32*)((u8*)arg0 + 0x26);
    r5 = arg2 * 0xC;
    r6 = ((s8)r4 << 0x10) >> 0x10;
    r7 = (r6 << 2) + r5;
    
    if (r7 < 0) {
        return;
    }
    
    r8 = *(s32*)(r7 + (u8*)arg0 + 0x40E8);
    if (r8 == 0) {
        return;
    }
    
    r9 = (r7 >> 2) & 7;
    if (r9 != 0) {
        return;
    }
    
    *(s32*)((u8*)arg0 + 0x40E8 + r5 + 0x10) = r8;
    *(s32*)((u8*)arg0 + 0x40E8 + r5 + 0xC) = arg1;
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

#pragma cplusplus on
extern "C" M2C_UNK fn_80007124();
extern "C" M2C_UNK fn_8000727C(f32);
extern "C" M2C_UNK fn_80007290(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern "C" M2C_UNK fn_80007858(f32, f32);
extern "C" M2C_UNK fn_80007884();
extern "C" M2C_UNK fn_80007898(M2C_UNK);
extern "C" void fn_80009D74(f32, f32, f32, f32);
extern "C" M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
extern "C" M2C_UNK fn_8000A248();
extern "C" M2C_UNK fn_8000A258();
extern "C" void fn_80024214(void *arg0, void *arg1, void *arg2) {
    struct Model {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual void v12() = 0;
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual f32 v25() = 0;
    };
    struct Drawer {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4(void *) = 0;
    };
    extern f32 lbl_80368DA8;
    extern f32 lbl_80368DB8;
    extern f32 lbl_80368DBC;

    fn_8000A258();
    fn_80009D74((f32) M2C_FIELD(arg1, s16 *, 0x30), (f32) M2C_FIELD(arg1, s16 *, 0x32), M2C_FIELD(arg1, Model **, 0x3C)->v25() - lbl_80368DB8, lbl_80368DA8);
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_80007898(5);
    fn_80007858((f32) M2C_FIELD(arg2, s16 *, 0x30), (f32) M2C_FIELD(arg2, s16 *, 0x32));
    M2C_FIELD(arg2, Drawer **, 0x34)->v4(arg2);
    fn_80007124();
    fn_8000727C(lbl_80368DBC);
    if ((u8) M2C_FIELD(arg2, u8 *, 0x38) != 0) {
        fn_80007290(0xFF, 0xFF, 0, 0xFF);
    }
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        fn_80007290(0, 0, 0, 0xFF);
    }
    fn_80007884();
}
#pragma cplusplus reset
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

void fn_800251EC(void *arg1) {
    M2C_UNK fn_800072B0(s32 *, s32 *, s32 *, s32 *, s32, s32, s32);
    M2C_UNK fn_800075D8();
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009B8C(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern s32 lbl_80368D90;
    extern s32 lbl_80368D94;
    extern s32 lbl_80368D98;
    extern s32 lbl_80368D9C;
    extern f32 lbl_80368DA8;
    extern f32 lbl_80368DAC;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u8 var_r3;
    void *temp_r3;

    fn_8000A258();
    temp_r3 = M2C_FIELD(arg1, void **, 0x3C);
    fn_80009D74((f32) M2C_FIELD(arg1, s16 *, 0x30), (f32) M2C_FIELD(arg1, s16 *, 0x32), M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), f32 (**)(void *), 0x6C)(temp_r3), lbl_80368DA8);
    fn_8000A174(0, 0x12);
    var_r3 = 0;
    if (((u8) M2C_FIELD(arg1, u8 *, 0x2D) == 0) && ((u8) M2C_FIELD(arg1, u8 *, 0x2E) == 0)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        fn_80009B8C(0x50);
    }
    fn_8000A248();
    fn_80007898(3);
    fn_800077D8(lbl_80368DAC, lbl_80368DAC, (f32) M2C_FIELD(arg1, s16 *, 0x34), (f32) M2C_FIELD(arg1, s16 *, 0x36));
    fn_800075D8();
    sp8 = lbl_80368D9C;
    spC = lbl_80368D98;
    sp10 = lbl_80368D94;
    sp14 = lbl_80368D90;
    fn_800072B0(&sp14, &sp10, &spC, &sp8, lbl_80368D94, lbl_80368D98, lbl_80368D9C);
    fn_80007884();
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

void fn_80025C5C(void *arg0, s32 arg1) {
    u8 fn_8017A9DC(s32);
    void fn_8017A810(s32, s32, void *);
    extern u8 lbl_802B14E4[];
    u8 id;

    id = fn_8017A9DC(arg1);
    if (id != 0) {
        *(void **)arg0 = (id != 0) ? lbl_802B14E4 + (id - 1) * 0x280 : NULL;
    } else {
        *(void **)arg0 = NULL;
    }
    id = fn_8017A9DC(arg1);
    if (id != 0) {
        *(void **)((char *)arg0 + 0x4) = (id != 0) ? lbl_802B14E4 + (id - 1) * 0x280 : NULL;
    } else {
        *(void **)((char *)arg0 + 0x4) = NULL;
    }
    *(u8 *)((char *)arg0 + 0x8) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x9) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xA) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xB) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xC) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xD) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xE) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0xF) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x10) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x11) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x12) = fn_8017A9DC(arg1);
    fn_8017A810(arg1, 1, (void *)((char *)arg0 + 0x13));
    *(u8 *)((char *)arg0 + 0x14) = fn_8017A9DC(arg1);
    *(u8 *)((char *)arg0 + 0x15) = fn_8017A9DC(arg1);
    fn_8017A810(arg1, 1, (void *)((char *)arg0 + 0x16));
}

void fn_80025DCC(void *arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = *(void **)arg0;
    if (temp_r3 != NULL) {
        fn_8017A5EC(arg1, *(u8 *)((char *)temp_r3 + 0x198));
    } else {
        fn_8017A5EC(arg1, 0U);
    }
    temp_r3_2 = *(void **)((char *)arg0 + 0x4);
    if (temp_r3_2 != NULL) {
        fn_8017A5EC(arg1, *(u8 *)((char *)temp_r3_2 + 0x198));
    } else {
        fn_8017A5EC(arg1, 0U);
    }
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x8));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x9));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xA));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xB));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xC));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xD));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xE));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0xF));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x10));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x11));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x12));
    fn_8017A430(arg1, 1, (void *)((char *)arg0 + 0x13));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x14));
    fn_8017A5EC(arg1, *(u8 *)((char *)arg0 + 0x15));
    fn_8017A430(arg1, 1, (void *)((char *)arg0 + 0x16));
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

extern u8 lbl_802847EC[16];
void fn_80026374(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_802847EC[16];
    fn_8000CAA0(lbl_802847EC, arg0);
}

s32 fn_800263A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if (arg0 >= 0 || arg0 < -0x200)
        goto label_check_arg1;
    return 3;

label_check_arg1:
    if (arg1 < 0)
        return 4;
    if (arg1 >= 0x200)
        return 5;

    if (arg2 < 0)
    {
        if (arg2 < -0x800)
            return 6;
        else
            return 1;
    }
    else
    {
        if (arg2 < 0x800)
            return 0;
        else
            return 2;
    }
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

extern u8 lbl_802847C8[16];
void fn_80026544(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_802847C8[16];
    fn_8000CAA0(lbl_802847C8, arg0);
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

void fn_800267F8(s32 arg0) {
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
    void fn_8003BE50(void *);
    extern u8 lbl_802EF4C8[];
    fn_8003BE50(*(void **)(lbl_802EF4C8 + 4));
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
    void fn_8003BE50(void *);
    extern u8 lbl_802EF4C8[24];
    fn_8003BE50(*(void **)lbl_802EF4C8);
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
#include "common.h"
#include "unit.h"

s32 func_80025338(struct Unit* unit)
{
    return 0;
}
#include "global.h"
#include "ef.h"

extern u8 lbl_80330EAC[0x1000];
extern u8 lbl_80268E40[];
extern u16 lbl_80368DA0;
extern u16 lbl_80368DA4;
extern u16 lbl_80368DAC;
extern u16 lbl_80368DA8;
extern u32 lbl_8036C410;
extern u32 lbl_8036C414;
