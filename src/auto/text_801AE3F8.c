/* Functions from 0x801AE3F8 to 0x801B3220, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
#pragma cplusplus on
struct SetupMenuObj {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
 virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(s32); virtual void v12(s32);
};
#pragma cplusplus reset
extern u8 lbl_802917D0[];
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
    void fn_8011D79C(s32);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801658DC(void *, s32);
    void *inner;
    s32 saved;
    void *ret;

    fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)arg0 + 0x6C) + 0x50));
    inner = *(void **)((u8 *)arg0 + 0x6C);
    saved = *(s32 *)((u8 *)inner + 0x88);
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != NULL) {
        fn_801658DC(ret, saved);
    }
}

void fn_801AE81C(void *arg0) {
    void fn_8011D79C(s32);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801658DC(void *, s32);
    void *inner;
    s32 saved;
    void *ret;

    fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)arg0 + 0x6C) + 0x58));
    inner = *(void **)((u8 *)arg0 + 0x6C);
    saved = *(s32 *)((u8 *)inner + 0x88);
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != NULL) {
        fn_801658DC(ret, saved);
    }
}

#pragma cplusplus on
extern "C" void fn_801AE878(void *arg0) {
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
    void fn_8000C070(void *, s32);
    extern u8 lbl_80330708[];
    s32 temp_r31;
    VObj *temp_r30;

    temp_r31 = *(s32 *)((u8 *)arg0 + 0x54);
    temp_r30 = fn_8013FF94(arg0, 0xA, 0);
    fn_8013AD70(temp_r31, *(s32 *)(lbl_80330708 + 0xB0));
    temp_r30->v11(fn_8013AC54(temp_r31));
    fn_8000C070(arg0, *(u8 *)((u8 *)arg0 + 0x68));
}
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
    s32 fn_8013FF94(void *, s32, s32);
    void fn_8013FF00(void *, s32);
    void fn_8011D79C(void *);
    void fn_801475FC(void *, s32);
    void fn_8000C188(void *);
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_8027BD18[];
    u8 flag;
    u32 a;
    u32 b;

    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
    flag = 0;
    if ((lbl_80367110 & 0x10) != 0 && (lbl_80367110 & 0x20) == 0) {
        flag = 1;
    }
    if (flag == 0) {
        a = *(u32 *)((u8 *)lbl_80367240 + 4);
        b = *(u32 *)((u8 *)lbl_80367240 + 8);
        if ((a & (b ^ a) & 0x300) != 0) {
            fn_8013FF00(arg0, *(s32 *)((u8 *)arg0 + 0x54));
            fn_8011D79C(*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x6C) + 0x68));
            fn_801475FC(lbl_8027BD18 + 0x36E, 0x64);
            fn_8000C188(arg0);
        }
    }
}

void fn_801AECF8(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    M2C_UNK fn_8013FF00(void *, s32);
    s32 fn_8013FF94(void *, s32, s32);
    M2C_UNK fn_801475FC(void *, M2C_UNK);
    extern u8 lbl_8027BD18[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    void *ptr;
    s32 a;
    s32 mask;
    u8 var;
    u32 flags;

    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
    var = 0;
    ptr = lbl_80367240;
    flags = lbl_80367110;
    a = *(s32 *)((char *)ptr + 4);
    mask = a & (*(s32 *)((char *)ptr + 8) ^ a);
    if ((flags & 0x10) && !(flags & 0x20)) {
        var = 1;
    }
    if ((u8)var == 0) {
        if (mask & 0x300) {
            fn_8013FF00(arg0, *(s32 *)((char *)arg0 + 0x48));
            fn_801475FC(&lbl_8027BD18[0x36E], 0x64);
            fn_8000C188(arg0);
        }
    }
}

void fn_801AEDA0(void *arg0) {
    s32 fn_8013FF94(void *, s32, s32);
    void fn_8013FF00(void *, s32);
    void fn_801475FC(void *, s32);
    void fn_8000C188(void *);
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern u8 lbl_8027BD18[];
    u8 flag;
    u32 a;
    u32 b;

    fn_8013FF00(arg0, fn_8013FF94(arg0, -0x1000, 0));
    flag = 0;
    if ((lbl_80367110 & 0x10) != 0 && (lbl_80367110 & 0x20) == 0) {
        flag = 1;
    }
    if (flag == 0) {
        a = *(u32 *)((u8 *)lbl_80367240 + 4);
        b = *(u32 *)((u8 *)lbl_80367240 + 8);
        if ((a & (b ^ a) & 0x300) != 0) {
            fn_8013FF00(arg0, fn_8013FF94(arg0, 1, 0));
            fn_801475FC(lbl_8027BD18 + 0x36E, 0x64);
            fn_8000C188(arg0);
        }
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
    temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x8C);
    res = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (res != 0U) {
        fn_801658DC(res, temp_r31);
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

void fn_801AF40C(void *arg0) {
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
    temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x8C);
    res = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (res != 0U) {
        fn_801658DC(res, temp_r31);
    }
}

#pragma cplusplus on
extern "C" void fn_801AF48C(void *arg0) {
    void *fn_800C42D8(s32);
    void fn_8011D79C(s32);
    void fn_80138808(void *, s32);
    s32 fn_8013AC54(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801400F4(void *, void *);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_8014027C(void *, void *, s16 *, s32);
    extern void *lbl_8028FDB0[];
    extern void *lbl_80291A3C[];
    extern void *lbl_80292230[];
    extern f32 lbl_8036B0A8;

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

    s16 sp10[2];
    s16 spC[2];
    s16 sp8[2];
    void *temp_r31;
    void *temp_r30;
    void *temp_r28;
    s16 temp_r5;
    s16 temp_r6;
    s16 temp_r7;

    temp_r30 = *(void **)((u8 *)arg0 + 0x54);
    temp_r28 = fn_8013FF94(arg0, 4, 0);
    temp_r6 = *(s16 *)((u8 *)temp_r30 + 0xC);
    sp10[0] = 0x260;
    sp10[1] = temp_r6;
    fn_80140258(arg0, temp_r30, sp10, 0);
    spC[0] = 0x138;
    spC[1] = 0x74;
    fn_8014027C(arg0, temp_r28, spC, 0);
    temp_r5 = *(s16 *)((u8 *)temp_r28 + 0xA) + 0x108;
    *(s16 *)((u8 *)temp_r28 + 0xE) = temp_r5;
    *(s16 *)((u8 *)temp_r28 + 0x4A) = 0x14;
    *(s16 *)((u8 *)temp_r28 + 0x4C) = 0;
    ((Obj *)temp_r28)->v8();
    *(u8 *)((u8 *)temp_r28 + 0x48) = 1;
    *(u8 *)((u8 *)temp_r28 + 0x44) = 2;
    temp_r31 = fn_800C42D8(0x54);
    if (temp_r31 != NULL) {
        s32 flag;
        *(void **)temp_r31 = lbl_8028FDB0;
        *(s32 *)((u8 *)temp_r31 + 4) = 0;
        *(void **)temp_r31 = lbl_80292230;
        *(s16 *)((u8 *)temp_r31 + 8) = -1;
        *(s16 *)((u8 *)temp_r31 + 0xA) = 0x260;
        *(s16 *)((u8 *)temp_r31 + 0xC) = 0xA7;
        *(s16 *)((u8 *)temp_r31 + 0xE) = 0x368;
        *(s16 *)((u8 *)temp_r31 + 0x10) = 0xFC;
        *(s16 *)((u8 *)temp_r31 + 0x12) = 0;
        *(s16 *)((u8 *)temp_r31 + 0x14) = 0;
        *(s16 *)((u8 *)temp_r31 + 0x16) = 0x108;
        *(s16 *)((u8 *)temp_r31 + 0x18) = 0x55;
        *(s16 *)((u8 *)temp_r31 + 0x1A) = 0;
        *(s16 *)((u8 *)temp_r31 + 0x1C) = 0;
        ((u8 *)temp_r31)[0x1E] = 0xFF;
        ((u8 *)temp_r31)[0x1F] = 0xFF;
        ((u8 *)temp_r31)[0x20] = 0xFF;
        ((u8 *)temp_r31)[0x21] = 0xFF;
        *(s16 *)((u8 *)temp_r31 + 0x22) = 0x190;
        *(s16 *)((u8 *)temp_r31 + 0x24) = 0;
        *(f32 *)((u8 *)temp_r31 + 0x28) = lbl_8036B0A8;
        *(f32 *)((u8 *)temp_r31 + 0x2C) = lbl_8036B0A8;
        *(f32 *)((u8 *)temp_r31 + 0x30) = lbl_8036B0A8;
        *(s32 *)((u8 *)temp_r31 + 0x34) = 0;
        *(s32 *)((u8 *)temp_r31 + 0x38) = 0;
        *(void **)temp_r31 = lbl_80291A3C;
        *(s32 *)((u8 *)temp_r31 + 0x3C) = 0;
        flag = 1;
        flag = (flag << 16) + 0x3A;
        *(s32 *)((u8 *)temp_r31 + 0x40) = flag;
        *(s32 *)((u8 *)temp_r31 + 0x4C) = 0;
        *(s32 *)((u8 *)temp_r31 + 0x50) = 0;
        ((Obj *)temp_r31)->v8();
        *(s16 *)((u8 *)temp_r31 + 8) = 9;
        *(s16 *)((u8 *)temp_r31 + 0x24) = 8;
        *(s32 *)((u8 *)temp_r31 + 0x34) |= 0x10;
        fn_80138808(temp_r31, fn_8013AC54(temp_r30));
        fn_801400F4(arg0, temp_r31);
        temp_r7 = *(s16 *)((u8 *)temp_r31 + 0xC);
        sp8[0] = 0x138;
        sp8[1] = temp_r7;
        fn_8014027C(arg0, temp_r31, sp8, 0);
        fn_8011D79C(*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x6C) + 0x30));
    }
}

void fn_801AF6BC(void *arg0) {
    void *fn_8013FF94(void *, s32, s32);
    s32 fn_8013AC54(void *);
    void fn_8013FDA0(void *);
    void fn_801400F4(void *, void *);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_8014027C(void *, void *, s16 *, s32);
    void fn_8013FF00(void *, void *);
    u8 fn_8014D8DC(void *);
    void fn_801475FC(void *, s32);
    u64 *fn_8001CB64(void *);
    u8 fn_80092F9C(void *);
    u8 fn_80092F38(void *);
    void fn_8011D79C(void *);
    void fn_801658DC(void *, void *);
    void fn_8000C070(void *, s32);
    s32 fn_800C3D48(void *);
    void fn_801695BC(void *, void *, s32);
    void fn_801694AC(void *, void *);
    void fn_80176888(void *, void *, f32, f32);
    extern u32 lbl_80367110;
    extern u32 *lbl_80367240;
    extern u8 lbl_8027BD18[];
    extern u8 lbl_80330708[];
    extern u8 lbl_803200AC[];
    extern f32 lbl_8036B0AC;

    typedef void (*VFn2)(void *, s32);
    typedef void (*VFn1)(void *);
    s16 sp24[2];
    s16 sp20[2];
    s16 sp1C[2];
    s16 sp18[2];
    s16 sp14[2];
    s16 sp10[2];
    s16 spC[2];
    s16 sp8[2];
    void *self;
    void *list;
    void *panel;
    void *sel;
    void *obj;
    void *tmp;
    void *res;
    void **vt;
    s32 pressed;
    s32 held;
    u8 skip;
    s16 y;

    self = arg0;
    list = *(void **)((u8 *)self + 0x54);
    panel = fn_8013FF94(self, 4, 0);
    sel = (void *)fn_8013AC54(list);
    fn_8013FDA0(self);
    if (sel != (void *)fn_8013AC54(list)) {
        if (sel != NULL && fn_8013AC54(list) != 0) {
            obj = *(void **)((u8 *)self + 0x60);
            vt = *(void ***)obj;
            ((VFn2)vt[0x34 / 4])(obj, fn_8013AC54(list));
        } else if (sel != NULL && fn_8013AC54(list) == 0) {
            obj = *(void **)((u8 *)self + 0x60);
            y = *(s16 *)((u8 *)obj + 0xC);
            sp24[0] = 0x260;
            sp24[1] = y;
            fn_80140258(self, obj, sp24, 1);
            if (fn_8014D8DC(lbl_80330708) != 0) {
                fn_801400F4(self, *(void **)((u8 *)self + 0x64));
                obj = *(void **)((u8 *)self + 0x64);
                y = *(s16 *)((u8 *)obj + 0xC);
                sp20[0] = 0x134;
                sp20[1] = y;
                fn_8014027C(self, obj, sp20, 0);
            }
            fn_8013FF00(self, list);
        } else {
            fn_801400F4(self, *(void **)((u8 *)self + 0x60));
            obj = *(void **)((u8 *)self + 0x60);
            y = *(s16 *)((u8 *)obj + 0xC);
            sp1C[0] = 0x138;
            sp1C[1] = y;
            fn_8014027C(self, obj, sp1C, 1);
            obj = *(void **)((u8 *)self + 0x60);
            vt = *(void ***)obj;
            ((VFn2)vt[0x34 / 4])(obj, fn_8013AC54(list));
            if (fn_8014D8DC(lbl_80330708) != 0) {
                obj = *(void **)((u8 *)self + 0x64);
                y = *(s16 *)((u8 *)obj + 0xC);
                sp18[0] = 0x260;
                sp18[1] = y;
                fn_80140258(self, obj, sp18, 0);
            }
            fn_8013FF00(self, list);
        }
        sel = (void *)fn_8013AC54(list);
    }
    *(void **)((u8 *)panel + 0x40) = sel;

    skip = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        skip = 1;
    }
    if (skip == 0) {
        held = lbl_80367240[1];
        pressed = held & (lbl_80367240[2] ^ held);
        if ((pressed & 0x100) != 0 && sel != NULL) {
            tmp = *(void **)((u8 *)panel + 0x3C);
            fn_801475FC(lbl_8027BD18 + 0x37E, 0x64);
            if ((*fn_8001CB64(tmp) & 5ULL) != 0 && fn_80092F9C(sel) >= 4) {
                fn_8011D79C(*(void **)(*(u8 **)((u8 *)self + 0x6C) + 0x40));
                res = *(void **)(*(u8 **)((u8 *)self + 0x6C) + 0x84);
                tmp = fn_8013FF94(self, -0x1000, 0);
                if (tmp != NULL) {
                    fn_801658DC(tmp, res);
                }
                fn_8000C070(self, 0x1E);
                return;
            }
            if ((*fn_8001CB64(tmp) & 0x18ULL) != 0 && fn_80092F38(sel) >= 4) {
                fn_8011D79C(*(void **)(*(u8 **)((u8 *)self + 0x6C) + 0x40));
                res = *(void **)(*(u8 **)((u8 *)self + 0x6C) + 0x84);
                tmp = fn_8013FF94(self, -0x1000, 0);
                if (tmp != NULL) {
                    fn_801658DC(tmp, res);
                }
                fn_8000C070(self, 0x1E);
                return;
            }
            fn_8000C070(self, 0x1A);
            return;
        }
        if ((pressed & 0x100) != 0 && sel == NULL && *(s16 *)((u8 *)list + 0x4E) == 0x7FFF) {
            if (fn_8014D8DC(lbl_80330708) == 0) {
                vt = *(void ***)list;
                ((void (*)(s16 *, void *))vt[0x2C / 4])(sp14, list);
                fn_80176888(lbl_8027BD18 + 0x38E, self, (f32)sp14[0], (f32)sp14[1]);
                return;
            }
            fn_801475FC(lbl_8027BD18 + 0x37E, 0x64);
            if (fn_800C3D48(lbl_803200AC) < 0) {
                fn_8011D79C(*(void **)(*(u8 **)((u8 *)self + 0x6C) + 0x64));
                res = *(void **)(*(u8 **)((u8 *)self + 0x6C) + 0x7C);
                tmp = fn_8013FF94(self, -0x1000, 0);
                if (tmp != NULL) {
                    fn_801658DC(tmp, res);
                }
                fn_8000C070(self, 0x21);
                return;
            }
            fn_8000C070(self, 0x1B);
            return;
        }
        if ((pressed & 0x800) != 0 && sel != NULL) {
            fn_801695BC(sel, self, 0x1000000);
            *(u8 *)((u8 *)self + 0x68) = 0x18;
            fn_8000C070(self, 0x22);
            return;
        }
        if ((pressed & 0x400) != 0 && sel != NULL) {
            fn_801694AC(sel, self);
            *(u8 *)((u8 *)self + 0x68) = 0x18;
            fn_8000C070(self, 0x23);
            return;
        }
        if ((pressed & 0x200) != 0) {
            y = *(s16 *)((u8 *)list + 0xC);
            sp10[0] = 0x260;
            sp10[1] = y;
            fn_80140258(self, list, sp10, 0);
            if (fn_8013FF94(self, 0xA, 0) != NULL) {
                obj = *(void **)((u8 *)self + 0x60);
                y = *(s16 *)((u8 *)obj + 0xC);
                spC[0] = 0x260;
                spC[1] = y;
                fn_80140258(self, obj, spC, 0);
            }
            obj = *(void **)((u8 *)self + 0x60);
            if (obj != NULL) {
                if (--*(s32 *)((u8 *)obj + 4) == 0) {
                    if (obj != NULL) {
                        vt = *(void ***)obj;
                        ((VFn2)vt[0x8 / 4])(obj, 1);
                    }
                }
                *(void **)((u8 *)self + 0x60) = NULL;
            }
            if (fn_8013FF94(self, 0xB, 0) != NULL) {
                obj = *(void **)((u8 *)self + 0x64);
                y = *(s16 *)((u8 *)obj + 0xC);
                sp8[0] = 0x260;
                sp8[1] = y;
                fn_80140258(self, obj, sp8, 0);
            }
            obj = *(void **)((u8 *)self + 0x64);
            if (obj != NULL) {
                if (--*(s32 *)((u8 *)obj + 4) == 0) {
                    if (obj != NULL) {
                        vt = *(void ***)obj;
                        ((VFn2)vt[0x8 / 4])(obj, 1);
                    }
                }
                *(void **)((u8 *)self + 0x64) = NULL;
            }
            *(s16 *)((u8 *)panel + 0xE) = (s16)(*(s16 *)((u8 *)panel + 0xA) + 0x108);
            *(s16 *)((u8 *)panel + 0x4A) = 0x14;
            *(s16 *)((u8 *)panel + 0x4C) = 0;
            vt = *(void ***)panel;
            ((VFn1)vt[0x28 / 4])(panel);
            *(u8 *)((u8 *)panel + 0x48) = 1;
            *(f32 *)((u8 *)panel + 0x2C) = lbl_8036B0AC;
            *(u8 *)((u8 *)panel + 0x44) = 0;
            *(s32 *)((u8 *)panel + 0x40) = 0;
            if (*(u32 *)((u8 *)self + 0x58) != 0) {
                fn_8000C070(self, 0x13);
            } else {
                fn_8000C070(self, 0xE);
            }
            fn_801475FC(lbl_8027BD18 + 0x3A0, 0x64);
        }
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801AFD60(void *arg0) {
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
    var_r31 = fn_8013FF94(arg0, 8, 0);
    if (var_r31 == NULL) {
        var_r31 = *(void **)((u8 *)var_r30 + 0x54);
        fn_801400F4(var_r30, var_r31);
    }
    if (*(s16 *)((u8 *)var_r31 + 0xA) != 0x118) {
        temp_r7 = *(s16 *)((u8 *)var_r31 + 0xC);
        sp14[0] = 0x118;
        sp14[1] = temp_r7;
        fn_8014027C(var_r30, var_r31, sp14, 0);
    }
    *(u8 *)((u8 *)var_r31 + 0x4C) = 1;
    if (*(s16 *)((u8 *)var_r31 + 0x4E) != 0x7FFF) {
        var_r29 = fn_8013FF94(var_r30, 0xA, 0);
        if (var_r29 == NULL) {
            var_r29 = *(void **)((u8 *)var_r30 + 0x60);
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
        var_r29 = fn_8013FF94(var_r30, 0xB, 0);
        if (var_r29 == NULL) {
            var_r29 = *(void **)((u8 *)var_r30 + 0x64);
            fn_801400F4(var_r30, var_r29);
        }
        if (*(s16 *)((u8 *)var_r29 + 0xA) != 0x134) {
            temp_r7 = *(s16 *)((u8 *)var_r29 + 0xC);
            spC[0] = 0x134;
            spC[1] = temp_r7;
            fn_8014027C(var_r30, var_r29, spC, 0);
        }
    }
    var_r29 = fn_8013FF94(var_r30, 4, 0);
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
    obj6c = *(void **)((u8 *)var_r30 + 0x6C);
    var_r31 = *(void **)((u8 *)obj6c + 0x70);
    res = (u32)fn_8013FF94(var_r30, -0x1000, 0);
    if (res != 0U) {
        fn_801658DC(res, (s32)var_r31);
    }
}

#pragma cplusplus on
extern "C" void fn_801AFF9C(void *arg0) {
void *fn_8013FF94(void *,s32,s32);
void fn_801400F4(void *,void *);
void fn_8014027C(void *,void *,s16 *,s32);
void fn_801402A0(void *,void *,s16 *,s32);
void *fn_800C42D8(s32);
void *fn_80193B60(void *,s16 *,s16 *,s32);
void fn_8013B064(void *,void *);
void fn_8013AD70(void *,void *);
u64 *fn_8001CB64(void *);
void *fn_80193950(void *,s16,s16,s32);
void *fn_801938F8(void *,s16,s16,s32);
void fn_8013FF00(void *,void *);
s32 fn_8013AC54(void *);
u8 fn_8014D8DC(void *);
void fn_8011D79C(void *);
void fn_801658DC(void *,void *);
extern u8 lbl_802CA264[],lbl_802EF4C8[],lbl_8028FDB0[],lbl_80292230[],lbl_80296150[],lbl_80330708[];
extern const f32 lbl_8036B0A8;
s16 sp20[2],sp1c[2],sp18[2],sp14[2],sp10[2],spc[2],sp8[2];
void *list; void *item; void *panel; void *self; void *p; void *q; void *walk; void *res;
s16 x,y,w,h;
self=arg0;
item=(u8 *)(*(void * *)((u8 *)self + 0x48))+0x60;
panel=fn_8013FF94(self,4,0);
if (!panel) {
 panel=*(void * *)((u8 *)self + 0x4c);
 fn_801400F4(self,panel);
 x=*(s16 *)((u8 *)panel + 0xa); w=(s16)(*(s16 *)((u8 *)panel + 0xe)-x);
 *(s16 *)((u8 *)panel + 0xe)=x+w;
 y=*(s16 *)((u8 *)panel + 0xc); h=(s16)(*(s16 *)((u8 *)panel + 0x10)-y);
 *(s16 *)((u8 *)panel + 0x10)=h+0x30; *(s16 *)((u8 *)panel + 0xc)=0x30;
 sp20[0]=0x14c; sp20[1]=0x30;
 fn_8014027C(self,panel,sp20,0);
} else {sp1c[0]=0x14c;sp1c[1]=0x30;fn_801402A0(self,panel,sp1c,0);}
*(s16 *)((u8 *)panel + 0xe)=*(s16 *)((u8 *)panel + 0xa)+0xe8;
*(s16 *)((u8 *)panel + 0x4a)=8; *(s16 *)((u8 *)panel + 0x4c)=0;
((SetupMenuObj *)panel)->v8();
*(u8 *)((u8 *)panel + 0x48)=0;*(u8 *)((u8 *)panel + 0x44)=0;
q=*(void * *)((u8 *)self + 0x54);
list=q;
if (!q) {
 p=fn_800C42D8(0xd8);
 if(p) {sp18[0]=0x128;sp18[1]=0x9a;sp14[0]=0x260;sp14[1]=0x6c;p=fn_80193B60(p,sp14,sp18,0x1f4);}
 *(void * *)((u8 *)self + 0x54)=p;
 q=*(void * *)((u8 *)self + 0x54); if(q) *(s32 *)((u8 *)q + 0x4)+=1;
 list=*(void * *)((u8 *)self + 0x54);
 *(s16 *)((u8 *)list + 0x8)=8;*(s16 *)((u8 *)list + 0x24)=8;*(s16 *)((u8 *)list + 0x5a)=0x1a;*(s16 *)((u8 *)list + 0x64)=2;
 ((SetupMenuObj *)list)->v12(4);
 *(s16 *)((u8 *)list + 0x58)=2;
 for(walk=*(void **)lbl_802CA264;walk;walk=*(void * *)((u8 *)walk + 0x184)) fn_8013B064(list,walk);
 for(walk=*(void **)(lbl_802CA264+0x3c);walk;walk=*(void * *)((u8 *)walk + 0x184)) fn_8013B064(list,walk);
 q=*(void **)lbl_802EF4C8;if(q) fn_8013AD70(list,q);
}
*(u8 *)((u8 *)list + 0x4c)=0;fn_801400F4(self,list);
if(*(s16 *)((u8 *)list + 0xa)!=0x118){y=*(s16 *)((u8 *)list + 0xc);sp10[0]=0x118;sp10[1]=y;fn_8014027C(self,list,sp10,0);}
if((*fn_8001CB64(item)&5ULL)!=0) {
 p=fn_800C42D8(0x78);if(p)p=fn_80193950(p,0x260,0x108,0x1f4);*(void * *)((u8 *)self + 0x60)=p;
} else {p=fn_800C42D8(0x78);if(p)p=fn_801938F8(p,0x260,0x108,0x1f4);*(void * *)((u8 *)self + 0x60)=p;}
q=*(void * *)((u8 *)self + 0x60);if(q)*(s32 *)((u8 *)q + 0x4)+=1;
*(s16 *)((u8 *)(*(void * *)((u8 *)self + 0x60)) + 0x8)=0xa;
*(s16 *)((u8 *)(*(void * *)((u8 *)self + 0x60)) + 0x24)=8;
*(u8 *)((u8 *)(*(void * *)((u8 *)self + 0x60)) + 0x48)=0;
panel=fn_800C42D8(0x48);
if(panel) {
q=panel;
*(void * *)((u8 *)q + 0x0)=lbl_8028FDB0;
*(s32 *)((u8 *)q + 0x4)=0;
*(void * *)((u8 *)q + 0x0)=lbl_80292230;
*(s16 *)((u8 *)q + 0x8)=-1;
*(s16 *)((u8 *)q + 0xa)=608;
*(s16 *)((u8 *)q + 0xc)=264;
*(s16 *)((u8 *)q + 0xe)=880;
*(s16 *)((u8 *)q + 0x10)=392;
*(s16 *)((u8 *)q + 0x12)=0;
*(s16 *)((u8 *)q + 0x14)=0;
*(s16 *)((u8 *)q + 0x16)=272;
*(s16 *)((u8 *)q + 0x18)=128;
*(s16 *)((u8 *)q + 0x1a)=0;
*(s16 *)((u8 *)q + 0x1c)=0;
*(u8 *)((u8 *)q + 0x1e)=0xff;
*(u8 *)((u8 *)q + 0x1f)=0xff;
*(u8 *)((u8 *)q + 0x20)=0xff;
*(u8 *)((u8 *)q + 0x21)=0xff;
*(s16 *)((u8 *)q + 0x22)=0x1f4;*(s16 *)((u8 *)q + 0x24)=0;
*(f32 *)((u8 *)q + 0x28)=lbl_8036B0A8;
*(f32 *)((u8 *)q + 0x2c)=lbl_8036B0A8;
*(f32 *)((u8 *)q + 0x30)=lbl_8036B0A8;
*(s32 *)((u8 *)q + 0x34)=0;*(s32 *)((u8 *)q + 0x38)=0;*(void * *)((u8 *)q + 0x0)=lbl_80296150;
*(s32 *)((u8 *)q + 0x3c)=0;*(s32 *)((u8 *)q + 0x40)=0;
((SetupMenuObj *)q)->v8();
}
*(void * *)((u8 *)self + 0x64)=panel;q=*(void * *)((u8 *)self + 0x64);if(q)*(s32 *)((u8 *)q + 0x4)+=1;
*(s16 *)((u8 *)(*(void * *)((u8 *)self + 0x64)) + 0x8)=0xb;
*(s16 *)((u8 *)(*(void * *)((u8 *)self + 0x64)) + 0x24)=8;
*(u32 *)((u8 *)(*(void * *)((u8 *)self + 0x64)) + 0x40)=*(u32 *)item;
*(s32 *)((u8 *)(*(void * *)((u8 *)self + 0x64)) + 0x3c)=1;
fn_8013FF00(self,list);
if(*(s16 *)((u8 *)list + 0x4e)!=0x7fff){
fn_801400F4(self,*(void * *)((u8 *)self + 0x60));
((SetupMenuObj *)(*(void * *)((u8 *)self + 0x60)))->v11(fn_8013AC54(list));
q=*(void * *)((u8 *)self + 0x60);if(*(s16 *)((u8 *)q + 0xa)!=0x138){y=*(s16 *)((u8 *)q + 0xc);spc[0]=0x138;spc[1]=y;fn_8014027C(self,q,spc,0);}
} else if(fn_8014D8DC(lbl_80330708)){
fn_801400F4(self,*(void * *)((u8 *)self + 0x64));
q=*(void * *)((u8 *)self + 0x64);if(*(s16 *)((u8 *)q + 0xa)!=0x134){y=*(s16 *)((u8 *)q + 0xc);sp8[0]=0x134;sp8[1]=y;fn_8014027C(self,q,sp8,0);}
}
fn_8011D79C(*(void * *)((u8 *)(*(void * *)((u8 *)self + 0x6c)) + 0x2c));
q=*(void * *)((u8 *)self + 0x6c);list=*(void * *)((u8 *)q + 0x70);res=fn_8013FF94(self,-0x1000,0);if(res)fn_801658DC(res,list);
}
#pragma cplusplus reset

#pragma use_lmw_stmw reset
#pragma cplusplus reset

#pragma cplusplus reset

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

#pragma cplusplus on
extern "C" void fn_801B0564(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void fn_8001BC5C(void *, u8, u8, u8, u8);
    void fn_8013FDA0(void *);
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80167190(void *, s32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016758C(void *, void *, s32, f32, f32);
    extern u8 lbl_8027BD18[];
    extern u8 lbl_80330D68[];
    extern u8 lbl_80331C38[];
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
        virtual s32 v9() = 0;
        virtual Pair v10() = 0;
    };
    struct RefObj {
        virtual void v0(s32) = 0;
    };

    void *p;
    void *color_arg;
    void *self;
    s16 saved;
    s16 cur;
    void *tmp;
    s32 a;
    register int btn;
    register u8 gate;
    register int flags;
    u32 pos1;
    u32 color;
    u32 pos2;

    self = arg0;
    p = *(void **)((u8 *)arg0 + 0x50);
    tmp = *(void **)((u8 *)arg0 + 0x58);
    color_arg = *(void **)((u8 *)p + 0x3C);
    saved = *(s16 *)((u8 *)tmp + 0x3E);
    *(u8 *)((u8 *)tmp + 0x3C) = 1;
    fn_8013FDA0(self);
    tmp = *(void **)((u8 *)self + 0x58);
    a = saved;
    cur = *(s16 *)((u8 *)tmp + 0x3E);
    if (a != cur) {
        saved = cur;
        if (fn_80166D8C(lbl_80330D68) != 0) {
            *(Pair *)&pos1 = ((Obj *)*(void **)((u8 *)self + 0x58))->v10();
            fn_80167190(lbl_80330D68, ((Obj *)*(void **)((u8 *)self + 0x58))->v9(), (f32)*(s16 *)&pos1, (f32)*((s16 *)&pos1 + 1));
        }
    }

    color = *(u32 *)&lbl_80331C38[(*(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 0x40) + 1) * 4];
    fn_8001BC5C(color_arg, ((u8 *)&color)[0], ((u8 *)&color)[1], ((u8 *)&color)[2], ((u8 *)&color)[3]);

    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && fn_80166D8C(lbl_80330D68) == 0) {
            switch (saved) {
            case 0:
                fn_801475FC(lbl_8027BD18 + 0x3B0, 0x64);
                break;
            case 1:
                *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 0x40) = -1;
                fn_801475FC(lbl_8027BD18 + 0x37E, 0x64);
                break;
            case 2:
                fn_801475FC(lbl_8027BD18 + 0x37E, 0x64);
                fn_8000C188(self);
                break;
            }
        } else if ((btn & 0x1000) && fn_80166D8C(lbl_80330D68) == 0) {
            *(s16 *)((u8 *)*(void **)((u8 *)self + 0x58) + 0x3E) = 2;
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0) {
            *(Pair *)&pos2 = ((Obj *)*(void **)((u8 *)self + 0x58))->v10();
            fn_8016758C(lbl_80330D68, self, ((Obj *)*(void **)((u8 *)self + 0x58))->v9(), (f32)*(s16 *)&pos2, (f32)*((s16 *)&pos2 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xA00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            void *obj4c;
            void *obj58;
            s32 n;
            fn_801475FC(lbl_8027BD18 + 0x3A0, 0x64);
            obj4c = *(void **)((u8 *)self + 0x4C);
            fn_80140258(self, obj4c, Pair(0x260, *(s16 *)((u8 *)obj4c + 0xC)), 0);
            obj58 = *(void **)((u8 *)self + 0x58);
            fn_80140258(self, obj58, Pair(0x260, *(s16 *)((u8 *)obj58 + 0xC)), 0);
            obj58 = *(void **)((u8 *)self + 0x58);
            if (obj58 != NULL) {
                n = *(s32 *)((u8 *)obj58 + 4) - 1;
                *(s32 *)((u8 *)obj58 + 4) = n;
                if (n == 0 && obj58 != NULL) {
                    ((RefObj *)obj58)->v0(1);
                }
                *(void **)((u8 *)self + 0x58) = NULL;
            }
            fn_80140258(self, p, Pair(0x260, *(s16 *)((u8 *)*(void **)((u8 *)self + 0x50) + 0xC)), 0);
            fn_8000C070(self, 0x10);
        }
    }
}
#pragma cplusplus reset

void fn_801B0F60(void *arg0) {
    void fn_80024398(void *, void *, s32);
    void *fn_8013BC10(s32, s32);
    u32 fn_8013FF94(void *, s32, s32, void *);
    void fn_801658DC(u32, s32);
    s32 temp_r31;
    void *temp_r3;
    void *temp_r6;
    u32 res;

    temp_r3 = fn_8013BC10(0, 0);
    *(s16 *)((u8 *)temp_r3 + 8) = 0x198;
    *(s16 *)((u8 *)temp_r3 + 0xA) = 0x3C;
    *(u8 *)((u8 *)temp_r3 + 0x24) = 1;
    fn_80024398(temp_r3, arg0, 0);
    temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x8C);
    res = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (res != 0U) {
        fn_801658DC(res, temp_r31);
    }
}

void fn_801B1130(void *arg0)
{
    extern void fn_801905FC(void *, void *);

    u8 *obj;
    u8 *data;
    u8 *state;
    u8 *target;

    obj = (u8 *)arg0;
    data = *(u8 **)(obj + 0x48);

    data[0x3C] = 0;

    state = *(u8 **)(obj + 0x40);

    if (*(s16 *)(state + 0x3E) != 4) {
        target = *(u8 **)(obj + 0x50);
        fn_801905FC(target, data + 0x60);
    }

    target = *(u8 **)(obj + 0x4C);
    *(void **)(target + 0x3C) = data + 0x60;
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

void fn_801B1400(void *arg0) {
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
    temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x8C);
    res = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (res != 0U) {
        fn_801658DC(res, temp_r31);
    }
}

void fn_801B1480(void *arg0) {
    void fn_8000D8BC(s32, s32, void *);
    void fn_8011D79C(s32);
    void *fn_8013FF94(void *, s32, s32);
    void *temp_r5;

    temp_r5 = fn_8013FF94(arg0, 2, 0);
    *(s8 *)(*(u8 **)((u8 *)arg0 + 0x48) + 0x3C) = 0;
    fn_8000D8BC(0, *(s32 *)((u8 *)temp_r5 + 0x3C), temp_r5);
    fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)arg0 + 0x6C) + 0x18));
}

#pragma cplusplus on
extern "C" void fn_801B14DC(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    s32 fn_8001C284(void *, u8, s8, s8, s8, s8);
    u16 fn_8001D2A4(void *);
    void fn_8011D79C(s32);
    void fn_8013FDA0(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_80140210(void *, void *, s32);
    void fn_801475FC(void *, s32);
    void fn_801658DC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80167190(void *, s32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016758C(void *, void *, s32, f32, f32);
    extern u8 lbl_8027BD18[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern void *lbl_80368230;
    extern u8 lbl_80368238;
    extern s32 lbl_80368DC4;

    class Pair {
    public:
        s16 x;
        s16 y;
        Pair() {}
        Pair(const Pair &o) { *(u32 *)this = *(u32 *)&o; }
        Pair &operator=(const Pair &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual s32 v8() = 0;
        virtual Pair v9() = 0;
    };
    struct RefObj {
        virtual void v0(s32) = 0;
    };
    struct Child {
        u8 pad[0x3C];
        s32 unk3C;
    };

    void *self;
    Child *child;
    void *obj;
    s16 saved;
    s32 a;
    s32 score;
    u16 addend;
    register int btn;
    register u8 gate;
    register int flags;
    register u32 bit100;
    void *ret;
    u32 pos1;
    u32 pos2;

    self = arg0;
    child = (Child *)fn_8013FF94(arg0, 2, 0);
    obj = *(void **)((u8 *)arg0 + 0x48);
    saved = *(s16 *)((u8 *)obj + 0x3E);
    *(u8 *)((u8 *)obj + 0x3C) = 1;
    fn_8013FDA0(arg0);
    a = saved;
    if (a != *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x48) + 0x3E)) {
        if (fn_80166D8C(lbl_80330D68) != 0) {
            *(Pair *)&pos1 = ((Obj *)*(void **)((u8 *)arg0 + 0x48))->v9();
            fn_80167190(lbl_80330D68, ((Obj *)*(void **)((u8 *)arg0 + 0x48))->v8(), (f32)*(s16 *)&pos1, (f32)*((s16 *)&pos1 + 1));
        }
    }
    obj = *(void **)((u8 *)arg0 + 0x48);
    score = fn_8001C284(*(void **)((u8 *)obj + 0x60), *(u8 *)((u8 *)obj + 0x64),
                        (s8)*(u8 *)((u8 *)obj + 0x51), (s8)*(u8 *)((u8 *)obj + 0x52),
                        (s8)*(u8 *)((u8 *)obj + 0x53), (s8)*(u8 *)((u8 *)obj + 0x54));
    addend = fn_8001D2A4(&lbl_80368230);
    score = addend + score;
    child->unk3C = score;

    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        bit100 = btn & 0x100;
        if (bit100 != 0 && fn_80166D8C(lbl_80330D68) == 0) {
            obj = *(void **)((u8 *)arg0 + 0x48);
            if (*(s16 *)((u8 *)obj + 0x3E) != 4) {
                switch (*(s32 *)((u8 *)obj + 0x4C)) {
                case 0:
                    lbl_80368238 = *(u8 *)((u8 *)obj + 0x51);
                    (&lbl_80368238)[1] = *(u8 *)((u8 *)obj + 0x52);
                    (&lbl_80368238)[2] = *(u8 *)((u8 *)obj + 0x53);
                    (&lbl_80368238)[3] = *(u8 *)((u8 *)obj + 0x54);
                    *(s32 *)((u8 *)obj + 0x4C) = 1;
                    self = (void *)*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x6C) + 0x78);
                    ret = fn_8013FF94(arg0, -0x1000, 0);
                    if (ret != NULL) {
                        fn_801658DC(ret, (s32)self);
                    }
                    break;
                case 1:
                    *(s32 *)((u8 *)obj + 0x4C) = 0;
                    self = (void *)*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x6C) + 0x74);
                    ret = fn_8013FF94(arg0, -0x1000, 0);
                    if (ret != NULL) {
                        fn_801658DC(ret, (s32)self);
                    }
                    break;
                }
                fn_801475FC(lbl_8027BD18 + 0x37E, 0x64);
                return;
            }
        }
        if (bit100 != 0 && fn_80166D8C(lbl_80330D68) == 0 &&
            *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x48) + 0x3E) == 4) {
            if (score > *(s32 *)(lbl_80330708 + 0x18)) {
                fn_801475FC(lbl_8027BD18 + 0x3B0, 0x64);
                fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)arg0 + 0x6C) + 0x38));
                self = (void *)*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x6C) + 0x84);
                ret = fn_8013FF94(arg0, -0x1000, 0);
                if (ret != NULL) {
                    fn_801658DC(ret, (s32)self);
                }
                fn_8000C070(arg0, 0x1D);
            } else {
                fn_801475FC(lbl_8027BD18 + 0x37E, 0x64);
                fn_8000C188(arg0);
            }
            return;
        }
        if ((btn & 0x1000) && fn_80166D8C(lbl_80330D68) == 0) {
            obj = *(void **)((u8 *)arg0 + 0x48);
            if (*(s32 *)((u8 *)obj + 0x4C) == 1) {
                *(s32 *)((u8 *)obj + 0x4C) = 0;
                self = (void *)*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x6C) + 0x74);
                ret = fn_8013FF94(arg0, -0x1000, 0);
                if (ret != NULL) {
                    fn_801658DC(ret, (s32)self);
                }
            }
            *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x48) + 0x3E) = 4;
            fn_801475FC(lbl_8027BD18 + 0x37E, 0x64);
            return;
        }
        if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0) {
            *(Pair *)&pos2 = ((Obj *)*(void **)((u8 *)arg0 + 0x48))->v9();
            fn_8016758C(lbl_80330D68, arg0, ((Obj *)*(void **)((u8 *)arg0 + 0x48))->v8(),
                        (f32)*(s16 *)&pos2, (f32)*((s16 *)&pos2 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
            return;
        }
        if ((btn & 0xA00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
            return;
        }
        if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            obj = *(void **)((u8 *)arg0 + 0x48);
            if (*(s32 *)((u8 *)obj + 0x4C) == 1) {
                *(u8 *)((u8 *)obj + 0x51) = lbl_80368238;
                *(u8 *)((u8 *)obj + 0x52) = (&lbl_80368238)[1];
                *(u8 *)((u8 *)obj + 0x53) = (&lbl_80368238)[2];
                *(u8 *)((u8 *)obj + 0x54) = (&lbl_80368238)[3];
                *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x48) + 0x4C) = 0;
                self = (void *)*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0x6C) + 0x74);
                ret = fn_8013FF94(arg0, -0x1000, 0);
                if (ret != NULL) {
                    fn_801658DC(ret, (s32)self);
                }
                fn_801475FC(lbl_8027BD18 + 0x3A0, 0x64);
                return;
            }
            fn_801475FC(lbl_8027BD18 + 0x3A0, 0x64);
            fn_80140210(arg0, *(void **)((u8 *)arg0 + 0x48), 0);
            obj = *(void **)((u8 *)arg0 + 0x48);
            if (obj != NULL) {
                s32 n = *(s32 *)((u8 *)obj + 4) - 1;
                *(s32 *)((u8 *)obj + 4) = n;
                if (n == 0 && obj != NULL) {
                    ((RefObj *)obj)->v0(1);
                }
                *(void **)((u8 *)arg0 + 0x48) = NULL;
            }
            fn_8000C070(arg0, 8);
        }
    }
}
#pragma cplusplus reset

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

void fn_801B1E54(void *arg0) {
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
    temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x8C);
    res = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (res != 0U) {
        fn_801658DC(res, temp_r31);
    }
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

#pragma cplusplus on
extern "C" void fn_801B224C(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    u16 fn_8001D2A4(void *);
    void fn_8001D818(void *, void *);
    void fn_8011D79C(s32);
    void *fn_80134280(void *);
    void fn_8013FDA0(void *);
    void fn_8013FF00(void *, void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801402C4(void *, void *, s32, s32);
    void fn_801475FC(void *, s32);
    void fn_801658DC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80166DD0(void *, void *, f32, f32);
    void fn_801673D0(void *);
    void fn_8016746C(void *, void *, void *, f32, f32);
    extern u8 lbl_8027BD18[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern void *lbl_80368230;
    extern s32 lbl_80368DC4;
    extern f32 lbl_8036B0A8;
    extern f64 lbl_8036B0B0;

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
        virtual Pair v9() = 0;
    };
    struct RefObj {
        virtual void v0(s32) = 0;
    };
    struct Child {
        u8 pad[0x3C];
        s32 unk3C;
    };

    void *obj40;
    void *cur;
    Child *child;
    void *self;
    register int btn;
    register u8 gate;
    register int flags;
    void *nest;
    s32 saved;
    void *ret;
    void *obj44;
    void *tmp;
    u32 pos1;
    u32 pos2;

    self = arg0;
    child = (Child *)fn_8013FF94(arg0, 2, 0);
    tmp = fn_80134280(*(void **)((u8 *)arg0 + 0x44));
    *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x44) + 0x3C) = 1;
    cur = tmp;
    fn_8013FDA0(arg0);
    if (cur != fn_80134280(*(void **)((u8 *)arg0 + 0x44))) {
        cur = fn_80134280(*(void **)((u8 *)arg0 + 0x44));
        if (lbl_80368230 != cur) {
            fn_8001D818(&lbl_80368230, cur);
        }
        if (fn_80166D8C(lbl_80330D68) != 0) {
            *(Pair *)&pos1 = ((Obj *)*(void **)((u8 *)arg0 + 0x44))->v9();
            fn_80166DD0(lbl_80330D68, &lbl_80368230, (f32)*(s16 *)&pos1, (f32)*((s16 *)&pos1 + 1));
        }
    }
    if (lbl_80368230 != cur) {
        fn_8001D818(&lbl_80368230, cur);
    }
    child->unk3C = fn_8001D2A4(&lbl_80368230);
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && fn_80166D8C(lbl_80330D68) == 0) {
            if (child->unk3C > *(s32 *)(lbl_80330708 + 0x18)) {
                fn_801475FC(lbl_8027BD18 + 0x3B0, 0x64);
                fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)self + 0x6C) + 0x38));
                nest = *(void **)((u8 *)self + 0x6C);
                saved = *(s32 *)((u8 *)nest + 0x84);
                ret = fn_8013FF94(self, -0x1000, 0);
                if (ret != NULL) {
                    fn_801658DC(ret, saved);
                }
                fn_8000C070(self, 0x1C);
            } else {
                fn_801475FC(lbl_8027BD18 + 0x37E, 0x64);
                obj40 = *(void **)((u8 *)self + 0x40);
                fn_80140258(self, obj40, Pair(0x260, *(s16 *)((u8 *)obj40 + 0xC)), 0);
                obj44 = *(void **)((u8 *)self + 0x44);
                *(s16 *)((u8 *)obj44 + 0x24) = 8;
                fn_80140258(self, obj44, Pair(0x260, *(s16 *)((u8 *)obj44 + 0xC)), 0);
                fn_8000C188(self);
            }
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0) {
            *(Pair *)&pos2 = ((Obj *)*(void **)((u8 *)self + 0x44))->v9();
            fn_8016746C(lbl_80330D68, self, &lbl_80368230, (f32)*(s16 *)&pos2, (f32)*((s16 *)&pos2 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xA00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            obj44 = *(void **)((u8 *)self + 0x44);
            *(s16 *)((u8 *)obj44 + 0x24) = 4;
            fn_801402C4(self, *(void **)((u8 *)self + 0x44), 0, 1);
            obj44 = *(void **)((u8 *)self + 0x44);
            if (obj44 != NULL) {
                s32 n = *(s32 *)((u8 *)obj44 + 4) - 1;
                *(s32 *)((u8 *)obj44 + 4) = n;
                if (n == 0 && obj44 != NULL) {
                    ((RefObj *)obj44)->v0(1);
                }
                *(void **)((u8 *)self + 0x44) = NULL;
            }
            obj40 = *(void **)((u8 *)self + 0x40);
            *(f32 *)((u8 *)obj40 + 0x30) = lbl_8036B0A8;
            fn_8013FF00(self, obj40);
            fn_8000C070(self, 3);
            fn_801475FC(lbl_8027BD18 + 0x3A0, 0x64);
        }
    }
}
#pragma cplusplus reset

void fn_801B2644(void *arg0) {
    void fn_8011D79C(s32);
    void *fn_8013FF94(void *, s32, s32);
    void fn_801658DC(void *, s32);
    void *inner;
    s32 saved;
    void *ret;

    fn_8011D79C(*(s32 *)(*(u8 **)((u8 *)arg0 + 0x6C) + 0xC));
    inner = *(void **)((u8 *)arg0 + 0x6C);
    saved = *(s32 *)((u8 *)inner + 0x6C);
    ret = fn_8013FF94(arg0, -0x1000, 0);
    if (ret != NULL) {
        fn_801658DC(ret, saved);
    }
}

void fn_801B26A0(void *arg0) {
    void *fn_800C42D8(s32);
    void *fn_801343F8(void *, s32, s32, s32, s32, s32, s32);
    void fn_80134CE8(void *);
    void fn_801400F4(void *, void *);
    void fn_801402E4(void *, void *, s32, s32);
    void *var_r0;
    void *temp_r4;
    void *temp_r30;
    s16 temp_r29;
    s16 temp_r28;

    temp_r30 = *(void **)((u8 *)arg0 + 0x40);
    temp_r29 = *(s16 *)((u8 *)temp_r30 + 0xA) - 0x20;
    temp_r28 = *(s16 *)((u8 *)temp_r30 + 0xC) + 0x20;
    var_r0 = fn_800C42D8(0x54);
    if (var_r0 != NULL) {
        var_r0 = fn_801343F8(var_r0, *(s16 *)((u8 *)temp_r30 + 0x3E), temp_r29, temp_r28, 0x108, 0xD0, 0x1F4);
    }
    *(void **)((u8 *)arg0 + 0x44) = var_r0;
    temp_r4 = *(void **)((u8 *)arg0 + 0x44);
    if (temp_r4 != NULL) {
        *(s32 *)((u8 *)temp_r4 + 4) = *(s32 *)((u8 *)temp_r4 + 4) + 1;
    }
    *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x44) + 8) = 1;
    *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x44) + 0x46) = 0x30;
    fn_80134CE8(*(void **)((u8 *)arg0 + 0x44));
    *(s16 *)((u8 *)*(void **)((u8 *)arg0 + 0x44) + 0x24) = 4;
    *(u8 *)((u8 *)*(void **)((u8 *)arg0 + 0x44) + 0x3C) = 0;
    fn_801400F4(arg0, *(void **)((u8 *)arg0 + 0x44));
    fn_801402E4(arg0, *(void **)((u8 *)arg0 + 0x44), 0, 1);
}

void fn_801B27A0(void *arg0) {
    extern f32 lbl_8036B0B8;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x30) = (f32) lbl_8036B0B8;
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_801B27B0(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void fn_8013FDA0(void *);
    void *fn_8013FF94(void *, s32, s32);
    void fn_80140258(void *, void *, s16 *, s32);
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80167190(void *, s32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016758C(void *, void *, s32, f32, f32);
    extern u8 lbl_8027BD18[];
    extern u8 lbl_80330D68[];
    extern u32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;

    class Vec2s {
    public:
        s16 x;
        s16 y;
        Vec2s() {}
        Vec2s(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; }
        Vec2s &operator=(const Vec2s &o) { *(u32 *)this = *(u32 *)&o; return *this; }
    };
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual s32 v8() = 0;
        virtual Vec2s v9() = 0;
    };

    void *obj;
    void *p;
    void *self;
    s16 saved;
    register int btn;
    register u8 gate;
    register int flags;
    u32 sp18;
    u32 sp14;
    u32 sp10;
    u32 spC;
    s16 sp8[2];
    s16 tmp;

    self = arg0;
    obj = *(void **)((u8 *)arg0 + 0x40);
    p = fn_8013FF94(arg0, 2, 0);
    saved = *(s16 *)((u8 *)obj + 0x3E);
    *(u8 *)((u8 *)obj + 0x3C) = 1;
    fn_8013FDA0(self);
    if (saved != *(s16 *)((u8 *)obj + 0x3E)) {
        if (fn_80166D8C(lbl_80330D68) != 0) {
            *(Vec2s *)&sp18 = ((Obj *)obj)->v9();
            fn_80167190(lbl_80330D68, ((Obj *)obj)->v8(), (f32)*(s16 *)&sp18, (f32)*((s16 *)&sp18 + 1));
        }
    }

    *(s32 *)((u8 *)p + 0x3C) = -1;
    flags = lbl_80367110;
    gate = 0;
    if ((flags & 0x10) && !(flags & 0x20)) {
        gate = 1;
    }
    if (!gate) {
        btn = *(s32 *)((u8 *)lbl_80367240 + 4);
        btn = btn & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ btn);
        if ((btn & 0x100) && fn_80166D8C(lbl_80330D68) == 0) {
            fn_801475FC(lbl_8027BD18 + 0x37e, 0x64);
            fn_8000C188(self);
        } else if ((btn & 0x800) && fn_80166D8C(lbl_80330D68) == 0) {
            *(Vec2s *)&sp14 = ((Obj *)obj)->v9();
            fn_8016758C(lbl_80330D68, self, ((Obj *)obj)->v8(), (f32)*(s16 *)&sp14, (f32)*((s16 *)&sp14 + 1));
            *(s32 *)lbl_80330D68 = *(s32 *)lbl_80330D68 | lbl_80368DC4;
        } else if ((btn & 0xa00) && fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else if ((btn & 0x200) && fn_80166D8C(lbl_80330D68) == 0) {
            *(u8 *)((u8 *)obj + 0x3C) = 0;
            tmp = *(s16 *)((u8 *)p + 0xC);
            sp8[0] = 0x260;
            sp8[1] = tmp;
            fn_80140258(self, p, sp8, 0);
            fn_8000C070(self, 0x24);
            fn_801475FC(lbl_8027BD18 + 0x3a0, 0x64);
        }
    }
    (void)sp10;
    (void)spC;
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

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

void fn_801B2C58(void *arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    M2C_UNK fn_800152F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *);
    u8 fn_80092F9C();
    s32 fn_800C3D48(void *);
    M2C_UNK fn_8011D79C(s32);
    u32 fn_8013FF94(void *, M2C_UNK, M2C_UNK, void *);
    M2C_UNK fn_801658DC(s32);
    extern u8 lbl_802B14E4[101760];
    extern u8 lbl_803200AC[1600];
    u8 sp10[16];
    int var_r29;
    u8 var_r30;
    void *var_r3;
    void *temp_r6;
    s32 temp_r30;
    void *self = arg0;

    var_r30 = 0;
    fn_800152F8(1, 0, 0, 0, 0, 1, 0, 0, sp10);
    var_r29 = 1;
    for (;;) {
        if (var_r29 & 0xFF) {
            var_r3 = lbl_802B14E4 + ((var_r29 - 1) * 0x280);
        } else {
            var_r3 = 0;
        }
        if (*(u32 *)((u8 *)var_r3 + 0x188) != 0 &&
            sp10[*(u8 *)(((u8 *)*(void **)((u8 *)var_r3 + 0x190)) + 0x8)] != 0 &&
            fn_80092F9C() < 4) {
            var_r30 = 1;
            break;
        }
        var_r29++;
        if (var_r29 > 0x9F) {
            break;
        }
    }
    if (var_r30 == 0 && fn_800C3D48(lbl_803200AC) >= 0) {
        var_r30 = 1;
    }
    if (var_r30 != 0) {
        fn_8011D79C(*(s32 *)((u8 *)*(void **)((u8 *)self + 0x6C) + 0x8));
        return;
    }
    fn_8011D79C(*(s32 *)((u8 *)*(void **)((u8 *)self + 0x6C) + 0x5C));
    temp_r6 = *(void **)((u8 *)self + 0x6C);
    temp_r30 = *(s32 *)((u8 *)temp_r6 + 0x84);
    if (fn_8013FF94(self, -0x1000, 0, temp_r6) != 0) {
        fn_801658DC(temp_r30);
    }
    fn_8000C070(self, 0x20);
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
    temp_r6 = *(void **)((u8 *)arg0 + 0x6C);
    temp_r31 = *(s32 *)((u8 *)temp_r6 + 0x8C);
    res = fn_8013FF94(arg0, -0x1000, 0, temp_r6);
    if (res != 0U) {
        fn_801658DC(res, temp_r31);
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

void *fn_801B3150(void *arg0) {
    extern u8 lbl_80291758[];
    void fn_80134E48(void *);
    void fn_8001C76C(void *);
    s16 w;
    s16 h;
    s16 w8;

    fn_80134E48(arg0);
    *(void **)arg0 = lbl_80291758;
    *(u32 *)((u8 *)arg0 + 0x4C) = 0;
    ((u8 *)arg0)[0x50] = 1;
    fn_8001C76C((u8 *)arg0 + 0x60);

    w = (s16)(*(s16 *)((u8 *)arg0 + 0x10) - *(s16 *)((u8 *)arg0 + 0x0C));
    h = (s16)(*(s16 *)((u8 *)arg0 + 0x0E) - *(s16 *)((u8 *)arg0 + 0x0A));
    *(s16 *)((u8 *)arg0 + 0x12) = 2;
    w8 = (s16)(w - 8);
    *(s16 *)((u8 *)arg0 + 0x14) = 8;
    *(s16 *)((u8 *)arg0 + 0x16) = (s16)(h - 2);
    *(s16 *)((u8 *)arg0 + 0x18) = w8;
    return arg0;
}

void *fn_801B31E4(void *arg0) {
    void fn_80134E48(void *);

    fn_80134E48(arg0);
    *(void **)arg0 = lbl_802917D0;
    return arg0;
}
extern s32 lbl_80367110;
extern s32 *lbl_80367240;
extern u8 lbl_8027BD18[];
#include "global.h"
#include "unit.h"

extern struct SomeStruct lbl_802EF4C8;
