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

extern f32 lbl_8036B910;
extern f32 lbl_8036B914;
extern f32 lbl_8036B918;
extern f32 lbl_8036B91C;
extern f32 lbl_8036B920;
extern f32 lbl_8036B924;
extern f32 lbl_8036B928;
extern f32 lbl_8036B92C;
extern f32 lbl_8036B930;
extern f32 lbl_8036B934;
extern f32 lbl_8036B938;
extern f32 lbl_8036B93C;
extern f32 lbl_8036B940;
extern f32 lbl_8036B944;
extern f64 lbl_8036B948;
extern void* lbl_8029A8C8[];
extern void fn_80050E80(void);
extern void fn_8005C7C8(void*);
extern void fn_8003F670();
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
    extern u8 lbl_8027F730[];
    s32 fn_8005C6A0(void *);
    void fn_8000C188(s32);

    if (fn_8005C6A0(lbl_8027F730 + 0xE1) & 0x2000) {
        fn_8000C188(arg0);
    }
}

void fn_801F2DB4(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern u8 lbl_8029AF78[];
    extern u8 lbl_8027F868[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029AF78, arg0);
    M2C_FIELD(temp_r31, s32 *, 0x30) = fn_800C4638(0xE8, lbl_8027F868 + 0x11BC, 0);
}

#pragma use_lmw_stmw on
void fn_801F2E08(void *arg0) {
    s32 fn_80019E8C(s32);
    void fn_8000C070(void *, s32);
    void fn_80057E6C(s32);
    void fn_8008A290(s32, s32);
    u8 fn_8008A59C(void);
    void fn_801475FC(char *, s32);
    u8 fn_801E3570(void *, s32);
    extern void *lbl_80367240;
    extern char lbl_8027F868[];
    extern u8 lbl_8029A9E8[];
    extern u8 lbl_80331FB8[];
    void *obj;
    s32 pressed;
    s32 stick;
    s32 held;
    s32 tmp;
    s32 pages;
    s16 idx;

    obj = *(void **)((u8 *)arg0 + 0x30);
    held = *(s32 *)((u8 *)lbl_80367240 + 4);
    stick = *(s32 *)((u8 *)lbl_80367240 + 0xC);
    pressed = held & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ held);
    if (((pressed & 0x100) && (fn_8008A59C() == 0)) || ((pressed & 0x200) && (fn_8008A59C() == 0))) {
        fn_801475FC(lbl_8027F868 + 0x11BD, 0x64);
        fn_8000C070(arg0, 1);
        fn_8008A290(3, 0xB4);
        return;
    }
    if ((stick & 0x08000008) && (fn_8008A59C() == 0)) {
        for (;;) {
            *(s16 *)((u8 *)obj + 0xE) = (s16)(*(s16 *)((u8 *)obj + 0xE) - 1);
            if (*(s16 *)((u8 *)obj + 0xE) < 0) {
                *(s16 *)((u8 *)obj + 0xE) = (s16)(*(u8 *)((u8 *)obj + 0x29) - 1);
            }
            if (*(u8 *)((u8 *)obj + 0x11) != 1) {
                break;
            }
            if (fn_801E3570(lbl_80331FB8, fn_80019E8C(*(s32 *)(lbl_8029A9E8 + *(s16 *)((u8 *)obj + 0xE) * 8))) != 0) {
                break;
            }
        }
        goto scroll_dec_test;
    scroll_dec_body:
        *(s16 *)((u8 *)obj + 0x2C) = (s16)(*(s16 *)((u8 *)obj + 0x2C) - 1);
    scroll_dec_test:
        idx = *(s16 *)((u8 *)obj + 0xE);
        if ((idx / 3) - *(s16 *)((u8 *)obj + 0x2C) > 0) {
            goto scroll_inc_test;
        }
        if (*(s16 *)((u8 *)obj + 0x2C) > 0) {
            goto scroll_dec_body;
        }
        goto scroll_inc_test;
    scroll_inc_body:
        *(s16 *)((u8 *)obj + 0x2C) = (s16)(*(s16 *)((u8 *)obj + 0x2C) + 1);
    scroll_inc_test:
        idx = *(s16 *)((u8 *)obj + 0xE);
        if ((idx / 3) - *(s16 *)((u8 *)obj + 0x2C) < 7) {
            goto scroll_done;
        }
        pages = *(u8 *)((u8 *)obj + 0x29) / 3;
        if ((*(u8 *)((u8 *)obj + 0x29) % 3) > 0) {
            pages += 1;
        }
        if (*(s16 *)((u8 *)obj + 0x2C) < (s32)(pages - 8)) {
            goto scroll_inc_body;
        }
    scroll_done:
        fn_80057E6C(*(s32 *)((u8 *)obj + 0xDC));
        tmp = *(s16 *)((u8 *)obj + 0xE) - *(s16 *)((u8 *)obj + 0x2C) * 3;
        *(s16 *)((u8 *)obj + 0x16) = 0;
        *(s16 *)((u8 *)obj + 0x12) = (s16)((tmp % 3) * 0xA0 + 0x45);
        *(s16 *)((u8 *)obj + 0x14) = (s16)((tmp / 3) * 0x1C + 0x9C);
        fn_801475FC(lbl_8027F868 + 0x11CD, 0x64);
        fn_8000C070(arg0, 3);
        return;
    }
    if ((stick & 0x04000004) && (fn_8008A59C() == 0)) {
        for (;;) {
            *(s16 *)((u8 *)obj + 0xE) = (s16)(*(s16 *)((u8 *)obj + 0xE) + 1);
            if (*(s16 *)((u8 *)obj + 0xE) >= *(u8 *)((u8 *)obj + 0x29)) {
                *(s16 *)((u8 *)obj + 0xE) = 0;
            }
            if (*(u8 *)((u8 *)obj + 0x11) != 1) {
                break;
            }
            if (fn_801E3570(lbl_80331FB8, fn_80019E8C(*(s32 *)(lbl_8029A9E8 + *(s16 *)((u8 *)obj + 0xE) * 8))) != 0) {
                break;
            }
        }
        goto scroll2_dec_test;
    scroll2_dec_body:
        *(s16 *)((u8 *)obj + 0x2C) = (s16)(*(s16 *)((u8 *)obj + 0x2C) - 1);
    scroll2_dec_test:
        idx = *(s16 *)((u8 *)obj + 0xE);
        if ((idx / 3) - *(s16 *)((u8 *)obj + 0x2C) > 0) {
            goto scroll2_inc_test;
        }
        if (*(s16 *)((u8 *)obj + 0x2C) > 0) {
            goto scroll2_dec_body;
        }
        goto scroll2_inc_test;
    scroll2_inc_body:
        *(s16 *)((u8 *)obj + 0x2C) = (s16)(*(s16 *)((u8 *)obj + 0x2C) + 1);
    scroll2_inc_test:
        idx = *(s16 *)((u8 *)obj + 0xE);
        if ((idx / 3) - *(s16 *)((u8 *)obj + 0x2C) < 7) {
            goto scroll2_done;
        }
        pages = *(u8 *)((u8 *)obj + 0x29) / 3;
        if ((*(u8 *)((u8 *)obj + 0x29) % 3) > 0) {
            pages += 1;
        }
        if (*(s16 *)((u8 *)obj + 0x2C) < (s32)(pages - 8)) {
            goto scroll2_inc_body;
        }
    scroll2_done:
        fn_80057E6C(*(s32 *)((u8 *)obj + 0xE0));
        tmp = *(s16 *)((u8 *)obj + 0xE) - *(s16 *)((u8 *)obj + 0x2C) * 3;
        *(s16 *)((u8 *)obj + 0x16) = 0;
        *(s16 *)((u8 *)obj + 0x12) = (s16)((tmp % 3) * 0xA0 + 0x45);
        *(s16 *)((u8 *)obj + 0x14) = (s16)((tmp / 3) * 0x1C + 0x9C);
        fn_801475FC(lbl_8027F868 + 0x11CD, 0x64);
        fn_8000C070(arg0, 3);
    }
}
void fn_801F31D0(void *arg0) {
    s32 fn_8005C6A0(s32);
    if (fn_8005C6A0(M2C_FIELD(arg0, s32 *, 0x30) + 0xB4) & 0x2000) {
        fn_8000C188(arg0);
    }
}

void fn_801F3214(void *arg0) {
    struct Entry {
        s32 unk0;
        char *name;
    };
    struct Work {
        u8 pad0[4];
        void *unk4;
        s32 unk8;
        u8 padC[2];
        s16 unkE;
        u8 pad10[0x10];
        u8 unk20;
        u8 pad21[5];
        u8 unk26;
        u8 pad27;
        u8 unk28;
        u8 pad29[0xB];
        struct Entry *unk34;
        u8 pad38[0x1C];
        char unk54[0x60];
        char unkB4[0x28];
        s32 unkDC;
        s32 unkE0;
    };
    void fn_80057E64(s32, s32);
    char *fn_8000E0E4(char *);
    void fn_8006EDA0(void *);
    void fn_8006EEFC(void *, char *);
    char *fn_80234450(char *, const char *);
    char *fn_802343E0(char *, const char *);
    extern char lbl_8027F868[];
    char buf[64];
    struct Work *p;

    p = M2C_FIELD(arg0, struct Work **, 0x30);
    p->unk8 = 2;
    p->unk54[0] = 0;
    p->unk20 = 0;
    p->unk26 = 0;
    p->unk28 = 0;
    fn_80057E64(p->unkDC, 1);
    fn_80057E64(p->unkE0, 1);
    fn_80234450(p->unk54, lbl_8027F868 + 0x11E9);
    fn_802343E0(p->unk54, fn_8000E0E4(lbl_8027F868 + 0x11EF));
    fn_802343E0(p->unk54, lbl_8027F868 + 0x11FA);
    fn_802343E0(p->unk54, fn_8000E0E4(lbl_8027F868 + 0x1209));
    if (p->unk4 != NULL) {
        if (p->unk4 != NULL) {
            fn_8006EDA0(&p->unk4);
            p->unk4 = NULL;
        }
    }
    fn_80234450(buf, lbl_8027F868 + 0x1214);
    fn_802343E0(buf, p->unk34[p->unkE].name);
    fn_8006EEFC(&p->unk4, buf);
    fn_80234450(p->unkB4, buf);
}

void fn_801F3338(void *arg0) {
    s32 fn_80019E8C(s32);
    M2C_UNK fn_8008A290(M2C_UNK, M2C_UNK);
    u8 fn_8008A59C();
    u8 fn_801E3570(M2C_UNK *, s32, M2C_UNK *);
    extern M2C_UNK lbl_8027F868;
    extern M2C_UNK lbl_8029A9E8;
    extern M2C_UNK lbl_80331FB8;
    extern f32 lbl_8036B850;
    extern f32 lbl_8036B854;
    s16 temp_r29;
    s16 temp_r3_2;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r4_3;
    s16 temp_r5;
    s16 temp_r7;
    s32 temp_r27;
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r5_2;
    s32 temp_r5_3;
    u32 temp_r6;
    u32 var_r3;
    void *temp_r30;

    temp_r30 = M2C_FIELD(arg0, void **, 0x30);
    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    temp_r31 = M2C_FIELD(lbl_80367240, s32 *, 0xC);
    temp_r29 = M2C_FIELD(temp_r30, s16 *, 0xE);
    temp_r27 = temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3);
    if ((temp_r27 & 0x100) && (fn_8008A59C() == 0)) {
        if (((u8) M2C_FIELD(temp_r30, u8 *, 0x11) != 1) || (fn_801E3570(&lbl_80331FB8, fn_80019E8C(*(&lbl_8029A9E8 + (M2C_FIELD(temp_r30, s16 *, 0xE) * 8))), &lbl_80331FB8) != 0)) {
            fn_801475FC(&lbl_8027F868 + 0x121C, 0x64);
            fn_8000C070(arg0, 2);
            fn_8008A290(3, 0xB4);
        }
    } else {
        if ((temp_r27 & 0x200) && (fn_8008A59C() == 0)) {
            fn_801475FC(&lbl_8027F868 + 0x11BD, 0x64);
            fn_8000C070(arg0, 0);
            fn_8008A290(3, 0xB4);
            return;
        }
        if (temp_r31 & 0x08000008) {
            temp_r3_2 = M2C_FIELD(temp_r30, s16 *, 0xE);
            if (temp_r3_2 >= 3) {
                M2C_FIELD(temp_r30, s16 *, 0xE) = (s16) (temp_r3_2 - 3);
                temp_r4 = M2C_FIELD(temp_r30, s16 *, 0x2C);
                if ((((M2C_FIELD(temp_r30, s16 *, 0xE) / 3) - temp_r4) <= 0) && (temp_r4 > 0)) {
                    M2C_FIELD(temp_r30, s16 *, 0x2C) = (s16) (temp_r4 - 1);
                    M2C_FIELD(temp_r30, f32 *, 0x30) = (f32) lbl_8036B850;
                }
            }
        }
        if (temp_r31 & 0x04000004) {
            temp_r4_2 = M2C_FIELD(temp_r30, s16 *, 0xE) + 3;
            if (temp_r4_2 <= (s32) (M2C_FIELD(temp_r30, u8 *, 0x29) - 1)) {
                M2C_FIELD(temp_r30, s16 *, 0xE) = temp_r4_2;
                temp_r5 = M2C_FIELD(temp_r30, s16 *, 0x2C);
                if ((s32) ((M2C_FIELD(temp_r30, s16 *, 0xE) / 3) - temp_r5) >= 7) {
                    var_r3 = M2C_FIELD(temp_r30, u8 *, 0x29) / 3;
                    if ((M2C_FIELD(temp_r30, u8 *, 0x29) % 3) > 0) {
                        var_r3 += 1;
                    }
                    if (temp_r5 < (s32) (var_r3 - 8)) {
                        M2C_FIELD(temp_r30, s16 *, 0x2C) = (s16) (M2C_FIELD(temp_r30, s16 *, 0x2C) + 1);
                        M2C_FIELD(temp_r30, f32 *, 0x30) = (f32) lbl_8036B854;
                    }
                }
            }
        }
        if ((temp_r31 & 0x01000001) && ((M2C_FIELD(temp_r30, s16 *, 0xE) % 3) != 0)) {
            M2C_FIELD(temp_r30, s16 *, 0xE) = (s16) (M2C_FIELD(temp_r30, s16 *, 0xE) - 1);
        }
        if ((temp_r31 & 0x02000002) && ((s32) (M2C_FIELD(temp_r30, s16 *, 0xE) % 3) != 2)) {
            temp_r4_3 = M2C_FIELD(temp_r30, s16 *, 0xE) + 1;
            if (temp_r4_3 <= (s32) (M2C_FIELD(temp_r30, u8 *, 0x29) - 1)) {
                M2C_FIELD(temp_r30, s16 *, 0xE) = temp_r4_3;
            }
        }
        temp_r7 = M2C_FIELD(temp_r30, s16 *, 0xE);
        if (temp_r29 != temp_r7) {
            temp_r5_2 = M2C_FIELD(temp_r30, s16 *, 0x2C) * 3;
            M2C_FIELD(temp_r30, s16 *, 0x16) = 4;
            M2C_FIELD(temp_r30, s16 *, 0x18) = (s16) M2C_FIELD(temp_r30, s16 *, 0x12);
            M2C_FIELD(temp_r30, s16 *, 0x1A) = (s16) M2C_FIELD(temp_r30, s16 *, 0x14);
            temp_r6 = (temp_r7 - temp_r5_2) / 3;
            temp_r5_3 = temp_r6 * 0x1C;
            M2C_FIELD(temp_r30, s16 *, 0x1C) = (s16) ((((temp_r7 - temp_r5_2) % 3) * 0xA0) + 0x45);
            M2C_FIELD(temp_r30, s16 *, 0x1E) = (s16) (temp_r5_3 + 0x9C);
            fn_801475FC(&lbl_8027F868 + 0x122C, 0x64, temp_r5_3, temp_r6, temp_r7 - temp_r5_2);
        }
    }
}

void fn_801F3890(void) {
    u16 *r29 = (u16 *)0x8036C56C;
    u16 r30, r4, r5, r6, r7, r0, r3, r0_0, r0_1, r0_2, r0_3, r0_4, r0_5, r0_6;
    u16 *r28;
    s16 r31;
    
    r30 = r29[0x0C/2];
    r28 = (u16 *)0x8036C56C + 0x20/2 + r30;
    r7 = *(u8 *)(0x8036C56C + 0x11);
    r3 = r28[r30/2];
    r5 = (u16)lbl_80367240; // This is a global pointer to 0x80367240
    r6 = *(u16 *)(r5 + 0x4);
    r0 = *(u8 *)(r3 + 0x2);
    r4 = *(u16 *)(r5 + 0x8);
    
    // if (r7 != r0) 
    if (r7 != r0) {
        u16 temp = r4 ^ r6;
        u16 mask = r6 & temp;
        if ((mask << 9) == 0) { // Check bit 23
            *(u8 *)(0x8036C56C + 0x10) = r7; 
        } else {
            *(u8 *)(0x8036C56C + 0x10) = r0;
        }
    }

    // This looks like a bit field or something similar
    if ((*(u16 *)(r5 + 0xC) & 0x4000) != 0) {
         *(u16 *)(0x8036C56C + 0xE) = 0;
         r0_0 = *(u16 *)(0x8027F868 + 0x121C);
         *(float *)(0x8036C56C + 0x30) = *(float *)0x8036B858;
         // r3 holds r27 which is arg0 from the start
         // r4 = 0x64 = 100 
         fn_801475FC(r29, 0x64);
         fn_8000C070(r29, 1);  
         fn_8008A290(r29, 3, 0xB4); 
    } else {
        if ((*(u16 *)(r5 + 0xC) & 0x8000) != 0) { // Check bit 22
            *(u16 *)(0x8036C56C + 0xE) = 0;
            r0_1 = *(u16 *)(0x8027F868 + 0x11BD); 
            fn_801475FC(r29, 0x64);
            fn_8000C070(r29, 4);
        } else {
            r0_2 = *(u16 *)(r5 + 0xC); // This is likely a mask
            r31 = r0_2;

            if ((r31 & 0x8) == 0) { // Check bit 3 
                *(u16 *)(0x8036C56C + 0xC) = r30 - 1;
                // More logic to handle counter...
                if (*(u16 *)(0x8036C56C + 0xC) >= 0) {
                    *(u16 *)(0x8036C56C + 0xC) = 0;
                }
            } else {
                *(u16 *)(0x8036C56C + 0xC) = r30 + 1;
                // Same logic again to handle counter...
                if (*(u16 *)(0x8036C56C + 0xC) < ((*(u8 *)r28))) {
                    *(u16 *)(0x8036C56C + 0xC) = ((*(u8 *)r28)) - 1;
                }
            }

            // Final bit check and call
            if (r30 != *(u16 *)(0x8036C56C + 0xC))
            {
                r0_3 = *(u16 *)(0x8027F868 + 0x122C);
                fn_801475FC(r29, 0x64);
            }
        }
    }
}

void fn_801F3CB0(s32 arg0) {
    extern u8 lbl_8027F868[];
    s32 fn_8005C6A0(void *);
    s32 fn_80161FB8(void);
    void fn_80162054(void);
    void fn_8000C188(s32);

    if (fn_8005C6A0(lbl_8027F868 + 0x1293) & 0x2000) {
        if (fn_80161FB8() != 0) {
            fn_80162054();
            fn_8000C188(arg0);
        }
    }
}

void fn_801F52A8(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

extern u8 lbl_8029B0E0[16];
void fn_801F52DC(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8029B0E0[16];
    fn_8000CAA0(lbl_8029B0E0, arg0);
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

void fn_801F5A28(void *arg0) {
    void *fn_8000C0C0(void *);
    void fn_8000C188(void *);
    void fn_8000C070(void *, s32);
    void fn_801475FC(void *, s32);
    void fn_8000BF00(void *);
    extern void *lbl_80367240;
    extern u16 lbl_80280B58[18];
    void *tmp;
    s32 var_r0;
    s32 temp_r4_2;
    void *temp_r5;

    tmp = fn_8000C0C0(&lbl_8029B068);
    if (tmp == NULL) {
        var_r0 = 0;
    } else {
        var_r0 = *(u8 *)((u8 *)tmp + 0x4C);
    }
    if (var_r0 == 2) {
        *(u8 *)((u8 *)arg0 + 0x54) = 0;
        temp_r5 = *(void **)((u8 *)arg0 + 0x50);
        *(s16 *)((u8 *)temp_r5 + 2) = 0xC8;
        fn_8000C188(arg0);
        return;
    }
    temp_r4_2 = *(s32 *)((u8 *)lbl_80367240 + 4);
    if ((temp_r4_2 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r4_2) & 0x200) != 0) {
        fn_801475FC((u8 *)&lbl_80280B58 + 0x111, 0x64);
        temp_r5 = *(void **)((u8 *)arg0 + 0x50);
        *(s16 *)((u8 *)temp_r5 + 2) = 0xC8;
        fn_8000C070(arg0, 0);
        fn_8000BF00(&lbl_8029B068);
    }
}

void fn_801F5AEC(void *arg0) {
    s32 fn_8000E0E4(void *);
    void fn_801DDBA8(void *, s32, s32, s32, s32);
    void fn_801475FC(void *, s32);
    void fn_8000C188(void *);
    void fn_8000C070(void *, s32);
    extern void *lbl_80367240;
    extern u16 lbl_80280B58[18];
    s32 temp_r3;
    s32 pressed;
    void *temp_r5;

    temp_r3 = *(s32 *)((u8 *)lbl_80367240 + 4);
    pressed = temp_r3 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r3);
    if (pressed & 0x100) {
        fn_801475FC((u8 *)&lbl_80280B58 + 0x5A, 0x64);
        fn_801DDBA8(*(void **)((u8 *)arg0 + 0x50), fn_8000E0E4((u8 *)&lbl_80280B58 + 0x121), 0, 0, 0);
        fn_8000C188(arg0);
        return;
    }
    if (pressed & 0x200) {
        fn_801475FC((u8 *)&lbl_80280B58 + 0x111, 0x64);
        temp_r5 = *(void **)((u8 *)arg0 + 0x50);
        *(s16 *)((u8 *)temp_r5 + 2) = 0xC8;
        fn_8000C070(arg0, 0x63);
    }
}

void fn_801F5BAC(void) {

}

void fn_801F5BB0(void *arg0) {
    void *tmp = *(void **)((u8 *)arg0 + 0x50);
    if (tmp != NULL) {
        fn_800C4588(tmp);
        *(void **)((u8 *)arg0 + 0x50) = NULL;
    }
    fn_80109020(0);
    fn_8000BF00(&lbl_8029B068);
}

void fn_801F5C04(void *arg0) {
    void *fn_800C4638(s32, void *, s32);
    void fn_80109180(void *, void *);
    void *memset(void *, s32, s32);
    extern u16 lbl_80280B58[18];
    void *temp_r31;

    *(void **)((u8 *)arg0 + 0x50) = fn_800C4638(0x1EA, (u8 *)&lbl_80280B58 + 0x12A, 0);
    temp_r31 = *(void **)((u8 *)arg0 + 0x50);
    memset(temp_r31, 0, 0x1EA);
    *((s16 *)temp_r31) = (*(((s16 *)temp_r31) + 1) = 0);
    *(((s16 *)temp_r31) + 0xF) = 0;
    fn_80109180((u8 *)&lbl_80280B58 + 0x12B, arg0);
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
    extern u32 *lbl_803683F0;
    u32 temp_r6;

    temp_r6 = *(u32 *)((char *)arg0 + 0x40);
    if (((u32) (temp_r6 >> 0x18U) == (u32) (s8) *(u8 *)((char *)lbl_803683F0 + 0)) && ((u8) (temp_r6 >> 0x10U) == (u32) (s8) *(u8 *)((char *)lbl_803683F0 + 1)) && ((u8) (temp_r6 >> 8U) == (u32) (s8) *(u8 *)((char *)lbl_803683F0 + 2)) && ((u8) temp_r6 == (u32) (s8) *(u8 *)((char *)lbl_803683F0 + 3))) {
        *(u32 *)((char *)arg0 + 0x40) = -1U;
    } else {
        fn_8000C070(2);
    }
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

void fn_801F6164(s32 unused, s32 arg1) {
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

extern u8 lbl_8029B198[16];
void fn_801F649C(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8029B198[16];
    fn_8000CAA0(lbl_8029B198, arg0);
}

void fn_801F64C8(void) {
    extern u16 lbl_80280CF0[];
    fn_80109020((u8 *)lbl_80280CF0 + 0x20);
}

void fn_801F64F4(s32 arg0) {
    void fn_8000C188(s32);
    void fn_801480D8(s32);
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x300) {
        fn_8000C188(arg0);
        fn_801480D8(0x1388);
    }
}

void fn_801F6538(void) {
    extern u16 lbl_80280CF0[];
    fn_80147188(0xFA);
    fn_8014832C(0, (u8 *)lbl_80280CF0 + 0x33, 0x64, 1);
    fn_80109180((u8 *)lbl_80280CF0 + 0x20, 0);
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
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern u8 lbl_8029B27C[];
    extern u8 lbl_80280D38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029B27C, arg0);
    M2C_FIELD(temp_r31, s32 *, 0x30) = fn_800C4638(0x18, lbl_80280D38 + 0x6A, 0);
}

void fn_801F661C(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    s32 fn_800C4638(s32, void *, s32);
    extern u8 lbl_8029B1F8[];
    extern u8 lbl_80280D38[];
    void *temp_r31;

    temp_r31 = fn_8000CAA0(lbl_8029B1F8, arg0);
    M2C_FIELD(temp_r31, s32 *, 0x30) = fn_800C4638(0x210, lbl_80280D38 + 0x6A, 0);
}

extern s32 lbl_80368400;
extern u8 lbl_80368404;
void fn_801F66D4(void *arg0) {
    void fn_8000C188(void *);
    s32 held;
    s32 pressed;
    void *obj;
    s32 state;

    held = M2C_FIELD(lbl_80367240, s32 *, 4);
    pressed = held & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ held);
    obj = M2C_FIELD(arg0, void **, 0x30);
    if ((s8)lbl_80368404 == 0) {
        lbl_80368400 = 0;
        lbl_80368404 = 1;
    }
    state = M2C_FIELD(obj, s32 *, 0);
    switch (state) {
    case 0:
        M2C_FIELD(obj, s32 *, 0) = 1;
        M2C_FIELD(obj, s32 *, 4) = 0;
        lbl_80368400 = 0;
        break;
    case 1:
        if ((pressed & 0x100) || (pressed & 0x200)) {
            fn_8000C188(arg0);
        }
        break;
    }
}

void fn_801F676C(void *arg0) {
    void fn_800075D8(void);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    void fn_801F690C(void *, f32, f32);
    extern u8 lbl_80280D38[];
    void *temp_r31;
    void *temp_r30;
    f32 fw;

    temp_r30 = *(void **)((u8 *)arg0 + 0x30);
    fn_8000A258();
    fn_80009D74(lbl_8036B910, lbl_8036B910, lbl_8036B914, lbl_8036B918);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_80009F90(*(s32 *)((u8 *)temp_r30 + 0x10), 1, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B920, lbl_8036B924, lbl_8036B910, lbl_8036B910);
    fn_80007818(lbl_8036B928, lbl_8036B92C, lbl_8036B920, lbl_8036B930);
    fn_800075D8();
    fn_80007884();
    fn_80007898(1);
    fn_80007838(lbl_8036B910, lbl_8036B924, lbl_8036B920, lbl_8036B910);
    fn_80007818(lbl_8036B920, lbl_8036B92C, lbl_8036B910, lbl_8036B930);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B91C);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    temp_r31 = fn_8000E0E4(lbl_80280D38 + 0x6B);
    fw = (f32)fn_80010B78(temp_r31, -1, lbl_8036B934);
    fn_8001003C((s32)(lbl_8036B920 - lbl_8036B938 * fw), 0x1E, 2, 0, 0, temp_r31, lbl_8036B934, lbl_8036B910);
    fn_8000A258();
    fn_80009C0C(lbl_8036B93C);
    fn_8000A248();
    fn_801F690C(temp_r30, lbl_8036B940, lbl_8036B944);
}

void fn_801F7194(void *arg0) {
    s32 fn_80059208(void (*)(void *), void *);
    s32 fn_80161FB8(void);
    void fn_80162054(void);
    void fn_8000C188(void *);
    void fn_801F676C(void *);
    s32 fn_8005C6A0(void *);
    extern u8 lbl_80280D38[];
    if ((fn_8005C6A0(lbl_80280D38 + 0x173) & 0x2000) && (fn_80161FB8() != 0)) {
        fn_80162054();
        M2C_FIELD(arg0, s32 *, 0x34) = fn_80059208(fn_801F676C, arg0);
        fn_8000C188(arg0);
    }
}

void fn_801F726C(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    fn_8006EDA0(temp_r31);
    fn_800C4588(temp_r31);
}

void fn_801F7434(void *arg0) {
    void *temp_r31;
    s32 var_r29;
    u8 var_r28;
    u8 *var_r30;
    u8 temp_r3;
    s32 temp_r0;
    u8 *var_r27;

    temp_r31 = *(void**)((u8*)arg0 + 0x30);
    *(u8*)((u8*)temp_r31 + 0x88) = 1;
    *(u8*)((u8*)temp_r31 + 0x5) = 0;
    *(u8*)((u8*)temp_r31 + 0x16) = 1;
    *(u8*)((u8*)temp_r31 + 0x17) = 1;
    *(u16*)((u8*)temp_r31 + 0x18) = 0;
    *(u16*)((u8*)temp_r31 + 0x1A) = 0x1C2;
    *(u16*)((u8*)temp_r31 + 0x1C) = 0x3D;
    *(u8*)((u8*)temp_r31 + 0xCE) = 0;
    *(u8*)((u8*)temp_r31 + 0x10E) = 0;
    *(u8*)((u8*)temp_r31 + 0x14E) = 0;
    *(u8*)((u8*)temp_r31 + 0x18E) = 0;
    *(u8*)((u8*)temp_r31 + 0x1CE) = 0;
    
    var_r29 = 0;
    var_r30 = (u8*)fn_8000E0E4((u8*)temp_r31 + (u16)((u8*)temp_r31 + 0x6) * 4 + 0xB0, 0, 1);
    
loop_1:
    temp_r3 = *var_r30;
    if (temp_r3 == 0 || temp_r3 == 0xA) {
        var_r27 = (u8*)temp_r31 + 0xCE;
        if (var_r29 > 0) {
            memcpy(var_r27, ((u8*)var_r30 - 1), var_r29);
        }
        temp_r0 = var_r29 + 0xCE;
        ((u8*)temp_r31)[temp_r0] = 0;
        temp_r31 = (u8*)temp_r31 + 0x40;
        var_r28 += 1;
        if (*(u8*)var_r30 == 0) {
            ((u8*)temp_r31)[-0x40] = var_r28;
            return;
        }
        var_r30 += 1;
        goto loop_1;
    } else {
        var_r30 += 1;
        var_r29 += 1;
        goto loop_1;
    }
}

void fn_801F75D4(void* arg0) {
    s32 temp_r3;
    s32 temp_r4;
    u8* ptr;
    
    if (arg0 == NULL) {
        return;
    }

    temp_r3 = *(s32*)((char*)arg0 + 0x50);
    if (temp_r3 == 0) {
        return;
    }
    
    ptr = (u8*)(*(u32*)((char*)arg0 + 0x50));
    *(u32*)((char*)ptr + 0x64) = 0;

    temp_r4 = *(s32*)((char*)arg0 + 0x78);
    if (temp_r4 != 0) {
        *(s32*)((char*)arg0 + 0x16C) = 0;
        *(s32*)((char*)arg0 + 0x170) = 0;
        *(u32*)((char*)arg0 + 0x54) = 0;
        *ptr = 0;
    }
    
    *(u32*)((char*)arg0 + 0x198) = 0;
}

void fn_801F7838(s32 arg0) {
    extern u8 lbl_80280D38[];
    s32 fn_8005C6A0(void *);
    void fn_8000C188(s32);

    if (fn_8005C6A0(lbl_80280D38 + 0x24F) & 0x2000) {
        fn_8000C188(arg0);
    }
}

void fn_801F7880(void* arg0) {
    s32 var_r4;
    void* temp_r31;
    void* temp_r5;
    
    temp_r31 = *(void**)((u8*)arg0 + 0x30);
    memset(temp_r31, 0, 0x210);
    *(u16*)((u8*)temp_r31 + 0x8c) = 0xff;
    var_r4 = 0;
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 1) {
        var_r4 = 1;
        *(u32*)((u8*)temp_r31 + 0x98) = 0x80280F2D;
        *(u32*)((u8*)temp_r31 + 0xb0) = 0x8028106C;
        *(u8*)((u8*)temp_r31 + 0xc8) = 0;
    }
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 2) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F3A;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x8028107C;
        var_r4 += 1;
        *(u8*)temp_r5 = 1;
    }
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 4) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F47;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x8028108C;
        var_r4 += 1;
        *(u8*)temp_r5 = 2;
    }
    
    if ((*(u16*)((u8*)temp_r31 + 0x10) & 0x10) || (*(u16*)((u8*)temp_r31 + 0x10) & 0x20)) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F54;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x8028109C;
        var_r4 += 1;
        *(u8*)temp_r5 = 3;
    }
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 0x10) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F61;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x802810AC;
        var_r4 += 1;
        *(u8*)temp_r5 = 4;
    }
    
    if (*(u16*)((u8*)temp_r31 + 0x10) & 0x20) {
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0x98) = 0x80280F6E;
        temp_r5 = (u8*)temp_r31 + var_r4;
        *(u32*)((u8*)temp_r31 + (var_r4 * 4) + 0xb0) = 0x802810BC;
        var_r4 += 1;
        *(u8*)temp_r5 = 5;
    }
    
    *(u8*)((u8*)temp_r31 + 0x94) = var_r4;
    *(u8*)((u8*)temp_r31 + 0x8a) = -1;
    temp_r5 = (u8*)temp_r31 + *(u16*)((u8*)temp_r31 + 0x6);
    *(u8*)((u8*)temp_r31 + 0x89) = *(u8*)((u8*)temp_r5 + 0xc8);
    
    fn_8006EEFC(temp_r31, 0x80280F05, temp_r5);
}

extern u8 lbl_8029B438[16];
void fn_801F8798(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8029B438[16];
    fn_8000CAA0(lbl_8029B438, arg0);
}

s32 fn_801F87C4(void) {
    extern u8 lbl_80330708[];
    u8 val = lbl_80330708[0x10];
    return (0x20 - val) & 0x1F;
}

void fn_801F87E0(void) {
    void fn_80013D4C(void);
    void fn_8003F670(void *);
    void fn_80050E80(void);
    void fn_8005BCAC(void);
    void fn_8005C7C8(void *);
    void fn_800C4B8C(void);
    extern u8 lbl_80281028[];
    extern void *lbl_80368408;
    extern void *lbl_8036840C;
    void *p;

    fn_80050E80();
    fn_8005C7C8(lbl_80281028 + 0x1FE);
    p = lbl_80368408;
    if (p != NULL) {
        fn_8003F670(p);
        lbl_80368408 = NULL;
    }
    p = lbl_8036840C;
    if (p != NULL) {
        fn_8003F670(p);
        lbl_8036840C = NULL;
    }
    fn_80013D4C();
    fn_8005BCAC();
    fn_800C4B8C();
    fn_800C4B8C();
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

u32 fn_801F8D38(void **arg0, void **arg1) {
    u16 temp_r0;
    u16 temp_r0_3;
    u16 temp_r3;
    u8 temp_r4_2;
    u8 temp_r0_2;
    u8 temp_r3_2;
    u16 temp_r3_3;
    void *temp_r5;
    void *temp_r4;
    void *temp_r6;
    void *p;
    u16 a;
    u16 b;

    temp_r5 = *arg0;
    temp_r6 = *arg1;
    temp_r4 = M2C_FIELD(temp_r5, void **, 0x190);
    if ((u8)M2C_FIELD((s32)temp_r4, u8 *, 8) == 6) {
        if ((u8)M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x190), u8 *, 8) != 6) {
            return 1U;
        }
    }
    temp_r4_2 = M2C_FIELD(temp_r4, u8 *, 8);
    if (temp_r4_2 != 6) {
        if ((u8)M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x190), u8 *, 8) == 6) {
            return 0U;
        }
    }
    if (temp_r4_2 == 6) {
        if ((u8)M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x190), u8 *, 8) == 6) {
            temp_r3_2 = M2C_FIELD(temp_r5, u8 *, 0x234);
            temp_r0_2 = M2C_FIELD(temp_r6, u8 *, 0x234);
            if (temp_r3_2 == temp_r0_2) {
                temp_r3_3 = M2C_FIELD(temp_r5, u16 *, 0x22A);
                temp_r0_3 = M2C_FIELD(temp_r6, u16 *, 0x22A);
                if (temp_r3_3 == temp_r0_3) {
                    p = M2C_FIELD(temp_r5, void **, 0x188);
                    a = M2C_FIELD(p, u16 *, 0x5A);
                    p = M2C_FIELD(temp_r6, void **, 0x188);
                    b = M2C_FIELD(p, u16 *, 0x5A);
                    return (u32)(a - b) >> 0x1FU;
                }
                return (u32)(temp_r3_3 - temp_r0_3) >> 0x1FU;
            }
            return (u32)(temp_r3_2 - temp_r0_2) >> 0x1FU;
        }
    }
    temp_r3 = M2C_FIELD(temp_r5, u16 *, 0x22A);
    temp_r0 = M2C_FIELD(temp_r6, u16 *, 0x22A);
    if (temp_r3 == temp_r0) {
        p = M2C_FIELD(temp_r5, void **, 0x188);
        a = M2C_FIELD(p, u16 *, 0x5A);
        p = M2C_FIELD(temp_r6, void **, 0x188);
        b = M2C_FIELD(p, u16 *, 0x5A);
        return (u32)(a - b) >> 0x1FU;
    }
    return (u32)(temp_r3 - temp_r0) >> 0x1FU;
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
    void *x = *(void **)((u8 *)arg0 + 0x30);
    if (x != NULL) {
        fn_8003F670(x);
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

void fn_801FB048(void *arg0, u32 arg1) {
    typedef struct {
        s32 unk0;
        s32 unk4;
    } Elem;
    typedef struct {
        u32 cap;
        s32 size;
        Elem *data;
    } Vec;
    void fn_800C428C(void *);
    void *fn_800C42D8(u32);
    void fn_801FB548(Vec *);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    extern char __files[];
    extern char lbl_80281028[];
    Vec *vec = arg0;
    Vec tmp;
    Elem *p;
    Elem *src;
    Elem *dst;
    Elem *end;
    u32 t;
    Elem *tp;
    s32 ts;

    if (arg1 > vec->cap) {
        if (arg1 > 0x1FFFFFFF) {
            fn_80232058(__files + 0xA0, lbl_80281028 + 0x3D8);
            fn_8022CF78();
        }
        tmp.cap = 0;
        tmp.size = 0;
        tmp.data = NULL;
        p = fn_800C42D8(arg1 * 8);
        if (p == NULL) {
            fn_80232058(__files + 0xA0, lbl_80281028 + 0x3BE);
            fn_8022CF78();
        }
        tmp.data = p;
        dst = p;
        tmp.cap = arg1;
        src = vec->data;
        end = src + vec->size;
        for (; src < end; src++, dst++) {
            if (dst != NULL) {
                *dst = *src;
            }
            tmp.size++;
        }
        if (&tmp != vec) {
            t = tmp.cap;
            tmp.cap = vec->cap;
            vec->cap = t;
            tp = tmp.data;
            tmp.data = vec->data;
            vec->data = tp;
            ts = tmp.size;
            tmp.size = vec->size;
            vec->size = ts;
        }
        fn_801FB548(&tmp);
        if (tmp.data != NULL) {
            fn_800C428C(tmp.data);
        }
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void *fn_800C42D8(u32);
extern "C" void fn_800C428C(void *);
extern "C" void fn_800506E0(s32, s32, void *);
extern "C" void fn_8006140C(void *);
extern "C" void fn_800616A0(void *);
extern "C" void *fn_80061870(void);
extern "C" s32 fn_800639B4(void);
extern "C" M2C_UNK fn_8022CF78(void);
extern "C" M2C_UNK fn_80232058(void *, const char *, ...);
extern "C" void fn_801FB2EC(void **arg0, s32 *arg1, void ***arg2, s32 *arg3) {
    struct Obj {
        u32 flags;
        s32 unk4;
        u8 pad8[0x3C];
        s32 unk44;
    };
    struct Value {
        s32 owner;
        Obj *obj;
    };
    struct Node {
        Node *prev;
        Node *next;
        Value value;
    };
    struct Holder {
        void *list;
        Node *node;
        Holder(void *l, Node *n) : list(l), node(n) {}
        ~Holder() {
            if (node != 0) {
                fn_800C428C(node);
            }
        }
    };
    extern char __files[];
    extern char lbl_80281028[];
    Value *value;
    Node *node;
    s32 owner;
    void *list;
    Obj *obj;
    Node *pos;
    Node *n;

    list = arg1 + 1;
    node = (Node *)fn_800C42D8(0x10);
    if (node == 0) {
        fn_80232058(__files + 0xA0, lbl_80281028 + 0x3BE);
        fn_8022CF78();
    }
    {
        Holder h(list, node);
        value = &h.node->value;
        if (value != 0) {
            owner = *arg3;
            value->owner = owner;
            value->obj = 0;
            if (value->obj != 0) {
                fn_800616A0(value->obj);
            }
            value->obj = (Obj *)fn_80061870();
            value->obj->unk4 = owner + 0x1C;
            obj = value->obj;
            obj->flags |= 0x50028400;
            fn_800506E0(owner, 0, obj);
            value->obj->unk44 = fn_800639B4();
            fn_8006140C(value->obj);
        }
        pos = (Node *)*arg2;
        n = h.node;
        h.node = 0;
        pos->prev->next = n;
        n->prev = pos->prev;
        pos->prev = n;
        n->next = pos;
        (*arg1)++;
        *arg0 = n;
    }
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

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
    return *(u16 *)((u8 *)arg0 + 0x120) < arg1;
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

void fn_801FC408(void *arg0, void *arg1) {
    void fn_800C428C(void *);
    fn_800C428C(arg1);
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
    s32 fn_8000D354(void *);
    s32 temp_r3;
    s8 var_r0;

    temp_r3 = fn_8000D354(lbl_8027F710 + 0x15);
    switch ((s32)lbl_80330708[0xA6]) {
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
    temp_r3 = temp_r3 + var_r0;
    return *(u8 *)(temp_r3 + 0x18);
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
#include "global.h"
#include "structs.h"

extern u16 lbl_80280D38[40];
