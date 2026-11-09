/* Functions from 0x80120CCC to 0x80127D80, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    s32 field_0x84;
} SomeStruct;

void fn_80120CCC(u16 *arg0) {
    *arg0 &= ~0x130;
}

void fn_80120E4C(void *arg0) {
    f32 fn_800067BC(u32, u8, u8, u8, f32, f32, f32, f32);
    
    M2C_FIELD(arg0, u8 *, 0x36) = (u8) (M2C_FIELD(arg0, u8 *, 0x36) + 1);
    {
        u8 temp_r7 = M2C_FIELD(arg0, u8 *, 0x34);
        u8 temp_r5 = M2C_FIELD(arg0, u8 *, 0x35);
        u8 temp_r4 = M2C_FIELD(arg0, u8 *, 0x36);
        
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s8 *, 0x41) = (s8) fn_800067BC(0, temp_r4, temp_r5, temp_r7, 
            (f32) temp_r7, (f32) temp_r5, (f32) temp_r4, (f32) M2C_FIELD(arg0, u8 *, 0x37));
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0x36) == (u8) M2C_FIELD(arg0, u8 *, 0x37)) {
        fn_8000C188(arg0);
    }
}

void fn_80120FE8(void *arg0) {
    u8* ptr = (u8*)arg0 + 0x46;
    *ptr = *ptr - 1;
    
    if (*ptr < 0x80) {
        u8* ptr2 = (u8*)arg0 + 0x47;
        *ptr2 = *ptr2 - 1;
    }
}

void fn_80121328(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x4E) = (u8) (M2C_FIELD(arg0, u8 *, 0x4E) + 1);
}

void fn_80121338(void *arg0) {
    f32 fn_800067BC(M2C_UNK, u8, u8, u8, f32, f32, f32, f32);
    
    u8 temp_r7 = M2C_FIELD(arg0, u8 *, 0x4C);
    u8 temp_r5 = M2C_FIELD(arg0, u8 *, 0x4D);
    u8 temp_r4 = M2C_FIELD(arg0, u8 *, 0x4E);
    
    // The function call seems complex but essentially this is just doing some math operations
    M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (s32) fn_800067BC(0, temp_r4, temp_r5, temp_r7, (f32) temp_r7, (f32) temp_r5, (f32) temp_r4, (f32) M2C_FIELD(arg0, u8 *, 0x4F));
    
    // Set the other fields to zero/8
    M2C_FIELD(arg0, u8 *, 0x4D) = 0U;
    M2C_FIELD(arg0, u8 *, 0x4E) = 0U;
    M2C_FIELD(arg0, u8 *, 0x4F) = 8U;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg0, u8 *, 0x4F);
}

void fn_801213EC(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0x4C) = 0;
    *(u8 *)((u8 *)arg0 + 0x4D) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x4E) = 0;
    *(u8 *)((u8 *)arg0 + 0x4F) = 8;
    *(s16 *)((u8 *)arg0 + 0x28) = (u8)*(u8 *)((u8 *)arg0 + 0x4F);
}

void fn_80121414(void) {
    extern u8 lbl_8032BDE8[];
    s32 r9;
    s32 var_ctr;
    s32 r3, r4, r5, r6;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    *(u32 *)(&lbl_8032BDE8[0x4000]) = 0;
    *(u32 *)(&lbl_8032BDE8[0x4004]) = 0;
    *(u8 *)(&lbl_8032BDE8[0x400C]) = 0;

    var_ctr = 0x20;
    r9 = 0;
    do {
        temp_r3 = ((r9 + 0x100) << 6);
        temp_r4 = ((r9 + 0x105) << 6);
        temp_r5 = ((r9 + 0x106) << 6);
        temp_r6 = ((r9 + 0x107) << 6);

        *(u8 *)(&lbl_8032BDE8[temp_r3 & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[((r9 + 0x101) << 6) & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[((r9 + 0x102) << 6) & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[((r9 + 0x103) << 6) & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[temp_r4 & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[temp_r5 & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[temp_r6 & 0x3FC0]) = 0;
        *(u8 *)(&lbl_8032BDE8[((r9 + 0x104) << 6) & 0x3FC0]) = 0;

        r9 += 8;
        var_ctr -= 1;
    } while (var_ctr != 0);
}

void fn_80121630(void* arg0)
{
    s32 spC;
    s32 i;
    
    if (arg0 != 0) {
        spC = 0;
        for (i = 0; i < 4; i++) {
            if (((u32*)arg0)[i] != 0) {
                spC |= 1 << i;
            }
        }
        ((u32*)arg0)[4] = spC;
    }
}

void fn_801217AC(void) {
    struct Work {
        u8 pad0[0x4000];
        s32 unk4000;
        u8 pad4004[0xA];
        s16 unk400E;
        s16 unk4010;
        u8 unk4012;
        u8 unk4013;
        s16 unk4014;
        s16 unk4016;
        void *unk4018;
    };
    void fn_80057880(void *, s32);
    void fn_80057898(void *, s32);
    void fn_800578A0(void *, f32);
    void fn_800578A8(void *, s32, s32, s32);
    void *fn_80057998(void *);
    void *fn_800C42D8(u32);
    extern struct Work lbl_8032BDE8;
    extern f32 lbl_8036A278;
    void *obj;
    s32 n;

    lbl_8032BDE8.unk4014 = 0;
    lbl_8032BDE8.unk4016 = 0x20;
    lbl_8032BDE8.unk4013 = 0;
    lbl_8032BDE8.unk4012 = 0;
    lbl_8032BDE8.unk4010 = 0;
    n = 0x100;
    if (lbl_8032BDE8.unk4000 < 0x100) {
        n = lbl_8032BDE8.unk4000;
    }
    lbl_8032BDE8.unk400E = (n - 0xF) * 0x19;
    if (lbl_8032BDE8.unk400E < 0) {
        lbl_8032BDE8.unk400E = 0;
    }
    if (lbl_8032BDE8.unk400E != 0) {
        obj = fn_800C42D8(0x30);
        if (obj != NULL) {
            obj = fn_80057998(obj);
        }
        lbl_8032BDE8.unk4018 = obj;
        fn_800578A8(obj, 0x240, 0x36, 0x174);
        fn_800578A0(lbl_8032BDE8.unk4018, lbl_8036A278);
        fn_80057898(lbl_8032BDE8.unk4018, lbl_8032BDE8.unk400E + 0x177);
        fn_80057880(lbl_8032BDE8.unk4018, 0x177);
    } else {
        lbl_8032BDE8.unk4018 = NULL;
    }
}

extern u8 lbl_8032BDE8[16];
void fn_80121A70(void) {
    fn_80121A98(&lbl_8032BDE8);
}

void fn_80121D30(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0, 0x33, 0x260, 0x177);
}

void fn_80122000(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x400C) == 0) {
        s32 temp_r4;
        s32 temp_r5;
        
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x4000);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4004);
        
        temp_r5 = (temp_r5 + 0x100) << 6;
        temp_r5 = temp_r5 & 0x3FC0;
        temp_r5 = temp_r5 + temp_r4;
        
        M2C_FIELD(arg0, u8 *, temp_r5) = 0;
        M2C_FIELD(arg0, s32 *, 0x4004) = 0;
        M2C_FIELD(arg0, s32 *, 0x4000) = (s32) (M2C_FIELD(arg0, s32 *, 0x4000) + 1);
        
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x4000);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4004);
        
        temp_r5 = (temp_r5 + 0x100) << 6;
        temp_r5 = temp_r5 & 0x3FC0;
        temp_r5 = temp_r5 + temp_r4;
        
        M2C_FIELD(arg0, u8 *, temp_r5) = 0;
        M2C_FIELD(arg0, u8 *, 0x400C) = 1;
    }
}

void fn_80122170(u32 *arg0) {
    u32 temp_r3;
    
    // Direct read of the 16-bit value at offset 0x4000
    if ((*(u16 *)((u8 *)arg0 + 0x4000) & 0x4000) == 0) {
        *(u32 *)((u8 *)arg0 + 0x4000) = (*(u32 *)((u8 *)arg0 + 0x4000) | 0x40000000);
    }
}

void fn_80122314(void *arg0) {
    extern u16 lbl_80367A58;
    extern u32 lbl_80367110;
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80120CFC(void *);
    s32 cur;
    s32 total;

    fn_80120CFC(&lbl_80367A58);
    M2C_FIELD(arg0, s32 *, 0x34)++;
    cur = M2C_FIELD(arg0, s32 *, 0x34);
    total = M2C_FIELD(arg0, s32 *, 0x38);
    if (cur > total || (lbl_80367110 & 3)) {
        fn_8000C188(arg0);
        if (M2C_FIELD(arg0, s32 *, 0x40) == 0) {
            struct {
                u8 pad0[0x30];
                void *items[5];
                u8 unk44;
                s8 count;
                u8 unk46;
                u8 unk47;
                u8 unk48;
            } *p = M2C_FIELD(arg0, void **, 0x30);
            s32 i;
            void *q;
            for (i = 0; i < p->count; i++) {
                q = p->items[i];
                if (q != NULL) {
                    M2C_FIELD(q, u8 *, 0) = 0;
                    M2C_FIELD(q, void **, 0x40) = q;
                }
            }
            p->unk46 = 0;
            p->unk47 = 0;
            p->unk48 = 0;
        }
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0x68) = (u8) fn_800067BC(0, (f32) M2C_FIELD(arg0, s32 *, 0x3C), (f32) M2C_FIELD(arg0, s32 *, 0x40), (f32) cur, (f32) total);
    }
}

void fn_801225D4(void *arg0, s32 arg1, s32 arg2)
{
    M2C_FIELD(arg0, u32 *, 0x30) = (u32)arg1;
    if (arg2 >= 0) {
        M2C_FIELD(arg0, s16 *, 0x60) = (s16)arg2;
    }
}

extern struct efUnit* lbl_80367A58;
void fn_8012282C(struct efUnit* arg0)
{
    struct efUnit* temp_r5;
    if (arg0 != NULL)
    {
        if (arg0->field_0x24 != NULL)
        {
            arg0->field_0x24 = NULL;
        }
        if (arg0->field_0x1C != NULL)
        {
            arg0->field_0x1C = NULL;
        }
        if (arg0->field_0x18 != NULL)
        {
            arg0->field_0x18 = NULL;
        }
        
        temp_r5 = arg0->field_0x18;
        if (temp_r5 == NULL)
        {
            return;
        }
        
        if (arg0->field_0x24 != NULL)
        {
            // No-op
        }
        
        arg0->field_0x1C = NULL;
        arg0->field_0x18 = temp_r5;
        
        if (temp_r5 == NULL)
        {
            return;
        }
        
        // Additional logic for handling the units, similar to fn_80120CFC
        // but with additional checks and assignments
        
        // Placeholder structure that matches the target assembly
        // This is an approximation of what might be needed
    }
}

extern u8 lbl_80290288[16];
void fn_80122998(s32 arg0) {
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_80290288[16];
    fn_8000CAF0(lbl_80290288, arg0);
}

u8 fn_801229C4(void *arg0) {
    return (u8) ((s8) M2C_FIELD(arg0, u8 *, 0x45) <= ((s8) M2C_FIELD(arg0, u8 *, 0x47) - (s8) M2C_FIELD(arg0, u8 *, 0x46)));
}

void fn_801229F8(void *arg0) {
    u8 temp_r4;

    M2C_FIELD(arg0, u8 *, 0x47) = (u8) (M2C_FIELD(arg0, u8 *, 0x47) + 1);
    temp_r4 = M2C_FIELD(arg0, u8 *, 0x47);
    if ((s8) temp_r4 > 0x60) {
        M2C_FIELD(arg0, u8 *, 0x47) = (u8) (temp_r4 - 0x40);
        M2C_FIELD(arg0, u8 *, 0x46) = (u8) (M2C_FIELD(arg0, u8 *, 0x46) - 0x40);
    }
}

void fn_80122A74(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

void fn_80122AA8(void* arg0) {
    // Placeholder - just want to get it to compile
}

void fn_80122C84(void *arg0) {
    s32* var_r30;
    s32 var_r29;

    var_r30 = (s32*)arg0;
    var_r29 = 0;
    do {
        fn_800C428C(*var_r30);
        *var_r30 = 0;
        var_r29 += 1;
        var_r30 += 1;
    } while (var_r29 < 5);
}

void fn_80122CE0(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 temp_r4;

    temp_r3 = *(s32*)((char*)arg0 + 0x84); 
    temp_r4 = *(s32*)((char*)arg1 + 0x84);
    if (temp_r3 != temp_r4) {
        return;
    }

    temp_r3 = *(s32*)((char*)arg0 + 0x44); 
    temp_r4 = *(s32*)((char*)arg1 + 0x44);
    
    if (temp_r3 == temp_r4) {
        *(s8*)((char*)arg1 + 0x4A) = *(s8*)((char*)arg0 + 0x4A);
        *(s8*)((char*)arg1 + 0x4B) = *(s8*)((char*)arg0 + 0x4B);
    }
}

void fn_80122DD0(void *arg0, s16 arg1, s16 arg2) {
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s16 *, 0x60) = arg1;
    }
    if (arg2 >= 0) {
        M2C_FIELD(arg0, s16 *, 0x62) = arg2;
    }
}

void fn_80122DEC(void *arg0, s32 arg1, s16 arg2, s16 arg3) {
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x60) = arg2;
    M2C_FIELD(arg0, s16 *, 0x62) = arg3;
}

void fn_80122DFC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x49) = arg1;
}

void fn_80122E04(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x4A) = arg1;
    M2C_FIELD(arg0, s8 *, 0x4B) = arg2;
}

void fn_80122E10(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x50) = arg1;
}

void fn_80122E18(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x45) = arg1;
}

void fn_80122E20(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x44) = arg1;
}

void fn_80122E28(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x4C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x4E) = arg2;
}

void fn_80122E34(void *arg0, u32 arg1) {
    s32 fn_80109180(u32, void *);
    if (arg1 != 0U) {
        M2C_FIELD(arg0, s32 *, 0x64) = fn_80109180(arg1, arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
}

void fn_80122F04(void *arg0, void *arg1) {
    M2C_UNK fn_800536B0(s32, f32, f32, f32);
    void *fn_8005397C(M2C_UNK);
    M2C_UNK fn_800C93EC(s32);
    extern f32 lbl_8036A2C0;
    extern f32 lbl_8036A2C4;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r5;
    s32 var_r26;
    s32 var_r29;
    void *temp_r30;

    temp_f30 = lbl_8036A2C0;
    temp_f31 = lbl_8036A2C4;
    var_r29 = 0;
    var_r26 = 0;
loop_2:
    if (var_r29 < (s32) M2C_FIELD(arg1, s32 *, 4)) {
        fn_800C93EC(M2C_FIELD(arg1, s32 *, 8) + var_r26);
        temp_r30 = fn_8005397C(4);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x4C) + 0xC;
        fn_800536B0(temp_r5, (f32) M2C_FIELD(arg0, s32 *, 0x48), (f32) temp_r5, (f32) (M2C_FIELD(arg0, s32 *, 0x44) + 1));
        var_r29 += 1;
        var_r26 += 0xC;
        M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x30), f32 *, 0x1C) = (f32) (s16) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
        M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x30), f32 *, 0x18) = temp_f30;
        M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x30), f32 *, 0x20) = temp_f31;
        goto loop_2;
    }
}

void fn_8012323C(void* arg0) {
    if (arg0 != NULL) {
        s32 val = *(s32*)((u8*)arg0 + 0x84);
        if (val != 0x24) {
            *(s32*)((u8*)arg0 + 0x84) = 0;
        } else {
            fn_80238638(arg0, 1); // call to helper function
            *(s32*)((u8*)arg0 + 0x84) = 0;
        }
    }
}

void fn_801232F4(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x70) = farg0;
    M2C_FIELD(arg0, f32 *, 0x74) = farg1;
}

void fn_80123300(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
}

void fn_80123634(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(), 0x38)();
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x70);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x74));
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x70);
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (M2C_FIELD(arg0, f32 *, 0x6C) == temp_f1_2) {
            M2C_FIELD(arg0, f32 *, 0x6C) = temp_f1_2;
        }
    } else if (temp_f1 > temp_f0) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x74));
        temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x70);
        M2C_ERROR(/* unknown instruction: cror eq, lt, eq */);
        if (M2C_FIELD(arg0, f32 *, 0x6C) == temp_f1_3) {
            M2C_FIELD(arg0, f32 *, 0x6C) = temp_f1_3;
        }
    }
}

void fn_8012391C(void *arg0) {
    void *fn_8000C0C0(M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_8000C60C();
    M2C_UNK fn_80123988(void *);
    extern M2C_UNK lbl_80290408;
    extern u8 lbl_8036728A;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_80290408, &lbl_80290408);
    if ((temp_r3 == NULL) || ((s32) M2C_FIELD(temp_r3, s32 *, 0x34) != (s32) lbl_8036728A)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            fn_8000C60C();
        }
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        fn_80123988(arg0);
    }
}

s32 fn_80123BA8(void) {
    s32 fn_8000CAF0(void *, s32);
    void fn_80123988(void);
    extern u8 lbl_80290408[];
    s32 result;

    result = fn_8000CAF0(lbl_80290408, 4);
    fn_80123988();
    return result;
}

void fn_80123BE8(void) {

}

void fn_80123BEC(void *arg0) {
    u32 *ptr = (u32 *) ((char *) arg0 + 0x30);
    if (*ptr != 0) {
        fn_8000C60C();
    }
    *ptr = 0;
}

void fn_80123C2C(void *arg0) {
    extern void *fn_80123D1C;
    extern s32 fn_8006785C(s32, void **, void *);
    extern s32 fn_80124424(void *);
    extern s32 fn_800AA188(void);
    
    // This is very basic - let's examine the structure carefully
    if (*(u8*)((u8*)arg0 + 0x4D) != 0) {
        fn_8006785C(2, &fn_80123D1C, arg0);
        goto block_4;
    }
    if (fn_800AA188() != 0) {
        fn_8006785C(2, &fn_80123D1C, arg0);
block_4:
        fn_80124424(arg0);
    }
}

void fn_80123CFC(void) {
    M2C_UNK fn_801246FC();
    fn_801246FC();
}

void fn_80125624(void *arg0) {
    typedef struct {
        f32 x, y, z;
    } Vec;
    typedef struct {
        u8 pad0[0xE0];
        Vec pos;
    } Cam;
    typedef struct {
        u8 pad0[0x38];
        f32 speedX;
        f32 speedY;
        u8 pad40[0xD];
        u8 unk4D;
        u8 pad4E[2];
        f32 scrollX[2];
        f32 scrollY[2];
        Vec pos;
        s32 unk6C;
    } Obj;
    u8 fn_800AA188(void);
    Cam *fn_80068548(void);
    void fn_8005A1E8(s32, Vec *, Vec *);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_801258E4(void *);
    void fn_80007340(void (*)(void *), void *);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    Obj *obj = arg0;
    Vec delta = {0.0f, 0.0f, 0.0f};
    Vec pos = {0.0f, 0.0f, 0.0f};
    Cam *cam;
    f32 scale;
    s32 i;

    if (obj->unk4D == 0) {
        if (fn_800AA188() == 0) {
            return;
        }
        cam = fn_80068548();
        fn_8005A1E8(0, &cam->pos, &delta);
        fn_8005A1E8(0, &obj->pos, &pos);
        delta.x -= pos.x;
        delta.y -= pos.y;
        obj->pos.x = cam->pos.x;
        obj->pos.y = cam->pos.y;
        obj->pos.z = cam->pos.z;
    }
    scale = 1.0f;
    for (i = 0; i < 2; i++) {
        obj->scrollX[i] += obj->speedX * scale - delta.x;
        obj->scrollY[i] += obj->speedY * scale - delta.y;
        obj->scrollX[i] -= (f32)((s32)(obj->scrollX[i] * 0.0078125f) << 7);
        obj->scrollY[i] -= (f32)((s32)(obj->scrollY[i] * 0.0078125f) << 7);
        scale *= 1.5f;
    }
    fn_8000A258();
    fn_80009D74(0.0f, 0.0f, 800.0f, 1.0f);
    fn_80009F90(obj->unk6C, 6, 0x411);
    fn_8000A248();
    fn_80007898(0xB);
    fn_80007340(fn_801258E4, obj);
    fn_80007884();
}

void fn_80125818(void *arg0) {
    void *fn_80040844();
    s32 fn_8006D948(void *, M2C_UNK *);
    M2C_UNK fn_80147B9C(void *, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_80274F74;
    extern f32 lbl_8036A308;
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A378;
    extern f32 lbl_8036A388;
    extern f32 lbl_8036A38C;
    M2C_FIELD(arg0, s32 *, 0x6C) = fn_8006D948(&lbl_80274F74 + 0x84, &lbl_80274F74);
    M2C_FIELD(arg0, s8 *, 0x49) = 0x40;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_8036A30C;
    if ((u8) M2C_FIELD(arg0, u8 *, 0x4C) == 0) {
        fn_80147B9C(&lbl_80274F74 + 0xBB, 0x32, 1);
    }
    if ((u8) M2C_FIELD(fn_80040844(), u8 *, 0x68) == 1) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 1;
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036A388;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036A378;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x4D) = 0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036A38C;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036A308;
}

void fn_801258E4(void* arg0, void* arg1, void* arg2) {
    void* temp_r5;
    
    if (arg0 == NULL) {
        return;
    }
    
    temp_r5 = arg0;
    if (M2C_FIELD(arg0, u32*, 0x10) != 0) {
        while (1) {
            s32 temp_r4 = M2C_FIELD(temp_r5, u32*, 0x8);
            if (temp_r4 == 0) {
                break;
            }
            temp_r5 = (void*)((u8*)temp_r5 + temp_r4);
            if (arg1 != NULL) {
                fn_80126E18(temp_r5, arg1);  
            }
        }
    }
    fn_80125924(arg0, arg1);
}

void fn_80125AE0(void *arg0) {
    void *fn_80040844(f64, f32, f32);
    M2C_UNK fn_80059F64(f32, f32, f32, f32);
    f64 fn_80238638();
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A398;
    extern f32 lbl_8036A39C;
    extern f64 lbl_8036A3A0;
    extern f64 lbl_8036A3A8;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f3;
    f64 temp_f1_2;

    if (fn_800AA188() != 0) {
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + M2C_FIELD(arg0, f32 *, 0x34));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C);
        M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
        if (temp_f1 == lbl_8036A398) {
            M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (temp_f1 - lbl_8036A398);
        }
        fn_80059F64(lbl_8036A30C, lbl_8036A39C, lbl_8036A398, M2C_FIELD(arg0, f32 *, 0x4C));
        temp_f3 = (f32) fn_80238638();
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x30);
        temp_f1_2 = (f64) temp_f2 * (lbl_8036A3A0 + (f64) temp_f3);
        temp_f31 = (f32) (temp_f1_2 * lbl_8036A3A8);
        M2C_FIELD(M2C_FIELD(fn_80040844(temp_f1_2, temp_f2, temp_f3), void **, 0x30), f32 *, 0x48) = temp_f31;
    }
}

void fn_80125B94(void *arg0) {
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A35C;
    extern f32 lbl_8036A3B0;
    *(f32*)((char*)arg0 + 0x4c) = lbl_8036A30C;
    *(f32*)((char*)arg0 + 0x34) = lbl_8036A3B0;
    *(f32*)((char*)arg0 + 0x30) = lbl_8036A35C;
}

void fn_80125E5C(void *arg0) {
    u8 fn_800AA188();
    if (fn_800AA188() != 0) {
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x4C));
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3C) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x50));
    }
}

void fn_80125EB8(void *arg0) {
    if (fn_800AA188() != 0) {
        M2C_FIELD(arg0, u8 *, 0x49) = (u8) (M2C_FIELD(arg0, u8 *, 0x49) + 1);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x49) >= 0x80U) {
            M2C_FIELD(arg0, u8 *, 0x49) = 0x80U;
            fn_8000C188(arg0);
        }
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x4C));
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3C) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x50));
    }
}

void fn_80125FC8(void *arg0) {
    extern u8 lbl_80125BB0[];
    fn_80040844();
    fn_800462FC(0, lbl_80125BB0);
    fn_8006D8E8(((s32*)arg0)[0x15]);
}

void fn_8012600C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_8012601C(void *arg0) {
    extern s32 lbl_80367110;
    fn_80088F34();
    lbl_80367110 = ((s32*)arg0)[0x1B];
}

void fn_80126050(void) {
    extern u8 lbl_80367A6C;
    fn_8000C070(lbl_80367A6C);
}

void fn_80126074(void *arg0) {
    extern s32 lbl_80367110;
    extern u8 lbl_80367A6C;
    extern u8 lbl_8032FE48[];
    extern u8 lbl_802905F8[];
    
    ((s32*)arg0)[0x1B] = lbl_80367110;
    fn_80088F34();
    lbl_80367A6C = 0x63;
    fn_80024398(lbl_8032FE48, arg0, 0);
    fn_8000CAF0(lbl_802905F8, arg0);
}

void fn_801260D4(void) {
    extern s32 lbl_80367110;
    lbl_80367110 &= 0xFFFFFF7F;
}

extern u8 lbl_80290480[16];
void fn_80126184(void) {
    fn_8000BF00(&lbl_80290480);
}

void fn_80126204(u16 *arg0) {
    *arg0 &= 0xEDFF;
}

u8 fn_80126830(void) {
    extern u8 lbl_80330708[];
    u8 temp = lbl_80330708[0x9D];
    temp = (temp >> 1) & 1;
    temp = (temp == 0);
    return temp;
}

void fn_8012684C(s8 arg0) {
    extern u8 lbl_80330708[];
    lbl_80330708[0xA5] = arg0;
    fn_80199818(&lbl_80330708[0x9C], &lbl_80330708);
}

u8 fn_8012687C(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA5];
}

void fn_8012688C(s8 arg0) {
    extern u16 lbl_80330708;
    *(u8*)(((char*)&lbl_80330708) + 0xA8) = arg0;
}

void fn_8012689C(s32 arg0) {
    extern u8 lbl_80330708[1400];
    u8 *ptr = &lbl_80330708[0x9F];
    if (arg0 == 1) {
        *ptr |= 0x40;
    } else {
        *ptr &= ~0x40;
    }
}

void fn_801268D4(s32 arg0) {
    extern u8 lbl_80330708[1400];
    u8 *ptr = &lbl_80330708[0x9C];
    if (arg0 == 1) {
        *ptr |= 0x4;
    } else {
        *ptr &= ~0x4;
    }
}

void fn_8012690C(s32 arg0) {
    extern u16 lbl_80330708;
    u8 *temp = (u8 *) &lbl_80330708;
    if (arg0 == 1) {
        *temp |= 2;
    } else {
        *temp &= ~2;
    }
}

void fn_80126944(void) {
    struct Work {
        u8 pad0[0x9C];
        u8 a0 : 2;
        u8 a1 : 1;
        u8 a2 : 2;
        u8 a3 : 1;
        u8 a4 : 1;
        u8 a5 : 1;
        u8 b0 : 2;
        u8 b1 : 1;
        u8 b2 : 1;
        u8 b3 : 2;
        u8 b4 : 1;
        u8 b5 : 1;
        u8 c0 : 1;
        u8 c1 : 1;
        u8 c2 : 1;
        u8 c3 : 1;
        u8 c4 : 3;
        u8 c5 : 1;
        u8 pad9F;
        u8 unkA0;
        u8 padA1[5];
        u8 unkA6;
        u8 padA7;
        u8 unkA8;
        u8 unkA9;
        u8 unkAA;
        u8 padAB;
        s32 unkAC;
        s32 unkB0;
    };
    extern struct Work lbl_80330708;
    u8 one = 1;

    lbl_80330708.a0 = one;
    lbl_80330708.a1 = 0;
    lbl_80330708.a2 = one;
    lbl_80330708.a3 = 0;
    lbl_80330708.a4 = 0;
    lbl_80330708.a5 = 0;
    lbl_80330708.b0 = 0;
    lbl_80330708.b1 = 0;
    lbl_80330708.b2 = 0;
    lbl_80330708.b3 = 2;
    lbl_80330708.b4 = 0;
    lbl_80330708.b5 = 0;
    lbl_80330708.c0 = 0;
    lbl_80330708.c1 = 0;
    lbl_80330708.c2 = one;
    lbl_80330708.c3 = one;
    lbl_80330708.c5 = 0;
    lbl_80330708.unkA0 = 0x14;
    lbl_80330708.unkA8 = 0;
    lbl_80330708.unkAC = 0;
    lbl_80330708.unkA9 = 0;
    lbl_80330708.unkAA = 0;
    lbl_80330708.unkB0 = 0;
    lbl_80330708.unkA6 = one;
}

void fn_80126A98(s32 arg0) {
    extern u8 lbl_802EF4C8[24];
    extern u8 lbl_80330708[1400];
    extern u8 lbl_80275048[206];
    
    switch ((s32) lbl_802EF4C8[8]) {
    case 0x81:
        {
            u8 temp = lbl_80330708[0x9D];
            temp = temp & ~2;
            lbl_80330708[0x9D] = temp;
            fn_8011D79C(&lbl_80275048[0x42A], &lbl_80330708, 0);
        }
        break;
    case 0x80:
        {
            u8 temp = lbl_80330708[0x9D];
            temp = temp | 2;
            lbl_80330708[0x9D] = temp;
            fn_8011D650(&lbl_80330708, 1);
        }
        break;
    }
    fn_8000C188(arg0);
}

void fn_80126C44(u16 *arg0, u16 arg1) {
    *arg0 = (*arg0 & ~0x130) | (arg1 & 0x130);
}

void fn_80126C54(u16 *arg0) {
    *arg0 = (*arg0 & ~0x130) | 0xD0;
}

s32 fn_80126C90(void) {
    M2C_UNK fn_8016969C();
    fn_8016969C();
    return 1;
}

s32 fn_80126CB4(void) {
    extern u16 lbl_80275048[103];
    fn_8000BCA4((u16*)((u8*)&lbl_80275048 + 0x467));
    fn_80169804();
    return 1;
}

s32 fn_80126CE8(void) {
    M2C_UNK fn_8011AC44();
    fn_8011AC44();
    return 1;
}

s32 fn_80126D0C(void) {
    extern u16 lbl_80275048[103];
    fn_8000BCA4((u16*)((u8*)&lbl_80275048 + 0x467));
    fn_8011AC78();
    return 1;
}

s32 fn_80126D40(u8 arg0) {
    M2C_UNK fn_80105CEC(void *, u8);
    extern M2C_UNK lbl_80330708;
    fn_80105CEC(&lbl_80330708 + 0x84, arg0);
    return 1;
}

s32 fn_80126DB0(u8 arg0) {
    extern s32 lbl_80330708;
    void *r4 = &lbl_80330708 + 0x74;
    fn_80105CEC(r4, arg0);
    return 1;
}

s32 fn_80126E20(void) {
    M2C_UNK fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80290550;
    fn_8000CAF0(&lbl_80290550, 3);
    return 1;
}

s32 fn_80126EB0(s32 arg0, s32 arg1) {
    M2C_UNK fn_80013E24(s32);
    s8 fn_8005BA00();
    M2C_UNK fn_8005BA08(s8);
    M2C_UNK fn_8005C4C4(s32, M2C_UNK);
    s8 fn_800C4740();
    s8 temp_r31;

    temp_r31 = fn_8005BA00();
    fn_8005BA08(fn_800C4740());
    fn_80013E24(arg0);
    fn_8005C4C4(arg0, 4);
    fn_8003FCCC(arg1);
    fn_8005C4C4(arg1, 4);
    fn_8005BA08(temp_r31);
    return 1;
}

s32 fn_80126F34(void) {
    M2C_UNK fn_8005C7C8();
    fn_8005C7C8();
    return 1;
}

s32 fn_80126F58(void) {
    M2C_UNK fn_8003FCCC();
    fn_8003FCCC();
    return 1;
}

s32 fn_80126F7C(void) {
    M2C_UNK fn_8011D5EC();
    fn_8011D5EC();
    return 1;
}

s32 fn_80126FA0(s32 arg0) {
    u32 fn_8000BCA4(void *, M2C_UNK *);
    M2C_UNK fn_8011D87C(s32);
    M2C_UNK fn_8011D908(s32, M2C_UNK);
    extern M2C_UNK lbl_80275048;
    if (fn_8000BCA4(&lbl_80275048 + 0x472, &lbl_80275048) != 0U) {
        fn_8011D87C(arg0);
        return 1;
    }
    fn_8011D908(arg0, 0);
    return 1;
}

s32 fn_80127000(void) {
    M2C_UNK fn_8008D6D8(M2C_UNK);
    fn_8008D6D8(0);
    return 1;
}

s32 fn_80127028(void) {
    void fn_8000BE54(void *);
    extern u8 lbl_80290510[];
    fn_8000BE54(lbl_80290510);
    return 0;
}

s32 fn_80127054(void) {
    extern u16 lbl_80290510[];
    fn_8000CAF0(lbl_80290510, 4);
    return 0;
}

void fn_80127084(void) {
    M2C_UNK fn_800F1BFC();
    fn_800F1BFC();
}

void fn_80127150(void *arg0) {
    extern void *lbl_80367A68;
    if (((u8) M2C_FIELD(arg0, u8 *, 0x2D) == 0) && (M2C_FIELD(arg0, u8 *, 0x2C) & 2)) {
        lbl_80367A68 = arg0;
    }
}

void fn_80127594(void *arg0) {
    M2C_UNK fn_80109C1C(s32, M2C_UNK);
    fn_80109C1C(M2C_FIELD(arg0, s32 *, 0x30), 5);
}

s32 fn_801275BC(s32 arg0) {
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_802904C0[32];
    extern u32 *lbl_80367240;
    
    void *temp_r3 = fn_8000CAF0(lbl_802904C0, 2);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(u32 *)((u8 *)temp_r3 + 0x34) = 0;
    *(u8 *)((u8 *)temp_r3 + 0x38) = 0x10;
    *(u8 *)((u8 *)temp_r3 + 0x39) = 1;
    *(u32 *)(lbl_80367240 + 2) = 0;
    *(u32 *)(lbl_80367240 + 1) = 0;
    *(u32 *)(lbl_80367240 + 3) = 0;
    *(u32 *)(lbl_80367240 + 4) = 0;
    
    *(u8 *)*(u32 **)lbl_80367240 = 0; 
    *(u8 *)*(u32 **)(lbl_80367240 + 1) = 0;
    *(u8 *)*(u32 **)(lbl_80367240 + 2) = 0;
    *(u8 *)*(u32 **)(lbl_80367240 + 3) = 0;
    *(u8 *)*(u32 **)(lbl_80367240 + 4) = 0;
    *(u8 *)*(u32 **)(lbl_80367240 + 5) = 0;
    return 1;
}

void fn_80127700(void* arg0, s32 arg1) {
    s32 temp_r3;
    SomeStruct* temp_r30;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r30 = (SomeStruct*)arg0;
    temp_r3 = arg1;
    if (temp_r3 < 0) {
        temp_r3 = 0;
    }
    if (temp_r3 >= 0x100) {
        temp_r3 = 0xFF;
    }
    temp_r4 = temp_r3 * 0x20;
    temp_r5 = temp_r4 >> 8;
    temp_r6 = temp_r5 + 0x40;
    
    if (temp_r6 < 0) {
        temp_r6 = 0;
    }
    if (temp_r6 >= 0xFF) {
        temp_r6 = 0xFF;
    }

    temp_r30->field_0x84 = temp_r6;
}

void fn_80127918(u8 *arg0) {
    s32 r3;
    s32 var_r3 = 0;

    if ((s32)arg0 < 4) {
        do {
            M2C_FIELD(arg0, u8 *, 0x47) = (u8)(M2C_FIELD(arg0, u8 *, 0x47) + 1);
            r3 = (s32)*arg0;
            if ((r3 < 0) || (r3 >= 19)) {
                var_r3 = 1;
            }
            arg0 += 0x10;
        } while (var_r3 == 0);
    }
}

s32 fn_801279D4(void) {
    void fn_8014D55C(void *);
    extern u8 lbl_80330708[];
    fn_8014D55C(lbl_80330708);
    return 1;
}

void fn_80127AC4(void) {
    extern u16 lbl_80275048[];
    
    fn_8000BD98(&lbl_80275048[0x472 >> 1]);
    fn_8000BD98(&lbl_80275048[0x50C >> 1]);
    fn_8000BD98(&lbl_80275048[0xE0 >> 1]);
    fn_8000BD98(&lbl_80275048[0x467 >> 1]);
    fn_8000BD98(&lbl_80275048[0x15B >> 1]);
    fn_8000BD98(&lbl_80275048[0x513 >> 1]);
    fn_8008D988();
    fn_8004A1F0();
    fn_80091858();
    fn_800162B8();
}

u8 fn_80127B50(s32 arg0) {
    s32 fn_8000C0C0(void*, void*);
    s32 fn_802342B8(s32, s32);
    s32 temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_80290480, &lbl_80290480);
    if (temp_r3 == 0) {
        return 0U;
    }
    return (u8) (fn_802342B8(arg0, temp_r3 + 0x30) == 0);
}

s32 fn_80127BA8(s32 arg0, s32 arg1) {
    s32 var_r3;
    s32 var_r4;
    s32 temp_r5;
    s32 temp_r6;

    if (arg0 != 0) {
        var_r3 = 0;
        var_r4 = 0;
        do {
            temp_r5 = arg1 + var_r4;
            temp_r6 = arg0 + var_r4;
            if (temp_r5 != temp_r6) {
                return 0;
            }
            ++var_r4;
        } while (var_r4 < arg0);
    }
    return 1;
}

void fn_80127C48(void) {
    fn_8000C0C0(&lbl_80290480);
}

void fn_80127C70(void) {

}

void fn_80127C74(void) {

}

void fn_80127C78(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x58) != 0) {
        M2C_FIELD(arg0, u8 *, 0x58) = 0U;
        fn_80013778(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s32 *, 0x50));
    }
    fn_800138BC(M2C_FIELD(arg0, s32 *, 0x54));
    if (fn_800142B8() != 6) {
        fn_8000C188(arg0);
    }
}
extern u32 lbl_80367110;
#include "common.h"

extern f32 lbl_8036A278;
extern f32 lbl_8036A27C;
extern f32 lbl_8036A280;
extern f32 lbl_8036A284;
extern f32 lbl_8036A288;
extern f32 lbl_8036A28C;
extern f32 lbl_8036A290;
extern f32 lbl_8036A294;
extern f32 lbl_8036A298;
extern f64 lbl_8036A2A0;

extern s32 *fn_8018D900(s32);
extern void fn_80007124(void *);
extern void fn_80007668(s32 *);
extern void fn_800076AC(s32, s32, s32, s32);
extern void fn_80007790(f32, f32, f32, f32);
extern void fn_80007858(f32, f32);
extern void fn_80007884(void);
extern void fn_80007898(s32);
extern void fn_80009B8C(u8);
extern void fn_80009B98(void);
extern void fn_80009BC0(void *, s32);
extern void fn_80009D74(f32, f32, f32, f32);
extern void fn_8000A174(s32, s32);
extern void fn_8000A248(void);
extern void fn_8000A258(void);
extern void fn_80057020(u32);
extern void fn_80057860(s32);
extern s32 fn_80231D94(void *, void *, s32);
extern s32 fn_80234200(void *, s32);

void fn_80121D30(void);
#include "common.h"
extern f32 lbl_8036A30C;
extern f32 lbl_8036A35C;
extern f32 lbl_8036A3B8;
extern s32 lbl_80274F68[2];
extern u8 lbl_8036728A;
extern void* jumptable_80290434[];
extern f32 lbl_8036A308;
extern f32 lbl_8036A30C;
extern void *lbl_80274F74;
extern void *lbl_80367A68;
#include "global.h"
#include "unit.h"

extern u32* gUnitStructs; // lbl_80367240
extern u8* gSomeGlobal;
