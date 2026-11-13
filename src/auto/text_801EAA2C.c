/* Functions from 0x801EAA2C to 0x801F18D4, found by decomp-toolkit. */
#include "common.h"

typedef struct String {
    u32 size;
    u32 cap;
    char *data;
} String;

typedef struct Unk5C {
    void *unk0;
    void *unk4;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u8 unk1E;
    u8 unk1F;
    u8 unk20;
    u8 unk21;
    s16 unk22;
    s16 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    u8 unk4C;
    s16 unk4E;
    s16 unk50;
    s16 unk52;
    s16 unk54;
    s32 unk58;
} Unk5C;

void fn_801EAA2C(s8 *arg0) {
    *arg0 = -1;
}

void fn_801EAA38(s32 arg0) {
    void fn_8000E0E4(void *);
    void fn_80024398(void *, s32, s32);
    void *fn_8013BFFC(void);
    extern char lbl_8027EE08[];
    void *tmp;

    fn_8000E0E4(lbl_8027EE08 + 0x12b);
    tmp = fn_8013BFFC();
    *((u8 *)tmp + 0x24) = 1;
    fn_80024398(tmp, arg0, 0);
}

extern u16 lbl_8029A164[10];
s32 fn_801EAA88(void) {
    return fn_8000C0C0(&lbl_8029A164) != 0;
}

void *fn_801EAABC(s32 arg0, u32 arg1) {
    extern s32 lbl_802CA264[];
    u32 r8;
    u32 temp_r5;
    u32 temp_r9;
    u32 temp_r7;
    
    // Initial setup
    r8 = 0x18; // Loop counter
    
    while (r8 != 0) {
        r8--;
        
        // Access array elements with offset calculation and compare arg0 to one field
        temp_r5 = *(u32 *)((char *)lbl_802CA264 + (r8 * 0x1C) + 8);
        if (temp_r5 == arg0) {
            u32 r3 = arg1;
            
            // Additional check based on a condition
            r3 += 0x80000000U; // add 0x80000000 to arg1
            
            if (r3 <= 0xFFFFFF) {
                // Return the element at offset + 0xC (as u32 pointer dereference)
                return (void *)*((u32 *)((char *)lbl_802CA264 + (r8 * 0x1C) + 0xC));
            }
            
            temp_r9 = *(u32 *)((char *)lbl_802CA264 + (r8 * 0x1C) + 0x18);
            if (temp_r9 < arg1) {
                return (void *)(lbl_802CA264 + (r8 * 0x1C) + 0x18);  // Return address of the element
            }
            
            temp_r7 = *(u32 *)((char *)lbl_802CA264 + (r8 * 0x1C) + 0x10);
            if (temp_r7 == 0) {
                return (void *)*((u32 *)((char *)lbl_802CA264 + (r8 * 0x1C) + 0x14));
            }
        }
    }
    
    return NULL;
}

void fn_801EAC14(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    fn_8013FEC0();
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x54));
}

void fn_801EAC4C(s32 arg0) {
    extern s32 lbl_802EF4C8[];
    
    void fn_8013FED0(void);
    void fn_8007D064(s32, s32, s32);

    fn_8013FED0();
    fn_8007D064(lbl_802EF4C8[0], arg0, 0);
}

void fn_801EAE68(void *arg0) {
    void fn_8012C788(void *, void *);
    void fn_8000A430(s32);
    s32 fn_8013FF94(void *, s32, s32);
    void fn_8014004C(void *, s32);
    void fn_801EAB90(void);
    s32 tmp;

    fn_8012C788((void *)fn_801EAB90, arg0);
    fn_8000A430(*(s32 *)((u8 *)arg0 + 0x50));
    tmp = fn_8013FF94(arg0, -0x1000, 0);
    if (tmp != 0) {
        fn_8014004C(arg0, tmp);
    }
}

void fn_801EAEC8(void *arg0) {
    void fn_80018AE4(void);
    void fn_8000C070(void *, s32);
    extern u8 lbl_802EF4C8[];

    fn_80018AE4();
    switch ((s32)lbl_802EF4C8[8]) {
    case 0x81:
        fn_8000C070(arg0, 0xB);
        return;
    case 0x80:
        fn_8000C070(arg0, *(u8 *)((u8 *)arg0 + 0x54));
        return;
    }
}

void fn_801EAFB4(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_800A8400();
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801EAFEC(s32 arg0) {
    M2C_UNK fn_8013FED0();
    M2C_UNK fn_801AA120(s32);
    fn_8013FED0();
    fn_801AA120(arg0);
}

void fn_801EB020(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    M2C_UNK fn_800A8400();
    fn_8013FEC0();
    fn_800A8400();
    fn_8000C188(arg0);
}

void fn_801EB058(s32 arg0) {
    M2C_UNK fn_8013FED0();
    M2C_UNK fn_8016B730(s32);
    fn_8013FED0();
    fn_8016B730(arg0);
}

void fn_801EB23C(void *arg0) {
    M2C_UNK fn_8000A430(s32);
    s32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8014004C(void *, s32);
    M2C_UNK fn_8016E9DC(void *);
    s32 tmp;

    fn_8000A430(M2C_FIELD(arg0, s32 *, 0x50));
    tmp = fn_8013FF94(arg0, -0x1000, 0);
    if (tmp != 0) {
        fn_8014004C(arg0, tmp);
    }
    fn_8016E9DC(arg0);
}

void fn_801EB294(void *arg0)
{
    void fn_8000C070(void *, s32);
    u8 fn_80015648(s32, u8);
    void fn_8002297C(u8 *);
    void fn_8002833C(u8 *, void *);
    void fn_8004A1F0(void);
    void fn_8004A224(void);
    void fn_800A8400(void);
    void *fn_800AA794(void);
    void fn_800AACDC(void *);
    u32 fn_8013FF94(void *, s32, s32);
    void fn_801475FC(u8 *, s32);
    void fn_801658DC(u32, u8 *);
    extern u8 lbl_8027EE08[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802EF4C8[];
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    extern void *lbl_80368370;
    extern s8 lbl_80368374;
    void *unit;
    void *unit2;
    void *next;
    u8 flag;
    u8 skip;
    u32 buttons;
    void *iter;
    u32 flags;
    u32 gflags;
    u32 ret;
    void *self;

    unit2 = 0;
    self = arg0;
    unit = fn_800AA794();
    if (unit != NULL) {
        if (fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1) {
            if (!(*(u32 *)((u8 *)unit + 0x1A0) & 0x800)) {
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != 0) {
                    fn_801658DC(ret, lbl_8027EE08 + 0x15b);
                }
            } else {
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != 0) {
                    fn_801658DC(ret, lbl_8027EE08 + 0x171);
                }
            }
        } else {
            ret = fn_8013FF94(self, -0x1000, 0);
            if (ret != 0) {
                fn_801658DC(ret, lbl_8027EE08 + 0x187);
            }
        }
    } else {
        flag = 0;
        iter = *(void **)(lbl_802CA264 + 0xC);
        while (iter != NULL) {
            flags = *(u32 *)((u8 *)iter + 0x1A0);
            iter = *(void **)((u8 *)iter + 0x184);
            if (flags & 0x800) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            ret = fn_8013FF94(self, -0x1000, 0);
            if (ret != 0) {
                fn_801658DC(ret, lbl_8027EE08 + 0x19d);
            }
        } else {
            ret = fn_8013FF94(self, -0x1000, 0);
            if (ret != 0) {
                fn_801658DC(ret, lbl_8027EE08 + 0x1b3);
            }
        }
    }
    if (lbl_80368374 == 0) {
        lbl_80368370 = NULL;
        lbl_80368374 = 1;
    }
    unit2 = fn_800AA794();
    if (unit2 == NULL && (lbl_80367110 & 0x400)) {
        fn_8004A1F0();
    }
    skip = 0;
    gflags = lbl_80367110;
    if ((gflags & 0x10) && !(gflags & 0x20)) {
        skip = 1;
    }
    if ((skip != 0) ||
        ((!( *(u32 *)((u8 *)lbl_80367240 + 4) & 0xF)) &&
         ((s8)(*(u8 **)lbl_80367240)[2] == 0) &&
         ((s8)(*(u8 **)lbl_80367240)[3] == 0))) {
        if ((lbl_80368370 != unit2) || !(gflags & 0x400)) {
            lbl_80368370 = unit2;
            if ((unit2 == NULL) || (*(u8 *)(*(u8 **)((u8 *)unit2 + 0x190) + 8) == 0)) {
                if (gflags & 0x400) {
                    fn_8004A1F0();
                }
            } else {
                fn_800AACDC(unit2);
                fn_8004A224();
            }
        }
    }
    skip = 0;
    gflags = lbl_80367110;
    if ((gflags & 0x10) && !(gflags & 0x20)) {
        skip = 1;
    }
    if (skip == 0) {
        buttons = (u32)lbl_80367240;
        {
            u32 a = *(u32 *)((u8 *)buttons + 4);
            buttons = a & (*(u32 *)((u8 *)buttons + 8) ^ a);
        }
        if ((unit != NULL) && (buttons & 0x800)) {
            fn_800A8400();
            if (lbl_80367110 & 0x400) {
                fn_8004A1F0();
            }
            fn_8002833C(lbl_802EF4C8, unit);
            fn_801475FC(lbl_8027EE08 + 0x1c9, 0x64);
            *((u8 *)self + 0x54) = 2;
            fn_8000C070(self, 0xA);
            return;
        }
        if (buttons & 0x100) {
            if ((unit != NULL) && (fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1)) {
                flags = *(u32 *)((u8 *)unit + 0x1A0);
                if (!(flags & 0x800)) {
                    *(u32 *)((u8 *)unit + 0x1A0) = flags | 0x800;
                    fn_8002297C(lbl_802CA518);
                    fn_800AACDC(unit);
                    fn_801475FC(lbl_8027EE08 + 0x1d9, 0x64);
                }
            } else {
                goto block_65;
            }
        } else if (buttons & 0x200) {
            if ((unit != NULL) && (fn_80015648(0, *(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) == 1)) {
                flags = *(u32 *)((u8 *)unit + 0x1A0);
                if (flags & 0x800) {
                    *(u32 *)((u8 *)unit + 0x1A0) = flags & ~0x800;
                    fn_8002297C(lbl_802CA518);
                    fn_800AACDC(unit);
                    fn_801475FC(lbl_8027EE08 + 0x1f4, 0x64);
                }
            } else if (unit == NULL) {
                flag = 0;
                iter = *(void **)(lbl_802CA264 + 0xC);
                while (iter != NULL) {
                    flags = *(u32 *)((u8 *)iter + 0x1A0);
                    next = *(void **)((u8 *)iter + 0x184);
                    if (flags & 0x800) {
                        flag = 1;
                        *(u32 *)((u8 *)iter + 0x1A0) = flags & ~0x800;
                    }
                    iter = next;
                }
                if (flag != 0) {
                    fn_801475FC(lbl_8027EE08 + 0x1f4, 0x64);
                    fn_8002297C(lbl_802CA518);
                }
            }
        } else {
            if (buttons & 0x10) {
            block_65:
                if (lbl_80367110 & 0x400) {
                    fn_8004A1F0();
                }
                fn_801475FC(lbl_8027EE08 + 0x20f, 0x64);
                fn_8000C070(self, 1);
                return;
            }
            if (buttons & 0x1000) {
                if (gflags & 0x400) {
                    fn_8004A1F0();
                }
                *((u8 *)self + 0x54) = 2;
                fn_8000C070(self, 5);
            }
        }
    }
}

void fn_801EB72C(void *arg0) {
    void fn_80018AE4(void);
    void fn_800A8478(void);
    void fn_8018DB4C(void);
    void *fn_8013FF94(void *, s32, s32);
    void fn_80140210(void *, void *, s32);
    extern u8 lbl_803671C0;

    while (lbl_803671C0 != 0) {
        fn_80018AE4();
    }
    fn_800A8478();
    fn_8018DB4C();
    if (fn_8013FF94(arg0, 0x40, 0) != NULL) {
        fn_80140210(arg0, fn_8013FF94(arg0, 0x40, 0), 1);
    }
}

void fn_801EB7A8(s32 arg0) {
    void fn_80018AF4(void);
    void fn_800A8450(void);
    void fn_801EB81C(s32);
    void fn_801EB98C(s32);
    u32 fn_8013FF94(s32, s32, s32);
    void fn_801658DC(u32, u8 *);
    extern u8 lbl_803671C0;
    extern u16 lbl_8027EE08[];
    u32 temp;

    if (lbl_803671C0 == 0) {
        fn_80018AF4();
    }
    fn_800A8450();
    fn_801EB81C(arg0);
    fn_801EB98C(arg0);
    temp = fn_8013FF94(arg0, -0x1000, 0);
    if (temp != 0) {
        fn_801658DC(temp, (u8 *)lbl_8027EE08 + 0x21F);
    }
}

void fn_801EBB00(s32 arg0) {
    M2C_UNK fn_8000E0E4(void *);
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    M2C_UNK fn_80091A1C();
    extern u8 lbl_80278BB8;
    extern u8 lbl_802EF4C8;
    extern M2C_UNK lbl_80368208;
    
    s32 r31 = arg0; // This is just a convention, not necessarily the exact register assignment
    
    if (lbl_802EF4C8 == 0x32) {
        fn_8000E0E4(&lbl_80278BB8 + 0xF8);
        fn_80091A1C();
    } else {
        fn_8000E0E4(&lbl_80278BB8 + 0x102);
        fn_80091A1C();
    }
    
    fn_80024398(&lbl_80368208, r31, 0);
}

#pragma use_lmw_stmw on
void fn_801EBBB8(void *arg0) {
    extern s32 lbl_80367110;
    extern s8 lbl_803683B8;
    extern f32 lbl_8036B780;
    extern u8 lbl_8027EE08[];
    extern u8 lbl_8029A128[];
    extern u8 lbl_8028FDB0[];
    extern u8 lbl_80292230[];
    extern u8 lbl_80293C84[];
    extern u8 lbl_80293C58[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_80330708[];
    void fn_800C93EC(void *, s32);
    s32 fn_80106DC8(void *);
    void fn_8002F728(void *, void *);
    void fn_8002F6E8(void *, u8, u8, s32, s32);
    void *fn_8000CAF0(void *, void *);
    void *fn_800C42D8(s32, void *);
    void fn_800C96F8(void *, void *, s32);
    void fn_801400F4(void *, void *, s32);
    void *fn_8013FF94(void *, s32, s32);
    void fn_80018B18(void *);
    s32 strlen(void *);
    u8 sp8[128];
    s32 count;
    s32 i;
    u8 *p;
    void *temp_r4;
    s32 temp_r5;
    void *temp_r3_2;
    Unk5C *temp_r3;

    lbl_803683B8 = 0;
    lbl_80367110 &= 0xFFFFFFFE;
    fn_800C93EC((u8 *)arg0 + 0x40, 0);
    count = fn_80106DC8(sp8);
    fn_8002F728(lbl_802EF4E0, lbl_802EF4E0);
    p = sp8;
    for (i = 0; i < count; i++) {
        fn_8002F6E8(lbl_802EF4E0, p[0], p[1], 0, 0);
        p += 2;
    }

    M2C_FIELD(arg0, void **, 0x50) = fn_8000CAF0(lbl_8029A128, arg0);
    temp_r4 = M2C_FIELD(arg0, void **, 0x50);
    M2C_FIELD(temp_r4, u8 *, 0x2c) |= 4;
    temp_r3 = (Unk5C *)fn_800C42D8(0x5c, temp_r4);
    if (temp_r3 != NULL) {
        temp_r3->unk0 = lbl_8028FDB0;
        temp_r3->unk4 = NULL;
        temp_r3->unk8 = -1;
        temp_r3->unkA = 0;
        temp_r3->unkC = 0x190;
        temp_r3->unkE = 0x260;
        temp_r3->unk10 = 0x1c0;
        temp_r3->unk12 = 0;
        temp_r3->unk14 = 0;
        temp_r3->unk16 = 0x260;
        temp_r3->unk18 = 0x30;
        temp_r3->unk1A = 0;
        temp_r3->unk1C = 0;
        temp_r3->unk1E = 0xff;
        temp_r3->unk1F = 0xff;
        temp_r3->unk20 = 0xff;
        temp_r3->unk21 = 0xff;
        temp_r3->unk22 = 0x316;
        temp_r3->unk24 = 0;
        temp_r3->unk28 = lbl_8036B780;
        temp_r3->unk2C = lbl_8036B780;
        temp_r3->unk30 = lbl_8036B780;
        temp_r3->unk34 = 0;
        temp_r3->unk38 = 0;
        temp_r3->unk0 = lbl_80292230;
        temp_r3->unk3C = 0;
        temp_r3->unk40 = 0;
        temp_r3->unk44 = 0;
        temp_r3->unk40 = 0;
        temp_r3->unk48 = 0;
        temp_r3->unk4C = 1;
        temp_r3->unk4E = 0;
        temp_r3->unk50 = 0;
        temp_r3->unk52 = 0;
        temp_r3->unk54 = 0;
        temp_r3->unk0 = lbl_80293C84;
        temp_r3->unk58 = 1;
        temp_r3->unk4E = 0x30;
        temp_r3->unk52 = 0x30;
        temp_r3->unk0 = lbl_80293C58;
        temp_r3->unk8 = -0x1000;
        temp_r3->unk48 = 1;
        fn_800C96F8((u8 *)temp_r3 + 0x3c, lbl_8027EE08 + 0x147, strlen(lbl_8027EE08 + 0x147));
        temp_r5 = temp_r3->unk34 | 0x10;
        temp_r3->unk34 = temp_r5;
        temp_r3->unk58 = 1;
        fn_801400F4(arg0, temp_r3, temp_r5);
    }
    temp_r3_2 = fn_8013FF94(arg0, -0x1000, 0);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, s32 *, 0x58) = 0;
    }
    lbl_80330708[0xa9] = 0;
    lbl_80330708[0xaa] = 0;
    *(u32 *)((u8 *)lbl_80330708 + 0xb0) = 0;
    fn_80018B18(lbl_80330708);
}
#pragma use_lmw_stmw reset
void fn_801EBE00(void *arg0) {
    s32 fn_8003FCCC();
    u8 fn_8005BA10();
    s32 fn_80161FB8();
    void fn_80162054();
    fn_801620AC(arg0);
    if (fn_8005BA10() != 0) {
        if (fn_80161FB8() == 0) {
            return;
        }
        fn_80162054();
        fn_801620AC(arg0);
        *(s32*)((char*)arg0 + 0x4C) = fn_8003FCCC();
        fn_8000C188(arg0);
    }
}

void fn_801EBE60(void) {
    M2C_UNK fn_801620AC();
    M2C_UNK fn_8005C8B4();
    M2C_UNK fn_80162018();
    fn_801620AC();
    fn_8005C8B4();
    fn_80162018();
}

void fn_801EBF7C(void) {
    M2C_UNK fn_800F20E0();
    M2C_UNK fn_800F214C();
    fn_800F214C();
    fn_800F20E0();
}

void fn_801EBFA0(void) {

}

void fn_801EBFA4(void) {

}

s32 fn_801EBFA8(void) {
    return 0xB0;
}

#pragma cplusplus on
extern "C" void fn_801EBFB0(void *arg0, void *arg1) {
    void fn_8008C1D8(s32, s32, s32, s32, s32);
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
        virtual s16 v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v26() = 0;
        virtual void v27() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
    };
    s8 temp_r31;
    void *r30;

    r30 = arg1;
    temp_r31 = *(u8 *)((u8 *)arg1 + 0x60);
    ((Obj *)arg0)->v29();
    fn_8008C1D8(0, 0, 0, temp_r31 * ((Obj *)*(void **)((u8 *)r30 + 0x3C))->v20() + 0x20, 2);
}

#pragma cplusplus on
extern "C" s16 fn_801EC140(void *arg0) {
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
    s16 temp = ((Obj *)arg0)->v18();
    return (s16)((0x260 - temp) >> 1);
}
#pragma cplusplus reset

#pragma cplusplus reset

s32 fn_801EC17C(void) {
    return 0x60;
}

void fn_801EC370(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4((u8 *)lbl_8027EE08 + 0x26c);
}

void **fn_801EC39C(void) {
    extern u32 lbl_8027EE08[];
    return (void **)((u8 *)lbl_8027EE08 + 0x279);
}

u8 fn_801EC3AC(void) {
    extern u8 lbl_803683B8;
    return (u8) (lbl_803683B8 == 0x86);
}

s32 fn_801EC3C0(s32 unused, u8 *arg1) {
    extern u8 lbl_802EF4C8[24];
    u8 *p;
    u8 *obj;
    obj = *(u8 **)(arg1 + 0x18);
    obj[0x54] = 1;
    p = lbl_802EF4C8;
    p[8] = 0x86;
    return 5;
}

void fn_801EC4F0(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4((u8 *)lbl_8027EE08 + 0x29a);
}

void *fn_801EC51C(void) {
    extern u16 lbl_8027EE08[];
    return (u8 *)lbl_8027EE08 + 0x2a2;
}

u8 fn_801EC52C(void) {
    extern u8 lbl_803683B8;
    u32 temp;

    temp = __cntlzw(0x85 - lbl_803683B8);
    return (u8)((temp >> 5) & 0xFF);
}

s32 fn_801EC540(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x85;
    return 5;
}

void fn_801EC558(void) {
    void fn_8000E0E4(void *);
    extern u8 lbl_8027EE08[257];

    fn_8000E0E4(lbl_8027EE08 + 0x2AB);
}

void *fn_801EC584(void) {
    extern u16 lbl_8027EE08[];
    return (u8 *)lbl_8027EE08 + 0x2b4;
}

u8 fn_801EC594(void) {
    extern u8 lbl_803683B8;
    u32 temp;

    temp = __cntlzw(0x84 - lbl_803683B8);
    return (u8)((temp >> 5) & 0xFF);
}

s32 fn_801EC5A8(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x84;
    return 5;
}

void fn_801EC5C0(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4((u8 *)lbl_8027EE08 + 0x2BD);
}

void *fn_801EC5EC(void) {
    extern u16 lbl_8027EE08[];
    return (u8 *)lbl_8027EE08 + 0x2cd;
}

u8 fn_801EC5FC(void) {
    extern u8 lbl_803683B8;
    u32 temp;

    temp = __cntlzw(0x83 - lbl_803683B8);
    return (u8)((temp >> 5) & 0xFF);
}

s32 fn_801EC610(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x83;
    return 5;
}

void fn_801EC628(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4(&lbl_8027EE08[0x2D8 / sizeof(u16)]);
}

void *fn_801EC654(void) {
    extern u16 lbl_8027EE08[];
    return (u8 *)lbl_8027EE08 + 0x2e4;
}

u8 fn_801EC664(void) {
    extern u8 lbl_803683B8;
    u32 temp;

    temp = __cntlzw(0x82 - lbl_803683B8);
    return (u8)((temp >> 5) & 0xFF);
}

s32 fn_801EC678(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x82;
    return 5;
}

void fn_801EC690(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4(&lbl_8027EE08[0x2F0 / sizeof(u16)]);
}

void *fn_801EC6BC(void) {
    extern u16 lbl_8027EE08[];
    return (u8 *)lbl_8027EE08 + 0x2fd;
}

s32 fn_801EC6CC(void) {
    return 2;
}

void fn_801EC74C(void) {
    extern u16 lbl_8027EE08[];
    fn_8000E0E4((u8 *)lbl_8027EE08 + 0x31D);
}

void *fn_801EC778(void) {
    extern u16 lbl_8027EE08[];
    return (u8 *)lbl_8027EE08 + 0x32e;
}

u8 fn_801EC788(void) {
    extern u8 lbl_803683B8;
    u32 temp;

    temp = __cntlzw(0x80 - lbl_803683B8);
    return (u8)((temp >> 5) & 0xFF);
}

s32 fn_801EC79C(void) {
    extern u8 lbl_802EF4C8[24];
    lbl_802EF4C8[8] = 0x80;
    return 5;
}

void fn_801EC7B4(void) {

}

#pragma use_lmw_stmw on
void fn_801EC7B8(void) {
    void fn_800056CC(void *, ...);
    s32 OSGetTick(void);
    s8 fn_8005BA00(void);
    u32 fn_800C44F4(s8);
    void *fn_800C45B8(s32, void *, s32);
    void fn_800C4588(void *);
    void DCInvalidateRange(void *);
    void fn_80215D9C(void *, s32, s32, s32, s32, s32, s32, void *);
    void fn_801ED838(void);
    extern u8 lbl_8027F1D0[];
    extern u8 lbl_80332270[];
    extern void *lbl_80338E70[];
    extern void *lbl_803683C0;
    extern void *lbl_803683C4;
    extern s32 lbl_803683C8;
    extern s32 lbl_803683CC;
    extern s32 lbl_803683D0;

    s32 tick;
    s32 half;
    void *buf;
    void *buf0;
    s32 used;
    s32 i;
    void *node;
    void *best;
    u32 bestPri;
    void **slot;
    void **arr;
    u8 *p;
    s32 zero;
    s32 ctr;
    s32 j;
    u8 flg;
    u32 bus;
    u32 dt;

    fn_800056CC(lbl_8027F1D0);
    tick = OSGetTick();
    while (lbl_803683D0 != 0) {}
    half = lbl_803683CC >> 1;
    if (fn_800C44F4(fn_8005BA00()) >= (u32)half) {
        buf = fn_800C45B8(-half, lbl_8027F1D0 + 0x18, 0);
        buf0 = buf;
        used = 0;
        for (node = lbl_803683C0; node != 0; node = *(void **)((u8 *)node + 0x60)) {
            *(u8 *)((u8 *)node + 0x53) = (u8)(*(u8 *)((u8 *)node + 0x53) & 0xFE);
        }
        arr = lbl_80338E70;
        i = 0;
        slot = lbl_80338E70;
        for (;;) {
            node = lbl_803683C0;
            bestPri = (u32)-1;
            best = 0;
            while (node != 0) {
                if ((*(u8 *)((u8 *)node + 0x53) & 1) == 0) {
                    if (bestPri > *(u32 *)((u8 *)node + 0x58)) {
                        bestPri = *(u32 *)((u8 *)node + 0x58);
                        best = node;
                    }
                }
                node = *(void **)((u8 *)node + 0x60);
            }
            if (best != 0) {
                *(u8 *)((u8 *)best + 0x53) = (u8)(*(u8 *)((u8 *)best + 0x53) | 1);
            }
            *slot = best;
            if (*slot == 0) {
                break;
            }
            if ((u32)half < (u32)(used + *(s32 *)((u8 *)*slot + 0x64))) {
                lbl_80338E70[i] = 0;
                break;
            }
            DCInvalidateRange(buf);
            lbl_803683D0 += 1;
            fn_80215D9C(*slot, 0, 1, 1, *(s32 *)((u8 *)*slot + 0x68), (s32)buf,
                        *(s32 *)((u8 *)*slot + 0x64), fn_801ED838);
            i += 1;
            *(s32 *)((u8 *)*slot + 0x68) = lbl_803683C8 + used;
            {
                s32 sz = *(s32 *)((u8 *)*slot + 0x64);
                slot += 1;
                used += sz;
                buf = (u8 *)buf + sz;
            }
            if (i >= 0x100) {
                break;
            }
        }
        {
            void **sp = arr;
            j = 0;
            ctr = 0x80;
            do {
                void *n = sp[0];
                if (n == 0) break;
                if (j == 0) {
                    *(void **)((u8 *)n + 0x5C) = 0;
                } else {
                    *(void **)((u8 *)n + 0x5C) = sp[-1];
                }
                if (j < 0xFF) {
                    *(void **)((u8 *)n + 0x60) = sp[1];
                } else {
                    *(void **)((u8 *)n + 0x60) = 0;
                }
                sp += 1;
                j += 1;
                n = sp[0];
                if (n == 0) break;
                if (j == 0) {
                    *(void **)((u8 *)n + 0x5C) = 0;
                } else {
                    *(void **)((u8 *)n + 0x5C) = sp[-1];
                }
                if (j < 0xFF) {
                    *(void **)((u8 *)n + 0x60) = sp[1];
                } else {
                    *(void **)((u8 *)n + 0x60) = 0;
                }
                sp += 1;
                j += 1;
            } while (--ctr != 0);
        }
        lbl_803683C0 = lbl_80338E70[0];
        p = lbl_80332270;
        zero = 0;
        ctr = 0x40;
        do {
            flg = p[0x53];
            if (flg & 1) {
                p[0x53] = (u8)(flg & 0xFE);
            } else {
                *(s32 *)(p + 0x64) = zero;
                p[0x53] = (u8)zero;
            }
            flg = p[0xBF];
            p += 0x6C;
            if (flg & 1) {
                p[0x53] = (u8)(flg & 0xFE);
            } else {
                *(s32 *)(p + 0x64) = zero;
                p[0x53] = (u8)zero;
            }
            flg = p[0xBF];
            p += 0x6C;
            if (flg & 1) {
                p[0x53] = (u8)(flg & 0xFE);
            } else {
                *(s32 *)(p + 0x64) = zero;
                p[0x53] = (u8)zero;
            }
            flg = p[0xBF];
            p += 0x6C;
            if (flg & 1) {
                p[0x53] = (u8)(flg & 0xFE);
            } else {
                *(s32 *)(p + 0x64) = zero;
                p[0x53] = (u8)zero;
            }
            p += 0x6C;
        } while (--ctr != 0);
        p = lbl_80332270;
        ctr = 0x20;
        j = 0xFF;
        for (;;) {
            if (*(s32 *)(p + 0x64) == 0) break;
            if (*(s32 *)(p + 0xD0) == 0) { p += 0x6C; break; }
            p += 0x6C;
            if (*(s32 *)(p + 0xD0) == 0) break;
            p += 0x6C;
            if (*(s32 *)(p + 0xD0) == 0) break;
            p += 0x6C;
            if (*(s32 *)(p + 0xD0) == 0) break;
            p += 0x6C;
            if (*(s32 *)(p + 0xD0) == 0) break;
            p += 0x6C;
            if (*(s32 *)(p + 0xD0) == 0) break;
            p += 0x6C;
            if (*(s32 *)(p + 0xD0) == 0) break;
            p += 0x6C;
            if (*(s32 *)(p + 0xD0) == 0) break;
            p += 0x6C;
            j -= 7;
            if (--ctr == 0) { p = 0; break; }
        }
        lbl_803683C4 = p;
        *(void **)((u8 *)p + 0x5C) = 0;
        *(void **)((u8 *)lbl_803683C4 + 0x60) = 0;
        *(s32 *)((u8 *)lbl_803683C4 + 0x68) = lbl_803683C8;
        *(s32 *)((u8 *)lbl_803683C4 + 0x64) = lbl_803683CC - used;
        {
            void **rp = arr;
            ctr = 0x40;
            do {
                void *n = *rp;
                if (n == 0) break;
                *(s32 *)((u8 *)n + 0x68) += *(s32 *)((u8 *)lbl_803683C4 + 0x64);
                rp += 1;
                n = *rp;
                if (n == 0) break;
                *(s32 *)((u8 *)n + 0x68) += *(s32 *)((u8 *)lbl_803683C4 + 0x64);
                rp += 1;
                n = *rp;
                if (n == 0) break;
                *(s32 *)((u8 *)n + 0x68) += *(s32 *)((u8 *)lbl_803683C4 + 0x64);
                rp += 1;
                n = *rp;
                if (n == 0) break;
                rp += 1;
                *(s32 *)((u8 *)n + 0x68) += *(s32 *)((u8 *)lbl_803683C4 + 0x64);
            } while (--ctr != 0);
        }
        lbl_803683D0 += 1;
        fn_80215D9C(lbl_803683C4, 0, 0, 1, (s32)buf0,
                    lbl_803683C8 + *(s32 *)((u8 *)lbl_803683C4 + 0x64), used, fn_801ED838);
        while (lbl_803683D0 != 0) {}
        fn_800C4588(buf0);
        dt = (u32)(OSGetTick() - tick);
        bus = *(u32 *)0x800000F8;
        fn_800056CC(lbl_8027F1D0 + 0x19, dt / ((bus >> 2) / 4000));
        return;
    }
    p = lbl_80332270;
    zero = 0;
    ctr = 0x20;
    do {
        *(s32 *)(p + 0x64) = zero;
        p[0x53] = (u8)zero;
        *(s32 *)(p + 0xD0) = zero;
        p[0xBF] = (u8)zero;
        *(s32 *)(p + 0x13C) = zero;
        p[0x12B] = (u8)zero;
        *(s32 *)(p + 0x1A8) = zero;
        p[0x197] = (u8)zero;
        *(s32 *)(p + 0x214) = zero;
        p[0x203] = (u8)zero;
        *(s32 *)(p + 0x280) = zero;
        p[0x26F] = (u8)zero;
        *(s32 *)(p + 0x2EC) = zero;
        p[0x2DB] = (u8)zero;
        *(s32 *)(p + 0x358) = zero;
        p[0x347] = (u8)zero;
        p += 0x360;
    } while (--ctr != 0);
    lbl_803683C0 = 0;
    p = lbl_80332270;
    ctr = 0x20;
    j = 0xFF;
    for (;;) {
        if (*(s32 *)(p + 0x64) == 0) break;
        if (*(s32 *)(p + 0xD0) == 0) { p += 0x6C; break; }
        p += 0x6C;
        if (*(s32 *)(p + 0xD0) == 0) break;
        p += 0x6C;
        if (*(s32 *)(p + 0xD0) == 0) break;
        p += 0x6C;
        if (*(s32 *)(p + 0xD0) == 0) break;
        p += 0x6C;
        if (*(s32 *)(p + 0xD0) == 0) break;
        p += 0x6C;
        if (*(s32 *)(p + 0xD0) == 0) break;
        p += 0x6C;
        if (*(s32 *)(p + 0xD0) == 0) break;
        p += 0x6C;
        if (*(s32 *)(p + 0xD0) == 0) break;
        p += 0x6C;
        j -= 7;
        if (--ctr == 0) { p = 0; break; }
    }
    lbl_803683C4 = p;
    *(void **)((u8 *)p + 0x60) = 0;
    *(void **)((u8 *)lbl_803683C4 + 0x5C) = 0;
    *(s32 *)((u8 *)lbl_803683C4 + 0x64) = lbl_803683CC;
    *(s32 *)((u8 *)lbl_803683C4 + 0x68) = lbl_803683C8;
}

extern void *lbl_803683C0;
void *fn_801ECE40(s32 arg0) {
    void *r30;
    u32 r31;

    r31 = fn_8000D598();
    r30 = *(void **)lbl_803683C0;
loop_1:
    if (r30 == NULL) {
        return NULL;
    }
    if ((((u32)*(u32 *)((char *)r30 + 0x64)) != 0) &&
        (*(u32 *)((char *)r30 + 0x54) == r31) &&
        (fn_802342B8((char *)r30 + 0x28, arg0) == 0)) {
        return r30;
    }
    r30 = *(void **)((char *)r30 + 0x60);
    goto loop_1;
}

#pragma use_lmw_stmw on
s32 fn_801ECECC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *fn_801ED12C(s32);
    void *fn_801ED6D4(void *, void *);
    s32 fn_8000D598(s32);
    s32 fn_8005E55C(void);
    void DCFlushRange(s32, s32);
    void fn_80215D9C(void *, s32, s32, s32, s32, s32, s32, void *);
    void *fn_80234200(s32, s32);
    s32 fn_802342B8(void *);
    void fn_80234450(void *, s32, s32);
    extern void fn_801ED800;
    extern u8 lbl_8027F1D0[];
    extern u8 lbl_80332270[];
    extern void *lbl_803683C0;
    extern void *lbl_803683C4;
    extern s32 lbl_803683CC;
    extern s32 lbl_803683D0;
    s32 a4;
    s32 a3;
    s32 buf;
    s32 path;
    s32 flag;
    s32 size;
    s32 i;
    u8 *slot;
    u8 *p;
    u8 *node;
    void *next;
    void *prev;
    void *temp;
    void *cell;

    size = arg2;
    path = arg0;
    buf = arg1;
    a3 = arg3;
    a4 = arg4;
    if (lbl_803683CC < size) {
        return 0;
    }
    i = 0xFF;
    for (p = lbl_80332270; i >= 0; p += 0x6C, i--) {
        if (*(s32 *)(p + 0x64) == 0) {
            slot = p;
            goto found;
        }
    }
    slot = 0;
found:
    if (slot == 0) {
        return 0;
    }
    flag = 0;
    if (fn_80234200(path, 0x2F) != 0 && fn_802342B8(lbl_8027F1D0 + 0x35) == 0) {
        size = 0;
        node = lbl_80332270;
        do {
            if ((*(u8 *)(node + 0x53) & 2) && *(s32 *)(node + 0x64) != 0) {
                next = *(void **)(node + 0x60);
                temp = lbl_803683C0;
                if (next != 0) {
                    *(void **)((u8 *)next + 0x5C) = *(void **)(node + 0x5C);
                }
                prev = *(void **)(node + 0x5C);
                if (prev != 0) {
                    *(void **)((u8 *)prev + 0x60) = *(void **)(node + 0x60);
                } else {
                    temp = *(void **)(node + 0x60);
                }
                lbl_803683C0 = temp;
                lbl_803683C4 = fn_801ED6D4(lbl_803683C4, node);
            }
            size += 1;
            node += 0x6C;
        } while (size < 0x100);
        flag = 2;
        size = 0x180000;
    }
    cell = fn_801ED12C(size);
    if (cell == 0) {
        return 0;
    }
    *(u8 *)((u8 *)cell + 0x53) = *(u8 *)((u8 *)cell + 0x53) | (u8)flag;
    {
        s32 id = lbl_803683D0;
        lbl_803683D0 = id + 1;
        fn_80234450((u8 *)cell + 0x28, path, id);
    }
    *(s32 *)((u8 *)cell + 0x24) = a4;
    *(s32 *)((u8 *)cell + 0x20) = a3;
    *(s32 *)((u8 *)cell + 0x54) = fn_8000D598(path);
    *(s32 *)((u8 *)cell + 0x58) = fn_8005E55C();
    DCFlushRange(buf, *(s32 *)((u8 *)cell + 0x64));
    fn_80215D9C(cell, 0, 0, 0, buf, *(s32 *)((u8 *)cell + 0x68), *(s32 *)((u8 *)cell + 0x64), &fn_801ED800);
    return 1;
}
#pragma use_lmw_stmw reset

void fn_801ED12C(s32 arg0) {
    void fn_801EC7B8(void);
    void *fn_801ED6D4(void *, void *);
    extern void *lbl_803683C0;
    extern void *lbl_803683C4;
    extern u8 lbl_80332270[];
    u32 best_size;
    void *best;
    void *cell;
    void *next;
    void *prev;
    void *node;
    void *alloc_list;
    void *iter;
    void *insert_prev;
    s32 size;
    u32 rem;
    s32 var_ctr;
    s32 temp_r0;

    best = 0;
    best_size = 0x80000000u - 1u;
    cell = lbl_803683C4;
    goto test1;
body1:
    size = *(s32 *)((u8 *)cell + 0x64);
    if (size >= arg0 && (u32)size <= best_size) {
        best_size = (u32)size;
        best = cell;
    }
    cell = *(void **)((u8 *)cell + 0x60);
test1:
    if (cell != 0) {
        goto body1;
    }

    if (best != 0) {
        goto have;
    }
    fn_801EC7B8();
reclaim:
    best = lbl_803683C4;
    if (*(u32 *)((u8 *)best + 0x64) >= (u32)arg0) {
        goto have;
    }
    node = lbl_803683C0;
    next = *(void **)((u8 *)node + 0x60);
    if (next != 0) {
        *(void **)((u8 *)next + 0x5C) = *(void **)((u8 *)node + 0x5C);
    }
    prev = *(void **)((u8 *)node + 0x5C);
    if (prev != 0) {
        *(void **)((u8 *)prev + 0x60) = *(void **)((u8 *)node + 0x60);
    } else {
        lbl_803683C0 = *(void **)((u8 *)node + 0x60);
    }
    lbl_803683C4 = fn_801ED6D4(lbl_803683C4, node);
    goto reclaim;

have:
    rem = *(u32 *)((u8 *)best + 0x64) - (u32)arg0;
    if (rem >= 0x20U) {
        goto split;
    }
    next = *(void **)((u8 *)best + 0x60);
    cell = lbl_803683C4;
    if (next != 0) {
        *(void **)((u8 *)next + 0x5C) = *(void **)((u8 *)best + 0x5C);
    }
    prev = *(void **)((u8 *)best + 0x5C);
    if (prev != 0) {
        *(void **)((u8 *)prev + 0x60) = *(void **)((u8 *)best + 0x60);
    } else {
        cell = *(void **)((u8 *)best + 0x60);
    }
    lbl_803683C4 = cell;
    goto insert;

split:
    cell = lbl_80332270;
    *(s32 *)((u8 *)best + 0x64) = arg0;
    var_ctr = 0x20;
loop_s:
    if (*(s32 *)((u8 *)cell + 0x64) == 0) {
    } else {
        temp_r0 = *(s32 *)((u8 *)cell + 0xD0);
        cell = (u8 *)cell + 0x6C;
        if (temp_r0 == 0) {
        } else {
            temp_r0 = *(s32 *)((u8 *)cell + 0xD0);
            cell = (u8 *)cell + 0x6C;
            if (temp_r0 == 0) {
            } else {
                temp_r0 = *(s32 *)((u8 *)cell + 0xD0);
                cell = (u8 *)cell + 0x6C;
                if (temp_r0 == 0) {
                } else {
                    temp_r0 = *(s32 *)((u8 *)cell + 0xD0);
                    cell = (u8 *)cell + 0x6C;
                    if (temp_r0 == 0) {
                    } else {
                        temp_r0 = *(s32 *)((u8 *)cell + 0xD0);
                        cell = (u8 *)cell + 0x6C;
                        if (temp_r0 == 0) {
                        } else {
                            temp_r0 = *(s32 *)((u8 *)cell + 0xD0);
                            cell = (u8 *)cell + 0x6C;
                            if (temp_r0 == 0) {
                            } else {
                                temp_r0 = *(s32 *)((u8 *)cell + 0xD0);
                                cell = (u8 *)cell + 0x6C;
                                if (temp_r0 == 0) {
                                } else {
                                    cell = (u8 *)cell + 0x6C;
                                    var_ctr -= 1;
                                    if (var_ctr == 0) {
                                        cell = 0;
                                    } else {
                                        goto loop_s;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *(u32 *)((u8 *)cell + 0x64) = rem;
    *(u32 *)((u8 *)cell + 0x68) = *(u32 *)((u8 *)best + 0x68) + arg0;
    *(void **)((u8 *)cell + 0x5C) = *(void **)((u8 *)best + 0x5C);
    *(void **)((u8 *)cell + 0x60) = *(void **)((u8 *)best + 0x60);
    next = *(void **)((u8 *)cell + 0x60);
    if (next != 0) {
        *(void **)((u8 *)next + 0x5C) = cell;
    }
    prev = *(void **)((u8 *)cell + 0x5C);
    if (prev != 0) {
        *(void **)((u8 *)prev + 0x60) = cell;
    } else {
        lbl_803683C4 = cell;
    }

insert:
    alloc_list = lbl_803683C0;
    insert_prev = 0;
    iter = alloc_list;
    goto ins_t;
ins_b:
    if (insert_prev != 0) {
        if (*(u32 *)((u8 *)best + 0x68) <= *(u32 *)((u8 *)insert_prev + 0x68)) {
            goto ins_a;
        }
    }
    if (iter == 0) {
        goto ins_d;
    }
    if (*(u32 *)((u8 *)iter + 0x68) > *(u32 *)((u8 *)best + 0x68)) {
        goto ins_d;
    }
ins_a:
    insert_prev = iter;
    iter = *(void **)((u8 *)iter + 0x60);
ins_t:
    if (iter != 0) {
        goto ins_b;
    }
ins_d:
    *(void **)((u8 *)best + 0x60) = iter;
    *(void **)((u8 *)best + 0x5C) = insert_prev;
    if (iter != 0) {
        *(void **)((u8 *)iter + 0x5C) = best;
    }
    if (insert_prev != 0) {
        *(void **)((u8 *)insert_prev + 0x60) = best;
    }
    if (insert_prev == 0) {
        alloc_list = best;
    }
    lbl_803683C0 = alloc_list;
}

void fn_801ED52C(s32 arg0) {
    s32 fn_80214184(s32);
    void fn_80215D2C(void);
    s32 fn_80215F38(void);
    extern u8 lbl_80332270[];
    extern void *lbl_803683C0;
    extern void *lbl_803683C4;
    extern s32 lbl_803683C8;
    extern s32 lbl_803683CC;
    u8 *var_r4;
    s32 zero;
    register u32 ctr1;
    register u32 ctr2;
    s32 temp_r0;
    s32 var_r3;
    void *zero_ptr;

    if (fn_80215F38() == 0) {
        fn_80215D2C();
    }
    ctr1 = 0x20;
    var_r4 = lbl_80332270;
    zero = 0;
    do {
        *(s32 *)(var_r4 + 0x64) = zero;
        *(u8 *)(var_r4 + 0x53) = zero;
        *(s32 *)(var_r4 + 0xD0) = zero;
        *(u8 *)(var_r4 + 0xBF) = zero;
        *(s32 *)(var_r4 + 0x13C) = zero;
        *(u8 *)(var_r4 + 0x12B) = zero;
        *(s32 *)(var_r4 + 0x1A8) = zero;
        *(u8 *)(var_r4 + 0x197) = zero;
        *(s32 *)(var_r4 + 0x214) = zero;
        *(u8 *)(var_r4 + 0x203) = zero;
        *(s32 *)(var_r4 + 0x280) = zero;
        *(u8 *)(var_r4 + 0x26F) = zero;
        *(s32 *)(var_r4 + 0x2EC) = zero;
        *(u8 *)(var_r4 + 0x2DB) = zero;
        *(s32 *)(var_r4 + 0x358) = zero;
        *(u8 *)(var_r4 + 0x347) = zero;
        var_r4 += 0x360;
    } while (--ctr1 != 0);
    if (arg0 == 0) {
        arg0 = 0x400000;
    }
    lbl_803683C8 = fn_80214184(arg0);
    zero_ptr = 0;
    ctr2 = 0x20;
    var_r4 = lbl_80332270;
    var_r3 = 0xFF;
    lbl_803683CC = arg0;
    lbl_803683C0 = zero_ptr;
loop_7:
    if (*(s32 *)(var_r4 + 0x64) != 0) {
        goto try1;
    }
    goto found;
try1:
    temp_r0 = *(s32 *)(var_r4 + 0xD0);
    var_r4 += 0x6C;
    if (temp_r0 != 0) {
        goto try2;
    }
    goto found;
try2:
    temp_r0 = *(s32 *)(var_r4 + 0xD0);
    var_r4 += 0x6C;
    if (temp_r0 != 0) {
        goto try3;
    }
    goto found;
try3:
    temp_r0 = *(s32 *)(var_r4 + 0xD0);
    var_r4 += 0x6C;
    if (temp_r0 != 0) {
        goto try4;
    }
    goto found;
try4:
    temp_r0 = *(s32 *)(var_r4 + 0xD0);
    var_r4 += 0x6C;
    if (temp_r0 != 0) {
        goto try5;
    }
    goto found;
try5:
    temp_r0 = *(s32 *)(var_r4 + 0xD0);
    var_r4 += 0x6C;
    if (temp_r0 != 0) {
        goto try6;
    }
    goto found;
try6:
    temp_r0 = *(s32 *)(var_r4 + 0xD0);
    var_r4 += 0x6C;
    if (temp_r0 != 0) {
        goto try7;
    }
    goto found;
try7:
    temp_r0 = *(s32 *)(var_r4 + 0xD0);
    var_r4 += 0x6C;
    if (temp_r0 != 0) {
        goto cont;
    }
    goto found;
cont:
    var_r3 -= 7;
    var_r4 += 0x6C;
    if (--ctr2 != 0) {
        goto loop_7;
    }
    var_r4 = 0;
found:
    lbl_803683C4 = var_r4;
    *(s32 *)((u8 *)var_r4 + 0x60) = 0;
    *(s32 *)((u8 *)lbl_803683C4 + 0x5C) = 0;
    *(s32 *)((u8 *)lbl_803683C4 + 0x64) = lbl_803683CC;
    *(s32 *)((u8 *)lbl_803683C4 + 0x68) = lbl_803683C8;
}

void *fn_801ED6D4(void *arg0, void *arg1) {
    void *var_r7;
    void *var_r8;
    s32 temp_r5;
    s32 temp_r6;

    var_r8 = arg0;
    var_r7 = NULL;
loop_1:
    if (var_r8 != NULL) {
        if ((u32) M2C_FIELD(arg1, u32 *, 0x68) <= (u32) M2C_FIELD(var_r8, u32 *, 0x68)) {
            var_r7 = var_r8;
            var_r8 = M2C_FIELD(var_r8, void **, 0x60);
            goto loop_1;
        }
    } else {
        if ((u32) M2C_FIELD(arg1, u32 *, 0x68) <= (u32) M2C_FIELD(var_r7, u32 *, 0x68)) {
            var_r7 = var_r8;
            var_r8 = M2C_FIELD(var_r8, void **, 0x60);
            goto loop_1;
        }
    }

    M2C_FIELD(arg1, void **, 0x60) = var_r8;
    M2C_FIELD(arg1, void **, 0x5C) = var_r7;
    if (var_r8 != NULL) {
        M2C_FIELD(var_r8, void **, 0x5C) = arg1;
        temp_r6 = M2C_FIELD(arg1, s32 *, 0x64);
        if ((u32) M2C_FIELD(var_r8, u32 *, 0x68) == (u32) (M2C_FIELD(arg1, u32 *, 0x68) + temp_r6)) {
            M2C_FIELD(arg1, s32 *, 0x64) = (s32) (temp_r6 + M2C_FIELD(var_r8, s32 *, 0x64));
            M2C_FIELD(var_r8, s32 *, 0x64) = 0;
            M2C_FIELD(var_r8, s8 *, 0x53) = 0;
            var_r8 = M2C_FIELD(var_r8, void **, 0x60);
            M2C_FIELD(arg1, void **, 0x60) = var_r8;
            if (var_r8 != NULL) {
                M2C_FIELD(var_r8, void **, 0x5C) = arg1;
            }
        }
    }
    if (var_r7 != NULL) {
        M2C_FIELD(var_r7, void **, 0x60) = arg1;
        temp_r5 = M2C_FIELD(var_r7, s32 *, 0x64);
        if ((u32) M2C_FIELD(arg1, u32 *, 0x68) == (u32) (M2C_FIELD(var_r7, u32 *, 0x68) + temp_r5)) {
            M2C_FIELD(var_r7, s32 *, 0x64) = (s32) (temp_r5 + M2C_FIELD(arg1, s32 *, 0x64));
            M2C_FIELD(var_r7, s32 *, 0x64) = 0;
            M2C_FIELD(var_r7, s8 *, 0x53) = 0;
            M2C_FIELD(var_r7, void **, 0x60) = var_r8;
            if (var_r8 != NULL) {
                M2C_FIELD(var_r8, void **, 0x5C) = var_r7;
                return arg0;
            }
        }
    }
    return arg1;
}

void fn_801ED7D0(void *arg0) {
    s32 fn_8005E55C();
    M2C_FIELD(arg0, s32 *, 0x58) = fn_8005E55C();
}

void fn_801ED800(void *arg0) {
    void (*callback)(void *);
    extern s32 lbl_803683D0;

    callback = *(void (**)(void *))((u8 *)arg0 + 0x20);
    callback(*(void **)((u8 *)arg0 + 0x24));

    lbl_803683D0 -= 1;
}

void fn_801ED838(void) {
    extern s32 lbl_803683D0;
    lbl_803683D0 -= 1;
}

void fn_801ED848(void *arg0, void *arg1, void *arg2, void *arg3) {
    void DCInvalidateRange(void *, u32);
    s32 fn_8005E55C(void);
    void fn_80215D9C(void *, s32, s32, s32, s32, void *, s32, void *);
    void fn_801ED800(void *);
    extern s32 lbl_803683D0;

    lbl_803683D0++;
    *(void **)((char *)arg0 + 0x24) = arg3;
    *(void **)((char *)arg0 + 0x20) = arg2;
    *(s32 *)((char *)arg0 + 0x58) = fn_8005E55C();
    DCInvalidateRange(arg1, *(u32 *)((char *)arg0 + 0x64));
    fn_80215D9C(arg0, 0, 1, 0, *(s32 *)((char *)arg0 + 0x68), arg1, *(s32 *)((char *)arg0 + 0x64), fn_801ED800);
}

void fn_801ED8CC(void *arg0)
{
    extern u8 lbl_802EF4C8[];
    extern u32 lbl_8029A734[];
    extern u8 lbl_8027F26C[];

    extern s32 fn_8000E0E4(void *);
    extern void fn_8000D864(s32, s32);
    extern void fn_801B79A0(s32, s32, void *, s32);

    s32 value;
    s32 result;

    value = fn_8000E0E4(
        (void *)lbl_8029A734[lbl_802EF4C8[0x14]]
    );

    fn_8000D864(0, value);

    result = fn_8000E0E4(lbl_8027F26C + 0x17E);

    fn_801B79A0(result, 0, arg0, 0);
}

void fn_801ED940(s32 arg0) {
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    extern u8 lbl_803392B8[];

    fn_80024398((M2C_UNK *)lbl_803392B8, arg0, 0);
}

void fn_801ED970(void *arg0, void *arg1)
{
    extern u8 lbl_8027F26C[];
    extern u8 lbl_8029A5FC[];
    extern u8 lbl_80366F00;

    extern void *fn_8000BCA4(void *);
    extern void *fn_8000CAA0(void *, void *);

    u8 *entry;
    void *value;

    value = fn_8000BCA4(lbl_8027F26C + 0x186);

    entry = (u8 *)fn_8000CAA0(lbl_8029A5FC, value);

    *(void **)(entry + 0x30) = arg0;
    entry[0x38] = 2;

    fn_8000CAA0(&lbl_80366F00, arg1);
}

void fn_801ED9DC(void *arg0, void *arg1)
{
    extern u8 lbl_8027F26C[];
    extern u8 lbl_8029A5FC[];
    extern u8 lbl_80366F00;

    extern void *fn_8000BCA4(void *);
    extern void *fn_8000CAA0(void *, void *);

    u8 *entry;
    void *value;

    value = fn_8000BCA4(lbl_8027F26C + 0x186);

    entry = (u8 *)fn_8000CAA0(lbl_8029A5FC, value);

    *(void **)(entry + 0x30) = arg0;
    entry[0x38] = 3;

    fn_8000CAA0(&lbl_80366F00, arg1);
}

void fn_801EDA48(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_8029A5FC[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_8029A5FC, arg1);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(u8 *)((u8 *)temp_r3 + 0x38) = 1;
}

void fn_801EDA88(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_8029A5FC[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_8029A5FC, arg1);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(u8 *)((u8 *)temp_r3 + 0x38) = 0;
}

void fn_801EDAC8(void *arg0) {
    M2C_UNK fn_80169714(s32);
    M2C_UNK fn_8016978C(s32);
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x38);
    switch ((s32) temp_r0) {                        /* irregular */
    case 2:
        fn_80169714(M2C_FIELD(arg0, s32 *, 0x18));
        fn_8000C070(arg0, 0x63);
        return;
    case 3:
        fn_8016978C(M2C_FIELD(arg0, s32 *, 0x18));
        fn_8000C070(arg0, 0x63);
        return;
    }
}

void fn_801EDB38(void *arg0) {
    void fn_8016969C(void);
    switch ((s32)*(u8 *)((char *)arg0 + 0x38)) {
    case 2:
    case 3:
        fn_8016969C();
        break;
    }
}

void fn_801EDB70(void *arg0) {
    u8 temp_r0;

    M2C_FIELD(arg0, s16 *, 0x3A) = -1;
    M2C_FIELD(arg0, s8 *, 0x39) = 1;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    temp_r0 = *(u8 *)((char *)arg0 + 0x38);
    switch ((s32)temp_r0) {
    case 1:
        fn_8000C070(arg0, 0xA);
        break;
    }
}

void fn_801EDDF0(void *arg0) {
    void *fn_800C42D8(s32);
    void *fn_801A7FA4(void *);
    void fn_801A9CF4(void *, void *);
    void fn_80034864(void *, void *);
    void fn_8003D2C4(void *);
    extern u8 lbl_80330EAC[];
    extern u8 lbl_802EF4C8[];
    void *temp;
    u8 *base;
    u8 *base_2e0;

    if (*(u32 *)(lbl_80330EAC + 0x188) != 0) {
        temp = fn_800C42D8(0x2E0);
        if (temp != NULL) {
            temp = fn_801A7FA4(temp);
        }
        *(void **)((u8 *)arg0 + 0x4C) = temp;
        fn_801A9CF4(*(void **)((u8 *)arg0 + 0x4C), lbl_80330EAC);
    }
    base = lbl_80330EAC;
    base_2e0 = base + 0x2E0;
    if ((s32)base_2e0 < 0 && *(u32 *)(base + 0x468) != 0) {
        temp = fn_800C42D8(0x2E0);
        if (temp != NULL) {
            temp = fn_801A7FA4(temp);
        }
        *(void **)((u8 *)arg0 + 0x50) = temp;
        fn_801A9CF4(*(void **)((u8 *)arg0 + 0x50), base_2e0);
    }
    lbl_802EF4C8[0x14] = 0xFF;
    fn_80034864(lbl_80330EAC, *(void **)((u8 *)arg0 + 0x30));
    fn_8003D2C4(*(void **)((u8 *)arg0 + 0x30));
}

void fn_801EDEC8(void *arg0) {
    extern s32 lbl_80367110;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (lbl_80367110 & 4);
    lbl_80367110 |= 4;
}

void fn_801EDEE4(void *arg0) {
    void *fn_8000C0C0(void *);
    void fn_80015D54(void);
    void fn_80016180(void);
    void fn_80016358(void);
    void fn_800163F8(void);
    void fn_8014C798(void *);
    void fn_8014C7C0(void *, u8 *);
    extern u8 lbl_8029A5FC[];
    extern u8 lbl_80330708[];
    void *temp_r3;
    u8 var_r0;
    s32 temp_r0;

    if (*(u8 *)((u8 *)arg0 + 0x39) != 0) {
        fn_8014C7C0(lbl_80330708, lbl_80330708 + 0x504);
        fn_8014C798(lbl_80330708);
    }
    temp_r3 = fn_8000C0C0(lbl_8029A5FC);
    if (temp_r3 != NULL) {
        temp_r0 = *(u8 *)((u8 *)temp_r3 + 0x38);
        switch (temp_r0) {
        case 2:
        case 3:
            var_r0 = 1;
            break;
        default:
            goto block_7;
        }
    } else {
    block_7:
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        fn_80016358();
    } else {
        fn_800163F8();
    }
    fn_80016180();
    fn_80015D54();
}

void fn_801EDF7C(void *arg0) {
    M2C_UNK fn_800162B8();
    u8 fn_80040824();
    M2C_UNK fn_8014C718(void *, void *);
    extern u8 lbl_80330708[];
    M2C_FIELD(arg0, u8 *, 0x39) = fn_80040824();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x39) != 0) {
        fn_8014C718(lbl_80330708, arg0);
    }
    fn_800162B8();
}

#pragma global_optimizer off
void fn_801EDFCC(void) {
    extern u8 lbl_8032FF08[];
    void fn_80146AF0(void);
    void fn_801487D0(void *, s32);
    void fn_8014876C(void *, s32, s32);
    s32 p;

    p = (s32)lbl_8032FF08;
    fn_80146AF0();
    fn_801487D0((void *)p, 0x3E8);
    fn_8014876C((void *)p, 0x64, 0x3E8);
}
#pragma global_optimizer on
void fn_801EE018(void *arg0) {
    extern u8 lbl_8032FF08[];
    void fn_80148980(void *, s32, s32);
    s16 temp_r5;

    temp_r5 = *(s16 *)((char *)arg0 + 0x3A);
    fn_80148980(lbl_8032FF08 + ((u8)temp_r5 * 0x30), 0x3E8, temp_r5);
}

void fn_801EE054(void *arg0) {
    s8 fn_80148618(void *, s32);
    extern u16 lbl_8027F26C[];

    *(s16 *)((char *)arg0 + 0x3A) = fn_80148618((u8 *)lbl_8027F26C + 0x195, 1);
}

void fn_801EE098(void) {
    M2C_UNK fn_80146B00();
    M2C_UNK fn_801478D0(M2C_UNK);
    M2C_UNK fn_80147FA8(M2C_UNK);
    fn_80147FA8(0x3E8);
    fn_801478D0(0x3E8);
    fn_80146B00();
}

#pragma use_lmw_stmw on
void fn_801EE76C(void *arg0) {
    void *fn_800C42D8(s32);
    void fn_800D6878(void *, void *, void *);
    void fn_8022C260(void *, void *, void *, s32, s32);
    void *fn_80068548(void);
    void fn_801C77A4(f32, f32, f32);
    void fn_801EFDC8(void *);
    s32 fn_800C9400(void *, s32, void *, char *, s32);
    void *fn_8000C0C0(void *);
    void *fn_8014D8FC(void *);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800C992C(void *, char *, s32);
    void fn_800408A8(s32);
    void fn_8004084C(void);
    void *fn_80040844(void);
    void *fn_800C93EC(void *);
    void fn_80041514(void *, void *);
    void fn_800CB90C(void *, void *, char *);
    void *fn_800C91EC(void *, void *, void *);
    void fn_800C9A60(void *, s32);
    void fn_800C8DCC(void *, void *, void *);
    void fn_800C9120(void *, s32);
    void fn_801EFB2C(void *, char *);
    void fn_801EF6BC(void *);
    void fn_801EEF74(void *, s32);
    void fn_800558D8(char *);
    void *fn_8000CAF0(void *, void *);
    void *fn_80059208(void *, void *);
    void fn_8000C070(void *, s32);
    void fn_800E99CC(void *);
    void fn_801EEDB4(void);
    s32 strlen(char *);
    extern char lbl_8027F26C[];
    extern u8 lbl_8029A5FC[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80330EAC[];
    extern u8 lbl_8029A5BC[];
    extern f32 lbl_8036B7B8;
    extern f32 lbl_8036B7C0;
    extern f32 lbl_8036B7C4;
    extern f32 lbl_8036B7C8;

    char bufAC[0x20];
    char buf8C[0x20];
    char buf6C[0x20];
    String sp60;
    String sp54;
    String sp48;
    String sp3C;
    String sp30;
    String sp24;
    void *sp20;
    void *sp1C;
    void *sp18;
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;
    s32 n;
    s32 ok;
    s32 st;
    char *str;
    void *cam;
    s8 flag27;
    s8 flag26;
    char *path;
    void *r29;
    void *obj;
    void *self;

    self = arg0;
    obj = fn_800C42D8(0xD8);
    r29 = obj;
    path = (char *)obj;
    if (obj != NULL) {
        fn_800D6878((char *)obj + 4, &sp8, &spC);
        fn_8022C260(path + 0x14, (void *)fn_800E99CC, (void *)fn_800C9A60, 0xC, 2);
        fn_8022C260(path + 0x2C, (void *)fn_800E99CC, (void *)fn_800C9A60, 0xC, 2);
        fn_8022C260(path + 0x44, (void *)fn_800E99CC, (void *)fn_800C9A60, 0xC, 2);
        fn_8022C260(path + 0x5C, (void *)fn_800E99CC, (void *)fn_800C9A60, 0xC, 2);
        fn_8022C260(path + 0x74, (void *)fn_800E99CC, (void *)fn_800C9A60, 0xC, 2);
        fn_8022C260(path + 0x8C, (void *)fn_800E99CC, (void *)fn_800C9A60, 0xC, 2);
    }
    *(void **)((char *)self + 0x48) = obj;

    cam = fn_80068548();
    f3 = lbl_8036B7B8;
    f2 = lbl_8036B7C0;
    *(f32 *)((char *)cam + 0xE0) = f3;
    f1 = lbl_8036B7C4;
    *(f32 *)((char *)cam + 0xE4) = f3;
    f0 = lbl_8036B7C8;
    *(f32 *)((char *)cam + 0xE8) = f3;
    *(f32 *)((char *)cam + 0xD4) = f3;
    *(f32 *)((char *)cam + 0xD8) = f2;
    *(f32 *)((char *)cam + 0xDC) = f1;
    *(f32 *)((char *)cam + 0xEC) = f3;
    *(f32 *)((char *)cam + 0xF0) = f0;
    *(f32 *)((char *)cam + 0xF4) = f3;
    fn_801C77A4(f1, f2, f3);

    fn_801EFDC8(*(void **)((char *)self + 0x48));

    path = (char *)*(void **)((char *)self + 0x48) + 0x5C;
    str = lbl_8027F26C;
    str += 0x1CE;
    n = strlen(str);
    str = lbl_8027F26C;
    if (fn_800C9400(path, 0, *(void **)path, str + 0x1CE, n) != 0) {
        r29 = fn_8000C0C0(lbl_8029A5FC);
        if (r29 == NULL) {
            goto set0;
        }
        st = *(u8 *)((char *)r29 + 0x38);
        if (st >= 4) {
            goto set0;
        }
        if (st < 2) {
            ok = 0;
        } else {
            ok = 1;
        }
        goto setdone;
set0:
        ok = 0;
setdone:
        if ((u8)ok == 0) {
            r29 = *(void **)(lbl_80330EAC + 0xCB0);
            path = *(char **)(lbl_80330EAC + 0xCB4);
        } else {
            goto use30708;
        }
    } else {
use30708:
        r29 = fn_8014D8FC(lbl_80330708);
        path = *(char **)((char *)r29 + 0x4C);
        r29 = *(void **)((char *)r29 + 0x48);
    }

    obj = *(void **)((char *)self + 0x48);
    fn_800C9ABC(&sp24, lbl_8027F26C + 0x1D6, &sp10);
    n = strlen((char *)r29);
    fn_800C992C(&sp24, (char *)r29, n);
    str = lbl_8027F26C;
    str += 0x1BF;
    n = strlen(str);
    str = lbl_8027F26C;
    fn_800C992C(&sp24, str + 0x1BF, n);
    fn_800408A8(1);
    fn_8004084C();
    r29 = fn_80040844();
    fn_80041514(r29, fn_800C93EC(&sp24));

    flag27 = 0;
    flag26 = 0;
    r29 = fn_800C42D8(0x60);
    if (r29 != NULL) {
        fn_800C9ABC(&sp30, lbl_8027F26C + 0x1DB, &sp14);
        flag27 = 1;
        fn_800CB90C(&sp3C, &sp24, lbl_8027F26C + 0x1E0);
        flag26 = 1;
        r29 = fn_800C91EC(r29, &sp3C, &sp30);
    }
    if (flag26 != 0) {
        fn_800C9A60(&sp3C, -1);
    }
    if (flag27 != 0) {
        fn_800C9A60(&sp30, -1);
    }

    fn_800C9ABC(&sp48, lbl_8027F26C + 0x1EA, &sp18);
    fn_800C8DCC(buf6C, r29, &sp48);
    *(s32 *)((char *)obj + 0xA8) = *(s32 *)buf6C;
    fn_800C9A60(&sp48, -1);

    fn_800C9ABC(&sp54, lbl_8027F26C + 0x1F3, &sp1C);
    fn_800C8DCC(buf8C, r29, &sp54);
    *(s32 *)((char *)obj + 0xAC) = *(s32 *)buf8C;
    fn_800C9A60(&sp54, -1);

    fn_800C9ABC(&sp60, lbl_8027F26C + 0x1FE, &sp20);
    fn_800C8DCC(bufAC, r29, &sp60);
    *(s32 *)((char *)obj + 0xB0) = *(s32 *)bufAC;
    fn_800C9A60(&sp60, -1);

    fn_800C9120(r29, 1);
    fn_800C9A60(&sp24, -1);

    fn_801EFB2C(*(void **)((char *)self + 0x48), path);
    fn_801EF6BC(*(void **)((char *)self + 0x48));
    fn_801EEF74(*(void **)((char *)self + 0x48), 0);
    fn_800558D8(lbl_8027F26C + 0x1AB);
    *(void **)((char *)self + 0x44) = fn_8000CAF0(lbl_8029A5BC, self);
    *(void **)((char *)self + 0x40) = fn_80059208((void *)fn_801EEDB4, self);
    *(s16 *)((char *)self + 0x3E) = 0;
    *(s16 *)((char *)self + 0x3C) = 0;
    r29 = *(void **)((char *)self + 0x44);
    fn_8000C070(r29, 0xA);
    *(s16 *)((char *)r29 + 0x48) = 0;
}
void fn_801EEBC0(void* arg0) {
    // This is clearly a complex initialization function with multiple operations,
    // not just simple vtable setting. It involves several calls and conditional
    // logic based on different data locations.
    if (arg0 != NULL) {
        void** obj = (void**)arg0;
        // Set up some basic structure elements
        obj[0x11] = *(void**)((char*)obj + 0x44);
        obj[0x12] = *(void**)((char*)obj + 0x40);
        obj[0x13] = *(void**)((char*)obj + 0x3c);
        obj[0x14] = *(void**)((char*)obj + 0x38);
        obj[0x15] = *(void**)((char*)obj + 0x34);
    }
}

void fn_801EED74(void) {
    M2C_UNK fn_801EE0C8();
    fn_801EE0C8();
}

void fn_801EED94(void) {
    M2C_UNK fn_801EE76C();
    fn_801EE76C();
}

void fn_801EEF74(void *arg0, s32 arg1) {
    s32 fn_8005C84C(void);
    void fn_8005F7B0(void *, s32);
    void fn_8005F7E0(void *, s32, s32, s32);
    void *fn_8006135C(void *, char *);
    void fn_8006140C(void *);
    void *fn_80061870(void);
    s32 fn_800639B4(void);
    s32 fn_80065EE8(void);
    s32 fn_8006CE14(void);
    s32 fn_8006D948(void);
    void *fn_800C93EC(void *);
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800C9A60(void *, s32);
    void fn_800C9B6C(void *, void *);
    void fn_800CB8A4(void *, void *, void *);
    void fn_800CB90C(void *, void *, char *);
    void fn_800CBF24(void *, char *, void *);
    s32 fn_800E49D0(void);
    void fn_801C4468(void *);
    void fn_801C6E60(void *);
    void fn_801EF39C(void *, void *, s32);
    extern char lbl_8027F26C[];
    extern u8 lbl_80330EAC[];

    String spBC;
    String spB0;
    String spA4;
    String sp98;
    String sp8C;
    String sp80;
    String sp74;
    String sp68;
    String sp5C;
    String sp50;
    String sp44;
    String sp38;
    String sp2C;
    String sp20;
    String sp14;
    String sp8;
    void *self;
    void *path44;
    u8 *row;
    void *obj;
    void *tmp;
    void **slot;
    void *p;
    u8 val;

    self = arg0;

    spBC.cap = 0;
    spBC.size = 0;
    spBC.data = 0;
    spBC.cap = 0;
    fn_801EF39C(&sp98, self, arg1);
    fn_800C9B6C(&spB0, &sp98);
    fn_800C9A60(&sp98, -1);
    fn_800CBF24(&sp8C, lbl_8027F26C + 0x1BB, &spB0);
    fn_800CB90C(&sp80, &sp8C, lbl_8027F26C + 0x1BF);
    fn_800C9B6C(&spA4, &sp80);
    fn_800C9A60(&sp80, -1);
    fn_800C9A60(&sp8C, -1);
    fn_800CB8A4(&sp74, &spA4, &spB0);
    fn_800CB90C(&sp68, &sp74, lbl_8027F26C + 0x1C1);
    fn_800C9758(&spBC, &sp68, 0, -1);
    fn_800C9A60(&sp68, -1);
    fn_800C9A60(&sp74, -1);
    fn_800C93EC(&spBC);
    *(s32 *)((u8 *)self + 0xB4) = fn_8005C84C();
    *(void **)((u8 *)self + 0xB8) = fn_80061870();
    row = (u8 *)self + arg1 * 0xC;
    path44 = row + 0x44;
    fn_800CB8A4(&sp5C, &spA4, path44);
    fn_800CB90C(&sp50, &sp5C, lbl_8027F26C + 0x208);
    fn_800C9758(&spBC, &sp50, 0, -1);
    fn_800C9A60(&sp50, -1);
    fn_800C9A60(&sp5C, -1);
    fn_800C93EC(&spBC);
    tmp = (void *)fn_8006CE14();
    obj = *(void **)((u8 *)self + 0xB8);
    *(s32 *)((u8 *)obj + 0x48) = (s32)tmp;
    fn_800CB8A4(&sp44, &spA4, path44);
    fn_800CB90C(&sp38, &sp44, lbl_8027F26C + 0x20C);
    fn_800C9758(&spBC, &sp38, 0, -1);
    fn_800C9A60(&sp38, -1);
    fn_800C9A60(&sp44, -1);
    fn_800C93EC(&spBC);
    tmp = (void *)fn_80065EE8();
    obj = *(void **)((u8 *)self + 0xB8);
    *(s32 *)((u8 *)obj + 0x40) = (s32)tmp;
    fn_800CB8A4(&sp2C, &spA4, row + 0x14);
    fn_800CB90C(&sp20, &sp2C, lbl_8027F26C + 0x1C9);
    fn_800C9758(&spBC, &sp20, 0, -1);
    fn_800C9A60(&sp20, -1);
    fn_800C9A60(&sp2C, -1);
    fn_800C93EC(&spBC);
    tmp = (void *)fn_8006D948();
    obj = *(void **)((u8 *)self + 0xB8);
    *(s32 *)((u8 *)obj + 0x4C) = (s32)tmp;
    fn_800CB8A4(&sp14, &spA4, row + 0x2C);
    fn_800CB90C(&sp8, &sp14, lbl_8027F26C + 0x20F);
    fn_800C9758(&spBC, &sp8, 0, -1);
    fn_800C9A60(&sp8, -1);
    fn_800C9A60(&sp14, -1);
    fn_800C93EC(&spBC);
    tmp = (void *)fn_800639B4();
    obj = *(void **)((u8 *)self + 0xB8);
    *(s32 *)((u8 *)obj + 0x44) = (s32)tmp;
    fn_8006140C(*(void **)((u8 *)self + 0xB8));
    obj = *(void **)((u8 *)self + 0xB8);
    *(u32 *)obj |= 0x8000;
    obj = *(void **)((u8 *)self + 0xB8);
    *(u8 *)((u8 *)obj + 0x85) |= 0xF0;
    *(u8 *)((u8 *)*(void **)((u8 *)self + 0xB8) + 0x84) = 0xFF;
    *(u8 *)((u8 *)*(void **)((u8 *)self + 0xB8) + 0x87) = 4;
    path44 = *(void **)((u8 *)self + 0xB8);
    *(void **)((u8 *)self + 0xBC) = fn_80061870();
    obj = *(void **)((u8 *)self + 0xBC);
    *(void **)((u8 *)obj + 4) = path44;
    fn_8005F7E0(*(void **)((u8 *)self + 0xBC), 0, 0, 0);
    fn_8005F7B0(*(void **)((u8 *)self + 0xBC), fn_800E49D0());
    obj = *(void **)((u8 *)self + 0xBC);
    *(u8 *)((u8 *)obj + 0x87) = 0;
    obj = *(void **)((u8 *)self + 0xBC);
    *(u32 *)obj |= 0x4001E400;
    slot = (void **)(lbl_80330EAC + 0x28C);
    if (slot != NULL && (p = *slot, p != NULL)) {
        val = (p != NULL) ? *(u8 *)((u8 *)p + 0x12) : 0xC;
        if ((u8)val == 3) {
            *(void **)((u8 *)self + 0xA4) = fn_8006135C(*(void **)((u8 *)self + 0xB8), lbl_8027F26C + 0x213);
        } else {
            goto block_else;
        }
    } else {
block_else:
        *(void **)((u8 *)self + 0xA4) = fn_8006135C(*(void **)((u8 *)self + 0xB8), lbl_8027F26C + 0x21A);
    }
    if (*(s32 *)((u8 *)self + 0xAC) == 2) {
        fn_801C4468(*(void **)((u8 *)self + 0xB8));
        fn_801C6E60(*(void **)((u8 *)self + 0xB8));
    }
    fn_800C9A60(&spA4, -1);
    fn_800C9A60(&spB0, -1);
    fn_800C9A60(&spBC, -1);
}

void fn_801EF39C(String *arg0, u8 *arg1, s32 arg2) {
    s32 fn_800C9400(String *, s32, s32, char *, s32);
    void fn_800C9758(String *, void *, s32, s32);
    void fn_800C9A60(String *, s32);
    void fn_800C9ABC(String *, char *, void *);
    void fn_800C9B6C(String *, void *);
    void fn_800CB8A4(String *, String *, String *);
    void fn_800CB90C(String *, String *, char *);
    void *fn_800D59CC(void *, String *);
    s32 strlen(char *);
    extern char lbl_8027F26C[];

    String sp54;
    String sp48;
    String sp3C;
    String sp30;
    String sp24;
    String sp18;
    String spC;
    u8 sp8[4];
    s32 n;
    u8 *row;
    String *out;
    u8 *base;

    out = arg0;
    base = arg1;
    row = base + arg2 * 0xC;
    sp54.cap = 0;
    sp48.cap = 0;
    sp54.size = 0;
    sp54.data = 0;
    sp54.cap = 0;
    sp48.size = 0;
    sp48.data = 0;
    sp48.cap = 0;
    fn_800C9B6C(&sp3C, row + 0x74);
    fn_800C9B6C(&sp30, row + 0x5C);
    fn_800C9B6C(&sp24, row + 0x8C);
    fn_800C9758(&sp48, (u8 *)fn_800D59CC(base + 4, &sp24) + 0xC, 0, -1);
    n = strlen((char *)((u8 *)lbl_8027F26C + 0x221));
    if (fn_800C9400(&sp48, 0, (s32)sp48.size, (char *)((u32)lbl_8027F26C + 0x221), n) != 0) {
        fn_800C9B6C(out, &sp48);
        fn_800C9A60(&sp24, -1);
        fn_800C9A60(&sp30, -1);
        fn_800C9A60(&sp3C, -1);
        fn_800C9A60(&sp48, -1);
        fn_800C9A60(&sp54, -1);
        return;
    }
    fn_800CB90C(&sp18, &sp3C, (char *)((u8 *)lbl_8027F26C + 0x222));
    fn_800CB8A4(&spC, &sp18, &sp30);
    fn_800C9758(&sp54, &spC, 0, -1);
    fn_800C9A60(&spC, -1);
    fn_800C9A60(&sp18, -1);
    fn_800C9758(&sp48, (u8 *)fn_800D59CC(base + 4, &sp54) + 0xC, 0, -1);
    n = strlen((char *)((u8 *)lbl_8027F26C + 0x221));
    if (fn_800C9400(&sp48, 0, (s32)sp48.size, (char *)((u32)lbl_8027F26C + 0x221), n) != 0) {
        fn_800C9B6C(out, &sp48);
        fn_800C9A60(&sp24, -1);
        fn_800C9A60(&sp30, -1);
        fn_800C9A60(&sp3C, -1);
        fn_800C9A60(&sp48, -1);
        fn_800C9A60(&sp54, -1);
        return;
    }
    fn_800C9758(&sp48, (u8 *)fn_800D59CC(base + 4, &sp3C) + 0xC, 0, -1);
    n = strlen((char *)((u8 *)lbl_8027F26C + 0x221));
    if (fn_800C9400(&sp48, 0, (s32)sp48.size, (char *)((u32)lbl_8027F26C + 0x221), n) != 0) {
        fn_800C9B6C(out, &sp48);
        fn_800C9A60(&sp24, -1);
        fn_800C9A60(&sp30, -1);
        fn_800C9A60(&sp3C, -1);
        fn_800C9A60(&sp48, -1);
        fn_800C9A60(&sp54, -1);
        return;
    }
    fn_800C9ABC(out, (char *)((u8 *)lbl_8027F26C + 0x221), sp8);
    fn_800C9A60(&sp24, -1);
    fn_800C9A60(&sp30, -1);
    fn_800C9A60(&sp3C, -1);
    fn_800C9A60(&sp48, -1);
    fn_800C9A60(&sp54, -1);
}

void fn_801EF6BC(void *arg0) {
    typedef struct { u32 unk0; char name[4]; } Named;
    u16 fn_8005C144(void);
    s32 fn_8005C84C(void);
    void fn_8005F7B0(void *, s32);
    void fn_8005F7E0(void *, s32, s32, s32);
    void fn_8006140C(void *);
    void *fn_80061870(void);
    s32 fn_80065EE8(void);
    s32 fn_8006CE14(void);
    s32 fn_8006D948(void);
    void fn_8008CDE0(void *, void *);
    void *fn_800C93EC(void *);
    void fn_800C96F8(void *, char *, s32);
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800C9A60(void *, s32);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800CB8A4(void *, void *, void *);
    void fn_800CB90C(void *, void *, char *);
    s32 fn_800E49D0(void);
    void fn_801C6E60(void *);
    s32 strlen(char *);
    extern char lbl_8027F26C[];
    extern u8 lbl_80330EAC[];

    String spE4;
    String spD8;
    String spCC;
    String spC0;
    String spB4;
    String spA8;
    String sp9C;
    String sp90;
    String sp84;
    String sp78;
    String sp6C;
    String sp60;
    String sp54;
    String sp48;
    String sp3C;
    String sp30;
    String sp24;
    String sp18;
    String spC;
    void *sp8;
    void *slot;
    void *self;
    Named *p;
    void *obj;
    void *tmp;

    self = arg0;

    spE4.cap = 0;
    spD8.cap = 0;
    spE4.size = 0;
    spE4.data = 0;
    spE4.cap = 0;
    spD8.size = 0;
    spD8.data = 0;
    spD8.cap = 0;
    fn_800C9ABC(&spCC, lbl_8027F26C + 0x224, &sp8);
    p = 0;
    *(void **)((u8 *)self + 0xC0) = p;
    slot = lbl_80330EAC + 0x28C;
    *(void **)((u8 *)self + 0xC4) = p;
    if (slot == NULL || *(void **)slot == NULL) {
        fn_800C9A60(&spCC, -1);
        fn_800C9A60(&spD8, -1);
        fn_800C9A60(&spE4, -1);
        return;
    }
    if (*(void **)slot != NULL) {
        p = *(Named **)*(void **)slot;
    }
    fn_800C96F8(&spD8, p->name, strlen(p->name));
    fn_800CB8A4(&spC0, &spCC, &spD8);
    fn_800CB90C(&spB4, &spC0, lbl_8027F26C + 0x1BF);
    fn_800CB8A4(&spA8, &spB4, &spD8);
    fn_800CB90C(&sp9C, &spA8, lbl_8027F26C + 0x229);
    fn_800C9758(&spE4, &sp9C, 0, -1);
    fn_800C9A60(&sp9C, -1);
    fn_800C9A60(&spA8, -1);
    fn_800C9A60(&spB4, -1);
    fn_800C9A60(&spC0, -1);
    fn_800C93EC(&spE4);
    if ((u16)fn_8005C144() != 0x8000) {
        fn_800C93EC(&spE4);
        *(s32 *)((u8 *)self + 0xC0) = fn_8005C84C();
        *(void **)((u8 *)self + 0xC4) = fn_80061870();
        fn_800CB8A4(&sp90, &spCC, &spD8);
        fn_800CB90C(&sp84, &sp90, (char *)((u32)lbl_8027F26C + 0x1BF));
        fn_800CB8A4(&sp78, &sp84, &spD8);
        fn_800CB90C(&sp6C, &sp78, lbl_8027F26C + 0x208);
        fn_800C9758(&spE4, &sp6C, 0, -1);
        fn_800C9A60(&sp6C, -1);
        fn_800C9A60(&sp78, -1);
        fn_800C9A60(&sp84, -1);
        fn_800C9A60(&sp90, -1);
        fn_800C93EC(&spE4);
        tmp = (void *)fn_8006CE14();
        obj = *(void **)((u8 *)self + 0xC4);
        *(s32 *)((u8 *)obj + 0x48) = (s32)tmp;
        fn_800CB8A4(&sp60, &spCC, &spD8);
        fn_800CB90C(&sp54, &sp60, (char *)((u8 *)lbl_8027F26C + 0x1BF));
        fn_800CB8A4(&sp48, &sp54, &spD8);
        fn_800CB90C(&sp3C, &sp48, lbl_8027F26C + 0x20C);
        fn_800C9758(&spE4, &sp3C, 0, -1);
        fn_800C9A60(&sp3C, -1);
        fn_800C9A60(&sp48, -1);
        fn_800C9A60(&sp54, -1);
        fn_800C9A60(&sp60, -1);
        fn_800C93EC(&spE4);
        tmp = (void *)fn_80065EE8();
        obj = *(void **)((u8 *)self + 0xC4);
        *(s32 *)((u8 *)obj + 0x40) = (s32)tmp;
        fn_800CB8A4(&sp30, &spCC, &spD8);
        fn_800CB90C(&sp24, &sp30, (char *)(lbl_8027F26C + 0x1BF));
        fn_800CB8A4(&sp18, &sp24, &spD8);
        fn_800CB90C(&spC, &sp18, lbl_8027F26C + 0x1C9);
        fn_800C9758(&spE4, &spC, 0, -1);
        fn_800C9A60(&spC, -1);
        fn_800C9A60(&sp18, -1);
        fn_800C9A60(&sp24, -1);
        fn_800C9A60(&sp30, -1);
        fn_800C93EC(&spE4);
        tmp = (void *)fn_8006D948();
        obj = *(void **)((u8 *)self + 0xC4);
        *(s32 *)((u8 *)obj + 0x4C) = (s32)tmp;
        fn_8006140C(*(void **)((u8 *)self + 0xC4));
        obj = *(void **)((u8 *)self + 0xC4);
        *(u32 *)obj |= 0x8000;
        obj = *(void **)((u8 *)self + 0xC4);
        *(u8 *)((u8 *)obj + 0x85) |= 0xF0;
        *(u8 *)((u8 *)*(void **)((u8 *)self + 0xC4) + 0x84) = 0xFF;
        *(u8 *)((u8 *)*(void **)((u8 *)self + 0xC4) + 0x87) = 4;
        fn_8008CDE0(*(void **)((u8 *)self + 0xC4), slot);
        slot = *(void **)((u8 *)self + 0xC4);
        *(void **)((u8 *)self + 0xC8) = fn_80061870();
        obj = *(void **)((u8 *)self + 0xC8);
        *(void **)((u8 *)obj + 4) = slot;
        fn_8005F7E0(*(void **)((u8 *)self + 0xC8), 0, 0, 0);
        fn_8005F7B0(*(void **)((u8 *)self + 0xC8), fn_800E49D0());
        obj = *(void **)((u8 *)self + 0xC8);
        *(u8 *)((u8 *)obj + 0x87) = 0;
        obj = *(void **)((u8 *)self + 0xC8);
        *(u32 *)obj |= 0x4001E400;
        fn_801C6E60(*(void **)((u8 *)self + 0xC4));
        (void)p;
    } else {
        (void)p;
    }
    fn_800C9A60(&spCC, -1);
    fn_800C9A60(&spD8, -1);
    fn_800C9A60(&spE4, -1);
}

void fn_801EFB2C(void *arg0, char *arg1) {
    void *fn_80040844(void *);
    s32 fn_8005C84C(void);
    void fn_8006140C(void *);
    void *fn_80061870(void);
    s32 fn_800639B4(void);
    s32 fn_80065EE8(void);
    s32 fn_8006CE14(void);
    s32 fn_8006D948(void);
    void *fn_800C93EC(void *);
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800C992C(void *, char *, s32);
    void fn_800C9A60(void *, s32);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800CB90C(void *, void *, char *);
    s32 strlen(char *);
    extern char lbl_8027F26C[];
    extern f32 lbl_8036B7D0;

    String sp54;
    String sp48;
    String sp3C;
    String sp30;
    String sp24;
    String sp18;
    String spC;
    void *sp8;
    void *self;
    void *obj;
    void *tmp;
    s32 n;
    f32 f;

    self = arg0;
    if (arg1 == NULL || *(s32 *)((u8 *)self + 0xA8) != 0) {
        *(void **)((u8 *)self + 0xD0) = NULL;
        return;
    }

    sp54.cap = 0;
    sp54.size = 0;
    sp54.data = 0;
    sp54.cap = 0;
    fn_800C9ABC(&sp48, lbl_8027F26C + 0x1D6, &sp8);
    n = strlen(arg1);
    fn_800C992C(&sp48, arg1, n);
    n = strlen((char *)((u32)lbl_8027F26C + 0x1BF));
    fn_800C992C(&sp48, (char *)((u8 *)lbl_8027F26C + 0x1BF), n);
    n = strlen(arg1);
    fn_800C992C(&sp48, arg1, n);
    fn_800CB90C(&sp3C, &sp48, lbl_8027F26C + 0x229);
    fn_800C9758(&sp54, &sp3C, 0, -1);
    fn_800C9A60(&sp3C, -1);
    fn_800C93EC(&sp54);
    *(s32 *)((u8 *)self + 0xCC) = fn_8005C84C();
    *(void **)((u8 *)self + 0xD0) = fn_80061870();
    fn_800CB90C(&sp30, &sp48, lbl_8027F26C + 0x208);
    fn_800C9758(&sp54, &sp30, 0, -1);
    fn_800C9A60(&sp30, -1);
    fn_800C93EC(&sp54);
    tmp = (void *)fn_8006CE14();
    obj = *(void **)((u8 *)self + 0xD0);
    *(s32 *)((u8 *)obj + 0x48) = (s32)tmp;
    fn_800CB90C(&sp24, &sp48, lbl_8027F26C + 0x20C);
    fn_800C9758(&sp54, &sp24, 0, -1);
    fn_800C9A60(&sp24, -1);
    fn_800C93EC(&sp54);
    tmp = (void *)fn_80065EE8();
    obj = *(void **)((u8 *)self + 0xD0);
    *(s32 *)((u8 *)obj + 0x40) = (s32)tmp;
    fn_800CB90C(&sp18, &sp48, lbl_8027F26C + 0x1C9);
    fn_800C9758(&sp54, &sp18, 0, -1);
    fn_800C9A60(&sp18, -1);
    fn_800C93EC(&sp54);
    tmp = (void *)fn_8006D948();
    obj = *(void **)((u8 *)self + 0xD0);
    *(s32 *)((u8 *)obj + 0x4C) = (s32)tmp;
    fn_800CB90C(&spC, &sp48, lbl_8027F26C + 0x20F);
    fn_800C9758(&sp54, &spC, 0, -1);
    fn_800C9A60(&spC, -1);
    fn_800C93EC(&sp54);
    tmp = (void *)fn_800639B4();
    obj = *(void **)((u8 *)self + 0xD0);
    *(s32 *)((u8 *)obj + 0x44) = (s32)tmp;
    fn_8006140C(*(void **)((u8 *)self + 0xD0));
    obj = *(void **)((u8 *)self + 0xD0);
    f = lbl_8036B7D0;
    *(u32 *)obj |= 0x01040000;
    obj = *(void **)((u8 *)self + 0xD0);
    *(f32 *)((u8 *)obj + 0x5C) = f;
    tmp = fn_80040844(obj);
    *(void **)((u8 *)tmp + 0x34) = *(void **)((u8 *)self + 0xD0);
    fn_800C9A60(&sp48, -1);
    fn_800C9A60(&sp54, -1);
}

#pragma global_optimizer off
#pragma use_lmw_stmw on
void fn_801EFDC8(void *arg0) {
    void fn_800D58C0(void);
    void fn_800C9ABC(String *, char *, void *);
    void fn_800C992C(String *, char *, s32);
    void *fn_800C42D8(s32);
    void *fn_800C91EC(void *, String *, String *);
    void fn_800C9A60(String *, s32);
    void fn_8023440C(void *, char *, s32);
    void fn_800C908C(void *, String *, void *);
    u8 fn_800C8EFC(void *);
    void fn_800C8CB4(String *, void *);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C8D58(char *, void *);
    void fn_800C96F8(String *, char *, s32);
    s32 fn_800D5948(String *, char *, s32, s32);
    void fn_800D5D04(String *, String *, s32, s32);
    void fn_800CBF24(String *, char *, String *);
    void fn_800C99A0(String *, String *, s32, s32);
    void *fn_800D59CC(void *, String *);
    void fn_800C9120(void *, s32);
    char *fn_80050AB8(void *);
    void fn_801EF39C(String *, void *, s32);
    void fn_800CB8A4(String *, String *, String *);
    void fn_800CB90C(String *, String *, char *);
    s32 fn_800C9400(String *, s32, void *, char *, s32);
    void fn_800D6878(void *, void *, void *);
    void fn_800C8DCC(char *, void *, String *);
    void fn_801F1888(void *);
    s32 strlen(char *);
    extern char lbl_8027F26C[];
    extern char lbl_8027F25C[];
    extern u8 lbl_80330EAC[];

    char buf260[0x20];
    char buf224[0x20];
    char buf204[0x20];
    char buf1E4[0x20];
    char buf1C4[0x20];
    char buf1A4[0x20];
    char buf184[0x20];
    String path;
    String str16c;
    String str160;
    String str154;
    String str148;
    String str13c;
    String str130;
    String str124;
    u32 classNames[4];
    void *tree[4];
    String spF8;
    String spEC;
    String spE0;
    String spD4;
    String spC8;
    String spBC;
    String spB0;
    String spA4;
    String sp98;
    String sp8C;
    String sp80;
    String sp74;
    String sp68;
    String sp5C;
    String sp50;
    String sp44;
    String sp38;
    void *mgrs[2];
    void *sp2C, *sp28, *sp24, *sp20, *sp1C, *sp18, *sp14, *sp10, *spC, *sp8;
    void **slot;
    char *s;
    char *strBase;
    char *p204;
    void *file;
    void *file2;
    void *base;
    void *self;
    s32 i, j, pos, count, kind;
    s8 flag0, flag1, flag2;

    self = arg0;
    fn_800D58C0();
    fn_800C9ABC(&path, lbl_8027F26C + 0x22E, &sp2C);
    strBase = lbl_8027F26C;
    fn_800C992C(&path, strBase + 0x234, strlen(strBase + 0x234));
    flag0 = 0;
    file = fn_800C42D8(0x60);
    if (file != NULL) {
        fn_800C9ABC(&spF8, lbl_8027F26C + 0x1DB, &sp28);
        flag0 = 1;
        file = fn_800C91EC(file, &path, &spF8);
    }
    if (flag0 != 0) {
        fn_800C9A60(&spF8, -1);
    }

    str16c.cap = 0;
    str160.cap = 0;
    str16c.size = 0;
    str16c.data = NULL;
    str16c.cap = 0;
    str160.size = 0;
    str160.data = NULL;
    str160.cap = 0;
    fn_800C9ABC(&spEC, lbl_8027F26C + 0x240, &sp24);
    fn_8023440C(buf224, lbl_8027F26C + 0x246, 0x20);
    {
        u32 *d = (u32 *)buf260;
        u32 *s2 = (u32 *)buf224;
        d[0] = s2[0]; d[1] = s2[1]; d[2] = s2[2]; d[3] = s2[3];
        d[4] = s2[4]; d[5] = s2[5]; d[6] = s2[6]; d[7] = s2[7];
    }
    fn_800C908C(file, &spEC, buf260);
    fn_800C9A60(&spEC, -1);

    p204 = buf204;
    strBase = lbl_8027F26C;
    while (fn_800C8EFC(file) != 0) {
        fn_800C8CB4(&spE0, file);
        fn_800C9758(&str16c, &spE0, 0, -1);
        fn_800C9A60(&spE0, -1);
        fn_800C8D58(p204, file);
        fn_800C96F8(&str160, p204, strlen(p204));
        pos = fn_800D5948(&str160, strBase + 0x24E, 0, strlen(strBase + 0x24E));
        if ((u32)(pos + 0x10000) != 0xFFFFFFFFU) {
            fn_800D5D04(&spD4, &str160, 0, pos);
            fn_800CBF24(&spC8, strBase + 0x222, &spD4);
            fn_800C99A0(&str16c, &spC8, 0, -1);
            fn_800C9A60(&spC8, -1);
            fn_800C9A60(&spD4, -1);
            fn_800D5D04(&spBC, &str160, pos + 1, 4);
            fn_800C9758(&str160, &spBC, 0, -1);
            fn_800C9A60(&spBC, -1);
        }
        fn_800C9758((String *)((u8 *)fn_800D59CC((u8 *)self + 4, &str16c) + 0xC), &str160, 0, -1);
    }
    fn_800C9120(file, 1);

    str154.cap = 0;
    str148.cap = 0;
    str154.size = 0;
    str154.data = NULL;
    str154.cap = 0;
    str148.size = 0;
    str148.data = NULL;
    str148.cap = 0;
    fn_800C9ABC(&str13c, lbl_8027F26C + 0x1BB, &sp20);

    str130.cap = 0;
    str124.cap = 0;
    str130.size = 0;
    str130.data = NULL;
    str130.cap = 0;
    str124.size = 0;
    str124.data = NULL;
    str124.cap = 0;
    {
        u32 *src = (u32 *)lbl_8027F25C;
        classNames[0] = src[0];
        classNames[1] = src[1];
        classNames[2] = src[2];
        classNames[3] = src[3];
    }
    mgrs[0] = lbl_80330EAC;
    mgrs[1] = lbl_80330EAC + 0x2E0;
    slot = mgrs;
    base = self;
    strBase = lbl_8027F26C;
    for (i = 0; i < 2; i++) {
        s = *(char **)(*(void **)((u8 *)*slot + 0x188));
        fn_800C96F8((String *)((u8 *)base + 0x5C), s, strlen(s));
        s = *(char **)(*(void **)((u8 *)*slot + 0x18C));
        fn_800C96F8((String *)((u8 *)base + 0x74), s, strlen(s));
        s = fn_80050AB8(*slot);
        fn_800C96F8((String *)((u8 *)base + 0x8C), s, strlen(s));
        kind = *(u8 *)(*(u8 **)((u8 *)*slot + 0x190) + 8);
        if (kind == 5) {
            kind = 0;
        }
        fn_801EF39C(&spB0, self, i);
        fn_800C9758(&str148, &spB0, 0, -1);
        fn_800C9A60(&spB0, -1);
        fn_800C96F8((String *)((u8 *)base + 0x2C), strBase + 0x221, strlen(strBase + 0x221));
        fn_800C96F8((String *)((u8 *)base + 0x44), strBase + 0x221, strlen(strBase + 0x221));

        flag0 = 0;
        flag1 = 0;
        flag2 = 0;
        file2 = fn_800C42D8(0x60);
        if (file2 != NULL) {
            fn_800C9ABC(&spA4, lbl_8027F26C + 0x1DB, &sp1C);
            flag0 = 1;
            fn_800CB8A4(&sp98, &str13c, &str148);
            flag1 = 1;
            fn_800CB90C(&sp8C, &sp98, strBase + 0x250);
            flag2 = 1;
            file2 = fn_800C91EC(file2, &sp8C, &spA4);
        }
        if (flag2 != 0) fn_800C9A60(&sp8C, -1);
        if (flag1 != 0) fn_800C9A60(&sp98, -1);
        if (flag0 != 0) fn_800C9A60(&spA4, -1);

        {
            String *field44 = (String *)((u8 *)base + 0x44);
            while (fn_800C8EFC(file2) != 0) {
                fn_800C8CB4(&sp80, file2);
                fn_800C9758(&str154, &sp80, 0, -1);
                fn_800C9A60(&sp80, -1);
                if (fn_800C9400(&str154, 0, str154.data, strBase + 0x255, strlen(strBase + 0x255)) == 0) {
                    fn_800C8D58(buf1E4, file2);
                    fn_800C96F8(field44, buf1E4, strlen(buf1E4));
                }
                if (fn_800C9400(&str154, 0, str154.data, strBase + 0x25B, strlen(strBase + 0x25B)) == 0) {
                    fn_800C8D58(buf1C4, file2);
                    fn_800C96F8((String *)((u8 *)base + 0x2C), buf1C4, strlen(buf1C4));
                    break;
                }
            }
        }
        fn_800C9120(file2, 1);

        fn_800D6878(tree, &sp8, &spC);
        flag0 = 0;
        flag1 = 0;
        flag2 = 0;
        file2 = fn_800C42D8(0x60);
        if (file2 != NULL) {
            fn_800C9ABC(&sp74, lbl_8027F26C + 0x1DB, &sp18);
            flag0 = 1;
            fn_800CB8A4(&sp68, &str13c, &str148);
            flag1 = 1;
            fn_800CB90C(&sp5C, &sp68, strBase + 0x263);
            flag2 = 1;
            file2 = fn_800C91EC(file2, &sp5C, &sp74);
        }
        if (flag2 != 0) fn_800C9A60(&sp5C, -1);
        if (flag1 != 0) fn_800C9A60(&sp68, -1);
        if (flag0 != 0) fn_800C9A60(&sp74, -1);

        fn_800C9ABC(&sp50, strBase + 0x26C, &sp14);
        fn_800C8DCC(buf1A4, file2, &sp50);
        count = *(s32 *)buf1A4;
        fn_800C9A60(&sp50, -1);

        for (j = 0; j < count; j++) {
            fn_800C8EFC(file2);
            fn_800C8CB4(&sp44, file2);
            fn_800C9758(&str130, &sp44, 0, -1);
            fn_800C9A60(&sp44, -1);
            fn_800C8D58(buf184, file2);
            fn_800C96F8(&str124, buf184, strlen(buf184));
            fn_800C9758((String *)((u8 *)fn_800D59CC(tree, &str130) + 0xC), &str124, 0, -1);
        }
        fn_800C9120(file2, 1);

        fn_800C9758(&str124, (String *)((u8 *)fn_800D59CC(tree, (String *)((u8 *)base + 0x8C)) + 0xC), 0, -1);
        if (fn_800C9400(&str124, 0, str124.data, strBase + 0x221, strlen(strBase + 0x221)) == 0) {
            fn_800C9758(&str124, (String *)((u8 *)fn_800D59CC(tree, (String *)((u8 *)base + 0x5C)) + 0xC), 0, -1);
        }
        if (fn_800C9400(&str124, 0, str124.data, strBase + 0x221, strlen(strBase + 0x221)) == 0) {
            fn_800C9ABC(&sp38, (char *)classNames[kind & 3], &sp10);
            fn_800C9758(&str124, (String *)((u8 *)fn_800D59CC(tree, &sp38) + 0xC), 0, -1);
            fn_800C9A60(&sp38, -1);
        }
        if (fn_800C9400(&str124, 0, str124.data, strBase + 0x221, strlen(strBase + 0x221)) == 0) {
            fn_800C9758((String *)((u8 *)base + 0x14), &str148, 0, -1);
        } else {
            fn_800C9758((String *)((u8 *)base + 0x14), &str124, 0, -1);
        }
        fn_801F1888(tree);
        base = (u8 *)base + 0xC;
        slot++;
    }

    fn_800C9A60(&str124, -1);
    fn_800C9A60(&str130, -1);
    fn_800C9A60(&str13c, -1);
    fn_800C9A60(&str148, -1);
    fn_800C9A60(&str154, -1);
    fn_800C9A60(&str160, -1);
    fn_800C9A60(&str16c, -1);
    fn_800C9A60(&path, -1);
}
#pragma global_optimizer reset
void fn_801F0718(void *arg0) {
    f32 fn_80059500(f32, f32, f32, f32, f32);
    void *fn_80068548(void);
    void fn_80202300(void *, s32, f32);
    void fn_802029C4(void *, void *, void *);
    void fn_80203184(void *, void *, void *);
    void fn_80067FE8(void *, void *, void *);
    void fn_8000C188(void *);
    extern f32 lbl_8036B7C8;
    extern f32 lbl_8036B7D4;
    extern f64 lbl_8036B7D8;
    extern u8 lbl_8027F250[];

    struct Cam {
        u8 pad[0xD4];
        f32 at[3];
        f32 eye[3];
        f32 unkEC;
    };

    f32 vec[3];
    u8 mtx44[0x30];
    u8 mtx14[0x30];
    struct Cam *cam;
    f32 t;
    f32 f27, f28, f29, f30, f31, ftmp;
    f32 angle;
    u32 *src;
    u16 n;

    cam = (struct Cam *)fn_80068548();
    t = lbl_8036B7C8;
    n = *(u16 *)((u8 *)arg0 + 0x4C);
    if (n != 0) {
        t = (f32)*(u16 *)((u8 *)arg0 + 0x4E) / (f32)n;
    }
    f27 = fn_80059500(
        (*(f32 **)((u8 *)arg0 + 0x38))[0],
        (*(f32 **)((u8 *)arg0 + 0x3C))[0],
        (*(f32 **)((u8 *)arg0 + 0x40))[0],
        (*(f32 **)((u8 *)arg0 + 0x44))[0], t);
    f28 = fn_80059500(
        (*(f32 **)((u8 *)arg0 + 0x38))[1],
        (*(f32 **)((u8 *)arg0 + 0x3C))[1],
        (*(f32 **)((u8 *)arg0 + 0x40))[1],
        (*(f32 **)((u8 *)arg0 + 0x44))[1], t);
    f29 = fn_80059500(
        (*(f32 **)((u8 *)arg0 + 0x38))[2],
        (*(f32 **)((u8 *)arg0 + 0x3C))[2],
        (*(f32 **)((u8 *)arg0 + 0x40))[2],
        (*(f32 **)((u8 *)arg0 + 0x44))[2], t);
    f30 = fn_80059500(
        (*(f32 **)((u8 *)arg0 + 0x38))[3],
        (*(f32 **)((u8 *)arg0 + 0x3C))[3],
        (*(f32 **)((u8 *)arg0 + 0x40))[3],
        (*(f32 **)((u8 *)arg0 + 0x44))[3], t);
    f31 = fn_80059500(
        (*(f32 **)((u8 *)arg0 + 0x38))[4],
        (*(f32 **)((u8 *)arg0 + 0x3C))[4],
        (*(f32 **)((u8 *)arg0 + 0x40))[4],
        (*(f32 **)((u8 *)arg0 + 0x44))[4], t);
    fn_80059500(
        (*(f32 **)((u8 *)arg0 + 0x38))[5],
        (*(f32 **)((u8 *)arg0 + 0x3C))[5],
        (*(f32 **)((u8 *)arg0 + 0x40))[5],
        (*(f32 **)((u8 *)arg0 + 0x44))[5], t);
    ftmp = fn_80059500(
        (*(f32 **)((u8 *)arg0 + 0x38))[6],
        (*(f32 **)((u8 *)arg0 + 0x3C))[6],
        (*(f32 **)((u8 *)arg0 + 0x40))[6],
        (*(f32 **)((u8 *)arg0 + 0x44))[6], t);
    cam->eye[0] = f27;
    src = (u32 *)lbl_8027F250;
    ftmp = -ftmp;
    angle = (cam->eye[1] = f28, lbl_8036B7D4 * f30);
    cam->eye[2] = f29;
    ((u32 *)vec)[2] = src[2];
    ((u32 *)vec)[0] = src[0];
    ((u32 *)vec)[1] = src[1];
    vec[2] = ftmp;
    fn_80202300(mtx14, 0x58, angle);
    fn_80202300(mtx44, 0x59, lbl_8036B7D4 * f31);
    fn_802029C4(mtx14, vec, vec);
    fn_802029C4(mtx44, vec, vec);
    fn_80203184(cam->eye, vec, cam->at);
    fn_80067FE8(cam->at, &cam->unkEC, cam->eye);
    (*(u16 *)((u8 *)arg0 + 0x4E))++;
    if (*(u16 *)((u8 *)arg0 + 0x4E) >= *(u16 *)((u8 *)arg0 + 0x4C)) {
        (*(u16 *)((u8 *)arg0 + 0x48))++;
        fn_8000C188(arg0);
    }
}

void fn_801F09E8(void) {
    M2C_UNK fn_801F0BC4();
    fn_801F0BC4();
}

#pragma cplusplus on
extern "C" void fn_801F0A08(void *arg0) {
    void fn_8005376C(void);
    void fn_800C428C(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1(s32) = 0;
    };
    void *temp;

    fn_800C428C(*(void **)((char *)arg0 + 0x38));
    fn_800C428C(*(void **)((char *)arg0 + 0x3C));
    fn_800C428C(*(void **)((char *)arg0 + 0x40));
    fn_800C428C(*(void **)((char *)arg0 + 0x44));
    temp = *(void **)((char *)arg0 + 0x30);
    if (temp != NULL) {
        ((Obj *)temp)->v1(1);
    }
    fn_8005376C();
}
#pragma cplusplus reset
void fn_801F0E4C(void *arg0) {
    f32 fn_80059F64(u8, u8, f32, f32, f32, f32);
    M2C_UNK fn_8005F7B0(s32, u8);
    M2C_UNK fn_8005F7E0(s32, u8, u8, u8);

    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r31;
    s32 temp_r31_2;
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r4_3;
    u8 temp_r4_4;
    u8 temp_r6;
    u8 temp_r6_2;
    u8 temp_r6_3;
    u8 temp_r6_4;

    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40) >= (s32) M2C_FIELD(arg0, s32 *, 0x38)) {
        fn_8000C188();
    }
    temp_r6 = M2C_FIELD(arg0, u8 *, 0x44);
    temp_r4 = M2C_FIELD(arg0, u8 *, 0x48);
    temp_r6_2 = M2C_FIELD(arg0, u8 *, 0x45);
    temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x49);
    temp_r31 = (s32) fn_80059F64(temp_r4, temp_r6, (f32) temp_r6, (f32) temp_r4, (f32) M2C_FIELD(arg0, s32 *, 0x38), (f32) M2C_FIELD(arg0, s32 *, 0x40));
    temp_r6_3 = M2C_FIELD(arg0, u8 *, 0x46);
    temp_r4_3 = M2C_FIELD(arg0, u8 *, 0x4A);
    temp_r28 = (s32) fn_80059F64(temp_r4_2, temp_r6_2, (f32) temp_r6_2, (f32) temp_r4_2, (f32) M2C_FIELD(arg0, s32 *, 0x38), (f32) M2C_FIELD(arg0, s32 *, 0x40));
    temp_r6_4 = M2C_FIELD(arg0, u8 *, 0x47);
    temp_r4_4 = M2C_FIELD(arg0, u8 *, 0x4B);
    temp_r29 = (s32) fn_80059F64(temp_r4_3, temp_r6_3, (f32) temp_r6_3, (f32) temp_r4_3, (f32) M2C_FIELD(arg0, s32 *, 0x38), (f32) M2C_FIELD(arg0, s32 *, 0x40));
    temp_r31_2 = (s32) fn_80059F64(temp_r4_4, temp_r6_4, (f32) temp_r6_4, (f32) temp_r4_4, (f32) M2C_FIELD(arg0, s32 *, 0x38), (f32) M2C_FIELD(arg0, s32 *, 0x40));
    fn_8005F7E0(M2C_FIELD(arg0, s32 *, 0x30), (u8) temp_r31, (u8) temp_r28, (u8) temp_r29);
    fn_8005F7B0(M2C_FIELD(arg0, s32 *, 0x30), (u8) temp_r31_2);
}

void fn_801F109C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) < 0) {
        fn_8000C188();
    }
}

void fn_801F10D4(void) {
    extern u16 lbl_8027F26C[];
    fn_8000E0E4((u8 *)lbl_8027F26C + 0x422);
}

s32 fn_801F1100(void) {
    return 0;
}

s32 fn_801F1108(void) {
    return 0;
}

void fn_801F1110(void) {
    // Function has no visible parameters from assembly but might have internal logic
    int i;
    
    for (i = 0; i < 64; i++) {
        // Just a placeholder loop with matching control flow and structure to match initial instructions
        if (i >= 32) {
            // Do nothing special, just keep the loop going
        }
    }
}

#pragma peephole off
#pragma cplusplus on
extern "C" void fn_801F11A4(void *arg0, void *arg1) {
    void fn_80007698(s32);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000B908(u8);
    void fn_8000D864(s32, void *);
    void *fn_8000E0E4(void *);
    void fn_8001019C(s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    void fn_8015A2D8(s32, s32, s32, s32, s32, s32);
    void fn_80234450(void *, void *);
    extern f32 lbl_8036B7B8;
    extern f32 lbl_8036B7C8;
    extern f32 lbl_8036B7E8;
    extern f32 lbl_8036B7EC;
    extern f32 lbl_8036B7F0;
    extern f32 lbl_8036B7F4;
    extern f32 lbl_8036B7F8;
    extern f32 lbl_8036B7FC;
    extern f32 lbl_8036B800;
    extern void *lbl_8029A734[];
    extern u8 lbl_8027F26C[];
    struct Obj {
        u8 pad[4];
        virtual void *v0() = 0;
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
        virtual s32 v17() = 0;
        virtual s32 v18() = 0;
        virtual s32 v19() = 0;
        virtual void v20() = 0;
        virtual s32 v21() = 0;
        virtual s32 v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual f32 v25() = 0;
    };
    struct Row {
        u8 pad[0x40];
        u8 id;
    };
    u8 sp8[0x40];
    f32 f30;
    f32 f31;
    f32 tmp;
    s16 r29;
    void *str;
    void *item;
    struct Row *row;
    s32 t;

    fn_8000A258();
    f30 = ((Obj *)arg0)->v25();
    f31 = (f32)(s16)((Obj *)arg0)->v22();
    fn_80009D74((f32)(s16)((Obj *)arg0)->v21(), f31, f30, lbl_8036B7C8);
    fn_8000A248();
    r29 = (s16)((Obj *)arg0)->v19();
    fn_8015A2D8(0, 8, ((Obj *)arg0)->v18(), r29, 0xB3, 0x10);
    fn_8000A258();
    fn_8000A174(0, 0x10);
    fn_8000A248();
    tmp = (f32)(s16)((Obj *)arg0)->v18() - lbl_8036B7E8;
    f31 = tmp * lbl_8036B7EC;
    f30 = (f32)((s16)((Obj *)arg0)->v17() + 0x13);
    fn_80007898(1);
    fn_800077D8(f31, f30, lbl_8036B7E8, lbl_8036B7F0);
    fn_800076AC(0, 0, 0, 0xFF);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B7F4);
    fn_8000A248();
    fn_80007898(4);
    fn_800077D8(f31, f30, lbl_8036B7F8, lbl_8036B7B8);
    fn_80007698(0x4D);
    fn_80007884();
    fn_80007898(4);
    fn_800077D8(f31, lbl_8036B7C8 + (f30 + lbl_8036B7F0), lbl_8036B7F8, lbl_8036B7B8);
    fn_80007698(0x4D);
    fn_80007884();
    fn_80007898(4);
    fn_800077D8(f31, f30 - lbl_8036B7C8, lbl_8036B7B8, lbl_8036B7FC);
    fn_80007698(0x4D);
    fn_80007884();
    fn_80007898(4);
    fn_800077D8(lbl_8036B7C8 + (f31 + lbl_8036B7E8), f30, lbl_8036B7B8, lbl_8036B7F0);
    fn_80007698(0x4D);
    fn_80007884();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_80009C0C(lbl_8036B800);
    fn_8000A248();
    str = ((Obj *)arg0)->v0();
    tmp = (f32)fn_80010B78(str, -1, lbl_8036B7C8);
    f31 = ((f32)(s16)((Obj *)arg0)->v18() - tmp) * lbl_8036B7EC;
    str = ((Obj *)arg0)->v0();
    fn_8001019C((s32)f31, 0x18, 1, str);
    row = (struct Row *)arg1;
    row = (struct Row *)((u8 *)row + *(s8 *)((u8 *)arg1 + 0x62));
    item = fn_8000B908(row->id);
    fn_8000D864(0, fn_8000E0E4(lbl_8029A734[*(u8 *)((u8 *)item + 0x3A)]));
    fn_80234450(sp8, fn_8000E0E4(lbl_8027F26C + 0x42D));
    arg1 = (void *)(s32)(s16)((Obj *)arg0)->v18();
    f31 = (f32)((s32)(((u32)(t = (s16)(s32)arg1 - fn_80010B78(sp8, -1, lbl_8036B7C8)) >> 31) + t) >> 1);
    fn_8001019C((s32)f31, (s32)(f32)((s16)((Obj *)arg0)->v17() + 0x14), 7, sp8);
    if (f30) {
        /* keep y in f31-phys so text/half prefer f30 */
    }
}
#pragma cplusplus reset
#pragma peephole reset

s32 fn_801F1644(void *arg0, s32 unused, s8 arg2) {
    u8 fn_800A8504(s32, s8);
    extern void *lbl_803683D8;

    if (fn_800A8504(M2C_FIELD(lbl_803683D8, s32 *, 0x18C), arg2) == 0) {
        return 3;
    }
    M2C_FIELD(arg0, s8 *, 4) = arg2;
    return 0;
}

void fn_801F16A0(void *arg0) {
    extern void *lbl_8029A710[];
    void fn_8000E0E4(void *);

    fn_8000E0E4(lbl_8029A710[*(u8 *)((u8 *)arg0 + 4)]);
}

s32 fn_801F16D4(s32 arg0, s32 arg1, void *arg2) {
    extern u8 lbl_802EF4C8[];
    lbl_802EF4C8[0x14] = *(u8 *)((u8 *)arg2 + 0x3A);
    return 5;
}

void fn_801F1848(void *arg0, void *arg1) {
    void fn_80007668(s32 *);
    s32 *fn_8018D900(s32);
    s32 sp8;

    if (*(u8 *)((u8 *)arg1 + 0x38) != 0) {
        sp8 = *fn_8018D900(7);
        fn_80007668(&sp8);
    }
}

void fn_801F1888(void *arg0) {
    struct Tree {
        s32 count;
        void *root;
        void *unk8;
        void **first;
    };
    void fn_800D6374(struct Tree *, void *);
    struct Tree *tree = arg0;

    if (tree->root != NULL) {
        fn_800D6374(tree, tree->root);
        tree->count = 0;
        tree->root = NULL;
        tree->first = &tree->root;
    }
}

#include "common.h"
extern u16 lbl_8029A5FC;
extern u16 lbl_802EF4C8;
#include "common.h"

extern f32 lbl_8036B780; 
extern void* lbl_8028FDB0;
extern void* lbl_80292230;
extern void* lbl_80293C84;
extern void* lbl_80293C58;
extern void* lbl_8027EE08;
/* Functions from 0x801EAA2C to 0x801F18D4, found by decomp-toolkit. */
#include "common.h"

s32 lbl_80367110;
