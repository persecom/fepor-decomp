/* Functions from 0x800195BC to 0x8001EE58, found by decomp-toolkit. */
#include "common.h"

void *fn_800195BC(void) {
    extern M2C_UNK lbl_80268330;
    return &lbl_80268330 + 0x1A3;
}

void fn_800195CC(void) {

}

void fn_800195D0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 8);
}

f32 fn_800195EC(void) {
    extern f32 lbl_80368CE8;
    return lbl_80368CE8;
}

void *fn_800195F4(void) {
    extern M2C_UNK lbl_80268330;
    return &lbl_80268330 + 0x1B3;
}

f32 fn_800197B4(s32 arg1) {
    extern s32 lbl_80268308[];
    extern f32 lbl_80268308_f32[];
    s32 temp_r4 = arg1 << 2;
    s32 *temp_r3 = (s32 *) &lbl_80268308 + temp_r4;
    f32 *sp = (f32 *) (((char *) &lbl_80268308) + 0x8);
    sp[0] = *(f32 *)temp_r3;
    sp[1] = *(f32 *)(temp_r3 + 1);
    sp[2] = *(f32 *)(temp_r3 + 2);
    sp[3] = *(f32 *)(temp_r3 + 3);
    return sp[arg1];
}

void *fn_800197F4(void) {
    extern M2C_UNK lbl_80268330;
    return &lbl_80268330 + 0x1C1;
}

f32 fn_80019804(void) {
    extern f32 lbl_80368CE8;
    return lbl_80368CE8;
}

void *fn_800199E8(void) {
    extern s32 lbl_80268330[];
    return (char *) &lbl_80268330 + 0x1D0;
}

s32 fn_80019DA8(u8 arg0) {
    extern s32 lbl_8036720C;
    return lbl_8036720C + (arg0 * 0xC);
}

s32 fn_80019DBC(u8 arg0) {
    extern s32 lbl_803671EC;
    return lbl_803671EC + (arg0 * 0xC);
}

void fn_80019DD0(void) {
    M2C_UNK fn_8000D354();
    fn_8000D354();
}

s32 fn_80019DF0(u8 arg0) {
    extern s32 lbl_803671E8;
    return lbl_803671E8 + (arg0 * 0x28);
}

void fn_80019E04(void) {
    M2C_UNK fn_8000D354();
    fn_8000D354();
}

s32 fn_80019E24(s32 arg0) {
    extern s32 lbl_803671E4;
    if (arg0 == 0) {
        return 0;
    }
    return lbl_803671E4 + ((arg0 - 1) * 0x48);
}

void fn_80019E48(void) {
    M2C_UNK fn_8000D354();
    fn_8000D354();
}

s32 fn_80019E68(s32 arg0) {
    extern s32 lbl_803671DC;
    if (arg0 == 0) {
        return 0;
    }
    return lbl_803671DC + ((arg0 - 1) * 0x64);
}

void fn_80019E8C(void) {
    M2C_UNK fn_8000D354();
    fn_8000D354();
}

s32 fn_80019EAC(s32 arg0) {
    extern s32 lbl_803671D4;
    if (arg0 == 0) {
        return 0;
    }
    return lbl_803671D4 + ((arg0 - 1) * 0x64);
}

s32 fn_80019ED0(s32 arg0) {
    extern s32 lbl_80367204;
    extern s32 lbl_80367208;
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= (s32) lbl_80367208) {
        return 0;
    }
    return lbl_80367204 + (arg0 * 0x60);
}

void *fn_80019F3C(void *arg0, s16 arg1) {
    extern void *lbl_802842B8;
    extern void *lbl_802842A4;
    s32 temp_r30;

    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x10) = &lbl_802842B8;
        if (arg0 != NULL) {
            *(void **)((char *)arg0 + 0x10) = &lbl_802842A4;
            if (*(u8 *)((char *)arg0 + 0xC) != 0) {
                fn_800C4588(*(s32 *)((char *)arg0));
                *(s32 *)((char *)arg0) = 0;
                *(u8 *)((char *)arg0 + 0xC) = 0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_8001A5D0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}

u32 fn_8001B84C(u32 arg0) {
    u32 result = 0;
    
    if (arg0 == 0) {
        return 0x0;
    }
    
    // Try to reverse the logic directly
    result = ((arg0 & 0xFF000000) >> 24);
    result |= ((arg0 & 0x00FF0000) >> 8);
    result |= ((arg0 & 0x0000FF00) << 8);
    result |= ((arg0 & 0x000000FF) << 24);
    
    return result;
}

void fn_8001B894(void* arg0) {
    u32* ptr = (u32*)arg0;
    u32 value = *ptr;
    
    // Extract individual bytes
    u8 byte0 = (value >> 24) & 0xFF;
    u8 byte1 = (value >> 16) & 0xFF;
    u8 byte2 = (value >> 8) & 0xFF;
    u8 byte3 = value & 0xFF;
    
    // Rearrange bytes and store back
    *ptr = (byte3 << 24) | (byte2 << 16) | (byte1 << 8) | byte0;
}

s32 fn_8001B8E0(void **arg0) {
    u8 *temp_r7;
    s32 r5, r4, r6, r0;
    
    temp_r7 = *arg0;
    r5 = temp_r7[0];
    r4 = temp_r7[1];
    r6 = temp_r7[2];
    r0 = temp_r7[3];
    *arg0 = temp_r7 + 4;
    r5 = r5 << 24;
    r4 = r4 << 16;
    r6 = r6 << 8;
    r0 = r0 + r6 + r4 + r5;
    return r0;
}

u16 fn_8001B91C(void **arg0) {
    u16 temp;

    temp = *(u16*)*arg0;
    *arg0 = (void*)((u32)*arg0 + 2);
    return temp;
}

u8 fn_8001B940(u8 **arg0) {
    u8 *temp_r4;

    temp_r4 = *arg0;
    *arg0 = temp_r4 + 1;
    return *temp_r4;
}

s32 fn_8001B954(s32 *arg0) {
    return *arg0;
}

s32 fn_8001B95C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

extern u16 lbl_802842A4;
void *fn_8001B964(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 0x10) = &lbl_802842A4;
        
        if (*(u8*)((char*)arg0 + 0xC) != 0) {
            fn_800C4588(*(s32*)((char*)arg0));
            *(s32*)((char*)arg0) = 0;
            *(u8*)((char*)arg0 + 0xC) = 0U;
        }
        
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_8001B9DC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 9) = 0x14;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

s32 *fn_8001BC18(void *arg0) {
    s32 *fn_800C29D0(M2C_UNK *);
    extern M2C_UNK lbl_803206EC;
    extern s32 lbl_80368D30;
    s32 sp8;

    if (!(M2C_FIELD(arg0, u8 *, 5) & 0x3F)) {
        sp8 = lbl_80368D30;
        return &sp8;
    }
    return fn_800C29D0(&lbl_803206EC);
}

void fn_8001BD4C(void *arg0, s32 arg1) {
    s32 fn_800C2EF8(M2C_UNK *, s32, s32);
    s32 fn_800C3260(M2C_UNK *);
    extern M2C_UNK lbl_803206EC;
    if (!(M2C_FIELD(arg0, u8 *, 5) & 0x3F)) {
        M2C_FIELD(arg0, u8 *, 5) = (u8) ((M2C_FIELD(arg0, u8 *, 5) & ~0x3F) | (fn_800C3260(&lbl_803206EC) & 0x3F));
    }
    M2C_FIELD(arg0, u8 *, 5) = (u8) ((M2C_FIELD(arg0, u8 *, 5) & ~0x3F) | (fn_800C2EF8(&lbl_803206EC, M2C_FIELD(arg0, u8 *, 5) & 0x3F, arg1) & 0x3F));
}

s8 fn_8001BFB8(void *arg0) {
    s8 fn_800C2ACC(M2C_UNK *);
    extern M2C_UNK lbl_803206EC;
    
    if (!(M2C_FIELD(arg0, u8 *, 5) & 0x3F)) {
        return 0;
    }
    return fn_800C2ACC(&lbl_803206EC);
}

void fn_8001C21C(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A574(s32, M2C_UNK);
    M2C_UNK fn_8017A5C4(s32, u16);
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0);
    if (temp_r3 == NULL) {
        fn_8017A574(arg1, 0);
        return;
    }
    fn_8017A5C4(arg1, M2C_FIELD(temp_r3, u16 *, 0xE));
    fn_8017A5C4(arg1, M2C_FIELD(arg0, u16 *, 4));
}

s32 fn_8001CCE4(u8 arg0) {
    u8 var_r0;

    if (arg0 >= 0xFBU) {
        var_r0 = 0xFB;
    } else if (arg0 >= 0xB5U) {
        var_r0 = 0xB5;
    } else if (arg0 >= 0x79U) {
        var_r0 = 0x79;
    } else if (arg0 >= 0x47U) {
        var_r0 = 0x47;
    } else if (arg0 >= 0x1FU) {
        var_r0 = 0x1F;
    } else if (arg0 >= 1U) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    switch ((s32) var_r0) {                         /* irregular */
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

u32 fn_8001CFA8(u8 arg0) {
    if (arg0 >= 0xFBU) {
        return 0xFBU;
    }
    if (arg0 >= 0xB5U) {
        return 0xB5U;
    }
    if (arg0 >= 0x79U) {
        return 0x79U;
    }
    if (arg0 >= 0x47U) {
        return 0x47U;
    }
    if (arg0 >= 0x1FU) {
        return 0x1FU;
    }
    return (u32) ((arg0 | ~1) - ((u32) (arg0 - 1) >> 1U)) >> 0x1FU;
}

void fn_8001D018(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, M2C_UNK, s32);
    fn_8017A810(arg1, 8, arg0);
}

void fn_8001D044(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, s32);
    fn_8017A430(arg1, 8, arg0);
}

u16 fn_8001D2A4(void* arg0) {
    void** temp_r4 = (void**)arg0;
    u16 var_r5 = 0;

    if (*temp_r4 != NULL) {
        var_r5 = *(u16*)((char*)*temp_r4 + 0x10);
    }

    return (u16)(var_r5 * *(u8*)((char*)arg0 + 4));
}

u8 fn_8001D37C(void *arg0) {
    s8 fn_800C2ACC(M2C_UNK *, s32);
    extern M2C_UNK lbl_803206EC;
    s32 temp_r4;
    s32 var_r0;

    if ((void *) M2C_FIELD(arg0, void **, 0) == NULL) {
        return 0U;
    }
    temp_r4 = M2C_FIELD(arg0, u8 *, 5) & 0x3F;
    if (temp_r4 == 0) {
        var_r0 = 0;
    } else {
        var_r0 = fn_800C2ACC(&lbl_803206EC, temp_r4);
    }
    var_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x1B) - var_r0;
    if (var_r0 < 1) {
        var_r0 = 1;
    }
    return (u8) var_r0;
}

u8 fn_8001D3FC(void *arg0) {
    s8 fn_800C2BA8(M2C_UNK *);
    extern M2C_UNK lbl_803206EC;
    void **var_r31;
    s32 var_r0;
    s8 var_r4;

    if ((void *) M2C_FIELD(arg0, void **, 0) == NULL) {
        return 0U;
    }
    
    var_r31 = (void **) arg0;
    if (!(M2C_FIELD(var_r31, u8 *, 5) & 0x3F)) {
        var_r4 = 0;
    } else {
        var_r4 = fn_800C2BA8(&lbl_803206EC);
    }
    
    var_r0 = M2C_FIELD(M2C_FIELD(var_r31, void **, 0), u8 *, 0x1C) + (var_r4 * 3);
    if (var_r0 < 0) {
        var_r0 = 0;
    }
    return (u8) var_r0;
}

u8 fn_8001D500(void *arg0) {
    s8 fn_800C2D60(M2C_UNK *);
    extern M2C_UNK lbl_803206EC;
    s32 var_r0;
    s8 var_r0_2;

    if ((void *) M2C_FIELD(arg0, void **, 0) == NULL) {
        return 0U;
    }
    if (!(M2C_FIELD(arg0, u8 *, 5) & 0x3F)) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = fn_800C2D60(&lbl_803206EC);
    }
    var_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x19) + var_r0_2;
    if (var_r0 < 1) {
        var_r0 = 1;
    }
    return (u8) var_r0;
}

u8 fn_8001DD04(void) {
    s8 fn_8003AFA0();
    s8 temp_r3;
    u8 var_r3;

    temp_r3 = fn_8003AFA0();
    var_r3 = (u8) ((s32) (((u32) temp_r3 >> 0x1FU) + temp_r3) >> 1);
    if (var_r3 < 5U) {
        var_r3 = 5;
    }
    if (var_r3 > 0xFU) {
        var_r3 = 0xF;
    }
    return var_r3;
}

u8 fn_8001DD54(void *arg0, s32 arg1) {
    s8 temp_r3;
    u8 var_r3;

    var_r3 = M2C_FIELD(arg0, u8 *, 0x1E);
    if (var_r3 == 0xFF) {
        temp_r3 = fn_8003AFA0(arg1);
        var_r3 = (u8) ((s32) (((u32) temp_r3 >> 0x1FU) + temp_r3) >> 1);
        if (var_r3 < 5U) {
            var_r3 = 5;
        }
        if (var_r3 > 0xFU) {
            var_r3 = 0xF;
        }
    }
    return var_r3;
}

u8 fn_8001DDB4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1E);
}

u8 fn_8001DDBC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1E);
}

s32 fn_8001DDC4(u8 arg0) {
    if ((arg0 >= 4U) && (arg0 <= 7U)) {
        return 1;
    }
    return 0;
}

u8 fn_8001DDE8(void *arg0) {
    return (u8) ((((M2C_FIELD(arg0, s32 *, 0x3C) & 0x40E) ^ 0) | ((M2C_FIELD(arg0, s32 *, 0x38) & 0) ^ 0)) != 0);
}

void *fn_8001ED1C(void *arg0) {
    void *fn_8000E0E4();
    extern u32 lbl_80268820;
    if (M2C_FIELD(arg0, u32 *, 8) == 0U) {
        return (void *) ((u32) &lbl_80268820 + 0x4BE);
    }
    return fn_8000E0E4();
}

s32 fn_8001ED58(void *arg0) {
    s32 fn_8000E0E4(s32);
    if (fn_8000D354(M2C_FIELD(arg0, s32 *, 4)) != 0U) {
        return fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
    }
    return M2C_FIELD(arg0, s32 *, 0);
}

void fn_8001EDA0(u8 *arg0) {
    u8 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 & 0x80) {
        *arg0 = temp_r4 | 3;
    }
}
extern void *lbl_80367204;
extern s32 lbl_80367208;
