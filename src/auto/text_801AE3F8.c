/* Functions from 0x801AE3F8 to 0x801B3220, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
extern u16 lbl_802917D0;
extern struct unk_struct lbl_80331C6C;

void *fn_801AE3F8(u32 arg0) {
    void *fn_8000CAA0(void *, u32);
    void *fn_8000CAF0(void *, u32);
    void fn_801403F0(void *);
    extern u8 lbl_802975D0[];
    extern u8 lbl_80297890[];
    void *var_r31;

    if (arg0 != 0U) {
        var_r31 = fn_8000CAA0(lbl_802975D0, arg0);
    } else {
        var_r31 = fn_8000CAF0(lbl_802975D0, arg0);
    }
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(s32 *)((u8 *)var_r31 + 0x40) = 0;
        *(s32 *)((u8 *)var_r31 + 0x44) = 0;
        *(s32 *)((u8 *)var_r31 + 0x48) = 0;
        *(s32 *)((u8 *)var_r31 + 0x4C) = 0;
        *(s32 *)((u8 *)var_r31 + 0x50) = 0;
        *(s32 *)((u8 *)var_r31 + 0x54) = 0;
        *(s32 *)((u8 *)var_r31 + 0x58) = 0;
        *(s32 *)((u8 *)var_r31 + 0x60) = 0;
        *(s32 *)((u8 *)var_r31 + 0x64) = 0;
        *(u8 **)((u8 *)var_r31 + 0x6C) = lbl_80297890;
    }
    return var_r31;
}

void fn_801AE498(void) {
    M2C_UNK fn_8013FE0C();
    fn_8013FE0C();
}

#pragma cplusplus on
extern "C" void fn_801AE4B8(void *arg0) {
    extern void fn_80140304(void *, s32);
    extern u16 lbl_80367A58;

    struct RefObj {
        virtual void destroy(s32);
        s32 refCount;
    };

    struct Holder {
        u8 pad[0x40];
        RefObj *p40;
        RefObj *p44;
        RefObj *p48;
        RefObj *p4c;
        RefObj *p50;
        RefObj *p54;
        RefObj *p58;
        u8 pad5c[4];
        RefObj *p60;
        RefObj *p64;
    };

    Holder *h;
    RefObj *p;

    lbl_80367A58 &= 0xFFFFFFEF;
    h = (Holder *)arg0;
    if (h != NULL) {
        p = h->p40;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p40 = (RefObj *)0;
        }
        p = h->p44;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p44 = (RefObj *)0;
        }
        p = h->p48;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p48 = (RefObj *)0;
        }
        p = h->p4c;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p4c = (RefObj *)0;
        }
        p = h->p50;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p50 = (RefObj *)0;
        }
        p = h->p54;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p54 = (RefObj *)0;
        }
        p = h->p58;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p58 = (RefObj *)0;
        }
        p = h->p60;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p60 = (RefObj *)0;
        }
        p = h->p64;
        if (p != NULL) {
            if (--p->refCount == 0 && p != NULL) {
                p->destroy(1);
            }
            h->p64 = (RefObj *)0;
        }
        fn_80140304(h, 0);
    }
}
#pragma cplusplus reset

void fn_801AE73C(s32 arg0) {
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_8027BD18[];
    
    s32 temp_r4;
    u8 var_r3;

    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        temp_r4 = *(s32*)((char*)lbl_80367240 + 4);
        if (temp_r4 & (*(s32*)((char*)lbl_80367240 + 8) ^ temp_r4) & 0x300) {
            fn_801475FC(&lbl_8027BD18[0x36E], 0x64);
            fn_8000C188(arg0);
        }
    }
}

void fn_801AE7C0(void *arg0) {
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x50));
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x88);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801AE81C(void *arg0) {
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x58));
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x88);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801AE878(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    s32 fn_8013AC54(s32);
    M2C_UNK fn_8013AD70(s32, s32);
    void **fn_8013FF94(M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_80330708;
    s32 temp_r31;
    void **temp_r30;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x54);
    temp_r30 = fn_8013FF94(0xA, 0);
    fn_8013AD70(temp_r31, M2C_FIELD(&lbl_80330708, s32 *, 0xB0));
    M2C_FIELD(*temp_r30, M2C_UNK (**)(void **, s32), 0x34)(temp_r30, fn_8013AC54(temp_r31));
    fn_8000C070(arg0, M2C_FIELD(arg0, u8 *, 0x68));
}

#pragma cplusplus on
extern "C" void fn_801AE908(void *arg0) {
    struct VObj {
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
    s32 fn_8013AC54(s32);
    void fn_8013AD70(s32, s32);
    VObj *fn_8013FF94(void *, s32, s32);
    extern u8 lbl_80330708[];
    s32 temp_r31;
    VObj *temp_r30;

    temp_r31 = *(s32 *)((u8 *)arg0 + 0x54);
    temp_r30 = fn_8013FF94(arg0, 0xA, 0);
    fn_8013AD70(temp_r31, *(s32 *)(lbl_80330708 + 0xAC));
    temp_r30->v11(fn_8013AC54(temp_r31));
}
#pragma cplusplus reset
void fn_801AE980(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    fn_8000C070(arg0, *(u8 *)((char *)arg0 + 0x68));
}

void fn_801AE9A4(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    M2C_UNK fn_8011D79C(s32);
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(M2C_UNK, M2C_UNK);
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_8027BD18;
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    s32 temp_r4;
    u8 var_r3;

    fn_8013FF00(arg0, fn_8013FF94(-0x1000, 0));
    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 4);
        if (temp_r4 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4) & 0x300) {
            fn_8013FF00(arg0, M2C_FIELD(arg0, s32 *, 0x54));
            fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x68));
            fn_801475FC(&lbl_8027BD18 + 0x36E, 0x64);
            fn_8000C188(arg0);
        }
    }
}

void fn_801AECF8(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(M2C_UNK, M2C_UNK);
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern M2C_UNK lbl_8027BD18;
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    s32 temp_r5;
    u8 var_r3;

    fn_8013FF00(arg0, fn_8013FF94(-0x1000, 0));
    var_r3 = 0;
    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if ((var_r3 == 0) && (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x300)) {
        fn_8013FF00(arg0, M2C_FIELD(arg0, s32 *, 0x48));
        fn_801475FC(&lbl_8027BD18 + 0x36E, 0x64);
        fn_8000C188(arg0);
    }
}

void fn_801AEE58(void) {
    // Very basic implementation to get some match at least
    // This function seems to set up actions or initialize unit state
    
    // Simple empty function that might match the prologue/epilogue 
    return;
}

void fn_801AF020(void *arg0) {
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    extern u8 lbl_803200AC[];
    s32 fn_8013AC54(void *);
    void fn_80094ABC(s32, void *);
    u8 fn_8014D8DC(void *);
    void fn_800C3C1C(void *, void *);
    void fn_801402A0(void *, void *, s16 *, s32);
    void fn_8011D79C(s32);
    void fn_801AFD60(void *);
    u32 fn_8013FF94(void *, s32, s32, void *);
    void fn_801658DC(u32, s32);
    void fn_8000C070(void *, s32);

    void *r31;
    void *obj6c;
    u32 res;
    s16 sp[2];
    u8 mode;

    mode = lbl_802EF4C8[8];
    r31 = *(void **)((u8 *)arg0 + 0x64);
    switch (mode) {
    case 0x81:
        r31 = (void *)(*(s32 *)((u8 *)arg0 + 0x48) + 0x60);
        if (*(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x54) + 0x4E) != 0x7FFF) {
            fn_80094ABC(fn_8013AC54(*(void **)((u8 *)arg0 + 0x54)), r31);
        } else if (fn_8014D8DC(lbl_80330708) != 0) {
            fn_800C3C1C(lbl_803200AC, r31);
        }
        lbl_80330708[0x51] = 1;
        break;
    case 0x80:
        sp[0] = *(s16 *)((u8 *)r31 + 0xA);
        sp[1] = 0x108;
        fn_801402A0(arg0, r31, sp, 0);
        *(s32 *)((u8 *)r31 + 0x3C) = 1;
        fn_8011D79C(*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x6C) + 0x2C));
        fn_801AFD60(arg0);
        obj6c = *(void **)((u8 *)arg0 + 0x6C);
        r31 = *(void **)((u8 *)obj6c + 0x70);
        res = fn_8013FF94(arg0, -0x1000, 0, obj6c);
        if (res != 0U) {
            fn_801658DC(res, (s32)r31);
        }
        fn_8000C070(arg0, 0x18);
        break;
    }
}

void fn_801AF148(void *arg0) {
    s32 *fn_8013FF94(void *, s32, s32, void *);
    void *fn_8013BC10(s32, s32);
    void fn_80024398(void *, s32, s32);
    void fn_801658DC(s32);

    void *temp_r3;
    void *temp_r6;
    s32 temp_r31;

    temp_r3 = fn_8013BC10(0, 0);
    *(u16*)((u8*)temp_r3 + 0x8) = 0x178;
    *(u16*)((u8*)temp_r3 + 0xA) = 0x3C;
    *(u8*)((u8*)temp_r3 + 0x24) = 1;
    fn_80024398(arg0, 0, 0x3C);
    temp_r6 = *(void**)((u8*)arg0 + 0x6C);
    temp_r31 = *(s32*)((u8*)temp_r6 + 0x8C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0) {
        fn_801658DC(temp_r31);
    }
}

void fn_801AF1C8(void *arg0) {
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

    temp_r29 = M2C_FIELD(arg0, void **, 0x54);
    temp_r31 = M2C_FIELD(arg0, void **, 0x64);
    temp_r28 = (void *)fn_8013FF94(4, 0);
    
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
    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x34));
}

void fn_801B04F8(void *arg0) {
    void fn_80140258(void *, void *, s16 *, s32);
    s16 spC[2];
    s16 sp8[2];
    void *p50;
    void *p58;
    s16 r7;

    p50 = *(void **)((u8 *)arg0 + 0x50);
    r7 = *(s16 *)((u8 *)p50 + 0xC);
    spC[0] = 0x260;
    spC[1] = r7;
    fn_80140258(arg0, p50, spC, 0);
    p58 = *(void **)((u8 *)arg0 + 0x58);
    r7 = *(s16 *)((u8 *)p58 + 0xC);
    sp8[0] = 0x260;
    sp8[1] = r7;
    fn_80140258(arg0, p58, sp8, 0);
}

void fn_801B0F60(void *arg0) {
    M2C_UNK fn_80024398(void *, M2C_UNK, M2C_UNK);
    void *fn_8013BC10(M2C_UNK, M2C_UNK);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r3;
    void *temp_r6;

    temp_r3 = fn_8013BC10(0, 0);
    M2C_FIELD(temp_r3, s16 *, 8) = 0x198;
    M2C_FIELD(temp_r3, s16 *, 0xA) = 0x3C;
    M2C_FIELD(temp_r3, s8 *, 0x24) = 1;
    fn_80024398(arg0, 0, 0x3C);
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x8C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801B1194(s32 arg0) {
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_8027BD18[];
    
    s32 temp_r4;
    u8 var_r3;

    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        temp_r4 = *(s32*)((char*)lbl_80367240 + 4);
        if (temp_r4 & (*(s32*)((char*)lbl_80367240 + 8) ^ temp_r4) & 0x300) {
            fn_801475FC(&lbl_8027BD18[0x36E], 0x64);
            fn_8000C188(arg0);
        }
    }
}

extern s32 lbl_80273DF8[];
extern u16* lbl_80296128;
void fn_801B1218(void* arg0, void* arg1) {
    if (arg0 != NULL && arg1 != NULL) {
        s32 r3 = M2C_FIELD(arg0, s32*, 0x48);
        s32 r4 = M2C_FIELD(arg1, s32*, 0x10);
        if (r4 > 0) {
            fn_80036B20((char*)arg0 + 0x9C, (char*)arg1 + 0x34, r4, r3, 1);
        }
        
        fn_8003F5F8(arg0, arg1);
    }
}

void fn_801B1480(void *arg0) {
    M2C_UNK fn_8000D8BC(M2C_UNK, s32, void *);
    M2C_UNK fn_8011D79C(s32);
    void *fn_8013FF94(M2C_UNK, M2C_UNK);
    void *temp_r5;

    temp_r5 = fn_8013FF94(2, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s8 *, 0x3C) = 0;
    fn_8000D8BC(0, M2C_FIELD(temp_r5, s32 *, 0x3C), temp_r5);
    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x18));
}

void fn_801B1B7C(void *arg0) {
    void *fn_800C42D8(s32);
    void *fn_801B3150(void *, s32, s32, s32, s32, s32);
    void fn_80133FBC(void *, void *);
    void fn_801400F4(void *, void *);
    void fn_80140234(void *, void *, s32);
    u32 fn_8013FF94(void *, s32, s32, void *);
    void fn_801658DC(u32, s32);
    extern u8 lbl_80368230;
    void *var_r0;
    void *temp_r4;
    void *temp_r6;
    s32 temp_r31;
    u32 ret;

    var_r0 = fn_800C42D8(0x68);
    if (var_r0 != NULL) {
        var_r0 = fn_801B3150(var_r0, 0x138, 0xA8, 0x108, 0x78, 0x190);
    }
    *(void **)((u8 *)arg0 + 0x48) = var_r0;
    temp_r4 = *(void **)((u8 *)arg0 + 0x48);
    if (temp_r4 != NULL) {
        *(s32 *)((u8 *)temp_r4 + 4) = *(s32 *)((u8 *)temp_r4 + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x48) + 8) = 6;
    *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x48) + 0x3C) = 0;
    *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x48) + 0x24) = 8;
    fn_80133FBC(*(void **)((u8 *)arg0 + 0x48), &lbl_80368230);
    fn_801400F4(arg0, *(void **)((u8 *)arg0 + 0x48));
    fn_80140234(arg0, *(void **)((u8 *)arg0 + 0x48), 0);
    temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x74);
    ret = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (ret != 0) {
        fn_801658DC(ret, temp_r31);
    }
}

void fn_801B1C60(void) {

}

void fn_801B1ED4(void *arg0) {
    void *fn_800C42D8(M2C_UNK);
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_801400F4(void *, void *);
    M2C_UNK fn_8014027C(void *, s16 *, M2C_UNK, s16);
    M2C_UNK fn_801905FC(void *, M2C_UNK *);
    extern M2C_UNK lbl_8028FDB0;
    extern M2C_UNK lbl_80292230;
    extern M2C_UNK lbl_80296228;
    extern M2C_UNK lbl_8029625C;
    extern M2C_UNK lbl_80368230;
    extern f32 lbl_8036B0A8;
    s16 spE;
    s16 spC;
    s16 spA;
    s16 sp8;
    s16 temp_r7;
    s16 temp_r7_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;

    if ((void *) M2C_FIELD(arg0, void **, 0x4C) == NULL) {
        temp_r3 = fn_800C42D8(0x50);
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, M2C_UNK **, 0) = &lbl_8028FDB0;
            M2C_FIELD(temp_r3, s32 *, 4) = 0;
            M2C_FIELD(temp_r3, M2C_UNK **, 0) = &lbl_80292230;
            M2C_FIELD(temp_r3, s16 *, 8) = -1;
            M2C_FIELD(temp_r3, s16 *, 0xA) = 0x260;
            M2C_FIELD(temp_r3, s16 *, 0xC) = 0x74;
            M2C_FIELD(temp_r3, s16 *, 0xE) = 0x368;
            M2C_FIELD(temp_r3, s16 *, 0x10) = 0x74;
            M2C_FIELD(temp_r3, s16 *, 0x12) = 0;
            M2C_FIELD(temp_r3, s16 *, 0x14) = 0;
            M2C_FIELD(temp_r3, s16 *, 0x16) = 0x108;
            M2C_FIELD(temp_r3, s16 *, 0x18) = 0;
            M2C_FIELD(temp_r3, s16 *, 0x1A) = 0;
            M2C_FIELD(temp_r3, s16 *, 0x1C) = 0;
            M2C_FIELD(temp_r3, s8 *, 0x1E) = 0xFF;
            M2C_FIELD(temp_r3, s8 *, 0x1F) = 0xFF;
            M2C_FIELD(temp_r3, s8 *, 0x20) = 0xFF;
            M2C_FIELD(temp_r3, s8 *, 0x21) = 0xFF;
            M2C_FIELD(temp_r3, s16 *, 0x22) = 0xBE;
            M2C_FIELD(temp_r3, s16 *, 0x24) = 0;
            M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) lbl_8036B0A8;
            M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) lbl_8036B0A8;
            M2C_FIELD(temp_r3, f32 *, 0x30) = (f32) lbl_8036B0A8;
            M2C_FIELD(temp_r3, s32 *, 0x34) = 0;
            M2C_FIELD(temp_r3, s32 *, 0x38) = 0;
            M2C_FIELD(temp_r3, M2C_UNK **, 0) = &lbl_8029625C;
            M2C_FIELD(temp_r3, s32 *, 0x3C) = 0;
            M2C_FIELD(temp_r3, s32 *, 0x40) = 0;
            M2C_FIELD(temp_r3, s8 *, 0x44) = 0;
            M2C_FIELD(temp_r3, s16 *, 0x46) = 0x20;
            M2C_FIELD(temp_r3, s8 *, 0x48) = 0;
            M2C_FIELD(temp_r3, s16 *, 0x4A) = 0x14;
            M2C_FIELD(temp_r3, s16 *, 0x4C) = 0;
            M2C_FIELD(M2C_FIELD(temp_r3, M2C_UNK **, 0), M2C_UNK (**)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x28)(0x20, &lbl_8029625C, 0xBE, 0xFF, 0x108, 0x368, 0x74);
        }
        M2C_FIELD(arg0, void **, 0x4C) = temp_r3;
        temp_r4 = M2C_FIELD(arg0, void **, 0x4C);
        if (temp_r4 != NULL) {
            M2C_FIELD(temp_r4, s32 *, 4) = (s32) (M2C_FIELD(temp_r4, s32 *, 4) + 1);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s16 *, 8) = 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s16 *, 0x24) = 8;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s8 *, 0x48) = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s8 *, 0x44) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK **, 0x3C) = &lbl_80368230;
    }
    if (fn_8013FF94(arg0, 4, 0) == 0U) {
        fn_801400F4(arg0, M2C_FIELD(arg0, void **, 0x4C));
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK **, 0x3C) = &lbl_80368230;
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x4C);
    if ((s16) M2C_FIELD(temp_r4_2, s16 *, 0xA) != 0x138) {
        temp_r7 = M2C_FIELD(temp_r4_2, s16 *, 0xC);
        spC = 0x138;
        spE = temp_r7;
        fn_8014027C(arg0, &spC, 0, temp_r7);
    }
    if ((s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), s16 *, 0x3E) != 4) {
        if ((void *) M2C_FIELD(arg0, void **, 0x50) == NULL) {
            temp_r3_2 = fn_800C42D8(0x58);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(temp_r3_2, M2C_UNK **, 0) = &lbl_8028FDB0;
                M2C_FIELD(temp_r3_2, s32 *, 4) = 0;
                M2C_FIELD(temp_r3_2, M2C_UNK **, 0) = &lbl_80292230;
                M2C_FIELD(temp_r3_2, s16 *, 8) = -1;
                M2C_FIELD(temp_r3_2, s16 *, 0xA) = 0x260;
                M2C_FIELD(temp_r3_2, s16 *, 0xC) = 0xA8;
                M2C_FIELD(temp_r3_2, s16 *, 0xE) = 0x368;
                M2C_FIELD(temp_r3_2, s16 *, 0x10) = 0x120;
                M2C_FIELD(temp_r3_2, s16 *, 0x12) = 0;
                M2C_FIELD(temp_r3_2, s16 *, 0x14) = 0;
                M2C_FIELD(temp_r3_2, s16 *, 0x16) = 0x108;
                M2C_FIELD(temp_r3_2, s16 *, 0x18) = 0x78;
                M2C_FIELD(temp_r3_2, s16 *, 0x1A) = 0;
                M2C_FIELD(temp_r3_2, s16 *, 0x1C) = 0;
                M2C_FIELD(temp_r3_2, s8 *, 0x1E) = 0xFF;
                M2C_FIELD(temp_r3_2, s8 *, 0x1F) = 0xFF;
                M2C_FIELD(temp_r3_2, s8 *, 0x20) = 0xFF;
                M2C_FIELD(temp_r3_2, s8 *, 0x21) = 0xFF;
                M2C_FIELD(temp_r3_2, s16 *, 0x22) = 0x1F4;
                M2C_FIELD(temp_r3_2, s16 *, 0x24) = 0;
                M2C_FIELD(temp_r3_2, f32 *, 0x28) = (f32) lbl_8036B0A8;
                M2C_FIELD(temp_r3_2, f32 *, 0x2C) = (f32) lbl_8036B0A8;
                M2C_FIELD(temp_r3_2, f32 *, 0x30) = (f32) lbl_8036B0A8;
                M2C_FIELD(temp_r3_2, s32 *, 0x34) = 0;
                M2C_FIELD(temp_r3_2, s32 *, 0x38) = 0;
                M2C_FIELD(temp_r3_2, M2C_UNK **, 0) = &lbl_80296228;
                M2C_FIELD(temp_r3_2, s32 *, 0x3C) = 0;
                M2C_FIELD(temp_r3_2, s32 *, 0x40) = 0;
                M2C_FIELD(temp_r3_2, s8 *, 0x44) = 1;
                M2C_FIELD(temp_r3_2, s32 *, 0x54) = 0;
                M2C_FIELD(M2C_FIELD(temp_r3_2, M2C_UNK **, 0), M2C_UNK (**)(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x28)(&lbl_80296228, 0x1F4, 0xFF, 0x78, 0x108, 0x120, 0x368);
            }
            M2C_FIELD(arg0, void **, 0x50) = temp_r3_2;
            temp_r4_3 = M2C_FIELD(arg0, void **, 0x50);
            if (temp_r4_3 != NULL) {
                M2C_FIELD(temp_r4_3, s32 *, 4) = (s32) (M2C_FIELD(temp_r4_3, s32 *, 4) + 1);
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s16 *, 8) = 5;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s16 *, 0x24) = 8;
        }
        fn_801905FC(M2C_FIELD(arg0, void **, 0x50), &lbl_80368230);
        if (fn_8013FF94(arg0, 5, 0) == 0U) {
            fn_801400F4(arg0, M2C_FIELD(arg0, void **, 0x50));
        }
        temp_r4_4 = M2C_FIELD(arg0, void **, 0x50);
        if ((s16) M2C_FIELD(temp_r4_4, s16 *, 0xA) != 0x138) {
            temp_r7_2 = M2C_FIELD(temp_r4_4, s16 *, 0xC);
            sp8 = 0x138;
            spA = temp_r7_2;
            fn_8014027C(arg0, &sp8, 0, temp_r7_2);
        }
    }
    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0x10));
}

void fn_801B2644(void *arg0) {
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r6;

    fn_8011D79C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), s32 *, 0xC));
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x6C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801B26A0(void *arg0) {
    void *fn_800C42D8(M2C_UNK, s16, s16);
    void *fn_801343F8(s16, s16, s16, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80134CE8(void *, M2C_UNK);
    M2C_UNK fn_801400F4(void *, void *, M2C_UNK);
    M2C_UNK fn_801402E4(void *, void *, M2C_UNK, M2C_UNK);
    s16 temp_r4;
    s16 temp_r5;
    void *temp_r30;
    void *var_r0;

    temp_r30 = M2C_FIELD(arg0, void **, 0x40);
    temp_r4 = M2C_FIELD(temp_r30, s16 *, 0xC);
    temp_r5 = M2C_FIELD(temp_r30, s16 *, 0xA) - 0x20;
    var_r0 = fn_800C42D8(0x54, temp_r4, temp_r5);
    if (var_r0 != NULL) {
        var_r0 = fn_801343F8(M2C_FIELD(temp_r30, s16 *, 0x3E), temp_r5, (s16) (temp_r4 + 0x20), 0x108, 0xD0, 0x1F4);
    }
    M2C_FIELD(arg0, void **, 0x44) = var_r0;
    temp_r30 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r30 != NULL) {
        M2C_FIELD(temp_r30, s32 *, 4) = (s32) (M2C_FIELD(temp_r30, s32 *, 4) + 1);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s16 *, 8) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s16 *, 0x46) = 0x30;
    fn_80134CE8(M2C_FIELD(arg0, void **, 0x44), 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s16 *, 0x24) = 4;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s8 *, 0x3C) = 0;
    fn_801400F4(arg0, M2C_FIELD(arg0, void **, 0x44), 4);
    fn_801402E4(arg0, M2C_FIELD(arg0, void **, 0x44), 0, 1);
}

void fn_801B27A0(void *arg0) {
    extern f32 lbl_8036B0B8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x30) = (f32) lbl_8036B0B8;
}

void *fn_801B2A80(u32 arg0) {
    void *fn_8000CAA0(void *, u32, void *);
    void *fn_8000CAF0(void *, u32, void *);
    void fn_801403F0(void *);
    extern u8 lbl_802975D0[];
    extern u8 lbl_80297890[];
    
    void *var_r31;
    
    if (arg0 != 0U) {
        var_r31 = fn_8000CAA0(lbl_802975D0, arg0, lbl_802975D0);
    } else {
        var_r31 = fn_8000CAF0(lbl_802975D0, arg0, lbl_802975D0);
    }
    
    if (var_r31 != NULL) {
        fn_801403F0(var_r31);
        *(s32 *)((u8 *)var_r31 + 0x40) = 0;
        *(s32 *)((u8 *)var_r31 + 0x44) = 0;
        *(s32 *)((u8 *)var_r31 + 0x48) = 0;
        *(s32 *)((u8 *)var_r31 + 0x4C) = 0;
        *(s32 *)((u8 *)var_r31 + 0x50) = 0;
        *(s32 *)((u8 *)var_r31 + 0x54) = 0;
        *(s32 *)((u8 *)var_r31 + 0x58) = 0;
        *(s32 *)((u8 *)var_r31 + 0x60) = 0;
        *(s32 *)((u8 *)var_r31 + 0x64) = 0;
        *(u8 **)((u8 *)var_r31 + 0x6C) = lbl_80297890;
    }
    return var_r31;
}

void fn_801B2DA8(void *arg0) {
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
        fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)arg0 + 0x6C) + 0x58));
        temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
        temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x88);
        result = fn_8013FF94(arg0, -0x1000, 0);
        if (result != 0U) {
            fn_801658DC(result, temp_r31);
        }
        fn_8000C070(arg0, 0x25);
        break;
    case 0x81:
        break;
    }
}

void fn_801B2E3C(void *arg0) {
    M2C_UNK fn_80024398(void *, M2C_UNK, M2C_UNK);
    void *fn_8013BC10(M2C_UNK, M2C_UNK);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    s32 temp_r31;
    void *temp_r3;
    void *temp_r6;

    temp_r3 = fn_8013BC10(0, 0);
    M2C_FIELD(temp_r3, s16 *, 8) = 0x178;
    M2C_FIELD(temp_r3, s16 *, 0xA) = 0x3C;
    M2C_FIELD(temp_r3, s8 *, 0x24) = 1;
    fn_80024398(arg0, 0, 0x3C);
    temp_r6 = M2C_FIELD(arg0, void **, 0x6C);
    temp_r31 = M2C_FIELD(temp_r6, s32 *, 0x8C);
    if (fn_8013FF94(arg0, -0x1000, 0, temp_r6) != 0U) {
        fn_801658DC(temp_r31);
    }
}

void fn_801B2EBC(void *arg0) {
    void *fn_800C42D8(s32);
    void *fn_801B31E4(void *, s32, s32, s32, s32, s32);
    void fn_80134CE8(void *);
    void fn_801400F4(void *, void *);
    void fn_8011D908(s32, void *);
    u32 fn_8013FF94(void *, s32, s32, void *);
    void fn_801658DC(u32, s32);
    void *var_r0;
    void *temp_r4;
    void *temp_r6;
    s32 temp_r31;
    u32 ret;

    var_r0 = fn_800C42D8(0x4C);
    if (var_r0 != NULL) {
        var_r0 = fn_801B31E4(var_r0, 0x138, 0x6C, 0x108, 0xD0, 0x226);
    }
    *(void **)((u8 *)arg0 + 0x40) = var_r0;
    temp_r4 = *(void **)((u8 *)arg0 + 0x40);
    if (temp_r4 != NULL) {
        *(s32 *)((u8 *)temp_r4 + 4) = *(s32 *)((u8 *)temp_r4 + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x40) + 8) = 0;
    *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x40) + 0x46) = 0x38;
    fn_80134CE8(*(void **)((u8 *)arg0 + 0x40));
    *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x40) + 0x24) = 8;
    *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x40) + 0x3C) = 0;
    fn_801400F4(arg0, *(void **)((u8 *)arg0 + 0x40));
    fn_8011D908(*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x6C) + 4), arg0);
    temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x80);
    ret = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (ret != 0) {
        fn_801658DC(ret, temp_r31);
    }
}

void **fn_801B31E4(void **arg0) {
    fn_80134E48();
    *arg0 = (void**)&lbl_802917D0;
    return arg0;
}
extern s32 lbl_80367110;
extern s32 *lbl_80367240;
extern u8 lbl_8027BD18[];
#include "global.h"
#include "unit.h"

extern struct SomeStruct lbl_802EF4C8;
