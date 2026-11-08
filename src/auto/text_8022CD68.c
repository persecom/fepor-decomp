/* Functions from 0x8022CD68 to 0x80267A7C, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_80366F28;
extern char lbl_80282AE8[];
extern char lbl_80282B20[];
extern u8 lbl_8034C110[];
extern f64 lbl_8036C368;
extern u16 Ecb_8033E188[192];u16 *D_80256B30;
extern s32 lbl_803687F8;
extern f32 lbl_8036C374;
extern s32 lbl_80368A28;
extern s32 lbl_80368A2C;
extern s32 lbl_80368A30;
extern s32 lbl_80368A34;
extern u32* lbl_80368A38;
extern void (*lbl_80368B34)(s16);
extern f32 lbl_8034C324[];
extern s32 D_80368AD0;
extern s32 lbl_80368B0C;
extern void (*__atexit_funcs[])(void);
extern s32 __atexit_curr_func;
extern void (*__console_exit)(void);
extern s32 __aborting;
extern void (*__stdio_exit)(void);
extern void (**_dtors)(void);
extern void _ExitProcess(void);
extern s16 lbl_802A1E90[];
extern u8 lbl_80368AAE;
extern u8 lbl_80368AAD;
extern u16 lbl_8035BF18[];
extern u32 lbl_8035C918[];

u32 fn_8026367C(void);
u16 fn_8025FC64(u8 arg0, u8 arg1, u8 arg2);
s32 fn_8022C568(f32 arg0);
void fn_80261934(u8 arg0, void *arg1, s32 arg2);
void fn_8026146C(s32 *);
void fn_8025FFC8(void *arg0, u8 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5);
s32 fn_80255FB0(void);
extern void func_80013934(s32 arg0);
extern s32 lbl_803689A8;
extern u16 lbl_803548B8;
extern u16 lbl_80368A08;
extern u16 lbl_8035A510[];
extern u16 lbl_8035D118[256];
extern u16 lbl_80361A98[4288];
extern f32 lbl_802831BC[];
extern f64 lbl_8036C348;
extern u16 lbl_803670C0;
extern u32 lbl_803670C8;
extern u32 lbl_800000F8;

#include "musyx/select_source.h"

typedef struct Voice {
    u8 pad0[0x110];
    u64 flags;
    u8 pad118[0x5C];
    s32 unk174;
    s32 unk178;
    s32 unk17C;
    s32 unk180;
    s32 unk184;
    s32 unk188;
    u32 unk18C;
    u32 unk190;
} Voice;

typedef struct VidList {
    struct VidList *next; /* 0x0 */
    struct VidList *prev; /* 0x4 */
    u32 vid;              /* 0x8 */
    u32 root;             /* 0xC */
} VidList;

extern u32 lbl_80368A48;

static u32 GetNewVid(void) {
    u32 vid;

    do {
        vid = lbl_80368A48++;
    } while (vid == 0xFFFFFFFF);
    return vid;
}

typedef struct GroupData {
    u8 pad0[4];
    u16 id;     /* 0x04 */
    u16 type;   /* 0x06 */
    u8 pad8[0x1C - 0x8];
    u32 unk1C;  /* 0x1C */
    u32 unk20;  /* 0x20 */
    u32 unk24;  /* 0x24 */
} GroupData;

typedef struct GroupEntry {
    GroupData *data; /* 0x0 */
    u32 unk4;        /* 0x4 */
    u32 base;        /* 0x8 */
} GroupEntry;

typedef struct GroupNode {
    struct GroupNode *next; /* 0x0 */
    u32 unk4;               /* 0x4 */
    s16 count;              /* 0x8 */
    GroupEntry entries[1];  /* 0xC */
} GroupNode;

typedef struct GroupItem {
    u16 id;
    u8 pad2[0x52];
} GroupItem;

typedef struct SynthVoice {
    struct SynthVoice *next; /* 0x000 */
    struct SynthVoice *prev; /* 0x004 */
    u8 state;                /* 0x008 */
    u8 id;                   /* 0x009 */
    u16 unkA;                /* 0x00A */
    u32 vid;                 /* 0x00C */
    u8 pad10[0xF4 - 0x10];
    u32 unkF4;               /* 0x0F4 */
    struct VidList *unkF8;   /* 0x0F8 */
    struct VidList *unkFC;   /* 0x0FC */
    u8 pad100[0x11C - 0x100];
    s32 unk11C;              /* 0x11C */
    s32 unk120;              /* 0x120 */
    u8 pad124[0xEF0 - 0x124];
    s32 unkEF0;              /* 0xEF0 */
    s32 unkEF4;              /* 0xEF4 */
    u16 unkEF8;              /* 0xEF8 */
    u8 unkEFA;               /* 0xEFA */
    u8 padEFB[0x1508 - 0xEFB];
    struct {
        u8 pad0[0x32];
        u16 unk32;
        u8 pad34[4];
    } unk1508[16];           /* 0x1508 */
} SynthVoice;

typedef struct {
    char gpr;
    char fpr;
    char reserved[2];
    char *input_arg_area;
    char *reg_save_area;
} __va_list;
typedef __va_list va_list[1];

typedef struct {
    char *buffer;
    s32 length;
    s32 position;
} __OutStr;

s32 __pformatter(s32 (*)(void *, const char *, u32), void *, const char *, va_list);
s32 fn_80232220(void *, const char *, u32);

// The structure being used in functions in this file - assumed based on offset 0xF4
typedef struct {
    u8 unkF4;  // This is likely the member accessed in function with 0xF4 offset 
} SStructType;


void fn_8022D084(void *arg1) {
    u32 temp_r5;
    u32 var_r4;

    if (arg1 != NULL) {
        temp_r5 = M2C_FIELD(arg1, u32 *, -4);
        if (!(temp_r5 & 1)) {
            var_r4 = M2C_FIELD(temp_r5, u32 *, 8);
        } else {
            var_r4 = (M2C_FIELD(arg1, u32 *, -8) & 0xFFFFFFF8) - 8;
        }
        if (var_r4 <= 0x44U) {
            fn_8022D0DC();
            return;
        }
        fn_8022D234();
    }
}

s32 fn_8022D4C8(void) {
    extern u16 __files[];
    
    u16 *var_r30;
    s32 var_r31;
    
    var_r31 = 0;
    var_r30 = __files;
    
loop_5:
    if (var_r30 != NULL) {
        if ((((u16) M2C_FIELD(var_r30, u16 *, 4) >> 6) & 7) && (fn_80231178(var_r30) != 0)) {
            var_r31 = -1;
        }
        var_r30 = M2C_FIELD(var_r30, u16 **, 0x4C);
        goto loop_5;
    }
    return var_r31;
}

s32 fn_80230BBC(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 >> 0x1F;
    return (temp_r4 ^ arg0) - temp_r4;
}

s32 fn_80230BCC(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 >> 0x1F;
    return (temp_r4 ^ arg0) - temp_r4;
}

s32 __flush_buffer(void *arg0, s32 *arg1) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = *(u32*)((char*)arg0 + 0x24) - *(u32*)((char*)arg0 + 0x1C);
    if (temp_r0 != 0) {
        *(u32*)((char*)arg0 + 0x28) = temp_r0;
        temp_r3 = (*(s32(**)(void*, u32, void*, u32))(void*)((char*)arg0 + 0x40))(*(void**)((char*)arg0 + 0x0), *(u32*)((char*)arg0 + 0x1C), (char*)arg0 + 0x28, *(u32*)((char*)arg0 + 0x48));
        if (arg1 != NULL) {
            *arg1 = *(u32*)((char*)arg0 + 0x28);
        }
        if (temp_r3 != 0) {
            return temp_r3;
        }
        *(u32*)((char*)arg0 + 0x18) = *(u32*)((char*)arg0 + 0x18) + *(u32*)((char*)arg0 + 0x28);
    }
    *(u32*)((char*)arg0 + 0x24) = *(u32*)((char*)arg0 + 0x1C);
    *(u32*)((char*)arg0 + 0x28) = *(u32*)((char*)arg0 + 0x20);
    *(u32*)((char*)arg0 + 0x28) = *(u32*)((char*)arg0 + 0x28) - (*(u32*)((char*)arg0 + 0x18) & *(u32*)((char*)arg0 + 0x2C));
    *(u32*)((char*)arg0 + 0x34) = *(u32*)((char*)arg0 + 0x18);
    return 0;
}

void __prep_buffer(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - (M2C_FIELD(arg0, s32 *, 0x18) & M2C_FIELD(arg0, s32 *, 0x2C)));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
}

void __end_critical_region(void) {

}

void __begin_critical_region(void) {

}

void __kill_critical_regions(void) {

}

extern s32 fn_802314D8(s32, s32, s32);
s32 fseek(s32 arg0, s32 arg1, s32 arg2) {
    return fn_802314D8(arg0, arg1, arg2);
}

#pragma use_lmw_stmw on
s32 fn_80231D94(char *dest, const char *fmt, ...) {
    va_list args;
    __OutStr out;
    s32 n;

    __builtin_va_info(&args);
    out.buffer = dest;
    out.length = -1;
    out.position = 0;
    n = __pformatter(fn_80232220, &out, fmt, args);
    if (dest != NULL) {
        u32 idx = (u32)-2;
        if ((u32)n < (u32)-1) {
            idx = (u32)n;
        }
        dest[idx] = 0;
    }
    return n;
}

s32 fn_80231E74(char *dest, s32 dest_len, const char *fmt, ...) {
    return 0;
}

#pragma use_lmw_stmw reset
s32 fn_80231F48(char *s, const char *fmt, va_list args) {
    __OutStr out;
    s32 n;
    u32 idx;

    out.buffer = s;
    out.length = -1;
    out.position = 0;
    n = __pformatter(fn_80232220, &out, fmt, args);
    if (s != NULL) {
        idx = (u32)-2;
        if ((u32)n < (u32)-1) {
            idx = (u32)n;
        }
        s[idx] = 0;
    }
    return n;
}

s32 fn_802340D8(s32 arg0) {
    extern u16 *lbl_8033E170;
    extern s32 __begin_critical_region(s32);
    extern s32 __end_critical_region(s32);
    extern void exit(s32);

    s32 temp_r31;
    s32 temp_r3;

    if ((arg0 < 1) || (arg0 > 6)) {
        return -1;
    }
    __begin_critical_region(4);
    temp_r3 = (s32) &lbl_8033E170[arg0];
    temp_r31 = *(s32*)temp_r3;
    if (temp_r31 != 1) {
        *(u32*)(temp_r3 - 4) = 0;
    }
    __end_critical_region(4);
    if ((temp_r31 == 1) || ((temp_r31 == 0) && (arg0 == 1))) {
        return 0;
    }
    if (temp_r31 == 0) {
        exit(0);
    }
    (*(void (*)(s32))temp_r31)(arg0);
    return 0;
}

void *fn_80234198(void *arg0, u8 *arg1) {
    u8 temp_r4;
    void *var_r3;
    void *var_r5;

    var_r5 = (void*)((uintptr_t)arg0 - 1);
    var_r3 = NULL;
loop_3:
    temp_r4 = *(u8*)var_r5;
    var_r5 = (void*)((uintptr_t)var_r5 + 1);
    if (temp_r4 != 0) {
        if (temp_r4 == *arg1) {
            var_r3 = var_r5;
        }
        goto loop_3;
    }
    return var_r3 == NULL ? (*arg1 != 0 ? NULL : var_r5) : var_r3;
}

void *fn_80234200(s32 arg0, u8 arg1) {
    u8 temp_r4;
    void *var_r3;
    void *var_r5;

    var_r5 = (void*)(arg0 - 1);
    var_r3 = NULL;
loop_3:
    temp_r4 = *(u8*)var_r5;
    var_r5 = (void*)((uintptr_t)var_r5 + 1);
    if (temp_r4 != 0) {
        if (temp_r4 == arg1) {
            var_r3 = var_r5;
        }
        goto loop_3;
    }
    return var_r3 == NULL ? (arg1 != 0 ? NULL : var_r5) : var_r3;
}

void *strchr(void *arg0, u8 arg1) {
    u8 temp_r4;
    void *var_r3;

    var_r3 = arg0;
loop_2:
    temp_r4 = *(u8*)var_r3;
    if (temp_r4 == 0) {
        if (arg1 != 0) {
            return NULL;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_r3;
    }
    if (temp_r4 != arg1) {
        var_r3 = (u8*)var_r3 + 1;
        goto loop_2;
    }
    return var_r3;
}

s32 fn_80234278(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r6;
    u8 temp_r0;
    u8 temp_r5;
    void *var_r3;
    void *var_r4;

    var_r3 = (void *)(arg0 - 1);
    var_r4 = (void *)(arg1 - 1);
    var_r6 = arg2 + 1;
loop_4:
    var_r6 -= 1;
    if (var_r6 == 0) {
        return 0;
    }
    temp_r0 = *(u8*)var_r3;
    var_r3 = (void*)((s32)var_r3 + 1);
    temp_r5 = *(u8*)var_r4;
    var_r4 = (void*)((s32)var_r4 + 1);
    if (temp_r0 != temp_r5) {
        return temp_r0 - temp_r5;
    }
    if (temp_r0 != 0) {
        goto loop_4;
    }
    return 0;
}

s32 fn_802342B8(u8 *arg0, u8 *arg1) {
    register u8 *left = arg0;
    register u8 *right = arg1;
    u32 align;
    u32 mask;
    register u32 l1;
    register u32 r1;
    register s32 x;

    l1 = *left;
    x = l1 - *right;
    if (x != 0) {
        return x;
    }
    if ((align = (u32)left & 3) != ((u32)right & 3)) {
        goto bytecopy;
    }
    if (align != 0) {
        if (l1 == 0) {
            return 0;
        }
        for (align = 3 - align; align != 0; align--) {
            l1 = *(++left);
            r1 = *(++right);
            x = l1 - r1;
            if (x != 0) {
                return x;
            }
            if (l1 == 0) {
                return 0;
            }
        }
        left++;
        right++;
    }
    l1 = *(u32 *)left;
    mask = 0x80808080;
    r1 = *(u32 *)right;
    if ((l1 - 0x01010101) & mask) {
        goto adjust;
    }
    while (l1 == r1) {
        left += 4;
        right += 4;
        l1 = *(u32 *)left;
        r1 = *(u32 *)right;
        if ((l1 - 0x01010101) & mask) {
            goto adjust;
        }
    }
    if (l1 > r1) {
        return 1;
    }
    return -1;

adjust:
    l1 = *left;
    x = l1 - *right;
    if (x != 0) {
        return x;
    }
bytecopy:
    if (l1 == 0) {
        return 0;
    }
    do {
        l1 = *(++left);
        x = l1 - *(++right);
        if (x != 0) {
            return x;
        }
    } while (l1 != 0);
    return 0;
}

void fn_802343E0(u8 *arg0, u8 *arg1) {
    u8 temp_r0;
    
    arg1 -= 1;
    arg0 -= 1;
    
    do {
        temp_r0 = *(arg0 + 1);
        arg0 += 1;
    } while (temp_r0 != 0);
    
    arg1 -= 1;
    
    do {
        temp_r0 = *(arg1 + 1);
        arg1 += 1;
        *(arg0 + 1) = temp_r0;
        arg0 += 1;
    } while (temp_r0 != 0);
}

void fn_80234450(s32 arg0, s32 arg1) {
    u32 r3_r4_diff;
    u32 temp_r5;
    u32 var_ctr;
    u8 temp_r0;
    
    r3_r4_diff = arg0 & 3;
    temp_r5 = arg1 & 3;
    
    if (r3_r4_diff == temp_r5) {
        if (temp_r5 != 0) {
            temp_r0 = *(u8 *)arg1;
            *(u8 *)arg0 = temp_r0;
            
            if (temp_r0 != 0) {
                var_ctr = 3 - temp_r5;
                if (var_ctr != 0) {
                    do {
                        u8 r0_val;
                        arg1 += 1;
                        arg0 += 1;
                        r0_val = *(u8 *)arg1;
                        *(u8 *)arg0 = r0_val;
                        
                        if (r0_val == 0) {
                            break;
                        }
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                }
            }
        }
    } else {
        temp_r0 = *(u8 *)arg1;
        *(u8 *)arg0 = temp_r0;
        
        if (temp_r0 != 0) {
            do {
                u8 r0_val;
                arg1 += 1;
                arg0 += 1;
                r0_val = *(u8 *)arg1;
                *(u8 *)arg0 = r0_val;
                
                if (r0_val == 0) {
                    break;
                }
            } while (1);
        }
    }
}

s32 strlen(const char* str) {
    const char* s = str - 1;
    do {
        s++;
    } while (*s != '\0');
    return (s - str);
}

void fn_80234524(s32 arg0) {
    f32 fn_802345B0(M2C_UNK, M2C_UNK *, s32 *, M2C_UNK *, s32 *);
    extern s32 fn_80234048;
    extern f64 lbl_80367070;
    extern f64 lbl_80367078;
    extern s32 lbl_803687F0;
    extern f64 lbl_8036BE10;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 temp_r0;
    f32 temp_f1;
    f32 temp_f2;

    sp10 = arg0;
    sp14 = 0;

    temp_f1 = fn_802345B0(0x7FFFFFFF, &fn_80234048, &sp10, &temp_r0, &spC);
    temp_f2 = fabs(temp_f1);

    if ((spC != 0) || (temp_f1 != lbl_8036BE10 && ((temp_f2 < lbl_80367070) || (temp_f2 > lbl_80367078)))) {
        lbl_803687F0 = 0x22;
    }
}

s32 fn_802355BC(s32 arg0) {
    extern s32 lbl_803687F0;
    extern void *fn_80234048;
    extern s32 fn_8023567C(s32, s32, void *, s32 *, s32 *, s32 *, s32 *);

    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u32 var_r3;

    sp14 = arg0;
    sp18 = 0;
    var_r3 = fn_8023567C(0xA, 0x7FFFFFFF, &fn_80234048, &sp14, &sp8, &spC, &sp10);
    if ((sp10 != 0) || ((spC == 0) && (var_r3 > 0x7FFFFFFFU)) || ((spC != 0) && (var_r3 > 0x80000000U))) {
        lbl_803687F0 = 0x22;
        return (spC != 0) + 0x7FFFFFFF;
    }
    if (spC != 0) {
        var_r3 = (u32) -(s32) var_r3;
    }
    return (s32) var_r3;
}

s32 fn_80235A7C(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 fn_80203AAC();
    M2C_UNK fn_8022B530(s32, s32, s32 *, s32);
    s32 fn_8023A964(M2C_UNK);
    s32 fn_8023A9D4(s32, s32);
    extern s32 lbl_803687F8;
    s32 var_r3;

    if (!(fn_80203AAC() & 0x20000000)) {
        var_r3 = 0;
        if ((s32) lbl_803687F8 == 0) {
            var_r3 = fn_8023A964(0xE100);
            if (var_r3 == 0) {
                lbl_803687F8 = 1;
            }
        }
        if (var_r3 != 0) {
            return 1;
        }
        if (fn_8023A9D4(arg1, *arg2) != 0) {
            *arg2 = 0;
            return 1;
        }
        goto block_8;
    }
block_8:
    fn_8022B530(arg0, arg1, arg2, arg3);
    return 0;
}

f64 fn_802380A8(f64 farg0, f64 farg1) {
    f64 sp10;
    f64 sp8;                                        /* compiler-managed */

    sp8 = farg0;
    sp10 = farg1;
    sp8 = (M2C_BITWISE(s32, sp10) & ~0x7FFFFFFF) | (M2C_BITWISE(s32, sp8) & 0x7FFFFFFF);
    return M2C_BITWISE(f64, sp8);
}

void fn_802380D0(void* arg0, s32 arg1, s32 arg2) {
    if (arg1 != 0) {
        *(u16*)((char*)arg0 + 0x6) = (u16)arg1;
        *(u16*)((char*)arg0 + 0x8) = (u16)arg2;
        *(u16*)((char*)arg0 + 0xA) = (u16)arg1;
        *(u16*)((char*)arg0 + 0xC) = (u16)arg2;
        *(u16*)((char*)arg0 + 0xE) = (u16)arg1;
        *(u16*)((char*)arg0 + 0x10) = (u16)arg2;
    }
}

extern f64 lbl_8036C148;
f64 fn_802382EC(s32 *arg0, f64 farg0) {
    f64 sp8;
    s32 var_r4;
    s32 var_r5;
    s32 var_r0;

    sp8 = farg0;
    *arg0 = 0;
    var_r4 = (s32)(sp8) & 0x7FFFFFFF;
    if ((var_r4 >= 0x7FF00000) || ((var_r4 | 0) == 0)) {
        return sp8;
    }
    if (var_r4 < 0x100000) {
        *arg0 = -0x36;
        sp8 = farg0 * lbl_8036C148;
        var_r4 = (s32)(sp8) & 0x7FFFFFFF;
    }
    var_r0 = (var_r4 & 0x800FFFFF) | 0x3FE00000;
    var_r5 = (var_r4 >> 0x14) + *arg0;
    *arg0 = var_r5 - 0x3FE;
    return (f64)var_r0;
}

f64 fn_80238638(f64 farg0) {
    f64 sp10;
    f64 sp8;
    s32 temp_r0;
    s32 temp_r3;

    sp8 = farg0;
    temp_r3 = (s32)(sp8) & 0x7FFFFFFF;
    if (temp_r3 <= 0x3FE921FB) {
        return fn_80237BDC(0, 0.0);
    }
    if (temp_r3 >= 0x7FF00000) {
        return farg0 - farg0;
    }
    temp_r0 = fn_802368F4(&sp10) & 3;
    switch (temp_r0) {                              /* irregular */
    case 1:
        return fn_80236C94(sp10, 0.0);
    case 2:
        return -fn_80237BDC(1, sp10, 0.0);
    case 0:
        return fn_80237BDC(1, sp10, 0.0);
    default:
        return -fn_80236C94(sp10, 0.0);
    }
}

extern f64 lbl_8036C180;
f64 fn_80238710(f64 farg0) {
    f64 sp10;
    f64 sp8;
    s32 temp_r3;

    sp8 = farg0;
    temp_r3 = (s32)(sp8) & 0x7FFFFFFF;
    if (temp_r3 <= 0x3FE921FB) {
        return fn_80237C7C(1, lbl_8036C180);
    }
    if (temp_r3 >= 0x7FF00000) {
        return farg0 - farg0;
    }
    return fn_80237C7C(1 - ((fn_802368F4(&sp10) * 2) & 2), sp10, sp10 + 8);
}

void fn_80238788(void) {
    M2C_UNK fn_80235B4C();
    fn_80235B4C();
}

void fn_802387A8(void) {
    M2C_UNK fn_80235D88();
    fn_80235D88();
}

void fn_802387C8(void) {
    M2C_UNK fn_802360C4();
    fn_802360C4();
}

f32 fn_80238A0C(void) {
    f64 fn_80238710();
    return (f32) fn_80238710();
}

f32 fn_80238A30(void) {
    f64 fn_80238638();
    return (f32) fn_80238638();
}

f32 fn_80238A54(void) {
    f64 fn_802380D0();
    return (f32) fn_802380D0();
}

f32 fn_80238A78(void) {
    f64 fn_80238788();
    return (f32) fn_80238788();
}

void fn_80238A9C(void) {
    M2C_UNK fn_802387E8();
    fn_802387E8();
}

void fn_80238ABC(void) {
    M2C_UNK fn_8023108C();
    fn_8023108C();
}

void fn_80238ADC(u8 *arg0) {
    extern u16 lbl_8029E9A8[256];
    u8 temp_r5;
    u8 var_r0;

    while ((s8) (temp_r5 = *arg0) != 0) {
        if ((s8) temp_r5 == -1) {
            var_r0 = -1U;
        } else {
            var_r0 = lbl_8029E9A8[(u8) (s8) temp_r5];
        }
        *arg0 = var_r0;
        arg0 += 1;
    }
}

s32 Hu_IsStub(void) {
    return 0;
}

s32 fn_80238E78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 EXIImm(s32, s32, s32, s32, s32);
    s32 EXISync(s32);
    
    s32 var_r31 = arg0;
    s32 var_r28 = arg1;
    s32 var_r29 = arg2;
    s32 var_r30 = arg3;
    s32 var_r27;

loop_9:
    if (var_r29 == 0) {
        return 1;
    }
    if (var_r29 < 4) {
        var_r27 = var_r29;
    } else {
        var_r27 = 4;
    }
    if (EXIImm(var_r31, var_r28, var_r27, var_r30, 0) == 0) {
        return 0;
    }
    if (EXISync(var_r31) == 0) {
        return 0;
    }
    var_r28 += var_r27;
    var_r29 -= var_r27;
    goto loop_9;
}

void EXIClearInterrupts(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = arg0 * 0x14;
    var_r0 = *(volatile u32*)(0xCC006800 + temp_r0);
    var_r0 = var_r0 & 0x7F5;
    if (arg1 != 0) {
        var_r0 |= 2;
    }
    if (arg2 != 0) {
        var_r0 |= 8;
    }
    if (arg3 != 0) {
        var_r0 |= 0x800;
    }
    *(volatile u32*)(0xCC006800 + temp_r0) = var_r0;
}

extern u16 Ecb_8033E188[];
s32 fn_80239508(s32 arg0) {
    s32 temp_r4;
    s32 var_r3;
    u16 *ptr;

    temp_r4 = arg0 << 6;
    var_r3 = __EXIProbe(arg0, temp_r4);
    if (var_r3 != 0) {
        ptr = &Ecb_8033E188[temp_r4];
        if (ptr[0x20 / sizeof(u16)] == 0) {
            if (EXIGetID(arg0, 0, &arg0) != 0) {
                var_r3 = 1;
            } else {
                var_r3 = 0;
            }
        }
    }

    if (var_r3 != 0) {
        return 1;
    }
    
    if ((*(u32 *)(0x800030C0 + (arg0 * 4))) != 0) {
        return 0;
    }
    
    return -1;
}

s32 EXILock(s32 arg0, u32 arg1, u32 arg2) {
    s32 temp_r29;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_ctr;
    void *temp_r30;
    void *var_r3;

    temp_r4 = arg0 << 6;
    temp_r30 = &Ecb_8033E188[temp_r4];
    temp_r29 = OSDisableInterrupts();
    if (*(u32*)((uintptr_t)temp_r30 + 0xC) & 0x10) {
        if (arg2 != 0U) {
            var_r3 = temp_r30;
            temp_r4_2 = *(u32*)((uintptr_t)temp_r30 + 0x24);
            var_ctr = temp_r4_2;
            if (temp_r4_2 > 0) {
loop_3:
                if (*(u32*)((uintptr_t)var_r3 + 0x28) == arg1) {
                    OSRestoreInterrupts(temp_r29);
                    return 0;
                }
                var_r3 = (char*)var_r3 + 8;
                var_ctr -= 1;
                if (var_ctr == 0) {
                    goto block_6;
                }
                goto loop_3;
            }
block_6:
            *(u32*)((uintptr_t)temp_r30 + 0x2C) = arg2;
            *(u32*)((uintptr_t)temp_r30 + (temp_r4_2 * 8) + 0x28) = arg1;
            *(u32*)((uintptr_t)temp_r30 + 0x24) = (s32) (*(u32*)((uintptr_t)temp_r30 + 0x24) + 1);
            goto block_7;
        }
block_7:
        OSRestoreInterrupts(temp_r29);
        return 0;
    }
    *(u32*)((uintptr_t)temp_r30 + 0xC) = (s32) (*(u32*)((uintptr_t)temp_r30 + 0xC) | 0x10);
    *(u32*)((uintptr_t)temp_r30 + 0x18) = arg1;
    SetExiInterruptMask(arg0, temp_r30);
    OSRestoreInterrupts(temp_r29);
    return 1;
}

s32 EXIUnlock(s32 arg0) {
    return 1;
}

s32 fn_8023A114(s32 arg0) {
    s32 r4 = arg0 << 6;
    u16* base = (u16*)Ecb_8033E188;
    return *(s32*)((u8*)base + r4 + 0xC);
}

void UnlockedHandler(void) {
    M2C_UNK EXIGetID(M2C_UNK, M2C_UNK *);
    M2C_UNK sp10;

    EXIGetID(0, &sp10);
}

s32 fn_8023ABD4(void) {
    extern u16 Si_8029EFAC[];
if ((s32) Si_8029EFAC != -1) {
        return 1;
    }
    return 0;
}

s32 fn_8023ABF4(s32 arg0) {
    extern u16 Packet_8033E248[128];
    extern s32 Si_8029EFAC;

    s32 var_r5 = 1;
    if (((s32) *(Packet_8033E248 + (arg0 << 5)) == -1) && ((s32) Si_8029EFAC != arg0)) {
        var_r5 = 0;
    }
    return var_r5;
}

s32 fn_8023B270(s32 arg0) {
    M2C_UNK OSRestoreInterrupts(s32);
    extern M2C_UNK Packet_8033E248;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r30;
    s32 var_r5;

    OSDisableInterrupts(&Packet_8033E248);
    temp_r5 = *(s32 *)0xCC006434;
    if (temp_r5 & 0x08000000) {
        var_r30 = 1;
    } else {
        var_r30 = 0;
    }
    if (arg0 != 0) {
        M2C_FIELD(&Packet_8033E248, s32 *, 0x1E0) = 0;
        var_r5 = temp_r5 | 0x08000000;
        M2C_FIELD(&Packet_8033E248, s32 *, 0x1E4) = 0;
        M2C_FIELD(&Packet_8033E248, s32 *, 0x1E8) = 0;
        M2C_FIELD(&Packet_8033E248, s32 *, 0x1EC) = 0;
    } else {
        var_r5 = temp_r5 & 0xF7FFFFFF;
    }
    temp_r5_2 = var_r5 & 0x7FFFFFFE;
    M2C_FIELD((s32 *)0xCC000000, s32 *, 0x6434) = temp_r5_2;
    OSRestoreInterrupts(temp_r5_2);
    return var_r30;
}

s32 fn_8023B3D4(u32 arg0) {
    M2C_UNK OSRestoreInterrupts(s32);
    M2C_UNK fn_8023B270(M2C_UNK);
    extern u32 lbl_8033E3E8;
    s32 temp_r31;
    s32 var_ctr;
    s32 var_r4;
    s32 var_r4_2;
    u32 *temp_r3;
    u32 *var_r3;

    var_ctr = 4;
    temp_r31 = OSDisableInterrupts();
    var_r3 = &lbl_8033E3E8;
    var_r4 = 0;
loop_1:
    if ((u32) *var_r3 == arg0) {
        (&lbl_8033E3E8)[var_r4] = 0U;
        var_r4_2 = 0;
        if ((u32) M2C_FIELD(&lbl_8033E3E8, u32 *, 0) == 0U) {
            temp_r3 = &lbl_8033E3E8 + 4;
            var_r4_2 = 1;
            if ((u32) M2C_FIELD(&lbl_8033E3E8, u32 *, 4) == 0U) {
                var_r4_2 = 2;
                if ((u32) M2C_FIELD(temp_r3, u32 *, 4) == 0U) {
                    var_r4_2 = 3;
                    if ((u32) M2C_FIELD((temp_r3 + 4), u32 *, 4) == 0U) {
                        var_r4_2 = 4;
                    }
                }
            }
        }
        if (var_r4_2 == 4) {
            fn_8023B270(0);
        }
        OSRestoreInterrupts(temp_r31);
        return 1;
    }
    var_r3 += 4;
    var_r4 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        OSRestoreInterrupts(temp_r31);
        return 0;
    }
    goto loop_1;
}

void SIInit(void) {
    M2C_UNK OSRegisterVersion(s32, M2C_UNK *);
    M2C_UNK SIGetType(M2C_UNK);
    M2C_UNK SISetSamplingRate(M2C_UNK, M2C_UNK *, M2C_UNK);
    M2C_UNK __OSSetInterruptHandler(M2C_UNK, M2C_UNK *);
    M2C_UNK __OSUnmaskInterrupts(M2C_UNK);
    extern M2C_UNK Packet_8033E248;
    extern M2C_UNK SIInterruptHandler;
    extern M2C_UNK Si_8029EFAC;
    extern s32 __SIVersion;
    OSRegisterVersion(__SIVersion, &Packet_8033E248);
    M2C_FIELD(&Packet_8033E248, s32 *, 0x60) = -1;
    M2C_FIELD(&Packet_8033E248, s32 *, 0x40) = -1;
    M2C_FIELD(&Packet_8033E248, s32 *, 0x20) = -1;
    M2C_FIELD(&Packet_8033E248, s32 *, 0) = -1;
    M2C_FIELD(&Si_8029EFAC, s32 *, 4) = 0;
    SISetSamplingRate(0, &Si_8029EFAC, -1);
    do {

    } while (M2C_FIELD((void *)0xCC006400, s32 *, 0x34) & 1);
    M2C_FIELD((void *)0xCC006400, s32 *, 0x34) = 0x80000000;
    __OSSetInterruptHandler(0x14, &SIInterruptHandler);
    __OSUnmaskInterrupts(0x800);
    SIGetType(0);
    SIGetType(1);
    SIGetType(2);
    SIGetType(3);
}

u32 fn_8023B788(s32 arg0) {
    extern M2C_UNK Type_8029EFC0;
    s32 *temp_r4;
    u32 temp_r31;

    OSDisableInterrupts();
    temp_r31 = (u32) *(u32 *)0xCC006438 >> ((3 - arg0) * 8);
    if (temp_r31 & 8) {
        temp_r4 = &Type_8029EFC0 + (arg0 * 4);
        if (!(*temp_r4 & 0x80)) {
            *temp_r4 = 8;
        }
    }
    OSRestoreInterrupts();
    return temp_r31;
}

void fn_8023B804(s32 arg0, s32 arg1) {
    s32 r3 = 0xCC006400;
    s32 offset = (arg0 * 0xC);
    *(s32*)(r3 + offset) = arg1;
}

void fn_8023B818(void) {
    *(s32 *)0xCC006438 = 0x80000000;
}

extern u16 Si_8029EFAC[10];
s32 fn_8023B930(u32 arg0) {
    s32 r31;
    
    if (arg0 == 0) {
        return Si_8029EFAC[2];
    }
    OSDisableInterrupts();
    r31 = Si_8029EFAC[2] & ~((arg0 >> 0x18U) & 0xF0);
    *(volatile u32 *)0xCC006430 = r31;
    Si_8029EFAC[2] = r31;
    OSRestoreInterrupts();
    return r31;
}

void fn_8023B99C(void)
{
    D_80368AD0 = 0;
}

void fn_8023BB34(void *alarm, void *context) {
    typedef struct SIAlarm {
        u8 pad[0x28];
    } SIAlarm;
    typedef struct SIPacket {
        s32 chan;
        void *output;
        u32 outputBytes;
        void *input;
        u32 inputBytes;
        void *callback;
        s64 fire;
    } SIPacket;
    extern SIAlarm lbl_8033E2C8[];
    extern SIPacket Packet_8033E248[];
    s32 fn_8023B57C(s32, void *, u32, void *, u32, void *);
    s32 chan;
    SIPacket *packet;

    chan = (SIAlarm *)alarm - lbl_8033E2C8;
    packet = &Packet_8033E248[chan];
    if (packet->chan != -1) {
        if (fn_8023B57C(packet->chan, packet->output, packet->outputBytes, packet->input, packet->inputBytes, packet->callback)) {
            packet->chan = -1;
        }
    }
}

u32 fn_8023C410(s32 chan) {
    u32 SIGetType(s32);
    u32 fn_8023C2C4(u32);
    return fn_8023C2C4(SIGetType(chan));
}

void fn_8023C518(void) {
    void SISetSamplingRate(u32);
    extern u32 SamplingRate_80368828;
    SISetSamplingRate(SamplingRate_80368828);
}

