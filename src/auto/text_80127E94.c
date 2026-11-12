/* Functions from 0x80127E94 to 0x8012C368, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80290AA0[0x40];
extern u8 lbl_8032BB58[0x200];
extern u8 lbl_80330708[0x578];

extern s32 lbl_80367A88;

extern f32 lbl_8036A3C0;
extern f32 lbl_8036A3C4;
extern f64 lbl_8036A3C8;
extern f64 lbl_8036A418;

#pragma cplusplus on
extern "C" void fn_80127E94(void *arg0) {
    struct Obj {
        u8 pad[4];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}
#pragma cplusplus reset
s32 fn_80127EC0(void) {
    extern u16 lbl_80275048[];
    fn_801475FC((u16 *)((u8 *)lbl_80275048 + 0x521), 0x64);
    return 9;
}

void fn_80127EF4(void) {
    extern u16 lbl_80275048[];
    fn_8000E0E4(&lbl_80275048[0x580 / sizeof(u16)]);
}

#pragma cplusplus on
extern "C" s32 fn_80127F20(void *arg0, void *arg1, void *arg2) {
    struct Obj {
        u8 pad[4];
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
        virtual void v12();
        virtual void v13();
        virtual void v14();
        virtual void v15();
        virtual void v16();
        virtual void v17();
        virtual void v18();
        virtual void v19();
        virtual void v20();
        virtual void v21();
        virtual void v22();
        virtual void v23();
        virtual void v24();
        virtual void v25();
        virtual void v26();
        virtual void v27();
        virtual u32 v28();
    };
    extern u8 lbl_80367A6C;
    s32 fn_801475FC(u32, s32);
    Obj *obj;

    (void)arg0;
    lbl_80367A6C = *(u8 *)((u8 *)arg2 + 0x3A);
    obj = *(Obj **)((u8 *)arg1 + 0x3C);
    if (obj->v28() != 0U) {
        obj = *(Obj **)((u8 *)arg1 + 0x3C);
        fn_801475FC(obj->v28(), 0x64);
    }
    return 5;
}
#pragma cplusplus reset

void fn_80127F8C(void **arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80007124();
    M2C_UNK fn_800076AC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80007858(f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 fn_800102BC(M2C_UNK, f32);
    s32 fn_80010B78(M2C_UNK, f32);
    extern f32 lbl_8036A404;
    s16 temp_r28;
    s16 temp_r29;
    s16 temp_r29_2;
    s32 temp_r4;
    u32 temp_r5_2;
    void *temp_r3;
    void *temp_r5;

    temp_r3 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r29 = M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s16 (**)(void *), 0x58)(temp_r3);
    temp_r5 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r4 = (s32) (temp_r29 - fn_800102BC(-1, lbl_8036A404)) >> 1;
    temp_r28 = M2C_FIELD(arg2, s16 *, 0x32) + temp_r4;
    temp_r29_2 = M2C_FIELD(M2C_FIELD(temp_r5, void **, 4), s16 (**)(void *, s32, void *), 0x50)(temp_r5, temp_r4, temp_r5);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xC)(arg0);
    temp_r5_2 = temp_r29_2 - fn_80010B78(-1, lbl_8036A404);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, void *, u32), 0x4C)(arg0, arg1, temp_r5_2);
    fn_80007898(6);
    fn_80007858((f32) ((s32) ((temp_r5_2 >> 0x1FU) + temp_r5_2) >> 1), (f32) temp_r28);
    fn_800076AC(0, 0, 0, 0xFF);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xC)(arg0);
    fn_80007124();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036A404);
    fn_8000A248();
}

void fn_80128108(void) {
    extern u16 lbl_80275048[];
    fn_8000E0E4((u8 *)lbl_80275048 + 0x5C4);
}

void fn_80128134(void) {
    extern u16 lbl_80275048[];
    fn_8000E0E4((u8 *)lbl_80275048 + 0x5CD);
}

void fn_80128160(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAF0(void *, u32);
    u32 fn_801090C0(s32);
    extern u8 lbl_802905C0[];
    extern f32 lbl_8036A3C0;
    extern f32 lbl_8036A3C4;
    u32 temp_r3;
    void *obj;
    f32 f40;
    f32 f44;
    f32 f3c;

    temp_r3 = fn_801090C0(arg0);
    if (temp_r3 != 0U) {
        obj = fn_8000CAF0(lbl_802905C0, temp_r3);
        f40 = lbl_8036A3C0;
        f44 = lbl_8036A3C4;
        f3c = (f32)arg2;
        *(s32 *)((u8 *)obj + 0x38) = arg1;
        *(f32 *)((u8 *)obj + 0x3C) = f3c;
        *(f32 *)((u8 *)obj + 0x40) = f40;
        *(f32 *)((u8 *)obj + 0x44) = f44;
    }
}

void fn_80128268(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAF0(void *, u32);
    u32 fn_801090C0(s32);
    extern u8 lbl_802905C0[];
    extern f32 lbl_8036A3C0;
    u32 temp_r3;
    void *obj;

    temp_r3 = fn_801090C0(arg0);
    if (temp_r3 != 0U) {
        obj = fn_8000CAF0(lbl_802905C0, temp_r3);
        *(s32 *)((u8 *)obj + 0x38) = arg1;
        *(f32 *)((u8 *)obj + 0x3C) = (f32)arg2;
        *(f32 *)((u8 *)obj + 0x40) = lbl_8036A3C0;
        *(f32 *)((u8 *)obj + 0x44) = lbl_8036A3C0;
    }
}

void fn_801282E8(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAF0(void *, u32);
    u32 fn_801090C0(s32);
    extern u8 lbl_80290598[];
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3 = fn_801090C0(arg0);
    if (temp_r3 != 0U) {
        temp_r3_2 = fn_8000CAF0(lbl_80290598, temp_r3);
        M2C_FIELD(temp_r3_2, s32 *, 0x38) = arg1;
        M2C_FIELD(temp_r3_2, f32 *, 0x3C) = (f32)arg2;
    }
}

void fn_8012835C(s32 arg0, s32 arg1, s32 arg2) {
    void *fn_8000CAF0(void *, u32);
    u32 fn_801090C0(s32);
    extern u8 lbl_80290598[];
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3 = fn_801090C0(arg0);
    if (temp_r3 != 0U) {
        temp_r3_2 = fn_8000CAF0(lbl_80290598, temp_r3);
        M2C_FIELD(temp_r3_2, s32 *, 0x38) = arg1;
        M2C_FIELD(temp_r3_2, f32 *, 0x3C) = (f32)-arg2;
    }
}

void fn_801283D4(void *arg0) {
    u32 OSGetTick(f32);
    f64 fn_80238638(u32, u32, s32, f32, f32);
    extern f32 lbl_80367068;
    extern f32 lbl_8036A3D4;
    extern f64 lbl_8036A3D8;
    extern f64 lbl_8036A3E0;
    extern f64 lbl_8036A3E8;
    extern f32 lbl_8036A3F0;
    extern f32 lbl_8036A3F4;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f4;
    f32 var_f4;
    f64 temp_f1_2;
    f64 temp_f1_3;
    f64 temp_f1_4;
    s32 temp_r3;
    s32 temp_r6;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r3_2;
    void *temp_r31;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x44);
    temp_r31 = M2C_FIELD(arg0, void **, 0x18);
    var_f4 = (temp_f2 * temp_f2) + (temp_f1 * temp_f1);
    if (var_f4 > lbl_8036A3D4) {
        temp_f1_2 = __frsqrte(var_f4);
        temp_f1_3 = lbl_8036A3D8 * temp_f1_2 * -(((f64) var_f4 * (temp_f1_2 * temp_f1_2)) - lbl_8036A3E0);
        temp_f1_4 = lbl_8036A3D8 * temp_f1_3 * -(((f64) var_f4 * (temp_f1_3 * temp_f1_3)) - lbl_8036A3E0);
        var_f4 = (f32) ((f64) var_f4 * (lbl_8036A3D8 * temp_f1_4 * -(((f64) var_f4 * (temp_f1_4 * temp_f1_4)) - lbl_8036A3E0)));
    } else if (var_f4 < (f32) lbl_8036A3E8) {
        var_f4 = lbl_80367068;
    } else {
        sp8 = var_f4;
        temp_r3 = M2C_BITWISE(s32, sp8) & 0x7F800000;
        switch (temp_r3) {                          /* irregular */
        case 0x7F800000:
            if (M2C_BITWISE(s32, sp8) & 0x7FFFFF) {
                var_r0 = 1;
            } else {
                var_r0 = 2;
            }
            break;
        case 0x0:
            if (M2C_BITWISE(s32, sp8) & 0x7FFFFF) {
                var_r0 = 5;
            } else {
                var_r0 = 3;
            }
            break;
        default:
            var_r0 = 4;
            break;
        }
        if (var_r0 == 1) {
            var_f4 = lbl_80367068;
        }
    }
    temp_f1_5 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_f30 = M2C_FIELD(arg0, f32 *, 0x44) / var_f4;
    temp_r3_2 = OSGetTick(temp_f1_5);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x38);
    temp_r0 = *(u32 *)0x800000F8 / 4000;
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_f2_2 = (temp_f4 * (f32) fn_80238638(temp_r3_2 / temp_r0, MULTU_HI(0x10624DD3, ((u32) *(u32 *)0x800000F8 >> 2U)), temp_r6, lbl_8036A3F0 * ((f32) ((temp_r3_2 / temp_r0) % temp_r6) / (f32) temp_r6), lbl_8036A3F0)) - (lbl_8036A3F4 * temp_f4);
    M2C_FIELD(temp_r31, f32 *, 0x40) = (f32) ((temp_f2_2 * (temp_f1_5 / var_f4)) + M2C_FIELD(arg0, f32 *, 0x30));
    M2C_FIELD(temp_r31, f32 *, 0x44) = (f32) ((temp_f2_2 * temp_f30) + M2C_FIELD(arg0, f32 *, 0x34));
}

void fn_801285C4(void *arg0) {
    f32 fn_801099A0(s32, M2C_UNK);
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x30) = fn_801099A0(temp_r31, 0);
    M2C_FIELD(arg0, f32 *, 0x34) = fn_801099A0(temp_r31, 1);
}

void fn_80128618(void *arg0) {
    void *p;
    f32 a;
    f32 b;

    p = *(void **)((u8 *)arg0 + 0x18);
    a = *(f32 *)((u8 *)arg0 + 0x34);
    b = *(f32 *)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)p + 0x40) = b;
    *(f32 *)((u8 *)p + 0x44) = a;
}

void fn_801286F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) & ~arg1);
}

void fn_80128708(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 8) = arg1;
}

s32 fn_80128710(void) {
    return 0;
}

u8 fn_80128718(void *arg0, s32 arg1) {
    void fn_800FB96C(s32, s8, s8, void *, s8, s8, s8, s32);
    u8 fn_801025BC(s16 *, s16 *);
    extern void *lbl_8032B3C0;
    s16 sp12;
    s16 sp10;
    s32 sp8;

    if (!(((u8)(*(u8 *)((char *)arg0 + 0x1A4) >> 5U)) & 7)) {
        return 0U;
    }
    if (fn_801025BC(&sp12, &sp10) != 0) {
        sp8 = 0;
        fn_800FB96C(4, (s8)sp12, (s8)sp10, arg0, (s8)sp12, (s8)sp10, (s8)((char *)arg1 + 4), 0);
    }
    return *(u8 *)((char *)lbl_8032B3C0 + 0x21C);
}

s32 fn_801287B8(void) {
    return 0;
}

u8 fn_801287C0(void) {
    return 0;
}

u8 fn_80129104(void *arg0) {
    typedef struct {
        char *name;
        u32 key;
        u8 (*fn)(void *, s32);
    } Tbl;
    extern Tbl lbl_802909F8[];
    extern u8 lbl_8032B3C0[];
    s32 fn_801001F0();
    s32 fn_80092198();
    u8 fn_80093218(void *, u32);
    Tbl *e;
    u32 k;
    s32 t;
    s32 i;
    u8 *p;

    if ((lbl_8032B3C0[1] & 2) || (M2C_FIELD(arg0, u32 *, 0x254) & 0x03000000)) {
        return 0;
    }
    if (fn_801287C0() == 0) {
        for (i = 0, p = (u8 *) arg0; i < 4; i++, p += 8) {
            if (M2C_FIELD(p, u32 *, 0x1ec) == 0) {
                break;
            }
            t = fn_801001F0(M2C_FIELD(p, u32 *, 0x1ec));
            if ((u8) t != 0 && i == fn_80092198(arg0, t)) {
                k = M2C_FIELD(p, u32 *, 0x1ec);
                if (fn_80093218(arg0, k) != 0) {
                    e = lbl_802909F8;
                    while (e->key != 0 && (e->key != k || e->fn == NULL)) {
                        e++;
                    }
                    if (e->key == 0) {
                        e = NULL;
                    }
                } else {
                    e = NULL;
                }
                if (e != NULL && e->fn(arg0, i) != 0) {
                    break;
                }
            }
        }
    }
    return lbl_8032B3C0[0x21c];
}

void fn_80129374(void) {
    u32 fn_80019E04(u32);
    extern u32 lbl_802909F8[48];
    u32 *p;

    for (p = lbl_802909F8; p[0] != 0; p += 3) {
        p[1] = fn_80019E04(p[0]);
    }
}

void fn_801293C0(void) {
    void fn_8000BF00(void *);
    extern u8 lbl_80290A40[];
    s32 base;

    base = (s32)lbl_80290A40;
    fn_8000BF00((void *)(base + 0x1BC));
    fn_8000BF00((void *)(base + 0x190));
    fn_8000BF00((void *)(base + 0x164));
    fn_8000BF00((void *)(base + 0x130));
    fn_8000BF00((void *)(base + 0xFC));
    fn_8000BF00((void *)(base + 0xA0));
    fn_8000BF00((void *)(base + 0x18));
    fn_8000BF00((void *)(base + 0x60));
}

void fn_8012942C(s32 arg0, s32 arg1) {
    extern u8 lbl_80290BFC[];
    void *fn_8000CAA0(u8 *, s32);
    s32 *obj;
    obj = (s32 *)fn_8000CAA0(lbl_80290BFC, arg1);
    obj[0x30 / 4] = arg0;
}

void fn_80129464(void *arg0) {
    f32 fn_80023068(void *, void *, f32, f32, f32);
    M2C_UNK fn_800498A4(void *, void *, M2C_UNK);
    M2C_UNK fn_800536B0(s32, f32, f32, f32);
    s32 fn_80053C30(void *, void *);
    extern u8 lbl_80275740[0x200];
    extern u8 lbl_802CA518[0x100000];
    extern f32 lbl_8036A410;
    extern f64 lbl_8036A418;
    f32 temp_f31;
    f32 temp_f30;
    s32 temp_r30_2;
    s32 temp_r30;
    s32 temp_r31;
    void *temp_r3;

    temp_r3 = *(void **)((char *)arg0 + 0x30);
    temp_r31 = (s8)*(u8 *)temp_r3;
    temp_r30 = (s8)*((u8 *)temp_r3 + 1);
    fn_800498A4(temp_r3, arg0, 0);
    temp_r30_2 = fn_80053C30(lbl_80275740 + 0x15B, arg0);
    temp_f31 = lbl_8036A410 + (f32)temp_r30;
    temp_f30 = lbl_8036A410 + (f32)temp_r31;
    fn_800536B0(temp_r30_2, temp_f30, temp_f31, fn_80023068(lbl_802CA518, lbl_802CA518, temp_f30, temp_f31, lbl_8036A410));
}

void fn_8012955C(void) {
    extern u16 lbl_80275740[];
    fn_800558D8((u8 *)lbl_80275740 + 0x15B);
}

void fn_80129588(s32 arg0, u32 arg1) {
    void *fn_8000CAA0(void *);
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80290BA4[];
    void *var_r3;

    if (arg1 != 0U) {
        var_r3 = fn_8000CAA0(lbl_80290BA4);
    } else {
        var_r3 = fn_8000CAF0(lbl_80290BA4, 3);
    }
    *(s32 *)((char *)var_r3 + 0x30) = arg0;
}

void fn_801295DC(void *arg0) {
    u8 fn_80040824();
    M2C_UNK fn_80049B1C(s32, M2C_UNK);
    if (fn_80040824() != 0) {
        fn_80049B1C(M2C_FIELD(arg0, s32 *, 0x30), 1);
    }
}

void fn_80129708(s32 arg0, u32 arg1) {
    void *fn_8000CAA0(void *);
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80290BA4[];
    void *var_r3;

    if (arg1 != 0U) {
        var_r3 = fn_8000CAA0(lbl_80290BA4);
    } else {
        var_r3 = fn_8000CAF0(lbl_80290BA4, 3);
    }
    *(s32 *)((char *)var_r3 + 0x30) = arg0;
}

void fn_8012975C(void *arg0) {
    u8 fn_80040824();
    M2C_UNK fn_80049B78(s32, M2C_UNK);
    if (fn_80040824() != 0) {
        fn_80049B78(M2C_FIELD(arg0, s32 *, 0x30), 1);
    }
}

void fn_8012979C(void) {
    // Function body is not provided in the original assembly. Based on analysis and context,
    // we make a best guess. A placeholder implementation for now; this must be filled with 
    // correct logic that matches assembly.
}

void fn_80129888(void *arg0, void *arg1)
{
    extern u8 lbl_80290B70[];

    extern void *fn_8000CAA0(void *, void *);
    extern void *fn_8000CAF0(void *, s32);
    extern void *fn_80040844(void);
    extern s32 fn_80046400(void *, void *, void *);

    u8 *entry;
    void *result;

    if (arg1 != 0) {
        entry = (u8 *)fn_8000CAA0(lbl_80290B70, arg1);
    } else {
        entry = (u8 *)fn_8000CAF0(lbl_80290B70, 3);
    }

    result = fn_80040844();

    *(s32 *)(entry + 0x50) =
        fn_80046400(result, arg0, entry + 0x30);
}

void fn_801298FC(void *arg0) {
    s32 temp_r3;
    s32 var_r30;
    s32 var_r29;

    if (fn_80040824() != 0) {
        var_r29 = (s32)arg0;
        var_r30 = 0;
loop_6:
        temp_r3 = *(s32 *)((char *)arg0 + 0x50);
        if (var_r30 < temp_r3) {
            if (var_r30 == (temp_r3 - 1)) {
                fn_80049BD4(1);
            } else {
                fn_80049BD4(0);
            }
            var_r30 += 1;
            arg0 = (char *)arg0 + 0x4;
            goto loop_6;
        }
    }
}

void fn_80129984(s32 arg0, s32 arg1) {
    extern u32 fn_801090C0(u32);
    void *fn_8000CAF0(void *, u32);
    extern M2C_UNK lbl_802905C0;
    
    s32 temp_r3;
    void *temp_r3_2;
    s16 sp12;
    s16 sp10;

    temp_r3 = fn_801090C0(0);
    if (temp_r3 != 0U) {
        temp_r3_2 = fn_8000CAF0(&lbl_802905C0, temp_r3);
    } else {
        temp_r3_2 = NULL;
    }
    if (temp_r3_2 != NULL) {
        *(s32 *)((char *)temp_r3_2 + 0x38) = arg0;
        *(s32 *)((char *)temp_r3_2 + 0x40) = 0;
        *(s32 *)((char *)temp_r3_2 + 0x44) = 1;
        *(f32 *)((char *)temp_r3_2 + 0x3C) = (f32)arg1;
        
        if (fn_801025BC(&sp12, &sp10) != 0) {
            *(s32 *)((char *)temp_r3_2 + 0x48) = sp12;
            *(s32 *)((char *)temp_r3_2 + 0x4C) = sp10;
        }
    }
}

void fn_80129A48(void *arg0) {
    void *entry;
    char *walk;
    s32 i;

    *(s32 *)((char *)arg0 + 0x54) = 0;
    walk = arg0;
    for (i = 0; i < *(s32 *)((char *)arg0 + 0x50);) {
        entry = *(void **)(walk + 0x30);
        walk += 4;
        i += 1;
        *(u8 *)((char *)entry + 2) &= 0xFC;
    }
}

void fn_80129A84(void *arg0, void *arg1)
{
    extern u8 lbl_80290B3C[];

    extern void *fn_8000CAA0(void *, void *);
    extern void *fn_8000CAF0(void *, s32);
    extern void *fn_80040844(void);
    extern s32 fn_80046400(void *, void *, void *);

    u8 *entry;
    void *result;

    if (arg1 != 0) {
        entry = (u8 *)fn_8000CAA0(lbl_80290B3C, arg1);
    } else {
        entry = (u8 *)fn_8000CAF0(lbl_80290B3C, 3);
    }

    result = fn_80040844();

    *(s32 *)(entry + 0x50) =
        fn_80046400(result, arg0, entry + 0x30);
}

void fn_80129AF8(void *arg0) {
    if (fn_80040824() != 0) {
        s32 i;
        s32 count = *(s32 *)((char *)arg0 + 0x50);
        for (i = 0; i < count; i++) {
            if (i == count - 1) {
                fn_80049C30(1);
            } else {
                fn_80049C30(0);
            }
        }
    }
}

void fn_80129C44(void *arg0) {
    void *fn_80040844(void);
    void fn_80044450(void *, s32);
    void fn_80016180(void);
    s32 i;
    u8 *p;
    void *entry;

    p = (u8 *)arg0;
    i = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = 0;
    goto check;
loop:
    entry = *(void **)(p + 0x30);
    p += 4;
    i += 1;
    *(u8 *)((u8 *)entry + 2) |= 2;
check:
    if (i < *(s32 *)((u8 *)arg0 + 0x50)) {
        goto loop;
    }
    fn_80044450(fn_80040844(), 1);
    fn_80016180();
}

#pragma use_lmw_stmw on
void fn_80129CA8(s32 arg0, s32 arg1, u8 arg2, s32 arg3, s32 arg4, u32 arg5) {
    void fn_800056A0(s32);
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, s32);
    void fn_8001EEEC(void *);
    void *fn_80040844(void);
    void *fn_8004721C(void *, s32, s32, s32, s32);
    void fn_80049CB4(void *, void *);
    void fn_80049D30(void *);
    void fn_800558D8(void *, void *, void *);
    void *fn_800C45B8(s32, void *, s32);
    void fn_8010FE08(void *, s8, s8, s32);
    void fn_8010FEEC(void *, s8, s8, s32, s32);
    void fn_80201FC4(void *);
    void fn_80234450(void *, s32);
    extern u8 lbl_80275740[];
    extern u8 lbl_80290AE0[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_8032BB58[0x200];
    extern u32 lbl_8036A408;
    extern f32 lbl_8036A420;
    extern f32 lbl_8036A42C;
    extern f32 lbl_8036A430;
    u32 sp8;
    void *obj;
    void *node;
    s32 x;
    s32 y;
    s32 a3;
    s32 a4;
    u32 a5;
    s32 dx;
    s32 dy;
    f32 f42c;
    f32 f420;
    f32 f430;

    a3 = arg3;
    a4 = arg4;
    a5 = arg5;
    switch (arg2) {
    case 1:
        dx = -1;
        break;
    case 2:
        dx = 1;
        break;
    default:
        dx = 0;
        break;
    }
    x = arg0 + dx;
    switch (arg2) {
    case 4:
        dy = 1;
        break;
    case 8:
        dy = -1;
        break;
    default:
        dy = 0;
        break;
    }
    y = arg1 + dy;
    fn_8010FE08(lbl_8032BB58, x - 1, y, 0xA);
    fn_8010FE08(lbl_8032BB58, x + 1, y, 0xA);
    fn_8010FE08(lbl_8032BB58, x, y - 1, 0xA);
    fn_8010FE08(lbl_8032BB58, x, y + 1, 0xA);
    fn_8010FEEC(lbl_8032BB58, x, y, 0x27, 0);
    obj = fn_8004721C(fn_80040844(), x, y, 0x10000, 0);
    if (obj == NULL) {
        fn_800056A0(0);
        return;
    }
    if (a5 != 0) {
        node = fn_8000CAA0(lbl_80290AE0, a5);
    } else {
        node = fn_8000CAF0(lbl_80290AE0, 3);
    }
    *(void **)((u8 *)node + 0x30) = fn_800C45B8(-0xAC, lbl_80275740 + 0x164, 0);
    f42c = lbl_8036A42C;
    f420 = lbl_8036A420;
    f430 = lbl_8036A430;
    *(void **)*(void **)((u8 *)node + 0x30) = obj;
    *(s32 *)((u8 *)*(void **)((u8 *)node + 0x30) + 0x34) = a4;
    *(f32 *)((u8 *)*(void **)((u8 *)node + 0x30) + 0x10) = (f32)(s8)*(u8 *)obj;
    *(f32 *)((u8 *)*(void **)((u8 *)node + 0x30) + 0x14) = (f32)(s8)*((u8 *)obj + 1);
    *(f32 *)((u8 *)*(void **)((u8 *)node + 0x30) + 0x18) = *(f32 *)((u8 *)obj + 0xC);
    *(f32 *)((u8 *)*(void **)((u8 *)node + 0x30) + 0x1C) = f42c;
    *(u8 *)((u8 *)*(void **)((u8 *)node + 0x30) + 0xB) = 0;
    *(f32 *)((u8 *)*(void **)((u8 *)node + 0x30) + 0x38) = f420;
    *(f32 *)((u8 *)*(void **)((u8 *)node + 0x30) + 0x2C) = f430;
    *(f32 *)((u8 *)*(void **)((u8 *)node + 0x30) + 0x30) = f420;
    fn_80201FC4((u8 *)*(void **)((u8 *)node + 0x30) + 0x3C);
    fn_80234450((u8 *)*(void **)((u8 *)node + 0x30) + 0x6C, a3);
    fn_8001EEEC((u8 *)*(void **)((u8 *)node + 0x30) + 0x6C);
    fn_80049D30(*(void **)*(void **)((u8 *)node + 0x30));
    sp8 = lbl_8036A408;
    fn_80049CB4(*(void **)*(void **)((u8 *)node + 0x30), &sp8);
    {
        void *child = *(void **)*(void **)((u8 *)node + 0x30);
        *(u8 *)((u8 *)child + 2) = (u8)(*(u8 *)((u8 *)child + 2) & 0xFE);
        *(s32 *)((u8 *)*(void **)((u8 *)node + 0x30) + 4) = *(s32 *)lbl_802EF4C8;
        fn_800558D8(lbl_80275740 + 0x165, *(void **)((u8 *)node + 0x30), child);
    }
}
void fn_80129F68(void *arg0) {
    M2C_UNK fn_80049174(s32, void *, s32 *, M2C_UNK);
    extern s32 lbl_8036A40C;
    s32 sp8;

    sp8 = lbl_8036A40C;
    fn_80049174(*M2C_FIELD(arg0, s32 **, 0x30), arg0, &sp8, 0xA);
}

#pragma use_lmw_stmw on
void fn_80129FA4(void *arg0) {
    void fn_80025624(s32, s32);
    void *fn_80040844(void);
    void fn_800498A4(void *, void *, s32, f32);
    void fn_800536B0(void *, f32, f32, f32);
    void *fn_80053AE8(void *, void *);
    void fn_80147578(void *, s32, f32, f32, f32);
    void fn_8018CFA4(s32, s32, s32, s32, void *);
    void fn_80201FC4(void *);
    void fn_80202024(void *, void *, void *);
    void fn_802024D0(void *, void *, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_802025C0(void *, f32, f32, f32);
    extern u8 lbl_80275740[];
    extern s32 lbl_80367240;
    extern f32 lbl_8036A410;
    extern f32 lbl_8036A420;
    extern f32 lbl_8036A430;
    extern f32 lbl_8036A434;
    extern f32 lbl_8036A438;
    extern f32 lbl_8036A43C;
    extern f32 lbl_8036A440;
    extern f32 lbl_8036A444;
    extern f32 lbl_8036A448;
    u8 sp98[0x30];
    u8 sp68[0x30];
    u8 sp38[0x30];
    u8 sp8[0x30];
    void *self;
    void *sub;
    void *cam;
    void *child;
    f32 scale;
    f32 unk38;
    f32 unk2c;
    s32 ib;
    s32 ia;
    void *path;

    self = arg0;
    sub = *(void **)((u8 *)self + 0x30);
    *(f32 *)((u8 *)sub + 0x2C) = lbl_8036A420;
    sub = *(void **)((u8 *)self + 0x30);
    fn_80201FC4((u8 *)sub + 0x3C);
    cam = fn_80040844();
    sub = *(void **)((u8 *)self + 0x30);
    child = *(void **)sub;
    fn_802024D0(sp38, (u8 *)sub + 0x20, lbl_8036A434 * *(f32 *)((u8 *)sub + 0x2C));
    sub = *(void **)((u8 *)self + 0x30);
    fn_80202024(sp38, (u8 *)sub + 0x3C, (u8 *)sub + 0x3C);
    fn_80202540(sp68, lbl_8036A438, lbl_8036A43C, lbl_8036A438);
    sub = *(void **)((u8 *)self + 0x30);
    fn_80202024((u8 *)sub + 0x3C, sp68, sp38);
    fn_80202540(sp68, lbl_8036A440, lbl_8036A444, lbl_8036A440);
    fn_80202024(sp68, sp38, sp98);
    scale = *(f32 *)((u8 *)cam + 0x6C);
    fn_802025C0(sp8, scale, scale, scale);
    fn_80202024(sp8, sp98, sp98);
    sub = *(void **)((u8 *)self + 0x30);
    fn_80202540(sp68,
        lbl_8036A430 * (*(f32 *)((u8 *)sub + 0x10) * scale),
        lbl_8036A430 * (-*(f32 *)((u8 *)sub + 0x18) * scale),
        lbl_8036A430 * (*(f32 *)((u8 *)sub + 0x14) * scale));
    fn_80202024(sp68, sp98, sp98);
    fn_80202024((u8 *)cam + 0x70, sp98, (u8 *)child + 0x24);
    sub = *(void **)((u8 *)self + 0x30);
    unk38 = *(f32 *)((u8 *)sub + 0x38);
    unk2c = *(f32 *)((u8 *)sub + 0x2C);
    ia = (s32)(unk38 / lbl_8036A448);
    ib = (s32)((unk38 + unk2c) / lbl_8036A448);
    if (!(lbl_8036A420 != unk38 && ia == ib)) {
        fn_80147578(lbl_80275740 + 0x16F, 0x64,
            lbl_8036A410 + *(f32 *)((u8 *)sub + 0x10),
            lbl_8036A410 + *(f32 *)((u8 *)sub + 0x14),
            *(f32 *)((u8 *)sub + 0x18));
    }
    sub = *(void **)((u8 *)self + 0x30);
    unk38 = *(f32 *)((u8 *)sub + 0x38);
    *(f32 *)((u8 *)sub + 0x38) = unk38 + *(f32 *)((u8 *)sub + 0x2C);
    fn_800498A4(*(void **)(*(void **)((u8 *)self + 0x30)), self, 0, unk38);
    sub = *(void **)((u8 *)self + 0x30);
    fn_80147578(lbl_80275740 + 0x182, 0x64,
        lbl_8036A410 + *(f32 *)((u8 *)sub + 0x10),
        lbl_8036A410 + *(f32 *)((u8 *)sub + 0x14),
        *(f32 *)((u8 *)sub + 0x18));
    fn_80025624(lbl_80367240, 8);
    fn_8018CFA4(0x1E, 6, 2, 0, self);
    path = fn_80053AE8(lbl_80275740 + 0x165, self);
    sub = *(void **)((u8 *)self + 0x30);
    fn_800536B0(path,
        lbl_8036A410 + *(f32 *)((u8 *)sub + 0x10),
        lbl_8036A410 + *(f32 *)((u8 *)sub + 0x14),
        *(f32 *)((u8 *)sub + 0x18));
    *(f32 *)((u8 *)*(void **)((u8 *)path + 0x30) + 0x18) = lbl_8036A410;
}
#pragma use_lmw_stmw reset
void fn_8012A240(void) {
    M2C_UNK fn_8012A530();
    fn_8012A530();
}

void fn_8012A45C(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_80183E3C(s32, void *, void *, s32, s32, s32);
    s32 fn_8012AA68(void *);
    void *sub;
    u32 id;

    sub = *(void **)((u8 *)arg0 + 0x30);
    id = *(u32 *)((u8 *)sub + 4);
    if (id == 0) {
        fn_8000C070(arg0, 1);
        return;
    }
    fn_80183E3C(id, (void *)fn_8012AA68, arg0,
                (s32)*(f32 *)((u8 *)sub + 0x10),
                (s32)*(f32 *)((u8 *)sub + 0x14), 0);
}

void fn_8012A4CC(void *arg0) {
    u8 fn_80040824(void);
    void *fn_80040844(void);
    void fn_80044450(void *, s32);
    void fn_800C4588(void *);
    void *inner;

    inner = **(void ***)((u8 *)arg0 + 0x30);
    *(u8 *)((u8 *)inner + 2) |= 1;
    if ((u8)fn_80040824() != 0) {
        fn_80044450(fn_80040844(), 1);
    }
    fn_800C4588(*(void **)((u8 *)arg0 + 0x30));
    *(void **)((u8 *)arg0 + 0x30) = NULL;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_8012A530(void *arg0) {
    void fn_8000C188(void *);
    f32 fn_8001F53C(void *, s8, s8, s32);
    f32 fn_80023068(void *, f32, f32);
    void *fn_80040844(void);
    void fn_80147578(void *, s32, f32, f32, f32);
    void fn_8014CBD8(void *, f32, f32);
    void fn_80184688(void *, s32, s32, s32);
    void fn_80184BE8(void *, s32, s32, s32);
    void fn_80184C7C(void *, s32, s32, s32);
    void fn_80202024(void *, void *, void *);
    void fn_802024D0(void *, void *, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_802025C0(void *, f32, f32, f32);
    void fn_802029C4(void *, void *, void *);
    extern u32 lbl_80275734[3];
    extern u8 lbl_80275740[];
    extern u16 lbl_802B14E4[];
    extern u8 lbl_802CA518[];
    extern f32 lbl_8036A410;
    extern f64 lbl_8036A418;
    extern f32 lbl_8036A420;
    extern f32 lbl_8036A42C;
    extern f32 lbl_8036A430;
    extern f32 lbl_8036A434;
    extern f32 lbl_8036A438;
    extern f32 lbl_8036A43C;
    extern f32 lbl_8036A440;
    extern f32 lbl_8036A444;
    extern f32 lbl_8036A448;
    extern f32 lbl_8036A44C;
    extern f32 lbl_8036A450;
    extern f32 lbl_8036A454;
    extern f32 lbl_8036A458;
    extern f32 lbl_8036A45C;
    extern f32 lbl_8036A460;
    extern f32 lbl_8036A464;
    extern u8 lbl_80330708[0x578];

    u8 spD4[0x30];
    u8 spA4[0x30];
    u8 sp74[0x30];
    u8 sp44[0x30];
    u8 sp14[0x30];
    u32 vec[3];
    s32 oldX;
    s32 oldY;
    s32 newX;
    s32 newY;
    void *self;
    void *sub;
    f32 scale;
    f32 z;
    void *cam;
    void *child;
    void *unit;
    f32 unk38;
    s32 ia;
    s32 ib;
    void (*cb)(s32, s32, void *);
    u8 id;
    f32 t;
    f32 x;
    f32 y;
    f32 vx;
    f32 vz;

    self = arg0;
    vec[0] = lbl_80275734[0];
    vec[1] = lbl_80275734[1];
    vec[2] = lbl_80275734[2];
    sub = *(void **)((u8 *)self + 0x30);
    fn_802024D0(spD4, (u8 *)sub + 0x20, lbl_8036A44C);
    fn_802029C4(spD4, vec, vec);

    {
        f32 c;
        sub = *(void **)((u8 *)self + 0x30);
        scale = lbl_8036A450 * *(f32 *)((u8 *)sub + 0x2C);
        vx = *(f32 *)&vec[0];
        x = *(f32 *)((u8 *)sub + 0x10);
        vz = *(f32 *)&vec[2];
        scale = scale / lbl_8036A454;
        y = *(f32 *)((u8 *)sub + 0x14);
        c = lbl_8036A410;
        vx = vx * scale;
        oldX = (s32)(c + x);
        oldY = (s32)(c + y);
        *(f32 *)((u8 *)sub + 0x10) = x + vx;
        vz = vz * scale;
        sub = *(void **)((u8 *)self + 0x30);
        *(f32 *)((u8 *)sub + 0x14) = *(f32 *)((u8 *)sub + 0x14) + vz;

        sub = *(void **)((u8 *)self + 0x30);
        {
            s32 tx = (s32)(c + *(f32 *)((u8 *)sub + 0x10));
            s32 ty = (s32)(c + *(f32 *)((u8 *)sub + 0x14));
            id = *((u8 *)sub + 0xA);
            newX = tx;
            newY = ty;
            *(f32 *)((u8 *)*(void **)((u8 *)self + 0x30) + 0x30) =
                lbl_8036A458 * fn_8001F53C(lbl_802CA518, (s8)tx, (s8)ty, id);
        }
    }

    sub = *(void **)((u8 *)self + 0x30);
    *(f32 *)((u8 *)sub + 0x2C) = *(f32 *)((u8 *)sub + 0x2C) + *(f32 *)((u8 *)sub + 0x30);
    sub = *(void **)((u8 *)self + 0x30);
    if (*(f32 *)((u8 *)sub + 0x2C) > lbl_8036A45C) {
        *(f32 *)((u8 *)sub + 0x2C) = lbl_8036A45C;
    }
    sub = *(void **)((u8 *)self + 0x30);
    if (*(f32 *)((u8 *)sub + 0x2C) < lbl_8036A430) {
        *(f32 *)((u8 *)sub + 0x2C) = lbl_8036A430;
    }

    sub = *(void **)((u8 *)self + 0x30);
    if ((s32)*(f32 *)((u8 *)sub + 0x10) > (s32)*((u8 *)sub + 0xE)
        || (s32)*(f32 *)((u8 *)sub + 0x14) > (s32)*((u8 *)sub + 0xF)
        || (s32)(lbl_8036A460 + *(f32 *)((u8 *)sub + 0x10)) < (s32)*((u8 *)sub + 0xE)
        || (s32)(lbl_8036A460 + *(f32 *)((u8 *)sub + 0x14)) < (s32)*((u8 *)sub + 0xF)) {
        {
            u8 *p = (u8 *)sub + *((u8 *)sub + 0xB);
            if ((s32)p[0x6C] == 0x10) {
                *(f32 *)((u8 *)sub + 0x10) = (f32)(s32)*((u8 *)sub + 0xC);
                sub = *(void **)((u8 *)self + 0x30);
                *(f32 *)((u8 *)sub + 0x14) = (f32)(s32)*((u8 *)sub + 0xD);
            }
        }
        fn_8000C188(self);
    }

    if (oldX != newX || oldY != newY) {
        sub = *(void **)((u8 *)self + 0x30);
        cb = *(void (**)(s32, s32, void *))((u8 *)sub + 0x34);
        if (cb != 0) {
            cb(newX, newY, self);
        } else {
            id = *(u8 *)(lbl_802CA518 + ((s8)newY << 6) + (s8)newX + 0xD);
            if (id != 0) {
                unit = (u8 *)lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (unit != 0) {
                fn_80184C7C(unit, 9, 8, 0);
                fn_80184BE8(unit, 0, 8, 0);
                fn_80184688(unit, 1, 2, 0);
            }
        }
    }

    sub = *(void **)((u8 *)self + 0x30);
    z = fn_80023068(lbl_802CA518,
        lbl_8036A410 + *(f32 *)((u8 *)sub + 0x10),
        lbl_8036A410 + *(f32 *)((u8 *)sub + 0x14));
    sub = *(void **)((u8 *)self + 0x30);
    if (*(f32 *)((u8 *)sub + 0x18) < z) {
        *(f32 *)((u8 *)sub + 0x1C) = *(f32 *)((u8 *)sub + 0x1C) * lbl_8036A464;
    } else {
        *(f32 *)((u8 *)sub + 0x1C) = lbl_8036A42C;
    }
    sub = *(void **)((u8 *)self + 0x30);
    *(f32 *)((u8 *)sub + 0x18) = *(f32 *)((u8 *)sub + 0x18) + *(f32 *)((u8 *)sub + 0x1C);
    sub = *(void **)((u8 *)self + 0x30);
    if (*(f32 *)((u8 *)sub + 0x18) > z) {
        *(f32 *)((u8 *)sub + 0x18) = z;
    }

    {
        void *keep = (void *)newY;
        cam = fn_80040844();
        sub = *(void **)((u8 *)self + 0x30);
        child = *(void **)sub;
        fn_802024D0(sp44, (u8 *)sub + 0x20, lbl_8036A434 * *(f32 *)((u8 *)sub + 0x2C));
        sub = *(void **)((u8 *)self + 0x30);
        fn_80202024(sp44, (u8 *)sub + 0x3C, (u8 *)sub + 0x3C);
        fn_80202540(sp74, lbl_8036A438, lbl_8036A43C, lbl_8036A438);
        sub = *(void **)((u8 *)self + 0x30);
        fn_80202024((u8 *)sub + 0x3C, sp74, sp44);
        fn_80202540(sp74, lbl_8036A440, lbl_8036A444, lbl_8036A440);
        fn_80202024(sp74, sp44, spA4);
        t = *(f32 *)((u8 *)cam + 0x6C);
        fn_802025C0(sp14, t, t, t);
        fn_80202024(sp14, spA4, spA4);
        sub = *(void **)((u8 *)self + 0x30);
        fn_80202540(sp74,
            lbl_8036A430 * (*(f32 *)((u8 *)sub + 0x10) * t),
            lbl_8036A430 * (-*(f32 *)((u8 *)sub + 0x18) * t),
            lbl_8036A430 * (*(f32 *)((u8 *)sub + 0x14) * t));
        fn_80202024(sp74, spA4, spA4);
        fn_80202024((u8 *)cam + 0x70, spA4, (u8 *)child + 0x24);
        (void)keep;
    }

    sub = *(void **)((u8 *)self + 0x30);
    unk38 = *(f32 *)((u8 *)sub + 0x38);
    ia = (s32)(unk38 / lbl_8036A448);
    ib = (s32)((unk38 + *(f32 *)((u8 *)sub + 0x2C)) / lbl_8036A448);
    if (lbl_8036A420 == unk38 || ia != ib) {
        fn_80147578(lbl_80275740 + 0x16F, 0x64,
            lbl_8036A410 + *(f32 *)((u8 *)sub + 0x10),
            lbl_8036A410 + *(f32 *)((u8 *)sub + 0x14),
            *(f32 *)((u8 *)sub + 0x18));
    }
    sub = *(void **)((u8 *)self + 0x30);
    *(f32 *)((u8 *)sub + 0x38) = *(f32 *)((u8 *)sub + 0x38) + *(f32 *)((u8 *)sub + 0x2C);
    sub = *(void **)((u8 *)self + 0x30);
    fn_8014CBD8(lbl_80330708,
        *(f32 *)((u8 *)sub + 0x10),
        *(f32 *)((u8 *)sub + 0x14));
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

s32 fn_8012AA68(void *arg0) {
    void fn_8000C070(void *, s32);
    fn_8000C070(arg0, 1);
    return 1;
}

void fn_8012ABAC(void *arg0) {
    if (fn_80049D58() != 0) {
        s32 temp_r3;
        if (arg0 == 0) {
            temp_r3 = fn_8000CAF0(0x3, arg0);
        } else {
            temp_r3 = fn_8000CAA0(0x81, arg0);
        }
        *(s32*)((u8*)arg0 + 0x30) = temp_r3;
    } else {
        *(s32*)((u8*)arg0 + 0x30) = 0;
    }
}

void fn_8012AC88(void *arg0) {
    f32 fn_80023068(void *, f32, f32);
    void fn_80053C30(void *, s32);
    void fn_800536B0(f32, f32, f32);
    void fn_80147578(void *, s32, f32, f32, f32);
    extern u8 lbl_80275740[];
    extern u8 lbl_802CA518[];
    extern f32 lbl_8036A410;
    u8 *temp_r6;
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;

    temp_r6 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_f30 = lbl_8036A410 + (f32)(s8)temp_r6[0];
    temp_f31 = lbl_8036A410 + (f32)(s8)temp_r6[1];
    temp_f29 = fn_80023068(lbl_802CA518, temp_f30, temp_f31);
    fn_80053C30(lbl_80275740 + 0x165, 0);
    fn_800536B0(temp_f30, temp_f31, temp_f29);
    fn_80147578(lbl_80275740 + 0x196, 0x64, temp_f30, temp_f31, temp_f29);
}

void fn_8012AD80(void) {
    extern u16 lbl_80275740[];
    fn_800558D8((u8 *)lbl_80275740 + 0x165);
}

#pragma use_lmw_stmw on
void fn_8012ADAC(s32 arg0, s32 arg1, u32 arg2) {
    extern u8 lbl_80290A58[72];
    extern u8 lbl_80330708[1400];

    void *fn_800056A0(void *);
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, s32);
    void fn_80040844(void);
    void *fn_80046F14(s32, s32, u32, u32);
    s32 fn_8004721C(s8, s8, u32, u32);
    void fn_8014CBD8(void *, f32, f32);

    s32 t31;
    void *t30;
    void *r6;

    fn_80040844();
    t30 = fn_80046F14(arg0, arg1, 0xA00, 0);
    if (t30 == NULL) {
        fn_800056A0(0);
        return;
    }
    arg0 = *(s8 *)t30;
    arg1 = *((s8 *)t30 + 1);
    fn_80040844();
    t31 = fn_8004721C((s8)arg0, (s8)arg1, 0x20000, 0);
    if (t31 == 0) {
        fn_800056A0(0);
        return;
    }
    if (arg2 != 0) {
        r6 = fn_8000CAA0(lbl_80290A58, arg2);
    } else {
        r6 = fn_8000CAF0(lbl_80290A58, 3);
    }
    *(void **)((u8 *)r6 + 0x38) = t30;
    *(s32 *)((u8 *)r6 + 0x3c) = t31;
    *(s32 *)((u8 *)r6 + 0x30) = arg0;
    *(s32 *)((u8 *)r6 + 0x34) = arg1;
    fn_8014CBD8(lbl_80330708, (f32)arg0, (f32)arg1);
}
#pragma use_lmw_stmw reset
void fn_8012AEC4(void *arg0) {
    u8 fn_80040824(void);
    void *fn_80040844(void);
    void fn_80044450(void *, s32);
    void fn_8005F7B0(void *, s32);
    void fn_80049D08(void *);
    void *p;

    p = *(void **)((u8 *)arg0 + 0x38);
    fn_8005F7B0((u8 *)p + 0x14, 0);
    p = *(void **)((u8 *)arg0 + 0x38);
    *(u8 *)((u8 *)p + 2) |= 1;
    p = *(void **)((u8 *)arg0 + 0x3C);
    fn_8005F7B0((u8 *)p + 0x14, 0xFF);
    p = *(void **)((u8 *)arg0 + 0x3C);
    *(u8 *)((u8 *)p + 2) &= ~1;
    fn_80049D08(*(void **)((u8 *)arg0 + 0x3C));
    if ((u8)fn_80040824() != 0) {
        fn_80044450(fn_80040844(), 1);
    }
}

void fn_8012AF4C(void *arg0) {
    void fn_8000C188(void *);
    f32 fn_80059F64(f32, f32, f32, f32);
    void fn_8005F7B0(void *, s32);
    void fn_80202024(void *, void *, void *);
    void fn_802025C0(void *, f32, f32, f32);
    void fn_80202300(void *, s32, f32);
    void fn_80202540(void *, f32, f32, f32);
    f64 fn_802380D0(f32);
    f64 fn_80238638(f32);
    extern f32 lbl_8036A410;
    extern f32 lbl_8036A420;
    extern f32 lbl_8036A424;
    extern f32 lbl_8036A434;
    extern f32 lbl_8036A460;
    extern f32 lbl_8036A468;
    extern f32 lbl_8036A46C;
    extern f32 lbl_8036A474;
    extern f32 lbl_8036A470;
    extern f32 lbl_8036A478;
    struct Sub { s8 bx; s8 by; u8 pad[6]; f32 scale; f32 z; };

    u8 sp98[0x30];
    u8 sp68[0x30];
    u8 sp38[0x30];
    u8 sp8[0x30];
    register void *node;
    register f32 x;
    struct Sub *sub;
    f32 scale;
    f32 z;
    f32 y;
    register void *self;

    self = arg0;
    *(s32 *)((u8 *)self + 0x40) = *(s32 *)((u8 *)self + 0x40) + 1;
    sub = *(struct Sub **)((u8 *)self + 0x38);
    node = (u8 *)sub + 0x14;
    scale = sub->scale;
    z = sub->z;
    y = (f32)sub->by;
    x = (f32)sub->bx;

    z += fn_80059F64(lbl_8036A420, lbl_8036A460, lbl_8036A468, (f32)*(s32 *)((u8 *)self + 0x40));
    x = (lbl_8036A46C * (f32)fn_80238638((f32)*(s32 *)((u8 *)self + 0x40))) + x;
    y = (lbl_8036A46C * (f32)fn_802380D0((f32)*(s32 *)((u8 *)self + 0x40))) + y;

    fn_802025C0(sp98, lbl_8036A470, lbl_8036A470, lbl_8036A470);
    fn_80202300(sp68, 0x58, lbl_8036A474);
    fn_80202024(sp68, sp98, sp8);
    fn_80202540(sp38, lbl_8036A478, lbl_8036A478, lbl_8036A420);
    fn_80202024(sp38, sp8, sp8);
    fn_80202300(sp68, 0x5A, lbl_8036A434 * scale);
    fn_80202024(sp68, sp8, sp8);
    fn_80202540(sp38, lbl_8036A410, lbl_8036A410, lbl_8036A420);
    fn_80202024(sp38, sp8, sp8);
    fn_80202540(sp38, x, y, z);
    fn_80202024(sp38, sp8, (u8 *)node + 0x10);

    fn_8005F7B0(node, fn_80059F64(lbl_8036A424, lbl_8036A420, lbl_8036A468, (f32)*(s32 *)((u8 *)self + 0x40)));
    node = (u8 *)*(void **)((u8 *)self + 0x3C) + 0x14;
    fn_8005F7B0(node, fn_80059F64(lbl_8036A420, lbl_8036A424, lbl_8036A468, (f32)*(s32 *)((u8 *)self + 0x40)));

    if ((f32)*(s32 *)((u8 *)self + 0x40) >= lbl_8036A468) {
        fn_8000C188(self);
    }
}

void fn_8012B394(void) {
    extern u16 lbl_80275740[];
    fn_800558D8((u8 *)lbl_80275740 + 0x1a7);
}

void fn_8012B3C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 r = fn_80040844();
    r = fn_8004721C(r, arg0, arg1, 0x4200, 0);
    if ((u32)r != 0U) {
        fn_800498A4(r, arg2, 0);
    }
}

extern u8 lbl_80290A40[16];
void fn_8012B42C(s32 arg0) {
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_80290A40[16];
    fn_8000CAF0(lbl_80290A40, arg0);
}

void fn_8012B458(void *arg0) {
    M2C_UNK fn_8000C60C(s32);
    extern s32 lbl_80367110;
    if (lbl_80367110 & 1) {
        fn_8000C60C(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

#pragma use_lmw_stmw on
void fn_8012B554(void *arg0) {
    s32 fn_8000CEE4(s32);
    void fn_8007ADC8(s32);
    void *fn_8007BD30(s32, void *, s32, s32, s32, s32, void *);
    void **fn_8007C3F8(void);
    s32 fn_8007C400(void);

    void **list;
    u8 *p;
    s32 count;
    s32 i;
    void *sel;
    void *item;
    u8 flag;

    if (*(u8 *)((u8 *)arg0 + 0x41) != 0) {
        *(u8 *)((u8 *)arg0 + 0x41) = (*(u8 *)((u8 *)arg0 + 0x41) == 0);
        if (*(u8 *)((u8 *)arg0 + 0x41) != 0) {
            list = fn_8007C3F8();
            count = 0;
            i = count;
            p = (u8 *)list;
            for (; fn_8007C400() > i; ) {
                item = *(void **)p;
                flag = 0;
                if ((s8)*(u8 *)((u8 *)item + 3) == (s8)*(u8 *)((u8 *)item + 5)
                    && (s32)*(u8 *)((u8 *)item + 4) == 0x4C) {
                    flag = 1;
                }
                if (flag != 0) {
                    count += 1;
                }
                p += 0x20;
                i += 1;
            }
            count = fn_8000CEE4(count);
            p = (u8 *)list;
            i = 0;
            for (; fn_8007C400() > i; ) {
                item = *(void **)p;
                flag = 0;
                if ((s8)*(u8 *)((u8 *)item + 3) == (s8)*(u8 *)((u8 *)item + 5)
                    && (s32)*(u8 *)((u8 *)item + 4) == 0x4C) {
                    flag = 1;
                }
                if (flag != 0) {
                    count -= 1;
                    if (count == 0) {
                        sel = *(void **)((u8 *)list + (i << 5));
                        goto found1;
                    }
                }
                p += 0x20;
                i += 1;
            }
            sel = NULL;
        found1:
            *(void **)((u8 *)arg0 + 0x44) = fn_8007BD30(0, sel, 0xCC, 0x128, 0x81, 0, arg0);
            list = fn_8007C3F8();
            count = 0;
            i = count;
            p = (u8 *)list;
            for (; fn_8007C400() > i; ) {
                item = *(void **)p;
                flag = 0;
                if ((s8)*(u8 *)((u8 *)item + 3) == (s8)*(u8 *)((u8 *)item + 5)
                    && (s32)*(u8 *)((u8 *)item + 4) == 0x4C) {
                    flag = 1;
                }
                if (flag != 0) {
                    count += 1;
                }
                p += 0x20;
                i += 1;
            }
            count = fn_8000CEE4(count);
            p = (u8 *)list;
            i = 0;
            for (; fn_8007C400() > i; ) {
                item = *(void **)p;
                flag = 0;
                if ((s8)*(u8 *)((u8 *)item + 3) == (s8)*(u8 *)((u8 *)item + 5)
                    && (s32)*(u8 *)((u8 *)item + 4) == 0x4C) {
                    flag = 1;
                }
                if (flag != 0) {
                    count -= 1;
                    if (count == 0) {
                        sel = *(void **)((u8 *)list + (i << 5));
                        goto found2;
                    }
                }
                p += 0x20;
                i += 1;
            }
            sel = NULL;
        found2:
            *(void **)((u8 *)arg0 + 0x48) = fn_8007BD30(1, sel, 0x194, 0x128, 0x80, 0, arg0);
            *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x44) + 0x42) = 0xFF;
            *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x48) + 0x42) = 0xFF;
        } else {
            fn_8007ADC8(0);
            fn_8007ADC8(1);
            *(void **)((u8 *)arg0 + 0x48) = NULL;
            *(void **)((u8 *)arg0 + 0x44) = NULL;
        }
    }
}

#pragma use_lmw_stmw on
void fn_8012B7DC(void *arg0) {
    void fn_80007124(void *);
    void fn_80007698(u8);
    void fn_800076AC(s32, s32, s32, u8);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007858(f32, f32);
    void fn_80007870(f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8000C188(void *);
    s32 fn_8000CEE4(s32);
    void fn_8001003C(s16, s16, s32, s32, s32, void *, ...);
    void fn_80024398(void *, void *, s32);
    void fn_8007ADC8(s32);
    void *fn_8007BD30(s32, void *, s32, s32, s32, s32, void *);
    void **fn_8007C3F8(void);
    s32 fn_8007C400(void);
    void fn_80109EEC(void *);
    void fn_80231D94(void *, void *, ...);
    extern char lbl_802758F8[];
    extern s32 lbl_80367240;
    extern s32 lbl_80367A88;
    extern s32 lbl_80367A9C;
    extern f32 lbl_8036A480;
    extern f32 lbl_8036A484;
    extern f32 lbl_8036A488;
    extern f32 lbl_8036A48C;
    extern f32 lbl_8036A490;
    extern f32 lbl_8036A494;
    extern f32 lbl_8036A498;
    extern f32 lbl_8036A49C;
    extern f32 lbl_8036A4A0;
    extern f32 lbl_8036A4A4;
    extern f32 lbl_8036A4A8;
    extern f32 lbl_8036A4AC;
    extern f32 lbl_8036A4B0;
    extern f32 lbl_8036A4B4;
    extern f32 lbl_8036A4B8;
    extern f32 lbl_8036A4BC;
    extern f32 lbl_8036A4C0;
    extern f32 lbl_8036A4C4;

    char buf[0x40];
    void **list;
    u8 *p;
    s32 count;
    s32 i;
    void *sel;
    void *item;
    u8 flag;
    s32 n;
    s32 idx;
    s32 *table;
    s16 y;
    void *cam;
    void *pad;
    u8 *stick;
    s32 buttons;
    s32 prev;
    s32 held;
    f32 scale;
    f32 t;

    scale = lbl_8036A480;
    pad = (void *)lbl_80367240;
    if (*(s32 *)((u8 *)pad + 4) & 0x10) {
        f32 f488 = lbl_8036A488;
        f32 f48C = lbl_8036A48C;
        f32 f490 = lbl_8036A490;
        f32 f494 = lbl_8036A494;
        f64 conv_s;
        f64 conv_u;
        scale = lbl_8036A484;
        stick = *(u8 **)pad;
        cam = (void *)lbl_80367A88;
        t = *(f32 *)((u8 *)cam + 0x40);
        *(f32 *)((u8 *)cam + 0x40) = t - (scale * (f32)(s8)stick[2] * f488);
        pad = (void *)lbl_80367240;
        cam = (void *)lbl_80367A88;
        stick = *(u8 **)pad;
        t = *(f32 *)((u8 *)cam + 0x44);
        *(f32 *)((u8 *)cam + 0x44) = t + (scale * (f32)(s8)stick[3] * f488);
        pad = (void *)lbl_80367240;
        cam = (void *)lbl_80367A88;
        stick = *(u8 **)pad;
        t = *(f32 *)((u8 *)cam + 0x54);
        *(f32 *)((u8 *)cam + 0x54) = t - ((scale * (f32)stick[6]) / f48C);
        pad = (void *)lbl_80367240;
        cam = (void *)lbl_80367A88;
        stick = *(u8 **)pad;
        t = *(f32 *)((u8 *)cam + 0x54);
        *(f32 *)((u8 *)cam + 0x54) = t + ((scale * (f32)stick[7]) / f48C);
        cam = (void *)lbl_80367A88;
        if (*(f32 *)((u8 *)cam + 0x54) < f490) {
            *(f32 *)((u8 *)cam + 0x54) = f490;
        }
        cam = (void *)lbl_80367A88;
        *(f32 *)((u8 *)cam + 0x58) = *(f32 *)((u8 *)cam + 0x54);
        pad = (void *)lbl_80367240;
        cam = (void *)lbl_80367A88;
        stick = *(u8 **)pad;
        t = *(f32 *)((u8 *)cam + 0x5C);
        *(f32 *)((u8 *)cam + 0x5C) = t + (scale * (f32)(s8)stick[4] * f494);
        (void)conv_s;
        (void)conv_u;
    }

    pad = (void *)lbl_80367240;
    buttons = *(s32 *)((u8 *)pad + 4);
    prev = *(s32 *)((u8 *)pad + 8);
    if (buttons & (prev ^ buttons) & 0x1000) {
        cam = (void *)lbl_80367A88;
        *(f32 *)((u8 *)cam + 0x48) = lbl_8036A498;
        cam = (void *)lbl_80367A88;
        *(f32 *)((u8 *)cam + 0x44) = lbl_8036A498;
        cam = (void *)lbl_80367A88;
        *(f32 *)((u8 *)cam + 0x40) = lbl_8036A498;
        cam = (void *)lbl_80367A88;
        *(f32 *)((u8 *)cam + 0x58) = lbl_8036A480;
        cam = (void *)lbl_80367A88;
        *(f32 *)((u8 *)cam + 0x54) = lbl_8036A480;
        cam = (void *)lbl_80367A88;
        *(f32 *)((u8 *)cam + 0x5C) = lbl_8036A498;
        fn_80109EEC((void *)lbl_80367A88);
    }

    *(s16 *)((u8 *)arg0 + 0x4C) = *(s16 *)((u8 *)arg0 + 0x4C) - 1;
    if (*(s16 *)((u8 *)arg0 + 0x4C) < 0) {
        *(s16 *)((u8 *)arg0 + 0x4C) = 0;
    }
    if (*(s32 *)((u8 *)(void *)lbl_80367240 + 4) & 0x10) {
        *(s16 *)((u8 *)arg0 + 0x4C) = 0xFF;
    }

    if (*(s16 *)((u8 *)arg0 + 0x4C) != 0) {
        fn_8000A258();
        fn_80009D74(lbl_8036A498, lbl_8036A498, lbl_8036A498, lbl_8036A480);
        fn_8000A174(0, 0x13);
        fn_8000A248();
        cam = (void *)lbl_80367A88;
        fn_80231D94(buf, lbl_802758F8 + 0x2C,
                    (s32)*(f32 *)((u8 *)cam + 0x40),
                    (s32)*(f32 *)((u8 *)cam + 0x44));
        fn_80007898(7);
        fn_80007698((u8)*(s16 *)((u8 *)arg0 + 0x4C));
        fn_80007858(lbl_8036A49C, lbl_8036A49C);
        fn_80007124(buf);
        fn_80007884();
        cam = (void *)lbl_80367A88;
        fn_80231D94(buf, lbl_802758F8 + 0x39,
                    (s32)(lbl_8036A4A0 * *(f32 *)((u8 *)cam + 0x54)));
        fn_80007898(7);
        fn_80007698((u8)*(s16 *)((u8 *)arg0 + 0x4C));
        fn_80007858(lbl_8036A49C, lbl_8036A4A4);
        fn_80007124(buf);
        fn_80007884();
        cam = (void *)lbl_80367A88;
        fn_80231D94(buf, lbl_802758F8 + 0x45,
                    (s32)*(f32 *)((u8 *)cam + 0x5C));
        fn_80007898(7);
        fn_80007698((u8)*(s16 *)((u8 *)arg0 + 0x4C));
        fn_80007858(lbl_8036A49C, lbl_8036A4A8);
        fn_80007124(buf);
        fn_80007884();
        fn_8000A258();
        fn_80009D74(lbl_8036A498, lbl_8036A498, lbl_8036A4AC, lbl_8036A480);
        fn_8000A174(0, 0x10);
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8(lbl_8036A49C, lbl_8036A49C, lbl_8036A4B0, lbl_8036A4B4);
        fn_800076AC(0, 0, 0, (u8)*(s16 *)((u8 *)arg0 + 0x4C));
        fn_80007884();
    }

    pad = (void *)lbl_80367240;
    held = *(s32 *)((u8 *)pad + 0xC);
    if (held & 9) {
        *(s32 *)((u8 *)arg0 + 0x34) =
            *(s32 *)((u8 *)arg0 + 0x30) + (*(s32 *)((u8 *)arg0 + 0x38) - 1);
        *(s32 *)((u8 *)arg0 + 0x34) %=
            *(s32 *)((u8 *)arg0 + 0x38);
        fn_8000C188(arg0);
    } else if (held & 6) {
        *(s32 *)((u8 *)arg0 + 0x34) = *(s32 *)((u8 *)arg0 + 0x30) + 1;
        *(s32 *)((u8 *)arg0 + 0x34) %=
            *(s32 *)((u8 *)arg0 + 0x38);
        fn_8000C188(arg0);
    } else {
        buttons = *(s32 *)((u8 *)pad + 4);
        if ((u32)(buttons & 0x210) == 0x210U) {
            *(s32 *)((u8 *)arg0 + 0x34) = 0x270F;
            fn_8000C188(arg0);
        } else {
            prev = *(s32 *)((u8 *)pad + 8);
            if (buttons & (prev ^ buttons) & 0x400) {
                *(u8 *)((u8 *)arg0 + 0x40) =
                    *(u8 *)((u8 *)arg0 + 0x40) + 1;
            }
            pad = (void *)lbl_80367240;
            buttons = *(s32 *)((u8 *)pad + 4);
            prev = *(s32 *)((u8 *)pad + 8);
            if (buttons & (prev ^ buttons) & 0x800) {
                *(u8 *)((u8 *)arg0 + 0x41) =
                    (*(u8 *)((u8 *)arg0 + 0x41) == 0);
                if (*(u8 *)((u8 *)arg0 + 0x41) != 0) {
                    list = fn_8007C3F8();
                    count = 0;
                    i = count;
                    p = (u8 *)list;
                    for (; fn_8007C400() > i; ) {
                        item = *(void **)p;
                        flag = 0;
                        if ((s8)*(u8 *)((u8 *)item + 3) == (s8)*(u8 *)((u8 *)item + 5)
                            && (s32)*(u8 *)((u8 *)item + 4) == 0x4C) {
                            flag = 1;
                        }
                        if (flag != 0) {
                            count += 1;
                        }
                        p += 0x20;
                        i += 1;
                    }
                    count = fn_8000CEE4(count);
                    p = (u8 *)list;
                    i = 0;
                    for (; fn_8007C400() > i; ) {
                        item = *(void **)p;
                        flag = 0;
                        if ((s8)*(u8 *)((u8 *)item + 3) == (s8)*(u8 *)((u8 *)item + 5)
                            && (s32)*(u8 *)((u8 *)item + 4) == 0x4C) {
                            flag = 1;
                        }
                        if (flag != 0) {
                            count -= 1;
                            if (count == 0) {
                                sel = *(void **)((u8 *)list + (i << 5));
                                goto found1;
                            }
                        }
                        p += 0x20;
                        i += 1;
                    }
                    sel = NULL;
                found1:
                    *(void **)((u8 *)arg0 + 0x44) =
                        fn_8007BD30(0, sel, 0xCC, 0x128, 0x81, 0, arg0);
                    list = fn_8007C3F8();
                    count = 0;
                    i = count;
                    p = (u8 *)list;
                    for (; fn_8007C400() > i; ) {
                        item = *(void **)p;
                        flag = 0;
                        if ((s8)*(u8 *)((u8 *)item + 3) == (s8)*(u8 *)((u8 *)item + 5)
                            && (s32)*(u8 *)((u8 *)item + 4) == 0x4C) {
                            flag = 1;
                        }
                        if (flag != 0) {
                            count += 1;
                        }
                        p += 0x20;
                        i += 1;
                    }
                    count = fn_8000CEE4(count);
                    p = (u8 *)list;
                    i = 0;
                    for (; fn_8007C400() > i; ) {
                        item = *(void **)p;
                        flag = 0;
                        if ((s8)*(u8 *)((u8 *)item + 3) == (s8)*(u8 *)((u8 *)item + 5)
                            && (s32)*(u8 *)((u8 *)item + 4) == 0x4C) {
                            flag = 1;
                        }
                        if (flag != 0) {
                            count -= 1;
                            if (count == 0) {
                                sel = *(void **)((u8 *)list + (i << 5));
                                goto found2;
                            }
                        }
                        p += 0x20;
                        i += 1;
                    }
                    sel = NULL;
                found2:
                    *(void **)((u8 *)arg0 + 0x48) =
                        fn_8007BD30(1, sel, 0x194, 0x128, 0x80, 0, arg0);
                    *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x44) + 0x42) = 0xFF;
                    *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x48) + 0x42) = 0xFF;
                } else {
                    fn_8007ADC8(0);
                    fn_8007ADC8(1);
                    *(void **)((u8 *)arg0 + 0x48) = NULL;
                    *(void **)((u8 *)arg0 + 0x44) = NULL;
                }
            }
            pad = (void *)lbl_80367240;
            buttons = *(s32 *)((u8 *)pad + 4);
            prev = *(s32 *)((u8 *)pad + 8);
            if (buttons & (prev ^ buttons) & 0x100) {
                fn_80024398(&lbl_80367A9C, arg0, 0);
                return;
            }
        }
    }

    if (!(*(u8 *)((u8 *)arg0 + 0x40) & 1)) {
        fn_8000A258();
        fn_80009D74(lbl_8036A498, lbl_8036A498, lbl_8036A498, lbl_8036A480);
        fn_8000A174(0, 0x13);
        fn_8000A248();
        i = 0;
        y = 0x10;
        do {
            n = *(s32 *)((u8 *)arg0 + 0x38);
            table = *(s32 **)((u8 *)arg0 + 0x3C);
            idx = (*(s32 *)((u8 *)arg0 + 0x30) - 8 + i + n) % n;
            fn_8001003C(0x168, y, (u8)(i == 8), 0, 1, lbl_802758F8 + 0x4C,
                        idx + 1, n, table[idx] + 4, lbl_8036A480, lbl_8036A498);
            i += 1;
            y += 0x18;
        } while (i < 0x12);
        fn_8001003C(0xE0, 0x140, 1, 0, 1, lbl_802758F8 + 0x5A, lbl_8036A480, lbl_8036A498);
        fn_8001003C(0xE0, 0x158, 1, 0, 1, lbl_802758F8 + 0x64, lbl_8036A480, lbl_8036A498);
        fn_8001003C(0xE0, 0x170, 1, 0, 1, lbl_802758F8 + 0x6E, lbl_8036A480, lbl_8036A498);
        fn_8001003C(0xE0, 0x188, 1, 0, 1, lbl_802758F8 + 0x7E, lbl_8036A480, lbl_8036A498);
        fn_8001003C(0xC8, 0x1A0, 1, 0, 1, lbl_802758F8 + 0x90, lbl_8036A480, lbl_8036A498);
        fn_8001003C(0x50, 0x140, 1, 0, 1, lbl_802758F8 + 0xA4, lbl_8036A480, lbl_8036A498);
        fn_8001003C(0x38, 0x158, 1, 0, 1, lbl_802758F8 + 0xAE, lbl_8036A480, lbl_8036A498);
        fn_8001003C(0x38, 0x170, 1, 0, 1, lbl_802758F8 + 0xC0, lbl_8036A480, lbl_8036A498);
        fn_8001003C(0x50, 0x188, 1, 0, 1, lbl_802758F8 + 0xD1, lbl_8036A480, lbl_8036A498);
        fn_8001003C(0x38, 0x1A0, 1, 0, 1, lbl_802758F8 + 0xDD, lbl_8036A480, lbl_8036A498);
        fn_8000A258();
        fn_80009D74(lbl_8036A498, lbl_8036A498, lbl_8036A4AC, lbl_8036A480);
        fn_8000A174(0, 0x10);
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8(lbl_8036A4B8, lbl_8036A498, lbl_8036A4BC, lbl_8036A4C0);
        fn_800076AC(0, 0, 0, 0xB4);
        fn_80007870(lbl_8036A4C4);
        fn_80007884();
    }
}
void fn_8012C2CC(void *arg0) {
    void fn_80109020(void *);
    void fn_8000C070(void *, s32);
    extern s32 lbl_80367A88;
    s32 temp_r0;
    void **table;

    table = *(void ***)((u8 *)arg0 + 0x3C);
    fn_80109020(table[*(s32 *)((u8 *)arg0 + 0x30)]);
    lbl_80367A88 = 0;
    temp_r0 = *(s32 *)((u8 *)arg0 + 0x34);
    if (temp_r0 == 0x270F) {
        fn_8000C070(arg0, 0x63);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x30) = temp_r0;
}

void fn_8012C330(void *arg0) {
    s32 idx;
    s32 *arr;

    idx = *(s32 *)((u8 *)arg0 + 0x30);
    arr = *(s32 **)((u8 *)arg0 + 0x3c);
    lbl_80367A88 = fn_80109180(arr[idx], 0);
}
#include "common.h"
#include "structs.h"

extern s32 lbl_80367A88;
