/* Functions from 0x8005AE20 to 0x80072408, found by decomp-toolkit. */
#include "common.h"
#include "global.h"

extern u16 lbl_80330708[1400];

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

void *fn_8005AE20(void) {
    extern void *lbl_8026AE88;
    return (void *)(((u32)&lbl_8026AE88) + 0x9);
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
    u32 fn_8000D354(void *, M2C_UNK *);
    s32 fn_8001B894(s32 *);
    M2C_UNK fn_8001B940(s32 *);
    extern M2C_UNK lbl_8026B308;
    s32 sp8;
    s32 var_r31;

    if (fn_8000D354(&lbl_8026B308 + 8, &lbl_8026B308) != 0U) {
        sp8 = fn_8000D2BC(&lbl_8026B308 + 8);
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
    s32 *jumptable_80285D18;

    temp_r0 = arg0 - 10;
    if (temp_r0 > 0x42) {
        return 0x1a;
    }
    return ((s32 *) ((u32) jumptable_80285D18 + (temp_r0 << 2)))[0];
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
void fn_8005B8E8(void) {
    u16 temp = lbl_803672F4;
    fn_800C428C(temp);
    lbl_803672F4 = 0;
}

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

s32 fn_8005C0AC(u8 *arg0) {
    u8 *sp18;
    u8 *sp8;

    if (*arg0 == '.') {
        arg0++;
    }
    if (fn_80234200('.') != 0) {
        fn_80234450(&sp18, arg0 + 1);
        fn_80238ADC(&sp18);
        fn_80234450(&sp8, arg0);
        fn_80238ADC(&sp8);
        return fn_802342B8(&sp18, &sp8) == 0;
    }
    return (s8) *arg0 == 0;
}

s32 fn_8005C268(char *name) {
    u8 *e = FindEntryByName(name);
    if (e != NULL) {
        return *(s32 *)(e + 0x3C);
    }
    return 0;
}

u16 fn_8005C368(u32 arg0) {
    extern M2C_UNK lbl_802F04E0;
    M2C_UNK *var_r5;
    s32 var_ctr;
    s32 var_r4;
    void *var_r3;

    var_r5 = &lbl_802F04E0;
    var_r4 = 0;
    var_ctr = 0x400;
loop_1:
    if ((u32) M2C_FIELD(var_r5, u32 *, 0x38) == arg0) {
        var_r3 = &lbl_802F04E0 + (var_r4 * 0x7C);
    } else {
        var_r5 += 0x7C;
        var_r4 += 1;
        var_ctr -= 1;
        if (var_ctr == 0) {
            var_r3 = NULL;
        } else {
            goto loop_1;
        }
    }
    if (var_r3 == NULL) {
        return -1U;
    }
    return M2C_FIELD(var_r3, u16 *, 0x32);
}

s32 fn_8005C3C4(char *name) {
    if (FindEntryByName(name) == NULL) {
        return 0;
    }
    return 1;
}

void fn_8005C5A8(char *name) {
    *(u16 *)(FindEntryByName(name) + 0x30) |= 0x4000;
}

u16 fn_8005C6A0(char *name) {
    u8 *e = FindEntryByName(name);
    if (e == NULL) {
        return 0x8000;
    }
    return *(u16 *)(e + 0x30);
}

void fn_8005C7A4(void) {
    fn_8005D474(1);
}

void fn_8005C7C8(void) {
    M2C_UNK fn_8005D1DC();
    fn_8005D1DC();
}

void fn_8005C7E8(void) {
    M2C_UNK fn_8005D2CC();
    fn_8005D2CC();
}

void fn_8005C808(void) {
    fn_8005D474(2);
}

void fn_8005C82C(void) {
    M2C_UNK fn_8005D474();
    fn_8005D474();
}

void fn_8005C84C(void) {
    fn_8005D474(0);
}

void fn_8005C870(void) {
    M2C_UNK fn_8005D330();
    fn_8005D330();
}

void fn_8005C890(void) {
    fn_8005D330(0xC);
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
    M2C_UNK fn_8020A824(M2C_UNK *);
    extern M2C_UNK lbl_8030F7E0;
    extern u8 lbl_803672E9;
    if ((u8) lbl_803672E9 != 0) {
        fn_8020A824(&lbl_8030F7E0);
        lbl_803672E9 = 0;
    }
}

u32 fn_8005E55C(void) {
    u64 fn_8022C7E0(u32, u32);
    OSGetTime();
    return (u32)fn_8022C7E0(0x0, (*(u32 *)0x800000F8 >> 2));
}

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
void fn_8005F4F4(void* arg0, s32 arg1) {
    u32 saved_r31;
    u32 temp_r3;

    saved_r31 = *(u32*)((char*)arg0 + 0x40);
    temp_r3 = fn_80065E88(arg1, 0);
    if (temp_r3 != *(u32*)((char*)arg0 + 0x40)) {
        *(u32*)((char*)arg0 + 0x40) = temp_r3;
    }
    if (saved_r31 != 0U) {
        fn_80065E68();
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

void fn_8005F84C(void *arg0) {
    extern void *fn_80065484(u32);
    void **current = (void**)arg0;
    u32 val;

    while (*current != NULL) {
        val = *(u32*)((char*)*current + 0x44);
        if (val == 0) {
            current = (void**)((char*)*current + 0x4);
        } else {
            fn_80065484(val);
            return;
        }
    }

    fn_80065484(0);
}

void fn_8005F894(void *arg0, s32 arg1) {
    M2C_UNK fn_80065484(u32, M2C_UNK, s32);
    u32 var_r0;
    void *var_r3;

    var_r3 = arg0;
loop_4:
    if (var_r3 == NULL) {
        var_r0 = 0U;
    } else {
        var_r0 = M2C_FIELD(var_r3, u32 *, 0x44);
        if (var_r0 != 0U) {

        } else {
            var_r3 = M2C_FIELD(var_r3, void **, 4);
            goto loop_4;
        }
    }
    fn_80065484(var_r0, -1, arg1);
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
    u16 val = M2C_FIELD(arg0, u16 *, 0x7C);
    
    if (val == arg1) {
        return 1;
    }
    
    val = M2C_FIELD(arg0, u16 *, 0x7E);
    if (val == arg1) {
        return 1;
    }
    
    val = M2C_FIELD(arg0, u16 *, 0x80);
    if (val == arg1) {
        return 1;
    }
    
    val = M2C_FIELD(arg0, u16 *, 0x82);
    if (val == arg1) {
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
    void *var_r30;
    u32 var_r31;
    void *var_r3;
    void *var_r4;

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
        var_r3 = var_r30;
        while (var_r3 != NULL) {
            var_r4 = M2C_FIELD(var_r3, void **, 0x48);
            if (var_r4 != NULL) {
                goto found2;
            }
            var_r3 = M2C_FIELD(var_r3, void **, 4);
        }
        var_r4 = NULL;
found2:
        var_r31 += (((M2C_FIELD(M2C_FIELD(var_r4, void **, 0x48), s16 *, 0xA) * 12) + 31) & ~31) / 2 * 2;
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

s32 fn_80061824(s32 arg0) {
    extern char lbl_8026B590[];
    if (arg0 == 0) {
        fn_8006DA64(lbl_8026B590 + 0x28, 0x50, lbl_8026B590 + 0xAB);
    }
    return fn_800618E4(arg0);
}

void fn_80063934(void) {
    M2C_UNK fn_8005C7E8();
    fn_8005C7E8();
}

s32 fn_800639B4(void) {
    return 0;
}

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

s32 fn_800675E0(void) {
    extern s32 lbl_80366DD4;
    return lbl_80366DD4;
}

s32 fn_80067FD0(s32 arg0)
{
    return 0x64;
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

s32 fn_80068548(void) {
    extern u32* lbl_803672F8;
    return (s32)lbl_803672F8;
}

void fn_80068550(s32 arg0) {
    extern u32* lbl_803672F8;
    lbl_803672F8 = (u32*)arg0;
}

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

s32 fn_8006A374(void) {
    extern s32 lbl_8036730C;
    return lbl_8036730C;
}

s32 fn_8006A37C(void) {
    extern s32 lbl_80367308;
    return lbl_80367308;
}

void fn_8006C6F8(void *arg0) {
    M2C_UNK fn_80066D00(M2C_UNK);
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r5 & 0xF025C820) {
        if (temp_r5 & 0x80000000) {
            M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK), 0x94)(1);
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

void fn_8006C944(void *arg0) {
    M2C_UNK fn_8006C2A4(void *, M2C_UNK);
    M2C_UNK fn_80223E5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802246B8(M2C_UNK, s32);
    unsigned temp_r4;
    register unsigned temp_r31;
    register u8 temp_r30;

    temp_r30 = M2C_FIELD(arg0, u8 *, 0xB);
    temp_r31 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r30) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((unsigned short)temp_r31 & 0x8FFF7FDF);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0) | 0x50000000 | 0x4000;
        M2C_FIELD(arg0, s32 *, 0) = temp_r4;
        M2C_FIELD(arg0, u8 *, 0xB) = 0xFFU;
        fn_802246B8(0, temp_r4);
        fn_80223E5C(6, 0x80, 1, 0, 0);
        fn_8006C2A4(arg0, 1);
        M2C_FIELD(arg0, u8 *, 0xB) = temp_r30;
        M2C_FIELD(arg0, s32 *, 0) = temp_r31;
    }
}

void fn_8006C9E8(void *arg0) {
    u8 temp_r31;
    s32 temp_r30;
    s32 temp_r5;

    temp_r31 = *(u8 *)((char *)arg0 + 0xB);
    temp_r30 = *(s32 *)arg0;
    if (temp_r31 != 0) {
        *(s32 *)arg0 = (s32)(temp_r30 & 0x8FFF7FDF);
        temp_r5 = *(s32 *)arg0 | 0x50000000 | 0x6000;
        *(s32 *)arg0 = temp_r5;
        *(u8 *)((char *)arg0 + 0xB) = 0xFFU;
        fn_8006C2A4(arg0, temp_r5);
        *(u8 *)((char *)arg0 + 0xB) = temp_r31;
        *(s32 *)arg0 = temp_r30;
    }
}

void fn_8006CA8C(void) {
    fn_8006C2A4(0x1);
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

void fn_8006D52C(s32 arg0) {
    M2C_ERROR(/* unknown instruction: mtspr GQR6, $r4 */);
}

void fn_8006D53C(s32 arg0) {
    M2C_ERROR(/* unknown instruction: mtspr GQR7, $r4 */);
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

void fn_8006DA5C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

int fn_8006DA64(void *arg0, int arg1, int arg2) {
    s32 fn_8005B010(void *, s32, void *, ...);
    extern u16 lbl_8026B980[8];
    fn_8005B010(arg0, arg1, lbl_8026B980, arg2);
    return 0;
}

s32 fn_8006E650(void) {
    extern s32 lbl_80367318;
    return lbl_80367318;
}

s32 fn_8006E658(void) {
    extern s32 lbl_80367324;
    return lbl_80367324;
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
extern void fn_8005C7E8(void);
void fn_8006EDA0(void *arg0) {
    fn_8005C7E8();
    *(s32 *)arg0 = 0;
}

s32 fn_8006EDD8(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + (arg1 * 8);
}

void fn_8006F00C(s8 arg0) {
    extern s8 lbl_80366DE9;
    lbl_80366DE9 = arg0;
}

s8 fn_8006F014(void) {
    extern s8 lbl_80366DE8;
    s8 temp = (s8) lbl_80366DE8;
    return temp;
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
    extern void *lbl_80311CA8;
    void *var_r5;
    void *var_r6;
    void *var_r7;

    var_r6 = (u8 *)lbl_80311CA8 + 0x4C;
    var_r7 = (u8 *)lbl_80311CA8 + 0x6C;
    *(void **)var_r7 = var_r6;
    var_r5 = (u8 *)var_r6 + 8;
    *(s32 *)((u8 *)var_r6 + 4) = arg0;
    *(void **)((u8 *)var_r7 + 4) = var_r5;
    *(s32 *)((u8 *)var_r6 + 0xC) = arg1;
    *(s32 *)((u8 *)var_r7 + 8) = 0;
    fn_80024398((u8 *)lbl_80311CA8 + 0x80, fn_800C0658(var_r5, var_r6, var_r7), 0);
}

s32 fn_8006F2B8(s32 arg1) {
    M2C_UNK fn_80121630(s32);
    fn_80121630(arg1);
    return 0;
}

s32 fn_8006F2E0(void *arg2) {
    extern s8 lbl_80366DE8;
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

void fn_8006F514(void *arg0) {
    M2C_UNK fn_8008B1B0(M2C_UNK, M2C_UNK);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x7C)();
    fn_8008B1B0(0, 0);
}

void fn_8006F6A4(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    extern s32 lbl_80367468;
    extern s32 lbl_80311CE0;
    extern s8 lbl_80366DE8;
    extern s32 lbl_80367350;
    extern s32 lbl_80367358;

    lbl_80366DE8 = -1;
    if (arg1 != 0U) {
        *(u32 *)(lbl_80311CE0 + 0xC) = arg1;
    }
    if (arg2 != 0U) {
        *(u32 *)(lbl_80367350 + 0x4) = arg2;
    }
    if (arg3 != 0U) {
        *(u32 *)(lbl_80367358 + 0x4) = arg3;
    }
    fn_80024398(&lbl_80311CE0, arg0, 0);
}

extern u8 lbl_80366DE9;
u8 fn_800701E0(u8 arg2) {
    u8 temp = lbl_80366DE9;
    u8 result = (u8)(arg2 == temp);
    return result;
}

s32 fn_800703D4(void) {
    return 0;
}

extern u16 lbl_80286860[];
void fn_800708B0(void* arg1) {
    s32 temp_r31;
    
    // Correct access to the value at offset 0x18
    temp_r31 = *(s32*)((u8*)arg1 + 0x18);
    
    if (temp_r31 == fn_8000C0C0(lbl_80286860)) {
        fn_8018DC58();
    }
    
    lbl_80366DE9 = -1;
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
            p->y += g->obj->v20() * (u32)(p->level - 4);
        }
    }
}
#pragma cplusplus reset

void fn_80070C24(void **arg0, void *arg2) {
    M2C_UNK fn_8008D510(s32, s16, s16);
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x4C)();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, void *), 0x48)(arg0, arg2);
    fn_8008D510(M2C_FIELD(arg2, u8 *, 0x39) == 0, M2C_FIELD(arg2, s16 *, 0x30), M2C_FIELD(arg2, s16 *, 0x32));
}

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

void fn_80071CE8(void *arg1) {
    if ((u8)M2C_FIELD(arg1, u8 *, 0x39) == 2) {
        s32 *ptr = (s32 *)fn_8018D900(0);
        s32 val = *ptr;
        fn_80007668(&val);
    }
}

void fn_800720C8(void *arg1) {
    u32 temp_r3_2;
    u32 temp_r3;
    s16 temp_r5;

    temp_r5 = M2C_FIELD(arg1, s16 *, 0x36);
    temp_r3 = M2C_FIELD(arg1, s16 *, 0x32) + temp_r5;
    if ((s32) ((s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1) > 0xE0) {
        temp_r3_2 = 0x1C0 - temp_r5;
        M2C_FIELD(arg1, s16 *, 0x32) = (s16) ((s32) ((temp_r3_2 >> 0x1FU) + (s32)temp_r3_2) >> 1);
    }
}

s32 fn_80072150(void) {
    extern s8 lbl_80366DE8;
    lbl_80366DE8 = 0;
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

void *fn_80072250(void) {
    extern M2C_UNK lbl_8026BB84;
    return &lbl_8026BB84 + 0x88;
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
    s16 temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(), 0x50)();
    return (s16) (0x130 - ((s32) (((u32) temp_r3 >> 0x1FU) + temp_r3) >> 1));
}

s16 fn_800722DC(void *arg0) {
    s16 temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 (**)(), 0x54)();
    return (s16) (0xE0 - ((s32) (((u32) temp_r3 >> 0x1FU) + temp_r3) >> 1));
}

s32 fn_80072320(void) {
    return 0x54;
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
extern u16 lbl_803672F8;
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

extern u8 lbl_8030F4E0[];
extern u8 lbl_803672EB;
extern u32 lbl_803672EC;
extern s32 RunQueueBits_80368518;
extern s32 RunQueueHint_8036851C;
extern void *RunQueue_80339478[256];
