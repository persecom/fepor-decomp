/* Functions from 0x80127E94 to 0x8012C368, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_80290AA0[0x40];
extern u8 lbl_8032BB58[0x200];
extern u8 lbl_80330708[0x578];

extern s32 lbl_80367A88;

extern f32 lbl_8036A3C0;
extern f32 lbl_8036A3C4;
extern f32 lbl_8036A3C8;

void fn_80127E94(void *arg0) {
    void (**vtable)(void) = (void (**)(void))(*(int **)((char *)arg0 + 4));
    ((void (**)(void))vtable)[8]();
}

s32 fn_80127EC0(void) {
    extern u16 lbl_80275048[];
    s32 var = (u32)(&lbl_80275048[0x521]);
    fn_801475FC((u16*)var, 0x64);
    return 9;
}

void fn_80127EF4(void) {
    extern u16 lbl_80275048[];
    fn_8000E0E4(&lbl_80275048[0x580 / sizeof(u16)]);
}

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
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_80275048;
    fn_8000E0E4(&lbl_80275048 + 0x5C4);
}

void fn_80128134(void) {
    M2C_UNK fn_8000E0E4(void *);
    extern M2C_UNK lbl_80275048;
    fn_8000E0E4(&lbl_80275048 + 0x5CD);
}

void fn_80128160(s32 arg1, s32 arg2) {
    void *fn_8000CAF0(M2C_UNK *, u32, M2C_UNK *);
    u32 fn_801090C0();
    extern M2C_UNK lbl_802905C0;
    extern f32 lbl_8036A3C0;
    extern f32 lbl_8036A3C4;
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3 = fn_801090C0();
    if (temp_r3 != 0U) {
        temp_r3_2 = fn_8000CAF0(&lbl_802905C0, temp_r3, &lbl_802905C0);
        M2C_FIELD(temp_r3_2, s32 *, 0x38) = arg1;
        M2C_FIELD(temp_r3_2, f32 *, 0x3C) = (f32) arg2;
        M2C_FIELD(temp_r3_2, f32 *, 0x40) = (f32) lbl_8036A3C0;
        M2C_FIELD(temp_r3_2, f32 *, 0x44) = (f32) lbl_8036A3C4;
    }
}

void fn_80128268(s32 arg1, s32 arg2) {
    void *fn_8000CAF0(M2C_UNK *, u32, M2C_UNK *);
    u32 fn_801090C0();
    extern M2C_UNK lbl_802905C0;
    extern f32 lbl_8036A3C0;
    extern f32 lbl_8036A3C8;
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3 = fn_801090C0();
    if (temp_r3 != 0U) {
        temp_r3_2 = fn_8000CAF0(&lbl_802905C0, temp_r3, &lbl_802905C0);
        M2C_FIELD(temp_r3_2, s32 *, 0x38) = arg1;
        M2C_FIELD(temp_r3_2, f32 *, 0x3C) = (f32) arg2;
        M2C_FIELD(temp_r3_2, f32 *, 0x40) = (f32) lbl_8036A3C0;
        M2C_FIELD(temp_r3_2, f32 *, 0x44) = (f32) lbl_8036A3C0;
    }
}

void fn_801282E8(s32 arg1, s32 arg2) {
    void *fn_8000CAF0(void *, u32, void *);
    u32 fn_801090C0(void);
    extern u16 lbl_80290598;
    
    u32 temp_r3 = fn_801090C0();
    if (temp_r3 != 0U) {
        void *temp_r3_2 = fn_8000CAF0(&lbl_80290598, temp_r3, &lbl_80290598);
        *(s32*)((char*)temp_r3_2 + 0x38) = arg1;
        *(f32*)((char*)temp_r3_2 + 0x3C) = (f32)arg2;
    }
}

void fn_8012835C(s32 arg1, s32 arg2) {
    void *fn_8000CAF0(M2C_UNK *, u32, M2C_UNK *);
    u32 fn_801090C0();
    extern M2C_UNK lbl_80290598;
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3 = fn_801090C0();
    if (temp_r3 != 0U) {
        temp_r3_2 = fn_8000CAF0(&lbl_80290598, temp_r3, &lbl_80290598);
        M2C_FIELD(temp_r3_2, s32 *, 0x38) = arg1;
        M2C_FIELD(temp_r3_2, f32 *, 0x3C) = (f32) -arg2;
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
    void *temp_r4;

    temp_r4 = *(void **)((u8 *)arg0 + 0x18);
    *(f32 *)((u8 *)temp_r4 + 0x40) = *(f32 *)((u8 *)arg0 + 0x34);
    *(f32 *)((u8 *)temp_r4 + 0x44) = *(f32 *)((u8 *)arg0 + 0x30);
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

void fn_8012942C(s32 arg0) {
    void *fn_8000CAA0(M2C_UNK *, M2C_UNK *);
    extern M2C_UNK lbl_80290BFC;
    M2C_FIELD(fn_8000CAA0(&lbl_80290BFC, &lbl_80290BFC), s32 *, 0x30) = arg0;
}

void fn_8012955C(void) {
    M2C_UNK fn_800558D8(void *);
    extern M2C_UNK lbl_80275740;
    fn_800558D8(&lbl_80275740 + 0x15B);
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

void fn_80129888(void *arg0) {
    u8 fn_80040824();
    M2C_UNK fn_80049B78(s32, M2C_UNK);
    s32 temp_r31;

    if (fn_80040824() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
        fn_80049B78(temp_r31, 1);
    }
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
    s32 var_r6;
    void *temp_r4;
    void *var_r5;

    var_r5 = arg0;
    *(s32 *)((char *)arg0 + 0x54) = 0;
    var_r6 = 0;
loop_2:
    if (var_r6 < *(s32 *)((char *)arg0 + 0x50)) {
        temp_r4 = *(void **)((char *)var_r5 + 0x30);
        var_r5 = (char *)var_r5 + 4;
        var_r6 += 1;
        *(u8 *)((char *)temp_r4 + 0x2) &= 0xFC;
        goto loop_2;
    }
}

void fn_80129C44(void *arg0) {
    s32 var_r6;
    void *temp_r4;
    void *var_r5;

    var_r5 = arg0;
    var_r6 = 0;
    *(s32 *)((char *)arg0 + 0x54) = 0;
loop_2:
    if (var_r6 < *(s32 *)((char *)arg0 + 0x50)) {
        temp_r4 = *(void **)((char *)var_r5 + 0x30);
        var_r5 = (char *)var_r5 + 4;
        var_r6 += 1;
        *(u8 *)((char *)temp_r4 + 0x2) |= 2;
        goto loop_2;
    }
    fn_80040844();
    fn_80044450(1);
    fn_80016180();
}

void fn_80129F68(void *arg0) {
    M2C_UNK fn_80049174(s32, void *, s32 *, M2C_UNK);
    extern s32 lbl_8036A40C;
    s32 sp8;

    sp8 = lbl_8036A40C;
    fn_80049174(*M2C_FIELD(arg0, s32 **, 0x30), arg0, &sp8, 0xA);
}

void fn_8012A240(void) {
    M2C_UNK fn_8012A530();
    fn_8012A530();
}

void fn_8012A45C(void *arg0) {
    extern f32 fn_8012AA68;
    u32 temp_r0;
    void *temp_r4;

    temp_r4 = *(void **)((char *)arg0 + 0x30);
    temp_r0 = *(u32 *)((char *)temp_r4 + 4);
    if (temp_r0 == 0U) {
        fn_8000C070(1);
        return;
    }
    fn_80183E3C(temp_r0, &fn_8012AA68, 
               (s32)*(f32 *)((char *)temp_r4 + 0x10), 
               (s32)*(f32 *)((char *)temp_r4 + 0x14), 0);
}

void fn_8012A4CC(void *arg0) {
    M2C_UNK fn_80040844();
    M2C_UNK fn_80044450(M2C_UNK);
    M2C_UNK fn_800C4588(void **);
    void *temp_r3;

    temp_r3 = *M2C_FIELD(arg0, void ***, 0x30);
    M2C_FIELD(temp_r3, u8 *, 2) = (u8) (M2C_FIELD(temp_r3, u8 *, 2) | 1);
    if (fn_80040824(temp_r3) != 0) {
        fn_80040844();
        fn_80044450(1);
    }
    fn_800C4588(M2C_FIELD(arg0, void ***, 0x30));
    M2C_FIELD(arg0, void ***, 0x30) = NULL;
}

s32 fn_8012AA68(void) {
    fn_8000C070(1);
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
    f32 fn_80023068(void *, s8, void *, f32, f32, f32);
    void fn_800536B0(f32, f32, f32);
    void *fn_80053C30(void *, s32);
    void fn_80147578(void *, s32, f32, f32, f32);
    extern u8 lbl_80275740[];
    extern u8 lbl_802CA518[];
    extern f64 lbl_8036A418;
    extern f32 lbl_8036A410;

    void *temp_r6;
    s8 temp_r5;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f29;
    u32 r4;

    temp_r6 = (void *) M2C_FIELD(arg0, void **, 0x30);
    temp_r5 = *(u8 *) temp_r6;
    temp_f30 = lbl_8036A410 + (f32) (s8) temp_r5;
    temp_f31 = lbl_8036A410 + (f32) (s8) *(u8 *) (((u8 *) temp_r6) + 1);
    r4 = 0x43300000;
    *(u32 *) ((u8 *) arg0 + 0x8) = r4;
    *(u32 *) ((u8 *) arg0 + 0x10) = r4;
    temp_f29 = fn_80023068(&lbl_802CA518, (s8) temp_r5, temp_r6, temp_f30, temp_f31, lbl_8036A410);
    fn_80053C30((void *) ((u8 *) lbl_80275740 + 0x165), 0);
    fn_800536B0(temp_f30, temp_f31, temp_f29);
    fn_80147578((void *) ((u8 *) lbl_80275740 + 0x196), 0x64, temp_f30, temp_f31, temp_f29);
}

void fn_8012AD80(void) {
    extern u16 lbl_80275740[];
    fn_800558D8(&lbl_80275740[0x164 / sizeof(u16)]);
}

void fn_8012ADAC(s32 arg0, s32 arg1, u32 arg2) {
    extern u8 lbl_80290A58[72];
    extern u8 lbl_80330708[1400];
    extern f64 lbl_8036A418;

    void *fn_800056A0(void *);
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, s32);
    void fn_80040844(void);
    void *fn_80046F14(s32, s32, u32, u32);
    s32 fn_8004721C(s8, s8, u32, u32);
    void fn_8014CBD8(void *, f32, f32);

    void *temp_r3;
    s32 temp_r3_2;
    s8 temp_r29;
    s8 temp_r28;

    fn_80040844();
    temp_r3 = fn_80046F14(arg0, arg1, 0xA00, 0);
    if (temp_r3 == NULL) {
        fn_800056A0(0);
        return;
    }
    temp_r29 = *(u8 *)temp_r3;
    temp_r28 = *((u8 *)temp_r3 + 1);
    fn_80040844();
    temp_r3_2 = fn_8004721C(temp_r29, temp_r28, 0x20000, 0);
    if (temp_r3_2 == 0) {
        fn_800056A0(0);
        return;
    }
    if (arg2 != 0) {
        temp_r3 = fn_8000CAA0(&lbl_80290A58, arg2);
    } else {
        temp_r3 = fn_8000CAF0(&lbl_80290A58, 3);
    }
    *(void **)((u8 *)temp_r3 + 0x38) = temp_r3;
    *(s32 *)((u8 *)temp_r3 + 0x3c) = temp_r3_2;
    *(s32 *)((u8 *)temp_r3 + 0x30) = (s32) temp_r29;
    *(s32 *)((u8 *)temp_r3 + 0x34) = (s32) temp_r28;
    fn_8014CBD8(&lbl_80330708, (f32) temp_r29, (f32) temp_r28);
}

void fn_8012AEC4(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    fn_8005F7B0((u8 *)arg0 + 0x4C, 0);
    temp_r3 = (u8 *)arg0 + 0x38;
    *(u8 *)((u8 *)temp_r3 + 0x2) |= 1;
    fn_8005F7B0((u8 *)arg0 + 0x50, 0xFF);
    temp_r3_2 = (u8 *)arg0 + 0x3C;
    *(u8 *)((u8 *)temp_r3_2 + 0x2) &= 0xFE;
    fn_80049D08((u8 *)arg0 + 0x3C);
    if (fn_80040824() != 0) {
        fn_80040844();
        fn_80044450(1);
    }
}

void fn_8012B394(void) {
    extern u16 lbl_80275740;
    s32 addr = (s32)&lbl_80275740 + 0x1A7;
    fn_800558D8((u16*)addr);
}

void fn_8012B3C0(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_80040844();
    u32 fn_8004721C(s32, s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_800498A4(s32, M2C_UNK);
    fn_80040844();
    if (fn_8004721C(arg0, arg1, 0x4200, 0) != 0U) {
        fn_800498A4(arg2, 0);
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

void fn_8012C2CC(void *arg0) {
    s32 temp_r0;
    
    temp_r0 = *(s32*)((u8*)arg0 + 0x30);
    fn_80109020(*(s32**)((u8*)arg0 + 0x3C) + (temp_r0 << 2));
    lbl_80367A88 = 0;
    temp_r0 = *(s32*)((u8*)arg0 + 0x34);
    if (temp_r0 == 0x270F) {
        fn_8000C070(arg0, 0x63);
        return;
    }
    *(s32*)((u8*)arg0 + 0x30) = temp_r0;
}

void fn_8012C330(void *arg0) {
    s32 temp;
    s32 *ptr;
    
    temp = *(u32 *)((u8 *)arg0 + 0x30);
    ptr = (s32 *)((u8 *)arg0 + 0x3c);
    temp = ptr[temp];
    lbl_80367A88 = fn_80109180(temp, 0);
}
#include "common.h"
#include "structs.h"

extern s32 lbl_80367A88;
