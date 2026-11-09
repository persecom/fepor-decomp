/* Functions from 0x80074370 to 0x8007C534, found by decomp-toolkit. */
#include "common.h"
#include "structs.h"
extern u8 D_802EF4C8[24];
extern u8 lbl_8036723A;
s32 fn_80024398();

void fn_80074370(void *arg0) {
    extern s32 lbl_80367468;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) lbl_80367468;
}

extern u8 lbl_80330D68[];
s32 fn_8007437C(void) {
    u8 fn_80166D8C(void *);

    return fn_80166D8C(lbl_80330D68) ? 0x40 : 0x10;
}

u32 fn_800745E8(u8 arg2) {
    if (arg2 == 4)
        return 1;
    else
        return 0;
}

s32 fn_80074758(s32 arg0, s32 arg1, void *arg2) {
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80311FF4[];
    if (*((u8 *) arg2 + 0x39) != 0) {
        return 0x10;
    }
    lbl_802EF4C8[0xA] = *((u8 *) arg2 + 0x3A);
    fn_80024398(lbl_80311FF4, arg1, 0);
    return 4;
}

s32 fn_8007485C(void) {
    return 0;
}

s32 fn_80074864(void) {
    return 0;
}

void fn_800748E8(void) {
 extern u8 lbl_802EF4C8, lbl_8026C0B8[], lbl_80312010[]; extern u32 lbl_80367468; extern void *lbl_8036746C;
 void *fn_8001CB64(void **); void **fn_80037BD0(s32,s32); s32 fn_8001D2C8(void); void fn_80231D94(void *,void *,s32,s32,void *); void fn_8000D864(s32,void *); void fn_8000E0E4(void *);
 s32 index=(s8)*((u8*)&lbl_802EF4C8+10); u8 v; void **p; void *o;
 if(index==4)p=(void**)&lbl_8036746C; else{o=fn_8001CB64((void**)&lbl_8036746C);p=fn_80037BD0(lbl_80367468,(((*(u32*)((u8*)o+4)&5) || (*(u32*)o&0))?0:4)+index);}
 o=*p;v=o?*((u8*)o+21):0;fn_80231D94(lbl_80312010,lbl_8026C0B8+0x122,v+0x60,fn_8001D2C8(),lbl_80312010);fn_8000D864(0,lbl_80312010);fn_8000E0E4(lbl_8026C0B8+0x12b);
}

void fn_800749D4(void) {
    extern u16 lbl_8026C0B8[];
    extern u16 lbl_80330708[];
    
    s32 var = fn_8014D8DC(&lbl_80330708);
    if (var != 0) {
        fn_8000E0E4((u8 *)&lbl_8026C0B8 + 0x134);
        return;
    }
    fn_8000E0E4((u8 *)&lbl_8026C0B8 + 0x141);
}

s32 fn_80074A28(void) {
    return 9;
}

s32 fn_80074A30(void) {
    return 0x18;
}

s32 fn_80074A38(void) {
    M2C_UNK fn_80029C08(s32);
    u8 fn_80105BC0(s32, M2C_UNK);
    extern s32 lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    if (fn_80105BC0(lbl_802EF4C8 + 0x1BC, 0x18) == 0) {
        return 3;
    }
    fn_80029C08(lbl_802EF4C8);
    return 2 & ~((s32) (-lbl_802EF4E0 | lbl_802EF4E0) >> 0x1F);
}

#pragma cplusplus on
extern "C" void fn_80074AA8(void *arg0) {
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
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
    };
    void fn_80019DF0(void);
    void fn_8010586C(void);
    ((Obj *)arg0)->v19();
    fn_80019DF0();
    fn_8010586C();
}
#pragma cplusplus reset
s32 fn_80074ADC(void) {
    return 0;
}

void fn_80074AE4(void **arg0, void *arg2) {
    extern f32 lbl_80369394;
    extern f32 lbl_803693A8;
    u32 temp_r31;

    temp_r31 = (u32)(M2C_FIELD(arg2, u8 *, 0x39) == 0);
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    fn_8001003C(M2C_FIELD(arg2, s16 *, 0x30), M2C_FIELD(arg2, s16 *, 0x32), temp_r31, 1, 0, M2C_FIELD(*arg0, s32 (**)(void **), 0xC)(arg0), lbl_80369394, lbl_803693A8);
}

s32 fn_80074BA4(void **arg0) {
    M2C_UNK fn_800299B8(s32);
    u8 fn_80105BC0(s32, s32);
    extern s32 lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    s32 temp_r31;

    temp_r31 = lbl_802EF4C8 + 0x1BC;
    if (fn_80105BC0(temp_r31, M2C_FIELD(*arg0, s32 (**)(s32), 0x54)(lbl_802EF4C8)) == 0) {
        return 3;
    }
    fn_800299B8(lbl_802EF4C8);
    return 2 & ~((s32) (-lbl_802EF4E0 | lbl_802EF4E0) >> 0x1F);
}

void fn_80074C30(void *arg0) {
    extern s32 lbl_802EF4C8[];
    *(s32 *)((u8 *)arg0 + 0xC) = lbl_802EF4C8[1];
}

void *fn_80074DDC(void) {
    extern u8 lbl_8026C0B8[];
    return &lbl_8026C0B8[0x191];
}

extern s32 *fn_80037BD0(s32, u8);
extern u8 fn_8001C0C8(void);
s32 fn_80074DEC(u8 arg2) {
    if ((u32)*fn_80037BD0(((s32 *)D_802EF4C8)[1], arg2) == 0U) {
        return 3;
    }
    return 2 & -((fn_8001C0C8() == 0) & 1);
}

#pragma cplusplus on
extern "C" void fn_80074E4C(void *arg0, s32 arg1, void *arg2) {
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
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
    };
    s32 fn_80037BD0(s32, u8);
    void fn_8008D510(s32, bool, s16, s16);
    extern s32 lbl_802EF4C8[];
    ((Obj *)arg0)->v17();
    fn_8008D510(fn_80037BD0(lbl_802EF4C8[1], *(u8 *)((u8 *)arg2 + 0x3A)), *(u8 *)((u8 *)arg2 + 0x39) == 0, *(s16 *)((u8 *)arg2 + 0x30), *(s16 *)((u8 *)arg2 + 0x32));
}
#pragma cplusplus reset
void fn_80074EDC(s32 arg0, void *arg1) {
    extern s32 lbl_802EF4C8[];
    
    fn_80037BD0(lbl_802EF4C8[1], *(u8*)((char*)arg1 + 0x3A));
}

void fn_80074F0C(void *arg0) {
    extern s32 lbl_802EF4C8[];
    *(s32 *)((u8 *)arg0 + 0xC) = lbl_802EF4C8[1];
}

void fn_800750D8(s32 arg0, void *arg1) {
    extern s32 lbl_802EF4C8[];
    
    fn_80037BD0(lbl_802EF4C8[1], *(u8*)((char*)arg1 + 0x3A));
}

s32 fn_80075178(void *arg1, void *arg2) {
    s32 fn_8000E0E4(void *);
    s32 fn_80037BD0(s32, u8);
    u8 fn_8003DBA8(s32, s32, M2C_UNK *);
    M2C_UNK fn_80166AE8(s32, s16, s32, void *);
    extern M2C_UNK lbl_8026C0B8;
    extern M2C_UNK lbl_802EF4C8;
    s16 temp_r28;
    s16 temp_r29;
    s32 temp_r30;
    u8 temp_r3;
    void *temp_r27;
    void *var_r27;

    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) != 0) {
        var_r27 = NULL;
        temp_r3 = fn_8003DBA8(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), fn_80037BD0(M2C_FIELD(&lbl_802EF4C8, s32 *, 4), M2C_FIELD(arg2, u8 *, 0x3A)), &lbl_802EF4C8);
        switch ((s32) temp_r3) {                    /* irregular */
        case 1:
            var_r27 = &lbl_8026C0B8 + 0x1B3;
            break;
        case 2:
            var_r27 = &lbl_8026C0B8 + 0x1BA;
            break;
        case 3:
            var_r27 = &lbl_8026C0B8 + 0x1C1;
            break;
        }
        temp_r29 = M2C_FIELD(arg2, s16 *, 0x32);
        temp_r28 = M2C_FIELD(arg2, s16 *, 0x30);
        temp_r27 = M2C_FIELD(arg1, void **, 0x3C);
        temp_r30 = fn_8000E0E4(var_r27);
        fn_80166AE8(M2C_FIELD(M2C_FIELD(temp_r27, void **, 4), s16 (**)(void *), 0x5C)(temp_r27) + temp_r28, temp_r29, temp_r30, arg1);
        return 0;
    }
    M2C_FIELD(&lbl_802EF4C8, u8 *, 0xA) = (u8) M2C_FIELD(arg2, u8 *, 0x3A);
    return 5;
}

#pragma cplusplus on
extern "C" void fn_80075290(void *arg0, s32 arg1, void *arg2) {
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
        virtual void v13() = 0;
        virtual void v14() = 0;
        virtual void v15() = 0;
        virtual void v16() = 0;
        virtual void v17() = 0;
    };
    s32 fn_80037BD0(s32, u8);
    void fn_8008D510(s32, bool, s16, s16);
    extern s32 lbl_802EF4C8[];
    ((Obj *)arg0)->v17();
    fn_8008D510(fn_80037BD0(lbl_802EF4C8[1], *(u8 *)((u8 *)arg2 + 0x3A)), *(u8 *)((u8 *)arg2 + 0x39) == 0, *(s16 *)((u8 *)arg2 + 0x30), *(s16 *)((u8 *)arg2 + 0x32));
}
#pragma cplusplus reset

void fn_800752F4(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1C8);
}

void fn_80075320(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1D0);
}

s32 fn_8007534C(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0;
    return 9;
}

void fn_80075364(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1D6);
}

void fn_80075390(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1DC);
}

s32 fn_800753BC(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0;
    return 9;
}

void fn_800753D4(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1E3);
}

void fn_80075400(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1e9);
}

s32 fn_8007542C(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0;
    return 9;
}

void fn_80075444(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1EF);
}

void fn_80075470(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1e9);
}

s32 fn_8007549C(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0;
    return 9;
}

void fn_800754B4(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1f5);
}

s32 fn_800754E0(void) {
    return 1;
}

s32 fn_800754E8(void) {
    return 9;
}

void fn_800754F0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1f5);
}

s32 fn_8007551C(void) {
    return 1;
}

s32 fn_80075524(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0;
    return 9;
}

void fn_8007553C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x212 / sizeof(u16)]);
}

s32 fn_80075568(void) {
    return 0;
}

s32 fn_80075570(void) {
    return 6;
}

void fn_80075578(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x21A);
}

s32 fn_800755A4(void) {
    M2C_UNK fn_800919D8();
    fn_800919D8();
    return 9;
}

void fn_800755C8(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x1f5);
}

s32 fn_800755F4(void) {
    return 1;
}

s32 fn_800755FC(void) {
    extern u16 lbl_8026C0B8[];
    fn_801475FC(&lbl_8026C0B8[0x7F], 0x64);
    return 1;
}

void fn_80075630(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x212 / sizeof(u16)]);
}

s32 fn_8007565C(void) {
    return 0;
}

#pragma cplusplus on
extern "C" s32 fn_80075784(void *arg0, void *arg1, s32 arg2) {
    void **fn_80037BD0(void *, u8);
    u8 fn_800939FC(void *);
    extern void *lbl_802EF4C8[];
    void *temp_r4;
    u8 val;

    temp_r4 = *fn_80037BD0(lbl_802EF4C8[0], arg2);
    if (temp_r4 == NULL) {
        return 3;
    }
    val = (temp_r4 != NULL) ? *(u8 *)((char *)temp_r4 + 0x12) : 0xC;
    if (val == 7) {
        return 2;
    }
    return (fn_800939FC(lbl_802EF4C8[0]) == 0) ? 2 : 0;
}
#pragma cplusplus off
void fn_80075878(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x220 / sizeof(u16)]);
}

void fn_800758A4(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x22A / sizeof(u16)]);
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_80166AE8(s32, s32, s32, void *);
#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" s32 fn_80075930(void *arg0, void *arg1, void *arg2) {
    struct Obj {
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
        virtual s16 v21() = 0;
        virtual s16 v22() = 0;
    };
    extern u8 lbl_8026C0B8[];
    extern u8 lbl_80311F80[];
    s32 y;
    s32 a;
    s32 str;
    s16 x;
    Obj *obj;

    if (*(u8 *)((char *)arg2 + 0x39) != 0) {
        obj = *(Obj **)((char *)arg1 + 0x3C);
        y = *(s16 *)((char *)arg2 + 0x32);
        x = *(s16 *)((char *)arg2 + 0x30);
        str = fn_8000E0E4(lbl_8026C0B8 + 0x235);
        a = obj->v22();
        y -= 0x3C;
        fn_80166AE8(obj->v21() + x, a + y, str, arg1);
        return 0;
    }
    fn_80024398(lbl_80311F80, arg1, 0);
    return 4;
}
#pragma use_lmw_stmw reset
#pragma cplusplus off

s32 fn_800759E8(void) {
    u64 *fn_8001CB64(void *);
    void *fn_800285C0(void *);
    void fn_8002C194(void *, u8);
    extern u8 lbl_802EF4C8[];
    extern s32 lbl_802EF4E0[];

    if ((s8)lbl_802EF4C8[0x12] != 0) {
        return 3;
    }
    if (lbl_802EF4C8[0x16] & 2) {
        return 3;
    }
    fn_8002C194(*(void **)lbl_802EF4C8, lbl_802EF4C8[0xA]);
    if (lbl_802EF4E0[0] == 0) {
        return 3;
    }
    if (*fn_8001CB64(fn_800285C0(lbl_802EF4C8)) & 0x200ULL) {
        return 2;
    }
    return 0;
}

s32 fn_80075A9C(void *arg1, void *arg2) {
    s32 fn_8000E0E4(void *);
    M2C_UNK fn_80166AE8(s32, s32, s32, void *);
    extern M2C_UNK lbl_8026C0B8;
    extern M2C_UNK lbl_802EF4C8;
    s16 temp_r28;
    s16 temp_r30;
    s16 temp_r31;
    s32 temp_r29;
    void *temp_r27;

    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) != 0) {
        temp_r27 = M2C_FIELD(arg1, void **, 0x3C);
        temp_r31 = M2C_FIELD(arg2, s16 *, 0x32);
        temp_r28 = M2C_FIELD(arg2, s16 *, 0x30);
        temp_r29 = fn_8000E0E4(&lbl_8026C0B8 + 0x23C);
        temp_r30 = M2C_FIELD(M2C_FIELD(temp_r27, void **, 4), s16 (**)(void *), 0x60)(temp_r27);
        fn_80166AE8(M2C_FIELD(M2C_FIELD(temp_r27, void **, 4), s16 (**)(void *), 0x5C)(temp_r27) + temp_r28, temp_r30 + (temp_r31 - 0x3C), temp_r29, arg1);
        return 0;
    }
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0x28;
    return 6;
}

void fn_80075B54(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x244 / sizeof(u16)]);
}

void fn_80075B80(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x24f);
}

void fn_80075BAC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x25B);
}

void fn_80075BD8(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x267);
}

void fn_80075DAC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x28a);
}

void fn_80075DD8(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x295);
}

s32 fn_80075E04(void) {
    u64 *fn_8001CB64(void *);
    void *fn_800285C0(void *);
    u8 fn_80091EF0(void *, void *);
    extern void *lbl_802EF4C8[];
    void *item;
    void *temp_r31;
    void *temp_r30;

    item = fn_800285C0(lbl_802EF4C8);
    temp_r31 = *(void **)item;
    temp_r30 = lbl_802EF4C8[0];
    if ((*(u8 *)((char *)item + 5) >> 7) & 1) {
        return 3;
    }
    if (*fn_8001CB64(item) & 4ULL) {
        return 3;
    }
    return fn_80091EF0(temp_r30, temp_r31) ? 0 : 3;
}

s32 fn_80075EB4(void *arg1, void *arg2) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, void *);
    void *fn_8001CB64();
    M2C_UNK fn_80023FF4(void *);
    M2C_UNK fn_800285C0(M2C_UNK *);
    s8 fn_80037E00(void *);
    M2C_UNK fn_80094CDC(void *, s8);
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_8026C0B8;
    extern M2C_UNK lbl_802872B0;
    extern M2C_UNK lbl_802EF4C8;
    u8 temp_r31;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r3;

    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) != 0) {
        return 0x10;
    }
    fn_801475FC(&lbl_8026C0B8 + 0x29E, 0x64);
    fn_80094CDC(M2C_FIELD(&lbl_802EF4C8, void **, 0), (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xA));
    if ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xA) < 4) {
        temp_r30 = M2C_FIELD(arg1, void **, 0x18);
        M2C_FIELD(temp_r30, s8 *, 0x62) = fn_80037E00(M2C_FIELD(&lbl_802EF4C8, void **, 0));
    }
    if ((M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), s32 *, 0x1A0) & 0x800000) || (fn_800285C0(&lbl_802EF4C8), temp_r3 = fn_8001CB64(), (((((M2C_FIELD(temp_r3, s32 *, 4) & 0) ^ 0) | ((M2C_FIELD(temp_r3, s32 *, 0) & 1) ^ 0)) == 0) == 0))) {
        fn_8000CAA0(&lbl_802872B0, M2C_FIELD(arg1, void **, 0x18));
    }
    temp_r30_2 = M2C_FIELD(arg1, void **, 0x18);
    temp_r31 = M2C_FIELD(temp_r30_2, u8 *, 0x62);
    fn_80023FF4(temp_r30_2);
    M2C_FIELD(temp_r30_2, u8 *, 0x62) = temp_r31;
    return 5;
}

void fn_80075FB8(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x2B0 / sizeof(u16)]);
}

void fn_80075FE4(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x2B9);
}

s32 fn_80076010(void) {
    void *fn_800285C0(void *);
    u8 fn_80091F70(void *, void *);
    u8 fn_80093218(void *, void *);
    extern void *lbl_802EF4C8[];
    void *item;
    void *temp_r31;
    void *temp_r30;
    u8 var_r0;

    item = fn_800285C0(lbl_802EF4C8);
    temp_r30 = *(void **)item;
    temp_r31 = lbl_802EF4C8[0];
    if (temp_r30 != NULL) {
        var_r0 = *(u8 *)((char *)temp_r30 + 0x12);
    } else {
        var_r0 = 0xC;
    }
    if (var_r0 == 7) {
        return 3;
    }
    if (fn_80091F70(temp_r31, temp_r30) != 0) {
        return 0;
    }
    return fn_80093218(temp_r31, temp_r30) ? 2 : 3;
}

s32 fn_800760B8(void *arg2) {
    extern u16 lbl_802EF4C8;
    if ((u8) *(u8*)((u8*)arg2 + 0x39) != 0) {
        return 0x10;
    }
    *(u16*)((u8*)&lbl_802EF4C8 + 0x0) = 0x4;
    return 0x6;
}

s32 fn_80076148(void *arg2) {
    extern u16 lbl_802EF4C8;
    if (*(u8 *) ((char *) arg2 + 0x39) == 2) {
        return 0x10;
    }
    *(u8 *) ((char *) &lbl_802EF4C8 + 0xA) = *(u8 *) ((char *) arg2 + 0x3A);
    return 5;
}

#pragma cplusplus on
extern "C" void fn_80009B8C(s32);
extern "C" void fn_80009C0C(f32);
extern "C" void fn_8000A248(void);
extern "C" void fn_8000A258(void);
extern "C" s32 fn_800102BC(s32, f32);
extern "C" f32 fn_80023EE0(void *);
extern "C" void fn_80070F54(void *, void *, f32, f32);
extern "C" void fn_80071410(void *, void *, f32, f32);
extern "C" void fn_8007149C(void *, void *, f32, f32, s32, s32);
extern "C" void fn_80071740(void *, f32, f32, s32);
extern "C" void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
extern "C" void fn_80076174(void *arg0, void *arg1) {
    struct Obj {
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
        virtual s16 v18() = 0;
    };
    extern u8 lbl_80330EAC[];
    f32 t;

    t = fn_80023EE0(arg1);
    *(s16 *)((u8 *)arg1 + 0x30) = 0;
    *(s16 *)((u8 *)arg1 + 0x32) = 0;
    fn_8000A258();
    fn_80009B8C((s32)(255.0f * t));
    fn_8000A248();
    fn_80071740(arg0, 16.0f * t + 16.0f, 35.0f, *(s32 *)((u8 *)arg0 + 0xC));
    fn_8007149C(arg0, arg1, 16.0f * t + 16.0f, 136.0f, *(s32 *)((u8 *)arg0 + 0xC), 1);
    if (*(s16 *)((u8 *)arg1 + 0x3A) >= 5) {
        fn_8000A258();
        fn_80009C0C(-0.1f);
        fn_8000A248();
        fn_8008AB7C(((Obj *)arg0)->v18() / 2 + 0x28, *(s16 *)((u8 *)arg1 + 0x3A) + fn_800102BC(-1, 1.0f) / 2,
                    (s32)(0.9f * ((Obj *)arg0)->v18()), 0x18, 0x19, 0x4B, 1);
        fn_8000A258();
        fn_80009C0C(0.1f);
        fn_8000A248();
    }
    fn_80071410(arg0, lbl_80330EAC, 312.0f, 282.0f);
    fn_80070F54(arg0, lbl_80330EAC, 500.0f, 212.0f);
}
#pragma cplusplus off
s32 fn_8007633C(void) {
    extern u16 *lbl_802EF4C8;
    extern u8 lbl_8032BB58[516];
    u16 temp_0;
    u16 temp_1;
    
    temp_0 = lbl_802EF4C8[0x19E / sizeof(u16)];
    temp_1 = lbl_802EF4C8[0x19F / sizeof(u16)];
    fn_8010FF24(lbl_8032BB58, temp_0, temp_1, 7);
    return 0;
}

s32 fn_80076380(s32 arg0, s32 arg1, void *arg2) {
    if (*(u8 *)((u8 *)arg2 + 0x39) == 2) {
        return 0x10;
    }
    return 5;
}

void fn_80076398(void) {
    extern void *lbl_802EF4C8;
    extern u16 lbl_8032BB58;
    void *ptr = lbl_802EF4C8;
    u8 a = *(u8*)((uintptr_t)ptr + 0x19F);
    u8 b = *(u8*)((uintptr_t)ptr + 0x19E);
    fn_8010FF24(&lbl_8032BB58, a, b, 7);
    fn_8010FA2C();
}

s32 fn_800763DC(void){void*fn_80019E24(u8);s32 fn_8001DDBC(void);void fn_8001EF80(void*,u8,u8,u8);void fn_8002011C(void*,u8,u8,u8,s32);void fn_8004A224(void);void fn_80070EE0(void);void*fn_8010FF24(void*,u8,u8,s32);extern u8 lbl_802CA518[],lbl_802EF4C8[],lbl_8032BB58[];u8*p;u8 a,b,c;fn_80070EE0();p=fn_8010FF24(lbl_8032BB58,lbl_802EF4C8[13],lbl_802EF4C8[14],7);a=*((u8*)fn_80019E24(p[4])+29);b=p[1];c=p[0];fn_8002011C(lbl_802CA518,c,b,a,fn_8001DDBC());fn_8001EF80(lbl_802CA518,p[0],p[1],p[3]);fn_8004A224();return 0;}

s32 fn_80076494(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

s32 fn_800764B8(u8 arg2)
{
    u32* fn_80037BBC(s32, u8);
    u8 fn_8009339C(s32);
    void fn_8002BEFC(s32, u32);
    void fn_8002C034(s32, u32);
    extern u8 lbl_802EF4C8[];
    extern s32 lbl_802EF4E0[];
    
    u32* entry = fn_80037BBC(*(s32*)lbl_802EF4C8, arg2);
    if (!*entry)
        return 3;
        
    if (!fn_8009339C(*(s32*)lbl_802EF4C8))
        return 2;
        
    if (lbl_802EF4C8[8] == 0x27)
        fn_8002BEFC(*(s32*)lbl_802EF4C8, *entry);
    else
        fn_8002C034(*(s32*)lbl_802EF4C8, *entry);

    if (lbl_802EF4E0[0] != 0)
        return 1;
    else
        return 2;
}

s32 fn_80076574(void *arg2) {
    M2C_UNK fn_800951D0(s32, u8);
    extern s32 lbl_802EF4C8;
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 2) {
        return 0x10;
    }
    fn_800951D0(lbl_802EF4C8, M2C_FIELD(arg2, u8 *, 0x3A));
    return 5;
}

s32 fn_800766B0(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

void fn_80076740(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x2C3);
}

void fn_8007676C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x2C9);
}

s32 fn_800767FC(void) {
    extern u16 lbl_802EF4C8;
    *(u8 *)&lbl_802EF4C8 = 0x2E;
    return 5;
}

void fn_80076814(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x2D0 / sizeof(u16)]);
}

void fn_80076840(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x2DC / sizeof(u16)]);
}

void fn_80076910(void *arg2) {
    extern u16 lbl_802EF4C8[];
    if ((u8) M2C_FIELD(arg2, u8 *, 0x39) == 0) {
        M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0x1D;
    }
    return;
}

s32 fn_8007693C(void) {
    M2C_UNK fn_8004A224();
    M2C_UNK fn_800AA80C(s32);
    extern s32 lbl_802EF4C8[];
    fn_800AA80C(lbl_802EF4C8[0]);
    fn_8004A224();
    return 0;
}

s32 fn_80076970(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

void fn_80076994(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x2EF);
}

void fn_800769C0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x2F5);
}

s32 fn_800769EC(void) {
    u8 fn_80105BC0(void *, s32);
    void fn_80029E4C(void);
    extern u8 lbl_802EF4C8[];
    extern s32 lbl_802EF4E0[];

    if ((s8)lbl_802EF4C8[0x12] != 0) {
        return 3;
    }
    if (fn_80105BC0(*(u8 **)lbl_802EF4C8 + 0x1BC, 0x46) == 0) {
        return 3;
    }
    if (*(u32 *)(*(u8 **)lbl_802EF4C8 + 0x1A0) & 0x1000) {
        return 2;
    }
    fn_80029E4C();
    return lbl_802EF4E0[0] == 0 ? 3 : 0;
}

s32 fn_80076A88(void*a,void*b,void*c){s32 fn_8000E0E4(void*);void fn_80166AE8(s32,s32,s32,void*);extern u8 lbl_8026C0B8[];extern u8 lbl_802EF4C8[];void*obj=*(void**)((u8*)b+0x3c);s32 str; s32 x,y; if(*(u8*)((u8*)c+0x39)){str=fn_8000E0E4(lbl_8026C0B8+0x2fc);y=(*(s16(**)(void*))(*(u32*)((u8*)obj+4)+0x60))(obj);x=(*(s16(**)(void*))(*(u32*)((u8*)obj+4)+0x5c))(obj);fn_80166AE8(x+*(s16*)((u8*)c+0x30),y+*(s16*)((u8*)c+0x32),str,b);return 0;}lbl_802EF4C8[8]=0x1e;return 5;}

void fn_80076B3C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x305);
}

void fn_80076B68(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x309);
}

s32 fn_80076B94(void){
    u8 fn_80105BC0(void*,s32);
    void*fn_80019E04(void*,void*);
    void fn_8002AD04(s32,void*);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_8026C0B8[];
    extern s32 lbl_802EF4E0[];
    s32 obj;
    if((u8)lbl_802EF4C8[0x12] == 0)
        return 3;
    obj=*(s32*)lbl_802EF4C8;
    if(!fn_80105BC0((u8*)obj+0x1bc,0x4a))
        return 3;
    fn_8002AD04(obj,fn_80019E04((u8*)lbl_8026C0B8+0x30e,lbl_802EF4C8));
    if(lbl_802EF4E0[0] == 0)
        return 0;
    return 3;
}

s32 fn_80076C38(void) {
    extern u16 lbl_802EF4C8;
    ((u8 *)&lbl_802EF4C8)[8] = 0x21;
    return 5;
}

void fn_80076C50(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x317);
}

void fn_80076C7C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x31B);
}

s32 fn_80076CA8(void){
    s32 fn_80019E04(void*,void*);
    void fn_8002AB9C(s32,s32);
    u8 fn_80105BC0(void*,s32);
    extern u8 lbl_8026C0B8[];
    extern u8 lbl_802EF4C8[];
    extern s32 lbl_802EF4E0[];
    void *obj;
    
    if ((s8)lbl_802EF4C8[0x12] != 0) {
        return 3;
    }
    
    obj = *(void**)lbl_802EF4C8;
    
    if (!fn_80105BC0((u8*)obj + 0x1bc, 0x49)) {
        return 3;
    }
    
    fn_8002AB9C((s32)obj, (s32)fn_80019E04(lbl_8026C0B8 + 0x320, lbl_802EF4C8));
    
    if (lbl_802EF4E0[0] != 0) {
        return 0;
    }
    
    return 3;
}

s32 fn_80076D4C(void) {
    extern u16 lbl_802EF4C8;
    *(u8 *)((u32)&lbl_802EF4C8 + 8) = 0x22;
    return 5;
}

void fn_80076D64(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x329);
}

void fn_80076D90(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x333);
}

s32 fn_80076DBC(void) {
    u8 fn_80105BC0(void *, s32);
    void fn_80029C08(void *);
    extern u8 lbl_802EF4C8[];
    extern s32 lbl_802EF4E0[];

    if ((s8)lbl_802EF4C8[0x12] != 0) {
        return 3;
    }
    if (fn_80105BC0(*(u8 **)lbl_802EF4C8 + 0x1BC, 0x18) != 0) {
        fn_80029C08(*(u8 **)lbl_802EF4C8);
        if (lbl_802EF4E0[0] != 0) {
            return 0;
        }
    }
    return 3;
}

s32 fn_80076E9C(void) {
    extern u16 lbl_802EF4C8;
    *(u8 *)((u32)&lbl_802EF4C8 + 8) = 6;
    return 5;
}

void fn_80076F28(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x33e);
}

void fn_80076F54(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x349);
}

void fn_80077008(void) {
    M2C_UNK fn_80007668(s32 *);
    s32 *fn_8018D900(M2C_UNK);
    s32 sp8;

    sp8 = *fn_8018D900(6);
    fn_80007668(&sp8);
}

s32 fn_8007703C(s32 arg1) {
    M2C_UNK fn_801832F8(s32);
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0x33;
    fn_801832F8(arg1);
    return 4;
}

void fn_80077074(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x353);
}

void fn_800770A0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x35d);
}

s32 fn_800770CC(void) {
    extern u32 lbl_802EF4C8;
    extern u8 lbl_802CA264;
    extern u32 lbl_80330708;
    extern u8 fn_80105BC0(u32, u8);
    extern s32 fn_80015680(u8 *);
    extern u8 fn_8014D8BC(u32 *);

    if (fn_80105BC0((u32)(lbl_802EF4C8 + 0x1BC), 0) == 0) {
        return 3;
    }
    if (fn_80015680(&lbl_802CA264) <= 1) {
        return 3;
    }
    return (fn_8014D8BC(&lbl_80330708) == 0) ? 3 : 0;
}

void fn_800771BC(void) {
    extern u16 lbl_8026C0B8[];
    M2C_UNK fn_8000E0E4(void *);
    fn_8000E0E4(&lbl_8026C0B8[0x366 / sizeof(u16)]);
}

void fn_800771E8(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x36F);
}

s32 fn_80077214(void) {
    u8 fn_80105BC0(void *, s32);
    s32 fn_800AA288(s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];

    if (fn_80105BC0(*(u8 **)lbl_802EF4C8 + 0x1BC, 0x48) == 0) {
        return 3;
    }
    if (lbl_80330708[0x50] >= 2) {
        return 3;
    }
    if ((s8)lbl_802EF4C8[0x12] != 0) {
        return 3;
    }
    return fn_800AA288(0) == 0 ? 3 : 0;
}

void fn_800772EC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x377);
}

void fn_80077318(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x381);
}

s32 fn_800773C8(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x11;
    return 5;
}

void fn_800773E0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x38c);
}

void fn_8007740C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x394);
}

s32 fn_8007749C(s32 arg0, s32 arg1) {
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80311FA4[];
    lbl_802EF4C8[8] = 0xE;
    fn_80024398(lbl_80311FA4, arg1, 0);
    return 4;
}

void fn_800774DC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x39d);
}

void fn_80077508(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x3a6);
}

void fn_80077534(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x3ae);
}

s32 fn_80077560(void) {
    return 0xB;
}

void fn_80077568(s8 *arg0) {
    *arg0 = 2;
}

void fn_80077574(void *arg0, u32 arg1, void *arg2) {
    s32 r31;
    s32 temp_r3;
    s32 temp_r4;
    
    temp_r3 = (s32)arg1 & 0xFFFF;
    r31 = *(s32*)((char*)arg0 + 0x14);
    
    if (temp_r3 == 0) {
        *(s32*)((char*)arg0 + 0x48) = *(s32*)arg2;
    }
    
    if ((r31 & 0x06000000) != 0) {
        temp_r4 = *(s32*)((char*)arg0 + 0x10);
        if (temp_r4 == 0x03) {
            // Return early
            return;
        }
    }
    
    if ((r31 & 0x01000000) != 0) {
        temp_r4 = *(s32*)((char*)arg0 + 0x8);
        if (temp_r4 == 0x02) {
            // Return early
            return;
        }
    }
    
   fn_80019D60(arg0, temp_r3, arg2);
}

void fn_80077694(s8 *arg0) {
    *arg0 = 1;
}

s32 fn_800777D4(void) {
    return 0xC;
}

void fn_800777DC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x3b6);
}

void fn_80077808(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026C0B8;
    fn_8000E0E4(&lbl_8026C0B8 + 0x3BE);
}

void fn_80077834(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x3C7);
}

void fn_80077860(void) {
    extern u8 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x3CF]);
}

void fn_8007788C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x3d9);
}

s32 fn_800778B8(void) {
    u8 fn_800BE968(M2C_UNK, u8, u8);
    extern M2C_UNK lbl_802EF4C8;
    if ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0x12) != 0) {
        return 3;
    }
    return 3 & -((fn_800BE968(9, M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), u8 *, 0x19E), M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), u8 *, 0x19F)) == 0) & 1);
}

s32 fn_8007791C(void) {
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 9;
    return 5;
}

s32 fn_80077934(void) {
    return 0;
}

void fn_8007793C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x3e4);
}

void fn_80077968(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x3EE);
}

s32 fn_80077994(void) {
    M2C_UNK fn_8002B2E8();
    extern M2C_UNK lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    if (M2C_FIELD(&lbl_802EF4C8, u8 *, 0x16) & 4) {
        return 3;
    }
    if ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0x12) != 0) {
        return 3;
    }
    if (M2C_FIELD(M2C_FIELD(&lbl_802EF4C8, void **, 0), s32 *, 0x1A0) & 2) {
        return 3;
    }
    fn_8002B2E8();
    return 3 & ~((s32) (-lbl_802EF4E0 | lbl_802EF4E0) >> 0x1F);
}

s32 fn_80077A18(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x1C;
    return 5;
}

s32 fn_80077A30(void) {
    return 0;
}

void fn_80077A38(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x3F6);
}

void fn_80077A64(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x400);
}

s32 fn_80077B24(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x1B;
    return 5;
}

void *fn_80077B3C(void) {
    extern u16 lbl_8026C0B8[];
    return (void*)((uintptr_t)&lbl_8026C0B8 + 0x408);
}

s32 fn_80077B4C(void) {
    return 0;
}

void fn_80077B54(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x410 / sizeof(u16)]);
}

void fn_80077B80(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x418 / sizeof(u16)]);
}

s32 fn_80077BAC(void){
    u8 fn_8001C914(s32,u32);
    u32* fn_80037BBC(s32,s32);
    u8 fn_8009326C(s32);
    extern u8 lbl_802EF4C8[];
    s32 obj;
    s32 i;
    s32 ok;
    u32* entry;
    
    obj = *(s32*)lbl_802EF4C8;
    if ((s8)lbl_802EF4C8[0x12] != 0)
        return 3;
    
    i = 0;
    do {
        entry = fn_80037BBC(obj, i);
        if (*entry != 0) {
            ok = fn_8009326C(obj);
            if (ok && fn_8001C914(*(s32*)lbl_802EF4C8, *entry))
                return 0;
        }
        i++;
    } while (i < 4);
    
    return 3;
}

s32 fn_80077C64(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x10;
    return 5;
}

void *fn_80077C7C(void) {
    extern u16 lbl_8026C0B8[];
    return (void*)((uintptr_t)&lbl_8026C0B8 + 0x421);
}

s32 fn_80077C8C(void) {
    return 0;
}

void fn_80077C94(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x42d);
}

void fn_80077CC0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x439);
}

s32 fn_80077D70(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x1A;
    return 5;
}

void *fn_80077D88(void) {
    extern u8 lbl_8026C0B8[];
    return &lbl_8026C0B8[0x442];
}

s32 fn_80077D98(void) {
    return 0;
}

void fn_80077DA0(void) {
    extern u16 lbl_802EF4C8[12];
    extern u8 lbl_8026C0B8[];
    
    if (fn_80105BC0((s32*)(lbl_802EF4C8 + 0x1BC), 0x16) != 0) {
        fn_8000E0E4(&lbl_8026C0B8[0x44D]);
        return;
    }
    fn_8000E0E4(&lbl_8026C0B8[0x459]);
}

void fn_80077E00(void) {
    u8 fn_80105BC0(s32, s32);
    void fn_8000E0E4(void *);
    extern u32 lbl_802EF4C8;
    extern u8 lbl_8026C0B8[];
    
    s32 r3_val = *(u32*)((u8*)&lbl_802EF4C8 + 0x1BC);
    if (fn_80105BC0(r3_val, 0x16) != 0) {
        fn_8000E0E4((void*)((u8*)&lbl_8026C0B8 + 0x464));
        return;
    }
    fn_8000E0E4((void*)((u8*)&lbl_8026C0B8 + 0x46E));
}

s32 fn_80077ED0(void) {
    extern u16 lbl_802EF4C8;
    lbl_802EF4C8 = 0x19;
    return 5;
}

void *fn_80077EE8(void) {
    extern u16 lbl_8026C0B8[];
    return (void*)((uintptr_t)&lbl_8026C0B8 + 0x478);
}

s32 fn_80077EF8(void) {
    return 0;
}

void fn_80077F2C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4(&lbl_8026C0B8[0x490 / sizeof(u16)]);
}

s32 fn_80077FE0(void) {
    extern u16 lbl_802EF4C8;
    lbl_802EF4C8 = 0x14;
    return 5;
}

void *fn_80077FF8(void) {
    extern u16 lbl_8026C0B8[];
    return (void*)((uintptr_t)&lbl_8026C0B8 + 0x498);
}

void fn_80078008(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x4A3);
}

void fn_80078034(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x4AF);
}

s32 fn_800780E8(void) {
    extern u16 lbl_802EF4C8;
    *(u8 *)((u8 *)&lbl_802EF4C8 + 8) = 0x11;
    return 5;
}

void fn_80078100(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x4b7);
}

void fn_8007812C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u16*)((u8*)lbl_8026C0B8 + 0x4BE));
}

s32 fn_80078158(void) {
    extern u8 lbl_802EF4C8[], lbl_8032BB58[], lbl_802EF4E0[];
    u8 fn_80105BC0(void *, s32); void *fn_8010FF24(void *, s32, s32, s32); void fn_8002BD44(void *, void *);
    void *obj; void *entry;
    if (*(s8 *)(lbl_802EF4C8 + 0x12)) return 3;
    obj = *(void **)lbl_802EF4C8;
    if (!fn_80105BC0((u8 *)obj + 0x1BC, 0x4F)) return 3;
    entry = fn_8010FF24(lbl_8032BB58, *(u8 *)((u8 *)obj + 0x19E), *(u8 *)((u8 *)obj + 0x19F), 7);
    if (!entry) return 3;
    fn_8002BD44(*(void **)lbl_802EF4C8, entry);
    if (*(s32 *)lbl_802EF4E0 == 0) return 3;
    if (*(u8 *)((u8 *)entry + 5) == 0) return 2;
    return 0;
}

s32 fn_80078334(void) {
    void *fn_80019E24(u8);
    s32 fn_8001DDBC(void);
    M2C_UNK fn_8001EF80(M2C_UNK *, u8, u8, u8);
    M2C_UNK fn_8002011C(M2C_UNK *, u8, u8, u8, s32);
    M2C_UNK fn_80022DAC(M2C_UNK *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80022FD8(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_8004A224(void);
    void *fn_8010FF24(M2C_UNK *, u8, u8, M2C_UNK);
    extern M2C_UNK lbl_802CA518;
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_8032BB58;
    u8 temp_r28;
    u8 temp_r29;
    u8 temp_r30;
    void *temp_r3;

    fn_80022DAC(&lbl_802CA518, 5, -1);
    fn_80022DAC(&lbl_802CA518, 8, 0);
    fn_80022FD8(&lbl_802CA518, 6);
    temp_r3 = fn_8010FF24(&lbl_8032BB58, M2C_FIELD(&lbl_802EF4C8, u8 *, 0xD), M2C_FIELD(&lbl_802EF4C8, u8 *, 0xE), 7);
    temp_r30 = M2C_FIELD(fn_80019E24(M2C_FIELD(temp_r3, u8 *, 4)), u8 *, 0x1D);
    temp_r29 = M2C_FIELD(temp_r3, u8 *, 1);
    temp_r28 = M2C_FIELD(temp_r3, u8 *, 0);
    fn_8002011C(&lbl_802CA518, temp_r28, temp_r29, temp_r30, fn_8001DDBC());
    fn_8001EF80(&lbl_802CA518, M2C_FIELD(temp_r3, u8 *, 0), M2C_FIELD(temp_r3, u8 *, 1), M2C_FIELD(temp_r3, u8 *, 3));
    fn_8004A224();
    return 0;
}

s32 fn_80078420(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

void fn_80078444(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u16*)((u8*)lbl_8026C0B8 + 0x4DA));
}

void fn_80078470(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u16*)((u8*)lbl_8026C0B8 + 0x4E5));
}

void fn_8007849C(void) {
    extern u16 lbl_802EF4C8;
    *((u8*)&lbl_802EF4C8 + 8) = 0x15;
}

s32 fn_800785E4(void) {
    M2C_UNK fn_8004A224();
    M2C_UNK fn_800AAB3C(s32);
    extern s32 lbl_802EF4C8[];
    fn_800AAB3C(lbl_802EF4C8[0]);
    fn_8004A224();
    return 0;
}

s32 fn_80078618(void) {
    M2C_UNK fn_8004A1F0();
    fn_8004A1F0();
    return 0;
}

void fn_8007863C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u16*)((u8*)lbl_8026C0B8 + 0x4EE));
}

void fn_80078668(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u16*)((u8*)lbl_8026C0B8 + 0x4F6));
}

s32 fn_80078694(void) {
    extern u16 lbl_802EF4C8;
    ((u8*)&lbl_802EF4C8)[8] = 0x27;
    return 5;
}

s32 fn_800786AC(void) {
    void *fn_8001CB64();
    M2C_UNK fn_8002BEFC(s32, u32);
    u32 *fn_80037BBC(s32, s32);
    u8 fn_8009339C(s32, u32);
    extern M2C_UNK lbl_802EF4C8;
    extern s32 lbl_802EF4E0;
    s32 var_r30;
    u32 *temp_r3;
    void *temp_r3_2;

    if ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0x12) != 0) {
        return 3;
    }
    var_r30 = 0;
loop_3:
    temp_r3 = fn_80037BBC(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), var_r30);
    if ((u32) *temp_r3 != 0U) {
        temp_r3_2 = fn_8001CB64();
        if (((((M2C_FIELD(temp_r3_2, s32 *, 4) & 1) ^ 0) | ((M2C_FIELD(temp_r3_2, s32 *, 0) & 0) ^ 0)) != 0) && (fn_8009339C(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), *temp_r3) != 0)) {
            fn_8002BEFC(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), *temp_r3);
            if ((s32) lbl_802EF4E0 != 0) {
                return 0;
            }
        }
        var_r30 += 1;
        if (var_r30 >= 4) {
            goto block_9;
        }
        goto loop_3;
    }
block_9:
    return 3;
}

void fn_800787A0(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u16*)((u8*)lbl_8026C0B8 + 0x4FE));
}

void fn_800787CC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x509);
}

s32 fn_800787F8(void) {
    extern M2C_UNK lbl_802EF4C8;
    M2C_FIELD(&lbl_802EF4C8, s8 *, 8) = 0xF;
    return 5;
}

void fn_80078904(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x512);
}

void fn_80078930(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x51b);
}

s32 fn_8007895C(void) {
    u8 fn_80093088(s32);
    extern u16 lbl_802EF4C8;
    u8 temp_r3;

    if ((s8) *(u8 *) (((u32) &lbl_802EF4C8) + 0x12) != 0) {
        return 3;
    }
    temp_r3 = fn_80093088(*(u32 *) &lbl_802EF4C8);
    return 3 & ((s32) (-(s32) temp_r3 | temp_r3) >> 0x1F);
}

s32 fn_800789B4(void) {
    *(u8 *)((u32)&D_802EF4C8 + 8) = 2;
    return 5;
}

void fn_800789CC(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x522);
}

void fn_800789F8(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x52b);
}

s32 fn_80078A24(void){M2C_UNK fn_8002B0A4(void*);extern u8 lbl_802EF4C8[];extern s32 lbl_802EF4E0[];if(lbl_802EF4C8[0x16]&1)return 3;if((s8)lbl_802EF4C8[0x12])return 3;fn_8002B0A4(*(void**)lbl_802EF4C8);if(lbl_802EF4E0[0]==0)return 3;return (*(u8*)((u8*)*(void**)lbl_802EF4C8+0x1a5)&0x70)?2:0;}

s32 fn_80078AB8(void*a,void*b,void*c){s32 fn_8000E0E4(void*);void fn_80166AE8(s32,s32,s32,void*);extern u8 lbl_8026C0B8[];extern u8 lbl_802EF4C8[];void*obj=*(void**)((u8*)b+0x3c);s32 str;s32 x,y;if(*(u8*)((u8*)c+0x39)){s16 yy=*(s16*)((u8*)c+0x32);s16 xx=*(s16*)((u8*)c+0x30);str=fn_8000E0E4(lbl_8026C0B8+0x535);x=(*(s16(**)(void*))(*(u32*)((u8*)obj+4)+0x60))(obj);y=(*(s16(**)(void*))(*(u32*)((u8*)obj+4)+0x5c))(obj);fn_80166AE8(y+xx,x+yy,str,b);return 0;}lbl_802EF4C8[8]=7;return 5;}

void fn_80078B6C(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x53d);
}

void fn_80078B98(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x545);
}

s32 fn_80078C28(s32 arg0, s32 arg1) {
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80311F98[];
    lbl_802EF4C8[8] = 0x29;
    fn_80024398(lbl_80311F98, arg1, 0);
    return 4;
}

void fn_80078C68(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x54e);
}

void fn_80078C94(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x557);
}

s32 fn_80078D48(s32 arg0, s32 arg1) {
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80311F8C[];
    lbl_802EF4C8[8] = 0xD;
    fn_80024398(lbl_80311F8C, arg1, 0);
    return 4;
}

void fn_80078D88(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x561);
}

void fn_80078DB4(void) {
    extern u16 lbl_8026C0B8[];
    fn_8000E0E4((u8 *)lbl_8026C0B8 + 0x56b);
}

s32 fn_80078DE0(void) {
    *(u8 *)((u32)&D_802EF4C8 + 8) = 1;
    return 5;
}

void fn_80078DF8(void) {
    extern u16 lbl_80288AA8;
    void *arg = &lbl_80288AA8;
    fn_8000A440(2, arg);
}

s32 fn_80078E24(void *arg0) {
    s32 temp_r3 = ((s32 *) arg0)[1];
    fn_80006220((s16) (((u32) ((s32 *) temp_r3)[0]) >> 16));
    ((s32 **) arg0)[1] = (s32 *) ((s32 *) arg0)[1] + 0x4;
    return 1;
}

s32 fn_80078E70(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80078E84(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80078E98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80078EAC(void *arg0) {
    u8 fn_80018A08(M2C_UNK);
    if (fn_80018A08(0) != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80078EFC(void *arg0) {
    fn_8000E0E4(((s32 **) arg0)[1][1]);
    fn_80091A1C();
    ((s32 **) arg0)[1] = (s32 *) (((s32 **) arg0)[1]) + 2;
    return 1;
}

s32 fn_80078F44(void *arg0) {
    s32 fn_80091A1C(s32);
    fn_80091A1C(((s32 **) arg0)[1][1]);
    ((s32 **) arg0)[1] = ((s32 **) arg0)[1] + 2;
    return 1;
}

s32 fn_80078FF0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80079004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80079018(void *arg0) {
    void fn_8000C070(void *, u8);
    extern u8 lbl_8036723A;
    u32 *ptr;

    if (lbl_8036723A == 9) {
        ptr = *(u32 **)((u8 *)arg0 + 4);
        fn_8000C070(arg0, (u8)(*ptr >> 16));
    }
    *(u8 **)((u8 *)arg0 + 4) = *(u8 **)((u8 *)arg0 + 4) + 4;
    return 1;
}

s32 fn_800790CC(void) {
    return 0;
}

void fn_80079138(void *arg0) {
    extern void *lbl_80312040[];
    void fn_8000C60C(void *);
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_r3 != NULL) {
        s32 index = *(u8 *)((u8 *)temp_r3 + 0x40);
        if (lbl_80312040[index] != NULL) {
            fn_8000C60C(lbl_80312040[index]);
        }
        lbl_80312040[index] = NULL;
    }
}

void fn_80079198(s32 arg0, s32 arg1) {
    void *fn_8000CA64(void *, s32);
    extern u8 lbl_80288CAC[];
    void *temp_r3;

    temp_r3 = fn_8000CA64(lbl_80288CAC, arg1);
    *(s32 *)((char *)temp_r3 + 0x30) = arg0;
    *(s32 *)((char *)temp_r3 + 0x34) = 0;
    *(s32 *)((char *)temp_r3 + 0x38) = 8;
    *(s16 *)((char *)temp_r3 + 0x28) = 8;
    *(s32 *)((char *)temp_r3 + 0x3C) = 0xFF;
    *(s32 *)((char *)temp_r3 + 0x40) = 0;
}

void fn_800791F0(s32 arg0, s32 arg1) {
    void *fn_8000CA64(void *, s32);
    extern u8 lbl_80288CAC[];
    void *temp_r3;

    temp_r3 = fn_8000CA64(lbl_80288CAC, arg1);
    *(s32 *)((char *)temp_r3 + 0x30) = arg0;
    *(s32 *)((char *)temp_r3 + 0x34) = 0;
    *(s32 *)((char *)temp_r3 + 0x38) = 8;
    *(s16 *)((char *)temp_r3 + 0x28) = 8;
    *(s32 *)((char *)temp_r3 + 0x3C) = 0;
    *(s32 *)((char *)temp_r3 + 0x40) = 0xFF;
}

void fn_80079248(void*p){f32 fn_800067BC(s32,f32,f32,f32,f32);*(s32*)((u8*)p+0x34)+=1;*(s8*)((u8*)*(void**)((u8*)p+0x30)+0x42)=fn_800067BC(0,(f32)*(s32*)((u8*)p+0x3c),(f32)*(s32*)((u8*)p+0x40),(f32)*(s32*)((u8*)p+0x34),(f32)*(s32*)((u8*)p+0x38));}

void *fn_80079380(s8 arg0) {
    extern void *lbl_80312040;
    s32 var_ctr;
    s32 var_r6;
    void **var_r4;
    void *temp_r5;

    if (arg0 < 0) {
        return NULL;
    }
    var_r4 = &lbl_80312040;
    var_r6 = 0;
    var_ctr = 8;
loop_3:
    temp_r5 = *var_r4;
    if ((temp_r5 != NULL) && (arg0 == (s8) (((u8*)temp_r5)[0x43]))) {
        return (&lbl_80312040)[var_r6];
    }
    var_r4 += 1;
    var_r6 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        return NULL;
    }
    goto loop_3;
}

void fn_8007947C(void *arg0) {
    void fn_80007124(void *);
    void fn_8000727C(f32);
    void fn_80007858(f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8000C60C(void *);
    void fn_8000C188(void *);
    void fn_8007B4D8(s32, s32, s32, void *);
    void fn_80231D94(void *, void *, ...);
    extern u8 lbl_8026C640[];
    extern void *lbl_80312040[];
    extern void *lbl_80367240;
    extern f32 lbl_803693D0;
    extern f32 lbl_803693D4;
    extern f32 lbl_803693D8;
    extern f32 lbl_803693DC;
    extern f32 lbl_803693E0;
    extern f32 lbl_803693E4;
    extern f32 lbl_803693E8;
    char sp8[0x100];
    s32 buttons;
    s32 prev;
    f32 temp_f2;
    void *temp_r3;
    s32 index;
    void *entry;

    buttons = *(s32 *)((u8 *)lbl_80367240 + 4);
    prev = *(s32 *)((u8 *)lbl_80367240 + 8);
    if (buttons & (prev ^ buttons) & 0x08000008) {
        *(f32 *)((u8 *)arg0 + 0x34) = *(f32 *)((u8 *)arg0 + 0x34) + lbl_803693D0;
    }
    buttons = *(s32 *)((u8 *)lbl_80367240 + 4);
    prev = *(s32 *)((u8 *)lbl_80367240 + 8);
    if (buttons & (prev ^ buttons) & 0x04000004) {
        *(f32 *)((u8 *)arg0 + 0x34) = *(f32 *)((u8 *)arg0 + 0x34) - lbl_803693D0;
    }
    fn_80231D94(sp8, lbl_8026C640 + 0xF9, *(f32 *)((u8 *)arg0 + 0x34));
    fn_8000A258();
    fn_80009D74(lbl_803693D4, lbl_803693D4, lbl_803693D4, lbl_803693D8);
    fn_8000A174(0, 3);
    fn_8000A248();
    fn_80007898(5);
    fn_80007858(lbl_803693DC, lbl_803693E0);
    fn_80007124(sp8);
    fn_8000727C(lbl_803693E4);
    fn_80007884();
    fn_8000A258();
    fn_80009D74(lbl_803693D4, lbl_803693D4, lbl_803693D4, *(f32 *)((u8 *)arg0 + 0x34));
    fn_8000A248();
    temp_f2 = *(f32 *)((u8 *)arg0 + 0x34);
    fn_8007B4D8((s32)(lbl_803693E0 / temp_f2), (s32)(lbl_803693E8 / temp_f2), 0xFF,
                *(void **)((u8 *)arg0 + 0x30));
    buttons = *(s32 *)((u8 *)lbl_80367240 + 4);
    prev = *(s32 *)((u8 *)lbl_80367240 + 8);
    if (buttons & (prev ^ buttons) & 0x200) {
        temp_r3 = *(void **)((u8 *)arg0 + 0x30);
        if (temp_r3 != NULL) {
            index = *(u8 *)((u8 *)temp_r3 + 0x40);
            entry = lbl_80312040[index];
            if (entry != NULL) {
                fn_8000C60C(entry);
            }
            lbl_80312040[index] = NULL;
        }
        fn_8000C188(arg0);
    }
}

void fn_80079B9C(void *arg1, void *arg2) {
    // Placeholder function to examine structure; we'll need exact matching later
    
    // This function likely does coordinate processing and calls
    // Based on the pattern in other functions in this file:
    // It's modifying coordinates and making calls that use global state
}

void fn_80079CD8(void *arg0) {
    M2C_UNK fn_8000C070(M2C_UNK);
    u32 fn_8000CD60();
    M2C_UNK fn_8007A524(void *, M2C_UNK, M2C_UNK);
    M2C_UNK var_r31;
    s16 temp_r0;
    s16 temp_r0_2;
    s32 var_r0;
    u32 temp_r3;

    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x38);
    if (temp_r0 < 0xC) {
        if (temp_r0 < 6) {
            if (temp_r0 < 0) {

            } else {
                var_r31 = 1;
            }
        } else {
            var_r31 = 2;
        }
    } else if (temp_r0 != 0x12) {
        if (temp_r0 < 0x12) {
            var_r31 = 1;
        }
    } else {
        fn_8000C070(1);
        M2C_FIELD(arg0, s16 *, 0x36) = 1;
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x34);
        temp_r3 = fn_8000CD60() >> 0x10U;
        switch (temp_r0_2) {                        /* irregular */
        case 3:
            var_r0 = ((s32) temp_r3 >> 7) + 0x12C;
            break;
        case 1:
            var_r0 = ((s32) temp_r3 >> 7) + 0x1E;
            break;
        case 2:
            var_r0 = ((s32) temp_r3 >> 0xA) + 1;
            break;
        case 4:
            var_r0 = 1;
            break;
        case 5:
            var_r0 = 0x7FFFFFFF;
            break;
        default:
            var_r0 = 1;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = var_r0;
    }
    fn_8007A524(arg0, 0, 7);
    fn_8007A524(arg0, var_r31, 0xA);
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) (M2C_FIELD(arg0, s16 *, 0x38) + 1);
}

void fn_80079E08(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
}

void fn_80079E14(void *arg0) {
    M2C_UNK fn_8000C070(M2C_UNK);
    u32 fn_8000CD60();
    M2C_UNK fn_8007A524(void *, M2C_UNK, M2C_UNK);
    M2C_UNK var_r31;
    s16 temp_r0;
    s16 temp_r0_2;
    s32 var_r0;
    u32 temp_r3;

    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x38);
    if (temp_r0 < 0xC) {
        if (temp_r0 < 6) {
            if (temp_r0 < 0) {

            } else {
                var_r31 = 1;
            }
        } else {
            var_r31 = 2;
        }
    } else if (temp_r0 != 0x12) {
        if (temp_r0 < 0x12) {
            var_r31 = 1;
        }
    } else {
        fn_8000C070(1);
        M2C_FIELD(arg0, s16 *, 0x36) = 1;
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x34);
        temp_r3 = fn_8000CD60() >> 0x10U;
        switch (temp_r0_2) {                        /* irregular */
        case 3:
            var_r0 = ((s32) temp_r3 >> 7) + 0x12C;
            break;
        case 1:
            var_r0 = ((s32) temp_r3 >> 7) + 0x1E;
            break;
        case 2:
            var_r0 = ((s32) temp_r3 >> 0xA) + 1;
            break;
        case 4:
            var_r0 = 1;
            break;
        case 5:
            var_r0 = 0x7FFFFFFF;
            break;
        default:
            var_r0 = 1;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = var_r0;
    }
    fn_8007A524(arg0, var_r31, 7);
    fn_8007A524(arg0, 0, 0xA);
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) (M2C_FIELD(arg0, s16 *, 0x38) + 1);
}

void fn_80079F44(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
}

void fn_80079F50(void *arg0) {
    extern s32 lbl_80367468;
    *(s32*)((uintptr_t)arg0 + 0x3C) = lbl_80367468;
}

void fn_8007A024(void *arg0) {
    M2C_UNK var_r31;
    s16 temp_r0;
    s16 temp_r0_2;
    s32 var_r0;
    u32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x38);
    if (temp_r0 <= 2) {
        var_r31 = 0;
        if (temp_r0 != 9) {
            if (temp_r0 < 9) {
                if (temp_r0 < 3) {
                    if (temp_r0 < 0) {

                    } else {
                        var_r31 = 1;
                    }
                } else if (temp_r0 < 6) {
                    var_r31 = 2;
                } else {
                    var_r31 = 1;
                }
            } else if (temp_r0 < 0xB) {
                fn_8000C070((void *)1);
            }
        }
        fn_8007A524(arg0, var_r31, 7);
        fn_8007A524(arg0, var_r31, 0xA);
        M2C_FIELD(arg0, s16 *, 0x38) = (s16) (M2C_FIELD(arg0, s16 *, 0x38) + 1);
        return;
    }
    fn_8007A524((void *)1, 7);
    fn_8007A524(arg0, 1, 0xA);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x36) != 4) {
        fn_8000C070(arg0, 1);
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x34);
        temp_r3 = fn_8000CD60() >> 0x10U;
        switch (temp_r0_2) {                        /* irregular */
        case 3:
            var_r0 = ((s32) temp_r3 >> 7) + 0x12C;
            break;
        case 1:
            var_r0 = ((s32) temp_r3 >> 7) + 0x1E;
            break;
        case 2:
            var_r0 = ((s32) temp_r3 >> 0xA) + 1;
            break;
        case 4:
            var_r0 = 1;
            break;
        case 5:
            var_r0 = 0x7FFFFFFF;
            break;
        default:
            var_r0 = 1;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = var_r0;
    }
}

void fn_8007A198(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
}

void fn_8007A1A4(void *arg0) {
    s16 temp_r30;
    temp_r30 = ((s16*)arg0)[0x38/2];
    if (temp_r30 <= 5) {
        s16 var_r31 = 0;
        if (temp_r30 != 9) {
            if (temp_r30 < 9) {
                if (temp_r30 >= 3) {
                    if (temp_r30 < 6) {
                        var_r31 = 2;
                    } else {
                        var_r31 = 1;
                    }
                } else {
                    var_r31 = 1;
                }
            } else if (temp_r30 < 0xB) {
                fn_8000C070((void *)1);
            }
        }
        fn_8007A524(arg0, var_r31, 7);
        fn_8007A524(arg0, var_r31, 0xA);
        ((s16*)arg0)[0x38/2] = (s16) (temp_r30 + 1);
        return;
    }
    fn_8007A524((void *)2, 7);
    fn_8007A524(arg0, 2, 0xA);
    if ((s16) ((s16*)arg0)[0x36/2] != 3) {
        fn_8000C070((void *)arg0, 2);
    }
}

void fn_8007A2A0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x38) = 0;
}

void fn_8007A2AC(void* p) {
    void fn_8000C070(s32);
    void fn_8007A524(void*, s32, s32);
    
    s32 v = 0;
    s16 x = *(s16*)((u8*)p + 0x38);
    
    // Emulate the exact control flow from the assembly
    if (x == 9) {
        // No action needed
    } else {
        if (x >= 0) {
            if (x < 3) {
                v = 1;
            } else {
                if (x >= 6) {
                    if (x < 11) {
                        // This path leads to a call and return
                        fn_8000C070(1);
                    } else {
                        v = 1;
                    }
                } else {
                    v = 2;
                }
            }
        } else {
            // x < 0 - No action, but this falls through to return
        }
    }
    
    fn_8007A524(p, v, 7);
    fn_8007A524(p, v, 10);
    
    (*(s16*)((u8*)p + 0x38))++;
}

void fn_8007A368(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    M2C_UNK fn_8000CD60();
    M2C_UNK fn_8007A524(void *, M2C_UNK, s32);

    s32 temp_r6;
    s16 temp_r0;
    s16 temp_r0_2;
    u32 temp_r3;

    temp_r6 = *(s32 *)((u8 *)arg0 + 0x3C);
    *(s32 *)((u8 *)arg0 + 0x3C) = temp_r6 - 1;
    fn_8007A524(NULL, 7, (s32) temp_r6);
    fn_8007A524(arg0, 0, 0xA);
    temp_r0 = *(s16 *)((u8 *)arg0 + 0x36);
    if (temp_r0 != 1) {
        fn_8000C070(arg0, (u8) temp_r0);
        return;
    }
    if (*(s32 *)((u8 *)arg0 + 0x3C) < 0) {
        temp_r0_2 = *(s16 *)((u8 *)arg0 + 0x34);
        temp_r3 = fn_8000CD60() >> 0x10U;
        switch (temp_r0_2) {                        /* irregular */
        case 3:
            temp_r3 = ((s32) temp_r3 >> 7) + 0x12C;
            break;
        case 1:
            temp_r3 = ((s32) temp_r3 >> 7) + 0x1E;
            break;
        case 2:
            temp_r3 = ((s32) temp_r3 >> 0xA) + 1;
            break;
        case 4:
            temp_r3 = 1;
            break;
        case 5:
            temp_r3 = 0x7FFFFFFF;
            break;
        default:
            temp_r3 = 1;
            break;
        }
        *(s32 *)((u8 *)arg0 + 0x3C) = temp_r3;
        *(s16 *)((u8 *)arg0 + 0x38) = 0;
        fn_8000C070(arg0, 2U);
    }
}

#pragma dont_inline on
void fn_8007A46C(void* p) {
    u32 fn_8000CD60(s32);
    s32 t; 
    s32 v;
    *(s32*)((u8*)p+0x30)=*(s32*)((u8*)p+0x18);
    *(s16*)((u8*)p+0x34)=1;
    t=fn_8000CD60(*(s32*)((u8*)p+0x30))>>16;
    switch(*(s16*)((u8*)p+0x34)){
        case 3: v=(t>>7)+300; break;
        case 1: v=(t>>7)+30; break;
        case 2: v=(t>>10)+1; break;
        case 4: v=1; break;
        case 5: v=0x7fffffff; break;
        default: v=1;
    }
    *(s32*)((u8*)p+0x3c)=v;
    *(s16*)((u8*)p+0x36)=1;
}
void fn_8007ACCC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s16 *, 0x36) = 1;
    M2C_FIELD(arg0, s16 *, 0x34) = 1;
}

void fn_8007ACE4(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_r5 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) & 0xFFFFFF1F);
        M2C_FIELD(temp_r5, s16 *, 0x36) = 1;
    }
}

void fn_8007AD08(void *arg0, s16 arg1, s16 arg2) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x54);
    if (temp_r3 != NULL) {
        if (arg1 > 0) {
            M2C_FIELD(temp_r3, s16 *, 0x34) = arg1;
        }
        if (arg2 > 0) {
            M2C_FIELD(temp_r3, s16 *, 0x36) = arg2;
        }
    }
}

void fn_8007AD30(void *arg0, s32 arg1) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_r5 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) & 0xFFFFFF1F);
        if ((s16) M2C_FIELD(temp_r5, s16 *, 0x36) != -1) {
            M2C_FIELD(temp_r5, s16 *, 0x36) = 1;
        }
        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) | arg1);
    }
}

void fn_8007AD6C(void *arg0) {
    extern void *lbl_80312040[];
    void fn_8000C60C(void *);

    if (arg0 != NULL) {
        s32 index = *(u8 *)((u8 *)arg0 + 0x40);
        if (lbl_80312040[index] != NULL) {
            fn_8000C60C(lbl_80312040[index]);
        }
        lbl_80312040[index] = NULL;
    }
}

void fn_8007ADC8(s32 arg0) {
    extern u16 lbl_80312040[];
    void fn_8000C60C(void);

    s32 r30;
    s32 r31;
    u16 temp;

    r30 = arg0 * 4;
    r31 = (s32)lbl_80312040 + ((r30 & 0xFFFFFFFC));
    
    temp = *(u16*)r31;
    if (temp != 0) {
        fn_8000C60C();
    }
    *(u16*)r31 = 0;
}

void fn_8007AF00(void *arg0) {
    extern M2C_UNK lbl_80312040;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(*(&lbl_80312040 + (M2C_FIELD(arg0, s32 *, 0x30) * 4)), u8 *, 0x41);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) < (s32) M2C_FIELD(arg0, s32 *, 0x40)) {
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = 4;
}

void fn_8007AF48(void *arg0) {
 f32 fn_800067BC(s32, s32, void *, f32, f32, f32, f32); void fn_8000C188(void *);
 extern void *lbl_80312040[]; extern f32 lbl_803693D4; extern f64 lbl_803693C8;
 void *temp_r31; s32 var_r3, var_r4, var_r5, var_r6;
 var_r4=*(s32*)((u8*)arg0+0x6C); var_r5=*(s32*)((u8*)arg0+0x64); var_r3=*(s32*)((u8*)arg0+0x68); var_r6=*(s32*)((u8*)arg0+0x60);
 temp_r31=lbl_80312040[var_r6];
 *(u8*)((u8*)temp_r31+0x42)=(s8)fn_800067BC(0,var_r6,&lbl_80312040[0],(f64)var_r4,lbl_803693D4,(f64)var_r3,(f64)var_r5);
 if(var_r5==var_r3) { fn_8000C188(arg0); return; }
 *(s32*)((u8*)arg0+0x68)=var_r3+1;
}

void fn_8007B01C(void *arg0) {
    extern M2C_UNK lbl_80312040;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(*(&lbl_80312040 + (M2C_FIELD(arg0, s32 *, 0x60) * 4)), u8 *, 0x42);
}

void fn_8007B044(void*p){f32 fn_800067BC(s32,f32,f32,f32,f32);void fn_8000C188(void*);extern u8 lbl_80312040[];s32 i=*(s32*)((u8*)p+0x60);void*obj=*(void**)(lbl_80312040+i*4);s32 v=fn_800067BC(0,(f32)*(s32*)((u8*)p+0x68),(f32)*(s32*)((u8*)p+0x64),0,0);*(s8*)((u8*)obj+0x42)=v;if(*(s32*)((u8*)p+0x64)==*(s32*)((u8*)p+0x68))fn_8000C188(p);else ++*(s32*)((u8*)p+0x68);}

void fn_8007B104(void *arg0) {
    extern u16 lbl_80312040[8];
    s32 temp_r5 = *(s32*)((char*)arg0 + 0x60);
    s32 temp_r4 = (s32)lbl_80312040;
    *(s32*)((char*)arg0 + 0x68) = 0;
    *(u8*)(temp_r4 + (temp_r5 << 2) + 0x42) = 0;
}

void fn_8007B128(void *arg0) {
    f32 fn_800067BC(M2C_UNK, f32, f32, f32, f32);
    M2C_UNK fn_8000C188(void *);
    s32 temp_r3;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x38) = fn_800067BC(5, M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34), (f32) M2C_FIELD(arg0, s32 *, 0x3C), (f32) M2C_FIELD(arg0, s32 *, 0x38));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r3 == (s32) M2C_FIELD(arg0, s32 *, 0x38)) {
        fn_8000C188(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r3 + 1);
}

void fn_8007B990(void *arg0) {
    extern void *lbl_80312040[];
    void fn_8000C60C(void *);

    if (arg0 != NULL) {
        s32 index = *(u8 *)((u8 *)arg0 + 0x40);
        if (lbl_80312040[index] != NULL) {
            fn_8000C60C(lbl_80312040[index]);
        }
        lbl_80312040[index] = NULL;
    }
}

void fn_8007B9EC(void *arg0) {
    extern void *lbl_80312040[];
    void fn_8000C60C(void *);
    void *obj = *(void **)((u8 *)arg0 + 0x54);
    if (obj != NULL) {
        s32 index = *(u8 *)((u8 *)obj + 0x40);
        if (lbl_80312040[index] != NULL) {
            fn_8000C60C(lbl_80312040[index]);
        }
        lbl_80312040[index] = NULL;
    }
}

s32 fn_8007BA4C(s32 arg0) {
    s32 sp30;
    s32 *var_r29;
    u32 r28;
    s32 r31;

    sp30 = 0x0;
    if (arg0 == 0x0) {
        r31 = 0x15;
    } else if (arg0 == 0x1) {
        r31 = 0xE;
    } else if (arg0 == 0x2) {
        r31 = 0xD;
    } else if (arg0 == 0x3) {
        r31 = 0xB;
    } else if (arg0 == 0x4) {
        r31 = 0xC;
    } else {
        r31 = 0x8;
    }
    
    var_r29 = &sp30;
    r28 = r31 * 0x8;
    if (r31 < 0x20) {
        while (1) {
            *(var_r29 + r28) = 0x0;
            r28 -= 0x1;
            if ((s32)(r28 + 0x1) <= 0x0) break;
        }
    }
    
    return sp30;
}

void fn_8007BC3C(s32 a,s32 b,s32 c,s32 d,s32 e){void fn_8007BD30(s8,s32,s32,s32,s32,s32,s32);extern u32 lbl_80312040[];s8 n;if(!lbl_80312040[0])n=0;else if(!lbl_80312040[1])n=1;else if(!lbl_80312040[2])n=2;else if(!lbl_80312040[3])n=3;else if(!lbl_80312040[4])n=4;else if(!lbl_80312040[5])n=5;else if(!lbl_80312040[6])n=6;else if(!lbl_80312040[7])n=7;else n=-1;fn_8007BD30(n,a,b,c,d,0,e);}

void fn_8007C018(void *arg0) {
    M2C_UNK fn_80200270(s32);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        fn_80200270(*M2C_FIELD(arg0, s32 **, 0x34));
    }
}

void fn_8007C318(u16 arg1) {
    fn_80225058(arg1 >> 0x10, 0, arg1 & 0xFFFF, 0x1E0);
}

void fn_8007C34C(void) {
    extern M2C_UNK lbl_80312040;
    M2C_FIELD(&lbl_80312040, s32 *, 0) = 0;
    M2C_FIELD(&lbl_80312040, s32 *, 4) = 0;
    M2C_FIELD(&lbl_80312040, s32 *, 8) = 0;
    M2C_FIELD(&lbl_80312040, s32 *, 0xC) = 0;
    M2C_FIELD(&lbl_80312040, s32 *, 0x10) = 0;
    M2C_FIELD(&lbl_80312040, s32 *, 0x14) = 0;
    M2C_FIELD(&lbl_80312040, s32 *, 0x18) = 0;
    M2C_FIELD(&lbl_80312040, s32 *, 0x1C) = 0;
}

void fn_8007C3BC(void) {
    if (fn_8000D354() != 0) {
        return;
    }
    fn_8000D354((void *)0x8026C72F);
}

s32 fn_8007C3F8(void) {
    extern s32 lbl_80367478;
    return lbl_80367478;
}

s32 fn_8007C400(void) {
    extern s32 lbl_8036747C;
    return lbl_8036747C;
}

void fn_8007C484(void *arg0) {
    void fn_80234450(void *, void *);
    void fn_802343E0(void *, s32);
    void fn_8005BA10(void *);
    extern u16 lbl_8026C640[];
    char sp8[0x40];

    fn_80234450(sp8, (u8 *)lbl_8026C640 + 0x122);
    fn_802343E0(sp8, *(s32 *)((char *)arg0 + 8));
    fn_8005BA10(sp8);
}

void fn_8007C4D4(void *arg0, s32 arg1) {
    void fn_80234450(void *, void *, void *);
    void fn_802343E0(void *, s32);
    void fn_8005C870(void *, s32);
    extern u16 lbl_8026C640[];
    char sp8[0x40];

    fn_80234450(sp8, (u8 *)lbl_8026C640 + 0x122, lbl_8026C640);
    fn_802343E0(sp8, *(s32 *)((char *)arg0 + 8));
    fn_8005C870(sp8, arg1);
}

#include "common.h"
#include "structs.h"

extern u16 lbl_802EF4C8[12];
extern s32 lbl_802EF4E0[];
extern void *fn_8001CB64(void);
extern void *fn_800285C0(void *);
extern u16 lbl_8026C0B8[];
#include "global.h"
extern u8 D_802EF4C8[24];
extern u16 lbl_80288CAC;
#include "global.h"
extern void* (*fn_80024398_ptr)(void*, s32, s32);

extern u16 lbl_80288CAC;
#include "common.h"
#include "structs.h"
extern u16 lbl_80312040[8];
#include <common.h>

extern u16 lbl_802EF4C8[12];
extern s32 lbl_802EF4E0[502];
#include "global.h"
