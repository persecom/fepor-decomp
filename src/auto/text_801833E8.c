/* Functions from 0x801833E8 to 0x801A2AB4, found by decomp-toolkit. */
#include "common.h"
#include "global.h"


static inline s32 CountUnitItemReferences(u8 *unit,u8 *target) {
void **fn_80037BBC(void *,s32);
s32 count=0; u8 *entry; void *item; s32 i;
if((*(u64 *)(target+0x38)&5ULL)!=0) {
for(i=count;i<4;i++) { entry=(u8 *)fn_80037BBC(unit,i);item=*(void **)entry; if(!item) break;
if(!(entry[5]&63) && target==item) count++;
}
} else {
for(i=0,entry=unit+0x1EC;i<4;i++,entry+=8) { item=*(void **)entry;if(!item) break;
if(!(entry[5]&63) && target==item) count++;
}
}
return count;
}

typedef struct PathHeightPoint { s32 index; f32 height; f32 rawHeight; } PathHeightPoint;
extern u16 gUnkGlobalVar_803306E0[];

#pragma optimization_level 4
#pragma inline auto

extern u16 lbl_8036719C;
extern u16 lbl_8036719E;
extern u32 lbl_803671A0;
extern u32 lbl_803671A8;

extern f32 lbl_8036AE88;
extern f32 lbl_8036AE8C;
extern f64 lbl_8036AE90;
extern f64 lbl_8036AE98;

typedef struct {
    void *unk0;
    void *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
    void *unk14;
    void *unk18;
    u32 unk1C;
    void *unk20;
    void *unk24;
    void *unk28;
    void *unk2C;
    void *unk30;
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 unk37;
    s16 unk38;
    s16 unk3A;
    s16 unk3C;
    s16 unk3E;
    u8 unk40;
    u8 unk41;
    u8 unk42;
    u8 unk43;
    s32 unk44;
    s32 unk48;
    f32 unk4C;
    f32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    u8 unk64;
} StructEF0C;


extern u8 lbl_8036728B;
extern u16 lbl_80295C60[];
extern f32 lbl_8036AF74;
extern f64 lbl_8036AF78;

#pragma cplusplus on
extern "C" void fn_8017A000(void *);
extern "C" void fn_80193950(void *);
extern "C" u8 lbl_8029656C[];
extern "C" u16 lbl_80291AC8[];
#pragma cplusplus reset

f32 fn_801833E8(void) {
    extern f32 lbl_8036ACC0;
    return lbl_8036ACC0;
}

s32 fn_801833F0(void) {
    return 0x1B0;
}

s32 fn_801833F8(void) {
    return 0x90;
}

void fn_80183434(void *arg0, void *arg1) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    u32 fn_800102BC(M2C_UNK, f32, f32);
    M2C_UNK fn_8008AB7C(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8008C1D8(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK);
    extern f32 lbl_8036ACC4;
    extern f32 lbl_8036ACC8;
    extern f32 lbl_8036ACCC;
    extern f32 lbl_8036ACD0;
    M2C_UNK var_r28;
    f32 temp_f2;
    s16 temp_r31;
    s16 temp_r3_2;
    s32 temp_r29;
    s32 temp_r30;
    s8 temp_r28;
    u32 temp_r3;

    temp_r28 = (s8) M2C_FIELD(arg1, u8 *, 0x60);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x7C)();
    fn_8008C1D8(0, 0, 0x90, (temp_r28 << 5) + 0x20, 3);
    if ((s16) M2C_FIELD(arg1, s16 *, 0x3A) >= 5) {
        fn_8000A258();
        fn_80009C0C(lbl_8036ACC4);
        fn_8000A248();
        var_r28 = 0;
        if (((u8) M2C_FIELD(arg1, u8 *, 0x2D) == 0) && ((u8) M2C_FIELD(arg1, u8 *, 0x2E) == 0)) {
            var_r28 = 1;
        }
        temp_f2 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0);
        temp_r29 = (s32) (lbl_8036ACCC * temp_f2);
        temp_r3 = fn_800102BC(-1, lbl_8036ACC8, temp_f2);
        temp_r31 = M2C_FIELD(arg1, s16 *, 0x3A);
        temp_r30 = (s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1;
        temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0);
        fn_8008AB7C((s32) (((u32) temp_r3_2 >> 0x1FU) + temp_r3_2) >> 1, temp_r31 + temp_r30, temp_r29, 0x18, 0x19, 0x4B, var_r28);
        fn_8000A258();
        fn_80009C0C(lbl_8036ACD0);
        fn_8000A248();
    }
}

void fn_80183584(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x129]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x12F]);
}

void fn_801835D0(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x135]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x13B]);
}

s32 fn_8018361C(void) {
    return 4;
}

#pragma cplusplus on
extern "C" s32 fn_801836D4(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1(u8 *) = 0;
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
        virtual s32 v19() = 0;
    };
    extern u8 lbl_802EF4C8[];
    void fn_80091A1C(void);

    lbl_802EF4C8[0x14] = (s8) ((Obj *)arg0)->v19();
    ((Obj *)arg0)->v1(lbl_802EF4C8);
    fn_80091A1C();
    return 6;
}
#pragma cplusplus reset
void fn_80183734(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x155]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x15B]);
}

void fn_80183780(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x161]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x167]);
}

s32 fn_801837CC(void) {
    return 3;
}

void fn_801837D4(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x16D]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x173]);
}

void fn_80183820(void) {
    extern u8 lbl_803681F0;
    extern u8 lbl_80278BB8[];

    if (lbl_803681F0 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8[0x179]);
        return;
    }
    fn_8000E0E4(&lbl_80278BB8[0x17F]);
}

s32 fn_8018386C(void) {
    return 0;
}

void fn_80183874(void) {
    extern u16 lbl_80278BB8[];
    fn_8000E0E4((u8 *)lbl_80278BB8 + 0x185);
}

void fn_801838A0(void) {
    extern u8 lbl_80278BB8[];
    fn_8000E0E4(&lbl_80278BB8[0x18B]);
}

s32 fn_801838CC(void) {
    return 1;
}

s32 fn_801838D4(void) {
    extern u8 lbl_803681F0;
    s32 val = lbl_803681F0;
    if (val < 0x33) {
        return 0;
    }
    return 3;
}

void fn_801838F4(void) {
    extern u8 lbl_80278BB8[];
    fn_8000E0E4(&lbl_80278BB8[0x191]);
}

void fn_80183920(void) {
    extern u8 lbl_80278BB8[];
    fn_8000E0E4(&lbl_80278BB8[0x197]);
}

s32 fn_8018394C(void) {
    return 2;
}

s32 fn_80183954(void) {
    extern u8 lbl_803681F0;
    return 3 & ~((s32) ~((lbl_803681F0 - 0x32) | (0x32 - lbl_803681F0)) >> 0x1F);
}

s32 fn_80183974(void) {
    u32 fn_8000C0C0(M2C_UNK *);
    extern M2C_UNK lbl_80295A00;
    if (fn_8000C0C0(&lbl_80295A00) != 0U) {
        return 1;
    }
    if (fn_8000C0C0(&lbl_80295A00 + 0x78) != 0U) {
        return 1;
    }
    if (fn_8000C0C0(&lbl_80295A00 + 0x98) != 0U) {
        return 1;
    }
    if (fn_8000C0C0(&lbl_80295A00 + 0xC0) != 0U) {
        return 1;
    }
    if (fn_8000C0C0(&lbl_80295A00 + 0x110) != 0U) {
        return 1;
    }
    if (fn_8000C0C0(&lbl_80295A00 + 0xE8) != 0U) {
        return 1;
    }
    if (fn_8000C0C0(&lbl_80295A00 + 0x20) != 0U) {
        return 1;
    }
    return fn_8000C0C0(&lbl_80295A00 + 0x3F0) != 0U;
}

extern u16 lbl_80295A78[36];
s32 fn_80183A5C(void) {
    return fn_8000C0C0(&lbl_80295A78) != 0;
}

void fn_80183A90(s32 arg0) {
    void fn_8004FE98(s32, s32);
    fn_8004FE98(arg0, 0);
}

void fn_80183AB4(s32 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *fn_8000CA64(void *, s32, s32);
    extern u8 lbl_80295D1C[];
    void *temp_r3;

    temp_r3 = fn_8000CA64(lbl_80295D1C, arg4, arg2);
    *(s16 *)((u8 *)temp_r3 + 0x38) = arg1;
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x3C) = arg2;
    *(s32 *)((u8 *)temp_r3 + 0x40) = arg3;
}

void fn_80183B24(s32 arg0, s32 arg1) {
    extern u8 lbl_80295DF0[];
    void *fn_8000CA64(u8 *, s32);
    s32 *obj;
    obj = (s32 *)fn_8000CA64(lbl_80295DF0, arg1);
    obj[0x30 / 4] = arg0;
}

void *fn_80183B5C(void *arg0, s32 unused) {
    void *fn_8000CA64(void *);
    u8 fn_800AA188(void);
    extern u8 lbl_80295D8C[];
    void *temp_r31;

    (void)unused;
    temp_r31 = fn_8000CA64(lbl_80295D8C);
    *(void **)((u8 *)temp_r31 + 0x30) = arg0;
    *((u8 *)temp_r31 + 0x3D) = 0;
    *((u8 *)temp_r31 + 0x3C) = 1;
    *((u8 *)temp_r31 + 0x3E) = 0;
    if (*(s32 *)((u8 *)arg0 + 0x1A0) & 0x010000DC) {
        *((u8 *)temp_r31 + 0x3C) = 0;
    }
    if (fn_800AA188() == 0) {
        *((u8 *)temp_r31 + 0x3C) = 0;
    }
    return temp_r31;
}

void *fn_80183BE4(void *arg0, void *arg1) {
    void *fn_8000CA64(void *, void *);
    u8 fn_800AA188(void);
    extern u16 lbl_80295D8C[];

    void *temp_r31;

    temp_r31 = fn_8000CA64(lbl_80295D8C, arg1);
    *(void **)((u8 *)temp_r31 + 0x30) = arg0;
    *((u8 *)temp_r31 + 0x3D) = 0;
    *((u8 *)temp_r31 + 0x3C) = 1;
    *((u8 *)temp_r31 + 0x3E) = 1;
    if (*(s32 *)((u8 *)arg0 + 0x1A0) & 0x010000DC) {
        *((u8 *)temp_r31 + 0x3C) = 0;
    }
    if (fn_800AA188() == 0) {
        *((u8 *)temp_r31 + 0x3C) = 0;
    }
    return temp_r31;
}

void fn_80183D7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *fn_8000CA64(void *, s32, s32);
    extern u8 lbl_80295CE4[];
    void *temp_r3;

    temp_r3 = fn_8000CA64(lbl_80295CE4, arg4, arg2);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg1;
    *(s32 *)((u8 *)temp_r3 + 0x44) = arg2;
    *(s32 *)((u8 *)temp_r3 + 0x48) = arg3;
}

void fn_80183DEC(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CA64(void *, s32);
    extern u8 lbl_80295CAC[];
    void *proc;

    proc = fn_8000CA64(lbl_80295CAC, arg2);
    M2C_FIELD(proc, s32 *, 0x30) = arg0;
    M2C_FIELD(proc, s32 *, 0x34) = arg1;
}

void fn_80183E3C(s32 arg0, s32 arg1, s32 arg2, s8 arg3, s8 arg4, s32 arg5) {
    void *fn_8000CA64(void *, s32, void *);
    
    void *temp_r3;
    
    temp_r3 = fn_8000CA64(lbl_80295C60, arg5, lbl_80295C60);
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, s32 *, 0x34) = 0;
    M2C_FIELD(temp_r3, s8 *, 0x3A) = arg3;
    M2C_FIELD(temp_r3, s8 *, 0x3B) = arg4;
    M2C_FIELD(temp_r3, s32 *, 0x40) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x44) = arg2;
    M2C_FIELD(temp_r3, s8 *, 0x48) = 0;
    M2C_FIELD(temp_r3, s8 *, 0x49) = 0;
}

void fn_80183EAC(s32 arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4) {
    void *fn_8000CA64(void *, s32);
    extern u16 lbl_80295C60[];
    void *temp_r3;

    temp_r3 = fn_8000CA64(lbl_80295C60, arg4);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg1;
    *((u8 *)temp_r3 + 0x3A) = (u8)arg2;
    *((u8 *)temp_r3 + 0x3B) = (u8)arg3;
    *(s32 *)((u8 *)temp_r3 + 0x40) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x44) = 0;
    *((u8 *)temp_r3 + 0x48) = 0;
    *((u8 *)temp_r3 + 0x49) = 0;
}

void *fn_80183F30(void *arg0, void *arg1) {
    void fn_8000A388(void *, void *, void *);
    void fn_80185060(void *, void *);
    void *fn_8000CAA0(void *, void *);
    void *fn_800C45B8(s32, void *, s32);
    void fn_80050BCC(void *, s32);
    void fn_8018851C(void *);
    u8 *fn_8001FC34(void *);
    extern u8 lbl_80295BC0[];
    extern u8 lbl_80278E24[];
    extern u8 lbl_802CA518[];
    void *search[14];
    u8 *obj;
    s32 i;
    s32 count;
    s32 temp;
    u8 flags;
    u8 *str;

    str = fn_8001FC34(lbl_802CA518);
    search[12] = arg0;
    search[13] = 0;
    fn_8000A388(lbl_80295BC0, fn_80185060, search);
    obj = search[13];
    if (obj == 0) {
        obj = fn_8000CAA0(lbl_80295BC0, arg1);
        *(void **)(obj + 0x30) = arg0;
        *(u16 *)(obj + 0x52) = 0x40;
        *(void **)(obj + 0x54) = fn_800C45B8(-128, (void *)((u32)lbl_80278E24 + 0x1A9), 0);
        obj[0x59] = 0;
        obj[0x5A] = 16;
        *(s8 *)(obj + 0x6A) = -1;
        *(void **)(obj + 0x6C) = fn_800C45B8(-1536, (char *)((u8 *)lbl_80278E24 + 0x1A9), 0);
        if (*(u16 *)(obj + 0x52) & 16) {
            fn_80050BCC(arg0, 0);
        }
        if ((*(u8 **)((u8 *)arg0 + 0x18C))[0x42] == 9) {
            *(u16 *)(obj + 0x52) |= 0x8000;
        }
        temp = (s32)*(f32 *)((u8 *)arg0 + 4);
        obj[0x40] = temp;
        obj[0x42] = temp;
        temp = (s32)*(f32 *)((u8 *)arg0 + 8);
        obj[0x41] = temp;
        obj[0x43] = temp;
    }
    if (str == 0) {
        count = 0;
    } else {
        u8 *q;
        count = 0;
        q = str;
        for (;;) {
            if (*q == 16) {
                break;
            }
            count++;
            q++;
        }
    }
    for (i = 0; i < count; i++) {
        (*(u8 **)(obj + 0x54))[i + obj[0x59]] = *str;
        obj[0x5A] = *str++;
    }
    (*(u8 **)(obj + 0x54))[i + obj[0x59]] = 16;
    flags = *(u16 *)(obj + 0x52) & 15;
    if (flags) {
        obj[0x5A] = flags;
    }
    obj[0x59] += count;
    fn_8018851C(obj);
    return obj;
}

#pragma opt_common_subs off
#pragma use_lmw_stmw on
void *fn_80184264(void *arg0,u8 *arg1,u16 arg2,void *arg3) {
void fn_8000A388(void *,void *,void *); void fn_80185060(void *,void *);
void *fn_8000CAA0(void *,void *); void *fn_800C45B8(s32,void *,s32);
void fn_80050BCC(void *,s32); void fn_8018851C(void *);
extern u8 lbl_80295BC0[],lbl_80278E24[];
void *search[14];
u8 *obj; s32 i; u8 *p; s32 count; s32 temp; u8 flags;
search[12]=arg0; search[13]=0;
fn_8000A388(lbl_80295BC0,fn_80185060,search);
obj=search[13];
if(obj==0) {
obj=fn_8000CAA0(lbl_80295BC0,arg3);
*(void **)(obj+0x30)=arg0;
*(u16 *)(obj+0x52)=arg2;
*(void **)(obj+0x54)=fn_800C45B8(-128,lbl_80278E24+0x1A9,0);
obj[0x59]=0;obj[0x5A]=16;*(s8 *)(obj+0x6A)=-1;
*(void **)(obj+0x6C)=fn_800C45B8(-1536,lbl_80278E24+0x1A9,0);
if(*(u16 *)(obj+0x52)&16) fn_80050BCC(arg0,0);
if((*(u8 **)((u8 *)arg0+0x18C))[0x42]==9) *(u16 *)(obj+0x52)|=0x8000;
temp=(s32)*(f32 *)((u8 *)arg0+4); obj[0x40]=temp;obj[0x42]=temp;
temp=(s32)*(f32 *)((u8 *)arg0+8); obj[0x41]=temp;obj[0x43]=temp;
}
p=arg1;
if(arg1==0) count=0;
else {u8 *q;count=0;q=arg1;for(;;) {if(*q==16) break; count++;q++;}}
for(i=0;i<count;i++) {
(*(u8 **)(obj+0x54))[i+obj[0x59]]=*p;obj[0x5A]=*p++;
}
(*(u8 **)(obj+0x54))[i+obj[0x59]]=16;
flags=*(u16 *)(obj+0x52)&15;
if(flags) obj[0x5A]=flags;
obj[0x59]+=count;fn_8018851C(obj);return obj;
}
#pragma opt_common_subs reset
void fn_80184578(s32 arg0, u8 *arg1, u32 arg2) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CAF0(void *, u32);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295B64[];
    u8 sp8[0x34];
    u32 var_r31;
    void *temp_r3;
    u8 b;
    u8 a;
    u8 c;
    u8 d;

    var_r31 = arg2;
    *(s32 *)(sp8 + 0x30) = arg0;
    fn_8000A388(lbl_80295B64, fn_80185078, sp8);
    if (var_r31 == 0U) {
        var_r31 = 3U;
    }
    temp_r3 = fn_8000CAF0(lbl_80295B64, var_r31);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    a = arg1[0];
    b = arg1[1];
    ((u8 *)temp_r3)[0x34] = a;
    c = arg1[2];
    ((u8 *)temp_r3)[0x35] = b;
    d = arg1[3];
    ((u8 *)temp_r3)[0x36] = c;
    ((u8 *)temp_r3)[0x37] = d;
}

void fn_80184618(s32 arg0, u32 arg1) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CAF0(void *, u32);
    extern u16 lbl_80295A40[];
    extern u16 fn_80185078;
    
    s32 sp38;
    u16 sp8;
    u32 var_r31;

    var_r31 = arg1;
    sp38 = arg0;
    fn_8000A388(&lbl_80295A40, &fn_80185078, &sp8);
    if (var_r31 == 0U) {
        var_r31 = 3U;
    }
    M2C_FIELD(fn_8000CAF0(&lbl_80295A40, var_r31), s32 *, 0x30) = arg0;
}

void fn_80184688(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CAF0(void *, u32);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295AC0[];
    u8 sp8[0x34];
    u32 var_r31;
    void *temp_r3;

    var_r31 = arg3;
    M2C_FIELD(sp8, void **, 0x30) = (void *)arg0;
    fn_8000A388(lbl_80295AC0, fn_80185078, sp8);
    if (var_r31 == 0U) {
        var_r31 = 3U;
    }
    temp_r3 = fn_8000CAF0(lbl_80295AC0, var_r31);
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, s32 *, 0x38) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x3C) = arg2;
}

extern u16 *gUnitArray;
s32 fn_80184750(s32 arg0, s32 arg1, struct Unit* unit, s32 arg3, s32 arg4, s32 arg5) {
    // Simple case first - just return early if the condition fails
    u32 val = (arg0 & 0xFF000000) >> 24;
    if (val > 0x0A) {
        return 0;
    }
    
    // For debug, assume a default for the function's behavior.
    return 0;
}

void *fn_801848D8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, s32);
    f32 fn_8004BDA8(f32, f32, f32);
    void fn_80185078(void *, void *);
    extern u16 lbl_80295A78[36];
    extern f32 lbl_8036ACD8;
    u8 sp8[0x34];
    f32 temp_f31;
    void *temp_r3;
    f32 a;
    f32 b;

    a = lbl_8036ACD8 + (f32)arg1;
    b = lbl_8036ACD8 + (f32)arg2;
    temp_f31 = fn_8004BDA8(a, b, lbl_8036ACD8);
    M2C_FIELD(sp8, void **, 0x30) = arg0;
    fn_8000A388(&lbl_80295A78, fn_80185078, sp8);
    if (temp_f31 == ((f32)M2C_FIELD(arg0, s16 *, 0x15C) / 50.0f)) {
        return NULL;
    }
    if (arg3 <= 0) {
        M2C_FIELD(arg0, s16 *, 0x15C) = (s16)(50.0f * temp_f31);
        return NULL;
    }
    temp_r3 = fn_8000CA64(&lbl_80295A78, arg4);
    M2C_FIELD(temp_r3, void **, 0x30) = arg0;
    M2C_FIELD(temp_r3, f32 *, 0x34) = temp_f31;
    M2C_FIELD(temp_r3, s32 *, 0x38) = arg3;
    return temp_r3;
}

void *fn_80184A00(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, s32);
    f32 fn_8004BE18(void);
    void fn_80185078(void *, void *);
    extern u16 lbl_80295A78[36];
    u8 sp8[0x34];
    f32 temp_f31;
    void *temp_r3;

    if (arg1 == 0U) {
        return NULL;
    }
    temp_f31 = fn_8004BE18();
    M2C_FIELD(sp8, void **, 0x30) = arg0;
    fn_8000A388(&lbl_80295A78, fn_80185078, sp8);
    if (temp_f31 == ((f32)M2C_FIELD(arg0, s16 *, 0x15C) / 50.0f)) {
        return NULL;
    }
    if (arg2 <= 0) {
        M2C_FIELD(arg0, s16 *, 0x15C) = (s16)(50.0f * temp_f31);
        return NULL;
    }
    temp_r3 = fn_8000CA64(&lbl_80295A78, arg3);
    M2C_FIELD(temp_r3, void **, 0x30) = arg0;
    M2C_FIELD(temp_r3, f32 *, 0x34) = temp_f31;
    M2C_FIELD(temp_r3, s32 *, 0x38) = arg2;
    return temp_r3;
}

void *fn_80184AFC(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, s32);
    void fn_80185078(void *, void *);
    extern u16 lbl_80295A78[36];
    u8 sp8[0x34];
    void *temp_r3;

    M2C_FIELD(sp8, void **, 0x30) = arg0;
    fn_8000A388(&lbl_80295A78, fn_80185078, sp8);
    if (farg0 == ((f32)M2C_FIELD(arg0, s16 *, 0x15C) / 50.0f)) {
        return NULL;
    }
    if (arg1 <= 0) {
        M2C_FIELD(arg0, s16 *, 0x15C) = (s16)(50.0f * farg0);
        return NULL;
    }
    temp_r3 = fn_8000CA64(&lbl_80295A78, arg2);
    M2C_FIELD(temp_r3, void **, 0x30) = arg0;
    M2C_FIELD(temp_r3, f32 *, 0x34) = farg0;
    M2C_FIELD(temp_r3, s32 *, 0x38) = arg1;
    return temp_r3;
}

void fn_80184BE8(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CAF0(void *, u32);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295A20[];
    u8 sp8[0x34];
    u32 var_r31;
    void *temp_r3;

    var_r31 = arg3;
    M2C_FIELD(sp8, void **, 0x30) = (void *)arg0;
    fn_8000A388(lbl_80295A20, fn_80185078, sp8);
    if (var_r31 == 0U) {
        var_r31 = 3U;
    }
    temp_r3 = fn_8000CAF0(lbl_80295A20, var_r31);
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, s32 *, 0x38) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x3C) = arg2;
}

void fn_80185060(void *arg0, void *arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == (u32) M2C_FIELD(arg1, u32 *, 0x30)) {
        M2C_FIELD(arg1, void **, 0x34) = arg0;
    }
}

#pragma inline
void fn_80185078(void *arg0, void *arg1) {
    M2C_UNK fn_8000C60C(void *);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == (u32) M2C_FIELD(arg1, u32 *, 0x30)) {
        fn_8000C60C(arg0);
    }
}
void fn_801850A8(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, void *);
    s32 fn_80052B30(s32);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295AE8[];
    u8 spC[0x34];
    u32 sp8;
    void *temp_r30;
    void *temp_r3;

    temp_r30 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(spC, void **, 0x30) = temp_r30;
    fn_8000A388(lbl_80295AE8, fn_80185078, spC);
    temp_r3 = fn_8000CA64(lbl_80295AE8, arg0);
    M2C_FIELD(temp_r3, void **, 0x30) = temp_r30;
    M2C_FIELD(temp_r3, s32 *, 0x3C) = 0x10;
    sp8 = fn_80052B30(0xC);
    M2C_FIELD(temp_r3, u8 *, 0x38) = ((u8 *)&sp8)[0];
    M2C_FIELD(temp_r3, u8 *, 0x39) = ((u8 *)&sp8)[1];
    M2C_FIELD(temp_r3, u8 *, 0x3A) = ((u8 *)&sp8)[2];
    M2C_FIELD(temp_r3, u8 *, 0x3B) = ((u8 *)&sp8)[3];
    M2C_FIELD(temp_r3, u8 *, 0x34) = ((u8 *)temp_r30)[0x24];
    M2C_FIELD(temp_r3, u8 *, 0x35) = ((u8 *)temp_r30)[0x25];
    M2C_FIELD(temp_r3, u8 *, 0x36) = ((u8 *)temp_r30)[0x26];
    M2C_FIELD(temp_r3, u8 *, 0x37) = ((u8 *)temp_r30)[0x27];
}

void fn_80185244(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x34) > (s32) M2C_FIELD(arg0, s32 *, 0x3C)) {
        fn_8000C188();
    }
}

#pragma opt_strength_reduction off
void fn_80185280(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void fn_8000C070(void *, s32);
    void *fn_8000CA64(void *, s32);
    u8 fn_8004C0F0(void *);
    void fn_8004FE90(void *, u8);
    void fn_8004FE98(void *, s32);
    void fn_800506E0(void *, s32);
    void *fn_800508C4(void *);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005FC74(void *, void *, s32);
    void fn_8005FEE8(void *, f32);
    s32 fn_80060440(void *);
    void *fn_80060664(void *);
    void *fn_800639B4(void);
    u8 fn_80105BC0(void *, s32);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295A00[];
    extern u8 lbl_80295A20[];
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF0;
    extern f32 lbl_8036ACF4;
    u8 sp40[0x34];
    u8 sp8[0x38];
    void *obj;
    s32 count;
    void *tmp;
    void *end;
    u8 lvl;

    count = 0x10;
    obj = *(void **)((u8 *)arg0 + 0x30);
    if (fn_8004C0F0(obj) != 0) {
        *(void **)(sp40 + 0x30) = obj;
        fn_8000A388(lbl_80295A00, fn_80185078, sp40);
        *(void **)(sp8 + 0x30) = obj;
        fn_8000A388(lbl_80295A20, fn_80185078, sp8);
        lvl = *(u8 *)((u8 *)fn_800508C4(obj) + 9);
        if ((s32)lvl > 0x14) {
            if ((s32)lvl > 0x28) {
                count <<= 1;
            }
            if ((s32)lvl <= 0x28) {
                count = (s32)((f32)count + fn_80059F64(lbl_8036ACEC, lbl_8036ACF4, lbl_8036ACF0, (f32)((s32)lvl - 0x14)));
            }
        }
        if ((count == 0) || (fn_80060440((u8 *)obj + 0x1C) >= 4)) {
            fn_8004FE98(obj, 0xB);
        } else {
            tmp = fn_8000CA64(lbl_80295A00, 0);
            *(void **)((u8 *)tmp + 0x30) = obj;
            *(s32 *)((u8 *)tmp + 0x34) = (s32)obj + 0x1C;
            *(s32 *)((u8 *)tmp + 0x38) = 0xB;
            *(s32 *)((u8 *)tmp + 0x3C) = count;
            *(s32 *)((u8 *)tmp + 0x40) = 0;
            fn_800506E0(*(void **)((u8 *)tmp + 0x30), 0xB);
            fn_8005FC74(*(void **)((u8 *)tmp + 0x34), fn_800639B4(), 1);
            fn_8005FEE8(*(void **)((u8 *)tmp + 0x34), lbl_8036ACEC);
            fn_8004FE90(*(void **)((u8 *)tmp + 0x30), (u8)*(s32 *)((u8 *)tmp + 0x38));
        }
    }
    if (fn_80105BC0((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x1BC, 0x5C) != 0) {
        fn_8000C070(arg0, 0xA);
        return;
    }
    end = fn_80060664((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x1C);
    *(s32 *)((u8 *)arg0 + 0x3C) = (*(s32 *)((u8 *)end + 0x18) - *(s32 *)((u8 *)end + 0x14)) - 8;
    if (*(s32 *)((u8 *)arg0 + 0x3C) < 0) {
        *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    }
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
}
#pragma opt_strength_reduction on
void fn_8018548C(void *arg0) {
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 0xB);
}

void fn_801854B4(void *arg0) {
    M2C_UNK fn_8004B1B4(s32);
    fn_8004B1B4(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_801854D8(void *arg0) {
    extern f32 lbl_8036ACF8;
    void *obj;

    obj = *(void **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)obj + 0x78) = lbl_8036ACF8;
    if (*(u8 *)((u8 *)arg0 + 0x3D) == 0) {
        obj = *(void **)((u8 *)arg0 + 0x30);
        *(u8 *)((u8 *)obj + 3) = *(u8 *)((u8 *)obj + 3) | 4;
        fn_8004E9D8(*(void **)((u8 *)arg0 + 0x30), 0);
        obj = *(void **)((u8 *)arg0 + 0x30);
        *(u8 *)((u8 *)obj + 3) = *(u8 *)((u8 *)obj + 3) & 0xFFFFFFFB;
        fn_80050C90(*(void **)((u8 *)arg0 + 0x30));
    }
    if (*(u8 *)((u8 *)arg0 + 0x3C) != 0) {
        fn_80050BCC(*(void **)((u8 *)arg0 + 0x30), 0xFF);
    }
}

void fn_801857F0(void *arg0) {
    u8 fn_8004BF80(s32);
    if (fn_8004BF80(M2C_FIELD(arg0, s32 *, 0x30)) != 0) {
        fn_8000C188(arg0);
    }
}

#pragma global_optimizer off
void fn_80185830(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void fn_8000C070(void *, s32);
    void *fn_8000CA64(void *, s32);
    void *fn_8000CAF0(void *, s32);
    u8 fn_8004C0F0(void *);
    void fn_8004FE90(void *, u8);
    void fn_8004FE98(void *, s32);
    u8 fn_800504FC(void *, s32);
    void fn_800506E0(void *, s32);
    void *fn_800508C4(void *);
    void fn_80059208(void *, void *);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005FC74(void *, void *, s32);
    void fn_8005FEE8(void *, f32);
    s32 fn_80060440(void *);
    void *fn_800639B4(void);
    void fn_80185078(void *, void *);
    void fn_80185AF4(void *);
    extern u8 lbl_80295A00[];
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF0;
    extern f32 lbl_8036ACF4;

    u8 gap[8];
    u8 sp78[0x38];
    u8 sp40[0x38];
    u8 sp8[0x38];
    void *self;
    u8 *base;
    s32 r29;
    void *r28;
    void *tmp;
    u8 lvl;
    s32 z;

    self = arg0;
    base = lbl_80295A00;
    z = 0x40;
    *(s32 *)((u8 *)arg0 + 0x34) = 1;
    if (*(u8 *)((u8 *)arg0 + 0x3C) != 0) {
        if (fn_800504FC(*(void **)((u8 *)self + 0x30), 0xA) != 0) {
            r29 = (s32)*(void **)((u8 *)self + 0x30);
            r28 = self;
            *(s32 *)(sp78 + 0x30) = r29;
            fn_8000A388(base + 0x40, fn_80185078, sp78);
            if ((u32)self == 0U) {
                r28 = (void *)3;
            }
            *(s32 *)((u8 *)fn_8000CAF0(base + 0x40, (s32)r28) + 0x30) = r29;
            r29 = 0x10;
            r28 = *(void **)((u8 *)self + 0x30);
            if (fn_8004C0F0(r28) != 0) {
                z -= 0x40;
                *(void **)(sp40 + 0x30) = r28;
                fn_8000A388(base + z, fn_80185078, sp40);
                *(void **)(sp8 + 0x30) = r28;
                fn_8000A388(base + 0x20, fn_80185078, sp8);
                lvl = *(u8 *)((u8 *)fn_800508C4(r28) + 9);
                if ((s32)lvl > 0x14) {
                    if ((s32)lvl > 0x28) {
                        r29 <<= 1;
                    } else {
                        r29 = (s32)((f32)r29 + fn_80059F64(lbl_8036ACEC, lbl_8036ACF4, lbl_8036ACF0, (f32)((s32)lvl - 0x14)));
                    }
                }
                if ((r29 == 0) || (fn_80060440((u8 *)r28 + 0x1C) >= 4)) {
                    fn_8004FE98(r28, 0xA);
                } else {
                    tmp = fn_8000CA64(base + z, 0);
                    *(void **)((u8 *)tmp + 0x30) = r28;
                    *(s32 *)((u8 *)tmp + 0x34) = (s32)r28 + 0x1C;
                    *(s32 *)((u8 *)tmp + 0x38) = 0xA;
                    *(s32 *)((u8 *)tmp + 0x3C) = r29;
                    *(s32 *)((u8 *)tmp + 0x40) = 0;
                    fn_800506E0(*(void **)((u8 *)tmp + 0x30), 0xA);
                    fn_8005FC74(*(void **)((u8 *)tmp + 0x34), fn_800639B4(), 1);
                    fn_8005FEE8(*(void **)((u8 *)tmp + 0x34), lbl_8036ACEC);
                    fn_8004FE90(*(void **)((u8 *)tmp + 0x30), (u8)*(s32 *)((u8 *)tmp + 0x38));
                }
            }
            fn_80059208(fn_80185AF4, self);
        } else {
            fn_8000C070(self, 0);
        }
    } else {
        fn_8000C070(arg0, 1);
    }
    (void)gap;
}
#pragma global_optimizer reset
void fn_80185A64(void *arg0) {
    void fn_8004F5EC(void *, s32);
    u8 fn_800504FC(void *, s32);
    void fn_8004FC70(void *, s32);
    void fn_800558D8(void *);
    extern u8 lbl_80278E24[];
    void *temp_r3;

    if (*((u8 *)arg0 + 0x3C) != 0) {
        fn_800558D8(lbl_80278E24 + 0x1C1);
        if (fn_800504FC(*(void **)((u8 *)arg0 + 0x30), 0xA) != 0) {
            fn_8004FC70(*(void **)((u8 *)arg0 + 0x30), 0xA);
            temp_r3 = *(void **)((u8 *)arg0 + 0x30);
            *((u8 *)temp_r3 + 3) = (u8)(*((u8 *)temp_r3 + 3) | 4);
            fn_8004F5EC(*(void **)((u8 *)arg0 + 0x30), 0);
            temp_r3 = *(void **)((u8 *)arg0 + 0x30);
            *((u8 *)temp_r3 + 3) = (u8)(*((u8 *)temp_r3 + 3) & 0xFFFFFFFB);
        }
    }
}

void fn_80185AF4(void *arg0) {
    extern void *lbl_80367240;
    s32 temp_r0;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x3E) != 0) {
        temp_r0 = M2C_FIELD(lbl_80367240, s32 *, 4);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x34) == 1) {
            if (temp_r0 & 0x100) {
                M2C_FIELD(arg0, s32 *, 0x34) = 2;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x78) = (f32) M2C_FIELD(arg0, s32 *, 0x34);
            }
        } else if (!(temp_r0 & 0x100)) {
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0x78) = (f32) M2C_FIELD(arg0, s32 *, 0x34);
        }
    }
}

s32 fn_80185B94(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(M2C_FIELD(temp_r5, void **, 0x5C), f32 *, 0x5C) = (f32) M2C_FIELD(M2C_FIELD(temp_r5, void **, 0x4C), s32 *, 0x34);
    return 0;
}

void fn_80185F40(void)
{
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, void *);
    s32 fn_80052B30(s32);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295AE8[];
    void *arg0;
    void *temp_r30;
    void *temp_r3;
    u32 sp8;
    
    arg0 = M2C_FIELD(&arg0, void **, 0x30);
    temp_r30 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r30, void **, 0x30) = temp_r30;
    fn_8000A388(lbl_80295AE8, fn_80185078, &temp_r30);
    temp_r3 = fn_8000CA64(lbl_80295AE8, arg0);
    M2C_FIELD(temp_r3, void **, 0x30) = temp_r30;
    M2C_FIELD(temp_r3, u32 *, 0x3C) = 0x10;
    sp8 = fn_80052B30(0xC);
    M2C_FIELD(temp_r3, u8 *, 0x38) = ((u8 *)&sp8)[0];
    M2C_FIELD(temp_r3, u8 *, 0x39) = ((u8 *)&sp8)[1];
    M2C_FIELD(temp_r3, u8 *, 0x3A) = ((u8 *)&sp8)[2];
    M2C_FIELD(temp_r3, u8 *, 0x3B) = ((u8 *)&sp8)[3];
    M2C_FIELD(temp_r3, u8 *, 0x34) = ((u8 *)temp_r30)[0x24];
    M2C_FIELD(temp_r3, u8 *, 0x35) = ((u8 *)temp_r30)[0x25];
    M2C_FIELD(temp_r3, u8 *, 0x36) = ((u8 *)temp_r30)[0x26];
    M2C_FIELD(temp_r3, u8 *, 0x37) = ((u8 *)temp_r30)[0x27];
}

void fn_80186028(void *arg0) {
    M2C_UNK fn_800536B0(void *, void *, f32, f32, f32);
    s32 *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    fn_800536B0(M2C_FIELD(arg0, void **, 0x34), temp_r4, M2C_FIELD(temp_r4, f32 *, 4), M2C_FIELD(temp_r4, f32 *, 8), M2C_FIELD(temp_r4, f32 *, 0xC));
    temp_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x30), s32 **, 0x5C);
    *temp_r3 &= 0xFFFFFFBF;
}

void fn_80186080(void *arg0) {
    void fn_80050C50(void *, f32, f32, f32);
    void fn_80050BCC(void *, s32);
    void fn_8004BE88(void *, s32);
    void fn_8000C070(void *, s32);
    extern f32 lbl_8036ACD8;
    s32 flags;

    flags = *(u16 *)((u8 *)arg0 + 0x38) & 5;
    switch (flags) {
    case 0:
    case 1:
        fn_80050C50(*(void **)((u8 *)arg0 + 0x30),
                    lbl_8036ACD8 + (f32)*(s32 *)((u8 *)arg0 + 0x3C),
                    lbl_8036ACD8 + (f32)*(s32 *)((u8 *)arg0 + 0x40),
                    lbl_8036ACD8);
        fn_80050BCC(*(void **)((u8 *)arg0 + 0x30), 0);
        if (*(u16 *)((u8 *)arg0 + 0x38) & 0x10) {
            fn_8004BE88(*(void **)((u8 *)arg0 + 0x30), 0);
        }
        break;
    case 4:
        fn_8000C070(arg0, 2);
        break;
    }
}

void fn_80186318(void *arg0) {
    s32 fn_80053C30(void *, void *);
    void fn_800536B0(s32, f32, f32, f32);
    extern u8 lbl_80278E24[];
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    void *temp_r5;
    u8 *base;
    u8 *var_r3;
    u32 bit;

    base = lbl_80278E24;
    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    var_r3 = base + 0x357;
    bit = M2C_FIELD(arg0, u16 *, 0x38) & 0x20;
    temp_f31 = M2C_FIELD(temp_r5, f32 *, 4);
    temp_f30 = M2C_FIELD(temp_r5, f32 *, 8);
    temp_f29 = M2C_FIELD(temp_r5, f32 *, 0xC);
    if (bit) {
        var_r3 = base + 0x34C;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = fn_80053C30(var_r3, arg0);
    fn_800536B0(M2C_FIELD(arg0, s32 *, 0x34), temp_f31, temp_f30, temp_f29);
}

void fn_801863BC(void *arg0) {
    extern u16 lbl_80278E24[];
    void fn_800558D8(void *);
    void *var_r3;

    var_r3 = (u8 *)lbl_80278E24 + 0x357;
    if (*(u16 *)((u8 *)arg0 + 0x38) & 0x20) {
        var_r3 = (u8 *)lbl_80278E24 + 0x34C;
    }
    fn_800558D8(var_r3);
}

void fn_801863F8(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, void *);
    u8 fn_8004C0F0(s32);
    s32 fn_8004FE90(s32, u8);
    s32 fn_8004FE98(s32, s32);
    s32 fn_800506E0(s32, s32);
    void *fn_800508C4(s32);
    f32 fn_80059F64(f32, f32, f32, f32);
    s32 fn_8005FC74(void *, void *, s32);
    s32 fn_8005FEE8(void *, f32);
    s32 fn_80060440(s32);
    void *fn_800639B4();
    
    extern void lbl_80295A00;
    extern void lbl_80295A20;
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF0;
    extern f32 lbl_8036ACF4;
    extern f64 lbl_8036ACE0;
    
    s32 temp_r30;
    u8 temp_r3;
    void *temp_r3_2;
    s32 var_r29;
    f32 temp_f3;
    void *temp_r30_2;
    void *temp_r4;
    void *temp_r7;
    s32 sp70;
    s32 sp40;
    s32 sp38;
    s32 sp8;

    var_r29 = 0x10;
    temp_r30 = *(s32 *)((u8 *)arg0 + 0x34);
    if (fn_8004C0F0(temp_r30) != 0) {
        sp70 = temp_r30;
        fn_8000A388(&lbl_80295A00, &fn_80185078, &sp40);
        sp38 = temp_r30;
        fn_8000A388(&lbl_80295A20, &fn_80185078, &sp8);
        temp_r3 = *(u8 *)((u8 *)fn_800508C4(temp_r30) + 9);
        if ((s32) temp_r3 > 0x14) {
            if ((s32) temp_r3 > 0x28) {
                var_r29 = 0x20;
            } else {
                temp_f3 = fn_80059F64(lbl_8036ACEC, lbl_8036ACF4, lbl_8036ACF0, (f32) (temp_r3 - 0x14));
                var_r29 = (s32) temp_f3;
            }
        }
        if ((var_r29 == 0) || (fn_80060440(temp_r30 + 0x1C) >= 4)) {
            fn_8004FE98(temp_r30, 0);
            return;
        }
        temp_r3_2 = fn_8000CA64(&lbl_80295A00, arg0);
        *(s32 *)((u8 *)temp_r3_2 + 0x30) = temp_r30;
        *(void **)((u8 *)temp_r3_2 + 0x34) = (void *) (temp_r30 + 0x1C);
        *(s32 *)((u8 *)temp_r3_2 + 0x38) = 0;
        *(s32 *)((u8 *)temp_r3_2 + 0x3C) = var_r29;
        *(s32 *)((u8 *)temp_r3_2 + 0x40) = 0;
        fn_800506E0(*(s32 *)((u8 *)temp_r3_2 + 0x30), 0);
        temp_r7 = *(void **)((u8 *)temp_r3_2 + 0x34);
        temp_r30_2 = fn_800639B4();
        temp_r4 = *(void **)((u8 *)temp_r7 + 0x44);
        if (temp_r4 != NULL) {
            temp_f3 = (f32) *(s32 *)((u8 *)temp_r4 + 0x14);
            fn_80059F64((f32) *(s32 *)((u8 *)temp_r30_2 + 0x14), (f32) *(s32 *)((u8 *)temp_r30_2 + 0x18), (f32) *(s32 *)((u8 *)temp_r4 + 0x18) - temp_f3, *(f32 *)((u8 *)temp_r7 + 0x58) - temp_f3);
        }
        fn_8005FC74(*(void **)((u8 *)temp_r3_2 + 0x34), temp_r30_2, 1);
        fn_8005FEE8(*(void **)((u8 *)temp_r3_2 + 0x34), (f32) var_r29);
        fn_8004FE90(*(s32 *)((u8 *)temp_r3_2 + 0x30), (u8) *(s32 *)((u8 *)temp_r3_2 + 0x38));
    }
}

#pragma opt_strength_reduction off
void fn_80186BC0(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, void *);
    u8 fn_8004C0F0(void *);
    void fn_8004FE90(void *, u8);
    void fn_8004FE98(void *, s32);
    void fn_800506E0(void *, s32);
    void *fn_800508C4(void *);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005FC74(void *, void *, s32);
    void fn_8005FEE8(void *, f32);
    s32 fn_80060440(void *);
    void *fn_800639B4(void);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295A00[];
    extern u8 lbl_80295A20[];
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF0;
    extern f32 lbl_8036AD08;
    extern f64 lbl_8036ACE0;
    u8 sp40[0x34];
    u8 sp8[0x38];
    void *obj;
    s32 count;
    void *tmp;

    obj = *(void **)((u8 *)arg0 + 0x34);
    count = 1;
    count += 1;
    if (fn_8004C0F0(obj) != 0) {
        *(void **)(sp40 + 0x30) = obj;
        fn_8000A388(lbl_80295A00, fn_80185078, sp40);
        *(void **)(sp8 + 0x30) = obj;
        fn_8000A388(lbl_80295A20, fn_80185078, sp8);
        {
            u8 lvl = *(u8 *)((u8 *)fn_800508C4(obj) + 9);
            if ((s32)lvl > 0x14) {
                if ((s32)lvl > 0x28) {
                    count <<= 1;
                } else {
                    count = (s32)((f32)count + fn_80059F64(lbl_8036ACEC, lbl_8036AD08, lbl_8036ACF0, (f32)((s32)lvl - 0x14)));
                }
            }
        }
        if ((count == 0) || (fn_80060440((u8 *)obj + 0x1C) >= 4)) {
            fn_8004FE98(obj, 0);
            return;
        }
        arg0 = fn_8000CA64(lbl_80295A00, arg0);
        *(void **)((u8 *)arg0 + 0x30) = obj;
        *(s32 *)((u8 *)arg0 + 0x34) = (s32)obj + 0x1C;
        *(s32 *)((u8 *)arg0 + 0x38) = 0;
        *(s32 *)((u8 *)arg0 + 0x3C) = count;
        *(s32 *)((u8 *)arg0 + 0x40) = 0;
        fn_800506E0(*(void **)((u8 *)arg0 + 0x30), 0);
        tmp = fn_800639B4();
        count = 0;
        if (*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x34) + 0x44) != NULL) {
            void *temp_r4 = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x34) + 0x44);
            f32 temp_f3 = (f32)*(s32 *)((u8 *)temp_r4 + 0x14);
            count = (s32)fn_80059F64((f32)*(s32 *)((u8 *)tmp + 0x14), (f32)*(s32 *)((u8 *)tmp + 0x18), (f32)*(s32 *)((u8 *)temp_r4 + 0x18) - temp_f3, *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x34) + 0x58) - temp_f3);
        }
        fn_8005FC74(*(void **)((u8 *)arg0 + 0x34), tmp, 1);
        fn_8005FEE8(*(void **)((u8 *)arg0 + 0x34), (f32)count);
        fn_8004FE90(*(void **)((u8 *)arg0 + 0x30), (u8)*(s32 *)((u8 *)arg0 + 0x38));
    }
}
#pragma opt_strength_reduction on

void fn_8018715C(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, void *);
    f32 fn_8004BE18(void *);
    void fn_80185078(void *, void *);
    extern u16 lbl_80295A78[36];
    extern f32 lbl_8036ACEC;
    void *check;
    void *temp_r30;
    void *temp_r3;
    f32 temp_f31;
    u8 sp[0x70];

    *(f32 *)((u8 *)arg0 + 0x44) = lbl_8036ACEC;
    *(f32 *)((u8 *)arg0 + 0x38) = *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x34) + 4);
    *(f32 *)((u8 *)arg0 + 0x3C) = *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x34) + 8);

    check = *(void **)((u8 *)arg0 + 0x34);
    temp_r30 = *(void **)((u8 *)arg0 + 0x30);
    if (check) {
        temp_f31 = fn_8004BE18(temp_r30);
        *(void **)(sp + 0x68) = temp_r30;
        fn_8000A388(&lbl_80295A78, fn_80185078, sp + 0x38);
        if (temp_f31 != ((f32)*(s16 *)((u8 *)temp_r30 + 0x15C) / 50.0f)) {
            temp_r3 = fn_8000CA64(&lbl_80295A78, arg0);
            *(void **)((u8 *)temp_r3 + 0x30) = temp_r30;
            *(f32 *)((u8 *)temp_r3 + 0x34) = temp_f31;
            *(s32 *)((u8 *)temp_r3 + 0x38) = 0x10;
        }
    }

    check = *(void **)((u8 *)arg0 + 0x30);
    temp_r30 = *(void **)((u8 *)arg0 + 0x34);
    if (check) {
        temp_f31 = fn_8004BE18(temp_r30);
        *(void **)(sp + 0x30) = temp_r30;
        fn_8000A388(&lbl_80295A78, fn_80185078, sp);
        if (temp_f31 != ((f32)*(s16 *)((u8 *)temp_r30 + 0x15C) / 50.0f)) {
            temp_r3 = fn_8000CA64(&lbl_80295A78, arg0);
            *(void **)((u8 *)temp_r3 + 0x30) = temp_r30;
            *(f32 *)((u8 *)temp_r3 + 0x34) = temp_f31;
            *(s32 *)((u8 *)temp_r3 + 0x38) = 0x10;
        }
    }
}

void fn_801872CC(void *arg0)
{
    extern void fn_8004FE98(void *, s32);

    u8 *obj;
    void (*callback)(void *);

    obj = (u8 *)arg0;

    if (obj[0x48] == 0) {
        fn_8004FE98(*(void **)(obj + 0x30), 0);

        if (*(void **)(obj + 0x34) != 0) {
            fn_8004FE98(*(void **)(obj + 0x34), 0);
        }
    }

    if (obj[0x49] == 0) {
        callback = *(void (**)(void *))(obj + 0x40);

        if (callback != 0) {
            callback(*(void **)(obj + 0x44));
        }
    }
}

void fn_80187344(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, void *);
    u8 fn_8004C0F0(u32);
    void fn_8004FE90(u32, u8);
    void fn_8004FE98(u32, s32);
    void fn_800506E0(u32, s32);
    void *fn_800508C4(u32);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005FC74(void *, void *, s32);
    void fn_8005FEE8(void *, f32);
    s32 fn_80060440(s32);
    void *fn_800639B4(void);
    extern u8 lbl_80295A00[];
    extern u8 lbl_80295A20[];
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF0;
    extern f32 lbl_8036ACF4;
    struct { u8 pad[0x30]; u32 val; } spB0;
    struct { u8 pad[0x30]; u32 val; } sp78;
    struct { u8 pad[0x30]; u32 val; } sp40;
    struct { u8 pad[0x30]; u32 val; } sp8;
    s32 var_r28;
    u32 temp_r29;
    void *temp_r30;
    void *tmp;
    void *temp_r7;
    void *temp_r4;
    f32 temp_f3;
    u8 temp_r3;

    var_r28 = 0x10;
    temp_r29 = *(u32 *)((u8 *)arg0 + 0x30);
    if (fn_8004C0F0(temp_r29) != 0) {
        spB0.val = temp_r29;
        fn_8000A388(lbl_80295A00, fn_80185078, &spB0);
        sp78.val = temp_r29;
        fn_8000A388(lbl_80295A20, fn_80185078, &sp78);
        temp_r3 = *(u8 *)((u8 *)fn_800508C4(temp_r29) + 9);
        if ((s32)temp_r3 > 0x14) {
            if ((s32)temp_r3 > 0x28) {
                var_r28 <<= 1;
            } else {
                var_r28 = (s32)((f32)var_r28 + fn_80059F64(lbl_8036ACEC, lbl_8036ACF4, lbl_8036ACF0, (f32)((s32)temp_r3 - 0x14)));
            }
        }
        if ((var_r28 == 0) || (fn_80060440(temp_r29 + 0x1C) >= 4)) {
            fn_8004FE98(temp_r29, 0);
        } else {
            temp_r30 = fn_8000CA64(lbl_80295A00, arg0);
            *(u32 *)((u8 *)temp_r30 + 0x30) = temp_r29;
            *(void **)((u8 *)temp_r30 + 0x34) = (void *)(temp_r29 + 0x1C);
            *(s32 *)((u8 *)temp_r30 + 0x38) = 0;
            *(s32 *)((u8 *)temp_r30 + 0x3C) = var_r28;
            *(s32 *)((u8 *)temp_r30 + 0x40) = 0;
            fn_800506E0(*(u32 *)((u8 *)temp_r30 + 0x30), 0);
            temp_r7 = *(void **)((u8 *)temp_r30 + 0x34);
            tmp = fn_800639B4();
            var_r28 = 0;
            temp_r4 = *(void **)((u8 *)temp_r7 + 0x44);
            if (temp_r4 != NULL) {
                temp_f3 = (f32)*(s32 *)((u8 *)temp_r4 + 0x14);
                var_r28 = (s32)fn_80059F64((f32)*(s32 *)((u8 *)tmp + 0x14), (f32)*(s32 *)((u8 *)tmp + 0x18), (f32)*(s32 *)((u8 *)temp_r4 + 0x18) - temp_f3, *(f32 *)((u8 *)temp_r7 + 0x58) - temp_f3);
            }
            fn_8005FC74(*(void **)((u8 *)temp_r30 + 0x34), tmp, 1);
            fn_8005FEE8(*(void **)((u8 *)temp_r30 + 0x34), (f32)var_r28);
            fn_8004FE90(*(u32 *)((u8 *)temp_r30 + 0x30), (u8)*(s32 *)((u8 *)temp_r30 + 0x38));
        }
    }
    temp_r29 = *(u32 *)((u8 *)arg0 + 0x34);
    if (temp_r29 != 0) {
        var_r28 = 0x10;
        if (fn_8004C0F0(temp_r29) != 0) {
            sp40.val = temp_r29;
            fn_8000A388(lbl_80295A00, fn_80185078, &sp40);
            sp8.val = temp_r29;
            fn_8000A388(lbl_80295A20, fn_80185078, &sp8);
            temp_r3 = *(u8 *)((u8 *)fn_800508C4(temp_r29) + 9);
            if ((s32)temp_r3 > 0x14) {
                if ((s32)temp_r3 > 0x28) {
                    var_r28 <<= 1;
                } else {
                    var_r28 = (s32)((f32)var_r28 + fn_80059F64(lbl_8036ACEC, lbl_8036ACF4, lbl_8036ACF0, (f32)((s32)temp_r3 - 0x14)));
                }
            }
            if ((var_r28 == 0) || (fn_80060440(temp_r29 + 0x1C) >= 4)) {
                fn_8004FE98(temp_r29, 0);
            } else {
                temp_r30 = fn_8000CA64(lbl_80295A00, arg0);
                *(u32 *)((u8 *)temp_r30 + 0x30) = temp_r29;
                *(void **)((u8 *)temp_r30 + 0x34) = (void *)(temp_r29 + 0x1C);
                *(s32 *)((u8 *)temp_r30 + 0x38) = 0;
                *(s32 *)((u8 *)temp_r30 + 0x3C) = var_r28;
                *(s32 *)((u8 *)temp_r30 + 0x40) = 0;
                fn_800506E0(*(u32 *)((u8 *)temp_r30 + 0x30), 0);
                temp_r7 = *(void **)((u8 *)temp_r30 + 0x34);
                tmp = fn_800639B4();
                var_r28 = 0;
                temp_r4 = *(void **)((u8 *)temp_r7 + 0x44);
                if (temp_r4 != NULL) {
                    temp_f3 = (f32)*(s32 *)((u8 *)temp_r4 + 0x14);
                    var_r28 = (s32)fn_80059F64((f32)*(s32 *)((u8 *)tmp + 0x14), (f32)*(s32 *)((u8 *)tmp + 0x18), (f32)*(s32 *)((u8 *)temp_r4 + 0x18) - temp_f3, *(f32 *)((u8 *)temp_r7 + 0x58) - temp_f3);
                }
                fn_8005FC74(*(void **)((u8 *)temp_r30 + 0x34), tmp, 1);
                fn_8005FEE8(*(void **)((u8 *)temp_r30 + 0x34), (f32)var_r28);
                fn_8004FE90(*(u32 *)((u8 *)temp_r30 + 0x30), (u8)*(s32 *)((u8 *)temp_r30 + 0x38));
            }
        }
    }
    *((u8 *)arg0 + 0x48) = 1;
}

#pragma global_optimizer off
void fn_801877C4(void *arg0) {
    void fn_800056A0(s32);
    void fn_8000A388(void *, void *, void *);
    void fn_8000C188(void *);
    void *fn_8000CA64(void *, void *);
    void *fn_8000CAF0(void *, s32);
    f32 fn_80023430(void *, f32, f32);
    void fn_80025624(void *, s32);
    f32 fn_8004BE18(void *);
    u8 fn_8004BF80(void *);
    u8 fn_8004C0F0(void *);
    void fn_8004FE90(void *, u8);
    void fn_8004FE98(void *, s32);
    void fn_800506E0(void *, s32);
    void *fn_800508C4(void *);
    u32 fn_80052B30(s32);
    void fn_800536B0(f32, f32, f32);
    void *fn_80053C30(void *, void *);
    f32 fn_80059440(void *, f32, f32, f32, f32);
    f32 fn_80059F64(f32, f32, f32, f32);
    u8 fn_8005F9B8(void *, s32);
    void fn_8005FC74(void *, void *, s32);
    void fn_8005FEE8(void *, f32);
    s32 fn_80060440(void *);
    void *fn_800639B4(void);
    s8 fn_80147578(void *, s32, f32, f32, f32);
    void fn_80185078(void *, void *);
    void fn_8018CFA4(s32, s32, s32, s32, void *);
    s32 fn_80230BCC(s32);
    extern u8 lbl_80278E24[];
    extern u8 lbl_80295A00[];
    extern u8 lbl_802CA518[];
    extern void *lbl_80367240;
    extern f32 lbl_8036ACD8;
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF0;
    extern f32 lbl_8036AD08;

    u8 gap[8];
    u8 sp7C[0x38];
    u8 sp44[0x38];
    u8 spC[0x38];
    u32 sp8;
    f32 f31;
    f32 f30;
    f32 f29;
    f32 f28;
    s32 z;
    void (*cb)(s32);
    u8 *msg;
    void *pos;
    s32 count;
    void *obj;
    void *tmp;
    u8 *base;

    base = lbl_80295A00;
    z = 0x40;
    if (fn_8005F9B8((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x1C, 0) != 0) {
        pos = *(void **)((u8 *)arg0 + 0x34);
        if (pos != 0) {
            f31 = *(f32 *)((u8 *)pos + 4);
            f30 = *(f32 *)((u8 *)pos + 8);
            f29 = *(f32 *)((u8 *)pos + 0xC);
            f28 = fn_8004BE18(*(void **)((u8 *)arg0 + 0x30));
            obj = *(void **)((u8 *)arg0 + 0x34);
            count = 1;
            count += 1;
            if (fn_8004C0F0(obj) != 0) {
                *(void **)(sp7C + 0x30) = obj;
                fn_8000A388(base + (z - 0x40), fn_80185078, sp7C);
                *(void **)(sp44 + 0x30) = obj;
                fn_8000A388(base + 0x20, fn_80185078, sp44);
                {
                    u8 lvl = *(u8 *)((u8 *)fn_800508C4(obj) + 9);
                    if ((s32)lvl > 0x14) {
                        if ((s32)lvl > 0x28) {
                            count <<= 1;
                        } else {
                            count = (s32)((f32)count + fn_80059F64(lbl_8036ACEC, lbl_8036AD08, lbl_8036ACF0, (f32)((s32)lvl - 0x14)));
                        }
                    }
                }
                if ((count == 0) || (fn_80060440((u8 *)obj + 0x1C) >= 4)) {
                    fn_8004FE98(obj, 9);
                } else {
                    tmp = fn_8000CA64(base + (z - 0x40), arg0);
                    *(void **)((u8 *)tmp + 0x30) = obj;
                    *(s32 *)((u8 *)tmp + 0x34) = (s32)obj + 0x1C;
                    *(s32 *)((u8 *)tmp + 0x38) = 9;
                    *(s32 *)((u8 *)tmp + 0x3C) = count;
                    *(s32 *)((u8 *)tmp + 0x40) = 0;
                    fn_800506E0(*(void **)((u8 *)tmp + 0x30), 9);
                    fn_8005FC74(*(void **)((u8 *)tmp + 0x34), fn_800639B4(), 1);
                    fn_8005FEE8(*(void **)((u8 *)tmp + 0x34), lbl_8036ACEC);
                    fn_8004FE90(*(void **)((u8 *)tmp + 0x30), (u8)*(s32 *)((u8 *)tmp + 0x38));
                }
            }
            count = (s32)*(void **)((u8 *)arg0 + 0x34);
            obj = arg0;
            *(s32 *)(spC + 0x30) = count;
            fn_8000A388(base + 0xC0, fn_80185078, spC);
            if (arg0 == 0) {
                obj = (void *)3;
            }
            tmp = fn_8000CAF0(base + 0xC0, (s32)obj);
            *(s32 *)((u8 *)tmp + 0x30) = count;
            *(s32 *)((u8 *)tmp + 0x40) = 2;
            sp8 = fn_80052B30(1);
            *(u8 *)((u8 *)tmp + 0x38) = ((u8 *)&sp8)[0];
            *(u8 *)((u8 *)tmp + 0x39) = ((u8 *)&sp8)[1];
            *(u8 *)((u8 *)tmp + 0x3A) = ((u8 *)&sp8)[2];
            *(u8 *)((u8 *)tmp + 0x3B) = ((u8 *)&sp8)[3];
            fn_8000CAF0(base + 0x238, (s32)arg0);
        } else {
            f32 t8;
            f31 = lbl_8036ACD8 + (f32)*(s8 *)((u8 *)arg0 + 0x3A);
            f30 = lbl_8036ACD8 + (f32)*(s8 *)((u8 *)arg0 + 0x3B);
            f29 = fn_80023430(lbl_802CA518, f31, f30);
            tmp = *(void **)((u8 *)arg0 + 0x30);
            t8 = *(f32 *)((u8 *)tmp + 8);
            f28 = fn_80059440(tmp, *(f32 *)((u8 *)tmp + 4), t8, f31, f30);
        }
        count = fn_80230BCC((s32)*(s8 *)((u8 *)arg0 + 0x3A) - (s32)*(s8 *)((u8 *)arg0 + 0x38));
        count += fn_80230BCC((s32)*(s8 *)((u8 *)arg0 + 0x3B) - (s32)*(s8 *)((u8 *)arg0 + 0x39));
        msg = lbl_80278E24 + 0x371;
        if (count >= 2) {
            msg = lbl_80278E24 + 0x360;
        }
        base = fn_80053C30(msg, arg0);
        fn_800536B0(f31, f30, f29);
        *(f32 *)((u8 *)*(void **)((u8 *)base + 0x30) + 0x24) = f28;
        cb = *(void (**)(s32))((u8 *)arg0 + 0x40);
        if (cb != 0) {
            cb(*(s32 *)((u8 *)arg0 + 0x44));
            *(u8 *)((u8 *)arg0 + 0x49) = 1;
        }
        fn_80147578(lbl_80278E24 + 0x37C, 0x64, f31, f30, f29);
        fn_8018CFA4(0xF, 6, 2, 0, arg0);
        fn_80025624(lbl_80367240, 8);
        fn_8000C188(arg0);
        return;
    }
    if (fn_8004BF80(*(void **)((u8 *)arg0 + 0x30)) != 0) {
        fn_800056A0(0);
        fn_8000C188(arg0);
    }
    (void)gap;
}
#pragma global_optimizer reset
void fn_80187D70(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, void *);
    f32 fn_8004BE18(void *);
    f32 fn_8004BDA8(void *, f32, f32);
    void fn_8004FC70(void *, s32);
    void fn_800558D8(void *);
    s32 fn_80230BCC(s32);
    void fn_80185078(void *, void *);
    extern u16 lbl_80295A78[36];
    extern u8 lbl_80278E24[];
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACD8;

    u8 sp[0x70];
    void *unit;
    void *node;
    f32 f;
    void *temp_r4;
    u8 *base;
    u8 *msg;
    s32 sum;

    *(f32 *)((u8 *)arg0 + 0x3C) = lbl_8036ACEC;
    fn_8004FC70(*(void **)((u8 *)arg0 + 0x30), 6);
    temp_r4 = *(void **)((u8 *)arg0 + 0x34);
    if (temp_r4 != NULL) {
        unit = *(void **)((u8 *)arg0 + 0x30);
        if (temp_r4 != NULL) {
            f = fn_8004BE18(unit);
            *(void **)(sp + 0x68) = unit;
            fn_8000A388(&lbl_80295A78, fn_80185078, sp + 0x38);
            if (f != ((f32)*(s16 *)((u8 *)unit + 0x15C) / 50.0f)) {
                node = fn_8000CA64(&lbl_80295A78, arg0);
                *(void **)((u8 *)node + 0x30) = unit;
                *(f32 *)((u8 *)node + 0x34) = f;
                *(s32 *)((u8 *)node + 0x38) = 0x10;
            }
        }
        *(u8 *)((u8 *)arg0 + 0x38) = (s8)(s32)*(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x34) + 4);
        *(u8 *)((u8 *)arg0 + 0x39) = (s8)(s32)*(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x34) + 8);
        fn_8004FC70(*(void **)((u8 *)arg0 + 0x34), 9);
    } else {
        unit = *(void **)((u8 *)arg0 + 0x30);
        f = fn_8004BDA8(unit, lbl_8036ACD8 + (f32)(s8)*(u8 *)((u8 *)arg0 + 0x3A), lbl_8036ACD8 + (f32)(s8)*(u8 *)((u8 *)arg0 + 0x3B));
        *(void **)(sp + 0x30) = unit;
        fn_8000A388(&lbl_80295A78, fn_80185078, sp);
        if (f != ((f32)*(s16 *)((u8 *)unit + 0x15C) / 50.0f)) {
            node = fn_8000CA64(&lbl_80295A78, arg0);
            *(void **)((u8 *)node + 0x30) = unit;
            *(f32 *)((u8 *)node + 0x34) = f;
            *(s32 *)((u8 *)node + 0x38) = 0x10;
        }
        *(u8 *)((u8 *)arg0 + 0x38) = *(u8 *)((u8 *)arg0 + 0x3A);
        *(u8 *)((u8 *)arg0 + 0x39) = *(u8 *)((u8 *)arg0 + 0x3B);
    }
    sum = fn_80230BCC((s8)*(u8 *)((u8 *)arg0 + 0x3A) - (s8)*(u8 *)((u8 *)arg0 + 0x38));
    if ((sum = fn_80230BCC((s8)*(u8 *)((u8 *)arg0 + 0x3B) - (s8)*(u8 *)((u8 *)arg0 + 0x39)) + sum, sum >= 2)) {
        base = lbl_80278E24;
        msg = base + 0x360;
    } else {
        base = lbl_80278E24;
        msg = base + 0x371;
    }
    fn_800558D8(msg);
}

#pragma opt_strength_reduction off
#pragma optimization_level 2
void fn_80187FBC(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, s32);
    u8 fn_8004C0F0(void *);
    void fn_8004FE90(void *, u8);
    void fn_8004FE98(void *, s32);
    void fn_800506E0(void *, s32);
    void *fn_800508C4(void *);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005FC74(void *, void *, s32);
    void fn_8005FEE8(void *, f32);
    s32 fn_80060440(void *);
    void *fn_800639B4(void);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295A00[];
    extern u8 lbl_80295A20[];
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF0;
    extern f32 lbl_8036ACF4;
    u8 sp40[0x34];
    u8 sp8[0x38];
    void *node;
    void *obj;
    s32 count;
    void *temp_r7;
    void *temp_r4;
    s32 lvl;
    f32 temp_f3;

    node = 0;
    count = 0x10;
    obj = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x18) + 0x34);
    if (fn_8004C0F0(obj) != 0) {
        *(void **)(sp40 + 0x30) = obj;
        fn_8000A388(lbl_80295A00, fn_80185078, sp40);
        *(void **)(sp8 + 0x30) = obj;
        fn_8000A388(lbl_80295A20, fn_80185078, sp8);
        lvl = *(u8 *)((u8 *)fn_800508C4(obj) + 9);
        if (lvl > 0x14) {
            if (lvl > 0x28) {
                count <<= 1;
            }
            if (count == 0x10) {
                count = (s32)((f32)count + fn_80059F64(lbl_8036ACEC, lbl_8036ACF4, lbl_8036ACF0, (f32)(lvl - 0x14)));
            }
        }
        if ((count == 0) || (fn_80060440((u8 *)obj + 0x1C) >= 4)) {
            fn_8004FE98(obj, 0);
        } else {
            node = fn_8000CA64(lbl_80295A00, 0);
            *(void **)((u8 *)node + 0x30) = obj;
            *(void **)((u8 *)node + 0x34) = (void *)((s32)obj + 0x1C);
            *(s32 *)((u8 *)node + 0x38) = 0;
            *(s32 *)((u8 *)node + 0x3C) = count;
            *(s32 *)((u8 *)node + 0x40) = 0;
            fn_800506E0(*(void **)((u8 *)node + 0x30), 0);
            obj = fn_800639B4();
            count = 0;
            temp_r7 = *(void **)((u8 *)node + 0x34);
            temp_r4 = *(void **)((u8 *)temp_r7 + 0x44);
            if (temp_r4 != NULL) {
                temp_f3 = (f32)*(s32 *)((u8 *)temp_r4 + 0x14);
                count = (s32)fn_80059F64((f32)*(s32 *)((u8 *)obj + 0x14), (f32)*(s32 *)((u8 *)obj + 0x18), (f32)*(s32 *)((u8 *)temp_r4 + 0x18) - temp_f3, *(f32 *)((u8 *)temp_r7 + 0x58) - temp_f3);
            }
            fn_8005FC74(*(void **)((u8 *)node + 0x34), obj, 1);
            fn_8005FEE8(*(void **)((u8 *)node + 0x34), (f32)count);
            fn_8004FE90(*(void **)((u8 *)node + 0x30), (u8)*(s32 *)((u8 *)node + 0x38));
        }
    }
}
#pragma optimization_level 4
#pragma opt_strength_reduction on

void fn_8018820C(void *arg0) {
    M2C_UNK fn_80050C50(s32, f32, f32);
    f32 fn_8005A028(M2C_UNK, f32, f32, f32, f32, f32);
    extern f32 lbl_8036ACD8;
    extern f32 lbl_8036AD0C;
    f32 temp_f1;
    f32 temp_f31;
    void *temp_r31;

    temp_r31 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 1);
    temp_f31 = fn_8005A028(2, lbl_8036ACD8 + (f32) (s8) M2C_FIELD(temp_r31, u8 *, 0x38), lbl_8036ACD8 + (f32) (s8) M2C_FIELD(temp_r31, u8 *, 0x3A), lbl_8036AD0C, (f32) M2C_FIELD(arg0, s32 *, 0x60), lbl_8036ACD8);
    temp_f1 = fn_8005A028(2, lbl_8036ACD8 + (f32) (s8) M2C_FIELD(temp_r31, u8 *, 0x39), lbl_8036ACD8 + (f32) (s8) M2C_FIELD(temp_r31, u8 *, 0x3B), lbl_8036AD0C, (f32) M2C_FIELD(arg0, s32 *, 0x60), lbl_8036ACD8);
    fn_80050C50(M2C_FIELD(temp_r31, s32 *, 0x34), temp_f31, temp_f1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) >= 8) {
        fn_8000C188(arg0);
    }
}

#pragma use_lmw_stmw on
void fn_8018851C(void *arg0) {
f32 fn_80023430(void *,f32,f32); f32 fn_80059F64(f32,f32,f32,f32);
extern u8 lbl_802CA518[]; extern f32 lbl_8036ACD8,lbl_8036ACEC;
u8 *self=arg0;
PathHeightPoint *point; PathHeightPoint *anchor; u8 *dir;
s32 i; s32 x,y,count; f32 delta,offset,zero;
if(*(u16 *)(self+0x52)&0x8000) {
f32 *pos=*(f32 **)(self+0x30);
{ PathHeightPoint *initial=*(PathHeightPoint **)(self+0x6C); point=initial; anchor=initial; }
dir=*(u8 **)(self+0x54); x=(s32)pos[1]; y=(s32)pos[2]; offset=lbl_8036ACD8; zero=lbl_8036ACEC;
for(count=0;count<128;count++,dir++,point++) {
point->rawHeight=fn_80023430(lbl_802CA518,offset+(f32)x,offset+(f32)y);
point->index=count; point->height=point->rawHeight;
delta=point->height-anchor->height;
if(delta<zero) {
s32 off; PathHeightPoint *sample;
for(i=anchor->index+1,off=i*12;i<point->index;off+=12,i++) {
sample=(PathHeightPoint *)((u8 *)*(PathHeightPoint **)(self+0x6C)+off);
sample->height=fn_80059F64(anchor->height,point->height,(f32)(point->index-anchor->index),(f32)(sample->index-anchor->index));
} anchor=point;
}
if(delta>zero) {
if(*dir==16) {
s32 off; PathHeightPoint *sample;
for(i=point->index;i>=anchor->index;i--) {
sample=*(PathHeightPoint **)(self+0x6C)+i;
if(point->rawHeight>sample->rawHeight) {anchor=sample;break;}
}
for(i=anchor->index+1,off=i*12;i<point->index;off+=12,i++) {
sample=(PathHeightPoint *)((u8 *)*(PathHeightPoint **)(self+0x6C)+off);
sample->height=fn_80059F64(anchor->height,point->height,(f32)(point->index-anchor->index),(f32)(sample->index-anchor->index));
}
} else point->height=anchor->height;
}
if(*dir==16) break;
switch(*dir) {case 8:y--;break;case 4:y++;break;case 1:x--;break;case 2:x++;break;}
}
}
}

void fn_80188820(void *arg0) {
    s32 fn_802342B8(void *, void *);
    s32 fn_800056CC(const char *, ...);
    s8 fn_80147578(void *, s32, f32, f32, f32);
    extern u8 lbl_80278E24[];
    void *ent;
    void *str;
    void *parent;
    f32 f31;
    f32 f30;
    f32 f29;

    str = NULL;
    parent = *(void **)((u8 *)arg0 + 0x30);
    ent = *(void **)((u8 *)parent + 0x18C);
    if (*(u8 *)((u8 *)ent + 0x42) == 9) {
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x3AB) == 0) {
            str = lbl_80278E24 + 0x393;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x3BF) == 0) {
            str = lbl_80278E24 + 0x393;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x3D2) == 0) {
            str = lbl_80278E24 + 0x393;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x3FF) == 0) {
            str = lbl_80278E24 + 0x3E7;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x410) == 0) {
            str = lbl_80278E24 + 0x3E7;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x423) == 0) {
            str = lbl_80278E24 + 0x3E7;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x434) == 0) {
            str = lbl_80278E24 + 0x3E7;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x312) == 0) {
            str = lbl_80278E24 + 0x447;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x332) == 0) {
            str = lbl_80278E24 + 0x447;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x33E) == 0) {
            str = lbl_80278E24 + 0x447;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x2E7) == 0) {
            str = lbl_80278E24 + 0x45F;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x305) == 0) {
            str = lbl_80278E24 + 0x45F;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x2BC) == 0) {
            str = lbl_80278E24 + 0x477;
        }
        if (fn_802342B8(*(void **)ent, lbl_80278E24 + 0x2DA) == 0) {
            str = lbl_80278E24 + 0x477;
        }
        parent = *(void **)((u8 *)arg0 + 0x30);
        if (fn_802342B8(**(void ***)((u8 *)parent + 0x188), lbl_80278E24 + 0x4A7) == 0) {
            str = lbl_80278E24 + 0x48F;
        }
        if (str != NULL) {
            parent = *(void **)((u8 *)arg0 + 0x30);
            f31 = *(f32 *)((u8 *)parent + 4);
            f30 = *(f32 *)((u8 *)parent + 8);
            f29 = *(f32 *)((u8 *)parent + 0xC);
            fn_800056CC((char *)(lbl_80278E24 + 0x4B3), str);
            *(s8 *)((u8 *)arg0 + 0x6A) = fn_80147578(str, 0x64, f31, f30, f29);
        }
    }
}

void fn_80188EF4(void *arg0) {
    void fn_8000C188(void);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005F7B0(void *, u8);
    extern f32 lbl_8036ACF8;
    extern f64 lbl_8036AD10;
    void *ptr;
    void *self;

    self = arg0;
    *(f32 *)((char *)self + 0x3C) = lbl_8036ACF8 + *(f32 *)((char *)self + 0x3C);
    if (*(f32 *)((char *)self + 0x3C) >= *(f32 *)((char *)self + 0x38)) {
        *(f32 *)((char *)self + 0x3C) = *(f32 *)((char *)self + 0x38);
        fn_8000C188();
    }
    ptr = (void *)(*(s32 *)((char *)self + 0x30) + 0x1C);
    fn_8005F7B0(ptr, (u8)(s32)fn_80059F64((f32)*(u8 *)((char *)self + 0x50),
        (f32)*(u8 *)((char *)self + 0x51),
        *(f32 *)((char *)self + 0x38),
        *(f32 *)((char *)self + 0x3C)));
}

#pragma global_optimizer off
void fn_8018931C(void *arg0, f32 scaleArg) {
    void fn_8000C188(void *);
    void fn_80050BCC(void *, s32);
    f32 fn_80059F64(f32,f32,f32,f32);
    void fn_8014CAD4(void *,f32,f32);
    extern u8 lbl_80330708[];
    extern u8 lbl_803301A8[];
    extern void *lbl_80367240;
    extern f32 lbl_8036AD18, lbl_8036ACF8, lbl_8036AD08, lbl_8036AD1C, lbl_8036ACD8;
    f32 duration;
 
 
 
 f32 step;
 f32 scale; f64 dy,dx; f32 minimum; f32 distance;
    u8 fast;
    u32 flags;
    u8 index;
    u8 *p;
    duration=M2C_FIELD(arg0,f32 *,0x38);
    flags=M2C_FIELD(lbl_80367240,u32 *,4);
    if(M2C_FIELD(arg0,u16 *,0x52)&0x80) fast=0;
    else if((((u32)lbl_80330708[0x9C]>>5U)&1U)==1U) fast=1;
    else if(lbl_80330708[0x57]>=2 && (flags&0x100)) fast=1;
    else fast=0;
    if(fast) {
        step=duration*lbl_8036AD18;
 if(step<lbl_8036ACF8) step=lbl_8036ACF8;
        M2C_FIELD(M2C_FIELD(arg0,void **,0x34),f32 *,0x5C)=lbl_8036AD08;
    } else {
        M2C_FIELD(M2C_FIELD(arg0,void **,0x34),f32 *,0x5C)=step=lbl_8036ACF8;
    }
    if(M2C_FIELD(arg0,u16 *,0x52)&0x8000) {
        scaleArg=lbl_8036AD1C*(f32)__fabs(M2C_FIELD(arg0,f32 *,0x48)-M2C_FIELD(arg0,f32 *,0x44));
 if(scaleArg<lbl_8036ACF8) scaleArg=lbl_8036ACF8;
        duration=(s32)(duration*scaleArg);
    }
    M2C_FIELD(arg0,f32 *,0x3C)+=step;
    if(M2C_FIELD(arg0,f32 *,0x3C)>=duration) {
        M2C_FIELD(arg0,f32 *,0x3C)=duration;
        M2C_FIELD(arg0,u8 *,0x58)++;
        fn_8000C188(arg0);
    }
    {
    f32 x=fn_80059F64(lbl_8036ACD8+(f32)(s8)M2C_FIELD(arg0,u8 *,0x40),lbl_8036ACD8+(f32)(s8)M2C_FIELD(arg0,u8 *,0x42),duration,M2C_FIELD(arg0,f32 *,0x3C));
    f32 y;
    f32 z;
    y=fn_80059F64(lbl_8036ACD8+(f32)(s8)M2C_FIELD(arg0,u8 *,0x41),lbl_8036ACD8+(f32)(s8)M2C_FIELD(arg0,u8 *,0x43),duration,M2C_FIELD(arg0,f32 *,0x3C));
    z=fn_80059F64(M2C_FIELD(arg0,f32 *,0x44),M2C_FIELD(arg0,f32 *,0x48),duration,M2C_FIELD(arg0,f32 *,0x3C));
    p=M2C_FIELD(arg0,u8 **,0x30);
    dy=__fabs(y-M2C_FIELD(p,f32 *,8));
 dx=__fabs(x-M2C_FIELD(p,f32 *,4));
 M2C_FIELD(arg0,f32 *,0x4C)=M2C_FIELD(arg0,f32 *,0x4C)+((f32)dx+(f32)dy);
    M2C_FIELD(M2C_FIELD(arg0,void **,0x30),f32 *,4)=x;
    M2C_FIELD(M2C_FIELD(arg0,void **,0x30),f32 *,8)=y;
    M2C_FIELD(M2C_FIELD(arg0,void **,0x30),f32 *,12)=z;
    if(M2C_FIELD(arg0,u16 *,0x52)&0x40) {
        *(f32 *)(lbl_80330708+0x524)=x;
        *(f32 *)(lbl_80330708+0x528)=y;
        fn_8014CAD4(lbl_80330708,x,y);
        *(f32 *)(lbl_80330708+0x534)=x;
        *(f32 *)(lbl_80330708+0x538)=y;
    }
    fn_80050BCC(M2C_FIELD(arg0,void **,0x30),(s32)fn_80059F64((f32)M2C_FIELD(arg0,u8 *,0x50),(f32)M2C_FIELD(arg0,u8 *,0x51),duration,M2C_FIELD(arg0,f32 *,0x3C)));
    index=M2C_FIELD(arg0,u8 *,0x6A);
    if((s8)index!=-1) {
        p=lbl_803301A8+index*0x30;
        M2C_FIELD(p,f32 *,0x1C)=x; M2C_FIELD(p,f32 *,0x20)=y; M2C_FIELD(p,f32 *,0x24)=z;
        p[12]|=2;
    }
}
}
#pragma global_optimizer reset
void fn_8018A7E4(void *arg0) {
    extern f32 lbl_8036ACEC;
    u8 *ptr;
    f32 value;

    ptr = *(u8 **)((u8 *)arg0 + 0x30);
    value = lbl_8036ACEC;

    *(f32 *)(ptr + 0x10) = value;
    *(f32 *)(ptr + 0x14) = value;
    *(f32 *)(ptr + 0x18) = value;
}

void fn_8018A7FC(void *arg0) {
    extern f32 lbl_8036ACEC;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(f32 *)((u8 *)arg0 + 0x54) = *(f32 *)((u8 *)arg0 + 0x4C);
    *(f32 *)((u8 *)arg0 + 0x58) = *(f32 *)((u8 *)arg0 + 0x50);
    *(f32 *)((u8 *)arg0 + 0x4C) = lbl_8036ACEC;
    *(f32 *)((u8 *)arg0 + 0x50) = lbl_8036ACEC;
}

void fn_8018A824(void *arg0) {
    s32 temp_r4;
    s32 temp_r3;
    f32 temp_f1;
    f32 temp_f31;
    
    if ((u8) *(u8*)((char*)arg0 + 0x64) != 0) {
        *(s32*)((char*)arg0 + 0x34) = *(s32*)((char*)arg0 + 0x34) + 1;
    }
    *(s32*)((char*)arg0 + 0x34) = *(s32*)((char*)arg0 + 0x34) + 1;
    if (*(s32*)((char*)arg0 + 0x34) >= 0xA) {
        *(s32*)((char*)arg0 + 0x34) = 0xA;
        fn_8000C188(arg0);
    }
    
    temp_r4 = *(s32*)((char*)arg0 + 0x34);
    temp_f31 = fn_8005A028(2, temp_r4, *(f32*)((char*)arg0 + 0x54), *(f32*)((char*)arg0 + 0x4C), 10.0f, (f32)temp_r4);
    temp_f1 = fn_8005A028(2, (s32)*(u16*)((char*)arg0 + 0x58), *(f32*)((char*)arg0 + 0x50), 10.0f, (f32)temp_r4);
    
    temp_r3 = *(s32*)((char*)arg0 + 0x30);
    *(f32*)((char*)temp_r3 + 0x10) = temp_f31;
    *(f32*)((char*)temp_r3 + 0x14) = temp_f1;
    *(f32*)((char*)temp_r3 + 0x18) = 0.0f;
}

#pragma cplusplus off
void fn_8018A91C(void *arg0, f32 angle) {
    void fn_80203320(void *,void *,f32);
    void fn_80203604(void *,void *,void *,f32);
    void fn_80202640(void *,void *);
    void fn_802029C4(void *,void *,void *);
    f32 fn_80023430(void *,f32,f32);
    extern u8 lbl_80278D70[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    extern const f32 lbl_8036ACD8,lbl_8036ACEC,lbl_8036AD2C,lbl_8036AD30,lbl_8036AD34,lbl_8036AD38;
    f32 matrix[12];
    u32 angles[4];
    f32 q1[4],q2[4],qout[4];
    u32 axis[3],vec[3];
    u8 *self = arg0;
    u8 *data = lbl_80278D70;
    f32 angle2;
    s32 from,to;
    f32 minusX,minusY,dx,x,dy,y,plusX,plusY,h1,h2,d1,d2,height;
    u8 id;
    void *unit;
    *(f32 *)(self+0x40)=*(f32 *)(*(u8 **)(self+0x30)+4);
    *(f32 *)(self+0x44)=*(f32 *)(*(u8 **)(self+0x30)+8);
    *(f32 *)(self+0x48)=*(f32 *)(*(u8 **)(self+0x30)+12);
    *(u32 *)(self+0x34)=0;
    from=*(s32 *)(self+0x38);
    angles[0]=*(u32 *)(data+0x8C);angles[1]=*(u32 *)(data+0x90);angles[2]=*(u32 *)(data+0x94);angles[3]=*(u32 *)(data+0x98);
    switch(from) {case 1:angle=*(f32 *)&angles[0];break;case 2:angle=*(f32 *)&angles[1];break;case 8:angle=*(f32 *)&angles[2];break;case 4:angle=*(f32 *)&angles[3];break;}
    to=*(s32 *)(self+0x3C);
    switch(to) {case 1:angle2=*(f32 *)&angles[0];break;case 2:angle2=*(f32 *)&angles[1];break;case 8:angle2=*(f32 *)&angles[2];break;case 4:angle2=*(f32 *)&angles[3];break;}
    if(from==to) angle2+=lbl_8036AD2C;
    axis[0]=*(u32 *)(data+0x9C);axis[1]=*(u32 *)(data+0xA0);axis[2]=*(u32 *)(data+0xA4);
    fn_80203320(q1,axis,lbl_8036AD30*angle);
    fn_80203320(q2,axis,lbl_8036AD30*angle2);
    fn_80203604(q1,q2,qout,lbl_8036ACD8);
    fn_80202640(matrix,qout);
    vec[0]=*(u32 *)(data+0xA8);vec[1]=*(u32 *)(data+0xAC);vec[2]=*(u32 *)(data+0xB0);
    fn_802029C4(matrix,vec,vec);
    *(f32 *)(self+0x5C)=lbl_8036AD34* *(f32 *)&vec[0];
    *(f32 *)(self+0x60)=lbl_8036AD34* *(f32 *)&vec[1];
    x=*(f32 *)(self+0x40);dx=*(f32 *)(self+0x5C);minusX=x-dx;
    if(minusX>=lbl_8036ACEC) {
        y=*(f32 *)(self+0x44);dy=*(f32 *)(self+0x60);minusY=y-dy;
        if(minusY>=lbl_8036ACEC && minusX<(f32)*(s32 *)lbl_802CA518 && minusY<(f32)*(s32 *)(lbl_802CA518+4)) {
            plusX=x+dx;
            if(plusX<lbl_8036ACEC || (plusY=y+dy)<lbl_8036ACEC || plusX>=(f32)*(s32 *)lbl_802CA518 || plusY>=(f32)*(s32 *)(lbl_802CA518+4)) {
                *(f32 *)(self+0x5C)*=lbl_8036AD34;
                *(f32 *)(self+0x60)*=lbl_8036AD34;
            } else {
                id=*(u8 *)(lbl_802CA518+(s8)plusX+((s8)plusY<<6)+0xD);
                if(id) unit=lbl_802B14E4+(id-1)*0x280;
                else unit=0;
                if(unit) {
                    *(f32 *)(self+0x5C)*=lbl_8036AD34;
                    *(f32 *)(self+0x60)*=lbl_8036AD34;
                }
                h1=fn_80023430(lbl_802CA518,*(f32 *)(self+0x40)+*(f32 *)(self+0x5C),*(f32 *)(self+0x44)+*(f32 *)(self+0x60));
                h2=fn_80023430(lbl_802CA518,*(f32 *)(self+0x40)-*(f32 *)(self+0x5C),*(f32 *)(self+0x44)-*(f32 *)(self+0x60));
                height=*(f32 *)(self+0x48);
                h1=height-h1;
                h2=height-h2;
                h1 *= h1;
                h2 *= h2;
                if(h1>h2) {
                    *(f32 *)(self+0x5C)*=lbl_8036AD34;
                    *(f32 *)(self+0x60)*=lbl_8036AD34;
                }
            }
        }
    }
    *(f32 *)(self+0x54)=lbl_8036ACEC;*(f32 *)(self+0x58)=lbl_8036ACEC;
    *(f32 *)(self+0x4C)=lbl_8036AD38* *(f32 *)(self+0x5C);
    *(f32 *)(self+0x50)=lbl_8036AD38* *(f32 *)(self+0x60);
}
void fn_8018AD1C(void *arg0) {
    u32 fn_80057F04(s32, void *, void *, void *);
    void fn_800588EC(s32);
    void fn_80058970(void *, void *);
    u8 fn_8005F9B8(void *, s32);
    extern u8 lbl_80278E24[];
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r31;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30) + 0x1C;
    if (fn_8005F9B8((void *)temp_r31, 0x14) != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
            fn_800588EC(M2C_FIELD(arg0, s32 *, 0x38));
        }
        M2C_FIELD(arg0, u32 *, 0x38) = fn_80057F04(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, lbl_80278E24 + 0x4D3, lbl_80278E24 + 0x4D7, arg0);
        sp20 = M2C_FIELD(arg0, s32 *, 0x34);
        fn_80058970((void *)M2C_FIELD(arg0, u32 *, 0x38), &sp20);
    }
    if (fn_8005F9B8((void *)temp_r31, 0x15) != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
            fn_800588EC(M2C_FIELD(arg0, s32 *, 0x38));
        }
        M2C_FIELD(arg0, u32 *, 0x38) = fn_80057F04(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, lbl_80278E24 + 0x4DB, lbl_80278E24 + 0x4DF, arg0);
        sp1C = M2C_FIELD(arg0, s32 *, 0x34);
        fn_80058970((void *)M2C_FIELD(arg0, u32 *, 0x38), &sp1C);
    }
    if (fn_8005F9B8((void *)temp_r31, 0x16) != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
            fn_800588EC(M2C_FIELD(arg0, s32 *, 0x38));
        }
        M2C_FIELD(arg0, u32 *, 0x38) = fn_80057F04(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, lbl_80278E24 + 0x4E3, lbl_80278E24 + 0x4E7, arg0);
        sp18 = M2C_FIELD(arg0, s32 *, 0x34);
        fn_80058970((void *)M2C_FIELD(arg0, u32 *, 0x38), &sp18);
    }
    if (fn_8005F9B8((void *)temp_r31, 0x17) != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
            fn_800588EC(M2C_FIELD(arg0, s32 *, 0x38));
        }
        M2C_FIELD(arg0, u32 *, 0x38) = fn_80057F04(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, lbl_80278E24 + 0x4EB, lbl_80278E24 + 0x4EF, arg0);
        sp14 = M2C_FIELD(arg0, s32 *, 0x34);
        fn_80058970((void *)M2C_FIELD(arg0, u32 *, 0x38), &sp14);
    }
    if (fn_8005F9B8((void *)temp_r31, 0x18) != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
            fn_800588EC(M2C_FIELD(arg0, s32 *, 0x38));
        }
        M2C_FIELD(arg0, u32 *, 0x38) = fn_80057F04(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, lbl_80278E24 + 0x4F3, lbl_80278E24 + 0x4F7, arg0);
        sp10 = M2C_FIELD(arg0, s32 *, 0x34);
        fn_80058970((void *)M2C_FIELD(arg0, u32 *, 0x38), &sp10);
    }
    if (fn_8005F9B8((void *)temp_r31, 0x1A) != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
            fn_800588EC(M2C_FIELD(arg0, s32 *, 0x38));
        }
        M2C_FIELD(arg0, u32 *, 0x38) = fn_80057F04(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, lbl_80278E24 + 0x4FB, lbl_80278E24 + 0x4FF, arg0);
        spC = M2C_FIELD(arg0, s32 *, 0x34);
        fn_80058970((void *)M2C_FIELD(arg0, u32 *, 0x38), &spC);
    }
    if (fn_8005F9B8((void *)temp_r31, 0x1B) != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
            fn_800588EC(M2C_FIELD(arg0, s32 *, 0x38));
        }
        M2C_FIELD(arg0, u32 *, 0x38) = fn_80057F04(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, lbl_80278E24 + 0x503, lbl_80278E24 + 0x507, arg0);
        sp8 = M2C_FIELD(arg0, s32 *, 0x34);
        fn_80058970((void *)M2C_FIELD(arg0, u32 *, 0x38), &sp8);
    }
    if (fn_8005F9B8((void *)temp_r31, 0x19) != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x38) != 0) {
            fn_800588EC(M2C_FIELD(arg0, s32 *, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0;
        }
    }
}

void fn_8018B004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}

void fn_8018B010(void *arg0) {
    void *temp_r3;

    fn_80050BCC(M2C_FIELD(arg0, void **, 0x30), 0xFF);
    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(temp_r3, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x44);
    M2C_FIELD(temp_r3, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0x48);
}

void fn_8018B060(void *arg0) {
    void fn_8000C188(void);
    void fn_80050BCC(void *, s32);
    f32 fn_80059F64(f32, f32, f32, f32);
    f32 fn_80059F78(s32, f32, f32, f32, f32);
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    extern f64 lbl_8036ACE0;
    extern f32 lbl_8036ACD8;
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036AD00;
    extern f32 lbl_8036AD3C;

    void *self;
    s32 t;
    f32 f31;
    f32 f29;
    f32 f30;
    f32 half;
    void *obj;
    u32 temp;

    self = arg0;
    temp = *(s32 *)((u8 *)arg0 + 0x50);
    *(s32 *)((u8 *)arg0 + 0x50) = temp + 1;
    temp = *(s32 *)((u8 *)arg0 + 0x50);
    if ((s32)temp >= *(s32 *)((u8 *)arg0 + 0x54)) {
        *(s32 *)((u8 *)self + 0x50) = *(s32 *)((u8 *)arg0 + 0x54);
        fn_8000C188();
    }
    t = (s32)fn_80059F78(2, lbl_8036ACEC, lbl_8036AD00,
                         (f32)*(s32 *)((u8 *)self + 0x54),
                         (f32)*(s32 *)((u8 *)self + 0x50));
    f31 = fn_80059F64(*(f32 *)((u8 *)self + 0x34), *(f32 *)((u8 *)self + 0x40),
                      (f32)*(s32 *)((u8 *)self + 0x54), (f32)*(s32 *)((u8 *)self + 0x50));
    f29 = fn_80059F64(*(f32 *)((u8 *)self + 0x38), *(f32 *)((u8 *)self + 0x44),
                      (f32)*(s32 *)((u8 *)self + 0x54), (f32)*(s32 *)((u8 *)self + 0x50));
    f30 = fn_80059F64(*(f32 *)((u8 *)self + 0x3C), *(f32 *)((u8 *)self + 0x48),
                      (f32)*(s32 *)((u8 *)self + 0x54), (f32)*(s32 *)((u8 *)self + 0x50));
    half = lbl_8036ACD8 * (f32)*(s32 *)((u8 *)self + 0x54);
    temp = *(s32 *)((u8 *)self + 0x50);
    if ((f32)(s32)temp < half) {
        f30 += fn_8005A028(2, lbl_8036ACEC, lbl_8036AD3C, half, (f32)(s32)temp);
    } else {
        f30 += fn_80059F78(2, lbl_8036AD3C, lbl_8036ACEC, half, (f32)(s32)temp - half);
    }
    fn_80050BCC(*(void **)((u8 *)self + 0x30), t);
    obj = *(void **)((u8 *)self + 0x30);
    *(f32 *)((u8 *)obj + 4) = f31;
    *(f32 *)((u8 *)obj + 8) = f29;
    *(f32 *)((u8 *)obj + 0xC) = f30;
}

void fn_8018B2C4(void *arg0) {
    M2C_UNK fn_80050BCC(s32, M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x10;
    fn_80050BCC(M2C_FIELD(arg0, s32 *, 0x30), 0);
}

void fn_8018B2FC(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(temp_r4, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(temp_r4, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(temp_r4, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
}

void fn_8018B31C(void *arg0) {
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF8;
    extern f32 lbl_8036AD40;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f1;

    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + lbl_8036ACF8);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x48);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x44) * temp_f3;
    
    {
        void *temp_r4 = M2C_FIELD(arg0, void **, 0x30);
        f32 temp_f2 = M2C_FIELD(temp_r4, f32 *, 0xC);
        var_f1 = temp_f2 - (temp_f4 - (temp_f1 * temp_f3));
    }
    
    if (var_f1 > M2C_FIELD(arg0, f32 *, 0x3C)) {
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f4 * M2C_FIELD(arg0, f32 *, 0x4C));
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_8036ACEC;
        var_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0xC) = var_f1;
    if (M2C_FIELD(arg0, f32 *, 0x40) < lbl_8036AD40) {
        fn_8000C188();
    }
}

void fn_8018B3AC(void *arg0) {
    extern f32 lbl_8036ACEC;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_8036ACEC;
}

void fn_8018B3DC(void *arg0) {
    M2C_UNK fn_8005F7B0(s32, u8);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30) + 0x1C;
    fn_8005F7E0(temp_r31, M2C_FIELD(arg0, u8 *, 0x38), M2C_FIELD(arg0, u8 *, 0x39), M2C_FIELD(arg0, u8 *, 0x3A));
    fn_8005F7B0(temp_r31, M2C_FIELD(arg0, u8 *, 0x3B));
}

void fn_8018B434(void *arg0) {
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005F7E0(void *, u8, u8, u8);
    void fn_8005F7B0(void *, u8);
    void fn_8000C188(void *);

    u8 sp8[4];
    void *base;
    void *obj;
    f32 f_from;
    f32 f_to;

    *(s32 *)((u8 *)arg0 + 0x40) += 1;
    f_from = (f32)*(u8 *)((u8 *)arg0 + 0x34);
    f_to = (f32)*(u8 *)((u8 *)arg0 + 0x38);
    obj = *(void **)((u8 *)arg0 + 0x30);
    *(s32 *)sp8 = *(s32 *)((u8 *)obj + 0x24);
    base = (u8 *)obj + 0x1C;
    sp8[0] = (u8)(s32)fn_80059F64(f_from, f_to, (f32)*(s32 *)((u8 *)arg0 + 0x3C), (f32)*(s32 *)((u8 *)arg0 + 0x40));
    sp8[1] = (u8)(s32)fn_80059F64((f32)*(u8 *)((u8 *)arg0 + 0x35), (f32)*(u8 *)((u8 *)arg0 + 0x39), (f32)*(s32 *)((u8 *)arg0 + 0x3C), (f32)*(s32 *)((u8 *)arg0 + 0x40));
    sp8[2] = (u8)(s32)fn_80059F64((f32)*(u8 *)((u8 *)arg0 + 0x36), (f32)*(u8 *)((u8 *)arg0 + 0x3A), (f32)*(s32 *)((u8 *)arg0 + 0x3C), (f32)*(s32 *)((u8 *)arg0 + 0x40));
    sp8[3] = (u8)(s32)fn_80059F64((f32)*(u8 *)((u8 *)arg0 + 0x37), (f32)*(u8 *)((u8 *)arg0 + 0x3B), (f32)*(s32 *)((u8 *)arg0 + 0x3C), (f32)*(s32 *)((u8 *)arg0 + 0x40));
    fn_8005F7E0(base, sp8[0], sp8[1], sp8[2]);
    fn_8005F7B0(base, sp8[3]);
    if (*(s32 *)((u8 *)arg0 + 0x40) >= *(s32 *)((u8 *)arg0 + 0x3C)) {
        fn_8000C188(arg0);
    }
}

void fn_8018B698(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

void fn_8018B6A4(void *arg0) {
    M2C_UNK fn_8005F7E0(s32, u8, u8, u8);
    fn_8005F7E0(M2C_FIELD(arg0, s32 *, 0x30) + 0x1C, M2C_FIELD(arg0, u8 *, 0x34), M2C_FIELD(arg0, u8 *, 0x35), M2C_FIELD(arg0, u8 *, 0x36));
}

void fn_8018B6DC(void *arg0) {
    f32 fn_80059EB8(s32, s32, f32, f32);
    f32 fn_80059F64(u8, f32, f32, f32, f32);
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036AD44;
    f32 temp_f1;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r4;
    u8 temp_r4_2;
    u8 temp_r4_3;
    u8 temp_r4_4;

    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30) + 0x1C;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x40);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x44) >= temp_r4) {
        M2C_FIELD(arg0, s32 *, 0x44) = temp_r4;
        fn_8000C188();
    }
    temp_f1 = fn_80059EB8(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x44), lbl_8036ACEC, lbl_8036AD44);
    temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x34);
    temp_r4_3 = M2C_FIELD(arg0, u8 *, 0x35);
    temp_r30 = (s32) fn_80059F64(temp_r4_2, (f32) temp_r4_2, (f32) M2C_FIELD(arg0, u8 *, 0x38), lbl_8036AD44, temp_f1);
    temp_r4_4 = M2C_FIELD(arg0, u8 *, 0x36);
    temp_r29 = (s32) fn_80059F64(temp_r4_3, (f32) temp_r4_3, (f32) M2C_FIELD(arg0, u8 *, 0x39), lbl_8036AD44, temp_f1);
    fn_8005F7E0(temp_r31, (u8) temp_r30, (u8) temp_r29, (u8) (s32) fn_80059F64(temp_r4_4, (f32) temp_r4_4, (f32) M2C_FIELD(arg0, u8 *, 0x3A), lbl_8036AD44, temp_f1));
}

void fn_8018B854(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x30);
    M2C_FIELD(arg0, u8 *, 0x34) = (u8) M2C_FIELD(temp_r5, u8 *, 0x24);
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) M2C_FIELD(temp_r5, u8 *, 0x25);
    M2C_FIELD(arg0, u8 *, 0x36) = (u8) M2C_FIELD(temp_r5, u8 *, 0x26);
    M2C_FIELD(arg0, u8 *, 0x37) = (u8) M2C_FIELD(temp_r5, u8 *, 0x27);
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}

void fn_8018B884(void *arg0) {
    extern f32 lbl_8036ACEC;
    u8 *ptr;
    f32 value;

    ptr = *(u8 **)((u8 *)arg0 + 0x30);
    value = lbl_8036ACEC;

    *(f32 *)(ptr + 0x10) = value;
    *(f32 *)(ptr + 0x14) = value;
    *(f32 *)(ptr + 0x18) = value;
}

void fn_8018B920(void *arg0) {
    extern f32 lbl_8036ACEC;
    *(s32 *)((char *)arg0 + 0x40) = 0;
    *(f32 *)((char *)arg0 + 0x44) = lbl_8036ACEC;
}

#pragma fp_contract on
void fn_8018B934(void *arg0) {
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_8036ACE8;
    extern f32 lbl_8036AD48;
    f32 ad48;
    f32 ace8;
    f32 temp_f1;
    void *temp_r4;

    M2C_FIELD(arg0, s32 *, 0x3C) = M2C_FIELD(arg0, s32 *, 0x3C) + 1;
    temp_f1 = fn_8005A028(2, M2C_FIELD(arg0, f32 *, 0x40), M2C_FIELD(arg0, f32 *, 0x44), (f32) M2C_FIELD(arg0, s32 *, 0x38), (f32) M2C_FIELD(arg0, s32 *, 0x3C));
    ad48 = lbl_8036AD48;
    ace8 = lbl_8036ACE8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 0x15C) = (s16) (ace8 * (temp_f1 - ad48 * (f32) (s32) (temp_f1 / ad48)));
    if (M2C_FIELD(arg0, s32 *, 0x3C) == M2C_FIELD(arg0, s32 *, 0x38)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(temp_r4, s16 *, 0x15C) = (s16) (ace8 * M2C_FIELD(arg0, f32 *, 0x34));
        fn_8000C188(arg0);
    }
}
#pragma fp_contract reset
void fn_8018BA34(void *arg0) {
    extern f32 lbl_8036ACE8;
    extern f32 lbl_8036AD2C;
    extern f32 lbl_8036AD48;
    f32 temp_f2;
    f32 temp_f3;

    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s16 *, 0x15C) / lbl_8036ACE8);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x44);
    if ((f32) fabs(temp_f3 - temp_f2) > lbl_8036AD2C) {
        if (temp_f3 < temp_f2) {
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f3 + lbl_8036AD48);
        } else if (temp_f3 > temp_f2) {
            M2C_FIELD(arg0, f32 *, 0x44) = (f32) (temp_f2 + lbl_8036AD48);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
}

void fn_8018BAC8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    StructEF0C *temp_r31;
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r3;
    u16 temp_r4;
    u16 temp_r5;
    u16 temp_r6;
    
    // First, get the struct member at offset 0x20, and check if it's a valid pointer
    temp_r31 = (StructEF0C *)M2C_FIELD(arg0, void **, 0x20);
    if (!temp_r31) {
        return;
    }

    // Adjust for bitshifting and load parameter values.
    if (arg1 < 0x100) {
        temp_r4 = *(u16 *)0x8036719C;
    } else {
        temp_r4 = *(u16 *)0x8036719E;
    }
    
    temp_r5 = temp_r4 & 0x1F;
    temp_r6 = ((arg2 & 0x1F) >> temp_r5);
    if (temp_r6 != 0) {
        return;
    }

    // Call an external function
    fn_8005B760(0);

    // Call to external method  
    M2C_FIELD(temp_r31, void (**)(void *), 0x4A0)(arg0);
    
    temp_r3 = (s32)M2C_FIELD(arg0, void **, 0x94);
    if (!temp_r3) {
        return;
    }

    // Load an array element into the loop variable
    temp_r31 = (StructEF0C *)M2C_FIELD((void**)temp_r3, void **, arg1 * 0xA + 0x10);
    if (!temp_r31) {
        return;
    }

    // Extract and process a field value 
    temp_r29 = M2C_FIELD(temp_r31, s32 *, 0x84);
    temp_r28 = M2C_FIELD(temp_r31, s32 *, 0x88);

    if (temp_r28 == 0) {
        return;
    }

    // Perform a division
    temp_r30 = (temp_r29 - temp_r28) / temp_r28;

    // Load and check another field value
    if ((u16)M2C_FIELD(temp_r31, u16 *, 0x1A0) >= temp_r30) {
        temp_r31 = (StructEF0C *)M2C_FIELD(arg0, void **, 0x1C);
        if (!temp_r31) {
            return;
        }
        
        temp_r31 = (StructEF0C *)M2C_FIELD(temp_r31, void **, 0x48);
        if (!temp_r31) {
            return;
        }

        // Another field check and a call
        if ((u16)M2C_FIELD(temp_r31, u16 *, 0x5A) == 1) {
            fn_8005B760(0);
            M2C_FIELD(temp_r31, void (**)(void *), 0x50)(arg0);
            return;
        }
    }

    // Final call 
    temp_r31 = (StructEF0C *)M2C_FIELD((void**)temp_r3, void **, arg1*0xA + 0x24);
    fn_8005B760(0);

    M2C_FIELD(temp_r31, void (**)(void *), 0x294)(arg0);
}

void fn_8018BC28(void) {
    // Placeholder implementation for now.
}

void fn_8018C680(void *arg0) {
    s32 fn_800A8A88(s32);
    extern u16 lbl_80278E24;
    void fn_800056CC(void *, s32, void *);
    
    void **var_r3 = (void **)M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), s32 *, 0x188);
    var_r3 = (void **)fn_800A8A88((s32)var_r3);
    
    #pragma opt_common_subs off
    fn_800056CC(&lbl_80278E24 + 0x97B, (s32)var_r3, &lbl_80278E24);
    #pragma opt_common_subs reset
}

#pragma opt_strength_reduction off
void fn_8018C6C0(void *arg0) {
    void fn_8000A388(void *, void *, void *);
    void *fn_8000CA64(void *, s32);
    u8 fn_8004C0F0(void *);
    void fn_8004FE90(void *, u8);
    void fn_8004FE98(void *, s32);
    void fn_800506E0(void *, s32);
    void *fn_800508C4(void *);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005FC74(void *, void *, s32);
    void fn_8005FEE8(void *, f32);
    s32 fn_80060440(void *);
    void *fn_800639B4(void);
    void fn_80185078(void *, void *);
    extern u8 lbl_80295A00[];
    extern u8 lbl_80295A20[];
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF0;
    u8 sp40[0x34];
    u8 sp8[0x38];
    u32 mode;
    void *obj;
    s32 kind;
    s32 count;

    mode = *(u32 *)((u8 *)arg0 + 0x18);
    if (mode == 3U) {
        mode = 0;
    }
    obj = *(void **)((u8 *)arg0 + 0x30);
    count = *(s32 *)((u8 *)arg0 + 0x3C);
    kind = *(s32 *)((u8 *)arg0 + 0x38);
    if (fn_8004C0F0(obj) != 0) {
        *(void **)(sp40 + 0x30) = obj;
        fn_8000A388(lbl_80295A00, fn_80185078, sp40);
        *(void **)(sp8 + 0x30) = obj;
        fn_8000A388(lbl_80295A20, fn_80185078, sp8);
        {
            s32 lvl = *(u8 *)((u8 *)fn_800508C4(obj) + 9);
            if (lvl > 0x14) {
                if (lvl > 0x28) {
                    count <<= 1;
                } else {
                    count = (s32)((f32)count + fn_80059F64(lbl_8036ACEC, (f32)count, lbl_8036ACF0, (f32)(lvl - 0x14)));
                }
            }
        }
        if ((count == 0) || (fn_80060440((u8 *)obj + 0x1C) >= 4)) {
            fn_8004FE98(obj, kind);
        } else {
            mode = (u32)fn_8000CA64(lbl_80295A00, (s32)mode);
            *(void **)((u8 *)mode + 0x30) = obj;
            *(s32 *)((u8 *)mode + 0x34) = (s32)obj + 0x1C;
            *(s32 *)((u8 *)mode + 0x38) = kind;
            *(s32 *)((u8 *)mode + 0x3C) = count;
            *(s32 *)((u8 *)mode + 0x40) = 0;
            fn_800506E0(*(void **)((u8 *)mode + 0x30), kind);
            obj = fn_800639B4();
            count = 0;
            if (kind < 8) {
                if (kind < 2) {
                    if (kind >= 0) {
                        goto do_extra;
                    }
                }
            } else if (kind == 8) {
                goto do_extra;
            } else if (kind == 0xF) {
                goto do_extra;
            }
            goto after_extra;
do_extra:
            {
                void *node = *(void **)((u8 *)mode + 0x34);
                void *link = *(void **)((u8 *)node + 0x44);
                if (link != NULL) {
                    f32 base = (f32)*(s32 *)((u8 *)link + 0x14);
                    count = (s32)fn_80059F64(
                        (f32)*(s32 *)((u8 *)obj + 0x14),
                        (f32)*(s32 *)((u8 *)obj + 0x18),
                        (f32)*(s32 *)((u8 *)link + 0x18) - base,
                        *(f32 *)((u8 *)node + 0x58) - base);
                }
            }
after_extra:
            fn_8005FC74(*(void **)((u8 *)mode + 0x34), obj, 1);
            fn_8005FEE8(*(void **)((u8 *)mode + 0x34), (f32)count);
            fn_8004FE90(*(void **)((u8 *)mode + 0x30), (u8)*(s32 *)((u8 *)mode + 0x38));
        }
    }
}
#pragma opt_strength_reduction on

void fn_8018C964(void *arg0) {
    u8 fn_8004BF80(s32);
    if (fn_8004BF80(M2C_FIELD(arg0, s32 *, 0x30)) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_8018C9A4(void *arg0) {
    M2C_UNK fn_8005FA14(s32, M2C_UNK);
    fn_8005FA14(M2C_FIELD(arg0, s32 *, 0x34), 1);
}

void fn_8018C9CC(void *arg0) {
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);
    extern f32 lbl_8036ACEC;
    extern f32 lbl_8036ACF8;
    void *temp_r31;

    temp_r31 = arg0;
    *(s32 *)((u8 *)temp_r31 + 0x40) += 1;
    *(f32 *)((u8 *)*(void **)((u8 *)temp_r31 + 0x34) + 0x78) = fn_8005A028(
        2,
        lbl_8036ACEC,
        lbl_8036ACF8,
        (f32)*(s32 *)((u8 *)temp_r31 + 0x3C),
        (f32)*(s32 *)((u8 *)temp_r31 + 0x40));
    if (*(s32 *)((u8 *)temp_r31 + 0x40) >= *(s32 *)((u8 *)temp_r31 + 0x3C)) {
        fn_8000C188(temp_r31);
    }
}

extern u8 lbl_80296044[];
void fn_8018CA68(u32 arg0) {
    void *temp_r3;
    s32 temp_r6;

    temp_r3 = (void*)fn_8000C0C0(&lbl_80296044);
    if ((temp_r3 != NULL) && (arg0 != 0U)) {
        *(u32*)((u8*)temp_r3 + 0x48 + (*(s32*)((u8*)temp_r3 + 0x44) << 2)) = arg0;
        temp_r6 = *(s32*)((u8*)temp_r3 + 0x44);
        *(s32*)((u8*)temp_r3 + 0x44) = temp_r6 + 1;
        fn_80050BA8(arg0, 1, 1, temp_r6);
    }
}

void fn_8018CAD8(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80296044[];
    void *var_r31;
    s32 var_r0;

    var_r31 = fn_8000C0C0(lbl_80296044);
    if (var_r31 == NULL) {
        var_r31 = fn_8000CAF0(lbl_80296044, arg2);
    } else {
        *(s32 *)((char *)var_r31 + 0x34) = *(s32 *)((char *)var_r31 + 0x30);
        fn_8000C070(var_r31, 0);
    }
    *(s32 *)((char *)var_r31 + 0x38) = arg0;
    var_r0 = 1;
    if (arg1 != 0) {
        var_r0 = arg1;
    }
    *(s32 *)((char *)var_r31 + 0x40) = var_r0;
    *(s32 *)((char *)var_r31 + 0x3C) = 0;
}

void fn_8018CB7C(void) {
    M2C_UNK fn_8018CCB8();
    fn_8018CCB8();
}

void fn_8018CB9C(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r31;
    void *var_r30;

    temp_r31 = fn_80067440(0);
    fn_80067440(1);
    fn_800673E4(temp_r31);
    temp_r31_2 = fn_80067440(2);
    fn_80067440(3);
    fn_800673E4(temp_r31_2);
    var_r30 = arg0;
    var_r31 = 0;
loop_2:
    if (var_r31 < *(s32*)((char*)arg0 + 0x44)) {
        fn_80050BA8(*(s32*)((char*)var_r30 + 0x48), 0, 0);
        var_r30 = (char*)var_r30 + 4;
        var_r31 += 1;
        goto loop_2;
    }
}

void fn_8018CC3C(void *arg0) {
    M2C_UNK fn_800673E4(s32, s32);
    s32 fn_80067440(M2C_UNK);

    fn_800673E4(fn_80067440(0), fn_80067440(1));
    fn_800673E4(fn_80067440(2), fn_80067440(3));
    M2C_FIELD(arg0, s32 *, 0x30) = 0x64;
    M2C_FIELD(arg0, s32 *, 0x34) = 0x64;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}

void fn_8018CCB8(void *arg0) {
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    u8 *fn_80067440(s32);
    void fn_8000C60C(void *);
    void fn_8000C188(void *);
    s32 scale;
    s32 v;
    u8 *src;
    u8 *dst0;
    u8 *dst2;

    *(s32 *)((u8 *)arg0 + 0x3C) = *(s32 *)((u8 *)arg0 + 0x3C) + 1;
    *(s32 *)((u8 *)arg0 + 0x30) = (s32) fn_8005A028(
        2,
        (f32)*(s32 *)((u8 *)arg0 + 0x34),
        (f32)*(s32 *)((u8 *)arg0 + 0x38),
        (f32)*(s32 *)((u8 *)arg0 + 0x40),
        (f32)*(s32 *)((u8 *)arg0 + 0x3C));
    src = fn_80067440(1);
    dst0 = fn_80067440(0);
    dst2 = fn_80067440(2);
    scale = *(s32 *)((u8 *)arg0 + 0x30);

    v = (src[4] * scale) / 100;
    if (v > 0xFF) {
        v = 0xFF;
    }
    dst0[4] = v;
    dst2[4] = v;

    v = (src[5] * scale) / 100;
    if (v > 0xFF) {
        v = 0xFF;
    }
    dst0[5] = v;
    dst2[5] = v;

    v = (src[6] * scale) / 100;
    if (v > 0xFF) {
        v = 0xFF;
    }
    dst0[6] = v;
    dst2[6] = v;

    v = (src[0] * scale) / 100;
    if (v > 0xFF) {
        v = 0xFF;
    }
    dst0[0] = v;
    dst2[0] = v;

    v = (src[1] * scale) / 100;
    if (v > 0xFF) {
        v = 0xFF;
    }
    dst0[1] = v;
    dst2[1] = v;

    v = (src[2] * scale) / 100;
    if (v > 0xFF) {
        v = 0xFF;
    }
    dst0[2] = v;
    dst2[2] = v;

    if (*(s32 *)((u8 *)arg0 + 0x3C) >= *(s32 *)((u8 *)arg0 + 0x40)) {
        if (*(s32 *)((u8 *)arg0 + 0x30) == 0x64) {
            fn_8000C60C(arg0);
        } else {
            fn_8000C188(arg0);
        }
    }
}

void fn_8018CF08(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296018;
    void *r3;
    void *temp_r3;

    r3 = &lbl_80296018;
    temp_r3 = fn_8000C0C0(r3);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x3C) = 1;
        M2C_FIELD(temp_r3, s32 *, 0x40) = 0;
    }
}

void fn_8018CF48(s32 arg0) {
    void *fn_8000C0C0(void *);
    extern u8 lbl_80296018[];
    void *temp_r3;

    temp_r3 = fn_8000C0C0(lbl_80296018);
    if (temp_r3 != NULL) {
        arg0 = *(s32 *)((u8 *)temp_r3 + 0x34) + arg0;
        if (arg0 < 0) {
            arg0 = 0;
        }
        if (arg0 > 0x64) {
            arg0 = 0x64;
        }
        *(s32 *)((u8 *)temp_r3 + 0x40) = arg0;
    }
}

#pragma use_lmw_stmw on
void fn_8018CFA4(s32 arg0, s32 arg1, s32 arg2, u8 arg3, s32 arg4) {
    u32 fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    u32 fn_80018ADC(void);
    extern u8 lbl_80296018[];
    s32 var_r0;
    void *temp_r3;

    if (fn_80018ADC() != 0U && (arg3 != 0 || fn_8000C0C0(lbl_80296018) == 0U)) {
        temp_r3 = fn_8000CAF0(lbl_80296018, arg4);
        var_r0 = 1;
        if (arg1 != 0) {
            var_r0 = arg1;
        }
        *(s32 *)((u8 *)temp_r3 + 0x38) = var_r0;
        *(s32 *)((u8 *)temp_r3 + 0x34) = arg0;
        *(s32 *)((u8 *)temp_r3 + 0x40) = arg0;
        *(s32 *)((u8 *)temp_r3 + 0x3C) = arg2;
    }
}
void fn_8018D218(void *arg0) {
    extern u16 lbl_802797C0[6];
    void *temp_r5;
    
    temp_r5 = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(temp_r5, f32 *, 0x58) = *(f32*)&lbl_802797C0[0];
    M2C_FIELD(temp_r5, f32 *, 0x5C) = *(f32*)&lbl_802797C0[1];
    M2C_FIELD(temp_r5, f32 *, 0x60) = *(f32*)&lbl_802797C0[2];
}

void fn_8018D25C(void *arg0) {
    s32 fn_80018ADC();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = fn_80018ADC();
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
u8 fn_8018D294(void *arg0, s32 arg1) {
    u8 fn_80105BC0(void *, s32);
    void fn_8002F728(void *);
    void fn_8002C47C(void *, s32);
    void fn_8002F658(void *, s32);
    void *fn_8002F740(void);
    u8 fn_8003DC80(void *, void *);
    void **fn_80037BD0(void *, s32);
    u32 *fn_8000D2BC(char *);
    u8 fn_8003DAC4(void *, void **);
    s32 fn_802342B8(s32, u32);
    void fn_8010F3F4(void *, s8, s8, s16 *, s16 *);
    void fn_800FB96C(s32, s8, s8, void *, s8, s8, s8, s32, s32);
    extern u8 lbl_80284E20[];
    extern u8 lbl_80296078[];
    extern s32 lbl_802EF4E0[];
    extern u8 lbl_802798D0[];
    extern u8 lbl_8032B3C0[];

    struct {
        void *vtbl;
        void *unk4;
        s32 unk8;
    } obj;
    s16 sp12;
    s16 sp10;
    register s32 val;
    s32 dist;
    u32 *tbl;
    u32 t;
    void **entry;
    s8 slot;
    s8 foundSlot;
    s8 bestSlot;
    s32 bestDist;
    s32 foundDist;
    void *bestUnit;
    s32 i;
    void *unit;

    bestDist = 0x7FFFFFFF;
    if (!fn_80105BC0((u8 *)arg0 + 0x1BC, 0x3C)) {
        return 0;
    }
    obj.vtbl = lbl_80284E20;
    obj.unk4 = arg0;
    obj.vtbl = lbl_80296078;
    obj.unk8 = arg1;
    fn_8002F728(lbl_802EF4E0);
    fn_8002C47C(&obj, 0);
    i = 0;
    while (i < lbl_802EF4E0[0]) {
        fn_8002F658(lbl_802EF4E0, i);
        unit = fn_8002F740();
        if (fn_8003DC80(arg0, unit)) {
            foundSlot = -1;
            foundDist = -1;
            slot = 0;
            while ((s8)slot < 8) {
                entry = fn_80037BD0(unit, slot);
                if (*(u32 *)entry != 0) {
                    tbl = fn_8000D2BC((char *)((u32)lbl_802798D0 + 0x1D));
                    if (!fn_8003DAC4(arg0, entry)) {
                        dist = -1;
                    } else {
                        dist = 0;
                        goto lbl_check;
                    lbl_body:
                        if (*(u32 *)entry != 0) {
                            val = *(s32 *)*(void **)entry;
                        } else {
                            val = 0;
                        }
                        if (fn_802342B8(val, t) == 0) {
                            goto lbl_done;
                        }
                        tbl++;
                        dist++;
                    lbl_check:
                        t = *tbl;
                        if (t != 0) {
                            goto lbl_body;
                        }
                        dist = -1;
                    lbl_done:
                        ;
                    }
                    if (dist >= 0) {
                        foundSlot = slot;
                        foundDist = dist;
                        break;
                    }
                }
                slot++;
            }
            if ((s8)foundSlot >= 0 && bestDist > foundDist) {
                bestDist = foundDist;
                bestUnit = unit;
                bestSlot = foundSlot;
            }
        }
        i++;
    }
    if (bestDist != 0x7FFFFFFF) {
        s8 bx = *(u8 *)((u8 *)bestUnit + 0x19E);
        s8 by = *(u8 *)((u8 *)bestUnit + 0x19F);
        fn_8010F3F4(arg0, bx, by, &sp12, &sp10);
        *(u16 *)((u8 *)arg0 + 0x258) =
            *(u16 *)((u8 *)arg0 + 0x258) + 1;
        fn_800FB96C(0x11, (s8)sp12, (s8)sp10, bestUnit, bx, by, bestSlot, 0, 0);
    }
    return lbl_8032B3C0[0x21C];
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
u8 fn_8018D4CC(void *arg0, s32 arg1) {
    u8 fn_80105BC0(void *, s32);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void fn_800FE2A0(void *, s32, s32);
    void fn_8002F728(void *);
    void fn_8002C47C(void *, s32);
    void fn_8002F658(void *, s32);
    void *fn_8002F740(void);
    u8 fn_8003DC80(void *, void *);
    void **fn_80037BD0(void *, s32);
    u32 *fn_8000D2BC(char *);
    u8 fn_8003DAC4(void *, void **);
    s32 fn_802342B8(s32);
    void fn_8010F3F4(void *, s8, s8, s16 *, s16 *);
    void fn_800FB96C(s32, s8, s8, void *, s8, s8, s8, s32, s32);
    extern u8 lbl_802CA518[];
    extern u8 lbl_80284E20[];
    extern u8 lbl_80296078[];
    extern s32 lbl_802EF4E0[];
    extern u8 lbl_802798D0[];
    extern u8 lbl_8032B3C0[];

    struct {
        void *vtbl;
        void *unk4;
        s32 unk8;
    } obj;
    s16 sp12;
    s16 sp10;
    s32 val;
    s32 dist;
    u32 *tbl;
    void **entry;
    s8 slot;
    s8 foundSlot;
    s8 bestSlot;
    s32 bestDist;
    s32 foundDist;
    void *bestUnit;
    s32 i;
    void *unit;
    void *base;

    base = lbl_802CA518;
    if (!fn_80105BC0((u8 *)arg0 + 0x1BC, 0x3C)) {
        return 0;
    }
    if ((lbl_8032B3C0[1] & 2) || (*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        fn_80022DAC(base, 5, -1);
        fn_80022FD8(base, 5);
        ((s16 *)*(void **)((u8 *)base + 0x14190))[(s8)*(u8 *)((u8 *)arg0 + 0x19E) + ((s8)*(u8 *)((u8 *)arg0 + 0x19F) << 6)] = 0;
    } else {
        fn_800FE2A0(arg0, 5, -1);
    }
    bestDist = 0x7FFFFFFF;
    if (!fn_80105BC0((u8 *)arg0 + 0x1BC, 0x3C)) {
        return 0;
    }
    obj.vtbl = lbl_80284E20;
    obj.unk4 = arg0;
    obj.vtbl = lbl_80296078;
    obj.unk8 = arg1;
    fn_8002F728(lbl_802EF4E0);
    fn_8002C47C(&obj, 0);
    i = 0;
    while (i < lbl_802EF4E0[0]) {
        fn_8002F658(lbl_802EF4E0, i);
        unit = fn_8002F740();
        if (fn_8003DC80(arg0, unit)) {
            foundSlot = -1;
            slot = 0;
            foundDist = foundSlot;
            while ((s8)slot < 8) {
                entry = fn_80037BD0(unit, slot);
                if (*(u32 *)entry != 0) {
                    tbl = fn_8000D2BC((char *)((u32)lbl_802798D0 + 0x1D));
                    if (!fn_8003DAC4(arg0, entry)) {
                        dist = -1;
                    } else {
                        dist = 0;
                        goto lbl_check;
                    lbl_body:
                        if (*(u32 *)entry != 0) {
                            val = *(s32 *)*(void **)entry;
                        } else {
                            val = 0;
                        }
                        if (fn_802342B8(val) == 0) {
                            goto lbl_done;
                        }
                        tbl++;
                        dist++;
                    lbl_check:
                        if (*tbl != 0) {
                            goto lbl_body;
                        }
                        dist = -1;
                    lbl_done:
                        ;
                    }
                    if (dist >= 0) {
                        foundSlot = slot;
                        foundDist = dist;
                        break;
                    }
                }
                slot++;
            }
            if ((s8)foundSlot >= 0 && bestDist > foundDist) {
                bestDist = foundDist;
                bestUnit = unit;
                bestSlot = foundSlot;
            }
        }
        i++;
    }
    if (bestDist != 0x7FFFFFFF) {
        s8 bx = *(u8 *)((u8 *)bestUnit + 0x19E);
        s8 by = *(u8 *)((u8 *)bestUnit + 0x19F);
        fn_8010F3F4(arg0, bx, by, &sp10, &sp12);
        *(u16 *)((u8 *)arg0 + 0x258) =
            *(u16 *)((u8 *)arg0 + 0x258) + 1;
        fn_800FB96C(0x11, (s8)sp10, (s8)sp12, bestUnit, bx, by, bestSlot, 0, 0);
    }
    return lbl_8032B3C0[0x21C];
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

#pragma global_optimizer reset
#pragma use_lmw_stmw reset

void fn_8018D7A4(s32 arg0, s32 arg1) {
    void fn_8002C47C(void *, s32);
    void fn_8002F728(void *);
    extern u8 lbl_80284E20[];
    extern u8 lbl_80296078[];
    extern u8 lbl_802EF4E0[];
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } obj;

    obj.vtbl = lbl_80284E20;
    obj.unk4 = arg0;
    obj.vtbl = lbl_80296078;
    obj.unk8 = arg1;
    fn_8002F728(lbl_802EF4E0);
    fn_8002C47C(&obj, 0);
}

void fn_8018D7FC(void *arg0, void *arg1) {
    extern u8 lbl_802EF4E0[];
    void fn_8002F6E8(void *, u8, u8, u8, s32);

    if (((u8 (**)(void *))arg0)[2](arg1) != 0) {
        fn_8002F6E8(lbl_802EF4E0,
                    *(u8 *)((u8 *)arg0 + 0xC),
                    *(u8 *)((u8 *)arg0 + 0xD),
                    *(u8 *)((u8 *)arg1 + 0x198),
                    0);
    }
}

void fn_8018D864(void *arg0, s32 arg1, s32 arg2) {
    void fn_8002C6F4(void *);
    extern u8 lbl_802CA518[];
    u8 *base;
    u8 *row;
    s32 yoff;
    s32 x;
    u8 id;

    base = lbl_802CA518;
    x = arg1;
    row = base + 0x10000;
    row += x;
    yoff = arg2 << 6;
    if ((s8)row[yoff - 0x1E72] == 0) {
        if ((*(u32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x254) & 0x20000) == 0 ||
            (*(base + x + yoff + 0x300D) & 2) == 0) {
            *((u8 *)arg0 + 0xC) = arg1;
            *((u8 *)arg0 + 0xD) = arg2;
            id = *(base + x + yoff + 0xD);
            if (id == 0 || id == *((u8 *)*(void **)((u8 *)arg0 + 4) + 0x198)) {
                fn_8002C6F4(arg0);
            }
        }
    }
}

#pragma optimization_level 4
#pragma inline auto
extern u8 lbl_80296088[160];
extern f64 lbl_8036AD88;
extern f32 lbl_8036AD68;
extern f32 lbl_8036AD6C;
extern f32 lbl_8036AD70;
extern f32 lbl_8036AD74;
extern f32 lbl_8036AD78;
extern f32 lbl_8036AD7C;
extern f32 lbl_8036AD80;
extern f32 lbl_8036AD84;
#pragma optimization_level 4
#pragma inline auto
void* fn_8018D900(u8 arg0) {
    u32 temp_r3;
    u32 temp_r6;
    u32 temp_r0;
    
    u32 r31;
    f32 temp_f1;
    f32 temp_f2;
    void* temp_r31;

    // Simplified structure based on assembly
    temp_r31 = &lbl_80296088 + ((arg0 * 4) & 0x3FC);
    
    if (arg0 == 0x13 || arg0 == 0x22) {
        temp_r3 = OSGetTick();
        temp_r6 = *(u32 *)0x800000F8;
        temp_r0 = temp_r6 >> 2; 
        if (temp_r0 != 0) {
            // Reconstruct the floating-point operation in assembly
            f32 result = lbl_8036AD74 * ((lbl_8036AD78 * (f32)fn_80238638(temp_r3 / temp_r0, 
                    0x57619F1, 
                    (temp_r6 >> 2) * 0x10624DD3, 
                    temp_r6, 
                    0x10624DD3, 
                    (lbl_8036AD6C * ((f32)temp_r3 / (f32)temp_r0 / (temp_r0 >> 6) / lbl_8036AD68)), 
                    (f32)temp_r3 / (f32)temp_r0 / (temp_r0 >> 6))) + lbl_8036AD78);

            temp_f2 = lbl_8036AD70 + result;
            ((u8*)temp_r31)[0] = (u8)temp_f2;
            ((u8*)temp_r31)[1] = (u8)(lbl_8036AD7C + result);
            ((u8*)temp_r31)[2] = (u8)temp_f2;
        } else {
            // Handle case where division by zero occurs
            ((u8*)temp_r31)[0] = 0x14;
            ((u8*)temp_r31)[1] = 0x14;
            ((u8*)temp_r31)[2] = 0x14;
        }
    } else if (arg0 == 0x14) {
        temp_r3 = OSGetTick();
        temp_r6 = *(u32 *)0x800000F8;
        temp_r0 = temp_r6 >> 2; 
        if (temp_r0 != 0) {
            // Reconstruct the floating-point operation
            f32 result = lbl_8036AD80 * ((lbl_8036AD78 * (f32)fn_80238638(temp_r3 / temp_r0, 
                    0x57619F1,
                    (temp_r6 >> 2) * 0x10624DD3,
                    temp_r6,
                    0x10624DD3,
                    (lbl_8036AD6C * ((f32)temp_r3 / (f32)temp_r0 / (temp_r0 >> 6) / lbl_8036AD68)),
                    (f32)temp_r3 / (f32)temp_r0 / (temp_r0 >> 6))) + lbl_8036AD78);

            temp_f2 = lbl_8036AD70 + result;
            ((u8*)temp_r31)[0] = (u8)temp_f2;
            ((u8*)temp_r31)[1] = (u8)(lbl_8036AD84 + result);
            ((u8*)temp_r31)[2] = (u8)temp_f2;
        } else {
            // Handle case where division by zero occurs
            ((u8*)temp_r31)[0] = 0x14;
            ((u8*)temp_r31)[1] = 0x14;
            ((u8*)temp_r31)[2] = 0x14;
        }
    } else {
        return temp_r31;
    }
    
    return temp_r31;
}
void fn_8018DAD4(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[];
    void *temp_r3;

    temp_r3 = fn_8000C0C0((M2C_UNK *) &lbl_80296128);
    if (temp_r3 != NULL) {
        *(u16 *)((char *)temp_r3 + 0x30) = *(u16 *)((char *)temp_r3 + 0x30) & 0xFFFFFFFD;
    }
}

void fn_8018DB10(void) {
    register unsigned int object;
    extern u8 lbl_80296128[];

    object = fn_8000C0C0(lbl_80296128);

    if (object != 0) {
        *(u16 *)((u8 *)object + 0x30) |= 2;
    }
}

void fn_8018DB4C(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[20];
    void *temp_r3;

    temp_r3 = fn_8000C0C0((M2C_UNK *)lbl_80296128);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x32) = 1;
        M2C_FIELD(temp_r3, s16 *, 0x44) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x54) = 0;
    }
}

void fn_8018DB90(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[20];
    void *temp_r3;

    temp_r3 = fn_8000C0C0((M2C_UNK *)lbl_80296128);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x32) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x44) = 8;
        M2C_FIELD(temp_r3, s16 *, 0x54) = 0xFF;
    }
}

void fn_8018DBD8(void)
{
    void *fn_8000C0C0(void *);
    extern u8 lbl_80296128[];

    u8 *entry;

    entry = (u8 *)fn_8000C0C0(lbl_80296128);

    if (entry != 0) {
        *(u16 *)(entry + 0x32) = 1;
        *(u16 *)(entry + 0x46) = 0;
    }
}

void fn_8018DC18(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[30];
    void *temp_r3;
    M2C_UNK *temp_r4;

    temp_r4 = (M2C_UNK *)lbl_80296128;
    temp_r3 = fn_8000C0C0(temp_r4);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x32) = 1;
        M2C_FIELD(temp_r3, s16 *, 0x46) = 0xE;
    }
}

void fn_8018DC58(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern u16 lbl_80296128[30];
    void *temp_r3;

    temp_r3 = fn_8000C0C0((M2C_UNK *)lbl_80296128);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x32) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x46) = 2;
    }
}

extern u8 lbl_80296128[16];
void fn_8018DC98(void) {
    fn_8000BF00(&lbl_80296128);
}

void fn_8018DCC0(s32 arg0) {
    void *fn_8000C0C0(void *lbl);
    void fn_8000CAF0(void *lbl, s32 arg);
    extern u8 lbl_80296128[16];

    if (fn_8000C0C0(lbl_80296128) == 0) {
        fn_8000CAF0(lbl_80296128, arg0);
    }
}

s32 fn_8018DD0C(void) {
    return 0;
}

void fn_8018DD3C(s32 arg0) {
    s32 fn_8005C6A0(void *, void *);
    s32 fn_8006EEFC(s32, void *);
    void fn_8000C188(s32);
    void fn_80059208(void *, s32);
    
    extern u16 lbl_80279B1C[];
    extern void *fn_8018DE24;
    
    if (fn_8005C6A0(&lbl_80279B1C[0x105], &lbl_80279B1C[0]) & 0x2000) {
        fn_8006EEFC(arg0 + 0x34, &lbl_80279B1C[0x105]);
        fn_8000C188(arg0);
        fn_80059208(&fn_8018DE24, arg0);
    }
}

void fn_8018DDA8(void *arg0) {
    M2C_UNK fn_8005C8B4(void *, M2C_UNK *, M2C_UNK, M2C_UNK, f32);
    extern M2C_UNK lbl_80279B1C;
    extern f32 lbl_8036AD98;
    extern f32 lbl_8036AD9C;
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x32) = 1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036AD98;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036AD9C;
    M2C_FIELD(arg0, s16 *, 0x44) = 0;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s16 *, 0x54) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x4A) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x4C) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x4E) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x50) = 0xFFFF;
    M2C_FIELD(arg0, s16 *, 0x52) = 0xFFFF;
    fn_8005C8B4(&lbl_80279B1C + 0x105, &lbl_80279B1C, 0x10000, 0, lbl_8036AD98);
}

void fn_8018E98C(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x3C)();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32), 0x40)(arg0, arg1);
}

void fn_8018EBC0(void *arg0, s16 arg1) {
    void *fn_8001C76C(void *);
    s32 fn_8001D2C8(void *);
    void fn_8001D818(void *, s32);
    void fn_8001C5F8(void *, s32);
    void fn_8001019C(s16, s16, s32, void *, s32);
    void fn_8008CFB4(void *, s16, s16);
    extern u16 lbl_80279C40[];
    extern f32 lbl_8036ADF0;
    
    void *sp8;
    void *temp_r29;
    s16 temp_r31;
    s16 temp_r30;
    s16 temp_r28;
    s16 temp_r0;

    temp_r29 = arg0;
    fn_8001C76C(&sp8);
    fn_8001D818(&sp8, *(s32*)((char*)temp_r29 + 0x40));
    temp_r31 = *(s16*)((char*)temp_r29 + 0x44);
    temp_r0 = (s16) ((s32) (0x1C - fn_800102BC(-1, lbl_8036ADF0)) >> 1);
    temp_r30 = temp_r0;
    temp_r28 = arg1 + temp_r30;
    fn_8001019C((s16) (temp_r31 + 0x18), temp_r28, 2, &lbl_80279C40[0x50/2], fn_8001D2C8(&sp8));
    fn_8008CFB4(&sp8, temp_r31, temp_r28);
    fn_8001C5F8(&sp8, -1);
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
void fn_8018EC8C(void *arg0, s16 arg1, u8 arg2) {
    s32 fn_800102BC(s32, f32);
    void *fn_8000E0E4(void *);
    void fn_8001019C(s16, s16, s32, ...);
    void fn_80007898(s32);
    s32 *fn_8018D900(s32);
    void fn_80007668(s32 *);
    void fn_80006B18(s32, s16, s32, s32, s32);
    void fn_80007884(void);
    extern u8 lbl_80279C40[];
    extern f32 lbl_8036ADF0;
    typedef struct Entry {
        void *ptr;
        u8 unk4;
        u8 flags;
        u8 pad[2];
    } Entry;
    extern Entry lbl_803200AC[];
    s32 spC;
    s32 sp8;
    Entry *e;
    s32 ctr;
    s32 dummy;
    s32 count;
    void *target;
    void *str;
    void *p0;
    s16 x;
    s16 y;

    y = M2C_FIELD(arg0, s16 *, 0x44);
    x = (s16)((0x1C - fn_800102BC(-1, lbl_8036ADF0)) >> 1);
    str = fn_8000E0E4(lbl_80279C40 + 0x53);
    x += arg1;
    fn_8001019C(y, x, 0xF, str);
    if (arg2 != 0 && M2C_FIELD(arg0, void **, 0x40) != NULL) {
        fn_80007898(6);
        spC = *fn_8018D900(2);
        fn_80007668(&spC);
        target = M2C_FIELD(arg0, void **, 0x40);
        count = 0;
        if (target != NULL) {
            e = lbl_803200AC;
            dummy = count;
            for (ctr = 0x28; ctr != 0; ctr--) {
                p0 = e->ptr;
                if (p0 != NULL && (e->flags & 0x3F) == 0 && p0 == target) {
                    count++;
                }
                e++;
                p0 = e->ptr;
                if (p0 != NULL && (e->flags & 0x3F) == 0 && p0 == target) {
                    count++;
                }
                e++;
                p0 = e->ptr;
                if (p0 != NULL && (e->flags & 0x3F) == 0 && p0 == target) {
                    count++;
                }
                e++;
                p0 = e->ptr;
                if (p0 != NULL && (e->flags & 0x3F) == 0 && p0 == target) {
                    count++;
                }
                e++;
                p0 = e->ptr;
                if (p0 != NULL && (e->flags & 0x3F) == 0 && p0 == target) {
                    count++;
                }
                e++;
                dummy += 4;
            }
        }
        fn_80006B18(y + 0xA4, x, 0, 0, count);
        fn_80007884();
    } else {
        fn_80007898(6);
        sp8 = *fn_8018D900(2);
        fn_80007668(&sp8);
        fn_80006B18(y + 0xA4, x, 0, 0, 0);
        fn_80007884();
    }
    str = fn_8000E0E4(lbl_80279C40 + 0x66);
    fn_8001019C((s16)(y + 0xB0), x, 0xF, str);
}
#pragma opt_strength_reduction reset
#pragma use_lmw_stmw reset

void fn_8018EFE0(void *arg0, s32 arg1) {
    s32 fn_8000E0E4(void *, M2C_UNK *);
    M2C_UNK fn_8001019C(s16, s16, M2C_UNK, s32);
    s32 fn_800102BC(M2C_UNK, s16, s16, f32);
    s16 fn_80010B78(M2C_UNK, f32);
    extern M2C_UNK lbl_80279C40;
    extern f32 lbl_8036ADF0;
    s16 temp_r30;
    s16 temp_r3;
    s16 temp_r4;
    s32 temp_r31;

    temp_r31 = fn_8000E0E4(&lbl_80279C40 + 0xA0, &lbl_80279C40);
    temp_r3 = fn_80010B78(-1, lbl_8036ADF0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x12);
    temp_r30 = (s16) ((s32) ((s16) (M2C_FIELD(arg0, s16 *, 0x16) - temp_r4) - temp_r3) >> 1);
    fn_8001019C(temp_r30, (s16) (arg1 + (s16) ((s32) (0x1C - fn_800102BC(-1, temp_r4, temp_r3, lbl_8036ADF0)) >> 1)), 2, temp_r31);
}

#pragma cplusplus on
extern "C" void fn_8018F090(void *arg0) {
    void fn_80152A18(s32, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80152A18(0, 0, 0x10);
}
extern "C" void fn_8018F338(void *arg0) {
    void fn_80154004(s32, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80154004(0, 0, 0x10);
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" s32 fn_8018F374(void *arg0) {
    void *fn_80105710(void *);
    extern u32 lbl_802CA264[];
    typedef struct Entry {
        void *ptr;
        u8 unk4;
        u8 flags;
        u8 pad[2];
    } Entry;
    extern Entry lbl_803200AC[];
    Entry *e;
    void *p0;
    s32 i;
    u8 *next;
    s32 total;
    u8 *unit;
    void *target;
    void *tmp;

    tmp = *(void **)((u8 *)arg0 + 0x3C);
    goto after_load;
after_load:
    total = 0;
    if (tmp == NULL) {
        return -1;
    }
    if (fn_80105710(tmp) == NULL) {
        return -1;
    }
    target = fn_80105710(*(void **)((u8 *)arg0 + 0x3C));
    unit = *(u8 **)((u8 *)lbl_802CA264 + 0);
    goto loop1_test;
loop1_body:
    next = *(u8 **)(unit + 0x184);
    total += CountUnitItemReferences(unit, (u8 *)target);
    unit = next;
loop1_test:
    if (unit != NULL) {
        goto loop1_body;
    }
    unit = *(u8 **)((u8 *)lbl_802CA264 + 0x3C);
    goto loop2_test;
loop2_body:
    next = *(u8 **)(unit + 0x184);
    total += CountUnitItemReferences(unit, (u8 *)target);
    unit = next;
loop2_test:
    if (unit != NULL) {
        goto loop2_body;
    }
    e = lbl_803200AC;
    for (i = 0; i < 200; i++) {
        p0 = e->ptr;
        if (p0 != NULL && (e->flags & 0x3F) == 0 && target == p0) {
            total++;
        }
        e++;
    }
    return total;
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

extern "C" void fn_8018F6E8(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32) = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
    };
    void fn_80006B18(s16, s16, s32, s32, s32);
    void fn_80007668(s32 *);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001019C(s16, s16, s32, void *, ...);
    s32 fn_800102BC(s32, f32);
    s16 fn_80010B78(void *, s32, f32);
    s32 fn_80104E58(void);
    s32 *fn_8018D900(s32);
    extern u8 lbl_80279C40[];
    extern u8 lbl_80330708[];
    extern f32 lbl_8036ADF0;
    extern f32 lbl_8036ADF4;
    s32 spC;
    s32 sp8;
    s16 y;
    s16 y2;
    s16 h;
    s16 x;

    ((Obj *)arg0)->v9();
    ((Obj *)arg0)->v3(arg1);

    x = (s16)((0x20 - fn_800102BC(-1, lbl_8036ADF0)) >> 1);
    {
        s32 t = *(s16 *)((u8 *)arg0 + 0x40);
        y = (s16)(*(s16 *)((u8 *)arg0 + 0x16) - *(s16 *)((u8 *)arg0 + 0x12));
        h = t;
        y = (s16)(y - t);
        x += *(s16 *)((u8 *)arg0 + 0x42);
    }
    y -= fn_80104E58() + 8;

    fn_8000A258();
    fn_80009C0C(lbl_8036ADF4);
    fn_8000A174(0, (u16)(*(u32 *)((u8 *)arg0 + 0x34) | 0x13));
    fn_8000A248();

    fn_8001019C(h, x, 0xF, fn_8000E0E4(lbl_80279C40 + 0xBE));
    fn_8001019C((s16)(y + 8), x, 0xF, fn_8000E0E4(lbl_80279C40 + 0xD1));
    y2 = y + 8;

    if (*(s32 *)((u8 *)arg0 + 0x3C) >= 0) {
        arg1 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x3C) <= *(s32 *)(lbl_80330708 + 0x18)) {
            arg1 = 2;
        }
        fn_80007898(6);
        spC = *fn_8018D900((u8)arg1);
        fn_80007668(&spC);
        fn_80006B18(y, (s16)x, 0, 0, *(s32 *)((u8 *)arg0 + 0x3C));
        fn_80007884();
    } else {
        arg1 = (s32)(lbl_80279C40 + 0xE4);
        fn_8001019C((s16)(y - (s16)fn_80010B78((void *)arg1, -1, lbl_8036ADF0)), x, 0, (void *)arg1);
        fn_8001019C(h, (s16)((arg1 = (s16)x) + 0x20), 0xF, fn_8000E0E4(lbl_80279C40 + 0xED));
        fn_8001019C(y2, (s16)(arg1 + 0x20), 0xF, fn_8000E0E4((u8 *)lbl_80279C40 + 209));
        fn_80007898(6);
        sp8 = *fn_8018D900(2);
        fn_80007668(&sp8);
        fn_80006B18(y, (s16)(arg1 + 0x20), 0, 0, *(s32 *)(lbl_80330708 + 0x18));
        fn_80007884();
    }
}

extern "C" void fn_8018F94C(void *arg0) {
    void fn_80154004(s32, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80154004(0, 0, 0x10);
}

#pragma cplusplus on
extern "C" void fn_8018F988(void *arg0, s32 arg1) {
    struct Obj {
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
        virtual void v10(s32) = 0;
    };
    ((Obj *)arg0)->v9();
    ((Obj *)arg0)->v10(arg1);
}
#pragma cplusplus reset

extern "C" void fn_8018FC1C(void *arg0) {
    void fn_80154004(s32, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80154004(0, 0, 0x10);
}

#pragma opt_common_subs off
#pragma use_lmw_stmw on
extern "C" s32 fn_8018FC58(void *arg0) {
void **fn_80037BBC(void *,s32);
extern u32 lbl_802CA264[]; extern u32 lbl_803200AC[];
u8 *self=(u8 *)arg0; s32 total;
{
u8 *unit; u8 *target=*(u8 **)(self+0x3C); u8 *next; s32 count,i; u8 *entry; void *item;
total=0;
if(target==0) return 0;
for(unit=*(u8 **)((u8 *)lbl_802CA264+0);unit;unit=next) {
next=*(u8 **)(unit+0x184);
total+=CountUnitItemReferences(unit,target);
}
}
{
u8 *target=*(u8 **)(self+0x3C); u8 *unit; u8 *next; s32 count,i; u8 *entry; void *item;

for(unit=*(u8 **)((u8 *)lbl_802CA264+60);unit;unit=next) {
next=*(u8 **)(unit+0x184);
total+=CountUnitItemReferences(unit,target);
}
}
{
u8 *entry=(u8 *)lbl_803200AC;
u8 *target=*(u8 **)(self+0x3C);
s32 i;
for(i=0;i<200;i++,entry+=8) {
void *item=*(void **)entry;
if(item && !(entry[5]&63) && target==item) total++;
}
}
return total;
}
#pragma cplusplus reset
#pragma opt_common_subs reset

void *fn_8018FFB4(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80296150[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80296150;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80190020(void *arg0) {
    s16 r5, r6, r7, r8;
    
    M2C_FIELD(arg0, s16 *, 0x44) = 8;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0x1C;
    
    r8 = M2C_FIELD(arg0, s16 *, 0xC);
    r7 = M2C_FIELD(arg0, s16 *, 0x10);
    r6 = M2C_FIELD(arg0, s16 *, 0xA);
    r5 = M2C_FIELD(arg0, s16 *, 0xE);
    
    r7 = r8 - r7;
    r7 = (s16) r7;
    M2C_FIELD(arg0, s16 *, 0x14) = 0x14;
    r5 = r6 - r5;
    r5 = (s16) r5;
    
    M2C_FIELD(arg0, s16 *, 0x16) = r5 - 0x1C;
    M2C_FIELD(arg0, s16 *, 0x18) = r7 - 0x14;
}

void *fn_80190074(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_80296194[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80296194;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801900E0(void *arg0) {
    s32 r3 = (s32)arg0;
    s16 r4, r5, r6, r7;
    
    *(s16 *)(r3 + 0x40) = 0x18;
    *(s16 *)(r3 + 0x42) = 0;
    r7 = *(s16 *)(r3 + 0xc);
    r6 = *(s16 *)(r3 + 0x10);
    r5 = *(s16 *)(r3 + 0xa);
    r4 = *(s16 *)(r3 + 0xe);
    r6 = r7 - r6;
    r6 = (s16) r6;
    r4 = r5 - r4;
    *(s16 *)(r3 + 0x12) = 2;
    r4 = (s16) r4;
    r6 = r6 - 2;
    *(s16 *)(r3 + 0x14) = 2;
    r4 = r4 - 2;
    *(s16 *)(r3 + 0x16) = r4;
    *(s16 *)(r3 + 0x18) = r6;
}

void *fn_80190130(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_802961C4[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_802961C4;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_801901EC(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_802961F4[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_802961F4;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80190258(void *arg0) {
    s16* ptr = (s16*)arg0;
    ptr[0x40/2] = 0x18;
    ptr[0x42/2] = 0;
    ptr[0x12/2] = 0x2;
    ptr[0x14/2] = 0x2;
    ptr[0x16/2] = (ptr[0xC/2] - ptr[0x10/2]) - 0x2;
    ptr[0x18/2] = (ptr[0xA/2] - ptr[0xE/2]) - 0x2;
}

void fn_801903D8(void *arg0, s32 arg1) {
    if (*(u8 *)((u8 *)arg0 + 0x44) != 0) {
        void (**vtable_ptr)(void) = (void (**)(void))(*(u32 **)((u8 *)arg0 + 0x0) + 0xB);
        (*vtable_ptr)();
    }
    (*(void (**)(void *, s32))(*(u32 **)((u8 *)arg0 + 0x0) + 0xC))(arg0, arg1);
}

#pragma cplusplus on
extern "C" void fn_80190590(void *arg0) {
    void fn_80159898(s32, s32, s16, s16, s32, s32);
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
    fn_80159898(0, 0,
        (s16)(*(s16 *)((u8 *)arg0 + 0xE) - *(s16 *)((u8 *)arg0 + 0xA)),
        (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0xC)),
        0xB3, 0x10);
}

extern "C" void fn_801905FC(void *arg0, s32 **arg1) {
    M2C_UNK fn_8005C7E8(s32);
    u32 fn_8005C84C();
    M2C_UNK fn_8005F494(s32 *, s32);
    M2C_UNK fn_8005F4F4(s32 *, s32);
    M2C_UNK fn_8005F554(s32 *, s32);
    M2C_UNK fn_8006140C(s32 *);
    M2C_UNK fn_800616A0(s32 *);
    s32 *fn_80061870();
    M2C_UNK fn_8008CDE0(s32 *, s32 **);
    s32 fn_800C93EC(M2C_UNK *);
    M2C_UNK fn_800C992C(M2C_UNK *, s32, s32);
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800C9ABC(M2C_UNK *, M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_800CB90C(M2C_UNK *, M2C_UNK *, void *);
    s32 fn_80231D94(void *, void *, ...);
    s32 strlen(s32);
    extern u8 lbl_80279D50[];
    struct { s32 v[15]; } sp48;
    struct { s32 v[3]; } sp3C;
    struct { s32 v[3]; } sp30;
    struct { s32 v[3]; } sp24;
    struct { s32 v[3]; } sp18;
    struct { s32 v[3]; } spC;
    s32 sp8;
    s32 temp_r29;
    if (arg1 == NULL) {
        M2C_FIELD(arg0, s32 ***, 0x3C) = arg1;
        if (M2C_FIELD(arg0, s32 **, 0x40) != 0) {
            fn_800616A0(M2C_FIELD(arg0, s32 **, 0x40));
            M2C_FIELD(arg0, s32 **, 0x40) = 0;
        }
        if (M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            fn_8005C7E8(M2C_FIELD(arg0, s32 *, 0x54));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
    } else {
        if ((M2C_FIELD(arg0, s32 ***, 0x3C) != 0) && (*M2C_FIELD(arg0, s32 ***, 0x3C) == *arg1)) {
            M2C_FIELD(arg0, s32 ***, 0x3C) = arg1;
            fn_8008CDE0(M2C_FIELD(arg0, s32 **, 0x40), M2C_FIELD(arg0, s32 ***, 0x3C));
            return;
        }
        M2C_FIELD(arg0, s32 ***, 0x3C) = arg1;
        M2C_FIELD(arg0, s32 **, 0x40) = fn_80061870();
        fn_80231D94((M2C_UNK *)&sp48, lbl_80279D50 + 8, lbl_80279D50 + 0x11);
        fn_800C9ABC((M2C_UNK *)&sp3C, (M2C_UNK *)&sp48, (M2C_UNK *)&sp8);
        temp_r29 = **M2C_FIELD(arg0, s32 ***, 0x3C) + 4;
        fn_800C992C((M2C_UNK *)&sp3C, temp_r29, strlen(temp_r29));
        fn_800CB90C((M2C_UNK *)&sp30, (M2C_UNK *)&sp3C, lbl_80279D50 + 0x16);
        fn_800C93EC((M2C_UNK *)&sp30);
        M2C_FIELD(arg0, u32 *, 0x54) = fn_8005C84C();
        fn_800C9A60((M2C_UNK *)&sp30, -1);
        fn_800CB90C((M2C_UNK *)&sp24, (M2C_UNK *)&sp3C, lbl_80279D50 + 0x1D);
        fn_8005F4F4(M2C_FIELD(arg0, s32 **, 0x40), fn_800C93EC((M2C_UNK *)&sp24));
        fn_800C9A60((M2C_UNK *)&sp24, -1);
        fn_800CB90C((M2C_UNK *)&sp18, (M2C_UNK *)&sp3C, lbl_80279D50 + 0x22);
        fn_8005F554(M2C_FIELD(arg0, s32 **, 0x40), fn_800C93EC((M2C_UNK *)&sp18));
        fn_800C9A60((M2C_UNK *)&sp18, -1);
        fn_800CB90C((M2C_UNK *)&spC, (M2C_UNK *)&sp3C, lbl_80279D50 + 0x28);
        fn_8005F494(M2C_FIELD(arg0, s32 **, 0x40), fn_800C93EC((M2C_UNK *)&spC));
        fn_800C9A60((M2C_UNK *)&spC, -1);
        *M2C_FIELD(arg0, s32 **, 0x40) = *M2C_FIELD(arg0, s32 **, 0x40) | 0x40000000 | 0x400;
        fn_8006140C(M2C_FIELD(arg0, s32 **, 0x40));
        fn_8008CDE0(M2C_FIELD(arg0, s32 **, 0x40), M2C_FIELD(arg0, s32 ***, 0x3C));
        M2C_FIELD(arg0, s32 ***, 0x3C) = arg1;
        fn_800C9A60((M2C_UNK *)&sp3C, -1);
    }
}

#pragma cplusplus reset

void *fn_80190818(void *arg0, s16 arg1) {
    extern void *lbl_80296228;
    extern void *lbl_80292230;
    extern void *lbl_8028FDB0;
    void fn_800616A0(void);
    void fn_8005C7E8(void);
    void fn_800C428C(void *);

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_80296228;
        if (*(u32 *)((char *)arg0 + 0x40) != 0U) {
            fn_800616A0();
        }
        if (*(u32 *)((char *)arg0 + 0x54) != 0U) {
            fn_8005C7E8();
        }

        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }

        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }

    return arg0;
}

void fn_801908B4(void) {

}

#pragma cplusplus on
extern "C" void fn_801908B8(void *arg0, s32 arg1) {
    struct Obj {
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
        virtual void v11(s32) = 0;
    };
    if (*(u8 *)((u8 *)arg0 + 0x48) != 0) {
        ((Obj *)arg0)->v10();
    }
    ((Obj *)arg0)->v11(arg1);
}
#pragma cplusplus reset
void fn_80190920(void *arg0) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 fn_800102BC(M2C_UNK, f32);
    M2C_UNK fn_8008D510(u32, s32, s16, s16);
    extern f32 lbl_8036ADFC;
    extern f32 lbl_8036AE18;
    s16 temp_r29;
    s16 temp_r31;
    s16 temp_r31_2;
    u32 temp_r30;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x14)();
    temp_r31 = M2C_FIELD(arg0, s16 *, 0x46);
    temp_r30 = M2C_FIELD(arg0, u32 *, 0x3C);
    temp_r31_2 = M2C_FIELD(arg0, s16 *, 0x4A);
    temp_r29 = (s16) ((s32) (temp_r31 - fn_800102BC(-1, lbl_8036ADFC)) >> 1) + M2C_FIELD(arg0, s16 *, 0x4C);
    if (temp_r30 != 0U) {
        fn_8000A258();
        fn_80009C0C(lbl_8036AE18);
        fn_8000A248();
        fn_8008D510(temp_r30, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, u32), 0x2C)(arg0, temp_r30), temp_r31_2, temp_r29);
    }
}

s32 fn_801909E4(void *arg0, s32 *arg1) {
    s32 fn_80093DA8(void *, s32);
    void *v;

    v = *(void **)((u8 *)arg0 + 0x40);
    if (v != NULL) {
        return fn_80093DA8(v, *arg1);
    }
    return 1;
}

void fn_80190A1C(void *arg0) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    M2C_UNK fn_8008BD90(s16, s16, s32);
    M2C_UNK fn_801583D0(M2C_UNK, M2C_UNK, s16, s16, M2C_UNK, M2C_UNK);
    extern f32 lbl_8036AE1C;
    s16 var_r4;
    u8 temp_r5;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x10)();
    fn_801583D0(0, 0, (s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)), (s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)), 0xFF, 0x10);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x44) != 0) {
        fn_8000A258();
        fn_80009C0C(lbl_8036AE1C);
        fn_8000A248();
        temp_r5 = M2C_FIELD(arg0, u8 *, 0x44);
        if (temp_r5 == 1) {
            var_r4 = -0x12;
        } else {
            var_r4 = (s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)) - 6;
        }
        fn_8008BD90((s16) (((s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)) >> 1) - 0x10), var_r4, temp_r5 == 1);
    }
}

void fn_80190B00(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 2;
    M2C_FIELD(arg0, s16 *, 0x14) = 8;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0xE) - M2C_FIELD(arg0, s16 *, 0xA)) - 2);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) ((s16) (M2C_FIELD(arg0, s16 *, 0x10) - M2C_FIELD(arg0, s16 *, 0xC)) - 8);
}

void *fn_80190B50(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_8029625C[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_8029625C;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_80190D9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 temp_r4;
    
    if ((arg0 < 0) || (arg1 < 0)) {
        return -1;
    }
    
    // If either operand is zero, the result is zero
    if ((arg0 == 0) || (arg1 == 0)) {
        return 0;
    }

    // This function implements a bit more complex logic 
    // that appears to be related to some kind of computation based on arg0, arg1 and arg2
    temp_r4 = arg0 + arg1;
    temp_r3 = (temp_r4 * arg1) - (arg0 * arg2);
    
    return ((temp_r3 > 0) ? temp_r3 : 0);
}

void fn_80190F14(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

void fn_80191138(void *arg0) {
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 0x40));
    temp_r6 = M2C_FIELD(arg0, void **, 0x68);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x58);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

#pragma cplusplus on
extern "C" void fn_80191194(void *arg0) {
    struct Obj {
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
        virtual void v11(s32) = 0;
    };
    s32 fn_8013AC54(s32);
    void fn_8013AD70(s32, s32);
    Obj *fn_8013FF94(void *, s32, s32);
    void fn_8000C070(void *, s32);
    extern u8 lbl_80330708[];
    s32 temp_r31;
    Obj *temp_r30;

    temp_r31 = *(s32 *)((u8 *)arg0 + 0x50);
    temp_r30 = fn_8013FF94(arg0, 5, 0);
    fn_8013AD70(temp_r31, *(s32 *)(lbl_80330708 + 0xB0));
    temp_r30->v11(fn_8013AC54(temp_r31));
    fn_8000C070(arg0, *(u8 *)((u8 *)arg0 + 0x5D));
}
#pragma cplusplus reset

void fn_80191224(void *arg0) {
    s32 fn_8013AC54(s32);
    M2C_UNK fn_8013AD70(s32, s32);
    void **fn_8013FF94(M2C_UNK, M2C_UNK);
    extern u16 lbl_80330708[700];

    s32 temp_r31;
    void **temp_r30;
    M2C_UNK temp_r4;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x50);
    temp_r30 = fn_8013FF94(5, 0);
    temp_r4 = (M2C_UNK) &lbl_80330708[0x56];
    fn_8013AD70(temp_r31, (s32)temp_r4);
    M2C_FIELD(*temp_r30, M2C_UNK (**)(void **, s32), 0x34)(temp_r30, fn_8013AC54(temp_r31));
}

void fn_8019129C(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    fn_8000C070(arg0, *(u8 *)((char *)arg0 + 0x5D));
}

void fn_80191374(void *arg0) {
    void *temp_r3;
    
    fn_8013FF00(arg0, fn_8013FF94(-0x1000, 0));
    *(u8*)((u8*)arg0 + 0x4B) = 0;
    
    temp_r3 = *(void**)((u8*)arg0 + 0x68);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r3) != 0) {
        fn_801658DC(*(s32*)((u8*)temp_r3 + 0x4C));
    }
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_80191590(void *arg0) {
    struct Ref {
        virtual void v0(s32) = 0;
        s32 ref;
    };
    struct Child {
        u8 pad[0xC];
        s16 unkC;
    };
    struct Nest {
        u8 pad[8];
        s32 unk8;
        u8 padC[0x38];
        s32 unk44;
    };
    struct Self {
        u8 pad[0x50];
        void *unk50;
        Ref *unk54;
        Ref *unk58;
        u8 pad5C[0xC];
        Nest *unk68;
    };
    Child *fn_8013FF94(void *, s32, s32);
    void fn_8014004C(void *, void *);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_8011D79C(s32);
    void fn_80193344(void *);
    void fn_801658DC(Child *, s32);
    void fn_8000C070(void *, s32);
    s16 sp14[2];
    s16 sp10[2];
    s16 spC[2];
    s16 sp8[2];
    Child *c6;
    Self *self;
    void *saved;
    Child *c2;
    Child *c4;
    Child *c5;
    s16 t;

    self = (Self *)arg0;
    saved = self->unk50;
    c2 = fn_8013FF94(self, 2, 0);
    c4 = fn_8013FF94(self, 4, 0);
    c5 = fn_8013FF94(self, 5, 0);
    c6 = fn_8013FF94(self, 6, 0);
    fn_8014004C(self, saved);
    t = c2->unkC;
    sp14[0] = 0x260;
    sp14[1] = t;
    fn_80140258(self, c2, sp14, 0);
    if (c4 != 0) {
        t = c4->unkC;
        sp10[0] = 0x260;
        sp10[1] = t;
        fn_80140258(self, c4, sp10, 0);
    }
    if (c5 != 0) {
        t = c5->unkC;
        spC[0] = 0x260;
        spC[1] = t;
        fn_80140258(self, c5, spC, 0);
    }
    {
        Ref *p = self->unk54;
        if (p != 0) {
            if (--p->ref == 0) {
                if (p != 0) {
                    p->v0(1);
                }
            }
            self->unk54 = 0;
        }
    }
    if (c6 != 0) {
        t = c6->unkC;
        sp8[0] = 0x260;
        sp8[1] = t;
        fn_80140258(self, c6, sp8, 0);
    }
    {
        Ref *p = self->unk58;
        if (p != 0) {
            if (--p->ref == 0) {
                if (p != 0) {
                    p->v0(1);
                }
            }
            self->unk58 = 0;
        }
    }
    fn_8011D79C(self->unk68->unk8);
    fn_80193344(self);
    c6 = (Child *)self->unk68->unk44;
    {
        Child *res = fn_8013FF94(self, -0x1000, 0);
        if (res != 0) {
            fn_801658DC(res, (s32)c6);
        }
    }
    fn_8000C070(self, 3);
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

void fn_80191794(void* arg0) {
    // Minimal version to get basic control flow - let's just match the branch structure
    switch ((u8) 0x81) {  // Just one case to test basic structure
        case 0x81:
            return;
        case 0x80:
            return;
    }
}

void fn_80191938(void *arg0) {
    void fn_80024398(void *, void *, s32);
    void *fn_8013BC10(s32, s32);
    u32 fn_8013FF94(void *, s32, s32, void *);
    void fn_801658DC(u32, s32);
    s32 temp_r31;
    void *temp_r3;
    void *temp_r6;
    u32 res;

    temp_r3 = fn_8013BC10(0, 0);
    *(s16 *)((u8 *)temp_r3 + 8) = 0x178;
    *(s16 *)((u8 *)temp_r3 + 0xA) = 0x3C;
    *(u8 *)((u8 *)temp_r3 + 0x24) = 1;
    fn_80024398(temp_r3, arg0, 0);
    temp_r6 = *(void **)((u8 *)arg0 + 0x68);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x4C);
    res = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (res != 0U) {
        fn_801658DC(res, temp_r31);
    }
}

void fn_801919B8(void *arg0) {
    M2C_UNK fn_8011D79C(s32);
    void *fn_8013FF94(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80140258(void *, void *, s16 *, M2C_UNK, s16);
    M2C_UNK fn_8014027C(void *, void *, s16 *, M2C_UNK);
    M2C_UNK fn_801402A0(void *, void *, s16 *, M2C_UNK, s16);
    s16 sp12;
    s16 sp10;
    s16 spE;
    s16 spC;
    s16 spA;
    s16 sp8;
    s16 temp_r5;
    s16 temp_r7;
    s16 temp_r7_2;
    void *temp_r28;
    void *temp_r29;
    void *temp_r31;

    temp_r29 = M2C_FIELD(arg0, void **, 0x50);
    temp_r31 = M2C_FIELD(arg0, void **, 0x58);
    temp_r28 = fn_8013FF94(2, 0);
    temp_r7 = M2C_FIELD(temp_r29, s16 *, 0xC);
    sp10 = 0x260;
    sp12 = temp_r7;
    fn_80140258(arg0, temp_r29, &sp10, 0, temp_r7);
    spC = 0x138;
    spE = 0x74;
    fn_8014027C(arg0, temp_r28, &spC, 0);
    temp_r5 = M2C_FIELD(temp_r28, s16 *, 0xA) + 0x108;
    M2C_FIELD(temp_r28, s16 *, 0xE) = temp_r5;
    M2C_FIELD(temp_r28, s16 *, 0x4A) = 0x14;
    M2C_FIELD(temp_r28, s16 *, 0x4C) = 0;
    M2C_FIELD(M2C_FIELD(temp_r28, void **, 0), M2C_UNK (**)(void *, M2C_UNK, s16), 0x28)(temp_r28, 0x14, temp_r5);
    M2C_FIELD(temp_r28, s8 *, 0x48) = 1;
    M2C_FIELD(temp_r28, s8 *, 0x44) = 2;
    temp_r7_2 = M2C_FIELD(temp_r31, s16 *, 0xA);
    sp8 = temp_r7_2;
    spA = 0xA7;
    fn_801402A0(arg0, temp_r31, &sp8, 0, temp_r7_2);
    M2C_FIELD(temp_r31, s32 *, 0x3C) = 0;
    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 0x1C));
}

void fn_80191C7C(void *arg0) {
    void fn_80024398(void *, void *, s32);
    void *fn_8013BC10(s32, s32);
    u32 fn_8013FF94(void *, s32, s32, void *);
    void fn_801658DC(u32, s32);
    s32 temp_r31;
    void *temp_r3;
    void *temp_r6;
    u32 res;

    temp_r3 = fn_8013BC10(0, 0);
    *(s16 *)((u8 *)temp_r3 + 8) = 0x178;
    *(s16 *)((u8 *)temp_r3 + 0xA) = 0x3C;
    *(u8 *)((u8 *)temp_r3 + 0x24) = 1;
    fn_80024398(temp_r3, arg0, 0);
    temp_r6 = *(void **)((u8 *)arg0 + 0x68);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x4C);
    res = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (res != 0U) {
        fn_801658DC(res, temp_r31);
    }
}

#pragma cplusplus on
#pragma global_optimizer off
extern "C" void fn_80191CFC(void *arg0) {
    void *fn_800C42D8(s32);
    void fn_8011D79C(s32);
    void fn_80138808(void *, s32);
    s32 fn_8013AC54(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801400F4(void *, void *);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_8014027C(void *, void *, s16 *, s32);
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80291A3C[];
    extern u8 lbl_80292230[];

    struct Obj {
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void v6();
        virtual void v7();
        virtual void v8();
    };

    struct { s16 x; s16 y; } sp10;
    struct { s16 x; s16 y; } spC;
    struct { s16 x; s16 y; } sp8;
    void *temp_r31;
    void *temp_r30;
    void *temp_r28;
    s16 temp_r5;
    s16 temp_r6;
    s16 temp_r7;

    temp_r30 = M2C_FIELD(arg0, void **, 0x50);
    temp_r28 = fn_8013FF94(arg0, 2, 0);
    temp_r6 = M2C_FIELD(temp_r30, s16 *, 0xC);
    sp10.x = 0x260;
    sp10.y = temp_r6;
    fn_80140258(arg0, temp_r30, &sp10.x, 0);
    spC.x = 0x138;
    spC.y = 0x74;
    fn_8014027C(arg0, temp_r28, &spC.x, 0);
    temp_r5 = M2C_FIELD(temp_r28, s16 *, 0xA) + 0x108;
    M2C_FIELD(temp_r28, s16 *, 0xE) = temp_r5;
    M2C_FIELD(temp_r28, s16 *, 0x4A) = 0x14;
    M2C_FIELD(temp_r28, s16 *, 0x4C) = 0;
    ((Obj *)temp_r28)->v8();
    M2C_FIELD(temp_r28, u8 *, 0x48) = 1;
    M2C_FIELD(temp_r28, u8 *, 0x44) = 2;
    temp_r31 = fn_800C42D8(0x54);
    if (temp_r31 != NULL) {
        M2C_FIELD(temp_r31, void **, 0) = lbl_8028FDB0;
        M2C_FIELD(temp_r31, s32 *, 4) = 0;
        M2C_FIELD(temp_r31, void **, 0) = lbl_80292230;
        M2C_FIELD(temp_r31, s16 *, 8) = -1;
        M2C_FIELD(temp_r31, s16 *, 0xA) = 0x260;
        M2C_FIELD(temp_r31, s16 *, 0xC) = 0xA7;
        M2C_FIELD(temp_r31, s16 *, 0xE) = 0x368;
        M2C_FIELD(temp_r31, s16 *, 0x10) = 0xFC;
        M2C_FIELD(temp_r31, s16 *, 0x12) = 0;
        M2C_FIELD(temp_r31, s16 *, 0x14) = 0;
        M2C_FIELD(temp_r31, s16 *, 0x16) = 0x108;
        M2C_FIELD(temp_r31, s16 *, 0x18) = 0x55;
        M2C_FIELD(temp_r31, s16 *, 0x1A) = 0;
        M2C_FIELD(temp_r31, s16 *, 0x1C) = 0;
        M2C_FIELD(temp_r31, u8 *, 0x1E) = 0xFF;
        M2C_FIELD(temp_r31, u8 *, 0x1F) = 0xFF;
        M2C_FIELD(temp_r31, u8 *, 0x20) = 0xFF;
        M2C_FIELD(temp_r31, u8 *, 0x21) = 0xFF;
        M2C_FIELD(temp_r31, s16 *, 0x22) = 0x190;
        M2C_FIELD(temp_r31, s16 *, 0x24) = 0;
        M2C_FIELD(temp_r31, f32 *, 0x28) = 1.0f;
        M2C_FIELD(temp_r31, f32 *, 0x2C) = 1.0f;
        M2C_FIELD(temp_r31, f32 *, 0x30) = 1.0f;
        M2C_FIELD(temp_r31, s32 *, 0x34) = 0;
        M2C_FIELD(temp_r31, s32 *, 0x38) = 0;
        M2C_FIELD(temp_r31, void **, 0) = lbl_80291A3C;
        M2C_FIELD(temp_r31, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_r31, s32 *, 0x40) = 0x1003A;
        M2C_FIELD(temp_r31, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r31, s32 *, 0x50) = 0;
        ((Obj *)temp_r31)->v8();
        M2C_FIELD(temp_r31, s16 *, 8) = 4;
        M2C_FIELD(temp_r31, s16 *, 0x24) = 8;
        M2C_FIELD(temp_r31, s32 *, 0x34) |= 0x10;
        fn_80138808(temp_r31, fn_8013AC54(temp_r30));
        fn_801400F4(arg0, temp_r31);
        temp_r7 = M2C_FIELD(temp_r31, s16 *, 0xC);
        sp8.x = 0x138;
        sp8.y = temp_r7;
        fn_8014027C(arg0, temp_r31, &sp8.x, 0);
        fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), s32 *, 0x18));
    }
}

#pragma cplusplus on
extern "C" void fn_801925A0(void *arg0) {
    s32 fn_8013AC54(void *);
    void fn_8013FF00(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801400F4(void *, void *);
    void fn_8014027C(void *, void *, s16 *, s32);
    void fn_801402A0(void *, void *, s16 *, s32);
    u8 fn_8014D8DC(void *);
    void fn_801658DC(u32, s32);
    extern u8 lbl_80330708[];

    struct Obj {
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void v6();
        virtual void v7();
        virtual void v8();
        virtual void v9();
        virtual void v10();
        virtual void v11(s32);
    };

    s16 sp14[2];
    s16 sp10[2];
    s16 spC[2];
    s16 sp8[2];
    void *var_r31;
    void *var_r30;
    void *var_r29;
    void *obj6c;
    u32 res;
    s16 temp_r7;
    s16 temp_r5;

    var_r30 = arg0;
    if ((var_r31 = fn_8013FF94(arg0, 3, 0)) == 0) {
        var_r31 = *(void **)((u8 *)var_r30 + 0x50);
        fn_801400F4(var_r30, var_r31);
    }
    *(u8 *)((u8 *)var_r31 + 0x4C) = 1;
    if (*(s16 *)((u8 *)var_r31 + 0xA) != 0x118) {
        temp_r7 = *(s16 *)((u8 *)var_r31 + 0xC);
        sp14[0] = 0x118;
        sp14[1] = temp_r7;
        fn_8014027C(var_r30, var_r31, sp14, 0);
    }
    if (*(s16 *)((u8 *)var_r31 + 0x4E) != 0x7FFF) {
        if ((var_r29 = fn_8013FF94(var_r30, 5, 0)) == 0) {
            var_r29 = *(void **)((u8 *)var_r30 + 0x54);
            fn_801400F4(var_r30, var_r29);
        }
        ((Obj *)var_r29)->v11(fn_8013AC54(var_r31));
        if (*(s16 *)((u8 *)var_r29 + 0xA) != 0x138) {
            temp_r7 = *(s16 *)((u8 *)var_r29 + 0xC);
            sp10[0] = 0x138;
            sp10[1] = temp_r7;
            fn_8014027C(var_r30, var_r29, sp10, 0);
        }
    } else if (fn_8014D8DC(lbl_80330708) != 0) {
        if ((var_r29 = fn_8013FF94(var_r30, 6, 0)) == 0) {
            var_r29 = *(void **)((u8 *)var_r30 + 0x58);
            fn_801400F4(var_r30, var_r29);
        }
        if (*(s16 *)((u8 *)var_r29 + 0xA) != 0x134) {
            temp_r7 = *(s16 *)((u8 *)var_r29 + 0xC);
            spC[0] = 0x134;
            spC[1] = temp_r7;
            fn_8014027C(var_r30, var_r29, spC, 0);
        }
    }
    var_r29 = fn_8013FF94(var_r30, 2, 0);
    if (*(u8 *)((u8 *)var_r29 + 0x48) != 0) {
        sp8[0] = 0x14C;
        sp8[1] = 0x30;
        fn_801402A0(var_r30, var_r29, sp8, 0);
    }
    temp_r5 = *(s16 *)((u8 *)var_r29 + 0xA) + 0xE8;
    *(s16 *)((u8 *)var_r29 + 0xE) = temp_r5;
    *(s16 *)((u8 *)var_r29 + 0x4A) = 8;
    *(s16 *)((u8 *)var_r29 + 0x4C) = 0;
    ((Obj *)var_r29)->v8();
    *(u8 *)((u8 *)var_r29 + 0x48) = 0;
    *(u8 *)((u8 *)var_r29 + 0x44) = 0;
    fn_8013FF00(var_r30, var_r31);
    obj6c = *(void **)((u8 *)arg0 + 0x68);
    var_r30 = *(void **)((u8 *)obj6c + 0x48);
    res = (u32)fn_8013FF94(arg0, -0x1000, 0);
    if (res != 0U) {
        fn_801658DC(res, (s32)var_r30);
    }
}
#pragma cplusplus reset

#pragma global_optimizer reset
#pragma cplusplus reset

void fn_80192DB8(void *arg0) {
    void fn_8013F748(void *, void *, void *);
    void fn_80140258(void *, void *, s16 *, s32);
    void *fn_8013FF94(void *, s32, s32);
    s16 spC[2];
    s16 sp8[2];
    void *r31;
    void *r4;
    s16 r7;

    r31 = *(void **)((u8 *)arg0 + 0x4C);
    fn_8013F748(r31, (u8 *)arg0 + 0x5E, (u8 *)r31 + 0x7C);
    r7 = *(s16 *)((u8 *)r31 + 0xC);
    spC[0] = 0x260;
    spC[1] = r7;
    fn_80140258(arg0, r31, spC, 0);
    r4 = fn_8013FF94(arg0, 1, 0);
    r7 = *(s16 *)((u8 *)r4 + 0xC);
    sp8[0] = 0x260;
    sp8[1] = r7;
    fn_80140258(arg0, r4, sp8, 0);
}

void fn_80192E54(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8011D79C(s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(s32, s32);
    extern u8 lbl_802EF4C8[];
    s32 temp_r31;
    void *temp_r6;
    u32 result;

    switch ((s32)lbl_802EF4C8[8]) {
    case 0x80:
        fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)arg0 + 0x68) + 0xC));
        temp_r6 = *(void **)((u8 *)arg0 + 0x68);
        temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x44);
        result = fn_8013FF94(arg0, -0x1000, 0);
        if (result != 0U) {
            fn_801658DC(result, temp_r31);
        }
        fn_8000C070(arg0, 3);
        break;
    case 0x81:
        break;
    }
}

void fn_80192EE8(void *arg0) {
    extern u8 lbl_80279DF0[];
    void *fn_8013BC10(void *, void *);
    void fn_80024398(void *, void *, s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(s32, s32);
    void *temp_r3;
    void *temp_r6;
    s32 temp_r31;
    u32 result;

    temp_r3 = fn_8013BC10(lbl_80279DF0 + 0x4EE, lbl_80279DF0 + 0x4F6);
    *(s16 *)((u8 *)temp_r3 + 8) = 0x178;
    *(s16 *)((u8 *)temp_r3 + 0xA) = 0x3C;
    *(s8 *)((u8 *)temp_r3 + 0x24) = 1;
    fn_80024398(temp_r3, arg0, 0);
    temp_r6 = *(void **)((u8 *)arg0 + 0x68);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x4C);
    result = fn_8013FF94(arg0, -0x1000, 0);
    if (result != 0U) {
        fn_801658DC(result, temp_r31);
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_80192F70(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void fn_8000D8BC(s32, s32);
    u32 *fn_8001CB64(void *);
    u32 fn_8001D2A4(void *);
    void fn_8011D79C(s32);
    void fn_8013FDA0(void *);
    u32 fn_8013FF94(void *, s32, s32);
    s32 *fn_80143A84(void *);
    void fn_801475FC(void *, s32);
    void fn_801658DC(u32, s32);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, s32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, s32, f32, f32);
    extern u8 lbl_80279DF0[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;

    class Pair {
    public:
        s16 x;
        s16 y;
        Pair() {}
        Pair(s16 a, s16 b) : x(a), y(b) {}
        Pair(const Pair &o) { *(u32 *)this = *(u32 *)&o; }
        Pair &operator=(const Pair &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    void fn_80140258(void *, void *, const Pair &, s32);
    struct Obj {
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
        virtual Pair v13() = 0;
    };
    struct Child {
        u8 pad[0xC];
        s16 unkC;
        u8 padE[0x2E];
        s32 unk3C;
    };

    void *obj40;
    s32 *var_r30;
    Child *child;
    void *self;
    register int btn;
    register u8 gate;
    register int flags;
    void *unit;
    u32 *bits;
    void *nest;
    s32 saved;
    u32 ret;
    s32 val;
    u32 pos1;
    u32 pos2;
    f32 price;
    f32 scale;

    self = arg0;
    obj40 = *(void **)((u8 *)arg0 + 0x4C);
    var_r30 = fn_80143A84(obj40);
    *(u8 *)((u8 *)obj40 + 0x4C) = 1;
    fn_8013FDA0(arg0);
    if (var_r30 != fn_80143A84(obj40)) {
        var_r30 = fn_80143A84(obj40);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            if (var_r30 != NULL) {
                *(Pair *)&pos1 = ((Obj *)obj40)->v13();
                fn_80166DD0(lbl_80330D68, *var_r30, (f32)*(s16 *)&pos1, (f32)*((s16 *)&pos1 + 1));
            } else {
                fn_801673D0(lbl_80330D68);
            }
        }
    }
    child = (Child *)fn_8013FF94(arg0, 1, 0);
    val = *(s32 *)*var_r30;
    child->unk3C = val;
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && var_r30 != NULL && fn_80166D8C(lbl_80330D68) == 0) {
              unit = (void *)*var_r30;
              price = (f32)(s32)(u16)fn_8001D2A4(unit);
              scale = *(f32 *)((u8 *)self + 0x64);
              if ((s32)(scale * price) > *(s32 *)((u8 *)lbl_80330708 + 0x18)) {
                  fn_801475FC((u8 *)lbl_80279DF0 + 0x501, 0x64);
                  fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)self + 0x68) + 0x20));
                  nest = *(void **)((u8 *)self + 0x68);
                  saved = *(s32 *)((u8 *)nest + 0x54);
                  ret = fn_8013FF94(self, -0x1000, 0);
                  if (ret != 0) fn_801658DC(ret, saved);
                  fn_8000C070(self, 0xB);
              } else {
                  fn_801475FC((u8 *)lbl_80279DF0 + 0x4BC, 0x64);
                  val = (s32)(u16)fn_8001D2A4(unit);
                  price = (f32)val;
                  scale = *(f32 *)((u8 *)self + 0x64);
                  fn_8000D8BC(0, (s32)(scale * price));
                  fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)self + 0x68) + 0x10));
                  fn_8000C188(self);
              }
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0 && var_r30 != NULL) {
            *(Pair *)&pos2 = ((Obj *)obj40)->v13();
            fn_8016746C(lbl_80330D68, self, *var_r30, (f32)*(s16 *)&pos2, (f32)*((s16 *)&pos2 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            *(u8 *)((u8 *)obj40 + 0x4C) = 0;
            fn_80140258(self, child, Pair(0x260, child->unkC), 0);
            fn_8000C070(self, 0x11);
            fn_801475FC((u8 *)lbl_80279DF0 + 0x4DE, 0x64);
        }
    }
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

void fn_80193540(void* unit) {
    // Implementation to be written
}

void fn_80193668(void *arg0) {
    void *fn_800C42D8(s32);
    void fn_800C96F8(void *, char *, u32);
    void fn_801400F4(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801658DC(u32, s32);
    s32 fn_80019E04(void *);
    void fn_80015320(s32, void *);
    s8 fn_80091DE0(void *, s32);
    s32 fn_800C39A4(void *, s32);
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80293C84[];
    extern u8 lbl_80293C58[];
    extern u8 lbl_80279DF0[];
    extern u8 lbl_802B14E4[];
    extern u8 lbl_803200AC[];
    extern f32 lbl_8036AE20;
    extern f32 lbl_8036AE30;
    u8 sp8[8];
    void *unit;
    s32 i;
    s32 key;
    u8 found;
    void *obj;
    void *self;

    self = arg0;
    obj = fn_800C42D8(0x5C);
    if (obj != NULL) {
        *(void **)obj = lbl_8028FDB0;
        *(s32 *)((u8 *)obj + 4) = 0;
        *(void **)obj = lbl_80292230;
        *(s16 *)((u8 *)obj + 8) = -1;
        *(s16 *)((u8 *)obj + 0xA) = 0;
        *(s16 *)((u8 *)obj + 0xC) = 0x190;
        *(s16 *)((u8 *)obj + 0xE) = 0x260;
        *(s16 *)((u8 *)obj + 0x10) = 0x1C0;
        *(s16 *)((u8 *)obj + 0x12) = 0;
        *(s16 *)((u8 *)obj + 0x14) = 0;
        *(s16 *)((u8 *)obj + 0x16) = 0x260;
        *(s16 *)((u8 *)obj + 0x18) = 0x30;
        *(s16 *)((u8 *)obj + 0x1A) = 0;
        *(s16 *)((u8 *)obj + 0x1C) = 0;
        *(u8 *)((u8 *)obj + 0x1E) = 0xFF;
        *(u8 *)((u8 *)obj + 0x1F) = 0xFF;
        *(u8 *)((u8 *)obj + 0x20) = 0xFF;
        *(u8 *)((u8 *)obj + 0x21) = 0xFF;
        *(s16 *)((u8 *)obj + 0x22) = 0x5A;
        *(s16 *)((u8 *)obj + 0x24) = 0;
        *(f32 *)((u8 *)obj + 0x28) = 1.0f;
        *(f32 *)((u8 *)obj + 0x2C) = 1.0f;
        *(f32 *)((u8 *)obj + 0x30) = 1.0f;
        *(s32 *)((u8 *)obj + 0x34) = 0;
        *(s32 *)((u8 *)obj + 0x38) = 0;
        *(void **)obj = lbl_80293C84;
        *(s32 *)((u8 *)obj + 0x3C) = 0;
        *(s32 *)((u8 *)obj + 0x40) = 0;
        *(s32 *)((u8 *)obj + 0x44) = 0;
        *(s32 *)((u8 *)obj + 0x40) = 0;
        *(s32 *)((u8 *)obj + 0x48) = 0;
        *(u8 *)((u8 *)obj + 0x4C) = 1;
        *(s16 *)((u8 *)obj + 0x4E) = 0;
        *(s16 *)((u8 *)obj + 0x50) = 0;
        *(s16 *)((u8 *)obj + 0x52) = 0;
        *(s16 *)((u8 *)obj + 0x54) = 0;
        *(void **)obj = lbl_80293C58;
        *(s32 *)((u8 *)obj + 0x58) = 1;
        *(s16 *)((u8 *)obj + 0x4E) = 0x30;
        *(s16 *)((u8 *)obj + 0x52) = 0x30;
    }
    *(s16 *)((u8 *)obj + 8) = -0x1000;
    *(s32 *)((u8 *)obj + 0x48) = 1;
    fn_800C96F8((u8 *)obj + 0x3C, (char *)((u32)lbl_80279DF0 + 0x50F), strlen((char *)((u8 *)lbl_80279DF0 + 0x50F)));
    *(s32 *)((u8 *)obj + 0x34) |= 0x10;
    *(s32 *)((u8 *)obj + 0x58) = 1;
    fn_801400F4(self, obj);
    key = *(s32 *)((u8 *)*(void **)((u8 *)self + 0x68) + 0x50);
    obj = fn_8013FF94(self, -0x1000, 0);
    if (obj != NULL) {
        fn_801658DC((u32)obj, key);
    }
    found = 0;
    *(f32 *)((u8 *)self + 0x64) = lbl_8036AE20;
    key = fn_80019E04(lbl_80279DF0 + 0x510);
    fn_80015320(4, sp8);
    for (i = 1; i <= 0x9F; i++) {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)((u8 *)unit + 0x188) != 0 &&
            sp8[*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)] != 0 &&
            (s8)fn_80091DE0(unit, key) >= 0) {
            found = 1;
            break;
        }
    }
    if (found == 0) {
        if (fn_800C39A4(lbl_803200AC, key) >= 0) {
            found = 1;
        }
    }
    if (found != 0) {
        *(f32 *)((u8 *)self + 0x64) *= lbl_8036AE30;
    }
}

#pragma cplusplus on
extern "C" void *fn_801938F8(void *arg0) {
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual void m14() = 0;
        virtual void m18() = 0;
        virtual void m1C() = 0;
        virtual void m20() = 0;
        virtual void m24() = 0;
        virtual void m28() = 0;
    };
    fn_80193950(arg0);
    *(void **)((u8 *)arg0 + 0x0) = (void *)lbl_8029656C;
    *(s32 *)((u8 *)arg0 + 0x60) = 2;
    ((Obj *) arg0)->m28();
    return arg0;
}

void* fn_80193950(void* arg0, s16 arg1, s16 arg2, s16 arg3) {
    // Simplified version - just return the input pointer
    // Most likely this is a structure initializer that directly modifies 
    // the input structure in place and returns it
    
    void* r3 = arg0;
    
    // Just write a very basic initialization to see if we can get at least some match
    *(u32*)((char*)r3 + 0x0) = 0;  
    *(s16*)((char*)r3 + 0x8) = -1;  
    *(s16*)((char*)r3 + 0xA) = arg1;
    *(s16*)((char*)r3 + 0xC) = arg2;
    
    return r3;
}

#pragma cplusplus reset

void *fn_80193AF0(void *arg0, s16 arg1) {
    M2C_UNK fn_80165100(void *, s32);
    M2C_UNK fn_800C428C(void *);
    extern u8 lbl_8029656C[];
    extern u8 lbl_80293B74[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = lbl_8029656C;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0) = lbl_80293B74;
            fn_80165100(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma cplusplus on
extern "C" void *fn_80193B60(void *arg0) {
    struct Obj {
        virtual void m08() = 0;
        virtual void m0C() = 0;
        virtual void m10() = 0;
        virtual void m14() = 0;
        virtual void m18() = 0;
        virtual void m1C() = 0;
        virtual void m20() = 0;
        virtual void m24() = 0;
        virtual void m28() = 0;
    };
    fn_8017A000(arg0);
    *(void **)((u8 *)arg0 + 0x0) = (void *)lbl_80291AC8;
    *(s16 *)((u8 *)arg0 + 0xD4) = 1;
    ((Obj *) arg0)->m28();
    return arg0;
}
#pragma cplusplus reset

void *fn_80193BB8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80179BC8(void *);
    extern u8 lbl_80292358[];
    extern f32 lbl_8036AE20;
    f32 f;

    fn_80179BC8(arg0);
    f = lbl_8036AE20;
    *(u8 **)((u8 *)arg0 + 0x0) = lbl_80292358;
    *(f32 *)((u8 *)arg0 + 0x128) = f;
    *(s16 *)((u8 *)arg0 + 0x88) = 0xC;
    *(s16 *)((u8 *)arg0 + 0x8A) = 0;
    *(s16 *)((u8 *)arg0 + 0x80) = (arg4 - (M2C_FIELD(arg0, s16 *, 0x8A) + 0xC)) / 32;
    *(s32 *)(*(u8 **)((u8 *)arg0 + 0x48) + 0x48) = 2;
    return arg0;
}

void fn_80193C3C(void ***arg0, s32 *arg1, void ***arg2, void ***arg3) {
    M2C_UNK fn_8001C5F8(void *, M2C_UNK);
    M2C_UNK fn_800C428C(void **);
    void **temp_r0;
    void **temp_r3;
    void **temp_r3_2;
    void **temp_r3_3;
    void **temp_r5;
    void *temp_r4;

    temp_r5 = *arg2;
    temp_r3 = *arg3;
    if (temp_r5 == temp_r3) {
        *arg0 = temp_r3;
        return;
    }
    temp_r4 = *temp_r3;
    M2C_FIELD(*temp_r5, void ***, 4) = (void **) M2C_FIELD(temp_r4, void ***, 4);
    *M2C_FIELD(temp_r4, void ***, 4) = *temp_r5;
loop_4:
    temp_r3_2 = *arg2;
    temp_r0 = *arg3;
    if (temp_r3_2 != temp_r0) {
        fn_8001C5F8(temp_r3_2 + 8, -1);
        temp_r3_3 = *arg2;
        *arg2 = M2C_FIELD(temp_r3_3, void ***, 4);
        fn_800C428C(temp_r3_3);
        *arg1 -= 1;
        goto loop_4;
    }
    *arg0 = temp_r0;
}

int fn_80193DC0(void *arg0) {
    u32 *ptr;

    ptr = (u32 *)((u8 *)arg0 + 0x4);
    *(u32 *)arg0 = 0;
    ptr[1] = (u32)ptr;
    ptr[0] = (u32)ptr;
}

void *fn_80193DD8(u32 arg0) {
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, u32);
    void fn_801403F0(void *);
    extern u8 lbl_802965C0[];
    extern u8 lbl_80296674[];
    void *var_r31;

    if (arg0 != 0U) {
        var_r31 = fn_8000CAA0(lbl_802965C0, arg0);
    } else {
        var_r31 = fn_8000CAF0(lbl_802965C0, arg0);
    }
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(s32 *)((u8 *)var_r31 + 0x40) = 0;
        *(u8 **)((u8 *)var_r31 + 0x44) = lbl_80296674;
    }
    return var_r31;
}

void fn_80193E58(void) {

}

void fn_80193E5C(void) {
    void fn_8003BE50(void *);
    extern u8 lbl_802EF4C8[];
    fn_8003BE50(*(void **)(lbl_802EF4C8 + 4));
}

void fn_80193F3C(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

#pragma cplusplus on
extern "C" void fn_80140304(void *, s32);
extern "C" void fn_80193F5C(void *arg0) {
    extern u16 lbl_80367A58;
    struct Obj {
        virtual void destroy(s32) = 0;
        s32 refcount;
    };
    Obj *obj;

    lbl_80367A58 &= ~0x10;
    if (arg0 != NULL) {
        obj = *(Obj **)((u8 *)arg0 + 0x40);
        if (obj != NULL) {
            if (--obj->refcount == 0 && obj != NULL) {
                obj->destroy(1);
            }
            *(Obj **)((u8 *)arg0 + 0x40) = (Obj *)0;
        }
        fn_80140304(arg0, 0);
    }
}
#pragma cplusplus reset
void fn_80194064(void *arg0) {
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0x20));
    temp_r6 = M2C_FIELD(arg0, void **, 0x44);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x34);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_80194174(void) {

}

#pragma cplusplus on
extern "C" void fn_80194178(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000CAA0(void *, void *, void *);
    void *fn_8001CB64(void *);
    u32 fn_8001D2A4(void *);
    void fn_8001D580(void *);
    void fn_800947E0(void *);
    void fn_8011D79C(s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_80143570(void *);
    void fn_801436AC(void *, void *);
    void fn_80143784(void *, void *);
    void *fn_80143A84(void *);
    void fn_80143C9C(void *);
    void fn_8014D268(void *, s32, s32);
    void fn_801658DC(u32, s32);
    void fn_80184C7C(void *, s32, s32, s32);
    extern u8 lbl_802966B0[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    struct Obj {
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
        virtual void v12(void *) = 0;
    };
    void *temp_r31;
    void *temp_r30;
    void *temp_r29;
    void *temp_r3;
    s32 temp_r5;
    s32 saved;
    void *temp_r6;
    u32 result;

    switch ((s32)lbl_802EF4C8[8]) {
    case 0x81:
        temp_r29 = *(void **)((u8 *)arg0 + 0x40);
        temp_r3 = fn_80143A84(temp_r29);
        temp_r31 = *(void **)temp_r3;
        temp_r30 = *(void **)((u8 *)temp_r3 + 4);
        temp_r5 = (s32)((fn_8001D2A4(temp_r31) >> 1) & 0x7FFFu);
        fn_8014D268(lbl_80330708, *(s32 *)(lbl_80330708 + 0x18) + temp_r5, temp_r5);
        ((Obj *)temp_r29)->v12(temp_r31);
        if (__rlwinm(*(u8 *)((u8 *)temp_r31 + 5), 25, 31, 31)) {
            if ((*(u64 *)fn_8001CB64(temp_r31) & 0x100000000ULL) != 0
                && (*(s32 *)((u8 *)temp_r30 + 0x1A0) & 0x800000) != 0) {
                *(u8 *)((u8 *)temp_r31 + 5) =
                    (u8)__rlwimi(*(u8 *)((u8 *)temp_r31 + 5), 0, 7, 24, 24);
                *(void **)(lbl_802EF4C8 + 4) = temp_r30;
                fn_8000CAA0(lbl_802966B0, arg0, lbl_802EF4C8);
            }
        }
        fn_8001D580(temp_r31);
        if (temp_r30 != NULL) {
            fn_800947E0(temp_r30);
            fn_80143784(temp_r29, temp_r30);
            fn_80184C7C(temp_r30, 0, 2, 0);
        } else {
            fn_801436AC(temp_r29, temp_r31);
        }
        fn_80143570(temp_r29);
        fn_80143C9C(temp_r29);
        fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)arg0 + 0x44) + 0xC));
        temp_r6 = *(void **)((u8 *)arg0 + 0x44);
        saved = *(s32 *)((u8 *)temp_r6 + 0x24);
        result = fn_8013FF94(arg0, -0x1000, 0);
        if (result != 0U) {
            fn_801658DC(result, saved);
        }
        fn_8000C070(arg0, 3);
        break;
    case 0x80:
        fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)arg0 + 0x44) + 0x10));
        temp_r6 = *(void **)((u8 *)arg0 + 0x44);
        saved = *(s32 *)((u8 *)temp_r6 + 0x24);
        result = fn_8013FF94(arg0, -0x1000, 0);
        if (result != 0U) {
            fn_801658DC(result, saved);
        }
        fn_8000C070(arg0, 3);
        break;
    }
}
#pragma cplusplus reset

void fn_80194374(void *arg0) {
    extern u8 lbl_8027A360[];
    void *fn_8013BC10(void *, void *);
    void fn_80024398(void *, void *, s32);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801658DC(s32, s32);
    void *temp_r3;
    void *temp_r6;
    s32 temp_r31;
    u32 result;

    temp_r3 = fn_8013BC10(lbl_8027A360 + 0x18C, lbl_8027A360 + 0x195);
    *(s16 *)((u8 *)temp_r3 + 8) = 0x178;
    *(s16 *)((u8 *)temp_r3 + 0xA) = 0x3C;
    *(s8 *)((u8 *)temp_r3 + 0x24) = 1;
    fn_80024398(temp_r3, arg0, 0);
    temp_r6 = *(void **)((u8 *)arg0 + 0x44);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x28);
    result = fn_8013FF94(arg0, -0x1000, 0);
    if (result != 0U) {
        fn_801658DC(result, temp_r31);
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801943FC(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void fn_8000D8BC(s32, s32);
    u32 *fn_8001CB64(void *);
    u32 fn_8001D2A4(void *);
    void fn_8011D79C(s32);
    void fn_8013FDA0(void *);
    u32 fn_8013FF94(void *, s32, s32);
    s32 *fn_80143A84(void *);
    void fn_801475FC(void *, s32);
    void fn_801658DC(u32, s32);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, s32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, s32, f32, f32);
    extern u8 lbl_8027A360[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;

    class Pair {
    public:
        s16 x;
        s16 y;
        Pair() {}
        Pair(s16 a, s16 b) : x(a), y(b) {}
        Pair(const Pair &o) { *(u32 *)this = *(u32 *)&o; }
        Pair &operator=(const Pair &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    void fn_80140258(void *, void *, const Pair &, s32);
    struct Obj {
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
        virtual Pair v13() = 0;
    };
    struct Child {
        u8 pad[0xC];
        s16 unkC;
        u8 padE[0x2E];
        s32 unk3C;
    };

    void *obj40;
    s32 *var_r30;
    Child *child;
    void *self;
    register int btn;
    register u8 gate;
    register int flags;
    void *unit;
    u32 *bits;
    void *nest;
    s32 saved;
    u32 ret;
    s32 val;
    u32 pos1;
    u32 pos2;

    self = arg0;
    obj40 = *(void **)((u8 *)arg0 + 0x40);
    var_r30 = fn_80143A84(obj40);
    *(u8 *)((u8 *)obj40 + 0x4C) = 1;
    fn_8013FDA0(arg0);
    if (var_r30 != fn_80143A84(obj40)) {
        var_r30 = fn_80143A84(obj40);
        if (fn_80166D8C(lbl_80330D68) != 0) {
            if (var_r30 != NULL) {
                *(Pair *)&pos1 = ((Obj *)obj40)->v13();
                fn_80166DD0(lbl_80330D68, *var_r30, (f32)*(s16 *)&pos1, (f32)*((s16 *)&pos1 + 1));
            } else {
                fn_801673D0(lbl_80330D68);
            }
        }
    }
    child = (Child *)fn_8013FF94(arg0, 1, 0);
    if (var_r30 != NULL) {
        val = *(s32 *)*var_r30;
    } else {
        val = 0;
    }
    child->unk3C = val;
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && var_r30 != NULL && fn_80166D8C(lbl_80330D68) == 0) {
            unit = (void *)*var_r30;
            fn_801475FC((u8 *)lbl_8027A360 + 0x1a0, 0x64);
            bits = fn_8001CB64(unit);
            if ((*(u64 *)bits & 0x20000000000ULL) != 0) {
                fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)self + 0x44) + 0x18));
                nest = *(void **)((u8 *)self + 0x44);
                saved = *(s32 *)((u8 *)nest + 0x30);
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != 0) {
                    fn_801658DC(ret, saved);
                }
                fn_8000C070(self, 5);
            } else {
                fn_8000D8BC(0, (s32)((fn_8001D2A4(unit) >> 1) & 0x7FFF));
                fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)self + 0x44) + 0x14));
                fn_8000C188(self);
            }
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0 && var_r30 != NULL) {
            *(Pair *)&pos2 = ((Obj *)obj40)->v13();
            fn_8016746C(lbl_80330D68, self, *var_r30, (f32)*(s16 *)&pos2, (f32)*((s16 *)&pos2 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            *(u8 *)((u8 *)obj40 + 0x4C) = 0;
            fn_80140258(self, child, Pair(0x260, child->unkC), 0);
            fn_8000C070(self, 6);
            fn_801475FC((u8 *)lbl_8027A360 + 0x1b0, 0x64);
        }
    }
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_8019477C(void *arg0) {
    void *fn_8013FF94(void *, s32, s32);
    void fn_801400F4(void *, void *);
    void fn_8014027C(void *, void *, s16 *, s32);
    void *fn_800C42D8(u32);
    void *fn_80143A84(void *);
    void fn_8013FF00(void *, void *);
    void fn_801658DC(void *, void *);
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_802961F4[];
    struct { s16 x; s16 y; } spC;
    struct { s16 x; s16 y; } sp8;
    void *p;
    void *obj;
    void *msg;
    s16 tmp;
    struct Obj {
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void v6();
        virtual void v7();
        virtual void v8();
    };

    p = NULL;
    obj = fn_8013FF94(arg0, 0, 0);
    if (obj == NULL) {
        obj = M2C_FIELD(arg0, void **, 0x40);
        fn_801400F4(arg0, obj);
    }
    if (M2C_FIELD(obj, s16 *, 0xA) != 0x108) {
        register tmp = M2C_FIELD(obj, s16 *, 0xC);
        spC.x = 0x108;
        spC.y = tmp;
        fn_8014027C(arg0, obj, &spC.x, 0);
    }
    if (fn_8013FF94(arg0, 1, 0) == NULL) {
        p = fn_800C42D8(0x44);
        if (p != NULL) {
            M2C_FIELD(p, void **, 0) = lbl_8028FDB0;
            M2C_FIELD(p, void **, 0) = lbl_80292230;
            M2C_FIELD(p, u32 *, 4) = 0;
            M2C_FIELD(p, s16 *, 8) = -1;
            M2C_FIELD(p, s16 *, 0xA) = 0x260;
            M2C_FIELD(p, s16 *, 0xC) = 0x14C;
            M2C_FIELD(p, s16 *, 0xE) = 0x349;
            M2C_FIELD(p, s16 *, 0x10) = 0x193;
            M2C_FIELD(p, s16 *, 0x12) = 0;
            M2C_FIELD(p, s16 *, 0x14) = 0;
            M2C_FIELD(p, s16 *, 0x16) = 0xE9;
            M2C_FIELD(p, s16 *, 0x18) = 0x47;
            M2C_FIELD(p, s16 *, 0x1A) = 0;
            M2C_FIELD(p, s16 *, 0x1C) = 0;
            M2C_FIELD(p, u8 *, 0x1E) = 0xFF;
            M2C_FIELD(p, u8 *, 0x1F) = 0xFF;
            M2C_FIELD(p, u8 *, 0x20) = 0xFF;
            M2C_FIELD(p, u8 *, 0x21) = 0xFF;
            M2C_FIELD(p, s16 *, 0x22) = 0x1F4;
            M2C_FIELD(p, s16 *, 0x24) = 0;
            M2C_FIELD(p, f32 *, 0x28) = 1.0f;
            M2C_FIELD(p, f32 *, 0x2C) = 1.0f;
            M2C_FIELD(p, f32 *, 0x30) = 1.0f;
            M2C_FIELD(p, u32 *, 0x34) = 0;
            M2C_FIELD(p, u32 *, 0x38) = 0;
            M2C_FIELD(p, void **, 0) = lbl_802961F4;
            M2C_FIELD(p, u32 *, 0x3C) = 0;
            ((Obj *)p)->v8();
        }
        M2C_FIELD(p, s16 *, 8) = 1;
        M2C_FIELD(p, s16 *, 0x24) = 8;
        if (fn_80143A84(obj) != NULL) {
            M2C_FIELD(p, u32 *, 0x3C) = *(u32 *)(*(void **)fn_80143A84(obj));
        }
        fn_801400F4(arg0, p);
        tmp = M2C_FIELD(p, s16 *, 0xC);
        sp8.x = 0x158;
        sp8.y = tmp;
        fn_8014027C(arg0, p, &sp8.x, 0);
    }
    fn_8013FF00(arg0, obj);
    msg = M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), void **, 0x24);
    p = fn_8013FF94(arg0, -0x1000, 0);
    if (p != NULL) {
        fn_801658DC(p, msg);
    }
}
extern "C" void fn_80194988(void *arg0) {
    void *fn_800C42D8(s32);
    void *fn_80194DA0(void *, s32, s32, s32, s32, s32);
    void **fn_80037BBC(void *, s32);
    void fn_801439F0(void *, void *, void *);
    u8 fn_8014D8DC(void *);
    void fn_80143570(void *);
    void fn_801400F4(void *, void *);
    void fn_8011D908(s32, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801658DC(u32, s32);
    extern struct { void *head; s32 unk4; s32 unk8; } lbl_802CA264[];
    extern u8 lbl_80330708[];
    extern u32 lbl_803200AC[];

    struct Obj {
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void v6();
        virtual void v7();
        virtual void v8();
        virtual void v9();
        virtual void v10();
        virtual void v11();
    };

    struct Panel {
        u8 pad0[8];
        s16 f8;
        u8 pad1[0x1A];
        s16 f24;
        u8 pad2[0x64];
        s16 f8A;
    };

    register void *walk;
    register s32 i;
    void *dst;
    void *unit;
    void *self;
    void *obj;
    void **entry;
    void *saved;
    u32 res;
    Panel *panel;

    self = arg0;
    obj = fn_800C42D8(0x12C);
    if (obj != NULL) {
        obj = fn_80194DA0(obj, 0x108, 0x84, 0x138, 0xC4, 0x1F4);
    }
    *(void **)((u8 *)self + 0x40) = obj;
    obj = *(void **)((u8 *)self + 0x40);
    if (obj != NULL) {
        *(s32 *)((u8 *)obj + 4) = *(s32 *)((u8 *)obj + 4) + 1;
    }
    panel = *(Panel **)((u8 *)self + 0x40);
    panel->f8 = 0;
    panel = *(Panel **)((u8 *)self + 0x40);
    panel->f24 = 8;
    panel = *(Panel **)((u8 *)self + 0x40);
    panel->f8A = 0xA;

    dst = *(void **)((u8 *)self + 0x40);
    unit = lbl_802CA264[0].head;
    goto loop1_cond;
loop1_body:
    for (i = 0; i < 4; i++) {
        entry = fn_80037BBC(unit, i);
        if (*(u32 *)entry == 0) {
            break;
        }
        fn_801439F0(dst, entry, unit);
    }
    i = 0;
    walk = unit;
    while (i < 4) {
        if (*(u32 *)((u8 *)walk + 0x1EC) == 0) {
            break;
        }
        fn_801439F0(dst, (u8 *)walk + 0x1EC, unit);
        i += 1;
        walk = (u8 *)walk + 8;
    }
    unit = *(void **)((u8 *)unit + 0x184);
loop1_cond:
    if (unit != NULL) {
        goto loop1_body;
    }

    dst = *(void **)((u8 *)self + 0x40);
    unit = *(void **)((u8 *)lbl_802CA264 + 0x3C);
    goto loop2_cond;
loop2_body:
    for (i = 0; i < 4; i++) {
        entry = fn_80037BBC(unit, i);
        if (*(u32 *)entry == 0) {
            break;
        }
        fn_801439F0(dst, entry, unit);
    }
    i = 0;
    walk = unit;
    while (i < 4) {
        if (*(u32 *)((u8 *)walk + 0x1EC) == 0) {
            break;
        }
        fn_801439F0(dst, (u8 *)walk + 0x1EC, unit);
        i += 1;
        walk = (u8 *)walk + 8;
    }
    unit = *(void **)((u8 *)unit + 0x184);
loop2_cond:
    if (unit != NULL) {
        goto loop2_body;
    }

    if (fn_8014D8DC(lbl_80330708) != 0) {
        dst = *(void **)((u8 *)self + 0x40);
        walk = lbl_803200AC;
        i = 0;
        while (i < 0xC8) {
            if (*(u32 *)walk != 0) {
                fn_801439F0(dst, walk, NULL);
            }
            i += 1;
            walk = (u8 *)walk + 8;
        }
    }

    fn_80143570(*(void **)((u8 *)self + 0x40));
    obj = *(void **)((u8 *)self + 0x40);
    *(s32 *)((u8 *)obj + 0x11C) = 3;
    *(u8 *)((u8 *)*(void **)((u8 *)self + 0x40) + 0x4C) = 0;
    ((Obj *)*(void **)((u8 *)self + 0x40))->v11();
    fn_801400F4(self, *(void **)((u8 *)self + 0x40));
    fn_8011D908(*(s32 *)((u8 *)*(void **)((u8 *)self + 0x44) + 4), self);
    saved = *(void **)((u8 *)*(void **)((u8 *)self + 0x44) + 0x2C);
    res = (u32)fn_8013FF94(self, -0x1000, 0);
    if (res != 0U) {
        fn_801658DC(res, (s32)saved);
    }
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma cplusplus reset

void *fn_80194DA0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_80179800(void *);
    extern u8 lbl_802923E0[];

    fn_80179800(arg0);
    *(u8 **)arg0 = lbl_802923E0;
    *(s16 *)((u8 *)arg0 + 0x88) = 0xC;
    *(s16 *)((u8 *)arg0 + 0x8A) = 0;
    *(s16 *)((u8 *)arg0 + 0x80) = (s16)((arg4 - (*(s16 *)((u8 *)arg0 + 0x8A) + 0xC)) / 32);
    return arg0;
}

extern u8 lbl_802966D8[16];
void fn_80194E10(void) {
    fn_8000BF00(&lbl_802966D8);
}

void *fn_80194F54(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_802966D8[16];
    void *obj;

    obj = fn_8000C0C0(lbl_802966D8);
    if (obj == NULL) {
        obj = fn_8000CAF0(lbl_802966D8, 3);
    }
    return (void *)(*(s32 *)((u8 *)obj + 0x30) + arg0 * 0x3250);
}

void fn_801950CC(void *arg0) {
    M2C_UNK fn_800C426C(s32);
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x30);
    if (temp_r3 != 0U) {
        fn_800C426C(temp_r3 - 0x10);
    }
}

void fn_801950FC(void *arg0) {
    void *fn_800C42AC(s32);
    s32 fn_8022C414(void *, void *, void *, s32, s32);
    void fn_80196018(void *);
    M2C_FIELD(arg0, s32 *, 0x30) = fn_8022C414(fn_800C42AC(0x19290), fn_80196018, 0, 0x3250, 8);
}

void fn_8019514C(void *arg0, void *arg1) {
    u8 *dst = (u8 *)arg0;
    u8 *src = (u8 *)arg1;
    
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

void fn_80195170(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 4) = arg1;
}

void fn_80195880(void *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 1;
}

void fn_8019588C(void *arg0, s32 arg1) {
    extern f32 lbl_8036AE50;
    f32 vals[2];

    *(f32 *)((u8 *)arg0 + 0x14) = *(f32 *)((u8 *)arg0 + 0x10);
    vals[0] = (f32)arg1;
    vals[1] = lbl_8036AE50;
    *(f32 *)((u8 *)arg0 + 0x18) = vals[0];
    *(f32 *)((u8 *)arg0 + 0x1C) = vals[1];
}

#pragma dont_inline on
void fn_801958C8(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f0, temp_f1, temp_f2;
    s32 temp_r3;
    s32 var_r6;
    s32 var_r7;
    u8 temp_r0;
    void *temp_r10;
    void *temp_r5;
    void *var_r8;
    void *var_r9;

    var_r7 = 0;
    temp_r5 = (void*)((u8*)arg0 + ((*(u8*)((u8*)arg0 + 0x8) * 0xC) + 0xA0));
    *(f32*)((u8*)temp_r5 + 0x0) = *(f32*)((u8*)arg2 + 0x0);
    *(f32*)((u8*)temp_r5 + 0x4) = *(f32*)((u8*)arg2 + 0x4);
    *(f32*)((u8*)temp_r5 + 0x8) = *(f32*)((u8*)arg2 + 0x8);
    *(s32*)((u8*)arg0 + (*(u8*)((u8*)arg0 + 0x8) * 4) + 0x20) = arg1;
    *(u8*)((u8*)arg0 + 0x8) = *(u8*)((u8*)arg0 + 0x8) + 1;
loop_7:
    temp_r0 = *(u8*)((u8*)arg0 + 0x8);
    if (var_r7 < (s32)temp_r0) {
        var_r8 = arg0;
        var_r9 = arg0;
        var_r6 = 0;
loop_5:
        if (var_r6 < (s32)((*(u8*)((u8*)arg0 + 0x8) - var_r7) - 1)) {
            temp_r3 = *(s32*)((u8*)var_r8 + 0x20);
            if (temp_r3 > *(s32*)((u8*)var_r8 + 0x24)) {
                *(s32*)((u8*)var_r8 + 0x20) = *(s32*)((u8*)var_r8 + 0x24);
                *(s32*)((u8*)var_r8 + 0x24) = temp_r3;
                temp_r10 = (void*)((u8*)arg0 + (((var_r6 + 1) * 0xC) + 0xA0));
                temp_f0 = *(f32*)((u8*)var_r9 + 0xA0);
                *(f32*)((u8*)var_r9 + 0xA0) = *(f32*)((u8*)temp_r10 + 0x0);
                temp_f1 = *(f32*)((u8*)var_r9 + 0xA4);
                *(f32*)((u8*)var_r9 + 0xA4) = *(f32*)((u8*)temp_r10 + 0x4);
                temp_f2 = *(f32*)((u8*)var_r9 + 0xA8);
                *(f32*)((u8*)var_r9 + 0xA8) = *(f32*)((u8*)temp_r10 + 0x8);
                *(f32*)((u8*)temp_r10 + 0x0) = temp_f0;
                *(f32*)((u8*)temp_r10 + 0x4) = temp_f1;
                *(f32*)((u8*)temp_r10 + 0x8) = temp_f2;
            }
            var_r8 = (void*)((u8*)var_r8 + 0x4);
            var_r9 = (void*)((u8*)var_r9 + 0xC);
            var_r6 += 1;
            goto loop_5;
        }
        var_r7 += 1;
        goto loop_7;
    }
    *(f32*)((u8*)arg0 + 0x18) = *(f32*)((u8*)arg0 + (*(u8*)((u8*)arg0 + 0x8) * 4) + 0x1C);
}

void fn_80196018(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x8) = 0;
    M2C_FIELD(arg0, u16 *, 0xa) = 0;
    M2C_FIELD(arg0, f32 *, 0xc) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x10) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x14) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x18) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x1c) = 0.0f;
    M2C_FIELD(arg0, u8 *, 0x4) = 0;
    M2C_FIELD(arg0, u16 *, 0x6) = 0;
    {
        u8 color[4] = {0x00, 0x40, 0x80, 0xFF};
        M2C_FIELD(arg0, u8 *, 0x0) = color[0];
        M2C_FIELD(arg0, u8 *, 0x1) = color[1];
        M2C_FIELD(arg0, u8 *, 0x2) = color[2];
        M2C_FIELD(arg0, u8 *, 0x3) = color[3];
    }
}

void fn_80196078(void) {
    extern u8 lbl_8027A688[];
    extern u8 lbl_80296700[];
    
    // Call fn_8000D3EC with offsets from lbl_8027A688 and lbl_80296700
    
    fn_8000D3EC(&lbl_8027A688[0x28], &lbl_80296700[0x34]);
    fn_8000D3EC(&lbl_8027A688[0x3C], &lbl_80296700[0x44]);
    fn_8000D3EC(&lbl_8027A688[0x4B], &lbl_80296700[0x44]);
    fn_8000D3EC(&lbl_8027A688[0x5D], &lbl_80296700[0x44]);
    fn_8000D3EC(&lbl_8027A688[0x6F], &lbl_80296700[0x44]);
    fn_8000D3EC(&lbl_8027A688[0x80], &lbl_80296700[0x44]);
    fn_8000D3EC(&lbl_8027A688[0x92], &lbl_80296700[0x44]);
    fn_8000D3EC(&lbl_8027A688[0xA3], &lbl_80296700[0x44]);
    fn_8000D3EC(&lbl_8027A688[0xB3], &lbl_80296700[0x44]);
    fn_8000D3EC(&lbl_8027A688[0xC2], &lbl_80296700[0x54]);
    fn_8000D3EC(&lbl_8027A688[0xD0], &lbl_80296700[0x54]);
    fn_8000D3EC(&lbl_8027A688[0xE1], &lbl_80296700[0x64]);
}

s32 fn_80196194(s32 arg0) {
    void **fn_80037D54(void *);
    void fn_80092528(void *, u8);
    void fn_80094A08(s32, s32);
    void fn_800910D8(s8, s32, s32, s32, s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    void *p;
    void **slot;
    void *obj;
    u8 kind;

    p = *(void **)lbl_802EF4C8;
    slot = fn_80037D54(p);
    kind = ((obj = *slot) != NULL) ? ((u8 *)obj)[0x12] : 0xC;
    fn_80092528(p, kind);
    fn_80094A08((s32)p, *(s8 *)&lbl_802EF4C8[0xA]);
    *(u32 *)(lbl_80330EAC + 0xCAC) |= 0x2000;
    kind = ((obj = *slot) != NULL) ? ((u8 *)obj)[0x12] : 0xC;
    fn_800910D8((s8)kind, arg0, -1, -1, -1);
    return 1;
}

s32 fn_80196268(void *arg0) {
    void *fn_80037D54(void *);
    s32 fn_80092ADC(void *, s32);
    s32 fn_80092C50(void *, s32, s32);
    s32 fn_8001CFA8(s32);
    s8 fn_80092414(void *);
    void **slot;
    void *obj;
    void *obj2;
    u8 kind;
    s32 v1;
    s32 v2;

    slot = fn_80037D54(arg0);
    if (slot != NULL) {
        obj = *(void **)slot;
        if (obj == NULL) {
            return 0;
        }
        kind = *(u8 *)((u8 *)obj + 0x12);
    } else {
        kind = 0xC;
    }
    if (kind >= 8U) {
        return 0;
    }
    kind = (obj != NULL) ? *(u8 *)((u8 *)obj + 0x12) : 0xC;
    v1 = fn_80092ADC(arg0, kind);
    v2 = fn_80092C50(arg0, ((obj2 = *(void **)slot) != NULL) ? *(u8 *)((u8 *)obj2 + 0x12) : 0xC, 0xFF);
    v1 = fn_8001CFA8(v1);
    v2 = fn_8001CFA8(v2);
    if ((u8)v1 == (u8)v2) {
        return 0;
    }
    if ((u8)v1 == 0xB5 && fn_80092414(arg0) >= 0) {
        return 0;
    }
    return 1;
}

s32 fn_80196420(s32 arg0, void *arg1) {
    s8 fn_8003A398();
    s8 fn_8003A5B4(s32);
    s8 temp_r31;
    s8 temp_r3;
    s8 var_r4;
    s8 var_r5;

    temp_r31 = fn_8003A398();
    temp_r3 = fn_8003A5B4(arg0);
    var_r4 = temp_r31 + M2C_FIELD(arg1, u8 *, 0x27);
    var_r5 = temp_r3 + M2C_FIELD(arg1, u8 *, 0x28);
    if (var_r4 > 0x14) {
        var_r4 = 0x14;
    }
    if (var_r5 > 0x63) {
        var_r5 = 0x63;
    }
    if ((var_r4 == temp_r31) && (var_r5 == temp_r3)) {
        return 0;
    }
    return 1;
}

s32 fn_801964C8(s32 arg0) {
    s32 *fn_800285C0(void *);
    void fn_8003708C(s32, s32);
    void fn_80094A08(s32, s32);
    void fn_8009127C(s32, s32, void *);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    s32 temp;
    void *q;

    temp = *fn_800285C0(lbl_802EF4C8);
    fn_8003708C(*(s32 *)lbl_802EF4C8, temp + 0x1F);
    fn_80094A08(*(s32 *)lbl_802EF4C8, *(s8 *)&lbl_802EF4C8[0xA]);
#pragma scheduling off
    q = lbl_80330EAC;
    *(u32 *)((u8 *)q + 0xCAC) |= 0x2000;
    fn_8009127C(temp, arg0, q);
#pragma scheduling reset
    return 1;
}

s32 fn_80196558(void *arg0, void *arg1) {
    s8 fn_8003A778(void *);
    s8 fn_8003AA40(void *);
    s8 fn_8003ACF8(void *);
    s8 fn_8003AEB0(void *);
    s8 fn_8003AF28(void *);
    s8 fn_8003AFA0(void *);
    s8 fn_8003B258();
    s8 temp_r26;
    s8 temp_r27;
    s8 temp_r28;
    s8 temp_r29;
    s8 temp_r30;
    s8 temp_r31;
    s8 temp_r3;
    s8 temp_r5;
    u8 temp_r24;
    u8 var_r0;

    temp_r24 = M2C_FIELD(arg0, u8 *, 0x1A8);
    temp_r26 = fn_8003B258();
    temp_r27 = fn_8003AFA0(arg0);
    temp_r28 = fn_8003AF28(arg0);
    temp_r29 = fn_8003AEB0(arg0);
    temp_r30 = fn_8003ACF8(arg0);
    temp_r31 = fn_8003AA40(arg0);
    temp_r3 = fn_8003A778(arg0);
    temp_r5 = temp_r3 + M2C_FIELD(arg1, u8 *, 0x26);
    if ((s8) temp_r24 != (s8) ((s8) temp_r24 + M2C_FIELD(arg1, u8 *, 0x1F))) {
        var_r0 = 0;
    } else if (temp_r26 != (s8) (temp_r26 + M2C_FIELD(arg1, u8 *, 0x20))) {
        var_r0 = 0;
    } else if (temp_r27 != (s8) (temp_r27 + M2C_FIELD(arg1, u8 *, 0x21))) {
        var_r0 = 0;
    } else if (temp_r29 != (s8) (temp_r29 + M2C_FIELD(arg1, u8 *, 0x23))) {
        var_r0 = 0;
    } else if (temp_r28 != (s8) (temp_r28 + M2C_FIELD(arg1, u8 *, 0x22))) {
        var_r0 = 0;
    } else if (temp_r30 != (s8) (temp_r30 + M2C_FIELD(arg1, u8 *, 0x24))) {
        var_r0 = 0;
    } else if (temp_r31 != (s8) (temp_r31 + M2C_FIELD(arg1, u8 *, 0x25))) {
        var_r0 = 0;
    } else if (temp_r3 != temp_r5) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
    }
    return var_r0 == 0;
}

void fn_80196794(void) {
    M2C_UNK fn_8003D538();
    fn_8003D538();
}

void fn_801967B4(void *arg0) {
    void fn_8004EA60(s32, s32);
    void fn_8003D2C4(s32);
    void fn_8004EB14(s32, s32);
    void fn_80050C90(s32);
    extern u8 lbl_80330EAC[];

    fn_8004EA60(*(s32 *)((u8 *)arg0 + 0x30), 0);
    fn_8003D2C4(*(s32 *)((u8 *)arg0 + 0x30));
    *(u32 *)(lbl_80330EAC + 0xCAC) |= 0x10;
    fn_8004EB14(*(s32 *)((u8 *)arg0 + 0x30), 0);
    fn_80050C90(*(s32 *)((u8 *)arg0 + 0x30));
}

void fn_80196818(void *arg0) {
    M2C_UNK fn_801B3258(s32, void *);
    fn_801B3258(M2C_FIELD(arg0, s32 *, 0x30), arg0);
}

void fn_80196840(void) {

}

void fn_80196844(void) {

}

extern u16 lbl_8028E090[];
void *fn_80196848(void *arg0, s16 arg1) {
    void fn_800C9A60(void *, s32);
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern void *lbl_80296778[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_80296778;
        fn_800C9A60((s8 *)arg0 + 0x54, -1);
        if (arg0 != NULL) {
            *(void **)((char *)arg0 + 0x40) = (void *)lbl_8028E090;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801968CC(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x78);
    if (temp_r0 != temp_r5) {
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (temp_r0 + arg1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (temp_r5 + arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = 3;
}

void fn_801968FC(void *arg0, s32 arg1, u8 arg2, void *arg3) {
    void fn_80122F04(void *, void *);
    void fn_80123034(void *, void *, f32, f32, s32);
    void fn_801232F4(void *, void *, f32, f32);
    extern void *lbl_80368278;
    s32 temp_r0;
    s32 temp_r3;

    if (arg1 == 0) {
        fn_80122F04(*(void **)((u8 *)arg0 + 0x64), arg3);
        if (*(u32 *)((u8 *)arg3 + 4) != 0) {
            *(f32 *)((u8 *)arg0 + 0x90) = *(f32 *)((u8 *)lbl_80368278 + 0xC8);
            *(f32 *)((u8 *)arg0 + 0x94) = *(f32 *)((u8 *)lbl_80368278 + 0xCC);
            *(s32 *)((u8 *)arg0 + 0x98) = *(s32 *)((u8 *)lbl_80368278 + 0xD0);
            *(u8 *)((u8 *)arg0 + 0x9C) = 1;
        }
    } else {
        temp_r0 = *(s32 *)((u8 *)arg0 + 0x7C);
        temp_r3 = *(s32 *)((u8 *)arg0 + 0x78);
        if (temp_r0 != temp_r3) {
            *(s32 *)((u8 *)arg0 + 0x7C) = temp_r0 + arg1;
        } else {
            *(s32 *)((u8 *)arg0 + 0x7C) = temp_r3 + arg1;
        }
        *(s32 *)((u8 *)arg0 + 0x8C) = 1;
        *(f32 *)((u8 *)arg0 + 0x90) = *(f32 *)((u8 *)lbl_80368278 + 0xC8);
        *(f32 *)((u8 *)arg0 + 0x94) = *(f32 *)((u8 *)lbl_80368278 + 0xCC);
        *(s32 *)((u8 *)arg0 + 0x98) = *(s32 *)((u8 *)lbl_80368278 + 0xD0);
        *(u8 *)((u8 *)arg0 + 0x9C) = 0;
        if (*(u32 *)((u8 *)arg3 + 4) != 0) {
            *(u8 *)((u8 *)arg0 + 0x9C) = 1;
        }
        if (*(s32 *)((u8 *)arg0 + 0x78) != 0) {
            fn_801232F4(*(void **)((u8 *)arg0 + 0x64), lbl_80368278,
                        *(f32 *)((u8 *)lbl_80368278 + 0xA4),
                        *(f32 *)((u8 *)lbl_80368278 + 0xA8));
        }
        if (arg2 != 0) {
            fn_80123034(*(void **)((u8 *)arg0 + 0x64), arg3,
                        *(f32 *)((u8 *)lbl_80368278 + 0xBC),
                        *(f32 *)((u8 *)lbl_80368278 + 0xC0),
                        *(s32 *)((u8 *)lbl_80368278 + 0xC4));
            return;
        }
        fn_80123034(*(void **)((u8 *)arg0 + 0x64), arg3,
                    *(f32 *)((u8 *)lbl_80368278 + 0xB0),
                    *(f32 *)((u8 *)lbl_80368278 + 0xB4),
                    *(s32 *)((u8 *)lbl_80368278 + 0xB8));
    }
}

void fn_80196A58(void *arg0, s32 arg1, s32 arg2) {
    void fn_801232F4(void *, f32, f32);
    void fn_80123300(void *, s32);
    extern void *lbl_80368278;
    extern f32 lbl_8036AE8C;

    if (arg1 > 0x50) {
        arg1 = 0x50;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = arg2;
    M2C_FIELD(arg0, s32 *, 0x78) = arg1;
    M2C_FIELD(arg0, s32 *, 0x74) = arg1;
    M2C_FIELD(arg0, s32 *, 0x7C) = M2C_FIELD(arg0, s32 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    if (M2C_FIELD(arg0, void **, 0x64) != NULL) {
        fn_80123300(M2C_FIELD(arg0, void **, 0x64), M2C_FIELD(arg0, s32 *, 0x78));
        fn_801232F4(M2C_FIELD(arg0, void **, 0x64), lbl_8036AE8C, M2C_FIELD(lbl_80368278, f32 *, 0xA8));
    }
}

void fn_80196AD0(void *arg0, s32 arg1) {
    M2C_UNK fn_800076AC(u8, u8, u8, u8);
    M2C_UNK fn_800077D8(s32, f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(s32, f32, f32, f32, f32);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258(s32, void *, s32, f32);
    s32 fn_800E2E50(s32);
    s32 fn_800E2E58(s32);
    u32 fn_800E2E60(s32);
    s32 fn_800E2E68(s32);
    M2C_UNK fn_800E35F4(s32, s32, s32 *, s32 *, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    extern f32 lbl_8036AE88;
    extern f32 lbl_8036AE8C;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_r0;
    s32 temp_r11;
    s32 temp_r11_2;
    s32 temp_r22;
    s32 temp_r23;
    s32 temp_r24;
    s32 temp_r24_2;
    s32 temp_r24_3;
    s32 temp_r25;
    s32 temp_r27_2;
    s32 temp_r28;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r0;
    u32 temp_r29;
    u8 temp_r24_4;
    u8 temp_r25_2;
    u8 temp_r25_3;
    u8 temp_r26;
    u8 temp_r26_2;
    u8 temp_r27;
    void *temp_r12;
    void *temp_r21;
    void *temp_r4;
    void *temp_r4_2;

    sp4C = 0;
    sp48 = 0;
    sp44 = 0;
    sp40 = 0;
    sp3C = 0;
    sp38 = 0;
    sp34 = 0;
    sp30 = 0;
    temp_r28 = fn_800E2E68(M2C_FIELD(arg0, s32 *, 0x60));
    temp_r29 = fn_800E2E60(M2C_FIELD(arg0, s32 *, 0x60));
    temp_r30 = fn_800E2E58(M2C_FIELD(arg0, s32 *, 0x60));
    temp_r22 = temp_r29 + fn_800E2E50(M2C_FIELD(arg0, s32 *, 0x60));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x78) - 0x28;
    if (temp_r0 >= 0) {
        sp44 = temp_r22;
        temp_r25 = (temp_r0 * 5) + 1;
        temp_r24 = (s32) ((temp_r29 >> 0x1FU) + temp_r29) >> 1;
        sp48 = temp_r30;
        sp40 = temp_r25 + temp_r30;
        sp4C = temp_r24 + temp_r22;
        temp_r12 = M2C_FIELD(arg0, void **, 0x38);
        temp_r7 = M2C_FIELD(arg0, s32 *, 0x48) + (M2C_FIELD(temp_r12, s32 *, 0x60) + (temp_r28 - temp_r25));
        sp30 = temp_r7;
        temp_r11 = M2C_FIELD(arg0, s32 *, 0x4C) + (temp_r24 + M2C_FIELD(temp_r12, s32 *, 0x64));
        sp38 = temp_r7 + temp_r25;
        sp34 = temp_r11;
        sp3C = temp_r11 + temp_r24;
        sp8 = 0xFF;
        spC = 0;
        fn_800E35F4(M2C_FIELD(arg0, s32 *, 0x60), arg1, &sp40, &sp30, M2C_FIELD(arg0, s32 *, 0x44), 0xFF, 0xFF, 0xFF);
        temp_r4 = M2C_FIELD(arg0, void **, 0x38);
        temp_f2 = M2C_FIELD(temp_r4, f32 *, 0x6C);
        sp20 = sp30;
        temp_r25_2 = M2C_FIELD(arg0, u8 *, 0x52);
        sp24 = sp34;
        sp28 = sp38;
        temp_r26 = M2C_FIELD(arg0, u8 *, 0x51);
        temp_r27 = M2C_FIELD(arg0, u8 *, 0x50);
        sp2C = sp3C;
        temp_r24_2 = (s32) (temp_f2 * (f32) M2C_FIELD(arg0, u8 *, 0x53));
        fn_8000A258(sp38, temp_r4, sp30, temp_f2);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x44) - 1;
        fn_80009D74(temp_r3, lbl_8036AE88, lbl_8036AE88, (f32) temp_r3, lbl_8036AE8C);
        fn_8000A174(0, 0x20);
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8(sp20, (f32) sp20, (f32) sp34, (f32) (sp38 - sp20), (f32) (sp3C - sp34));
        fn_800076AC(temp_r27, temp_r26, temp_r25_2, (u8) temp_r24_2);
        fn_80007884();
    }
    var_r0 = M2C_FIELD(arg0, s32 *, 0x78);
    if (var_r0 > 0x28) {
        var_r0 = 0x28;
    }
    sp44 = temp_r22;
    temp_r24_3 = (var_r0 * 5) + 1;
    temp_r23 = (s32) ((temp_r29 >> 0x1FU) + temp_r29) >> 1;
    sp48 = temp_r30;
    sp40 = temp_r24_3 + temp_r30;
    sp4C = temp_r23 + temp_r22;
    temp_r21 = M2C_FIELD(arg0, void **, 0x38);
    temp_r7_2 = M2C_FIELD(arg0, s32 *, 0x48) + (M2C_FIELD(temp_r21, s32 *, 0x60) + (temp_r28 - temp_r24_3));
    sp30 = temp_r7_2;
    temp_r11_2 = M2C_FIELD(arg0, s32 *, 0x4C) + M2C_FIELD(temp_r21, s32 *, 0x64);
    sp38 = temp_r7_2 + temp_r24_3;
    sp34 = temp_r11_2;
    sp3C = temp_r11_2 + temp_r23;
    sp8 = 0xFF;
    spC = 0;
    fn_800E35F4(M2C_FIELD(arg0, s32 *, 0x60), arg1, &sp40, &sp30, M2C_FIELD(arg0, s32 *, 0x44), 0xFF, 0xFF, 0xFF);
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x38);
    temp_f2_2 = M2C_FIELD(temp_r4_2, f32 *, 0x6C);
    sp10 = sp30;
    temp_r26_2 = M2C_FIELD(arg0, u8 *, 0x52);
    sp14 = sp34;
    sp18 = sp38;
    temp_r25_3 = M2C_FIELD(arg0, u8 *, 0x51);
    temp_r24_4 = M2C_FIELD(arg0, u8 *, 0x50);
    sp1C = sp3C;
    temp_r27_2 = (s32) (temp_f2_2 * (f32) M2C_FIELD(arg0, u8 *, 0x53));
    fn_8000A258(sp38, temp_r4_2, sp30, temp_f2_2);
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x44) - 1;
    fn_80009D74(temp_r3_2, lbl_8036AE88, lbl_8036AE88, (f32) temp_r3_2, lbl_8036AE8C);
    fn_8000A174(0, 0x20);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp10, (f32) sp10, (f32) sp34, (f32) (sp38 - sp10), (f32) (sp3C - sp34));
    fn_800076AC(temp_r24_4, temp_r25_3, temp_r26_2, (u8) temp_r27_2);
    fn_80007884();
  }

  #pragma cplusplus reset
  #pragma use_lmw_stmw on
void fn_80197A78(void *arg0, s32 arg1)
{
    void fn_800076AC(u8, u8, u8, u8);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    s32 fn_800E2E50(void *);
    s32 fn_800E2E58(void *);
    s32 fn_800E2E60(void *);
    s32 fn_800E2E68(void *);
    void fn_800E35F4(void *, s32, s32 *, s32 *, s32, s32, s32, s32, s32, s32);
    void fn_80196AD0(void *);
    void fn_80196F10(void *, s32);
    void fn_801976A4(void *);
    extern f32 lbl_8036AE88;
    extern f32 lbl_8036AE8C;

    s32 rect1[4];
    s32 rect2[4];
    s32 copy[4];
    s32 rect1b[4];
    s32 rect2b[4];
    s32 copyb[4];
    void *self;
    s32 arg;
    s32 a, b, c, d, pad, x0, y0, h, alpha;
    void *obj38;
    u8 r, g, bl;

    self = arg0;
    arg = arg1;
    switch (*(s32 *)((u8 *)self + 0x6C)) {
    case 0:
        if (*(s32 *)((u8 *)self + 0x70) <= 0x28) {
            fn_801976A4(self);
        } else {
            fn_80196F10(self, arg);
        }
        break;
    case 1:
        if (*(s32 *)((u8 *)self + 0x70) <= 0x28) {
            rect1[3] = 0; rect1[2] = 0; rect1[1] = 0; rect1[0] = 0;
            rect2[3] = 0; rect2[2] = 0; rect2[1] = 0; rect2[0] = 0;
            a = fn_800E2E58(*(void **)((u8 *)self + 0x60));
            b = fn_800E2E50(*(void **)((u8 *)self + 0x60));
            c = fn_800E2E68(*(void **)((u8 *)self + 0x60));
            d = fn_800E2E60(*(void **)((u8 *)self + 0x60));
            pad = *(s32 *)((u8 *)self + 0x78) * 5 + 1;
            rect1[1] = b;
            rect1[2] = a;
            rect1[3] = d + b;
            rect1[0] = pad + a;
            obj38 = *(void **)((u8 *)self + 0x38);
            x0 = *(s32 *)((u8 *)self + 0x48) + (*(s32 *)((u8 *)obj38 + 0x60) + (c - pad));
            rect2[0] = x0;
            y0 = *(s32 *)((u8 *)self + 0x4C) + *(s32 *)((u8 *)obj38 + 0x64);
            rect2[2] = x0 + pad;
            rect2[1] = y0;
            rect2[3] = y0 + d;
            fn_800E35F4(*(void **)((u8 *)self + 0x60), arg, rect1, rect2,
                        *(s32 *)((u8 *)self + 0x44), 0xFF, 0xFF, 0xFF, 0xFF, 0);
            obj38 = *(void **)((u8 *)self + 0x38);
            copy[0] = rect2[0];
            bl = *(u8 *)((u8 *)self + 0x52);
            copy[1] = rect2[1];
            copy[2] = rect2[2];
            g = *(u8 *)((u8 *)self + 0x51);
            r = *(u8 *)((u8 *)self + 0x50);
            copy[3] = rect2[3];
            h = rect2[3] - rect2[1];
            alpha = (s32)(*(f32 *)((u8 *)obj38 + 0x6C) * (f32)*(u8 *)((u8 *)self + 0x53));
            fn_8000A258();
            {
                s32 t = *(s32 *)((u8 *)self + 0x44) - 1;
                fn_80009D74(lbl_8036AE88, lbl_8036AE88, (f32)t, lbl_8036AE8C);
            }
            fn_8000A174(0, 0x20);
            fn_8000A248();
            fn_80007898(1);
            fn_800077D8((f32)copy[0], (f32)copy[1], (f32)(copy[2] - copy[0]), (f32)h);
            fn_800076AC(r, g, bl, (u8)alpha);
            fn_80007884();
        } else {
            fn_80196AD0(self);
        }
        break;
    case 2:
        rect1b[3] = 0; rect1b[2] = 0; rect1b[1] = 0; rect1b[0] = 0;
        rect2b[3] = 0; rect2b[2] = 0; rect2b[1] = 0; rect2b[0] = 0;
        {
            s32 rem = *(s32 *)((u8 *)self + 0x84) % 100;
            a = fn_800E2E58(*(void **)((u8 *)self + 0x60));
            b = fn_800E2E50(*(void **)((u8 *)self + 0x60));
            c = fn_800E2E68(*(void **)((u8 *)self + 0x60));
            d = fn_800E2E60(*(void **)((u8 *)self + 0x60));
            rect1b[0] = a;
            rect1b[1] = b;
            rect1b[2] = c + a;
            rect1b[3] = d + b;
            obj38 = *(void **)((u8 *)self + 0x38);
            x0 = *(s32 *)((u8 *)self + 0x48) + *(s32 *)((u8 *)obj38 + 0x60);
            rect2b[0] = x0;
            y0 = *(s32 *)((u8 *)self + 0x4C) + *(s32 *)((u8 *)obj38 + 0x64);
            rect2b[2] = x0 + (c * rem) / 100;
            rect2b[1] = y0;
            rect2b[3] = y0 + d;
            fn_800E35F4(*(void **)((u8 *)self + 0x60), arg, rect1b, rect2b,
                        *(s32 *)((u8 *)self + 0x44), 0xFF, 0xFF, 0xFF, 0xFF, 0);
            obj38 = *(void **)((u8 *)self + 0x38);
            copyb[0] = rect2b[0];
            bl = *(u8 *)((u8 *)self + 0x52);
            copyb[1] = rect2b[1];
            copyb[2] = rect2b[2];
            g = *(u8 *)((u8 *)self + 0x51);
            r = *(u8 *)((u8 *)self + 0x50);
            copyb[3] = rect2b[3];
            h = rect2b[3] - rect2b[1];
            alpha = (s32)(*(f32 *)((u8 *)obj38 + 0x6C) * (f32)*(u8 *)((u8 *)self + 0x53));
            fn_8000A258();
            {
                s32 t = *(s32 *)((u8 *)self + 0x44) - 1;
                fn_80009D74(lbl_8036AE88, lbl_8036AE88, (f32)t, lbl_8036AE8C);
            }
            fn_8000A174(0, 0x20);
            fn_8000A248();
            fn_80007898(1);
            fn_800077D8((f32)copyb[0], (f32)copyb[1], (f32)(copyb[2] - copyb[0]), (f32)h);
            fn_800076AC(r, g, bl, (u8)alpha);
            fn_80007884();
        }
        break;
    }
}
#pragma use_lmw_stmw reset

#pragma cplusplus on
extern "C" void fn_80197F5C(void *arg0) {
void fn_80123300(void *,s32); void fn_801232F4(void *,f32,f32); void fn_801475FC(void *,s32);
f64 fn_80238638(f64);
extern void *lbl_80368278;
extern u8 lbl_8027A780[];
extern f32 lbl_8036AE88,lbl_8036AE8C,lbl_8036AEA0,lbl_8036AEA4;
struct Obj {u8 pad[0x40];
virtual void v0()=0; virtual void v1()=0; virtual void v2()=0; virtual void v3()=0;
virtual void v4()=0; virtual void v5()=0; virtual void v6()=0; virtual void v7()=0;
virtual void v8()=0; virtual void v9()=0; virtual void v10()=0;
virtual void color(u8,u8,u8,u8)=0;
};
u8 *self=(u8 *)arg0; u8 *owner=*(u8 **)self;
s32 value; f32 zero,wave; Obj *obj; u8 c;
value=(*(s32 *)(self+0x78));
if(value>0 && (*(s32 *)(self+0x7C))<value) {
if(--(*(s32 *)(self+0x8C))<=0) {
(*(s32 *)(self+0x78))--;(*(s32 *)(self+0x8C))=1;
fn_80123300((*(void * *)(self+0x64)),(*(s32 *)(self+0x78)));
if((*(s32 *)(self+0x7C))==(value=(*(s32 *)(self+0x78))) || value==0) {
fn_801232F4((*(void * *)(self+0x64)),lbl_8036AE8C,*(f32 *)((u8 *)lbl_80368278+0xAC));(*(s32 *)(self+0x8C))=-1;
}
}
}
value=(*(s32 *)(self+0x78));
if(value<(*(s32 *)(self+0x70)) && (*(s32 *)(self+0x7C))>value) {
if(--(*(s32 *)(self+0x8C))<=0) {
(*(s32 *)(self+0x78))++;(*(s32 *)(self+0x8C))=3;
fn_801475FC(lbl_8027A780+8,100);fn_80123300((*(void * *)(self+0x64)),(*(s32 *)(self+0x78)));
if((*(s32 *)(self+0x7C))==(*(s32 *)(self+0x78))) (*(s32 *)(self+0x8C))=-1;
}
}
if((*(s32 *)(self+0x88))>(*(s32 *)(self+0x84))) {
if(--(*(s32 *)(self+0x8C))<=0) {
(*(s32 *)(self+0x84))++;(*(s32 *)(self+0x8C))=1;
fn_801475FC(lbl_8027A780+0x1C,100);fn_80123300((*(void * *)(self+0x64)),(*(s32 *)(self+0x84))%100);
if((*(s32 *)(self+0x88))==(*(s32 *)(self+0x84))) (*(s32 *)(self+0x8C))=-1;
}
}
if((*(s32 *)(self+0x6C))!=2 && (*(s32 *)(self+0x98))==0) {
wave=lbl_8036AEA0*(f32)fn_80238638((f32)*(s32 *)(owner+0x44) * *(f32 *)((u8 *)lbl_80368278+0xD4));
if(wave<lbl_8036AE88) wave*=lbl_8036AEA4;
(*(u8 *)(self+0x52))=64;(*(u8 *)(self+0x51))=64;(*(u8 *)(self+0x50))=64;(*(u8 *)(self+0x53))=(s8)(s32)wave;
}
if((*(s32 *)(self+0x98))!=0) {
(*(u8 *)(self+0x50))=255; (*(u8 *)(self+0x52))=64; (*(u8 *)(self+0x51))=64; (*(u8 *)(self+0x53))=(s8)(s32)(*(f32 *)(self+0x90));
if((*(u8 *)(self+0x9C))!=0) {
obj=(Obj *)(*(void * *)(self+0x68)); if(obj) obj->color(255,255,255,(*(u8 *)(self+0x53)));
} else {
obj=(Obj *)(*(void * *)(self+0x64));c=255-(*(u8 *)(self+0x53));obj->color(255,c,c,255);
}
wave=(*(f32 *)(self+0x90)); zero=lbl_8036AE88; wave+=(*(f32 *)(self+0x94)); (*(f32 *)(self+0x90))=wave;
if((*(f32 *)(self+0x90))<zero) {
(*(f32 *)(self+0x90))=zero; ((Obj *)(*(void * *)(self+0x64)))->color(255,255,255,255);
}
(*(s32 *)(self+0x98))--;
}
}
extern "C" void *fn_80198288(void *arg0, void *arg1, void *arg2) {
    void fn_800E2CF4(void *);
    void fn_800C9ABC(void *, void *, void *);
    void fn_800C8DCC(void *, void *, void *);
    void fn_800C96F8(void *, void *, u32);
    void fn_800C9A60(void *, s32);
    void *fn_800C93EC(void *);
    s32 fn_800E7FB4(void *, void *);
    void fn_80123300(void *, s32);
    u32 strlen(const char *);
    extern u8 lbl_80296778[];
    extern u8 lbl_8027A780[];
    extern f32 lbl_8036AE88;

    typedef struct {
        u32 size;
        u32 cap;
        char *data;
    } String;

    struct VObj {
        u8 pad[0x10];
        virtual void *v0(char *, void *) = 0;
        virtual void *v1(char *, void *) = 0;
        virtual void *v2(char *, void *) = 0;
    };

    typedef struct {
        void *unk00;
        u8 pad04[0x3C];
        void *vtable;
        u8 pad44[0x10];
        String str54;
        void *unk60;
        void *unk64;
        void *unk68;
        s32 unk6C;
        s32 unk70;
        s32 unk74;
        s32 unk78;
        s32 unk7C;
        s32 unk80;
        s32 unk84;
        s32 unk88;
        s32 unk8C;
        f32 unk90;
        f32 unk94;
        s32 unk98;
        u8 unk9C;
    } Obj;

    char sp12C[0x20];
    char sp10C[0x20];
    char spEC[0x20];
    char spCC[0x20];
    char spAC[0x20];
    char sp8C[0x20];
    String sp80;
    String sp74;
    String sp68;
    String sp5C;
    String sp50;
    String sp44;
    String sp38;
    String sp2C;
    String sp20;
    u8 sp1C[4];
    u8 sp18[4];
    u8 sp14[4];
    u8 sp10[4];
    u8 spC[4];
    u8 sp8[4];
    void *saved;
    Obj *path;
    Obj *self;
    Obj *buf;
    s32 temp;
    f32 z;

    path = (Obj *)arg2;
    self = (Obj *)arg0;
    fn_800E2CF4(arg0);
    self->vtable = lbl_80296778;

    self->str54.size = 0;
    self->str54.cap = 0;
    self->str54.data = 0;
    self->str54.cap = 0;

    saved = self->unk00;

    sp80.cap = 0;
    sp74.cap = 0;
    sp68.cap = 0;
    sp80.size = 0;
    sp80.data = 0;
    sp80.cap = 0;
    sp74.size = 0;
    sp74.data = 0;
    sp74.cap = 0;
    sp68.size = 0;
    sp68.data = 0;
    sp68.cap = 0;

    fn_800C9ABC(&sp5C, lbl_8027A780 + 0x2E, &sp1C);
    fn_800C8DCC(sp12C, path, &sp5C);
    buf = (Obj *)sp12C;
    fn_800C96F8(&self->str54, buf, strlen((char *)buf));
    fn_800C9A60(&sp5C, -1);

    fn_800C9ABC(&sp50, lbl_8027A780 + 0x36, &sp18);
    fn_800C8DCC(sp10C, path, &sp50);
    buf = (Obj *)sp10C;
    fn_800C96F8(&sp74, buf, strlen((char *)buf));
    fn_800C9A60(&sp50, -1);

    fn_800C9ABC(&sp44, lbl_8027A780 + 0x3E, &sp14);
    fn_800C8DCC(spEC, path, &sp44);
    buf = (Obj *)spEC;
    fn_800C96F8(&sp68, buf, strlen((char *)buf));
    fn_800C9A60(&sp44, -1);

    fn_800C9ABC(&sp38, lbl_8027A780 + 0x47, &sp10);
    fn_800C8DCC(spCC, path, &sp38);
    self->unk6C = *(s32 *)spCC;
    fn_800C9A60(&sp38, -1);

    fn_800C9ABC(&sp2C, lbl_8027A780 + 0x4C, &spC);
    fn_800C8DCC(spAC, path, &sp2C);
    temp = *(s32 *)spAC;
    self->unk78 = temp;
    self->unk74 = temp;
    self->unk70 = temp;
    fn_800C9A60(&sp2C, -1);

    self->unk7C = self->unk74;
    self->unk8C = 0;

    fn_800C9ABC(&sp20, lbl_8027A780 + 0x4F, &sp8);
    fn_800C8DCC(sp8C, path, &sp20);
    temp = *(s32 *)sp8C;
    self->unk84 = temp;
    self->unk80 = temp;
    fn_800C9A60(&sp20, -1);

    self->unk60 = (void *)fn_800E7FB4(
        (temp = self->unk80, self->unk88 = temp, self->unk98 = 0, self->unk9C = 0, saved),
        (z = lbl_8036AE88, self->unk90 = z, self->unk94 = z, &self->str54));

    self->unk64 = ((VObj *)saved)->v2((char *)(lbl_8027A780 + 0x53), fn_800C93EC(&sp74));
    self->unk68 = ((VObj *)saved)->v2((char *)(lbl_8027A780 + 0x5A), fn_800C93EC(&sp68));

    if (self->unk6C != 2) {
        fn_80123300(self->unk64, self->unk74);
    } else {
        fn_80123300(self->unk64, self->unk80);
    }

    fn_800C9A60(&sp68, -1);
    fn_800C9A60(&sp74, -1);
    fn_800C9A60(&sp80, -1);
    return self;
}
#pragma cplusplus reset

#pragma cplusplus off

void fn_801985C4(void *arg0) {
    void *x = *(void **)((u8 *)arg0 + 0x144);
    if (x != NULL) {
        fn_801517F4(x);
    }
}

void fn_801985F0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
}

void fn_801985F8(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 == 1) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x124);
        if (temp_r0 == 6) {
            M2C_FIELD(arg0, s32 *, 0x124) = 1;
            return;
        } else if (temp_r0 == 7) {
            M2C_FIELD(arg0, s32 *, 0x124) = 2;
            return;
        } else if (temp_r0 == 8) {
            M2C_FIELD(arg0, s32 *, 0x124) = 0;
            return;
        }
    }
}

s32 fn_8019906C(void *arg0) {
    s32 fn_801518D0(void *, s32);
    void *v;

    v = *(void **)((u8 *)arg0 + 0x144);
    if (v != NULL) {
        return fn_801518D0(v, 0x12);
    }
    return 0;
}

s32 fn_801990A4(void *arg0) {
    s32 fn_801518D0(void *, s32);
    void *v;

    v = *(void **)((u8 *)arg0 + 0x144);
    if (v != NULL) {
        return fn_801518D0(v, 1);
    }
    return 0;
}

s32 fn_801990DC(void *arg0) {
    s32 fn_801518D0(void *, s32);
    void *v;

    v = *(void **)((u8 *)arg0 + 0x144);
    if (v != NULL) {
        return fn_801518D0(v, 0);
    }
    return 0;
}

s32 fn_80199114(void *arg0) {
    s32 fn_80151948(void *, s32);
    void *v;

    v = *(void **)((u8 *)arg0 + 0x144);
    if (v != NULL) {
        return fn_80151948(v, 0x11);
    }
    return -1;
}

s32 fn_801992F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x128);
}

s32 fn_801992F8(void *arg0) {
    extern s32 lbl_802967B0[];
    return lbl_802967B0[M2C_FIELD(arg0, s32 *, 0x124)];
}

s32 fn_80199310(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x124);
}

void fn_80199318(s32 arg0, s32 arg1) {
    fn_800C9B6C(arg0, arg1 + 0x118);
}

extern s32 fn_8005F7B0(u32, u8);                         /* extern */
extern void fn_8006CAD4(u32);                            /* extern */
extern u8 fn_800E49D0(void *);                           /* extern */
extern void fn_800E5A4C(void);                           /* extern */
void fn_801993E0(void *arg0) {
    void fn_8006CAD4(void *);
    u8 fn_800E49D0(void *);
    void fn_8005F7B0(void *, u8);
    void fn_800E5A4C(void);
    u8 b;

    if (*(s32 *)((u8 *)arg0 + 0x124) == 3) {
        if (*(void **)((u8 *)arg0 + 0xE0) != NULL) {
            fn_8006CAD4(*(void **)((u8 *)arg0 + 0xE0));
        }
        if (*(void **)((u8 *)arg0 + 0xE4) != NULL) {
            b = *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0xE0) + 0xB);
            fn_8005F7B0(*(void **)((u8 *)arg0 + 0xE4), (u8)((b * fn_800E49D0(*(void **)((u8 *)arg0 + 0xE0))) / 255));
            fn_8006CAD4(*(void **)((u8 *)arg0 + 0xE4));
        }
    } else {
        fn_800E5A4C();
    }
}

void fn_80199484(void *arg0) {
    M2C_UNK fn_800E5B68();
    M2C_UNK fn_80198CA4();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 3) {
        fn_80198CA4();
        return;
    }
    fn_800E5B68();
}

void fn_801994B8(void *arg0, s32 arg1) {
    M2C_UNK fn_800E5DEC(void *, s32);
    M2C_UNK fn_801986E0();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x14C) != 0) {
        fn_801986E0();
    }
    fn_800E5DEC(arg0, arg1);
}

extern u16 lbl_80296840[];
void* fn_80199508(void* arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void**, 0x40) = lbl_80296840;
        fn_800C9A60((u8*)arg0 + 0x138, -1);
        fn_800C9A60((u8*)arg0 + 0x12C, -1);
        fn_800C9A60((u8*)arg0 + 0x118, -1);
        fn_800E5F84(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma use_lmw_stmw off
#pragma global_optimizer off
void *fn_80199590(void *arg0, void *arg1, void *arg2) {
    void fn_800E6058(void *);
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800C8DCC(void *, void *, void *);
    void fn_800C9A60(void *, s32);
    void fn_800C96F8(void *, char *, u32);
    s32 fn_800C9400(void *, s32, u32, char *, u32);
    void fn_800C93EC(void *);
    void fn_800558D8(void);
    u32 strlen(char *);
    extern u8 lbl_8027A858[];

    typedef struct {
        u32 size;
        u32 cap;
        char *data;
    } String;

    typedef struct {
        u8 pad00[0x40];
        void *vtable;
        u8 pad44[0xD4];
        String str118;
        s32 unk124;
        s32 unk128;
        String str12C;
        String str138;
        s32 unk144;
        s32 unk148;
        u8 unk14C;
        u8 unk14D;
        u8 pad14E[2];
        f32 unk150;
        f32 unk154;
        f32 unk158;
        f32 unk15C;
        f32 unk160;
        f32 unk164;
        f32 unk168;
        f32 unk16C;
        f32 unk170;
        f32 unk174;
        f32 unk178;
        f32 unk17C;
    } Obj;

    char spA8[0x20];
    char sp88[0x20];
    char sp68[0x20];
    char sp48[0x20];
    String sp3C;
    String sp30;
    String sp24;
    String sp18;
    u8 sp14[4];
    u8 sp10[4];
    u8 spC[4];
    u8 sp8[4];
    char *temp_r29;
    Obj *path;
    Obj *self;
    f32 z;
    s32 len;
    u8 *p;

    path = (Obj *)arg2;
    self = (Obj *)arg0;
    fn_800E6058(self);
    z = 0.0f;
    self->vtable = lbl_80296840;
    self->str118.size = 0;
    self->str118.cap = 0;
    self->str118.data = NULL;
    self->str118.cap = 0;
    self->str12C.size = 0;
    self->str12C.cap = 0;
    self->str12C.data = NULL;
    self->str12C.cap = 0;
    self->str138.size = 0;
    self->str138.cap = 0;
    self->str138.data = NULL;
    self->str138.cap = 0;
    self->unk158 = z;
    self->unk154 = z;
    self->unk150 = z;
    self->unk164 = z;
    self->unk160 = z;
    self->unk15C = z;
    self->unk170 = z;
    self->unk16C = z;
    self->unk168 = z;
    self->unk17C = z;
    self->unk178 = z;
    self->unk174 = z;
    fn_800C9758(&self->str118, (u8 *)self + 0x10, 0, -1);

    fn_800C9ABC(&sp3C, (char *)(lbl_8027A858 + 0x7B), sp14);
    fn_800C8DCC(spA8, path, &sp3C);
    self->unk124 = *(s32 *)spA8;
    fn_800C9A60(&sp3C, -1);

    fn_800C9ABC(&sp30, (char *)(lbl_8027A858 + 0x80), sp10);
    fn_800C8DCC(sp88, path, &sp30);
    self->unk128 = *(s32 *)sp88;
    fn_800C9A60(&sp30, -1);

    fn_800C9ABC(&sp24, (char *)(lbl_8027A858 + 0x88), spC);
    fn_800C8DCC(sp68, path, &sp24);
    temp_r29 = sp68;
    fn_800C96F8(&self->str12C, temp_r29, strlen(temp_r29));
    fn_800C9A60(&sp24, -1);

    fn_800C9ABC(&sp18, (char *)(lbl_8027A858 + 0x91), sp8);
    fn_800C8DCC(sp48, path, &sp18);
    temp_r29 = sp48;
    fn_800C96F8(&self->str138, temp_r29, strlen(temp_r29));
    fn_800C9A60(&sp18, -1);

    self->unk144 = 0;
    self->unk14C = 0;
    self->unk14D = 0;
    self->unk148 = 0;

    len = strlen((char *)((u8 *)lbl_8027A858 + 0x7A));
    p = (u8 *)self + 0x12C;
    if (fn_800C9400(p, 0, *(u32 *)p, (char *)((u32)lbl_8027A858 + 0x7A), len) != 0) {
        fn_800C93EC((u8 *)self + 0x12C);
        fn_800558D8();
    }
    len = strlen((char *)((u8 *)lbl_8027A858 + 0x7A));
    p = (u8 *)self + 0x138;
    if (fn_800C9400(p, 0, *(u32 *)p, (char *)((u32)lbl_8027A858 + 0x7A), len) != 0) {
        fn_800C93EC((u8 *)self + 0x138);
        fn_800558D8();
    }
    return self;
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset
void fn_80199818(u8 *arg0) {
    u32 fn_802097D4(void);
    void fn_80145E9C(s32);
    void fn_801C7C18(u8, u8, u8);
    extern u8 lbl_80367AE8;
    extern u8 lbl_80367AEA;

    struct {
        u8 hi : 4;
        u8 mid : 2;
        u8 lo : 2;
    } *bf;
    u8 *p = arg0;

    lbl_80367AE8 = p[8];
    lbl_80367AEA = p[9];
    if (fn_802097D4() == 1) {
        bf = (void *)&p[2];
        if (bf->mid == 0) {
            bf->mid = 1;
        }
        fn_80145E9C(bf->mid);
    } else {
        bf = (void *)&p[2];
        bf->mid = 0;
        fn_80145E9C(bf->mid);
    }
    fn_801C7C18(p[6], p[7], p[5]);
}

void fn_801998B0(void *arg0) {
    u32 fn_802097D4(M2C_UNK, M2C_UNK);
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & ~0xC0);
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & ~0x20);
    M2C_FIELD(arg0, u8 *, 0) = (u8) ((M2C_FIELD(arg0, u8 *, 0) & ~0x18) | 8);
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & ~4);
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & ~2);
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & ~1);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) & ~0xC0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) & ~0x20);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) & ~0x10);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) & ~0xC);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) & ~2);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) & ~1);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & ~0x80);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & ~0x40);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & ~0x20);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x10);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & ~2);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 1);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (M2C_FIELD(arg0, u8 *, 3) & ~0x80);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (M2C_FIELD(arg0, u8 *, 3) & ~0x40);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (M2C_FIELD(arg0, u8 *, 3) & ~0x20);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (M2C_FIELD(arg0, u8 *, 3) & ~0x10);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (M2C_FIELD(arg0, u8 *, 3) & ~8);
    if (fn_802097D4(1, 0) == 1U) {
        M2C_FIELD(arg0, u8 *, 2) = (u8) ((M2C_FIELD(arg0, u8 *, 2) & ~0xC) | 4);
    } else {
        M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & ~0xC);
    }
    M2C_FIELD(arg0, s8 *, 4) = 0x14;
    M2C_FIELD(arg0, s8 *, 5) = 0x40;
    M2C_FIELD(arg0, s8 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0x64;
    M2C_FIELD(arg0, s8 *, 9) = 0x64;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 0;
    M2C_FIELD(arg0, s8 *, 0xE) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

void fn_80199A60(void *arg0, s32 arg1) {
    void fn_80145E9C(s32);
    void fn_8017A810(s32, s32, void *);
    u8 fn_8017A9DC(s32);
    void fn_801C7C18(u8, u8, u8);
    u32 fn_802097D4(void);
    extern u8 lbl_80367AE8;
    extern u8 lbl_80367AEA;
    u8 temp;
    u8 *p2;

    fn_8017A810(arg1, 4, arg0);
    *(u8 *)((u8 *)arg0 + 4) = fn_8017A9DC(arg1);
    *(u8 *)((u8 *)arg0 + 5) = fn_8017A9DC(arg1);
    if ((s8)*(u8 *)((u8 *)arg0 + 5) == 0) {
        *(u8 *)((u8 *)arg0 + 5) = 0x40;
    }
    *(u8 *)((u8 *)arg0 + 6) = fn_8017A9DC(arg1);
    *(u8 *)((u8 *)arg0 + 7) = fn_8017A9DC(arg1);
    *(u8 *)((u8 *)arg0 + 8) = fn_8017A9DC(arg1);
    *(u8 *)((u8 *)arg0 + 9) = fn_8017A9DC(arg1);
    *(u8 *)((u8 *)arg0 + 0xA) = fn_8017A9DC(arg1);
    *(u8 *)((u8 *)arg0 + 0xB) = fn_8017A9DC(arg1);
    lbl_80367AE8 = *(u8 *)((u8 *)arg0 + 8);
    lbl_80367AEA = *(u8 *)((u8 *)arg0 + 9);
    if (fn_802097D4() == 1) {
        temp = *(u8 *)((u8 *)arg0 + 2);
        if (((temp >> 2) & 3) == 0) {
            *(u8 *)((u8 *)arg0 + 2) = __rlwimi(temp, 1, 2, 28, 29);
        }
        fn_80145E9C((*(u8 *)((u8 *)arg0 + 2) >> 2) & 3);
    } else {
        p2 = (u8 *)arg0 + 2;
        *p2 = __rlwimi(*p2, 0, 2, 28, 29);
        fn_80145E9C((*(u8 *)((u8 *)arg0 + 2) >> 2) & 3);
    }
    fn_801C7C18(*(u8 *)((u8 *)arg0 + 6), *(u8 *)((u8 *)arg0 + 7), *(u8 *)((u8 *)arg0 + 5));
}

void fn_80199B88(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, void *);
    M2C_UNK fn_8017A5EC(s32, u8);
    fn_8017A430(arg1, 4, arg0);
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 4));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 5));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 6));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 7));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 8));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 9));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xA));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0xB));
}

void fn_80199C2C(void) {
    M2C_UNK fn_8000BF00(void *);
    extern M2C_UNK lbl_802968E8;
    fn_8000BF00(&lbl_802968E8 + 0x50);
    fn_8000BF00(&lbl_802968E8 + 0x88);
    fn_8000BF00(&lbl_802968E8 + 0xFC);
    fn_8000BF00(&lbl_802968E8 + 0x138);
    fn_8000BF00(&lbl_802968E8 + 0x198);
    fn_8000BF00(&lbl_802968E8 + 0x238);
    fn_8000BF00(&lbl_802968E8 + 0x2B0);
    fn_8000BF00(&lbl_802968E8 + 0x318);
    fn_8000BF00(&lbl_802968E8 + 0x3C4);
    fn_8000BF00(&lbl_802968E8 + 0x410);
    fn_8000BF00(&lbl_802968E8 + 0x474);
    fn_8000BF00(&lbl_802968E8 + 0x508);
    fn_8000BF00(&lbl_802968E8 + 0x5EC);
}

void fn_80199CC0(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_80296ED4[16];
    fn_8000CAA0(lbl_80296ED4, arg0);
}

void fn_80199CEC(void *arg0) {
    M2C_UNK fn_800498A4(s32, M2C_UNK, M2C_UNK);
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x34), 0, 2);
}

void fn_80199DE8(void *arg0) {
    void fn_80053658(void *, s32, void *);
    void *fn_80053C30(u8 *, void *);
    f32 fn_80059440(f32, f32, f32, f32);
    void fn_8014CBD8(void *, f32, f32);
    f32 fn_8020322C(f32 *);
    extern void fn_8019A364(void);
    extern void fn_8019A7A8(void);
    extern u32 lbl_8027AA2C[3];
    extern u8 lbl_8027AA38[];
    extern u8 lbl_80330708[];
    extern f32 lbl_8036AF10;
    extern f32 lbl_8036AF14;
    f32 vec[3];
    f32 temp_f31;
    f32 scale;
    void *temp_r3;
    void *temp_r6;
    void *inner;

    *(u32 *)&vec[0] = lbl_8027AA2C[0];
    *(u32 *)&vec[1] = lbl_8027AA2C[1];
    *(u32 *)&vec[2] = lbl_8027AA2C[2];
    vec[0] = (f32)((s8)((u8 *)arg0)[0x3C] - (s8)((u8 *)arg0)[0x3A]);
    vec[1] = (f32)((s8)((u8 *)arg0)[0x3D] - (s8)((u8 *)arg0)[0x3B]);
    *(f32 *)((u8 *)arg0 + 0x4C) = fn_8020322C(vec);
    *(s16 *)((u8 *)arg0 + 0x4A) = (s16)(lbl_8036AF10 * *(f32 *)((u8 *)arg0 + 0x4C));
    if (*(s16 *)((u8 *)arg0 + 0x4A) <= 0) {
        *(s16 *)((u8 *)arg0 + 0x4A) = 1;
    }
    *(s16 *)((u8 *)arg0 + 0x48) = 0;
    temp_f31 = fn_80059440(
        (f32)(s8)((u8 *)arg0)[0x3A],
        (f32)(s8)((u8 *)arg0)[0x3B],
        (f32)(s8)((u8 *)arg0)[0x3C],
        (f32)(s8)((u8 *)arg0)[0x3D]);
    temp_r3 = fn_80053C30(lbl_8027AA38 + 0xD4, arg0);
    temp_r6 = *(void **)((u8 *)temp_r3 + 0x30);
    *(void **)((u8 *)temp_r6 + 0x3C) = (void *)&fn_8019A7A8;
    temp_r6 = *(void **)((u8 *)temp_r3 + 0x30);
    *(void **)((u8 *)temp_r6 + 0x40) = (void *)&fn_8019A364;
    fn_80053658(temp_r3, 0, arg0);
    scale = lbl_8036AF14;
    inner = *(void **)((u8 *)temp_r3 + 0x30);
    *(s32 *)((u8 *)inner + 8) = *(s32 *)((u8 *)inner + 8) | 0x801;
    *(f32 *)((u8 *)*(void **)((u8 *)temp_r3 + 0x30) + 0x18) = scale;
    *(f32 *)((u8 *)*(void **)((u8 *)temp_r3 + 0x30) + 0x24) = temp_f31;
    fn_8014CBD8(lbl_80330708, (f32)(s8)((u8 *)arg0)[0x3C], (f32)(s8)((u8 *)arg0)[0x3D]);
}

s32 fn_8019A01C(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x34);
}

void fn_8019A088(void *arg0) {
    M2C_UNK fn_80049D30(s32);
    fn_80049D30(M2C_FIELD(arg0, s32 *, 0x34));
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x34), 0, 0);
}

#pragma use_lmw_stmw on
s32 fn_8019A364(void *arg0)
{
    void fn_80025624(s32, s32);
    void fn_800536B0(void *, f32, f32, f32);
    f32 fn_80059F64(f32, f32, f32, f32);
    f32 fn_80059F78(s32, f32, f32, f32, f32);
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    void fn_80147578(void *, s32, f32, f32, f32);
    void fn_8018CFA4(s32, s32, s32, s32, void *);
    void fn_80202300(void *, s32, f32);
    void fn_802029C4(void *, void *, void *);
    extern u32 lbl_8027AA20[3];
    extern u8 lbl_8027AA38[];
    extern s32 lbl_80367240;
    extern u32 lbl_8036AEFC;
    extern f32 lbl_8036AF00;
    extern f32 lbl_8036AF18;
    extern f32 lbl_8036AF1C;
    extern f32 lbl_8036AF20;
    extern f32 lbl_8036AF24;
    extern f32 lbl_8036AF28;
    extern f32 lbl_8036AF2C;

    f32 mtx[12];
    f32 vec[3];
    u32 spC;
    u32 sp8;
    void *self;
    u8 *obj;
    f32 f31;
    f32 f30;
    f32 f29;
    f32 f28;
    f32 f27;
    f32 f26;
    f32 f25;
    f32 f24;
    s32 alpha;
    f32 scaled;

    self = arg0;
    obj = *(u8 **)(*(u8 **)((u8 *)arg0 + 0x30) + 0x4C);
    if (*(s16 *)(obj + 0x48) >= *(s16 *)(obj + 0x4A)) {
        return 0;
    }
    (*(s16 *)(obj + 0x48))++;

#pragma peephole off
    f24 = lbl_8036AF00 + (f32)(s8)obj[0x3B];
    f30 = lbl_8036AF00 + (f32)(s8)obj[0x3C];
    f31 = *(f32 *)(obj + 0x40);
    f28 = *(f32 *)(obj + 0x44);
    f29 = lbl_8036AF00 + (f32)(s8)obj[0x3D];
    f27 = fn_80059F64(lbl_8036AF00 + (f32)(s8)obj[0x3A], f30,
                      (f32)*(s16 *)(obj + 0x4A), (f32)*(s16 *)(obj + 0x48));
    f26 = fn_80059F64(f24, f29,
                      (f32)*(s16 *)(obj + 0x4A), (f32)*(s16 *)(obj + 0x48));
    f31 = fn_80059F64(f31, f28,
                      (f32)*(s16 *)(obj + 0x4A), (f32)*(s16 *)(obj + 0x48));
#pragma peephole on

    alpha = 0xFF;
    *(u32 *)&vec[0] = lbl_8027AA20[0];
    *(u32 *)&vec[1] = lbl_8027AA20[1];
    *(u32 *)&vec[2] = lbl_8027AA20[2];
    vec[1] = *(f32 *)(obj + 0x4C);
    fn_80202300(mtx, 0x58, lbl_8036AF18);
    fn_802029C4(mtx, vec, vec);

    f24 = (f32)*(s16 *)(obj + 0x4A) * lbl_8036AF00;
    scaled = lbl_8036AF1C * vec[2];
    f25 = lbl_8036AF20;
    if ((f32)*(s16 *)(obj + 0x48) < f24) {
        f31 += fn_8005A028(2, lbl_8036AF24, -scaled, f24, (f32)*(s16 *)(obj + 0x48));
        alpha = (s32)fn_8005A028(2, lbl_8036AF20, lbl_8036AF28, f24, (f32)*(s16 *)(obj + 0x48));
    } else {
        f31 += fn_80059F78(2, -scaled, f25, f24, (f32)*(s16 *)(obj + 0x48) - f24);
    }
    f25 += lbl_8036AF2C;

    if (*(s16 *)(obj + 0x48) >= *(s16 *)(obj + 0x4A)) {
        fn_80025624(lbl_80367240, 0x10);
        fn_8018CFA4(0x1E, 6, 2, 0, obj);
        fn_80147578(lbl_8027AA38 + 0xDF, 0x64, f30, f29, f28);
        {
            void *p = *(void **)((u8 *)self + 0x30);
            f25 = lbl_8036AF20;
            *(u32 *)((u8 *)p + 8) &= ~0x800;
        }
    }

    fn_800536B0(self, f27, f26, f31);
    {
        u8 *p;
        p = *(u8 **)((u8 *)self + 0x30);
        sp8 = lbl_8036AEFC;
        *((u8 *)&sp8 + 3) = alpha;
        spC = sp8;
        p[0x38] = *((u8 *)&spC + 0);
        p[0x39] = *((u8 *)&spC + 1);
        p[0x3A] = *((u8 *)&spC + 2);
        p[0x3B] = *((u8 *)&spC + 3);
        *(f32 *)(*(u8 **)((u8 *)self + 0x30) + 0x20) = f25;
    }
    return 0;
}
extern s32 lbl_8036AEF8;
s32 fn_8019A7A8(void *arg0) {
    u8 color[4] = {0x80, 0x80, 0x80, 0x40};
    u8 *dst;

    dst = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 **, 0x5C);
    dst[0x88] = color[0];
    dst[0x89] = color[1];
    dst[0x8A] = color[2];
    dst[0x8B] = color[3];
    return 1;
}

void fn_8019A7E8(s32 arg0) {
    extern u16 lbl_80296DF0[];
    fn_8000CAA0((u16*)lbl_80296DF0, arg0, (u16*)lbl_80296DF0);
    fn_8019D51C(0, 0);
}

#pragma use_lmw_stmw on
void fn_8019A820(void *arg0) {
    void fn_80025624(void *, s32);
    void fn_800536B0(f32, f32, f32);
    void *fn_80053C30(void *, void *);
    void *fn_80095934(s32, s32, s32);
    u8 fn_80096C18(void);
    s32 fn_800970C8(s16);
    s32 fn_800971F8(s16);
    void *fn_8009809C(void);
    void fn_800983E0(void *, void *);
    void fn_80147548(void *, void *, s32);
    void fn_8017E0C0(void *, s32, void *);
    void fn_8017E2BC(void);
    void fn_8017F040(void *, s32, void *);
    void fn_8017F474(void *, void *);
    void fn_8017F70C(void *, void *);
    void fn_80184688(s32, s32, s32, void *);
    void fn_80184BE8(s32, s32, s32, s32);
    void fn_80184C7C(s32, s32, s32, s32);
    void fn_8018CFA4(s32, s32, s32, s32, void *);
    extern u8 lbl_8027AA38[];
    extern void *lbl_80367240;
    typedef struct { s32 x, y, z; } Word3;
    Word3 sp8c;
    Word3 sp80;
    Word3 sp74;
    Word3 sp68;
    Word3 sp5c;
    Word3 sp50;
    Word3 sp44;
    Word3 sp38;
    Word3 sp2c;
    Word3 sp20;
    Word3 sp14;
    Word3 sp8;
    void *obj;
    s32 sub;
    s32 code;
    s32 val;
    s32 tmp;
    void *p;
    s32 v280;

    obj = fn_8009809C();
    sub = fn_800971F8(*(s16 *)((u8 *)arg0 + 0x56));
    code = fn_800970C8(*(s16 *)((u8 *)arg0 + 0x56));
    if (code == 0x52) {
        p = *(void **)obj;
        if (p != NULL) {
            v280 = *(s32 *)((u8 *)p + 0x280);
        } else {
            v280 = 0;
        }
        fn_80184C7C(v280, 7, 2, 0);
        p = *(void **)obj;
        if (p != NULL) {
            v280 = *(s32 *)((u8 *)p + 0x280);
        } else {
            v280 = 0;
        }
        fn_80184BE8(v280, 8, 0x18, 0);
        fn_8017F474(obj, arg0);
        fn_800983E0(&sp74, obj);
        sp80 = sp74;
        fn_80147548(lbl_8027AA38 + 0xF3, &sp80, 0x64);
        return;
    }
    val = (s32)*(f32 *)((u8 *)obj + 0xC);
    if (val == 0) {
        fn_8017F70C(obj, arg0);
        fn_800983E0(&sp5c, obj);
        sp68 = sp5c;
        fn_80147548(lbl_8027AA38 + 0x101, &sp68, 0x64);
        fn_80025624(lbl_80367240, 4);
    } else {
        if (fn_80096C18() != 0) {
            fn_800983E0(&sp44, obj);
            sp50 = sp44;
            fn_80147548(lbl_8027AA38 + 0x114, &sp50, 0x64);
        } else {
            fn_800983E0(&sp2c, obj);
            sp38 = sp2c;
            fn_80147548(lbl_8027AA38 + 0x12B, &sp38, 0x64);
        }
        p = *(void **)obj;
        if (p != NULL) {
            v280 = *(s32 *)((u8 *)p + 0x280);
        } else {
            v280 = 0;
        }
        fn_80184C7C(v280, 9, 2, 0);
        p = *(void **)obj;
        if (p != NULL) {
            v280 = *(s32 *)((u8 *)p + 0x280);
        } else {
            v280 = 0;
        }
        fn_80184BE8(v280, 8, 0x18, 0);
        if (code == 0x51) {
            fn_8018CFA4(0x3C, 6, 2, 0, arg0);
            fn_80025624(lbl_80367240, 0x10);
            fn_8017E2BC();
            fn_800983E0(&sp14, obj);
            sp20 = sp14;
            fn_80147548(lbl_8027AA38 + 0x142, &sp20, 0x64);
        } else {
            fn_8018CFA4(0xF, 6, 2, 0, arg0);
            fn_80025624(lbl_80367240, 8);
        }
        fn_8017E0C0(obj, val, arg0);
        fn_8017F040(obj, val, arg0);
    }
    p = *(void **)obj;
    if (p != NULL) {
        v280 = *(s32 *)((u8 *)p + 0x280);
    } else {
        v280 = 0;
    }
    fn_80184688(v280, 1, 4, arg0);
    tmp = (s32)fn_80095934(0, code, sub);
    if (tmp != 0) {
        fn_800983E0(&sp8, obj);
        sp8c = sp8;
        fn_80053C30((void *)tmp, arg0);
        fn_800536B0(*(f32 *)&sp8c.x, *(f32 *)&sp8c.y, *(f32 *)&sp8c.z);
    }
}
#pragma use_lmw_stmw reset

void fn_8019AB90(void *arg0) {
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x5C), 0, 2);
}

void fn_8019ABBC(void *arg0) {
    s16 r4_val = *(s16 *)((char *)arg0 + 0x6A);
    s16 r5_val = *(s16 *)((char *)arg0 + 0x68);
    
    if (r5_val >= (r4_val - 4)) {
        fn_8000C188();
    }
}

#pragma use_lmw_stmw on
s32 fn_8019ADD8(void *arg0)
{
    f32 fn_80023068(void *, f32, f32);
    void fn_800536B0(void *, f32, f32, f32);
    f32 fn_80059F64(f32, f32, f32, f32);
    f32 fn_80059F78(s32, f32, f32, f32, f32);
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    void fn_80202300(void *, s32, f32);
    void fn_802029C4(void *, void *, void *);
    extern u32 lbl_8027AA08[3];
    extern u8 lbl_802CA518[];
    extern u32 lbl_8036AEF4;
    extern f32 lbl_8036AF00;
    extern f32 lbl_8036AF1C;
    extern f32 lbl_8036AF20;
    extern f32 lbl_8036AF24;
    extern f32 lbl_8036AF28;
    extern f32 lbl_8036AF34;
    extern f32 lbl_8036AF38;
    extern f32 lbl_8036AF3C;

    f32 mtx[12];
    f32 vec[3];
    u32 spC;
    u32 sp8;
    s32 alpha;
    void *self;
    u8 *obj;
    f32 f31;
    f32 f30;
    f32 f29;
    f32 f28;
    f32 f27;
    f32 f26;

    self = arg0;
    obj = *(u8 **)(*(u8 **)((u8 *)arg0 + 0x30) + 0x4C);
    if (*(s16 *)(obj + 0x68) >= *(s16 *)(obj + 0x6A)) {
        return 0;
    }
    (*(s16 *)(obj + 0x68))++;

#pragma scheduling off
    f28 = lbl_8036AF00 + (f32)(s8)obj[0x64];
    f29 = lbl_8036AF00 + (f32)(s8)obj[0x65];
#pragma scheduling reset
    f31 = fn_80023068(lbl_802CA518, f28, f29);
    f30 = lbl_8036AF00 + (f32)(s8)obj[0x66];
    f27 = lbl_8036AF00 + (f32)(s8)obj[0x67];
    f26 = fn_80023068(lbl_802CA518, f30, f27);
    f30 = fn_80059F64(f28, f30,
                      (f32)*(s16 *)(obj + 0x6A), (f32)*(s16 *)(obj + 0x68));
    f29 = fn_80059F64(f29, f27,
                      (f32)*(s16 *)(obj + 0x6A), (f32)*(s16 *)(obj + 0x68));
    f28 = fn_80059F64(f31, f26,
                      (f32)*(s16 *)(obj + 0x6A), (f32)*(s16 *)(obj + 0x68));

    alpha = 0xFF;
    *(u32 *)&vec[0] = lbl_8027AA08[0];
    *(u32 *)&vec[1] = lbl_8027AA08[1];
    *(u32 *)&vec[2] = lbl_8027AA08[2];
    vec[1] = *(f32 *)(obj + 0x6C);
    fn_80202300(mtx, 0x58, lbl_8036AF34);
    fn_802029C4(mtx, vec, vec);

    f31 = lbl_8036AF00 * (f32)*(s16 *)(obj + 0x6A);
    {
        f32 scaled = lbl_8036AF1C * vec[2];
        if ((f32)*(s16 *)(obj + 0x68) < f31) {
            f26 = f28 + fn_8005A028(2, lbl_8036AF24, -scaled, f31, (f32)*(s16 *)(obj + 0x68));
            f27 = fn_8005A028(2, lbl_8036AF38, lbl_8036AF20, f31, (f32)*(s16 *)(obj + 0x68));
            alpha = (s32)fn_8005A028(2, lbl_8036AF20, lbl_8036AF28, f31, (f32)*(s16 *)(obj + 0x68));
        } else {
            f26 = f28 + fn_80059F78(2, -scaled, lbl_8036AF20, f31, (f32)*(s16 *)(obj + 0x68) - f31);
            f27 = fn_80059F78(2, lbl_8036AF20, lbl_8036AF3C, f31, (f32)*(s16 *)(obj + 0x68) - f31);
        }
    }

    fn_800536B0(self, f30, f29, f26);
    {
        u8 *p = *(u8 **)((u8 *)self + 0x30);
        sp8 = lbl_8036AEF4;
        *((u8 *)&sp8 + 3) = alpha;
        spC = sp8;
        p[0x38] = *((u8 *)&spC + 0);
        p[0x39] = *((u8 *)&spC + 1);
        p[0x3A] = *((u8 *)&spC + 2);
        p[0x3B] = *((u8 *)&spC + 3);
        *(f32 *)(*(u8 **)((u8 *)self + 0x30) + 0x20) = f27;
    }

    if (*(s16 *)(obj + 0x68) >= *(s16 *)(obj + 0x6A)) {
        void *p = *(void **)((u8 *)self + 0x30);
        *(u32 *)((u8 *)p + 8) &= ~0x800;
    }
    return 0;
}
s32 fn_8019B25C(void *arg0) {
    u8 color[4] = {0x80, 0x80, 0x80, 0x40};
    u8 *dst;

    dst = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 **, 0x5C);
    dst[0x88] = color[0];
    dst[0x89] = color[1];
    dst[0x8A] = color[2];
    dst[0x8B] = color[3];
    return 1;
}

void fn_8019B29C(void *arg0) {
    u8 fn_8005F9B8(void *, s32);
    u32 *flags;

    flags = (u32 *) (M2C_FIELD(arg0, u8 **, 0x5C) + 0x14);
    if (fn_8005F9B8(flags, 0x12) || (*flags & 0x10)) {
        fn_8000C188(arg0);
    }
}

void fn_8019B2FC(void *arg0) {
    M2C_UNK fn_80049D30(s32);
    M2C_UNK fn_800498A4(s32, M2C_UNK, M2C_UNK);
    void fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_80330708[];

    fn_80049D30(M2C_FIELD(arg0, s32 *, 0x5C));
    fn_800498A4(M2C_FIELD(arg0, s32 *, 0x5C), 0, 0);
    fn_8014CBD8(lbl_80330708, M2C_FIELD(arg0, s8 *, 0x66), M2C_FIELD(arg0, s8 *, 0x67));
}

#pragma optimization_level 4
#pragma inline auto
extern u16 lbl_80330EAC[0x834];
#pragma optimization_level 4
#pragma inline auto
s32 fn_8019B51C(s16 arg0) {
    s32 sp8;
    u16 temp_r31;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r4;
    void *temp_r30;

    temp_r30 = &lbl_80330EAC[0x8A0];
    sp8 = 0;
    temp_r31 = lbl_80330EAC[0x8A0];
    lbl_80330EAC[0x8A0] = arg0;
    lbl_80330EAC[0x8A0] = (u16)(arg0 + 1);
    
loop_1:
    temp_r0 = *(u8*)((u8*)temp_r30 + ((lbl_80330EAC[0x8A0] * 4) + 4));
    if ((s32)temp_r0 == 0x23) {
        goto block_21;
    }
    
    switch ((s32) temp_r0) {
    case 0x0:
        break;
    case 0x9:
    case 0x15:
        if (*(s8*)((u8*)temp_r30 + ((lbl_80330EAC[0x8A0] * 4) + 6)) == 0) {
            sp8 |= 0x20000;
        }
        goto block_21;
    case 0x20:
    case 0x25:
    case 0x55:
        break;
    case 0x53:
    case 0x50:
    case 0x24:
    case 0x23:
        break;
    case 0x1:
    case 0x2:
    case 0x3:
    case 0x4:
    case 0x5:
    case 0x6:
    case 0x7:
    case 0x8:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
        break;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
        break;
    case 0x21:
    case 0x22:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
        break;
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
        break;
    default:
        break;
    }
    
block_21:
    lbl_80330EAC[0x8A0] = temp_r31;
    if (sp8 & 0x10000004) {
        lbl_80330EAC[0x8A0] = arg0;
        var_r4 = 0;
        lbl_80330EAC[0x8A0] = (u16)(arg0 + 1);
        
loop_24:
        temp_r0_2 = *(u8*)((u8*)temp_r30 + ((lbl_80330EAC[0x8A0] * 4) + 4));
        switch ((s32)temp_r0_2) {
        case 0x0:
        case 0x24:
            break;
        case 0x9:
        case 0x15:
            if (*(s8*)((u8*)temp_r30 + ((lbl_80330EAC[0x8A0] * 4) + 6)) > 0) {
                var_r4 = 1;
            }
            /* fall through */
        default:
            lbl_80330EAC[0x8A0] = (u16)(lbl_80330EAC[0x8A0] + 1);
            goto loop_24;
        }
        
        lbl_80330EAC[0x8A0] = temp_r31;
        if (var_r4 != 0) {
            sp8 |= 0x1;
        }
    }
    
    return sp8;
}
void fn_8019B6B4(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296938[];
    extern u8 lbl_8027AA38[];

    fn_8019D51C(fn_8000CAA0(lbl_80296938, arg0), arg1, lbl_8027AA38 + 0x166);
}

void fn_8019B704(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32, void *);
    void fn_8019D51C(s32, void *);
    extern u8 lbl_8027AA38[];
    extern u8 lbl_80296D5C[];
    
    void *temp_r31;
    void *temp_r3;
    s32 temp_r30;
    s32 temp_r4;

    temp_r31 = fn_8000CAA0(lbl_80296D5C, arg0, lbl_80296D5C);
    fn_8019D51C(arg1, lbl_8027AA38 + 0x17A);
    *(u8 *)((uintptr_t)temp_r31 + 0x5c) = 0;
    
    temp_r3 = *(void **)((uintptr_t)temp_r31 + 0x34);
    if (temp_r3 != NULL) {
        temp_r30 = *(u32 *)((uintptr_t)temp_r3 + 0x280);
        if (temp_r30 != 0U) {
            fn_8004FC70(temp_r30, 8);
            fn_8004FC70(temp_r30, 9);
        }
    }
}

void fn_8019B79C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_8019D51C(s32, void *);
    extern M2C_UNK lbl_8027AA38;
    extern M2C_UNK lbl_80296D5C;
    u32 var_r31;
    void *temp_r31;
    void *temp_r3;

    temp_r31 = fn_8000CAA0(&lbl_80296D5C, arg0, &lbl_80296D5C);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x185);
    M2C_FIELD(temp_r31, s8 *, 0x5C) = 1;
    temp_r3 = *M2C_FIELD(temp_r31, void ***, 0x34);
    if (temp_r3 != NULL) {
        var_r31 = M2C_FIELD(temp_r3, u32 *, 0x280);
    } else {
        var_r31 = 0U;
    }
    if (var_r31 != 0U) {
        fn_8004FC70(var_r31, 8);
        fn_8004FC70(var_r31, 9);
    }
}

s32 fn_8019B83C(void* arg0, s32 arg1) {
    void* fn_8000CAA0(void*, s32, void*);
    void fn_8019D51C(s32, void*);
    extern u8 lbl_80296D5C[];
    extern u8 lbl_8027AA38[];
    void* temp_r31;
    
    // First call to fn_8000CAA0
    temp_r31 = fn_8000CAA0(arg0, arg1, NULL);
    
    // Second call to fn_8019D51C  
    fn_8019D51C(arg1, lbl_8027AA38 + 0x194);
    
    // Set field value
    *(u8*)((u8*)temp_r31 + 0x5c) = 3;
    
    return 1;
}

void fn_8019B8A0(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296D5C[];
    extern u8 lbl_8027AA38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296D5C, arg0);
    fn_8019D51C(temp_r31, arg1, lbl_8027AA38 + 0x1A4);
    M2C_FIELD(temp_r31, u8 *, 0x5C) = 2;
}

typedef struct { s32 x, y, z; } Word3B9;
s32 fn_8019B9F0(void *arg0) {
    void *fn_80018ADC(void);
    void fn_80052CA8(void *);
    void fn_80054C14(void *);
    s32 fn_8005F894(void *, s32);
    u8 fn_8005F9B8(void *, s32);
    void fn_800983E0(void *, void *);
    void fn_80098524(void *);
    u8 fn_80098568(void *);
    void fn_80147548(void *, void *, s32);
    void fn_8017E0C0(void *, s32, void *, s32);
    void fn_8017F040(void *, s32, void *);
    void fn_80184688(s32, s32, s32, void *);
    void fn_8018CFA4(s32, s32, s32, s32, void *);
    extern u8 lbl_8027AA38[];
    extern f32 lbl_8036AF40;

    Word3B9 sp2c, sp20, sp14, sp8;
    s32 val;
    void *p5c;
    void *p4c;
    void *tmp;
    s32 var_r3;
    u8 temp;
    s32 a;
    s32 b;
    f32 fv;

    tmp = *(void **)((u8 *)arg0 + 0x30);
    p4c = *(void **)((u8 *)tmp + 0x4C);
    p5c = *(void **)((u8 *)tmp + 0x5C);
    if (!(*(u8 *)((u8 *)p4c + 0x40) & 1)) {
        if (fn_8005F894(p5c, 0x12) < 0) {
            tmp = fn_80018ADC();
            *(f32 *)((u8 *)tmp + 0x70) = lbl_8036AF40;
            fn_80098524(*(void **)((u8 *)p4c + 0x34));
        }
        *(u8 *)((u8 *)p4c + 0x40) = (u8)(*(u8 *)((u8 *)p4c + 0x40) | 1);
    }
    if (fn_8005F9B8(p5c, 0) != 0) {
        fn_800983E0(&sp20, *(void **)((u8 *)p4c + 0x34));
        tmp = *(void **)((u8 *)p4c + 0x34);
        a = *(s32 *)(&sp20);
        fv = *(f32 *)((u8 *)tmp + 0xC);
        b = *(s32 *)((u8 *)&sp20 + 4);
        val = (s32)fv;
        *(s32 *)(&sp2c) = a;
        *(s32 *)((u8 *)&sp2c + 4) = b;
        *(s32 *)((u8 *)&sp2c + 8) = *(s32 *)((u8 *)&sp20 + 8);
        fn_8017E0C0(tmp, val, p4c, a);
        fn_8017F040(*(void **)((u8 *)p4c + 0x34), val, p4c);
        temp = *(u8 *)((u8 *)p4c + 0x5C);
        switch (temp) {
        case 0:
        case 1:
            fn_8018CFA4(0xF, 6, 2, 0, p4c);
            if (fn_80098568(*(void **)((u8 *)p4c + 0x34)) != 0) {
                tmp = lbl_8027AA38 + 0x114;
                *(s32 *)(&sp14) = *(s32 *)(&sp2c);
                *(s32 *)((u8 *)&sp14 + 4) = *(s32 *)((u8 *)&sp2c + 4);
                *(s32 *)((u8 *)&sp14 + 8) = *(s32 *)((u8 *)&sp2c + 8);
                fn_80147548(tmp, &sp14, 0x64);
            } else {
                tmp = lbl_8027AA38 + 0x1B1;
                *(s32 *)(&sp8) = *(s32 *)(&sp2c);
                *(s32 *)((u8 *)&sp8 + 4) = *(s32 *)((u8 *)&sp2c + 4);
                *(s32 *)((u8 *)&sp8 + 8) = *(s32 *)((u8 *)&sp2c + 8);
                fn_80147548(tmp, &sp8, 0x64);
            }
            tmp = *(void **)(*(void **)((u8 *)p4c + 0x34));
            if (tmp != NULL) {
                var_r3 = *(s32 *)((u8 *)tmp + 0x280);
            } else {
                var_r3 = 0;
            }
            fn_80184688(var_r3, 1, 4, p4c);
            break;
        case 2:
        case 3:
            tmp = *(void **)(*(void **)((u8 *)p4c + 0x34));
            if (tmp != NULL) {
                var_r3 = *(s32 *)((u8 *)tmp + 0x280);
            } else {
                var_r3 = 0;
            }
            fn_80184688(var_r3, 1, 0x20, p4c);
            break;
        }
        if (*(void **)((u8 *)p4c + 0x58) != NULL) {
            temp = *(u8 *)((u8 *)p4c + 0x40);
            if (!(temp & 4)) {
                *(u8 *)((u8 *)p4c + 0x40) = (u8)(temp | 4);
                (*(void (**)(void *))((u8 *)p4c + 0x58))(p4c);
            }
        }
    }
    if (fn_8005F9B8(p5c, 0x12) != 0) {
        fn_80052CA8(arg0);
        fn_80098524(*(void **)((u8 *)p4c + 0x34));
    }
    fn_80054C14(arg0);
    return 0;
}

void fn_8019BC50(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296CF8[];
    u8 *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296CF8, arg2);
    fn_8019D51C(temp_r31, 0, NULL);
    temp_r31[0x5D] = arg0;
    temp_r31[0x5E] = arg1;
    temp_r31[0x5C] = 1;
}

void fn_8019BCC0(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296CF8[];
    u8 *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296CF8, arg2);
    fn_8019D51C(temp_r31, 0, NULL);
    temp_r31[0x5D] = arg0;
    temp_r31[0x5E] = arg1;
    temp_r31[0x5C] = 0;
}

void fn_8019BD30(void *arg0) {
    M2C_UNK fn_80098110();
    M2C_UNK fn_80183AB4(u16, s8, s8, void *);
    u16 var_r4;

    fn_80098110();
    var_r4 = 0x10;
    if ((u8) M2C_FIELD(arg0, u8 *, 0x5C) != 0) {
        var_r4 = 0x10 | 0x20;
    }
    fn_80183AB4(var_r4, (s8) M2C_FIELD(arg0, u8 *, 0x5D), (s8) M2C_FIELD(arg0, u8 *, 0x5E), arg0);
}

void fn_8019BD8C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296CAC[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296CAC, arg0), temp, 0);
}

void fn_8019BDD4(void *arg0) {
    void fn_80184688(s32, s32, s32, void *);
    s32 var_r3;
    u8 temp_r4;
    void *temp_r3;

    if (M2C_FIELD(arg0, void **, 0x58) != NULL) {
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x40);
        if (!(temp_r4 & 4)) {
            M2C_FIELD(arg0, u8 *, 0x40) = (u8)(temp_r4 | 4);
            ((void (*)(void *))M2C_FIELD(arg0, void **, 0x58))(arg0);
        }
    }
    temp_r3 = *M2C_FIELD(arg0, void ***, 0x34);
    if (temp_r3 != NULL) {
        var_r3 = M2C_FIELD(temp_r3, s32 *, 0x280);
    } else {
        var_r3 = 0;
    }
    fn_80184688(var_r3, 1, 0x20, arg0);
}

void fn_8019BE54(void *arg0, void *arg1)
{
    extern u8 lbl_80296C74[];
    extern u8 lbl_8027AA38[];

    fn_8000CAA0(lbl_80296C74, arg0);

    fn_8019D51C(
        arg1,
        lbl_8027AA38 + 0x1C6
    );
}

void fn_8019BEA4(s32 arg0) {
    M2C_UNK fn_8002F658(s32 *, s32);
    s32 fn_8002F740();
    M2C_UNK fn_80053658(void *, M2C_UNK, s32);
    M2C_UNK fn_80053680(s32);
    void *fn_80053C30(s32, s32);
    extern M2C_UNK fn_8019BF5C;
    extern s32 lbl_802EF4E0;
    s32 temp_r29;
    s32 var_r30;
    void *temp_r3;
    void *temp_r3_2;

    var_r30 = 0;
loop_4:
    if (var_r30 < (s32) lbl_802EF4E0) {
        fn_8002F658(&lbl_802EF4E0, var_r30);
        temp_r29 = fn_8002F740();
        temp_r3 = fn_80053C30(arg0 + 0x41, arg0);
        if (temp_r3 != NULL) {
            fn_80053680(temp_r29);
            M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), M2C_UNK **, 0x40) = &fn_8019BF5C;
            fn_80053658(temp_r3, 0, arg0);
            fn_80053658(temp_r3, 1, temp_r29);
            temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x30);
            M2C_FIELD(temp_r3_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 8) | 0x400);
        }
        var_r30 += 1;
        goto loop_4;
    }
}

s32 fn_8019BF5C(void *arg0) {
    void fn_80054C14(void *);
    u8 fn_8005F9B8(void *, s32);
    void fn_80184688(s32, s32, s32, void *);
    void *temp_r4;
    void *temp_r31;
    s32 temp_r30;
    void *temp_r3;
    u8 temp_r3_flags;

    temp_r4 = *(void **)((u8 *)arg0 + 0x30);
    temp_r3 = *(void **)((u8 *)temp_r4 + 0x5C);
    temp_r31 = *(void **)((u8 *)temp_r4 + 0x4C);
    temp_r30 = *(s32 *)((u8 *)temp_r4 + 0x50);
    if (temp_r3 != NULL && fn_8005F9B8(temp_r3, 0) != 0) {
        fn_80184688(temp_r30, 1, 0x20, temp_r31);
        if (*(void **)((u8 *)temp_r31 + 0x58) != NULL) {
            temp_r3_flags = *(u8 *)((u8 *)temp_r31 + 0x40);
            if (!(temp_r3_flags & 4)) {
                *(u8 *)((u8 *)temp_r31 + 0x40) = (u8)(temp_r3_flags | 4);
                (*(void (**)(void *))((u8 *)temp_r31 + 0x58))(temp_r31);
            }
        }
    }
    fn_80054C14(arg0);
    return 0;
}

void fn_8019C00C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296D5C[];
    extern u8 lbl_8027AA38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_80296D5C, arg0);
    fn_8019D51C(temp_r31, arg1, lbl_8027AA38 + 0x1A4);
    M2C_FIELD(temp_r31, u8 *, 0x5C) = 2;
}

void fn_8019C070(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, void *);
    extern u8 lbl_80296938[];
    extern u8 lbl_8027AA38[];

    fn_8019D51C(fn_8000CAA0(lbl_80296938, arg0), arg1, lbl_8027AA38 + 0x1D4);
}

void fn_8019C0C0(void *arg0, void *arg1)
{
    void *fn_8000CAA0(void *, void *);
    void fn_8019D51C(void *, void *, const char *);

    extern u8 lbl_80296C00[];
    extern u8 lbl_8027AA38[];

    void *result;

    result = fn_8000CAA0(lbl_80296C00, arg0);

    fn_8019D51C(
        result,
        arg1,
        (const char *)(lbl_8027AA38 + 0x1DD)
    );
}

void fn_8019C110(s32 arg0, s32 arg1) {
    extern u8 lbl_80296C00[];
    extern u8 lbl_8027AA38[];

    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(s32, void *);

    fn_8000CAA0(lbl_80296C00, arg0);
    fn_8019D51C(arg1, lbl_8027AA38 + 0x1E8);
}

extern s32* lbl_80367240;
extern s32* lbl_8036ACC0;
extern void* fn_8005306C(void*);
extern void* fn_80053658(void*, s32, void*);
extern void* fn_800536CC(s32);
extern void* fn_800536D8(void*, s32);
extern void* fn_80053C30(s32, void*);
s32 fn_8019CC04(void *arg0);
extern void* lbl_8027AA38;
extern void* lbl_80296C00;
void fn_8019C160(s32 arg0, s32 arg1) {
    fn_8000CAA0(&lbl_80296C00, arg0, &lbl_80296C00);
    fn_8019D51C(arg1, &lbl_8027AA38 + 0x1F5);
}

void fn_8019C1B0(void *arg0) {
    u8 temp_r4;

    if (((M2C_UNK (*)()) M2C_FIELD(arg0, M2C_UNK (**)(), 0x58)) != NULL) {
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x40);
        if (!(temp_r4 & 4)) {
            M2C_FIELD(arg0, u8 *, 0x40) = (u8) (temp_r4 | 4);
            M2C_FIELD(arg0, M2C_UNK (**)(), 0x58)();
        }
    }
}

void fn_8019C1F8(void *arg0)
{
    extern void *fn_80053C30(void *, void *);
    extern void fn_800536D8(void *, void *);
    extern void fn_8005306C(void *);

    void *result;

    result = fn_80053C30((u8 *)arg0 + 0x41, arg0);

    fn_800536D8(
        result,
        *(void **)(*(u8 **)((u8 *)arg0 + 0x30))
    );

    fn_8005306C(result);
}

extern u16 gUnkGlobalVar_80296B20[];
void fn_8019C394(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296B20[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296B20, arg0), temp, 0);
}

void fn_8019C3DC(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296B20[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296B20, arg0), temp, 0);
}

void fn_8019C424(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296B20[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296B20, arg0), temp, 0);
}

void fn_8019C46C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296B20[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296B20, arg0), temp, 0);
}

void fn_8019C4B4(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296B20[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296B20, arg0), temp, 0);
}

void fn_8019C4FC(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296B98[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296B98, arg0), temp, 0);
}

void fn_8019C5EC(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296A80[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296A80, arg0), temp, 0);
}

void fn_8019C634(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296A80[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296A80, arg0), temp, 0);
}

void fn_8019C67C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296A80[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296A80, arg0), temp, 0);
}

void fn_8019C6C4(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296A80[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296A80, arg0), temp, 0);
}

void fn_8019C85C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296A20[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296A20, arg0), temp, 0);
}

void fn_8019C8A4(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_802969E4[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_802969E4, arg0), temp, 0);
}

void fn_8019C994(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296970[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296970, arg0), temp, 0);
}

void fn_8019C9DC(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296970[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296970, arg0), temp, 0);
}

void fn_8019CA24(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296938[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296938, arg0), temp, 0);
}

void fn_8019CA6C(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    void fn_8019D51C(void *, s32, s32);
    extern u8 lbl_80296938[];
    s32 temp;

    temp = arg1;
    fn_8019D51C(fn_8000CAA0(lbl_80296938, arg0), temp, 0);
}

s32 fn_8019CC04(void *arg0) {
    u8 fn_8005F9B8(void *, s32);
    void *temp_r4;
    void *temp_r31;
    void *temp_r3;
    u8 temp_r3_flags;

    temp_r4 = *(void **)((u8 *)arg0 + 0x30);
    temp_r3 = *(void **)((u8 *)temp_r4 + 0x5C);
    temp_r31 = *(void **)((u8 *)temp_r4 + 0x4C);
    if (temp_r3 != NULL && fn_8005F9B8(temp_r3, 0) != 0) {
        if (*(void **)((u8 *)temp_r31 + 0x58) != NULL) {
            temp_r3_flags = *(u8 *)((u8 *)temp_r31 + 0x40);
            if (!(temp_r3_flags & 4)) {
                *(u8 *)((u8 *)temp_r31 + 0x40) = (u8)(temp_r3_flags | 4);
                (*(void (**)(void *))((u8 *)temp_r31 + 0x58))(temp_r31);
            }
        }
    }
    return 0;
}

s32 fn_8019CC80(void *arg0) {
    void fn_8002297C(void *);
    void fn_80054C14(void *);
    u8 fn_8005F9B8(void *, s32);
    void fn_800C1060(void *);
    extern u8 lbl_802CA518[];
    void *temp_r4;
    void *temp_r31;
    void *temp_r3;
    u8 temp_r3_flags;
    s32 val;
    u8 byte;

    temp_r4 = *(void **)((u8 *)arg0 + 0x30);
    temp_r3 = *(void **)((u8 *)temp_r4 + 0x5C);
    temp_r31 = *(void **)((u8 *)temp_r4 + 0x4C);
    if (temp_r3 != NULL && fn_8005F9B8(temp_r3, 0) != 0) {
        temp_r4 = *(void **)((u8 *)temp_r31 + 0x38);
        if (temp_r4 != NULL) {
            byte = *(u8 *)((u8 *)temp_r4 + 0x1A6);
            val = 4;
            byte = __rlwimi(byte, val, 2, 27, 29);
            *(u8 *)((u8 *)temp_r4 + 0x1A6) = byte;
            fn_8002297C(lbl_802CA518);
            fn_800C1060(temp_r31);
        }
        if (*(void **)((u8 *)temp_r31 + 0x58) != NULL) {
            temp_r3_flags = *(u8 *)((u8 *)temp_r31 + 0x40);
            if (!(temp_r3_flags & 4)) {
                *(u8 *)((u8 *)temp_r31 + 0x40) = (u8)(temp_r3_flags | 4);
                (*(void (**)(void *))((u8 *)temp_r31 + 0x58))(temp_r31);
            }
        }
    }
    fn_80054C14(arg0);
    return 0;
}

void fn_8019CD40(void* arg0, void* arg1) {
    // This is a function with complex control flow and calls to external functions
    // For now we'll implement the structure with placeholders for external calls
}

s32 fn_8019CED0(void *arg0) {
    M2C_UNK fn_80052CA8(void *);
    M2C_UNK fn_80054C14(void *);
    s32 fn_8005F894(s32, M2C_UNK);
    u8 fn_8005F9B8(s32, M2C_UNK);
    M2C_UNK fn_80098524(void *);
    M2C_UNK fn_8017E0C0(void *, s32, void *);
    M2C_UNK fn_8017F040(void *, s32, void *);
    M2C_UNK fn_80184688(s32, M2C_UNK, M2C_UNK, void *);
    extern f32 lbl_8036AF40;
    s32 temp_r29;
    s32 temp_r28;
    void *var_r30;
    s32 var_r3;
    u8 temp_r3_4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_5;
    void *temp_r31;

    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    var_r30 = arg0;
    temp_r31 = M2C_FIELD(temp_r3, void **, 0x4C);
    temp_r29 = M2C_FIELD(temp_r3, s32 *, 0x5C);
    if (!(M2C_FIELD(temp_r31, u8 *, 0x40) & 1)) {
        if (fn_8005F894(temp_r29, 0x12) < 0) {
            temp_r3_5 = (void *)fn_80018ADC();
            M2C_FIELD(temp_r3_5, f32 *, 0x70) = (f32) lbl_8036AF40;
            fn_80098524(M2C_FIELD(temp_r31, void **, 0x34));
        }
        M2C_FIELD(temp_r31, u8 *, 0x40) = (u8) (M2C_FIELD(temp_r31, u8 *, 0x40) | 1);
    }
    if (fn_8005F9B8(temp_r29, 0) != 0) {
        temp_r3_2 = M2C_FIELD(temp_r31, void **, 0x34);
        temp_r28 = (s32) M2C_FIELD(temp_r3_2, f32 *, 0xC);
        fn_8017E0C0(temp_r3_2, temp_r28, temp_r31);
        fn_8017F040(M2C_FIELD(temp_r31, void **, 0x34), temp_r28, temp_r31);
        temp_r3_3 = M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x34), void **, 0);
        if (temp_r3_3 != NULL) {
            var_r3 = M2C_FIELD(temp_r3_3, s32 *, 0x280);
        } else {
            var_r3 = 0;
        }
        fn_80184688(var_r3, 1, 0x20, temp_r31);
        if (((M2C_UNK (*)(void *)) M2C_FIELD(temp_r31, M2C_UNK (**)(void *), 0x58)) != NULL) {
            temp_r3_4 = M2C_FIELD(temp_r31, u8 *, 0x40);
            if (!(temp_r3_4 & 4)) {
                M2C_FIELD(temp_r31, u8 *, 0x40) = (u8) (temp_r3_4 | 4);
                M2C_FIELD(temp_r31, M2C_UNK (**)(void *), 0x58)(temp_r31);
            }
        }
    }
    if (fn_8005F9B8(temp_r29, 0x12) != 0) {
        fn_80052CA8(var_r30);
        temp_r3_5 = (void *)fn_80018ADC();
        M2C_FIELD(temp_r3_5, f32 *, 0x70) = (f32) lbl_8036AF40;
        fn_80098524(M2C_FIELD(temp_r31, void **, 0x34));
    }
    fn_80054C14(var_r30);
    return 0;
}

void fn_8019D038(void *arg0) {
    M2C_UNK fn_8017E394(s32, M2C_UNK, void *, M2C_UNK);
    fn_8017E394(M2C_FIELD(arg0, s32 *, 0x34), 0, arg0, 3);
}

void fn_8019D068(s32 arg0)
{
  u32 temp_r31;
  u32 fn_800980E8(M2C_UNK);
  M2C_UNK fn_80184A00(u32, u32, M2C_UNK, s32);
  u32 temp_r30;
  temp_r31 = fn_800980E8(0);
  temp_r30 = fn_800980E8(1);
  if ((temp_r31 != 0U) && (temp_r30 != 0U))
  {
    fn_80184A00(temp_r31, temp_r30, 0x10, arg0);
    fn_80184A00(temp_r30, temp_r31, 0x10, arg0);
  }
}

void fn_8019D0F4(void *arg0)
{
    extern void *fn_80055204(void *, s32);
    extern void fn_80234450(void *, void *);
    extern void fn_800558D8(void *);

    u8 *obj;
    void *result;

    obj = (u8 *)arg0;

    if ((s8)obj[0x41] == 0) {
        result = fn_80055204(
            *(void **)(*(u8 **)(obj + 0x30)),
            0
        );

        fn_80234450(obj + 0x41, result);
    }

    fn_800558D8(obj + 0x41);
}

void fn_8019D150(void *arg0) {
    u8 fn_80098568(void **);
    M2C_UNK fn_80183B24(s32, void *);
    s32 var_r3;
    s32 var_r3_2;
    void *temp_r3;
    void *temp_r3_2;

    if (fn_80098568(M2C_FIELD(arg0, void ***, 0x34)) != 0) {
        temp_r3 = *M2C_FIELD(arg0, void ***, 0x34);
        if (temp_r3 != NULL) {
            var_r3 = M2C_FIELD(temp_r3, s32 *, 0x280);
        } else {
            var_r3 = 0;
        }
        fn_80183B24(var_r3, arg0);
        return;
    }
    temp_r3_2 = *M2C_FIELD(arg0, void ***, 0x34);
    if (temp_r3_2 != NULL) {
        var_r3_2 = M2C_FIELD(temp_r3_2, s32 *, 0x280);
    } else {
        var_r3_2 = 0;
    }
    fn_80184C7C(var_r3_2, 0, 0x18, 0);
}

void fn_8019D1DC(void *arg0) {
    void *tmp;
    u8 flags;

    tmp = *(void **)((u8 *)arg0 + 0x38);
    if (tmp != NULL) {
        fn_80050BA8(tmp, 0, 0);
    }
    tmp = *(void **)((u8 *)arg0 + 0x3C);
    if (tmp != NULL) {
        fn_80050BA8(tmp, 0, 0);
    }
    fn_8005376C();
    if (*(void **)((u8 *)arg0 + 0x58) != NULL) {
        flags = *(u8 *)((u8 *)arg0 + 0x40);
        if (!(flags & 4)) {
            *(u8 *)((u8 *)arg0 + 0x40) = (u8)(flags | 4);
            (*(void (**)(void *))((u8 *)arg0 + 0x58))(arg0);
        }
    }
}

s32 fn_8019D268(void) {
    void *fn_8000C0C0(void *);
    u8 fn_800537E8(void);
    void fn_8000C60C(void *);
    extern u8 lbl_802968E8[];
    void *temp_r3;

    temp_r3 = fn_8000C0C0(lbl_802968E8);
    if (temp_r3 != NULL && fn_800537E8() == 0) {
        fn_8000C60C(temp_r3);
        return 0;
    }
    return 1;
}

u8 fn_8019D2C0(void) {
    void *fn_8000C0C0(void *);
    extern u8 lbl_802968E8[];
    void *p;
    p = fn_8000C0C0(lbl_802968E8);
    if (p != NULL) {
        return M2C_FIELD(p, u8 *, 0x34);
    }
    return 1;
}

void fn_8019D2FC(void *arg0) {
    void *fn_8000CAF0(void *, void *);
    extern u8 lbl_802968E8[];
    void *temp_r3;
    void *temp_r4;
    s32 var_r0;

    temp_r3 = fn_8000CAF0(lbl_802968E8, arg0);
    temp_r4 = *(void **)((u8 *)arg0 + 0x30);
    temp_r4 = *(void **)temp_r4;
    if (temp_r4 != NULL) {
        var_r0 = *(s32 *)((u8 *)temp_r4 + 0x280);
    } else {
        var_r0 = 0;
    }
    *(s32 *)((u8 *)temp_r3 + 0x30) = var_r0;
    *(u8 *)((u8 *)temp_r3 + 0x34) = 0;
    *(u8 *)((u8 *)temp_r3 + 0x35) = 0;
}

void fn_8019D360(void *arg0) {
    void *temp_r5;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x35) == 0) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(temp_r5, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x1C) & 0xFFFFFF3F);
        M2C_FIELD(arg0, u8 *, 0x35) = 1U;
    }
}

void fn_8019D388(void *arg0) {
    u8 fn_8005F9B8(void *, s32);
    u8 fn_8004BF80(void *);
    void fn_800056A0(s32);
    void fn_8000C188(void *);
    void *obj;
    u32 *p31;

    obj = *(void **)((u8 *)arg0 + 0x30);
    p31 = (u32 *)((u8 *)obj + 0x1C);

    if (*(u8 *)((u8 *)arg0 + 0x34) == 0) {
        if (fn_8005F9B8(p31, 2)) {
            *p31 |= 0x80;
            *(u8 *)((u8 *)arg0 + 0x34) = 1;
        }
        if (fn_8004BF80(*(void **)((u8 *)arg0 + 0x30))) {
            fn_800056A0(0);
            *(u8 *)((u8 *)arg0 + 0x34) = 1;
        }
    } else {
        if (fn_8004BF80(obj)) {
            fn_8000C188(arg0);
        }
    }

    if (*(u8 *)((u8 *)arg0 + 0x34) == 1) {
        if (fn_8005F9B8(p31, 8)) {
            *p31 |= 0x40;
        }
    }
}

void fn_8019D458(void *arg0) {
    M2C_UNK fn_80184618(s32, void *);
    M2C_UNK fn_80184BE8(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80184C7C(s32, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80184C7C(M2C_FIELD(arg0, s32 *, 0x30), 5, 0x10, 0);
    fn_80184BE8(M2C_FIELD(arg0, s32 *, 0x30), 0, 0x10, 0);
    fn_80184618(M2C_FIELD(arg0, s32 *, 0x30), arg0);
}

void fn_8019D4F4(void *arg0) {
    M2C_UNK fn_8004FC70(s32, M2C_UNK);
    fn_8004FC70(M2C_FIELD(arg0, s32 *, 0x30), 5);
}

s32 fn_8019D7A8(void) {
    extern s32 lbl_80367110;
    extern u8 lbl_80296F50[];

    void *fn_8000CAA0(void *, s32);
    void fn_80013864(void);
    s32 fn_800C0658(void);
    u8 fn_80194E38(void);

    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_80194E38() != 0) {
        fn_8000CAA0(lbl_80296F50, fn_800C0658());
        fn_80013864();
    }
    return 1;
}

void fn_8019D800(s32 arg0) {
    void fn_8000C188(s32);
    u8 fn_80194E38();
    extern s32 lbl_80367110;

    if (lbl_80367110 & 1) {
        fn_8000C188(arg0);
    } else if (fn_80194E38() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_8019D850(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    void *fn_80194F54(s32);
    void fn_8019514C(void *, void *);
    extern s32 lbl_8036C500;
    void *obj;
    s32 spC;
    s32 sp8;

    obj = fn_80194F54(arg0);
    sp8 = lbl_8036C500;
    ((u8 *)&sp8)[0] = arg1;
    ((u8 *)&sp8)[1] = arg2;
    ((u8 *)&sp8)[2] = arg3;
    ((u8 *)&sp8)[3] = arg4;
    spC = sp8;
    fn_8019514C(obj, &spC);
    return 1;
}

extern void *fn_80194F54(s32);
extern void fn_80195170(void *arg0, s8 arg1);
s32 fn_8019D8CC(s32 arg0, s32 arg1) {
    void *fn_80194F54(s32);
    void fn_80195170(void *, s32);
    fn_80195170(fn_80194F54(arg0), arg1 != 0);
    return 1;
}

s32 fn_8019D90C(void) {
    M2C_UNK fn_80194E10();
    fn_80194E10();
    return 1;
}

s32 fn_8019D930(void) {
    M2C_UNK fn_80194F54();
    M2C_UNK fn_80195880();
    fn_80194F54();
    fn_80195880();
    return 1;
}

s32 fn_8019D958(s32 arg0, s32 arg1) {
    void *fn_80194F54(s32);
    void fn_8019588C(void *, s32);
    extern f32 lbl_8036AF48;
    f32 temp_f1;
    void *obj;

    obj = fn_80194F54(arg0);
    temp_f1 = (f32) arg1;
    fn_8019588C(obj, (s32) (temp_f1 / lbl_8036AF48));
    return 1;
}

void fn_8019DB28(void) {
    void fn_8000BF00(void *);
    void fn_800A84A0(void);
    void fn_800C0818(s32);
    void fn_801293C0(void);
    void fn_80199C2C(void);
    void fn_8005376C(void);
    extern u8 lbl_80296FA8[];

    fn_800C0818(0);
    fn_801293C0();
    fn_8000BF00(lbl_80296FA8);
    fn_80199C2C();
    fn_800A84A0();
    fn_8005376C();
}

s32 fn_8019E4EC(void) {
    u8 fn_800A69D8(M2C_UNK *, s32 *);
    M2C_UNK spC;
    s32 sp8;

    if (fn_800A69D8(&spC, &sp8) != 0) {
        return sp8;
    }
    return 0;
}

s32 fn_8019E528(void) {
    u8 fn_800A69D8(M2C_UNK *, s32 *);
    s32 spC;
    M2C_UNK sp8;

    if (fn_800A69D8(&spC, &sp8) != 0) {
        return spC;
    }
    return 0;
}

s32 fn_8019E564(s32 arg0) {
    M2C_UNK fn_8000BF00(M2C_UNK *);
    M2C_UNK fn_8000CAF0(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_80297070;
    if (arg0 != 0) {
        fn_8000CAF0(&lbl_80297070, fn_800C0658(), &lbl_80297070);
    } else {
        fn_8000BF00(&lbl_80297070);
    }
    return 1;
}

void fn_8019E5B0(void) {
    M2C_UNK fn_8000A274(M2C_UNK);
    fn_8000A274(0);
}

s32 fn_8019E5D4(u8 arg0, s32 arg1) {
    extern u8 lbl_802B14E4[];
    u8 *var_r3;
    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x280];
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || (*(u32 *)(var_r3 + 0x188) == 0)) {
        return 0;
    }
    if (arg1 != 0) {
        *(s32 *)(var_r3 + 0x1A0) = *(s32 *)(var_r3 + 0x1A0) | 1;
    } else {
        *(s32 *)(var_r3 + 0x1A0) = *(s32 *)(var_r3 + 0x1A0) & ~1;
    }
    return 1;
}

s32 fn_8019E640(s32 arg0) {
    u8 var_r0;
    
    var_r0 = lbl_8036728B | 0x2;
    if (arg0 != 0) {
        var_r0 = lbl_8036728B & 0xFFFFFFFD;
    }
    lbl_8036728B = var_r0;
    return 1;
}

s32 fn_8019E668(s32 arg0) {
    u8 var_r0;
    
    var_r0 = lbl_8036728B & 0xFFFFFFFB;
    if (arg0 != 0) {
        var_r0 = lbl_8036728B | 0x4;
    }
    lbl_8036728B = var_r0;
    return 1;
}

s32 fn_8019E690(s32 arg0) {
    extern u8 lbl_8036728B;
    u8 var_r0;

    var_r0 = lbl_8036728B | 1;
    if (arg0 != 0) {
        var_r0 = lbl_8036728B & 0xFE;
    }
    lbl_8036728B = var_r0;
    return 1;
}

s32 fn_8019E6B4(void) {
    M2C_UNK fn_8018CF08();
    fn_8018CF08();
    return 1;
}

void fn_8019E764(u32 arg0, void *arg1) {
    u32 temp_r3;
    if (arg1 != 0) {
        M2C_FIELD(arg1, u32 *, 0x1C) = arg0;
        temp_r3 = M2C_FIELD(arg1, u32 *, 0x20);
        if (temp_r3 != 0) {
            ((void (*)(u32))((void **)(temp_r3))[0x48])(arg0);
        }
    }
}

void fn_8019E7C0(void *arg0)
{
    void fn_8005376C(void);
    s32 fn_800537E8(void);
    void fn_8000C188(void *);

    extern u32 lbl_80367110;

    if (lbl_80367110 & 1) {
        fn_8005376C();
        fn_8000C188(arg0);
    } else {
        if ((u8)fn_800537E8() == 0) {
            fn_8000C188(arg0);
        }
    }
}

s32 fn_8019E8B0(s32 arg0, s32 arg1) {
    extern u32 lbl_80367110;
    extern u8 lbl_8032BB58[];
    s32 fn_80040844(void);
    void *fn_8004721C(void *, s32, s32, u32, s32);
    s32 fn_80046400(void *, void *, void *);
    void fn_80044450(s32, s32);
    void fn_800056A0(s8);
    void fn_80016180(void);
    void fn_80013864(void);
    s32 fn_80049D58(void *);
    void fn_80049BD4(void *, u8);
    s32 fn_800C0658(void);
    void fn_8010FE08(void *, s32, s32, u8);
    void fn_80129888(void *, s32);
    void *temp1;
    s32 sp8[10];
    s32 count;
    s32 i;
    s32 v;
    s32 *p;
    u8 *temp2;

    if (lbl_80367110 & 1) {
        temp1 = fn_8004721C((void *) fn_80040844(), arg0, arg1, 0x800, 0x10);
        if (temp1 == NULL) {
            fn_800056A0(0);
        } else {
            fn_8010FE08(lbl_8032BB58, (s8) arg0, (s8) arg1, 0x22);
            count = fn_80046400((void *) fn_80040844(), temp1, sp8);
            p = sp8;
            i = 0;
            while (i < count) {
                v = *p;
                if ((u8) fn_80049D58((void *) v) == 0) {
                    fn_80049BD4((void *) v, 0);
                }
                p++;
                i++;
            }
            fn_80044450(fn_80040844(), 1);
            fn_80016180();
        }
        return 0;
    }
    temp2 = (u8 *) fn_8004721C((void *) fn_80040844(), arg0, arg1, 0x800, 0x10);
    if (temp2 == NULL) {
        fn_800056A0(0);
        return 0;
    }
    fn_80129888(temp2, fn_800C0658());
    fn_8010FE08(lbl_8032BB58, (s8) temp2[0], (s8) temp2[1], 0x22);
    fn_80013864();
    return 1;
}

s32 fn_8019EA48(void) {
    void fn_8000BF00(void *);
    extern u8 lbl_80297024[];
    fn_8000BF00(lbl_80297024);
    return 1;
}

s32 fn_8019EA74(s32 arg0, s32 arg1) {
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658(void);
    extern u8 lbl_80297024[];
    void *temp_r3;

    temp_r3 = fn_8000CAF0(lbl_80297024, fn_800C0658());
    M2C_FIELD(temp_r3, s32 *, 0x30) = arg0;
    M2C_FIELD(temp_r3, s32 *, 0x34) = arg1;
    return 1;
}

void fn_8019EAC8(void *arg0) {
    M2C_UNK fn_800F18A4(s32, s32);
    fn_800F18A4(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x34));
}

s32 fn_8019EC0C(s32 arg0, s32 arg1, u8 arg2) {
    void *fn_8004721C(void *, s32, s32, s32, s32);
    s32 fn_80040844(void);
    void fn_80044450(s32, s32);
    void fn_80016180(void);
    void fn_800056A0(s32);
    
    u8 *temp_r3;

    temp_r3 = fn_8004721C((void *) fn_80040844(), arg0, arg1, 0x800, 0x10);
    if (temp_r3 == NULL) {
        fn_800056A0(0);
        return 0;
    }
    
    if (arg2 != 0) {
        temp_r3[2] = (u8)(temp_r3[2] & 0xFFFFFFFD);
    } else {
        temp_r3[2] = (u8)(temp_r3[2] | 2);
    }
    
    fn_80044450(fn_80040844(), 1);
    fn_80016180();
    return 1;
}

s32 fn_8019ED74(void) {
    return 1;
}

s32 fn_8019ED7C(s32 arg0, s32 arg1) {
    extern u32 lbl_80367110;
    extern u8 lbl_8032BB58[];
    s32 fn_80040844(void);
    void *fn_8004721C(void *, s32, s32, u32, s32);
    s32 fn_80046400(void *, void *, void *);
    void fn_80044450(s32, s32);
    void fn_800056A0(s8);
    void fn_80016180(void);
    void fn_80013864(void);
    s32 fn_80049D58(void *);
    void fn_80049BD4(void *, u8);
    s32 fn_800C0658(void);
    void fn_8010FE08(void *, s32, s32, u8);
    void fn_80129888(void *, s32);
    void *temp1;
    s32 sp8[10];
    s32 count;
    s32 i;
    s32 v;
    s32 *p;
    u8 *temp2;

    if (lbl_80367110 & 1) {
        temp1 = fn_8004721C((void *) fn_80040844(), arg0, arg1, 0x800, 0x10);
        if (temp1 == NULL) {
            fn_800056A0(0);
        } else {
            fn_8010FE08(lbl_8032BB58, (s8) arg0, (s8) arg1, 0x22);
            count = fn_80046400((void *) fn_80040844(), temp1, sp8);
            p = sp8;
            i = 0;
            while (i < count) {
                v = *p;
                if ((u8) fn_80049D58((void *) v) == 0) {
                    fn_80049BD4((void *) v, 0);
                }
                p++;
                i++;
            }
            fn_80044450(fn_80040844(), 1);
            fn_80016180();
        }
        return 0;
    }
    temp2 = (u8 *) fn_8004721C((void *) fn_80040844(), arg0, arg1, 0x800, 0x10);
    if (temp2 == NULL) {
        fn_800056A0(0);
        return 0;
    }
    fn_80129888(temp2, fn_800C0658());
    fn_8010FE08(lbl_8032BB58, (s8) temp2[0], (s8) temp2[1], 0x22);
    fn_80013864();
    return 1;
}

s32 fn_8019F230(s32 arg0, s32 arg1) {
    s32 fn_80040844(void);
    void *fn_8004721C(void *, s32, s32, s32, s32);
    void fn_800056A0(s32);
    void fn_8012942C(void *, s32);
    s32 fn_800C0658(void);
    void fn_8010FEEC(void *, s32, s32, s32, s32);
    void fn_80013864(void);
    extern u8 lbl_8032BB58[];

    void *temp_r3;

    temp_r3 = fn_8004721C((void *) fn_80040844(), arg0, arg1, 0x200, 0x410);
    if (temp_r3 == NULL) {
        fn_800056A0(0);
        return 0;
    }
    fn_8012942C(temp_r3, fn_800C0658());
    fn_8010FEEC(lbl_8032BB58, (s8) arg0, (s8) arg1, 0x23, 0);
    fn_80013864();
    return 1;
}

void fn_8019F2D0(void* arg0) {
    int temp_r3 = 0;
    int temp_r4 = 0;
    int temp_r5 = 0;
    
    // Load a value from arg0 + 0x7C
    int r3_val = *(int*)((char*)arg0 + 0x7C);
    
    // Check if the value is 0 or not
    if (r3_val == 0) {
        // If it's zero, set to some specific value and continue
        temp_r3 = *(int*)((char*)arg0 + 0x84);
        *(int*)((char*)arg0 + 0x80) = temp_r3;
    }
    
    // Check if r3_val == 1
    if (r3_val == 1) {
        temp_r4 = *(int*)((char*)arg0 + 0x70);
        temp_r5 = *(int*)((char*)arg0 + 0x74);
        
        // Call another function with the loaded values
        fn_8013467C(arg0, 0x217);
    }
    
    // Check if r3_val == 2 
    if (r3_val == 2) {
        temp_r5 = *(int*)((char*)arg0 + 0x78);
        *(int*)((char*)arg0 + 0x80) = temp_r5;
        
        // Call another function with the loaded value
        fn_801B70A0(arg0, 0x320, 0x2);
    }
}

#pragma use_lmw_stmw on
s32 fn_8019F688(s32 arg0, s32 arg1) {
    s32 fn_80040844(void);
    void *fn_8004721C(void *, s32, s32, u32, s32);
    void fn_800056A0(s32);
    void fn_8010FE08(void *, s32, s32, s32);
    void *fn_8010FF24(void *, s32, s32, s32);
    void fn_80049B1C(void *, s32);
    void *fn_80046F14(void *, s32, s32, u32, s32);
    s32 fn_80046400(void *, void *, s32 *);
    u8 fn_80049D58(void *);
    void fn_80049BD4(void *, s32);
    void fn_80044450(s32, s32);
    void fn_80016180(void);
    extern u8 lbl_8032BB58[];
    s32 count;
    s32 i;
    s32 v;
    s32 *p;
    s32 sp8[10];

    {
        void *temp1 = fn_8004721C((void *)fn_80040844(), arg0, arg1, 0x1000, 0x10);
        if (temp1 == NULL) {
            fn_800056A0(0);
            return 0;
        }
        fn_8010FE08(lbl_8032BB58, (s8)arg0, (s8)arg1, 0x21);
        {
            void *temp2 = fn_8010FF24(lbl_8032BB58, (char)arg0, (char)arg1, 4);
            if (temp2 != NULL) {
                ((u8 *)temp2)[4] = ((u8 *)temp2)[5];
            }
        }
        fn_80049B1C(temp1, 0);
    }
    {
        void *temp1 = fn_80046F14((void *)fn_80040844(), arg0, arg1, 0x800, 0);
        if (temp1 != NULL) {
            count = fn_80046400((void *)fn_80040844(), temp1, sp8);
            p = sp8;
            i = 0;
            while (i < count) {
                v = *p;
                if ((u8)fn_80049D58((void *)v) == 0) {
                    fn_80049BD4((void *)v, 0);
                }
                p++;
                i++;
            }
        }
    }
    fn_80044450(fn_80040844(), 1);
    fn_80016180();
    return 1;
}
#pragma use_lmw_stmw on
s32 fn_8019F7CC(s32 arg0, s32 arg1) {
    s32 fn_80040844(void);
    void *fn_8004721C(void *, s32, s32, u32, s32);
    void fn_800056A0(s32);
    void fn_8010FEEC(void *, s32, s32, s32, s32);
    void *fn_8010FF24(void *, s32, s32, s32);
    void fn_80049B78(void *, s32);
    void *fn_80046F14(void *, s32, s32, u32, s32);
    s32 fn_80046400(void *, void *, s32 *);
    u8 fn_80049D6C(void *);
    void fn_80049C30(void *, s32);
    void fn_80044450(s32, s32);
    void fn_80016180(void);
    extern u8 lbl_8032BB58[];
    s32 count;
    s32 i;
    s32 v;
    s32 *p;
    s32 sp8[10];

    {
        void *temp1 = fn_8004721C((void *)fn_80040844(), arg0, arg1, 0x1000, 0x10);
        if (temp1 == NULL) {
            fn_800056A0(0);
            return 0;
        }
        fn_8010FEEC(lbl_8032BB58, (s8)arg0, (s8)arg1, 0x21, 0);
        {
            void *temp2 = fn_8010FF24(lbl_8032BB58, (char)arg0, (char)arg1, 4);
            if (temp2 != NULL) {
                ((u8 *)temp2)[4] = 0;
            }
        }
        fn_80049B78(temp1, 0);
    }
    {
        void *temp1 = fn_80046F14((void *)fn_80040844(), arg0, arg1, 0x800, 0);
        if (temp1 != NULL) {
            count = fn_80046400((void *)fn_80040844(), temp1, sp8);
            p = sp8;
            i = 0;
            while (i < count) {
                v = *p;
                if ((u8)fn_80049D6C((void *)v) == 0) {
                    fn_80049C30((void *)v, 0);
                }
                p++;
                i++;
            }
        }
    }
    fn_80044450(fn_80040844(), 1);
    fn_80016180();
    return 1;
}
s32 fn_8019F914(s32 arg0, s32 arg1) {
    s32 fn_80040844(void);
    void *fn_8004721C(s32, s32, s32, s32, s32);
    void fn_8010FEEC(void *, s32, s32, s32, s32);
    void fn_80049C8C(void *, s32);
    void fn_80044450(s32, s32);
    void fn_80016180(void);
    extern u8 lbl_8032BB58[];
    void *temp;

    temp = fn_8004721C(fn_80040844(), arg0, arg1, 0x80000, 0x10);
    if (temp == NULL) {
        return 0;
    }
    fn_8010FEEC(lbl_8032BB58, (s8)arg0, (s8)arg1, 0x29, 0);
    fn_80049C8C(temp, 0);
    fn_80044450(fn_80040844(), 1);
    fn_80016180();
    return 1;
}

s32 fn_8019F9B4(s32 arg0, s32 arg1) {
    s32 fn_80040844(void);
    void *fn_8004721C(s32, s32, s32, s32, s32);
    void fn_8010FE08(void *, s32, s32, s32);
    void fn_80049C8C(void *, s32);
    void fn_80044450(s32, s32);
    void fn_80016180(void);
    extern u8 lbl_8032BB58[];
    void *temp;

    temp = fn_8004721C(fn_80040844(), arg0, arg1, 0x80000, 0x10);
    if (temp == NULL) {
        return 0;
    }
    fn_8010FE08(lbl_8032BB58, (s8)arg0, (s8)arg1, 0x29);
    fn_80049C8C(temp, 1);
    fn_80044450(fn_80040844(), 1);
    fn_80016180();
    return 1;
}

s32 fn_8019FC08(void) {
    u8 fn_8001772C(void);
    M2C_UNK fn_8000CAA0(void *, s32);
    M2C_UNK fn_80013864(void);
    extern u8 lbl_80297010[];
    if (fn_8001772C() != 0) {
        fn_8000CAA0(lbl_80297010, fn_800C0658());
        fn_80013864();
    }
    return 1;
}

void fn_8019FC4C(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_8001772C();
    if (fn_8001772C() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_8019FC88(void) {
    M2C_UNK fn_80017774();
    fn_80017774();
    return 1;
}

s32 fn_8019FCAC(void) {
    M2C_UNK fn_8001779C();
    fn_8001779C();
    return 1;
}

s32 fn_8019FCD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_80017840(M2C_UNK, s32, f32, f32, f32);
    fn_80017840(1, arg0, (f32) arg1, (f32) arg2, (f32) arg3);
    return 1;
}

s32 fn_8019FE2C(void) {
    M2C_UNK fn_800C0658();
    M2C_UNK fn_800177E0();
    fn_800C0658();
    fn_800177E0();
    return 1;
}

void fn_8019FE54(s32 arg0)
{
    if (arg0 == 0) {
        lbl_8036728B = lbl_8036728B & 0xFFFFFFFD;
    }
    else
    {
        lbl_8036728B = 0;
        lbl_8036728B = lbl_8036728B | 0x2;
        lbl_8036728B = lbl_8036728B & 0xFFFFFFFB;
    }
}

void fn_8019FEB8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 r7;

    temp_r3 = *(s32 *)arg0;
    if (temp_r3 != 0) {
        // Copying 0x1EC bytes from arg0+0x158 to arg0+0x15C
        for (r7 = 0; r7 < 0x1EC; r7 += 4) {
            *(s32 *)((char *)arg0 + 0x15C + r7) = *(s32 *)((char *)arg0 + 0x158 + r7);
        }
    }
    return;
}

s32 fn_8019FF68(void) {
    extern u8 lbl_80367710;
    if (lbl_80367710 & 0x40) {
        return 1;
    }
    return 0;
}

s32 fn_8019FFBC(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_80018ADC(void);
    void fn_800193CC(void *, f32, f32);
    void fn_800187F0(void);
    void *p;
    f32 f0;
    f32 f1;

    p = fn_80018ADC();
    f0 = (f32)arg0;
    *(f32 *)((char *)p + 4) = f0;
    f1 = (f32)arg1;
    *(f32 *)((char *)p + 0x10) = f0;
    *(f32 *)((char *)p + 8) = f1;
    *(f32 *)((char *)p + 0x14) = f1;
    fn_800193CC(p, (f32)arg2, f0);
    fn_800187F0();
    return 1;
}

extern s32 lbl_8036AF6C;
extern u8 lbl_80367298[];
void fn_801A0100(s8 arg0, s8 arg1, s8 arg2) {
    lbl_80367298[0] = arg0;
    lbl_80367298[1] = arg1;
    lbl_80367298[2] = arg2;
    lbl_80367298[3] = lbl_8036AF6C;

    fn_80040844(arg2, arg1, arg0, lbl_80367298);
    fn_80045C68();
    fn_80013864();
}

int fn_801A016C(u8 arg0, u8 arg1, u8 arg2)
{
    extern u32 lbl_8036AF68;
    extern u8 lbl_8036729C[];

    u32 value;

    value = lbl_8036AF68;

    ((u8 *)&value)[0] = arg0;
    ((u8 *)&value)[1] = arg1;
    ((u8 *)&value)[2] = arg2;

    lbl_8036729C[0] = ((u8 *)&value)[0];
    lbl_8036729C[1] = ((u8 *)&value)[1];
    lbl_8036729C[2] = ((u8 *)&value)[2];
    lbl_8036729C[3] = ((u8 *)&value)[3];

    fn_80040844();
    fn_80045C68();
    fn_80013864();

    return 1;
}

s32 fn_801A01D8(s8 arg0) {
    M2C_UNK fn_80013864();
    M2C_UNK fn_80040844();
    M2C_UNK fn_80040DA4();
    extern s8 lbl_8036728A;
    lbl_8036728A = arg0;
    fn_80040844();
    fn_80040DA4();
    fn_80013864();
    return 1;
}

int fn_801A0208(
    int arg0,
    int arg1,
    int arg2,
    int arg3,
    int arg4,
    u8 arg5,
    u8 arg6,
    u8 arg7
)
{
    extern u32 lbl_8036AF64;

    u32 value;

    value = lbl_8036AF64;
    ((u8 *)&value)[0] = arg5;
    ((u8 *)&value)[1] = arg6;
    ((u8 *)&value)[2] = arg7;

    fn_80048A3C(&value);
    fn_80040844();
    fn_80045B9C();
    fn_80013864();

    return 1;
}

s32 fn_801A0258(void) {
    void fn_80048A70(void);
    void fn_8002297C(void *);
    void fn_80040844(void);
    void fn_80040DA4(void);
    void fn_80016180(void);
    void fn_80013864(void);
    extern u8 lbl_802CA518[];

    fn_80048A70();
    fn_8002297C(lbl_802CA518);
    fn_80040844();
    fn_80040DA4();
    fn_80016180();
    fn_80013864();
    return 1;
}

s32 fn_801A0298(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    s32 fn_80040844(void);
    void fn_8004496C(s32, u8);
    extern u16 lbl_80296F90[];
    extern u8 lbl_80330708[];
    extern s32 lbl_80367110;

    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        ((u8 *)p)[0x30] = 1;
        ((u8 *)p)[0x31] = 0;
        ((u8 *)p)[0x32] = 0;
        ((u16 *)((u8 *)p + 0x34))[0] = 0;
        ((u8 *)p)[0x33] = lbl_80330708[0xA0];
        ((u8 *)p)[0x36] = 1;
        ((u32 *)((u8 *)p + 0x3C))[0] = 1;
        ((u8 *)p)[0x37] = 0;
        ((u8 *)p)[0x38] = 0;
        v = p;
    }
    if (arg0 != 0) {
        ((u8 *)v)[0x36] = 1;
        lbl_80367110 &= 0xFFFFEFFF;
        fn_8004496C(fn_80040844(), 1);
    } else {
        ((u8 *)v)[0x36] = 0;
        lbl_80367110 |= 0x1000;
        fn_8004496C(fn_80040844(), 0);
    }
    return 1;
}

s32 fn_801A0374(void) {
    extern u8 lbl_80330708[];
    void fn_8014C7C0(void *, s32);
    void fn_8014C798(void *);
    void fn_8014CBD8(void *, f32, f32);
    void fn_800187F0(void);

    fn_8014C7C0(lbl_80330708, 0);
    fn_8014C798(lbl_80330708);
    fn_8014CBD8(lbl_80330708, (f32) (s8) lbl_80330708[0x52], (f32) (s8) lbl_80330708[0x53]);
    fn_800187F0();
    return 1;
}

extern u16 lbl_80330708[];
s32 fn_801A0400(s32 arg0) {
    void fn_8014C7C0(void *, s32);
    void fn_80013864(void);
    extern u16 lbl_80330708[];
    fn_8014C7C0(lbl_80330708, arg0);
    fn_80013864();
    return 1;
}

void fn_801A06CC(void) {
    M2C_UNK fn_8003BE50();
    fn_8003BE50();
}

s32 fn_801A0B20(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp_r3;
    s32 var_r3;

    if (arg3 & 0x10000)
    {
        temp_r3 = arg1 - arg0;
        if ((temp_r3 + arg2) >= 0)
            var_r3 = 1;
        else
            var_r3 = 0;
    }
    else
    {
        var_r3 = 0;
    }
    return var_r3;
}

void fn_801A0C3C(void *arg0, u32 arg1) {
    M2C_UNK fn_8000C60C();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) == arg1) {
        fn_8000C60C();
    }
}

void fn_801A0C68(void *arg0) {
    u8 fn_8004BF80(s32);
    if (fn_8004BF80(M2C_FIELD(arg0, s32 *, 0x54)) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_801A0CA8(void *arg0) {
    u8 fn_8004FA88(s32, s32);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x54);
    fn_8004FC70(temp_r31, M2C_FIELD(arg0, s32 *, 0x60));
    if (fn_8004FA88(temp_r31, M2C_FIELD(arg0, s32 *, 0x60)) != 0) {
        fn_80184C7C(temp_r31, M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x64), arg0);
        M2C_FIELD(arg0, s32 *, 0x60) = -1;
        fn_8000C188(arg0);
    }
}

void fn_801A0D20(void *arg0) {
    void fn_8004BF24(void *);
    void fn_8004FE98(void *, s32);
    void *temp_r31;
    s32 temp;

    temp = *(s32 *)((u8 *)arg0 + 0x60);
    temp_r31 = *(void **)((u8 *)arg0 + 0x54);
    if (temp >= 0) {
        fn_8004FE98(temp_r31, temp);
        fn_8004BF24(temp_r31);
    }
}

s32 fn_801A0E84(u8 arg0, u8 arg1, u8 arg2) {
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_80296FA8[36];
    void *fn_8000C0C0(u8 *);
    void *fn_8000CAF0(u8 *, s32);
    s32 fn_8003816C(void *, u8, u8);
    s32 fn_80050C90(void *);
    s32 fn_80107D64(void *, u8 *, u8 *, s32, s32, s32);
    s32 fn_8002297C(u8 *);
    u32 fn_80127C48(void);
    s32 fn_800C0658(void);

    u8 *var_r31;
    u8 sp8;
    u8 sp9;

    if (arg0 != 0) {
        var_r31 = lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = 0;
    }

    if (var_r31 == 0 || *(u32 *)(var_r31 + 0x188) == 0) {
        return 0;
    }

    sp8 = arg1;
    sp9 = arg2;

    fn_80107D64(var_r31, &sp8, &sp9, 0, 0, 0);
    fn_8003816C(var_r31, sp8, sp9);
    fn_8002297C(lbl_802CA518);

    fn_80050C90(var_r31);

    if (fn_8000C0C0(lbl_80296FA8) == 0) {
        u32 var_r3 = fn_80127C48();
        if (var_r3 == 0) {
            var_r3 = fn_800C0658();
        }
        fn_8000CAF0(lbl_80296FA8, var_r3);
    }

    return 1;
}

s32 fn_801A0F68(u8 arg0, u8 arg1, u8 arg2) {
    extern u8 lbl_802B14E4[];
    extern u8 lbl_80296F90[];
    extern u8 lbl_80296FA8[];
    extern u8 lbl_802CA518[];
    extern s32 lbl_80367110;
    void *fn_8000C0C0(u8 *);
    void *fn_8000CAF0(u8 *, s32);
    void fn_8002297C(u8 *);
    void fn_8003816C(void *, u8, u8);
    void fn_8004FE98(void *, s32);
    void fn_80050C90(void *);
    s32 fn_800C0658(void);
    s32 fn_80107D64(void *, u8 *, u8 *, s32, s32, s32);
    u32 fn_80127C48(void);
    void fn_80184264(void *, s32, u16, void *);
    void fn_80184750(void *, s32, s32, s32);

    u8 *var_r31;
    u16 var_r30;
    void *temp;
    u8 sp9;
    u8 sp8;
    s32 temp_r28;
    u16 temp_r0;
    void *var_r6;
    u32 var_r3;
    u8 b;
    s32 sw;

    if (arg0 != 0) {
        var_r31 = lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if (var_r31 == NULL || *(u32 *)(var_r31 + 0x188) == 0) {
        return 0;
    }

    var_r30 = 0x80;
    temp = fn_8000C0C0(lbl_80296F90);
    if (temp != NULL) {
        b = ((u8 *)temp)[0x30];
    } else {
        b = 1;
    }
    if (b != 0) {
        var_r30 |= 0x40;
    }

    temp = fn_8000C0C0(lbl_80296F90);
    if (temp != NULL) {
        b = ((u8 *)temp)[0x31];
    } else {
        b = 0;
    }
    if (b != 0) {
        var_r30 |= 0x200;
    }

    temp = fn_8000C0C0(lbl_80296F90);
    if (temp != NULL) {
        sw = ((u8 *)temp)[0x32];
    } else {
        sw = 0;
    }
    switch (sw) {
    case 2:
        var_r30 |= 0x20;
        break;
    case 1:
        var_r30 |= 0x10;
        break;
    }

    temp = fn_8000C0C0(lbl_80296F90);
    if (temp != NULL) {
        temp_r0 = *(u16 *)((u8 *)temp + 0x34);
    } else {
        temp_r0 = 0;
    }
    temp_r0 = var_r30 | temp_r0;

    sp9 = arg1;
    sp8 = arg2;
    temp_r28 = fn_80107D64(var_r31, &sp9, &sp8, 1, 0, 0);
    if (temp_r28 != 0) {
        fn_8003816C(var_r31, sp9, sp8);
        if (lbl_80367110 & 1) {
            fn_8004FE98(var_r31, 0);
            fn_80184750(var_r31, temp_r0 & 0xF, 0, 0);
            fn_80050C90(var_r31);
        } else {
            temp = fn_8000C0C0(lbl_80296FA8);
            if (temp != NULL) {
                var_r6 = temp;
            } else {
                var_r3 = fn_80127C48();
                if (var_r3 == 0) {
                    var_r3 = fn_800C0658();
                }
                var_r6 = fn_8000CAF0(lbl_80296FA8, var_r3);
            }
            fn_80184264(var_r31, temp_r28, temp_r0, var_r6);
        }
    }
    fn_8002297C(lbl_802CA518);
    return 1;
}

s32 fn_801A1198(s32 arg0, u8* arg1) {
    return 0;
}

s32 fn_801A147C(void *arg0, s32 *arg1, s32 *arg2) {
    void fn_80106F68(void *, u8 *, u8 *);
    u8 sp9;
    u8 sp8;

    fn_80106F68(arg0, &sp9, &sp8);
    *arg1 = (s8)sp9;
    *arg2 = (s8)sp8;
    return 0;
}

s32 fn_801A1604(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C0658(void);
    void fn_80105F0C(s32, void *, s32);
    u32 fn_80127C48(void);
    u8 fn_80183974(void);
    void fn_80013864(void);
    extern u8 lbl_80296FA8[];
    extern u8 lbl_80296FCC[];
    void *var_r4;
    u32 var_r3;
    void *temp;

    temp = fn_8000C0C0(lbl_80296FA8);
    if (temp != NULL) {
        var_r4 = temp;
    } else {
        var_r3 = fn_80127C48();
        if (var_r3 == 0U) {
            var_r3 = fn_800C0658();
        }
        var_r4 = fn_8000CAF0(lbl_80296FA8, var_r3);
    }
    fn_80105F0C(arg0, var_r4, 3);
    temp = fn_8000C0C0(lbl_80296FA8);
    if ((((u32)(-(s32)temp | (s32)temp) >> 31) != 0) || (fn_80183974() != 0)) {
        fn_80013864();
        fn_8000CAA0(lbl_80296FCC, fn_800C0658());
    }
    return 1;
}

s32 fn_801A16BC(void *arg0) {
    fn_80105F0C(arg0, 0, 2);
    return 1;
}

s32 fn_801A16E8(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C0658(void);
    void fn_80105F0C(s32, void *, s32);
    u32 fn_80127C48(void);
    u8 fn_80183974(void);
    void fn_80013864(void);
    extern u8 lbl_80296FA8[];
    extern u8 lbl_80296FCC[];
    void *var_r4;
    u32 var_r3;
    void *temp;

    temp = fn_8000C0C0(lbl_80296FA8);
    if (temp != NULL) {
        var_r4 = temp;
    } else {
        var_r3 = fn_80127C48();
        if (var_r3 == 0U) {
            var_r3 = fn_800C0658();
        }
        var_r4 = fn_8000CAF0(lbl_80296FA8, var_r3);
    }
    fn_80105F0C(arg0, var_r4, 2);
    temp = fn_8000C0C0(lbl_80296FA8);
    if ((((u32)(-(s32)temp | (s32)temp) >> 31) != 0) || (fn_80183974() != 0)) {
        fn_80013864();
        fn_8000CAA0(lbl_80296FCC, fn_800C0658());
    }
    return 1;
}

s32 fn_801A17A0(void *arg0) {
    fn_80105F0C(arg0, 0, 1);
    return 1;
}

s32 fn_801A17CC(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C0658(void);
    void fn_80105F0C(s32, void *, s32);
    u32 fn_80127C48(void);
    u8 fn_80183974(void);
    void fn_80013864(void);
    extern u8 lbl_80296FA8[];
    extern u8 lbl_80296FCC[];
    void *var_r4;
    u32 var_r3;
    void *temp;

    temp = fn_8000C0C0(lbl_80296FA8);
    if (temp != NULL) {
        var_r4 = temp;
    } else {
        var_r3 = fn_80127C48();
        if (var_r3 == 0U) {
            var_r3 = fn_800C0658();
        }
        var_r4 = fn_8000CAF0(lbl_80296FA8, var_r3);
    }
    fn_80105F0C(arg0, var_r4, 1);
    temp = fn_8000C0C0(lbl_80296FA8);
    if ((((u32)(-(s32)temp | (s32)temp) >> 31) != 0) || (fn_80183974() != 0)) {
        fn_80013864();
        fn_8000CAA0(lbl_80296FCC, fn_800C0658());
    }
    return 1;
}

s32 fn_801A1934(void *arg0) {
    fn_80105F0C(arg0, 0, 0);
    return 1;
}

s32 fn_801A1960(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    void fn_80105F0C(s32, void *, s32);
    u32 fn_80127C48(void);
    s32 fn_800C0658(void);
    extern u8 lbl_80296FA8[];
    void *var_r4;
    u32 var_r3;
    void *temp;

    temp = fn_8000C0C0(lbl_80296FA8);
    if (temp != NULL) {
        var_r4 = temp;
    } else {
        var_r3 = fn_80127C48();
        if (var_r3 == 0U) {
            var_r3 = fn_800C0658();
        }
        var_r4 = fn_8000CAF0(lbl_80296FA8, var_r3);
    }
    fn_80105F0C(arg0, var_r4, 0);
    return 1;
}

s32 fn_801A19D8(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C0658(void);
    void fn_80105F0C(s32, void *, s32);
    u32 fn_80127C48(void);
    u8 fn_80183974(void);
    void fn_80013864(void);
    extern u8 lbl_80296FA8[];
    extern u8 lbl_80296FCC[];
    void *var_r4;
    u32 var_r3;
    void *temp;

    temp = fn_8000C0C0(lbl_80296FA8);
    if (temp != NULL) {
        var_r4 = temp;
    } else {
        var_r3 = fn_80127C48();
        if (var_r3 == 0U) {
            var_r3 = fn_800C0658();
        }
        var_r4 = fn_8000CAF0(lbl_80296FA8, var_r3);
    }
    fn_80105F0C(arg0, var_r4, 0);
    temp = fn_8000C0C0(lbl_80296FA8);
    if ((((u32)(-(s32)temp | (s32)temp) >> 31) != 0) || (fn_80183974() != 0)) {
        fn_80013864();
        fn_8000CAA0(lbl_80296FCC, fn_800C0658());
    }
    return 1;
}

extern s32 lbl_801B1C80;
extern s32 lbl_801B1C84;
extern s32 lbl_801B1C88;
extern s32 lbl_801B1C8C;
void fn_801A1A90(void) {
    lbl_801B1C80 = 0x34;
    lbl_801B1C84 = 0xFFFFFFFF;
    lbl_801B1C88 = 0xB66D;
    lbl_801B1C8C = 0xA491;
}

s32 fn_801A1B58(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658(void);
    void fn_8004DC54(s32);
    extern u16 lbl_80296F90[];
    extern u16 lbl_80330708[];

    void *p = fn_8000C0C0(lbl_80296F90);
    if (p == NULL) {
        s32 x = fn_800C0658();
        p = fn_8000CAF0(lbl_80296F90, x);
        ((u8 *)p)[0x30] = 1;
        ((u8 *)p)[0x31] = 0;
        ((u8 *)p)[0x32] = 0;
        *(u16 *)((u8 *)p + 0x34) = 0;
        ((u8 *)p)[0x33] = ((u8 *)lbl_80330708)[0xA0];
        ((u8 *)p)[0x36] = 1;
        *(s32 *)((u8 *)p + 0x3C) = 1;
        ((u8 *)p)[0x37] = 0;
        ((u8 *)p)[0x38] = 0;
    }
    fn_8004DC54(arg0 != 0);
    return 1;
}

u16 fn_801A1CC8(void) {
    void *fn_8000C0C0(void *);
    extern u8 lbl_80296F90[];
    void *p;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        return *(u16 *)((u8 *)p + 0x34);
    }
    return 0;
}

s32 fn_801A1D04(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658(void);
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
        v = p;
    }
    if (arg0 != 0) {
        M2C_FIELD(v, u16 *, 0x34) = (u16)(M2C_FIELD(v, u16 *, 0x34) | 0x100);
    } else {
        M2C_FIELD(v, u16 *, 0x34) = (u16)(M2C_FIELD(v, u16 *, 0x34) & 0xFFFFFEFF);
    }
    return 1;
}

s32 fn_801A1E6C(s8 arg0, s8 arg1) {
    void *fn_8000C0C0(void *, void *);
    f32 fn_80023430(void *, void *, f32, f32);
    extern u16 lbl_80296F90[];
    extern u8 lbl_802CA518[];
    extern f64 lbl_8036AF78;
    
    void *temp_r3;
    s32 var_r31;
    s32 temp_r4;
    s32 temp_r0;

    temp_r3 = fn_8000C0C0(&lbl_80296F90, &lbl_80296F90);
    if (temp_r3 != NULL) {
        var_r31 = *(s32 *)((char *)temp_r3 + 0x3C);
    } else {
        var_r31 = 1;
    }
    
    temp_r4 = (s32)arg0;
    temp_r0 = (s32)arg1;
    
    return (s32)(fn_80023430(&lbl_802CA518, &lbl_802CA518, (f32)temp_r4, (f32)temp_r0) * (f32)var_r31);
}

s32 fn_801A2004(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
        v = p;
    }
    M2C_FIELD(v, s32 *, 0x3C) = arg0;
    return 1;
}

s32 fn_801A212C(void) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        v = p;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
    }
    M2C_FIELD(v, s8 *, 0x32) = 2;
    return 1;
}

s32 fn_801A21C0(void) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658(void);
    extern u16 lbl_80296F90[];
    extern u16 lbl_80330708[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        *(s8 *)((u8 *)p + 0x30) = 1;
        v = p;
        *(s8 *)((u8 *)p + 0x31) = 0;
        *(s8 *)((u8 *)p + 0x32) = 0;
        *(s16 *)((u8 *)p + 0x34) = 0;
        *(u8 *)((u8 *)p + 0x33) = ((u8 *)lbl_80330708)[0xA0];
        *(s8 *)((u8 *)p + 0x36) = 1;
        *(s32 *)((u8 *)p + 0x3C) = 1;
        *(s8 *)((u8 *)p + 0x37) = 0;
        *(s8 *)((u8 *)p + 0x38) = 0;
    }
    *(s8 *)((u8 *)v + 0x32) = 1;
    return 1;
}

s32 fn_801A2254(s32 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
        v = p;
    }
    if (arg0 != 0) {
        M2C_FIELD(v, s8 *, 0x31) = 1;
    } else {
        M2C_FIELD(v, s8 *, 0x31) = 0;
    }
    return 1;
}

u8 fn_801A2300(void) {
    void *fn_8000C0C0(void *);
    extern u8 lbl_80296F90[];
    void *p;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        return M2C_FIELD(p, u8 *, 0x30);
    }
    return 1;
}

s32 fn_801A233C(void) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        v = p;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
    }
    M2C_FIELD(v, s8 *, 0x30) = 1;
    return 1;
}

s32 fn_801A23D0(void) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658();
    extern u16 lbl_80296F90[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        v = p;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
    }
    M2C_FIELD(v, s8 *, 0x30) = 0;
    return 1;
}

s32 fn_801A2464(void) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C0658(void);
    u8 fn_80183974(void);
    void fn_80013864(void);
    extern u8 lbl_80296FA8[];
    extern u8 lbl_80296FCC[];
    void *temp;

    temp = fn_8000C0C0(lbl_80296FA8);
    if ((((u32)(-(s32)temp | (s32)temp) >> 31) != 0) || (fn_80183974() != 0)) {
        fn_80013864();
        fn_8000CAA0(lbl_80296FCC, fn_800C0658());
    }
    return 1;
}

void fn_801A24C4(void *arg0) {
    s32 fn_8000C0C0(void *);
    u8 fn_80183974(void);
    void fn_8000C188(void *);
    extern u8 lbl_80296FA8[];
    s32 temp_r3;

    temp_r3 = fn_8000C0C0(lbl_80296FA8);
    if (((u32)(-temp_r3 | temp_r3) >> 31) == 0 && fn_80183974() == 0) {
        fn_8000C188(arg0);
    }
}

void fn_801A2570(void) {
    M2C_UNK fn_800C1060();
    extern u8 lbl_80367289;
    u8 temp_r0;
    u8 var_r5;

    var_r5 = 1;
    temp_r0 = lbl_80367289 - 1;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        fn_800C1060();
    }
}

void fn_801A25C4(void) {
    M2C_UNK fn_80016180();
    M2C_UNK fn_8005376C();
    M2C_UNK fn_800C1BDC();
    extern s32 lbl_80367110;
    if (lbl_80367110 & 1) {
        fn_8000C60C();
        fn_800C1BDC();
        fn_80016180();
        fn_8005376C();
    }
}

s32 fn_801A25FC(s8 arg0) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C0658(void);
    extern u16 lbl_80296F90[];
    extern u16 lbl_80330708[];
    void *p;
    void *v;

    p = fn_8000C0C0(lbl_80296F90);
    if (p != NULL) {
        v = p;
    } else {
        p = fn_8000CAF0(lbl_80296F90, fn_800C0658());
        M2C_FIELD(p, s8 *, 0x30) = 1;
        M2C_FIELD(p, s8 *, 0x31) = 0;
        M2C_FIELD(p, s8 *, 0x32) = 0;
        M2C_FIELD(p, s16 *, 0x34) = 0;
        M2C_FIELD(p, u8 *, 0x33) = ((u8 *)lbl_80330708)[0xA0];
        M2C_FIELD(p, s8 *, 0x36) = 1;
        M2C_FIELD(p, s32 *, 0x3C) = 1;
        M2C_FIELD(p, s8 *, 0x37) = 0;
        M2C_FIELD(p, s8 *, 0x38) = 0;
        v = p;
    }
    M2C_FIELD(v, s8 *, 0x38) = arg0;
    return 1;
}

u8 fn_801A2690(void) {
    void *fn_8000C0C0(u16 *);
    extern u8 lbl_80296F90[];
    void *temp_r3;
    temp_r3 = fn_8000C0C0((u16 *)lbl_80296F90);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return *(u8 *)((uintptr_t)temp_r3 + 0x38);
}

void fn_801A26CC(void *arg0) {
    extern s32 lbl_80367110;
    u8 fn_80040824(void *);
    s32 fn_80040844(void);
    void fn_8004496C(s32, u8);
    void fn_8004DC54(s32);

    ((u8 *)lbl_80330708)[0xA0] = ((u8 *)arg0)[0x33];
    if (((u8 *)arg0)[0x36] == 0) {
        lbl_80367110 &= 0xFFFFEFFF;
        if ((u8)fn_80040824(arg0) != 0) {
            fn_8004496C(fn_80040844(), 1);
            fn_8004DC54(1);
        }
    }
}

void fn_801A2730(s32 arg0) {
    extern u32 fn_801A27F8;
    s32 temp_r3 = 4;
    s32 temp_r4 = 2;
    s32 temp_r5 = (s32)&fn_801A27F8;
    s32 temp_r6 = arg0;
    fn_80067708(temp_r3, temp_r4, (u32 *)temp_r5, temp_r6);
}

void fn_801A2764(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_801A27A0(void *arg0) {
    s32 fn_800C45B8(void *, void *, M2C_UNK);
    void *fn_80222420(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern u16 lbl_8027AD98[];
    *(s32 *)((u8 *)arg0 + 0x30) = fn_800C45B8(fn_80222420(0x260, 0x1C0, 4, 0, 0), (u8 *)lbl_8027AD98 + 0x5C5, 0);
}

void fn_801A27F8(void *arg0) {
    M2C_UNK fn_80066D00(M2C_UNK, void *, f32, f32, f32);
    M2C_UNK fn_80067490(M2C_UNK);
    M2C_UNK fn_80067984(M2C_UNK);
    M2C_UNK fn_80067EDC(M2C_UNK);
    M2C_UNK fn_8021F4E4(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8021FBB8();
    M2C_UNK fn_8021FBF0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802201A8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80220428(M2C_UNK);
    M2C_UNK fn_802209FC();
    M2C_UNK fn_80220DEC(M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8022124C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802212FC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80221BA8(u32, M2C_UNK);
    M2C_UNK fn_80222334(M2C_UNK);
    M2C_UNK fn_80222370(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80222644(M2C_UNK *, u32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802228D8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32);
    M2C_UNK fn_80222C50(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_80222EB4();
    M2C_UNK fn_80223A5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AA0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AE4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223B4C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223C78(M2C_UNK, s32 *);
    M2C_UNK fn_80223CDC(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802240C8(M2C_UNK);
    M2C_UNK fn_802245D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80224684(M2C_UNK, M2C_UNK, M2C_UNK);
    extern s32 lbl_8036AF60;
    M2C_UNK spC[8];
    s32 sp8;

    fn_80067EDC(0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        fn_8022124C(0, 0, 0x260, 0x1C0);
        fn_802212FC(0x260, 0x1C0, 4, 0);
        fn_80221BA8(M2C_FIELD(arg0, u32 *, 0x30), 0);
        fn_802209FC();
        fn_80222EB4();
        fn_80222644(spC, M2C_FIELD(arg0, u32 *, 0x30), 0x260, 0x1C0, 4, 0, 0, 0);
        fn_802228D8(spC, 1, 1, 0, 0, 0, 0.0f, 0.0f, 0.0f);
        fn_80222334(1);
        fn_80222370(4, 0, 1, 1, 0, 0, 2);
        fn_80220428(1);
        fn_80222C50(spC, 0);
        fn_80223F2C(0, 0, 0, 4);
        fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
        fn_802240C8(1);
        sp8 = lbl_8036AF60;
        fn_80223C78(3, &sp8);
        fn_80223CDC(0, 0xF);
        fn_80223A5C(0, 0xF, 0xE, 8, 0xF);
        fn_80223AE4(0, 0, 0, 0, 1, 0);
        fn_80223AA0(0, 7, 7, 7, 6);
        fn_80223B4C(0, 0, 0, 0, 0, 0);
        fn_802245D8(0, 0, 0, 0);
        fn_80224684(0, 3, 0);
        fn_8021FBB8();
        fn_8021F4E4(9, 1);
        fn_8021F4E4(0xD, 1);
        fn_8021FBF0(0, 9, 1, 4, 0);
        fn_8021FBF0(0, 0xD, 1, 4, 0);
        fn_80067490(0);
        fn_80220DEC(0x80, 0, 4);
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 608.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 1.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 608.0f;
        *(f32 *)0xCC008000 = 448.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 1.0f;
        *(f32 *)0xCC008000 = 1.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 448.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 0.0f;
        *(f32 *)0xCC008000 = 1.0f;
        fn_80066D00(-1, (void *)0xCC010000, 1.0f, 608.0f, 0.0f);
        fn_80067984(0);
    }
}

#include "common.h"

extern s32 lbl_8036AF6C;
extern u8 lbl_80367298[];
#include "common.h"
extern u16 lbl_80291AC8[];
#include "global.h"

extern u32 lbl_80295A00[];
extern u32 lbl_80295A20[];
extern f32 lbl_8036ACE0;
extern f32 lbl_8036ACEC;
extern f32 lbl_8036AD04;
extern f32 lbl_8036ACF0;

void *fn_8000A388(u32*, u32*, void*);
void *fn_8000CA64(u32*, s32);
u8 fn_8004C0F0(s32);
void *fn_8004FE90(s32, u8);
void *fn_8004FE98(s32, s32);
void *fn_800506E0(s32, s32, void*);
void *fn_800508C4(s32);
f32 fn_80059F64(f32, f32, f32, f32);
void *fn_8005FC74(void*, void*, s32);
void *fn_8005FEE8(void*, f32);
s32 fn_80060440(s32);
void *fn_800639B4();
extern u16 lbl_803120A0[];
extern s32 lbl_803674F8;
extern u16 lbl_802968E8;
extern u16 lbl_802797C0[6];
extern u16 lbl_8036AE4C;
extern f32 lbl_8036AE50;
#include "common.h"

extern u16 lbl_80296FA8;
#include "global.h"
#include "unit.h"
extern u16 lbl_80295D1C[];
#include "common.h"
#include "m2c.h"

extern u16 lbl_802923E0[];
extern u16 lbl_80296018[];
extern u16 lbl_80330708[0x2B4];
#include "common.h"
#include "structs.h"
#include "ef.h"

struct UnkStruct_802EF4C8 {
    s32 unk0;
    s32 unk4;
    u8 unk8;
    u8 unk9;
    s8 unkA;
    u8 pad[0x18 - 0xB];
};

extern struct UnkStruct_802EF4C8 lbl_802EF4C8;
extern u16 lbl_80330EAC[];
extern u16 lbl_80367110;
extern u16 lbl_80330E90[4];
extern u16 lbl_80296F90[];
#include "global.h"
#include "structs.h"

extern u16 __files[160]; // 320 bytes, 160 elements
extern u8 lbl_80279DF0[29]; // 29 bytes

void *fn_800C42D8(s32);
void fn_80232058(void*, void*, void*);
void fn_8022CF78(void);
void fn_8001C690(void*, s32);

typedef struct {
    void *unk0;
    void *unk4;
} unk_struct_80193CFC;
extern u8 lbl_80295AE8[0x80];
#include "global.h"
extern u16 lbl_80295A78[36];
extern f32 lbl_8036ACE0;
extern f32 lbl_8036ACD8;
extern f32 lbl_8036ACE8;
#include "common.h"
#include "global.h"
#pragma optimization_level 4
#pragma inline auto

extern u16 lbl_802EF4E0;
extern f32 lbl_8036AF00;
extern f32 lbl_8036AF20;
#include "common.h"
#include "global.h"
extern u32 lbl_8028FDB0;
extern u32 lbl_80292208;
extern u32 lbl_80292230;
extern u32 lbl_80293B74;
extern u32 lbl_80293BB8;
extern f32 lbl_8036AE20;
#include "global.h"
#include "common.h"

extern u32* D_801B5548;
extern s32* D_801B5580;
extern s32 D_801B56A4;
extern void* D_801B574C;
extern void* D_801B5750;
extern void* D_801B5754;
extern void* D_801B5758;
extern s32 D_801BF920;
extern s32* D_800D8C74;

// This is a stub for the function, but let's see what we can extract.
extern s32 D_801B56AC;
void fn_80198910(void) {
    u32* sp18;
    s32 i;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32* temp_r6;
    s32 temp_r7;
    
    D_801B5548 = (u32*)0x801B5548;
    sp18 = (u32*)D_801B5580;
    D_801BF920 = 7;
    for (i = 0; i < 8; i++) {
        temp_r6 = (s32*)sp18;
        D_801B56A4 = D_801B56A4 + 1;
        if ((temp_r6[0] & 0x8000) == 0) {
            temp_r7 = temp_r6[1];
            if (temp_r7 != -1) {
                if ((s32)(u32)*D_800D8C74 == temp_r7) {
                    D_801B56A4 = D_801B56A4 - 1;
                }
            }
        }
        sp18 += 1;
    }

    if (D_801B56A4 != 0) {
        temp_r3 = (s32)*(u32*)D_801B574C;
        temp_r5 = ((temp_r3 * 0x10000) >> 0x10);
        D_801B56AC = 0;
        if (temp_r5 == 0) {
            D_801B56AC = 1;
        } else {
            temp_r4 = (s32)*(u32*)D_801B5750;
            if ((temp_r4 * temp_r3) > 0) { 
                if ((temp_r4 * temp_r3) != 0) {
                    D_801B56AC = 1;
                }
            }
        }
    } else {
        D_801B56AC = 0;
    }

    return;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_80198CA4(void *arg0) {
    void fn_800608AC(void *);
    void *fn_800E56BC(void *);
    void *fn_80060690(void *);
    void fn_800656C8(void *, void *);
    void fn_80202024(void *, void *, void *);
    void fn_80201FF0(void *, void *);
    s32 fn_802342B8(char *, char *);
    s32 fn_8006135C(void *, char *);
    void fn_8006D378(void *);
    void fn_800E4A78(void *, void *);
    extern u8 lbl_8027A858[];

    f32 sp68[3][4];
    f32 sp38[3][4];
    f32 sp8[3][4];
    void *obj;
    s32 off;
    s32 n_outer;
    s32 n_inner;
    s32 i;
    u8 *ent_o;
    u8 *ent_i;
    void *self;
    s32 found;
    s32 id_o;
    s32 id_i;
    void *e0;
    s32 j;
    char *name;
    void *dst;

    self = arg0;
    fn_800608AC(*(void **)((u8 *)self + 0xE0));
    obj = fn_800E56BC(*(void **)((u8 *)self + 0xEC));
    {
        void *t5 = *(void **)((u8 *)obj + 0x40);
        void *t4 = *(void **)((u8 *)*(void **)((u8 *)self + 0xE0) + 0x40);
        n_outer = *(s32 *)((u8 *)t5 + 8);
        n_inner = *(s32 *)((u8 *)t4 + 8);
    }
    fn_800656C8(
        (u8 *)*(void **)((u8 *)fn_80060690(obj) + 0xC) + *(s32 *)((u8 *)self + 0xF0) * 0xF4,
        sp68);
    fn_80202024((u8 *)obj + 0x10, sp68, sp68);
    fn_80201FF0(sp68, (u8 *)*(void **)((u8 *)self + 0xE0) + 0x10);
    fn_80201FF0(sp68, (u8 *)*(void **)((u8 *)self + 0xE4) + 0x10);

    i = 0;
    off = 0;
    ent_o = *(u8 **)((u8 *)*(void **)((u8 *)obj + 0x40) + 0xC);
    while (i < n_outer) {
        name = *(char **)(ent_o + 0xF0);
        if (!name) {
            id_o = -1;
        } else if ((s32)(u8)name[0] != 0x42) {
            id_o = -1;
        } else if ((s32)(u8)name[1] != 0x57) {
            id_o = -1;
        } else if ((s32)(u8)name[2] != 0x30) {
            id_o = -1;
        } else if ((s32)(u8)name[3] != 0x30) {
            id_o = -1;
        } else {
            id_o = (s8)name[4] - 0x30;
        }
        if (id_o >= 0) {
            e0 = *(void **)((u8 *)self + 0xE0);
            j = 0;
            ent_i = *(u8 **)((u8 *)*(void **)((u8 *)e0 + 0x40) + 0xC);
            for (; j < n_inner; j += 1, ent_i += 0xF4) {
                name = *(char **)(ent_i + 0xF0);
                if (!name) {
                    id_i = -1;
                } else if ((s32)(u8)name[0] != 0x42) {
                    id_i = -1;
                } else if ((s32)(u8)name[1] != 0x57) {
                    id_i = -1;
                } else if ((s32)(u8)name[2] != 0x30) {
                    id_i = -1;
                } else if ((s32)(u8)name[3] != 0x30) {
                    id_i = -1;
                } else {
                    id_i = (s8)name[4] - 0x30;
                }
                if (id_i >= 0 && id_i == id_o) {
                    fn_80202024(
                        (u8 *)*(void **)((u8 *)obj + 0x60) + off,
                        ent_i + 0x10,
                        (u8 *)*(void **)((u8 *)e0 + 0x64) + j * 0x30);
                    if (fn_802342B8(*(char **)(ent_o + 0xF0), (char *)(lbl_8027A858 + 0x6A)) == 0) {
                        found = fn_8006135C(*(void **)((u8 *)self + 0xE0), (char *)(lbl_8027A858 + 0x38));
                        if (found >= 0) {
                            fn_80202024((u8 *)*(void **)((u8 *)obj + 0x60) + off, ent_i + 0x10, sp38);
                            dst = (u8 *)*(void **)((u8 *)*(void **)((u8 *)self + 0xE0) + 0x60) + found * 0x30;
                            fn_80202024(sp38, dst, dst);
                        }
                    }
                    if (fn_802342B8(*(char **)(ent_o + 0xF0), (char *)(lbl_8027A858 + 0x70)) == 0) {
                        found = fn_8006135C(*(void **)((u8 *)self + 0xE0), (char *)(lbl_8027A858 + 0x4C));
                        if (found >= 0) {
                            fn_80202024((u8 *)*(void **)((u8 *)obj + 0x60) + off, ent_i + 0x10, sp8);
                            dst = (u8 *)*(void **)((u8 *)*(void **)((u8 *)self + 0xE0) + 0x60) + found * 0x30;
                            fn_80202024(sp8, dst, dst);
                        }
                    }
                    break;
                }
            }
        }
        off += 0x30;
        i += 1;
        ent_o += 0xF4;
    }

    fn_8006D378(*(void **)((u8 *)self + 0xE0));
    fn_800E4A78(*(void **)((u8 *)self + 0xE4), *(void **)((u8 *)self + 0xE0));
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

void fn_80198F8C(s32 arg0, s32 arg1) {
    fn_800C9B6C(arg0, arg1 + 0x138);
}

s32 fn_80199028(void *arg0) {
    s32 fn_801518D0(void *, s32);
    void *p = *(void **)((u8 *)arg0 + 0x144);
    if (p != NULL && (u8)fn_801518D0(p, 0x37) != 0) {
        return 1;
    }
    return 0;
}

#include "common.h"
#include "global.h"

extern f32 lbl_8036ADF0;
extern f32 lbl_8036ADF4;
extern u8 lbl_80279C40[];

