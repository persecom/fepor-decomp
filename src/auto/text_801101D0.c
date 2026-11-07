/* Functions from 0x801101D0 to 0x80120CC0, found by decomp-toolkit. */
#include "common.h"
extern u16 lbl_80273DF8[];
extern u16 lbl_80296128[];
extern u16 lbl_80367A58;

extern s32 lbl_80367110;

extern s32 lbl_80330708[];
extern f32 lbl_8036A184;
extern f32 lbl_8036A1BC;

typedef struct {
    void *unk0;
    void *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
    void *unk14;
    void *unk18;
    void *unk1C;
    void *unk20;
    void *unk24;
    void *unk28;
    void *unk2C;
    void *unk30;
    void *unk34;
    void *unk38;
    void *unk3C;
    void *unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    // ... (more fields if needed)
} UnitStruct;

// Global data for this function
u8 lbl_8028FDB0[0x10] = { 0 };
u8 lbl_80292230[0x28] = { 0 };
u8 lbl_802921E0[0x28] = { 0 };

extern f32 lbl_8036A1E8;
extern f32 lbl_8036A1F8;

extern u8 lbl_80367A48;

void fn_801101D0(void *arg0, s32 arg1) {
    M2C_UNK fn_800E5A4C(void *, s32);
    M2C_UNK fn_801C6978();
    if ((u32) M2C_FIELD(arg0, u32 *, 0xE0) != 0U) {
        fn_801C6978();
    }
    fn_800E5A4C(arg0, arg1);
}

u8 fn_80110220(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A7);
}

void fn_80112DFC(void *arg0, u8 arg1) {
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
    if (temp_r3 != NULL) {
        if (arg1 != 0) {
            *temp_r3 |= 0x80;
            return;
        }
        *temp_r3 &= 0xFFFFFF7F;
    }
}

#pragma cplusplus on
typedef struct Vec3f {
    f32 x, y, z;
    Vec3f() {}
    Vec3f(const Vec3f &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
    Vec3f &operator=(const Vec3f &o) {
        x = o.x;
        y = o.y;
        z = o.z;
        return *this;
    }
} Vec3f;
extern "C" f32 fn_802032CC(Vec3f, Vec3f);
extern "C" void fn_80112E30(void *arg0) {
    extern f32 lbl_8036A1A8;
    struct Actor {
        u8 pad0[0x40];
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
        virtual Vec3f GetPos(s32) = 0;
    };
    Actor *target;
    Actor *self;
    f32 dist;

    self = (Actor *)arg0;
    target = M2C_FIELD(arg0, Actor **, 0x118);
    if (target == NULL) {
        dist = lbl_8036A184;
    } else {
        Vec3f a;
        Vec3f b;
        a.x = a.y = a.z = lbl_8036A184;
        b.x = b.y = b.z = lbl_8036A184;
        a = self->GetPos(0);
        b = target->GetPos(0);
        dist = fn_802032CC(a, b);
    }
    if (dist >= lbl_8036A1A8 + M2C_FIELD(arg0, f32 *, 0x128)) {
        M2C_FIELD(arg0, u8 *, 0x1A4) = 0;
    }
}
#pragma cplusplus reset

u8 fn_80112F3C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A4);
}

s32 fn_80112F44(void *arg0) {
    char *str1;
    char *str2;
    char *str3;
    s32 len1;
    s32 len2;
    s32 len3;
    s32 result;

    str1 = (char*)((u8*)arg0 + 0x178);
    len1 = strlen((char*)&lbl_80273DF8 + 0x43f);
    result = fn_800C9400(str1, 0, NULL, (char*)&lbl_80273DF8 + 0x43f, len1);

    if (result == 0) {
        return 1;
    }

    str2 = (char*)&lbl_80273DF8 + 0x43f;
    len2 = strlen(str2);
    result = fn_800D5948(str1, str2, 0, len2);

    if ((u32)(result + 0x10000) != (u32)-1) {
        return 1;
    }

    str3 = (char*)&lbl_80273DF8 + 0x444;
    len3 = strlen(str3);
    result = fn_800D5948(str1, str3, 0, len3);

    if ((u32)(result + 0x10000) != (u32)-1) {
        return 1;
    }

    if (fn_800E56C4(arg0) == 0) {
        return 1;
    }

    return 0;
}

void fn_80113648(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x128) = farg0;
}

f32 fn_80113650(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x128);
}

void fn_80113658(void* arg0) {
    if (arg0 != NULL) {
        s32** ptr = (s32**)arg0;
        (*ptr)[0] = 0;
        (*ptr)[1] = 0;
        (*ptr)[2] = 0;
        (*ptr)[3] = -1;
        (*ptr)[4] = 0;
        (*ptr)[5] = 0;
        (*ptr)[6] = 0;
        (*ptr)[7] = 0;
    }
}

void fn_801136EC(void) {
    lbl_80273DF8[0] = 0x2D004300;
    lbl_80273DF8[1] = 0x42004100;
}

void fn_8011386C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14C) = -1;
}

s32 fn_80113878(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x19C) != 0;
}

u8 fn_8011388C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1B4);
}

s32 fn_80113894(void *arg0) {
    u8 fn_8019906C(s32);
    s32 fn_80199114(s32);
    if ((fn_8019906C(M2C_FIELD(arg0, s32 *, 0x11C)) != 0) && (fn_80199114(M2C_FIELD(arg0, s32 *, 0x11C)) != -1)) {
        return 1;
    }
    return 0;
}

void fn_801138E8(void *arg0) {
    M2C_UNK fn_801990A4(s32);
    fn_801990A4(M2C_FIELD(arg0, s32 *, 0x11C));
}

void fn_8011390C(void *arg0) {
    M2C_UNK fn_801990DC(s32);
    fn_801990DC(M2C_FIELD(arg0, s32 *, 0x11C));
}

void fn_80113930(void* arg0, void* arg1) {
    if (arg0 != NULL && arg1 != NULL) {
        f32 f0 = *(f32*)((char*)arg0 + 4);
        f32 f1 = *(f32*)((char*)arg0 + 8);
        f32 f2 = *(f32*)((char*)arg1 + 0x44);
        f32 f3 = *(f32*)((char*)arg1 + 0x4C);
        f32 f4 = *(f32*)((char*)arg1 + 0x54);
        
        if (f0 > f2) {
            *(f32*)((char*)arg0 + 4) = f2;
        }
        if (f1 < f3) {
            *(f32*)((char*)arg0 + 8) = f3;
        }
        if ((*(f32*)((char*)arg1 + 0x50)) < f4) {
            *(f32*)((char*)arg1 + 0x50) = f4;
        }
    }
}

u8 fn_80113F68(void *arg0) {
    extern f32 lbl_8036A184;
    return (u8) (lbl_8036A184 != M2C_FIELD(arg0, f32 *, 0x104));
}

void fn_80113F88(void *arg0) {
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_80050C90(s32);
    fn_8003816C(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, u8 *, 0x58), M2C_FIELD(arg0, u8 *, 0x59));
    fn_80050C90(M2C_FIELD(arg0, s32 *, 0x30));
}

s32 fn_8011654C(void *arg0) {
    void **ptr = (void **)((char *)arg0 + 0x11C);
    if (*ptr != 0) {
        return fn_801992F0();
    }
    return 0;
}

s32 fn_80116580(void *arg0) {
    s32 fn_80199310();
    if (*(u32 *)((char *)arg0 + 0x11C) != 0U) {
        return fn_80199310();
    }
    return -1;
}

s32 fn_80116604(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x11C);
}

void fn_8011660C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1B8) = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1B8) > 1) {
        M2C_FIELD(arg0, s8 *, 0x1A4) = 1;
        M2C_FIELD(arg0, s8 *, 0x1A5) = 1;
    }
}

void fn_8011662C(void *arg0, s32 arg1) {
    s32 fn_80165B04(s32);
    s32 fn_80165B0C(s32);
    M2C_UNK fn_801C4468(s32);
    M2C_UNK fn_801C6008(s32);
    s32 temp_r3;

    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1CC) = fn_80165B0C(arg1);
        M2C_FIELD(arg0, s32 *, 0x1D0) = fn_80165B04(arg1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1CC) == 2) {
            fn_801C4468(M2C_FIELD(arg0, s32 *, 0xE0));
        }
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1CC);
        if (((temp_r3 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) == 1)) || ((temp_r3 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) == 3))) {
            fn_801C6008(M2C_FIELD(arg0, s32 *, 0xE0));
        }
    }
}

void fn_80116760(s32 arg0) {
    extern u16 lbl_80273DF8[];
    s32 sp8;

    fn_800CB90C(&sp8, &lbl_80273DF8[0x1F8]);
    fn_800C9758(arg0 + 0x154, &sp8, 0, -1);
    fn_800C9A60(&sp8, -1);
}

void fn_801168F4(void *arg0) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800C9ABC(M2C_UNK *, M2C_UNK *);
    s32 fn_800E7DA4(s32, M2C_UNK *);
    M2C_UNK spC;
    M2C_UNK sp8;

    fn_800C9ABC(&spC, &sp8);
    M2C_FIELD(arg0, s32 *, 0x118) = fn_800E7DA4(M2C_FIELD(arg0, s32 *, 0xAC), &spC);
    fn_800C9A60(&spC, -1);
}

void fn_80116944(void *arg0) {
    M2C_UNK fn_800608AC(s32);
    fn_800608AC(M2C_FIELD(arg0, s32 *, 0xE0));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(void *), 0xC)(arg0);
}

void fn_80116F84(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r6;
    s32 sp8;
    s32 spC;
    s32 sp10;

    temp_r6 = M2C_FIELD(arg1, s32 *, 0);
    temp_r5 = M2C_FIELD(arg1, s32 *, 4);
    temp_r0 = M2C_FIELD(arg1, s32 *, 8);
    
    sp8 = temp_r6;
    spC = temp_r5;
    sp10 = temp_r0;
    
    fn_800DB7A4(&sp8, temp_r5, temp_r6);
    
    if ((u8) M2C_FIELD(arg0, u8 *, 0x195) != 0) {
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) * M2C_FIELD(arg0, s32 *, 0x198));
    }
}

s32 fn_80117CC0(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + arg1;
}

void fn_80117F1C(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    M2C_UNK fn_8013FEC0();
    fn_8013FEC0();
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x48));
}

void fn_80117F54(s32 arg0) {
    extern s32 lbl_802EF4C8[];
    
    void fn_8013FED0(void);
    void fn_8007D064(s32, s32, s32);

    fn_8013FED0();
    fn_8007D064(lbl_802EF4C8[0], arg0, 0);
}

void fn_80118170(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    M2C_UNK fn_8012C7C8(M2C_UNK *, void *);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8014004C(void *);
    extern M2C_UNK fn_80117D80;
    fn_8012C7C8(&fn_80117D80, arg0);
    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x44));
    if (fn_8013FF94(arg0, -0x1000, 0) != 0) {
        fn_8014004C(arg0);
    }
}

void fn_801181D0(void) {
    M2C_UNK fn_80006198();
    M2C_UNK fn_80006220(M2C_UNK);
    fn_80006220(0xE);
    fn_80006198();
}

void fn_801181F8(void) {
    extern u8 lbl_802EF4C8[];
    u8* addr = (u8*)((u32)lbl_802EF4C8);
    switch ((s32)addr[8]) {
        case 0x81:
            fn_8000C070(0x12);
            return;
        case 0x80:
            fn_8000C070(1);
            return;
    }
}

void fn_80118308(s32 arg0) {
    M2C_UNK fn_8000E0E4(void *);
    M2C_UNK fn_80018AF4();
    M2C_UNK fn_80024398(s32, M2C_UNK);
    M2C_UNK fn_8011A2FC();
    void *fn_8013BFFC();
    u32 fn_8013FF94(s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_801658DC(void *);
    extern u8 lbl_80274508[];
    fn_8011A2FC();
    fn_80018AF4();
    fn_8000E0E4(&lbl_80274508[0x17C]);
    M2C_FIELD(fn_8013BFFC(), s8 *, 0x24) = 1;
    fn_80024398(arg0, 0);
    if (fn_8013FF94(arg0, -0x1000, 0) != 0U) {
        fn_801658DC(&lbl_80274508[0x194]);
    }
}

void fn_80118388(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_800A8400();
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801183C0(s32 arg0) {
    fn_8013FED0();
    lbl_80330708[0x54] = 2;
    fn_801D3B14(arg0, &lbl_80330708);
}

void fn_80118404(s32 arg0) {
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_8011843C(s32 arg0) {
    M2C_UNK fn_8013FED0();
    M2C_UNK fn_801AA120(s32);
    fn_8013FED0();
    fn_801AA120(arg0);
}

void fn_80118470(s32 arg0) {
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801184A8(s32 arg0) {
    M2C_UNK fn_8016B730(s32);
    fn_8013FED0();
    fn_8016B730(arg0);
}

void fn_80119738(s32 arg0) {
    extern void *fn_80119768;
    extern s32 fn_8006785C(s32, void *, s32);
    fn_8006785C(2, &fn_80119768, arg0);
}

void fn_8011A2FC(s32 arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    s32 temp_r31;
    
    // Call fn_8013FF94 with parameters 0x40 and 0
    temp_r3 = fn_8013FF94(0x40, 0);
    
    // Check if return value is zero
    if (temp_r3 == 0) {
        // Call fn_800C42D8 with parameter 0x3C
        temp_r31 = fn_800C42D8(0x3C);
        
        // Check if the return value is not null
        if (temp_r31 != 0) {
            // Setup for structure initialization - load the addresses of our globals
            temp_r4 = (s32)&lbl_8028FDB0;
            temp_r5 = (s32)&lbl_80292230;
            temp_r6 = (s32)&lbl_802921E0;
            
            // Initialize structure fields
            *(u32*)temp_r31 = temp_r4;
            *(u32*)(temp_r31 + 4) = 0;
            *(u32*)(temp_r31 + 0x0) = temp_r5;
            
            *(s16*)(temp_r31 + 8) = -1;
            *(s16*)(temp_r31 + 0xa) = 0;
            *(s16*)(temp_r31 + 0xc) = 0;
            *(s16*)(temp_r31 + 0xe) = 0x260;
            *(s16*)(temp_r31 + 0x10) = 0x1C0;
            *(s16*)(temp_r31 + 0x12) = 0;
            *(s16*)(temp_r31 + 0x14) = 0;
            *(s16*)(temp_r31 + 0x16) = 0x260;
            *(s16*)(temp_r31 + 0x18) = 0x1C0;
            *(s16*)(temp_r31 + 0x1a) = 0;
            *(s16*)(temp_r31 + 0x1c) = 0;
            
            *(u8*)(temp_r31 + 0x1e) = 0xFF;
            *(u8*)(temp_r31 + 0x1f) = 0xFF;
            *(u8*)(temp_r31 + 0x20) = 0xFF;
            *(u8*)(temp_r31 + 0x21) = 0xFF;
            *(s16*)(temp_r31 + 0x22) = 0x316;
            *(s16*)(temp_r31 + 0x24) = 0;
            
            *(f32*)(temp_r31 + 0x28) = 1.0f;
            *(f32*)(temp_r31 + 0x2c) = 1.0f;
            *(f32*)(temp_r31 + 0x30) = 1.0f;
            
            *(u32*)(temp_r31 + 0x34) = 0;
            *(u32*)(temp_r31 + 0x38) = 0;
            
            // Update the base address
            *(u32*)temp_r31 = temp_r6;
            
            // Continue initialization
            *(s16*)(temp_r31 + 8) = 0x40;
            *(u8*)(temp_r31 + 0x24) = 8;
            *(f32*)(temp_r31 + 0x2c) = 0.0f;
            
            // Call fn_801400F4 with parameters
            temp_r5 = *(u32*)(temp_r31 + 0x34);
            temp_r5 = temp_r5 | 0x10;
            *(u32*)(temp_r31 + 0x34) = temp_r5;
            
            fn_801400F4(arg0, (void*)temp_r31, temp_r5);
            fn_80140234(arg0, (void*)temp_r31, 1);
        }
    }
}

void fn_8011A470(s32 arg0) {
    M2C_UNK fn_80018AF4();
    M2C_UNK fn_800A8450();
    M2C_UNK fn_8011A2FC(s32);
    M2C_UNK fn_8011A4E4(s32);
    u32 fn_8013FF94(s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_801658DC(void *);
    extern M2C_UNK lbl_80274508;
    extern u8 lbl_803671C0;
    if ((u8) lbl_803671C0 == 0) {
        fn_80018AF4();
    }
    fn_800A8450();
    fn_8011A4E4(arg0);
    fn_8011A2FC(arg0);
    if (fn_8013FF94(arg0, -0x1000, 0) != 0U) {
        fn_801658DC(&lbl_80274508 + 0x2F5);
    }
}

void fn_8011AB38(void *arg0) {
    s32 fn_8003FCCC();
    u8 fn_8005BA10();
    s32 fn_80161FB8();
    M2C_UNK fn_80162054();
    fn_801620AC();
    if (fn_8005BA10() != 0) {
        if (fn_80161FB8() == 0) {
            return;
        }
        fn_80162054();
        fn_801620AC();
        M2C_FIELD(arg0, s32 *, 0x40) = fn_8003FCCC();
        fn_8000C188(arg0);
    }
}

void fn_8011AB98(void) {
    M2C_UNK fn_801620AC();
    M2C_UNK fn_8005C8B4();
    M2C_UNK fn_80162018();
    fn_801620AC();
    fn_8005C8B4();
    fn_80162018();
}

void fn_8011ABC0(s32 arg0) {
    M2C_UNK fn_8000E0E4(void *, M2C_UNK *);
    M2C_UNK fn_80024398(s32, M2C_UNK);
    void *fn_8013BFFC();
    extern M2C_UNK lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x17C, &lbl_80274508);
    M2C_FIELD(fn_8013BFFC(), s8 *, 0x24) = 1;
    fn_80024398(arg0, 0);
}

s32 fn_8011AC10(void) {
    extern u16 lbl_8028F814[];
    s32 v = fn_8000C0C0(lbl_8028F814);
    return v != 0;
}

void fn_8011AC44(void) {
    u32 fn_8000C0C0(M2C_UNK *);
    M2C_UNK fn_8000C60C();
    extern M2C_UNK lbl_8028F814;
    if (fn_8000C0C0(&lbl_8028F814) != 0U) {
        fn_8000C60C();
    }
}

void fn_8011AE2C(void *arg0) {
    M2C_UNK fn_8003816C(s32, u8, u8);
    M2C_UNK fn_80050C90(s32);
    fn_8003816C(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, u8 *, 0x58), M2C_FIELD(arg0, u8 *, 0x59));
    fn_80050C90(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_8011B204(void *arg0) {
    extern f32 lbl_8036A1E8;
    extern f32 lbl_8036A230;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    s16 temp_r4_2;
    void *temp_r4;

    temp_f13 = (f32) M2C_FIELD(arg0, s16 *, 0x5A) / (f32) M2C_FIELD(arg0, s16 *, 0x5C);
    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    temp_f10 = lbl_8036A1E8 - temp_f13;
    temp_f12 = temp_f13 * temp_f13;
    temp_f11 = temp_f10 * temp_f10;
    temp_f10_2 = lbl_8036A230 * temp_f10 * temp_f13;
    M2C_FIELD(temp_r4, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x4C) * temp_f12) + ((M2C_FIELD(arg0, f32 *, 0x34) * temp_f11) + (M2C_FIELD(arg0, f32 *, 0x40) * temp_f10_2)));
    M2C_FIELD(temp_r4, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x50) * temp_f12) + ((M2C_FIELD(arg0, f32 *, 0x38) * temp_f11) + (M2C_FIELD(arg0, f32 *, 0x44) * temp_f10_2)));
    M2C_FIELD(temp_r4, f32 *, 0xC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x54) * temp_f12) + ((M2C_FIELD(arg0, f32 *, 0x3C) * temp_f11) + (M2C_FIELD(arg0, f32 *, 0x48) * temp_f10_2)));
    temp_r4_2 = M2C_FIELD(arg0, s16 *, 0x5A);
    M2C_FIELD(arg0, s16 *, 0x5A) = (s16) (temp_r4_2 + 1);
    if (temp_r4_2 == (s16) M2C_FIELD(arg0, s16 *, 0x5C)) {
        fn_8000C188();
    }
}

void fn_8011B2EC(void) {
    M2C_UNK fn_800F20E0();
    M2C_UNK fn_800F214C();
    fn_800F214C();
    fn_800F20E0();
}

void fn_8011B570(void) {

}

void fn_8011B574(void) {

}

s32 fn_8011B578(void) {
    return 0xB0;
}

void fn_8011B580(void *arg0, void *arg1) {
    s8 temp_r31;
    void *temp_r3;
    void **temp_r4 = (void **)M2C_FIELD(arg0, void **, 4);
    s32 (*func_ptr)(void) = (s32 (*)(void))temp_r4[0x7C / 4];
    
    temp_r31 = (s8) M2C_FIELD(arg1, u8 *, 0x60);
    func_ptr();
    temp_r3 = M2C_FIELD(arg1, void **, 0x3C);
    fn_8008C1D8(0, 0, 0, (temp_r31 * M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s16 (**)(void *), 0x58)(temp_r3)) + 0x20, 2);
}

void fn_8011B5FC(void *arg0, void *arg1) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 fn_800102BC(M2C_UNK, f32, f32);
    M2C_UNK fn_80071D28();
    M2C_UNK fn_8008AB7C(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern f32 lbl_8036A1E8;
    extern f32 lbl_8036A234;
    extern f32 lbl_8036A238;
    extern f32 lbl_8036A23C;
    f32 temp_f2;
    s16 temp_r31;
    s32 temp_r29;
    s32 temp_r30;

    fn_80071D28();
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(void *, void *), 0x7C)(arg0, arg1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A234);
    fn_8000A248();
    temp_f2 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0);
    temp_r29 = (s32) (lbl_8036A238 * temp_f2);
    temp_r30 = fn_800102BC(-1, lbl_8036A1E8, temp_f2) >> 1;
    temp_r31 = M2C_FIELD(arg1, s16 *, 0x3A);
    fn_8008AB7C(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0) >> 1, temp_r31 + temp_r30, temp_r29, 0x17, 0xA, 0x28, 1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A23C);
    fn_8000A248();
}

s16 fn_8011B710(void *arg0) {
    s16 (*func)(void) = (s16 (*)(void)) M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x50);
    s16 temp_r3 = func();
    return (0x260 - temp_r3) >> 1;
}

s32 fn_8011B74C(void) {
    return 0x40;
}

extern u8 lbl_80330D68[];
s32 fn_8011B754(void) {
    u8 fn_80166D8C(void *);

    return fn_80166D8C(lbl_80330D68) ? 0x40 : 0x10;
}

void fn_8011B978(void) {
    extern u32 lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x357);
}

void *fn_8011B9A4(void) {
    extern u16 lbl_80274508[];
    return &lbl_80274508[0x364 / sizeof(u16)];
}

u8 fn_8011B9B4(void) {
    extern u8 lbl_80367A48;
    return (u8) (lbl_80367A48 == 0x88);
}

void fn_8011BAF8(void) {
    extern u16 lbl_80274508[];
    fn_8000E0E4(&lbl_80274508[0x70a]);
}

void *fn_8011BB24(void) {
    extern u8 lbl_80274508;
    return &lbl_80274508 + 0x38F;
}

void *fn_8011BD34(void) {
    extern u8 lbl_80274508;
    return &lbl_80274508 + 0x3C6;
}

u8 fn_8011BD44(void) {
    extern u8 lbl_80367A48;
    return (u8) (lbl_80367A48 == 0x86);
}

s32 fn_8011BD58(void) {
    extern s8 lbl_802EF4C8[];
    return lbl_802EF4C8[0x1F];
}

void *fn_8011BD9C(void) {
    extern M2C_UNK lbl_80274508;
    return &lbl_80274508 + 0x3D8;
}

u8 fn_8011BDAC(void) {
    extern u8 lbl_80367A48;
    u8 temp = lbl_80367A48;
    temp = 0x85 - temp;
    return (u8) __builtin_clz(temp) >> 24;
}

extern s8 lbl_802EF4C8[];
s32 fn_8011BDC0(void) {
    lbl_802EF4C8[8] = 0x85;
    return 5;
}

void fn_8011BDD8(void *arg0) {
    extern u32 lbl_80274508;
    fn_8000E0E4((u32*)((s8*)&lbl_80274508 + 0x3E1));
}

void *fn_8011BE14(void) {
    extern void *lbl_80274508;
    return (char *)&lbl_80274508 + 0x3F0;
}

s32 fn_8011BE60(void) {
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0x84;
    return 5;
}

void fn_8011BE78(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x402);
}

void *fn_8011BEA4(void) {
    extern void *lbl_80274508;
    return (char *)&lbl_80274508 + 0x412;
}

u8 fn_8011BEB4(void) {
    extern u8 lbl_80367A48;
    u8 temp = lbl_80367A48;
    temp = 0x83 - temp;
    return (u8) __builtin_clz(temp) >> 24;
}

void fn_8011BEE0(void) {
    extern u8 lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x41D);
}

void *fn_8011BF0C(void) {
    extern u8 lbl_80274508;
    return &lbl_80274508 + 0x429;
}

u8 fn_8011BF1C(void) {
    u8 temp = lbl_80367A48;
    temp = 0x82 - temp;
    return (__builtin_clz(temp) & 0x1F);
}

void fn_8011BF48(void) {
    extern u8 lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x435);
}

void *fn_8011BF74(void) {
    extern u8 lbl_80274508[];
    return &lbl_80274508[0x442];
}

u8 fn_8011BF84(void) {
    extern u8 lbl_80367A48;
    u8 temp = lbl_80367A48;
    temp = 0x81 - temp;
    return (u8) __builtin_ctz(temp);
}

s32 fn_8011BF98(void) {
    *(u8*)((u32)&lbl_802EF4C8 + 8) = 0x81;
    return 5;
}

void fn_8011BFB0(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern u8 lbl_80274508;
    fn_8000E0E4(&lbl_80274508 + 0x44F);
}

void *fn_8011BFDC(void) {
    extern u8 lbl_80274508;
    return &lbl_80274508 + 0x45C;
}

u8 fn_8011BFEC(void) {
    extern u8 lbl_80367A48;
    u8 temp = lbl_80367A48;
    temp = 0x80 - temp;
    return (u8) __builtin_clz(temp);
}

s32 fn_8011C000(void) {
    lbl_802EF4C8[8] = 0x80;
    return 5;
}

s32 fn_8011C5B4(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367A50;
    fn_800D758C(lbl_80367A50);
    return 0;
}

void fn_8011C64C(void *arg0) {
    s32 val = *(s32 *)((u8 *)arg0 + 0x428);
    fn_8011CAAC(val, 0);
    return;
}

void fn_8011C674(void *arg0) {
    M2C_UNK fn_8011CAAC(s32, M2C_UNK);
    s32 temp = M2C_FIELD(arg0, s32 *, 0x424);
    fn_8011CAAC(temp, 0);
}

void fn_8011C9A8(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 0xEC) = arg1;
    temp_r6 = M2C_FIELD(arg0, s32 *, 0xF4);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF8);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xEC);
    if (temp_r5 >= (s32) (temp_r6 + temp_r4)) {
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) ((temp_r5 - temp_r4) + 1);
        return;
    }
    if (temp_r5 < temp_r6) {
        M2C_FIELD(arg0, s32 *, 0xF4) = temp_r5;
    }
}

s32 fn_8011C9E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xEC);
}

s32 fn_8011C9EC(s32 arg0) {
    return arg0 + 0xAC;
}

M2C_UNK *fn_8011C9F4(void *arg0) {
    M2C_UNK *fn_800C93EC(s32);
    extern M2C_UNK lbl_80274A88;
    u32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 *, 0xEC);
    if (temp_r4 < (u32) M2C_FIELD(arg0, u32 *, 0xB0)) {
        return fn_800C93EC(M2C_FIELD(arg0, s32 *, 0xB4) + (temp_r4 * 0xC));
    }
    return &lbl_80274A88;
}

extern void fn_800CA91C(void *arg0);
extern void fn_800DD598(s32 arg0, s32 arg1, u8 *arg2);
void fn_8011CA3C(void *arg0, void *arg1) {
    *(s32 *)((char *)arg0 + 0xAC) = 0;
    
    if (arg0 != arg1) {
        u8 sp8 = *(u8 *)((char *)arg0 + 0xC);
        s32 temp_r4 = *(s32 *)((char *)arg1 + 0x8); 
        fn_800DD598(temp_r4, temp_r4 + (*(s32 *)((char *)arg1 + 0x4) * 0xC), &sp8);
    }
}

void fn_8011CB18(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0xC8);
}

void fn_8011CB2C(void *arg0) {
    M2C_UNK (*temp_r12)();

    M2C_FIELD(arg0, s8 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0xC8);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0xFC);
    if (temp_r12 != NULL) {
        temp_r12();
    }
}

void fn_8011CC04(void *arg0) {
    s32 temp_r4;
    s32 var_r0;

    M2C_FIELD(arg0, s8 *, 0xF0) = 1;
    var_r0 = M2C_FIELD(arg0, s32 *, 0xB0);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xF8);
    if (var_r0 > temp_r4) {
        var_r0 = temp_r4;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + ((var_r0 * 0x10) + 2));
}

void fn_8011D014(void *arg0) {
    void fn_800E43EC(void *);
    void fn_800E7C88(void *);
    extern void *lbl_80367240;
    void *obj;
    u32 buttons;

    fn_800E43EC(arg0);
    obj = M2C_FIELD(arg0, void **, 0);
    buttons = M2C_FIELD(lbl_80367240, u32 *, 0xC);
    if (M2C_FIELD(arg0, u8 *, 0xF0) != 0) {
        if (buttons & 8) {
            M2C_FIELD(arg0, s32 *, 0xEC) -= 1;
        } else if (buttons & 4) {
            M2C_FIELD(arg0, s32 *, 0xEC) += 1;
        } else if (buttons & 1) {
            M2C_FIELD(arg0, s32 *, 0xEC) -= 10;
        } else if (buttons & 2) {
            M2C_FIELD(arg0, s32 *, 0xEC) += 10;
        }
        if (M2C_FIELD(arg0, s32 *, 0xEC) < 0) {
            M2C_FIELD(arg0, s32 *, 0xEC) = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0xEC) >= M2C_FIELD(arg0, s32 *, 0xB0)) {
            M2C_FIELD(arg0, s32 *, 0xEC) = M2C_FIELD(arg0, s32 *, 0xB0) - 1;
        }
        if (M2C_FIELD(arg0, s32 *, 0xEC) >= M2C_FIELD(arg0, s32 *, 0xF4) + M2C_FIELD(arg0, s32 *, 0xF8)) {
            M2C_FIELD(arg0, s32 *, 0xF4) = M2C_FIELD(arg0, s32 *, 0xEC) - M2C_FIELD(arg0, s32 *, 0xF8) + 1;
        } else if (M2C_FIELD(arg0, s32 *, 0xEC) < M2C_FIELD(arg0, s32 *, 0xF4)) {
            M2C_FIELD(arg0, s32 *, 0xF4) = M2C_FIELD(arg0, s32 *, 0xEC);
        }
        fn_800E7C88(obj);
    }
}

void fn_8011D428(s32 arg0) {
    void *fn_8007C3BC(s32);
    M2C_UNK fn_802343E0(M2C_UNK *, s32);
    M2C_UNK fn_80234450(M2C_UNK *, void *);
    extern u8 lbl_80274BB0[];
    
    M2C_UNK sp10;
    fn_80234450(&sp10, &lbl_80274BB0[0x2F]);
    fn_802343E0(&sp10, *(s32*)((char*)fn_8007C3BC(arg0 + 0x30) + 8));
    fn_8005C8B4(&sp10);
}

u32 fn_8011D484(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u32* lbl_8028FE50;
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3_2 = fn_8000C0C0((M2C_UNK *)&lbl_8028FE50);
    if (temp_r3_2 != NULL) {
        temp_r3 = *(u32 *)((char *)temp_r3_2 + 0x58);
        if (temp_r3 != 0U) {
            return temp_r3;
        }
    }
    return 0U;
}

extern u16 lbl_80274BB0[];
void fn_8011D79C(s32 arg0) {
    if (arg0 != 0) {
        u16 *var_r4 = &lbl_80274BB0[arg0];
        s32 temp_r3 = var_r4[0];
        s32 temp_r5 = var_r4[1];
        u16 *var_r8 = &lbl_80296128[temp_r3];
        s32 temp_r7 = var_r8[1];
        
        if (temp_r7 != 0) {
            if (temp_r5 == temp_r7) {
                var_r4[2] = var_r8[2];
            }
        }
    }
}

void fn_8011DCB4(void) {
    M2C_UNK fn_8008A290(M2C_UNK, M2C_UNK);
    fn_8008A290(2, 0x10B);
}

void fn_8011DCDC(void *arg0) {
    fn_8008A290(3, M2C_FIELD(arg0, s16 *, 0x68));
}

void fn_8011DD08(void *arg0) {
    s32 fn_8008A56C();
    if (fn_8008A56C() & 2) {
        if (fn_8008A56C() & 4) {
            M2C_FIELD(arg0, s8 *, 0x64) = 2;
            return;
        }
        if (fn_8008A56C() & 8) {
            M2C_FIELD(arg0, s8 *, 0x64) = 5;
            return;
        }
        goto block_5;
    }
block_5:
    fn_8008A290(3, M2C_FIELD(arg0, s16 *, 0x68));
    M2C_FIELD(arg0, s8 *, 0x64) = 2;
}

extern u32 lbl_80367A5C;
void fn_8011DDCC(void* arg0) {
    int i;
    
    // First loop: iterate through 4 units, check and process
    for (i = 0; i < 4; i++) {
        if (*(void**)((char*)arg0 + i * 4) != NULL) {
            fn_80122C84();
            *(void**)((char*)arg0 + i * 4) = NULL;
        }
    }
    
    // Second loop: iterate through 4 units, check and process
    for (i = 0; i < 4; i++) {
        if (*(void**)((char*)arg0 + 0x10 + i * 4) != NULL) {
            fn_8007AD6C();
            *(void**)((char*)arg0 + 0x10 + i * 4) = NULL;
        }
    }
    
    // Clear unk30 - this is likely at offset 0x20
    *(s32*)((char*)arg0 + 0x20) = 0;
    
    // Check and process lbl_80367A5C
    if (lbl_80367A5C != 0) {
        fn_80109020();
        lbl_80367A5C = 0;
    }
    
    // Check and process unk58 - at offset 0x58 
    if (*(s32*)((char*)arg0 + 0x58) != 0) {
        fn_8000C60C();
        *(s32*)((char*)arg0 + 0x58) = 0;
    }
    
    // Call fn_80120F0C
    fn_80120F0C();
    
    // Check bit 7 of lbl_80367A58 and process if set
    if (lbl_80367A58 & 0x80) {
        fn_800AA208();
        lbl_80367A58 &= 0xFFFFFF7F;
    }
    
    // Clear lbl_80367A58 and update lbl_80367110
    lbl_80367A58 = 0;
    lbl_80367110 &= 0xFFFFFFFD;
}

void fn_8012075C(void *arg0) {
    s32 i;
    void **ptr_array;
    s32 r3 = (s32)arg0;
    
    if (!(lbl_80367110 & 3)) {
        i = 0; // This is likely what the extra instruction is for
        ptr_array = (void**)arg0;
        do {
            if (*ptr_array != NULL) {
                fn_80122AA8(*ptr_array);
            }
            i += 1;
            ptr_array++;
        } while (i < 4);
    }
}

void fn_801207BC(void) {
    extern s32 lbl_80367110;
    extern u16 lbl_80367A58;
    lbl_80367A58 &= 0xFFFFFFFB;
    lbl_80367110 |= 2;
}
#include "common.h"
extern struct SomeStruct* lbl_80320C20; // example struct
#include "common.h"
#include "unit.h"
#include "global.h"

extern u16 lbl_8028F6C8[];
extern u16 lbl_80296128[];
