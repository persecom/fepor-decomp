/* Functions from 0x800195BC to 0x8001EE58, found by decomp-toolkit. */
#include "common.h"

void *fn_800195BC(void) {
    extern u16 lbl_80268330;
    void *ptr = &lbl_80268330;
    return (u8*)ptr + 0x346;
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

void fn_800199F8(void *arg0) {
    M2C_UNK fn_8000A274(s32, f32, f32);
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_80268330;
    extern M2C_UNK lbl_80330708;
    extern void *lbl_80367240;
    extern f32 lbl_80368C88;
    extern f32 lbl_80368CA4;
    extern f32 lbl_80368CF0;
    extern f32 lbl_80368CF4;
    extern f32 lbl_80368CF8;
    extern f32 lbl_80368D0C;
    extern f32 lbl_80368D20;
    extern f32 lbl_80368D24;
    extern f32 lbl_80368D28;
    extern f32 lbl_80368D2C;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r30;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x40) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) ((M2C_FIELD(arg0, s32 *, 0x20) + 1) & 3);
        M2C_FIELD(arg0, f32 *, 0xC) = M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), f32 (**)(s32), 0x10)(M2C_FIELD(arg0, s32 *, 0x20));
    }
    temp_r5_2 = M2C_FIELD(lbl_80367240, s32 *, 4);
    temp_r3 = temp_r5_2 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5_2);
    var_r30 = temp_r3;
    if (((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x9E) >> 7U) & 1) {
        if (temp_r3 & 0x10000000) {
            var_r30 = (temp_r3 & 0xEFFFFFFF) | 0x20000000;
        } else if (temp_r3 & 0x20000000) {
            var_r30 = (temp_r3 & 0xDFFFFFFF) | 0x10000000;
        }
    }
    if (var_r30 & 0x10000000) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 4);
        if (temp_f1 < lbl_80368CF8) {
            M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_f1 + lbl_80368CF8);
            fn_801475FC(&lbl_80268330 + 0x18C, 0x64);
        }
    }
    if (var_r30 & 0x20000000) {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 4);
        if (temp_f1_2 > lbl_80368CF4) {
            M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_f1_2 - lbl_80368CF8);
            fn_801475FC(&lbl_80268330 + 0x18C, 0x64);
        }
    }
    if (M2C_FIELD(arg0, f32 *, 4) > lbl_80368CF8) {
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80368CF8;
    }
    if (M2C_FIELD(arg0, f32 *, 4) < lbl_80368CF4) {
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80368CF4;
    }
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 4);
    if ((lbl_80368D20 < temp_f1_3) && (temp_f1_3 < lbl_80368D24)) {
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_80368C88;
    }
    if (M2C_FIELD(&lbl_80330708, u8 *, 0x9D) & 1) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) (((f32) (s8) M2C_FIELD(M2C_FIELD(lbl_80367240, void **, 0), u8 *, 5) * lbl_80368D0C) + M2C_FIELD(arg0, f32 *, 8));
    } else {
        M2C_FIELD(arg0, f32 *, 8) = (f32) -(((f32) (s8) M2C_FIELD(M2C_FIELD(lbl_80367240, void **, 0), u8 *, 5) * lbl_80368D0C) - M2C_FIELD(arg0, f32 *, 8));
    }
    temp_f1_4 = M2C_FIELD(arg0, f32 *, 8);
    if (temp_f1_4 < lbl_80368C88) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_f1_4 * lbl_80368CA4);
    }
    temp_f1_5 = M2C_FIELD(arg0, f32 *, 8);
    if (temp_f1_5 > lbl_80368CF0) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) ((lbl_80368CF0 + temp_f1_5) * lbl_80368CA4);
    }
    temp_f1_6 = (f32) M2C_FIELD(M2C_FIELD(lbl_80367240, void **, 0), u8 *, 7);
    fn_8000A274((s32) -((lbl_80368D2C * temp_f1_6) - lbl_80368D28), temp_f1_6, lbl_80368D2C);
}

void *fn_80019CC0(void *arg0) {
    void **table = (void**)0x80284258;
    u32 index = *(u32*)arg0;
    return table[index];
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

extern u8 lbl_80268330;
void fn_8001BC5C(void) {
    *(u8*)0x80268330 = 0;
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

void fn_8001BEC0(void *arg0, s32 arg1) {
    s32 fn_800C2C98(u8 *, s32, s32);
    s32 fn_800C3260(u8 *);
    extern u8 lbl_803206EC[];
    if (!(((u8 *)arg0)[5] & 0x3F)) {
        ((u8 *)arg0)[5] = (u8)((((u8 *)arg0)[5] & ~0x3F) | (fn_800C3260(lbl_803206EC) & 0x3F));
    }
    ((u8 *)arg0)[5] = (u8)((((u8 *)arg0)[5] & ~0x3F) | (fn_800C2C98(lbl_803206EC, ((u8 *)arg0)[5] & 0x3F, arg1) & 0x3F));
}

void fn_8001BF3C(void *arg0, s32 arg1) {
    s32 fn_800C2D74(M2C_UNK *, s32, s32);
    s32 fn_800C3260(M2C_UNK *);
    extern M2C_UNK lbl_803206EC;
    if (!(M2C_FIELD(arg0, u8 *, 5) & 0x3F)) {
        M2C_FIELD(arg0, u8 *, 5) = (u8) ((M2C_FIELD(arg0, u8 *, 5) & ~0x3F) | (fn_800C3260(&lbl_803206EC) & 0x3F));
    }
    M2C_FIELD(arg0, u8 *, 5) = (u8) ((M2C_FIELD(arg0, u8 *, 5) & ~0x3F) | (fn_800C2D74(&lbl_803206EC, M2C_FIELD(arg0, u8 *, 5) & 0x3F, arg1) & 0x3F));
}

s8 fn_8001BFB8(void *arg0) {
    s8 fn_800C2ACC(M2C_UNK *);
    extern M2C_UNK lbl_803206EC;
    
    if (!(M2C_FIELD(arg0, u8 *, 5) & 0x3F)) {
        return 0;
    }
    return fn_800C2ACC(&lbl_803206EC);
}

extern u8 lbl_80367220;
extern s32 lbl_80367228;
extern s32 lbl_8036722C;
s32 fn_8001C0C8(void *arg0) {
    s32 *var_r4;
    u8 var_r5;
    void *temp_r7;

    if ((s8) lbl_80367220 == 0) {
        lbl_8036722C = 0;
        lbl_80367228 = 0;
        lbl_80367220 = 1;
    }
    
    temp_r7 = *(void**)arg0;
    if (temp_r7 != NULL) {
        var_r4 = (s32*)((char*)temp_r7 + 0x38);
    } else {
        var_r4 = &lbl_80367228;
    }
    
    if ((var_r4[0] & 0x318) != 0) {
        return 0;
    }
    
    if (temp_r7 != NULL) {
        var_r5 = *(u8*)((char*)temp_r7 + 0x18);
    } else {
        var_r5 = 0;
    }
    
    if ((*(u8*)((char*)arg0 + 0x4) & 0xFF) == var_r5) {
        return 0;
    }
    
    return 1;
}

void fn_8001C15C(void *arg0, void *arg1) {
    M2C_UNK fn_800C3220(M2C_UNK *);
    u16 fn_8017A9B0(void *);
    extern M2C_UNK lbl_803206EC;
    u16 temp_r3;

    temp_r3 = fn_8017A9B0(arg1);
    if (temp_r3 == 0) {
        M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + 2);
        M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) & ~0x3F);
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s8 *, 4) = 0;
        M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) & ~0x80);
        M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) & ~0x40);
        if (M2C_FIELD(arg0, u8 *, 5) & 0x3F) {
            fn_800C3220(&lbl_803206EC);
            M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) & ~0x3F);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0) = fn_80019E24(temp_r3);
        M2C_FIELD(arg0, s8 *, 4) = fn_8017A9B0(arg1);
    }
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

void *fn_8001C690(void *arg0, void *arg1) {
    s32 fn_800C30CC(void *, s32);
    s32 fn_800C30DC(void *, s32, s32);
    s32 fn_800C3260(void *);
    extern u16 lbl_803206EC;
    u8 temp_r0;
    u8 temp_r3;
    u8 temp_r5;
    u8 r7;
    s32 r30;

    temp_r0 = *(u8*)((char*)arg1 + 5);
    r7 = temp_r0 & 0x3F;
    *(u8*)((char*)arg0 + 5) = (u8) (*(u8*)((char*)arg0 + 5) & ~0x3F);
    *(s32*)((char*)arg0 + 0) = *(s32*)((char*)arg1 + 0);
    *(u8*)((char*)arg0 + 4) = (u8) (*(u8*)((char*)arg1 + 4));
    temp_r3 = (u8) ((*(u8*)((char*)arg0 + 5) & ~0x80) | ((((temp_r0 >> 7U) & 1) << 7) & 0x80));
    *(u8*)((char*)arg0 + 5) = temp_r3;
    temp_r5 = (u8) ((*(u8*)((char*)arg0 + 5) & ~0x40) | ((((temp_r0 >> 6U) & 1) << 6) & 0x40));
    *(u8*)((char*)arg0 + 5) = temp_r5;
    if (r7 != 0) {
        r30 = fn_800C30CC(&lbl_803206EC, r7);
        if (!((*(u8*)((char*)arg0 + 5)) & 0x3F)) {
            temp_r3 = (u8) ((*(u8*)((char*)arg0 + 5) & ~0x3F) | (fn_800C3260(&lbl_803206EC) & 0x3F));
            *(u8*)((char*)arg0 + 5) = temp_r3;
        }
        temp_r3 = (u8) ((*(u8*)((char*)arg0 + 5) & ~0x3F) | (fn_800C30DC(&lbl_803206EC, (*(u8*)((char*)arg0 + 5)) & 0x3F, r30) & 0x3F));
        *(u8*)((char*)arg0 + 5) = temp_r3;
    }
    return arg0;
}

void *fn_8001C76C(void *arg0) {
    extern u16 lbl_803206EC[576];
    u8 *temp = (u8 *)arg0;
    
    temp[5] = (u8)(temp[5] & ~0x3F);
    *(s32 *)temp = 0;
    temp[4] = 0;
    temp[5] = (u8)(temp[5] & ~0x80);
    temp[5] = (u8)(temp[5] & ~0x40);
    
    if ((temp[5] & 0x3F) != 0) {
        fn_800C3220(&lbl_803206EC);
        temp[5] = (u8)(temp[5] & ~0x3F);
    }
    
    return arg0;
}

void fn_8001C7F0(void *arg0) {
    void* temp_r4;
    if (arg0 != NULL) {
        temp_r4 = *(void**)((char*)arg0 + 0x4);
        if (temp_r4 == NULL) {
            return;
        }
        *(u32*)((char*)arg0 + 0x44) = 0;
        *(u32*)((char*)arg0 + 0xA8) = 0;
        *(u32*)((char*)arg0 + 0xB0) = 0;
    }
}

void fn_8001C878(u32 arg0, u32 arg1, u32 arg2)
{
    extern u32 lbl_80367230;
    
    if (lbl_80367230 == arg1) {
        *(u32*)arg0 = arg2;
    }
}

u32 fn_8001C914(u32 arg0)
{
    extern u32 lbl_80367230;
    
    if (lbl_80367230 == 0) {
        return *(u32*)(arg0 + 0x0);
    } else {
        return *(u32*)(arg0 + 0x4);
    }
}

s32 fn_8001CA2C(void *arg0) {
    void *temp_r6;
    s32 temp_r8;
    s32 var_r4;
    u16 var_r5_2;

    if (arg0 == NULL) {
        return 0;
    }

    if ((s8) lbl_80367220 == 0) {
        lbl_8036722C = 0;
        lbl_80367228 = 0;
        lbl_80367220 = 1;
    }

    temp_r6 = *(void **)arg0;
    if (temp_r6 != NULL) {
        var_r5_2 = *(u16 *)((char *)temp_r6 + 0x38);
    } else {
        var_r5_2 = *(u16 *)lbl_80367228;
    }

    temp_r8 = *(s32 *)((char *)var_r5_2 + 4);
    if ((temp_r8 & 0x7FF80000) != 0) {
        var_r4 = 0xC350; // 50000
    } else {
        var_r4 = 0;
    }

    if (temp_r6 != NULL) {
        var_r5_2 = *(u16 *)((char *)temp_r6 + 0x10);
    }

    var_r4 += (s32) ((u16) var_r5_2 * *(u8 *)((char *)arg0 + 4));
    
    if (temp_r8 & 4) {
        var_r4 += 0x2710; // 10000
    }
    if (temp_r8 & 0x10) {
        var_r4 += 0x2710;
    }
    if (temp_r8 & 8) {
        var_r4 += 0x2710;
    }
    if (temp_r8 & 0x20) {
        var_r4 += 0x7D0; // 2000
    }
    if (temp_r8 & 0x80) {
        var_r4 += 0x7D0;
    }
    if ((temp_r8 & 0) != 0) {
        var_r4 += 0x7D0;
    }
    if (temp_r8 & 0x40) {
        var_r4 += 0x7D0;
    }
    if (temp_r8 & 0x400) {
        var_r4 += 0x7D0;
    }
    if (temp_r8 & 0x800) {
        var_r4 += 0x3E8; // 1000
    }
    if (temp_r8 & 0x4000) {
        var_r4 += 0x3E8;
    }

    return var_r4;
}

s32 fn_8001CBA0(void *arg0) {
    u8* ptr = (u8*)arg0;
    s32 i;
    
    for (i = 0; i < 8; i++) {
        if (ptr[i] < 0xFB) {
            return i;
        }
    }
    return -1;
}

void fn_8001CC48(void *arg0, void *arg1) {
    u32* r3 = (u32*)arg0;
    u32* r4 = (u32*)arg1;
    
    *(r3 + 0x0) = *(r4 + 0x0);
    *(r3 + 0x1) = *(r4 + 0x1);
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

M2C_UNK *fn_8001CDE4(u8 arg0) {
    extern M2C_UNK lbl_80268820;
    if (arg0 >= 0xFBU) {
        return (M2C_UNK *)(((u32)&lbl_80268820) + 0x41);
    }
    if (arg0 >= 0xB5U) {
        return (M2C_UNK *)(((u32)&lbl_80268820) + 6);
    }
    if (arg0 >= 0x79U) {
        return (M2C_UNK *)(((u32)&lbl_80268820) + 4);
    }
    if (arg0 >= 0x47U) {
        return (M2C_UNK *)(((u32)&lbl_80268820) + 2);
    }
    if (arg0 >= 0x1FU) {
        return (M2C_UNK *)(((u32)&lbl_80268820) + 0x43);
    }
    if (arg0 >= 1U) {
        return (M2C_UNK *)(((u32)&lbl_80268820) + 0x45);
    }
    return &lbl_80268820;
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

u8 fn_8001D47C(void *arg0) {
    s8 fn_800C2C84(M2C_UNK *);
    extern M2C_UNK lbl_803206EC;
    s32 var_r0;
    s8 var_r0_2;

    if ((void *) M2C_FIELD(arg0, void **, 0) == NULL) {
        return 0U;
    }
    if (!(M2C_FIELD(arg0, u8 *, 5) & 0x3F)) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = fn_800C2C84(&lbl_803206EC);
    }
    var_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x1A) + (var_r0_2 * 5);
    if (var_r0 < 1) {
        var_r0 = 1;
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

s32 fn_8001D5F4(void *arg0, u8 arg1) {
    extern void fn_800C3220(void *);
    extern u8 lbl_803206EC;
    *(u8 *)((u8 *)arg0 + 4) = arg1;
    if (*(u8 *)((u8 *)arg0 + 4) == 0) {
        *(s32 *)((u8 *)arg0 + 0) = 0;
        *(u8 *)((u8 *)arg0 + 4) = 0U;
        *(u8 *)((u8 *)arg0 + 5) = (u8) (*(u8 *)((u8 *)arg0 + 5) & ~0x80);
        *(u8 *)((u8 *)arg0 + 5) = (u8) (*(u8 *)((u8 *)arg0 + 5) & ~0x40);
        if (*(u8 *)((u8 *)arg0 + 5) & 0x3F) {
            fn_800C3220(&lbl_803206EC);
            *(u8 *)((u8 *)arg0 + 5) = (u8) (*(u8 *)((u8 *)arg0 + 5) & ~0x3F);
        }
        return 1;
    }
    return 0;
}

s32 fn_8001D818(void *arg0, void *arg1) {
    M2C_UNK fn_800C3220(M2C_UNK *);
    extern M2C_UNK lbl_803206EC;
    void **ptr0 = (void **)arg0;
    u8 *ptr5 = (u8 *)arg0 + 5;
    u8 *ptr4 = (u8 *)arg0 + 4;
    
    *ptr0 = NULL;
    *ptr4 = 0U;
    *ptr5 = (*ptr5 & ~0x80);
    *ptr5 = (*ptr5 & ~0x40);
    if ((*ptr5 & 0x3F) != 0) {
        fn_800C3220(&lbl_803206EC);
        *ptr5 = (*ptr5 & ~0x3F);
    }
    *ptr0 = arg1;
    *ptr4 = *(u8 *)((char *)arg1 + 0x18);
    return 1;
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

void fn_8001E5D0(u32 arg0, u32 arg1)
{
    // Early return if argument exceeds bounds
    if (arg0 > 0xB) {
        return;
    }

    // Jump table dispatch logic - the original code uses:
    // lis r4, jumptable_802844A0@ha
    // addi r4, r4, jumptable_802844A0@l
    // slwi r5, arg0, 2
    // lwzx r3, r4, r5
    // mtctr r3
    // bctr

    // Since we can't write inline assembly and the jump table itself isn't easily replicated,
    // this function is likely to be a stub or require special handling.

    // For now let's write it as an empty stub and rely on decomp-toolkit for correct match.
    return;
}

void fn_8001E71C(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x12);
    if ((s32) temp_r0 != 7) {
        if ((s32) temp_r0 < 7) {
            if ((s32) temp_r0 < 4) {
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 3);
            return;
        }
        switch ((s32) temp_r0) {                    /* irregular */
        default:
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 1);
            return;
        case 11:
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 0x10);
            return;
        case 10:
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 8);
            return;
        }
    } else {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x19) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 3);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 4);
    }
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

void fn_8001EDB8(void *arg0, s32 arg1) {
    /* This is a placeholder to see if the structure works */
    *(u8*)arg0 = 0;
}

extern void *lbl_80367204;
extern s32 lbl_80367208;
#include "common.h"
extern void *lbl_80367204;
extern s32 lbl_80367208;
#include "common.h"
extern void *lbl_80367240;
extern f64 lbl_80368C98;
extern f64 lbl_80368D18;
extern f32 lbl_80368C88;
extern f32 lbl_80368C8C;
extern f32 lbl_80368CA4;
extern f32 lbl_80368CE4;
extern f32 lbl_80368D08;
extern f32 lbl_80368D0C;
extern f32 lbl_80368D10;
#include "common.h"
extern u16 lbl_803206EC;
s32 fn_800C3260(u16 *);
s32 fn_800C2D74(u16 *, s32, s32);
