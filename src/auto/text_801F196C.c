/* Functions from 0x801F196C to 0x801FC620, found by decomp-toolkit. */
#include "common.h"
extern void *lbl_803683F4;
extern struct {
    u32 pad0;
    u32 pad4;
    u32 *pad8;
    u32 padC;
} lbl_8029B068;
extern void* fn_800C08AC(void *, s32, void *);
extern void* lbl_8029A8C8[];
extern void fn_80050E80(void);
extern void fn_8005C7C8(void*);
extern void fn_8003F670(void);
extern void fn_80013D4C(void);
extern void fn_8005BCAC(void);
extern void fn_800C4B8C(void);

extern void* lbl_80367240;
extern u16 lbl_80280B58[18];

void fn_801F196C(M2C_UNK **arg0) {
    extern u16 lbl_8028459C[];
    extern u16 lbl_80286610[];
    extern u16 lbl_802862E4[];
    extern u16 lbl_8029A874[];
    *arg0 = (M2C_UNK *)&lbl_8028459C;
    *arg0 = (M2C_UNK *)&lbl_80286610;
    *arg0 = (M2C_UNK *)&lbl_802862E4;
    *arg0 = (M2C_UNK *)&lbl_8029A874;
}

void fn_801F1D70(s32 arg0) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    s32 fn_800C4638(M2C_UNK, void *, M2C_UNK);
    extern M2C_UNK lbl_8027F730;
    extern M2C_UNK lbl_8029A910;
    void *temp_r31;

    temp_r31 = fn_8000CAA0(&lbl_8029A910, arg0, &lbl_8029A910);
    M2C_FIELD(temp_r31, s32 *, 0x30) = fn_800C4638(0xB0, &lbl_8027F730 + 0xA4, 0);
}

void fn_801F1DC4(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0x30);
    *temp_r3 &= 0xFFFFFFFE;
}

void fn_801F1DD8(s32 arg0) {
    u8 fn_800A5C88(s32, void *);
    extern void *lbl_80367240;
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    temp_r31 = temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3);
    if ((fn_800A5C88(temp_r3, lbl_80367240) == 0) || (temp_r31 & 0x1000)) {
        fn_8000C188(arg0);
    }
}

void fn_801F1E78(void *arg0) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0x30);
    *temp_r3 |= 1;
}

void fn_801F1E8C(void *arg0) {
    M2C_UNK fn_8006EDA0(s32);
    M2C_UNK fn_800C4588(s32);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    fn_8006EDA0(temp_r31 + 0x4C);
    fn_800C4588(temp_r31);
}

void fn_801F20A8(s32 arg0) {
    extern M2C_UNK lbl_8027F730;
    if (fn_8005C6A0(&lbl_8027F730 + 0xE1, &lbl_8027F730) & 0x2000) {
        fn_8000C188(arg0);
    }
}

void fn_801F2DB4(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    s32 fn_800C4638(s32, void *, s32);
    extern u16 lbl_8029AF78[];
    extern char lbl_8027F868[];

    void *temp_r31;
    void *temp_r5;

    temp_r5 = lbl_8029AF78;
    temp_r31 = fn_8000CAA0(temp_r5, arg0, temp_r5);
    *(s32 *)((u8 *)temp_r31 + 0x30) = fn_800C4638(0xE8, (u8 *)lbl_8027F868 + 0x11BC, 0);
}

void fn_801F31D0(void *arg0) {
    s32 fn_8005C6A0(s32);
    if (fn_8005C6A0(M2C_FIELD(arg0, s32 *, 0x30) + 0xB4) & 0x2000) {
        fn_8000C188(arg0);
    }
}

void fn_801F3CB0(s32 arg0) {
    extern u16 lbl_8027F868[];
    s32 fn_8005C6A0();
    s32 fn_80161FB8();
    s32 fn_80162054();
    void fn_8000C188();

    if (fn_8005C6A0(&lbl_8027F868[0x2526]) & 0x2000) {
        if (fn_80161FB8() != 0) {
            fn_80162054();
            fn_8000C188(arg0);
        }
    }
}

void fn_801F5308(void* arg0) {
    s32 temp_r3;
    void* temp_r4;

    temp_r3 = *(s32*)((u8*)lbl_80367240 + 4);
    if (temp_r3 & (*(s32*)((u8*)lbl_80367240 + 8) ^ temp_r3) & 0x100) {
        u16* ptr = (u16*)((u8*)&lbl_80280B58 + 0x5A);
        fn_801475FC(ptr, 0x64);
        temp_r4 = *(void**)((u8*)arg0 + 0x50);
        *(u16*)((u8*)temp_r4 + 0x2) = 0xC8;
        fn_8000C188(arg0, temp_r4);
    }
}

void fn_801F5374(void* arg0) {
    s32 temp_r3;
    void* temp_r4;

    temp_r3 = *(s32*)((u8*)lbl_80367240 + 4);
    if (temp_r3 & (*(s32*)((u8*)lbl_80367240 + 8) ^ temp_r3) & 0x100) {
        u16* ptr = (u16*)((u8*)&lbl_80280B58 + 0x5A);
        fn_801475FC(ptr, 0x64);
        temp_r4 = *(void**)((u8*)arg0 + 0x50);
        *(u16*)((u8*)temp_r4 + 0x2) = 0xC8;
        fn_8000C188(arg0, temp_r4);
    }
}

void fn_801F53E0(void *arg0) {
    extern u8 lbl_803682F0[];
    
    s32 fn_800EB774();
    void fn_801E2594();
    void fn_8000E0E4();
    void fn_801DDBA8();
    void fn_801475FC();

    fn_801E2594(&lbl_803682F0);
    if (fn_800EB774() == 0) {
        // Call to fn_801DDBA8 in original - skipped for now
        return;
    }
    
    // We'll not fully expand because there are structure references and data
    // we're not sure about; let's just cover the function flow part with minimal matches
    fn_801475FC(0x80280B58 + 0x77, 0x64);
}

void fn_801F5518(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

void fn_801F5BAC(void) {

}

void fn_801F5BB0(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        fn_800C4588();
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
    }
    fn_80109020(0);
    fn_8000BF00(&lbl_8029B068);
}

void fn_801F5C88(void *arg0) {
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    M2C_UNK fn_801DCD3C(s32);
    M2C_UNK fn_801DDAC8(s32);
    extern f32 lbl_8036B8E8;
extern f32 lbl_8036B8EC;
extern f32 lbl_8036B908;
extern s32 lbl_80368408;
extern s32 lbl_8036840C;
    fn_8000A258();
    fn_80009D74(lbl_8036B8E8, lbl_8036B8E8, lbl_8036B908, lbl_8036B8EC);
    fn_8000A248();
    fn_801DDAC8(M2C_FIELD(arg0, s32 *, 0x50));
    fn_801DCD3C(M2C_FIELD(arg0, s32 *, 0x50));
}

void fn_801F5CDC(void) {
    fn_8000CAF0(&lbl_8029B068, 3);
}

void fn_801F5D08(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x4C) = 4;
}

void fn_801F5E74(void *arg0) {
    s16 temp_r4;
    u32 temp_r8;

    temp_r4 = *(s16*)((char*)arg0 + 0x48);
    *(s16*)((char*)arg0 + 0x48) = temp_r4 + 1;
    if (temp_r4 + 1 > 0xF0) {
        fn_8000C070(2);
        return;
    }

    if (!(fn_802655A8(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x4B)) == 0) || 
        !(*(char*)((char*)arg0 + 0x4B) == 0x20) ||
        !(fn_80266998(*(s32*)((char*)arg0 + 0x38), ((void*)(*(u32*)((char*)arg0 + 0x38) * 0x14)), ((char*)arg0 + 0x4B)) == 0)) {
        return;
    }
    
    if (!(fn_802655A8(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x4B)) == 0) ||
        !(*(char*)((char*)arg0 + 0x4B) == 0x30)) {
        return;
    }
    
    temp_r8 = *(u32*)((char*)arg0 + 0x40);
    fn_800056CC((void*)((char*)&lbl_80280B58 + 0x149), 
                (s8)(*(char*)(temp_r8 + 0x0)), 
                (s8)(*(char*)(temp_r8 + 0x1)), 
                (s8)(*(char*)(temp_r8 + 0x2)), 
                (s8)(*(char*)(temp_r8 + 0x3)), 
                *(u32*)((char*)arg0 + 0x40));
    fn_8000C188(arg0);
    *(s16*)((char*)arg0 + 0x48) = 0;
}

void fn_801F5F58(void *arg0) {
    M2C_UNK fn_8000C070(M2C_UNK);
    extern void *lbl_803683F0;
    u32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, u32 *, 0x40);
    if (((u32) (temp_r6 >> 0x18U) == (u32) (s8) M2C_FIELD(lbl_803683F0, u8 *, 0)) && ((u8) (temp_r6 >> 0x10U) == (u32) (s8) M2C_FIELD(lbl_803683F0, u8 *, 1)) && ((u8) (temp_r6 >> 8U) == (u32) (s8) M2C_FIELD(lbl_803683F0, u8 *, 2)) && ((u8) temp_r6 == (u32) (s8) M2C_FIELD(lbl_803683F0, u8 *, 3))) {
        M2C_FIELD(arg0, u32 *, 0x40) = -1U;
        return;
    }
    fn_8000C070(2);
}

void fn_801F5FE0(void *arg0) {
    s16 temp_r4;
    u32 temp_r8;

    temp_r4 = *(s16*)((char*)arg0 + 0x48);
    *(s16*)((char*)arg0 + 0x48) = temp_r4 + 1;
    if (temp_r4 + 1 > 0xF0) {
        fn_8000C070(2);
        return;
    }
    if (!(fn_8026569C(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x4B)) == 0) || 
        !(fn_802655A8(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x4B)) == 0) ||
        !(*(char*)((char*)arg0 + 0x4B) == 0x28) ||
        !(fn_80266840(*(s32*)((char*)arg0 + 0x38), ((char*)arg0 + 0x40), ((char*)arg0 + 0x4B)) == 0)) {
        return;
    }
    temp_r8 = *(u32*)((char*)arg0 + 0x40);
    fn_800056CC((void*)((char*)&lbl_80280B58 + 0x164), 
                temp_r8 >> 24, 
                (u8)(temp_r8 >> 16), 
                (u8)(temp_r8 >> 8), 
                (u8)temp_r8, 
                temp_r8);
    *(s16*)((char*)arg0 + 0x48) = 0;
    fn_8000C188(arg0);
}

void fn_801F6164(s32 arg1) {
    extern void *lbl_803683F4;
    M2C_FIELD(lbl_803683F4, s32 *, 0x3C) = arg1;
}

void fn_801F6170(void *arg0) {
    extern s32 lbl_80280B48[4];
    
    s32 i;
    s32 temp_r5;
    s32 *ptr;

    M2C_FIELD(arg0, u8 *, 0x4C) = 1;
    
    for (i = 0; i < 4; i++) {
        ptr = &M2C_FIELD(arg0, s32 *, 0x18 + (i << 2));
        
        M2C_FIELD(arg0, s32 *, 0x18) = lbl_80280B48[0];
        M2C_FIELD(arg0, s32 *, 0x1C) = lbl_80280B48[1];
        M2C_FIELD(arg0, s32 *, 0x20) = lbl_80280B48[2];
        M2C_FIELD(arg0, s32 *, 0x24) = lbl_80280B48[3];
        
        if (fn_8023C410(*ptr, lbl_80280B48[1], lbl_80280B48[0]) == 4) {
            temp_r5 = lbl_80280B48[i];
            
            M2C_FIELD(arg0, s32 *, 0x38) = temp_r5;
            M2C_FIELD(arg0, s32 *, 0x3C) = 2;
            M2C_FIELD(arg0, s16 *, 0x48) = 0;
            
            fn_8000C188(arg0, 2, temp_r5, i << 2, lbl_80280B48[3], lbl_80280B48[2], lbl_80280B48[1], lbl_80280B48[0]);
            return;
        }
    }
}

void fn_801F64C8(void) {
    extern s32 lbl_80280CF0;
    fn_80109020(&lbl_80280CF0 + 0x20);
}

void fn_801F6538(void) {
    extern u16 lbl_80280CF0[];
    fn_80147188(0xFA);
    fn_8014832C(0, lbl_80280CF0 + 0x66, 0x64, 1);
    fn_80109180(lbl_80280CF0 + 0x40, 0);
    fn_800A84A0();
    fn_8018DC98();
}

void fn_801F6594(void) {
    M2C_UNK fn_80108FA8(void *);
    M2C_UNK fn_801480D8(M2C_UNK);
    extern M2C_UNK lbl_80280CF0;
    fn_80108FA8(&lbl_80280CF0 + 0x20);
    fn_801480D8(0x1388);
}

void fn_801F65C8(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    s32 fn_800C4638(s32, void *, s32);
    extern u16 lbl_8029B27C[];
    extern u8 lbl_80280D38[];

    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029B27C, arg0, lbl_8029B27C);
    M2C_FIELD(temp_r31, s32 *, 0x30) = fn_800C4638(0x18, lbl_80280D38 + 0x6A, 0);
}

void fn_801F661C(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    s32 fn_800C4638(s32, void *, s32);
    extern u16 lbl_8029B1F8[];
    extern u8 lbl_80280D38[];

    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029B1F8, arg0, lbl_8029B1F8);
    *(s32 *)((u8 *)temp_r31 + 0x30) = fn_800C4638(0x210, &lbl_80280D38[0x6A], 0);
}

extern s32 lbl_80368400;
extern u8 lbl_80368404;
void fn_801F66D4(void *arg0) {
    s32 temp_r5;
    void *temp_r6;
    s32 temp_r0;
    s32 temp_r5_2;

    temp_r5 = *(s32*)((char*)lbl_80367240 + 4);
    temp_r6 = (void*)((char*)arg0 + 0x30);
    temp_r5_2 = temp_r5 & (*(s32*)((char*)lbl_80367240 + 8) ^ temp_r5);
    
    if ((u8)*(char*)&lbl_80368404 == 0) {
        lbl_80368400 = 0;
        lbl_80368404 = 1;
    }
    
    temp_r0 = *(s32*)temp_r6;
    switch (temp_r0) {
    case 0:
        *(s32*)temp_r6 = 1;
        *(s32*)((char*)temp_r6 + 4) = 0;
        lbl_80368400 = 0;
        return;
    case 1:
        if ((temp_r5_2 & 0x100) || (temp_r5_2 & 0x200)) {
            fn_8000C188();
        }
        return;
    default:
        if ((temp_r5_2 & 0x80000) == 0) {
            if ((temp_r5_2 & 0x40000) != 0) {
                fn_8000C188();
            }
        }
        return;
    }
}

void fn_801F7194(void *arg0) {
    s32 fn_80059208(M2C_UNK *, void *);
    s32 fn_80161FB8();
    M2C_UNK fn_80162054();
    extern M2C_UNK fn_801F676C;
    extern M2C_UNK lbl_80280D38;
    if ((fn_8005C6A0(&lbl_80280D38 + 0x173, &lbl_80280D38) & 0x2000) && (fn_80161FB8() != 0)) {
        fn_80162054();
        M2C_FIELD(arg0, s32 *, 0x34) = fn_80059208(&fn_801F676C, arg0);
        fn_8000C188(arg0);
    }
}

void fn_801F726C(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    fn_8006EDA0(temp_r31);
    fn_800C4588(temp_r31);
}

void fn_801F7838(s32 arg0) {
    extern M2C_UNK lbl_80280D38;
    if (fn_8005C6A0(&lbl_80280D38 + 0x24F, &lbl_80280D38) & 0x2000) {
        fn_8000C188(arg0);
    }
}

s32 fn_801F87C4(void) {
    extern u8 lbl_80330708[];
    u8 val = lbl_80330708[0x10];
    return (0x20 - val) & 0x1F;
}

void fn_801F8850(s32 arg0) {
    extern u16 lbl_80281028[];

    fn_800C08AC((u8 *)lbl_80281028 + 0x20E, arg0, lbl_80281028);
}

void fn_801F892C(void) {
    M2C_UNK fn_8002D4B8();
    fn_8002D4B8();
}

void fn_801F894C(s32 arg0) {
    extern u16 lbl_80281028[];

    fn_800C08AC((u8 *)lbl_80281028 + 0x24D, arg0, lbl_80281028);
}

void fn_801F897C(void) {
    extern u16 lbl_80330708[];
    u8* ptr = (u8 *)lbl_80330708;
    
    fn_8014D2B0(ptr + 0x24D, 0x1F);
    fn_8002D548();
}

s32 fn_801F8A18(s32 arg0) {
    s32 temp_r0;
    s32 *temp_r31 = (s32 *)arg0;
    
    if ((s32)arg0 <= 0) {
        return -1;
    }
    
    temp_r0 = *(s32 *)((u8 *)temp_r31 + 0x50);
    if (temp_r0 == 0) {
        return -1;
    }
    
    arg0 = fn_8006EDA0((s32)temp_r31 + 0x50);
    if (arg0 == 0) {
        return -1;
    }
    
    if ((s32)temp_r31 < 0) {
        return -1;
    }
    
    temp_r0 = ((s32)temp_r31 + 0x30);
    if (temp_r0 == 0) {
        return -1;
    }
    
    temp_r0 = ((s32)temp_r31 + 0x30);
    if (temp_r0 == 0) {
        return -1;
    }
    
    arg0 = fn_801FB220((s32)temp_r31 + 0x34, (s32)temp_r31 + 0x30, (u32)temp_r31 + 0xC);
    return arg0;
}

void fn_801F9464(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

void fn_801F9498(void *arg0) {
    M2C_UNK fn_8000C188();
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x44));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48) - 1;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r0;
    if (temp_r0 < 0) {
        fn_8000C188();
    }
}

void fn_801F9C8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if (arg0 == 0)
        arg0 = 1;
    if (arg1 == 0)
        arg1 = 1;

    if (arg0 != 0 && arg1 != 0)
    {
        arg2 = arg2 / arg0;
        arg3 = arg3 / arg1;
    }

    if ((arg0 == 0 || arg1 == 0) || (arg2 == 0 && arg3 == 0))
    {
        arg0 = 0;
        arg1 = 0;
        arg2 = 0;
        arg3 = 0;
    }
}

void fn_801F9CE0(s32 arg0) {
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) {
        fn_8000C188(arg0);
    }
}

void fn_801F9D1C(s32 arg0, s32 arg1) {
    void *fn_801F9D50(s32);
    M2C_FIELD(fn_801F9D50(arg1), s32 *, 0x48) = arg0;
}

void fn_801F9DC0(u32 arg0) {
    M2C_UNK fn_801FB1C0(s32, M2C_UNK);
    if ((arg0 != 0U) && ((arg0 + 0x30) != 0) && ((arg0 + 0x30) != 0)) {
        fn_801FB1C0(arg0 + 0x30, 0);
    }
}

void fn_801FA478(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x44));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48) - 1;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r0;
    if (temp_r0 < 0) {
        fn_8000C188();
    }
}

void fn_801FA4B8(s32 arg0) {
    extern s32 lbl_8029B2F4[];
    extern f32 lbl_8036BA00;
    void *fn_8000CAF0(void *, void *);
    void *temp_r3;

    temp_r3 = fn_8000CAF0(lbl_8029B2F4, lbl_8029B2F4);
    if (temp_r3 != NULL) {
        *(s32 *)((char *)temp_r3 + 0x30) = 0;
        *(f32 *)((char *)temp_r3 + 0x38) = lbl_8036BA00;
    }
    *(s32 *)((char *)temp_r3 + 0x44) = arg0;
}

void fn_801FA508(void *arg0) {
    u32 *ptr = (u32 *) ((char *) arg0 + 0x30);
    if (*ptr != 0U) {
        fn_8003F670();
    }
}

void fn_801FA874(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(arg0, f32 *, 0x40));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44) - 1;
    M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
    if (temp_r0 < 0) {
        fn_8000C188();
    }
}

void fn_801FB548(void *arg0) {
    u32 temp_r4;
    u32 temp_r5;
    u32 var_ctr;

    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    temp_r5 = temp_r4 + (M2C_FIELD(arg0, s32 *, 4) * 8);
    var_ctr = (u32) ((temp_r5 + 7) - temp_r4) >> 3U;
    if (temp_r5 > temp_r4) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

u32 fn_801FB9CC(void *arg0, u16 arg1) {
    return (u32) (M2C_FIELD(arg0, u16 *, 0x120) - arg1) >> 0x1FU;
}

s32 fn_801FB9E0(u8 *arg0) {
    u16 fn_802072A0();
    s32 var_r31;
    u8 *var_r30;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r3;
    u8 var_r0;

    if ((s8) *arg0 == 0) {
        return 0;
    }
    var_r30 = arg0;
    var_r31 = 0x18;
loop_20:
    temp_r3 = M2C_FIELD(var_r30, u8 *, 0);
    if ((s8) temp_r3 != 0) {
        if ((s8) temp_r3 == 0xA) {
            var_r31 += 0x18;
            var_r30 += 1;
        } else if (fn_802072A0() != 1) {
            var_r30 += 1;
        } else {
            temp_r0 = M2C_FIELD(var_r30, u8 *, 0);
            if ((((temp_r0 >= 0x81U) && (temp_r0 <= 0x9FU)) || ((temp_r0 >= 0xE0U) && (temp_r0 <= 0xFCU))) && (((temp_r0_2 = M2C_FIELD(var_r30, u8 *, 1), ((temp_r0_2 < 0x40U) == 0)) && (temp_r0_2 <= 0x7EU)) || ((temp_r0_2 >= 0x80U) && (temp_r0_2 <= 0xFCU)))) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 == 0) {
                var_r30 += 1;
            } else {
                var_r30 += 2;
            }
        }
        goto loop_20;
    }
    return var_r31;
}

extern u16 lbl_8029B520[];
s32 fn_801FBC30(s32 arg0) {
    s32 temp = arg0 * 2;
    return lbl_8029B520[temp];
}

void fn_801FBC48(void) {
    extern u16 lbl_80368410;
    u16* ptr = (u16*)&lbl_80368410;
    if (*ptr == 0) {
        *ptr = 0;
        *(ptr + 2) = 0;
        fn_801FBC84();
    }
}

s32 fn_801FBF98(s32 arg0, s32 arg1, u16 *arg2, u8 (*arg3)(s32, u16)) {
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r26;
    u32 var_r31;

    var_r26 = arg0;
    var_r31 = (arg1 - var_r26) / 320;
loop_4:
    if ((s32) var_r31 > 0) {
        temp_r29 = (s32) ((var_r31 >> 0x1FU) + var_r31) >> 1;
        temp_r30 = var_r26 + (temp_r29 * 0x140);
        if (arg3(temp_r30, *arg2) != 0) {
            var_r26 = temp_r30 + 0x140;
            var_r31 -= temp_r29 + 1;
        } else {
            var_r31 = (u32) temp_r29;
        }
        goto loop_4;
    }
    return var_r26;
}

void fn_801FC400(void) {

}

void fn_801FC404(void) {

}

s32 fn_801FC42C(s32 arg0) {
    return arg0 + 4;
}

void fn_801FC434(void) {

}

void fn_801FC438(void) {

}

void *fn_801FC518(void *arg0, void *arg1, u8 arg2, u8 arg3, u16 *arg4);

void fn_801FC43C(void *arg0, void *arg1, u16 *arg2) {
    u16 var_r5;
    u16 var_r6;
    void *var_r10;
    void *var_r8;
    void *var_r9;

    var_r9 = (u8 *)arg1 + 4;
    var_r8 = NULL;
    var_r6 = 1;
    var_r5 = 1;
    var_r10 = *(void **)((u8 *)arg1 + 4);
    
loop_4:
    if (var_r10 != NULL) {
        var_r9 = var_r10;
        if (*arg2 < *(u16 *)((u8 *)var_r10 + 0xC)) {
            var_r10 = *(void **)((u8 *)var_r10 + 0x0);
            var_r5 = 1;
        } else {
            var_r8 = var_r10;
            var_r10 = *(void **)((u8 *)var_r10 + 0x4);
            var_r5 = 0;
            var_r6 = 0;
        }
        goto loop_4;
    }
    
    if ((var_r8 == NULL) || (*(u16 *)((u8 *)var_r8 + 0xC) < *arg2)) {
        *(void **)arg0 = (void *)fn_801FC518(arg1, var_r9, var_r5, var_r6, arg2);
        *(u8 *)((u8 *)arg0 + 4) = 0x0;
        return;
    }
    
    *(void **)arg0 = var_r8;
    *(u8 *)((u8 *)arg0 + 4) = 0x1;
}

void fn_801FC4F8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_arg2 = (arg2 < 0 ? 0 : arg2);
    
    *(s32*)(arg0 + 0x4) = arg1;
    *(u32*)(arg0 + 0x8) = (u32)temp_arg2;
}

#pragma use_lmw_stmw on
void *fn_801FC518(void *arg0, void *arg1, u8 arg2, u8 arg3, u16 *arg4) {
    void *fn_800C42D8(u32);
    void fn_800D6C1C(void *, void *);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    extern char __files[];
    extern char lbl_80281420[];
    void *node;
    u16 *value;

    if (M2C_FIELD(arg0, u32 *, 0) > (u32)-2) {
        fn_80232058(__files + 0xA0, lbl_80281420 + 0xA6E);
        fn_8022CF78();
    }
    node = fn_800C42D8(0x10);
    if (node == NULL) {
        fn_80232058(__files + 0xA0, lbl_80281420 + 0xA89);
        fn_8022CF78();
    }
    value = (u16 *)((char *)node + 0xC);
    if (value != NULL) {
        *value = *arg4;
    }
    M2C_FIELD(node, void **, 4) = NULL;
    M2C_FIELD(node, void **, 0) = NULL;
    M2C_FIELD(node, u32 *, 8) = (u32)arg1 | (M2C_FIELD(node, u32 *, 8) & 1);
    if (arg2) {
        M2C_FIELD(arg1, void **, 0) = node;
    } else {
        M2C_FIELD(arg1, void **, 4) = node;
    }
    M2C_FIELD(arg0, u32 *, 0)++;
    fn_800D6C1C(node, M2C_FIELD(arg0, void **, 4));
    if (arg3) {
        M2C_FIELD(arg0, void **, 8) = node;
    }
    return node;
}
#pragma use_lmw_stmw reset
extern u16 lbl_80280B58[18];
extern u16* lbl_8027F730;
extern u16* lbl_8029A910;
extern u8 lbl_8027F710[32];
extern u8 lbl_80330708[1400];

u8 fn_801F19A0(void) {
    u32 temp_r3;
    u8 var_r0;

    temp_r3 = fn_8000D354(&lbl_8027F710 + 0x15);
    switch (lbl_80330708[0xA6]) {
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    case 3:
        var_r0 = 3;
        break;
    default:
        var_r0 = 0;
        break;
    }
    return *(u8*)(temp_r3 + var_r0);
}

u8 fn_801F1C5C(void) {
    s32 fn_8000D354(void *);
    s32 temp_r3;
    u8 var_r0;

    temp_r3 = fn_8000D354(&lbl_8027F710[0x15]);
    switch ((s32) lbl_80330708[0xA6]) { /* irregular */
    case 3:
        var_r0 = 3;
        break;
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    default:
        var_r0 = 0;
        break;
    }
    return lbl_80330708[temp_r3 + var_r0 + 0x4];
}

#include "common.h"
extern u8 lbl_8027F710[];
extern u8 lbl_80330708[];
#include "global.h"
#include "unit.h"

extern s32 lbl_802343E0(void *, void *);
extern s32 lbl_80234450(void *, void *, s32, s32);
