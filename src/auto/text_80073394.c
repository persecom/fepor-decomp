/* Functions from 0x80073394 to 0x80073E70, found by decomp-toolkit. */
#include "common.h"
extern void fn_80006220(s32);
extern void fn_8002D780(s32);
extern void* (*fn_80024398_ptr)(void*, s32, s32);
extern void fn_8000BD98(void *);
s32 fn_8000E0E4(void *);

void *fn_80073394(void) {
    extern u16 lbl_8026BE40[];
    return &lbl_8026BE40[0x1A7];
}

void *fn_800733E4(void) {
    extern u16 lbl_8026BE40[];
    return &lbl_8026BE40[0x34E];
}

s32 fn_800733F4(void) {
    return 1;
}

void *fn_800733FC(void) {
    extern u16 lbl_8026BE40[];
    return (u8 *)lbl_8026BE40 + 0x1E0;
}

s32 fn_8007340C(s32 arg0, s32 arg1) {
    void *fn_800241C8(s32);
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    M2C_UNK fn_8018DC18(void *);
    extern u8 lbl_802EF4C8[];
    extern M2C_UNK lbl_80367390;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(fn_800241C8(arg1), s32 *, 0x18);
    lbl_802EF4C8[8] = 0;
    fn_8018DC18(lbl_802EF4C8);
    fn_80024398(&lbl_80367390, temp_r31, 0);
    return 5;
}

void *fn_80073464(void) {
    extern u8 lbl_8026BE40[];
    return lbl_8026BE40 + 0x203;
}

s32 fn_80073474(s32 arg1) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32);
    void *fn_800241C8(s32);
    extern M2C_UNK lbl_80286EF0;
    
    fn_8000CAA0(&lbl_80286EF0, M2C_FIELD(fn_800241C8(arg1), s32 *, 0x18));
    return 5;
}

u8 fn_800734B0(void) {
    u8 fn_801E3620(M2C_UNK *);
    extern M2C_UNK lbl_80331FB8;
    u8 var_r3;

    var_r3 = 2;
    if (fn_801E3620(&lbl_80331FB8) != 0) {
        var_r3 = 0;
    }
    return var_r3;
}

void fn_800734EC(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern u8 lbl_8026BE40[];
    fn_8000E0E4(lbl_8026BE40 + 0x20C);
}

void fn_80073518(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern u8 lbl_8026BE40[];
    fn_8000E0E4(lbl_8026BE40 + 0x215);
}

s32 fn_80073544(void) {
    extern u16 lbl_802EF4C8;
    lbl_802EF4C8 = 0x35;
    return 5;
}

void fn_8007355C(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_8026BE40;
    fn_8000E0E4(&lbl_8026BE40 + 0x21E);
}

void fn_80073588(void) {
    extern u16 lbl_8026BE40[];
    fn_8000E0E4((u8 *)lbl_8026BE40 + 0x226);
}

s32 fn_800735B4(s32 arg0, s32 arg1) {
    void *fn_800241C8(s32);
    M2C_UNK fn_801AA120(s32);
    fn_801AA120(M2C_FIELD(fn_800241C8(arg1), s32 *, 0x18));
    return 5;
}

void fn_800735E4(void) {
    extern u16 lbl_8026BE40[];
    fn_8000E0E4((u8 *)lbl_8026BE40 + 0x22f);
}

void fn_80073610(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern u8 lbl_8026BE40[];
    fn_8000E0E4(lbl_8026BE40 + 0x238);
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_8000CAA0(void *);
extern "C" void fn_80166AE8(s32, s32, s32, void *);
extern "C" s32 fn_8007363C(s32 arg0, void *arg1, void *arg2) {
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
    extern u8 lbl_8026BE40[];
    extern u8 lbl_80286ED8[];
    Obj *obj;
    s32 a;
    s32 str;
    s32 b;
    s16 x;
    s16 y;

    if (M2C_FIELD(arg2, u8 *, 0x39) != 0) {
        str = fn_8000E0E4(lbl_8026BE40 + 0x242);
        obj = M2C_FIELD(arg1, Obj **, 0x3C);
        x = M2C_FIELD(arg2, s16 *, 0x30);
        a = obj->v22();
        y = M2C_FIELD(arg2, s16 *, 0x32);
        b = obj->v21();
        fn_80166AE8(b + x, a + y, str, arg1);
        return 0;
    }
    fn_8000CAA0(lbl_80286ED8);
    return 4;
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset
u8 fn_800736F0(void) {
    u8 fn_801E3620(M2C_UNK *);
    extern u8 lbl_80331FB8[];
    extern s32 lbl_80367110;
    u8 res;
    s32 ret;

    if (lbl_80367110 & 0x10) {
        return 0;
    }
    res = fn_801E3620((M2C_UNK *)lbl_80331FB8);
    ret = 2;
    if (res != 0) {
        ret = 0;
    }
    return ret;
}

void fn_80073740(void) {
    extern u16 lbl_8026BE40[];
    fn_8000E0E4((u8 *)lbl_8026BE40 + 0x24c);
}

void fn_8007376C(void) {
    extern u16 lbl_8026BE40[];
    fn_8000E0E4(&lbl_8026BE40[0x254 / sizeof(u16)]);
}

void fn_800737DC(void) {
    extern u16 lbl_8026BE40[];
    fn_8000E0E4((u8 *)lbl_8026BE40 + 0x25D);
}

void fn_80073808(void) {
    extern u16 lbl_8026BE40[];
    fn_8000E0E4((u8 *)lbl_8026BE40 + 0x267);
}

s32 fn_80073834(s32 arg1) {
    void *fn_800241C8(s32);
    M2C_UNK fn_8012C9FC(M2C_UNK, s32);
    void *ptr = fn_800241C8(arg1);
    s32 val = *(s32 *)((u8 *)ptr + 0x18);
    fn_8012C9FC(0, val);
    return 5;
}

void fn_800739A8(void) {
    M2C_UNK fn_8003BE50(void *);
    u8 fn_80091D74();
    extern void *lbl_80367468;
    if ((M2C_FIELD(lbl_80367468, s32 *, 0x1A0) & 0x800000) && (fn_80091D74() == 0)) {
        fn_8003BE50(lbl_80367468);
    }
}

void fn_80073A3C(void) {
    M2C_UNK fn_8001D580(M2C_UNK *);
    extern M2C_UNK lbl_8036746C;
    fn_8001D580(&lbl_8036746C);
}

void fn_80073A60(void) {
    M2C_UNK fn_80107190(s32);
    M2C_UNK fn_80105650(void);
    extern s32 lbl_80312000;
    
    if (lbl_80312000 & 0x400000) {
        fn_80107190(2);
        fn_80105650();
    }
}

extern s32 lbl_80311FD8;
extern s32 lbl_80367468;
extern s32 lbl_8036746C;
extern s32 lbl_80312000;
extern s32 lbl_802EF4C8;
void fn_80073BE4(s32 arg0) {
    fn_80024398(&lbl_80311FD8, arg0, 0);
}

void fn_80073C44(s32 arg0) {
    extern u16 lbl_80311FBC;
    s32 temp_r5 = (s32)&lbl_80311FBC;
    *(u16*)temp_r5 = (u16)arg0;
    fn_80024398((u16*)temp_r5, arg0, 0);
}

void fn_80073C74(s32 arg0) {
    extern u16 lbl_80311F70;
    fn_80024398((u16 *)&lbl_80311F70, arg0, 0);
}

void fn_80073CA4(void) {
    fn_8003BE50((void *) lbl_802EF4C8);
    fn_8003A398(lbl_802EF4C8);
    fn_800F0A3C();
}

void fn_80073DD4(s32 arg0) {
    extern u16 lbl_80311F50;
    s32* temp_r5 = (s32*)&lbl_80311F50;
    fn_80024398(temp_r5, arg0, 0);
}

void fn_80073E04(s32 arg0) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_80311F40;
    fn_80024398(&lbl_80311F40, arg0, 0);
}

