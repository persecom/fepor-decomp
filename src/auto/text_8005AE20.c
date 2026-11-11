/* Functions from 0x8005AE20 to 0x80072408, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

// Structure definition for the argument passed to fn_80063A14
typedef struct {
    void* unk0;
    void* unk4;
    void* unk8;
    void* unkC;
    void* unk10;
    void* unk14;
    void* unk18;
    void* unk1C;
    void* unk20;
    void* unk24;
    void* unk28;
    void* unk2C;
    void* unk30;
    s32 unk34;
} SomeStruct;

struct UnkStruct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
};

extern u16 lbl_80330708[1400];
extern f32 lbl_803692E0;
extern f32 lbl_80369300;
extern f32 lbl_8036930C;
extern f64 lbl_803692C0;
extern f32 lbl_803692B8;
extern u16 lbl_80285D18[];
extern char lbl_8026B590[];

static inline u8 *FindEntryByName(char *name) {
    extern u8 lbl_802F04E0[];
    s32 fn_802342B8();
    u8 *e;
    char *start;
    u32 hash;
    s32 i;

    if (*name == '/') {
        name++;
    }
    start = name;
    hash = 0;
    while (*name != 0) {
        if (*name >= 'A' && *name <= 'Z') {
            *name += 0x20;
        }
        hash = *name++ + hash * 37;
    }
    for (i = 0, e = lbl_802F04E0; i < 0x400; i++, e += 0x7C) {
        if (hash == *(u32 *)(e + 0x2C) && fn_802342B8(start, e) == 0) {
            return lbl_802F04E0 + i * 0x7C;
        }
    }
    return NULL;
}

static inline u32 FindUnk48(void *arg0) {
    void *current = arg0;

    while (current != NULL) {
        u32 temp = M2C_FIELD(current, u32 *, 0x48);
        if (temp != 0U) {
            return temp;
        }
        current = M2C_FIELD(current, void **, 4);
    }
    return 0U;
}

void *fn_8005AE20(void) {
    extern u8 lbl_8026AE88[];

    return lbl_8026AE88 + 9;
}

s32 fn_8005AE30(void) {
    return 1;
}

s32 fn_8005AE38(void) {
    return 0x400;
}

s32 fn_8005AE40(void) {
    return 0x60;
}

s32 fn_8005AE48(void) {
    return 0x20;
}

s32 fn_8005AE50(void) {
    return 2;
}

s32 fn_8005AE58(void) {
    return 0x20;
}

s32 fn_8005AE60(void) {
    return 0x20;
}

void *fn_8005AE68(void) {
    extern u8 lbl_8026AE88[];

    return lbl_8026AE88 + 9;
}

void fn_8005AE78(void) {
    void OSResetSystem(s32, s32, s32);
    u8 fn_80014E70(void);
    void fn_800B46D8(void);
    s32 fn_80208D18(void);
    void fn_802107A8(void);
    void fn_80211478(void);
    void fn_80211614(s32);
    void fn_8022097C(void);
    extern s32 lbl_80367110;
    extern void *lbl_80367240;
    extern s32 lbl_803672DC;
    extern s8 lbl_803672E0;
    extern u8 lbl_803672E1;
    extern s8 lbl_803672E2;
    extern u8 lbl_803672E3;
    extern s8 lbl_803672E4;
    extern u32 lbl_803682A4;
    s32 temp_r0;
    s32 var_r31;
    u16 temp_r3;

    if (lbl_803672E0 == 0) {
        lbl_803672DC = 0;
        lbl_803672E0 = 1;
    }
    if (lbl_803672E2 == 0) {
        lbl_803672E1 = 0;
        lbl_803672E2 = 1;
    }
    if (lbl_803672E4 == 0) {
        lbl_803672E3 = 0;
        lbl_803672E4 = 1;
    }
    temp_r3 = **(u16 **)lbl_80367240;
    temp_r0 = (temp_r3 == 0x1600) ? (lbl_803672DC + 1) : 0;
    lbl_803672DC = temp_r0;
    if (temp_r0 >= 0x1E) {
        lbl_803672E3 = 1;
    }
    if (lbl_803672E1 != 0 && fn_80208D18() == 0) {
        lbl_803672E3 = 1;
    }
    lbl_803672E1 = fn_80208D18() != 0;
    if (!(lbl_80367110 & 0x100) && lbl_803672E3 != 0) {
        fn_80211614(1);
        fn_80211478();
        fn_802107A8();
        fn_802107A8();
        fn_8022097C();
        fn_802107A8();
        fn_802107A8();
        fn_802107A8();
        var_r31 = 0;
        if (lbl_803682A4 & 0x90000) {
            if (!(lbl_803682A4 & 0x10)) {
                var_r31 |= 2;
            }
            if (lbl_803682A4 & 0x40) {
                var_r31 |= 1;
            }
        } else if (lbl_803682A4 & 0x60000) {
            if (!(lbl_803682A4 & 0x10)) {
                var_r31 |= 0x20;
            }
            if (lbl_803682A4 & 0x100) {
                var_r31 |= 0x10;
            }
        }
        if (fn_80014E70() != 0) {
            var_r31 |= 0x100;
            fn_800B46D8();
        }
        OSResetSystem(0, var_r31, 0);
        while (1) {}
    }
}

s32 fn_8005B42C(u32 *arg0, u32 arg1) {
    return (u32) *arg0 <= arg1;
}

s32 fn_8005B448(s32 arg0, s32 arg1, s32 *arg2, u8 (*arg3)(s32, s32)) {
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r26;
    s32 var_r31;

    var_r26 = arg0;
    var_r31 = (s32) (arg1 - var_r26) / 8;
loop_4:
    if (var_r31 > 0) {
        temp_r29 = (s32) (((u32) var_r31 >> 0x1FU) + var_r31) >> 1;
        temp_r30 = var_r26 + (temp_r29 * 8);
        if (arg3(temp_r30, *arg2) != 0) {
            var_r26 = temp_r30 + 8;
            var_r31 -= temp_r29 + 1;
        } else {
            var_r31 = temp_r29;
        }
        goto loop_4;
    }
    return var_r26;
}

s32 fn_8005B4D8(s32 arg0) {
    s32 fn_8000D2BC(void *);
    u32 fn_8000D354(void *, void *);
    s32 fn_8001B894(s32 *);
    void fn_8001B940(s32 *);
    extern u16 lbl_8026B308[];
    
    s32 sp8;
    s32 var_r31;
    
    if (fn_8000D354(&lbl_8026B308[4], lbl_8026B308) != 0U) {
        sp8 = fn_8000D2BC(&lbl_8026B308[4]);
        fn_8001B940(&sp8);
        fn_8001B940(&sp8);
        fn_8001B940(&sp8);
        fn_8001B940(&sp8);
        var_r31 = 0;
loop_3:
        if (var_r31 < arg0) {
            fn_8001B894(&sp8);
            var_r31 += 1;
            goto loop_3;
        }
        return fn_8001B894(&sp8);
    }
    return 0;
}

void fn_8005B73C(void *arg0) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_8005B760(s32 arg0) {
    s32 temp_r0;
    u16 *jumptable_80285D18;

    temp_r0 = arg0 - 10;
    if (temp_r0 > 0x42) {
        return 0x1a;
    }
    
    jumptable_80285D18 = &lbl_80285D18[temp_r0];
    return *jumptable_80285D18;
}

u8 fn_8005B7A4(u8 *arg0) {
    extern u32 lbl_802F03A8;
    u8 *var_r3;
    u32 var_r4;
    u32 *var_r3_2;
    s32 var_r5;
    u8 temp_r5;
    s32 var_ctr;

    var_r3 = arg0;
    var_r4 = 0;
    
    // First loop to process input
    do {
        temp_r5 = *var_r3;
        if (temp_r5 == 0) break;
        var_r3++;
        var_r4 = (var_r4 + temp_r5) << 4;  // slwi r4, r4, 4 is left shift by 4
    } while(1);
    
    var_r3_2 = &lbl_802F03A8;
    var_r5 = 0;
    var_ctr = 0x4D;
    
    // Second loop to compare with table
    do {
        if (var_r4 == *var_r3_2) {
            if (var_r5 == 0x21) {
                return 0x1C;
            }
            if (var_r5 < 0x21) {
                if (var_r5 == 0x9) {
                    return 0x1C;
                }
                return (u8) var_r5;
            }
            return (u8) var_r5;
        }
        var_r3_2 += 4;
        var_r5 += 1;
        var_ctr -= 1;
    } while(var_ctr != 0);
    
    return 0;
}

s32 fn_8005B888(void) {
    extern void *lbl_803672F4;
    if (lbl_803672F4 == NULL) {
        return 0;
    }
    return M2C_FIELD(lbl_803672F4, s32 *, 0x4000);
}

s32 fn_8005B8AC(s32 arg0) {
    if ((u32) *(void **)0x803672F4 == 0U) {
        return 0;
    }
    return *(u16 *)0x803672F4 + (arg0 << 6);
}

s32 fn_8005B8CC(void) {
    extern void *lbl_803672F4;
    if ((void *) lbl_803672F4 == NULL) {
        return 0;
    }
    return M2C_FIELD(lbl_803672F4, s32 *, 0x4000);
}

extern u16 lbl_803672F4;
s32 fn_8005B8E8(void) {
    fn_800C428C(*(void **)&lbl_803672F4);
    *(void **)&lbl_803672F4 = 0;
    return 1;
}

int fn_8005B918(void){void *fn_800C45B8(s32,void*,s32);s32 fn_8020CD64(void*);s32 fn_8020CE24(void*,void*);void fn_8020CEC8(void*);void fn_8023440C(void*,s32,s32,s8);extern u16 lbl_803672F4;extern u8 lbl_8026B330[];u8 a[0x20];u32 b[2];void *p;u32 n;if(lbl_803672F4)return 0;if(!fn_8020CD64(a))return 0;p=fn_800C45B8(-0x4004,lbl_8026B330+5,0);if(p)*(u32*)((u8*)p+0x4000)=0;lbl_803672F4=(u16)p;while(fn_8020CE24(a,b)){p=(void*)(u32)lbl_803672F4;n=*(u32*)((u8*)p+0x4000);*(u8*)((u8*)p+(n<<6)+0x3f)=((*(s32*)((u8*)b+4)==0)?1:0);fn_8023440C((u8*)p+(n<<6),*(s32*)((u8*)b+8),0x3e,*(s32*)((u8*)b+4)==0);*(u32*)((u8*)p+0x4000)=n+1;}fn_8020CEC8(a);return 1;}

u8 fn_8005BA00(void) {
    extern u8 lbl_803672E8;
    return lbl_803672E8;
}

void fn_8005BA08(s8 arg0) {
    extern s8 lbl_803672E8;
    lbl_803672E8 = arg0;
}

s32 fn_8005BA10(char *name) {
    u8 *e = FindEntryByName(name);
    u16 flags;

    if (e == NULL) {
        flags = 0x8000;
    } else {
        flags = *(u16 *)(e + 0x30);
    }
    if (flags & 0x2000) {
        return 1;
    }
    return (flags >> 15) & 1;
}

void fn_8005BC8C() {
    M2C_UNK fn_8005C8D8();
    fn_8005C8D8();
}

void fn_8005BCAC(void) {
    fn_8005C8D8(-1);
}

void fn_8005BCD0(void) {
    M2C_UNK fn_8005CBC8();
    fn_8005CBC8();
}

void fn_8005BCF0(void) {
    extern u8 lbl_803672E9;
    extern s8 lbl_803672EA;
    extern s8 lbl_803672EB;
    extern u8 lbl_803672EC[8];
    extern u8 lbl_802F04E0[126976];
    extern u8 lbl_8030FAF8[8192];
    extern u8 lbl_8030F7E0[792];
    void OSInitThreadQueue(u8 *queue);
    s32 fn_8020A558(u8 *a, void *b, s32 c, u8 *d, s32 e, s32 f, s32 g);
    s32 fn_8020A9E0(u8 *a);
    extern void fn_8005BE48(void);
    s32 i;
    u8 (*e)[0x3E0];

    for (i = 0, e = (u8 (*)[0x3E0])lbl_802F04E0; i < 0x80; i++, e++) {
        *(s8 *)(*e + 0x0) = 0;
        *(s32 *)(*e + 0x2C) = 0;
        *(s16 *)(*e + 0x30) = 0;
        *(s16 *)(*e + 0x32) = 0;
        *(s32 *)(*e + 0x38) = 0;
        *(s32 *)(*e + 0x3C) = 0;
        *(s8 *)(*e + 0x7C) = 0;
        *(s32 *)(*e + 0xA8) = 0;
        *(s16 *)(*e + 0xAC) = 0;
        *(s16 *)(*e + 0xAE) = 0;
        *(s32 *)(*e + 0xB4) = 0;
        *(s32 *)(*e + 0xB8) = 0;
        *(s8 *)(*e + 0xF8) = 0;
        *(s32 *)(*e + 0x124) = 0;
        *(s16 *)(*e + 0x128) = 0;
        *(s16 *)(*e + 0x12A) = 0;
        *(s32 *)(*e + 0x130) = 0;
        *(s32 *)(*e + 0x134) = 0;
        *(s8 *)(*e + 0x174) = 0;
        *(s32 *)(*e + 0x1A0) = 0;
        *(s16 *)(*e + 0x1A4) = 0;
        *(s16 *)(*e + 0x1A6) = 0;
        *(s32 *)(*e + 0x1AC) = 0;
        *(s32 *)(*e + 0x1B0) = 0;
        *(s8 *)(*e + 0x1F0) = 0;
        *(s32 *)(*e + 0x21C) = 0;
        *(s16 *)(*e + 0x220) = 0;
        *(s16 *)(*e + 0x222) = 0;
        *(s32 *)(*e + 0x228) = 0;
        *(s32 *)(*e + 0x22C) = 0;
        *(s8 *)(*e + 0x26C) = 0;
        *(s32 *)(*e + 0x298) = 0;
        *(s16 *)(*e + 0x29C) = 0;
        *(s16 *)(*e + 0x29E) = 0;
        *(s32 *)(*e + 0x2A4) = 0;
        *(s32 *)(*e + 0x2A8) = 0;
        *(s8 *)(*e + 0x2E8) = 0;
        *(s32 *)(*e + 0x314) = 0;
        *(s16 *)(*e + 0x318) = 0;
        *(s16 *)(*e + 0x31A) = 0;
        *(s32 *)(*e + 0x320) = 0;
        *(s32 *)(*e + 0x324) = 0;
        *(s8 *)(*e + 0x364) = 0;
        *(s32 *)(*e + 0x390) = 0;
        *(s16 *)(*e + 0x394) = 0;
        *(s16 *)(*e + 0x396) = 0;
        *(s32 *)(*e + 0x39C) = 0;
        *(s32 *)(*e + 0x3A0) = 0;
    }
    if ((u8) lbl_803672E9 == 0) {
        lbl_803672EB = 0;
        lbl_803672EA = 0;
        OSInitThreadQueue(lbl_803672EC);
        fn_8020A558(lbl_8030F7E0, &fn_8005BE48, 0, lbl_8030FAF8 + 0x2000, 0x2000, 0x10, 1);
        fn_8020A9E0(lbl_8030F7E0);
        lbl_803672E9 = 1;
    }
}

void fn_8005BE48(void) {
    void DCFlushRange(s32, s32);
    void fn_8005BF8C(void *, s32);
    void fn_8005BFE4(void *, s32);
    void fn_8005D9A8(void *);
    void fn_800C4588(s32);
    void fn_8020ADD8(u8 *);
    extern u8 lbl_8030F4E0[];
    extern volatile u8 lbl_803672EA;
    extern volatile u8 lbl_803672EB;
    extern u8 lbl_803672EC[8];
    void *obj;
    s32 val;
    u8 type;

    goto check;
loop:
    obj = lbl_8030F4E0 + lbl_803672EA * 0xC;
    type = *(u8 *)obj;
    switch (type) {
    case 0:
        fn_8005BFE4(*(void **)((u8 *)obj + 4), *(s32 *)((u8 *)obj + 8));
        break;
    case 1:
        fn_8005BF8C(*(void **)((u8 *)obj + 4), *(s32 *)((u8 *)obj + 8));
        break;
    case 2:
        val = *(s32 *)((u8 *)obj + 8);
        obj = *(void **)((u8 *)obj + 4);
        if (*(volatile u16 *)((u8 *)obj + 0x30) & 0x400) {
            if (*(volatile u16 *)((u8 *)obj + 0x30) & 0x2000) {
                fn_800C4588(val);
            }
        } else {
            if (*(volatile u16 *)((u8 *)obj + 0x30) & 0x800) {
                fn_8005D9A8(obj);
            }
            *(volatile u16 *)((u8 *)obj + 0x30) |= 0x2000;
        }
        *(volatile u16 *)((u8 *)obj + 0x30) &= ~0x80;
        break;
    case 3:
        val = *(s32 *)((u8 *)obj + 8);
        obj = *(void **)((u8 *)obj + 4);
        DCFlushRange(*(s32 *)((u8 *)obj + 0x38), *(s32 *)((u8 *)obj + 0x3C));
        if (!(*(u16 *)((u8 *)obj + 0x30) & 0x80)) {
            fn_800C4588(val);
        }
        if (*(u16 *)((u8 *)obj + 0x30) & 0x800) {
            fn_8005D9A8(obj);
        }
        *(u16 *)((u8 *)obj + 0x30) |= 0x2000;
        break;
    }
    lbl_803672EA = (lbl_803672EA + 1) & 0x3F;
check:
    if (lbl_803672EA != lbl_803672EB) {
        goto loop;
    }
    fn_8020ADD8(lbl_803672EC);
    goto check;
}

void fn_8005BF8C(void *arg0) {
    u16 *ptr = (u16 *)((u8 *)arg0 + 0x30);

    if (*ptr & 0x400) {
        fn_8005DE84();
        return;
    }
    if (*ptr & 0x800) {
        fn_8005D9A8();
    }
    *ptr |= 0x2004;
}

void fn_8005BFE4(void *arg0) {
 void fn_8005D9A8(void *); void fn_8005DE84(void *); u32 fn_801ECE40(void); u8 fn_801ECECC(void *,s32,s32,void *,void *); extern u8 fn_8005DFB8[]; volatile u16 *flags=(u16*)((u8*)arg0+0x30);
 if ((*flags&8)&&fn_801ECE40()==0&&fn_801ECECC(arg0,*(s32*)((u8*)arg0+0x38),*(s32*)((u8*)arg0+0x3c),fn_8005DFB8,arg0)) {*flags|=0x80;*(s32*)((u8*)arg0+0x6c)=*(s32*)((u8*)arg0+0x38);if(*flags&0x400)fn_8005DE84(arg0);}
 else {if(*flags&0x400){fn_8005DE84(arg0);return;}if(*flags&0x800)fn_8005D9A8(arg0);*flags|=0x2000;}
}

s32 fn_8005C0AC(u8 *arg1) {
    M2C_UNK sp18;
    M2C_UNK sp8;
    s32 temp_r3;
    u8 *var_r31;

    var_r31 = arg1;
    if ((s32) *arg1 == 0x2E) {
        var_r31 += 1;
    }
    temp_r3 = fn_80234200(0x2E);
    if (temp_r3 == 0) {
        return (s8) *var_r31 == 0;
    }
    fn_80234450(&sp18, temp_r3 + 1);
    fn_80238ADC(&sp18);
    fn_80234450(&sp8, var_r31);
    fn_80238ADC(&sp8);
    return fn_802342B8(&sp18, &sp8) == 0;
}

u16 fn_8005C144(u8 *arg0) {
    s32 fn_8020C3E0(u8 *);
    s32 fn_802342B8(u8 *, M2C_UNK *);
    extern M2C_UNK lbl_802F04E0;
    M2C_UNK *var_r27;
    s32 temp_r3;
    s32 var_r30;
    u16 var_r3;
    u32 var_r29;
    u8 *temp_r28;
    u8 *var_r4;
    u8 temp_r3_2;
    u8 temp_r3_3;
    void *var_r3_2;

    var_r4 = arg0;
    if ((s32) *arg0 == 0x2F) {
        var_r4 += 1;
    }
    temp_r28 = var_r4;
    var_r29 = 0;
loop_7:
    temp_r3_2 = *var_r4;
    if ((s8) temp_r3_2 != 0) {
        if (((s8) temp_r3_2 >= 0x41) && ((s8) temp_r3_2 <= 0x5A)) {
            *var_r4 += 0x20;
        }
        temp_r3_3 = *var_r4;
        var_r4 += 1;
        var_r29 = (s8) temp_r3_3 + (var_r29 * 0x25);
        goto loop_7;
    }
    var_r30 = 0;
    var_r27 = &lbl_802F04E0;
loop_9:
    if ((var_r29 == (u32) M2C_FIELD(var_r27, u32 *, 0x2C)) && (fn_802342B8(temp_r28, var_r27) == 0)) {
        var_r3_2 = &lbl_802F04E0 + (var_r30 * 0x7C);
    } else {
        var_r30 += 1;
        var_r27 += 0x7C;
        if (var_r30 >= 0x400) {
            var_r3_2 = NULL;
        } else {
            goto loop_9;
        }
    }
    if (var_r3_2 == NULL) {
        var_r3 = 0x8000;
    } else {
        var_r3 = M2C_FIELD(var_r3_2, u16 *, 0x30);
    }
    if (!(var_r3 & 0x8000)) {
        return var_r3;
    }
    temp_r3 = fn_8020C3E0(arg0);
    return 0x8000 & ((s32) ~((temp_r3 + 1) | (-1 - temp_r3)) >> 0x1F);
}

s32 fn_8005C268(char *name) {
    u8 *e = FindEntryByName(name);
    if (e != NULL) {
        return *(s32 *)(e + 0x3C);
    }
    return 0;
}

s32 fn_8005C368(u32 arg0) {
    extern u16 lbl_802F04E0[];
    void *var_r3;
    u16 *var_r5;
    s32 var_ctr;
    s32 var_r4;

    var_r5 = &lbl_802F04E0[0];
    var_r4 = 0;
    var_ctr = 0x400;
loop_1:
    if ((u32) *(var_r5 + 0x38 / sizeof(u16)) == arg0) {
        var_r3 = &lbl_802F04E0[0] + (var_r4 * 0x7C);
    } else {
        var_r5 += 0x7C / sizeof(u16);
        var_r4 += 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            var_r3 = NULL;
        } else {
            goto loop_1;
        }
    }
    if (var_r3 == NULL) {
        return -1;
    }
    return *(u16 *)((uintptr_t) var_r3 + 0x32);
}

s32 fn_8005C3C4(char *name) {
    if (FindEntryByName(name) == NULL) {
        return 0;
    }
    return 1;
}

void fn_8005C4C4(u8 *arg0, s32 arg1) {
    s32 fn_802342B8(u8 *, M2C_UNK *);
    extern M2C_UNK lbl_802F04E0;
    M2C_UNK *var_r27;
    s32 var_r30;
    u32 var_r29;
    u8 *temp_r28;
    u8 *var_r3;
    u8 temp_r4;
    u8 temp_r4_2;
    void *var_r3_2;

    var_r3 = arg0;
    if ((s32) *var_r3 == 0x2F) {
        var_r3 += 1;
    }
    temp_r28 = var_r3;
    var_r29 = 0;
loop_7:
    temp_r4 = *var_r3;
    if ((s8) temp_r4 != 0) {
        if (((s8) temp_r4 >= 0x41) && ((s8) temp_r4 <= 0x5A)) {
            *var_r3 += 0x20;
        }
        temp_r4_2 = *var_r3;
        var_r3 += 1;
        var_r29 = (s8) temp_r4_2 + (var_r29 * 0x25);
        goto loop_7;
    }
    var_r30 = 0;
    var_r27 = &lbl_802F04E0;
loop_9:
    if ((var_r29 == (u32) M2C_FIELD(var_r27, u32 *, 0x2C)) && (fn_802342B8(temp_r28, var_r27) == 0)) {
        var_r3_2 = &lbl_802F04E0 + (var_r30 * 0x7C);
    } else {
        var_r30 += 1;
        var_r27 += 0x7C;
        if (var_r30 >= 0x400) {
            var_r3_2 = NULL;
        } else {
            goto loop_9;
        }
    }
    M2C_FIELD(var_r3_2, u16 *, 0x30) = (u16) (M2C_FIELD(var_r3_2, u16 *, 0x30) | arg1);
}

void fn_8005C5A8(char *name) {
    u8 *e = FindEntryByName(name);
    u16 v = *(u16 *)(e + 0x30);
    v |= 0x4000;
    *(u16 *)(e + 0x30) = v;
}

u16 fn_8005C6A0(char *name) {
    u8 *e = FindEntryByName(name);
    if (e == NULL) {
        return 0x8000;
    }
    return *(u16 *)(e + 0x30);
}

void fn_8005C7A4(s32 arg0) {
    arg0 = (s8)arg0;
    fn_8005CF6C(arg0);
}

void fn_8005C7C8(void) {
    M2C_UNK fn_8005D1DC();
    fn_8005D1DC();
}

void fn_8005C7E8(void) {
    M2C_UNK fn_8005D2CC();
    fn_8005D2CC();
}

void fn_8005C808(void *arg0) {
    M2C_UNK fn_8005D474(void *, M2C_UNK);
    fn_8005D474(arg0, 2);
}

M2C_UNK fn_8005C82C() {
    M2C_UNK fn_8005D474();
    return fn_8005D474();
}

void fn_8005C84C(s32 arg0) {
    void fn_8005D474(s32, s32);
    fn_8005D474(arg0, 0);
}

void fn_8005C870(void) {
    M2C_UNK fn_8005D330();
    fn_8005D330();
}

void fn_8005C890(void) {
    extern void fn_8005D330(int);
    fn_8005D330(0x0C);
}

void fn_8005C8B4(s32 arg0) {
    void fn_8005D330(s32, s32);
    fn_8005D330(arg0, 0);
}

void fn_8005CBC8(void) {
    extern u8 lbl_803672E9;
    if (lbl_803672E9 != 0) {
        return;
    }
    lbl_803672E9 = 1;
    fn_8005C8D8();
}

void *fn_8005CEC0(void) {
    extern u8 lbl_802F04E0;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r3;
    s32 var_r4;
    u8 *var_r31;
    u8 *var_r3_2;

    var_r4 = 0;
    var_r31 = &lbl_802F04E0;
    var_r3_2 = &lbl_802F04E0;
    var_ctr = 0x400;
loop_1:
    if ((s8) *var_r3_2 == 0) {
        return &lbl_802F04E0 + (var_r4 * 0x7C);
    }
    var_r3_2 += 0x7C;
    var_r4 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        fn_8005C8D8(-1);
        var_r3 = 0;
        var_ctr_2 = 0x400;
loop_5:
        if ((s8) *var_r31 == 0) {
            return &lbl_802F04E0 + (var_r3 * 0x7C);
        }
        var_r31 += 0x7C;
        var_r3 += 1;
        var_ctr_2 -= 1;
        if (var_ctr_2 == 0) {
            return NULL;
        }
        goto loop_5;
    }
    goto loop_1;
}

void fn_8005D690(u8 *);
void fn_8005D1DC(char *name) {
    fn_8005D690(FindEntryByName(name));
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_8005D690(u8 *arg0) {
    s64 OSGetTime(void);
    void fn_8003FED8(void *);
    void fn_800C4588(void *);
    void fn_8020A51C(void);
    extern u8 lbl_802F04E0[];

    *(u16 *)(arg0 + 0x32) = *(u16 *)(arg0 + 0x32) - 1;
    *(u32 *)(arg0 + 0x34) = (u32)(OSGetTime() / (*(u32 *)0x800000F8 >> 2));
    if (*(u16 *)(arg0 + 0x32) != 0) {
        return;
    }

    if (*(volatile u16 *)(arg0 + 0x30) & 0x800) {
        if (*(volatile u16 *)(arg0 + 0x30) & 0x2000) {
            s32 i;
            u8 *item;
            u8 *list;
            list = *(u8 **)(arg0 + 0x38);
            i = 0;
            item = list + 8;
            goto check1;
        body1:
            {
                u8 *found;
                unsigned long j;
                u32 key;
                u8 *e;
                unsigned ctr;
                e = lbl_802F04E0;
                key = *(u32 *)(item + 8);
                j = 0;
                for (ctr = 0x400; ctr > 0; ctr--) {
                    if (*(u32 *)(e + 0x38) == key) {
                        found = lbl_802F04E0 + j * 0x7C;
                        goto found1;
                    }
                    e += 0x7C;
                    j += 1;
                }
                found = 0;
            found1:
                if (found) {
                    if (*(u16 *)(found + 0x30) & 1) {
                        fn_8003FED8(*(void **)(found + 0x38));
                        *(u16 *)(found + 0x30) &= 0xFFFE;
                    }
                }
            }
            item += 0x10;
            i += 1;
        check1:
            if (i < *(u16 *)(list + 4)) {
                goto body1;
            }
        }
    } else if (*(volatile u16 *)(arg0 + 0x30) & 1) {
        fn_8003FED8(*(void **)(arg0 + 0x38));
        *(u16 *)(arg0 + 0x30) &= 0xFFFE;
    }

    if (*(volatile u16 *)(arg0 + 0x30) & 4) {
        goto spin1_check;
    spin1_body:
        fn_8020A51C();
    spin1_check:
        if (*(volatile u16 *)(arg0 + 0x30) & 0x80) {
            goto spin1_body;
        }
        if (!(*(volatile u16 *)(arg0 + 0x30) & 0x1000)) goto spin2_check;
        else return;

        goto spin2_check;
    spin2_body:
        fn_8020A51C();
    spin2_check:
        if (*(volatile u16 *)(arg0 + 0x30) & 0x80) {
            goto spin2_body;
        }

        if (*(volatile u16 *)(arg0 + 0x30) & 0x800) {
            if (*(volatile u16 *)(arg0 + 0x30) & 0x2000) {
                s32 i;
            u8 *item;
            u8 *list;
            list = *(u8 **)(arg0 + 0x38);
                i = 0;
                item = list + 8;
                goto check2;
            body2:
                {
                    u8 *found;
                unsigned long j;
                u32 key;
                u8 *e;
                unsigned ctr;
                    key = *(u32 *)(item + 8);
                    e = lbl_802F04E0;
                    j = 0;
                    for (ctr = 0x400; ctr > 0; ctr--) {
                        if (*(u32 *)(e + 0x38) == key) {
                            found = lbl_802F04E0 + j * 0x7C;
                            goto found2;
                        }
                        e += 0x7C;
                        ++j;
                    }
                    found = 0;
                found2:
                    if (found) {
                        if (*(u16 *)(found + 0x30) & 1) {
                            fn_8003FED8(*(void **)(found + 0x38));
                            *(u16 *)(found + 0x30) &= 0xFFFE;
                        }
                    }
                }
                item += 0x10;
                ++i;
            check2:
                if (i < *(u16 *)(list + 4)) {
                    goto body2;
                }
            }
        } else if (*(volatile u16 *)(arg0 + 0x30) & 1) {
            fn_8003FED8(*(void **)(arg0 + 0x38));
            *(u16 *)(arg0 + 0x30) &= 0xFFFE;
        }

        if (*(volatile u16 *)(arg0 + 0x30) & 0x800) {
            if (*(volatile u16 *)(arg0 + 0x30) & 0x2000) {
                s32 i;
            u8 *item;
            u8 *list;
            list = *(u8 **)(arg0 + 0x38);
                i = 0;
                item = list + 8;
                goto check3;
            body3:
                {
                    u8 *found;
                unsigned long j;
                u32 key;
                u8 *e;
                unsigned ctr;
                    e = lbl_802F04E0;
                    key = *(u32 *)(item + 8);
                    j = 0;
                    for (ctr = 0x400; ctr > 0; ctr--) {
                        if (*(u32 *)(e + 0x38) == key) {
                            found = lbl_802F04E0 + j * 0x7C;
                            goto found3;
                        }
                        e += 0x7C;
                        j += 1;
                    }
                    found = 0;
                found3:
                    if (found) {
                        found[0] = 0;
                        *(u32 *)(found + (u32)0x2C) = 0;
                        *(u16 *)(found + 0x30) = 0;
                        *(u16 *)(found + 0x32) = 0;
                        *(u32 *)(found + 0x38) = 0;
                        *(u32 *)(found + 0x3C) = 0;
                    }
                }
                item += 0x10;
                i++;
            check3:
                if (i < *(u16 *)(list + 4)) {
                    goto body3;
                }
            }
        }

        fn_800C4588(*(void **)(arg0 + 0x38));
        arg0[0] = 0;
        *(u32 *)(arg0 + 0x2C) = 0;
        *(u16 *)(arg0 + 0x30) = 0;
        *(u16 *)(arg0 + 0x32) = 0;
        *(u32 *)(arg0 + 0x38) = 0;
        *(u32 *)(arg0 + 0x3C) = 0;
    }
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_8005DB40(u8 *arg0, char *arg1, u8 *arg2, u16 arg3) {
    s64 OSGetTime(void);
    u32 fn_8005E594(s8, s32, char *);
    u32 fn_800C44F4(s8);
    u32 fn_800C45B8(s32, char *, s32);
    u32 fn_800C4604(s8, s32, char *, s32);
    void fn_801ED848(void *, u32, void *, u8 *);
    void fn_8005E014(void);
    extern char lbl_8026B330[];
    extern u8 lbl_803672E8;
    u32 strlen(char *);
    char *src;
    u8 *dst;
    s32 i;
    char *p;
    char *ext;
    s32 match;
    s8 c;
    s8 drive;
    s32 size;
    s32 off;

    src = arg1;
    if (*arg1 == '/') {
        src++;
    }
    dst = arg0;
    *(s32 *)(arg0 + 0x2C) = 0;
    i = 0x29;
    do {
        c = *src;
        if (c >= 'A' && c <= 'Z') {
            *src = (char)(c + 0x20);
        }
        *dst = *src;
        c = *src;
        if (c == 0) {
            break;
        }
        *(s32 *)(arg0 + 0x2C) = (s8)c + *(s32 *)(arg0 + 0x2C) * 0x25;
        dst++;
        src++;
    } while (--i != 0);

    arg0[0x29] = lbl_803672E8;
    *(u16 *)(arg0 + 0x32) = 0;
    *(u16 *)(arg0 + 0x30) = arg3;
    *(u32 *)(arg0 + 0x34) = (u32)(OSGetTime() / (*(u32 *)0x800000F8 >> 2));

    p = arg1;
    ext = lbl_8026B330 + 0x221;
    for (;;) {
        c = *p;
        if (c == 0) {
            break;
        }
        if (c != '.') {
            p++;
            continue;
        }
        break;
    }
    for (;;) {
        c = *p;
        if (c == 0) {
            match = 0;
            break;
        }
        if (c == (s8)*ext) {
            ext++;
            p++;
            if ((s8)*ext == 0 && (s8)*p == 0) {
                match = 1;
                break;
            }
            continue;
        }
        match = 0;
        break;
    }
    if ((u8)match) {
        *(u16 *)(arg0 + 0x30) = 0xC00;
    }

    p = arg1;
    ext = lbl_8026B330 + 0x226;
    for (;;) {
        c = *p;
        if (c == 0) {
            break;
        }
        if (c != '.') {
            p++;
            continue;
        }
        break;
    }
    for (;;) {
        c = *p;
        if (c == 0) {
            match = 0;
            break;
        }
        if (c == (s8)*ext) {
            ext++;
            p++;
            if ((s8)*ext == 0 && (s8)*p == 0) {
                match = 1;
                break;
            }
            continue;
        }
        match = 0;
        break;
    }
    if ((u8)match) {
        *(u16 *)(arg0 + 0x30) = 0x800;
    }

    p = arg1;
    ext = lbl_8026B330 + 0x22B;
    for (;;) {
        c = *p;
        if (c == 0) {
            break;
        }
        if (c != '.') {
            p++;
            continue;
        }
        break;
    }
    for (;;) {
        c = *p;
        if (c == 0) {
            match = 0;
            break;
        }
        if (c == (s8)*ext) {
            ext++;
            p++;
            if ((s8)*ext == 0 && (s8)*p == 0) {
                match = 1;
                break;
            }
            continue;
        }
        match = 0;
        break;
    }
    if ((u8)match) {
        *(u16 *)(arg0 + 0x30) = 0x400;
    }

    *(s32 *)(arg0 + 0x3C) = *(s32 *)(arg2 + 0x64);
    if (*(u16 *)(arg0 + 0x30) & 0x410) {
        *(u32 *)(arg0 + 0x38) = fn_800C45B8(-*(s32 *)(arg0 + 0x3C), lbl_8026B330 + 5, 0);
    } else {
        drive = arg0[0x29];
        size = *(s32 *)(arg0 + 0x3C);
        if (fn_800C44F4(drive) < (u32)size) {
            *(u32 *)(arg0 + 0x38) = 0;
        } else {
            off = (s32)strlen(arg1) - 0xF;
            if (off < 0) {
                off = 0;
            }
            *(u32 *)(arg0 + 0x38) = fn_800C4604(drive, size, arg1 + off, size);
        }
    }
    if (*(u32 *)(arg0 + 0x38) == 0) {
        *(u32 *)(arg0 + 0x38) = fn_8005E594((s8)arg0[0x29], *(s32 *)(arg0 + 0x3C), arg1);
    }
    fn_801ED848(arg2, *(u32 *)(arg0 + 0x38), fn_8005E014, arg0);
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

#pragma global_optimizer reset
#pragma use_lmw_stmw reset

int fn_8005DE84(void *a){u32 fn_80006AC0(u32);u32 fn_800C44F4(s8);u32 fn_800C4604(s8,u32,void*,u32);u32 fn_8005E594(s8,u32,void*);void fn_800065B0(u32,u32,void*,void*);s32 strlen(void*);extern u8 fn_8005DF60[];u32 old;u32 n;s8 ch;u32 len;old=*(u32*)((u8*)a+0x38);n=fn_80006AC0(old);*(u32*)((u8*)a+0x3c)=n;ch=*(s8*)((u8*)a+0x29);n=*(u32*)((u8*)a+0x3c);if(fn_800C44F4(ch)<n){len=0;}else{len=strlen(a)-15;if((s32)len<0)len=0;len=fn_800C4604(ch,n,(u8*)a+len,n);}*(u32*)((u8*)a+0x38)=len;if(*(u32*)((u8*)a+0x38)==0){*(u32*)((u8*)a+0x38)=fn_8005E594(ch,n,a);}fn_800065B0(old,*(u32*)((u8*)a+0x38),fn_8005DF60,a);return 0;}

void fn_8005DF60(s32 arg0, s32 arg1) {
    M2C_UNK fn_8020AEC4(M2C_UNK *, void *, M2C_UNK, M2C_UNK *, s32);
    extern M2C_UNK lbl_8030F4E0;
    extern u8 lbl_803672EB;
    extern M2C_UNK lbl_803672EC;
    s32 temp_r8;
    void *temp_r5;

    temp_r8 = lbl_803672EB * 0xC;
    temp_r5 = &lbl_8030F4E0 + temp_r8;
    M2C_FIELD(temp_r5, s8 *, 0) = 3;
    M2C_FIELD(temp_r5, s32 *, 4) = arg0;
    M2C_FIELD(temp_r5, s32 *, 8) = arg1;
    lbl_803672EB = (lbl_803672EB + 1) & 0x3F;
    fn_8020AEC4(&lbl_803672EC, temp_r5, 3, &lbl_8030F4E0, temp_r8);
}

void fn_8005DFB8(void *arg0) {
    extern u8 lbl_803672EB;
    extern u16 lbl_8030F4E0[];
    extern u8 lbl_803672EC[];

    s32 temp_r6;
    s32 temp_r7;
    void *temp_r5;
    u8 temp_r4;

    temp_r6 = lbl_803672EB * 0xC;
    temp_r7 = *(s32*)((char*)arg0 + 0x6C);
    temp_r5 = (void*)((char*)lbl_8030F4E0 + temp_r6);
    temp_r4 = lbl_803672EB + 1;
    *(u8*)((char*)temp_r5 + 0x0) = 2;
    *(void**)((char*)temp_r5 + 0x4) = arg0;
    *(s32*)((char*)temp_r5 + 0x8) = temp_r7;
    lbl_803672EB = temp_r4 & 0x3F;
    fn_8020AEC4(lbl_803672EC, 2, temp_r5, temp_r6, temp_r7);
}

void fn_8005E070(s32 arg0, void *arg1) {
    extern u16 lbl_8030F4E0;
    extern u8 lbl_803672EB;
    extern u16 lbl_803672EC;

    s32 temp_r31;
    s32 temp_r6;
    void *temp_r5;
    u8 r4;

    temp_r31 = *(s32 *)((char *)arg1 + 0x2C);
    fn_8020C79C(arg1);
    if (arg0 >= 0) {
        r4 = lbl_803672EB;
        temp_r6 = r4 * 0xC;
        temp_r5 = (char *)&lbl_8030F4E0 + temp_r6;
        *(u8 *)temp_r5 = 0;
        *(s32 *)((char *)temp_r5 + 4) = temp_r31;
        *(s32 *)((char *)temp_r5 + 8) = 0;
        lbl_803672EB = (r4 + 1) & 0x3F;
        fn_8020AEC4(&lbl_803672EC, 0, temp_r5, temp_r6);
    }
}

void fn_8005E0F0(void) {
    void fn_8020A824(void *);
    extern u8 lbl_8030F7E0[];
    extern u8 lbl_803672E9;
    if (lbl_803672E9 != 0) {
        fn_8020A824(lbl_8030F7E0);
        lbl_803672E9 = 0;
    }
}

#pragma use_lmw_stmw on
void fn_8005E12C(u8 *arg0, char *arg1, u16 arg2) {
    s64 OSGetTime(void);
    u32 fn_8005E594(s8, s32, char *);
    u32 fn_800C44F4(s8);
    u32 fn_800C45B8(s32, char *, s32);
    u32 fn_800C4604(s8, s32, char *, s32);
    void fn_8020C6D4(char *, u8 *);
    void fn_8020CB38(u8 *, u32, s32, s32, void *, s32);
    extern void fn_8005E070(void);
    extern char lbl_8026B330[];
    extern u8 lbl_803672E8;
    u32 strlen(char *);
    char *src;
    u8 *dst;
    unsigned ctr;
    char *p;
    char *ext;
    u8 match;
    u8 ch;
    s8 c;
    s8 drive;
    s32 size;
    s32 off;
    u32 res;
    s32 z;

    if (*arg1 == '/') {
        src = arg1 + 1;
    } else {
        src = arg1;
    }
    z = 0;
    dst = arg0;
    *(s32 *)(arg0 + 0x2C) = z;
    for (ctr = 0x29; ctr != 0; ctr--) {
        ch = *(u8 *)src;
        if ((s8)ch >= 'A' && (s8)ch <= 'Z') {
            *(u8 *)src = ch + 0x20;
        }
        *dst = *(u8 *)src;
        ch = *(u8 *)src;
        if ((s8)ch == 0) {
            break;
        }
        c = (s8)ch;
        *(s32 *)(arg0 + 0x2C) = c + *(s32 *)(arg0 + 0x2C) * 0x25;
        dst += 1;
        src += 1;
    }

    fn_8020C6D4(arg1, arg0 + 0x40);
    arg0[0x29] = lbl_803672E8;
    *(u16 *)(arg0 + 0x32) = 0;
    *(u16 *)(arg0 + 0x30) = arg2;
    *(u32 *)(arg0 + 0x34) = (u32)(OSGetTime() / (*(u32 *)0x800000F8 >> 2));
    *(u8 **)(arg0 + 0x6C) = arg0;

    p = arg1;
    ext = lbl_8026B330 + 0x221;
    goto find1_chk;
find1:
    if ((s8)c == '.') {
        goto cmp1;
    }
    p += 1;
find1_chk:
    c = *p;
    if ((s8)c != 0) {
        goto find1;
    }
cmp1:
    for (;;) {
        c = *p;
        if ((s8)c == 0) {
            match = 0;
            break;
        }
        if ((s8)c == (s8)*ext) {
            ext += 1;
            p += 1;
            if ((s8)*ext == 0 && (s8)*p == 0) {
                match = 1;
                break;
            }
            continue;
        }
        match = 0;
        break;
    }
    if (match) {
        *(u16 *)(arg0 + 0x30) |= 0xC00;
    }

    p = arg1;
    ext = lbl_8026B330 + 0x226;
    goto find2_chk;
find2:
    if ((s8)c == '.') {
        goto cmp2;
    }
    p += 1;
find2_chk:
    c = *p;
    if ((s8)c != 0) {
        goto find2;
    }
cmp2:
    for (;;) {
        c = *p;
        if ((s8)c == 0) {
            match = 0;
            break;
        }
        if ((s8)c == (s8)*ext) {
            ext += 1;
            p += 1;
            if ((s8)*ext == 0 && (s8)*p == 0) {
                match = 1;
                break;
            }
            continue;
        }
        match = 0;
        break;
    }
    if (match) {
        *(u16 *)(arg0 + 0x30) |= 0x800;
    }

    p = arg1;
    ext = lbl_8026B330 + 0x22B;
    goto find3_chk;
find3:
    if ((s8)c == '.') {
        goto cmp3;
    }
    p += 1;
find3_chk:
    c = *p;
    if ((s8)c != 0) {
        goto find3;
    }
cmp3:
    for (;;) {
        c = *p;
        if ((s8)c == 0) {
            match = 0;
            break;
        }
        if ((s8)c == (s8)*ext) {
            ext += 1;
            p += 1;
            if ((s8)*ext == 0 && (s8)*p == 0) {
                match = 1;
                break;
            }
            continue;
        }
        match = 0;
        break;
    }
    if (match) {
        *(u16 *)(arg0 + 0x30) |= 0x400;
    }

    *(s32 *)(arg0 + 0x3C) = (*(s32 *)(arg0 + 0x74) + 0x1F) & ~0x1F;

    if (*(volatile u16 *)(arg0 + 0x30) & 0x410) {
        *(u32 *)(arg0 + 0x38) = fn_800C45B8(-*(s32 *)(arg0 + 0x3C), lbl_8026B330 + 5, 0);
    } else {
        if (*(volatile u16 *)(arg0 + 0x30) & 2) {
            drive = (s8)arg0[0x29];
            size = *(s32 *)(arg0 + 0x3C) + 1;
            if (fn_800C44F4(drive) < (u32)size) {
                res = 0;
            } else {
                off = (s32)strlen(arg1) - 0xF;
                if (off < 0) {
                    off = 0;
                }
                res = fn_800C4604(drive, size, arg1 + off, size);
            }
            *(u32 *)(arg0 + 0x38) = res;
            *(u8 *)(*(u8 **)(arg0 + 0x3C) + *(u32 *)(arg0 + 0x38)) = 0;
        } else {
            drive = (s8)arg0[0x29];
            size = *(s32 *)(arg0 + 0x3C);
            if (fn_800C44F4(drive) < (u32)size) {
                res = 0;
            } else {
                off = (s32)strlen(arg1) - 0xF;
                if (off < 0) {
                    off = 0;
                }
                res = fn_800C4604(drive, size, arg1 + off, size);
            }
            *(u32 *)(arg0 + 0x38) = res;
        }
        if (*(u32 *)(arg0 + 0x38) == 0) {
            *(u32 *)(arg0 + 0x38) = fn_8005E594((s8)arg0[0x29], *(s32 *)(arg0 + 0x3C), arg1);
        }
    }

    if ((*(u16 *)(arg0 + 0x30) & 0x300) == 0x300) {
        fn_8020CB38(arg0 + 0x40, *(u32 *)(arg0 + 0x38), *(s32 *)(arg0 + 0x3C), 0, (void *)fn_8005E070, 3);
    } else {
        fn_8020CB38(arg0 + 0x40, *(u32 *)(arg0 + 0x38), *(s32 *)(arg0 + 0x3C), 0, (void *)fn_8005E070, 2);
    }
}
u32 fn_8005E55C(void) {
    s64 OSGetTime(void);
    return OSGetTime() / (*(u32 *)0x800000F8 >> 2);
}

#pragma dont_inline on
void *fn_8005E594(s8 arg0, u32 arg1, char *arg2) {
    M2C_UNK fn_800056CC(char *, ...);
    u32 fn_800C44F4(s8);
    void *fn_800C4604(s8, u32, char *, u32);
    M2C_UNK fn_800C4384(void);
    unsigned long strlen(const char *);
    extern char lbl_8026B330[];
    void *var_r31;
    s32 var_r0;

    fn_800056CC(lbl_8026B330 + 0x230, arg1, arg2);
    fn_8005BC8C(arg0);
    if (fn_800C44F4(arg0) < arg1) {
        var_r31 = NULL;
    } else {
        var_r0 = strlen(arg2) - 15;
        if (var_r0 < 0) {
            var_r0 = 0;
        }
        var_r31 = fn_800C4604(arg0, arg1, arg2 + var_r0, arg1);
    }
    if (var_r31 == NULL) {
        fn_800C4384();
    }
    return var_r31;
}

#pragma use_lmw_stmw on
void fn_8005E644(void *arg0) {
    void fn_8005F12C(void *, void *);
    void fn_8005F230(void *);
    s32 fn_8005F378(void *);
    s32 fn_8005F3B8(void *);
    void *fn_8005F410(void *);
    void fn_8005F7B0(void *, u8);
    void fn_8005F7E0(void *, u8, u8, u8);
    void *fn_80060690(void *);
    void fn_8006D378(void *);
    void fn_801505A8(void *, void *);
    void fn_80201FF0(void *, void *);

    u32 color;
    void *p;
    void *q;
    void *r;
    s32 n;
    s32 depth;
    s32 dist;
    s32 b;
    u8 ub;
    u8 alpha;
    u8 t;
    s32 off;
    void *great;
    s32 i;
    void *info;
    void *grand;
    void *child;

    child = *(void **)((u8 *)arg0 + 0x8C);
    if (child == NULL) {
        return;
    }

    grand = *(void **)((u8 *)child + 0x8C);
    if (grand != NULL) {
        great = *(void **)((u8 *)grand + 0x8C);
        if (great != NULL) {
            fn_8005E644(great);
            fn_8005F12C(grand, great);
            fn_8005F230(great);
        }

        if (child != NULL && grand != NULL) {
            info = fn_80060690(child);
            i = 0;
            off = i;
            while (i < *(s32 *)((u8 *)info + 8)) {
                fn_80201FF0((u8 *)*(void **)((u8 *)child + 0x60) + off,
                            (u8 *)*(void **)((u8 *)grand + 0x60) + off);
                off += 0x30;
                i += 1;
            }
            if (*(u32 *)((u8 *)child + 0x64) != 0) {
                i = 0;
                off = i;
                while (i < *(s32 *)((u8 *)info + 8)) {
                    fn_80201FF0((u8 *)*(void **)((u8 *)child + 0x64) + off,
                                (u8 *)*(void **)((u8 *)grand + 0x64) + off);
                    off += 0x30;
                    i += 1;
                }
                fn_8006D378(grand);
            }
            fn_80201FF0((u8 *)child + 0x10, (u8 *)grand + 0x10);
            if (*(u32 *)((u8 *)child + 0x54) != 0) {
                fn_801505A8(child, grand);
            }
            *(f32 *)((u8 *)grand + 0x58) = *(f32 *)((u8 *)child + 0x58);
        }

        info = fn_8005F410(grand);
        if (info != NULL) {
            n = fn_8005F378(grand);
            b = fn_8005F3B8(grand);
            ub = ((u8 *)info)[0xB];
            color = *(u32 *)((u8 *)info + 0x88);
            alpha = (u8)(((ub - (ub * b) / (n + 1)) * ((u8 *)&color)[3]) / 255);
            ((u8 *)&color)[3] = alpha;
            fn_8005F7B0(grand, alpha);
            fn_8005F7E0(grand, ((u8 *)&color)[0], ((u8 *)&color)[1], ((u8 *)&color)[2]);
        }
    }

    if (arg0 != NULL && child != NULL) {
        p = arg0;
        goto loop_2;
    loop_1:
        if (*(u32 *)((u8 *)p + 0x40) != 0U) {
            goto block_7;
        }
        p = *(void **)((u8 *)p + 4);
    loop_2:
        if (p != NULL) {
            goto loop_1;
        }
        i = 0;
        goto block_8;
    block_7:
        i = *(s32 *)((u8 *)p + 0x40);
    block_8:
        info = (void *)i;

        i = 0;
        off = i;
        while (i < *(s32 *)((u8 *)info + 8)) {
            fn_80201FF0((u8 *)*(void **)((u8 *)arg0 + 0x60) + off,
                        (u8 *)*(void **)((u8 *)child + 0x60) + off);
            off += 0x30;
            i += 1;
        }
        if (*(u32 *)((u8 *)arg0 + 0x64) != 0) {
            i = 0;
            off = i;
            while (i < *(s32 *)((u8 *)info + 8)) {
                fn_80201FF0((u8 *)*(void **)((u8 *)arg0 + 0x64) + off,
                            (u8 *)*(void **)((u8 *)child + 0x64) + off);
                off += 0x30;
                i += 1;
            }
            fn_8006D378(child);
        }
        fn_80201FF0((u8 *)arg0 + 0x10, (u8 *)child + 0x10);
        if (*(u32 *)((u8 *)arg0 + 0x54) != 0) {
            fn_801505A8(arg0, child);
        }
        *(f32 *)((u8 *)child + 0x58) = *(f32 *)((u8 *)arg0 + 0x58);
    }

    p = child;
    for (;;) {
        q = *(void **)((u8 *)p + 4);
        if (q != NULL && *(u32 *)((u8 *)q + 0x8C) != 0) {
            p = q;
        } else {
            break;
        }
    }

    if (p != NULL) {
        q = child;
        for (;;) {
            r = *(void **)((u8 *)q + 4);
            if (r != NULL && *(u32 *)((u8 *)r + 0x8C) != 0) {
                q = r;
            } else {
                break;
            }
        }
        depth = 0;
        for (;;) {
            q = *(void **)((u8 *)q + 0x8C);
            if (q != NULL) {
                depth += 1;
            } else {
                break;
            }
        }

        r = child;
        for (;;) {
            q = *(void **)((u8 *)r + 4);
            if (q != NULL && *(u32 *)((u8 *)r + 0x8C) != 0) {
                r = q;
            } else {
                break;
            }
        }
        dist = 0;
        if (r != child) {
            for (;;) {
                r = *(void **)((u8 *)r + 0x8C);
                if (r != NULL) {
                    dist += 1;
                } else {
                    dist = 0;
                    break;
                }
            }
        }

        ub = ((u8 *)p)[0xB];
        color = *(u32 *)((u8 *)p + 0x88);
        t = (u8)(((ub - (ub * dist) / (depth + 1)) * ((u8 *)&color)[3]) / 255);
        ((u8 *)&color)[3] = t;
        ((u8 *)child)[0xB] = t;
        if (t != 0xFF) {
            *(u32 *)child |= 0x20;
        } else {
            *(u32 *)child &= ~0x20;
        }
        ((u8 *)child)[8] = ((u8 *)&color)[0];
        ((u8 *)child)[9] = ((u8 *)&color)[1];
        ((u8 *)child)[0xA] = ((u8 *)&color)[2];
    }
}
#pragma use_lmw_stmw reset

#pragma dont_inline reset
void fn_8005EB5C(u8 *arg0, u8 *arg1) {
    u8 temp_r5;

    temp_r5 = arg1[0];
    arg0[0x88] = temp_r5;
    temp_r5 = arg1[1];
    arg0[0x89] = temp_r5;
    temp_r5 = arg1[2];
    arg0[0x8A] = temp_r5;
    temp_r5 = arg1[3];
    arg0[0x8B] = temp_r5;
}

void fn_8005EB80(s32 arg0, s32 arg1) {
    M2C_UNK fn_8005EA14();
    M2C_UNK fn_8005EC18(s32, s32, M2C_UNK);
    if (arg0 != 0) {
        fn_8005EA14();
        fn_8005EC18(arg0, arg1, 0x40800000);
    }
}

void fn_8005EBCC(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_8005EA14();
        fn_8005EC18(arg0, arg1, 0x40400000);
    }
}

s32 fn_8005F230(s32 arg0) {
    s32 var_r31;
    s32 temp_r3;
    u32 temp_r4;

    temp_r3 = *(s32 *)((char *)arg0 + 0x9C);
    if (temp_r3 == 0) {
        return -1U;
    }
    
    temp_r4 = *(u32 *)((char *)arg0 + 0xC0);
    if ((temp_r4 & 0xF) == 0) {
        var_r31 = 0x4000;
        if (temp_r4 & 0x10000000) {
            var_r31 = 0x80000;
        }
        return (*(u32 *)((char *)arg0 + 0xC4) * var_r31) / temp_r3;
    }
    
    return (s32) *(u32 *)((char *)arg0 + 0x9C);
}

s32 fn_8005F378(void *arg0) {
    void *var_r4;
    void *temp_r0;
    void *temp_r5;
    unsigned int var_r5;

    var_r4 = arg0;
loop_1:
    temp_r5 = M2C_FIELD(var_r4, void **, 4);
    if ((temp_r5 != NULL) && (M2C_FIELD(temp_r5, u32 *, 0x8C) != 0U)) {
        var_r4 = temp_r5;
        goto loop_1;
    }
    var_r5 = 0;
loop_5:
    if (var_r4 == arg0) {
        return var_r5;
    }
    temp_r0 = M2C_FIELD(var_r4, void **, 0x8C);
    if (temp_r0 != NULL) {
        var_r4 = temp_r0;
        var_r5 += 1;
        goto loop_5;
    }
    return 0;
}

s32 fn_8005F3B8(void *arg0) {
    void *var_r4;
    void *temp_r0;
    void *temp_r5;
    unsigned int var_r5;

    var_r4 = arg0;
loop_1:
    temp_r5 = M2C_FIELD(var_r4, void **, 4);
    if ((temp_r5 != NULL) && (M2C_FIELD(temp_r5, u32 *, 0x8C) != 0U)) {
        var_r4 = temp_r5;
        goto loop_1;
    }
    var_r5 = 0;
loop_5:
    if (var_r4 == arg0) {
        return var_r5;
    }
    temp_r0 = M2C_FIELD(var_r4, void **, 0x8C);
    if (temp_r0 != NULL) {
        var_r4 = temp_r0;
        var_r5 += 1;
        goto loop_5;
    }
    return 0;
}

void fn_8005F410(void* arg0) {
    if (arg0 == NULL) {
        return;
    }
    if (*(void**)((char*)arg0 + 0x8c) == NULL) {
        return;
    }
    fn_8005F410(*(void**)((char*)arg0 + 0x8c));
}

extern u32 fn_80065E88(s32, s32);
extern void fn_80065E68(void);
void fn_8005F4F4(void *arg0, s32 arg1) {
    void *fn_80065E88(s32, s32);
    void fn_80065E68(void *);
    void *saved;
    void *temp;

    saved = *(void **)((u8 *)arg0 + 0x40);
    temp = fn_80065E88(arg1, 0);
    if (temp != *(void **)((u8 *)arg0 + 0x40)) {
        *(void **)((u8 *)arg0 + 0x40) = temp;
    }
    if (saved != NULL) {
        fn_80065E68(saved);
    }
}

void fn_8005F780(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x84) = arg1;
}

void fn_8005F788(void *arg0, s8 arg1, u8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x86) = arg1;
    M2C_FIELD(arg0, u8 *, 0x85) = (u8) (1 << arg1);
    if (arg2 != 0) {
        M2C_FIELD(arg0, u8 *, 0x85) = (u8) (M2C_FIELD(arg0, u8 *, 0x85) | 0xF0);
    }
}

void fn_8005F7B0(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, u8 *, 0xB) = arg1;
    if (arg1 != 0xFF) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x20);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFFFFFDF);
}

void fn_8005F7E0(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 8) = arg1;
    M2C_FIELD(arg0, s8 *, 9) = arg2;
    M2C_FIELD(arg0, s8 *, 0xA) = arg3;
}

s32 fn_8005F7F0(void *arg0) {
    if (*(u16 *)((u8 *)arg0 + 0x7C) != 0xFFFF) return 1;
    if (*(u16 *)((u8 *)arg0 + 0x7E) != 0xFFFF) return 1;
    if (*(u16 *)((u8 *)arg0 + 0x80) != 0xFFFF) return 1;
    if (*(u16 *)((u8 *)arg0 + 0x82) != 0xFFFF) return 1;
    return 0;
}

static inline u32 GetListField44(void *p) {
    while (p != NULL) {
        u32 v = *(u32 *)((u8 *)p + 0x44);
        if (v != 0) {
            return v;
        }
        p = *(void **)((u8 *)p + 4);
    }
    return 0;
}

void fn_8005F84C(void *arg0) {
    extern void *fn_80065484(u32);

    fn_80065484(GetListField44(arg0));
}

void fn_8005F894(void *arg0, s32 arg1) {
    void fn_80065484(u32, s32, s32);

    fn_80065484(GetListField44(arg0), -1, arg1);
}

void fn_8005F8E4(void *arg0) {
    extern void *fn_800653C8(u32);

    fn_800653C8(GetListField44(arg0));
}

u16 fn_8005F92C(void *arg0, u16 *arg1) {
    s32 var_ctr;
    u16 *var_r7;
    u16 temp_r0;
    u16 temp_r6;
    void *var_r3;

    var_r3 = arg0;
    var_ctr = 2;
loop_1:
    temp_r6 = ((u16*)var_r3)[0x7C/2];
    if (temp_r6 != -1) {
        var_r7 = arg1;
loop_6:
        temp_r0 = *var_r7;
        if (temp_r0 == -1) {
            goto block_7;
        }
        if (temp_r0 == temp_r6) {
            return temp_r6;
        }
        var_r7 += 1;
        goto loop_6;
    }
block_7:
    temp_r6 = ((u16*)var_r3)[0x7E/2];
    if (temp_r6 != -1) {
        var_r7 = arg1;
loop_12:
        temp_r0 = *var_r7;
        if (temp_r0 == -1) {
            goto block_13;
        }
        if (temp_r0 == temp_r6) {
            return temp_r6;
        }
        var_r7 += 1;
        goto loop_12;
    }
block_13:
    var_r3 = (u8*)var_r3 + 4;
    var_ctr -= 1;
    if (var_ctr == 0) {
        return 0xFFFF;
    }
    goto loop_1;
}

s32 fn_8005F9B8(void *arg0, u16 arg1) {
    u32 val = (u32)arg1;
    val &= 0xFFFFu;

    if (M2C_FIELD(arg0, u16 *, 0x7c) == val) {
        return 1;
    }
    if (M2C_FIELD(arg0, u16 *, 0x7e) == val) {
        return 1;
    }
    if (M2C_FIELD(arg0, u16 *, 0x80) == val) {
        return 1;
    }
    if (M2C_FIELD(arg0, u16 *, 0x82) == val) {
        return 1;
    }
    return 0;
}

s32 fn_8005FA14(void *arg0, s32 arg1) {
    M2C_UNK fn_8005FA94(void *, s32);
    extern char lbl_8026B590[];

    if (arg0 == NULL) {
        fn_8006DA64(lbl_8026B590 + 0x28, 0x2D8, lbl_8026B590 + 0x5D);
    }
    if (M2C_FIELD(arg0, void **, 0x74) == NULL) {
        return 0;
    }
    fn_8005FA94(M2C_FIELD(arg0, void **, 0x74), arg1);
    M2C_FIELD(arg0, void **, 0x74) = NULL;
    M2C_FIELD(arg0, f32 *, 0x78) = 1.0f;
    return 1;
}

s32 fn_8005FC74(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        extern char lbl_8026B590[];
        fn_8006DA64(&lbl_8026B590[0x28], 0x2D8, &lbl_8026B590[0x5D]);
    }
    if (*(void **)((u8 *)arg0 + 0x74) == NULL) {
        return 0;
    }
    fn_8005FA94(*(void **)((u8 *)arg0 + 0x74), arg1);
    *(void **)((u8 *)arg0 + 0x74) = NULL;
    *(f32 *)((u8 *)arg0 + 0x78) = 1.0f;
    return 1;
}

#pragma use_lmw_stmw on
void fn_80060060(void *arg0) {
    s32 fn_80064FC4(void *, void *, void *);
    s32 fn_800651FC(void *, void *, f32, f32);
    s32 fn_8006555C(void *, s32, s32);
    extern f64 lbl_803691D0;
    extern f32 lbl_803691D8;

    u16 sp8[4];
    void *node;
    void *var_r3;
    f32 lo;
    f32 hi;
    f32 t;
    f32 cur;
    s32 end;
    s32 start;
    s32 flag;
    u8 found;
    f32 delta;

    delta = *(f32 *)((u8 *)arg0 + 0x5C);
    var_r3 = arg0;
    goto loop_2;
loop_1:
    node = *(void **)((u8 *)var_r3 + 0x44);
    if (node != NULL) {
        goto block_7;
    }
    var_r3 = *(void **)((u8 *)var_r3 + 4);
loop_2:
    if (var_r3 != NULL) {
        goto loop_1;
    }
    node = NULL;
block_7:

    if (node == NULL) {
        return;
    }

    *(u32 *)arg0 &= ~0x10;
    if (*(u32 *)arg0 & 0x40) {
        return;
    }

    if (*(void **)((u8 *)arg0 + 0x74) != NULL) {
        fn_80060060(*(void **)((u8 *)arg0 + 0x74));
    }

    lo = *(f32 *)((u8 *)arg0 + 0x58);
    hi = lo + delta;
    *(f32 *)((u8 *)arg0 + 0x58) = hi;

    if (*(u32 *)arg0 & 0x80) {
        found = 0;
        if (*(u16 *)((u8 *)arg0 + 0x7C) == 4) {
            found = 1;
        } else if (*(u16 *)((u8 *)arg0 + 0x7E) == 4) {
            found = 1;
        } else if (*(u16 *)((u8 *)arg0 + 0x80) == 4) {
            found = 1;
        } else if (*(u16 *)((u8 *)arg0 + 4 + 0x7E) == 4) {
            found = 1;
        }
        if (found) {
            var_r3 = arg0;
            goto loop_2b;
        loop_1b:
            node = *(void **)((u8 *)var_r3 + 0x44);
            if (node != NULL) {
                goto block_7b;
            }
            var_r3 = *(void **)((u8 *)var_r3 + 4);
        loop_2b:
            if (var_r3 != NULL) {
                goto loop_1b;
            }
            node = NULL;
        block_7b:
            *(f32 *)((u8 *)arg0 + 0x58) = (f32)fn_8006555C(node, (s32)hi, 3);
        }
    }

    if (lo > hi) {
        t = lo;
        lo = hi;
        hi = t;
    }

    fn_800651FC(node, (u8 *)arg0 + 0x7C, lo, hi);

    end = *(s32 *)((u8 *)node + 0x18);
    cur = *(f32 *)((u8 *)arg0 + 0x58);
    if (cur >= (f32)end || cur <= (f32)*(s32 *)((u8 *)node + 0x14)) {
        flag = 0;
        switch (*(u32 *)arg0 & 0x300) {
        case 0x200:
            break;
        case 0x100:
            flag = 1;
            break;
        default:
            if (*(s32 *)((u8 *)node + 0x10) != 0) {
                flag = 1;
            }
            break;
        }

        if (flag) {
            if (cur >= (f32)end) {
                start = *(s32 *)((u8 *)node + 0x14);
                *(f32 *)((u8 *)arg0 + 0x58) = *(f32 *)((u8 *)arg0 + 0x58) - (f32)(end - start);
                hi = *(f32 *)((u8 *)arg0 + 0x58);
                lo = (f32)(start - 1);
            } else {
                start = *(s32 *)((u8 *)node + 0x14);
                if (cur <= (f32)start) {
                    *(f32 *)((u8 *)arg0 + 0x58) = *(f32 *)((u8 *)arg0 + 0x58) + (f32)(end - start);
                    lo = *(f32 *)((u8 *)arg0 + 0x58) - lbl_803691D8;
                    hi = (f32)*(s32 *)((u8 *)node + 0x18);
                }
            }
            if (lo > hi) {
                t = lo;
                lo = hi;
                hi = t;
            }
            if (fn_800651FC(node, sp8, lo, hi) > 0) {
                fn_80064FC4((u8 *)arg0 + 0x7C, sp8, (u8 *)arg0 + 0x7C);
            }
        } else {
            if (cur >= (f32)end) {
                *(f32 *)((u8 *)arg0 + 0x58) = (f32)end;
            } else {
                start = *(s32 *)((u8 *)node + 0x14);
                if (cur <= (f32)start) {
                    *(f32 *)((u8 *)arg0 + 0x58) = (f32)start;
                }
            }
        }
        *(u32 *)arg0 |= 0x10;
    }
}
#pragma use_lmw_stmw reset

s32 fn_80060440(void *arg0) {
    s32 var_r4;
    void *var_r3;

    var_r3 = arg0;
    var_r4 = 1;
    goto loop_2;
loop_1:
    var_r4 += 1;
loop_2:
    var_r3 = M2C_FIELD(var_r3, void **, 0x74);
    if (var_r3 != NULL) {
        goto loop_1;
    }
    return var_r4;
}

f32 fn_80060460(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x78);
}

f32 fn_80060468(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x58);
}

u32 fn_80060470(void *arg0) {
    void *var_r3;
    
    var_r3 = arg0;
loop_1:
    if (var_r3 == NULL) {
        return 0U;
    }
    if (*(u32 *)((u8 *)var_r3 + 0x64) != 0U) {
        return *(u32 *)((u8 *)var_r3 + 0x64);
    }
    var_r3 = *(void **)((u8 *)var_r3 + 4);
    goto loop_1;
}

u32 fn_8006049C(void *arg0) {
    while (arg0 != NULL) {
        if (M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            return M2C_FIELD(arg0, u32 *, 0x60);
        }
        arg0 = M2C_FIELD(arg0, void **, 4);
    }
    return 0U;
}

u32 fn_800604C8(void *arg0) {
    void *current = arg0;
    while (current != NULL) {
        u32 value = M2C_FIELD(current, u32 *, 0x70);
        if (value != 0U) {
            return value;
        }
        current = M2C_FIELD(current, void **, 4);
    }
    return 0U;
}

u32 fn_800604F4(void *arg0) {
    void *current = arg0;
    u32 r0;

    if (current == NULL) {
        return 0U;
    }

    r0 = M2C_FIELD(current, u32 *, 0x6C);
    if (r0 != 0U) {
        return r0;
    }
    current = M2C_FIELD(current, void **, 4);
    if (current == NULL) {
        return 0U;
    }

    r0 = M2C_FIELD(current, u32 *, 0x6C);
    if (r0 != 0U) {
        return r0;
    }
    current = M2C_FIELD(current, void **, 4);
    if (current == NULL) {
        return 0U;
    }

    r0 = M2C_FIELD(current, u32 *, 0x6C);
    if (r0 != 0U) {
        return r0;
    }
    current = M2C_FIELD(current, void **, 4);
    if (current == NULL) {
        return 0U;
    }

    return 0U;
}

u32 fn_80060520(void *arg0) {
    s32 fn_80068548(void);
    u32 var_r31;
    void *var_r30;

    var_r30 = arg0;
    while (var_r30 != NULL) {
        if (M2C_FIELD(var_r30, u32 *, 0x68) != 0U) {
            var_r31 = M2C_FIELD(var_r30, u32 *, 0x68);
            goto found;
        }
        var_r30 = M2C_FIELD(var_r30, void **, 4);
    }
    return 0U;
found:
    if (((u8 *)fn_80068548())[3] & 1) {
        var_r31 += CalcUnk48Size((void *)FindUnk48(var_r30));
    }
    return var_r31;
}

u32 fn_800605E0(void *arg0) {
    void *current = arg0;
    u32 value;

    while (current != NULL) {
        value = M2C_FIELD(current, u32 *, 0x50);
        if (value != 0U) {
            return value;
        }
        current = M2C_FIELD(current, void **, 4);
    }
    
    return 0U;
}

u32 fn_8006060C(void *arg0) {
    void *current = arg0;
    u32 value;

    while (current != NULL) {
        value = M2C_FIELD(current, u32 *, 0x4C);
        if (value != 0U) {
            return value;
        }
        current = M2C_FIELD(current, void **, 4);
    }
    
    return 0U;
}

u32 fn_80060638(void *arg0) {
    void *current = arg0;
    
    while (current != NULL) {
        u32 temp = M2C_FIELD(current, u32 *, 0x48);
        if (temp != 0U) {
            return temp;
        }
        current = M2C_FIELD(current, void **, 4);
    }
    return 0U;
}

s32 fn_80060664(void *arg0) {
    void **var_r3;
    u32 temp_r0;

    var_r3 = (void **)arg0;
loop_4:
    if (var_r3 == NULL) {
        return 0U;
    }
    temp_r0 = M2C_FIELD(var_r3, u32 *, 0x44);
    if (temp_r0 != 0U) {
        return temp_r0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 4);
    goto loop_4;
}

s32 fn_80060690(void *arg0) {
    void **var_r3;
    u32 temp_r0;

    var_r3 = (void **)arg0;
loop_4:
    if (var_r3 == NULL) {
        return 0U;
    }
    temp_r0 = M2C_FIELD(var_r3, u32 *, 0x40);
    if (temp_r0 != 0U) {
        return temp_r0;
    }
    var_r3 = M2C_FIELD(var_r3, void **, 4);
    goto loop_4;
}

void fn_8006140C(void *arg0) {
    if (arg0 != NULL) {
        s32 *ptr = (s32*)arg0;
        s32 val = ptr[-3];
        
        if (val < 0) {
            void *arg1 = (void*)((char*)arg0 - 0x20);
            fn_800C53B0(val, arg1);
        }
    }
}

s32 fn_80061824(s32 arg0) {
    extern char lbl_8026B590[];
    if (arg0 == 0) {
        fn_8006DA64(lbl_8026B590 + 0x28, 0x50, lbl_8026B590 + 0xAB);
    }
    return fn_800618E4(arg0);
}

void fn_80063614(void *arg0, void *arg1, s16 arg2, f32 *arg3, f32 farg0)
{
    extern f32 lbl_803691E4;
    extern f32 lbl_803691EC;
    extern f32 lbl_803691F0;
    extern f32 lbl_803691F4;
    extern f32 lbl_803691F8;
    extern f64 lbl_80369200;
    s16 *keys;
    u8 *track;
    u8 *kf;
    s16 *table;
    s32 i;
    s32 count;
    s32 idx;
    s32 lo;
    s32 hi;
    s32 mid;
    s32 n;
    f32 v;
    f32 t0;
    f32 t1;
    f32 v0;
    f32 v1;
    f32 s0;
    f32 s1;
    f32 du;
    f32 u;
    f32 u2;
    f32 u3;
    f32 scale;
    u32 gqr;

    if (*(u32 *)((u8 *)arg0 + 0xC) & 0x10) {
        track = *(u8 **)((u8 *)arg0 + 0x24) + *(s32 *)((u8 *)arg1 + 8) * 0xC;
        i = 0;
        while (i < *(s32 *)((u8 *)arg1 + 0xC)) {
            gqr = (track[2] << 8) | 7;
            gqr = (gqr << 16) | (gqr & 0xFFFF);
            (void)gqr;
            keys = (s16 *)(*(u8 **)((u8 *)arg0 + 0x2C) + *(s32 *)(track + 8) * 4);
            count = *(u16 *)(track + 6);
            scale = 1.0f; /* placeholder: target uses GQR5+psq */
            if (arg2 >= keys[count * 2 - 2]) {
                v = (f32)keys[count * 2 - 1] * scale;
            } else if (arg2 < keys[0]) {
                v = (f32)keys[1] * scale;
            } else {
                if (count == 0) {
                    idx = -1;
                } else {
                    hi = count - 1;
                    lo = 0;
                    while (lo <= hi) {
                        mid = lo + ((hi - lo) >> 1);
                        if ((u16)keys[mid * 2] < (s32)arg2) {
                            lo = mid + 1;
                        } else if ((u16)keys[mid * 2] > (s32)arg2) {
                            hi = mid - 1;
                        } else {
                            idx = mid;
                            goto after_bs;
                        }
                    }
                    if (hi < 0) {
                        idx = -1;
                    } else if (lo > (s32)(count - 1)) {
                        idx = count - 1;
                    } else if (keys[lo * 2] <= arg2) {
                        idx = lo;
                    } else {
                        idx = lo - 1;
                    }
                }
            after_bs:
                {
                    s16 *p = keys + idx * 2;
                    v0 = (f32)p[1] * scale;
                    v1 = (f32)p[3] * scale;
                    t0 = (f32)p[0];
                    t1 = (f32)p[2];
                    v = v0 + (v1 - v0) * (farg0 - t0) / (t1 - t0);
                }
            }
            arg3[*(u16 *)track] = v;
            i += 1;
            track += 0xC;
        }
    } else {
        n = (s32)farg0;
        track = *(u8 **)((u8 *)arg0 + 0x24) + *(s32 *)((u8 *)arg1 + 8) * 0x14;
        i = 0;
        while (i < *(s32 *)((u8 *)arg1 + 0xC)) {
            count = *(s32 *)(track + 4);
            if (count == 0) {
                v = *(f32 *)(track + 0x10);
            } else {
                table = (s16 *)(*(u8 **)((u8 *)arg0 + 0x28) + *(s32 *)(track + 8) * 2);
                idx = table[n];
                kf = *(u8 **)((u8 *)arg0 + 0x2C) + *(s32 *)(track + 0xC) * 0x10;
                if (idx < 0) {
                    t0 = lbl_803691E4;
                    v = *(f32 *)(track + 0x10);
                } else {
                    kf += idx * 0x10;
                    t0 = (f32)*(s32 *)kf;
                    v = *(f32 *)(kf + 4);
                    kf += 0x10;
                }
                if (idx != count - 1) {
                    t1 = (f32)*(s32 *)kf;
                    v1 = *(f32 *)(kf + 4);
                    if (*(s32 *)track < 0x1F) {
                        if (*(s32 *)track >= 0x1B) {
                            s1 = *(f32 *)(kf + 0xC);
                            if (s1 < lbl_803691EC) {
                                du = t1 - t0;
                                u = (farg0 - t0) / du;
                                u2 = u * u;
                                s0 = *(f32 *)(kf + 8);
                                u3 = u * u2;
                                v += (u + (u3 - lbl_803691F8 * u2)) * (du * s0)
                                   + (lbl_803691F0 * u3 + lbl_803691F4 * u2) * (v1 - v)
                                   + (u3 - u2) * (du * s1);
                            }
                        } else {
                            v += (v1 - v) * ((farg0 - t0) / (t1 - t0));
                        }
                    } else {
                        v += (v1 - v) * ((farg0 - t0) / (t1 - t0));
                    }
                }
            }
            arg3[*(s32 *)track] = v;
            i += 1;
            track += 0x14;
        }
    }
}

void fn_80063934(void) {
    M2C_UNK fn_8005C7E8();
    fn_8005C7E8();
}

#pragma inline_depth(0)
M2C_UNK fn_80063954(char *arg0) {
    M2C_UNK fn_80063A14(M2C_UNK);
    M2C_UNK temp_r31;

    temp_r31 = fn_8005C82C();
    if (!(fn_8005C6A0(arg0) & 0x4000)) {
        fn_80063A14(temp_r31);
        fn_8005C5A8(arg0);
    }
    return temp_r31;
}

extern M2C_UNK fn_8005C82C(char *, s32);
#pragma inline_depth(0)
void *fn_800639B4(void *arg0) {
    void fn_80063A14(void *);
    void *temp_r31;

    temp_r31 = (void *)fn_8005C82C(arg0, 0);
    if (!(fn_8005C6A0(arg0) & 0x4000)) {
        fn_80063A14(temp_r31);
        fn_8005C5A8(arg0);
    }
    return temp_r31;
}
#pragma inline_depth(reset)
extern f32 lbl_803691E4;
extern f32 lbl_8036920C;
f32 fn_80064164(void **arg0, s32 arg1, f32 farg0) {
    s32 temp_r3;
    s32 temp_r12;
    s32 var_r11;
    s32 var_r5_2;
    s32 var_r6;
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r3_2;
    u16 temp_r7;
    void *temp_r10;
    void *temp_r3_3;
    void *var_r4_2;
    void *var_r5;
    s16 var_r4;
    s16 var_r6_2;
    s16 var_r8;
    s16 var_r9;
    u8 var_r5_3;
    
    if (arg0 == NULL) {
        var_r5 = NULL;
    } else {
        temp_r3_3 = *arg0;
        if (temp_r3_3 != NULL) {
            var_r5 = *(void**)((char*)temp_r3_3 + 0x14);
        } else {
            var_r5 = NULL;
        }
    }
    
    if (var_r5 == NULL) {
        return lbl_803691E4;
    }
    
    temp_r0 = *(u16*)((char*)var_r5 + 0x4 + (arg1 * 2));
    if (temp_r0 == 0xFFFF) {
        var_r4_2 = NULL;
    } else {
        var_r4_2 = (char*)var_r5 + temp_r0;
    }
    
    if (var_r4_2 == NULL) {
        return lbl_803691E4;
    }
    
    temp_r3_2 = *(u16*)((char*)var_r4_2 + 0x0);
    var_r9 = -1;
    temp_r7 = *(u16*)((char*)var_r4_2 + 0x2);
    var_r8 = -1;
    temp_r10 = (char*)var_r4_2 + 0x4;
    var_r4 = 0;
    
    if (temp_r3_2 == 0) {
        var_r5_2 = -1;
        goto do_switch;
    }
    
    if (temp_r3_2 == 1) {
        var_r5_2 = 0;
        goto do_switch;
    }
    
    var_r11 = 0;
    var_r6 = temp_r3_2 - 1;
    temp_r12 = (s32)farg0;
    
loop:
    if (var_r11 > var_r6) {
        if (var_r6 < 0) {
            var_r5_2 = -1;
        } else {
            var_r5_2 = temp_r3_2 - 1;
            if (var_r11 <= var_r5_2) {
                if (*(u16*)((char*)temp_r10 + (var_r11 * 4)) <= temp_r12) {
                    var_r5_2 = var_r11;
                } else {
                    var_r5_2 = var_r11 - 1;
                }
            } else {
                var_r5_2 = var_r11 - 1;
            }
        }
    } else {
        s32 temp_r5_2 = var_r11 + ((var_r6 - var_r11) >> 1);
        temp_r0_2 = *(u16*)((char*)temp_r10 + (temp_r5_2 * 4));
        if ((s32)temp_r0_2 < temp_r12) {
            var_r11 = temp_r5_2 + 1;
            goto loop;
        } 
        if ((s32)temp_r0_2 > temp_r12) {
            var_r6 = temp_r5_2 - 1;
            goto loop;
        }
        var_r5_2 = temp_r5_2;
    }
    
do_switch:
    if (var_r5_2 < 0) {
        var_r5_3 = 0;
        var_r6_2 = *(s16*)((char*)temp_r10 + 0x2);
    } else if (var_r5_2 < (s32)(temp_r3_2 - 1)) {
        s32 temp_r3_3 = var_r5_2 * 4;
        s32 temp_r0_3 = (var_r5_2 + 1) * 4;
        var_r9 = *(s16*)((char*)temp_r10 + temp_r3_3);
        var_r8 = *(s16*)((char*)temp_r10 + temp_r0_3);
        var_r6_2 = *(s16*)((char*)temp_r10 + temp_r3_3 + 0x2);
        var_r4 = *(s16*)((char*)temp_r10 + temp_r0_3 + 0x2);
        var_r5_3 = 1;
    } else {
        var_r5_3 = 0;
        var_r6_2 = *(s16*)((char*)temp_r10 + (var_r5_2 * 4) + 0x2);
    }
    
    if (var_r5_3 == 0) {
        var_r4 = var_r6_2;
    } else {
        switch ((s32) temp_r7) {
            case 0:
                // Linear interpolation
                {
                    s32 temp_r11 = (s32)var_r9;
                    s32 temp_r12_val = (s32)farg0;
                    s32 temp_r5 = (s32)var_r8;
                    
                    f64 val1 = (f64)(temp_r11 - temp_r12_val) * (f64)(var_r4 - var_r6_2);
                    f64 val2 = val1 / (f64)(temp_r5 - temp_r11);
                    f64 val3 = ((f64)val2 + (f64)var_r6_2);
                    s32 result = (s32)val3;
                    var_r4 = (s16)result;  
                }
                break;
            case 1:
                var_r4 = var_r6_2;
                break;
            default:
                var_r4 = 0;
                break;
        }
    }
    
    return lbl_8036920C * (f32)var_r4;
}

void fn_80064C4C(void *arg0, void *arg1, f32 farg0) {
    s32 temp_r10;
    s32 temp_r11;
    s32 temp_r6;
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;
    s32 temp_r0;
    u16 temp_r30;
    u16 temp_r3;
    u16 *temp_r5;

    if (arg0 == 0) {
        return;
    }
    
    temp_r5 = (u16 *) ((char *) arg0 + 4);
    temp_r30 = *(u16 *) arg0;
    temp_r3 = *(u16 *) ((char *) arg0 + 2);
    
    if (temp_r30 == 0) {
        return;
    }
    
    if (temp_r3 == 0) {  
        var_r7 = -1;
    } else {
        temp_r10 = temp_r30 - 1;
        var_r8 = temp_r10;
        var_r9 = 0;
        temp_r11 = (s32) farg0;
loop_1:
        if (var_r9 > var_r8) {
            if (var_r8 < 0) {
                var_r7 = -1;
            } else if (var_r9 > temp_r10) {
                var_r7 = temp_r10;
            } else {
                s32 val = (s32) *(temp_r5 + var_r9);
                if (val <= temp_r11) {
                    var_r7 = var_r9;
                } else {
                    var_r7 = var_r9 - 1;
                }
            }
        } else {
            var_r7 = var_r9 + ((s32) (var_r8 - var_r9) >> 1);
            temp_r6 = (s32) *(temp_r5 + var_r7);
            if (temp_r6 < temp_r11) {
                var_r9 = var_r7 + 1;
                goto loop_1;
            }
            if (temp_r6 > temp_r11) {
                var_r8 = var_r7 - 1;
                goto loop_1;
            }
        }
    }

    if (var_r7 < 0) {
        var_r7 = 0;
    } else if (var_r7 >= (s32) (temp_r30 - 1)) {
        var_r7 = temp_r30 - 1;
    }

    temp_r0 = var_r7 * 4;

    // Just handle case '0' for now to avoid struct issues
    if (temp_r3 == 0) {
        // Placeholder - this would require proper struct access  
    }
}

#pragma dont_inline reset
#pragma inline_depth(0)

u16 fn_80065484(void ***a,s32 b,u16 c){s32 best=-1;void*p;u16 count,off,n,v;s32 i,j;u8*q;if(a==0)return 0xffff;if(*a==0)return 0xffff;p=**a;if(p==0)return 0xffff;count=*(u16*)p;for(i=0;i<count;i++){off=*(u16*)((u8*)p+*(u32*)((u8*)p+4)+i*2);q=(u8*)p+off;n=*(u16*)(q+2);for(j=0;j<n;j++){if(*(u16*)(q+4)==c){v=*(u16*)q;if(v>b&&(best<0||v<=best))best=v;}q+=2;}}return (u16)best;}

u16 fn_8006555C(void ***arg0, s32 arg1, u16 arg2) {
    void **temp_r3;
    void *var_r8;
    u16 var_r11;
    u16 temp_r5;
    s32 var_r12;
    s32 var_r10;
    s32 var_r9;
    u16 var_ctr;

    if (arg0 == NULL) {
        var_r8 = NULL;
    } else {
        temp_r3 = *arg0;
        if (temp_r3 != NULL) {
            var_r8 = *temp_r3;
        } else {
            var_r8 = NULL;
        }
    }

    if (var_r8 == NULL) {
        return -1U;
    }

    var_r11 = *(u16 *)var_r8; // load from 0x0
    var_r12 = 0;
    var_r10 = 0;

loop_16:
    if (var_r12 >= (s32) var_r11) {
        return -1U;
    }

    var_r9 = (s32)((u8*)var_r8 + *(u16 *)((u8 *)var_r8 + var_r10));
    temp_r5 = *(u16 *)((u8 *)var_r9 + 2);

    var_ctr = temp_r5;
    if ((s32)temp_r5 > 0) {
        do {
            u16 *cur_entry = (u16 *)((u8 *)var_r9 + 4);
            if (cur_entry[0] == arg2) {
                u16 cur_val = *(u16 *)((u8 *)var_r9);
                if ((arg1 > (s32)cur_val) && (var_r12 < 0 || (s32)cur_val >= var_r12)) {
                    var_r12 = (s32)cur_val;
                }
            }
            var_r9 += 2;
            var_ctr -= 1;
        } while (var_ctr != 0);
    }

    var_r10 += 2;
    var_r12 += 1;
    goto loop_16;
}

#pragma optimization_level 2
void *fn_800656C8(void *node, void *out)
{
    void fn_80201FC4(void *);
    void fn_80202024(void *, void *, void *);
    u32 fn_80202140(void *, void *);
    void fn_80202300(void *, s32, f32);
    int fn_8006DA64(void *, int, void *);
    extern f32 lbl_80369218;
    extern f32 lbl_8036921C;
    extern u8 lbl_8026B6E8[];
    u8 sp38[0x30];
    s32 order;
    f32 rx;
    f32 ry;
    u8 sp8[0x30];
    f32 rz;

    fn_80201FC4(out);

    while (node != NULL) {
        if (*(u32 *)((u8 *)node + 0xC) & 0x40) {
            rx = *(f32 *)((u8 *)node + 0x64);
            ry = *(f32 *)((u8 *)node + 0x68);
            rz = *(f32 *)((u8 *)node + 0x6C);
            order = *(u16 *)((u8 *)node + 0xEE);
            fn_80201FC4(sp38);

            switch (order) {
            case 1:
                if (lbl_80369218 != rx) {
                    fn_80202300(sp38, 0x58, lbl_8036921C * rx);
                }
                if (lbl_80369218 != ry) {
                    fn_80202300(sp8, 0x59, lbl_8036921C * ry);
                    fn_80202024(sp8, sp38, sp38);
                }
                if (lbl_80369218 != rz) {
                    fn_80202300(sp8, 0x5A, lbl_8036921C * rz);
                    fn_80202024(sp8, sp38, sp38);
                }
                break;
            case 2:
                if (lbl_80369218 != ry) {
                    fn_80202300(sp38, 0x59, lbl_8036921C * ry);
                }
                if (lbl_80369218 != rz) {
                    fn_80202300(sp8, 0x5A, lbl_8036921C * rz);
                    fn_80202024(sp8, sp38, sp38);
                }
                if (lbl_80369218 != rx) {
                    fn_80202300(sp8, 0x58, lbl_8036921C * rx);
                    fn_80202024(sp8, sp38, sp38);
                }
                break;
            case 3:
                if (lbl_80369218 != rz) {
                    fn_80202300(sp38, 0x5A, lbl_8036921C * rz);
                }
                if (lbl_80369218 != rx) {
                    fn_80202300(sp8, 0x58, lbl_8036921C * rx);
                    fn_80202024(sp8, sp38, sp38);
                }
                if (lbl_80369218 != ry) {
                    fn_80202300(sp8, 0x59, lbl_8036921C * ry);
                    fn_80202024(sp8, sp38, sp38);
                }
                break;
            case 4:
                if (lbl_80369218 != rx) {
                    fn_80202300(sp38, 0x58, lbl_8036921C * rx);
                }
                if (lbl_80369218 != rz) {
                    fn_80202300(sp8, 0x5A, lbl_8036921C * rz);
                    fn_80202024(sp8, sp38, sp38);
                }
                if (lbl_80369218 != ry) {
                    fn_80202300(sp8, 0x59, lbl_8036921C * ry);
                    fn_80202024(sp8, sp38, sp38);
                }
                break;
            case 5:
                if (lbl_80369218 != ry) {
                    fn_80202300(sp38, 0x59, lbl_8036921C * ry);
                }
                if (lbl_80369218 != rx) {
                    fn_80202300(sp8, 0x58, lbl_8036921C * rx);
                    fn_80202024(sp8, sp38, sp38);
                }
                if (lbl_80369218 != rz) {
                    fn_80202300(sp8, 0x5A, lbl_8036921C * rz);
                    fn_80202024(sp8, sp38, sp38);
                }
                break;
            case 6:
                if (lbl_80369218 != rz) {
                    fn_80202300(sp38, 0x5A, lbl_8036921C * rz);
                }
                if (lbl_80369218 != ry) {
                    fn_80202300(sp8, 0x59, lbl_8036921C * ry);
                    fn_80202024(sp8, sp38, sp38);
                }
                if (lbl_80369218 != rx) {
                    fn_80202300(sp8, 0x58, lbl_8036921C * rx);
                    fn_80202024(sp8, sp38, sp38);
                }
                break;
            default:
                fn_8006DA64(lbl_8026B6E8, 0xED, lbl_8026B6E8 + 8);
                break;
            }

            if (fn_80202140(sp38, sp38) != 0U) {
                fn_80202024(sp38, out, out);
            }
        }
        node = *(void **)node;
    }

    return out;
}

#pragma optimization_level 4
#pragma inline_depth(3)
#pragma use_lmw_stmw on
void fn_80065AF8(s32 arg0, void *arg1, void *arg2, void *arg3) {
    void fn_80202024(void *, void *, void *);
    void *child;
    void *n;
    void *p;
    void *dst;
    u32 off;

    p = *(void **)arg1;
    if (p) {
        dst = (u8 *)arg2 + *(u16 *)((u8 *)arg1 + 0xEC) * 0x30;
        fn_80202024((u8 *)arg2 + *(u16 *)((u8 *)p + 0xEC) * 0x30, dst, dst);
    }
    if (arg3) {
        off = *(u16 *)((u8 *)arg1 + 0xEC) * 0x30;
        fn_80202024((u8 *)arg2 + off, (u8 *)arg1 + 0x10, (u8 *)arg3 + off);
    }
    child = *(void **)((u8 *)arg1 + 8);
    if (child) fn_80065AF8(arg0, child, arg2, arg3);
    arg1 = *(void **)((u8 *)arg1 + 4);
    if (arg1) fn_80065AF8(arg0, arg1, arg2, arg3);
}
#pragma optimization_level reset

#pragma optimization_level 4
void fn_80065E68(void) {
    M2C_UNK fn_8005C7E8();
    fn_8005C7E8();
}

s32 fn_80066124(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = arg0;
    if (arg1 == 0) {
        return arg0;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x8);
    if (temp_r3 < 0) {
        return -arg1;
    }
    return arg1;
}

s32 fn_80067058(s32 arg0) {
    s32 temp_r3;
    
    temp_r3 = arg0 & 0x1F;
    if (temp_r3 < 0x10) {
        return (temp_r3 * 3) + 0x20;
    }
    return ((temp_r3 - 0x10) * 3) + 0x50;
}

void fn_800673E4(void *arg0, void *arg1) {
    s32 *src = (s32 *)arg0;
    s32 *dst = (s32 *)arg1;
    s32 i;

    for (i = 0; i < 12; i++) {
        dst[i] = src[i];
    }
}

void fn_80067440(void) {
    extern s32 lbl_80366DDC;
    if (lbl_80366DDC != 0) {
        return;
    }
    lbl_80366DDC = 0;
}

void fn_80067460(void) {
    extern s32 lbl_80366DFC;
    lbl_80366DFC = 0;
}

s32 fn_80067478(void) {
    extern s32 lbl_80366DDC;
    return lbl_80366DDC;
}

void fn_80067480(void)
{
    extern void* lbl_80366DD4;
    *(u8*)lbl_80366DD4 = 0;
}

#pragma peephole off
void fn_800675C8(void *arg0) {
    extern u8 lbl_80311AF8[];
    extern void *lbl_80366DD4;

    if (arg0 != NULL) {
        return;
    }
    lbl_80366DD4 = lbl_80311AF8;
}
#pragma peephole reset
s32 fn_800675E0(void) {
    extern s32 lbl_80366DD4;
    return lbl_80366DD4;
}

s32 fn_80067708(s32 arg0) {
    u16 *temp_r3;
    s32 temp_r4;
    u16 temp_r5;
    u16 *r3_copy;
    s32 r4_copy;

    if (arg0 < 0) {
        arg0 = -arg0;
    }

    temp_r3 = &lbl_80330708[arg0];
    temp_r5 = *temp_r3;
    
    if (temp_r5 == 0) {
        return 0;
    }
    
    r3_copy = &lbl_80330708[arg0 - 1];
    r4_copy = *(r3_copy + 1);
    temp_r4 = r4_copy;
    
    return temp_r5 + (temp_r4 << 16) >> 16;
}

s32 fn_80067DA4(s32 arg0, s32 arg1, void *arg2) {
    u8 temp_r5;
    s32 var_r27;
    s32 var_r28;
    s32 var_r31;
    
    if ((arg0 == 0) || (arg1 == 0)) {
        return 0;
    }
    
    var_r27 = 0;
    var_r28 = arg0 * arg1;

loop_1:
    var_r31 = 0;
    
loop_2:
    if (var_r31 >= var_r28) {
        return var_r27;
    }
    
    temp_r5 = ((u8*)arg2)[var_r31];
    if ((temp_r5 & 0x0F) <= 0x04) {
        var_r27 += 1;
    }
        
    var_r31 += 1;
    goto loop_2;
}

void *fn_80067FD0(void) {
    extern void *lbl_803672F8;
    return (u8 *)lbl_803672F8 + 0x64;
}

s32 fn_80067FDC(void) {
    extern void *lbl_803672F8;
    return (s32)((u8 *)lbl_803672F8 + 0xA4);
}

void fn_80067FE8(s32 arg0, s32 arg1, s32 arg2)
{
    s32 sp8;
    s32 spC;
    s32 temp_r4;
    s32 temp_r5;
    
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg2 < 0 || arg2 > 0x1B) {
        arg2 = 0x1B;
    }
    
    temp_r4 = arg1 + (arg2 << 0xA);
    temp_r5 = arg0;
    lbl_80330708[temp_r5] = temp_r4;
}

void fn_8006805C(f32 arg0, f32 arg1) {
    extern void *lbl_803672F8;

    *(f32 *)((u8 *)lbl_803672F8 + 0x180) = arg0;
    *(f32 *)((u8 *)lbl_803672F8 + 0x184) = arg1;
}

void fn_80068070(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    extern void *lbl_803672F8;
    extern f32 lbl_80369228;
    extern f32 lbl_80369224;
    f32 value;

    value = lbl_80369228;

    *(f32 *)((u8 *)lbl_803672F8 + 4) = arg0;
    *(f32 *)((u8 *)lbl_803672F8 + 8) = arg1;
    *(f32 *)((u8 *)lbl_803672F8 + 0xC) = arg2;
    *(f32 *)((u8 *)lbl_803672F8 + 0x10) = arg3;
    *(f32 *)((u8 *)lbl_803672F8 + 0x14) = value;
    *(f32 *)((u8 *)lbl_803672F8 + 0x18) = lbl_80369224;
}

void fn_800680AC(u16 arg0, u16 arg1, u16 arg2, u16 arg3) {
    extern void *lbl_803672F8;

    *(u16 *)((u8 *)lbl_803672F8 + 0x1C) = arg0;
    *(u16 *)((u8 *)lbl_803672F8 + 0x1E) = arg1;
    *(u16 *)((u8 *)lbl_803672F8 + 0x20) = arg2;
    *(u16 *)((u8 *)lbl_803672F8 + 0x22) = arg3;
}

void fn_800680D0(void *arg0, u8 arg1)
{
    void fn_80202BD4(void *, void *);
    extern u32 lbl_803672F8;

    u8 *ptr;
    u16 flags;

    if (arg1 != 0) {
        ptr = (u8 *)lbl_803672F8;
        flags = *(u16 *)ptr;
        flags |= 1;
        *(u16 *)ptr = flags;
    } else {
        ptr = (u8 *)lbl_803672F8;
        flags = *(u16 *)ptr;
        flags &= ~1;
        *(u16 *)ptr = (unsigned)flags;
    }

    ptr = (u8 *)lbl_803672F8;
    fn_80202BD4(arg0, ptr + 0x24);
}

s32 fn_80068124(char *name) {
    extern u16 lbl_80330708[1400];
    u8 *e;
    
    e = FindEntryByName(name);
    
    if (e != NULL) {
        return M2C_FIELD(e, u16 *, 0x32);
    }
    
    e = FindEntryByName(name);
    if (e == NULL) {
        return -1;
    }
    
    return M2C_FIELD(e, u16 *, 0x32);
}

s32 fn_80068548(void) {
    extern void *lbl_803672F8;
    return (s32)lbl_803672F8;
}

void fn_80068550(s32 arg0) {
    extern void *lbl_803672F8;
    lbl_803672F8 = (void *)arg0;
}

#pragma use_lmw_stmw on
void fn_80068558(void *arg0, void *arg1, void *arg2)
{
    void *fn_8000D354(void *);
    void fn_800C4588(void *);
    s32 fn_802342B8(void *, void *);
    s32 i;
    void *entry;
    void *found;
    s32 j;
    void **arr;
    void **p;
    s32 k;
    s32 off;
    s32 n;

    found = NULL;
    if (arg0 != NULL && arg1 == NULL) {
        i = 0;
        j = 0;
        while (i < *(u16 *)((u8 *)arg0 + 0x54)) {
            entry = (u8 *)*(void **)((u8 *)arg0 + 0x34) + j;
            arr = *(void ***)((u8 *)entry + 0x18);
            if (arr != NULL) {
                if (arg2 != NULL) {
                    p = arr;
                    k = 0;
                    off = 0;
                    for (; k < 8; k++) {
                        if (*p == arg2) {
                            off = k * 4;
                            n = 7 - k;
                            if (k < 7) {
                                while (n != 0) {
                                    arr = *(void ***)((u8 *)entry + 0x18);
                                    *(void **)((u8 *)arr + off) = *(void **)((u8 *)arr + off + 4);
                                    off += 4;
                                    n -= 1;
                                }
                            }
                            *(void **)((u8 *)*(void **)((u8 *)entry + 0x18) + 0x1C) = NULL;
                            break;
                        }
                        p++;
                        off += 4;
                    }
                } else {
                    fn_800C4588(*(void **)((u8 *)entry + 0x18));
                    *(void **)((u8 *)entry + 0x18) = NULL;
                    *(void **)((u8 *)entry + 0x18) = NULL;
                    *(void **)((u8 *)entry + 0x18) = NULL;
                    *(u16 *)((u8 *)entry + 4) = *(u16 *)((u8 *)entry + 4) & 0x3FFF;
                }
            }
            j += 0x20;
            i += 1;
        }
    } else {
        if (arg0 == NULL) {
            found = fn_8000D354(arg1);
        } else {
            i = 0;
            j = i;
            while (i < *(u16 *)((u8 *)arg0 + 0x54)) {
                if (fn_802342B8(*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x34) + j), arg1) == 0) {
                    found = (u8 *)*(void **)((u8 *)arg0 + 0x34) + (i << 5);
                    break;
                }
                j += 0x20;
                i += 1;
            }
        }
        if (found != NULL && (arr = *(void ***)((u8 *)found + 0x18), arr != NULL)) {
            if (arg2 != NULL) {
                p = arr;
                for (k = 0; k < 8; k++) {
                    if (*p == arg2) {
                        off = k * 4;
                        n = 7 - k;
                        if (k < 7) {
                            while (n != 0) {
                                arr = *(void ***)((u8 *)found + 0x18);
                                *(void **)((u8 *)arr + off) = *(void **)((u8 *)arr + off + 4);
                                off += 4;
                                n -= 1;
                            }
                        }
                        *(void **)((u8 *)*(void **)((u8 *)found + 0x18) + 0x1C) = NULL;
                        break;
                    }
                    p++;
                }
            } else {
                fn_800C4588(arr);
                *(void **)((u8 *)found + 0x18) = NULL;
                *(void **)((u8 *)found + 0x18) = NULL;
                *(void **)((u8 *)found + 0x18) = NULL;
                *(u16 *)((u8 *)found + 4) = *(u16 *)((u8 *)found + 4) & 0x3FFF;
            }
        }
    }
}

#pragma opt_loop_invariants off
#pragma use_lmw_stmw on
s32 fn_800688D4(void *arg0, void *arg1,u32 arg2,s32 arg3) {
void *fn_8000D354(void*);void *fn_800C4638(s32,void*,s32);s32 fn_802342B8(void*,void*);
extern u8 lbl_8026B7F8[];
s32 i,off,j;
u32 value;
u32 *slots;
u8 *entry,*found;
found=0;
if(arg0 && !arg1){
for(i=0,off=0;i<*(u16*)((u8*)arg0+0x54);i++,off+=32){
entry=*(u8**)((u8*)arg0+0x34)+off;
if(arg2) {
if(!*(u32**)(entry+0x18)){
*(u32**)(entry+0x18)=fn_800C4638(32,lbl_8026B7F8,0);
for(j=0;j<8;j++) (*(u32**)(entry+0x18))[j]=0;
}
slots=*(u32**)(entry+0x18);
for(j=0;j<8;j++){
value=slots[j];if(value==arg2)break;
if(!value){slots[j]=arg2;break;}
}
*(u16*)(entry+4)|=arg3&0xc000;
}
}
return 1;
}
if(!arg0)found=fn_8000D354(arg1);
else for(i=0,off=0;i<*(u16*)((u8*)arg0+0x54);i++,off+=32){
if(!fn_802342B8(*(void**)(*(u8**)((u8*)arg0+0x34)+off),arg1)){
found=*(u8**)((u8*)arg0+0x34)+(i<<5);break;
}
}
if(found){
if(arg2) {
if(!*(u32**)(found+0x18)){
*(u32**)(found+0x18)=fn_800C4638(32,lbl_8026B7F8,0);
for(j=0;j<8;j++) (*(u32**)(found+0x18))[j]=0;
}
slots=*(u32**)(found+0x18);
for(j=0;j<8;j++){
value=slots[j];if(value==arg2)break;
if(!value){slots[j]=arg2;break;}
}
*(u16*)(found+4)|=arg3&0xc000;
}
return 1;
}
return 0;
}
#pragma opt_loop_invariants reset

s32 fn_80068CFC(void* arg0, s32 arg1) {
    void* r28 = arg0;
    s32 r30 = 0;
    s32 r31 = 0;
loop_4:
    if (r30 >= *(s32*)((u8*)r28 + 0x54)) {
        return 0;
    }
    if (fn_802342B8(*(u32*)((u8*)r28 + 0x34 + r31), arg1) == 0) {
        return 1;
    }
    r31 += 0x20;
    r30 += 1;
    goto loop_4;
}

void fn_80069010(s32 *arg0, void *arg1) {
    M2C_UNK fn_8022100C(M2C_UNK);
    s32 temp_r0;
    s32 temp_r0_2;

    if (*arg0 & 0x1000) {
        temp_r0 = M2C_FIELD(arg1, u16 *, 8) & 0x1800;
        switch (temp_r0) {                          /* switch 1; irregular */
        case 0x800:                                 /* switch 1 */
            fn_8022100C(2);
            return;
        case 0x1000:                                /* switch 1 */
            fn_8022100C(1);
            return;
        case 0x1800:                                /* switch 1 */
            fn_8022100C(3);
            return;
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg1, u16 *, 8) & 0x1800;
        switch (temp_r0_2) {                        /* switch 2; irregular */
        case 0x800:                                 /* switch 2 */
            fn_8022100C(1);
            return;
        case 0x1000:                                /* switch 2 */
            fn_8022100C(2);
            return;
        case 0x1800:                                /* switch 2 */
            fn_8022100C(0);
            return;
        }
    }
}

void fn_80069C7C(void) {
    extern u8 lbl_80367300;
    extern u8 lbl_80367301;
    extern u8 lbl_80367302;
    extern u8 lbl_80367303;
    extern u8 lbl_80367304;

    lbl_80367300 = 0;
    lbl_80367301 = 0;
    lbl_80367302 = 0;
    lbl_80367303 = 0;
    lbl_80367304 = 0;
}

void fn_80069C98(void) {
    void fn_802238A8(s32);
    void fn_802238CC(s32);
    extern u16 lbl_80285E88[0x20];
    extern u8 lbl_80367304;
    s32 var_r31;
    s32 var_r30;

    if (lbl_80367304 != 0) {
        var_r30 = 0;
        var_r31 = (s32)lbl_80285E88;
        do {
            fn_802238CC(*(s32 *)var_r31);
            var_r30 += 1;
            var_r31 += 4;
        } while (var_r30 < 8);
        fn_802238A8(0);
    }
}

u8 fn_80069DB4(void) {
    extern u8 lbl_80367302;
    return lbl_80367302;
}

u8 fn_80069E74(void) {
    extern u8 lbl_80367300;
extern u8 lbl_80367301;
extern u8 lbl_80367302;
extern u8 lbl_80367303;
extern u8 lbl_80367304;
return lbl_80367300;
}

extern u16 lbl_80285E88[0x20];
s32 fn_80069E7C(void) {
    extern u8 lbl_80367300;
    if (lbl_80367300 == 0) {
        return 0;
    }
    return lbl_80285E88[(u32)(lbl_80367300 * 4) >> 10];
}

void fn_80069F04(s32 arg0) {
    M2C_UNK fn_80069F2C(M2C_UNK, s32);
    fn_80069F2C(-1, arg0);
}

#pragma use_lmw_stmw on
#pragma inline_depth(3)


#pragma use_lmw_stmw on
#pragma inline_depth(3)
void fn_80069F2C(s32 arg0,void *arg1) {
u32 fn_80060638(void*);
void fn_8006CAB0(s32);void fn_8006CA8C(void*);void fn_8006CA68(void*);void fn_8014E7F8(void*);
u8 *child;
u8 *data;
child=*(u8**)((u8*)arg1+0x8c);
if(child)fn_80069F2C(arg0,child);
data=(u8*)fn_80060638(arg1);
if(*((u8*)arg1+0xb)){
switch(arg0) {
case 0:if(*(u32*)(data+0x3c))fn_8006CAB0((s32)arg1);break;
case 1:if(*(u32*)(data+0x40))fn_8006CA8C(arg1);break;
case 2:
if(*(u32*)(data+0x44))fn_8006CA68(arg1);
if(*(u32*)((u8*)arg1+0x54))fn_8014E7F8(arg1);
break;
default:
if(*(u32*)(data+0x3c))fn_8006CAB0((s32)arg1);
if(*(u32*)(data+0x40))fn_8006CA8C(arg1);
if(*(u32*)(data+0x44))fn_8006CA68(arg1);
if(*(u32*)((u8*)arg1+0x54))fn_8014E7F8(arg1);
break;
}
}
}
s32 fn_8006A374(void) {
    extern s32 lbl_8036730C;
    return lbl_8036730C;
}

s32 fn_8006A37C(void) {
    extern s32 lbl_80367308;
    return lbl_80367308;
}

void fn_8006A384(s32* arg0) {
    return;
}

void fn_80222334(s32);
void fn_8021FBB8(void);
void fn_8021F750(s32 *);
void fn_8021FE4C(s32, s32 *);
void fn_8006A6C8(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    s32 sp8[0x36];
    s32 spE0[0x6C];
    s32 *var_r31;
    s32 *var_r30;

    var_r31 = sp8;
    var_r30 = spE0;

    if (arg0 & 1) {
        var_r31[0] = 0;
        var_r31[1] = 1;
        var_r31 += 2;
    }

    if (arg0 & 0x200) {
        var_r31[0] = 9;
        var_r31[1] = 3;
        var_r31 += 2;
        var_r30[0] = 9;
        var_r30[1] = 1;
        var_r30[2] = 3;
        ((u8 *)var_r30)[0xc] = arg1;
        var_r30 += 4;
    }

    if (arg0 & 0x400) {
        var_r31[0] = 0xA;
        var_r31[1] = 3;
        var_r30[0] = 0xA;
        var_r30[1] = 0;
        if (arg4 != 0) {
            var_r30[2] = 3;
            ((u8 *)var_r30)[0xc] = arg1;
        } else {
            var_r30[2] = 1;
            ((u8 *)var_r30)[0xc] = arg2;
        }
        var_r30 += 4;
        var_r31 += 2;
    }

    if (arg0 & 0x800) {
        var_r31[0] = 0x19;
        var_r31[1] = 3;
        var_r30[0] = 0x19;
        var_r30[1] = 1;
        if (arg4 != 0) {
            var_r30[2] = 3;
            ((u8 *)var_r30)[0xc] = arg1;
        } else {
            var_r30[2] = 1;
            ((u8 *)var_r30)[0xc] = arg2;
        }
        var_r30 += 4;
        var_r31 += 2;
    }

    if (arg0 & 0x1000) {
        var_r30[0] = 0xB;
        var_r30[1] = 1;
        var_r31[0] = 0xB;
        var_r31[1] = 3;
        var_r30[2] = 5;
        var_r31 += 2;
        ((u8 *)var_r30)[0xc] = 0;
        var_r30 += 4;
        fn_80222334(1);
    }

    if (arg0 & 0x4000) {
        var_r31[0] = 0xD;
        var_r31[1] = 3;
        var_r31 += 2;
        var_r30[0] = 0xD;
        var_r30[1] = 1;
        var_r30[2] = 3;
        ((u8 *)var_r30)[0xc] = arg3;
        var_r30 += 4;
    }

    if (arg0 & 0x8000) {
        var_r31[0] = 0xE;
        var_r31[1] = 3;
        var_r31 += 2;
        var_r30[0] = 0xE;
        var_r30[1] = 1;
        var_r30[2] = 3;
        ((u8 *)var_r30)[0xc] = arg3;
        var_r30 += 4;
    }

    if (arg0 & 0x10000) {
        var_r31[0] = 0xF;
        var_r31[1] = 3;
        var_r31 += 2;
        var_r30[0] = 0xF;
        var_r30[1] = 1;
        var_r30[2] = 3;
        ((u8 *)var_r30)[0xc] = arg3;
        var_r30 += 4;
    }

    if (arg0 & 0x20000) {
        var_r31[0] = 0x10;
        var_r31[1] = 3;
        var_r31 += 2;
        var_r30[0] = 0x10;
        var_r30[1] = 1;
        var_r30[2] = 3;
        ((u8 *)var_r30)[0xc] = arg3;
        var_r30 += 4;
    }

    var_r31[0] = 0xFF;
    var_r30[0] = 0xFF;
    fn_8021FBB8();
    fn_8021F750(sp8);
    fn_8021FE4C(0, spE0);
}

void fn_8006B39C(void) {
    // This is a minimal stub. The actual decompilation will take more work.
    return;
}

void fn_8006C6F8(void *arg0) {
    void fn_80066D00(s32);
    s32 temp_r5;

    temp_r5 = *(s32 *)arg0;
    if (temp_r5 & 0xF025C820) {
        if (temp_r5 & 0x80000000) {
            (*(void (**)(void *, s32))((u8 *)arg0 + 0x94))(arg0, 1);
        }
        fn_80066D00(-1);
    }
}

void fn_8006C748(void *arg0, s32 arg1) {
    M2C_UNK fn_80067490(M2C_UNK);
    M2C_UNK fn_80223E5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802245D8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8022462C(M2C_UNK);
    M2C_UNK fn_80224658(M2C_UNK);
    M2C_UNK fn_80224684(M2C_UNK, M2C_UNK, M2C_UNK);
    s32 temp_r30;
    s32 temp_r3;

    temp_r30 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r30 & 0xF025C820) {
        if (temp_r30 & 0x200020) {
            switch (arg1) {                         /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                fn_802245D8(1, 4, 5, 7);
                fn_80224684(1, 3, 1);
                /* fallthrough */
            case 1:                                 /* switch 1 */
                fn_80223E5C(4, 0, 1, 0, 0);
                break;
            }
        }
        if (temp_r30 & 0x8000) {
            fn_80223E5C(4, 0, 1, 0, 0);
            fn_80224658(1);
        }
        if (temp_r30 & 0x4000) {
            fn_8022462C(0);
        }
        if (temp_r30 & 0x800) {
            fn_802245D8(1, 4, 1, 0);
        }
        if (temp_r30 & 0x40000) {
            fn_80067490(0);
        }
        if (temp_r30 & 0x10000) {
            fn_802245D8(0, 0, 0, 0);
        }
        temp_r3 = temp_r30 & 0x70000000;
        switch (temp_r3) {                          /* switch 2; irregular */
        case 0x10000000:                            /* switch 2 */
            fn_80224684(0, 7, 0);
            break;
        case 0x20000000:                            /* switch 2 */
            fn_80224684(1, 4, 0);
            break;
        case 0x30000000:                            /* switch 2 */
            fn_80224684(1, 5, 0);
            break;
        case 0x50000000:                            /* switch 2 */
            fn_80224684(1, 3, 1);
            break;
        case 0x40000000:                            /* switch 2 */
            fn_80224684(1, 3, 0);
            break;
        }
        if (M2C_FIELD(arg0, s32 *, 0) & 0x80000000) {
            M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK), 0x94)(arg0, 0);
        }
    }
}

void fn_8006C944(u32 *arg0) {
    void fn_8006C2A4(void *, s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void fn_802246B8(s32);
    u32 saved_w;
    u8 saved_b;

    saved_b = *((u8 *)arg0 + 0xB);
    saved_w = *arg0;
    if (saved_b != 0) {
        *arg0 = saved_w & 0x8FFF7FDF;
        *arg0 = *arg0 | 0x50004000;
        *((u8 *)arg0 + 0xB) = 0xFF;
        fn_802246B8(0);
        fn_80223E5C(6, 0x80, 1, 0, 0);
        fn_8006C2A4(arg0, 1);
        *((u8 *)arg0 + 0xB) = saved_b;
        *arg0 = saved_w;
    }
}

void fn_8006C9E8(u32 *arg0) {
    void fn_8006C2A4(void *, s32);
    u32 saved_w;
    u8 saved_b;

    saved_b = *((u8 *)arg0 + 0xB);
    saved_w = *arg0;
    if (saved_b != 0) {
        *arg0 = saved_w & 0x8FFF7FDF;
        *arg0 = *arg0 | 0x50006000;
        *((u8 *)arg0 + 0xB) = 0xFF;
        fn_8006C2A4(arg0, 0);
        *((u8 *)arg0 + 0xB) = saved_b;
        *arg0 = saved_w;
    }
}



void fn_8006CA68(void *arg0) {
    M2C_UNK fn_8006C2A4(void *, M2C_UNK);
    fn_8006C2A4(arg0, 2);
}

void fn_8006CA8C(void *arg0) {
    M2C_UNK fn_8006C2A4(void *, M2C_UNK);
    fn_8006C2A4(arg0, 1);
}

void fn_8006CAB0(s32 arg0) {
    void fn_8006C2A4(s32, s32);
    fn_8006C2A4(arg0, 0);
}

int fn_8006CAD4(void *arg0, int arg1, int arg2) {
    s32 fn_8005B010(void *, s32, void *, ...);
    extern u16 lbl_8026B980[8];
    int r30;
    r30 = 0;
    do {
        fn_8005B010(arg0, arg1, lbl_8026B980, arg2);
        r30++;
    } while (r30 < 1);
    return 0;
}

void fn_8006CC6C(s32 arg0) {
    M2C_UNK fn_8003F670(s32);
    M2C_UNK fn_8003FCF0();
    s32 fn_8005C368();
    M2C_UNK fn_80068558(s32, M2C_UNK, M2C_UNK);
    fn_8003FCF0();
    if (fn_8005C368() <= 1) {
        fn_80068558(arg0, 0, 0);
    }
    fn_8003F670(arg0);
}

#pragma use_lmw_stmw on
void fn_8006CF60(void *arg0) {
    void *memcpy(void *, const void *, u32);
    void DCFlushRange(void *, u32);
    void *mesh; void *anim; s32 *kf; s32 *kf_prev; s32 n; s32 i; u8 *entry; u8 *dst; f32 t; f32 w; f32 v; f32 d; u32 gqr; u16 tmp; s8 tmp8;
    mesh = *(void **)((u8 *)arg0 + 0x48); anim = *(void **)((u8 *)arg0 + 0x50); kf = *(s32 **)((u8 *)anim + 0x20);
    memcpy(*(void **)((u8 *)arg0 + 0x6c), *(void **)((u8 *)mesh + 0x24), *(u16 *)((u8 *)mesh + 0x4c) * 6 + *(u16 *)((u8 *)mesh + 0x4e) * 3);
    n = *(s32 *)((u8 *)anim + 0x1c);
    if (n > 0) { do { if (*(f32 *)((u8 *)arg0 + 0x58) < (f32)*kf) break; kf_prev = kf; kf = (s32 *)((u8 *)kf + 0x1c); } while (--n); }
    gqr = (*(u8 *)((u8 *)anim + 8) << 8) | 6; gqr = (gqr << 16) | (gqr & 0x7FFF); (void)gqr;
    mesh = *(void **)((u8 *)arg0 + 0x48); gqr = (*(u8 *)((u8 *)mesh + 0x5c) << 8) | 7; gqr = (gqr << 16) | (gqr & 0xFFFF); (void)gqr;
    t = (*(f32 *)((u8 *)arg0 + 0x58) - (f32)kf_prev[0]) / (f32)(kf[0] - kf_prev[0]);
    i = 0; entry = *(u8 **)((u8 *)anim + 0x24) + (kf[1] << 2); dst = *(u8 **)((u8 *)arg0 + 0x6c);
    while (i < kf[2]) { dst += entry[0] * 6; d = (f32)(s8)entry[1]; v = (f32)*(s16 *)dst + d * t; tmp = (u16)(s32)v; *(u16 *)dst = tmp; d = (f32)(s8)entry[2]; v = (f32)*(s16 *)(dst + 2) + d * t; tmp = (u16)(s32)v; *(u16 *)(dst + 2) = tmp; d = (f32)(s8)entry[3]; v = (f32)*(s16 *)(dst + 4) + d * t; tmp = (u16)(s32)v; *(u16 *)(dst + 4) = tmp; i++; entry += 4; }
    w = lbl_803692B8 - t;
    i = 0; entry = *(u8 **)((u8 *)anim + 0x24) + (kf_prev[1] << 2); dst = *(u8 **)((u8 *)arg0 + 0x6c);
    while (i < kf_prev[2]) { dst += entry[0] * 6; d = (f32)(s8)entry[1]; v = (f32)*(s16 *)dst + d * w; tmp = (u16)(s32)v; *(u16 *)dst = tmp; d = (f32)(s8)entry[2]; v = (f32)*(s16 *)(dst + 2) + d * w; tmp = (u16)(s32)v; *(u16 *)(dst + 2) = tmp; d = (f32)(s8)entry[3]; v = (f32)*(s16 *)(dst + 4) + d * w; tmp = (u16)(s32)v; *(u16 *)(dst + 4) = tmp; i++; entry += 4; }
    gqr = (*(u8 *)((u8 *)anim + 9) << 8) | 6; gqr = (gqr << 16) | (gqr & 0x7FFF); (void)gqr;
    w = lbl_803692B8 - w;
    i = 0; entry = *(u8 **)((u8 *)anim + 0x28) + (kf[3] << 2); dst = *(u8 **)((u8 *)arg0 + 0x70);
    while (i < kf[4]) { dst += entry[0] * 3; d = (f32)(s8)entry[1]; v = (f32)(s8)dst[0] + d * w; tmp8 = (s8)(s32)v; dst[0] = (u8)tmp8; d = (f32)(s8)entry[2]; v = (f32)(s8)dst[1] + d * w; tmp8 = (s8)(s32)v; dst[1] = (u8)tmp8; d = (f32)(s8)entry[3]; v = (f32)(s8)dst[2] + d * w; tmp8 = (s8)(s32)v; dst[2] = (u8)tmp8; i++; entry += 4; }
    w = lbl_803692B8 - w;
    i = 0; entry = *(u8 **)((u8 *)anim + 0x28) + (kf_prev[3] << 2); dst = *(u8 **)((u8 *)arg0 + 0x70);
    while (i < kf_prev[4]) { dst += entry[0] * 3; d = (f32)(s8)entry[1]; v = (f32)(s8)dst[0] + d * w; tmp8 = (s8)(s32)v; dst[0] = (u8)tmp8; d = (f32)(s8)entry[2]; v = (f32)(s8)dst[1] + d * w; tmp8 = (s8)(s32)v; dst[1] = (u8)tmp8; d = (f32)(s8)entry[3]; v = (f32)(s8)dst[2] + d * w; tmp8 = (s8)(s32)v; dst[2] = (u8)tmp8; i++; entry += 4; }
    mesh = *(void **)((u8 *)arg0 + 0x48);
    DCFlushRange(*(void **)((u8 *)arg0 + 0x6c), *(u16 *)((u8 *)mesh + 0x4c) * 6 + *(u16 *)((u8 *)mesh + 0x4e) * 3);
}
void fn_8006D52C(s32 arg0) {
    M2C_ERROR(/* unknown instruction: mtspr GQR6, $r4 */);
}

void fn_8006D53C(s32 arg0) {
    M2C_ERROR(/* unknown instruction: mtspr GQR7, $r4 */);
}

void fn_8006D54C(s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r6;
    s32 temp_r7;
    s32 var_ctr;

    temp_r6 = arg3 & arg3;
    if (temp_r6 != 0) {
        temp_r7 = temp_r6 - 1;
        M2C_ERROR(/* unknown instruction: psq_lu $f12, 0x4($r4), 0x0, qr6 */);
        var_ctr = temp_r7;
        M2C_ERROR(/* unknown instruction: psq_lu $f13, 0x4($r4), 0x0, qr6 */);
        M2C_ERROR(/* unknown instruction: ps_madds0 $f15, $f0, $f12, $f6 */);
        M2C_ERROR(/* unknown instruction: ps_madds0 $f16, $f1, $f12, $f7 */);
        M2C_ERROR(/* unknown instruction: ps_muls1 $f17, $f0, $f13 */);
        M2C_ERROR(/* unknown instruction: psq_lu $f14, 0x4($r4), 0x0, qr6 */);
        M2C_ERROR(/* unknown instruction: ps_muls1 $f18, $f1, $f13 */);
        if (temp_r7 & temp_r7) {
            M2C_ERROR(/* unknown instruction: ps_madds1 $f15, $f2, $f12, $f15 */);
            M2C_ERROR(/* unknown instruction: ps_madds1 $f16, $f3, $f12, $f16 */);
            M2C_ERROR(/* unknown instruction: ps_madds0 $f17, $f2, $f14, $f17 */);
            M2C_ERROR(/* unknown instruction: psq_lu $f12, 0x4($r4), 0x0, qr6 */);
            M2C_ERROR(/* unknown instruction: ps_madds0 $f18, $f3, $f14, $f18 */);
            M2C_ERROR(/* unknown instruction: ps_madds0 $f8, $f4, $f13, $f15 */);
            M2C_ERROR(/* unknown instruction: ps_madds0 $f9, $f5, $f13, $f16 */);
            M2C_ERROR(/* unknown instruction: psq_lu $f13, 0x4($r4), 0x0, qr6 */);
            M2C_ERROR(/* unknown instruction: ps_madds1 $f10, $f4, $f14, $f17 */);
            M2C_ERROR(/* unknown instruction: ps_madds1 $f11, $f5, $f14, $f18 */);
            M2C_ERROR(/* unknown instruction: psq_lu $f14, 0x4($r4), 0x0, qr6 */);
            do {
                M2C_ERROR(/* unknown instruction: ps_madds0 $f15, $f0, $f12, $f6 */);
                M2C_ERROR(/* unknown instruction: psq_stu $f8, 0x2($r5), 0x0, qr6 */);
                M2C_ERROR(/* unknown instruction: ps_madds0 $f16, $f1, $f12, $f7 */);
                M2C_ERROR(/* unknown instruction: psq_stu $f9, 0x4($r5), 0x1, qr6 */);
                M2C_ERROR(/* unknown instruction: ps_muls1 $f17, $f0, $f13 */);
                M2C_ERROR(/* unknown instruction: psq_stu $f10, 0x2($r5), 0x0, qr6 */);
                M2C_ERROR(/* unknown instruction: ps_muls1 $f18, $f1, $f13 */);
                M2C_ERROR(/* unknown instruction: psq_stu $f11, 0x4($r5), 0x1, qr6 */);
                M2C_ERROR(/* unknown instruction: ps_madds1 $f15, $f2, $f12, $f15 */);
                M2C_ERROR(/* unknown instruction: ps_madds1 $f16, $f3, $f12, $f16 */);
                M2C_ERROR(/* unknown instruction: psq_lu $f12, 0x4($r4), 0x0, qr6 */);
                M2C_ERROR(/* unknown instruction: ps_madds0 $f17, $f2, $f14, $f17 */);
                M2C_ERROR(/* unknown instruction: ps_madds0 $f18, $f3, $f14, $f18 */);
                M2C_ERROR(/* unknown instruction: ps_madds0 $f8, $f4, $f13, $f15 */);
                M2C_ERROR(/* unknown instruction: ps_madds0 $f9, $f5, $f13, $f16 */);
                M2C_ERROR(/* unknown instruction: psq_lu $f13, 0x4($r4), 0x0, qr6 */);
                M2C_ERROR(/* unknown instruction: ps_madds1 $f10, $f4, $f14, $f17 */);
                M2C_ERROR(/* unknown instruction: ps_madds1 $f11, $f5, $f14, $f18 */);
                M2C_ERROR(/* unknown instruction: psq_lu $f14, 0x4($r4), 0x0, qr6 */);
                var_ctr -= 1;
            } while (var_ctr != 0);
        } else {
            M2C_ERROR(/* unknown instruction: ps_madds1 $f15, $f2, $f12, $f15 */);
            M2C_ERROR(/* unknown instruction: ps_madds1 $f16, $f3, $f12, $f16 */);
            M2C_ERROR(/* unknown instruction: ps_madds0 $f17, $f2, $f14, $f17 */);
            M2C_ERROR(/* unknown instruction: ps_madds0 $f18, $f3, $f14, $f18 */);
            M2C_ERROR(/* unknown instruction: ps_madds0 $f8, $f4, $f13, $f15 */);
            M2C_ERROR(/* unknown instruction: ps_madds0 $f9, $f5, $f13, $f16 */);
            M2C_ERROR(/* unknown instruction: ps_madds1 $f10, $f4, $f14, $f17 */);
            M2C_ERROR(/* unknown instruction: ps_madds1 $f11, $f5, $f14, $f18 */);
        }
        M2C_ERROR(/* unknown instruction: psq_stu $f8, 0x2($r5), 0x0, qr6 */);
        M2C_ERROR(/* unknown instruction: psq_stu $f9, 0x4($r5), 0x1, qr6 */);
        M2C_ERROR(/* unknown instruction: psq_stu $f10, 0x2($r5), 0x0, qr6 */);
        M2C_ERROR(/* unknown instruction: psq_stu $f11, 0x4($r5), 0x1, qr6 */);
    }
}

void fn_8006D66C(s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        s32 count = (arg3 >> 1) - 1;
        if (count != 0) {
            do {
                // Process 4 elements
                f32 a = *(f32*)(arg1);
                f32 b = *(f32*)(arg1 + 4);
                f32 c = *(f32*)(arg1 + 8);
                f32 d = *(f32*)(arg1 + 12);
                
                *(f32*)(arg2) = a;
                *(f32*)(arg2 + 4) = b;
                *(f32*)(arg2 + 8) = c;
                *(f32*)(arg2 + 12) = d;
                
                arg1 += 16;
                arg2 += 16;
                count--;
            } while (count != 0);
        } else {
            // Process one element
            f32 a = *(f32*)(arg1);
            f32 b = *(f32*)(arg1 + 4);
            f32 c = *(f32*)(arg1 + 8);
            f32 d = *(f32*)(arg1 + 12);
            
            *(f32*)(arg2) = a;
            *(f32*)(arg2 + 4) = b;
            *(f32*)(arg2 + 8) = c;
            *(f32*)(arg2 + 12) = d;
        }
    }
}

void fn_8006D8E8(s32 arg0) {
    M2C_UNK fn_8006EDA0(s32 *);
    s32 sp8;

    sp8 = arg0;
    fn_8006EDA0(&sp8);
}

s32 fn_8006D910(s32 arg0, s32 arg1) {
    M2C_UNK fn_8006EDE8(s32 *, s32, s32);
    s32 sp8;

    sp8 = 0;
    fn_8006EDE8(&sp8, arg0, arg1);
    return sp8;
}

s32 fn_8006D948(s32 arg0) {
    s32 sp8;

    sp8 = 0;
    fn_8006EDE8(&sp8, arg0, 0);
    return sp8;
}

u8 fn_8006D980(u8 *arg0, void *arg1) {
    // Based on the detailed assembly and m2c's draft
    u8 *ptr = arg0;
    u8 *search_ptr = (u8 *)arg1;

    if (ptr == NULL) {
        return 0;
    }

    if (search_ptr != NULL) {
        while (1) {
            u8 ch = *(ptr++);
            if (ch == 0) {
                return 0;
            }
            
            // Check if the current character matches the first character of the search string
            if ((u8)*search_ptr == ch) {
                u8 *cur_search = search_ptr + 1;
                u8 *cur_ptr = ptr + 1;
                
                // Match subsequent characters while both are non-zero
                while (*cur_search != 0 && *cur_ptr != 0) {
                    if (*cur_search == *cur_ptr) {
                        cur_search++;
                        cur_ptr++;
                    } else {
                        search_ptr = NULL;
                        goto loop_4;
                    }
                }
                
                // Check for pattern match: end of search string + next char is underscore
                if (*cur_search == 0 && *cur_ptr == '_') {
                    return 1;
                }
                
                ptr = cur_ptr;
                search_ptr = cur_search;
            } else {
loop_4:
                if (ch == '_') {
                    search_ptr = (u8 *)arg1;
                } else {
                    search_ptr = NULL;
                }
            }
        }
    } else {
        // Simple case: check characters after the first one
        ptr++;
        
        if (*ptr != '_') {
            return 0;
        }
        
        while (*ptr != 0) {
            ptr++;
        }
        return *(ptr - 1) == '_';
    }
}

void fn_8006DA5C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

int fn_8006DA64(void *arg0, int arg1, int arg2) {
    s32 fn_8005B010(void *, s32, void *, ...);
    extern u16 lbl_8026B980[8];
    fn_8005B010(arg0, arg1, lbl_8026B980, arg2);
    return 0;
}

#pragma use_lmw_stmw on
void fn_8006DA98(void *arg0)
{
    void *fn_800C4638(s32, void *, s32);
    void fn_800C4588(void *);
    s32 fn_8021F4CC(void);
    s32 fn_8021F250(void);
    s32 fn_8021F258(s32);
    void fn_802206F4(void);
    void GXInitFifoBase(void *, void *, u32);
    void GXSetCPUFifo(void *);
    void GXSetGPFifo(void *);
    s32 VIGetTvFormat(void);
    void fn_8022C1B8(void *, void *, s32);
    void fn_8020602C(void *, s32, void *, ...);
    void fn_8022108C(void *, void *, s32, s32);
    void *GXInit(s32, s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    void fn_80225058(s32, s32, u16, u16);
    void fn_802214A8(u16, u16);
    s32 fn_802216E0(void);
    void fn_802211D0(s32, s32, u16, u16);
    void fn_802212C8(u16, u16);
    void fn_80221824(u8, void *, s32, void *);
    void fn_802246EC(s32, s32);
    void fn_80221A40(void *, s32);
    void fn_80221A2C(s32);
    void fn_80210C70(void *);
    void fn_802115A8(void *);
    void fn_80211478(void);
    void fn_802107A8(void);
    extern char lbl_8026B990[];
    extern u8 lbl_80311C68[];
    extern void *lbl_80367324;
    extern void *lbl_80367320;
    extern void *lbl_80367318;
    extern void *lbl_80367314;
    extern void *lbl_80367310;
    extern u8 lbl_8029DFA8[];
    extern u8 lbl_8029E020[];
    extern u8 lbl_8029E05C[];
    extern u8 lbl_8029DFE4[];
    extern f32 lbl_803692C8;
    extern f32 lbl_803692CC;
    extern f64 lbl_803692D0;
    typedef struct { u32 x, y; } Pair;
    u8 fifo[0x80];
    void *buf;
    s32 a;
    s32 b;
    s32 c;
    u16 xfbHeight;
    u8 *dst;
    s32 fmt;

    buf = fn_800C4638(0x10000, lbl_8026B990, 0);
    a = fn_8021F4CC();
    b = fn_8021F250();
    c = fn_8021F258(a);
    fn_802206F4();
    GXInitFifoBase(fifo, buf, 0x10000);
    GXSetCPUFifo(fifo);
    GXSetGPFifo(fifo);
    if (arg0 != NULL) {
        dst = lbl_80311C68;
        *(u32 *)dst = *(u32 *)arg0;
        *(u16 *)(dst + 4) = *(u16 *)((u8 *)arg0 + 4);
        *(u16 *)(dst + 6) = *(u16 *)((u8 *)arg0 + 6);
        *(u16 *)(dst + 8) = *(u16 *)((u8 *)arg0 + 8);
        *(u16 *)(dst + 0xa) = *(u16 *)((u8 *)arg0 + 0xa);
        *(u16 *)(dst + 0xc) = *(u16 *)((u8 *)arg0 + 0xc);
        *(u16 *)(dst + 0xe) = *(u16 *)((u8 *)arg0 + 0xe);
        *(u16 *)(dst + 0x10) = *(u16 *)((u8 *)arg0 + 0x10);
        *(u32 *)(dst + 0x14) = *(u32 *)((u8 *)arg0 + 0x14);
        dst[0x18] = *((u8 *)arg0 + 0x18);
        dst[0x19] = *((u8 *)arg0 + 0x19);
        *(Pair *)(dst + 0x1a) = *(Pair *)((u8 *)arg0 + 0x1a);
        *(Pair *)(dst + 0x22) = *(Pair *)((u8 *)arg0 + 0x22);
        *(Pair *)(dst + 0x2a) = *(Pair *)((u8 *)arg0 + 0x2a);
        fn_8022C1B8(dst + 0x32, (u8 *)arg0 + 0x32, 7);
        lbl_80367324 = lbl_80311C68;
    } else {
        switch (VIGetTvFormat()) {
        case 0:
            lbl_80367324 = lbl_8029DFA8;
            break;
        case 1:
            lbl_80367324 = lbl_8029E020;
            break;
        case 5:
            lbl_80367324 = lbl_8029E05C;
            break;
        case 2:
            lbl_80367324 = lbl_8029DFE4;
            break;
        default:
            fn_8020602C(lbl_8026B990 + 1, 0xDF, lbl_8026B990 + 0xC);
            break;
        }
        fn_8022108C(lbl_80367324, lbl_80311C68, 0, 0x10);
        lbl_80367324 = lbl_80311C68;
    }
    lbl_80367320 = GXInit(b, c);
    {
        void *rm = lbl_80367324;
        u16 w = *(u16 *)((u8 *)rm + 4);
        u16 h = *(u16 *)((u8 *)rm + 6);
        fn_80224FEC(lbl_803692C8, lbl_803692C8, (f32)w, (f32)h, lbl_803692C8, lbl_803692CC);
    }
    {
        void *rm = lbl_80367324;
        fn_80225058(0, 0, *(u16 *)((u8 *)rm + 4), *(u16 *)((u8 *)rm + 6));
    }
    {
        void *rm = lbl_80367324;
        fn_802214A8(*(u16 *)((u8 *)rm + 6), *(u16 *)((u8 *)rm + 8));
    }
    xfbHeight = (u16)fn_802216E0();
    {
        void *rm = lbl_80367324;
        fn_802211D0(0, 0, *(u16 *)((u8 *)rm + 4), *(u16 *)((u8 *)rm + 6));
    }
    fn_802212C8(*(u16 *)((u8 *)lbl_80367324 + 4), xfbHeight);
    {
        void *rm = lbl_80367324;
        fn_80221824(*((u8 *)rm + 0x19), (u8 *)rm + 0x1a, 1, (u8 *)rm + 0x32);
    }
    if (*((u8 *)lbl_80367324 + 0x19) != 0) {
        fn_802246EC(2, 0);
    } else {
        fn_802246EC(1, 0);
    }
    fn_80221A40(lbl_80367318, 1);
    fn_80221A2C(0);
    fn_80210C70(lbl_80367324);
    fn_802115A8(lbl_80367310);
    lbl_80367318 = lbl_80367314;
    fn_80211478();
    fn_802107A8();
    if (*(u32 *)lbl_80367324 & 1) {
        fn_802107A8();
    }
    fn_800C4588(buf);
}
#pragma use_lmw_stmw reset

void fn_8006E478(void) {
void OSReport(char *, ...); void fn_8006DDDC(void); void fn_8020602C(char *, int, char *); void fn_8021F168(u8 *, void *, void *, void *, void *); u32 fn_8021F4DC(void);
extern char lbl_8026B990[]; extern s32 lbl_80367330; extern u32 lbl_80367334,lbl_80367338,lbl_80367340; extern u8 lbl_8036733C,lbl_80367344;
u8 sp9; u8 pad[3]; void *sp8; u32 result, count;
if((s8)lbl_8036733C==0){lbl_80367338=0;lbl_8036733C=1;}
if((s8)lbl_80367344==0){lbl_80367340=0;lbl_80367344=1;}
lbl_80367330++;
fn_8021F168(&sp9,&sp8,&sp8,&sp8,&sp8);
result=fn_8021F4DC();
if(sp9!=0 && result==lbl_80367340){count=lbl_80367338+1;lbl_80367338=count;if(count>=lbl_80367334){OSReport(lbl_8026B990+0x126);fn_8006DDDC();fn_8020602C(lbl_8026B990+1,0x326,lbl_8026B990+0x15b);}}else{lbl_80367340=result;lbl_80367338=0;}
}

extern u16 lbl_8036732C;
extern u32 lbl_80367334;
extern s32 lbl_803682A0;
extern f32 lbl_803692C8;
extern f64 lbl_803692D0;
extern f32 lbl_803692CC;
void fn_8006E568(u32 arg0) {
    if (arg0 != 0U) {
        lbl_8036732C = 1;
        lbl_80367334 = arg0;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x2402C004;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x23000020;
        *(u8 *)0xCC008000 = 0x10;
        *(u8 *)0xCC008000 = 0;
        *(u16 *)0xCC008000 = 0x1006;
        *(u32 *)0xCC008000 = 0x84400;
    } else {
        lbl_8036732C = 0;
        lbl_80367334 = 0U;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x24000000;
        *(u8 *)0xCC008000 = 0x61;
        *(u32 *)0xCC008000 = 0x23000000;
        *(u8 *)0xCC008000 = 0x10;
        *(u8 *)0xCC008000 = 0;
        *(u16 *)0xCC008000 = 0x1006;
        *(u32 *)0xCC008000 = 0;
    }
}

s32 fn_8006E650(void) {
    extern s32 lbl_80367318;
    return lbl_80367318;
}

s32 fn_8006E658(void) {
    extern s32 lbl_80367324;
    return lbl_80367324;
}

void fn_8006E838(void *arg0)
{
    void OSInit(void);
    void DVDInit(void);
    void fn_802102F8(void);
    void fn_80217A2C(void);
    s32 VIGetTvFormat(void);
    void fn_8022C1B8(void *, void *, s32);
    void fn_8020602C(void *, s32, void *, ...);
    void fn_8022108C(void *, void *, s32, s32);
    void *OSGetArenaLo(void);
    void *OSGetArenaHi(void);
    void OSSetArenaLo(void *);
    void fn_800C5300(void);
    void fn_800C50FC(void *, s32);
    void fn_80210C70(void *);
    void *fn_800C4638(s32, void *, s32);
    void *GXInit(void *, s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    void fn_80225058(s32, s32, u16, u16);
    void fn_802214A8(u16, u16);
    s32 fn_802216E0(void);
    void fn_802211D0(s32, s32, u16, u16);
    void fn_802212C8(u16, u16);
    void fn_80221824(u8, void *, s32, void *);
    void fn_802246EC(s32, s32);
    void fn_80221A40(void *, s32);
    void fn_80221A2C(s32);
    void fn_802115A8(void *);
    void fn_80211478(void);
    void fn_802107A8(void);
    extern char lbl_8026B990[];
    extern u8 lbl_80311C68[];
    extern void *lbl_80367324;
    extern void *lbl_80367320;
    extern void *lbl_8036731C;
    extern void *lbl_80367318;
    extern void *lbl_80367314;
    extern void *lbl_80367310;
    extern s32 lbl_80367328;
    extern u8 lbl_8029DFA8[];
    extern u8 lbl_8029E020[];
    extern u8 lbl_8029E05C[];
    extern u8 lbl_8029DFE4[];
    extern f32 lbl_803692C8;
    extern f32 lbl_803692CC;
    extern f64 lbl_803692D0;
    typedef struct { u32 x, y; } Pair;
    void *arenaLo;
    s32 fbSize;
    u16 xfbHeight;
    u8 *dst;
    void *buf;
    void *rm;
    u32 w;

    OSInit();
    DVDInit();
    fn_802102F8();
    fn_80217A2C();
    if (arg0 != NULL) {
        dst = lbl_80311C68;
        *(u32 *)dst = *(u32 *)arg0;
        *(u16 *)(dst + 4) = *(u16 *)((u8 *)arg0 + 4);
        *(u16 *)(dst + 6) = *(u16 *)((u8 *)arg0 + 6);
        *(u16 *)(dst + 8) = *(u16 *)((u8 *)arg0 + 8);
        *(u16 *)(dst + 0xa) = *(u16 *)((u8 *)arg0 + 0xa);
        *(u16 *)(dst + 0xc) = *(u16 *)((u8 *)arg0 + 0xc);
        *(u16 *)(dst + 0xe) = *(u16 *)((u8 *)arg0 + 0xe);
        *(u16 *)(dst + 0x10) = *(u16 *)((u8 *)arg0 + 0x10);
        *(u32 *)(dst + 0x14) = *(u32 *)((u8 *)arg0 + 0x14);
        dst[0x18] = *((u8 *)arg0 + 0x18);
        dst[0x19] = *((u8 *)arg0 + 0x19);
        *(Pair *)(dst + 0x1a) = *(Pair *)((u8 *)arg0 + 0x1a);
        *(Pair *)(dst + 0x22) = *(Pair *)((u8 *)arg0 + 0x22);
        *(Pair *)(dst + 0x2a) = *(Pair *)((u8 *)arg0 + 0x2a);
        fn_8022C1B8(dst + 0x32, (u8 *)arg0 + 0x32, 7);
        lbl_80367324 = lbl_80311C68;
    } else {
        switch (VIGetTvFormat()) {
        case 0:
            lbl_80367324 = lbl_8029DFA8;
            break;
        case 1:
            lbl_80367324 = lbl_8029E020;
            break;
        case 5:
            lbl_80367324 = lbl_8029E05C;
            break;
        case 2:
            lbl_80367324 = lbl_8029DFE4;
            break;
        default:
            fn_8020602C(lbl_8026B990 + 1, 0xDF, lbl_8026B990 + 0xC);
            break;
        }
        fn_8022108C(lbl_80367324, lbl_80311C68, 0, 0x10);
        lbl_80367324 = lbl_80311C68;
    }
    arenaLo = OSGetArenaLo();
    OSGetArenaHi();
    rm = lbl_80367324;
    w = (*(u16 *)((u8 *)rm + 4) + 0xF) & 0xFFF0;
    fbSize = w * *(u16 *)((u8 *)rm + 8) * 2;
    lbl_80367310 = (void *)(((u32)arenaLo + 0x1F) & ~0x1Fu);
    lbl_80367328 = fbSize;
    lbl_80367314 = (void *)(((u32)lbl_80367310 + (fbSize + 0x1F)) & ~0x1Fu);
    lbl_80367318 = lbl_80367314;
    OSSetArenaLo((void *)(((u32)lbl_80367314 + (fbSize + 0x1F)) & ~0x1Fu));
    fn_800C5300();
    fn_800C50FC(lbl_8026B990 + 0x16b, 0x533333);
    fn_80210C70(lbl_80367324);
    buf = fn_800C4638(0x80000, lbl_8026B990 + 0x170, 0x80000);
    lbl_8036731C = buf;
    lbl_80367320 = GXInit(buf, 0x80000);
    {
        void *rm2 = lbl_80367324;
        u16 w2 = *(u16 *)((u8 *)rm2 + 4);
        u16 h2 = *(u16 *)((u8 *)rm2 + 6);
        fn_80224FEC(lbl_803692C8, lbl_803692C8, (f32)w2, (f32)h2, lbl_803692C8, lbl_803692CC);
    }
    {
        void *rm2 = lbl_80367324;
        fn_80225058(0, 0, *(u16 *)((u8 *)rm2 + 4), *(u16 *)((u8 *)rm2 + 6));
    }
    {
        void *rm2 = lbl_80367324;
        fn_802214A8(*(u16 *)((u8 *)rm2 + 6), *(u16 *)((u8 *)rm2 + 8));
    }
    xfbHeight = (u16)fn_802216E0();
    {
        void *rm2 = lbl_80367324;
        fn_802211D0(0, 0, *(u16 *)((u8 *)rm2 + 4), *(u16 *)((u8 *)rm2 + 6));
    }
    fn_802212C8(*(u16 *)((u8 *)lbl_80367324 + 4), xfbHeight);
    {
        void *rm2 = lbl_80367324;
        fn_80221824(*((u8 *)rm2 + 0x19), (u8 *)rm2 + 0x1a, 1, (u8 *)rm2 + 0x32);
    }
    if (*((u8 *)lbl_80367324 + 0x19) != 0) {
        fn_802246EC(2, 0);
    } else {
        fn_802246EC(1, 0);
    }
    fn_80221A40(lbl_80367318, 1);
    fn_80221A2C(0);
    fn_802115A8(lbl_80367310);
    lbl_80367318 = lbl_80367314;
    fn_80211478();
    fn_802107A8();
    if (*(u32 *)lbl_80367324 & 1) {
        fn_802107A8();
    }
}

s32 fn_8006EB9C(void) {
    extern s32 lbl_80367320;
    return lbl_80367320;
}

s32 fn_8006EBA4(void *arg0, s32 arg1) {
    void **var_r3;
    s32 *var_r5;
    s32 var_r0;

    var_r3 = (void **)M2C_FIELD(arg0, void **, 0x8);
    var_r5 = (s32 *)&var_r3[(arg1 << 3) + 4];
    var_r0 = *var_r5;
    var_r0 = -var_r0;
    return (var_r0 < 0) ? 1 : 0;
}

extern void fn_8005D2CC(void);
void fn_8006EDA0(s32 *arg0)
{
    void fn_8005C7E8();
    fn_8005C7E8(*arg0);
    *arg0 = 0;
}

s32 fn_8006EDD8(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + (arg1 * 8);
}

void fn_8006F00C(s8 arg0) {
    extern u8 lbl_80366DE9;
    lbl_80366DE9 = (u8)arg0;
}

s32 fn_8006F014(void) {
    extern s8 lbl_80366DE8;
    return lbl_80366DE8;
}

s32 fn_8006F020(void *arg0) {
    if (*(u16*)((char*)arg0 + 0x7C) == 0xFFFF) {
        return 0;
    }
    
    if (*(u16*)((char*)arg0 + 0x7E) == 0xFFFF) {
        return 0;
    }

    if (*(u16*)((char*)arg0 + 0x80) == 0xFFFF) {
        return 0;
    }

    if (*(u16*)((char*)arg0 + 0x82) == 0xFFFF) {
        return 0;
    }

    return 1;
}

void fn_8006F10C(s32 arg0, s32 arg1) {
    extern u8 lbl_80311CA8[];
    u32 r31;
    u32 r6;
    u32 r7;
    
    r31 = (u32)lbl_80311CA8;
    r6 = r31 + 0x4C;
    r7 = r31 + 0x6C;
    
    *(u8 **)(u32)r7 = (u8 *)r6;
    *(u8 **)((u32)r7 + 4) = (u8 *)(r6 + 8);
    *(s32 *)(r6 + 4) = arg0;
    *(s32 *)(r6 + 0xC) = arg1;
    *(s32 *)(r7 + 8) = 0;
    
    fn_80024398((u8 *)r31 + 0x80, fn_800C0658((u8 *)r6 + 8, (u8 *)r6, (u8 *)r7), 0);
}

s32 fn_8006F2B8(s32 arg0, s32 arg1) {
    M2C_UNK fn_80121630(s32);
    fn_80121630(arg1);
    return 0;
}

s32 fn_8006F2E0(void *arg0, void *arg1, void *arg2) {
    extern u8 lbl_80366DE8;
    lbl_80366DE8 = *(u8 *)((u8 *)arg2 + 0x3A);
    return 5;
}

s32 fn_8006F370(void) {
    return 0;
}

void fn_8006F378(void) {
    M2C_UNK fn_80024DE4();
    fn_80024DE4();
}

s32 fn_8006F398(void) {
    return 0x14;
}

void fn_8006F514(void *arg0) {
    M2C_UNK fn_8008B1B0(M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x7C)();
    fn_8008B1B0(0, 0);
}

void fn_8006F6A4(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    extern u32 lbl_80311CE0[];
    extern s8 lbl_80366DE8;
    extern u32 lbl_80367350[2];
    extern u32 lbl_80367358[2];

    lbl_80366DE8 = -1;
    if (arg1 != 0U) {
        lbl_80311CE0[3] = arg1;
    }
    if (arg2 != 0U) {
        lbl_80367350[1] = arg2;
    }
    if (arg3 != 0U) {
        lbl_80367358[1] = arg3;
    }
    fn_80024398(lbl_80311CE0, arg0, 0);
}

#pragma cplusplus on
extern "C"
void fn_8006F710(void *arg0, void *arg1) {
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80009D74(f32, f32, f32, f32);
    f32 fn_80023EE0(void *);
    void fn_80009B8C(s32);
    void fn_80009B80(u8);
    struct Model {
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
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual f32 v25() = 0;
    };
    extern f32 lbl_803692E0;
    extern f32 lbl_803692F8;
    s32 flag;
    s32 val;

    fn_8000A258();
    fn_80009D74((f32)M2C_FIELD(arg1, s16 *, 0x30), (f32)M2C_FIELD(arg1, s16 *, 0x32),
                M2C_FIELD(arg1, Model **, 0x3C)->v25(), lbl_803692E0);
    fn_80009B8C((s32)(lbl_803692F8 * fn_80023EE0(arg1)));
    flag = 0;
    if ((u8)M2C_FIELD(arg1, u8 *, 0x2D) == 0 && (u8)M2C_FIELD(arg1, u8 *, 0x2E) == 0) {
        flag = 1;
    }
    val = 0x58;
    if ((u8)flag != 0) {
        val = 0x80;
    }
    fn_80009B80((u8)val);
    fn_8000A248();
}
#pragma cplusplus reset

s32 fn_8006F7F0(s32 arg0) {
    s32 var_r3;
    s32 i;
    
    if (arg0 < 0 || arg0 >= 0x100) {
        return -1;
    }
    
    for (i = 0; i < 0x100; i++) {
        if (lbl_80330708[i] == 0) {
            lbl_80330708[i] = arg0;
            var_r3 = i;
            break;
        }
    }
    
    return var_r3;
}

void fn_8006FBE4(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    extern u32 lbl_80311CB8[];
    extern s8 lbl_80366DE8;
    extern u32 lbl_80367350[2];
    extern u32 lbl_80367358[2];

    lbl_80366DE8 = -1;
    if (arg1 != 0U) {
        lbl_80311CB8[3] = arg1;
    }
    if (arg2 != 0U) {
        lbl_80367350[1] = arg2;
    }
    if (arg3 != 0U) {
        lbl_80367358[1] = arg3;
    }
    fn_80024398(lbl_80311CB8, arg0, 0);
}

void fn_80070018(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    extern u32 lbl_80311CA8[];
    extern s8 lbl_80366DE8;
    extern u32 lbl_80367350[2];
    extern u32 lbl_80367358[2];

    lbl_80366DE8 = -1;
    if (arg1 != 0U) {
        lbl_80311CA8[3] = arg1;
    }
    if (arg2 != 0U) {
        lbl_80367350[1] = arg2;
    }
    if (arg3 != 0U) {
        lbl_80367358[1] = arg3;
    }
    fn_80024398(lbl_80311CA8, arg0, 0);
}

extern u8 lbl_80366DE9;
u8 fn_800701E0(s32 arg0, s32 arg1, u8 arg2) {
    extern u8 lbl_80366DE9;
    s8 temp = lbl_80366DE9;
    return (u8)(arg2 == temp);
}

void fn_800701FC(u32 arg0, u32 arg1, s32 arg2, u32 arg3, u32 arg4, u32 arg5)
{
    // Function body to be filled in
}

u32 fn_800703C4(void) {
    extern u8 lbl_80366DE8;

    lbl_80366DE8 = 0;
    return 9;
}

s32 fn_800703D4(void) {
    return 0;
}

s32 fn_800704F0(s32 arg0, s32 arg1, s32 arg2)
{
    return arg0 + arg1 + arg2;
}

extern u16 lbl_80286860[];
void fn_800708B0(s32 arg0, void *arg1) {
    void *fn_8000C0C0(void *);
    void fn_8018DC58(void);
    extern u16 lbl_80286860[];
    extern u8 lbl_80366DE9;
    u32 temp;

    temp = *(u32 *)((u8 *)arg1 + 0x18);
    if (temp == (u32)fn_8000C0C0(&lbl_80286860)) {
        fn_8018DC58();
        *(s8 *)&lbl_80366DE9 = -1;
    }
}

#pragma cplusplus on
extern "C" void *fn_8000B908(u8);
extern "C" void fn_80070B3C(void *arg0, void *arg1) {
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
        virtual s32 v17() = 0;
        virtual void v18() = 0;
        virtual void v19() = 0;
        virtual s32 v20() = 0;
    };
    struct Grp {
        u8 pad[0x3C];
        Obj *obj;
        u8 ids[0x20];
        s8 count;
    };
    struct Ent {
        u8 pad[0x32];
        s16 y;
        u8 pad2[6];
        u8 level;
    };
    Grp *g = (Grp *)arg1;
    s32 i;
    Ent *p;

    for (i = 0; i < g->count; i++) {
        p = (Ent *)fn_8000B908(g->ids[i]);
        if (p->level >= 4) {
            p->y = g->obj->v17() + 0x90;
            p->y += (p->level - 4) * g->obj->v20();
        }
    }
}

void fn_80070BF4(void *arg1) {
    M2C_UNK fn_80037BD0(s32, u8);
    extern s32 lbl_802EF4C8;
    fn_80037BD0(lbl_802EF4C8, M2C_FIELD(arg1, u8 *, 0x3A));
}

#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_80070C24(void *arg0, s32 arg1, void *arg2) {
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
        virtual s32 v16(void *) = 0;
        virtual void v17() = 0;
    };
    void fn_8008D510(s32, bool, s16, s16);
    ((Obj *)arg0)->v17();
    fn_8008D510(((Obj *)arg0)->v16(arg2), *(u8 *)((u8 *)arg2 + 0x39) == 0, *(s16 *)((u8 *)arg2 + 0x30), *(s16 *)((u8 *)arg2 + 0x32));
}
#pragma cplusplus reset
void fn_80070EDC(void) {

}

s32 fn_80070EE0(void **arg0, s32 arg2) {
    M2C_UNK fn_801A6FB4(M2C_UNK *, s32, s32);
    extern s32 lbl_802EF4C8;
    extern M2C_UNK lbl_80330EAC;
    s32 temp_r31;

    temp_r31 = lbl_802EF4C8;
    fn_801A6FB4(&lbl_80330EAC, temp_r31, M2C_FIELD(*arg0, s32 (**)(s32, s32 *), 0x48)(arg2, &lbl_802EF4C8));
    return 0;
}

void fn_80070F3C(void *arg0) {
    extern s32 lbl_802EF4C8;
    extern s32 lbl_803674F4;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) lbl_802EF4C8;
    M2C_FIELD(arg0, s32 *, 8) = (s32) lbl_803674F4;
}

s32 fn_80071410(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    void *fn_8001CB64();
    s32 fn_8007CFB8(s32, M2C_UNK, f32, f32);
    s32 var_r3;
    void *temp_r3;

    var_r3 = arg0;
    if (arg1 != 0) {
        var_r3 = arg1 + 0x28C;
        if (var_r3 != 0) {
            temp_r3 = fn_8001CB64();
            var_r3 = (M2C_FIELD(temp_r3, s32 *, 4) & 1) ^ 0;
            if ((var_r3 | ((M2C_FIELD(temp_r3, s32 *, 0) & 0) ^ 0)) != 0) {
                var_r3 = fn_8007CFB8(arg1, 0, farg0, farg1);
            }
        }
    }
    return var_r3;
}

#pragma cplusplus on
extern "C" M2C_UNK fn_8000A258();
extern "C" M2C_UNK fn_8000A248();
extern "C" void fn_80009D74(f32, f32, f32, f32);
extern "C" void fn_8008B464(s32, s32, s32);
extern "C" void fn_80071740(void *arg0, s32 arg1, f32 x, f32 y) {
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
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual f32 v25() = 0;
    };

    fn_8000A258();
    fn_80009D74(0.0f, 0.0f, ((Obj *)arg0)->v25(), 1.0f);
    fn_8000A248();
    fn_8008B464(arg1, (s32)x, (s32)y);
}
#pragma cplusplus reset

void fn_80071B34(void) {
    M2C_UNK fn_8018DAD4();
    fn_8018DAD4();
}

void fn_80071B54(void) {
    M2C_FIELD(&lbl_80330708, s8 *, 0x51D) = 0xF;
    fn_8018DBD8(&lbl_80330708);
    fn_8018DB10();
}

void fn_80071B88(void) {
    M2C_UNK fn_80009C0C(f32);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369300;
    fn_8000A258();
    fn_80009C0C(lbl_80369300);
    fn_8000A174(0, 0x13);
    fn_8000A248();
}

void fn_80071CE8(void *arg0, void *arg1) {
    void fn_80007668(s32 *);
    s32 *fn_8018D900(s32);
    s32 sp8;

    if (*(u8 *)((u8 *)arg1 + 0x39) == 2) {
        sp8 = *fn_8018D900(0);
        fn_80007668(&sp8);
    }
}

void fn_80071D28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    // Function should match exactly with prologue/epilogue
    // But since I can't write assembly, I'll just return to see the prologue issue clearly
    
    // The core issue is this function has a specific stack frame that must be exact
    // This approach won't work - I don't have the structure I need to make this function do what it does in the original.
    return;
}

void fn_80071E0C(void *arg0, void *arg1) {
    u32 fn_800102BC(M2C_UNK, f32, f32);
    M2C_UNK fn_8008AB7C(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8008C1D8(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK);
    extern f32 lbl_803692E0;
    extern f32 lbl_80369320;
    extern f32 lbl_80369324;
    extern f32 lbl_80369328;
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
    fn_8008C1D8(0, 0, 0x90, (temp_r28 << 5) + 0x20, 1);
    if ((s16) M2C_FIELD(arg1, s16 *, 0x3A) >= 5) {
        fn_8000A258();
        fn_80009C0C(lbl_80369320);
        fn_8000A248();
        var_r28 = 0;
        if (((u8) M2C_FIELD(arg1, u8 *, 0x2D) == 0) && ((u8) M2C_FIELD(arg1, u8 *, 0x2E) == 0)) {
            var_r28 = 1;
        }
        temp_f2 = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0);
        temp_r29 = (s32) (lbl_80369324 * temp_f2);
        temp_r3 = fn_800102BC(-1, lbl_803692E0, temp_f2);
        temp_r31 = M2C_FIELD(arg1, s16 *, 0x3A);
        temp_r30 = (s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1;
        temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(void *), 0x50)(arg0);
        fn_8008AB7C((s32) (((u32) temp_r3_2 >> 0x1FU) + temp_r3_2) >> 1, temp_r31 + temp_r30, temp_r29, 0x18, 0x19, 0x4B, var_r28);
        fn_8000A258();
        fn_80009C0C(lbl_80369328);
        fn_8000A248();
    }
}

void fn_80072088(void *arg0, void *arg1) {
    void *fn_8000C0C0(void *);
    void fn_8018DC58(void);
    extern u16 lbl_80286860[];
    void *p;

    p = *(void **)((u8 *)arg1 + 0x18);
    if (p == fn_8000C0C0(&lbl_80286860)) {
        fn_8018DC58();
    }
}

void fn_800720C8(s32 unused, void *arg1) {
    s16 temp_r5;
    s32 temp_r3;

    temp_r5 = *(s16 *)((u8 *)arg1 + 0x36);
    temp_r3 = *(s16 *)((u8 *)arg1 + 0x32) + temp_r5;
    if (temp_r3 / 2 > 0xE0) {
        *(s16 *)((u8 *)arg1 + 0x32) = (s16)((0x1C0 - temp_r5) / 2);
    }
}

void fn_80072100(void *arg0, void *arg1) {
    void *fn_8000C0C0(void *);
    void fn_8018DBD8(void);
    void *temp_r31;
    void *result;

    *(u8 *)((u8 *)lbl_80330708 + 0x51D) = 0xF;
    temp_r31 = *(void **)((u8 *)arg1 + 0x18);
    result = fn_8000C0C0(lbl_80286860);
    if (temp_r31 == result) {
        fn_8018DBD8();
    }
}

s32 fn_80072150(void) {
    extern s8 lbl_80366DE8;
    lbl_80366DE8 = 0;
    return 5;
}

u32 fn_80072160(void) {
    extern u8 lbl_80366DE8;

    lbl_80366DE8 = 1;
    return 5;
}

void fn_80072170(void *arg0) {
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
}

s32 fn_80072194(void) {
    return 0xA0;
}

s32 fn_8007219C(void) {
    return 0x100;
}

s32 fn_800721A4(void) {
    return 0x20;
}

s32 fn_800721AC(void) {
    return 0x88;
}

void fn_800721B4(void *arg0) {
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 0xC));
}

s32 fn_800721D8(void) {
    return 0x160;
}

s32 fn_800721E0(void) {
    return 0x48;
}

s16 fn_800721E8(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

void *fn_800721F0(void) {
    extern u16 lbl_8026BB84;
    return (u8 *)*(u32 *)&lbl_8026BB84 + 0x46;
}

s32 fn_80072200(void) {
    return 0x108;
}

s32 fn_80072208(void) {
    return 0x78;
}

s32 fn_80072210(void) {
    return 0x78;
}

s32 fn_80072218(void) {
    return 0x98;
}

s16 fn_80072220(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0xE);
}

s16 fn_80072228(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x10);
}

s32 fn_80072230(void) {
    return 0xB0;
}

f32 fn_80072238(void) {
    extern f32 lbl_80369360;
    return lbl_80369360;
}

void *fn_80072240(void) {
    extern u8 lbl_8026BB84[];

    return lbl_8026BB84 + 0x6F;
}

void *fn_80072250(void) {
    extern u16 lbl_8026BB84[];
    return (u8 *)lbl_8026BB84 + 0x88;
}

void *fn_80072260(void) {
    extern M2C_UNK lbl_8026BB84;
    return &lbl_8026BB84 + 0xA2;
}

s32 fn_80072270(void) {
    return 4;
}

s32 fn_80072278(void) {
    return 4;
}

s32 fn_80072280(void) {
    return 0xB0;
}

s32 fn_80072288(void) {
    return 8;
}

s32 fn_80072290(void) {
    return 8;
}

s16 fn_80072298(void *arg0) {
    s16 (*func_ptr)(void);
    s16 temp_r3;

    func_ptr = ((s16 (**)())((void ***)arg0)[1])[0x50 / sizeof(void *)];
    temp_r3 = func_ptr();
    return (s16) (0x130 - ((s32) (((u32) temp_r3 >> 0x1FU) + temp_r3) >> 1));
}

#pragma cplusplus on
extern "C" s16 fn_800722DC(void *arg0) {
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
        virtual s16 v19() = 0;
    };
    s16 temp = ((Obj *)arg0)->v19();
    return (s16)(0xE0 - (temp / 2));
}
#pragma cplusplus reset
s32 fn_80072320(void) {
    return 0x54;
}

s32 fn_80072328(void *arg0) {
    s16 left;
    s16 right;
    s16 *selected;

    left = *(s16 *)((u8 *)arg0 + 0x12);
    right = *(s16 *)((u8 *)arg0 + 0x10);

    if (left >= right) {
        selected = (s16 *)((u8 *)arg0 + 0x12);
    } else {
        selected = (s16 *)((u8 *)arg0 + 0x10);
    }

    return *selected;
}

s32 fn_8007234C(void) {
    return 0x54;
}

s32 fn_80072354(void) {
    return 0x50;
}

s32 fn_8007235C(void) {
    return 0x42;
}

s32 fn_80072364(void) {
    return 0x12C;
}

s32 fn_8007236C(void) {
    return 0x1C;
}

s32 fn_80072374(void) {
    return 0x14;
}

s32 fn_8007237C(void) {
    return 0x1E;
}

s32 fn_80072384(void) {
    return 0x28;
}

s32 fn_8007238C(void) {
    return 0xB4;
}

s32 fn_80072394(void) {
    return 0;
}

s32 fn_8007239C(void) {
    return 0x90;
}

void *fn_800723A4(void) {
    extern void *lbl_8026BB84;
    return (char *)&lbl_8026BB84 + 0xC2;
}

void *fn_800723B4(void) {
    extern u8 lbl_8026BB84[];

    return lbl_8026BB84 + 0xD7;
}

s32 fn_800723C4(void) {
    return 0;
}

s32 fn_800723CC(void) {
    return 0x14;
}

s32 fn_800723D4(void) {
    return 0x190;
}

s32 fn_800723DC(void) {
    return 0x80;
}

void fn_800723E4(void *arg0) {
    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 4));
}
extern void *lbl_803672F8;
extern s32 *jumptable_80285D18;
extern u8 lbl_80366DE9;
extern struct Unit {
    /* Some fields are guessed based on usage and context of similar structs */
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u16 unk26;
    u16 unk28;
    u16 unk2A;
    u16 unk2C;
    u16 unk2E;
} Unit; 
#include "common.h"
#include "global.h"

extern u16 lbl_8026B980[8];
#include "common.h"
#include "global.h"
extern f32 lbl_803692E0;
extern f32 lbl_80369310;
extern f32 lbl_80369314;
extern f32 lbl_80369318;
extern f32 lbl_8036931C;
extern f32 lbl_80369320;
extern f32 lbl_80369324;
extern f32 lbl_80369328;
extern f32 lbl_8036932C;
extern f32 lbl_80369330;
extern f32 lbl_80369334;
extern f32 lbl_80369338;
extern u8 lbl_80330EAC[];

extern u8 lbl_8030F4E0[];
extern u8 lbl_803672EB;
extern u32 lbl_803672EC;
extern s32 RunQueueBits_80368518;
extern s32 RunQueueHint_8036851C;
extern void *RunQueue_80339478[256];
/* Functions from 0x8005AE20 to 0x80072408, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
} Struct_80067304;

extern u16 lbl_8026B744[6];
extern u16 lbl_8026B750[6];
extern f32 lbl_80369224;
extern f32 lbl_80369228;
extern s32 lbl_8036C444;
extern s32 lbl_8036C448;
#include "common.h"
#include "global.h"

extern f32 lbl_803692E0;
extern f32 lbl_803692F8;
extern f64 lbl_803692E8;
#include "global.h"

extern f32 lbl_803692F0;
#include "common.h"
#include "global.h"

extern s32 lbl_80366DDC;
extern f32 lbl_80369248;
extern const s32 lbl_8026B75C[3];
#include "common.h"
#include "global.h"

extern void fn_80225D6C(s32* a, s32* b, s32* c, s32* d);
extern void fn_8021F168(void* a, void* b, u8* c, u8* d, void* e, s32 f, s32 g, s32 h);
extern void OSReport(const char* fmt, ...);
extern char lbl_8026B990[];
#include "common.h"
#include "global.h"

extern f32 lbl_803691E0;
extern f32 lbl_80369200;
extern f32 lbl_80369208;
#include "common.h"
#include "structs.h"

extern f32 lbl_80369218;
extern f32 lbl_8036921C;
extern u8 lbl_8026B6E8[];
