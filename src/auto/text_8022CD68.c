/* string pool for double2hex / printf float specials */
static const char double2hex_strpool[] =
    "\0-INF\0-inf\0INF\0inf\0-NAN\0-nan\0NAN\0nan";

/* Functions from 0x8022CD68 to 0x80267A7C, found by decomp-toolkit. */
#include "common.h"
typedef struct RuntimeDecimal { u8 sign; s16 exponent; u8 length; u8 digits[36]; } RuntimeDecimal;

extern f32 lbl_80367068;
extern f64 lbl_8036BE20;
extern f64 lbl_8036BE28;
extern f64 lbl_8036BE30;
extern f64 lbl_8036BE38;
extern f64 lbl_8036BE40;
extern f64 lbl_8036BE48;
extern f64 lbl_8036BE50;
extern f64 lbl_8036BE58;
extern f64 lbl_8036BE60;
extern f64 lbl_8036BE68;
extern f64 lbl_8036BE70;
extern f64 lbl_8036BE78;
extern f64 lbl_8036BE80;
extern f64 lbl_8036BE88;
extern f64 lbl_8036BE90;
extern f64 lbl_8036BE98;
extern f64 lbl_8036BEA0;

extern f64 fn_80238A9C(f64, f64);

extern s32 lbl_80366F28;
extern char lbl_80282AE8[];
extern char lbl_80282B20[];
extern void (*__stdio_exit)(void);
extern void *__close_all;
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

typedef struct __InStrCtrl {
    char *NextChar;
    s32 NullCharDetected;
} __InStrCtrl;

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


void __unregister_fragment(s32 arg0) {
    extern u8 fragmentinfo_8033DD28[];
    s32 *p;

    if (arg0 < 0) {
        return;
    }
    if (arg0 >= 1) {
        return;
    }
    p = (s32 *)((u8 *)fragmentinfo_8033DD28 + arg0 * 12);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
}

s32 __register_fragment(s32 arg0, s32 arg1) {
    extern u8 fragmentinfo_8033DD28[];
    s32 *p = (s32 *)fragmentinfo_8033DD28;

    if (p[2] == 0) {
        p[0] = arg0;
        p[1] = arg1;
        p[2] = 1;
        return 0;
    }
    return -1;
}

void fn_8022D014(void *arg0)
{
    extern u8 lbl_803687E8;
    extern u8 lbl_8033DE38[];

    extern void __begin_critical_region(s32);
    extern void __end_critical_region(s32);
    extern void *memset(void *, s32, u32);
    extern void fn_8022D084(void *, void *);

    __begin_critical_region(1);

    if (lbl_803687E8 == 0) {
        memset(lbl_8033DE38, 0, 0x34);
        lbl_803687E8 = 1;
    }

    fn_8022D084(lbl_8033DE38, arg0);

    __end_critical_region(1);
}

void fn_8022D084(void *heap, void *ptr) {
    void fn_8022D0DC(void *, void *, u32);
    void fn_8022D234(void *, void *);
    u32 header;
    u32 size;

    if (ptr != NULL) {
        header = *(u32 *)((u8 *)ptr - 4);
        if ((header & 1) == 0) {
            size = *(u32 *)(header + 8);
        } else {
            size = (*(u32 *)((u8 *)ptr - 8) & ~7u) - 8;
        }
        if (size <= 0x44u) {
            fn_8022D0DC(heap, ptr, size);
        } else {
            fn_8022D234(heap, ptr);
        }
    }
}

void fn_8022CDD0(void *);
#pragma global_optimizer off
#pragma opt_strength_reduction off
void fn_8022D234(void **arg0, void *arg1) {
    u32 *block;
    u32 sizeWord;
    u32 heapRaw;
    u32 size;
    u32 *nextHeader;
    u32 *heap;
    s32 off;
    u32 *listHead;
    u32 *p;
    u32 prevSize;
    u32 *prev;
    u32 *bck;
    u32 sz;
    u32 nextSize;
    u32 *nextBlk;
    u32 nextWord;
    u32 combined;
    u32 maxFree;
    u32 flagWord;
    s32 shouldReturn;
    void **link;

    block = (u32 *)((u8 *)arg1 - 8);
    sizeWord = *(u32 *)((u8 *)arg1 - 8);
    heapRaw = *(u32 *)((u8 *)block + 4);
    size = sizeWord & ~7u;
    *block = sizeWord & ~2u;
    nextHeader = (u32 *)((u8 *)block + size);
    heap = (u32 *)(heapRaw & ~1u);
    *nextHeader = *nextHeader & ~4u;
    *(u32 *)((u8 *)nextHeader - 4) = size;
    off = (heap[3] & ~7u) - 4;
    listHead = *(u32 **)((u8 *)heap + off);
    if (listHead != 0) {
        *(u32 *)((u8 *)block + 8) = *(u32 *)((u8 *)listHead + 8);
        *(u32 *)(*(u32 *)((u8 *)block + 8) + 0xC) = (u32)block;
        *(u32 *)((u8 *)block + 0xC) = *(u32 *)((u8 *)heap + off);
        *(u32 *)(*(u32 *)((u8 *)heap + off) + 8) = (u32)block;
        *(u32 *)((u8 *)heap + off) = (u32)block;
        p = *(u32 **)((u8 *)heap + off);
        if (!(*p & 4)) {
            prevSize = *(u32 *)((u8 *)p - 4);
            if (prevSize & 2) {
                prev = p;
            } else {
                prev = (u32 *)((u8 *)p - prevSize);
                *prev = *prev & 7;
                *prev = *prev | ((prevSize + (*p & ~7u)) & ~7u);
                if (!(*prev & 2)) {
                    combined = prevSize + (*p & ~7u);
                    *(u32 *)((u8 *)prev + combined - 4) = combined;
                }
                listHead = *(u32 **)((u8 *)heap + off);
                if (listHead == p) {
                    *(u32 *)((u8 *)heap + off) = *(u32 *)((u8 *)listHead + 0xC);
                }
                *(u32 *)(*(u32 *)((u8 *)p + 0xC) + 8) = *(u32 *)((u8 *)p + 8);
                bck = *(u32 **)((u8 *)p + 0xC);
                *(u32 *)(*(u32 *)((u8 *)bck + 8) + 0xC) = (u32)bck;
            }
        } else {
            prev = p;
        }
        *(u32 *)((u8 *)heap + off) = (u32)prev;
        p = *(u32 **)((u8 *)heap + off);
        sz = *p;
        nextSize = sz & ~7u;
        nextBlk = (u32 *)((u8 *)p + nextSize);
        nextWord = *nextBlk;
        if (!(nextWord & 2)) {
            *p = sz & 7;
            combined = nextSize + (nextWord & ~7u);
            *p = *p | (combined & ~7u);
            if (!(*p & 2)) {
                *(u32 *)((u8 *)p + combined - 4) = combined;
            }
            if (!(*p & 2)) {
                *(u32 *)((u8 *)p + combined) = *(u32 *)((u8 *)p + combined) & ~4u;
            } else {
                *(u32 *)((u8 *)p + combined) = *(u32 *)((u8 *)p + combined) | 4;
            }
            listHead = *(u32 **)((u8 *)heap + off);
            if (listHead == nextBlk) {
                *(u32 *)((u8 *)heap + off) = *(u32 *)((u8 *)listHead + 0xC);
            }
            if (*(u32 **)((u8 *)heap + off) == nextBlk) {
                *(u32 *)((u8 *)heap + off) = 0;
            }
            *(u32 *)(*(u32 *)((u8 *)nextBlk + 0xC) + 8) = *(u32 *)((u8 *)nextBlk + 8);
            *(u32 *)(*(u32 *)((u8 *)nextBlk + 8) + 0xC) = *(u32 *)((u8 *)nextBlk + 0xC);
        }
    } else {
        *(u32 *)((u8 *)heap + off) = (u32)block;
        *(u32 *)((u8 *)block + 8) = (u32)block;
        *(u32 *)((u8 *)block + 0xC) = (u32)block;
    }
    maxFree = **(u32 **)((u8 *)heap + off) & ~7u;
    if (*(u32 *)((u8 *)heap + 8) < maxFree) {
        *(u32 *)((u8 *)heap + 8) = maxFree;
    }
    flagWord = *(u32 *)((u8 *)heap + 0x10);
    shouldReturn = 0;
    if (!(flagWord & 2) && ((flagWord & ~7u) == ((*(u32 *)((u8 *)heap + 0xC) & ~7u) - 0x18))) {
        shouldReturn = 1;
    }
    if (shouldReturn != 0) {
        link = *(void ***)((u8 *)heap + 4);
        if ((u32 *)link == heap) {
            link = 0;
        }
        if (*arg0 == heap) {
            *arg0 = link;
        }
        if (link != 0) {
            *link = *(void **)heap;
            *(void **)((u8 *)*link + 4) = link;
        }
        *(u32 *)((u8 *)heap + 4) = 0;
        *(u32 *)heap = 0;
        fn_8022CDD0(heap);
    }
}
#pragma opt_strength_reduction reset
#pragma global_optimizer reset
s32 fn_8022D4C8(void) {
    s32 fn_80231178(void *);
    extern char __files[];
    s32 ret;
    char *p;

    ret = 0;
    for (p = __files; p != NULL; p = *(char **)(p + 0x4c)) {
        if (((*(u16 *)(p + 4) >> 6) & 7) != 0 && fn_80231178(p) != 0) {
            ret = -1;
        }
    }
    return ret;
}

void fn_8022E660(void* arg0, void* arg1, int arg2) {
    void** v1;
    int v2;
    int v5;
    int v6 = 0x40;
    int v7 = 0x20;
    int i;

    if (arg2 >= 0) {
        v2 = arg2 * 8;
    } else {
        v2 = arg2 * -8;
    }
    
    v1 = (void**)arg0;
    v1[0] = arg1;
    v1[1] = arg1;
    v1[2] = arg1;
    v1[3] = arg1;

    if (v2 >= 0) {
        v5 = v2 >> 3;
    } else {
        v5 = v2 / 8;
    }
    
    i = 0;
    while (i < v5) {
        v1[i + 4] = arg1;
        i++;
    }

    if (v6 >= 0) {
        v7 = v6 >> 5;
    } else {
        v7 = v6 / 32;
    }
    
    i = 0;
    while (i < v7) {
        v1[i + 4 + v5] = arg1;
        i++;
    }

    v1[4 + v5 + v7] = arg1;
    v1[5 + v5 + v7] = arg1;
}

#pragma use_lmw_stmw on
void fn_8022E804(void *dst, f64 x) {
    u64 __div2u(u32, u32, u32, u32);
    u64 __mod2u(u32, u32, u32, u32);
    u64 fn_8022CC2C(f64);
    void fn_8022F1C0(void *, s32);
    void fn_80230944(void *, void *, void *);
    f64 fn_802382EC(s32 *, f64);
    f64 fn_80238378(s32, f64);
    void fn_8023853C(f64 *);
    extern f64 lbl_8036BDC8;
    u8 dig[0x2C];
    u8 sp38[0x2C];
    f64 sp30;
    f64 sp28;
    f64 sp20;
    f64 sp18;
    f64 sp10;
    f64 sp8;
    s8 sign;
    u8 *digp;
    s32 zero;
    u32 hi;
    u32 ul;
    f64 f31;
    s32 hx;
    s32 clas;
    s32 clas2;
    s32 m;
    u32 xbits;
    s32 n;
    s32 j;
    s32 k;
    u32 xb;
    u32 lo;
    u64 uq;
    u8 *p;
    u8 *q;
    u8 t;
    u8 idx;
    s32 expadj;
    s8 ch;

    sp8 = x;
    sign = (s8)((*(u32 *)&sp8) >> 31);
    if (lbl_8036BDC8 == x) {
        *(s8 *)dst = sign;
        *(s16 *)((u8 *)dst + 2) = 0;
        ((u8 *)dst)[4] = 1;
        ((u8 *)dst)[5] = 0;
        return;
    }
    sp28 = x;
    hx = *(s32 *)&sp28;
    switch (hx & 0x7FF00000) {
    case 0x7FF00000:
        if ((hx & 0xFFFFF) || *((s32 *)&sp28 + 1) != 0) {
            clas = 1;
        } else {
            clas = 2;
        }
        break;
    case 0:
        if ((hx & 0xFFFFF) || *((s32 *)&sp28 + 1) != 0) {
            clas = 5;
        } else {
            clas = 3;
        }
        break;
    default:
        clas = 4;
        break;
    }
    if (clas <= 2) {
        *(s8 *)dst = sign;
        *(s16 *)((u8 *)dst + 2) = 0;
        ((u8 *)dst)[4] = 1;
        sp20 = sp8;
        hx = *(s32 *)&sp20;
        switch (hx & 0x7FF00000) {
        case 0x7FF00000:
            if ((hx & 0xFFFFF) || *((s32 *)&sp20 + 1) != 0) {
                clas2 = 1;
            } else {
                clas2 = 2;
            }
            break;
        case 0:
            if ((hx & 0xFFFFF) || *((s32 *)&sp20 + 1) != 0) {
                clas2 = 5;
            } else {
                clas2 = 3;
            }
            break;
        default:
            clas2 = 4;
            break;
        }
        ch = 0x49;
        if (clas2 == 1) {
            ch = 0x4E;
        }
        ((u8 *)dst)[5] = ch;
        return;
    }
    if ((s8)sign != 0) {
        sp8 = -x;
    }
    f31 = fn_802382EC((s32 *)&sp10, sp8);
    sp18 = f31;
    lo = *((u32 *)&sp18 + 1);
    if (lo != 0) {
        m = 0x10;
        xbits = 0xFFFFU;
        n = 0;
        j = 0x20;
        k = m;
        while (j != 0) {
            if ((lo & xbits) == 0) {
                n += k;
                lo >>= k;
                j -= k;
            } else if (xbits == 1) {
                break;
            }
            if (m > 1) {
                m = (s32)(((u32)m >> 31) + m) >> 1;
            }
            if (xbits > 1) {
                xbits >>= m;
                k -= m;
            }
        }
    } else {
        m = 0x10;
        n = 0;
        k = m;
        xbits = (*(u32 *)&sp18) | 0x100000;
        xb = 0xFFFFU;
        j = 0x20;
        while (j != 0) {
            if ((xbits & xb) == 0) {
                n += k;
                xbits >>= k;
                j -= k;
            } else if (xb == 1) {
                break;
            }
            if (m > 1) {
                m = (s32)(((u32)m >> 31) + m) >> 1;
            }
            if (xb > 1) {
                xb >>= m;
                k -= m;
            }
        }
        n += 0x20;
    }
    expadj = 0x35 - n;
    ul = (u32)expadj;
    fn_8022F1C0(sp38, *(s32 *)&sp10 - (s32)ul);
    fn_80238378((s32)ul, f31);
    fn_8023853C(&sp30);
    uq = fn_8022CC2C(sp30);
    zero = *(s32 *)&lbl_8036BDC8;
    hi = (u32)(uq >> 32);
    ul = (u32)uq;
    dig[0] = (u8)zero;
    if (((ul ^ (u32)zero) | (hi ^ (u32)zero)) == 0) {
        *(s16 *)(dig + 2) = (s16)zero;
        dig[4] = 1;
        dig[5] = (u8)zero;
    } else {
        dig[4] = (u8)zero;
        digp = dig;
        while (((ul ^ (u32)zero) | (hi ^ (u32)zero)) != 0) {
            uq = __mod2u(hi, ul, 0, 10);
            idx = dig[4];
            dig[4] = idx + 1;
            digp[idx + 5] = (u8)(u32)uq;
            uq = __div2u(hi, ul, 0, 10);
            ul = (u32)uq;
            hi = (u32)(uq >> 32);
        }
        p = dig + 5;
        q = dig + dig[4] + 5;
        while (p < q) {
            t = *p;
            *p = *q;
            p++;
            *q = t;
            q--;
        }
        *(s16 *)(dig + 2) = dig[4] - 1;
    }
    fn_80230944(dst, dig, sp38);
    *(s8 *)dst = sign;
}
extern s32 D_8022EF64;
void fn_8022F0B4(void) {
    u8* temp_r3;
    s32 r5, r7, r6, r9, r8;
    
    temp_r3 = (u8*)0x8022CD68 + 0x5;
    r5 = *temp_r3;
    
    if (r5 != 0) {
        temp_r3 = (u8*)0x8022F0B4 + 0x5;
        r5 = *temp_r3;
        r5 = __cntlzw(r5);
        r5 = r5 >> 5;
        return;
    }
    
    temp_r3 = (u8*)0x8022F0B4 + 0x5;  
    r5 = *temp_r3;
    
    if (r5 != 0) {
        r5 = __cntlzw(r5);
        r5 = r5 >> 5;
        return;
    } 
    
    // Continue with the other checks...
    r7 = *(u8*)(0x4 + (s8*)0x8022CD68);
    r6 = *(u8*)(0x4 + (s8*)0x8022F0B4);  

    if (r7 <= r6) {
        r9 = r7;
    } else {
        r9 = r6; 
    }

    r8 = 0;

    while (r8 < r9) {
        u8* addr1 = (u8*)0x8022CD68 + 0x5 + (r8 * 1);
        u8* addr2 = (u8*)0x8022F0B4 + 0x5 + (r8 * 1);
        
        if (*addr1 != *addr2) {
            return;
        }
        r8 += 1;
    }

    // Handle return cases
    if (r9 == r7) {
        r8 = r8 - r6;
        if (r8 >= r6) {
            u8* addr = (u8*)0x8022F0B4 + 0x5 + r8;
            if (*addr == 0) {
                return;
            }
            r8++;
            while (r8 != 0) {
                addr = (u8*)0x8022F0B4 + 0x5 + r8;
                if (*addr == 0) {
                    return;
                }
                r8++; 
            }
        } else {
            return;
        }
    } else {
        r8 = r8 - r7;
        if (r8 >= r7) {
            u8* addr = (u8*)0x8022CD68 + 0x5 + r8;
            if (*addr == 0) {
                return;
            }
            r8++;
            while (r8 != 0) {
                addr = (u8*)0x8022CD68 + 0x5 + r8; 
                if (*addr == 0) {
                    return;
                }
                r8++; 
            }
        } else {
            // Default case - we're not handling this yet, just return 1
        }
    }
}

#pragma use_lmw_stmw on
void fn_80230944(u8 *dest, u8 *a, u8 *b) {
    u8 sp8[0x54];
    u8 *out;
    u8 *end;
    u8 dig_b = b[4];
    u8 dig_a = a[4];
    s32 pos = dig_a + (dig_b - 1);
    u32 acc = 0;
    s32 i, j, n, n8;
    u8 *pa, *pb;
    u32 prod;
    u8 t0, t1;
    s32 c;
    u8 *p, *base;
    u8 d;

    out = sp8 + (pos + 1);
    dest[0] = 0;
    end = out;

    while (pos > 0) {
        j = dig_b - 1;
        i = (pos - j) - 1;
        if (i < 0) {
            i = 0;
            j = pos - 1;
        }
        n = j + 1;
        {
            s32 lim = dig_a - i;
            pa = a + i + 5;
            pb = b + j + 5;
            if (n > lim) {
                n = lim;
            }
        }
        if (n > 0) {
            n8 = (u32)n >> 3;
            if (n8 != 0) {
                do {
                    t0 = pa[0]; t1 = pb[0]; prod = t0 * t1; acc += prod;
                    t0 = pa[1]; t1 = pb[-1]; prod = t0 * t1; acc += prod;
                    t0 = pa[2]; t1 = pb[-2]; prod = t0 * t1; acc += prod;
                    t0 = pa[3]; t1 = pb[-3]; prod = t0 * t1; acc += prod;
                    t0 = pa[4]; t1 = pb[-4]; prod = t0 * t1; acc += prod;
                    t0 = pa[5]; t1 = pb[-5]; prod = t0 * t1; acc += prod;
                    t0 = pa[6]; t1 = pb[-6]; prod = t0 * t1; acc += prod;
                    t0 = pa[7]; t1 = pb[-7];
                    pa += 8; pb -= 8;
                    prod = t0 * t1; acc += prod;
                } while (--n8);
            }
            n &= 7;
            if (n != 0) {
                do {
                    t0 = *pa; pa++;
                    t1 = *pb; pb--;
                    acc += t0 * t1;
                } while (--n);
            }
        }
        {
            u32 magic = acc * 0xCCCCCCCDU;
            pos--;
            d = (u8)(acc - ((magic >> 3) * 10));
            acc = magic >> 3;
            *--out = d;
        }
    }

    *(s16 *)(dest + 2) = *(s16 *)(a + 2) + *(s16 *)(b + 2);
    if (acc != 0) {
        *--out = (u8)acc;
        (*(s16 *)(dest + 2))++;
    }

    for (c = 0; c < 0x24 && out < end; c++, out++) {
        dest[c + 5] = *out;
    }
    dest[4] = (u8)c;

    if (out < end) {
        d = *out;
        if (d >= 5) {
            if (d != 5) {
                goto round_up;
            }
            p = out + 1;
            n = (s32)(end - p);
            if (p < end) {
                do {
                    if (*p != 0) {
                        goto round_up;
                    }
                    p++;
                } while (--n);
            }
            if ((out[-1] & 1) == 0) {
                goto done;
            }
        round_up:
            base = dest + 5;
            p = base + dest[4] - 1;
            for (;;) {
                if (*p < 9) {
                    (*p)++;
                    break;
                }
                if (p == base) {
                    *p = 1;
                    (*(s16 *)(dest + 2))++;
                    break;
                }
                *p = 0;
                p--;
            }
        }
    }
done:
    ;
}
#pragma use_lmw_stmw reset

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
    typedef struct {
        void *handle;       /* 0x00 */
        u8 pad0[0x14];
        u32 pos;            /* 0x18 */
        u32 buffer;         /* 0x1C */
        u32 buf_end;        /* 0x20 */
        u32 buf_ptr;        /* 0x24 */
        u32 position;       /* 0x28 */
        u32 mode;           /* 0x2C */
        u8 pad1[4];
        u32 ungetc;         /* 0x34 */
        u8 pad2[8];
        s32 (*write_proc)(void *, u32, u32 *, u32);  /* 0x40 */
        u8 pad3[4];
        u32 field_48;       /* 0x48 */
    } File;
    File *file = (File *)arg0;
    u32 n = file->buf_ptr - file->buffer;
    s32 result;

    if (n != 0) {
        file->position = n;
        result = file->write_proc(file->handle, file->buffer, &file->position, file->field_48);
        if (arg1 != NULL) {
            *arg1 = file->position;
        }
        if (result != 0) {
            return result;
        }
        file->pos += file->position;
    }
    file->buf_ptr = file->buffer;
    file->position = file->buf_end;
    file->position = file->position - (file->pos & file->mode);
    file->ungetc = file->pos;
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

u32 fwrite(const void *ptr, u32 size, u32 count, void *stream)
{
    extern void __begin_critical_region(s32);
    extern void __end_critical_region(s32);
    extern u32 __fwrite(const void *, u32, u32, void *);

    u32 result;

    __begin_critical_region(2);

    result = __fwrite(ptr, size, count, stream);

    __end_critical_region(2);

    return result;
}

int fn_80231178(void *arg0) {
    s32 __flush_buffer(void *, s32 *);
    s32 fn_8022D4C8();
    s32 fn_80231748(void *);
    typedef struct {
        u8 pad[4];
        u16 pre:7;
        u16 mode:3;
        u16 rest:6;
    } S4;
    typedef struct {
        u8 pad[4];
        u8 pre:2;
        u8 modeB:3;
        u8 rest:3;
    } B4;
    typedef struct {
        u8 pad[8];
        u8 mode:3;
        u8 rest:4;
        u8 flag:1;
    } B8;
    S4 *s4 = (S4 *)arg0;
    B4 *b4 = (B4 *)arg0;
    B8 *b8 = (B8 *)arg0;
    s32 var_r30;

    if (arg0 == NULL) {
        return fn_8022D4C8();
    }
    if (((u8) M2C_FIELD(arg0, u8 *, 0xA) != 0) || (s4->mode == 0)) {
        return -1;
    }
    if (b4->modeB == 1) {
        return 0;
    }
    if (b8->mode >= 3U) {
        b8->mode = 2;
    }
    if (b8->mode == 2) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    if (b8->mode != 1) {
        b8->mode = 0;
        return 0;
    }
    if (s4->mode != 1) {
        var_r30 = 0;
    } else {
        var_r30 = fn_80231748(arg0);
    }
    if (__flush_buffer(arg0, 0) != 0) {
        M2C_FIELD(arg0, u8 *, 0xA) = 1U;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return -1;
    }
    b8->mode = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = var_r30;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    return 0;
}

s32 fn_802312B0(void *arg0) {
    s32 __flush_buffer(void *, s32 *);
    M2C_UNK fn_8022D014(s32);
    s32 fn_8022D4C8();
    s32 fn_80231748(void *);
    typedef struct {
        u8 pad[4];
        u16 pre:7;
        u16 mode:3;
        u16 rest:6;
    } S4;
    typedef struct {
        u8 pad[4];
        u8 pre:2;
        u8 modeB:3;
        u8 rest:3;
    } B4;
    typedef struct {
        u8 pad[8];
        u8 mode:3;
        u8 flag:1;
        u8 rest:4;
    } B8;
    S4 *s4 = (S4 *)arg0;
    B4 *b4 = (B4 *)arg0;
    B8 *b8 = (B8 *)arg0;
    s32 temp_r30;
    register s32 var_r29;
    s32 var_r30;
    s32 var_r3;

    if (arg0 == NULL) {
        return -1;
    }
    if (s4->mode == 0) {
        return 0;
    }
    if (arg0 == NULL) {
        var_r29 = fn_8022D4C8();
    } else if (((u8) M2C_FIELD(arg0, u8 *, 0xA) != 0) || (s4->mode == 0)) {
        var_r29 = -1;
    } else if (b4->modeB == 1) {
        var_r29 = 0;
    } else {
        if (b8->mode >= 3U) {
            b8->mode = 2;
        }
        if (b8->mode == 2) {
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
        }
        if (b8->mode != 1) {
            var_r29 = 0;
            b8->mode = var_r29;
        } else {
            if (s4->mode != 1) {
                var_r30 = 0;
            } else {
                var_r30 = fn_80231748(arg0);
            }
            if (__flush_buffer(arg0, 0) != 0) {
                M2C_FIELD(arg0, u8 *, 0xA) = 1U;
                var_r29 = -1;
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
            } else {
                var_r29 = 0;
                b8->mode = var_r29;
                M2C_FIELD(arg0, s32 *, 0x18) = var_r30;
                M2C_FIELD(arg0, s32 *, 0x28) = var_r29;
            }
        }
    }
    temp_r30 = M2C_FIELD(arg0, s32 (**)(s32), 0x44)(M2C_FIELD(arg0, s32 *, 0));
    s4->mode = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (b8->flag) {
        fn_8022D014(M2C_FIELD(arg0, s32 *, 0x1C));
    }
    var_r3 = 0;
    if ((var_r29 != 0) || (temp_r30 != 0)) {
        var_r3 = 1;
    }
    return (s32) (-var_r3 | var_r3) >> 0x1F;
}

extern s32 fn_802314D8(s32, s32, s32);
s32 fseek(s32 arg0, s32 arg1, s32 arg2) {
    return fn_802314D8(arg0, arg1, arg2);
}

s32 fn_802314D8(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_803687F0;
    s32 __flush_buffer(void *, s32 *);
    typedef struct {
        u8 pad[4];
        u16 pre:7;
        u16 mode:3;
        u16 rest:6;
    } S4;
    typedef struct {
        u8 pad[4];
        u8 pre:2;
        u8 modeB:3;
        u8 rest:3;
    } B4;
    typedef struct {
        u8 pad[8];
        u8 mode:3;
        u8 rest:5;
    } B8;
    S4 *s4;
    B4 *b4;
    B8 *b8;
    s32 offset;
    s32 whence;
    s32 i;
    s32 result;
    u8 *p;
    s32 n;
    s32 adj;
    s32 (*seek_proc)(s32, s32 *, s32, s32);

    s4 = (S4 *)arg0;
    b4 = (B4 *)arg0;
    b8 = (B8 *)arg0;
    whence = arg2;
    offset = arg1;

    if (s4->mode != 1 || M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        lbl_803687F0 = 0x28;
        return -1;
    }

    if (b8->mode == 1) {
        if (__flush_buffer((void *)arg0, 0) != 0) {
            M2C_FIELD(arg0, u8 *, 0xA) = 1;
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            lbl_803687F0 = 0x28;
            return -1;
        }
    }

    if (whence == 1) {
        p = 0;
        whence = 0;
        adj = 0;
        if ((s4->mode != 1 && s4->mode != 2) || M2C_FIELD(arg0, u8 *, 0xA) != 0) {
            result = -1;
            lbl_803687F0 = 0x28;
        } else if (b8->mode == 0) {
            result = M2C_FIELD(arg0, s32 *, 0x18);
        } else {
            p = (u8 *)M2C_FIELD(arg0, void **, 0x1C);
            n = (u8 *)M2C_FIELD(arg0, void **, 0x24) - p;
            result = M2C_FIELD(arg0, s32 *, 0x34) + n;
            if (b8->mode >= 3U) {
                adj = (s32)b8->mode - 2;
                result -= adj;
            }
            if (((*((u8 *)arg0 + 5) >> 3) & 1) == 0) {
                for (i = n - adj; i != 0; i--) {
                    if (*p++ == '\n') {
                        result++;
                    }
                }
            }
        }
        offset += result;
    }

    if (whence != 2 && b4->modeB != 3 && (b8->mode == 2 || b8->mode == 3)) {
        if ((u32)offset >= (u32)M2C_FIELD(arg0, s32 *, 0x18) ||
            (u32)offset < (u32)M2C_FIELD(arg0, s32 *, 0x34)) {
            b8->mode = 0;
        } else {
            M2C_FIELD(arg0, void **, 0x24) =
                (u8 *)M2C_FIELD(arg0, void **, 0x1C) + (offset - M2C_FIELD(arg0, s32 *, 0x34));
            M2C_FIELD(arg0, s32 *, 0x28) = M2C_FIELD(arg0, s32 *, 0x18) - offset;
            b8->mode = 2;
        }
    } else {
        b8->mode = 0;
    }

    if (b8->mode == 0) {
        seek_proc = (s32 (*)(s32, s32 *, s32, s32))M2C_FIELD(arg0, s32 *, 0x38);
        if (seek_proc != NULL) {
            if (seek_proc(M2C_FIELD(arg0, s32 *, 0), &offset, whence, M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
                M2C_FIELD(arg0, u8 *, 0xA) = 1;
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                lbl_803687F0 = 0x28;
                return -1;
            }
        }
        M2C_FIELD(arg0, u8 *, 0x9) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = offset;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    return 0;
}

int fn_80231944(const char *str1, const char *str2, int count)
{
    str1--;
    str2--;

    count++;

    while (--count != 0) {
        u8 c1 = (u8)*++str1;
        u8 c2 = (u8)*++str2;

        if (c1 != c2) {
            return c1 >= c2 ? 1 : -1;
        }
    }

    return 0;
}

void *__memrchr(void *arg0, int arg1, u32 arg2) {
    u8 *ptr;
    u8 value;

    ptr = (u8 *)arg0 + arg2;
    value = (u8)arg1;

    while (arg2 != 0) {
        arg2--;
        ptr--;

        if (*ptr == value) {
            return ptr;
        }
    }

    return NULL;
}

void *memchr(const void *ptr, int value, unsigned long count)
{
    const unsigned char *p;
    unsigned char c;

    p = (const unsigned char *)ptr;
    c = (unsigned char)value;

    while (count != 0) {
        if (*p == c) {
            return (void *)p;
        }

        p++;
        count--;
    }

    return 0;
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

s32 fn_80232058(void *stream, const char *format, ...)
{
    s32 fwide(void *, s32);
    void __begin_critical_region(s32);
    void __end_critical_region(s32);
    s32 __FileWrite(void *, const char *, u32);

    s32 result;
    va_list args;

    if (fwide(stream, -1) >= 0) {
        return -1;
    }

    __begin_critical_region(2);

    va_start(args, format);

    result = __pformatter(__FileWrite, stream, format, args);

    va_end(args);

    __end_critical_region(2);

    return result;
}

s32 __FileWrite(s32 arg0, s32 arg1, u32 arg2) {
    u32 fwrite(s32 arg1, s32 arg2, s32 arg0);
    if (arg2 == fwrite(arg1, 1, arg0)) {
        return arg0;
    }
    return -1;
}

void fn_80233174(void *arg0, s32 arg1) {
    s32 var_r4;
    u8 *var_r5;
    u8 *var_r8;
    u8 temp_r0;
    u8 temp_r7;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r6;
    s32 temp_r7_2;
    s32 temp_r7_3;
    u8 *temp_r6_2;
    u8 *temp_r8;
    
    var_r4 = arg1;
    if (var_r4 < 0) {
        *(u16*)arg0 = 0;
        ((u8*)arg0)[2] = 1;
        ((u8*)arg0)[3] = 0x30;
        return;
    }
    temp_r7 = ((u8*)arg0)[2];
    if (var_r4 >= (s32)temp_r7) {
        goto block_3;
    }
    temp_r6_2 = (u8*)arg0 + var_r4;
    var_r8 = temp_r6_2 + 5;
    temp_r0 = *(temp_r6_2 + 5);
    temp_r0_2 = temp_r0 - 0x30;
    temp_r7_2 = temp_r0_2;
    if (temp_r7_2 == 5) {
        var_r5 = (u8*)arg0 + temp_r7 + 5;
        goto block_9;
    } else {
        if (temp_r7_2 <= 5) {
            temp_r0_3 = 0;
            goto block_15;
        }
        temp_r0_3 = 1;
        goto block_15;
    }
    
block_9:
    var_r5 -= 1;
    if (var_r5 > var_r8) {
        temp_r0 = *var_r5;
        if (temp_r0 == 0x30) {
            temp_r6 = (u32)temp_r0;
            goto block_9;
        } else {
            temp_r0_3 = 1;
        }
    } else {
        temp_r0_3 = 1;
    }
    
block_15: 
    if (var_r4 != 0) {
        temp_r8 = var_r8 - 1;
        temp_r0 = *temp_r8;
        temp_r0_5 = temp_r0 + temp_r0_3 - 0x30;
        temp_r7_3 = temp_r0_5;
        temp_r0_4 = (temp_r7_3 ^ 9) >> 1;
        temp_r6 = (u32)(temp_r0_4 - (temp_r0_4 & temp_r7_3));
        temp_r0_2 = temp_r6 >> 0x1F;
        
        if ((temp_r0_2 != 0) || (temp_r7_3 == 0)) {
            var_r4 -= 1;
            goto block_15;
        }
        *var_r8 = temp_r7_3 + 0x30;
    }
    
    if (temp_r0_3 != 0) {
        *(u16*)arg0 = (*(u16*)arg0) + 1;
        ((u8*)arg0)[2] = 1;
        ((u8*)arg0)[3] = 0x31;
        return;
    }
    
block_3:
    if (var_r4 != 0) {
        ((u8*)arg0)[2] = var_r4;
        return;
    }
    *(u16*)arg0 = 0;
    ((u8*)arg0)[2] = 1;
    ((u8*)arg0)[3] = 0x30;
}

char *double2hex(char *buffer, void *format, f64 value) {
    void fn_8022E660(void *, void *);
    void fn_80234450(char *, const char *);
    char *long2str_802338EC(s32, char *, void *);

    typedef struct {
        u8 unk0;
        u8 sign_style;
        u8 unk2;
        u8 alternate;
        u8 unk4;
        u8 conv;
        u8 pad6[6];
        s32 precision;
    } PrintFormat;

    typedef struct {
        s8 kind;
        s8 pad;
        s16 width;
    } DecCtrl;

    char sp40[0x38];
    char sp30[16];
    char sp20[16];
    f64 sp18;
    DecCtrl sp10;
    f64 sp8;
    PrintFormat *fmt;
    char *out;
    char *p;
    s32 exp;
    s32 prec;
    s32 i;
    s8 nibble;
    u8 b;
    u32 sb;

    fmt = (PrintFormat *)format;
    sp8 = value;
    sp18 = value;
    if (fmt->precision > 0x1FD) {
        return NULL;
    }

    sp10.kind = 0;
    sp10.width = 0x20;
    fn_8022E660(&sp10, sp40);

    if ((u8)sp40[5] == 'I') {
        if (*(s16 *)&sp18 & 0x8000) {
            out = buffer - 5;
            if (fmt->conv == 'A') {
                fn_80234450(out, double2hex_strpool + 1);
            } else {
                fn_80234450(out, double2hex_strpool + 6);
            }
        } else {
            out = buffer - 4;
            if (fmt->conv == 'A') {
                fn_80234450(out, double2hex_strpool + 0xB);
            } else {
                fn_80234450(out, double2hex_strpool + 0xF);
            }
        }
        return out;
    }

    if ((u8)sp40[5] == 'N') {
        if (*(u8 *)&sp8 & 0x80) {
            out = buffer - 5;
            if (fmt->conv == 'A') {
                fn_80234450(out, double2hex_strpool + 0x13);
            } else {
                fn_80234450(out, double2hex_strpool + 0x18);
            }
        } else {
            out = buffer - 4;
            if (fmt->conv == 'A') {
                fn_80234450(out, double2hex_strpool + 0x1D);
            } else {
                fn_80234450(out, double2hex_strpool + 0x21);
            }
        }
        return out;
    }

    sp30[0] = 1;
    sp30[1] = 1;
    sp30[2] = 0;
    sp30[3] = 0;
    sp30[4] = 0;
    sp30[5] = 0x64;
    *(s32 *)(sp30 + 8) = 0;
    *(s32 *)(sp30 + 12) = 1;
    *(s32 *)(sp20 + 0) = *(s32 *)(sp30 + 0);
    *(s32 *)(sp20 + 4) = *(s32 *)(sp30 + 4);
    *(s32 *)(sp20 + 8) = 0;
    *(s32 *)(sp20 + 12) = 1;

    exp = (s16)((*(u16 *)&sp18 >> 4) & 0x7FF) - 0x3FF;
    p = long2str_802338EC(exp, buffer, sp20);

    if (fmt->conv == 'a') {
        p[-1] = 'p';
        out = p - 1;
    } else {
        p[-1] = 'P';
        out = p - 1;
    }

    prec = fmt->precision;
    i = prec;
    if (prec >= 1) {
        do {
            sb = (u32)i >> 31;
            b = ((u8 *)&sp8)[((s32)(sb + i) >> 1) + 1];
            if ((((i & 1) ^ (s32)sb) - (s32)sb) != 0) {
                nibble = (s8)(b & 0xF);
            } else {
                nibble = (s8)((b >> 4) & 0xF);
            }
            if (nibble < 0xA) {
                *--out = nibble + '0';
            } else if (fmt->conv == 'a') {
                *--out = nibble + 0x57;
            } else {
                *--out = nibble + 0x37;
            }
            i -= 1;
        } while (--prec);
    }

    if (fmt->precision != 0 || fmt->alternate != 0) {
        *--out = '.';
    }

    out[-1] = '1';
    if (fmt->conv == 'a') {
        out[-2] = 'x';
        out -= 2;
    } else {
        out[-2] = 'X';
        out -= 2;
    }
    *--out = '0';

    if (*(s16 *)&sp18 & 0x8000) {
        *--out = '-';
    } else if (fmt->sign_style == 1) {
        *--out = '+';
    } else if (fmt->sign_style == 2) {
        *--out = ' ';
    }
    return out;
}

char* long2str_802338EC(s32 value, char* buffer, u32 flags) {
    char* result = buffer;
    s32 absValue = value;
    s32 sign = 0;
    int digitCount = 0;
    char* ptr = buffer;
    s32 base = (flags & 0x10) ? 16 : ((flags & 0x8) ? 8 : 10);
    u32 tempFlags = flags;

    // Handle special case of zero
    if (value == 0) {
        *buffer = '0';
        *(buffer + 1) = '\0';
        return buffer;
    }

    // Handle negative numbers
    if (value < 0) {
        absValue = -value;
        sign = 1;
    }

    ptr = buffer;

    // Convert digits to buffer in reverse order
    while (absValue > 0) {
        char digit = absValue % base;
        if (digit > 9) {
            digit += 'a' - 10;
        } else {
            digit += '0';
        }
        *(ptr++) = digit;
        absValue /= base;
        digitCount++;
    }

    // Add minus sign if needed
    if (sign) {
        *(ptr++) = '-';
    }
    
    *(ptr--) = '\0';  // Null terminate

    // Reverse the string
    while (ptr > buffer) {
        char temp = *ptr;
        *buffer = temp;
        ptr--;
        buffer++;
    }

    return result;
}

int parse_format_80233B44(char* format, char* buffer, int arg1, int arg2)
{
    int result = 0;
    int var_10 = 0;
    int var_14 = 0;
    int var_18 = 0;
    int var_1C = 0;
    unsigned char var_8 = 0;
    unsigned char var_9 = 0; 
    unsigned char var_A = 0; 
    unsigned char var_B = 0; 
    unsigned char var_C = 0; 
    unsigned char var_D = 0; 
    int i = 0;
    
    // Initialize locals
    *(unsigned char*)(buffer + 0x8) = 0;
    *(unsigned char*)(buffer + 0x9) = 1;
    *(unsigned char*)(buffer + 0xA) = 0;
    *(unsigned char*)(buffer + 0xB) = 0;
    *(unsigned char*)(buffer + 0xC) = 0;
    *(int*)(buffer + 0x10) = 0;
    *(int*)(buffer + 0x14) = 0;

    while (i < 256) // Max format length?
    {
        unsigned char c = *format++;
        
        if (c == '%')
        {
            *(unsigned char*)(buffer + 0xD) = 0;
            break;
        }

        switch (c)
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5': 
            case '6':
            case '7':
            case '8':
            case '9':
                // Decimal numbers
                if (*(unsigned char*)(buffer + 0x9) == 1 && *(unsigned char*)(buffer + 0x8) == 0)
                {
                    var_14 = (var_14 * 10) + (c - '0');
                }
                else if (*(unsigned char*)(buffer + 0xA) == 1 && *(unsigned char*)(buffer + 0x8) == 0) 
                {
                    var_18 = (var_18 * 10) + (c - '0');
                }
                break;
            case '*':
                // Variable length
                if (*(unsigned char*)(buffer + 0x9) == 1 && *(unsigned char*)(buffer + 0x8) == 0)
                {
                    var_14 = *(int*)arg2; // va_arg(arg2, int);
                }
                else if (*(unsigned char*)(buffer + 0xA) == 1 && *(unsigned char*)(buffer + 0x8) == 0)
                {
                    var_18 = *(int*)arg2; // va_arg(arg2, int);
                }
                break;
            case 'h':
                // Short format
                if (*(unsigned char*)(buffer + 0x8) == 0)
                {
                    *(unsigned char*)(buffer + 0xC) = 2;
                }
                else 
                {
                    *(unsigned char*)(buffer + 0xC) = 4;
                }
                break;
            case 'l':
                // Long format
                if (*(unsigned char*)(buffer + 0x8) == 0)
                {
                    *(unsigned char*)(buffer + 0xC) = 1; 
                }
                else 
                {
                    *(unsigned char*)(buffer + 0xC) = 3;
                }
                break;
            case 'd':
            case 'i':
                // Signed decimal
                if (*(unsigned char*)(buffer + 0x8) == 2)
                {
                    *(unsigned char*)(buffer + 0x8) = 1;
                }
                
                var_10 = *(int*)arg2; // va_arg(arg2, int);
                if (var_10 < 0)
                {
                    // Negative number handling
                    var_10 = -var_10;
                    *(unsigned char*)(buffer + 0x8) = 1; 
                }
                var_1C = var_10;
                break;
            case 'f':
            case 'F':
            case 'e':
            case 'E':
                // Float handling 
                if (*(unsigned char*)(buffer + 0xA) == 0)
                {
                    *(unsigned char*)(buffer + 0xA) = 1;
                }
                
                var_14 = *(int*)arg2; // va_arg(arg2, double); assuming double
                if (var_14 < 0)
                {
                    var_14 = -var_14;
                    *(unsigned char*)(buffer + 0x8) = 1; 
                }
                break;
            default:
                // Unrecognized character
                *(unsigned char*)(buffer + 0xD) = 0xFF;
                break;
        }

        if (*(unsigned char*)(buffer + 0xD) == 0xFF)
        {
            // Error in parsing
            break;
        }
    }

    // Final results
    *(int*)(buffer + 0x0) = var_10;
    *(int*)(buffer + 0x4) = var_14;
    *(int*)(buffer + 0x8) = var_18;
    *(int*)(buffer + 0xC) = var_1C;

    return result;
}

s32 fn_80234048(void *isc, s32 ch, s32 act)
{
    char ret;
    __InStrCtrl *Iscp = (__InStrCtrl *)isc;

    switch (act) {
    case 0:
        ret = *Iscp->NextChar;
        if (ret == '\0') {
            Iscp->NullCharDetected = 1;
            return -1;
        }
        Iscp->NextChar++;
        return (u8)ret;
    case 1:
        if (Iscp->NullCharDetected == 0) {
            Iscp->NextChar--;
        } else {
            Iscp->NullCharDetected = 0;
        }
        return ch;
    case 2:
        return Iscp->NullCharDetected;
    default:
        return 0;
    }
}

s32 fn_802340D8(s32 arg0) {
    extern void (*lbl_8033E170[])(s32);
    extern s32 __begin_critical_region(s32);
    extern s32 __end_critical_region(s32);
    extern void exit(s32);
    void (*func)(s32);

    if ((arg0 < 1) || (arg0 > 6)) {
        return -1;
    }
    __begin_critical_region(4);
    func = lbl_8033E170[arg0 - 1];
    if (func != (void (*)(s32))1) {
        lbl_8033E170[arg0 - 1] = 0;
    }
    __end_critical_region(4);
    if ((func == (void (*)(s32))1) || ((func == 0) && (arg0 == 1))) {
        return 0;
    }
    if (func == 0) {
        exit(0);
    }
    func(arg0);
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

s32 fn_80234278(u8 *arg0, u8 *arg1, u32 arg2) {
    register u8 *s1 = arg0 - 1;
    register u8 *s2 = arg1 - 1;
    register u32 c1;
    register u32 c2;
    register u32 n = arg2 + 1;

    while (--n != 0) {
        c1 = *++s1;
        c2 = *++s2;
        if (c1 != c2) {
            return c1 - c2;
        }
        if (c1 == 0) {
            break;
        }
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

void fn_802343E0(u8 *dest, u8 *src) {
    u8 *d;

    src--;
    d = dest - 1;
    while (*++d != 0) {
    }
    d--;
    while ((*++d = *++src) != 0) {
    }
}

void fn_8023440C(char *dest, const char *src, s32 count)
{
    char *dst = dest - 1;
    const char *srcPtr = src - 1;

    count++;

    while (--count != 0) {
        char value = *++srcPtr;
        *++dst = value;

        if (value == '\0') {
            while (--count != 0) {
                *++dst = '\0';
            }
            return;
        }
    }
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
    f32 fn_802345B0(M2C_UNK, s32 (*)(), s32 *, M2C_UNK *, s32 *);
    extern s32 fn_80234048();
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

    temp_f1 = fn_802345B0(0x7FFFFFFF, fn_80234048, &sp10, &temp_r0, &spC);
    temp_f2 = fabs(temp_f1);

    if ((spC != 0) || (temp_f1 != lbl_8036BE10 && ((temp_f2 < lbl_80367070) || (temp_f2 > lbl_80367078)))) {
        lbl_803687F0 = 0x22;
    }
}

s32 fn_802355BC(char *str) {
    extern s32 lbl_803687F0;
    extern s32 fn_80234048();
    extern u32 fn_8023567C(s32, s32, s32 (*)(), void *, s32 *, s32 *, s32 *);
    u32 value;
    s32 overflow;
    s32 negative;
    s32 count;
    __InStrCtrl isc;

    isc.NextChar = str;
    isc.NullCharDetected = 0;
    value = fn_8023567C(10, 0x7FFFFFFF, fn_80234048, &isc, &count, &negative, &overflow);
    if (overflow || (!negative && value > 0x7FFFFFFF) || (negative && value > 0x80000000)) {
        value = negative ? 0x80000000 : 0x7FFFFFFF;
        lbl_803687F0 = 0x22;
    } else if (negative) {
        value = -value;
    }
    return value;
}

#pragma use_lmw_stmw on
extern u8 lbl_8029E8A8[];
extern u8 lbl_8029EAA8[];
#pragma use_lmw_stmw on
u32 fn_8023567C(s32 base, s32 max_width, s32 (*ReadProc)(void *, s32, s32), void *ReadProcArg,
                s32 *chars_scanned, s32 *negative, s32 *overflow) {
    u32 limit;
    u32 value;
    s32 spaces;
    s32 state;
    s32 *csp;
    s32 *negp;
    s32 *ovfp;
    void *rpa;
    s32 (*rp)(void *, s32, s32);
    s32 mw;
    s32 b;
    s32 count;
    s32 c;
    s32 dig;
    u8 cls;

    b = base;
    mw = max_width;
    rp = ReadProc;
    rpa = ReadProcArg;
    csp = chars_scanned;
    negp = negative;
    ovfp = overflow;

    *ovfp = 0;
    *negp = 0;
    state = 1;
    count = 0;
    spaces = 0;
    value = 0;
    limit = 0;
    c = 0;

    if (b >= 0 && b != 1 && b <= 36) {
        if (mw >= 1) {
            c = (*rp)(rpa, 0, 0);
            count = 1;
            if (b != 0) {
                limit = 0xFFFFFFFFu / (u32)b;
            }
            goto check;
        }
    }
    state = 0x40;
    goto check;

loop:
    switch (state) {
    case 1:
        if ((lbl_8029E8A8[c & 0xFF] & 6) != 0) {
            c = (*rp)(rpa, 0, 0);
            spaces++;
            break;
        }
        if (c == '+') {
            count++;
            c = (*rp)(rpa, 0, 0);
        } else if (c == '-') {
            count++;
            c = (*rp)(rpa, 0, 0);
            *negp = 1;
        }
        state = 2;
        break;
    case 2:
        if (b == 0 || b == 16) {
            if (c == '0') {
                state = 4;
                count++;
                c = (*rp)(rpa, 0, 0);
                break;
            }
        }
        state = 8;
        break;
    case 4:
        if (c == 'X' || c == 'x') {
            b = 16;
            state = 8;
            count++;
            c = (*rp)(rpa, 0, 0);
            break;
        }
        if (b == 0) {
            b = 8;
        }
        state = 0x10;
        break;
    case 8:
        if (b == 0) {
            b = 10;
        }
        if (limit == 0) {
            limit = 0xFFFFFFFFu / (u32)b;
        }
        state = 0x10;
        break;
    case 0x10:
        cls = lbl_8029E8A8[c & 0xFF];
        if (cls & 0x10) {
            dig = c - '0';
            if (dig >= b) {
                state = (state == 0x10) ? 0x20 : 0x40;
                break;
            }
        } else if (cls & 0xC0) {
            dig = (c == -1) ? -1 : (s32)lbl_8029EAA8[c & 0xFF];
            dig -= 0x37;
            if (dig >= b) {
                state = (state == 0x10) ? 0x20 : 0x40;
                break;
            }
        } else {
            dig = (c == -1) ? -1 : (s32)lbl_8029EAA8[c & 0xFF];
            dig -= 0x37;
            /* fall through to accumulate — matches target */
        }
        if (value > limit) {
            *ovfp = 1;
        }
        value *= b;
        if ((u32)dig > 0xFFFFFFFFu - value) {
            *ovfp = 1;
        }
        value += dig;
        state = 0x10;
        count++;
        c = (*rp)(rpa, 0, 0);
        break;
    default:
        break;
    }

check:
    if (count <= mw && c != -1 && (state & 0x60) == 0) {
        if (state <= 0x10) {
            goto loop;
        }
    }

    if ((state & 0x34) == 0) {
        value = 0;
        *csp = 0;
    } else {
        *csp = count + spaces - 1;
    }
    (*rp)(rpa, c, 1);
    return value;
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

f64 fn_80235B4C(f64 farg0) {
    f64 sp8;
    f64 f10;
    f64 y;
    f64 N;
    f64 D;
    f64 f2;
    f64 f0;
    f64 z;
    f64 h;
    f64 Nz;
    f64 Dz;
    f64 sp10;
    s32 unksp14;
    union { f64 d; u32 w[2]; } cv;
    s32 temp_r4;
    s32 temp_r3;
    u32 temp_r0;
    u32 chk;

    sp8 = farg0;
    cv.d = sp8;
    temp_r4 = (s32)cv.w[0];
    temp_r3 = temp_r4 & 0x7FFFFFFF;
    temp_r0 = cv.w[1];

    if (temp_r3 >= 0x3FF00000) {
        chk = (u32)temp_r3 - 0x3FF00000u;
        if ((chk | temp_r0) == 0) {
            if (temp_r4 > 0) {
                return lbl_8036BE20;
            }
            return lbl_8036BE28;
        }
        return (f64)lbl_80367068;
    }
    if (temp_r3 < 0x3FE00000) {
        if (temp_r3 <= 0x3C600000) {
            return lbl_8036BE30;
        }
        f10 = farg0 * farg0;
        y = f10;
        N = ((((lbl_8036BE68 * y + lbl_8036BE60) * y + lbl_8036BE58) * y + lbl_8036BE48) * y + lbl_8036BE70) * y + lbl_8036BE80;
        D = ((((lbl_8036BE90 * y + lbl_8036BE88) * y + lbl_8036BE40) * y + lbl_8036BE50) * y + lbl_8036BE90);
        f2 = y * N / D;
        f0 = lbl_8036BE38 - farg0 * f2;
        f0 = farg0 - f0;
        return lbl_8036BE30 - f0;
    }
    if (temp_r4 < 0) {
        z = lbl_8036BE98 * (lbl_8036BE70 + farg0);
        h = fn_80238A9C(z, lbl_8036BE98);
        Nz = ((((lbl_8036BE68 * z + lbl_8036BE60) * z + lbl_8036BE58) * z + lbl_8036BE48) * z + lbl_8036BE70) * z + lbl_8036BE80;
        Dz = ((((lbl_8036BE90 * z + lbl_8036BE88) * z + lbl_8036BE40) * z + lbl_8036BE50) * z + lbl_8036BE90);
        return -((lbl_8036BEA0 * (h + (Nz / Dz * h - lbl_8036BE38))) - lbl_8036BE28);
    }
    z = lbl_8036BE98 * (lbl_8036BE70 - farg0);
    h = fn_80238A9C(z, lbl_8036BE98);
    sp10 = h;
    unksp14 = 0;
    Nz = ((((lbl_8036BE68 * z + lbl_8036BE60) * z + lbl_8036BE58) * z + lbl_8036BE48) * z + lbl_8036BE70) * z + lbl_8036BE80;
    Dz = ((((lbl_8036BE90 * z + lbl_8036BE88) * z + lbl_8036BE40) * z + lbl_8036BE50) * z + lbl_8036BE90);
    return lbl_8036BEA0 * (sp10 + (Nz / Dz * h + (-((sp10 * sp10) - z) / (h + sp10))));
}

f64 fn_80235D88(f64 x, f64 y) {
    extern f64 lbl_80282CC0[];
    int n, hx, hy, hz, ix, iy, sx, i;
    unsigned lx, ly, lz;

    hy = *(int *)&y;
    hx = *(int *)&x;
    ly = *(1 + (unsigned *)&y);
    sx = hx & 0x80000000;
    hx ^= sx;
    hy &= 0x7fffffff;
    lx = *(1 + (unsigned *)&x);

    if ((hy | ly) == 0 || (hx >= 0x7ff00000) ||
        ((hy | ((ly | -ly) >> 31)) > 0x7ff00000))
        return (x * y) / (x * y);
    if (hx <= hy) {
        if ((hx < hy) || (lx < ly))
            return x;
        if (lx == ly)
            return lbl_80282CC0[(unsigned)sx >> 31];
    }

    if (hx < 0x00100000) {
        if (hx == 0) {
            for (ix = -1043, i = lx; i > 0; i <<= 1)
                ix -= 1;
        } else {
            for (ix = -1022, i = (hx << 11); i > 0; i <<= 1)
                ix -= 1;
        }
    } else
        ix = (hx >> 20) - 1023;

    if (hy < 0x00100000) {
        if (hy == 0) {
            for (iy = -1043, i = ly; i > 0; i <<= 1)
                iy -= 1;
        } else {
            for (iy = -1022, i = (hy << 11); i > 0; i <<= 1)
                iy -= 1;
        }
    } else
        iy = (hy >> 20) - 1023;

    if (ix >= -1022)
        hx = 0x00100000 | (0x000fffff & hx);
    else {
        n = -1022 - ix;
        if (n <= 31) {
            hx = (hx << n) | (lx >> (32 - n));
            lx <<= n;
        } else {
            hx = lx << (n - 32);
            lx = 0;
        }
    }
    if (iy >= -1022)
        hy = 0x00100000 | (0x000fffff & hy);
    else {
        n = -1022 - iy;
        if (n <= 31) {
            hy = (hy << n) | (ly >> (32 - n));
            ly <<= n;
        } else {
            hy = ly << (n - 32);
            ly = 0;
        }
    }

    n = ix - iy;
    while (n--) {
        hz = hx - hy;
        lz = lx - ly;
        if (lx < ly)
            hz -= 1;
        if (hz < 0) {
            hx = hx + hx + (lx >> 31);
            lx = lx + lx;
        } else {
            if ((hz | lz) == 0)
                return lbl_80282CC0[(unsigned)sx >> 31];
            hx = hz + hz + (lz >> 31);
            lx = lz + lz;
        }
    }
    hz = hx - hy;
    lz = lx - ly;
    if (lx < ly)
        hz -= 1;
    if (hz >= 0) {
        hx = hz;
        lx = lz;
    }

    if ((hx | lx) == 0)
        return lbl_80282CC0[(unsigned)sx >> 31];
    while (hx < 0x00100000) {
        hx = hx + hx + (lx >> 31);
        lx = lx + lx;
        iy -= 1;
    }
    if (iy >= -1022) {
        hx = ((hx - 0x00100000) | ((iy + 1023) << 20));
        *(int *)&x = hx | sx;
        *(1 + (unsigned *)&x) = lx;
    } else {
        n = -1022 - iy;
        if (n <= 20) {
            lx = (lx >> n) | ((unsigned)hx << (32 - n));
            hx >>= n;
        } else if (n <= 31) {
            lx = ((unsigned)hx << (32 - n)) | (lx >> n);
            hx = sx;
        } else {
            lx = hx >> (n - 32);
            hx = sx;
        }
        *(int *)&x = hx | sx;
        *(1 + (unsigned *)&x) = lx;
    }
    return x;
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

extern f64 lbl_8036C138;
extern f64 lbl_8036C140;
f64 fn_802381A4(f64 x) {
    s32 i0;
    u32 i1;
    s32 j0;
    u32 i;
    u32 j;

    i0 = ((s32 *)&x)[0];
    i1 = ((u32 *)&x)[1];
    j0 = ((i0 >> 20) & 0x7ff) - 0x3ff;
    if (j0 < 20) {
        if (j0 < 0) {
            if (lbl_8036C138 + x > lbl_8036C140) {
                if (i0 >= 0) {
                    i1 = 0;
                    i0 = 0;
                } else if (((i0 & 0x7fffffff) | i1) != 0) {
                    i0 = 0xbff00000;
                    i1 = 0;
                }
            }
        } else {
            i = 0x000fffff >> j0;
            if (((i0 & i) | i1) == 0) {
                return x;
            }
            if (lbl_8036C138 + x > lbl_8036C140) {
                if (i0 < 0) {
                    i0 += 0x00100000 >> j0;
                }
                i0 &= ~i;
                i1 = 0;
            }
        }
    } else if (j0 > 51) {
        if (j0 == 0x400) {
            return x + x;
        }
        return x;
    } else {
        i = 0xffffffffU >> (j0 - 20);
        if ((i1 & i) == 0) {
            return x;
        }
        if (lbl_8036C138 + x > lbl_8036C140) {
            if (i0 < 0) {
                if (j0 == 20) {
                    i0 += 1;
                } else {
                    j = i1 + (1 << (52 - j0));
                    if (j < i1) {
                        i0 += 1;
                    }
                    i1 = j;
                }
            }
            i1 &= ~i;
        }
    }
    ((s32 *)&x)[0] = i0;
    ((u32 *)&x)[1] = i1;
    return x;
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

extern f64 lbl_8036C150;
extern f64 lbl_8036C158;
extern f64 lbl_8036C160;
extern f64 lbl_8036C168;
extern f64 lbl_8036C170;
f64 fn_80238378(s32 arg0, f64 farg0) {
    f64 sp10;
    f64 sp8;
    s32 temp_r5;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5_2;
    s32 var_r0;
    s32 var_r4;
    u32 temp_r5_3;
    f64 temp_f1;
    f64 var_f1;

    var_f1 = farg0;
    sp10 = var_f1;
    temp_r5 = *(s32*)(&sp10); // 0x10(r1) 
    temp_r4 = temp_r5 & 0x7FF00000;
    sp8 = var_f1; // 0x8(r1)

    switch (temp_r4) {
        case 0x7FF00000:
            if ((temp_r5 & 0xFFFFF) || (*((u32*)0x8036A14C) != 0)) {
                var_r0 = 1;
            } else {
                var_r0 = 2;
            }
            break;
        case 0x0:
            if ((temp_r5 & 0xFFFFF) || (*((u32*)0x8036A14C) != 0)) {
                var_r0 = 5;
            } else {
                var_r0 = 3;
            }
            break;
        default:
            var_r0 = 4;
            break;
    }

    if (var_r0 > 2) {
        temp_f1 = lbl_8036C150;
        if (temp_f1 == var_f1) {
            return var_f1;
        }
        temp_r5_2 = *(u32*)(&sp8);
        var_r4 = (temp_r5_2 >> 0x14U) & 0x7FF;
        if (var_r4 == 0) {
            if ((*((u32*)0x8036A120)) == 0) {
                return var_f1;
            }
            temp_f1 = sp8 * lbl_8036C158;
            sp8 = temp_f1;
            var_r4 = (((*(u32*)(&sp8)) >> 0x14U) & 0x7FF) - 0x36;
            if ((arg0 < 0xFFFF3CB0)) {
                return lbl_8036C160 * temp_f1;
            }
        }
        if (var_r4 == 0x7FF) {
            return 2.0 * sp8;
        }
        temp_r4_2 = var_r4 + arg0;
        if (temp_r4_2 > 0x7FE) {
            return lbl_8036C168 * fn_802380A8(lbl_8036C168, sp8);
        }
        if (temp_r4_2 > 0) {
            temp_r5_3 = ((*(u32*)(&sp8) & 0x800FFFFF) | (temp_r4_2 << 0x14));
            return (f64)(temp_r5_3);
        }
        if (temp_r4_2 <= -0x36) {
            if (arg0 > 0xC350) {
                return lbl_8036C168 * fn_802380A8(lbl_8036C168, (f64)(sp8));
            }
            return lbl_8036C160 * fn_802380A8(lbl_8036C160, (f64)(sp8));
        }
        temp_r5_3 = ((*(u32*)(&sp8) & 0x800FFFFF) | ((temp_r4_2 + 0x36) << 0x14));
        return lbl_8036C170 * (f64)(temp_r5_3);
    }

    return var_f1;
}

#pragma global_optimizer off
f64 fn_80236C94(f64 farg0, f64 farg1) {
    extern f64 lbl_8036C010;
    extern f64 lbl_8036C018;
    extern f64 lbl_8036C020;
    extern f64 lbl_8036C028;
    extern f64 lbl_8036C030;
    extern f64 lbl_8036C038;
    extern f64 lbl_8036C040;
    extern f64 lbl_8036C048;
    extern f64 lbl_8036C050;
    f64 qx;
    f64 x;
    f64 z;
    f64 r;
    s32 ix;

    x = farg0;
    ix = ((s32 *)&x)[0] & 0x7FFFFFFF;
    if (ix < 0x3E400000) {
        if ((s32)farg0 == 0) {
            return lbl_8036C010;
        }
    }
    z = x * x;
    r = z * (((((lbl_8036C040 * z + lbl_8036C038) * z + lbl_8036C030) * z + lbl_8036C028) * z + lbl_8036C020) * z + lbl_8036C018);
    if (ix < 0x3FD33333) {
        return lbl_8036C010 - ((lbl_8036C048 * z) - ((z * r) - (x * farg1)));
    }
    if (ix > 0x3FE90000) {
        qx = lbl_8036C050;
    } else {
        ((s32 *)&qx)[0] = ix - 0x00200000;
        ((s32 *)&qx)[1] = 0;
    }
    return (lbl_8036C010 - qx) - (((lbl_8036C048 * z) - qx) - ((z * r) - (x * farg1)));
}
#pragma global_optimizer reset
f64 fn_80238638(f64 farg0) {
    f64 sp10[2];
    f64 sp8;
    s32 temp_r0;
    s32 temp_r3;

    sp8 = farg0;
    temp_r3 = *(s32 *)&sp8 & 0x7FFFFFFF;
    if (temp_r3 <= 0x3FE921FB) {
        return fn_80237BDC(0, farg0, 0.0);
    }
    if (temp_r3 >= 0x7FF00000) {
        return farg0 - farg0;
    }
    temp_r0 = fn_802368F4(sp10, farg0) & 3;
    switch (temp_r0) {
    case 1:
        return fn_80236C94(sp10[0], sp10[1]);
    case 2:
        return -fn_80237BDC(1, sp10[0], sp10[1]);
    case 0:
        return fn_80237BDC(1, sp10[0], sp10[1]);
    default:
        return -fn_80236C94(sp10[0], sp10[1]);
    }
}

  extern f64 lbl_8036C180;
  extern f64 lbl_80282ED8[];
  extern f64 lbl_8036C0D0;
  extern f64 lbl_8036C0D8;
  extern f64 lbl_8036C0E0;
  extern f64 lbl_8036C0E8;
  extern f64 lbl_8036C0F0;
  extern f64 lbl_8036C0F8;
  extern f64 lbl_8036C100;
extern f64 lbl_80282F40[];
extern f64 lbl_8036C108;
extern f64 lbl_8036C110;
extern f64 lbl_8036C118;
extern f64 lbl_8036C120;
extern f64 lbl_8036C128;

f64 fn_80237C7C(s32 arg0, f64 farg0, f64 farg1) {
    extern f64 lbl_8036C0D0;
    extern f64 lbl_8036C0D8;
    extern f64 lbl_8036C0E0;
    extern f64 lbl_8036C0E8;
    extern f64 lbl_8036C0F0;
    extern f64 lbl_8036C0F8;
    extern f64 lbl_8036C100;
    extern f64 lbl_80282ED8[];
    f64 st[3];
    f64 z;
    f64 w;
    f64 r;
    f64 v;
    f64 s;
    f64 a;
    f64 y;
    f64 *T;
    s32 ix;
    s32 hx;
    s32 sf;

    y = farg1;
    st[0] = farg0;
    hx = ((s32 *)&st[0])[0];
    ix = hx & 0x7FFFFFFF;
    if (ix < 0x3E300000 && (s32)farg0 == 0) {
        if (((arg0 + 1) | (ix | ((s32 *)&st[0])[1])) == 0) {
            farg0 = __fabs(farg0);
            return lbl_8036C0D0 / farg0;
        }
        if (arg0 == 1) {
            return farg0;
        }
        return lbl_8036C0D8 / farg0;
    }
    if (ix >= 0x3FE59428) {
        if (hx < 0) {
            y = -y;
            st[0] = -st[0];
        }
        z = lbl_8036C0E0 - st[0];
        a = lbl_8036C0E8 - y;
        y = lbl_8036C0F0;
        st[2] = z;
        st[0] = z + a;
    }
    T = lbl_80282ED8;
    z = st[0] * st[0];
    w = z * z;
    r = T[1] + w * (T[3] + w * (T[5] + w * (T[7] + w * (T[9] + w * T[11]))));
    v = z * (T[2] + w * (T[4] + w * (T[6] + w * (T[8] + w * (T[10] + w * T[12])))));
    s = z * st[0];
    st[2] = z;
    r = y + z * (s * (r + v) + y);
    r += T[0] * s;
    w = st[0] + r;
    if (ix >= 0x3FE59428) {
        sf = 1 - ((s32)((u32)hx >> 30) & 2);
        v = (f64)arg0;
        a = (f64)sf;
        (void)lbl_8036C100;
        s = w * w;
        z = w + v;
        s = s / z - r;
        return a * (v - lbl_8036C0F8 * (st[0] - s));
    }
    if (arg0 == 1) {
        return w;
    }
    st[2] = w;
    ((s32 *)&st[2])[1] = 0;
    v = r - (st[2] - st[0]);
    a = lbl_8036C0D8 / w;
    st[1] = a;
    ((s32 *)&st[1])[1] = 0;
    s = lbl_8036C0D0 + st[1] * st[2];
    return st[1] + a * (s + st[1] * v);
}

f64 fn_80237E90(f64 farg0) {
    f64 sp8;
    f64 z;
    f64 w;
    f64 s1;
    f64 s2;
    f64 a;
    f64 *aT;
    f64 *atanhi;
    f64 *atanlo;
    s32 hx;
    s32 ix;
    s32 id;

    sp8 = farg0;
    hx = ((s32 *)&sp8)[0];
    ix = hx & 0x7FFFFFFF;
    if (ix >= 0x44100000) {
        if (ix > 0x7FF00000 || (ix == 0x7FF00000 && ((s32 *)&sp8)[1] != 0)) {
            return sp8 + sp8;
        }
        if (hx > 0) {
            return lbl_80282F40[3] + lbl_80282F40[3 + 4];
        }
        return -lbl_80282F40[3] - lbl_80282F40[3 + 4];
    }
    if (ix < 0x3FDC0000) {
        if (ix < 0x3E200000 && (lbl_8036C108 + farg0) > lbl_8036C110) {
            return farg0;
        }
        id = -1;
    } else {
        a = __fabs(farg0);
        sp8 = a;
        if (ix < 0x3FF30000) {
            if (ix < 0x3FE60000) {
                id = 0;
                sp8 = ((lbl_8036C118 * a) - lbl_8036C110) / (lbl_8036C118 + a);
            } else {
                id = 1;
                sp8 = (a - lbl_8036C110) / (lbl_8036C110 + a);
            }
        } else if (ix < 0x40038000) {
            id = 2;
            sp8 = (a - lbl_8036C120) / ((lbl_8036C120 * a) + lbl_8036C110);
        } else {
            id = 3;
            sp8 = lbl_8036C128 / a;
        }
    }
    aT = lbl_80282F40 + 8;
    atanhi = lbl_80282F40;
    atanlo = lbl_80282F40 + 4;
    z = sp8 * sp8;
    w = z * z;
    s1 = z * (aT[0] + w * (aT[2] + w * (aT[4] + w * (aT[6] + w * (aT[8] + w * aT[10])))));
    s2 = w * (aT[1] + w * (aT[3] + w * (aT[5] + w * (aT[7] + w * (aT[9] + w * aT[11])))));
    if (id < 0) {
        return sp8 - (sp8 * (s1 + s2));
    }
    z = atanhi[id] - ((sp8 * (s1 + s2) - atanlo[id]) - sp8);
    if (hx < 0) {
        z = -z;
    }
    return z;
}

  f64 fn_80238710(f64 farg0) {
      f64 sp10[2];
      f64 sp8;
      s32 temp_r3;

      sp8 = farg0;
      temp_r3 = *(s32 *)&sp8 & 0x7FFFFFFF;
      if (temp_r3 <= 0x3FE921FB) {
          return fn_80237C7C(1, farg0, lbl_8036C180);
      }
      if (temp_r3 >= 0x7FF00000) {
          return farg0 - farg0;
      }
      return fn_80237C7C(1 - ((fn_802368F4(sp10, farg0) * 2) & 2), sp10[0], sp10[1]);
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

f64 fn_802387E8(f64 x) {
    extern s32 lbl_803687F0;
    extern f64 lbl_8036C188;
    u32 r;
    u32 s1;
    u32 q1;
    u32 q0;
    u32 s0;
    u32 t1;
    u32 t;
    u32 t2;
    s32 m;
    s32 ix0;
    s32 pad;
    s32 i;
    u32 ix1;
    f64 z;

    ix0 = ((s32 *)&x)[0];
    ix1 = ((u32 *)&x)[1];
    pad = 0;

    if ((u32)((ix0 & 0x7FF00000) + 0x80100000) == 0U) {
        lbl_803687F0 = 0x21;
        return x * x + x;
    }
    if (ix0 <= 0) {
        if ((ix1 | (ix0 & 0x7FFFFFFF)) == 0) {
            return x;
        }
        if (ix0 < 0) {
            f32 *nanp = (f32 *)0x80367068;
            lbl_803687F0 = 0x21;
            return *nanp;
        }
    }

    m = ix0 >> 20;
    if (m == 0) {
        goto denorm_check;
    denorm_shift:
        t = ix1 >> 11;
        ix1 <<= 21;
        ix0 |= (s32)t;
        m -= 0x15;
    denorm_check:
        if (ix0 == 0) {
            goto denorm_shift;
        }
        i = 0;
        goto denorm_bit_check;
    denorm_bit_shift:
        ix0 <<= 1;
        i += 1;
    denorm_bit_check:
        if ((ix0 & 0x100000) == 0) {
            goto denorm_bit_shift;
        }
        t = ix1 >> (32 - i);
        ix1 <<= i;
        m -= i - 1;
        ix0 |= (s32)t;
    }

    t = (u32)(m - 0x3FF);
    r = (u32)(ix0 & 0xFFFFF) | 0x100000;
    if (t & 1) {
        t = ix1 >> 31;
        ix1 += ix1;
        t = t + r;
        r = r + t;
    }
    t = ix1 >> 31;
    ix1 += ix1;
    t = t + r;
    s1 = 0;
    r = r + t;
    s0 = 0;
    q1 = 0;
    q0 = 0;
    t1 = 0x200000;
    goto loop1_check;
 loop1:
    t = s0 + t1;
    if ((s32)t <= (s32)r) {
        s0 = t + t1;
        r = r - t;
        q0 = q0 + t1;
    }
    t = ix1 >> 31;
    ix1 += ix1;
    t = t + r;
    t1 >>= 1;
    r = r + t;
 loop1_check:
    if (t1 != 0) {
        goto loop1;
    }

    t1 = 0x80000000;
    goto loop2_check;
 loop2:
    t = s0;
    t2 = s1 + t1;
    if ((s32)s0 < (s32)r) {
        goto loop2_take;
    }
    if (s0 != r) {
        goto loop2_skip;
    }
    if (t2 > ix1) {
        goto loop2_skip;
    }
 loop2_take:
    s1 = t2 + t1;
    if ((u32)((t2 & 0x80000000) + 0x80000000) == 0U && (s1 & 0x80000000) == 0) {
        s0 = s0 + 1;
    }
    r = r - t;
    if (ix1 < t2) {
        r = r - 1;
    }
    ix1 = ix1 - t2;
    q1 = q1 + t1;
 loop2_skip:
    t = ix1 >> 31;
    ix1 += ix1;
    t = t + r;
    t1 >>= 1;
    r = r + t;
 loop2_check:
    if (t1 != 0) {
        goto loop2;
    }

    if ((r | ix1) != 0) {
        z = lbl_8036C188;
        z = lbl_8036C188;
        if ((u32)(q1 + 0x10000) == 0xFFFFU) {
            q1 = 0;
            q0 = q0 + 1;
        } else {
            q1 = q1 + (q1 & 1);
        }
    }

    {
        s32 q0_odd = (s32)(q0 & 1);
        s32 hi = (s32)(q0 >> 1);
        u32 lo = q1 >> 1;
        hi += 0x3FE00000;
        if (q0_odd == 1) {
            lo |= 0x80000000;
        }
        ((u32 *)&z)[1] = lo;
        hi += ((m - 0x3FF) >> 1) << 20;
        ((s32 *)&z)[0] = hi + pad;
    }
    return z;
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

f64 fn_80238A9C(f64, f64) {
    M2C_UNK fn_802387E8();
    fn_802387E8();
}

void fn_80238ABC(void) {
    M2C_UNK fn_8023108C();
    fn_8023108C();
}

u8 *fn_80238ADC(u8 *arg0) {
    extern u16 lbl_8029E9A8[256];
    u8 *p;
    s32 c;
    s32 tmp;
    u8 *table;

    table = (u8 *)lbl_8029E9A8;
    p = arg0;
    goto check;
    do {
        tmp = (s8)c;
        if (tmp == -1) {
            tmp = -1;
        } else {
            tmp = table[(u8)tmp];
        }
        *p = (u8)tmp;
        p += 1;
    check:
        c = (u8)*p;
    } while ((s8)c != 0);
    return arg0;
}

s32 Hu_IsStub(void) {
    return 0;
}

extern u16 Ecb_8033E188[];

extern u16 Ecb_8033E188[192];
int fn_802368F4(f64 *y, f64 x) {
    int fn_80236D88();
    extern f64 lbl_8036BFB8;
    extern f64 lbl_8036BFC0;
    extern f64 lbl_8036BFC8;
    extern f64 lbl_8036BFD0;
    extern f64 lbl_8036BFD8;
    extern f64 lbl_8036BFE0;
    extern f64 lbl_8036BFE8;
    extern f64 lbl_8036BFF0;
    extern f64 lbl_8036BFF8;
    extern f64 lbl_8036C000;
    extern f64 lbl_8036C008;
    extern s32 lbl_80282E08[];
    extern s32 lbl_80282D00[];
    f64 z, w, t, r, fn;
    f64 pio2_1, pio2_1t, pio2_2, pio2_2t;
    f64 tx[3];
    int e0, i, j, nx, n, ix, hx;

    hx = *(int *)&x;
    ix = hx & 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        y[0] = x;
        y[1] = lbl_8036BFB8;
        return 0;
    }
    if (ix < 0x4002d97c) {
        if (hx > 0) {
            z = x - lbl_8036BFC0;
            if ((unsigned)(ix - 0x3ff90000) != 0x21fbU) {
                pio2_1t = lbl_8036BFC8;
                y[0] = z - pio2_1t;
                y[1] = (z - y[0]) - pio2_1t;
            } else {
                pio2_2 = lbl_8036BFD0;
                pio2_2t = lbl_8036BFD8;
                z -= pio2_2;
                y[0] = z - pio2_2t;
                y[1] = (z - y[0]) - pio2_2t;
            }
            return 1;
        } else {
            z = lbl_8036BFC0 + x;
            if ((unsigned)(ix - 0x3ff90000) != 0x21fbU) {
                pio2_1t = lbl_8036BFC8;
                y[0] = pio2_1t + z;
                y[1] = pio2_1t + (z - y[0]);
            } else {
                pio2_2 = lbl_8036BFD0;
                pio2_2t = lbl_8036BFD8;
                z += pio2_2;
                y[0] = pio2_2t + z;
                y[1] = pio2_2t + (z - y[0]);
            }
            return -1;
        }
    }
    if (ix <= 0x413921fb) {
        t = __fabs(x);
        n = (int)(lbl_8036BFE8 * t + lbl_8036BFE0);
        {
            int hi = 0x43300000;
            int lo = n ^ 0x80000000;
            *(int *)&fn = hi;
            *((int *)&fn + 1) = lo;
            fn = fn - lbl_8036C008;
        }
        pio2_1 = lbl_8036BFC0;
        pio2_1t = lbl_8036BFC8;
        r = t - pio2_1 * fn;
        w = pio2_1t * fn;
        if (n < 32 && ix != lbl_80282E08[n - 1]) {
            y[0] = r - w;
        } else {
            j = ix >> 20;
            y[0] = r - w;
            i = j - (((*(int *)&y[0]) >> 20) & 0x7ff);
            if (i > 16) {
                t = r;
                w = fn * lbl_8036BFD0;
                r = t - w;
                w = fn * lbl_8036BFD8 - ((t - r) - w);
                y[0] = r - w;
                i = j - (((*(int *)&y[0]) >> 20) & 0x7ff);
                if (i > 49) {
                    t = r;
                    w = fn * lbl_8036BFF0;
                    r = t - w;
                    w = fn * lbl_8036BFF8 - ((t - r) - w);
                    y[0] = r - w;
                }
            }
        }
        y[1] = (r - y[0]) - w;
        if (hx < 0) {
            y[0] = -y[0];
            y[1] = -y[1];
            return -n;
        }
        return n;
    }
    if (ix >= 0x7ff00000) {
        y[0] = x - x;
        y[1] = x - x;
        return 0;
    }
    e0 = (ix >> 20) - 1046;
    *(int *)&z = ix - (e0 << 20);
    *(1 + (unsigned *)&z) = *(1 + (unsigned *)&x);
    for (i = 0; i < 2; i++) {
        tx[i] = (double)((int)(z));
        z = (z - tx[i]) * lbl_8036C000;
    }
    tx[2] = z;
    nx = 3;
    while (tx[nx - 1] == lbl_8036BFB8)
        nx--;
    n = fn_80236D88(tx, y, e0, nx, 2, lbl_80282D00);
    if (hx < 0) {
        y[0] = -y[0];
        y[1] = -y[1];
        return -n;
    }
    return n;
}
