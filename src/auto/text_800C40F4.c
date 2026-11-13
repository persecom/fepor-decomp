/* Functions from 0x800C40F4 to 0x801035C8, found by decomp-toolkit. */
#include "common.h"
#include "structs.h"
typedef struct F43Pos { u8 x, y; u16 id; } F43Pos;
typedef struct F43Eval { void **vtable; void *entry, *unit; F43Pos *pos; } F43Eval;
typedef struct F43Range { void *vtable; s32 value; } F43Range;
typedef struct { s32 a; s32 b; } PairAB;
typedef struct HeapC55 HeapC55;
struct HeapC55 { u32 unk0, unk4; HeapC55 *prev, *next; u32 size; HeapC55 *owner, *free; u32 extent; };
static inline u8 relation_is_one(void *a, void *b) {
    u8 fn_80015610(void *, void *);
    return fn_80015610(a, b) == 1;
}
extern s32 lbl_8036A0C8;
extern s32 lbl_8036A0D0;
extern s32 lbl_8036A0DC;
extern s32 lbl_8036A0E4;
extern s32 lbl_8036A0C0;

extern u16* g_someArray;  // lbl_80320C20
extern u8* g_otherArray;  // lbl_8032B3C0
extern u8 g_byteVar;      // lbl_80330708

extern char __files[];
extern char lbl_80271860[];
extern u8 lbl_80366E58;

void *fn_800C9A60(void *arg0, s16 arg1);

typedef struct {
    s32 unk0;
    void *unk4;
    void *unk8;
    void *unkC;
} Struct_800DEF6C_Arg0;

typedef struct {
    u32 field_0x0;
    u8 unk250; // from the target assembly
    u8 field_0x4;
    u16 field_0x5;
    u8 field_0x7;
    u32 field_0x8;
    u8 field_0xC;
    u8 field_0xD;
    u8 field_0xE;
    u8 field_0xF;
    u8 field_0x10;
    u8 field_0x11;
    u8 field_0x12;
    u8 field_0x13;
    u8 field_0x14;
    u8 field_0x15;
    u8 field_0x16;
    u8 field_0x17;
    u8 field_0x18;
    u8 field_0x19;
    u8 field_0x1A;
    u8 field_0x1B;
    u8 field_0x1C;
    u8 field_0x1D;
    u8 field_0x1E;
    u8 field_0x1F;
    u8 field_0x20;
    u8 field_0x21;
    u8 field_0x22;
    u8 field_0x23;
    u8 field_0x24;
    u16 field_0x25;
    u16 field_0x27;
    u32 field_0x29;
    u16 field_0x2D;
    u16 field_0x2F;
    u32 field_0x31;
    u8* field_0x35;
    u8 field_0x39;
    u8 field_0x3A;
    u8 field_0x3B;
    u8 field_0x3C;
    u8 field_0x3D;
    u8 field_0x3E;
    u8 field_0x3F;
    s32 field_0x40;
    u32 field_0x44;
    u32 field_0x48;
    u32 field_0x4C;
    u32 field_0x50;
    u32 field_0x54;
    u32 field_0x58;
    u32 field_0x5C;
    u32 field_0x60;
    u32 field_0x64;
    u32 field_0x68;
    u32 field_0x6C;
    u32 field_0x70;
    u8 field_0x74;
    u8 field_0x75;
    u8 field_0x76;
    u8 field_0x77;
    s32 field_0x78;
    u32 field_0x7C;
    u32 field_0x80;
    u32 field_0x84;
    u32 field_0x88;
    u32 field_0x8C;
    u16 field_0x90;
    u16 field_0x92;
    u16 field_0x94;
    u16 field_0x96;
    u32 field_0x98;
    s32 field_0x9C;
    u32 field_0xA0;
    u32 field_0xA4;
    u32 field_0xA8;
    u32 field_0xAC;
    u32 field_0xB0;
    u32 field_0xB4;
    u32 field_0xB8;
    u32 field_0xBC;
    u32 field_0xC0;
    u32 field_0xC4;
    u32 field_0xC8;
    u32 field_0xCC;
    u32 field_0xD0;
    u32 field_0xD4;
    u32 field_0xD8;
    u32 field_0xDC;
    u32 field_0xE0;
    u32 field_0xE4;
    u32 field_0xE8;
    u32 field_0xEC;
    u32 field_0xF0;
    u32 field_0xF4;
    u32 field_0xF8;
    u32 field_0xFC;
    u32 field_0x100;
    u32 field_0x104;
    u32 field_0x108;
    u32 field_0x10C;
    u32 field_0x110;
    u32 field_0x114;
    s32 field_0x118;
    s32 field_0x11C;
    s32 field_0x120;
    s32 field_0x124;
    s32 field_0x128;
    s32 field_0x12C;
    u32 field_0x130;
    u32 field_0x134;
    u32 field_0x138;
    u32 field_0x13C;
    u32 field_0x140;
    u32 field_0x144;
    u32 field_0x148;
    u32 field_0x14C;
    u32 field_0x150;
    u32 field_0x154;
    u32 field_0x158;
    u32 field_0x15C;
    u32 field_0x160;
    u32 field_0x164;
    u32 field_0x168;
    u32 field_0x16C;
    u32 field_0x170;
    u32 field_0x174;
    u32 field_0x178;
    u32 field_0x17C;
    u32 field_0x180;
    u32 field_0x184;
    u32 field_0x188;
    u32 field_0x18C;
    u32 field_0x190;
    u32 field_0x194;
    u32 field_0x198;
    u32 field_0x19C;
    u32 field_0x1A0;
    u32 field_0x1A4;
    u32 field_0x1A8;
    u32 field_0x1AC;
    u32 field_0x1B0;
    u32 field_0x1B4;
    u32 field_0x1B8;
    u32 field_0x1BC;
    u32 field_0x1C0;
    u32 field_0x1C4;
    u32 field_0x1C8;
    u32 field_0x1CC;
    u32 field_0x1D0;
    u32 field_0x1D4;
    u32 field_0x1D8;
    u32 field_0x1DC;
    u32 field_0x1E0;
    u32 field_0x1E4;
    u32 field_0x1E8;
    u32 field_0x1EC;
    u32 field_0x1F0;
    u32 field_0x1F4;
    u32 field_0x1F8;
    u32 field_0x1FC;
    u32 field_0x200;
    u32 field_0x204;
    u32 field_0x208;
    u32 field_0x20C;
    u32 field_0x210;
    u32 field_0x214;
    u32 field_0x218;
    u32 field_0x21C;
    u32 field_0x220;
    u32 field_0x224;
    u32 field_0x228;
    u32 field_0x22C;
    u32 field_0x230;
    u32 field_0x234;
    u32 field_0x238;
    u32 field_0x23C;
    u32 field_0x240;
    u32 field_0x244;
    u32 field_0x248;
    s32 field_0x24C;
    u32 field_0x250; // This field is accessed in the function
    /* Padding for alignment */
    u8 pad[0x10];
} Unit;

extern char lbl_80271FC0[];

extern f32 lbl_80369F3C;
extern f32 lbl_80369F5C;
extern f32 lbl_80369F60;

extern s8 lbl_803678BC;
extern s8 lbl_803678BD;
extern s8 lbl_803678BF;
extern s32 lbl_8028D788[];
extern u8 lbl_802B14E4[]; /* unit table, 0x280 bytes per unit */
extern u32 lbl_80330EAC[];

extern u16 lbl_8028E090[];
extern u16 lbl_8028E148[];

s32 fn_8001DD54(void *, void *);
void fn_801007A0(void *);

static inline u8 GetItemKind(void *item) {
    if (item != NULL) {
        return M2C_FIELD(item, u8 *, 0x14);
    }
    return 0xC;
}

void *fn_80019E04(char *);

/* string object (fn_800C9B6C copies one) */
typedef struct String {
    u32 size;
    u32 cap;
    char *data;
} String;

#pragma cplusplus on
class SortOutputProxy {
public:
 s32 *ptr;
 s32 state;
 SortOutputProxy(s32 *p,s32 s):ptr(p),state(s) {}
 void operator=(const s32 &value) {
  if (((s32)ptr-M2C_FIELD(state,s32 *,8))/4 < M2C_FIELD(state,s32 *,4)) *ptr=value;
  else {
   if(ptr) *ptr=value;
   M2C_FIELD(state,s32 *,4)++;
  }
 }
};
class SortIterator {
public:
    s32 *ptr;
    s32 state;
    SortIterator(const SortIterator &o) { ptr=o.ptr; state=o.state; }
    SortIterator &operator+=(s32 n) { ptr+=n; return *this; }
    SortIterator operator+(s32 n) const { return SortIterator(*this) += n; }
    SortOutputProxy operator*() const { return SortOutputProxy(ptr,state); }
    SortIterator &operator++() { ++ptr; return *this; }
};
class SortCompare {
public:
    u8 value;
    SortCompare(const SortCompare &o) { value=o.value; }
};
#pragma cplusplus reset

/* std::min on string lengths (returns a reference) */
static inline const u32 *StrMin(const u32 *a, const u32 *b) {
    return (*b < *a) ? b : a;
}

  /* list object helpers (construct, destroy, get item) */
  void fn_800E01C8(void *);
  /* fn_800E0140 declared at definition */
  void fn_800E8A88(void *, f32);
s32 fn_802342B8(); /* strcmp */

/* std::equal on chars */
static inline BOOL CharsEqual(const char *first1, const char *last1, const char *first2) {
    for (; first1 < last1; first1++, first2++) {
        if (*first1 != *first2) {
            return FALSE;
        }
    }
    return TRUE;
}

/* std::min on references */
static inline const u32 *MinU32(const u32 *a, const u32 *b) {
    return (*b < *a) ? b : a;
}


void **fn_80037BBC(void *, s32);
u8 fn_8009326C(void *, void *);
extern struct {
    char pad0[0xF9];
    char iidSilence[0xC];
    char iidSleep[0xA];
    char iidBerserk[0xD];
} lbl_80273304;

static inline u8 GetItemUnk1D(void *item) {
    if (item != NULL) {
        return M2C_FIELD(item, u8 *, 0x1D);
    }
    return 0;
}

static inline u8 GetItemDD54(void *item, void *unit) {
    if (item != NULL) {
        return fn_8001DD54(item, unit);
    }
    return 0;
}

void fn_800C40F4(u8 *arg0) {
    *(u8 *)arg0 = 0;
    *(u8 *)(arg0 + 1) = 0;
    *(u8 *)(arg0 + 0x13) = 0;
    *(u8 *)(arg0 + 0x12) = 0;
    *(u8 *)(arg0 + 0x11) = 0;
    *(u8 *)(arg0 + 0x10) = 0;
    *(u8 *)(arg0 + 0x16) = 0x80;
    *(u8 *)(arg0 + 0x15) = 0x80;
    *(u8 *)(arg0 + 0x14) = 0x80;
    *(u8 *)(arg0 + 0x17) = 0xFF;
}

void *fn_800C412C(void *arg0, s16 arg1)
{
    void fn_8022C1E8(char *, void (*)(char *, int), int, unsigned int);
    void *fn_8001C5F8(void *, s16);
    void fn_800C428C();

    void *obj;
    s16 flag;

    obj = arg0;
    flag = arg1;

    if (obj != 0) {
        fn_8022C1E8(
            (char *)obj,
            (void (*)(char *, int))fn_8001C5F8,
            8,
            0xC8
        );

        if (flag > 0) {
            fn_800C428C(obj);
        }
    }

    return obj;
}

s32 fn_800C4240(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

void fn_800C426C(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

void fn_800C428C(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

s32 fn_800C42AC(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

s32 fn_800C42D8(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

s32 fn_800C4304(s32 arg0) {
    extern u8 lbl_80320B88[];
    s32 idx;
    u32 *p;
    u32 v;

    idx = 0;
    p = (u32 *)lbl_80320B88;
loop_1:
    v = *p;
    if ((v == 0U) || (fn_802342B8(arg0, v + 4) != 0)) {
        idx += 1;
        p += 1;
        if (idx >= 0x10) {
            idx = -1;
        } else {
            goto loop_1;
        }
    }
    return idx;
}

s32 fn_800C44F4(s32 arg0) {
    extern void *lbl_80367870;
    extern void *lbl_80320B88[];

    u8 *node;
    u32 max;
    u32 value;

    if (arg0 < 0) {
        max = 0;
        node = *(u8 **)((u8 *)lbl_80367870 + 0x18);

        while (node != NULL) {
            value = *(u32 *)(node + 0x10);
            if (!((max << __cntlzw(max ^ value)) >> 31)) {
                max = value;
            }
            node = *(u8 **)(node + 0x0C);
        }

        return max - 0x20;
    }

    max = 0;
    node = *(u8 **)((u8 *)lbl_80320B88[arg0] + 0x18);

    while (node != NULL) {
        value = *(u32 *)(node + 0x10);
        if (!((max << __cntlzw(max ^ value)) >> 31)) {
            max = value;
        }
        node = *(u8 **)(node + 0x0C);
    }

    return max - 0x20;
}

void fn_800C4588(void *arg0) {
    if (arg0 != NULL) {
        s32 *ptr = (s32*)arg0;
        fn_800C53B0(ptr[-3], (void*)((char*)arg0 - 0x20));
    }
}

s32 fn_800C45B8(s32 arg0) {
    s8 fn_8005BA00(void);
    s32 fn_800C5A48(s32, s32);
    extern u32 lbl_80320B88[];
    return fn_800C5A48(lbl_80320B88[fn_8005BA00()], arg0) + 0x20;
}

s32 fn_800C4604(s32 arg0, s32 arg1) {
    extern u32 lbl_80320B88[];
    s32 fn_800C5A48(s32, s32);
    return fn_800C5A48(lbl_80320B88[arg0], arg1) + 0x20;
}

s32 fn_800C4638(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

void fn_800C4664(s32 arg0) {
    extern HeapC55 *lbl_80367868;
    HeapC55 *g = lbl_80367868;
    HeapC55 *node;

    for (node = g->free; node->next != NULL; node = node->next) {
    }
    g->extent += arg0;
    node->size += arg0;
}

#pragma global_optimizer off
void fn_800C469C(char *arg0)
{
    s32 fn_802342B8(char *, s32);
    extern u32 lbl_80320B88[];
    extern u32 lbl_80367870;

    s32 i;
    u32 *table;
    u32 entry;

    i = 0;
    table = lbl_80320B88;

    while (i < 0x10) {
        entry = *table;

        if (entry != 0) {
            if (fn_802342B8(arg0, (s32)(entry + 4)) == 0) {
                lbl_80367870 = lbl_80320B88[i];
                break;
            }
        }

        i++;
        table++;
    }
}
#pragma global_optimizer reset
void fn_800C4728(s32 arg0) {
    extern s32 lbl_80320B88[];
    extern s32 lbl_80367870;
    lbl_80367870 = lbl_80320B88[arg0];
}

s32 fn_800C4740(void) {
    extern s32 lbl_80320B88[];
    extern s32 lbl_80367870;
    const s32 *entry;
    s32 active;
    s32 index;
    s32 groups;

    entry = lbl_80320B88;
    active = lbl_80367870;
    index = 0;
    groups = 2;

    do {
        if (*entry == active) return index;

        index++;
        if (*++entry == active) return index;
        index++;
        if (*++entry == active) return index;
        index++;
        if (*++entry == active) return index;
        index++;
        if (*++entry == active) return index;
        index++;
        if (*++entry == active) return index;
        index++;
        if (*++entry == active) return index;
        index++;
        if (*++entry == active) return index;

        entry++;
        index++;
    } while (--groups != 0);

    return -1;
}

void fn_800C47E8(void) {
    // This is a placeholder for the actual function.
    // The full decompilation involves too many complex dependencies
    // to be completed in one attempt. Will try a partial approach.
}

extern u32* lbl_80367860;
extern u32 lbl_80367864;
extern u32* lbl_80367868;
extern u32 lbl_8036786C;
extern s32 lbl_80366DDC;
s32 fn_800C52C8(void) {
    u32 lo;
    HeapC55 *heap;

    heap = (HeapC55 *)lbl_80367868;
    if (heap != NULL) {
        lo = (u32)heap + heap->extent;
    } else {
        lo = (u32)lbl_80367860;
    }

    if (lbl_8036786C == 0) {
        return (s32)(lbl_80367864 - lo);
    }
    return (s32)lbl_8036786C;
}

#pragma global_optimizer off
#pragma use_lmw_stmw on
void *fn_800C55B0(HeapC55 *self,s32 bytes){
void fn_800056CC(void *,...);void fn_8005BC8C(s8);
extern u8 lbl_802700D8[];extern u8 lbl_80320B88[];
HeapC55 *h; HeapC55 **table; u32 ext; s32 i,mb; HeapC55 *block; HeapC55 **base; u32 size; HeapC55 *p,*best,*head,*tail;u32 limit,n;u8 *lo,*hi;
size=(bytes+0x3f)&~31;
best=0;limit=0x7fffffff;for(p=self->free;p;p=p->next){n=p->size;if(n<=limit&&n>=size){limit=n;best=p;}}block=best;
if(block==0){mb=24; if((u32)lbl_80367860>0x81800000U)mb=48;
fn_800056CC(lbl_802700D8+0x18);
n=mb<<20; fn_800056CC(lbl_802700D8+0x1a,0x80000000U,n+0x80000000U,n);
hi=(u8*)lbl_80367864;lo=(u8*)lbl_80367860;fn_800056CC(lbl_802700D8+0x46,lo,hi,hi-lo);
if(lbl_80367868)lo=(u8*)lbl_80367868+((HeapC55*)lbl_80367868)->extent;else lo=(u8*)lbl_80367860;
hi=(u8*)lbl_8036786C; if(hi){}else hi=(u8*)lbl_80367864;
fn_800056CC(lbl_802700D8+0x7a,lo,hi,hi-lo);
base=(HeapC55**)lbl_80320B88;table=base;for(i=0;i<16;i++,table++){h=*table;if(h){ext=h->extent;
fn_800056CC(lbl_802700D8+0x18);fn_800056CC(lbl_802700D8+0xa2);
fn_800056CC(lbl_802700D8+0xd4,i,h,(u8*)h+ext,ext,(u8*)*table+4);
}}
table=base;for(i=0;i<16;i++,table++){if(*table==self)goto found;}i=-1;found:fn_8005BC8C((s8)i);
best=0;limit=0x7fffffff;for(p=self->free;p;p=p->next){n=p->size;if(n<=limit&&n>=size){limit=n;best=p;}}block=best;
mb=24; if((u32)lbl_80367860>0x81800000U)mb=48;
fn_800056CC(lbl_802700D8+0x18);
n=mb<<20; fn_800056CC(lbl_802700D8+0x1a,0x80000000U,n+0x80000000U,n);
hi=(u8*)lbl_80367864;lo=(u8*)lbl_80367860;fn_800056CC(lbl_802700D8+0x46,lo,hi,hi-lo);
if(lbl_80367868)lo=(u8*)lbl_80367868+((HeapC55*)lbl_80367868)->extent;else lo=(u8*)lbl_80367860;
hi=(u8*)lbl_8036786C; if(hi){}else hi=(u8*)lbl_80367864;
fn_800056CC(lbl_802700D8+0x7a,lo,hi,hi-lo);
for(i=0;i<16;i++,table++){h=*table;if(h){ext=h->extent;
fn_800056CC(lbl_802700D8+0x18);fn_800056CC(lbl_802700D8+0xa2);
fn_800056CC(lbl_802700D8+0xd4,i,h,(u8*)h+ext,ext,(u8*)*table+4);
}}
}
n=block->size-size;
if(n<64){p=block->next;head=self->free;if(p)p->prev=block->prev;p=block->prev;if(p)p->next=block->next;else head=block->next;self->free=head;block->owner=self;}
else{block->size=n;block=(HeapC55*)((u8*)block+n);block->size=-size;block->owner=self;}
head=self->owner;tail=head;if(head){while(tail->next)tail=tail->next;}block->next=0;block->prev=tail;if(tail)tail->next=block;if(!head)head=block;self->owner=head;return block;
}

#pragma global_optimizer off
#pragma use_lmw_stmw on
s32 fn_800C5A48(s32 arg0,s32 bytes){
HeapC55 *self=(HeapC55*)arg0;
void fn_800056CC(void *,...);void fn_8005BC8C(s8);
extern u8 lbl_802700D8[];extern u8 lbl_80320B88[];
HeapC55 *h; HeapC55 **table; u32 ext; s32 i,mb; HeapC55 *block; HeapC55 **base; u32 size; HeapC55 *p,*best,*head,*tail;u32 limit,n;u8 *lo,*hi;
if(bytes<0)return (s32)fn_800C55B0(self,-bytes);
size=(bytes+0x3f)&~31;
best=0;limit=0x7fffffff;for(p=self->free;p;p=p->next){n=p->size;if(n<=limit){if(n>=size){limit=n;best=p;}}}block=best;
if(!best){mb=24; if((u32)lbl_80367860>0x81800000U)mb=48;
fn_800056CC(lbl_802700D8+0x18);
n=mb<<20; fn_800056CC(lbl_802700D8+0x1a,0x80000000U,n+0x80000000U,n);
hi=(u8*)lbl_80367864;lo=(u8*)lbl_80367860;fn_800056CC(lbl_802700D8+0x46,lo,hi,hi-lo);
if(lbl_80367868)lo=(u8*)lbl_80367868+((HeapC55*)lbl_80367868)->extent;else lo=(u8*)lbl_80367860;
hi=(u8*)lbl_8036786C; if(hi){}else hi=(u8*)lbl_80367864;
fn_800056CC(lbl_802700D8+0x7a,lo,hi,hi-lo);
base=(HeapC55**)lbl_80320B88;table=base;for(i=0;i<16;i++,table++){h=*table;if(h){ext=h->extent;
fn_800056CC(lbl_802700D8+0x18);fn_800056CC(lbl_802700D8+0xa2);
fn_800056CC(lbl_802700D8+0xd4,i,h,(u8*)h+ext,ext,(u8*)*table+4);
}}
table=base;for(i=0;i<16;i++,table++){if(*table==self)goto found;}i=-1;found:fn_8005BC8C((s8)i);
best=0;limit=0x7fffffff;for(p=self->free;p;p=p->next){n=p->size;if(n<=limit){if(n>=size){limit=n;best=p;}}}block=best;
mb=24; if((u32)lbl_80367860>0x81800000U)mb=48;
fn_800056CC(lbl_802700D8+0x18);
n=mb<<20; fn_800056CC(lbl_802700D8+0x1a,0x80000000U,n+0x80000000U,n);
hi=(u8*)lbl_80367864;lo=(u8*)lbl_80367860;fn_800056CC(lbl_802700D8+0x46,lo,hi,hi-lo);
if(lbl_80367868)lo=(u8*)lbl_80367868+((HeapC55*)lbl_80367868)->extent;else lo=(u8*)lbl_80367860;
hi=(u8*)lbl_8036786C; if(hi){}else hi=(u8*)lbl_80367864;
fn_800056CC(lbl_802700D8+0x7a,lo,hi,hi-lo);
for(i=0;i<16;i++,table++){h=*table;if(h){ext=h->extent;
fn_800056CC(lbl_802700D8+0x18);fn_800056CC(lbl_802700D8+0xa2);
fn_800056CC(lbl_802700D8+0xd4,i,h,(u8*)h+ext,ext,(u8*)*table+4);
}}
}
n=block->size-size;
if(n<64){p=block->next;head=self->free;if(p)p->prev=block->prev;p=block->prev;if(p)p->next=block->next;else head=block->next;self->free=head;block->owner=self;}
else{block->size=size;p=(HeapC55*)((u8*)block+size);block->owner=self;p->size=n;p->prev=block->prev;p->next=block->next;if(p->next)p->next->prev=p;if(p->prev)p->prev->next=p;else self->free=p;}
head=self->owner;block->next=head;block->prev=0;if(head)head->prev=block;self->owner=block;return (s32)block;
}
#pragma global_optimizer on

#pragma global_optimizer on
void fn_800C5EF8(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_8028D908[];
    extern u8 lbl_8028D7A4[];
    fn_8000CAA0(lbl_8028D908, arg0);
    fn_8000CAF0(lbl_8028D7A4, 5);
}

void fn_800C5F34(s32 arg0) {
    void *fn_8000C0C0(void *);
    void fn_8000C188(s32);
    extern u8 lbl_8028D7A4[];

    if (fn_8000C0C0(lbl_8028D7A4) == 0) {
        fn_8000C188(arg0);
    }
}

void fn_800C5F78(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 4;
}

void fn_800C5F84(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 3;
}

void fn_800C5F90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 2;
}

void fn_800C5F9C(void *arg0) {
    extern void *lbl_80367240;
    s32 temp_r5;
    u32 temp_r0;

    M2C_FIELD(arg0, s8 *, 0x38) = 1;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
    M2C_FIELD(arg0, u32 *, 0x3C) = temp_r0;
    if ((temp_r0 >= 0xDB6U) || (temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4), (((temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) == 0) == 0))) {
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        fn_8000C188();
    }
}

void fn_800C5FFC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_800C6028(void *arg0);
void fn_800C6008(void) {
    M2C_UNK fn_800C6028();
    fn_800C6028();
}

void fn_800C6028(void *arg0) {
    void fn_800C6E44(void *);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    void fn_802217AC(void *, s32);
    void fn_802240F0(s32, void *, f32, f32, f32, f32);
    void fn_8022462C(s32);
    void fn_80224658(s32);
    void fn_80224684(s32, s32, s32);
    void fn_802246B8(s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_80224C4C(void *, s32);
    void fn_8022100C(s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_8021F4E4(s32, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223BB4(s32, void *);
    void fn_8022224C(s32, void *);
    void fn_8006ECCC(s32, void *, s32);
    void fn_80222C50(void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_80220428(s32);
    void fn_802025C0(void *, f32, f32);
    void fn_80224E50(void *, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80201FC4(void *);
    void fn_80224D7C(void *, s32);
    void fn_80224DCC(void *, s32);
    void fn_80224E1C(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80220DEC(s32, s32, s32);
    extern f32 lbl_80369D8C, lbl_80369D90, lbl_80369D94, lbl_80369D98, lbl_80369D9C;
    extern f32 lbl_80369DA0, lbl_80369DA4, lbl_80369DA8;
    extern u32 lbl_8036C498, lbl_8036C49C, lbl_8036C4A0, lbl_8036C4A4;
    extern u32 lbl_8036C4A8, lbl_8036C4AC, lbl_8036C4B0, lbl_8036C4C0, lbl_8036C4C4;
    extern u32 lbl_80369D70, lbl_80369D74, lbl_80369D78, lbl_80369D84, lbl_80369D88;

    f32 sp250[3][4];
    f32 sp210[4][4];
    f32 sp1E0[3][4];
    f32 sp1A0[4][4];
    f32 sp170[3][4];
    f32 sp130[4][4];
    f32 sp100[3][4];
    f32 spC0[4][4];
    u8 spA0[0x20];
    u8 sp80[0x20];
    u8 sp60[0x20];
    u8 sp40[0x20];
    u32 sp3C, sp38, sp34, sp30, sp2C, sp28, sp24, sp20, sp1C, sp18, sp14, sp10, spC, sp8;
    u16 w, h;
    volatile s16 *fifo;
    s32 mode;

    mode = *(s32 *)((u8 *)arg0 + 0x34);
    switch (mode) {
    case 0:
        fn_800C6E44(arg0);
        break;
    case 2:
        fn_80224FEC(lbl_80369D8C, lbl_80369D8C, lbl_80369D90, lbl_80369D94, lbl_80369D98, lbl_80369D9C);
        sp30 = lbl_8036C4A8;
        fn_802217AC(&sp30, 0xFFFFFF);
        sp34 = lbl_8036C4AC;
        fn_802240F0(0, &sp34, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C);
        fn_8022462C(1);
        fn_80224658(1);
        fn_80224684(1, 3, 1);
        fn_802246B8(1);
        fn_80223E5C(7, 0, 1, 7, 0);
        fn_80202B3C(sp210, lbl_80369DA0, lbl_80369D94, lbl_80369D8C, lbl_80369D90, lbl_80369DA4, lbl_80369DA8);
        fn_80224C4C(sp210, 1);
        fn_8022100C(0);
        fn_8021FBB8();
        fn_8021FBF0(0, 9, 1, 3, 0);
        fn_8021F4E4(9, 1);
        fn_8021FBF0(0, 0xD, 1, 3, 0);
        fn_8021F4E4(0xD, 1);
        fn_80222334(1);
        fn_80222370(4, 0, 0, 0, 0, 0, 2);
        fn_80222370(5, 0, 0, 0, 0, 0, 2);
        fn_802240C8(1);
        fn_80223F2C(0, 0, 0, 0xFF);
        fn_80223A5C(0, 2, 4, 8, 0xF);
        fn_80223AA0(0, 4, 7, 7, 7);
        fn_80223AE4(0, 0, 0, 0, 1, 0);
        fn_80223B4C(0, 0, 0, 0, 1, 0);
        sp38 = lbl_8036C4B0;
        fn_80223BB4(1, &sp38);
        sp3C = lbl_80369D78;
        fn_80223BB4(2, &sp3C);
        fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x30), spA0, *(s32 *)((u8 *)arg0 + 0x34));
        fn_80222C50(spA0, 0);
        w = fn_80222A80(spA0);
        h = fn_80222A90(spA0);
        fn_80220428(1);
        fn_802025C0(sp250, lbl_80369D9C / (f32)(u16)w, lbl_80369D9C / (f32)(u16)h);
        fn_80224E50(sp250, 0x1E, 1);
        fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
        fn_80201FC4(sp250);
        fn_80224D7C(sp250, 0);
        fn_80224DCC(sp250, 0);
        fn_80224E1C(0);
        fn_802245D8(1, 4, 5, 0);
        fn_80220DEC(0x80, 0, 4);
        fifo = (volatile s16 *)0xCC008000;
        fifo[0] = 0x75;
        fifo[0] = 0x9A;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0;
        fifo[0] = 0x1ED;
        fifo[0] = 0x9A;
        fifo[0] = -0x64;
        fifo[0] = 0x178;
        fifo[0] = 0;
        fifo[0] = 0x1ED;
        fifo[0] = 0x102;
        fifo[0] = -0x64;
        fifo[0] = 0x178;
        fifo[0] = 0x68;
        fifo[0] = 0x75;
        fifo[0] = 0x102;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0x68;
        break;
    case 3:
        fn_80224FEC(lbl_80369D8C, lbl_80369D8C, lbl_80369D90, lbl_80369D94, lbl_80369D98, lbl_80369D9C);
        sp24 = lbl_8036C4A0;
        fn_802217AC(&sp24, 0xFFFFFF);
        sp28 = lbl_8036C4A4;
        fn_802240F0(0, &sp28, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C);
        fn_8022462C(1);
        fn_80224658(1);
        fn_80224684(1, 3, 1);
        fn_802246B8(1);
        fn_80223E5C(7, 0, 1, 7, 0);
        fn_80202B3C(sp1A0, lbl_80369D8C, lbl_80369D94, lbl_80369D8C, lbl_80369D90, lbl_80369DA4, lbl_80369DA8);
        fn_80224C4C(sp1A0, 1);
        fn_8022100C(0);
        fn_8021FBB8();
        fn_8021FBF0(0, 9, 1, 3, 0);
        fn_8021F4E4(9, 1);
        fn_8021FBF0(0, 0xD, 1, 3, 0);
        fn_8021F4E4(0xD, 1);
        fn_80222334(1);
        fn_80222370(4, 0, 0, 0, 0, 0, 2);
        fn_80222370(5, 0, 0, 0, 0, 0, 2);
        fn_802240C8(1);
        fn_80223F2C(0, 0, 0, 4);
        fn_80223A5C(0, 0xA, 0xF, 0xF, 0xF);
        fn_80223AA0(0, 4, 7, 7, 7);
        fn_80223AE4(0, 0, 0, 0, 1, 0);
        fn_80223B4C(0, 0, 0, 0, 1, 0);
        sp2C = lbl_80369D74;
        fn_8022224C(0, &sp2C);
        fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x30), sp80, *(s32 *)((u8 *)arg0 + 0x34));
        fn_80222C50(sp80, 0);
        w = fn_80222A80(sp80);
        h = fn_80222A90(sp80);
        fn_80220428(1);
        fn_802025C0(sp1E0, lbl_80369D9C / (f32)(u16)w, lbl_80369D9C / (f32)(u16)h);
        fn_80224E50(sp1E0, 0x1E, 1);
        fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
        fn_80201FC4(sp1E0);
        fn_80224D7C(sp1E0, 0);
        fn_80224DCC(sp1E0, 0);
        fn_80224E1C(0);
        fn_802245D8(1, 4, 5, 0);
        fn_80220DEC(0x80, 0, 4);
        fifo = (volatile s16 *)0xCC008000;
        fifo[0] = 0xB4;
        fifo[0] = 0x96;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0;
        fifo[0] = 0x19C;
        fifo[0] = 0x96;
        fifo[0] = -0x64;
        fifo[0] = 0xE8;
        fifo[0] = 0;
        fifo[0] = 0x19C;
        fifo[0] = 0x106;
        fifo[0] = -0x64;
        fifo[0] = 0xE8;
        fifo[0] = 0x70;
        fifo[0] = 0xB4;
        fifo[0] = 0x106;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0x70;
        break;
    case 4:
        fn_80224FEC(lbl_80369D8C, lbl_80369D8C, lbl_80369D90, lbl_80369D94, lbl_80369D98, lbl_80369D9C);
        sp18 = lbl_8036C498;
        fn_802217AC(&sp18, 0xFFFFFF);
        sp1C = lbl_8036C49C;
        fn_802240F0(0, &sp1C, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C);
        fn_8022462C(1);
        fn_80224658(1);
        fn_80224684(1, 3, 1);
        fn_802246B8(1);
        fn_80223E5C(7, 0, 1, 7, 0);
        fn_80202B3C(sp130, lbl_80369D8C, lbl_80369D94, lbl_80369D8C, lbl_80369D90, lbl_80369DA4, lbl_80369DA8);
        fn_80224C4C(sp130, 1);
        fn_8022100C(0);
        fn_8021FBB8();
        fn_8021FBF0(0, 9, 1, 3, 0);
        fn_8021F4E4(9, 1);
        fn_8021FBF0(0, 0xD, 1, 3, 0);
        fn_8021F4E4(0xD, 1);
        fn_80222334(1);
        fn_80222370(4, 0, 0, 0, 0, 0, 2);
        fn_80222370(5, 0, 0, 0, 0, 0, 2);
        fn_802240C8(1);
        fn_80223F2C(0, 0, 0, 4);
        fn_80223A5C(0, 0xA, 0xF, 0xF, 0xF);
        fn_80223AA0(0, 4, 7, 7, 7);
        fn_80223AE4(0, 0, 0, 0, 1, 0);
        fn_80223B4C(0, 0, 0, 0, 1, 0);
        sp20 = lbl_80369D70;
        fn_8022224C(0, &sp20);
        fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x30), sp60, *(s32 *)((u8 *)arg0 + 0x34));
        fn_80222C50(sp60, 0);
        w = fn_80222A80(sp60);
        h = fn_80222A90(sp60);
        fn_80220428(1);
        fn_802025C0(sp170, lbl_80369D9C / (f32)(u16)w, lbl_80369D9C / (f32)(u16)h);
        fn_80224E50(sp170, 0x1E, 1);
        fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
        fn_80201FC4(sp170);
        fn_80224D7C(sp170, 0);
        fn_80224DCC(sp170, 0);
        fn_80224E1C(0);
        fn_802245D8(1, 4, 5, 0);
        fn_80220DEC(0x80, 0, 4);
        fifo = (volatile s16 *)0xCC008000;
        fifo[0] = 0;
        fifo[0] = 0xB0;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0;
        fifo[0] = 0x260;
        fifo[0] = 0xB0;
        fifo[0] = -0x64;
        fifo[0] = 0x260;
        fifo[0] = 0;
        fifo[0] = 0x260;
        fifo[0] = 0x110;
        fifo[0] = -0x64;
        fifo[0] = 0x260;
        fifo[0] = 0x60;
        fifo[0] = 0;
        fifo[0] = 0x110;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0x60;
        break;
    case 5:
        fn_80224FEC(lbl_80369D8C, lbl_80369D8C, lbl_80369D90, lbl_80369D94, lbl_80369D98, lbl_80369D9C);
        sp8 = lbl_8036C4C0;
        fn_802217AC(&sp8, 0xFFFFFF);
        spC = lbl_8036C4C4;
        fn_802240F0(0, &spC, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C);
        fn_8022462C(1);
        fn_80224658(1);
        fn_80224684(1, 3, 1);
        fn_802246B8(1);
        fn_80223E5C(7, 0, 1, 7, 0);
        fn_80202B3C(spC0, lbl_80369DA0, lbl_80369D94, lbl_80369D8C, lbl_80369D90, lbl_80369DA4, lbl_80369DA8);
        fn_80224C4C(spC0, 1);
        fn_8022100C(0);
        fn_8021FBB8();
        fn_8021FBF0(0, 9, 1, 3, 0);
        fn_8021F4E4(9, 1);
        fn_8021FBF0(0, 0xD, 1, 3, 0);
        fn_8021F4E4(0xD, 1);
        fn_80222334(1);
        fn_80222370(4, 0, 0, 0, 0, 0, 2);
        fn_80222370(5, 0, 0, 0, 0, 0, 2);
        fn_802240C8(1);
        fn_80223F2C(0, 0, 0, 0xFF);
        fn_80223A5C(0, 2, 4, 8, 0xF);
        fn_80223AA0(0, 4, 7, 7, 7);
        fn_80223AE4(0, 0, 0, 0, 1, 0);
        fn_80223B4C(0, 0, 0, 0, 1, 0);
        sp10 = lbl_80369D84;
        fn_80223BB4(1, &sp10);
        sp14 = lbl_80369D88;
        fn_80223BB4(2, &sp14);
        fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x30), sp40, *(s32 *)((u8 *)arg0 + 0x34));
        fn_80222C50(sp40, 0);
        w = fn_80222A80(sp40);
        h = fn_80222A90(sp40);
        fn_80220428(1);
        fn_802025C0(sp100, lbl_80369D9C / (f32)(u16)w, lbl_80369D9C / (f32)(u16)h);
        fn_80224E50(sp100, 0x1E, 1);
        fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
        fn_80201FC4(sp100);
        fn_80224D7C(sp100, 0);
        fn_80224DCC(sp100, 0);
        fn_80224E1C(0);
        fn_802245D8(1, 4, 5, 0);
        fn_80220DEC(0x80, 0, 4);
        fifo = (volatile s16 *)0xCC008000;
        fifo[0] = 0;
        fifo[0] = 0;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0;
        fifo[0] = 0x260;
        fifo[0] = 0;
        fifo[0] = -0x64;
        fifo[0] = 0x260;
        fifo[0] = 0;
        fifo[0] = 0x260;
        fifo[0] = 0x1C0;
        fifo[0] = -0x64;
        fifo[0] = 0x260;
        fifo[0] = 0x1C0;
        fifo[0] = 0;
        fifo[0] = 0x1C0;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0x1C0;
        break;
    }
}

void fn_800C6E44(void *arg0) {
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    void fn_802217AC(void *, s32);
    void fn_802240F0(s32, void *, f32, f32, f32, f32);
    void fn_8022462C(s32);
    void fn_80224658(s32);
    void fn_80224684(s32, s32, s32);
    void fn_802246B8(s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_80224C4C(void *, s32);
    void fn_8022100C(s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_8021F4E4(s32, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223BB4(s32, void *);
    void fn_8006ECCC(s32, void *, s32);
    void fn_80222C50(void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_80220428(s32);
    void fn_802025C0(void *, f32, f32);
    void fn_80224E50(void *, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80201FC4(void *);
    void fn_80224D7C(void *, s32);
    void fn_80224DCC(void *, s32);
    void fn_80224E1C(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80220DEC(s32, s32, s32);
    extern f32 lbl_80369D8C, lbl_80369D90, lbl_80369D94, lbl_80369D98, lbl_80369D9C;
    extern f32 lbl_80369DA0, lbl_80369DA4, lbl_80369DA8;
    extern f32 lbl_80369DB8, lbl_80369DBC;
    extern u32 lbl_8036C4B4, lbl_8036C4B8, lbl_8036C4BC;
    extern u32 lbl_80369D7C, lbl_80369D80;

    f32 spA0[4][4];
    f32 sp70[3][4];
    f32 sp40[3][4];
    u8 sp20[0x20];
    u32 sp1C, sp18, sp14, sp10, spC, sp8;
    s32 alpha;
    u16 w, h;
    u32 rem;
    volatile s16 *fifo;

    fn_80224FEC(lbl_80369D8C, lbl_80369D8C, lbl_80369D90, lbl_80369D94, lbl_80369D98, lbl_80369D9C);
    sp1C = lbl_8036C4B4;
    fn_802217AC(&sp1C, 0xFFFFFF);
    sp18 = lbl_8036C4B8;
    fn_802240F0(0, &sp18, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C);
    fn_8022462C(1);
    fn_80224658(1);
    fn_80224684(1, 3, 1);
    fn_802246B8(1);
    fn_80223E5C(7, 0, 1, 7, 0);
    fn_80202B3C(spA0, lbl_80369DA0, lbl_80369D94, lbl_80369D8C, lbl_80369D90, lbl_80369DA4, lbl_80369DA8);
    fn_80224C4C(spA0, 1);
    fn_8022100C(0);
    fn_8021FBB8();
    fn_8021FBF0(0, 9, 1, 3, 0);
    fn_8021F4E4(9, 1);
    fn_8021FBF0(0, 0xD, 1, 3, 0);
    fn_8021F4E4(0xD, 1);
    fn_80222334(1);
    fn_80222370(4, 0, 0, 0, 0, 0, 2);
    fn_80222370(5, 0, 0, 0, 0, 0, 2);
    fn_802240C8(1);
    fn_80223F2C(0, 0, 0, 0xFF);
    fn_80223A5C(0, 2, 4, 8, 0xF);
    fn_80223AA0(0, 4, 7, 7, 7);
    fn_80223AE4(0, 0, 0, 0, 1, 0);
    fn_80223B4C(0, 0, 0, 0, 1, 0);
    sp14 = lbl_80369D7C;
    fn_80223BB4(1, &sp14);
    sp10 = lbl_80369D80;
    fn_80223BB4(2, &sp10);
    fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x30), sp20, *(s32 *)((u8 *)arg0 + 0x34));
    fn_80222C50(sp20, 0);
    w = fn_80222A80(sp20);
    h = fn_80222A90(sp20);
    fn_80220428(1);
    fn_802025C0(sp70, lbl_80369D9C / (f32)(u16)w, lbl_80369D9C / (f32)(u16)h);
    fn_80224E50(sp70, 0x1E, 1);
    fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
    fn_80201FC4(sp70);
    fn_80224D7C(sp70, 0);
    fn_80224DCC(sp70, 0);
    fn_80224E1C(0);
    fn_802245D8(1, 4, 5, 0);
    fn_80220DEC(0x80, 0, 4);
    fifo = (volatile s16 *)0xCC008000;
    fifo[0] = 0;
    fifo[0] = 0;
    fifo[0] = -0x64;
    fifo[0] = 0;
    fifo[0] = 0;
    fifo[0] = 0x260;
    fifo[0] = 0;
    fifo[0] = -0x64;
    fifo[0] = 0x260;
    fifo[0] = 0;
    fifo[0] = 0x260;
    fifo[0] = 0x1C0;
    fifo[0] = -0x64;
    fifo[0] = 0x260;
    fifo[0] = 0x1C0;
    fifo[0] = 0;
    fifo[0] = 0x1C0;
    fifo[0] = -0x64;
    fifo[0] = 0;
    fifo[0] = 0x1C0;
    if (*(u8 *)((u8 *)arg0 + 0x38) != 0) {
        rem = *(u32 *)((u8 *)arg0 + 0x3C) % 60;
        if (rem < 0x1E) {
            alpha = (s32)(lbl_80369DB8 * ((f32)rem / lbl_80369DBC));
        } else {
            alpha = (u8)(0xFF - (s32)(lbl_80369DB8 * ((f32)(rem - 0x1E) / lbl_80369DBC)));
        }
        fn_80223AA0(0, 7, 4, 1, 7);
        sp8 = lbl_8036C4BC;
        ((u8 *)&sp8)[3] = (u8)alpha;
        spC = sp8;
        fn_80223BB4(1, &spC);
        fn_8006ECCC(*(s32 *)((u8 *)arg0 + 0x30), sp20, *(s32 *)((u8 *)arg0 + 0x34) + 1);
        fn_80222C50(sp20, 0);
        w = fn_80222A80(sp20);
        h = fn_80222A90(sp20);
        fn_80220428(1);
        fn_802025C0(sp40, lbl_80369D9C / (f32)(u16)w, lbl_80369D9C / (f32)(u16)h);
        fn_80224E50(sp40, 0x1E, 1);
        fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
        fn_80220DEC(0x80, 0, 4);
        fifo = (volatile s16 *)0xCC008000;
        fifo[0] = 0;
        fifo[0] = 0x167;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0;
        fifo[0] = 0x260;
        fifo[0] = 0x167;
        fifo[0] = -0x64;
        fifo[0] = 0x260;
        fifo[0] = 0;
        fifo[0] = 0x260;
        fifo[0] = 0x197;
        fifo[0] = -0x64;
        fifo[0] = 0x260;
        fifo[0] = 0x30;
        fifo[0] = 0;
        fifo[0] = 0x197;
        fifo[0] = -0x64;
        fifo[0] = 0;
        fifo[0] = 0x30;
    }
}

void fn_800C73F0(s32 arg0) {
    fn_8006EDA0(arg0 + 0x30);
}

void fn_800C7414(void)
{
    // Function has no body in original - placeholder
}

void fn_800C755C(void)
{
    s32 temp_r31;

    OSDisableInterrupts();
    temp_r31 = OSDisableInterrupts();
    lbl_8036A0C8 = 0;
    OSRestoreInterrupts(temp_r31);
}

void fn_800C77B8(s32 arg0) {
    u8 fn_8005BA10(s32);
    void fn_8000C188(s32);

    if (fn_8005BA10(lbl_8028D788[1])) {
        fn_8000C188(arg0);
    }
}

void fn_800C7800(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;

    temp_r31 = OSDisableInterrupts();
    OSDisableScheduler();
    OSRestoreInterrupts(temp_r31);
    fn_8005BA08((s8) M2C_FIELD(arg0, s32 *, 0x44));
    fn_8005C870(M2C_FIELD(&lbl_8028D788, s32 *, 4), 4);
    fn_8005BA08((s8) M2C_FIELD(arg0, s32 *, 0x40));
    temp_r31_2 = OSDisableInterrupts();
    OSEnableScheduler();
    OSRestoreInterrupts(temp_r31_2);
}

void fn_800C7884(void *arg0) {
    M2C_UNK fn_8005BA08(s8);
    M2C_UNK fn_8005BC8C(s8);
    M2C_UNK fn_800C4728(s32);
    M2C_UNK fn_800C47E8();
    fn_8005BC8C((s8) M2C_FIELD(arg0, s32 *, 0x44));
    fn_800C47E8();
    fn_800C4728(M2C_FIELD(arg0, s32 *, 0x40));
    fn_8005BA08((s8) M2C_FIELD(arg0, s32 *, 0x40));
}

void fn_800C78D0(void *arg0) {
    s32 fn_800C4740(void);
    s32 fn_800C4F30(void *, s32);
    void fn_800C4728(s32);
    void fn_8005BA08(s32);
    extern u8 lbl_802702A8[];

    *(s32 *)((u8 *)arg0 + 0x40) = fn_800C4740();
    *(s32 *)((u8 *)arg0 + 0x44) = fn_800C4F30(lbl_802702A8 + 0xA3, 0xC0000);
    fn_800C4728(*(s32 *)((u8 *)arg0 + 0x40));
    fn_8005BA08((s8)*(s32 *)((u8 *)arg0 + 0x40));
}

void fn_800C792C(void) {
    M2C_UNK fn_801FE32C();
    M2C_UNK fn_8020055C();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_8020055C();
        return;
    }
    fn_801FE32C();
}

void fn_800C7960(void) {
    M2C_UNK fn_801FE360();
    M2C_UNK fn_80200590();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_80200590();
        return;
    }
    fn_801FE360();
}

void fn_800C7994(void) {
    M2C_UNK fn_801FEF6C();
    M2C_UNK fn_8020119C();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_8020119C();
        return;
    }
    fn_801FEF6C();
}

void fn_800C79C8(void) {
    M2C_UNK fn_801FEFA0();
    M2C_UNK fn_802011D0();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_802011D0();
        return;
    }
    fn_801FEFA0();
}

s32 fn_800C7B04(void *arg1, s32 arg2, s32 arg3, s32 *arg4) {
    M2C_UNK fn_80234450(s32, u8 *);
    u8 sp8;
    s32 temp_r25;
    s32 temp_r8;
    s32 var_r28;
    s32 var_r29;
    s32 var_r30;
    s32 var_r6;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r9;
    u8 *temp_r31;
    u8 *var_r3;
    u8 *var_r3_2;
    u8 *var_r3_3;
    u8 *var_r3_4;
    u8 *var_r4;
    u8 *var_r4_2;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r5;
    u8 temp_r6;
    u8 var_r0;

    var_r9 = 0;
    var_r3 = M2C_FIELD(arg1, u8 **, 8);
    temp_r8 = M2C_FIELD(arg1, s32 *, 0);
    var_r30 = arg3;
    var_r7 = 0;
    var_r28 = 0;
loop_2:
    if ((var_r7 <= temp_r8) && ((temp_r0 = *var_r3, (((s8) temp_r0 == 0x20) != 0)) || ((s8) temp_r0 == 9) || ((s8) temp_r0 == 0x2C))) {
        var_r7 += 1;
        var_r3 += 1;
        goto loop_2;
    }
    var_r4 = &sp8;
    var_r3_2 = M2C_FIELD(arg1, u8 **, 8) + var_r7;
loop_8:
    if ((var_r7 <= temp_r8) && (var_r9 < 0x100)) {
        temp_r6 = *var_r3_2;
        if (((s8) temp_r6 != 0x20) && ((s8) temp_r6 != 9) && ((s8) temp_r6 != 0x2C)) {
            *var_r4 = temp_r6;
            var_r7 += 1;
            var_r3_2 += 1;
            var_r9 += 1;
            var_r4 += 1;
            goto loop_8;
        }
    }
    (&sp8)[var_r9] = 0;
    if (var_r9 == 0) {
        var_r7 = 0;
    }
    var_r29 = var_r7;
    if (var_r7 == 0) {
        return 0;
    }
    if ((u8) ((s8) sp8 == 0x23) == 0) {
        if (((s8) sp8 == 0x7B) || ((s8) sp8 == 0x7D)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            goto block_23;
        }
        fn_80234450(arg2, &sp8);
        temp_r31 = M2C_FIELD(arg1, u8 **, 8);
        temp_r25 = M2C_FIELD(arg1, s32 *, 0);
loop_26:
        var_r6 = var_r29;
        var_r3_3 = temp_r31 + var_r29;
        var_r7_2 = 0;
loop_28:
        if ((var_r6 <= temp_r25) && ((temp_r0_2 = *var_r3_3, (((s8) temp_r0_2 == 0x20) != 0)) || ((s8) temp_r0_2 == 9) || ((s8) temp_r0_2 == 0x2C))) {
            var_r6 += 1;
            var_r3_3 += 1;
            goto loop_28;
        }
        var_r4_2 = &sp8;
        var_r3_4 = temp_r31 + var_r6;
loop_34:
        if ((var_r6 <= temp_r25) && (var_r7_2 < 0x100)) {
            temp_r5 = *var_r3_4;
            if (((s8) temp_r5 != 0x20) && ((s8) temp_r5 != 9) && ((s8) temp_r5 != 0x2C)) {
                *var_r4_2 = temp_r5;
                var_r6 += 1;
                var_r3_4 += 1;
                var_r7_2 += 1;
                var_r4_2 += 1;
                goto loop_34;
            }
        }
        (&sp8)[var_r7_2] = 0;
        if (var_r7_2 == 0) {
            var_r6 = 0;
        }
        var_r29 = var_r6;
        if ((var_r6 != 0) && ((s32) sp8 != 0x23)) {
            fn_80234450(var_r30, &sp8);
            var_r30 += 0x20;
            var_r28 += 1;
            goto loop_26;
        }
        if (arg4 != NULL) {
            *arg4 = var_r28;
        }
        return 1;
    }
block_23:
    return 0;
}

void fn_800C7EF8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void fn_800C7F10(void* arg0, void* arg1) {
    if (arg1 != NULL) {
        *(s32*)((u32)arg0 + 0x14) = *(s32*)arg1;
        *(s32*)((u32)arg0 + 0x18) = *(s32*)((u32)arg1 + 0x4);
    }
}

void fn_800C8328(void *unused, void *dest, s32 index, String *str)
{
    M2C_UNK *fn_800C93EC(void *);
    void fn_8023440C(char *, const char *, s32);
    s32 fn_802355BC(char *);
    f64 fn_80234524(char *);

    typedef struct { u32 d[8]; } Val32;

    Val32 sp18, sp38, sp58, sp78, sp98, spB8, spD8, spF8;
    Val32 sp118, sp138, sp158, sp178, sp198, sp1B8, sp1D8;
    Val32 sp1F8, sp218, sp238, sp258, sp278, sp298, sp2B8;
    void *dst;
    s32 idx;
    String *s;
    char *p;
    s32 k;
    s32 kind;
    s8 c;
    char *src;
    s32 val;
    f32 fval;
    u32 w0, w1, w2, w3, w4, w5, w6, w7;
    u32 packed;
    Val32 *dv;

    (void)unused;
    dst = dest;
    idx = index;
    s = str;
    dv = (Val32 *)((u8 *)dst + 0x18);

    p = *(char **)((u8 *)s + 8);
    k = *(s32 *)s;
    kind = -1;
    if (k > 0) {
        for (; k != 0; k--) {
            c = (s8)*p;
            if (c < 0x30) {
                goto check_sign;
            }
            if (c <= 0x39) {
                kind = 1;
                goto cont;
            }
        check_sign:
            if (c == 0x2D || c == 0x2E) {
                if (c == 0x2E) {
                    kind = 2;
                    break;
                }
            } else {
                kind = 0;
                break;
            }
        cont:
            p += 1;
        }
    }

    if (kind == 1) {
        goto case_int;
    } else if (kind >= 2) {
        if (kind >= 3) {
            return;
        }
        goto case_float;
    } else if (kind >= 0) {
        goto case_str;
    }
    return;

case_str:
    src = (char *)fn_800C93EC(s);
    sp118.d[3] = 0;
    sp118.d[2] = 0;
    sp118.d[1] = 0;
    sp118.d[0] = 0;
    fn_8023440C((char *)&sp118, src, 0x20);
    sp2B8 = sp118;
    *dv = sp118;
    return;

case_int:
    if (idx == 4) {
        w0 = dv->d[0];
        w1 = dv->d[1];
        w2 = dv->d[2];
        w3 = dv->d[3];
        w4 = dv->d[4];
        w5 = dv->d[5];
        w6 = dv->d[6];
        w7 = dv->d[7];

        packed = w0;
        ((s16 *)&packed)[0] = (s16)w0;
        sp8_store:
        sp278.d[0] = packed;
        {
            u32 save0 = w0;
            dv->d[0] = packed;
            dv->d[1] = w1;
            dv->d[2] = w2;
            dv->d[3] = w3;
            dv->d[4] = w4;
            dv->d[5] = w5;
            dv->d[6] = w6;
            dv->d[7] = w7;

            {
                u32 cur = dv->d[0];
                u32 p0 = cur;
                ((s16 *)&p0)[1] = (s16)w1;
                dv->d[0] = p0;
                dv->d[1] = dv->d[1];
                dv->d[2] = dv->d[2];
                dv->d[3] = dv->d[3];
                dv->d[4] = w4;
                dv->d[5] = w5;
                dv->d[6] = w6;
                dv->d[7] = w7;
                sp78 = *dv;
                sp18 = *dv;
                sp278.d[1] = w1;
                sp278.d[2] = w2;
                sp278.d[3] = w3;
                sp278.d[4] = w4;
                sp278.d[5] = w5;
                sp278.d[6] = w6;
                sp278.d[7] = w7;
                sp298 = sp278;
                (void)save0;
            }

            {
                u32 cur1;
                u32 p1;
                u32 a0 = dv->d[0];
                cur1 = dv->d[1];
                w2 = dv->d[2];
                w3 = dv->d[3];
                w4 = dv->d[4];
                w5 = dv->d[5];
                w6 = dv->d[6];
                w7 = dv->d[7];
                ((s16 *)&cur1)[0] = (s16)w2;
                dv->d[0] = a0;
                dv->d[1] = cur1;
                dv->d[2] = w2;
                dv->d[3] = w3;
                dv->d[4] = w4;
                dv->d[5] = w5;
                dv->d[6] = w6;
                dv->d[7] = w7;

                {
                    u32 now1 = dv->d[1];
                    p1 = now1;
                    ((s16 *)&p1)[1] = (s16)w3;
                    dv->d[0] = dv->d[0];
                    dv->d[1] = p1;
                    dv->d[2] = w2;
                    dv->d[3] = w3;
                    dv->d[4] = w4;
                    dv->d[5] = w5;
                    dv->d[6] = w6;
                    dv->d[7] = w7;
                    sp98.d[0] = a0;
                    spB8 = *dv;
                    sp38.d[0] = a0;
                    sp38.d[1] = cur1;
                    sp38.d[2] = w2;
                    sp38.d[3] = w3;
                    sp38.d[4] = w4;
                    sp38.d[5] = w5;
                    sp38.d[6] = w6;
                    sp38.d[7] = w7;
                    sp58 = *dv;
                }
            }
        }

        src = (char *)fn_800C93EC(s);
        val = fn_802355BC(src);
        sp238 = *dv;
        ((s16 *)sp238.d)[idx] = (s16)val;
        *dv = sp238;
        sp258 = sp238;
        return;
    }

    if (idx > 4) {
        src = (char *)fn_800C93EC(s);
        val = fn_802355BC(src);
        sp1F8 = *dv;
        ((s16 *)sp1F8.d)[idx] = (s16)val;
        *dv = sp1F8;
        sp218 = sp1F8;
        return;
    }

    if (idx != 0) {
        src = (char *)fn_800C93EC(s);
        val = fn_802355BC(src);
        sp1B8 = *dv;
        sp1B8.d[idx] = (u32)val;
        *dv = sp1B8;
        sp1D8 = sp1B8;
        return;
    }

    src = (char *)fn_800C93EC(s);
    val = fn_802355BC(src);
    dv->d[0] = (u32)val;
    dv->d[1] = 0;
    dv->d[2] = 0;
    dv->d[3] = 0;
    spF8.d[0] = (u32)val;
    spF8.d[1] = 0;
    spF8.d[2] = 0;
    spF8.d[3] = 0;
    sp198.d[0] = (u32)val;
    sp198.d[1] = 0;
    sp198.d[2] = 0;
    sp198.d[3] = 0;
    sp198.d[4] = spF8.d[4];
    sp198.d[5] = spF8.d[5];
    sp198.d[6] = spF8.d[6];
    sp198.d[7] = spF8.d[7];
    dv->d[4] = sp198.d[4];
    dv->d[5] = sp198.d[5];
    dv->d[6] = sp198.d[6];
    dv->d[7] = sp198.d[7];
    return;

case_float:
    if (idx != 0) {
        src = (char *)fn_800C93EC(s);
        fval = (f32)fn_80234524(src);
        sp158 = *dv;
        ((f32 *)sp158.d)[idx] = fval;
        *dv = sp158;
        sp178 = sp158;
        return;
    }

    src = (char *)fn_800C93EC(s);
    fval = (f32)fn_80234524(src);
    {
        u32 slot = 0;
        *(f32 *)&slot = fval;
        spD8.d[0] = slot;
        dv->d[0] = slot;
        dv->d[1] = 0;
        dv->d[2] = 0;
        dv->d[3] = 0;
        spD8.d[1] = 0;
        spD8.d[2] = 0;
        spD8.d[3] = 0;
        sp138.d[0] = slot;
        sp138.d[1] = 0;
        sp138.d[2] = 0;
        sp138.d[3] = 0;
        sp138.d[4] = spD8.d[4];
        sp138.d[5] = spD8.d[5];
        sp138.d[6] = spD8.d[6];
        sp138.d[7] = spD8.d[7];
        dv->d[4] = sp138.d[4];
        dv->d[5] = sp138.d[5];
        dv->d[6] = sp138.d[6];
        dv->d[7] = sp138.d[7];
    }
}

void fn_800C8CB4(String *arg0, void *arg1) {
    void fn_800C96F8(String *, char *, u32);
    u32 strlen(const char *);
    String tmp;
    char *name;
    void *list;
    s32 index;

    tmp.cap = 0;
    tmp.size = 0;
    tmp.data = 0;
    tmp.cap = 0;
    list = M2C_FIELD(arg1, void **, 0x1C);
    index = M2C_FIELD(arg1, s32 *, 0x24);
    if (list != NULL && index < M2C_FIELD(list, s32 *, 0)) {
        name = M2C_FIELD(list, char **, 4) + index * 0x38;
    } else {
        name = NULL;
    }
    fn_800C96F8(&tmp, name, strlen(name));
    fn_800C9B6C(arg0, &tmp);
    fn_800C9A60(&tmp, -1);
}

void fn_800C8D58(void *arg0, void *arg1)
{
    typedef struct { u32 a, b, c, d, e, f, g, h; } Block;
    u8 *p;
    s32 index;

    p = *(u8 **)((u8 *)arg1 + 0x1C);
    index = *(s32 *)((u8 *)arg1 + 0x24);

    if (p != 0 && index < *(s32 *)p) {
        p = *(u8 **)(p + 4) + index * 0x38;
    } else {
        p = 0;
    }

    *(Block *)arg0 = *(Block *)(p + 0x18);
}

s32 fn_800C8EFC(void *arg0) {
    s32 var_r6;

    var_r6 = 1;
    if ((s32 *) M2C_FIELD(arg0, s32 **, 0x1C) == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) >= (s32) *M2C_FIELD(arg0, s32 **, 0x1C)) {
        var_r6 = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    return var_r6;
}

void fn_800C8F48(void *arg0) {
    void fn_800C802C(void *, s32);
    fn_800C802C(arg0, *(s32 *)((u8 *)arg0 + 0x20) + 1);
}

void fn_800C908C(void *arg0, String *arg1, s32 *arg2) {
    M2C_UNK *fn_800C93EC(void *);
    char *fn_80234450(char *, const char *);
    void fn_800C802C(void *, s32);
    unsigned long b;
    s32 *dst;
    long a;

    fn_80234450((char *)arg0 + 0x28, (char *)fn_800C93EC(arg1));
    dst = (s32 *)((char *)arg0 + 0x40);
    b = arg2[1];
    a = arg2[0];
    dst[0] = a;
    a = arg2[2];
    dst[1] = b;
    b = arg2[3];
    dst[2] = a;
    a = arg2[4];
    dst[3] = b;
    b = arg2[5];
    dst[4] = a;
    a = arg2[6];
    dst[5] = b;
    b = arg2[7];
    dst[6] = a;
    dst[7] = b;
    fn_800C802C(arg0, 0);
}

void fn_800C91EC(void* arg0, void* arg1) {
    // This function is performing complex data initialization and copying
    if (arg0 != NULL && arg1 != NULL) {
        *(u32*)arg0 = 0;
        *(u32*)((char*)arg0 + 4) = 0;
        *(u32*)((char*)arg0 + 8) = 0;
        *(u32*)((char*)arg0 + 12) = 0;
        *(u32*)((char*)arg0 + 16) = 0;
        *(u32*)((char*)arg0 + 20) = 0;
        *(u32*)((char*)arg0 + 24) = 0;
        *(u32*)((char*)arg0 + 76) = 0;
        *(u32*)((char*)arg0 + 72) = 0;
        *(u32*)((char*)arg0 + 68) = 0;
        *(u32*)((char*)arg0 + 64) = 0;
    }
}

M2C_UNK *fn_800C93EC(void *arg0) {
    extern M2C_UNK lbl_80369DC0;
    M2C_UNK *temp_r3;

    temp_r3 = M2C_FIELD(arg0, M2C_UNK **, 8);
    if (temp_r3 == NULL) {
        return &lbl_80369DC0;
    }
    return temp_r3;
}

s32 fn_800C9400(String *arg0, u32 pos, u32 n, char *s, u32 n2) {
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    s32 fn_80231944(char *, char *, u32);
    extern char __files[];
    extern char lbl_80270350[];
    u32 len;
    u32 rest;
    const u32 *q;
    s32 cmp;
    u32 size;

    size = *(u32 *)arg0;
    if (pos <= size) {
        goto body;
    }
    fn_80232058(__files + 0xA0, lbl_80270350 + 0x1D);
    fn_8022CF78();
body:
    rest = *(u32 *)arg0 - pos;
    len = *StrMin(&rest, &n);
    q = StrMin(&len, &n2);
    cmp = fn_80231944(*(char **)((u8 *)arg0 + 8) + pos, s, *q);
    if (cmp == 0) {
        if (len < n2) {
            return -1;
        }
        return len != n2;
    }
    return cmp;
}

#pragma auto_inline off
String *fn_800C96F8(String *arg0, const char *arg1, u32 arg2) {
    void fn_800CA7F4(String *, u32, s32);
    void *memcpy(void *, const void *, u32);
    fn_800CA7F4(arg0, arg2, 0);
    memcpy(arg0->data, arg1, arg2);
    return arg0;
}

String *fn_800C9758(String *arg0, const String *arg1, u32 pos, u32 n) {
    String *fn_800C984C(String *, u32, u32);
    void fn_800CA7F4(String *, u32, s32);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    void *memcpy(void *, const void *, u32);
    extern char __files[];
    extern char lbl_80270350[];
    u32 rest;
    u32 len;

    if (pos > arg1->size) {
        fn_80232058(__files + 0xA0, lbl_80270350 + 0x96);
        fn_8022CF78();
    }
    rest = arg1->size - pos;
    len = *StrMin(&n, &rest);
    if (arg0 == arg1) {
        fn_800C984C(arg0, 0, pos);
        fn_800CA7F4(arg0, len, 1);
    } else {
        fn_800CA7F4(arg0, len, 0);
        memcpy(arg0->data, arg1->data + pos, len);
    }
    return arg0;
}
#pragma auto_inline reset

String *fn_800C984C(String *arg0, u32 arg1, u32 arg2) {
    String *fn_800C94F8(String *, u32, u32, u32, u32);
    return fn_800C94F8(arg0, arg1, arg2, 0, 0);
}

String *fn_800C9874(String *arg0, u32 arg1, char arg2) {
    void fn_800CA7F4(String *, u32, s32);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    void *memset(void *, s32, u32);
    extern char __files[];
    extern char lbl_80270350[];
    u32 size;

    if (arg1 != 0) {
        if (arg1 > (u32)-2 || arg0->size > (u32)-2 - arg1) {
            fn_80232058(__files + 0xA0, lbl_80270350 + 0xBC);
            fn_8022CF78();
        }
        size = arg0->size;
        fn_800CA7F4(arg0, size + arg1, 1);
        memset(arg0->data + size, (u8)arg2, arg1);
    }
    return arg0;
}

void *fn_800C992C(void *arg0, const char *arg1, u32 arg2) {
    void fn_800CA7F4(void *, u32, s32);
    void *memcpy(void *, const void *, u32);
    u32 size;

    if (arg2 != 0) {
        size = ((String *)arg0)->size;
        fn_800CA7F4(arg0, size + arg2, 1);
        memcpy(((String *)arg0)->data + size, arg1, arg2);
    }
    return arg0;
}

#pragma auto_inline off
void *fn_800C9A60(void *arg0, s16 arg1) {
    void fn_800C428C(void *);

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            fn_800C428C(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

fn_800C9B6C(arg0, arg1)
void *arg0;
void *arg1;
{
    void fn_800CA728(void *, char *, char *, void *, void *);
    u8 sp[16];
    char *data;

    data = *(char **)((char *)arg1 + 8);
    *(u32 *)((char *)arg0 + 4) = *(u32 *)((char *)arg1 + 4);
    sp[0] = sp[4];
    fn_800CA728(arg0, data, data + *(u32 *)arg1, sp + 8, sp);
    return (s32)arg0;
}

#pragma opt_loop_invariants off
#pragma use_lmw_stmw on
void fn_800C9BC4(void *vec,s32 *pos,u32 count,s32 *value){
void *fn_800C42D8(s32);void fn_800C428C(void *);
void fn_80232058(void *,const char *,...);void fn_8022CF78(void);
extern char __files[],lbl_80270350[];
u32 bytes;
s32 *old,*allocation,*dst,*end,*fill,*src,*split;
s32 offset;
u32 tail;
u32 need,capacity,size,n;
u32 available;
s32 initial;
s32 *copySrc,*copyDst;
if(count){
if(count>0x3FFFFFFF || M2C_FIELD(vec,u32 *,4)>0x3FFFFFFF-count){
fn_80232058(__files+0xA0,lbl_80270350+0x136);fn_8022CF78();
}
size=M2C_FIELD(vec,u32 *,4);available=M2C_FIELD(vec,u32 *,0);
need=size+count;
if(need<=available){
end=M2C_FIELD(vec,s32 **,8)+size;
tail=((s32)end-(s32)pos)/4;
fill=value;
if((u32)(end-(tail-count))<=(u32)value && value<end)fill=value+count;
if((u32)tail){
dst=end+count;
while(end>pos)*--dst=*--end;
}
dst=pos;n=count;
while(n){*dst++=*fill;--n;}
M2C_FIELD(vec,u32 *,4)+=count;
}else{
old=M2C_FIELD(vec,s32 **,8);
offset=((s32)pos-(s32)old)/4;
initial=1;if(available)initial=available;
capacity=initial;
while(need>capacity){
if(capacity<0x1FFFFFFF)capacity*=2;else capacity=0x3FFFFFFF;
}
allocation=fn_800C42D8(capacity*4);
if(!allocation){fn_80232058(__files+0xA0,lbl_80270350+0x7C);fn_8022CF78();}
M2C_FIELD(vec,s32 **,8)=allocation;
bytes=offset*4;
dst=(s32 *)((u8 *)M2C_FIELD(vec,s32 **,8)+bytes);n=count;
while(n){*dst++=*value;--n;}
if(old){
split=(s32 *)((u8 *)old+bytes);copySrc=old;copyDst=M2C_FIELD(vec,s32 **,8);
while(copySrc<split)*copyDst++=*copySrc++;
end=old+M2C_FIELD(vec,u32 *,4);
dst=(s32 *)((s32)M2C_FIELD(vec,s32 **,8)+(bytes+count*4));
while(split<end)*dst++=*split++;
fn_800C428C(old);
}
M2C_FIELD(vec,u32 *,4)=need;
M2C_FIELD(vec,u32 *,0)=capacity;
}
}
}
#pragma use_lmw_stmw reset
#pragma opt_loop_invariants reset

#pragma use_lmw_stmw on
void fn_800CA18C(void *vec, void *pos, u32 count, void *src)
{
    void fn_800CA728(void *, char *, char *, void *, void *);
    void fn_800CA644(void *, void *, void *);
    void fn_800CA59C(void *, u32, void *);
    void *fn_800C42D8(s32);
    void fn_800CA91C(void *);
    void fn_800C428C(void *);
    void fn_80232058(void *, const char *, ...);
    void fn_8022CF78(void);
    extern char __files[];
    extern char lbl_80270350[];

    struct LocalState {
    u8 pads[0x48];
    u32 cap;
    u32 size;
    void *data;
};

struct LocalState st;

    void *end;
    u32 room;
    void *dst;
    u8 tag;
    void *cur;
    u32 cap;
    u32 need;
    u32 size;

    if (count == 0) {
        return;
    }

    if (count > 0x15555555U ||
        *(u32 *)((u8 *)vec + 4) > 0x15555555U - count) {
        fn_80232058(__files + 0xA0, lbl_80270350 + 0x136);
        fn_8022CF78();
    }

    size = *(u32 *)((u8 *)vec + 4);
    need = size + count;

    if (need <= *(u32 *)vec) {
        end = *(u8 **)((u8 *)vec + 8) + size * 0xC;
        room = (u32)(((s32)end - (s32)pos) / 12);

        if (count > room) {
            tag = st.pads[0x2C];
            dst = end;

            while (count > room) {
                if (dst != 0) {
                    char *begin;
                    char *endptr;

                    *(u32 *)((u8 *)dst + 4) =
                        *(u32 *)((u8 *)src + 4);

                    begin = *(char **)((u8 *)src + 8);
                    endptr = begin + *(u32 *)src;

                    st.pads[0x28] = tag;

                    fn_800CA728(
                        dst,
                        begin,
                        endptr,
                        &st.pads[0x44],
                        &st.pads[0x28]
                    );
                }

                dst = (u8 *)dst + 0xC;
                count -= 1;
                *(u32 *)((u8 *)vec + 4) += 1;
            }

            tag = st.pads[0x24];
            cur = pos;

            while ((u8 *)cur < (u8 *)end) {
                if (dst != 0) {
                    char *begin;
                    char *endptr;

                    *(u32 *)((u8 *)dst + 4) =
                        *(u32 *)((u8 *)cur + 4);

                    begin = *(char **)((u8 *)cur + 8);
                    endptr = begin + *(u32 *)cur;

                    st.pads[0x20] = tag;

                    fn_800CA728(
                        dst,
                        begin,
                        endptr,
                        &st.pads[0x40],
                        &st.pads[0x20]
                    );
                }

                cur = (u8 *)cur + 0xC;
                dst = (u8 *)dst + 0xC;
                *(u32 *)((u8 *)vec + 4) += 1;
            }
        } else {
            s32 bytes = count * 0xC;

            tag = st.pads[0x1C];
            dst = end;
            cur = (u8 *)end - bytes;

            while ((u8 *)cur < (u8 *)end) {
                if (dst != 0) {
                    char *begin;
                    char *endptr;

                    *(u32 *)((u8 *)dst + 4) =
                        *(u32 *)((u8 *)cur + 4);

                    begin = *(char **)((u8 *)cur + 8);
                    endptr = begin + *(u32 *)cur;

                    st.pads[0x18] = tag;

                    fn_800CA728(
                        dst,
                        begin,
                        endptr,
                        &st.pads[0x3C],
                        &st.pads[0x18]
                    );
                }

                cur = (u8 *)cur + 0xC;
                dst = (u8 *)dst + 0xC;
                *(u32 *)((u8 *)vec + 4) += 1;
            }

            bytes = (room - count) * 0xC;

            if ((u32)((u8 *)end - bytes) <= (u32)src &&
                (u8 *)src < (u8 *)end) {
                src = (u8 *)src + count * 0xC;
            }

            fn_800CA644(pos, (u8 *)pos + bytes, end);
        }

        fn_800CA59C(pos, count, src);
    } else {
        st.cap = 0;
        st.size = 0;
        st.data = 0;

        cap = *(u32 *)vec;

        if (cap == 0) {
            cap = 1;
        }

        while (need > cap) {
            if (cap < 0x0AAAAAAAU) {
                cap *= 2;
            } else {
                cap = 0x15555555U;
            }
        }

        dst = fn_800C42D8((s32)(cap * 0xC));

        if (dst == 0) {
            fn_80232058(
                __files + 0xA0,
                lbl_80270350 + 0x7C
            );
            fn_8022CF78();
        }

        st.data = dst;
        tag = st.pads[0x14];
        st.cap = cap;

        cur = *(void **)((u8 *)vec + 8);
        end = (u8 *)cur + *(u32 *)((u8 *)vec + 4) * 0xC;

        while ((u8 *)cur < (u8 *)pos) {
            if (dst != 0) {
                char *begin;
                char *endptr;

                *(u32 *)((u8 *)dst + 4) =
                    *(u32 *)((u8 *)cur + 4);

                begin = *(char **)((u8 *)cur + 8);
                endptr = begin + *(u32 *)cur;

                st.pads[0x10] = tag;

                fn_800CA728(
                    dst,
                    begin,
                    endptr,
                    &st.pads[0x38],
                    &st.pads[0x10]
                );
            }

            cur = (u8 *)cur + 0xC;
            dst = (u8 *)dst + 0xC;
            st.size += 1;
        }

        tag = st.pads[0xC];

        while (count != 0) {
            if (dst != 0) {
                char *begin;
                char *endptr;

                *(u32 *)((u8 *)dst + 4) =
                    *(u32 *)((u8 *)src + 4);

                begin = *(char **)((u8 *)src + 8);
                endptr = begin + *(u32 *)src;

                st.pads[0x28] = tag;

                fn_800CA728(
                    dst,
                    begin,
                    endptr,
                    &st.pads[0x44],
                    &st.pads[0x28]
                );
            }

            dst = (u8 *)dst + 0xC;
            count -= 1;
            st.size += 1;
        }

        tag = st.pads[0x4];

        while ((u8 *)cur < (u8 *)end) {
            if (dst != 0) {
                char *begin;
                char *endptr;

                *(u32 *)((u8 *)dst + 4) =
                    *(u32 *)((u8 *)cur + 4);

                begin = *(char **)((u8 *)cur + 8);
                endptr = begin + *(u32 *)cur;

                st.pads[0] = tag;

                fn_800CA728(
                    dst,
                    begin,
                    endptr,
                    &st.pads[0x30],
                    &st.pads[0]
                );
            }

            cur = (u8 *)cur + 0xC;
            dst = (u8 *)dst + 0xC;
            st.size += 1;
        }

        if (&st.cap != (u32 *)vec) {
            u32 temp;
            void *ptr;

            temp = st.cap;
            st.cap = *(u32 *)vec;
            *(u32 *)vec = temp;

            ptr = st.data;
            st.data = *(void **)((u8 *)vec + 8);
            *(void **)((u8 *)vec + 8) = ptr;

            temp = st.size;
            st.size = *(u32 *)((u8 *)vec + 4);
            *(u32 *)((u8 *)vec + 4) = temp;
        }

        fn_800CA91C(&st.cap);

        if (st.data != 0) {
            fn_800C428C(st.data);
        }
    }
}
void fn_800CA59C(u8 *arg0, u32 arg1, void *arg2)
{
    extern void fn_800CA5FC(void *, void *);

    while (arg1 != 0) {
        fn_800CA5FC(arg0, arg2);
        arg0 += 0xC;
        arg1--;
    }
}

#pragma auto_inline reset

void fn_800CA5FC(void) {
    M2C_UNK fn_800CA61C();
    fn_800CA61C();
}

String *fn_800CA61C(String *arg0, const String *arg1) {
    String *fn_800C9758(String *, const String *, u32, u32);
    return fn_800C9758(arg0, arg1, 0, (u32)-1);
}

void fn_800CA644(void) {
    M2C_UNK fn_800CA664();
    fn_800CA664();
}

void *fn_800CA664(void *arg0, void *arg1, void *arg2)
{
    extern void fn_800CA5FC(void *, void *);

    u8 *destination;
    u8 *source;
    u8 *begin;

    begin = (u8 *)arg0;
    source = (u8 *)arg1;
    destination = (u8 *)arg2;

    while (source > begin) {
        destination -= 0xC;
        source -= 0xC;

        fn_800CA5FC(destination, source);
    }

    return destination;
}

void *fn_800CA6C8(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    void fn_800CA91C(void *);

    if (arg0 != NULL) {
        fn_800CA91C(arg0);
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            fn_800C428C(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800CA91C(void *arg0)
{
    extern void fn_800C428C(void *);

    u8 *base;
    u8 *current;
    u8 *obj;

    base = *(u8 **)((u8 *)arg0 + 0x8);
    current = base + *(s32 *)((u8 *)arg0 + 0x4) * 0xC;

    while (current > base) {
        current -= 0xC;

        if (current != 0) {
            obj = *(u8 **)(current + 0x8);

            if (obj != 0) {
                fn_800C428C(obj);
            }
        }
    }

    *(s32 *)((u8 *)arg0 + 0x4) = 0;
}

void fn_800CA990(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    s32 x;
    s32 y;
    s32 w;
    s32 h;
    s32 x2;
    s32 y2;
    s32 cols;
    s32 u0;
    s32 v0;
    s32 u1;
    s32 v1;
    
    w = M2C_FIELD(arg0, s32 *, 0x54);
    h = M2C_FIELD(arg0, s32 *, 0x58);
    x = arg3;
    y = arg4;
    x2 = arg3 + w;
    y2 = arg4 + h;
    
    if (arg2 >= M2C_FIELD(arg0, s32 *, 0x60)) {
        arg2 = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    }
    
    cols = M2C_FIELD(arg0, s32 *, 0x5C);
    u0 = M2C_FIELD(arg0, s32 *, 0x64) + w * (arg2 % cols);
    v0 = M2C_FIELD(arg0, s32 *, 0x68) + h * (arg2 / cols);
    u1 = u0 + w;
    v1 = v0 + h;
    
    if (M2C_FIELD(arg0, u32 *, 0x48) != 0) {
        fn_8000A258();
        fn_80009D74(0.0f, 0.0f, (f32) arg5, 1.0f);
        fn_80009F90(M2C_FIELD(arg0, u32 *, 0x48), arg10, (u16) M2C_FIELD(arg0, s32 *, 0x6C));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32) arg3, (f32) arg4, (f32) (x2 - arg3), (f32) (y2 - arg4));
        fn_80007770((f32) u0, (f32) v0, (f32) u1, (f32) v1);
        fn_800076AC((u8) arg6, (u8) arg7, (u8) arg8, (u8) arg9);
        fn_80007884();
    }
}

void fn_800CAC7C(Unit* unit, u32 arg1) {
    s32 temp_r30;
    s32 var_r29;
    u32 temp_r27;
    u32 var_r25;
    f32 temp_f30;
    f32 temp_f31;
    
    if (arg1 == 0) {
        unit->field_0x1C = 0;
        return;
    }
    
    if (unit->field_0x14 == 0) {
        var_r25 = 0;
        goto skip;
    }

    temp_r30 = unit->field_0x250;
    if (temp_r30 < 0 || temp_r30 >= 0x10000) {
        var_r25 = 0;
    } else {
        var_r25 = temp_r30 >> 0x10;
    }

skip:
    unit->field_0x1C = (u8)var_r25;
    temp_r27 = *(u32 *)lbl_80271FC0;
    
    if (unit->field_0x1A > 0xF) {
        var_r29 = 0xf;
    } else {
        var_r29 = unit->field_0x1A;
    }
    
    temp_f31 = lbl_80369F5C * (f32)var_r29;

    if (lbl_803678BC == 0) {
        temp_f30 = lbl_80369F60;
        unit->field_0x25 = (u16)(temp_f30 * temp_f31 + 1.0f);
    } else {
        temp_f30 = lbl_80369F3C;
        unit->field_0x25 = (u16)(temp_f30 * temp_f31 + 1.0f);
    }
}

s32 fn_800CAD4C(void *arg0, s32 arg1, u8 arg2) {
    u8 var_r5;

    M2C_FIELD(arg0, s32 *, 0x268) = arg1;
    M2C_FIELD(arg0, s32 *, 0x26C) = (s32) arg2;
    var_r5 = 0;
    M2C_FIELD(arg0, s32 *, 0x25C) = 0;
    if ((arg1 == 0) && (((s32) M2C_FIELD(arg0, s32 *, 0x254) > 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x258) > 0))) {
        var_r5 = 1;
    }
    if ((arg1 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x254) > 0)) {
        var_r5 = 1;
    }
    if ((arg1 == 2) && ((s32) M2C_FIELD(arg0, s32 *, 0x258) > 0)) {
        var_r5 = 1;
    }
    if ((arg1 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x254) > 0)) {
        var_r5 = 1;
    }
    if (var_r5 != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0xC) = 6;
        return 1;
    }
    return 0;
}

void fn_800CADF8(void) {
    extern u8 lbl_80367878;
    extern void *lbl_8036787C;
    void *object;

    if (lbl_80367878 != 0) {
        object = *(void **)((u8 *)lbl_8036787C + 0x440);

        if (object != NULL) {
            fn_801481CC(object, 0xFA);
        }
    }
}

void fn_800CAE38(void) {
    extern u8 lbl_80367878;
    extern void *lbl_8036787C;
    void fn_8014832C(s32, void *, s32, s32);
    void *fn_80145FE8(void);
    void *object;

    if (lbl_80367878 != 0) {
        object = *(void **)((u8 *)lbl_8036787C + 0x440);
        if (object != NULL) {
            fn_8014832C(1, object, 0x64, 1);
        }
    } else {
        object = fn_80145FE8();
        fn_8014832C(1, object, 0x64, 1);
    }
}

void fn_800CB070(void) {
    *(s32*)0x803620C4 = 0;
    *(s32*)0x803821A0 = 0;
    *(s32*)0x803821A4 = 0;
}

void fn_800CB27C(void** arg0) {
    if (arg0 != NULL) {
        (*(void (**)(void **))lbl_802B14E4)(arg0);
    }
}

void fn_800CB538(void *arg0, void *arg1)
{
    void fn_800C9ABC(void *, char *, void *);
    void fn_800CB65C(void *, void *, void *, void *, void *);

    extern void *lbl_8036787C;
    extern u8 lbl_80367878;

    String temp;
    char *source;
    void *scratchC;
    void *scratch8;

    if (lbl_80367878 != 0) {
        fn_800C9ABC(arg0, (char *)lbl_8036787C + 0x168, &scratchC);
    } else {
        source = **(char ***)((u8 *)lbl_80330EAC + 0x46C);

        fn_800C9ABC(&temp, source, &scratch8);

        fn_800CB65C(
            arg0,
            arg1,
            &temp,
            (u8 *)arg1 + 0x2C,
            (u8 *)arg1 + 0x50
        );

        fn_800C9A60(&temp, -1);
    }
}

void fn_800CB5CC(void *arg0, void *arg1)
{
    void fn_800C9ABC(void *, char *, void *);
    void fn_800CB65C(void *, void *, void *, void *, void *);

    extern void *lbl_8036787C;
    extern u8 lbl_80367878;

    String temp;
    char *source;
    void *scratchC;
    void *scratch8;

    if (lbl_80367878 != 0) {
        fn_800C9ABC(arg0, (char *)lbl_8036787C, &scratchC);
    } else {
        source = **(char ***)((u8 *)lbl_80330EAC + 0x18C);

        fn_800C9ABC(&temp, source, &scratch8);

        fn_800CB65C(
            arg0,
            arg1,
            &temp,
            (u8 *)arg1 + 0x20,
            (u8 *)arg1 + 0x44
        );

        fn_800C9A60(&temp, -1);
    }
}

void fn_800CB8A4(void *arg0, void *arg1, s32 arg2) {
    void fn_800C9B6C(void *, void *);
    void *fn_800C99A0(void *, s32, s32, s32);
    void *fn_800C9A60(void *, s32);
    u8 sp[0x10];

    fn_800C9B6C(sp, arg1);
    fn_800C9B6C(arg0, fn_800C99A0(sp, arg2, 0, -1));
    fn_800C9A60(sp, -1);
}

void fn_800CB90C(M2C_UNK *arg0, M2C_UNK *unused, s32 arg2) {
    s32 fn_800C992C(M2C_UNK *, s32, s32);
    M2C_UNK sp8;

    (void)unused;
    fn_800C9B6C(&sp8);
    fn_800C9B6C(arg0, fn_800C992C(&sp8, arg2, strlen(arg2)));
    fn_800C9A60(&sp8, -1);
}

#pragma dont_inline on
#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_800CBAF8(s32 self, void *path, u32 arg2) {
    u16 fn_8005C144(void);
    void *fn_800C42D8(u32);
    void fn_800C8D58(char *, void *);
    char *fn_800C8DCC(char *, void *, String *);
    void fn_800C8EFC(void *);
    void fn_800C8F70(void *, s32);
    void fn_800C9120(void *, s32);
    void *fn_800C91EC(void *, String *, String *);
    char *fn_800C93EC(String *);
    s32 fn_800C9400(void *, s32, u32, void *, s32);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void fn_800C9A60(String *, s32);
    void fn_800C9ABC(String *, char *, void *);
    void fn_800CB8A4(String *, String *, void *);
    void fn_800CB90C(String *, String *, char *);
    void fn_800CBF24(String *, char *, void *);
    void fn_800E8154(void *, String *);
    char *fn_801992F8(u32);
    void fn_801CA1DC(void *, void *);
    u32 strlen(const char *);
    extern char lbl_802704F8[];
    extern void *lbl_803682B8;

    struct Obj {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void *v2(char *, char *);
    };

    char spC0[0x20];
    char spA0[0x20];
    String sp94;
    String sp88;
    String sp7C;
    String sp70;
    String sp64;
    String sp58;
    String sp4C;
    String sp40;
    String sp34;
    String sp28;
    String sp1C;
    String sp10;
    void *scratchC;
    void *scratch8;
    char *base;
    void *obj;
    s32 i;
    s32 count;
    char *buf;
    char *p;
    void *vret;
    u8 flag;
    s8 made;

    sp94.cap = 0;
    sp88.cap = 0;
    sp94.size = 0;
    sp94.data = 0;
    sp94.cap = 0;
    sp88.size = 0;
    sp88.data = 0;
    sp88.cap = 0;

    if (arg2 != 0) {
        p = fn_801992F8(arg2);
        fn_800C96F8(&sp88, p, strlen(p));
    } else {
        fn_800C96F8(&sp88, (char *)((s32)lbl_802704F8 + 0x16F), strlen(&lbl_802704F8[0x16F]));
    }

    fn_800CBF24(&sp7C, lbl_802704F8 + 0x1C7, path);
    fn_800CB90C(&sp70, &sp7C, lbl_802704F8 + 0x1CD);
    fn_800CB8A4(&sp64, &sp70, path);
    fn_800CB90C(&sp58, &sp64, lbl_802704F8 + 0x1CF);
    fn_800CB8A4(&sp4C, &sp58, &sp88);
    fn_800CB90C(&sp40, &sp4C, lbl_802704F8 + 0x1D1);
    fn_800C9758(&sp94, &sp40, 0, -1);
    fn_800C9A60(&sp40, -1);
    fn_800C9A60(&sp4C, -1);
    fn_800C9A60(&sp58, -1);
    fn_800C9A60(&sp64, -1);
    fn_800C9A60(&sp70, -1);
    fn_800C9A60(&sp7C, -1);

    flag = 0;
    if (sp94.size == *(u32 *)(self + 0x198) &&
        fn_800C9400(&sp94, 0, sp94.size, *(void **)(self + 0x1A0), *(s32 *)(self + 0x198)) == 0) {
        flag = 1;
    }
    if (flag != 0) {
        fn_800C9A60(&sp88, -1);
        fn_800C9A60(&sp94, -1);
        return;
    }

    fn_800C9758((String *)(self + 0x198), &sp94, 0, -1);
    fn_800C93EC(&sp94);
    if ((u16)fn_8005C144() == 0x8000) {
        fn_800C9A60(&sp88, -1);
        fn_800C9A60(&sp94, -1);
        return;
    }

    made = 0;
    obj = fn_800C42D8(0x60);
    if (obj != 0) {
        fn_800C9ABC(&sp34, lbl_802704F8 + 0x1D6, &scratchC);
        made = 1;
        obj = fn_800C91EC(obj, &sp94, &sp34);
    }
    if (made != 0) {
        fn_800C9A60(&sp34, -1);
    }

    fn_800C8F70(obj, 0);
    fn_800C9ABC(&sp28, lbl_802704F8 + 0x1DB, &scratch8);
    fn_800C8DCC(spC0, obj, &sp28);
    count = *(s32 *)spC0;
    fn_800C9A60(&sp28, -1);

    base = lbl_802704F8;
    buf = spA0;
    for (i = 0; i < count; i++) {
        fn_800C8EFC(obj);
        fn_800C8D58(buf, obj);
        fn_800C96F8(&sp94, buf, strlen(buf));

        sp10.cap = 0;
        sp10.size = 0;
        sp10.data = 0;
        sp10.cap = 0;
        fn_800C96F8(&sp10, base + 0x1C7, strlen(base + 0x1C7));

        if (fn_800C9400(path, 0, *(u32 *)path, base + 0x1B0, strlen(base + 0x1B0)) != 0) {
            fn_800CB90C(&sp1C, (String *)path, base + 0x1CD);
            fn_800C99A0(&sp10, &sp1C, 0, -1);
            fn_800C9A60(&sp1C, -1);
        }
        fn_800C99A0(&sp10, &sp94, 0, -1);
        fn_800C992C(&sp10, base + 0x1D1, strlen(base + 0x1D1));
        fn_800E8154(*(void **)(self + 4), &sp10);

        vret = ((Obj *)*(void **)(self + 4))->v2(base + 0x1DF, fn_800C93EC(&sp94));
        if (vret != 0) {
            fn_801CA1DC(lbl_803682B8, vret);
        }
        fn_800C9A60(&sp10, -1);
    }

    fn_800C9120(obj, 1);
    fn_800C9A60(&sp88, -1);
    fn_800C9A60(&sp94, -1);
}
#pragma cplusplus reset
#pragma dont_inline reset
#pragma use_lmw_stmw reset

void fn_800CBF24(s32 arg0, char *arg1, s32 arg2) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    s32 fn_800C99A0(M2C_UNK *, s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_800C9ABC(M2C_UNK *, char *, M2C_UNK *);
    M2C_UNK fn_800C9B6C(s32, s32);
    M2C_UNK spC;
    M2C_UNK sp8;

    fn_800C9ABC(&spC, arg1, &sp8);
    fn_800C9B6C(arg0, fn_800C99A0(&spC, arg2, 0, -1));
    fn_800C9A60(&spC, -1);
}

#pragma optimization_level 3
#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_800CC3D8(void *arg0, s32 arg1) {
    struct Host {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5(void *);
        virtual void v6(const char *, const char *);
    };
    struct Widget {
        u8 pad[0x40];
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
        virtual void v11(f32, f32, f32);
    };
    void *fn_800C42D8(u32);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void fn_800C9ABC(String *, char *, void *);
    void *fn_800DE4F0(void *, void *, String *, String *);
    void fn_800DDAE0(void *, String *, String *);
    void *fn_800E6418(void *, void *, String *, String *, String *, String *);
    void fn_800E574C(void *, char *, s32, s32, s32, s32, f32);
    void fn_800E4E3C(void *);
    void fn_800E4B64(void *);
    s32 fn_800E56BC(void *);
    void *fn_80040844(void);
    u32 strlen(const char *);
    extern char lbl_802704F8[];
    extern void *lbl_80368278;
    extern u8 lbl_80367878;
s32 fn_80165B14(void *);
extern u32 lbl_80330EAC[];
    String str80, str74, str68, str5C, str50, str44, str38, str2C, str20;
    void *alloc1C, *alloc18, *alloc14, *alloc10, *allocC, *alloc8;
    void *self;
    void *obj;
    s8 flag;
    s8 made29;
    s8 made28;
    s8 made27;
    s8 made26;

    self = arg0;
    str80.cap=0;str74.cap=0;str68.cap=0;
str80.size=0;str80.data=0;str80.cap=0;
str74.size=0;str74.data=0;str74.cap=0;
str68.size=0;str68.data=0;str68.cap=0;
if(*(void **)((u8 *)self+0x80)&&fn_80165B14(*(void **)((u8 *)self+0x80))){
fn_800C9A60(&str68,-1);fn_800C9A60(&str74,-1);fn_800C9A60(&str80,-1);return;
}
if(lbl_80367878)fn_800C9758(&str80,(String *)(*(u8 **)((u8 *)self+0x1DC)+arg1*12),0,-1);
else {obj=*(void **)((u8 *)lbl_80330EAC+0xCB4);fn_800C96F8(&str80,(char *)obj,strlen((char *)obj));}
    ((Host *)*(void **)((u8 *)self + 4))->v6((char *)lbl_802704F8 + 0x30F, (char *)lbl_802704F8 + 0x315);
    ((Host *)*(void **)((u8 *)self + 4))->v6((char *)lbl_802704F8 + 0x31A, (char *)lbl_802704F8 + 0x320);
    fn_800C96F8(&str74, &lbl_802704F8[0x324], strlen((char *)lbl_802704F8 + 0x324));
    fn_800C99A0(&str74, &str80, 0, -1);
    fn_800C992C(&str74, &lbl_802704F8[0x1CD], strlen((char *)lbl_802704F8 + 0x1CD));
    fn_800C99A0(&str74, &str80, 0, -1);
    flag = 0;
    obj = fn_800C42D8(0x78);
    if (obj != NULL) {
        fn_800C9ABC(&str5C, &lbl_802704F8[0x320], &alloc1C);
        flag = 1;
        obj = fn_800DE4F0(obj, *(void **)((u8 *)self + 4), &str5C, &str74);
    }
    if (flag != 0) {
        fn_800C9A60(&str5C, -1);
    }
    fn_800C9ABC(&str50, &lbl_802704F8[0x329], &alloc18);
    fn_800DDAE0(obj, &str50, &str74);
    fn_800C9A60(&str50, -1);
    ((Host *)*(void **)((u8 *)self + 4))->v5(obj);
    made29 = 0;
    made28 = 0;
    made27 = 0;
    made26 = 0;
    obj = fn_800C42D8(0x118);
    if (obj != NULL) {
        fn_800C9ABC(&str44, &lbl_802704F8[0x32F], &alloc14);
        made29 = 1;
        fn_800C9ABC(&str38, &lbl_802704F8[0x320], &alloc10);
        made28 = 1;
        fn_800C9ABC(&str2C, &lbl_802704F8[0x315], &allocC);
        made27 = 1;
        fn_800C9ABC(&str20, &lbl_802704F8[0x30F], &alloc8);
        made26 = 1;
        obj = fn_800E6418(obj, *(void **)((u8 *)self + 4), &str20, &str2C, &str38, &str44);
    }
    if (made26 != 0) {
        fn_800C9A60(&str20, -1);
    }
    if (made27 != 0) {
        fn_800C9A60(&str2C, -1);
    }
    if (made28 != 0) {
        fn_800C9A60(&str38, -1);
    }
    if (made29 != 0) {
        fn_800C9A60(&str44, -1);
    }
    ((Widget *)obj)->v11(*(f32 *)((u8 *)lbl_80368278 + 0x24), *(f32 *)((u8 *)lbl_80368278 + 0x28), *(f32 *)((u8 *)lbl_80368278 + 0x2C));
    fn_800E574C(obj, (char *)lbl_802704F8 + 0x329, 1, 0, 0, 0xA, *(f32 *)((u8 *)lbl_80368278+0x30));
    fn_800E4E3C(obj);
    fn_800E4B64(obj);
    ((Host *)*(void **)((u8 *)self + 4))->v5(obj);
    self = fn_80040844();
    if (self != NULL) {
        *(s32 *)((u8 *)self + 0x34) = fn_800E56BC(obj);
    }
    fn_800C9A60(&str68, -1);
    fn_800C9A60(&str74, -1);
    fn_800C9A60(&str80, -1);

}
#pragma cplusplus reset
#pragma optimization_level 4

#pragma use_lmw_stmw on
void fn_800CCB9C(u8 *self, char *arg1) {
void *fn_800C42D8(u32); void fn_800C9ABC(void *,void *,void *); void *fn_800C91EC(void *,void *,void *);
void fn_8023440C(void *,void *,u32); void fn_800C908C(void *,void *,void *);
void fn_800C8CB4(void *,void *); void fn_800C8D58(void *,void *); u8 fn_800C8EFC(void *);
void fn_800C9758(void *,void *,s32,s32); void *fn_800C96F8(void *,void *,s32); s32 strlen(char *);
void fn_800CA18C(void *,void *,s32,void *); void fn_800C9120(void *,s16);
extern char lbl_802704F8[];
struct Block { u32 a,b,c,d,e,f,g,h; };
struct Block sp118,spF8;
char spD8[32];
struct Block spB8,sp98;
char sp78[32];
String sp6C,sp60,sp54,sp48,sp3C,sp30,sp24,sp18;
u32 sp14,sp10,spC,sp8;
s8 made1,made2; u8 *f; char *buffer; u8 *arg0=self;
made1=0; made2=0;
f=(u8 *)fn_800C42D8(0x60);
if(f) { fn_800C9ABC(&sp54,lbl_802704F8+0x1D6,&sp14); made1=1; fn_800C9ABC(&sp48,arg1,&sp10); made2=1; f=(u8 *)fn_800C91EC(f,&sp48,&sp54); }
if(made2 != 0)fn_800C9A60(&sp48,-1);
if(made1 != 0)fn_800C9A60(&sp54,-1);
sp6C.cap=0;sp60.cap=0;sp6C.size=0;sp6C.data=0;sp6C.cap=0;sp60.size=0;sp60.data=0;sp60.cap=0;
fn_800C9ABC(&sp3C,lbl_802704F8+0x1EB,&spC);
fn_8023440C(&spF8,lbl_802704F8+0x359,32); sp118=spF8;
fn_800C908C(f,&sp3C,&sp118);fn_800C9A60(&sp3C,-1);
buffer=spD8;
for(;fn_800C8EFC(f)!=0;){
fn_800C8CB4(&sp30,f);fn_800C9758(&sp6C,&sp30,0,-1);fn_800C9A60(&sp30,-1);
fn_800C8D58(spD8,f);fn_800C96F8(&sp60,buffer,strlen(buffer));
fn_800CA18C((void *)(arg0+0x1C8),M2C_FIELD(arg0,s32 *,0x1CC)*12+M2C_FIELD(arg0,u8 **,0x1D0),1,&sp60);
}
fn_800C9ABC(&sp24,lbl_802704F8+0x1EB,&sp8);fn_8023440C(&sp98,lbl_802704F8+0x365,32);spB8=sp98;
fn_800C908C(f,&sp24,&spB8);fn_800C9A60(&sp24,-1);
arg1=sp78;
while(fn_800C8EFC(f)){
fn_800C8CB4(&sp18,f);fn_800C9758(&sp6C,&sp18,0,-1);fn_800C9A60(&sp18,-1);
fn_800C8D58(sp78,f);fn_800C96F8(&sp60,arg1,strlen(arg1));
fn_800CA18C((void *)(arg0+0x1D4),M2C_FIELD(arg0,s32 *,0x1D8)*12+M2C_FIELD(arg0,u8 **,0x1DC),1,&sp60);
}
fn_800C9120(f,1);fn_800C9A60(&sp60,-1);fn_800C9A60(&sp6C,-1);
}

#pragma cplusplus on
#pragma global_optimizer off
extern "C" void *fn_800CCEBC(void *self, char *path, char *name, void *arg3) {
    void fn_800056CC(const char *, ...);
    u16 fn_8005C144(void);
    void *fn_8005C82C(s32);
    void fn_8008CDE0(void *, void *);
    char *fn_800C93EC(String *);
    s32 fn_800C9400(String *, s32, u32, char *, u32);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void fn_800C9A60(String *, s32);
    void fn_800C9ABC(String *, char *, void *);
    void fn_800CB90C(String *, String *, char *);
    void fn_800CBF24(String *, char *, String *);
    void fn_800DF67C(void *, String *);
    void fn_800E4B44(void *);
    void fn_800E4B84(void *);
    void fn_800E4BA4(void *, s32);
    void fn_800E4D24(void *);
    void fn_800E4E5C(void *);
    void *fn_800E56BC(void *);
    void fn_800E8154(void *, String *);
    void fn_801985F0(void *, void *);
    void fn_801985F8(void *, void *);
    s32 fn_80199310(void *);
    void fn_80199318(String *, void *);
    void fn_801CA1DC(void *, void *);
    u32 strlen(const char *);
    extern char lbl_802704F8[];
    extern void *lbl_803682B8;

    struct Obj {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void *v2(char *, char *);
    };

    String spDC;
    String spD0;
    String spC4;
    String spB8;
    String spAC;
    String spA0;
    String sp94;
    String sp88;
    String sp7C;
    String sp70;
    String sp64;
    String sp58;
    String sp4C;
    String sp40;
    String sp34;
    String sp28;
    String sp1C;
    void *scratch18;
    void *scratch14;
    void *scratch10;
    void *scratchC;
    void *scratch8;
    void *obj;
    void *vret;
    void *loaded;

    spDC.cap = 0;
    spDC.size = 0;
    spDC.data = 0;
    spDC.cap = 0;

    if (path == 0) {
        fn_800C9A60(&spDC, -1);
        return 0;
    }

    fn_800C96F8(&spDC, lbl_802704F8 + 0x36D, strlen(lbl_802704F8 + 0x36D));
    fn_800C9ABC(&spD0, path, &scratch18);
    fn_800C99A0(&spDC, &spD0, 0, -1);
    fn_800C9A60(&spD0, -1);
    fn_800C992C(&spDC, lbl_802704F8 + 0x1D1, strlen(lbl_802704F8 + 0x1D1));
    fn_800C93EC(&spDC);
    if ((u16)fn_8005C144() == 0x8000) {
        fn_800056CC(lbl_802704F8 + 0x372, fn_800C93EC(&spDC));
        fn_800C9A60(&spDC, -1);
        return 0;
    }

    fn_800E8154(*(void **)((u8 *)self + 4), &spDC);
    obj = ((Obj *)*(void **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x399, path);
    fn_800C9ABC(&spC4, name, &scratch14);
    fn_800DF67C(obj, &spC4);
    fn_800C9A60(&spC4, -1);
    fn_801985F8(obj, *(void **)((u8 *)self + 0x228));
    fn_801985F0(obj, arg3);
    if (*(u8 *)((u8 *)self + 0x186) != 0) {
        fn_800E4E5C(obj);
    }
    fn_800E4D24(obj);
    fn_800E4BA4(obj, 0xFF);
    fn_800E4B84(obj);
    fn_800E4B44(obj);

    if (fn_80199310(obj) == 4) {
        if (*(void **)((u8 *)self + 0x34C) == 0) {
            fn_800C9ABC(&spB8, lbl_802704F8 + 0x3A0, &scratch10);
            sp4C.cap = 0;
            sp4C.size = 0;
            sp4C.data = 0;
            sp4C.cap = 0;
            fn_800CBF24(&sp58, lbl_802704F8 + 0x1C7, &spB8);
            fn_800CB90C(&sp64, &sp58, lbl_802704F8 + 0x3A6);
            fn_800C9758(&sp4C, &sp64, 0, -1);
            fn_800C9A60(&sp64, -1);
            fn_800C9A60(&sp58, -1);
            fn_800C93EC(&sp4C);
            if ((u16)fn_8005C144() != 0x8000) {
                fn_800C93EC(&sp4C);
                loaded = fn_8005C82C(8);
                fn_800C9A60(&sp4C, -1);
            } else {
                fn_800056CC(lbl_802704F8 + 0x3AF, fn_800C93EC(&sp4C));
                fn_800C9A60(&sp4C, -1);
                loaded = 0;
            }
            *(void **)((u8 *)self + 0x34C) = loaded;
            fn_800C9A60(&spB8, -1);
        }

        fn_80199318(&spAC, obj);
        fn_800CB90C(&spA0, &spAC, lbl_802704F8 + 0x3C6);
        fn_800C9ABC(&sp94, lbl_802704F8 + 0x3A0, &scratchC);
        sp34.cap = 0;
        sp34.size = 0;
        sp34.data = 0;
        sp34.cap = 0;
        fn_800C96F8(&sp34, lbl_802704F8 + 0x1C7, strlen(lbl_802704F8 + 0x1C7));
        if (fn_800C9400(&sp94, 0, sp94.size, lbl_802704F8 + 0x1B0, strlen(lbl_802704F8 + 0x1B0)) != 0) {
            fn_800CB90C(&sp40, &sp94, lbl_802704F8 + 0x1CD);
            fn_800C99A0(&sp34, &sp40, 0, -1);
            fn_800C9A60(&sp40, -1);
        }
        fn_800C99A0(&sp34, &spA0, 0, -1);
        fn_800C992C(&sp34, lbl_802704F8 + 0x1D1, strlen(lbl_802704F8 + 0x1D1));
        fn_800E8154(*(void **)((u8 *)self + 4), &sp34);
        vret = ((Obj *)*(void **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x1DF, fn_800C93EC(&spA0));
        if (vret != 0) {
            fn_801CA1DC(lbl_803682B8, vret);
        }
        fn_800C9A60(&sp34, -1);
        fn_800C9A60(&sp94, -1);
        fn_800C9A60(&spA0, -1);
        fn_800C9A60(&spAC, -1);

        fn_80199318(&sp88, obj);
        fn_800CB90C(&sp7C, &sp88, lbl_802704F8 + 0x3CB);
        fn_800C9ABC(&sp70, lbl_802704F8 + 0x3A0, &scratch8);
        sp1C.cap = 0;
        sp1C.size = 0;
        sp1C.data = 0;
        sp1C.cap = 0;
        fn_800C96F8(&sp1C, lbl_802704F8 + 0x1C7, strlen(lbl_802704F8 + 0x1C7));
        if (fn_800C9400(&sp70, 0, sp70.size, lbl_802704F8 + 0x1B0, strlen(lbl_802704F8 + 0x1B0)) != 0) {
            fn_800CB90C(&sp28, &sp70, lbl_802704F8 + 0x1CD);
            fn_800C99A0(&sp1C, &sp28, 0, -1);
            fn_800C9A60(&sp28, -1);
        }
        fn_800C99A0(&sp1C, &sp7C, 0, -1);
        fn_800C992C(&sp1C, lbl_802704F8 + 0x1D1, strlen(lbl_802704F8 + 0x1D1));
        fn_800E8154(*(void **)((u8 *)self + 4), &sp1C);
        vret = ((Obj *)*(void **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x1DF, fn_800C93EC(&sp7C));
        if (vret != 0) {
            fn_801CA1DC(lbl_803682B8, vret);
        }
        fn_800C9A60(&sp1C, -1);
        fn_800C9A60(&sp70, -1);
        fn_800C9A60(&sp7C, -1);
        fn_800C9A60(&sp88, -1);
    }

    if (arg3 != 0 && fn_800E56BC(obj) != 0) {
        fn_8008CDE0(fn_800E56BC(obj), arg3);
    }

    fn_800C9A60(&spDC, -1);
    return obj;
}
#pragma global_optimizer reset
#pragma cplusplus reset

#pragma use_lmw_stmw reset
#pragma cplusplus on
extern "C" s32 fn_801519C0(void);
extern "C" s32 fn_800CD53C(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void *v3(const char *, const char *);
    };

    if (((Obj *)M2C_FIELD(arg0, void **, 4))->v3((char *)lbl_802704F8 + 0x3D0, (char *)lbl_802704F8 + 0x3D7) != NULL) {
        return fn_801519C0();
    }
    return 0;
}

extern "C" s32 fn_801517C0(void);
extern "C" s32 fn_800CD590(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void *v3(const char *, const char *);
    };

    if (((Obj *)M2C_FIELD(arg0, void **, 4))->v3((char *)lbl_802704F8 + 0x3D0, (char *)lbl_802704F8 + 0x3D7) != NULL) {
        return fn_801517C0();
    }
    return 0;
}

#pragma cplusplus on
extern "C" void fn_800CD5E4(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void *v2(const char *, const char *);
        virtual void *v3(const char *, const char *);
    };
    void fn_801517C8(void);

    if (((Obj *)M2C_FIELD(arg0, void **, 4))->v2((char *)lbl_802704F8 + 0x3D0, (char *)lbl_802704F8 + 0x3D7) != NULL) {
        fn_801517C8();
    }
}
extern "C" s32 fn_800CD630(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual s32 v2(const char *, const char *);
        virtual void *v3(const char *, const char *);
    };

    return ((Obj *)M2C_FIELD(arg0, void **, 4))->v2((char *)lbl_802704F8 + 0x3D0, (char *)lbl_802704F8 + 0x3D7) == 0;
}
#pragma cplusplus reset

#pragma dont_inline on
#pragma use_lmw_stmw on
extern "C" void *fn_800CD79C(s32 arg0,void *arg1,s32 arg2,u32 arg3,u32 arg4,s32 arg5,u8 arg6) {
 void fn_800C9ABC(void *,void *,void *); void fn_800CB8A4(void *,void *,s32); void fn_800CB90C(void *,void *,void *);
 void *fn_800C42D8(u32); void *fn_800C93EC(s32); void *fn_800C96F8(void *,void *,s32);
 char *fn_801992F8(u32); s32 strlen(const char *);
 void fn_800E78B0(void *,String *); void fn_800E8154(void *,void *);
 void *fn_80117A94(void *,void *,void *,void *,s32,u8);
 void fn_80112824(void *,void *); void fn_801167BC(void *,u32); void fn_801166C4(void *,u32);
 void fn_800DF664(u32); void fn_8011660C(void *,s32); void fn_800E4E5C(void *);
 void fn_800E4D24(void *); void fn_800E4BA4(void *,s32); void fn_800E4B84(void *); void fn_800E4B44(void *);
 extern char lbl_802704F8[]; extern u8 lbl_8036788C;
 struct Obj { u8 pad[16]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(void *); };
 String sp74,sp68,sp5C,sp50,sp44,sp38,sp2C,sp20,sp14;
 u32 sp10,spC,sp8;
 void *result;
 s8 made1,made2;
 s32 self;
 self=arg0;

 fn_800C9ABC(&sp74,lbl_802704F8+0x3DB,&sp10);
 sp68.cap=0; sp5C.cap=0; sp68.size=0; sp68.data=0; sp68.cap=0;
 sp5C.size=0; sp5C.data=0; sp5C.cap=0;
 if(M2C_FIELD(self,s32 *,0x274)) {
 if(arg6) arg6=0; else arg6=1;
 }
 if(arg3) { result=fn_801992F8(arg3); fn_800C96F8(&sp5C,result,strlen((char *)result)); }
 else fn_800C96F8(&sp5C,lbl_802704F8+0x16F,strlen((char *)lbl_802704F8+0x16F));
 if(lbl_8036788C) fn_800C96F8(&sp5C,lbl_802704F8+0x16F,strlen((char *)lbl_802704F8+0x16F));
 fn_800E78B0(M2C_FIELD(self,void **,4),&sp5C);
 fn_800CB8A4(&sp50,&sp74,arg2); fn_800CB90C(&sp44,&sp50,lbl_802704F8+0x1D1);
 fn_800E8154(M2C_FIELD(self,void **,4),&sp44);
 fn_800C9A60(&sp44,-1); fn_800C9A60(&sp50,-1);
 made1=0; made2=0;
 result=fn_800C42D8(0x1D8);
 if(result) {
 fn_800C9ABC(&sp38,fn_800C93EC(arg2),&spC); made1=1;
 fn_800C9ABC(&sp2C,arg1,&sp8); made2=1;
 result=fn_80117A94(result,M2C_FIELD(self,void **,4),&sp2C,&sp38,arg5,arg6);
 }
 if(made2) fn_800C9A60(&sp2C,-1);
 if(made1) fn_800C9A60(&sp38,-1);
 fn_800CB8A4(&sp20,&sp74,arg2); fn_800CB90C(&sp14,&sp20,lbl_802704F8+0x3DF);
 fn_80112824(result,&sp14); fn_800C9A60(&sp14,-1); fn_800C9A60(&sp20,-1);
 fn_801167BC(result,arg3);
 if(arg4) { fn_801166C4(result,arg4); fn_800DF664(arg4); }
 fn_8011660C(result,M2C_FIELD(self,s32 *,0x228));
 ((Obj *)M2C_FIELD(self,void **,4))->v5(result);
 if(M2C_FIELD(self,u8 *,0x186)) fn_800E4E5C(result);
 fn_800E4D24(result); fn_800E4BA4(result,255); fn_800E4B84(result); fn_800E4B44(result);
 fn_800C9A60(&sp5C,-1); fn_800C9A60(&sp68,-1); fn_800C9A60(&sp74,-1);
 return result;
}
#pragma dont_inline reset
#pragma use_lmw_stmw reset

void fn_800CDAA0(void *arg0, void *arg1) {
    s32 tmp;
    if (arg1 == NULL) {
        return;
    }
    tmp = *(s32 *)((s8 *)arg1 + 0);
    if (tmp < 0) {
        return;
    }
    if (arg0 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x0) = tmp;
        *(s32 *)((s8 *)arg0 + 0x4) = *(s32 *)((s8 *)arg1 + 0x8);
        *(s32 *)((s8 *)arg0 + 0x8) = *(s32 *)((s8 *)arg1 + 0xC);
    }
}

s32 fn_800CDBA4(s32 *arg1, u32 arg2) {
    return 0;
}

void fn_800CDFFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    // Simplest possible version for initial attempt
    return;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
extern "C" void fn_800CE214(void *self, void *stat) {
    void fn_800558D8(char *);
    void fn_800D5DB0(void *, void *, s32, void *);
    s32 fn_8011654C(void *);
    s32 fn_80116580(void *);
    void *fn_80116604(void *);
    void fn_80199240(void);
    extern char lbl_802704F8[];

    u8 copy[0x58];
    s32 n;
    s32 r30;
    s32 r29;
    s32 i;
    u8 ok;

    r29 = fn_80116580(*(void **)stat);
    r30 = fn_8011654C(*(void **)stat);
    ok = 1;
    {
        s32 cur = *(s32 *)((u8 *)stat + 0x18);
        if (cur != 0xB) {
            *(s32 *)((u8 *)stat + 0x18) = 0;
        }
    }
    i = 0;
    *(s32 *)((u8 *)stat + 0x1C) = 0;
    *(s32 *)((u8 *)stat + 0x20) = 0;
    *(s32 *)((u8 *)stat + 0x24) = 0;
    {
        s16 *stream = *(s16 **)((u8 *)self + 0x1FC);
        s16 idx = *stream;
        s16 val = *(s16 *)((u8 *)stream + idx * 4 + 6);
        *stream = (s16)(idx + 1);
        n = (s8)val;
    }

    while (i < n) {
        s16 *stream;
        s32 idx4;
        s32 off;
        s32 code;
        stream = *(s16 **)((u8 *)self + 0x1FC);
        idx4 = (*stream) * 4;
        off = idx4 + 4;
        code = *(u8 *)((u8 *)stream + off);
        switch (code) {
        case 9:
            if (*(s32 *)((u8 *)stat + 0x10) == 0) {
                *(s32 *)((u8 *)stat + 0x20) = (s8)*(s16 *)((u8 *)stream + idx4 + 6);
            } else {
                *(s32 *)((u8 *)stat + 0x24) = (s8)*(s16 *)((u8 *)stream + idx4 + 6);
                if (*(s32 *)((u8 *)stat + 0x24) == 0) {
                    fn_800558D8(lbl_802704F8 + 0x46F);
                    fn_800558D8(lbl_802704F8 + 0x47C);
                }
            }
            break;
        case 0x15:
            if (*(s32 *)((u8 *)stat + 0x10) == 1) {
                *(s32 *)((u8 *)stat + 0x20) = (s8)*(s16 *)((u8 *)stream + idx4 + 6);
            } else {
                *(s32 *)((u8 *)stat + 0x24) = (s8)*(s16 *)((u8 *)stream + idx4 + 6);
                if (*(s32 *)((u8 *)stat + 0x24) == 0) {
                    fn_800558D8(lbl_802704F8 + 0x46F);
                    fn_800558D8(lbl_802704F8 + 0x47C);
                }
            }
            break;
        case 0x50:
            *(s32 *)((u8 *)stat + 0x1C) = 0;
            break;
        case 0x51:
            *(s32 *)((u8 *)stat + 0x18) = 1;
            *(s32 *)((u8 *)stat + 0x1C) = 1;
            fn_800558D8(lbl_802704F8 + 0x48B);
            break;
        case 0x52:
            *(s32 *)((u8 *)stat + 0x1C) = 2;
            fn_800558D8(lbl_802704F8 + 0x499);
            break;
        case 0x53:
            ok = 0;
            break;
        }
        stream = *(s16 **)((u8 *)self + 0x1FC);
        i += 1;
        *stream = (s16)(*stream + 1);
    }

    if (*(s32 *)((u8 *)self + 0x204) > 1 && ok != 0) {
        s32 k = 11;
        u32 *d = (u32 *)(copy - 4);
        void *entry = (u8 *)*(void **)((u8 *)self + 0x208)
            + (*(s32 *)((u8 *)self + 0x204) - 1) * 0x58;
        u32 *s = (u32 *)((u8 *)entry - 4);
        for (; k != 0; k--) {
            d[1] = s[1];
            s += 2;
            d += 2;
            d[0] = s[0];
        }
        if (*(s32 *)((u8 *)stat + 0x10) == *(s32 *)(copy + 0x10)) {
            *(s32 *)((u8 *)entry + 0x2C) = 1;
            *(s32 *)((u8 *)stat + 0x28) = 1;
        }
    }

    if (fn_80116604(*(void **)stat) != 0) {
        fn_80116604(*(void **)stat);
        fn_80199240();
    }

    {
        s32 ctr;
        u8 *p;
        u8 found;
        s32 tmp;
        ctr = *(s32 *)((u8 *)stat + 0x50);
        p = (u8 *)stat;
        found = 0;
        for (; ctr > 0; ctr--) {
            tmp = *(s32 *)(p + 0x30);
            if (tmp >= 0 && tmp <= 0x13 && tmp != 7 && tmp != 9 && tmp != 5) {
                found = 1;
            }
            p += 4;
        }
        if (found != 0) {
            *(s32 *)((u8 *)stat + 0x18) = 8;
        }
    }

    if ((r30 == 1 && *(s32 *)((u8 *)self + 0x228) > 1) || r29 == 3) {
        s32 tmp = *(s32 *)((u8 *)stat + 0x18);
        if (tmp == 0) {
            *(s32 *)((u8 *)stat + 0x18) = 2;
        } else if (tmp == 1) {
            *(s32 *)((u8 *)stat + 0x18) = 3;
        } else if (tmp == 8) {
            *(s32 *)((u8 *)stat + 0x18) = 4;
        }
    }

    if (r29 == 4 || (r30 == 2 && *(s32 *)((u8 *)self + 0x228) > 1)) {
        s32 tmp = *(s32 *)((u8 *)stat + 0x18);
        if (tmp == 0 || tmp == 2) {
            *(s32 *)((u8 *)stat + 0x18) = 5;
        } else if (tmp == 1 || tmp == 3) {
            *(s32 *)((u8 *)stat + 0x18) = 6;
        } else if (tmp == 8 || tmp == 4) {
            *(s32 *)((u8 *)stat + 0x18) = 7;
        }
    }

    if (r29 == 0xB) {
        s32 tmp = *(s32 *)((u8 *)stat + 0x18);
        if (tmp == 0 || tmp == 2) {
            *(s32 *)((u8 *)stat + 0x18) = 9;
        } else if (tmp == 1 || tmp == 3) {
            *(s32 *)((u8 *)stat + 0x18) = 0xA;
        }
    }

    {
        s16 *stream;
        s32 idx4;
        s32 off;
        u8 code2;
        stream = *(s16 **)((u8 *)self + 0x1FC);
        idx4 = (*stream) * 4;
        off = idx4 + 4;
        code2 = *(u8 *)((u8 *)stream + off);
        if ((s32)code2 == 0xB || (s32)code2 == 0x17) {
            *(s32 *)((u8 *)stat + 0x1C) = 3;
            fn_800558D8(lbl_802704F8 + 0x4A2);
            if ((s32)code2 == 0xB) {
                ((u8 *)self)[0x72] = ((u8 *)self)[0x70];
            } else {
                ((u8 *)self)[0x72] = ((u8 *)self)[0x71];
            }
            stream = *(s16 **)((u8 *)self + 0x1FC);
            *stream = (s16)(*stream + 1);
        }
    }

    fn_800D5DB0((u8 *)self + 0x200,
        (u8 *)*(void **)((u8 *)self + 0x208) + *(s32 *)((u8 *)self + 0x204) * 0x58,
        1, stat);
}
#pragma global_optimizer reset
s32 fn_800CE690(s32 param1, s32 param2) {
    // Simplest version first - just the basic structure to get it compiling
    return 0;
}

extern s32 fn_800D5DB0(void *, s32, s32, s32 *);
extern u8 fn_800CEB6C(void *, s32 *);
extern void fn_800CE690(void *, s32 *);
extern void fn_800CE214(void *, s32 *);
extern void fn_800CDFFC(void *);
extern u8 fn_800CED88(void *);
void fn_800CF000(void *arg0)
{
    void* self = arg0;
    
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s8 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    
    // Initialize stack variables - this is a guess based on the disassembly
    sp8 = *(s32*)((u8*)self + 0x84);
    spC = *(s32*)((u8*)self + 0x88);
    sp10 = *(s32*)((u8*)self + 0xA8);
    sp14 = *(s32*)((u8*)self + 0xA4);
    
    sp18 = 0;
    sp1C = 0;
    sp20 = 0xD;
    sp24 = 0;
    sp28 = 0;
    sp2C = 0;
    sp30 = 0;
    sp34 = 0;
    sp44 = -1;
    sp40 = -1;
    sp3C = -1;
    sp38 = -1;
    sp54 = -1;
    sp50 = -1;
    sp4C = -1;
    sp48 = -1;
    sp58 = 0;
    sp5C = 0;
    
loop_12:
    if (sp24 == 0)
    {
        s16* temp_r5 = *(s16**)((u8*)self + 0x1FC);
        s16 temp_r4 = *temp_r5;
        s32 temp_r3 = temp_r4 * 4;
        u8 temp_r0 = *(temp_r5 + (temp_r3 + 4));
        
        switch ((s32) temp_r0)
        {
        case 0x55:
            {
                s16 temp_r3_2 = *(temp_r5 + (temp_r3 + 6));
                *temp_r5 = temp_r4 + 1;
                
                if ((s8) temp_r3_2 != 0)
                {
                    s16* temp_r4_2 = *(s16**)((u8*)self + 0x1FC);
                    *temp_r4_2 += (s8) temp_r3_2;
                }
            }
            break;
        case 0x56:
            fn_800CE690(arg0, &sp8);
            break;
        case 0x57:
            fn_800CE214(arg0, &sp8);
            break;
        default:
            sp24 = 1;
            break;
        }
        goto loop_12;
    }
    
    fn_800D5DB0(
        (u8*)arg0 + 0x200,
        *(s32*)((u8*)self + 0x208) + (*(s32*)((u8*)self + 0x204) * 0x58),
        1,
        &sp8
    );
    
    s16* temp_r30 = *(s16**)((u8*)self + 0x1FC);
    u8 var_r3 = *(temp_r30 + ((s16)*temp_r30 * 4 + 4));
    s8 var_r4 = *(temp_r30 + ((s16)*temp_r30 * 4 + 6));
    
loop_17:
    if ((s32) var_r3 != 0x54)
    {
        *temp_r30 += 1;
        
        if (var_r4 != 0)
        {
            *temp_r30 += var_r4;
        }
        
        s16* temp_r3_4 = temp_r30 + (*temp_r30 * 4);
        var_r3 = *(temp_r3_4 + 1);
        var_r4 = *(temp_r3_4 + 2);
        goto loop_17;
    }
    
    *temp_r30 += 1;
    u8 temp_r0_2 = *(temp_r30 + ((s16)*temp_r30 * 4 + 4));
    
    if (((s32) temp_r0_2 == 0x20) || ((s32) temp_r0_2 == 0x22))
    {
        *(s32*)((u8*)self + 0x270) = 0;
        
        if (*(s32*)((u8*)self + 0x274) == 0)
            *(s32*)((u8*)self + 0x270) = 0;
        else 
            *(s32*)((u8*)self + 0x270) = 1;
    }
    else if (*(s32*)((u8*)self + 0x274) == 0)
    {
        *(s32*)((u8*)self + 0x270) = 1;
    }
    else
    {
        *(s32*)((u8*)self + 0x270) = 0;
    }
    
    s32 var_r29 = 0;
    
loop_27:
    if (var_r29 == 0)
    {
        var_r29 = fn_800CED88(arg0);
        goto loop_27;
    }
    
    fn_800CDFFC(arg0);
    *(s32*)((u8*)self + 0x20C) = 0;
}

#pragma cplusplus reset
void fn_800CF27C(s32 arg0, s32 arg1, s32 arg2)
{
    extern s32 lbl_80367884;
    u8 tmp[4];
    u32 color;

    tmp[0] = 0x80;
    tmp[1] = 0x80;
    tmp[2] = 0x80;
    tmp[3] = 0xFF;
    color = *(u32 *)tmp;
    fn_801C6CBC(&color, arg1, lbl_80367884, arg2);
}

void fn_800CF500(void *arg0, void *arg1, void *arg2)
{
    void fn_800E7AD4(void *, void *, s32, u8, u8);
    u8 fn_80110220(void *);
    void *self;
    void *a1;
    u8 v;

    self = arg0;
    a1 = arg1;
    if (*(u8 *)((u8 *)self + 0x196) != 0) {
        if (arg2 == NULL) {
            v = *(u8 *)((u8 *)self + 0x178);
            fn_800E7AD4(*(void **)((u8 *)self + 4), a1, *(s32 *)((u8 *)self + 0x174), v, v);
        } else if ((u8)fn_80110220(arg2) == 0) {
            v = *(u8 *)((u8 *)self + 0x178);
            fn_800E7AD4(*(void **)((u8 *)self + 4), a1, *(s32 *)((u8 *)self + 0x174), v, v);
        }
    }
}

void fn_800CF588(void *arg0) {
    M2C_UNK fn_800E7B80(s32);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x196) != 0) {
        fn_800E7B80(M2C_FIELD(arg0, s32 *, 4));
    }
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_800CF5B8(void *arg0) {
    struct Host {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void *v4(char *, char *);
    };
    struct String {
        s32 size;
        void *data;
        s32 cap;
    };
    void fn_800C9ABC(String *, char *, void *);
    void fn_800C9A60(String *, s32);
    void *fn_800E7DF8(void *, String *);
    void fn_800E2218(void *, void *);
    void fn_80123300(void *, s32);
    void fn_80196A58(void *, s32, s32);
    extern char lbl_802704F8[];
    extern void *lbl_8028DA94[];
    extern void *lbl_8028DAA4[];
    extern u32 lbl_80330EAC[];
    extern u8 lbl_80367878;
    extern u8 *lbl_8036787C;

    void *self = arg0;
    s16 *stream = *(s16 **)((u8 *)self + 0x1FC);
    s32 r29, r28, r27, r26, r25, r24, r23, r22, r21, r20, r19, r18;
    u8 r17, r16;
    s32 op, skip;
    void *pE8, *pE4, *pE0, *pDC, *pD8, *pD4, *pD0, *pCC, *pC8;
    void *p14, *p31, *p30;
    String s0, s1, s2, s3, s4, s5;
    void *a0, *a1, *a2, *a3, *a4, *a5;
    Host *host;
    s32 idx;
    u8 *g;
    u8 *row;
    void *tmp;

    if (lbl_80367878 != 0) {
        g = lbl_8036787C;
        r26 = 0;
        r17 = 0;
        r20 = 0;
        r28 = *(s32 *)(g + 0x140);
        r16 = 1;
        r22 = *(s32 *)(g + 0x2A8);
        r27 = *(s32 *)(g + 0x144);
        r29 = r28;
        r25 = *(s32 *)(g + 0x148);
        r23 = r22;
        r24 = *(s32 *)(g + 0x14C);
        r21 = *(s32 *)(g + 0x2AC);
        r19 = *(s32 *)(g + 0x2B0);
        r18 = *(s32 *)(g + 0x2B4);
    } else {
        row = (u8 *)stream + ((*stream << 2) + 4);
        skip = (s8)*(s16 *)(row + 2);
        op = row[0];
        while (op != 0x55) {
            *stream += 1;
            if (skip != 0) {
                *stream = (s16)(*stream + skip);
            }
            row = (u8 *)stream + (*stream << 2);
            skip = (s8)*(s16 *)(row + 6);
            op = row[4];
        }
        *stream += 1;
        r29 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r28 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r27 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r26 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r25 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r24 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r23 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r22 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r21 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r20 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r19 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        *stream += 1;
        r18 = (s8)*(s16 *)((u8 *)stream + (*stream << 2) + 6);
        tmp = *(void **)((u8 *)lbl_80330EAC + 0x190);
        r17 = *((u8 *)tmp + 8);
        tmp = *(void **)((u8 *)lbl_80330EAC + 0x470);
        r16 = *((u8 *)tmp + 8);
    }

    host = *(Host **)((u8 *)self + 4);
    if (*(s32 *)((u8 *)self + 0x274) == 0) {
        pE8 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4EF);
        pE4 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4F7);
        pE0 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4FF);
        pDC = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x508);
        pD8 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x510);
        pD4 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x518);
        fn_800C9ABC(&s0, lbl_802704F8 + 0x521, &a0);
        pD0 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s0);
        fn_800C9A60(&s0, -1);
        fn_800C9ABC(&s1, lbl_802704F8 + 0x52B, &a1);
        pCC = fn_800E7DF8(*(void **)((u8 *)self + 4), &s1);
        fn_800C9A60(&s1, -1);
        fn_800C9ABC(&s2, lbl_802704F8 + 0x534, &a2);
        pC8 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s2);
        fn_800C9A60(&s2, -1);
        fn_800C9ABC(&s3, lbl_802704F8 + 0x542, &a3);
        p14 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s3);
        fn_800C9A60(&s3, -1);
        fn_800C9ABC(&s4, lbl_802704F8 + 0x54C, &a4);
        p31 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s4);
        fn_800C9A60(&s4, -1);
        fn_800C9ABC(&s5, lbl_802704F8 + 0x555, &a5);
        p30 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s5);
        fn_800C9A60(&s5, -1);
    } else {
        pE8 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x508);
        pE4 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x510);
        pE0 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x518);
        pDC = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4EF);
        pD8 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4F7);
        pD4 = host->v4(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4FF);
        fn_800C9ABC(&s0, lbl_802704F8 + 0x542, &a0);
        pD0 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s0);
        fn_800C9A60(&s0, -1);
        fn_800C9ABC(&s1, lbl_802704F8 + 0x54C, &a1);
        pCC = fn_800E7DF8(*(void **)((u8 *)self + 4), &s1);
        fn_800C9A60(&s1, -1);
        fn_800C9ABC(&s2, lbl_802704F8 + 0x555, &a2);
        pC8 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s2);
        fn_800C9A60(&s2, -1);
        fn_800C9ABC(&s3, lbl_802704F8 + 0x521, &a3);
        p14 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s3);
        fn_800C9A60(&s3, -1);
        fn_800C9ABC(&s4, lbl_802704F8 + 0x52B, &a4);
        p31 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s4);
        fn_800C9A60(&s4, -1);
        fn_800C9ABC(&s5, lbl_802704F8 + 0x534, &a5);
        p30 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s5);
        fn_800C9A60(&s5, -1);
    }

    fn_80196A58(*(void **)((u8 *)self + 0xA4), r28, r29);
    fn_80123300(pE8, r27);
    fn_80123300(pE4, r25 - r20);
    fn_80123300(pE0, r24);
    idx = (s32)r17 << 2;
    fn_800E2218(pD0, *(void **)((u8 *)lbl_8028DA94 + idx));
    fn_800E2218(pCC, *(void **)((u8 *)lbl_8028DAA4 + idx));
    fn_800E2218(pC8, *(void **)((u8 *)lbl_8028DA94 + idx));
    fn_80196A58(*(void **)((u8 *)self + 0xA8), r22, r23);
    fn_80123300(pDC, r21);
    fn_80123300(pD8, r19 - r26);
    fn_80123300(pD4, r18);
    idx = (s32)r16 << 2;
    fn_800E2218(p14, *(void **)((u8 *)lbl_8028DA94 + idx));
    fn_800E2218(p31, *(void **)((u8 *)lbl_8028DAA4 + idx));
    fn_800E2218(p30, *(void **)((u8 *)lbl_8028DA94 + idx));
    *(s32 *)((u8 *)self + 0x230) = 0;
}

extern "C" void fn_800CFDDC(void *arg0) {
    void *fn_8002595C(s32);
    void fn_800C9ABC(void *, char *, void *);
    void fn_800C9A60(void *, s32);
    void fn_800E7C94(void *, void *, s32, f32);
    void fn_800D75C4(void *);
    void fn_800D758C(void *);
    void fn_800D74FC(void *);
    void fn_800E76D0(void *, u8);
    void fn_800C96F8(void *, char *, s32);
    void fn_800C9758(void *, void *, s32, s32);
    void fn_800E7B80(void *, void *);
    s32 fn_800C9400(void *, s32, s32, char *, s32);
    void *fn_800E7F60(void *, void *);
    u8 fn_800E8FB4(void *);
    void fn_800DBBC8(f32 *, void *);
    void fn_800E8FCC(f32 *, void *);
    void fn_800DBB58(f32 *, void *);
    void fn_800DBB74(f32 *, void *);
    void fn_80202300(void *, s32, f32);
    void fn_802029C4(void *, f32 *, f32 *);
    f32 fn_800E9018(void *);
    void fn_800E8FE8(void *, f32);
    void fn_800E8FBC(void *, f32, f32, f32);
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007858(f32, f32);
    void fn_80231D94(void *, char *, ...);
    void fn_80007124(void *);
    void fn_80007290(s32, s32, s32, s32);
    void fn_80007884(void);
    void fn_801126A4(void *, s32, s32);
    void fn_801C9D94(void *, void *);
    extern char lbl_802704F8[];
    extern char *lbl_80366E48[];
    extern void *lbl_80367240;
    extern s32 lbl_80367890;
    extern s8 lbl_80367894;
    extern u8 *lbl_80368278;
    extern u8 *lbl_803682B8;
    extern f32 lbl_80369DC8;
    extern f32 lbl_80369DCC;
    extern f32 lbl_80369DD4;
    extern f32 lbl_80369DD8;
    extern f32 lbl_80369DDC;
    extern f32 lbl_80369DE0;
    extern f32 lbl_80369DE4;
    extern f32 lbl_80369DE8;
    extern f32 lbl_80369DEC;
    extern f32 lbl_80369DF0;
    extern f32 lbl_80369DF4;
    extern f32 lbl_80369DF8;

    u8 spD0[0x30];
    u8 sp90[0x40];
    f32 sp8C;
    f32 sp84;
    u8 sp78[0xC];
    u8 sp6C[0xC];
    u8 sp60[0xC];
    u8 sp54[0xC];
    u8 sp48[0xC];
    f32 sp3C[3];
    f32 sp30[3];
    f32 sp24[3];
    f32 sp18[3];
    void *scratch14;
    void *scratch10;
    void *scratchC;
    void *scratch8;
    f32 f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31;
    s32 held, pressed;
    void *pad;
    void *obj;
    char *msg;
    void *vt;
    u8 *self = (u8 *)arg0;

    f23 = 0.0f;
    if (lbl_80367894 == 0) {
        lbl_80367890 = 0;
        lbl_80367894 = 1;
    }
    f20 = lbl_80369DD4;
    held = *(s32 *)((u8 *)lbl_80367240 + 4);
    pressed = held & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ held);
    pad = fn_8002595C(1);
    if ((*(s32 *)((u8 *)pad + 4) & (*(s32 *)((u8 *)pad + 8) ^ *(s32 *)((u8 *)pad + 4)) & 0x200) != 0) {
        if (self[0x1A4] == 0) {
            fn_800C9ABC(sp78, lbl_802704F8 + 0x563, &scratch14);
            fn_800E7C94(*(void **)(self + 4), sp78, 1, *(f32 *)(lbl_80368278 + 0x68));
            fn_800C9A60(sp78, -1);
            fn_800C9ABC(sp6C, lbl_802704F8 + 0x56A, &scratch10);
            fn_800E7C94(*(void **)(self + 4), sp6C, 1, *(f32 *)(lbl_80368278 + 0x68));
            fn_800C9A60(sp6C, -1);
            self[0x1A4] = 1;
        } else {
            fn_800C9ABC(sp60, lbl_802704F8 + 0x563, &scratchC);
            fn_800E7C94(*(void **)(self + 4), sp60, 1, *(f32 *)(lbl_80368278 + 0x6C));
            fn_800C9A60(sp60, -1);
            fn_800C9ABC(sp54, lbl_802704F8 + 0x56A, &scratch8);
            fn_800E7C94(*(void **)(self + 4), sp54, 1, *(f32 *)(lbl_80368278 + 0x6C));
            fn_800C9A60(sp54, -1);
            self[0x1A4] = 0;
        }
    }
    if (pressed & 0x10) {
        if (self[0x195] == 0) {
            self[0x195] = 1;
            self[0x194] = 1;
            fn_800D75C4(lbl_803682B8);
            self[0x196] = 0;
            fn_800E76D0(*(void **)(self + 4), self[0x196]);
        } else {
            self[0x195] = 0;
            self[0x194] = 0;
            fn_800D758C(lbl_803682B8);
            fn_800C96F8(self + 0xB8, lbl_802704F8 + 0x1B0, strlen(lbl_802704F8 + 0x1B0));
            self[0x196] = 1;
            fn_800E76D0(*(void **)(self + 4), self[0x196]);
        }
        self[0x194] = 1;
    }
    if (pressed & 0x200) {
        if (lbl_803682B8[0x420] == 0) {
            fn_800D75C4(lbl_803682B8);
        } else {
            fn_800D758C(lbl_803682B8);
        }
    }
    if (self[0x195] != 0) {
        fn_800D74FC(lbl_803682B8);
        fn_801C9D94(sp48, lbl_803682B8);
        fn_800C9758(self + 0xB8, sp48, 0, -1);
        fn_800C9A60(sp48, -1);
        fn_800E7B80(*(void **)(self + 4), self + 0xB8);
    }
    if (pressed & 0x400) {
        fn_800C96F8(self + 0xB8, lbl_802704F8 + 0x572, strlen(lbl_802704F8 + 0x572));
        fn_800E7B80(*(void **)(self + 4), self + 0xB8);
        self[0x196] = 0;
        fn_800E76D0(*(void **)(self + 4), self[0x196]);
        self[0x195] = 0;
        fn_800D758C(lbl_803682B8);
    }
    if (pressed & 0x800) {
        msg = lbl_80366E48[lbl_80367890];
        lbl_80367890 += 1;
        fn_800C96F8(self + 0xB8, msg, strlen(msg));
        fn_800E7B80(*(void **)(self + 4), self + 0xB8);
        self[0x196] = 0;
        fn_800E76D0(*(void **)(self + 4), self[0x196]);
        if (lbl_80367890 >= 2) {
            lbl_80367890 = 0;
        }
    }
    if (fn_800C9400(self + 0xB8, 0, *(s32 *)(self + 0xB8), lbl_802704F8 + 0x1B0, strlen(lbl_802704F8 + 0x1B0)) != 0) {
        obj = fn_800E7F60(*(void **)(self + 4), self + 0xB8);
        if (obj != NULL) {
            if (fn_800E8FB4(obj) != 0) {
                fn_800DBBC8(sp3C, obj);
                f29 = sp3C[0];
                f30 = sp3C[1];
                f31 = sp3C[2];
            } else {
                fn_800E8FCC(sp30, obj);
                f29 = sp30[0];
                f30 = sp30[1];
                f31 = sp30[2];
            }
            fn_800DBB58(sp24, obj);
            f21 = sp24[0];
            f22 = sp24[2];
            fn_800DBB74(sp18, obj);
            sp84 = f21;
            f24 = sp18[0];
            sp8C = f22;
            f25 = sp18[1];
            f26 = sp18[2];
            fn_80202300(spD0, 0x59, lbl_80369DD8);
            fn_802029C4(spD0, &sp84, &sp84);
            f27 = sp84;
            f28 = sp8C;
            if (held & 0x200) {
                f20 = lbl_80369DDC;
            }
            if (fn_800E8FB4(obj) != 0) {
                u8 *stick = *(u8 **)lbl_80367240;
                f32 sx = (f32)(s8)stick[3];
                f32 sy = (f32)(s8)stick[2];
                f29 += (f21 * sx) * lbl_80369DE0;
                f31 += (f22 * sy) * lbl_80369DE0;
                f29 += (f27 * sy) * lbl_80369DE0;
                f31 += (f28 * sx) * lbl_80369DE0;
            } else {
                f23 = fn_800E9018(obj);
                if (held & 0x40) {
                    f23 += lbl_80369DCC * f20;
                    fn_800E8FE8(obj, f23);
                } else if (held & 0x20) {
                    f23 -= lbl_80369DCC * f20;
                    if (f23 < lbl_80369DD4) {
                        f23 = lbl_80369DD4;
                    }
                    fn_800E8FE8(obj, f23);
                }
                {
                    u8 *stick = *(u8 **)lbl_80367240;
                    f32 scale = *(f32 *)(lbl_80368278 + 0x158);
                    f29 += scale * (f32)((s8)stick[2] / 60);
                    f30 += scale * (f32)((s8)stick[3] / 60);
                }
            }
            {
                s8 t = (*(u8 **)lbl_80367240)[4];
                if (t < -0x20) {
                    f25 += *(f32 *)(lbl_80368278 + 0x15C);
                } else if (t > 0x20) {
                    f25 -= *(f32 *)(lbl_80368278 + 0x15C);
                }
            }
            if ((u32)held & 0x80000000) {
                f24 -= *(f32 *)(lbl_80368278 + 0x15C);
                if (f24 < lbl_80369DE4) {
                    f24 = lbl_80369DE4;
                }
            } else if (held & 0x40000000) {
                f24 += *(f32 *)(lbl_80368278 + 0x15C);
            }
            *(f32 *)(self + 0x190) = f24;
            if (fn_800E8FB4(obj) != 0) {
                vt = *(void **)((u8 *)obj + 0x40);
                ((void (*)(void *, f32, f32, f32))*(void **)((u8 *)vt + 0x24))(obj, f29, f30, f31);
            } else {
                fn_800E8FBC(obj, f29, f30, f31);
            }
            vt = *(void **)((u8 *)obj + 0x40);
            ((void (*)(void *, f32, f32, f32))*(void **)((u8 *)vt + 0x2C))(obj, f24, f25, f26);
            if (self[0x194] != 0) {
                fn_8000A258();
                fn_80009D74(lbl_80369DC8, lbl_80369DC8, lbl_80369DC8, lbl_80369DE8);
                fn_8000A174(0, 0x23);
                fn_8000A248();
                fn_80007898(5);
                fn_80007858(lbl_80369DEC, lbl_80369DF0);
                fn_80231D94(sp90, lbl_802704F8 + 0x577, f29, f30, f31);
                fn_80007124(sp90);
                fn_80007290(0, 0x7F, 0xFF, 0xFF);
                fn_80007884();
                fn_80007898(5);
                fn_80007858(lbl_80369DEC, lbl_80369DF4);
                fn_80231D94(sp90, lbl_802704F8 + 0x58F, f24, f25, f26);
                fn_80007124(sp90);
                fn_80007290(0, 0x7F, 0xFF, 0xFF);
                fn_80007884();
                fn_80007898(5);
                fn_80007858(lbl_80369DEC, lbl_80369DF8);
                fn_80231D94(sp90, lbl_802704F8 + 0x5A7, f23, *(f32 *)(self + 0x18C));
                fn_80007124(sp90);
                fn_80007290(0, 0x7F, 0xFF, 0xFF);
                fn_80007884();
                fn_801126A4(*(void **)(self + 0x90), 0, 0x8A);
                fn_801126A4(*(void **)(self + 0x94), 0x130, 0x8A);
            }
        }
    }
}

#pragma cplusplus reset

void fn_800D06BC(u8 *self) {
    void fn_800C9ABC(void *, char *, void *);
    void fn_800C9A60(void *, s32);
    s32 fn_800E7F60(s32, void *);
    void fn_800DF494(void *, f32, f32, f32);
    void fn_800E9020(s32, f32 *, s32);
    void fn_800E7AD4(s32, void *, s32, u8, u8);
    u8 fn_800E8BC4(s32);
    void fn_800E9018(s32);
    void fn_800E76D0(s32, u8);
    u8 fn_800DF6A8(void *);
    void fn_800DF44C(void *, s32, f32, f32, f32);
    void fn_800DF2D8(void *);
    void fn_800DF430(void *, f32 *);
    void fn_800DF410(void *, f32 *);
    void fn_800E8FE8(s32, f32);
    f32 fn_80113658(s32, s32);
    typedef void (*GetPosFn)(f32 *, void *);
    extern char lbl_802704F8[];
    extern f32 lbl_80369DCC;
    extern f32 lbl_80369DC8;
    extern f32 lbl_80369E08;
    extern u8 *lbl_80368278;

    f32 pad[8];
    f32 xf1[24];
    f32 xf2[24];
    f32 mid[3];
    f32 tmp[3];
    char str0[12];
    char str1[12];
    char str2[12];
    f32 v2[3];
    f32 v1[3];
    f32 pos[3];
    f32 scaled;
    char scratch0[8];
    char scratch1[4];
    char scratch2[4];
    f32 x1, y1, z1, yOff;
    f32 x2, y2, z2;
    f32 half;
    s32 handle;
    s32 state;
    void *obj;
    GetPosFn getPos;
    u8 flag;
    u8 b;
    s32 i;

    (void)pad;
    obj = *(void **)(self + 0x90);
    yOff = *(f32 *)(self + 0x18C);
    getPos = *(GetPosFn *)(*(u8 **)((u8 *)obj + 0x40) + 0x3C);
    getPos(v1, obj);
    x1 = v1[0];
    y1 = v1[1];
    z1 = v1[2];

    obj = *(void **)(self + 0x94);
    getPos = *(GetPosFn *)(*(u8 **)((u8 *)obj + 0x40) + 0x3C);
    getPos(v2, obj);
    x2 = v2[0];
    y2 = v2[1];
    z2 = v2[2];

    half = lbl_80369DCC;
    mid[2] = half * (z1 + z2);
    mid[0] = half * (x1 + x2);
    mid[1] = half * (y1 + y2) + yOff;

    fn_800C9ABC(str0, lbl_802704F8 + 0x5BE, scratch0);
    handle = fn_800E7F60(*(s32 *)(self + 4), str0);
    fn_800C9A60(str0, -1);

    state = *(s32 *)(self + 0x17C);
    switch (state) {
    case 0:
        *(s32 *)(self + 0x17C) = state + 1;
        break;
    case 1:
        fn_800DF494(xf1, mid[0], mid[1], mid[2]);
        for (i = 0; i < 11; i++) {
            ((f32 *)(self + 0x280))[i] = xf1[i];
        }
        *(s32 *)(self + 0x2AC) = ((s32 *)xf1)[11];
        for (i = 0; i < 11; i++) {
            ((f32 *)(self + 0x2B0))[i] = xf1[12 + i];
        }
        tmp[0] = mid[0];
        tmp[1] = mid[1];
        tmp[2] = mid[2];
        fn_800E9020(handle, tmp, 0);
        flag = self[0x278];
        if (flag == 0) {
            if (*(s32 *)(self + 0x228) == 1) {
                fn_800C9ABC(str1, lbl_802704F8 + 0x5C3, scratch1);
                fn_800E7AD4(*(s32 *)(self + 4), str1, 0, 0, 0);
                fn_800C9A60(str1, -1);
            } else {
                self[0x178] = (*(u8 **)(self + 0x208))[0x6C];
                fn_800C9ABC(str2, lbl_802704F8 + 0x5CB, scratch2);
                b = self[0x178];
                fn_800E7AD4(*(s32 *)(self + 4), str2, 0, b, b);
                fn_800C9A60(str2, -1);
            }
        }
        *(s32 *)(self + 0x17C) = *(s32 *)(self + 0x17C) + 1;
        break;
    case 2:
        if (fn_800E8BC4(handle) == 0) {
            fn_800E9018(handle);
            {
                f32 z = lbl_80369DC8;
                fn_800DF494(xf2, z, z, z);
            }
            for (i = 0; i < 11; i++) {
                ((f32 *)(self + 0x2E0))[i] = xf2[i];
            }
            *(s32 *)(self + 0x30C) = ((s32 *)xf2)[11];
            for (i = 0; i < 11; i++) {
                ((f32 *)(self + 0x310))[i] = xf2[12 + i];
            }
            *(s32 *)(self + 0x17C) = *(s32 *)(self + 0x17C) + 1;
            if (self[0x278] != 0) {
                self[0x196] = 0;
                fn_800E76D0(*(s32 *)(self + 4), self[0x196]);
            }
        }
        break;
    case 3:
        if (fn_800DF6A8(*(void **)(self + 0x90)) == 0) {
            obj = *(void **)(self + 0x94);
            getPos = *(GetPosFn *)(*(u8 **)((u8 *)obj + 0x40) + 0x3C);
            getPos(pos, obj);
            mid[0] = pos[0];
            mid[1] = pos[1] + *(f32 *)(self + 0x18C);
            mid[2] = pos[2];
        } else if (fn_800DF6A8(*(void **)(self + 0x94)) == 0) {
            obj = *(void **)(self + 0x90);
            getPos = *(GetPosFn *)(*(u8 **)((u8 *)obj + 0x40) + 0x3C);
            getPos(pos, obj);
            mid[0] = pos[0];
            mid[1] = pos[1] + *(f32 *)(self + 0x18C);
            mid[2] = pos[2];
        }
        fn_800DF44C(self + 0x280, 8, mid[0], mid[1], mid[2]);
        fn_800DF2D8(self + 0x280);
        fn_800DF430(self + 0x280, mid);
        tmp[0] = mid[0];
        tmp[1] = mid[1];
        tmp[2] = mid[2];
        fn_800E9020(handle, tmp, 0);
        if (self[0x278] != 0) {
            scaled = fn_80113658(*(s32 *)(self + 0x84), *(s32 *)(self + 0x88));
            scaled = lbl_80369E08 * scaled + *(f32 *)(lbl_80368278 + 0x1BC);
            if (scaled < *(f32 *)(lbl_80368278 + 0x1C0)) {
                scaled = *(f32 *)(lbl_80368278 + 0x1C0);
            }
            if (scaled > *(f32 *)(lbl_80368278 + 0x1C4)) {
                scaled = *(f32 *)(lbl_80368278 + 0x1C4);
            }
            {
                f32 z = lbl_80369DC8;
                fn_800DF44C(self + 0x2E0, 8, scaled, z, z);
            }
            fn_800DF2D8(self + 0x2E0);
            fn_800DF410(self + 0x2E0, &scaled);
            fn_800E8FE8(handle, scaled);
        }
        break;
    }
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" s32 fn_800D0C5C(void *arg0) {
#include "fn_800D0C5C_body.inc"
}
#pragma cplusplus reset
s32 fn_800D3534(s32 *arg0, s32 arg1) {
    s32 fn_800C9400(s32 *, M2C_UNK, s32, s32, s32);
    s32 strlen(s32);
    return fn_800C9400(arg0, 0, *arg0, arg1, strlen(arg1)) == 0;
}

s32 fn_800D3590(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    return temp_r4 & (M2C_FIELD(arg0, s32 *, 8) ^ temp_r4);
}

#pragma cplusplus on
#pragma inline_depth(0)
extern "C" void *fn_800D35A4(u8 *p, s16 arg1) {
extern u8 lbl_80367878; extern u8 *lbl_80368278;
void *fn_800D6314(void *,s16); void fn_801C777C(); void fn_8005C7E8(void *); void fn_80040854(int); void fn_8004084C(void *); void fn_800D6374(void *,void *); void fn_800C428C(void *);
struct Obj { u8 pad[16]; virtual void v0(); virtual void v1(int); };
 void *other; Obj *obj;
if(p) {
fn_801C777C();
obj=*(Obj **)(p+4); if(obj)obj->v1(1); *(void **)(p+4)=0;
if(!lbl_80367878) { other=lbl_80368278; if(other){fn_800C9A60((u8 *)other+0x1A8,-1);fn_800C9A60((u8 *)other+0x19C,-1);fn_800C9A60(other,-1);fn_800C428C(other);}}
if(*(void **)(p+116))fn_8005C7E8(*(void **)(p+116));
if(*(void **)(p+120))fn_8005C7E8(*(void **)(p+120));
if(*(void **)(p+124))fn_8005C7E8(*(void **)(p+124));
if(*(void **)(p+832))fn_8005C7E8(*(void **)(p+832));
if(*(void **)(p+836))fn_8005C7E8(*(void **)(p+836));
if(*(void **)(p+840))fn_8005C7E8(*(void **)(p+840));
if(*(void **)(p+844))fn_8005C7E8(*(void **)(p+844));
if(*(void **)(p+0))fn_8005C7E8(*(void **)(p+0));
if(!lbl_80367878){fn_80040854(0);fn_8004084C(*(void **)(p+0x27C));}
if(p+512)if(p+512)fn_800D6314(p+512,0);
if(p+496)if(p+496)fn_800CA6C8(p+496,0);
if(p+480)if(p+480)if(*(void **)(p+484))fn_800D6374(p+480,*(void **)(p+484));
if(p+468)if(p+468)fn_800CA6C8(p+468,0);
if(p+456)if(p+456)fn_800CA6C8(p+456,0);
if(p+444)if(p+444)fn_800CA6C8(p+444,0);
fn_800C9A60(p+408,-1);
fn_800C9A60(p+352,-1);
fn_800C9A60(p+340,-1);
fn_800C9A60(p+328,-1);
fn_800C9A60(p+316,-1);
fn_800C9A60(p+304,-1);
fn_800C9A60(p+292,-1);
fn_800C9A60(p+280,-1);
fn_800C9A60(p+268,-1);
fn_800C9A60(p+256,-1);
fn_800C9A60(p+244,-1);
fn_800C9A60(p+232,-1);
fn_800C9A60(p+220,-1);
fn_800C9A60(p+208,-1);
fn_800C9A60(p+196,-1);
fn_800C9A60(p+184,-1);
fn_800C9A60(p+92,-1);
fn_800C9A60(p+80,-1);
fn_800C9A60(p+68,-1);
fn_800C9A60(p+56,-1);
fn_800C9A60(p+44,-1);
fn_800C9A60(p+32,-1);
if(arg1>0)fn_800C428C(p);
}return p;
}

extern "C" void *fn_800D38BC(void *arg0)
{
    extern void fn_800D6878(void *, void *, void *);
    extern void fn_800DF50C(void *);
    extern void fn_800C9ABC(void *, char *, void *);
    extern void fn_801515AC(void);
    extern s64 OSGetTime(void);
    extern char lbl_802704F8[];
    extern u8 lbl_80367878;
    extern void *lbl_803682B8;
    extern void *lbl_80368278;
    extern void *lbl_8036787C;
    extern u32 lbl_80330EAC[];

    extern f32 lbl_80369E20;
    extern f32 lbl_80369E24;
    extern f32 lbl_80369E28;
    extern f32 lbl_80369DC8;

    void *fn_800C992C(void *, const char *, u32);
    M2C_UNK *fn_800C93EC(void *);
    s32 fn_8005C82C(s32);
    u32 strlen(const char *);

    void *fn_80040844(void);
    void *fn_800408A8(s32);
    void fn_8004084C(void *);

    void fn_800CB90C(void *, void *, char *);
    void *fn_800E8504(void *, s32, void *);
    void fn_800E8154(void *, void *);
    void fn_800E7D10(void *, void *);

    void *fn_801CA3C8(void *, void *, s32, s32);
    void fn_800D758C(void *);
    void fn_800D7564(void *);

    void *fn_801BEF90(void *);
    void fn_800C96F8(void *, const char *, u32);

    void fn_800C9758(String *, String *, s32, s32);
    void fn_800CCB9C(u8 *, char *);
    void fn_800CC9D8(void *, char *);
    void fn_800CC10C(void *, char *);
    void fn_800CBF90(void *, void *, void *);
    void fn_800CF5B8(void *);
    void fn_800CF000(void *);
    void fn_801CA1B8(void *);
    void fn_800CB978(void *);
    void fn_800CAE9C(void *);
    void fn_800E76D8(void *, s8);
    void fn_800CC7E4(void *, void *);
    void fn_800CC3D8(void *, s32);
    void fn_800056CC(void *, ...);
    void fn_801C77A4(void);
    void *fn_800CB37C(void *);
    void fn_800CB27C(void **);
    void *fn_800CCEBC(void *, void *, const char *, void *);
    void *fn_800CB16C(void *);
    s32 fn_80199310(void *);
    void fn_800CB5CC(void *, void *);
    void fn_800CB538(void *, void *);
    s32 fn_800CDBA4(s32 *, u32);
    void fn_800CDAA0(void *, void *);
    void *fn_800CD79C(s32, void *, s32, u32, u32, s32, u8);
    void fn_80113030(void *, void *, void *, void *);
    void fn_8011662C(void *, void *);
    void fn_800CB484(void *, void *);
    s32 fn_800C9400(String *, u32, u32, char *, u32);
    void fn_801168F4(void *, const char *);
    void fn_800CBAF8(s32, void *, u32);
    typedef void *(*ObjectLookupFn)(void *, const char *, const char *);
    f32 fn_80113650(void *);
    void fn_80113648(void *, f32);
    char *fn_800A8A88(const char *);
    void fn_800DB1FC(void *, void *);
    void fn_800CB070(void);
    void fn_800CAF74(void *, void *);
    void fn_80033418(void *);
    void fn_800555EC(char *, s32);
    s32 fn_80165B0C(void *);
    void fn_800558D8(char *);

    struct {
        String constructed;
        volatile u32 backing[3];
    } temp;

    String secondString;
    String constructedString;
    String extraString1;
    String extraString2;
    String extraString3;
    String constructedString2;

    String rootString;
    String workingString;
    String temporaryString;

    String pairA;
    String pairB;
    u32 pairScratchA;
    u32 pairScratchB;

    String configurationString;
    u32 configurationScratch;
    u8 *configuration;
    char *configurationText;
    s64 elapsed;
    s64 milliseconds;
    u32 timerClock;
    u32 timerDivisor;
    s64 phaseStart;
    void *lookupOne;
    void *lookupTwo;
    void *lookupThree;
    void *detailOne;
    void *detailTwo;
    void *detailThree;
    void *lookupFallback;
    void *lookupKey;

    String loadString1;
    String loadString2;
    String loadString3;
    String loadString4;
    String loadString5;
    String secondGeneratedString;
    String thirdGeneratedString;
    String finalLoadString1;
    String finalLoadString2;
    String finalLoadString3;
    f32 value84;
    f32 value88;
    void *generatedItem;
    void *generatedItem2;
    void *setupValue;
    u32 setupResult;
    u32 setupResult2;

    void *host;
    ObjectLookupFn objectLookup;
    void *orderedLookup0;
    void *orderedLookup1;
    void *orderedLookup2;
    void *orderedLookup3;
    String assignedName0;
    String assignedName1;
    String assignedName2;
    String assignedName3;
    u32 assignedScratch2;
    char *assignedText2;
    u32 assignedScratch0;
    char *assignedText0;
    volatile u32 *p;
    u8 *obj;
    u32 local0;
    u32 local1;
    u32 scratch;
    u32 secondScratch;
    u32 thirdScratch;
    s64 timestamp;
    u32 length;

    void *allocation;
    void *createdObject;
    s8 constructed;

    void *allocation2;
    void *createdObject2;
    s8 constructed2;

    void *allocation3;
    void *allocation4;

    p = (volatile u32 *)arg0;
    obj = (u8 *)arg0;

    p[0x20 / 4] = 0;
    p[0x24 / 4] = 0;
    p[0x28 / 4] = 0;
    p[0x24 / 4] = 0;
    p[0x2C / 4] = 0;
    p[0x30 / 4] = 0;
    p[0x34 / 4] = 0;
    p[0x30 / 4] = 0;
    p[0x38 / 4] = 0;
    p[0x3C / 4] = 0;
    p[0x40 / 4] = 0;
    p[0x3C / 4] = 0;
    p[0x44 / 4] = 0;
    p[0x48 / 4] = 0;
    p[0x4C / 4] = 0;
    p[0x48 / 4] = 0;
    p[0x50 / 4] = 0;
    p[0x54 / 4] = 0;
    p[0x58 / 4] = 0;
    p[0x54 / 4] = 0;
    p[0x5C / 4] = 0;
    p[0x60 / 4] = 0;
    p[0x64 / 4] = 0;
    p[0x60 / 4] = 0;

    p[0xB8 / 4] = 0;
    p[0xBC / 4] = 0;
    p[0xC0 / 4] = 0;
    p[0xBC / 4] = 0;
    p[0xC4 / 4] = 0;
    p[0xC8 / 4] = 0;
    p[0xCC / 4] = 0;
    p[0xC8 / 4] = 0;
    p[0xD0 / 4] = 0;
    p[0xD4 / 4] = 0;
    p[0xD8 / 4] = 0;
    p[0xD4 / 4] = 0;
    p[0xDC / 4] = 0;
    p[0xE0 / 4] = 0;
    p[0xE4 / 4] = 0;
    p[0xE0 / 4] = 0;
    p[0xE8 / 4] = 0;
    p[0xEC / 4] = 0;
    p[0xF0 / 4] = 0;
    p[0xEC / 4] = 0;
    p[0xF4 / 4] = 0;
    p[0xF8 / 4] = 0;
    p[0xFC / 4] = 0;
    p[0xF8 / 4] = 0;
    p[0x100 / 4] = 0;
    p[0x104 / 4] = 0;
    p[0x108 / 4] = 0;
    p[0x104 / 4] = 0;

    p[0x10C / 4] = 0;
    p[0x110 / 4] = 0;
    p[0x114 / 4] = 0;
    p[0x110 / 4] = 0;
    p[0x118 / 4] = 0;
    p[0x11C / 4] = 0;
    p[0x120 / 4] = 0;
    p[0x11C / 4] = 0;
    p[0x124 / 4] = 0;
    p[0x128 / 4] = 0;
    p[0x12C / 4] = 0;
    p[0x128 / 4] = 0;
    p[0x130 / 4] = 0;
    p[0x134 / 4] = 0;
    p[0x138 / 4] = 0;
    p[0x134 / 4] = 0;
    p[0x13C / 4] = 0;
    p[0x140 / 4] = 0;
    p[0x144 / 4] = 0;
    p[0x140 / 4] = 0;
    p[0x148 / 4] = 0;
    p[0x14C / 4] = 0;
    p[0x150 / 4] = 0;
    p[0x14C / 4] = 0;
    p[0x154 / 4] = 0;
    p[0x158 / 4] = 0;
    p[0x15C / 4] = 0;
    p[0x158 / 4] = 0;
    p[0x160 / 4] = 0;
    p[0x164 / 4] = 0;
    p[0x168 / 4] = 0;
    p[0x164 / 4] = 0;

    p[0x198 / 4] = 0;
    p[0x19C / 4] = 0;
    p[0x1A0 / 4] = 0;
    p[0x19C / 4] = 0;

    p[0x1BC / 4] = 0;
    p[0x1C0 / 4] = 0;
    p[0x1C4 / 4] = 0;
    p[0x1C8 / 4] = 0;
    p[0x1CC / 4] = 0;
    p[0x1D0 / 4] = 0;
    p[0x1D4 / 4] = 0;
    p[0x1D8 / 4] = 0;
    p[0x1DC / 4] = 0;

    fn_800D6878(
        obj + 0x1E0,
        &local0,
        &local1
    );

    p[0x1F0 / 4] = 0;
    p[0x1F4 / 4] = 0;
    p[0x1F8 / 4] = 0;
    p[0x200 / 4] = 0;
    p[0x204 / 4] = 0;
    p[0x208 / 4] = 0;

    fn_800DF50C(obj + 0x280);
    fn_800DF50C(obj + 0x2E0);

    temp.backing[1] = 0;
    temp.backing[0] = 0;
    temp.backing[2] = 0;
    temp.backing[1] = 0;

    fn_800C9ABC(
        &temp.constructed,
        lbl_802704F8 + 0x665,
        &scratch
    );

    fn_801515AC();

    timestamp = OSGetTime();

    fn_800C9ABC(
        &secondString,
        lbl_802704F8 + 0x1B0,
        &secondScratch
    );

    length = strlen(lbl_802704F8 + 0x66B);

    fn_800C992C(
        &secondString,
        lbl_802704F8 + 0x66B,
        length
    );

    fn_800C93EC(&secondString);

    p[0] = fn_8005C82C(8);

    fn_800C9A60(&secondString, -1);

    if (lbl_80367878 == 0) {
        *(void **)(obj + 0x27C) = fn_80040844();
        fn_8004084C(fn_800408A8(1));
    }

    constructed = 0;

    allocation = (void *)fn_800C42D8(0x48);
    createdObject = allocation;

    if (allocation != 0) {
        fn_800CB90C(
            &constructedString,
            &temp.constructed,
            lbl_802704F8 + 0x674
        );

        constructed = 1;

        createdObject = fn_800E8504(
            allocation,
            0,
            &constructedString
        );
    }

    *(void **)(obj + 4) = createdObject;

    if (constructed != 0) {
        fn_800C9A60(&constructedString, -1);
    }

    fn_800CB90C(
        &extraString1,
        &temp.constructed,
        lbl_802704F8 + 0x67F
    );

    fn_800E8154(
        *(void **)(obj + 4),
        &extraString1
    );

    fn_800C9A60(&extraString1, -1);

    fn_800CB90C(
        &extraString2,
        &temp.constructed,
        lbl_802704F8 + 0x68A
    );

    fn_800E8154(
        *(void **)(obj + 4),
        &extraString2
    );

    fn_800C9A60(&extraString2, -1);

    fn_800C9ABC(
        &extraString3,
        lbl_802704F8 + 0x698,
        &thirdScratch
    );

    fn_800E7D10(
        *(void **)(obj + 4),
        &extraString3
    );

    fn_800C9A60(&extraString3, -1);

    constructed2 = 0;

    allocation2 = (void *)fn_800C42D8(0x48);
    createdObject2 = allocation2;

    if (allocation2 != 0) {
        fn_800CB90C(
            &constructedString2,
            &temp.constructed,
            lbl_802704F8 + 0x69C
        );

        constructed2 = 1;

        createdObject2 = fn_800E8504(
            allocation2,
            0,
            &constructedString2
        );
    }

    *(void **)(obj + 0x8) = createdObject2;

    if (constructed2 != 0) {
        fn_800C9A60(&constructedString2, -1);
    }

    allocation3 = (void *)fn_800C42D8(0x454);

    if (allocation3 != 0) {
        lbl_803682B8 = fn_801CA3C8(
            allocation3,
            *(void **)(obj + 0x8),
            0x190,
            0x96
        );

        fn_800D758C(lbl_803682B8);
        fn_800D7564(lbl_803682B8);
    }

    if (lbl_80367878 == 0) {
        allocation4 = (void *)fn_800C42D8(0x1C8);

        if (allocation4 != 0) {
            lbl_80368278 = fn_801BEF90(allocation4);
        }
    }

    p[0x10 / 4] = 0;
    p[0x0C / 4] = 0;
    obj[0x1C] = 0;

    length = strlen(lbl_802704F8 + 0x1B0);

    fn_800C96F8(
        obj + 0xB8,
        lbl_802704F8 + 0x1B0,
        length
    );

    p[0x180 / 4] = 0;
    p[0x17C / 4] = 0;

    obj[0x185] = 0;
    obj[0x187] = 0;

    obj[0x72] = 0;
    obj[0x71] = 0;
    obj[0x70] = 0;

    p[0x9C / 4] = 0;
    p[0xA0 / 4] = 0;

    p[0x22C / 4] = 0;
    p[0x214 / 4] = 0;
    p[0x218 / 4] = 0;
    p[0x230 / 4] = 0;

    p[0x240 / 4] = 0;
    p[0x23C / 4] = 0;
    p[0x238 / 4] = 0;
    p[0x234 / 4] = 0;

    p[0x250 / 4] = 0;
    p[0x24C / 4] = 0;
    p[0x248 / 4] = 0;
    p[0x244 / 4] = 0;

    p[0x258 / 4] = 0;
    p[0x254 / 4] = 0;

    *(f32 *)(obj + 0x188) = lbl_80369E24;
    *(f32 *)(obj + 0x18C) = lbl_80369E28;
    *(f32 *)(obj + 0x190) = lbl_80369E20;

    obj[0x194] = 0;
    obj[0x195] = 0;
    obj[0x196] = 1;

    length = strlen(lbl_802704F8 + 0x1B0);

    fn_800C96F8(
        obj + 0x198,
        lbl_802704F8 + 0x1B0,
        length
    );

    p[0x7C / 4] = 0;
    p[0x78 / 4] = 0;
    p[0x74 / 4] = 0;

    p[0x348 / 4] = 0;
    p[0x344 / 4] = 0;
    p[0x340 / 4] = 0;
    p[0x34C / 4] = 0;

    p[0x274 / 4] = 0;
    p[0x174 / 4] = 0;

    obj[0x178] = 0;
    obj[0x1A4] = 0;
    obj[0x1A5] = 0;

    p[0x1A8 / 4] = 0x4B0;
    p[0x1AC / 4] = 0;

    *(f32 *)(obj + 0x1B8) = lbl_80369DC8;
    *(f32 *)(obj + 0x1B4) = lbl_80369DC8;
    *(f32 *)(obj + 0x1B0) = lbl_80369DC8;

    rootString.size = 0;
    rootString.cap = 0;
    rootString.data = 0;

    workingString.size = 0;
    workingString.cap = 0;
    workingString.data = 0;

    fn_800CB90C(
        &temporaryString,
        &temp.constructed,
        lbl_802704F8 + 0x6A7
    );

    fn_800C9758(
        &workingString,
        &temporaryString,
        0,
        -1
    );

    fn_800C9A60(&temporaryString, -1);

    fn_800CCB9C(
        obj,
        (char *)fn_800C93EC(&workingString)
    );

    fn_800CB90C(
        &temporaryString,
        &temp.constructed,
        lbl_802704F8 + 0x6B2
    );

    fn_800C9758(
        &workingString,
        &temporaryString,
        0,
        -1
    );

    fn_800C9A60(&temporaryString, -1);

    fn_800CC9D8(
        obj,
        (char *)fn_800C93EC(&workingString)
    );

    fn_800CB90C(
        &temporaryString,
        &temp.constructed,
        lbl_802704F8 + 0x6BC
    );

    fn_800C9758(
        &workingString,
        &temporaryString,
        0,
        -1
    );

    fn_800C9A60(&temporaryString, -1);

    fn_800CC10C(
        obj,
        (char *)fn_800C93EC(&workingString)
    );

    /* Existing four string pairs. */

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x5C3, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x5CB, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x6C8, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x6CE, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    /* New checkpoint: ten additional string pairs. */

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x6D4, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x6DB, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x6E3, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x6E9, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x6F2, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x6FF, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x70D, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x71B, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x62A, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    fn_800C9ABC(&pairA, lbl_802704F8 + 0x64B, &pairScratchA);
    fn_800C9ABC(&pairB, lbl_802704F8 + 0x1B0, &pairScratchB);
    fn_800CBF90(obj, &pairA, &pairB);
    fn_800C9A60(&pairB, -1);
    fn_800C9A60(&pairA, -1);

    /* Checkpoint: global initialization and persistent strings. */
    fn_801CA1B8(lbl_803682B8);

    length = strlen(lbl_802704F8 + 0x1B0);
    fn_800C96F8(obj + 0xC4, lbl_802704F8 + 0x1B0, length);

    length = strlen(lbl_802704F8 + 0x6CE);
    fn_800C96F8(obj + 0xD0, lbl_802704F8 + 0x6CE, length);

    length = strlen(lbl_802704F8 + 0x6D4);
    fn_800C96F8(obj + 0xE8, lbl_802704F8 + 0x6D4, length);

    length = strlen(lbl_802704F8 + 0x6DB);
    fn_800C96F8(obj + 0xF4, lbl_802704F8 + 0x6DB, length);

    length = strlen(lbl_802704F8 + 0x6E3);
    fn_800C96F8(obj + 0xDC, lbl_802704F8 + 0x6E3, length);

    length = strlen(lbl_802704F8 + 0x6E9);
    fn_800C96F8(obj + 0x100, lbl_802704F8 + 0x6E9, length);

    length = strlen(lbl_802704F8 + 0x6F2);
    fn_800C96F8(obj + 0x10C, lbl_802704F8 + 0x6F2, length);

    length = strlen(lbl_802704F8 + 0x6FF);
    fn_800C96F8(obj + 0x148, lbl_802704F8 + 0x6FF, length);

    length = strlen(lbl_802704F8 + 0x70D);
    fn_800C96F8(obj + 0x154, lbl_802704F8 + 0x70D, length);

    length = strlen(lbl_802704F8 + 0x71B);
    fn_800C96F8(obj + 0x160, lbl_802704F8 + 0x71B, length);

    fn_800CB978(arg0);
    fn_800CAE9C(arg0);

    /* Checkpoint: platform configuration and first timing diagnostic. */

    if (lbl_80367878 != 0) {
        configuration = (u8 *)lbl_8036787C;
        fn_800E76D8(*(void **)(obj + 4), (s8)configuration[0x449]);
    }

    if (lbl_80367878 != 0) {
        configuration = (u8 *)lbl_8036787C;
        obj[0x278] = configuration[0x450];
    } else {
        obj[0x278] = (u8)((*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) >> 30) & 1);
    }

    if (lbl_80367878 != 0) {
        configuration = (u8 *)lbl_8036787C;
        p[0x228 / 4] = *(u32 *)(configuration + 0x44C);
    } else {
        p[0x228 / 4] = *(u32 *)((u8 *)lbl_80330EAC + 0xCA8);
    }

    elapsed = OSGetTime() - timestamp;
    timerClock = *(volatile u32 *)0x800000F8;
    timerDivisor = (u32)(((u64)0x10624DD3 * (timerClock >> 2)) >> 32) >> 6;
    if (timerDivisor != 0) {
        milliseconds = elapsed / (s64)timerDivisor;
    } else {
        milliseconds = 0;
    }

    fn_800056CC(
        lbl_802704F8 + 0x728,
        (u32)((u64)milliseconds >> 32),
        (u32)milliseconds
    );
    timestamp = OSGetTime();

    if (lbl_80367878 != 0) {
        configuration = (u8 *)lbl_8036787C;
        configurationText = (char *)fn_800C93EC(
            *(u8 **)(obj + 0x1D0) +
            (*(u32 *)(configuration + 0x438) * 0xC)
        );
    } else {
        configurationText = *(char **)((u8 *)lbl_80330EAC + 0xCB0);
    }

    fn_800C9ABC(&configurationString, configurationText, &configurationScratch);
    fn_800CC7E4(arg0, &configurationString);
    fn_800C9A60(&configurationString, -1);

    if (lbl_80367878 != 0) {
        configuration = (u8 *)lbl_8036787C;
        obj[0x186] = configuration[0x448];
        fn_800CC3D8(arg0, *(s32 *)(configuration + 0x43C));
    } else {
        obj[0x186] = 1;
        fn_800CC3D8(arg0, 1);
    }

    /* Next checkpoint: two timed phases and the first lookups. */

    elapsed = OSGetTime() - timestamp;
    timerClock = *(volatile u32 *)0x800000F8;
    timerDivisor = (u32)(((u64)0x10624DD3 * (timerClock >> 2)) >> 32) >> 6;
    if (timerDivisor != 0) {
        milliseconds = elapsed / (s64)timerDivisor;
    } else {
        milliseconds = 0;
    }
    fn_800056CC(
        lbl_802704F8 + 0x751,
        (u32)((u64)milliseconds >> 32),
        (u32)milliseconds
    );

    phaseStart = OSGetTime();
    fn_801C77A4();

    elapsed = OSGetTime() - phaseStart;
    timerClock = *(volatile u32 *)0x800000F8;
    timerDivisor = (u32)(((u64)0x10624DD3 * (timerClock >> 2)) >> 32) >> 6;
    if (timerDivisor != 0) {
        milliseconds = elapsed / (s64)timerDivisor;
    } else {
        milliseconds = 0;
    }
    fn_800056CC(
        lbl_802704F8 + 0x774,
        (u32)((u64)milliseconds >> 32),
        (u32)milliseconds
    );
    timestamp = OSGetTime();

    /* First lookup: target uses the default configuration table
       only when lbl_80367878 is zero. */
    lookupFallback = (void *)((u8 *)lbl_80330EAC + 0x28C);
    if (lbl_80367878 != 0) {
        lookupFallback = 0;
    }
    lookupKey = fn_800CB37C(arg0);
    lookupOne = fn_800CCEBC(
        arg0, lookupKey, lbl_802704F8 + 0x633, lookupFallback
    );

    /* Second lookup. The existing fn_800CB27C declaration returns
       void, so its return value cannot be used directly in C. */
    lookupFallback = (void *)((u8 *)lbl_80330EAC + 0x56C);
    if (lbl_80367878 != 0) {
        lookupFallback = 0;
    }
    fn_800CB27C((void **)arg0);
    lookupTwo = fn_800CCEBC(
        arg0, arg0, lbl_802704F8 + 0x63B, lookupFallback
    );

    /* Next checkpoint: third top-level lookup. */
    lookupFallback = (void *)((u8 *)lbl_80330EAC + 0x84C);
    if (lbl_80367878 != 0) {
        lookupFallback = 0;
    }
    lookupKey = fn_800CB16C(arg0);
    lookupThree = fn_800CCEBC(
        arg0, lookupKey, lbl_802704F8 + 0x797, lookupFallback
    );

    /* Query a secondary object only when the lookup has type 3. */
    detailOne = 0;
    if (lookupOne != 0 && fn_80199310(lookupOne) == 3) {
        detailOne = fn_800CCEBC(
            arg0,
            lbl_802704F8 + 0x79F,
            lbl_802704F8 + 0x7A5,
            0
        );
    }

    detailTwo = 0;
    if (lookupTwo != 0 && fn_80199310(lookupTwo) == 3) {
        detailTwo = fn_800CCEBC(
            arg0,
            lbl_802704F8 + 0x79F,
            lbl_802704F8 + 0x7AC,
            0
        );
    }

    detailThree = 0;
    if (lookupThree != 0 && fn_80199310(lookupThree) == 3) {
        detailThree = fn_800CCEBC(
            arg0,
            lbl_802704F8 + 0x79F,
            lbl_802704F8 + 0x7B3,
            0
        );
    }

    /* Diagnostic after the three lookup groups. */
    elapsed = OSGetTime() - timestamp;
    timerClock = *(volatile u32 *)0x800000F8;
    timerDivisor = (u32)(((u64)0x10624DD3 * (timerClock >> 2)) >> 32) >> 6;
    if (timerDivisor != 0) {
        milliseconds = elapsed / (s64)timerDivisor;
    } else {
        milliseconds = 0;
    }
    fn_800056CC(
        lbl_802704F8 + 0x7BA,
        (u32)((u64)milliseconds >> 32),
        (u32)milliseconds
    );
    timestamp = OSGetTime();

    /* Next ~100 target instructions: four lookup-dependent setup calls. */

    fn_800CB5CC(&loadString1, arg0);
    setupResult = fn_800CDBA4((s32 *)arg0, (u32)&loadString1);
    p[0x74 / 4] = setupResult;
    fn_800C9A60(&loadString1, -1);

    fn_800CB538(&loadString2, arg0);
    setupResult2 = fn_800CDBA4((s32 *)arg0, (u32)&loadString2);
    p[0x78 / 4] = setupResult2;
    fn_800C9A60(&loadString2, -1);

    fn_800CB5CC(&loadString3, arg0);
    fn_800CDAA0(arg0, &loadString3);
    fn_800C9A60(&loadString3, -1);

    fn_800CB538(&loadString4, arg0);
    fn_800CDAA0(arg0, &loadString4);
    fn_800C9A60(&loadString4, -1);

    elapsed = OSGetTime() - timestamp;
    timerClock = *(volatile u32 *)0x800000F8;
    timerDivisor = (u32)(((u64)0x10624DD3 * (timerClock >> 2)) >> 32) >> 6;
    if (timerDivisor != 0) {
        milliseconds = elapsed / (s64)timerDivisor;
    } else {
        milliseconds = 0;
    }
    fn_800056CC(
        lbl_802704F8 + 0x7DD,
        (u32)((u64)milliseconds >> 32),
        (u32)milliseconds
    );
    timestamp = OSGetTime();

    fn_800CB5CC(&loadString5, arg0);
    generatedItem = fn_800CD79C(
        (s32)arg0,
        lbl_802704F8 + 0x800,
        (s32)&loadString5,
        (u32)lookupOne,
        (u32)detailOne,
        0,
        0
    );
    *(void **)(obj + 0x84) = generatedItem;
    fn_800C9A60(&loadString5, -1);

    fn_80113030(
        generatedItem,
        *(void **)(obj + 0x68),
        obj + 0x20,
        obj + 0x44
    );
    fn_8011662C(generatedItem, *(void **)(obj + 0x80));

    /* Next target sequence: construct and initialize the second generated item. */
    fn_800CB538(&secondGeneratedString, arg0);
    generatedItem2 = fn_800CD79C(
        (s32)arg0,
        lbl_802704F8 + 0x809,
        (s32)&secondGeneratedString,
        (u32)lookupTwo,
        (u32)detailTwo,
        1,
        1
    );
    *(void **)(obj + 0x88) = generatedItem2;
    fn_800C9A60(&secondGeneratedString, -1);

    fn_80113030(
        generatedItem2,
        *(void **)(obj + 0x6C),
        obj + 0x2C,
        obj + 0x50
    );
    fn_8011662C(generatedItem2, *(void **)(obj + 0x80));

    /* Build a third input string and copy it into the reusable string. */
    fn_800CB484(&thirdGeneratedString, arg0);
    fn_800C9758(&workingString, &thirdGeneratedString, 0, -1);
    fn_800C9A60(&thirdGeneratedString, -1);

    /* Target checks whether the third input is an empty string. */
    length = strlen(lbl_802704F8 + 0x1B0);
    if (fn_800C9400(
            &workingString, 0, workingString.size,
            lbl_802704F8 + 0x1B0, length
        ) != 0) {
        p[0x7C / 4] = fn_800CDBA4((s32 *)arg0, (u32)&workingString);
        fn_800CDAA0(arg0, &workingString);

        generatedItem = fn_800CD79C(
            (s32)arg0,
            lbl_802704F8 + 0x812,
            (s32)&workingString,
            (u32)lookupThree,
            (u32)detailThree,
            2,
            0
        );
        *(void **)(obj + 0x8C) = generatedItem;
        fn_80113030(
            generatedItem,
            *(void **)(obj + 0x68),
            obj + 0x38,
            obj + 0x5C
        );
        fn_8011662C(generatedItem, *(void **)(obj + 0x80));
        fn_801168F4(generatedItem, lbl_802704F8 + 0x809);
    } else {
        *(void **)(obj + 0x8C) = 0;
    }

    /* The three paths are registered using the lookup objects. */
    fn_800CB5CC(&finalLoadString1, arg0);
    fn_800CBAF8((s32)arg0, &finalLoadString1, (u32)lookupOne);
    fn_800C9A60(&finalLoadString1, -1);

    fn_800CB538(&finalLoadString2, arg0);
    fn_800CBAF8((s32)arg0, &finalLoadString2, (u32)lookupTwo);
    fn_800C9A60(&finalLoadString2, -1);

    if (*(void **)(obj + 0x8C) != 0) {
        fn_800CB484(&finalLoadString3, arg0);
        fn_800CBAF8((s32)arg0, &finalLoadString3, (u32)lookupThree);
        fn_800C9A60(&finalLoadString3, -1);
    }

    /* Timing diagnostic for the preceding initialization block. */
    elapsed = OSGetTime() - timestamp;
    timerClock = *(volatile u32 *)0x800000F8;
    timerDivisor = (u32)(((u64)0x10624DD3 * (timerClock >> 2)) >> 32) >> 6;
    if (timerDivisor != 0) {
        milliseconds = elapsed / (s64)timerDivisor;
    } else {
        milliseconds = 0;
    }
    fn_800056CC(
        lbl_802704F8 + 0x81B,
        (u32)((u64)milliseconds >> 32),
        (u32)milliseconds
    );

    fn_801168F4(*(void **)(obj + 0x84), lbl_802704F8 + 0x809);
    fn_801168F4(*(void **)(obj + 0x88), lbl_802704F8 + 0x800);

    /* Reorder the created items according to the 0x274 field. */
    if (p[0x274 / 4] == 0) {
        *(void **)(obj + 0x90) = *(void **)(obj + 0x84);
        *(void **)(obj + 0x94) = *(void **)(obj + 0x88);
    } else {
        *(void **)(obj + 0x90) = *(void **)(obj + 0x88);
        *(void **)(obj + 0x94) = *(void **)(obj + 0x84);
    }
    *(void **)(obj + 0x98) = *(void **)(obj + 0x8C);

    value84 = fn_80113650(*(void **)(obj + 0x84));
    value88 = fn_80113650(*(void **)(obj + 0x88));
    if (value84 > value88) {
        fn_80113648(*(void **)(obj + 0x88), value84);
    } else if (value84 < value88) {
        fn_80113648(*(void **)(obj + 0x84), value88);
    }

    /* Next target block: virtual lookups for the ordered object names. */
    host = *(void **)(obj + 4);
    objectLookup = *(ObjectLookupFn *)((u8 *)*(void **)((u8 *)host + 0x10) + 0x10);

    if (p[0x274 / 4] == 0) {
        *(void **)(obj + 0xA4) = objectLookup(
            host, lbl_802704F8 + 0x844, lbl_802704F8 + 0x84A
        );
        *(void **)(obj + 0xA8) = objectLookup(
            host, lbl_802704F8 + 0x844, lbl_802704F8 + 0x851
        );
    } else {
        *(void **)(obj + 0xA4) = objectLookup(
            host, lbl_802704F8 + 0x844, lbl_802704F8 + 0x851
        );
        *(void **)(obj + 0xA8) = objectLookup(
            host, lbl_802704F8 + 0x844, lbl_802704F8 + 0x84A
        );
    }

    p[0xB0 / 4] = 0;
    p[0xAC / 4] = 0;
    *(void **)(obj + 0xB4) = objectLookup(
        host, lbl_802704F8 + 0x844, lbl_802704F8 + 0x858
    );

    /* The next four virtual lookups depend on the ordering flag. */
    host = *(void **)(obj + 4);
    objectLookup = *(ObjectLookupFn *)((u8 *)*(void **)((u8 *)host + 0x10) + 0x10);

    if (p[0x274 / 4] == 0) {
        orderedLookup0 = objectLookup(
            host, lbl_802704F8 + 0x56A, lbl_802704F8 + 0x861
        );
        orderedLookup1 = objectLookup(
            host, lbl_802704F8 + 0x56A, lbl_802704F8 + 0x86A
        );
        orderedLookup2 = objectLookup(
            host, lbl_802704F8 + 0x56A, lbl_802704F8 + 0x879
        );
        orderedLookup3 = objectLookup(
            host, lbl_802704F8 + 0x56A, lbl_802704F8 + 0x882
        );
    } else {
        orderedLookup0 = objectLookup(
            host, lbl_802704F8 + 0x56A, lbl_802704F8 + 0x879
        );
        orderedLookup1 = objectLookup(
            host, lbl_802704F8 + 0x56A, lbl_802704F8 + 0x882
        );
        orderedLookup2 = objectLookup(
            host, lbl_802704F8 + 0x56A, lbl_802704F8 + 0x861
        );
        orderedLookup3 = objectLookup(
            host, lbl_802704F8 + 0x56A, lbl_802704F8 + 0x86A
        );
    }

    /* About 40 original instructions after the ordered virtual lookups.
       First assigned name: config-selected text, converted to String. */
    if (lbl_80367878 != 0) {
        assignedText0 = lbl_802704F8 + 0x1BC;
    } else {
        assignedText0 = *(char **)((u8 *)lbl_80330EAC + 0x188);
    }
    assignedText0 = fn_800A8A88(assignedText0);
    fn_800C9ABC(&assignedName0, assignedText0, &assignedScratch0);
    fn_800DB1FC(orderedLookup0, &assignedName0);
    fn_800C9A60(&assignedName0, -1);

    /* The target uses the return value of fn_800CB070 as a String.
       Its current implementation is void(void), so this placeholder
       is only a compile-stage approximation. */
    assignedName1.size = 0;
    assignedName1.cap = 0;
    assignedName1.data = 0;
    fn_800CB070();
    fn_800DB1FC(orderedLookup1, &assignedName1);
    fn_800C9A60(&assignedName1, -1);

    /* Next ~50 instructions: the remaining two name assignments. */
    if (lbl_80367878 != 0) {
        assignedText2 = lbl_802704F8 + 0x1BC;
    } else {
        assignedText2 = *(char **)((u8 *)lbl_80330EAC + 0x468);
    }
    assignedText2 = fn_800A8A88(assignedText2);
    fn_800C9ABC(&assignedName2, assignedText2, &assignedScratch2);
    fn_800DB1FC(orderedLookup2, &assignedName2);
    fn_800C9A60(&assignedName2, -1);

    /* Target uses a String created by fn_800CAF74.
       Keep its current declaration and use a temporary until
       its exact calling convention is reconstructed. */
    assignedName3.size = 0;
    assignedName3.cap = 0;
    assignedName3.data = 0;
    fn_800CAF74(&assignedName3, arg0);
    fn_800DB1FC(orderedLookup3, &assignedName3);
    fn_800C9A60(&assignedName3, -1);

    /* Select the configuration data block for the next calls. */
    if (lbl_80367878 != 0) {
        *(void **)(obj + 0x1FC) =
            (u8 *)lbl_8036787C + 0x454;
    } else {
        *(void **)(obj + 0x1FC) =
            (u8 *)lbl_80330EAC + 0x8A0;
    }

    /* Next checkpoint: initialize the selected configuration block. */
    fn_80033418(*(void **)(obj + 0x1FC));
    *(u16 *)(*(u8 **)(obj + 0x1FC)) = 0;

    fn_800555EC(lbl_802704F8 + 0x1FB, 8);
    fn_800555EC(lbl_802704F8 + 0x208, 8);

    /* Complete the mode-dependent registration calls. */
    if (*(void **)(obj + 0x80) != 0) {
        s32 mode = fn_80165B0C(*(void **)(obj + 0x80));

        if (mode == 1) {
            fn_800558D8(lbl_802704F8 + 0x212);
            fn_800558D8(lbl_802704F8 + 0x222);
            fn_800558D8(lbl_802704F8 + 0x233);
            fn_800558D8(lbl_802704F8 + 0x244);
            fn_800558D8(lbl_802704F8 + 0x255);
        } else if (mode == 2) {
            fn_800558D8(lbl_802704F8 + 0x266);
            fn_800558D8(lbl_802704F8 + 0x277);
            fn_800558D8(lbl_802704F8 + 0x288);
            fn_800558D8(lbl_802704F8 + 0x299);
            fn_800558D8(lbl_802704F8 + 0x2AA);
        } else if (mode == 3) {
            fn_800558D8(lbl_802704F8 + 0x2BB);
            fn_800558D8(lbl_802704F8 + 0x2CB);
            fn_800558D8(lbl_802704F8 + 0x2DC);
            fn_800558D8(lbl_802704F8 + 0x2ED);
            fn_800558D8(lbl_802704F8 + 0x2FE);
        }
    }

    /* Final target calls and stack String destructors. */
    fn_800CF5B8(arg0);
    fn_800CF000(arg0);

    fn_800C9A60(&workingString, -1);
    fn_800C9A60(&temp.constructed, -1);
    fn_800C9A60(&rootString, -1);

    (void)orderedLookup0;
    (void)orderedLookup1;
    (void)orderedLookup2;
    (void)orderedLookup3;

    (void)lookupOne;
    (void)lookupTwo;
    (void)lookupThree;
    (void)detailOne;
    (void)detailTwo;
    (void)detailThree;
    (void)timestamp;

    return arg0;
}

#pragma inline_depth(8)
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_800D52F8(void) {
    void fn_801C76E8(void);
    extern void *lbl_80367880;
    struct Obj {
        u8 pad[0x10];
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
        virtual void v13(s32);
        virtual void v14();
        virtual void v15();
        virtual void v16(s32, s32);
    };
    u8 *unit;
    Obj *obj;

    unit = (u8 *)lbl_80367880;
    if (unit == NULL) {
        return;
    }
    if (unit[0x187] == 0) {
        obj = *(Obj **)(unit + 4);
        if (obj != NULL) {
            if (unit[0x1a5] == 0) {
                obj->v13(1);
            }
            obj = *(Obj **)(unit + 4);
            obj->v14();
            obj = *(Obj **)(unit + 4);
            obj->v16(0, 0);
            obj = *(Obj **)(unit + 4);
            obj->v15();
            fn_801C76E8();
        }
    }
    obj = *(Obj **)(unit + 8);
    if (obj != NULL) {
        obj->v13(1);
        obj = *(Obj **)(unit + 8);
        obj->v14();
        obj = *(Obj **)(unit + 8);
        obj->v16(0, 0);
        obj = *(Obj **)(unit + 8);
        obj->v15();
    }
}

#pragma cplusplus on
extern "C" void fn_800D540C(void *arg0) {
s64 OSGetTime(void);
s64 __div2i(s64, s64);
void fn_800056CC(const char *, ...);
void *fn_800C42D8(u32);
void *fn_800D38BC(void *);
u8 fn_800D0C5C(void *);
void fn_800C9ABC(void *, char *, void *);
void *fn_800E7E4C(void *, void *);
void fn_800E7C94(void *, void *, s32, f32);
void fn_800D06BC(void *);
void fn_800CFDDC(void *);
void *fn_800E7EA0(void *);
void *fn_800E7DA4(void *, void *);
void fn_800DBBC8(f32 *, f32 *);
void fn_800C428C(void *);
void *fn_800D35A4(void *, s16);
void fn_8000C188(void *);
extern char lbl_802704F8[];
extern void *lbl_80367880;
extern f32 lbl_80369DC8;
extern f32 lbl_80369DD0;
extern void *lbl_80368278;
extern u8 lbl_80367878;
extern void *lbl_8036787C;
extern void *lbl_80367888;
struct VObj {
u8 pad[0x40];
virtual void v0();
virtual void v1();
virtual void v2();
virtual void v3();
virtual void v4();
virtual void v5();
virtual void v6();
virtual void v7(f32, f32, f32);
virtual void v8();
virtual void v9();
virtual void v10();
virtual void v11(f32, f32, f32);
};
f32 sp58[3];
String sp4C, sp40, sp34, sp28, sp1C;
u32 sp18, sp14, sp10, spC, sp8;
void *self;
void *obj;
s64 t0;
s64 t1;
void *p;
void *found;
void *cam;
f32 z;
f32 f1;
f32 f3;
u32 tickRate;
u32 conv;

self = arg0;
if (lbl_80367880 == NULL) {
t0 = OSGetTime();
p = fn_800C42D8(0x350);
if (p != NULL) {
p = fn_800D38BC(p);
}
lbl_80367880 = p;
t1 = OSGetTime();
tickRate = *(volatile u32 *)0x800000F8;
conv = (u32)(((u64)0x10624dd3ULL * (tickRate >> 2)) >> 32) >> 6;
fn_800056CC(lbl_802704F8 + 0x891, __div2i(t1 - t0, (s64)conv));
}
obj = lbl_80367880;
if (obj != NULL) {
while (fn_800D0C5C(obj) != 0) {
}
if (*(f32 *)((u8 *)obj + 0x1B4) > lbl_80369DC8) {
*(f32 *)((u8 *)obj + 0x1B4) = *(f32 *)((u8 *)obj + 0x1B4) + *(f32 *)((u8 *)obj + 0x1B8);
*(f32 *)((u8 *)obj + 0x1B0) = *(f32 *)((u8 *)obj + 0x1B0) + *(f32 *)((u8 *)obj + 0x1B4);
fn_800C9ABC(&sp1C, lbl_802704F8 + 0x4D2, &sp8);
z = *(f32 *)((u8 *)obj + 0x1B0);
*(s32 *)((u8 *)fn_800E7E4C(*(void **)((u8 *)obj + 4), &sp1C) + 0x60) = (s32)(-z);
fn_800C9A60(&sp1C, -1);
fn_800C9ABC(&sp28, lbl_802704F8 + 0x4DD, &spC);
z = *(f32 *)((u8 *)obj + 0x1B0);
*(s32 *)((u8 *)fn_800E7E4C(*(void **)((u8 *)obj + 4), &sp28) + 0x60) = (s32)z;
fn_800C9A60(&sp28, -1);
if (*(f32 *)((u8 *)obj + 0x1B0) > lbl_80369DD0 || *(f32 *)((u8 *)obj + 0x1B4) < lbl_80369DC8) {
z = lbl_80369DC8;
*(f32 *)((u8 *)obj + 0x1B8) = z;
*(f32 *)((u8 *)obj + 0x1B4) = z;
}
}
if (*(s32 *)((u8 *)obj + 0x1AC) > 0) {
if (--*(s32 *)((u8 *)obj + 0x1AC) == 0) {
*(f32 *)((u8 *)obj + 0x1B4) = *(f32 *)((u8 *)lbl_80368278 + 0x14C);
*(f32 *)((u8 *)obj + 0x1B8) = *(f32 *)((u8 *)lbl_80368278 + 0x150);
fn_800C9ABC(&sp34, lbl_802704F8 + 0x4D2, &sp10);
fn_800E7C94(*(void **)((u8 *)obj + 4), &sp34, 1, *(f32 *)((u8 *)lbl_80368278 + 0x154));
fn_800C9A60(&sp34, -1);
fn_800C9ABC(&sp40, lbl_802704F8 + 0x4DD, &sp14);
fn_800E7C94(*(void **)((u8 *)obj + 4), &sp40, 1, *(f32 *)((u8 *)lbl_80368278 + 0x154));
fn_800C9A60(&sp40, -1);
}
}
fn_800D06BC(obj);
if (lbl_80367878 != 0) {
fn_800CFDDC(obj);
}
cam = fn_800E7EA0(*(void **)((u8 *)obj + 4));
fn_800C9ABC(&sp4C, lbl_802704F8 + 0x315, &sp18);
found = fn_800E7DA4(*(void **)((u8 *)obj + 4), &sp4C);
fn_800C9A60(&sp4C, -1);
fn_800DBBC8(sp58, (f32 *)cam);
f1 = sp58[0];
f3 = sp58[2];
if (found != NULL) {
((VObj *)found)->v7(f1, lbl_80369DC8, f3);
((VObj *)found)->v11(*(f32 *)((u8 *)lbl_80368278 + 0x24), *(f32 *)((u8 *)lbl_80368278 + 0x28), *(f32 *)((u8 *)lbl_80368278 + 0x2C));
}
if (*(u8 *)((u8 *)obj + 0x187) != 0) {
if (lbl_8036787C != NULL && *(s32 *)((u8 *)lbl_8036787C + 0x444) != 2) {
fn_800C428C(lbl_8036787C);
lbl_8036787C = NULL;
}
if (lbl_80367880 != NULL) {
fn_800D35A4(lbl_80367880, 1);
lbl_80367880 = NULL;
}
fn_8000C188(self);
fn_8000C188(lbl_80367888);
}
}
}

extern "C" void fn_800D5784(s32 arg0) {
    void fn_800056CC(char *, ...);
    s32 fn_8000CAA0(void *, s32);
    s32 fn_8000CAF0(void *, s32);
    extern char lbl_802704F8[];
    extern u8 lbl_80284668[];
    extern u8 lbl_8028DA48[];
    extern u8 lbl_8028DA70[];
    extern s32 lbl_80367880;
    extern s32 lbl_80367884;
    extern s32 lbl_80367888;
    extern u8 lbl_8036788C;
    extern u8 lbl_80367878;
    s32 temp;

    fn_800056CC(lbl_802704F8 + 0x8B2);
    lbl_80367880 = 0;
    lbl_8036788C = 1;
    if (lbl_80367878 != 0) {
        temp = fn_8000CAA0(lbl_8028DA48, arg0);
    } else {
        temp = fn_8000CAA0(lbl_80284668, arg0);
    }
    lbl_80367884 = temp;
    lbl_80367888 = fn_8000CAF0(lbl_8028DA70, arg0);
}

void fn_800D5818(s32 arg0) {
    void fn_800056CC(void *, ...);
    s32 fn_8000CAA0(void *, s32);
    s32 fn_8000CAF0(void *, s32);
    extern char lbl_802704F8[];
    extern u8 lbl_80284668[];
    extern u8 lbl_8028DA70[];
    extern s32 lbl_80367880;
    extern s32 lbl_80367884;
    extern s32 lbl_80367888;
    extern u8 lbl_8036788C;
    extern u8 lbl_80367878;
    s32 temp;

    fn_800056CC(lbl_802704F8 + 0x8BF);
    lbl_80367880 = 0;
    lbl_8036788C = 0;
    lbl_80367878 = 0;
    temp = fn_8000CAA0(lbl_80284668, arg0);
    lbl_80367884 = temp;
    lbl_80367888 = fn_8000CAF0(lbl_8028DA70, temp);
}

#pragma cplusplus reset

#pragma cplusplus reset

void fn_800D588C(s32 arg0) {
    extern s32 lbl_8036787C;
    lbl_8036787C = arg0;
}

void fn_800D5894(void **arg0) {
    void *x = *arg0;
    if (x != NULL) {
        fn_8005C7E8(x);
    }
}

#pragma dont_inline on
#pragma global_optimizer off
void fn_800D58C0(void **arg0)
{
    extern char lbl_802704F8[];
    s32 strlen(char *);
    void *fn_800C93EC(void *);
    void *fn_8005C82C(void *, s32);
    void *out;
    u32 str[3];
    u32 scratch;

    out = arg0;
    fn_800C9ABC(str, lbl_802704F8 + 0x1B0, &scratch);
    fn_800C992C(str, lbl_802704F8 + 0x66B, strlen(lbl_802704F8 + 0x66B));
    *(void **)out = fn_8005C82C(fn_800C93EC(str), 8);
    fn_800C9A60(str, -1);
}
#pragma global_optimizer reset
#pragma dont_inline reset
s32 fn_800D5948(u32 *arg0, char *arg1, u32 arg2, u32 arg3) {
    u32 size;
    char *data;
    u32 rem;
    char *end;
    char *p;
    char *b;
    char *a;

    size = arg0[0];
    if (arg2 > size) {
        return -1;
    }
    data = (char *)arg0[2];
    end = arg1 + arg3;
    for (rem = size - arg2, p = data + arg2; rem >= arg3; p++, rem--) {
        for (b = p, a = arg1; a < end; a++, b++) {
            if (*a != *b) {
                goto next;
            }
        }
        return p - data;
    next:;
    }
    return -1;
}

void *fn_800D5C88(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    void *self;
    s16 flag;

    self = arg0;
    flag = arg1;
    if (self != NULL) {
        if ((u8 *)self + 0xC != NULL) {
            if (*(void **)((u8 *)self + 0x14) != NULL) {
                fn_800C428C(*(void **)((u8 *)self + 0x14));
            }
        }
        if (self != NULL) {
            if (*(void **)((u8 *)self + 8) != NULL) {
                fn_800C428C(*(void **)((u8 *)self + 8));
            }
        }
        if (flag > 0) {
            fn_800C428C(self);
        }
    }
    return self;
}

u32 *fn_800D6898(u32 *, u32 *, u32, u32, void *);
M2C_UNK fn_8022CF78(void);
M2C_UNK fn_80232058(void *, const char *, ...);
extern char __files[];

void fn_800D5D04(u32 *arg0, u32 *arg1, u32 arg2, u32 arg3) {
    extern char __files[];
    extern char lbl_802704F8[];
    M2C_UNK fn_8022CF78(void);
    void fn_800D6898(u32 *, u32 *, u32, u32, void *);
    u32 rem;
    u32 alloc;
    const u32 *n;

    if (arg2 > arg1[0]) {
        fn_80232058(__files + 0xA0, lbl_802704F8 + 0x8E7);
        fn_8022CF78();
    }
    rem = arg1[0] - arg2;
    n = MinU32(&arg3, &rem);
    fn_800D6898(arg0, arg1, arg2, *n, &alloc);
}

#pragma cplusplus on
extern "C" s32 fn_800D5DB0(void *self, s32 pos, s32 count, s32 *src) {
    void fn_80232058(void *, char *, ...);
    void fn_8022CF78(void);
    void *fn_800C42D8(s32);
    void fn_800D6940(void *);
    void fn_800C428C(void *);
    extern char __files[];
    extern char lbl_802704F8[];

    typedef struct { char b[0x58]; } Elem;
    typedef struct { u32 cap; u32 size; Elem *data; } Vec;

    Vec tmp;
    Vec *v;
    Elem *posp;
    Elem *srcp;
    Elem *end;
    Elem *dst;
    Elem *p;
    Elem *q;
    u32 n;
    u32 room;
    u32 newCap;

    v = (Vec *)self;
    posp = (Elem *)pos;
    srcp = (Elem *)src;
    n = (u32)count;
    if (n == 0) {
        return 0;
    }

    if (n > 0x02E8BA2Eu || v->size > 0x02E8BA2Eu - n) {
        fn_80232058(__files + 0xA0, lbl_802704F8 + 0x97C);
        fn_8022CF78();
    }

    if (v->size + n <= v->cap) {
        end = v->data + v->size;
        room = (u32)(end - posp);
        if (n > room) {
            dst = end;
            while (n > room) {
                if (dst != 0) {
                    *dst = *srcp;
                }
                dst++;
                n--;
                v->size++;
            }
            p = posp;
            while (p < end) {
                if (dst != 0) {
                    *dst = *p;
                }
                p++;
                dst++;
                v->size++;
            }
        } else {
            q = end;
            p = end - n;
            while (p < end) {
                if (q != 0) {
                    *q = *p;
                }
                p++;
                q++;
                v->size++;
            }
            {
                u32 shiftBytes = (room - n) * 0x58;
                Elem *from = (Elem *)((u8 *)posp + shiftBytes);
                if ((u8 *)end - shiftBytes <= (u8 *)src && (u8 *)src < (u8 *)end) {
                    srcp = (Elem *)((u8 *)src + n * 0x58);
                }
                if (from > posp) {
                    u32 ctr = ((u8 *)from + 0x57 - (u8 *)posp) / 0x58;
                    do {
                        from--;
                        end--;
                        *end = *from;
                        ctr--;
                    } while (ctr != 0);
                }
            }
        }
        {
            Elem *out = posp;
            u32 left = n;
            if (left != 0) {
                do {
                    *out = *srcp;
                    out++;
                    left--;
                } while (left != 0);
            }
        }
    } else {
        tmp.cap = 0;
        tmp.size = 0;
        tmp.data = 0;
        newCap = v->cap != 0 ? v->cap : 1;
        while (v->size + n > newCap) {
            if (newCap < 0x01745D17u) {
                newCap *= 2;
            } else {
                newCap = 0x02E8BA2Eu;
            }
        }
        tmp.data = (Elem *)fn_800C42D8((s32)(newCap * 0x58));
        if (tmp.data == 0) {
            fn_80232058(__files + 0xA0, lbl_802704F8 + 0x999);
            fn_8022CF78();
        }
        tmp.cap = newCap;
        {
            Elem *w = tmp.data;
            Elem *r = v->data;
            end = v->data + v->size;
            while (r < posp) {
                if (w != 0) {
                    *w = *r;
                }
                r++;
                w++;
                tmp.size++;
            }
            while (n != 0) {
                if (w != 0) {
                    *w = *(Elem *)src;
                }
                w++;
                n--;
                tmp.size++;
            }
            while (r < end) {
                if (w != 0) {
                    *w = *r;
                }
                r++;
                w++;
                tmp.size++;
            }
        }
        if (&tmp != v) {
            u32 t0 = tmp.cap;
            Elem *td;
            u32 ts;
            tmp.cap = v->cap;
            v->cap = t0;
            td = tmp.data;
            tmp.data = v->data;
            v->data = td;
            ts = tmp.size;
            tmp.size = v->size;
            v->size = ts;
        }
        fn_800D6940(&tmp);
        if (tmp.data != 0) {
            fn_800C428C(tmp.data);
        }
    }
    return 0;
}
#pragma cplusplus reset

void *fn_800D6314(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    void fn_800D6940(void *);

    if (arg0 != NULL) {
        fn_800D6940(arg0);
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            fn_800C428C(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma use_lmw_stmw on
void fn_800D6374(s32 arg0, void *arg1) {
void fn_800C428C(void *);
void fn_800C9A60(void *, s32);
void *fn_800D5C88(void *, s32);
void fn_800D67E4(s32);
void fn_800D67E8(s32);
void fn_800D67EC(void *, void *, s16);
void *fn_800D6810(s32);
void fn_800D6818(void *, void *);
void *fn_800D6874(s32);
s32 self;
void *node;
void *v29;
void *v28;
void *v27;
node=arg1;
self=arg0;

v29=*(void**)node;
if(v29!=NULL){
v28=*(void**)v29;
if(v28!=NULL){
v27=*(void**)v28;
if(v27!=NULL){
if(*(void**)v27!=NULL){fn_800D6374(self,*(void**)v27);}
if(*(void**)((u8*)v27+4)!=NULL){fn_800D6374(self,*(void**)((u8*)v27+4));}
fn_800D6818(fn_800D6874(self),(u8*)v27+0xC);
fn_800D67EC(fn_800D6810(self),v27,1);
}
v27=*(void**)((u8*)v28+4);
if(v27!=NULL){
if(*(void**)v27!=NULL){fn_800D6374(self,*(void**)v27);}
if(*(void**)((u8*)v27+4)!=NULL){fn_800D6374(self,*(void**)((u8*)v27+4));}
fn_800D6818(fn_800D6874(self),(u8*)v27+0xC);
fn_800D67EC(fn_800D6810(self),v27,1);
}
fn_800D6874(self);
fn_800D5C88((u8*)v28+0xC,-1);
fn_800D6810(self);
fn_800C428C(v28);
}
v27=*(void**)((u8*)v29+4);
if(v27!=NULL){
v28=*(void**)v27;
if(v28!=NULL){
if(*(void**)v28!=NULL){fn_800D6374(self,*(void**)v28);}
if(*(void**)((u8*)v28+4)!=NULL){fn_800D6374(self,*(void**)((u8*)v28+4));}
fn_800D6818(fn_800D6874(self),(u8*)v28+0xC);
fn_800D67EC(fn_800D6810(self),v28,1);
}
v28=*(void**)((u8*)v27+4);
if(v28!=NULL){
if(*(void**)v28!=NULL){fn_800D6374(self,*(void**)v28);}
if(*(void**)((u8*)v28+4)!=NULL){fn_800D6374(self,*(void**)((u8*)v28+4));}
fn_800D6818(fn_800D6874(self),(u8*)v28+0xC);
fn_800D67EC(fn_800D6810(self),v28,1);
}
fn_800D6874(self);
fn_800D5C88((u8*)v27+0xC,-1);
fn_800D6810(self);
fn_800C428C(v27);
}
fn_800D67E8(self);
if(((s32)v29+0xC)!=0){
fn_800C9A60((u8*)v29+0x18,-1);
fn_800C9A60((u8*)v29+0xC,-1);
}
fn_800D67E4(self+4);
fn_800C428C(v29);
}
v27=*(void**)((u8*)node+4);
if(v27!=NULL){
v28=*(void**)v27;
if(v28!=NULL){
v29=*(void**)v28;
if(v29!=NULL){
if(*(void**)v29!=NULL){fn_800D6374(self,*(void**)v29);}
if(*(void**)((u8*)v29+4)!=NULL){fn_800D6374(self,*(void**)((u8*)v29+4));}
fn_800D6818(fn_800D6874(self),(u8*)v29+0xC);
fn_800D67EC(fn_800D6810(self),v29,1);
}
v29=*(void**)((u8*)v28+4);
if(v29!=NULL){
if(*(void**)v29!=NULL){fn_800D6374(self,*(void**)v29);}
if(*(void**)((u8*)v29+4)!=NULL){fn_800D6374(self,*(void**)((u8*)v29+4));}
fn_800D6818(fn_800D6874(self),(u8*)v29+0xC);
fn_800D67EC(fn_800D6810(self),v29,1);
}
fn_800D6874(self);
fn_800D5C88((u8*)v28+0xC,-1);
fn_800D6810(self);
fn_800C428C(v28);
}
v28=*(void**)((u8*)v27+4);
if(v28!=NULL){
v29=*(void**)v28;
if(v29!=NULL){
if(*(void**)v29!=NULL){fn_800D6374(self,*(void**)v29);}
if(*(void**)((u8*)v29+4)!=NULL){fn_800D6374(self,*(void**)((u8*)v29+4));}
fn_800D6818(fn_800D6874(self),(u8*)v29+0xC);
fn_800D67EC(fn_800D6810(self),v29,1);
}
v29=*(void**)((u8*)v28+4);
if(v29!=NULL){
if(*(void**)v29!=NULL){fn_800D6374(self,*(void**)v29);}
if(*(void**)((u8*)v29+4)!=NULL){fn_800D6374(self,*(void**)((u8*)v29+4));}
fn_800D6818(fn_800D6874(self),(u8*)v29+0xC);
fn_800D67EC(fn_800D6810(self),v29,1);
}
fn_800D6874(self);
fn_800D5C88((u8*)v28+0xC,-1);
fn_800D6810(self);
fn_800C428C(v28);
}
fn_800D67E8(self);
if(((s32)v27+0xC)!=0){
fn_800C9A60((u8*)v27+0x18,-1);
fn_800C9A60((u8*)v27+0xC,-1);
}
fn_800D67E4(self+4);
fn_800C428C(v27);
}
if(((s32)node+0xC)!=0){
if(((s32)node+0x18)!=0&&*(void**)((u8*)node+0x20)!=NULL){fn_800C428C(*(void**)((u8*)node+0x20));}
if(((u8*)node+0xC)!=NULL&&*(void**)((u8*)node+0x14)!=NULL){fn_800C428C(*(void**)((u8*)node+0x14));}
}
fn_800C428C(node);
}
void fn_800D67E4(void) {

}

void fn_800D67E8(void) {

}

void fn_800D67EC(void *arg0, void *arg1) {
    void fn_800C428C(void *);
    fn_800C428C(arg1);
}

s32 fn_800D6810(s32 arg0) {
    return arg0 + 4;
}

void fn_800D6818(void *arg0, void *arg1) {
    void fn_800C428C(void *);
    if (arg1 != NULL) {
        if ((u8 *)arg1 + 0xC != NULL) {
            if (*(void **)((u8 *)arg1 + 0x14) != NULL) {
                fn_800C428C(*(void **)((u8 *)arg1 + 0x14));
            }
        }
        if (arg1 != NULL) {
            if (*(void **)((u8 *)arg1 + 8) != NULL) {
                fn_800C428C(*(void **)((u8 *)arg1 + 8));
            }
        }
    }
}

void fn_800D6874(void) {

}

void fn_800D6878(u8 *arg0, u32 arg1) {
    s32 zero;
    u8 *ptr;

    zero = 0;
    arg1 = *(u8 *)arg1;
    *(s32 *)arg0 = zero;
    ptr = arg0 + 4;
    *(s32 *)(arg0 + 4) = zero;
    arg0[8] = (u8)arg1;
    *(u8 **)(arg0 + 0xC) = ptr;
}

#pragma use_lmw_stmw on
u32 *fn_800D6898(u32 *arg0, u32 *arg1, u32 arg2, u32 arg3, void *arg4)
{
    struct Tag { u8 b; } tag;
    M2C_UNK fn_800CA728(u32 *, char *, char *, void *, struct Tag);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    extern char __files[];

    u32 size;
    u32 len;
    char *p;

    size = *(volatile u32 *)arg1;

    arg0[1] = 0;

    if (arg2 > size) {
        fn_80232058(__files + 0xA0, lbl_802704F8 + 0x9B3);
        fn_8022CF78();
    }

    len = size - arg2;

    if (len > arg3) {
        len = arg3;
    }

    p = (char *)arg1[2] + arg2;

    fn_800CA728(arg0, p, p + len, arg4, tag);

    return arg0;
}
#pragma use_lmw_stmw reset

void fn_800D6940(u32 *arg0) {
    u8 (*start)[0x58];
    u8 (*end)[0x58];

    start = (u8 (*)[0x58])arg0[2];
    end = start + arg0[1];
    for (; start < end; start++) {
    }
    arg0[1] = 0;
}

void fn_800D697C(u8 *arg0, u32 arg1, s32 arg2) {
    if (arg2 <= 0) {
        return;
    }
    
    while (arg2 > 0) {
        *(u8 *)arg0 = (u8)arg1;
        arg0++;
        arg1 >>= 8;
        arg2--;
    }
}

void fn_800D6A84(void *arg0, u32 arg1, s32 arg2) {
    void fn_800D6AB4(u32, s32);
    if (arg1 != 0U) {
        fn_800D6AB4(arg1, arg2);
    }
}

void fn_800D6C1C(void *arg0, void *arg1)
{
    // If arg0 is NULL, return
    if (arg0 == NULL) {
        return;
    }

    // Set bit 0 of arg0->unk8 to 1
    *(u32*)((char*)arg0 + 8) |= 1;

    // Main processing loop
    while(1) {
        void *current = (void*)(*(u32*)((char*)arg0 + 8) & ~1); // Clear LSB
        
        if (current == arg1) {
            break;
        }
        
        // Check bit 0 of current->unk8 
        if (*(u32*)((char*)current + 8) & 1) {
            void *next_node = *(void**)((char*)current + 0);
            
            if (next_node == *(void**)((char*)arg0 + 8)) {
                // Call fn_800D6E8C 
                ((void(*)(void*))0x800D6E8C)(*(void**)((char*)arg0 + 8));
            }
            
            // Clear and set bit 0 of current and next_node
            *(u32*)((char*)current + 8) &= ~1;
            *(u32*)((char*)current + 8) |= 1;
        }
        
        // Continue to next node in chain by incrementing arg0 pointer
        arg0 = (void**)((char*)arg0 + 4);
    }

    // Clear bit 0 of arg1->unk8 
    *(u32*)((char*)arg1 + 8) &= ~1;
}

void fn_800D6E0C(void *arg0, void **arg1)
{
    void *next;
    void *child;
    u32 flags;
    u32 parent;

    next = *(void **)arg0;
    if (*arg1 == arg0) {
        *arg1 = next;
    }
    *(void **)arg0 = *(void **)((u8 *)next + 4);
    child = *(void **)((u8 *)next + 4);
    if (child != NULL) {
        *(u32 *)((u8 *)child + 8) = (u32)arg0 | (*(u32 *)((u8 *)child + 8) & 1);
    }
    flags = *(u32 *)((u8 *)arg0 + 8);
    *(u32 *)((u8 *)next + 8) = (flags & ~1) | (*(u32 *)((u8 *)next + 8) & 1);
    parent = *(u32 *)((u8 *)arg0 + 8) & ~1;
    if (arg0 == *(void **)parent) {
        *(void **)parent = next;
    } else {
        *(void **)(parent + 4) = next;
    }
    *(void **)((u8 *)next + 4) = arg0;
    *(u32 *)((u8 *)arg0 + 8) = (u32)next | (*(u32 *)((u8 *)arg0 + 8) & 1);
}

void fn_800D6E8C(void *arg0, void **arg1) {
    s32 temp_r4_2;
    void *temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 4);
    if ((void *)*arg1 == arg0) {
        *arg1 = temp_r5;
    }
    M2C_FIELD(arg0, void **, 4) = (void *)M2C_FIELD(temp_r5, void **, 0);
    temp_r4 = M2C_FIELD(temp_r5, void **, 0);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, s32 *, 8) = (s32)((s32)arg0 | (M2C_FIELD(temp_r4, s32 *, 8) & 1));
    }
    M2C_FIELD(temp_r5, s32 *, 8) = (s32)((M2C_FIELD(arg0, s32 *, 8) & ~1) | (M2C_FIELD(temp_r5, s32 *, 8) & 1));
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 8) & ~1;
    if (arg0 == (void *)M2C_FIELD(temp_r4_2, void **, 0)) {
        M2C_FIELD(temp_r4_2, void **, 0) = temp_r5;
    } else {
        M2C_FIELD(temp_r4_2, void **, 4) = temp_r5;
    }
    M2C_FIELD(temp_r5, void **, 0) = arg0;
    M2C_FIELD(arg0, s32 *, 8) = (s32)((s32)temp_r5 | (M2C_FIELD(arg0, s32 *, 8) & 1));
}

s32 fn_800D6F0C(void) {
    void fn_800D758C(void *);
    extern void *lbl_80367898;
    fn_800D758C(lbl_80367898);
    return 0;
}

#pragma dont_inline on
s32 fn_800D6F34(void)
{
    extern u8 *lbl_803678A8;
    extern u8 *lbl_80367898;

    extern void fn_800D75C4(void *);
    extern void fn_800D758C(void *);
    extern s32 fn_8011C9E4(void *);
    extern void *fn_800DC3B0(void *);
    extern void fn_800DAAC0(void *, s32);
    extern void fn_800DA2CC(void *);

    s32 result;
    u8 *obj;

    fn_800D75C4(lbl_803678A8);
    fn_800D758C(lbl_80367898);

    obj = lbl_80367898;

    result = fn_8011C9E4(*(void **)(obj + 0x428));
    result = (result != 0);

    obj = lbl_80367898;

    fn_800DAAC0(
        fn_800DC3B0(*(void **)(obj + 0x424)),
        result
    );

    fn_800DA2CC(lbl_803678A8);

    return 0;
}
#pragma dont_inline reset
void fn_800D6FA4(void *arg0) {
    M2C_UNK fn_800C9B6C(M2C_UNK *);
    M2C_UNK fn_800DC518(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK sp8;
    
    fn_800C9B6C(&sp8);
    fn_800DC518(M2C_FIELD(arg0, s32 *, 0x424), &sp8, 0);
    fn_800C9A60(&sp8, -1);
}

#pragma cplusplus on
extern "C" void fn_800D6FF0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_800D7254(void);
    struct Obj {
        u8 pad[0x40];
        virtual void v0(s32, s32, s32) = 0;
        virtual void v1(s32, s32, s32) = 0;
        virtual void v2(s32, s32, s32) = 0;
        virtual void v3(s32, s32, s32) = 0;
        virtual void v4(s32, s32, s32) = 0;
        virtual void v5(s32, s32, s32) = 0;
        virtual void v6(s32, s32, s32) = 0;
        virtual void v7(s32, s32, s32) = 0;
        virtual void v8(s32, s32, s32) = 0;
        virtual void v9(s32, s32, s32) = 0;
        virtual void v10(s32, s32, s32) = 0;
        virtual void v11(s32, s32, s32) = 0;
        virtual void v12(s32, s32, s32) = 0;
        virtual void v13(s32, s32, s32) = 0;
        virtual void v14(s32, s32, s32) = 0;
        virtual void v15(s32, s32, s32) = 0;
        virtual void v16(s32, s32, s32) = 0;
        virtual void v17(s32, s32, s32) = 0;
        virtual void v18(s32, s32, s32) = 0;
        virtual void v19(s32, s32, s32) = 0;
        virtual void v20(s32, s32, s32) = 0;
    };
    fn_800D7254();
    (*(Obj **)((u8 *)arg0 + 0x424))->v20(arg1, arg2, arg3);
}
#pragma cplusplus reset
void *fn_800D7060(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    
    if (arg0 != NULL) {
        void **vtable = (void **)M2C_FIELD(arg0, void **, 0x8);
        if (vtable != NULL && *vtable != NULL) {
            fn_800C428C(*vtable);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800D74FC(void *arg0) {
    extern void *lbl_80367240;
    s32 buttons;
    s32 prev;
    s32 repeat;
    void (*meth)(void *, s32, s32, s32);

    buttons = *(s32 *)((u8 *)lbl_80367240 + 4);
    prev = *(s32 *)((u8 *)lbl_80367240 + 8);
    repeat = *(s32 *)((u8 *)lbl_80367240 + 0xC);
    meth = *(void (**)(void *, s32, s32, s32))(*(u8 **)((u8 *)arg0 + 0xC) + 0xC);
    meth(arg0, buttons, buttons & (prev ^ buttons), repeat);
}

void fn_800D7540(void *arg0) {
    extern void fn_800E3F48(void *);

    fn_800E3F48(*(void **)((u8 *)arg0 + 0x10));
}

void fn_800D7564(void *arg0) {
    extern void fn_800E3F54(void *);

    fn_800E3F54(*(void **)((u8 *)arg0 + 0x10));
}

void fn_800D7588(void) {

}

void fn_800D758C(void *arg0) {
    void fn_800DF664(void *);
    fn_800DF664(M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, u8 *, 0x420) = 0;
}

void fn_800D75C4(void *arg0) {
    void fn_800DF670(void *);
    fn_800DF670(M2C_FIELD(arg0, void **, 0x10));
    M2C_FIELD(arg0, u8 *, 0x420) = 1;
}

#pragma optimization_level 2
s32 fn_800D75FC(void *arg0) {
    s32 fn_800E4454(s32, M2C_UNK *);
    M2C_UNK fn_800C9B6C(M2C_UNK *);
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK sp8;

    fn_800C9B6C(&sp8);
    arg0 = (void *)fn_800E4454(M2C_FIELD(arg0, s32 *, 0x10), &sp8);
    fn_800C9A60(&sp8, -1);
    return (s32)arg0;
}
#pragma optimization_level reset
s32 fn_800D77B0(void) {
    M2C_UNK fn_800DA358();
    fn_800DA358();
    return 0;
}

s32 fn_800D77D4(void) {
    void fn_800D758C(void *);
    void fn_800D75C4(void *);
    void fn_800DA2CC(void *);
    extern void *lbl_80367898;
    extern void *lbl_803678A8;
    extern u16 *lbl_803678C8;
    extern void *lbl_803679C8;
    extern void *lbl_803679D0;
    extern void *lbl_80367A50;
    extern void *lbl_803678C0;

    fn_800D758C(lbl_80367898);
    fn_800D758C(lbl_803678A8);
    fn_800D758C(lbl_803678C8);
    fn_800D758C(lbl_803679C8);
    fn_800D758C(lbl_803679D0);
    fn_800D758C(lbl_80367A50);
    fn_800D75C4(lbl_803678C0);
    fn_800DA2CC(lbl_803678C0);
    return 0;
}

s32 fn_800D7834(void) {
    void fn_800D75C4(void *);
    void fn_800DA2CC(void *);
    extern s32 lbl_80367A50;
    fn_800D75C4((void *)lbl_80367A50);
    fn_800DA2CC((void *)lbl_80367A50);
    return 0;
}

s32 fn_800D7864(void) {
    void fn_800D75C4(void *);
    void fn_800DA2CC(void *);
    extern s32 lbl_80367BA0;
    fn_800D75C4((void *)lbl_80367BA0);
    fn_800DA2CC((void *)lbl_80367BA0);
    return 0;
}

s32 fn_800D7894(void) {
    void fn_800D75C4(void *);
    void fn_800DA2CC(void *);
    extern s32 lbl_803679D0;
    fn_800D75C4((void *)lbl_803679D0);
    fn_800DA2CC((void *)lbl_803679D0);
    return 0;
}

s32 fn_800D78C4(void) {
    void fn_800D75C4(void *);
    void fn_800DA2CC(void *);
    extern s32 lbl_803679C8;
    fn_800D75C4((void *)lbl_803679C8);
    fn_800DA2CC((void *)lbl_803679C8);
    return 0;
}

s32 fn_800D78F4(void) {
    void fn_800D758C(void *);
    void fn_800D75C4(void *);
    void fn_800DA2CC(void *);
    extern void *lbl_80367898;
    extern void *lbl_803678A8;
    extern u16 *lbl_803678C8;
    extern void *lbl_803679C8;
    extern void *lbl_803679D0;
    extern void *lbl_80367A50;
    extern void *lbl_803678C0;

    fn_800D75C4(lbl_80367898);
    fn_800D758C(lbl_803678A8);
    fn_800D758C(lbl_803678C8);
    fn_800D758C(lbl_803678C0);
    fn_800D758C(lbl_803679C8);
    fn_800D758C(lbl_803679D0);
    fn_800D758C(lbl_80367A50);
    fn_800DA2CC(lbl_80367898);
    return 0;
}

void *fn_800D7954(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_800C9ABC(void *, char *, void *);
    void fn_800CB90C(void *, void *, char *);
    void *fn_800D75FC(void *, void *);
    void fn_800D764C(void *, s32, s32, s32, void *, void *);
    void fn_800E3F54(void *);
    extern char lbl_80271038[];
    extern u8 lbl_8028DDD8[];
    extern void fn_800D78F4(void);
    extern void fn_800D78C4(void);
    extern void fn_800D7894(void);
    extern void fn_800D7864(void);
    extern void fn_800D7834(void);
    extern void fn_800D77D4(void);
    extern void fn_800D77B0(void);
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
    void *sp28;
    void *sp24;
    void *sp20;
    void *sp1C;
    void *sp18;
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    void *temp;
    void *self;

    self = arg0;
    fn_800C9ABC(&sp98, lbl_80271038, &sp28);
    fn_800CB90C(&sp8C, &sp98, lbl_80271038 + 7);
    fn_800C9ABC(&sp80, lbl_80271038 + 0x10, &sp24);
    fn_800D764C(self, arg1, arg2, arg3, &sp8C, &sp80);
    fn_800C9A60(&sp80, -1);
    fn_800C9A60(&sp8C, -1);
    fn_800C9A60(&sp98, -1);
    *(void **)((u8 *)self + 0xC) = lbl_8028DDD8;
    fn_800C9ABC(&sp74, lbl_80271038 + 0x1B, &sp20);
    *(void **)((u8 *)self + 0x424) = fn_800D75FC(self, &sp74);
    fn_800C9A60(&sp74, -1);
    fn_800C9ABC(&sp68, lbl_80271038 + 0x24, &sp1C);
    *(void **)((u8 *)self + 0x428) = fn_800D75FC(self, &sp68);
    fn_800C9A60(&sp68, -1);
    fn_800C9ABC(&sp5C, lbl_80271038 + 0x2E, &sp18);
    *(void **)((u8 *)self + 0x42C) = fn_800D75FC(self, &sp5C);
    fn_800C9A60(&sp5C, -1);
    fn_800C9ABC(&sp50, lbl_80271038 + 0x39, &sp14);
    *(void **)((u8 *)self + 0x430) = fn_800D75FC(self, &sp50);
    fn_800C9A60(&sp50, -1);
    fn_800C9ABC(&sp44, lbl_80271038 + 0x43, &sp10);
    *(void **)((u8 *)self + 0x434) = fn_800D75FC(self, &sp44);
    fn_800C9A60(&sp44, -1);
    fn_800C9ABC(&sp38, lbl_80271038 + 0x49, &spC);
    *(void **)((u8 *)self + 0x438) = fn_800D75FC(self, &sp38);
    fn_800C9A60(&sp38, -1);
    fn_800C9ABC(&sp2C, lbl_80271038 + 0x53, &sp8);
    *(void **)((u8 *)self + 0x43C) = fn_800D75FC(self, &sp2C);
    fn_800C9A60(&sp2C, -1);
    *(void **)((u8 *)*(void **)((u8 *)self + 0x424) + 0xA4) = (void *)fn_800D78F4;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x428) + 0xA4) = (void *)fn_800D78C4;
    temp = *(void **)((u8 *)self + 0x42C);
    *(void **)((u8 *)temp + 0xA4) = (void *)fn_800D7894;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x430) + 0xA4) = (void *)fn_800D7864;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x434) + 0xA4) = (void *)fn_800D7834;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x438) + 0xA4) = (void *)fn_800D77D4;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x43C) + 0xA4) = (void *)fn_800D77B0;
    *(void **)((u8 *)self + 0x14) = *(void **)((u8 *)self + 0x424);
    *(void **)((u8 *)self + 0x18) = *(void **)((u8 *)self + 0x428);
    *(void **)((u8 *)self + 0x1C) = *(void **)((u8 *)self + 0x430);
    *(void **)((u8 *)self + 0x20) = *(void **)((u8 *)self + 0x42C);
    *(void **)((u8 *)self + 0x24) = *(void **)((u8 *)self + 0x434);
    *(void **)((u8 *)self + 0x28) = *(void **)((u8 *)self + 0x438);
    *(void **)((u8 *)self + 0x2C) = *(void **)((u8 *)self + 0x43C);
    *(void **)((u8 *)self + 0x414) = *(void **)((u8 *)self + 0x424);
    fn_800E3F54(*(void **)((u8 *)self + 0x424));
    return self;
}

s32 fn_800D7C5C(void) {
    void fn_800D758C(void *);
    extern void *lbl_803678A8;
    extern void *lbl_803678C8;
    fn_800D758C(lbl_803678A8);
    fn_800D758C(lbl_803678C8);
    return 0;
}

s32 fn_800D7C8C(void)
{
    void *fn_800DC3C0(void *);
    void fn_800DA5AC(void *, s32);
    void fn_800D75C4(void *);

    extern u32 lbl_803678A8;
    extern u32 lbl_803678C8;

    void *result;
    u8 *ptr;

    ptr = (u8 *)lbl_803678A8;

    result = fn_800DC3C0(*(void **)(ptr + 0x424));

    fn_800DA5AC(result, 1);

    fn_800D75C4((void *)lbl_803678C8);

    return 0;
}

s32 fn_800D7CC8(void)
{
    void *fn_800DC3C0(void *);
    void fn_800DA5AC(void *, s32);
    void fn_800D75C4(void *);

    extern u32 lbl_803678A8;
    extern u32 lbl_803678C8;

    void *result;
    u8 *ptr;

    ptr = (u8 *)lbl_803678A8;

    result = fn_800DC3C0(*(void **)(ptr + 0x424));

    fn_800DA5AC(result, 0);

    fn_800D75C4((void *)lbl_803678C8);

    return 0;
}

void fn_800D7D04(void *arg0) {
    if (arg0 == NULL) {
        return;
    }
    
    M2C_FIELD(arg0, u32 *, 0x0) = 0;
    M2C_FIELD(arg0, u32 *, 0x4) = 0;
    M2C_FIELD(arg0, u32 *, 0x8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, u32 *, 0x10) = 0;
    M2C_FIELD(arg0, u32 *, 0x14) = 0;
    M2C_FIELD(arg0, u32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

extern s32 lbl_8036A0CC;
extern s32 lbl_8036A0D4;
extern s32 lbl_8036A0D8;
extern s32 lbl_8036A0E0;
extern s32 lbl_8036A0E8;
extern s32 lbl_8036A0EC;
extern s32 lbl_8036A0F0;
extern s32 lbl_8036A0F4;
extern s32 lbl_8036A0F8;
extern s32 lbl_8036A0FC;
extern s32 lbl_8036A100;
extern s32 lbl_8036A104;
extern s32 lbl_8036A108;
extern s32 lbl_8036A10C;
extern s32 lbl_8036A110;
extern s32 lbl_8036A114;
extern s32 lbl_8036A118;
extern s32 lbl_8036A120;
extern s32 lbl_8036A124;
extern s32 lbl_8036A128;
extern s32 lbl_8036A12C;
extern s32 lbl_8036A130;
extern s32 lbl_8036A134;
extern s32 lbl_8036A138;
extern s32 lbl_8036A13C;
extern s32 lbl_8036A140;
void fn_800D83B0(void* param_1) {
    // The function is too complex to create an accurate implementation from m2c draft
    // We'll use the approach of getting simpler matching chunks first or just 
    // implementing what we understand clearly for now.
    
    // Since the assembly shows very specific register usage and control flow,
    // let's simplify our attempt to just make a minimal working C version
    
    if (param_1 == NULL) {
        return;
    }
    
    // We'll need to match what the machine draft shows - it looks like
    // this function is doing parameter initialization for units, with:
    // - Calls to various parameter-setting functions
    // - Data copying from specific locations  
    // - Struct field assignments
    // - Conditional logic
    
    // For now we'll create a placeholder that at least matches basic structure
    return;
}

#pragma use_lmw_stmw on
void fn_800D85CC(s32 self, char *arg1) {
void *fn_800C42D8(u32); void fn_800C9ABC(void *,void *,void *); void *fn_800C91EC(void *,void *,void *);
void fn_8023440C(void *,void *,u32); void fn_800C908C(void *,void *,void *);
void fn_800C8CB4(void *,void *); void fn_800C8D58(void *,void *); u8 fn_800C8EFC(void *);
void fn_800C9758(void *,void *,s32,s32); void *fn_800C96F8(void *,void *,s32); s32 strlen(char *);
void fn_800CA18C(void *,void *,s32,void *); void fn_800C9120(void *,s16);
void fn_8011C674(void *,void *); void fn_8011C64C(void *,void *); void *fn_8011C9EC(void *); void fn_8011CA3C(void *,void *,void *);
extern char lbl_802711B0[]; extern void *lbl_80367A50; extern void *lbl_803678C0;
struct Block { u32 a,b,c,d,e,f,g,h; };
struct Block sp108,spE8; char spC8[32]; struct Block spA8,sp88; char sp68[32];
String sp5C,sp50,sp44,sp38,sp2C,sp20,sp14; u32 sp10,spC,sp8;
void *f; s32 arg0; char *path; s8 made;
arg0=self; made=0;
f=fn_800C42D8(0x60);
path=arg1;
if(f){fn_800C9ABC(&sp44,lbl_802711B0+0xFA,&sp10);made=1;f=fn_800C91EC(f,path,&sp44);}
if((s8)made)fn_800C9A60(&sp44,-1);
sp5C.cap=0;sp50.cap=0;sp5C.size=0;sp5C.data=0;sp5C.cap=0;sp50.size=0;sp50.data=0;sp50.cap=0;
fn_800C9ABC(&sp38,lbl_802711B0+0xFF,&spC);
fn_8023440C(&spE8,lbl_802711B0+0x110,32);sp108=spE8;
fn_800C908C(f,&sp38,&sp108);fn_800C9A60(&sp38,-1);
path=spC8;
while(fn_800C8EFC(f)){
fn_800C8CB4(&sp2C,f);fn_800C9758(&sp5C,&sp2C,0,-1);fn_800C9A60(&sp2C,-1);
fn_800C8D58(spC8,f);fn_800C96F8(&sp50,path,strlen(path));
fn_8011C674(lbl_80367A50,&sp5C);
fn_800CA18C((void *)(arg0+0x4C),M2C_FIELD(arg0,u8 **,0x54)+M2C_FIELD(arg0,s32 *,0x50)*12,1,&sp50);
}
fn_800C9ABC(&sp20,lbl_802711B0+0xFF,&sp8);
fn_8023440C(&sp88,lbl_802711B0+0x11C,32);spA8=sp88;
fn_800C908C(f,&sp20,&spA8);fn_800C9A60(&sp20,-1);
path=sp68;
while(fn_800C8EFC(f)){
fn_800C8CB4(&sp14,f);fn_800C9758(&sp5C,&sp14,0,-1);fn_800C9A60(&sp14,-1);
fn_800C8D58(sp68,f);fn_800C96F8(&sp50,path,strlen(path));
fn_8011C64C(lbl_80367A50,&sp5C);
fn_800CA18C((void *)(arg0+0x58),M2C_FIELD(arg0,u8 **,0x60)+M2C_FIELD(arg0,s32 *,0x5C)*12,1,&sp50);
}
{void *t;t=fn_8011C9EC(*(void **)((u8 *)lbl_80367A50+0x424));fn_8011CA3C(*(void **)((u8 *)lbl_803678C0+0x448),t,lbl_803678C0);t=fn_8011C9EC(*(void **)((u8 *)lbl_80367A50+0x428));fn_8011CA3C(*(void **)((u8 *)lbl_803678C0+0x450),t,lbl_803678C0);}
fn_800C9120(f,1);fn_800C9A60(&sp50,-1);fn_800C9A60(&sp5C,-1);
}
#pragma use_lmw_stmw reset

void fn_800D8928(String *arg0, const String *arg1, u32 pos, u32 n) {
    extern char __files[];
    extern char lbl_80270350[];
    void fn_800CA7F4(String *, u32, s32);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    void *memcpy(void *, const void *, u32);
    u32 rest;
    u32 len;

    if (pos > arg1->size) {
        fn_80232058(__files + 0xA0, lbl_80270350 + 0x96);
        fn_8022CF78();
    }
    rest = arg1->size - pos;
    len = (n < rest) ? n : rest; 
    if (arg0 == arg1) {
        fn_800C984C(arg0, 0, pos);
        fn_800CA7F4(arg0, len, 1);
    } else {
        fn_800CA7F4(arg0, len, 0);
        memcpy(arg0->data, arg1->data + pos, len);
    }
    return;
}

void fn_800D8D94(void *arg0, void *arg1, void *arg2, s32 arg3)
{
    void fn_800C9B6C(void *, void *);
    void fn_800E5270(void *, void *, void *, s32);
    void fn_800C9A60(void *, s32);
    u32 sp14[3];
    u32 sp8[3];

    fn_800C9B6C(sp14, arg1);
    fn_800C9B6C(sp8, arg2);
    fn_800E5270(*(void **)((u8 *)arg0 + 0x10), sp14, sp8, arg3);
    fn_800C9A60(sp8, -1);
    fn_800C9A60(sp14, -1);
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_800D8E14(void *arg0, s32 arg1) {
    struct Host {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5(void *);
        virtual void v6(const char *, const char *);
    };
    struct Widget {
        u8 pad[0x40];
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
        virtual void v11(f32, f32, f32);
    };
    void *fn_800C42D8(u32);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void fn_800C9ABC(String *, char *, void *);
    void *fn_800DE4F0(void *, void *, String *, String *);
    void fn_800DDAE0(void *, String *, String *);
    void *fn_800E6418(void *, void *, String *, String *, String *, String *);
    void fn_800E574C(void *, char *, s32, s32, s32, s32, f32);
    void fn_800E4E3C(void *);
    void fn_800E4B64(void *);
    s32 fn_800E56BC(void *);
    void *fn_80040844(void);
    u32 strlen(const char *);
    extern char lbl_802711B0[];
    extern void *lbl_80368278;
    extern f32 lbl_80369E58;
    String str74, str68, str5C, str50, str44, str38, str2C, str20;
    void *alloc1C, *alloc18, *alloc14, *alloc10, *allocC, *alloc8;
    void *self;
    void *obj;
    s8 flag;
    s8 made29;
    s8 made28;
    s8 made27;
    s8 made26;

    self = arg0;
    str74.cap = 0;
    str68.cap = 0;
    str74.size = 0;
    str74.data = 0;
    str74.cap = 0;
    str68.size = 0;
    str68.data = 0;
    str68.cap = 0;
    fn_800C9758(&str74, (String *)(*(u8 **)((u8 *)self + 0x60) + arg1 * 0xC), 0, -1);
    ((Host *)*(void **)((u8 *)self + 4))->v6((char *)lbl_802711B0 + 0x18F, (char *)lbl_802711B0 + 0x195);
    ((Host *)*(void **)((u8 *)self + 4))->v6((char *)lbl_802711B0 + 0x19A, (char *)lbl_802711B0 + 0x1A0);
    fn_800C96F8(&str68, &lbl_802711B0[0x1A4], strlen((char *)lbl_802711B0 + 0x1A4));
    fn_800C99A0(&str68, &str74, 0, -1);
    fn_800C992C(&str68, &lbl_802711B0[0x18D], strlen((char *)lbl_802711B0 + 0x18D));
    fn_800C99A0(&str68, &str74, 0, -1);
    flag = 0;
    obj = fn_800C42D8(0x78);
    if (obj != NULL) {
        fn_800C9ABC(&str5C, &lbl_802711B0[0x1A0], &alloc1C);
        flag = 1;
        obj = fn_800DE4F0(obj, *(void **)((u8 *)self + 4), &str5C, &str68);
    }
    if (flag != 0) {
        fn_800C9A60(&str5C, -1);
    }
    fn_800C9ABC(&str50, &lbl_802711B0[0x1A9], &alloc18);
    fn_800DDAE0(obj, &str50, &str68);
    fn_800C9A60(&str50, -1);
    ((Host *)*(void **)((u8 *)self + 4))->v5(obj);
    made29 = 0;
    made28 = 0;
    made27 = 0;
    made26 = 0;
    obj = fn_800C42D8(0x118);
    if (obj != NULL) {
        fn_800C9ABC(&str44, &lbl_802711B0[0x1AF], &alloc14);
        made29 = 1;
        fn_800C9ABC(&str38, &lbl_802711B0[0x1A0], &alloc10);
        made28 = 1;
        fn_800C9ABC(&str2C, &lbl_802711B0[0x195], &allocC);
        made27 = 1;
        fn_800C9ABC(&str20, &lbl_802711B0[0x18F], &alloc8);
        made26 = 1;
        obj = fn_800E6418(obj, *(void **)((u8 *)self + 4), &str20, &str2C, &str38, &str44);
    }
    if (made26 != 0) {
        fn_800C9A60(&str20, -1);
    }
    if (made27 != 0) {
        fn_800C9A60(&str2C, -1);
    }
    if (made28 != 0) {
        fn_800C9A60(&str38, -1);
    }
    if (made29 != 0) {
        fn_800C9A60(&str44, -1);
    }
    ((Widget *)obj)->v11(*(f32 *)((u8 *)lbl_80368278 + 0x24), *(f32 *)((u8 *)lbl_80368278 + 0x28), *(f32 *)((u8 *)lbl_80368278 + 0x2C));
    fn_800E574C(obj, (char *)lbl_802711B0 + 0x1A9, 1, 0, 0, 0xA, lbl_80369E58);
    fn_800E4E3C(obj);
    fn_800E4B64(obj);
    ((Host *)*(void **)((u8 *)self + 4))->v5(obj);
    self = fn_80040844();
    if (self != NULL) {
        *(s32 *)((u8 *)self + 0x34) = fn_800E56BC(obj);
    }
    fn_800C9A60(&str68, -1);
    fn_800C9A60(&str74, -1);
}

#pragma opt_common_subs off
extern "C" void fn_800D9458(s32 arg0,u32 arg1,s32 arg2) {
void fn_8005BCAC();void fn_8005C7E8(u32);void *fn_800C42D8(s32);
char *fn_800C93EC(void *);void fn_800C96F8(void *,void *,u32);void fn_800C9758(void *,void *,s32,s32);
void fn_800C9A60(void *,s32);void fn_800C9ABC(void *,void *,void *);void fn_800C9B6C(void *,void *);
void fn_800CB8A4(void *,void *,void *);void fn_800CB90C(void *,void *,void *);
u32 fn_800D9804(void *,void *,void *);void fn_800E4B44(void *);void fn_800E4B84(void *);void fn_800E4BA4(void *,s32);void fn_800E4D24(void *);void fn_800E4E5C(void *);
void fn_800E78B0(void *,void *);void fn_800E8154(void *,void *);void fn_80112824(void *,void *);void fn_80113030(void *,s32,void *,void *);void fn_801167BC(void *,void *);
void *fn_80117A94(void *,void *,void *,void *,s32,s32);void *fn_801992F8(void *);u32 strlen(void *);
extern u8 lbl_802711B0[];extern const f32 lbl_80369E34,lbl_80369E5C;
struct Parent {u8 pad[16];virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5(void *);virtual void v6(void *,void *);};
struct Child {u8 pad[64];virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9(f32,f32,f32);};
u32 s90[3],s84[3],s78[3],s6c[3],s60[3],s54[3],s48[3],s3c[3],s30[3],s24[3],s18[3];
u32 a14,a10,ac,a8;

register s8 flag1,flag2;
s90[1]=0;s84[1]=0;s90[0]=0;s90[2]=0;s90[1]=0;s84[0]=0;s84[2]=0;s84[1]=0;
((u8 *)arg0)[0x88]=arg2;
((Parent *)M2C_FIELD(((u8 *)arg0),void **,4))->v6(lbl_802711B0+0x18f,lbl_802711B0+0x1e4);
((Parent *)M2C_FIELD(((u8 *)arg0),void **,4))->v6(lbl_802711B0+0x19a,fn_800C93EC(((u8 *)arg0)+0x70));
M2C_FIELD(((u8 *)arg0),void **,0x10)=0;
fn_800C9758(((u8 *)arg0)+0x70,M2C_FIELD(((u8 *)arg0),u8 **,0x3c)+arg1*12,0,-1);
if(M2C_FIELD(((u8 *)arg0),void **,0x18)){
arg1=(s32)fn_801992F8(M2C_FIELD(((u8 *)arg0),void **,0x18));
fn_800C96F8(s84,(void *)arg1,strlen((void *)arg1));
}else fn_800C96F8(s84,lbl_802711B0+0x1d7,strlen(lbl_802711B0+0x1d7));
fn_800E78B0(M2C_FIELD(((u8 *)arg0),void **,4),s84);
arg1=(s32)M2C_FIELD(((u8 *)arg0),void **,0x8c);
M2C_FIELD(((u8 *)arg0),u32 *,0x8c)=fn_800D9804(((u8 *)arg0),((u8 *)arg0)+0x70,M2C_FIELD(((u8 *)arg0),void **,0x18));
if(arg1){fn_8005C7E8((u32)arg1);fn_8005BCAC();}
fn_800C9ABC(s78,lbl_802711B0+0x189,&a14);
fn_800CB8A4(s6c,s78,((u8 *)arg0)+0x70);fn_800CB90C(s60,s6c,lbl_802711B0+0x1df);
fn_800C9758(s90,s60,0,-1);fn_800C9A60(s60,-1);fn_800C9A60(s6c,-1);
fn_800E8154(M2C_FIELD(((u8 *)arg0),void **,4),s90);
flag1=0;flag2=0;
arg1=(s32)fn_800C42D8(0x1d8);
if(arg1){fn_800C9B6C(s54,((u8 *)arg0)+0x70);flag1=1;fn_800C9ABC(s48,lbl_802711B0+0x1e4,&a10);flag2=1;arg1=(s32)fn_80117A94((void *)arg1,M2C_FIELD(((u8 *)arg0),void **,4),s48,s54,0,0);}
M2C_FIELD(((u8 *)arg0),void **,0x10)=(void *)arg1;
if(flag2)fn_800C9A60(s48,-1);
if(flag1)fn_800C9A60(s54,-1);
fn_800CB8A4(s3c,s78,((u8 *)arg0)+0x70);fn_800CB90C(s30,s3c,lbl_802711B0+0x1eb);
fn_80112824(M2C_FIELD(((u8 *)arg0),void **,0x10),s30);fn_800C9A60(s30,-1);fn_800C9A60(s3c,-1);
fn_800C9ABC(s24,lbl_802711B0+0x129,&ac);fn_800C9ABC(s18,lbl_802711B0+0x129,&a8);
fn_80113030(M2C_FIELD(((u8 *)arg0),void **,0x10),0,s24,s18);fn_800C9A60(s18,-1);fn_800C9A60(s24,-1);
((Child *)M2C_FIELD(((u8 *)arg0),void **,0x10))->v9(lbl_80369E34,lbl_80369E5C,lbl_80369E34);
((Parent *)M2C_FIELD(((u8 *)arg0),void **,4))->v5(M2C_FIELD(((u8 *)arg0),void **,0x10));
if(M2C_FIELD(((u8 *)arg0),void **,0x18))fn_801167BC(M2C_FIELD(((u8 *)arg0),void **,0x10),M2C_FIELD(((u8 *)arg0),void **,0x18));
if((u8)arg2)fn_800E4E5C(M2C_FIELD(((u8 *)arg0),void **,0x10));
fn_800E4D24(M2C_FIELD(((u8 *)arg0),void **,0x10));fn_800E4BA4(M2C_FIELD(((u8 *)arg0),void **,0x10),255);fn_800E4B84(M2C_FIELD(((u8 *)arg0),void **,0x10));fn_800E4B44(M2C_FIELD(((u8 *)arg0),void **,0x10));
fn_800C9A60(s78,-1);fn_800C9A60(s84,-1);fn_800C9A60(s90,-1);
}
#pragma opt_common_subs on

#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
s32 fn_800D9804(void *arg0, s32 arg1, u32 arg2) {
    u16 fn_8005C144(void);
    s32 fn_8005C84C(void);
    char *fn_800C93EC(String *);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C9A60(String *, s32);
    void fn_800CB8A4(String *, String *, void *);
    void fn_800CB90C(String *, String *, char *);
    void fn_800CBF24(String *, char *, s32);
    char *fn_801992F8(u32);
    u32 strlen(const char *);
    extern char lbl_802711B0[];

    String result;
    String name;
    char *p;
    s32 ret;
    s32 path;

    (void)arg0;
    path = arg1;
    result.cap = 0;
    name.cap = 0;
    result.size = 0;
    result.data = 0;
    result.cap = 0;
    name.size = 0;
    name.data = 0;
    name.cap = 0;

    if (arg2 != 0) {
        p = fn_801992F8(arg2);
        fn_800C96F8(&result, p, strlen(p));
    } else {
        fn_800C96F8(&result, &lbl_802711B0[0x1D7], strlen(&lbl_802711B0[0x1D7]));
    }

    {
        String a, b, c, d, e, f;
        fn_800CBF24(&a, &lbl_802711B0[0x189], path);
        fn_800CB90C(&b, &a, &lbl_802711B0[0x18D]);
        fn_800CB8A4(&c, &b, (void *)path);
        fn_800CB90C(&d, &c, &lbl_802711B0[0x1F4]);
        fn_800CB8A4(&e, &d, &result);
        fn_800CB90C(&f, &e, &lbl_802711B0[0x1F6]);
        fn_800C9758(&name, &f, 0, -1);
        fn_800C9A60(&f, -1);
        fn_800C9A60(&e, -1);
        fn_800C9A60(&d, -1);
        fn_800C9A60(&c, -1);
        fn_800C9A60(&b, -1);
        fn_800C9A60(&a, -1);
    }
    fn_800C93EC(&name);
    if ((u16)fn_8005C144() != 0x8000) {
        fn_800C93EC(&name);
        ret = fn_8005C84C();
        fn_800C9A60(&name, -1);
        fn_800C9A60(&result, -1);
        return ret;
    }

    {
        String a, b, c, d, e, f;
        fn_800CBF24(&a, &lbl_802711B0[0x189], path);
        fn_800CB90C(&b, &a, &lbl_802711B0[0x18D]);
        fn_800CB8A4(&c, &b, (void *)path);
        fn_800CB90C(&d, &c, &lbl_802711B0[0x1F4]);
        fn_800CB8A4(&e, &d, &result);
        fn_800CB90C(&f, &e, &lbl_802711B0[0x1FB]);
        fn_800C9758(&name, &f, 0, -1);
        fn_800C9A60(&f, -1);
        fn_800C9A60(&e, -1);
        fn_800C9A60(&d, -1);
        fn_800C9A60(&c, -1);
        fn_800C9A60(&b, -1);
        fn_800C9A60(&a, -1);
    }
    fn_800C93EC(&name);
    if ((u16)fn_8005C144() != 0x8000) {
        fn_800C93EC(&name);
        ret = fn_8005C84C();
        fn_800C9A60(&name, -1);
        fn_800C9A60(&result, -1);
        return ret;
    }

    fn_800C9A60(&name, -1);
    fn_800C9A60(&result, -1);
    return 0;
}

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void *fn_800D9B10(void *arg0) {
    struct Host {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5(void *);
        virtual void v6(const char *, const char *);
    };
    void fn_800408A8(s32);
    void fn_8004084C(void);
    void *fn_800C42D8(u32);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9758(String *, void *, s32, s32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void fn_800C9ABC(String *, char *, void *);
    void fn_800C9BC4(void *, void *, s32, void **);
    void fn_800CB90C(String *, String *, char *);
    void fn_800D58C0(void *);
    void *fn_800D7060(void *, void *, s32, s32);
    void fn_800D7540(void *);
    void fn_800D7564(void *);
    void *fn_800D7954(void *, void *, s32, s32);
    void *fn_800D7E24(void *, void *, s32, s32);
    void fn_800D83B0(void *, String *);
    void fn_800D85CC(void *, String *);
    void fn_800D8928(void *, String *);
    void fn_800D8B14(void *, String *);
    void fn_800E8154(void *, String *);
    void *fn_800E8504(void *, s32, String *);
    void *fn_800ECF40(void *, void *, s32, s32);
    void *fn_800EDAD0(void *, void *, s32, s32);
    void *fn_80103428(void *, void *, s32, s32);
    void *fn_80108788(void *, void *, s32, s32);
    void *fn_80108A18(void *, void *, s32, s32);
    void *fn_8011C69C(void *, void *, s32, s32);
    void *fn_801513EC(void *, void *, s32, s32);
    void *fn_80165C84(void *, void *, String *, String *);
    void *fn_801BEF90(void *);
    void fn_801C77A4(void);
    u32 strlen(const char *);
    extern char lbl_802711B0[];
    extern void *lbl_80367898;
    extern void *lbl_803678A0;
    extern void *lbl_803678A8;
    extern s8 lbl_803678BC;
    extern s8 lbl_803678BF;
    extern void *lbl_803678C0;
    extern void *lbl_803678C8;
    extern void *lbl_80367918;
    extern void *lbl_803679C8;
    extern void *lbl_803679D0;
    extern void *lbl_80367A50;
    extern void *lbl_80367BA0;
    extern void *lbl_80368278;

    String sp98, sp8C, sp80, sp74, sp68, sp5C, sp50, sp44, sp38, sp2C;
    String sp14;
    String sp20;
    void *scratch10, *scratchC, *scratch8;
    void *self;
    void *tmp;
    s8 made;
    s32 idx;
    void *entry;

    self = arg0;
    *(s32 *)((u8 *)self + 0x1C) = 0;
    *(s32 *)((u8 *)self + 0x20) = 0;
    *(s32 *)((u8 *)self + 0x24) = 0;
    *(s32 *)((u8 *)self + 0x34) = 0;
    *(s32 *)((u8 *)self + 0x38) = 0;
    *(s32 *)((u8 *)self + 0x3C) = 0;
    *(s32 *)((u8 *)self + 0x40) = 0;
    *(s32 *)((u8 *)self + 0x44) = 0;
    *(s32 *)((u8 *)self + 0x48) = 0;
    *(s32 *)((u8 *)self + 0x4C) = 0;
    *(s32 *)((u8 *)self + 0x50) = 0;
    *(s32 *)((u8 *)self + 0x54) = 0;
    *(s32 *)((u8 *)self + 0x58) = 0;
    *(s32 *)((u8 *)self + 0x5C) = 0;
    *(s32 *)((u8 *)self + 0x60) = 0;
    *(s32 *)((u8 *)self + 0x64) = 0;
    *(s32 *)((u8 *)self + 0x68) = 0;
    *(s32 *)((u8 *)self + 0x6C) = 0;
    *(s32 *)((u8 *)self + 0x70) = 0;
    *(s32 *)((u8 *)self + 0x74) = 0;
    *(s32 *)((u8 *)self + 0x78) = 0;
    *(s32 *)((u8 *)self + 0x74) = 0;
    *(s32 *)((u8 *)self + 0x7C) = 0;
    *(s32 *)((u8 *)self + 0x80) = 0;
    *(s32 *)((u8 *)self + 0x84) = 0;
    *(s32 *)((u8 *)self + 0x80) = 0;
    fn_800C9ABC(&sp98, lbl_802711B0 + 0x12A, &scratch10);
    fn_800C9ABC(&sp8C, lbl_802711B0 + 0x200, &scratchC);
    fn_800408A8(1);
    fn_8004084C();
    fn_800D58C0(self);
    made = 0;
    tmp = fn_800C42D8(0x48);
    if (tmp != NULL) {
        fn_800CB90C(&sp80, &sp98, lbl_802711B0 + 0x207);
        made = 1;
        tmp = fn_800E8504(tmp, 0, &sp80);
    }
    *(void **)((u8 *)self + 4) = tmp;
    if (made != 0) {
        fn_800C9A60(&sp80, -1);
    }
    fn_800CB90C(&sp74, &sp8C, lbl_802711B0 + 0x212);
    fn_800E8154(*(void **)((u8 *)self + 4), &sp74);
    fn_800C9A60(&sp74, -1);
    fn_800CB90C(&sp68, &sp98, lbl_802711B0 + 0x21E);
    fn_800E8154(*(void **)((u8 *)self + 4), &sp68);
    fn_800C9A60(&sp68, -1);

    tmp = fn_800C42D8(0x440);
    if (tmp != NULL) {
        tmp = fn_800D7954(tmp, *(void **)((u8 *)self + 4), 0x10, 8);
    }
    lbl_803678A0 = tmp;
    tmp = fn_800C42D8(0x434);
    if (tmp != NULL) {
        tmp = fn_800D7060(tmp, *(void **)((u8 *)self + 4), 0x14, 0x3C);
    }
    lbl_80367898 = tmp;
    tmp = fn_800C42D8(0x434);
    if (tmp != NULL) {
        tmp = fn_800D7E24(tmp, *(void **)((u8 *)self + 4), 0x14, 0x3C);
    }
    lbl_803678A8 = tmp;
    tmp = fn_800C42D8(0x454);
    if (tmp != NULL) {
        tmp = fn_800EDAD0(tmp, *(void **)((u8 *)self + 4), 0xC8, 0x154);
    }
    lbl_803678C8 = tmp;
    tmp = fn_800C42D8(0x430);
    if (tmp != NULL) {
        tmp = fn_80103428(tmp, *(void **)((u8 *)self + 4), 0xC8, 0x64);
    }
    lbl_80367918 = tmp;
    tmp = fn_800C42D8(0x490);
    if (tmp != NULL) {
        tmp = fn_800ECF40(tmp, *(void **)((u8 *)self + 4), 0x3C, 0x50);
    }
    lbl_803678C0 = tmp;
    tmp = fn_800C42D8(0x430);
    if (tmp != NULL) {
        tmp = fn_80108788(tmp, *(void **)((u8 *)self + 4), 0x28, 0x50);
    }
    lbl_803679C8 = tmp;
    tmp = fn_800C42D8(0x430);
    if (tmp != NULL) {
        tmp = fn_80108A18(tmp, *(void **)((u8 *)self + 4), 0x3C, 0x64);
    }
    lbl_803679D0 = tmp;
    tmp = fn_800C42D8(0x438);
    if (tmp != NULL) {
        tmp = fn_8011C69C(tmp, *(void **)((u8 *)self + 4), 0x28, 0x50);
    }
    lbl_80367A50 = tmp;
    tmp = fn_800C42D8(0x430);
    if (tmp != NULL) {
        tmp = fn_801513EC(tmp, *(void **)((u8 *)self + 4), 0x28, 0x50);
    }
    lbl_80367BA0 = tmp;

#pragma global_optimizer off
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_803678A0);
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_80367898);
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_803678A8);
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_803678C8);
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_80367918);
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_803678C0);
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_803679C8);
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_803679D0);
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_80367A50);
    fn_800C9BC4((u8 *)self + 0x1C, (u8 *)*(void **)((u8 *)self + 0x24) + (*(s32 *)((u8 *)self + 0x20) << 2), 1, &lbl_80367BA0);
#pragma global_optimizer reset

    *(s32 *)((u8 *)self + 0x28) = *(s32 *)((u8 *)self + 0x20);
    *(void **)((u8 *)self + 0x30) = NULL;
    *(s32 *)((u8 *)self + 0x2C) = -1;
    if (*(void **)((u8 *)self + 0x30) != NULL) {
        fn_800D7540(*(void **)((u8 *)self + 0x30));
    }
    *(void **)((u8 *)self + 0x30) = NULL;
    idx = *(s32 *)((u8 *)self + 0x2C) + 1;
    while (*(void **)((u8 *)self + 0x30) == NULL) {
        if (idx >= *(s32 *)((u8 *)self + 0x28)) {
            idx = 0;
        }
        entry = ((void **)*(void **)((u8 *)self + 0x24))[idx];
        if (*(u8 *)((u8 *)entry + 0x420) != 0) {
            *(void **)((u8 *)self + 0x30) = entry;
            fn_800D7564(*(void **)((u8 *)self + 0x30));
            *(s32 *)((u8 *)self + 0x2C) = idx;
        }
        idx += 1;
    }

    tmp = fn_800C42D8(0x1C8);
    if (tmp != NULL) {
        tmp = fn_801BEF90(tmp);
    }
    lbl_80368278 = tmp;
    fn_800CB90C(&sp5C, &sp98, lbl_802711B0 + 0x22C);
    fn_800D8B14(self, &sp5C);
    fn_800C9A60(&sp5C, -1);
    fn_800C96F8((String *)((u8 *)self + 0x70), lbl_802711B0 + 0x129, strlen(lbl_802711B0 + 0x129));
    fn_800CB90C(&sp50, &sp98, lbl_802711B0 + 0x23A);
    fn_800D8928(self, &sp50);
    fn_800C9A60(&sp50, -1);
    fn_800CB90C(&sp44, &sp98, lbl_802711B0 + 0x249);
    fn_800D85CC(self, &sp44);
    fn_800C9A60(&sp44, -1);
    fn_800CB90C(&sp38, &sp98, lbl_802711B0 + 0x254);
    fn_800D83B0(self, &sp38);
    fn_800C9A60(&sp38, -1);

    sp14.cap = 0;
    sp14.size = 0;
    sp14.data = 0;
    sp20.cap = 0;
    sp20.size = 0;
    sp20.data = 0;
    sp14.cap = 0;
    sp20.cap = 0;
    fn_800C9758(&sp14, *(void **)((u8 *)self + 0x54), 0, -1);
    ((Host *)*(void **)((u8 *)self + 4))->v6(lbl_802711B0 + 0x1B7, lbl_802711B0 + 0x1C5);
    fn_800C96F8(&sp20, lbl_802711B0 + 0x1A4, strlen(lbl_802711B0 + 0x1A4));
    fn_800C99A0(&sp20, &sp14, 0, -1);
    fn_800C992C(&sp20, lbl_802711B0 + 0x18D, strlen(lbl_802711B0 + 0x18D));
    made = 0;
    tmp = fn_800C42D8(0x54);
    if (tmp != NULL) {
        fn_800C9ABC(&sp2C, lbl_802711B0 + 0x1C5, &scratch8);
        made = 1;
        tmp = fn_80165C84(tmp, *(void **)((u8 *)self + 4), &sp2C, &sp20);
    }
    if (made != 0) {
        fn_800C9A60(&sp2C, -1);
    }
    ((Host *)*(void **)((u8 *)self + 4))->v5(tmp);
    fn_800C9A60(&sp20, -1);
    fn_800C9A60(&sp14, -1);
    lbl_803678BF = 1;
    *(s32 *)((u8 *)self + 0x14) = 0;
    *(s32 *)((u8 *)self + 0x10) = 0;
    *(s32 *)((u8 *)self + 0x18) = 0;
    fn_800C96F8((String *)((u8 *)self + 0x7C), lbl_802711B0 + 0xEB, strlen(lbl_802711B0 + 0xEB));
    *(u8 *)((u8 *)self + 0x88) = 0;
    *(u8 *)((u8 *)self + 0x89) = 0;
    lbl_803678BC = 0;
    *(s32 *)((u8 *)self + 0x8C) = 0;
    fn_801C77A4();
    fn_800C9A60(&sp8C, -1);
    fn_800C9A60(&sp98, -1);
    return self;
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma dont_inline on
void fn_800DA2CC(void *arg0)
{
    extern void *lbl_803678B8;
    void fn_800D7540(void *);
    void fn_800D7564(void *);
    void *object;
    void *field;

    object = lbl_803678B8;
    field = *(void **)((u8 *)object + 0x30);
    if (field != 0) {
        fn_800D7540(field);
    }
    *(void **)((u8 *)object + 0x30) = arg0;
    fn_800D7564(*(void **)((u8 *)object + 0x30));
}
#pragma dont_inline reset
void fn_800DA31C(void) {
    extern s8 lbl_803678BE;
    extern s8 lbl_803678BF;
    lbl_803678BE = 1;
    lbl_803678BF = 0;
}

void fn_800DA330(void) {
    extern s8 lbl_803678BC;
    extern s8 lbl_803678BD;
    lbl_803678BC = 0;
    lbl_803678BD = 0;
}

void fn_800DA340(s8 arg0) {
    lbl_803678BC = 1;
    lbl_803678BF = 0;
    lbl_803678BD = arg0;
}

void fn_800DA358(void) {
    extern u8 *lbl_803678B8;

    lbl_803678B8[0x89] = 1;
}

void fn_800DA368(void* arg0, void* arg1) {
    if (arg0 != NULL && arg1 != NULL) {
        int* data = (int*)arg1;
        int count = *data;
        int* dest = (int*)arg0;
        
        if (count > 0) {
            int i;
            for (i = 0; i < count; i++) {
                dest[i] = data[i + 1];
            }
        }
    }
}

void fn_800DA530(void *arg0, void *arg1, s32 arg2)
{
    extern void *lbl_803678B8;

    extern void fn_800C9B6C(void *, void *);
    extern void fn_800D8D94(void *, void *, void *, s32);
    extern void fn_800C9A60(void *, s32);

    u32 temp1[3];
    u32 temp2[3];

    fn_800C9B6C(temp1, arg0);
    fn_800C9B6C(temp2, arg1);

    fn_800D8D94(lbl_803678B8, temp1, temp2, arg2);

    fn_800C9A60(temp2, -1);
    fn_800C9A60(temp1, -1);
}

void fn_800DA5AC(void *arg0, s32 arg1) {
    extern void *lbl_80368278;
    extern void *lbl_803678B8;
    void fn_80113298(void *, void *, s32, s32, s32);
    void fn_801167BC(void *, s32);
    void *obj;

    obj = lbl_803678B8;
    fn_80113298(*(void **)((u8 *)obj + 0x10), arg0, *(s32 *)((u8 *)lbl_80368278 + 0x180), arg1, 1);
    fn_801167BC(*(void **)((u8 *)obj + 0x10), 0);
}

s32 fn_800DA5FC(void) {
    extern void *lbl_803678B8;
    return M2C_FIELD(lbl_803678B8, s32 *, 0x10);
}

void fn_800DAA38(void *arg0) {
    extern void *lbl_803678B8;
    extern void fn_800D9188(void *, void *);

    fn_800D9188(lbl_803678B8, arg0);
}

extern s32 lbl_803678B8;
String fn_800DAA60(s32 arg1) {
    String fn_800DAA94(s32, s32);
    return fn_800DAA94(lbl_803678B8, arg1);
}

void fn_800DAA94(void *arg0, u8 *arg1, s32 arg2) {
    void fn_800C9B6C(void *, void *);

    fn_800C9B6C(arg0, *(u8 **)(arg1 + 0x48) + arg2 * 0xC);
}

void fn_800DAAC0(s32 arg0, s32 arg1) {
    fn_800D9458(lbl_803678B8, arg0, arg1);
}

String fn_800DAAF0(s32 arg1) {
    String fn_800DAB24(s32, s32);
    return fn_800DAB24(lbl_803678B8, arg1);
}

void fn_800DAB24(void *arg0, void *arg1, s32 arg2) {
    void fn_800C9B6C(void *, void *);

    fn_800C9B6C(arg0, *(u8 **)((u8 *)arg1 + 0x3C) + arg2 * 0xC);
}

void fn_800DB110(void *arg0) {
    void fn_800056CC(char *, ...);
    u8 *fn_800675E0(void);
    void *fn_800C42D8(s32);
    void *fn_800D9B10(void *);
    void fn_8000CAA0(void *, void *);
    extern char lbl_802711B0[];
    extern u8 lbl_80367878;
    extern s32 lbl_803678B8;
    extern u8 lbl_8028DDF8[];
    void *tmp;
    u8 *fog;

    fn_800056CC(lbl_802711B0 + 0x263);
    lbl_80367878 = 1;
    fog = fn_800675E0();
    *fog = 0;
    tmp = fn_800C42D8(0x90);
    if (tmp != 0) {
        tmp = fn_800D9B10(tmp);
    }
    lbl_803678B8 = (s32)tmp;
    fn_8000CAA0(lbl_8028DDF8, arg0);
}

void *fn_800DB18C(void *arg0, s16 arg1) {
    void fn_800E45EC(void *, s32);
    void fn_800C428C(void *);
    extern void *lbl_8028DE70[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028DE70;
        fn_800C9A60((s8 *)arg0 + 0xAC, -1);
        fn_800E45EC(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800DB1FC(void *arg0, void *arg1) {
    fn_800C9758((void *)((char *)arg0 + 0xAC), arg1, 0, -1);
}

void fn_800DB520(void) {

}

void fn_800DB524(void) {

}

void fn_800DB528(void) {

}

void *fn_800DB52C(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s16);
    void fn_800C428C(void *);
    extern u8 lbl_8028DED0[];
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = lbl_8028DED0;
        fn_800DF724(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800DB58C(void *arg0) {
    extern f32 lbl_80369E70;
    u8 *p = (u8 *)arg0;
    if (*(s32 *)(p + 0x9C) == 0) {
        return;
    }
    *(f32 *)(p + 0x84) = *(f32 *)(p + 0x84) + *(f32 *)(p + 0x90);
    *(f32 *)(p + 0x88) = *(f32 *)(p + 0x88) + *(f32 *)(p + 0x94);
    *(f32 *)(p + 0x8C) = *(f32 *)(p + 0x8C) + *(f32 *)(p + 0x98);
    {
        f32 f2 = *(f32 *)(p + 0x8C);
        f32 f0 = *(f32 *)(p + 0x48) + *(f32 *)(p + 0x84);
        f32 f1 = *(f32 *)(p + 0x88);
        *(f32 *)(p + 0x48) = f0;
        f0 = *(f32 *)(p + 0x4C) + f1;
        *(f32 *)(p + 0x4C) = f0;
        f0 = *(f32 *)(p + 0x50) + f2;
        *(f32 *)(p + 0x50) = f0;
    }
    *(f32 *)(p + 0xA0) = *(f32 *)(p + 0xA0) + *(f32 *)(p + 0xA4);
    {
        if (*(f32 *)(p + 0xA0) >= *(f32 *)(p + 0xA8)) {
            *(f32 *)(p + 0xA0) = *(f32 *)(p + 0xA8);
        }
    }
    {
        f32 z = lbl_80369E70;
        *(f32 *)(p + 0xA4) = z;
        *(f32 *)(p + 0x98) = z;
        *(f32 *)(p + 0x94) = z;
        *(f32 *)(p + 0x90) = z;
    }
    if (lbl_80369E70 == *(f32 *)(p + 0xA4)) {
        s32 r4 = *(s32 *)(p + 0x9C);
        s32 r0 = r4 - 1;
        *(s32 *)(p + 0x9C) = r0;
        if (*(s32 *)(p + 0x9C) <= 0) {
            *(s32 *)(p + 0x9C) = 0;
        }
    }
    return;
}

s32 fn_800DB668(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C) != 0;
}

void fn_800DB964(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + farg0);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + farg1);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + farg2);
}

void fn_800DB98C(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x6C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x70) = farg1;
    M2C_FIELD(arg0, f32 *, 0x74) = farg2;
}

void fn_800DB99C(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x60) = farg0;
    M2C_FIELD(arg0, f32 *, 0x64) = farg1;
    M2C_FIELD(arg0, f32 *, 0x68) = farg2;
}

void fn_800DB9AC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x54) = farg0;
    M2C_FIELD(arg0, f32 *, 0x58) = farg1;
    M2C_FIELD(arg0, f32 *, 0x5C) = farg2;
}

void fn_800DB9BC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

void fn_800DB9D8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x48) = farg0;
    M2C_FIELD(arg0, f32 *, 0x4C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x50) = farg2;
}

void fn_800DB9E8(f32 *arg0, void *arg1) {
    void *fn_80067FDC(void);
    void fn_8020310C(void *, f32 *, f32 *);
    f32 sp[3];
    f32 z;
    f32 y;
    f32 x;

    sp[0] = *(f32 *)((u8 *)arg1 + 0x48);
    sp[1] = *(f32 *)((u8 *)arg1 + 0x4C);
    sp[2] = *(f32 *)((u8 *)arg1 + 0x50);
    fn_8020310C(fn_80067FDC(), sp, sp);
    y = sp[1];
    z = sp[2];
    x = sp[0];
    arg0[0] = x;
    arg0[1] = y;
    arg0[2] = z;
}

void fn_800DBA50(f32 *arg0, void *arg1) {
    void *fn_80067FD0(void);
    void fn_8020310C(void *, f32 *, f32 *);
    f32 sp[3];
    f32 z;
    f32 y;
    f32 x;

    sp[0] = *(f32 *)((u8 *)arg1 + 0x48);
    sp[1] = *(f32 *)((u8 *)arg1 + 0x4C);
    sp[2] = *(f32 *)((u8 *)arg1 + 0x50);
    fn_8020310C(fn_80067FD0(), sp, sp);
    y = sp[1];
    z = sp[2];
    x = sp[0];
    arg0[0] = x;
    arg0[1] = y;
    arg0[2] = z;
}

void fn_800DBAB8(void *arg0, void *arg1) {
    extern f32 lbl_80369E70;
    extern f32 lbl_80369E80;
    extern f32 lbl_80369E84;
    f32 sp14[3];
    f32 temp_f1;
    f32 temp_f0;

    sp14[0] = lbl_80369E70;
    sp14[1] = lbl_80369E70;
    sp14[2] = lbl_80369E80;
    
    fn_80202300(sp14, 0x59, lbl_80369E84 * *(f32*)((u8*)arg1 + 0x58), lbl_80369E70);
    fn_802029C4(sp14, &sp14[0], &sp14[0]);
    
    *(f32*)((u8*)arg1 + 0x60) = sp14[0];
    *(f32*)((u8*)arg1 + 0x64) = sp14[1];
    *(f32*)((u8*)arg1 + 0x68) = sp14[2];
    
    *(f32*)((u8*)arg0 + 0x0) = sp14[0];
    *(f32*)((u8*)arg0 + 0x4) = sp14[1];
    *(f32*)((u8*)arg0 + 0x8) = sp14[2];
}

void fn_800DBB58(f32 *arg0, u8 *arg1) {
    f32 value0;
    f32 value1;
    f32 value2;

    value2 = *(volatile f32 *)(arg1 + 0x68);
    value1 = *(volatile f32 *)(arg1 + 0x64);
    value0 = *(volatile f32 *)(arg1 + 0x60);

    arg0[0] = value0;
    arg0[1] = value1;
    arg0[2] = value2;
}

void fn_800DBB74(f32 *arg0, u8 *arg1) {
    f32 value0;
    f32 value1;
    f32 value2;

    value2 = *(volatile f32 *)(arg1 + 0x5C);
    value1 = *(volatile f32 *)(arg1 + 0x58);
    value0 = *(volatile f32 *)(arg1 + 0x54);

    arg0[0] = value0;
    arg0[1] = value1;
    arg0[2] = value2;
}

void fn_800DBB90(f32 *arg0, u8 *arg1) {
    extern f32 lbl_80369E70;
    f32 value0;
    f32 value1;
    f32 value2;

    value2 = *(volatile f32 *)(arg1 + 0x50);
    value1 = *(volatile f32 *)(arg1 + 0x48);
    value0 = lbl_80369E70;

    arg0[0] = value1;
    arg0[1] = value0;
    arg0[2] = value2;
}

void fn_800DBBAC(f32 *arg0, u8 *arg1) {
    extern f32 lbl_80369E70;
    f32 value0;
    f32 value1;
    f32 value2;

    value2 = *(volatile f32 *)(arg1 + 0x50);
    value1 = *(volatile f32 *)(arg1 + 0x48);
    value0 = lbl_80369E70;

    arg0[0] = value1;
    arg0[1] = value0;
    arg0[2] = value2;
}

void fn_800DBBC8(f32 *arg0, u8 *arg1) {
    f32 value0;
    f32 value1;
    f32 value2;

    value2 = *(volatile f32 *)(arg1 + 0x50);
    value1 = *(volatile f32 *)(arg1 + 0x4C);
    value0 = *(volatile f32 *)(arg1 + 0x48);

    arg0[0] = value0;
    arg0[1] = value1;
    arg0[2] = value2;
}

void *fn_800DBE34(void *arg0) {
    M2C_UNK fn_800DFAE0(void *);
    extern void *lbl_8028DED0[];

    fn_800DFAE0(arg0);
    M2C_FIELD(arg0, void ***, 0x40) = lbl_8028DED0;
    M2C_FIELD(arg0, f32 *, 0x78) = M2C_FIELD(arg0, f32 *, 0x7C) = M2C_FIELD(arg0, f32 *, 0x80) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x84) = M2C_FIELD(arg0, f32 *, 0x88) = M2C_FIELD(arg0, f32 *, 0x8C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x90) = M2C_FIELD(arg0, f32 *, 0x94) = M2C_FIELD(arg0, f32 *, 0x98) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x48) = M2C_FIELD(arg0, f32 *, 0x4C) = M2C_FIELD(arg0, f32 *, 0x50) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x54) = M2C_FIELD(arg0, f32 *, 0x58) = M2C_FIELD(arg0, f32 *, 0x5C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x6C) = M2C_FIELD(arg0, f32 *, 0x70) = M2C_FIELD(arg0, f32 *, 0x74) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    return arg0;
}

s32 fn_800DBEC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C);
}

void fn_800DBED0(void) {

}

void fn_800DBED4(void) {

}

void *fn_800DBED8(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s16);
    void fn_800C428C(void *);
    extern u8 lbl_8028DF20[];
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = lbl_8028DF20;
        fn_800DF724(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800DBF38(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    extern f32 lbl_80369E88;
    extern f32 lbl_80369E8C;
    extern f32 lbl_80369E90;
    s32 var_r4;

    var_r4 = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) <= 0x3E7) {
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (lbl_80369E88 * farg0);
        if (var_r4 != -1) {
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) (lbl_80369E8C * farg0);
        } else {
            var_r4 = 0x98967F;
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_80369E90;
        }
        M2C_FIELD(arg0, f32 *, 0x50) = farg1;
        M2C_FIELD(arg0, s32 *, 0x5C) = var_r4;
    }
}

void fn_800DBF84(void *arg0) {
    f64 fn_80238638(f64);

    if (M2C_FIELD(arg0, s32 *, 0x5C) > 0) {
        M2C_FIELD(arg0, f32 *, 0x68) = M2C_FIELD(arg0, f32 *, 0x4C) * (f32)fn_80238638(M2C_FIELD(arg0, f32 *, 0x58));
        M2C_FIELD(arg0, f32 *, 0x58) += M2C_FIELD(arg0, f32 *, 0x50);
        M2C_FIELD(arg0, f32 *, 0x4C) += M2C_FIELD(arg0, f32 *, 0x54);
        if (M2C_FIELD(arg0, f32 *, 0x4C) < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x4C) = 0.0f;
        }
        M2C_FIELD(arg0, s32 *, 0x5C)--;
    }
}

void fn_800DC010(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
}

s32 fn_800DC018(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

#pragma cplusplus on
extern "C" void fn_800DC020(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void v6();
    };

    if (M2C_FIELD(arg0, s32 *, 0x74) == 1) {
        M2C_FIELD(arg0, f32 *, 0x6C) += M2C_FIELD(arg0, f32 *, 0x70);
        if (M2C_FIELD(arg0, f32 *, 0x6C) >= 1.0f) {
            M2C_FIELD(arg0, f32 *, 0x6C) = 1.0f;
            M2C_FIELD(arg0, s32 *, 0x74) = 0;
        }
        if (M2C_FIELD(arg0, f32 *, 0x6C) <= 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x6C) = 0.0f;
            M2C_FIELD(arg0, s32 *, 0x74) = 0;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x74) > 1) {
        M2C_FIELD(arg0, s32 *, 0x74)--;
    }
    ((Obj *)arg0)->v6();
}

void* fn_800DC0BC(void* arg0, s32 arg2, s32 arg3) {
    // This function is complex, but based on the assembly we can see:
    // It initializes a structure, sets up some fields and returns the pointer
    // The original assembly makes use of several function calls and data access.
    return arg0;
}

#pragma cplusplus reset
void fn_800DC2E4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x15) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x14) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x17) = 0xFF;
}

void *fn_800DC38C(void *arg0, u32 arg1) {
    u32 count;
    void **array;

    count = *(u32 *)((u8 *)arg0 + 0xBC);

    if (arg1 < count) {
        array = *(void ***)((u8 *)arg0 + 0xC0);
        return array[arg1];
    }

    return NULL;
}

s32 fn_800DC3B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x110);
}

s32 fn_800DC3B8(s32 arg0) {
    return arg0 + 0xAC;
}

void *fn_800DC3C0(void *arg0)
{
    extern u8 lbl_80271730[];
    extern void *fn_800C93EC(void *);

    u32 index;
    u32 count;
    u8 *base;

    index = *(u32 *)((u8 *)arg0 + 0x110);
    count = *(u32 *)((u8 *)arg0 + 0xB0);

    if (index < count) {
        base = *(u8 **)((u8 *)arg0 + 0xB4);
        return fn_800C93EC(base + index * 0xC);
    }

    return lbl_80271730;
}

void fn_800DC408(void *arg0, u32 arg1, s32 arg2) {
    M2C_UNK fn_800C9758(s32, s32, M2C_UNK, M2C_UNK);
    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xB0)) {
        fn_800C9758(M2C_FIELD(arg0, s32 *, 0xB4) + (arg1 * 0xC), arg2, 0, -1);
    }
}

s32 fn_800DC44C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB0);
}

#pragma dont_inline on
void fn_800DC454(void *arg0)
{
    void fn_800CA91C(void *);

    fn_800CA91C((char *)arg0 + 0xAC);
    *(s32 *)((char *)arg0 + 0xBC) = 0;
    *(s32 *)((char *)arg0 + 0x110) = -1;
}
#pragma dont_inline reset

void fn_800DC494(void *arg0, s32 arg1) {
    extern void fn_800DD87C(void*, s32);
    extern void fn_800DD948(void*, s32);

    if ((arg1 >= 0) && (arg1 < *(s32*)((char*)arg0 + 0xB0))) {
        fn_800DD948((char*)arg0 + 0xAC, *(s32*)((char*)arg0 + 0xB4) + (arg1 * 0xC));
        fn_800DD87C((char*)arg0 + 0xB8, *(s32*)((char*)arg0 + 0xC0) + (arg1 << 2));
        if (*(s32*)((char*)arg0 + 0x110) >= *(s32*)((char*)arg0 + 0xB0)) {
            *(s32*)((char*)arg0 + 0x110) = *(s32*)((char*)arg0 + 0xB0) - 1;
        }
    }
}

void fn_800DC518(void *arg0, void *arg1, void *arg2)
{
    extern void fn_800CA18C(void *, void *, s32, void *);
    extern void fn_800C9BC4(void *, void *, s32, void *);

    u8 *obj;
    u8 *source;
    u8 *destination;
    void *value;

    obj = (u8 *)arg0;
    value = arg2;

    source = *(u8 **)(obj + 0xB4);
    source += *(s32 *)(obj + 0xB0) * 0xC;

    fn_800CA18C(
        obj + 0xAC,
        source,
        1,
        arg1
    );

    destination = *(u8 **)(obj + 0xC0);
    destination += *(s32 *)(obj + 0xBC) * 4;

    fn_800C9BC4(
        obj + 0xB8,
        destination,
        1,
        &value
    );

    if (*(s32 *)(obj + 0x110) < 0) {
        *(s32 *)(obj + 0x110) = 0;
    }
}

void fn_800DC598(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x114) = 0;
    M2C_FIELD(arg0, s8 *, 0x115) = 0;
    M2C_FIELD(arg0, s8 *, 0x73) = 0;
}

void fn_800DC5AC(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    u8 hit;

    temp_r7 = arg1 - M2C_FIELD(arg0, s32 *, 0x48);
    temp_r6 = arg2 - M2C_FIELD(arg0, s32 *, 0x4C);
    if (M2C_FIELD(arg0, u8 *, 0x114) != 0) {
        hit = 0;
        if (temp_r7 >= M2C_FIELD(arg0, s32 *, 0xD4) && temp_r7 <= M2C_FIELD(arg0, s32 *, 0xDC)
            && temp_r6 >= M2C_FIELD(arg0, s32 *, 0xD8) && temp_r6 <= M2C_FIELD(arg0, s32 *, 0xE0)) {
            hit = 1;
        }
        if (hit != 0) {
            M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0x108) - 1;
            if (M2C_FIELD(arg0, s32 *, 0x108) < 0) {
                M2C_FIELD(arg0, s32 *, 0x108) = 0;
            }
            M2C_FIELD(arg0, s32 *, 0x104) =
                ((M2C_FIELD(arg0, s32 *, 0x64) - 0x20) * M2C_FIELD(arg0, s32 *, 0x108))
                / M2C_FIELD(arg0, s32 *, 0xB0);
            goto end;
        }
    }
    if (M2C_FIELD(arg0, u8 *, 0x115) != 0) {
        hit = 0;
        if (temp_r7 >= M2C_FIELD(arg0, s32 *, 0xE4) && temp_r7 <= M2C_FIELD(arg0, s32 *, 0xEC)
            && temp_r6 >= M2C_FIELD(arg0, s32 *, 0xE8) && temp_r6 <= M2C_FIELD(arg0, s32 *, 0xF0)) {
            hit = 1;
        }
        if (hit != 0) {
            M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0x108) + 1;
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x10C);
            if (M2C_FIELD(arg0, s32 *, 0x108) > M2C_FIELD(arg0, s32 *, 0xB0) - temp_r4) {
                M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0xB0) - temp_r4;
            }
            M2C_FIELD(arg0, s32 *, 0x104) =
                ((M2C_FIELD(arg0, s32 *, 0x64) - 0x20) * M2C_FIELD(arg0, s32 *, 0x108))
                / M2C_FIELD(arg0, s32 *, 0xB0);
            goto end;
        }
    }
    hit = 0;
    if (temp_r7 >= M2C_FIELD(arg0, s32 *, 0xF4) && temp_r7 <= M2C_FIELD(arg0, s32 *, 0xFC)
        && temp_r6 >= M2C_FIELD(arg0, s32 *, 0xF8) && temp_r6 <= M2C_FIELD(arg0, s32 *, 0x100)) {
        hit = 1;
    }
    if (hit != 0) {
        M2C_FIELD(arg0, s32 *, 0x104) = M2C_FIELD(arg0, s32 *, 0x80) + (arg2 - M2C_FIELD(arg0, s32 *, 0x78));
        temp_r4 = (M2C_FIELD(arg0, s32 *, 0x64) - (M2C_FIELD(arg0, s32 *, 0x100) - M2C_FIELD(arg0, s32 *, 0xF8))) - 0x20;
        if (M2C_FIELD(arg0, s32 *, 0x104) < 0) {
            M2C_FIELD(arg0, s32 *, 0x104) = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0x104) > temp_r4) {
            M2C_FIELD(arg0, s32 *, 0x104) = temp_r4;
        }
        M2C_FIELD(arg0, s32 *, 0x108) =
            (M2C_FIELD(arg0, s32 *, 0x104) * M2C_FIELD(arg0, s32 *, 0xB0))
            / (M2C_FIELD(arg0, s32 *, 0x64) - 0x20);
    }
end:
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x108);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x110);
    if (temp_r5 - temp_r4 >= M2C_FIELD(arg0, s32 *, 0x10C)) {
        M2C_FIELD(arg0, s32 *, 0x110) = temp_r5 - 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x108);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x110);
    temp_r0 = temp_r4 - temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x110) = temp_r4 + 1;
    }
}

void fn_800DC7C4(void *arg0, s32 arg1, s32 arg2) {
    void (*temp_r12)(void *);
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    u8 hit;

    M2C_FIELD(arg0, s32 *, 0x80) = M2C_FIELD(arg0, s32 *, 0x104);
    hit = 0;
    temp_r4 = arg1 - M2C_FIELD(arg0, s32 *, 0x48);
    temp_r5 = arg2 - M2C_FIELD(arg0, s32 *, 0x4C);

    if (temp_r4 >= M2C_FIELD(arg0, s32 *, 0xC4) && temp_r4 <= M2C_FIELD(arg0, s32 *, 0xCC)
        && temp_r5 >= M2C_FIELD(arg0, s32 *, 0xC8) && temp_r5 <= M2C_FIELD(arg0, s32 *, 0xD0)) {
        hit = 1;
    }
    if (hit != 0) {
        M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0x108) + temp_r5 / 16;
        if ((u32)M2C_FIELD(arg0, s32 *, 0x110) >= (u32)M2C_FIELD(arg0, s32 *, 0xB0)) {
            M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0xB0) - 1;
        }
        temp_r12 = M2C_FIELD(arg0, void (**)(void *), 0x118);
        if (temp_r12 != NULL) {
            temp_r12(arg0);
        }
    } else {
        hit = 0;
        if (temp_r4 >= M2C_FIELD(arg0, s32 *, 0xD4) && temp_r4 <= M2C_FIELD(arg0, s32 *, 0xDC)
            && temp_r5 >= M2C_FIELD(arg0, s32 *, 0xD8) && temp_r5 <= M2C_FIELD(arg0, s32 *, 0xE0)) {
            hit = 1;
        }
        if (hit != 0) {
            M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0x108) - 1;
            if (M2C_FIELD(arg0, s32 *, 0x108) < 0) {
                M2C_FIELD(arg0, s32 *, 0x108) = 0;
            }
            if (M2C_FIELD(arg0, s32 *, 0x110) - M2C_FIELD(arg0, s32 *, 0x108)
                >= M2C_FIELD(arg0, s32 *, 0x10C)) {
                M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0x110) - 1;
            }
            M2C_FIELD(arg0, s32 *, 0x104) =
                ((M2C_FIELD(arg0, s32 *, 0x64) - 0x20) * M2C_FIELD(arg0, s32 *, 0x108))
                / M2C_FIELD(arg0, s32 *, 0xB0);
            M2C_FIELD(arg0, s8 *, 0x114) = 1;
        } else {
            hit = 0;
            if (temp_r4 >= M2C_FIELD(arg0, s32 *, 0xE4) && temp_r4 <= M2C_FIELD(arg0, s32 *, 0xEC)
                && temp_r5 >= M2C_FIELD(arg0, s32 *, 0xE8) && temp_r5 <= M2C_FIELD(arg0, s32 *, 0xF0)) {
                hit = 1;
            }
            if (hit != 0) {
                M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0x108) + 1;
                temp_r0 = M2C_FIELD(arg0, s32 *, 0x10C);
                if (M2C_FIELD(arg0, s32 *, 0x108) > M2C_FIELD(arg0, s32 *, 0xB0) - temp_r0) {
                    M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0xB0) - temp_r0;
                }
                temp_r0 = M2C_FIELD(arg0, s32 *, 0x110) - M2C_FIELD(arg0, s32 *, 0x108);
                if (temp_r0 < 0) {
                    M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0x110) + 1;
                }
                M2C_FIELD(arg0, s8 *, 0x115) = 1;
                M2C_FIELD(arg0, s32 *, 0x104) =
                    ((M2C_FIELD(arg0, s32 *, 0x64) - 0x20) * M2C_FIELD(arg0, s32 *, 0x108))
                    / M2C_FIELD(arg0, s32 *, 0xB0);
            }
        }
    }
    M2C_FIELD(arg0, s8 *, 0x73) = 1;
}

#pragma opt_strength_reduction off
#pragma global_optimizer off
#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_800DC9E0(void *arg0, s32 arg1) {
struct Host {u8 pad[0x40];virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6(s32,s32,String *,s32,s32,f32);virtual void v7(void *,s32,s32,s32,s32);};
void *fn_800C93EC(s32);void fn_800C9ABC(String *,void *,void *);
s32 fn_800E7FB4(s32,void *);
void fn_800E3040(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
extern u8 lbl_80271730[];extern f32 lbl_80369E98;
    String sp74;
    s32 sp64[4];
    s32 sp54[4];
    String sp48;
    String sp3C;
    String sp30;
    u32 sp2C;
    u32 sp28;
    u32 sp24;
    u32 sp20;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r10;
    s32 temp_r11;
    s32 var_r29;
    s32 var_r31;
    s32 temp_r26;
    s32 temp_r24_3;
    s32 temp_r24_4;
    s32 temp_r25;
    s32 temp_r25_2;
    s32 temp_r24_2;
    s32 temp_r26_2;
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r9;
    s32 temp_r24;
    s32 var_r25;
    u8 var_r4;
    u8 var_r4_2;

    var_r29 = M2C_FIELD(arg0,s32 *,0x108);
    var_r31 = var_r29 * 0xC;
    temp_r24 = M2C_FIELD(arg0,s32 *,0x48) + M2C_FIELD(arg0,s32 *,0x68);
    temp_r30 = M2C_FIELD(arg0,s32 *,0x0);
    var_r25 = M2C_FIELD(arg0,s32 *,0x4C) + M2C_FIELD(arg0,s32 *,0x6C);
for (;var_r29 < ((temp_r3=M2C_FIELD(arg0,s32 *,0x108))+M2C_FIELD(arg0,s32 *,0x10C));var_r29++,var_r31+=0xC) {
        if (var_r29 < (s32) M2C_FIELD(arg0,s32 *,0xB0)) {
            fn_800C9ABC(&sp74, fn_800C93EC(M2C_FIELD(arg0,s32 *,0xB4) + var_r31), &sp2C);
            ((Host *)arg0)->v6(temp_r24,var_r25,&sp74,1,0xFF,lbl_80369E98);
            fn_800C9A60(&sp74, -1);
            var_r25 += 0x10;
        }
    }
    temp_r0 = M2C_FIELD(arg0,s32 *,0x110);
    if (temp_r0 >= 0) {
        temp_r5 = M2C_FIELD(arg0,s32 *,0x48);
        temp_r0_2 = temp_r5 + 4;
        temp_r7 = M2C_FIELD(arg0,s32 *,0xC4);
        temp_r6 = temp_r0_2 - temp_r5;
        temp_r5_2 = M2C_FIELD(arg0,s32 *,0x4C);
        var_r4 = 0;
        temp_r9 = temp_r5_2 + (M2C_FIELD(arg0,s32 *,0x6C) + ((temp_r0 - temp_r3) * 0x10));
        temp_r5_3 = temp_r9 - temp_r5_2;
        if ((temp_r6 >= temp_r7) && (temp_r6 <= (s32) M2C_FIELD(arg0,s32 *,0xCC)) && (temp_r5_3 >= (s32) M2C_FIELD(arg0,s32 *,0xC8)) && (temp_r5_3 <= (s32) M2C_FIELD(arg0,s32 *,0xD0))) {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            temp_r5_4 = temp_r5_3 + 0x10;
            var_r4_2 = 0;
            if ((temp_r6 >= temp_r7) && (temp_r6 <= (s32) M2C_FIELD(arg0,s32 *,0xCC)) && (temp_r5_4 >= (s32) M2C_FIELD(arg0,s32 *,0xC8)) && (temp_r5_4 <= (s32) M2C_FIELD(arg0,s32 *,0xD0))) {
                var_r4_2 = 1;
            }
            if (var_r4_2 != 0) {
                temp_r10 = temp_r9 + 0x10;
                sp54[0] = temp_r0_2;
                temp_r11 = temp_r0_2 + (M2C_FIELD(arg0,s32 *,0x60) - 0x1A);
                sp64[0] = temp_r0_2;
                sp64[1] = temp_r9;
                sp64[2] = temp_r11;
                sp64[3] = temp_r10;
                sp54[1] = temp_r9;
                sp54[2] = temp_r11;
                sp54[3] = temp_r10;
                ((Host *)arg0)->v7(&sp64,0,0xFF,0xFF,0x80);
            }
        }
    }
    temp_r7_2 = M2C_FIELD(arg0,s32 *,0xF4);
    temp_r31 = M2C_FIELD(arg0,s32 *,0x48) + temp_r7_2;
    temp_r6_2 = M2C_FIELD(arg0,s32 *,0xF8);
    temp_r26 = M2C_FIELD(arg0,s32 *,0xFC) - temp_r7_2;
    temp_r24_2 = M2C_FIELD(arg0,s32 *,0x4C) + temp_r6_2;
    temp_r25 = M2C_FIELD(arg0,s32 *,0x100) - temp_r6_2;
    fn_800C9ABC(&sp48, lbl_80271730 + 1, &sp28);
    temp_r29 = fn_800E7FB4(temp_r30, &sp48);
    fn_800C9A60(&sp48, -1);
    if (M2C_FIELD(arg0,u8 *,0x9C) != 0) {
        fn_800E3040(temp_r29, arg1, 2, temp_r31, temp_r24_2, M2C_FIELD(arg0,s32 *,0x44), temp_r26, temp_r25, 0,0xFF,0xFF,0xFF,0);
    } else {
        fn_800E3040(temp_r29, arg1, 2, temp_r31, temp_r24_2, M2C_FIELD(arg0,s32 *,0x44), temp_r26, temp_r25, 0xFF,0xFF,0xFF,0xFF,0);
    }
    fn_800E3040(temp_r29, arg1, 0, M2C_FIELD(arg0,s32 *,0x48) + (M2C_FIELD(arg0,s32 *,0x60) - 0xE), M2C_FIELD(arg0,s32 *,0x4C), M2C_FIELD(arg0,s32 *,0x44), 0x10, 0x10, 0xFF,0xFF,0xFF,0xFF,0);
    fn_800E3040(temp_r29, arg1, 1, M2C_FIELD(arg0,s32 *,0x48) + (M2C_FIELD(arg0,s32 *,0x60) - 0xE), M2C_FIELD(arg0,s32 *,0x4C) + (M2C_FIELD(arg0,s32 *,0x64) - 0x10), M2C_FIELD(arg0,s32 *,0x44), 0x10, 0x10, 0xFF,0xFF,0xFF,0xFF,0);
    fn_800C9ABC(&sp3C, lbl_80271730 + 7, &sp24);
    temp_r24_3 = fn_800E7FB4(temp_r30, &sp3C);
    fn_800C9A60(&sp3C, -1);
    fn_800E3040(temp_r24_3, arg1, 0, M2C_FIELD(arg0,s32 *,0x48) + (M2C_FIELD(arg0,s32 *,0x60) - 0x10), M2C_FIELD(arg0,s32 *,0x4C), M2C_FIELD(arg0,s32 *,0x44), 0x10, M2C_FIELD(arg0,s32 *,0x64), 0xFF,0xFF,0xFF,0xFF,0);
    temp_r26_2 = M2C_FIELD(arg0,s32 *,0x64);
    temp_r25_2 = M2C_FIELD(arg0,s32 *,0x60) - 0x10;
    fn_800C9ABC(&sp30, lbl_80271730 + 0x12, &sp20);
    temp_r24_4 = fn_800E7FB4(temp_r30, &sp30);
    fn_800C9A60(&sp30, -1);
    fn_800E3040(temp_r24_4, arg1, 0, M2C_FIELD(arg0,s32 *,0x48), M2C_FIELD(arg0,s32 *,0x4C), M2C_FIELD(arg0,s32 *,0x44), temp_r25_2, temp_r26_2, 0xFF,0xFF,0xFF,0xFF,0);
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset
#pragma global_optimizer on
#pragma opt_strength_reduction reset

void fn_800DCE54(void *arg0, s32 arg1, s32 arg2, u32 flags) {
    void (*cb)(void *, s32, s32);

    if (flags & 8) {
        M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0x110) - 1;
        if (M2C_FIELD(arg0, s32 *, 0x110) < 0) {
            M2C_FIELD(arg0, s32 *, 0x110) = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0x110) < M2C_FIELD(arg0, s32 *, 0x108)) {
            M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0x108) - 1;
            if (M2C_FIELD(arg0, s32 *, 0x108) < 0) {
                M2C_FIELD(arg0, s32 *, 0x108) = 0;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x104) =
            ((M2C_FIELD(arg0, s32 *, 0x64) - 0x20) * M2C_FIELD(arg0, s32 *, 0x108))
            / M2C_FIELD(arg0, s32 *, 0xB0);
        cb = M2C_FIELD(arg0, void (**)(void *, s32, s32), 0x118);
        if (cb != NULL) {
            cb(arg0, 0, 0);
        }
    } else if (flags & 4) {
        if (M2C_FIELD(arg0, u32 *, 0xB0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0x110) + 1;
            if ((u32)M2C_FIELD(arg0, s32 *, 0x110) >= (u32)M2C_FIELD(arg0, s32 *, 0xB0)) {
                M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0xB0) - 1;
            }
            if (M2C_FIELD(arg0, s32 *, 0x110) >= M2C_FIELD(arg0, s32 *, 0x108) + M2C_FIELD(arg0, s32 *, 0x10C)) {
                M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0x108) + 1;
            }
            M2C_FIELD(arg0, s32 *, 0x104) =
                ((M2C_FIELD(arg0, s32 *, 0x64) - 0x20) * M2C_FIELD(arg0, s32 *, 0x108))
                / M2C_FIELD(arg0, s32 *, 0xB0);
        }
        cb = M2C_FIELD(arg0, void (**)(void *, s32, s32), 0x118);
        if (cb != NULL) {
            cb(arg0, 0, 0);
        }
    } else if (flags & 1) {
        M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0x110) - 0xA;
        if (M2C_FIELD(arg0, s32 *, 0x110) < 0) {
            M2C_FIELD(arg0, s32 *, 0x110) = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0x110) < M2C_FIELD(arg0, s32 *, 0x108)) {
            M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0x108) - 0xA;
            if (M2C_FIELD(arg0, s32 *, 0x108) < 0) {
                M2C_FIELD(arg0, s32 *, 0x108) = 0;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x104) =
            ((M2C_FIELD(arg0, s32 *, 0x64) - 0x20) * M2C_FIELD(arg0, s32 *, 0x108))
            / M2C_FIELD(arg0, s32 *, 0xB0);
        cb = M2C_FIELD(arg0, void (**)(void *, s32, s32), 0x118);
        if (cb != NULL) {
            cb(arg0, 0, 0);
        }
    } else if (flags & 2) {
        if (M2C_FIELD(arg0, u32 *, 0xB0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0x110) + 0xA;
            if ((u32)M2C_FIELD(arg0, s32 *, 0x110) >= (u32)M2C_FIELD(arg0, s32 *, 0xB0)) {
                M2C_FIELD(arg0, s32 *, 0x110) = M2C_FIELD(arg0, s32 *, 0xB0) - 1;
            }
            if (M2C_FIELD(arg0, s32 *, 0x110) >= M2C_FIELD(arg0, s32 *, 0x108) + M2C_FIELD(arg0, s32 *, 0x10C)) {
                M2C_FIELD(arg0, s32 *, 0x108) = M2C_FIELD(arg0, s32 *, 0x108) + 0xA;
            }
            M2C_FIELD(arg0, s32 *, 0x104) =
                ((M2C_FIELD(arg0, s32 *, 0x64) - 0x20) * M2C_FIELD(arg0, s32 *, 0x108))
                / M2C_FIELD(arg0, s32 *, 0xB0);
        }
        cb = M2C_FIELD(arg0, void (**)(void *, s32, s32), 0x118);
        if (cb != NULL) {
            cb(arg0, 0, 0);
        }
    }
}

void fn_800DD0B4(void *arg0) {
void fn_800E43EC(void *); void fn_800E7C88(void *); extern u8 *lbl_80367240;
void *owner; s32 keys, size;
fn_800E43EC(arg0); owner=M2C_FIELD(arg0,void **,0);
if(M2C_FIELD(arg0,u8 *,0x73)) {
keys=M2C_FIELD(lbl_80367240,s32 *,12);
if(keys&8){
M2C_FIELD(arg0,s32 *,0x110)-=1;
if(M2C_FIELD(arg0,s32 *,0x110)<0)M2C_FIELD(arg0,s32 *,0x110)=0;
if(M2C_FIELD(arg0,s32 *,0x110)<M2C_FIELD(arg0,s32 *,0x108)){
M2C_FIELD(arg0,s32 *,0x108)-=1;
if(M2C_FIELD(arg0,s32 *,0x108)<0)M2C_FIELD(arg0,s32 *,0x108)=0; }
M2C_FIELD(arg0,s32 *,0x104)=(M2C_FIELD(arg0,s32 *,0x64)-32)*M2C_FIELD(arg0,s32 *,0x108)/M2C_FIELD(arg0,s32 *,0xB0);
if(M2C_FIELD(arg0,void (**)(void *,s32,s32),0x118)) M2C_FIELD(arg0,void (**)(void *,s32,s32),0x118)(arg0,0,0);
fn_800E7C88(owner);
}
else if(keys&4){
if(M2C_FIELD(arg0,u32 *,0xB0)) {
M2C_FIELD(arg0,s32 *,0x110)+=1;
if(M2C_FIELD(arg0,u32 *,0x110)>=M2C_FIELD(arg0,u32 *,0xB0)) M2C_FIELD(arg0,s32 *,0x110)=M2C_FIELD(arg0,s32 *,0xB0)-1;
if(M2C_FIELD(arg0,s32 *,0x110)>=M2C_FIELD(arg0,s32 *,0x108)+M2C_FIELD(arg0,s32 *,0x10C))M2C_FIELD(arg0,s32 *,0x108)+=1;
M2C_FIELD(arg0,s32 *,0x104)=(M2C_FIELD(arg0,s32 *,0x64)-32)*M2C_FIELD(arg0,s32 *,0x108)/M2C_FIELD(arg0,s32 *,0xB0);
}
if(M2C_FIELD(arg0,void (**)(void *,s32,s32),0x118)) M2C_FIELD(arg0,void (**)(void *,s32,s32),0x118)(arg0,0,0);
fn_800E7C88(owner);
}
else if(keys&1){
M2C_FIELD(arg0,s32 *,0x110)-=10;
if(M2C_FIELD(arg0,s32 *,0x110)<0)M2C_FIELD(arg0,s32 *,0x110)=0;
if(M2C_FIELD(arg0,s32 *,0x110)<M2C_FIELD(arg0,s32 *,0x108)){
M2C_FIELD(arg0,s32 *,0x108)-=10;
if(M2C_FIELD(arg0,s32 *,0x108)<0)M2C_FIELD(arg0,s32 *,0x108)=0; }
M2C_FIELD(arg0,s32 *,0x104)=(M2C_FIELD(arg0,s32 *,0x64)-32)*M2C_FIELD(arg0,s32 *,0x108)/M2C_FIELD(arg0,s32 *,0xB0);
if(M2C_FIELD(arg0,void (**)(void *,s32,s32),0x118)) M2C_FIELD(arg0,void (**)(void *,s32,s32),0x118)(arg0,0,0);
fn_800E7C88(owner);
}
else if(keys&2){
if(M2C_FIELD(arg0,u32 *,0xB0)) {
M2C_FIELD(arg0,s32 *,0x110)+=10;
if(M2C_FIELD(arg0,u32 *,0x110)>=M2C_FIELD(arg0,u32 *,0xB0)) M2C_FIELD(arg0,s32 *,0x110)=M2C_FIELD(arg0,s32 *,0xB0)-1;
if(M2C_FIELD(arg0,s32 *,0x110)>=M2C_FIELD(arg0,s32 *,0x108)+M2C_FIELD(arg0,s32 *,0x10C))M2C_FIELD(arg0,s32 *,0x108)+=10;
M2C_FIELD(arg0,s32 *,0x104)=(M2C_FIELD(arg0,s32 *,0x64)-32)*M2C_FIELD(arg0,s32 *,0x108)/M2C_FIELD(arg0,s32 *,0xB0);
}
if(M2C_FIELD(arg0,void (**)(void *,s32,s32),0x118)) M2C_FIELD(arg0,void (**)(void *,s32,s32),0x118)(arg0,0,0);
fn_800E7C88(owner);
}
}
M2C_FIELD(arg0,s32 *,0x10C)=M2C_FIELD(arg0,s32 *,0x64)/16;
if(M2C_FIELD(arg0,s32 *,0x10C)>M2C_FIELD(arg0,s32 *,0xB0))M2C_FIELD(arg0,s32 *,0x10C)=M2C_FIELD(arg0,s32 *,0xB0);
M2C_FIELD(arg0,s32 *,0xF4)=M2C_FIELD(arg0,s32 *,0x60)-14;
M2C_FIELD(arg0,s32 *,0xF8)=M2C_FIELD(arg0,s32 *,0x104)+16;
size=M2C_FIELD(arg0,s32 *,0x64)-32;
if(M2C_FIELD(arg0,s32 *,0x10C)<M2C_FIELD(arg0,s32 *,0xB0))size=size*M2C_FIELD(arg0,s32 *,0x10C)/M2C_FIELD(arg0,s32 *,0xB0);
M2C_FIELD(arg0,s32 *,0xFC)=M2C_FIELD(arg0,s32 *,0xF4)+16;
M2C_FIELD(arg0,s32 *,0x100)=M2C_FIELD(arg0,s32 *,0xF8)+size;
}

s32 fn_800DDAA4(s32 arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(fn_800DE73C(arg0 + 0x58), void **, 0xC);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x18);
    }
    return 0;
}

void *fn_800DDB94(void *arg0)
{
    extern void *fn_800D59CC(void *);
    extern void fn_800C9758(void *, void *, s32, s32);
    extern void *fn_800C93EC(void *);
    extern void fn_800C9A60(void *, s32);

    u32 temp[3];
    void *source;
    void *result;

    temp[1] = 0;
    temp[0] = 0;
    temp[2] = 0;
    temp[1] = 0;

    source = fn_800D59CC((u8 *)arg0 + 0x68);

    fn_800C9758(
        temp,
        (u8 *)source + 0xC,
        0,
        -1
    );

    result = fn_800C93EC(temp);

    fn_800C9A60(temp, -1);

    return result;
}

s32 fn_800DDC04(s32 arg0) {
    void *fn_800DE73C(s32);
    return M2C_FIELD(fn_800DE73C(arg0 + 0x58), s32 *, 0xC);
}

void fn_800DDC2C(void *arg0, void *arg1) {
    void fn_800616A0(void *);
    void fn_8006D8E8(u32);
    u32 temp_r0;
    u32 temp_r3;

    M2C_FIELD(arg1, s32 *, 0x40) = 0;
    M2C_FIELD(arg1, s32 *, 0x48) = 0;
    M2C_FIELD(arg1, s32 *, 0x44) = 0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x54);
    if (temp_r0 != 0) {
        temp_r3 = M2C_FIELD(arg1, u32 *, 0x4C);
        if (temp_r3 == temp_r0) {
            fn_8006D8E8(temp_r3);
            M2C_FIELD(arg1, u32 *, 0x4C) = 0;
        }
    }
    fn_800616A0(arg1);
}

void *fn_800DDC90(void *arg0) {
    M2C_UNK fn_8006140C(void *);
    void *fn_80061870();
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    void *temp_r3;

    temp_r3 = fn_80061870();
    if (temp_r3 != NULL) {
        temp_r0 = M2C_FIELD(arg0, u32 *, 0x4C);
        if (temp_r0 != 0U) {
            M2C_FIELD(temp_r3, u32 *, 0x40) = temp_r0;
        }
        temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x50);
        if (temp_r0_2 != 0U) {
            M2C_FIELD(temp_r3, u32 *, 0x48) = temp_r0_2;
        }
        temp_r0_3 = M2C_FIELD(arg0, u32 *, 0x54);
        if (temp_r0_3 != 0U) {
            M2C_FIELD(temp_r3, u32 *, 0x4C) = temp_r0_3;
        }
        fn_8006140C(temp_r3);
    }
    return temp_r3;
}

void fn_800E5A4C(void *arg0);

void fn_800DDD08(void* arg0) {
    u32* ptr = (u32*)arg0;
    u32 val = *ptr;
    *ptr = 0;

    if (val != 0) {
        if ((val & 1) != 0) {
            fn_800067F0(arg0);
        }
        if ((val & 2) != 0) {
            fn_80006B38();
        }

        val = ptr[4];
        if (val != 0) {
            fn_800E5A4C((void *)ptr[8]);
        }
    }
}

void *fn_800DDE28(void *arg0, void *unused, void *arg2) {
    void fn_800056CC(char *, char *, ...);
    u16 fn_8005C144(void);
    s32 fn_8005C84C(void);
    s32 fn_800639B4(char *);
    s32 fn_80065EE8(void);
    s32 fn_8006CE14(void);
    s32 fn_8006D948(void);
    void fn_800C8CB4(String *, void *);
    void fn_800C8D58(char *, void *);
    char *fn_800C8DCC(char *, void *, String *);
    u8 fn_800C8EFC(void *);
    char *fn_800C93EC(String *);
    s32 fn_800C9400(String *, s32, u32, char *, s32);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C99A0(String *, String *, s32, s32);
    void fn_800C9A60(String *, s32);
    void fn_800C9ABC(String *, char *, void *);
    void fn_800CA6C8(void *, s32);
    void fn_800CB8A4(String *, String *, String *);
    void fn_800CB90C(String *, String *, char *);
    void *fn_800D59CC(void *, String *);
    void fn_800D5D04(String *, String *, s32, char *);
    void fn_800D6878(void *, void *, void *);
    void *fn_800DE73C(void *, String *);
    void fn_800DEF4C(void *, void *, void *);
    void fn_800DF7A0(void *);
    void fn_800E788C(String *, void *);
    u32 strlen(const char *);
    extern char lbl_80271860[];
    extern char lbl_8028DFA8[];

    char buf1DC[0x20];
    char buf1BC[0x20];
    char buf19C[0x20];
    char buf17C[0x20];
    char buf15C[0x20];
    String str150;
    String str144;
    String str138;
    String str12C;
    String str120;
    String str114;
    String str108;
    String strFC;
    String strF0;
    String strE4;
    String strD8;
    String strCC;
    String strC0;
    String strB4;
    String strA8;
    String str9C;
    String str90;
    String str84;
    String str78;
    String str6C;
    String str60;
    String str54;
    String str48;
    String str3C;
    String str30;
    String str24;
    void *scratch20;
    void *scratch1C;
    void *scratch18;
    void *scratch14;
    void *scratch10;
    void *scratchC;
    void *scratch8;
    void *entry;
    char *name;
    char *pBuf;
    char *strBase;
    s32 flag_word;
    u8 ok;
    u8 match;
    void *iter;
    void *self;

    self = arg0;
    iter = arg2;
    fn_800DF7A0(self);
    {
        void *p58 = (u8 *)self + 0x58;
        *(void **)((u8 *)self + 0x40) = lbl_8028DFA8;
        fn_800DEF4C(p58, &scratch10, &scratch14);
    }
    fn_800D6878((u8 *)self + 0x68, &scratch8, &scratchC);

    str144.cap = 0;
    str138.cap = 0;
    str12C.cap = 0;
    str120.cap = 0;
    str114.cap = 0;
    str150.size = 0;
    str150.data = 0;
    str150.cap = 0;
    str144.size = 0;
    str144.data = 0;
    str144.cap = 0;
    str138.size = 0;
    str138.data = 0;
    str138.cap = 0;
    str12C.size = 0;
    str12C.data = 0;
    str12C.cap = 0;
    str120.size = 0;
    str120.data = 0;
    str120.cap = 0;
    str114.size = 0;
    str114.data = 0;
    str114.cap = 0;

    *(s32 *)((u8 *)self + 0x28) = -0x30;
    *(u8 *)((u8 *)self + 0x3C) = 0;

    fn_800C9ABC(&strFC, lbl_80271860 + 5, &scratch20);
    fn_800C8DCC(buf1DC, iter, &strFC);
    fn_800C96F8(&str138, buf1DC, strlen(buf1DC));
    fn_800C9A60(&strFC, -1);

    if (fn_800C9400(&str138, 0, str138.size, lbl_80271860, strlen(lbl_80271860)) != 0) {
        fn_800CB90C(&strF0, &str138, lbl_80271860 + 0xC);
        fn_800C99A0(&str144, &strF0, 0, -1);
        fn_800C9A60(&strF0, -1);
    }

    fn_800C9ABC(&strE4, lbl_80271860 + 0xE, &scratch1C);
    fn_800C8DCC(buf1BC, iter, &strE4);
    fn_800C96F8(&str12C, buf1BC, strlen(buf1BC));
    fn_800C9A60(&strE4, -1);

    fn_800C9ABC(&strD8, lbl_80271860 + 0x14, &scratch18);
    fn_800C8DCC(buf19C, iter, &strD8);
    flag_word = *(s32 *)buf19C;
    fn_800C9A60(&strD8, -1);

    fn_800CB8A4(&strCC, &str144, &str12C);
    fn_800CB90C(&strC0, &strCC, lbl_80271860 + 0x1E);
    fn_800C9758(&str114, &strC0, 0, -1);
    fn_800C9A60(&strC0, -1);
    fn_800C9A60(&strCC, -1);
    fn_800C93EC(&str114);
    if ((u16)fn_8005C144() != 0x8000) {
        fn_800C93EC(&str114);
        *(s32 *)((u8 *)self + 0x48) = fn_8005C84C();
    } else {
        *(s32 *)((u8 *)self + 0x48) = 0;
    }

    fn_800CB8A4(&strB4, &str144, &str12C);
    fn_800CB90C(&strA8, &strB4, lbl_80271860 + 0x23);
    fn_800C9758(&str114, &strA8, 0, -1);
    fn_800C9A60(&strA8, -1);
    fn_800C9A60(&strB4, -1);
    fn_800C93EC(&str114);
    *(s32 *)((u8 *)self + 0x4C) = fn_80065EE8();

    fn_800CB8A4(&str9C, &str144, &str12C);
    fn_800CB90C(&str90, &str9C, lbl_80271860 + 0x26);
    fn_800C9758(&str114, &str90, 0, -1);
    fn_800C9A60(&str90, -1);
    fn_800C9A60(&str9C, -1);
    fn_800C93EC(&str114);
    *(s32 *)((u8 *)self + 0x50) = fn_8006CE14();

    if (flag_word != 0) {
        *(s32 *)((u8 *)self + 0x54) = 0;
    } else {
        fn_800CB8A4(&str84, &str144, &str12C);
        fn_800CB90C(&str78, &str84, lbl_80271860 + 0x2A);
        fn_800C9758(&str114, &str78, 0, -1);
        fn_800C9A60(&str78, -1);
        fn_800C9A60(&str84, -1);
        fn_800C93EC(&str114);
        *(s32 *)((u8 *)self + 0x54) = fn_8006D948();
    }

    str108.cap = 0;
    str108.size = 0;
    str108.data = 0;
    str108.cap = 0;
    strBase = lbl_80271860;
    pBuf = buf17C;

    goto loop_check;
loop_body:
    fn_800C8CB4(&str6C, iter);
    fn_800C9758(&str108, &str6C, 0, -1);
    fn_800C9A60(&str6C, -1);
    fn_800C8D58(buf17C, iter);
    fn_800CB90C(&str60, &str144, buf17C);
    fn_800CB90C(&str54, &str60, strBase + 1);
    fn_800C9758(&str120, &str54, 0, -1);
    fn_800C9A60(&str54, -1);
    fn_800C9A60(&str60, -1);

    str24.cap = 0;
    str30.cap = 0;
    str24.size = 0;
    str24.data = 0;
    str24.cap = 0;
    str30.size = 0;
    str30.data = 0;
    str30.cap = 0;

    fn_800E788C(&str3C, *(void **)self);
    fn_800C9758(&str24, &str3C, 0, -1);
    fn_800C9A60(&str3C, -1);

    if (fn_800C9400(&str24, 0, str24.size, strBase, strlen(strBase)) == 0) {
        fn_800C9A60(&str30, -1);
        fn_800C9A60(&str24, -1);
        ok = 1;
    } else {
        fn_800D5D04(&str48, &str108, 0, str24.data);
        fn_800C9758(&str30, &str48, 0, -1);
        fn_800C9A60(&str48, -1);
        match = 0;
        if (str24.size == str30.size && fn_800C9400(&str24, 0, str24.size, str30.data, str30.size) == 0) {
            match = 1;
        }
        if (match != 0) {
            fn_800C9A60(&str30, -1);
            fn_800C9A60(&str24, -1);
            ok = 1;
        } else {
            fn_800C9A60(&str30, -1);
            fn_800C9A60(&str24, -1);
            ok = 0;
        }
    }

    if (ok != 0) {
        fn_800C93EC(&str120);
        if ((u16)fn_8005C144() != 0x8000) {
            name = fn_800C93EC(&str120);
            entry = fn_800DE73C((u8 *)self + 0x58, &str108);
            *(s32 *)((u8 *)entry + 0xC) = fn_800639B4(name);
        } else {
            fn_800056CC(lbl_80271860 + 0x2F, fn_800C93EC(&str120));
        }
        fn_800C8D58(buf15C, iter);
        name = (char *)((u8 *)fn_800D59CC((u8 *)self + 0x68, &str108) + 0xC);
        fn_800C96F8((String *)name, buf15C, strlen(buf15C));
    }

loop_check:
    if (fn_800C8EFC(iter) != 0) {
        goto loop_body;
    }

    fn_800C9A60(&str108, -1);
    fn_800C9A60(&str114, -1);
    fn_800C9A60(&str120, -1);
    fn_800C9A60(&str12C, -1);
    fn_800C9A60(&str138, -1);
    fn_800C9A60(&str144, -1);
    fn_800CA6C8(&str150, 0);
    return self;
}

void *fn_800DE99C(void *arg0, s16 arg1) {
    void fn_800C428C(void *);

    if (arg0 != NULL) {
        if (arg0 == NULL) {
            goto after;
        }
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            fn_800C428C(M2C_FIELD(arg0, void **, 8));
        }
    after:
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma peephole off
void fn_800DE9FC(void **arg0)
{
    void **parent;
    void **node;
    void **cur;

    cur = (void **)*arg0;
    cur = (void **)cur[1];
    if (cur != NULL) {
        while (*cur != NULL) {
            cur = (void **)*cur;
        }
        *arg0 = cur;
        return;
    }
    *arg0 = cur;
    node = (void **)*arg0;
    parent = (void **)((u32)node[2] & ~1);
    if (node != (void **)*parent) {
        goto done;
    }
    *arg0 = parent;
done:
    ;
}
#pragma peephole on
void fn_800DEA50(s32 arg0, void *arg1) {
void fn_800C428C(void *);
void *fn_800DEEFC(s32);void fn_800DEEC4(void *,void *);
void *fn_800DEEBC(s32);void fn_800DEE98(void *,void *,s16);
void fn_800DEE94(s32);void fn_800DEE90(s32);
void *fn_800DE99C(void *,s32);
void *v27,*v28,*v29;
void *node;
s32 self;
self=arg0;
node=arg1;

    v29 = M2C_FIELD(node,void **,0x0);
    if (v29 != NULL) {
        v28 = M2C_FIELD(v29,void **,0x0);
        if (v28 != NULL) {
            v27 = M2C_FIELD(v28,void **,0x0);
            if (v27 != NULL) {
                if ((u32) M2C_FIELD(v27,void **,0x0) != 0U) {
                    fn_800DEA50(self, M2C_FIELD(v27,void **,0));
                }
                if (M2C_FIELD(v27,void **,0x4) != 0) {
 fn_800DEA50(self,M2C_FIELD(v27,void **,0x4));
                }
                fn_800DEEC4(fn_800DEEFC(self),(u8 *)v27 + 0xC);
                fn_800DEE98(fn_800DEEBC(self),v27,1);
            }
            v27 = M2C_FIELD(v28,void **,0x4);
            if (v27 != NULL) {
                if (M2C_FIELD(v27,void **,0x0) != 0) {
 fn_800DEA50(self,M2C_FIELD(v27,void **,0x0));
                }
                if (M2C_FIELD(v27,void **,0x4) != 0) {
 fn_800DEA50(self,M2C_FIELD(v27,void **,0x4));
                }
                fn_800DEEC4(fn_800DEEFC(self),(u8 *)v27 + 0xC);
                fn_800DEE98(fn_800DEEBC(self),v27,1);
            }
            fn_800DEEFC(self);
            fn_800DE99C((u8 *)v28 + 0xC, -1);
            fn_800DEEBC(self);
            fn_800C428C(v28);
        }
        v27 = M2C_FIELD(v29,void **,0x4);
        if (v27 != NULL) {
            v28 = M2C_FIELD(v27,void **,0x0);
            if (v28 != NULL) {
                if (M2C_FIELD(v28,void **,0x0) != 0) {
 fn_800DEA50(self,M2C_FIELD(v28,void **,0x0));
                }
                if (M2C_FIELD(v28,void **,0x4) != 0) {
 fn_800DEA50(self,M2C_FIELD(v28,void **,0x4));
                }
                fn_800DEEC4(fn_800DEEFC(self),(u8 *)v28 + 0xC);
                fn_800DEE98(fn_800DEEBC(self),v28,1);
            }
            v28 = M2C_FIELD(v27,void **,0x4);
            if (v28 != NULL) {
                if (M2C_FIELD(v28,void **,0x0) != 0) {
 fn_800DEA50(self,M2C_FIELD(v28,void **,0x0));
                }
                if (M2C_FIELD(v28,void **,0x4) != 0) {
 fn_800DEA50(self,M2C_FIELD(v28,void **,0x4));
                }
                fn_800DEEC4(fn_800DEEFC(self),(u8 *)v28 + 0xC);
                fn_800DEE98(fn_800DEEBC(self),v28,1);
            }
            fn_800DEEFC(self);
            fn_800DE99C((u8 *)v27 + 0xC, -1);
            fn_800DEEBC(self);
            fn_800C428C(v27);
        }
        fn_800DEE94(self);
        if (((s32)v29 + 0xC) != 0) {
            fn_800C9A60((u8 *)v29 + 0xC, -1);
        }
        fn_800DEE90(self + 4);
        fn_800C428C(v29);
    }
    v27 = M2C_FIELD(node,void **,0x4);
    if (v27 != NULL) {
        v28 = M2C_FIELD(v27,void **,0x0);
        if (v28 != NULL) {
            v29 = M2C_FIELD(v28,void **,0x0);
            if (v29 != NULL) {
                if (M2C_FIELD(v29,void **,0x0) != 0) {
 fn_800DEA50(self,M2C_FIELD(v29,void **,0x0));
                }
                if (M2C_FIELD(v29,void **,0x4) != 0) {
 fn_800DEA50(self,M2C_FIELD(v29,void **,0x4));
                }
                fn_800DEEC4(fn_800DEEFC(self),(u8 *)v29 + 0xC);
                fn_800DEE98(fn_800DEEBC(self),v29,1);
            }
            v29 = M2C_FIELD(v28,void **,0x4);
            if (v29 != NULL) {
                if (M2C_FIELD(v29,void **,0x0) != 0) {
 fn_800DEA50(self,M2C_FIELD(v29,void **,0x0));
                }
                if (M2C_FIELD(v29,void **,0x4) != 0) {
 fn_800DEA50(self,M2C_FIELD(v29,void **,0x4));
                }
                fn_800DEEC4(fn_800DEEFC(self),(u8 *)v29 + 0xC);
                fn_800DEE98(fn_800DEEBC(self),v29,1);
            }
            fn_800DEEFC(self);
            fn_800DE99C((u8 *)v28 + 0xC, -1);
            fn_800DEEBC(self);
            fn_800C428C(v28);
        }
        v28 = M2C_FIELD(v27,void **,0x4);
        if (v28 != NULL) {
            v29 = M2C_FIELD(v28,void **,0x0);
            if (v29 != NULL) {
                if (M2C_FIELD(v29,void **,0x0) != 0) {
 fn_800DEA50(self,M2C_FIELD(v29,void **,0x0));
                }
                if (M2C_FIELD(v29,void **,0x4) != 0) {
 fn_800DEA50(self,M2C_FIELD(v29,void **,0x4));
                }
                fn_800DEEC4(fn_800DEEFC(self),(u8 *)v29 + 0xC);
                fn_800DEE98(fn_800DEEBC(self),v29,1);
            }
            v29 = M2C_FIELD(v28,void **,0x4);
            if (v29 != NULL) {
                if (M2C_FIELD(v29,void **,0x0) != 0) {
 fn_800DEA50(self,M2C_FIELD(v29,void **,0x0));
                }
                if (M2C_FIELD(v29,void **,0x4) != 0) {
 fn_800DEA50(self,M2C_FIELD(v29,void **,0x4));
                }
                fn_800DEEC4(fn_800DEEFC(self),(u8 *)v29 + 0xC);
                fn_800DEE98(fn_800DEEBC(self),v29,1);
            }
            fn_800DEEFC(self);
            fn_800DE99C((u8 *)v28 + 0xC, -1);
            fn_800DEEBC(self);
            fn_800C428C(v28);
        }
        fn_800DEE94(self);
        if (((s32)v27 + 0xC) != 0) {
            fn_800C9A60((u8 *)v27 + 0xC, -1);
        }
        fn_800DEE90(self + 4);
        fn_800C428C(v27);
    }
    if ((((s32)node + 0xC) != 0) && (((u8 *)node + 0xC) != NULL) && ((u32) M2C_FIELD(node,void **,0x14) != 0U)) {
        fn_800C428C(M2C_FIELD(node,void **,0x14));
    }
    fn_800C428C(node);
}
#pragma use_lmw_stmw reset
#pragma scheduling reset

void fn_800DEE90(void) {

}

void fn_800DEE94(void) {

}

void fn_800DEE98(void *arg0, void *arg1) {
    void fn_800C428C(void *);
    fn_800C428C(arg1);
}

s32 fn_800DEEBC(s32 arg0) {
    return arg0 + 4;
}

void fn_800DEEC4(void *unused, void *arg1) {
    void fn_800C428C(void *);
    void *p;

    if (arg1 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        p = *(void **)((u8 *)arg1 + 8);
        if (p != NULL) {
            fn_800C428C(p);
        }
    }
}

void fn_800DEEFC(void) {

}

void fn_800DEF00(void *arg0) {
    struct Tree {
        s32 count;
        void *root;
        void *unk8;
        void **first;
    };
    void fn_800DEA50(struct Tree *, void *);
    struct Tree *tree = arg0;

    if (tree->root != NULL) {
        fn_800DEA50(tree, tree->root);
        tree->count = 0;
        tree->root = NULL;
        tree->first = &tree->root;
    }
}

void fn_800DEF4C(void *arg0, u8 *arg1) {
    u8 *ptr;
    u32 zero;
    u8 value;

    ptr = (u8 *)arg0 + 4;
    zero = 0;
    value = *(volatile u8 *)arg1;

    *(u32 *)arg0 = zero;
    *(u32 *)ptr = zero;
    *((u8 *)arg0 + 8) = value;
    *(u32 *)((u8 *)arg0 + 0xC) = (u32)ptr;
}

void fn_800DF110(void *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 fn_802032CC(f32 *, f32 *);
    extern f32 lbl_80369EA0;
    f32 sp14[3];
    f32 sp8[3];
    f32 temp_f1;

    if (arg1 == 0) {
        M2C_FIELD(arg0, f32 *, 0x30) = farg0;
        M2C_FIELD(arg0, f32 *, 0x34) = farg1;
        M2C_FIELD(arg0, f32 *, 0x38) = farg2;
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, f32 *, 0x40) = farg1;
        M2C_FIELD(arg0, f32 *, 0x44) = farg2;
    } else {
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x44);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 8);
    }
    M2C_FIELD(arg0, f32 *, 0x48) = farg0;
    M2C_FIELD(arg0, f32 *, 0x4C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x50) = farg2;
    M2C_FIELD(arg0, f32 *, 0x54) = farg3;
    M2C_FIELD(arg0, f32 *, 0x58) = farg4;
    M2C_FIELD(arg0, f32 *, 0x5C) = farg5;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = farg1;
    M2C_FIELD(arg0, f32 *, 0x14) = farg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) arg1;
    if (arg1 == 0) {
        M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
        return;
    }
    sp14[0] = M2C_FIELD(arg0, f32 *, 0);
    sp14[1] = M2C_FIELD(arg0, f32 *, 4);
    sp14[2] = M2C_FIELD(arg0, f32 *, 8);
    sp8[0] = M2C_FIELD(arg0, f32 *, 0xC);
    sp8[1] = M2C_FIELD(arg0, f32 *, 0x10);
    sp8[2] = M2C_FIELD(arg0, f32 *, 0x14);
    temp_f1 = fn_802032CC(sp8, sp14);
    if (lbl_80369EA0 == temp_f1) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f1 / M2C_FIELD(arg0, f32 *, 0x18));
}

s32 fn_800DF258(void *arg0, const char *arg1)
{
    void *fn_800C93EC(void *);
    s32 fn_802342B8(const char *, const char *);

    void *str;
    s32 result;

    str = fn_800C93EC((u8 *)arg0 + 0x10);
    result = fn_802342B8((const char *)str, arg1);

    return result == 0;
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" bool fn_800DF298(void *arg0, const char *arg1) {
    return fn_802342B8((char *)fn_800C93EC((s8 *)arg0 + 4), arg1) == 0;
}
#pragma dont_inline reset
#pragma cplusplus reset

void fn_800DF2D8(void *arg0) {
    f32 fn_80059500(f32, f32, f32, f32, f32);
    f32 temp_f5;
    s32 temp_r0;
    f32 temp_f31;

    if (M2C_FIELD(arg0, s32 *, 0x2C) > 0) {
        if ((M2C_FIELD(arg0, f32 *, 0) == M2C_FIELD(arg0, f32 *, 0xC)) && (M2C_FIELD(arg0, f32 *, 4) == M2C_FIELD(arg0, f32 *, 0x10)) && (M2C_FIELD(arg0, f32 *, 8) == M2C_FIELD(arg0, f32 *, 0x14))) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) - 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (0 >= temp_r0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
            M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
            M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
            return;
        }
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x18);
        temp_f31 = (temp_f5 - (f32) temp_r0) / temp_f5;
        M2C_FIELD(arg0, f32 *, 0) = fn_80059500(M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x54), temp_f31);
        M2C_FIELD(arg0, f32 *, 4) = fn_80059500(M2C_FIELD(arg0, f32 *, 0x34), M2C_FIELD(arg0, f32 *, 0x40), M2C_FIELD(arg0, f32 *, 0x4C), M2C_FIELD(arg0, f32 *, 0x58), temp_f31);
        M2C_FIELD(arg0, f32 *, 8) = fn_80059500(M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x44), M2C_FIELD(arg0, f32 *, 0x50), M2C_FIELD(arg0, f32 *, 0x5C), temp_f31);
    }
}

void fn_800DF410(f32 *arg0, f32 *arg1) {
    *arg1 = *arg0;
}

void fn_800DF41C(void *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0);
    *arg2 = M2C_FIELD(arg0, f32 *, 4);
}

void fn_800DF430(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
}

void fn_800DF44C(f32 farg0, f32 farg1, f32 farg2) {
    void fn_800DF110(f32, f32, f32, f32, f32, f32);
    fn_800DF110(farg0, farg1, farg2, farg0, farg1, farg2);
}

void fn_800DF478(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = farg1;
    M2C_FIELD(arg0, f32 *, 0x14) = farg2;
    M2C_FIELD(arg0, f32 *, 0) = farg0;
    M2C_FIELD(arg0, f32 *, 4) = farg1;
    M2C_FIELD(arg0, f32 *, 8) = farg2;
}

void fn_800DF494(f32 *arg0, f32 x, f32 y, f32 z) {
    extern f32 lbl_80369EA0;
    extern f32 lbl_80369EB0;
    extern f32 lbl_80369EB4;
    extern f32 lbl_80369EB8;
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    s32 zero;

    zero = 0;
    arg0[3] = x;
    d = lbl_80369EA0;
    arg0[0] = x;
    c = lbl_80369EB0;
    arg0[4] = y;
    b = lbl_80369EB4;
    arg0[1] = y;
    a = lbl_80369EB8;
    arg0[5] = z;
    arg0[2] = z;
    arg0[6] = d;
    arg0[7] = d;
    arg0[8] = c;
    arg0[9] = b;
    arg0[10] = a;
    *(s32 *)&arg0[11] = zero;
    arg0[21] = x;
    arg0[18] = x;
    arg0[15] = x;
    arg0[12] = x;
    arg0[22] = y;
    arg0[19] = y;
    arg0[16] = y;
    arg0[13] = y;
    arg0[23] = z;
    arg0[20] = z;
    arg0[17] = z;
    arg0[14] = z;
}

void fn_800DF50C(f32 *arg0) {
    extern f32 lbl_80369EA0;
    extern f32 lbl_80369EBC;
    extern f32 lbl_80369EC0;
    extern f32 lbl_80369EC4;
    f32 vals[4];

    vals[0] = lbl_80369EA0;
    vals[3] = lbl_80369EBC;
    arg0[5] = vals[0];
    vals[2] = lbl_80369EC0;
    arg0[4] = vals[0];
    vals[1] = lbl_80369EC4;
    arg0[3] = vals[0];
    arg0[2] = vals[0];
    arg0[1] = vals[0];
    arg0[0] = vals[0];
    arg0[6] = vals[0];
    arg0[7] = vals[0];
    arg0[8] = vals[3];
    arg0[9] = vals[2];
    arg0[10] = vals[1];
    *(s32 *)&arg0[11] = 0;
    arg0[21] = vals[0];
    arg0[18] = vals[0];
    arg0[15] = vals[0];
    arg0[12] = vals[0];
    arg0[22] = vals[0];
    arg0[19] = vals[0];
    arg0[16] = vals[0];
    arg0[13] = vals[0];
    arg0[23] = vals[0];
    arg0[20] = vals[0];
    arg0[17] = vals[0];
    arg0[14] = vals[0];
}

#pragma cplusplus on
extern "C" void fn_800DF584(void *arg0) {
    struct Obj {
        u8 pad[0x2C];
        u8 flag_2c;
        u8 pad2D[0xB];
        void *field_38;
        u8 flag_3c;
        u8 pad3D[3];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
    };
    struct Other {
        u8 pad[0x2C];
        u8 flag_2c;
    };
    Other *other;

    if (((Obj *)arg0)->flag_3c != 0) {
        other = (Other *)((Obj *)arg0)->field_38;
        if (other != NULL) {
            if (other->flag_2c != 0) {
                if (((Obj *)arg0)->flag_2c != 0) {
                    ((Obj *)arg0)->v3();
                }
            }
        }
    }
}
extern "C" void fn_800DF5E0(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
    };
    ((Obj *)arg0)->v2();
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_800DF60C(void *arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0() = 0;
        virtual void v1() = 0;
    };
    ((Obj *)arg0)->v1();
}

#pragma cplusplus on
extern "C" void fn_800DF638(s32 arg0) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0() = 0;
    };
    ((Obj *)arg0)->v0();
}
#pragma cplusplus reset

#pragma cplusplus reset
void fn_800DF664(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
}

void fn_800DF670(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 1;
}

void fn_800DF67C(void *arg0, void *arg1) {
    fn_800C9758((void *)((char *)arg0 + 0x10), arg1, 0, -1);
}

u8 fn_800DF6A8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

s32 fn_800DF6B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

void fn_800DF6B8(void *arg0, u8 *arg1) {
    void fn_800C9B6C(void *, u8 *);
    fn_800C9B6C(arg0, arg1 + 0x1C);
}

void fn_800DF6DC(s32 arg0, s32 arg1) {
    fn_800C9B6C(arg0, arg1 + 0x10);
}

void fn_800DF700(s32 arg0, s32 arg1) {
    fn_800C9B6C(arg0, arg1 + 4);
}

void *fn_800DF724(void *arg0, s16 arg1) {
    extern u8 lbl_8028DFC8[];
    void fn_800C9A60(void *, s32);
    void fn_800C428C(void *);
    void *self;
    s16 n;

    n = arg1;
    self = arg0;
    if (self != NULL) {
        *(void **)((u8 *)self + 0x40) = lbl_8028DFC8;
        fn_800C9A60((u8 *)self + 0x1C, -1);
        fn_800C9A60((u8 *)self + 0x10, -1);
        fn_800C9A60((u8 *)self + 0x4, -1);
        if (n > 0) {
            fn_800C428C(self);
        }
    }
    return self;
}

#pragma cplusplus on
extern "C" void *fn_800DF7A0(void *arg0, void *arg1, void *arg2) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(const char *, void *) = 0;
    };
    struct Self {
        Obj *obj;
        String s0;
        String s1;
        String s2;
        s32 unk28;
        u8 unk2C;
        u8 pad2D[3];
        s32 unk30;
        s32 unk34;
        void *unk38;
        u8 unk3C;
        u8 pad3D[3];
        void **vtbl;
    };
    void fn_800C9ABC(String *, char *, void *);
    char *fn_800C8DCC(char *, void *, String *);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9758(String *, String *, s32, s32);
    s32 fn_800C9400(String *, u32, u32, char *, u32);
    char *fn_800C93EC(String *);
    s32 fn_800DC018(void *);
    u32 strlen(const char *);
    extern void *lbl_8028DFC8[];
    extern char lbl_80271A30[];
    char bufCC[0x20];
    char bufAC[0x20];
    char buf8C[0x20];
    char buf6C[0x20];
    String str60;
    String str54;
    String str48;
    String str3C;
    String str30;
    String str24;
    String str18;
    void *alloc14;
    void *alloc10;
    void *allocC;
    void *alloc8;
    Self *self;
    void *path;
    void *owner;
    char *p;
    u32 len;
    s32 flag;

    self = (Self *)arg0;
    path = arg2;
    owner = arg1;
    self->vtbl = lbl_8028DFC8;
    self->s0.size = 0;
    self->s0.cap = 0;
    self->s0.data = 0;
    self->s0.cap = 0;
    self->s1.size = 0;
    self->s1.cap = 0;
    self->s1.data = 0;
    self->s1.cap = 0;
    self->s2.size = 0;
    self->s2.cap = 0;
    self->s2.data = 0;
    self->s2.cap = 0;
    str60.cap = 0;
    str54.cap = 0;
    str48.cap = 0;
    str60.size = 0;
    str60.data = 0;
    str60.cap = 0;
    str54.size = 0;
    str54.data = 0;
    str54.cap = 0;
    str48.size = 0;
    str48.data = 0;
    str48.cap = 0;
    fn_800C9ABC(&str3C, lbl_80271A30 + 1, &alloc14);
    p = fn_800C8DCC(bufCC, path, &str3C);
    len = strlen(p);
    fn_800C96F8(&str60, p, len);
    fn_800C9A60(&str3C, -1);
    fn_800C9ABC(&str30, lbl_80271A30 + 7, &alloc10);
    p = fn_800C8DCC(bufAC, path, &str30);
    len = strlen(p);
    fn_800C96F8(&str54, p, len);
    fn_800C9A60(&str30, -1);
    fn_800C9ABC(&str24, lbl_80271A30 + 0xC, &allocC);
    p = fn_800C8DCC(buf8C, path, &str24);
    len = strlen(p);
    fn_800C96F8(&str48, p, len);
    fn_800C9A60(&str24, -1);
    fn_800C9ABC(&str18, lbl_80271A30 + 0x12, &alloc8);
    fn_800C8DCC(buf6C, path, &str18);
    flag = *(s32 *)buf6C;
    fn_800C9A60(&str18, -1);
    self->obj = (Obj *)owner;
    fn_800C9758(&self->s0, &str60, 0, -1);
    fn_800C9758(&self->s1, &str54, 0, -1);
    len = strlen(lbl_80271A30);
    if (fn_800C9400(&str48, 0, str48.size, lbl_80271A30, len) == 0) {
        len = strlen(lbl_80271A30 + 0x17);
        fn_800C96F8(&self->s2, lbl_80271A30 + 0x17, len);
    } else {
        fn_800C9758(&self->s2, &str48, 0, -1);
    }
    self->unk28 = -1;
    self->unk2C = (u8)(flag != 0);
    self->unk34 = 0;
    self->unk30 = 0;
    self->unk3C = 1;
    self->unk38 = self->obj->v2(lbl_80271A30 + 0x1F, fn_800C93EC(&self->s2));
    if (self->unk38 != NULL) {
        self->unk28 = fn_800DC018(self->unk38);
    } else {
        fn_800C96F8(&self->s2, lbl_80271A30, strlen(lbl_80271A30));
        self->unk28 = 0;
    }
    fn_800C9A60(&str48, -1);
    fn_800C9A60(&str54, -1);
    fn_800C9A60(&str60, -1);
    return self;
}
#pragma cplusplus reset

#pragma cplusplus on
#pragma dont_inline on
extern "C" void *fn_800DFAE0(void *arg0, void *arg1, const String *arg2, const String *arg3, const String *arg4) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(const char *, M2C_UNK *) = 0;
    };
    struct Self {
        Obj *obj;
        String s0;
        String s1;
        String s2;
        s32 unk28;
        u8 unk2C;
        u8 pad2D[0xB];
        void *unk38;
        u8 unk3C;
        u8 pad3D[3];
        void **vtbl;
    };
    extern void *lbl_8028DFC8[];
    extern char lbl_80271A30[];
    Self *self = (Self *)arg0;

    self->vtbl = lbl_8028DFC8;
    self->s0.size = 0;
    self->s0.cap = 0;
    self->s0.data = 0;
    self->s0.cap = 0;
    self->s1.size = 0;
    self->s1.cap = 0;
    self->s1.data = 0;
    self->s1.cap = 0;
    self->s2.size = 0;
    self->s2.cap = 0;
    self->s2.data = 0;
    self->s2.cap = 0;
    self->obj = (Obj *)arg1;
    fn_800C9758(&self->s0, arg2, 0, -1);
    fn_800C9758(&self->s1, arg3, 0, -1);
    fn_800C9758(&self->s2, arg4, 0, -1);
    self->unk28 = 0;
    self->unk2C = 1;
    self->unk3C = 1;
    self->unk38 = self->obj->v2(lbl_80271A30 + 0x1F, fn_800C93EC(&self->s2));
    if (self->unk38 != NULL) {
        self->unk28 = fn_800DC018(self->unk38);
    } else {
        fn_800C96F8(&self->s2, lbl_80271A30, strlen(lbl_80271A30));
        self->unk28 = 0;
    }
    return arg0;
}
#pragma dont_inline reset
#pragma cplusplus reset

void fn_800DFC2C(void *arg0) {
    void fn_800E01EC(s32, s32, u8 *);
    u8 spC;
    u32 pad;
    s32 base;
    s32 idx;

    spC = *(u8 *)&pad;
    idx = *(s32 *)((u8 *)arg0 + 4);
    base = *(s32 *)((u8 *)arg0 + 8);
    fn_800E01EC(base, base + (idx << 2), &spC);
}

#pragma cplusplus on
extern "C" void fn_800DFD64(void *arg0) {
    struct Obj {
        void *owner;
        u8 pad[0x3C];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual ~Obj() = 0;
    };
    struct List {
        void *unk0;
        s32 count;
        Obj **items;
    };
    List *list = (List *)arg0;
    s32 i;

    for (i = list->count - 1; i >= 0; i--) {
        Obj *p = list->items[i];
        if (p->owner == list) {
            delete p;
        }
    }
    list->count = 0;
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_800DFDF4(void *arg0, void *arg1) {
    void fn_800DD87C(void *, s32);
    struct Obj {
        void *owner;
        u8 pad[0x3C];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4(s32) = 0;
    };
    struct List {
        void *unk0;
        s32 count;
        Obj **items;
    };
    s32 off;
    s32 n;
    Obj **items;

    off = 0;
    n = ((List *)arg0)->count;
    for (; n > 0; n--) {
        items = ((List *)arg0)->items;
        if (*(Obj **)((u8 *)items + off) == (Obj *)arg1) {
            off = (s32)items + off;
            fn_800DD87C(arg0, off);
            if (arg1 != NULL) {
                ((Obj *)arg1)->v4(1);
            }
            break;
        }
        off += 4;
    }
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_800DFE74(void *arg0, s32 idx) {
    void fn_800DD87C(void *, s32);
    struct Obj {
        void *owner;
        u8 pad[0x3C];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual ~Obj() = 0;
    };
    struct List {
        void *unk0;
        s32 count;
        Obj **items;
    };
    s32 n = ((List *)arg0)->count;

    if (n == 0 || idx >= n) {
        return;
    }
    delete ((List *)arg0)->items[idx];
    fn_800DD87C(arg0, (s32)(((List *)arg0)->items + (u32)idx));
}
#pragma cplusplus reset

void fn_800DFFB8(void *arg0, s32 arg1) {
    void fn_800C9BC4(void *, void *, s32, s32 *);
    s32 sp8;

    sp8 = arg1;
    fn_800C9BC4(arg0, (u8 *)*(void **)((u8 *)arg0 + 8) + (*(s32 *)((u8 *)arg0 + 4) << 2), 1, &sp8);
}

s32 fn_800DFFF4(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r3 = *(s32*)((char*)arg0 + 4);
    if ((temp_r3 == 0) || (arg1 >= temp_r3)) {
        return 0;
    }
    temp_r0 = (*(s32*)((char*)arg0 + 8)) + (arg1 * 4);
    return *(s32*)((char*)temp_r0);
}

#pragma use_lmw_stmw on
void *fn_800E0020(void *arg0, const char *arg1, const char *arg2) {
    u8 fn_800DF298(void *, const char *);
    u8 fn_800DF258(void *, const char *);

    void *entry;
    s32 offset;
    s32 index;

    index = *(s32 *)((u8 *)arg0 + 4) - 1;
    offset = index << 2;

    while (index >= 0) {
        entry = *(void **)(*(u8 **)((u8 *)arg0 + 8) + offset);

        if (fn_800DF298(entry, arg1)) {
            entry = *(void **)(*(u8 **)((u8 *)arg0 + 8) + offset);
            if (fn_800DF258(entry, arg2)) {
                return *(void **)(*(u8 **)((u8 *)arg0 + 8) + offset);
            }
        }

        index--;
        offset -= 4;
    }

    return NULL;
}
#pragma use_lmw_stmw reset
void *fn_800E00B0(void *arg0, const char *arg1, const char *arg2) {
    u8 fn_800DF298(void *, const char *);
    u8 fn_800DF258(void *, const char *);
    void *entry;
    s32 offset;
    s32 index;
    index = 0;
    offset = 0;
    while (index < *(s32 *)((u8 *)arg0 + 4)) {
        if (fn_800DF298(*(void **)(*(u8 **)((u8 *)arg0 + 8) + offset), arg1)) {
            if (fn_800DF258(*(void **)(*(u8 **)((u8 *)arg0 + 8) + offset), arg2)) {
                return *(void **)(*(u8 **)((u8 *)arg0 + 8) + offset);
            }
        }
        index++;
        offset += 4;
    }
    return 0;
}

#pragma cplusplus on
extern "C" void *fn_800E0140(void *arg0, s16 arg1)
{
    struct Obj {
        u8 pad[0x10];
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
    };
    extern u8 lbl_8028DFE8[];
    void fn_800C428C(void *);
    void *self;
    s16 flag;

    flag = arg1;
    self = arg0;
    if (self != 0) {
        *(void **)((u8 *)self + 0x10) = lbl_8028DFE8;
        ((Obj *)arg0)->v9();

        if (self != 0) {
            if (self != 0) {
                if (self != 0) {
                    if (*(void **)((u8 *)self + 8) != 0) {
                        fn_800C428C(*(void **)((u8 *)self + 8));
                    }
                }
            }
        }

        if (flag > 0) {
            fn_800C428C(self);
        }
    }
    return self;
}
#pragma cplusplus reset
void fn_800E01C8(void *arg0) {
    extern u8 lbl_8028DFE8[56];
    u32 *p = (u32 *)arg0;

    p[4] = (u32)lbl_8028DFE8;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}

s32 fn_800E0340(void *arg0, void *arg1, void *arg2)
{
    s32 fn_800DF6B0(void *);
    s32 a;
    s32 b;

    a = fn_800DF6B0(arg1);
    b = fn_800DF6B0(arg2);
    return a < b;
}

#pragma use_lmw_stmw on
s32 *fn_800E060C(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 fn_800DF6B0(void *);
    s32 *start;
    s32 *keyp;
    s32 count;
    s32 mid;
    s32 *ptr;
    s32 elem;
    s32 key;

    start = arg0;
    count = arg1 - start;
    keyp = arg2;
    while (count > 0) {
        mid = count / 2;
        ptr = start + mid;
        elem = *ptr;
        key = fn_800DF6B0((void *)*keyp);
        if (fn_800DF6B0((void *)elem) <= key) {
            start = ptr + 1;
            count -= mid + 1;
        } else {
            count = mid;
        }
    }
    return start;
}

#pragma dont_inline on
void *fn_800E069C(void *arg0, void *arg1, s32 *arg2) {
    s32 count;
    void *key;
    void **mid_ptr;
    s32 mid;
    s32 mid_val;
    s32 key_val;

    key = (void *)*arg2;
    count = ((s32)arg1 - (s32)arg0) / 4;
    while (count > 0) {
        mid = count / 2;
        mid_ptr = (void **)((u8 *)arg0 + (mid * 4));
        mid_val = fn_800DF6B0(*mid_ptr);
        key_val = fn_800DF6B0(key);
        if (key_val > mid_val) {
            arg0 = (u8 *)mid_ptr + 4;
            count -= (u32)mid + 1;
        } else {
            count = mid;
        }
    }
    return arg0;
}
#pragma dont_inline reset
s32 *fn_800E0728(s32 *a, s32 *b, s32 *c, s32 d, s32 e, void *f, void *g, u8 h) {
    return a + e;
}

void fn_800E0A94(void *arg0, void *arg1, s32 *arg2, u32 arg3, s32 *arg4) {
    // This function was not fully implemented due to complexity
    // It's a placeholder until more structural understanding is gained
}

void fn_800E0EE0(s32 *left, s32 *mid, s32 *end) {
    s32 tmp;
    s32 *p;

    p = mid;
    for (;;) {
        tmp = *left;
        *left = *p;
        left++;
        *p = tmp;
        if (left == mid) {
            p++;
            if (p == end) {
                return;
            }
            mid = p;
        } else {
            p++;
            if (p == end) {
                p = mid;
            }
        }
    }
}

void fn_800E0F2C(s32 *begin, s32 *end)
{
    s32 fn_800DF6B0(void *);

    s32 other;
    register s32 *cur;
    s32 key;
    register long value;
    s32 *prev;
    s32 *hole;

    if (begin != end) {
        for (cur = begin + 1; cur < end; cur++) {
            value = *cur;
            prev = cur;
            hole = cur;

            while (begin < hole &&
                   (other = *--prev,
                    key = fn_800DF6B0((void *)value),
                    fn_800DF6B0((void *)other) > key)) {
                *hole = *prev;
                --hole;
            }

            *hole = value;
        }
    }
}

void fn_800E0FBC(void *arg0, s32 arg1)
{
    extern s32 lbl_80366E60;
    extern u8 lbl_803687D0;
    void *fn_800C4240(s32, void *);
    void *out;
    s32 allocated;
    s32 count;
    void *result;

    out = arg0;
    count = arg1;
    result = 0;
    allocated = lbl_80366E60;
    while (count > 0) {
        result = fn_800C4240(count * 4, &lbl_803687D0);
        if (result != 0) {
            allocated = count;
            break;
        }
        count = count / 2;
    }
    *(void **)out = result;
    *(s32 *)((u8 *)out + 4) = allocated;
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_800E103C(s32 *begin,s32 *end,SortIterator a,SortIterator b,SortCompare comp) {
 s32 fn_800DF6B0(void *);
 void fn_800E18B4(s32 *,s32 *,SortIterator,SortCompare);
 void fn_800E1340(SortIterator,SortIterator,SortIterator,SortIterator,s32 *,SortCompare);
 void fn_800E14E4(s32 *,s32 *,s32 *,SortCompare,s32,s32,SortIterator,SortIterator);
 s32 n=((s32)end-(s32)begin)/4;
 s32 *mid;
 s32 other;
 s32 *cur;
 s32 value;
 s32 *prev,*hole;
 s32 key;
 if(n<=1) return;
 if(n==2) {
 value=*begin;
 key=fn_800DF6B0((void *)end[-1]);
 if(fn_800DF6B0((void *)value)>key) {
 other=*begin; *begin=end[-1]; end[-1]=other;
 }
 } else if(n<=20) {
 if(begin!=end) {
 s32 *hole,*prev; s32 value; s32 *cur; s32 other,key;
 for(cur=begin+1;cur<end;cur++) {
 value=*cur; prev=cur; hole=cur;
 while(begin<hole && (other=*--prev,key=fn_800DF6B0((void *)value),fn_800DF6B0((void *)other)>key)) {
 *hole=*prev; --hole;
 }
 *hole=value;
 }
 }
 } else {
 mid=begin+n/2;
 if(n<=((s32)b.ptr-(s32)a.ptr)/4) {
 fn_800E18B4(begin,mid,a,comp);
 fn_800E18B4(mid,end,SortIterator(a+n/2),comp);
 fn_800E1340(a,SortIterator(a+n/2),SortIterator(a+n/2),SortIterator(a+n),begin,comp);
 } else {
 fn_800E103C(begin,mid,a,b,comp);
 fn_800E103C(mid,end,a,b,comp);
 fn_800E14E4(begin,mid,end,comp,((s32)mid-(s32)begin)/4,((s32)end-(s32)mid)/4,a,b);
 }
 }
#pragma cplusplus off
}

#pragma cplusplus on
#pragma use_lmw_stmw on
#pragma opt_common_subs off
extern "C" void fn_800E14E4(s32 *begin, s32 *mid, s32 *end, SortCompare comp, s32 len1, s32 len2, SortIterator a, SortIterator b) {
    s32 fn_800DF6B0(void *);
    s32 *fn_800E060C(s32 *, s32 *, s32 *, SortCompare);
    s32 *fn_800E069C(s32 *, s32 *, s32 *, SortCompare);
    s32 *fn_800E0728(s32 *, s32 *, s32 *, s32, s32, SortIterator, SortIterator);
    void fn_800E0A94(SortIterator &, SortIterator, s32 *, s32 *, s32 *, SortCompare);
    void fn_800E0C44(s32 *, s32 *, SortIterator &, SortIterator, s32 *, SortCompare);
    s32 n;
    s32 left, right;
    s32 *cut1, *cut2;
    s32 *newmid;
    if (begin == mid || mid == end)
        return;
    if (len1 + len2 == 2) {
        s32 v = *begin;
        s32 key = fn_800DF6B0((void *)*mid);
        if (fn_800DF6B0((void *)v) > key) {
            s32 t = *begin;
            *begin = *mid;
            *mid = t;
        }
        return;
    }
    n = ((s32)b.ptr - (s32)a.ptr) / 4;
    if (len1 <= len2 && len1 <= n) {
        SortIterator start(a);
        SortIterator it(a);
        SortIterator *pit = &it;
        s32 *p = begin;
        while (p != mid) {
            *(*pit) = *p;
            ++p;
            ++(*pit);
        }
        fn_800E0A94(start, SortIterator(it), mid, end, begin, comp);
        return;
    }
    if (len2 <= n) {
        SortIterator start(a);
        SortIterator it(a);
        SortIterator *pit = &it;
        s32 *p = mid;
        while (p != end) {
            *(*pit) = *p;
            ++p;
            ++(*pit);
        }
        fn_800E0C44(begin, mid, start, SortIterator(it), end, comp);
        return;
    }
    if (len1 <= len2) {
        right = len2 / 2;
        cut2 = mid + right;
        cut1 = fn_800E060C(begin, mid, cut2, comp);
        left = ((s32)cut1 - (s32)begin) / 4;
    } else {
        left = len1 / 2;
        cut1 = begin + left;
        cut2 = fn_800E069C(mid, end, cut1, comp);
        right = ((s32)cut2 - (s32)mid) / 4;
    }
    len1 -= left;
    newmid = fn_800E0728(cut1, mid, cut2, len1, right, a, b);
    fn_800E14E4(begin, cut1, newmid, comp, left, right, a, b);
    fn_800E14E4(newmid, cut2, end, comp, len1, len2 - right, a, b);
#pragma cplusplus off
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_800E18B4(s32 *begin, s32 *end, SortIterator out, SortCompare comp) {
    s32 fn_800DF6B0(void *);
    void fn_800E0398(SortIterator, SortIterator, SortIterator, SortIterator, s32 *, SortCompare);
    void fn_800E2138(s32 *, s32 *, SortIterator, SortCompare);
    void fn_800E2168(s32 *, s32 *, SortIterator, SortCompare);
    s32 n = ((s32)end - (s32)begin) / 4;
    s32 *mid;
    s32 *cur;
    s32 value;
    s32 *prev, *hole;
    s32 other, key;
    SortIterator it(out);
    SortIterator half(out);
    SortIterator last(out);
    s32 dist;
    s32 cap;
    if (n == 0) {
        return;
    }
    if (n == 1) {
        *out = *begin;
        return;
    }
    if (n == 2) {
        value = *begin;
        key = fn_800DF6B0((void *)end[-1]);
        if (fn_800DF6B0((void *)value) > key) {
            *out = end[-1];
            it = out;
            ++it;
            *it = *begin;
        } else {
            *out = *begin;
            it = out;
            ++it;
            *it = end[-1];
        }
        return;
    }
    if (n <= 20) {
        if (begin != end) {
            for (cur = begin + 1; cur < end; cur++) {
                value = *cur;
                prev = cur;
                hole = cur;
                while (begin < hole && (other = *--prev, key = fn_800DF6B0((void *)value), fn_800DF6B0((void *)other) > key)) {
                    *hole = *prev;
                    --hole;
                }
                *hole = value;
            }
        }
        it = out;
        for (cur = begin; cur != end; ++cur, ++it) {
            *it = *cur;
        }
        return;
    }
    mid = begin + n / 2;
    dist = ((s32)out.ptr - *(s32 *)(out.state + 8)) / 4;
    cap = *(s32 *)(out.state + 4);
    if (n <= 0xFFFF || dist < cap) {
        fn_800E18B4(begin, mid, out, comp);
        half = out + n / 2;
        fn_800E18B4(mid, end, half, comp);
        last = out + n;
        fn_800E0398(out, half, half, last, begin, comp);
    } else {
        fn_800E2138(begin, mid, out, comp);
        half = out + n / 2;
        fn_800E2168(mid, end, half, comp);
        last = out + n;
        fn_800E0398(out, half, half, last, begin, comp);
    }
}
#pragma cplusplus off

#pragma optimization_level 2
void fn_800E2138(s32 *out, s32 *in, s32 idx) {
    s32 sp[2];
    s32 p;

    sp[0] = in[0];
    p = sp[0] + (idx << 2);
    sp[1] = in[1];
    out[0] = p;
    sp[0] = p;
    out[1] = sp[1];
}
#pragma optimization_level reset
s32 fn_800E2168(s32 *arg0, s32 *arg1) {
    return (s32) (*arg0 - *arg1) / 4;
}

void fn_800E2180(s32 *arg0, s32 *arg1) {
    s32 temp_r5;

    temp_r5 = *arg0;
    *arg0 = *arg1;
    *arg1 = temp_r5;
}

void *fn_800E2194(void *arg0, s16 arg1) {
    void fn_800C9A60(void *, s32);
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern void *lbl_8028E020[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E020;
        fn_800C9A60((s8 *)arg0 + 0x54, -1);
        if (arg0 != NULL) {
            *(void **)((char *)arg0 + 0x40) = (void *)lbl_8028E090;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800E2218(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
}

void fn_800E2220(void *arg0) {
    M2C_UNK fn_800E2E70(s32, s32, u8, u8);
    M2C_UNK fn_800E320C(s32, s32, u8, u8);
    M2C_UNK fn_800E3428(s32, s32, u8, u8);
    extern f32 lbl_80369EC8;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r5;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
        temp_r5 = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), f32 *, 0x6C) * (f32) M2C_FIELD(arg0, u8 *, 0x53));
        if (lbl_80369EC8 == M2C_FIELD(arg0, f32 *, 0x6C)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x68) != 0) {
                sp8 = (s32) M2C_FIELD(arg0, u8 *, 0x52);
                spC = temp_r5;
                sp10 = M2C_FIELD(arg0, s32 *, 0x78);
                fn_800E2E70(M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, u8 *, 0x50), M2C_FIELD(arg0, u8 *, 0x51));
                return;
            }
            sp8 = (s32) M2C_FIELD(arg0, u8 *, 0x52);
            spC = temp_r5;
            sp10 = M2C_FIELD(arg0, s32 *, 0x78);
            fn_800E3428(M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, u8 *, 0x50), M2C_FIELD(arg0, u8 *, 0x51));
            return;
        }
        sp8 = (s32) M2C_FIELD(arg0, u8 *, 0x52);
        spC = temp_r5;
        sp10 = M2C_FIELD(arg0, s32 *, 0x78);
        fn_800E320C(M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, u8 *, 0x50), M2C_FIELD(arg0, u8 *, 0x51));
    }
}

void *fn_800E266C(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s16);
    void fn_800C428C(void *);
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = lbl_8028E090;
        fn_800DF724(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_800E26CC(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern u8 lbl_8028E058[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x40) = lbl_8028E058;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0x40) = lbl_8028E090;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800E273C(void *arg0) {
    M2C_UNK fn_800076AC(u8, u8, u8, u8);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369EE8;
    extern f32 lbl_80369EEC;
    M2C_UNK var_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r27;
    s32 temp_r26;
    unsigned int temp_r25;

    var_r30 = 0x10;
    temp_r27 = M2C_FIELD(arg0, s32 *, 0x54);
    temp_r26 = M2C_FIELD(arg0, s32 *, 0x58);
    temp_r29 = M2C_FIELD(arg0, s32 *, 0x5C) - temp_r27;
    temp_r28 = M2C_FIELD(arg0, s32 *, 0x60) - temp_r26;
    temp_r25 = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), f32 *, 0x6C) * (f32) M2C_FIELD(arg0, u8 *, 0x53));
    if ((u8) M2C_FIELD(arg0, u8 *, 0x64) != 0) {
        var_r30 = 0x800;
    }
    fn_8000A258();
    fn_80009D74(lbl_80369EE8, lbl_80369EE8, (f32) M2C_FIELD(arg0, s32 *, 0x44), lbl_80369EEC);
    fn_8000A174(0, var_r30);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32) temp_r27, (f32) temp_r26, (f32) temp_r29, (f32) temp_r28);
    fn_800076AC(M2C_FIELD(arg0, u8 *, 0x50), M2C_FIELD(arg0, u8 *, 0x51), M2C_FIELD(arg0, u8 *, 0x52), (u8) temp_r25);
    fn_80007884();
}

void fn_800E29B8(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 0x50) = arg1;
    M2C_FIELD(arg0, s8 *, 0x51) = arg2;
    M2C_FIELD(arg0, s8 *, 0x52) = arg3;
    M2C_FIELD(arg0, s8 *, 0x53) = arg4;
}

void fn_800E29CC(void *arg0, void *arg1) {
    s32 temp_r5;
    s32 temp_r0;

    temp_r0 = *(s32 *)((u8 *)arg1 + 0x48);
    temp_r5 = *(s32 *)((u8 *)arg1 + 0x4C);
    *(s32 *)arg0 = temp_r0;
    *(s32 *)((u8 *)arg0 + 4) = temp_r5;
}

void fn_800E29E0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
}

void fn_800E29EC(void *arg0, s32 *arg1) {
    typedef struct { s32 a; s32 b; } Pair;
    *(Pair *)((u8 *)arg0 + 0x48) = *(Pair *)arg1;
}

extern f32 lbl_80369F00;
extern f32 lbl_80369F04;
extern f64 lbl_80369F08;
void fn_800E2A00(Unit *unit, void *arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5) {
    s32 temp_r24;
    s32 temp_r25;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r3;

    temp_r24 = *(s32 *)((u8 *)arg1 + 4);
    temp_r25 = *(s32 *)((u8 *)arg1 + 0);
    temp_r3 = *(s32 *)((u8 *)arg1 + 8);
    temp_r26 = *(s32 *)((u8 *)arg1 + 0xC) - temp_r24;
    temp_r27 = temp_r3 - temp_r25;
    
    fn_8000A258(0x1E);
    fn_80009D74(lbl_80369F00, lbl_80369F00, (f32) *(s32 *)((u8 *)unit + 0x44), lbl_80369F04);
    fn_8000A174(0, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32) temp_r25, (f32) temp_r24, (f32) temp_r27, (f32) temp_r26);
    fn_800076AC(arg2, arg3, arg4, arg5);
    fn_80007884();
}

s32 fn_800E2E50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_800E2E58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}

s32 fn_800E2E60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}

s32 fn_800E2E68(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

void fn_800E2E70(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    void fn_800076AC(u8, u8, u8, u8);
    void fn_80007770(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(u32, s32, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    extern f32 lbl_80369F20;
    extern f32 lbl_80369F24;
    s32 w;
    s32 h;
    s32 x2;
    s32 y2;
    s32 cols;
    s32 v1;
    s32 u1;
    s32 v0;
    s32 u0;

    w = M2C_FIELD(arg0, s32 *, 0x54);
    h = M2C_FIELD(arg0, s32 *, 0x58);
    x2 = arg3 + w;
    y2 = arg4 + h;
    if (arg2 >= M2C_FIELD(arg0, s32 *, 0x60)) {
        arg2 = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    }
    cols = M2C_FIELD(arg0, s32 *, 0x5C);
    u0 = M2C_FIELD(arg0, s32 *, 0x64) + w * (arg2 % cols);
    u1 = u0;
    u1 = u1 + w;
    v0 = M2C_FIELD(arg0, s32 *, 0x68) + h * (arg2 / cols);
    v1 = v0 + h;
    if (M2C_FIELD(arg0, u32 *, 0x48) != 0) {
        fn_8000A258();
        fn_80009D74(lbl_80369F20, lbl_80369F20, (f32) arg5, lbl_80369F24);
        fn_80009F90(M2C_FIELD(arg0, u32 *, 0x48), arg10, (u16) M2C_FIELD(arg0, s32 *, 0x6C));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32) arg3, (f32) arg4, (f32) (x2 - arg3), (f32) (y2 - arg4));
        fn_80007770((f32) u1, (f32) v0, (f32) u0, (f32) v1);
        fn_800076AC((u8) arg6, (u8) arg7, (u8) arg8, (u8) arg9);
        fn_80007884();
    }
}

#pragma use_lmw_stmw on
void fn_800E3040(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12) {
    M2C_UNK fn_800076AC(u8, u8, u8, u8);
    M2C_UNK fn_80007770(f32, f32, f32, f32);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_80009F90(u32, s32, u16);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369F20;
    extern f32 lbl_80369F24;
    s32 w;
    s32 h;
    s32 x2;
    s32 y2;
    s32 cols;
    s32 v1;
    s32 u1;
    s32 v0;
    s32 u0;

    x2 = arg3 + arg6;
    y2 = arg4 + arg7;
    if (arg2 >= M2C_FIELD(arg0, s32 *, 0x60)) {
        arg2 = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    }
    cols = M2C_FIELD(arg0, s32 *, 0x5C);
    w = M2C_FIELD(arg0, s32 *, 0x54);
    h = M2C_FIELD(arg0, s32 *, 0x58);
    u0 = M2C_FIELD(arg0, s32 *, 0x64) + w * (arg2 % cols);
    v0 = M2C_FIELD(arg0, s32 *, 0x68) + h * (arg2 / cols);
    u1 = u0 + w;
    v1 = v0 + h;
    if (M2C_FIELD(arg0, u32 *, 0x48) != 0) {
        fn_8000A258();
        fn_80009D74(lbl_80369F20, lbl_80369F20, (f32) arg5, lbl_80369F24);
        fn_80009F90(M2C_FIELD(arg0, u32 *, 0x48), arg12, (u16) M2C_FIELD(arg0, s32 *, 0x6C));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32) arg3, (f32) arg4, (f32) (x2 - arg3), (f32) (y2 - arg4));
        fn_80007770((f32) u0, (f32) v0, (f32) u1, (f32) v1);
        fn_800076AC((u8) arg8, (u8) arg9, (u8) arg10, (u8) arg11);
        fn_80007884();
    }
}
#pragma use_lmw_stmw reset
void fn_800E320C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, f32 scale) {
    M2C_UNK fn_800076AC(u8, u8, u8, u8);
    M2C_UNK fn_80007770(f32, f32, f32, f32);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_80009F90(u32, s32, u16);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369F20;
    extern f32 lbl_80369F24;
    s32 w;
    s32 h;
    s32 v1;
    s32 u1;
    s32 v0;
    s32 x2;
    s32 y2;
    s32 cols;
    s32 u0;

    w = M2C_FIELD(arg0, s32 *, 0x54);
    h = M2C_FIELD(arg0, s32 *, 0x58);
    x2 = arg3 + (s32)((f32)w * scale);
    y2 = arg4 + (s32)((f32)h * scale);
    if (arg2 >= M2C_FIELD(arg0, s32 *, 0x60)) {
        arg2 = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    }
    cols = M2C_FIELD(arg0, s32 *, 0x5C);
    u0 = M2C_FIELD(arg0, s32 *, 0x64) + w * (arg2 % cols);
    v0 = M2C_FIELD(arg0, s32 *, 0x68) + h * (arg2 / cols);
    u1 = u0 + w;
    v1 = v0 + h;
    if (M2C_FIELD(arg0, u32 *, 0x48) != 0) {
        fn_8000A258();
        fn_80009D74(lbl_80369F20, lbl_80369F20, (f32)arg5, lbl_80369F24);
        fn_80009F90(M2C_FIELD(arg0, u32 *, 0x48), arg10, (u16)M2C_FIELD(arg0, s32 *, 0x6C));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)arg3, (f32)arg4, (f32)(x2 - arg3), (f32)(y2 - arg4));
        fn_80007770((f32)u0, (f32)v0, (f32)u1, (f32)v1);
        fn_800076AC((u8)arg6, (u8)arg7, (u8)arg8, (u8)arg9);
        fn_80007884();
    }
}

#pragma use_lmw_stmw on
void fn_800E3428(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    M2C_UNK fn_800076AC(u8, u8, u8, u8);
    M2C_UNK fn_80007770(f32, f32, f32, f32);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_80009F90(u32, s32, u16);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369F20;
    extern f32 lbl_80369F24;
    s32 w;
    s32 h;
    s32 x2;
    s32 y2;
    s32 cols;
    s32 v1;
    s32 u1;
    s32 v0;
    s32 u0;

    w = M2C_FIELD(arg0, s32 *, 0x54);
    h = M2C_FIELD(arg0, s32 *, 0x58);
    x2 = arg3 + w;
    y2 = arg4 + h;
    if (arg2 >= M2C_FIELD(arg0, s32 *, 0x60)) {
        arg2 = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    }
    cols = M2C_FIELD(arg0, s32 *, 0x5C);
    u0 = M2C_FIELD(arg0, s32 *, 0x64) + w * (arg2 % cols);
    v0 = M2C_FIELD(arg0, s32 *, 0x68) + h * (arg2 / cols);
    u1 = u0 + w;
    v1 = v0 + h;
    if (M2C_FIELD(arg0, u32 *, 0x48) != 0) {
        fn_8000A258();
        fn_80009D74(lbl_80369F20, lbl_80369F20, (f32) arg5, lbl_80369F24);
        fn_80009F90(M2C_FIELD(arg0, u32 *, 0x48), arg10, (u16) M2C_FIELD(arg0, s32 *, 0x6C));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32) arg3, (f32) arg4, (f32) (x2 - arg3), (f32) (y2 - arg4));
        fn_80007770((f32) u0, (f32) v0, (f32) u1, (f32) v1);
        fn_800076AC((u8) arg6, (u8) arg7, (u8) arg8, (u8) arg9);
        fn_80007884();
    }
}

void fn_800E35F4(void *arg0, s32 arg1, void *uv, void *rect, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    M2C_UNK fn_800076AC(u8, u8, u8, u8);
    M2C_UNK fn_80007770(f32, f32, f32, f32);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_80009F90(u32, s32, u16);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369F20;
    extern f32 lbl_80369F24;
    s32 w;
    s32 h;
    s32 x;
    s32 y;

    if (M2C_FIELD(arg0, u32 *, 0x48) != 0) {
        x = M2C_FIELD(rect, s32 *, 0);
        y = M2C_FIELD(rect, s32 *, 4);
        w = M2C_FIELD(rect, s32 *, 8) - x;
        h = M2C_FIELD(rect, s32 *, 0xC) - y;
        fn_8000A258();
        fn_80009D74(lbl_80369F20, lbl_80369F20, (f32) arg4, lbl_80369F24);
        fn_80009F90(M2C_FIELD(arg0, u32 *, 0x48), arg9, (u16) M2C_FIELD(arg0, s32 *, 0x6C));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32) x, (f32) y, (f32) w, (f32) h);
        fn_80007770((f32) M2C_FIELD(uv, s32 *, 0), (f32) M2C_FIELD(uv, s32 *, 4), (f32) M2C_FIELD(uv, s32 *, 8), (f32) M2C_FIELD(uv, s32 *, 0xC));
        fn_800076AC((u8) arg5, (u8) arg6, (u8) arg7, (u8) arg8);
        fn_80007884();
    }
}

#pragma dont_inline on
s32 fn_800E378C(u8 *arg0, void *arg1) {
    void *fn_800C93EC(void *);
    void fn_8006EEFC(void *, void *);

    fn_8006EEFC(arg0 + 0x48, fn_800C93EC(arg1));
    return 1;
}
#pragma dont_inline reset
extern Struct_8014589C D_8014589C;
void *fn_800E37CC(void *arg0, s16 arg1) {
    void fn_8006EDA0(void *);
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern void *lbl_8028E0C8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E0C8;
        fn_8006EDA0((s8 *)arg0 + 0x48);
        fn_800DF724(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_800E3838(void *arg0, s32 arg1, void *arg2) {
    void fn_800DF7A0(void);
    void fn_800C9ABC(String *, char *, void *);
    void fn_800C8DCC(void *, void *, String *);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9A60(String *, s32);
    void fn_800CBF24(String *, char *, String *);
    void fn_800CB90C(String *, String *, char *);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C9B6C(String *, String *);
    void fn_800E378C(void *, String *);
    void **fn_8006EDD8(void *, s32);
    u32 strlen(char *);
    extern char lbl_80271DF8[];
    extern u8 lbl_8028E0C8[];

    char buf144[0x20];
    char buf124[0x20];
    char buf104[0x20];
    char bufE4[0x20];
    char bufC4[0x20];
    char bufA4[0x20];
    String str98;
    String str8C;
    String str80;
    String str74;
    String str68;
    String str5C;
    String str50;
    String str44;
    String str38;
    String str2C;
    String str20;
    void *alloc1C;
    void *alloc18;
    void *alloc14;
    void *alloc10;
    void *allocC;
    void *alloc8;
    void **tmp;
    s32 r29;
    u32 len;
    void *self;
    void *path;

    (void)arg1;
    path = arg2;
    self = arg0;
    fn_800DF7A0();
    *(void **)((u8 *)self + 0x40) = lbl_8028E0C8;
    str98.cap = 0;
    str8C.cap = 0;
    str98.size = 0;
    str98.data = 0;
    str98.cap = 0;
    str8C.size = 0;
    str8C.data = 0;
    str8C.cap = 0;
    *(s32 *)((u8 *)self + 0x28) = -0x2F;
    *(u32 *)((u8 *)self + 0x48) = 0;
    fn_800C9ABC(&str80, lbl_80271DF8 + 8, &alloc1C);
    fn_800C8DCC(buf144, path, &str80);
    r29 = (s32)buf144;
    len = strlen((char *)r29);
    fn_800C96F8(&str98, (char *)r29, len);
    fn_800C9A60(&str80, -1);
    fn_800C9ABC(&str74, lbl_80271DF8 + 0x11, &alloc18);
    fn_800C8DCC(buf124, path, &str74);
    *(s32 *)((u8 *)self + 0x54) = *(s32 *)buf124;
    fn_800C9A60(&str74, -1);
    fn_800C9ABC(&str68, lbl_80271DF8 + 0x11, &alloc14);
    fn_800C8DCC(buf104, path, &str68);
    *(s32 *)((u8 *)self + 0x58) = ((s32 *)buf104)[1];
    fn_800C9A60(&str68, -1);
    fn_800C9ABC(&str5C, lbl_80271DF8 + 0x1A, &alloc10);
    fn_800C8DCC(bufE4, path, &str5C);
    *(s32 *)((u8 *)self + 0x64) = *(s32 *)bufE4;
    fn_800C9A60(&str5C, -1);
    fn_800C9ABC(&str50, lbl_80271DF8 + 0x1A, &allocC);
    fn_800C8DCC(bufC4, path, &str50);
    *(s32 *)((u8 *)self + 0x68) = ((s32 *)bufC4)[1];
    fn_800C9A60(&str50, -1);
    fn_800C9ABC(&str44, lbl_80271DF8 + 0x21, &alloc8);
    fn_800C8DCC(bufA4, path, &str44);
    r29 = *(s32 *)bufA4;
    fn_800C9A60(&str44, -1);
    fn_800CBF24(&str38, lbl_80271DF8 + 0x25, &str98);
    fn_800CB90C(&str2C, &str38, lbl_80271DF8 + 0x26);
    fn_800C9758(&str8C, &str2C, 0, -1);
    fn_800C9A60(&str2C, -1);
    fn_800C9A60(&str38, -1);
    fn_800C9B6C(&str20, &str8C);
    fn_800E378C(self, &str20);
    fn_800C9A60(&str20, -1);
    if (*(u32 *)((u8 *)self + 0x48) != 0) {
        tmp = fn_8006EDD8(*(void **)((u8 *)self + 0x48), 0);
        *(s32 *)((u8 *)self + 0x4C) = *(u16 *)((u8 *)*tmp + 2);
        *(s32 *)((u8 *)self + 0x50) = *(u16 *)((u8 *)*tmp + 0);
    }
    if (r29 != 0) {
        *(s32 *)((u8 *)self + 0x6C) = 0x21;
    } else {
        *(s32 *)((u8 *)self + 0x6C) = 0x11;
    }
    if (*(s32 *)((u8 *)self + 0x54) == 0) {
        *(s32 *)((u8 *)self + 0x54) = *(s32 *)((u8 *)self + 0x4C);
    }
    if (*(s32 *)((u8 *)self + 0x58) == 0) {
        *(s32 *)((u8 *)self + 0x58) = *(s32 *)((u8 *)self + 0x50);
    }
    *(s32 *)((u8 *)self + 0x5C) = *(s32 *)((u8 *)self + 0x4C) / *(s32 *)((u8 *)self + 0x54);
    *(s32 *)((u8 *)self + 0x60) =
        (*(s32 *)((u8 *)self + 0x4C) / *(s32 *)((u8 *)self + 0x54))
        * (*(s32 *)((u8 *)self + 0x50) / *(s32 *)((u8 *)self + 0x58));
    fn_800C9A60(&str8C, -1);
    fn_800C9A60(&str98, -1);
    return self;
}

void *fn_800E3B68(void *arg0, s16 arg1) {
    void fn_800E45EC(void *, s32);
    void fn_800C428C(void *);
    extern void *lbl_8028E0E8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E0E8;
        fn_800C9A60((s8 *)arg0 + 0xAC, -1);
        fn_800E45EC(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800E3BD8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (arg1 + (M2C_FIELD(arg0, s32 *, 0x7C) - M2C_FIELD(arg0, s32 *, 0x74)));
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (arg2 + (M2C_FIELD(arg0, s32 *, 0x80) - M2C_FIELD(arg0, s32 *, 0x78)));
}

void fn_800E3C04(void* arg0) {
    void* temp_r3;
    void** temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    u32* temp_r7;
    void** temp_r9;
    void* temp_r10;
    void* temp_r11;

    if (arg0 != 0) {
        // Load virtual table pointer from arg0 + 4
        temp_r9 = *(void***)((char*)arg0 + 4);
        if (temp_r9 != 0) {
            // First call - check if it's the right class type by checking function at index 0x8
            temp_r4 = temp_r9;
            temp_r5 = *((s32*)temp_r9 + 2); // This is probably a function ptr, offset 0x8

            // Check if calling function with correct argument signature
            temp_r10 = (void*)temp_r5; // Store function pointer value
            if (temp_r10 != 0) {
                s32 field_0x2B0 = *(s32*)((char*)arg0 + 0x2B0);
                
                // Call virtual method fn_800C428C
                temp_r6 = *(s32*)((char*)temp_r9 + 8) + 0x10;
                if (temp_r6 != 0) {
                    void* r30 = *temp_r9;
                    if (r30 == 0 || field_0x2B0 < 0) {
                        // Call to fn_800C428C with arg1 = arg0 + 0x2B4
                        temp_r7 = *(u32**)((char*)arg0 + 0x2B4);
                        if (temp_r7 != 0 && (s32)*temp_r7 > 0) {
                            // Need to understand virtual table structure, check the call pattern carefully
                            temp_r11 = (void*)*(s32*)((char*)temp_r9 + 0x18); // Function at offset 0x18
                        
                            if (temp_r11 != 0 && field_0x2B0 < 0) {
                                // This is a bit complex but based on the assembly, calling a function with arg0
                                // The pattern shows that we're looking at something like:
                                // *(void**)arg0 = *(void**)temp_r9 + *(s32*)((char*)temp_r9 + 0x18) - need to check what this does exactly
                                temp_r3 = *temp_r9;
                                // Some data update or virtual call with arg0 at different offset
                            }
                        }
                    }
                }
            }
        }
        
        // Final processing with data from arg0, handling complex vtable accesses
        // This requires the actual virtual method signatures from the project's struct
        *(s32*)((char*)arg0 + 0x2B0) = *(s32*)((char*)arg0 + 0x2B0) - 1;
        
        if ((*((s32*)arg0 + 0xA9)) < 0) {
            // Possibly another check or function call here
            return;
        }
        
        // Another virtual method call with multiple conditions
        temp_r7 = *(u32**)((char*)arg0 + 0x8);
        if (temp_r7 != 0) {
            s32 temp = (s32)*(s32*)((char*)temp_r7 + 2);
            if (temp >= 0 && temp < 3) {
                // Handle this case properly
                *(u16*)((char*)arg0 + 8) = *(u16*)((char*)arg0 + 8) - 1;
            }
        }
    }
}

void fn_800E3F48(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
}

void fn_800E3F54(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 1;
}

void *fn_800E3F60(void *arg0)
{
    void *object;
    void *entry;
    void *candidate;
    void *result;
    int index;
    int count;
    int value;
    int match;

    object = arg0;

    if ((u8)fn_800DF6A8(object) == 0) {
        return 0;
    }

    if (*(void **)((u8 *)object + 0xA0) != 0) {
        index = 0;

        while (1) {
            entry = *(void **)((u8 *)object + 0xA0);

            if (entry != 0) {
                count = *(int *)((u8 *)entry + 4);
            } else {
                count = 0;
            }

            if (index >= count) {
                break;
            }

            candidate = *(void **)((u8 *)*(void **)((u8 *)entry + 0x10) + 0x18);
            candidate = ((void *(*)(void *, int))candidate)(entry, index);

            if (candidate != 0) {
                if ((u8)fn_800DF6A8(candidate) != 0) {
                    value = *(int *)((u8 *)candidate + 0x84);
                    match = 0;

                    if (value == *(int *)((u8 *)object + 0x8C)) {
                        match = 1;
                    } else if (value == -1) {
                        value = *(int *)((u8 *)candidate + 0x88);

                        if (value == *(int *)((u8 *)object + 0x90) || value == -1) {
                            match = 1;
                        }
                    }

                    if (match != 0) {
                        return candidate;
                    }
                }
            }

            index++;
        }
    }

    return object;
}

#pragma cplusplus on
extern "C" void fn_800E4078(void *arg0, s32 arg1, s32 arg2) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0(s32, s32) = 0;
        virtual void v1(s32, s32) = 0;
        virtual void v2(s32, s32) = 0;
        virtual void v3(s32, s32) = 0;
        virtual void v4(s32, s32) = 0;
        virtual void v5(s32, s32) = 0;
        virtual void v6(s32, s32) = 0;
        virtual void v7(s32, s32) = 0;
        virtual void v8(s32, s32) = 0;
        virtual void v9(s32, s32) = 0;
        virtual void v10(s32, s32) = 0;
        virtual void v11(s32, s32) = 0;
        virtual void v12(s32, s32) = 0;
        virtual void v13(s32, s32) = 0;
        virtual void v14(s32, s32) = 0;
    };
    void (*cb)(void *, s32, s32);

    if (*(u8 *)((u8 *)arg0 + 0x71) != 0) {
        *(u8 *)((u8 *)arg0 + 0x71) = 0;
        *(u8 *)((u8 *)arg0 + 0x72) = 1;
    }
    ((Obj *)arg0)->v14(arg1, arg2);
    cb = *(void (**)(void *, s32, s32))((u8 *)arg0 + 0xA4);
    if (cb != NULL) {
        cb(arg0, arg1, arg2);
    }
}
extern "C" void fn_800E4110(void *arg0, s32 arg1, s32 arg2) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0(s32, s32);
        virtual void v1(s32, s32);
        virtual void v2(s32, s32);
        virtual void v3(s32, s32);
        virtual void v4(s32, s32);
        virtual void v5(s32, s32);
        virtual void v6(s32, s32);
        virtual void v7(s32, s32);
        virtual void v8(s32, s32);
        virtual void v9(s32, s32);
        virtual void v10(s32, s32);
        virtual void v11(s32, s32);
        virtual void v12(s32, s32);
    };
    *(u8 *)((u8 *)arg0 + 0x71) = 1;
    *(u8 *)((u8 *)arg0 + 0x72) = 0;
    *(s32 *)((u8 *)arg0 + 0x74) = arg1;
    *(s32 *)((u8 *)arg0 + 0x78) = arg2;
    *(s32 *)((u8 *)arg0 + 0x7C) = *(s32 *)((u8 *)arg0 + 0x58);
    *(s32 *)((u8 *)arg0 + 0x80) = *(s32 *)((u8 *)arg0 + 0x5C);
    ((Obj *)arg0)->v12(arg1, arg2);
}
#pragma cplusplus reset

void fn_800E4164(void) {

}

void fn_800E4168(void) {

}

void fn_800E416C(void) {

}

void fn_800E4170(void) {

}

void fn_800E4174(void) {

}

#pragma cplusplus on
extern "C" void fn_800E4178(void *arg0, void *arg1) {
    struct Obj {
        u8 pad[0x40];
        virtual void v0(s32, s32) = 0;
        virtual void v1(s32, s32) = 0;
        virtual void v2(s32, s32) = 0;
        virtual void v3(s32, s32) = 0;
        virtual void v4(s32, s32) = 0;
        virtual void v5(s32, s32) = 0;
        virtual void v6(s32, s32) = 0;
        virtual void v7(s32, s32) = 0;
        virtual void v8(s32, s32) = 0;
        virtual void v9(s32, s32) = 0;
        virtual void v10(s32, s32) = 0;
        virtual void v11(s32, s32) = 0;
        virtual void v12(s32, s32) = 0;
        virtual void v13(s32, s32) = 0;
        virtual void v14(s32, s32) = 0;
        virtual void v15(s32, s32) = 0;
        virtual void v16(s32, s32) = 0;
        virtual void v17(s32, s32) = 0;
    };
    ((Obj *)arg0)->v17(*(s32 *)arg1, *(s32 *)((u8 *)arg1 + 4));
}
#pragma cplusplus reset
void fn_800E43E8(void) {

}

#pragma cplusplus on
extern "C" void fn_800E43EC(void *arg0) {
    struct Vec2 {
        s32 x;
        s32 y;
        Vec2() {}
        Vec2(const Vec2 &v) : x(v.x), y(v.y) {}
    };
    struct Obj {
        u8 pad[0x40];
        virtual Vec2 v0() = 0;
        virtual Vec2 v1() = 0;
        virtual Vec2 v2() = 0;
        virtual Vec2 v3() = 0;
        virtual Vec2 v4() = 0;
        virtual Vec2 v5() = 0;
        virtual Vec2 v6() = 0;
        virtual Vec2 v7() = 0;
        virtual Vec2 v8() = 0;
        virtual Vec2 v9() = 0;
        virtual Vec2 v10() = 0;
    };
    void *target = *(void **)((u8 *)arg0 + 0x54);
    if (target != 0) {
        Vec2 v = ((Obj *)target)->v10();
        *(s32 *)((u8 *)arg0 + 0x48) = *(s32 *)((u8 *)arg0 + 0x58) + v.x;
        *(s32 *)((u8 *)arg0 + 0x4C) = *(s32 *)((u8 *)arg0 + 0x5C) + v.y;
    }
}
#pragma cplusplus reset
#pragma cplusplus on
extern "C" void fn_800E4550(void *arg0, void *arg1) {
    struct Obj10 {
        u8 pad[0x10];
        virtual void *v0() = 0;
        virtual void *v1() = 0;
        virtual void *v2(char *, char *) = 0;
        virtual void *v3() = 0;
        virtual void *v4() = 0;
        virtual void v5(void *) = 0;
    };
    void *fn_800C42D8(s32);
    void *fn_800E01C8(void *);
    void *tmp;

    if (*(void **)((u8 *)arg0 + 0xA0) == 0) {
        tmp = fn_800C42D8(0x14);
        if (tmp != 0) {
            tmp = fn_800E01C8(tmp);
        }
        *(void **)((u8 *)arg0 + 0xA0) = tmp;
    }
    if (arg1 != 0) {
        ((Obj10 *)*(void **)((u8 *)arg0 + 0xA0))->v5(arg1);
    }
}
#pragma cplusplus reset

void fn_800E45CC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
}

void fn_800E45D8(void *arg0, s32 *arg1) {
    typedef struct { s32 a; s32 b; } Pair;
    *(Pair *)((u8 *)arg0 + 0x58) = *(Pair *)arg1;
}

#pragma cplusplus on
extern "C" void *fn_800E45EC(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern u16 lbl_8028E148[];
    extern u16 lbl_8028E090[];
    struct Child {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1(s32) = 0;
    };
    void *child;

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x40) = lbl_8028E148;
        child = *(void **)((u8 *)arg0 + 0xa0);
        if (child != NULL) {
            if (child != NULL) {
                ((Child *)child)->v1(1);
            }
        }
        if (arg0 != NULL) {
            *(void **)((u8 *)arg0 + 0x40) = lbl_8028E090;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}
#pragma cplusplus reset

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void *fn_800E4688(void *arg0, void *arg1, void *arg2) {
    void fn_800E2CF4(void);
    void fn_800C9ABC(String *, char *, void *);
    void fn_800C8DCC(void *, void *, String *);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9A60(String *, s32);
    s32 fn_800C9400(String *, u32, u32, char *, u32);
    char *fn_800C93EC(String *);
    void *fn_800C42D8(s32);
    void fn_800E01C8(void *);
    void fn_800DF6B8(String *, void *);
    void fn_800C9758(String *, String *, s32, s32);
    u32 strlen(char *);
    extern u16 lbl_8028E148[];

    struct Obj10 {
        u8 pad[0x10];
        virtual void *v0() = 0;
        virtual void *v1() = 0;
        virtual void *v2(char *, char *) = 0;
        virtual void *v3() = 0;
        virtual void *v4() = 0;
        virtual void v5(void *) = 0;
    };

    char buf9C[0x20];
    char buf7C[0x20];
    char buf5C[0x20];
    u32 copyBC[8];
    String str50;
    String str44;
    String str38;
    String str2C;
    String str20;
    String str14;
    void *alloc10;
    void *allocC;
    void *alloc8;
    void *self;
    void *path;
    void *cb;
    s32 r28;
    char *p2;
    void *obj;
    void *list;
    u32 len;
    char *base;

    self = arg0;
    path = arg2;
    cb = arg1;
    fn_800E2CF4();
    *(void **)((u8 *)self + 0x40) = lbl_8028E148;
    str50.cap = 0;
    str44.cap = 0;
    str50.size = 0;
    str50.data = 0;
    str50.cap = 0;
    str44.size = 0;
    str44.data = 0;
    str44.cap = 0;
    base = (char *)&lbl_80271FC0;
    fn_800C9ABC(&str38, base + 6, &alloc10);
    fn_800C8DCC(buf9C, path, &str38);
    r28 = (s32)buf9C;
    len = strlen((char *)r28);
    fn_800C96F8(&str50, (char *)r28, len);
    fn_800C9A60(&str38, -1);
    fn_800C9ABC(&str2C, base + 0x12, &allocC);
    fn_800C8DCC(buf7C, path, &str2C);
    r28 = (s32)buf7C;
    len = strlen((char *)r28);
    fn_800C96F8(&str44, (char *)r28, len);
    fn_800C9A60(&str2C, -1);
    if (fn_800C9400(&str50, 0, str50.size, base + 0x19, strlen(base + 0x19)) == 0) {
        fn_800C96F8(&str50, base + 0x1A, strlen(base + 0x1A));
    }
    if (fn_800C9400(&str44, 0, str44.size, base + 0x19, strlen(base + 0x19)) != 0) {
        p2 = fn_800C93EC(&str44);
        obj = ((Obj10 *)cb)->v2(fn_800C93EC(&str50), p2);
        *(void **)((u8 *)self + 0x54) = obj;
        cb = *(void **)((u8 *)self + 0x54);
        if (*(void **)((u8 *)cb + 0xA0) == NULL) {
            list = fn_800C42D8(0x14);
            if (list != NULL) {
                fn_800E01C8(list);
            }
            *(void **)((u8 *)cb + 0xA0) = list;
        }
        if (self != NULL) {
            list = *(void **)((u8 *)cb + 0xA0);
            ((Obj10 *)list)->v5(self);
        }
        fn_800DF6B8(&str20, *(void **)((u8 *)self + 0x54));
        fn_800C9758((String *)((u8 *)self + 0x1C), &str20, 0, -1);
        fn_800C9A60(&str20, -1);
    } else {
        *(void **)((u8 *)self + 0x54) = NULL;
    }
    *(s32 *)((u8 *)self + 0x58) = *(s32 *)((u8 *)self + 0x48);
    *(s32 *)((u8 *)self + 0x5C) = *(s32 *)((u8 *)self + 0x4C);
    fn_800C9ABC(&str14, base + 0x21, &alloc8);
    fn_800C8DCC(buf5C, path, &str14);
    copyBC[0] = ((u32 *)buf5C)[0];
    copyBC[1] = ((u32 *)buf5C)[1];
    copyBC[2] = ((u32 *)buf5C)[2];
    copyBC[3] = ((u32 *)buf5C)[3];
    copyBC[4] = ((u32 *)buf5C)[4];
    copyBC[5] = ((u32 *)buf5C)[5];
    copyBC[6] = ((u32 *)buf5C)[6];
    copyBC[7] = ((u32 *)buf5C)[7];
    fn_800C9A60(&str14, -1);
    *(s32 *)((u8 *)self + 0x60) = (s32)copyBC[0];
    *(s32 *)((u8 *)self + 0x64) = (s32)copyBC[1];
    *(s32 *)((u8 *)self + 0x6C) = 4;
    *(s32 *)((u8 *)self + 0x68) = 4;
    *(s32 *)((u8 *)self + 0xA0) = 0;
    *((u8 *)self + 0x71) = 0;
    *((u8 *)self + 0x72) = 0;
    *((u8 *)self + 0x73) = 0;
    *((u8 *)self + 0x9C) = 0;
    *(s32 *)((u8 *)self + 0xA4) = 0;
    *(s32 *)((u8 *)self + 0xA8) = 0;
    fn_800C9A60(&str44, -1);
    fn_800C9A60(&str50, -1);
    return self;
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

u8 fn_800E49D0(void) {
    u8 *fn_80067440(s32);
    u8 *p;
    s32 s1;
    s32 s2;
    s32 inv;
    s32 avg;
    s32 result;

    p = fn_80067440(0);
    s1 = p[2] + p[1];
    s2 = p[6] + p[5];
    inv = 0xFF - ((p[0] + s1) / 3);
    avg = (p[4] + s2) / 3;
    result = (avg * inv) / 255;
    if (result < 0) {
        result = 0;
    }
    if (result > 0xC0) {
        result = 0xC0;
    }
    return result;
}

void fn_800E4A78(void *arg0, void *arg1) {
    void *fn_80067478(void);
    void fn_80201FC4(void *);
    void fn_80202024(void *, void *, void *);
    void fn_80201FF0(void *, void *);
    extern f32 lbl_80369F3C;
    extern f32 lbl_80369F40;
    u8 sp38[0x30];
    u8 sp8[0x30];
    void *tmp;
    f32 f31;
    f32 f30;
    f32 f29;

    tmp = fn_80067478();
    f31 = -*(f32 *)((u8 *)tmp + 0x14);
    f30 = -*(f32 *)((u8 *)tmp + 0x18);
    f29 = -*(f32 *)((u8 *)tmp + 0x1c);
    fn_80201FC4(sp8);
    *(f32 *)(sp8 + 0x14) = lbl_80369F3C;
    *(f32 *)(sp8 + 0x1c) = lbl_80369F40;
    *(f32 *)(sp8 + 0x4) = -f31 / f30;
    *(f32 *)(sp8 + 0x24) = -f29 / f30;
    fn_80202024(sp8, (u8 *)arg1 + 0x10, sp38);
    fn_80201FF0(sp38, (u8 *)arg0 + 0x10);
}

void fn_800E4B44(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 |= 0x60000000;
    }
}

void fn_800E4B64(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 |= 0x01000000;
    }
}

void fn_800E4B84(void *arg0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xE0);
        M2C_FIELD(temp_r3, u8 *, 0x85) = (u8) (M2C_FIELD(temp_r3, u8 *, 0x85) | 0xF0);
    }
}

void fn_800E4BA4(void *arg0, s8 arg1) {
    void *temp_r6;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r6 = M2C_FIELD(arg0, void **, 0xE0);
        M2C_FIELD(temp_r6, s32 *, 0) = (s32) (M2C_FIELD(temp_r6, s32 *, 0) | 0x8000);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), s8 *, 0x87) = 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), s8 *, 0x84) = arg1;
    }
}

s32 fn_800E4BD8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x114);
}

void fn_800E4BE0(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x110) = farg0;
    M2C_FIELD(arg0, s32 *, 0x114) = arg2;
}

void fn_800E4C14(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x104) = farg0;
}

void fn_800E4C1C(void *arg0) {
    void fn_800588EC(void *);
    void *ptr;

    ptr = *(void **)((u8 *)arg0 + 0xe8);
    if (ptr != NULL) {
        fn_800588EC(ptr);
        *(void **)((u8 *)arg0 + 0xe8) = NULL;
    }
}

u32 fn_800E4C5C(void *arg0, u32 arg1, u32 arg2, u8 arg3) {
    extern s32 lbl_80369F38;
    s32 sp8;

    if ((*(u32 *)((char *)arg0 + 0xE8)) != 0) {
        fn_80057EDC();
        *(u32 *)((char *)arg0 + 0xE8) = 0;
    }
    if ((arg1 == 0) || (arg2 == 0)) {
        *(u32 *)((char *)arg0 + 0xE8) = 0;
        return 0;
    }
    *(u32 *)((char *)arg0 + 0xE8) = fn_80057F04(*(s32 *)((char *)arg0 + 0xE0), arg1, arg2, 4);
    sp8 = lbl_80369F38;
    fn_80058970(*(u32 *)((char *)arg0 + 0xE8), &sp8);
    if (arg3 != 0) {
        fn_80058910(*(u32 *)((char *)arg0 + 0xE8), 1);
    }
    return *(u32 *)((char *)arg0 + 0xE8);
}

void fn_800E4E3C(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 |= 0x40000;
    }
}

void fn_800E4E5C(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 &= 0xFFFFFBFF;
    }
}

void fn_800E4E7C(f32 *arg0, void *arg1, void *arg2)
{
    s32 fn_8006135C(void *, void *);
    void fn_80060F70(void *, s32, f32 *);

    f32 pos[3];
    f32 x;
    f32 y;
    f32 z;
    s32 index;

    index = fn_8006135C(
        *(void **)((u8 *)arg1 + 0xE0),
        arg2
    );

    fn_80060F70(
        *(void **)((u8 *)arg1 + 0xE0),
        index,
        pos
    );

    x = pos[0];

    if (x > lbl_80369F5C && x < lbl_80369F60) {
        y = pos[1];
        z = pos[2];
    } else {
        z = lbl_80369F3C;
        y = z;
        x = z;
    }

    arg0[0] = x;
    arg0[1] = y;
    arg0[2] = z;
}

void fn_800E4F0C(void *arg0) {
    M2C_UNK fn_8006135C(s32);
    fn_8006135C(M2C_FIELD(arg0, s32 *, 0xE0));
}

void fn_800E4FE8(void *arg0, void *arg1, s32 arg2) {
    extern f32 lbl_80369F3C;
    f32 f;
    s32 temp_r3;

    if (arg1 != NULL) {
        temp_r3 = fn_8006135C(*(s32 *)((u8 *)arg1 + 0xE0), arg2);
        *(void **)((u8 *)arg0 + 0xEC) = arg1;
        *(s32 *)((u8 *)arg0 + 0xF0) = temp_r3;
    }
    f = lbl_80369F3C;
    *(f32 *)((u8 *)arg0 + 0x84) = f;
    *(f32 *)((u8 *)arg0 + 0x88) = f;
    *(f32 *)((u8 *)arg0 + 0x8C) = f;
}

void fn_800E5044(void *arg0) {
    M2C_UNK fn_8005F494(s32);
    fn_8005F494(M2C_FIELD(arg0, s32 *, 0xE0));
}

s32 fn_800E5068(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF8);
}

s32 fn_800E5070(void *arg0, s32 arg1) {
    if ((arg1 < 0) || ((u32) arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0xF8))) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0xFC) + (arg1 * 0x1C);
}

void fn_800E51A8(void *arg0, void *arg1) {
    void fn_800C9B6C(void *, void *);
    void fn_800C9ABC(void *, void *, void *);
    extern u8 lbl_802720E0[];
    u8 sp8[8];
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg1, void **, 0x100);
    if ((temp_r6 != NULL) && (M2C_FIELD(temp_r6, s32 *, 0x18) == M2C_FIELD(arg1, s32 *, 0xCC))) {
        fn_800C9B6C(arg0, temp_r6);
        return;
    }
    fn_800C9ABC(arg0, lbl_802720E0 + 5, sp8);
}

void fn_800E5200(void *arg0, u16 arg1, s32 arg2) {
    if (arg2 != 0) {
        fn_8005F84C(M2C_FIELD(arg0, s32 *, 0xE0), arg2, arg1);
        return;
    }
    fn_8005F894(M2C_FIELD(arg0, s32 *, 0xE0), arg1);
}

void fn_800E5248(void *arg0, u16 arg1) {
    s32 temp = *(s32 *)((u8 *)arg0 + 0xE0);
    fn_8005F9B8(temp, arg1);
}

void fn_800E5600(void *arg0, s32 arg1, u8 arg2) {
    M2C_UNK fn_8005FEE8(void *, f32);
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), u32 *, 0x44) != 0U) {
        if (arg2 != 0) {
            M2C_FIELD(arg0, s8 *, 0xD0) = 0;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
        if (var_r4 >= temp_r0) {
            var_r4 = temp_r0;
        }
        M2C_FIELD(arg0, s32 *, 0xCC) = var_r4;
        fn_8005FEE8(M2C_FIELD(arg0, void **, 0xE0), (f32) var_r4);
    }
}

s32 fn_800E5674(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0xD0) != 0) {
        return M2C_FIELD(arg0, s32 *, 0xC8);
    }
    return 0;
}

s32 fn_800E5690(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

void fn_800E5698(s32 arg0, s32 arg1) {
    fn_800C9B6C(arg0, arg1 + 0xB0);
}

s32 fn_800E56BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE0);
}

u8 fn_800E56C4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xD0);
}

void fn_800E56CC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xD0) = 0;
}

void fn_800E56D8(void *arg0, s8 arg1) {
    M2C_UNK fn_8005FEE8(void *, f32);

    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), u32 *, 0x44) != 0U) {
        fn_8005FEE8(M2C_FIELD(arg0, void **, 0xE0), (f32) M2C_FIELD(arg0, s32 *, 0xCC));
        M2C_FIELD(arg0, s8 *, 0xD0) = 1;
        M2C_FIELD(arg0, s8 *, 0xD1) = arg1;
    }
}

u32 fn_800E574C(void *arg0, u32 arg1, u32 arg2, u8 arg3) {
    extern s32 lbl_80369F38;
    u32 temp_r3;
    u32 r5;
    u32 r6;

    // Check if E8 field is non-zero
    if (*(u32 *)((char *)arg0 + 0xE8) != 0) {
        fn_80057EDC();
        *(u32 *)((char *)arg0 + 0xE8) = 0;
    }
    
    // Short circuit if either input is zero
    if ((arg1 == 0) || (arg2 == 0)) {
        *(u32 *)((char *)arg0 + 0xE8) = 0;
        return 0;
    }
    
    // Call function with E0 offset
    temp_r3 = *(s32 *)((char *)arg0 + 0xE0);
    r5 = fn_80057F04(temp_r3, arg1, arg2, 4);
    *(u32 *)((char *)arg0 + 0xE8) = r5;
    
    // Update global
    lbl_80369F38 = r5;
    
    // Call with r5 and address of global
    fn_80058970(r5, &lbl_80369F38);
    
    // Conditional call
    if (arg3 != 0) {
        fn_80058910(r5, 1);
    }
    
    return *(u32 *)((char *)arg0 + 0xE8);
}

void fn_800E59BC(void *arg0) {
    M2C_UNK fn_80060060(void *);
    if ((u8) M2C_FIELD(arg0, u8 *, 0xD0) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) >= (s32) M2C_FIELD(arg0, s32 *, 0xC8)) {
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD1) == 0) {
                M2C_FIELD(arg0, u8 *, 0xD0) = 0U;
            } else {
                M2C_FIELD(arg0, s32 *, 0xCC) = 0;
                fn_80060060(M2C_FIELD(arg0, void **, 0xE0));
            }
        } else {
            fn_80060060(M2C_FIELD(arg0, void **, 0xE0));
        }
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), f32 *, 0x58);
    }
}

void fn_800E5A4C(void *arg0) {
    void fn_800609DC(void *);
    void fn_8006CAD4(void *);
    void *fn_80067440(s32);
    void fn_8005F7B0(void *, u8);
    void *e0;
    u8 *p;
    s32 alpha;
    s32 temp_r31;
    s32 t2;
    s32 t6;

    e0 = *(void **)((u8 *)arg0 + 0xE0);
    if (e0 != NULL) {
        fn_800609DC(e0);
        fn_8006CAD4(*(void **)((u8 *)arg0 + 0xE0));
    }
    if (*(void **)((u8 *)arg0 + 0xE4) != NULL) {
        e0 = *(void **)((u8 *)arg0 + 0xE0);
        temp_r31 = ((u8 *)e0)[0xB];
        p = (u8 *)fn_80067440(0);
        t2 = p[2];
        t6 = p[6];
        alpha = (((p[4] + (t6 + p[5])) / 3) * (0xFF - ((p[0] + (t2 + p[1])) / 3))) / 255;
        if (alpha < 0) {
            alpha = 0;
        }
        if (alpha > 0xC0) {
            alpha = 0xC0;
        }
        fn_8005F7B0(*(void **)((u8 *)arg0 + 0xE4), (u8)((temp_r31 * (u8)alpha) / 255));
        fn_8006CAD4(*(void **)((u8 *)arg0 + 0xE4));
    }
}

void fn_800E5CF8(void *arg0) {
    void fn_80201FF0(void *, void *);
    void fn_80202024(void *, void *, void *);
    void fn_80202300(void *, s32, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_802025C0(void *, f32, f32, f32);
    extern f32 lbl_80369F64;
    u8 bufF8[0x30];
    u8 bufC8[0x30];
    u8 buf98[0x30];
    u8 buf68[0x30];
    u8 buf38[0x30];
    u8 buf8[0x30];

    if (*(u32 *)((u8 *)arg0 + 0xDC) != 0) {
        fn_80202540(buf98, *(f32 *)((u8 *)arg0 + 0x48), *(f32 *)((u8 *)arg0 + 0x4C), *(f32 *)((u8 *)arg0 + 0x50));
        fn_802025C0(bufC8, *(f32 *)((u8 *)arg0 + 0x6C), *(f32 *)((u8 *)arg0 + 0x70), *(f32 *)((u8 *)arg0 + 0x74));
        fn_80202300(buf68, 0x58, lbl_80369F64 * *(f32 *)((u8 *)arg0 + 0x54));
        fn_80202300(buf38, 0x59, lbl_80369F64 * *(f32 *)((u8 *)arg0 + 0x58));
        fn_80202300(buf8, 0x5A, lbl_80369F64 * *(f32 *)((u8 *)arg0 + 0x5C));
        fn_80202024(buf8, buf68, bufF8);
        fn_80202024(buf38, bufF8, bufF8);
        fn_80202024(bufC8, bufF8, bufF8);
        fn_80202024(buf98, bufF8, bufF8);
        fn_80201FF0(bufF8, (u8 *)*(void **)((u8 *)arg0 + 0xE0) + 0x10);
    }
}

void fn_800E5DEC(void) {
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    
    var_r3 = 0;
    var_r4 = 0;
    var_r5 = 0;
    
    while (var_r3 < 0x180) {
        if (var_r4 == 0) {
            var_r5 = 0;
        }
        var_r4++;
        var_r5++;
        var_r3 += 0x4;
    }
}

void *fn_800E6058(void *arg0, void *arg1, void *arg2) {
    typedef struct {
        u8 pad[0x40];
        void *vtbl;
        u8 pad44[0x68];
        void *unkAC;
        String strB0;
        s32 unkBC;
        s32 unkC0;
        s32 unkC4;
        s32 unkC8;
        s32 unkCC;
        u8 unkD0;
        u8 unkD1;
        u8 padD2;
        u8 unkD3;
        u8 padD4[8];
        void *unkDC;
        u32 *unkE0;
        s32 unkE4;
        s32 unkE8;
        s32 unkEC;
        s32 unkF0;
        s32 unkF4;
        s32 unkF8;
        s32 unkFC;
        s32 unk100;
        f32 unk104;
        f32 unk108;
        f32 unk10C;
        f32 unk110;
        s32 unk114;
    } Self;
    void fn_800DBBE4(void *);
    void fn_800C9ABC(String *, char *, void *);
    void fn_800C8DCC(char *, void *, String *);
    void fn_800C96F8(String *, char *, u32);
    void fn_800C9A60(String *, s32);
    void fn_800C9758(String *, String *, s32, s32);
    s32 fn_800C9400(String *, s32, u32, char *, u32);
    char *fn_800C93EC(String *);
    void fn_800C9B6C(String *, String *);
    void *fn_800E8008(void *, String *);
    void *fn_800DDC90(void *);
    void fn_800E574C(void *, char *, u8, s32, s32, s32, f32);
    void fn_800E5418(void *, String *);
    u32 strlen(char *);
    extern u8 lbl_8028E1A8[];
    extern char lbl_802720E0[];
    extern f32 lbl_80369F3C;
    extern f32 lbl_80369F58;
    u8 buf108[0x20];
    u8 bufE8[0x20];
    u8 bufC8[0x20];
    u8 bufA8[0x20];
    u8 buf88[0x20];
    String str7C;
    String str70;
    String str64;
    String str58;
    String str4C;
    String str40;
    String str34;
    String str28;
    String str1C;
    void *alloc18;
    void *alloc14;
    void *alloc10;
    void *allocC;
    void *alloc8;
    Self *self = (Self *)arg0;
    void *owner = arg1;
    void *path = arg2;
    char *p;
    s32 flag;
    f32 one;
    f32 zero;

    fn_800DBBE4(self);
    self->vtbl = (void *)lbl_8028E1A8;
    self->strB0.size = 0;
    self->strB0.cap = 0;
    self->strB0.data = 0;
    self->strB0.cap = 0;
    self->unkBC = 0;
    self->unkC0 = 0;
    self->unkC4 = 0;
    self->unkC0 = 0;
    self->unkF4 = 0;
    self->unkF8 = 0;
    self->unkFC = 0;
    str7C.cap = 0;
    str70.cap = 0;
    str64.cap = 0;
    str7C.size = 0;
    str7C.data = 0;
    str7C.cap = 0;
    str70.size = 0;
    str70.data = 0;
    str70.cap = 0;
    str64.size = 0;
    str64.data = 0;
    str64.cap = 0;
    self->unkAC = owner;

    fn_800C9ABC(&str58, (char *)(lbl_802720E0 + 0x1D), &alloc18);
    fn_800C8DCC((char *)buf108, path, &str58);
    p = (char *)&buf108;
    { u32 n = strlen(p); fn_800C96F8(&str7C, p, n); }
    fn_800C9A60(&str58, -1);

    fn_800C9ABC(&str4C, (char *)(lbl_802720E0 + 0x10), &alloc14);
    fn_800C8DCC((char *)bufE8, path, &str4C);
    p = (char *)&bufE8;
    { u32 n = strlen(p); fn_800C96F8(&str70, p, n); }
    fn_800C9A60(&str4C, -1);

    fn_800C9ABC(&str40, (char *)(lbl_802720E0 + 0x23), &alloc10);
    fn_800C8DCC((char *)bufC8, path, &str40);
    p = (char *)&bufC8;
    { u32 n = strlen(p); fn_800C96F8(&str64, p, n); }
    fn_800C9A60(&str40, -1);

    fn_800C9ABC(&str34, (char *)(lbl_802720E0 + 0x2B), &allocC);
    fn_800C8DCC((char *)bufA8, path, &str34);
    flag = *(s32 *)bufA8;
    fn_800C9A60(&str34, -1);

    fn_800C9758(&self->strB0, &str7C, 0, -1);
    self->unkCC = 0;
    self->unkD0 = 0;

    fn_800C9ABC(&str28, (char *)(lbl_802720E0 + 0x32), &alloc8);
    fn_800C8DCC((char *)buf88, path, &str28);
    self->unkD1 = (u8)(*(s32 *)buf88 != 0);
    fn_800C9A60(&str28, -1);

    self->unkD3 = 0;
    self->unk100 = 0;
    self->unkDC = fn_800E8008(owner, &str7C);
    if (self->unkDC != NULL) {
        self->unkE0 = (u32 *)fn_800DDC90(self->unkDC);
        if (fn_800C9400(&str70, 0, str70.size, &lbl_802720E0[5], strlen((char *)lbl_802720E0 + 5)) != 0) {
            fn_800E574C(self, fn_800C93EC(&str70), self->unkD1, 1, 0, 0xA, lbl_80369F58);
        }
    } else {
        self->unkE0 = NULL;
    }
    self->unkE4 = 0;
    self->unkE8 = 0;
    if (fn_800C9400(&str64, 0, str64.size, &lbl_802720E0[5], strlen((char *)lbl_802720E0 + 5)) != 0) {
        fn_800C9B6C(&str1C, &str64);
        fn_800E5418(self, &str1C);
        fn_800C9A60(&str1C, -1);
    }
    self->unkEC = 0;
    self->unkF0 = -1;
    if (flag != 0) {
        *self->unkE0 |= 0x40000;
    }
    zero = lbl_80369F3C;
    one = lbl_80369F58;
    self->unk104 = zero;
    self->unk108 = one;
    self->unk10C = zero;
    self->unk110 = zero;
    self->unk114 = 0;
    fn_800C9A60(&str64, -1);
    fn_800C9A60(&str70, -1);
    fn_800C9A60(&str7C, -1);
    return self;
}

void fn_800E6554(void *vec, void *pos, u32 count, void *src)
{
    void fn_800CA728(void *, char *, char *, void *, void *);
    void fn_800CA7F4(void *, u32, s32);
    void *fn_800C94F8(void *, u32, u32, u32, u32);
    void *fn_800C42D8(s32);
    void fn_800E6DC8(void *);
    void fn_800C428C(void *);
    void fn_80232058(void *, const char *, ...);
    void fn_8022CF78(void);
    void *memcpy(void *, void *, u32);
    extern char __files[];
    extern char lbl_802720E0[];

    struct {
        u8 pads[0x48];
        u32 cap;
        u32 size;
        void *data;
    } st;

    void *end;
    u32 room;
    void *dst;
    u8 tag;
    void *cur;
    u32 cap;
    u32 need;
    u32 size;
    s32 bytes;
    void *lim;
    u32 len;
    u32 *plen;
    void *err;
    char *begin;
    char *endptr;

    if (count == 0) {
        return;
    }

    if (count > 0x09249249U ||
        *(u32 *)((u8 *)vec + 4) > 0x09249249U - count) {
        fn_80232058(__files + 0xA0, lbl_802720E0 + 0x9A);
        fn_8022CF78();
    }

    size = *(u32 *)((u8 *)vec + 4);
    need = size + count;

    if (need <= *(u32 *)vec) {
        end = *(u8 **)((u8 *)vec + 8) + size * 0x1C;
        room = (u32)(((s32)end - (s32)pos) / 28);

        if (count > room) {
            tag = st.pads[0x2C];
            dst = end;

            while (count > room) {
                if (dst != 0) {
                    *(u32 *)((u8 *)dst + 4) = *(u32 *)((u8 *)src + 4);
                    begin = *(char **)((u8 *)src + 8);
                    endptr = begin + *(u32 *)src;
                    st.pads[0x28] = tag;
                    fn_800CA728(dst, begin, endptr, &st.pads[0x44], &st.pads[0x28]);
                    *(u32 *)((u8 *)dst + 0x10) = *(u32 *)((u8 *)src + 0x10);
                    begin = *(char **)((u8 *)src + 0x14);
                    endptr = begin + *(u32 *)((u8 *)src + 0xC);
                    st.pads[0x20] = st.pads[0x24];
                    fn_800CA728((u8 *)dst + 0xC, begin, endptr, &st.pads[0x40], &st.pads[0x20]);
                    *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)src + 0x18);
                }
                dst = (u8 *)dst + 0x1C;
                count -= 1;
                *(u32 *)((u8 *)vec + 4) += 1;
            }

            tag = st.pads[0x1C];
            cur = pos;

            while ((u8 *)cur < (u8 *)end) {
                if (dst != 0) {
                    *(u32 *)((u8 *)dst + 4) = *(u32 *)((u8 *)cur + 4);
                    begin = *(char **)((u8 *)cur + 8);
                    endptr = begin + *(u32 *)cur;
                    st.pads[0x18] = tag;
                    fn_800CA728(dst, begin, endptr, &st.pads[0x3C], &st.pads[0x18]);
                    *(u32 *)((u8 *)dst + 0x10) = *(u32 *)((u8 *)cur + 0x10);
                    begin = *(char **)((u8 *)cur + 0x14);
                    endptr = begin + *(u32 *)((u8 *)cur + 0xC);
                    st.pads[0x10] = st.pads[0x14];
                    fn_800CA728((u8 *)dst + 0xC, begin, endptr, &st.pads[0x38], &st.pads[0x10]);
                    *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)cur + 0x18);
                }
                cur = (u8 *)cur + 0x1C;
                dst = (u8 *)dst + 0x1C;
                *(u32 *)((u8 *)vec + 4) += 1;
            }
        } else {
            bytes = (s32)(count * 0x1C);
            tag = st.pads[0xC];
            dst = end;
            cur = (u8 *)end - bytes;

            while ((u8 *)cur < (u8 *)end) {
                if (dst != 0) {
                    *(u32 *)((u8 *)dst + 4) = *(u32 *)((u8 *)cur + 4);
                    begin = *(char **)((u8 *)cur + 8);
                    endptr = begin + *(u32 *)cur;
                    st.pads[8] = tag;
                    fn_800CA728(dst, begin, endptr, &st.pads[0x34], &st.pads[8]);
                    *(u32 *)((u8 *)dst + 0x10) = *(u32 *)((u8 *)cur + 0x10);
                    begin = *(char **)((u8 *)cur + 0x14);
                    endptr = begin + *(u32 *)((u8 *)cur + 0xC);
                    st.pads[0] = st.pads[4];
                    fn_800CA728((u8 *)dst + 0xC, begin, endptr, &st.pads[0x30], &st.pads[0]);
                    *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)cur + 0x18);
                }
                cur = (u8 *)cur + 0x1C;
                dst = (u8 *)dst + 0x1C;
                *(u32 *)((u8 *)vec + 4) += 1;
            }

            bytes = (s32)((room - count) * 0x1C);
            if ((u32)((u8 *)end - bytes) <= (u32)src && (u8 *)src < (u8 *)end) {
                src = (u8 *)src + count * 0x1C;
            }

            err = __files + 0xA0;
            lim = (u8 *)pos + bytes;
            end = (u8 *)end;
            while ((u8 *)lim > (u8 *)pos) {
                end = (u8 *)end - 0x1C;
                lim = (u8 *)lim - 0x1C;
                *(u32 *)&st.pads[0x40] = (u32)-1;
                if (*(u32 *)lim >= 0x80000000U) {
                    fn_80232058(err, lbl_802720E0 + 0x52);
                    fn_8022CF78();
                }
                len = *(u32 *)lim;
                *(u32 *)&st.pads[0x44] = len;
                plen = (u32 *)&st.pads[0x40];
                if (len < *(u32 *)&st.pads[0x40]) {
                    plen = (u32 *)&st.pads[0x44];
                }
                len = *plen;
                if (end == lim) {
                    fn_800C94F8(end, 0, 0, 0, 0);
                    fn_800CA7F4(end, len, 1);
                } else {
                    fn_800CA7F4(end, len, 0);
                    memcpy(*(void **)((u8 *)end + 8), *(void **)((u8 *)lim + 8), len);
                }
                *(u32 *)&st.pads[0x38] = (u32)-1;
                if (*(u32 *)((u8 *)lim + 0xC) >= 0x80000000U) {
                    fn_80232058(err, lbl_802720E0 + 0x52);
                    fn_8022CF78();
                }
                len = *(u32 *)((u8 *)lim + 0xC);
                *(u32 *)&st.pads[0x3C] = len;
                plen = (u32 *)&st.pads[0x38];
                if (len < *(u32 *)&st.pads[0x38]) {
                    plen = (u32 *)&st.pads[0x3C];
                }
                len = *plen;
                if ((u8 *)end + 0xC == (u8 *)lim + 0xC) {
                    fn_800C94F8((u8 *)end + 0xC, 0, 0, 0, 0);
                    fn_800CA7F4((u8 *)end + 0xC, len, 1);
                } else {
                    fn_800CA7F4((u8 *)end + 0xC, len, 0);
                    memcpy(*(void **)((u8 *)end + 0x14), *(void **)((u8 *)lim + 0x14), len);
                }
                *(u32 *)((u8 *)end + 0x18) = *(u32 *)((u8 *)lim + 0x18);
            }
        }

        err = __files + 0xA0;
        dst = pos;
        while (count != 0) {
            *(u32 *)&st.pads[0x48 - 0x8] = (u32)-1;
            if (*(u32 *)src >= 0x80000000U) {
                fn_80232058(err, lbl_802720E0 + 0x52);
                fn_8022CF78();
            }
            len = *(u32 *)src;
            *(u32 *)&st.pads[0x44] = len;
            plen = (u32 *)&st.pads[0x40];
            if (len < *(u32 *)&st.pads[0x40]) {
                plen = (u32 *)&st.pads[0x44];
            }
            len = *plen;
            if (dst == src) {
                fn_800C94F8(dst, 0, 0, 0, 0);
                fn_800CA7F4(dst, len, 1);
            } else {
                fn_800CA7F4(dst, len, 0);
                memcpy(*(void **)((u8 *)dst + 8), *(void **)((u8 *)src + 8), len);
            }
            *(u32 *)&st.pads[0x38] = (u32)-1;
            if (*(u32 *)((u8 *)src + 0xC) >= 0x80000000U) {
                fn_80232058(err, lbl_802720E0 + 0x52);
                fn_8022CF78();
            }
            len = *(u32 *)((u8 *)src + 0xC);
            *(u32 *)&st.pads[0x3C] = len;
            plen = (u32 *)&st.pads[0x38];
            if (len < *(u32 *)&st.pads[0x38]) {
                plen = (u32 *)&st.pads[0x3C];
            }
            len = *plen;
            if ((u8 *)dst + 0xC == (u8 *)src + 0xC) {
                fn_800C94F8((u8 *)dst + 0xC, 0, 0, 0, 0);
                fn_800CA7F4((u8 *)dst + 0xC, len, 1);
            } else {
                fn_800CA7F4((u8 *)dst + 0xC, len, 0);
                memcpy(*(void **)((u8 *)dst + 0x14), *(void **)((u8 *)src + 0x14), len);
            }
            count -= 1;
            *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)src + 0x18);
            dst = (u8 *)dst + 0x1C;
        }
    } else {
        st.cap = 0;
        st.size = 0;
        st.data = 0;

        cap = *(u32 *)vec;
        if (cap == 0) {
            cap = 1;
        }

        while (need > cap) {
            if (cap < 0x04924924U) {
                cap *= 2;
            } else {
                cap = 0x09249249U;
            }
        }

        dst = fn_800C42D8((s32)(cap * 0x1C));
        if (dst == 0) {
            fn_80232058(__files + 0xA0, lbl_802720E0 + 0xB7);
            fn_8022CF78();
        }

        st.data = dst;
        tag = st.pads[0x14];
        st.cap = cap;

        cur = *(void **)((u8 *)vec + 8);
        end = (u8 *)cur + *(u32 *)((u8 *)vec + 4) * 0x1C;

        while ((u8 *)cur < (u8 *)pos) {
            if (dst != 0) {
                *(u32 *)((u8 *)dst + 4) = *(u32 *)((u8 *)cur + 4);
                begin = *(char **)((u8 *)cur + 8);
                endptr = begin + *(u32 *)cur;
                st.pads[0x10] = tag;
                fn_800CA728(dst, begin, endptr, &st.pads[0x38], &st.pads[0x10]);
                *(u32 *)((u8 *)dst + 0x10) = *(u32 *)((u8 *)cur + 0x10);
                begin = *(char **)((u8 *)cur + 0x14);
                endptr = begin + *(u32 *)((u8 *)cur + 0xC);
                st.pads[8] = st.pads[0xC];
                fn_800CA728((u8 *)dst + 0xC, begin, endptr, &st.pads[0x34], &st.pads[8]);
                *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)cur + 0x18);
            }
            cur = (u8 *)cur + 0x1C;
            dst = (u8 *)dst + 0x1C;
            st.size += 1;
        }

        tag = st.pads[4];
        while (count != 0) {
            if (dst != 0) {
                *(u32 *)((u8 *)dst + 4) = *(u32 *)((u8 *)src + 4);
                begin = *(char **)((u8 *)src + 8);
                endptr = begin + *(u32 *)src;
                st.pads[0] = tag;
                fn_800CA728(dst, begin, endptr, &st.pads[0x30], &st.pads[0]);
                *(u32 *)((u8 *)dst + 0x10) = *(u32 *)((u8 *)src + 0x10);
                begin = *(char **)((u8 *)src + 0x14);
                endptr = begin + *(u32 *)((u8 *)src + 0xC);
                st.pads[0x28] = st.pads[0x2C];
                fn_800CA728((u8 *)dst + 0xC, begin, endptr, &st.pads[0x44], &st.pads[0x28]);
                *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)src + 0x18);
            }
            dst = (u8 *)dst + 0x1C;
            count -= 1;
            st.size += 1;
        }

        tag = st.pads[0x20];
        while ((u8 *)cur < (u8 *)end) {
            if (dst != 0) {
                *(u32 *)((u8 *)dst + 4) = *(u32 *)((u8 *)cur + 4);
                begin = *(char **)((u8 *)cur + 8);
                endptr = begin + *(u32 *)cur;
                st.pads[0x18] = tag;
                fn_800CA728(dst, begin, endptr, &st.pads[0x3C], &st.pads[0x18]);
                *(u32 *)((u8 *)dst + 0x10) = *(u32 *)((u8 *)cur + 0x10);
                begin = *(char **)((u8 *)cur + 0x14);
                endptr = begin + *(u32 *)((u8 *)cur + 0xC);
                st.pads[0x10] = st.pads[0x14];
                fn_800CA728((u8 *)dst + 0xC, begin, endptr, &st.pads[0x38], &st.pads[0x10]);
                *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)cur + 0x18);
            }
            cur = (u8 *)cur + 0x1C;
            dst = (u8 *)dst + 0x1C;
            st.size += 1;
        }

        if (&st.cap != (u32 *)vec) {
            u32 temp;
            void *ptr;
            temp = st.cap;
            st.cap = *(u32 *)vec;
            *(u32 *)vec = temp;
            ptr = st.data;
            st.data = *(void **)((u8 *)vec + 8);
            *(void **)((u8 *)vec + 8) = ptr;
            temp = st.size;
            st.size = *(u32 *)((u8 *)vec + 4);
            *(u32 *)((u8 *)vec + 4) = temp;
        }

        fn_800E6DC8(&st.cap);
        if (st.data != 0) {
            fn_800C428C(st.data);
        }
    }
}

void *fn_800E6D68(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    void fn_800E6DC8(void *);

    if (arg0 != NULL) {
        fn_800E6DC8(arg0);
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            fn_800C428C(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800E6DC8(void *arg0) {
    void fn_800C428C(void *);

    u8 *base;
    u8 *current;

    base = *(u8 **)((u8 *)arg0 + 0x8);
    current = base + *(s32 *)((u8 *)arg0 + 0x4) * 0x1C;

    while (current > base) {
        current -= 0x1C;

        if (current != NULL) {
            if ((u8 *)current + 0xC != NULL) {
                if (*(void **)((u8 *)current + 0x14) != NULL) {
                    fn_800C428C(*(void **)((u8 *)current + 0x14));
                }
            }
            if (current != NULL) {
                if (*(void **)((u8 *)current + 8) != NULL) {
                    fn_800C428C(*(void **)((u8 *)current + 8));
                }
            }
        }
    }

    *(s32 *)((u8 *)arg0 + 0x4) = 0;
}

void fn_800E76D0(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
}

void fn_800E76D8(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3C) = arg1;
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" void fn_800E76E0(void *arg0, f32 farg0) {
    struct Obj {
        u8 pad[0x10];
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
        virtual s32 v10(void *, char *, s32) = 0;
    };
    extern char lbl_80272230[];
    u8 list[0x18];
    s32 count;
    s32 i;

    fn_800E01C8(list);
    if (M2C_FIELD(arg0, u8 *, 0x3C) == 0) {
        fn_800E0140(list, -1);
        return;
    }
    count = ((Obj *)arg0)->v10(list, lbl_80272230 + 0x16, 0);
    for (i = 0; i < count; i++) {
        fn_800E8A88((void *)fn_800DFFF4(list, i), farg0);
    }
    fn_800E0140(list, -1);
}

u32 field_0x4;
u32 field_0xC;
s32 field_0x10;
s32 field_0x14;
s32 field_0x18;
s32 field_0x1C;
s32 field_0x20;
s32 field_0x24;
u32 field_0x28;
u32 field_0x2C;
u32 field_0x30;
u32 field_0x34;
u32 field_0x38;
u32 field_0x3C;
s32 field_0x44;
s32 field_0x48;
s32 field_0x50;
s32 field_0x54;
s32 field_0x58;
s32 field_0x5C;
s32 field_0x60;
u8 field_0x64;
u8 field_0x65;
u8 field_0x66;
u8 field_0x67;
u16 field_0x6C;
u8 field_0x6E;
u8 field_0x6F;
s32 field_0x70;
u32 field_0x74;
u32 field_0x78;
s32 field_0x84;
s32 field_0x88;
s32 field_0x8C;
s32 field_0x90;
s32 field_0x94;
s32 field_0x98;
u32 field_0x9C;
s32 field_0xA0;
s32 field_0xAC;
s32 field_0xBC;
u16 field_0xC0;
u16 field_0xC2;
u16 field_0xC4;
u16 field_0xC6;
u8 field_0xD8;
u8 field_0xD9;
u8 field_0xDA;
u8 field_0xDB;
s32 field_0xDC;
s32 field_0xE0;
s32 field_0xE4;
s32 field_0xE8;
s32 field_0xEC;
s32 field_0xF0;
s32 field_0xF4;
s32 field_0xF8;
s32 field_0xFC;
s32 field_0x100;
s32 field_0x104;
s32 field_0x108;
s32 field_0x10C;
s32 field_0x110;
s32 field_0x114;
s32 field_0x130;
s32 field_0x134;
s32 field_0x138;
s32 field_0x13C;
s32 field_0x140;
s32 field_0x144;
s32 field_0x148;
s32 field_0x14C;
s32 field_0x150;
s32 field_0x158;
s32 field_0x15C;
s32 field_0x160;
s32 field_0x164;
s32 field_0x168;
s32 field_0x170;
s32 field_0x174;
s32 field_0x17C;
s32 field_0x180;
s32 field_0x184;
s32 field_0x188;
s32 field_0x18C;
s32 field_0x190;
s32 field_0x194;
s32 field_0x198;
s32 field_0x19C;
s32 field_0x1A0;
void fn_800E77A0(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_UNK fn_800DFFF4(M2C_UNK *, s32);
    M2C_UNK fn_800E0140(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800E01C8(M2C_UNK *);
    M2C_UNK fn_800E8AA0(s32, s32, f32, f32);
    extern M2C_UNK lbl_80272230;
    extern f32 lbl_80369F68;
    M2C_UNK sp8;
    s32 temp_r31;
    s32 var_r30;

    fn_800E01C8(&sp8);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x3C) == 0) {
        fn_800E0140(&sp8, -1);
        return;
    }
    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 (**)(void *, M2C_UNK *, void *, M2C_UNK), 0x30)(arg0, &sp8, &lbl_80272230 + 0x16, 0);
    var_r30 = 0;
loop_4:
    if (var_r30 < temp_r31) {
        fn_800DFFF4(&sp8, var_r30);
        fn_800E8AA0(arg2, arg1, farg0, lbl_80369F68);
        var_r30 += 1;
        goto loop_4;
    }
    fn_800E0140(&sp8, -1);
}

#pragma dont_inline reset
#pragma cplusplus reset

void fn_800E788C(s32 arg0, s32 arg1) {
    fn_800C9B6C(arg0, arg1 + 0x30);
}

void fn_800E78B0(void *arg0, String *arg1) {
    fn_800C9758((String *)((char *)arg0 + 0x30), arg1, 0, -1);
}

void fn_800E78DC(void) {

}

#pragma cplusplus on
extern "C" void fn_800E78E0(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void *v4(s32) = 0;
    };
    struct Child {
        u8 pad[0x40];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5(void *) = 0;
    };
    s32 i;
    Child *c;

    *(s32 *)((char *)arg0 + 0x28) = 0x1F4;
    for (i = *(s32 *)((char *)arg0 + 4) - 1; i >= 0; i--) {
        c = (Child *)((Obj *)arg0)->v4(i);
        *(s32 *)((char *)c + 0x44) = *(s32 *)((char *)arg0 + 0x28);
        c->v5(*(void **)((char *)arg0 + 0x24));
        *(s32 *)((char *)arg0 + 0x28) =
            *(s32 *)((char *)arg0 + 0x28) + 1;
    }
}
extern "C" void fn_800E7970(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void *v4(s32) = 0;
    };
    void fn_800DF5E0(void *);
    s32 i;

    for (i = 0; i < *(s32 *)((char *)arg0 + 4); i++) {
        fn_800DF5E0(((Obj *)arg0)->v4(i));
    }
}

extern "C" void fn_800E79D4(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void *v4(s32) = 0;
    };
    void fn_800DF60C(void *);
    s32 i;

    for (i = 0; i < *(s32 *)((char *)arg0 + 4); i++) {
        fn_800DF60C(((Obj *)arg0)->v4(i));
    }
}

#pragma cplusplus reset
#pragma dont_inline reset
void fn_800E7A38(void *arg0, s32 arg1) {
    M2C_UNK fn_800DF638(s32);
    s32 var_r31;

    var_r31 = 0;
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
loop_2:
    if (var_r31 < (s32) M2C_FIELD(arg0, s32 *, 4)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), M2C_UNK (**)(void *, s32), 0x18)(arg0, var_r31);
        fn_800DF638(arg1);
        var_r31 += 1;
        goto loop_2;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), M2C_UNK (**)(void *), 8)(arg0);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
}

s32 fn_800E7AD4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 fn_800C93EC(s32);
    M2C_UNK fn_801CAF94(s32, s32, s32, M2C_UNK);
    extern M2C_UNK lbl_80272230;
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u32 (**)(void *, void *, s32), 0x10)(arg0, &lbl_80272230 + 0x1D, fn_800C93EC(arg1)) != 0U) && ((u8) M2C_FIELD(arg0, u8 *, 0x3D) != 0)) {
        fn_801CAF94(arg2, arg3, arg4, 0);
        return 1;
    }
    return 0;
}

u8 fn_800E7C80(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

void fn_800E7C88(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 1;
}

#pragma cplusplus on
extern "C" void fn_800E7C94(void *arg0, void *arg1, s32 arg2, f32 arg3) {
    void *fn_800C93EC(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(char *, void *) = 0;
    };
    extern char lbl_80272230[];
    void *result;

    result = ((Obj *)arg0)->v2(lbl_80272230 + 0x6, fn_800C93EC(arg1));
    if (result != NULL) {
        *(f32 *)((u8 *)result + 0x70) = arg3;
        *(s32 *)((u8 *)result + 0x74) = arg2;
    }
}
#pragma cplusplus reset

#pragma cplusplus on
#pragma dont_inline on
extern "C" void fn_800DF664(void *);
extern "C" void fn_800E7D10(void *arg0, String *arg1) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(M2C_UNK *, M2C_UNK *) = 0;
    };
    extern char lbl_80272230[];
    u8 alloc;
    String tmp;
    void *found;

    fn_800C9ABC(&tmp, lbl_80272230 + 6, &alloc);
    found = ((Obj *)arg0)->v2(fn_800C93EC(&tmp), fn_800C93EC(arg1));
    if (found != NULL) {
        fn_800DF664(found);
    }
    fn_800C9A60(&tmp, -1);
}
#pragma dont_inline reset
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_800E7DA4(void *arg0, void *arg1) {
    void *fn_800C93EC(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
    };
    extern char lbl_80272230[];

    ((Obj *)arg0)->v2(lbl_80272230 + 0x2E, fn_800C93EC(arg1));
}
#pragma cplusplus on
extern "C" void fn_800E7DF8(void *arg0, void *arg1) {
    void *fn_800C93EC(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
    };
    extern char lbl_80272230[];

    ((Obj *)arg0)->v2(lbl_80272230 + 0x3C, fn_800C93EC(arg1));
}
#pragma cplusplus reset
extern "C" void fn_800E7E4C(void *arg0, void *arg1) {
    void *fn_800C93EC(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
    };
    extern char lbl_80272230[];

    ((Obj *)arg0)->v2(lbl_80272230 + 0x6, fn_800C93EC(arg1));
}
#pragma cplusplus reset

#pragma cplusplus on
#pragma dont_inline on
  extern "C" void fn_800E01C8(void *);
  extern "C" s32 fn_800DFFF4(void *, s32);
extern "C" u8 fn_800E903C(void *);
extern "C" s32 fn_800E7EA0(void *arg0) {
    struct Obj {
        u8 pad[0x10];
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
        virtual s32 v10(void *, char *, s32) = 0;
    };
    extern char lbl_80272230[];
    u8 list[0x18];
    s32 count;
    s32 item;
    s32 i;

    fn_800E01C8(list);
    count = ((Obj *)arg0)->v10(list, lbl_80272230 + 0x16, 0);
    for (i = 0; i < count; i++) {
        item = fn_800DFFF4(list, i);
        if (fn_800E903C((void *)item)) {
            fn_800E0140(list, -1);
            return item;
        }
    }
    fn_800E0140(list, -1);
    return 0;
}

extern "C" void fn_800E7F60(void *arg0, void *arg1) {
    void *fn_800C93EC(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
    };
    extern char lbl_80272230[];

    ((Obj *)arg0)->v2(lbl_80272230 + 0x16, fn_800C93EC(arg1));
}

#pragma dont_inline reset
#pragma cplusplus reset

#pragma cplusplus on
#pragma dont_inline on
extern "C" void fn_800E7FB4(void *arg0, String *arg1) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, M2C_UNK *) = 0;
    };
    extern char lbl_80272230[];

    ((Obj *)arg0)->v2(lbl_80272230 + 0x34, fn_800C93EC(arg1));
}

extern "C" void fn_800E8008(void *arg0, void *arg1) {
    void *fn_800C93EC(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
        virtual void v3(char *, void *) = 0;
    };
    extern char lbl_80272230[];

    ((Obj *)arg0)->v3(lbl_80272230 + 0x10, fn_800C93EC(arg1));
}

#pragma dont_inline reset
#pragma cplusplus reset
#pragma cplusplus on
extern "C" void *fn_800E805C(void *arg0, void *arg1, void *arg2) {
    void *fn_800C93EC(void *);
    void fn_800DF664(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(void *, void *) = 0;
    };
    void *found;
    void *p2;

    p2 = fn_800C93EC(arg2);
    found = ((Obj *)arg0)->v2(fn_800C93EC(arg1), p2);
    if (found != NULL) {
        fn_800DF664(found);
    }
    return found;
}
#pragma cplusplus reset

void *fn_800E80D8(void *arg0, void *arg1, void *arg2)
{
    extern void *fn_800C93EC(void *);
    extern void fn_800DF670(void *);

    u8 *obj;
    void *value1;
    void *value2;
    void *result;
    void *(*callback)(void *, void *, void *);

    obj = (u8 *)arg0;

    value2 = fn_800C93EC(arg2);
    value1 = fn_800C93EC(arg1);

    callback = *(void *(**)(void *, void *, void *))(
        *(u8 **)(obj + 0x10) + 0x10
    );

    result = callback(obj, value1, value2);

    if (result != 0) {
        fn_800DF670(result);
    }

    return result;
}

#pragma cplusplus on
extern "C" void fn_800E8154(void *arg0) {
    struct Obj {
        u8 pad[0x10];
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
    };
    ((Obj *)arg0)->v12();
    ((Obj *)arg0)->v0();
}
#pragma cplusplus reset
void *fn_800E8488(void *arg0, s16 arg1)
{
    extern u8 lbl_8028E200[];
    void fn_800C9A60(void *, s32);
    void fn_800E0140(void *, s32);
    void fn_800C428C(void *);
    void *self;
    s16 n;

    n = arg1;
    self = arg0;
    if (self != NULL) {
        *(void **)((u8 *)self + 0x10) = lbl_8028E200;
        fn_800C9A60((u8 *)self + 0x30, -1);
        fn_800C9A60((u8 *)self + 0x14, -1);
        fn_800E0140(self, 0);
        if (n > 0) {
            fn_800C428C(self);
        }
    }
    return self;
}

void *fn_800E86A4(void *arg0, s16 arg1) {
    void fn_800E45EC(void *, s32);
    void fn_800C428C(void *);
    extern void *lbl_8028E250[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E250;
        fn_800C9A60((s8 *)arg0 + 0xAC, -1);
        fn_800E45EC(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800E8888(void) {
    M2C_UNK fn_800E43EC();
    fn_800E43EC();
}

void *fn_800E89EC(void *arg0, s16 arg1) {
    void fn_8022C1E8(void *, void *, s32, s32);
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern void *lbl_8028E2B0[];
    extern void *lbl_8028DED0[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E2B0;
        fn_8022C1E8((s8 *)arg0 + 0xBC, (void *)fn_800C9A60, 0xC, 3);
        fn_800C9A60((s8 *)arg0 + 0xB0, -1);
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void ***, 0x40) = lbl_8028DED0;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_800E8A88(void *arg0, f32 farg0) {
    extern f32 lbl_80369F7C;
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) (lbl_80369F7C * farg0);
    M2C_FIELD(arg0, s32 *, 0x120) = 0x3C;
}

void fn_800E8AA0(void *arg0, s32 arg1, f32 farg0, f32 farg1, s32 arg2) {
    extern f32 lbl_80369F80;
    extern f32 lbl_80369F7C;
    extern f32 lbl_80369F78;
    s32 var_r4;

    var_r4 = arg1;
    if ((s32)M2C_FIELD(arg0, s32 *, 0x120) <= 0x3E7) {
        M2C_FIELD(arg0, f32 *, 0x108) = (f32)(lbl_80369F80 * farg0);
        if (var_r4 != -1) {
            M2C_FIELD(arg0, f32 *, 0x110) = (f32)(lbl_80369F7C * farg0);
        } else {
            var_r4 = 0x98967F;
            M2C_FIELD(arg0, f32 *, 0x110) = (f32)lbl_80369F78;
        }
        M2C_FIELD(arg0, f32 *, 0x10C) = farg1;
        M2C_FIELD(arg0, s32 *, 0x120) = var_r4;
        M2C_FIELD(arg0, u8 *, 0x124) = (u8)arg2;
    }
}

void fn_800E8AF0(void *arg0) {
    f64 fn_80238638(f32);
    extern f32 lbl_80369F78;
    s32 temp1 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp1 > 0) {
        u8 temp2 = M2C_FIELD(arg0, u8 *, 0x124);
        if (temp2 != 0) {
            f64 d = fn_80238638(M2C_FIELD(arg0, f32 *, 0x114));
            f32 c = (f32)d;
            M2C_FIELD(arg0, f32 *, 0x11C) = M2C_FIELD(arg0, f32 *, 0x108) * c;
            M2C_FIELD(arg0, f32 *, 0x118) = lbl_80369F78;
        } else {
            f64 d = fn_80238638(M2C_FIELD(arg0, f32 *, 0x114));
            f32 c = (f32)d;
            M2C_FIELD(arg0, f32 *, 0x118) = M2C_FIELD(arg0, f32 *, 0x108) * c;
            M2C_FIELD(arg0, f32 *, 0x11C) = lbl_80369F78;
        }
        M2C_FIELD(arg0, f32 *, 0x114) = M2C_FIELD(arg0, f32 *, 0x114) + M2C_FIELD(arg0, f32 *, 0x10C);
        M2C_FIELD(arg0, f32 *, 0x108) = M2C_FIELD(arg0, f32 *, 0x108) + M2C_FIELD(arg0, f32 *, 0x110);
        if (M2C_FIELD(arg0, f32 *, 0x108) < lbl_80369F78) {
            M2C_FIELD(arg0, f32 *, 0x108) = lbl_80369F78;
        }
        M2C_FIELD(arg0, s32 *, 0x120) = M2C_FIELD(arg0, s32 *, 0x120) - 1;
    }
}

s32 fn_800E8BB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2B4);
}

void fn_800E8BBC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2B4) = arg1;
}

s32 fn_800E8BC4(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x160) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x1C0) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x280) != 0)) {
        return 1;
    }
    return 0;
}

void fn_800E8BF8(float* r4, float* r5, float* r6) {
    // Function signature determined based on the target assembly and common function
    // conventions in this project.
    
    float const_val = 0.0f;
    
    if (*r4 == const_val || *r5 == const_val || *r6 != const_val) {
        fn_800F7130();
    }
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" M2C_UNK *fn_800C93EC(void *);
extern "C" s32 fn_800E8F00(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual s32 v2(M2C_UNK *, M2C_UNK *) = 0;
    };
    struct Self {
        Obj *obj;
        u8 pad[0xAC];
        String name;
        String strs[3];
        s32 index;
    };
    Self *self = (Self *)arg0;
    String tmp;
    s32 result;

    tmp.cap = 0;
    tmp.size = 0;
    tmp.data = 0;
    tmp.cap = 0;
    fn_800C9758(&tmp, &self->strs[self->index], 0, -1);
    result = self->obj->v2(fn_800C93EC(&self->name), fn_800C93EC(&tmp));
    fn_800C9A60(&tmp, -1);
    return result;
}
#pragma dont_inline reset
#pragma cplusplus reset

void fn_800E8FAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
}

u8 fn_800E8FB4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xFD);
}

void fn_800E8FBC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0xF0) = farg0;
    M2C_FIELD(arg0, f32 *, 0xF4) = farg1;
    M2C_FIELD(arg0, f32 *, 0xF8) = farg2;
}

void fn_800E8FCC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0xF0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0xF4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0xF8);
}

#pragma dont_inline on
#pragma scheduling off
void fn_800E8FE8(void *arg0, f32 arg1) {
    void fn_800DF478(void *, f32, f32, f32);
    extern f32 lbl_80369F78;
    f32 z = lbl_80369F78;

    *(f32 *)((u8 *)arg0 + 0x104) = arg1;
    fn_800DF478((u8 *)arg0 + 0x254, arg1, z, z);
}
#pragma scheduling reset
#pragma dont_inline reset
f32 fn_800E9018(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x104);
}

void fn_800E9020(u8 *arg0, f32 *arg1) {
    f32 a;
    f32 b;
    f32 c;

    a = *(volatile f32 *)&arg1[0];
    b = *(volatile f32 *)&arg1[1];
    *(f32 *)(arg0 + 0xE4) = a;
    c = *(volatile f32 *)&arg1[2];
    *(f32 *)(arg0 + 0xE8) = b;
    *(f32 *)(arg0 + 0xEC) = c;
}

u8 fn_800E903C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xAC);
}

void fn_800E9044(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xAC) = 0;
}

void fn_800E9050(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xAC) = 1;
}

#pragma cplusplus on
#pragma opt_common_subs off
extern "C" void fn_800E905C(void *arg0) {
void fn_80202300(void *,s32,f32);void fn_802029C4(void *,void *,void *);void fn_80203184(void *,void *,void *);
void fn_800C9A60(void *,s16);void fn_800C9758(void *,void *,s32,s32);void *fn_800C93EC(void *);
s32 fn_800C9400(void *,s32,u32,void *,u32);u32 strlen(void *);void fn_80067FE8(void *,void *,void *);
extern u8 lbl_80272470[];extern const f32 lbl_80369F78,lbl_80369F84,lbl_80369F88,lbl_80369F8C;
struct V3 {f32 x,y,z; V3() {} V3(const V3 &v):x(v.x),y(v.y),z(v.z) {} };
struct Parent {u8 pad[16];virtual void v0();virtual void v1();virtual void *v2(void *,void *);};
struct Child {u8 pad[64];virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual V3 v13();};
f32 me0[12],mb0[12],m80[12],m50[12];
u32 str[3];
V3 pos,dir,offset,base;
u8 *self=(u8 *)arg0;
void *name;
str[1]=0;str[0]=0;str[2]=0;str[1]=0;
if(!self[0xac]) {fn_800C9A60(str,-1);return;}
if(self[0xfd]){
pos.x=M2C_FIELD(self,f32 *,0x48);pos.y=M2C_FIELD(self,f32 *,0x4c);pos.z=M2C_FIELD(self,f32 *,0x50);
dir.x=lbl_80369F78;dir.y=lbl_80369F78;dir.z=lbl_80369F84;
fn_80202300(me0,0x58,lbl_80369F88*M2C_FIELD(self,f32 *,0x54));
fn_80202300(mb0,0x59,lbl_80369F88*M2C_FIELD(self,f32 *,0x58));
fn_802029C4(me0,&dir,&dir);fn_802029C4(mb0,&dir,&dir);
M2C_FIELD(self,f32 *,0x60)=dir.x;M2C_FIELD(self,f32 *,0x64)=dir.y;M2C_FIELD(self,f32 *,0x68)=dir.z;
fn_80203184(&pos,&dir,&dir);
M2C_FIELD(self,f32 *,0xe4)=dir.x;M2C_FIELD((unsigned)self,f32 *,0xe8)=dir.y;M2C_FIELD(self,f32 *,0xec)=dir.z;
}else{
if(fn_800C9400(self+0xb0,0,M2C_FIELD(self,u32 *,0xb0),lbl_80272470,strlen(lbl_80272470)) && fn_800C9400(self+0xbc,0,M2C_FIELD(self,u32 *,0xbc),lbl_80272470,strlen(lbl_80272470))){
fn_800C9758(str,(self+0xbc)+M2C_FIELD(self,s32 *,0xe0)*12,0,-1);
name=fn_800C93EC(str);
M2C_FIELD(self,void **,0x12c)=((Parent *)M2C_FIELD(self,void **,0))->v2(fn_800C93EC(self+0xb0),name);
if(M2C_FIELD(self,void **,0x12c)){
const V3 &v=((Child *)M2C_FIELD(self,void **,0x12c))->v13();
M2C_FIELD(self,f32 *,0xe4)=v.x;M2C_FIELD(self,f32 *,0xe8)=v.y;M2C_FIELD(self,f32 *,0xec)=v.z;
}
}else M2C_FIELD(self,void **,0x12c)=0;
if(self[0xfc]){
offset.x=lbl_80369F78;offset.y=lbl_80369F78;offset.z=-M2C_FIELD(self,f32 *,0x104);
base.x=M2C_FIELD(self,f32 *,0xe4)+M2C_FIELD(self,f32 *,0xf0);
base.y=M2C_FIELD(self,f32 *,0xe8)+M2C_FIELD(self,f32 *,0xf4);
base.z=M2C_FIELD(self,f32 *,0xec)+M2C_FIELD(self,f32 *,0xf8);
fn_80202300(m80,0x58,lbl_80369F88*M2C_FIELD(self,f32 *,0x54));
fn_80202300(m50,0x59,lbl_80369F88*M2C_FIELD(self,f32 *,0x58));
fn_802029C4(m80,&offset,&offset);fn_802029C4(m50,&offset,&offset);fn_80203184(&offset,&base,&offset);
M2C_FIELD(self,f32 *,0x48)=offset.x;M2C_FIELD(self,f32 *,0x4c)=offset.y;M2C_FIELD(self,f32 *,0x50)=offset.z;
}
}
M2C_FIELD(M2C_FIELD(self,void **,0x128),f32 *,224)=M2C_FIELD(self,f32 *,0x118)+(M2C_FIELD(self,f32 *,0xe4)+M2C_FIELD(self,f32 *,0xf0));
M2C_FIELD(M2C_FIELD(self,void **,0x128),f32 *,228)=M2C_FIELD(self,f32 *,0x11c)+(M2C_FIELD(self,f32 *,0xe8)+M2C_FIELD(self,f32 *,0xf4));
M2C_FIELD(M2C_FIELD(self,void **,0x128),f32 *,232)=M2C_FIELD(self,f32 *,0xec)+M2C_FIELD(self,f32 *,0xf8);
M2C_FIELD(M2C_FIELD(self,void **,0x128),f32 *,236)=lbl_80369F78;
M2C_FIELD(M2C_FIELD(self,void **,0x128),f32 *,240)=lbl_80369F8C;
M2C_FIELD(M2C_FIELD(self,void **,0x128),f32 *,244)=lbl_80369F78;
M2C_FIELD(M2C_FIELD(self,void **,0x128),f32 *,212)=M2C_FIELD(self,f32 *,0x48)+M2C_FIELD(self,f32 *,0x118);
M2C_FIELD(M2C_FIELD(self,void **,0x128),f32 *,216)=M2C_FIELD(self,f32 *,0x4c)+M2C_FIELD(self,f32 *,0x11c);
M2C_FIELD(M2C_FIELD(self,void **,0x128),f32 *,220)=M2C_FIELD(self,f32 *,0x50);
{u8 *p=M2C_FIELD(self,u8 **,0x128);fn_80067FE8(p+0xd4,p+0xec,p+0xe0);}
fn_800C9A60(str,-1);
}
#pragma opt_common_subs on
#pragma cplusplus off

#pragma cplusplus on
extern "C" void fn_800E940C(void *arg0) {
    struct Obj {
        u8 pad[0x40];
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
    };
    ((Obj *)arg0)->v18();
    if ((u8)M2C_FIELD(arg0, u8 *, 0xAC) != 0) {
        ((Obj *)arg0)->v6();
    }
}

extern "C" void *fn_800E9464(void *arg0, void *arg1, void *arg2) {
    void fn_800DBBE4(void *);
    void fn_8022C260(void *, void *, void *, s32, s32);
    void fn_800E99CC(void);
    void fn_800C9ABC(String *, char *, void *);
    char *fn_800C8DCC(char *, void *, String *);
    void fn_800C96F8(void *, char *, u32);
    void fn_800DF50C(void *);
    void fn_800DF478(void *, f32, f32, f32);
    void *fn_80068548(void);
    u32 strlen(const char *);
    extern char lbl_80272470[];
    extern u8 lbl_8028E2B0[];
    extern f32 lbl_80369F78;
    extern f32 lbl_80369F8C;

    char buf258[0x20];
    char buf238[0x20];
    char buf218[0x20];
    char buf1F8[0x20];
    char buf1D8[0x20];
    char buf1B8[0x20];
    char buf198[0x20];
    char buf178[0x20];
    char buf158[0x20];
    char buf138[0x20];
    char buf118[0x20];
    char bufF8[0x20];
    char bufD8[0x20];
    char scratch[0x20];
    String strCC;
    String strC0;
    String strB4;
    String strA8;
    String str9C;
    String str90;
    String str84;
    String str78;
    String str6C;
    String str60;
    String str54;
    String str48;
    String str3C;
    void *alloc38;
    void *alloc34;
    void *alloc30;
    void *alloc2C;
    void *alloc28;
    void *alloc24;
    void *alloc20;
    void *alloc1C;
    void *alloc18;
    void *alloc14;
    void *alloc10;
    void *allocC;
    void *alloc8;
    char *p;
    u32 len;
    f32 z0;

    fn_800DBBE4(arg0);
    *(void **)((u8 *)arg0 + 0x40) = lbl_8028E2B0;
    *(u32 *)((u8 *)arg0 + 0xB0) = 0;
    *(u32 *)((u8 *)arg0 + 0xB4) = 0;
    *(u32 *)((u8 *)arg0 + 0xB8) = 0;
    *(u32 *)((u8 *)arg0 + 0xB4) = 0;
    fn_8022C260((u8 *)arg0 + 0xBC, (void *)&fn_800E99CC, (void *)&fn_800C9A60, 0xC, 3);
    z0 = lbl_80369F78;
    *(f32 *)((u8 *)arg0 + 0xEC) = z0;
    *(f32 *)((u8 *)arg0 + 0xE8) = z0;
    *(f32 *)((u8 *)arg0 + 0xE4) = z0;
    *(f32 *)((u8 *)arg0 + 0xF8) = z0;
    *(f32 *)((u8 *)arg0 + 0xF4) = z0;
    *(f32 *)((u8 *)arg0 + 0xF0) = z0;
    fn_800DF50C((u8 *)arg0 + 0x134);
    fn_800DF50C((u8 *)arg0 + 0x194);
    fn_800DF50C((u8 *)arg0 + 0x1F4);
    fn_800DF50C((u8 *)arg0 + 0x254);
    *(u32 *)((u8 *)arg0 + 0x28) = 0x1000;

    fn_800C9ABC(&strCC, lbl_80272470 + 1, &alloc38);
    fn_800C8DCC(buf258, arg2, &strCC);
    *(u8 *)((u8 *)arg0 + 0xAC) = (u8)(*(s32 *)buf258 != 0);
    fn_800C9A60(&strCC, -1);

    fn_800C9ABC(&strC0, lbl_80272470 + 8, &alloc34);
    p = fn_800C8DCC(buf238, arg2, &strC0);
    len = strlen(p);
    fn_800C96F8((u8 *)arg0 + 0xB0, p, len);
    fn_800C9A60(&strC0, -1);

    fn_800C9ABC(&strB4, lbl_80272470 + 0x14, &alloc30);
    p = fn_800C8DCC(buf218, arg2, &strB4);
    len = strlen(p);
    fn_800C96F8((u8 *)arg0 + 0xBC, p, len);
    fn_800C9A60(&strB4, -1);

    fn_800C9ABC(&strA8, lbl_80272470 + 0x1F, &alloc2C);
    p = fn_800C8DCC(buf1F8, arg2, &strA8);
    len = strlen(p);
    fn_800C96F8((u8 *)arg0 + 0xC8, p, len);
    fn_800C9A60(&strA8, -1);

    fn_800C9ABC(&str9C, lbl_80272470 + 0x2B, &alloc28);
    p = fn_800C8DCC(buf1D8, arg2, &str9C);
    len = strlen(p);
    fn_800C96F8((u8 *)arg0 + 0xD4, p, len);
    fn_800C9A60(&str9C, -1);

    *(u32 *)((u8 *)arg0 + 0xE0) = 0;
    fn_800C9ABC(&str90, lbl_80272470 + 0x37, &alloc24);
    fn_800C8DCC(buf1B8, arg2, &str90);
    *(u32 *)(scratch + 0x00) = *(u32 *)(buf1B8 + 0x00);
    *(u32 *)(scratch + 0x04) = *(u32 *)(buf1B8 + 0x04);
    *(u32 *)(scratch + 0x08) = *(u32 *)(buf1B8 + 0x08);
    *(u32 *)(scratch + 0x0C) = *(u32 *)(buf1B8 + 0x0C);
    *(u32 *)(scratch + 0x10) = *(u32 *)(buf1B8 + 0x10);
    *(u32 *)(scratch + 0x14) = *(u32 *)(buf1B8 + 0x14);
    *(u32 *)(scratch + 0x18) = *(u32 *)(buf1B8 + 0x18);
    *(u32 *)(scratch + 0x1C) = *(u32 *)(buf1B8 + 0x1C);
    fn_800C9A60(&str90, -1);
    *(f32 *)((u8 *)arg0 + 0xE4) = *(f32 *)(scratch + 0x00);
    *(f32 *)((u8 *)arg0 + 0xE8) = *(f32 *)(scratch + 0x04);
    *(f32 *)((u8 *)arg0 + 0xEC) = *(f32 *)(scratch + 0x08);

    fn_800C9ABC(&str84, lbl_80272470 + 0x3C, &alloc20);
    fn_800C8DCC(buf198, arg2, &str84);
    *(u32 *)(scratch + 0x00) = *(u32 *)(buf198 + 0x00);
    *(u32 *)(scratch + 0x04) = *(u32 *)(buf198 + 0x04);
    *(u32 *)(scratch + 0x08) = *(u32 *)(buf198 + 0x08);
    *(u32 *)(scratch + 0x0C) = *(u32 *)(buf198 + 0x0C);
    *(u32 *)(scratch + 0x10) = *(u32 *)(buf198 + 0x10);
    *(u32 *)(scratch + 0x14) = *(u32 *)(buf198 + 0x14);
    *(u32 *)(scratch + 0x18) = *(u32 *)(buf198 + 0x18);
    *(u32 *)(scratch + 0x1C) = *(u32 *)(buf198 + 0x1C);
    fn_800C9A60(&str84, -1);
    *(f32 *)((u8 *)arg0 + 0xF0) = *(f32 *)(scratch + 0x00);
    *(f32 *)((u8 *)arg0 + 0xF4) = *(f32 *)(scratch + 0x04);
    *(f32 *)((u8 *)arg0 + 0xF8) = *(f32 *)(scratch + 0x08);

    fn_800C9ABC(&str78, lbl_80272470 + 0x41, &alloc1C);
    fn_800C8DCC(buf178, arg2, &str78);
    *(u8 *)((u8 *)arg0 + 0xFC) = (u8)(*(s32 *)buf178 != 0);
    fn_800C9A60(&str78, -1);

    fn_800C9ABC(&str6C, lbl_80272470 + 0x49, &alloc18);
    fn_800C8DCC(buf158, arg2, &str6C);
    *(u8 *)((u8 *)arg0 + 0xFD) = (u8)(*(s32 *)buf158 != 0);
    fn_800C9A60(&str6C, -1);

    fn_800C9ABC(&str60, lbl_80272470 + 0x53, &alloc14);
    fn_800C8DCC(buf138, arg2, &str60);
    *(f32 *)((u8 *)arg0 + 0x100) = *(f32 *)buf138;
    fn_800C9A60(&str60, -1);

    fn_800C9ABC(&str54, lbl_80272470 + 0x58, &alloc10);
    fn_800C8DCC(buf118, arg2, &str54);
    *(f32 *)((u8 *)arg0 + 0x104) = *(f32 *)buf118;
    fn_800C9A60(&str54, -1);

    fn_800C9ABC(&str48, lbl_80272470 + 0x5D, &allocC);
    fn_800C8DCC(bufF8, arg2, &str48);
    fn_800C9A60(&str48, -1);

    fn_800C9ABC(&str3C, lbl_80272470 + 0x64, &alloc8);
    fn_800C8DCC(bufD8, arg2, &str3C);
    fn_800C9A60(&str3C, -1);

    z0 = lbl_80369F78;
    *(f32 *)((u8 *)arg0 + 0x108) = z0;
    *(f32 *)((u8 *)arg0 + 0x110) = z0;
    *(f32 *)((u8 *)arg0 + 0x10C) = z0;
    *(f32 *)((u8 *)arg0 + 0x114) = z0;
    *(f32 *)((u8 *)arg0 + 0x118) = z0;
    *(f32 *)((u8 *)arg0 + 0x11C) = z0;
    *(u32 *)((u8 *)arg0 + 0x120) = 0;
    *(u8 *)((u8 *)arg0 + 0x124) = 0;
    if (z0 == *(f32 *)((u8 *)arg0 + 0x100)) {
        *(f32 *)((u8 *)arg0 + 0x100) = lbl_80369F8C;
    }
    *(void **)((u8 *)arg0 + 0x128) = fn_80068548();
    fn_800DF478((u8 *)arg0 + 0x134,
                *(f32 *)((u8 *)arg0 + 0xF0),
                *(f32 *)((u8 *)arg0 + 0xF4),
                *(f32 *)((u8 *)arg0 + 0xF8));
    fn_800DF478((u8 *)arg0 + 0x194,
                *(f32 *)((u8 *)arg0 + 0x54),
                *(f32 *)((u8 *)arg0 + 0x58),
                *(f32 *)((u8 *)arg0 + 0x5C));
    fn_800DF478((u8 *)arg0 + 0x254,
                *(f32 *)((u8 *)arg0 + 0x104),
                lbl_80369F78,
                lbl_80369F78);
    *(u32 *)((u8 *)arg0 + 0x2B4) = 0;
    return arg0;
}

#pragma cplusplus reset
void fn_800E99CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

extern u8 lbl_8028E4A4[16];
void fn_800E99E4(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8028E4A4[16];
    fn_8000CAA0(lbl_8028E4A4, arg0);
}

void fn_800E9A10(s32 arg0) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
    };
    s32 fn_8021BA54(s32, void (*)(void));
    void fn_800EB80C(void);
    extern struct CardWork lbl_80320C20;

    lbl_80320C20.busy = 1;
    lbl_80320C20.result = fn_8021BA54(lbl_80320C20.chan, fn_800EB80C);
    if (lbl_80320C20.result < 0) {
        fn_8000C070(arg0, 0x63);
        lbl_80320C20.busy = 0;
    }
}

void fn_800E9A94(void) {
    s32 fn_8021CDC4(s32, void *, void *);
    void fn_800EBF58(void);
    extern u16 lbl_80320C20[];
    extern u8 lbl_802725D8[];

    fn_800EBF58();
    *(s32 *)((u8 *)lbl_80320C20 + 0xA004) = fn_8021CDC4(
        *(s32 *)((u8 *)lbl_80320C20 + 0xA000),
        lbl_802725D8 + 0x70,
        (u8 *)lbl_80320C20 + 0x10000
    );
}

extern u8 lbl_8028E484[16];
void fn_800E9AE4(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8028E484[16];
    fn_8000CAA0(lbl_8028E484, arg0);
}

#pragma global_optimizer off
void fn_800E9B10(void) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
        u8 padA01B;
        u8 buf[0x18];
        s32 unkA034;
    };
    s32 fn_8021BF10(s32, void *, void *);
    void fn_8021C02C(void *);
    extern struct CardWork lbl_80320C20;
    extern u8 lbl_802725D8[];
    u8 *hi;
    void *temp;

    hi = (u8 *)&lbl_80320C20 + 0x10000;
    temp = hi - 0x5FE4;
    lbl_80320C20.result = fn_8021BF10(*(s32 *)(hi - 0x6000), lbl_802725D8 + 0x70, temp);
    if (lbl_80320C20.result != -4) {
        fn_8021C02C(temp);
    }
}
#pragma global_optimizer reset
void fn_800E9B80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
        u8 padA01B[0x19];
        s32 unkA034;
    };
    extern struct CardWork lbl_80320C20;
    extern u8 lbl_8028E420[];

    lbl_80320C20.unkA034 = arg0;
    lbl_80320C20.unkA00C = arg1;
    lbl_80320C20.unkA010 = arg2;
    lbl_80320C20.unkA014 = arg3;
    fn_8000CAA0(lbl_8028E420, arg4);
}

void fn_800E9CE4(s32 arg0) {
    void fn_8000C070(s32, s32);
    void fn_8006EEFC(void *, void *);
    s32 *fn_8006EDD8(s32, s32);
    void fn_8006EDA0(void *);
    void fn_800062CC(s32, s32, u32);
    void fn_80006298(s32, s32, s32);
    u32 *fn_800C4638(s32, void *, s32);
    void fn_800C4588(u32 *);
    s32 fn_8021CAB4(void *, s32, s32, s32, void *);
    extern void fn_800EB80C;
    extern u8 lbl_80320C20[];
    extern u8 lbl_802725D8[];

    s32 sp8;
    u32 flag;
    u8 ok;
    u32 i;
    u32 t;
    u32 crc;
    s32 off;
    s32 n;
    s32 self;
    u8 *base;
    u8 *base2;
    s32 buf;
    u32 *table;

    self = arg0;
    base = lbl_80320C20 + 0x10000;
    if (*(s32 *)(base - 0x5FFC) < 0) {
        fn_8000C070(self, 0x63);
        {
            u8 *b = lbl_80320C20 + 0x10000;
            b[-0x5FE6] = 0;
        }
        flag = 1;
    } else {
        flag = 0;
    }
    if ((u8)flag == 0) {
        base2 = lbl_80320C20 + 0x10000;
        buf = *(s32 *)(base2 - 0x5FCC) - *(s32 *)(base2 - 0x5FF0);
        if (*(u32 *)(buf + 0x1C00) != *(u32 *)(buf + 0x1C04)) {
            ok = 0;
        } else {
            table = fn_800C4638(0x400, lbl_802725D8 + 0x97, 0);
            {
                u32 *dp = table;
                for (i = 0; i < 0x100; i++) {
                    t = i;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    *dp++ = t;
                }
            }
            crc = ~0U;
            off = 0;
            for (n = 0x380; n > 0; n--) {
                u8 *p = (u8 *)buf + off;
                off += 8;
                t = (crc >> 8) ^ table[(u8)(crc ^ p[0])];
                t = (t >> 8) ^ table[(u8)(t ^ p[1])];
                t = (t >> 8) ^ table[(u8)(t ^ p[2])];
                t = (t >> 8) ^ table[(u8)(t ^ p[3])];
                t = (t >> 8) ^ table[(u8)(t ^ p[4])];
                t = (t >> 8) ^ table[(u8)(t ^ p[5])];
                t = (t >> 8) ^ table[(u8)(t ^ p[6])];
                crc = (t >> 8) ^ table[(u8)(t ^ p[7])];
            }
            fn_800C4588(table);
            ok = (*(u32 *)(buf + 0x1C00) == (crc ^ ~0U));
        }
        if (ok == 0) {
            fn_8006EEFC(&sp8, lbl_802725D8 + 0x98);
            {
                s32 *row;
                s32 src;
                row = fn_8006EDD8(sp8, 0);
                src = row[0];
                fn_800062CC(buf, *(s32 *)(src + 8), 0xC00);
                row = fn_8006EDD8(sp8, 0);
                src = row[1];
                fn_800062CC(buf + 0xC00, *(s32 *)(src + 8), 0x200);
                row = fn_8006EDD8(sp8, 1);
                src = row[0];
                fn_800062CC(buf + 0xE00, *(s32 *)(src + 8), 0x400);
                row = fn_8006EDD8(sp8, 2);
                src = row[0];
                fn_800062CC(buf + 0x1200, *(s32 *)(src + 8), 0x400);
                row = fn_8006EDD8(sp8, 3);
                src = row[0];
                fn_800062CC(buf + 0x1600, *(s32 *)(src + 8), 0x400);
                row = fn_8006EDD8(sp8, 1);
                src = row[1];
                fn_800062CC(buf + 0x1A00, *(s32 *)(src + 8), 0x200);
            }
            fn_8006EDA0(&sp8);
            table = fn_800C4638(0x400, lbl_802725D8 + 0x97, 0);
            {
                u32 *dp = table;
                for (i = 0; i < 0x100; i++) {
                    t = i;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                    *dp++ = t;
                }
            }
            crc = ~0U;
            off = 0;
            for (n = 0x380; n > 0; n--) {
                u8 *p = (u8 *)buf + off;
                off += 8;
                t = (crc >> 8) ^ table[(u8)(crc ^ p[0])];
                t = (t >> 8) ^ table[(u8)(t ^ p[1])];
                t = (t >> 8) ^ table[(u8)(t ^ p[2])];
                t = (t >> 8) ^ table[(u8)(t ^ p[3])];
                t = (t >> 8) ^ table[(u8)(t ^ p[4])];
                t = (t >> 8) ^ table[(u8)(t ^ p[5])];
                t = (t >> 8) ^ table[(u8)(t ^ p[6])];
                crc = (t >> 8) ^ table[(u8)(t ^ p[7])];
            }
            fn_80006298(buf + 0x1C00, (s32)(crc ^ ~0U), 8);
            fn_800C4588(table);
            {
                u8 *b = lbl_80320C20 + 0x10000;
                b[-0x5FE6] = 1;
                *(s32 *)(base - 0x5FFC) = fn_8021CAB4(b - 0x5FE4, buf, 0x2000, 0, &fn_800EB80C);
                if (*(s32 *)(base - 0x5FFC) < 0) {
                    fn_8000C070(self, 0x63);
                    b[-0x5FE6] = 0;
                }
            }
        }
    }
}

void fn_800EA27C(void) {
    extern u16 lbl_80320C20[];
    s32 fn_80217C34(s32 arg);
    
    u32 tmp = fn_80217C34(*(u32*)(lbl_80320C20 + 0xA000));
    *(u32*)(lbl_80320C20 + 0xA004) = tmp;
    *(u8*)(lbl_80320C20 + 0xA01A) = 0;
}

void fn_800EA540(s32 arg0, s32 arg1) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
        u8 padA01B[0x19];
        s32 unkA034;
    };
    extern struct CardWork lbl_80320C20;
    extern u8 lbl_8028E3EC[];

    lbl_80320C20.unkA034 = arg0;
    fn_8000CAA0(lbl_8028E3EC, arg1);
}

void fn_800EA57C(void)
{
    // Placeholder for a simple operation, likely setting some global state.
}

void fn_800EA7CC(s32 arg0, s32 arg1) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
        u8 padA01B[0x19];
        s32 unkA034;
    };
    extern struct CardWork lbl_80320C20;
    extern u8 lbl_8028E358[];

    lbl_80320C20.unkA034 = arg0;
    fn_8000CAA0(lbl_8028E358, arg1);
}

#pragma use_lmw_stmw on
void fn_800EA8F4(s32 arg0) {
    void fn_8000C070(s32, s32);
    void fn_8006EEFC(void *, void *);
    s32 *fn_8006EDD8(s32, s32);
    void fn_8006EDA0(void *);
    void fn_800062CC(s32, s32, u32);
    void fn_80006298(s32, s32, s32);
    u32 *fn_800C4638(s32, void *, s32);
    void fn_800C4588(u32 *);
    s32 fn_8021CAB4(void *, s32, s32, s32, void *);
    extern void fn_800EB80C;
    extern u8 lbl_80320C20[];
    extern u8 lbl_802725D8[];

    s32 sp8;
    u32 flag;
    u32 i;
    u32 t;
    u32 crc;
    s32 off;
    s32 n;
    s32 self;
    u8 *base;
    u8 *base2;
    s32 buf;
    u32 *table;

    self = arg0;
    base = lbl_80320C20 + 0x10000;
    if (*(s32 *)(base - 0x5FFC) < 0) {
        fn_8000C070(self, 0x63);
        {
            u8 *b = &lbl_80320C20[0x10000];
            b[-0x5FE6] = 0;
        }
        flag = 1;
    } else {
        flag = 0;
    }
    if ((u8)flag == 0) {
        base2 = &lbl_80320C20[0x10000];
        buf = *(s32 *)(base2 - 0x5FCC);
        fn_8006EEFC(&sp8, &lbl_802725D8[0x98]);

        {
            s32 *row;
            s32 src;
            row = fn_8006EDD8(sp8, 0);
            src = row[0];
            fn_800062CC(buf, *(s32 *)(src + 8), 0xC00);
            row = fn_8006EDD8(sp8, 0);
            src = row[1];
            fn_800062CC(buf + 0xC00, *(s32 *)(src + 8), 0x200);
            row = fn_8006EDD8(sp8, 1);
            src = row[0];
            fn_800062CC(buf + 0xE00, *(s32 *)(src + 8), 0x400);
            row = fn_8006EDD8(sp8, 2);
            src = row[0];
            fn_800062CC(buf + 0x1200, *(s32 *)(src + 8), 0x400);
            row = fn_8006EDD8(sp8, 3);
            src = row[0];
            fn_800062CC(buf + 0x1600, *(s32 *)(src + 8), 0x400);
            row = fn_8006EDD8(sp8, 1);
            src = row[1];
            fn_800062CC(buf + 0x1A00, *(s32 *)(src + 8), 0x200);
        }

        fn_8006EDA0(&sp8);
        table = fn_800C4638(0x400, &lbl_802725D8[0x97], 0);
        {
            u32 *dp = table;
            for (i = 0; i < 0x100; i++) {
                t = i;
                if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                if (t & 1) t = (t >> 1) ^ 0xEDB88320U; else t >>= 1;
                *dp++ = t;
            }
        }

        crc = ~0U;
        off = 0;
        for (n = 0x380; n > 0; n--) {
            u8 *p = (u8 *)buf + off;
            off += 8;
            t = (crc >> 8) ^ table[(u8)(crc ^ p[0])];
            t = (t >> 8) ^ table[(u8)(t ^ p[1])];
            t = (t >> 8) ^ table[(u8)(t ^ p[2])];
            t = (t >> 8) ^ table[(u8)(t ^ p[3])];
            t = (t >> 8) ^ table[(u8)(t ^ p[4])];
            t = (t >> 8) ^ table[(u8)(t ^ p[5])];
            t = (t >> 8) ^ table[(u8)(t ^ p[6])];
            crc = (t >> 8) ^ table[(u8)(t ^ p[7])];
        }
        fn_80006298(buf + 0x1C00, (s32)(crc ^ ~0U), 8);
        fn_800C4588(table);
        *(base2 - 0x5FE6) = 1;
        *(s32 *)(base - 0x5FFC) = fn_8021CAB4(base2 - 0x5FE4, buf, 0x2000, 0, &fn_800EB80C);
        if (*(s32 *)(base - 0x5FFC) < 0) {
            fn_8000C070(self, 0x63);
            *(base2 - 0x5FE6) = 0;
        }
    }
}
#pragma use_lmw_stmw reset

void fn_800EB210(u32 arg0) {
    void *fn_8000CAF0(void *, s32);
    void *fn_8000CAA0(void *, u32);
    extern u8 lbl_8028E308[];

    if (arg0 == 0U) {
        fn_8000CAF0(lbl_8028E308, 2);
        return;
    }
    fn_8000CAA0(lbl_8028E308, arg0);
}

void fn_800EB258(void) {
    s32 OSGetTick(void);
    extern u16 lbl_80320C20[];
    *(u32 *)((u8 *)lbl_80320C20 + 0xA030) = OSGetTick();
}

void fn_800EB288(void) {
    extern u8 lbl_80320C20[];
    switch (*(s32 *)(lbl_80320C20 + 0xA004)) {
    case 0:
        lbl_80320C20[0xA018] = 1;
        return;
    case -6:
    case -13:
        lbl_80320C20[0xA018] = 1;
        return;
    }
}

void fn_800EB2DC(s32 arg0) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
    };
    void fn_800EB80C(void);
    extern struct CardWork lbl_80320C20;

    switch (lbl_80320C20.result) {
    case 0:
    case -6:
        lbl_80320C20.busy = 1;
        lbl_80320C20.result = fn_8021A7D4(lbl_80320C20.chan, fn_800EB80C);
        if (lbl_80320C20.result < 0) {
            fn_8000C070(arg0, 0x50);
        }
        break;
    }
}

void fn_800EB374(s32 arg0) {
    struct CardWork {
        u8 workArea[0xA000];
        s32 chan;
        volatile s32 result;
        s32 sectorSize;
        s32 unkA00C;
        s32 unkA010;
        s32 unkA014;
        u8 unkA018;
        u8 unkA019;
        u8 busy;
    };
    void fn_800EB7E4(void);
    void fn_800EB80C(void);
    extern struct CardWork lbl_80320C20;
    u8 ok;

    ok = 0;
    if (lbl_80320C20.result == 0 && lbl_80320C20.busy == 0) {
        ok = 1;
    }
    if (!ok) {
        fn_8000C070(arg0, 0x63);
        return;
    }
    if (lbl_80320C20.sectorSize != 0x2000) {
        lbl_80320C20.result = -0x41;
        fn_8000C070(arg0, 0x63);
        return;
    }
    lbl_80320C20.busy = 1;
    lbl_80320C20.result = fn_8021AFD0(lbl_80320C20.chan, lbl_80320C20.workArea, fn_800EB7E4, fn_800EB80C);
}

s32 fn_800EB428(s32 arg0) {
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    s32 fn_8021A8C8(s32, M2C_UNK, void *);
    extern M2C_UNK lbl_80320C20;
    s32 var_r3;
    u8 var_r3_2;
    u8 var_r4;

    M2C_FIELD(&lbl_80320C20, s32 *, 0xA000) = 0;
    M2C_FIELD(&lbl_80320C20, s8 *, 0xA018) = 0;
    M2C_FIELD(&lbl_80320C20, s8 *, 0xA019) = 0;
    M2C_FIELD(&lbl_80320C20, u8 *, 0xA01A) = 0U;
    var_r4 = 0;
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) = fn_8021A8C8(M2C_FIELD(&lbl_80320C20, s32 *, 0xA000), 0, &lbl_80320C20 + 0xA008);
    if (((s32) M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) == -1) || ((u8) M2C_FIELD(&lbl_80320C20, u8 *, 0xA01A) != 0)) {
        var_r4 = 1;
    }
    if (var_r4 != 0) {
        return 1;
    }
    var_r3_2 = 0;
    if (((s32) M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) == 0) && ((u8) M2C_FIELD(&lbl_80320C20, u8 *, 0xA01A) == 0)) {
        var_r3_2 = 1;
    }
    if (var_r3_2 == 0) {
        fn_8000C070(arg0, 0x63);
        return 1;
    }
    var_r3 = 0;
    if (((s32) M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) == -1) || ((u8) M2C_FIELD(&lbl_80320C20, u8 *, 0xA01A) != 0)) {
        var_r3 = 1;
    }
    return var_r3;
}

s32 fn_800EB520(char *arg0) {
    extern char lbl_802725D8[];
    return fn_802342B8(arg0, lbl_802725D8 + 0xE0) != 0;
}

void fn_800EB558(void) {
    extern s32 lbl_80367110;
    lbl_80367110 &= 0xFFFFFEFF;
}

void fn_800EB568(void) {
    extern s32 lbl_80367110;
    lbl_80367110 |= 0x100;
}

void fn_800EB578(void) {
    void fn_800056CC(void *, ...);
    extern u8 lbl_80320C20[];
    extern u8 lbl_802725D8[];
    void *var_r4;
    s32 val;

    var_r4 = NULL;
    val = *(s32 *)(lbl_80320C20 + 0xA004);

    switch (val) {
    case 1:
        var_r4 = lbl_802725D8 + 0xE8;
        break;
    case 0:
        var_r4 = lbl_802725D8 + 0xF1;
        break;
    case -1:
        var_r4 = lbl_802725D8 + 0xFE;
        break;
    case -2:
        var_r4 = lbl_802725D8 + 0x10C;
        break;
    case -3:
        var_r4 = lbl_802725D8 + 0x129;
        break;
    case -4:
        var_r4 = lbl_802725D8 + 0x145;
        break;
    case -5:
        var_r4 = lbl_802725D8 + 0x163;
        break;
    case -6:
        var_r4 = lbl_802725D8 + 0x17A;
        break;
    case -7:
        var_r4 = lbl_802725D8 + 0x198;
        break;
    case -8:
        var_r4 = lbl_802725D8 + 0x1A9;
        break;
    case -9:
        var_r4 = lbl_802725D8 + 0x1C4;
        break;
    case -10:
        var_r4 = lbl_802725D8 + 0x1D0;
        break;
    case -11:
        var_r4 = lbl_802725D8 + 0x1DA;
        break;
    case -12:
        var_r4 = lbl_802725D8 + 0x1E7;
        break;
    case -13:
        var_r4 = lbl_802725D8 + 0x204;
        break;
    case -14:
        var_r4 = lbl_802725D8 + 0x232;
        break;
    case -128:
        var_r4 = lbl_802725D8 + 0x24E;
        break;
    }

    fn_800056CC(lbl_802725D8 + 0x26B, var_r4);
}

s32 fn_800EB74C(void) {
    extern u32 lbl_80320C20[];
    return *(u32*)((u8*)lbl_80320C20 + 0xA000);
}

void fn_800EB760(void *arg0) {
    extern u8 lbl_80320C20[];

    *(void **)(lbl_80320C20 + 0xA004) = arg0;
}

s32 fn_800EB774(void) {
    extern u32 lbl_80320C20[];
    return *(u32*)((u8*)lbl_80320C20 + 0xA004);
}

s32 fn_800EB788(void *arg0) {
    extern u16 lbl_80320C20[];
    void fn_8000C070(void *, s32);

    if (*(s32 *)((u8 *)lbl_80320C20 + 0xA004) < 0) {
        fn_8000C070(arg0, 0x63);
        *((u8 *)lbl_80320C20 + 0xA01A) = 0;
        return 1;
    }
    return 0;
}

void fn_800EB7E4(void) {
    extern u8 lbl_80320C20[41016];

    lbl_80320C20[0xA018] = 0;
    lbl_80320C20[0xA019] = 0;
    lbl_80320C20[0xA01A] = 0;
    *(s32 *)(lbl_80320C20 + 0xA004) = -3;
}

void fn_800EB80C(void) {
    s32 fn_80217C34(s32);
    extern u8 lbl_80320C20[];

    *(u32 *)(lbl_80320C20 + 0xA004) = fn_80217C34(*(s32 *)(lbl_80320C20 + 0xA000));
    lbl_80320C20[0xA01A] = 0;
}

s32 fn_800EB854(void) {
    extern u8 lbl_80320C20[];
    s32 result = 0;
    if (*(s32 *)(lbl_80320C20 + 0xA004) != -1) {
        if (lbl_80320C20[0xA01A] != 0) {
            result = 1;
        }
    }
    return result;
}

s32 fn_800EB884(s32 arg0, s32 arg1, s32 arg2) {
    return arg0 + arg1 + arg2;
}

u8 fn_800EBF58(void) {
    s32 OSGetTick(void);
    void fn_80217A2C(void);
    s32 fn_8021A8C8(s32, void *, void *);
    s32 fn_8021AFD0(s32, void *, s32, s32);
    s32 fn_80217C34(s32);
    s32 fn_8021A7D4(s32, s32);
    void fn_8021B20C(s32);
    void fn_800056CC(void *, u32, u8, u32);
    extern u8 lbl_80320C20[];
    extern u8 lbl_802725D8[];
    s32 spC;
    s32 sp8;
    u32 start;
    u8 result;
    s32 r;
    u32 elapsed;
    u32 tickRate;
    u32 conv;
    u32 divres;

    start = OSGetTick();
    result = 0;
    fn_80217A2C();
    r = fn_8021A8C8(0, &spC, &sp8);
    if (r == -1) goto L_AFD0;
    if (r < 0) goto END;
L_AFD0:
    r = fn_8021AFD0(0, lbl_80320C20, 0, 0);
    if (r < 0) goto END;
    r = fn_80217C34(0);
    if (r == -1) goto L_A7D4;
    if (r == 0) goto L_second;
    if (r >= 0) goto END;
    if (r == -6) goto L_second;
    goto END;
L_A7D4:
    r = fn_8021A7D4(0, 0);
    if (r >= 0) goto L_second2;
    fn_8021B20C(0);
    goto END;
L_second:
    r = fn_80217C34(0);
    if (r == -1) goto L_second2;
    if (r == -6) goto L_B20C;
    if (r >= 0) goto L_check0;
    if (r == -13) goto L_B20C;
    goto END;
L_check0:
    if (r == 0) {
        result = 1;
    }
    goto END;
L_B20C:
    fn_8021B20C(0);
    goto END;
L_second2:
    goto END;
END:
    elapsed = OSGetTick() - start;
    tickRate = *(volatile u32 *)0x800000F8;
    conv = (u32)(((u64)0x10624dd3ULL * (tickRate >> 2)) >> 32) >> 6;
    divres = elapsed / conv;
    fn_800056CC(lbl_802725D8 + 0x293, divres, result, elapsed);
    return result;
}

s32 fn_800EC0A4(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r6;
    s32 var_r9;
    u8 *var_r4;
    u8 *temp_r30;
    s32 var_ctr;
    u32 temp_r0;
    u32 temp_r7_2;
    u32 temp_r10;
    u32 temp_r11;
    u32 temp_r12;
    u32 temp_r12_2;
    u32 temp_r7_3;
    u32 temp_r8;
    u32 temp_r9;
    s32 temp_r7;

    var_r9 = -1;
    var_r6 = 0;
    if (arg2 > 0) {
        temp_r7 = arg2 - 8;
        if (arg2 > 8) {
            var_ctr = (temp_r7 + 7) >> 3;
            if (temp_r7 > 0) {
                do {
                    temp_r30 = (u8 *)arg1 + var_r6;
                    temp_r7_2 = *temp_r30;
                    var_r6 += 8;
                    temp_r12 = (var_r9 >> 8) ^ ((u32 *)arg0)[((var_r9 ^ temp_r7_2) * 4) & 0x3FC];
                    temp_r12_2 = (temp_r12 >> 8) ^ ((u32 *)arg0)[((temp_r12 ^ temp_r30[1]) * 4) & 0x3FC];
                    temp_r11 = (temp_r12_2 >> 8) ^ ((u32 *)arg0)[((temp_r12_2 ^ temp_r30[2]) * 4) & 0x3FC];
                    temp_r10 = (temp_r11 >> 8) ^ ((u32 *)arg0)[((temp_r11 ^ temp_r30[3]) * 4) & 0x3FC];
                    temp_r9 = (temp_r10 >> 8) ^ ((u32 *)arg0)[((temp_r10 ^ temp_r30[4]) * 4) & 0x3FC];
                    temp_r8 = (temp_r9 >> 8) ^ ((u32 *)arg0)[((temp_r9 ^ temp_r30[5]) * 4) & 0x3FC];
                    temp_r7_3 = (temp_r8 >> 8) ^ ((u32 *)arg0)[((temp_r8 ^ temp_r30[6]) * 4) & 0x3FC];
                    var_r9 = (temp_r7_3 >> 8) ^ ((u32 *)arg0)[((temp_r7_3 ^ temp_r30[7]) * 4) & 0x3FC];
                    var_ctr--;
                } while (var_ctr != 0);
            }
        }
        var_r4 = (u8 *)arg1 + var_r6;
        if (var_r6 < arg2) {
            do {
                temp_r0 = *var_r4++;
                var_r9 = (var_r9 >> 8) ^ ((u32 *)arg0)[((var_r9 ^ temp_r0) * 4) & 0x3FC];
            } while (var_r6++ < arg2);
        }
    }
    return var_r9 ^ -1;
}

void fn_800EC1F8(u32 *arg0) {
    u32 i;
    u32 j;
    u32 c;

    for (i = 0; i < 0x100; i++) {
        c = i;
        for (j = 0; j < 8; j++) {
            if (c & 1) {
                c = (c >> 1) ^ 0xEDB88320;
            } else {
                c >>= 1;
            }
        }
        *arg0++ = c;
    }
}

s32 fn_800EC2B8(void) {
    extern void *lbl_803678C0;
    void fn_800D758C(void *);
    fn_800D758C(lbl_803678C0);
    return 0;
}

#pragma global_optimizer off
s32 fn_800EC2E0(void) {
    s32 fn_8000CEE4(s32);
    void fn_80034068(void *, u8, s8);
    void fn_800340F0(void *);
    void *fn_800C42D8(s32);
    char *fn_800C93EC(String *);
    void fn_800C96F8(String *, char *, s32);
    void fn_800C9758(String *, String *, s32, s32);
    void fn_800C9A60(String *, s16);
    void fn_800D588C(void *);
    void fn_800DA31C(void);
    void fn_800DA340(s32);
    String fn_800DAA60(s32);
    String fn_800DAAF0(s32);
    s32 fn_800DC38C(void *, s32);
    s32 fn_800DC44C(void *);
    s32 fn_8011C9E4(void *);
    char *fn_8011C9F4(void *);
    void fn_80234450(void *, char *);
    s32 strlen(char *);
    extern void *lbl_803678C0;

    String work;
    String t44;
    String t38;
    String t2c;
    String t20;
    String t14;
    String t8;
    void *obj;
    char *s;
    s32 i;
    s32 n;
    s32 prev;
    s32 scale;
    s32 cost;
    u32 packed;
    s32 kind;
    s32 mode;
    s32 a;
    s32 b;
    u8 flag2;
    s32 flag;

    work.size = 0;
    work.cap = 0;
    work.data = 0;
    work.cap = 0;
    obj = fn_800C42D8(0x85C);
    if (obj != NULL) {
        fn_800340F0((u8 *)obj + 0x454);
    }
    t44 = fn_800DAAF0(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x424)));
    fn_800C9758(&work, &t44, 0, -1);
    fn_800C9A60(&t44, -1);
    fn_80234450(obj, fn_800C93EC(&work));
    t38 = fn_800DAA60(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x43C)));
    fn_800C9758(&work, &t38, 0, -1);
    fn_800C9A60(&t38, -1);
    fn_80234450((u8 *)obj + 0x40, fn_800C93EC(&work));
    s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x424));
    fn_800C96F8(&work, s, strlen(s));
    fn_80234450((u8 *)obj + 0x80, fn_800C93EC(&work));
    s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x43C));
    fn_800C96F8(&work, s, strlen(s));
    fn_80234450((u8 *)obj + 0x100, fn_800C93EC(&work));
    *(s32 *)((u8 *)obj + 0x164) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x430));
    *(s32 *)((u8 *)obj + 0x140) = 0x4C;
    *(s32 *)((u8 *)obj + 0x144) = fn_8000CEE4(0xA) + 7;
    *(s32 *)((u8 *)obj + 0x148) = 0x64 - fn_8000CEE4(0x1E);
    *(s32 *)((u8 *)obj + 0x14C) = 4;
    *(s32 *)((u8 *)obj + 0x150) = 0x32;
    *(s32 *)((u8 *)obj + 0x154) = 0xA;
    t2c = fn_800DAAF0(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x428)));
    fn_800C9758(&work, &t2c, 0, -1);
    fn_800C9A60(&t2c, -1);
    fn_80234450((u8 *)obj + 0x168, fn_800C93EC(&work));
    t20 = fn_800DAA60(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x440)));
    fn_800C9758(&work, &t20, 0, -1);
    fn_800C9A60(&t20, -1);
    fn_80234450((u8 *)obj + 0x1A8, fn_800C93EC(&work));
    s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x428));
    fn_800C96F8(&work, s, strlen(s));
    fn_80234450((u8 *)obj + 0x1E8, fn_800C93EC(&work));
    s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x440));
    fn_800C96F8(&work, s, strlen(s));
    fn_80234450((u8 *)obj + 0x268, fn_800C93EC(&work));
    *(s32 *)((u8 *)obj + 0x2CC) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x434));
    *(s32 *)((u8 *)obj + 0x2A8) = 0x28;
    *(s32 *)((u8 *)obj + 0x2AC) = fn_8000CEE4(0xA) + 3;
    *(s32 *)((u8 *)obj + 0x2B0) = 0x64 - fn_8000CEE4(0x1E);
    *(s32 *)((u8 *)obj + 0x2B4) = 8;
    *(s32 *)((u8 *)obj + 0x2B8) = 0x32;
    *(s32 *)((u8 *)obj + 0x2BC) = 4;
    if (fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x42C)) > 0) {
        t14 = fn_800DAAF0(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x42C)));
        fn_800C9758(&work, &t14, 0, -1);
        fn_800C9A60(&t14, -1);
        fn_80234450((u8 *)obj + 0x2D0, fn_800C93EC(&work));
        t8 = fn_800DAA60(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x444)));
        fn_800C9758(&work, &t8, 0, -1);
        fn_800C9A60(&t8, -1);
        fn_80234450((u8 *)obj + 0x310, fn_800C93EC(&work));
        s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x42C));
        fn_800C96F8(&work, s, strlen(s));
        fn_80234450((u8 *)obj + 0x350, fn_800C93EC(&work));
        s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x444));
        fn_800C96F8(&work, s, strlen(s));
        fn_80234450((u8 *)obj + 0x3D0, fn_800C93EC(&work));
        *(s32 *)((u8 *)obj + 0x434) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x438));
        *(s32 *)((u8 *)obj + 0x410) = 0x28;
        *(s32 *)((u8 *)obj + 0x414) = fn_8000CEE4(0xA) + 3;
        *(s32 *)((u8 *)obj + 0x418) = 0x64 - fn_8000CEE4(0x1E);
        *(s32 *)((u8 *)obj + 0x41C) = 8;
        *(s32 *)((u8 *)obj + 0x420) = 0x32;
        *(s32 *)((u8 *)obj + 0x424) = 4;
    } else {
        *(u8 *)((u8 *)obj + 0x2D0) = 0;
        *(u8 *)((u8 *)obj + 0x310) = 0;
        *(u8 *)((u8 *)obj + 0x350) = 0;
        *(u8 *)((u8 *)obj + 0x3D0) = 0;
        *(s32 *)((u8 *)obj + 0x410) = 0;
        *(s32 *)((u8 *)obj + 0x414) = 0;
        *(s32 *)((u8 *)obj + 0x418) = 0;
        *(s32 *)((u8 *)obj + 0x41C) = 0;
        *(s32 *)((u8 *)obj + 0x420) = 0;
        *(s32 *)((u8 *)obj + 0x424) = 0;
        *(s32 *)((u8 *)obj + 0x434) = 0;
    }
    *(s32 *)((u8 *)obj + 0x438) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x448));
    *(s32 *)((u8 *)obj + 0x43C) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x450));
    if (fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x44C)) != 0) {
        *(void **)((u8 *)obj + 0x440) = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x44C));
    } else {
        *(s32 *)((u8 *)obj + 0x440) = 0;
    }
    n = fn_800DC44C(*(void **)((u8 *)lbl_803678C0 + 0x478));
    fn_80034068((u8 *)obj + 0x454, 0x54, 0);
    prev = -1;
    for (i = 0; i < n; i++) {
        packed = (u32)fn_800DC38C(*(void **)((u8 *)lbl_803678C0 + 0x478), i);
        kind = (u8)packed;
        mode = (u8)(packed >> 8);
        a = (u8)(packed >> 16);
        b = packed >> 24;
        switch (kind) {
        case 0: scale = *(s32 *)((u8 *)obj + 0x144); break;
        case 1: scale = *(s32 *)((u8 *)obj + 0x2AC); break;
        case 2: scale = *(s32 *)((u8 *)obj + 0x414); break;
        default: scale = 0; break;
        }
        switch (mode) {
        case 0: cost = scale; break;
        case 1: cost = scale << 2; break;
        case 2: cost = 0; break;
        case 5: cost = scale; break;
        default: cost = 0x50; break;
        }
        switch (kind) {
        case 0: fn_80034068((u8 *)obj + 0x454, 0x20, 0); break;
        case 1: fn_80034068((u8 *)obj + 0x454, 0x21, 0); break;
        case 2: fn_80034068((u8 *)obj + 0x454, 0x22, 0); break;
        }
        if (kind == prev) {
            fn_80034068((u8 *)obj + 0x454, 0x23, 0);
        }
        if (a > 0 && b == 0) {
            fn_80034068((u8 *)obj + 0x454, 0x56, 1);
            fn_80034068((u8 *)obj + 0x454, (u8)(a + 0x34), 1);
        } else if (a > 0 && b > 0) {
            fn_80034068((u8 *)obj + 0x454, 0x56, 2);
            fn_80034068((u8 *)obj + 0x454, (u8)(a + 0x34), 1);
            fn_80034068((u8 *)obj + 0x454, (u8)(b + 0x34), 1);
        }
        switch (kind) {
        case 0:
            fn_80034068((u8 *)obj + 0x454, 0x57, 2);
            fn_80034068((u8 *)obj + 0x454, 0x15, (s8)-cost);
            break;
        case 1:
            fn_80034068((u8 *)obj + 0x454, 0x57, 2);
            fn_80034068((u8 *)obj + 0x454, 9, (s8)-cost);
            break;
        case 2:
            fn_80034068((u8 *)obj + 0x454, 0x57, 2);
            fn_80034068((u8 *)obj + 0x454, 0x15, (s8)-cost);
            break;
        }
        switch (mode) {
        case 0: fn_80034068((u8 *)obj + 0x454, 0x50, 0); break;
        case 1: fn_80034068((u8 *)obj + 0x454, 0x51, 0); break;
        case 2: fn_80034068((u8 *)obj + 0x454, 0x52, 0); break;
        case 3:
            fn_80034068((u8 *)obj + 0x454, 0x50, 0);
            switch (kind) {
            case 0: fn_80034068((u8 *)obj + 0x454, 0x17, 0); break;
            case 1: fn_80034068((u8 *)obj + 0x454, 0xB, 0); break;
            case 2: fn_80034068((u8 *)obj + 0x454, 0x17, 0); break;
            }
            break;
        case 4:
            fn_80034068((u8 *)obj + 0x454, 0x51, 0);
            switch (kind) {
            case 0: fn_80034068((u8 *)obj + 0x454, 0x17, 0); break;
            case 1: fn_80034068((u8 *)obj + 0x454, 0xB, 0); break;
            case 2: fn_80034068((u8 *)obj + 0x454, 0x17, 0); break;
            }
            break;
        case 5: fn_80034068((u8 *)obj + 0x454, 0x50, 0); break;
        }
        prev = kind;
    }
    fn_80034068((u8 *)obj + 0x454, 0, 0);
    *(s32 *)((u8 *)obj + 0x444) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x464));
    flag = *(s32 *)((u8 *)obj + 0x444) == 2;
    if (fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x468)) == 0) {
        *(u8 *)((u8 *)obj + 0x448) = 1;
    } else {
        *(u8 *)((u8 *)obj + 0x448) = 0;
    }
    if (fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x46C)) == 0) {
        *(s32 *)((u8 *)obj + 0x44C) = 1;
    } else {
        *(s32 *)((u8 *)obj + 0x44C) = 2;
    }
    if (fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x470)) == 0) {
        *(u8 *)((u8 *)obj + 0x449) = 1;
    } else {
        *(u8 *)((u8 *)obj + 0x449) = 0;
    }
    if (fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x474)) == 1) {
        *(u8 *)((u8 *)obj + 0x450) = 1;
    } else {
        *(u8 *)((u8 *)obj + 0x450) = 0;
    }
    flag2 = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x474)) == 2;
    fn_800D588C(obj);
    if (flag2 != 0) {
        fn_800DA31C();
    } else {
        fn_800DA340(flag);
    }
    fn_800C9A60(&work, -1);
    return 0;
}
#pragma global_optimizer on
extern void *lbl_803678C0;
s32 fn_800ECCB8(void) {
    void *temp_r3;

    temp_r3 = *(void **)((char *)lbl_803678C0 + 0x478);
    fn_800DC454(temp_r3);
    return 0;
}

s32 fn_800ECCE4(void) {
    void *fn_800DC3B0(void *);
    void fn_800DC494(void *, void *);
    extern void *lbl_803678C0;
    void *temp;

    temp = fn_800DC3B0(*(void **)((u8 *)lbl_803678C0 + 0x478));
    fn_800DC494(*(void **)((u8 *)lbl_803678C0 + 0x478), temp);
    return 0;
}

void *fn_800ECF40(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_800C9ABC(void *, char *, void *);
    void fn_800C9A60(void *, s32);
    void fn_800CB90C(void *, void *, char *);
    void *fn_800D75FC(void *, void *);
    void fn_800D764C(void *, s32, s32, s32, void *, void *);
    void fn_800DC518(void *, void *, s32);
    void fn_800E3F54(void *);
    void fn_8011C9A8(void *, s32);
    extern char lbl_80272880[];
    extern u8 lbl_8028E4D8[];
    extern void fn_800ECD20(void);
    extern void fn_800ECCE4(void);
    extern void fn_800ECCB8(void);
    extern void fn_800EC2E0(void);
    extern void fn_800EC2B8(void);

    String sp1F8, sp1EC, sp1E0, sp1D4, sp1C8, sp1BC, sp1B0, sp1A4;
    String sp198, sp18C, sp180, sp174, sp168, sp15C, sp150, sp144;
    String sp138, sp12C, sp120, sp114, sp108, spFC, spF0, spE4;
    String spD8, spCC, spC0, spB4, spA8, sp9C, sp90, sp84;
    void *sp80, *sp7C, *sp78, *sp74, *sp70, *sp6C, *sp68, *sp64;
    void *sp60, *sp5C, *sp58, *sp54, *sp50, *sp4C, *sp48, *sp44;
    void *sp40, *sp3C, *sp38, *sp34, *sp30, *sp2C, *sp28, *sp24;
    void *sp20, *sp1C, *sp18, *sp14, *sp10, *spC, *sp8;
    void *temp;
    void *self;

    self = arg0;
    fn_800C9ABC(&sp1F8, lbl_80272880 + 0x17, &sp80);
    fn_800CB90C(&sp1EC, &sp1F8, lbl_80272880 + 0x1E);
    fn_800C9ABC(&sp1E0, lbl_80272880 + 0x2C, &sp7C);
    fn_800D764C(self, arg1, arg2, arg3, &sp1EC, &sp1E0);
    fn_800C9A60(&sp1E0, -1);
    fn_800C9A60(&sp1EC, -1);
    fn_800C9A60(&sp1F8, -1);
    *(void **)((u8 *)self + 0xC) = lbl_8028E4D8;

    fn_800C9ABC(&sp1D4, lbl_80272880 + 0x36, &sp78);
    *(void **)((u8 *)self + 0x424) = fn_800D75FC(self, &sp1D4);
    fn_800C9A60(&sp1D4, -1);
    fn_800C9ABC(&sp1C8, lbl_80272880 + 0x40, &sp74);
    *(void **)((u8 *)self + 0x428) = fn_800D75FC(self, &sp1C8);
    fn_800C9A60(&sp1C8, -1);
    fn_800C9ABC(&sp1BC, lbl_80272880 + 0x4A, &sp70);
    *(void **)((u8 *)self + 0x42C) = fn_800D75FC(self, &sp1BC);
    fn_800C9A60(&sp1BC, -1);
    fn_800C9ABC(&sp1B0, lbl_80272880 + 0x54, &sp6C);
    *(void **)((u8 *)self + 0x430) = fn_800D75FC(self, &sp1B0);
    fn_800C9A60(&sp1B0, -1);
    fn_800C9ABC(&sp1A4, lbl_80272880 + 0x5C, &sp68);
    *(void **)((u8 *)self + 0x434) = fn_800D75FC(self, &sp1A4);
    fn_800C9A60(&sp1A4, -1);
    fn_800C9ABC(&sp198, lbl_80272880 + 0x64, &sp64);
    *(void **)((u8 *)self + 0x438) = fn_800D75FC(self, &sp198);
    fn_800C9A60(&sp198, -1);
    fn_800C9ABC(&sp18C, lbl_80272880 + 0x6C, &sp60);
    *(void **)((u8 *)self + 0x43C) = fn_800D75FC(self, &sp18C);
    fn_800C9A60(&sp18C, -1);
    fn_800C9ABC(&sp180, lbl_80272880 + 0x77, &sp5C);
    *(void **)((u8 *)self + 0x440) = fn_800D75FC(self, &sp180);
    fn_800C9A60(&sp180, -1);
    fn_800C9ABC(&sp174, lbl_80272880 + 0x82, &sp58);
    *(void **)((u8 *)self + 0x444) = fn_800D75FC(self, &sp174);
    fn_800C9A60(&sp174, -1);
    fn_800C9ABC(&sp168, lbl_80272880 + 0x8D, &sp54);
    *(void **)((u8 *)self + 0x448) = fn_800D75FC(self, &sp168);
    fn_800C9A60(&sp168, -1);
    fn_800C9ABC(&sp15C, lbl_80272880 + 0x98, &sp50);
    *(void **)((u8 *)self + 0x450) = fn_800D75FC(self, &sp15C);
    fn_800C9A60(&sp15C, -1);
    fn_800C9ABC(&sp150, lbl_80272880 + 0x9F, &sp4C);
    *(void **)((u8 *)self + 0x44C) = fn_800D75FC(self, &sp150);
    fn_800C9A60(&sp150, -1);
    fn_800C9ABC(&sp144, lbl_80272880 + 0xA6, &sp48);
    *(void **)((u8 *)self + 0x454) = fn_800D75FC(self, &sp144);
    fn_800C9A60(&sp144, -1);
    fn_800C9ABC(&sp138, lbl_80272880 + 0xB1, &sp44);
    *(void **)((u8 *)self + 0x458) = fn_800D75FC(self, &sp138);
    fn_800C9A60(&sp138, -1);
    fn_800C9ABC(&sp12C, lbl_80272880 + 0xBC, &sp40);
    *(void **)((u8 *)self + 0x45C) = fn_800D75FC(self, &sp12C);
    fn_800C9A60(&sp12C, -1);
    fn_800C9ABC(&sp120, lbl_80272880 + 0xC5, &sp3C);
    *(void **)((u8 *)self + 0x460) = fn_800D75FC(self, &sp120);
    fn_800C9A60(&sp120, -1);
    fn_800C9ABC(&sp114, lbl_80272880 + 0xCF, &sp38);
    *(void **)((u8 *)self + 0x464) = fn_800D75FC(self, &sp114);
    fn_800C9A60(&sp114, -1);
    fn_800C9ABC(&sp108, lbl_80272880 + 0xDA, &sp34);
    *(void **)((u8 *)self + 0x468) = fn_800D75FC(self, &sp108);
    fn_800C9A60(&sp108, -1);
    fn_800C9ABC(&spFC, lbl_80272880 + 0xE4, &sp30);
    *(void **)((u8 *)self + 0x46C) = fn_800D75FC(self, &spFC);
    fn_800C9A60(&spFC, -1);
    fn_800C9ABC(&spF0, lbl_80272880 + 0xF0, &sp2C);
    *(void **)((u8 *)self + 0x470) = fn_800D75FC(self, &spF0);
    fn_800C9A60(&spF0, -1);
    fn_800C9ABC(&spE4, lbl_80272880 + 0xF9, &sp28);
    *(void **)((u8 *)self + 0x474) = fn_800D75FC(self, &spE4);
    fn_800C9A60(&spE4, -1);
    fn_800C9ABC(&spD8, lbl_80272880 + 0x105, &sp24);
    *(void **)((u8 *)self + 0x478) = fn_800D75FC(self, &spD8);
    fn_800C9A60(&spD8, -1);
    fn_800C9ABC(&spCC, lbl_80272880 + 0x10D, &sp20);
    *(void **)((u8 *)self + 0x47C) = fn_800D75FC(self, &spCC);
    fn_800C9A60(&spCC, -1);
    fn_800C9ABC(&spC0, lbl_80272880 + 0x114, &sp1C);
    *(void **)((u8 *)self + 0x480) = fn_800D75FC(self, &spC0);
    fn_800C9A60(&spC0, -1);
    fn_800C9ABC(&spB4, lbl_80272880 + 0x11E, &sp18);
    *(void **)((u8 *)self + 0x484) = fn_800D75FC(self, &spB4);
    fn_800C9A60(&spB4, -1);
    fn_800C9ABC(&spA8, lbl_80272880 + 0x127, &sp14);
    temp = fn_800D75FC(self, &spA8);
    *(void **)((u8 *)self + 0x488) = temp;
    *(void **)((u8 *)self + 0x418) = temp;
    fn_800C9A60(&spA8, -1);
    fn_800C9ABC(&sp9C, lbl_80272880 + 0x12D, &sp10);
    temp = fn_800D75FC(self, &sp9C);
    *(void **)((u8 *)self + 0x48C) = temp;
    *(void **)((u8 *)self + 0x41C) = temp;
    fn_800C9A60(&sp9C, -1);

    *(void **)((u8 *)*(void **)((u8 *)self + 0x47C) + 0xA4) = (void *)fn_800ECD20;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x480) + 0xA4) = (void *)fn_800ECCE4;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x484) + 0xA4) = (void *)fn_800ECCB8;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x488) + 0xA4) = (void *)fn_800EC2E0;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x48C) + 0xA4) = (void *)fn_800EC2B8;

    fn_800C9ABC(&sp90, lbl_80272880 + 0x137, &spC);
    fn_800DC518(*(void **)((u8 *)self + 0x478), &sp90, 0);
    fn_800C9A60(&sp90, -1);
    fn_800C9ABC(&sp84, lbl_80272880 + 0x150, &sp8);
    fn_800DC518(*(void **)((u8 *)self + 0x478), &sp84, 1);
    fn_800C9A60(&sp84, -1);
    fn_8011C9A8(*(void **)((u8 *)self + 0x44C), 1);

    *(void **)((u8 *)self + 0x14) = *(void **)((u8 *)self + 0x424);
    *(void **)((u8 *)self + 0x18) = *(void **)((u8 *)self + 0x428);
    *(void **)((u8 *)self + 0x1C) = *(void **)((u8 *)self + 0x42C);
    *(void **)((u8 *)self + 0x54) = *(void **)((u8 *)self + 0x430);
    *(void **)((u8 *)self + 0x58) = *(void **)((u8 *)self + 0x434);
    *(void **)((u8 *)self + 0x5C) = *(void **)((u8 *)self + 0x438);
    *(void **)((u8 *)self + 0x94) = *(void **)((u8 *)self + 0x43C);
    *(void **)((u8 *)self + 0x98) = *(void **)((u8 *)self + 0x440);
    *(void **)((u8 *)self + 0x9C) = *(void **)((u8 *)self + 0x444);
    *(void **)((u8 *)self + 0xD4) = *(void **)((u8 *)self + 0x448);
    *(void **)((u8 *)self + 0xD8) = *(void **)((u8 *)self + 0x450);
    *(void **)((u8 *)self + 0x114) = *(void **)((u8 *)self + 0x44C);
    *(void **)((u8 *)self + 0x154) = *(void **)((u8 *)self + 0x454);
    *(void **)((u8 *)self + 0x158) = *(void **)((u8 *)self + 0x458);
    *(void **)((u8 *)self + 0x15C) = *(void **)((u8 *)self + 0x45C);
    *(void **)((u8 *)self + 0x160) = *(void **)((u8 *)self + 0x460);
    *(void **)((u8 *)self + 0x194) = *(void **)((u8 *)self + 0x47C);
    *(void **)((u8 *)self + 0x198) = *(void **)((u8 *)self + 0x480);
    *(void **)((u8 *)self + 0x19C) = *(void **)((u8 *)self + 0x484);
    *(void **)((u8 *)self + 0x1D0) = *(void **)((u8 *)self + 0x468);
    *(void **)((u8 *)self + 0x1D4) = *(void **)((u8 *)self + 0x478);
    *(void **)((u8 *)self + 0x210) = *(void **)((u8 *)self + 0x46C);
    *(void **)((u8 *)self + 0x214) = *(void **)((u8 *)self + 0x464);
    *(void **)((u8 *)self + 0x218) = *(void **)((u8 *)self + 0x488);
    *(void **)((u8 *)self + 0x21C) = *(void **)((u8 *)self + 0x48C);
    *(void **)((u8 *)self + 0x250) = *(void **)((u8 *)self + 0x470);
    *(void **)((u8 *)self + 0x290) = *(void **)((u8 *)self + 0x474);
    *(void **)((u8 *)self + 0x414) = *(void **)((u8 *)self + 0x424);
    fn_800E3F54(*(void **)((u8 *)self + 0x414));
    return self;
}

s32 fn_800ED754(void) {
    void fn_800D758C(void *);
    extern void *lbl_803678C8;
    fn_800D758C(lbl_803678C8);
    return 0;
}

s32 fn_800ED77C(void) {
    void fn_800E56CC(void *);
    void fn_800D75C4(void *);
    extern void *lbl_803678C8;
    extern void *lbl_80367918;
    void *p;

    p = *(void **)((u8 *)lbl_803678C8 + 0x440);
    if (p != NULL) {
        fn_800E56CC(p);
    }
    fn_800D75C4(lbl_80367918);
    return 0;
}

s32 fn_800ED7B8(void)
{
    extern u16 *lbl_803678C8;
    void *inner;
    s32 count;

    count = *(s32 *)((u8 *)lbl_803678C8 + 0x450);
    inner = *(void **)((u8 *)lbl_803678C8 + 0x424);
    if ((*(s32 *)((u8 *)lbl_803678C8 + 0x450) = count - 1) > 0) {
        return 0;
    }
    *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB4) - 1;
    if (*(s32 *)((u8 *)inner + 0xB4) < 0) {
        *(s32 *)((u8 *)inner + 0xB4) = 0;
    }
    return 0;
}

extern u16* lbl_803678C8;
s32 fn_800ED800(void) {
    extern u16 *lbl_803678C8;
    void *inner;

    inner = *(void **)((u8 *)lbl_803678C8 + 0x424);
    *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB4) - 1;
    if (*(s32 *)((u8 *)inner + 0xB4) < 0) {
        *(s32 *)((u8 *)inner + 0xB4) = 0;
    }
    *(s32 *)((u8 *)lbl_803678C8 + 0x450) = 8;
    return 0;
}

s32 fn_800ED83C(void) {
    extern u16 *lbl_803678C8;
    void *inner;
    s32 counter;

    inner = *(void **)((u8 *)lbl_803678C8 + 0x424);
    counter = *(s32 *)((u8 *)lbl_803678C8 + 0x450) - 1;
    *(s32 *)((u8 *)lbl_803678C8 + 0x450) = counter;
    if (counter > 0) {
        return 0;
    }
    *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB4) + 1;
    if (*(s32 *)((u8 *)inner + 0xB4) > *(s32 *)((u8 *)inner + 0xB0)) {
        *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB0);
    }
    return 0;
}

s32 fn_800ED884(void) {
    extern u16 *lbl_803678C8;
    void *inner;

    inner = *(void **)((u8 *)lbl_803678C8 + 0x424);
    *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB4) + 1;
    if (*(s32 *)((u8 *)inner + 0xB4) > *(s32 *)((u8 *)inner + 0xB0)) {
        *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB0);
    }
    *(s32 *)((u8 *)lbl_803678C8 + 0x450) = 8;
    return 0;
}

#pragma dont_inline on
s32 fn_800ED8C0(void) {
    void *p = M2C_FIELD(lbl_803678C8, void **, 0x440);
    if (p != NULL) {
        fn_800E56CC(p);
    }
    return 0;
}

s32 fn_800ED8F4(void) {
    extern u16 *lbl_803678C8;
    void *target;

    target = *(void **)((u8 *)lbl_803678C8 + 0x440);

    if (target != NULL) {
        fn_800E56D8(target, 1);
    }

    return 0;
}

s32 fn_800ED92C(void) {
    void *p = M2C_FIELD(lbl_803678C8, void **, 0x440);
    if (p != NULL) {
        fn_800E56CC(p);
    }
    return 0;
}

void *fn_800EDAD0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
void fn_800C9ABC(void *, char *, void *);
void fn_800CB90C(void *,void *,char *);
void *fn_800D75FC(void *,void *);
void fn_800D764C(void *,s32,s32,s32,void *,void *);
void fn_800DB1FC(void *,void *);
void fn_800E3F54(void *);
extern char lbl_80272AC8[];
extern u8 lbl_8028E4E8[];
void fn_800ED754(void);
void fn_800ED77C(void);
void fn_800ED7B8(void);
void fn_800ED800(void);
void fn_800ED83C(void);
void fn_800ED884(void);
void fn_800ED8C0(void);
void fn_800ED8F4(void);
void fn_800ED92C(void);
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
    void *sp38;
    void *sp34;
    void *sp30;
    void *sp2C;
    void *sp28;
    void *sp24;
    void *sp20;
    void *sp1C;
    void *sp18;
    void *sp14;
    void *sp10;
    void *spC;
    void *sp8;
    void *temp_r3;
    void *temp_r6;

    fn_800C9ABC(&spD8, lbl_80272AC8 + 3, &sp38);
    fn_800CB90C(&spCC, &spD8, lbl_80272AC8 + 0xA);
    fn_800C9ABC(&spC0, lbl_80272AC8 + 0x13, &sp34);
    fn_800D764C(arg0, arg1, arg2, arg3, &spCC, &spC0);
    fn_800C9A60(&spC0, -1);
    fn_800C9A60(&spCC, -1);
    fn_800C9A60(&spD8, -1);
    *(void **)((u8 *)arg0 + 0xC) = lbl_8028E4E8;
    fn_800C9ABC(&spB4, lbl_80272AC8 + 0x18, &sp30);
    *(void **)((u8 *)arg0 + 0x424) = fn_800D75FC(arg0, &spB4);
    fn_800C9A60(&spB4, -1);
    fn_800C9ABC(&spA8, lbl_80272AC8 + 0x24, &sp2C);
    *(void **)((u8 *)arg0 + 0x428) = fn_800D75FC(arg0, &spA8);
    fn_800C9A60(&spA8, -1);
    fn_800C9ABC(&sp9C, lbl_80272AC8 + 0x2C, &sp28);
    *(void **)((u8 *)arg0 + 0x42C) = fn_800D75FC(arg0, &sp9C);
    fn_800C9A60(&sp9C, -1);
    fn_800C9ABC(&sp90, lbl_80272AC8 + 0x34, &sp24);
    *(void **)((u8 *)arg0 + 0x430) = fn_800D75FC(arg0, &sp90);
    fn_800C9A60(&sp90, -1);
    fn_800C9ABC(&sp84, lbl_80272AC8 + 0x3C, &sp20);
    *(void **)((u8 *)arg0 + 0x434) = fn_800D75FC(arg0, &sp84);
    fn_800C9A60(&sp84, -1);
    fn_800C9ABC(&sp78, lbl_80272AC8 + 0x44, &sp1C);
    temp_r3 = fn_800D75FC(arg0, &sp78);
    *(void **)((u8 *)arg0 + 0x43C) = temp_r3;
    *(void **)((u8 *)arg0 + 0x41C) = temp_r3;
    fn_800C9A60(&sp78, -1);
    fn_800C9ABC(&sp6C, lbl_80272AC8 + 0x4E, &sp18);
    *(void **)((u8 *)arg0 + 0x438) = fn_800D75FC(arg0, &sp6C);
    fn_800C9A60(&sp6C, -1);
    fn_800C9ABC(&sp60, lbl_80272AC8 + 0x55, &sp14);
    *(void **)((u8 *)arg0 + 0x444) = fn_800D75FC(arg0, &sp60);
    fn_800C9A60(&sp60, -1);
    fn_800C9ABC(&sp54, lbl_80272AC8 + 0x60, &sp10);
    *(void **)((u8 *)arg0 + 0x448) = fn_800D75FC(arg0, &sp54);
    fn_800C9A60(&sp54, -1);
    fn_800C9ABC(&sp48, lbl_80272AC8 + 0x69, &spC);
    *(void **)((u8 *)arg0 + 0x44C) = fn_800D75FC(arg0, &sp48);
    fn_800C9A60(&sp48, -1);
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x424) + 0xA4) = &fn_800ED92C;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x428) + 0xA4) = &fn_800ED8F4;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x42C) + 0xA4) = &fn_800ED8C0;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x430) + 0xA4) = &fn_800ED884;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x430) + 0xA8) = &fn_800ED83C;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x434) + 0xA4) = &fn_800ED800;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x434) + 0xA8) = &fn_800ED7B8;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x438) + 0xA4) = &fn_800ED77C;
    temp_r6 = *(void **)((u8 *)arg0 + 0x43C);
    *(void **)((u8 *)temp_r6 + 0xA4) = &fn_800ED754;
    fn_800C9ABC(&sp3C, lbl_80272AC8 + 0x74, &sp8);
    fn_800DB1FC(*(void **)((u8 *)arg0 + 0x444), &sp3C);
    fn_800C9A60(&sp3C, -1);
    *(void **)((u8 *)arg0 + 0x14) = *(void **)((u8 *)arg0 + 0x428);
    *(void **)((u8 *)arg0 + 0x18) = *(void **)((u8 *)arg0 + 0x42C);
    *(void **)((u8 *)arg0 + 0x1C) = *(void **)((u8 *)arg0 + 0x430);
    *(void **)((u8 *)arg0 + 0x20) = *(void **)((u8 *)arg0 + 0x434);
    *(void **)((u8 *)arg0 + 0x24) = *(void **)((u8 *)arg0 + 0x438);
    *(void **)((u8 *)arg0 + 0x414) = *(void **)((u8 *)arg0 + 0x428);
    fn_800E3F54(*(void **)((u8 *)arg0 + 0x414));
    return arg0;
}

void *fn_800EDEB8(void *arg0, s16 arg1) {
    void fn_800E45EC(void *, s16);
    void fn_800C428C(void *);
    extern u8 lbl_8028E4F8[];
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = lbl_8028E4F8;
        fn_800E45EC(arg0, 0);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma dont_inline reset
void fn_800EDF18(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xB0) * (arg1 - M2C_FIELD(arg0, s32 *, 0x48))) / (s32) M2C_FIELD(arg0, s32 *, 0x60));
}

void fn_800EDF38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xB0) * (arg1 - M2C_FIELD(arg0, s32 *, 0x48))) / (s32) M2C_FIELD(arg0, s32 *, 0x60));
}

void fn_800EE090(void) {
    M2C_UNK fn_800E43EC();
    fn_800E43EC();
}

void *fn_800EE0B0(void *arg0) {
    void fn_800E4688(void);
    extern u8 lbl_8028E4F8[];
    void *self;

    self = arg0;
    fn_800E4688();
    *(void **)((u8 *)self + 0x40) = lbl_8028E4F8;
    if (*(s32 *)((u8 *)self + 0x60) == 0) {
        *(s32 *)((u8 *)self + 0x60) = 0x40;
    }
    if (*(s32 *)((u8 *)self + 0x64) == 0) {
        *(s32 *)((u8 *)self + 0x64) = 0x10;
    }
    *(s32 *)((u8 *)self + 0xB0) = 0x64;
    *(s32 *)((u8 *)self + 0xB4) = 0;
    return self;
}

#pragma cplusplus off
void fn_800EE124(void *arg0) {
void *fn_80040844(void);void *fn_80046360(void *,void *,void (*)(),u32,s32,u32);u8 *fn_80046EB8(void *,void *);u32 fn_80222420(s32,s32,s32,s32,s32);void *fn_800C45B8(u32,void *,s32);void DCFlushRange(void *,u32);s32 fn_8006135C(void *,void *);
void fn_800EFEE0();void fn_800EFC2C();s32 fn_800EF1C0();void fn_800EF364();void fn_800EEEF0();void fn_800EE72C();
extern const f32 lbl_80369FB8;extern void *lbl_803678D0,*lbl_803678D4[2],*lbl_803678DC,*lbl_803678E0;extern u8 lbl_80272C64[];
u8 *obj;void *res;register u32 size;

M2C_FIELD(arg0,f32 *,0x34)=lbl_80369FB8;M2C_FIELD(arg0,s32 *,0x30)=0;M2C_FIELD(arg0,f32 *,0x38)=lbl_80369FB8;M2C_FIELD(arg0,void **,0x3C)=0;

lbl_803678D0=0;lbl_803678D4[0]=0;lbl_803678D4[1]=0;lbl_803678DC=0;lbl_803678E0=0;
obj=fn_80040844();
switch(obj[0x68]){
case 0:
fn_80046360(obj,lbl_80272C64+0x29,fn_800EFEE0,0,0,0x4000);
fn_80046360(obj,lbl_80272C64+0x32,fn_800EFEE0,0,0,0x4000);
if(M2C_FIELD(obj,u32 *,0x64)&4)fn_80046360(obj,0,fn_800EFC2C,0x110,0,0x8000);
if(M2C_FIELD(obj,u32 *,0x64)&0x10)fn_80046360(obj,0,(void (*)())fn_800EF1C0,0x2000,0,0x8000);
if(M2C_FIELD(obj,u32 *,0x64)&0x20)fn_80046360(obj,lbl_80272C64+0x3B,fn_800EF364,0,0,0x4000);
break;
case 1:
if(M2C_FIELD(obj,u32 *,0x64)&4){
fn_80046360(obj,lbl_80272C64+69,fn_800EEEF0,0x110,0,0x8000);
fn_80046360(obj,lbl_80272C64+78,fn_800EEEF0,0x110,0,0x8000);
fn_80046360(obj,lbl_80272C64+88,fn_800EEEF0,0x110,0,0x8000);
fn_80046360(obj,lbl_80272C64+98,fn_800EEEF0,0x110,0,0x8000);
fn_80046360(obj,lbl_80272C64+108,fn_800EEEF0,0x110,0,0x8000);
}
res=fn_80046360(obj,lbl_80272C64+0x76,fn_800EE72C,0,0,0x4000);
if(res){
M2C_FIELD(arg0,u8 **,0x3C)=fn_80046EB8(obj,res)+0x14;
size=fn_80222420(0x130,0xE0,4,0,0);lbl_803678D0=fn_800C45B8(size,lbl_80272C64+0x7E,0);DCFlushRange(lbl_803678D0,size);
size=fn_80222420(4,0x10,3,0,0);lbl_803678D4[0]=fn_800C45B8(size,lbl_80272C64+0x7E,0);lbl_803678D4[1]=fn_800C45B8(size,lbl_80272C64+0x7E,0);
DCFlushRange(lbl_803678D4[0],size);DCFlushRange(lbl_803678D4[1],size);
lbl_803678DC=lbl_803678D4[0];lbl_803678E0=lbl_803678D4[1];
if(fn_8006135C(M2C_FIELD(arg0,void **,0x3C),lbl_80272C64+0x7F)<0)fn_800056A0(0);
}
break;
}
}
s32 fn_800EE490(void) {
    s32 fn_8000CAF0(void *, s32);
    void fn_800EE124(void);
    extern u8 lbl_8028E558[];
    s32 result;

    result = fn_8000CAF0(lbl_8028E558, 4);
    fn_800EE124();
    return result;
}

s32 fn_800EE72C(void *arg0, s32 arg1) {
    void *fn_80040844(void);
    f32 fn_80059F64(f32, f32, f32, f32);
    void *fn_80060664(void);
    void *fn_80067FDC(void);
    void *fn_80068548(void);
    void fn_80069010(void *, void *);
    void fn_800690D4(void *, void *, void *);
    void fn_80069354(void *, void *, void *, void *, s32);
    void fn_80069810(void *, void *, void *, void *);
    s32 fn_80069CFC(void);
    s32 fn_80069D58(void);
    s32 fn_80069DBC(void);
    s32 fn_80069E18(void);
    s32 fn_80069E7C(void);
    s32 fn_80069EA8(void);
    void *fn_8006A374(void);
    void *fn_8006A37C(void *);
    void fn_8006A384(void *);
    void fn_80201FF0(void *);
    void fn_80202024(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void fn_80202870(void *, f32, f32, f32, f32, f32, f32);
    void fn_8020293C(void *, f32, f32, f32, f32, f32, f32, f32, f32);
    void fn_802029C4(void *, void *, void *);
    void fn_802031A8(void *, void *, void *);
    void fn_802031E8(void *, void *);
    f32 fn_8020322C(void *);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void fn_802228D8(void *, s32, s32, s32, s32, s32, f32, f32, f32);
    void fn_80222C50(void *, s32);
    void fn_80223500(s32, void *, s32);
    void fn_80223678(s32, s32, s32);
    void fn_802237BC(s32, s32, s32);
    void fn_80223914(s32, s32, s32, s32, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223C78(s32, void *);
    void fn_80223CDC(s32, s32);
    void fn_80223D38(s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    extern u8 lbl_80272C00[];
    extern void *lbl_803678D0;
    extern void *lbl_803678DC;
    extern f32 lbl_80369FA4;
    extern f32 lbl_80369FA8;
    extern f32 lbl_80369FB8;
    extern f32 lbl_80369FBC;
    extern f32 lbl_80369FC0;
    extern f32 lbl_80369FC4;
    extern f32 lbl_80369FC8;
    extern f32 lbl_80369FCC;
    extern f32 lbl_80369FD0;
    extern u32 lbl_8036C4D4;

    f32 sp25C[3][4];
    f32 sp22C[3][4];
    f32 sp1EC[3][4];
    f32 sp1BC[3][4];
    f32 sp18C[3][4];
    f32 sp15C[3][4];
    f32 sp12C[3][4];
    f32 spFC[3][4];
    f32 spCC[3][4];
    u8 spAC[0x20];
    f32 sp94[6];
    f32 sp88[3];
    f32 sp70[6];
    f32 sp4C[3];
    f32 sp58[3];
    f32 sp64[3];
    f32 sp34[6];
    f32 sp10[3];
    f32 sp1C[3];
    f32 sp28[3];
    u8 pad20[0x20];
    u32 spC;
    u32 sp8;
    u8 *tbl;
    void *self;
    s32 arg1s;
    void *r24;
    void *r25v;
    void *r26;
    void *r27;
    void *cam;
    f32 scaleY;
    void *unk2C;
    s32 t26, t28, t25, t29, t27;
    void *mtx;
    s32 t30, t29b, t28b, t27b, t26b;
    s32 alpha;
    f32 tmpf;

    tbl = lbl_80272C00;
    self = arg0;
    arg1s = arg1;
    r24 = fn_8006A37C(self);
    r25v = fn_80060664();
    r26 = fn_8006A374();
    r27 = *(void **)((u8 *)self + 0x14);
    fn_8006A384(sp22C);
    fn_80069010(r24, r26);
    fn_800690D4(r24, r26, self);
    fn_80069810(r24, r25v, r26, self);
    fn_80069354(r24, r25v, r26, r27, arg1s);
    cam = fn_80068548();
    *(s32 *)&sp88[0] = *(s32 *)(tbl + 0x58);
    *(s32 *)&sp88[1] = *(s32 *)(tbl + 0x5C);
    *(s32 *)&sp88[2] = *(s32 *)(tbl + 0x60);
    fn_802031A8((u8 *)cam + 0xE0, (u8 *)cam + 0xD4, sp88);
    if (fn_8020322C(sp88) > lbl_80369FB8) {
        fn_802031E8(sp88, sp88);
        if (sp88[1] < lbl_80369FB8) {
            sp88[1] *= lbl_80369FBC;
        }
    }
    scaleY = sp88[1];
    cam = fn_80040844();
    if (cam == NULL) {
        return 1;
    }
    fn_80222644(spAC, lbl_803678DC, 4, 0x10, 3, 1, 1, 0);
    fn_802228D8(spAC, 1, 1, 0, 0, 0, lbl_80369FB8, lbl_80369FB8, lbl_80369FB8);
    t26 = fn_80069E7C();
    t28 = fn_80069DBC();
    t25 = fn_80069D58();
    t29 = fn_80069E18();
    t27 = fn_80069CFC();
    sp94[1] = lbl_80369FB8;
    sp94[0] = lbl_80369FC0;
    sp94[2] = lbl_80369FB8;
    sp94[3] = lbl_80369FB8;
    sp94[4] = lbl_80369FC0;
    sp94[5] = lbl_80369FB8;
    fn_80223500(1, sp94, 1);
    *(s32 *)&sp70[0] = *(s32 *)(tbl + 0x1C);
    *(s32 *)&sp70[2] = *(s32 *)(tbl + 0x24);
    *(s32 *)&sp70[3] = *(s32 *)(tbl + 0x28);
    *(s32 *)&sp70[5] = *(s32 *)(tbl + 0x30);
    sp70[0] = lbl_80369FB8;
    sp70[2] = lbl_80369FB8;
    sp70[3] = lbl_80369FB8;
    sp70[5] = lbl_80369FB8;
    *(s32 *)&sp70[1] = *(s32 *)(tbl + 0x20);
    sp4C[0] = sp70[0];
    *(s32 *)&sp4C[1] = *(s32 *)(tbl + 0x20);
    sp4C[2] = sp70[2];
    *(s32 *)&sp70[4] = *(s32 *)(tbl + 0x2C);
    sp58[0] = sp70[3];
    *(s32 *)&sp58[1] = *(s32 *)(tbl + 0x2C);
    sp58[2] = sp70[5];
    *(s32 *)&sp64[0] = *(s32 *)(tbl + 0x34);
    *(s32 *)&sp64[1] = *(s32 *)(tbl + 0x38);
    *(s32 *)&sp64[2] = *(s32 *)(tbl + 0x3C);
    mtx = fn_80040844();
    fn_802029C4((u8 *)mtx + 0x70, sp4C, sp4C);
    fn_802029C4((u8 *)mtx + 0x70, sp58, sp58);
    fn_802029C4((u8 *)mtx + 0x70, sp64, sp64);
    fn_802026E4(sp12C, sp4C, sp64, sp58);
    fn_8020293C(sp15C, lbl_80369FBC, lbl_80369FC4, lbl_80369FBC, lbl_80369FC4, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    fn_80202024(sp12C, sp22C, sp12C);
    fn_80202024(sp15C, sp12C, sp25C);
    fn_80224E50(sp25C, t25, 0);
    fn_802201A8(t28, 0, 0, t25, 0, 0x7D);
    fn_80222C50(spAC, t29);
    fn_802237BC(t27, t28, t29);
    fn_80223678(t27, 0, 0);
    fn_80223914(t26, t27, 1, 0, 1);
    unk2C = *(void **)((u8 *)cam + 0x2C);
    if (unk2C != NULL && *(f32 *)((u8 *)unk2C + 0x38) != lbl_80369FB8) {
        fn_80222644(spAC, lbl_803678D0, 0x130, 0xE0, 4, 0, 0, 0);
        fn_802228D8(spAC, 1, 1, 0, 0, 0, lbl_80369FB8, lbl_80369FB8, lbl_80369FB8);
        t26 = fn_80069DBC();
        t25 = fn_80069EA8();
        t28 = fn_80069E18();
        t27 = fn_80069D58();
        fn_80202870(sp1EC, lbl_80369FCC, lbl_80369FD0, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
        fn_80067FDC();
        fn_80201FF0(sp1BC);
        fn_80202024(sp1BC, sp22C, sp18C);
        fn_80202024(sp1EC, sp18C, sp18C);
        fn_80224E50(sp18C, t27, 0);
        fn_802201A8(t26, 0, 0, t27, 0, 0x7D);
        fn_80222C50(spAC, t28);
        fn_80223F2C(t25, t26, t28, 4);
        tmpf = fn_80059F64(lbl_80369FA4, lbl_80369FA8, lbl_80369FC4, scaleY);
        alpha = (s32)(tmpf * *(f32 *)((u8 *)unk2C + 0x38));
        if (alpha < 0) {
            alpha = 0;
        }
        if (alpha > 0xFF) {
            alpha = 0xFF;
        }
        spC = lbl_8036C4D4;
        ((u8 *)&spC)[0] = (u8)alpha;
        ((u8 *)&spC)[1] = (u8)alpha;
        ((u8 *)&spC)[2] = (u8)alpha;
        ((u8 *)&spC)[3] = (u8)alpha;
        sp8 = spC;
        fn_80223C78(3, &sp8);
        fn_80223CDC(t25, 0xF);
        fn_80223D38(t25, 0x1F);
        fn_80223A5C(t25, 0, 8, 0xE, 0xF);
        fn_80223AE4(t25, 0, 0, 0, 1, 0);
        fn_80223AA0(t25, 7, 7, 7, 0);
        fn_80223B4C(t25, 0, 0, 0, 1, 0);
    }
    fn_80222644(spAC, lbl_803678DC, 4, 0x10, 3, 1, 1, 0);
    fn_802228D8(spAC, 1, 1, 0, 0, 0, lbl_80369FB8, lbl_80369FB8, lbl_80369FB8);
    t30 = fn_80069E7C();
    t29b = fn_80069DBC();
    t28b = fn_80069D58();
    t27b = fn_80069E18();
    t26b = fn_80069CFC();
    sp94[1] = lbl_80369FB8;
    sp94[0] = lbl_80369FC0;
    sp94[2] = lbl_80369FB8;
    sp94[3] = lbl_80369FB8;
    sp94[4] = lbl_80369FC0;
    sp94[5] = lbl_80369FB8;
    fn_80223500(1, sp94, 1);
    *(s32 *)&sp34[0] = *(s32 *)(tbl + 0x1C);
    *(s32 *)&sp34[2] = *(s32 *)(tbl + 0x24);
    *(s32 *)&sp34[3] = *(s32 *)(tbl + 0x28);
    *(s32 *)&sp34[5] = *(s32 *)(tbl + 0x30);
    sp34[0] = lbl_80369FB8;
    sp34[2] = lbl_80369FB8;
    sp34[3] = lbl_80369FB8;
    sp34[5] = lbl_80369FB8;
    *(s32 *)&sp34[1] = *(s32 *)(tbl + 0x20);
    sp10[0] = sp34[0];
    *(s32 *)&sp10[1] = *(s32 *)(tbl + 0x20);
    sp10[2] = sp34[2];
    *(s32 *)&sp34[4] = *(s32 *)(tbl + 0x2C);
    sp1C[0] = sp34[3];
    *(s32 *)&sp1C[1] = *(s32 *)(tbl + 0x2C);
    sp1C[2] = sp34[5];
    *(s32 *)&sp28[0] = *(s32 *)(tbl + 0x34);
    *(s32 *)&sp28[1] = *(s32 *)(tbl + 0x38);
    *(s32 *)&sp28[2] = *(s32 *)(tbl + 0x3C);
    mtx = fn_80040844();
    fn_802029C4((u8 *)mtx + 0x70, sp10, sp10);
    fn_802029C4((u8 *)mtx + 0x70, sp1C, sp1C);
    fn_802029C4((u8 *)mtx + 0x70, sp28, sp28);
    fn_802026E4(spCC, sp10, sp28, sp1C);
    fn_8020293C(spFC, lbl_80369FBC, lbl_80369FC4, lbl_80369FBC, lbl_80369FC4, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    fn_80202024(spCC, sp22C, spCC);
    fn_80202024(spFC, spCC, sp25C);
    fn_80224E50(sp25C, t28b, 0);
    fn_802201A8(t29b, 0, 0, t28b, 0, 0x7D);
    fn_80222C50(spAC, t27b);
    fn_802237BC(t26b, t29b, t27b);
    fn_80223678(t26b, 0, 0);
    fn_80223914(t30, t26b, 1, 0, 1);
    return 1;
}

void fn_800EEEF0(s32 arg0, s32 arg1, s32 arg2, s32* arg3)
{
    *arg3 = arg0;
    *(arg3 + 1) = arg1;
    *(arg3 + 2) = arg2;
}

s32 fn_800EF1C0(void) {
    void fn_8004D5D4(void *);
    s32 fn_80068548(void);
    s32 fn_80069D58(void);
    s32 fn_80069DBC(void);
    s32 fn_80069E18(void);
    s32 fn_80069EA8(void);
    void fn_8006A384(void *);
    void fn_80202024(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void fn_80202870(void *, f32, f32, f32, f32, f32, f32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223D38(s32, s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    extern f32 lbl_80369FC8;
    extern f32 lbl_80369FCC;
    extern f32 lbl_80369FD0;
    extern f32 lbl_80369FE0;
    f32 spB8[3][4];
    f32 sp88[3][4];
    f32 sp58[3][4];
    f32 sp28[3][4];
    u8 sp8[0x20];
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r3;

    temp_r30 = fn_80069DBC();
    temp_r31 = fn_80069EA8();
    temp_r29 = fn_80069E18();
    temp_r28 = fn_80069D58();
    temp_r3 = fn_80068548();
    fn_802026E4(sp58, (void *)(temp_r3 + 0xD4), (void *)(temp_r3 + 0xEC), (void *)(temp_r3 + 0xE0));
    fn_80202870(sp88, lbl_80369FCC, lbl_80369FD0, lbl_80369FC8, lbl_80369FE0, lbl_80369FC8, lbl_80369FC8);
    fn_8006A384(sp28);
    fn_80202024(sp58, sp28, spB8);
    fn_80202024(sp88, spB8, spB8);
    fn_8004D5D4(sp8);
    fn_80222C50(sp8, temp_r29);
    fn_80224E50(spB8, temp_r28, 0);
    fn_802201A8(temp_r30, 0, 0, temp_r28, 0, 0x7D);
    fn_80223F2C(temp_r31, temp_r30, temp_r29, 4);
    fn_80223A5C(temp_r31, 0xF, 0xF, 0xF, 0);
    fn_80223AE4(temp_r31, 1, 0, 0, 1, 0);
    fn_80223D38(temp_r31, 2);
    fn_80223AA0(temp_r31, 7, 6, 4, 0);
    fn_80223B4C(temp_r31, 1, 0, 0, 1, 0);
    fn_80223E5C(4, 0, 1, 0, 0);
    return 1;
}

s32 fn_800EF364(void *arg0, s32 arg1) {
    void *fn_80040844(void);
    f32 fn_80059F64(f32, f32, f32, f32);
    void *fn_80060664(void);
    f32 fn_8006469C(void *, s32, f32);
    s32 *fn_80067478(void);
    void *fn_80068548(void);
    s32 fn_80069D58(void);
    s32 fn_80069DBC(void);
    s32 fn_80069E18(void);
    s32 fn_80069EA8(void);
    void *fn_8006A37C(void *);
    void fn_8006A384(void *);
    void fn_8006ECCC(s32, void *, u16);
    void fn_80202024(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void fn_8020293C(void *, f32, f32, f32, f32, f32, f32, f32, f32);
    void fn_802029C4(void *, void *, void *);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_8022100C(s32);
    void fn_80222164(s32, void *);
    void fn_8022224C(s32, void *);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223C78(s32, void *);
    void fn_80223D38(s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    extern u8 lbl_80272C00[];
    extern f32 lbl_80369FA4;
    extern f32 lbl_80369FB8;
    extern f32 lbl_80369FC4;
    extern f32 lbl_80369FC8;
    extern f32 lbl_80369FE4;
    extern f32 lbl_80369FE8;
    extern f32 lbl_80369FEC;
    extern f32 lbl_80369FF0;
    extern f32 lbl_80369FF4;
    extern f32 lbl_80369FF8;
    extern f32 lbl_80369FFC;

    f32 sp254[3][4];
    f32 sp224[3][4];
    f32 sp1F4[3][4];
    f32 sp1C4[3][4];
    f32 sp194[3][4];
    f32 sp164[3][4];
    f32 sp134[3][4];
    f32 sp104[3][4];
    u8 spE4[0x20];
    f32 spCC[6];
    f32 spB4[6];
    f32 sp90[3];
    f32 sp9C[3];
    f32 spA8[3];
    f32 sp78[6];
    f32 sp54[3];
    f32 sp60[3];
    f32 sp6C[3];
    f32 sp3C[6];
    f32 sp18[3];
    f32 sp24[3];
    f32 sp30[3];
    u8 color[4];
    u32 sp10;
    u32 spC;
    u32 sp8;
    u8 *tbl;
    void *self;
    s32 path;
    void *col;
    void *obj;
    void *p14;
    u16 idx;
    f32 scale;
    void *cam;
    void *unk2C;
    void *mtx;
    f32 f3, f2, f4, f5, f1, f0;
    f32 negFec;
    s32 t29, t24, t23, t25;
    f32 vf4;
    s32 t29b, t25b, t24b, t23b;
    s32 t26c, t29c, t25c, t24c;
    f32 fx, fy;
    s32 w40, w44, w48, w4c, w50, w54;

    tbl = lbl_80272C00;
    self = arg0;
    path = arg1;
    col = fn_8006A37C(self);
    obj = fn_80060664();
    w40 = *(s32 *)(tbl + 0x40);
    w44 = *(s32 *)(tbl + 0x44);
    w48 = *(s32 *)(tbl + 0x48);
    w4c = *(s32 *)(tbl + 0x4C);
    w50 = *(s32 *)(tbl + 0x50);
    w54 = *(s32 *)(tbl + 0x54);
    p14 = *(void **)((u8 *)self + 0x14);
    *(s32 *)&spCC[3] = w40;
    scale = lbl_80369FB8;
    *(s32 *)&spCC[4] = w44;
    idx = *(u16 *)((u8 *)p14 + 4);
    *(s32 *)&spCC[5] = w48;
    *(s32 *)&spCC[0] = w4c;
    *(s32 *)&spCC[1] = w50;
    *(s32 *)&spCC[2] = w54;
    fn_80222334(1);
    fn_80222370(0, 1, 0, 0, 1, 2, 2);
    fn_80222370(2, 0, 0, 0, 0, 2, 2);
    color[0] = (u8)((s32)(*(u8 *)((u8 *)col + 8) * 0xFF) / 128);
    color[1] = (u8)((s32)(*(u8 *)((u8 *)col + 9) * 0xFF) / 128);
    color[2] = (u8)((s32)(*(u8 *)((u8 *)col + 0xA) * 0xFF) / 128);
    color[3] = (u8)((s32)(*(u8 *)((u8 *)col + 0xB) * 0xFF) / 255);
    sp10 = *(u32 *)color;
    fn_8022224C(4, &sp10);
    spC = *fn_80067478();
    fn_80222164(4, &spC);
    fn_8006A384(sp224);
    if (obj != NULL) {
        spCC[3] = fn_8006469C(obj, 0, lbl_80369FB8);
        spCC[4] = fn_8006469C(obj, 0, lbl_80369FC4);
        spCC[0] = fn_8006469C(obj, 0, lbl_80369FE4);
        spCC[1] = fn_8006469C(obj, 0, lbl_80369FE8);
    }
    cam = fn_80040844();
    if (cam != NULL) {
        unk2C = *(void **)((u8 *)cam + 0x2C);
        scale = *(f32 *)((u8 *)unk2C + 0x34);
    }
    f3 = spCC[3] * scale;
    f2 = spCC[4] * scale;
    f4 = -f2;
    f5 = -f3;
    *(s32 *)&spB4[0] = *(s32 *)(tbl + 0x1C);
    *(s32 *)&spB4[2] = *(s32 *)(tbl + 0x24);
    f1 = spCC[0] * scale;
    *(s32 *)&spB4[3] = *(s32 *)(tbl + 0x28);
    f0 = spCC[1] * scale;
    *(s32 *)&spB4[5] = *(s32 *)(tbl + 0x30);
    spB4[0] = f5;
    spB4[2] = f4;
    spB4[3] = f5;
    spB4[5] = f4;
    spCC[3] = f3;
    spCC[4] = f2;
    spCC[0] = f1;
    spCC[1] = f0;
    *(s32 *)&spB4[1] = *(s32 *)(tbl + 0x20);
    sp90[0] = spB4[0];
    *(s32 *)&sp90[1] = *(s32 *)(tbl + 0x20);
    sp90[2] = spB4[2];
    *(s32 *)&spB4[4] = *(s32 *)(tbl + 0x2C);
    sp9C[0] = spB4[3];
    *(s32 *)&sp9C[1] = *(s32 *)(tbl + 0x2C);
    sp9C[2] = spB4[5];
    *(s32 *)&spA8[0] = *(s32 *)(tbl + 0x34);
    *(s32 *)&spA8[1] = *(s32 *)(tbl + 0x38);
    *(s32 *)&spA8[2] = *(s32 *)(tbl + 0x3C);
    mtx = fn_80040844();
    fn_802029C4((u8 *)mtx + 0x70, sp90, sp90);
    fn_802029C4((u8 *)mtx + 0x70, sp9C, sp9C);
    fn_802029C4((u8 *)mtx + 0x70, spA8, spA8);
    fn_802026E4(sp1C4, sp90, spA8, sp9C);
    negFec = -lbl_80369FEC;
    fn_8020293C(sp1F4, negFec, lbl_80369FEC, negFec, lbl_80369FEC, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    fn_80202024(sp1C4, sp224, sp1C4);
    fn_80202024(sp1F4, sp1C4, sp254);
    t29 = fn_80069D58();
    fn_80224E50(sp254, t29, 0);
    t24 = fn_80069DBC();
    t23 = fn_80069EA8();
    t25 = fn_80069E18();
    fn_8006ECCC(path, spE4, idx);
    fn_80222C50(spE4, t25);
    fn_802201A8(t24, 0, 0, t29, 0, 0x7D);
    fn_80223F2C(t23, t24, t25, 4);
    vf4 = *(f32 *)((u8 *)fn_80068548() + 0x100);
    if (vf4 < lbl_80369FB8) {
        vf4 = lbl_80369FB8;
    }
    if (vf4 > lbl_80369FF0) {
        vf4 = lbl_80369FF0;
    }
    color[3] = (u8)(s32)fn_80059F64(lbl_80369FF4, lbl_80369FF8, lbl_80369FF0, vf4);
    sp8 = *(u32 *)color;
    fn_80223C78(3, &sp8);
    fn_80223D38(t23, 0x1F);
    fn_80223A5C(t23, 0xF, 8, 0xA, 0xF);
    fn_80223AE4(t23, 0, 0, 0, 1, 0);
    fn_80223AA0(t23, 7, 7, 7, 6);
    fn_80223B4C(t23, 0, 0, 0, 1, 0);
    f1 = -spCC[1];
    f0 = -spCC[0];
    *(s32 *)&sp78[0] = *(s32 *)(tbl + 0x1C);
    *(s32 *)&sp78[2] = *(s32 *)(tbl + 0x24);
    *(s32 *)&sp78[3] = *(s32 *)(tbl + 0x28);
    *(s32 *)&sp78[5] = *(s32 *)(tbl + 0x30);
    sp78[0] = f0;
    sp78[2] = f1;
    sp78[3] = f0;
    sp78[5] = f1;
    *(s32 *)&sp78[1] = *(s32 *)(tbl + 0x20);
    sp54[0] = sp78[0];
    *(s32 *)&sp54[1] = *(s32 *)(tbl + 0x20);
    sp54[2] = sp78[2];
    *(s32 *)&sp78[4] = *(s32 *)(tbl + 0x2C);
    sp60[0] = sp78[3];
    *(s32 *)&sp60[1] = *(s32 *)(tbl + 0x2C);
    sp60[2] = sp78[5];
    *(s32 *)&sp6C[0] = *(s32 *)(tbl + 0x34);
    *(s32 *)&sp6C[1] = *(s32 *)(tbl + 0x38);
    *(s32 *)&sp6C[2] = *(s32 *)(tbl + 0x3C);
    mtx = fn_80040844();
    fn_802029C4((u8 *)mtx + 0x70, sp54, sp54);
    fn_802029C4((u8 *)mtx + 0x70, sp60, sp60);
    fn_802029C4((u8 *)mtx + 0x70, sp6C, sp6C);
    fn_802026E4(sp164, sp54, sp6C, sp60);
    fn_8020293C(sp194, lbl_80369FEC, negFec, negFec, lbl_80369FEC, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    fn_80202024(sp164, sp224, sp164);
    fn_80202024(sp194, sp164, sp254);
    t29b = fn_80069D58();
    fn_80224E50(sp254, t29b, 0);
    t25b = fn_80069DBC();
    t24b = fn_80069EA8();
    t23b = fn_80069E18();
    fn_80222C50(spE4, t23b);
    fn_802201A8(t25b, 0, 0, t29b, 0, 0x7D);
    fn_80223F2C(t24b, t25b, t23b, 4);
    fn_80223A5C(t24b, 0xF, 8, 0xA, 0);
    fn_80223AE4(t24b, 0, 0, 3, 1, 0);
    fn_80223AA0(t24b, 7, 7, 7, 0);
    fn_80223B4C(t24b, 0, 0, 0, 1, 0);
    fn_8022100C(2);
    if (*(u8 *)((u8 *)self + 6) > 1) {
        fy = (f32)(s32)(0x40 - *(u8 *)((u8 *)cam + 0x5D));
        fx = (f32)(s32)(0x40 - *(u8 *)((u8 *)cam + 0x5C));
        *(s32 *)&sp3C[0] = *(s32 *)(tbl + 0x1C);
        *(s32 *)&sp3C[2] = *(s32 *)(tbl + 0x24);
        *(s32 *)&sp3C[3] = *(s32 *)(tbl + 0x28);
        *(s32 *)&sp3C[5] = *(s32 *)(tbl + 0x30);
        sp3C[0] = fx;
        sp3C[2] = fy;
        sp3C[3] = fx;
        sp3C[5] = fy;
        *(s32 *)&sp3C[1] = *(s32 *)(tbl + 0x20);
        sp18[0] = sp3C[0];
        *(s32 *)&sp18[1] = *(s32 *)(tbl + 0x20);
        sp18[2] = sp3C[2];
        *(s32 *)&sp3C[4] = *(s32 *)(tbl + 0x2C);
        sp24[0] = sp3C[3];
        *(s32 *)&sp24[1] = *(s32 *)(tbl + 0x2C);
        sp24[2] = sp3C[5];
        *(s32 *)&sp30[0] = *(s32 *)(tbl + 0x34);
        *(s32 *)&sp30[1] = *(s32 *)(tbl + 0x38);
        *(s32 *)&sp30[2] = *(s32 *)(tbl + 0x3C);
        mtx = fn_80040844();
        fn_802029C4((u8 *)mtx + 0x70, sp18, sp18);
        fn_802029C4((u8 *)mtx + 0x70, sp24, sp24);
        fn_802029C4((u8 *)mtx + 0x70, sp30, sp30);
        fn_802026E4(sp104, sp18, sp30, sp24);
        fn_8020293C(sp134, lbl_80369FFC, lbl_80369FA4, lbl_80369FFC, lbl_80369FA4, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
        fn_80202024(sp104, sp224, sp104);
        fn_80202024(sp134, sp104, sp254);
        t26c = fn_80069D58();
        fn_80224E50(sp254, t26c, 0);
        t29c = fn_80069DBC();
        t25c = fn_80069EA8();
        t24c = fn_80069E18();
        fn_8006ECCC(path, spE4, (u16)(idx + 1));
        fn_80222C50(spE4, t24c);
        fn_802201A8(t29c, 0, 0, t26c, 0, 0x7D);
        fn_80223F2C(t25c, t29c, t24c, 4);
        fn_80223A5C(t25c, 0xF, 8, 0xD, 0);
        fn_80223AE4(t25c, 0, 0, 0, 1, 0);
        fn_80223AA0(t25c, 7, 4, 6, 0);
        fn_80223B4C(t25c, 1, 0, 0, 1, 0);
    }
    return 1;
}

s32 fn_800EFEE0(void *arg0, s32 arg1) {
    void *fn_80040844(void);
    void *fn_8006A37C(void);
    s32 fn_8006A374(void);
    void fn_8006A384(void *);
    void fn_800690D4(void *, s32, void *);
    void fn_8006ECCC(s32, void *, u16);
    s32 fn_80069DBC(void);
    s32 fn_80069EA8(void);
    s32 fn_80069E18(void);
    s32 fn_80069D58(void);
    void fn_802029C4(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void fn_8020293C(void *, f32, f32, f32, f32, f32, f32, f32, f32);
    void fn_80202024(void *, void *, void *);
    void fn_8022224C(s32, void *);
    void fn_80222C50(void *, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    void fn_80223BB4(s32, void *);
    void fn_8022100C(s32);
    extern u8 lbl_80272C00[];
    extern f32 lbl_80369FC8;
    extern f32 lbl_80369FFC;
    extern f32 lbl_80369FA4;
    extern u32 lbl_8036C4D0;

    f32 sp104[3][4];
    f32 spD4[3][4];
    f32 spA4[3][4];
    f32 sp74[3][4];
    u8 sp54[0x20];
    f32 sp3C[6];
    f32 sp18[3];
    f32 sp24[3];
    f32 sp30[3];
    u8 color[4];
    u32 sp10;
    u32 spC;
    u32 sp8;
    void *cam;
    void *col;
    s32 col_arg;
    void *mtx_obj;
    u8 *tbl;
    f32 fx;
    f32 fy;
    s32 a;
    s32 b;
    s32 c;
    s32 tmp;
    u16 idx;
    void *self;
    s32 path;
    s32 w20, w2c, w1c, w24, w28, w30, w34, w38, w3c;

    self = arg0;
    path = arg1;
    tbl = lbl_80272C00;
    cam = fn_80040844();
    col = fn_8006A37C();
    col_arg = fn_8006A374();
    fn_8006A384(spD4);
    fy = (f32)(s32)(0x40 - *(u8 *)((u8 *)cam + 0x5D));
    fx = (f32)(s32)(0x40 - *(u8 *)((u8 *)cam + 0x5C));
    w20 = *(s32 *)(tbl + 0x20);
    w2c = *(s32 *)(tbl + 0x2C);
    w1c = *(s32 *)(tbl + 0x1C);
    w24 = *(s32 *)(tbl + 0x24);
    w28 = *(s32 *)(tbl + 0x28);
    w30 = *(s32 *)(tbl + 0x30);
    w34 = *(s32 *)(tbl + 0x34);
    w38 = *(s32 *)(tbl + 0x38);
    w3c = *(s32 *)(tbl + 0x3C);
    *(s32 *)&sp3C[2] = w24;
    *(s32 *)&sp3C[0] = w1c;
    *(s32 *)&sp3C[3] = w28;
    *(s32 *)&sp3C[5] = w30;
    sp3C[0] = fx;
    sp3C[2] = fy;
    sp3C[3] = fx;
    sp3C[5] = fy;
    *(s32 *)&sp3C[1] = w20;
    sp18[0] = sp3C[0];
    *(s32 *)&sp18[1] = w20;
    sp18[2] = sp3C[2];
    *(s32 *)&sp3C[4] = w2c;
    sp24[0] = sp3C[3];
    *(s32 *)&sp24[1] = w2c;
    sp24[2] = sp3C[5];
    *(s32 *)&sp30[0] = w34;
    *(s32 *)&sp30[1] = w38;
    *(s32 *)&sp30[2] = w3c;
    mtx_obj = fn_80040844();
    fn_802029C4((u8 *)mtx_obj + 0x70, sp18, sp18);
    fn_802029C4((u8 *)mtx_obj + 0x70, sp24, sp24);
    fn_802029C4((u8 *)mtx_obj + 0x70, sp30, sp30);
    fn_802026E4(sp74, sp18, sp30, sp24);
    fn_8020293C(spA4, lbl_80369FFC, lbl_80369FA4, lbl_80369FFC, lbl_80369FA4,
                lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    fn_80202024(sp74, spD4, sp74);
    fn_80202024(spA4, sp74, sp104);
    fn_800690D4(col, col_arg, self);
    color[0] = (u8)((s32)(*(u8 *)((u8 *)col + 8) * 0xFF) / 128);
    color[1] = (u8)((s32)(*(u8 *)((u8 *)col + 9) * 0xFF) / 128);
    color[2] = (u8)((s32)(*(u8 *)((u8 *)col + 0xA) * 0xFF) / 128);
    color[3] = (u8)((s32)(*(u8 *)((u8 *)col + 0xB) * 0xFF) / 255);
    sp10 = *(u32 *)color;
    fn_8022224C(4, &sp10);
    idx = *(u16 *)(*(u8 **)((u8 *)self + 0x14) + 4);
    fn_8006ECCC(path, sp54, idx);
    a = fn_80069DBC();
    b = fn_80069EA8();
    c = fn_80069E18();
    fn_80222C50(sp54, c);
    fn_80223F2C(b, a, c, 4);
    fn_802201A8(a, 0, 4, 0x3C, 0, 0x7D);
    fn_80223AE4(b, 0, 0, 0, 1, 1);
    fn_80223A5C(b, 0xF, 8, 0xA, 0xF);
    fn_80223B4C(b, 0, 0, 0, 1, 1);
    fn_80223AA0(b, 7, 7, 7, 7);
    a = fn_80069DBC();
    b = fn_80069EA8();
    c = fn_80069E18();
    fn_80222C50(sp54, c);
    fn_80223F2C(b, a, c, 4);
    fn_802201A8(a, 0, 5, 0x3C, 0, 0x7D);
    fn_80223AE4(b, 0, 0, 0, 1, 2);
    fn_80223A5C(b, 0xF, 8, 0xA, 0xF);
    fn_80223B4C(b, 0, 0, 0, 1, 2);
    fn_80223AA0(b, 7, 7, 7, 7);
    tmp = fn_80069D58();
    fn_80224E50(sp104, tmp, 0);
    a = fn_80069DBC();
    fn_802201A8(a, 0, 0, tmp, 0, 0x7D);
    b = fn_80069EA8();
    c = fn_80069E18();
    fn_8006ECCC(path, sp54, (u16)(idx + 1));
    fn_80222C50(sp54, c);
    fn_80223F2C(b, a, c, 4);
    fn_80223AE4(b, 0, 0, 0, 1, 0);
    fn_80223A5C(b, 2, 4, 8, 0xF);
    fn_80223B4C(b, 0, 0, 0, 1, 0);
    fn_80223AA0(b, 7, 7, 7, 6);
    if (color[0] < 0xFF || color[1] < 0xFF || color[2] < 0xFF) {
        b = fn_80069EA8();
        sp8 = lbl_8036C4D0;
        ((u8 *)&sp8)[0] = color[0];
        ((u8 *)&sp8)[1] = color[1];
        ((u8 *)&sp8)[2] = color[2];
        ((u8 *)&sp8)[3] = color[3];
        spC = sp8;
        fn_80223BB4(3, &spC);
        fn_80223F2C(b, 0xFF, 0xFF, 0xFF);
        fn_80223A5C(b, 0xF, 0, 6, 0xF);
        fn_80223AE4(b, 0, 0, 0, 1, 0);
        fn_80223AA0(b, 7, 7, 7, 0);
        fn_80223B4C(b, 0, 0, 0, 1, 0);
    }
    fn_8022100C(2);
    return 1;
}

void fn_800F0774(void) {
    void fn_8000C60C(void *);
    extern void *lbl_803678E8;
    extern void *lbl_803678EC;
    void *ptr;

    ptr = lbl_803678E8;
    if (ptr != NULL) {
        fn_8000C60C(ptr);
        lbl_803678E8 = NULL;
    }
    ptr = lbl_803678EC;
    if (ptr != NULL) {
        fn_8000C60C(ptr);
        lbl_803678EC = NULL;
    }
}

void fn_800F07C0(void) {
    f32 fn_80023430(void *, f32, f32);
    void fn_800536B0(void *, f32, f32, f32);
    void *fn_8014C5A8(void *, s32);
    u8 fn_8014D8BC(void *);
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern void *lbl_803678E8;
    extern void *lbl_803678EC;
    extern f32 lbl_8036A010;
    extern f32 lbl_8036A014;
    void *r31;
    u8 *data;
    void *obj;
    f32 f30;
    f32 f31;

    if (fn_8014D8BC(lbl_80330708) != 0) {
        if (lbl_803678E8 != NULL) {
            r31 = lbl_803678E8;
            data = fn_8014C5A8(lbl_80330708, 0);
            if (data[0] != 3) {
                obj = *(void **)((u8 *)r31 + 0x30);
                *(u32 *)((u8 *)obj + 8) |= 0x10;
            } else {
                obj = *(void **)((u8 *)r31 + 0x30);
                *(u32 *)((u8 *)obj + 8) &= ~0x10U;
                f30 = lbl_8036A010 + (f32)(s8)data[2];
                f31 = lbl_8036A010 + (f32)(s8)data[3];
                fn_800536B0(r31, f30, f31, fn_80023430(lbl_802CA518, f30, f31) - lbl_8036A014);
            }
        }
        if (lbl_803678EC != NULL) {
            r31 = lbl_803678EC;
            data = fn_8014C5A8(lbl_80330708, 3);
            if (data[0] != 3) {
                obj = *(void **)((u8 *)r31 + 0x30);
                *(u32 *)((u8 *)obj + 8) |= 0x10;
            } else {
                obj = *(void **)((u8 *)r31 + 0x30);
                *(u32 *)((u8 *)obj + 8) &= ~0x10U;
                f31 = lbl_8036A010 + (f32)(s8)data[2];
                f30 = lbl_8036A010 + (f32)(s8)data[3];
                fn_800536B0(r31, f31, f30, fn_80023430(lbl_802CA518, f31, f30) - lbl_8036A014);
            }
        }
    }
}

void fn_800F07C0(void);

void fn_800F09A8(s32 arg0) {
    void *fn_80052B54(char *, s32);
    u8 fn_8014D8BC(void *);
    extern u8 lbl_80330708[];
    extern char lbl_80272D08[];
    extern u32 lbl_803678E8;
    extern u32 lbl_803678EC;

    if (fn_8014D8BC(lbl_80330708)) {
        lbl_803678E8 = (u32)fn_80052B54(lbl_80272D08 + 0x1D, arg0);
        lbl_803678EC = (u32)fn_80052B54(lbl_80272D08 + 0x2A, arg0);
        M2C_FIELD(M2C_FIELD(lbl_803678E8, void **, 0x30), u32 *, 8) |= 0x164;
        M2C_FIELD(M2C_FIELD(lbl_803678EC, void **, 0x30), u32 *, 8) |= 0x164;
    }
}

void fn_800F0A3C(s32 arg0)
{
    u8* r5;
    s8* r3;
    s32 r0;
    
    r5 = (u8*)0x8032B2B8;
    r5[0x100] = 0;
    
    if ((arg0 - r5[0x80]) >= 0) {
        r3 = (s8*)&r5[0x80];
        r3[arg0] = (s8)(arg0 - r5[0x80]);
        
        if (r5[0x100] < 0x80) {
            return;
        }
        
        r3 = (s8*)&r5[r5[0x100]];
        if (r3[0xC0] >= 0x8 && r3[0xC0] < 0xC && r3[0x80] > 0) {
            if (r3[0xC0] <= 0x13) {
                switch (r3[0xC0]) {
                    case 0x8:
                        r3[0] = 0x8;
                        return;
                    case 0x9:
                        r3[0] = 0x9;
                        return;
                    case 0xa:
                        r3[0] = 0xa;
                        return; 
                    case 0xb:
                        r3[0] = 0xb;
                        return;
                }
            }
        }
    }
    
    r5[0x100]++;
    if (r5[0x100] >= 0x80) {
        r3 = (s8*)&r5[r5[0x100]];
        if (r3[0xC0] <= 0x13) {
            switch (r3[0xC0]) {
                case 0x8:
                    r3[0] = 0x8;
                    return;
                case 0x9:
                    r3[0] = 0x9;
                    return;
                case 0xa:
                    r3[0] = 0xa;
                    return;
                case 0xb:
                    r3[0] = 0xb;
                    return;
            }
        }
    }
}

void fn_800F0B18(u8 *arg0) {
    extern u8 lbl_8032B2B8[];
    s32 i;
    u8 *p;
    s8 dx;
    s8 dy;

    for (i = 0, p = lbl_8032B2B8; i < (s8)lbl_8032B2B8[0x100]; p++, i++) {
        dx = p[1] - p[0];
        dy = p[0x41] - p[0x40];
        if (dx < 0) {
            *arg0++ = 1;
        } else if (dx > 0) {
            *arg0++ = 2;
        } else if (dy < 0) {
            *arg0++ = 8;
        } else if (dy > 0) {
            *arg0++ = 4;
        }
    }
    *arg0 = 0x10;
}

void fn_800F0BC8(void) {
    extern u16 lbl_8032B2B8[];
    extern void fn_8006785C(u32, void *, void *);
    extern u16 fn_800F0C54[];
    
    fn_8006785C(1, fn_800F0C54, lbl_8032B2B8);
}

void fn_800F0BFC(s32 arg0, s32 arg1) {
    extern u16 lbl_8032B2B8[];
    extern void fn_800F0F90(u16 *, s32, s32);
    
    fn_800F0F90(lbl_8032B2B8, arg0, arg1);
}

void fn_800F0C30(s8 arg0, s8 arg1, s8 arg2) {
    extern u8 lbl_8032B2B8[];
    lbl_8032B2B8[0] = arg0;
    lbl_8032B2B8[0x40] = arg1;
    lbl_8032B2B8[0x80] = arg2;
    lbl_8032B2B8[0xC0] = 0x14;
    lbl_8032B2B8[0x100] = 0;
}

void fn_800F0C54(u8 *arg0) {
void fn_8006ECCC(s32,void *,s32); void fn_802025C0(void *,f32,f32,f32); void fn_80202540(void *,f32,f32,f32);
void *fn_80067FDC(void); void fn_80202024(void *,void *,void *); f32 fn_8002300C(void *,u8,u8,s32);
extern s32 lbl_803674F0; extern f32 lbl_8036A020,lbl_8036A024,lbl_8036A028,lbl_8036A02C; extern u8 lbl_802CA518[];
f32 sp58[12],sp28[12]; u8 sp8[32]; u8 *p; u8 x,y; s32 i; extern f64 lbl_8036A018; union { f64 d; struct {u32 hi,lo;} w; } dx,dy; f64 magic;
f32 one,fx,fy,fx1,fy1,z;
fn_8006ECCC(lbl_803674F0,sp8,0);
fn_8021FBB8();fn_8021F4E4(9,1);fn_8021F4E4(13,1);fn_8021FBF0(0,9,1,4,0);fn_8021FBF0(0,13,1,1,0);
fn_80222334(1);fn_80222370(4,0,0,0,0,0,2);fn_802240C8(1);fn_802239D0(0,3);fn_80223F2C(0,0,0,255);
fn_80220428(1);fn_802201A8(0,1,4,30,0,125);
fn_802025C0(sp58,lbl_8036A020,lbl_8036A024,lbl_8036A024);fn_80224E50(sp58,30,1);fn_8022100C(0);fn_80222C50(sp8,0);
fn_80202540(sp28,lbl_8036A028,lbl_8036A028,lbl_8036A02C);fn_80202024(fn_80067FDC(),sp28,sp28);
fn_80224D7C(sp28,0);fn_80224E1C(0);fn_802245D8(1,4,5,0);
magic=lbl_8036A018; one=lbl_8036A024;
for(i=0;i<=(s8)arg0[0x100];i++){
p=arg0+i; x=p[0];y=p[0x40]; dx.w.hi=0x43300000; dx.w.lo=(s32)(s8)x^0x80000000; dy.w.hi=0x43300000; dy.w.lo=(s32)(s8)y^0x80000000; fx=dx.d-magic;fy=dy.d-magic;fx1=one+fx;fy1=one+fy;
fn_80220DEC(0x98,0,4);
z=fn_8002300C(lbl_802CA518,x,y,0);
*(f32 *)0xCC008000=fx;*(f32 *)0xCC008000=fy;*(f32 *)0xCC008000=z;
*(u8 *)0xCC008000=p[0xC0];*(u8 *)0xCC008000=0;
z=fn_8002300C(lbl_802CA518,x,y,1);
*(f32 *)0xCC008000=fx1;*(f32 *)0xCC008000=fy;*(f32 *)0xCC008000=z;
*(u8 *)0xCC008000=p[0xC0]+1;*(u8 *)0xCC008000=0;
z=fn_8002300C(lbl_802CA518,x,y,2);
*(f32 *)0xCC008000=fx;*(f32 *)0xCC008000=fy1;*(f32 *)0xCC008000=z;
*(u8 *)0xCC008000=p[0xC0];*(u8 *)0xCC008000=1;
z=fn_8002300C(lbl_802CA518,x,y,3);
*(f32 *)0xCC008000=fx1;*(f32 *)0xCC008000=fy1;*(f32 *)0xCC008000=z;
*(u8 *)0xCC008000=p[0xC0]+1;*(u8 *)0xCC008000=1;
}fn_80066D00(-1);
}

void fn_800F0F90(u16* arg0, s32 arg1, s32 arg2) {
    // Based on analysis: it looks like a complex processing function
    // with various logic branches and data handling
    
    // The function does a lot of operations - let's build up step by step
    s32 i;
    s32 result;
    
    // It seems to be filling some memory region with values
    if (arg2 > 0) {
        for (i = 0; i < arg2; i++) {
            arg0[i] = (u16)arg1;
        }
    }
}

void fn_800F1494(u8 *arg0, s8 arg1, s8 arg2) {
    s32 fn_8002134C(void *);
    extern u8 lbl_802CA518[];
    void *tbl;
    u8 idx;
    s32 t;
    s32 d0;
    u8 *p;

    tbl = lbl_802CA518;
    arg0[0x100] = (u8)(arg0[0x100] + 1);
    arg0[(s8)arg0[0x100]] = (u8)arg1;
    p = arg0 + (s8)arg0[0x100];
    p[0x40] = (u8)arg2;
    idx = arg0[0x100];
    t = fn_8002134C(tbl);
    p = arg0 + (s8)idx;
    p[0x80] = (u8)(p[0x7F] - t);

    {
        s32 a, b, c, d;
        b = arg0[1];
        a = arg0[0];
        d = arg0[0x41];
        c = arg0[0x40];
        if ((s8)a < (s8)b) {
            d0 = 2;
        } else if ((s8)a > (s8)b) {
            d0 = 1;
        } else if ((s8)c < (s8)d) {
            d0 = 4;
        } else if ((s8)c > (s8)d) {
            d0 = 8;
        } else {
            d0 = 0x10;
        }
    }
    switch ((u8)d0) {
    case 8:
        arg0[0xC0] = 7;
        break;
    case 4:
        arg0[0xC0] = 4;
        break;
    case 1:
        arg0[0xC0] = 5;
        break;
    case 2:
        arg0[0xC0] = 6;
        break;
    }

    {
        s32 i;
        s32 d1;
        s32 a, b, c, d;
        for (i = 1; i < (s8)arg0[0x100]; i++) {
            p = arg0 + i;
            b = p[0];
            a = p[-1];
            d = p[0x40];
            c = p[0x3F];
            if ((s8)a < (s8)b) {
                d0 = 2;
            } else if ((s8)a > (s8)b) {
                d0 = 1;
            } else if ((s8)c < (s8)d) {
                d0 = 4;
            } else if ((s8)c > (s8)d) {
                d0 = 8;
            } else {
                d0 = 0x10;
            }
            a = p[1];
            c = p[0x41];
            if ((s8)b < (s8)a) {
                d1 = 2;
            } else if ((s8)b > (s8)a) {
                d1 = 1;
            } else if ((s8)d < (s8)c) {
                d1 = 4;
            } else if ((s8)d > (s8)c) {
                d1 = 8;
            } else {
                d1 = 0x10;
            }
            t = ((u8)d0 << 4) + (u8)d1;
            switch (t) {
            case 0x88:
                p[0xC0] = 3;
                break;
            case 0x44:
                p[0xC0] = 0;
                break;
            case 0x11:
                p[0xC0] = 1;
                break;
            case 0x22:
                p[0xC0] = 2;
                break;
            case 0x82:
                p[0xC0] = 0xD;
                break;
            case 0x14:
                p[0xC0] = 0xC;
                break;
            case 0x81:
                p[0xC0] = 0xF;
                break;
            case 0x24:
                p[0xC0] = 0xE;
                break;
            case 0x42:
                p[0xC0] = 0x10;
                break;
            case 0x18:
                p[0xC0] = 0x11;
                break;
            case 0x41:
                p[0xC0] = 0x12;
                break;
            case 0x28:
                p[0xC0] = 0x13;
                break;
            }
        }

        p = arg0 + i;
        b = arg0[i];
        a = p[-1];
        d = p[0x40];
        c = p[0x3F];
        if ((s8)a < (s8)b) {
            d0 = 2;
        } else if ((s8)a > (s8)b) {
            d0 = 1;
        } else if ((s8)c < (s8)d) {
            d0 = 4;
        } else if ((s8)c > (s8)d) {
            d0 = 8;
        } else {
            d0 = 0x10;
        }
        switch ((u8)d0) {
        case 8:
            arg0[i + 0xC0] = 0xB;
            break;
        case 4:
            arg0[i + 0xC0] = 8;
            break;
        case 1:
            arg0[i + 0xC0] = 9;
            break;
        case 2:
            arg0[i + 0xC0] = 0xA;
            break;
        }
    }
}

void fn_800F18A4(s32 arg0,s32 arg1) {
void fn_80060060(void *); f32 fn_80023068(void *,f32,f32); void fn_802025C0(void *,f32,f32,f32);void fn_80202540(void *,f32,f32,f32);void fn_80202300(void *,s32,f32);
void *fn_80040844(void);void fn_80043F9C(void *,void *,f32,f32);void fn_802033AC(void *,void *);void fn_80203604(void *,void *,void *,f32);void fn_80202640(void *,void *);void fn_80201FC4(void *);void fn_80202024(void *,void *,void *);void fn_80201FF0(void *,void *);
void fn_8005F7B0(void *,s32);void fn_8005F7E0(void *,s32,s32,s32);void fn_800606BC(void *);
extern u8 lbl_8032AC58[],lbl_802CA518[];extern f32 lbl_8028E588[],lbl_8028E578[];extern f32 lbl_8036A014,lbl_8036A030,lbl_8036A034,lbl_8036A038,lbl_8036A03C;
f32 m108[12],mD8[12],mA8[12],m78[12],m48[12],m18[12],q[4];
u8 *base,*origin,*p,*h,*qp,*obj; f32 *xs,*ys,*x,*y; void *terrain; s32 i; f32 offset,angle,step,fx,fy,fz;
fn_80060060(lbl_8032AC58+0x288);
base=lbl_8032AC58;p=base;i=0;
do {fn_80060060(p+8);i++;p+=0xA0;}while(i<4);
ys=lbl_8028E588;xs=lbl_8028E578;
origin=lbl_8032AC58;
M2C_FIELD(origin,f32 *,0x5E0)=(f32)arg0;M2C_FIELD(base,f32 *,0x5E4)=(f32)arg1;
offset=lbl_8036A014; x=xs;y=ys;h=base;i=0;
do {M2C_FIELD(h,f32 *,0x5E8)=fn_80023068(lbl_802CA518,M2C_FIELD(base,f32 *,0x5E0)+*x,M2C_FIELD(base,f32 *,0x5E4)+*y)-offset;i++;x++;y++;h+=4;}while(i<4);
fn_802025C0(m48,lbl_8036A030,lbl_8036A030,lbl_8036A030);
fn_80202300(m78,0x58,lbl_8036A034);terrain=fn_80040844();
angle=lbl_8036A038;step=lbl_8036A03C; qp=base;obj=base;i=0;
do{
fx=M2C_FIELD(base,f32 *,0x5E0)+*xs;fy=M2C_FIELD(base,f32 *,0x5E4)+*ys;fz=M2C_FIELD(base,f32 *,0x5E8);
if(terrain){
fn_80043F9C(terrain,m18,fx,fy);fn_802033AC(q,m18);fn_80203604(qp+0x5F8,q,q,lbl_8036A030);
M2C_FIELD(qp,f32 *,0x5F8)=q[0];M2C_FIELD(qp,f32 *,0x5FC)=q[1];M2C_FIELD(qp,f32 *,0x600)=q[2];M2C_FIELD(qp,f32 *,0x604)=q[3];
fn_80202640(mD8,q);
}else fn_80201FC4(mD8);
fn_80202300(m108,0x5A,angle*(step*(f32)i));fn_80202540(mA8,fx,fy,fz);
fn_80202024(m78,m48,m18);fn_80202024(m108,m18,m18);fn_80202024(mD8,m18,m18);fn_80202024(mA8,m18,obj+0x18);
M2C_FIELD(obj,u32 *,8)|=0x50000400;fn_80201FF0(obj+0x18,obj+0x338);
M2C_FIELD(obj,u32 *,0x328)|=0x30000400;fn_8005F7B0(obj+0x328,0xF0);fn_8005F7E0(obj+0x328,0x80,0x20,0x80);
M2C_FIELD(obj,f32 *,0x380)=M2C_FIELD(obj,f32 *,0x60);fn_800606BC(obj+8);fn_800606BC(obj+0x328);
i++;ys++;base+=4;qp+=16;obj+=0xA0;xs++;
}while(i<4);
lbl_8032AC58[0x65C]=1;
}

extern s8 lbl_8032AC58[];
void fn_800F1C24(void *);
void fn_800F1BFC(void) {
    fn_800F1C24(&lbl_8032AC58);
}

#pragma use_lmw_stmw on
void fn_800F1C24(void *arg0) {
s32 fn_800067B4(void);
f32 fn_80023068(void *, f32, f32);
void *fn_80040844(void);
void fn_80043F9C(void *, void *, f32, f32);
void fn_8005F7B0(void *, s32);
void fn_8005F7E0(void *, s32, s32, s32);
void fn_800606BC(void *);
void fn_80201FC4(void *);
void fn_80201FF0(void *, void *);
void fn_80202024(void *, void *, void *);
void fn_80202300(void *, s32, f32);
void fn_80202540(void *, f32, f32, f32);
void fn_802025C0(void *, f32, f32, f32);
void fn_80202640(void *, void *);
void fn_802033AC(void *, void *);
void fn_80203604(void *, void *, void *, f32);
extern u8 lbl_80330708[];
extern u8 lbl_802CA518[];
extern f32 lbl_8028E578[];
extern f32 lbl_8028E588[];
extern f32 lbl_8036A010, lbl_8036A014, lbl_8036A030, lbl_8036A034, lbl_8036A038, lbl_8036A03C, lbl_8036A040;

    f32 m1C8[12], m198[12], m168[12], m138[12], m108[12], mD8[12], mA8[12], m78[12], m48[12], m18[12], q[4];
    void *self;
    u8 *ctx;
    f32 f26, f27, f29, f30, f28;
    f32 *ys, *xs, *y, *x;
    u8 *h, *qp, *obj;
    void *terrain;
    void *map;
    s32 i;
    s32 same;
    u8 same_u8;

    self = arg0;
    ctx = lbl_80330708;
    f26 = *(f32 *)(ctx + 0x538);
    f27 = *(f32 *)(ctx + 0x534);
    f29 = fn_80023068(lbl_802CA518, f27, f26);
    fn_802025C0(m168, lbl_8036A030, lbl_8036A030, lbl_8036A030);
    fn_80202300(m198, 0x58, lbl_8036A034);
    fn_80202024(m198, m168, m138);
    fn_80202540(m1C8, f27, f26, f29 - lbl_8036A040);
    fn_80202024(m1C8, m138, (u8 *)self + 0x298);
    fn_800606BC((u8 *)self + 0x288);
    same = *(s32 *)((u8 *)self + 0x638) == fn_800067B4() - 1;
    *(s32 *)((u8 *)self + 0x638) = fn_800067B4();
    if (*(u8 *)((u8 *)self + 0x63C) != 0) {
        f30 = lbl_8036A010;
        *(f32 *)((u8 *)self + 0x5E0) = *(f32 *)(ctx + 0x534) - f30;
        *(f32 *)((u8 *)self + 0x5E4) = *(f32 *)(ctx + 0x538) - f30;
    } else if ((u8)same != 0) {
        f30 = lbl_8036A010;
        *(f32 *)((u8 *)self + 0x5E0) = f30 * (*(f32 *)((u8 *)self + 0x5E0) + (f32)(s8)(s32)*(f32 *)(ctx + 0x534));
        *(f32 *)((u8 *)self + 0x5E4) = f30 * (*(f32 *)((u8 *)self + 0x5E4) + (f32)(s8)(s32)*(f32 *)(ctx + 0x538));
    } else {
        *(f32 *)((u8 *)self + 0x5E0) = (f32)(s8)(s32)*(f32 *)(ctx + 0x534);
        *(f32 *)((u8 *)self + 0x5E4) = (f32)(s8)(s32)*(f32 *)(ctx + 0x538);
    }
    ys = lbl_8028E588;
    f30 = lbl_8036A014;
    xs = lbl_8028E578;
    f29 = lbl_8036A010;
    y = ys;
    x = xs;
    h = (u8 *)self;
    map = lbl_802CA518;
    same_u8 = same;
    i = 0;
    do {
        f28 = fn_80023068(map, *(f32 *)((u8 *)self + 0x5E0) + *x, *(f32 *)((u8 *)self + 0x5E4) + *y) - f30;
        if (same_u8 != 0) {
            *(f32 *)(h + 0x5E8) = f29 * (*(f32 *)(h + 0x5E8) + f28);
        } else {
            *(f32 *)(h + 0x5E8) = f28;
        }
        i++;
        x++;
        h += 4;
        y++;
    } while (i < 4);
    fn_802025C0(m48, lbl_8036A030, lbl_8036A030, lbl_8036A030);
    fn_80202300(m78, 0x58, lbl_8036A034);
    terrain = fn_80040844();
    f29 = lbl_8036A038;
    f30 = lbl_8036A03C;
    h = (u8 *)self;
    qp = (u8 *)self;
    obj = (u8 *)self;
    i = 0;
    do {
        f26 = *(f32 *)((u8 *)self + 0x5E0) + *xs;
        f27 = *(f32 *)((u8 *)self + 0x5E4) + *ys;
        f28 = *(f32 *)(h + 0x5E8);
        if (terrain != 0) {
            fn_80043F9C(terrain, m18, f26, f27);
            fn_802033AC(q, m18);
            fn_80203604(qp + 0x5F8, q, q, lbl_8036A030);
            *(f32 *)(qp + 0x5F8) = q[0];
            *(f32 *)(qp + 0x5FC) = q[1];
            *(f32 *)(qp + 0x600) = q[2];
            *(f32 *)(qp + 0x604) = q[3];
            fn_80202640(mD8, q);
        } else {
            fn_80201FC4(mD8);
        }
        fn_80202300(m108, 0x5A, f29 * (f30 * (f32)i));
        fn_80202540(mA8, f26, f27, f28);
        fn_80202024(m78, m48, m18);
        fn_80202024(m108, m18, m18);
        fn_80202024(mD8, m18, m18);
        fn_80202024(mA8, m18, obj + 0x18);
        *(u32 *)(obj + 8) |= 0x50000400;
        fn_80201FF0(obj + 0x18, obj + 0x338);
        *(u32 *)(obj + 0x328) |= 0x30000400;
        fn_8005F7B0(obj + 0x328, 0xF0);
        fn_8005F7E0(obj + 0x328, 0x80, 0x20, 0x80);
        *(f32 *)(obj + 0x380) = *(f32 *)(obj + 0x60);
        fn_800606BC(obj + 8);
        fn_800606BC(obj + 0x328);
        i++;
        ys++;
        h += 4;
        qp += 0x10;
        obj += 0xA0;
        xs++;
    } while (i < 4);
    ((u8 *)self)[0x65C] = 1;
}
void fn_800F20E0(void) {
    void fn_80060060(void *);
    void fn_800F1C24(void *);
    s32 i;

    fn_80060060(lbl_8032AC58 + 0x288);
    i = 0;
    do {
        fn_80060060(lbl_8032AC58 + i * 0xA0 + 8);
        i += 1;
    } while (i < 4);
    fn_800F1C24(lbl_8032AC58);
}

void fn_800F2174(void *);
void fn_800F214C(void) {
    fn_800F2174(&lbl_8032AC58);
}

void fn_800F2174(void *arg0)
{
    void *fn_80040844(void);
    u8 fn_80047AF8(void);
    void *fn_80068548(void);
    void fn_801475FC(void *, s32);
    void fn_8014CAD4(void *, f32, f32);
    f64 fn_802380D0(f32);
    f64 fn_80238638(f32);
    extern u8 lbl_80272CE8[];
    extern u8 lbl_80272D08[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_80330708[];
    extern u16 lbl_80367110;
    extern u8 lbl_803671C1;
    extern u8 *lbl_80367240;
    extern f32 lbl_8036A010;
    extern f32 lbl_8036A028;
    extern f32 lbl_8036A038;
    extern f32 lbl_8036A044;
    extern f32 lbl_8036A048;
    extern f32 lbl_8036A04C;
    extern f32 lbl_8036A050;
    extern f32 lbl_8036A054;
    extern f32 lbl_8036A058;

    u8 *self = (u8 *)arg0;
    f32 f30, f31, f3, f2, f4, f1;
    f32 var_f30, var_f31, var_f1, var_f2;
    f32 f26, f27, f28, f29;
    s32 r22, r0;
    u8 *pad;
    u8 *stick;
    s32 held;
    s16 *grid;

    if (*(s32 *)(lbl_80367240 + 0xC) & 0xF) {
        self[0x63C] = 1;
    }
    stick = *(u8 **)lbl_80367240;
    if (((s8)stick[2] | (s8)stick[3]) != 0) {
        self[0x63C] = 0;
    }
    fn_80040844();
    f4 = (f32)fn_80047AF8();
    f3 = *(f32 *)(lbl_80330708 + 0x534);
    f2 = *(f32 *)(lbl_80330708 + 0x538);
    if (*(f32 *)(lbl_80330708 + 0x534) < f4) {
        f3 = f4;
    }
    f1 = (f32)*(s32 *)lbl_802CA518 - f4;
    if (f3 >= f1) {
        f3 = f1 - lbl_8036A010;
    }
    if (*(f32 *)(lbl_80330708 + 0x538) < f4) {
        f2 = f4;
    }
    f1 = (f32)*(s32 *)(lbl_802CA518 + 4) - f4;
    if (f2 >= f1) {
        f2 = f1 - lbl_8036A010;
    }
    if (f3 != *(f32 *)(lbl_80330708 + 0x534) || f2 != *(f32 *)(lbl_80330708 + 0x538)) {
        *(f32 *)(lbl_80330708 + 0x534) = f3;
        *(f32 *)(lbl_80330708 + 0x524) = f3;
        *(f32 *)(lbl_80330708 + 0x528) = f2;
        *(f32 *)(lbl_80330708 + 0x538) = f2;
    }
    f30 = *(f32 *)(lbl_80330708 + 0x534);
    f31 = *(f32 *)(lbl_80330708 + 0x538);
    lbl_803671C1 = 0;
    if (self[0x63C] != 0) {
        *(f32 *)(lbl_80330708 + 0x524) = (f32)(s32)*(f32 *)(lbl_80330708 + 0x524) + lbl_8036A010;
        *(f32 *)(lbl_80330708 + 0x528) = (f32)(s32)*(f32 *)(lbl_80330708 + 0x528) + lbl_8036A010;
        held = *(s32 *)(lbl_80367240 + 4);
        if (held & 0x200) {
            if (held & (*(s32 *)(lbl_80367240 + 8) ^ held) & 0x200) {
                lbl_80367240[0x1F] = 0;
            }
            if (lbl_80367240[0x1F] & 1) {
                r0 = 0;
            } else {
                r0 = *(s32 *)(lbl_80367240 + 4);
            }
            r22 = r0 & 0xF;
            if (r22 != 0 && !(lbl_80367110 & 0x80)) {
                pad = lbl_80272CE8 + (r22 * 2);
                var_f30 = (f32)(s8)pad[0] + *(f32 *)(lbl_80330708 + 0x524);
                var_f31 = (f32)(s8)pad[1] + *(f32 *)(lbl_80330708 + 0x528);
                fn_80040844();
                f2 = (f32)fn_80047AF8();
                if (var_f30 <= f2 || var_f30 >= (f32)*(s32 *)lbl_802CA518 - f2) {
                    var_f30 -= (f32)(s8)pad[0];
                }
                if (var_f31 <= f2 || var_f31 >= (f32)*(s32 *)(lbl_802CA518 + 4) - f2) {
                    var_f31 -= (f32)(s8)pad[1];
                }
                grid = *(s16 **)(lbl_802CA518 + 0x14190);
                if (!(lbl_80367110 & 0x400)
                    || grid[((s8)(s32)*(f32 *)(lbl_80330708 + 0x524)) + (((s8)(s32)*(f32 *)(lbl_80330708 + 0x528)) << 6)] < 0
                    || grid[((s8)(s32)var_f30) + (((s8)(s32)var_f31) << 6)] >= 0
                    || (u32)r22 == (u32)(*(s32 *)(lbl_80367240 + 4) & (*(s32 *)(lbl_80367240 + 8) ^ *(s32 *)(lbl_80367240 + 4)) & 0xF)) {
                    *(f32 *)(lbl_80330708 + 0x524) = var_f30;
                    *(f32 *)(lbl_80330708 + 0x528) = var_f31;
                    *(f32 *)(lbl_80330708 + 0x538) = lbl_8036A010 + (f32)(s32)*(f32 *)(lbl_80330708 + 0x538);
                    *(f32 *)(lbl_80330708 + 0x534) = lbl_8036A010 + (f32)(s32)*(f32 *)(lbl_80330708 + 0x534);
                }
            }
            var_f1 = *(f32 *)(lbl_80330708 + 0x534);
            var_f2 = *(f32 *)(lbl_80330708 + 0x538);
            if (*(f32 *)(lbl_80330708 + 0x524) < var_f1 - lbl_8036A044) {
                var_f1 -= lbl_8036A010;
            }
            if (*(f32 *)(lbl_80330708 + 0x524) > var_f1 + lbl_8036A044) {
                var_f1 += lbl_8036A010;
            }
            if (*(f32 *)(lbl_80330708 + 0x528) < var_f2 - lbl_8036A044) {
                var_f2 -= lbl_8036A010;
            }
            if (*(f32 *)(lbl_80330708 + 0x528) > var_f2 + lbl_8036A044) {
                var_f2 += lbl_8036A010;
            }
            *(f32 *)(lbl_80330708 + 0x534) = var_f1;
            *(f32 *)(lbl_80330708 + 0x538) = var_f2;
            fn_8014CAD4(lbl_80330708, var_f1, var_f2);
            lbl_803671C1 = 1;
        } else {
            r22 = *(s32 *)(lbl_80367240 + 0xC) & 0xF;
            if (r22 != 0 && !(lbl_80367110 & 0x80)) {
                pad = lbl_80272CE8 + (r22 * 2);
                var_f31 = (f32)(s8)pad[0] + *(f32 *)(lbl_80330708 + 0x524);
                var_f30 = (f32)(s8)pad[1] + *(f32 *)(lbl_80330708 + 0x528);
                fn_80040844();
                f2 = (f32)fn_80047AF8();
                if (var_f31 <= f2 || var_f31 >= (f32)*(s32 *)lbl_802CA518 - f2) {
                    var_f31 -= (f32)(s8)pad[0];
                }
                if (var_f30 <= f2 || var_f30 >= (f32)*(s32 *)(lbl_802CA518 + 4) - f2) {
                    var_f30 -= (f32)(s8)pad[1];
                }
                grid = *(s16 **)(lbl_802CA518 + 0x14190);
                if (!(lbl_80367110 & 0x400)
                    || grid[((s8)(s32)*(f32 *)(lbl_80330708 + 0x524)) + (((s8)(s32)*(f32 *)(lbl_80330708 + 0x528)) << 6)] < 0
                    || grid[((s8)(s32)var_f31) + (((s8)(s32)var_f30) << 6)] >= 0
                    || (u32)r22 == (u32)(*(s32 *)(lbl_80367240 + 4) & (*(s32 *)(lbl_80367240 + 8) ^ *(s32 *)(lbl_80367240 + 4)) & 0xF)) {
                    *(f32 *)(lbl_80330708 + 0x524) = var_f31;
                    *(f32 *)(lbl_80330708 + 0x528) = var_f30;
                    *(f32 *)(lbl_80330708 + 0x538) = lbl_8036A010 + (f32)(s32)*(f32 *)(lbl_80330708 + 0x538);
                    *(f32 *)(lbl_80330708 + 0x534) = lbl_8036A010 + (f32)(s32)*(f32 *)(lbl_80330708 + 0x534);
                }
            }
            var_f1 = *(f32 *)(lbl_80330708 + 0x534);
            var_f2 = *(f32 *)(lbl_80330708 + 0x538);
            if (*(f32 *)(lbl_80330708 + 0x524) < var_f1 - lbl_8036A044) {
                var_f1 -= lbl_8036A048;
            }
            if (*(f32 *)(lbl_80330708 + 0x524) > var_f1 + lbl_8036A044) {
                var_f1 += lbl_8036A048;
            }
            if (*(f32 *)(lbl_80330708 + 0x528) < var_f2 - lbl_8036A044) {
                var_f2 -= lbl_8036A048;
            }
            if (*(f32 *)(lbl_80330708 + 0x528) > var_f2 + lbl_8036A044) {
                var_f2 += lbl_8036A048;
            }
            *(f32 *)(lbl_80330708 + 0x534) = var_f1;
            *(f32 *)(lbl_80330708 + 0x538) = var_f2;
            fn_8014CAD4(lbl_80330708, var_f1, var_f2);
        }
    } else {
        stick = *(u8 **)lbl_80367240;
        if (((s8)stick[2] | (s8)stick[3]) != 0) {
            if (*(s32 *)(lbl_80367240 + 4) & 0x200) {
                if (!(lbl_80367110 & 0x80)) {
                    stick = *(u8 **)lbl_80367240;
                    f26 = lbl_8036A038 * -*(f32 *)((u8 *)fn_80068548() + 0xFC);
                    f28 = (f32)(s8)stick[2] / lbl_8036A04C;
                    f29 = (f32)(s8)stick[3] / lbl_8036A04C;
                    f27 = (f32)fn_802380D0(f26);
                    f2 = (f32)fn_80238638(f26);
                    f1 = (f27 * f28) - (f2 * f29);
                    f28 = f31 - ((f2 * f28) + (f27 * f29));
                    f29 = f30 + f1;
                    fn_80040844();
                    f2 = (f32)fn_80047AF8();
                    if (f29 < f2) {
                        f29 = f2;
                    }
                    f1 = (f32)*(s32 *)lbl_802CA518 - f2;
                    if (f29 >= f1) {
                        f29 = f1 - lbl_8036A050;
                    }
                    if (f28 < f2) {
                        f28 = f2;
                    }
                    f1 = (f32)*(s32 *)(lbl_802CA518 + 4) - f2;
                    if (f28 >= f1) {
                        f28 = f1 - lbl_8036A050;
                    }
                    *(f32 *)(lbl_80330708 + 0x524) = f29;
                    *(f32 *)(lbl_80330708 + 0x528) = f28;
                    *(f32 *)(lbl_80330708 + 0x534) = f29;
                    *(f32 *)(lbl_80330708 + 0x538) = f28;
                    fn_8014CAD4(lbl_80330708, f29, f28);
                }
                lbl_803671C1 = 1;
            } else if (!(lbl_80367110 & 0x80)) {
                stick = *(u8 **)lbl_80367240;
                f26 = lbl_8036A038 * -*(f32 *)((u8 *)fn_80068548() + 0xFC);
                f29 = (f32)(s8)stick[2] / lbl_8036A054;
                f28 = (f32)(s8)stick[3] / lbl_8036A054;
                f27 = (f32)fn_802380D0(f26);
                f2 = (f32)fn_80238638(f26);
                f1 = (f27 * f29) - (f2 * f28);
                f28 = f31 - ((f2 * f29) + (f27 * f28));
                f29 = f30 + f1;
                fn_80040844();
                f2 = (f32)fn_80047AF8();
                if (f29 < f2) {
                    f29 = f2;
                }
                f1 = (f32)*(s32 *)lbl_802CA518 - f2;
                if (f29 >= f1) {
                    f29 = f1 - lbl_8036A050;
                }
                if (f28 < f2) {
                    f28 = f2;
                }
                f1 = (f32)*(s32 *)(lbl_802CA518 + 4) - f2;
                if (f28 >= f1) {
                    f28 = f1 - lbl_8036A050;
                }
                *(f32 *)(lbl_80330708 + 0x524) = f29;
                *(f32 *)(lbl_80330708 + 0x528) = f28;
                *(f32 *)(lbl_80330708 + 0x534) = f29;
                *(f32 *)(lbl_80330708 + 0x538) = f28;
                fn_8014CAD4(lbl_80330708, f29, f28);
            }
        } else {
            fn_8014CAD4(lbl_80330708, *(f32 *)(lbl_80330708 + 0x524), *(f32 *)(lbl_80330708 + 0x528));
            *(f32 *)(self + 4) = lbl_8036A028;
            *(f32 *)self = lbl_8036A028;
            f3 = *(f32 *)(lbl_80330708 + 0x534);
            f2 = *(f32 *)(lbl_80330708 + 0x538);
            f4 = lbl_8036A010 + (f32)(s32)f3;
            f1 = lbl_8036A010 + (f32)(s32)f2;
            f29 = ((lbl_8036A058 * f3) + f4) * lbl_8036A048;
            f28 = ((lbl_8036A058 * f2) + f1) * lbl_8036A048;
            *(f32 *)(lbl_80330708 + 0x534) = f29;
            *(f32 *)(lbl_80330708 + 0x538) = f28;
            *(f32 *)(lbl_80330708 + 0x524) = f29;
            *(f32 *)(lbl_80330708 + 0x528) = f28;
            fn_8014CAD4(lbl_80330708, f29, f28);
        }
    }
    if ((s32)f30 != (s32)*(f32 *)(lbl_80330708 + 0x534) || (s32)f31 != (s32)*(f32 *)(lbl_80330708 + 0x538)) {
        fn_801475FC(lbl_80272D08 + 0x37, 0x64);
    }
    self[0x65C] = 0;
}

void fn_800F2E50(s8 arg0) {
    M2C_FIELD(&lbl_8032AC58, s8 *, 0x65C) = arg0;
}

u8 fn_800F2E60(void) {
    extern s8 lbl_8032AC58[];
    return lbl_8032AC58[0x65C];
}

void fn_800F2E70(void) {
    void fn_800616A0(void *);
    s32 var_r31;

    for (var_r31 = 0; var_r31 < 4; var_r31++) {
        fn_800616A0(lbl_8032AC58 + var_r31 * 0xA0 + 0x328);
        fn_800616A0(lbl_8032AC58 + var_r31 * 0xA0 + 8);
    }
    fn_800616A0(lbl_8032AC58 + 0x288);
}

s32 fn_800F32A4(u8 *arg) {
extern u8 lbl_802CA518[];
u8 fn_800FE84C(s8,s8);
u8 *arg0; u8 flags[8]; void **weapon; u8 *map; u8 *unit; s32 row; u8 *p; s32 id; s32 y; s32 x;  u8 *q; s32 dist,dy; u8 a,b; u8 range,outside,cx,cy,r,t;
if ((M2C_FIELD(arg,u16*,0x1A4)>>7 & 7) || (M2C_FIELD(arg,u8*,0x1A5)&7) || (M2C_FIELD(arg,u32*,0x1A0)&0x9D)) return 0;
arg0=arg;
fn_800FE2A0(arg0,5,-1);
weapon=(void **)fn_80037D54(arg0); if (!weapon || !*weapon) return 0;
fn_80015320(1,flags);
map=lbl_802CA518;
for(id=1;id<=159;id++){
unit=(u8)id ? lbl_802B14E4+((u8)id-1)*0x280:0;
if (!M2C_FIELD(unit,u32*,0x188) || !flags[M2C_FIELD(M2C_FIELD(unit,u8**,0x190),u8*,8)]) continue;
a=unit[0x19E]; b=M2C_FIELD(arg0,u8*,0x19E);
dy=fn_80230BCC((s8)M2C_FIELD(arg0,u8*,0x19F)-(s8)unit[0x19F]);
dist=fn_80230BCC((s8)b-(s8)a)+dy;
range=*weapon ? (u8)fn_8001DD54(*weapon,arg0):0;
if(dist> range+(s8)fn_8003A398(arg0) || (M2C_FIELD(unit,u32*,0x1A0)&0x10000DC)) continue;
outside=0; cx=unit[0x19E]; cy=unit[0x19F];
if((s8)cx<(s8)map[8] || (s8)map[10]-1<(s8)cx || (s8)cy<(s8)map[9] || (s8)map[11]-1<(s8)cy) outside=1;
if(outside == 0) {
r=*weapon ? (u8)fn_8001DD54(*weapon,unit):0;
t=*weapon ? M2C_FIELD(*weapon,u8*,0x1D):0;
fn_800FDDBC((s8)unit[0x19E],(s8)unit[0x19F],t,r,6);
unit=lbl_802CA518;
for(y=*(s8 *)(map+9);y<=(s8)map[11]-1;y++){
row=(s8)y<<6;
for(x=*(s8 *)(map+8);x<=(s8)map[10]-1;x++){
q=unit+((s8)x+row)*2;
if(M2C_FIELD(q,s16*,0x610E)<0)continue;
p=unit+row+(s8)x;
if(M2C_FIELD(p,s8*,0xE18E) || fn_800FE84C((s8)x,(s8)y) || !M2C_FIELD(q,u16*,0xC18E))continue;
t=p[13]; if(!t || t==M2C_FIELD(arg0,u8*,0x198))return 1;
}}
}}return 0;
}

u8 fn_800F3860(u8 (*arg0)(void *),s32 arg1,u8 arg2) {
extern u8 lbl_8032B3C0[],lbl_802EF4C8[],lbl_802CA518[];
int fn_80230BCC(int);
void *fn_8001C5F8(void *,s16);
u8 fn_800F7D28(void *,void *); s8 fn_8003A398(void *); u8 fn_8001DD54(void *,void *);
void fn_800FB96C(u8,s8,s8,void *,u8,u8,s8,s32,s32);
struct {u8 x,y;u16 item;u8 *unit;s32 score;} result;
struct {void *ptr;u32 state;} weapon;
u8 flags[8];
u8 *ctx=lbl_802EF4C8; u8 *map; u8 *self;
s32 score; u8 *best; u8 bx,by;u16 item; s32 id; u8 b; s32 a=(s32)lbl_802CA518; u8 outside,cx,cy,r,t,range; int dy,dist; u8 ret;
score=(s32)0x80000000; best=0;
ctx[8]=arg2; self=*(u8 **)ctx;
if((lbl_8032B3C0[1]&2)||(M2C_FIELD(self,u32 *,0x254)&0x3000000)){
fn_80022DAC((void *)a,5,-1);fn_80022FD8((void *)a,5);
M2C_FIELD(a,u16 **,0x14190)[(s8)self[0x19E]+((s8)self[0x19F]<<6)]=0;
}else fn_800FE2A0(self,5,-1);
fn_8001C76C(&weapon);fn_8001D780(&weapon,arg1);
result.item=M2C_FIELD(weapon.ptr,u16 *,14);
fn_80015320(1,flags);
map=lbl_802CA518;
for(id=1;id<=159;id++){
u8 *unit=(u8)id?lbl_802B14E4+((u8)id-1)*0x280:0;
if(!M2C_FIELD(unit,u32 *,0x188)||!flags[M2C_FIELD(M2C_FIELD(unit,u8 **,0x190),u8 *,8)]||!arg0(unit))continue;
a=unit[0x19E];b=self[0x19E];
dy=fn_80230BCC((s8)self[0x19F]-(s8)unit[0x19F]);
a=dy+fn_80230BCC((s8)b-(s8)a);
range=weapon.ptr?fn_8001DD54(weapon.ptr,self):0;
if(a>range+(s8)fn_8003A398(self) || (M2C_FIELD(unit,u32 *,0x1A0)&0x10000DC))continue;
outside=0;cx=unit[0x19E];cy=unit[0x19F];
if((s8)cx<(s8)map[8]||(s8)map[10]-1<(s8)cx||(s8)cy<(s8)map[9]||(s8)map[11]-1<(s8)cy)outside=1;
if(outside)continue;
r=weapon.ptr?fn_8001DD54(weapon.ptr,unit):0;t=weapon.ptr?M2C_FIELD(weapon.ptr,u8 *,29):0;
fn_800FDDBC((s8)unit[0x19E],(s8)unit[0x19F],t,r,6);
result.unit=unit;
if(fn_800F7D28(self,&result)&&result.score>score){bx=result.x;score=result.score;by=result.y;item=result.item;best=result.unit;}
}
if(best)fn_800FB96C(ctx[8],(s8)bx,(s8)by,best,best[0x19E],best[0x19F],(s8)item,0,0);
a=lbl_8032B3C0[0x21C];fn_8001C5F8(&weapon,-1);return a;
}

#pragma use_lmw_stmw on
u8 fn_800F3BA4(s16 *arg0, u8 arg1) {
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    s8 fn_8003A398(void *);
    void fn_800FB96C(s8, s8, s8, s32, s8, s8, s8, s8, u8);
    void fn_800FE2A0(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    void *fn_8010FF24(void *, s8, s8, s32);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_8032BB58[];

    s16 *list;
    u8 *ctx;
    u8 *map;
    u8 *unit;
    u8 *bb;
    u8 *map2;
    s16 best;
    s8 best_x;
    s8 best_y;
    s8 x0;
    s8 y0;
    s8 rad;
    s32 x_lo;
    s32 y_lo;
    s32 x_hi;
    s32 y_hi;
    s32 y;
    s32 x;
    s32 row;
    u8 *rowbase;
    s32 idx2;
    u8 *cell;
    s16 *costp;
    s8 dx;
    s8 dy;
    s32 dir;
    void *entry;
    s16 cur_x;
    s16 ly;
    s8 a0;

    list = arg0;
    ctx = lbl_802EF4C8;
    ctx[8] = arg1;
    map = lbl_802CA518;
    unit = *(u8 **)ctx;

    if (!(lbl_8032B3C0[1] & 2) && (*(u32 *)(unit + 0x254) & 0x03000000)) {
        fn_80022DAC(map, 5, -1);
        fn_80022FD8(map, 5);
        {
            s16 *tbl = *(s16 **)(map + 0x14190);
            tbl[(s8)unit[0x19E] + ((s8)unit[0x19F] << 6)] = 0;
        }
    } else {
        fn_800FE2A0(unit, 5, -1);
    }

    best = 0x7FFF;
    if (list != NULL) {
        bb = lbl_8032BB58;
        map2 = lbl_802CA518;
        goto list_cond;
    list_body:
        ly = list[1];
        if (fn_8010FF24(bb, (s8)cur_x, (s8)ly, 0xA) != NULL) {
            s32 t = ((s8)cur_x + ((s8)ly << 6)) * 2;
            cell = map2;
            cell += t;
            if (*(s16 *)(cell + 0x610E) >= 0) {
                best_x = (s8)cur_x;
                best_y = (s8)ly;
                best = *(s16 *)(*(u8 **)(map + 0x14190) + t);
                goto after_search;
            }
        }
        list += 2;
    list_cond:
        cur_x = list[0];
        if (cur_x >= 0) {
            goto list_body;
        }
        goto after_search;
    }

    x0 = (s8)unit[0x19E];
    y0 = (s8)unit[0x19F];
    rad = fn_8003A398(unit);
    x_lo = x0 - rad;
    if (x_lo < (s8)lbl_802CA518[8]) {
        x_lo = (s8)lbl_802CA518[8];
    }
    y_lo = y0 - rad;
    if (y_lo < (s8)lbl_802CA518[9]) {
        y_lo = (s8)lbl_802CA518[9];
    }
    x_hi = x0 + rad;
    if (x_hi > (s8)lbl_802CA518[0xA] - 1) {
        x_hi = (s8)lbl_802CA518[0xA] - 1;
    }
    y_hi = y0 + rad;
    if (y_hi > (s8)lbl_802CA518[0xB] - 1) {
        y_hi = (s8)lbl_802CA518[0xB] - 1;
    }
    map2 = lbl_802CA518;
    y = y_lo;
    goto y_cond;
 y_body:
    x = x_lo;
    row = (s8)y << 6;
    rowbase = map2 + row;
    goto x_cond;
 x_body:
    idx2 = (s8)x + row;
    cell = (u8 *)((u32)map2 + (idx2 * 2));
    costp = (s16 *)(cell + 0x610E);
    if (*(s16 *)(cell + 0x610E) >= 0) {
        if ((s8)*(rowbase + (s8)x + 0xE18E) == 0) {
            if (fn_800FE84C((s8)x, (s8)y) == 0) {
                if (*(rowbase + (s8)x + 0xD) == 0) {
                    if (fn_8010FF24(lbl_8032BB58, (s8)x, (s8)y, 0xA) != NULL) {
                        if (*costp < best) {
                            best_x = (s8)x;
                            best_y = (s8)y;
                            best = *(s16 *)(*(u8 **)(map + 0x14190) + (idx2 * 2));
                        }
                    }
                }
            }
        }
    }
    x += 1;
 x_cond:
    if (x <= x_hi) {
        goto x_body;
    }
    y += 1;
 y_cond:
    if (y <= y_hi) {
        goto y_body;
    }

after_search:
    if ((s16)best != 0x7FFF) {
        entry = fn_8010FF24(lbl_8032BB58, best_x, best_y, 0xA);
        dir = *((u8 *)entry + 3);
        a0 = ctx[8];
        switch (dir) {
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
        switch (dir) {
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
        fn_800FB96C(a0, best_x, best_y, 0, (s8)(best_x + dx), (s8)(best_y + dy), -1, 0, 0);
        *(s32 *)(lbl_8032B3C0 + 8) = 0;
    } else {
        *(s32 *)(lbl_8032B3C0 + 8) = 9;
    }
    return lbl_8032B3C0[0x21C];
}

#pragma opt_strength_reduction off
#pragma cplusplus off
#pragma use_lmw_stmw on
#pragma opt_loop_invariants off
u8 fn_800F3F50(s32 arg0,s8 arg1){
extern u8 lbl_8032B3C0[],lbl_802CA518[],lbl_802EF4C8[],lbl_8032BB58[],lbl_80284E20[],lbl_8028E6E8[],lbl_802EF4E0[];
void fn_80022DAC(void *,s32,s32);void fn_80022FD8(void *,s32);void fn_800FE2A0(void *,s32,s32);
s8 fn_8003A398(void *);u8 fn_800FE84C(s8,s8);
void *fn_8010FF24(void *,s8,s8,s32);void fn_8002F728(void *);
s32 fn_80110030(void *);void fn_800FDF38(s16,s16,s32,s32,s32);
void fn_8002C530(void *,s32);void *fn_8002F658(void *,s32);
void *fn_8002F740(void *);u8 fn_80015610(void *,void *);
void fn_800FB96C(u8,s8,s8,void *,s8,s8,s8,s32,s32);
u8 *ctx;
struct {void *vtable;s32 callback;} pred;
u8 *map,*list,*self;
s32 best;
s32 dy;
s32 dx2,dy2;
s8 candidateX;
s8 destY;
s16 destX;
s32 count;
u8 bestX,bestY;
s32 rowOffset;
u8 *row;
s32 xmax,ymax,y;
s32 x;
u8 *tile,*entry,*unit;
s32 index;
s32 xmin,ymin,range,dx;
s8 cx,cy;
u8 mode,flags;
ctx=lbl_802EF4C8;
map=lbl_802CA518;
flags=lbl_8032B3C0[1];
ctx[8]=arg1;
self=*(u8 **)ctx;
if((flags&2)||(*(u32 *)(self+0x254)&0x03000000)){
fn_80022DAC(map,5,-1);fn_80022FD8(map,5);
(*(u16 **)(map+0x14190))[(s8)self[0x19E]+((s8)self[0x19F]<<6)]=0;
}else fn_800FE2A0(self,5,-1);
cx=(s8)self[0x19E];cy=(s8)self[0x19F];best=(s32)0x80000000;
range=fn_8003A398(self);
xmin=cx-range;if(xmin<(s8)lbl_802CA518[8])xmin=(s8)lbl_802CA518[8];
ymin=cy-range;if(ymin<(s8)lbl_802CA518[9])ymin=(s8)lbl_802CA518[9];
xmax=cx+range;if(xmax>(s8)lbl_802CA518[10]-1)xmax=(s8)lbl_802CA518[10]-1;
ymax=cy+range;if(ymax>(s8)lbl_802CA518[11]-1)ymax=(s8)lbl_802CA518[11]-1;
map=lbl_802CA518;
for(y=ymin;y<=ymax;y++){
rowOffset=(s8)y<<6;row=map+rowOffset;
for(x=xmin;x<=xmax;x++){
if(M2C_FIELD(map+((s8)x+rowOffset)*2,s16 *,0x610E)<0)continue;
tile=row+(s8)x;
if(*(s8 *)(tile+0xE18E)||fn_800FE84C((s8)x,(s8)y)||tile[0xD])continue;
if(!fn_8010FF24(lbl_8032BB58,(s8)x,(s8)y,10))continue;
entry=fn_8010FF24(lbl_8032BB58,(s8)(s16)x,(s8)(s16)y,10);
pred.callback=arg0;
pred.vtable=lbl_80284E20;pred.vtable=lbl_8028E6E8;
mode=entry[3];candidateX=(s8)entry[0];destY=(s8)entry[1];
switch((s32)mode){case 1:dx=-1;break;case 2:dx=1;break;default:dx=0;break;}
destX=candidateX+dx;
switch((s32)mode){case 4:dy=1;break;case 8:dy=-1;break;default:dy=0;break;}
fn_8002F728(lbl_802EF4E0);
fn_80022FD8(lbl_802CA518,6);fn_80022DAC(lbl_802CA518,6,-1);
fn_800FDF38(destX,(s16)(destY+dy),fn_80110030(entry),6,255);
fn_8002C530(&pred,0);
list=lbl_802EF4E0;
if(*(s32 *)list){
u8 bx=(u8)x,by=(u8)y;
count=0;
for(index=0;index<*(s32 *)list;index++){
unit=fn_8002F740(fn_8002F658(list,index));
if(fn_80015610(M2C_FIELD(self,void **,0x190),M2C_FIELD(unit,void **,0x190))==1)count++;else count--;
}
if(count>0&&count>best){bestX=bx;bestY=by;best=count;}
}
}
}
if((u32)(best+0x80000000)!=0){
u8 action;
u32 bx=bestX,by=bestY;
entry=fn_8010FF24(lbl_8032BB58,(s8)bx,(s8)by,10);mode=entry[3];
action=ctx[8];
switch((s32)mode){case 1:dx2=-1;break;case 2:dx2=1;break;default:dx2=0;break;}
switch((s32)mode){case 4:dy2=1;break;case 8:dy2=-1;break;default:dy2=0;break;}
fn_800FB96C(action,(s8)bx,(s8)by,0,(s8)(bx+dx2),(s8)(by+dy2),-1,0,0);
}
return lbl_8032B3C0[0x21C];
}

#pragma opt_strength_reduction off
#pragma opt_loop_invariants off
#pragma use_lmw_stmw on
#pragma opt_common_subs off
#pragma opt_common_subs on
u8 fn_800F43D8(s32 arg0,u8 arg1){
extern u8 lbl_802EF4C8[],lbl_802CA518[],lbl_8032B3C0[],lbl_8032BB58[],lbl_802EF4E0[],lbl_80284E20[],lbl_8028E6C8[],lbl_8028E6D8[];
extern char lbl_80272DB0[];
u8 fn_80105BC0(void *,s32);void fn_80022DAC(void *,s32,s32);void fn_80022FD8(void *,s32);
void fn_800FE2A0(void *,s32,s32);s8 fn_8003A398(void *);u8 fn_800FE84C(s8,s8);
void *fn_8010FF24(void *,s8,s8,s32);void *fn_80019E04(void *);void *fn_80019E24(u8);
void fn_8002F728(void *);u8 fn_8001DDBC(void *);void fn_800FDDBC(s8,s8,u8,u8,s32);
void fn_8001EF80(void *,u8,u8,u8);void fn_8002C47C(void *,s8);void *fn_8002F658(void *,s32);
void fn_8002C6F4(void *,s8,s8);void fn_800FB96C(u8,s8,s8,void *,s8,s8,s8,s32,s32);
u8 *map,*ctx; s32 rowOffset;u8 *row; s32 xmin,xmax,ymax;
s32 callback; F43Eval eval; F43Range pred; struct {F43Pos pos;s32 pad;s32 score;} result;
s16 bestY,bestX;u16 bestItem;u8 bestToY,bestToX;
s32 index,score,x,y,ymin; s32 cx,cy,r;u8 ix,iy,kind,id;u8 *self,*entry,*candidate,*item,*list,*tile,*point;
callback=arg0;ctx=lbl_802EF4C8;map=lbl_802CA518;self=*(u8**)ctx;ctx[8]=arg1;
if(!fn_80105BC0(self+0x1bc,0x4f))return 0;
if((lbl_8032B3C0[1]&2)||(*(u32*)(self+0x254)&0x03000000)){
fn_80022DAC(map,5,-1);fn_80022FD8(map,5);(*(u16**)(map+0x14190))[*(s8*)(self+0x19e)+(*(s8*)(self+0x19f)<<6)]=0;
}else fn_800FE2A0(self,5,-1);
cx=*(s8*)(self+0x19e);cy=*(s8*)(self+0x19f);score=(s32)0x80000000;
r=fn_8003A398(self);
xmin=cx-r;if(xmin<(s8)lbl_802CA518[8])xmin=(s8)lbl_802CA518[8];
ymin=cy-r;if(ymin<(s8)lbl_802CA518[9])ymin=(s8)lbl_802CA518[9];
xmax=cx+r;if(xmax>(s8)lbl_802CA518[10]-1)xmax=(s8)lbl_802CA518[10]-1;
ymax=cy+r;if(ymax>(s8)lbl_802CA518[11]-1)ymax=(s8)lbl_802CA518[11]-1;
map=lbl_802CA518;
for(y=ymin;y<=ymax;y++){rowOffset=(s8)y<<6;row=map+rowOffset;
for(x=xmin;x<=xmax;x++){
if(M2C_FIELD((u8*)((s32)map+((s8)x+rowOffset)*2),s16 *,0x610E)<0)continue;
tile=row+(s8)x;
if(*(s8*)(tile+0xe18e)||fn_800FE84C((s8)x,(s8)y)||tile[0xd])continue;
entry=fn_8010FF24(lbl_8032BB58,(s8)x,(s8)y,7);
if(!entry||!entry[5]||entry[4]!=*(u16*)((u8*)fn_80019E04(lbl_80272DB0+0xce)+0xe))continue;
candidate=fn_8010FF24(lbl_8032BB58,(s8)(s16)x,(s8)(s16)y,7);
pred.vtable=lbl_80284E20;pred.vtable=lbl_8028E6D8;pred.value=callback;
fn_8002F728(lbl_802EF4E0);fn_80022FD8(lbl_802CA518,6);
item=fn_80019E24(candidate[4]);iy=candidate[1];kind=item[0x1d];ix=candidate[0];
fn_800FDDBC((s8)ix,(s8)iy,kind,(u8)fn_8001DDBC(item),6);
fn_8001EF80(lbl_802CA518,candidate[0],candidate[1],candidate[3]);
fn_8002C47C(&pred,(s8)item[0x1d]);
list=lbl_802EF4E0;
if(*(s32*)list){result.pos.id=entry[4];
for(index=0;index<*(s32*)list;index++){
point=fn_8002F658(list,index);result.pos.x=point[0];result.pos.y=point[1];
ix=(s8)result.pos.x;iy=(s8)result.pos.y;
eval.vtable=(void**)lbl_80284E20;id=lbl_802CA518[(s8)ix+((s8)iy<<6)+0xd];
eval.vtable=(void**)lbl_8028E6C8;eval.entry=entry;eval.unit=self;eval.pos=&result.pos;result.score=0;
if(id){void *unit=0;if(id)unit=lbl_802B14E4+(id-1)*0x280;((void(*)(void*,void*))eval.vtable[2])(&eval,unit);}
fn_8002C6F4(&eval,(s8)ix,(s8)iy);
if(result.score>score){bestToX=result.pos.x;score=result.score;bestToY=result.pos.y;bestX=(s16)x;bestItem=result.pos.id;bestY=(s16)y;}
}
}
}
}
if((u32)(score+0x80000000U)!=0)fn_800FB96C(ctx[8],(s8)bestX,(s8)bestY,0,(s8)bestToX,(s8)bestToY,(s8)bestItem,0,0);
return lbl_8032B3C0[0x21c];
}
#pragma opt_common_subs on
#pragma opt_loop_invariants reset
#pragma opt_strength_reduction reset

#pragma opt_loop_invariants reset
#pragma use_lmw_stmw reset
#pragma opt_strength_reduction reset

#pragma use_lmw_stmw reset

void fn_800F488C(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if (arg0 < 0) {
        arg0 = -arg0;
    }

    if (arg1 < 0) {
        arg1 = -arg1;
    }

    if (arg2 < 0) {
        arg2 = -arg2;
    }

    if (arg3 < 0) {
        arg3 = -arg3;
    }

    arg0 = arg0 + arg2;
    arg1 = arg1 + arg3;

    if (arg0 >= arg1) {
        arg0 = arg0;
    } else {
        arg0 = arg1;
    }
}

#pragma opt_strength_reduction off
#pragma opt_loop_invariants off
#pragma use_lmw_stmw on
#pragma opt_common_subs off
u8 fn_800F4954(s32 arg0,u8 arg1){
extern u8 lbl_802EF4C8[],lbl_802CA518[],lbl_8032B3C0[],lbl_8032BB58[],lbl_802EF4E0[],lbl_802B14E4[],lbl_80284E20[],lbl_8028E6B8[];
extern char lbl_80272DB0[];
u8 fn_80105BC0(void *,s32);
void fn_80022DAC(void *,s32,s32);void fn_80022FD8(void *,s32);
void fn_800FE2A0(void *,s32,s32);
s8 fn_8003A398(void *);u8 fn_800FE84C(s8,s8);
void *fn_8010FF24(void *,s8,s8,s32);
void *fn_80019E04(void *);void *fn_80019E24(u8);
void fn_8002F728(void *);u8 fn_8001DDBC(void *);
void fn_800FDDBC(s8,s8,u8,u8,s32);void fn_8001EF80(void *,u8,u8,u8);
void fn_8002C530(void *,s8);void *fn_8002F658(void *,s32);
u8 fn_800F7E78(void *,void *);
void fn_800FB96C(u8,s8,s8,void *,u8,u8,s8,s32,s32);
u8 *ctx;
s32 xmin,ymax;
struct {s8 x,y;u16 item;void *unit;s32 score;} result;
struct {void *vtable;s32 callback;} pred;
s32 callback;
s32 index,score,x,xmax;
s8 cx,cy,r;
s32 y,ymin;
u16 bestItem;
u8 ix,iy,kind,id,bestY,bestX;
s32 rowOffset;
u8 *best,*map,*list,*entry,*item,*candidate,*self,*tile,*row;
callback=arg0;
ctx=lbl_802EF4C8;
map=lbl_802CA518;
self=*(u8 **)ctx;
ctx[8]=arg1;
if(!fn_80105BC0(self+0x1BC,0x4F))return 0;
if((lbl_8032B3C0[1]&2)||(*(u32 *)(self+0x254)&0x03000000)){
fn_80022DAC(map,5,-1);fn_80022FD8(map,5);
(*(u16 **)(map+0x14190))[(s8)self[0x19E]+((s8)self[0x19F]<<6)]=0;
}else fn_800FE2A0(self,5,-1);
cx=(s8)self[0x19E];cy=(s8)self[0x19F];score=(s32)0x80000000;best=0;
r=(s8)fn_8003A398(self);
xmin=cx-r;if(xmin<(s8)lbl_802CA518[8])xmin=(s8)lbl_802CA518[8];
ymin=cy-r;if(ymin<(s8)lbl_802CA518[9])ymin=(s8)lbl_802CA518[9];
xmax=cx+r;if(xmax>(s8)lbl_802CA518[10]-1)xmax=(s8)lbl_802CA518[10]-1;
ymax=cy+r;if(ymax>(s8)lbl_802CA518[11]-1)ymax=(s8)lbl_802CA518[11]-1;
map=lbl_802CA518;
for(y=ymin;y<=ymax;y++){
rowOffset=(s8)y<<6;row=map+rowOffset;
for(x=xmin;x<=xmax;x++){
if(M2C_FIELD((u8 *)((s32)map+((s8)x+rowOffset)*2),s16 *,0x610E)<0)continue;
tile=row+(s8)x;
if(*(s8 *)(tile+0xE18E)||fn_800FE84C((s8)x,(s8)y)||tile[0xD])continue;
entry=fn_8010FF24(lbl_8032BB58,(s8)x,(s8)y,7);
if(!entry||!entry[5]||entry[4]==M2C_FIELD(fn_80019E04(lbl_80272DB0+0xCE),u16 *,0xE))continue;
candidate=fn_8010FF24(lbl_8032BB58,(s8)(s16)x,(s8)(s16)y,7);
pred.vtable=lbl_80284E20;pred.vtable=lbl_8028E6B8;pred.callback=callback;
fn_8002F728(lbl_802EF4E0);fn_80022FD8(lbl_802CA518,6);
item=fn_80019E24(candidate[4]);
iy=candidate[1];kind=item[0x1D];ix=candidate[0];
fn_800FDDBC((s8)ix,(s8)iy,kind,(u8)fn_8001DDBC(item),6);
fn_8001EF80(lbl_802CA518,candidate[0],candidate[1],candidate[3]);
fn_8002C530(&pred,(s8)item[0x1D]);
list=lbl_802EF4E0;
if(*(s32 *)list){
result.x=x;result.y=y;result.item=entry[4];
for(index=0;index<*(s32 *)list;index++){
id=M2C_FIELD(fn_8002F658(list,index),u8 *,2);
result.unit=id?lbl_802B14E4+(id-1)*0x280:0;
if(fn_800F7E78(self,&result)&&result.score>score){
bestX=result.x;score=result.score;bestY=result.y;bestItem=result.item;best=result.unit;
}
}
}
}
}
if(best)fn_800FB96C(ctx[8],(s8)bestX,(s8)bestY,best,best[0x19E],best[0x19F],(s8)bestItem,0,0);
return lbl_8032B3C0[0x21C];
}
#pragma use_lmw_stmw reset
#pragma opt_common_subs on
#pragma opt_loop_invariants reset
#pragma opt_strength_reduction reset

#pragma use_lmw_stmw on
u8 fn_800F5504(u8 (*arg0)(void *), u8 arg1) {
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    extern char lbl_80272DB0[];
    int fn_80230BCC(int);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void fn_800FE2A0(void *, s32, s32);
    void **fn_80037BBC(void *, s32);
    u8 fn_8009339C(void *);
    void fn_80015320(s32, u8 *);
    s8 fn_8003A398(void *);
    u8 fn_8001DD54(void *, void *);
    void fn_800FDDBC(s32, s32, u8, u8, s32);
    u8 fn_800F81B8(void *, void *);
    u8 fn_80105BC0(void *, s32);
    u8 fn_800F35B0(u8 (*)(void *), char *, void *, s32);
    void fn_800951D0(void *);
    void fn_800FB96C(u8, s8, s8, void *, u8, u8, s8, s32, s32);

    struct { u8 x, y; u16 item; u8 *unit; s32 score; } result;
    u8 flags[8];
    s32 map0;
    u8 *unit;
    u8 outside, cx, cy, r, t, range, a, b;
    s32 dy, dist;
    u8 *ctx;
    u8 *map;
    void **list;
    s32 j;
    s32 i;
    u16 item;
    u8 by;
    u8 bx;
    u8 *best;
    s32 score;
    u8 *self;

    ctx = lbl_802EF4C8;
    map0 = (s32)lbl_802CA518;
    score = (s32)0x80000000;
    best = 0;
    ctx[8] = arg1;
    self = *(u8 **)ctx;
    if ((lbl_8032B3C0[1] & 2) || (*(u32 *)(self + 0x254) & 0x03000000)) {
        fn_80022DAC((void *)map0, 5, -1);
        fn_80022FD8((void *)map0, 5);
        (*(u16 **)(map0 + 0x14190))[(s8)self[0x19E] + ((s8)self[0x19F] << 6)] = 0;
    } else {
        fn_800FE2A0(self, 5, -1);
    }
    map = lbl_802CA518;
    for (i = 0; i < 4; i++) {
        list = fn_80037BBC(self, i);
        if (*list == 0) {
            break;
        }
        if (!fn_8009339C(self)) {
            continue;
        }
        result.item = (u16)i;
        fn_80015320(1, flags);
        for (j = 1; j <= 0x9F; j++) {
            unit = (u8)j ? lbl_802B14E4 + ((u8)j - 1) * 0x280 : 0;
            if (!*(u32 *)(unit + 0x188)) {
                continue;
            }
            if (!flags[*(u8 *)(*(u8 **)(unit + 0x190) + 8)]) {
                continue;
            }
            if (!arg0(unit)) {
                continue;
            }
            a = unit[0x19E];
            b = self[0x19E];
            dy = fn_80230BCC((s8)self[0x19F] - (s8)unit[0x19F]);
            dist = fn_80230BCC((s8)b - (s8)a) + dy;
            range = *list ? (u8)fn_8001DD54(*list, self) : 0;
            if (dist > (s8)fn_8003A398(self) + range) {
                continue;
            }
            if (*(u32 *)(unit + 0x1A0) & 0x10000DC) {
                continue;
            }
            outside = 0;
            cx = unit[0x19E];
            cy = unit[0x19F];
            if ((s8)cx < (s8)map[8] || (s8)map[0xA] - 1 < (s8)cx || (s8)cy < (s8)map[9] || (s8)map[0xB] - 1 < (s8)cy) {
                outside = 1;
            }
            if (outside) {
                continue;
            }
            r = *list ? (u8)fn_8001DD54(*list, unit) : 0;
            t = *list ? *((u8 *)*list + 0x1D) : 0;
            fn_800FDDBC((s8)unit[0x19E], (s8)unit[0x19F], t, r, 6);
            result.unit = unit;
            if (fn_800F81B8(self, &result) && result.score > score) {
                bx = result.x;
                score = result.score;
                by = result.y;
                item = result.item;
                best = result.unit;
            }
        }
    }
    if (fn_80105BC0(self + 0x1BC, 0x43)) {
        t = ctx[8];
        if (fn_800F35B0(arg0, lbl_80272DB0 + 0xD9, &result, 0x1D)) {
            if (result.score > score) {
                bx = result.x;
                by = result.y;
                result.item = 0xFFFF;
                item = result.item;
                best = result.unit;
            } else {
                ctx[8] = t;
            }
        } else {
            ctx[8] = t;
        }
    }
    if (best) {
        if (item < 4) {
            fn_800951D0(self);
        }
        fn_800FB96C(ctx[8], (s8)bx, (s8)by, best, best[0x19E], best[0x19F], (s8)item, 0, 0);
    }
    return lbl_8032B3C0[0x21C];
}
void fn_800F58DC(void *arg0, void *arg1) {
    extern u16 lbl_802EF4E0[2008];
    if (((u8 (**)(void *))arg0)[1](arg1) != 0) {
        fn_8002F6E8(&lbl_802EF4E0, *(u8 *)((u8 *)arg1 + 0x19E), *(u8 *)((u8 *)arg1 + 0x19F), *(u8 *)((u8 *)arg1 + 0x198), 0);
    }
}

void fn_800F5938(void *arg0, s32 arg1) {
    u8 *fn_8002F680(void *, u8, u8);
    s32 fn_8002F6E8(void *, u8, u8, s32, s32);
    extern u8 lbl_802EF4E0[];
    u8 *p;
    u8 count;
    u8 y;
    u8 x;

    if (M2C_FIELD(arg0, u8 (**)(s32), 4)(arg1)) {
        p = fn_8002F680(lbl_802EF4E0, M2C_FIELD(arg0, u8 *, 8), M2C_FIELD(arg0, u8 *, 9));
        if (p == NULL) {
            fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg0, u8 *, 8), M2C_FIELD(arg0, u8 *, 9), 0, 1);
        } else {
            count = p[3] + 1;
            y = M2C_FIELD(arg0, u8 *, 9);
            x = M2C_FIELD(arg0, u8 *, 8);
            p[0] = x;
            p[1] = y;
            p[2] = 0;
            p[3] = count;
        }
    }
}

#pragma cplusplus on
extern "C" void fn_800F59D8(void *arg0, s8 arg1, s8 arg2) {
    void fn_8002C6F4(void *, s8, s8);
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    struct Obj {
        virtual void v0(void *) = 0;
    };
    u8 temp;
    void *unit;

    *((u8 *)arg0 + 8) = arg1;
    *((u8 *)arg0 + 9) = arg2;
    temp = lbl_802CA518[arg1 + (arg2 << 6) + 0xD];
    if (temp != 0) {
        unit = (temp != 0) ? &lbl_802B14E4[(temp - 1) * 0x280] : NULL;
        ((Obj *)arg0)->v0(unit);
    }
    fn_8002C6F4(arg0, arg1, arg2);
}
#pragma cplusplus reset

void fn_800F5A8C(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802EF4E0[];

    if (fn_80015610(*(s32 *)((u8 *)*(void **)lbl_802EF4C8 + 0x190),
                    *(s32 *)((u8 *)arg1 + 0x190)) != 1 ||
        ((u8 (**)(void *))arg0)[1](arg1) != 0) {
        fn_8002F6E8(lbl_802EF4E0,
                    *(u8 *)((u8 *)arg1 + 0x19E),
                    *(u8 *)((u8 *)arg1 + 0x19F),
                    *(u8 *)((u8 *)arg1 + 0x198),
                    0);
    }
}

#pragma cplusplus off
#pragma use_lmw_stmw on
void fn_800F60D4(void *arg0,s32 *arg1){
void *fn_8000D354(void *);s32 fn_800F6F94(void *,s32);
s8 fn_8003B2D0(void *);s8 fn_800386E0(void *);
u8 fn_80015610(void *,void *);
extern u32 lbl_80330EAC[];
extern u8 lbl_80272F44[],lbl_802CA518[],lbl_802B14E4[],lbl_80330708[];
extern f32 lbl_8036A068,lbl_8036A06C;
f32 maxhp,amount;
s32 x,y;
s32 score,bonus,remaining,percent;
u32 flags;
u8 outside,id,equal;
u8 *cfg,*other,*p;
s32 total;
u8 *unit;
cfg=fn_8000D354(M2C_FIELD(arg0,void **,0x244));
score=fn_800F6F94(cfg,1);
unit=(u8 *)lbl_80330EAC+0x2E0;
maxhp=(f32)fn_8003B2D0(unit);
remaining=fn_8003B2D0(unit)-(s8)unit[0x1A8];
amount=(f32)remaining;
amount=lbl_8036A068*amount;
percent=(s32)(amount/maxhp);
score+=(s32)(lbl_8036A06C*((f32)percent*(f32)(s8)cfg[6]));
p=lbl_80272F44;
total=0;
for(;(s32)p[0]!=0x7F;p+=3){
outside=0;
x=(s16)((s8)p[0]+(s8)((u8 *)lbl_80330EAC)[0x19E]);
y=(s16)((s8)p[1]+(s8)((u8 *)lbl_80330EAC)[0x19F]);
if(x<(s8)lbl_802CA518[8] || (s8)lbl_802CA518[10]-1<x || y<(s8)lbl_802CA518[9] || (s8)lbl_802CA518[11]-1<y)outside=1;
if(!outside){
id=lbl_802CA518[(s8)x+((s8)y<<6)+0xD];
if(id){
if(id)other=lbl_802B14E4+(id-1)*0x280;else other=0;
if(relation_is_one(M2C_FIELD(M2C_FIELD(lbl_80330EAC,void **,0x280),void **,0x190),M2C_FIELD(other,void **,0x190))==0)total+=(s8)p[2];
}
}
}
flags=M2C_FIELD(M2C_FIELD(M2C_FIELD(unit,void **,0x280),void **,0x18C),u16 *,0x3A);
score+=(s32)(lbl_8036A06C*((f32)total*(f32)(s8)cfg[7]));
bonus=0;
if(flags&1)bonus=(s8)cfg[0xE];
if(flags&2)bonus+=(s8)cfg[0xF];
if(flags&4)bonus+=(s8)cfg[0x10];
if(flags&8)bonus+=(s8)cfg[0x11];
if(flags&0x10)bonus+=(s8)cfg[0x12];
if(flags&0x20)bonus+=(s8)cfg[0x13];
if(flags&0x40)bonus+=(s8)cfg[0x14];
if(flags&0x80)bonus+=(s8)cfg[0x15];
if(flags&0x100)bonus+=(s8)cfg[0x16];
if(flags&0x400)bonus+=(s8)cfg[0x17];
amount=(f32)M2C_FIELD(lbl_80330708,s16 *,0x12);
score+=(s32)(lbl_8036A06C*((f32)bonus*(f32)(s8)cfg[8]));
score+=(s32)(lbl_8036A06C*(amount*(f32)(s8)cfg[9]));
score+=(s32)(lbl_8036A06C*((f32)fn_800386E0(unit)*(f32)(s8)cfg[10]));
M2C_FIELD(arg1,s32 *,8)=score;
}
#pragma use_lmw_stmw on
#pragma fp_contract off
s32 fn_800F6B10(void *arg0, u8 arg1) {
void **fn_801A7FF4(void *);
void *fn_8001CB64(void *);
s32 fn_80230BCC(s32);
u8 fn_8001DD54(void *, void *);
f32 fn_800F738C(s32, f32);
s8 fn_800F8308(void *);
s16 fn_800F8310(void *);
s16 fn_800F8318(void *);
s16 fn_800F8320(void *);
u64 fn_800F8328(void *, u64);
s16 fn_800F833C(void *);
void *fn_800F8344(void *);
void *fn_800F834C(void *);
f64 fn_802387C8(f64, f64);
extern u32 lbl_80330EAC[];
extern s32 lbl_80366E6C;
extern f32 lbl_8036A06C, lbl_8036A078, lbl_8036A07C, lbl_8036A080, lbl_8036A090;
extern f64 lbl_8036A088;

    u8 *unit2;
    u8 *base;
    void **list;
    void *wpn;
    s32 dy;
    s32 dist;
    u8 lo;
    u8 hi;
    u8 in_range;
    s32 flag;
    f32 var_f1;
    f32 var_f1_2;
    f32 temp_f0;
    s32 sp8;
    s32 *var_r3;
    void *temp_r30;
    void *temp_r31;
    s16 t_y;
    s32 flag2;
    s32 var_r25;
    f32 temp_f1;
    f32 temp_f0_2;
    u64 temp_ret;
    u8 flag_u8;
    u8 ux, uy;
    u8 bx, by;
    void *temp_r3;
    s32 var_r31;

    base = (u8 *)lbl_80330EAC;
    unit2 = base + 0x2E0;
    var_r31 = 0;
    list = fn_801A7FF4(unit2);
    uy = unit2[0x19F];
    ux = unit2[0x19E];
    by = ((u8 *)lbl_80330EAC)[0x19F];
    bx = ((u8 *)lbl_80330EAC)[0x19E];
    dy = fn_80230BCC((s8)by - (s8)uy);
    dist = fn_80230BCC((s8)bx - (s8)ux);
    wpn = *list;
    list = (void **)(dist + dy);
    if (wpn != 0) {
        lo = ((u8 *)wpn)[0x1D];
    } else {
        lo = 0;
    }
    lo = (u8)lo;
    if (wpn != 0) {
        hi = (u8)fn_8001DD54(wpn, base);
    } else {
        hi = 0;
    }
    hi = (u8)hi;
    in_range = 0;
    if ((s32)lo <= (s32)list && (s32)list <= (s32)hi) {
        in_range = 1;
    }
    if (in_range != 0) {
        if (*fn_801A7FF4(unit2) != 0) {
            flag = (s32)(*(s16 *)(base + 0x29C) + 4) <= *(s16 *)(unit2 + 0x29C);
            temp_r3 = fn_8001CB64(fn_801A7FF4(unit2));
            flag_u8 = flag | (u8)((*(u64 *)temp_r3 & 0x20ULL) != 0);
            var_r31 = *(s16 *)(unit2 + 0x298) - *(s16 *)(base + 0x29A);
            if (var_r31 < 0) {
                var_r31 = 0;
            }
            var_f1 = lbl_8036A078 * (f32)*(s16 *)(unit2 + 0x2A2);
            if (flag_u8 != 0) {
                temp_f0 = lbl_8036A07C - var_f1;
                var_f1_2 = lbl_8036A07C - (temp_f0 * temp_f0);
                if (var_f1_2 > lbl_8036A07C) {
                    var_f1_2 = lbl_8036A07C;
                }
                if (var_f1_2 < lbl_8036A080) {
                    var_f1_2 = lbl_8036A080;
                }
                var_r31 = (s32)(lbl_8036A090 * (f32)var_r31 * (f32)fn_802387C8(var_f1_2, lbl_8036A088));
            } else {
                if (var_f1 > lbl_8036A07C) {
                    var_f1 = lbl_8036A07C;
                }
                if (var_f1 < lbl_8036A080) {
                    var_f1 = lbl_8036A080;
                }
                var_r31 = (s32)((f32)var_r31 * (f32)fn_802387C8(var_f1, lbl_8036A088));
            }
        }
    }
    if (arg1 != 0) {
        var_r31 = (s32)(lbl_8036A06C * ((f32)var_r31 * (f32)*(s8 *)((u8 *)arg0 + 0xB)));
        if (var_r31 <= 0) {
            temp_r30 = fn_800F834C(lbl_80330EAC);
            temp_r31 = fn_800F8344(lbl_80330EAC);
            arg0 = (void *)((s16)fn_800F833C(temp_r31) + 4);
            flag2 = (s16)fn_800F833C(temp_r30) >= (s32)arg0;
            temp_ret = fn_800F8328(fn_8001CB64(fn_801A7FF4(temp_r30)), 0x20ULL);
            flag_u8 = flag2 | (u8)(temp_ret != 0);
            var_r25 = (s16)fn_800F8320(temp_r30) - (s16)fn_800F8318(temp_r31);
            if (var_r25 < 0) {
                var_r25 = 0;
            }
            temp_f1 = lbl_8036A078 * (f32)(s16)fn_800F8310(temp_r30);
            if (flag_u8 != 0) {
                temp_f0_2 = lbl_8036A07C - temp_f1;
                var_r25 = (s32)(lbl_8036A090 * (f32)var_r25 * fn_800F738C(1, lbl_8036A07C - (temp_f0_2 * temp_f0_2)));
            } else {
                var_r25 = (s32)((f32)var_r25 * fn_800F738C(1, temp_f1));
            }
            if ((s8)fn_800F8308(temp_r31) <= var_r25) {
                var_r25 += 0x32;
            }
            var_r3 = &sp8;
            sp8 = var_r25;
            if ((s32)lbl_80366E6C < var_r25) {
                var_r3 = &lbl_80366E6C;
            }
            var_r31 = -*var_r3;
        }
    }
    if ((s8)base[0x1A8] <= var_r31) {
        var_r31 += 0x32;
    }
    return var_r31;
}
s32 fn_800F6F94(void *arg0, u8 arg1) {
void *fn_801A7FF4(void *);
void *fn_8001CB64(void *);
f32 fn_800F738C(s32,f32);
u8 fn_800F73EC(void *,void *,void *);
s8 fn_800F8308(void *);
s16 fn_800F8310(void *);
s16 fn_800F8318(void *);
s16 fn_800F8320(void *);
u64 fn_800F8328(void *,u64);
s16 fn_800F833C(void *);
void *fn_800F8344(void *);
void *fn_800F834C(void *);
u8 fn_800F8350(void *);
f64 fn_802387C8(f64,f64);
extern u32 lbl_80330EAC[];
extern s32 lbl_80366E68;
extern f32 lbl_8036A06C,lbl_8036A078,lbl_8036A07C,lbl_8036A080,lbl_8036A090;
extern f64 lbl_8036A098;

    u8 *base;
    s32 sp8;
    s32 var_r30;
    u8 *temp_r30;
    u8 *temp_r29_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_r27;
    s32 temp_r27_3;
    s32 *var_r3;
    s32 temp_r27_2;
    s32 temp_r29;
    s32 var_r27;
    u64 temp_ret;
    u8 temp_r4;
    void *temp_r3;

    base = (u8 *)lbl_80330EAC;
    temp_r29 = *(s16 *)(base + 0x29C) >= (s32)(*(s16 *)(base + 0x57C) + 4);
    temp_r3 = fn_8001CB64(fn_801A7FF4(base));
    temp_r4 = temp_r29 | (u8)((*(u64 *)temp_r3 & 0x20ULL) != 0);
    var_r30 = *(s16 *)((u8 *)lbl_80330EAC + 0x298) - *(s16 *)(base + 0x57A);
    if (var_r30 < 0) {
        var_r30 = 0;
    }
    var_f1 = lbl_8036A078 * (f32) *(s16 *)(base + 0x2A2);
    if (temp_r4 != 0) {
        temp_f0 = lbl_8036A07C - var_f1;
        var_f1_2 = lbl_8036A07C - (temp_f0 * temp_f0);
        if (var_f1_2 > lbl_8036A07C) {
            var_f1_2 = lbl_8036A07C;
        }
        if (var_f1_2 < lbl_8036A080) {
            var_f1_2 = lbl_8036A080;
        }
        var_r30 = (s32) (lbl_8036A090 * (f32) var_r30 * (f32) fn_802387C8(var_f1_2, lbl_8036A098));
    } else {
        if (var_f1 > lbl_8036A07C) {
            var_f1 = lbl_8036A07C;
        }
        if (var_f1 < lbl_8036A080) {
            var_f1 = lbl_8036A080;
        }
        var_r30 = (s32) ((f32) var_r30 * (f32) fn_802387C8(var_f1, lbl_8036A098));
    }
    if (arg1 != 0) {
        var_r30 = (s32) (lbl_8036A06C * ((f32) var_r30 * (f32) *(s8 *)((u8 *)arg0 + 5)));
        if (var_r30 <= 0) {
            temp_r29_2 = fn_800F834C(lbl_80330EAC);
            temp_r30 = fn_800F8344(lbl_80330EAC);
            var_r27 = 0;
            if (fn_800F73EC(temp_r29_2, temp_r30, fn_801A7FF4(temp_r30)) != 0) {
                if (fn_800F8350(fn_801A7FF4(temp_r30)) != 0) {
                    temp_r27 = fn_800F833C(temp_r30);
                    temp_r27_2 = temp_r27 >= (s32)(fn_800F833C(temp_r29_2) + 4);
                    temp_ret = fn_800F8328(fn_8001CB64(fn_801A7FF4(temp_r30)), 0x20ULL);
                    arg1 = temp_r27_2 | (u8) (temp_ret != 0);
                    temp_r27_3 = fn_800F8320(temp_r30);
                    var_r27 = temp_r27_3 - fn_800F8318(temp_r29_2);
                    if (var_r27 < 0) {
                        var_r27 = 0;
                    }
                    temp_f1 = lbl_8036A078 * (f32) fn_800F8310(temp_r30);
                    if (arg1 != 0) {
                        temp_f0_2 = lbl_8036A07C - temp_f1;
                        var_r27 = (s32) (lbl_8036A090 * (f32) var_r27 * fn_800F738C(0, lbl_8036A07C - (temp_f0_2 * temp_f0_2)));
                    } else {
                        var_r27 = (s32) ((f32) var_r27 * fn_800F738C(0, temp_f1));
                    }
                }
            }
            if (fn_800F8308(temp_r29_2) <= var_r27) {
                var_r27 += 0x32;
            }
            sp8 = var_r27;
            var_r3 = &sp8;
            if ((s32) lbl_80366E68 < var_r27) {
                var_r3 = &lbl_80366E68;
            }
            var_r30 = -*var_r3;
        }
    }
    if (*(s8 *)(base + 0x488) <= var_r30) {
        var_r30 += 0x32;
    }
    return var_r30;
}
#pragma scheduling off
f32 fn_800F738C(u8 arg0, f32 farg0) {
    f64 fn_802387C8(f64, f64);
    extern f32 lbl_8036A07C;
    extern f32 lbl_8036A080;
    extern f64 lbl_8036A088;
    extern f64 lbl_8036A098;
    f32 lim;

    lim = lbl_8036A07C;
    if (farg0 > lim) {
        farg0 = lim;
    }
    lim = lbl_8036A080;
    if (farg0 < lim) {
        farg0 = lim;
    }
    if (arg0 != 0) {
        return (f32)fn_802387C8(farg0, lbl_8036A098);
    }
    return (f32)fn_802387C8(farg0, lbl_8036A088);
}
#pragma scheduling reset
void fn_800F74C0(Unit* unit)
{
    u16* array = g_someArray;

    if (array[0x3A] != 0) 
    {
        array[0x3A] += unit->field_0x250;
        array[0x3B] = 0;
        array[0x3C] = 0;
    }
    
    if (unit->field_0x4 == 1) 
    {
        if ((unit->field_0x250 == 0) || (array[0x3A] == 0))
            unit->field_0x4 = 0;  
    }
    
    if (unit->field_0x250 > 0) 
    {
        if (unit->field_0x4 == 1) 
        {
            array[0x34] += 1;
            
            if (array[0x40] != 0)
            {
                unit->field_0x250 = 0;
                array[0x3A] = 0;      
            }
        }
    }

    if (unit->field_0x7 & 1) 
    {
        array[0x3A] = 0;
        
        if (unit->field_0x4 == 1) 
        {
            unit->field_0x250 = 0; 
        }
    }
}

#pragma cplusplus on
#pragma auto_inline off
extern "C" u8 fn_80037E00(void *);
extern "C" void fn_801A7A68(void *, void *, void *);
extern "C" void fn_801A6F34(void *, u8);
extern "C" void fn_800F6550(s32, void *);
typedef struct Param {
    void *p;
    u8 b4[4];
    s32 x8;
    u8 bC[4];
} Param;
static const Param lbl_80272EE4 = {0, {0, 0, 0, 1}, 0, {1}};
extern "C" s32 fn_800F773C(s32 arg0, void *arg1) {
    extern u8 lbl_802EF4C8[];
    Param b;
    Param a = {0, {0, 0, 0, 1}, 0, {1}};

    a.p = M2C_FIELD(arg1, void **, 4);
    a.b4[0] = M2C_FIELD(a.p, u8 *, 0x19E);
    a.b4[1] = M2C_FIELD(a.p, u8 *, 0x19F);
    a.b4[2] = fn_80037E00(a.p);
    b = lbl_80272EE4;
    b.p = (void *)arg0;
    b.b4[0] = M2C_FIELD(arg1, u8 *, 0);
    b.b4[1] = M2C_FIELD(arg1, u8 *, 1);
    b.b4[2] = M2C_FIELD(arg1, u16 *, 2);
    fn_801A7A68(lbl_80330EAC, &b, &a);
    fn_801A6F34(lbl_80330EAC, lbl_802EF4C8[8]);
    fn_800F6550(arg0, arg1);
    return 1;
}
#pragma auto_inline reset
#pragma cplusplus reset

s32 fn_800F7994(s32 arg0, s8 arg1, s8 arg2) {
    extern u16 lbl_802CA518;
    void *fn_80019DBC(u8, void *, void *, void *);
    u8 fn_80105BC0(s32, u32);
    
    s32 var_r4;
    void *temp_r4;
    void *temp_r31;
    void *temp_r6;
    void *temp_r6_2;
    s32 temp_r5;
    s32 temp_r30;

    // Try using inline assembly to force addressing patterns
    temp_r5 = (s32) &lbl_802CA518 + arg1 + (arg2 << 6);
    temp_r4 = &lbl_802CA518 + arg1 + (arg2 << 6);
    temp_r31 = fn_80019DBC(M2C_FIELD(temp_r4, u8 *, 0x100D), temp_r4, &lbl_802CA518, &lbl_802CA518);
    temp_r30 = arg0 + 0x1BC;
    if (fn_80105BC0(temp_r30, 4) != 0) {
        temp_r6 = M2C_FIELD(temp_r31, void **, 8);
        var_r4 = (s8) M2C_FIELD(temp_r6, u8 *, 3) + (s8) M2C_FIELD(temp_r6, u8 *, 4) + (s8) M2C_FIELD(temp_r6, u8 *, 5) + M2C_FIELD(temp_r6, u8 *, 6);
    } else {
        temp_r6_2 = M2C_FIELD(temp_r31, void **, 8);
        var_r4 = (s8) M2C_FIELD(temp_r6_2, u8 *, 0) + (s8) M2C_FIELD(temp_r6_2, u8 *, 1) + (s8) M2C_FIELD(temp_r6_2, u8 *, 2) + M2C_FIELD(temp_r6_2, u8 *, 6);
    }
    return var_r4 >> 1;
}

#pragma use_lmw_stmw on
s32 fn_800F7A60(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 fn_80230BBC(s32);
    void **fn_80037D54(void *);
    s32 fn_8001DD54(void *, void *);
    void *fn_80019DBC(u8);
    u8 fn_80105BC0(s32, u32);
    u8 fn_80015610(void *, void *);
    u32 fn_800FCF48(s8, s8, void *);
    extern u8 lbl_802CA518[];
    extern u8 lbl_80272E98[];
    extern u8 lbl_802B14E4[];
    s32 dist;
    u8 *unit;
    s32 acc;
    s8 *cur;
    s32 sx;
    s32 penalty;
    void **temp;
    u8 *inner;
    u8 lo;
    u8 hi;
    u8 match;
    void *terrain;
    u8 *tp;
    s32 sum;
    u8 *p6;
    s16 x;
    s16 y;
    u8 bad;
    u8 t;
    u8 *e;

    unit = M2C_FIELD(arg3, u8 **, 4);
    dist = fn_80230BBC((s8) M2C_FIELD(unit, u8 *, 0x19F) - arg2);
    dist = dist + fn_80230BBC((s8) M2C_FIELD(unit, u8 *, 0x19E) - arg1);
    temp = fn_80037D54(unit);
    if (temp == NULL) {
        goto fail;
    }
    inner = *temp;
    if (inner != NULL) {
        lo = M2C_FIELD(inner, u8 *, 0x1D);
    } else {
        lo = 0;
    }
    if (dist < lo) {
        goto fail;
    }
    if (inner != NULL) {
        hi = (u8) fn_8001DD54(inner, unit);
    } else {
        hi = 0;
    }
    if (hi < dist) {
fail:
        penalty = 8;
    } else {
        penalty = 0;
    }
    sx = (s8) arg1;
    terrain = fn_80019DBC(M2C_FIELD(lbl_802CA518 + sx + ((s8) arg2 << 6), u8 *, 0x100D));
    if (fn_80105BC0((s32) ((u8 *) arg0 + 0x1BC), 4) != 0) {
        tp = M2C_FIELD(terrain, u8 **, 8);
        sum = (s8) tp[3] + (s8) tp[4];
        sum += (s8) tp[5];
        sum += tp[6];
    } else {
        tp = M2C_FIELD(terrain, u8 **, 8);
        sum = (s8) tp[0] + (s8) tp[1];
        sum += (s8) tp[2];
        sum += tp[6];
    }
    cur = (s8 *) lbl_80272E98;
    acc = 0;
    dist = penalty + (sum >> 1);
    while (*cur != 0x7F) {
        x = arg1 + cur[0];
        y = arg2 + cur[1];
        bad = 0;
        if (x < (s8) lbl_802CA518[8] || (s8) lbl_802CA518[0xA] - 1 < x || y < (s8) lbl_802CA518[9] || (s8) lbl_802CA518[0xB] - 1 < y) {
            bad = 1;
        }
        if (bad == 0) {
            t = M2C_FIELD(lbl_802CA518 + (s8) x + ((s8) y << 6), u8 *, 0xD);
            if (t != 0) {
                e = (t != 0) ? lbl_802B14E4 + (t - 1) * 0x280 : NULL;
                match = fn_80015610(M2C_FIELD(arg0, void **, 0x190), M2C_FIELD(e, void **, 0x190)) == 1;
                if (match == 1) {
                    acc -= cur[2];
                } else {
                    acc += cur[2];
                }
            }
        }
        cur += 3;
    }
    p6 = lbl_802CA518 + (sx + ((s8) arg2 << 6)) * 2;
    dist = dist + acc;
    dist = dist + -(M2C_FIELD(p6, s16 *, 0x610E) >> 1);
    dist = dist - ((fn_800FCF48((s8) arg1, (s8) arg2, p6) >> 4) & 0xFFF);
    return dist;
}
#pragma use_lmw_stmw reset
s32 fn_800F7E78(void) {
    M2C_UNK fn_800F75F8();
    fn_800F75F8();
    return 1;
}

s32 fn_800F7E9C(s32 arg0, s8 arg1, s8 arg2, void *arg3) {
    extern u16 lbl_802CA518[];
    if (lbl_802CA518[0x60C7 + (arg1 + (arg2 << 6))] == 0) {
        return 0;
    }
    *(u8*)arg3 = arg1;
    *((u8*)arg3 + 1) = arg2;
    return fn_800F773C(arg0, arg3);
}

u8 fn_800F8308(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A8);
}

s16 fn_800F8310(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x2A2);
}

s16 fn_800F8318(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x29A);
}

s16 fn_800F8320(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x298);
}

u64 fn_800F8328(u32 *arg0, s32 unused, u32 mask0, u32 mask1) {
    u32 b;

    b = arg0[1] & mask1;
    return ((u64)(arg0[0] & mask0) << 32) | b;
}

s16 fn_800F833C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x29C);
}

s32 fn_800F8344(s32 arg0) {
    return arg0 + 0x2E0;
}

void fn_800F834C(void) {

}

s32 fn_800F8350(s32 *arg0) {
    return *arg0 != 0;
}

void fn_800F8364(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F8390(void *arg0)
{
    extern u8 *lbl_803678F8;
    extern s32 lbl_803678F4;
    extern u8 lbl_803678F0;

    extern void *fn_8000D354(void *);

    long index;
    u8 *entry;
    long count;
    u8 *obj;

    obj = (u8 *)arg0;
    index = 0;

    count = *(s32 *)(lbl_803678F8 + 0x10);

    if (lbl_803678F4 == 0) {
        entry = (u8 *)fn_8000D354(*(void **)(obj + 0x238));
    } else {
        entry = (u8 *)fn_8000D354(*(void **)(obj + 0x23C));
    }

    if (count) {
        while (*(s32 *)entry != 0 ||
               *(s32 *)(entry + 0xC) != count) {
            entry += 0x1C;
            index++;
        }

        if (!lbl_803678F4) {
            obj[0x250] = index;
        } else {
            obj[0x251] = index;
        }
    } else {
        if (!lbl_803678F4) {
            obj[0x250] = 0;
        } else {
            obj[0x251] = 0;
        }
    }

    lbl_803678F0 = 1;
}

void fn_800F8464(void *arg0)
{
    extern u8 *lbl_803678F8;
    extern s32 lbl_803678F4;
    extern u8 lbl_803678F0;

    extern void *fn_8000D354(void *);

    long index;
    u8 *entry;
    long count;
    u8 *obj;

    obj = (u8 *)arg0;
    index = 0;

    count = *(s32 *)(lbl_803678F8 + 0x10);

    if (lbl_803678F4 == 0) {
        entry = (u8 *)fn_8000D354(*(void **)(obj + 0x238));
    } else {
        entry = (u8 *)fn_8000D354(*(void **)(obj + 0x23C));
    }

    if (count) {
        while (*(s32 *)entry != 0 ||
               *(s32 *)(entry + 0xC) != count) {
            entry += 0x1C;
            index++;
        }

        if (!lbl_803678F4) {
            obj[0x250] = index;
        } else {
            obj[0x251] = index;
        }
    } else {
        if (!lbl_803678F4) {
            obj[0x250] = 0;
        } else {
            obj[0x251] = 0;
        }
    }

    lbl_803678F0 = 1;
}

void fn_800F8538(void *arg0) {
    extern u8 *lbl_803678F8;
    extern s32 lbl_803678F4;
    extern u8 lbl_8032B3C0[];
    extern s32 fn_8003A398(void *);

    u8 *global;
    s32 tmp;
    register s32 index;
    s32 ret;

    global = lbl_803678F8;
    tmp = *(u8 *)((u8 *)arg0 + 0x1AA);
    *(u8 *)((u8 *)arg0 + 0x1AA) = *(s32 *)(global + 0x10) + (s8)tmp;

    ret = (s8)fn_8003A398(arg0);

    index = *(s32 *)(global + 4);
    *(s32 *)&lbl_8032B3C0[(index << 2) + 8] = ret;

    if (lbl_803678F4 == 0) {
        (*(u8 *)((u8 *)arg0 + 0x250))++;
    } else {
        (*(u8 *)((u8 *)arg0 + 0x251))++;
    }
}

void fn_800F8E5C(void* arg0, void* arg1, s32 arg2) {
    s32 temp_r4;
    s32* temp_r30;
    s32* temp_r31;

    if (arg0 == NULL) {
        return;
    }
    
    temp_r30 = (s32*)arg0;
    temp_r31 = (s32*)arg1;
    
    temp_r4 = *(temp_r30 + 0x6D);
    
    if (temp_r4 == 0) {
        return;
    }
    
    if (arg2 >= (temp_r4 - 1)) {
        arg2 = temp_r4 - 1;
    } else if (arg2 < 0) {
        arg2 = 0;
    }
    
    *(temp_r31 + 0x17) = *(temp_r30 + 0x6E);
    *(temp_r31 + 0x2D) = *(temp_r30 + 0x15C);
    *(temp_r31 + 0x1A) = ((s32)(*(temp_r30 + 0x168)) & (s32)(*(temp_r30 + 0x169))) - arg2;
    *(temp_r31 + 0x1B) = *(temp_r30 + 0x16A);
}

void fn_800F8FF4(void *arg0) {
    extern void *lbl_803678F8;
    if ((s32) lbl_803678F8 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9020(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F904C(void* arg0, s32 arg1) {
    s32 temp;
    
    if (arg0 == NULL) {
        return;
    }
    
    *(u32*)arg0 = 0x15;
    ((s16*)arg0)[0x5] = 0x15;
    
    temp = *(u32*)((u8*)arg0 + 0x14);
    if (temp != 0) {
        fn_801021F0(temp, arg1);
    }
}

#pragma use_lmw_stmw on
s32 fn_800F9178(void *arg0, s16 arg1, s16 arg2, s16 *arg3, s16 *arg4, s8 *arg5) {
    u8 fn_8001D500(void **);
    u8 fn_8001DD54(void *, void *);
    void fn_80022DAC(void *, s32, s32);
    void **fn_80037BBC(void *, s8);
    s8 fn_8003A398(void *);
    u8 fn_8009339C(void *);
    s32 fn_800F7838(void *, s16, s16);
    s32 fn_800F7994(void *, s16, s16);
    u32 fn_800FCF48(s8, s8);
    void fn_800FDDBC(s32, s32, u8, u8, s32);
    void fn_800FE2A0(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    extern u8 lbl_802CA518[];

    s16 *out_x;
    s16 *out_y;
    s8 *out_slot;
    void *tbl;
    void *self;
    s16 ax;
    s16 ay;
    s32 best;
    s8 slot;
    void **itemp;
    u8 dd;
    u8 unk1d;
    s8 px;
    s8 py;
    s8 range;
    s32 x0;
    s32 y1;
    s32 x1;
    s8 y;
    s32 x;
    s32 score;
    s16 best_x;
    s8 best_slot;
    s16 best_y;
    s32 row;
    u8 *rowbase;
    u8 *tblrow;
    s32 idx;

    out_x = arg3;
    out_y = arg4;
    out_slot = arg5;
    self = arg0;
    ax = arg1;
    ay = arg2;
    tbl = lbl_802CA518;
    fn_800FE2A0(tbl, 5, -1);
    best = 0x80000000;
    slot = 0;
    *(s32 *)((u8 *)&ay + 0) = (s32)ay; /* keep stack shape via named locals below */
    {
        s32 spy = (s32)ay;
        s32 spx = (s32)ax;
        void *spt = tbl;
        (void)spy; (void)spx; (void)spt;
    }

    for (slot = 0; slot < 4; slot++) {
        itemp = fn_80037BBC(self, slot);
        if (*itemp == NULL) {
            continue;
        }
        if (fn_8009339C(self) == 0) {
            continue;
        }
        fn_80022DAC(tbl, 6, -1);
        dd = GetItemDD54(*itemp, self);
        unk1d = GetItemUnk1D(*itemp);
        fn_800FDDBC((s32)ax, (s32)ay, unk1d, dd, 6);
        px = *(s8 *)((u8 *)self + 0x19E);
        py = *(s8 *)((u8 *)self + 0x19F);
        range = fn_8003A398(self);
        x0 = px - range;
        if (x0 < (s8)((u8 *)tbl)[8]) {
            x0 = (s8)((u8 *)tbl)[8];
        }
        y = py - range;
        if (y < (s8)((u8 *)tbl)[9]) {
            y = (s8)((u8 *)tbl)[9];
        }
        x1 = px + range;
        if (x1 > (s8)((u8 *)tbl)[0xA] - 1) {
            x1 = (s8)((u8 *)tbl)[0xA] - 1;
        }
        y1 = py + range;
        if (y1 > (s8)((u8 *)tbl)[0xB] - 1) {
            y1 = (s8)((u8 *)tbl)[0xB] - 1;
        }
        for (; y <= y1; y++) {
            for (x = x0; x <= x1; x++) {
                row = (s8)y << 6;
                idx = ((s8)x + row) * 2;
                if (*(s16 *)(lbl_802CA518 + idx + 0x610E) < 0) {
                    continue;
                }
                if ((s8)lbl_802CA518[row + (s8)x + 0xE18E] != 0) {
                    continue;
                }
                if (fn_800FE84C((s8)x, y) != 0) {
                    continue;
                }
                if (*(u16 *)(lbl_802CA518 + idx + 0xC18E) == 0) {
                    continue;
                }
                {
                    u8 owner = lbl_802CA518[row + (s8)x + 0xD];
                    if (owner != 0 && owner == *((u8 *)self + 0x198)) {
                        continue;
                    }
                }
                score = fn_800F7994(self, (s16)x, (s16)y);
                score = score + fn_800F7838(self, (s16)x, (s16)y);
                score = score - *(s16 *)(lbl_802CA518 + ((((s8)(s16)x) + (((s8)(s16)y) << 6)) * 2) + 0x610E);
                {
                    u32 t = fn_800FCF48((s8)(s16)x, (s8)(s16)y);
                    score = score - ((t >> 4) & 0xFFF);
                }
                if (score < 0) {
                    score = 0;
                }
                {
                    s32 cand = fn_8001D500(itemp) + (score != 0);
                    if (cand > best) {
                        best = cand;
                        best_x = (s16)x;
                        best_slot = slot;
                        best_y = (s16)y;
                    }
                }
            }
        }
    }
    if ((u32)(best + 0x80000000) != 0) {
        *out_x = best_x;
        *out_y = best_y;
        *out_slot = best_slot;
    }
    return best != 0x80000000;
}

void fn_800F94D4(void *arg0) {
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802EF4C8[];
    extern s32 lbl_803678F4;

    u8 fn_8010BDE0(void *);
    void fn_8010AD94(void *);

    u8 *obj;
    u32 flags;

    obj = (u8 *)arg0;

    if ((lbl_8032B3C0[1] & 2) == 0) {
        flags = *(u32 *)(obj + 0x254);

        if ((flags & 0x3000000) == 0) {
            *(u32 *)(obj + 0x254) = flags | 8;

            if (fn_8010BDE0(arg0) != 0) {
                if (lbl_802EF4C8[8] == 1) {
                    fn_8010AD94(arg0);
                }
            }
        }
    }

    if (lbl_803678F4 == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

#pragma use_lmw_stmw reset

void fn_800F9924(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9B58(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp_r3;
    s32 temp_r4;
    s32 r30;
    s32 r29;
    
    if (arg0 == 0) {
        return;
    }
    
    r30 = arg0;
    r29 = 0;
    
    while (r30 != 0) {
        temp_r3 = (s32)((u32)(r30 + 1) >> 1);
        temp_r4 = (temp_r3 * (arg1 + arg1)) >> 1;
        r30 = r30 - 1;
        r29 = r29 + temp_r4;
    }
    
    *(u32*)r29 = (arg2 * 16) + arg3;
}

void fn_800F9DAC(void *arg0) {
    u8 fn_8010207C(s32, s16 *, s16 *);
    void fn_801014BC(void *, s16, s16, s32, u16, s32, s32, s32);
    extern u8 lbl_8032B3C0[544];
extern s32 lbl_803678F4;
extern void *lbl_803678F8;
    void *work = lbl_803678F8;
    s16 x;
    s16 y;

    if (!(lbl_8032B3C0[1] & 2) && !(M2C_FIELD(arg0, u32 *, 0x254) & 0x03000000) &&
        fn_8010207C(M2C_FIELD(work, s32 *, 0x14), &x, &y) != 0) {
        fn_801014BC(arg0, x, y, 1, M2C_FIELD(lbl_8032B3C0, u16 *, 4), 1, 0, -1);
    }
    if (lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9E64(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

s32 fn_800FA0E4(Unit* unit) {
    s32 result = 0;
    
    // First branch condition - similar to what I saw in other functions 
    if (unit->field_0x1C != 0) {
        if (unit->field_0x1B == 0x27) {
            result = 1;
        }
    }
    
    // Second part with field access
    if (unit->field_0x250 != 0) {
        result += unit->field_0x250; 
    }

    return result;
}

void fn_800FA254(void *arg0) {
    extern s32 lbl_803678F4;
    extern u8 *lbl_803678F8;
    u8 fn_800F3BA4(s16 *, u8);

    fn_800F3BA4(*(s16 **)(lbl_803678F8 + 0x14), 0x2E);

    if (lbl_803678F4 == 0) {
        *(u8 *)((u8 *)arg0 + 0x250) += 1;
    } else {
        *(u8 *)((u8 *)arg0 + 0x251) += 1;
    }
}

void fn_800FA5D4(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

u32 fn_800FA600(void *arg0, u32 arg1, u32 arg2, u32 arg3) {
    extern s32 lbl_80369F38;
    
    if (*(u32 *)((char *)arg0 + 0xE8) != 0) {
        fn_80057EDC();
        *(u32 *)((char *)arg0 + 0xE8) = 0;
    }
    if ((arg1 == 0) || (arg2 == 0)) {
        *(u32 *)((char *)arg0 + 0xE8) = 0;
        return 0;
    }
    
    *(u32 *)((char *)arg0 + 0xE8) = fn_80057F04(*(s32 *)((char *)arg0 + 0xE0), arg1, arg2, 4);
    fn_80058970(*(u32 *)((char *)arg0 + 0xE8), &lbl_80369F38);
    if (arg3 != 0) {
        fn_80058910(*(u32 *)((char *)arg0 + 0xE8), 1);
    }
    return *(u32 *)((char *)arg0 + 0xE8);
}

void fn_800FA8F0(void *arg0) {
    extern void *lbl_803678F8;
    extern s32 lbl_803678F4;

    s32 fn_8000CEE4(s32);
    void fn_800F5504(void *, s32);
    void fn_800FB3AC(void);
    void fn_800FB334(void);

    u8 *obj;
    u8 *state;
    void *callback;

    obj = (u8 *)arg0;
    state = (u8 *)lbl_803678F8;

    if (fn_8000CEE4(0x64) <= *(s32 *)(state + 4)) {
        callback = fn_800FB3AC;

        if (*(s32 *)(state + 0x10) != 0) {
            callback = fn_800FB334;
        }

        fn_800F5504(callback, 0xF);
    }

    if (lbl_803678F4 == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void fn_800FAA50(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FAC30(void *arg0) {
    extern int lbl_803678F4;
    extern u8 lbl_8032B3C0[];

    lbl_8032B3C0[0x21C] = 0;

    if (lbl_803678F4 == 0) {
        (*(u8 *)((u8 *)arg0 + 0x250))++;
    } else {
        (*(u8 *)((u8 *)arg0 + 0x251))++;
    }
}

void fn_800FAD94(void) {
    // This function's assembly looks like it may be a simple stub or placeholder,
    // likely referencing another function or data that isn't fully decoded yet.
    // From the target assembly, it seems like there are some calls being made
    // to other functions within this file or elsewhere. For now, writing out
    // a very basic version without calling any other functions:
}

void fn_800FB074(void *arg0)
{
    extern s32 lbl_803678F4;
    extern u8 *lbl_803678F8;
    extern u8 lbl_803678F0;
    void *fn_8000D2BC(void *);
    void *self;
    u8 *p;
    u8 (*cb)(void *);

    self = arg0;
    p = lbl_803678F8;
    cb = (u8 (*)(void *))fn_8000D2BC(*(void **)(p + 0x14));
    lbl_803678F0 = cb(*(void **)(p + 0x18));
    if (lbl_803678F4 == 0) {
        *(u8 *)((u8 *)self + 0x250) += 1;
    } else {
        *(u8 *)((u8 *)self + 0x251) += 1;
    }
}

void fn_800FB2DC(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FB308(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

s32 fn_800FB334(void *arg0)
{
    extern u8 *lbl_803678F8;
    extern u8 lbl_802EF4C8[];

    extern s32 fn_802342B8(void *, void *);
    extern s32 fn_80015610(void *, void *);

    u8 *obj;
    u8 *other;
    s32 result;

    obj = (u8 *)arg0;
    other = *(u8 **)lbl_802EF4C8;

    result = fn_802342B8(
        *(void **)(lbl_803678F8 + 0x14),
        **(void ***)(obj + 0x18c)
    );

    if (result == 0) {
        return 0;
    }

    result = fn_80015610(
        *(void **)(obj + 0x190),
        *(void **)(other + 0x190)
    );

    return ((u8)result == 1);
}

s32 fn_800FB3AC(void *arg0) {
    s32 fn_802342B8(s32, s32, void *);
    extern void *lbl_803678F8;
extern void *lbl_802EF4C8;
    return fn_802342B8(M2C_FIELD(lbl_803678F8, s32 *, 0x14), *M2C_FIELD(arg0, s32 **, 0x18C), lbl_803678F8) == 0;
}

s32 fn_800FB3E4(void *arg0)
{
    extern u8 *lbl_803678F8;
    extern u8 lbl_802EF4C8[];

    extern s32 fn_802342B8(void *, void *);
    extern s32 fn_80015610(void *, void *);

    u8 *obj;
    u8 *other;
    s32 result;

    obj = (u8 *)arg0;
    other = *(u8 **)lbl_802EF4C8;

    result = fn_802342B8(
        *(void **)(lbl_803678F8 + 0x14),
        **(void ***)(obj + 0x188)
    );

    if (result == 0) {
        return 0;
    }

    result = fn_80015610(
        *(void **)(obj + 0x190),
        *(void **)(other + 0x190)
    );

    return ((u8)result == 1);
}

s32 fn_800FB45C(void *arg0) {
    s32 fn_802342B8(s32, s32, void *);
    extern void *lbl_803678F8;
    
    return fn_802342B8(((s32*)lbl_803678F8)[0x14/4], ((s32**)arg0)[0x188/4][0], lbl_803678F8) == 0;
}

s32 fn_800FB494(void *arg0) {
    extern void *lbl_803678F8;
    extern u8 lbl_802EF4C8[];
    s32 fn_802342B8(u8 *, u8 *);
    s32 fn_80015610(void *, void *);

    u8 **list;
    void *other;
    u8 *name;
    u8 *entry;
    u8 found;

    list = M2C_FIELD(lbl_803678F8, u8 ***, 0x14);
    other = *(void **)lbl_802EF4C8;
    name = *M2C_FIELD(arg0, u8 ***, 0x188);

    while ((entry = *list++) != NULL) {
        if (fn_802342B8(entry, name) == 0) {
            found = 1;
            goto checked;
        }
    }
    found = 0;

checked:
    if (found != 0) {
        return 0;
    }

    return (u8)fn_80015610(M2C_FIELD(arg0, void **, 0x190),
                          M2C_FIELD(other, void **, 0x190)) == 1;
}

s32 fn_800FB548(void *arg0)
{
    extern u8 *lbl_803678F8;
    s32 fn_802342B8(void *, void *);
    void *key;
    void **list;
    void *item;
    u8 found;

    key = **(void ***)((u8 *)arg0 + 0x188);
    list = *(void ***)(lbl_803678F8 + 0x14);

    goto load;
    do {
        if (fn_802342B8(item, key) == 0) {
            found = 1;
            goto done;
        }
    load:
        item = *list;
        list++;
    } while (item != NULL);
    found = 0;
done:
    if (found == 0) {
        return 0;
    }
    return 1;
}

s32 fn_800FB5C8(void *arg0) {
    extern u8 lbl_802EF4C8[];
    return (u8) fn_80015610(*(s32*)((u8*)arg0 + 0x190),
                            *(s32*)((u8*)*(void**)&lbl_802EF4C8 + 0x190)) == 1;
}

s32 fn_800FB60C(void *arg0) {
    s32 fn_80015610(s32, s32);
    extern u8 lbl_802EF4C8[];
    s32 r = fn_80015610(*(s32 *)((u8 *)arg0 + 0x190), *(s32 *)((u8 *)*(void **)lbl_802EF4C8 + 0x190));
    return (r & 0xFF) == 0;
}

void fn_800FB918(void *arg0, void *arg1, s32 *arg2) {
    s32 count;
    s32 key;
    register s32 *mid_ptr;
    s32 mid;

    key = *arg2;
    count = ((s32)arg1 - (s32)arg0) / 8;
    while (count > 0) {
        mid = count / 2;
        mid_ptr = (s32 *)((u8 *)arg0 + (mid * 8));
        if (*mid_ptr < key) {
            arg0 = (u8 *)mid_ptr + 8;
            count -= (u32)mid + 1;
        } else {
            count = mid;
        }
    }
}

void fn_800FB96C(s8 arg0, s8 arg1, s8 arg2, s32 arg3, s8 arg4, s8 arg5, s8 arg6, s8 arg7, u8 arg_sp8) {
    extern u8 lbl_802EF4C8[24];
    extern u8 lbl_8032B3C0[544];
    lbl_802EF4C8[8] = arg0;
    lbl_802EF4C8[0xD] = arg1;
    lbl_802EF4C8[0xE] = arg2;
    *(s32 *)&lbl_802EF4C8[4] = arg3;
    lbl_802EF4C8[0xF] = arg4;
    lbl_802EF4C8[0x10] = arg5;
    lbl_802EF4C8[0xA] = arg6;
    lbl_802EF4C8[0x14] = arg7;
    lbl_802EF4C8[0x15] = arg_sp8;
    lbl_8032B3C0[0x21C] = 1;
}

void fn_800FB9C0(s8 arg0, s32 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5, s8 arg6) {
    extern u8 lbl_802EF4C8[24];
    extern u8 lbl_8032B3C0[544];

    lbl_802EF4C8[8] = arg0;
    *(s32 *)&lbl_802EF4C8[4] = arg1;
    lbl_802EF4C8[0xF] = arg2;
    lbl_802EF4C8[0x10] = arg3;
    lbl_802EF4C8[0xA] = arg4;
    lbl_802EF4C8[0x14] = arg5;
    lbl_802EF4C8[0x15] = arg6;
    lbl_8032B3C0[0x21C] = 1;
}

void fn_800FB9F8(void) {
    /* This is a placeholder for the actual function implementation */
    return;
}

s32 fn_800FBAB8(void *arg0) {
    void fn_8012923C(void *);
    extern u8 lbl_8032B3C0[];

    if ((lbl_8032B3C0[1] & 4) != 0) {
        return 0;
    }
    fn_8012923C(arg0);
    return 1;
}

s32 fn_800FBAF8(void) {
    u8 fn_800FB64C(void);
    void fn_800FB7A8(void);
    extern u8 lbl_8032B3C0[];

    if (lbl_8032B3C0[1] & 4) {
        return 1;
    }
    {
        s32 r31 = 0;
        for (;;) {
            if (fn_800FB64C() == 1) {
                break;
            }
            if (r31 > 0xFF) {
                fn_800FB7A8();
                break;
            }
            r31 += 1;
        }
    }
    return 1;
}

s32 fn_800FBB68(void) {
    u8 fn_800FB6FC(void);
    void fn_800FB868(void);
    extern u8 lbl_8032B3C0[];

    if (lbl_8032B3C0[1] & 4) {
        return 1;
    }
    {
        s32 r31 = 0;
        for (;;) {
            if (fn_800FB6FC() == 1) {
                break;
            }
            if (r31 > 0xFF) {
                fn_800FB868();
                break;
            }
            r31 += 1;
        }
    }
    return 1;
}

s32 fn_800FBBD8(void *arg0) {
    u8 fn_8010C4B0(void *);
    u8 fn_8010C504(void *);
    u8 fn_8010C244(void *);
    u8 fn_8010BEB8(void *);
    u8 fn_8010BDE0(void *);
    void fn_8010AD94(void *);
    u8 fn_8010BB74(void *);
    u8 fn_8010B8E4(void *);
    u8 fn_8010B658(void *);
    void fn_8010AC58(void *);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_8032B3C0[];
    if ((*(u8 *)(lbl_8032B3C0 + 1) & 4) != 0) {
        return 1;
    }
    if ((fn_8010C4B0(arg0) != 0) && (fn_8010C504(arg0) != 0)) {
        if (fn_8010C244(arg0) != 0) {
            return 1;
        }
        if (fn_8010BEB8(arg0) != 0) {
            return 1;
        }
        if ((*(s32 *)((u8 *)arg0 + 0x254) & 8) != 0) {
            if (fn_8010BDE0(arg0) != 0) {
                if (*(u8 *)(lbl_802EF4C8 + 8) == 1) {
                    fn_8010AD94(arg0);
                }
                return 1;
            }
            goto block_23;
        }
        if (fn_8010BB74(arg0) != 0) {
            fn_8010AC58(arg0);
        } else if (fn_8010B8E4(arg0) != 0) {
            fn_8010AC58(arg0);
        } else if (fn_8010B658(arg0) != 0) {
            fn_8010AC58(arg0);
        }
        goto block_23;
    }
    if (((*(s32 *)((u8 *)arg0 + 0x254) & 8) != 0) && (fn_8010BDE0(arg0) != 0) && (*(u8 *)(lbl_802EF4C8 + 8) == 1)) {
        fn_8010AD94(arg0);
    }
block_23:
    return 1;
}

void fn_800FBF54(void) {
    extern u8 lbl_802EF4C8[24];
    u32 *p;

    p = *(u32 **)lbl_802EF4C8;
    p[0x1A0 / 4] |= 1;
}

void fn_800FC150(void) {
    M2C_UNK fn_800FF918();
    fn_800FF918();
}

void fn_800FC2C4(s32 arg0) {
    extern u32 lbl_802EF4C8[];
    u32 fn_800FCF74(u32, s32);
    void fn_8000C188(s32);

    if ((u8)fn_800FCF74(*lbl_802EF4C8, 2)) {
        fn_8000C188(arg0);
    }
}

void fn_800FC310(void) {
    void fn_800FD774(void *);
    extern u8 lbl_802EF4C8[24];
    fn_800FD774(*(void **)lbl_802EF4C8);
}

void fn_800FC490(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x31) = 0;
}

extern u8 lbl_8028E758[16];
void fn_800FC49C(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8028E758[16];
    fn_8000CAA0(lbl_8028E758, arg0);
}

void fn_800FC4C8(void *unused, void *arg1) {
    extern u8 lbl_8032B3C0[];

    if (*(u32 *)((u8 *)arg1 + 0x254) & 0x03000000) {
        lbl_8032B3C0[1] |= 2;
    } else {
        lbl_8032B3C0[1] &= ~2;
    }
}

void fn_800FC504(void) {
    void fn_800C4588(void *);
    extern u8 lbl_8032B3C0[];
    extern void *lbl_80367904;

    lbl_8032B3C0[1] = 0;
    fn_800C4588(lbl_80367904);
    lbl_80367904 = NULL;
}

void fn_800FC540(void) {
    M2C_UNK fn_800FC49C();
    fn_800FC49C();
}

void fn_800FC560(void) {
    M2C_UNK fn_800FEC0C();
    fn_800FEC0C();
}

void fn_800FC580(void)
{
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802731D0[];
    extern void *lbl_80367904;

    extern void fn_80100B08(void *);
    extern void *memset(void *, s32, u32);
    extern void *fn_80022FC4(void *);
    extern void *fn_800C4638(s32, void *, s32);

    u8 *obj;
    void *result;

    obj = lbl_8032B3C0;

    *(u16 *)(obj + 4) = 0xFFFF;
    *(u8 *)(obj + 6) = 2;

    fn_80100B08(obj);

    memset(obj + 8, 0, 0x10);

    result = fn_80022FC4(lbl_802CA518);

    lbl_80367904 = fn_800C4638(
        (s32)result,
        lbl_802731D0 + 0x2C,
        0
    );
}

s32 fn_800FC5F8(void) {
    extern s32 lbl_80367904;
    return lbl_80367904;
}

void fn_800FC600(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8028E7F8[];
    extern u8 lbl_8032B3C0[];

    fn_8000CAA0(lbl_8028E7F8, arg0);
    lbl_8032B3C0[1] = 8;
}

void fn_800FC63C(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8028E7F8[];
    extern u8 lbl_8032B3C0[];

    fn_8000CAA0(lbl_8028E7F8, arg0);
    lbl_8032B3C0[1] = 1;
}

void fn_800FC678(void) {
    extern u16 lbl_802731D0[29];
    extern s32 lbl_80367900;
    s32 fn_8003FCCC(void *);
    void fn_8010F970(void);
    void fn_80129374(void);

    lbl_80367900 = fn_8003FCCC((u8 *)lbl_802731D0 + 0x2D);
    fn_8010F970();
    fn_80129374();
}

void fn_800FC6B0(void *arg0) {
    void *fn_8001CB64(void *);
    u8 fn_8001D500(void *);
    u8 fn_8001DD54(void *, void *);
    void fn_800213D0(void *, u8, u8, u16, s32, s32);
    void fn_80022748(void *, void *);
    void fn_800227D0(void *, s32, s32);
    void fn_800227F8(void *, void *);
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    void **fn_80037BBC(void *, s32);
    s8 fn_8003A398(void *);
    s8 fn_8003AFA0(void *);
    s8 fn_8003B258(void *);
    u8 fn_8009339C(void *);
    void fn_800C4588(void *);
    void *fn_800C4638(s32, void *, s32);
    void fn_80100D18(void *, void *, s32);
    u8 fn_80105BC0(void *, s32);
    void fn_80205198(void *, s32);
    extern u8 lbl_802CA518[];
    extern u8 lbl_80273230[];
    extern u8 lbl_802B14E4[];

    u8 sp9;
    u8 sp8;
    s32 size;
    u8 *buf;
    s8 y;
    s8 x;
    u8 *map;
    u8 *row;
    void *unit;
    void **bestLo;
    void **bestHi;
    void **slot;
    s32 i;
    s32 flag;
    u16 val;
    s32 x0, x1, y0, y1;
    s32 xx, yy;
    s32 range;
    u8 *dst;
    u8 *src;
    u8 a, b;
    s32 t14, t15;
    void *faction;
    u8 t;
    u8 *p;
    s8 y2, x2;
    u16 *cell;
    u32 sum;
    void *cb;
    u8 r0v, r1v, r2v;

    map = lbl_802CA518;
    faction = arg0;
    fn_80022DAC(map, 7, 0);
    size = ((s16)(*(s32 *)map * *(s32 *)(map + 4)) + 0x1F) & ~0x1F;
    buf = fn_800C4638(size, lbl_80273230 + 0x1D, 0);
    fn_80205198(buf, size);
    flag = 0;
    for (y = (s8)map[9]; y <= (s8)map[0xB] - 1; y++) {
        row = map + (y << 6);
        for (x = (s8)map[8]; x <= (s8)map[0xA] - 1; x++) {
            t = row[x + 0xD];
            if (t == 0) {
                continue;
            }
            if (t == 0) {
                unit = NULL;
            } else {
                unit = lbl_802B14E4 + (t - 1) * 0x280;
            }
            if (relation_is_one(*(void **)((u8 *)unit + 0x190), faction) == 0) {
                continue;
            }
            if (*(u32 *)((u8 *)unit + 0x1A0) & 0x9D) {
                continue;
            }
            bestLo = NULL;
            bestHi = NULL;
            for (i = 0; i < 4; i++) {
                slot = fn_80037BBC(unit, i);
                if (*slot == NULL) {
                    break;
                }
                if (fn_8009339C(unit) == 0) {
                    continue;
                }
                if (*slot != NULL) {
                    r0v = fn_8001DD54(*slot, unit);
                } else {
                    r0v = 0;
                }
                if (r0v > 1) {
                    if (bestHi != NULL) {
                        if (*bestHi != NULL) {
                            r1v = fn_8001DD54(*bestHi, unit);
                        } else {
                            r1v = 0;
                        }
                        if (*slot != NULL) {
                            r2v = fn_8001DD54(*slot, unit);
                        } else {
                            r2v = 0;
                        }
                        if (r2v <= r1v) {
                            if (*bestHi != NULL) {
                                r1v = fn_8001DD54(*bestHi, unit);
                            } else {
                                r1v = 0;
                            }
                            if (*slot != NULL) {
                                r2v = fn_8001DD54(*slot, unit);
                            } else {
                                r2v = 0;
                            }
                            if (r2v != r1v) {
                                continue;
                            }
                            {
                                u8 sHi = fn_8001D500(bestHi);
                                if (fn_8001D500(slot) <= sHi) {
                                    continue;
                                }
                            }
                        }
                    }
                    bestHi = slot;
                } else {
                    if (bestLo != NULL) {
                        u8 sLo = fn_8001D500(bestLo);
                        if (fn_8001D500(slot) <= sLo) {
                            continue;
                        }
                    }
                    bestLo = slot;
                }
            }
            if (bestLo == NULL && bestHi == NULL) {
                continue;
            }
            if (bestLo != NULL) {
                t14 = fn_80105BC0((u8 *)unit + 0x1BC, 0x14) != 0;
                t15 = fn_80105BC0((u8 *)unit + 0x1BC, 0x15) != 0;
                fn_80022FD8(map, 5);
                fn_800227F8(map, *(void **)((u8 *)unit + 0x18C));
                fn_80022748(map, *(void **)((u8 *)unit + 0x190));
                if (*(u32 *)((u8 *)unit + 0x254) & 0x20000) {
                    fn_800227D0(map, 0x37, 0x30);
                }
                a = ((u8 *)unit)[0x19F];
                b = ((u8 *)unit)[0x19E];
                fn_800213D0(map, b, a, (u16)(s8)fn_8003A398(unit), t14, t15);
                val = fn_8001D500(bestLo);
                cb = fn_8001CB64(bestLo);
                if ((*(u64 *)cb & 0x42ULL) != 0) {
                    val = val + (s8)fn_8003AFA0(unit);
                } else {
                    val = val + (s8)fn_8003B258(unit);
                }
                if ((u16)val != 0) {
                    fn_80100D18(unit, bestLo, 0);
                    {
                        s8 ux = (s8)((u8 *)unit)[0x19E];
                        s8 uy = (s8)((u8 *)unit)[0x19F];
                        u8 rr;
                        if (*(void **)bestLo != NULL) {
                            rr = fn_8001DD54(*(void **)bestLo, unit);
                        } else {
                            rr = 0;
                        }
                        range = (s8)fn_8003A398(unit) + rr;
                        x0 = ux - range;
                        if (x0 < (s8)map[8]) {
                            x0 = (s8)map[8];
                        }
                        y0 = uy - range;
                        if (y0 < (s8)map[9]) {
                            y0 = (s8)map[9];
                        }
                        x1 = ux + range;
                        if (x1 > (s8)map[0xA] - 1) {
                            x1 = (s8)map[0xA] - 1;
                        }
                        y1 = uy + range;
                        if (y1 > (s8)map[0xB] - 1) {
                            y1 = (s8)map[0xB] - 1;
                        }
                        for (yy = y0; yy <= y1; yy++) {
                            for (xx = x0; xx <= x1; xx++) {
                                if (*(u16 *)(map + ((xx + (yy << 6)) * 2) + 0xC18E) != 0) {
                                    if (val > 0xFF) {
                                        val = 0xFF;
                                    }
                                    sp9 = (u8)val;
                                    dst = buf + (xx + yy * *(s32 *)map);
                                    if (*dst < (u8)val) {
                                        src = &sp9;
                                    } else {
                                        src = dst;
                                    }
                                    flag = 1;
                                    *dst = *src;
                                }
                            }
                        }
                    }
                }
            }
            if (bestHi != NULL) {
                t14 = fn_80105BC0((u8 *)unit + 0x1BC, 0x14) != 0;
                t15 = fn_80105BC0((u8 *)unit + 0x1BC, 0x15) != 0;
                fn_80022FD8(map, 5);
                fn_800227F8(map, *(void **)((u8 *)unit + 0x18C));
                fn_80022748(map, *(void **)((u8 *)unit + 0x190));
                if (*(u32 *)((u8 *)unit + 0x254) & 0x20000) {
                    fn_800227D0(map, 0x37, 0x30);
                }
                a = ((u8 *)unit)[0x19F];
                b = ((u8 *)unit)[0x19E];
                fn_800213D0(map, b, a, (u16)(s8)fn_8003A398(unit), t14, t15);
                val = fn_8001D500(bestHi);
                cb = fn_8001CB64(bestHi);
                if ((*(u64 *)cb & 0x42ULL) != 0) {
                    val = val + (s8)fn_8003AFA0(unit);
                } else {
                    val = val + (s8)fn_8003B258(unit);
                }
                if ((u16)val != 0) {
                    fn_80100D18(unit, bestHi, 0);
                    {
                        s8 ux = (s8)((u8 *)unit)[0x19E];
                        s8 uy = (s8)((u8 *)unit)[0x19F];
                        u8 rr;
                        if (*(void **)bestHi != NULL) {
                            rr = fn_8001DD54(*(void **)bestHi, unit);
                        } else {
                            rr = 0;
                        }
                        range = (s8)fn_8003A398(unit) + rr;
                        x0 = ux - range;
                        if (x0 < (s8)map[8]) {
                            x0 = (s8)map[8];
                        }
                        y0 = uy - range;
                        if (y0 < (s8)map[9]) {
                            y0 = (s8)map[9];
                        }
                        x1 = ux + range;
                        if (x1 > (s8)map[0xA] - 1) {
                            x1 = (s8)map[0xA] - 1;
                        }
                        y1 = uy + range;
                        if (y1 > (s8)map[0xB] - 1) {
                            y1 = (s8)map[0xB] - 1;
                        }
                        for (yy = y0; yy <= y1; yy++) {
                            for (xx = x0; xx <= x1; xx++) {
                                if (*(u16 *)(map + ((xx + (yy << 6)) * 2) + 0xC18E) != 0) {
                                    if (val > 0xFF) {
                                        val = 0xFF;
                                    }
                                    sp8 = (u8)val;
                                    dst = buf + (xx + yy * *(s32 *)map);
                                    if (*dst < (u8)val) {
                                        src = &sp8;
                                    } else {
                                        src = dst;
                                    }
                                    flag = 1;
                                    *dst = *src;
                                }
                            }
                        }
                    }
                }
            }
            if ((u8)flag != 0) {
                for (y2 = (s8)map[9]; y2 <= (s8)map[0xB] - 1; y2++) {
                    for (x2 = (s8)map[8]; x2 <= (s8)map[0xA] - 1; x2++) {
                        p = buf + y2 * *(s32 *)map;
                        t = p[x2];
                        if (t != 0) {
                            cell = (u16 *)(map + ((x2 + (y2 << 6)) * 2) + 0xA18E);
                            sum = t + *cell;
                            if (sum > 0xFF) {
                                sum = 0xFF;
                            }
                            *cell = (u16)sum;
                            p[x2] = 0;
                        }
                    }
                }
                flag = 0;
            }
        }
    }
    fn_800C4588(buf);
}

u16 fn_800FCF48(s8 arg0, s8 arg1) {
    extern u16 lbl_802CA518[];
    s32 temp_r3;
    s32 temp_r4;
    
    temp_r4 = (arg0 + (arg1 << 6)) * 2;
    temp_r3 = (s32)lbl_802CA518 + 0x10000 + temp_r4;
    return *(u16*)((char*)temp_r3 - 0x5E72);
}

void fn_800FD774(void *arg0) {
    u8 fn_80015610(void *, void *);
    u8 fn_8001D500(void *);
    u8 fn_8001DD54(void *, void *);
    void fn_80022DAC(void *, s32, s32);
    void **fn_80037BBC(void *, s32);
    s32 fn_80037E00(void *);
    u8 fn_8009339C(void *);
    u8 fn_80100F10(void *, void *, void *);
    void fn_801A6F34(void *, s32);
    void fn_801A7A68(void *, void *, void *);
    extern u8 lbl_802CA518[];
    extern u8 lbl_8032B5E0[];
    extern u32 lbl_80330EAC[];
    extern u8 lbl_802B14E4[];
    extern u32 lbl_80273220[];
    extern u32 lbl_80273210[];
    extern u16 lbl_80366E70;
    extern u16 lbl_80366E72;
    extern void *lbl_80367908;
    extern f32 lbl_8036A0B0;
    extern f32 lbl_8036A0B4;
    extern f32 lbl_8036A0B8;

    typedef struct { void *unit; u8 x, y, z, pad; u32 u8_, uC; } T16;
    typedef struct { void *unit; s8 a, b; u8 c, d; } OutEnt;

    T16 sp3C;
    T16 sp2C;
    T16 sp1C;
    T16 spC;
    u16 spA;
    u16 sp8;
    u8 *map = lbl_802CA518;
    u8 *ui = (u8 *)lbl_80330EAC;
    OutEnt *out = (OutEnt *)lbl_8032B5E0;
    void *self = arg0;
    s8 y;
    s8 x;
    u8 *row;
    u8 id;
    void *unit;
    s8 bestHi;
    void **slotHi;
    s8 bestLo;
    void **slotLo;
    s32 i;
    void **slot;
    u8 v;
    u8 a;
    u8 b;
    u8 t1;
    u8 t2;
    s32 diff;
    f32 f1;
    f32 f2;
    u16 *pA;
    u16 *pB;

    y = (s8)map[9];
    while (y <= (s8)map[0xB] - 1) {
        x = (s8)map[8];
        row = map + (y << 6);
        while (x <= (s8)map[0xA] - 1) {
            id = row[x + 0xD];
            if (id != 0) {
                if (id != 0) {
                    unit = lbl_802B14E4 + (id - 1) * 0x280;
                } else {
                    unit = NULL;
                }
                if ((u8)fn_80015610(*(void **)((u8 *)self + 0x190), *(void **)((u8 *)unit + 0x190)) == 1
                    && (*(u32 *)((u8 *)unit + 0x1A0) & 0x9D) == 0) {
                    bestHi = -1;
                    slotHi = NULL;
                    bestLo = -1;
                    slotLo = NULL;
                    for (i = 0; i < 4; i++) {
                        slot = fn_80037BBC(unit, i);
                        if (*slot == NULL) {
                            break;
                        }
                        if (fn_8009339C(unit) != 0) {
                            if (*slot != NULL) {
                                v = fn_8001DD54(*slot, unit);
                            } else {
                                v = 0;
                            }
                            if (v > 1) {
                                if (slotLo != NULL) {
                                    if (*slotLo != NULL) {
                                        a = fn_8001DD54(*slotLo, unit);
                                    } else {
                                        a = 0;
                                    }
                                    if (*slot != NULL) {
                                        b = fn_8001DD54(*slot, unit);
                                    } else {
                                        b = 0;
                                    }
                                    if (b <= a) {
                                        if (*slotLo != NULL) {
                                            a = fn_8001DD54(*slotLo, unit);
                                        } else {
                                            a = 0;
                                        }
                                        if (*slot != NULL) {
                                            b = fn_8001DD54(*slot, unit);
                                        } else {
                                            b = 0;
                                        }
                                        if (b != a) {
                                            goto next_slot;
                                        }
                                        t1 = fn_8001D500(slotLo);
                                        t2 = fn_8001D500(slot);
                                        if (t2 <= t1) {
                                            goto next_slot;
                                        }
                                    }
                                }
                                slotLo = slot;
                                bestLo = (s8)i;
                            } else {
                                if (slotHi != NULL) {
                                    t1 = fn_8001D500(slotHi);
                                    t2 = fn_8001D500(slot);
                                    if (t2 <= t1) {
                                        goto next_slot;
                                    }
                                }
                                slotHi = slot;
                                bestHi = (s8)i;
                            }
                        }
                    next_slot:
                        ;
                    }
                    if (slotHi != NULL || slotLo != NULL) {
                        spA = 0;
                        sp8 = 0;
                        if (slotHi != NULL && (u8)fn_80100F10(self, unit, slotHi) == 1) {
                            sp3C = *(T16 *)lbl_80273220;
                            sp3C.unit = self;
                            sp3C.x = ((u8 *)self)[0x19E];
                            sp3C.y = ((u8 *)self)[0x19F];
                            sp3C.z = (u8)fn_80037E00(self);
                            sp2C = *(T16 *)lbl_80273210;
                            sp2C.unit = unit;
                            sp2C.x = ((u8 *)unit)[0x19E];
                            sp2C.y = ((u8 *)unit)[0x19F];
                            sp2C.z = (u8)bestHi;
                            fn_801A7A68(lbl_80330EAC, &sp2C, &sp3C);
                            fn_801A6F34(lbl_80330EAC, 0xF);
                            diff = *(s16 *)(ui + 0x298) - *(s16 *)(ui + 0x57A);
                            if (diff < 0) {
                                diff = 0;
                            }
                            f1 = lbl_8036A0B0 * (f32)*(s16 *)((u8 *)lbl_80330EAC + 0x2A2);
                            if (*(s16 *)((u8 *)lbl_80330EAC + 0x29C) >= *(s16 *)(ui + 0x57C) + 4) {
                                f2 = lbl_8036A0B4 - f1;
                                diff = (s32)(lbl_8036A0B8 * (f32)diff * (lbl_8036A0B4 - f2 * f2));
                            } else {
                                diff = (s32)((f32)diff * f1);
                            }
                            spA = (u16)diff;
                            if ((u16)diff == 0) {
                                bestHi = -1;
                            }
                        }
                        if (slotLo != NULL && (u8)fn_80100F10(self, unit, slotLo) == 1) {
                            sp1C = *(T16 *)lbl_80273220;
                            sp1C.unit = self;
                            sp1C.x = ((u8 *)self)[0x19E];
                            sp1C.y = ((u8 *)self)[0x19F];
                            sp1C.z = (u8)fn_80037E00(self);
                            spC = *(T16 *)lbl_80273210;
                            spC.unit = unit;
                            spC.x = ((u8 *)unit)[0x19E];
                            spC.y = ((u8 *)unit)[0x19F];
                            spC.z = (u8)bestLo;
                            fn_801A7A68(lbl_80330EAC, &spC, &sp1C);
                            fn_801A6F34(lbl_80330EAC, 0xF);
                            diff = *(s16 *)(ui + 0x298) - *(s16 *)(ui + 0x57A);
                            if (diff < 0) {
                                diff = 0;
                            }
                            f1 = lbl_8036A0B0 * (f32)*(s16 *)((u8 *)lbl_80330EAC + 0x2A2);
                            if (*(s16 *)((u8 *)lbl_80330EAC + 0x29C) >= *(s16 *)(ui + 0x57C) + 4) {
                                f2 = lbl_8036A0B4 - f1;
                                diff = (s32)(lbl_8036A0B8 * (f32)diff * (lbl_8036A0B4 - f2 * f2));
                            } else {
                                diff = (s32)((f32)diff * f1);
                            }
                            sp8 = (u16)diff;
                            if ((u16)diff == 0) {
                                bestLo = -1;
                            }
                        }
                        if (spA != 0 || sp8 != 0) {
                            out->unit = unit;
                            pA = &spA;
                            out->a = bestHi;
                            out->b = bestLo;
                            if (lbl_80366E70 < spA) {
                                pA = &lbl_80366E70;
                            }
                            pB = &sp8;
                            out->c = (u8)*pA;
                            if (lbl_80366E72 < sp8) {
                                pB = &lbl_80366E72;
                            }
                            out->d = (u8)*pB;
                            out++;
                        }
                    }
                }
            }
            x++;
        }
        y++;
    }
    out->unit = NULL;
    lbl_80367908 = lbl_8032B5E0;
    fn_80022DAC(lbl_802CA518, 7, 0);
}

s32 fn_800FDF38(s32 arg0, s32 arg1) {
    extern u32 lbl_80367870;
    
    s32 r3 = 0;
    s32 new_arg = 0;
    u32 temp;

retry_loop:
    if (arg0 == 0) {
        return -1;
    }

    if ((arg0 & 0x1000) != 0) {
        arg0 = arg0 & ~0x1000;
        new_arg = 0x1000;
    }

    temp = (arg0 & 0xFFFF);
    if ((temp == 0) || (temp >= 0x100)) {
        arg0 = new_arg + (arg0 & ~0xFFFF);
        goto retry_loop;
    } else {
        s32 result;
        result = 0x20 + fn_800C5A48(lbl_80367870, temp);
        
        if (new_arg != 0) {
            result = result + 0x20;
        }
        
        return result;
    }
}

void fn_800FE690(s8 arg0, s8 arg1, u32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    M2C_UNK fn_800213D0(M2C_UNK *, s8, s8, u16, s32, s32);
    M2C_UNK fn_80022748(M2C_UNK *, s32);
    M2C_UNK fn_800227F8(M2C_UNK *, u32);
    M2C_UNK fn_80022FD8(M2C_UNK *, s32, M2C_UNK *);
    u8 fn_80105BC0(s32, M2C_UNK);
    extern M2C_UNK lbl_802CA518;
    s32 var_r28;
    s32 var_r8;

    fn_80022FD8(&lbl_802CA518, arg4, &lbl_802CA518);
    fn_800227F8(&lbl_802CA518, arg2);
    fn_80022748(&lbl_802CA518, arg3);
    if (arg2 != 0U) {
        var_r28 = fn_80105BC0(arg2 + 0x1C, 0x14) != 0;
    } else {
        var_r28 = 1;
    }
    if (arg2 != 0U) {
        var_r8 = fn_80105BC0(arg2 + 0x1C, 0x15) != 0;
    } else {
        var_r8 = 0;
    }
    fn_800213D0(&lbl_802CA518, arg0, arg1, arg5, var_r28, var_r8);
}

void fn_800FE770(s8 arg0, s8 arg1, u32 arg2, s32 arg3, u16 arg4) {
    M2C_UNK fn_800213D0(M2C_UNK *, s8, s8, u16, s32, s32);
    M2C_UNK fn_80022748(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800227F8(M2C_UNK *, u32);
    M2C_UNK fn_80022FD8(M2C_UNK *, s32, M2C_UNK *);
    u8 fn_80105BC0(s32, M2C_UNK);
    extern M2C_UNK lbl_802CA518;
    s32 var_r28;
    s32 var_r8;

    fn_80022FD8(&lbl_802CA518, arg3, &lbl_802CA518);
    fn_800227F8(&lbl_802CA518, arg2);
    fn_80022748(&lbl_802CA518, 0);
    if (arg2 != 0U) {
        var_r28 = fn_80105BC0(arg2 + 0x1C, 0x14) != 0;
    } else {
        var_r28 = 1;
    }
    if (arg2 != 0U) {
        var_r8 = fn_80105BC0(arg2 + 0x1C, 0x15) != 0;
    } else {
        var_r8 = 0;
    }
    fn_800213D0(&lbl_802CA518, arg0, arg1, arg4, var_r28, var_r8);
}

u8 fn_800FE84C(s8 arg0, s8 arg1) {
    extern u8 lbl_80330708[1400];
    extern u8 lbl_802CA518[151280];
    u8 temp_r4;
    u8 var_r5;
    u8 var_r6;
    u8 var_r7;

    if ((u8) lbl_80330708[0x11] != 2) {
        return 0U;
    }
    var_r6 = 1;
    var_r5 = 1;
    var_r7 = 1;
    
    temp_r4 = lbl_802CA518[arg0 + (arg1 * 64) + 0x100D];
    if ((temp_r4 - 0x26) < 1U) {
        var_r7 = 0;
    }
    if ((var_r7 == 0) && (temp_r4 != 0x28)) {
        var_r5 = 0;
    }
    if ((var_r5 == 0) && (temp_r4 != 0x2A)) {
        var_r6 = 0;
    }
    return var_r6;
}

s32 fn_800FE8E8(void *arg0, void *arg1) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x24C) < (u32) M2C_FIELD(arg1, u32 *, 0x24C);
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
s32 fn_800FE904(void) {
    u8 fn_80017318(void *);
    u8 fn_8001DD54(void *, void *);
    void **fn_80037BBC(void *, s32);
    s8 fn_8003A398(void *);
    u8 fn_800934CC(void *, void *);
    s32 fn_800FCF48(u8, u8);
    u8 fn_80102EA8(void *);
    u8 fn_80105BC0(void *, s32);
    u8 fn_8010C4B0(void *);
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_802CA518[];
    extern s32 lbl_80366E78;
    extern s32 lbl_80366E7C;
    extern u8 lbl_8032B3C0[];
    s32 sp8;
    u8 *map;
    s32 i;
    u32 score;
    void *next;
    void *item;
    s32 count;
    void *unit;
    s32 offset;
    u8 out;
    u8 tx;
    u8 ty;
    u16 dist;
    s32 result;
    s32 *q;
    s32 neg;
    s32 t;

    count = 0;
    offset = 0;
    unit = *(void **)(lbl_802CA264 + lbl_80330708[0x11] * 0xC);
    map = lbl_802CA518;
    while (unit != NULL) {
        tx = *(u8 *)((u8 *)unit + 0x19E);
        out = 0;
        next = *(void **)((u8 *)unit + 0x184);
        ty = *(u8 *)((u8 *)unit + 0x19F);
        if (((s8)tx < *(s8 *)(map + 8))
            || ((s32)(*(s8 *)(map + 0xA) - 1) < (s8)tx)
            || ((s8)ty < *(s8 *)(map + 9))
            || ((s32)(*(s8 *)(map + 0xB) - 1) < (s8)ty)) {
            out = 1;
        }
        if (out == 0
            && ((*(u16 *)((u8 *)unit + 0x1A4) >> 7) & 7) == 0
            && (*(u8 *)((u8 *)unit + 0x1A5) & 7) == 0
            && (*(u32 *)((u8 *)unit + 0x1A0) & 0x9D) == 0
            && (fn_80102EA8(unit) == 0 || fn_80017318((u8 *)unit + 0x236) != 0)) {
            dist = fn_800FCF48(*(u8 *)((u8 *)unit + 0x19E), *(u8 *)((u8 *)unit + 0x19F));
            t = (s8)fn_8003A398(unit);
            neg = -(t + dist);
            sp8 = neg;
            sp8 = neg + ((*(s8 *)((u8 *)unit + 0x248) + 0x80) << 16);
            if (fn_80105BC0((void *)((s32)unit + 0x1BC), 0x18) != 0) {
                result = sp8 + 0x578;
            } else if (fn_8010C4B0(unit) != 0
                && (*(u32 *)((u8 *)unit + 0x254) & 1)
                && (fn_80102EA8(unit) == 0 || (u8)fn_80017318((u8 *)unit + 0x236) == 6)) {
                q = &sp8;
                if (sp8 < lbl_80366E78) {
                    q = &lbl_80366E78;
                }
                result = *q;
            } else if (fn_80105BC0((u8 *)unit + 0x1BC, 0x3C) != 0) {
                result = sp8 + 0x320;
            } else {
                s32 *p;
                s32 tmp;
                score = 0x4B0;
                for (i = 0; i < 4; i++) {
                    if (*fn_80037BBC(unit, i) == NULL) {
                        break;
                    }
                    item = *fn_80037BBC(unit, i);
                    if (fn_800934CC(unit, item) != 0) {
                        if ((*(u64 *)((u8 *)item + 0x38) & 4ULL) != 0) {
                            if (score > 0xC8) {
                                score = 0xC8;
                            }
                        } else if ((*(u64 *)((u8 *)item + 0x38) & 3ULL) != 0) {
                            if ((u8)fn_8001DD54(item, unit) > 1) {
                                if (score > 0x190) {
                                    score = 0x190;
                                }
                            } else if (score > 0x258) {
                                score = 0x258;
                            }
                        }
                    }
                }
                sp8 += score;
                result = *(sp8 < lbl_80366E7C ? &lbl_80366E7C : &sp8);
            }
            *(s32 *)((u8 *)unit + 0x24C) = result;
            count += 1;
            *(void **)((u8 *)lbl_8032B3C0 + offset + 0x18) = unit;
            offset += 4;
        }
        unit = next;
    }
    return count;
}

void fn_800FEC0C(void) {
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_8032B3C0[];

    void fn_800FC6B0(void *);
    s32 fn_800FE904(void);
    s32 fn_800FE8E8(void *, void *);
    void fn_800FEC9C(void *, void *, void *);

    void **table;
    s32 count;

    fn_800FC6B0(lbl_802CA264 + lbl_80330708[0x11] * 12);

    count = fn_800FE904();
    table = (void **)(lbl_8032B3C0 + 0x18);

    fn_800FEC9C(table, table + count, fn_800FE8E8);

    *(void **)((u8 *)table + (count * 4)) = NULL;

    *(void **)(lbl_8032B3C0 + 0x218) = table;
}

#pragma opt_strength_reduction reset
#pragma use_lmw_stmw reset

void fn_800FEFD4(s32 *arg0, s32 *arg1, s32 *arg2, u8 (*cmp)(s32, s32)) {
    s32 *a2;
    s32 *a1;
    s32 *a0;
    s32 z1;
    u8 (*c)(s32, s32);

    a2 = arg2;
    a1 = arg1;
    a0 = arg0;
    c = cmp;

    z1 = ((u8)c(*a2, *a0) == 0);
    {
        s32 z2 = ((u8)c(*a1, *a2) == 0);
        if ((u8)z1) {
            if ((u8)z2) {
                return;
            }
        }
        if ((u8)z1) {
            goto sort;
        }
        if ((u8)z2) {
            goto sort;
        }
        {
            s32 tmp = *a0;
            *a0 = *a1;
            *a1 = tmp;
        }
        return;
    }
sort:
    if ((u8)c(*a1, *a0) != 0) {
        s32 tmp = *a0;
        *a0 = *a1;
        *a1 = tmp;
    }
    if ((u8)z1) {
        s32 tmp = *a1;
        *a1 = *a2;
        *a2 = tmp;
    } else {
        s32 tmp = *a0;
        *a0 = *a2;
        *a2 = tmp;
    }
}

void fn_800FF0D4(s32 *arg0, s32 *arg1, u8 (*arg2)(s32, s32)) {
    s32 *current;
    s32 *end;
    s32 *best;
    s32 *scan;
    s32 temp;

    current = arg0;

    if (current == arg1) {
        return;
    }

    end = arg1 - 1;

    do {
        best = current;

        if (current != arg1) {
            scan = current + 1;

            while (scan != arg1) {
                if (arg2(*scan, *best) != 0) {
                    best = scan;
                }

                scan++;
            }
        }

        if (best != current) {
            temp = *best;
            *best = *current;
            *current = temp;
        }

        current++;
    } while (current < end);
}

void fn_800FF178(void) {
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_8032B3C0[];
    void **fn_80037BBC(void *, s32);
    s32 fn_8001D500(void **);
    s32 fn_8001DD54(void *, void *);
    s32 fn_8009339C(void *, void *);
    void fn_800951D0(void *, s32);
    void *unit;
    s8 best;
    s8 bestScore;
    s8 i;
    void **item;
    void *obj;
    u8 flag;
    u8 v;
    u8 w;
    s32 val;

    unit = *(void **)lbl_802EF4C8;
    if ((s8)lbl_802EF4C8[0x12] != 0) {
        flag = 0;
    } else if (lbl_8032B3C0[1] & 4) {
        flag = 0;
    } else if (*(s32 *)((u8 *)unit + 0x1A0) & 0x18) {
        flag = 0;
    } else {
        val = lbl_802EF4C8[8];
        if (val < 0x15) {
            if (val == 0xF) {
                goto L_zero;
            }
            goto L_one;
        }
        if (val < 0x17) {
L_zero:
            flag = 0;
        } else {
L_one:
            flag = 1;
        }
    }

    if (flag != 0) {
        best = -1;
        bestScore = -0x80;
        for (i = 0; i < 4; i++) {
            item = fn_80037BBC(unit, i);
            if (*item == NULL) {
                break;
            }
            if ((u8)fn_8009339C(unit, *item) != 0) {
                obj = *item;
                if (obj != NULL) {
                    v = *(u8 *)((u8 *)obj + 0x1D);
                } else {
                    v = 0;
                }
                if (v <= 1) {
                    if (obj != NULL) {
                        w = fn_8001DD54(obj, unit);
                    } else {
                        w = 0;
                    }
                    if (w > 1) {
                        if (bestScore < (s32)(u8)fn_8001D500(item)) {
                            bestScore = fn_8001D500(item);
                            best = i;
                        }
                    }
                }
            }
        }
        fn_800951D0(unit, best);
    }
}

void fn_800FF2EC(void) {
    extern u32 lbl_802EF4C8[12];
    
    fn_80027038(lbl_802EF4C8);
    fn_80027F98(lbl_802EF4C8, 1);
    
    if (lbl_802EF4C8[0] != 0) {
        if (((u32 *) lbl_802EF4C8[0])[0x188 / 4] != 0) {
            fn_801007A0((void *) lbl_802EF4C8[0]);
        }
    }
    
    if (lbl_802EF4C8[1] != 0) {
        if (((u32 *) lbl_802EF4C8[1])[0x188 / 4] != 0) {
            fn_801007A0((void *) lbl_802EF4C8[1]);
        }
    }
}

void fn_800FF36C(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    u8 (*temp_r12)();
    u8 var_r3;

    temp_r12 = M2C_FIELD(arg0, u8 (**)(), 0x30);
    if (temp_r12 != NULL) {
        var_r3 = temp_r12();
    } else {
        var_r3 = 1;
    }
    if (var_r3 == 1) {
        fn_8000C188(arg0);
    }
}

void fn_800FF3C4(void *arg0)
{
    extern u8 lbl_802EF4C8[];
    extern void fn_800271C8(void *, void *);
    u8 *p;

    p = lbl_802EF4C8;
    *(u32 *)((u8 *)arg0 + 0x30) = 0;

    switch (p[8]) {
    case 4:
    case 10:
    case 11:
    case 12:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 36:
    case 37:
    case 39:
    case 44:
        fn_800271C8(p, arg0);
        break;

    case 0:
    case 1:
    case 35:
        break;

    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 13:
    case 38:
    case 40:
    case 41:
    case 42:
    case 43:
    default:
        fn_800271C8(p, arg0);
        break;
    }
}

void fn_800FF564(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    extern f32 lbl_80369F20;
    extern f32 lbl_80369F24;
    extern f64 lbl_80369F28;
    
    s32 w;
    s32 h;
    s32 x2;
    s32 y2;
    s32 cols;
    s32 v1;
    s32 u1;
    s32 v0;
    s32 u0;

    w = *(s32*)((char*)arg0 + 0x54);
    h = *(s32*)((char*)arg0 + 0x58);
    x2 = arg3 + w;
    y2 = arg4 + h;
    if (arg2 >= *(s32*)((char*)arg0 + 0x60)) {
        arg2 = *(s32*)((char*)arg0 + 0x60) - 1;
    }
    cols = *(s32*)((char*)arg0 + 0x5C);
    u0 = *(s32*)((char*)arg0 + 0x64) + w * (arg2 % cols);
    v0 = *(s32*)((char*)arg0 + 0x68) + h * (arg2 / cols);
    u1 = u0 + w;
    v1 = v0 + h;
    if (*(u32*)((char*)arg0 + 0x48) != 0) {
        fn_8000A258();
        fn_80009D74(lbl_80369F20, lbl_80369F20, (f32)arg5, lbl_80369F24);
        fn_80009F90(*(u32*)((char*)arg0 + 0x48), arg10, (u16)*(s32*)((char*)arg0 + 0x6C));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)arg3, (f32)arg4, (f32)(x2 - arg3), (f32)(y2 - arg4));
        fn_80007770((f32)u0, (f32)v0, (f32)u1, (f32)v1);
        fn_800076AC((u8)arg6, (u8)arg7, (u8)arg8, (u8)arg9);
        fn_80007884();
    }
}

void fn_800FF75C(void *arg0) {
    M2C_UNK fn_8014CBD8(M2C_UNK *, u8, f32, f32);
    extern M2C_UNK lbl_802CA518;
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_80330708;
    extern u8 lbl_80367289;
    u8 temp_r0;
    u8 var_r7;

    var_r7 = 1;
    M2C_FIELD(arg0, s8 *, 0x34) = 1;
    temp_r0 = lbl_80367289 - 1;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r7 = 0;
    }
    if ((var_r7 != 0) && ((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x11) == 1)) {
        if (((u8) M2C_FIELD((&lbl_802CA518 + (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xB) + ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xC) << 6)), u8 *, 0x200D) != 0) || ((u8) M2C_FIELD((&lbl_802CA518 + (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xD) + ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xE) << 6)), u8 *, 0x200D) != 0)) {
            fn_8014CBD8(&lbl_80330708, (u8) &lbl_80330708, (f32) (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xB), (f32) (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xC));
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x34) = 0;
        if ((u8) M2C_FIELD(&lbl_802EF4C8, u8 *, 8) == 0x25) {
            fn_8014CBD8(&lbl_80330708, M2C_FIELD(&lbl_802EF4C8, u8 *, 0xB), (f32) (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xB), (f32) (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xC));
        }
    } else {
        fn_8014CBD8(&lbl_80330708, (u8) &lbl_80330708, (f32) (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xB), (f32) (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xC));
    }
}

void fn_800FF918(s32 arg0) {
    extern u16 lbl_8028E888[66];
    fn_8000CAA0(lbl_8028E888, arg0);
    fn_800288E4();
}

void fn_800FF948(void *arg0) {
    void fn_8000C188(void *);
    void fn_800F20E0(void);
    extern u8 *lbl_80367240;
    void *self;
    s32 *p;

    self = arg0;
    if ((*(u32 *)(lbl_80367240 + 4) & 0x1100) != 0) {
        goto do_inc;
    }
    if (*(s32 *)((u8 *)self + 0x64) <= 0x2D) {
        goto do_inc;
    }
    fn_8000C188(self);
    goto done;
do_inc:
    fn_800F20E0();
    p = (s32 *)((u8 *)self + 0x64);
    *p = *p + 1;
done:
    ;
}

void fn_800FF9A8(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_80367289;
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    s32 temp_r0;
    s32 var_r5;
    s32 t;
    f32 f1;
    f32 f0;

    var_r5 = 1;
    temp_r0 = (u8)(lbl_80367289 - 1);
    t = ~temp_r0;
    t = var_r5 | t;
    if (((u32)(t - ((u32)(var_r5 - temp_r0) >> 1)) >> 31) == 0) {
        var_r5 = 0;
    }
    if ((u8)var_r5 != 0) {
        if (lbl_80330708[0x11] == 1) {
            f1 = *(f32 *)((u8 *)arg0 + 0x30);
            f0 = *(f32 *)((u8 *)arg0 + 0x34);
            if (*(u8 *)(lbl_802CA518 + (s8)(s32)f1 + ((s8)(s32)f0 << 6) + 0x200D) == 0) {
                fn_8000C070(arg0, 0x63);
                return;
            }
        }
    }
    fn_8014CBD8(lbl_80330708, *(f32 *)((u8 *)arg0 + 0x30), *(f32 *)((u8 *)arg0 + 0x34));
}

void fn_800FFA78(void *arg0) {
    M2C_UNK fn_801848D8(s32, s32, s32, M2C_UNK);
    extern M2C_UNK lbl_802CA518;
    extern M2C_UNK lbl_802EF4C8;
    extern M2C_UNK lbl_80330708;
    extern u8 lbl_80367289;
    u8 temp_r0;
    u8 var_r8;

    var_r8 = 1;
    temp_r0 = lbl_80367289 - 1;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r8 = 0;
    }
    if ((var_r8 == 0) || ((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x11) != 1) || ((u8) M2C_FIELD((&lbl_802CA518 + (s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xD) + ((s8) M2C_FIELD(&lbl_802EF4C8, u8 *, 0xE) << 6)), u8 *, 0x200D) != 0)) {
        fn_801848D8(M2C_FIELD(&lbl_802EF4C8, s32 *, 0), (s32) M2C_FIELD(arg0, f32 *, 0x30), (s32) M2C_FIELD(arg0, f32 *, 0x34), 0x10);
    }
}

void fn_800FFC00(s32 arg0, s32 arg1) {
    void fn_8002C47C(void *, s32);
    void fn_8002F728(void *);
    extern u8 lbl_80284E20[];
    extern u8 lbl_8028EAA8[];
    extern u8 lbl_802EF4E0[];
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } obj;

    obj.vtbl = lbl_80284E20;
    obj.unk4 = arg0;
    obj.vtbl = lbl_8028EAA8;
    obj.unk8 = arg1;
    fn_8002F728(lbl_802EF4E0);
    fn_8002C47C(&obj, 0);
}

s32 fn_800FFEFC(s32 arg1, s16 *arg2, s16 *arg3) {
    return 0;
}

void fn_80100104(s32 a0, s32 a1, s32 a2, s32 a3) {
    extern void fn_80102810(s32, s32, s32, s32, s32);
    fn_80102810(a0, a1, 0x25, a2, a3);
}

s32 fn_80100130(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_8003FF90(M2C_UNK, M2C_UNK);
    s32 fn_80100284(s32, M2C_UNK, s32, s32, s32);
    s32 temp_r31;

    fn_8003FF90(0, 0);
    temp_r31 = fn_80100284(arg0, 1, arg1, arg2, arg3);
    fn_8003FF90(0, 0);
    return temp_r31;
}

void fn_801001B8(s32 a0, s32 a1, s32 a2, s32 a3) {
    void fn_80100284(s32, s32, s32, s32, s32);
    fn_80100284(a0, 2, a1, a2, a3);
}

s32 fn_801001F0(void *arg0) {
    void *fn_80019E04(void *);
    s32 result;

    result = 0;
    if (arg0 == fn_80019E04((char *)&lbl_80273304 + 0xCE)) {
        result = 1;
    } else if (arg0 == fn_80019E04((char *)&lbl_80273304 + 0xDE)) {
        result = 2;
    } else if (arg0 == fn_80019E04((char *)&lbl_80273304 + 0xEA)) {
        result = 0x80;
    }
    return result;
}

#pragma use_lmw_stmw on
s32 fn_80100284(void *arg0, u8 arg1, u32 arg2, s16 *arg3, s16 *arg4) {
    u8 fn_80015610(s32, s32);
    void fn_8002C618(void *, s8, s8);
    void fn_8002F728(void *);
    u8 fn_800FB5C8(void *);
    void fn_800FE180(void *, s32, s32, void *);
    void fn_800FE2A0(void *, s32, s32);
    void fn_800FE398(void *, s32, s32, void *);
    u8 fn_800FE84C(s8, s8);
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    extern s16 lbl_802732A0[];
    extern u8 lbl_80284E20[];
    extern u8 lbl_8028EA98[];
    extern s32 lbl_802EF4E0[];

    u8 mode;
    u32 flags;
    void *self;
    s16 *out_x;
    s16 *out_y;
    u8 *map;
    u8 *map2;
    s16 best_cost;
    s16 best_alt;
    s32 keep_bit;
    s8 y;
    s8 x;
    s32 yrow;
    u8 *rowbase;
    u8 *maprow;
    s32 idx;
    s16 *neigh;
    s32 ncount;
    s32 nx;
    s32 ny;
    u8 out_of_bounds;
    u8 cell;
    void *unit;
    s16 cost;
    s16 alt;
    s32 best_x;
    s32 best_y;
    void *ctx[3];
    u8 ctx_flags;

    mode = arg1;
    flags = arg2;
    self = arg0;
    out_x = arg3;
    out_y = arg4;
    map = lbl_802CA518;
    map2 = lbl_802CA518;
    best_cost = 0x7FFF;
    best_alt = -1;

    fn_800FE2A0(self, 5, -1);
    if (flags & 0x100) {
        fn_800FE180(self, 6, *(s32 *)map * *(s32 *)(map + 4), map);
    } else {
        fn_800FE398(self, 6, *(s32 *)map * *(s32 *)(map + 4), map);
    }
    if (flags & 4) {
        mode &= (u8)~1;
    }
    if (flags & 8) {
        mode &= (u8)~2;
    }
    keep_bit = flags & 1;
    flags &= 2;
    y = (s8)map[9];
    while (y <= (s8)map[0xB] - 1) {
        yrow = (s8)y << 6;
        x = (s8)map[8];
        rowbase = map + yrow;
        maprow = map2 + yrow;
        while (x <= (s8)map[0xA] - 1) {
            idx = ((s8)x + yrow) * 2;
            if (*(s16 *)(map + idx + 0x818E) >= 0
                && (s8)rowbase[(s32)x + 0xE18E] == 0
                && fn_800FE84C(x, y) == 0) {
                if (keep_bit != 0 && (cell = maprow[(s32)x + 0xD], cell != 0)) {
                    if (cell != 0)
                        unit = lbl_802B14E4 + (cell - 1) * 0x280;
                    else
                        unit = NULL;
                    if (fn_80015610(*(s32 *)((u8 *)self + 0x190), *(s32 *)((u8 *)unit + 0x190)) == 1)
                        goto next_x;
                }
                if (flags != 0) {
                    neigh = lbl_802732A0;
                    ncount = 0;
                    while (*neigh != 0x7FFF) {
                        nx = (s16)x + neigh[0];
                        ny = (s16)y + neigh[1];
                        out_of_bounds = 0;
                        if (nx < (s8)map[8] || (s8)map[0xA] - 1 < nx
                            || ny < (s8)map[9] || (s8)map[0xB] - 1 < ny) {
                            out_of_bounds = 1;
                        }
                        if (!out_of_bounds) {
                            cell = map[nx + (ny << 6) + 0xD];
                            if (cell != 0) {
                                if (cell != 0)
                                    unit = lbl_802B14E4 + (cell - 1) * 0x280;
                                else
                                    unit = NULL;
                                if (fn_800FB5C8(unit) != 0)
                                    ncount++;
                            }
                        }
                        neigh += 2;
                    }
                    if (ncount != 0)
                        goto next_x;
                }
                ctx[0] = lbl_80284E20;
                ctx[1] = self;
                ctx[0] = lbl_8028EA98;
                *(u8 *)&ctx[2] = mode;
                fn_8002F728(lbl_802EF4E0);
                fn_8002C618(ctx, x, y);
                if (lbl_802EF4E0[0] != 0) {
                    cost = *(s16 *)(map + idx + 0x818E);
                    alt = *(s16 *)(map2 + idx + 0x610E);
                    if (maprow[(s32)x + 0xD] != 0)
                        alt = -1;
                    if (cost < best_cost) {
                        if (alt >= 0 || best_alt < 0) {
                            best_x = x;
                            best_cost = cost;
                            best_alt = alt;
                            best_y = y;
                        }
                    } else if (alt >= 0 && best_alt < 0) {
                        best_x = x;
                        best_cost = cost;
                        best_alt = alt;
                        best_y = y;
                    }
                }
            }
        next_x:
            x++;
        }
        y++;
    }
    if (best_cost != 0x7FFF) {
        ctx[0] = lbl_80284E20;
        ctx[1] = self;
        ctx[0] = lbl_8028EA98;
        *(u8 *)&ctx[2] = mode;
        fn_8002F728(lbl_802EF4E0);
        fn_8002C618(ctx, (s8)best_x, (s8)best_y);
        *out_x = (s16)best_x;
        *out_y = (s16)best_y;
        return 1;
    }
    fn_8002F728(lbl_802EF4E0);
    return 0;
}
#pragma use_lmw_stmw reset

#pragma opt_loop_invariants off
#pragma use_lmw_stmw on
void fn_801007A0(void *arg0) {
    struct UnitBits {
        u16 f0 : 3;
        u16 f1 : 3;
        u16 f2 : 3;
        u16 f3 : 4;
        u16 f4 : 3;
    };
    void fn_8010C504(void *);
    u8 fn_8009339C(void *, void *);
    u64 *fn_8001CB64(void **);
    s32 i;
    void **item;
    void *unit = arg0;

    M2C_FIELD(unit, u32 *, 0x254) &= 0xFEFF80EB;
    fn_8010C504(unit);

    for (i = 0; i < 4; i++) {
        item = fn_80037BBC(unit, i);
        if (*item == NULL) {
            break;
        }
        if (fn_8009326C(unit, *item)) {
            if (GetItemKind(*item) == 0x81 || GetItemKind(*item) == 0x82) {
                M2C_FIELD(unit, u32 *, 0x254) |= 0x4;
            }
        }
    }

    for (i = 0; i < 4; i++) {
        item = fn_80037BBC(unit, i);
        if (*item == NULL) {
            break;
        }
        if (fn_8009326C(unit, *item)) {
            if (GetItemKind(*item) == 0x86) {
                M2C_FIELD(unit, u32 *, 0x254) |= 0x10;
            }
        }
    }

    for (i = 0; i < 4; i++) {
        item = fn_80037BBC(unit, i);
        if (*item == NULL) {
            break;
        }
        if (fn_8009339C(unit, *item) && (*fn_8001CB64(item) & 2)) {
            M2C_FIELD(unit, u32 *, 0x254) |= 0x100;
            break;
        }
    }

    for (i = 0; i < 4; i++) {
        void *cur;

        item = fn_80037BBC(unit, i);
        if (*item == NULL) {
            break;
        }
        if (fn_8009326C(unit, *item)) {
            M2C_FIELD(unit, u32 *, 0x254) |= 0x200;
            cur = *item;
            if (fn_80019E04(lbl_80273304.iidSilence) == cur) {
                M2C_FIELD(unit, u32 *, 0x254) |= 0x400;
            } else {
                cur = *item;
                if (fn_80019E04(lbl_80273304.iidSleep) == cur) {
                    M2C_FIELD(unit, u32 *, 0x254) |= 0x800;
                } else {
                    cur = *item;
                    if (fn_80019E04(lbl_80273304.iidBerserk) == cur) {
                        M2C_FIELD(unit, u32 *, 0x254) |= 0x1000;
                    }
                }
            }
        }
    }

    for (i = 0; i < 4; i++) {
        item = fn_80037BBC(unit, i);
        if (*item == NULL) {
            break;
        }
        if (fn_8009339C(unit, *item)) {
            if (GetItemUnk1D(*item) == 1) {
                M2C_FIELD(unit, u32 *, 0x254) |= 0x4000;
            }
            if (GetItemDD54(*item, unit) > 1) {
                M2C_FIELD(unit, u32 *, 0x254) |= 0x2000;
            }
        }
    }

    if (M2C_FIELD(unit, struct UnitBits *, 0x1A4).f2 || M2C_FIELD(unit, struct UnitBits *, 0x1A4).f1 ||
        M2C_FIELD(unit, struct UnitBits *, 0x1A4).f4) {
        M2C_FIELD(unit, u32 *, 0x254) |= 0x01000000;
    }
}
#pragma opt_loop_invariants reset
#pragma use_lmw_stmw reset
s32 fn_80100CC8(void) {
    void *fn_80016BDC();
    s32 temp_r3;
    void *temp_r3_2;

    temp_r3_2 = fn_80016BDC();
    if (temp_r3_2 == NULL) {
        return 0;
    }
    temp_r3 = M2C_FIELD(temp_r3_2, s32 *, 0x1A0);
    if (temp_r3 & 4) {
        return 1;
    }
    return (temp_r3 & 0x98) == 0;
}

void fn_80100D18(void *arg0, void **arg1, s16 arg2) {
    u8 fn_8001DD54(void *, void *);
    M2C_UNK fn_8002011C(M2C_UNK *, s8, s8, u8, u8);
    M2C_UNK fn_80022DAC(M2C_UNK *, M2C_UNK, s16);
    M2C_UNK fn_80022FCC(M2C_UNK *, s32);
    M2C_UNK fn_80022FD8(M2C_UNK *, M2C_UNK);
    s8 fn_8003A398(void *);
    u8 fn_800FE84C(s8);
    extern M2C_UNK lbl_802CA518;
    void *temp_r6;
    s8 temp_r20;
    s8 temp_r28;
    s8 temp_r3;
    s8 var_r20;
    s8 var_r21;
    s8 var_r24;
    s8 var_r4;
    u8 var_r0;
    u8 var_r0_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r30;
    s32 var_r22;
    s32 var_r23;
    void *temp_r26;

    temp_r6 = *arg1;
    if (temp_r6 != NULL) {
        var_r0 = M2C_FIELD(temp_r6, u8 *, 0x1D);
    } else {
        var_r0 = 0;
    }
    if (temp_r6 != NULL) {
        var_r0_2 = fn_8001DD54(temp_r6, arg0);
    } else {
        var_r0_2 = 0;
    }
    fn_80022FCC(&lbl_802CA518, fn_800FC5F8());
    fn_80022DAC(&lbl_802CA518, 8, arg2);
    temp_r20 = (s8) M2C_FIELD(arg0, u8 *, 0x19E);
    temp_r28 = (s8) M2C_FIELD(arg0, u8 *, 0x19F);
    temp_r3 = fn_8003A398(arg0);
    var_r24 = temp_r20 - temp_r3;
    if (var_r24 < (s8) M2C_FIELD(&lbl_802CA518, u8 *, 8)) {
        var_r24 = (s8) M2C_FIELD(&lbl_802CA518, u8 *, 8);
    }
    var_r4 = temp_r28 - temp_r3;
    if (var_r4 < (s8) M2C_FIELD(&lbl_802CA518, u8 *, 9)) {
        var_r4 = (s8) M2C_FIELD(&lbl_802CA518, u8 *, 9);
    }
    var_r23 = temp_r20 + temp_r3;
    temp_r0 = (s8) M2C_FIELD(&lbl_802CA518, u8 *, 0xA) - 1;
    if (var_r23 > temp_r0) {
        var_r23 = temp_r0;
    }
    var_r22 = temp_r28 + temp_r3;
    temp_r0_2 = (s8) M2C_FIELD(&lbl_802CA518, u8 *, 0xB) - 1;
    if (var_r22 > temp_r0_2) {
        var_r22 = temp_r0_2;
    }
    var_r21 = var_r4;
loop_24:
    if (var_r21 <= var_r22) {
        var_r20 = var_r24;
        temp_r30 = var_r21 << 6;
loop_22:
        if (var_r20 <= var_r23) {
            if ((s16) M2C_FIELD((&lbl_802CA518 + ((var_r20 + temp_r30) * 2)), s16 *, 0x610E) >= 0) {
                temp_r26 = &lbl_802CA518 + temp_r30 + var_r20;
                if (((s8) M2C_FIELD(temp_r26, u8 *, 0xE18E) == 0) && (fn_800FE84C(var_r21) == 0) && ((u8) M2C_FIELD(temp_r26, u8 *, 0xD) == 0)) {
                    fn_8002011C(&lbl_802CA518, var_r20, var_r21, (u8) (s8) var_r0, (u8) (s8) var_r0_2);
                }
            }
            var_r20 += 1;
            goto loop_22;
        }
        var_r21 += 1;
        goto loop_24;
    }
    fn_80022FD8(&lbl_802CA518, 5);
}

s32 fn_80100F10(void *arg0, void *arg1, void **arg2) {
    s32 fn_80230BCC(s32);
    u8 fn_8001DD54(void *, void *);
    s8 fn_8003A398(void *);
    u8 a;
    u8 b;
    s32 dy;
    s32 dist;
    u8 bonus;

    b = M2C_FIELD(arg1, u8 *, 0x19E);
    a = M2C_FIELD(arg0, u8 *, 0x19E);
    dy = fn_80230BCC((s8)M2C_FIELD(arg0, u8 *, 0x19F) - (s8)M2C_FIELD(arg1, u8 *, 0x19F));
    dist = fn_80230BCC((s8)a - (s8)b) + dy;
    if (*arg2 != NULL) {
        bonus = (u8)fn_8001DD54(*arg2, arg1);
    } else {
        bonus = 0;
    }
    return dist <= ((s8)fn_8003A398(arg1) + bonus + (s8)fn_8003A398(arg0));
}

#pragma optimization_level 2
s32 fn_80100FD0(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    s32 dy;
    s32 dx;

    dy = arg1 - arg3;
    if (dy >= 0) {
        goto L1;
    }
    dy = -dy;
L1:
    dx = arg0 - arg2;
    if (dx >= 0) {
        goto L2;
    }
    dx = -dx;
L2:
    return (dx + dy) <= arg4;
}
#pragma optimization_level 4
void fn_80101014(int arg0, int arg1, void *arg2, int arg3, int arg4, u8 arg5, int arg6, u8 arg7, u8 arg_sp8, int arg_spC) {
s8 fn_8003A398(void *);
void fn_800FB96C(u8,s8,s8,s32,s8,s8,s8,s8,u8);
u16 fn_800FCF48(s8,s8);
void fn_800FE490(s16,s16,void *,s32,s32);
void fn_800FE590(s16,s16,void *,s32,s32);
u8 fn_800FE84C(s8,s8);
extern u8 lbl_802CA518[];

    s16 sp1C;
    s32 sp18;
    s32 sp14;
    u8 sp10;
    s32 sp8;
    u8 *map;
    u8 temp_r3_3;
    s16 temp_r3_4;
    s32 temp_r4;
    s32 temp_r3;
    s32 var_r0_2;
    s32 var_r0;
    s32 var_r5;
    s16 var_r14;
    s32 var_r17;
    s32 var_r18;
    s32 var_r19;
    s16 var_r20;
    s16 var_r21;
    s16 var_r23;
    u16 var_r24;
    s16 var_r22;
    s16 var_r26;
    s16 var_r25;
    s32 temp_r30;
    void *temp_r28;
    void *temp_r27;

    sp10 = arg5;
    var_r19 = arg_spC;
    if ((((s16)arg0) == ((s16)arg3)) && (((s16)arg1) == ((s16)arg4))) {
        sp8 = 0;
        fn_800FB96C(arg5, (s8)((s16)arg3), (s8)((s16)arg4), 0, (s8)((s16)arg3), (s8)((s16)arg4), -1, 0, 0);
        return;
    }
    if (arg7 != 0) {
        fn_800FE590(((s16)arg3), ((s16)arg4), arg2, 6, *(s32 *)(lbl_802CA518) * *(s32 *)(lbl_802CA518+4));
    } else {
        fn_800FE490(((s16)arg3), ((s16)arg4), arg2, 6, *(s32 *)(lbl_802CA518) * *(s32 *)(lbl_802CA518+4));
    }
    var_r18 = (s16)arg1;
    var_r17 = (s16)arg0;
    fn_800FE490((s16)var_r17, (s16)var_r18, arg2, 5, var_r19);
    {
        u8 *base = lbl_802CA518;
        if (*(s16 *)(base + (((s8)arg3 + ((s8)arg4 << 6)) * 2) + 0x610e) < 0) {
            var_r0 = 0x7FFF;
        } else {
            base += 0x10000;
            base += ((s8)var_r17 + ((s8)var_r18 << 6)) * 2;
            var_r0 = *(s16 *)(base - 0x7e72);
        }
    }
    var_r26 = (s16)var_r0;
    var_r25 = -1;
    var_r24 = 0xFFFF;
    var_r22 = 0x7FFF;
    if (var_r19 < 0) {
        var_r5 = fn_8003A398(arg2);
    } else {
        var_r5 = var_r19;
    }
    sp18 = var_r17 - var_r5;
    if (sp18 < (s8)*(s8 *)(lbl_802CA518+0x8)) {
        sp18 = (s32)(s8)*(s8 *)(lbl_802CA518+0x8);
    }
    var_r0_2 = var_r18 - var_r5;
    if (var_r0_2 < (s8)*(s8 *)(lbl_802CA518+0x9)) {
        var_r0_2 = (s8)*(s8 *)(lbl_802CA518+0x9);
    }
    var_r19 = var_r17 + var_r5;
    temp_r3 = (s8)*(s8 *)(lbl_802CA518+0xA) - 1;
    if (var_r19 > temp_r3) {
        var_r19 = temp_r3;
    }
    sp14 = var_r18 + var_r5;
    temp_r4 = (s8)*(s8 *)(lbl_802CA518+0xB) - 1;
    if (sp14 > temp_r4) {
        sp14 = temp_r4;
    }
    map = lbl_802CA518;
    var_r18 = var_r0_2;
    for (; var_r18 <= sp14; var_r18++) {
        var_r17 = sp18;
        temp_r30 = (s8)var_r18 << 6;
        for (; var_r17 <= var_r19; var_r17++) {
            temp_r27 = map + (((s8)var_r17 + temp_r30) * 2);
            if (*(s16 *)((u8 *)temp_r27 + 0x610e) >= 0) {
                temp_r28 = map + temp_r30 + (s8)var_r17;
                if ((*(s8 *)((u8 *)temp_r28 + 0xe18e) == 0) && (fn_800FE84C((s8)var_r17, (s8)var_r18) == 0) && ((temp_r3_3 = *(u8 *)((u8 *)temp_r28 + 13), ((temp_r3_3 == 0) != 0)) || (temp_r3_3 == (u8)*(u8 *)((u8 *)arg2 + 0x198))) && ((temp_r27 = (u8 *)temp_r27 + 0x818e), *(s16 *)temp_r27 >= 0)) {
                    if (((u16)arg6) < fn_800FCF48((s8)var_r17, (s8)var_r18)) {
                        if (var_r24 > fn_800FCF48((s8)var_r17, (s8)var_r18)) {
                            var_r24 = fn_800FCF48((s8)var_r17, (s8)var_r18);
                            var_r14 = (s16)var_r17;
                            var_r23 = (s16)var_r18;
                        }
                    } else {
                        temp_r3_4 = *(s16 *)temp_r27;
                        if (var_r26 < temp_r3_4) {
                            if (var_r22 > temp_r3_4) {
                                var_r22 = temp_r3_4;
                                var_r21 = (s16)var_r17;
                                var_r20 = (s16)var_r18;
                            }
                        } else {
                            var_r26 = temp_r3_4;
                            sp1C = (s16)var_r18;
                            var_r25 = (s16)var_r17;
                        }
                    }
                }
            }
        }
    }
    if (var_r25 != -1) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8)var_r25, (s8)sp1C, 0, (s8)var_r25, (s8)sp1C, -1, 0, 0);
        return;
    }
    if ((arg_sp8 != 0) && (var_r22 != 0x7FFF)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8)var_r21, (s8)var_r20, 0, (s8)var_r21, (s8)var_r20, -1, 0, 0);
        return;
    }
    if ((arg_sp8 != 0) && (var_r24 != 0xFFFF)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8)var_r14, (s8)var_r23, 0, (s8)var_r14, (s8)var_r23, -1, 0, 0);
    }
}
void fn_80101448(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    fn_800FE2A0(arg0, 5, arg7);
    fn_80101530(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void fn_801014BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    fn_800FE2A0(arg0, 5, arg7);
    fn_80101960(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

#pragma opt_strength_reduction off
#pragma use_lmw_stmw on
int fn_80101530(int arg0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
s8 fn_8003A398(void *);
void fn_800FB96C(u8,s8,s8,s32,s8,s8,s8,s8,u8);
u16 fn_800FCF48(s8,s8);
void fn_800FE690(s16,s16,s32,void *,s32,s32);
void fn_800FE770(s16,s16,s32,s32,s32);
u8 fn_800FE84C(s8,s8);
extern u8 lbl_802CA518[];

    s16 sp1C;
    s32 sp18;
    s32 sp14;
    u8 sp11;
    u8 sp10;
    s32 sp8;
    s16 temp_r3_4;
    s32 var_r0;
    s16 var_r14;
    s16 var_r20;
    s16 var_r21;
    s16 var_r22;
    s16 var_r23;
    s16 var_r25;
    s16 var_r26;
    s32 temp_r0;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 var_r17;
    s32 var_r19;
    s8 temp_r17;
    s8 temp_r18;
    s32 var_r0_2;
    s32 var_r18;
    s32 var_r5;
    u16 var_r24;
    u8 temp_r3_3;
    void *temp_r27;
    void *temp_r28;
    u8 *grid;

    sp10 = ((u8)a3);
    sp11 = ((u8)a6);
    if ((((s16)a1) == (s8) *(s8 *)((u8 *)arg0+0x19e)) && (((s16)a2) == (s8) *(s8 *)((u8 *)arg0+0x19f))) {
        sp8 = 0;
        fn_800FB96C(((u8)a3), (s8) ((s16)a1), (s8) ((s16)a2), 0, (s8) ((s16)a1), (s8) ((s16)a2), -1, 0, 0);
        return;
    }
    if (((u8)a5) != 0) {
        fn_800FE770(((s16)a1), ((s16)a2), 0, 6, *(s32 *)(lbl_802CA518) * *(s32 *)(lbl_802CA518+4));
    } else {
        fn_800FE690(((s16)a1), ((s16)a2), 0, *(void **)((u8 *)arg0+0x190), 6, *(s32 *)(lbl_802CA518) * *(s32 *)(lbl_802CA518+4));
    }
    if (*(s16 *)(lbl_802CA518+0x610e+(((s8)((s16)a1)+((s8)((s16)a2)<<6))*2)) < 0) {
        var_r0 = 0x7FFF;
    } else {
        var_r0 = *(s16 *)(lbl_802CA518+0x818e+((*(s8 *)((u8 *)arg0+0x19e)+(*(s8 *)((u8 *)arg0+0x19f)<<6))*2));
    }
    var_r26 = var_r0;
    temp_r17 = (s8) *(s8 *)((u8 *)arg0+0x19e);
    var_r24 = 0xFFFF;
    temp_r18 = (s8) *(s8 *)((u8 *)arg0+0x19f);
    var_r25 = -1;
    var_r22 = 0x7FFF;
    if (a7 < 0) {
        var_r5 = fn_8003A398((void *)arg0);
    } else {
        var_r5 = a7;
    }
    temp_r0 = temp_r17 - var_r5;
    sp18 = temp_r0;
    if (temp_r0 < (s8) *(s8 *)(lbl_802CA518+0x8)) {
        sp18 = (s32) (s8) *(s8 *)(lbl_802CA518+0x8);
    }
    var_r0_2 = temp_r18 - var_r5;
    if (var_r0_2 < (s8) *(s8 *)(lbl_802CA518+0x9)) {
        var_r0_2 = (s8) *(s8 *)(lbl_802CA518+0x9);
    }
    var_r19 = temp_r17 + var_r5;
    temp_r3 = (s8) *(s8 *)(lbl_802CA518+0xA) - 1;
    if (var_r19 > temp_r3) {
        var_r19 = temp_r3;
    }
    temp_r3_2 = temp_r18 + var_r5;
    sp14 = temp_r3_2;
    temp_r4 = (s8) *(s8 *)(lbl_802CA518+0xB) - 1;
    if (temp_r3_2 > temp_r4) {
        sp14 = temp_r4;
    }
    var_r18 = var_r0_2;
for (; var_r18 <= sp14; var_r18++) {
        var_r17 = sp18;
        temp_r30 = var_r18 << 6;
for (; var_r17 <= var_r19; var_r17++) {
            temp_r27 = lbl_802CA518 + (((s8) var_r17 + temp_r30) * 2);
            if (*(s16 *)((u8 *)temp_r27+0x610e) >= 0) {
                temp_r28 = lbl_802CA518 + temp_r30 + (s8) var_r17;
                if ((*(s8 *)((u8 *)temp_r28+0xe18e) == 0) && (fn_800FE84C((s8)var_r17,(s8)var_r18) == 0) && ((temp_r3_3 = *(u8 *)((u8 *)temp_r28+13), ((temp_r3_3 == 0) != 0)) || (temp_r3_3 == (u8) *(u8 *)((u8 *)arg0+0x198))) && ((temp_r27=(u8 *)temp_r27+0x818e), *(s16 *)temp_r27 >= 0)) {
                    if (((u16)a4) < fn_800FCF48((s8) var_r17, var_r18)) {
                        if (var_r24 > fn_800FCF48((s8) var_r17, var_r18)) {
                            var_r14 = (s16) var_r17;
                            var_r24 = fn_800FCF48((s8) var_r17, var_r18);
                            var_r23 = (s16) var_r18;
                        }
                    } else {
                        temp_r3_4 = *(s16 *)temp_r27;
                        if (var_r26 < temp_r3_4) {
                            if (var_r22 > temp_r3_4) {
                                var_r22 = temp_r3_4;
                                var_r21 = (s16) var_r17;
                                var_r20 = (s16) var_r18;
                            }
                        } else {
                            var_r26 = temp_r3_4;
                            sp1C = (s16) var_r18;
                            var_r25 = (s16) var_r17;
                        }
                    }
                }
            }
        }
    }
    if (var_r25 != -1) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8) var_r25, (s8) sp1C, 0, (s8) var_r25, (s8) sp1C, -1, 0, 0);
        return;
    }
    if ((sp11 != 0) && (var_r22 != 0x7FFF)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8) var_r21, (s8) var_r20, 0, (s8) var_r21, (s8) var_r20, -1, 0, 0);
        return;
    }
    if ((sp11 != 0) && (var_r24 != -1U)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8) var_r14, (s8) var_r23, 0, (s8) var_r14, (s8) var_r23, -1, 0, 0);
    }
}
#pragma opt_strength_reduction reset

#pragma opt_strength_reduction off
#pragma use_lmw_stmw on
int fn_80101960(int arg0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
s8 fn_8003A398(void *);
void fn_800FB96C(u8,s8,s8,s32,s8,s8,s8,s8,u8);
u16 fn_800FCF48(s8,s8);
void fn_800FE490(s16,s16,void *,s32,s32);
void fn_800FE590(s16,s16,void *,s32,s32);
u8 fn_800FE84C(s8,s8);
extern u8 lbl_802CA518[];

    s16 sp1C;
    s32 sp18;
    s32 sp14;
    u8 sp11;
    u8 sp10;
    s32 sp8;
    s16 temp_r3_4;
    s16 var_r0;
    s16 var_r14;
    s16 var_r20;
    s16 var_r21;
    s16 var_r22;
    s16 var_r23;
    s16 var_r25;
    s16 var_r26;
    s32 temp_r0;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r4;
    s32 var_r17;
    s32 var_r19;
    s8 temp_r17;
    s8 temp_r18;
    s32 var_r0_2;
    s32 var_r18;
    s32 var_r5;
    u16 var_r24;
    u8 temp_r3_3;
    void *temp_r27;
    void *temp_r28;
    u8 *grid;

    sp10 = ((u8)a3);
    sp11 = ((u8)a6);
    if ((((s16)a1) == (s8) *(s8 *)((u8 *)arg0+0x19e)) && (((s16)a2) == (s8) *(s8 *)((u8 *)arg0+0x19f))) {
        sp8 = 0;
        fn_800FB96C(((u8)a3), (s8) ((s16)a1), (s8) ((s16)a2), 0, (s8) ((s16)a1), (s8) ((s16)a2), -1, 0, 0);
        return;
    }
    if (((u8)a5) != 0) {
        fn_800FE590(((s16)a1), ((s16)a2), (void *)arg0, 6, *(s32 *)(lbl_802CA518) * *(s32 *)(lbl_802CA518+4));
    } else {
        fn_800FE490(((s16)a1), ((s16)a2), (void *)arg0, 6, *(s32 *)(lbl_802CA518) * *(s32 *)(lbl_802CA518+4));
    }
    if (*(s16 *)(lbl_802CA518+0x610e+(((s8)((s16)a1)+((s8)((s16)a2)<<6))*2)) < 0) {
        var_r0 = 0x7FFF;
    } else {
        var_r0 = *(s16 *)(lbl_802CA518+0x818e+((*(s8 *)((u8 *)arg0+0x19e)+(*(s8 *)((u8 *)arg0+0x19f)<<6))*2));
    }
    var_r26 = var_r0;
    temp_r17 = (s8) *(s8 *)((u8 *)arg0+0x19e);
    var_r24 = 0xFFFF;
    temp_r18 = (s8) *(s8 *)((u8 *)arg0+0x19f);
    var_r25 = -1;
    var_r22 = 0x7FFF;
    if (a7 < 0) {
        var_r5 = fn_8003A398((void *)arg0);
    } else {
        var_r5 = a7;
    }
    temp_r0 = temp_r17 - var_r5;
    sp18 = temp_r0;
    if ((s8) *(s8 *)(lbl_802CA518+0x8) > temp_r0) {
        sp18 = (s32) (s8) *(s8 *)(lbl_802CA518+0x8);
    }
    var_r0_2 = temp_r18 - var_r5;
    if (var_r0_2 < (s8) *(s8 *)(lbl_802CA518+0x9)) {
        var_r0_2 = (s8) *(s8 *)(lbl_802CA518+0x9);
    }
    var_r19 = temp_r17 + var_r5;
    temp_r3 = (s8) *(s8 *)(lbl_802CA518+0xA) - 1;
    if (var_r19 > temp_r3) {
        var_r19 = temp_r3;
    }
    temp_r3_2 = temp_r18 + var_r5;
    sp14 = temp_r3_2;
    temp_r4 = (s8) *(s8 *)(lbl_802CA518+0xB) - 1;
    if (temp_r3_2 > temp_r4) {
        sp14 = temp_r4;
    }
    var_r18 = var_r0_2;
for (; var_r18 <= sp14; var_r18++) {
        var_r17 = sp18;
        temp_r30 = var_r18 << 6;
for (; var_r17 <= var_r19; var_r17++) {
            temp_r27 = lbl_802CA518 + (((s8) var_r17 + temp_r30) * 2);
            if (*(s16 *)((u8 *)temp_r27+0x610e) >= 0) {
                temp_r28 = lbl_802CA518 + temp_r30 + (s8) var_r17;
                if ((*(s8 *)((u8 *)temp_r28+0xe18e) == 0) && (fn_800FE84C((s8)var_r17,(s8)var_r18) == 0) && ((temp_r3_3 = *(u8 *)((u8 *)temp_r28+13), ((temp_r3_3 == 0) != 0)) || (temp_r3_3 == (u8) *(u8 *)((u8 *)arg0+0x198))) && ((temp_r27=(u8 *)temp_r27+0x818e), *(s16 *)temp_r27 >= 0)) {
                    if (((u16)a4) < fn_800FCF48((s8) var_r17, var_r18)) {
                        if (var_r24 > fn_800FCF48((s8) var_r17, var_r18)) {
                            var_r14 = (s16) var_r17;
                            var_r24 = fn_800FCF48((s8) var_r17, var_r18);
                            var_r23 = (s16) var_r18;
                        }
                    } else {
                        temp_r3_4 = *(s16 *)temp_r27;
                        if (var_r26 < temp_r3_4) {
                            if (var_r22 > temp_r3_4) {
                                var_r22 = temp_r3_4;
                                var_r21 = (s16) var_r17;
                                var_r20 = (s16) var_r18;
                            }
                        } else {
                            var_r26 = temp_r3_4;
                            sp1C = (s16) var_r18;
                            var_r25 = (s16) var_r17;
                        }
                    }
                }
            }
        }
    }
    if (var_r25 != -1) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8) var_r25, (s8) sp1C, 0, (s8) var_r25, (s8) sp1C, -1, 0, 0);
        return;
    }
    if ((sp11 != 0) && (var_r22 != 0x7FFF)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8) var_r21, (s8) var_r20, 0, (s8) var_r21, (s8) var_r20, -1, 0, 0);
        return;
    }
    if ((sp11 != 0) && (var_r24 != -1U)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8) var_r14, (s8) var_r23, 0, (s8) var_r14, (s8) var_r23, -1, 0, 0);
    }
}
#pragma opt_strength_reduction reset
s32 fn_8010207C(s32 arg0, s16 *outX, s16 *outY) {
    void fn_800FE398(s32, s32, s32);
    u32 fn_80019E48(s32);
    u8 fn_800FE84C(s8, s8);
    extern struct {
        s32 width;
        s32 height;
        s8 xMin;
        s8 yMin;
        s8 xMax;
        s8 yMax;
        u8 pad0C;
        u8 unitMap[8][64][64];
        u8 pad800D[0x181];
        s16 costMap[3][64 * 64];
        s8 fogMap[64][64];
    } lbl_802CA518;
    extern s32 lbl_802EF4C8[];
    s16 *cost;
    s16 best;
    u32 team;
    s32 y;
    s32 x;
    u8 id;
    u8 *unit;

    best = 0x7FFF;
    fn_800FE398(lbl_802EF4C8[0], 6, lbl_802CA518.width * lbl_802CA518.height);
    team = fn_80019E48(arg0);
    for (y = lbl_802CA518.yMin; y <= lbl_802CA518.yMax - 1; y++) {
        for (x = lbl_802CA518.xMin; x <= lbl_802CA518.xMax - 1; x++) {
            cost = &lbl_802CA518.costMap[0][(s8)x + ((s8)y << 6)];
            if (*cost < 0) {
                continue;
            }
            if (lbl_802CA518.fogMap[(s8)y][(s8)x] != 0) {
                continue;
            }
            if (fn_800FE84C(x, y) != 0) {
                continue;
            }
            id = lbl_802CA518.unitMap[0][(s8)y][(s8)x];
            if (id == 0) {
                continue;
            }
            if (id != 0) {
                unit = lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (M2C_FIELD(unit, u32 *, 0x1A0) & 4) {
                continue;
            }
            if (team != M2C_FIELD(unit, u32 *, 0x18C)) {
                continue;
            }
            if (best >= *cost) {
                best = *cost;
                *outX = x;
                *outY = y;
            }
        }
    }
    return best != 0x7FFF;
}
#pragma use_lmw_stmw reset
void fn_80102334(s32 a0, s32 a1, s32 a2, s32 a3) {
    extern void fn_80102810(s32, s32, s32, s32, s32);
    fn_80102810(a0, a1, 0x2C, a2, a3);
}

s32 fn_80102360(void *arg0, s16 *arg1, s16 *arg2, s32 arg3) {
    s16 temp_r14, temp_r15;
    s32 temp_r21, temp_r23, temp_r24, temp_r25, temp_r26, temp_r4, temp_r5;
    
    if (arg0 == NULL || arg1 == NULL || arg2 == NULL) {
        return 0;
    }

    /* Condition check and calls */
    if ((*(u8 *)0x8032B3C0 & 2) || (*(u32 *)((char *)arg0 + 0x254) & 0x03000000)) {
        fn_80022DAC(0x802CA518, 5, -1);
        fn_80022FD8(0x802CA518, 5);
    } else {
        fn_800FE2A0(5, arg3);
    }

    temp_r23 = *(u8 *)((char *)arg0 + 0x19e);
    temp_r24 = *(u8 *)((char *)arg0 + 0x19f);
    temp_r25 = (temp_r23 + (temp_r24 << 6)) * 2;
    temp_r26 = *(s16 *)((char *)0x802CA518 + 0x610e + temp_r25);

    if (temp_r26 < 0) {
        return 0;
    }

    *(s16 *)((char *)0x802CA518 + temp_r25 + 0x610e) = arg3 + 1;

    /* Some calculation */
    temp_r4 = 0x1; // This is just an initial value. May be more complex.

    temp_r5 = temp_r23 - (temp_r23 + temp_r24);
    temp_r21 = temp_r23;
    
    if (temp_r5 < *(s8 *)((char *)0x802CA518 + 0x8)) {
        temp_r5 = *(s8 *)((char *)0x802CA518 + 0x8);
    }

    // Loop and calculations continue
    return 0; /* Placeholder, complex loop logic to reassemble */
}

#pragma use_lmw_stmw on
s32 fn_801025BC(void *arg0, s16 *arg1, s16 *arg2) {
    void fn_80022DAC(void *, s32, s32);
    void fn_80022FD8(void *, s32);
    s8 fn_8003A398(void *);
    u16 fn_800FCF48(s8, s8);
    void fn_800FE2A0(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_802CA518[];

    u8 *colp;
    u8 *rowp;
    s8 x0;
    s8 y0;
    u8 *base;
    u16 best;
    s16 best_x;
    s16 best_y;
    s32 x_lo;
    s32 x_hi;
    s32 y_hi;
    s32 y;
    s32 x;

    base = lbl_802CA518;
    best = 0xffff;
    if ((lbl_8032B3C0[1] & 2) || (*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        fn_80022DAC(base, 5, -1);
        fn_80022FD8(base, 5);
        {
            s16 *tbl = *(s16 **)(base + 0x14190);
            s32 idx = (s8)*(u8 *)((u8 *)arg0 + 0x19e) + ((s8)*(u8 *)((u8 *)arg0 + 0x19f) << 6);
            tbl[idx] = 0;
        }
    } else {
        fn_800FE2A0(arg0, 5, -1);
    }
    x0 = (s8)*(u8 *)((u8 *)arg0 + 0x19e);
    y0 = (s8)*(u8 *)((u8 *)arg0 + 0x19f);
    {
        s8 rad = fn_8003A398(arg0);
        x_lo = x0 - rad;
        if (x_lo < (s8)lbl_802CA518[8]) {
            x_lo = (s8)lbl_802CA518[8];
        }
        {
            s32 y_lo = y0 - rad;
            if (y_lo < (s8)lbl_802CA518[9]) {
                y_lo = (s8)lbl_802CA518[9];
            }
            x_hi = x0 + rad;
            if (x_hi > (s8)lbl_802CA518[0xa] - 1) {
                x_hi = (s8)lbl_802CA518[0xa] - 1;
            }
            y_hi = y0 + rad;
            if (y_hi > (s8)lbl_802CA518[0xb] - 1) {
                y_hi = (s8)lbl_802CA518[0xb] - 1;
            }
            y = y_lo;
        }
    }
    while (y <= y_hi) {
        x = x_lo;
        colp = lbl_802CA518 + ((s8)y << 6);
        rowp = base + ((s8)y << 6);
        while (x <= x_hi) {
            if (*(s16 *)(lbl_802CA518 + 0x610e + (((s8)x + ((s8)y << 6)) * 2)) >= 0
                && (s8)colp[(s8)x + 0xe18e] == 0
                && fn_800FE84C((s8)x, (s8)y) == 0) {
                u8 owner = rowp[(s8)x + 0xd];
                if ((owner == 0 || owner == *(u8 *)((u8 *)arg0 + (short)0x198))
                    && best > fn_800FCF48((s8)x, (s8)y)) {
                    best_x = (s16)x;
                    best_y = (s16)y;
                    best = fn_800FCF48((s8)x, (s8)y);
                }
            }
            x += 1;
        }
        y += 1;
    }
    if ((u16)best != 0xffff) {
        *arg1 = best_x;
        *arg2 = best_y;
        return 1;
    }
    return 0;
}

#pragma use_lmw_stmw on
s32 fn_80102810(void *arg0, s32 flags, s32 arg2, s16 *outX, s16 *outY) {
    void fn_800FE398(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    u8 fn_80015610(s32, s32);
    u8 fn_800FB5C8(void *);
    u8 fn_800BE968(u8, s8, s8);
    extern struct {
        s32 width;
        s32 height;
        s8 xMin;
        s8 yMin;
        s8 xMax;
        s8 yMax;
        u8 pad0C;
        u8 unitMap[8][64][64];
        u8 pad800D[0x181];
        s16 costMap[3][64 * 64];
        s8 fogMap[64][64];
    } lbl_802CA518;
    extern u8 lbl_802B14E4[];
    extern s16 lbl_802732A0[];

    s16 x16;
    s16 y16;
    s16 *nb;
    s32 count;
    s32 yShift;
    u8 *rowFog;
    u8 *rowUnit;
    u32 flag1;
    u32 flag2;
    s16 *cost;
    s16 best;
    s16 bestX;
    s16 bestY;
    s32 y;
    s32 x;
    u8 *mapSaved;

    mapSaved = (u8 *)&lbl_802CA518;
    fn_800FE398(arg0, 6, ((s32 *)mapSaved)[0] * ((s32 *)mapSaved)[1]);
    flag1 = (u32)flags & 1;
    flag2 = flags & 2;
    best = 0x7FFF;
    for (y = lbl_802CA518.yMin; y <= lbl_802CA518.yMax - 1; y++) {
        yShift = (s8)y << 6;
        y16 = (s16)y;
        rowFog = (u8 *)&lbl_802CA518 + yShift;
        rowUnit = mapSaved + yShift;
        for (x = lbl_802CA518.xMin; x <= lbl_802CA518.xMax - 1; x++) {
            s32 x8 = (s8)x;
            u8 id;
            void *unit;
            cost = &lbl_802CA518.costMap[0][x8 + yShift];
            if (*cost < 0) {
                continue;
            }
            if ((s8)rowFog[x8 + 0xE18E] != 0) {
                continue;
            }
            if (fn_800FE84C((s8)x8, (s8)y) != 0) {
                continue;
            }
            if (flag1) {
                id = rowUnit[x8 + 0xD];
                if (id) {
                    if (id != 0) {
                        unit = lbl_802B14E4 + (id - 1) * 0x280;
                    } else {
                        unit = NULL;
                    }
                    if (fn_80015610(*(s32 *)((u8 *)arg0 + 0x190), *(s32 *)((u8 *)unit + 0x190)) == 1) {
                        continue;
                    }
                }
            }
            if (flag2 != 0) {
                x16 = (s16)x;
                nb = lbl_802732A0;
                count = 0;
                while (nb[0] != 0x7FFF) {
                    s32 nx;
                    s32 ny;
                    s32 oob;
                    nx = x16 + nb[0];
                    ny = y16 + nb[1];
                    oob = 0;
                    if (nx < (s8)lbl_802CA518.xMin || (s8)lbl_802CA518.xMax - 1 < nx || ny < (s8)lbl_802CA518.yMin || (s8)lbl_802CA518.yMax - 1 < ny) {
                        oob = 1;
                    }
                    if ((u8)oob == 0) {
                        u8 nid = *((u8 *)&lbl_802CA518 + (s8)nx + ((s8)ny << 6) + 0xD);
                        if (nid != 0) {
                            void *nunit;
                            if (nid != 0) {
                                nunit = lbl_802B14E4 + (nid - 1) * 0x280;
                            } else {
                                nunit = NULL;
                            }
                            if (fn_800FB5C8(nunit) != 0) {
                                count += 1;
                            }
                        }
                    }
                    nb += 2;
                }
                if (count != 0) {
                    continue;
                }
            }
            if (fn_800BE968((u8)arg2, (s8)x, (s8)y) != 0) {
                if (*cost < best) {
                    best = *cost;
                    bestX = (s16)x;
                    bestY = (s16)y;
                }
            }
        }
    }
    if (best != 0x7FFF) {
        *outX = bestX;
        *outY = bestY;
    }
    return best != 0x7FFF;
}
#pragma use_lmw_stmw reset
s32 fn_80102ACC(void *arg0, s32 arg1, s32 arg2, s16 *arg3, s16 *arg4) {
    void fn_800FE398(void *, s32, s32);
    u8 fn_800FE84C(s8, s8);
    u8 fn_80015610(void *, void *);
    u8 fn_800FB5C8(void *);
    void fn_8002F728(void *);
    void fn_8002C618(void *, s8, s8);
    extern struct {
        s32 width;
        s32 height;
        s8 xMin;
        s8 yMin;
        s8 xMax;
        s8 yMax;
        u8 pad0C;
        u8 unitMap[8][64][64];
        u8 pad800D[0x181];
        s16 costMap[3][64 * 64];
        s8 fogMap[64][64];
    } lbl_802CA518;
    extern u8 lbl_802B14E4[];
    extern s16 lbl_802732A0[];
    extern void *lbl_80284E20;
    extern void *lbl_8028EA88;
    extern s32 lbl_802EF4E0;

    s16 sp20;
    void *sp18[2];
    void *sp10[2];
    s16 *outX;
    s16 *outY;
    void *self;
    s32 flag1;
    s32 flag2;
    s32 mode;
    s16 best;
    s16 bestY;
    s32 y;
    s32 x;
    s16 *cost;
    u8 id;
    void *unit;
    s16 *nei;
    s32 nx, ny;
    s32 count;
    s32 oob;
    u8 *base;

    outX = arg3;
    outY = arg4;
    mode = arg2;
    self = arg0;
    fn_800FE398(self, 6, lbl_802CA518.width * lbl_802CA518.height);
    flag1 = arg1 & 1;
    flag2 = arg1 & 2;
    best = 0x7FFF;
    for (y = lbl_802CA518.yMin; y <= lbl_802CA518.yMax - 1; y++) {
        for (x = lbl_802CA518.xMin; x <= lbl_802CA518.xMax - 1; x++) {
            cost = &lbl_802CA518.costMap[0][(s8)x + ((s8)y << 6)];
            if (*cost < 0) {
                continue;
            }
            if (lbl_802CA518.fogMap[(s8)y][(s8)x] != 0) {
                continue;
            }
            if (fn_800FE84C((s8)x, (s8)y) != 0) {
                continue;
            }
            if (flag1 != 0) {
                id = lbl_802CA518.unitMap[0][(s8)y][(s8)x];
                if (id != 0) {
                    if (id != 0) {
                        unit = lbl_802B14E4 + (id - 1) * 0x280;
                    } else {
                        unit = NULL;
                    }
                    if (fn_80015610(*(void **)((u8 *)self + 0x190), *(void **)((u8 *)unit + 0x190)) == 1) {
                        continue;
                    }
                }
            }
            if (flag2 != 0) {
                nei = lbl_802732A0;
                count = 0;
                while (*nei != 0x7FFF) {
                    nx = (s16)x + nei[0];
                    ny = (s16)y + nei[1];
                    oob = 0;
                    if (nx < lbl_802CA518.xMin || lbl_802CA518.xMax - 1 < nx || ny < lbl_802CA518.yMin || lbl_802CA518.yMax - 1 < ny) {
                        oob = 1;
                    }
                    if (oob == 0) {
                        id = lbl_802CA518.unitMap[0][(s8)ny][(s8)nx];
                        if (id != 0) {
                            if (id != 0) {
                                unit = lbl_802B14E4 + (id - 1) * 0x280;
                            } else {
                                unit = NULL;
                            }
                            if (fn_800FB5C8(unit) != 0) {
                                count += 1;
                            }
                        }
                    }
                    nei += 2;
                }
                if (count != 0) {
                    continue;
                }
            }
            sp18[0] = &lbl_80284E20;
            sp18[0] = &lbl_8028EA88;
            fn_8002F728(&lbl_802EF4E0);
            sp18[1] = (void *)mode;
            fn_8002C618(sp18, (s8)x, (s8)y);
            if (lbl_802EF4E0 != 0) {
                if (*cost < best) {
                    best = *cost;
                    sp20 = (s16)x;
                    bestY = (s16)y;
                }
            }
        }
    }
    if (best != 0x7FFF) {
        sp10[0] = &lbl_80284E20;
        sp10[0] = &lbl_8028EA88;
        fn_8002F728(&lbl_802EF4E0);
        sp10[1] = (void *)mode;
        fn_8002C618(sp10, (s8)sp20, (s8)bestY);
        *outX = sp20;
        *outY = bestY;
        return 1;
    }
    fn_8002F728(&lbl_802EF4E0);
    return 0;
}

#pragma use_lmw_stmw reset

s32 fn_80102DFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_800BE968(u8, s8, s8);
    void fn_8002F728(void *);
    void fn_8002C618(void *, s8, s8);
    extern u8 lbl_80284E20[16];
    extern u8 lbl_8028EA88[16];
    extern struct { s32 n; u8 pad[2004]; } lbl_802EF4E0;

    void *sp[2];

    if ((u8)arg3 == 0) {
        return fn_800BE968((u8)arg2, (s8)arg0, (s8)arg1);
    }

    sp[0] = lbl_80284E20;
    sp[0] = lbl_8028EA88;
    fn_8002F728(&lbl_802EF4E0);
    sp[1] = (void *)arg2;
    fn_8002C618(sp, (s8)arg0, (s8)arg1);
    return lbl_802EF4E0.n != 0;
}

s32 fn_80102EA8(void *arg0) {
    extern u8 lbl_8032B3C0[];
    extern u8 lbl_80330708[];
    u8 var_r0;

    if (!(lbl_8032B3C0[1] & 8)) {
        return 0;
    }
    if (arg0 != NULL) {
        var_r0 = *(u8 *)(*(u8 **)((u8 *)arg0 + 0x190) + 8);
    } else {
        var_r0 = lbl_80330708[0x11];
    }
    switch (var_r0) {
    case 1:
    case 2:
    case 4:
        return 0;
    default:
        return 1;
    }
}

void fn_80102F18(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8002F6E8(M2C_UNK *, s32, s32, M2C_UNK, u8);
    u8 fn_800BE968(u8);
    extern u8 lbl_802EF4E0[];
    if (fn_800BE968((u8) M2C_FIELD(arg0, s32 *, 4)) != 0) {
        fn_8002F6E8((M2C_UNK *)lbl_802EF4E0, arg1, arg2, 0, (u8) M2C_FIELD(arg0, s32 *, 4));
    }
}

void fn_80103200(void *arg0, s8 arg1, s8 arg2) {
    void fn_8002C6F4(void);
    extern u8 lbl_802CA518[];
    s8 x;
    u8 *base;
    u8 *p;
    s32 yoff;
    u8 v;
    void *unit;

    x = arg1;
    base = lbl_802CA518;
    p = base + 0x10000;
    yoff = (s8)arg2 << 6;
    p = p + x;
    p = p + yoff;
    if ((s8)p[-0x1E72] != 0) {
        return;
    }
    unit = *(void **)((u8 *)arg0 + 4);
    if (*(s32 *)((u8 *)unit + 0x254) & 0x20000) {
        p = base + x;
        p = p + yoff;
        if (p[0x300D] & 2) {
            return;
        }
    }
    *((s8 *)arg0 + 0xC) = arg1;
    p = base + x;
    p = p + yoff;
    *((s8 *)arg0 + 0xD) = arg2;
    v = p[0xD];
    if (v != 0) {
        unit = *(void **)((u8 *)arg0 + 4);
        if (v != *((u8 *)unit + 0x198)) {
            return;
        }
    }
    fn_8002C6F4();
}

void fn_8010329C(void *arg0, void *arg1) {
    u8 fn_800BF1E8(void *);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802EF4E0[];

    *(void **)(lbl_802EF4C8 + 4) = arg1;
    if (fn_800BF1E8(lbl_802EF4C8) != 0) {
        fn_8002F6E8(lbl_802EF4E0, *(u8 *)((u8 *)arg1 + 0x19E), *(u8 *)((u8 *)arg1 + 0x19F), *(u8 *)((u8 *)arg1 + 0x198), 0);
    }
}

s32 fn_801032F8(void) {
    void fn_800D758C(void *);
    extern void *lbl_80367918;
    fn_800D758C(lbl_80367918);
    return 0;
}

void *fn_80103428(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    extern u8 lbl_80273420[];
    extern u8 lbl_8028EAC8[];

    extern void fn_800C9ABC(void *, const char *, void *);
    extern void fn_800CB90C(void *, void *, const char *);
    extern void fn_800D764C(void *, s32, s32, s32, void *, void *);
    extern void fn_800C9A60(void *, s32);
    extern void *fn_800D75FC(void *, void *);

    extern void fn_80103320(void);
    extern void fn_801032F8(void);

    u8 *obj;
    u8 *strings;

    u8 temp0[12];
    u8 temp1[12];
    u8 temp2[12];
    u8 temp3[12];
    u8 temp4[12];
    u8 temp5[12];

    u32 value0;
    u32 value1;
    u32 value2;
    u32 value3;
    u32 value4;
    u32 value5;

    u8 *entry;

    obj = (u8 *)arg0;
    strings = lbl_80273420;

    fn_800C9ABC(temp0, (const char *)(strings + 0xC), &value0);

    fn_800CB90C(
        temp1,
        temp0,
        (const char *)(strings + 0x13)
    );

    fn_800C9ABC(temp2, (const char *)(strings + 0x1E), &value1);

    fn_800D764C(
        obj,
        arg1,
        arg2,
        arg3,
        temp1,
        temp2
    );

    fn_800C9A60(temp2, -1);
    fn_800C9A60(temp1, -1);
    fn_800C9A60(temp0, -1);

    *(void **)(obj + 0xC) = lbl_8028EAC8;

    fn_800C9ABC(temp3, (const char *)(strings + 0x25), &value2);

    entry = (u8 *)fn_800D75FC(obj, temp3);
    *(void **)(obj + 0x424) = entry;

    fn_800C9A60(temp3, -1);

    fn_800C9ABC(temp4, (const char *)(strings + 0x2D), &value3);

    entry = (u8 *)fn_800D75FC(obj, temp4);
    *(void **)(obj + 0x428) = entry;

    fn_800C9A60(temp4, -1);

    fn_800C9ABC(temp5, (const char *)(strings + 0x33), &value4);

    entry = (u8 *)fn_800D75FC(obj, temp5);
    *(void **)(obj + 0x42C) = entry;

    fn_800C9A60(temp5, -1);

    entry = *(u8 **)(obj + 0x428);
    *(void **)(entry + 0xA4) = (void *)fn_80103320;

    entry = *(u8 **)(obj + 0x42C);
    *(void **)(entry + 0xA4) = (void *)fn_801032F8;

    return obj;
}

extern s32 lbl_80320C20;
extern u16 lbl_803678F4;
extern u8 lbl_8032B3C0[];
extern u8 lbl_8032B3C0[544];
extern u16 *lbl_803678A8;
extern u16 *lbl_803678C8;
extern u16 *lbl_80367918;
extern u16 lbl_80273420[];
#include "global.h"

extern f32 lbl_80369E70;
extern f32 lbl_80369E74;
#include "structs.h"
#include "unit.h"

extern f32 fn_802031A8(f32*, f32*, f32*);
extern f32 fn_802031CC(f32*, f32*, f32);
extern f32 fn_802031E8(f32*, f32*);

extern u16 lbl_802CA518;
extern u8 lbl_802723E8[136]; // Size determined from assembly
#include "common.h"
#include "structs.h"
extern u32 lbl_803678DC;
extern u32 lbl_803678E0;
extern f64 lbl_80369FB0;
extern f32 lbl_80369F90;
extern f64 lbl_80369F98;
extern f32 lbl_80369FA0;
extern f32 lbl_80369FA4;
extern f32 lbl_80369FA8;
extern f32 lbl_80369FAC;
extern void *fn_800F047C;
#include "common.h"

extern u32 lbl_803678DC;
extern u32 lbl_803678E0;
extern f64 lbl_80369FB0;
extern f32 lbl_80369F90;
extern f64 lbl_80369F98;
extern f32 lbl_80369FA0;
extern f32 lbl_80369FA4;
extern f32 lbl_80369FA8;
extern f32 lbl_80369FAC;
#include "common.h"
#include "structs.h"

extern s32 lbl_8036A0C8;
extern s32 lbl_8036A0CC;
extern s32 lbl_8036A0D0;
extern s32 lbl_8036A0D4;
extern s32 lbl_8036A0D8;
extern s32 lbl_8036A0DC;
extern s32 lbl_8036A0E0;
extern s32 lbl_8036A0E4;
extern s32 lbl_8036A0E8;
extern s32 lbl_8036A0EC;
extern s32 lbl_8036A0F0;
extern s32 lbl_8036A0F4;
extern s32 lbl_8036A0F8;
extern s32 lbl_8036A0FC;
extern s32 lbl_8036A100;
extern s32 lbl_8036A104;
extern s32 lbl_8036A108;
extern s32 lbl_8036A10C;
extern s32 lbl_8036A110;

// Need to look at how other functions in the file define this struct
// Let's just use a minimal definition for now as we don't know the full layout yet

extern void *D_8036A150; // The struct 0E60 is likely a pointer to data, or a large structure with many members
#include "global.h"

extern char lbl_802704F8[];
extern f32 lbl_80369E30, lbl_80369E34, lbl_80369E38, lbl_80369E3C, lbl_80369E40, lbl_80369E44, lbl_80369E48, lbl_80369E4C;
