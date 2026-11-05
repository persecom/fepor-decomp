/* Functions from 0x800AD24C to 0x800C3F18, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_80368230;

/* 0x18-byte record used by fn_800C29D0 / fn_800C2ACC / fn_800C30CC (1-based index) */
typedef struct Unk800C2ACC {
    u8 unk0[0x13];
    u8 unk13;
    u8 unk14[4];
} Unk800C2ACC;

void fn_800AD24C(void) {
    extern u16 lbl_80312ACC[];
    extern void fn_800AD284(void);
    fn_8022C1E8(lbl_80312ACC, fn_800AD284, 0x10, 0x10);
}

s32 fn_800AD284(s32 arg0, s16 arg1) {
    M2C_UNK fn_8001C5F8(s32, M2C_UNK);
    M2C_UNK fn_800C428C(s32);
    if (arg0 != 0) {
        fn_8001C5F8(arg0 + 4, -1);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_800AD2DC(s32 arg0) {
    M2C_UNK fn_8001C76C(s32);
    fn_8001C76C(arg0 + 4);
    return arg0;
}

void fn_800AD678(void) {
    M2C_UNK fn_801A4BE0(M2C_UNK *);
    extern M2C_UNK lbl_80330EAC;
    M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) = (s32) (M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) | 1);
    fn_801A4BE0(&lbl_80330EAC);
}

void fn_800AD6AC(void *arg0) {
    extern u16 lbl_80330EAC[];
    void *temp_r4;
    void *temp_r5;
    u8 temp_r7;

    temp_r4 = *(void **)((u8 *)arg0 + 0x30);
    temp_r5 = *(void **)((u8 *)temp_r4 + 0x190);
    if (*(u8 *)((u8 *)temp_r5 + 8) != 0) {
        fn_8000C070(0x64);
        return;
    }
    temp_r7 = *(u8 *)((u8 *)arg0 + 0x3A);
    fn_80034A8C(lbl_80330EAC, temp_r7, 1);
}

void fn_800ADD04(void);
void fn_800ADC9C(s32 arg0) {
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_80330EAC[];
    void *fn_8002F62C(void *);
    u8 *fn_8002F740(void);
    M2C_UNK fn_8019B6B4(s32, void (*)(void));
    M2C_UNK fn_801A4958(void *);
    M2C_UNK fn_801A75DC(void *, u8 *, s32);
    u8 *p;

    fn_8002F62C(lbl_802EF4E0);
    p = fn_8002F740();
    fn_801A75DC(lbl_80330EAC, p, -1);
    fn_801A4958(lbl_80330EAC);
    fn_8019B6B4(arg0, fn_800ADD04);
}

void fn_800ADD04(void) {
    extern u8 lbl_802EF4E0[];
    void *fn_8002F62C(void *);
    u8 *fn_8002F740(void);
    M2C_UNK fn_8010455C(void *, u8);
    void *p;

    p = fn_8002F62C(lbl_802EF4E0);
    fn_8010455C(fn_8002F740() + 0x1A4, M2C_FIELD(p, u8 *, 3));
}

extern u8 lbl_802EF4E0[];
extern void fn_8002F61C(void *);
extern void *fn_8002F62C(void *);
extern u8 *fn_8002F740(void);
extern void fn_8003E8DC(void);
void fn_800ADD48(void) {
    fn_8002F62C(lbl_802EF4E0);
    fn_8002F740();
    fn_8003E8DC();
    fn_8002F61C(lbl_802EF4E0);
}

void fn_800ADD84(void) {
    M2C_UNK fn_80033418(void *);
    M2C_UNK fn_801A4BE0(void *);
    extern u8 lbl_80330EAC[];

    fn_801A4BE0(lbl_80330EAC);
    fn_80033418(lbl_80330EAC + 0x8A0);
}

extern void fn_8003BE50(void);
void fn_800AE1FC(void) {
    fn_8002F62C(&lbl_802EF4E0);
    fn_8002F740();
    fn_8003BE50();
    fn_8002F61C(&lbl_802EF4E0);
}

void fn_800AE3DC(s32 arg0) {
    extern u8 lbl_80330708[];
    extern u8 lbl_80284AC8[];
    if (lbl_80330708[lbl_80330708[0x11] + 0x14] == 1) {
        fn_8000CAA0(lbl_80284AC8, arg0);
    }
}

void fn_800AE904(void *arg0) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x4C), s32 *, 0x4C) = 0;
}

void fn_800B16EC(void *arg0) {
    M2C_UNK fn_800B1720(M2C_UNK, s32);
    fn_800B1720(0, *M2C_FIELD(arg0, s32 **, 4) + 0x40);
}

s32 fn_800B1BFC(s32 arg0)
{
    extern u16 lbl_80317338[4976];
    s16 val = lbl_80317338[arg0];
    lbl_80317338[arg0] = val - 1;
    return val;
}

s32 fn_800B1DEC(s32 arg0, s32 arg1) {
    extern u16 lbl_80317338[];
    s32 temp;
    
    temp = (s32)lbl_80317338[arg0 * 0x14 + 0xF4 / 2];
    
    if ((temp & 0x1000) != 0) {
        return fn_8024B6B4(0x80, arg1);
    }
    
    return 0;
}

s16 fn_800B25EC(s32 arg0) {
    extern u16 lbl_80317338[];
    s16 val = lbl_80317338[arg0];
    lbl_80317338[arg0] = val - 1;
    return val;
}

s16 fn_800B2648(s32 arg0, s16 arg1) {
    extern u16 lbl_80317338[];
    lbl_80317338[arg0] = arg1;
    return arg1;
}

void fn_800B28FC(s32 arg0) {
    M2C_UNK fn_8024B94C(M2C_UNK *);
    extern M2C_UNK lbl_80317338;
    M2C_FIELD(&lbl_80317338, s32 *, 0x130) = arg0;
    fn_8024B94C(&lbl_80317338);
}

s32 fn_800B2D94(void) {
    extern u16 lbl_80319A68[32];
    lbl_80319A68[0] = 2;
    lbl_80319A68[1] = 3;
    lbl_80319A68[2] = 7;
    lbl_80319A68[3] = 8;
    lbl_80319A68[4] = 9;
    lbl_80319A68[5] = 10;
    lbl_80319A68[6] = 11;
    lbl_80319A68[7] = 12;
    return 1;
}

void fn_800B3490(void) {
    extern u16 lbl_80317338[];
    u32 index = 0x222;
    if (lbl_80317338[index] != 0) {
        lbl_80317338[index] = 0;
    }
}

void fn_800B4060(void) {
    M2C_UNK fn_800AECC0();
    fn_800AECC0();
}

void fn_800B4794(void) {
    extern s8 lbl_80367810;
    lbl_80367810 = 0;
}

void fn_800B47A0(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

void fn_800B47C0(void) {
    extern u16 lbl_8026EB70[];
    fn_800C4638((u16*)((u8*)lbl_8026EB70 + 0x5C), 0);
}

s32 fn_800B49C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void fn_800B49D0(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 8);
}

void fn_800B49E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s32 *, 0x84) = arg3;
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 1);
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x8C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}

s32 fn_800B4A14(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s32 *, 0x84) = arg3;
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 1);
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
loop_1:
    if (!(M2C_FIELD(arg0, u16 *, 0x90) & 2)) {
        fn_8020A51C();
        goto loop_1;
    }
    return M2C_FIELD(arg0, s32 *, 0x74);
}

extern u16 lbl_80367820;
s32 fn_800B4FF8(u8 *arg0, u8 *arg1) {
    s32 temp_r4;
    u16 temp_r3;
    u16 temp_r0_2;
    
    temp_r4 = lbl_80367820 + 0x92;
    temp_r3 = *(u16*)(temp_r4 + (*arg0 * 0x98));
    temp_r0_2 = *(u16*)(temp_r4 + (*arg1 * 0x98));
    if (temp_r3 > temp_r0_2) {
        return 1;
    }
    if (temp_r3 < temp_r0_2) {
        return -1;
    }
    return 0;
}

void fn_800B50E4(void) {
    M2C_UNK fn_800B4C20();
    M2C_UNK fn_8020A51C();
loop_1:
    fn_800B4C20();
    fn_8020A51C();
    goto loop_1;
}

s32 fn_800B6A30(void) {
    return 0;
}

s32 fn_800B6A38(void) {
    return 1;
}

void fn_800B6A70(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 < 0) {
        arg0 = 0;
    }
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg2 < 0) {
        arg2 = 0;
    }
    *(s32 *)(arg0 + 0x7C) = arg1;
    *(s32 *)(arg0 + 0x80) = arg2;
}

s32 fn_800B6AA8(s32 arg0) {
    extern f32 lbl_80369CF4;
    return (s32) (lbl_80369CF4 * (f32) arg0);
}

s32 fn_800B6B20(void) {
    extern s32 lbl_8028D298;
    
    fn_8000CAA0(&lbl_8028D298, fn_800C0658(), &lbl_8028D298);
    fn_80013864();
    return 1;
}

void fn_800B6B58(s32 arg0) {
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) {
        fn_8000C188(arg0);
    }
}

extern s32 lbl_8036B3A4;
extern s32 lbl_8036B3A4;
s32 fn_800B6B94(s32 arg0) {
    M2C_UNK fn_801F89AC(s32, s32);
    extern f32 lbl_80369CF4;

    fn_801F89AC((f32) arg0 / lbl_80369CF4, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B6C00(s32 arg0) {
    M2C_UNK fn_801F9D1C(s32, s32);
    extern f32 lbl_80369CF4;

    fn_801F9D1C((f32) arg0 / lbl_80369CF4, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B6C6C(s32 arg0) {
    M2C_UNK fn_801FA4B8(s32, s32);
    extern f32 lbl_80369CF4;

    fn_801FA4B8((f32) arg0 / lbl_80369CF4, fn_800C0658());
    fn_80013864();
    return 1;
}

extern M2C_UNK lbl_8028E7F8;
s32 fn_800B6CD8(u32 arg0) {
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    OSReport();
    return 1;
}

s32 fn_800B6D20(s32 arg0) {
    M2C_UNK fn_8014CC5C(void *, s32);
    extern u8 lbl_80330708[];

    fn_8014CC5C(lbl_80330708, arg0);
    return 1;
}

s32 fn_800B6D50(s32 arg0, s32 arg1) {
    M2C_UNK fn_8014CF10(void *, s8, s8);
    extern u8 lbl_80330708[];

    fn_8014CF10(lbl_80330708, arg0, arg1);
    return 1;
}

s32 fn_800B6D88(s32 arg0) {
    M2C_UNK fn_8014CF48(void *, s32);
    extern u8 lbl_80330708[];

    fn_8014CF48(lbl_80330708, arg0);
    return 1;
}

s32 fn_800B6DB8(s32 arg0, s32 arg1) {
    M2C_UNK fn_8014D204(void *, s8, s8);
    extern u8 lbl_80330708[];

    fn_8014D204(lbl_80330708, arg0, arg1);
    return 1;
}

s32 fn_800B6E8C(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 fn_800067BC(f32, f32, f32, f32);
    return (s32) fn_800067BC((f32) arg1, (f32) arg2, (f32) arg3, (f32) arg4);
}

void fn_800B6F48(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

s32 fn_800B6F6C(s32 arg0) {
    s32 ret;
    
    ret = arg0;
    if (ret < 0) {
        ret = 0;
    }
    return ret;
}

void fn_800B6FB8(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

s32 fn_800B6FE4(u32 arg0) {
    M2C_UNK fn_80013864();
    M2C_UNK fn_801EAABC(u32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_801EAABC(arg0, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B7044(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    return arg0;
}

s32 fn_800B7140(u32 arg0) {
    M2C_UNK fn_801070FC(u32);
    M2C_UNK fn_80107294(M2C_UNK);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_80107294(5);
    fn_801070FC(arg0);
    return 1;
}

u8 fn_800B719C(u8 arg0) {
    u8 fn_800F32A4(void);
    extern u8 lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0U;
    }
    return fn_800F32A4();
}

u8 fn_800B7200(void) {
    extern u8 lbl_8031FFC0;
    return M2C_FIELD(&lbl_8031FFC0, u8 *, 0xA);
}

s32 fn_800B7210(void) {
    void fn_800162B8(void);
    void fn_801A7CDC(void *);
    void fn_80016DE0(void);
    void fn_8002297C(void *);
    extern u8 lbl_802CA518;
    extern u8 lbl_80330EAC;

    fn_800162B8();
    fn_801A7CDC(&lbl_80330EAC);
    fn_80016DE0();
    fn_8002297C(&lbl_802CA518);
    return 1;
}

s32 fn_800B7250(void) {
    M2C_UNK fn_800162B8();
    M2C_UNK fn_800163F8();
    fn_800162B8();
    fn_800163F8();
    fn_80016180();
    return 1;
}

s32 fn_800B727C(void) {
    M2C_UNK fn_800BDED8(void *);
    M2C_UNK fn_801E3654(M2C_UNK *, s32);
    extern M2C_UNK lbl_80330708;
    extern s32 lbl_80367840;
    M2C_UNK sp8;

    fn_800BDED8(&lbl_80330708 + 0xB4);
    fn_800162B8();
    fn_801E3654(&sp8, lbl_80367840);
    fn_800C4588(lbl_80367840);
    lbl_80367840 = 0;
    return 1;
}

s32 fn_800B72CC(void) {
    M2C_UNK fn_80016DE0();
    M2C_UNK fn_8002297C(M2C_UNK *);
    M2C_UNK fn_800BDED8(void *);
    M2C_UNK fn_800C32A4(M2C_UNK *);
    M2C_UNK fn_800C341C(M2C_UNK *);
    s32 fn_800C4638(M2C_UNK, void *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8010FF90(M2C_UNK *);
    M2C_UNK fn_801A7CDC(M2C_UNK *);
    M2C_UNK fn_801E38E0(M2C_UNK *, s32);
    extern M2C_UNK lbl_8026ECB8;
    extern M2C_UNK lbl_802CA518;
    extern M2C_UNK lbl_803200AC;
    extern M2C_UNK lbl_803206EC;
    extern M2C_UNK lbl_8032BB58;
    extern M2C_UNK lbl_80330708;
    extern M2C_UNK lbl_80330EAC;
    extern s32 lbl_80367840;
    M2C_UNK sp8;
    s32 temp_r3;

    temp_r3 = fn_800C4638(0xA000, &lbl_8026ECB8 + 0x996, 0, 0x10000);
    lbl_80367840 = temp_r3;
    fn_801E38E0(&sp8, temp_r3);
    fn_800162B8();
    fn_801A7CDC(&lbl_80330EAC);
    fn_80016DE0();
    fn_8002297C(&lbl_802CA518);
    fn_800BDED8(&lbl_80330708 + 0xB4);
    fn_8010FF90(&lbl_8032BB58);
    fn_800C341C(&lbl_803200AC);
    fn_800C32A4(&lbl_803206EC);
    fn_8002297C(&lbl_802CA518);
    return 1;
}

s32 fn_800B7378(void) {
    M2C_UNK fn_80016628(void *);
    M2C_UNK fn_800C2930(void *, void *);
    M2C_UNK fn_8017A7D4(void *, s32);
    extern u8 lbl_802842A4[];
    extern u8 lbl_802842B8[];
    extern u8 lbl_803206EC[];
    extern s32 lbl_80367840;
    struct {
        s32 handle;
        u8 pad4[8];
        u8 owned;
        u8 padD[3];
        void *vtbl;
    } obj;

    fn_800162B8();
    fn_8017A7D4(&obj, lbl_80367840);
    fn_80016628(&obj);
    fn_800C2930(lbl_803206EC, &obj);
    fn_800163F8();
    fn_80016180();
    fn_800C4588(lbl_80367840);
    lbl_80367840 = 0;
    obj.vtbl = lbl_802842B8;
    obj.vtbl = lbl_802842A4;
    if (obj.owned) {
        fn_800C4588(obj.handle);
        obj.handle = 0;
        obj.owned = 0;
    }
    return 1;
}

s32 fn_800B7410(void) {
    M2C_UNK fn_80016628(void *);
    M2C_UNK fn_800C2930(void *, void *);
    M2C_UNK fn_8017A7D4(void *, s32);
    M2C_UNK fn_80023DC0();
    extern u8 lbl_802842A4[];
    extern u8 lbl_802842B8[];
    extern u8 lbl_803206EC[];
    extern s32 lbl_80367840;
    struct {
        s32 handle;
        u8 pad4[8];
        u8 owned;
        u8 padD[3];
        void *vtbl;
    } obj;

    fn_800162B8();
    fn_8017A7D4(&obj, lbl_80367840);
    fn_80016628(&obj);
    fn_800C2930(lbl_803206EC, &obj);
    fn_80023DC0();
    fn_800163F8();
    fn_80016180();
    fn_800C4588(lbl_80367840);
    lbl_80367840 = 0;
    obj.vtbl = lbl_802842B8;
    obj.vtbl = lbl_802842A4;
    if (obj.owned) {
        fn_800C4588(obj.handle);
        obj.handle = 0;
        obj.owned = 0;
    }
    return 1;
}

s32 fn_800B7658(s32 arg0) {
    M2C_UNK fn_800A5D1C(void *, s32, s32);
    M2C_UNK fn_800A58F0(s32);
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_8026ECB8[];
    extern u8 lbl_8028D244[];
    extern s32 lbl_80367110;

    if (lbl_80367110 & 1) {
        return 0;
    }
    fn_800A5D1C(lbl_8026ECB8 + 0x997, 0, 1);
    fn_800A58F0(arg0);
    fn_8000CAA0(lbl_8028D244, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B76D0(u32 arg0) {
    M2C_UNK fn_800A5D1C(u32, s32, s32);
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_8028D244[];
    extern s32 lbl_80367110;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    fn_800A5D1C(arg0, 0, 1);
    fn_8000CAA0(lbl_8028D244, fn_800C0658());
    fn_80013864();
    return 1;
}

void fn_800B7748(s32 arg0) {
    u8 fn_800A5C88(void);
    extern s32 lbl_80367110;

    if (fn_800A5C88() == 0 || (lbl_80367110 & 1)) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B7790(s32 arg0) {
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_8028D22C[];
    extern s32 lbl_80367110;
    extern f32 lbl_80369CF4;
    void *obj;
    s32 count;

    fn_80013864();
    if (lbl_80367110 & 1) {
        return 0;
    }
    count = (f32) arg0 / lbl_80369CF4;
    if (count > 1) {
        obj = (void *) fn_8000CAA0(lbl_8028D22C, fn_800C0658());
        M2C_FIELD(obj, s32 *, 0x60) = count - 1;
    }
    return 1;
}

s32 fn_800B7828(s32 arg0) {
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_8028D22C[];
    extern s32 lbl_80367110;
    void *obj;

    fn_80013864();
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (arg0 > 1) {
        obj = (void *) fn_8000CAA0(lbl_8028D22C, fn_800C0658());
        M2C_FIELD(obj, s32 *, 0x60) = arg0 - 1;
    }
    return 1;
}

void fn_800B7890(void *arg0) {
    extern s32 lbl_80367110;

    M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    if (M2C_FIELD(arg0, s32 *, 0x60) < 0 || (lbl_80367110 & 1)) {
        fn_8000C188(arg0);
    }
}

u8 fn_800B78D4(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA6] == 2;
}

u8 fn_800B78F0(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA6] == 1;
}

u8 fn_800B790C(void) {
    extern u8 lbl_80330708[];
    s32 state;

    state = lbl_80330708[0xA6];
    return state == 0 || state == 3;
}

u8 fn_800B7938(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA6];
}

s32 fn_800B7948(void) {
    M2C_UNK fn_801453F0();
    fn_801453F0();
    return 1;
}

s32 fn_800B796C(void) {
    M2C_UNK fn_80145488();
    fn_80145488();
    return 1;
}

s32 fn_800B7990(void) {
    M2C_UNK fn_80145520();
    fn_80145520();
    return 1;
}

s32 fn_800B79B4(s32 arg0) {
    M2C_UNK fn_801455B8(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    fn_801455B8(var_r3);
    return 1;
}

s32 fn_800B79E4(void) {
    M2C_UNK fn_80145684();
    fn_80145684();
    return 1;
}

s32 fn_800B7A08(void) {
    M2C_UNK fn_8014571C();
    fn_8014571C();
    return 1;
}

s32 fn_800B7A2C(u32 arg0) {
    M2C_UNK fn_801475FC(u32, s32);
    extern s32 lbl_80367110;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (!(lbl_80367110 & 3)) {
        fn_801475FC(arg0, 100);
    }
    return 1;
}

s32 fn_800B7C04(void) {
    M2C_UNK fn_801457B4();
    fn_801457B4();
    return 1;
}

s32 fn_800B7C28(void) {
    M2C_UNK fn_80145828();
    fn_80145828();
    return 1;
}

s32 fn_800B7D08(u8 arg0, s16 arg1) {
    M2C_UNK fn_80146B00();
    M2C_UNK fn_80148888(void *, s16);
    extern M2C_UNK lbl_8032FF08;
    u8 var_r31;
    void *temp_r30;

    var_r31 = 0;
    temp_r30 = &lbl_8032FF08 + (arg0 * 0x30);
    if ((M2C_FIELD(temp_r30, u8 *, 0xC) & 1) && (M2C_FIELD(M2C_FIELD(temp_r30, void **, 8), u8 (**)(void *), 8)(temp_r30) != 0)) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        fn_80148888(temp_r30, arg1);
    }
    if ((s32) arg0 == 0) {
        fn_80146B00();
    }
    return 1;
}

s32 fn_800B7F98(u8 arg0, u8 arg1, s16 arg2) {
    extern u16 lbl_8032FF08[];
    s32 temp_r6;
    s32 temp_r3;

    temp_r6 = arg0 * 0x30;
    temp_r3 = temp_r6 << 1;
    fn_8014876C(&lbl_8032FF08[temp_r3], arg1, arg2, temp_r6);
    return 1;
}

s32 fn_800B8108(void) {
    M2C_UNK fn_8016B5E8();
    fn_8016B5E8();
    return 1;
}

s32 fn_800B812C(void) {
    M2C_UNK fn_8016B68C();
    fn_8016B68C();
    return 1;
}

s32 fn_800B8150(void) {
    M2C_UNK fn_8016B60C();
    fn_8016B60C();
    return 1;
}

s32 fn_800B8174(void) {
    M2C_UNK fn_8016B64C();
    fn_8016B64C();
    return 1;
}

s32 fn_800B8198(void) {
    M2C_UNK fn_800C0658();
    M2C_UNK fn_8016B6D4();
    fn_800C0658();
    fn_8016B6D4();
    return 1;
}

void fn_800B8208(s32 arg0) {
    extern M2C_UNK lbl_8026ECB8;
    if (fn_8000BCA4(&lbl_8026ECB8 + 0xA29, &lbl_8026ECB8) == 0U) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B8250(s8 arg0, s8 arg1, u8 arg2, s32 arg3) {
    M2C_UNK fn_8010FD70(M2C_UNK *, s8, s8, u8, s32);
    extern M2C_UNK lbl_8032BB58;
    fn_8010FD70(&lbl_8032BB58, arg0, arg1, arg2, arg3);
    return 1;
}

extern u16 lbl_8032BB58[];
s32 fn_800B8298(s8 arg0, s8 arg1) {
    fn_8010FEEC(lbl_8032BB58, arg0, arg1, 9, 0);
    return 1;
}

s32 fn_800B850C(s32 arg0, s8 arg1, s16 arg2) {
    extern u8 lbl_802EFDB8[];
    lbl_802EFDB8[0x61] = 1;
    lbl_802EFDB8[arg0] = arg1;
    *(s16 *)(lbl_802EFDB8 + 0x20 + arg0 * 2) = arg2;
    return 1;
}

s32 fn_800B8534(void) {
    extern M2C_UNK lbl_802EFDB8;
    M2C_UNK *var_r3;
    M2C_UNK *var_r5;
    s32 var_ctr;

    var_r3 = &lbl_802EFDB8;
    M2C_FIELD(&lbl_802EFDB8, s8 *, 0x61) = 0;
    var_r5 = &lbl_802EFDB8;
    M2C_FIELD(&lbl_802EFDB8, s8 *, 0x60) = 0;
    var_ctr = 2;
    do {
        M2C_FIELD(var_r3, s8 *, 0) = 0;
        M2C_FIELD(var_r5, s16 *, 0x20) = 0;
        M2C_FIELD(var_r3, s8 *, 1) = 0;
        M2C_FIELD(var_r5, s16 *, 0x22) = 0;
        M2C_FIELD(var_r3, s8 *, 2) = 0;
        M2C_FIELD(var_r5, s16 *, 0x24) = 0;
        M2C_FIELD(var_r3, s8 *, 3) = 0;
        M2C_FIELD(var_r5, s16 *, 0x26) = 0;
        M2C_FIELD(var_r3, s8 *, 4) = 0;
        M2C_FIELD(var_r5, s16 *, 0x28) = 0;
        M2C_FIELD(var_r3, s8 *, 5) = 0;
        M2C_FIELD(var_r5, s16 *, 0x2A) = 0;
        M2C_FIELD(var_r3, s8 *, 6) = 0;
        M2C_FIELD(var_r5, s16 *, 0x2C) = 0;
        M2C_FIELD(var_r3, s8 *, 7) = 0;
        M2C_FIELD(var_r5, s16 *, 0x2E) = 0;
        M2C_FIELD(var_r3, s8 *, 8) = 0;
        M2C_FIELD(var_r5, s16 *, 0x30) = 0;
        M2C_FIELD(var_r3, s8 *, 9) = 0;
        M2C_FIELD(var_r5, s16 *, 0x32) = 0;
        M2C_FIELD(var_r3, s8 *, 0xA) = 0;
        M2C_FIELD(var_r5, s16 *, 0x34) = 0;
        M2C_FIELD(var_r3, s8 *, 0xB) = 0;
        M2C_FIELD(var_r5, s16 *, 0x36) = 0;
        M2C_FIELD(var_r3, s8 *, 0xC) = 0;
        M2C_FIELD(var_r5, s16 *, 0x38) = 0;
        M2C_FIELD(var_r3, s8 *, 0xD) = 0;
        M2C_FIELD(var_r5, s16 *, 0x3A) = 0;
        M2C_FIELD(var_r3, s8 *, 0xE) = 0;
        M2C_FIELD(var_r5, s16 *, 0x3C) = 0;
        M2C_FIELD(var_r3, s8 *, 0xF) = 0;
        var_r3 += 0x10;
        M2C_FIELD(var_r5, s16 *, 0x3E) = 0;
        var_r5 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    return 1;
}

s32 fn_800B85EC(void) {
    M2C_UNK fn_80025680(s32, s32);
    s32 fn_800B864C();
    extern s32 lbl_80367240;
    fn_80025680(lbl_80367240, fn_800B864C());
    return 0;
}

s32 fn_800B861C(void) {
    M2C_UNK fn_80025690(s32, s32);
    s32 fn_800B864C();
    extern s32 lbl_80367240;
    fn_80025690(lbl_80367240, fn_800B864C());
    return 0;
}

s32 fn_800B870C(u32 arg0) {
    s32 fn_8000BCA4();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    return fn_8000BCA4();
}

s32 fn_800B874C(u32 arg0) {
    M2C_UNK fn_8000BD98();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_8000BD98();
    return 0;
}

u8 fn_800B8790(void) {
    return fn_80089948();
}

s32 fn_800B87B4(void) {
    u8 fn_80089948();
    M2C_UNK fn_8000CAA0(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D1EC[];
    extern u8 lbl_80320060[];
    if (fn_80089948() != 0) {
        fn_8000CAA0(lbl_8028D1EC, fn_800C0658());
        fn_80013864();
        fn_80013874(lbl_80320060);
    }
    return 1;
}

void fn_800B8804(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_80089948();
    if (fn_80089948() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B8840(void) {
    M2C_UNK fn_80089970();
    fn_80089970();
    return 1;
}

s32 fn_800B8864(s32 arg0) {
    M2C_UNK fn_80089980(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0x7D0;
    }
    fn_80089980(var_r3);
    return 1;
}

s32 fn_800B8894(s32 arg0) {
    M2C_UNK fn_800899D4(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0x7D0;
    }
    fn_800899D4(var_r3);
    return 1;
}

u8 fn_800B88C4(void) {
    return fn_80089ED8();
}

s32 fn_800B88E8(void) {
    u8 fn_80089ED8();
    M2C_UNK fn_8000CAA0(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D1D8[];
    extern u8 lbl_80320060[];
    if (fn_80089ED8() != 0) {
        fn_8000CAA0(lbl_8028D1D8, fn_800C0658());
        fn_80013864();
        fn_80013874(lbl_80320060);
    }
    return 1;
}

void fn_800B8938(s32 arg0) {
    u8 fn_80089ED8();
    if (fn_80089ED8() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B8974(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_80089F00(u8, u8, u8, s32, s32);
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r5 = arg2;
    var_r6 = arg3;
    var_r7 = arg4;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    if (var_r3 > 0xFF) {
        var_r3 = 0xFF;
    }
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    if (var_r4 > 0xFF) {
        var_r4 = 0xFF;
    }
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    if (var_r5 > 0xFF) {
        var_r5 = 0xFF;
    }
    if (var_r6 < 0) {
        var_r6 = 0x1F4;
    }
    if (var_r7 < 0) {
        var_r7 = 0x1F4;
    }
    fn_80089F00((u8) var_r3, (u8) var_r4, (u8) var_r5, var_r6, var_r7);
    return 1;
}

u8 fn_800B8A04(void) {
    return fn_8008A59C();
}

s32 fn_800B8A28(u8 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0x1F4;
    }
    fn_8008A290(arg0, var_r4);
    return 1;
}

#pragma use_lmw_stmw on
s32 fn_800B8A5C(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_801C1D54(s16, s16, u32, s32, s32, s32);
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1D54(arg0, arg1, arg2, arg3, arg4, fn_800C0658());
    return 1;
}
#pragma use_lmw_stmw reset
s32 fn_800B8AD8(void) {
    M2C_UNK fn_801C18FC();
    fn_801C18FC();
    return 1;
}

s32 fn_800B8AFC(s32 arg0) {
    M2C_UNK fn_801C1970(s8);
    fn_801C1970(arg0);
    return 1;
}

#pragma use_lmw_stmw on
s32 fn_800B8B24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4, s32 arg5) {
    M2C_UNK fn_801C1A18(s8, s16, s16, s16, u32, s32, s32);
    if ((arg4 < 0x80000000U) || (arg4 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1A18(arg0, arg1, arg2, arg3, arg4, arg5, fn_800C0658());
    return 1;
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
s32 fn_800B8BA8(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_UNK fn_801C1AC8(s16, s16, s16, u32, s32, s32, s32, s32);
    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1AC8(arg0, arg1, arg2, arg3, arg4, arg5, arg6, fn_800C0658());
    return 1;
}
#pragma use_lmw_stmw reset

s32 fn_800B8C34(s8 arg0, s16 arg1, s16 arg2, u32 arg3, s32 arg4) {
    M2C_UNK fn_801C1BC0(s8, s16, s16, u32, s32, s32);
    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1BC0(arg0, arg1, arg2, arg3, arg4, fn_800C0658());
    return 1;
}

s32 fn_800B8CB0(s16 arg0, s16 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_UNK fn_801C1C64(s16, s16, u32, s32, s32, s32, s32);
    M2C_UNK fn_800C0658(void);
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1C64(arg0, arg1, arg2, arg3, arg4, arg5, fn_800C0658());
    return 1;
}

void fn_800B8D34(void) {
    M2C_UNK fn_8006F014();
    fn_8006F014();
}

s32 fn_800B8D54(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    M2C_UNK fn_8006F020();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F020();
    fn_80013864();
    return 1;
}

s32 fn_800B8DE4(u32 arg0, u32 arg1, u32 arg2) {
    M2C_UNK fn_8006F09C();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F09C();
    fn_80013864();
    return 1;
}

s32 fn_800B8E5C(u32 arg0, u32 arg1) {
    M2C_UNK fn_8006F10C();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F10C();
    fn_80013864();
    return 1;
}

s32 fn_800B8EBC(void) {
    extern s32 lbl_80367110;
    lbl_80367110 |= 0x10;
    return 1;
}

extern void fn_8006F6A4(u32 arg0, u32 arg1, u32 arg2);
s32 fn_800B8F98(u32 arg0) {
    M2C_UNK fn_8006F6A4(s32, u32, s32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F6A4(fn_800C0658(), arg0, 0, 0);
    fn_80013864();
    return 0;
}

extern void fn_80070018(u32 arg0, u32 arg1, u32 arg2);
s32 fn_800B8FFC(u32 arg0) {
    M2C_UNK fn_80070018(s32, u32, s32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_80070018(fn_800C0658(), arg0, 0, 0);
    fn_80013864();
    return 0;
}

extern void fn_80070018(u32 arg0, u32 arg1, u32 arg2);
s32 fn_800B9060(u32 arg0) {
    M2C_UNK fn_80070018(s32, u32, s32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_80070018(fn_800C0658(), arg0, 0, 0);
    fn_80013864();
    return 0;
}

s32 fn_800B90C4(u32 arg0) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFCB4(void);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFCB4();
    return 1;
}

s32 fn_800B9130(u32 arg0, s32 arg1) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFD40(s32);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFD40(arg1);
    return 1;
}

s32 fn_800B91AC(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFD60(s32, s32, s32, s32);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFD60(arg1, arg2, arg3, arg4);
    return 1;
}

s32 fn_800B9258(u32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFD8C(s32, s32);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFD8C(arg1, arg2 != 0);
    return 1;
}

s32 fn_800B97B8(u32 arg0, s32 arg1) {
    void *fn_801CF760(u32);
    M2C_UNK fn_801D041C(void *, s32);
    extern s32 lbl_80367110;
    void *p;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    p = fn_801CF760(arg0);
    if (p == NULL) {
        return 0;
    }
    fn_801D041C(p, arg1 != 0);
    return 1;
}

void fn_800B995C(void *arg0) {
    void **temp_r3;
    s32 temp_r5;
    s32 temp_r4;

    temp_r3 = (void **)arg0;
    temp_r5 = *(s32 *)((char *)temp_r3[0x15] + 8);
    temp_r4 = 0x100;
    if (!(temp_r5 & (temp_r4 << 0)) && !(temp_r5 & (temp_r4 << 1)) && !(temp_r5 & (temp_r4 << 2))) {
        fn_8000C188();
    }
}

s32 fn_800B9A34(u32 arg0, u8 arg1) {
    u32 fn_801090C0();
    M2C_UNK fn_80109BB4(u8);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (fn_801090C0() == 0U) {
        return 0;
    }
    fn_80109BB4(arg1 & 0xFF);
    return 1;
}

s32 fn_800B9A9C(u32 arg0, u8 arg1) {
    u32 fn_801090C0(u32);
    M2C_UNK fn_80109C1C(u8);
    u32 fn_801CF760(u32);
    M2C_UNK fn_801CFC4C(u8);
    s32 fn_80234278(void *, M2C_UNK);
    extern M2C_UNK lbl_8026ECB8;
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (fn_80234278(&lbl_8026ECB8 + 0xA47, 8) != 0) {
        if (fn_801090C0(arg0) == 0U) {
            return 0;
        }
        fn_80109C1C(arg1);
        return 1;
    }
    if (fn_801CF760(arg0) == 0U) {
        return 0;
    }
    fn_801CFC4C(arg1);
    return 1;
}

void fn_800B9C14(void) {
    f32 var = 1.0f;
    fn_800B9CD4(var);
}

s32 fn_800BA230(u32 arg0, s32 arg1) {
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (fn_801090C0() == 0U) {
        return 0;
    }
    fn_80109DC0(arg1);
    return 1;
}

s32 fn_800BA438(u32 arg0, int arg1)
{
  u32 fn_801090C0();
  f32 fn_801099A0(u8);
  if (arg1)
  {
  }
  if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U))
  {
    return 0;
  }
  if (fn_801090C0() == 0U)
  {
    return 0;
  }
  return (s32) fn_801099A0(arg1);
}

s32 fn_800BA75C(s8 arg0, s8 arg1, s8 arg2) {
    extern M2C_UNK lbl_802CA518;
    M2C_FIELD((&lbl_802CA518 + arg0 + (arg1 << 6)), s8 *, 0x100D) = arg2;
    return 0;
}

s32 fn_800BA8F8(u8 arg0) {
    void fn_8002297C(void *);
    M2C_UNK fn_8003DFB8(void *);
    M2C_UNK fn_801A251C(void);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802CA518[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || M2C_FIELD(unit, void **, 0x188) == NULL) {
        return 0;
    }
    fn_8003DFB8(unit);
    fn_8002297C(lbl_802CA518);
    fn_801A251C();
    return 1;
}

s32 fn_800BA96C(void) {
    void *fn_8000D354(void);
    M2C_UNK fn_800A87D4(s32);
    void *fn_801A46BC(void *);
    extern u8 lbl_80330EAC[];
    void *p;

    p = fn_801A46BC(lbl_80330EAC);
    if (p == NULL) {
        return 0;
    }
    fn_800A87D4(M2C_FIELD(p, s32 *, 0x188));
    return fn_8000D354() != NULL;
}

s32 fn_800BAAD4(void) {
    void *fn_8000D354(void);
    void *fn_8000BCA4(void *);
    s32 fn_800A876C(s32);
    M2C_UNK fn_8011D79C(s32);
    M2C_UNK fn_8011D908(s32, s32);
    extern u8 lbl_8026ECB8[];
    extern void *lbl_802EF4C8[];
    s32 obj;

    if (lbl_802EF4C8[0] == NULL) {
        return 0;
    }
    obj = fn_800A876C(M2C_FIELD(lbl_802EF4C8[0], s32 *, 0x188));
    if (fn_8000D354() != NULL) {
        if (fn_8000BCA4(lbl_8026ECB8 + 0xA50) != NULL) {
            fn_8011D79C(obj);
        } else {
            fn_8011D908(obj, fn_800C0658());
        }
    }
    return 0;
}

s32 fn_800BAB64(u8 arg0) {
    M2C_UNK fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_80330708[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit != NULL) {
        fn_8014CBD8(lbl_80330708, M2C_FIELD(unit, s8 *, 0x19E), M2C_FIELD(unit, s8 *, 0x19F));
    }
    return 1;
}

s32 fn_800BABFC(void) {
    u8 fn_800188A4(s32);
    M2C_UNK fn_800187F0(void);
    M2C_UNK fn_8000CAA0(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D19C[];
    extern u8 lbl_80320060[];
    extern s32 lbl_80367110;

    if (lbl_80367110 & 1) {
        fn_800187F0();
        return 0;
    }
    if (fn_800188A4(1) == 0) {
        return 0;
    }
    fn_8000CAA0(lbl_8028D19C, fn_800C0658());
    fn_80013864();
    fn_80013874(lbl_80320060);
    return 1;
}

void fn_800BAC70(s32 arg0) {
    u8 fn_800188A4(s32);
    M2C_UNK fn_800187F0(void);
    extern s32 lbl_80367110;

    if (fn_800188A4(1) == 0) {
        fn_8000C188(arg0);
    } else if (lbl_80367110 & 1) {
        fn_800187F0();
        fn_8000C188(arg0);
    }
}

s32 fn_800BACCC(void) {
    u8 fn_800188A4(s32);
    M2C_UNK fn_800187F0(void);
    M2C_UNK fn_8000CAA0(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D188[];
    extern u8 lbl_80320060[];
    extern s32 lbl_80367110;

    if (lbl_80367110 & 1) {
        fn_800187F0();
        return 0;
    }
    if (fn_800188A4(0) == 0) {
        return 0;
    }
    fn_8000CAA0(lbl_8028D188, fn_800C0658());
    fn_80013864();
    fn_80013874(lbl_80320060);
    return 1;
}

void fn_800BAD40(s32 arg0) {
    u8 fn_800188A4(s32);
    M2C_UNK fn_800187F0(void);
    extern s32 lbl_80367110;

    if (fn_800188A4(0) == 0) {
        fn_8000C188(arg0);
    } else if (lbl_80367110 & 1) {
        fn_800187F0();
        fn_8000C188(arg0);
    }
}

s32 fn_800BAD9C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8001885C(void);
    M2C_UNK fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_80330708[];
    extern s32 lbl_80367110;

    if (lbl_80367110 & 1) {
        fn_8014CBD8(lbl_80330708, arg0, arg1);
        fn_8001885C();
        return 0;
    }
    fn_8014CBD8(lbl_80330708, arg0, arg1);
    return 0;
}

s32 fn_800BAE4C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8001885C(void);
    M2C_UNK fn_8014CBD8(void *, f32, f32);
    extern void *lbl_80330708;
    extern f64 lbl_80369CF8;

    f64 temp_f0, temp_f2;
    
    temp_f0 = *(f64*)((u32)&lbl_80369CF8);
    temp_f2 = *(f64*)((u32)&lbl_80369CF8);
    fn_8014CBD8(&lbl_80330708, (f32) arg0, (f32) arg1);
    fn_8001885C();
    return 0;
}

s32 fn_800BAEAC(s32 arg0) {
    extern M2C_UNK lbl_8026ECB8;
    extern u16 lbl_80367A58;
    if (fn_8000BCA4(&lbl_8026ECB8 + 0xA50) == 0U) {
        return 0;
    }
    return (lbl_80367A58 & 0x10) == 0;
}

s32 fn_800BAEF8(void) {
    M2C_UNK fn_8011D650();
    fn_8011D650();
    return 1;
}

s32 fn_800BAF1C(s32 arg0) {
    void *fn_8000BCA4(void *);
    M2C_UNK fn_8011D79C(s32);
    M2C_UNK fn_8011D908(s32, s32);
    extern u8 lbl_8026ECB8[];

    if (fn_8000BCA4(lbl_8026ECB8 + 0xA50) != NULL) {
        fn_8011D79C(arg0);
        return 1;
    }
    fn_8011D908(arg0, fn_800C0658());
    return 1;
}

s32 fn_800BAF80(s32 arg0) {
    void *fn_8000BCA4(void *);
    M2C_UNK fn_8011D6F4(s32);
    M2C_UNK fn_8011DA48(s32, s32);
    extern u8 lbl_8026ECB8[];

    if (fn_8000BCA4(lbl_8026ECB8 + 0xA50) != NULL) {
        fn_8011D6F4(arg0);
        return 1;
    }
    fn_8011DA48(arg0, fn_800C0658());
    return 1;
}

s32 fn_800BAFE4(s32 arg0) {
    M2C_UNK fn_800BDBC8(void *, s32);
    extern u8 lbl_80330708[];

    fn_800BDBC8(lbl_80330708 + 0xB4, arg0);
    return 0;
}

s32 fn_800BB018(s32 arg0) {
    M2C_UNK fn_800BDC68(void *, s32);
    extern u8 lbl_80330708[];

    fn_800BDC68(lbl_80330708 + 0xB4, arg0);
    return 0;
}

u8 fn_800BB04C(s32 arg0) {
    u8 fn_800BDD08(void *, s32, M2C_UNK *);
    extern M2C_UNK lbl_80330708;
    return fn_800BDD08(&lbl_80330708 + 0xB4, arg0, &lbl_80330708);
}

s32 fn_800BB080(s32 arg0) {
    M2C_UNK fn_800BDDCC(void *, s32);
    extern u8 lbl_80330708[];

    fn_800BDDCC(lbl_80330708 + 0xB4, arg0);
    return 1;
}

s32 fn_800BB0B4(s32 arg0) {
    M2C_UNK fn_800BDE40(void *, s32);
    extern u8 lbl_80330708[];

    fn_800BDE40(lbl_80330708 + 0xB4, arg0);
    return 1;
}

s32 fn_800BB9E0(void) {
    return 1;
}

s32 fn_800BB9E8(u8 arg0) {
    extern u16 lbl_802B14E4[];
    s32 temp_r3;
    void *var_r4;

    if (arg0 != 0) {
        var_r4 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r4 = NULL;
    }
    if ((var_r4 == NULL) || (*(u32 *)((u8 *)var_r4 + 0x188) == 0U)) {
        return 0;
    }
    
    temp_r3 = *(s32 *)((u8 *)var_r4 + 0x254) & 0xFCFFFFFF;
    *(s32 *)((u8 *)var_r4 + 0x254) = temp_r3;
    return temp_r3;
}

s32 fn_800BBC40(void) {
    extern u16 lbl_80330EAC[];
    return (s32)lbl_80330EAC[0x656];
}

s32 fn_800BBC50(void) {
    extern s32 lbl_80367110;
    return lbl_80367110;
}

u8 fn_800BBCFC(s8 arg0, s8 arg1) {
    extern u16 lbl_802CA518[];
    s32 index = (arg1 << 6) + arg0;
    return lbl_802CA518[index + 0x200D];
}

u8 fn_800BBD20(s8 arg0, s8 arg1) {
    extern u16 lbl_802CA518[];
    s32 index = ((arg1 << 6) + arg0);
    return (u8)(lbl_802CA518[index] & 0xFF);
}

u8 fn_800BBD44(s8 arg0, s8 arg1) {
    extern u16 lbl_802CA518[];
    u16 *ptr = lbl_802CA518 + (arg1 << 1) + arg0;
    return ptr[0xD];
}

u16 fn_800BBD68(void) {
    void *fn_80019E04();
    void *temp_r3;

    temp_r3 = fn_80019E04();
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u16 *, 0xE);
}

s32 fn_800BC0A4(u8 arg0) {
    s32 fn_8001CA2C();
    u32 *fn_80037BD0();
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    if ((u32) *fn_80037BD0() == 0U) {
        return 0;
    }
    return fn_8001CA2C();
}

s32 fn_800BC6E8(u8 arg0, s32 arg2) {
    M2C_UNK fn_8001D780(s32);
    M2C_UNK fn_80037BD0();
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_80037BD0();
    fn_8001D780(arg2);
    return 1;
}

s32 fn_800BC760(u8 arg0, s8 arg1) {
    M2C_UNK fn_800949A4(s8);
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_800949A4(arg1);
    return 1;
}

s32 fn_800BC7C8(u8 arg0) {
    M2C_UNK fn_80094A54();
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_80094A54();
    return 1;
}

s32 fn_800BC82C(u8 arg0, s32 arg1) {
    s32 fn_80093010(void *, s32);
    extern M2C_UNK lbl_802B14E4;
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || ((u32) M2C_FIELD(var_r31, u32 *, 0x188) == 0U)) {
        return 0;
    }
    return fn_80093010(var_r31, fn_80019E04(arg1));
}

s16 fn_800BCADC(void) {
    extern u16 lbl_8031FFC0[];
    return (s16)(u16)lbl_8031FFC0[1];
}

extern u16 lbl_8031FFC0;
s16 fn_800BCAEC(void) {
    return (s16)*(u16*)((u8*)&lbl_8031FFC0);
}

u8 fn_800BCAFC(void) {
    extern u16 lbl_80330708[];
    return (*(u8*)((u8*)&lbl_80330708[0x10/2]));
}

s16 fn_800BCB0C(s32 arg0, s16 arg1) {
    extern u16 lbl_80330708[];
    lbl_80330708[arg0] = arg1;
    return arg1;
}

extern u16 lbl_80330708[700];
u16 fn_800BCB24(s32 arg0) {
    return lbl_80330708[arg0];
}

extern u16 lbl_80330708[];
s32 fn_800BCB70(void) {
    return *(s32*)(((char*)&lbl_80330708) + 0x18);
}

s32 fn_800BCB80(s32 arg0) {
    extern u16 lbl_80330708[700];
    fn_8014D268(lbl_80330708, arg0);
    return arg0;
}

s32 fn_800BCBBC(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    fn_8014D254(lbl_80330708, arg0, arg1, arg2, arg3, arg0);
    return 1;
}

void fn_800BCC14(s8 arg0) {
    *(u8*)((u8*)lbl_80330708 + 0x11) = arg0;
}

s16 fn_800BCC24(void) {
    return *(s16*)((char*)lbl_80330708 + 0x12);
}

void fn_800BCC34(s16 arg0) {
    *(u16*)((char*)lbl_80330708 + 0x12) = arg0;
}

s32 fn_800BCC44(void) {
    void *fn_80016B7C();
    M2C_UNK fn_80019E8C();
    void *temp_r3;

    fn_80019E8C();
    temp_r3 = fn_80016B7C();
    if (temp_r3 == NULL) {
        return 0;
    }
    return (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 8) == 0;
}

extern u8 lbl_802EF4C8[24];
u8 fn_800BCD24(void) {
    return lbl_802EF4C8[9];
}

u8 fn_800BCD58(void) {
    extern u8 lbl_802EF4C8[24];
    if (lbl_802EF4C8 != NULL) {
        return lbl_802EF4C8[0x198];
    }
    return 0U;
}

s32 fn_800BCD7C(u8 arg0) {
    extern u16 lbl_802B14E4[];
    void *var_r4;

    if (arg0 != 0) {
        var_r4 = &lbl_802B14E4[((s32)arg0 - 1) * 0x500];
    } else {
        var_r4 = NULL;
    }
    if ((var_r4 == NULL) || (M2C_FIELD(var_r4, void **, 0x188) == NULL)) {
        return 0;
    }
    switch (M2C_FIELD(M2C_FIELD(var_r4, void **, 0x190), u8 *, 8)) {
    case 0:
    case 5:
        M2C_FIELD(var_r4, s32 *, 0x1A0) |= 0x20000;
        break;
    }
    return 1;
}

s32 fn_800BCDF0(u8 arg0) {
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || M2C_FIELD(unit, void **, 0x188) == NULL) {
        return 0;
    }
    switch (M2C_FIELD(M2C_FIELD(unit, void **, 0x190), u8 *, 8)) {
    case 0:
    case 5:
        M2C_FIELD(unit, u32 *, 0x1A0) |= 0x10000;
        break;
    }
    return 1;
}

s32 fn_800BCF44(u8 arg0, s32 arg1) {
    M2C_UNK fn_8003868C(void *, s32);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    fn_8003868C(unit, arg1);
    return 0;
}

s32 fn_800BCF9C(u8 arg0, s32 arg1) {
    M2C_UNK fn_800381EC(void *, s32);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    fn_800381EC(unit, arg1);
    return 0;
}

s32 fn_800BD034(u8 arg0) {
    s8 fn_8003B2D0(void *);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    return fn_8003B2D0(unit);
}

s32 fn_800BD08C(u8 arg0) {
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    return M2C_FIELD(unit, s8 *, 0x19F);
}

extern u16 lbl_802B14E4[];
s32 fn_800BD0CC(u8 arg0) {
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if (var_r3 == NULL) {
        return 0;
    }
    return *(s8 *)((u8 *)var_r3 + 0x19E);
}

s32 fn_800BD334(u8 arg0, s32 arg1) {
    extern u16 lbl_802B14E4[];
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || (*(u32 *)((u8 *)var_r3 + 0x188) == 0U)) {
        return 0;
    }
    *(s32 *)((u8 *)var_r3 + 0x1A0) = *(s32 *)((u8 *)var_r3 + 0x1A0) | arg1;
    return *(s32 *)((u8 *)var_r3 + 0x1A0);
}

s32 fn_800BD388(u8 arg0, s32 arg1)
{
  u8 *new_var;
  void *var_r3;
  if (arg0 != 0)
  {
    var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
  }
  else
  {
    var_r3 = NULL;
  }
  if ((var_r3 == NULL) || ((*((u32 *) (((u8 *) var_r3) + 0x188))) == 0U))
  {
    return 0;
  }
  new_var = (u8 *) var_r3;
  *((s32 *) (new_var + 0x1A0)) = *((s32 *) (new_var + 0x1A0));
  *((s32 *) (new_var + 0x1A0)) = (*((s32 *) (new_var + 0x1A0))) & (~arg1);
  return *((s32 *) (new_var + 0x1A0));
}

s32 fn_800BD3DC(u8 arg0) {
    extern u16 lbl_802B14E4[];
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || (*(u32 *)((u8 *)var_r3 + 0x188) == 0U)) {
        return 0;
    }
    return *(s32 *)((u8 *)var_r3 + 0x1A0);
}

u8 fn_800BD424(u8 arg0) {
    extern u16 lbl_802B14E4[];
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || (*(u32 *)((u8 *)var_r3 + 0x188) == 0U)) {
        return 0U;
    }
    return *(u8 *)((u8 *)var_r3 + 0x1A8);
}

u8 fn_800BD470(u8 arg0) {
    extern u16 lbl_802B14E4[];
    void *temp_r3;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = (void *)((u8 *)lbl_802B14E4 + ((arg0 - 1) * 0x280));
    } else {
        var_r3 = NULL;
    }
    if (var_r3 == NULL) {
        return 0U;
    }
    temp_r3 = *(void **)((u8 *)var_r3 + 0x184);
    if (temp_r3 != NULL) {
        return *(u8 *)((u8 *)temp_r3 + 0x198);
    }
    return 0U;
}

u8 fn_800BD5AC(void) {
    void *fn_80016BDC();
    void *temp_r3;

    temp_r3 = fn_80016BDC();
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u8 *, 0x198);
}

void fn_800BD5E0(s32 arg0) {
    extern u16 lbl_802CA264[];
    s32 temp_r4;
    s32 temp_r3;
    
    temp_r4 = arg0 * 0xC;
    temp_r3 = temp_r4 << 2;
    fn_80015680(&lbl_802CA264[temp_r3], temp_r4);
}

extern u16 lbl_802CA264[50];
u8 fn_800BD610(s32 arg0) {
    u16 *temp_r3;

    temp_r3 = &lbl_802CA264[arg0 * 0x18];
    if (temp_r3 == NULL) {
        return 0U;
    }
    return temp_r3[0x198/2]; // offset 0x198 is 0x198/2 words into the array
}

void fn_800BDB54(s32 arg0, s32 arg1) {
    s32 temp_r5;
    u8 *ptr;
    
    temp_r5 = arg1 >> 3; // srawi r5, r4, 3 (sign-extend right shift by 3)
    ptr = (u8*)(arg0 + temp_r5);
    *ptr &= ~(1 << (arg1 & 0x1F));  // clear bit in byte at offset
}

void fn_800BDB78(s32 arg0, s32 arg1) {
    u8 *ptr;
    u32 temp;
    
    ptr = (u8 *)arg0 + (arg1 >> 3);
    temp = 1 << (arg1 & 7);
    *(volatile u8 *)ptr |= temp;
}

s32 fn_800BDB9C(s32 arg0, s32 arg1) {
    s32 shift = arg1 & 7;
    u8 *ptr = (u8*)arg0 + (arg1 >> 3);
    u8 byte = ptr[0x300];
    return (byte & (1 << shift)) != 0;
}

void fn_800BDDCC(s32 arg0, s32 arg1) {
    s32 loop_counter;
    u32* ptr_17C;

    for (loop_counter = 0x5F; loop_counter >= 0; loop_counter--) {
        ptr_17C = (u32*)(arg0 + 0x17C);
        if (*ptr_17C == 0) {
            *(u32*)(arg0 + (loop_counter * 4)) = arg1;
            *(u32*)(arg0 + (loop_counter * 4) + 0x180) = fn_8000D598(arg1);
            return;
        }
        arg0 -= 4;
    }
}

s16 fn_800BE798(s32 arg0) {
    void *temp_r3;
    s32 temp_r30;
    s32 temp_r31;
    
    temp_r3 = (void *)fn_80013B60(NULL);
    temp_r31 = 0;
loop_4:
    if (temp_r3 != NULL) {
        if (*(u8 *)((char *)temp_r3 + 0xC) == 0xE) {
            if (temp_r31 == arg0) {
                return *(s16 *)((char *)temp_r3 + 0x18);
            }
        }
        temp_r3 = (void *)fn_80013B60(temp_r3);
        temp_r31 += 1;
        goto loop_4;
    }
    return 0;
}

s32 fn_800BF694(void) {
    return 1;
}

void fn_800C0624(void *arg0) {
    s32 fn_80013B60(M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x30) = fn_80013B60(0);
}

void fn_800C0980(void) {
    M2C_UNK fn_80018AE4();
    fn_80018AE4();
}

void fn_800C09E4(s32 arg0) {
    s32 fn_800142B8();
    fn_80013880();
    if (fn_800142B8() != 6) {
        fn_8000C188(arg0);
    }
}

extern u16 lbl_80367110;
s32 fn_800C0ACC(void) {
    u16 temp = lbl_80367110;
    temp &= 0xFFFFFFFB;
    lbl_80367110 = temp;
    return 1;
}

void fn_800C0AE0(void)
{
    lbl_80367110 = 1;
}

void fn_800C0C1C(void) {
    u16 fn_80089634();
    M2C_UNK fn_80089650(M2C_UNK, M2C_UNK);
    if (fn_80089634() != 6) {
        fn_80089650(3, 0x85);
    }
}

void fn_800C0CA4(void *arg0) {
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x50));
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}

void fn_800C10B4(void) {
    M2C_UNK fn_80016180();
    fn_80016180();
}

void fn_800C11F4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = -1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0x10;
}

s32 fn_800C273C(void *arg0, u16 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x24) + arg1;
}

void fn_800C28CC(void) {
    M2C_UNK fn_80013880();
    fn_80013880();
}

void fn_800C28EC(void) {
    M2C_UNK fn_800138F4();
    M2C_UNK fn_80013A90(void *);
    M2C_UNK fn_80013E24(void *);
    M2C_UNK fn_800AA1CC();
    extern u8 lbl_80270000[];
    fn_800AA1CC();
    fn_80013E24(lbl_80270000 + 0x26);
    fn_80013A90(lbl_80270000 + 0x37);
    fn_800138F4();
}

void fn_800C2930(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, s32, s32);
    M2C_UNK fn_801A7CDC(void *);
    extern u8 lbl_80330EAC[];
    fn_801A7CDC(lbl_80330EAC);
    fn_8017A810(arg1, 0x480, arg0);
}

void fn_800C2980(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, s32, s32);
    M2C_UNK fn_801A7CDC(void *);
    extern u8 lbl_80330EAC[];
    fn_801A7CDC(lbl_80330EAC);
    fn_8017A430(arg1, 0x480, arg0);
}

s32 fn_800C29D0(s32 arg0, s32 arg1) {
    return (s32)&((u8 (*)[0x18])arg0)[arg1 - 1][0x14];
}

s8 fn_800C2ACC(Unk800C2ACC *arg0, s32 arg1) {
    return (s8)arg0[arg1 - 1].unk13;
}

s8 fn_800C2BA8(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)arg0;
    return ptr[(arg1 * 0x18) - 6];
}

s8 fn_800C2C84(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)arg0;
    return ptr[(arg1 * 0x18) - 7];
}

s8 fn_800C2D60(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)arg0;
    return ptr[(arg1 * 0x18) - 8];
}

s32 fn_800C30CC(s32 arg0, s32 arg1) {
    return arg0 + ((arg1 - 1) * 0x18);
}

void fn_800C3364(s32 arg0, s32 arg1) {
    s32 r31 = arg0;
    s32 r30 = 0;
    
    do {
        fn_8001C15C(r31, arg1);
        r30 += 1;
        r31 += 8;
    } while (r30 < 0xC8);
}

void fn_800C33C0(s32 arg0, s32 arg1) {
    s32 r31 = arg0;
    s32 r30 = 0;
    
    do {
        fn_8001C21C(r31, arg1);
        r30 += 1;
        r31 += 8;
    } while (r30 < 0xC8);
}

void fn_800C3864(s32 arg0, s32 arg1) {
    M2C_UNK fn_8001D580(s32);
    fn_8001D580(arg0 + (arg1 * 8));
}
#include "common.h"
extern u8 lbl_8032FF08[];
extern void fn_80148888(u32*, s16);
extern void fn_80146B00(void);
#include "global.h"
extern u16 lbl_80317338[];

extern u16 lbl_80317338[4976];

u16 fn_800AF704(s32 arg0) {
    return lbl_80317338[0x13C * arg0 + 0xF8 / 2];
}

void fn_800B0AC8(void) {
    fn_800B080C(0);
}

extern u16 lbl_80317338[];
extern u16 lbl_80330EAC;
extern u16 lbl_80317338[4976];
extern u16 lbl_80317338[];
typedef struct {
    u32 field_0x2F0;
    u32 field_0x2F4;
} SomeStruct;
extern u16 lbl_8032BB58[258];
extern u16 lbl_80367110;
