/* Functions from 0x800C40F4 to 0x801035C8, found by decomp-toolkit. */
#include "common.h"
#include "structs.h"
static inline s32 Heap_FindUnusedIndex(void **table) {
    s32 i;
    for (i = 0; i < 16; i++) {
        if (table[i] == 0) return i;
    }
    return -1;
}
static inline s32 Heap_FindUnusedIndexFrom(void **table, s32 i) {
    for (; i < 16; i++) if (table[i] == 0) return i;
    return -1;
}
typedef struct MapProjectionVec { f32 x, y, z; } MapProjectionVec;
typedef struct AiActionMap {
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
    } AiActionMap;
static inline s16 Ai_ReadActionCost(u8 *cell) { return ((AiActionMap *)cell)->costMap[0][0]; }
static inline s32 Ai_CountHostileNeighbors(s16 x16, s16 y16, s16 *nb) {
    extern AiActionMap gBattleMap;
    extern u8 gUnits[];
    u8 Ai_UnitIsHostileToActive(void *);
    s32 count;
                count = 0;
                while (nb[0] != 0x7FFF) {
                    u8 oob;
                    s32 nx;
                    s32 ny;
                    nx = x16 + nb[0];
                    ny = y16 + nb[1];
                    oob = 0;
                    if (nx < gBattleMap.xMin || gBattleMap.xMax - 1 < nx || ny < gBattleMap.yMin || gBattleMap.yMax - 1 < ny) {
                        oob = 1;
                    }
                    if (!oob) {
                        u8 nid = *((u8 *)&gBattleMap + (s8)nx + ((s8)ny << 6) + 0xD);
                        if (nid != 0) {
                            void *nunit;
                            if (nid != 0) {
                                nunit = gUnits + (nid - 1) * 0x280;
                            } else {
                                nunit = NULL;
                            }
                            if (Ai_UnitIsHostileToActive(nunit) != 0) {
                                count += 1;
                            }
                        }
                    }
                    nb += 2;
                }

return count;
}
static inline void *Ai_ActionTileUnit(u8 id) {
    extern u8 gUnits[];
    if (id) return gUnits + (id - 1) * 0x280;
    return NULL;
}
static inline s32 Ai_CountHostileNeighborsIn(AiActionMap *map, s16 x, s16 y, s16 *table) {
    extern u8 gBattleMap[];
    u8 Ai_UnitIsHostileToActive(void *);
    s32 count = 0;
    s16 *nb = table;
    s32 dx;
    while ((dx = nb[0]) != 0x7fff) {
        s32 ny;
        s32 nx;
        u8 oob;
        nx = x + dx;
        ny = y + nb[1];
        oob = 0;
        if (nx < map->xMin || map->xMax - 1 < nx || ny < map->yMin || map->yMax - 1 < ny)
            oob = 1;
        if (!oob) {
            u8 id = gBattleMap[(s8)nx + ((s8)ny << 6) + 0xd];
            if (id && Ai_UnitIsHostileToActive(Ai_ActionTileUnit(id))) count++;
        }
        nb += 2;
    }
    return count;
}

typedef struct AiRangeCell_800F9574 { u8 pad[0x610E]; s16 value; } AiRangeCell_800F9574;
static inline s16 Map_ReadAiRange_800F9574(u8 *cell) { return ((AiRangeCell_800F9574 *)cell)->value; }
#pragma cplusplus on
class WindowDrawInterface {
public:
 u8 data[0x40];
 virtual void unk08();
 virtual void unk0C();
 virtual void unk10();
 virtual void unk14();
 virtual void unk18();
 virtual void unk1C();
 virtual void draw(s32, s32, void *, s32, s32, f32);
};
#pragma cplusplus reset
#pragma cplusplus on
struct AiCommandContext { u32 unk0; void *unit; u8 pad[5]; u8 x, y; AiCommandContext *set(void *u) { unit=u; return this; } };
#pragma cplusplus reset
typedef struct CardFileStatus { u8 name[32]; u32 length, time; u8 game[4], company[2]; u8 bannerFormat, pad; u32 iconAddress; u16 iconFormat, iconSpeed; u32 commentAddress; u8 offsets[0x30]; } CardFileStatus;
struct AiFields { u8 pad[4]; volatile u16 f4; volatile u8 f6; u8 pad7; u8 f8[0x10]; };
static inline void AiFields_Set(struct AiFields *s, u16 v) { s->f4 = v; s->f6 = 2; }
static inline void SetupCardStatus(CardFileStatus *s) {
    s->commentAddress = 0x2000;
    s->iconAddress = 0;
    s->bannerFormat = (s->bannerFormat & ~3) | 1;
    s->iconFormat = (s->iconFormat & ~3) | 1;
    s->iconSpeed = (s->iconSpeed & ~3) | 3;
    s->iconFormat = (s->iconFormat & ~0xC) | 4;
    s->iconSpeed = (s->iconSpeed & ~0xC) | 8;
    s->iconFormat = (s->iconFormat & ~0x30) | 0x10;
    s->iconSpeed = (s->iconSpeed & ~0x30) | 0x30;
    s->iconFormat = s->iconFormat & ~0xC0;
    s->iconSpeed = s->iconSpeed & ~0xC0;
    s->bannerFormat = (s->bannerFormat & ~4) | 4;
}
typedef struct MapVisibilityCell { u8 pad[0x200D]; u8 value; } MapVisibilityCell;
typedef struct MapCostCell { u8 pad[0x610E]; s16 cost; } MapCostCell;
typedef struct F43Pos { u8 x, y; u16 id; } F43Pos;
typedef struct F43Eval { void **vtable; void *entry, *unit; F43Pos *pos; } F43Eval;
typedef struct F43Range { void *vtable; s32 value; } F43Range;
typedef struct { s32 a; s32 b; } PairAB;
typedef struct { s32 *a; s32 b; } SortIteratorFields;
typedef struct HeapC55 HeapC55;
struct HeapC55 { u32 unk0, unk4; HeapC55 *prev, *next; u32 size; HeapC55 *owner, *free; u32 extent; };
static inline void HeapC55_PrintList(HeapC55 **table) { void DebugPrint(void *,...); extern u8 lbl_802700D8[]; s32 i; u32 ext; HeapC55 *h;
for(i=0;i<16;i++,table++){h=*table;if(h){ext=h->extent;
DebugPrint(lbl_802700D8+0x18);DebugPrint(lbl_802700D8+0xa2);
DebugPrint(lbl_802700D8+0xd4,i,h,(u8*)h+ext,ext,(u8*)*table+4);
}}
}
static inline s32 HeapC55_FindIndex(HeapC55 **table, HeapC55 *heap) { s32 i; for(i=0;i<16;i++,table++) if(*table==heap) return i; return -1; }
static inline void *HeapC55_End(void *end, void **fallback) { if(end) return end; return *fallback; }
static inline HeapC55 *HeapC55_Append(HeapC55 *head, HeapC55 *block) { HeapC55 *tail=head; if(head) { HeapC55 *next; while((next=tail->next)!=0) tail=next; } block->next=0; block->prev=tail; if(tail) tail->next=block; if(head) return head; return block; }
static inline void HeapC55_PrintAll(void) {
void DebugPrint(void *,...); extern u8 lbl_802700D8[],lbl_80320B88[]; extern u32 *lbl_80367860,*lbl_80367868; extern u32 lbl_80367864,lbl_8036786C;
s32 mb;u32 n;u8 *lo,*hi;HeapC55 **base,**table;
mb=24; if((u32)lbl_80367860>0x81800000U)mb=48;
DebugPrint(lbl_802700D8+0x18);
n=mb<<20; DebugPrint(lbl_802700D8+0x1a,0x80000000U,n+0x80000000U,n);
hi=(u8*)lbl_80367864;lo=(u8*)lbl_80367860;DebugPrint(lbl_802700D8+0x46,lo,hi,hi-lo);
if(lbl_80367868)lo=(u8*)lbl_80367868+((HeapC55*)lbl_80367868)->extent;else lo=(u8*)lbl_80367860;
hi=HeapC55_End((void*)lbl_8036786C,(void**)&lbl_80367864);
DebugPrint(lbl_802700D8+0x7a,lo,hi,hi-lo);
base=(HeapC55**)lbl_80320B88;table=base;HeapC55_PrintList(table);
}
static inline HeapC55 *HeapC55_Best(HeapC55 *p,u32 size) { u32 n; HeapC55 *best=0; u32 limit=0x7fffffff; for(;p;p=p->next) { n=p->size; if(n<=limit && n>=size) { limit=n; best=p; } } return best; }
static inline u8 relation_is_one(void *a, void *b) {
    u8 Allegiance_Compare(void *, void *);
    return Allegiance_Compare(a, b) == 1;
}
static inline void Init_800F20E0_Entries(void *arg) {
    void fn_80060060(void *);
    u8 *base = (u8 *)arg;
    s32 i;
    i = 0;
    do {
        fn_80060060(base + i * 0xA0 + 8);
        i++;
    } while (i < 4);
}
extern s32 lbl_8036A0C8;
extern s32 lbl_8036A0D0;
extern s32 lbl_8036A0DC;
extern s32 lbl_8036A0E4;
extern s32 lbl_8036A0C0;

extern u16* g_someArray;  // gCardWork
extern u8* g_otherArray;  // gAiState
extern u8 g_byteVar;      // gBattleState

extern char __files[];
extern char lbl_80271860[];
extern u8 lbl_80366E58;
extern const f32 lbl_8036A07C;

void *String_Destroy(void *arg0, s16 arg1);
void Map_BuildUnitMoveRange(void *arg0, s32 arg1, s32 arg2);

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

extern const f32 lbl_80369F3C;
extern f32 lbl_80369F5C;
extern f32 lbl_80369F60;

extern s8 lbl_803678BC;
extern s8 lbl_803678BD;
extern s8 lbl_803678BF;
extern s32 lbl_8028D788[];
extern u8 gUnits[]; /* unit table, 0x280 bytes per unit */
extern u32 gBattle[];

extern u16 lbl_8028E090[];
extern u16 lbl_8028E148[];

s32 Item_GetRangeForUnit(void *, void *);
void fn_801007A0(void *);

static inline u8 GetItemKind(void *item) {
    if (item != NULL) {
        return M2C_FIELD(item, u8 *, 0x14);
    }
    return 0xC;
}

void *Item_GetByIid(char *);

/* string object (String_Copy copies one) */
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
   operator s32() const { return *ptr; }
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
      SortIterator(s32 *p, s32 s) { ptr=p; state=s; }
    SortIterator(const SortIterator &o) { ptr=o.ptr; state=o.state; }
      SortIterator &operator+=(s32 n) { ptr+=n; return *this; }
      SortIterator operator+(s32 n) const { return SortIterator(*this) += n; }
      SortOutputProxy operator*() const { return SortOutputProxy(ptr,state); }
      SortIterator &operator++() { ++ptr; return *this; }
          SortIterator operator++(int) { SortIterator tmp(*this); ++ptr; return tmp; }
};
static inline SortIterator Sort_MakeIter(s32 *p, s32 s) { return SortIterator(p, s); }
static inline s32 *Sort_CopyBackwardIter(SortIterator first, SortIterator last, s32 *result) {
    while (last.ptr != first.ptr) {
        --last.ptr;
        SortIterator tmp(last);
        *--result = *tmp.ptr;
    }
    return result;
}
static inline s32 *Sort_CopyBackwardPtr(s32 *first, s32 *last, s32 *result) {
    while (last > first) *--result = *--last;
    return result;
}
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
  void ObjList_Init(void *);
  /* ObjList_Destroy declared at definition */
  void Camera_SetTransitionDecay(void *, f32);
s32 Str_Cmp(); /* strcmp */

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


void **Unit_GetHeldItemSlot(void *, s32);
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
        return Item_GetRangeForUnit(item, unit);
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
    void Array_Destroy(char *, void (*)(char *, int), int, unsigned int);
    void *Item_Destroy(void *, s16);
    void Heap_Free();

    void *obj;
    s16 flag;

    obj = arg0;
    flag = arg1;

    if (obj != 0) {
        Array_Destroy(
            (char *)obj,
            (void (*)(char *, int))Item_Destroy,
            8,
            0xC8
        );

        if (flag > 0) {
            Heap_Free(obj);
        }
    }

    return obj;
}

#pragma global_optimizer on
#pragma peephole on
void fn_800C418C(void) {
    void fn_800056CC(const char *, ...);
    extern void *lbl_80367870;
    extern char lbl_802700D8[];

    char *msg;
    u8 *b;
    u8 *a;
    u8 *base;

    base = *(u8 **)((u8 *)lbl_80367870 + 0x18);
    msg = lbl_802700D8;
    for (a = base; a != NULL; a = *(u8 **)(a + 0xC)) {
        for (b = base; b != NULL; b = *(u8 **)(b + 0xC)) {
            if (a != b) {
                if (b == a + *(s32 *)(a + 0x10)) {
                    fn_800056CC(msg);
                }
                if (a == b + *(s32 *)(b + 0x10)) {
                    fn_800056CC(msg + 0xC);
                }
            }
        }
    }
}
#pragma global_optimizer reset
#pragma peephole reset
s32 fn_800C4240(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

void Heap_FreeRaw(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

void Heap_Free(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

s32 Heap_AllocRaw(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

s32 Heap_Alloc(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

static inline s32 Heap_FindByName(void *name) {
s32 Str_Cmp(void *,void *);
extern u32 lbl_80320B88[];
u32 *p=lbl_80320B88;
s32 i;
for(i=0;i<16;i++,p++) {
if(*p && Str_Cmp(name,(void *)(*p+4))==0) return i;
}
return -1;
}
#pragma global_optimizer off
s32 fn_800C4304(void *arg0) { return Heap_FindByName(arg0); }
#pragma global_optimizer off
void fn_800C4384(void) {
void DebugPrint(const char *,...);
extern char lbl_802700D8[];
extern HeapC55 *lbl_80320B88[];
extern u32 *lbl_80367860, *lbl_80367868;
extern u32 lbl_80367864, lbl_8036786C;
s32 mb, i;
u32 n, ext;
HeapC55 **table, *h;
u8 *lo, *hi;
mb=24; if((u32)lbl_80367860>0x81800000U)mb=48;
DebugPrint(lbl_802700D8+0x18);
n=mb<<20; DebugPrint(lbl_802700D8+0x1a,0x80000000U,n+0x80000000U,n);
hi=(u8*)lbl_80367864;lo=(u8*)lbl_80367860;DebugPrint(lbl_802700D8+0x46,lo,hi,hi-lo);
if(lbl_80367868)lo=(u8*)lbl_80367868+((HeapC55*)lbl_80367868)->extent;else lo=(u8*)lbl_80367860;
hi=(u8*)lbl_8036786C;if(hi){}else hi=(u8*)lbl_80367864;
DebugPrint(lbl_802700D8+0x7a,lo,hi,hi-lo);
i=0;
table=lbl_80320B88;
do {
h=*table;
if(h){ext=h->extent;
DebugPrint(lbl_802700D8+0x18);DebugPrint(lbl_802700D8+0xa2);
DebugPrint(lbl_802700D8+0xd4,i,h,(u8*)h+ext,ext,(u8*)*table+4);
}
++i; ++table;
} while(i<16);
}
#pragma global_optimizer on
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
 if (arg0) {
 void *header = (char*)arg0 - 0x20;
 fn_800C53B0(*(s32*)((char*)header + 0x14), header);
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

#pragma global_optimizer off
void Heap_AdjustExtent(s32 arg0) {
    extern HeapC55 *lbl_80367868;
    HeapC55 *node;
    HeapC55 *g;
    u32 next;

    g = lbl_80367868;
    node = g->free;
    while ((next = (u32)node->next) != 0) {
        node = (HeapC55 *)next;
    }
    g->extent += arg0;
    node->size += arg0;
}
#pragma global_optimizer reset
static inline void Heap_Select_Impl(char *arg0, u32 *table) {
    s32 Str_Cmp(char *, char *);
    extern u32 lbl_80320B88[];
    extern u32 lbl_80367870;
    u32 *p = table;
    s32 i = 0;
    u32 entry;

    while (i < 0x10) {
        entry = *p;
        if (entry != 0) {
            if (Str_Cmp(arg0, (char *)(entry + 4)) == 0) {
                lbl_80367870 = lbl_80320B88[i];
                return;
            }
        }
        i++;
        p++;
    }
}

void Heap_Select(char *arg0) {
    extern u32 lbl_80320B88[];
    Heap_Select_Impl(arg0, lbl_80320B88);
}
#pragma global_optimizer reset
void fn_800C4728(s32 arg0) {
    extern s32 lbl_80320B88[];
    extern s32 lbl_80367870;
    lbl_80367870 = lbl_80320B88[arg0];
}

#pragma global_optimizer off
s32 fn_800C4740(void) {
    extern u32 lbl_80320B88[];
    extern u32 lbl_80367870;
    u32 active;
    u32 *entry;
    s32 index;
    s32 groups;

    groups = 2;
    active = lbl_80367870;
    entry = &lbl_80320B88[0];
    index = 0;

    for (; groups != 0; groups--) {
        if (*entry == active) {
            return index;
        }

        index += 1;
        if (*++entry == active) {
            return index;
        }
        index += 1;
        if (*++entry == active) {
            return index;
        }
        index += 1;
        if (*++entry == active) {
            return index;
        }
        index += 1;
        if (*++entry == active) {
            return index;
        }
        index += 1;
        if (*++entry == active) {
            return index;
        }
        index += 1;
        if (*++entry == active) {
            return index;
        }
        index += 1;
        if (*++entry == active) {
            return index;
        }

        entry += 1;
        index += 1;
    }

    return -1;
}
#pragma use_lmw_stmw on
static inline u32 Heap_AlignSize(u32 n) { u32 aligned=(n+31)&~31U; return aligned; }
static inline s32 Heap_FindInTable(u32 *table,u32 key) {
u32 *entry=table;
s32 i; for(i=0;i<16;entry++,i++) { if(*entry==key)return i; } return -1;
}

#pragma cplusplus on
#pragma use_lmw_stmw on
#pragma global_optimizer on
extern "C" void fn_800C47E8(void) {
extern u32 lbl_80320B88[],lbl_80367870;
extern u32 *lbl_8036786C;
extern char lbl_802700D8[];
void DebugPrint(const char *,...);
void fn_802001F8(void *,u32);
void fn_8005C7A4(s32);
void fn_8005BA08(s8);
u32 *table;
s32 index,selected,diff;
bool same;
u32 *heap;
table=lbl_80320B88;
index=Heap_FindInTable(table,(u32)lbl_8036786C);
DebugPrint(lbl_802700D8+0xEE,(char *)lbl_8036786C+4);
same=(index==Heap_FindInTable(table,lbl_80367870));
lbl_8036786C=*(u32 **)((u8 *)lbl_8036786C+0x10);
heap=(u32 *)lbl_80320B88[index];
fn_802001F8(heap,heap[7]);
fn_8005C7A4(Heap_FindInTable(table,(u32)heap));
lbl_80320B88[index]=0;
if(lbl_8036786C){
selected=Heap_FindInTable(table,(u32)lbl_8036786C);
if(same){
lbl_80367870=lbl_80320B88[selected];
fn_8005BA08((s8)selected);
}
}
}
#pragma cplusplus reset
#pragma cplusplus on
extern "C" void fn_800C4B8C(void) {
extern u32 lbl_80320B88[],lbl_80367870;
extern u32 *lbl_80367868;
extern char lbl_802700D8[];
void DebugPrint(const char *,...);
void fn_802001F8(void *,u32);
void fn_8005C7A4(s32);
void fn_8005BA08(s8);
u32 *table;
s32 index,selected,diff;
bool same;
u32 *heap;
table=lbl_80320B88;
index=Heap_FindInTable(table,(u32)lbl_80367868);
DebugPrint(lbl_802700D8+0xEE,(char *)lbl_80367868+4);
same=(index==Heap_FindInTable(table,lbl_80367870));
lbl_80367868=*(u32 **)((u8 *)lbl_80367868+0x10);
heap=(u32 *)lbl_80320B88[index];
fn_802001F8(heap,heap[7]);
fn_8005C7A4(Heap_FindInTable(table,(u32)heap));
lbl_80320B88[index]=0;
if(lbl_80367868){
selected=Heap_FindInTable(table,(u32)lbl_80367868);
if(same){
lbl_80367870=lbl_80320B88[selected];
fn_8005BA08((s8)selected);
}
}
}
#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
s32 fn_800C4F30(void *arg0, s32 arg1)
{
    extern u32 lbl_8036786C;
    extern u32 lbl_80367864;
    extern u32 lbl_80367870;
    extern u32 lbl_80320B88[];
    extern char lbl_802700D8[];

    void Str_CopyPad(void *, const void *, s32);
    void fn_8005BA08(s8);
    void DebugPrint(const char *, ...);

    s32 index;
    u8 *heap;
    u32 size;
    u8 *data;
    u32 *table;
    s32 groups;
    u32 end;

    size = Heap_AlignSize(arg1);

    end=lbl_8036786C;
    if (end != 0) {
        heap = (u8 *)(end - size);
    } else {
        heap = (u8 *)(lbl_80367864 - size);
    }

    index=Heap_FindInTable(lbl_80320B88,0);

    Str_CopyPad(heap + 4, arg0, 0xB);

    heap[0xF] = 0;
    *(u32 *)(heap + 0x10) = 0;


    *(u32 *)(heap + 0x1C) = size;
    *(u32 *)(heap + 0x14) = 0;
    *(void **)(heap + 0x18) = heap + 0x20;
    *(u32 *)heap = 0x48454150;

    *(u32 *)(*(u8 **)(heap + 0x18) + 0xC) = 0;
    *(u32 *)(*(u8 **)(heap + 0x18) + 8) = 0;
    *(u32 *)(*(u8 **)(heap + 0x18) + 0x10) = *(u32 *)(heap + 0x1C) - 0x20;

    lbl_80320B88[index] = (u32)heap;
    lbl_80367870 = lbl_80320B88[index];

    fn_8005BA08((s8)index);

    DebugPrint(
        lbl_802700D8 + 0x106,
        heap,
        arg0,
        size >> 10
    );

    *(u32 *)(heap + 0x10) = lbl_8036786C;
    lbl_8036786C = (u32)heap;

    return index;
}
#pragma push
#pragma optimization_level 4
#pragma opt_lifetimes off
s32 Heap_Create(void *arg0, s32 arg1)
{
    extern u8 *lbl_80367860;
    extern u8 *lbl_80367868;
    extern void *lbl_80367870;
    extern void *lbl_80320B88[];
    extern char lbl_802700D8[];

    void Str_CopyPad(void *, const void *, s32);
    void fn_8005BA08(s8);
    void DebugPrint(const char *, ...);

    u32 size;
    u8 *heap;
    u8 *previous;
    void **table;
    s32 groups;
    register s32 index;

    size = (arg1 + 0x1F) & ~0x1F;

    previous = lbl_80367868;

    if (previous) {
        heap = previous + *(u32 *)(previous + 0x1C);
    } else {
        heap = lbl_80367860;
    }

    index = Heap_FindUnusedIndex(lbl_80320B88);

    Str_CopyPad(heap + 4, arg0, 0xB);

    heap[0xF] = 0;
    *(u32 *)(heap + 0x10) = 0;
    *(u32 *)(heap + 0x1C) = size;
    *(u32 *)(heap + 0x14) = 0;
    *(void **)(heap + (u32)0x18) = heap + 0x20;
    *(u32 *)heap = 0x48454150;

    *(u32 *)(*(u8 **)(heap + 0x18) + 0xC) = 0;
    *(u32 *)(*(u8 **)(heap + 0x18) + 0x8) = 0;
    *(u32 *)(*(u8 **)(heap + 0x18) + 0x10) = *(u32 *)(heap + 0x1C) - 0x20;

    lbl_80320B88[index] = heap;
    lbl_80367870 = lbl_80320B88[index];

    fn_8005BA08((s8)index);

    DebugPrint(
        lbl_802700D8 + 0x106,
        heap,
        arg0,
        size >> 10
    );

    *(void **)(heap + 0x10) = lbl_80367868;
    lbl_80367868 = heap;

    return index;
}
#pragma pop
extern u32* lbl_80367860;
extern u32 lbl_80367864;
extern u32* lbl_80367868;
extern u32 lbl_8036786C;
extern s32 lbl_80366DDC;
static inline u8 *Heap_GetFreeStart(void) {
    HeapC55 *heap = (HeapC55 *)lbl_80367868;
    if (heap != NULL) return (u8 *)heap + heap->extent;
    return (u8 *)lbl_80367860;
}
static inline u8 *Heap_GetFreeEnd(void) {
    u8 *end = (u8 *)lbl_8036786C;
    if (end != NULL) return end;
    return (u8 *)lbl_80367864;
}
#pragma optimization_level 3
s32 Heap_GetFree(void) { u8 *lo = Heap_GetFreeStart(); u8 *hi = Heap_GetFreeEnd(); return hi-lo; }
#pragma optimization_level reset
void fn_800C5300(void) {
s32 OSGetArenaLo(void); s32 OSGetArenaHi(void); void DebugPrint(void *, ...);
extern u8 lbl_802700D8[]; extern u32 lbl_80320B88[];
u32 *p; int i;
lbl_80367860=(u32*)OSGetArenaLo();
lbl_80367864=(u32)OSGetArenaHi();
p=lbl_80320B88;
for(i=0;i<15;i++) p[i]=0;
lbl_80367868=0; lbl_8036786C=0; p[15]=0;
DebugPrint(lbl_802700D8+0x13D);
DebugPrint(lbl_802700D8+0x152,lbl_80367860,lbl_80367864);
}

static inline HeapC55 *DLExtract_C55(HeapC55 *list, HeapC55 *cell) {
    if (cell->next != NULL) {
        cell->next->prev = cell->prev;
    }
    if (cell->prev != NULL) {
        cell->prev->next = cell->next;
        return list;
    }
    return cell->next;
}

int fn_800C53B0(HeapC55 *heap, HeapC55 *block) {
    if ((s32)block->size < 0) {
        HeapC55 *next, *prev, *head;
        s32 size;
        block->size = -block->size;
        heap->owner = DLExtract_C55(heap->owner, block);
        prev = 0;
        head = heap->free;
        next = head;
        while (next) { prev = next; next = next->next; }
        while (prev) { if (prev <= block) break; next = prev; prev = prev->prev; }
        block->next = next;
        block->prev = prev;
        if (next) {
            next->prev = block;
            size = block->size;
            if ((u8 *)block + size == (u8 *)next) {
                block->size = size + next->size;
                next = next->next;
                block->next = next;
                if (next) next->prev = block;
            }
        }
        if (prev) {
            prev->next = block;
            size = prev->size;
            if ((u8 *)prev + size == (u8 *)block) {
                prev->size = size + block->size;
                prev->next = next;
                if (next) next->prev = prev;
            }
        } else {
            head = block;
        }
        heap->free = head;
        return;
    } else {
        HeapC55 *next, *prev, *head;
        s32 size;
        heap->owner = DLExtract_C55(heap->owner, block);
        prev = 0;
        head = heap->free;
        next = head;
        while (next) { if (block <= next) break; prev = next; next = next->next; }
        block->next = next;
        block->prev = prev;
        if (next) {
            next->prev = block;
            size = block->size;
            if ((u8 *)block + size == (u8 *)next) {
                block->size = size + next->size;
                next = next->next;
                block->next = next;
                if (next) next->prev = block;
            }
        }
        if (prev) {
            prev->next = block;
            size = prev->size;
            if ((u8 *)prev + size == (u8 *)block) {
                prev->size = size + block->size;
                prev->next = next;
                if (next) next->prev = prev;
            }
        } else {
            head = block;
        }
        heap->free = head;
        return;
    }
}

#pragma push
#pragma optimization_level 4
#pragma global_optimizer on
#pragma opt_common_subs off
#pragma opt_loop_invariants off
void *fn_800C55B0(HeapC55 *self,s32 bytes){
void DebugPrint(void *,...);void fn_8005BC8C(s8);
extern u8 lbl_802700D8[];extern u8 lbl_80320B88[];
u32 size; HeapC55 **base; HeapC55 *block; s32 mb; HeapC55 **table; HeapC55 *p,*head; u32 n; u8 *lo,*hi;
size=(bytes+0x3f)&~31;
block=HeapC55_Best(self->free,size);
if(block==0){mb=24; if((u32)lbl_80367860>0x81800000U)mb=48;
DebugPrint(lbl_802700D8+0x18);
n=mb<<20; DebugPrint(lbl_802700D8+0x1a,0x80000000U,n+0x80000000U,n);
hi=(u8*)lbl_80367864;lo=(u8*)lbl_80367860;DebugPrint(lbl_802700D8+0x46,lo,hi,hi-lo);
if(lbl_80367868)lo=(u8*)lbl_80367868+((HeapC55*)lbl_80367868)->extent;else lo=(u8*)lbl_80367860;
hi=HeapC55_End((void*)lbl_8036786C,(void**)&lbl_80367864);
DebugPrint(lbl_802700D8+0x7a,lo,hi,hi-lo);
base=(HeapC55**)lbl_80320B88;table=base;HeapC55_PrintList(table);
fn_8005BC8C((s8)HeapC55_FindIndex(base,self));table=base;
block=HeapC55_Best(self->free,size);
mb=24; if((u32)lbl_80367860>0x81800000U)mb=48;
DebugPrint(lbl_802700D8+0x18);
n=mb<<20; DebugPrint(lbl_802700D8+0x1a,0x80000000U,n+0x80000000U,n);
hi=(u8*)lbl_80367864;lo=(u8*)lbl_80367860;DebugPrint(lbl_802700D8+0x46,lo,hi,hi-lo);
if(lbl_80367868)lo=(u8*)lbl_80367868+((HeapC55*)lbl_80367868)->extent;else lo=(u8*)lbl_80367860;
hi=HeapC55_End((void*)lbl_8036786C,(void**)&lbl_80367864);
DebugPrint(lbl_802700D8+0x7a,lo,hi,hi-lo);
HeapC55_PrintList(table);
}
n=block->size-size;
if(n<64){p=block->next;head=self->free;if(p)p->prev=block->prev;p=block->prev;if(p)p->next=block->next;else head=block->next;self->free=head;block->owner=self;}
else{block->size=n;block=(HeapC55*)((u8*)block+n);block->size=-size;block->owner=self;}
self->owner=HeapC55_Append(self->owner,block);return block;
}
#pragma global_optimizer on
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_lifetimes off
#pragma use_lmw_stmw on
s32 fn_800C5A48(s32 arg0, s32 bytes) {
    void DebugPrint(void *, ...);
    void fn_8005BC8C(s8);
    extern u8 lbl_802700D8[], lbl_80320B88[];
    extern u32 *lbl_80367860, *lbl_80367868;
    extern u32 lbl_80367864, lbl_8036786C;
    HeapC55 *block;
    HeapC55 *p, *head;
    u32 n;
    s32 mb;
    u8 *lo, *hi;
    HeapC55 **base;

    if (bytes < 0)
        return (s32)fn_800C55B0((HeapC55 *)arg0, -bytes);
    bytes = (bytes + 0x3f) & ~31;
    block = HeapC55_Best(((HeapC55 *)arg0)->free, (u32)bytes);
    if (!block) {
        mb = 24;
        if ((u32)lbl_80367860 > 0x81800000U)
            mb = 48;
        DebugPrint(lbl_802700D8 + 0x18);
        n = mb << 20;
        DebugPrint(lbl_802700D8 + 0x1a, 0x80000000U, n + 0x80000000U, n);
        hi = (u8 *)lbl_80367864;
        lo = (u8 *)lbl_80367860;
        DebugPrint(lbl_802700D8 + 0x46, lo, hi, hi - lo);
        if (lbl_80367868)
            lo = (u8 *)lbl_80367868 + ((HeapC55 *)lbl_80367868)->extent;
        else
            lo = (u8 *)lbl_80367860;
        hi = HeapC55_End((void *)lbl_8036786C, (void **)&lbl_80367864);
        DebugPrint(lbl_802700D8 + 0x7a, lo, hi, hi - lo);
        base = (HeapC55 **)lbl_80320B88;
        HeapC55_PrintList(base);
        fn_8005BC8C((s8)HeapC55_FindIndex(base, (HeapC55 *)arg0));
        block = HeapC55_Best(((HeapC55 *)arg0)->free, (u32)bytes);
        mb = 24;
        if ((u32)lbl_80367860 > 0x81800000U)
            mb = 48;
        DebugPrint(lbl_802700D8 + 0x18);
        n = mb << 20;
        DebugPrint(lbl_802700D8 + 0x1a, 0x80000000U, n + 0x80000000U, n);
        hi = (u8 *)lbl_80367864;
        lo = (u8 *)lbl_80367860;
        DebugPrint(lbl_802700D8 + 0x46, lo, hi, hi - lo);
        if (lbl_80367868)
            lo = (u8 *)lbl_80367868 + ((HeapC55 *)lbl_80367868)->extent;
        else
            lo = (u8 *)lbl_80367860;
        hi = HeapC55_End((void *)lbl_8036786C, (void **)&lbl_80367864);
        DebugPrint(lbl_802700D8 + 0x7a, lo, hi, hi - lo);
        HeapC55_PrintList(base);
    }
    n = block->size - bytes;
    if (n < 64) {
        p = block->next;
        head = ((HeapC55 *)arg0)->free;
        if (p)
            p->prev = block->prev;
        p = block->prev;
        if (p)
            p->next = block->next;
        else
            head = block->next;
        ((HeapC55 *)arg0)->free = head;
        block->owner = (HeapC55 *)arg0;
    } else {
        block->size = bytes;
        p = (HeapC55 *)((u8 *)block + bytes);
        block->owner = (HeapC55 *)arg0;
        p->size = n;
        p->prev = block->prev;
        p->next = block->next;
        if (p->next)
            p->next->prev = p;
        if (p->prev)
            p->prev->next = p;
        else
            ((HeapC55 *)arg0)->free = p;
    }
    head = ((HeapC55 *)arg0)->owner;
    block->next = head;
    block->prev = 0;
    if (head)
        head->prev = block;
    ((HeapC55 *)arg0)->owner = block;
    return (s32)block;
}
#pragma opt_lifetimes on
#pragma opt_propagation on
#pragma opt_common_subs on

#pragma global_optimizer on
void fn_800C5EF8(s32 arg0) {
    void Process_CreateChild(void *, s32);
    void Process_Create(void *, s32);
    extern u8 lbl_8028D908[];
    extern u8 lbl_8028D7A4[];
    Process_CreateChild(lbl_8028D908, arg0);
    Process_Create(lbl_8028D7A4, 5);
}

void fn_800C5F34(s32 arg0) {
    void *Process_Find(void *);
    void Process_ClearFunc(s32);
    extern u8 lbl_8028D7A4[];

    if (Process_Find(lbl_8028D7A4) == 0) {
        Process_ClearFunc(arg0);
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
    extern void *gPadInput;
    s32 temp_r5;
    u32 temp_r0;

    M2C_FIELD(arg0, s8 *, 0x38) = 1;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
    M2C_FIELD(arg0, u32 *, 0x3C) = temp_r0;
    if ((temp_r0 >= 0xDB6U) || (temp_r5 = M2C_FIELD(gPadInput, s32 *, 4), (((temp_r5 & (M2C_FIELD(gPadInput, s32 *, 8) ^ temp_r5) & 0x1F70) == 0) == 0))) {
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        Process_ClearFunc();
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

#pragma push
#pragma optimization_level 4
void fn_800C6028(void *arg0){
void fn_800C6E44(void*);void GXSetViewport(f32,f32,f32,f32,f32,f32);void GXSetCopyClear(void*,s32);void fn_802240F0(s32,void*,f32,f32,f32,f32);void fn_8022462C(s32);void fn_80224658(s32);void GXSetZMode(s32,s32,s32);void fn_802246B8(s32);void fn_80223E5C(s32,s32,s32,s32,s32);void C_MTXOrtho(void*,f32,f32,f32,f32,f32,f32);void GXSetProjection(void*,s32);void fn_8022100C(s32);void GXClearVtxDesc(void);void GXSetVtxAttrFmt(s32,s32,s32,s32,s32);void GXSetVtxDesc(s32,s32);void GXSetCullMode(s32);void GXSetBlendMode(s32,s32,s32,s32,s32,s32,s32);void GXSetNumTevStages(s32);void GXSetTevOrder(s32,s32,s32,s32);void GXSetTevColorIn(s32,s32,s32,s32,s32);void GXSetTevAlphaIn(s32,s32,s32,s32,s32);void GXSetTevColorOp(s32,s32,s32,s32,s32,s32);void GXSetTevAlphaOp(s32,s32,s32,s32,s32,s32);void GXSetTevColor(s32,void*);void GXSetChanMatColor(s32,void*);void Ui_LoadAtlasTex(s32,void*,s32);void fn_80222C50(void*,s32);u16 GXGetTexObjWidth(void*);u16 GXGetTexObjHeight(void*);void GXSetNumChans(s32);void PSMTXScale(void*,f32,f32,f32);void fn_80224E50(void*,s32,s32);void fn_802201A8(s32,s32,s32,s32,s32,s32);void PSMTXIdentity(void*);void GXLoadPosMtxImm(void*,s32);void fn_80224DCC(void*,s32);void GXSetCurrentMtx(s32);void fn_802245D8(s32,s32,s32,s32);void GXBegin(s32,s32,s32);
extern f32 lbl_80369D8C,lbl_80369D90,lbl_80369D94,lbl_80369D98,lbl_80369D9C;extern f32 lbl_80369DA0,lbl_80369DA4,lbl_80369DA8;extern f64 lbl_80369DB0;extern u32 lbl_8036C498,lbl_8036C49C,lbl_8036C4A0,lbl_8036C4A4;extern u32 lbl_8036C4A8,lbl_8036C4AC,lbl_8036C4B0,lbl_8036C4C0,lbl_8036C4C4;extern u32 lbl_80369D70,lbl_80369D74,lbl_80369D78,lbl_80369D84,lbl_80369D88;
f32 sp250[3][4];f32 sp210[4][4];f32 sp1E0[3][4];f32 sp1A0[4][4];f32 sp170[3][4];f32 sp130[4][4];f32 sp100[3][4];f32 spC0[4][4];u8 spA0[0x20];u8 sp80[0x20];u8 sp60[0x20];u8 sp40[0x20];u32 sp3C,sp38,sp34,sp30,sp2C,sp28,sp24,sp20,sp1C,sp18,sp14,sp10,spC,sp8;u16 w,h;volatile s16 *fifo;s32 mode;
mode=*(s32*)((u8*)arg0+0x34);switch(mode){
case 0:fn_800C6E44(arg0);break;
case 2:
GXSetViewport(lbl_80369D8C,lbl_80369D8C,lbl_80369D90,lbl_80369D94,lbl_80369D98,lbl_80369D9C);sp30=lbl_8036C4A8;GXSetCopyClear(&sp30,0xFFFFFF);sp34=lbl_8036C4AC;fn_802240F0(0,&sp34,lbl_80369D8C,lbl_80369D8C,lbl_80369D8C,lbl_80369D8C);fn_8022462C(1);fn_80224658(1);GXSetZMode(1,3,1);fn_802246B8(1);fn_80223E5C(7,0,1,7,0);C_MTXOrtho(sp210,lbl_80369DA0,lbl_80369D94,lbl_80369D8C,lbl_80369D90,lbl_80369DA4,lbl_80369DA8);GXSetProjection(sp210,1);fn_8022100C(0);GXClearVtxDesc();GXSetVtxAttrFmt(0,9,1,3,0);GXSetVtxDesc(9,1);GXSetVtxAttrFmt(0,0xD,1,3,0);GXSetVtxDesc(0xD,1);GXSetCullMode(1);GXSetBlendMode(4,0,0,0,0,0,2);GXSetBlendMode(5,0,0,0,0,0,2);GXSetNumTevStages(1);GXSetTevOrder(0,0,0,0xFF);GXSetTevColorIn(0,2,4,8,0xF);GXSetTevAlphaIn(0,4,7,7,7);GXSetTevColorOp(0,0,0,0,1,0);GXSetTevAlphaOp(0,0,0,0,1,0);sp38=lbl_8036C4B0;GXSetTevColor(1,&sp38);sp3C=lbl_80369D78;GXSetTevColor(2,&sp3C);Ui_LoadAtlasTex(*(s32*)((u8*)arg0+0x30),spA0,*(s32*)((u8*)arg0+0x34));fn_80222C50(spA0,0);w=GXGetTexObjWidth(spA0);h=GXGetTexObjHeight(spA0);GXSetNumChans(1);{f32 sx=lbl_80369D9C/(f32)(u16)w,sy=lbl_80369D9C/(f32)(u16)h;PSMTXScale(sp250,sx,sy,lbl_80369D9C);}fn_80224E50(sp250,0x1E,1);fn_802201A8(0,1,4,0x1E,0,0x7D);PSMTXIdentity(sp250);GXLoadPosMtxImm(sp250,0);fn_80224DCC(sp250,0);GXSetCurrentMtx(0);fn_802245D8(1,4,5,0);GXBegin(0x80,0,4);fifo=(volatile s16*)0xCC008000;fifo[0]=0x75;fifo[0]=0x9A;fifo[0]=-0x64;fifo[0]=0;fifo[0]=0;fifo[0]=0x1ED;fifo[0]=0x9A;fifo[0]=-0x64;fifo[0]=0x178;fifo[0]=0;fifo[0]=0x1ED;fifo[0]=0x102;fifo[0]=-0x64;fifo[0]=0x178;fifo[0]=0x68;fifo[0]=0x75;fifo[0]=0x102;fifo[0]=-0x64;fifo[0]=0;fifo[0]=0x68;break;
case 3:
GXSetViewport(lbl_80369D8C,lbl_80369D8C,lbl_80369D90,lbl_80369D94,lbl_80369D98,lbl_80369D9C);sp24=lbl_8036C4A0;GXSetCopyClear(&sp24,0xFFFFFF);sp28=lbl_8036C4A4;fn_802240F0(0,&sp28,lbl_80369D8C,lbl_80369D8C,lbl_80369D8C,lbl_80369D8C);fn_8022462C(1);fn_80224658(1);GXSetZMode(1,3,1);fn_802246B8(1);fn_80223E5C(7,0,1,7,0);C_MTXOrtho(sp1A0,lbl_80369D8C,lbl_80369D94,lbl_80369D8C,lbl_80369D90,lbl_80369DA4,lbl_80369DA8);GXSetProjection(sp1A0,1);fn_8022100C(0);GXClearVtxDesc();GXSetVtxAttrFmt(0,9,1,3,0);GXSetVtxDesc(9,1);GXSetVtxAttrFmt(0,0xD,1,3,0);GXSetVtxDesc(0xD,1);GXSetCullMode(1);GXSetBlendMode(4,0,0,0,0,0,2);GXSetBlendMode(5,0,0,0,0,0,2);GXSetNumTevStages(1);GXSetTevOrder(0,0,0,4);GXSetTevColorIn(0,0xA,0xF,0xF,0xF);GXSetTevAlphaIn(0,4,7,7,7);GXSetTevColorOp(0,0,0,0,1,0);GXSetTevAlphaOp(0,0,0,0,1,0);sp2C=lbl_80369D74;GXSetChanMatColor(0,&sp2C);Ui_LoadAtlasTex(*(s32*)((u8*)arg0+0x30),sp80,*(s32*)((u8*)arg0+0x34));fn_80222C50(sp80,0);w=GXGetTexObjWidth(sp80);h=GXGetTexObjHeight(sp80);GXSetNumChans(1);{f32 sx=lbl_80369D9C/(f32)(u16)w,sy=lbl_80369D9C/(f32)(u16)h;PSMTXScale(sp1E0,sx,sy,lbl_80369D9C);}fn_80224E50(sp1E0,0x1E,1);fn_802201A8(0,1,4,0x1E,0,0x7D);PSMTXIdentity(sp1E0);GXLoadPosMtxImm(sp1E0,0);fn_80224DCC(sp1E0,0);GXSetCurrentMtx(0);fn_802245D8(1,4,5,0);GXBegin(0x80,0,4);fifo=(volatile s16*)0xCC008000;fifo[0]=0xB4;fifo[0]=0x96;fifo[0]=-0x64;fifo[0]=0;fifo[0]=0;fifo[0]=0x19C;fifo[0]=0x96;fifo[0]=-0x64;fifo[0]=0xE8;fifo[0]=0;fifo[0]=0x19C;fifo[0]=0x106;fifo[0]=-0x64;fifo[0]=0xE8;fifo[0]=0x70;fifo[0]=0xB4;fifo[0]=0x106;fifo[0]=-0x64;fifo[0]=0;fifo[0]=0x70;break;
case 4:
GXSetViewport(lbl_80369D8C,lbl_80369D8C,lbl_80369D90,lbl_80369D94,lbl_80369D98,lbl_80369D9C);sp18=lbl_8036C498;GXSetCopyClear(&sp18,0xFFFFFF);sp1C=lbl_8036C49C;fn_802240F0(0,&sp1C,lbl_80369D8C,lbl_80369D8C,lbl_80369D8C,lbl_80369D8C);fn_8022462C(1);fn_80224658(1);GXSetZMode(1,3,1);fn_802246B8(1);fn_80223E5C(7,0,1,7,0);C_MTXOrtho(sp130,lbl_80369D8C,lbl_80369D94,lbl_80369D8C,lbl_80369D90,lbl_80369DA4,lbl_80369DA8);GXSetProjection(sp130,1);fn_8022100C(0);GXClearVtxDesc();GXSetVtxAttrFmt(0,9,1,3,0);GXSetVtxDesc(9,1);GXSetVtxAttrFmt(0,0xD,1,3,0);GXSetVtxDesc(0xD,1);GXSetCullMode(1);GXSetBlendMode(4,0,0,0,0,0,2);GXSetBlendMode(5,0,0,0,0,0,2);GXSetNumTevStages(1);GXSetTevOrder(0,0,0,4);GXSetTevColorIn(0,0xA,0xF,0xF,0xF);GXSetTevAlphaIn(0,4,7,7,7);GXSetTevColorOp(0,0,0,0,1,0);GXSetTevAlphaOp(0,0,0,0,1,0);sp20=lbl_80369D70;GXSetChanMatColor(0,&sp20);Ui_LoadAtlasTex(*(s32*)((u8*)arg0+0x30),sp60,*(s32*)((u8*)arg0+0x34));fn_80222C50(sp60,0);w=GXGetTexObjWidth(sp60);h=GXGetTexObjHeight(sp60);GXSetNumChans(1);{f32 sx=lbl_80369D9C/(f32)(u16)w,sy=lbl_80369D9C/(f32)(u16)h;PSMTXScale(sp170,sx,sy,lbl_80369D9C);}fn_80224E50(sp170,0x1E,1);fn_802201A8(0,1,4,0x1E,0,0x7D);PSMTXIdentity(sp170);GXLoadPosMtxImm(sp170,0);fn_80224DCC(sp170,0);GXSetCurrentMtx(0);fn_802245D8(1,4,5,0);GXBegin(0x80,0,4);fifo=(volatile s16*)0xCC008000;fifo[0]=0;fifo[0]=0xB0;fifo[0]=-0x64;fifo[0]=0;fifo[0]=0;fifo[0]=0x260;fifo[0]=0xB0;fifo[0]=-0x64;fifo[0]=0x260;fifo[0]=0;fifo[0]=0x260;fifo[0]=0x110;fifo[0]=-0x64;fifo[0]=0x260;fifo[0]=0x60;fifo[0]=0;fifo[0]=0x110;fifo[0]=-0x64;fifo[0]=0;fifo[0]=0x60;break;
case 5:
GXSetViewport(lbl_80369D8C,lbl_80369D8C,lbl_80369D90,lbl_80369D94,lbl_80369D98,lbl_80369D9C);sp8=lbl_8036C4C0;GXSetCopyClear(&sp8,0xFFFFFF);spC=lbl_8036C4C4;fn_802240F0(0,&spC,lbl_80369D8C,lbl_80369D8C,lbl_80369D8C,lbl_80369D8C);fn_8022462C(1);fn_80224658(1);GXSetZMode(1,3,1);fn_802246B8(1);fn_80223E5C(7,0,1,7,0);C_MTXOrtho(spC0,lbl_80369DA0,lbl_80369D94,lbl_80369D8C,lbl_80369D90,lbl_80369DA4,lbl_80369DA8);GXSetProjection(spC0,1);fn_8022100C(0);GXClearVtxDesc();GXSetVtxAttrFmt(0,9,1,3,0);GXSetVtxDesc(9,1);GXSetVtxAttrFmt(0,0xD,1,3,0);GXSetVtxDesc(0xD,1);GXSetCullMode(1);GXSetBlendMode(4,0,0,0,0,0,2);GXSetBlendMode(5,0,0,0,0,0,2);GXSetNumTevStages(1);GXSetTevOrder(0,0,0,0xFF);GXSetTevColorIn(0,2,4,8,0xF);GXSetTevAlphaIn(0,4,7,7,7);GXSetTevColorOp(0,0,0,0,1,0);GXSetTevAlphaOp(0,0,0,0,1,0);sp10=lbl_80369D84;GXSetTevColor(1,&sp10);sp14=lbl_80369D88;GXSetTevColor(2,&sp14);Ui_LoadAtlasTex(*(s32*)((u8*)arg0+0x30),sp40,*(s32*)((u8*)arg0+0x34));fn_80222C50(sp40,0);w=GXGetTexObjWidth(sp40);h=GXGetTexObjHeight(sp40);GXSetNumChans(1);{f32 sx=lbl_80369D9C/(f32)(u16)w,sy=lbl_80369D9C/(f32)(u16)h;PSMTXScale(sp100,sx,sy,lbl_80369D9C);}fn_80224E50(sp100,0x1E,1);fn_802201A8(0,1,4,0x1E,0,0x7D);PSMTXIdentity(sp100);GXLoadPosMtxImm(sp100,0);fn_80224DCC(sp100,0);GXSetCurrentMtx(0);fn_802245D8(1,4,5,0);GXBegin(0x80,0,4);fifo=(volatile s16*)0xCC008000;fifo[0]=0;fifo[0]=0;fifo[0]=-0x64;fifo[0]=0;fifo[0]=0;fifo[0]=0x260;fifo[0]=0;fifo[0]=-0x64;fifo[0]=0x260;fifo[0]=0;fifo[0]=0x260;fifo[0]=0x1C0;fifo[0]=-0x64;fifo[0]=0x260;fifo[0]=0x1C0;fifo[0]=0;fifo[0]=0x1C0;fifo[0]=-0x64;fifo[0]=0;fifo[0]=0x1C0;break;
}
}
#pragma pop
void fn_800C6E44(void *arg0) {
    void GXSetViewport(f32, f32, f32, f32, f32, f32);
    void GXSetCopyClear(void *, s32);
    void fn_802240F0(s32, void *, f32, f32, f32, f32);
    void fn_8022462C(s32);
    void fn_80224658(s32);
    void GXSetZMode(s32, s32, s32);
    void fn_802246B8(s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void C_MTXOrtho(void *, f32, f32, f32, f32, f32, f32);
    void GXSetProjection(void *, s32);
    void fn_8022100C(s32);
    void GXClearVtxDesc(void);
    void GXSetVtxAttrFmt(s32, s32, s32, s32, s32);
    void GXSetVtxDesc(s32, s32);
    void GXSetCullMode(s32);
    void GXSetBlendMode(s32, s32, s32, s32, s32, s32, s32);
    void GXSetNumTevStages(s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevColor(s32, void *);
    void Ui_LoadAtlasTex(s32, void *, s32);
    void fn_80222C50(void *, s32);
    u16 GXGetTexObjWidth(void *);
    u16 GXGetTexObjHeight(void *);
    void GXSetNumChans(s32);
    void PSMTXScale(void *, f32, f32);
    void fn_80224E50(void *, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void PSMTXIdentity(void *);
    void GXLoadPosMtxImm(void *, s32);
    void fn_80224DCC(void *, s32);
    void GXSetCurrentMtx(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void GXBegin(s32, s32, s32);
    extern const f32 lbl_80369D8C, lbl_80369D90, lbl_80369D94, lbl_80369D98, lbl_80369D9C;
    extern const f32 lbl_80369DA0, lbl_80369DA4, lbl_80369DA8;
    extern f64 lbl_80369DB0;
    extern const f32 lbl_80369DB8, lbl_80369DBC;
    extern u32 lbl_8036C4B4, lbl_8036C4B8, lbl_8036C4BC;
    extern u32 lbl_80369D7C, lbl_80369D80;

    f32 spA0[4][4];
    f32 sp70[3][4];
    f32 sp40[3][4];
    u8 sp20[0x20];
    u32 sp1C, sp18, sp14, sp10, spC, sp8;
    u32 alpha;
    u16 w, h;
    u32 rem;
    volatile s16 *fifo;
    f32 sx, sy;

    GXSetViewport(lbl_80369D8C, lbl_80369D8C, lbl_80369D90, lbl_80369D94, lbl_80369D98, lbl_80369D9C);
    sp1C = lbl_8036C4B4;
    GXSetCopyClear(&sp1C, 0xFFFFFF);
    sp18 = lbl_8036C4B8;
    fn_802240F0(0, &sp18, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C, lbl_80369D8C);
    fn_8022462C(1);
    fn_80224658(1);
    GXSetZMode(1, 3, 1);
    fn_802246B8(1);
    fn_80223E5C(7, 0, 1, 7, 0);
    C_MTXOrtho(spA0, lbl_80369DA0, lbl_80369D94, lbl_80369D8C, lbl_80369D90, lbl_80369DA4, lbl_80369DA8);
    GXSetProjection(spA0, 1);
    fn_8022100C(0);
    GXClearVtxDesc();
    GXSetVtxAttrFmt(0, 9, 1, 3, 0);
    GXSetVtxDesc(9, 1);
    GXSetVtxAttrFmt(0, 0xD, 1, 3, 0);
    GXSetVtxDesc(0xD, 1);
    GXSetCullMode(1);
    GXSetBlendMode(4, 0, 0, 0, 0, 0, 2);
    GXSetBlendMode(5, 0, 0, 0, 0, 0, 2);
    GXSetNumTevStages(1);
    GXSetTevOrder(0, 0, 0, 0xFF);
    GXSetTevColorIn(0, 2, 4, 8, 0xF);
    GXSetTevAlphaIn(0, 4, 7, 7, 7);
    GXSetTevColorOp(0, 0, 0, 0, 1, 0);
    GXSetTevAlphaOp(0, 0, 0, 0, 1, 0);
    sp14 = lbl_80369D7C;
    GXSetTevColor(1, &sp14);
    sp10 = lbl_80369D80;
    GXSetTevColor(2, &sp10);
    Ui_LoadAtlasTex(*(s32 *)((u8 *)arg0 + 0x30), sp20, *(s32 *)((u8 *)arg0 + 0x34));
    fn_80222C50(sp20, 0);
    w = GXGetTexObjWidth(sp20);
    h = GXGetTexObjHeight(sp20);
    GXSetNumChans(1);
    sx = lbl_80369D9C / (f32)(u16)w;
    sy = lbl_80369D9C / (f32)(u16)h;
    PSMTXScale(sp70, sx, sy);
    fn_80224E50(sp70, 0x1E, 1);
    fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
    PSMTXIdentity(sp70);
    GXLoadPosMtxImm(sp70, 0);
    fn_80224DCC(sp70, 0);
    GXSetCurrentMtx(0);
    fn_802245D8(1, 4, 5, 0);
    GXBegin(0x80, 0, 4);
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
            alpha = (0xFF - (s32)(lbl_80369DB8 * ((f32)(rem - 0x1E) / lbl_80369DBC))) & 0xFF;
        }
        GXSetTevAlphaIn(0, 7, 4, 1, 7);
        sp8 = lbl_8036C4BC;
        ((u8 *)&sp8)[3] = (u8)alpha;
        spC = sp8;
        GXSetTevColor(1, &spC);
        Ui_LoadAtlasTex(*(s32 *)((u8 *)arg0 + 0x30), sp20, *(s32 *)((u8 *)arg0 + 0x34) + 1);
        fn_80222C50(sp20, 0);
        w = GXGetTexObjWidth(sp20);
        h = GXGetTexObjHeight(sp20);
        GXSetNumChans(1);
        sx = lbl_80369D9C / (f32)(u16)w;
        sy = lbl_80369D9C / (f32)(u16)h;
        PSMTXScale(sp40, sx, sy);
        fn_80224E50(sp40, 0x1E, 1);
        fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
        GXBegin(0x80, 0, 4);
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
#pragma pop
void fn_800C73F0(s32 arg0) {
    FileCache_ReleaseSlot(arg0 + 0x30);
}

void fn_800C7414(void)
{
    void fn_80211614(s32);
    void *fn_801C9704(void);
    void *fn_801C970C(void);
    void *memcpy(void *, void *, s32);
    void fn_8022097C(void);
    void VIFlush(void);
    void VIWaitForRetrace(void);
    void DEMOInitGX(void *);
    void fn_80225118(s32, s32);
    void GXSetCopyClear(void *, s32);
    void *DemoGetCurrentBuffer(void);
    void GXCopyDisp(void *, s32);
    extern u32 gGameFlags;
    extern u8 lbl_80320BC8[];
    extern u32 lbl_8036C4CC;
    u32 flags;
    s32 i;
    u32 clear;

    fn_80211614(1);
    flags = gGameFlags;
    if (!(flags & 0x60000)) {
        if (!(flags & 0x20)) {
            if (flags & 0x40) {
                memcpy(lbl_80320BC8, fn_801C9704(), 0x3C);
            } else {
                memcpy(lbl_80320BC8, fn_801C970C(), 0x3C);
            }
        }
    } else {
        if (!(flags & 0x20)) {
            if (flags & 0x100) {
                memcpy(lbl_80320BC8, fn_801C9704(), 0x3C);
            } else {
                memcpy(lbl_80320BC8, fn_801C970C(), 0x3C);
            }
        }
    }
    fn_8022097C();
    VIFlush();
    VIWaitForRetrace();
    DEMOInitGX(lbl_80320BC8);
    if (gGameFlags & 0x40) {
        for (i = 0; i < 0x64; i++) {
            VIWaitForRetrace();
        }
    }
    fn_80225118(0, 0);
    clear = lbl_8036C4CC;
    GXSetCopyClear(&clear, 0xFFFFFF);
    GXCopyDisp(DemoGetCurrentBuffer(), 1);
    fn_80211614(0);
    VIFlush();
    VIWaitForRetrace();
    gGameFlags |= 0x10;
}

#pragma scheduling on
void fn_800C755C(void *arg0) {
    s32 OSDisableInterrupts(void);
    void OSDisableScheduler(void);
    void OSEnableScheduler(void);
    void OSRestoreInterrupts(s32);
    void fn_8005BA08(s8);
    void fn_8006EDE8(void *, void *, s32);
    void fn_80211614(s32);
    void *fn_8006E658(void);
    void *memcpy(void *, void *, s32);
    void fn_8022097C(void);
    void VIFlush(void);
    void VIWaitForRetrace(void);
    s32 VIGetTvFormat(void);
    u32 OSGetResetCode(void);
    void DEMOInitGX(void *);
    void OSPanic(void *, s32, void *, ...);
    void fn_802246EC(s32, s32);
    void fn_80225118(s32, s32);
    void GXSetCopyClear(void *, u32);
    void *DemoGetCurrentBuffer(void);
    void GXCopyDisp(void *, s32);
    extern s32 lbl_8028D788[];
    extern u8 lbl_80320BC8[];
    extern u8 lbl_8028D91C[];
    extern u8 lbl_8028D958[];
    extern u8 lbl_8028D994[];
    extern u8 lbl_8028D9D0[];
    extern u8 lbl_8028DA0C[];
    extern u8 lbl_802702A8[];
    extern u32 lbl_8036C4C8;
    s32 irq;
    unsigned long clear;
    s32 format;

    irq = OSDisableInterrupts();
    OSDisableScheduler();
    OSRestoreInterrupts(irq);

    fn_8005BA08((s8)*(s32 *)((u8 *)arg0 + 0x44));
    *(u32 *)((u8 *)arg0 + (s32)0x30) = 0;
    fn_8006EDE8((u8 *)arg0 + 0x30, (void *)lbl_8028D788[1], 4);
    fn_8005BA08((s8)*(s32 *)((u8 *)arg0 + 0x40));

    irq = OSDisableInterrupts();
    OSEnableScheduler();
    OSRestoreInterrupts(irq);

    *(u32 *)((u8 *)arg0 + 0x34) = 0;
    *((u8 *)arg0 + 0x38) = 0;
    *(u32 *)((u8 *)arg0 + 0x3c) = 0;

    fn_80211614(1);
    memcpy(lbl_80320BC8, fn_8006E658(), 0x3c);
    fn_8022097C();
    VIFlush();
    VIWaitForRetrace();

    format = VIGetTvFormat();
    switch (format) {
    case 0:
        if ((OSGetResetCode() >> 31) == 0 || (OSGetResetCode() & 2)) {
            DEMOInitGX(lbl_8028D91C);
        } else if (!(OSGetResetCode() & 1)) {
            DEMOInitGX(lbl_8028D91C);
        } else {
            DEMOInitGX(lbl_8028D958);
        }
        break;
    case 2:
        if ((OSGetResetCode() >> 31) == 0 || (OSGetResetCode() & 2)) {
            DEMOInitGX(lbl_8028D994);
        } else if (!(OSGetResetCode() & 1)) {
            DEMOInitGX(lbl_8028D994);
        } else {
            DEMOInitGX(lbl_8028D958);
        }
        break;
    case 1:
    case 5:
        if ((OSGetResetCode() >> 31) == 0 || (OSGetResetCode() & 0x20)) {
            DEMOInitGX(lbl_8028D9D0);
        } else if (!(OSGetResetCode() & 0x10)) {
            DEMOInitGX(lbl_8028D9D0);
        } else {
            DEMOInitGX(lbl_8028DA0C);
        }
        break;
    default:
        OSPanic(lbl_802702A8 + 0x76, 0x567, lbl_802702A8 + 0x87);
        break;
    }

    fn_802246EC(0, 0);
    fn_80225118(0, 0);
    clear = lbl_8036C4C8;
    GXSetCopyClear(&clear, 0xFFFFFF);
    GXCopyDisp(DemoGetCurrentBuffer(), 1);
    fn_80211614(0);
    VIFlush();
    VIWaitForRetrace();
}
#pragma scheduling reset
void fn_800C77B8(s32 arg0) {
    u8 FileCache_IsReady(s32);
    void Process_ClearFunc(s32);

    if (FileCache_IsReady(lbl_8028D788[1])) {
        Process_ClearFunc(arg0);
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
    extern s32 gGameFlags;
    if (gGameFlags & 0x60000) {
        fn_8020055C();
        return;
    }
    fn_801FE32C();
}

void fn_800C7960(void) {
    M2C_UNK fn_801FE360();
    M2C_UNK fn_80200590();
    extern s32 gGameFlags;
    if (gGameFlags & 0x60000) {
        fn_80200590();
        return;
    }
    fn_801FE360();
}

void fn_800C7994(void) {
    M2C_UNK fn_801FEF6C();
    M2C_UNK fn_8020119C();
    extern s32 gGameFlags;
    if (gGameFlags & 0x60000) {
        fn_8020119C();
        return;
    }
    fn_801FEF6C();
}

void fn_800C79C8(void) {
    M2C_UNK fn_801FEFA0();
    M2C_UNK fn_802011D0();
    extern s32 gGameFlags;
    if (gGameFlags & 0x60000) {
        fn_802011D0();
        return;
    }
    fn_801FEFA0();
}

void fn_800C79FC(void) {
    u32 OSGetResetCode(void);
    u32 fn_802118D8(void);
    u32 fn_802098F8(void);
    void fn_80209968(s32);
    extern u32 gGameFlags;
    extern u32 *gPadInput;
    u32 flags;
    u8 var;

    flags = gGameFlags;
    if (flags & 0x60000) {
        if ((OSGetResetCode() >> 31) == 0 || (OSGetResetCode() & 0x20)) {
            gGameFlags &= ~0x20;
        } else {
            gGameFlags |= 0x20;
        }
    } else if (flags & 0x10000) {
        var = 0;
        if ((OSGetResetCode() >> 31) == 0 || (OSGetResetCode() & 2)) {
            if (fn_802118D8() != 0) {
                if (fn_802098F8() == 1 || (gPadInput[1] & 0x200)) {
                    var = 1;
                }
            } else {
                fn_80209968(0);
                gGameFlags &= ~0x40;
            }
        }
        if (var == 0) {
            gGameFlags |= 0x20;
        } else {
            gGameFlags &= ~0x20;
        }
    } else if (flags & 0x80000) {
        gGameFlags = flags | 0x20;
    }
}

static inline s32 ParseToken(String *str, char *out, s32 pos) {
s32 count;
char *p;
s32 size;
u8 c;
count=0;
p=(char *)str->data;
size=str->size;
p=p+pos;
while(pos<=size && (*p==' ' || *p=='\t' || *p==',')) { pos++;p++; }
p=(char *)str->data+pos;
{ char *dest=out;
while(pos<=size && count<256 && (s8)(c=*p)!=' ' && (s8)c!='\t' && (s8)c!=',') { *dest=c;pos++;p++;count++;dest++; }
}
out[count]=0;
if(count==0)pos=0;
return pos;
}
static inline s32 ParseTokenBuf(char *data, s32 size, char *out, s32 pos) {
s32 count=0;
char *p=data+pos;
u8 c;
while(pos<=size && (*p==' ' || *p=='\t' || *p==',')) { pos++;p++; }
p=data+pos;
{ char *dest=out;
while(pos<=size && count<256 && (s8)(c=*p)!=' ' && (s8)c!='\t' && (s8)c!=',') { *dest=c;pos++;p++;count++;dest++; }
}
out[count]=0;
if(count==0)pos=0;
return pos;
}
#pragma cplusplus on
#pragma global_optimizer off
#pragma peephole on
extern "C" s32 fn_800C7B04(void *self, String *str, char *name, char *values, s32 *total) {
    void strcpy(void *, void *);
    char token[257];
    char *cursor;
    s32 pos;
    s32 count;
    char *data;
    s32 size;

    
    pos = ParseToken(str, token, 0);

    if (pos == 0) {
        return 0;
    }
    {
        u8 comment = token[0] == '#';
        if (comment == 0) {
            u8 brace;
            if (token[0] == '{' || token[0] == '}') {
                brace = 1;
            } else {
                brace = 0;
            }
            if (!brace) {
                goto valid;
            }
        }
        return 0;
    }
valid:
    strcpy(name, token);
    count = 0;
    data = str->data;
    size = str->size;
    while ((pos = ParseTokenBuf(data, size, token, pos)) != 0 && (u8)token[0] != '#') {
        strcpy(values, token);
        values += 32;
        count++;
    }
    if (total) {
        *total = count;
    }
    return 1;
}
#pragma global_optimizer reset
#pragma peephole reset
#pragma cplusplus reset
s32 fn_800C7D3C(void *self, void *list, s32 index, void *out) {
    extern char gStringErrorMsgs[];
    void fn_800C7EF8(void *);
    s32 fn_800C7F10(void *, void *, s32);
    void fn_800C8328(void *, void *, s32, String *);
    u32 strlen(const char *);
    s32 String_Compare(String *, u32, u32, char *, u32);
    String *String_Assign(String *, String *, s32, s32);
    void String_Init(void *, void *, void *);
    void *Heap_AllocRaw(u32);
    void *fn_8022C414(void *, void (*)(void *), void *, u32, u32);
    u8 fn_800C7B04(void *, String *, void *, void *, s32 *);
    void strcpy(void *, void *);

    u8 buffer[0x100];
    u8 values[0x18];
    String str;
    String tmp;
    s32 count;
    u8 alloc;
    String *entry;
    s32 stride;
    u8 *value;
    s32 offset;
    u8 *dest;
    s32 i;
    char *messages;

    str.cap = 0;
    str.size = 0;
    str.data = 0;
    str.cap = 0;
    *(s32 *)out = fn_800C7F10(self, list, index);
    *(void **)((u8 *)out + 4) = fn_8022C414(
        Heap_AllocRaw(*(s32 *)out * 0x38 + 0x10),
        fn_800C7EF8,
        0,
        0x38,
        *(s32 *)out
    );
    stride = index * 0xC;
    while ((entry = (String *)(*(u8 **)((u8 *)list + 8) + stride),
            String_Compare(entry, 0, entry->size, gStringErrorMsgs, strlen(gStringErrorMsgs))) != 0) {
        index++;
        stride += 0xC;
    }
    offset = 0;
    messages = gStringErrorMsgs;
    while ((entry = String_Assign(&str, *(String **)((u8 *)list + 8) + index++, 0, -1),
            String_Compare(entry, 0, entry->size, messages + 2, strlen(messages + 2))) != 0) {
        dest = *(u8 **)((u8 *)out + 4) + offset;
        if (fn_800C7B04(self, &str, values, buffer, &count)) {
            strcpy(dest, values);
            for (i = 0, value = buffer; i < count; value += 0x20, i++) {
                String_Init(&tmp, value, &alloc);
                fn_800C8328(self, dest, i, &tmp);
                String_Destroy(&tmp, -1);
            }
            offset += 0x38;
        }
    }
    String_Destroy(&str, -1);
    return index;
}

void fn_800C7EF8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

s32 fn_800C7F10(void *self,void *list,s32 index) {
extern char gStringErrorMsgs[];
u32 strlen(const char*);s32 String_Compare(String*,u32,u32,char*,u32);
String *String_Assign(String*,String*,s32,s32);void String_Destroy(String*,s32);
u8 fn_800C7B04(void*,String*,void*,void*,s32);
u8 buffer[0x100];u8 values[0x18];String str;
String *entry; s32 count;char *messages=gStringErrorMsgs;
str.cap=0;str.size=0;str.data=0;str.cap=0;
while((entry=*(String**)((u8*)list+8)+index, String_Compare(entry,0,entry->size,gStringErrorMsgs,strlen(gStringErrorMsgs)))!=0)index++;
count=0;
while((entry=String_Assign(&str,*(String**)((u8*)list+8)+index++,0,-1),String_Compare(entry,0,entry->size,gStringErrorMsgs+2,strlen(gStringErrorMsgs+2)))!=0){if(fn_800C7B04(self,&str,values,buffer,0))count++;}
String_Destroy(&str,-1);return count;
}

#pragma push
#pragma optimization_level 4
#pragma opt_loop_invariants off
#pragma opt_strength_reduction off
s32 fn_800C802C(void *arg0, s32 arg1) {
 typedef struct { u32 a,b,c,d,e,f,g,h; } Block;
 void String_Init(void *, char *, void *);
 s32 String_Compare(String *,u32,u32,char *,u32);
 u32 strlen(const char *);
 Block value, temp, fallback;
 String str;
 u8 alloc;
 s32 index;
 s32 result;
 u8 *self;
 u8 *entry;
 s32 offset;
 s32 listOffset;
 s32 k;
 s32 j;
 u8 *list;
 u8 equal;
 self=arg0; result=1;
 if (*(s8 *)(self+0x28)==0) {
 if(arg1<*(s32 *)(self+0x18)) {
 *(void **)(self+0x1c)=arg1<*(s32 *)(self+0x18)?(*(void ***)(self+0x14))[arg1]:0;
 *(s32 *)(self+0x20)=arg1;
 } else {*(void **)(self+0x1c)=0;*(s32 *)(self+0x20)=-1;result=0;}
 return result;
 }
 for(index=arg1;index<*(s32 *)(self+0x18);index++) {
 list=index<*(s32 *)(self+0x18)?*(u8 **)(*(u8 **)(self+0x14)+index*4):0;
 String_Init(&str,(char *)self+0x28,&alloc);
 if(list) {
 j=0;
 while(j<*(s32 *)list) {
 if(list && j<*(s32 *)list) entry=*(u8 **)(list+4)+j*0x38; else entry=0;
 if(String_Compare(&str,0,str.size,(char *)entry,strlen((char *)entry))==0) {
 *(s32 *)(self+0x24)=j;temp=*(Block *)(entry+0x18);goto found;
 } 
 j++;
 }
 }
 fallback.a=0;fallback.b=0;fallback.c=0;fallback.d=0;
 temp=fallback;
 found:
 value=temp;
 String_Destroy(&str,-1);
 equal=1;
 { s8 *p=(s8 *)&value; for(k=0;k<32;p++,k++) {if(*p!=*(s8 *)(self+0x40+k)){equal=0;break;}} }
 if(equal){*(u8 **)(self+0x1c)=list;*(s32 *)(self+0x20)=index;break;}
 }
 if(index>=*(s32 *)(self+0x18)){*(void **)(self+0x1c)=0;*(s32 *)(self+0x20)=-1;result=0;}
 return result;
}
#pragma pop
void fn_800C8328(void *unused, void *dest, s32 index, String *str)
{
    M2C_UNK *fn_800C93EC(void *);
    void fn_8023440C(char *, const char *, s32);
    s32 fn_802355BC(char *);
    f64 fn_80234524(char *);

    typedef struct { u32 d[8]; } Val32;

    volatile Val32 sp18;
    volatile Val32 sp38;
    volatile Val32 sp58;
    volatile Val32 sp78;
    volatile Val32 sp98;
    volatile Val32 spB8;
    Val32 spD8;
    Val32 spF8;
    Val32 sp118;
    volatile Val32 sp138;
    Val32 sp158;
    volatile Val32 sp178;
    volatile Val32 sp198;
    Val32 sp1B8;
    volatile Val32 sp1D8;
    Val32 sp1F8;
    volatile Val32 sp218;
    Val32 sp238;
    volatile Val32 sp258;
    volatile Val32 sp278;
    Val32 sp298;
    volatile Val32 sp2B8;
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
                goto numeric;
            }
        check_sign:
            if (c != 0x2D && c != 0x2E) {
                kind = 0;
                break;
            }
            if (c == 0x2E) {
                kind = 2;
                break;
            }
        numeric:
            kind = 1;
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

#pragma push
#pragma optimization_level 3
#pragma opt_propagation off
#pragma use_lmw_stmw on
s32 fn_800C8A9C(u8 *self,u8 *base) {
 void fn_800C94F8(void *,u32,u32,void *,u32);
 void fn_800C9874(void *,u32,u8);
 void fn_800CA18C(void *,void *,u32,void *);
 void String_Assign(void *,void *,u32,u32);
 s32 String_Compare(String *,u32,u32,char *,u32);
 u32 strlen(const char *);
 void fn_800CA018(void *,s32);
 void *Heap_Alloc(u32);
 s32 fn_800C7D3C(void *,void *,s32,void *);
 void fn_800C9BC4(void *,void *,u32,void *);
 extern char gStringErrorMsgs[];
 void fn_800CA6C8(void *,s16);
 struct {s32 capacity,size;String *data;} lines;
 String line,check;
 void *entry;
 u8 *cursor;
 u8 *p;
 char *messages;
 s32 total;
 s32 next;
 s32 offset;
 s32 count;
 s32 index;
 index=0;cursor=base;
 line.cap=0;
 lines.capacity=0;lines.size=0;lines.data=0;
 line.size=0;line.data=0;line.cap=0;
 while((s32)*cursor!=0x5c) {
 fn_800C94F8(&line,0,-1,0,0);
 p=base+index;
 while((s8)*p!=13 && (s8)*p!=10) {
 fn_800C9874(&line,1,*p);index++;cursor++;p++;
 }
 p=base+index;
 while((s32)*p==13) {index++;cursor++;p++;}
 index++;cursor++;
 fn_800CA18C(&lines,lines.data+lines.size,1,&line);
 }
 count=0;
 check.cap=count;
 total=lines.size;index=count;
 check.size=count;offset=0;check.data=(char *)count;check.cap=count;
 messages=gStringErrorMsgs;
 for(;index<total;index++,offset+=12) {
 String_Assign(&check,(u8 *)lines.data+offset,0,-1);
 if(String_Compare(&check,0,check.size,messages,strlen(messages))==0)count++;
 }
 String_Destroy(&check,-1);
 fn_800CA018(self+12,count);
 next=0;index=0;
 for(;index<count;index++) {
 entry=Heap_Alloc(8);
 next=fn_800C7D3C(self,&lines,next,entry);
 fn_800C9BC4(self+12,*(u8 **)(self+20)+*(s32 *)(self+16)*4,1,&entry);
 (*(s32 *)(self+24))++;
 }
 String_Destroy(&line,-1);fn_800CA6C8(&lines,0);
 return 1;
}
#pragma pop
void Xml_GetChildName(String *arg0, void *arg1) {
    void String_AssignCStr(String *, char *, u32);
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
    String_AssignCStr(&tmp, name, strlen(name));
    String_Copy(arg0, &tmp);
    String_Destroy(&tmp, -1);
}

void Xml_GetChildValue(void *arg0, void *arg1)
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

#pragma push
#pragma optimization_level 4
#pragma opt_propagation off
#pragma opt_reorder off
void Xml_GetNamedValue(void *arg0, void *arg1, String *arg2) {
    u32 strlen(const char *);
    s32 String_Compare(String *, u32, u32, char *, u32);

    typedef struct { u32 a,b,c,d,e,f,g,h; } Block;
    u8 *out;
    u8 *xml;
    s32 index;
    u8 *list;
    u8 *entry;
    s32 offset;
    Block fallback;

    out = (u8 *)arg0;
    xml = (u8 *)arg1;
    list = *(u8 **)(xml + 0x1C);

    if (list != NULL) {
        index = 0;
        offset = index;

        while (index < *(s32 *)list) {
            if (list != NULL && index < *(s32 *)list) {
                entry = *(u8 **)(list + 4) + offset;
            } else {
                entry = NULL;
            }

            if (String_Compare(
                    arg2,
                    0,
                    arg2->size,
                    (char *)entry,
                    strlen((char *)entry)
                ) == 0) {
                *(s32 *)(xml + 0x24) = index;

                *(Block *)out = *(Block *)(entry + 0x18);
                return;
            }

            offset += 0x38;
            index++;
        }
    }

    fallback.a = 0;
    fallback.b = 0;
    fallback.c = 0;
    fallback.d = 0;
    *(Block *)out = fallback;
}
#pragma pop
s32 Xml_AdvanceChild(void *arg0) {
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

#pragma opt_dead_assignments off
#pragma opt_common_subs off
int fn_800C8F70(void *arg0, int arg1) {
    void *strcpy(char *, const char *);
    void Str_CopyPad(void *, void *, u32);
    extern char gStringErrorMsgs[];

    typedef struct {
        u32 words[8];
    } Val32;

    u8 *self;
    int index;
    Val32 copy;
    Val32 temp;
    u32 value;

    self = (u8 *)arg0;
    index = arg1;

    if (index >= *(int *)(self + 0x18)) {
        *(u32 *)(self + 0x1C) = 0;
        return 0;
    }

    strcpy((char *)(self + 0x28), gStringErrorMsgs + 4);

    temp.words[3] = 0;
    temp.words[2] = 0;
    temp.words[1] = 0;
    temp.words[0] = 0;

    Str_CopyPad(&temp, gStringErrorMsgs + 4, 0x20);

    *(Val32 *)(self + 0x40) = copy = temp;

    if (index < *(int *)(self + 0x18)) {
        value = ((u32 *)(*(void **)(self + 0x14)))[index];
    } else {
        value = 0;
    }

    *(u32 *)(self + 0x1C) = value;
    *(int *)(self + 0x20) = index;

    return 1;
}
#pragma opt_common_subs reset
#pragma opt_dead_assignments reset
void fn_800C908C(void *arg0, String *arg1, s32 *arg2) {
    char *String_CStr(String *);
    char *strcpy(char *, const char *);
    void fn_800C802C(void *, s32);
    unsigned long b;
    s32 *dst;
    long a;

    strcpy((char *)arg0 + 0x28, String_CStr(arg1));
    dst = (s32 *)((char *)arg0 + 0x40);
    b = 0;
    a = arg2[0];
    b = arg2[1];
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

#pragma use_lmw_stmw on
#pragma auto_inline off
/* Destroy an Xml document: free each item's data and the item list, then the base String; free self if doFree > 0. */
void *Xml_Destroy(void *arg0, s16 doFree) {
    void Heap_FreeRaw(void *);
    void Heap_Free(void *);
    void *String_Destroy(void *, s16);

    s32 off;
    void *item;
    s32 i;
    s32 n;
    void *self;

    self = arg0;
    if (self != NULL) {
        i = 0;
        off = 0;
        while (i < (n = *(s32 *)((u8 *)self + 0x18))) {
            if (i < n) {
                item = *(void **)((u8 *)*(void **)((u8 *)self + 0x14) + off);
            } else {
                item = NULL;
            }
            if (*(u32 *)((u8 *)item + 4) != 0) {
                Heap_FreeRaw((u8 *)*(u32 *)((u8 *)item + 4) - 0x10);
            }
            Heap_Free(item);
            i += 1;
            off += 4;
        }
        if ((s32)self + 0xC != 0) {
            if ((u8 *)self + 0xC != NULL) {
                if ((s32)((u8 *)self + (unsigned short)0xC) != 0) {
                    if (*(void **)((u8 *)self + 0x14) != NULL) {
                        Heap_Free(*(void **)((u8 *)self + 0x14));
                    }
                }
            }
        }
        String_Destroy(self, -1);
        if (doFree > 0) {
            Heap_Free(self);
        }
    }
    return self;
}
#pragma auto_inline reset
#pragma use_lmw_stmw reset

#pragma dont_inline on
#pragma global_optimizer off
#pragma use_lmw_stmw off
void *Xml_ParseFile(void *arg0, void *arg1) {
void String_Assign(void *,void *,u32,u32);
void *strcpy(char *,const char *);
void Str_CopyPad(void *,void *,u32);
char *String_CStr(void *);
void *fn_8005C808(void *);
void fn_8005C7E8(void *);
void String_Init(void *,void *,void *);
void fn_800C99A0(void *,void *,u32,u32);
void fn_800C992C(void *,void *,u32);
u32 strlen(const char *);
extern char gStringErrorMsgs[];
typedef struct {u32 words[8];} Val32;
Val32 copy;
Val32 temp;
String error;
u8 allocator;
void *path=arg1;
u8 *self=arg0;
s32 ok;
void *file;
*(u32 *)(self+0)=0;
*(u32 *)(self+4)=0;
*(u32 *)(self+8)=0;
*(u32 *)(self+4)=0;
*(u32 *)(self+12)=0;
*(u32 *)(self+16)=0;
*(u32 *)(self+20)=0;
*(u32 *)(self+0x4c)=0;
*(u32 *)(self+0x48)=0;
*(u32 *)(self+0x44)=0;
*(u32 *)(self+0x40)=0;
String_Assign(self,path,0,-1);
*(u32 *)(self+0x18)=0;
*(u32 *)(self+0x1c)=0;
*(s32 *)(self+0x20)=-1;
strcpy((char *)self+0x28,gStringErrorMsgs+4);
temp.words[0]=temp.words[1]=temp.words[2]=temp.words[3]=0;
Str_CopyPad(&temp,gStringErrorMsgs+4,0x20);
copy=temp;
*(Val32 *)(self+0x40)=copy;
ok=0;
*(u32 *)(self+0x24)=ok;
file=fn_8005C808(String_CStr(path));
if(file){fn_800C8A9C(self,file);ok=1;}
fn_8005C7E8(file);
if((u8)ok){
u32 first;
if(*(s32 *)(self+0x18)>0) first=**(u32 **)(self+0x14);else first=0;
*(u32 *)(self+0x1c)=first;
*(u32 *)(self+0x20)=0;
} else {
String_Init(&error,gStringErrorMsgs+5,&allocator);
fn_800C99A0(&error,path,0,-1);
fn_800C992C(&error,gStringErrorMsgs+15,strlen(gStringErrorMsgs+15));
String_Destroy(&error,-1);
}
return self;
}
#pragma use_lmw_stmw reset
#pragma global_optimizer reset
#pragma dont_inline reset
M2C_UNK *String_CStr(void *arg0) {
    extern M2C_UNK lbl_80369DC0;
    M2C_UNK *temp_r3;

    temp_r3 = M2C_FIELD(arg0, M2C_UNK **, 8);
    if (temp_r3 == NULL) {
        return &lbl_80369DC0;
    }
    return temp_r3;
}

s32 String_Compare(const String *arg0, u32 pos, u32 n, const char *s, u32 n2) {
    M2C_UNK abort(void);
    M2C_UNK fprintf(void *, const char *, ...);
    s32 fn_80231944(const char *, const char *, u32);
    extern char __files[];
    extern char gStringErrorMsgs[];
    u32 len;
    u32 rest;
    const u32 *q;
    s32 cmp;

    if (pos > arg0->size) {
        fprintf(__files + 0xA0, gStringErrorMsgs + 0x1D);
        abort();
    }
    rest = arg0->size - pos;
    len = *StrMin(&rest, &n);
    q = StrMin(&len, &n2);
    cmp = fn_80231944(arg0->data + pos, s, *q);
    if (cmp == 0) {
        if (len < n2) {
            return -1;
        }
        return len != n2;
    }
    return cmp;
}

#pragma push
#pragma optimization_level 4
String *fn_800C94F8(String *arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4)
{
    extern char __files[];
    extern char gStringErrorMsgs[];
    extern u8 lbl_80366E40;
    extern u8 lbl_80366E41;

    s32 fprintf(void *, const char *, ...);
    void abort(void);
    void *Heap_Alloc(s32);
    void Heap_Free(void *);
    void *memcpy(void *, const void *, u32);
    void *memset(void *, s32, u32);
    void *memmove(void *, const void *, u32);

    u32 newCapacity;
    u32 count;
    u32 newSize;
    u32 ch;
    u32 ins;
    u32 pos;
    String *str;
    u32 rem;
    u32 n;

    pos = arg1;
    str = arg0;
    ins = arg3;
    ch = arg4;
    n = arg2;

    if (pos > arg0->size) {
        fprintf(__files + 0xA0, gStringErrorMsgs + 0x38);
        abort();
    }

    rem = str->size - pos;
    count = *StrMin(&n, &rem);

    if (ins > (u32)-2 || str->size - count > (u32)-2 - ins) {
            fprintf(__files + 0xA0, gStringErrorMsgs + 0x60);
            abort();
    }

    newSize = str->size - count + ins;

    if (newSize > str->cap) {
        char *newData;
        newCapacity = (newSize + 3) - (newSize & 3);
        newData = (char *)Heap_Alloc(newCapacity + 1);
        if (newData == 0) {
            fprintf(__files + 0xA0, gStringErrorMsgs + 0x7C);
            abort();
        }
        if (str->data != 0) {
            memcpy(newData, str->data, pos);
        }
        if (ins != 0) {
            memset(newData + pos, (u8)ch, ins);
        }
        if (str->data != 0) {
            memcpy(newData + pos + ins, str->data + pos + count, str->size - (pos + count));
        }
        newData[newSize] = lbl_80366E40;
        if (str->data != 0) {
            Heap_Free(str->data);
        }
        str->data = newData;
        str->cap = newCapacity;
        str->size = newSize;
    } else if (str->data != 0) {
        memmove(str->data + pos + ins, str->data + pos + count, str->size - (pos + count));
        if (ins != 0) {
            memset(str->data + pos, (u8)ch, ins);
        }
        str->data[newSize] = lbl_80366E41;
        str->size = newSize;
    }

    return str;
}
#pragma pop
#pragma auto_inline off
String *String_AssignCStr(String *arg0, const char *arg1, u32 arg2) {
    void String_Resize(String *, u32, s32);
    void *memcpy(void *, const void *, u32);
    String_Resize(arg0, arg2, 0);
    memcpy(arg0->data, arg1, arg2);
    return arg0;
}

/* Assign dst from src[pos..pos+n) (MSL basic_string::assign); aborts if pos is out of range. */
String *String_Assign(String *dst, const String *src, u32 pos, u32 n) {
    String *String_Erase(String *, u32, u32);
    void String_Resize(String *, u32, s32);
    M2C_UNK abort(void);
    M2C_UNK fprintf(void *, const char *, ...);
    void *memcpy(void *, const void *, u32);
    extern char __files[];
    extern char gStringErrorMsgs[];
    u32 rest;
    u32 len;

    if (pos > src->size) {
        fprintf(__files + 0xA0, gStringErrorMsgs + 0x96);
        abort();
    }
    rest = src->size - pos;
    len = *StrMin(&n, &rest);
    if (dst == src) {
        String_Erase(dst, 0, pos);
        String_Resize(dst, len, 1);
    } else {
        String_Resize(dst, len, 0);
        memcpy(dst->data, src->data + pos, len);
    }
    return dst;
}
#pragma auto_inline reset

String *String_Erase(String *arg0, u32 arg1, u32 arg2) {
    String *fn_800C94F8(String *, u32, u32, u32, u32);
    return fn_800C94F8(arg0, arg1, arg2, 0, 0);
}

String *fn_800C9874(String *arg0, u32 arg1, char arg2) {
    void String_Resize(String *, u32, s32);
    M2C_UNK abort(void);
    M2C_UNK fprintf(void *, const char *, ...);
    void *memset(void *, s32, u32);
    extern char __files[];
    extern char gStringErrorMsgs[];
    u32 size;

    if (arg1 != 0) {
        if (arg1 > (u32)-2 || arg0->size > (u32)-2 - arg1) {
            fprintf(__files + 0xA0, gStringErrorMsgs + 0xBC);
            abort();
        }
        size = arg0->size;
        String_Resize(arg0, size + arg1, 1);
        memset(arg0->data + size, (u8)arg2, arg1);
    }
    return arg0;
}

void *fn_800C992C(void *arg0, const char *arg1, u32 arg2) {
    void String_Resize(void *, u32, s32);
    void *memcpy(void *, const void *, u32);
    u32 size;

    if (arg2 != 0) {
        size = ((String *)arg0)->size;
        String_Resize(arg0, size + arg2, 1);
        memcpy(((String *)arg0)->data + size, arg1, arg2);
    }
    return arg0;
}

#pragma use_lmw_stmw on
String *fn_800C99A0(String *arg0, const String *arg1, u32 pos, u32 n) {
    void fn_800CA7F4(String *, u32, s32);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    void *memcpy(void *, const void *, u32);
    extern char __files[];
    extern char lbl_80270350[];
    u32 size;
    u32 len;
    u32 rest;

    if (pos > arg1->size) {
        fn_80232058(__files + 0xA0, lbl_80270350 + 0xEE);
        fn_8022CF78();
    }
    rest = arg1->size - pos;
    len = *StrMin(&n, &rest);
    if (len != 0) {
        size = arg0->size;
        fn_800CA7F4(arg0, size + len, 1);
        memcpy(arg0->data + size, arg1->data + pos, len);
    }
    return arg0;
}
#pragma use_lmw_stmw reset

#pragma auto_inline off
void *String_Destroy(void *arg0, s16 arg1) {
    void Heap_Free(void *);

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            Heap_Free(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

struct String_Init_Tag { u8 b; };
static inline struct String_Init_Tag String_Init_MakeTag(void) {
    struct String_Init_Tag t;
    return t;
}

void *String_Init(void *arg0, char *arg1, void *arg2) {
    void String_InitFromRange(void *, char *, char *, void *, struct String_Init_Tag);
    void abort(void);
    void fprintf(void *, const char *, ...);
    u32 strlen(const char *);
    extern char __files[];
    extern char gStringErrorMsgs[];
    u32 len;

    *(u32 *)((u8 *)arg0 + 4) = 0;
    len = strlen(arg1);
    if (len > (u32)-2) {
        fprintf(__files + 0xA0, gStringErrorMsgs + 0x114);
        abort();
    }
    String_InitFromRange(arg0, arg1, arg1 + len, arg2, String_Init_MakeTag());
    return arg0;
}

String_Copy(arg0,arg1)
void *arg0; const void *arg1;
{
void String_InitFromRange(void *,char *,char *,void *,void *);
u8 sp[16];
char *data=*(char *const *)((const char *)arg1+8);
char *end=data+*(const u32 *)arg1;
*(u32 *)((char *)arg0+4)=*(u32 *)((char *)arg1+4);
sp[0]=sp[4];
String_InitFromRange(arg0,data,end,sp+8,sp);
return (s32)arg0;
}

#pragma push
#pragma opt_propagation off
void fn_800C9BC4(void *vec,s32 *pos,u32 count,s32 *value){
void *Heap_Alloc(s32);void Heap_Free(void *);
void fprintf(void *,const char *,...);void abort(void);
extern char __files[],gStringErrorMsgs[];
s32 *copySrc,*copyDst;
u32 bytes;
s32 *old,*allocation,*dst,*end,*fill,*src,*split;
s32 offset;
u32 tail;
u32 need,capacity,size,n;
u32 available;
s32 initial;
u32 bytes2;
if(count){
if(count>0x3FFFFFFF || M2C_FIELD(vec,u32 *,4)>0x3FFFFFFF-count){
fprintf(__files+0xA0,gStringErrorMsgs+0x136);abort();
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
capacity=available ? available : 1;
while(need>capacity){
if(capacity<0x1FFFFFFF)capacity*=2;else capacity=0x3FFFFFFF;
}
allocation=Heap_Alloc(capacity*4);
if(!allocation){fprintf(__files+0xA0,gStringErrorMsgs+0x7C);abort();}
M2C_FIELD(vec,s32 **,8)=allocation;
bytes=offset*4;
dst=(s32 *)((u8 *)M2C_FIELD(vec,s32 **,8)+bytes);n=count;
while(n){*dst++=*value;--n;}
if(old){
u32 sz;
split=(s32 *)((u8 *)old+bytes);copySrc=old;copyDst=M2C_FIELD(vec,s32 **,8);
while(copySrc<split)*copyDst++=*copySrc++;
sz=M2C_FIELD(vec,u32 *,4);
bytes2=bytes+count*4;
dst=(s32 *)((u8 *)M2C_FIELD(vec,s32 **,8)+bytes2);
end=old+sz;
while(split<end)*dst++=*split++;
Heap_Free(old);
}
M2C_FIELD(vec,u32 *,4)=need;
M2C_FIELD(vec,u32 *,0)=capacity;
}
}
}
#pragma pop
void fn_800CA018(void *vec, u32 capacity) {
void *Heap_Alloc(u32); void Heap_Free(void *);
void fprintf(void *,const char *,...); void abort(void);
extern char gStringErrorMsgs[];
u32 *old, *allocation, *end, *src, *dst;
if(capacity > *(u32*)vec) {
if(capacity>0x3FFFFFFFU){fprintf(__files+0xA0,gStringErrorMsgs+0x153);abort();}
old=*(u32**)((u8*)vec+8);
allocation=Heap_Alloc(capacity*4);
if(!allocation){fprintf(__files+0xA0,gStringErrorMsgs+0x7C);abort();}
*(u32**)((u8*)vec+8)=allocation;
if(old){
src=old;dst=*(u32**)((u8*)vec+8);end=old+*(u32*)((u8*)vec+4);
while(src<end){*dst++=*src++;}
Heap_Free(old);
}
*(u32*)vec=capacity;
}
}

#pragma use_lmw_stmw reset
#pragma opt_loop_invariants reset

#pragma push
#pragma optimization_level 3
#pragma opt_common_subs off
#pragma opt_propagation off
void fn_800CA18C(void *vec, void *pos, u32 count, void *src)
{
    void String_InitFromRange(void *, char *, char *, void *, void *);
    void fn_800CA644(void *, void *, void *);
    void fn_800CA59C(void *, u32, void *);
    void *Heap_Alloc(s32);
    void fn_800CA91C(void *);
    void Heap_Free(void *);
    void fprintf(void *, const char *, ...);
    void abort(void);
    extern char __files[];
    extern char gStringErrorMsgs[];

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
        fprintf(__files + 0xA0, gStringErrorMsgs + 0x136);
        abort();
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

                    String_InitFromRange(
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

                    String_InitFromRange(
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

                    String_InitFromRange(
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

        dst = Heap_Alloc((s32)(cap * 0xC));

        if (dst == 0) {
            fprintf(
                __files + 0xA0,
                gStringErrorMsgs + 0x7C
            );
            abort();
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

                String_InitFromRange(
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

                String_InitFromRange(
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

                String_InitFromRange(
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
            Heap_Free(st.data);
        }
    }
}
#pragma pop
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
    String *String_Assign(String *, const String *, u32, u32);
    return String_Assign(arg0, arg1, 0, (u32)-1);
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
    void Heap_Free(void *);
    void fn_800CA91C(void *);

    if (arg0 != NULL) {
        fn_800CA91C(arg0);
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            Heap_Free(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

/* Construct a String by copying the char range [begin, end); capacity is rounded up to 4. */
void String_InitFromRange(String *str, char *begin, char *end) {
    s32 Heap_Alloc(s32);
    void fprintf(void *, const char *, ...);
    void abort(void);
    void *memcpy(void *, const void *, u32);
    extern char __files[];
    extern char gStringErrorMsgs[];
    extern u8 gStringNulChar;

    char *buf;
    s32 len;
    char *b;
    String *self;

    b = begin;
    self = str;
    str->data = 0;
    str->size = 0;
    str->cap = 0;
    if (b != end) {
        len = (s32)end - (s32)b;
        self->cap = (len + 3) - (len & 3);
        buf = (char *)Heap_Alloc((s32)self->cap + 1);
        if (buf == 0) {
            fprintf(__files + 0xA0, gStringErrorMsgs + 0x7C);
            abort();
        }
        self->data = buf;
        memcpy(self->data, b, len);
        self->size = len;
        *(u8 *)(self->data + len) = gStringNulChar;
    }
}

#pragma use_lmw_stmw on
void String_Resize(String *self, u32 newSize, s32 doCopy) {
    void *Heap_Alloc(u32);
    void Heap_Free(void *);
    void *memcpy(void *, void *, u32);
    void fprintf(void *, const char *, ...);
    void abort(void);
    extern char __files[];
    extern char gStringErrorMsgs[];
    extern u8 lbl_80366E43;

    u32 minCap;
    u32 *pCap;
    char *buf;
    u32 cap;

    if (newSize > (u32)-2) {
        fprintf(__files + 0xA0, gStringErrorMsgs + 0x171);
        abort();
    }
    if (newSize > self->cap) {
        minCap = 3;
        if (self->cap < 3) {
            pCap = &minCap;
        } else {
            pCap = &self->cap;
        }
        cap = *pCap;
        while (cap < newSize) {
            cap = (cap * 2 + 3) - ((cap * 2) & 3);
        }
        buf = (char *)Heap_Alloc(cap + 1);
        if (buf == NULL) {
            fprintf(__files + 0xA0, gStringErrorMsgs + 0x7C);
            abort();
        }
        if (self->data != NULL) {
            if ((u8)doCopy != 0) {
                memcpy(buf, self->data, self->size);
            }
            Heap_Free(self->data);
        }
        self->data = buf;
        self->cap = cap;
    }
    if (self->data != NULL) {
        *(u8 *)(self->data + newSize) = lbl_80366E43;
    }
    self->size = newSize;
}
#pragma use_lmw_stmw reset

void fn_800CA91C(void *arg0)
{
    extern void Heap_Free(void *);

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
                Heap_Free(obj);
            }
        }
    }

    *(s32 *)((u8 *)arg0 + 0x4) = 0;
}

typedef struct ActionQueueFields { u8 pad[0x234]; s32 first[4]; s32 second[4]; } ActionQueueFields;
#pragma dont_inline on
void fn_800CA990(void *arg0) {
void fn_80111AE8(void *,void *,s32);
void fn_8011386C(void *);
void fn_80232138(char *,...);
void fn_801C6CBC(u32 *,s32,s32,s32);
void *Unit_GetActor(void *);
s32 fn_801C6E60(void *);
void *fn_80116604(void *);
extern u8 *gGame;
extern s32 lbl_80367884;
extern char lbl_802704F8[];
void *partner;
u8 *self=(u8 *)arg0;
u8 first,second;
u8 update=0;
s32 index;
s32 offset;
s32 *queue;
void *other;
void *third;
u32 color;
u8 tmp[4];
switch(*(s32 *)(self+0x268)) {
case 0: first=1;second=1;break;
case 1: first=1;second=0;break;
case 2: second=1;first=0;break;
case 3: first=1;second=0;break;
default:first=1;second=1;break;
}
index=*(s32 *)(self+0x260);
if(first) {
queue=((ActionQueueFields *)self)->first;
index=queue[index];
if(index>=0 && (u32)index<*(u32 *)(self+0x1c0)) {
fn_80111AE8(*(void **)(self+0x9c),*(u8 **)(self+0x1c4)+index*12,0);
++*(s32 *)(self+0x260);
if(--*(s32 *)(self+0x254)<=0) *(s32 *)(self+0x25c)=1;
if(*(s32 *)(self+0x268)!=2) { self[0x1a5]=1; update=1; }
}
}
index=*(s32 *)(self+0x264);
if(second && index>=0) {
queue=((ActionQueueFields *)self)->second;
index=queue[index];
if(index>=0 && (u32)index<*(u32 *)(self+0x1c0)) {
offset=index*12;
fn_80232138(lbl_802704F8+0x18f,String_CStr(*(u8 **)(self+0x1c4)+offset));
if(index<14 || index>17) {
fn_80111AE8(*(void **)(self+0xa0),*(u8 **)(self+0x1c4)+offset,0);
fn_8011386C(*(void **)(self+0xa0));
}
++*(s32 *)(self+0x264);
if(--*(s32 *)(self+0x258)<=0) *(s32 *)(self+0x25c)=1;
if(*(s32 *)(self+0x268)!=2) { self[0x1a5]=1; update=1; }
if(index==27) update=1;
}
}
if(update) {
u8 value=*(u32 *)(gGame+0x18c);
tmp[0]=value;tmp[1]=value;tmp[2]=value;tmp[3]=255;
color=*(u32 *)tmp;
fn_801C6CBC(&color,1,lbl_80367884,1);
if(*(void **)(self+0x84)) {
fn_801C6E60(Unit_GetActor(*(void **)(self+0x84)));
partner=fn_80116604(*(void **)(self+0x84));
if(partner && Unit_GetActor(partner)) fn_801C6E60(Unit_GetActor(partner));
}
if(*(void **)(self+0x88)) {
fn_801C6E60(Unit_GetActor(*(void **)(self+0x88)));
other=fn_80116604(*(void **)(self+0x88));
if(other && Unit_GetActor(other)) fn_801C6E60(Unit_GetActor(other));
}
if(*(void **)(self+0x8c)) {
fn_801C6E60(Unit_GetActor(*(void **)(self+0x8c)));
third=fn_80116604(*(void **)(self+0x8c));
if(third && Unit_GetActor(third)) fn_801C6E60(Unit_GetActor(third));
}
}
}
#pragma dont_inline reset
void fn_800CAC7C(void *arg0) {
    void fn_800CA91C(void *);
    void fn_800CA18C(void *, void *, s32, void *);
    void *String_CStr(void *);
    void DebugPrint(char *, ...);
    extern char lbl_802704F8[];

    void *p;
    s32 mul;
    s32 i;

    fn_800CA91C((u8 *)arg0 + 0x1F0);
    p = arg0;
    for (i = 0; i < *(s32 *)((u8 *)arg0 + 0x258); p = (u8 *)p + 4, i++) {
        s32 val = *(s32 *)((u8 *)p + 0x244);
        if ((val >= 0xE && val <= 0x11) || val == 0x19) {
            u8 *p1 = *(u8 **)((u8 *)arg0 + 0x1C4);
            u8 *p2 = *(u8 **)((u8 *)arg0 + 0x1F8);
            s32 x = *(s32 *)((u8 *)arg0 + 0x1F4);
            mul = val * 0xC;
            fn_800CA18C((u8 *)arg0 + 0x1F0, p2 + x * 0xC, 1, p1 + mul);
            DebugPrint(lbl_802704F8 + 0x19B, String_CStr(*(u8 **)((u8 *)arg0 + 0x1C4) + mul));
        }
    }
}
#pragma global_optimizer reset
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
    extern u8 gBattleReplayActive;
    extern void *gBattleReplayScene;
    void *object;

    if (gBattleReplayActive != 0) {
        object = *(void **)((u8 *)gBattleReplayScene + 0x440);

        if (object != NULL) {
            fn_801481CC(object, 0xFA);
        }
    }
}

void fn_800CAE38(void) {
    extern u8 gBattleReplayActive;
    extern void *gBattleReplayScene;
    void Fx_StartSlot(s32, void *, s32, s32);
    void *fn_80145FE8(void);
    void *object;

    if (gBattleReplayActive != 0) {
        object = *(void **)((u8 *)gBattleReplayScene + 0x440);
        if (object != NULL) {
            Fx_StartSlot(1, object, 0x64, 1);
        }
    } else {
        object = fn_80145FE8();
        Fx_StartSlot(1, object, 0x64, 1);
    }
}

void BattleScene_InitSides(void *scene) {
    /* Seed left/right allegiance and status flags from gBattle, or from the replay cache. */
    u8 Status_Test(void *, s32);
    extern u8 gBattleReplayActive;
    extern void *gBattleReplayScene;
    extern u32 gBattle[];
    void *faction;

    if (gBattleReplayActive != 0) {
        M2C_FIELD(scene, s32 *, 0x68) = M2C_FIELD(gBattleReplayScene, s32 *, 0x164);
        M2C_FIELD(scene, s32 *, 0x6c) = M2C_FIELD(gBattleReplayScene, s32 *, 0x2CC);
        return;
    }
    faction = M2C_FIELD(gBattle, void **, 0x190);
    M2C_FIELD(scene, s32 *, 0x68) = M2C_FIELD(faction, u8 *, 8);
    faction = M2C_FIELD(gBattle, void **, 0x470);
    M2C_FIELD(scene, s32 *, 0x6c) = M2C_FIELD(faction, u8 *, 8);
    if (!(M2C_FIELD(gBattle, u32 *, 0xCAC) & 0x20000000)) {
        M2C_FIELD(scene, s32 *, 0x274) = 1;
    } else {
        M2C_FIELD(scene, s32 *, 0x274) = 0;
    }
    if (Status_Test((u8 *)gBattle + 0x1BC, 0x5C) != 0) {
        M2C_FIELD(scene, u8 *, 0x70) = 1;
    }
    if (Status_Test((u8 *)gBattle + 0x49C, 0x5C) != 0) {
        M2C_FIELD(scene, u8 *, 0x71) = 1;
    }
}

#pragma optimization_level 3
void fn_800CAF74(void *arg0) {
    extern char lbl_802704F8[];
    extern u8 gBattleReplayActive;
    extern u8 *gBattleReplayScene;
    extern u32 gBattle[];
    void String_Init(String *, char *, void *);
    String *String_AssignCStr(String *, char *, u32);
    void String_Copy(void *, String *);
    void *String_Destroy(String *, s32);
    void sprintf(char *, char *, ...);
    s32 UnitRef_GetName(void);
    u32 strlen(char *);
    char buf[0x40];
    String str;
    u8 scratch;
    void *self = arg0;

    String_Init(&str, lbl_802704F8 + 0x1B0, &scratch);
    if (gBattleReplayActive != 0) {
        char *p = (char *)gBattleReplayScene + 0x268;
        String_AssignCStr(&str, p, strlen(p));
    } else if ((u8 *)gBattle + 0x56C != 0) {
        void *obj = *(void **)((u8 *)gBattle + 0x56C);
        if (obj != 0) {
            u8 ch = obj != 0 ? ((u8 *)obj)[0x15] : 0;
            sprintf(buf, lbl_802704F8 + 0x1B1, (u8)ch + 0x60, UnitRef_GetName());
            String_AssignCStr(&str, buf, strlen(buf));
        }
    }
    String_Copy(self, &str);
    String_Destroy(&str, -1);
}
#pragma optimization_level 3
void fn_800CB070(String *arg0) {
    void fn_800C9ABC(void *, char *, void *);
    void fn_800C96F8(String *, char *, u32);
    void *fn_800C9A60(void *, s16);
    void fn_800C9B6C(void *, void *);
    void fn_80231D94(char *, char *, ...);
    s32 strlen(char *);
    s32 fn_8001D2C8(void);
    extern char lbl_802704F8[];
    extern u8 lbl_80367878;
    extern void *lbl_8036787C;
    extern u32 lbl_80330EAC[];
    char buf[0x40];
    u8 **slot;
    void *scratch;
    String *out;
    unsigned long tmp;
    String str;
    u8 *entry;
    s16 s;

    out = arg0;
    fn_800C9ABC(&str, lbl_802704F8 + 0x1B0, &scratch);
    if (lbl_80367878 != 0) {
        tmp = (u32)((char *)lbl_8036787C + 0x100);
        fn_800C96F8(&str, (char *)tmp, strlen((char *)tmp));
    } else {
        slot = (u8 **)((u8 *)lbl_80330EAC + 0x28C);
        if (slot != (u32)NULL) {
            entry = *slot;
            if (entry != NULL) {
                s = (short)entry;
                if (s != 0) {
                    tmp = entry[0x15];
                } else {
                    tmp = 0;
                }
                fn_80231D94(buf, lbl_802704F8 + 0x1B1, (u8)tmp + 0x60, fn_8001D2C8());
                fn_800C96F8(&str, buf, strlen(buf));
            }
        }
    }
    fn_800C9B6C(out, &str);
    fn_800C9A60(&str, -1);
}
#pragma optimization_level reset
void *fn_800CB16C(void) {
    u64 *Item_GetFlagsPtr(void *);
    u8 Status_Test(void *, s32);
    extern u8 gBattleReplayActive;
    extern u8 *gBattleReplayScene;
    extern u32 gBattle[];
    u8 *base;
    u8 *statusBase;
    void **slot;
    void *obj;
    void *inner;
    s8 *p;
    u64 bits;

    if (gBattleReplayActive != 0) {
        p = (s8 *)((u8 *)gBattleReplayScene + 0x310);
        if (*p == 0) {
            return 0;
        }
        return p;
    }

    base = (u8 *)gBattle + 0x5C0;
    if (base == NULL) {
        return 0;
    }
    slot = (void **)(base + 0x28C);
    bits = *Item_GetFlagsPtr(slot);
    if ((bits & 0x200ULL) != 0) {
        statusBase = base + 0x1BC;
        if (Status_Test(statusBase, 8) != 0) {
            if (Status_Test(statusBase, 9) == 0) {
                return 0;
            }
        }
    }

    if (slot != NULL) {
        obj = *slot;
        if (obj != NULL) {
            inner = obj != NULL ? *(void **)obj : 0;
            if (inner != NULL) {
                return (u8 *)inner + 4;
            }
            return 0;
        }
    }
    return 0;
}

void *fn_800CB27C(void) {
    u64 *Item_GetFlagsPtr(void *);
    u8 Status_Test(void *, s32);
    extern u8 gBattleReplayActive;
    extern u8 *gBattleReplayScene;
    extern u32 gBattle[];
    u8 *base;
    u8 *statusBase;
    void **slot;
    void *obj;
    void *inner;
    s8 *p;
    u64 bits;

    if (gBattleReplayActive != 0) {
        p = (s8 *)((u8 *)gBattleReplayScene + 0x1A8);
        if (*p == 0) {
            return 0;
        }
        return p;
    }

    base = (u8 *)gBattle;
    slot = (void **)(base + 0x56C);
    bits = *Item_GetFlagsPtr(slot);
    if ((bits & 0x200ULL) != 0) {
        statusBase = base + 0x49C;
        if (Status_Test(statusBase, 8) != 0) {
            if (Status_Test(statusBase, 9) == 0) {
                return 0;
            }
        }
    }

    if (slot != NULL) {
        obj = *slot;
        if (obj != NULL) {
            inner = obj != NULL ? *(void **)obj : 0;
            if (inner != NULL) {
                return (u8 *)inner + 4;
            }
            return 0;
        }
    }
    return 0;
}

void *fn_800CB37C(void) {
    u64 *Item_GetFlagsPtr(void *);
    u8 Status_Test(void *, s32);
    extern u8 gBattleReplayActive;
    extern u8 *gBattleReplayScene;
    extern u32 gBattle[];
    u8 *statusBase;
    void **slot;
    void *obj;
    void *inner;
    s8 *p;
    u64 bits;

    if (gBattleReplayActive != 0) {
        p = (s8 *)((u8 *)gBattleReplayScene + 0x40);
        if (*p == 0) {
            return 0;
        }
        return p;
    }

    slot = (void **)((u8 *)gBattle + 0x28C);
    bits = *Item_GetFlagsPtr(slot);
    if ((bits & 0x200ULL) != 0) {
        statusBase = (u8 *)gBattle + 0x1BC;
        if (Status_Test(statusBase, 8) != 0) {
            if (Status_Test(statusBase, 9) == 0) {
                return 0;
            }
        }
    }

    if (slot != NULL) {
        obj = *slot;
        if (obj != NULL) {
            inner = obj != NULL ? *(void **)obj : 0;
            if (inner != NULL) {
                return (u8 *)inner + 4;
            }
            return 0;
        }
    }
    return 0;
}

void fn_800CB484(void *arg0, void *arg1)
{
    void String_Init(void *, char *, void *);
    void fn_800CB65C(void *, void *, void *, void *, void *);
    void *String_Destroy(void *, s16);
    extern void *gBattleReplayScene;
    extern u8 gBattleReplayActive;
    extern char lbl_802704F8[];

    String temp;
    char **ptr;
    void *scratch10;
    void *scratchC;
    void *scratch8;

    if (gBattleReplayActive != 0) {
        String_Init(arg0, (char *)gBattleReplayScene + 0x2D0, &scratch10);
    } else {
        ptr = *(char ***)((u8 *)gBattle + 0x74C);
        if (ptr == NULL) {
            String_Init(arg0, lbl_802704F8 + 0x1B0, &scratchC);
        } else {
            String_Init(&temp, *ptr, &scratch8);
            fn_800CB65C(
                arg0,
                arg1,
                &temp,
                (u8 *)arg1 + 0x38,
                (u8 *)arg1 + 0x5C
            );
            String_Destroy(&temp, -1);
        }
    }
}

void fn_800CB538(void *arg0, void *arg1)
{
    void String_Init(void *, char *, void *);
    void fn_800CB65C(void *, void *, void *, void *, void *);

    extern void *gBattleReplayScene;
    extern u8 gBattleReplayActive;

    String temp;
    char *source;
    void *scratchC;
    void *scratch8;

    if (gBattleReplayActive != 0) {
        String_Init(arg0, (char *)gBattleReplayScene + 0x168, &scratchC);
    } else {
        source = **(char ***)((u8 *)gBattle + 0x46C);

        String_Init(&temp, source, &scratch8);

        fn_800CB65C(
            arg0,
            arg1,
            &temp,
            (u8 *)arg1 + 0x2C,
            (u8 *)arg1 + 0x50
        );

        String_Destroy(&temp, -1);
    }
}

void fn_800CB5CC(void *arg0, void *arg1)
{
    void String_Init(void *, char *, void *);
    void fn_800CB65C(void *, void *, void *, void *, void *);

    extern void *gBattleReplayScene;
    extern u8 gBattleReplayActive;

    String temp;
    char *source;
    void *scratchC;
    void *scratch8;

    if (gBattleReplayActive != 0) {
        String_Init(arg0, (char *)gBattleReplayScene, &scratchC);
    } else {
        source = **(char ***)((u8 *)gBattle + 0x18C);

        String_Init(&temp, source, &scratch8);

        fn_800CB65C(
            arg0,
            arg1,
            &temp,
            (u8 *)arg1 + 0x20,
            (u8 *)arg1 + 0x44
        );

        String_Destroy(&temp, -1);
    }
}

#pragma optimization_level 4
#pragma global_optimizer off
void fn_800CB65C(void *out, char *obj, void *key, void *suffix, void *first) {
void *StringMap_FindOrInsert(void *, void *);
void String_Assign(void *, void *, u32, u32);
s32 String_Compare(void *, u32, u32, char *, u32);
void String_Copy(void *, void *);
void String_ConcatCStr(void *, void *, char *);
void String_Concat(void *, void *, void *);
u32 strlen(const char *);
void fn_800056A0(s32);
extern char lbl_802704F8[];
char *entry;
u32 len;
u32 path[3], value[3], tmp[3], joined[3];
path[1]=0; value[1]=0;
path[0]=0; path[2]=0; path[1]=0;
value[0]=0; value[2]=0; value[1]=0;
entry = (char *)StringMap_FindOrInsert(obj+0x1e0,first);
entry += 12;
String_Assign(value,entry,0,-1);
len = strlen(lbl_802704F8+0x1b0);
if(String_Compare(value,0,value[0],lbl_802704F8+0x1b0,len)!=0){
String_Copy(out,value); String_Destroy(value,-1); String_Destroy(path,-1); return;
}
String_ConcatCStr(tmp,key,lbl_802704F8+0x1ba);
String_Concat(joined,tmp,suffix);
String_Assign(path,joined,0,-1);
String_Destroy(joined,-1); String_Destroy(tmp,-1);
entry = (char *)StringMap_FindOrInsert(obj+0x1e0,path);
entry += 12;
String_Assign(value,entry,0,-1);
len = strlen(lbl_802704F8+0x1b0);
if(String_Compare(value,0,value[0],lbl_802704F8+0x1b0,len)!=0){
String_Copy(out,value); String_Destroy(value,-1); String_Destroy(path,-1); return;
}
entry = (char *)StringMap_FindOrInsert(obj+0x1e0,key);
entry += 12;
String_Assign(value,entry,0,-1);
len = strlen(lbl_802704F8+0x1b0);
if(String_Compare(value,0,value[0],lbl_802704F8+0x1b0,len)==0) fn_800056A0(0);
String_Copy(out,value); String_Destroy(value,-1); String_Destroy(path,-1);
}
#pragma global_optimizer reset
void String_Concat(void *arg0, void *arg1, s32 arg2) {
    void String_Copy(void *, void *);
    void *fn_800C99A0(void *, s32, s32, s32);
    void *String_Destroy(void *, s32);
    u8 sp[0x10];

    String_Copy(sp, arg1);
    String_Copy(arg0, fn_800C99A0(sp, arg2, 0, -1));
    String_Destroy(sp, -1);
}

void String_ConcatCStr(M2C_UNK *arg0, M2C_UNK *unused, s32 arg2) {
    s32 fn_800C992C(M2C_UNK *, s32, s32);
    M2C_UNK sp8;

    (void)unused;
    String_Copy(&sp8);
    String_Copy(arg0, fn_800C992C(&sp8, arg2, strlen(arg2)));
    String_Destroy(&sp8, -1);
}

#pragma opt_common_subs off
void fn_800CB978(u8 *self) {
    char *Unit_GetMapModelName(void *);
    extern char lbl_802704F8[];
    char *name;
    u8 *third;

    name = **(char ***)((u8 *)gBattle + 0x188);
    String_AssignCStr((String *)(self + 0x20), name, strlen(name));
    name = **(char ***)((u8 *)gBattle + 0x468);
    String_AssignCStr((String *)(self + 0x2c), name, strlen(name));
    name = Unit_GetMapModelName(gBattle);
    String_AssignCStr((String *)(self + 0x44), name, strlen(name));
    name = Unit_GetMapModelName((u8 *)gBattle + 0x2e0);
    String_AssignCStr((String *)(self + 0x50), name, strlen(name));
    third = (u8 *)gBattle + 0x5c0;
    if (*(u32 *)(third + 0x280)) {
        name = **(char ***)((u8 *)gBattle + 0x748);
        String_AssignCStr((String *)(self + 0x38), name, strlen(name));
        name = Unit_GetMapModelName(third);
        String_AssignCStr((String *)(self + 0x5c), name, strlen(name));
    } else {
        String_AssignCStr((String *)(self + 0x38), lbl_802704F8 + 0x1b0, strlen(lbl_802704F8 + 0x1b0));
        String_AssignCStr((String *)(self + 0x5c), lbl_802704F8 + 0x1b0, strlen(lbl_802704F8 + 0x1b0));
    }
}

#pragma push
#pragma cplusplus on
#pragma optimization_level 4
extern "C" void fn_800CBAF8(s32 self, void *path, u32 arg2) {
    u16 FileCache_Probe(void);
    void *Heap_Alloc(u32);
    void Xml_GetChildValue(char *, void *);
    char *Xml_GetNamedValue(char *, void *, String *);
    void Xml_AdvanceChild(void *);
    void fn_800C8F70(void *, s32);
    void Xml_Destroy(void *, s32);
    void *Xml_ParseFile(void *, String *, String *);
    char *String_CStr(String *);
    s32 String_Compare(void *, s32, u32, void *, s32);
    void String_AssignCStr(String *, char *, u32);
    void String_Assign(String *, String *, s32, s32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void String_Destroy(String *, s32);
    void String_Init(String *, char *, void *);
    void String_Concat(String *, String *, void *);
    void String_ConcatCStr(String *, String *, char *);
    void String_JoinCStr(String *, char *, void *);
    void fn_800E8154(void *, String *);
    char *fn_801992F8(u32);
    void fn_801CA1DC(void *, void *);
    u32 strlen(const char *);
    extern char lbl_802704F8[];
    extern void *gCameraWin;

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
        String_AssignCStr(&sp88, p, strlen(p));
    } else {
        String_AssignCStr(&sp88, (char *)((s32)lbl_802704F8 + 0x16F), strlen(&lbl_802704F8[0x16F]));
    }

    String_JoinCStr(&sp7C, lbl_802704F8 + 0x1C7, path);
    String_ConcatCStr(&sp70, &sp7C, lbl_802704F8 + 0x1CD);
    String_Concat(&sp64, &sp70, path);
    String_ConcatCStr(&sp58, &sp64, lbl_802704F8 + 0x1CF);
    String_Concat(&sp4C, &sp58, &sp88);
    String_ConcatCStr(&sp40, &sp4C, lbl_802704F8 + 0x1D1);
    String_Assign(&sp94, &sp40, 0, -1);
    String_Destroy(&sp40, -1);
    String_Destroy(&sp4C, -1);
    String_Destroy(&sp58, -1);
    String_Destroy(&sp64, -1);
    String_Destroy(&sp70, -1);
    String_Destroy(&sp7C, -1);

    flag = 0;
    if (sp94.size == *(u32 *)(self + 0x198) &&
        String_Compare(&sp94, 0, sp94.size, *(void **)(self + 0x1A0), *(s32 *)(self + 0x198)) == 0) {
        flag = 1;
    }
    if (flag != 0) {
        String_Destroy(&sp88, -1);
        String_Destroy(&sp94, -1);
        return;
    }

    String_Assign((String *)(self + 0x198), &sp94, 0, -1);
    String_CStr(&sp94);
    if ((u16)FileCache_Probe() == 0x8000) {
        String_Destroy(&sp88, -1);
        String_Destroy(&sp94, -1);
        return;
    }

    made = 0;
    obj = Heap_Alloc(0x60);
    if (obj != 0) {
        String_Init(&sp34, lbl_802704F8 + 0x1D6, &scratchC);
        made = 1;
        obj = Xml_ParseFile(obj, &sp94, &sp34);
    }
    if (made != 0) {
        String_Destroy(&sp34, -1);
    }

    fn_800C8F70(obj, 0);
    String_Init(&sp28, lbl_802704F8 + 0x1DB, &scratch8);
    Xml_GetNamedValue(spC0, obj, &sp28);
    count = *(s32 *)spC0;
    String_Destroy(&sp28, -1);

    base = lbl_802704F8;
    buf = spA0;
    for (i = 0; i < count; i++) {
        Xml_AdvanceChild(obj);
        Xml_GetChildValue(spA0, obj);
        String_AssignCStr(&sp94, buf, strlen(buf));

        sp10.cap = 0;
        sp10.size = 0;
        sp10.data = 0;
        sp10.cap = 0;
        String_AssignCStr(&sp10, base + 0x1C7, strlen(base + 0x1C7));

        if (String_Compare(path, 0, *(u32 *)path, base + 0x1B0, strlen(base + 0x1B0)) != 0) {
            String_ConcatCStr(&sp1C, (String *)path, base + 0x1CD);
            fn_800C99A0(&sp10, &sp1C, 0, -1);
            String_Destroy(&sp1C, -1);
        }
        fn_800C99A0(&sp10, &sp94, 0, -1);
        fn_800C992C(&sp10, base + 0x1D1, strlen(base + 0x1D1));
        fn_800E8154(*(void **)(self + 4), &sp10);

        vret = ((Obj *)*(void **)(self + 4))->v2(base + 0x1DF, String_CStr(&sp94));
        if (vret != 0) {
            fn_801CA1DC(gCameraWin, vret);
        }
        String_Destroy(&sp10, -1);
    }

    Xml_Destroy(obj, 1);
    String_Destroy(&sp88, -1);
    String_Destroy(&sp94, -1);
}
#pragma pop

void String_JoinCStr(s32 arg0, char *arg1, s32 arg2) {
    M2C_UNK String_Destroy(M2C_UNK *, M2C_UNK);
    s32 fn_800C99A0(M2C_UNK *, s32, M2C_UNK, M2C_UNK);
    M2C_UNK String_Init(M2C_UNK *, char *, M2C_UNK *);
    M2C_UNK String_Copy(s32, s32);
    M2C_UNK spC;
    M2C_UNK sp8;

    String_Init(&spC, arg1, &sp8);
    String_Copy(arg0, fn_800C99A0(&spC, arg2, 0, -1));
    String_Destroy(&spC, -1);
}

#pragma global_optimizer off
#pragma cplusplus on
extern "C" void fn_800CBF90(void *self, String *name, String *path) {
    void String_AssignCStr(String *, char *, u32);
    s32 String_Compare(String *, u32, u32, char *, u32);
    void String_ConcatCStr(String *, String *, char *);
    void fn_800C99A0(String *, String *, s32, s32);
    void String_Destroy(String *, s32);
    void fn_800C992C(String *, char *, u32);
    void fn_800E8154(void *, String *);
    char *String_CStr(String *);
    void fn_801CA1DC(void *, void *);
    u32 strlen(const char *);
    extern char lbl_802704F8[];
    extern void *gCameraWin;

    struct Obj {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void *v2(char *, char *);
    };

    String built;
    String tmp;
    void *vret;
    u32 len;

    built.cap = 0;
    built.size = 0;
    built.data = 0;
    built.cap = 0;
    String_AssignCStr(&built, lbl_802704F8 + 0x1C7, strlen(lbl_802704F8 + 0x1C7));

    len = strlen(lbl_802704F8 + 0x1B0);
    if (String_Compare(path, 0, path->size, lbl_802704F8 + 0x1B0, len) != 0) {
        String_ConcatCStr(&tmp, path, lbl_802704F8 + 0x1CD);
        fn_800C99A0(&built, &tmp, 0, -1);
        String_Destroy(&tmp, -1);
    }
    fn_800C99A0(&built, name, 0, -1);
    fn_800C992C(&built, lbl_802704F8 + 0x1D1, strlen(lbl_802704F8 + 0x1D1));
    fn_800E8154(*(void **)((u8 *)self + 4), &built);

    vret = ((Obj *)*(void **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x1DF, String_CStr(name));
    if (vret != 0) {
        fn_801CA1DC(gCameraWin, vret);
    }
    String_Destroy(&built, -1);
}

#pragma cplusplus reset
void fn_800CC10C(s32 arg0, void *arg1) {
    void *Heap_Alloc(u32);
    void String_Init(void *, void *, void *);
    void *Xml_ParseFile(void *, void *, void *);
    void Str_CopyPad(void *, void *, u32);
    void fn_800C908C(void *, void *, void *);
    void String_Destroy(void *, s32);
    u8 Xml_AdvanceChild(void *);
    void Xml_GetChildName(void *, void *);
    void Xml_GetChildValue(void *, void *);
    void String_Assign(void *, void *, s32, s32);
    void *String_AssignCStr(void *, void *, s32);
    s32 strlen(char *);
    s32 String_Find(void *, void *, s32, s32);
    void String_Substr(void *, void *, s32, s32);
    void String_JoinCStr(void *, void *, void *);
    void fn_800C99A0(void *, void *, s32, s32);
    void Xml_Destroy(void *, s16);
    void *StringMap_FindOrInsert(void *, void *);
    extern char lbl_802704F8[];
    struct Block { u32 a,b,c,d,e,f,g,h; };
    struct Block spC0, spA0;
    char sp80[32];
    String sp74, sp68, sp5C, sp50, sp44, sp38, sp2C, sp20, sp14;
    u32 sp10, spC, sp8;
    char *buffer;
    s8 made1, made2;
    u8 *f;
    u8 *arg0p;
    u32 idx;

    arg0p = (u8 *)arg0;
    made1 = 0;
    made2 = 0;
    f = (u8 *)Heap_Alloc(0x60);
    if (f != 0) {
        String_Init(&sp5C, lbl_802704F8 + 0x1D6, &sp10);
        made1 = 1;
        String_Init(&sp50, arg1, &spC);
        made2 = 1;
        f = (u8 *)Xml_ParseFile(f, &sp50, &sp5C);
    }
    if (made2 != 0) String_Destroy(&sp50, -1);
    if (made1 != 0) String_Destroy(&sp5C, -1);
    sp74.cap=0; sp68.cap=0; sp74.size=0; sp74.data=0; sp74.cap=0; sp68.size=0; sp68.data=0; sp68.cap=0;
    String_Init(&sp44, lbl_802704F8 + 0x1EB, &sp8);
    Str_CopyPad(&spA0, lbl_802704F8 + 0x1F1, 0x20);
    spC0 = spA0;
    fn_800C908C(f, &sp44, &spC0);
    String_Destroy(&sp44, -1);
    buffer = (char *)&sp80;
    for (; Xml_AdvanceChild(f) != 0; ) {
        Xml_GetChildName(&sp38, f);
        String_Assign(&sp74, &sp38, 0, -1);
        String_Destroy(&sp38, -1);
        Xml_GetChildValue(&sp80, f);
        String_AssignCStr(&sp68, buffer, strlen(buffer));
        idx = String_Find(&sp68, lbl_802704F8 + 0x1F9, 0, strlen(lbl_802704F8 + 0x1F9));
        if (idx != 0xFFFFFFFFU) {
            String_Substr(&sp2C, &sp68, 0, idx);
            String_JoinCStr(&sp20, lbl_802704F8 + 0x1BA, &sp2C);
            fn_800C99A0(&sp74, &sp20, 0, -1);
            String_Destroy(&sp20, -1);
            String_Destroy(&sp2C, -1);
            String_Substr(&sp14, &sp68, idx + 1, 4);
            String_Assign(&sp68, &sp14, 0, -1);
            String_Destroy(&sp14, -1);
        }
        { u8 *entry = StringMap_FindOrInsert(arg0p + 0x1E0, &sp74); entry += 12; String_Assign(entry, &sp68, 0, -1); }
    }
    Xml_Destroy(f, 1);
    String_Destroy(&sp68, -1);
    String_Destroy(&sp74, -1);
}
#pragma cplusplus on
#pragma push
#pragma optimization_level 4
#pragma use_lmw_stmw on
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
    void fn_800C9A60(String *, s32);
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
    s32 index;
    s8 flag;
    s8 made29;
    s8 made28;
    s8 made27;
    s8 made26;

    index = arg1;
    self = arg0;
    str80.cap=0;str74.cap=0;str68.cap=0;
    str80.size=0;str80.data=0;str80.cap=0;
    str74.size=0;str74.data=0;str74.cap=0;
    str68.size=0;str68.data=0;str68.cap=0;
    if(*(void **)((u8 *)self+0x80)&&fn_80165B14(*(void **)((u8 *)self+0x80))){
        fn_800C9A60(&str68,-1);fn_800C9A60(&str74,-1);fn_800C9A60(&str80,-1);return;
    }
    if(lbl_80367878)fn_800C9758(&str80,(String *)(*(u8 **)((u8 *)self+0x1DC)+index*12),0,-1);
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
#pragma pop
extern "C" void fn_800CC7E4(void *self, s32 arg1) {
    void *Heap_Alloc(u32);
    void fn_800056A0(s32);
    u16 FileCache_Probe(char *);
    char *String_CStr(String *);
    void String_AssignCStr(String *, char *, u32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, s32, s32, s32);
    void String_ConcatCStr(String *, String *, char *);
    void String_Assign(String *, String *, s32, s32);
    void String_Destroy(String *, s32);
    void *String_Init(String *, char *, void *);
    void *BattleTerrain_Create(void *, void *, String *, String *);
    u32 strlen(const char *);
    extern char lbl_802704F8[];

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

    s32 id;
    String sp30;
    String sp24;
    String sp18;
    String spC;
    void *scratch;
    void *tmp;
    s8 made;

    id = arg1;
    sp30.cap = 0;
    sp24.cap = 0;
    sp30.size = 0;
    sp30.data = 0;
    sp30.cap = 0;
    sp24.size = 0;
    sp24.data = 0;
    sp24.cap = 0;

    ((Host *)*(void **)((u8 *)self + 4))->v6(lbl_802704F8 + 0x337, lbl_802704F8 + 0x345);
    String_AssignCStr(&sp30, lbl_802704F8 + 0x324, strlen(lbl_802704F8 + 0x324));
    fn_800C99A0(&sp30, id, 0, -1);
    fn_800C992C(&sp30, lbl_802704F8 + 0x1CD, strlen(lbl_802704F8 + 0x1CD));
    String_ConcatCStr(&sp18, &sp30, lbl_802704F8 + 0x348);
    String_Assign(&sp24, &sp18, 0, -1);
    String_Destroy(&sp18, -1);
    if ((u16)FileCache_Probe(String_CStr(&sp24)) == 0x8000) {
        *(s32 *)((u8 *)self + 0x80) = 0;
        fn_800056A0(0);
        String_Destroy(&sp24, -1);
        String_Destroy(&sp30, -1);
        return;
    }
    made = 0;
    tmp = Heap_Alloc(0x54);
    if (tmp != 0) {
        String_Init(&spC, lbl_802704F8 + 0x345, &scratch);
        made = 1;
        tmp = BattleTerrain_Create(tmp, *(void **)((u8 *)self + 4), &spC, &sp30);
    }
    *(void **)((u8 *)self + 0x80) = tmp;
    if (made != 0) {
        String_Destroy(&spC, -1);
    }
    ((Host *)*(void **)((u8 *)self + 4))->v5(*(void **)((u8 *)self + 0x80));
    String_Destroy(&sp24, -1);
    String_Destroy(&sp30, -1);
#pragma cplusplus reset
#pragma use_lmw_stmw reset
}

#pragma cplusplus reset
#pragma use_lmw_stmw on
void fn_800CC9D8(u8 *self, char *arg1) {
void *Heap_Alloc(u32); void String_Init(void *,void *,void *); void *Xml_ParseFile(void *,void *,void *);
void Str_CopyPad(void *,void *,u32); void fn_800C908C(void *,void *,void *);
void Xml_GetChildValue(void *,void *); u8 Xml_AdvanceChild(void *);
void *String_AssignCStr(void *,void *,s32); s32 strlen(char *);
void fn_800CA18C(void *,void *,s32,void *); void Xml_Destroy(void *,s16);
extern char lbl_802704F8[];
struct Block { u32 a,b,c,d,e,f,g,h; };
struct Block sp84,sp64;
char sp44[32];
String sp38,sp2C,sp20,sp14;
u32 sp10,spC,sp8;
u32 path; s8 made1,made2; u8 *f; u8 *arg0=self;
path=(u32)arg1; made1=0; made2=0;
f=(u8 *)Heap_Alloc(0x60);
if(f) { String_Init(&sp2C,lbl_802704F8+0x1D6,&sp10); made1=1; String_Init(&sp20,(char *)path,&spC); made2=1; f=(u8 *)Xml_ParseFile(f,&sp20,&sp2C); }
if(made2 != 0)String_Destroy(&sp20,-1);
if(made1 != 0)String_Destroy(&sp2C,-1);
sp38.cap=0;sp38.size=0;sp38.data=0;sp38.cap=0;
String_Init(&sp14,lbl_802704F8+0x1EB,&sp8);
Str_CopyPad(&sp64,lbl_802704F8+0x34F,32); sp84=sp64;
fn_800C908C(f,&sp14,&sp84);String_Destroy(&sp14,-1);
path=(u32)sp44;
for(;Xml_AdvanceChild(f)!=0;){
Xml_GetChildValue(sp44,f);String_AssignCStr(&sp38,(char *)path,strlen((char *)path));
fn_800CA18C((void *)(arg0+0x1BC),M2C_FIELD(arg0,s32*,0x1C0)*12+M2C_FIELD(arg0,u8**,0x1C4),1,&sp38);
}
Xml_Destroy(f,1);String_Destroy(&sp38,-1);
}

#pragma cplusplus reset
#pragma optimization_level 4

#pragma use_lmw_stmw on
void fn_800CCB9C(s32 self, char *arg1) {
void *Heap_Alloc(u32); void String_Init(void *,void *,void *); void *Xml_ParseFile(void *,void *,void *);
void Str_CopyPad(void *,void *,u32); void fn_800C908C(void *,void *,void *);
void Xml_GetChildName(void *,void *); void Xml_GetChildValue(void *,void *); u8 Xml_AdvanceChild(void *);
void String_Assign(void *,void *,s32,s32); void *String_AssignCStr(void *,void *,s32); s32 strlen(char *);
void fn_800CA18C(void *,void *,s32,void *); void Xml_Destroy(void *,s16);
void String_Destroy(void *, s32);
extern char lbl_802704F8[];
struct Block { u32 a,b,c,d,e,f,g,h; };
struct Block sp118,spF8;
char spD8[32];
struct Block spB8,sp98;
char sp78[32];
String sp6C,sp60,sp54,sp48,sp3C,sp30,sp24,sp18;
u32 sp14,sp10,spC,sp8;
void *f;
s32 arg0;
u32 path;
s8 made1, made2;
arg0 = self;
path = (u32)arg1;
made1 = 0;
made2 = 0;
f = Heap_Alloc(0x60);
if (f != 0) {
String_Init(&sp54, lbl_802704F8 + 0x1D6, &sp14);
made1 = 1;
String_Init(&sp48, (char *)path, &sp10);
made2 = 1;
f = Xml_ParseFile(f, &sp48, &sp54);
}
if ((s8)made2 != 0) String_Destroy(&sp48, -1);
if ((s8)made1 != 0) String_Destroy(&sp54, -1);
sp6C.cap=0; sp60.cap=0; sp6C.size=0; sp6C.data=0; sp6C.cap=0; sp60.size=0; sp60.data=0; sp60.cap=0;
String_Init(&sp3C, lbl_802704F8 + 0x1EB, &spC);
Str_CopyPad(&spF8, lbl_802704F8 + 0x359, 32); sp118 = spF8;
fn_800C908C(f, &sp3C, &sp118); String_Destroy(&sp3C, -1);
path = (u32)spD8;
while (Xml_AdvanceChild(f) != 0) {
Xml_GetChildName(&sp30, f); String_Assign(&sp6C, &sp30, 0, -1); String_Destroy(&sp30, -1);
Xml_GetChildValue(spD8, f); String_AssignCStr(&sp60, (char *)path, strlen((char *)path));
fn_800CA18C((void *)(arg0 + 0x1C8), M2C_FIELD(arg0, u8 **, 0x1D0) + M2C_FIELD(arg0, s32 *, 0x1CC) * 12, 1, &sp60);
}
String_Init(&sp24, lbl_802704F8 + (short)0x1EB, &sp8); Str_CopyPad(&sp98, lbl_802704F8 + 0x365, 32); spB8 = sp98;
fn_800C908C(f, &sp24, &spB8); String_Destroy(&sp24, -1);
path = (u32)sp78;
while (Xml_AdvanceChild(f) != 0) {
Xml_GetChildName(&sp18, f); String_Assign(&sp6C, &sp18, 0, -1); String_Destroy(&sp18, -1);
Xml_GetChildValue(sp78, f); String_AssignCStr(&sp60, (char *)path, strlen((char *)path));
fn_800CA18C((void *)(arg0 + 0x1D4), M2C_FIELD(arg0, u8 **, 0x1DC) + M2C_FIELD(arg0, s32 *, 0x1D8) * 12, 1, &sp60);
}
Xml_Destroy(f, 1); String_Destroy(&sp60, -1); String_Destroy(&sp6C, -1);
}
#pragma push
#pragma cplusplus on
#pragma global_optimizer on
#pragma opt_common_subs off
#pragma opt_lifetimes off
extern "C" void *fn_800CCEBC(void *self, char *path, char *name, void *arg3) {
    void DebugPrint(const char *, ...);
    u16 FileCache_Probe(void);
    void *fn_8005C82C(char *, s32);
    void fn_8008CDE0(void *, void *);
    char *String_CStr(String *);
    s32 String_Compare(String *, s32, u32, char *, u32);
    void String_AssignCStr(String *, char *, u32);
    void String_Assign(String *, String *, s32, s32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void String_Destroy(String *, s32);
    void String_Init(String *, char *, void *);
    void String_ConcatCStr(String *, String *, char *);
    void String_JoinCStr(String *, char *, String *);
    void fn_800DF67C(void *, String *);
    void fn_800E4B44(void *);
    void fn_800E4B84(void *);
    void fn_800E4BA4(void *, s32);
    void fn_800E4D24(void *);
    void fn_800E4E5C(void *);
    void *Unit_GetActor(void *);
    void fn_800E8154(void *, String *);
    void fn_801985F0(void *, void *);
    void fn_801985F8(void *, void *);
    s32 fn_80199310(void *);
    void fn_80199318(String *, void *);
    void fn_801CA1DC(void *, void *);
    u32 strlen(const char *);
    extern char lbl_802704F8[];
    extern void *gCameraWin;

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
        String_Destroy(&spDC, -1);
        return 0;
    }

    String_AssignCStr(&spDC, lbl_802704F8 + 0x36D, strlen(lbl_802704F8 + 0x36D));
    String_Init(&spD0, path, &scratch18);
    fn_800C99A0(&spDC, &spD0, 0, -1);
    String_Destroy(&spD0, -1);
    fn_800C992C(&spDC, lbl_802704F8 + 0x1D1, strlen(lbl_802704F8 + 0x1D1));
    String_CStr(&spDC);
    if ((u16)FileCache_Probe() == 0x8000) {
        DebugPrint(lbl_802704F8 + 0x372, String_CStr(&spDC));
        String_Destroy(&spDC, -1);
        return 0;
    }

    fn_800E8154(*(void **)((u8 *)self + 4), &spDC);
    obj = ((Obj *)*(void **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x399, path);
    String_Init(&spC4, name, &scratch14);
    fn_800DF67C(obj, &spC4);
    String_Destroy(&spC4, -1);
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
            String_Init(&spB8, lbl_802704F8 + 0x3A0, &scratch10);
            sp4C.cap = 0;
            sp4C.size = 0;
            sp4C.data = 0;
            sp4C.cap = 0;
            String_JoinCStr(&sp58, lbl_802704F8 + 0x1C7, &spB8);
            String_ConcatCStr(&sp64, &sp58, lbl_802704F8 + 0x3A6);
            String_Assign(&sp4C, &sp64, 0, -1);
            String_Destroy(&sp64, -1);
            String_Destroy(&sp58, -1);
            String_CStr(&sp4C);
            if ((u16)FileCache_Probe() != 0x8000) {
                loaded = fn_8005C82C(String_CStr(&sp4C), 8);
                String_Destroy(&sp4C, -1);
            } else {
                DebugPrint(lbl_802704F8 + 0x3AF, String_CStr(&sp4C));
                String_Destroy(&sp4C, -1);
                loaded = 0;
            }
            *(void **)((u8 *)self + 0x34C) = loaded;
            String_Destroy(&spB8, -1);
        }

        fn_80199318(&spAC, obj);
        String_ConcatCStr(&spA0, &spAC, lbl_802704F8 + 0x3C6);
        String_Init(&sp94, lbl_802704F8 + 0x3A0, &scratchC);
        sp34.cap = 0;
        sp34.size = 0;
        sp34.data = 0;
        sp34.cap = 0;
        String_AssignCStr(&sp34, lbl_802704F8 + 0x1C7, strlen(lbl_802704F8 + 0x1C7));
        if (String_Compare(&sp94, 0, sp94.size, lbl_802704F8 + 0x1B0, strlen(lbl_802704F8 + 0x1B0)) != 0) {
            String_ConcatCStr(&sp40, &sp94, lbl_802704F8 + 0x1CD);
            fn_800C99A0(&sp34, &sp40, 0, -1);
            String_Destroy(&sp40, -1);
        }
        fn_800C99A0(&sp34, &spA0, 0, -1);
        fn_800C992C(&sp34, lbl_802704F8 + 0x1D1, strlen(lbl_802704F8 + 0x1D1));
        fn_800E8154(*(void **)((u8 *)self + 4), &sp34);
        vret = ((Obj *)*(void **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x1DF, String_CStr(&spA0));
        if (vret != 0) {
            fn_801CA1DC(gCameraWin, vret);
        }
        String_Destroy(&sp34, -1);
        String_Destroy(&sp94, -1);
        String_Destroy(&spA0, -1);
        String_Destroy(&spAC, -1);

        fn_80199318(&sp88, obj);
        String_ConcatCStr(&sp7C, &sp88, lbl_802704F8 + 0x3CB);
        String_Init(&sp70, lbl_802704F8 + 0x3A0, &scratch8);
        sp1C.cap = 0;
        sp1C.size = 0;
        sp1C.data = 0;
        sp1C.cap = 0;
        String_AssignCStr(&sp1C, lbl_802704F8 + 0x1C7, strlen(lbl_802704F8 + 0x1C7));
        if (String_Compare(&sp70, 0, sp70.size, lbl_802704F8 + 0x1B0, strlen(lbl_802704F8 + 0x1B0)) != 0) {
            String_ConcatCStr(&sp28, &sp70, lbl_802704F8 + 0x1CD);
            fn_800C99A0(&sp1C, &sp28, 0, -1);
            String_Destroy(&sp28, -1);
        }
        fn_800C99A0(&sp1C, &sp7C, 0, -1);
        fn_800C992C(&sp1C, lbl_802704F8 + 0x1D1, strlen(lbl_802704F8 + 0x1D1));
        fn_800E8154(*(void **)((u8 *)self + 4), &sp1C);
        vret = ((Obj *)*(void **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x1DF, String_CStr(&sp7C));
        if (vret != 0) {
            fn_801CA1DC(gCameraWin, vret);
        }
        String_Destroy(&sp1C, -1);
        String_Destroy(&sp70, -1);
        String_Destroy(&sp7C, -1);
        String_Destroy(&sp88, -1);
    }

    if (arg3 != 0 && Unit_GetActor(obj) != 0) {
        fn_8008CDE0(Unit_GetActor(obj), arg3);
    }

    String_Destroy(&spDC, -1);
    return obj;
}
#pragma pop
#pragma cplusplus off

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

    return ((Obj *)M2C_FIELD(arg0, void **, 4))->v2((char *)lbl_802704F8 + 0x3D0, (char *)lbl_802704F8 + 0x3D7) ? 0 : 1;
}

extern "C" void fn_800CD678(void *arg0, char *arg1) {
void *Heap_Alloc(u32);
void *String_Init(void *,char *,void *);
void String_Destroy(void *,s16);
void *fn_80151D50(void *,void *,void *,void *,void *,void *,s32);
extern char lbl_802704F8[];
extern f32 lbl_80369DC8;
#pragma cplusplus on
class Host { public: u8 pad[0x10]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void add(void *); };
union Vector { struct { f32 x,y,z; } f; u32 words[3]; };
Vector copyA,a,copyB,b;
u8 name[12],type[12];
s32 scratchA,scratchB;
void *obj;
s8 madeA=0,madeB=0;
obj=Heap_Alloc(0xC8);
if(obj) {
a.f.x=a.f.y=a.f.z=lbl_80369DC8;
b.f.x=b.f.y=b.f.z=lbl_80369DC8;
copyA.words[0]=a.words[0]; copyA.words[1]=a.words[1]; copyA.words[2]=a.words[2];
copyB.words[0]=b.words[0]; copyB.words[1]=b.words[1]; copyB.words[2]=b.words[2];
String_Init(name,arg1,&scratchA); madeA=1;
String_Init(type,lbl_802704F8+0x3D7,&scratchB); madeB=1;
obj=fn_80151D50(obj,*(void **)((u8 *)arg0+4),type,name,&copyB,&copyA,0);
}
((Host *)*(void **)((u8 *)arg0+4))->add(obj);
if(madeB) String_Destroy(type,-1);
if(madeA) String_Destroy(name,-1);
#pragma cplusplus reset
}

#pragma cplusplus reset

#pragma push
#pragma opt_dead_code off
extern "C" void *fn_800CD79C(void *arg0,void *arg1,s32 arg2,u32 arg3,u32 arg4,s32 arg5,u8 arg6) {
 void String_Init(void *,void *,void *); void String_Concat(void *,void *,s32); void String_ConcatCStr(void *,void *,void *);
 void *Heap_Alloc(u32); void *String_CStr(s32); void *String_AssignCStr(void *,void *,s32);
 char *fn_801992F8(u32); s32 strlen(const char *);
 void fn_800E78B0(void *,String *); void fn_800E8154(void *,void *);
 void *fn_80117A94(void *,void *,void *,void *,s32,u8);
 void Actor_LoadXml(void *,void *); void fn_801167BC(void *,u32); void fn_801166C4(void *,u32);
 void fn_800DF664(u32); void fn_8011660C(void *,s32); void fn_800E4E5C(void *);
 void fn_800E4D24(void *); void fn_800E4BA4(void *,s32); void fn_800E4B84(void *); void fn_800E4B44(void *);
 extern char lbl_802704F8[]; extern u8 lbl_8036788C;
 struct Obj { u8 pad[16]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(void *); };
 String sp74,sp68,sp5C,sp50,sp44,sp38,sp2C,sp20,sp14;
 u32 sp10,spC,sp8;
 void *result;
 s8 made1,made2;
 void *self;

 String_Init(&sp74,lbl_802704F8+0x3DB,&sp10);
 sp68.cap=0; sp5C.cap=0; sp68.size=0; sp68.data=0; sp68.cap=0;
 sp5C.size=0; sp5C.data=0; sp5C.cap=0;
 self=arg0;
 if(M2C_FIELD(self,s32 *,0x274)) {
 if(arg6) arg6=0; else arg6=1;
 }
 if(arg3) { result=fn_801992F8(arg3); String_AssignCStr(&sp5C,result,strlen((char *)result)); }
 else String_AssignCStr(&sp5C,lbl_802704F8+0x16F,strlen((char *)lbl_802704F8+0x16F));
 if(lbl_8036788C) String_AssignCStr(&sp5C,lbl_802704F8+0x16F,strlen((char *)lbl_802704F8+0x16F));
 fn_800E78B0(M2C_FIELD(self,void **,4),&sp5C);
 String_Concat(&sp50,&sp74,arg2); String_ConcatCStr(&sp44,&sp50,lbl_802704F8+0x1D1);
 fn_800E8154(M2C_FIELD(self,void **,4),&sp44);
 String_Destroy(&sp44,-1); String_Destroy(&sp50,-1);
 made1=0; made2=0;
 result=Heap_Alloc(0x1D8);
 if(result) {
 String_Init(&sp38,String_CStr(arg2),&spC); made1=1;
 String_Init(&sp2C,arg1,&sp8); made2=1;
 result=fn_80117A94(result,M2C_FIELD(self,void **,4),&sp2C,&sp38,arg5,arg6);
 }
 if(made2) String_Destroy(&sp2C,-1);
 if(made1) String_Destroy(&sp38,-1);
 String_Concat(&sp20,&sp74,arg2); String_ConcatCStr(&sp14,&sp20,lbl_802704F8+0x3DF);
 Actor_LoadXml(result,&sp14); String_Destroy(&sp14,-1); String_Destroy(&sp20,-1);
 fn_801167BC(result,arg3);
 if(arg4) { fn_801166C4(result,arg4); fn_800DF664(arg4); }
 fn_8011660C(result,M2C_FIELD(self,s32 *,0x228));
 ((Obj *)M2C_FIELD(self,void **,4))->v5(result);
 if(M2C_FIELD(self,u8 *,0x186)) fn_800E4E5C(result);
 fn_800E4D24(result); fn_800E4BA4(result,255); fn_800E4B84(result); fn_800E4B44(result);
 String_Destroy(&sp5C,-1); String_Destroy(&sp68,-1); String_Destroy(&sp74,-1);
 return result;
}
#pragma pop

extern "C" void *fn_800CDAA0(void *arg0, void *arg1) {
void String_JoinCStr(String*,char*,void*);
void String_ConcatCStr(String*,String*,char*);
void String_Assign(String*,String*,s32,s32);
void String_Destroy(String*,s32);
char *String_CStr(String*);
u16 FileCache_Probe(char*);
void *fn_8005C82C(char*,s32);
void DebugPrint(char*,...);
extern char lbl_802704F8[];
struct Ret { void *p; } result;
String out; String a; String b;
out.cap=0;out.size=0;out.data=0;out.cap=0;
String_JoinCStr(&a,lbl_802704F8+0x1c7,arg1);
String_ConcatCStr(&b,&a,lbl_802704F8+0x3a6);
String_Assign(&out,&b,0,-1);
String_Destroy(&b,-1);String_Destroy(&a,-1);
if(FileCache_Probe(String_CStr(&out))!=0x8000){
result.p=fn_8005C82C(String_CStr(&out),8);
String_Destroy(&out,-1);return result.p;
}
DebugPrint(lbl_802704F8+0x3af,String_CStr(&out));
String_Destroy(&out,-1);return 0;
}

extern "C" s32 fn_800CDBA4(void *arg0, s32 arg1, u32 arg2) {
#pragma opt_common_subs off
    u16 FileCache_Probe(const char *);
    s32 FileCache_Load(const char *);
    char *String_CStr(String *);
    void String_AssignCStr(String *, char *, u32);
    void String_Assign(String *, String *, s32, s32);
    void String_Destroy(String *, s32);
    void String_Concat(String *, String *, void *);
    void String_ConcatCStr(String *, String *, char *);
    void String_JoinCStr(String *, char *, s32);
    char *fn_801992F8(u32);
    u32 strlen(const char *);
    extern char lbl_802704F8[];

    struct Result { s32 value; } ret;
    char *p;
    String name;
    String result;

    (void)arg0;
    name.cap = 0;
    result.cap = 0;
    name.size = 0;
    name.data = 0;
    name.cap = 0;
    result.size = 0;
    result.data = 0;
    result.cap = 0;

    if (arg2 != 0) {
        p = fn_801992F8(arg2);
        String_AssignCStr(&result, p, strlen(p));
    } else {
        String_AssignCStr(&result, &lbl_802704F8[0x16F], strlen(&lbl_802704F8[0x16F]));
    }

    {
        String a, b, c, d, e, f;
        String_JoinCStr(&a, &lbl_802704F8[0x3DB], arg1);
        String_ConcatCStr(&b, &a, &lbl_802704F8[0x1CD]);
        String_Concat(&c, &b, (void *)arg1);
        String_ConcatCStr(&d, &c, &lbl_802704F8[0x1CF]);
        String_Concat(&e, &d, &result);
        String_ConcatCStr(&f, &e, &lbl_802704F8[0x3E8]);
        String_Assign(&name, &f, 0, -1);
        String_Destroy(&f, -1);
        String_Destroy(&e, -1);
        String_Destroy(&d, -1);
        String_Destroy(&c, -1);
        String_Destroy(&b, -1);
        String_Destroy(&a, -1);
    }
    if ((u16)FileCache_Probe(String_CStr(&name)) != 0x8000) {
        ret.value = FileCache_Load(String_CStr(&name));
        String_Destroy(&result, -1);
        String_Destroy(&name, -1);
        return ret.value;
    }

    {
        String a, b, c, d, e, f;
        String_JoinCStr(&a, &lbl_802704F8[0x3DB], arg1);
        String_ConcatCStr(&b, &a, &lbl_802704F8[0x1CD]);
        String_Concat(&c, &b, (void *)arg1);
        String_ConcatCStr(&d, &c, &lbl_802704F8[0x1CF]);
        String_Concat(&e, &d, &result);
        String_ConcatCStr(&f, &e, &lbl_802704F8[0x3ED]);
        String_Assign(&name, &f, 0, -1);
        String_Destroy(&f, -1);
        String_Destroy(&e, -1);
        String_Destroy(&d, -1);
        String_Destroy(&c, -1);
        String_Destroy(&b, -1);
        String_Destroy(&a, -1);
    }
    if ((u16)FileCache_Probe(String_CStr(&name)) != 0x8000) {
        ret.value = FileCache_Load(String_CStr(&name));
        String_Destroy(&result, -1);
        String_Destroy(&name, -1);
        return ret.value;
    }

    String_Destroy(&result, -1);
    String_Destroy(&name, -1);
    return 0;
}

extern "C" void fn_800CDEB0(u8 *self) {
#pragma cplusplus on
struct Entry { u32 f0;
u32 f4;
u32 f8;
u32 fc;
u32 f10;
u8 f14;
u32 f18;
u32 f1c;
u32 f20;
u32 f24;
u32 f28;
u32 f2c;
u32 f30;
u32 f34;
u32 f38;
u32 f3c;
u32 f40;
u32 f44;
u32 f48;
u32 f4c;
u32 f50;
u32 f54;
Entry(const Entry &other):f0(other.f0),f4(other.f4),f8(other.f8),fc(other.fc),f10(other.f10),f14(other.f14),f18(other.f18),f1c(other.f1c),f20(other.f20),f24(other.f24),f28(other.f28),f2c(other.f2c),f30(other.f30),f34(other.f34),f38(other.f38),f3c(other.f3c),f40(other.f40),f44(other.f44),f48(other.f48),f4c(other.f4c),f50(other.f50),f54(other.f54) {}
};
if (*(u32*)(self+0x20c)<*(u32*)(self+0x204)) {
u32 index=(*(u32*)(self+0x20c))++;
Entry entry = (*(Entry**)(self+0x208))[index];
*(u32*)(self+0x9c)=entry.f0;
*(u32*)(self+0xa0)=entry.f4;
*(u32*)(self+0xac)=entry.f8;
*(u32*)(self+0xb0)=entry.fc;
*(u32*)(self+0x174)=entry.f10;
*(u8*)(self+0x178)=entry.f14;
*(u32*)(self+0x210)=entry.f18;
*(u32*)(self+0x21c)=entry.f1c;
*(u32*)(self+0x220)=entry.f20;
*(u32*)(self+0x224)=entry.f24;
*(u32*)(self+0x214)=entry.f28;
*(u32*)(self+0x218)=entry.f2c;
*(u32*)(self+0x254)=entry.f50;
*(u32*)(self+0x258)=entry.f54;
*(u32*)(self+0x260)=0;
*(u32*)(self+0x264)=0;
*(u32*)(self+0x234)=entry.f30;
*(u32*)(self+0x244)=entry.f40;
*(u32*)(self+0x238)=entry.f34;
*(u32*)(self+0x248)=entry.f44;
*(u32*)(self+0x23c)=entry.f38;
*(u32*)(self+0x24c)=entry.f48;
*(u32*)(self+0x240)=entry.f3c;
*(u32*)(self+0x250)=entry.f4c;
}
#pragma cplusplus reset
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
#pragma cplusplus reset
void fn_800CDFFC(void *arg0)
{
    extern char lbl_802704F8[];
    extern u32 lbl_8028DA48[];
    void fn_80232138(const char *, ...);
    void *String_Destroy(void *, s16);

    typedef struct {
        s32 value[10];
    } RecordValues;
    typedef struct {
        u8 reserved[0x30];
        RecordValues data;
    } LocalRecord;

    u8 *record;
    u32 *table;
    u32 *valueTable;
    u32 *lookup6c;
    u32 *lookup78;
    u32 *lookupb0;
    s32 index;
    s32 count;
    s32 type;
    s32 field10;
    s32 field1c;
    s32 field20;
    s32 field24;
    LocalRecord values;
    s32 string24[3];
    s32 string18[3];

    table = lbl_8028DA48;

    string24[1] = 0;
    string18[1] = 0;
    string24[0] = 0;
    string24[2] = 0;
    string24[1] = 0;
    string18[0] = 0;
    string18[2] = 0;
    string18[1] = 0;

    count = *(s32 *)((u8 *)arg0 + 0x204);

    fn_80232138(lbl_802704F8 + 0x3F2);

    for (index = 0; index < count; index++) {
        record = *(u8 **)((u8 *)arg0 + 0x208) + index * 0x58;

        type = *(s32 *)(record + 0x18);
        field10 = *(s32 *)(record + 0x10);
        field1c = *(s32 *)(record + 0x1C);
        field20 = *(s32 *)(record + 0x20);
        field24 = *(s32 *)(record + 0x24);

        values.data = *(RecordValues *)(record + 0x30);

        if (type != 12) {
            lookup6c = (u32 *)((u8 *)table + 0x6C);
            lookup78 = (u32 *)((u8 *)table + 0x78);
            lookupb0 = (u32 *)((u8 *)table + 0xB0);
            fn_80232138(
                lbl_802704F8 + 0x3F5,
                index,
                lookup6c[field10],
                lookup78[type],
                lookupb0[field1c],
                field20,
                field24
            );

            valueTable = (u32 *)((u8 *)table + 0xC4);

            fn_80232138(
                lbl_802704F8 + 0x41E,
                values.data.value[8],
                *(u32 *)((u8 *)&valueTable[values.data.value[0]] + 4),
                *(u32 *)((u8 *)&valueTable[values.data.value[1]] + 4),
                *(u32 *)((u8 *)&valueTable[values.data.value[2]] + 4),
                *(u32 *)((u8 *)&valueTable[values.data.value[3]] + 4),
                values.data.value[9],
                *(u32 *)((u8 *)&valueTable[values.data.value[4]] + 4),
                *(u32 *)((u8 *)&valueTable[values.data.value[5]] + 4),
                *(u32 *)((u8 *)&valueTable[values.data.value[6]] + 4),
                *(u32 *)((u8 *)&valueTable[values.data.value[7]] + 4)
            );
        } else {
            fn_80232138(lbl_802704F8 + 0x462, index);
        }
    }

    String_Destroy(string18, -1);
    String_Destroy(string24, -1);
}
#pragma cplusplus on
extern "C" void fn_800CE214(void *self, void *stat) {
    void GActor_RequestRes(char *);
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
        s16 idx;
        s16 *stream;
        s16 val;
        stream = *(s16 **)((u8 *)self + 0x1FC);
        idx = *stream;
        val = *(s16 *)((u8 *)stream + idx * 4 + 6);
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
                    GActor_RequestRes(lbl_802704F8 + 0x46F);
                    GActor_RequestRes(lbl_802704F8 + 0x47C);
                }
            }
            break;
        case 0x15:
            if (*(s32 *)((u8 *)stat + 0x10) == 1) {
                *(s32 *)((u8 *)stat + 0x20) = (s8)*(s16 *)((u8 *)stream + idx4 + 6);
            } else {
                *(s32 *)((u8 *)stat + 0x24) = (s8)*(s16 *)((u8 *)stream + idx4 + 6);
                if (*(s32 *)((u8 *)stat + 0x24) == 0) {
                    GActor_RequestRes(lbl_802704F8 + 0x46F);
                    GActor_RequestRes(lbl_802704F8 + 0x47C);
                }
            }
            break;
        case 0x50:
            *(s32 *)((u8 *)stat + 0x1C) = 0;
            break;
        case 0x51:
            *(s32 *)((u8 *)stat + 0x18) = 1;
            *(s32 *)((u8 *)stat + 0x1C) = 1;
            GActor_RequestRes(lbl_802704F8 + 0x48B);
            break;
        case 0x52:
            *(s32 *)((u8 *)stat + 0x1C) = 2;
            GActor_RequestRes(lbl_802704F8 + 0x499);
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
        u32 *s;
        void *entry = (u8 *)*(void **)((u8 *)self + 0x208)
            + (*(s32 *)((u8 *)self + 0x204) - 1) * 0x58;
        s = (u32 *)((u8 *)entry - 4);
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
            GActor_RequestRes(lbl_802704F8 + 0x4A2);
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
#pragma push
#pragma opt_propagation off
extern "C" void fn_800CE690(void *arg0, s32 *arg1)
{
    extern char lbl_802704F8[];

    u32 strlen(const char *);
    s32 String_Compare(String *, u32, u32, char *, u32);
    char *String_CStr(void *);
    void *Res_GetByName(void *);
    void GActor_RequestRes(char *);
    void DebugPrint(const char *, ...);
    void fn_80232138(char *, ...);
    void fn_800056A0(s32);

    s16 *stream;
    s16 *header;
    u8 opcode;

    s32 j;
    s32 count;
    s32 mode;
    s32 i;
    u8 *stat;
    u8 *self;
    s32 index;

    stat = (u8 *)arg1;
    self = (u8 *)arg0;

    header = *(s16 **)(self + 0x1FC);
    j = *header;

    count = (s8)*(s16 *)((u8 *)header + j * 4 + 6);
    *header = j + 1;

    *(s32 *)(stat + 0x50) = 0;
    *(s32 *)(stat + 0x54) = 0;

    i = 0;

    while (i < count) {
        s32 secondIndex;

        stream = *(s16 **)(self + 0x1FC);
        opcode = *(u8 *)((u8 *)stream + (*stream * 4) + 4);

        switch (opcode) {
        case 0x22: index = 0x1A; mode = 1; break;
        case 0xa: index = 0; mode = 0; break;
        case 0xc: index = 0x1A; mode = 0; break;
        case 0x16: index = 0; mode = 1; break;
        case 0x18: index = 1; mode = 1; break;
        case 0x24: case 0x26: case 0x28: case 0x2a: case 0x2c:
        case 0x2e: case 0x30: case 0x32: case 0x34:
            mode = -1; break;
        case 0x35: case 0x36: case 0x37: case 0x38: case 0x39:
        case 0x3a: case 0x3b: case 0x3c: case 0x3d: case 0x3e:
        case 0x3f: case 0x40: case 0x41: case 0x42: case 0x43:
            index = opcode - 0x35; mode = 0; break;
        case 0x44: case 0x45: case 0x46: case 0x47: case 0x48:
        case 0x49: case 0x4a: case 0x4b: case 0x4c: case 0x4d:
            index = opcode - 0x35; mode = 1; break;
        case 0x4e:
            index = 0xC; secondIndex = 0x1B; mode = 2; break;
        default:
            break;
        }

        if (index == 3) {
            s32 n = *(s32 *)(stat + 0x50);
            s32 *p = (s32 *)stat;
            s32 k;
            for (k = 0; k < n; k++, p++) {
                if (p[0xC] == 4) goto next_command;
            }
        }

        if (mode == 0) {
            s32 used = *(s32 *)(stat + 0x50);
            j = used;
            if (used < 4) {
                *(s32 *)(stat + 0x30 + j * 4) = index;
                (*(s32 *)(stat + 0x50))++;
            } else {
                DebugPrint(lbl_802704F8 + 0x4AE);
            }
            if (index < 0) goto next_command;
            if ((u32)index >= *(u32 *)(self + 0x1C0)) goto next_command;
            String *entry;
            char *name;
            s32 offset = index * 0xC;
            u32 length;
            entry = (String *)(*(u8 **)(self + 0x1C4) + offset);
            length = strlen(lbl_802704F8 + 0x16F);
            if (String_Compare(entry, 0, entry->size,
                    lbl_802704F8 + 0x16F, length) != 0) {
                name = String_CStr(*(u8 **)(self + 0x1C4) + offset);
                if ((u32)Res_GetByName(name) == 0U) {
                    fn_800056A0(0);
                    goto next_command;
                }
                GActor_RequestRes(name);
                fn_80232138(lbl_802704F8 + 0x172, name);
            }
            goto next_command;
        }

        if (mode == 1) {
            s32 used54 = *(s32 *)(stat + 0x54);
            j = used54;
            if (used54 < 4) {
                *(s32 *)(stat + 0x40 + j * 4) = index;
                (*(s32 *)(stat + 0x54))++;
            } else {
                DebugPrint(lbl_802704F8 + 0x4AE);
            }
            if (index < 0) goto next_command;
            if ((u32)index >= *(u32 *)(self + 0x1C0)) goto next_command;
            char *name;
            s32 offset = index * 0xC;
            String *entry;
            u32 length;
            entry = (String *)(*(u8 **)(self + 0x1C4) + offset);
            length = strlen(lbl_802704F8 + 0x16F);
            if (String_Compare(entry, 0, entry->size,
                    lbl_802704F8 + 0x16F, length) != 0) {
                name = String_CStr(*(u8 **)(self + 0x1C4) + offset);
                if ((u32)Res_GetByName(name) == 0U) {
                    fn_800056A0(0);
                    goto next_command;
                }
                GActor_RequestRes(name);
                fn_80232138(lbl_802704F8 + 0x172, name);
            }
            goto next_command;
        }

        if (mode == 2) {
            s32 used = *(s32 *)(stat + 0x50);
            j = used;
            if (used < 4) {
                *(s32 *)(stat + 0x30 + j * 4) = index;
                (*(s32 *)(stat + 0x50))++;
            } else {
                DebugPrint(lbl_802704F8 + 0x4AE);
            }
            s32 used54 = *(s32 *)(stat + 0x54);
            j = used54;
            if (used54 < 4) {
                *(s32 *)(stat + 0x40 + j * 4) = secondIndex;
                (*(s32 *)(stat + 0x54))++;
            } else {
                DebugPrint(lbl_802704F8 + 0x4AE);
            }
            if (index >= 0 && (u32)index < *(u32 *)(self + 0x1C0)) {
                String *entry;
                char *name;
                s32 offset = index * 0xC;
                u32 length;
                entry = (String *)(*(u8 **)(self + 0x1C4) + offset);
                length = strlen(lbl_802704F8 + 0x16F);
                if (String_Compare(entry, 0, entry->size,
                        lbl_802704F8 + 0x16F, length) != 0) {
                    name = String_CStr(*(u8 **)(self + 0x1C4) + offset);
                    if ((u32)Res_GetByName(name) == 0U) {
                        fn_800056A0(0);
                    } else {
                        GActor_RequestRes(name);
                        fn_80232138(lbl_802704F8 + 0x172, name);
                    }
                }
            }
            if (secondIndex >= 0 &&
                (u32)secondIndex < *(u32 *)(self + 0x1C0)) {
                String *entry;
                char *name;
                s32 offset = secondIndex * 0xC;
                u32 length;
                entry = (String *)(*(u8 **)(self + 0x1C4) + offset);
                length = strlen(lbl_802704F8 + 0x16F);
                if (String_Compare(entry, 0, entry->size,
                        lbl_802704F8 + 0x16F, length) != 0) {
                    name = String_CStr(*(u8 **)(self + 0x1C4) + offset);
                    if ((u32)Res_GetByName(name) == 0U) {
                        fn_800056A0(0);
                    } else {
                        GActor_RequestRes(name);
                        fn_80232138(lbl_802704F8 + 0x172, name);
                    }
                }
            }
        }

    next_command:
        stream = *(s16 **)(self + 0x1FC);
        *stream = *stream + 1;
        i++;
    }
}
#pragma pop
extern "C" u8 fn_800CEB6C(void *arg0, s32 *arg1) {
    s16 *stream;
    s32 idx;
    u8 code;
    s32 count;
    u8 *entry;
    s32 v0;
    s32 v4;
    s32 v8;
    s32 vC;
    s32 v10;
    u8 v14;

    count = *(s32 *)((u8 *)arg0 + 0x204);
    if (count != 0) {
        entry = (u8 *)*(void **)((u8 *)arg0 + 0x208) + (count - 1) * 0x58;
        v0 = *(s32 *)(entry + 0);
        v4 = *(s32 *)(entry + 4);
        v8 = *(s32 *)(entry + 8);
        vC = *(s32 *)(entry + 0xc);
        v10 = *(s32 *)(entry + 0x10);
        v14 = entry[0x14];
    }
    stream = *(s16 **)((u8 *)arg0 + 0x1fc);
    code = *((u8 *)stream + (*stream * 4) + 4);
    switch ((s32)code) {
    case 0x20:
        arg1[0] = *(s32 *)((u8 *)arg0 + 0x84);
        arg1[1] = *(s32 *)((u8 *)arg0 + 0x88);
        arg1[2] = *(s32 *)((u8 *)arg0 + 0xa8);
        arg1[3] = *(s32 *)((u8 *)arg0 + 0xa4);
        arg1[4] = 0;
        if (*(s32 *)((u8 *)arg0 + 0x274) == 0) {
            *(u8 *)&arg1[5] = 0;
        } else {
            *(u8 *)&arg1[5] = 1;
        }
        arg1[6] = 0;
        break;
    case 0x21:
        arg1[0] = *(s32 *)((u8 *)arg0 + 0x88);
        arg1[1] = *(s32 *)((u8 *)arg0 + 0x84);
        arg1[2] = *(s32 *)((u8 *)arg0 + 0xa4);
        arg1[3] = *(s32 *)((u8 *)arg0 + 0xa8);
        arg1[4] = 1;
        if (*(s32 *)((u8 *)arg0 + 0x274) == 0) {
            *(u8 *)&arg1[5] = 1;
        } else {
            *(u8 *)&arg1[5] = 0;
        }
        arg1[6] = 0;
        break;
    case 0x22:
        arg1[0] = *(s32 *)((u8 *)arg0 + 0x8c);
        arg1[1] = *(s32 *)((u8 *)arg0 + 0x88);
        arg1[2] = *(s32 *)((u8 *)arg0 + 0xa8);
        arg1[3] = *(s32 *)((u8 *)arg0 + 0xa4);
        arg1[4] = 2;
        if (*(s32 *)((u8 *)arg0 + 0x274) == 0) {
            *(u8 *)&arg1[5] = 0;
        } else {
            *(u8 *)&arg1[5] = 1;
        }
        arg1[6] = 0;
        break;
    case 0x24:
        arg1[0] = v4;
        arg1[1] = v0;
        arg1[2] = vC;
        arg1[3] = v8;
        if (v10 != 0) {
            arg1[4] = 0;
        } else {
            arg1[4] = 1;
        }
        if (v14 != 0) {
            *(u8 *)&arg1[5] = 0;
        } else {
            *(u8 *)&arg1[5] = 1;
        }
        arg1[6] = 0xb;
        break;
    }
    ++*(*(s16 **)((u8 *)arg0 + 0x1fc));
    stream = *(s16 **)((u8 *)arg0 + 0x1fc);
    idx = *stream;
    if (*((u8 *)stream + (idx * 4) + 4) == 0x23) {
        *stream = (s16)(idx + 1);
    }
    if (*((u8 *)*(s16 **)((u8 *)arg0 + 0x1fc) + (*(*(s16 **)((u8 *)arg0 + 0x1fc)) * 4) + 4) == 0x53) {
        ++*(*(s16 **)((u8 *)arg0 + 0x1fc));
        return 1;
    }
    return 0;
}
#pragma global_optimizer reset
#pragma dont_inline reset
extern "C" u8 fn_800CED88(void *arg0) {
void fn_800D5DB0(void *, s32, s32, s32 *);
u8 fn_800CEB6C(void *, s32 *);
void fn_800CE690(void *, s32 *);
void fn_800CE214(void *, s32 *);
s32 stat[22]; s16 *p; s32 code; u8 done, empty;
stat[0]=*(s32*)((u8*)arg0+0x84); stat[1]=*(s32*)((u8*)arg0+0x88);
stat[2]=*(s32*)((u8*)arg0+0xa8); stat[3]=*(s32*)((u8*)arg0+0xa4);
stat[4]=0; *(u8*)&stat[5]=0; stat[6]=13;
stat[7]=0;stat[8]=0;stat[9]=0;stat[10]=0;stat[11]=0;
stat[15]=-1;stat[14]=-1;stat[13]=-1;stat[12]=-1;
stat[19]=-1;stat[18]=-1;stat[17]=-1;stat[16]=-1;
stat[20]=0;stat[21]=0;
p=*(s16**)((u8*)arg0+0x1fc); code=*((u8*)p+*p*4+4);
if(code==0x25){++*p;p=*(s16**)((u8*)arg0+0x1fc);code=*((u8*)p+*p*4+4);}
if(code==0x26){p=*(s16**)((u8*)arg0+0x1fc);++*p;p=*(s16**)((u8*)arg0+0x1fc);code=*((u8*)p+*p*4+4);}
if(code==0){stat[6]=12;fn_800D5DB0((u8*)arg0+0x200,*(s32*)((u8*)arg0+0x208)+*(s32*)((u8*)arg0+0x204)*0x58,1,stat);empty=1;}else empty=0;
if(empty)return 1;
if(fn_800CEB6C(arg0,stat))return 0;
done=0;
while(!done){s32 offset; p=*(s16**)((u8*)arg0+0x1fc);offset=*p*4+4;switch((s32)*((u8*)p+offset)){
case 0x55:{s32 jump=(s8)*(s16*)((u8*)p+(offset+2));++*p;if(jump){p=*(s16**)((u8*)arg0+0x1fc);*p=jump+*p;}}break;
case 0x56:fn_800CE690(arg0,stat);break;
case 0x57:fn_800CE214(arg0,stat);break;
default:done=1;break;}}
p=*(s16**)((u8*)arg0+0x1fc);code=*((u8*)p+*p*4+4);
if(code==0x27){++*p;p=*(s16**)((u8*)arg0+0x1fc);code=*((u8*)p+*p*4+4);}
if(code==0x28){p=*(s16**)((u8*)arg0+0x1fc);*(s32*)((u8*)arg0+0x230)=(s8)*(s16*)((u8*)p+*p*4+6);p=*(s16**)((u8*)arg0+0x1fc);++*p;}
return 0;
}

extern s32 fn_800D5DB0(void *, s32, s32, s32 *);
extern u8 fn_800CEB6C(void *, s32 *);
extern void fn_800CE690(void *, s32 *);
extern void fn_800CE214(void *, s32 *);
extern void fn_800CDFFC(void *);
extern u8 fn_800CED88(void *);
extern "C" void fn_800CF000(void *arg0) {
    void fn_800340E4(void *);
    void fn_800D5DB0(void *, s32, s32, s32 *);
    void fn_800CE690(void *, s32 *);
    u8 fn_800CED88(void *);
    void fn_800CE214(void *, s32 *);
    void fn_800CDFFC(void *);
    s32 stat[22];
    s32 done;
    s16 *stream;
    u8 ok;
    void *self;
    s16 *p;
    s32 code;
    s32 jump;

    ok = 0;
    self = arg0;
    stream = *(s16 **)((u8 *)arg0 + 0x1fc);
    fn_800340E4(stream);

    stat[0] = *(s32 *)((u8 *)self + 0x84);
    done = 0;
    {
        s32 n1 = -1;
        stat[1] = *(s32 *)((u8 *)self + 0x88);
        stat[2] = *(s32 *)((u8 *)self + 0xa8);
        stat[3] = *(s32 *)((u8 *)self + 0xa4);
        stat[4] = done;
        *(u8 *)&stat[5] = (u8)done;
        stat[6] = 13;
        stat[7] = done;
        stat[8] = done;
        stat[9] = done;
        stat[10] = done;
        stat[11] = done;
        stat[15] = n1;
        stat[14] = n1;
        stat[13] = n1;
        stat[12] = n1;
        stat[19] = n1;
        stat[18] = n1;
        stat[17] = n1;
        stat[16] = n1;
        stat[20] = done;
        stat[21] = done;
    }

    while (!(u8)done) {
        s32 idx4;
        s32 off;
        p = *(s16 **)((u8 *)self + 0x1fc);
        idx4 = *p * 4;
        off = idx4 + 4;
        switch ((s32)*(u8 *)(p + off)) {
        case 0x55: {
            s32 j = (s8)*(s16 *)((s32)p + idx4 + 6);
            ++*p;
            if (j) {
                p = *(s16 **)((u8 *)self + 0x1fc);
                *p = (s16)(j + *p);
            }
            break;
        }
        case 0x56:
            fn_800CE690(self, stat);
            break;
        case 0x57:
            fn_800CE214(self, stat);
            break;
        default:
            done = 1;
            break;
        }
    }

    fn_800D5DB0((u8 *)self + 0x200,
        *(s32 *)((u8 *)self + 0x208) + *(s32 *)((u8 *)self + 0x204) * 0x58,
        1, stat);

    {
        u8 *entry;
        entry = (u8 *)stream + *stream * 4 + 4;
        code = entry[0];
        jump = (s8)*(s16 *)(entry + 2);
    }

    while (code != 0x54) {
        ++*stream;
        if (jump != 0) {
            *stream = (s16)(jump + *stream);
        }
        {
            u8 *entry;
            entry = (u8 *)stream + *stream * 4;
            code = entry[4];
            jump = (s8)*(s16 *)(entry + 6);
        }
    }

    ++*stream;
    code = *((u8 *)stream + *stream * 4 + 4);

    if (code == 0x20 || code == 0x22) {
        *(s32 *)((u8 *)self + 0x270) = 0;
        if (*(s32 *)((u8 *)self + 0x274) == 0) {
            *(s32 *)((u8 *)self + 0x270) = 0;
        } else {
            *(s32 *)((u8 *)self + (u32)0x270) = 1;
        }
    } else {
        if (*(s32 *)((u8 *)self + 0x274) == 0) {
            *(s32 *)((u8 *)self + 0x270) = 1;
        } else {
            *(s32 *)((u8 *)self + 0x270) = 0;
        }
    }

    while (!ok) {
        ok = fn_800CED88(self);
    }

    fn_800CDFFC(self);
    *(s32 *)((u8 *)self + 0x20c) = 0;
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

void fn_800CF2C8(void *arg0, s32 arg1, s32 arg2) {
    void fn_801C6CBC(u32 *, s32, s32, s32);
    void *Unit_GetActor(void *);
    void fn_801C6E60(void *);
    void *fn_80116604(void *);

    extern u8 *gGame;
    extern s32 lbl_80367884;

    u8 *self;
    u8 tmp[4];
    u32 color;
    u8 value;
    void *other;

    self = (u8 *)arg0;

    value = *(u32 *)(gGame + 0x18C);
    tmp[0] = value;
    tmp[1] = value;
    tmp[2] = value;
    tmp[3] = 0xFF;
    color = *(u32 *)tmp;

    fn_801C6CBC(&color, arg1, lbl_80367884, arg2);

    if (*(void **)(self + 0x84) != NULL) {
        fn_801C6E60(Unit_GetActor(*(void **)(self + 0x84)));
        other = fn_80116604(*(void **)(self + 0x84));
        if (other != NULL) {
            if (Unit_GetActor(other) != NULL) {
                fn_801C6E60(Unit_GetActor(other));
            }
        }
    }

    if (*(void **)(self + 0x88) != NULL) {
        fn_801C6E60(Unit_GetActor(*(void **)(self + 0x88)));
        other = fn_80116604(*(void **)(self + 0x88));
        if (other != NULL) {
            if (Unit_GetActor(other) != NULL) {
                fn_801C6E60(Unit_GetActor(other));
            }
        }
    }

    if (*(void **)(self + 0x8C) != NULL) {
        fn_801C6E60(Unit_GetActor(*(void **)(self + 0x8C)));
        other = fn_80116604(*(void **)(self + 0x8C));
        if (other != NULL) {
            if (Unit_GetActor(other) != NULL) {
                fn_801C6E60(Unit_GetActor(other));
            }
        }
    }
}

void fn_800CF3E0(void *arg0) {
void *String_Init(void *, char *, void *);
void *fn_800E7E4C(void *, void *);
void fn_800E7C94(void *, void *, s32, f32);
extern char lbl_802704F8[];
extern f32 lbl_80369DC8, lbl_80369DD4;
u8 a[12], b[12], c[12], d[12];
s32 x,y,z,w;
u8 *self=arg0;
char *strings=lbl_802704F8;
*(f32 *)(self+0x1B0)=*(f32 *)(self+0x1B4)=*(f32 *)(self+0x1B8)=0.0f;
String_Init(a,strings+0x4D2,&x);
fn_800E7C94(*(void **)(self+4),a,1,lbl_80369DD4);
String_Destroy(a,-1);
String_Init(b,strings+0x4DD,&y);
fn_800E7C94(*(void **)(self+4),b,1,lbl_80369DD4);
String_Destroy(b,-1);
String_Init(c,strings+0x4D2,&z);
*(s32 *)((u8 *)fn_800E7E4C(*(void **)(self+4),c)+0x60)=0;
String_Destroy(c,-1);
String_Init(d,strings+0x4DD,&w);
*(s32 *)((u8 *)fn_800E7E4C(*(void **)(self+4),d)+0x60)=0;
String_Destroy(d,-1);
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
#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
extern "C" void fn_800CF5B8(void *arg0) {
    struct Host {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void *v2(char *, char *);
    };
    struct String {
        s32 size;
        void *data;
        s32 cap;
    };
    void String_Init(String *, char *, void *);
    void String_Destroy(String *, s32);
    void *fn_800E7DF8(void *, String *);
    void fn_800E2218(void *, void *);
    void fn_80123300(void *, s32);
    void Ui_Meter_Init(void *, s32, s32);
    extern char lbl_802704F8[];
    extern void *lbl_8028DA94[];
    extern void *lbl_8028DAA4[];
    extern u32 gBattle[];
    extern u8 gBattleReplayActive;
    extern u8 *gBattleReplayScene;

    String s0, s1, s2, s3, s4, s5;
    String t0, t1, t2, t3, t4, t5;
    void *a0, *a1, *a2, *a3, *a4, *a5;
    void *b0, *b1, *b2, *b3, *b4, *b5;
    void *pE8, *pE4, *pE0, *pDC, *pD8, *pD4, *pD0, *pCC, *pC8;
    void *p14;
    void *p31;
    void *p30;
    s32 v29;
    s32 v28;
    s32 v27;
    s32 v26;
    s32 v25;
    s32 v24;
    s32 v23;
    s32 v22;
    s32 v21;
    s32 v20;
    s32 v19;
    s32 v18;
    s32 v17;
    s32 v16;
    void *self;
    s16 *stream;
    s32 op;
    s32 skip;
    u8 *g;
    u8 *row;
    void *tmp;
    s16 cur;

    self = arg0;
    p31 = 0;
    p30 = 0;
    p14 = 0;
    stream = *(s16 **)((u8 *)arg0 + 0x1FC);

    if (gBattleReplayActive != 0) {
        g = gBattleReplayScene;
        v26 = 0;
        v17 = 0;
        v20 = 0;
        v28 = *(s32 *)(g + 0x140);
        v16 = 1;
        v22 = *(s32 *)(g + 0x2A8);
        v27 = *(s32 *)(g + 0x144);
        v29 = v28;
        v25 = *(s32 *)(g + 0x148);
        v23 = v22;
        v24 = *(s32 *)(g + 0x14C);
        v21 = *(s32 *)(g + 0x2AC);
        v19 = *(s32 *)(g + 0x2B0);
        v18 = *(s32 *)(g + 0x2B4);
    } else {
        cur = *stream;
        row = (u8 *)((s32)stream + (cur << 2) + 4);
        skip = (s8)*(s16 *)(row + 2);
        op = *row;
        while (op != 0x55) {
            cur = *stream;
            *stream = cur + 1;
            if (skip != 0) {
                *stream = (s16)(skip + *stream);
            }
            cur = *stream;
            row = (u8 *)((s32)stream + (cur << 2));
            skip = (s8)*(s16 *)(row + 6);
            op = row[4];
        }
        cur = *stream;
        *stream = cur + 1;
        cur = *stream;
        v29 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        cur = *stream;
        v28 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        cur = *stream;
        v27 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        cur = *stream;
        v26 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        cur = *stream;
        v25 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        cur = *stream;
        v24 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        cur = *stream;
        v23 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        cur = *stream;
        v22 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        cur = *stream;
        v21 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        v20 = (s8)stream[(*stream)++ * 2 + 3];
        cur = *stream;
        v19 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        cur = *stream;
        v18 = (s8)*(s16 *)((s32)stream + (cur << 2) + 6);
        *stream = cur + 1;
        tmp = *(void **)((u8 *)gBattle + 0x190);
        v17 = *((u8 *)tmp + 8);
        tmp = *(void **)((u8 *)gBattle + 0x470);
        v16 = *((u8 *)tmp + 8);
    }

    if (*(s32 *)((u8 *)self + 0x274) == 0) {
        pE8 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4EF);
        pE4 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4F7);
        pE0 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4FF);
        pDC = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x508);
        pD8 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x510);
        pD4 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x518);
        String_Init(&s0, lbl_802704F8 + 0x521, &a0);
        pD0 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s0);
        String_Destroy(&s0, -1);
        String_Init(&s1, lbl_802704F8 + 0x52B, &a1);
        pCC = fn_800E7DF8(*(void **)((u8 *)self + 4), &s1);
        String_Destroy(&s1, -1);
        String_Init(&s2, lbl_802704F8 + 0x534, &a2);
        pC8 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s2);
        String_Destroy(&s2, -1);
        String_Init(&s3, lbl_802704F8 + 0x542, &a3);
        p14 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s3);
        String_Destroy(&s3, -1);
        String_Init(&s4, lbl_802704F8 + 0x54C, &a4);
        p31 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s4);
        String_Destroy(&s4, -1);
        String_Init(&s5, lbl_802704F8 + 0x555, &a5);
        p30 = fn_800E7DF8(*(void **)((u8 *)self + 4), &s5);
        String_Destroy(&s5, -1);
    } else {
        pE8 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x508);
        pE4 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x510);
        pE0 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x518);
        pDC = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4EF);
        pD8 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4F7);
        pD4 = (*(Host **)((u8 *)self + 4))->v2(lbl_802704F8 + 0x4E8, lbl_802704F8 + 0x4FF);
        String_Init(&t0, lbl_802704F8 + 0x542, &b0);
        pD0 = fn_800E7DF8(*(void **)((u8 *)self + 4), &t0);
        String_Destroy(&t0, -1);
        String_Init(&t1, lbl_802704F8 + 0x54C, &b1);
        pCC = fn_800E7DF8(*(void **)((u8 *)self + 4), &t1);
        String_Destroy(&t1, -1);
        String_Init(&t2, lbl_802704F8 + 0x555, &b2);
        pC8 = fn_800E7DF8(*(void **)((u8 *)self + 4), &t2);
        String_Destroy(&t2, -1);
        String_Init(&t3, lbl_802704F8 + 0x521, &b3);
        p14 = fn_800E7DF8(*(void **)((u8 *)self + 4), &t3);
        String_Destroy(&t3, -1);
        String_Init(&t4, lbl_802704F8 + 0x52B, &b4);
        p31 = fn_800E7DF8(*(void **)((u8 *)self + 4), &t4);
        String_Destroy(&t4, -1);
        String_Init(&t5, lbl_802704F8 + 0x534, &b5);
        p30 = fn_800E7DF8(*(void **)((u8 *)self + 4), &t5);
        String_Destroy(&t5, -1);
    }

    Ui_Meter_Init(*(void **)((u8 *)self + 0xA4), v28, v29);
    fn_80123300(pE8, v27);
    fn_80123300(pE4, v25 - v20);
    fn_80123300(pE0, v24);
    v20 = v17 << 2;
    v17 = (s32)lbl_8028DA94;
    fn_800E2218(pD0, *(void **)(v17 + v20));
    fn_800E2218(pCC, *(void **)((u8 *)lbl_8028DAA4 + v20));
    fn_800E2218(pC8, *(void **)(v17 + v20));
    Ui_Meter_Init(*(void **)((u8 *)self + 0xA8), v22, v23);
    fn_80123300(pDC, v21);
    fn_80123300(pD8, v19 - v26);
    fn_80123300(pD4, v18);
    v17 = v16 << 2;
    v16 = (s32)lbl_8028DA94;
    fn_800E2218(p14, *(void **)(v16 + v17));
    fn_800E2218(p31, *(void **)((u8 *)lbl_8028DAA4 + v17));
    fn_800E2218(p30, *(void **)(v16 + v17));
    *(s32 *)((u8 *)self + 0x230) = 0;
}
#pragma pop
struct ScenePosition { f32 x, y, z; };
struct ScenePositionObject {
    u8 pad[0x40];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual ScenePosition GetPosition();
};
struct DebugCameraMethods {
    u8 pad[0x40];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void SetPosition(f32, f32, f32);
    virtual void v8();
    virtual void SetLookAt(f32, f32, f32);
};
#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
extern "C" void fn_800CFDDC(void *arg0) {
    void *fn_8002595C(s32);
    void String_Init(void *, char *, void *);
    void String_Destroy(void *, s32);
    void fn_800E7C94(void *, void *, s32, f32);
    void fn_800D75C4(void *);
    void fn_800D758C(void *);
    void fn_800D74FC(void *);
    void fn_800E76D0(void *, u8);
    void String_AssignCStr(void *, char *, s32);
    void String_Assign(void *, void *, s32, s32);
    void fn_800E7B80(void *, void *);
    s32 String_Compare(void *, s32, s32, char *, s32);
    void *fn_800E7F60(void *, void *);
    u8 fn_800E8FB4(void *);
    void fn_800DBBC8(f32 *, void *);
    void Camera_GetEyePos(f32 *, void *);
    void fn_800DBB58(f32 *, void *);
    void Camera_GetLookAt(f32 *, void *);
    void PSMTXRotRad(void *, s32, f32);
    void fn_802029C4(void *, f32 *, f32 *);
    f32 Camera_GetFov(void *);
    void fn_800E8FE8(void *, f32);
    void fn_800E8FBC(void *, f32, f32, f32);
    void Prim2D_Begin(void);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_SetTex(s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetPos(f32, f32);
    void sprintf(void *, char *, ...);
    void Prim2D_SetText(void *);
    void Prim2D_SetTint(s32, s32, s32, s32);
    void Prim2D_EndPrim(void);
    void fn_801126A4(void *, s32, s32);
    void fn_801C9D94(void *, void *);
    extern char lbl_802704F8[];
    extern char *lbl_80366E48[2];
    extern void *gPadInput;
    extern s32 lbl_80367890;
    extern s8 lbl_80367894;
    extern u8 *gGame;
    extern u8 *gCameraWin;
    extern f32 lbl_80369DC8;
    extern f32 lbl_80369DCC;
    extern f32 lbl_80369DD4;
    extern f32 lbl_80369DD8;
    extern f32 lbl_80369DDC;
    extern const f32 lbl_80369DE0;
    extern f32 lbl_80369DE4;
    extern f32 lbl_80369DE8;
    extern f32 lbl_80369DEC;
    extern f32 lbl_80369DF0;
    extern f32 lbl_80369DF4;
    extern f32 lbl_80369DF8;

    u8 spD0[0x30];
    u8 sp90[0x40];
    u8 sp78[0x18];
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
    f32 f21, f20, f31, f30, f29, f28, f27, f26, f25, f24, f23, f22;
    s32 pressed, held;
    void *pad;
    void *obj;
    char *msg;
    void *vt;
    s32 textLength;
    u8 *self = (u8 *)arg0;

    if (lbl_80367894 == 0) {
        lbl_80367890 = 0;
        lbl_80367894 = 1;
    }
    f20 = lbl_80369DD4;
    held = *(s32 *)((u8 *)gPadInput + 4);
    pressed = held & (*(s32 *)((u8 *)gPadInput + 8) ^ held);
    pad = fn_8002595C(1);
    if ((*(s32 *)((u8 *)pad + 4) & (*(s32 *)((u8 *)pad + 8) ^ *(s32 *)((u8 *)pad + 4)) & 0x200) != 0) {
        if (self[0x1A4] == 0) {
            String_Init(sp78, lbl_802704F8 + 0x563, &scratch14);
            fn_800E7C94(*(void **)(self + 4), sp78, 1, *(f32 *)(gGame + 0x68));
            String_Destroy(sp78, -1);
            String_Init(sp6C, lbl_802704F8 + 0x56A, &scratch10);
            fn_800E7C94(*(void **)(self + 4), sp6C, 1, *(f32 *)(gGame + 0x68));
            String_Destroy(sp6C, -1);
            self[0x1A4] = 1;
        } else {
            String_Init(sp60, lbl_802704F8 + 0x563, &scratchC);
            fn_800E7C94(*(void **)(self + 4), sp60, 1, *(f32 *)(gGame + 0x6C));
            String_Destroy(sp60, -1);
            String_Init(sp54, lbl_802704F8 + 0x56A, &scratch8);
            fn_800E7C94(*(void **)(self + 4), sp54, 1, *(f32 *)(gGame + 0x6C));
            String_Destroy(sp54, -1);
            self[0x1A4] = 0;
        }
    }
    if (pressed & 0x10) {
        if (self[0x195] == 0) {
            self[0x195] = 1;
            self[0x194] = 1;
            fn_800D75C4(gCameraWin);
            self[0x196] = 0;
            fn_800E76D0(*(void **)(self + 4), self[0x196]);
        } else {
            self[0x195] = 0;
            self[0x194] = 0;
            fn_800D758C(gCameraWin);
            String_AssignCStr(self + 0xB8, lbl_802704F8 + 0x1B0, strlen(lbl_802704F8 + 0x1B0));
            self[0x196] = 1;
            fn_800E76D0(*(void **)(self + 4), self[0x196]);
        }
        self[0x194] = 1;
    }
    if (pressed & 0x200) {
        if (gCameraWin[0x420] == 0) {
            fn_800D75C4(gCameraWin);
        } else {
            fn_800D758C(gCameraWin);
        }
    }
    if (self[0x195] != 0) {
        fn_800D74FC(gCameraWin);
        fn_801C9D94(sp48, gCameraWin);
        String_Assign(self + 0xB8, sp48, 0, -1);
        String_Destroy(sp48, -1);
        fn_800E7B80(*(void **)(self + 4), self + 0xB8);
    }
    if (pressed & 0x400) {
        String_AssignCStr(self + 0xB8, lbl_802704F8 + 0x572, strlen(lbl_802704F8 + 0x572));
        fn_800E7B80(*(void **)(self + 4), self + 0xB8);
        self[0x196] = 0;
        fn_800E76D0(*(void **)(self + 4), self[0x196]);
        self[0x195] = 0;
        fn_800D758C(gCameraWin);
    }
    if (pressed & 0x800) {
        msg = lbl_80366E48[lbl_80367890++];
        String_AssignCStr(self + 0xB8, msg, strlen(msg));
        fn_800E7B80(*(void **)(self + 4), self + 0xB8);
        self[0x196] = 0;
        fn_800E76D0(*(void **)(self + 4), self[0x196]);
        if (lbl_80367890 >= 2) {
            lbl_80367890 = 0;
        }
    }
    textLength = strlen(lbl_802704F8 + 0x1B0);
    if (String_Compare(self + 0xB8, 0, *(s32 *)(self + 0xB8), lbl_802704F8 + 0x1B0, textLength) != 0) {
        obj = fn_800E7F60(*(void **)(self + 4), self + 0xB8);
        if (obj != NULL) {
            if (fn_800E8FB4(obj) != 0) {
                fn_800DBBC8(sp3C, obj);
                f29 = sp3C[0];
                f30 = sp3C[1];
                f31 = sp3C[2];
            } else {
                Camera_GetEyePos(sp30, obj);
                f29 = sp30[0];
                f30 = sp30[1];
                f31 = sp30[2];
            }
            fn_800DBB58(sp24, obj);
            f21 = sp24[0];
            f22 = sp24[2];
            Camera_GetLookAt(sp18, obj);
            *(f32 *)(sp78 + 0xC) = f21;
            f24 = sp18[0];
            *(f32 *)(sp78 + 0x14) = f22;
            f25 = sp18[1];
            f26 = sp18[2];
            PSMTXRotRad(spD0, 0x59, lbl_80369DD8);
            fn_802029C4(spD0, (f32 *)(sp78 + 0xC), (f32 *)(sp78 + 0xC));
            f27 = *(f32 *)(sp78 + 0xC);
            f28 = *(f32 *)(sp78 + 0x14);
            if (held & 0x200) {
                f20 = lbl_80369DDC;
            }
            if (fn_800E8FB4(obj) != 0) {
                u8 *stick = *(u8 **)gPadInput;
                s32 sy = (s8)stick[2];
                s32 sx = (s8)stick[3];
                f32 dx = f21 * (f32)sx;
                f29 += dx * lbl_80369DE0;
                f32 dz = f22 * (f32)sx;
                f31 += dz * lbl_80369DE0;
                f32 sideX = f27 * (f32)sy;
                f29 += sideX * lbl_80369DE0;
                f32 sideZ = f28 * (f32)sy;
                f31 += sideZ * lbl_80369DE0;
            } else {
                f23 = Camera_GetFov(obj);
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
                    u8 *stick = *(u8 **)gPadInput;
                    f32 scale = *(f32 *)(gGame + 0x158);
                    f29 += scale * (f32)((s8)stick[2] / 60);
                    f30 += scale * (f32)((s8)stick[3] / 60);
                }
            }
            {
                s8 t = (*(u8 **)gPadInput)[4];
                if (t < -0x20) {
                    f25 += *(f32 *)(gGame + 0x15C);
                } else if (t > 0x20) {
                    f25 -= *(f32 *)(gGame + 0x15C);
                }
            }
            if ((u32)held & 0x80000000) {
                f24 -= *(f32 *)(gGame + 0x15C);
                if (f24 < lbl_80369DE4) {
                    f24 = lbl_80369DE4;
                }
            } else if (held & 0x40000000) {
                f24 += *(f32 *)(gGame + 0x15C);
            }
            *(f32 *)(self + 0x190) = f24;
            if (fn_800E8FB4(obj) != 0) {
                ((DebugCameraMethods *)obj)->SetPosition(f29, f30, f31);
            } else {
                fn_800E8FBC(obj, f29, f30, f31);
            }
            ((DebugCameraMethods *)obj)->SetLookAt(f24, f25, f26);
            if (self[0x194] != 0) {
                Prim2D_Begin();
                Prim2D_SetTransform(lbl_80369DC8, lbl_80369DC8, lbl_80369DC8, lbl_80369DE8);
                Prim2D_SetTex(0, 0x23);
                Prim2D_PrepareTex();
                Prim2D_AddPrim(5);
                Prim2D_SetPos(lbl_80369DEC, lbl_80369DF0);
                sprintf(sp90, lbl_802704F8 + 0x577, f29, f30, f31);
                Prim2D_SetText(sp90);
                Prim2D_SetTint(0, 0x7F, 0xFF, 0xFF);
                Prim2D_EndPrim();
                Prim2D_AddPrim(5);
                Prim2D_SetPos(lbl_80369DEC, lbl_80369DF4);
                sprintf(sp90, lbl_802704F8 + 0x58F, f24, f25, f26);
                Prim2D_SetText(sp90);
                Prim2D_SetTint(0, 0x7F, 0xFF, 0xFF);
                Prim2D_EndPrim();
                Prim2D_AddPrim(5);
                Prim2D_SetPos(lbl_80369DEC, lbl_80369DF8);
                sprintf(sp90, lbl_802704F8 + 0x5A7, f23, *(f32 *)(self + 0x18C));
                Prim2D_SetText(sp90);
                Prim2D_SetTint(0, 0x7F, 0xFF, 0xFF);
                Prim2D_EndPrim();
                fn_801126A4(*(void **)(self + 0x90), 0, 0x8A);
                fn_801126A4(*(void **)(self + 0x94), 0x130, 0x8A);
            }
        }
    }
}
#pragma pop
#pragma cplusplus reset
#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma opt_strength_reduction off

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma opt_strength_reduction off
void fn_800D06BC(u8 *self) {
    void String_Init(void *, char *, void *);
    void String_Destroy(void *, s32);
    s32 fn_800E7F60(s32, void *);
    void fn_800DF494(void *, f32, f32, f32);
    void fn_800E9020(s32, f32 *, s32);
    void fn_800E7AD4(s32, void *, s32, u8, u8);
    u8 fn_800E8BC4(s32);
    f32 Camera_GetFov(s32);
    void fn_800E76D0(s32, u8);
    u8 fn_800DF6A8(void *);
    void fn_800DF44C(void *, s32, f32, f32, f32);
    void Vec3Interp_Update(void *);
    void fn_800DF430(void *, f32 *);
    void fn_800DF410(void *, f32 *);
    void fn_800E8FE8(s32, f32);
    f32 fn_80113658(s32, s32);
    typedef void (*GetPosFn)(f32 *, void *);
    extern char lbl_802704F8[];
    extern const f32 lbl_80369DCC;
    extern const f32 lbl_80369DC8;
    extern const f32 lbl_80369E08;
    extern u8 *gGame;

    f32 xf1[24];
    f32 xf2[24];
    f32 mid[3];
    char str0[12];
    f32 tmp[3];
    char str1[12];
    char str2[12];
    f32 pos[3];
    f32 pos2[3];
    f32 tmp2[3];
    f32 v2[3];
    f32 v1[3];
    f32 scaled;
    char scratch0[4];
    char scratch1[4];
    char scratch2[4];
    f32 yOff, z1, y1, x1;
    f32 x2, y2, z2;
    f32 half;
    f32 minFov, maxFov;
    u8 *game;
    s32 handle;
    s32 state;
    void *obj;
    GetPosFn getPos;
    u8 flag;
    u8 b;
    s32 i;

    obj = *(void **)(self + 0x90);
    yOff = *(f32 *)(self + 0x18C);
    ((GetPosFn)*(void **)(*(u8 **)((u8 *)obj + 0x40) + 0x3C))(v1, obj);
    x1 = v1[0];
    y1 = v1[1];
    z1 = v1[2];

    obj = *(void **)(self + 0x94);
    ((GetPosFn)*(void **)(*(u8 **)((u8 *)obj + 0x40) + 0x3C))(v2, obj);
    x2 = v2[0];
    y2 = v2[1];
    z2 = v2[2];

    half = lbl_80369DCC;
    mid[2] = half * (z1 + z2);
    mid[0] = half * (x1 + x2);
    mid[1] = half * (y1 + y2) + yOff;

    String_Init(str0, lbl_802704F8 + 0x5BE, scratch0);
    handle = fn_800E7F60(*(s32 *)(self + 4), str0);
    String_Destroy(str0, -1);

    state = *(s32 *)(self + 0x17C);
    switch (state) {
    case 0:
        *(s32 *)(self + 0x17C) = state + 1;
        break;
    case 1:
        fn_800DF494(xf1, mid[0], mid[1], mid[2]);
        ((f32 *)(self + 0x280))[0] = xf1[0];
        ((f32 *)(self + 0x280))[1] = xf1[1];
        ((f32 *)(self + 0x280))[2] = xf1[2];
        ((f32 *)(self + 0x280))[3] = xf1[3];
        ((f32 *)(self + 0x280))[4] = xf1[4];
        ((f32 *)(self + 0x280))[5] = xf1[5];
        ((f32 *)(self + 0x280))[6] = xf1[6];
        ((f32 *)(self + 0x280))[7] = xf1[7];
        ((f32 *)(self + 0x280))[8] = xf1[8];
        ((f32 *)(self + 0x280))[9] = xf1[9];
        ((f32 *)(self + 0x280))[10] = xf1[10];
        *(s32 *)(self + 0x2AC) = ((s32 *)xf1)[11];
        ((f32 *)(self + 0x2B0))[0] = xf1[12];
        ((f32 *)(self + 0x2B0))[1] = xf1[13];
        ((f32 *)(self + 0x2B0))[2] = xf1[14];
        ((f32 *)(self + 0x2B0))[3] = xf1[15];
        ((f32 *)(self + 0x2B0))[4] = xf1[16];
        ((f32 *)(self + 0x2B0))[5] = xf1[17];
        ((f32 *)(self + 0x2B0))[6] = xf1[18];
        ((f32 *)(self + 0x2B0))[7] = xf1[19];
        ((f32 *)(self + 0x2B0))[8] = xf1[20];
        ((f32 *)(self + 0x2B0))[9] = xf1[21];
        ((f32 *)(self + 0x2B0))[10] = xf1[22];
        ((f32 *)(self + 0x2B0))[11] = xf1[23];
        ((u32 *)tmp)[0] = ((u32 *)mid)[0];
        ((u32 *)tmp)[1] = ((u32 *)mid)[1];
        ((u32 *)tmp)[2] = ((u32 *)mid)[2];
        fn_800E9020(handle, tmp, 0);
        flag = self[0x278];
        if (flag == 0) {
            if (*(s32 *)(self + 0x228) == 1 || flag != 0) {
                String_Init(str1, lbl_802704F8 + 0x5C3, scratch1);
                fn_800E7AD4(*(s32 *)(self + 4), str1, 0, 0, 0);
                String_Destroy(str1, -1);
            } else {
                self[0x178] = (*(u8 **)(self + 0x208))[0x6C];
                String_Init(str2, lbl_802704F8 + 0x5CB, scratch2);
                b = self[0x178];
                fn_800E7AD4(*(s32 *)(self + 4), str2, 0, b, b);
                String_Destroy(str2, -1);
            }
        }
        *(s32 *)(self + 0x17C) = *(s32 *)(self + 0x17C) + 1;
        break;
    case 2:
        if (fn_800E8BC4(handle) == 0) {
            f32 fov = Camera_GetFov(handle);
            {
                f32 z = lbl_80369DC8;
                fn_800DF494(xf2, fov, z, z);
            }
            ((f32 *)(self + 0x2E0))[0] = xf2[0];
            ((f32 *)(self + 0x2E0))[1] = xf2[1];
            ((f32 *)(self + 0x2E0))[2] = xf2[2];
            ((f32 *)(self + 0x2E0))[3] = xf2[3];
            ((f32 *)(self + 0x2E0))[4] = xf2[4];
            ((f32 *)(self + 0x2E0))[5] = xf2[5];
            ((f32 *)(self + 0x2E0))[6] = xf2[6];
            ((f32 *)(self + 0x2E0))[7] = xf2[7];
            ((f32 *)(self + 0x2E0))[8] = xf2[8];
            ((f32 *)(self + 0x2E0))[9] = xf2[9];
            ((f32 *)(self + 0x2E0))[10] = xf2[10];
            *(s32 *)(self + 0x30C) = ((s32 *)xf2)[11];
            ((f32 *)(self + 0x310))[0] = xf2[12];
            ((f32 *)(self + 0x310))[1] = xf2[13];
            ((f32 *)(self + 0x310))[2] = xf2[14];
            ((f32 *)(self + 0x310))[3] = xf2[15];
            ((f32 *)(self + 0x310))[4] = xf2[16];
            ((f32 *)(self + 0x310))[5] = xf2[17];
            ((f32 *)(self + 0x310))[6] = xf2[18];
            ((f32 *)(self + 0x310))[7] = xf2[19];
            ((f32 *)(self + 0x310))[8] = xf2[20];
            ((f32 *)(self + 0x310))[9] = xf2[21];
            ((f32 *)(self + 0x310))[10] = xf2[22];
            ((f32 *)(self + 0x310))[11] = xf2[23];
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
            ((GetPosFn)*(void **)(*(u8 **)((u8 *)obj + 0x40) + 0x3C))(pos, obj);
            mid[0] = pos[0];
            mid[1] = pos[1];
            mid[2] = pos[2];
            mid[1] += *(f32 *)(self + 0x18C);
        } else if (fn_800DF6A8(*(void **)(self + 0x94)) == 0) {
            obj = *(void **)(self + 0x90);
            ((GetPosFn)*(void **)(*(u8 **)((u8 *)obj + 0x40) + 0x3C))(pos2, obj);
            mid[0] = pos2[0];
            mid[1] = pos2[1];
            mid[2] = pos2[2];
            mid[1] += *(f32 *)(self + 0x18C);
        }
        fn_800DF44C(self + 0x280, 8, mid[0], mid[1], mid[2]);
        Vec3Interp_Update(self + 0x280);
        fn_800DF430(self + 0x280, mid);
        ((u32 *)tmp2)[0] = ((u32 *)mid)[0];
        ((u32 *)tmp2)[1] = ((u32 *)mid)[1];
        ((u32 *)tmp2)[2] = ((u32 *)mid)[2];
        fn_800E9020(handle, tmp2, 0);
        if (self[0x278] != 0) {
            scaled = fn_80113658(*(s32 *)(self + 0x84), *(s32 *)(self + 0x88));
            game = gGame;
            scaled = lbl_80369E08 * scaled + *(f32 *)(game + 0x1BC);
            minFov = *(f32 *)(game + 0x1C0);
            if (scaled < minFov) {
                scaled = minFov;
            }
            maxFov = *(f32 *)(game + 0x1C4);
            if (scaled > maxFov) {
                scaled = maxFov;
            }
            {
                f32 z = lbl_80369DC8;
                fn_800DF44C(self + 0x2E0, 8, scaled, z, z);
            }
            Vec3Interp_Update(self + 0x2E0);
            fn_800DF410(self + 0x2E0, &scaled);
            fn_800E8FE8(handle, scaled);
        }
        break;
    }
}
#pragma pop
#pragma cplusplus on
#pragma inline_depth(0)
extern "C" s32 fn_800D0C5C(void *arg0) {
#include "fn_800D0C5C_body.inc"
    return 0;
}
#pragma cplusplus reset
s32 fn_800D3534(s32 *arg0, s32 arg1) {
    s32 String_Compare(s32 *, M2C_UNK, s32, s32, s32);
    s32 strlen(s32);
    return String_Compare(arg0, 0, *arg0, arg1, strlen(arg1)) == 0;
}

s32 fn_800D3590(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    return temp_r4 & (M2C_FIELD(arg0, s32 *, 8) ^ temp_r4);
}

#pragma cplusplus on
#pragma inline_depth(0)
/* Destroy a GameScene: release child objects, strings, and optionally free the scene itself. */
extern "C" void *GameScene_Destroy(u8 *self, s16 doFree) {
extern u8 gBattleReplayActive; extern u8 *gGame;
void *fn_800D6314(void *,s16); void fn_801C777C(); void fn_8005C7E8(void *); void fn_80040854(int); void fn_8004084C(void *); void BinTree_Destroy(void *,void *); void Heap_Free(void *);
struct Obj { u8 pad[16]; virtual void v0(); virtual void v1(int); };
 void *game; Obj *child;
if(self) {
fn_801C777C();
child=*(Obj **)(self+4); if(child)child->v1(1); *(void **)(self+4)=0;
if(!gBattleReplayActive) { game=gGame; if(game){String_Destroy((u8 *)game+0x1A8,-1);String_Destroy((u8 *)game+0x19C,-1);String_Destroy(game,-1);Heap_Free(game);}}
if(*(void **)(self+116))fn_8005C7E8(*(void **)(self+116));
if(*(void **)(self+120))fn_8005C7E8(*(void **)(self+120));
if(*(void **)(self+124))fn_8005C7E8(*(void **)(self+124));
if(*(void **)(self+832))fn_8005C7E8(*(void **)(self+832));
if(*(void **)(self+836))fn_8005C7E8(*(void **)(self+836));
if(*(void **)(self+840))fn_8005C7E8(*(void **)(self+840));
if(*(void **)(self+844))fn_8005C7E8(*(void **)(self+844));
if(*(void **)(self+0))fn_8005C7E8(*(void **)(self+0));
if(!gBattleReplayActive){fn_80040854(0);fn_8004084C(*(void **)(self+0x27C));}
if(self+512)if(self+512)fn_800D6314(self+512,0);
if(self+496)if(self+496)fn_800CA6C8(self+496,0);
if(self+480)if(self+480)if(*(void **)(self+484))BinTree_Destroy(self+480,*(void **)(self+484));
if(self+468)if(self+468)fn_800CA6C8(self+468,0);
if(self+456)if(self+456)fn_800CA6C8(self+456,0);
if(self+444)if(self+444)fn_800CA6C8(self+444,0);
String_Destroy(self+408,-1);
String_Destroy(self+352,-1);
String_Destroy(self+340,-1);
String_Destroy(self+328,-1);
String_Destroy(self+316,-1);
String_Destroy(self+304,-1);
String_Destroy(self+292,-1);
String_Destroy(self+280,-1);
String_Destroy(self+268,-1);
String_Destroy(self+256,-1);
String_Destroy(self+244,-1);
String_Destroy(self+232,-1);
String_Destroy(self+220,-1);
String_Destroy(self+208,-1);
String_Destroy(self+196,-1);
String_Destroy(self+184,-1);
String_Destroy(self+92,-1);
String_Destroy(self+80,-1);
String_Destroy(self+68,-1);
String_Destroy(self+56,-1);
String_Destroy(self+44,-1);
String_Destroy(self+32,-1);
if(doFree>0)Heap_Free(self);
}return self;
}

void *GameScene_Create(void *arg0) {
    return arg0;
}

#pragma inline_depth(8)
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void GameScene_StopWorlds(void) {
    /* Stop the game scene's primary and secondary world roots, and start a light fade on the primary. */
    void LightFade_Start(void);
    extern void *gGameScene;
    struct WorldRoot {
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
    u8 *scene;
    WorldRoot *world;

    scene = (u8 *)gGameScene;
    if (scene == NULL) {
        return;
    }
    if (scene[0x187] == 0) {
        world = *(WorldRoot **)(scene + 4);
        if (world != NULL) {
            if (scene[0x1a5] == 0) {
                world->v13(1);
            }
            world = *(WorldRoot **)(scene + 4);
            world->v14();
            world = *(WorldRoot **)(scene + 4);
            world->v16(0, 0);
            world = *(WorldRoot **)(scene + 4);
            world->v15();
            LightFade_Start();
        }
    }
    world = *(WorldRoot **)(scene + 8);
    if (world != NULL) {
        world->v13(1);
        world = *(WorldRoot **)(scene + 8);
        world->v14();
        world = *(WorldRoot **)(scene + 8);
        world->v16(0, 0);
        world = *(WorldRoot **)(scene + 8);
        world->v15();
    }
}
#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
extern "C" void fn_800D540C(void *arg0) {
s64 OSGetTime(void);
s64 __div2i(s64, s64);
void DebugPrint(const char *, ...);
void *Heap_Alloc(u32);
void *GameScene_Create(void *);
u8 fn_800D0C5C(void *);
void String_Init(void *, char *, void *);
void *fn_800E7E4C(void *, void *);
void fn_800E7C94(void *, void *, s32, f32);
void fn_800D06BC(void *);
void fn_800CFDDC(void *);
void *UiObj_FindEnabledCamera(void *);
void *fn_800E7DA4(void *, void *);
void fn_800DBBC8(f32 *, f32 *);
void Heap_Free(void *);
void *GameScene_Destroy(void *, s16);
void Process_ClearFunc(void *);
extern char lbl_802704F8[];
extern void *gGameScene;
extern f32 lbl_80369DC8;
extern f32 lbl_80369DD0;
extern void *gGame;
extern u8 gBattleReplayActive;
extern void *gBattleReplayScene;
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
struct References { VObj *found; f32 *cam; } refs;
f32 z;
f32 f1;
f32 f3;
u32 tickRate;
u32 conv;

self = arg0;
if (gGameScene == NULL) {
t0 = OSGetTime();
p = Heap_Alloc(0x350);
if (p != NULL) {
p = GameScene_Create(p);
}
gGameScene = p;
t1 = OSGetTime();
tickRate = *(volatile u32 *)0x800000F8;
conv = (tickRate >> 2) / 1000;
DebugPrint(lbl_802704F8 + 0x891, __div2i(t1 - t0, (s64)conv));
}
obj = gGameScene;
if (obj != NULL) {
while (fn_800D0C5C(obj) != 0) {
}
if (*(f32 *)((u8 *)obj + 0x1B4) > lbl_80369DC8) {
*(f32 *)((u8 *)obj + 0x1B4) = *(f32 *)((u8 *)obj + 0x1B4) + *(f32 *)((u8 *)obj + 0x1B8);
*(f32 *)((u8 *)obj + 0x1B0) = *(f32 *)((u8 *)obj + 0x1B0) + *(f32 *)((u8 *)obj + 0x1B4);
String_Init(&sp1C, lbl_802704F8 + 0x4D2, &sp8);
z = *(f32 *)((u8 *)obj + 0x1B0);
*(s32 *)((u8 *)fn_800E7E4C(*(void **)((u8 *)obj + 4), &sp1C) + 0x60) = (s32)(-z);
String_Destroy(&sp1C, -1);
String_Init(&sp28, lbl_802704F8 + 0x4DD, &spC);
z = *(f32 *)((u8 *)obj + 0x1B0);
*(s32 *)((u8 *)fn_800E7E4C(*(void **)((u8 *)obj + 4), &sp28) + 0x60) = (s32)z;
String_Destroy(&sp28, -1);
if (*(f32 *)((u8 *)obj + 0x1B0) > lbl_80369DD0 || *(f32 *)((u8 *)obj + 0x1B4) < lbl_80369DC8) {
z = lbl_80369DC8;
*(f32 *)((u8 *)obj + 0x1B8) = z;
*(f32 *)((u8 *)obj + 0x1B4) = z;
}
}
if (*(s32 *)((u8 *)obj + 0x1AC) > 0) {
if (--*(s32 *)((u8 *)obj + 0x1AC) == 0) {
*(f32 *)((u8 *)obj + 0x1B4) = *(f32 *)((u8 *)gGame + 0x14C);
*(f32 *)((u8 *)obj + 0x1B8) = *(f32 *)((u8 *)gGame + 0x150);
String_Init(&sp34, lbl_802704F8 + 0x4D2, &sp10);
fn_800E7C94(*(void **)((u8 *)obj + 4), &sp34, 1, *(f32 *)((u8 *)gGame + 0x154));
String_Destroy(&sp34, -1);
String_Init(&sp40, lbl_802704F8 + 0x4DD, &sp14);
fn_800E7C94(*(void **)((u8 *)obj + 4), &sp40, 1, *(f32 *)((u8 *)gGame + 0x154));
String_Destroy(&sp40, -1);
}
}
fn_800D06BC(obj);
if (gBattleReplayActive != 0) {
fn_800CFDDC(obj);
}
refs.cam = (f32 *)UiObj_FindEnabledCamera(*(void **)((u8 *)obj + 4));
String_Init(&sp4C, lbl_802704F8 + 0x315, &sp18);
refs.found = (VObj *)fn_800E7DA4(*(void **)((u8 *)obj + 4), &sp4C);
String_Destroy(&sp4C, -1);
fn_800DBBC8(sp58, refs.cam);
f1 = sp58[0];
f3 = sp58[2];
if (refs.found != NULL) {
refs.found->v7(f1, lbl_80369DC8, f3);
refs.found->v11(*(f32 *)((u8 *)gGame + 0x24), *(f32 *)((u8 *)gGame + 0x28), *(f32 *)((u8 *)gGame + 0x2C));
}
if (*(u8 *)((u8 *)obj + 0x187) != 0) {
if (gBattleReplayScene != NULL && *(s32 *)((u8 *)gBattleReplayScene + 0x444) != 2) {
Heap_Free(gBattleReplayScene);
gBattleReplayScene = NULL;
}
if (gGameScene != NULL) {
GameScene_Destroy(gGameScene, 1);
gGameScene = NULL;
}
Process_ClearFunc(self);
Process_ClearFunc(lbl_80367888);
}
}
}
#pragma pop
extern "C" void fn_800D5784(s32 arg0) {
    void DebugPrint(char *, ...);
    s32 Process_CreateChild(void *, s32);
    s32 Process_Create(void *, s32);
    extern char lbl_802704F8[];
    extern u8 lbl_80284668[];
    extern u8 lbl_8028DA48[];
    extern u8 lbl_8028DA70[];
    extern s32 gGameScene;
    extern s32 lbl_80367884;
    extern s32 lbl_80367888;
    extern u8 lbl_8036788C;
    extern u8 gBattleReplayActive;
    s32 temp;

    DebugPrint(lbl_802704F8 + 0x8B2);
    gGameScene = 0;
    lbl_8036788C = 1;
    if (gBattleReplayActive != 0) {
        temp = Process_CreateChild(lbl_8028DA48, arg0);
    } else {
        temp = Process_CreateChild(lbl_80284668, arg0);
    }
    lbl_80367884 = temp;
    lbl_80367888 = Process_Create(lbl_8028DA70, arg0);
}

extern "C" void fn_800D5818(s32 arg0) {
    void DebugPrint(char *, ...);
    s32 Process_CreateChild(void *, s32);
    s32 Process_Create(void *, s32);
    extern char lbl_802704F8[];
    extern u8 lbl_80284668[];
    extern u8 lbl_8028DA70[];
    extern s32 gGameScene;
    extern s32 lbl_80367884;
    extern s32 lbl_80367888;
    extern u8 lbl_8036788C;
    extern u8 gBattleReplayActive;

    DebugPrint(lbl_802704F8 + 0x8BF);
    gGameScene = 0;
    lbl_8036788C = 0;
    gBattleReplayActive = 0;
    lbl_80367884 = Process_CreateChild(lbl_80284668, arg0);
    lbl_80367888 = Process_Create(lbl_8028DA70, lbl_80367884);
}

#pragma cplusplus reset

#pragma cplusplus reset

void fn_800D588C(s32 arg0) {
    extern s32 gBattleReplayScene;
    gBattleReplayScene = arg0;
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
    void *String_CStr(void *);
    void *fn_8005C82C(void *, s32);
    void *out;
    u32 str[3];
    u32 scratch;

    out = arg0;
    String_Init(str, lbl_802704F8 + 0x1B0, &scratch);
    fn_800C992C(str, lbl_802704F8 + 0x66B, strlen(lbl_802704F8 + 0x66B));
    *(void **)out = fn_8005C82C(String_CStr(str), 8);
    String_Destroy(str, -1);
}
#pragma global_optimizer reset
#pragma dont_inline reset
s32 String_Find(u32 *arg0, char *arg1, u32 arg2, u32 arg3) {
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

#pragma global_optimizer off
void *StringMap_FindOrInsert(void *arg0, String *arg1) {
    void Heap_Free(void *);
    void abort(void);
    s32 fprintf(void *, const char *, ...);
    s32 fn_80231944(char *, char *, u32);
    void String_InitFromRange(void *, char *, char *, void *, void *);
    void *fn_800D697C(void *, void *, s32, s32, void *);
    extern char __files[];
    extern char lbl_802704F8[];
    struct Scratch {
        u8 pads[0x44];
        String pair[2];
    } st;
    u8 *parent;
    s32 setFirst;
    String *key;
    void *tree;
    u32 keySize;
    s32 asLeft;
    char *errFile;
    u8 *best;
    u8 *cur;
    const u32 *minPtr;
    s32 cmp;
    void *node;
    u8 *result;
    String *pairPtr;

    tree = arg0;
    keySize = arg1->size;
    key = arg1;
    parent = (u8 *)tree + 4;
    best = NULL;
    asLeft = 1;
    setFirst = 1;
    cur = *(u8 **)((u8 *)tree + 4);
    errFile = __files + 0xA0;

    while (cur) {
        char *nodeData;
        nodeData = *(char **)(cur + 0x14);
        parent = cur;
        *(u32 *)&st.pads[0x28] = *(u32 *)(cur + 0xC);
        *(u32 *)&st.pads[0x2C] = keySize;
        if ((s32)keySize < 0) {
            fprintf(errFile, lbl_802704F8 + 0x8cc);
            abort();
        }
        *(u32 *)&st.pads[0x34] = keySize;
        minPtr = StrMin((u32 *)&st.pads[0x34], (u32 *)&st.pads[0x2C]);
        *(u32 *)&st.pads[0x30] = *minPtr;
        minPtr = StrMin((u32 *)&st.pads[0x30], (u32 *)&st.pads[0x28]);
        cmp = fn_80231944(key->data, nodeData, *minPtr);
        if (cmp == 0) {
            if (*(u32 *)&st.pads[0x30] < *(u32 *)&st.pads[0x28]) {
                cmp = -1;
            } else if (*(u32 *)&st.pads[0x30] == *(u32 *)&st.pads[0x28]) {
                cmp = 0;
            } else {
                cmp = 1;
            }
        }
        if (cmp < 0) {
            cur = *(u8 **)cur;
            asLeft = 1;
        } else {
            best = cur;
            cur = *(u8 **)(cur + 4);
            asLeft = 0;
            setFirst = 0;
        }
    }

    if (best) {
        char *keyData;
        *(u32 *)&st.pads[0x1C] = *(u32 *)(best + 0xC);
        keyData = key->data;
        *(u32 *)&st.pads[0x18] = key->size;
        if ((s32)*(u32 *)(best + 0xC) < 0) {
            fprintf(errFile, lbl_802704F8 + 0x8cc);
            abort();
        }
        *(u32 *)&st.pads[0x24] = *(u32 *)(best + 0xC);
        minPtr = StrMin((u32 *)&st.pads[0x24], (u32 *)&st.pads[0x1C]);
        *(u32 *)&st.pads[0x20] = *minPtr;
        minPtr = StrMin((u32 *)&st.pads[0x20], (u32 *)&st.pads[0x18]);
        cmp = fn_80231944(*(char **)(best + 0x14), keyData, *minPtr);
        if (cmp == 0) {
            if (*(u32 *)&st.pads[0x20] < *(u32 *)&st.pads[0x18]) {
                cmp = -1;
            } else if (*(u32 *)&st.pads[0x20] == *(u32 *)&st.pads[0x18]) {
                cmp = 0;
            } else {
                cmp = 1;
            }
        }
        if (cmp >= 0) {
            goto found;
        }
    }

    pairPtr = st.pair;
    st.pads[8] = st.pads[0xC];
    *(u32 *)&st.pads[0x38] = 0;
    *(u32 *)&st.pads[0x40] = 0;
    *(u32 *)&st.pads[0x3C] = 0;
    pairPtr[0].cap = key->cap;
    String_InitFromRange(pairPtr, key->data, key->data + key->size, (void *)&st.pads[0x14], &st.pads[8]);
    pairPtr[1].cap = *(u32 *)&st.pads[0x3C];
    st.pads[0] = st.pads[4];
    String_InitFromRange(pairPtr + 1, (char *)*(u32 *)&st.pads[0x40], (char *)*(u32 *)&st.pads[0x40] + *(u32 *)&st.pads[0x38], &st.pads[0x10], &st.pads[0]);
    node = fn_800D697C(tree, parent, asLeft, setFirst, pairPtr);
    result = (u8 *)node + 0xC;
    if (st.pair[1].data) Heap_Free(st.pair[1].data);
    if (st.pair[0].data) Heap_Free(st.pair[0].data);
    if (*(u32 *)&st.pads[0x40]) Heap_Free((void *)*(u32 *)&st.pads[0x40]);
    return result;

found:
    return best + 0xC;
}
#pragma global_optimizer on
void *fn_800D5C88(void *arg0, s16 arg1) {
    void Heap_Free(void *);
    void *self;
    s16 flag;

    self = arg0;
    flag = arg1;
    if (self != NULL) {
        if ((u8 *)self + 0xC != NULL) {
            if (*(void **)((u8 *)self + 0x14) != NULL) {
                Heap_Free(*(void **)((u8 *)self + 0x14));
            }
        }
        if (self != NULL) {
            if (*(void **)((u8 *)self + 8) != NULL) {
                Heap_Free(*(void **)((u8 *)self + 8));
            }
        }
        if (flag > 0) {
            Heap_Free(self);
        }
    }
    return self;
}

u32 *fn_800D6898(u32 *, u32 *, u32, u32, void *);
M2C_UNK abort(void);
M2C_UNK fprintf(void *, const char *, ...);
extern char __files[];

void String_Substr(u32 *arg0, u32 *arg1, u32 arg2, u32 arg3) {
    M2C_UNK fn_800D6898(u32 *, u32 *, u32, u32, void *);
    M2C_UNK abort(void);
    M2C_UNK fprintf(void *, const char *, ...);
    extern char __files[];
    extern char lbl_802704F8[];
    u32 lim = arg1[0];
    u32 rem;
    u32 alloc;
    const u32 *n;

    if (arg2 > lim) {
        fprintf(__files + 0xA0, lbl_802704F8 + 0x8E7);
        abort();
    }
    rem = arg1[0] - arg2;
    n = MinU32(&arg3, &rem);
    fn_800D6898(arg0, arg1, arg2, *n, &alloc);
}

#pragma push
#pragma cplusplus on
#pragma optimization_level 3
#pragma opt_propagation off
extern "C" void fn_800D5DB0(void *arg0, void *arg1, u32 arg2, void *arg3) {
    void *Heap_Alloc(u32);
    void Heap_Free(void *);
    void fn_800D6940(void *);
    void abort(void);
    s32 fprintf(void *, const char *, ...);
    extern char __files[];
    extern char lbl_802704F8[];

    typedef struct { char b[0x58]; } Elem;
    typedef struct { char b[8]; } Pair;
    typedef struct {
        u32 words[5];
        u8 flag;
        u32 mid[6];
        Pair pairs[4];
        u32 endWords[2];
    } Rec;
    typedef struct { u32 cap; u32 size; Elem *data; } Vec;

    Vec tmp;
    Elem *allocp;
    u32 newCap;
    Vec *v;
    Elem *end;
    Elem *dst;
    Elem *val;
    Elem *p;
    Elem *q;
    u32 room;
    u32 newSize;
    u32 n;

    v = (Vec *)arg0;
    val = (Elem *)arg3;
    n = arg2;
    if (n != 0) {
        if (n > 0x02E8BA2Eu || v->size > 0x02E8BA2Eu - n) {
            fprintf(__files + 0xA0, lbl_802704F8 + 0x97C);
            abort();
        }
        newSize = v->size + n;
        if (newSize <= v->cap) {
            Elem *srcp = val;
            end = v->data + v->size;
            room = (u32)(end - (Elem *)arg1);
            if (n > room) {
                dst = end;
                while (n > room) {
                    if (dst != 0) {
                        *dst = *val;
                    }
                    dst += 1;
                    n -= 1;
                    v->size += 1;
                }
                p = (Elem *)arg1;
                while (p < end) {
                    if (dst != 0) {
                        *dst = *p;
                    }
                    p += 1;
                    dst += 1;
                    v->size += 1;
                }
            } else {
                u32 nBytes = n * 0x58;
                q = end;
                p = (Elem *)((u8 *)end - nBytes);
                while (p < end) {
                    if (q != 0) {
                        *q = *p;
                    }
                    p += 1;
                    q += 1;
                    v->size += 1;
                }
                {
                    u32 shiftBytes = (room - n) * 0x58;
                    Rec *a;
                    Rec *b;
                    if ((u8 *)end - shiftBytes <= (u8 *)val && (u8 *)val < (u8 *)end) {
                        srcp = (Elem *)((u8 *)srcp + nBytes);
                    }
                    a = (Rec *)((u8 *)arg1 + shiftBytes);
                    b = (Rec *)end;
                    while (a > (Rec *)arg1) {
                        a -= 1;
                        b -= 1;
                        b->words[0] = a->words[0];
                        b->words[1] = a->words[1];
                        b->words[2] = a->words[2];
                        b->words[3] = a->words[3];
                        b->words[4] = a->words[4];
                        b->flag = a->flag;
                        b->mid[0] = a->mid[0];
                        b->mid[1] = a->mid[1];
                        b->mid[2] = a->mid[2];
                        b->mid[3] = a->mid[3];
                        b->mid[4] = a->mid[4];
                        b->mid[5] = a->mid[5];
                        b->pairs[0] = a->pairs[0];
                        b->pairs[1] = a->pairs[1];
                        b->pairs[2] = a->pairs[2];
                        b->pairs[3] = a->pairs[3];
                        b->endWords[0] = a->endWords[0];
                        b->endWords[1] = a->endWords[1];
                    }
                }
            }
            {
                Rec *out = (Rec *)arg1;
                Rec *in = (Rec *)srcp;
                u32 left = n;
                while (left != 0) {
                    out->words[0] = in->words[0];
                    out->words[1] = in->words[1];
                    out->words[2] = in->words[2];
                    out->words[3] = in->words[3];
                    out->words[4] = in->words[4];
                    out->flag = in->flag;
                    out->mid[0] = in->mid[0];
                    out->mid[1] = in->mid[1];
                    out->mid[2] = in->mid[2];
                    out->mid[3] = in->mid[3];
                    out->mid[4] = in->mid[4];
                    out->mid[5] = in->mid[5];
                    out->pairs[0] = in->pairs[0];
                    out->pairs[1] = in->pairs[1];
                    out->pairs[2] = in->pairs[2];
                    out->pairs[3] = in->pairs[3];
                    out->endWords[0] = in->endWords[0];
                    out->endWords[1] = in->endWords[1];
                    out += 1;
                    left -= 1;
                }
            }
        } else {
            u32 cap;
            tmp.cap = 0;
            tmp.size = 0;
            tmp.data = 0;
            cap = v->cap;
            newCap = cap != 0 ? cap : 1;
            while (newSize > newCap) {
                if (newCap < 0x01745D17u) {
                    newCap *= 2;
                } else {
                    newCap = 0x02E8BA2Eu;
                }
            }
            allocp = (Elem *)Heap_Alloc(newCap * 0x58);
            if (allocp == 0) {
                fprintf(__files + 0xA0, lbl_802704F8 + 0x999);
                abort();
            }
            tmp.data = allocp;
            tmp.cap = newCap;
            {
                Elem *w = allocp;
                Elem *r = v->data;
                end = v->data + v->size;
                while (r < (Elem *)arg1) {
                    if (w != 0) {
                        *w = *r;
                    }
                    r += 1;
                    w += 1;
                    tmp.size += 1;
                }
                while (n != 0) {
                    if (w != 0) {
                        *w = *val;
                    }
                    w += 1;
                    n -= 1;
                    tmp.size += 1;
                }
                while (r < end) {
                    if (w != 0) {
                        *w = *r;
                    }
                    r += 1;
                    w += 1;
                    tmp.size += 1;
                }
            }
            if (&tmp != v) {
                u32 t0 = tmp.cap;
                u32 ts;
                Elem *td;
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
                Heap_Free(tmp.data);
            }
        }
    }
}
#pragma pop
void *fn_800D6314(void *arg0, s16 arg1) {
    void Heap_Free(void *);
    void fn_800D6940(void *);

    if (arg0 != NULL) {
        fn_800D6940(arg0);
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            Heap_Free(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma optimization_level 4
#pragma use_lmw_stmw on
void BinTree_Destroy(s32 arg0, void *arg1) {
void Heap_Free(void *);
void String_Destroy(void *, s32);
void *fn_800D5C88(void *, s32);
void fn_800D67E4(s32);
void fn_800D67E8(s32);
void fn_800D67EC(void *, void *, s16);
void *fn_800D6810(s32);
void fn_800D6818(void *, void *);
void *fn_800D6874(s32);
s32 self = arg0;
void *v27;
void *v28;
void *v29;

v29=*(void**)arg1;
if(v29!=NULL){
v28=*(void**)v29;
if(v28!=NULL){
v27=*(void**)v28;
if(v27!=NULL){
if(*(void**)v27!=NULL){BinTree_Destroy(self,*(void**)v27);}
if(*(void**)((u8*)v27+4)!=NULL){BinTree_Destroy(self,*(void**)((u8*)v27+4));}
fn_800D6818(fn_800D6874(self),(u8*)v27+0xC);
fn_800D67EC(fn_800D6810(self),v27,1);
}
v27=*(void**)((u8*)v28+4);
if(v27!=NULL){
if(*(void**)v27!=NULL){BinTree_Destroy(self,*(void**)v27);}
if(*(void**)((u8*)v27+4)!=NULL){BinTree_Destroy(self,*(void**)((u8*)v27+4));}
fn_800D6818(fn_800D6874(self),(u8*)v27+0xC);
fn_800D67EC(fn_800D6810(self),v27,1);
}
fn_800D6874(self);
fn_800D5C88((u8*)v28+0xC,-1);
fn_800D6810(self);
Heap_Free(v28);
}
v27=*(void**)((u8*)v29+4);
if(v27!=NULL){
v28=*(void**)v27;
if(v28!=NULL){
if(*(void**)v28!=NULL){BinTree_Destroy(self,*(void**)v28);}
if(*(void**)((u8*)v28+4)!=NULL){BinTree_Destroy(self,*(void**)((u8*)v28+4));}
fn_800D6818(fn_800D6874(self),(u8*)v28+0xC);
fn_800D67EC(fn_800D6810(self),v28,1);
}
v28=*(void**)((u8*)v27+4);
if(v28!=NULL){
if(*(void**)v28!=NULL){BinTree_Destroy(self,*(void**)v28);}
if(*(void**)((u8*)v28+4)!=NULL){BinTree_Destroy(self,*(void**)((u8*)v28+4));}
fn_800D6818(fn_800D6874(self),(u8*)v28+0xC);
fn_800D67EC(fn_800D6810(self),v28,1);
}
fn_800D6874(self);
fn_800D5C88((u8*)v27+0xC,-1);
fn_800D6810(self);
Heap_Free(v27);
}
fn_800D67E8(self);
if(((s32)v29+0xC)!=0){
String_Destroy((u8*)v29+0x18,-1);
String_Destroy((u8*)v29+0xC,-1);
}
fn_800D67E4(self+4);
Heap_Free(v29);
}
v27=*(void**)((u8*)arg1+4);
if(v27!=NULL){
v28=*(void**)v27;
if(v28!=NULL){
v29=*(void**)v28;
if(v29!=NULL){
if(*(void**)v29!=NULL){BinTree_Destroy(self,*(void**)v29);}
if(*(void**)((u8*)v29+4)!=NULL){BinTree_Destroy(self,*(void**)((u8*)v29+4));}
fn_800D6818(fn_800D6874(self),(u8*)v29+0xC);
fn_800D67EC(fn_800D6810(self),v29,1);
}
v29=*(void**)((u8*)v28+4);
if(v29!=NULL){
if(*(void**)v29!=NULL){BinTree_Destroy(self,*(void**)v29);}
if(*(void**)((u8*)v29+4)!=NULL){BinTree_Destroy(self,*(void**)((u8*)v29+4));}
fn_800D6818(fn_800D6874(self),(u8*)v29+0xC);
fn_800D67EC(fn_800D6810(self),v29,1);
}
fn_800D6874(self);
fn_800D5C88((u8*)v28+0xC,-1);
fn_800D6810(self);
Heap_Free(v28);
}
v28=*(void**)((u8*)v27+4);
if(v28!=NULL){
v29=*(void**)v28;
if(v29!=NULL){
if(*(void**)v29!=NULL){BinTree_Destroy(self,*(void**)v29);}
if(*(void**)((u8*)v29+4)!=NULL){BinTree_Destroy(self,*(void**)((u8*)v29+4));}
fn_800D6818(fn_800D6874(self),(u8*)v29+0xC);
fn_800D67EC(fn_800D6810(self),v29,1);
}
v29=*(void**)((u8*)v28+4);
if(v29!=NULL){
if(*(void**)v29!=NULL){BinTree_Destroy(self,*(void**)v29);}
if(*(void**)((u8*)v29+4)!=NULL){BinTree_Destroy(self,*(void**)((u8*)v29+4));}
fn_800D6818(fn_800D6874(self),(u8*)v29+0xC);
fn_800D67EC(fn_800D6810(self),v29,1);
}
fn_800D6874(self);
fn_800D5C88((u8*)v28+0xC,-1);
fn_800D6810(self);
Heap_Free(v28);
}
fn_800D67E8(self);
if(((s32)v27+0xC)!=0){
String_Destroy((u8*)v27+0x18,-1);
String_Destroy((u8*)v27+0xC,-1);
}
fn_800D67E4(self+4);
Heap_Free(v27);
}
if(((s32)arg1+0xC)!=0){
if(((s32)arg1+0x18)!=0&&*(void**)((u8*)arg1+0x20)!=NULL){Heap_Free(*(void**)((u8*)arg1+0x20));}
if(((u8*)arg1+0xC)!=NULL&&*(void**)((u8*)arg1+0x14)!=NULL){Heap_Free(*(void**)((u8*)arg1+0x14));}
}
Heap_Free(arg1);
}
#pragma pop
void fn_800D67E4(void) {

}

void fn_800D67E8(void) {

}

void fn_800D67EC(void *arg0, void *arg1) {
    void Heap_Free(void *);
    Heap_Free(arg1);
}

s32 fn_800D6810(s32 arg0) {
    return arg0 + 4;
}

void fn_800D6818(void *arg0, void *arg1) {
    void Heap_Free(void *);
    if (arg1 != NULL) {
        if ((u8 *)arg1 + 0xC != NULL) {
            if (*(void **)((u8 *)arg1 + 0x14) != NULL) {
                Heap_Free(*(void **)((u8 *)arg1 + 0x14));
            }
        }
        if (arg1 != NULL) {
            if (*(void **)((u8 *)arg1 + 8) != NULL) {
                Heap_Free(*(void **)((u8 *)arg1 + 8));
            }
        }
    }
}

void fn_800D6874(void) {

}

#pragma dont_inline on
#pragma global_optimizer off
#pragma scheduling off
void fn_800D6878(void *arg0, u8 *arg1) {
    u8 *mid;
    u8 v;
    s32 z;
    z = 0;
    v = *arg1;
    *(u32 *)arg0 = z;
    mid = (u8 *)arg0 + 4;
    *(u32 *)((u8 *)arg0 + 4) = z;
    *((u8 *)arg0 + 8) = v;
    *(void **)((u8 *)arg0 + 0xC) = mid;
}
#pragma scheduling reset
#pragma global_optimizer reset
#pragma dont_inline reset
u32 *fn_800D6898(u32 *arg0, u32 *arg1, u32 arg2, u32 arg3, void *arg4) {
    struct Tag { u8 b; } tag;
    M2C_UNK fn_800CA728(u32 *, char *, char *, void *, struct Tag);
    M2C_UNK fn_8022CF78(void);
    M2C_UNK fn_80232058(void *, const char *, ...);
    extern char __files[];
    u32 size;
    u32 len;
    char *p;

    size = arg1[0];
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

#pragma optimization_level 3
void fn_800D6940(u32 *arg0) {
    u8 *start = (u8 *)arg0[2];
    u8 *end = start + arg0[1] * 0x58;
    while (end > start) {
        end -= 0x58;
    }
    arg0[1] = 0;
}
#pragma optimization_level reset
void *fn_800D697C(void *tree,void *parent,s32 asLeft,s32 setFirst,void *key) {
void *Heap_Alloc(u32);void Tree_InsertFixup(void*,void*);
void abort(void);s32 fprintf(void*,const char*,...);
void fn_800D6A84(void*,void*,void*);
extern char __files[];extern char lbl_802704F8[];
void *node;
if(*(u32*)tree>(u32)-2){fprintf(__files+0xa0,lbl_802704F8+0xa53);abort();}
node=Heap_Alloc(0x24);
if(node==0){fprintf(__files+0xa0,lbl_802704F8+0x999);abort();}
fn_800D6A84(tree,(u8*)node+0xc,key);
*(void**)((u8*)node+4)=0;*(void**)node=0;
*(u32*)((u8*)node+8)=(u32)parent|(*(u32*)((u8*)node+8)&1);
if((u8)asLeft)*(void**)parent=node;else *(void**)((u8*)parent+4)=node;
++*(u32*)tree;Tree_InsertFixup(node,*(void**)((u8*)tree+4));
if((u8)setFirst)*(void**)((u8*)tree+0xc)=node;
return node;
}

void fn_800D6A84(void *arg0, u32 arg1, s32 arg2) {
    void fn_800D6AB4(u32, s32);
    if (arg1 != 0U) {
        fn_800D6AB4(arg1, arg2);
    }
}

#pragma optimization_level 3
void *fn_800D6AB4(String *dst, const String *src) {
    void *Heap_Alloc(s32);
    void *memcpy(void *, const void *, u32);
    void fprintf(void *, const char *, ...);
    void abort(void);
    extern char lbl_802704F8[];
    extern u8 lbl_80366E50;

    {
        u32 size;
        char *allocation, *end, *begin;
        dst[0].cap = src[0].cap;
        begin = src[0].data;
        end = begin + src[0].size;
        dst[0].data = 0;
        dst[0].size = 0;
        dst[0].cap = 0;
        if (begin != end) {
            size = end - begin;
            dst[0].cap = size + 3 - (size & 3);
            allocation = Heap_Alloc(dst[0].cap + 1);
            if (!allocation) {
                fprintf(__files + 0xA0, lbl_802704F8 + 0x999);
                abort();
            }
            dst[0].data = allocation;
            memcpy(dst[0].data, begin, size);
            dst[0].size = size;
            dst[0].data[size] = lbl_80366E50;
        }
    }
    {
        char *allocation, *end, *begin;
        u32 size;
        dst[1].cap = src[1].cap;
        begin = src[1].data;
        end = begin + src[1].size;
        dst[1].data = 0;
        dst[1].size = 0;
        dst[1].cap = 0;
        if (begin != end) {
            size = end - begin;
            dst[1].cap = size + 3 - (size & 3);
            allocation = Heap_Alloc(dst[1].cap + 1);
            if (!allocation) {
                fprintf(__files + 0xA0, lbl_802704F8 + 0x999);
                abort();
            }
            dst[1].data = allocation;
            memcpy(dst[1].data, begin, size);
            dst[1].size = size;
            dst[1].data[size] = lbl_80366E50;
        }
    }
    return dst;
}
#pragma optimization_level 4
void Tree_InsertFixup(void *arg0, void *arg1)
{
    typedef struct Node {
        struct Node *left;
        struct Node *right;
        unsigned int parent_color;
    } Node;

    void fn_800D6E0C(Node *, Node **);
    void fn_800D6E8C(Node *, Node **);

    Node *node;
    Node *root;
    Node *parent;
    Node *grandparent;
    Node *uncle;

    node = (Node *)arg0;
    root = (Node *)arg1;

    node->parent_color |= 1;

    goto check;

    while (1) {
        parent = (Node *)(node->parent_color & ~1U);
        grandparent = (Node *)(parent->parent_color & ~1U);

        if (parent == grandparent->left) {
            uncle = grandparent->right;

            if (uncle != 0) {
                if ((uncle->parent_color & 1) == 1) {
                    *(volatile unsigned int *)&parent->parent_color =
                        *(volatile unsigned int *)&parent->parent_color & ~1U;

                    uncle->parent_color &= ~1U;

                    parent = (Node *)(
                        *(volatile unsigned int *)&node->parent_color & ~1U
                    );

                    grandparent = (Node *)(
                        *(volatile unsigned int *)&parent->parent_color & ~1U
                    );

                    node = grandparent;
                    node->parent_color |= 1;

                    goto check;
                }
            }

            if (node == parent->right) {
                node = parent;
                fn_800D6E8C(node, &root);
            }

            parent = (Node *)(
                *(volatile unsigned int *)&node->parent_color & ~1U
            );
            parent->parent_color &= ~1U;

            parent = (Node *)(
                *(volatile unsigned int *)&node->parent_color & ~1U
            );
            grandparent = (Node *)(
                *(volatile unsigned int *)&parent->parent_color & ~1U
            );
            grandparent->parent_color |= 1;

            parent = (Node *)(
                *(volatile unsigned int *)&node->parent_color & ~1U
            );
            grandparent = (Node *)(
                *(volatile unsigned int *)&parent->parent_color & ~1U
            );

            fn_800D6E0C(grandparent, &root);
        } else {
            uncle = grandparent->left;

            if (uncle != 0) {
                if ((uncle->parent_color & 1) == 1) {
                    *(volatile unsigned int *)&parent->parent_color =
                        *(volatile unsigned int *)&parent->parent_color & ~1U;

                    uncle->parent_color &= ~1U;

                    parent = (Node *)(
                        *(volatile unsigned int *)&node->parent_color & ~1U
                    );

                    grandparent = (Node *)(
                        *(volatile unsigned int *)&parent->parent_color & ~1U
                    );

                    node = grandparent;
                    node->parent_color |= 1;

                    goto check;
                }
            }

            if (node == parent->left) {
                node = parent;
                fn_800D6E0C(node, &root);
            }

            parent = (Node *)(
                *(volatile unsigned int *)&node->parent_color & ~1U
            );
            parent->parent_color &= ~1U;

            parent = (Node *)(
                *(volatile unsigned int *)&node->parent_color & ~1U
            );
            grandparent = (Node *)(
                *(volatile unsigned int *)&parent->parent_color & ~1U
            );
            grandparent->parent_color |= 1;

            parent = (Node *)(
                *(volatile unsigned int *)&node->parent_color & ~1U
            );
            grandparent = (Node *)(
                *(volatile unsigned int *)&parent->parent_color & ~1U
            );

            fn_800D6E8C(grandparent, &root);
        }

check:
        if (node == root)
            break;

        parent = (Node *)(node->parent_color & ~1U);

        if ((parent->parent_color & 1) != 1)
            break;
    }

    root->parent_color &= ~1U;
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

#pragma scheduling off
s32 fn_800D6F34(void)
{
    extern void *lbl_803678A8;
    extern void *lbl_80367898;

    void fn_800D75C4(void *);
    void fn_800D758C(void *);
    s32 fn_8011C9E4(void *);
    void *fn_800DC3B0(void *);
    void fn_800DAAC0(void *, s32);
    void fn_800DA2CC(void *);

    void *p;

    fn_800D75C4(lbl_803678A8);
    fn_800D758C(lbl_80367898);

    p = lbl_80367898;
    fn_800DAAC0(
        fn_800DC3B0(*(void **)((u8 *)lbl_80367898 + 0x424)),
        !!fn_8011C9E4(*(void **)((u8 *)p + 0x428))
    );

    fn_800DA2CC(lbl_803678A8);
    return 0;
}
#pragma scheduling reset
void fn_800D6FA4(void *arg0) {
    M2C_UNK String_Copy(M2C_UNK *);
    M2C_UNK fn_800DC518(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK sp8;
    
    String_Copy(&sp8);
    fn_800DC518(M2C_FIELD(arg0, s32 *, 0x424), &sp8, 0);
    String_Destroy(&sp8, -1);
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
void *fn_800D7060(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
void String_ConcatCStr(void *,void *,char *);
void *fn_800D75FC(void *,void *);
void fn_800D764C(void *,s32,s32,s32,void *,void *);
void fn_800E3F54(void *);
extern char lbl_80270F68[];
extern u8 lbl_8028DDB8[];
String a,b,c,d,e,f,g;
void *p1,*p2,*p3,*p4,*p5,*p6;
void *temp;
void *self;
self=arg0;
String_Init(&a,lbl_80270F68,&p1);
String_ConcatCStr(&b,&a,lbl_80270F68+7);
String_Init(&c,lbl_80270F68+0x10,&p2);
fn_800D764C(self,arg1,arg2,arg3,&b,&c);
String_Destroy(&c,-1); String_Destroy(&b,-1); String_Destroy(&a,-1);
*(void **)((u8 *)self+0xc)=lbl_8028DDB8;
String_Init(&d,lbl_80270F68+0x15,&p3);
*(void **)((u8 *)self+0x424)=fn_800D75FC(self,&d);
String_Destroy(&d,-1);
String_Init(&e,lbl_80270F68+0x1f,&p4);
*(void **)((u8 *)self+0x428)=fn_800D75FC(self,&e);
String_Destroy(&e,-1);
String_Init(&f,lbl_80270F68+0x28,&p5);
temp=fn_800D75FC(self,&f);
*(void **)((u8 *)self+0x42c)=temp;
*(void **)((u8 *)self+0x418)=temp;
String_Destroy(&f,-1);
String_Init(&g,lbl_80270F68+0x2e,&p6);
temp=fn_800D75FC(self,&g);
*(void **)((u8 *)self+0x430)=temp;
*(void **)((u8 *)self+0x41c)=temp;
String_Destroy(&g,-1);
*(void **)((u8 *)*(void **)((u8 *)self+0x42c)+0xa4)=(void *)fn_800D6F34;
*(void **)((u8 *)*(void **)((u8 *)self+0x430)+0xa4)=(void *)fn_800D6F0C;
*(void **)((u8 *)self+0x14)=*(void **)((u8 *)self+0x42c);
*(void **)((u8 *)self+0x414)=*(void **)((u8 *)self+0x42c);
fn_800E3F54(*(void **)((u8 *)self+0x414));
return self;
}

#pragma opt_common_subs off
void fn_800D7254(void *self, u32 pad, s32 flags, s32 keys) {
    void fn_800E3F48(void *);
    void fn_800E3F54(void *);
    void fn_800E4078(void *, s32, s32);
    void fn_800E4110(void *, s32, s32);
    s32 var_r31;
    s32 var_r30;

    var_r30 = 0;
    var_r31 = 0;
    if (!(pad & 0x100)) {
        if (keys & 1) {
            var_r31 = -1;
        } else if (keys & 2) {
            var_r31 = 1;
        } else if (keys & 8) {
            var_r30 = -1;
        } else if (keys & 4) {
            var_r30 = 1;
        }
    }

    if (var_r31 != 0 || var_r30 != 0) {
        if (M2C_FIELD(self, void **, 0x414) != NULL) {
            fn_800E3F48(M2C_FIELD(self, void **, 0x414));
        }
        if (M2C_FIELD(self, void **, 0x14) == NULL) {
            M2C_FIELD(self, void **, 0x414) = NULL;
        } else {
            M2C_FIELD(self, s32 *, 0) = M2C_FIELD(self, s32 *, 0) + var_r31;
            if (M2C_FIELD(self, s32 *, 0) < 0) {
                M2C_FIELD(self, s32 *, 0) = 0xF;
            }
            if (M2C_FIELD(self, s32 *, 0) >= 0x10) {
                M2C_FIELD(self, s32 *, 0) = 0;
            }
            M2C_FIELD(self, s32 *, 4) = M2C_FIELD(self, s32 *, 4) + var_r30;
            if (M2C_FIELD(self, s32 *, 4) < 0) {
                M2C_FIELD(self, s32 *, 4) = 0xF;
            }
            if (M2C_FIELD(self, s32 *, 4) >= 0x10) {
                M2C_FIELD(self, s32 *, 4) = 0;
            }

            if (var_r31 != 0) {
                s32 zero = 0;
                while (*(void **)((u8 *)self + (M2C_FIELD(self, s32 *, 4) << 6) + (M2C_FIELD(self, s32 *, 0) * 4) + 0x14) == NULL) {
                    M2C_FIELD(self, s32 *, 0) = M2C_FIELD(self, s32 *, 0) + var_r31;
                    if (M2C_FIELD(self, s32 *, 0) >= 0x10) {
                        M2C_FIELD(self, s32 *, 0) = zero;
                    }
                }
            } else {
                s32 x;
                while (*(void **)(((u8 *)self + (M2C_FIELD(self, s32 *, 4) << 6)) + ((x = M2C_FIELD(self, s32 *, 0)) * 4) + 0x14) == NULL) {
                    if (x != 0) {
                        M2C_FIELD(self, s32 *, 0) = M2C_FIELD(self, s32 *, 0) - 1;
                    } else {
                        M2C_FIELD(self, s32 *, 4) = M2C_FIELD(self, s32 *, 4) + var_r30;
                        if (M2C_FIELD(self, s32 *, 4) < 0) {
                            M2C_FIELD(self, s32 *, 4) = 0xF;
                        }
                        if (M2C_FIELD(self, s32 *, 4) >= 0x10) {
                            M2C_FIELD(self, s32 *, 4) = 0;
                        }
                    }
                }
            }

            {
                u8 *p = (u8 *)self + (M2C_FIELD(self, s32 *, 4) << 6);
                p += M2C_FIELD(self, s32 *, 0) << 2;
                M2C_FIELD(self, void **, 0x414) = *(void **)(p + 0x14);
            }
            fn_800E3F54(M2C_FIELD(self, void **, 0x414));
        }
    }

    if (flags & 0x100) {
        if (M2C_FIELD(self, void **, 0x414) != NULL) {
            fn_800E4110(M2C_FIELD(self, void **, 0x414), 0, 0);
        }
        M2C_FIELD(self, u8 *, 8) = 1;
    }

    if (pad == 0) {
        if (M2C_FIELD(self, u8 *, 8) != 0 && M2C_FIELD(self, void **, 0x414) != NULL) {
            fn_800E4078(M2C_FIELD(self, void **, 0x414), 0, 0);
        }
        M2C_FIELD(self, u8 *, 8) = 0;
    }

    if ((flags & 0x200) && M2C_FIELD(self, void **, 0x41C) != NULL) {
        fn_800E4078(M2C_FIELD(self, void **, 0x41C), 0, 0);
    }

    if ((flags & 0x1000) && M2C_FIELD(self, void **, 0x418) != NULL) {
        fn_800E4078(M2C_FIELD(self, void **, 0x418), 0, 0);
    }
}
#pragma opt_common_subs reset
void fn_800D74FC(void *arg0) {
#pragma cplusplus on
    struct Obj {
        u8 pad[0xC];
        virtual void v0(s32, s32, s32) = 0;
        virtual void v1(s32, s32, s32) = 0;
    };
    extern void *gPadInput;
    s32 buttons = *(s32 *)((u8 *)gPadInput + 4);
    s32 prev = *(s32 *)((u8 *)gPadInput + 8);
    s32 repeat = *(s32 *)((u8 *)gPadInput + 0xC);

    ((Obj *)arg0)->v1(buttons, buttons & (prev ^ buttons), repeat);
#pragma cplusplus reset
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

#pragma optimization_level 3
s32 fn_800D75FC(void *arg0) {
    M2C_UNK String_Destroy(M2C_UNK *, M2C_UNK);
    M2C_UNK String_Copy(M2C_UNK *);
    s32 fn_800E4454(s32, M2C_UNK *);
    M2C_UNK sp8;
    struct { s32 result; } holder;

    String_Copy(&sp8);
    holder.result = fn_800E4454(M2C_FIELD(arg0, s32 *, 0x10), &sp8);
    String_Destroy(&sp8, -1);
    return holder.result;
}

#pragma optimization_level 4
void *fn_800D764C(u8 *self,void *owner,s32 x,s32 y,void *arg4,void *name) {
void fn_800E8154(void *,void *);
char *String_CStr(void *);
u8 fn_800DF6A8(void *);
extern u8 lbl_8028DDC8[];
extern char lbl_80271010[];
#pragma cplusplus on
class Object { public: char data[64]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void setup(s32,s32); };
class Owner { public: char data[16]; virtual void v0(); virtual void v1(); virtual Object *get(char *,char *); };
struct Entry {
    u32 f[32];
    void init() {
        f[0]=0; f[1]=0; f[2]=0; f[3]=0; f[4]=0; f[5]=0; f[6]=0; f[7]=0;
        f[8]=0; f[9]=0; f[10]=0; f[11]=0; f[12]=0; f[13]=0; f[14]=0; f[15]=0;
        f[16]=0; f[17]=0; f[18]=0; f[19]=0; f[20]=0; f[21]=0; f[22]=0; f[23]=0;
        f[24]=0; f[25]=0; f[26]=0; f[27]=0; f[28]=0; f[29]=0; f[30]=0; f[31]=0;
    }
};
struct Self { u8 pad[0x14]; Entry e[8]; };
s32 i;
*(void **)(self+0xC)=lbl_8028DDC8;
fn_800E8154(owner,arg4);
*(Object **)(self+0x10)=((Owner *)owner)->get(lbl_80271010,String_CStr(name));
(*(Object **)(self+0x10))->setup(x,y);
*(u32 *)(self+4)=0;
*(u32 *)self=0;
self[0x420]=fn_800DF6A8(*(void **)(self+0x10));
for(i=0;i<8;i++) {
    ((Self *)self)->e[i].init();
}
*(u32 *)(self+0x414)=0;
*(u32 *)(self+0x418)=0;
*(u32 *)(self+0x41C)=0;
self[8]=0;
return self;
#pragma cplusplus reset
}
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
    extern u16 *gWin3;
    extern void *lbl_803679C8;
    extern void *lbl_803679D0;
    extern void *gBgWin;
    extern void *lbl_803678C0;

    fn_800D758C(lbl_80367898);
    fn_800D758C(lbl_803678A8);
    fn_800D758C(gWin3);
    fn_800D758C(lbl_803679C8);
    fn_800D758C(lbl_803679D0);
    fn_800D758C(gBgWin);
    fn_800D75C4(lbl_803678C0);
    fn_800DA2CC(lbl_803678C0);
    return 0;
}

s32 fn_800D7834(void) {
    void fn_800D75C4(void *);
    void fn_800DA2CC(void *);
    extern s32 gBgWin;
    fn_800D75C4((void *)gBgWin);
    fn_800DA2CC((void *)gBgWin);
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
    extern u16 *gWin3;
    extern void *lbl_803679C8;
    extern void *lbl_803679D0;
    extern void *gBgWin;
    extern void *lbl_803678C0;

    fn_800D75C4(lbl_80367898);
    fn_800D758C(lbl_803678A8);
    fn_800D758C(gWin3);
    fn_800D758C(lbl_803678C0);
    fn_800D758C(lbl_803679C8);
    fn_800D758C(lbl_803679D0);
    fn_800D758C(gBgWin);
    fn_800DA2CC(lbl_80367898);
    return 0;
}

void *PreviewWin_Create(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    /* Construct the ztool PreviewWin window and wire its Start/Weapon/Texture/Effect/Bg/Battle/Exit controls. */
    void String_Init(void *, char *, void *);
    void String_ConcatCStr(void *, void *, char *);
    void *fn_800D75FC(void *, void *);
    void fn_800D764C(void *, s32, s32, s32, void *, void *);
    void fn_800E3F54(void *);
    extern char PreviewWin_str[];
    extern u8 PreviewWin_vtable[];
    extern void fn_800D78F4(void);
    extern void fn_800D78C4(void);
    extern void fn_800D7894(void);
    extern void fn_800D7864(void);
    extern void fn_800D7834(void);
    extern void fn_800D77D4(void);
    extern void fn_800D77B0(void);
    String pathBase;
    String dbxPath;
    String winName;
    String startBtn;
    String weaponBtn;
    String textureBtn;
    String effectBtn;
    String bgBtn;
    String battleBtn;
    String exitBtn;
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
    String_Init(&pathBase, PreviewWin_str, &sp28);
    String_ConcatCStr(&dbxPath, &pathBase, PreviewWin_str + 7);
    String_Init(&winName, PreviewWin_str + 0x10, &sp24);
    fn_800D764C(self, arg1, arg2, arg3, &dbxPath, &winName);
    String_Destroy(&winName, -1);
    String_Destroy(&dbxPath, -1);
    String_Destroy(&pathBase, -1);
    *(void **)((u8 *)self + 0xC) = PreviewWin_vtable;
    String_Init(&startBtn, PreviewWin_str + 0x1B, &sp20);
    *(void **)((u8 *)self + 0x424) = fn_800D75FC(self, &startBtn);
    String_Destroy(&startBtn, -1);
    String_Init(&weaponBtn, PreviewWin_str + 0x24, &sp1C);
    *(void **)((u8 *)self + 0x428) = fn_800D75FC(self, &weaponBtn);
    String_Destroy(&weaponBtn, -1);
    String_Init(&textureBtn, PreviewWin_str + 0x2E, &sp18);
    *(void **)((u8 *)self + 0x42C) = fn_800D75FC(self, &textureBtn);
    String_Destroy(&textureBtn, -1);
    String_Init(&effectBtn, PreviewWin_str + 0x39, &sp14);
    *(void **)((u8 *)self + 0x430) = fn_800D75FC(self, &effectBtn);
    String_Destroy(&effectBtn, -1);
    String_Init(&bgBtn, PreviewWin_str + 0x43, &sp10);
    *(void **)((u8 *)self + 0x434) = fn_800D75FC(self, &bgBtn);
    String_Destroy(&bgBtn, -1);
    String_Init(&battleBtn, PreviewWin_str + 0x49, &spC);
    *(void **)((u8 *)self + 0x438) = fn_800D75FC(self, &battleBtn);
    String_Destroy(&battleBtn, -1);
    String_Init(&exitBtn, PreviewWin_str + 0x53, &sp8);
    *(void **)((u8 *)self + 0x43C) = fn_800D75FC(self, &exitBtn);
    String_Destroy(&exitBtn, -1);
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
    extern void *gWin3;
    fn_800D758C(lbl_803678A8);
    fn_800D758C(gWin3);
    return 0;
}

s32 fn_800D7C8C(void)
{
    void *fn_800DC3C0(void *);
    void fn_800DA5AC(void *, s32);
    void fn_800D75C4(void *);

    extern u32 lbl_803678A8;
    extern u32 gWin3;

    void *result;
    u8 *ptr;

    ptr = (u8 *)lbl_803678A8;

    result = fn_800DC3C0(*(void **)(ptr + 0x424));

    fn_800DA5AC(result, 1);

    fn_800D75C4((void *)gWin3);

    return 0;
}

s32 fn_800D7CC8(void)
{
    void *fn_800DC3C0(void *);
    void fn_800DA5AC(void *, s32);
    void fn_800D75C4(void *);

    extern u32 lbl_803678A8;
    extern u32 gWin3;

    void *result;
    u8 *ptr;

    ptr = (u8 *)lbl_803678A8;

    result = fn_800DC3C0(*(void **)(ptr + 0x424));

    fn_800DA5AC(result, 0);

    fn_800D75C4((void *)gWin3);

    return 0;
}

void fn_800D7D04(void *arg0, s32 arg1, u32 arg2) {
#pragma cplusplus on
class Control { public: unsigned char pad[0x40]; virtual void v0(s32,u32); virtual void v1(s32,u32); virtual void v2(s32,u32); virtual void v3(s32,u32); virtual void v4(s32,u32); virtual void v5(s32,u32); virtual void v6(s32,u32); virtual void v7(s32,u32); virtual void v8(s32,u32); virtual void v9(s32,u32); virtual void v10(s32,u32); virtual void v11(s32,u32); virtual void v12(s32,u32); virtual void v13(s32,u32); virtual void v14(s32,u32); virtual void v15(s32,u32); virtual void v16(s32,u32); virtual void v17(s32,u32); virtual void v18(s32,u32); virtual void v19(s32,u32); virtual void input(s32,u32); };
extern s8 lbl_803678B0;
extern s32 lbl_803678AC;
extern void *lbl_803678A8;
extern u16 *gWin3;
void fn_800E3F48(void *); void fn_800E3F54(void *);
void *fn_800DC3C0(void *); void fn_800DA5AC(void *,s32);
void fn_800D75C4(void *); void fn_800D758C(void *);
u8 *self=(u8 *)arg0;
if (!lbl_803678B0) { lbl_803678AC=0; lbl_803678B0=1; }
((Control *)*(void **)(self+0x424))->input(arg1,arg2);
if(arg2&0x1000) {
if(lbl_803678AC) { fn_800E3F48(*(void **)(self+0x42C)); fn_800E3F54(*(void **)(self+0x428)); lbl_803678AC=0; }
else { fn_800E3F48(*(void **)(self+0x428)); fn_800E3F54(*(void **)(self+0x42C)); lbl_803678AC=1; }
} else if(arg2&0x100) {
if(lbl_803678AC) { fn_800DA5AC(fn_800DC3C0(*(void **)((u8 *)lbl_803678A8+0x424)),1); fn_800D75C4(gWin3); }
else { fn_800DA5AC(fn_800DC3C0(*(void **)((u8 *)lbl_803678A8+0x424)),0); fn_800D75C4(gWin3); }
} else if(arg2&0x200) { fn_800D758C(lbl_803678A8); fn_800D758C(gWin3); }
#pragma cplusplus reset
}

void *fn_800D7E24(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
void String_ConcatCStr(void *,void *,char *);
void *fn_800D75FC(void *,void *);
void fn_800D764C(void *,s32,s32,s32,void *,void *);
void fn_800E3F54(void *);
extern char lbl_80271108[];
extern u8 lbl_8028DDE8[];
String a,b,c,d,e,f,g;
void *p1,*p2,*p3,*p4,*p5,*p6;
void *temp;
void *self;
self=arg0;
String_Init(&a,lbl_80271108,&p1);
String_ConcatCStr(&b,&a,lbl_80271108+7);
String_Init(&c,lbl_80271108+0x10,&p2);
fn_800D764C(self,arg1,arg2,arg3,&b,&c);
String_Destroy(&c,-1); String_Destroy(&b,-1); String_Destroy(&a,-1);
*(void **)((u8 *)self+0xc)=lbl_8028DDE8;
String_Init(&d,lbl_80271108+0x15,&p3);
*(void **)((u8 *)self+0x424)=fn_800D75FC(self,&d);
String_Destroy(&d,-1);
String_Init(&e,lbl_80271108+0x1f,&p4);
temp=fn_800D75FC(self,&e);
*(void **)((u8 *)self+0x428)=temp;
*(void **)((u8 *)self+0x418)=temp;
String_Destroy(&e,-1);
String_Init(&f,lbl_80271108+0x25,&p5);
*(void **)((u8 *)self+0x42c)=fn_800D75FC(self,&f);
String_Destroy(&f,-1);
String_Init(&g,lbl_80271108+0x2d,&p6);
temp=fn_800D75FC(self,&g);
*(void **)((u8 *)self+0x430)=temp;
*(void **)((u8 *)self+0x41c)=temp;
String_Destroy(&g,-1);
*(void **)((u8 *)*(void **)((u8 *)self+0x428)+0xa4)=(void *)fn_800D7CC8;
*(void **)((u8 *)*(void **)((u8 *)self+0x42c)+0xa4)=(void *)fn_800D7C8C;
*(void **)((u8 *)*(void **)((u8 *)self+0x430)+0xa4)=(void *)fn_800D7C5C;
*(void **)((u8 *)self+0x14)=*(void **)((u8 *)self+0x428);
*(void **)((u8 *)self+0x18)=*(void **)((u8 *)self+0x42c);
*(void **)((u8 *)self+0x414)=*(void **)((u8 *)self+0x428);
fn_800E3F54(*(void **)((u8 *)self+0x414));
return self;
}

#pragma push
#pragma cplusplus on
#pragma optimization_level 4
#pragma opt_common_subs off
extern "C" void fn_800D8030(void *arg0)
{
    s32 strlen(char *);
    void String_AssignCStr(void *, char *, s32);
    void fn_800E7B80(void *, void *);
    void *fn_800E7F60(void *, void *);
    void fn_800DBBC8(f32 *, void *);
    void fn_800DBB58(f32 *, void *);
    void Camera_GetLookAt(f32 *, void *);
    void PSMTXRotRad(void *, s32, f32);
    void fn_802029C4(void *, f32 *, f32 *);
    f32 Camera_GetFov(void *);
    void fn_800E8FE8(void *, f32);
    extern void *gPadInput;
    extern char lbl_802711B0[];
    extern const f32 lbl_80369E30;
    extern const f32 lbl_80369E34;
    extern const f32 lbl_80369E38;
    extern const f32 lbl_80369E3C;
    extern const f64 lbl_80369E50;
    extern const f32 lbl_80369E40;
    extern const f32 lbl_80369E44;
    extern const f32 lbl_80369E48;
    extern const f32 lbl_80369E4C;

    f32 mtx[3][4];
    f32 vec[3];
    f32 pos[3];
    f32 dir[3];
    f32 look[3];
    f32 f31;
    f32 f30;
    f32 f29;
    f32 f28;
    f32 f27;
    f32 f26;
    f32 f25;
    f32 f24;
    f32 f23;
    struct {f32 x,z;} delta;
    f32 rz, rx;
    s32 held;
    s32 pressed;
    void *self;
    void *vt;
    u8 *stick;
    s32 len;
    s8 trig;
    f32 fov;
    u8 sy, sx;

    (void)lbl_80369E50;

    self = arg0;
    f25 = lbl_80369E30;
    held = *(s32 *)((u8 *)gPadInput + 4);
    pressed = held & (*(s32 *)((u8 *)gPadInput + 8) ^ held);

    if (pressed & 0x400) {
        len = strlen(lbl_802711B0 + 0xEB);
        String_AssignCStr((u8 *)self + 0x7C, lbl_802711B0 + 0xEB, len);
        fn_800E7B80(*(void **)((u8 *)self + 4), (u8 *)self + 0x7C);
    }
    if (pressed & 0x800) {
        len = strlen(lbl_802711B0 + 0xF0);
        String_AssignCStr((u8 *)self + 0x7C, lbl_802711B0 + 0xF0, len);
        fn_800E7B80(*(void **)((u8 *)self + 4), (u8 *)self + 0x7C);
    }

    self = fn_800E7F60(*(void **)((u8 *)self + 4), (u8 *)self + 0x7C);
    fn_800DBBC8(pos, self);
    f29 = pos[0];
    f30 = pos[1];
    f31 = pos[2];
    fn_800DBB58(dir, self);
    f23 = dir[0];
    f24 = dir[2];
    Camera_GetLookAt(look, self);
    vec[0] = f23;
    vec[1] = lbl_80369E34;
    f26 = look[0];
    vec[2] = f24;
    f27 = look[1];
    f28 = look[2];
    PSMTXRotRad(mtx, 0x59, lbl_80369E38);
    fn_802029C4(mtx, vec, vec);
    rx = vec[0];
    rz = vec[2];
    if (held & 0x200) {
        f25 = lbl_80369E3C;
    }

    stick = *(u8 **)gPadInput;
    sy=stick[3]; sx=stick[2];
    delta.x=f23*(f32)(s8)sy;
    delta.z=f24*(f32)(s8)sy;
    f29+=delta.x*lbl_80369E40;
    f31+=delta.z*lbl_80369E40;
    delta.x=rx*(f32)(s8)sx;
    delta.z=rz*(f32)(s8)sx;
    f29+=delta.x*lbl_80369E40;
    f31+=delta.z*lbl_80369E40;

    if (held & 0x40) {
        f30 += lbl_80369E44 * f25;
    } else if (held & 0x20) {
        f30 -= lbl_80369E44 * f25;
    }

    fov = Camera_GetFov(self);
    if (held & 0x8) {
        fov -= lbl_80369E30;
    } else if (held & 0x4) {
        fov += lbl_80369E30;
    }
    fn_800E8FE8(self, fov);

    trig = (s8)(*(u8 **)gPadInput)[4];
    if (trig < -0x20) {
        f27 += lbl_80369E30;
    } else if (trig > 0x20) {
        f27 += lbl_80369E48;
    }

    if ((u32)held & 0x80000000) {
        f26 += lbl_80369E48;
        if (f26 < lbl_80369E4C) {
            f26 = lbl_80369E4C;
        }
    } else if (held & 0x40000000) {
        f26 += lbl_80369E30;
    }

    ((DebugCameraMethods *)self)->SetPosition(f29,f30,f31);
    ((DebugCameraMethods *)self)->SetLookAt(f26,f27,f28);
}
#pragma pop
#pragma cplusplus off
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
void fn_800D83B0(void *self, String *arg1) {
void *Heap_Alloc(u32); void String_Init(void *,void *,void *); void *Xml_ParseFile(void *,void *,void *);
void Str_CopyPad(void *,void *,u32); void fn_800C908C(void *,void *,void *);
void Xml_GetChildName(void *,void *); void Xml_GetChildValue(void *,void *); u8 Xml_AdvanceChild(void *);
void String_Assign(void *,void *,s32,s32); void *String_AssignCStr(void *,void *,s32); s32 strlen(char *);
void String_Copy(void *,void *); void fn_801513A0(void *,void *);
void fn_800CA18C(void *,void *,s32,void *); void Xml_Destroy(void *,s16);
extern char lbl_802711B0[]; extern void *lbl_80367BA0;
struct Block {u32 a,b,c,d,e,f,g,h;};
struct Block sp98,sp78;
char sp58[32];
String sp4C,sp40,sp34,sp28,sp1C,sp10;
u32 spC,sp8;
u32 path; s8 made; u8 *f; u8 *arg0=self;
path=(u32)arg1;made=0;
f=Heap_Alloc(0x60);
if(f) { String_Init(&sp34,lbl_802711B0+0xFA,&spC); made=1; f=Xml_ParseFile(f,(void *)path,&sp34); }
if(made!=0) String_Destroy(&sp34,-1);
sp4C.cap=0;sp40.cap=0;sp4C.size=0;sp4C.data=0;sp4C.cap=0;sp40.size=0;sp40.data=0;sp40.cap=0;
String_Init(&sp28,lbl_802711B0+0xFF,&sp8);
Str_CopyPad(&sp78,lbl_802711B0+0x105,32);sp98=sp78;
fn_800C908C(f,&sp28,&sp98);String_Destroy(&sp28,-1);
path=(u32)sp58;
for(;Xml_AdvanceChild(f)!=0;) {
Xml_GetChildName(&sp1C,f);String_Assign(&sp4C,&sp1C,0,-1);String_Destroy(&sp1C,-1);
Xml_GetChildValue(sp58,f);String_AssignCStr(&sp40,(char *)path,strlen((char *)path));
String_Copy(&sp10,&sp4C);fn_801513A0(lbl_80367BA0,&sp10);String_Destroy(&sp10,-1);
fn_800CA18C(arg0+0x64,*(u8 **)(arg0+0x6C)+*(s32 *)(arg0+0x68)*12,1,&sp40);
}
Xml_Destroy(f,1);String_Destroy(&sp40,-1);String_Destroy(&sp4C,-1);
}

#pragma push
#pragma optimization_level 4
#pragma use_lmw_stmw off
#pragma opt_common_subs off
void fn_800D85CC(s32 self, char *arg1) {
void *Heap_Alloc(u32); void String_Init(void *,void *,void *); void *Xml_ParseFile(void *,void *,void *);
void Str_CopyPad(void *,void *,u32); void fn_800C908C(void *,void *,void *);
void Xml_GetChildName(void *,void *); void Xml_GetChildValue(void *,void *); u8 Xml_AdvanceChild(void *);
void String_Assign(void *,void *,s32,s32); void *String_AssignCStr(void *,void *,s32); s32 strlen(char *);
void fn_800CA18C(void *,void *,s32,void *); void Xml_Destroy(void *,s16);
void fn_8011C674(void *,void *); void fn_8011C64C(void *,void *); void *fn_8011C9EC(void *); void fn_8011CA3C(void *,void *);
extern char lbl_802711B0[]; extern void *gBgWin; extern void *lbl_803678C0;
struct Block { u32 a,b,c,d,e,f,g,h; };
struct Block sp108,spE8; char spC8[32]; struct Block spA8,sp88; char sp68[32];
String sp5C,sp50,sp44,sp38,sp2C,sp20,sp14; u32 sp10,spC,sp8;
void *f;
s32 arg0;
u32 path;
s8 made;
arg0 = self;
path = (u32)arg1;
made = 0;
f = Heap_Alloc(0x60);
if (f) {
String_Init(&sp44, lbl_802711B0 + 0xFA, &sp10);
made = 1;
f = Xml_ParseFile(f, (void *)path, &sp44);
}
if ((s8)made) String_Destroy(&sp44, -1);
sp5C.cap=0; sp50.cap=0; sp5C.size=0; sp5C.data=0; sp5C.cap=0; sp50.size=0; sp50.data=0; sp50.cap=0;
String_Init(&sp38, lbl_802711B0 + 0xFF, &spC);
Str_CopyPad(&spE8, lbl_802711B0 + 0x110, 32); sp108 = spE8;
fn_800C908C(f, &sp38, &sp108); String_Destroy(&sp38, -1);
path = (u32)spC8;
while (Xml_AdvanceChild(f)) {
Xml_GetChildName(&sp2C, f); String_Assign(&sp5C, &sp2C, 0, -1); String_Destroy(&sp2C, -1);
Xml_GetChildValue(spC8, f); String_AssignCStr(&sp50, (char *)path, strlen((char *)path));
fn_8011C674(gBgWin, &sp5C);
fn_800CA18C((void *)(arg0 + 0x4C), M2C_FIELD(arg0, u8 **, 0x54) + M2C_FIELD(arg0, s32 *, 0x50) * 12, 1, &sp50);
}
String_Init(&sp20, lbl_802711B0 + 0xFF, &sp8);
Str_CopyPad(&sp88, lbl_802711B0 + 0x11C, 32); spA8 = sp88;
fn_800C908C(f, &sp20, &spA8); String_Destroy(&sp20, -1);
path = (u32)sp68;
while (Xml_AdvanceChild(f)) {
Xml_GetChildName(&sp14, f); String_Assign(&sp5C, &sp14, 0, -1); String_Destroy(&sp14, -1);
Xml_GetChildValue(sp68, f); String_AssignCStr(&sp50, (char *)path, strlen((char *)path));
fn_8011C64C(gBgWin, &sp5C);
fn_800CA18C((void *)(arg0 + 0x58), M2C_FIELD(arg0, u8 **, 0x60) + M2C_FIELD(arg0, s32 *, 0x5C) * 12, 1, &sp50);
}
{
void *t;
t = fn_8011C9EC(*(void **)((u8 *)gBgWin + 0x424));
fn_8011CA3C(*(void **)((u8 *)lbl_803678C0 + 0x448), t);
t = fn_8011C9EC(*(void **)((u8 *)gBgWin + 0x428));
fn_8011CA3C(*(void **)((u8 *)lbl_803678C0 + 0x450), t);
}
Xml_Destroy(f, 1); String_Destroy(&sp50, -1); String_Destroy(&sp5C, -1);
}
#pragma pop

#pragma push
#pragma opt_propagation off
void fn_800D8928(u8 *arg0,void *arg1) {
void *Heap_Alloc(u32);
void String_Init(void *,void *,void *);
void *Xml_ParseFile(void *,void *,void *);
void String_Destroy(void *,s32);
void fn_800C8F70(void *,s32);
void Xml_GetChildName(void *,void *);
void Xml_GetChildValue(void *,void *);
void String_Assign(void *,void *,s32,s32);
void String_AssignCStr(void *,void *,s32);
s32 strlen(char *);
void String_Copy(void *,void *);
void fn_801086CC(void *,void *);
void fn_800CA18C(void *,void *,s32,void *);
u8 Xml_AdvanceChild(void *);
void *fn_800DC3B8(void *);
void fn_8011CA3C(void *,void *,void *);
void Xml_Destroy(void *,s16);
extern char lbl_802711B0[];
extern u8 *lbl_803679C8,*lbl_803678C0;
char value[32];
String name,text,root,temp,copy;
u32 alloc;
u32 path;
void *xml;
void *t;
s8 made;
path=(u32)arg1;made=0;
xml=Heap_Alloc(0x60);
if(xml) {
String_Init(&root,lbl_802711B0+0xfa,&alloc);
made=1;
xml=Xml_ParseFile(xml,(void*)path,&root);
}
if(made) String_Destroy(&root,-1);
name.cap=0;text.cap=0;name.size=0;name.data=0;name.cap=0;text.size=0;text.data=0;text.cap=0;
fn_800C8F70(xml,0);
path=(u32)value;
do {
Xml_GetChildName(&temp,xml);
String_Assign(&name,&temp,0,-1);
String_Destroy(&temp,-1);
Xml_GetChildValue(value,xml);
String_AssignCStr(&text,(char*)path,strlen((char*)path));
String_Copy(&copy,&name);
fn_801086CC(lbl_803679C8,&copy);
String_Destroy(&copy,-1);
fn_800CA18C(arg0+0x40,*(u8**)(arg0+0x48)+*(s32*)(arg0+0x44)*12,1,&text);
} while(Xml_AdvanceChild(xml));
t=fn_800DC3B8(*(void**)(lbl_803679C8+0x424));
fn_8011CA3C(*(void**)(lbl_803678C0+0x43c),t,lbl_803678C0);
t=fn_800DC3B8(*(void**)(lbl_803679C8+0x424));
fn_8011CA3C(*(void**)(lbl_803678C0+0x440),t,lbl_803678C0);
t=fn_800DC3B8(*(void**)(lbl_803679C8+0x424));
fn_8011CA3C(*(void**)(lbl_803678C0+0x444),t,lbl_803678C0);
Xml_Destroy(xml,1);
String_Destroy(&text,-1);String_Destroy(&name,-1);
}
#pragma pop
void fn_800D8B14(s32 self, char *arg1) {
void *Heap_Alloc(u32); void String_Init(void *,void *,void *); void *Xml_ParseFile(void *,void *,void *);
void fn_800C8F70(void *, s32); void fn_800D6FA4(void *, void *);
void Xml_GetChildName(void *,void *); void Xml_GetChildValue(void *,void *); u8 Xml_AdvanceChild(void *);
void String_Assign(void *,void *,s32,s32); void *String_AssignCStr(void *,void *,s32); s32 strlen(char *);
void String_Copy(void *, void *); void fn_800CA18C(void *,void *,s32,void *); void Xml_Destroy(void *,s16);
void *fn_800DC3B8(void *); void fn_8011CA3C(void *,void *,void *); void fn_8011C9A8(void *, s32);
extern char lbl_802711B0[]; extern void *lbl_80367898; extern void *lbl_803678C0;
char sp68[40];
String sp5C,sp50,sp44,sp38,sp2C,sp20,sp14; u32 sp10,spC,sp8;
u32 path; s8 made; void *f; s32 arg0;
void *t;
arg0=self; path=(u32)arg1; made=0;
f=Heap_Alloc(0x60);

if(f){String_Init(&sp44,lbl_802711B0+0xFA,&sp10);made=1;f=Xml_ParseFile(f,(void *)path,&sp44);}
if((s8)made)String_Destroy(&sp44,-1);
sp5C.cap=0;sp50.cap=0;sp5C.size=0;sp5C.data=0;sp5C.cap=0;sp50.size=0;sp50.data=0;sp50.cap=0;
fn_800C8F70(f,0);
String_Init(&sp38,lbl_802711B0+0x124,&spC);
fn_800D6FA4(lbl_80367898,&sp38);
String_Destroy(&sp38,-1);
String_Init(&sp2C,lbl_802711B0+0x129,&sp8);
fn_800CA18C((void *)(arg0+0x34),M2C_FIELD(arg0,u8 **,0x3C)+M2C_FIELD(arg0,s32 *,0x38)*12,1,&sp2C);
String_Destroy(&sp2C,-1);
path=(u32)sp68;
do{
Xml_GetChildName(&sp20,f);String_Assign(&sp5C,&sp20,0,-1);String_Destroy(&sp20,-1);
Xml_GetChildValue(sp68,f);String_AssignCStr(&sp50,(char *)path,strlen((char *)path));
String_Copy(&sp14,&sp5C);
fn_800D6FA4(lbl_80367898,&sp14);
String_Destroy(&sp14,-1);
fn_800CA18C((void *)(arg0+0x34),M2C_FIELD(arg0,u8 **,0x3C)+M2C_FIELD(arg0,s32 *,0x38)*12,1,&sp50);
}while(Xml_AdvanceChild(f));
t=fn_800DC3B8(*(void **)((u8 *)lbl_80367898+0x424));fn_8011CA3C(*(void **)((u8 *)lbl_803678C0+0x424),t,lbl_803678C0);
t=fn_800DC3B8(*(void **)((u8 *)lbl_80367898+0x424));fn_8011CA3C(*(void **)((u8 *)lbl_803678C0+0x428),t,lbl_803678C0);
t=fn_800DC3B8(*(void **)((u8 *)lbl_80367898+0x424));fn_8011CA3C(*(void **)((u8 *)lbl_803678C0+0x42C),t,lbl_803678C0);
fn_8011C9A8(*(void **)((u8 *)lbl_803678C0+0x424),1);
fn_8011C9A8(*(void **)((u8 *)lbl_803678C0+0x428),1);
Xml_Destroy(f,1);String_Destroy(&sp50,-1);String_Destroy(&sp5C,-1);
}
#pragma pop
void fn_800D8D94(void *arg0, void *arg1, void *arg2, s32 arg3)
{
    void String_Copy(void *, void *);
    void fn_800E5270(void *, void *, void *, s32);
    void String_Destroy(void *, s32);
    u32 sp14[3];
    u32 sp8[3];

    String_Copy(sp14, arg1);
    String_Copy(sp8, arg2);
    fn_800E5270(*(void **)((u8 *)arg0 + 0x10), sp14, sp8, arg3);
    String_Destroy(sp8, -1);
    String_Destroy(sp14, -1);
}

#pragma use_lmw_stmw on
#pragma cplusplus on
#pragma push
#pragma optimization_level 4
#pragma opt_lifetimes off
#pragma opt_propagation off
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
    void *Heap_Alloc(u32);
    void String_Assign(String *, String *, s32, s32);
    void String_AssignCStr(String *, char *, u32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void String_Init(String *, char *, void *);
    void *fn_800DE4F0(void *, void *, String *, String *);
    void fn_800DDAE0(void *, String *, String *);
    void *fn_800E6418(void *, void *, String *, String *, String *, String *);
    void fn_800E574C(void *, char *, s32, s32, s32, s32, f32);
    void fn_800E4E3C(void *);
    void fn_800E4B64(void *);
    s32 Unit_GetActor(void *);
    void *Map_Get(void);
    u32 strlen(const char *);
    extern char lbl_802711B0[];
    extern void *gGame;
    extern f32 lbl_80369E58;
    String str74, str68, str5C, str50, str44, str38, str2C, str20;
    void *alloc1C, *alloc18, *alloc14, *alloc10, *allocC, *alloc8;
    void *obj;
    void *self;
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
    String_Assign(&str74, (String *)(*(u8 **)((u8 *)self + 0x60) + arg1 * 0xC), 0, -1);
    ((Host *)*(void **)((u8 *)self + 4))->v6((char *)lbl_802711B0 + 0x18F, (char *)lbl_802711B0 + 0x195);
    ((Host *)*(void **)((u8 *)self + 4))->v6((char *)lbl_802711B0 + 0x19A, (char *)lbl_802711B0 + 0x1A0);
    String_AssignCStr(&str68, &lbl_802711B0[0x1A4], strlen((char *)lbl_802711B0 + 0x1A4));
    fn_800C99A0(&str68, &str74, 0, -1);
    fn_800C992C(&str68, &lbl_802711B0[0x18D], strlen((char *)lbl_802711B0 + 0x18D));
    fn_800C99A0(&str68, &str74, 0, -1);
    flag = 0;
    obj = Heap_Alloc(0x78);
    if (obj != NULL) {
        String_Init(&str5C, &lbl_802711B0[0x1A0], &alloc1C);
        flag = 1;
        obj = fn_800DE4F0(obj, *(void **)((u8 *)self + 4), &str5C, &str68);
    }
    if (flag != 0) {
        String_Destroy(&str5C, -1);
    }
    String_Init(&str50, &lbl_802711B0[0x1A9], &alloc18);
    fn_800DDAE0(obj, &str50, &str68);
    String_Destroy(&str50, -1);
    ((Host *)*(void **)((u8 *)self + 4))->v5(obj);
    made29 = 0;
    made28 = 0;
    made27 = 0;
    made26 = 0;
    obj = Heap_Alloc(0x118);
    if (obj != NULL) {
        String_Init(&str44, &lbl_802711B0[0x1AF], &alloc14);
        made29 = 1;
        String_Init(&str38, &lbl_802711B0[0x1A0], &alloc10);
        made28 = 1;
        String_Init(&str2C, &lbl_802711B0[0x195], &allocC);
        made27 = 1;
        String_Init(&str20, &lbl_802711B0[0x18F], &alloc8);
        made26 = 1;
        obj = fn_800E6418(obj, *(void **)((u8 *)self + 4), &str20, &str2C, &str38, &str44);
    }
    if (made26 != 0) {
        String_Destroy(&str20, -1);
    }
    if (made27 != 0) {
        String_Destroy(&str2C, -1);
    }
    if (made28 != 0) {
        String_Destroy(&str38, -1);
    }
    if (made29 != 0) {
        String_Destroy(&str44, -1);
    }
    ((Widget *)obj)->v11(*(f32 *)((u8 *)gGame + 0x24), *(f32 *)((u8 *)gGame + 0x28), *(f32 *)((u8 *)gGame + 0x2C));
    fn_800E574C(obj, (char *)lbl_802711B0 + 0x1A9, 1, 0, 0, 0xA, lbl_80369E58);
    fn_800E4E3C(obj);
    fn_800E4B64(obj);
    ((Host *)*(void **)((u8 *)self + 4))->v5(obj);
    self = Map_Get();
    if (self != NULL) {
        *(s32 *)((u8 *)self + 0x34) = Unit_GetActor(obj);
    }
    String_Destroy(&str68, -1);
    String_Destroy(&str74, -1);
}
#pragma pop
#pragma opt_common_subs off
extern "C" void fn_800D9188(void *arg0, s32 arg1) {
void fn_800E5698(void *,void *); void String_Assign(void *,void *,s32,s32); void String_Destroy(void *,s32);
void *String_CStr(void *); void String_Init(void *,void *,void *); void fn_80116760(void *,void *);
void String_AssignCStr(void *,void *,u32); u32 strlen(void *); void fn_800C99A0(void *,void *,s32,s32);
void fn_800C992C(void *,void *,u32); void fn_800E8154(void *,void *); void fn_801167BC(void *,void *);
void fn_800E4E5C(void *);void fn_800E4D24(void *);void fn_800E4BA4(void *,s32);void fn_800E4B84(void *);void fn_800E4B44(void *);
void *Unit_GetActor(void *);void fn_8008CDE0(void *,s32);extern u8 lbl_802711B0[];
u32 s30[3],s24[3],s18[3],sc[3],tag;
struct Parent {u8 pad[16];virtual void v0();virtual void v1();virtual void *v2(void *,void *);virtual void v3();virtual void v4();virtual void v5();virtual void v6(void *,void *);};
void *obj; void *self=arg0;
s30[1]=0;s24[1]=0;s30[0]=0;s30[2]=0;s30[1]=0;s24[0]=0;s24[2]=0;s24[1]=0;
if(!M2C_FIELD(self,void **,0x10)){String_Destroy(s24,-1);String_Destroy(s30,-1);return;}
if(M2C_FIELD(self,void **,0x18)){
fn_800E5698(s18,M2C_FIELD(self,void **,0x18));String_Assign(s30,s18,0,-1);String_Destroy(s18,-1);
((Parent *)M2C_FIELD(self,void **,4))->v6(lbl_802711B0+0x1c8,String_CStr(s30));
}
obj=M2C_FIELD(self,void **,4);
((Parent *)obj)->v6(lbl_802711B0+0x18f,lbl_802711B0+0x1cf);
if(M2C_FIELD(self,void **,0x18)){
((Parent *)M2C_FIELD(self,void **,4))->v6(lbl_802711B0+0x19a,String_CStr(s30));
}
if(!arg1){String_Init(sc,lbl_802711B0+0x1d7,&tag);fn_80116760(M2C_FIELD(self,void **,16),sc);String_Destroy(sc,-1);M2C_FIELD(self,void **,24)=0;String_Destroy(s24,-1);String_Destroy(s30,-1);return;}
String_Assign(s30,M2C_FIELD(self,u8 **,0x48)+arg1*12,0,-1);
String_AssignCStr(s24,lbl_802711B0+0x1da,strlen(lbl_802711B0+0x1da));
fn_800C99A0(s24,s30,0,-1);fn_800C992C(s24,lbl_802711B0+0x1df,strlen(lbl_802711B0+0x1df));
fn_800E8154(M2C_FIELD(self,void **,4),s24);
M2C_FIELD(self,void **,24)=((Parent *)M2C_FIELD(self,void **,4))->v2(lbl_802711B0+0x1c8,String_CStr(s30));
fn_801167BC(M2C_FIELD(self,void **,16),M2C_FIELD(self,void **,24));
if(M2C_FIELD(self,u8 *,0x88))fn_800E4E5C(M2C_FIELD(self,void **,24));
fn_800E4D24(M2C_FIELD(self,void **,24));fn_800E4BA4(M2C_FIELD(self,void **,24),255);fn_800E4B84(M2C_FIELD(self,void **,24));fn_800E4B44(M2C_FIELD(self,void **,24));
if(Unit_GetActor(M2C_FIELD(self,void **,24)))fn_8008CDE0(Unit_GetActor(M2C_FIELD(self,void **,24)),0);
String_Destroy(s24,-1);String_Destroy(s30,-1);
}
#pragma push
#pragma optimization_level 4
extern "C" void fn_800D9458(s32 arg0,u32 arg1,s32 arg2) {
#pragma opt_common_subs off
void fn_8005BCAC();void fn_8005C7E8(u32);void *Heap_Alloc(s32);
char *String_CStr(void *);void String_AssignCStr(void *,void *,u32);void String_Assign(void *,void *,s32,s32);
void String_Destroy(void *,s32);void String_Init(void *,void *,void *);void String_Copy(void *,void *);
void String_Concat(void *,void *,void *);void String_ConcatCStr(void *,void *,void *);
u32 fn_800D9804(void *,void *,void *);void fn_800E4B44(void *);void fn_800E4B84(void *);void fn_800E4BA4(void *,s32);void fn_800E4D24(void *);void fn_800E4E5C(void *);
void fn_800E78B0(void *,void *);void fn_800E8154(void *,void *);void Actor_LoadXml(void *,void *);void fn_80113030(void *,s32,void *,void *);void fn_801167BC(void *,void *);
void *fn_80117A94(void *,void *,void *,void *,s32,s32);void *fn_801992F8(void *);u32 strlen(void *);
extern u8 lbl_802711B0[];extern const f32 lbl_80369E34,lbl_80369E5C;
struct Parent {u8 pad[16];virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5(void *);virtual void v6(void *,void *);};
struct Child {u8 pad[64];virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9(f32,f32,f32);};
u32 s90[3],s84[3],s78[3],s6c[3],s60[3],s54[3],s48[3],s3c[3],s30[3],s24[3],s18[3];
u32 a14,a10,ac,a8;

s8 flag1,flag2;
struct {u32 value;} selected;
selected.value=arg1;
s90[1]=0;s84[1]=0;s90[0]=0;s90[2]=0;s90[1]=0;s84[0]=0;s84[2]=0;s84[1]=0;
((u8 *)arg0)[0x88]=arg2;
((Parent *)M2C_FIELD(((u8 *)arg0),void **,4))->v6(lbl_802711B0+0x18f,lbl_802711B0+0x1e4);
((Parent *)M2C_FIELD(((u8 *)arg0),void **,4))->v6(lbl_802711B0+0x19a,String_CStr(((u8 *)arg0)+0x70));
M2C_FIELD(((u8 *)arg0),void **,0x10)=0;
String_Assign(((u8 *)arg0)+0x70,M2C_FIELD(((u8 *)arg0),u8 **,0x3c)+selected.value*12,0,-1);
if(M2C_FIELD(((u8 *)arg0),void **,0x18)){
selected.value=(s32)fn_801992F8(M2C_FIELD(((u8 *)arg0),void **,0x18));
String_AssignCStr(s84,(void *)selected.value,strlen((void *)selected.value));
}else String_AssignCStr(s84,lbl_802711B0+0x1d7,strlen(lbl_802711B0+0x1d7));
fn_800E78B0(M2C_FIELD(((u8 *)arg0),void **,4),s84);
selected.value=(s32)M2C_FIELD(((u8 *)arg0),void **,0x8c);
M2C_FIELD(((u8 *)arg0),u32 *,0x8c)=fn_800D9804(((u8 *)arg0),((u8 *)arg0)+0x70,M2C_FIELD(((u8 *)arg0),void **,0x18));
if(selected.value){fn_8005C7E8((u32)selected.value);fn_8005BCAC();}
String_Init(s78,lbl_802711B0+0x189,&a14);
String_Concat(s6c,s78,((u8 *)arg0)+0x70);String_ConcatCStr(s60,s6c,lbl_802711B0+0x1df);
String_Assign(s90,s60,0,-1);String_Destroy(s60,-1);String_Destroy(s6c,-1);
fn_800E8154(M2C_FIELD(((u8 *)arg0),void **,4),s90);
flag1=0;flag2=0;
selected.value=(s32)Heap_Alloc(0x1d8);
if(selected.value){String_Copy(s54,((u8 *)arg0)+0x70);flag1=1;String_Init(s48,lbl_802711B0+0x1e4,&a10);flag2=1;selected.value=(s32)fn_80117A94((void *)selected.value,M2C_FIELD(((u8 *)arg0),void **,4),s48,s54,0,0);}
M2C_FIELD(((u8 *)arg0),void **,0x10)=(void *)selected.value;
if(flag2)String_Destroy(s48,-1);
if(flag1)String_Destroy(s54,-1);
String_Concat(s3c,s78,((u8 *)arg0)+0x70);String_ConcatCStr(s30,s3c,lbl_802711B0+0x1eb);
Actor_LoadXml(M2C_FIELD(((u8 *)arg0),void **,0x10),s30);String_Destroy(s30,-1);String_Destroy(s3c,-1);
String_Init(s24,lbl_802711B0+0x129,&ac);String_Init(s18,lbl_802711B0+0x129,&a8);
fn_80113030(M2C_FIELD(((u8 *)arg0),void **,0x10),0,s24,s18);String_Destroy(s18,-1);String_Destroy(s24,-1);
((Child *)M2C_FIELD(((u8 *)arg0),void **,0x10))->v9(lbl_80369E34,lbl_80369E5C,lbl_80369E34);
((Parent *)M2C_FIELD(((u8 *)arg0),void **,4))->v5(M2C_FIELD(((u8 *)arg0),void **,0x10));
if(M2C_FIELD(((u8 *)arg0),void **,0x18))fn_801167BC(M2C_FIELD(((u8 *)arg0),void **,0x10),M2C_FIELD(((u8 *)arg0),void **,0x18));
if((u8)arg2)fn_800E4E5C(M2C_FIELD(((u8 *)arg0),void **,0x10));
fn_800E4D24(M2C_FIELD(((u8 *)arg0),void **,0x10));fn_800E4BA4(M2C_FIELD(((u8 *)arg0),void **,0x10),255);fn_800E4B84(M2C_FIELD(((u8 *)arg0),void **,0x10));fn_800E4B44(M2C_FIELD(((u8 *)arg0),void **,0x10));
String_Destroy(s78,-1);String_Destroy(s84,-1);String_Destroy(s90,-1);
}
#pragma pop

#pragma cplusplus reset
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
s32 fn_800D9804(void *arg0, s32 arg1, u32 arg2) {
#pragma opt_common_subs off
    u16 FileCache_Probe(const char *);
    s32 FileCache_Load(const char *);
    char *String_CStr(String *);
    void String_AssignCStr(String *, char *, u32);
    void String_Assign(String *, String *, s32, s32);
    void String_Destroy(String *, s32);
    void String_Concat(String *, String *, void *);
    void String_ConcatCStr(String *, String *, char *);
    void String_JoinCStr(String *, char *, s32);
    char *fn_801992F8(u32);
    u32 strlen(const char *);
    extern char lbl_802711B0[];

    struct Result { s32 value; } ret;
    char *p;
    String result;
    String name;
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
        String_AssignCStr(&result, p, strlen(p));
    } else {
        String_AssignCStr(&result, &lbl_802711B0[0x1D7], strlen(&lbl_802711B0[0x1D7]));
    }

    {
        String a, b, c, d, e, f;
        String_JoinCStr(&a, &lbl_802711B0[0x189], path);
        String_ConcatCStr(&b, &a, &lbl_802711B0[0x18D]);
        String_Concat(&c, &b, (void *)path);
        String_ConcatCStr(&d, &c, &lbl_802711B0[0x1F4]);
        String_Concat(&e, &d, &result);
        String_ConcatCStr(&f, &e, &lbl_802711B0[0x1F6]);
        String_Assign(&name, &f, 0, -1);
        String_Destroy(&f, -1);
        String_Destroy(&e, -1);
        String_Destroy(&d, -1);
        String_Destroy(&c, -1);
        String_Destroy(&b, -1);
        String_Destroy(&a, -1);
    }
    if ((u16)FileCache_Probe(String_CStr(&name)) != 0x8000) {
        ret.value = FileCache_Load(String_CStr(&name));
        String_Destroy(&name, -1);
        String_Destroy(&result, -1);
        return ret.value;
    }

    {
        String a, b, c, d, e, f;
        String_JoinCStr(&a, &lbl_802711B0[0x189], path);
        String_ConcatCStr(&b, &a, &lbl_802711B0[0x18D]);
        String_Concat(&c, &b, (void *)path);
        String_ConcatCStr(&d, &c, &lbl_802711B0[0x1F4]);
        String_Concat(&e, &d, &result);
        String_ConcatCStr(&f, &e, &lbl_802711B0[0x1FB]);
        String_Assign(&name, &f, 0, -1);
        String_Destroy(&f, -1);
        String_Destroy(&e, -1);
        String_Destroy(&d, -1);
        String_Destroy(&c, -1);
        String_Destroy(&b, -1);
        String_Destroy(&a, -1);
    }
    if ((u16)FileCache_Probe(String_CStr(&name)) != 0x8000) {
        ret.value = FileCache_Load(String_CStr(&name));
        String_Destroy(&name, -1);
        String_Destroy(&result, -1);
        return ret.value;
    }

    String_Destroy(&name, -1);
    String_Destroy(&result, -1);
    return 0;
}

#pragma push
#pragma opt_common_subs off
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
    void *Heap_Alloc(u32);
    void String_AssignCStr(String *, char *, u32);
    void String_Assign(String *, void *, s32, s32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void String_Init(String *, char *, void *);
    void fn_800C9BC4(void *, void *, s32, void **);
    void String_ConcatCStr(String *, String *, char *);
    void fn_800D58C0(void *);
    void *fn_800D7060(void *, void *, s32, s32);
    void fn_800D7540(void *);
    void fn_800D7564(void *);
    void *PreviewWin_Create(void *, void *, s32, s32);
    void *fn_800D7E24(void *, void *, s32, s32);
    void fn_800D83B0(void *, String *);
    void fn_800D85CC(void *, String *);
    void fn_800D8928(void *, String *);
    void fn_800D8B14(void *, String *);
    void fn_800E8154(void *, String *);
    void *fn_800E8504(void *, s32, String *);
    void *fn_800ECF40(void *, void *, s32, s32);
    void *Win3_Create(void *, void *, s32, s32);
    void *TagWin_Create(void *, void *, s32, s32);
    void *fn_80108788(void *, void *, s32, s32);
    void *fn_80108A18(void *, void *, s32, s32);
    void *BgWin_Create(void *, void *, s32, s32);
    void *fn_801513EC(void *, void *, s32, s32);
    void *BattleTerrain_Create(void *, void *, String *, String *);
    void *fn_801BEF90(void *);
    void fn_801C77A4(void);
    u32 strlen(const char *);
    extern char lbl_802711B0[];
    extern void *lbl_80367898;
    extern void *gPreviewWin;
    extern void *lbl_803678A8;
    extern s8 lbl_803678BC;
    extern s8 lbl_803678BF;
    extern void *lbl_803678C0;
    extern void *gWin3;
    extern void *lbl_80367918;
    extern void *lbl_803679C8;
    extern void *lbl_803679D0;
    extern void *gBgWin;
    extern void *lbl_80367BA0;
    extern void *gGame;

    String sp98, sp8C, sp80, sp74, sp68, sp5C, sp50, sp44, sp38, sp2C;
    String sp20;
    String sp14;
    void *scratch10, *scratchC, *scratch8;
    void *tmp;
    s8 made;
    void *entry;

    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(s32 *)((u8 *)arg0 + 0x4C) = 0;
    *(s32 *)((u8 *)arg0 + 0x50) = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = 0;
    *(s32 *)((u8 *)arg0 + 0x58) = 0;
    *(s32 *)((u8 *)arg0 + 0x5C) = 0;
    *(s32 *)((u8 *)arg0 + 0x60) = 0;
    *(s32 *)((u8 *)arg0 + 0x64) = 0;
    *(s32 *)((u8 *)arg0 + 0x68) = 0;
    *(s32 *)((u8 *)arg0 + 0x6C) = 0;
    *(s32 *)((u8 *)arg0 + 0x70) = 0;
    *(s32 *)((u8 *)arg0 + 0x74) = 0;
    *(s32 *)((u8 *)arg0 + 0x78) = 0;
    *(s32 *)((u8 *)arg0 + 0x74) = 0;
    *(s32 *)((u8 *)arg0 + 0x7C) = 0;
    *(s32 *)((u8 *)arg0 + 0x80) = 0;
    *(s32 *)((u8 *)arg0 + 0x84) = 0;
    *(s32 *)((u8 *)arg0 + 0x80) = 0;
    String_Init(&sp98, lbl_802711B0 + 0x12A, &scratch10);
    String_Init(&sp8C, lbl_802711B0 + 0x200, &scratchC);
    fn_800408A8(1);
    fn_8004084C();
    fn_800D58C0(arg0);
    made = 0;
    tmp = Heap_Alloc(0x48);
    if (tmp != NULL) {
        String_ConcatCStr(&sp80, &sp98, lbl_802711B0 + 0x207);
        made = 1;
        tmp = fn_800E8504(tmp, 0, &sp80);
    }
    *(void **)((u8 *)arg0 + 4) = tmp;
    if (made != 0) {
        String_Destroy(&sp80, -1);
    }
    String_ConcatCStr(&sp74, &sp8C, lbl_802711B0 + 0x212);
    fn_800E8154(*(void **)((u8 *)arg0 + 4), &sp74);
    String_Destroy(&sp74, -1);
    String_ConcatCStr(&sp68, &sp98, lbl_802711B0 + 0x21E);
    fn_800E8154(*(void **)((u8 *)arg0 + 4), &sp68);
    String_Destroy(&sp68, -1);

    tmp = Heap_Alloc(0x440);
    if (tmp != NULL) {
        tmp = PreviewWin_Create(tmp, *(void **)((u8 *)arg0 + 4), 0x10, 8);
    }
    gPreviewWin = tmp;
    tmp = Heap_Alloc(0x434);
    if (tmp != NULL) {
        tmp = fn_800D7060(tmp, *(void **)((u8 *)arg0 + 4), 0x14, 0x3C);
    }
    lbl_80367898 = tmp;
    tmp = Heap_Alloc(0x434);
    if (tmp != NULL) {
        tmp = fn_800D7E24(tmp, *(void **)((u8 *)arg0 + 4), 0x14, 0x3C);
    }
    lbl_803678A8 = tmp;
    tmp = Heap_Alloc(0x454);
    if (tmp != NULL) {
        tmp = Win3_Create(tmp, *(void **)((u8 *)arg0 + 4), 0xC8, 0x154);
    }
    gWin3 = tmp;
    tmp = Heap_Alloc(0x430);
    if (tmp != NULL) {
        tmp = TagWin_Create(tmp, *(void **)((u8 *)arg0 + 4), 0xC8, 0x64);
    }
    lbl_80367918 = tmp;
    tmp = Heap_Alloc(0x490);
    if (tmp != NULL) {
        tmp = fn_800ECF40(tmp, *(void **)((u8 *)arg0 + 4), 0x3C, 0x50);
    }
    lbl_803678C0 = tmp;
    tmp = Heap_Alloc(0x430);
    if (tmp != NULL) {
        tmp = fn_80108788(tmp, *(void **)((u8 *)arg0 + 4), 0x28, 0x50);
    }
    lbl_803679C8 = tmp;
    tmp = Heap_Alloc(0x430);
    if (tmp != NULL) {
        tmp = fn_80108A18(tmp, *(void **)((u8 *)arg0 + 4), 0x3C, 0x64);
    }
    lbl_803679D0 = tmp;
    tmp = Heap_Alloc(0x438);
    if (tmp != NULL) {
        tmp = BgWin_Create(tmp, *(void **)((u8 *)arg0 + 4), 0x28, 0x50);
    }
    gBgWin = tmp;
    tmp = Heap_Alloc(0x430);
    if (tmp != NULL) {
        tmp = fn_801513EC(tmp, *(void **)((u8 *)arg0 + 4), 0x28, 0x50);
    }
    lbl_80367BA0 = tmp;

    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &gPreviewWin);
    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &lbl_80367898);
    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &lbl_803678A8);
    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &gWin3);
    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &lbl_80367918);
    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &lbl_803678C0);
    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &lbl_803679C8);
    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &lbl_803679D0);
    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &gBgWin);
    fn_800C9BC4((u8 *)arg0 + 0x1C, (u8 *)*(void **)((u8 *)arg0 + 0x24) + (*(s32 *)((u8 *)arg0 + 0x20) << 2), 1, &lbl_80367BA0);

    *(s32 *)((u8 *)arg0 + 0x28) = *(s32 *)((u8 *)arg0 + 0x20);
    *(void **)((u8 *)arg0 + 0x30) = NULL;
    *(s32 *)((u8 *)arg0 + 0x2C) = -1;
    if (*(void **)((u8 *)arg0 + 0x30) != NULL) {
        fn_800D7540(*(void **)((u8 *)arg0 + 0x30));
    }
    *(void **)((u8 *)arg0 + 0x30) = NULL;
    for (s32 idx = *(s32 *)((u8 *)arg0 + 0x2C) + 1; *(void **)((u8 *)arg0 + 0x30) == NULL; idx += 1) {
        if (idx >= *(s32 *)((u8 *)arg0 + 0x28)) {
            idx = 0;
        }
        entry = ((void **)*(void **)((u8 *)arg0 + 0x24))[idx];
        if (*(u8 *)((u8 *)entry + 0x420) != 0) {
            *(void **)((u8 *)arg0 + 0x30) = entry;
            fn_800D7564(*(void **)((u8 *)arg0 + 0x30));
            *(s32 *)((u8 *)arg0 + 0x2C) = idx;
        }
    }

    tmp = Heap_Alloc(0x1C8);
    if (tmp != NULL) {
        tmp = fn_801BEF90(tmp);
    }
    gGame = tmp;
    String_ConcatCStr(&sp5C, &sp98, lbl_802711B0 + 0x22C);
    fn_800D8B14(arg0, &sp5C);
    String_Destroy(&sp5C, -1);
    String_AssignCStr((String *)((u8 *)arg0 + 0x70), lbl_802711B0 + 0x129, strlen(lbl_802711B0 + 0x129));
    String_ConcatCStr(&sp50, &sp98, lbl_802711B0 + 0x23A);
    fn_800D8928(arg0, &sp50);
    String_Destroy(&sp50, -1);
    String_ConcatCStr(&sp44, &sp98, lbl_802711B0 + 0x249);
    fn_800D85CC(arg0, &sp44);
    String_Destroy(&sp44, -1);
    String_ConcatCStr(&sp38, &sp98, lbl_802711B0 + 0x254);
    fn_800D83B0(arg0, &sp38);
    String_Destroy(&sp38, -1);

    sp14.cap = 0;
    sp20.cap = 0;
    sp14.size = 0;
    sp14.data = 0;
    sp14.cap = 0;
    sp20.size = 0;
    sp20.data = 0;
    sp20.cap = 0;
    String_Assign(&sp14, *(void **)((u8 *)arg0 + 0x54), 0, -1);
    ((Host *)*(void **)((u8 *)arg0 + 4))->v6(lbl_802711B0 + 0x1B7, lbl_802711B0 + 0x1C5);
    String_AssignCStr(&sp20, lbl_802711B0 + 0x1A4, strlen(lbl_802711B0 + 0x1A4));
    fn_800C99A0(&sp20, &sp14, 0, -1);
    fn_800C992C(&sp20, lbl_802711B0 + 0x18D, strlen(lbl_802711B0 + 0x18D));
    {
        s8 made2;
        void *tmp2;
        made2 = 0;
        tmp2 = Heap_Alloc(0x54);
        if (tmp2 != NULL) {
            String_Init(&sp2C, lbl_802711B0 + 0x1C5, &scratch8);
            made2 = 1;
            tmp2 = BattleTerrain_Create(tmp2, *(void **)((u8 *)arg0 + 4), &sp2C, &sp20);
        }
        if (made2 != 0) {
            String_Destroy(&sp2C, -1);
        }
        ((Host *)*(void **)((u8 *)arg0 + 4))->v5(tmp2);
    }
    String_Destroy(&sp20, -1);
    String_Destroy(&sp14, -1);
    lbl_803678BF = 1;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    String_AssignCStr((String *)((u8 *)arg0 + 0x7C), lbl_802711B0 + 0xEB, strlen(lbl_802711B0 + 0xEB));
    *(u8 *)((u8 *)arg0 + 0x88) = 0;
    *(u8 *)((u8 *)arg0 + 0x89) = 0;
    lbl_803678BC = 0;
    *(s32 *)((u8 *)arg0 + 0x8C) = 0;
    fn_801C77A4();
    String_Destroy(&sp8C, -1);
    String_Destroy(&sp98, -1);
    return arg0;
}
#pragma cplusplus off
#pragma pop

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

#pragma global_optimizer off
void fn_800DA368(void) {
 extern void *lbl_803678B8;
 extern char lbl_802711B0[];
 u32 strlen(const char*);
 void String_AssignCStr(void*,const char*,u32);
 void fn_800C99A0(void*,void*,s32,s32);
 void fn_800C992C(void*,const char*,u32);
 char *String_CStr(void*);
 void *File_Open(const char*,const char*);
 void File_Close(void*);
 s32 fn_800E5068(void*);
 void *fn_800E5070(void*,s32);
 s32 fn_801FFD00(void*,const char*,...);
 void *String_Destroy(void*,s16);
 String path;
 u8 *self;
 s32 i;
 void *file;
 s32 count;
 u8 *entry;
 s32 field;
 char *name,*value;
 self=(u8*)lbl_803678B8;
 path.cap=0;path.size=0;path.data=0;path.cap=0;
 String_AssignCStr(&path,lbl_802711B0+0x12A,strlen(lbl_802711B0+0x12A));
 fn_800C99A0(&path,self+0x70,0,-1);
 fn_800C992C(&path,lbl_802711B0+0x130,strlen(lbl_802711B0+0x130));
 file=File_Open(String_CStr(&path),lbl_802711B0+0x139);
 if(!file){String_Destroy(&path,-1);return;}
 count=fn_800E5068(*(void**)(self+0x10));
 for(i=0;i<count;i++) {
 entry=(u8*)fn_800E5070(*(void**)(self+0x10),i);
 name=String_CStr(entry);
 value=String_CStr(entry+0xC);
 field=*(s32*)(entry+0x18);
 fn_801FFD00(file,lbl_802711B0+0x13B);
 fn_801FFD00(file,lbl_802711B0+0x13D);
 fn_801FFD00(file,lbl_802711B0+0x140);
 fn_801FFD00(file,lbl_802711B0+0x153,name);
 fn_801FFD00(file,lbl_802711B0+0x15E,value);
 fn_801FFD00(file,lbl_802711B0+0x16B,field);
 fn_801FFD00(file,lbl_802711B0+0x177);
 }
 fn_801FFD00(file,lbl_802711B0+0x17B);
 File_Close(file);
 String_Destroy(&path,-1);
}
#pragma global_optimizer on
void fn_800DA530(void *arg0, void *arg1, s32 arg2)
{
    extern void *lbl_803678B8;

    extern void String_Copy(void *, void *);
    extern void fn_800D8D94(void *, void *, void *, s32);
    extern void String_Destroy(void *, s32);

    u32 temp1[3];
    u32 temp2[3];

    String_Copy(temp1, arg0);
    String_Copy(temp2, arg1);

    fn_800D8D94(lbl_803678B8, temp1, temp2, arg2);

    String_Destroy(temp2, -1);
    String_Destroy(temp1, -1);
}

void fn_800DA5AC(void *arg0, s32 arg1) {
    extern void *gGame;
    extern void *lbl_803678B8;
    void Actor_LoadAnim(void *, void *, s32, s32, s32);
    void fn_801167BC(void *, s32);
    void *obj;

    obj = lbl_803678B8;
    Actor_LoadAnim(*(void **)((u8 *)obj + 0x10), arg0, *(s32 *)((u8 *)gGame + 0x180), arg1, 1);
    fn_801167BC(*(void **)((u8 *)obj + 0x10), 0);
}

s32 fn_800DA5FC(void) {
    extern void *lbl_803678B8;
    return M2C_FIELD(lbl_803678B8, s32 *, 0x10);
}

#pragma cplusplus on
extern "C" void fn_800DA608(s32 arg0) {
    void *Heap_Alloc(u32);
    void *String_Init(void *, char *, void *);
    void *String_Destroy(void *, s16);
    void String_Assign(String *, String *, s32, s32);
    void *fn_80151D50(void *, void *, void *, void *, void *, void *, s32);
    extern void *lbl_803678B8;
    extern char lbl_802711B0[];
    extern f32 lbl_80369E34;
    class Host {
    public:
        u8 pad[0x10];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void add(void *);
    };
    union Vector {
        struct { f32 x, y, z; } f;
        u32 words[3];
    };
    String type;
    Vector b, copyB, a, copyA;
    String name;
    s32 scratch;
    void *obj;
    void *self;
    s8 made;

    self = lbl_803678B8;
    name.cap = 0;
    name.size = 0;
    name.data = 0;
    name.cap = 0;
    String_Assign(&name, (String *)(*(u8 **)((u8 *)self + 0x6C) + arg0 * 0xC), 0, -1);
    made = 0;
    obj = Heap_Alloc(0xC8);
    if (obj) {
        a.f.x = a.f.y = a.f.z = lbl_80369E34;
        b.f.x = b.f.y = b.f.z = lbl_80369E34;
        copyA.words[0] = a.words[0];
        copyA.words[1] = a.words[1];
        copyA.words[2] = a.words[2];
        copyB.words[0] = b.words[0];
        copyB.words[1] = b.words[1];
        copyB.words[2] = b.words[2];
        String_Init(&type, lbl_802711B0 + 0x17F, &scratch);
        made = 1;
        obj = fn_80151D50(obj, *(void **)((u8 *)self + 4), &type, &name, &copyB, &copyA, 0);
    }
    ((Host *)*(void **)((u8 *)self + 4))->add(obj);
    if (made)
        String_Destroy(&type, -1);
    String_Destroy(&name, -1);
}
  #pragma cplusplus reset
  
#pragma global_optimizer off
void fn_800DA748(s32 arg0)
{
    extern void *lbl_803678B8;
    extern char lbl_802711B0[];
    extern char *lbl_8028DE60[];
    s32 String_Compare(String *, u32, u32, char *, u32);
    void String_AssignCStr(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void fn_800C992C(String *, char *, u32);
    char *String_CStr(String *);
    void fn_800E5044(void *, char *);
    void String_Destroy(String *, s32);
    u32 strlen(const char *);
    String str;
    void *self;
    char *name;
    u32 n;

    str.cap = 0;
    self = lbl_803678B8;
    str.size = 0;
    str.data = 0;
    str.cap = 0;
    if (*(void **)((u8 *)self + 0x10) != 0) {
        n = strlen(lbl_802711B0 + 0x184);
        if (String_Compare((String *)((u8 *)self + 0x70), 0, *(u32 *)((u8 *)self + 0x70),
                           lbl_802711B0 + 0x184, n) == 0) {
            String_AssignCStr(&str, lbl_802711B0 + 0x189, strlen(lbl_802711B0 + 0x189));
            fn_800C99A0(&str, (String *)((u8 *)self + 0x70), 0, -1);
            fn_800C992C(&str, lbl_802711B0 + 0x18D, strlen(lbl_802711B0 + 0x18D));
            fn_800C99A0(&str, (String *)((u8 *)self + 0x70), 0, -1);
            name = lbl_8028DE60[arg0];
            fn_800C992C(&str, name, strlen(name));
            fn_800E5044(*(void **)((u8 *)self + 0x10), String_CStr(&str));
        }
    }
    String_Destroy(&str, -1);
}

#pragma cplusplus on
extern "C" void fn_800DA894(s32 index, s32 arg1) {
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
    void *Heap_Alloc(u32);
    String *String_Assign(String *, void *, s32, s32);
    void String_AssignCStr(String *, char *, u32);
    void fn_800C992C(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void *String_Init(String *, char *, void *);
    void *String_Destroy(String *, s32);
    void *BattleTerrain_Create(void *, void *, String *, String *);
    void fn_800D8E14(void *, s32);
    u32 strlen(const char *);
    extern char lbl_802711B0[];
    extern void *lbl_803678B8;

    String sp24;
    String sp18;
    String spC;
    void *scratch;
    void *self;
    void *tmp;
    s8 made;

    self = lbl_803678B8;
    spC.cap = 0;
    sp18.cap = 0;
    spC.size = 0;
    spC.data = 0;
    spC.cap = 0;
    sp18.size = 0;
    sp18.data = 0;
    sp18.cap = 0;

    String_Assign(&spC, (u8 *)*(void **)((u8 *)self + 0x54) + index * 0xC, 0, -1);
    ((Host *)*(void **)((u8 *)self + 4))->v6(lbl_802711B0 + 0x1B7, lbl_802711B0 + 0x1C5);
    String_AssignCStr(&sp18, lbl_802711B0 + 0x1A4, strlen(lbl_802711B0 + 0x1A4));
    fn_800C99A0(&sp18, &spC, 0, -1);
    fn_800C992C(&sp18, lbl_802711B0 + 0x18D, strlen(lbl_802711B0 + 0x18D));
    made = 0;
    tmp = Heap_Alloc(0x54);
    if (tmp) {
        String_Init(&sp24, lbl_802711B0 + 0x1C5, &scratch);
        made = 1;
        tmp = BattleTerrain_Create(tmp, *(void **)((u8 *)self + 4), &sp24, &sp18);
    }
    if (made) {
        String_Destroy(&sp24, -1);
    }
    ((Host *)*(void **)((u8 *)self + 4))->v5(tmp);
    String_Destroy(&sp18, -1);
    String_Destroy(&spC, -1);
    fn_800D8E14(lbl_803678B8, arg1);
}
#pragma cplusplus reset

#pragma global_optimizer on

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
    void String_Copy(void *, void *);

    String_Copy(arg0, *(u8 **)(arg1 + 0x48) + arg2 * 0xC);
}

void fn_800DAAC0(s32 arg0, s32 arg1) {
    fn_800D9458(lbl_803678B8, arg0, arg1);
}

String fn_800DAAF0(s32 arg1) {
    String fn_800DAB24(s32, s32);
    return fn_800DAB24(lbl_803678B8, arg1);
}

void fn_800DAB24(void *arg0, void *arg1, s32 arg2) {
    void String_Copy(void *, void *);

    String_Copy(arg0, *(u8 **)((u8 *)arg1 + 0x3C) + arg2 * 0xC);
}

#pragma cplusplus on
#pragma opt_common_subs off
extern "C" void fn_800DAB50(void *proc) {
    struct Host {
        u8 pad[0x10];
        virtual void v0();
        virtual void v1(s32);
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5(void *);
        virtual void v6(const char *, const char *);
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
    extern s8 lbl_803678BE;
    extern char lbl_802711B0[];
    extern void *gWin3, *gGame, *gPadInput;
    extern u8 gBattleReplayActive;
    void *Heap_Alloc(u32); void Heap_Free(void *);
    void String_Assign(String *, void *, s32, s32);
    void String_AssignCStr(String *, char *, u32);
    void fn_800C99A0(String *, String *, s32, s32);
    void fn_800C992C(String *, char *, u32);
    void String_Init(String *, char *, void *);
    void *BattleTerrain_Create(void *, void *, String *, String *);
    u32 strlen(const char *);
    void Process_Goto(void *, s32); void Process_ClearFunc(void *);
    void fn_801C777C(void); void fn_801C77A4(void);
    void fn_800ED960(void *, s32);
    void fn_800D74FC(void *); void fn_800D7540(void *); void fn_800D7564(void *);
    u8 fn_800E7C80(void *); void fn_800D8030(void *);
    u8 fn_800E5248(void *, s32); s32 fn_8011654C(void *); s32 fn_80116580(void *);
    void fn_80113BA0(void *); void LightFade_Start(void);
    void fn_8005C7E8(void *); void fn_800D5894(void *); void fn_80040854(s32); void fn_800CA6C8(void *, s32);

    if ((u8)lbl_803678BC != 0) {
        ((Host *)*(void **)((u8 *)(void *)lbl_803678B8 + 4))->v6(lbl_802711B0 + 0x1B7, lbl_802711B0 + 0x1C5);
        fn_801C777C();
        Process_Goto(proc, 1);
        if ((u8)lbl_803678BD == 0)
            lbl_803678BC = 0;
    } else if ((u8)lbl_803678BE != 0) {
        ((Host *)*(void **)((u8 *)(void *)lbl_803678B8 + 4))->v6(lbl_802711B0 + 0x1B7, lbl_802711B0 + 0x1C5);
        Process_Goto(proc, 2);
        lbl_803678BE = 0;
    } else {
        String sp24, sp18, spC;
        void *scratch;
        void *entry;
        s32 idx;
        void *tmp;
        s8 made;
        u8 *self;

        if ((u8)lbl_803678BF == 0) {
            fn_801C77A4();
            self = (u8 *)(void *)lbl_803678B8;
            spC.cap = 0;
            sp18.cap = 0;
            spC.size = 0;
            spC.data = 0;
            spC.cap = 0;
            sp18.size = 0;
            sp18.data = 0;
            sp18.cap = 0;
            String_Assign(&spC, *(void **)(self + 0x54), 0, -1);
            ((Host *)*(void **)(self + 4))->v6(lbl_802711B0 + 0x1B7, lbl_802711B0 + 0x1C5);
            String_AssignCStr(&sp18, &lbl_802711B0[0x1A4], strlen((char *)lbl_802711B0 + 0x1A4));
            fn_800C99A0(&sp18, &spC, 0, -1);
            fn_800C992C(&sp18, &lbl_802711B0[0x18D], strlen((char *)lbl_802711B0 + 0x18D));
            made = 0;
            tmp = Heap_Alloc(0x54);
            if (tmp) {
                String_Init(&sp24, lbl_802711B0 + 0x1C5, &scratch);
                made = 1;
                tmp = BattleTerrain_Create(tmp, *(void **)(self + 4), &sp24, &sp18);
            }
            if (made)
                String_Destroy(&sp24, -1);
            ((Host *)*(void **)(self + 4))->v5(tmp);
            String_Destroy(&sp18, -1);
            String_Destroy(&spC, -1);
            lbl_803678BF = 1;
        }
        self = (u8 *)(void *)lbl_803678B8;
        fn_800ED960(gWin3, 1);
        if (((*(u32 *)((u8 *)gPadInput + 8) ^ *(u32 *)((u8 *)gPadInput + 4)) & *(u32 *)((u8 *)gPadInput + 4)) & 0x10) {
            if (*(void **)(self + 0x30))
                fn_800D7540(*(void **)(self + 0x30));
            *(void **)(self + 0x30) = 0;
            idx = *(s32 *)(self + 0x2C) + 1;
            while (!*(void **)(self + 0x30)) {
                if (idx >= *(s32 *)(self + 0x28))
                    idx = 0;
                entry = (*(void ***)(self + 0x24))[idx];
                if (*(u8 *)((u8 *)entry + 0x420)) {
                    *(void **)(self + 0x30) = entry;
                    fn_800D7564(*(void **)(self + 0x30));
                    *(s32 *)(self + 0x2C) = idx;
                }
                idx++;
            }
        }
        if (*(void **)(self + 0x30)) {
            fn_800D74FC(*(void **)(self + 0x30));
            if (!*(u8 *)((u8 *)*(void **)(self + 0x30) + 0x420)) {
                if (*(void **)(self + 0x30))
                    fn_800D7540(*(void **)(self + 0x30));
                *(void **)(self + 0x30) = 0;
                idx = *(s32 *)(self + 0x2C) + 1;
                while (!*(void **)(self + 0x30)) {
                    if (idx >= *(s32 *)(self + 0x28))
                        idx = 0;
                    entry = (*(void ***)(self + 0x24))[idx];
                    if (*(u8 *)((u8 *)entry + 0x420)) {
                        *(void **)(self + 0x30) = entry;
                        fn_800D7564(*(void **)(self + 0x30));
                        *(s32 *)(self + 0x2C) = idx;
                    }
                    idx++;
                }
            }
        }
        if (!fn_800E7C80(*(void **)(self + 4)))
            fn_800D8030(self);
        if (*(void **)(self + 0x10) && fn_800E5248(*(void **)(self + 0x10), 2) && fn_8011654C(*(void **)(self + 0x10)) == 1 && fn_80116580(*(void **)(self + 0x10)) != 3)
            fn_80113BA0(*(void **)(self + 0x10));
        if (!self[0x89] && *(void **)(self + 4)) {
            ((Host *)*(void **)(self + 4))->v13(1);
            ((Host *)*(void **)(self + 4))->v14();
            ((Host *)*(void **)(self + 4))->v16(0, 0);
            ((Host *)*(void **)(self + 4))->v15();
            LightFade_Start();
        }
        if (self[0x89]) {
            self = (u8 *)(void *)lbl_803678B8;
            if (self) {
                gBattleReplayActive = 0;
                if (*(void **)(self + 4))
                    ((Host *)*(void **)(self + 4))->v1(1);
                *(void **)(self + 4) = 0;
                tmp = gGame;
                if (tmp) {
                    String_Destroy((String *)((u8 *)tmp + 0x1A8), -1);
                    String_Destroy((String *)((u8 *)tmp + 0x19C), -1);
                    String_Destroy((String *)tmp, -1);
                    Heap_Free(tmp);
                }
                fn_801C777C();
                if (*(void **)(self + 0x8C))
                    fn_8005C7E8(*(void **)(self + 0x8C));
                fn_800D5894(self);
                fn_80040854(0);
                String_Destroy((String *)(self + 0x7C), -1);
                String_Destroy((String *)(self + 0x70), -1);
                if (self + 0x64 && self + 0x64)
                    fn_800CA6C8(self + 0x64, 0);
                if (self + 0x58 && self + 0x58)
                    fn_800CA6C8(self + 0x58, 0);
                if (self + 0x4C && self + 0x4C)
                    fn_800CA6C8(self + 0x4C, 0);
                if (self + 0x40 && self + 0x40)
                    fn_800CA6C8(self + 0x40, 0);
                if (self + 0x34 && self + 0x34)
                    fn_800CA6C8(self + 0x34, 0);
                if (self + 0x1C && self + 0x1C && self + 0x1C && *(void **)(self + 0x24))
                    Heap_Free(*(void **)(self + 0x24));
                Heap_Free(self);
            }
            Process_ClearFunc(proc);
        }
    }
}
#pragma opt_common_subs reset
#pragma cplusplus reset
void fn_800DB110(void *arg0) {
    void DebugPrint(char *, ...);
    u8 *Fog_GetColor(void);
    void *Heap_Alloc(s32);
    void *fn_800D9B10(void *);
    void Process_CreateChild(void *, void *);
    extern char lbl_802711B0[];
    extern u8 gBattleReplayActive;
    extern s32 lbl_803678B8;
    extern u8 lbl_8028DDF8[];
    void *tmp;
    u8 *fog;

    DebugPrint(lbl_802711B0 + 0x263);
    gBattleReplayActive = 1;
    fog = Fog_GetColor();
    *fog = 0;
    tmp = Heap_Alloc(0x90);
    if (tmp != 0) {
        tmp = fn_800D9B10(tmp);
    }
    lbl_803678B8 = (s32)tmp;
    Process_CreateChild(lbl_8028DDF8, arg0);
}

void *fn_800DB18C(void *arg0, s16 arg1) {
    void fn_800E45EC(void *, s32);
    void Heap_Free(void *);
    extern void *lbl_8028DE70[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028DE70;
        String_Destroy((s8 *)arg0 + 0xAC, -1);
        fn_800E45EC(arg0, 0);
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void fn_800DB1FC(void *arg0, void *arg1) {
    String_Assign((void *)((char *)arg0 + 0xAC), arg1, 0, -1);
}

#pragma cplusplus on
extern "C" void fn_800DB228(u8 *self) {
    void *fn_800E7E4C(void *, void *);
    M2C_UNK *String_CStr(void *);
    s32 Text_MeasureWidth(void *, s32, f32);
    extern const f32 lbl_80369E60;
    struct Base {
        u8 pad[0x40];
    };
    struct Derived : Base {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6(s32, s32, void *, u8, s32, f32) = 0;
    };

    u8 *obj = (u8 *)fn_800E7E4C(*(void **)self, self + 0x1C);
    s32 halfWidth = 0;

    if (self[0xB9] != 0) {
        halfWidth = -Text_MeasureWidth(
            String_CStr(self + 0xAC),
            -1,
            lbl_80369E60
        ) / 2;
    }

    ((Derived *)self)->v6(
        (s32)((f32)halfWidth + (*(f32 *)(*(u8 **)(self + 0x38) + 0x68) + (f32)(*(s32 *)(self + 0x48) + *(s32 *)(obj + 0x60)))),
        *(s32 *)(self + 0x4C) + *(s32 *)(obj + 0x64),
        self + 0xAC,
        self[0xB8],
        6,
        (f32)*(s32 *)(self + 0xBC)
    );
}
#pragma cplusplus off
void *fn_800DB338(u8 *self, void *arg1, void *arg2)
{
    void *fn_800E4688(void *, void *, void *);
    void Xml_GetNamedValue(void *, void *, void *);
    void String_Init(void *, char *, void *);
    void String_Destroy(void *, s32);
    void String_AssignCStr(void *, char *, u32);
    u32 strlen(const char *);

    extern void *lbl_8028DE70[];
    extern char lbl_80271560[];

    struct Value {
        u32 v[8];
    };

    String name;
    String name2;
    String name3;
    String name4;
    struct Value value;
    struct Value temp;
    struct Value temp2;
    struct Value temp3;
    struct Value temp4;
    s32 scratch;
    s32 scratch2;
    s32 scratch3;
    s32 scratch4;


    fn_800E4688(self, arg1, arg2);

    *(void **)(self + 0x40) = lbl_8028DE70;

    *(u32 *)(self + 0xAC) = 0;
    *(u32 *)(self + 0xB0) = 0;
    *(u32 *)(self + 0xB4) = 0;
    *(u32 *)(self + 0xB0) = 0;

    value.v[3] = 0;
    value.v[2] = 0;
    value.v[1] = 0;
    value.v[0] = 0;

    String_Init(&name, lbl_80271560, &scratch);

    Xml_GetNamedValue(&temp, arg2, &name);

    value = temp;

    String_Destroy(&name, -1);

    String_AssignCStr(
        self + 0xAC,
        (char *)&value,
        strlen((char *)&value)
    );

    String_Init(
        &name2,
        lbl_80271560 + 5,
        &scratch2
    );

    Xml_GetNamedValue(&temp2, arg2, &name2);

    self[0xB8] = temp2.v[0] != 0;

    String_Destroy(&name2, -1);

    String_Init(
        &name3,
        lbl_80271560 + 0xA,
        &scratch3
    );

    Xml_GetNamedValue(&temp3, arg2, &name3);

    self[0xB9] = temp3.v[0] != 0;

    String_Destroy(&name3, -1);

    String_Init(
        &name4,
        lbl_80271560 + 0x11,
        &scratch4
    );

    Xml_GetNamedValue(&temp4, arg2, &name4);

    *(u32 *)(self + 0xBC) = temp4.v[0];

    String_Destroy(&name4, -1);

    if (*(s32 *)(self + 0xBC) == 0) {
        *(s32 *)(self + 0xBC) = 0x10;
    }

    *(s32 *)(self + 0x60) =
        *(s32 *)(self + 0xAC) * 0xB;

    *(s32 *)(self + 0x64) = 0x10;

    return self;
}

void fn_800DB520(void) {

}

void fn_800DB524(void) {

}

void fn_800DB528(void) {

}

void *fn_800DB52C(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s16);
    void Heap_Free(void *);
    extern u8 lbl_8028DED0[];
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = lbl_8028DED0;
        fn_800DF724(arg0, 0);
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

#pragma optimization_level 3
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
    if (*(f32 *)(p + 0xA0) >= *(f32 *)(p + 0xA8)) {
        f32 z;
        *(f32 *)(p + 0xA0) = *(f32 *)(p + 0xA8);
        z = lbl_80369E70;
        *(f32 *)(p + 0xA4) = z;
        *(f32 *)(p + 0x98) = z;
        *(f32 *)(p + 0x94) = z;
        *(f32 *)(p + 0x90) = z;
    }
    if (lbl_80369E70 == *(f32 *)(p + 0xA4)) {
        s32 n = *(s32 *)(p + 0x9C) - 1;
        *(s32 *)(p + 0x9C) = n;
    }
    if (*(s32 *)(p + 0x9C) <= 0) {
        *(s32 *)(p + 0x9C) = 0;
    }
}
#pragma optimization_level reset
s32 fn_800DB668(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C) != 0;
}

void fn_800DB67C(f32 *arg0, const f32 *arg1, s32 arg2) {
    f32 PSVECDistance(f32 *, f32 *);
    void fn_802031A8(f32 *, f32 *, f32 *);
    void fn_802031E8(f32 *, f32 *);
    void fn_802031CC(f32 *, f32 *, f32);
    f32 current[3];
    f32 destination[3];
    f32 delta[3];
    f32 distance;
    f32 x;
    f32 y;
    f32 z;

    x = arg1[0];
    y = arg1[1];
    arg0[30] = x;
    z = arg1[2];
    arg0[31] = y;
    arg0[32] = z;

    current[0] = arg0[18];
    current[1] = arg0[19];
    current[2] = arg0[20];
    destination[0] = arg0[30];
    destination[1] = arg0[31];
    destination[2] = arg0[32];

    distance = PSVECDistance(destination, current);
    if (!(distance < 0.0f)) {
        fn_802031A8(destination, current, delta);
        fn_802031E8(delta, delta);
        fn_802031CC(delta, delta, distance / (f32)arg2);
        arg0[33] = delta[0];
        arg0[34] = delta[1];
        arg0[35] = delta[2];
        arg0[38] = 0.0f;
        arg0[37] = 0.0f;
        arg0[36] = 0.0f;
        ((s32 *)arg0)[39] = arg2;
        arg0[42] = 0.0f;
        arg0[41] = 0.0f;
        arg0[40] = 0.0f;
    }
}

#pragma push
#pragma opt_lifetimes off
void fn_800DB7A4(void *arg0, f32 *arg1, f32 speed, f32 farg1) {
    f32 PSVECDistance(f32 *, f32 *);
    void fn_802031A8(f32 *, f32 *, f32 *);
    void fn_802031E8(f32 *, f32 *);
    void fn_802031CC(f32 *, f32 *, f32);
    extern f32 lbl_80369E74;
    f32 current[3];
    f32 destination[3];
    f32 delta[3];
    f32 scaled[3];
    f32 distance;
    f32 zero;
    void *self;

    self = arg0;
    *(f32 *)((u8 *)arg0 + 0x78) = arg1[0];
    *(f32 *)((u8 *)arg0 + 0x7C) = arg1[1];
    *(f32 *)((u8 *)arg0 + 0x80) = arg1[2];

    current[0] = *(f32 *)((u8 *)self + 0x48);
    current[1] = *(f32 *)((u8 *)self + 0x4C);
    current[2] = *(f32 *)((u8 *)self + 0x50);
    destination[0] = *(f32 *)((u8 *)self + 0x78);
    destination[1] = *(f32 *)((u8 *)self + 0x7C);
    destination[2] = *(f32 *)((u8 *)self + 0x80);

    distance = PSVECDistance(destination, current);
    if (distance < lbl_80369E74) {
        zero = 0.0f;
        *(f32 *)((u8 *)self + 0x84) = zero;
        *(f32 *)((u8 *)self + 0x88) = zero;
        *(f32 *)((u8 *)self + 0x8C) = zero;
        *(f32 *)((u8 *)self + 0x90) = zero;
        *(f32 *)((u8 *)self + 0x94) = zero;
        *(f32 *)((u8 *)self + 0x98) = zero;
        return;
    }

    fn_802031A8(destination, current, delta);
    fn_802031E8(delta, delta);

    if (0.0f == farg1) {
        fn_802031CC(delta, scaled, speed);
        zero = 0.0f;
        *(f32 *)((u8 *)self + 0x84) = scaled[0];
        *(f32 *)((u8 *)self + 0x88) = scaled[1];
        *(f32 *)((u8 *)self + 0x8C) = scaled[2];
        *(f32 *)((u8 *)self + 0x98) = zero;
        *(f32 *)((u8 *)self + 0x94) = zero;
        *(f32 *)((u8 *)self + 0x90) = zero;
        *(f32 *)((u8 *)self + 0xA8) = zero;
        *(f32 *)((u8 *)self + 0xA4) = zero;
        *(f32 *)((u8 *)self + 0xA0) = zero;
        *(s32 *)((u8 *)self + 0x9C) = (s32)(distance / speed);
    } else {
        zero = 0.0f;
        *(f32 *)((u8 *)self + 0x84) = zero;
        *(f32 *)((u8 *)self + 0x88) = zero;
        *(f32 *)((u8 *)self + 0x8C) = zero;
        fn_802031CC(delta, scaled, farg1);
        *(f32 *)((u8 *)self + 0x90) = scaled[0];
        *(f32 *)((u8 *)self + 0x94) = scaled[1];
        *(f32 *)((u8 *)self + 0x98) = scaled[2];
        *(f32 *)((u8 *)self + 0xA0) = zero;
        *(f32 *)((u8 *)self + 0xA4) = farg1;
        *(f32 *)((u8 *)self + 0xA8) = speed;
        *(s32 *)((u8 *)self + 0x9C) = (s32)(distance / speed);
    }
}
#pragma pop
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
    void *Camera_GetViewMtx(void);
    void fn_8020310C(void *, f32 *, f32 *);
    f32 sp[3];
    f32 z;
    f32 y;
    f32 x;

    sp[0] = *(f32 *)((u8 *)arg1 + 0x48);
    sp[1] = *(f32 *)((u8 *)arg1 + 0x4C);
    sp[2] = *(f32 *)((u8 *)arg1 + 0x50);
    fn_8020310C(Camera_GetViewMtx(), sp, sp);
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

#pragma cplusplus on
extern "C" void PSMTXRotRad(void *, s32, f32);
extern "C" void fn_802029C4(void *, f32 *, f32 *);
#pragma cplusplus reset
#pragma cplusplus on
struct DirectionVector { f32 x, y, z; DirectionVector(f32 xx, f32 yy, f32 zz) : x(xx), y(yy), z(zz) {} };
#pragma cplusplus on
extern "C" struct DirectionVector fn_800DBAB8(void *arg1) {
    void PSMTXRotRad(void *, s32, f32);
    void fn_802029C4(void *, f32 *, f32 *);
    f32 vec[3];
    f32 mtx[3][4];
    f32 y;
    f32 z;
    f32 x;

    vec[0] = 0.0f;
    vec[1] = 0.0f;
    vec[2] = 1.0f;
    PSMTXRotRad(mtx, 0x59, 0.0174533f * *(f32 *)((u8 *)arg1 + 0x58));
    fn_802029C4(mtx, vec, vec);
    *(f32 *)((u8 *)arg1 + 0x60) = vec[0];
    *(f32 *)((u8 *)arg1 + 0x64) = vec[1];
    *(f32 *)((u8 *)arg1 + 0x68) = vec[2];
    z = *(f32 *)((u8 *)arg1 + 0x68);
    y = *(f32 *)((u8 *)arg1 + 0x64);
    x = *(f32 *)((u8 *)arg1 + 0x60);
    return DirectionVector(x,y,z);
}
#pragma cplusplus off
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

void Camera_GetLookAt(f32 *arg0, u8 *arg1) {
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

void *fn_800DBBE4(u8 *self,void *arg1,void *arg2) {
 void *fn_800DF7A0(void *,void *,void *);
 void *String_Init(void *,char *,void *);
 void Xml_GetNamedValue(void *,void *,void *);
 extern u8 lbl_8028DED0[];
 extern char lbl_80271658[];
 typedef struct { s32 v[8]; } Value;
 Value value,temp1,temp2,temp3;
 String str1,str2,str3;
 u32 alloc1,alloc2,alloc3;
 void *xml=arg2;
 fn_800DF7A0(self,arg1,arg2);
 *(void **)(self+0x40)=lbl_8028DED0;
 *(f32 *)(self+0x80)=0.0f;*(f32 *)(self+0x7c)=0.0f;*(f32 *)(self+0x78)=0.0f;
 *(f32 *)(self+0x8c)=0.0f;*(f32 *)(self+0x88)=0.0f;*(f32 *)(self+0x84)=0.0f;
 *(f32 *)(self+0x98)=0.0f;*(f32 *)(self+0x94)=0.0f;*(f32 *)(self+0x90)=0.0f;
 String_Init(&str1,lbl_80271658,&alloc1);
 Xml_GetNamedValue(&temp1,xml,&str1);value=temp1;String_Destroy(&str1,-1);
 *(f32 *)(self+0x48)=((f32 *)&value)[0];*(f32 *)(self+0x4c)=((f32 *)&value)[1];*(f32 *)(self+0x50)=((f32 *)&value)[2];
 String_Init(&str2,lbl_80271658+4,&alloc2);
 Xml_GetNamedValue(&temp2,xml,&str2);value=temp2;String_Destroy(&str2,-1);
 *(f32 *)(self+0x54)=((f32 *)&value)[0];*(f32 *)(self+0x58)=((f32 *)&value)[1];*(f32 *)(self+0x5c)=((f32 *)&value)[2];
 *(s32 *)(self+0x9c)=0;
 String_Init(&str3,lbl_80271658+8,&alloc3);
 Xml_GetNamedValue(&temp3,xml,&str3);value=temp3;String_Destroy(&str3,-1);
 if(value.v[0]==0 && value.v[1]==0 && value.v[2]==0) {
 *(f32 *)(self+0x74)=1.0f;*(f32 *)(self+0x70)=1.0f;*(f32 *)(self+0x6c)=1.0f;
 } else {
 *(f32 *)(self+0x6c)=((f32 *)&value)[0];*(f32 *)(self+0x70)=((f32 *)&value)[1];*(f32 *)(self+0x74)=((f32 *)&value)[2];
 }
 return self;
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
    void Heap_Free(void *);
    extern u8 Layer_vtable[];
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = Layer_vtable;
        fn_800DF724(arg0, 0);
        if (arg1 > 0) {
            Heap_Free(arg0);
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
    f64 sin(f64);

    if (M2C_FIELD(arg0, s32 *, 0x5C) > 0) {
        M2C_FIELD(arg0, f32 *, 0x68) = M2C_FIELD(arg0, f32 *, 0x4C) * (f32)sin(M2C_FIELD(arg0, f32 *, 0x58));
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

extern "C" void *fn_800DC0BC(u8 *self,void *arg1,void *arg2,void *arg3) {
void *fn_800DF7A0(void *,void *,void *);
void String_Resize(void *,u32,s32);
void *String_Init(void *,char *,void *);
void Xml_GetNamedValue(void *,void *,void *);
extern u8 Layer_vtable[];
extern char Layer_str[];
extern f32 lbl_80369E94,lbl_80369E90;
struct Value { u32 v[8]; } value,temp;
u8 name[12]; s32 scratch;
fn_800DF7A0(self,arg1,arg2);
*(void **)(self+0x40)=Layer_vtable;
String_Resize(self+0x1C,0,0);
*(s32 *)(self+0x28)=-49; self[0x3C]=0;
*(void **)(self+0x48)=arg3;
String_Init(name,Layer_str,&scratch);
Xml_GetNamedValue(&temp,arg2,name); value=temp;
String_Destroy(name,-1);
*(u32 *)(self+0x60)=value.v[0]; *(u32 *)(self+0x64)=value.v[1];
*(f32 *)(self+0x6C)=1.0f;
*(f32 *)(self+0x70)=0.0f;
*(s32 *)(self+0x74)=0;
*(f32 *)(self+0x4C)=0.0f;
*(f32 *)(self+0x54)=0.0f;
*(f32 *)(self+0x50)=0.0f;
*(f32 *)(self+0x58)=0.0f;
*(f32 *)(self+0x68)=0.0f;
*(s32 *)(self+0x5C)=0;
return self;
}

extern "C" void *Layer_Create(void *self, void *host, void *name, void *userData)
{
    /* Construct a Layer: base init with type "Layer" / name / "default", then Layer vtable and fade/shake fields. */
    extern char Layer_str[];
    extern u8 Layer_vtable[];
    extern f32 lbl_80369E90;
    extern f32 lbl_80369E94;
    extern void String_Init(void *, char *, void *);
    extern void *fn_800DFAE0(void *, void *, void *, void *, void *);
    extern void *String_Destroy(void *, s32);

    u8 typeName[12];
    u8 defaultName[12];
    u32 scratchType;
    u32 scratchDefault;
    char *strings;
    f32 zero;
    f32 one;

    strings = Layer_str;
    String_Init(typeName, strings + 4, &scratchType);
    String_Init(defaultName, Layer_str + 0xA, &scratchDefault);
    fn_800DFAE0(self, host, typeName, name, defaultName);
    String_Destroy(defaultName, -1);
    String_Destroy(typeName, -1);

    *(void **)((u8 *)self + 0x40) = Layer_vtable;
    one = lbl_80369E94;
    *(s32 *)((u8 *)self + 0x28) = -0x31;
    zero = lbl_80369E90;
    ((u8 *)self)[0x3C] = 0;
    *(void **)((u8 *)self + 0x48) = userData;
    *(s32 *)((u8 *)self + 0x64) = 0;
    *(s32 *)((u8 *)self + 0x60) = 0;
    *(f32 *)((u8 *)self + 0x6C) = one;
    *(f32 *)((u8 *)self + 0x70) = zero;
    *(f32 *)((u8 *)self + 0x4C) = zero;
    *(f32 *)((u8 *)self + 0x54) = zero;
    *(f32 *)((u8 *)self + 0x50) = zero;
    *(f32 *)((u8 *)self + 0x58) = zero;
    *(f32 *)((u8 *)self + 0x68) = zero;
    *(s32 *)((u8 *)self + 0x5C) = 0;
    return self;
}

#pragma cplusplus reset
void *fn_800DC2E4(void *arg0, s16 arg1) {
#pragma global_optimizer off
    extern u8 lbl_8028DF48[];
    void Heap_Free(void *);
    void *fn_800CA6C8(void *, s16);
    void fn_800E45EC(void *, s16);
    u8 *p;

    if (arg0 != NULL) {
        p = (u8 *)arg0;
        *(void **)(p + 0x40) = lbl_8028DF48;
        if (p + 0xB8)
            if (p + 0xB8)
                if (p + 0xB8)
                    if (*(void **)(p + 0xC0))
                        Heap_Free(*(void **)(p + 0xC0));
        if (p + 0xAC)
            if (p + 0xAC)
                fn_800CA6C8(p + 0xAC, 0);
        fn_800E45EC(arg0, 0);
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
#pragma global_optimizer reset
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
    extern void *String_CStr(void *);

    u32 index;
    u32 count;
    u8 *base;

    index = *(u32 *)((u8 *)arg0 + 0x110);
    count = *(u32 *)((u8 *)arg0 + 0xB0);

    if (index < count) {
        base = *(u8 **)((u8 *)arg0 + 0xB4);
        return String_CStr(base + index * 0xC);
    }

    return lbl_80271730;
}

void fn_800DC408(void *arg0, u32 arg1, s32 arg2) {
    M2C_UNK String_Assign(s32, s32, M2C_UNK, M2C_UNK);
    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xB0)) {
        String_Assign(M2C_FIELD(arg0, s32 *, 0xB4) + (arg1 * 0xC), arg2, 0, -1);
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

/* While pointer held: scroll list via up/down buttons or drag the scrollbar thumb. */
void ListWin_HandleScrollbarDrag(void *list, s32 x, s32 y) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 rel_y;
    s32 rel_x;
    u8 hit;

    rel_x = x - M2C_FIELD(list, s32 *, 0x48);
    rel_y = y - M2C_FIELD(list, s32 *, 0x4C);
    if (M2C_FIELD(list, u8 *, 0x114) != 0) {
        hit = 0;
        if (rel_x >= M2C_FIELD(list, s32 *, 0xD4) && rel_x <= M2C_FIELD(list, s32 *, 0xDC)
            && rel_y >= M2C_FIELD(list, s32 *, 0xD8) && rel_y <= M2C_FIELD(list, s32 *, 0xE0)) {
            hit = 1;
        }
        if (hit != 0) {
            M2C_FIELD(list, s32 *, 0x108) = M2C_FIELD(list, s32 *, 0x108) - 1;
            if (M2C_FIELD(list, s32 *, 0x108) < 0) {
                M2C_FIELD(list, s32 *, 0x108) = 0;
            }
            M2C_FIELD(list, s32 *, 0x104) =
                ((M2C_FIELD(list, s32 *, 0x64) - 0x20) * M2C_FIELD(list, s32 *, 0x108))
                / M2C_FIELD(list, s32 *, 0xB0);
            goto end;
        }
    }
    if (M2C_FIELD(list, u8 *, 0x115) != 0) {
        hit = 0;
        if (rel_x >= M2C_FIELD(list, s32 *, 0xE4) && rel_x <= M2C_FIELD(list, s32 *, 0xEC)
            && rel_y >= M2C_FIELD(list, s32 *, 0xE8) && rel_y <= M2C_FIELD(list, s32 *, 0xF0)) {
            hit = 1;
        }
        if (hit != 0) {
            M2C_FIELD(list, s32 *, 0x108) = M2C_FIELD(list, s32 *, 0x108) + 1;
            temp_r4 = M2C_FIELD(list, s32 *, 0x10C);
            if (M2C_FIELD(list, s32 *, 0x108) > M2C_FIELD(list, s32 *, 0xB0) - temp_r4) {
                M2C_FIELD(list, s32 *, 0x108) = M2C_FIELD(list, s32 *, 0xB0) - temp_r4;
            }
            M2C_FIELD(list, s32 *, 0x104) =
                ((M2C_FIELD(list, s32 *, 0x64) - 0x20) * M2C_FIELD(list, s32 *, 0x108))
                / M2C_FIELD(list, s32 *, 0xB0);
            goto end;
        }
    }
    hit = 0;
    if (rel_x >= M2C_FIELD(list, s32 *, 0xF4) && rel_x <= M2C_FIELD(list, s32 *, 0xFC)
        && rel_y >= M2C_FIELD(list, s32 *, 0xF8) && rel_y <= M2C_FIELD(list, s32 *, 0x100)) {
        hit = 1;
    }
    if (hit != 0) {
        M2C_FIELD(list, s32 *, 0x104) = M2C_FIELD(list, s32 *, 0x80) + (y - M2C_FIELD(list, s32 *, 0x78));
        temp_r4 = (M2C_FIELD(list, s32 *, 0x64) - (M2C_FIELD(list, s32 *, 0x100) - M2C_FIELD(list, s32 *, 0xF8))) - 0x20;
        if (M2C_FIELD(list, s32 *, 0x104) < 0) {
            M2C_FIELD(list, s32 *, 0x104) = 0;
        }
        if (M2C_FIELD(list, s32 *, 0x104) > temp_r4) {
            M2C_FIELD(list, s32 *, 0x104) = temp_r4;
        }
        M2C_FIELD(list, s32 *, 0x108) =
            (M2C_FIELD(list, s32 *, 0x104) * M2C_FIELD(list, s32 *, 0xB0))
            / (M2C_FIELD(list, s32 *, 0x64) - 0x20);
    }
end:
    temp_r4 = M2C_FIELD(list, s32 *, 0x108);
    temp_r5 = M2C_FIELD(list, s32 *, 0x110);
    if (temp_r5 - temp_r4 >= M2C_FIELD(list, s32 *, 0x10C)) {
        M2C_FIELD(list, s32 *, 0x110) = temp_r5 - 1;
    }
    temp_r0 = M2C_FIELD(list, s32 *, 0x108);
    temp_r4 = M2C_FIELD(list, s32 *, 0x110);
    temp_r0 = temp_r4 - temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(list, s32 *, 0x110) = temp_r4 + 1;
    }
}

void fn_800DC7C4(void *arg0, s32 arg1, s32 arg2) {
    u8 hit = 0;
    void (*temp_r12)(void *);
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    M2C_FIELD(arg0, s32 *, 0x80) = M2C_FIELD(arg0, s32 *, 0x104);
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

#pragma push
#pragma cplusplus on
#pragma optimization_level 4
#pragma opt_strength_reduction off
#pragma global_optimizer off
#pragma use_lmw_stmw on
extern "C" void fn_800DC9E0(void *arg0, s32 arg1) {
struct Host {u8 pad[0x40];virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6(s32,s32,String *,s32,s32,f32);virtual void v7(void *,s32,s32,s32,s32);};
void *String_CStr(s32);void String_Init(String *,void *,void *);
s32 fn_800E7FB4(s32,void *);
void fn_800E3040(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
extern u8 lbl_80271730[];extern const f32 lbl_80369E98;
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
    for (;var_r29 < (M2C_FIELD(arg0,s32 *,0x108)+M2C_FIELD(arg0,s32 *,0x10C));var_r29++,var_r31+=0xC) {
        if (var_r29 < (s32) M2C_FIELD(arg0,s32 *,0xB0)) {
            String_Init(&sp74, String_CStr(M2C_FIELD(arg0,s32 *,0xB4) + var_r31), &sp2C);
            ((Host *)arg0)->v6(temp_r24,var_r25,&sp74,1,0xFF,lbl_80369E98);
            String_Destroy(&sp74, -1);
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
        temp_r9 = temp_r5_2 + (M2C_FIELD(arg0,s32 *,0x6C) + ((temp_r0 - M2C_FIELD(arg0,s32 *,0x108)) * 0x10));
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
    String_Init(&sp48, lbl_80271730 + 1, &sp28);
    temp_r29 = fn_800E7FB4(temp_r30, &sp48);
    String_Destroy(&sp48, -1);
    if (M2C_FIELD(arg0,u8 *,0x9C) != 0) {
        fn_800E3040(temp_r29, arg1, 2, temp_r31, temp_r24_2, M2C_FIELD(arg0,s32 *,0x44), temp_r26, temp_r25, 0,0xFF,0xFF,0xFF,0);
    } else {
        fn_800E3040(temp_r29, arg1, 2, temp_r31, temp_r24_2, M2C_FIELD(arg0,s32 *,0x44), temp_r26, temp_r25, 0xFF,0xFF,0xFF,0xFF,0);
    }
    fn_800E3040(temp_r29, arg1, 0, (M2C_FIELD(arg0,s32 *,0x60) - 0xE) + M2C_FIELD(arg0,s32 *,0x48), M2C_FIELD(arg0,s32 *,0x4C), M2C_FIELD(arg0,s32 *,0x44), 0x10, 0x10, 0xFF,0xFF,0xFF,0xFF,0);
    fn_800E3040(temp_r29, arg1, 1, (M2C_FIELD(arg0,s32 *,0x60) - 0xE) + M2C_FIELD(arg0,s32 *,0x48), (M2C_FIELD(arg0,s32 *,0x64) - 0x10) + M2C_FIELD(arg0,s32 *,0x4C), M2C_FIELD(arg0,s32 *,0x44), 0x10, 0x10, 0xFF,0xFF,0xFF,0xFF,0);
    String_Init(&sp3C, lbl_80271730 + 7, &sp24);
    temp_r24_3 = fn_800E7FB4(temp_r30, &sp3C);
    String_Destroy(&sp3C, -1);
    fn_800E3040(temp_r24_3, arg1, 0, (M2C_FIELD(arg0,s32 *,0x60) - 0x10) + M2C_FIELD(arg0,s32 *,0x48), M2C_FIELD(arg0,s32 *,0x4C), M2C_FIELD(arg0,s32 *,0x44), 0x10, M2C_FIELD(arg0,s32 *,0x64), 0xFF,0xFF,0xFF,0xFF,0);
    temp_r26_2 = M2C_FIELD(arg0,s32 *,0x64);
    temp_r25_2 = M2C_FIELD(arg0,s32 *,0x60) - 0x10;
    String_Init(&sp30, lbl_80271730 + 0x12, &sp20);
    temp_r24_4 = fn_800E7FB4(temp_r30, &sp30);
    String_Destroy(&sp30, -1);
    fn_800E3040(temp_r24_4, arg1, 0, M2C_FIELD(arg0,s32 *,0x48), M2C_FIELD(arg0,s32 *,0x4C), M2C_FIELD(arg0,s32 *,0x44), temp_r25_2, temp_r26_2, 0xFF,0xFF,0xFF,0xFF,0);
}
#pragma pop
#pragma cplusplus off

#pragma push
#pragma opt_register_coloring off
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
#pragma pop
void ListWin_HandleInput(void *list) {
    void Win_UpdatePos(void *);
    void Win_SetDirty(void *);
    extern u8 *gPadInput;
    void *owner;
    s32 keys;
    s32 thumbH;

    /* Move list cursor/scroll with D-pad and recompute the scrollbar thumb. */
    Win_UpdatePos(list);
    owner = M2C_FIELD(list, void **, 0);
    if (M2C_FIELD(list, u8 *, 0x73)) {
        keys = M2C_FIELD(gPadInput, s32 *, 12);
        if (keys & 8) {
            M2C_FIELD(list, s32 *, 0x110) -= 1;
            if (M2C_FIELD(list, s32 *, 0x110) < 0)
                M2C_FIELD(list, s32 *, 0x110) = 0;
            if (M2C_FIELD(list, s32 *, 0x110) < M2C_FIELD(list, s32 *, 0x108)) {
                M2C_FIELD(list, s32 *, 0x108) -= 1;
                if (M2C_FIELD(list, s32 *, 0x108) < 0)
                    M2C_FIELD(list, s32 *, 0x108) = 0;
            }
            M2C_FIELD(list, s32 *, 0x104) =
                (M2C_FIELD(list, s32 *, 0x64) - 32) * M2C_FIELD(list, s32 *, 0x108)
                / M2C_FIELD(list, s32 *, 0xB0);
            if (M2C_FIELD(list, void (**)(void *, s32, s32), 0x118))
                M2C_FIELD(list, void (**)(void *, s32, s32), 0x118)(list, 0, 0);
            Win_SetDirty(owner);
        } else if (keys & 4) {
            if (M2C_FIELD(list, u32 *, 0xB0)) {
                M2C_FIELD(list, s32 *, 0x110) += 1;
                if (M2C_FIELD(list, u32 *, 0x110) >= M2C_FIELD(list, u32 *, 0xB0))
                    M2C_FIELD(list, s32 *, 0x110) = M2C_FIELD(list, s32 *, 0xB0) - 1;
                if (M2C_FIELD(list, s32 *, 0x110)
                    >= M2C_FIELD(list, s32 *, 0x108) + M2C_FIELD(list, s32 *, 0x10C))
                    M2C_FIELD(list, s32 *, 0x108) += 1;
                M2C_FIELD(list, s32 *, 0x104) =
                    (M2C_FIELD(list, s32 *, 0x64) - 32) * M2C_FIELD(list, s32 *, 0x108)
                    / M2C_FIELD(list, s32 *, 0xB0);
            }
            if (M2C_FIELD(list, void (**)(void *, s32, s32), 0x118))
                M2C_FIELD(list, void (**)(void *, s32, s32), 0x118)(list, 0, 0);
            Win_SetDirty(owner);
        } else if (keys & 1) {
            M2C_FIELD(list, s32 *, 0x110) -= 10;
            if (M2C_FIELD(list, s32 *, 0x110) < 0)
                M2C_FIELD(list, s32 *, 0x110) = 0;
            if (M2C_FIELD(list, s32 *, 0x110) < M2C_FIELD(list, s32 *, 0x108)) {
                M2C_FIELD(list, s32 *, 0x108) -= 10;
                if (M2C_FIELD(list, s32 *, 0x108) < 0)
                    M2C_FIELD(list, s32 *, 0x108) = 0;
            }
            M2C_FIELD(list, s32 *, 0x104) =
                (M2C_FIELD(list, s32 *, 0x64) - 32) * M2C_FIELD(list, s32 *, 0x108)
                / M2C_FIELD(list, s32 *, 0xB0);
            if (M2C_FIELD(list, void (**)(void *, s32, s32), 0x118))
                M2C_FIELD(list, void (**)(void *, s32, s32), 0x118)(list, 0, 0);
            Win_SetDirty(owner);
        } else if (keys & 2) {
            if (M2C_FIELD(list, u32 *, 0xB0)) {
                M2C_FIELD(list, s32 *, 0x110) += 10;
                if (M2C_FIELD(list, u32 *, 0x110) >= M2C_FIELD(list, u32 *, 0xB0))
                    M2C_FIELD(list, s32 *, 0x110) = M2C_FIELD(list, s32 *, 0xB0) - 1;
                if (M2C_FIELD(list, s32 *, 0x110)
                    >= M2C_FIELD(list, s32 *, 0x108) + M2C_FIELD(list, s32 *, 0x10C))
                    M2C_FIELD(list, s32 *, 0x108) += 10;
                M2C_FIELD(list, s32 *, 0x104) =
                    (M2C_FIELD(list, s32 *, 0x64) - 32) * M2C_FIELD(list, s32 *, 0x108)
                    / M2C_FIELD(list, s32 *, 0xB0);
            }
            if (M2C_FIELD(list, void (**)(void *, s32, s32), 0x118))
                M2C_FIELD(list, void (**)(void *, s32, s32), 0x118)(list, 0, 0);
            Win_SetDirty(owner);
        }
    }
    M2C_FIELD(list, s32 *, 0x10C) = M2C_FIELD(list, s32 *, 0x64) / 16;
    if (M2C_FIELD(list, s32 *, 0x10C) > M2C_FIELD(list, s32 *, 0xB0))
        M2C_FIELD(list, s32 *, 0x10C) = M2C_FIELD(list, s32 *, 0xB0);
    M2C_FIELD(list, s32 *, 0xF4) = M2C_FIELD(list, s32 *, 0x60) - 14;
    M2C_FIELD(list, s32 *, 0xF8) = M2C_FIELD(list, s32 *, 0x104) + 16;
    thumbH = M2C_FIELD(list, s32 *, 0x64) - 32;
    if (M2C_FIELD(list, s32 *, 0x10C) < M2C_FIELD(list, s32 *, 0xB0))
        thumbH = thumbH * M2C_FIELD(list, s32 *, 0x10C) / M2C_FIELD(list, s32 *, 0xB0);
    M2C_FIELD(list, s32 *, 0xFC) = M2C_FIELD(list, s32 *, 0xF4) + 16;
    M2C_FIELD(list, s32 *, 0x100) = M2C_FIELD(list, s32 *, 0xF8) + thumbH;
}

#pragma push
#pragma inline_depth(0)
#pragma optimization_level 2
void *fn_800DD3E8(u8 *self, void *owner, void *xml) {
    void *fn_800E4688(void *, void *, void *);
    u8 Xml_AdvanceChild(void *);
    extern u8 lbl_8028DF48[];
    char value[32];
    char *valuePtr;
    String name;
    s32 scratch;
    s32 width, height;
    fn_800E4688(self, owner, xml);
    *(void **)(self+0x40)=lbl_8028DF48;
    valuePtr = value;
    *(s32 *)(self+172)=0;
    *(s32 *)(self+176)=0;
    *(s32 *)(self+180)=0;
    *(s32 *)(self+184)=0;
    *(s32 *)(self+188)=0;
    *(s32 *)(self+192)=0;
    *(s32 *)(self+208)=0;
    *(s32 *)(self+204)=0;
    *(s32 *)(self+200)=0;
    *(s32 *)(self+196)=0;
    *(s32 *)(self+224)=0;
    *(s32 *)(self+220)=0;
    *(s32 *)(self+216)=0;
    *(s32 *)(self+212)=0;
    *(s32 *)(self+240)=0;
    *(s32 *)(self+236)=0;
    *(s32 *)(self+232)=0;
    *(s32 *)(self+228)=0;
    *(s32 *)(self+256)=0;
    *(s32 *)(self+252)=0;
    *(s32 *)(self+248)=0;
    *(s32 *)(self+244)=0;
    *(s32 *)(self+0x110)=-1;
    while (Xml_AdvanceChild(xml)) {
        Xml_GetChildValue(value,xml);
        String_Init(&name,valuePtr,&scratch);
        fn_800DC518(self,&name,0);
        String_Destroy(&name,-1);
    }
    *(s32 *)(self+0x118)=0;
    width=*(s32 *)(self+0x60); height=*(s32 *)(self+0x64);
    *(s32 *)(self+0xc4)=0; *(s32 *)(self+0xc8)=0;
    *(s32 *)(self+0xcc)=width-16; *(s32 *)(self+0xd0)=height;
    width=*(s32 *)(self+0x60);
    *(s32 *)(self+0xd4)=width-16; *(s32 *)(self+0xd8)=0;
    *(s32 *)(self+0xdc)=width; *(s32 *)(self+0xe0)=16;
    width=*(s32 *)(self+0x60); height=*(s32 *)(self+0x64);
    *(s32 *)(self+0xe4)=width-16; *(s32 *)(self+0xe8)=height-16;
    *(s32 *)(self+0xec)=width; *(s32 *)(self+0xf0)=height;
    *(s32 *)(self+0x108)=0;
    *(s32 *)(self+0x10c)=*(s32 *)(self+0x64)/16;
    *(s32 *)(self+0xf4)=0; *(s32 *)(self+0xf8)=0;
    *(s32 *)(self+0xfc)=16; *(s32 *)(self+0x100)=16;
    *(s32 *)(self+0x104)=16; self[0x114]=0; self[0x115]=0;
    *(s32 *)(self+0x104)=((*(s32 *)(self+0x64)-32)* *(s32 *)(self+0x108))/ *(s32 *)(self+0xb0);
    return self;
}
#pragma pop
void fn_800DD598(void *vec, String *begin, String *end)
{
    void String_Resize(String *, u32, s32);
    void *fn_800C94F8(String *, u32, u32, u32, u32);
    void *memcpy(void *, void *, u32);
    void Heap_Free(void *);
    void *Heap_Alloc(u32);
    void String_Copy(void *, void *);
    void fprintf(void *, const char *, ...);
    void abort(void);
    extern char __files[];
    extern char lbl_80271730[];
    u32 newCount;
    u32 *pMin;
    String *capEnd;
    u32 sz;
    u32 *pLen;
    u32 len;
    String *data;
    String *dst;
    char *errFile;
    String *dstEnd;
    u32 limit;
    void *buf;

    newCount = (u32)(((s32)end - (s32)begin) / 12);
    if (newCount <= *(u32 *)vec) {
        if (*(u32 *)((u8 *)vec + 4) < newCount) {
            pMin = (u32 *)((u8 *)vec + 4);
        } else {
            pMin = &newCount;
        }
        data = *(String **)((u8 *)vec + 8);
        errFile = __files + 0xA0;
        dst = data;
        dstEnd = (String *)((u8 *)data + *pMin * 0xC);
        while (dst < dstEnd) {
            limit = (u32)-1;
            if (begin->size > -1) {
                fprintf(errFile, lbl_80271730 + 0x19);
                abort();
            }
            sz = begin->size;
            pLen = &limit;
            if (sz < limit) {
                pLen = &sz;
            }
            len = *pLen;
            if (dst == begin) {
                fn_800C94F8(dst, 0, 0, 0, 0);
                String_Resize(dst, len, 1);
            } else {
                String_Resize(dst, len, 0);
                memcpy(dst->data, begin->data, len);
            }
            dst++;
            begin++;
        }
        if (newCount < *(u32 *)((u8 *)vec + 4)) {
            capEnd = (String *)((u8 *)*(void **)((u8 *)vec + 8) + *(u32 *)((u8 *)vec + 4) * 0xC);
            while (dst < capEnd) {
                if (dst != 0 && dst->data != 0) {
                    Heap_Free(dst->data);
                }
                dst++;
            }
            *(u32 *)((u8 *)vec + 4) = newCount;
        } else if (*(u32 *)((u8 *)vec + 4) < newCount) {
            while (begin != end) {
                if (dst != 0) {
                    String_Copy(dst, begin);
                }
                begin++;
                dst++;
                *(u32 *)((u8 *)vec + 4) = *(u32 *)((u8 *)vec + 4) + 1;
            }
        }
    } else {
        if (newCount > 0x15555555U) {
            fprintf(__files + 0xA0, lbl_80271730 + 0x3F);
            abort();
        }
        dst = (String *)((u8 *)*(void **)((u8 *)vec + 8) + *(u32 *)((u8 *)vec + 4) * 0xC);
        buf = *(void **)((u8 *)vec + 8);
        while (dst > (String *)buf) {
            dst--;
            if (dst != 0 && dst->data != 0) {
                Heap_Free(dst->data);
            }
        }
        *(u32 *)((u8 *)vec + 4) = 0;
        if (*(void **)((u8 *)vec + 8) != 0) {
            Heap_Free(*(void **)((u8 *)vec + 8));
            *(void **)((u8 *)vec + 8) = 0;
            *(u32 *)vec = 0;
        }
        buf = Heap_Alloc(newCount * 0xC);
        if (buf == 0) {
            fprintf(__files + 0xA0, lbl_80271730 + 0x5C);
            abort();
        }
        *(void **)((u8 *)vec + 8) = buf;
        *(u32 *)vec = newCount;
        dstEnd = *(String **)((u8 *)vec + 8);
        while (begin != end) {
            if (dstEnd != 0) {
                String_Copy(dstEnd, begin);
            }
            begin++;
            dstEnd++;
            *(u32 *)((u8 *)vec + 4) = *(u32 *)((u8 *)vec + 4) + 1;
        }
    }
}
#pragma global_optimizer on
#pragma use_lmw_stmw reset

#pragma inline_depth(8)
s32 *fn_800DD87C(void *arg0, s32 *pos) {
    s32 *src;
    s32 *end;
    s32 *dst;
    s32 dist;

    end = *(s32 **)((u8 *)arg0 + 8) + *(s32 *)((u8 *)arg0 + 4);
    dist = end - pos;
    if (dist - 1 != 0) {
        src = pos + 1;
        dst = pos;
        while (src < end) {
            *dst = *src;
            src++;
            dst++;
        }
    }
    *(s32 *)((u8 *)arg0 + 4) = *(s32 *)((u8 *)arg0 + 4) - 1;
    return pos;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void *fn_800DD948(void *vec, String *pos)
{
    void String_Resize(String *, u32, s32);
    void *fn_800C94F8(String *, u32, u32, u32, u32);
    void *memcpy(void *, void *, u32);
    void Heap_Free(void *);
    void fprintf(void *, const char *, ...);
    void abort(void);
    extern char __files[];
    extern char lbl_80271730[];
    String *end;
    char *errFile;
    String *dst;
    String *src;
    u32 sz;
    u32 limit;
    u32 len;
    u32 newCount;
    String *last;

    end = (String *)(*(u8 **)((u8 *)vec + 8) + *(u32 *)((u8 *)vec + 4) * 0xC);
    if (((s32)end - (s32)pos) / 12 - 1 != 0) {
        errFile = __files + 0xA0;
        dst = pos;
        src = pos + 1;
        while (src < end) {
            limit = (u32)-1;
            if (src->size > -1) {
                fprintf(errFile, lbl_80271730 + 0x19);
                abort();
            }
            sz = src->size;
            len = *StrMin(&limit, &sz);
            if (dst == src) {
                fn_800C94F8(dst, 0, 0, 0, 0);
                String_Resize(dst, len, 1);
            } else {
                String_Resize(dst, len, 0);
                memcpy(dst->data, src->data, len);
            }
            src++;
            dst++;
        }
    }
    newCount = *(u32 *)((u8 *)vec + 4) - 1;
    *(u32 *)((u8 *)vec + 4) = newCount;
    last = (String *)(*(u8 **)((u8 *)vec + 8) + newCount * 0xC);
    if (last != 0 && last->data != 0) {
        Heap_Free(last->data);
    }
    return pos;
}
#pragma global_optimizer on
#pragma use_lmw_stmw reset

s32 fn_800DDAA4(s32 arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(fn_800DE73C(arg0 + 0x58), void **, 0xC);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x18);
    }
    return 0;
}

void fn_800DDAE0(void *arg0, void *arg1, void *arg2) {
    void String_ConcatCStr(String *, void *, char *);
    void String_Assign(String *, String *, s32, s32);
    void String_Destroy(String *, s32);
    char *String_CStr(String *);
    void *fn_800DE73C(void *, void *);
    s32 fn_800639B4(char *);
    extern char lbl_80271860[];

    String out;
    String tmp;
    char *str;
    void *obj;

    out.cap = 0;
    out.size = 0;
    out.data = 0;
    out.cap = 0;

    String_ConcatCStr(&tmp, arg2, lbl_80271860 + 1);
    String_Assign(&out, &tmp, 0, -1);
    String_Destroy(&tmp, -1);
    str = String_CStr(&out);
    obj = fn_800DE73C((u8 *)arg0 + 0x58, arg1);
    *(s32 *)((u8 *)obj + 0xC) = fn_800639B4(str);
    String_Destroy(&out, -1);
}

static inline void *Str_CStrDestroy(void *str) {
    extern void *String_CStr(void *);
    extern void String_Destroy(void *, s32);
    void *result = String_CStr(str);
    String_Destroy(str, -1);
    return result;
}
#pragma global_optimizer off
void *fn_800DDB94(void *arg0)
{
    extern void *StringMap_FindOrInsert(void *);
    extern void String_Assign(void *, void *, s32, s32);

    void *found;
    u32 temp[3];

    temp[1] = 0;
    temp[0] = 0;
    temp[2] = 0;
    temp[1] = 0;

    found = (void *)((u8 *)StringMap_FindOrInsert((u8 *)arg0 + 0x68) + 0xC);
    String_Assign(temp, found, 0, -1);
    return Str_CStrDestroy(temp);
}
#pragma global_optimizer on
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
    M2C_UNK GActor_Finalize(void *);
    void *GActor_Create();
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    void *temp_r3;

    temp_r3 = GActor_Create();
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
        GActor_Finalize(temp_r3);
    }
    return temp_r3;
}

void fn_800E5A4C(void *arg0);

void *fn_800DDD08(u8 *self, s16 arg1) {
extern u8 lbl_8028DFA8[];
void fn_80065E68(void *); void fn_8006CC6C(void *); void fn_80063934(void *);
void fn_800DE9FC(void **); void fn_800DEF00(void *); void fn_8005C7E8(void *);
void BinTree_Destroy(s32,void *); void fn_800DEA50(s32,void *); void fn_800DF724(void *,s32); void Heap_Free(void *);
void *node;
u8 *end;
if(self) {
*(void **)(self+0x40)=lbl_8028DFA8;
if(*(void **)(self+0x4C)) fn_80065E68(*(void **)(self+0x4C));
if(*(void **)(self+0x50)) fn_8006CC6C(*(void **)(self+0x50));
node=*(void **)(self+0x64); end=self+0x5C;
while(node!=end) { if(*(void **)((u8 *)node+0x18)) fn_80063934(*(void **)((u8 *)node+0x18)); fn_800DE9FC(&node); }
fn_800DEF00(self+0x58);
if(*(void **)(self+0x48)) fn_8005C7E8(*(void **)(self+0x48));
if((u32)self+0x68) if((s32)self+0x68) if(*(void **)(self+0x6C)) BinTree_Destroy((s32)(self+0x68),*(void **)(self+0x6C));
if((u32)self+0x58) if((s32)self+0x58) if(*(void **)end) fn_800DEA50((s32)(self+0x58),*(void **)end);
fn_800DF724(self,0);
if(arg1>0) Heap_Free(self);
}
return self;
}

#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
#pragma opt_register_coloring off
void *fn_800DDE28(void *arg0, void *unused, void *arg2) {
    void DebugPrint(char *, char *, ...);
    u16 FileCache_Probe(void);
    s32 FileCache_Load(void);
    s32 fn_800639B4(char *);
    s32 fn_80065EE8(void);
    s32 fn_8006CE14(void);
    s32 fn_8006D948(void);
    void Xml_GetChildName(String *, void *);
    void Xml_GetChildValue(char *, void *);
    char *Xml_GetNamedValue(char *, void *, String *);
    u8 Xml_AdvanceChild(void *);
    char *String_CStr(String *);
    s32 String_Compare(String *, s32, u32, char *, s32);
    void String_AssignCStr(String *, char *, u32);
    void String_Assign(String *, String *, s32, s32);
    void fn_800C99A0(String *, String *, s32, s32);
    void String_Destroy(String *, s32);
    void String_Init(String *, char *, void *);
    void fn_800CA6C8(void *, s32);
    void String_Concat(String *, String *, String *);
    void String_ConcatCStr(String *, String *, char *);
    void *StringMap_FindOrInsert(void *, String *);
    void String_Substr(String *, String *, s32, u32);
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
    void *self;
    void *iter;
    char *compareBase;
    char *strBase;
    char *childBuf;
    char *pBuf;
    s32 flag_word;
    u8 match;
    void *entry;
    char *name;
    u8 ok;
    void *owner;
    char *resourceName;

    self = arg0;
    iter = arg2;
    fn_800DF7A0(self);
    {
        *(void **)((u8 *)self + 0x40) = lbl_8028DFA8;
        fn_800DEF4C((u8 *)self + 0x58, &scratch10, &scratch14);
    }
    fn_800D6878((u8 *)self + 0x68, &scratch8, &scratchC);

    str144.cap = 0;
    str138.cap = 0;
    str12C.cap = 0;
    str120.cap = 0;
    str114.cap = 0;
    str150.size = 0;
    str150.cap = 0;
    str150.data = 0;
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

    String_Init(&strFC, lbl_80271860 + 5, &scratch20);
    Xml_GetNamedValue(buf1DC, iter, &strFC);
    pBuf = buf1DC;
    String_AssignCStr(&str138, pBuf, strlen(pBuf));
    String_Destroy(&strFC, -1);

    if (String_Compare(&str138, 0, str138.size, lbl_80271860, strlen(lbl_80271860)) != 0) {
        String_ConcatCStr(&strF0, &str138, lbl_80271860 + 0xC);
        fn_800C99A0(&str144, &strF0, 0, -1);
        String_Destroy(&strF0, -1);
    }

    String_Init(&strE4, lbl_80271860 + 0xE, &scratch1C);
    Xml_GetNamedValue(buf1BC, iter, &strE4);
    pBuf = buf1BC;
    String_AssignCStr(&str12C, pBuf, strlen(pBuf));
    String_Destroy(&strE4, -1);

    String_Init(&strD8, lbl_80271860 + 0x14, &scratch18);
    Xml_GetNamedValue(buf19C, iter, &strD8);
    flag_word = *(s32 *)buf19C;
    String_Destroy(&strD8, -1);

    String_Concat(&strCC, &str144, &str12C);
    String_ConcatCStr(&strC0, &strCC, lbl_80271860 + 0x1E);
    String_Assign(&str114, &strC0, 0, -1);
    String_Destroy(&strC0, -1);
    String_Destroy(&strCC, -1);
    String_CStr(&str114);
    if ((u16)FileCache_Probe() != 0x8000) {
        String_CStr(&str114);
        *(s32 *)((u8 *)self + 0x48) = FileCache_Load();
    } else {
        *(s32 *)((u8 *)self + 0x48) = 0;
    }

    String_Concat(&strB4, &str144, &str12C);
    String_ConcatCStr(&strA8, &strB4, lbl_80271860 + 0x23);
    String_Assign(&str114, &strA8, 0, -1);
    String_Destroy(&strA8, -1);
    String_Destroy(&strB4, -1);
    String_CStr(&str114);
    *(s32 *)((u8 *)self + 0x4C) = fn_80065EE8();

    String_Concat(&str9C, &str144, &str12C);
    String_ConcatCStr(&str90, &str9C, lbl_80271860 + 0x26);
    String_Assign(&str114, &str90, 0, -1);
    String_Destroy(&str90, -1);
    String_Destroy(&str9C, -1);
    String_CStr(&str114);
    *(s32 *)((u8 *)self + 0x50) = fn_8006CE14();

    if (flag_word != 0) {
        *(s32 *)((u8 *)self + 0x54) = 0;
    } else {
        String_Concat(&str84, &str144, &str12C);
        String_ConcatCStr(&str78, &str84, lbl_80271860 + 0x2A);
        String_Assign(&str114, &str78, 0, -1);
        String_Destroy(&str78, -1);
        String_Destroy(&str84, -1);
        String_CStr(&str114);
        *(s32 *)((u8 *)self + 0x54) = fn_8006D948();
    }

    str108.cap = 0;
    str108.size = 0;
    str108.data = 0;
    str108.cap = 0;
    strBase = lbl_80271860;
    childBuf = buf17C;
    compareBase = strBase;

    goto loop_check;
loop_body:
    Xml_GetChildName(&str6C, iter);
    String_Assign(&str108, &str6C, 0, -1);
    String_Destroy(&str6C, -1);
    Xml_GetChildValue(buf17C, iter);
    String_ConcatCStr(&str60, &str144, childBuf);
    String_ConcatCStr(&str54, &str60, strBase + 1);
    String_Assign(&str120, &str54, 0, -1);
    String_Destroy(&str54, -1);
    String_Destroy(&str60, -1);

    owner = *(void **)self;
    str24.cap = 0;
    str30.cap = 0;
    str24.size = 0;
    str24.data = 0;
    str24.cap = 0;
    str30.size = 0;
    str30.data = 0;
    str30.cap = 0;

    fn_800E788C(&str3C, owner);
    String_Assign(&str24, &str3C, 0, -1);
    String_Destroy(&str3C, -1);

    if (String_Compare(&str24, 0, str24.size, compareBase, strlen(strBase)) == 0) {
        String_Destroy(&str30, -1);
        String_Destroy(&str24, -1);
        ok = 1;
    } else {
        String_Substr(&str48, &str108, 0, str24.size);
        String_Assign(&str30, &str48, 0, -1);
        String_Destroy(&str48, -1);
        match = 0;
        if (str24.size == str30.size && String_Compare(&str24, 0, str24.size, str30.data, str30.size) == 0) {
            match = 1;
        }
        if (match != 0) {
            String_Destroy(&str30, -1);
            String_Destroy(&str24, -1);
            ok = 1;
        } else {
            String_Destroy(&str30, -1);
            String_Destroy(&str24, -1);
            ok = 0;
        }
    }

    if (ok != 0) {
        String_CStr(&str120);
        if ((u16)FileCache_Probe() != 0x8000) {
            resourceName = String_CStr(&str120);
            entry = fn_800DE73C((u8 *)self + 0x58, &str108);
            *(s32 *)((u8 *)entry + 0xC) = fn_800639B4(resourceName);
        } else {
            DebugPrint(lbl_80271860 + 0x2F, String_CStr(&str120));
        }
        Xml_GetChildValue(buf15C, iter);
        pBuf = buf15C;
        name = (char *)((u8 *)StringMap_FindOrInsert((u8 *)self + 0x68, &str108) + 0xC);
        String_AssignCStr((String *)name, pBuf, strlen(pBuf));
    }

loop_check:
    if (Xml_AdvanceChild(iter) != 0) {
        goto loop_body;
    }

    String_Destroy(&str108, -1);
    String_Destroy(&str114, -1);
    String_Destroy(&str120, -1);
    String_Destroy(&str12C, -1);
    String_Destroy(&str138, -1);
    String_Destroy(&str144, -1);
    fn_800CA6C8(&str150, 0);
    return self;
}
#pragma pop
void *fn_800DE4F0(u8 *self, void *arg1, String *arg2, String *arg3)
{
    void *String_Init(void *, char *, void *);
    void *String_Destroy(void *, s32);
    void *fn_800DFAE0(void *, void *, String *, String *, String *);
    void fn_800DEF4C(void *, void *, void *);
    void fn_800D6878(void *, void *, void *);
    void String_ConcatCStr(String *, String *, char *);
    void String_Assign(String *, String *, s32, s32);
    char *String_CStr(String *);
    u16 FileCache_Probe(char *);
    void *fn_8005C82C(char *, s32);
    void *fn_80065EE8(char *);
    void *fn_8006CE14(char *);
    void *fn_8006D948(char *);

    extern char lbl_80271860[];
    extern void *lbl_8028DFA8[];

    String str68;
    String str5C;
    String str50;
    String str44;
    String str38;
    String str2C;
    String str20;

    u32 scratch1C;
    u32 scratch18;
    u32 scratch14;
    u32 scratch10;
    u32 scratchC;
    u32 scratch8;

    String *name;

    name = arg3;

    String_Init(
        &str5C,
        lbl_80271860 + 0x40,
        &scratch1C
    );

    String_Init(
        &str50,
        lbl_80271860,
        &scratch18
    );

    fn_800DFAE0(
        self,
        arg1,
        &str5C,
        arg2,
        &str50
    );

    String_Destroy(&str50, -1);
    String_Destroy(&str5C, -1);

    *(void **)(self + 0x40) = lbl_8028DFA8;

    fn_800DEF4C(
        self + 0x58,
        &scratch10,
        &scratch14
    );

    fn_800D6878(
        self + 0x68,
        &scratch8,
        &scratchC
    );

    str68.cap = 0;
    str68.size = 0;
    str68.data = 0;
    str68.cap = 0;

    *(s32 *)(self + 0x28) = -0x30;
    self[0x3C] = 0;

    String_ConcatCStr(
        &str44,
        name,
        lbl_80271860 + 0x1E
    );

    String_Assign(
        &str68,
        &str44,
        0,
        -1
    );

    String_Destroy(&str44, -1);

    if (FileCache_Probe(String_CStr(&str68)) != 0x8000) {
        *(void **)(self + 0x48) =
            fn_8005C82C(
                String_CStr(&str68),
                8
            );
    } else {
        *(void **)(self + 0x48) = 0;
    }

    String_ConcatCStr(
        &str38,
        name,
        lbl_80271860 + 0x23
    );

    String_Assign(
        &str68,
        &str38,
        0,
        -1
    );

    String_Destroy(&str38, -1);

    *(void **)(self + 0x4C) =
        fn_80065EE8(String_CStr(&str68));

    String_ConcatCStr(
        &str2C,
        name,
        lbl_80271860 + 0x26
    );

    String_Assign(
        &str68,
        &str2C,
        0,
        -1
    );

    String_Destroy(&str2C, -1);

    *(void **)(self + 0x50) =
        fn_8006CE14(String_CStr(&str68));

    String_ConcatCStr(
        &str20,
        name,
        lbl_80271860 + 0x2A
    );

    String_Assign(
        &str68,
        &str20,
        0,
        -1
    );

    String_Destroy(&str20, -1);

    *(void **)(self + 0x54) =
        fn_8006D948(String_CStr(&str68));

    String_Destroy(&str68, -1);

    return self;
}

#pragma global_optimizer off
fn_800DE73C(arg0, arg1)
void *arg0;
void *arg1;
{
    void Heap_Free(void *);
    void abort(void);
    s32 fprintf(void *, const char *, ...);
    s32 fn_80231944(char *, char *, u32);
    void String_InitFromRange(void *, char *, char *, void *, void *);
    void *fn_800DEF6C(void *, void *, s32, s32, void *);
    extern char __files[];
    extern char lbl_80271860[];
    struct {
        u8 tag;
        u8 pad1[7];
        u8 tag2;
        u8 pad2[3];
        u32 sp14;
        u32 sp18;
        u32 sp1C;
        u32 sp20;
        u32 sp24;
        u32 sp28;
        u32 sp2C;
        u32 sp30;
        String str;
        u32 sp40;
    } st;
    s32 setFirst;
    void *key;
    void *tree;
    u32 keySize = *(u32 *)arg1;
    s32 asLeft;
    char *errFile = __files + 0xA0;
    u8 *best;
    u8 *parent;
    u8 *cur;
    const u32 *minPtr;
    s32 cmp;
    void *node;
    u8 *result;

    tree = arg0;
    key = arg1;
    parent = (u8 *)tree + 4;
    best = NULL;
    asLeft = 1;
    setFirst = 1;
    cur = *(u8 **)((u8 *)arg0 + 4);

    while (cur) {
        char *nodeData;
        nodeData = *(char **)(cur + 0x14);
        parent = cur;
        st.sp24 = *(u32 *)(cur + 0xC);
        st.sp28 = keySize;
        if ((s32)keySize < 0) {
            fprintf(errFile, lbl_80271860 + 0x46);
            abort();
        }
        st.sp30 = keySize;
        minPtr = StrMin(&st.sp30, &st.sp28);
        st.sp2C = *minPtr;
        minPtr = StrMin(&st.sp2C, &st.sp24);
        cmp = fn_80231944(*(char **)((u8 *)key + 8), nodeData, *minPtr);
        if (cmp == 0) {
            if (st.sp2C < st.sp24) {
                cmp = -1;
            } else if (st.sp2C == st.sp24) {
                cmp = 0;
            } else {
                cmp = 1;
            }
        }
        if (cmp < 0) {
            cur = *(u8 **)cur;
            asLeft = 1;
        } else {
            best = cur;
            cur = *(u8 **)(cur + 4);
            asLeft = 0;
            setFirst = 0;
        }
    }

    if (best) {
        char *nodeData;
        st.sp18 = *(u32 *)(best + 0xC);
        st.sp14 = *(u32 *)key;
        nodeData = *(char **)((u8 *)key + 8);
        if ((s32)*(u32 *)(best + 0xC) < 0) {
            fprintf(errFile, lbl_80271860 + 0x46);
            abort();
        }
        st.sp20 = *(u32 *)(best + 0xC);
        minPtr = StrMin(&st.sp20, &st.sp18);
        st.sp1C = *minPtr;
        minPtr = StrMin(&st.sp1C, &st.sp14);
        cmp = fn_80231944(*(char **)(best + 0x14), nodeData, *minPtr);
        if (cmp == 0) {
            if (st.sp1C < st.sp14) {
                cmp = -1;
            } else if (st.sp1C == st.sp14) {
                cmp = 0;
            } else {
                cmp = 1;
            }
        }
        if (!(cmp < 0)) goto found;
    }

    st.str.cap = *(u32 *)((u8 *)key + 4);
    st.tag = st.pad1[3];
    String_InitFromRange(&st.str, *(char **)((u8 *)key + 8), *(char **)((u8 *)key + 8) + keySize, &st.tag2, &st.tag);
    st.sp40 = 0;
    node = fn_800DEF6C(tree, parent, asLeft, setFirst, &st.str);
    result = (u8 *)node + 0xC;
    if (st.str.data) {
        Heap_Free(st.str.data);
    }
    return (s32)result;
found:
    return (s32)(best + 0xC);
}
#pragma global_optimizer reset
void *fn_800DE99C(void *arg0, s16 arg1) {
    void Heap_Free(void *);

    if (arg0 != NULL) {
        if (arg0 == NULL) {
            goto after;
        }
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            Heap_Free(M2C_FIELD(arg0, void **, 8));
        }
    after:
        if (arg1 > 0) {
            Heap_Free(arg0);
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
    } else {
        goto ascent;
again:
        *arg0 = parent;
ascent:
        node = (void **)*arg0;
        parent = (void **)((u32)node[2] & ~1);
        if (node != (void **)*parent) {
            goto again;
        }
        *arg0 = parent;
    }
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
    void Heap_Free(void *);
    Heap_Free(arg1);
}

s32 fn_800DEEBC(s32 arg0) {
    return arg0 + 4;
}

void fn_800DEEC4(void *unused, void *arg1) {
    void Heap_Free(void *);
    void *p;

    if (arg1 != NULL) {
        if (arg1 == NULL) {
            return;
        }
        p = *(void **)((u8 *)arg1 + 8);
        if (p != NULL) {
            Heap_Free(p);
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

#pragma dont_inline on
#pragma global_optimizer off
#pragma scheduling off
void fn_800DEF4C(void *arg0, u8 *arg1) {
    u8 *mid;
    u8 v;
    s32 z;
    z = 0;
    v = *arg1;
    *(u32 *)arg0 = z;
    mid = (u8 *)arg0 + 4;
    *(u32 *)((u8 *)arg0 + 4) = z;
    *((u8 *)arg0 + 8) = v;
    *(void **)((u8 *)arg0 + 0xC) = mid;
}
#pragma scheduling reset
#pragma global_optimizer reset
#pragma dont_inline reset
void *fn_800DEF6C(void *tree, void *parent, u8 asLeft, u8 setFirst, const String *key) {
    void *Heap_Alloc(u32);
    void Tree_InsertFixup(void *, void *);
    void abort(void);
    void fprintf(void *, const char *, ...);
    void *memcpy(void *, const void *, u32);
    extern char __files[];
    extern char lbl_80271860[];
    extern u8 lbl_80366E58;

    void *node;
    String *value;
    u32 len;
    char *src;
    char *end;
    char *buf;
    u32 sentinel;

    sentinel = -2;
    if (*(u32 *)((char *)tree + 0) > sentinel) {
        fprintf(__files + 0xA0, lbl_80271860 + 0x1B0);
        abort();
    }
    node = Heap_Alloc(0x1C);
    if (node == NULL) {
        fprintf(__files + 0xA0, lbl_80271860 + 0x152);
        abort();
    }
    value = (String *)((char *)node + 0xC);
    if (value != NULL) {
        value->cap = key->cap;
        src = key->data;
        end = src + key->size;
        value->data = 0;
        value->size = 0;
        value->cap = 0;
        if (src != end) {
            len = end - src;
            value->cap = (len + 3) - (len & 3);
            buf = Heap_Alloc(value->cap + 1);
            if (!buf) {
                fprintf(__files + 0xA0, lbl_80271860 + 0x152);
                abort();
            }
            value->data = buf;
            memcpy(value->data, src, len);
            value->size = len;
            value->data[len] = lbl_80366E58;
        }
        *(u32 *)((char *)value + 0xC) = *(const u32 *)((const char *)key + 0xC);
    }
    *(u32 *)((char *)node + 4) = 0;
    *(u32 *)((char *)node + 0) = 0;
    *(u32 *)((char *)node + 8) = (u32)parent | (*(u32 *)((char *)node + 8) & 1);
    if ((u8)asLeft) {
        *(void **)((char *)parent + 0) = node;
    } else {
        *(void **)((char *)parent + 4) = node;
    }
    *(u32 *)((char *)tree + 0) += 1;
    Tree_InsertFixup(node, *(void **)((char *)tree + 4));
    if ((u8)setFirst) {
        *(void **)((char *)tree + 0xC) = node;
    }
    return node;
}

#pragma scheduling reset
void Vec3Interp_Set(void *interp, s32 duration, f32 x, f32 y, f32 z, f32 cx, f32 cy, f32 cz) {
    /* Set cubic Vec3 tween target; duration 0 snaps. Else shift history, store controls, set speed from distance. */
    f32 PSVECDistance(f32 *, f32 *);
    extern f32 gVec3InterpZero;
    f32 cur[3];
    f32 dst[3];
    f32 dist;

    if (duration == 0) {
        M2C_FIELD(interp, f32 *, 0x30) = x;
        M2C_FIELD(interp, f32 *, 0x34) = y;
        M2C_FIELD(interp, f32 *, 0x38) = z;
        M2C_FIELD(interp, f32 *, 0x3C) = x;
        M2C_FIELD(interp, f32 *, 0x40) = y;
        M2C_FIELD(interp, f32 *, 0x44) = z;
    } else {
        M2C_FIELD(interp, f32 *, 0x30) = (f32) M2C_FIELD(interp, f32 *, 0x3C);
        M2C_FIELD(interp, f32 *, 0x34) = (f32) M2C_FIELD(interp, f32 *, 0x40);
        M2C_FIELD(interp, f32 *, 0x38) = (f32) M2C_FIELD(interp, f32 *, 0x44);
        M2C_FIELD(interp, f32 *, 0x3C) = (f32) M2C_FIELD(interp, f32 *, 0);
        M2C_FIELD(interp, f32 *, 0x40) = (f32) M2C_FIELD(interp, f32 *, 4);
        M2C_FIELD(interp, f32 *, 0x44) = (f32) M2C_FIELD(interp, f32 *, 8);
    }
    M2C_FIELD(interp, f32 *, 0x48) = x;
    M2C_FIELD(interp, f32 *, 0x4C) = y;
    M2C_FIELD(interp, f32 *, 0x50) = z;
    M2C_FIELD(interp, f32 *, 0x54) = cx;
    M2C_FIELD(interp, f32 *, 0x58) = cy;
    M2C_FIELD(interp, f32 *, 0x5C) = cz;
    M2C_FIELD(interp, f32 *, 0xC) = x;
    M2C_FIELD(interp, f32 *, 0x10) = y;
    M2C_FIELD(interp, f32 *, 0x14) = z;
    M2C_FIELD(interp, s32 *, 0x2C) = duration;
    M2C_FIELD(interp, f32 *, 0x18) = (f32) duration;
    if (duration == 0) {
        M2C_FIELD(interp, f32 *, 0) = (f32) M2C_FIELD(interp, f32 *, 0xC);
        M2C_FIELD(interp, f32 *, 4) = (f32) M2C_FIELD(interp, f32 *, 0x10);
        M2C_FIELD(interp, f32 *, 8) = (f32) M2C_FIELD(interp, f32 *, 0x14);
        return;
    }
    cur[0] = M2C_FIELD(interp, f32 *, 0);
    cur[1] = M2C_FIELD(interp, f32 *, 4);
    cur[2] = M2C_FIELD(interp, f32 *, 8);
    dst[0] = M2C_FIELD(interp, f32 *, 0xC);
    dst[1] = M2C_FIELD(interp, f32 *, 0x10);
    dst[2] = M2C_FIELD(interp, f32 *, 0x14);
    dist = PSVECDistance(dst, cur);
    if (gVec3InterpZero == dist) {
        M2C_FIELD(interp, s32 *, 0x2C) = 0;
        return;
    }
    M2C_FIELD(interp, f32 *, 0x1C) = (f32) (dist / M2C_FIELD(interp, f32 *, 0x18));
}

s32 fn_800DF258(void *arg0, const char *arg1)
{
    void *String_CStr(void *);
    s32 Str_Cmp(const char *, const char *);

    void *str;
    s32 result;

    str = String_CStr((u8 *)arg0 + 0x10);
    result = Str_Cmp((const char *)str, arg1);

    return result == 0;
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" bool fn_800DF298(void *arg0, const char *arg1) {
    return Str_Cmp((char *)String_CStr((s8 *)arg0 + 4), arg1) == 0;
}
#pragma dont_inline reset
#pragma cplusplus reset

void Vec3Interp_Update(void *interp) {
    /* Advance a cubic Vec3 tween by one frame, or snap/stop when finished or already at target. */
    f32 Math_Hermite(f32, f32, f32, f32, f32);
    f32 duration;
    s32 remain;
    f32 t;

    if (M2C_FIELD(interp, s32 *, 0x2C) > 0) {
        if ((M2C_FIELD(interp, f32 *, 0) == M2C_FIELD(interp, f32 *, 0xC)) && (M2C_FIELD(interp, f32 *, 4) == M2C_FIELD(interp, f32 *, 0x10)) && (M2C_FIELD(interp, f32 *, 8) == M2C_FIELD(interp, f32 *, 0x14))) {
            M2C_FIELD(interp, s32 *, 0x2C) = 0;
            return;
        }
        M2C_FIELD(interp, s32 *, 0x2C) = (s32) (M2C_FIELD(interp, s32 *, 0x2C) - 1);
        remain = M2C_FIELD(interp, s32 *, 0x2C);
        if (0 >= remain) {
            M2C_FIELD(interp, s32 *, 0x2C) = 0;
            M2C_FIELD(interp, f32 *, 0) = (f32) M2C_FIELD(interp, f32 *, 0xC);
            M2C_FIELD(interp, f32 *, 4) = (f32) M2C_FIELD(interp, f32 *, 0x10);
            M2C_FIELD(interp, f32 *, 8) = (f32) M2C_FIELD(interp, f32 *, 0x14);
            return;
        }
        duration = M2C_FIELD(interp, f32 *, 0x18);
        t = (duration - (f32) remain) / duration;
        M2C_FIELD(interp, f32 *, 0) = Math_Hermite(M2C_FIELD(interp, f32 *, 0x30), M2C_FIELD(interp, f32 *, 0x3C), M2C_FIELD(interp, f32 *, 0x48), M2C_FIELD(interp, f32 *, 0x54), t);
        M2C_FIELD(interp, f32 *, 4) = Math_Hermite(M2C_FIELD(interp, f32 *, 0x34), M2C_FIELD(interp, f32 *, 0x40), M2C_FIELD(interp, f32 *, 0x4C), M2C_FIELD(interp, f32 *, 0x58), t);
        M2C_FIELD(interp, f32 *, 8) = Math_Hermite(M2C_FIELD(interp, f32 *, 0x38), M2C_FIELD(interp, f32 *, 0x44), M2C_FIELD(interp, f32 *, 0x50), M2C_FIELD(interp, f32 *, 0x5C), t);
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
    void Vec3Interp_Set(f32, f32, f32, f32, f32, f32);
    Vec3Interp_Set(farg0, farg1, farg2, farg0, farg1, farg2);
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
    extern f32 gVec3InterpZero;
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
    d = gVec3InterpZero;
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

#pragma cplusplus on
#pragma global_optimizer off
extern "C" void fn_800DF50C(f32 *arg0) {
extern f32 gVec3InterpZero, lbl_80369EBC, lbl_80369EC0, lbl_80369EC4;
f32 a,b,c,d;
d=gVec3InterpZero;
c=lbl_80369EBC;
arg0[5]=d;
b=lbl_80369EC0;
arg0[4]=d;
a=lbl_80369EC4;
arg0[3]=d;
arg0[2]=d;
arg0[1]=d;
arg0[0]=d;
arg0[6]=d;
arg0[7]=d;
arg0[8]=c;
arg0[9]=b;
arg0[10]=a;
*(s32*)&arg0[11]=0;
arg0[21]=d;
arg0[18]=d;
arg0[15]=d;
arg0[12]=d;
arg0[22]=d;
arg0[19]=d;
arg0[16]=d;
arg0[13]=d;
arg0[23]=d;
arg0[20]=d;
arg0[17]=d;
arg0[14]=d;
}
#pragma global_optimizer reset
extern "C" void fn_800DF584(void *arg0, void *arg1) {
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
        virtual void v3(void *);
    };
    struct Other {
        u8 pad[0x2C];
        u8 flag_2c;
    };
    Obj *self = (Obj *)arg0;
    Other *other;

    if (self->flag_3c != 0) {
        other = (Other *)self->field_38;
        if (other != NULL && other->flag_2c != 0 && self->flag_2c != 0) {
            self->v3(arg1);
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
extern "C" void fn_800DF638(void *arg0, s32 unused) {
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
    String_Assign((void *)((char *)arg0 + 0x10), arg1, 0, -1);
}

u8 fn_800DF6A8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

s32 Sort_GetKey(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

void fn_800DF6B8(void *arg0, u8 *arg1) {
    void String_Copy(void *, u8 *);
    String_Copy(arg0, arg1 + 0x1C);
}

void fn_800DF6DC(s32 arg0, s32 arg1) {
    String_Copy(arg0, arg1 + 0x10);
}

void fn_800DF700(s32 arg0, s32 arg1) {
    String_Copy(arg0, arg1 + 4);
}

void *fn_800DF724(void *arg0, s16 arg1) {
    extern u8 lbl_8028DFC8[];
    void String_Destroy(void *, s32);
    void Heap_Free(void *);
    void *self;
    s16 n;

    n = arg1;
    self = arg0;
    if (self != NULL) {
        *(void **)((u8 *)self + 0x40) = lbl_8028DFC8;
        String_Destroy((u8 *)self + 0x1C, -1);
        String_Destroy((u8 *)self + 0x10, -1);
        String_Destroy((u8 *)self + 0x4, -1);
        if (n > 0) {
            Heap_Free(self);
        }
    }
    return self;
}

#pragma push
#pragma cplusplus on
#pragma optimization_level 4
#pragma opt_propagation off
extern "C" void *fn_800DF7A0(void *arg0, void *arg1, void *path) {
#pragma opt_common_subs off
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
    void String_Init(String *, char *, void *);
    void Xml_GetNamedValue(char *, void *, String *);
    void String_AssignCStr(String *, char *, u32);
    void String_Assign(String *, String *, s32, s32);
    s32 String_Compare(String *, u32, u32, char *, u32);
    char *String_CStr(String *);
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
    void *owner;
    char *p;
    u32 len;
    s32 flag;

    self = (Self *)arg0;
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
    String_Init(&str3C, lbl_80271A30 + 1, &alloc14);
    Xml_GetNamedValue(bufCC, path, &str3C);
    p = bufCC;
    len = strlen(p);
    String_AssignCStr(&str60, p, len);
    String_Destroy(&str3C, -1);
    String_Init(&str30, lbl_80271A30 + 7, &alloc10);
    Xml_GetNamedValue(bufAC, path, &str30);
    p = bufAC;
    len = strlen(p);
    String_AssignCStr(&str54, p, len);
    String_Destroy(&str30, -1);
    String_Init(&str24, lbl_80271A30 + 0xC, &allocC);
    Xml_GetNamedValue(buf8C, path, &str24);
    p = buf8C;
    len = strlen(p);
    String_AssignCStr(&str48, p, len);
    String_Destroy(&str24, -1);
    String_Init(&str18, lbl_80271A30 + 0x12, &alloc8);
    Xml_GetNamedValue(buf6C, path, &str18);
    flag = *(s32 *)buf6C;
    String_Destroy(&str18, -1);
    self->obj = (Obj *)owner;
    String_Assign(&self->s0, &str60, 0, -1);
    String_Assign(&self->s1, &str54, 0, -1);
    len = strlen(lbl_80271A30);
    if (String_Compare(&str48, 0, str48.size, lbl_80271A30, len) == 0) {
        len = strlen(lbl_80271A30 + 0x17);
        String_AssignCStr(&self->s2, lbl_80271A30 + 0x17, len);
    } else {
        String_Assign(&self->s2, &str48, 0, -1);
    }
    self->unk28 = -1;
    self->unk2C = (u8)(flag != 0);
    self->unk34 = 0;
    self->unk30 = 0;
    self->unk3C = 1;
    self->unk38 = self->obj->v2(lbl_80271A30 + 0x1F, String_CStr(&self->s2));
    if (self->unk38 != NULL) {
        self->unk28 = fn_800DC018(self->unk38);
    } else {
        len = strlen(lbl_80271A30);
        String_AssignCStr(&self->s2, lbl_80271A30, len);
        self->unk28 = 0;
    }
    String_Destroy(&str48, -1);
    String_Destroy(&str54, -1);
    String_Destroy(&str60, -1);
    return self;
}
#pragma pop
#pragma cplusplus off

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
    u32 len;
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
    String_Assign(&self->s0, arg2, 0, -1);
    String_Assign(&self->s1, arg3, 0, -1);
    String_Assign(&self->s2, arg4, 0, -1);
    self->unk28 = 0;
    self->unk2C = 1;
    self->unk3C = 1;
    self->unk38 = self->obj->v2(lbl_80271A30 + 0x1F, String_CStr(&self->s2));
    if (self->unk38 != NULL) {
        self->unk28 = fn_800DC018(self->unk38);
    } else {
        len = strlen(lbl_80271A30);
        String_AssignCStr((String *)((u8 *)self + 0x1c), lbl_80271A30, len);
        self->unk28 = 0;
    }
    return arg0;
}
#pragma dont_inline reset
#pragma cplusplus reset

void fn_800DFC2C(void *arg0) {
    volatile u8 src;
    u32 spC;
    *(u8 *)&spC = src;
    fn_800E01EC(*(s32 *)((u8 *)arg0 + 8), (*(s32 *)((u8 *)arg0 + 8) + (*(s32 *)((u8 *)arg0 + 4) << 2)), (u8 *)&spC);
}

#pragma optimization_level 3
#pragma cplusplus on
extern "C" s32 fn_800DFC68(void *arg0, void *arg1, const char *arg2, const char *arg3) {
    u8 fn_800DF298(void *, const char *);
    u8 fn_800DF258(void *, const char *);
    s32 Str_Cmp(const char *, const char *);
    extern char lbl_80271B50[];
    struct Cb {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5(void *) = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9() = 0;
    };
    struct List {
        void *unk0;
        s32 count;
        void **items;
    };
    List *list;
    const char *name;
    const char *filter;
    u8 flag;
    s32 off;
    u32 match;
    void *item;
    s32 i;
    s32 count;

    list = (List *)arg0;
    name = arg2;
    filter = arg3;
    ((Cb *)arg1)->v9();
    flag = 0;
    if (filter == 0 || Str_Cmp(filter, lbl_80271B50) == 0) {
        flag = 1;
    }
    match = (u8)flag != 0;
    count = 0;
    i = 0;
    off = 0;
    while (i < list->count) {
        item = *(void **)((u8 *)list->items + off);
        if (fn_800DF298(item, name) != 0) {
            if (match != 0 || fn_800DF258(item, filter) != 0) {
                ((Cb *)arg1)->v5(item);
                count += 1;
            }
        }
        i += 1;
        off += 4;
    }
    return count;
}
#pragma cplusplus reset
#pragma optimization_level reset

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
    s32 off;
    s32 i;

    i = list->count - 1;
    off = i * 4;
    while (i >= 0) {
        Obj *p = *(Obj **)((u8 *)list->items + off);
        if (p->owner == list) {
            delete p;
        }
        i--;
        off -= 4;
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

#pragma use_lmw_stmw on
#pragma push
#pragma opt_propagation off
#pragma opt_strength_reduction off
extern "C" void fn_800DFEFC(void *arg0, const char *arg1, const char *arg2) {
    u8 fn_800DF298(void *, const char *);
    u8 fn_800DF258(void *, const char *);
    void fn_800DD87C(void *, s32);
    struct Obj {
        u8 pad[0x40];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual ~Obj() = 0;
    };
    s32 off_load;
    s32 off_erase;
    s32 i;
    const char *b;
    const char *a;
    void *self;

    off_load = 0;
    self = arg0;
    a = arg1;
    b = arg2;
    off_erase = off_load;
    i = 0;
    while (i < *(s32 *)((u8 *)self + 4)) {
        if (fn_800DF298(*(void **)(*(u8 **)((u8 *)self + 8) + off_load), a)) {
            if (fn_800DF258(*(void **)(*(u8 **)((u8 *)self + 8) + off_load), b)) {
                delete *(Obj **)(*(u8 **)((u8 *)self + 8) + off_load);
                fn_800DD87C(self, (s32)(*(u8 **)((u8 *)self + 8) + off_erase));
            }
        }
        off_erase += 4;
        i += 1;
        off_load += 4;
    }
}
#pragma pop
#pragma cplusplus reset

void fn_800DFFB8(void *arg0, s32 arg1) {
    void fn_800C9BC4(void *, void *, s32, s32 *);
    s32 sp8;

    sp8 = arg1;
    fn_800C9BC4(arg0, (u8 *)*(void **)((u8 *)arg0 + 8) + (*(s32 *)((u8 *)arg0 + 4) << 2), 1, &sp8);
}

s32 ObjList_Get(void *arg0, s32 arg1) {
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
extern "C" void *ObjList_Destroy(void *arg0, s16 arg1)
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
    void Heap_Free(void *);
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
                        Heap_Free(*(void **)((u8 *)self + 8));
                    }
                }
            }
        }

        if (flag > 0) {
            Heap_Free(self);
        }
    }
    return self;
}
#pragma cplusplus reset
void ObjList_Init(void *arg0) {
    extern u8 lbl_8028DFE8[56];
    u32 *p = (u32 *)arg0;

    p[4] = (u32)lbl_8028DFE8;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}

int fn_800E01EC(s32 *begin,s32 *end,u8 *compare) {
s32 Sort_GetKey(void *);
void fn_800E0F2C(s32 *,s32 *,u8 *);
void fn_800E0FBC(void *,s32);
void StableSort(s32 *,s32 *,void *,void *,void *);
void Heap_FreeRaw(void *);
#pragma cplusplus on
struct Allocation { s32 *data; s32 count; } allocated;
struct Buffer { s32 capacity,count; s32 *data;
Buffer(struct Allocation a) { capacity=a.count; count=0; data=a.data; }
SortIterator begin() { s32 raw[2]; raw[0]=(s32)data; raw[1]=(s32)this; return *(struct SortIterator*)raw; }
SortIterator end() { s32 raw[2]; raw[0]=(s32)(data+capacity); raw[1]=(s32)this; return *(struct SortIterator*)raw; }
};
s32 n=((s32)end-(s32)begin)/4;
s32 value,key;
if(n>1) {
if(n==2) {
value=*begin; key=Sort_GetKey((void*)end[-1]);
if(Sort_GetKey((void*)value)>key) { s32 temp=*begin; *begin=end[-1]; end[-1]=temp; }
} else if(n<=20) {
u8 comp=*compare;
fn_800E0F2C(begin,end,&comp);
} else {
fn_800E0FBC(&allocated,n);
Buffer buffer(allocated);
StableSort(begin,end,&buffer.begin(),&buffer.end(),&SortCompare(*(SortCompare*)compare));
for(s32 *p=buffer.data;p<buffer.data+buffer.count;++p) { }
Heap_FreeRaw(buffer.data);
}
}
#pragma cplusplus reset
}

s32 fn_800E0340(void *arg0, void *arg1, void *arg2)
{
    s32 Sort_GetKey(void *);
    s32 a;
    s32 b;

    a = Sort_GetKey(arg1);
    b = Sort_GetKey(arg2);
    return a < b;
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_800E0398(SortIterator *result, s32 *first1, s32 *last1, s32 *first2, s32 *last2, SortIterator *out) {
    s32 Sort_GetKey(void *);
    s32 takeB_mem[2];
    s32 takeA_mem[2];
    s32 copyB_mem[2];
    s32 copyA_mem[2];
    while (first1 != last1 && first2 != last2) {
        s32 value = *first1;
        s32 key = Sort_GetKey((void *)*first2);
        if (Sort_GetKey((void *)value) > key) {
            *(SortOutputProxy *)takeB_mem = SortOutputProxy(out->ptr, out->state);
            *(SortOutputProxy *)takeB_mem = *first2;
            first2++;
        } else {
            *(SortOutputProxy *)takeA_mem = SortOutputProxy(out->ptr, out->state);
            *(SortOutputProxy *)takeA_mem = *first1;
            first1++;
        }
        ++(*out);
    }
    if (first1 == last1) {
        *(SortIterator *)copyB_mem = *out;
        s32 *cur = first2;
        while (cur != last2) {
            *(*(SortIterator *)copyB_mem) = *cur;
            cur++;
            ((SortIterator *)copyB_mem)->ptr++;
        }
        *result = *(SortIterator *)copyB_mem;
    } else {
        *(SortIterator *)copyA_mem = *out;
        s32 *cur = first1;
        while (cur != last1) {
            *(*(SortIterator *)copyA_mem) = *cur;
            cur++;
            ((SortIterator *)copyA_mem)->ptr++;
        }
        *result = *(SortIterator *)copyA_mem;
    }
}
#pragma cplusplus off

#pragma use_lmw_stmw on
s32 *fn_800E060C(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 Sort_GetKey(void *);
    s32 key;
    s32 elem;
    s32 count;
    s32 *ptr;
    s32 mid;

    count = arg1 - arg0;
    while (count > 0) {
        mid = count / 2;
        ptr = arg0 + mid;
        elem = *ptr;
        key = Sort_GetKey((void *)*arg2);
        if (Sort_GetKey((void *)elem) <= key) {
            arg0 = ptr + 1;
            count -= mid + 1;
        } else {
            count = mid;
        }
    }
    return arg0;
}

#pragma dont_inline on
void *fn_800E069C(void *arg0, void *arg1, s32 *arg2) {
    s32 Sort_GetKey(void *);
    s32 count;
    void **mid_ptr;
    s32 mid;
    s32 mid_val;

    count = ((s32)arg1 - (s32)arg0) / 4;
    while (count > 0) {
        mid = count / 2;
        mid_ptr = (void **)((u8 *)arg0 + (mid * 4));
        mid_val = Sort_GetKey(*mid_ptr);
        if (Sort_GetKey((void *)*arg2) > mid_val) {
            arg0 = mid_ptr + 1;
            count -= (u32)mid + 1;
        } else {
            count = mid;
        }
    }
    return arg0;
}
#pragma dont_inline reset
#pragma push
#pragma optimization_level 4
#pragma global_optimizer on
#pragma opt_propagation off
s32 *fn_800E0728(s32 *first, s32 *mid, s32 *last, s32 n1, s32 n2, SortIteratorFields *from, SortIteratorFields *to) {
    void fn_800E0EE0(s32 *, s32 *, s32 *, void *);
    SortIteratorFields outA, stopA, curA, outB, curB, stopB;
    SortIteratorFields tmpA, tmpB, proxyA, proxyB;
    struct Category { u8 tag; } categoryCopy, category;
    s32 available = to->a - from->a;
    if (n1 <= n2 && n1 <= available) {
        s32 *src=first;
        outA=*from;
        while(src!=mid) {
            proxyA=outA;
            if ((proxyA.a-*(s32 **)(proxyA.b+8)) < *(s32 *)(proxyA.b+4)) *(s32 *)proxyA.a=*src;
            else {
                if((s32 *)proxyA.a != 0) *(s32 *)proxyA.a=*src;
                ++*(s32 *)(proxyA.b+4);
            }
            ++src;
            outA.a++;
        }
        *to=outA;
        {
            s32 *dst=first;
            while(mid<last) *dst++=*mid++;
        }
        curA=*to; stopA=*from;
        while((u32)curA.a!=(u32)stopA.a) {
            curA.a--;
            tmpA=curA;
            *--last=*(s32 *)tmpA.a;
        }
        return last;
    } else if (n2<=available) {
        s32 *src=mid;
        outB=*from;
        while(src!=last) {
            proxyB=outB;
            if ((proxyB.a-*(s32 **)(proxyB.b+8)) < *(s32 *)(proxyB.b+4)) *(s32 *)proxyB.a=*src;
            else {
                if((s32 *)proxyB.a != 0) *(s32 *)proxyB.a=*src;
                ++*(s32 *)(proxyB.b+4);
            }
            ++src;
            outB.a++;
        }
        *to=outB;
        while(mid>first) *--last=*--mid;
        stopB=*to; curB=*from;
        {
            s32 *dst=first;
            while((u32)curB.a!=(u32)stopB.a) {
                tmpB=curB;
                curB.a++;
                *dst++=*(s32 *)tmpB.a;
            }
            return dst;
        }
    } else {
        categoryCopy = category;
        fn_800E0EE0(first,mid,last,&categoryCopy);
        return first+n2;
    }
}
#pragma pop
#pragma cplusplus on
extern "C" void fn_800E0A94(SortIterator &first1, SortIterator last1, s32 *first2, s32 *last2, s32 *result, SortCompare comp) {
    s32 Sort_GetKey(void *);
    s32 key;
    while (first1.ptr != last1.ptr && first2 != last2) {
        s32 value = *first1;
        key = Sort_GetKey((void *)*first2);
        if (Sort_GetKey((void *)value) > key) {
            *result = *first2++;
        } else {
            SortIterator tmp = first1++;
            SortIterator *p = &tmp;
            *result = *p->ptr;
        }
        result++;
    }
    if (first1.ptr == last1.ptr) {
        s32 *out = result;
        s32 *cur = first2;
        while (cur < last2)
            *out++ = *cur++;
    } else {
        s32 *out = result;
        SortIterator end = last1;
        SortIterator cur = first1;
        SortIterator *pend = &end;
        SortIterator *pcur = &cur;
        while (pcur->ptr != pend->ptr) {
            SortIterator tmp = *pcur;
            SortIterator *p = &tmp;
            *out++ = *p->ptr;
            pcur->ptr = p->ptr + 1;
        }
    }
}
#pragma push
#pragma cplusplus on
#pragma optimization_level 4
#pragma use_lmw_stmw on
#pragma global_optimizer off
#pragma opt_propagation off
#pragma auto_inline off
extern "C" s32 *fn_800E0C44(s32 *begin, s32 *end, SortIterator &first, SortIterator last, s32 *out, SortCompare comp) {
 s32 Sort_GetKey(void *);
 if (begin == end) { return Sort_CopyBackwardIter(first,last,out); }
 if(first.ptr == last.ptr) { return Sort_CopyBackwardPtr(begin,end,out); }
 --end; --last.ptr;
 for (;;) {
 SortIterator tmp(last);
 s32 value=*end;
 s32 key=Sort_GetKey((void*)*tmp.ptr);
 if(Sort_GetKey((void*)value)>key) {
 *--out=*end;
 if(begin==end) {
 ++last.ptr;
 return Sort_CopyBackwardIter(first,last,out);
 }
 --end;
 } else {
 SortIterator tmp(last); *--out=*tmp.ptr;
 if(first.ptr==last.ptr) { return Sort_CopyBackwardPtr(begin,end+1,out); }
 --last.ptr;
 }
 }
}
#pragma pop
#pragma cplusplus off
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
    s32 Sort_GetKey(void *);

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
                    key = Sort_GetKey((void *)value),
                    Sort_GetKey((void *)other) > key)) {
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
extern "C" void StableSort(s32 *begin,s32 *end,SortIterator a,SortIterator b,SortCompare comp) {
 /* Stable-sort [begin,end) by Sort_GetKey; uses buffer [a,b) when large enough, else in-place merge. */
 s32 Sort_GetKey(void *);
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
 key=Sort_GetKey((void *)end[-1]);
 if(Sort_GetKey((void *)value)>key) {
 other=*begin; *begin=end[-1]; end[-1]=other;
 }
 } else if(n<=20) {
 if(begin!=end) {
 s32 *hole,*prev; s32 value; s32 *cur; s32 other,key;
 for(cur=begin+1;cur<end;cur++) {
 value=*cur; prev=cur; hole=cur;
 while(begin<hole && (other=*--prev,key=Sort_GetKey((void *)value),Sort_GetKey((void *)other)>key)) {
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
 StableSort(begin,mid,a,b,comp);
 StableSort(mid,end,a,b,comp);
 fn_800E14E4(begin,mid,end,comp,((s32)mid-(s32)begin)/4,((s32)end-(s32)mid)/4,a,b);
 }
 }
#pragma cplusplus off
}

#pragma cplusplus on
#pragma use_lmw_stmw on
#pragma global_optimizer off
extern "C" void fn_800E1340(SortIterator first1, SortIterator last1, SortIterator first2, SortIterator last2, s32 *result, SortCompare comp) {
    s32 Sort_GetKey(void *);
    s32 key;
    for (; first1.ptr != last1.ptr && first2.ptr != last2.ptr; ++result) {
        SortIterator t2 = first2;
        SortIterator t1 = first1;
        s32 value = *t1.ptr;
        key = Sort_GetKey((void *)*t2.ptr);
        if (Sort_GetKey((void *)value) > key) {
            SortIterator tmp = first2;
            s32 val = *tmp.ptr;
            first2.ptr++;
            *result = val;
        } else {
            SortIterator tmp = first1;
            s32 val = *tmp.ptr;
            first1.ptr++;
            *result = val;
        }
    }
    if (first1.ptr == last1.ptr) {
        s32 *out = result;
        SortIterator end = last2;
        SortIterator cur = first2;
        while (cur.ptr != end.ptr) {
            SortIterator tmp = cur;
            *out++ = *tmp.ptr;
            cur.ptr++;
        }
    } else {
        s32 *out = result;
        SortIterator end = last1;
        SortIterator cur = first1;
        while (cur.ptr != end.ptr) {
            SortIterator tmp = cur;
            *out++ = *tmp.ptr;
            cur.ptr++;
        }
    }
}
#pragma global_optimizer reset
#pragma cplusplus off

#pragma cplusplus on
#pragma use_lmw_stmw on
#pragma opt_common_subs off
extern "C" void fn_800E14E4(s32 *begin, s32 *mid, s32 *end, SortCompare comp, s32 len1, s32 len2, SortIterator a, SortIterator b) {
    s32 fn_800DF6B0(void *);
    s32 *fn_800E060C(s32 *, s32 *, s32 *, SortCompare);
    s32 *fn_800E069C(s32 *, s32 *, s32 *, SortCompare);
    s32 *fn_800E0728(s32 *, s32 *, s32 *, s32, s32, SortIterator, SortIterator);
    void fn_800E0A94(SortIterator &, SortIterator, s32 *, s32 *, s32 *, SortCompare);
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
static inline SortIterator Sort_PassIter(SortIterator it) { return it; }
#pragma use_lmw_stmw on
#pragma inline_max_size(10000)
#pragma inline_max_total_size(20000)
extern "C" void fn_800E18B4(s32 *, s32 *, SortIterator, SortCompare);
static inline void Sort_BufferedHalf(s32 *begin, s32 *end, SortIterator a, SortIterator b, SortCompare &c) {
    s32 Sort_GetKey(void *);
    s32 fn_800E0340(void *, void *, void *);
    void fn_800E2180(s32 *, s32 *);
    void fn_800E0F2C(s32 *, s32 *, SortCompare);
    s32 fn_800E2168(SortIterator *, SortIterator *);
    SortIterator fn_800E2138(const SortIterator *, s32);
    void fn_800E1340(SortIterator, SortIterator, SortIterator, SortIterator, s32 *, SortCompare);
    void fn_800E14E4(s32 *, s32 *, s32 *, SortCompare, s32, s32, SortIterator, SortIterator);
    void StableSort(s32 *, s32 *, SortIterator, SortIterator, SortCompare);
    SortIterator fn_800E0398(s32 *, s32 *, s32 *, s32 *, SortIterator, SortCompare);
            s32 n = ((s32)end - (s32)begin) / 4;
            if (n > 1) {
                if (n == 2) {
                    if ((u8)fn_800E0340(&c, (void *)end[-1], (void *)*begin)) {
                        fn_800E2180(begin, end - 1);
                    }
                } else if (n <= 20) {
                    fn_800E0F2C(begin, end, c);
                } else {
                    s32 *middle;
                    s32 half = n / 2;
                    middle = begin + half;
                    if (n <= fn_800E2168(&b, &a)) {
                        fn_800E18B4(begin, middle, a, c);
                        fn_800E18B4(middle, end, SortIterator(fn_800E2138(&a, half)), c);
                        fn_800E1340(a, SortIterator(fn_800E2138(&a, half)), SortIterator(fn_800E2138(&a, half)), SortIterator(fn_800E2138(&a, n)), begin, c);
                    } else {
                        StableSort(begin, middle, a, b, c);
                        StableSort(middle, end, a, b, c);
                        fn_800E14E4(begin, middle, end, c, ((s32)middle - (s32)begin) / 4, ((s32)end - (s32)middle) / 4, a, b);
                    }
                }
            }
}

#pragma cplusplus on
#pragma opt_pointer_aliasing off
extern "C" void fn_800E18B4(s32 *begin, s32 *end, SortIterator out, SortCompare comp) {
    s32 Sort_GetKey(void *);
    s32 fn_800E0340(void *, void *, void *);
    void fn_800E2180(s32 *, s32 *);
    void fn_800E0F2C(s32 *, s32 *, SortCompare);
    s32 fn_800E2168(SortIterator *, SortIterator *);
    SortIterator fn_800E2138(const SortIterator *, s32);
    void fn_800E1340(SortIterator, SortIterator, SortIterator, SortIterator, s32 *, SortCompare);
    void fn_800E14E4(s32 *, s32 *, s32 *, SortCompare, s32, s32, SortIterator, SortIterator);
    void StableSort(s32 *, s32 *, SortIterator, SortIterator, SortCompare);
    SortIterator fn_800E0398(s32 *, s32 *, s32 *, s32 *, SortIterator, SortCompare);
    s32 half_n;
    s32 n = ((s32)end - (s32)begin) / 4;
    s32 *mid;
    s32 *cur;
    s32 value;
    s32 *prev, *hole;
    s32 other, key;
    if (n <= 0) {
        return;
    }
    if (n == 1) {
        *out = *begin;
        return;
    }
    if (n == 2) {
        value = *begin;
        key = Sort_GetKey((void *)end[-1]);
        if (Sort_GetKey((void *)value) > key) {
            s32 it_mem[2];
            it_mem[1] = out.state; it_mem[0] = (s32)out.ptr;
            SortIterator *pit = (SortIterator *)it_mem;
            cur = end;
            while (begin != cur) {
                --cur;
                *(*pit) = *cur;
                ++(*pit);
            }
        } else {
            s32 it_mem[2];
            it_mem[1] = out.state; it_mem[0] = (s32)out.ptr;
            SortIterator *pit = (SortIterator *)it_mem;
            for (cur = begin; cur != end; cur++) {
                *(*pit) = *cur;
                ++(*pit);
            }
        }
        return;
    }
    if (n <= 20) {
        if (begin != end) {
            s32 *hole, *prev; s32 value; s32 *cur; s32 other, key;
            for (cur = begin + 1; cur < end; cur++) {
                value = *cur;
                prev = cur;
                hole = cur;
                while (begin < hole && (other = *--prev, key = Sort_GetKey((void *)value), Sort_GetKey((void *)other) > key)) {
                    *hole = *prev;
                    --hole;
                }
                *hole = value;
            }
        }
        {
            s32 it_mem[2];
            it_mem[1] = out.state; it_mem[0] = (s32)out.ptr;
            SortIterator *pit = (SortIterator *)it_mem;
            for (cur = begin; cur != end; cur++) {
                *(*pit) = *cur;
                ++(*pit);
            }
        }
        return;
    }
    {
      half_n = (n / 2) * 4;
      mid = (s32 *)((u8 *)begin + half_n);
      {
        SortCompare c(comp);
        SortIterator o(out);
        s32 b_tmp0[2], b_tmp[2];
        *(SortIterator *)b_tmp0 = o;
        ((SortIterator *)b_tmp0)->ptr = (s32 *)((u8 *)((SortIterator *)b_tmp0)->ptr + half_n);
        *(SortIterator *)b_tmp = *(SortIterator *)b_tmp0;
        Sort_BufferedHalf(begin, mid, o, *(SortIterator *)b_tmp, c);
      }
      {
        SortCompare c(comp);
        s32 b_tmp0[2], b_tmp[2], a_tmp0[2], a_tmp[2];
        *(SortIterator *)b_tmp0 = out;
        ((SortIterator *)b_tmp0)->ptr += n;
        *(SortIterator *)b_tmp = *(SortIterator *)b_tmp0;
        *(SortIterator *)a_tmp0 = out;
        ((SortIterator *)a_tmp0)->ptr = (s32 *)((u8 *)((SortIterator *)a_tmp0)->ptr + half_n);
        *(SortIterator *)a_tmp = *(SortIterator *)a_tmp0;
        Sort_BufferedHalf(mid, end, *(SortIterator *)a_tmp, *(SortIterator *)b_tmp, c);
      }
      fn_800E0398(begin, mid, mid, end, out, comp);
    }
}
#pragma opt_pointer_aliasing reset
#pragma cplusplus off

#pragma push
#pragma scheduling on
void fn_800E2138(PairAB *out, const PairAB *src, s32 offset) {
    PairAB result = *src;
    result.a += offset * 4;
    *out = result;
}
#pragma pop
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
    void String_Destroy(void *, s32);
    void fn_800DF724(void *, s32);
    void Heap_Free(void *);
    extern void *lbl_8028E020[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E020;
        String_Destroy((s8 *)arg0 + 0x54, -1);
        if (arg0 != NULL) {
            *(void **)((char *)arg0 + 0x40) = (void *)lbl_8028E090;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void fn_800E2218(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
}

void fn_800E2220(u8 *self,s32 layer) {
void fn_800E2E70(void *,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
void SpriteSheet_DrawFrame(void *,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
void fn_800E320C(void *,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,f32);
extern f32 lbl_80369EC8;
void *sheet=*(void **)(self+0x60);
if(sheet) {
u8 *parent=*(u8**)(self+0x38);
s32 x=(s32)(*(f32*)(parent+0x68)+(f32)(*(s32*)(parent+0x60)+(*(s32*)(self+0x48)-*(s32*)(self+0x70))));
s32 y=*(s32*)(parent+0x64)+(*(s32*)(self+0x4c)-*(s32*)(self+0x74));
s32 alpha=(s32)(*(f32*)(parent+0x6c)*(f32)(u32)self[0x53]);
f32 scale;
if(lbl_80369EC8==(scale=*(f32*)(self+0x6c))) {
if(*(s32*)(self+0x68)) fn_800E2E70(sheet,layer,*(s32*)(self+0x64),x,y,*(s32*)(self+0x44),self[0x50],self[0x51],self[0x52],alpha,*(s32*)(self+0x78));
else SpriteSheet_DrawFrame(sheet,layer,*(s32*)(self+0x64),x,y,*(s32*)(self+0x44),self[0x50],self[0x51],self[0x52],alpha,*(s32*)(self+0x78));
} else fn_800E320C(sheet,layer,*(s32*)(self+0x64),x,y,*(s32*)(self+0x44),self[0x50],self[0x51],self[0x52],alpha,*(s32*)(self+0x78),scale);
}
}

#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
void *fn_800E2370(void *arg0, void *arg1, void *arg2)
{
    void *fn_800E2CF4(void *, void *, void *);
    void String_Init(String *, char *, void *);
    void Xml_GetNamedValue(void *, void *, String *);
    void String_AssignCStr(String *, const char *, u32);
    void String_Destroy(String *, s32);
    void *fn_800E7FB4(void *, String *);
    s32 fn_800E2E68(void *);
    s32 fn_800E2E60(void *);
    u32 strlen(const char *);

    extern u8 lbl_8028E020[];
    extern char lbl_80271C50[];
    extern const f32 lbl_80369EC8;
    extern const f32 lbl_80369EE0;
    extern f64 lbl_80369ED0;

    struct Value {
        u32 v[8];
    };

    struct Value value0;
    struct Value value1;
    struct Value value2;
    struct Value value3;
    struct Value value4;
    struct Value value5;

    String temporary;
    String name0;
    String name1;
    String name2;
    String name3;
    String name4;
    String name5;

    s32 scratch0;
    s32 scratch1;
    s32 scratch2;
    s32 scratch3;
    s32 scratch4;
    s32 scratch5;

    void *owner;
    void *parent;
    u8 *self;
    void *resource;
    s32 enabled;
    char *text;
    u32 len;
    s32 width;
    s32 height;
    f32 dimension;
    f32 scale;

    parent = arg2;
    self = (u8 *)arg0;

    fn_800E2CF4(arg0, arg1, arg2);

    *(void **)(self + 0x40) = lbl_8028E020;

    *(u32 *)(self + 0x54) = 0;
    *(u32 *)(self + 0x58) = 0;
    *(u32 *)(self + 0x5C) = 0;
    *(u32 *)(self + 0x58) = 0;

    owner = *(void **)self;
    temporary.cap = 0;
    temporary.size = 0;
    temporary.data = 0;
    temporary.cap = 0;

    String_Init(
        &name0,
        lbl_80271C50,
        &scratch0
    );

    Xml_GetNamedValue(
        &value0,
        parent,
        &name0
    );

    text = (char *)&value0;
    len = strlen(text);
    String_AssignCStr((String *)(self + 0x54), text, len);

    String_Destroy(&name0, -1);

    String_Init(
        &name1,
        lbl_80271C50 + 8,
        &scratch1
    );

    Xml_GetNamedValue(
        &value1,
        parent,
        &name1
    );

    *(u32 *)(self + 0x64) = value1.v[0];

    String_Destroy(&name1, -1);

    String_Init(
        &name2,
        lbl_80271C50 + 0xD,
        &scratch2
    );

    Xml_GetNamedValue(
        &value2,
        parent,
        &name2
    );

    *(f32 *)(self + 0x6C) =
        *(f32 *)&value2.v[0];

    String_Destroy(&name2, -1);

    String_Init(
        &name3,
        lbl_80271C50 + 0x13,
        &scratch3
    );

    Xml_GetNamedValue(
        &value3,
        parent,
        &name3
    );

    *(u32 *)(self + 0x68) = value3.v[0];

    String_Destroy(&name3, -1);

    String_Init(
        &name4,
        lbl_80271C50 + 0x1A,
        &scratch4
    );

    Xml_GetNamedValue(
        &value4,
        parent,
        &name4
    );

    enabled = value4.v[0];

    String_Destroy(&name4, -1);

    String_Init(
        &name5,
        lbl_80271C50 + 0x21,
        &scratch5
    );

    Xml_GetNamedValue(
        &value5,
        parent,
        &name5
    );

    *(u32 *)(self + 0x78) = value5.v[0];

    String_Destroy(&name5, -1);

    if (enabled != 0) {
        enabled = (s32)fn_800E7FB4(
            owner,
            (String *)(self + 0x54)
        );

        if (lbl_80369EC8 == *(f32 *)(self + 0x6C)) {
            width = fn_800E2E68((void *)enabled);

            *(s32 *)(self + 0x70) =
                width / 2;

            height = fn_800E2E60((void *)enabled);

            *(s32 *)(self + 0x74) =
                height / 2;
        } else {
            width = fn_800E2E68((void *)enabled);

            dimension = (f32)width;
            scale = *(f32 *)(self + 0x6C) * dimension;
            *(s32 *)(self + 0x70) = (s32)(scale * lbl_80369EE0);

            height = fn_800E2E60((void *)enabled);

            dimension = (f32)height;
            scale = *(f32 *)(self + 0x6C) * dimension;
            *(s32 *)(self + 0x74) = (s32)(scale * lbl_80369EE0);
        }
    } else {
        *(s32 *)(self + 0x74) = 0;
        *(s32 *)(self + 0x70) = 0;
    }

    *(void **)(self + 0x60) =
        fn_800E7FB4(
            owner,
            (String *)(self + 0x54)
        );

    String_Destroy(&temporary, -1);
    return self;
}
#pragma pop
void *fn_800E266C(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s16);
    void Heap_Free(void *);
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = lbl_8028E090;
        fn_800DF724(arg0, 0);
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void *fn_800E26CC(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s32);
    void Heap_Free(void *);
    extern u8 lbl_8028E058[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x40) = lbl_8028E058;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0x40) = lbl_8028E090;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void Win_DrawColorRect(void *win) {
    /* Draw the window's axis-aligned fill rect; alpha = base alpha * parent fade. */
    M2C_UNK Prim2D_SetColor(u8, u8, u8, u8);
    M2C_UNK Prim2D_SetRect(f32, f32, f32, f32);
    M2C_UNK Prim2D_EndPrim();
    M2C_UNK Prim2D_AddPrim(M2C_UNK);
    M2C_UNK Prim2D_SetTransform(f32, f32, f32, f32);
    M2C_UNK Prim2D_SetTex(M2C_UNK, M2C_UNK);
    M2C_UNK Prim2D_PrepareTex();
    M2C_UNK Prim2D_Begin();
    extern f32 gWinDrawZero;
    extern f32 gWinDrawOne;
    M2C_UNK texMode;
    s32 w;
    s32 h;
    s32 x;
    s32 y;
    unsigned int alpha;

    texMode = 0x10;
    x = M2C_FIELD(win, s32 *, 0x54);
    y = M2C_FIELD(win, s32 *, 0x58);
    w = M2C_FIELD(win, s32 *, 0x5C) - x;
    h = M2C_FIELD(win, s32 *, 0x60) - y;
    alpha = (s32) (M2C_FIELD(M2C_FIELD(win, void **, 0x38), f32 *, 0x6C) * (f32) M2C_FIELD(win, u8 *, 0x53));
    if ((u8) M2C_FIELD(win, u8 *, 0x64) != 0) {
        texMode = 0x800;
    }
    Prim2D_Begin();
    Prim2D_SetTransform(gWinDrawZero, gWinDrawZero, (f32) M2C_FIELD(win, s32 *, 0x44), gWinDrawOne);
    Prim2D_SetTex(0, texMode);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32) x, (f32) y, (f32) w, (f32) h);
    Prim2D_SetColor(M2C_FIELD(win, u8 *, 0x50), M2C_FIELD(win, u8 *, 0x51), M2C_FIELD(win, u8 *, 0x52), (u8) alpha);
    Prim2D_EndPrim();
}

void *fn_800E2884(u8 *self, void *arg1, void *arg2) {
    void fn_800E2CF4();
    void Xml_GetNamedValue(void *,void *,void *);
    extern u8 lbl_8028E058[];
    extern char lbl_80271D58[];
    struct Value { u32 v[8]; } value, temp, flag;
    String name, name2;
    s32 scratch, scratch2;
    fn_800E2CF4(self,arg1);
    *(void **)(self+0x40)=lbl_8028E058;
    *(u32 *)(self+0x60)=0;
    *(u32 *)(self+0x5C)=0;
    *(u32 *)(self+0x58)=0;
    *(u32 *)(self+0x54)=0;
    String_Init(&name,lbl_80271D58,&scratch);
    Xml_GetNamedValue(&temp,arg2,&name);
    value=temp;
    String_Destroy(&name,-1);
    String_Init(&name2,lbl_80271D58+5,&scratch2);
    Xml_GetNamedValue(&flag,arg2,&name2);
    self[0x64]=flag.v[0]!=0;
    String_Destroy(&name2,-1);
    *(u32 *)(self+0x54)=value.v[0];
    *(u32 *)(self+0x58)=value.v[1];
    *(u32 *)(self+0x5C)=value.v[2];
    *(u32 *)(self+0x60)=value.v[3];
    return self;
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
void fn_800E2A00(Unit *unit, const s32 *arg1, u8 arg2, u8 arg3, u8 arg4, u8 arg5) {
    s32 w;
    s32 h;
    s32 x;
    s32 y;

    x = arg1[0];
    w = arg1[2] - x;
    y = arg1[1];
    h = arg1[3] - y;

    Prim2D_Begin();
    Prim2D_SetTransform(lbl_80369F00, lbl_80369F00, (f32) *(s32 *)((u8 *)unit + 0x44), lbl_80369F04);
    Prim2D_SetTex(0, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32) x, (f32) y, (f32) w, (f32) h);
    Prim2D_SetColor(arg2, arg3, arg4, arg5);
    Prim2D_EndPrim();
}

void fn_800E2B10(void *arg0, s32 arg1, s32 arg2, void *arg3, u8 arg4, u8 arg5, f32 arg6)
{
    extern f32 lbl_80369F00;
    extern f32 lbl_80369F04;
    extern f32 lbl_80369F10;

    void Prim2D_Begin(void);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_SetTex(s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_AddPrim(u8);
    void Prim2D_SetPos(f32, f32);
    void Prim2D_SetScale(f32);
    void Prim2D_SetText(void *);
    void Prim2D_SetTint(u8, u8, u8, u8);
    void Prim2D_SetColor(u8, u8, u8, u8);
    void Prim2D_EndPrim(void);
    void *String_CStr(void *);

    void *parent;
    s32 alpha;
    f32 scale;

    parent = *(void **)((u8 *)arg0 + 0x38);
    alpha = (s32)(*(f32 *)((u8 *)parent + 0x6C) * (f32)*(u8 *)((u8 *)arg0 + 0x53));

    Prim2D_Begin();

    Prim2D_SetTransform(
        lbl_80369F00,
        lbl_80369F00,
        (f32)*(s32 *)((u8 *)arg0 + 0x44),
        lbl_80369F04
    );

    if (arg4) {
        Prim2D_SetTex(0, 0x33);
    } else {
        Prim2D_SetTex(0, 0x13);
    }

    Prim2D_PrepareTex();

    if (arg5 == 0xFF) {
        arg5 = 5;
    }

    Prim2D_AddPrim(arg5);
    Prim2D_SetPos((f32)arg1, (f32)arg2);
    scale = arg6 / lbl_80369F10;
    Prim2D_SetScale(scale);
    Prim2D_SetText(String_CStr(arg3));
    Prim2D_SetTint(0xFF, 0xFF, 0xFF, (u8)alpha);
    Prim2D_SetColor(0xFF, 0xFF, 0xFF, (u8)alpha);
    Prim2D_EndPrim();

    if (arg4) {
        Prim2D_AddPrim(arg5);
        Prim2D_SetPos((f32)arg1, (f32)arg2);
        Prim2D_SetText(String_CStr(arg3));
        Prim2D_SetScale(scale);
        Prim2D_SetTint(0, 0, 0, (u8)alpha);
        Prim2D_EndPrim();
    }
}

#pragma opt_lifetimes off
void *fn_800E2CF4(u8 *self, void *arg1, void *arg2) {
    void fn_800DF7A0(void *, void *);
    void Xml_GetNamedValue(void *, void *, void *);
    extern u16 lbl_8028E090[];
    extern char lbl_80271DB0[];
    struct Value { u32 v[8]; } value, temp, temp2;
    String name, name2;
    s32 scratch, scratch2;

    fn_800DF7A0(self, arg1);
    *(void **)(self + 0x40) = lbl_8028E090;
    String_Init(&name, lbl_80271DB0, &scratch);
    Xml_GetNamedValue(&temp, arg2, &name);
    value = temp;
    String_Destroy(&name, -1);
    *(u32 *)(self + 0x48) = value.v[0];
    *(u32 *)(self + 0x4C) = value.v[1];
    String_Init(&name2, lbl_80271DB0 + 4, &scratch2);
    Xml_GetNamedValue(&temp2, arg2, &name2);
    value = temp2;
    String_Destroy(&name2, -1);
    self[0x50] = value.v[0];
    self[0x51] = value.v[1];
    self[0x52] = value.v[2];
    self[0x53] = value.v[3];
    return self;
}
#pragma opt_lifetimes on
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
    void Prim2D_SetColor(u8, u8, u8, u8);
    void Prim2D_SetUvCorners(f32, f32, f32, f32);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_BindTexture(u32, s32, u16);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    extern f32 gPrim2DZero;
    extern f32 gPrim2DOne;
    s32 w;
    s32 h;
    s32 x2;
    s32 y2;
    s32 cols;
    s32 v1;
    s32 v0;
    s32 u1;
    s32 u0;

    w = M2C_FIELD(arg0, s32 *, 0x54);
    h = M2C_FIELD(arg0, s32 *, 0x58);
    x2 = arg3 + w;
    y2 = arg4 + h;
    if (arg2 >= M2C_FIELD(arg0, s32 *, 0x60)) {
        arg2 = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    }
    cols = M2C_FIELD(arg0, s32 *, 0x5C);
    u1 = M2C_FIELD(arg0, s32 *, 0x64) + w * (arg2 % cols);
    u0 = u1;
    u1 = u1 + w;
    v0 = M2C_FIELD(arg0, s32 *, 0x68) + h * (arg2 / cols);
    v1 = v0 + h;
    if (M2C_FIELD(arg0, u32 *, 0x48) != 0) {
        Prim2D_Begin();
        Prim2D_SetTransform(gPrim2DZero, gPrim2DZero, (f32) arg5, gPrim2DOne);
        Prim2D_BindTexture(M2C_FIELD(arg0, u32 *, 0x48), arg10, (u16) M2C_FIELD(arg0, s32 *, 0x6C));
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRect((f32) arg3, (f32) arg4, (f32) (x2 - arg3), (f32) (y2 - arg4));
        Prim2D_SetUvCorners((f32) u1, (f32) v0, (f32) u0, (f32) v1);
        Prim2D_SetColor((u8) arg6, (u8) arg7, (u8) arg8, (u8) arg9);
        Prim2D_EndPrim();
    }
}

#pragma push
#pragma optimization_level 4
void fn_800E3040(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12) {
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
    s32 x2;
    s32 y2;
    s32 cols;
    s32 w;
    s32 h;
    s32 u0;
    s32 v0;
    s32 u1;
    s32 v1;
    s32 row;
    s32 col;
    u32 tex;

    x2 = arg3 + arg6;
    y2 = arg4 + arg7;
    if (arg2 >= *(s32 *)((u8 *)arg0 + 0x60)) {
        arg2 = *(s32 *)((u8 *)arg0 + 0x60) - 1;
    }
    cols = *(s32 *)((u8 *)arg0 + 0x5C);
    tex = *(u32 *)((u8 *)arg0 + 0x48);
    row = arg2 / cols;
    w = *(s32 *)((u8 *)arg0 + 0x54);
    h = *(s32 *)((u8 *)arg0 + 0x58);
    col = arg2 % cols;
    u0 = *(s32 *)((u8 *)arg0 + 0x64) + w * col;
    u1 = u0 + w;
    v0 = *(s32 *)((u8 *)arg0 + 0x68) + h * row;
    v1 = v0 + h;
    if (tex != 0) {
        fn_8000A258();
        fn_80009D74(lbl_80369F20, lbl_80369F20, (f32)arg5, lbl_80369F24);
        fn_80009F90(*(u32 *)((u8 *)arg0 + 0x48), arg12, (u16)*(s32 *)((u8 *)arg0 + 0x6C));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)arg3, (f32)arg4, (f32)(x2 - arg3), (f32)(y2 - arg4));
        fn_80007770((f32)u0, (f32)v0, (f32)u1, (f32)v1);
        fn_800076AC((u8)arg8, (u8)arg9, (u8)arg10, (u8)arg11);
        fn_80007884();
    }
}
#pragma pop
void fn_800E320C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, f32 scale) {
    M2C_UNK Prim2D_SetColor(u8, u8, u8, u8);
    M2C_UNK Prim2D_SetUvCorners(f32, f32, f32, f32);
    M2C_UNK Prim2D_SetRect(f32, f32, f32, f32);
    M2C_UNK Prim2D_EndPrim();
    M2C_UNK Prim2D_AddPrim(M2C_UNK);
    M2C_UNK Prim2D_SetTransform(f32, f32, f32, f32);
    M2C_UNK Prim2D_BindTexture(u32, s32, u16);
    M2C_UNK Prim2D_PrepareTex();
    M2C_UNK Prim2D_Begin();
    extern f32 gPrim2DZero;
    extern f32 gPrim2DOne;
    s32 w;
    s32 h;
    s32 v1;
    s32 u1;
    s32 v0;
    s32 x2;
    s32 y2;
    s32 cols;
    register s32 u0;
    s32 frameMax;

    w = M2C_FIELD(arg0, s32 *, 0x54);
    h = M2C_FIELD(arg0, s32 *, 0x58);
    frameMax = M2C_FIELD(arg0, s32 *, 0x60);
    x2 = arg3 + (s32)((f32)w * scale);
    y2 = arg4 + (s32)((f32)h * scale);
    if (arg2 >= frameMax) {
        arg2 = frameMax - 1;
    }
    cols = M2C_FIELD(arg0, s32 *, 0x5C);
    u0 = M2C_FIELD(arg0, s32 *, 0x64) + w * (arg2 % cols);
    v0 = M2C_FIELD(arg0, s32 *, 0x68) + h * (arg2 / cols);
    u1 = u0 + w;
    v1 = v0 + h;
    if (M2C_FIELD(arg0, u32 *, 0x48) != 0) {
        Prim2D_Begin();
        Prim2D_SetTransform(gPrim2DZero, gPrim2DZero, (f32)arg5, gPrim2DOne);
        Prim2D_BindTexture(M2C_FIELD(arg0, u32 *, 0x48), arg10, (u16)M2C_FIELD(arg0, s32 *, 0x6C));
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRect((f32)arg3, (f32)arg4, (f32)(x2 - arg3), (f32)(y2 - arg4));
        Prim2D_SetUvCorners((f32)u0, (f32)v0, (f32)u1, (f32)v1);
        Prim2D_SetColor((u8)arg6, (u8)arg7, (u8)arg8, (u8)arg9);
        Prim2D_EndPrim();
    }
}

#pragma use_lmw_stmw on
/* Draw one frame cell from a sprite sheet at (x,y) with color and z-angle. */
void SpriteSheet_DrawFrame(void *sheet, s32 layer, s32 frame, s32 x, s32 y, s32 angle, s32 r, s32 g, s32 b, s32 a, s32 texParam) {
    M2C_UNK Prim2D_SetColor(u8, u8, u8, u8);
    M2C_UNK Prim2D_SetUvCorners(f32, f32, f32, f32);
    M2C_UNK Prim2D_SetRect(f32, f32, f32, f32);
    M2C_UNK Prim2D_EndPrim();
    M2C_UNK Prim2D_AddPrim(M2C_UNK);
    M2C_UNK Prim2D_SetTransform(f32, f32, f32, f32);
    M2C_UNK Prim2D_BindTexture(u32, s32, u16);
    M2C_UNK Prim2D_PrepareTex();
    M2C_UNK Prim2D_Begin();
    extern f32 gPrim2DZero;
    extern f32 gPrim2DOne;
    s32 w;
    s32 h;
    s32 x2;
    s32 y2;
    s32 cols;
    s32 v1;
    s32 u1;
    s32 v0;
    s32 u0;

    w = M2C_FIELD(sheet, s32 *, 0x54);
    h = M2C_FIELD(sheet, s32 *, 0x58);
    x2 = x + w;
    y2 = y + h;
    if (frame >= M2C_FIELD(sheet, s32 *, 0x60)) {
        frame = M2C_FIELD(sheet, s32 *, 0x60) - 1;
    }
    cols = M2C_FIELD(sheet, s32 *, 0x5C);
    u0 = M2C_FIELD(sheet, s32 *, 0x64) + w * (frame % cols);
    v0 = M2C_FIELD(sheet, s32 *, 0x68) + h * (frame / cols);
    u1 = u0 + w;
    v1 = v0 + h;
    if (M2C_FIELD(sheet, u32 *, 0x48) != 0) {
        Prim2D_Begin();
        Prim2D_SetTransform(gPrim2DZero, gPrim2DZero, (f32) angle, gPrim2DOne);
        Prim2D_BindTexture(M2C_FIELD(sheet, u32 *, 0x48), texParam, (u16) M2C_FIELD(sheet, s32 *, 0x6C));
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRect((f32) x, (f32) y, (f32) (x2 - x), (f32) (y2 - y));
        Prim2D_SetUvCorners((f32) u0, (f32) v0, (f32) u1, (f32) v1);
        Prim2D_SetColor((u8) r, (u8) g, (u8) b, (u8) a);
        Prim2D_EndPrim();
    }
}

void SpriteSheet_DrawUvRect(void *sheet, s32 layer, void *uv, void *rect, s32 angle, s32 r, s32 g, s32 b, s32 a, s32 texParam) {
    /* Bind the sheet texture and draw a colored rect with the given UV corners. */
    M2C_UNK Prim2D_SetColor(u8, u8, u8, u8);
    M2C_UNK Prim2D_SetUvCorners(f32, f32, f32, f32);
    M2C_UNK Prim2D_SetRect(f32, f32, f32, f32);
    M2C_UNK Prim2D_EndPrim();
    M2C_UNK Prim2D_AddPrim(M2C_UNK);
    M2C_UNK Prim2D_SetTransform(f32, f32, f32, f32);
    M2C_UNK Prim2D_BindTexture(u32, s32, u16);
    M2C_UNK Prim2D_PrepareTex();
    M2C_UNK Prim2D_Begin();
    extern f32 gPrim2DZero;
    extern f32 gPrim2DOne;
    s32 w;
    s32 h;
    s32 x;
    s32 y;

    (void)layer;
    if (M2C_FIELD(sheet, u32 *, 0x48) != 0) {
        x = M2C_FIELD(rect, s32 *, 0);
        y = M2C_FIELD(rect, s32 *, 4);
        w = M2C_FIELD(rect, s32 *, 8) - x;
        h = M2C_FIELD(rect, s32 *, 0xC) - y;
        Prim2D_Begin();
        Prim2D_SetTransform(gPrim2DZero, gPrim2DZero, (f32) angle, gPrim2DOne);
        Prim2D_BindTexture(M2C_FIELD(sheet, u32 *, 0x48), texParam, (u16) M2C_FIELD(sheet, s32 *, 0x6C));
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRect((f32) x, (f32) y, (f32) w, (f32) h);
        Prim2D_SetUvCorners((f32) M2C_FIELD(uv, s32 *, 0), (f32) M2C_FIELD(uv, s32 *, 4), (f32) M2C_FIELD(uv, s32 *, 8), (f32) M2C_FIELD(uv, s32 *, 0xC));
        Prim2D_SetColor((u8) r, (u8) g, (u8) b, (u8) a);
        Prim2D_EndPrim();
    }
}

#pragma dont_inline on
s32 fn_800E378C(u8 *arg0, void *arg1) {
    void *String_CStr(void *);
    void fn_8006EEFC(void *, void *);

    fn_8006EEFC(arg0 + 0x48, String_CStr(arg1));
    return 1;
}
#pragma dont_inline reset
extern Struct_8014589C D_8014589C;
void *fn_800E37CC(void *arg0, s16 arg1) {
    void FileCache_ReleaseSlot(void *);
    void fn_800DF724(void *, s32);
    void Heap_Free(void *);
    extern void *lbl_8028E0C8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E0C8;
        FileCache_ReleaseSlot((s8 *)arg0 + 0x48);
        fn_800DF724(arg0, 0);
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

#pragma global_optimizer off
void *fn_800E3838(void *arg0, s32 arg1, void *arg2) {
    void fn_800DF7A0(void);
    void String_Init(String *, char *, void *);
    void Xml_GetNamedValue(void *, void *, String *);
    void String_AssignCStr(String *, char *, u32);
    void String_Destroy(String *, s32);
    void String_JoinCStr(String *, char *, String *);
    void String_ConcatCStr(String *, String *, char *);
    void String_Assign(String *, String *, s32, s32);
    void String_Copy(String *, String *);
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
    s32 flag;
    u32 len;
    void *path;
    void *self;

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
    String_Init(&str80, lbl_80271DF8 + 8, &alloc1C);
    Xml_GetNamedValue(buf144, path, &str80);
    flag = (s32)buf144;
    len = strlen((char *)flag);
    String_AssignCStr(&str98, (char *)flag, len);
    String_Destroy(&str80, -1);
    String_Init(&str74, lbl_80271DF8 + 0x11, &alloc18);
    Xml_GetNamedValue(buf124, path, &str74);
    *(s32 *)((u8 *)self + 0x54) = *(s32 *)buf124;
    String_Destroy(&str74, -1);
    String_Init(&str68, lbl_80271DF8 + 0x11, &alloc14);
    Xml_GetNamedValue(buf104, path, &str68);
    *(s32 *)((u8 *)self + 0x58) = ((s32 *)buf104)[1];
    String_Destroy(&str68, -1);
    String_Init(&str5C, lbl_80271DF8 + 0x1A, &alloc10);
    Xml_GetNamedValue(bufE4, path, &str5C);
    *(s32 *)((u8 *)self + 0x64) = *(s32 *)bufE4;
    String_Destroy(&str5C, -1);
    String_Init(&str50, lbl_80271DF8 + 0x1A, &allocC);
    Xml_GetNamedValue(bufC4, path, &str50);
    *(s32 *)((u8 *)self + 0x68) = ((s32 *)bufC4)[1];
    String_Destroy(&str50, -1);
    String_Init(&str44, lbl_80271DF8 + 0x21, &alloc8);
    Xml_GetNamedValue(bufA4, path, &str44);
    flag = *(s32 *)bufA4;
    String_Destroy(&str44, -1);
    String_JoinCStr(&str38, lbl_80271DF8 + 0x25, &str98);
    String_ConcatCStr(&str2C, &str38, lbl_80271DF8 + 0x26);
    String_Assign(&str8C, &str2C, 0, -1);
    String_Destroy(&str2C, -1);
    String_Destroy(&str38, -1);
    String_Copy(&str20, &str8C);
    fn_800E378C(self, &str20);
    String_Destroy(&str20, -1);
    if (*(u32 *)((u8 *)self + 0x48) != 0) {
        tmp = fn_8006EDD8(*(void **)((u8 *)self + 0x48), 0);
        *(s32 *)((u8 *)self + 0x4C) = *(u16 *)((u8 *)*tmp + 2);
        *(s32 *)((u8 *)self + 0x50) = *(u16 *)((u8 *)*tmp + 0);
    }
    if (flag != 0) {
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
    String_Destroy(&str8C, -1);
    String_Destroy(&str98, -1);
    return self;
}
#pragma global_optimizer on
void *fn_800E3B68(void *arg0, s16 arg1) {
    void fn_800E45EC(void *, s32);
    void Heap_Free(void *);
    extern void *lbl_8028E0E8[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E0E8;
        String_Destroy((s8 *)arg0 + 0xAC, -1);
        fn_800E45EC(arg0, 0);
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void fn_800E3BD8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (arg1 + (M2C_FIELD(arg0, s32 *, 0x7C) - M2C_FIELD(arg0, s32 *, 0x74)));
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (arg2 + (M2C_FIELD(arg0, s32 *, 0x80) - M2C_FIELD(arg0, s32 *, 0x78)));
}

#pragma cplusplus on
#pragma dont_inline on
#pragma use_lmw_stmw on
extern "C" void fn_800E3C04(u8 *self,s32 context) {
 void fn_800E3040(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
 s32 fn_800E7FB4(s32,void*);
 void *String_Init(void*,char*,void*);
 extern char lbl_80271F28[];
 extern f32 lbl_80369F30;
 String a,b,c;
 s32 scratchA,scratchB,scratchC;
 s32 color,owner,item;

 color=128;
 owner=*(s32*)self;
 if(self[0x9C]) color=255;
 ((WindowDrawInterface*)self)->draw(M2C_FIELD(self,s32*,0x48)+M2C_FIELD(self,s32*,0x68),M2C_FIELD(self,s32*,0x4C)+M2C_FIELD(self,s32*,0x6C),self+0xAC,1,255,lbl_80369F30);
 String_Init(&a,lbl_80271F28,&scratchA);
 item=fn_800E7FB4(owner,&a);
 String_Destroy(&a,-1);
 fn_800E3040(item,context,3,M2C_FIELD(self,s32*,0x48)+M2C_FIELD(self,s32*,0x60)-20,M2C_FIELD(self,s32*,0x4C),M2C_FIELD(self,s32*,0x44),16,16,255,255,255,255,0);
 String_Init(&b,lbl_80271F28+6,&scratchB);
 item=fn_800E7FB4(owner,&b);
 String_Destroy(&b,-1);
 fn_800E3040(item,context,0,M2C_FIELD(self,s32*,0x48),M2C_FIELD(self,s32*,0x4C),M2C_FIELD(self,s32*,0x44),M2C_FIELD(self,s32*,0x60),16,color,color,color,255,0);
 String_Init(&c,lbl_80271F28+11,&scratchC);
 item=fn_800E7FB4(owner,&c);
 String_Destroy(&c,-1);
 fn_800E3040(item,context,0,M2C_FIELD(self,s32*,0x48),M2C_FIELD(self,s32*,0x4C),M2C_FIELD(self,s32*,0x44),M2C_FIELD(self,s32*,0x60),M2C_FIELD(self,s32*,0x64),255,255,255,255,0);
#pragma cplusplus off
}
#pragma dont_inline reset
#pragma use_lmw_stmw reset
void *fn_800E3DEC(u8 *self, void *owner, void *xml) {
void *fn_800E4688(void *,void *,void *);
void Xml_GetNamedValue(void *,void *,void *);
void String_AssignCStr(void *,void *,s32);
void fn_800E4550(void *,void *);
extern void *lbl_8028E0E8[];
extern char lbl_80271F28[];
#pragma cplusplus on
class Owner { public: char data[16]; virtual void a(); virtual void b(); virtual void *get(char *,char *); };
u32 value[8];
String name;
s32 scratch;
char *text;
fn_800E4688(self,owner,xml);
*(void **)(self+0x40)=lbl_8028E0E8;
*(u32*)(self+0xac)=0; *(u32*)(self+0xb0)=0; *(u32*)(self+0xb4)=0; *(u32*)(self+0xb0)=0;
if(*(s32*)(self+0x60)==0) *(s32*)(self+0x60)=128;
if(*(s32*)(self+0x64)==0) *(s32*)(self+0x64)=128;
*(void **)(self+0x54)=((Owner *)owner)->get(lbl_80271F28+0x12,lbl_80271F28+0x1A);
fn_800E4550(*(void **)(self+0x54),self);
String_AssignCStr(self+0x1C,lbl_80271F28+0x1A,strlen(lbl_80271F28+0x1A));
String_Init(&name,lbl_80271F28+0x22,&scratch);
Xml_GetNamedValue(value,xml,&name);
text=(char *)value;
String_AssignCStr(self+0xac,text,strlen(text));
String_Destroy(&name,-1);
*(u32 *)(self+0x7C)=*(u32 *)(self+0x58);
*(u32 *)(self+0x80)=*(u32 *)(self+0x5C);
*(u32 *)(self+0x68)=16;
*(u32 *)(self+0x6C)=1;
return self;
#pragma cplusplus reset
}

void fn_800E3F48(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
}

void fn_800E3F54(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 1;
}

#pragma dont_inline on
#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void *fn_800E3F60(u8 *self) {
    u8 fn_800DF6A8(void *);
    struct List {
        u32 unk;
        s32 count;
        u8 pad[8];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void *get(s32);
        s32 size() { return this ? count : 0; }
        void *at(s32 i) { return i < size() ? get(i) : 0; }
    };
    void *candidate;
    s32 field8c;
    s32 field90;
    s32 i;
    s32 match;
    s32 val;
    List *list;

    if (!fn_800DF6A8(self)) {
        return 0;
    }
    if (*(List **)(self + 0xa0)) {
        for (i = 0; list = *(List **)(self + 0xa0), i < list->size(); i++) {
            candidate = list->at(i);
            field90 = *(s32 *)(self + 0x90);
            field8c = *(s32 *)(self + 0x8c);
            if (!fn_800DF6A8(candidate)) {
                match = 0;
            } else {
                val = *(s32 *)((u8 *)candidate + 0x84);
                if (field8c == val) {
                    goto check88;
                }
                if (val != -1) {
                    goto match_no;
                }
            check88:
                val = *(s32 *)((u8 *)candidate + 0x88);
                if (field90 == val) {
                    goto match_yes;
                }
                if (val != -1) {
                    goto match_no;
                }
            match_yes:
                match = 1;
                goto match_done;
            match_no:
                match = 0;
            match_done:
                ;
            }
            if ((u8)match) {
                return candidate;
            }
        }
    }
    return self;
#pragma cplusplus off
}
#pragma dont_inline reset
#pragma use_lmw_stmw reset
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

extern "C" void *fn_800E41B0(u8 *self, s32 x, s32 y) {
    u8 fn_800DF6A8(void *);
    struct Window {
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
        virtual void v11();
        virtual void v12();
        virtual void v13();
        virtual void v14();
        virtual void enter(s32, s32);
        virtual void leave(s32, s32);
        virtual Window *hit(s32, s32);
    };
    struct List {
        u32 unk;
        s32 count;
        u8 pad[8];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual Window *get(s32);
        s32 size() { return this ? count : 0; }
        Window *at(s32 i) { return i < size() ? get(i) : 0; }
    };
    s32 i;
    List *list;
    Window *result;

    if (!fn_800DF6A8(self)) {
        return 0;
    }
    if (x > *(s32 *)(self + 0x48) && x < *(s32 *)(self + 0x48) + *(s32 *)(self + 0x60)
        && y > *(s32 *)(self + 0x4c) && y < *(s32 *)(self + 0x4c) + *(s32 *)(self + 0x64)) {
        list = *(List **)(self + 0xa0);
        if (list) {
            for (i = list->size() - 1; i >= 0; --i) {
                result = (*(List **)(self + 0xa0))->at(i)->hit(x, y);
                if (result) {
                    return result;
                }
            }
        }
        self[0x73] = 1;
        ((Window *)self)->enter(x, y);
        return self;
    }
    self[0x71] = 0;
    self[0x72] = 0;
    self[0x73] = 0;
    ((Window *)self)->leave(x, y);
    return 0;
}

#pragma cplusplus on
extern "C" void fn_800E4330(void *arg0, void *arg1) {
    struct Obj10 {
        u8 pad[0x10];
        virtual void *v0() = 0;
        virtual void *v1() = 0;
        virtual void *v2(char *, char *) = 0;
    };
    struct Obj40 {
        u8 pad[0x40];
        virtual void v0(void *) = 0;
        virtual void v1(void *) = 0;
        virtual void v2(void *) = 0;
        virtual void v3(void *) = 0;
    };
    char *String_CStr(void *);
    u8 fn_800DF6A8(void *);
    extern char lbl_80271FC0[];
    void *res;
    void *inner;

    if (*(u8 *)((u8 *)arg0 + 0x3C) != 0) {
        res = ((Obj10 *)*(void **)arg0)->v2(
            lbl_80271FC0,
            String_CStr((u8 *)arg0 + 0x1C)
        );
        if (res != 0 && (u8)fn_800DF6A8(res) != 0 &&
            *(u8 *)((u8 *)arg0 + 0x2C) != 0) {
            inner = *(void **)((u8 *)arg0 + 0x54);
            if (inner == 0 || (u8)fn_800DF6A8(inner) != 0) {
                ((Obj40 *)arg0)->v3(arg1);
            }
        }
    }
}
#pragma cplusplus reset

#pragma cplusplus reset
void fn_800E43E8(void) {

}

#pragma cplusplus on
extern "C" void Win_UpdatePos(void *arg0) {
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

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void *fn_800E4454(void *arg0, String *arg1) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void *v4(s32) = 0;
    };
    void fn_800DF6DC(String *, void *);
    s32 fn_800C9400(String *, u32, u32, char *, u32);
    void *fn_800C9A60(String *, s32);
    register void *child;
    void *self;
    String *key;
    s32 i;
    Obj *list;
    String str;
    register u8 found;
    s32 n;

    self = arg0;
    key = arg1;
    if (*(Obj **)((u8 *)self + 0xA0) != 0) {
        i = 0;
        goto cond;
        do {
            n = list != 0 ? *(s32 *)((u8 *)list + 4) : 0;
            if (i < n) {
                child = list->v4(i);
            } else {
                child = 0;
            }
            fn_800DF6DC(&str, child);
            found = 0;
            if (str.size == key->size &&
                fn_800C9400(&str, 0, str.size, key->data, key->size) == 0) {
                found = 1;
            }
            fn_800C9A60(&str, -1);
            if (found != 0) {
                return child;
            }
            i += 1;
        cond:
            list = *(Obj **)((u8 *)self + 0xA0);
            n = list != 0 ? *(s32 *)((u8 *)list + 4) : 0;
        } while (i < n);
    }
    return 0;
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

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
    void *Heap_Alloc(s32);
    void *ObjList_Init(void *);
    void *tmp;

    if (*(void **)((u8 *)arg0 + 0xA0) == 0) {
        tmp = Heap_Alloc(0x14);
        if (tmp != 0) {
            tmp = ObjList_Init(tmp);
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
    void Heap_Free(void *);
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
            Heap_Free(arg0);
        }
    }
    return arg0;
}
#pragma cplusplus reset

#pragma push
#pragma cplusplus on
#pragma optimization_level 4
#pragma use_lmw_stmw off
#pragma opt_common_subs off
#pragma opt_propagation off
extern "C" void *fn_800E4688(void *arg0, void *arg1, void *arg2) {
    void fn_800E2CF4(void);
    void String_Init(String *, char *, void *);
    void Xml_GetNamedValue(void *, void *, String *);
    void String_AssignCStr(String *, char *, u32);
    void String_Destroy(String *, s32);
    s32 String_Compare(String *, u32, u32, char *, u32);
    char *String_CStr(String *);
    void *Heap_Alloc(s32);
    void *ObjList_Init(void *);
    void fn_800DF6B8(String *, void *);
    void String_Assign(String *, String *, s32, s32);
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
    struct Copy8 { u32 a[8]; };

    Copy8 copyBC;
    char buf9C[0x20];
    char buf7C[0x20];
    char buf5C[0x20];
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
    String_Init(&str38, lbl_80271FC0 + 6, &alloc10);
    Xml_GetNamedValue(buf9C, path, &str38);
    r28 = (s32)buf9C;
    len = strlen((char *)r28);
    String_AssignCStr(&str50, (char *)r28, len);
    String_Destroy(&str38, -1);
    String_Init(&str2C, lbl_80271FC0 + 0x12, &allocC);
    Xml_GetNamedValue(buf7C, path, &str2C);
    r28 = (s32)buf7C;
    len = strlen((char *)r28);
    String_AssignCStr(&str44, (char *)r28, len);
    String_Destroy(&str2C, -1);
    len = strlen(lbl_80271FC0 + 0x19);
    p2 = lbl_80271FC0;
    if (String_Compare(&str50, 0, str50.size, p2 + 0x19, len) == 0) {
        String_AssignCStr(&str50, lbl_80271FC0 + 0x1A, strlen(lbl_80271FC0 + 0x1A));
    }
    len = strlen(lbl_80271FC0 + 0x19);
    p2 = lbl_80271FC0;
    if (String_Compare(&str44, 0, str44.size, p2 + 0x19, len) != 0) {
        r28 = (s32)String_CStr(&str44);
        obj = ((Obj10 *)cb)->v2(String_CStr(&str50), (char *)r28);
        *(void **)((u8 *)self + 0x54) = obj;
        cb = *(void **)((u8 *)self + 0x54);
        if (*(void **)((u8 *)cb + 0xA0) == NULL) {
            list = Heap_Alloc(0x14);
            if (list != NULL) {
                list = ObjList_Init(list);
            }
            *(void **)((u8 *)cb + 0xA0) = list;
        }
        if (self != NULL) {
            list = *(void **)((u8 *)cb + 0xA0);
            ((Obj10 *)list)->v5(self);
        }
        fn_800DF6B8(&str20, *(void **)((u8 *)self + 0x54));
        String_Assign((String *)((u8 *)self + 0x1C), &str20, 0, -1);
        String_Destroy(&str20, -1);
    } else {
        *(void **)((u8 *)self + 0x54) = NULL;
    }
    *(s32 *)((u8 *)self + 0x58) = *(s32 *)((u8 *)self + 0x48);
    *(s32 *)((u8 *)self + 0x5C) = *(s32 *)((u8 *)self + 0x4C);
    String_Init(&str14, lbl_80271FC0 + 0x21, &alloc8);
    Xml_GetNamedValue(buf5C, path, &str14);
    copyBC = *(Copy8 *)buf5C;
    String_Destroy(&str14, -1);
    *(s32 *)((u8 *)self + 0x60) = (s32)copyBC.a[0];
    *(s32 *)((u8 *)self + 0x64) = (s32)copyBC.a[1];
    *(s32 *)((u8 *)self + 0x6C) = 4;
    *(s32 *)((u8 *)self + 0x68) = 4;
    *(s32 *)((u8 *)self + 0xA0) = 0;
    *((u8 *)self + 0x71) = 0;
    *((u8 *)self + 0x72) = 0;
    *((u8 *)self + 0x73) = 0;
    *((u8 *)self + 0x9C) = 0;
    *(s32 *)((u8 *)self + 0xA4) = 0;
    *(s32 *)((u8 *)self + 0xA8) = 0;
    String_Destroy(&str44, -1);
    String_Destroy(&str50, -1);
    return self;
}
#pragma pop
#pragma cplusplus off

u8 fn_800E49D0(void) {
    u8 *Light_GetChannel(s32);
    u8 *p;
    s32 s012;
    s32 s456;
    s32 result;

    p = Light_GetChannel(0);
    s012 = p[0] + p[1] + p[2];
    s456 = p[4] + p[5] + p[6];
    result = ((s456 / 3) * (0xFF - (s012 / 3))) / 255;
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
    void PSMTXIdentity(void *);
    void PSMTXConcat(void *, void *, void *);
    void PSMTXCopy(void *, void *);
    extern f32 lbl_80369F40;
    u8 sp38[0x30];
    u8 sp8[0x30];
    register void *tmp;
    f32 f31;
    f32 f30;
    f32 f29;

    tmp = fn_80067478();
    f31 = -*(f32 *)((u8 *)tmp + 0x14);
    f30 = -*(f32 *)((u8 *)tmp + 0x18);
    f29 = -*(f32 *)((u8 *)tmp + 0x1c);
    PSMTXIdentity(sp8);
    *(f32 *)(sp8 + 0x4) = -f31 / f30;
    *(f32 *)(sp8 + 0x14) = lbl_80369F3C;
    *(f32 *)(sp8 + 0x24) = -f29 / f30;
    *(f32 *)(sp8 + 0x1c) = lbl_80369F40;
    PSMTXConcat(sp8, (u8 *)arg1 + 0x10, sp38);
    PSMTXCopy(sp38, (u8 *)arg0 + 0x10);
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

void Actor_ClearNodeLink(void *arg0) {
    void GActor_StopNodeLink(void *);
    void *ptr;

    ptr = *(void **)((u8 *)arg0 + 0xe8);
    if (ptr != NULL) {
        GActor_StopNodeLink(ptr);
        *(void **)((u8 *)arg0 + 0xe8) = NULL;
    }
}

/* Replace the actor's GActor node-link between two named nodes; set default params and optionally activate. */
u32 Actor_SetNodeLink(void *actor, u32 nodeNameA, u32 nodeNameB, u8 activate) {
    extern s32 gNodeLinkDefaultParam;
    s32 param;

    if ((*(u32 *)((char *)actor + 0xE8)) != 0) {
        GActor_UnlinkNodeLink();
        *(u32 *)((char *)actor + 0xE8) = 0;
    }
    if ((nodeNameA == 0) || (nodeNameB == 0)) {
        *(u32 *)((char *)actor + 0xE8) = 0;
        return 0;
    }
    *(u32 *)((char *)actor + 0xE8) = GActor_CreateNodeLink(*(s32 *)((char *)actor + 0xE0), nodeNameA, nodeNameB, 4);
    param = gNodeLinkDefaultParam;
    GActor_SetNodeLinkParam(*(u32 *)((char *)actor + 0xE8), &param);
    if (activate != 0) {
        GActor_SetNodeLinkActive(*(u32 *)((char *)actor + 0xE8), 1);
    }
    return *(u32 *)((char *)actor + 0xE8);
}

void fn_800E4D24(void *arg0) {
    void *GActor_Create(void);
    void Model_SetColor(void *, s32, s32, s32);
    void Model_SetAlpha(void *, u8);
    u8 *Light_GetChannel(s32);

    u8 *self;
    u8 *light;
    s32 a;
    s32 b;
    s32 alpha;

    self = (u8 *)arg0;

    if (*(void **)(self + 0xDC) != 0) {
        *(void **)(self + 0xE4) = GActor_Create();

        *(u32 *)(*(u8 **)(self + 0xE4) + 4) = *(u32 *)(self + 0xE0);
        self[0xD3] = 1;

        Model_SetColor(*(void **)(self + 0xE4), 0, 0, 0);

        light = Light_GetChannel(0);

        a = (light[0] + light[1] + light[2]) / 3;
        b = (light[4] + light[5] + light[6]) / 3;

        alpha = (b * (255 - a)) / 255;

        if (alpha < 0) {
            alpha = 0;
        }

        if (alpha > 0xC0) {
            alpha = 0xC0;
        }

        Model_SetAlpha(*(void **)(self + 0xE4), (u8)alpha);

        *(u8 *)(*(u8 **)(self + 0xE4) + 0x87) = 0;
        *(u32 *)(*(u8 **)(self + 0xE4)) |= 0x4001E400;
    }
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

#pragma cplusplus on
extern "C" s32 GActor_FindNode(s32, s32);
extern "C" void fn_80060F70(void *, s32, f32 *);
#pragma cplusplus on
extern "C" struct DirectionVector fn_800E4E7C(void *arg1, void *arg2)
{
    s32 GActor_FindNode(void *, void *);
    void fn_80060F70(void *, s32, f32 *);
    extern const f32 lbl_80369F3C;
    extern f32 lbl_80369F5C, lbl_80369F60;

    f32 pos[3];
    f32 z;
    f32 y;
    f32 x;

    fn_80060F70(
        *(void **)((u8 *)arg1 + 0xE0),
        GActor_FindNode(*(void **)((u8 *)arg1 + 0xE0), arg2),
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

    return DirectionVector(x, y, z);
}
#pragma cplusplus off
void fn_800E4F0C(void *arg0) {
    M2C_UNK GActor_FindNode(s32);
    GActor_FindNode(M2C_FIELD(arg0, s32 *, 0xE0));
}

void fn_800E4F30(void *arg0)
{
    void fn_80060F70(void *, s32, f32 *);
    void Camera_GetLookAt(f32 *, void *);
    f32 out[3];
    f32 pos[3];
    register f32 z;
    f32 y;
    register void *obj;
    register f32 x;
    register f32 pz;
    f32 py;

    obj = *(void **)((u8 *)arg0 + 0xEC);
    if (obj != NULL) {
        fn_80060F70(*(void **)((u8 *)obj + 0xE0), *(s32 *)((u8 *)arg0 + 0xF0), pos);
        x = pos[0];
        if (x > lbl_80369F5C && x < lbl_80369F60) {
            y = pos[1];
            z = pos[2];
        } else {
            z = lbl_80369F3C;
            y = z;
            x = z;
        }
        *(f32 *)((u8 *)arg0 + 0x48) = x;
        *(f32 *)((u8 *)arg0 + 0x4C) = y;
        *(f32 *)((u8 *)arg0 + 0x50) = z;
        Camera_GetLookAt(out, *(void **)((u8 *)arg0 + 0xEC));
        py = out[1];
        pz = out[2];
        x = out[0];
        *(f32 *)((u8 *)arg0 + 0x54) = x;
        *(f32 *)((u8 *)arg0 + 0x58) = py;
        *(f32 *)((u8 *)arg0 + 0x5C) = pz;
        *(void **)((u8 *)arg0 + 0xEC) = NULL;
        *(s32 *)((u8 *)arg0 + 0xF0) = -1;
    }
}

void fn_800E4FE8(void *arg0, void *arg1, s32 arg2) {
    f32 f;
    s32 temp_r3;

    if (arg1 != NULL) {
        temp_r3 = GActor_FindNode(*(s32 *)((u8 *)arg1 + 0xE0), arg2);
        *(void **)((u8 *)arg0 + 0xEC) = arg1;
        *(s32 *)((u8 *)arg0 + 0xF0) = temp_r3;
    }
    f = lbl_80369F3C;
    *(f32 *)((u8 *)arg0 + 0x84) = f;
    *(f32 *)((u8 *)arg0 + 0x88) = f;
    *(f32 *)((u8 *)arg0 + 0x8C) = f;
}

void fn_800E5044(void *arg0) {
    M2C_UNK GActor_LoadTpl(s32);
    GActor_LoadTpl(M2C_FIELD(arg0, s32 *, 0xE0));
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

#pragma auto_inline off
#pragma global_optimizer off
void *fn_800E509C(void *self, String *arg1, String *arg2) {
    extern char lbl_802720E0[];
    u32 strlen(const char *);
    s32 String_Compare(String *, u32, u32, char *, u32);

    u8 *entry;
    u8 matched;
    u32 index;

    index = 0;

    while (index < *(u32 *)((u8 *)self + 0xF8)) {
        entry = *(u8 **)((u8 *)self + 0xFC) + index * 0x1C;
        matched = 0;

        if (*(u32 *)(entry + 0xC) == arg1->size) {
            if (String_Compare((String *)(entry + 0xC), 0, *(u32 *)(entry + 0xC), arg1->data, arg1->size) == 0) {
                matched = 1;
            }
        }

        if (matched != 0) {
            u32 emptyLen;
            emptyLen = strlen(lbl_802720E0 + 5);
            if (String_Compare(arg2, 0, arg2->size, lbl_802720E0 + 5, emptyLen) != 0) {
                matched = 0;
                if (*(u32 *)entry == arg2->size) {
                    if (String_Compare((String *)entry, 0, *(u32 *)entry, arg2->data, arg2->size) == 0) {
                        matched = 1;
                    }
                }
                if (matched == 0) {
                    goto next;
                }
            }
            return entry;
        }
    next:
        index += 1;
    }

    return NULL;
}
#pragma global_optimizer on
#pragma auto_inline on
void fn_800E51A8(void *arg0, void *arg1) {
    void String_Copy(void *, void *);
    void String_Init(void *, void *, void *);
    extern u8 lbl_802720E0[];
    u8 sp8[8];
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg1, void **, 0x100);
    if ((temp_r6 != NULL) && (M2C_FIELD(temp_r6, s32 *, 0x18) == M2C_FIELD(arg1, s32 *, 0xCC))) {
        String_Copy(arg0, temp_r6);
        return;
    }
    String_Init(arg0, lbl_802720E0 + 5, sp8);
}

void fn_8005F84C(s32, s32, s32);
void fn_8005F894(s32, s32);
void fn_800E5200(void *arg0, u16 arg1, s32 arg2) {
    if (arg2 != 0) {
        fn_8005F84C(M2C_FIELD(arg0, s32 *, 0xE0), arg2, arg1);
        return;
    }
    fn_8005F894(M2C_FIELD(arg0, s32 *, 0xE0), arg1);
}

void fn_800E5248(void *arg0, u16 arg1) {
    s32 temp = *(s32 *)((u8 *)arg0 + 0xE0);
    Pad_IsButton(temp, arg1);
}

#pragma dont_inline on
#pragma global_optimizer off
s32 fn_800E5270(void *self, String *arg1, String *arg2, s32 arg3) {
    void String_Copy(String *, String *);
    void *String_Init(String *, char *, void *);
    void *fn_800E509C(void *, String *, String *);
    void *String_Destroy(String *, s32);
    String *String_Assign(String *, String *, s32, s32);
    void fn_800E6554(void *, void *, u32, void *);
    s32 String_Compare(String *, u32, u32, char *, u32);
    extern char lbl_802720E0[];

    typedef struct {
        String str0;
        String str1;
        s32 value;
    } Entry;

    String tmp;
    String empty;
    u8 scratch;
    Entry entry;
    u8 match;
    void *found;
    String *str1p;
    s32 result;

    str1p = &entry.str1;
    result = 0;

    entry.str0.cap = 0;
    entry.str1.cap = 0;
    entry.str0.size = 0;
    entry.str0.data = 0;
    entry.str0.cap = 0;
    entry.str1.size = 0;
    entry.str1.data = 0;
    entry.str1.cap = 0;

    String_Copy(&tmp, arg2);
    String_Init(&empty, lbl_802720E0 + 5, &scratch);
    found = fn_800E509C(self, &tmp, &empty);
    String_Destroy(&empty, -1);
    String_Destroy(&tmp, -1);

    if (found) {
        String_Assign((String *)found, arg1, 0, -1);
        String_Assign((String *)((u8 *)found + 0xC), arg2, 0, -1);
        *(s32 *)((u8 *)found + 0x18) = arg3;
        result = 1;
    } else {
        String_Assign(&entry.str0, arg1, 0, -1);
        String_Assign(str1p, arg2, 0, -1);
        entry.value = arg3;
        fn_800E6554(
            (u8 *)self + 0xF4,
            *(u8 **)((u8 *)self + 0xFC) + *(u32 *)((u8 *)self + 0xF8) * 0x1C,
            1,
            &entry);
        found = *(u8 **)((u8 *)self + 0xFC) + (*(u32 *)((u8 *)self + 0xF8) - 1) * 0x1C;
    }

    match = 0;
    if (*(u32 *)((u8 *)self + 0xBC) == arg2->size) {
        if (String_Compare((String *)((u8 *)self + 0xBC), 0, *(u32 *)((u8 *)self + 0xBC), arg2->data, arg2->size) == 0) {
            match = 1;
        }
    }
    if (match) {
        *(void **)((u8 *)self + 0x100) = found;
    }

    String_Destroy(str1p, -1);
    String_Destroy(&entry.str0, -1);
    return result;
}

#pragma dont_inline on
void fn_800E5418(void *arg0,void *arg1) {
void *Heap_Alloc(u32);
void String_Init(void *,void *,void *);
void *Xml_ParseFile(void *,void *,void *);
void String_Destroy(void *,s32);
void Xml_GetNamedValue(void *,void *,String *);
void String_AssignCStr(void *,void *,s32);
s32 strlen(char *);
void String_Copy(void *,void *);
void fn_800E5270(void *,void *,void *,s32);
u8 fn_800C8F48(void *);
void Xml_Destroy(void *,s16);
extern char lbl_802720E0[];
char value1[32],value2[32];
s32 value3[8];
String first,second,root,key1,key2,key3,copy1,copy2;
u32 allocRoot,alloc1,alloc2,alloc3;
char *strings;
char *buffer1,*buffer2;
void *xml;
s8 made;
s32 number;
made=0;
xml=Heap_Alloc(0x60);
if(xml) {
String_Init(&root,lbl_802720E0+6,&allocRoot);
made=1;
xml=Xml_ParseFile(xml,arg1,&root);
}
if(made) String_Destroy(&root,-1);
first.cap=0;second.cap=0;
first.size=0;first.data=0;first.cap=0;
second.size=0;second.data=0;second.cap=0;
buffer1=value1;strings=lbl_802720E0;buffer2=value2;
do {
String_Init(&key1,strings+11,&alloc1);
Xml_GetNamedValue(value1,xml,&key1);
String_AssignCStr(&first,buffer1,strlen(buffer1));
String_Destroy(&key1,-1);
String_Init(&key2,strings+16,&alloc2);
Xml_GetNamedValue(value2,xml,&key2);
String_AssignCStr(&second,buffer2,strlen(buffer2));
String_Destroy(&key2,-1);
String_Init(&key3,strings+23,&alloc3);
Xml_GetNamedValue(value3,xml,&key3);
number=value3[0];
String_Destroy(&key3,-1);
String_Copy(&copy1,&first);
String_Copy(&copy2,&second);
fn_800E5270(arg0,&copy1,&copy2,number);
String_Destroy(&copy2,-1);
String_Destroy(&copy1,-1);
} while(fn_800C8F48(xml));
Xml_Destroy(xml,1);
String_Destroy(&second,-1);
String_Destroy(&first,-1);
}
#pragma dont_inline reset

#pragma global_optimizer reset
#pragma dont_inline reset
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
    String_Copy(arg0, arg1 + 0xB0);
}

s32 Unit_GetActor(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE0);
}

u8 Actor_IsBusy(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xD0);
}

void Actor_ClearBusy(void *arg0) {
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

#pragma cplusplus on
extern "C" void fn_800E574C(u8 *self, char *name, u8 loop, u8 adjust, u8 blend, s32 duration, f32 speed) {
extern char lbl_802720E0[];
void *fn_800DDC04(void *, void *);
u8 fn_801C6B7C(void *, void *, s32, void *, s32);
void fn_801C68D0(void *);
s32 GActor_FindNode(void *, char *);
void fn_80060F70(void *, s32, f32 *);
void fn_8005FEE8(void *, f32);
void fn_800608AC(void *);
void String_Init(void *, char *, void *);
void String_Destroy(void *, s32);
void String_AssignCStr(void *, char *, u32);
u32 strlen(const char *);
s32 String_Compare(void *, u32, u32, char *, u32);
void *anim;
f32 delta[3];
f32 before[3];
String str;
f32 after[3];
u8 alloc;
s32 node;
char *empty;
u32 len=strlen(lbl_802720E0+5);
empty=lbl_802720E0;
if(String_Compare(self+0xBC,0,*(u32 *)(self+0xBC),empty+5,len)!=0 && name==0) return;
String_Init(&str,name,&alloc);
anim=fn_800DDC04(*(void **)(self+0xDC),&str);
String_Destroy(&str,-1);
if(*(void **)(*(u8 **)(self+0xE0)+0x44)!=0 && blend && fn_801C6B7C(*(void **)(self+0xE0),anim,duration,delta,0)){
*(f32 *)(self+0x48)+=delta[0];
*(f32 *)(self+0x50)+=delta[2];
((WindowDrawInterface *)self)->unk0C();
} else {
fn_801C68D0(*(void **)(self+0xE0));
fn_80060F70(*(void **)(self+0xE0),GActor_FindNode(*(void **)(self+0xE0),lbl_802720E0),before);
*(void **)(*(u8 **)(self+0xE0)+0x44)=anim;
*(f32 *)(*(u8 **)(self+0xE0)+0x5C)=speed;
fn_8005FEE8(*(void **)(self+0xE0),lbl_80369F3C);
if(adjust){
fn_800608AC(*(void **)(self+0xE0));
node=GActor_FindNode(*(void **)(self+0xE0),lbl_802720E0);
if(node!=-1){
fn_80060F70(*(void **)(self+0xE0),node,after);
*(f32 *)(self+0x48)=before[0]+*(f32 *)(self+0x48)-after[0];
*(f32 *)(self+0x50)=before[2]+*(f32 *)(self+0x50)-after[2];
((WindowDrawInterface *)self)->unk0C();
}}}
if(anim){
fn_8005FEE8(*(void **)(self+0xE0),lbl_80369F3C);
String_AssignCStr(self+0xBC,name,strlen(name));
*(u32 *)(self+0xC8)=*(u32 *)((u8 *)anim+0x18);
*(u32 *)(self+0xCC)=0;
self[0xD0]=1;
self[0xD1]=loop;
**(u32 **)(self+0xE0)&=~0x300;
if(loop) **(u32 **)(self+0xE0)|=0x100;
else **(u32 **)(self+0xE0)|=0x200;
}
}
#pragma cplusplus reset
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
    void *Light_GetChannel(s32);
    void Model_SetAlpha(void *, u8);
    void *e0;
    u8 *p;
    s32 a;
    s32 b;
    s32 alpha;
    s32 temp_r31;

    e0 = *(void **)((u8 *)arg0 + 0xE0);
    if (e0 != NULL) {
        fn_800609DC(e0);
        fn_8006CAD4(*(void **)((u8 *)arg0 + 0xE0));
    }
    if (*(void **)((u8 *)arg0 + 0xE4) != NULL) {
        e0 = *(void **)((u8 *)arg0 + 0xE0);
        temp_r31 = ((u8 *)e0)[0xB];
        p = (u8 *)Light_GetChannel(0);

        a = (p[0] + p[1] + p[2]) / 3;
        b = (p[4] + p[5] + p[6]) / 3;
        alpha = (b * (255 - a)) / 255;

        if (alpha < 0) {
            alpha = 0;
        }
        if (alpha > 0xC0) {
            alpha = 0xC0;
        }
        Model_SetAlpha(*(void **)((u8 *)arg0 + 0xE4), (u8)((temp_r31 * (u8)alpha) / 255));
        fn_8006CAD4(*(void **)((u8 *)arg0 + 0xE4));
    }
}

void fn_800E5B68(u8 *self) {
void *fn_8006049C(void *); void *GActor_GetNodeTable(void *);
void MTXRotDegOrder(void *,void *); void PSMTXConcat(void *,void *,void *);
void PSMTXIdentity(void *); void PSMTXCopy(void *,void *); void *fn_80067478(void);
extern f32 lbl_80369F40;
u8 sp98[0x30], sp68[0x30], sp38[0x30], sp8[0x30];
s32 index; u8 *anim; u8 *matrices; u8 *table; u8 *source; u8 *dest; u8 *camera;
f32 x,y,z;
if(*(void **)(self+0xDC)){
anim=*(u8 **)(self+0xEC);
if(anim){
index=*(s32 *)(self+0xF0);
matrices=fn_8006049C(*(void **)(anim+0xE0));
table=GActor_GetNodeTable(*(void **)(anim+0xE0));
MTXRotDegOrder(*(u8 **)(table+0xC)+index*0xF4,sp68);
PSMTXConcat(matrices+index*0x30,sp68,sp68);
PSMTXConcat(*(u8 **)(*(u8 **)(self+0xEC)+0xE0)+0x10,sp68,sp98);
source=*(u8 **)(self+0xE0)+0x10;
PSMTXConcat(sp98,source,source);
dest=*(u8 **)(self+0xE4)+0x10;
PSMTXConcat(dest,sp98,dest);
}}
if(*(void **)(self+0xDC) && self[0xD3]){
source=*(u8 **)(self+0xE0); dest=*(u8 **)(self+0xE4);
camera=fn_80067478();
x=-*(f32 *)(camera+0x14);y=-*(f32 *)(camera+0x18);z=-*(f32 *)(camera+0x1C);
PSMTXIdentity(sp38);
*(f32 *)(sp38+4)=-x/y;
*(f32 *)(sp38+0x14)=lbl_80369F3C;
*(f32 *)(sp38+0x24)=-z/y;
*(f32 *)(sp38+0x1C)=lbl_80369F40;
PSMTXConcat(sp38,source+0x10,sp8);
PSMTXCopy(sp8,dest+0x10);
}
}

/* If the object has a linked GActor, build its world matrix from local pos/rot/scale. */
void GActor_ApplyPoseMtx(void *obj) {
    void PSMTXCopy(void *, void *);
    void PSMTXConcat(void *, void *, void *);
    void PSMTXRotRad(void *, s32, f32);
    void PSMTXTrans(void *, f32, f32, f32);
    void PSMTXScale(void *, f32, f32, f32);
    extern f32 lbl_80369F64;
    u8 mtxOut[0x30];
    u8 mtxScale[0x30];
    u8 mtxTrans[0x30];
    u8 mtxRotX[0x30];
    u8 mtxRotY[0x30];
    u8 mtxRotZ[0x30];

    if (*(u32 *)((u8 *)obj + 0xDC) != 0) {
        PSMTXTrans(mtxTrans, *(f32 *)((u8 *)obj + 0x48), *(f32 *)((u8 *)obj + 0x4C), *(f32 *)((u8 *)obj + 0x50));
        PSMTXScale(mtxScale, *(f32 *)((u8 *)obj + 0x6C), *(f32 *)((u8 *)obj + 0x70), *(f32 *)((u8 *)obj + 0x74));
        PSMTXRotRad(mtxRotX, 'X', lbl_80369F64 * *(f32 *)((u8 *)obj + 0x54));
        PSMTXRotRad(mtxRotY, 'Y', lbl_80369F64 * *(f32 *)((u8 *)obj + 0x58));
        PSMTXRotRad(mtxRotZ, 'Z', lbl_80369F64 * *(f32 *)((u8 *)obj + 0x5C));
        PSMTXConcat(mtxRotZ, mtxRotX, mtxOut);
        PSMTXConcat(mtxRotY, mtxOut, mtxOut);
        PSMTXConcat(mtxScale, mtxOut, mtxOut);
        PSMTXConcat(mtxTrans, mtxOut, mtxOut);
        PSMTXCopy(mtxOut, (u8 *)*(void **)((u8 *)obj + 0xE0) + 0x10);
    }
}

#pragma peephole off
#pragma cplusplus on
#pragma push
extern "C" void fn_800E5DEC(void *arg0) {
    struct Vec3 { f32 x, y, z; };
    struct Obj {
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
        virtual void v11();
        virtual Vec3 v12(s32);
        virtual void v13();
        virtual void v14();
        virtual void v15();
        virtual void v16();
        virtual void v17();
        virtual void v18();
    };
    void Model_SetAlpha(void *, u8);
    void Model_SetColor(void *, u8, u8, u8);
    void fn_8004AE28(void *, f32, f32, f32);
    extern const f32 lbl_80369F3C;
    extern const f32 lbl_80369F58;
    extern const f32 lbl_80369F48;
    extern const f32 lbl_80369F44;
    Obj *self = (Obj *)arg0;
    u8 *p = (u8 *)self;
    Vec3 pos;
    f32 zero;
    f32 spd;
    u32 r, g, b;

    if (*(void **)(p + 0xDC) != 0) {
        zero = lbl_80369F3C;
        spd = *(f32 *)(p + 0x104);
        if (zero != spd) {
            *(f32 *)(p + 0x108) = *(f32 *)(p + 0x108) + spd;
            if (*(f32 *)(p + 0x108) >= lbl_80369F58) {
                *(f32 *)(p + 0x108) = lbl_80369F58;
                *(f32 *)(p + 0x104) = zero;
            }
            if (*(f32 *)(p + 0x108) <= lbl_80369F3C) {
                *(f32 *)(p + 0x108) = lbl_80369F3C;
                *(f32 *)(p + 0x104) = lbl_80369F3C;
            }
            Model_SetAlpha(*(void **)(p + 0xE0), (u8)(s32)(lbl_80369F48 * *(f32 *)(p + 0x108)));
        }
        if (*(s32 *)(p + 0x114) != 0) {
            b = (s32)*(f32 *)(p + 0x10C);
            g = b;
            r = b;
            *(f32 *)(p + 0x10C) = *(f32 *)(p + 0x10C) + *(f32 *)(p + 0x110);
            if (*(f32 *)(p + 0x10C) < lbl_80369F44) {
                *(f32 *)(p + 0x10C) = lbl_80369F44;
            }
            if (*(f32 *)(p + 0x10C) > lbl_80369F48) {
                *(f32 *)(p + 0x10C) = lbl_80369F48;
            }
            if ((*(s32 *)(p + 0x114) = *(s32 *)(p + 0x114) - 1) <= 0) {
                g = 0x80;
                b = 0x80;
                r = g;
            }
            Model_SetColor(*(void **)(p + 0xE0), (u8)r, (u8)g, (u8)b);
        }
        if (*(void **)(p + 0xE0) != 0) {
            pos = self->v12(0);
            fn_8004AE28(*(void **)(p + 0xE0), pos.x, pos.y, pos.z);
        }
        self->v18();
        self->v6();
    }
}
#pragma pop
#pragma cplusplus reset
#pragma peephole reset
/* Destroy an actor: unlink GActor nodes, nested member, strings, then base; free if asked. */
void *Actor_Dtor(void *self, s16 freeHeap) {
    void fn_800DDC2C(void *, void *);
    void *fn_800E6D68(void *, s16);
    void String_Destroy(void *, s32);
    void fn_800DF724(void *, s32);
    void Heap_Free(void *);
    extern void *gActorVtbl[];
    extern void *lbl_8028DED0[];
    void *node;

    if (self != NULL) {
        M2C_FIELD(self, void ***, 0x40) = gActorVtbl;
        node = M2C_FIELD(self, void **, 0xe0);
        if (node != NULL) {
            fn_800DDC2C(M2C_FIELD(self, void **, 0xdc), node);
        }
        node = M2C_FIELD(self, void **, 0xe4);
        if (node != NULL) {
            fn_800DDC2C(M2C_FIELD(self, void **, 0xdc), node);
        }
        if ((u32)self + 0xf4 != 0) {
            if ((s32)self + 0xf4 != 0) {
                fn_800E6D68((u8 *)self + 0xf4, 0);
            }
        }
        String_Destroy((u8 *)self + 0xbc, -1);
        String_Destroy((u8 *)self + 0xb0, -1);
        if (self != NULL) {
            M2C_FIELD(self, void ***, 0x40) = lbl_8028DED0;
            fn_800DF724(self, 0);
        }
        if (freeHeap > 0) {
            Heap_Free(self);
        }
    }
    return self;
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
#define SELF ((Self *)arg0)
    void fn_800DBBE4(void *);
    void String_Init(String *, char *, void *);
    void Xml_GetNamedValue(char *, void *, String *);
    void String_AssignCStr(String *, char *, u32);
    void String_Destroy(String *, s32);
    void String_Assign(String *, String *, s32, s32);
    s32 String_Compare(String *, s32, u32, char *, u32);
    char *String_CStr(String *);
    void String_Copy(String *, String *);
    void *fn_800E8008(void *, String *);
    void *fn_800DDC90(void *);
    void fn_800E574C(void *, char *, u8, s32, s32, s32, f32);
    void fn_800E5418(void *, String *);
    u32 strlen(char *);
    extern u8 gActorVtbl[];
    extern char lbl_802720E0[];
    extern const f32 lbl_80369F58;
    extern const f32 lbl_80369F3C;
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
    void *owner;
    void *path;
    char *p;
    s32 flag;
    u32 emptyLen;
    f32 one;
    f32 zero;

    owner = arg1;
    path = arg2;

    fn_800DBBE4(SELF);
    SELF->vtbl = (void *)gActorVtbl;
    SELF->strB0.size = 0;
    SELF->strB0.cap = 0;
    SELF->strB0.data = 0;
    SELF->strB0.cap = 0;
    SELF->unkBC = 0;
    SELF->unkC0 = 0;
    SELF->unkC4 = 0;
    SELF->unkC0 = 0;
    SELF->unkF4 = 0;
    SELF->unkF8 = 0;
    SELF->unkFC = 0;
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
    SELF->unkAC = owner;

    String_Init(&str58, (char *)(lbl_802720E0 + 0x1D), &alloc18);
    Xml_GetNamedValue((char *)buf108, path, &str58);
    p = (char *)&buf108;
    { u32 n = strlen(p); String_AssignCStr(&str7C, p, n); }
    String_Destroy(&str58, -1);

    String_Init(&str4C, (char *)(lbl_802720E0 + 0x10), &alloc14);
    Xml_GetNamedValue((char *)bufE8, path, &str4C);
    p = (char *)&bufE8;
    { u32 n = strlen(p); String_AssignCStr(&str70, p, n); }
    String_Destroy(&str4C, -1);

    String_Init(&str40, (char *)(lbl_802720E0 + 0x23), &alloc10);
    Xml_GetNamedValue((char *)bufC8, path, &str40);
    p = (char *)&bufC8;
    { u32 n = strlen(p); String_AssignCStr(&str64, p, n); }
    String_Destroy(&str40, -1);

    String_Init(&str34, (char *)(lbl_802720E0 + 0x2B), &allocC);
    Xml_GetNamedValue((char *)bufA8, path, &str34);
    flag = *(s32 *)bufA8;
    String_Destroy(&str34, -1);

    String_Assign(&SELF->strB0, &str7C, 0, -1);
    SELF->unkCC = 0;
    SELF->unkD0 = 0;

    String_Init(&str28, (char *)(lbl_802720E0 + 0x32), &alloc8);
    Xml_GetNamedValue((char *)buf88, path, &str28);
    SELF->unkD1 = (u8)(*(s32 *)buf88 != 0);
    String_Destroy(&str28, -1);

    SELF->unkD3 = 0;
    SELF->unk100 = 0;
    SELF->unkDC = fn_800E8008(owner, &str7C);
    if (SELF->unkDC != NULL) {
        SELF->unkE0 = (u32 *)fn_800DDC90(SELF->unkDC);
        emptyLen = strlen((char *)lbl_802720E0 + 5);
        if (String_Compare(&str70, 0, str70.size, (char *)lbl_802720E0 + 5, emptyLen) != 0) {
            fn_800E574C(SELF, String_CStr(&str70), SELF->unkD1, 1, 0, 0xA, lbl_80369F58);
        }
    } else {
        SELF->unkE0 = NULL;
    }
    SELF->unkE4 = 0;
    SELF->unkE8 = 0;
    emptyLen = strlen((char *)lbl_802720E0 + 5);
    if (String_Compare(&str64, 0, str64.size, (char *)lbl_802720E0 + 5, emptyLen) != 0) {
        String_Copy(&str1C, &str64);
        fn_800E5418(SELF, &str1C);
        String_Destroy(&str1C, -1);
    }
    SELF->unkEC = 0;
    SELF->unkF0 = -1;
    if (flag != 0) {
        *SELF->unkE0 |= 0x40000;
    }
    zero = lbl_80369F3C;
    one = lbl_80369F58;
    SELF->unk104 = zero;
    SELF->unk108 = one;
    SELF->unk10C = zero;
    SELF->unk110 = zero;
    SELF->unk114 = 0;
    String_Destroy(&str64, -1);
    String_Destroy(&str70, -1);
    String_Destroy(&str7C, -1);
    return (void *)SELF;
#undef SELF
}

void *fn_800E6418(void *self, void *owner, s32 a2, s32 a3, void *str, s32 a5) {
    void *fn_800DBE34(void *, void *, s32, s32, s32);
    void String_Assign(void *, void *, s32, s32);
    void String_AssignCStr(void *, char *, u32);
    void *fn_800E8008(void *, void *);
    void *fn_800DDC90(void *);
    u32 strlen(char *);
    extern void *gActorVtbl[];
    extern char lbl_802720E0[];
    s32 zero;
    s32 neg1;
    f32 fzero;
    f32 fone;

    fn_800DBE34(self, owner, a2, a3, a5);
    *(void **)((u8 *)self + 0x40) = gActorVtbl;
    *(s32 *)((u8 *)self + 0xB0) = 0;
    *(s32 *)((u8 *)self + 0xB4) = 0;
    *(void **)((u8 *)self + 0xB8) = 0;
    *(s32 *)((u8 *)self + 0xB4) = 0;
    *(s32 *)((u8 *)self + 0xBC) = 0;
    *(s32 *)((u8 *)self + 0xC0) = 0;
    *(void **)((u8 *)self + 0xC4) = 0;
    *(s32 *)((u8 *)self + 0xC0) = 0;
    *(s32 *)((u8 *)self + 0xF4) = 0;
    *(s32 *)((u8 *)self + 0xF8) = 0;
    *(s32 *)((u8 *)self + 0xFC) = 0;
    *(void **)((u8 *)self + 0xAC) = owner;
    String_Assign((u8 *)self + 0xB0, str, 0, -1);
    String_AssignCStr((u8 *)self + 0xBC, lbl_802720E0 + 5, strlen(lbl_802720E0 + 5));
    *(void **)((u8 *)self + 0xDC) = fn_800E8008(owner, str);
    *(s32 *)((u8 *)self + 0xCC) = 0;
    *((u8 *)self + 0xD0) = 0;
    *((u8 *)self + 0xD1) = 0;
    *((u8 *)self + 0xD3) = 0;
    *(s32 *)((u8 *)self + 0x9C) = 0;
    *(s32 *)((u8 *)self + 0x100) = 0;
    *(void **)((u8 *)self + 0xE0) = fn_800DDC90(*(void **)((u8 *)self + 0xDC));
    zero = 0;
    neg1 = -1;
    fzero = 0.0f;
    *(s32 *)((u8 *)*(void **)((u8 *)self + 0xE0) + 0x44) = zero;
    fone = 1.0f;
    *(s32 *)((u8 *)self + 0xE4) = zero;
    *(s32 *)((u8 *)self + 0xE8) = zero;
    *(s32 *)((u8 *)self + 0xEC) = zero;
    *(s32 *)((u8 *)self + 0xF0) = neg1;
    *(f32 *)((u8 *)self + 0x104) = fzero;
    *(f32 *)((u8 *)self + 0x108) = fone;
    *(f32 *)((u8 *)self + 0x10C) = fzero;
    *(f32 *)((u8 *)self + 0x110) = fzero;
    *(s32 *)((u8 *)self + 0x114) = zero;
    return self;
}

static inline void CopyString_800E6554(void *dst, u32 capacity, void *src, void *alloc, u8 *tag, u8 value) {
    void String_InitFromRange(void *, char *, char *, void *, void *);
    char *begin;
    *(u32 *)((u8 *)dst + 4) = capacity;
    begin = *(char **)((u8 *)src + 8);
    *tag = value;
    String_InitFromRange(dst, begin, begin + *(u32 *)src, alloc, tag);
}

static inline void InitVector_800E6554(u32 *v, u32 zero) {
    v[0] = zero;
    v[1] = zero;
    v[2] = zero;
}

static inline int CheckPos_800E6554(u32 n, u32 pos) {
    return pos > n;
}



#pragma global_optimizer off
void fn_800E6554(void *vec, void *pos, u32 count, void *src)
{
    void String_InitFromRange(void *, char *, char *, void *, struct String_Init_Tag);
    void String_Resize(void *, u32, s32);
    void *fn_800C94F8(void *, u32, u32, u32, u32);
    void *Heap_Alloc(s32);
    void fn_800E6DC8(void *);
    void Heap_Free(void *);
    void fprintf(void *, const char *, ...);
    void abort(void);
    void *memcpy(void *, void *, u32);
    extern char __files[];
    extern char lbl_802720E0[];

    struct {
        u8 pad[0x50];
        u32 cap;
        u32 size;
        void *data;
    } st;

    void *pSrc;
    u32 room;
    void *newData;
    void *end;
    u32 cnt;
    void *cur;
    void *pPos;
    void *dst;
    void *shift;
    u32 len;
    u8 tag;
    u32 copyCap;
    u32 cap;
    u32 need;
    u32 size;
    u32 bytes;
    u32 n;
    void *lim;
    u32 *plen;
    char *err;
    char *begin;
    char *endptr;
    void *srcC;
    u32 one;
    u32 remaining;
    void *pVec;

    pVec = vec;
    pPos = pos;
    cnt = count;
    pSrc = src;

    if (cnt == 0) {
        return;
    }

    if (cnt > 0x09249249U ||
        *(u32 *)((u8 *)pVec + 4) > 0x09249249U - cnt) {
        fprintf(__files + 0xA0, lbl_802720E0 + 0x9A);
        abort();
    }

    size = *(u32 *)((u8 *)pVec + 4);
    need = size + cnt;

    if (need <= *(u32 *)pVec) {
        end = *(u8 **)((u8 *)pVec + 8) + size * 0x1C;
        room = (u32)(((s32)end - (s32)pPos) / 28);

        if (cnt > room) {
            dst = end;
            while (cnt > room) {
                if (dst != 0) {
                    { struct String_Init_Tag tag1;
copyCap = *(u32 *)((u8 *)pSrc + 4);

                    *(u32 *)((u8 *)dst + 4) = copyCap;
                    begin = *(char **)((u8 *)pSrc + 8);
                    endptr = begin + *(u32 *)pSrc;

                    String_InitFromRange(dst, begin, endptr, &st.pad[0x2C], tag1);
}
                    { struct String_Init_Tag tag2;
copyCap = *(u32 *)((u8 *)pSrc + 0x10);

                    *(u32 *)((u8 *)dst + 0x10) = copyCap;
                    begin = *(char **)((u8 *)pSrc + 0x14);
                    endptr = begin + *(u32 *)((u8 *)pSrc + 0xC);

                    String_InitFromRange((u8 *)dst + 0xC, begin, endptr, &st.pad[0x28], tag2);
}
                    *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)pSrc + 0x18);
                }
                dst = (u8 *)dst + 0x1C;
                cnt -= 1;
                *(u32 *)((u8 *)pVec + 4) += 1;
            }

            cur = pPos;
            while ((u8 *)cur < (u8 *)end) {
                if (dst != 0) {
                    { struct String_Init_Tag tag3;
copyCap = *(u32 *)((u8 *)cur + 4);

                    *(u32 *)((u8 *)dst + 4) = copyCap;
                    begin = *(char **)((u8 *)cur + 8);
                    endptr = begin + *(u32 *)cur;

                    String_InitFromRange(dst, begin, endptr, &st.pad[0x24], tag3);
}
                    { struct String_Init_Tag tag4;
copyCap = *(u32 *)((u8 *)cur + 0x10);

                    *(u32 *)((u8 *)dst + 0x10) = copyCap;
                    begin = *(char **)((u8 *)cur + 0x14);
                    endptr = begin + *(u32 *)((u8 *)cur + 0xC);

                    String_InitFromRange((u8 *)dst + 0xC, begin, endptr, &st.pad[0x20], tag4);
}
                    *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)cur + 0x18);
                }
                cur = (u8 *)cur + 0x1C;
                dst = (u8 *)dst + 0x1C;
                *(u32 *)((u8 *)pVec + 4) += 1;
            }
        } else {
            bytes = cnt * 0x1C;
            dst = end;
            cur = (u8 *)end - bytes;

            while ((u8 *)cur < (u8 *)end) {
                if (dst != 0) {
                    { struct String_Init_Tag tag5;
copyCap = *(u32 *)((u8 *)cur + 4);

                    *(u32 *)((u8 *)dst + 4) = copyCap;
                    begin = *(char **)((u8 *)cur + 8);
                    endptr = begin + *(u32 *)cur;

                    String_InitFromRange(dst, begin, endptr, &st.pad[0x1C], tag5);
}
                    { struct String_Init_Tag tag6;
copyCap = *(u32 *)((u8 *)cur + 0x10);

                    *(u32 *)((u8 *)dst + 0x10) = copyCap;
                    begin = *(char **)((u8 *)cur + 0x14);
                    endptr = begin + *(u32 *)((u8 *)cur + 0xC);

                    String_InitFromRange((u8 *)dst + 0xC, begin, endptr, &st.pad[0x18], tag6);
}
                    *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)cur + 0x18);
                }
                cur = (u8 *)cur + 0x1C;
                dst = (u8 *)dst + 0x1C;
                *(u32 *)((u8 *)pVec + 4) += 1;
            }

            n = (room - cnt) * 0x1C;
            if ((u32)((u8 *)end - n) <= (u32)pSrc && (u8 *)pSrc < (u8 *)end) {
                pSrc = (u8 *)pSrc + bytes;
            }

            err = __files + 0xA0;
            shift = (u8 *)pPos + n;
            while ((u8 *)shift > (u8 *)pPos) {
                end = (u8 *)end - 0x1C;
                *(u32 *)&st.pad[0x38] = (u32)-1;
                shift = (u8 *)shift - 0x1C;
                if (CheckPos_800E6554(*(u32 *)shift, 0)) {
                    fprintf(err, lbl_802720E0 + 0x52);
                    abort();
                }
                *(u32 *)&st.pad[0x3C] = *(u32 *)shift;
                plen = *(u32 *)&st.pad[0x3C] < *(u32 *)&st.pad[0x38] ? (u32 *)&st.pad[0x3C] : (u32 *)&st.pad[0x38];
                len = *plen;
                if (end == shift) {
                    fn_800C94F8(end, 0, 0, 0, 0);
                    String_Resize(end, len, 1);
                } else {
                    String_Resize(end, len, 0);
                    memcpy(*(void **)((u8 *)end + 8), *(void **)((u8 *)shift + 8), len);
                }
                *(u32 *)&st.pad[0x30] = (u32)-1;
                if (CheckPos_800E6554(*(u32 *)((u8 *)shift + 0xC), 0)) {
                    fprintf(err, lbl_802720E0 + 0x52);
                    abort();
                }
                *(u32 *)&st.pad[0x34] = *(u32 *)((u8 *)shift + 0xC);
                plen = *(u32 *)&st.pad[0x34] < *(u32 *)&st.pad[0x30] ? (u32 *)&st.pad[0x34] : (u32 *)&st.pad[0x30];
                len = *plen;
                if ((u8 *)end + 0xC == (u8 *)shift + 0xC) {
                    fn_800C94F8((u8 *)end + 0xC, 0, 0, 0, 0);
                    String_Resize((u8 *)end + 0xC, len, 1);
                } else {
                    String_Resize((u8 *)end + 0xC, len, 0);
                    memcpy(*(void **)((u8 *)end + 0x14), *(void **)((u8 *)shift + 0x14), len);
                }
                *(u32 *)((u8 *)end + 0x18) = *(u32 *)((u8 *)shift + 0x18);
            }
        }

        err = __files + 0xA0;
        remaining = cnt;
        dst = pPos;
        srcC = (u8 *)pSrc + 0xC;
        while (remaining != 0) {
            *(u32 *)&st.pad[0x48] = (u32)-1;
            if (CheckPos_800E6554(*(u32 *)pSrc, 0)) {
                fprintf(err, lbl_802720E0 + 0x52);
                abort();
            }
            *(u32 *)&st.pad[0x4C] = *(u32 *)pSrc;
            plen = *(u32 *)&st.pad[0x4C] < *(u32 *)&st.pad[0x48] ? (u32 *)&st.pad[0x4C] : (u32 *)&st.pad[0x48];
            len = *plen;
            if (dst == pSrc) {
                fn_800C94F8(dst, 0, 0, 0, 0);
                String_Resize(dst, len, 1);
            } else {
                String_Resize(dst, len, 0);
                memcpy(*(void **)((u8 *)dst + 8), *(void **)((u8 *)pSrc + 8), len);
            }
            *(u32 *)&st.pad[0x40] = (u32)-1;
            if (CheckPos_800E6554(*(u32 *)((u8 *)pSrc + 0xC), 0)) {
                fprintf(err, lbl_802720E0 + 0x52);
                abort();
            }
            *(u32 *)&st.pad[0x44] = *(u32 *)((u8 *)pSrc + 0xC);
            plen = *(u32 *)&st.pad[0x44] < *(u32 *)&st.pad[0x40] ? (u32 *)&st.pad[0x44] : (u32 *)&st.pad[0x40];
            len = *plen;
            if ((u8 *)dst + 0xC == (u8 *)srcC) {
                fn_800C94F8((u8 *)dst + 0xC, 0, 0, 0, 0);
                String_Resize((u8 *)dst + 0xC, len, 1);
            } else {
                String_Resize((u8 *)dst + 0xC, len, 0);
                memcpy(*(void **)((u8 *)dst + 0x14), *(void **)((u8 *)pSrc + 0x14), len);
            }
            remaining -= 1;
            *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)pSrc + 0x18);
            dst = (u8 *)dst + 0x1C;
        }
    } else {
        st.cap = 0;
        st.size = 0;
        st.data = 0;

        one = 1;
        cap = *(u32 *)pVec;
        if (cap != 0) {
            one = cap;
        }
        cap = one;

        while (need > cap) {
            if (cap < 0x04924924U) {
                cap *= 2;
            } else {
                cap = 0x09249249U;
            }
        }

        newData = Heap_Alloc((s32)(cap * 0x1C));
        if (newData == 0) {
            fprintf(__files + 0xA0, lbl_802720E0 + 0xB7);
            abort();
        }

        dst = newData;
        st.cap = cap;
        st.data = newData;

        cur = *(void **)((u8 *)pVec + 8);
        end = (u8 *)cur + *(u32 *)((u8 *)pVec + 4) * 0x1C;

        while ((u8 *)cur < (u8 *)pPos) {
            if (dst != 0) {
                { struct String_Init_Tag tag7;
copyCap = *(u32 *)((u8 *)cur + 4);

                *(u32 *)((u8 *)dst + 4) = copyCap;
                begin = *(char **)((u8 *)cur + 8);
                endptr = begin + *(u32 *)cur;

                String_InitFromRange(dst, begin, endptr, &st.pad[0x14], tag7);
}
                { struct String_Init_Tag tag8;
copyCap = *(u32 *)((u8 *)cur + 0x10);

                *(u32 *)((u8 *)dst + 0x10) = copyCap;
                begin = *(char **)((u8 *)cur + 0x14);
                endptr = begin + *(u32 *)((u8 *)cur + 0xC);

                String_InitFromRange((u8 *)dst + 0xC, begin, endptr, &st.pad[0x10], tag8);
}
                *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)cur + 0x18);
            }
            cur = (u8 *)cur + 0x1C;
            dst = (u8 *)dst + 0x1C;
            st.size += 1;
        }

        while (cnt != 0) {
            if (dst != 0) {
                { struct String_Init_Tag tag9;
copyCap = *(u32 *)((u8 *)pSrc + 4);

                *(u32 *)((u8 *)dst + 4) = copyCap;
                begin = *(char **)((u8 *)pSrc + 8);
                endptr = begin + *(u32 *)pSrc;

                String_InitFromRange(dst, begin, endptr, &st.pad[0xC], tag9);
}
                { struct String_Init_Tag tag10;
copyCap = *(u32 *)((u8 *)pSrc + 0x10);

                *(u32 *)((u8 *)dst + 0x10) = copyCap;
                begin = *(char **)((u8 *)pSrc + 0x14);
                endptr = begin + *(u32 *)((u8 *)pSrc + 0xC);

                String_InitFromRange((u8 *)dst + 0xC, begin, endptr, &st.pad[0x8], tag10);
}
                *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)pSrc + 0x18);
            }
            dst = (u8 *)dst + 0x1C;
            cnt -= 1;
            st.size += 1;
        }

        while ((u8 *)cur < (u8 *)end) {
            if (dst != 0) {
                { struct String_Init_Tag tag11;
copyCap = *(u32 *)((u8 *)cur + 4);

                *(u32 *)((u8 *)dst + 4) = copyCap;
                begin = *(char **)((u8 *)cur + 8);
                endptr = begin + *(u32 *)cur;

                String_InitFromRange(dst, begin, endptr, &st.pad[0x4], tag11);
}
                { struct String_Init_Tag tag12;
copyCap = *(u32 *)((u8 *)cur + 0x10);

                *(u32 *)((u8 *)dst + 0x10) = copyCap;
                begin = *(char **)((u8 *)cur + 0x14);
                endptr = begin + *(u32 *)((u8 *)cur + 0xC);

                String_InitFromRange((u8 *)dst + 0xC, begin, endptr, &st.pad[0x0], tag12);
}
                *(u32 *)((u8 *)dst + 0x18) = *(u32 *)((u8 *)cur + 0x18);
            }
            cur = (u8 *)cur + 0x1C;
            dst = (u8 *)dst + 0x1C;
            st.size += 1;
        }

        if (&st.cap != (u32 *)pVec) {
            u32 temp;
            void *ptr;
            temp = st.cap;
            st.cap = *(u32 *)pVec;
            *(u32 *)pVec = temp;
            ptr = st.data;
            st.data = *(void **)((u8 *)pVec + 8);
            *(void **)((u8 *)pVec + 8) = ptr;
            temp = st.size;
            st.size = *(u32 *)((u8 *)pVec + 4);
            *(u32 *)((u8 *)pVec + 4) = temp;
        }

        fn_800E6DC8(&st.cap);
        if (st.data != 0) {
            Heap_Free(st.data);
        }
    }
}
#pragma global_optimizer on
void *fn_800E6D68(void *arg0, s16 arg1) {
    void Heap_Free(void *);
    void fn_800E6DC8(void *);

    if (arg0 != NULL) {
        fn_800E6DC8(arg0);
        if (M2C_FIELD(arg0, void **, 8) != NULL) {
            Heap_Free(M2C_FIELD(arg0, void **, 8));
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void fn_800E6DC8(void *arg0) {
    void Heap_Free(void *);

    u8 *base;
    u8 *current;

    base = *(u8 **)((u8 *)arg0 + 0x8);
    current = base + *(s32 *)((u8 *)arg0 + 0x4) * 0x1C;

    while (current > base) {
        current -= 0x1C;

        if (current != NULL) {
            if ((u8 *)current + 0xC != NULL) {
                if (*(void **)((u8 *)current + 0x14) != NULL) {
                    Heap_Free(*(void **)((u8 *)current + 0x14));
                }
            }
            if (current != NULL) {
                if (*(void **)((u8 *)current + 8) != NULL) {
                    Heap_Free(*(void **)((u8 *)current + 8));
                }
            }
        }
    }

    *(s32 *)((u8 *)arg0 + 0x4) = 0;
}

#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
void *fn_800E6E5C(void *arg0, void *arg1) {
    void String_Init(void *, void *, void *);
    void *Xml_GetNamedValue(void *, void *, void *);
    void String_Destroy(void *, s32);
    void *Heap_Alloc(u32);
    void *fn_800DC0BC(void *, void *, void *, s32);
    void *fn_800DF7A0(void *, void *, void *);
    void *fn_800DDE28(void *, void *, void *);
    void *fn_800E9464(void *, void *, void *);
    void *fn_801CB41C(void *, void *, void *);
    void *fn_800E2884(void *, void *, void *);
    void *fn_800E6058(void *, void *, void *);
    void *fn_800E3838(void *, void *, void *);
    void *fn_800E2370(void *, void *, void *);
    void *fn_800E4688(void *, void *, void *);
    void *fn_800E3DEC(void *, void *, void *);
    void *fn_800DB338(void *, void *, void *);
    void *fn_800E88A8(void *, void *, void *);
    void *fn_800DD3E8(void *, void *, void *);
    void *fn_800EE0B0(void *, void *, void *);
    void *fn_8011D118(void *, void *, void *);
    void *fn_801236CC(void *, void *, void *);
    void *BattleTerrain_Ctor(void *, void *, void *);
    void *WeaponAttach_Ctor(void *, void *, void *);
    void *fn_801669B0(void *, void *, void *);
    void *fn_80198288(void *, void *, void *);
    extern char gUiClassNames[];
    struct { u32 f0, f4; void *f8; } sp1C, sp10;
    u32 spC, sp8;
    char sp28[0x28];
    void *result;
    void *p;
    char *buf;

    String_Init(&sp10, gUiClassNames, &spC);
    Xml_GetNamedValue(sp28, arg1, &sp10);
    buf = sp28;
    String_Init(&sp1C, buf, &sp8);
    String_Destroy(&sp10, -1);
    result = 0;

    if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x6))) {
        p = Heap_Alloc(0x78);
        if (p != 0) p = fn_800DC0BC(p, arg0, arg1, -1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0xC))) {
        p = Heap_Alloc(0x48);
        if (p != 0) p = fn_800DF7A0(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x10))) {
        p = Heap_Alloc(0x78);
        if (p != 0) p = fn_800DDE28(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x16))) {
        p = Heap_Alloc(0x2B8);
        if (p != 0) p = fn_800E9464(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x1D))) {
        p = Heap_Alloc(0x7C);
        if (p != 0) p = fn_801CB41C(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x29))) {
        p = Heap_Alloc(0x68);
        if (p != 0) p = fn_800E2884(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x2E))) {
        p = Heap_Alloc(0x118);
        if (p != 0) p = fn_800E6058(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x34))) {
        p = Heap_Alloc(0x70);
        if (p != 0) p = fn_800E3838(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x3C))) {
        p = Heap_Alloc(0x7C);
        if (p != 0) p = fn_800E2370(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x44))) {
        p = Heap_Alloc(0xAC);
        if (p != 0) p = fn_800E4688(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x4C))) {
        p = Heap_Alloc(0xC0);
        if (p != 0) p = fn_800E3DEC(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x53))) {
        p = Heap_Alloc(0xC0);
        if (p != 0) p = fn_800DB338(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x5B))) {
        p = Heap_Alloc(0xBC);
        if (p != 0) p = fn_800E88A8(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x62))) {
        p = Heap_Alloc(0x11C);
        if (p != 0) p = fn_800DD3E8(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x6A))) {
        p = Heap_Alloc(0xB8);
        if (p != 0) p = fn_800EE0B0(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x71))) {
        p = Heap_Alloc(0x100);
        if (p != 0) p = fn_8011D118(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x7A))) {
        p = Heap_Alloc(0x98);
        if (p != 0) p = fn_801236CC(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x81))) {
        p = Heap_Alloc(0x54);
        if (p != 0) p = BattleTerrain_Ctor(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x89))) {
        p = Heap_Alloc(0x18C);
        if (p != 0) p = WeaponAttach_Ctor(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x90))) {
        p = Heap_Alloc(0x150);
        if (p != 0) p = fn_801669B0(p, arg0, arg1);
        result = p;
    } else if (fn_800D3534((s32 *)&sp1C, (s32)(gUiClassNames + 0x9A))) {
        p = Heap_Alloc(0xA0);
        if (p != 0) p = fn_80198288(p, arg0, arg1);
        result = p;
    }
    String_Destroy(&sp1C, -1);
    return result;
}
#pragma pop
void fn_800E76D0(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
}

void fn_800E76D8(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3C) = arg1;
}

#pragma cplusplus on
#pragma dont_inline on
/* Find each Camera child under obj and set its transition decay rate. */
extern "C" void UiObj_SetCamerasTransitionDecay(void *obj, f32 decay) {
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
    extern char gUiClassNames[];
    u8 list[0x18];
    s32 count;
    s32 i;

    ObjList_Init(list);
    if (M2C_FIELD(obj, u8 *, 0x3C) == 0) {
        ObjList_Destroy(list, -1);
        return;
    }
    count = ((Obj *)obj)->v10(list, gUiClassNames + 0x16, 0);
    for (i = 0; i < count; i++) {
        Camera_SetTransitionDecay((void *)ObjList_Get(list, i), decay);
    }
    ObjList_Destroy(list, -1);
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
extern "C" void Camera_SetTransition(void *, s32, f32, f32, s32);
extern "C" void UiObj_SetCamerasTransition(void *obj, s32 flag, s32 frames, f32 duration) {
    /* Find each Camera child under obj and start a timed transition on it. */
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
    extern char gUiClassNames[];
    extern f32 gFloat_1_0;
    u8 list[0x18];
    s32 count;
    s32 i;

    ObjList_Init(list);
    if (M2C_FIELD(obj, u8 *, 0x3C) == 0) {
        ObjList_Destroy(list, -1);
        return;
    }
    count = ((Obj *)obj)->v10(list, gUiClassNames + 0x16, 0);
    for (i = 0; i < count; i++) {
        Camera_SetTransition((void *)ObjList_Get(list, i), frames, duration, gFloat_1_0, flag);
    }
    ObjList_Destroy(list, -1);
}

#pragma dont_inline reset
#pragma cplusplus reset

void fn_800E788C(s32 arg0, s32 arg1) {
    String_Copy(arg0, arg1 + 0x30);
}

void fn_800E78B0(void *arg0, String *arg1) {
    String_Assign((String *)((char *)arg0 + 0x30), arg1, 0, -1);
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

extern "C" void fn_800E7A38(void *arg0, s32 arg1) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void *v4(s32) = 0;
    };
    void fn_800DF638(void *, s32);
    s32 i;

    *(u8 *)((char *)arg0 + 0x2C) = 0;
    for (i = 0; i < *(s32 *)((char *)arg0 + 4); i++) {
        fn_800DF638(((Obj *)arg0)->v4(i), arg1);
    }
    ((Obj *)arg0)->v0();
    *(s32 *)((char *)arg0 + 0x44) += 1;
}

#pragma cplusplus reset
#pragma dont_inline reset

#pragma cplusplus on
extern "C" s32 fn_800E7AD4(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *String_CStr(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(char *, void *) = 0;
    };
    void fn_801CAF94(void *, s32, s32, s32, s32);
    extern char gUiClassNames[];
    void *result;

    result = ((Obj *)arg0)->v2(gUiClassNames + 0x1D, String_CStr(arg1));
    if (result != NULL && *(u8 *)((u8 *)arg0 + 0x3D) != 0) {
        fn_801CAF94(result, arg2, arg3, arg4, 0);
        return 1;
    }
    return 0;
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" s32 fn_800E7B80(void *arg0, void *arg1) {
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
    extern char gUiClassNames[];
    void fn_800DF6DC(u8 *, void *);
    s32 String_Compare(u8 *, u32, u32, char *, u32);
    void String_Destroy(void *, s32);
    void fn_800E9044(void *);
    void fn_800E9050(void *);
    register s32 count;
    u32 key;
    void *item;
    s32 i;
    register u8 match;
    u8 str[0xC];
    u8 list[0x14];

    ObjList_Init(list);
    count = ((Obj *)arg0)->v10(list, gUiClassNames + 0x16, 0);
    key = *(u32 *)arg1;
    for (i = 0; i < count; i++) {
        item = (void *)ObjList_Get(list, i);
        fn_800DF6DC(str, item);
        match = 0;
        if (*(u32 *)str == key && String_Compare(str, 0, *(u32 *)str, *(char **)((u8 *)arg1 + 8), key) == 0) {
            match = 1;
        }
        String_Destroy(str, -1);
        if (match != 0) {
            fn_800E9050(item);
        } else {
            fn_800E9044(item);
        }
    }
    ObjList_Destroy(list, -1);
    return 1;
}
#pragma dont_inline reset
#pragma cplusplus reset

#pragma cplusplus reset
u8 fn_800E7C80(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

void Win_SetDirty(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 1;
}

#pragma cplusplus on
extern "C" void fn_800E7C94(void *arg0, void *arg1, s32 arg2, f32 arg3) {
    void *String_CStr(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(char *, void *) = 0;
    };
    extern char gUiClassNames[];
    void *result;

    result = ((Obj *)arg0)->v2(gUiClassNames + 0x6, String_CStr(arg1));
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
    extern char gUiClassNames[];
    u8 alloc;
    String tmp;
    void *found;

    String_Init(&tmp, gUiClassNames + 6, &alloc);
    found = ((Obj *)arg0)->v2(String_CStr(&tmp), String_CStr(arg1));
    if (found != NULL) {
        fn_800DF664(found);
    }
    String_Destroy(&tmp, -1);
}
#pragma dont_inline reset
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_800E7DA4(void *arg0, void *arg1) {
    void *String_CStr(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
    };
    extern char gUiClassNames[];

    ((Obj *)arg0)->v2(gUiClassNames + 0x2E, String_CStr(arg1));
}
#pragma cplusplus on
extern "C" void fn_800E7DF8(void *arg0, void *arg1) {
    void *String_CStr(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
    };
    extern char gUiClassNames[];

    ((Obj *)arg0)->v2(gUiClassNames + 0x3C, String_CStr(arg1));
}
#pragma cplusplus reset
extern "C" void fn_800E7E4C(void *arg0, void *arg1) {
    void *String_CStr(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
    };
    extern char gUiClassNames[];

    ((Obj *)arg0)->v2(gUiClassNames + 0x6, String_CStr(arg1));
}
#pragma cplusplus reset

#pragma cplusplus on
#pragma dont_inline on
  extern "C" void ObjList_Init(void *);
  extern "C" s32 ObjList_Get(void *, s32);
extern "C" u8 Camera_IsEnabled(void *);
/* Return the first enabled Camera child under obj, or 0 if none. */
extern "C" s32 UiObj_FindEnabledCamera(void *obj) {
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
    extern char gUiClassNames[];
    u8 list[0x18];
    s32 count;
    s32 camera;
    s32 i;

    ObjList_Init(list);
    count = ((Obj *)obj)->v10(list, gUiClassNames + 0x16, 0);
    for (i = 0; i < count; i++) {
        camera = ObjList_Get(list, i);
        if (Camera_IsEnabled((void *)camera)) {
            ObjList_Destroy(list, -1);
            return camera;
        }
    }
    ObjList_Destroy(list, -1);
    return 0;
}

extern "C" void fn_800E7F60(void *arg0, void *arg1) {
    void *String_CStr(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
    };
    extern char gUiClassNames[];

    ((Obj *)arg0)->v2(gUiClassNames + 0x16, String_CStr(arg1));
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
    extern char gUiClassNames[];

    ((Obj *)arg0)->v2(gUiClassNames + 0x34, String_CStr(arg1));
}

extern "C" void fn_800E8008(void *arg0, void *arg1) {
    void *String_CStr(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(char *, void *) = 0;
        virtual void v3(char *, void *) = 0;
    };
    extern char gUiClassNames[];

    ((Obj *)arg0)->v3(gUiClassNames + 0x10, String_CStr(arg1));
}

#pragma dont_inline reset
#pragma cplusplus reset
#pragma cplusplus on
extern "C" void *fn_800E805C(void *arg0, void *arg1, void *arg2) {
    void *String_CStr(void *);
    void fn_800DF664(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(void *, void *) = 0;
    };
    void *result;

    result = ((Obj *)arg0)->v2(String_CStr(arg1), String_CStr(arg2));
    if (result != NULL) {
        fn_800DF664(result);
    }
    return result;
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void *fn_800E80D8(void *arg0, void *arg1, void *arg2) {
    void *String_CStr(void *);
    void fn_800DF670(void *);
    struct Obj {
        u8 pad[0x10];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2(void *, void *) = 0;
    };
    void *result;

    result = ((Obj *)arg0)->v2(String_CStr(arg1), String_CStr(arg2));
    if (result != NULL) {
        fn_800DF670(result);
    }
    return result;
}
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

#pragma push
#pragma opt_lifetimes off
extern "C" void fn_800E81A0(void *arg0, void *arg1) {
    struct Owner { u8 pad[0x10]; virtual void v0()=0; virtual void v1()=0; virtual void *v2(char *,void *)=0; };
    struct Child { u8 pad[0x40]; virtual void v0()=0; virtual void v1()=0; virtual void v2()=0; virtual void v3()=0; virtual ~Child()=0; };
    void fn_800DF700(void *);
    void fn_800DF6DC(void *,void *);
    s32 fn_800DC018(void *);
    void fn_800DC010(void *,s32);
    void fn_800DFFB8(void *,void *);
    s32 String_Compare(void *,u32,u32,char *,u32);
    void *String_CStr(void *);
    extern char gUiClassNames[];
    String name, id;
    s32 cmp;
    void *found;
    if(arg1) {
        fn_800DF700(&name);
        u32 len=strlen(gUiClassNames+6);
        char *className=gUiClassNames;
        cmp=String_Compare(&name,0,name.size,className+6,len);
        String_Destroy(&name,-1);
        if(cmp==0) {
            fn_800DF6DC(&id,arg1);
            found=((Owner *)arg0)->v2(gUiClassNames+6,String_CStr(&id));
            String_Destroy(&id,-1);
            if(found) {
                delete (Child *)arg1;
                return;
            }
            if(fn_800DC018(arg1)==-1) {
                s32 n=*(s32 *)((u8 *)arg0+0x20);
                *(s32 *)((u8 *)arg0+0x20)=n+1;
                fn_800DC010(arg1,n);
            }
        }
        fn_800DFFB8(arg0,arg1);
    }
}
#pragma pop
extern "C" s32 fn_800E82D8(void *arg0, void *arg1) {
void String_Assign(void *,void *,s32,s32);
void String_Init(void *,void *,void *);
void String_Destroy(void *,s32);
void Xml_ParseFile(void *,void *,void *);
void Xml_GetNamedValue(void *,void *,void *);
u8 fn_800C8F48(void *);
void Xml_Destroy(void *,s32);
s32 String_Compare(void *,s32,u32,void *,u32);
u32 strlen(void *);
extern u8 gUiClassNames[];
struct Obj { u8 pad[0x10];
virtual void v0()=0;
virtual void v1()=0;
virtual void v2()=0;
virtual void v3()=0;
virtual void v4()=0;
virtual void v5(void *)=0;
virtual void v6()=0;
virtual void v7()=0;
virtual void v8()=0;
virtual void v9()=0;
virtual void v10()=0;
virtual void *v11(void *)=0;
};
u8 xml[0x68];
u32 value[8];
u32 name[8];
String s3c, s30, s24, s18;
u32 a14,a10,ac,a8;
s32 count=0;
void *entry;
u32 length;
u8 *key;
String_Assign((u8 *)arg0+0x14,arg1,0,-1);
String_Init(&s3c,gUiClassNames+0xae,&a14);
Xml_ParseFile(xml,arg1,&s3c);
String_Destroy(&s3c,-1);
String_Init(&s24,gUiClassNames,&a8);
Xml_GetNamedValue(name,xml,&s24);
entry=name;
String_Init(&s18,entry,&ac);
String_Destroy(&s24,-1);
length=strlen(gUiClassNames+0xa0);
key=gUiClassNames;
if(String_Compare(&s18,0,s18.size,key+0xa0,length)==0) {
String_Init(&s30,gUiClassNames+0xa5,&a10);
Xml_GetNamedValue(value,xml,&s30);
*(u32 *)((u8 *)arg0+0x40)=value[0];
String_Destroy(&s30,-1);
fn_800C8F48(xml);
} else *(u32 *)((u8 *)arg0+0x40)=0x100000;
String_Destroy(&s18,-1);
do {
entry=((Obj *)arg0)->v11(xml);
if(entry) {
((Obj *)arg0)->v5(entry);
count++;
}
} while(fn_800C8F48(xml));
Xml_Destroy(xml,-1);
return count;
}

#pragma cplusplus reset
void *fn_800E8488(void *arg0, s16 arg1)
{
    extern u8 lbl_8028E200[];
    void String_Destroy(void *, s32);
    void ObjList_Destroy(void *, s32);
    void Heap_Free(void *);
    void *self;
    s16 n;

    n = arg1;
    self = arg0;
    if (self != NULL) {
        *(void **)((u8 *)self + 0x10) = lbl_8028E200;
        String_Destroy((u8 *)self + 0x30, -1);
        String_Destroy((u8 *)self + 0x14, -1);
        ObjList_Destroy(self, 0);
        if (n > 0) {
            Heap_Free(self);
        }
    }
    return self;
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" void *fn_800E8504(void *arg0, s32 arg1, String *arg2) {
extern u8 lbl_8028E200[];
extern u8 gUiClassNames[];
void ObjList_Init(void *);
void String_AssignCStr(void *, void *, u32);
u32 strlen(void *);
void *Heap_Alloc(u32);
void String_Init(void *, void *, void *);
void *Layer_Create(void *, void *, void *, s32);
void String_Destroy(void *, s32);
s32 String_Compare(void *, s32, u32, void *, u32);
struct Obj {
  u8 pad[0x10];
  virtual void v0() = 0;
  virtual void v1() = 0;
  virtual void v2() = 0;
  virtual void v3() = 0;
  virtual void v4() = 0;
  virtual void v5(void *) = 0;
  virtual void v6() = 0;
  virtual void v7() = 0;
  virtual void v8() = 0;
  virtual void v9() = 0;
  virtual void v10() = 0;
  virtual void v11() = 0;
  virtual void v12(void *) = 0;
};
String temp;
u32 scratch;
void *layer;
s8 made;
u8 *key;
u32 length;
String *name;
s32 owner;
name = arg2;
owner = arg1;
made = 0;
ObjList_Init(arg0);
*(void **)((u8 *)arg0 + 0x10) = lbl_8028E200;
*(u32 *)((u8 *)arg0 + 0x14) = 0;
*(u32 *)((u8 *)arg0 + 0x18) = 0;
*(u32 *)((u8 *)arg0 + 0x1C) = 0;
*(u32 *)((u8 *)arg0 + 0x18) = 0;
*(u32 *)((u8 *)arg0 + 0x30) = 0;
*(u32 *)((u8 *)arg0 + 0x34) = 0;
*(u32 *)((u8 *)arg0 + 0x38) = 0;
*(u32 *)((u8 *)arg0 + 0x34) = 0;
*(u32 *)((u8 *)arg0 + 0x20) = 0;
*(s32 *)((u8 *)arg0 + 0x24) = owner;
*(u32 *)((u8 *)arg0 + 0x44) = 0;
String_AssignCStr((u8 *)arg0 + 0x30, gUiClassNames + 0xb3, strlen(gUiClassNames + 0xb3));
*((u8 *)arg0 + 0x3c) = 1;
*((u8 *)arg0 + 0x3d) = 1;
layer = Heap_Alloc(0x78);
if (layer) {
  String_Init(&temp, gUiClassNames + 0xb4, &scratch);
  made = 1;
  layer = Layer_Create(layer, arg0, &temp, 0);
}
((Obj *)arg0)->v5(layer);
if (made) String_Destroy(&temp, -1);
key = gUiClassNames;
length = strlen(key + 0xb3);
if (String_Compare(name, 0, name->size, key + 0xb3, length)) {
  ((Obj *)arg0)->v12(name);
  ((Obj *)arg0)->v0();
}
*((u8 *)arg0 + 0x2c) = 0;
return arg0;
}
#pragma dont_inline reset
#pragma cplusplus reset
void *fn_800E86A4(void *arg0, s16 arg1) {
    void fn_800E45EC(void *, s32);
    void Heap_Free(void *);
    extern void *lbl_8028E250[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E250;
        String_Destroy((s8 *)arg0 + 0xAC, -1);
        fn_800E45EC(arg0, 0);
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma optimization_level 4
#pragma opt_lifetimes off
void fn_800E8714(void *arg0, s32 arg1) {
    void fn_800E3040(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
    s32 fn_800E7FB4(s32, void *);
    void *String_Init(void *, char *, void *);
    extern char lbl_802723E8[];
    extern const f32 lbl_80369F70;
#pragma cplusplus on
    class Window {
    public:
        u8 pad[0x40];
        virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
        virtual void v4(); virtual void v5();
        virtual void draw(s32, s32, void *, s32, s32, f32);
    };
    String name;
    s32 scratch, item, owner;
    s32 dx = 0, dy = 0, mode = 0;
    s32 x, y;
    if (M2C_FIELD(arg0, u8 *, 0x71)) {
        mode = 1;
        dy = 2;
        dx = 2;
    }
    x = M2C_FIELD(arg0, s32 *, 0x68) + dx;
    y = M2C_FIELD(arg0, s32 *, 0x6C) + dy;
    ((Window *)arg0)->draw(M2C_FIELD(arg0, s32 *, 0x48) + x, M2C_FIELD(arg0, s32 *, 0x4C) + y, (u8 *)arg0 + 0xAC, 1, 255, lbl_80369F70);
    owner = *(s32 *)arg0;
    String_Init(&name, lbl_802723E8, &scratch);
    item = fn_800E7FB4(owner, &name);
    String_Destroy(&name, -1);
    if (M2C_FIELD(arg0, u8 *, 0x9C)) {
        fn_800E3040(item, arg1, mode, M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x64), 0, 255, 255, 255, 0);
    } else {
        fn_800E3040(item, arg1, mode, M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x64), 255, 255, 255, 255, 0);
    }
#pragma cplusplus reset
}
#pragma pop
void fn_800E8888(void) {
    M2C_UNK Win_UpdatePos();
    Win_UpdatePos();
}

void *fn_800E88A8(u8 *self, void *owner, void *xml) {
void *fn_800E4688(void *,void *,void *);
void Xml_GetNamedValue(void *,void *,void *);
void String_Init(void *,void *,void *);
void String_AssignCStr(void *,void *,s32);
s32 strlen(char *);
extern u8 lbl_8028E250[],lbl_802723E8[];
struct Value { u32 v[8]; } value,flag;
String name,name2;
s32 scratch,scratch2;
char *text;
fn_800E4688(self,owner,xml);
*(void **)(self+0x40)=lbl_8028E250;
*(u32*)(self+0xac)=0; *(u32*)(self+0xb0)=0; *(u32*)(self+0xb4)=0; *(u32*)(self+0xb0)=0;
if(*(s32*)(self+0x60)==0) *(s32*)(self+0x60)=64;
if(*(s32*)(self+0x64)==0) *(s32*)(self+0x64)=32;
*(s32*)(self+0x68)=6;
*(s32*)(self+0x6c)=*(s32*)(self+0x64)/2-8;
String_Init(&name,lbl_802723E8+7,&scratch);
Xml_GetNamedValue(&value,xml,&name);
text=(char *)&value;
String_AssignCStr(self+0xac,text,strlen(text));
String_Destroy(&name,-1);
String_Init(&name2,lbl_802723E8+12,&scratch2);
Xml_GetNamedValue(&flag,xml,&name2);
self[0xb8]=flag.v[0]!=0;
String_Destroy(&name2,-1);
return self;
}

void *fn_800E89EC(void *arg0, s16 arg1) {
    void Array_Destroy(void *, void *, s32, s32);
    void fn_800DF724(void *, s32);
    void Heap_Free(void *);
    extern void *lbl_8028E2B0[];
    extern void *lbl_8028DED0[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 0x40) = lbl_8028E2B0;
        Array_Destroy((s8 *)arg0 + 0xBC, (void *)String_Destroy, 0xC, 3);
        String_Destroy((s8 *)arg0 + 0xB0, -1);
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void ***, 0x40) = lbl_8028DED0;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void Camera_SetTransitionDecay(void *arg0, f32 farg0) {
    extern f32 lbl_80369F7C;
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) (lbl_80369F7C * farg0);
    M2C_FIELD(arg0, s32 *, 0x120) = 0x3C;
}

void Camera_SetTransition(void *arg0, s32 arg1, f32 farg0, f32 farg1, s32 arg2) {
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

/* Advance camera sine transition: write offset on X or Y, decay amplitude, tick timer. */
void Camera_UpdateTransition(void *cam) {
    f64 sin(f64);

    if (M2C_FIELD(cam, s32 *, 0x120) > 0) {
        if (M2C_FIELD(cam, u8 *, 0x124) != 0) {
            M2C_FIELD(cam, f32 *, 0x11C) =
                M2C_FIELD(cam, f32 *, 0x108) * (f32)sin(M2C_FIELD(cam, f32 *, 0x114));
            M2C_FIELD(cam, f32 *, 0x118) = 0.0f;
        } else {
            M2C_FIELD(cam, f32 *, 0x118) =
                M2C_FIELD(cam, f32 *, 0x108) * (f32)sin(M2C_FIELD(cam, f32 *, 0x114));
            M2C_FIELD(cam, f32 *, 0x11C) = 0.0f;
        }
        M2C_FIELD(cam, f32 *, 0x114) += M2C_FIELD(cam, f32 *, 0x10C);
        M2C_FIELD(cam, f32 *, 0x108) += M2C_FIELD(cam, f32 *, 0x110);
        if (M2C_FIELD(cam, f32 *, 0x108) < 0.0f) {
            M2C_FIELD(cam, f32 *, 0x108) = 0.0f;
        }
        M2C_FIELD(cam, s32 *, 0x120)--;
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

#pragma optimization_level 3
void fn_800E8BF8(u8 *self, f32 *vec, f32 *vec2, s32 arg3, f32 farg0) {
    void fn_800DF44C(void *, s32, f32, f32, f32);
    void fn_800DF41C(void *, f32 *, f32 *, f32);
    void fn_800DF410(f32 *, f32 *);
    f32 saved;

    saved = farg0;
    farg0 = vec[0];
    if (0.0f != farg0 || 0.0f != vec[1] || 0.0f != vec[2]) {
        fn_800DF44C(self + 0x134, arg3, farg0, vec[1], vec[2]);
    }
    fn_800DF44C(self + 0x194, arg3, vec2[0], vec2[1], vec2[2]);
    fn_800DF44C(self + 0x254, arg3, saved, 0.0f, 0.0f);
    fn_800DF41C(self + 0x134, (f32 *)(self + 0xf0), (f32 *)(self + 0xf4), *(f32 *)(self + 0xf8));
    fn_800DF41C(self + 0x194, (f32 *)(self + 0x54), (f32 *)(self + 0x58), *(f32 *)(self + 0x5c));
    fn_800DF410((f32 *)(self + 0x254), (f32 *)(self + 0x104));
}
#pragma optimization_level reset
void fn_800E8CEC(void *arg0) {
    void Vec3Interp_Update(void *);
    void fn_800DF41C();
    void fn_800DF410(f32 *, f32 *);

    u8 *self;
    s32 remaining;

    self = (u8 *)arg0;

    if (*(s32 *)(self + 0x9C) != 0) {
        *(f32 *)(self + 0xE4) += *(f32 *)(self + 0x84);
        *(f32 *)(self + 0xE8) += *(f32 *)(self + 0x88);
        *(f32 *)(self + 0xEC) += *(f32 *)(self + 0x8C);

        remaining = *(s32 *)(self + 0x9C) - 1;
        *(s32 *)(self + 0x9C) = remaining;

        if (remaining <= 0) {
            *(f32 *)(self + 0xE4) = *(f32 *)(self + 0x78);
            *(f32 *)(self + 0xE8) = *(f32 *)(self + 0x7C);
            *(f32 *)(self + 0xEC) = *(f32 *)(self + 0x80);
            *(s32 *)(self + 0x9C) = 0;
        }
    }

    if (*(s32 *)(self + 0x160) != 0) {
        Vec3Interp_Update(self + 0x134);
        fn_800DF41C(
            self + 0x134,
            (f32 *)(self + 0xF0),
            (f32 *)(self + 0xF4),
            *(f32 *)(self + 0xF8)
        );
    }

    if (*(s32 *)(self + 0x1C0) != 0) {
        Vec3Interp_Update(self + 0x194);
        fn_800DF41C(
            self + 0x194,
            (f32 *)(self + 0x54),
            (f32 *)(self + 0x58),
            *(f32 *)(self + 0x5C)
        );
    }

    if (*(s32 *)(self + 0x280) != 0) {
        Vec3Interp_Update(self + 0x254);
        fn_800DF410(
            (f32 *)(self + 0x254),
            (f32 *)(self + 0x104)
        );
    }
}

void fn_800E8DF0(f32 *arg0, const f32 *arg1, f32 arg2) {
    f32 PSVECDistance(f32 *, f32 *);
    void fn_802031A8(f32 *, f32 *, f32 *);
    void fn_802031E8(f32 *, f32 *);
    void fn_802031CC(f32 *, f32 *, f32);

    f32 current[3];
    f32 destination[3];
    f32 delta[3];
    f32 distance;
    f32 x;
    f32 y;
    f32 z;

    x = arg1[0];
    y = arg1[1];
    arg0[30] = x;
    z = arg1[2];
    arg0[31] = y;
    arg0[32] = z;

    current[0] = arg0[57];
    current[1] = arg0[58];
    current[2] = arg0[59];

    destination[0] = arg0[30];
    destination[1] = arg0[31];
    destination[2] = arg0[32];

    distance = PSVECDistance(destination, current);

    if (distance < arg2) {
        ((s32 *)arg0)[39] = 0;
    } else {
        fn_802031A8(destination, current, delta);
        fn_802031E8(delta, delta);
        fn_802031CC(delta, delta, arg2);

        arg0[33] = delta[0];
        arg0[34] = delta[1];
        arg0[35] = delta[2];

        ((s32 *)arg0)[39] = (s32)(distance / arg2);
    }
}

#pragma cplusplus on
#pragma dont_inline on
extern "C" M2C_UNK *String_CStr(void *);
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
    String_Assign(&tmp, &self->strs[self->index], 0, -1);
    result = self->obj->v2(String_CStr(&self->name), String_CStr(&tmp));
    String_Destroy(&tmp, -1);
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

void Camera_GetEyePos(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0xF0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0xF4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0xF8);
}

#pragma scheduling on
void fn_800E8FE8(void *arg0, f32 arg1) {
    void fn_800DF478(void *, f32, f32, f32);
    extern const f32 lbl_80369F78;
    *(f32 *)((u8 *)arg0 + 0x104) = arg1;
    fn_800DF478((u8 *)arg0 + 0x254, arg1, lbl_80369F78, lbl_80369F78);
}
#pragma scheduling reset
f32 Camera_GetFov(void *arg0) {
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

u8 Camera_IsEnabled(void *arg0) {
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
void PSMTXRotRad(void *,s32,f32);void fn_802029C4(void *,void *,void *);void fn_80203184(void *,void *,void *);
void String_Destroy(void *,s16);void String_Assign(void *,void *,s32,s32);void *String_CStr(void *);
s32 String_Compare(void *,s32,u32,const char *,u32);u32 strlen(const char *);void fn_80067FE8(void *,void *,void *);
extern const char lbl_80272470[];extern const f32 lbl_80369F78,lbl_80369F84,lbl_80369F88,lbl_80369F8C;
struct Str { u32 len, cap, data; s32 cmp(const char *s) { u32 n = strlen(s); return String_Compare(this, 0, len, s, n); } };
struct V3 {f32 x,y,z; V3() {} V3(const V3 &v):x(v.x),y(v.y),z(v.z) {} };
struct Parent {u8 pad[16];virtual void v0();virtual void v1();virtual void *v2(void *,void *);};
struct Child {u8 pad[64];virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual V3 v13();};
f32 me0[12],mb0[12],m80[12],m50[12];
u32 str[3];
V3 pos,dir,offset,base;
u8 *self=(u8 *)arg0;
str[1]=0;str[0]=0;str[2]=0;str[1]=0;
if(!self[0xac]) {String_Destroy(str,-1);return;}
if(self[0xfd]){
pos.x=M2C_FIELD(self,f32 *,0x48);pos.y=M2C_FIELD(self,f32 *,0x4c);pos.z=M2C_FIELD(self,f32 *,0x50);
dir.x=lbl_80369F78;dir.y=lbl_80369F78;dir.z=lbl_80369F84;
PSMTXRotRad(me0,0x58,lbl_80369F88*M2C_FIELD(self,f32 *,0x54));
PSMTXRotRad(mb0,0x59,lbl_80369F88*M2C_FIELD(self,f32 *,0x58));
fn_802029C4(me0,&dir,&dir);fn_802029C4(mb0,&dir,&dir);
M2C_FIELD(self,f32 *,0x60)=dir.x;M2C_FIELD(self,f32 *,0x64)=dir.y;M2C_FIELD(self,f32 *,0x68)=dir.z;
fn_80203184(&pos,&dir,&dir);
M2C_FIELD(self,f32 *,0xe4)=dir.x;M2C_FIELD(self,f32 *,0xe8)=dir.y;M2C_FIELD(self,f32 *,0xec)=dir.z;
}else{
if(((Str *)(self+0xb0))->cmp(lbl_80272470) && ((Str *)(self+0xbc))->cmp(lbl_80272470)){
String_Assign(str,(self+0xbc)+M2C_FIELD(self,s32 *,0xe0)*12,0,-1);
M2C_FIELD(self,void **,0x12c)=((Parent *)M2C_FIELD(self,void **,0))->v2(String_CStr(self+0xb0),String_CStr(str));
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
PSMTXRotRad(m80,0x58,lbl_80369F88*M2C_FIELD(self,f32 *,0x54));
PSMTXRotRad(m50,0x59,lbl_80369F88*M2C_FIELD(self,f32 *,0x58));
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
String_Destroy(str,-1);
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

#pragma cplusplus on
#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
extern "C" void *fn_800E9464(void *arg0, void *arg1, void *arg2) {
    void fn_800DBBE4(void *);
    void fn_8022C260(void *, void *, void *, s32, s32);
    void fn_800E99CC(void);
    void String_Init(String *, char *, void *);
    char *Xml_GetNamedValue(char *, void *, String *);
    void String_AssignCStr(void *, char *, u32);
    void fn_800DF50C(void *);
    void fn_800DF478(void *, f32, f32, f32);
    void *Camera_Get(void);
    u32 strlen(const char *);
    extern char lbl_80272470[];
    extern u8 lbl_8028E2B0[];
    extern f32 lbl_80369F78;
    extern f32 lbl_80369F8C;

    char scratch[0x20];
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
    f32 initialZero;

    fn_800DBBE4(arg0);
    *(void **)((u8 *)arg0 + 0x40) = lbl_8028E2B0;
    *(u32 *)((u8 *)arg0 + 0xB0) = 0;
    *(u32 *)((u8 *)arg0 + 0xB4) = 0;
    *(u32 *)((u8 *)arg0 + 0xB8) = 0;
    *(u32 *)((u8 *)arg0 + 0xB4) = 0;
    fn_8022C260((u8 *)arg0 + 0xBC, (void *)&fn_800E99CC, (void *)&String_Destroy, 0xC, 3);
    initialZero = lbl_80369F78;
    *(f32 *)((u8 *)arg0 + 0xEC) = initialZero;
    *(f32 *)((u8 *)arg0 + 0xE8) = initialZero;
    *(f32 *)((u8 *)arg0 + 0xE4) = initialZero;
    *(f32 *)((u8 *)arg0 + 0xF8) = initialZero;
    *(f32 *)((u8 *)arg0 + 0xF4) = initialZero;
    *(f32 *)((u8 *)arg0 + 0xF0) = initialZero;
    fn_800DF50C((u8 *)arg0 + 0x134);
    fn_800DF50C((u8 *)arg0 + 0x194);
    fn_800DF50C((u8 *)arg0 + 0x1F4);
    fn_800DF50C((u8 *)arg0 + 0x254);
    *(u32 *)((u8 *)arg0 + 0x28) = 0x1000;

    String_Init(&strCC, lbl_80272470 + 1, &alloc38);
    Xml_GetNamedValue(buf258, arg2, &strCC);
    *(u8 *)((u8 *)arg0 + 0xAC) = (u8)(*(s32 *)buf258 != 0);
    String_Destroy(&strCC, -1);

    String_Init(&strC0, lbl_80272470 + 8, &alloc34);
    Xml_GetNamedValue(buf238, arg2, &strC0);
    p = buf238;
    len = strlen(p);
    String_AssignCStr((u8 *)((u32)arg0 + 0xB0), p, len);
    String_Destroy(&strC0, -1);

    String_Init(&strB4, lbl_80272470 + 0x14, &alloc30);
    Xml_GetNamedValue(buf218, arg2, &strB4);
    p = buf218;
    len = strlen(p);
    String_AssignCStr((u8 *)((u32)arg0 + 0xBC), p, len);
    String_Destroy(&strB4, -1);

    String_Init(&strA8, lbl_80272470 + 0x1F, &alloc2C);
    Xml_GetNamedValue(buf1F8, arg2, &strA8);
    p = buf1F8;
    len = strlen(p);
    String_AssignCStr((u8 *)((u32)arg0 + 0xC8), p, len);
    String_Destroy(&strA8, -1);

    String_Init(&str9C, lbl_80272470 + 0x2B, &alloc28);
    Xml_GetNamedValue(buf1D8, arg2, &str9C);
    p = buf1D8;
    len = strlen(p);
    String_AssignCStr((u8 *)((u32)arg0 + 0xD4), p, len);
    String_Destroy(&str9C, -1);

    *(u32 *)((u8 *)arg0 + 0xE0) = 0;
    String_Init(&str90, lbl_80272470 + 0x37, &alloc24);
    Xml_GetNamedValue(buf1B8, arg2, &str90);
    *(u32 *)(scratch + 0x00) = *(u32 *)(buf1B8 + 0x00);
    *(u32 *)(scratch + 0x04) = *(u32 *)(buf1B8 + 0x04);
    *(u32 *)(scratch + 0x08) = *(u32 *)(buf1B8 + 0x08);
    *(u32 *)(scratch + 0x0C) = *(u32 *)(buf1B8 + 0x0C);
    *(u32 *)(scratch + 0x10) = *(u32 *)(buf1B8 + 0x10);
    *(u32 *)(scratch + 0x14) = *(u32 *)(buf1B8 + 0x14);
    *(u32 *)(scratch + 0x18) = *(u32 *)(buf1B8 + 0x18);
    *(u32 *)(scratch + 0x1C) = *(u32 *)(buf1B8 + 0x1C);
    String_Destroy(&str90, -1);
    *(f32 *)((u8 *)arg0 + 0xE4) = *(f32 *)(scratch + 0x00);
    *(f32 *)((u8 *)arg0 + 0xE8) = *(f32 *)(scratch + 0x04);
    *(f32 *)((u8 *)arg0 + 0xEC) = *(f32 *)(scratch + 0x08);

    String_Init(&str84, lbl_80272470 + 0x3C, &alloc20);
    Xml_GetNamedValue(buf198, arg2, &str84);
    *(u32 *)(scratch + 0x00) = *(u32 *)(buf198 + 0x00);
    *(u32 *)(scratch + 0x04) = *(u32 *)(buf198 + 0x04);
    *(u32 *)(scratch + 0x08) = *(u32 *)(buf198 + 0x08);
    *(u32 *)(scratch + 0x0C) = *(u32 *)(buf198 + 0x0C);
    *(u32 *)(scratch + 0x10) = *(u32 *)(buf198 + 0x10);
    *(u32 *)(scratch + 0x14) = *(u32 *)(buf198 + 0x14);
    *(u32 *)(scratch + 0x18) = *(u32 *)(buf198 + 0x18);
    *(u32 *)(scratch + 0x1C) = *(u32 *)(buf198 + 0x1C);
    String_Destroy(&str84, -1);
    *(f32 *)((u8 *)arg0 + 0xF0) = *(f32 *)(scratch + 0x00);
    *(f32 *)((u8 *)arg0 + 0xF4) = *(f32 *)(scratch + 0x04);
    *(f32 *)((u8 *)arg0 + 0xF8) = *(f32 *)(scratch + 0x08);

    String_Init(&str78, lbl_80272470 + 0x41, &alloc1C);
    Xml_GetNamedValue(buf178, arg2, &str78);
    *(u8 *)((u8 *)arg0 + 0xFC) = (u8)(*(s32 *)buf178 != 0);
    String_Destroy(&str78, -1);

    String_Init(&str6C, lbl_80272470 + 0x49, &alloc18);
    Xml_GetNamedValue(buf158, arg2, &str6C);
    *(u8 *)((u8 *)arg0 + 0xFD) = (u8)(*(s32 *)buf158 != 0);
    String_Destroy(&str6C, -1);

    String_Init(&str60, lbl_80272470 + 0x53, &alloc14);
    Xml_GetNamedValue(buf138, arg2, &str60);
    *(f32 *)((u8 *)arg0 + 0x100) = *(f32 *)buf138;
    String_Destroy(&str60, -1);

    String_Init(&str54, lbl_80272470 + 0x58, &alloc10);
    Xml_GetNamedValue(buf118, arg2, &str54);
    *(f32 *)((u8 *)arg0 + 0x104) = *(f32 *)buf118;
    String_Destroy(&str54, -1);

    String_Init(&str48, lbl_80272470 + 0x5D, &allocC);
    Xml_GetNamedValue(bufF8, arg2, &str48);
    String_Destroy(&str48, -1);

    String_Init(&str3C, lbl_80272470 + 0x64, &alloc8);
    Xml_GetNamedValue(bufD8, arg2, &str3C);
    String_Destroy(&str3C, -1);

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
    *(void **)((u8 *)arg0 + 0x128) = Camera_Get();
    fn_800DF478((u8 *)((u32)arg0 + 0x134),
                *(f32 *)((u8 *)arg0 + 0xF0),
                *(f32 *)((u8 *)arg0 + 0xF4),
                *(f32 *)((u8 *)arg0 + 0xF8));
    fn_800DF478((u8 *)((u32)arg0 + 0x194),
                *(f32 *)((u8 *)arg0 + 0x54),
                *(f32 *)((u8 *)arg0 + 0x58),
                *(f32 *)((u8 *)arg0 + 0x5C));
    fn_800DF478((u8 *)((u32)arg0 + 0x254),
                *(f32 *)((u8 *)arg0 + 0x104),
                lbl_80369F78,
                lbl_80369F78);
    *(u32 *)((u8 *)arg0 + 0x2B4) = 0;
    return arg0;
}
#pragma pop
#pragma cplusplus off
void fn_800E99CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

extern u8 lbl_8028E4A4[16];
void fn_800E99E4(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 lbl_8028E4A4[16];
    Process_CreateChild(lbl_8028E4A4, arg0);
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
    void Card_AsyncDone(void);
    extern struct CardWork gCardWork;

    gCardWork.busy = 1;
    gCardWork.result = fn_8021BA54(gCardWork.chan, Card_AsyncDone);
    if (gCardWork.result < 0) {
        Process_Goto(arg0, 0x63);
        gCardWork.busy = 0;
    }
}

void fn_800E9A94(void) {
    s32 fn_8021CDC4(s32, void *, void *);
    void fn_800EBF58(void);
    extern u16 gCardWork[];
    extern u8 gCardStrings[];

    fn_800EBF58();
    *(s32 *)((u8 *)gCardWork + 0xA004) = fn_8021CDC4(
        *(s32 *)((u8 *)gCardWork + 0xA000),
        gCardStrings + 0x70,
        (u8 *)gCardWork + 0x10000
    );
}

extern u8 lbl_8028E484[16];
void fn_800E9AE4(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 lbl_8028E484[16];
    Process_CreateChild(lbl_8028E484, arg0);
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
    extern struct CardWork gCardWork;
    extern u8 gCardStrings[];
    u8 *hi;
    void *temp;

    hi = (u8 *)&gCardWork + 0x10000;
    temp = hi - 0x5FE4;
    gCardWork.result = fn_8021BF10(*(s32 *)(hi - 0x6000), gCardStrings + 0x70, temp);
    if (gCardWork.result != -4) {
        fn_8021C02C(temp);
    }
}
#pragma global_optimizer reset
void Card_RequestWrite(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
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
    extern struct CardWork gCardWork;
    extern u8 lbl_8028E420[];

    gCardWork.unkA034 = arg0;
    gCardWork.unkA00C = arg1;
    gCardWork.unkA010 = arg2;
    gCardWork.unkA014 = arg3;
    Process_CreateChild(lbl_8028E420, arg4);
}

void fn_800E9BCC(s32 proc) {
struct CardWork { u8 workArea[0xA000]; s32 chan; volatile s32 result; s32 sectorSize; s32 unkA00C; s32 unkA010; s32 unkA014; u8 unkA018; u8 unkA019; u8 busy; u8 padA01B; u8 fileInfo[0x14]; u32 tick; s32 unkA034; };
s32 OSGetTick(void); void fn_8021C02C(void*);void fn_8021B20C(s32);void DebugPrint(void*,...);
extern struct CardWork gCardWork;extern u8 gCardStrings[];
u8 skip;u8 *msg;u32 tickRate,conv;
if(gCardWork.result<0){Process_Goto(proc,0x63);gCardWork.busy=0;skip=1;}else skip=0;
if(skip==0){
if(gCardWork.unkA019!=0){fn_8021C02C(gCardWork.fileInfo);gCardWork.unkA019=0;}
if(gCardWork.unkA018!=0&&gCardWork.unkA018!=0){fn_8021B20C(gCardWork.chan);gCardWork.unkA018=0;}
gCardWork.tick=OSGetTick()-gCardWork.tick;msg=gCardStrings+0x7d;tickRate=*(u32*)0x800000f8;conv=(tickRate>>2)/1000U;
DebugPrint(msg,gCardWork.tick/conv);
}}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma opt_strength_reduction off
#pragma opt_propagation off
void fn_800E9CE4(s32 arg0) {
    void Process_Goto(s32, s32);
    void fn_8006EEFC(void *, void *);
    s32 *fn_8006EDD8(s32, s32);
    void FileCache_ReleaseSlot(void *);
    void fn_800062CC(s32, s32, u32);
    void fn_80006298(s32, s32, s32);
    u32 *fn_800C4638(s32, void *, s32);
    void fn_800C4588(u32 *);
    s32 fn_8021CAB4(void *, s32, s32, s32, void *);
    extern void Card_AsyncDone;
    extern u8 gCardWork[];
    extern u8 gCardStrings[];

    u32 crc;
    u8 *base;
    s32 sp8;
    u32 flag;
    u32 ok;
    u32 i;
    u32 t;
    s32 off;
    s32 n;
    s32 buf;
    s32 self;
    u32 *table;

    self = arg0;
    base = gCardWork + 0x10000;
    if (*(s32 *)(base - 0x5FFC) < 0) {
        Process_Goto(self, 0x63);
        {
            u8 *b = gCardWork + 0x10000;
            b[-0x5FE6] = 0;
        }
        flag = 1;
    } else {
        flag = 0;
    }
    if ((u8)flag == 0) {
        buf = *(s32 *)(gCardWork + 0xA034) - *(s32 *)(gCardWork + 0xA010);
        if (*(u32 *)(buf + 0x1C00) != *(u32 *)(buf + 0x1C04)) {
            ok = 0;
        } else {
            table = fn_800C4638(0x400, gCardStrings + 0x97, 0);
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
        if ((u8)ok == 0) {
            fn_8006EEFC(&sp8, gCardStrings + 0x98);
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
            FileCache_ReleaseSlot(&sp8);
            table = fn_800C4638(0x400, gCardStrings + 0x97, 0);
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
                u8 *b = gCardWork + 0x10000;
                b[-0x5FE6] = 1;
                *(s32 *)(base - 0x5FFC) = fn_8021CAB4(b - 0x5FE4, buf, 0x2000, 0, &Card_AsyncDone);
                if (*(s32 *)(base - 0x5FFC) < 0) {
                    Process_Goto(self, 0x63);
                    b[-0x5FE6] = 0;
                }
            }
        }
    }
}
#pragma pop
void fn_800EA27C(s32 arg0) {
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
        u8 unkA01B;
        u8 fileInfo[0x14];
    };
    extern struct CardWork gCardWork;
    extern void Card_AsyncDone;
    s32 fn_8021D004(s32, s32, void *);
    s32 fn_8021D118(s32, s32, void *, void *);
    CardFileStatus status;
    u8 *base;
    u8 *resultBase;
    s32 file;
    s32 proc;
    u8 *busyBase;
    u8 skip;

    proc = arg0;
    resultBase = (u8 *)&gCardWork + 0x10000;
    if (*(volatile s32 *)(resultBase - 0x5ffc) < 0) {
        Process_Goto(proc, 0x63);
        gCardWork.busy = 0;
        skip = 1;
    } else {
        skip = 0;
    }
    if (skip == 0) {
        base = (u8 *)&gCardWork + 0x10000;
        if (*(s32 *)(base - 0x5fec) >= 0) {
            file = *(s32 *)(base - 0x5fe0);
            fn_8021D004(*(s32 *)(base - 0x6000), file, &status);
            status.commentAddress = 0x2000;
            status.iconAddress = 0;
            status.iconFormat = (status.iconFormat & ~3) | 1;
            status.iconSpeed = (status.iconSpeed & ~3) | 3;
            status.bannerFormat = (status.bannerFormat & ~3) | 1;
            status.iconFormat = (status.iconFormat & ~12) | 4;
            status.iconSpeed = (status.iconSpeed & ~12) | 8;
            status.iconFormat = (status.iconFormat & ~48) | 16;
            status.iconSpeed = (status.iconSpeed & ~48) | 48;
            busyBase = (u8 *)&gCardWork + 0x10000;
            status.bannerFormat = (status.bannerFormat & ~4) | 4;
            status.iconFormat = status.iconFormat & ~192;
            status.iconSpeed = status.iconSpeed & ~192;
            status.commentAddress = *(s32 *)(base - 0x5fec);
            busyBase[-0x5fe6] = 1;
            *(volatile s32 *)(resultBase - 0x5ffc) =
                fn_8021D118(*(s32 *)(base - 0x6000), file, &status, &Card_AsyncDone);
            if (*(volatile s32 *)(resultBase - 0x5ffc) < 0) {
                Process_Goto(proc, 0x63);
                busyBase[-0x5fe6] = 0;
            }
        }
    }
}
#pragma global_optimizer on
void fn_800EA418(s32 proc) {
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
        u8 fileInfo[0x14];
        u8 padA030[4];
        s32 unkA034;
    };
    void Process_Goto(s32, s32);
    void Process_Unlink(s32);
    void Card_AsyncDone(void);
    s32 fn_8021BF10(s32, void *, void *);
    s32 fn_8021CAB4(void *, s32, s32, s32, void *);
    extern struct CardWork gCardWork;
    extern char gCardStrings[];
    u8 skip;
    u8 *hi;
    void *fileInfo;

    if (gCardWork.result < 0) {
        Process_Goto(proc, 0x63);
        gCardWork.busy = 0;
        skip = 1;
    } else {
        skip = 0;
    }
    if (skip == 0) {
        hi = (u8 *)&gCardWork + 0x10000;
        fileInfo = hi - 0x5FE4;
        gCardWork.result = fn_8021BF10(*(s32 *)(hi - 0x6000), gCardStrings + 0x70, fileInfo);
        switch (gCardWork.result) {
        case -4:
            Process_Unlink(proc);
            break;
        default:
            gCardWork.unkA019 = 1;
            gCardWork.busy = 1;
            gCardWork.result = fn_8021CAB4(fileInfo, gCardWork.unkA034, gCardWork.unkA00C,
                                          gCardWork.unkA010, Card_AsyncDone);
            if (gCardWork.result < 0) {
                Process_Goto(proc, 0x63);
                gCardWork.busy = 0;
            }
            break;
        }
    }
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
    extern struct CardWork gCardWork;
    extern u8 lbl_8028E3EC[];

    gCardWork.unkA034 = arg0;
    Process_CreateChild(lbl_8028E3EC, arg1);
}

void fn_800EA57C(s32 proc) {
struct CardWork { u8 workArea[0xA000]; s32 chan; volatile s32 result; s32 sectorSize; s32 unkA00C; s32 unkA010; s32 unkA014; u8 unkA018; u8 unkA019; u8 busy; u8 padA01B; u8 fileInfo[0x14]; u32 tick; s32 unkA034; };
s32 OSGetTick(void); void fn_8021C02C(void*);void fn_8021B20C(s32);void DebugPrint(void*,...);
extern struct CardWork gCardWork;extern u8 gCardStrings[];
u8 skip;u8 *msg;u32 tickRate,conv;
if(gCardWork.result<0){Process_Goto(proc,0x63);gCardWork.busy=0;skip=1;}else skip=0;
if(skip==0){
if(gCardWork.unkA019!=0){fn_8021C02C(gCardWork.fileInfo);gCardWork.unkA019=0;}
if(gCardWork.unkA018!=0&&gCardWork.unkA018!=0){fn_8021B20C(gCardWork.chan);gCardWork.unkA018=0;}
gCardWork.tick=OSGetTick()-gCardWork.tick;msg=gCardStrings+0xac;tickRate=*(u32*)0x800000f8;conv=(tickRate>>2)/1000U;
DebugPrint(msg,gCardWork.tick/conv);
}}

void fn_800EA694(s32 proc) {
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
        u8 fileInfo[0x14];
        u8 padA030[4];
        s32 unkA034;
    };
    void Process_Goto(s32, s32);
    void Process_Unlink(s32);
    void Card_AsyncDone(void);
    s32 fn_8021BF10(s32, void *, void *);
    s32 fn_8021C708(void *, s32, s32, s32, void *);
    void *memset(void *, s32, s32);
    extern struct CardWork gCardWork;
    extern char gCardStrings[];
    u8 skip;
    u8 *hi;
    void *fileInfo;

    if (gCardWork.result < 0) {
        Process_Goto(proc, 0x63);
        gCardWork.busy = 0;
        skip = 1;
    } else {
        skip = 0;
    }
    if (skip == 0) {
        hi = (u8 *)&gCardWork + 0x10000;
        fileInfo = hi - 0x5FE4;
        gCardWork.result = fn_8021BF10(*(s32 *)(hi - 0x6000), gCardStrings + 0x70, fileInfo);
        switch (gCardWork.result) {
        case -4:
            Process_Unlink(proc);
            break;
        default:
            memset((void *)gCardWork.unkA034, 0x55555555, SAVE_CARD_FILE_SIZE);
            gCardWork.unkA019 = 1;
            gCardWork.busy = 1;
            gCardWork.result = fn_8021C708(fileInfo, gCardWork.unkA034, SAVE_CARD_FILE_SIZE,
                                          0, Card_AsyncDone);
            if (gCardWork.result < 0) {
                Process_Goto(proc, 0x63);
                gCardWork.busy = 0;
            }
            break;
        }
    }
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
    extern struct CardWork gCardWork;
    extern u8 lbl_8028E358[];

    gCardWork.unkA034 = arg0;
    Process_CreateChild(lbl_8028E358, arg1);
}

void fn_800EA808(void) {
    struct CardWork { u8 workArea[0xA000]; s32 chan; volatile s32 result; s32 sectorSize; s32 unkA00C; s32 unkA010; s32 unkA014; u8 unkA018; u8 unkA019; u8 busy; u8 padA01B; u8 fileInfo[0x14]; u32 tick; s32 unkA034; };
    s32 OSGetTick(void);
    void fn_800C4588(u32 *);
    void fn_8021C02C(void *);
    void fn_8021B20C(s32);
    void DebugPrint(void *, ...);
    extern struct CardWork gCardWork;
    extern u8 gCardStrings[];
    u8 *msg;
    u32 tickRate;
    u32 conv;
    fn_800C4588((u32 *)gCardWork.unkA034);
    gCardWork.unkA034 = 0;
    if (gCardWork.unkA019 != 0) { fn_8021C02C(gCardWork.fileInfo); gCardWork.unkA019 = 0; }
    if (gCardWork.unkA018 != 0 && gCardWork.unkA018 != 0) { fn_8021B20C(gCardWork.chan); gCardWork.unkA018 = 0; }
    gCardWork.tick = OSGetTick() - gCardWork.tick;
    msg = gCardStrings + 0xC5;
    tickRate = *(u32 *)0x800000F8;
    conv = (tickRate >> 2) / 1000U;
    DebugPrint(msg, gCardWork.tick / conv);
}

#pragma push
#pragma optimization_level 3
#pragma opt_strength_reduction off
#pragma opt_common_subs off
void fn_800EA8F4(s32 arg0) {
    void Process_Goto(s32, s32);
    void fn_8006EEFC(void *, void *);
    s32 *fn_8006EDD8(s32, s32);
    void FileCache_ReleaseSlot(void *);
    void fn_800062CC(s32, s32, u32);
    void fn_80006298(s32, s32, s32);
    u32 *fn_800C4638(s32, void *, s32);
    void fn_800C4588(u32 *);
    s32 fn_8021CAB4(void *, s32, s32, s32, void *);
    extern void Card_AsyncDone;
    extern u8 gCardWork[];
    extern u8 gCardStrings[];

    s32 sp8;
    u32 flag;
    u32 i;
    u32 t;
    u32 crc;
    s32 off;
    s32 n;
    s32 self;
    u32 *table;
    s32 buf;
    u8 *base2;
    u8 *base;
    u8 *work;

    self = arg0;
    base = gCardWork + 0x10000;
    if (*(s32 *)(base - 0x5FFC) < 0) {
        Process_Goto(self, 0x63);
        {
            u8 *b = &gCardWork[0x10000];
            b[-0x5FE6] = 0;
        }
        flag = 1;
    } else {
        flag = 0;
    }
    if ((u8)flag == 0) {
        base2 = (u8 *)((u32)gCardWork + 0x10000U);
        buf = *(s32 *)(base2 - 0x5FCC);
        fn_8006EEFC(&sp8, &gCardStrings[0x98]);

        fn_800062CC(buf, *(s32 *)(fn_8006EDD8(sp8, 0)[0] + 8), 0xC00);
        fn_800062CC(buf + 0xC00, *(s32 *)(fn_8006EDD8(sp8, 0)[1] + 8), 0x200);
        fn_800062CC(buf + 0xE00, *(s32 *)(fn_8006EDD8(sp8, 1)[0] + 8), 0x400);
        fn_800062CC(buf + 0x1200, *(s32 *)(fn_8006EDD8(sp8, 2)[0] + 8), 0x400);
        fn_800062CC(buf + 0x1600, *(s32 *)(fn_8006EDD8(sp8, 3)[0] + 8), 0x400);
        fn_800062CC(buf + 0x1A00, *(s32 *)(fn_8006EDD8(sp8, 1)[1] + 8), 0x200);

        FileCache_ReleaseSlot(&sp8);
        table = fn_800C4638(0x400, &gCardStrings[0x97], 0);
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
        work = gCardWork + 0x10000;
        *(work - 0x5FE6) = 1;
        *(s32 *)(base - 0x5FFC) = fn_8021CAB4((void *)((u32)work - 0x5FE4U), *(s32 *)(base2 - 0x5FCC), 0x2000, 0, &Card_AsyncDone);
        if (*(s32 *)(base - 0x5FFC) < 0) {
            Process_Goto(self, 0x63);
            *(work - 0x5FE6) = 0;
        }
    }
}
#pragma pop
void Card_SetNoCopyAttr(s32 proc) {
    /* OR CARD_ATTR_NO_COPY (0x08) onto the open save file; goto error state on failure. */
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
        u8 unkA01B;
        u8 fileInfo[0x14];
    };
    void Card_AsyncDone(void);
    void Process_Goto(s32, s32);
    s32 Card_GetFileAttr(s32, s32, u8 *);
    s32 Card_SetFileAttr(s32, s32, u8, void *);
    extern struct CardWork gCardWork;
    u8 attr;
    u8 skip;
    s32 fileNo;

    if (gCardWork.result < 0) {
        Process_Goto(proc, 0x63);
        gCardWork.busy = 0;
        skip = 1;
    } else {
        skip = 0;
    }
    if (skip == 0) {
        fileNo = *(s32 *)&gCardWork.fileInfo[4];
        Card_GetFileAttr(gCardWork.chan, fileNo, &attr);
        attr |= 8;
        gCardWork.busy = 1;
        gCardWork.result = Card_SetFileAttr(gCardWork.chan, fileNo, attr, Card_AsyncDone);
        if (gCardWork.result < 0) {
            Process_Goto(proc, 0x63);
            gCardWork.busy = 0;
        }
    }
}

#pragma optimization_level 3
#pragma global_optimizer off
#pragma use_lmw_stmw on
void fn_800EAD68(s32 arg0) {
    extern u8 gCardWork[];
    extern void Card_AsyncDone;
    void Process_Goto(s32, s32);
    s32 fn_8021D004(s32, s32, void *);
    s32 fn_8021D118(s32, s32, void *, void *);
    CardFileStatus status;
    u8 *base;
    u8 *resultBase;
    s32 file;
    s32 proc;
    u8 skip;

    proc = arg0;
    resultBase = gCardWork + 0x10000;
    if (*(volatile s32 *)(resultBase - 0x5ffc) < 0) {
        Process_Goto(proc, 0x63);
        gCardWork[0xa01a] = 0;
        skip = 1;
    } else {
        skip = 0;
    }
    if (skip == 0) {
        base = gCardWork + 0x10000;
        file = *(s32 *)(base - 0x5fe0);
        fn_8021D004(*(s32 *)(base - 0x6000), file, &status);
        status.commentAddress = 0x2000;
        status.iconFormat = (status.iconFormat & ~3) | 1;
        status.iconSpeed = (status.iconSpeed & ~3) | 3;
        status.bannerFormat = (status.bannerFormat & ~3) | 1;
        status.iconFormat = (status.iconFormat & ~12) | 4;
        status.iconSpeed = (status.iconSpeed & ~12) | 8;
        status.iconFormat = (status.iconFormat & ~48) | 16;
        status.iconSpeed = (status.iconSpeed & ~48) | 48;
        status.bannerFormat = (status.bannerFormat & ~4) | 4;
        status.iconFormat = status.iconFormat & ~192;
        status.iconSpeed = status.iconSpeed & ~192;
        status.iconAddress = 0;
        resultBase[-0x5fe6] = 1;
        *(volatile s32 *)(resultBase - 0x5ffc) =
            fn_8021D118(*(s32 *)(base - 0x6000), file, &status, &Card_AsyncDone);
        if (*(volatile s32 *)(resultBase - 0x5ffc) < 0) {
            Process_Goto(proc, 0x63);
            resultBase[-0x5fe6] = 0;
        }
    }
}
#pragma use_lmw_stmw reset
#pragma global_optimizer reset
#pragma optimization_level reset
void fn_800EAEF0(s32 proc) {
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
        u8 fileInfo[0x14];
        u8 padA030[4];
        s32 unkA034;
    };
    void Process_Goto(s32, s32);
    void Card_AsyncDone(void);
    void fn_80006298(s32, s32, s32);
    char *strcpy(char *, char *);
    void fn_801DF7C8(s32);
    void fn_801E3B08(s32);
    s32 fn_8021CAB4(void *, s32, s32, s32, void *);
    extern struct CardWork gCardWork;
    extern char gCardStrings[];
    u8 skip;
    u8 *hi;

    if (gCardWork.result < 0) {
        Process_Goto(proc, 0x63);
        gCardWork.busy = 0;
        skip = 1;
    } else {
        skip = 0;
    }
    if (skip == 0) {
        hi = (u8 *)&gCardWork + 0x10000;
        gCardWork.unkA019 = 1;
        fn_80006298(gCardWork.unkA034, 0, SAVE_CARD_FILE_SIZE);
        strcpy((char *)gCardWork.unkA034, gCardStrings + 0xE0);
        fn_801DF7C8(gCardWork.unkA034 + 0x2000);
        fn_801E3B08(gCardWork.unkA034 + 0x2000);
        gCardWork.busy = 1;
        gCardWork.result = fn_8021CAB4(hi - 0x5FE4, gCardWork.unkA034, SAVE_CARD_FILE_SIZE,
                                      0, Card_AsyncDone);
        if (gCardWork.result < 0) {
            Process_Goto(proc, 0x63);
            gCardWork.busy = 0;
        }
    }
}

void Card_CreateSaveFile(s32 proc) {
    /* Create the save CARD file (gCardStrings+0x70, SAVE_CARD_FILE_SIZE); goto error on failure. */
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
        u8 unkA01B;
        u8 fileInfo[0x14];
    };
    void Card_AsyncDone(void);
    s32 CARDCreateAsync(s32, char *, u32, void *, void *);
    extern struct CardWork gCardWork;
    extern char gCardStrings[];
    u8 skip;

    if (gCardWork.result < 0) {
        Process_Goto(proc, 0x63);
        gCardWork.busy = 0;
        skip = 1;
    } else {
        skip = 0;
    }
    if (skip == 0) {
        gCardWork.busy = 1;
        gCardWork.result = CARDCreateAsync(gCardWork.chan, gCardStrings + 0x70, SAVE_CARD_FILE_SIZE,
                                          gCardWork.fileInfo, Card_AsyncDone);
        if (gCardWork.result < 0) {
            Process_Goto(proc, 0x63);
            gCardWork.busy = 0;
        }
    }
}

void fn_800EB10C(s32 proc) {
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
        u8 unkA01B;
        u8 fileInfo[0x14];
    };
    void Process_Goto(s32, s32);
    void Card_AsyncDone(void);
    s32 fn_8021BF10(s32, void *, void *);
    void fn_8021C02C(void *);
    s32 fn_8021CCB4(s32, void *, void *);
    extern struct CardWork gCardWork;
    extern char gCardStrings[];
    u8 skip;
    void *fileInfo;
    u8 *hi;

    if (gCardWork.result < 0) {
        Process_Goto(proc, 0x63);
        gCardWork.busy = 0;
        skip = 1;
    } else {
        skip = 0;
    }
    if (skip == 0) {
        hi = (u8 *)&gCardWork + 0x10000;
        fileInfo = hi - 0x5FE4;
        if (fn_8021BF10(*(s32 *)(hi - 0x6000), gCardStrings + 0x70, fileInfo) != -4) {
            fn_8021C02C(fileInfo);
            gCardWork.busy = 1;
            gCardWork.result = fn_8021CCB4(*(s32 *)(hi - 0x6000), (void *)((u32)gCardStrings + 0x70), Card_AsyncDone);
        } else {
            gCardWork.result = 0;
            gCardWork.busy = 0;
        }
    }
}

#pragma use_lmw_stmw reset

void fn_800EB210(u32 arg0) {
    void *Process_Create(void *, s32);
    void *Process_CreateChild(void *, u32);
    extern u8 lbl_8028E308[];

    if (arg0 == 0U) {
        Process_Create(lbl_8028E308, 2);
        return;
    }
    Process_CreateChild(lbl_8028E308, arg0);
}

void fn_800EB258(void) {
    s32 OSGetTick(void);
    extern u16 gCardWork[];
    *(u32 *)((u8 *)gCardWork + 0xA030) = OSGetTick();
}

void fn_800EB288(void) {
    extern u8 gCardWork[];
    switch (*(s32 *)(gCardWork + 0xA004)) {
    case 0:
        gCardWork[0xA018] = 1;
        return;
    case -6:
    case -13:
        gCardWork[0xA018] = 1;
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
    void Card_AsyncDone(void);
    extern struct CardWork gCardWork;

    switch (gCardWork.result) {
    case 0:
    case -6:
        gCardWork.busy = 1;
        gCardWork.result = fn_8021A7D4(gCardWork.chan, Card_AsyncDone);
        if (gCardWork.result < 0) {
            Process_Goto(arg0, 0x50);
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
    void Card_AsyncDone(void);
    extern struct CardWork gCardWork;
    u8 ok;

    ok = 0;
    if (gCardWork.result == 0 && gCardWork.busy == 0) {
        ok = 1;
    }
    if (!ok) {
        Process_Goto(arg0, 0x63);
        return;
    }
    if (gCardWork.sectorSize != 0x2000) {
        gCardWork.result = -0x41;
        Process_Goto(arg0, 0x63);
        return;
    }
    gCardWork.busy = 1;
    gCardWork.result = fn_8021AFD0(gCardWork.chan, gCardWork.workArea, fn_800EB7E4, Card_AsyncDone);
}

s32 fn_800EB428(s32 arg0) {
    struct CardWork { u8 workArea[0xA000]; s32 chan; volatile s32 result; s32 sectorSize; s32 unkA00C; s32 unkA010; s32 unkA014; u8 unkA018; u8 unkA019; u8 busy; };
    s32 CARDProbeEx(s32, s32, void *);
    void Process_Goto(s32, s32);
    extern struct CardWork gCardWork;
    u8 flag; u8 ok; s32 ret; s32 result;
    gCardWork.chan = 0;
    gCardWork.unkA018 = 0;
    gCardWork.unkA019 = 0;
    gCardWork.busy = 0;
    gCardWork.result = CARDProbeEx(gCardWork.chan, 0, &gCardWork.sectorSize);
    result = gCardWork.result;
    flag = (result == -1 || gCardWork.busy != 0);
    if (flag != 0) return 1;
    ok = (result == 0 && gCardWork.busy == 0);
    if (ok == 0) { Process_Goto(arg0, 0x63); return 1; }
    ret = (result == -1 || gCardWork.busy != 0);
    return ret;
}

s32 fn_800EB520(char *arg0) {
    extern char gCardStrings[];
    return Str_Cmp(arg0, gCardStrings + 0xE0) != 0;
}

void fn_800EB558(void) {
    extern s32 gUiInputFlags;
    gUiInputFlags &= 0xFFFFFEFF;
}

void fn_800EB568(void) {
    extern s32 gUiInputFlags;
    gUiInputFlags |= 0x100;
}

/* Debug-print the current memory-card result code as a name string. */
void Card_PrintResult(void) {
    void DebugPrint(void *, ...);
    extern u8 gCardWork[];
    extern u8 gCardStrings[];
    void *msg;
    s32 result;

    msg = NULL;
    result = *(s32 *)(gCardWork + 0xA004);

    switch (result) {
    case CARD_RESULT_UNLOCKED:
        msg = gCardStrings + 0xE8;
        break;
    case CARD_RESULT_READY:
        msg = gCardStrings + 0xF1;
        break;
    case CARD_RESULT_BUSY:
        msg = gCardStrings + 0xFE;
        break;
    case CARD_RESULT_WRONGDEVICE:
        msg = gCardStrings + 0x10C;
        break;
    case CARD_RESULT_NOCARD:
        msg = gCardStrings + 0x129;
        break;
    case CARD_RESULT_NOFILE:
        msg = gCardStrings + 0x145;
        break;
    case CARD_RESULT_IOERROR:
        msg = gCardStrings + 0x163;
        break;
    case CARD_RESULT_BROKEN:
        msg = gCardStrings + 0x17A;
        break;
    case CARD_RESULT_EXIST:
        msg = gCardStrings + 0x198;
        break;
    case CARD_RESULT_NOENT:
        msg = gCardStrings + 0x1A9;
        break;
    case CARD_RESULT_INSSPACE:
        msg = gCardStrings + 0x1C4;
        break;
    case CARD_RESULT_NOPERM:
        msg = gCardStrings + 0x1D0;
        break;
    case CARD_RESULT_LIMIT:
        msg = gCardStrings + 0x1DA;
        break;
    case CARD_RESULT_NAMETOOLONG:
        msg = gCardStrings + 0x1E7;
        break;
    case CARD_RESULT_CANCELED:
        msg = gCardStrings + 0x204;
        break;
    case CARD_RESULT_ENCODING:
        msg = gCardStrings + 0x232;
        break;
    case CARD_RESULT_FATAL_ERROR:
        msg = gCardStrings + 0x24E;
        break;
    }

    DebugPrint(gCardStrings + 0x26B, msg);
}

s32 Card_GetChannel(void) {
    extern u32 gCardWork[];
    return *(u32*)((u8*)gCardWork + 0xA000);
}

void fn_800EB760(void *arg0) {
    extern u8 gCardWork[];

    *(void **)(gCardWork + 0xA004) = arg0;
}

s32 Card_GetResult(void) {
    extern u32 gCardWork[];
    return *(u32*)((u8*)gCardWork + 0xA004);
}

s32 Card_CheckError(void *arg0) {
    extern u16 gCardWork[];
    void Process_Goto(void *, s32);

    if (*(s32 *)((u8 *)gCardWork + 0xA004) < 0) {
        Process_Goto(arg0, 0x63);
        *((u8 *)gCardWork + 0xA01A) = 0;
        return 1;
    }
    return 0;
}

void fn_800EB7E4(void) {
    extern u8 gCardWork[41016];

    gCardWork[0xA018] = 0;
    gCardWork[0xA019] = 0;
    gCardWork[0xA01A] = 0;
    *(s32 *)(gCardWork + 0xA004) = -3;
}

void Card_AsyncDone(void) {
    s32 CARDGetResultCode(s32);
    extern u8 gCardWork[];

    *(u32 *)(gCardWork + 0xA004) = CARDGetResultCode(*(s32 *)(gCardWork + 0xA000));
    gCardWork[0xA01A] = 0;
}

#pragma peephole off
s32 fn_800EB854(void) {
    extern u8 gCardWork[];
    u8 *p = gCardWork + 0x10000;
    s32 result = 0;
    if (*(s32 *)(p - 0x5FFC) == -1 || *(p - 0x5FE6) != 0)
        result = 1;
    return result;
}
#pragma peephole reset
void fn_800EB884(void)
{
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
        u8 fileInfo[0x14];
        u32 tick;
        void *buffer;
    };

    extern struct CardWork gCardWork;
    extern volatile u8 gCardStrings[];

    u8 fn_800EBF58(void);
    s32 fn_8021BF10(s32, void *, void *);
    void *fn_800C4638(s32, void *, s32);
    s32 fn_8021C84C(void *, void *, s32, s32);
    s32 fn_8021C02C(void *);
    s32 fn_8021CDC4(s32, void *);
    s32 fn_8021C3D8(s32, void *, s32, void *);
    s32 fn_8021CBC8(void *, void *, s32, s32);
    void fn_800C4588(void *);

    struct { u8 ok; } flag;
    u8 *fileInfo;
    volatile u8 *s;

    s = gCardStrings;
    *(u8 *)0x80000000 = s[0x26F];
    *(u8 *)0x80000001 = s[0x270];
    *(u8 *)0x80000002 = s[0x271];
    *(u8 *)0x80000003 = s[0x272];
    *(u8 *)0x80000004 = s[0x273];
    *(u8 *)0x80000005 = s[0x274];

    fn_800EBF58();

    fileInfo = (u8 *)&gCardWork + 0x10000 - 0x5FE4;

    gCardWork.result = fn_8021BF10(0, (void *)(u8 *)(gCardStrings + 0x70), fileInfo);

    flag.ok = 0;
    if (gCardWork.result == 0) {
        if (gCardWork.busy == 0) {
            flag.ok = 1;
        }
    }

    if (flag.ok != 0) {
        gCardWork.buffer = fn_800C4638(0x26000, (void *)(u8 *)(gCardStrings + 0x97), 0);

        fn_8021C84C(fileInfo, gCardWork.buffer, 0x26000, 0);
        fn_8021C02C(fileInfo);

        fn_8021CDC4(gCardWork.chan, (void *)(u8 *)&gCardStrings[0x70]);

        s = gCardStrings;
        *(u8 *)0x80000000 = s[0x276];
        *(u8 *)0x80000001 = s[0x277];
        *(u8 *)0x80000002 = s[0x278];
        *(u8 *)0x80000003 = s[0x279];
        *(u8 *)0x80000004 = s[0x27A];
        *(u8 *)0x80000005 = s[0x27B];

        fn_800EBF58();

        gCardWork.result = fn_8021C3D8(
            gCardWork.chan,
            (void *)((u32)gCardStrings + 0x70),
            0x26000,
            fileInfo
        );

        flag.ok = 0;
        if (gCardWork.result == 0) {
            if (gCardWork.busy == 0) {
                flag.ok = 1;
            }
        }

        if (flag.ok != 0) {
            gCardWork.result = fn_8021CBC8(
                fileInfo,
                gCardWork.buffer,
                0x26000,
                0
            );

            flag.ok = 0;
            if (gCardWork.result == 0) {
                if (gCardWork.busy == 0) {
                    flag.ok = 1;
                }
            }

            if (flag.ok != 0) {
                fn_8021C02C(fileInfo);
            }
        }

        fn_800C4588(gCardWork.buffer);
        gCardWork.buffer = 0;
    }
}

#pragma cplusplus on
extern "C" void *fn_8017A7D4(void *, void *);
extern "C" s32 Stream_LoadFile(void *, void *);
extern "C" void DebugPrint(void *, ...);
extern "C" u8 fn_800EBF58(void);
extern "C" void fn_8021CDC4(s32, void *);
extern "C" s32 fn_8021C3D8(s32, void *, s32, void *);
extern "C" s32 fn_8021CBC8(void *, void *, s32, s32);
extern "C" s32 fn_8021C02C(void *);
extern "C" void fn_8021D004(s32, s32, void *);
extern "C" void fn_8021D28C(s32, s32, void *);
extern "C" u8 gCardStrings[];
#pragma cplusplus on
#pragma dont_inline on
extern "C" void fn_800EBACC(void *arg0, void *arg1) {
    struct Stream_800EBACC {
        u8 pad[0x10];
        virtual void *GetBuf();
        virtual void v1();
        virtual ~Stream_800EBACC();
    };
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
        u8 unkA01B;
        u8 fileInfo[0x14];
    };
    extern struct CardWork gCardWork;

    CardFileStatus status;
    Stream_800EBACC *stream;
    void *fileInfo;
    s32 size;
    s32 fileNo;
    u8 ok;

    if (arg0 == NULL) {
        arg0 = gCardStrings + 0x27D;
    }
    if (arg1 == NULL) {
        arg1 = gCardStrings + 0x70;
    }
    stream = (Stream_800EBACC *)Heap_Alloc(0x14);
    if (stream != NULL) {
        stream = (Stream_800EBACC *)fn_8017A7D4(stream, arg0);
    }
    size = Stream_LoadFile(stream, arg0);
    DebugPrint(gCardStrings + 0x288, size);
    if (size > 0) {
        fn_800EBF58();
        fn_8021CDC4(gCardWork.chan, arg1);
        fileInfo = gCardWork.fileInfo;
        gCardWork.result = fn_8021C3D8(gCardWork.chan, arg1, size, fileInfo);
        ok = (gCardWork.result == 0 && gCardWork.busy == 0);
        if (ok != 0) {
            gCardWork.result = fn_8021CBC8(fileInfo, stream->GetBuf(), size, 0);
            ok = (gCardWork.result == 0 && gCardWork.busy == 0);
            if (ok != 0) {
                gCardWork.result = fn_8021C02C(fileInfo);
                ok = (gCardWork.result == 0 && gCardWork.busy == 0);
                if (ok != 0) {
                    fileNo = *(s32 *)&gCardWork.fileInfo[4];
                    fn_8021D004(gCardWork.chan, fileNo, &status);
                    status.commentAddress = 0x2000;
                    status.iconAddress = 0;
                    status.bannerFormat = (status.bannerFormat & ~3) | 1;
                    status.iconFormat = (status.iconFormat & ~3) | 1;
                    status.iconSpeed = (status.iconSpeed & ~3) | 3;
                    status.iconFormat = (status.iconFormat & ~0xC) | 4;
                    status.iconSpeed = (status.iconSpeed & ~0xC) | 8;
                    status.iconFormat = (status.iconFormat & ~0x30) | 0x10;
                    status.iconSpeed = (status.iconSpeed & ~0x30) | 0x30;
                    status.iconFormat = status.iconFormat & ~0xC0;
                    status.iconSpeed = status.iconSpeed & ~0xC0;
                    status.bannerFormat = (status.bannerFormat & ~4) | 4;
                    fn_8021D28C(gCardWork.chan, fileNo, &status);
                }
            }
        }
    }
    delete stream;
}
#pragma dont_inline off
#pragma cplusplus off
void fn_800EBD78(void *arg0, void *arg1) {
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
        u8 fileInfoPad[4];
        s32 fileNo;
    };
    struct MemStream {
        void *start;
        void *cur;
        u32 size;
        u8 owned;
        u8 pad[3];
        void **vtable;
    };
    u8 fn_800EBF58(void);
    s32 fn_8021BF10(s32, void *, void *);
    void fn_8021D004(s32, s32, void *);
    void fn_8021C02C(void *);
    s32 fn_8021C84C(void *, s32, s32, s32);
    void fn_8017A310(void *, void *);
    void *fn_800C4638(s32, void *, s32);
    void DebugPrint(const char *, ...);
    void *Heap_Alloc(s32);
    extern struct CardWork gCardWork;
    extern u8 gCardStrings[];
    extern void *gStreamBaseVtbl[];
    extern void *gMemStreamVtbl[];
    u8 status[0x70];
    void *fileInfo;
    void *path;
    struct MemStream *stream;
    void *name;
    s32 fileSize;
    u8 skip;
    s32 pos;

    path = arg1;
    if ((name = arg0) == 0) {
        name = gCardStrings + 0x70;
    }
    if (path == 0) {
        path = gCardStrings + 0x27D;
    }
    fn_800EBF58();
    fileInfo = (void *)((u8 *)&gCardWork + 0xA01C);
    gCardWork.result = fn_8021BF10(0, name, fileInfo);
    skip = 0;
    if (gCardWork.result == 0 && gCardWork.busy == 0) {
        skip = 1;
    }
    if (skip != 0) {
        fn_8021D004(0, gCardWork.fileNo, status);
        fileSize = *(s32 *)&status[0x20];
        DebugPrint((char *)(gCardStrings + 0x288), fileSize);
        stream = (struct MemStream *)Heap_Alloc(0x14);
        if (stream != 0) {
            stream->vtable = gStreamBaseVtbl;
            stream->cur = 0;
            stream->start = 0;
            stream->size = 0;
            stream->owned = 0;
            stream->vtable = gMemStreamVtbl;
            stream->start = fn_800C4638(fileSize, gCardStrings + 0x97, 0);
            stream->cur = stream->start;
            stream->size = (u32)fileSize;
            stream->owned = 1;
        }
        pos = ((s32 (*)(void *))((void **)stream->vtable)[2])(stream);
        fn_8021C84C(fileInfo, pos, fileSize, 0);
        pos = ((s32 (*)(void *))((void **)stream->vtable)[2])(stream);
        stream->cur = (void *)(pos + fileSize);
        fn_8021C02C(fileInfo);
        fn_8017A310(stream, path);
        if (stream != 0) {
            ((void (*)(void *, s32))((void **)stream->vtable)[4])(stream, 1);
        }
    }
}

u8 fn_800EBF58(void) {
    s32 OSGetTick(void);
    void PADInit(void);
    s32 CARDProbeEx(s32, void *, void *);
    s32 fn_8021AFD0(s32, void *, s32, s32);
    s32 CARDGetResultCode(s32);
    s32 fn_8021A7D4(s32, s32);
    void fn_8021B20C(s32);
    s32 DebugPrint(char *, ...);
    extern u8 gCardWork[];
    extern u8 gCardStrings[];
    s32 spC;
    s32 sp8;
    u32 start;
    u8 result;
    s32 r;
    u32 elapsed;

    start = OSGetTick();
    result = 0;
    PADInit();
    do {
        r = CARDProbeEx(0, &spC, &sp8);
    } while (r == -1);
    if (r >= 0) {
        r = fn_8021AFD0(0, gCardWork, 0, 0);
        if (r >= 0) {
            do {
                r = CARDGetResultCode(0);
            } while (r == -1);
            switch (r) {
            case 0:
            case -6:
                r = fn_8021A7D4(0, 0);
                if (r < 0) {
                    fn_8021B20C(0);
                    goto END;
                }
                do {
                    r = CARDGetResultCode(0);
                } while (r == -1);
                break;
            }
            switch (r) {
            case 0:
                result = 1;
                break;
            case -6:
            case -13:
                fn_8021B20C(0);
                break;
            }
        }
    }
END:
    elapsed = OSGetTick() - start;
    DebugPrint((char *)gCardStrings + 0x293, elapsed / ((*(u32 *)0x800000F8 >> 2) / 1000), result);
    return result;
}

u32 Crc32_Calc(u32 *table, u8 *data, s32 len)
{
    u32 crc;
    s32 i;

    crc = -1;
    for (i = 0; i < len; i++) {
        crc = (crc >> 8) ^ table[(crc ^ data[i]) & 0xFF];
    }
    return crc ^ -1;
}

/* Build a 256-entry reflected CRC-32 table (poly 0xEDB88320). */
void Crc32_InitTable(u32 *table) {
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
        *table++ = c;
    }
}

s32 fn_800EC2B8(void) {
    extern void *lbl_803678C0;
    void fn_800D758C(void *);
    fn_800D758C(lbl_803678C0);
    return 0;
}

#pragma push
#pragma optimization_level 3
#pragma global_optimizer off
#pragma opt_register_coloring off
#pragma opt_propagation off
s32 fn_800EC2E0(void) {
    s32 Rand_Range(s32);
    void BattleAnim_Queue(void *, u8, s8);
    void fn_800340F0(void *);
    void *Heap_Alloc(s32);
    char *String_CStr(String *);
    void String_AssignCStr(String *, char *, s32);
    void String_Assign(String *, String *, s32, s32);
    void String_Destroy(String *, s16);
    void fn_800D588C(void *);
    void fn_800DA31C(void);
    void fn_800DA340(s32);
    String fn_800DAA60(s32);
    String fn_800DAAF0(s32);
    s32 fn_800DC38C(void *, s32);
    s32 fn_800DC44C(void *);
    s32 fn_8011C9E4(void *);
    char *fn_8011C9F4(void *);
    void strcpy(void *, char *);
    s32 strlen(char *);
    extern void *lbl_803678C0;

    String work;
    String t44;
    String t38;
    String t2c;
    String t20;
    String t14;
    String t8;


    u32 packed;
    char *s;
    void *obj;
    s32 cost;
    s32 scale;
    s32 n;
    s32 kind;
    s32 mode;
    s32 prev;
    s32 a;
    s32 b;
    s32 i;

    work.size = 0;
    work.cap = 0;
    work.data = 0;
    work.cap = 0;
    obj = Heap_Alloc(0x85C);
    if (obj) {
        fn_800340F0((u8 *)obj + 0x454);
    }
    t44 = fn_800DAAF0(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x424)));
    String_Assign(&work, &t44, 0, -1);
    String_Destroy(&t44, -1);
    strcpy(obj, String_CStr(&work));
    t38 = fn_800DAA60(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x43C)));
    String_Assign(&work, &t38, 0, -1);
    String_Destroy(&t38, -1);
    strcpy((u8 *)obj + 0x40, String_CStr(&work));
    s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x424));
    String_AssignCStr(&work, s, strlen(s));
    strcpy((u8 *)obj + 0x80, String_CStr(&work));
    s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x43C));
    String_AssignCStr(&work, s, strlen(s));
    strcpy((u8 *)obj + 0x100, String_CStr(&work));
    *(s32 *)((u8 *)obj + 0x164) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x430));
    *(s32 *)((u8 *)obj + 0x140) = 0x4C;
    *(s32 *)((u8 *)obj + 0x144) = Rand_Range(0xA) + 7;
    *(s32 *)((u8 *)obj + 0x148) = 0x64 - Rand_Range(0x1E);
    *(s32 *)((u8 *)obj + 0x14C) = 4;
    *(s32 *)((u8 *)obj + 0x150) = 0x32;
    *(s32 *)((u8 *)obj + 0x154) = 0xA;
    t2c = fn_800DAAF0(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x428)));
    String_Assign(&work, &t2c, 0, -1);
    String_Destroy(&t2c, -1);
    strcpy((u8 *)obj + 0x168, String_CStr(&work));
    t20 = fn_800DAA60(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x440)));
    String_Assign(&work, &t20, 0, -1);
    String_Destroy(&t20, -1);
    strcpy((u8 *)obj + 0x1A8, String_CStr(&work));
    s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x428));
    String_AssignCStr(&work, s, strlen(s));
    strcpy((u8 *)obj + 0x1E8, String_CStr(&work));
    s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x440));
    String_AssignCStr(&work, s, strlen(s));
    strcpy((u8 *)obj + 0x268, String_CStr(&work));
    *(s32 *)((u8 *)obj + 0x2CC) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x434));
    *(s32 *)((u8 *)obj + 0x2A8) = 0x28;
    *(s32 *)((u8 *)obj + 0x2AC) = Rand_Range(0xA) + 3;
    *(s32 *)((u8 *)obj + 0x2B0) = 0x64 - Rand_Range(0x1E);
    *(s32 *)((u8 *)obj + 0x2B4) = 8;
    *(s32 *)((u8 *)obj + 0x2B8) = 0x32;
    *(s32 *)((u8 *)obj + 0x2BC) = 4;
    if (fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x42C)) > 0) {
        t14 = fn_800DAAF0(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x42C)));
        String_Assign(&work, &t14, 0, -1);
        String_Destroy(&t14, -1);
        strcpy((u8 *)obj + 0x2D0, String_CStr(&work));
        t8 = fn_800DAA60(fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x444)));
        String_Assign(&work, &t8, 0, -1);
        String_Destroy(&t8, -1);
        strcpy((u8 *)obj + 0x310, String_CStr(&work));
        s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x42C));
        String_AssignCStr(&work, s, strlen(s));
        strcpy((u8 *)obj + 0x350, String_CStr(&work));
        s = fn_8011C9F4(*(void **)((u8 *)lbl_803678C0 + 0x444));
        String_AssignCStr(&work, s, strlen(s));
        strcpy((u8 *)obj + 0x3D0, String_CStr(&work));
        *(s32 *)((u8 *)obj + 0x434) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x438));
        *(s32 *)((u8 *)obj + 0x410) = 0x28;
        *(s32 *)((u8 *)obj + 0x414) = Rand_Range(0xA) + 3;
        *(s32 *)((u8 *)obj + 0x418) = 0x64 - Rand_Range(0x1E);
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
    BattleAnim_Queue((u8 *)obj + 0x454, 0x54, 0);
    kind = -1;
    for (i = 0; i < n; i++) {
        prev = kind;
        packed = (u32)fn_800DC38C(*(void **)((u8 *)lbl_803678C0 + 0x478), i);
        kind = packed & 0xFF;
        mode = (packed >> 8) & 255;
        a = (packed >> 16) & 255;
        b = packed >> 24;
        switch (kind) {
        case 0: scale = *(s32 *)((u8 *)obj + 0x144); break;
        case 1: scale = *(s32 *)((u8 *)obj + 0x2AC); break;
        case 2: scale = *(s32 *)((u8 *)obj + 0x414); break;
        }
        switch (mode) {
        case 0: cost = scale; break;
        case 1: cost = scale << 2; break;
        case 2: cost = 0; break;
        case 3:
        case 4: cost = 0x50; break;
        case 5: cost = scale; break;
        }
        switch (kind) {
        case 0: BattleAnim_Queue((u8 *)obj + 0x454, 0x20, 0); break;
        case 1: BattleAnim_Queue((u8 *)obj + 0x454, 0x21, 0); break;
        case 2: BattleAnim_Queue((u8 *)obj + 0x454, 0x22, 0); break;
        }
        if (kind == prev) {
            BattleAnim_Queue((u8 *)obj + 0x454, 0x23, 0);
        }
        if (a > 0 && b == 0) {
            BattleAnim_Queue((u8 *)obj + 0x454, 0x56, 1);
            BattleAnim_Queue((u8 *)obj + 0x454, (u8)(a + 0x34), 1);
        } else if (a > 0 && b > 0) {
            BattleAnim_Queue((u8 *)obj + 0x454, 0x56, 2);
            BattleAnim_Queue((u8 *)obj + 0x454, (u8)(a + 0x34), 1);
            BattleAnim_Queue((u8 *)obj + 0x454, (u8)(b + 0x34), 1);
        }
        switch (kind) {
        case 0:
            BattleAnim_Queue((u8 *)obj + 0x454, 0x57, 2);
            BattleAnim_Queue((u8 *)obj + 0x454, 0x15, (s8)-cost);
            break;
        case 1:
            BattleAnim_Queue((u8 *)obj + 0x454, 0x57, 2);
            BattleAnim_Queue((u8 *)obj + 0x454, 9, (s8)-cost);
            break;
        case 2:
            BattleAnim_Queue((u8 *)obj + 0x454, 0x57, 2);
            BattleAnim_Queue((u8 *)obj + 0x454, 0x15, (s8)-cost);
            break;
        }
        switch (mode) {
        case 0: BattleAnim_Queue((u8 *)obj + 0x454, 0x50, 0); break;
        case 1: BattleAnim_Queue((u8 *)obj + 0x454, 0x51, 0); break;
        case 2: BattleAnim_Queue((u8 *)obj + 0x454, 0x52, 0); break;
        case 3:
            BattleAnim_Queue((u8 *)obj + 0x454, 0x50, 0);
            switch (kind) {
            case 0: BattleAnim_Queue((u8 *)obj + 0x454, 0x17, 0); break;
            case 1: BattleAnim_Queue((u8 *)obj + 0x454, 0xB, 0); break;
            case 2: BattleAnim_Queue((u8 *)obj + 0x454, 0x17, 0); break;
            }
            break;
        case 4:
            BattleAnim_Queue((u8 *)obj + 0x454, 0x51, 0);
            switch (kind) {
            case 0: BattleAnim_Queue((u8 *)obj + 0x454, 0x17, 0); break;
            case 1: BattleAnim_Queue((u8 *)obj + 0x454, 0xB, 0); break;
            case 2: BattleAnim_Queue((u8 *)obj + 0x454, 0x17, 0); break;
            }
            break;
        case 5: BattleAnim_Queue((u8 *)obj + 0x454, 0x50, 0); break;
        }
    }
    BattleAnim_Queue((u8 *)obj + 0x454, 0, 0);
    *(s32 *)((u8 *)obj + 0x444) = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x464));
    scale = *(s32 *)((u8 *)obj + 0x444) == 2;
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
    i = fn_8011C9E4(*(void **)((u8 *)lbl_803678C0 + 0x474)) == 2;
    fn_800D588C(obj);
    if ((u8)i != 0) {
        fn_800DA31C();
    } else {
        fn_800DA340(scale);
    }
    String_Destroy(&work, -1);
    return 0;
}
#pragma pop
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

#pragma push
#pragma opt_common_subs off
s32 fn_800ECD20(void) {
 extern void *lbl_803678C0;
 extern char lbl_80272880[];
 s32 fn_800DC44C(void *);
 char *fn_8011C9F4(void *);
 s32 fn_8011C9E4(void *);
 void fn_800DC518(void *,void *,u32);
 void String_Copy(void *,void *);
 void String_AssignCStr(void *,char *,u32);
 void fn_800C992C(void *,char *,u32);
 u32 strlen(const char *);
 void sprintf(char *,const char *,...);
 char buffer[48];
 String str,copy;
 char *s;
 s32 a,b,c,d;
 str.cap=0;str.size=0;str.data=0;str.cap=0;
 a=fn_800DC44C(*(void **)((u8 *)lbl_803678C0+0x478))+1;
 sprintf(buffer,lbl_80272880+8,a);
 String_AssignCStr(&str,buffer,strlen(buffer));
 s=fn_8011C9F4(*(void **)((u8 *)lbl_803678C0+0x454));
 fn_800C992C(&str,s,strlen(s));
 fn_800C992C(&str,lbl_80272880+15,strlen(lbl_80272880+15));
 s=fn_8011C9F4(*(void **)((u8 *)lbl_803678C0+0x458));
 fn_800C992C(&str,s,strlen(s));
 fn_800C992C(&str,lbl_80272880+20,strlen(lbl_80272880+20));
 s=fn_8011C9F4(*(void **)((u8 *)lbl_803678C0+0x45c));
 fn_800C992C(&str,s,strlen(s));
 fn_800C992C(&str,lbl_80272880+20,strlen(lbl_80272880+20));
 s=fn_8011C9F4(*(void **)((u8 *)lbl_803678C0+0x460));
 fn_800C992C(&str,s,strlen(s));
 a=fn_8011C9E4(*(void **)((u8 *)lbl_803678C0+0x454));
 b=fn_8011C9E4(*(void **)((u8 *)lbl_803678C0+0x458));
 c=fn_8011C9E4(*(void **)((u8 *)lbl_803678C0+0x45c));
 d=fn_8011C9E4(*(void **)((u8 *)lbl_803678C0+0x460));
 String_Copy(&copy,&str);
 fn_800DC518(*(void **)((u8 *)lbl_803678C0+0x478),&copy,((u32)a&255)|((u32)b&255)<<8|((u32)c&255)<<16|(u32)d<<24);
 String_Destroy(&copy,-1);String_Destroy(&str,-1);
 return 0;
}
#pragma pop
void *fn_800ECF40(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void String_Init(void *, char *, void *);
    void String_Destroy(void *, s32);
    void String_ConcatCStr(void *, void *, char *);
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
    String_Init(&sp1F8, lbl_80272880 + 0x17, &sp80);
    String_ConcatCStr(&sp1EC, &sp1F8, lbl_80272880 + 0x1E);
    String_Init(&sp1E0, lbl_80272880 + 0x2C, &sp7C);
    fn_800D764C(self, arg1, arg2, arg3, &sp1EC, &sp1E0);
    String_Destroy(&sp1E0, -1);
    String_Destroy(&sp1EC, -1);
    String_Destroy(&sp1F8, -1);
    *(void **)((u8 *)self + 0xC) = lbl_8028E4D8;

    String_Init(&sp1D4, lbl_80272880 + 0x36, &sp78);
    *(void **)((u8 *)self + 0x424) = fn_800D75FC(self, &sp1D4);
    String_Destroy(&sp1D4, -1);
    String_Init(&sp1C8, lbl_80272880 + 0x40, &sp74);
    *(void **)((u8 *)self + 0x428) = fn_800D75FC(self, &sp1C8);
    String_Destroy(&sp1C8, -1);
    String_Init(&sp1BC, lbl_80272880 + 0x4A, &sp70);
    *(void **)((u8 *)self + 0x42C) = fn_800D75FC(self, &sp1BC);
    String_Destroy(&sp1BC, -1);
    String_Init(&sp1B0, lbl_80272880 + 0x54, &sp6C);
    *(void **)((u8 *)self + 0x430) = fn_800D75FC(self, &sp1B0);
    String_Destroy(&sp1B0, -1);
    String_Init(&sp1A4, lbl_80272880 + 0x5C, &sp68);
    *(void **)((u8 *)self + 0x434) = fn_800D75FC(self, &sp1A4);
    String_Destroy(&sp1A4, -1);
    String_Init(&sp198, lbl_80272880 + 0x64, &sp64);
    *(void **)((u8 *)self + 0x438) = fn_800D75FC(self, &sp198);
    String_Destroy(&sp198, -1);
    String_Init(&sp18C, lbl_80272880 + 0x6C, &sp60);
    *(void **)((u8 *)self + 0x43C) = fn_800D75FC(self, &sp18C);
    String_Destroy(&sp18C, -1);
    String_Init(&sp180, lbl_80272880 + 0x77, &sp5C);
    *(void **)((u8 *)self + 0x440) = fn_800D75FC(self, &sp180);
    String_Destroy(&sp180, -1);
    String_Init(&sp174, lbl_80272880 + 0x82, &sp58);
    *(void **)((u8 *)self + 0x444) = fn_800D75FC(self, &sp174);
    String_Destroy(&sp174, -1);
    String_Init(&sp168, lbl_80272880 + 0x8D, &sp54);
    *(void **)((u8 *)self + 0x448) = fn_800D75FC(self, &sp168);
    String_Destroy(&sp168, -1);
    String_Init(&sp15C, lbl_80272880 + 0x98, &sp50);
    *(void **)((u8 *)self + 0x450) = fn_800D75FC(self, &sp15C);
    String_Destroy(&sp15C, -1);
    String_Init(&sp150, lbl_80272880 + 0x9F, &sp4C);
    *(void **)((u8 *)self + 0x44C) = fn_800D75FC(self, &sp150);
    String_Destroy(&sp150, -1);
    String_Init(&sp144, lbl_80272880 + 0xA6, &sp48);
    *(void **)((u8 *)self + 0x454) = fn_800D75FC(self, &sp144);
    String_Destroy(&sp144, -1);
    String_Init(&sp138, lbl_80272880 + 0xB1, &sp44);
    *(void **)((u8 *)self + 0x458) = fn_800D75FC(self, &sp138);
    String_Destroy(&sp138, -1);
    String_Init(&sp12C, lbl_80272880 + 0xBC, &sp40);
    *(void **)((u8 *)self + 0x45C) = fn_800D75FC(self, &sp12C);
    String_Destroy(&sp12C, -1);
    String_Init(&sp120, lbl_80272880 + 0xC5, &sp3C);
    *(void **)((u8 *)self + 0x460) = fn_800D75FC(self, &sp120);
    String_Destroy(&sp120, -1);
    String_Init(&sp114, lbl_80272880 + 0xCF, &sp38);
    *(void **)((u8 *)self + 0x464) = fn_800D75FC(self, &sp114);
    String_Destroy(&sp114, -1);
    String_Init(&sp108, lbl_80272880 + 0xDA, &sp34);
    *(void **)((u8 *)self + 0x468) = fn_800D75FC(self, &sp108);
    String_Destroy(&sp108, -1);
    String_Init(&spFC, lbl_80272880 + 0xE4, &sp30);
    *(void **)((u8 *)self + 0x46C) = fn_800D75FC(self, &spFC);
    String_Destroy(&spFC, -1);
    String_Init(&spF0, lbl_80272880 + 0xF0, &sp2C);
    *(void **)((u8 *)self + 0x470) = fn_800D75FC(self, &spF0);
    String_Destroy(&spF0, -1);
    String_Init(&spE4, lbl_80272880 + 0xF9, &sp28);
    *(void **)((u8 *)self + 0x474) = fn_800D75FC(self, &spE4);
    String_Destroy(&spE4, -1);
    String_Init(&spD8, lbl_80272880 + 0x105, &sp24);
    *(void **)((u8 *)self + 0x478) = fn_800D75FC(self, &spD8);
    String_Destroy(&spD8, -1);
    String_Init(&spCC, lbl_80272880 + 0x10D, &sp20);
    *(void **)((u8 *)self + 0x47C) = fn_800D75FC(self, &spCC);
    String_Destroy(&spCC, -1);
    String_Init(&spC0, lbl_80272880 + 0x114, &sp1C);
    *(void **)((u8 *)self + 0x480) = fn_800D75FC(self, &spC0);
    String_Destroy(&spC0, -1);
    String_Init(&spB4, lbl_80272880 + 0x11E, &sp18);
    *(void **)((u8 *)self + 0x484) = fn_800D75FC(self, &spB4);
    String_Destroy(&spB4, -1);
    String_Init(&spA8, lbl_80272880 + 0x127, &sp14);
    temp = fn_800D75FC(self, &spA8);
    *(void **)((u8 *)self + 0x488) = temp;
    *(void **)((u8 *)self + 0x418) = temp;
    String_Destroy(&spA8, -1);
    String_Init(&sp9C, lbl_80272880 + 0x12D, &sp10);
    temp = fn_800D75FC(self, &sp9C);
    *(void **)((u8 *)self + 0x48C) = temp;
    *(void **)((u8 *)self + 0x41C) = temp;
    String_Destroy(&sp9C, -1);

    *(void **)((u8 *)*(void **)((u8 *)self + 0x47C) + 0xA4) = (void *)fn_800ECD20;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x480) + 0xA4) = (void *)fn_800ECCE4;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x484) + 0xA4) = (void *)fn_800ECCB8;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x488) + 0xA4) = (void *)fn_800EC2E0;
    *(void **)((u8 *)*(void **)((u8 *)self + 0x48C) + 0xA4) = (void *)fn_800EC2B8;

    String_Init(&sp90, lbl_80272880 + 0x137, &spC);
    fn_800DC518(*(void **)((u8 *)self + 0x478), &sp90, 0);
    String_Destroy(&sp90, -1);
    String_Init(&sp84, lbl_80272880 + 0x150, &sp8);
    fn_800DC518(*(void **)((u8 *)self + 0x478), &sp84, 1);
    String_Destroy(&sp84, -1);
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
    extern void *gWin3;
    fn_800D758C(gWin3);
    return 0;
}

s32 fn_800ED77C(void) {
    void Actor_ClearBusy(void *);
    void fn_800D75C4(void *);
    extern void *gWin3;
    extern void *lbl_80367918;
    void *p;

    p = *(void **)((u8 *)gWin3 + 0x440);
    if (p != NULL) {
        Actor_ClearBusy(p);
    }
    fn_800D75C4(lbl_80367918);
    return 0;
}

s32 fn_800ED7B8(void)
{
    extern u16 *gWin3;
    void *inner;
    s32 count;

    count = *(s32 *)((u8 *)gWin3 + 0x450);
    inner = *(void **)((u8 *)gWin3 + 0x424);
    if ((*(s32 *)((u8 *)gWin3 + 0x450) = count - 1) > 0) {
        return 0;
    }
    *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB4) - 1;
    if (*(s32 *)((u8 *)inner + 0xB4) < 0) {
        *(s32 *)((u8 *)inner + 0xB4) = 0;
    }
    return 0;
}

extern u16* gWin3;
s32 fn_800ED800(void) {
    extern u16 *gWin3;
    void *inner;

    inner = *(void **)((u8 *)gWin3 + 0x424);
    *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB4) - 1;
    if (*(s32 *)((u8 *)inner + 0xB4) < 0) {
        *(s32 *)((u8 *)inner + 0xB4) = 0;
    }
    *(s32 *)((u8 *)gWin3 + 0x450) = 8;
    return 0;
}

s32 fn_800ED83C(void) {
    extern u16 *gWin3;
    void *inner;
    s32 counter;

    inner = *(void **)((u8 *)gWin3 + 0x424);
    counter = *(s32 *)((u8 *)gWin3 + 0x450) - 1;
    *(s32 *)((u8 *)gWin3 + 0x450) = counter;
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
    extern u16 *gWin3;
    void *inner;

    inner = *(void **)((u8 *)gWin3 + 0x424);
    *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB4) + 1;
    if (*(s32 *)((u8 *)inner + 0xB4) > *(s32 *)((u8 *)inner + 0xB0)) {
        *(s32 *)((u8 *)inner + 0xB4) = *(s32 *)((u8 *)inner + 0xB0);
    }
    *(s32 *)((u8 *)gWin3 + 0x450) = 8;
    return 0;
}

#pragma dont_inline on
s32 fn_800ED8C0(void) {
    void *p = M2C_FIELD(gWin3, void **, 0x440);
    if (p != NULL) {
        Actor_ClearBusy(p);
    }
    return 0;
}

s32 fn_800ED8F4(void) {
    extern u16 *gWin3;
    void *target;

    target = *(void **)((u8 *)gWin3 + 0x440);

    if (target != NULL) {
        fn_800E56D8(target, 1);
    }

    return 0;
}

s32 fn_800ED92C(void) {
    void *p = M2C_FIELD(gWin3, void **, 0x440);
    if (p != NULL) {
        Actor_ClearBusy(p);
    }
    return 0;
}

void fn_800ED960(void *self) {
    void *fn_800DA5FC(void);
    u8 Actor_IsBusy(void *);
    s32 fn_800E5674(void *);
    s32 fn_800E5690(void *);
    void fn_800E5600(void *, s32, u8);
    void fn_800E51A8(void *, void *);
    void fn_800DB1FC(void *, void *);
    void String_Init(void *, char *, void *);
    void *String_Destroy(void *, s32);
    void sprintf(char *, char *, ...);
    extern char Win3_str[];
    char buf[0x10];
    u8 str1[0xC];
    u8 str2[0xC];
    u8 str3[0xC];
    u8 str4[0xC];
    u32 scratch10;
    u32 scratchC;
    u32 scratch8;

    *(void **)((u8 *)self + 0x440) = fn_800DA5FC();
    if (*(void **)((u8 *)self + 0x440) != 0) {
        if (Actor_IsBusy(*(void **)((u8 *)self + 0x440))) {
            *(s32 *)((u8 *)*(void **)((u8 *)self + 0x424) + 0xB0) =
                fn_800E5674(*(void **)((u8 *)self + 0x440));
            *(s32 *)((u8 *)*(void **)((u8 *)self + 0x424) + 0xB4) =
                fn_800E5690(*(void **)((u8 *)self + 0x440));
            sprintf(buf, Win3_str, *(s32 *)((u8 *)*(void **)((u8 *)self + 0x424) + 0xB4));
            String_Init(str1, buf, &scratch10);
            fn_800DB1FC(*(void **)((u8 *)self + 0x448), str1);
            String_Destroy(str1, -1);
            sprintf(buf, Win3_str, *(s32 *)((u8 *)*(void **)((u8 *)self + 0x424) + 0xB0));
            String_Init(str2, buf, &scratchC);
            fn_800DB1FC(*(void **)((u8 *)self + 0x44C), str2);
            String_Destroy(str2, -1);
        } else {
            fn_800E5600(*(void **)((u8 *)self + 0x440),
                        *(s32 *)((u8 *)*(void **)((u8 *)self + 0x424) + 0xB4), 1);
            sprintf(buf, Win3_str, *(s32 *)((u8 *)*(void **)((u8 *)self + 0x424) + 0xB4));
            String_Init(str3, buf, &scratch8);
            fn_800DB1FC(*(void **)((u8 *)self + 0x448), str3);
            String_Destroy(str3, -1);
        }
        fn_800E51A8(str4, *(void **)((u8 *)self + 0x440));
        fn_800DB1FC(*(void **)((u8 *)self + 0x444), str4);
        String_Destroy(str4, -1);
    }
}

void *Win3_Create(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    /* Construct the ztool win3 animation preview window and wire its controls. */
    void String_Init(void *, char *, void *);
    void String_ConcatCStr(void *, void *, char *);
    void *fn_800D75FC(void *, void *);
    void fn_800D764C(void *, s32, s32, s32, void *, void *);
    void fn_800DB1FC(void *, void *);
    void fn_800E3F54(void *);
    extern char Win3_str[];
    extern u8 Win3_vtable[];
    void fn_800ED754(void);
    void fn_800ED77C(void);
    void fn_800ED7B8(void);
    void fn_800ED800(void);
    void fn_800ED83C(void);
    void fn_800ED884(void);
    void fn_800ED8C0(void);
    void fn_800ED8F4(void);
    void fn_800ED92C(void);
    String pathBase;
    String dbxPath;
    String winName;
    String animeSlider;
    String playBtn;
    String stopBtn;
    String nextBtn;
    String prevBtn;
    String cancelBtn;
    String tagBtn;
    String receiveTag;
    String frameCnt;
    String frameTotal;
    String emptyStr;
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
    void *cancel;
    void *tag;

    String_Init(&pathBase, Win3_str + 3, &sp38);
    String_ConcatCStr(&dbxPath, &pathBase, Win3_str + 0xA);
    String_Init(&winName, Win3_str + 0x13, &sp34);
    fn_800D764C(arg0, arg1, arg2, arg3, &dbxPath, &winName);
    String_Destroy(&winName, -1);
    String_Destroy(&dbxPath, -1);
    String_Destroy(&pathBase, -1);
    *(void **)((u8 *)arg0 + 0xC) = Win3_vtable;
    String_Init(&animeSlider, Win3_str + 0x18, &sp30);
    *(void **)((u8 *)arg0 + 0x424) = fn_800D75FC(arg0, &animeSlider);
    String_Destroy(&animeSlider, -1);
    String_Init(&playBtn, Win3_str + 0x24, &sp2C);
    *(void **)((u8 *)arg0 + 0x428) = fn_800D75FC(arg0, &playBtn);
    String_Destroy(&playBtn, -1);
    String_Init(&stopBtn, Win3_str + 0x2C, &sp28);
    *(void **)((u8 *)arg0 + 0x42C) = fn_800D75FC(arg0, &stopBtn);
    String_Destroy(&stopBtn, -1);
    String_Init(&nextBtn, Win3_str + 0x34, &sp24);
    *(void **)((u8 *)arg0 + 0x430) = fn_800D75FC(arg0, &nextBtn);
    String_Destroy(&nextBtn, -1);
    String_Init(&prevBtn, Win3_str + 0x3C, &sp20);
    *(void **)((u8 *)arg0 + 0x434) = fn_800D75FC(arg0, &prevBtn);
    String_Destroy(&prevBtn, -1);
    String_Init(&cancelBtn, Win3_str + 0x44, &sp1C);
    cancel = fn_800D75FC(arg0, &cancelBtn);
    *(void **)((u8 *)arg0 + 0x43C) = cancel;
    *(void **)((u8 *)arg0 + 0x41C) = cancel;
    String_Destroy(&cancelBtn, -1);
    String_Init(&tagBtn, Win3_str + 0x4E, &sp18);
    *(void **)((u8 *)arg0 + 0x438) = fn_800D75FC(arg0, &tagBtn);
    String_Destroy(&tagBtn, -1);
    String_Init(&receiveTag, Win3_str + 0x55, &sp14);
    *(void **)((u8 *)arg0 + 0x444) = fn_800D75FC(arg0, &receiveTag);
    String_Destroy(&receiveTag, -1);
    String_Init(&frameCnt, Win3_str + 0x60, &sp10);
    *(void **)((u8 *)arg0 + 0x448) = fn_800D75FC(arg0, &frameCnt);
    String_Destroy(&frameCnt, -1);
    String_Init(&frameTotal, Win3_str + 0x69, &spC);
    *(void **)((u8 *)arg0 + 0x44C) = fn_800D75FC(arg0, &frameTotal);
    String_Destroy(&frameTotal, -1);
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x424) + 0xA4) = &fn_800ED92C;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x428) + 0xA4) = &fn_800ED8F4;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x42C) + 0xA4) = &fn_800ED8C0;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x430) + 0xA4) = &fn_800ED884;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x430) + 0xA8) = &fn_800ED83C;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x434) + 0xA4) = &fn_800ED800;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x434) + 0xA8) = &fn_800ED7B8;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x438) + 0xA4) = &fn_800ED77C;
    tag = *(void **)((u8 *)arg0 + 0x43C);
    *(void **)((u8 *)tag + 0xA4) = &fn_800ED754;
    String_Init(&emptyStr, Win3_str + 0x74, &sp8);
    fn_800DB1FC(*(void **)((u8 *)arg0 + 0x444), &emptyStr);
    String_Destroy(&emptyStr, -1);
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
    void Heap_Free(void *);
    extern u8 lbl_8028E4F8[];
    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x40) = lbl_8028E4F8;
        fn_800E45EC(arg0, 0);
        if (arg1 > 0) {
            Heap_Free(arg0);
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

void fn_800EDF58(void *arg0,s32 arg1) {
    void fn_800E3040(s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
    s32 fn_800E7FB4(s32,void *);
    void *String_Init(void *,char *,void *);
    extern char lbl_80272BB0[];
    String name, name2;
    s32 scratch,scratch2;
    s32 owner;
    s32 item;
    s32 offset;
    offset=M2C_FIELD(arg0,s32 *,0xB4)*M2C_FIELD(arg0,s32 *,0x60)/M2C_FIELD(arg0,s32 *,0xB0);
    owner=*(s32 *)arg0;
    String_Init(&name,lbl_80272BB0,&scratch);
    item=fn_800E7FB4(owner,&name);
    String_Destroy(&name,-1);
    fn_800E3040(item,arg1,2,M2C_FIELD(arg0,s32 *,0x48)+offset,M2C_FIELD(arg0,s32 *,0x4C),M2C_FIELD(arg0,s32 *,0x44),16,16,255,255,255,255,0);
    String_Init(&name2,lbl_80272BB0+6,&scratch2);
    item=fn_800E7FB4(owner,&name2);
    String_Destroy(&name2,-1);
    fn_800E3040(item,arg1,0,M2C_FIELD(arg0,s32 *,0x48),M2C_FIELD(arg0,s32 *,0x4C)+6,M2C_FIELD(arg0,s32 *,0x44),M2C_FIELD(arg0,s32 *,0x60),4,255,255,255,255,0);
}

void fn_800EE090(void) {
    M2C_UNK Win_UpdatePos();
    Win_UpdatePos();
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

#pragma push
#pragma optimization_level 4
#pragma opt_propagation off
void fn_800EE124(void *arg0) {
#pragma scheduling on
void *Map_Get(void);void *fn_80046360(void *,void *,void (*)(),u32,s32,u32);u8 *fn_80046EB8(void *,void *);u32 GXGetTexBufferSize(s32,s32,s32,s32,s32);void *fn_800C45B8(u32,void *,s32);void DCFlushRange(void *,u32);s32 GActor_FindNode(void *,void *);
void fn_800EFEE0();void fn_800EFC2C();s32 Map_SetupProjTexTev();void fn_800EF364();void fn_800EEEF0();void fn_800EE72C();
extern const f32 lbl_80369FB8;extern void *lbl_803678D0,*lbl_803678D4[2],*lbl_803678DC,*lbl_803678E0;extern u8 lbl_80272C64[];
u8 *obj;void *res;u32 size; struct {s32 value;} small;

M2C_FIELD(arg0,f32 *,0x34)=lbl_80369FB8;M2C_FIELD(arg0,s32 *,0x30)=0;M2C_FIELD(arg0,f32 *,0x38)=lbl_80369FB8;M2C_FIELD(arg0,void **,0x3C)=0;

lbl_803678D0=0;lbl_803678D4[0]=0;lbl_803678D4[1]=0;lbl_803678DC=0;lbl_803678E0=0;
obj=Map_Get();
switch(obj[0x68]){
case 0:
fn_80046360(obj,lbl_80272C64+0x29,fn_800EFEE0,0,0,0x4000);
fn_80046360(obj,lbl_80272C64+0x32,fn_800EFEE0,0,0,0x4000);
if(M2C_FIELD(obj,u32 *,0x64)&4)fn_80046360(obj,0,fn_800EFC2C,0x110,0,0x8000);
if(M2C_FIELD(obj,u32 *,0x64)&0x10)fn_80046360(obj,0,(void (*)())Map_SetupProjTexTev,0x2000,0,0x8000);
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
size=GXGetTexBufferSize(0x130,0xE0,4,0,0);lbl_803678D0=fn_800C45B8(size,lbl_80272C64+(u32)0x7E,0);DCFlushRange(lbl_803678D0,size);
small.value=GXGetTexBufferSize(4,0x10,3,0,0);lbl_803678D4[0]=fn_800C45B8(small.value,lbl_80272C64+0x7E,0);lbl_803678D4[1]=fn_800C45B8(small.value,lbl_80272C64+(short)0x7E,0);
DCFlushRange(lbl_803678D4[0],small.value);DCFlushRange(lbl_803678D4[1],small.value);
lbl_803678DC=lbl_803678D4[0];lbl_803678E0=lbl_803678D4[1];
if(GActor_FindNode(M2C_FIELD(arg0,void **,0x3C),lbl_80272C64+0x7F)<0)fn_800056A0(0);
}
break;
}
}
#pragma pop
s32 fn_800EE490(void) {
    s32 Process_Create(void *, s32);
    void fn_800EE124(void);
    extern u8 lbl_8028E558[];
    s32 result;

    result = Process_Create(lbl_8028E558, 4);
    fn_800EE124();
    return result;
}

#pragma fp_contract off
void fn_800EE4D0(void *arg0) {
    extern void *lbl_803678DC;
    extern void *lbl_803678E0;
    extern const f64 lbl_80369FB0;
    extern const f32 lbl_80369F90;
    extern const f64 lbl_80369F98;
    extern const f32 lbl_80369FA0;
    extern const f32 lbl_80369FA4;
    extern const f32 lbl_80369FA8;
    extern const f32 lbl_80369FAC;
    void fn_800F047C(void);
    f64 sin(f64);
    void DCFlushRange(void *, u32);
    void fn_80067708(s32, s32, void (*)(void), s32);
    void *bufA;
    void *self;
    s32 i;
    u8 *bufB;
    f32 time;
    f64 conv;
    f64 twoPi;
    f32 step;
    f32 amp;
    f32 bias;
    f32 phase;
    f32 s;
    s32 idx;
    s32 base;

    bufA = lbl_803678DC;
    self = arg0;
    if (bufA != 0) {
        i = 0;
        conv = lbl_80369FB0;
        time = (f32)*(s32 *)((u8 *)self + 0x30) * lbl_80369F90;
        bufB = (u8 *)lbl_803678E0;
        twoPi = lbl_80369F98;
        step = lbl_80369FA0;
        amp = lbl_80369FA4;
        bias = lbl_80369FA8;
        do {
            phase = (f32)i * step + time;
            s = (f32)sin((f64)(f32)(twoPi * (f64)phase));
            s = bias + amp * (f32)s;
            base = ((i & 3) << 2) + ((i >> 2) << 4);
            i++;
            idx = base;
            bufB[idx * 2] = (u8)(s32)s;
            bufB[idx * 2 + 1] = 0x80;
            idx = base + 1;
            bufB[idx * 2] = (u8)(s32)s;
            bufB[idx * 2 + 1] = 0x80;
            idx = base + 2;
            bufB[idx * 2] = (u8)(s32)s;
            bufB[idx * 2 + 1] = 0x80;
            idx = base + 3;
            bufB[idx * 2] = (u8)(s32)s;
            bufB[idx * 2 + 1] = 0x80;
        } while (i < 16);
        DCFlushRange(bufB, 0x80);
        lbl_803678E0 = bufA;
        lbl_803678DC = bufB;
        if (*(u32 *)((u8 *)self + 0x3C) != 0) {
            fn_80067708(3, 1, fn_800F047C, 0);
        }
    }
    *(s32 *)((u8 *)self + 0x30) = *(s32 *)((u8 *)self + 0x30) + 1;
    *(f32 *)((u8 *)self + 0x34) = *(f32 *)((u8 *)self + 0x34) + lbl_80369FAC;
}
#pragma fp_contract on
void fn_800EE6BC(void) {
    extern u32 lbl_803678D0;
    extern void *lbl_803678D4[2];
    void fn_800C4588(void *);

    if (lbl_803678D0 != 0U) {
        fn_800C4588((void *)lbl_803678D0);
        lbl_803678D0 = 0U;
    }
    if (lbl_803678D4[0] != NULL) {
        fn_800C4588(lbl_803678D4[0]);
        lbl_803678D4[0] = NULL;
    }
    {
        void **q = lbl_803678D4 + 1;
        void *p = *q;
        if (p != NULL) {
            fn_800C4588(p);
            *q = NULL;
        }
    }
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma global_optimizer off
s32 fn_800EE72C(void *arg0, s32 arg1) {
    void *Map_Get(void);
    f32 Math_Lerp(f32, f32, f32, f32);
    void *fn_80060664(void);
    void *Camera_GetViewMtx(void);
    void *Camera_Get(void);
    void GMaterial_SetCullMode(void *, void *);
    void fn_800690D4(void *, void *, void *);
    void fn_80069354(void *, void *, void *, void *, s32);
    void GMaterial_SetupColor(void *, void *, void *, void *);
    s32 fn_80069CFC(void);
    s32 GMaterial_AllocMtx(void);
    s32 GMaterial_AllocTexCoord(void);
    s32 GMaterial_AllocTexMap(void);
    s32 fn_80069E7C(void);
    s32 GMaterial_AllocTevStage(void);
    void *GMaterial_GetNode(void);
    void *GMaterial_GetCurrent(void *);
    void fn_8006A384(void *);
    void PSMTXCopy(void *, void *);
    void PSMTXConcat(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void fn_80202870(void *, f32, f32, f32, f32, f32, f32);
    void C_MTXLightOrtho(void *, f32, f32, f32, f32, f32, f32, f32, f32);
    void fn_802029C4(void *, void *, void *);
    void fn_802031A8(void *, void *, void *);
    void fn_802031E8(void *, void *);
    f32 Vec_Length(void *);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void GXInitTexObjLOD(void *, s32, s32, s32, s32, s32, f32, f32, f32);
    void fn_80222C50(void *, s32);
    void fn_80223500(s32, void *, s32);
    void fn_80223678(s32, s32, s32);
    void fn_802237BC(s32, s32, s32);
    void fn_80223914(s32, s32, s32, s32, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void fn_80223C78(s32, void *);
    void fn_80223CDC(s32, s32);
    void fn_80223D38(s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    extern u8 lbl_80272C00[];
    extern void *lbl_803678D0;
    extern void *lbl_803678DC;
    extern const f32 lbl_80369FA4;
    extern const f32 lbl_80369FA8;
    extern const f32 lbl_80369FB8;
    extern const f32 lbl_80369FBC;
    extern const f32 lbl_80369FC0;
    extern const f32 lbl_80369FC4;
    extern const f32 lbl_80369FC8;
    extern const f32 lbl_80369FCC;
    extern const f32 lbl_80369FD0;
    extern u32 lbl_8036C4D4;

    f32 sp25C[12];
    f32 sp22C[12];
    f32 sp1EC[16];
    f32 sp1BC[12];
    f32 sp18C[12];
    f32 sp15C[12];
    f32 sp12C[12];
    f32 spFC[12];
    f32 spCC[12];
    u8 spAC[0x20];
    f32 sp94[6];
    MapProjectionVec sp88;
    MapProjectionVec sp70b;
    MapProjectionVec sp70a;
    MapProjectionVec sp64;
    MapProjectionVec sp58;
    MapProjectionVec sp4C;
    MapProjectionVec sp34b;
    MapProjectionVec sp34a;
    MapProjectionVec sp28;
    MapProjectionVec sp1C;
    MapProjectionVec sp10;
    u32 spC;
    u32 sp8;
    u8 *tbl;
    void *r24;
    void *r25v;
    void *r26;
    void *r27;
    s32 arg1s;
    void *self;
    void *cam;
    f32 scaleY;
    void *unk2C;
    s32 t29, t28, t27, t26, t25;
    s32 t26b, t27b, t28b, t29b, t30;
    void *mtx;
    void *mtx2;
    s32 alpha;
    f32 tmpf;
    f32 zero, one;

    tbl = lbl_80272C00;
    self = arg0;
    arg1s = arg1;
    r24 = GMaterial_GetCurrent(self);
    r25v = fn_80060664();
    r26 = GMaterial_GetNode();
    r27 = *(void **)((u8 *)self + 0x14);
    fn_8006A384(sp22C);
    GMaterial_SetCullMode(r24, r26);
    fn_800690D4(r24, r26, self);
    GMaterial_SetupColor(r24, r25v, r26, self);
    fn_80069354(r24, r25v, r26, r27, arg1s);
    cam = Camera_Get();
    sp88 = *(MapProjectionVec *)(tbl + 0x58);
    fn_802031A8((u8 *)cam + 0xE0, (u8 *)cam + 0xD4, &sp88);
    if (Vec_Length(&sp88) > lbl_80369FB8) {
        fn_802031E8(&sp88, &sp88);
        if (sp88.y < lbl_80369FB8) {
            sp88.y *= lbl_80369FBC;
        }
    }
    scaleY = sp88.y;
    cam = Map_Get();
    if (cam == 0) {
        return 1;
    }
    fn_80222644(spAC, lbl_803678DC, 4, 0x10, 3, 1, 1, 0);
    GXInitTexObjLOD(spAC, 1, 1, 0, 0, 0, lbl_80369FB8, lbl_80369FB8, lbl_80369FB8);
    t26 = fn_80069E7C();
    t28 = GMaterial_AllocTexCoord();
    t25 = GMaterial_AllocMtx();
    t29 = GMaterial_AllocTexMap();
    t27 = fn_80069CFC();
    one = lbl_80369FC0;
    zero = lbl_80369FB8;
    sp94[1] = zero;
    sp94[0] = one;
    sp94[2] = zero;
    sp94[3] = zero;
    sp94[4] = one;
    sp94[5] = zero;
    fn_80223500(1, sp94, 1);
    *(s32 *)&sp70a.x = *(s32 *)(tbl + 0x1C);
    *(s32 *)&sp70a.z = *(s32 *)(tbl + 0x24);
    *(s32 *)&sp70b.x = *(s32 *)(tbl + 0x28);
    *(s32 *)&sp70b.z = *(s32 *)(tbl + 0x30);
    sp70a.x = lbl_80369FB8;
    sp70a.z = lbl_80369FB8;
    sp70b.x = lbl_80369FB8;
    sp70b.z = lbl_80369FB8;
    *(s32 *)&sp70a.y = *(s32 *)(tbl + 0x20);
    sp4C = sp70a;
    *(s32 *)&sp70b.y = *(s32 *)(tbl + 0x2C);
    sp58 = sp70b;
    *(s32 *)&sp64.x = *(s32 *)(tbl + 0x34);
    *(s32 *)&sp64.y = *(s32 *)(tbl + 0x38);
    *(s32 *)&sp64.z = *(s32 *)(tbl + 0x3C);
    mtx = Map_Get();
    fn_802029C4((u8 *)mtx + 0x70, &sp4C, &sp4C);
    fn_802029C4((u8 *)mtx + 0x70, &sp58, &sp58);
    fn_802029C4((u8 *)mtx + 0x70, &sp64, &sp64);
    fn_802026E4(sp12C, &sp4C, &sp64, &sp58);
    C_MTXLightOrtho(sp15C, lbl_80369FBC, lbl_80369FC4, lbl_80369FBC, lbl_80369FC4, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    PSMTXConcat(sp12C, sp22C, sp12C);
    PSMTXConcat(sp15C, sp12C, sp25C);
    fn_80224E50(sp25C, t25, 0);
    fn_802201A8(t28, 0, 0, t25, 0, 0x7D);
    fn_80222C50(spAC, t29);
    fn_802237BC(t27, t28, t29);
    fn_80223678(t27, 0, 0);
    fn_80223914(t26, t27, 1, 0, 1);
    unk2C = *(void **)((u8 *)cam + 0x2C);
    if (unk2C != 0 && *(f32 *)((u8 *)unk2C + 0x38) != lbl_80369FB8) {
        fn_80222644(spAC, lbl_803678D0, 0x130, 0xE0, 4, 0, 0, 0);
        GXInitTexObjLOD(spAC, 1, 1, 0, 0, 0, lbl_80369FB8, lbl_80369FB8, lbl_80369FB8);
        t26 = GMaterial_AllocTexCoord();
        t25 = GMaterial_AllocTevStage();
        t28 = GMaterial_AllocTexMap();
        t27 = GMaterial_AllocMtx();
        fn_80202870(sp1EC, lbl_80369FCC, lbl_80369FD0, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
        PSMTXCopy(Camera_GetViewMtx(), sp1BC);
        PSMTXConcat(sp1BC, sp22C, sp18C);
        PSMTXConcat(sp1EC, sp18C, sp18C);
        fn_80224E50(sp18C, t27, 0);
        fn_802201A8(t26, 0, 0, t27, 0, 0x7D);
        fn_80222C50(spAC, t28);
        GXSetTevOrder(t25, t26, t28, 4);
        tmpf = Math_Lerp(lbl_80369FA4, lbl_80369FA8, lbl_80369FC4, scaleY);
        alpha = (s32)tmpf;
        alpha = (s32)(alpha * *(f32 *)((u8 *)unk2C + 0x38));
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
        GXSetTevColorIn(t25, 0, 8, 0xE, 0xF);
        GXSetTevColorOp(t25, 0, 0, 0, 1, 0);
        GXSetTevAlphaIn(t25, 7, 7, 7, 0);
        GXSetTevAlphaOp(t25, 0, 0, 0, 1, 0);
    }
    fn_80222644(spAC, lbl_803678DC, 4, 0x10, 3, 1, 1, 0);
    GXInitTexObjLOD(spAC, 1, 1, 0, 0, 0, lbl_80369FB8, lbl_80369FB8, lbl_80369FB8);
    t30 = fn_80069E7C();
    t29b = GMaterial_AllocTexCoord();
    t28b = GMaterial_AllocMtx();
    t27b = GMaterial_AllocTexMap();
    t26b = fn_80069CFC();
    one = lbl_80369FC0;
    zero = lbl_80369FB8;
    sp94[1] = zero;
    sp94[0] = one;
    sp94[2] = zero;
    sp94[3] = zero;
    sp94[4] = one;
    sp94[5] = zero;
    fn_80223500(1, sp94, 1);
    *(s32 *)&sp34a.x = *(s32 *)(tbl + 0x1C);
    *(s32 *)&sp34a.z = *(s32 *)(tbl + 0x24);
    *(s32 *)&sp34b.x = *(s32 *)(tbl + 0x28);
    *(s32 *)&sp34b.z = *(s32 *)(tbl + 0x30);
    sp34a.x = lbl_80369FB8;
    sp34a.z = lbl_80369FB8;
    sp34b.x = lbl_80369FB8;
    sp34b.z = lbl_80369FB8;
    *(s32 *)&sp34a.y = *(s32 *)(tbl + 0x20);
    sp10 = sp34a;
    *(s32 *)&sp34b.y = *(s32 *)(tbl + 0x2C);
    sp1C = sp34b;
    *(s32 *)&sp28.x = *(s32 *)(tbl + 0x34);
    *(s32 *)&sp28.y = *(s32 *)(tbl + 0x38);
    *(s32 *)&sp28.z = *(s32 *)(tbl + 0x3C);
    mtx2 = Map_Get();
    fn_802029C4((u8 *)mtx2 + 0x70, &sp10, &sp10);
    fn_802029C4((u8 *)mtx2 + 0x70, &sp1C, &sp1C);
    fn_802029C4((u8 *)mtx2 + 0x70, &sp28, &sp28);
    fn_802026E4(spCC, &sp10, &sp28, &sp1C);
    C_MTXLightOrtho(spFC, lbl_80369FBC, lbl_80369FC4, lbl_80369FBC, lbl_80369FC4, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    PSMTXConcat(spCC, sp22C, spCC);
    PSMTXConcat(spFC, spCC, sp25C);
    fn_80224E50(sp25C, t28b, 0);
    fn_802201A8(t29b, 0, 0, t28b, 0, 0x7D);
    fn_80222C50(spAC, t27b);
    fn_802237BC(t26b, t29b, t27b);
    fn_80223678(t26b, 0, 0);
    fn_80223914(t30, t26b, 1, 0, 1);
    return 1;
}
#pragma pop
#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
s32 fn_800EEEF0(u8 *self, s32 path)
{
    void fn_8006A384(void *);
    s32 GMaterial_AllocTevStage(void);
    s32 GMaterial_AllocTexMap(void);
    s32 GMaterial_AllocTexCoord(void);
    s32 GMaterial_AllocMtx(void);
    void *Map_Get(void);
    void fn_802029C4(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void C_MTXLightOrtho(void *, f32, f32, f32, f32, f32, f32, f32, f32);
    void PSMTXConcat(void *, void *, void *);
    void fn_80224E50(void *, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void Ui_LoadAtlasTex(s32, void *, u16);
    void fn_80222C50(void *, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);

    extern u8 lbl_80272C00[];
    extern const f32 lbl_80369FC8;
    extern const f32 lbl_80369FD4;

    f32 spF4[3][4];
    f32 spC4[3][4];
    f32 sp94[3][4];
    f32 sp64[3][4];
    u8 sp44[0x20];
    f32 sp2C[6];
    f32 sp20[3];
    f32 sp14[3];
    f32 sp8[3];

    u8 *tbl;
    u8 *entry;
    u8 *map;

    s32 tev;
    s32 texCoord;
    s32 texMap;
    u16 atlasId;
    s32 mtxId;

    f32 width;
    f32 height;
    f32 extent;
    f32 scaledExtent;
    f32 mapScale;

    tbl = lbl_80272C00;

    fn_8006A384(spC4);

    tev = GMaterial_AllocTevStage();
    texMap = GMaterial_AllocTexMap();
    texCoord = GMaterial_AllocTexCoord();

    entry = *(u8 **)(self + 0x14) + self[6] * 0x1C;
    atlasId = *(u16 *)(entry - 0x18);

    map = Map_Get();

    mapScale = *(f32 *)(map + 0x6C);

    scaledExtent = lbl_80369FD4 * ((f32)map[0x60] * mapScale);
    extent = scaledExtent * lbl_80369FC8;

    height = lbl_80369FD4 * ((f32)map[0x5F] * mapScale);

    width = lbl_80369FD4 * ((f32)map[0x5E] * mapScale);

    *(s32 *)&sp2C[0] = *(s32 *)(tbl + 0x1C);
    *(s32 *)&sp2C[2] = *(s32 *)(tbl + 0x24);
    *(s32 *)&sp2C[3] = *(s32 *)(tbl + 0x28);
    *(s32 *)&sp2C[5] = *(s32 *)(tbl + 0x30);

    sp2C[0] = width;
    sp2C[2] = height;
    sp2C[3] = width;
    sp2C[5] = height;



    *(s32 *)&sp2C[1] = *(s32 *)(tbl + 0x20);

    *(s32 *)&sp8[0] = *(s32 *)&sp2C[0];
    *(s32 *)&sp8[1] = *(s32 *)(tbl + 0x20);
    *(s32 *)&sp8[2] = *(s32 *)&sp2C[2];

    *(s32 *)&sp2C[4] = *(s32 *)(tbl + 0x2C);

    *(s32 *)&sp14[0] = *(s32 *)&sp2C[3];
    *(s32 *)&sp14[1] = *(s32 *)(tbl + 0x2C);
    *(s32 *)&sp14[2] = *(s32 *)&sp2C[5];

    *(s32 *)&sp20[0] = *(s32 *)(tbl + 0x34);
    *(s32 *)&sp20[1] = *(s32 *)(tbl + 0x38);
    *(s32 *)&sp20[2] = *(s32 *)(tbl + 0x3C);

    map = Map_Get();

    fn_802029C4(map + 0x70, sp8, sp8);
    fn_802029C4(map + 0x70, sp14, sp14);
    fn_802029C4(map + 0x70, sp20, sp20);

    fn_802026E4(sp64, sp8, sp20, sp14);

    C_MTXLightOrtho(
        sp94,
        -extent,
        extent,
        -extent,
        extent,
        lbl_80369FC8,
        lbl_80369FC8,
        lbl_80369FC8,
        lbl_80369FC8
    );

    PSMTXConcat(sp64, spC4, sp64);
    PSMTXConcat(sp94, sp64, spF4);

    mtxId = GMaterial_AllocMtx();

    fn_80224E50(spF4, mtxId, 0);
    fn_802201A8(texCoord, 0, 0, mtxId, 0, 0x7D);

    Ui_LoadAtlasTex(path, sp44, atlasId);
    fn_80222C50(sp44, texMap);

    GXSetTevOrder(tev, texCoord, texMap, 4);
    GXSetTevColorOp(tev, 0, 0, 0, 1, 0);
    GXSetTevColorIn(tev, 0xF, 0, 8, 0xF);
    GXSetTevAlphaOp(tev, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(tev, 7, 7, 7, 0);
    return 1;
}
#pragma pop
s32 Map_SetupProjTexTev(void) {
    void fn_8004D5D4(void *);
    s32 Camera_Get(void);
    s32 GMaterial_AllocMtx(void);
    s32 GMaterial_AllocTexCoord(void);
    s32 GMaterial_AllocTexMap(void);
    s32 GMaterial_AllocTevStage(void);
    void fn_8006A384(void *);
    void PSMTXConcat(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void fn_80202870(void *, f32, f32, f32, f32, f32, f32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void fn_80223D38(s32, s32);
    void fn_80223E5C(s32, s32, s32, s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    extern f32 lbl_80369FC8;
    extern f32 lbl_80369FCC;
    extern f32 lbl_80369FD0;
    extern f32 lbl_80369FE0;
    // Build camera look-at + light-perspective projected tex TEV for map flag 0x10.
    f32 outMtx[3][4];
    f32 lightPersp[3][4];
    f32 lookAt[3][4];
    f32 modelMtx[3][4];
    u8 texObj[0x20];
    s32 tevStage;
    s32 texCoord;
    s32 texMap;
    s32 mtxId;
    s32 cam;

    texCoord = GMaterial_AllocTexCoord();
    tevStage = GMaterial_AllocTevStage();
    texMap = GMaterial_AllocTexMap();
    mtxId = GMaterial_AllocMtx();
    cam = Camera_Get();
    fn_802026E4(lookAt, (void *)(cam + 0xD4), (void *)(cam + 0xEC), (void *)(cam + 0xE0));
    fn_80202870(lightPersp, lbl_80369FCC, lbl_80369FD0, lbl_80369FC8, lbl_80369FE0, lbl_80369FC8, lbl_80369FC8);
    fn_8006A384(modelMtx);
    PSMTXConcat(lookAt, modelMtx, outMtx);
    PSMTXConcat(lightPersp, outMtx, outMtx);
    fn_8004D5D4(texObj);
    fn_80222C50(texObj, texMap);
    fn_80224E50(outMtx, mtxId, 0);
    fn_802201A8(texCoord, 0, 0, mtxId, 0, 0x7D);
    GXSetTevOrder(tevStage, texCoord, texMap, 4);
    GXSetTevColorIn(tevStage, 0xF, 0xF, 0xF, 0);
    GXSetTevColorOp(tevStage, 1, 0, 0, 1, 0);
    fn_80223D38(tevStage, 2);
    GXSetTevAlphaIn(tevStage, 7, 6, 4, 0);
    GXSetTevAlphaOp(tevStage, 1, 0, 0, 1, 0);
    fn_80223E5C(4, 0, 1, 0, 0);
    return 1;
}

#pragma push
#pragma optimization_level 4
#pragma use_lmw_stmw on
#pragma opt_common_subs off
#pragma opt_lifetimes off
s32 fn_800EF364(void *arg0, s32 arg1) {
    void *Map_Get(void);
    f32 Math_Lerp(f32, f32, f32, f32);
    void *fn_80060664(void);
    f32 fn_8006469C(void *, s32, f32);
    s32 *fn_80067478(void);
    void *Camera_Get(void);
    s32 GMaterial_AllocMtx(void);
    s32 GMaterial_AllocTexCoord(void);
    s32 GMaterial_AllocTexMap(void);
    s32 GMaterial_AllocTevStage(void);
    void *GMaterial_GetCurrent(void *);
    void fn_8006A384(void *);
    void Ui_LoadAtlasTex(s32, void *, u16);
    void PSMTXConcat(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void C_MTXLightOrtho(void *, f32, f32, f32, f32, f32, f32, f32, f32);
    void fn_802029C4(void *, void *, void *);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_8022100C(s32);
    void fn_80222164(s32, void *);
    void GXSetChanMatColor(s32, void *);
    void GXSetCullMode(s32);
    void GXSetBlendMode(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222C50(void *, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void fn_80223C78(s32, void *);
    void fn_80223D38(s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
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
    f32 spA8[3];
    f32 sp9C[3];
    f32 sp90[3];
    f32 sp78[6];
    f32 sp6C[3];
    f32 sp60[3];
    f32 sp54[3];
    f32 sp3C[6];
    f32 sp30[3];
    f32 sp24[3];
    f32 sp18[3];
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
    u8 *mtx;
    f32 f2, f3, f4, f5, f1, f0;
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
    col = GMaterial_GetCurrent(self);
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
    GXSetCullMode(1);
    GXSetBlendMode(0, 1, 0, 0, 1, 2, 2);
    GXSetBlendMode(2, 0, 0, 0, 0, 2, 2);
    color[0] = (u8)((s32)(*(u8 *)((u8 *)col + 8) * 0xFF) / 128);
    color[1] = (u8)((s32)(*(u8 *)((u8 *)col + 9) * 0xFF) / 128);
    color[2] = (u8)((s32)(*(u8 *)((u8 *)col + 0xA) * 0xFF) / 128);
    color[3] = (u8)((s32)(*(u8 *)((u8 *)col + 0xB) * 0xFF) / 255);
    sp10 = *(u32 *)color;
    GXSetChanMatColor(4, &sp10);
    spC = *fn_80067478();
    fn_80222164(4, &spC);
    fn_8006A384(sp224);
    if (obj != NULL) {
        spCC[3] = fn_8006469C(obj, 0, lbl_80369FB8);
        spCC[4] = fn_8006469C(obj, 0, lbl_80369FC4);
        spCC[0] = fn_8006469C(obj, 0, lbl_80369FE4);
        spCC[1] = fn_8006469C(obj, 0, lbl_80369FE8);
    }
    cam = Map_Get();
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
    *(s32 *)&sp90[0] = *(s32 *)&spB4[0];
    *(s32 *)&sp90[1] = *(s32 *)(tbl + 0x20);
    *(s32 *)&sp90[2] = *(s32 *)&spB4[2];
    *(s32 *)&spB4[4] = *(s32 *)(tbl + 0x2C);
    *(s32 *)&sp9C[0] = *(s32 *)&spB4[3];
    *(s32 *)&sp9C[1] = *(s32 *)(tbl + 0x2C);
    *(s32 *)&sp9C[2] = *(s32 *)&spB4[5];
    *(s32 *)&spA8[0] = *(s32 *)(tbl + 0x34);
    *(s32 *)&spA8[1] = *(s32 *)(tbl + 0x38);
    *(s32 *)&spA8[2] = *(s32 *)(tbl + 0x3C);
    mtx = Map_Get();
    fn_802029C4(mtx + 0x70, sp90, sp90);
    fn_802029C4(mtx + 0x70, sp9C, sp9C);
    fn_802029C4(mtx + 0x70, spA8, spA8);
    fn_802026E4(sp1C4, sp90, spA8, sp9C);
    negFec = -lbl_80369FEC;
    C_MTXLightOrtho(sp1F4, negFec, lbl_80369FEC, negFec, lbl_80369FEC, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    PSMTXConcat(sp1C4, sp224, sp1C4);
    PSMTXConcat(sp1F4, sp1C4, sp254);
    t29 = GMaterial_AllocMtx();
    fn_80224E50(sp254, t29, 0);
    t24 = GMaterial_AllocTexCoord();
    t23 = GMaterial_AllocTevStage();
    t25 = GMaterial_AllocTexMap();
    Ui_LoadAtlasTex(path, spE4, idx);
    fn_80222C50(spE4, t25);
    fn_802201A8(t24, 0, 0, t29, 0, 0x7D);
    GXSetTevOrder(t23, t24, t25, 4);
    vf4 = *(f32 *)((u8 *)Camera_Get() + 0x100);
    if (vf4 < lbl_80369FB8) {
        vf4 = lbl_80369FB8;
    }
    if (vf4 > lbl_80369FF0) {
        vf4 = lbl_80369FF0;
    }
    color[3] = (u8)(s32)Math_Lerp(lbl_80369FF4, lbl_80369FF8, lbl_80369FF0, vf4);
    sp8 = *(u32 *)color;
    fn_80223C78(3, &sp8);
    fn_80223D38(t23, 0x1F);
    GXSetTevColorIn(t23, 0xF, 8, 0xA, 0xF);
    GXSetTevColorOp(t23, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(t23, 7, 7, 7, 6);
    GXSetTevAlphaOp(t23, 0, 0, 0, 1, 0);
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
    *(s32 *)&sp54[0] = *(s32 *)&sp78[0];
    *(s32 *)&sp54[1] = *(s32 *)(tbl + 0x20);
    *(s32 *)&sp54[2] = *(s32 *)&sp78[2];
    *(s32 *)&sp78[4] = *(s32 *)(tbl + 0x2C);
    *(s32 *)&sp60[0] = *(s32 *)&sp78[3];
    *(s32 *)&sp60[1] = *(s32 *)(tbl + 0x2C);
    *(s32 *)&sp60[2] = *(s32 *)&sp78[5];
    *(s32 *)&sp6C[0] = *(s32 *)(tbl + 0x34);
    *(s32 *)&sp6C[1] = *(s32 *)(tbl + 0x38);
    *(s32 *)&sp6C[2] = *(s32 *)(tbl + 0x3C);
    mtx = Map_Get();
    fn_802029C4(mtx + 0x70, sp54, sp54);
    fn_802029C4(mtx + 0x70, sp60, sp60);
    fn_802029C4(mtx + 0x70, sp6C, sp6C);
    fn_802026E4(sp164, sp54, sp6C, sp60);
    C_MTXLightOrtho(sp194, lbl_80369FEC, negFec, negFec, lbl_80369FEC, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    PSMTXConcat(sp164, sp224, sp164);
    PSMTXConcat(sp194, sp164, sp254);
    t29b = GMaterial_AllocMtx();
    fn_80224E50(sp254, t29b, 0);
    t25b = GMaterial_AllocTexCoord();
    t24b = GMaterial_AllocTevStage();
    t23b = GMaterial_AllocTexMap();
    fn_80222C50(spE4, t23b);
    fn_802201A8(t25b, 0, 0, t29b, 0, 0x7D);
    GXSetTevOrder(t24b, t25b, t23b, 4);
    GXSetTevColorIn(t24b, 0xF, 8, 0xA, 0);
    GXSetTevColorOp(t24b, 0, 0, 3, 1, 0);
    GXSetTevAlphaIn(t24b, 7, 7, 7, 0);
    GXSetTevAlphaOp(t24b, 0, 0, 0, 1, 0);
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
        *(s32 *)&sp18[0] = *(s32 *)&sp3C[0];
        *(s32 *)&sp18[1] = *(s32 *)(tbl + 0x20);
        *(s32 *)&sp18[2] = *(s32 *)&sp3C[2];
        *(s32 *)&sp3C[4] = *(s32 *)(tbl + 0x2C);
        *(s32 *)&sp24[0] = *(s32 *)&sp3C[3];
        *(s32 *)&sp24[1] = *(s32 *)(tbl + 0x2C);
        *(s32 *)&sp24[2] = *(s32 *)&sp3C[5];
        *(s32 *)&sp30[0] = *(s32 *)(tbl + 0x34);
        *(s32 *)&sp30[1] = *(s32 *)(tbl + 0x38);
        *(s32 *)&sp30[2] = *(s32 *)(tbl + 0x3C);
        mtx = Map_Get();
        fn_802029C4(mtx + 0x70, sp18, sp18);
        fn_802029C4(mtx + 0x70, sp24, sp24);
        fn_802029C4(mtx + 0x70, sp30, sp30);
        fn_802026E4(sp104, sp18, sp30, sp24);
        C_MTXLightOrtho(sp134, lbl_80369FFC, lbl_80369FA4, lbl_80369FFC, lbl_80369FA4, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
        PSMTXConcat(sp104, sp224, sp104);
        PSMTXConcat(sp134, sp104, sp254);
        t26c = GMaterial_AllocMtx();
        fn_80224E50(sp254, t26c, 0);
        t29c = GMaterial_AllocTexCoord();
        t25c = GMaterial_AllocTevStage();
        t24c = GMaterial_AllocTexMap();
        Ui_LoadAtlasTex(path, spE4, (u16)(idx + 1));
        fn_80222C50(spE4, t24c);
        fn_802201A8(t29c, 0, 0, t26c, 0, 0x7D);
        GXSetTevOrder(t25c, t29c, t24c, 4);
        GXSetTevColorIn(t25c, 0xF, 8, 0xD, 0);
        GXSetTevColorOp(t25c, 0, 0, 0, 1, 0);
        GXSetTevAlphaIn(t25c, 7, 4, 6, 0);
        GXSetTevAlphaOp(t25c, 1, 0, 0, 1, 0);
    }
    return 1;
}
#pragma pop
#pragma global_optimizer off
s32 fn_800EFC2C(void *arg0, s32 arg1) {
    void fn_8006A384(void *);
    s32 GMaterial_AllocTevStage(void);
    s32 GMaterial_AllocTexMap(void);
    s32 GMaterial_AllocTexCoord(void);
    s32 GMaterial_AllocMtx(void);
    void *Map_Get(void);
    void fn_802029C4(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void C_MTXLightOrtho(void *, f32, f32, f32, f32, f32, f32, f32, f32);
    void PSMTXConcat(void *, void *, void *);
    void fn_80224E50(void *, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void Ui_LoadAtlasTex(s32, void *, u16);
    void fn_80222C50(void *, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    extern u8 lbl_80272C00[];
    extern f32 lbl_80369FC8;

    f32 spF4[3][4];
    f32 spC4[3][4];
    f32 sp94[3][4];
    f32 sp64[3][4];
    u8 sp44[0x20];
    f32 sp2C[6];
    f32 sp20[3];
    f32 sp14[3];
    f32 sp8[3];
    s32 tev;
    s32 texCoord;
    s32 texMap;
    u32 self;
    u8 *tbl;
    f32 half;

    tbl = lbl_80272C00;
    self = (u32)arg0;
    fn_8006A384(spC4);
    tev = GMaterial_AllocTevStage();
    texMap = GMaterial_AllocTexMap();
    texCoord = GMaterial_AllocTexCoord();
    {
        u8 *entry;
        entry = (u8 *)*(void **)(self + 0x14) + *(u8 *)(self + 6) * 0x1C;
        self = *(u16 *)(entry - 0x18);
    }
    {
        u8 *m = (u8 *)Map_Get();
        f32 v5F;
        f32 v5E;
        s32 t60;
        t60 = m[0x60];
        half = (f32)(t60 >> 1);
        v5F = (f32)m[0x5F];
        v5E = (f32)m[0x5E];
        *(s32 *)&sp2C[0] = *(s32 *)(tbl + 0x1C);
        *(s32 *)&sp2C[2] = *(s32 *)(tbl + 0x24);
        *(s32 *)&sp2C[3] = *(s32 *)(tbl + 0x28);
        *(s32 *)&sp2C[5] = *(s32 *)(tbl + 0x30);
        sp2C[0] = v5E;
        sp2C[2] = v5F;
        sp2C[3] = v5E;
        sp2C[5] = v5F;
        *(s32 *)&sp2C[1] = *(s32 *)(tbl + 0x20);
        *(s32 *)&sp8[0] = *(s32 *)&sp2C[0];
        *(s32 *)&sp8[1] = *(s32 *)(tbl + 0x20);
        *(s32 *)&sp8[2] = *(s32 *)&sp2C[2];
        *(s32 *)&sp2C[4] = *(s32 *)(tbl + 0x2C);
        *(s32 *)&sp14[0] = *(s32 *)&sp2C[3];
        *(s32 *)&sp14[1] = *(s32 *)(tbl + 0x2C);
        *(s32 *)&sp14[2] = *(s32 *)&sp2C[5];
        *(s32 *)&sp20[0] = *(s32 *)(tbl + 0x34);
        *(s32 *)&sp20[1] = *(s32 *)(tbl + 0x38);
        *(s32 *)&sp20[2] = *(s32 *)(tbl + 0x3C);
    }
    tbl = (u8 *)Map_Get();
    fn_802029C4(tbl + 0x70, sp8, sp8);
    fn_802029C4(tbl + 0x70, sp14, sp14);
    fn_802029C4(tbl + 0x70, sp20, sp20);
    fn_802026E4(sp64, sp8, sp20, sp14);
    C_MTXLightOrtho(sp94, -half, half, -half, half, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    PSMTXConcat(sp64, spC4, sp64);
    PSMTXConcat(sp94, sp64, spF4);
    tbl = (u8 *)GMaterial_AllocMtx();
    fn_80224E50(spF4, (s32)tbl, 0);
    fn_802201A8(texCoord, 0, 0, (s32)tbl, 0, 0x7D);
    Ui_LoadAtlasTex(arg1, sp44, (u16)self);
    fn_80222C50(sp44, texMap);
    GXSetTevOrder(tev, texCoord, texMap, 4);
    GXSetTevColorOp(tev, 0, 0, 0, 1, 0);
    GXSetTevColorIn(tev, 0xF, 0, 8, 0xF);
    GXSetTevAlphaOp(tev, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(tev, 7, 7, 7, 0);
    return 1;
}
#pragma global_optimizer reset
s32 fn_800EFEE0(void *arg0, s32 arg1) {
    typedef struct {
        f32 x;
        f32 y;
        f32 z;
    } Vec;
    void *Map_Get(void);
    void *GMaterial_GetCurrent(void);
    s32 GMaterial_GetNode(void);
    void fn_8006A384(void *);
    void fn_800690D4(void *, s32, void *);
    void Ui_LoadAtlasTex(s32, void *, s32);
    s32 GMaterial_AllocTexCoord(void);
    s32 GMaterial_AllocTevStage(void);
    s32 GMaterial_AllocTexMap(void);
    s32 GMaterial_AllocMtx(void);
    void fn_802029C4(void *, void *, void *);
    void fn_802026E4(void *, void *, void *, void *);
    void C_MTXLightOrtho(void *, f32, f32, f32, f32, f32, f32, f32, f32);
    void PSMTXConcat(void *, void *, void *);
    void GXSetChanMatColor(s32, void *);
    void fn_80222C50(void *, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void fn_80224E50(void *, s32, s32);
    void GXSetTevColor(s32, void *);
    void fn_8022100C(s32);
    extern const u8 lbl_80272C00[];
    extern const f32 lbl_80369FC8;
    extern const f32 lbl_80369FFC;
    extern const f32 lbl_80369FA4;
    extern u32 lbl_8036C4D0;

    f32 sp104[3][4];
    f32 spD4[3][4];
    f32 spA4[3][4];
    f32 sp74[3][4];
    u8 sp54[0x20];
    Vec a_vec;
    Vec b_vec;
    Vec up;
    Vec target;
    Vec eye;
    u8 color[4];
    u32 sp10;
    u32 spC;
    u32 sp8;
    void *cam;
    void *col;
    s32 col_arg;
    void *mtx_obj;
    f32 fx;
    f32 fy;
    s32 a;
    s32 b;
    s32 c;
    s32 tmp;
    s32 idx;

    cam = Map_Get();
    col = GMaterial_GetCurrent();
    col_arg = GMaterial_GetNode();
    fn_8006A384(spD4);
    fy = (f32)(s32)(0x40 - *(u8 *)((u8 *)cam + 0x5D));
    fx = (f32)(s32)(0x40 - *(u8 *)((u8 *)cam + 0x5C));
    a_vec = *(const Vec *)(lbl_80272C00 + 0x1C);
    a_vec.x = fx;
    a_vec.z = fy;
    eye = a_vec;
    b_vec = *(const Vec *)(lbl_80272C00 + 0x28);
    b_vec.x = fx;
    b_vec.z = fy;
    target = b_vec;
    up = *(const Vec *)(lbl_80272C00 + 0x34);
    mtx_obj = Map_Get();
    fn_802029C4((u8 *)mtx_obj + 0x70, &eye, &eye);
    fn_802029C4((u8 *)mtx_obj + 0x70, &target, &target);
    fn_802029C4((u8 *)mtx_obj + 0x70, &up, &up);
    fn_802026E4(sp74, &eye, &up, &target);
    C_MTXLightOrtho(spA4, lbl_80369FFC, lbl_80369FA4, lbl_80369FFC, lbl_80369FA4,
                    lbl_80369FC8, lbl_80369FC8, lbl_80369FC8, lbl_80369FC8);
    PSMTXConcat(sp74, spD4, sp74);
    PSMTXConcat(spA4, sp74, sp104);
    fn_800690D4(col, col_arg, arg0);
    color[0] = (u8)((s32)(*(u8 *)((u8 *)col + 8) * 0xFF) / 128);
    color[1] = (u8)((s32)(*(u8 *)((u8 *)col + 9) * 0xFF) / 128);
    color[2] = (u8)((s32)(*(u8 *)((u8 *)col + 0xA) * 0xFF) / 128);
    color[3] = (u8)((s32)(*(u8 *)((u8 *)col + 0xB) * 0xFF) / 255);
    sp10 = *(u32 *)color;
    GXSetChanMatColor(4, &sp10);
    idx = *(u16 *)(*(u8 **)((u8 *)arg0 + 0x14) + 4);
    Ui_LoadAtlasTex(arg1, sp54, idx);
    a = GMaterial_AllocTexCoord();
    b = GMaterial_AllocTevStage();
    c = GMaterial_AllocTexMap();
    fn_80222C50(sp54, c);
    GXSetTevOrder(b, a, c, 4);
    fn_802201A8(a, 0, 4, 0x3C, 0, 0x7D);
    GXSetTevColorOp(b, 0, 0, 0, 1, 1);
    GXSetTevColorIn(b, 0xF, 8, 0xA, 0xF);
    GXSetTevAlphaOp(b, 0, 0, 0, 1, 1);
    GXSetTevAlphaIn(b, 7, 7, 7, 7);
    a = GMaterial_AllocTexCoord();
    b = GMaterial_AllocTevStage();
    c = GMaterial_AllocTexMap();
    fn_80222C50(sp54, c);
    GXSetTevOrder(b, a, c, 4);
    fn_802201A8(a, 0, 5, 0x3C, 0, 0x7D);
    GXSetTevColorOp(b, 0, 0, 0, 1, 2);
    GXSetTevColorIn(b, 0xF, 8, 0xA, 0xF);
    GXSetTevAlphaOp(b, 0, 0, 0, 1, 2);
    GXSetTevAlphaIn(b, 7, 7, 7, 7);
    tmp = GMaterial_AllocMtx();
    fn_80224E50(sp104, tmp, 0);
    a = GMaterial_AllocTexCoord();
    fn_802201A8(a, 0, 0, tmp, 0, 0x7D);
    b = GMaterial_AllocTevStage();
    c = GMaterial_AllocTexMap();
    Ui_LoadAtlasTex(arg1, sp54, idx + 1);
    fn_80222C50(sp54, c);
    GXSetTevOrder(b, a, c, 4);
    GXSetTevColorOp(b, 0, 0, 0, 1, 0);
    GXSetTevColorIn(b, 2, 4, 8, 0xF);
    GXSetTevAlphaOp(b, 0, 0, 0, 1, 0);
    GXSetTevAlphaIn(b, 7, 7, 7, 6);
    if (color[0] < 0xFF || color[1] < 0xFF || color[2] < 0xFF) {
        b = GMaterial_AllocTevStage();
        sp8 = lbl_8036C4D0;
        ((u8 *)&sp8)[0] = color[0];
        ((u8 *)&sp8)[1] = color[1];
        ((u8 *)&sp8)[2] = color[2];
        ((u8 *)&sp8)[3] = color[3];
        spC = sp8;
        GXSetTevColor(3, &spC);
        GXSetTevOrder(b, 0xFF, 0xFF, 0xFF);
        GXSetTevColorIn(b, 0xF, 0, 6, 0xF);
        GXSetTevColorOp(b, 0, 0, 0, 1, 0);
        GXSetTevAlphaIn(b, 7, 7, 7, 0);
        GXSetTevAlphaOp(b, 0, 0, 0, 1, 0);
    }
    fn_8022100C(2);
    return 1;
}

void fn_800F047C(void) {
    void *Map_Get(void);
    s32 GActor_FindNode(void *, void *);
    void fn_80060F70(void *, s32, void *);
    f32 fn_80060BA4(void *, s32);
    void *Camera_Get(void);
    void fn_80068550(void *);
    void fn_80068124(void *, void *);
    void PSMTXRotRad(void *, s32, f32);
    void PSMTXConcat(void *, void *, void *);
    void fn_802029C4(void *, void *, void *);
    void fn_800680AC(s32, s32, s32, s32);
    void fn_80068070(f32, f32, f32, f32);
    void fn_80067DA4(s32);
    void fn_80066D00(s32);
    void fn_80069F04(void *);
    void fn_80048478(void *, s32, s32, s32);
    void fn_80067984(s32);
    void fn_8022124C(s32, s32, s32, s32);
    void fn_802212FC(u16, u16, s32, u8);
    void GXCopyTex(void *, s32);
    void fn_802209FC(void);
    void fn_80222EB4(void);
    extern f32 lbl_80369FB8;
    extern f32 lbl_80369FBC;
    extern f32 lbl_80369FF4;
    extern f32 lbl_8036A000;
    extern f32 lbl_8036A004;
    extern f32 lbl_8036A008;
    extern char lbl_80272C64[];
    extern void *lbl_803678D0;
    struct CamBuf {
        u8 pad[0xD4];
        f32 f148, f14C, f150, f154, f158, f15C;
        f32 f160, f164, f168, f16C, f170, f174;
        u8 pad2[0x98];
    } camState;
    f32 mtxB[3][4];
    f32 mtxA[3][4];
    f32 sp8[3];
    void *map;
    void *actor;
    void *node;
    void *cam;
    void *m2;
    s32 idx;
    f32 f31;
    f32 f30;
    f32 t5, t6;
    f32 z;
    s32 mode;

    map = Map_Get();
    if (map == 0) return;
    node = *(void **)((u8 *)map + 0x2C);
    if (node == 0) return;
    actor = *(void **)((u8 *)node + 0x3C);
    if (actor == 0) return;

    f30 = (f31 = lbl_80369FB8);
    idx = GActor_FindNode(actor, lbl_80272C64 + 0x7F);
    if (idx >= 0) {
        fn_80060F70(actor, idx, sp8);
        f31 = sp8[1];
        f30 = fn_80060BA4(actor, idx) / *(f32 *)((u8 *)map + 0x6C);
    }
    z = lbl_80369FB8;
    *(f32 *)((u8 *)node + 0x38) = f30;
    if (z == *(f32 *)((u8 *)node + 0x38)) return;

    cam = Camera_Get();
    fn_80068550(&camState);
    fn_80068124(cam, &camState);

    m2 = Map_Get();
    if (m2 != 0) {
        mode = *(u8 *)((u8 *)m2 + 0x68);
        switch (mode) {
        case 0:
            t6 = lbl_8036A000 - camState.f174;
            t5 = f31 + (f31 - camState.f15C);
            camState.f160 = lbl_80369FB8;
            camState.f174 = t6;
            camState.f15C = t5;
            camState.f164 = lbl_80369FBC;
            camState.f168 = lbl_80369FB8;
            camState.f148 = lbl_80369FB8;
            camState.f14C = lbl_80369FB8;
            camState.f150 = -camState.f16C;
            PSMTXRotRad(mtxA, 0x58, lbl_8036A004 * t6);
            PSMTXRotRad(mtxB, 0x5A, lbl_8036A004 * camState.f170);
            PSMTXConcat(mtxB, mtxA, mtxB);
            fn_802029C4(mtxB, &camState.f148, &camState.f148);
            fn_802029C4(mtxB, &camState.f160, &camState.f160);
            camState.f148 += camState.f154;
            camState.f14C += camState.f158;
            camState.f150 += camState.f15C;
            break;
        case 1:
            camState.f14C = f31 + (f31 - camState.f14C);
            camState.f158 = f31 + (f31 - camState.f158);
            break;
        }
    }

    fn_800680AC(0, 0, 0x130, 0xE0);
    fn_80068070(lbl_80369FB8, lbl_80369FB8, lbl_8036A008, lbl_80369FF4);
    fn_80067DA4(0);
    fn_80066D00(2);
    if (*(void **)((u8 *)map + 0x34) != 0) {
        fn_80069F04(*(void **)((u8 *)map + 0x34));
    }
    fn_80066D00(0);
    fn_80048478(map, 0, 0, 1);
    fn_80066D00(1);
    fn_80048478(map, 1, 0, 1);
    fn_80067984(0);
    fn_80068550(cam);
    fn_80066D00(-1);
    fn_8022124C(0, 0, 0x130, 0xE0);
    fn_802212FC(0x130, 0xE0, 4, 0);
    GXCopyTex(lbl_803678D0, 1);
    fn_802209FC();
    fn_80222EB4();
}

void fn_800F0774(void) {
    void Process_Unlink(void *);
    extern void *lbl_803678E8;
    extern void *lbl_803678EC;
    void *ptr;

    ptr = lbl_803678E8;
    if (ptr != NULL) {
        Process_Unlink(ptr);
        lbl_803678E8 = NULL;
    }
    ptr = lbl_803678EC;
    if (ptr != NULL) {
        Process_Unlink(ptr);
        lbl_803678EC = NULL;
    }
}

#pragma push
#pragma optimization_level 4
#pragma opt_lifetimes off
void fn_800F07C0(void) {
    f32 Map_SampleHeightRaw(void *, f32, f32);
    void Effect_SetPos(void *, f32, f32, f32);
    void *BattleState_GetFactionInfo(void *, s32);
    u8 BattleState_IsPhaseZero(void *);
    extern u8 gBattleState[];
    extern u8 gBattleMap[];
    extern void *lbl_803678E8;
    extern void *lbl_803678EC;
    extern const f32 lbl_8036A010;
    extern const f32 lbl_8036A014;
    void *r31;
    u8 *data;
    void *obj;
    f32 f31;
    f32 f30;
    f32 half;
    s8 sx;
    s8 sy;

    if (BattleState_IsPhaseZero(gBattleState) != 0) {
        if (lbl_803678E8 != NULL) {
            r31 = lbl_803678E8;
            data = BattleState_GetFactionInfo(gBattleState, 0);
            if (data[0] != 3) {
                obj = *(void **)((u8 *)r31 + 0x30);
                *(u32 *)((u8 *)obj + 8) |= 0x10;
            } else {
                obj = *(void **)((u8 *)r31 + 0x30);
                *(u32 *)((u8 *)obj + 8) &= ~0x10U;
                half = lbl_8036A010;
                f30 = half + (f32)(s8)data[2];
                f31 = half + (f32)(s8)data[3];
                Effect_SetPos(r31, f30, f31, Map_SampleHeightRaw(gBattleMap, f30, f31) - lbl_8036A014);
            }
        }
        if (lbl_803678EC != NULL) {
            r31 = lbl_803678EC;
            data = BattleState_GetFactionInfo(gBattleState, 3);
            if (data[0] != 3) {
                obj = *(void **)((u8 *)r31 + 0x30);
                *(u32 *)((u8 *)obj + 8) |= 0x10;
            } else {
                obj = *(void **)((u8 *)r31 + 0x30);
                *(u32 *)((u8 *)obj + 8) &= ~0x10U;
                half = lbl_8036A010;
                sx = (s8)data[2];
                sy = (s8)data[3];
                f31 = half + (f32)sx;
                f30 = half + (f32)sy;
                Effect_SetPos(r31, f31, f30, Map_SampleHeightRaw(gBattleMap, f31, f30) - lbl_8036A014);
            }
        }
    }
}
#pragma pop
void fn_800F07C0(void);

void fn_800F09A8(s32 arg0) {
    void *fn_80052B54(char *, s32);
    u8 BattleState_IsPhaseZero(void *);
    extern u8 gBattleState[];
    extern char lbl_80272D08[];
    extern u32 lbl_803678E8;
    extern u32 lbl_803678EC;

    if (BattleState_IsPhaseZero(gBattleState)) {
        lbl_803678E8 = (u32)fn_80052B54(lbl_80272D08 + 0x1D, arg0);
        lbl_803678EC = (u32)fn_80052B54(lbl_80272D08 + 0x2A, arg0);
        M2C_FIELD(M2C_FIELD(lbl_803678E8, void **, 0x30), u32 *, 8) |= 0x164;
        M2C_FIELD(M2C_FIELD(lbl_803678EC, void **, 0x30), u32 *, 8) |= 0x164;
    }
}

void fn_800F0A3C(s32 arg0)
{
    extern u8 lbl_8032B2B8[];
    u8 *base;
    u8 *p;
    s8 delta;
    s8 typ;
    u8 idx;
    u8 t;

    base = lbl_8032B2B8;
    delta = (s8)(arg0 - base[0x80]);
    base[0x100] = 0;

    while ((s8)(idx = base[0x100]) < 0x40) {
        p = base + (s8)idx;
        p[0x80] = (u8)(p[0x80] + delta);
        p = base + (s8)base[0x100];
        typ = (s8)p[0xC0];
        if (typ < 0xC && typ >= 8) break;
        if ((s8)p[0x80] <= 0) break;
        base[0x100]++;
    }

    p = lbl_8032B2B8;
    p += (s8)base[0x100];
    idx = *(p += 0xC0);
    switch (idx) {
    case 0x0:
    case 0x10:
    case 0x12:
        idx = 0x8;
        break;
    case 0x3:
    case 0xD:
    case 0xF:
        idx = 0xB;
        break;
    case 0x1:
    case 0xC:
    case 0x11:
        idx = 0x9;
        break;
    case 0x2:
    case 0xE:
    case 0x13:
        idx = 0xA;
        break;
    default:
        break;
    }
    *p = (u8)idx;
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

void MapCursor_InitTrail(s8 arg0, s8 arg1, s8 arg2) {
    extern u8 lbl_8032B2B8[];
    lbl_8032B2B8[0] = arg0;
    lbl_8032B2B8[0x40] = arg1;
    lbl_8032B2B8[0x80] = arg2;
    lbl_8032B2B8[0xC0] = 0x14;
    lbl_8032B2B8[0x100] = 0;
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
void fn_800F0C54(u8 *arg0) {
void Ui_LoadAtlasTex(s32,void *,s32); void PSMTXScale(void *,f32,f32,f32); void PSMTXTrans(void *,f32,f32,f32);
void *Camera_GetViewMtx(void); void PSMTXConcat(void *,void *,void *); f32 Map_GetTileCornerHeight(void *,u8,u8,s32);
extern s32 gUiRouteAtlas; extern const f32 lbl_8036A020,lbl_8036A024,lbl_8036A028,lbl_8036A02C; extern u8 gBattleMap[];
f32 sp58[12],sp28[12]; u8 sp8[32]; u8 *p; u8 x,y; s32 i; 
f32 one,fx,fy,fx1,fy1,z;
Ui_LoadAtlasTex(gUiRouteAtlas,sp8,0);
GXClearVtxDesc();GXSetVtxDesc(9,1);GXSetVtxDesc(13,1);GXSetVtxAttrFmt(0,9,1,4,0);GXSetVtxAttrFmt(0,13,1,1,0);
GXSetCullMode(1);GXSetBlendMode(4,0,0,0,0,0,2);GXSetNumTevStages(1);GXSetNumTexGens(0,3);GXSetTevOrder(0,0,0,255);
GXSetNumChans(1);fn_802201A8(0,1,4,30,0,125);
PSMTXScale(sp58,lbl_8036A020,lbl_8036A024,lbl_8036A024);fn_80224E50(sp58,30,1);fn_8022100C(0);fn_80222C50(sp8,0);
PSMTXTrans(sp28,lbl_8036A028,lbl_8036A028,lbl_8036A02C);PSMTXConcat(Camera_GetViewMtx(),sp28,sp28);
GXLoadPosMtxImm(sp28,0);GXSetCurrentMtx(0);fn_802245D8(1,4,5,0);

for(i=0;i<=(s8)arg0[0x100];i++){
p=arg0+i; x=p[0];y=p[0x40]; fx=(s8)x;fy=(s8)y;fx1=lbl_8036A024+fx;fy1=lbl_8036A024+fy;
GXBegin(0x98,0,4);
z=Map_GetTileCornerHeight(gBattleMap,x,y,0);
*(f32 *)0xCC008000=fx;*(f32 *)0xCC008000=fy;*(f32 *)0xCC008000=z;
*(u8 *)0xCC008000=p[0xC0];*(u8 *)0xCC008000=0;
z=Map_GetTileCornerHeight(gBattleMap,x,y,1);
*(f32 *)0xCC008000=fx1;*(f32 *)0xCC008000=fy;*(f32 *)0xCC008000=z;
*(u8 *)0xCC008000=p[0xC0]+1;*(u8 *)0xCC008000=0;
z=Map_GetTileCornerHeight(gBattleMap,x,y,2);
*(f32 *)0xCC008000=fx;*(f32 *)0xCC008000=fy1;*(f32 *)0xCC008000=z;
*(u8 *)0xCC008000=p[0xC0];*(u8 *)0xCC008000=1;
z=Map_GetTileCornerHeight(gBattleMap,x,y,3);
*(f32 *)0xCC008000=fx1;*(f32 *)0xCC008000=fy1;*(f32 *)0xCC008000=z;
*(u8 *)0xCC008000=p[0xC0]+1;*(u8 *)0xCC008000=1;
}fn_80066D00(-1);
}
#pragma pop
void fn_800F0F90(u16 *arg0, s32 arg1, s32 arg2)
{
    extern u8 gBattleMap[];
    void fn_800F1494(void *, s32, s32);
    s32 fn_8002134C(void *, s32, s32);
    s32 fn_8001F85C(void *, s32, s32);
    u8 *fn_8001FC40(void *, s32, s32);
    void Map_SelectRangeBuffer(void *, s32);
    void Map_FloodMoveRange(void *, s32, s32, s32, s32, s32);

    u8 *path;
    u8 *route;
    s32 length;
    s32 index;
    s32 i;
    s32 j;
    s32 x;
    s32 y;
    s32 oldX;
    s32 oldY;
    s32 dx;
    s32 dy;
    s32 distance;
    s32 cmd;
    s32 repeated;
    s32 tileOffset;

    path = (u8 *)arg0;
    length = (s8)path[0x100];

    if ((s8)arg1 == (s8)path[length] &&
        (s8)arg2 == (s8)path[length + 0x40]) {
        return;
    }

    x = (s8)arg1;
    y = (s8)arg2;

    tileOffset = (x + (y << 6)) << 1;
    if (*(s16 *)(gBattleMap + 0x610E + tileOffset) < 0) {
        return;
    }

    for (index = 0; index < length; index++) {
        if (x == (s8)path[index] &&
            y == (s8)path[index + 0x40]) {
            index = (s8)index;
            goto index_found;
        }
    }
    index = -1;
index_found:
    if ((s8)index >= 0) {
        path[0x100] = (u8)(index - 1);

        if ((s8)path[0x100] < 0) {
            path[0] = (u8)arg1;
            path[0x40] = (u8)arg2;
            path[0xC0] = 0x14;
            path[0x100] = 0;
        } else {
            fn_800F1494(path, arg1, arg2);
        }
        return;
    }

    distance = (s16)fn_8002134C(gBattleMap, arg1, arg2);
    length = (s8)path[0x100];
    oldX = (s8)path[length];
    oldY = (s8)path[length + 0x40];

    if ((s8)path[length + 0x80] >= distance) {
        dy = y - oldY;
        if (dy < 0) {
            dy = -dy;
        }
        dx = x - oldX;
        if (dx < 0) {
            dx = -dx;
        }

        if (dy + dx == 1) {
            if ((u8)fn_8001F85C(gBattleMap, arg1, arg2) != 0) {
                fn_800F1494(path, arg1, arg2);
                return;
            }
        }
    }

    Map_SelectRangeBuffer(gBattleMap, 6);
    length = (s8)path[0x100];

    Map_FloodMoveRange(
        gBattleMap,
        path[length],
        path[length + 0x40],
        (s8)path[length + 0x80],
        1,
        1
    );

    Map_SelectRangeBuffer(gBattleMap, 5);

    if (*(s16 *)(gBattleMap + 0x818E + tileOffset) < 0) {
        path[0x100] = 0;

        Map_SelectRangeBuffer(gBattleMap, 6);
        Map_FloodMoveRange(
            gBattleMap,
            path[0],
            path[0x40],
            (s8)path[0x80],
            1,
            1
        );

        route = fn_8001FC40(gBattleMap, arg1, arg2);
        Map_SelectRangeBuffer(gBattleMap, 5);

        length = (s8)path[0x100];
        oldX = path[length];
        oldY = path[length + 0x40];

        for (;;) {
            cmd = *route++;

            if ((u32)cmd > 0x10) {
                break;
            }

            switch (cmd) {
            case 1:
                oldY--;
                break;
            case 2:
                oldY++;
                break;
            case 4:
                oldX--;
                break;
            case 8:
                oldX++;
                break;
            case 0:
            case 3:
            case 5:
            case 6:
            case 7:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            default:
                goto done;
            }

            fn_800F1494(path, oldX, oldY);
        }

        goto done;
    }

    Map_SelectRangeBuffer(gBattleMap, 6);
    route = fn_8001FC40(gBattleMap, arg1, arg2);
    Map_SelectRangeBuffer(gBattleMap, 5);

    length = (s8)path[0x100];
    oldX = path[length];
    oldY = path[length + 0x40];

    for (;;) {
        cmd = *route++;

        if ((u32)cmd > 0x10) {
            break;
        }

        switch (cmd) {
        case 1:
            oldY--;
            break;
        case 2:
            oldY++;
            break;
        case 4:
            oldX--;
            break;
        case 8:
            oldX++;
            break;
        case 0:
        case 3:
        case 5:
        case 6:
        case 7:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        default:
            goto second_finished;
        }

        fn_800F1494(path, oldX, oldY);
    }

second_finished:
    repeated = 0;

    for (i = (s8)path[0x100]; i >= 0 && !repeated; i--) {
        for (j = i - 1; j >= 0; j--) {
            if ((s8)path[i] == (s8)path[j] &&
                (s8)path[i + 0x40] == (s8)path[j + 0x40]) {
                repeated = 1;
                break;
            }
        }
    }

    if (!repeated) {
        goto done;
    }

    path[0x100] = 0;

    Map_SelectRangeBuffer(gBattleMap, 6);
    Map_FloodMoveRange(
        gBattleMap,
        path[0],
        path[0x40],
        (s8)path[0x80],
        1,
        1
    );

    route = fn_8001FC40(gBattleMap, arg1, arg2);
    Map_SelectRangeBuffer(gBattleMap, 5);

    length = (s8)path[0x100];
    oldX = path[length];
    oldY = path[length + 0x40];

    for (;;) {
        cmd = *route++;

        if ((u32)cmd > 0x10) {
            break;
        }

        switch (cmd) {
        case 1:
            oldY--;
            break;
        case 2:
            oldY++;
            break;
        case 4:
            oldX--;
            break;
        case 8:
            oldX++;
            break;
        case 0:
        case 3:
        case 5:
        case 6:
        case 7:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        default:
            goto done;
        }

        fn_800F1494(path, oldX, oldY);
    }

done:
    return;
}

#pragma push
#pragma opt_common_subs off
void fn_800F1494(u8 *arg0, s8 arg1, s8 arg2) {
    s32 fn_8002134C(void *, s8, s8);
    extern u8 gBattleMap[];
    void *tbl;
    u8 idx;
    s32 t;
    s32 d0;
    u8 *p;
    u8 *q;
    s32 i;

    tbl = gBattleMap;
    arg0[0x100] = (u8)(arg0[0x100] + 1);
    arg0[(s8)arg0[0x100]] = (u8)arg1;
    p = arg0 + (s8)arg0[0x100];
    p[0x40] = (u8)arg2;
    idx = arg0[0x100];
    t = fn_8002134C(tbl, arg1, arg2);
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
        s32 d1;
        s32 a, b, c, d;
        for (i = 1; i < (s8)arg0[0x100]; i++) {
            q = arg0 + i;
            b = q[0];
            a = q[-1];
            d = q[0x40];
            c = q[0x3F];
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
            a = q[1];
            c = q[0x41];
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
                q[0xC0] = 3;
                break;
            case 0x44:
                q[0xC0] = 0;
                break;
            case 0x11:
                q[0xC0] = 1;
                break;
            case 0x22:
                q[0xC0] = 2;
                break;
            case 0x82:
                q[0xC0] = 0xD;
                break;
            case 0x14:
                q[0xC0] = 0xC;
                break;
            case 0x81:
                q[0xC0] = 0xF;
                break;
            case 0x24:
                q[0xC0] = 0xE;
                break;
            case 0x42:
                q[0xC0] = 0x10;
                break;
            case 0x18:
                q[0xC0] = 0x11;
                break;
            case 0x41:
                q[0xC0] = 0x12;
                break;
            case 0x28:
                q[0xC0] = 0x13;
                break;
            }
        }

        p = arg0 + (s32)i;
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
#pragma pop
void fn_800F18A4(s32 arg0, s32 arg1) {
    void fn_80060060(void *);
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
    extern u8 lbl_8032AC58[];
    extern u8 lbl_802CA518[];
    extern f32 lbl_8028E578[];
    extern f32 lbl_8028E588[];
    extern const f32 lbl_8036A014, lbl_8036A030, lbl_8036A034, lbl_8036A038, lbl_8036A03C;

    f32 m108[12], mD8[12], mA8[12], m78[12], m48[12], m18[12], q[4];
    s32 i;
    f32 f28, f27, f26;
    void *terrain;

    fn_80060060(lbl_8032AC58 + 0x288);
    for (i = 0; i < 4; i++) {
        fn_80060060(lbl_8032AC58 + 8 + i * 0xA0);
    }
    *(f32 *)(lbl_8032AC58 + 0x5E0) = (f32)arg0;
    *(f32 *)(lbl_8032AC58 + 0x5E4) = (f32)arg1;
    for (i = 0; i < 4; i++) {
        *(f32 *)(lbl_8032AC58 + 0x5E8 + i * 4) = fn_80023068(lbl_802CA518, *(f32 *)(lbl_8032AC58 + 0x5E0) + lbl_8028E578[i], *(f32 *)(lbl_8032AC58 + 0x5E4) + lbl_8028E588[i]) - lbl_8036A014;
    }
    fn_802025C0(m48, lbl_8036A030, lbl_8036A030, lbl_8036A030);
    fn_80202300(m78, 0x58, lbl_8036A034);
    terrain = fn_80040844();
    for (i = 0; i < 4; i++) {
        f26 = *(f32 *)(lbl_8032AC58 + 0x5E0) + lbl_8028E578[i];
        f28 = *(f32 *)(lbl_8032AC58 + 0x5E8 + i * 4);
        f27 = *(f32 *)(lbl_8032AC58 + 0x5E4) + lbl_8028E588[i];
        if (terrain != 0) {
            fn_80043F9C(terrain, m18, f26, f27);
            fn_802033AC(q, m18);
            fn_80203604(lbl_8032AC58 + 0x5F8 + i * 0x10, q, q, lbl_8036A030);
            *(f32 *)(lbl_8032AC58 + 0x5F8 + i * 0x10) = q[0];
            *(f32 *)(lbl_8032AC58 + 0x5FC + i * 0x10) = q[1];
            *(f32 *)(lbl_8032AC58 + 0x600 + i * 0x10) = q[2];
            *(f32 *)(lbl_8032AC58 + 0x604 + i * 0x10) = q[3];
            fn_80202640(mD8, q);
        } else {
            fn_80201FC4(mD8);
        }
        fn_80202300(m108, 0x5A, lbl_8036A038 * (lbl_8036A03C * (f32)i));
        fn_80202540(mA8, f26, f27, f28);
        fn_80202024(m78, m48, m18);
        fn_80202024(m108, m18, m18);
        fn_80202024(mD8, m18, m18);
        fn_80202024(mA8, m18, lbl_8032AC58 + 0x18 + i * 0xA0);
        *(u32 *)(lbl_8032AC58 + 8 + i * 0xA0) |= 0x50000400;
        fn_80201FF0(lbl_8032AC58 + 0x18 + i * 0xA0, lbl_8032AC58 + 0x338 + i * 0xA0);
        *(u32 *)(lbl_8032AC58 + 0x328 + i * 0xA0) |= 0x30000400;
        fn_8005F7B0(lbl_8032AC58 + 0x328 + i * 0xA0, 0xF0);
        fn_8005F7E0(lbl_8032AC58 + 0x328 + i * 0xA0, 0x80, 0x20, 0x80);
        *(f32 *)(lbl_8032AC58 + 0x380 + i * 0xA0) = *(f32 *)(lbl_8032AC58 + 0x60 + i * 0xA0);
        fn_800606BC(lbl_8032AC58 + 8 + i * 0xA0);
        fn_800606BC(lbl_8032AC58 + 0x328 + i * 0xA0);
    }
    lbl_8032AC58[0x65C] = 1;
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
    extern const f32 lbl_8036A010, lbl_8036A014, lbl_8036A030, lbl_8036A034, lbl_8036A038, lbl_8036A03C, lbl_8036A040;

    f32 m1C8[12], m198[12], m168[12], m138[12], m108[12], mD8[12], mA8[12], m78[12], m48[12], m18[12], q[4];
    u8 *ctx;
    unsigned same;
    u8 *self;
    s32 i, j;
    f32 f26, f27, f29, f28;
    void *terrain;

    self = (u8 *)arg0;
    ctx = lbl_80330708;
    f26 = *(f32 *)(ctx + 0x538);
    f27 = *(f32 *)(ctx + 0x534);
    f29 = fn_80023068(lbl_802CA518, f27, f26);
    fn_802025C0(m168, lbl_8036A030, lbl_8036A030, lbl_8036A030);
    fn_80202300(m198, 0x58, lbl_8036A034);
    fn_80202024(m198, m168, m138);
    fn_80202540(m1C8, f27, f26, f29 - lbl_8036A040);
    fn_80202024(m1C8, m138, self + 0x298);
    fn_800606BC(self + 0x288);
    same = *(s32 *)(self + 0x638) == fn_800067B4() - 1;
    *(s32 *)(self + 0x638) = fn_800067B4();
    if (*(u8 *)(self + 0x63C) != 0) {
        *(f32 *)(self + 0x5E0) = *(f32 *)(ctx + 0x534) - lbl_8036A010;
        *(f32 *)(self + 0x5E4) = *(f32 *)(ctx + 0x538) - lbl_8036A010;
    } else if ((u8)same != 0) {
        *(f32 *)(self + 0x5E0) = lbl_8036A010 * (*(f32 *)(self + 0x5E0) + (f32)(s8)(s32)*(f32 *)(ctx + 0x534));
        *(f32 *)(self + 0x5E4) = lbl_8036A010 * (*(f32 *)(self + 0x5E4) + (f32)(s8)(s32)*(f32 *)(ctx + 0x538));
    } else {
        *(f32 *)(self + 0x5E0) = (f32)(s8)(s32)*(f32 *)(ctx + 0x534);
        *(f32 *)(self + 0x5E4) = (f32)(s8)(s32)*(f32 *)(ctx + 0x538);
    }
    for (i = 0; i < 4; i++) {
        f28 = fn_80023068(lbl_802CA518, *(f32 *)(self + 0x5E0) + lbl_8028E578[i], *(f32 *)(self + 0x5E4) + lbl_8028E588[i]) - lbl_8036A014;
        if ((u8)same != 0) {
            *(f32 *)(self + 0x5E8 + i * 4) = lbl_8036A010 * (*(f32 *)(self + 0x5E8 + i * 4) + f28);
        } else {
            *(f32 *)(self + 0x5E8 + i * 4) = f28;
        }
    }
    fn_802025C0(m48, lbl_8036A030, lbl_8036A030, lbl_8036A030);
    fn_80202300(m78, 0x58, lbl_8036A034);
    terrain = fn_80040844();
    for (j = 0; j < 4; j++) {
        f26 = *(f32 *)(self + 0x5E0) + lbl_8028E578[j];
        f27 = *(f32 *)(self + 0x5E4) + lbl_8028E588[j];
        f28 = *(f32 *)(self + 0x5E8 + j * 4);
        if (terrain != 0) {
            fn_80043F9C(terrain, m18, f26, f27);
            fn_802033AC(q, m18);
            fn_80203604(self + 0x5F8 + j * 0x10, q, q, lbl_8036A030);
            *(f32 *)(self + 0x5F8 + j * 0x10) = q[0];
            *(f32 *)(self + 0x5FC + j * 0x10) = q[1];
            *(f32 *)(self + 0x600 + j * 0x10) = q[2];
            *(f32 *)(self + 0x604 + j * 0x10) = q[3];
            fn_80202640(mD8, q);
        } else {
            fn_80201FC4(mD8);
        }
        fn_80202300(m108, 0x5A, lbl_8036A038 * (lbl_8036A03C * (f32)j));
        fn_80202540(mA8, f26, f27, f28);
        fn_80202024(m78, m48, m18);
        fn_80202024(m108, m18, m18);
        fn_80202024(mD8, m18, m18);
        fn_80202024(mA8, m18, self + 0x18 + j * 0xA0);
        *(u32 *)(self + 8 + j * 0xA0) |= 0x50000400;
        fn_80201FF0(self + 0x18 + j * 0xA0, self + 0x338 + j * 0xA0);
        *(u32 *)(self + 0x328 + j * 0xA0) |= 0x30000400;
        fn_8005F7B0(self + 0x328 + j * 0xA0, 0xF0);
        fn_8005F7E0(self + 0x328 + j * 0xA0, 0x80, 0x20, 0x80);
        *(f32 *)(self + 0x380 + j * 0xA0) = *(f32 *)(self + 0x60 + j * 0xA0);
        fn_800606BC(self + 8 + j * 0xA0);
        fn_800606BC(self + 0x328 + j * 0xA0);
    }
    self[0x65C] = 1;
}
void fn_800F20E0(void) {
    void fn_80060060(void *);
    void fn_800F1C24(void *);

    fn_80060060(lbl_8032AC58 + 0x288);
    Init_800F20E0_Entries(&lbl_8032AC58);
    fn_800F1C24(lbl_8032AC58);
}

void fn_800F2174(void *);
void fn_800F214C(void) {
    fn_800F2174(&lbl_8032AC58);
}

#pragma push
#pragma optimization_level 4
#pragma opt_propagation off
void fn_800F2174(void *arg0)
{
void *Map_Get(void);u8 fn_80047AF8(void);void *Camera_Get(void);void Ui_PlaySeCue(void*,s32);void fn_8014CAD4(void*,f32,f32);f64 fn_802380D0(f32);f64 sin(f32);
extern u8 lbl_80272CE8[];extern u8 lbl_80272D08[];extern u8 gBattleMap[];extern u8 gBattleState[];extern s32 gUiInputFlags;extern u8 lbl_803671C1;extern u8 *gPadInput;extern const f32 lbl_8036A010;extern const f32 lbl_8036A028;extern const f32 lbl_8036A038;extern const f32 lbl_8036A044;extern const f32 lbl_8036A048;extern const f32 lbl_8036A04C;extern const f32 lbl_8036A050;extern const f32 lbl_8036A054;extern const f32 lbl_8036A058;
u8 *self=(u8*)arg0;f32 f30,f31,f3,f2,f4,f1;f32 var_f30,var_f31,var_f1,var_f2;f32 f26,f27,f28,f29;s32 oldX, oldY; u8 *directions; s32 directionOffset; s32 r22,r0;u8 *pad;u8 *stick;s32 held;s16 *grid;
if(*(s32*)(gPadInput+0xC)&0xF){self[0x63C]=1;}stick=*(u8**)gPadInput;if(((s8)stick[3]|(s8)stick[2])!=0){self[0x63C]=0;}
Map_Get();f4=(f32)fn_80047AF8();f3=*(f32*)(gBattleState+0x534);f2=*(f32*)(gBattleState+0x538);if(*(f32*)(gBattleState+0x534)<f4){f3=f4;}f1=(f32)*(s32*)gBattleMap-f4;if(f3>=f1){f3=f1-lbl_8036A010;}if(*(f32*)(gBattleState+0x538)<f4){f2=f4;}f1=(f32)*(s32*)(gBattleMap+4)-f4;if(f2>=f1){f2=f1-lbl_8036A010;}if(f3!=*(f32*)(gBattleState+0x534)||f2!=*(f32*)(gBattleState+0x538)){*(f32*)(gBattleState+0x534)=f3;*(f32*)(gBattleState+0x524)=f3;*(f32*)(gBattleState+0x528)=f2;*(f32*)(gBattleState+0x538)=f2;}
f30=*(f32*)(gBattleState+0x534);f31=*(f32*)(gBattleState+0x538);lbl_803671C1=0;oldX=(s32)f30;oldY=(s32)f31;
if(self[0x63C]!=0){*(f32*)(gBattleState+0x524)=(f32)(s32)*(f32*)(gBattleState+0x524)+lbl_8036A010;*(f32*)(gBattleState+0x528)=(f32)(s32)*(f32*)(gBattleState+0x528)+lbl_8036A010;held=*(s32*)(gPadInput+4);if(held&0x200){if(held&(*(s32*)(gPadInput+8)^held)&0x200){gPadInput[0x1F]=0;}if(gPadInput[0x1F]&1){r0=0;}else{r0=*(s32*)(gPadInput+4);}r22=r0&0xF;if(r22!=0&&!(gUiInputFlags&0x80)){directionOffset=r22*2;directions=lbl_80272CE8;pad=directions+directionOffset;var_f30=(f32)(s8)directions[directionOffset]+*(f32*)(gBattleState+0x524);var_f31=(f32)(s8)*++pad+*(f32*)(gBattleState+0x528);Map_Get();f2=(f32)fn_80047AF8();if(var_f30<=f2||var_f30>=(f32)*(s32*)gBattleMap-f2){var_f30-=(f32)(s8)directions[directionOffset];}if(var_f31<=f2||var_f31>=(f32)*(s32*)(gBattleMap+4)-f2){var_f31-=(f32)(s8)*pad;}grid=*(s16**)(gBattleMap+0x14190);if(!(gUiInputFlags&0x400)||grid[((s8)(s32)*(f32*)(gBattleState+0x524))+(((s8)(s32)*(f32*)(gBattleState+0x528))<<6)]<0||grid[((s8)(s32)var_f30)+(((s8)(s32)var_f31)<<6)]>=0||(u32)r22==(u32)(*(s32*)(gPadInput+4)&(*(s32*)(gPadInput+8)^*(s32*)(gPadInput+4))&0xF)){*(f32*)(gBattleState+0x524)=var_f30;*(f32*)(gBattleState+0x528)=var_f31;*(f32*)(gBattleState+0x538)=lbl_8036A010+(f32)(s32)*(f32*)(gBattleState+0x538);*(f32*)(gBattleState+0x534)=lbl_8036A010+(f32)(s32)*(f32*)(gBattleState+0x534);}}var_f1=*(f32*)(gBattleState+0x534);var_f2=*(f32*)(gBattleState+0x538);if(*(f32*)(gBattleState+0x524)<var_f1-lbl_8036A044){var_f1-=lbl_8036A010;}if(*(f32*)(gBattleState+0x524)>var_f1+lbl_8036A044){var_f1+=lbl_8036A010;}if(*(f32*)(gBattleState+0x528)<var_f2-lbl_8036A044){var_f2-=lbl_8036A010;}if(*(f32*)(gBattleState+0x528)>var_f2+lbl_8036A044){var_f2+=lbl_8036A010;}*(f32*)(gBattleState+0x534)=var_f1;*(f32*)(gBattleState+0x538)=var_f2;fn_8014CAD4(gBattleState,var_f1,var_f2);lbl_803671C1=1;}else{r22=*(s32*)(gPadInput+0xC)&0xF;if(r22!=0&&!(gUiInputFlags&0x80)){directionOffset=r22*2;directions=lbl_80272CE8;pad=directions+directionOffset;var_f31=(f32)(s8)directions[directionOffset]+*(f32*)(gBattleState+0x524);var_f30=(f32)(s8)*++pad+*(f32*)(gBattleState+0x528);Map_Get();f2=(f32)fn_80047AF8();if(var_f31<=f2||var_f31>=(f32)*(s32*)gBattleMap-f2){var_f31-=(f32)(s8)directions[directionOffset];}if(var_f30<=f2||var_f30>=(f32)*(s32*)(gBattleMap+4)-f2){var_f30-=(f32)(s8)*pad;}grid=*(s16**)(gBattleMap+0x14190);if(!(gUiInputFlags&0x400)||grid[((s8)(s32)*(f32*)(gBattleState+0x524))+(((s8)(s32)*(f32*)(gBattleState+0x528))<<6)]<0||grid[((s8)(s32)var_f31)+(((s8)(s32)var_f30)<<6)]>=0||(u32)r22==(u32)(*(s32*)(gPadInput+4)&(*(s32*)(gPadInput+8)^*(s32*)(gPadInput+4))&0xF)){*(f32*)(gBattleState+0x524)=var_f31;*(f32*)(gBattleState+0x528)=var_f30;*(f32*)(gBattleState+0x538)=lbl_8036A010+(f32)(s32)*(f32*)(gBattleState+0x538);*(f32*)(gBattleState+0x534)=lbl_8036A010+(f32)(s32)*(f32*)(gBattleState+0x534);}}var_f1=*(f32*)(gBattleState+0x534);var_f2=*(f32*)(gBattleState+0x538);if(*(f32*)(gBattleState+0x524)<var_f1-lbl_8036A044){var_f1-=lbl_8036A048;}if(*(f32*)(gBattleState+0x524)>var_f1+lbl_8036A044){var_f1+=lbl_8036A048;}if(*(f32*)(gBattleState+0x528)<var_f2-lbl_8036A044){var_f2-=lbl_8036A048;}if(*(f32*)(gBattleState+0x528)>var_f2+lbl_8036A044){var_f2+=lbl_8036A048;}*(f32*)(gBattleState+0x534)=var_f1;*(f32*)(gBattleState+0x538)=var_f2;fn_8014CAD4(gBattleState,var_f1,var_f2);}}
else{stick=*(u8**)gPadInput;if(((s8)stick[3]|(s8)stick[2])!=0){if(*(s32*)(gPadInput+4)&0x200){if(!(gUiInputFlags&0x80)){stick=*(u8**)gPadInput;f26=lbl_8036A038*-*(f32*)((u8*)Camera_Get()+0xFC);f28=(f32)(s8)stick[2]/lbl_8036A04C;f29=(f32)(s8)stick[3]/lbl_8036A04C;f27=(f32)fn_802380D0(f26);f2=(f32)sin(f26);f1=(f27*f28)-(f2*f29);f28=f31-((f2*f28)+(f27*f29));f29=f30+f1;Map_Get();f2=(f32)fn_80047AF8();if(f29<f2){f29=f2;}f1=(f32)*(s32*)gBattleMap-f2;if(f29>=f1){f29=f1-lbl_8036A050;}if(f28<f2){f28=f2;}f1=(f32)*(s32*)(gBattleMap+4)-f2;if(f28>=f1){f28=f1-lbl_8036A050;}*(f32*)(gBattleState+0x524)=f29;*(f32*)(gBattleState+0x528)=f28;*(f32*)(gBattleState+0x534)=f29;*(f32*)(gBattleState+0x538)=f28;fn_8014CAD4(gBattleState,f29,f28);}lbl_803671C1=1;}else if(!(gUiInputFlags&0x80)){stick=*(u8**)gPadInput;f26=lbl_8036A038*-*(f32*)((u8*)Camera_Get()+0xFC);f29=(f32)(s8)stick[2]/lbl_8036A054;f28=(f32)(s8)stick[3]/lbl_8036A054;f27=(f32)fn_802380D0(f26);f2=(f32)sin(f26);f1=(f27*f29)-(f2*f28);f28=f31-((f2*f29)+(f27*f28));f29=f30+f1;Map_Get();f2=(f32)fn_80047AF8();if(f29<f2){f29=f2;}f1=(f32)*(s32*)gBattleMap-f2;if(f29>=f1){f29=f1-lbl_8036A050;}if(f28<f2){f28=f2;}f1=(f32)*(s32*)(gBattleMap+4)-f2;if(f28>=f1){f28=f1-lbl_8036A050;}*(f32*)(gBattleState+0x524)=f29;*(f32*)(gBattleState+0x528)=f28;*(f32*)(gBattleState+0x534)=f29;*(f32*)(gBattleState+0x538)=f28;fn_8014CAD4(gBattleState,f29,f28);}}else{fn_8014CAD4(gBattleState,*(f32*)(gBattleState+0x524),*(f32*)(gBattleState+0x528));*(f32*)(self+4)=lbl_8036A028;*(f32*)self=lbl_8036A028;f3=*(f32*)(gBattleState+0x534);f2=*(f32*)(gBattleState+0x538);f4=lbl_8036A010+(f32)(s32)f3;f1=lbl_8036A010+(f32)(s32)f2;f29=((lbl_8036A058*f3)+f4)*lbl_8036A048;f28=((lbl_8036A058*f2)+f1)*lbl_8036A048;*(f32*)(gBattleState+0x534)=f29;*(f32*)(gBattleState+0x538)=f28;*(f32*)(gBattleState+0x524)=f29;*(f32*)(gBattleState+0x528)=f28;fn_8014CAD4(gBattleState,f29,f28);}}
if(oldX!=(s32)*(f32*)(gBattleState+0x534)||oldY!=(s32)*(f32*)(gBattleState+0x538)){Ui_PlaySeCue(lbl_80272D08+0x37,0x64);}self[0x65C]=0;
}
#pragma pop
void fn_800F2E50(s8 arg0) {
    M2C_FIELD(&lbl_8032AC58, s8 *, 0x65C) = arg0;
}

u8 fn_800F2E60(void) {
    extern s8 lbl_8032AC58[];
    return lbl_8032AC58[0x65C];
}

static inline void Cleanup_800F2E70_Entries(void *arg) {
    void fn_800616A0(void *);
    u8 *base = (u8 *)arg;
    s32 i = 0;

    do {
        fn_800616A0(base + i * 0xA0 + 0x328);
        fn_800616A0(base + i * 0xA0 + 8);
        i++;
    } while (i < 4);
}

void fn_800F2E70(void) {
    void fn_800616A0(void *);

    Cleanup_800F2E70_Entries(&lbl_8032AC58);
    fn_800616A0(lbl_8032AC58 + 0x288);
}

#pragma push
#pragma global_optimizer off
#pragma opt_common_subs off
void fn_800F2ED8(void) {
    extern u8 lbl_80272D08[];
    extern s8 lbl_8032AC58[];
    extern f32 lbl_8036A024;
    extern f32 lbl_8036A028;
    void fn_8005C890(void *);
    void fn_80061824(void *);
    s32 fn_80065EE8(void *);
    s32 fn_8006CE14(void *);
    s32 fn_800639B4(void *);
    s32 fn_8006D948(void *);
    void GActor_Finalize(void *);
    s32 i;
    u8 *p;

    fn_8005C890(lbl_80272D08 + 0x50);
    fn_8005C890(lbl_80272D08 + 0x5b);
    fn_8005C890(lbl_80272D08 + 0x67);
    fn_8005C890(lbl_80272D08 + 0x73);
    fn_8005C890(lbl_80272D08 + 0x7e);
    fn_8005C890(lbl_80272D08 + 0x8a);
    fn_8005C890(lbl_80272D08 + 0x96);

    p = (u8 *)lbl_8032AC58 + 0x288;
    fn_80061824(p);
    *(s32 *)((u8 *)lbl_8032AC58 + 0x2c8) = fn_80065EE8(lbl_80272D08 + 0x50);
    *(s32 *)((u8 *)lbl_8032AC58 + 0x2d0) = fn_8006CE14(lbl_80272D08 + 0x5b);
    *(s32 *)((u8 *)lbl_8032AC58 + 0x2cc) = fn_800639B4(lbl_80272D08 + 0x67);
    GActor_Finalize(p);

    for (p = (u8 *)lbl_8032AC58, i = 0; i < 4; i++) {
        fn_80061824(p + 8);
        *(s32 *)(p + 0x48) = fn_80065EE8(lbl_80272D08 + 0x73);
        *(s32 *)(p + 0x50) = fn_8006CE14(lbl_80272D08 + 0x7e);
        *(s32 *)(p + 0x4c) = fn_800639B4(lbl_80272D08 + 0x8a);
        *(s32 *)(p + 0x54) = fn_8006D948(lbl_80272D08 + 0x96);
        GActor_Finalize(p + 8);
        fn_80061824(p + 0x328);
        *(void **)(p + 0x32c) = p + 8;
        GActor_Finalize(p + 0x328);
        p += 0xa0;
    }

    *(f32 *)((u8 *)lbl_8032AC58 + 0x5e4) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x5e0) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x5e8) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x5f8) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x5fc) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x600) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x604) = lbl_8036A024;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x5ec) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x608) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x60c) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x610) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x614) = lbl_8036A024;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x5f0) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x618) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x61c) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x620) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x624) = lbl_8036A024;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x5f4) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x628) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x62c) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x630) = lbl_8036A028;
    *(f32 *)((u8 *)lbl_8032AC58 + 0x634) = lbl_8036A024;
    *(s32 *)((u8 *)lbl_8032AC58 + 0x638) = -2;
    *(u8 *)((u8 *)lbl_8032AC58 + 0x65c) = 0;
}
u8 fn_800F30E0(s32 arg0, u8 arg1) {
    extern u8 gAiState[];
    extern u8 gBattleMap[];
    extern u8 gUiContext[];
    extern s32 gTargetList[];
    void Map_FillLayer(void *, s32, s32);
    void Map_SelectRangeBuffer(void *, s32);
    void Map_BuildUnitMoveRange(void *, s32, s32);
    void fn_800FFC00(void *, s32);
    void *TargetList_GetAt(void *, s32);
    void *UnitRef_GetUnit(void *);
    u8 fn_8003863C(void *);
    void fn_800FB96C(u8, s8, s8, void *, u8, u8, s8, s32, s32);

    u8 *ctx;
    u8 *self;
    s32 bestScore;
    u8 *best;
    u8 tx;
    u8 ty;
    u8 *unit;
    u8 bx;
    u8 by;
    u8 *map;
    s32 i;
    void *entry;
    s32 score;
    u8 ux, uy;

    ctx = gUiContext;
    map = gBattleMap;
    i = arg0;
    best = 0;
    ctx[8] = arg1;
    bestScore = 0x7FFFFFFF;
    self = *(u8 **)ctx;

    if ((gAiState[1] & 2) || (*(u32 *)(self + 0x254) & 0x03000000)) {
        Map_FillLayer(map, 5, -1);
        Map_SelectRangeBuffer(map, 5);
        (*(u16 **)(map + 0x14190))[(s8)self[0x19E] + ((s8)self[0x19F] << 6)] = 0;
    } else {
        Map_BuildUnitMoveRange(self, 5, -1);
    }

    fn_800FFC00(self, i);
    self = (u8 *)gTargetList;
    if (*(s32 *)self != 0) {
        for (i = 0; i < *(s32 *)self; i++) {
            entry = TargetList_GetAt(self, i);
            tx = ((u8 *)entry)[0];
            ty = ((u8 *)entry)[1];
            unit = UnitRef_GetUnit(entry);
            uy = unit[0x19F];
            ux = unit[0x19E];
            if (map[(s8)(ux + (s8)(ux - tx)) + (((s8)(uy + (s8)(uy - ty))) << 6) + 0x300D] & 2) {
                score = (u8)fn_8003863C(unit);
                if (score < bestScore) {
                    bx = tx;
                    by = ty;
                    best = unit;
                    bestScore = score;
                }
            }
        }
        if ((u32)(bestScore + 0x80010000) != 0xFFFFU) {
            fn_800FB96C(ctx[8], (s8)bx, (s8)by, best, best[0x19E], best[0x19F], -1, 0, 0);
        }
    }
    return gAiState[0x21C];
}
#pragma pop
s32 fn_800F32A4(void *arg) {
extern u8 gBattleMap[];
void Map_BuildUnitMoveRange(void *,s32,s32);
void fn_800FDDBC(s8,s8,u8,u8,s32);
u8 Map_IsAiTerrainBlocked(s8,s8);
u8 flags[8]; u8 *unit; u8 *map; void **weapon; s32 id; u8 *arg0=(u8 *)arg; s32 dist,dy; u8 a,b,range,outside,cx,cy,r,t;
if ((M2C_FIELD(arg0,u16*,0x1A4)>>7 & 7) || (M2C_FIELD(arg0,u8*,0x1A5)&7) || (M2C_FIELD(arg0,u32*,0x1A0)&0x9D)) return 0;
Map_BuildUnitMoveRange(arg0,5,-1);
weapon=(void **)Unit_GetActiveItemPtr(arg0); if (!weapon || !*weapon) return 0;
Allegiance_FillMask(1,flags);
map=gBattleMap;
for(id=1;id<=159;id++){
unit=(u8)id ? gUnits+((u8)id-1)*0x280:0;
if (!M2C_FIELD(unit,u32*,0x188) || !flags[M2C_FIELD(M2C_FIELD(unit,u8**,0x190),u8*,8)]) continue;
a=unit[0x19E]; b=M2C_FIELD(arg0,u8*,0x19E);
dy=Abs((s8)M2C_FIELD(arg0,u8*,0x19F)-(s8)unit[0x19F]);
dist=dy+Abs((s8)b-(s8)a);
range=*weapon ? (u8)Item_GetRangeForUnit(*weapon,arg0):0;
if(dist> range+(s8)Unit_GetMov(arg0) || (M2C_FIELD(unit,u32*,0x1A0)&0x10000DC)) continue;
outside=0; cx=unit[0x19E]; cy=unit[0x19F];
if((s8)cx<(s8)map[8] || (s8)map[10]-1<(s8)cx || (s8)cy<(s8)map[9] || (s8)map[11]-1<(s8)cy) outside=1;
if(outside)continue;
r=*weapon ? (u8)Item_GetRangeForUnit(*weapon,unit):0;
t=*weapon ? M2C_FIELD(*weapon,u8*,0x1D):0;
fn_800FDDBC((s8)unit[0x19E],(s8)unit[0x19F],t,r,6);
{ s32 row; u8 *p; s32 y; s32 x; u8 *q;
unit=gBattleMap;
for(y=*(s8 *)(map+9);y<=(s8)map[11]-1;y++){
row=(s8)y<<6;
for(x=*(s8 *)(map+8);x<=(s8)map[10]-1;x++){
q=unit+((s8)x+row)*2;
if(M2C_FIELD(q,s16*,0x610E)<0)continue;
p=unit+row+(s8)x;
if(M2C_FIELD(p,s8*,0xE18E) || Map_IsAiTerrainBlocked((s8)x,(s8)y) || !M2C_FIELD(q,u16*,0xC18E))continue;
t=p[13]; if(!t || t==M2C_FIELD(arg0,u8*,0x198))return 1;
}}}
}return 0;
}
#pragma pop
s32 fn_800F35B0(u8 (*filter)(void *),s32 name,u8 *out,s8 mode) {
extern u8 gUiContext[],gBattleMap[],gUnits[];
void Item_Init(void *); void Item_SetByName(void *,s32); void *Item_Destroy(void *,s16);
void Allegiance_FillMask(s32,void *);
int Abs(int); s8 Unit_GetMov(void *); u8 Item_GetRangeForUnit(void *,void *);
void fn_800FDDBC(s8,s8,u8,u8,s32); u8 fn_800F7D28(void *,void *);
u8 result[12]; u8 weapon[8]; u8 mask[8];
u8 *self; u8 *unit; u8 *map;
s32 id; s32 dist; int dy; u8 ux,sx,range,outside,cx,cy,r,t; s32 ret;
gUiContext[8]=mode;self=*(u8 **)gUiContext;
*(s32 *)(out+8)=(s32)0x80000000; *(void **)(out+4)=0;
Item_Init(weapon);Item_SetByName(weapon,name);
*(u16 *)(result+2)=M2C_FIELD(*(void **)weapon,u16 *,14);
Allegiance_FillMask(1,mask);map=gBattleMap;
for(id=1;id<=159;id++){
unit=(u8)id?gUnits+((u8)id-1)*0x280:0;
if(!M2C_FIELD(unit,u32 *,0x188)||!mask[M2C_FIELD(M2C_FIELD(unit,u8 **,0x190),u8 *,8)]||!filter(unit))continue;
ux=unit[0x19E];sx=self[0x19E];
dy=Abs((s8)self[0x19F]-(s8)unit[0x19F]);
dist=Abs((s8)sx-(s8)ux);
dist+=dy;
range=*(void **)weapon?Item_GetRangeForUnit(*(void **)weapon,self):0;
dy=(s8)Unit_GetMov(self);dy+=range;
if(dist>dy||(M2C_FIELD(unit,u32 *,0x1A0)&0x10000DC))continue;
outside=0;cx=unit[0x19E];cy=unit[0x19F];
if((s8)cx<(s8)map[8]||(s8)map[10]-1<(s8)cx||(s8)cy<(s8)map[9]||(s8)map[11]-1<(s8)cy)outside=1;
if(outside)continue;
r=*(void **)weapon?Item_GetRangeForUnit(*(void **)weapon,unit):0;
t=*(void **)weapon?M2C_FIELD(*(void **)weapon,u8 *,29):0;
fn_800FDDBC((s8)unit[0x19E],(s8)unit[0x19F],t,r,6);
*(void **)(result+4)=unit;
if(fn_800F7D28(self,result)&&*(s32 *)(result+8)>*(s32 *)(out+8)) {
out[0]=result[0];out[1]=result[1];*(u16 *)(out+2)=*(u16 *)(result+2);*(void **)(out+4)=*(void **)(result+4);*(s32 *)(out+8)=*(s32 *)(result+8);
}
}
ret=*(void **)(out+4)!=0;
Item_Destroy(weapon,-1);return ret;
}

#pragma push
#pragma optimization_level 4
#pragma opt_propagation off
u8 fn_800F3860(u8 (*arg0)(void *),s32 arg1,u8 arg2) {
void fn_800FDDBC(s32,s32,s32,s32,s32);
int Abs(int);
void Item_Destroy(void *,int);
extern u8 gAiState[],gUiContext[],gBattleMap[];
u8 fn_800F7D28(void *,void *); s8 Unit_GetMov(void *); u8 Item_GetRangeForUnit(void *,void *);
void fn_800FB96C(u8,s8,s8,void *,u8,u8,s8,s32,s32);
struct {u8 x,y;u16 item;u8 *unit;s32 score;} result;
struct {void *ptr;u32 state;} weapon;
u8 flags[8];
u8 *ctx=gUiContext; u8 *map; u8 *self; u8 *unit;
u8 ret; s32 score; u8 *best; u8 bx,by;u16 item; s32 id; s32 a=(s32)gBattleMap; u8 b; u8 outside,cx,cy,r,t; s32 range; int dy,dist;
score=(s32)0x80000000; best=0;
ctx[8]=arg2; self=*(u8 **)ctx;
if((gAiState[1]&2)||(M2C_FIELD(self,u32 *,0x254)&0x3000000)){
Map_FillLayer((void *)a,5,-1);Map_SelectRangeBuffer((void *)a,5);
M2C_FIELD(a,u16 **,0x14190)[(s8)self[0x19E]+((s8)self[0x19F]<<6)]=0;
}else Map_BuildUnitMoveRange(self,5,-1);
Item_Init(&weapon);Item_SetByName(&weapon,arg1);
result.item=M2C_FIELD(weapon.ptr,u16 *,14);
Allegiance_FillMask(1,flags);
map=gBattleMap;
for(id=1;id<=159;id++){
unit=(u8)id?gUnits+((u8)id-1)*0x280:0;
if(!M2C_FIELD(unit,u32 *,0x188)||!flags[M2C_FIELD(M2C_FIELD(unit,u8 **,0x190),u8 *,8)]||!arg0(unit))continue;
a=unit[0x19E];b=self[0x19E];
dy=Abs((s8)self[0x19F]-(s8)unit[0x19F]);
dist=Abs((s8)b-(s8)a);
a=dist+dy;
range=weapon.ptr?Item_GetRangeForUnit(weapon.ptr,self):0;
dist=(s8)Unit_GetMov(self);
if(a>dist+(u8)range || (M2C_FIELD(unit,u32 *,0x1A0)&0x10000DC))continue;
outside=0;cx=unit[0x19E];cy=unit[0x19F];
if((s8)cx<(s8)map[8]||(s8)map[10]-1<(s8)cx||(s8)cy<(s8)map[9]||(s8)map[11]-1<(s8)cy)outside=1;
if(outside)continue;
r=weapon.ptr?Item_GetRangeForUnit(weapon.ptr,unit):0;t=weapon.ptr?M2C_FIELD(weapon.ptr,u8 *,29):0;
fn_800FDDBC(((s8*)unit)[0x19E],((s8*)unit)[0x19F],t,r,6);
result.unit=unit;
if(fn_800F7D28(self,&result)&&result.score>score){bx=result.x;score=result.score;by=result.y;item=result.item;best=result.unit;}
}
if(best)fn_800FB96C(ctx[8],(s8)bx,(s8)by,best,best[0x19E],best[0x19F],(s8)item,0,0);
ret=gAiState[0x21C];Item_Destroy(&weapon,-1);return ret;
}
#pragma pop
u8 fn_800F3BA4(s16 *arg0, u8 arg1) {
    void Map_FillLayer(void *, s32, s32);
    void Map_SelectRangeBuffer(void *, s32);
    s8 Unit_GetMov(void *);
    void fn_800FB96C(s8, s8, s8, s32, s8, s8, s8, s8, u8);
    void Map_BuildUnitMoveRange(void *, s32, s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
    void *MapObjEvent_Find(void *, s8, s8, s32);
    extern u8 gAiState[];
    extern u8 gUiContext[];
    extern u8 gBattleMap[];
    extern u8 gMapObjEventList[];

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
    ctx = gUiContext;
    ctx[8] = arg1;
    map = gBattleMap;
    unit = *(u8 **)ctx;

    if (!(gAiState[1] & 2) && (*(u32 *)(unit + 0x254) & 0x03000000)) {
        Map_FillLayer(map, 5, -1);
        Map_SelectRangeBuffer(map, 5);
        {
            s16 *tbl = *(s16 **)(map + 0x14190);
            tbl[(s8)unit[0x19E] + ((s8)unit[0x19F] << 6)] = 0;
        }
    } else {
        Map_BuildUnitMoveRange(unit, 5, -1);
    }

    best = 0x7FFF;
    if (list != NULL) {
        bb = gMapObjEventList;
        map2 = gBattleMap;
        goto list_cond;
    list_body:
        ly = list[1];
        if (MapObjEvent_Find(bb, (s8)cur_x, (s8)ly, 0xA) != NULL) {
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
    rad = Unit_GetMov(unit);
    x_lo = x0 - rad;
    if (x_lo < (s8)gBattleMap[8]) {
        x_lo = (s8)gBattleMap[8];
    }
    y_lo = y0 - rad;
    if (y_lo < (s8)gBattleMap[9]) {
        y_lo = (s8)gBattleMap[9];
    }
    x_hi = x0 + rad;
    if (x_hi > (s8)gBattleMap[0xA] - 1) {
        x_hi = (s8)gBattleMap[0xA] - 1;
    }
    y_hi = y0 + rad;
    if (y_hi > (s8)gBattleMap[0xB] - 1) {
        y_hi = (s8)gBattleMap[0xB] - 1;
    }
    map2 = gBattleMap;
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
            if (Map_IsAiTerrainBlocked((s8)x, (s8)y) == 0) {
                if (*(rowbase + (s8)x + 0xD) == 0) {
                    if (MapObjEvent_Find(gMapObjEventList, (s8)x, (s8)y, 0xA) != NULL) {
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
        entry = MapObjEvent_Find(gMapObjEventList, best_x, best_y, 0xA);
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
        *(s32 *)(gAiState + 8) = 0;
    } else {
        *(s32 *)(gAiState + 8) = 9;
    }
    return gAiState[0x21C];
}

#pragma opt_strength_reduction off
#pragma cplusplus off
#pragma use_lmw_stmw on
#pragma opt_loop_invariants off
#pragma opt_lifetimes off
u8 fn_800F3F50(s32 arg0, s8 arg1) {
    extern u8 gAiState[], gBattleMap[], gUiContext[], gMapObjEventList[], lbl_80284E20[], lbl_8028E6E8[], gTargetList[];
    void Map_FillLayer(void *, s32, s32);
    void Map_SelectRangeBuffer(void *, s32);
    void Map_BuildUnitMoveRange(void *, s32, s32);
    s8 Unit_GetMov(void *);
    u8 Map_IsAiTerrainBlocked(s8, s8);
    void *MapObjEvent_Find(void *, s8, s8, s32);
    void fn_8002F728(void *);
    s32 fn_80110030(void *);
    void fn_800FDF38(s16, s16, s32, s32, s32);
    void fn_8002C530(void *, s32);
    void *TargetList_GetAt(void *, s32);
    void *UnitRef_GetUnit(void *);
    u8 Allegiance_Compare(void *, void *);
    void fn_800FB96C(u8, s8, s8, void *, s8, s8, s8, s32, s32);
    u8 *ctx;
    struct { void *vtable; s32 callback; } pred;
    u8 *map, *self;
    s32 best;
    s32 dy;
    u8 bx, by;
    s8 candidateX;
    s8 destY;
    s16 destX;
    s32 count;
    u8 bestX, bestY;
    s32 rowOffset;
    u8 *row;
    s32 xmax;
    s32 ymax;
    s32 y, x;
    u8 *tile, *entry, *unit;
    s32 index;
    s32 xmin, ymin, range, dx;
    s32 dx2, dy2;
    s32 cx, cy;
    u8 mode, flags;

    ctx = gUiContext;
    map = gBattleMap;
    flags = gAiState[1];
    ctx[8] = arg1;
    self = *(u8 **)ctx;
    if ((flags & 2) || (*(u32 *)(self + 0x254) & 0x03000000)) {
        Map_FillLayer(map, 5, -1);
        Map_SelectRangeBuffer(map, 5);
        (*(u16 **)(map + 0x14190))[(s8)self[0x19E] + ((s8)self[0x19F] << 6)] = 0;
    } else {
        Map_BuildUnitMoveRange(self, 5, -1);
    }
    cx = (s8)self[0x19E];
    cy = (s8)self[0x19F];
    best = (s32)0x80000000;
    range = Unit_GetMov(self);
    xmin = cx - range;
    if (xmin < (s8)gBattleMap[8]) xmin = (s8)gBattleMap[8];
    ymin = cy - range;
    if (ymin < (s8)gBattleMap[9]) ymin = (s8)gBattleMap[9];
    xmax = cx + range;
    if (xmax > (s8)gBattleMap[10] - 1) xmax = (s8)gBattleMap[10] - 1;
    ymax = cy + range;
    if (ymax > (s8)gBattleMap[11] - 1) ymax = (s8)gBattleMap[11] - 1;
    map = gBattleMap;
    for (y = ymin; y <= ymax; y++) {
        rowOffset = (s8)y << 6;
        row = map + rowOffset;
        for (x = xmin; x <= xmax; x++) {
            u8 *cell = map;
            cell += ((s8)x + rowOffset) * 2;
            if (*(s16 *)(cell + 0x610E) < 0) continue;
            tile = row + (s8)x;
            if (*(s8 *)(tile + 0xE18E) || Map_IsAiTerrainBlocked((s8)x, (s8)y) || tile[0xD]) continue;
            if (!MapObjEvent_Find(gMapObjEventList, (s8)x, (s8)y, 10)) continue;
            entry = MapObjEvent_Find(gMapObjEventList, (s8)(s16)x, (s8)(s16)y, 10);
            pred.callback = arg0;
            pred.vtable = lbl_80284E20;
            pred.vtable = lbl_8028E6E8;
            mode = entry[3];
            candidateX = (s8)entry[0];
            destY = (s8)entry[1];
            switch ((s32)mode) { case 1: dx = -1; break; case 2: dx = 1; break; default: dx = 0; break; }
            destX = candidateX + dx;
            switch ((s32)mode) { case 4: dy = 1; break; case 8: dy = -1; break; default: dy = 0; break; }
            fn_8002F728(gTargetList);
            Map_SelectRangeBuffer(gBattleMap, 6);
            Map_FillLayer(gBattleMap, 6, -1);
            fn_800FDF38(destX, (s16)(destY + dy), fn_80110030(entry), 6, 255);
            fn_8002C530(&pred, 0);
            if (*(s32 *)gTargetList) {
                bx = (u8)x;
                by = (u8)y;
                count = 0;
                for (index = 0; index < *(s32 *)gTargetList; index++) {
                    unit = UnitRef_GetUnit(TargetList_GetAt(gTargetList, index));
                    if (Allegiance_Compare(M2C_FIELD(self, void **, 0x190), M2C_FIELD(unit, void **, 0x190)) == 1) count++;
                    else count--;
                }
                if (count > 0 && count > best) { bestX = bx; bestY = by; best = count; }
            }
        }
    }
    if ((u32)(best + 0x80000000) != 0) {
        u8 action;
        u32 fbx = bestX, fby = bestY;
        entry = MapObjEvent_Find(gMapObjEventList, (s8)fbx, (s8)fby, 10);
        mode = entry[3];
        action = ctx[8];
        switch ((s32)mode) { case 1: dx2 = -1; break; case 2: dx2 = 1; break; default: dx2 = 0; break; }
        switch ((s32)mode) { case 4: dy2 = 1; break; case 8: dy2 = -1; break; default: dy2 = 0; break; }
        fn_800FB96C(action, (s8)fbx, (s8)fby, 0, (s8)(fbx + dx2), (s8)(fby + dy2), -1, 0, 0);
    }
    return gAiState[0x21C];
}
#pragma opt_lifetimes reset
#pragma opt_loop_invariants reset
#pragma use_lmw_stmw reset
#pragma opt_strength_reduction reset
#pragma push
#pragma optimization_level 4
#pragma opt_strength_reduction off
#pragma opt_loop_invariants off
#pragma use_lmw_stmw on
#pragma opt_common_subs on
u8 fn_800F43D8(s32 arg0,u8 arg1){
extern u8 gUiContext[],gBattleMap[],gAiState[],gMapObjEventList[],gTargetList[],lbl_80284E20[],gAiEval_UnitScoreVtbl[],lbl_8028E6D8[];
extern char lbl_80272DB0[];
u8 Status_Test(void *,s32);void Map_FillLayer(void *,s32,s32);void Map_SelectRangeBuffer(void *,s32);
void Map_BuildUnitMoveRange(void *,s32,s32);s8 Unit_GetMov(void *);u8 Map_IsAiTerrainBlocked(s8,s8);
void *MapObjEvent_Find(void *,s8,s8,s32);void *Item_GetByIid(void *);void *Item_Get(u8);
void fn_8002F728(void *);u8 Item_GetMaxRange(void *);void fn_800FDDBC(s8,s8,u8,u8,s32);
void Map_ClipRangeByFacing(void *,u8,u8,u8);void fn_8002C47C(void *,s8);void *TargetList_GetAt(void *,s32);
void fn_8002C6F4(void *,s8,s8);void fn_800FB96C(u8,s8,s8,void *,s8,s8,s8,s32,s32);
u8 *map,*ctx; s32 rowOffset;u8 *row; s32 xmin,xmax,ymax;
s32 callback; F43Eval eval; F43Range pred; struct {F43Pos pos;s32 pad;s32 score;} result;
s16 bestY,bestX;u16 bestItem;u8 bestToY,bestToX;
s32 index,score,x,y,ymin; s32 cx,cy,r;u8 ix,iy,kind,id;u8 *self,*entry,*candidate,*item,*list,*tile,*point;
callback=arg0;ctx=gUiContext;map=gBattleMap;self=*(u8**)ctx;ctx[8]=arg1;
if(!Status_Test(self+0x1bc,0x4f))return 0;
if((gAiState[1]&2)||(*(u32*)(self+0x254)&0x03000000)){
Map_FillLayer(map,5,-1);Map_SelectRangeBuffer(map,5);(*(u16**)(map+0x14190))[*(s8*)(self+0x19e)+(*(s8*)(self+0x19f)<<6)]=0;
}else Map_BuildUnitMoveRange(self,5,-1);
cx=*(s8*)(self+0x19e);cy=*(s8*)(self+0x19f);score=(s32)0x80000000;
r=Unit_GetMov(self);
xmin=cx-r;if(xmin<(s8)gBattleMap[8])xmin=(s8)gBattleMap[8];
ymin=cy-r;if(ymin<(s8)gBattleMap[9])ymin=(s8)gBattleMap[9];
xmax=cx+r;if(xmax>(s8)gBattleMap[10]-1)xmax=(s8)gBattleMap[10]-1;
ymax=cy+r;if(ymax>(s8)gBattleMap[11]-1)ymax=(s8)gBattleMap[11]-1;
map=gBattleMap;
for(y=ymin;y<=ymax;y++){rowOffset=(s8)y<<6;row=map+rowOffset;
for(x=xmin;x<=xmax;x++){
u8 *cell = map;
cell += ((s8)x + rowOffset) * 2;
if (*(s16 *)(cell + 0x610E) < 0) continue;
tile=row+(s8)x;
if(*(s8*)(tile+0xe18e)||Map_IsAiTerrainBlocked((s8)x,(s8)y)||tile[0xd])continue;
entry=MapObjEvent_Find(gMapObjEventList,(s8)x,(s8)y,7);
if(!entry||!entry[5]||entry[4]!=*(u16*)((u8*)Item_GetByIid(lbl_80272DB0+0xce)+0xe))continue;
candidate=MapObjEvent_Find(gMapObjEventList,(s8)(s16)x,(s8)(s16)y,7);
pred.vtable=lbl_80284E20;pred.vtable=lbl_8028E6D8;pred.value=callback;
fn_8002F728(gTargetList);Map_SelectRangeBuffer(gBattleMap,6);
item=Item_Get(candidate[4]);iy=candidate[1];kind=item[0x1d];ix=candidate[0];
fn_800FDDBC((s8)ix,(s8)iy,kind,(u8)Item_GetMaxRange(item),6);
Map_ClipRangeByFacing(gBattleMap,candidate[0],candidate[1],candidate[3]);
fn_8002C47C(&pred,(s8)item[0x1d]);
list=gTargetList;
if(*(s32*)list){result.pos.id=entry[4];
for(index=0;index<*(s32*)list;index++){
point=TargetList_GetAt(list,index);result.pos.x=point[0];result.pos.y=point[1];
ix=(s8)result.pos.x;iy=(s8)result.pos.y;
eval.vtable=(void**)lbl_80284E20;id=gBattleMap[(s8)ix+((s8)iy<<6)+0xd];
eval.vtable=(void**)gAiEval_UnitScoreVtbl;eval.entry=entry;eval.unit=self;eval.pos=&result.pos;result.score=0;
if(id){void *unit=0;if(id)unit=gUnits+(id-1)*0x280;((void(*)(void*,void*))eval.vtable[2])(&eval,unit);}
fn_8002C6F4(&eval,(s8)ix,(s8)iy);
if(result.score>score){bestToX=result.pos.x;score=result.score;bestToY=result.pos.y;bestX=(s16)x;bestItem=result.pos.id;bestY=(s16)y;}
}
}
}
}
if((u32)(score+0x80000000U)!=0)fn_800FB96C(ctx[8],(s8)bestX,(s8)bestY,0,(s8)bestToX,(s8)bestToY,(s8)bestItem,0,0);
return gAiState[0x21c];
}
#pragma pop
#pragma opt_common_subs on
#pragma opt_loop_invariants reset
#pragma opt_strength_reduction reset

#pragma opt_loop_invariants reset
#pragma use_lmw_stmw reset
#pragma opt_strength_reduction reset

#pragma use_lmw_stmw reset

/* Evaluate combat vs target; add score if hostile, subtract otherwise. */
void AiEval_ApplyUnitScore(void *eval, void *target) {
    u8 Allegiance_Compare(void *, void *);
    u8 Battle_EvalTargetScore(void *, void *);
    struct {
        u8 x;
        u8 y;
        u16 item;
        void *unit;
        s32 score;
    } result;
    u8 *entry;
    s32 hostile;

    hostile = ((u8)Allegiance_Compare(*(void **)(*(u8 **)((u8 *)eval + 8) + 0x190),
                           *(void **)((u8 *)target + 0x190)) == 1);
    entry = *(u8 **)((u8 *)eval + 4);
    result.x = entry[0];
    result.y = entry[1];
    result.unit = target;
    result.item = *(u16 *)(*(u8 **)((u8 *)eval + 0xC) + 2);
    if (Battle_EvalTargetScore(*(void **)((u8 *)eval + 8), &result)) {
        if ((u8)hostile != 0) {
            *(s32 *)(*(u8 **)((u8 *)eval + 0xC) + 8) += result.score;
        } else {
            *(s32 *)(*(u8 **)((u8 *)eval + 0xC) + 8) -= result.score;
        }
    }
}

#pragma push
#pragma optimization_level 4
#pragma opt_strength_reduction off
#pragma opt_loop_invariants off
#pragma use_lmw_stmw on
#pragma opt_common_subs off
#pragma opt_common_subs on
u8 fn_800F4954(s32 arg0, u8 arg1) {
    extern u8 gUiContext[], gBattleMap[], gAiState[], gMapObjEventList[], gTargetList[], gUnits[], lbl_80284E20[], lbl_8028E6B8[];
    extern char lbl_80272DB0[];
    u8 Status_Test(void *, s32);
    void Map_FillLayer(void *, s32, s32);
    void Map_SelectRangeBuffer(void *, s32);
    void Map_BuildUnitMoveRange(void *, s32, s32);
    s8 Unit_GetMov(void *);
    u8 Map_IsAiTerrainBlocked(s8, s8);
    void *MapObjEvent_Find(void *, s8, s8, s32);
    void *Item_GetByIid(void *);
    void *Item_Get(u8);
    void fn_8002F728(void *);
    u8 Item_GetMaxRange(void *);
    void fn_800FDDBC(s8, s8, u8, u8, s32);
    void Map_ClipRangeByFacing(void *, u8, u8, u8);
    void fn_8002C530(void *, s8);
    void *TargetList_GetAt(void *, s32);
    u8 Battle_EvalTargetScore(void *, void *);
    void fn_800FB96C(u8, s8, s8, void *, u8, u8, s8, s32, s32);

    u8 *self;
    u8 *ctx;
    s32 xmin, ymax;
    struct { s8 x, y; u16 item; void *unit; s32 score; } result;
    struct { void *vtable; s32 callback; } pred;
    s32 callback;
    s32 index, x, xmax;
    s8 cx, cy, r;
    s32 y, ymin;
    u16 bestItem;
    u8 ix, iy, kind, id, bestY, bestX;
    s32 score;
    u8 *best;
    s32 rowOffset;
    u8 *map, *entry, *item, *candidate, *row;
    u8 *list;
    u8 *cell;
    s32 t;

    callback = arg0;
    ctx = gUiContext;
    map = gBattleMap;
    self = *(u8 **)ctx;
    ctx[8] = arg1;
    if (!Status_Test(self + 0x1BC, 0x4F))
        return 0;
    if ((gAiState[1] & 2) || (*(u32 *)(self + 0x254) & 0x03000000)) {
        Map_FillLayer(map, 5, -1);
        Map_SelectRangeBuffer(map, 5);
        (*(u16 **)(map + 0x14190))[(s8)self[0x19E] + ((s8)self[0x19F] << 6)] = 0;
    } else
        Map_BuildUnitMoveRange(self, 5, -1);
    cx = (s8)self[0x19E];
    cy = (s8)self[0x19F];
    score = (s32)0x80000000;
    best = 0;
    r = (s8)Unit_GetMov(self);
    xmin = cx - r;
    if (xmin < (s8)gBattleMap[8])
        xmin = (s8)gBattleMap[8];
    ymin = cy - r;
    if (ymin < (s8)gBattleMap[9])
        ymin = (s8)gBattleMap[9];
    xmax = cx + r;
    if (xmax > (s8)gBattleMap[10] - 1)
        xmax = (s8)gBattleMap[10] - 1;
    ymax = cy + r;
    if (ymax > (s8)gBattleMap[11] - 1)
        ymax = (s8)gBattleMap[11] - 1;
    map = gBattleMap;
    for (y = ymin; y <= ymax; y++) {
        rowOffset = (s8)y << 6;
        row = map + rowOffset;
        for (x = xmin; x <= xmax; x++) {
            t = ((s8)x + rowOffset) * 2;
            cell = map;
            cell += t;
            if (*(s16 *)(cell + 0x610E) < 0)
                continue;
            list = row + (s8)x;
            if (*(s8 *)(list + 0xE18E))
                continue;
            if (Map_IsAiTerrainBlocked((s8)x, (s8)y))
                continue;
            if (list[0xD])
                continue;
            entry = MapObjEvent_Find(gMapObjEventList, (s8)x, (s8)y, 7);
            if (!entry || !entry[5])
                continue;
            {
                void *iid = Item_GetByIid(lbl_80272DB0 + 0xCE);
                if (entry[4] == *(u16 *)((u8 *)iid + 0xE))
                    continue;
            }
            candidate = MapObjEvent_Find(gMapObjEventList, (s8)(s16)x, (s8)(s16)y, 7);
            pred.vtable = lbl_80284E20;
            pred.vtable = lbl_8028E6B8;
            pred.callback = callback;
            fn_8002F728(gTargetList);
            Map_SelectRangeBuffer(gBattleMap, 6);
            item = Item_Get(candidate[4]);
            iy = candidate[1];
            kind = item[0x1D];
            ix = candidate[0];
            fn_800FDDBC((s8)ix, (s8)iy, kind, (u8)Item_GetMaxRange(item), 6);
            Map_ClipRangeByFacing(gBattleMap, candidate[0], candidate[1], candidate[3]);
            fn_8002C530(&pred, (s8)item[0x1D]);
            list = gTargetList;
            if (*(s32 *)list) {
                result.x = x;
                result.y = y;
                result.item = entry[4];
                for (index = 0; index < *(s32 *)list; index++) {
                    id = M2C_FIELD(TargetList_GetAt(list, index), u8 *, 2);
                    result.unit = id ? gUnits + (id - 1) * 0x280 : 0;
                    if (Battle_EvalTargetScore(self, &result) && result.score > score) {
                        bestX = result.x;
                        score = result.score;
                        bestY = result.y;
                        bestItem = result.item;
                        best = result.unit;
                    }
                }
            }
        }
    }
    if (best)
        fn_800FB96C(ctx[8], (s8)bestX, (s8)bestY, best, best[0x19E], best[0x19F],
                    (s8)bestItem, 0, 0);
    return gAiState[0x21C];
}
#pragma pop
#pragma opt_strength_reduction off
#pragma opt_loop_invariants off
#pragma use_lmw_stmw on
#pragma opt_common_subs off
s32 Unit_IsInMovAttackRange(void *unit, void *target, void **itemSlot) {
    /* True if Manhattan distance to target is within unit mov + item attack range. */
    s32 Abs(s32);
    u8 Item_GetRangeForUnit(void *, void *);
    s8 Unit_GetMov(void *);
    u8 tx;
    u8 ux;
    s32 dy;
    s32 dist;
    u8 itemRange;
    s8 mov;

    tx = M2C_FIELD(target, u8 *, 0x19E);
    ux = M2C_FIELD(unit, u8 *, 0x19E);
    dy = Abs((s8)M2C_FIELD(unit, u8 *, 0x19F) - (s8)M2C_FIELD(target, u8 *, 0x19F));
    dist = Abs((s8)ux - (s8)tx);
    dist = dist + dy;
    if (*itemSlot != NULL) {
        itemRange = (u8)Item_GetRangeForUnit(*itemSlot, unit);
    } else {
        itemRange = 0;
    }
    mov = Unit_GetMov(unit);
    return dist <= (mov + itemRange);
}

#pragma push
#pragma optimization_level 3
u8 fn_800F4E3C(u8 (*filter)(void *), u8 action) {
    extern u8 gAiState[], gUiContext[], gBattleMap[], gUnits[];
    void Map_FillLayer(void *,s32,s32);
    void Map_SelectRangeBuffer(void *,s32);
    void **Unit_GetHeldItemSlot(void *,s32);
    u8 fn_8009339C(void *,void *);
    void Allegiance_FillMask(s32,u8 *);
    s32 Abs(s32);
    u8 Item_GetRangeForUnit(void *,void *);
    s8 Unit_GetMov(void *);
    void fn_800FDDBC(s32,s32,s32,s32,s32);
    u8 fn_800F7F00(void *,void *);
    void fn_800951D0(void *,u16);
    void fn_800FB96C(u8,s8,s8,void *,u8,u8,s8,s32,s32);
    u8 flags[8];
    struct { u8 x,y; u16 item; u8 *unit; s32 score; } result;
    s32 score;
    u8 *best;
    u8 *ctx=gUiContext;
    u8 *map;
    u8 *self;
    u8 *unit;
    void **slot;
    u8 bx,by;
    u16 item;
    s32 i,j;
    s32 a=(s32)gBattleMap;
    u8 b, outside, cx, cy, maxRange, minRange;
    s32 range;
    s32 dy, dist;
    score=(s32)0x80000000; best=0;
    ctx[8]=action; self=*(u8 **)ctx;
    if ((gAiState[1]&2) || (*(u32 *)(self+0x254)&0x03000000)) {
        Map_FillLayer((void *)a,5,-1); Map_SelectRangeBuffer((void *)a,5);
        (*(u16 **)(a+0x14190))[(s8)self[0x19e]+((s8)self[0x19f]<<6)]=0;
    } else Map_BuildUnitMoveRange(self,5,-1);
    map=gBattleMap;
    for(i=0;i<4;i++) {
        slot=Unit_GetHeldItemSlot(self,i);
        if(!*slot)break;
        if(!fn_8009339C(self,*slot))continue;
        result.item=i;
        Allegiance_FillMask(1,flags);
        for(j=1;j<=159;j++) {
            unit=(u8)j ? gUnits+((u8)j-1)*0x280 : 0;
            if(!*(u32 *)(unit+0x188))continue;
            if(!flags[(*(u8 **)(unit+0x190))[8]])continue;
            if(!filter(unit))continue;
            a=unit[0x19e]; b=self[0x19e];
            dy=Abs((s8)self[0x19f]-(s8)unit[0x19f]);
            dist=Abs((s8)b-(s8)a);
            a=dist+dy;
            range=*slot ? Item_GetRangeForUnit(*slot,self) : 0;
            dist=(s8)Unit_GetMov(self);
            if(a>dist+(u8)range)continue;
            if(*(u32 *)(unit+0x1a0)&0x010000dc)continue;
            outside=0; cx=unit[0x19e]; cy=unit[0x19f];
            if((s8)cx<(s8)map[8] || (s8)map[10]-1<(s8)cx ||
               (s8)cy<(s8)map[9] || (s8)map[11]-1<(s8)cy)outside=1;
            if(outside)continue;
            maxRange=*slot ? Item_GetRangeForUnit(*slot,unit) : 0;
            minRange=*slot ? ((u8 *)*slot)[0x1d] : 0;
            cx=unit[0x19e]; cy=unit[0x19f];
            fn_800FDDBC((s8)cx,(s8)cy,minRange,maxRange,6);
            result.unit=unit;
            if(fn_800F7F00(self,&result) && result.score>score) {
                bx=result.x; score=result.score; by=result.y; item=result.item; best=result.unit;
            }
        }
    }
    if(best) {
        if(item<4)fn_800951D0(self,item);
        fn_800FB96C(ctx[8],(s8)bx,(s8)by,best,best[0x19e],best[0x19f],(s8)item,0,0);
    }
    return gAiState[0x21c];
}
#pragma pop
u8 fn_800F51A0(u8 (*filter)(void *), u8 action) {
    extern u8 gAiState[], gUiContext[], gBattleMap[], gUnits[];
    void Map_FillLayer(void *,s32,s32);
    void Map_SelectRangeBuffer(void *,s32);
    void **Unit_GetHeldItemSlot(void *,s32);
    u8 fn_8009339C(void *,void *);
    void Allegiance_FillMask(s32,u8 *);
    s32 Abs(s32);
    u8 Item_GetRangeForUnit(void *,void *);
    s8 Unit_GetMov(void *);
    void fn_800FDDBC(s8,s8,u8,u8,s32);
    u8 fn_800F805C(void *,void *);
    void fn_800951D0(void *,u16);
    void fn_800FB96C(u8,s8,s8,void *,u8,u8,s8,s32,s32);
    u8 flags[8];
    struct { u8 x,y; u16 item; u8 *unit; s32 score; } result;
    s32 dy;
    u8 sx, range, outside, maxRange, minRange;
    u8 *self;
    u8 *unit;
    s32 dist;
    u8 cx, cy;
    u8 *ctx;
    u8 *map;
    void **slot;
    s32 score;
    u8 *best;
    u8 bx,by;
    u16 item;
    s32 i,j;
    ctx=gUiContext; map=gBattleMap; score=(s32)0x80000000; best=0;
    ctx[8]=action; self=*(u8 **)ctx;
    if ((gAiState[1]&2) || (*(u32 *)(self+0x254)&0x03000000)) {
        Map_FillLayer(map,5,-1); Map_SelectRangeBuffer(map,5);
        (*(u16 **)(map+0x14190))[(s8)self[0x19e]+((s8)self[0x19f]<<6)]=0;
    } else Map_BuildUnitMoveRange(self,5,-1);
    map=gBattleMap;
    for(i=0;i<4;i++) {
        slot=Unit_GetHeldItemSlot(self,i);
        if(!*slot)break;
        if(!fn_8009339C(self,*slot))continue;
        result.item=i;
        Allegiance_FillMask(1,flags);
        for(j=1;j<=159;j++) {
            unit=(u8)j ? gUnits+((u8)j-1)*0x280 : 0;
            if(!*(u32 *)(unit+0x188))continue;
            if(!flags[(*(u8 **)(unit+0x190))[8]])continue;
            if(!filter(unit))continue;
            cx=unit[0x19e]; sx=self[0x19e];
            dy=Abs((s8)self[0x19f]-(s8)unit[0x19f]);
            dist=Abs((s8)sx-(s8)cx)+dy;
            range=*slot ? Item_GetRangeForUnit(*slot,self) : 0;
            if(dist>(s8)Unit_GetMov(self)+(u8)range)continue;
            if(*(u32 *)(unit+0x1a0)&0x010000dc)continue;
            cx=unit[0x19e]; cy=unit[0x19f]; outside=0;
            if((s8)cx<(s8)map[8] || (s8)map[10]-1<(s8)cx ||
               (s8)cy<(s8)map[9] || (s8)map[11]-1<(s8)cy)outside=1;
            if(outside)continue;
            maxRange=*slot ? Item_GetRangeForUnit(*slot,unit) : 0;
            minRange=*slot ? ((u8 *)*slot)[0x1d] : 0;
            fn_800FDDBC((s8)unit[0x19e],(s8)unit[0x19f],minRange,maxRange,6);
            result.unit=unit;
            if(fn_800F805C(self,&result) && result.score>score) {
                bx=result.x; score=result.score; by=result.y; item=result.item; best=result.unit;
            }
        }
    }
    if(best) {
        if(item<4)fn_800951D0(self,item);
        fn_800FB96C(ctx[8],(s8)bx,(s8)by,best,best[0x19e],best[0x19f],(s8)item,0,0);
    }
    return gAiState[0x21c];
}

#pragma use_lmw_stmw reset
#pragma opt_common_subs on
#pragma opt_loop_invariants reset
#pragma opt_strength_reduction reset

#pragma use_lmw_stmw on
u8 Ai_TryAttackAction(u8 (*arg0)(void *), u8 arg1) {
    extern u8 gAiState[];
    extern u8 gUiContext[];
    extern u8 gBattleMap[];
    extern u8 gUnits[];
    extern char lbl_80272DB0[];
    int Abs(int);
    void Map_FillLayer(void *, s32, s32);
    void Map_SelectRangeBuffer(void *, s32);
    void Map_BuildUnitMoveRange(void *, s32, s32);
    void **Unit_GetHeldItemSlot(void *, s32);
    u8 fn_8009339C(void *);
    void Allegiance_FillMask(s32, u8 *);
    s8 Unit_GetMov(void *);
    u8 Item_GetRangeForUnit(void *, void *);
    void fn_800FDDBC(s32, s32, u8, u8, s32);
    u8 fn_800F81B8(void *, void *);
    u8 Status_Test(void *, s32);
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

    ctx = gUiContext;
    map0 = (s32)gBattleMap;
    score = (s32)0x80000000;
    best = 0;
    ctx[8] = arg1;
    self = *(u8 **)ctx;
    if ((gAiState[1] & 2) || (*(u32 *)(self + 0x254) & 0x03000000)) {
        Map_FillLayer((void *)map0, 5, -1);
        Map_SelectRangeBuffer((void *)map0, 5);
        (*(u16 **)(map0 + 0x14190))[(s8)self[0x19E] + ((s8)self[0x19F] << 6)] = 0;
    } else {
        Map_BuildUnitMoveRange(self, 5, -1);
    }
    map = gBattleMap;
    for (i = 0; i < 4; i++) {
        list = Unit_GetHeldItemSlot(self, i);
        if (*list == 0) {
            break;
        }
        if (!fn_8009339C(self)) {
            continue;
        }
        result.item = (u16)i;
        Allegiance_FillMask(1, flags);
        for (j = 1; j <= 0x9F; j++) {
            unit = (u8)j ? gUnits + ((u8)j - 1) * 0x280 : 0;
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
            dy = Abs((s8)self[0x19F] - (s8)unit[0x19F]);
            dist = Abs((s8)b - (s8)a) + dy;
            range = *list ? (u8)Item_GetRangeForUnit(*list, self) : 0;
            if (dist > (s8)Unit_GetMov(self) + range) {
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
            r = *list ? (u8)Item_GetRangeForUnit(*list, unit) : 0;
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
    if (Status_Test(self + 0x1BC, 0x43)) {
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
    return gAiState[0x21C];
}
void fn_800F58DC(void *arg0, void *arg1) {
    extern u16 gTargetList[2008];
    if (((u8 (**)(void *))arg0)[1](arg1) != 0) {
        fn_8002F6E8(&gTargetList, *(u8 *)((u8 *)arg1 + 0x19E), *(u8 *)((u8 *)arg1 + 0x19F), *(u8 *)((u8 *)arg1 + 0x198), 0);
    }
}

void fn_800F5938(void *arg0, s32 arg1) {
    u8 *fn_8002F680(void *, u8, u8);
    s32 fn_8002F6E8(void *, u8, u8, s32, s32);
    extern u8 gTargetList[];
    u8 *p;
    u8 count;
    u8 y;
    u8 x;

    if (M2C_FIELD(arg0, u8 (**)(s32), 4)(arg1)) {
        p = fn_8002F680(gTargetList, M2C_FIELD(arg0, u8 *, 8), M2C_FIELD(arg0, u8 *, 9));
        if (p == NULL) {
            fn_8002F6E8(gTargetList, M2C_FIELD(arg0, u8 *, 8), M2C_FIELD(arg0, u8 *, 9), 0, 1);
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
    extern u8 gBattleMap[];
    extern u8 gUnits[];
    struct Obj {
        virtual void v0(void *) = 0;
    };
    u8 temp;
    void *unit;

    *((u8 *)arg0 + 8) = arg1;
    *((u8 *)arg0 + 9) = arg2;
    temp = gBattleMap[arg1 + (arg2 << 6) + 0xD];
    if (temp != 0) {
        unit = (temp != 0) ? &gUnits[(temp - 1) * 0x280] : NULL;
        ((Obj *)arg0)->v0(unit);
    }
    fn_8002C6F4(arg0, arg1, arg2);
}
#pragma cplusplus reset

void fn_800F5A8C(void *arg0, void *arg1) {
    u8 Allegiance_Compare(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, s32);
    extern u8 gUiContext[];
    extern u8 gTargetList[];

    if (Allegiance_Compare(*(s32 *)((u8 *)*(void **)gUiContext + 0x190),
                    *(s32 *)((u8 *)arg1 + 0x190)) != 1 ||
        ((u8 (**)(void *))arg0)[1](arg1) != 0) {
        fn_8002F6E8(gTargetList,
                    *(u8 *)((u8 *)arg1 + 0x19E),
                    *(u8 *)((u8 *)arg1 + 0x19F),
                    *(u8 *)((u8 *)arg1 + 0x198),
                    0);
    }
}

#pragma optimization_level 3
void fn_800F5B14(s32 arg0, void *arg1) {
    void *Res_GetByName(void *);
    s32 fn_800F6F94(void *, s32);
    s8 Unit_GetMaxHp(void *);
    s8 fn_800386E0(void *);
    s32 fn_800F6B10(void *, s32);
    u32 fn_800FCF48(u8, u8);
    extern u32 gBattle[];
    extern u8 lbl_80272F44[], gBattleMap[], gUnits[], gBattleState[];
    void *out = arg1;
    u8 *cfg;
    u8 *unit;
    s32 total;
    u8 *p;
    s32 score;
    u8 *battle;
    u8 *map;
    f32 maxhp;
    s32 remaining;
    s32 percent;
    s32 x, y;
    u8 outside, id;
    u8 *other;
    u32 flags;
    s32 bonus;
    f32 amount;
    u8 saved_hp;

    cfg = Res_GetByName(*(void **)((u8 *)arg0 + 0x244));
    score = fn_800F6F94(cfg, 1);
    unit = (u8 *)gBattle + 0x2E0;
    maxhp = (f32)Unit_GetMaxHp(unit);
    remaining = Unit_GetMaxHp(unit) - (s8)unit[0x1A8];
    p = lbl_80272F44;
    battle = (u8 *)gBattle;
    map = gBattleMap;
    total = 0;
    percent = (s32)((10.0f * (f32)remaining) / maxhp);
    score += (s32)(0.03125f * ((f32)percent * (f32)(s8)cfg[6]));
    for (; (s32)p[0] != 0x7F; p += 3) {
        outside = 0;
        x = (s16)((s8)p[0] + (s8)battle[0x19E]);
        y = (s16)((s8)p[1] + (s8)battle[0x19F]);
        if (x < (s8)map[8] || (s8)map[10] - 1 < x || y < (s8)map[9] || (s8)map[11] - 1 < y)
            outside = 1;
        if (outside == 0) {
            id = gBattleMap[(s8)x + ((s8)y << 6) + 0xD];
            if (id != 0) {
                if (id != 0)
                    other = gUnits + (id - 1) * 0x280;
                else
                    other = 0;
                if (relation_is_one(*(void **)(*(u8 **)(battle + 0x280) + 0x190),
                                    *(void **)(other + 0x190)) == 0)
                    total += (s8)p[2];
            }
        }
    }
    flags = *(u16 *)(*(u8 **)(*(u8 **)(unit + 0x280) + 0x18C) + 0x3A);
    score += (s32)(0.03125f * ((f32)total * (f32)(s8)cfg[7]));
    bonus = 0;
    if (flags & 1)
        bonus = (s8)cfg[0xE];
    if (flags & 2)
        bonus += (s8)cfg[0xF];
    if (flags & 4)
        bonus += (s8)cfg[0x10];
    if (flags & 8)
        bonus += (s8)cfg[0x11];
    if (flags & 0x10)
        bonus += (s8)cfg[0x12];
    if (flags & 0x20)
        bonus += (s8)cfg[0x13];
    if (flags & 0x40)
        bonus += (s8)cfg[0x14];
    if (flags & 0x80)
        bonus += (s8)cfg[0x15];
    if (flags & 0x100)
        bonus += (s8)cfg[0x16];
    if (flags & 0x400)
        bonus += (s8)cfg[0x17];
    amount = (f32)*(s16 *)(gBattleState + 0x12);
    score += (s32)(0.03125f * ((f32)bonus * (f32)(s8)cfg[8]));
    score += (s32)(0.03125f * (amount * (f32)(s8)cfg[9]));
    score += (s32)(0.03125f * ((f32)fn_800386E0(unit) * (f32)(s8)cfg[10]));
    score -= fn_800F6B10(cfg, 1);
    score -= (s32)(0.03125f * ((f32)((fn_800FCF48(((u8 *)gBattle)[0x19E], ((u8 *)gBattle)[0x19F]) >> 4) & 0xFFF) * (f32)(s8)cfg[0xC]));
    saved_hp = ((u8 *)gBattle)[0x1A8];
    maxhp = (f32)Unit_GetMaxHp(gBattle);
    remaining = Unit_GetMaxHp(gBattle) - (s8)saved_hp;
    percent = (s32)((10.0f * (f32)remaining) / maxhp);
    score -= (s32)(0.03125f * ((f32)percent * (f32)(s8)cfg[0xD]));
    *(s32 *)((u8 *)out + 8) = score;
}
#pragma optimization_level reset

#pragma cplusplus off
#pragma use_lmw_stmw on
void fn_800F60D4(void *arg0,void *arg1){
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

#pragma optimization_level 3
void Battle_ScoreTarget(s32 arg0, void *arg1) {
    void *Res_GetByName(void *);
    s32 fn_800F6F94(void *, s32);
    s8 Unit_GetMaxHp(void *);
    s8 fn_800386E0(void *);
    s32 fn_800F6B10(void *, s32);
    u32 fn_800FCF48(u8, u8);
    extern u32 gBattle[];
    extern u8 lbl_80272F44[], gBattleMap[], gUnits[], gBattleState[];
    void *out = arg1;
    u8 *cfg;
    u8 *unit;
    s32 total;
    u8 *p;
    s32 score;
    u8 *battle;
    u8 *map;
    f32 maxhp;
    s32 remaining;
    s32 percent;
    s32 x, y;
    u8 outside, id;
    u8 *other;
    u32 flags;
    s32 bonus;
    f32 amount;
    u8 saved_hp;

    cfg = Res_GetByName(*(void **)((u8 *)arg0 + 0x244));
    score = fn_800F6F94(cfg, 1);
    unit = (u8 *)gBattle + 0x2E0;
    maxhp = (f32)Unit_GetMaxHp(unit);
    remaining = Unit_GetMaxHp(unit) - (s8)unit[0x1A8];
    p = lbl_80272F44;
    battle = (u8 *)gBattle;
    map = gBattleMap;
    total = 0;
    percent = (s32)((10.0f * (f32)remaining) / maxhp);
    score += (s32)(0.03125f * ((f32)percent * (f32)(s8)cfg[6]));
    for (; (s32)p[0] != 0x7F; p += 3) {
        outside = 0;
        x = (s16)((s8)p[0] + (s8)battle[0x19E]);
        y = (s16)((s8)p[1] + (s8)battle[0x19F]);
        if (x < (s8)map[8] || (s8)map[10] - 1 < x || y < (s8)map[9] || (s8)map[11] - 1 < y)
            outside = 1;
        if (outside == 0) {
            id = gBattleMap[(s8)x + ((s8)y << 6) + 0xD];
            if (id != 0) {
                if (id != 0)
                    other = gUnits + (id - 1) * 0x280;
                else
                    other = 0;
                if (relation_is_one(*(void **)(*(u8 **)(battle + 0x280) + 0x190),
                                    *(void **)(other + 0x190)) == 0)
                    total += (s8)p[2];
            }
        }
    }
    flags = *(u16 *)(*(u8 **)(*(u8 **)(unit + 0x280) + 0x18C) + 0x3A);
    score += (s32)(0.03125f * ((f32)total * (f32)(s8)cfg[7]));
    bonus = 0;
    if (flags & 1)
        bonus = (s8)cfg[0xE];
    if (flags & 2)
        bonus += (s8)cfg[0xF];
    if (flags & 4)
        bonus += (s8)cfg[0x10];
    if (flags & 8)
        bonus += (s8)cfg[0x11];
    if (flags & 0x10)
        bonus += (s8)cfg[0x12];
    if (flags & 0x20)
        bonus += (s8)cfg[0x13];
    if (flags & 0x40)
        bonus += (s8)cfg[0x14];
    if (flags & 0x80)
        bonus += (s8)cfg[0x15];
    if (flags & 0x100)
        bonus += (s8)cfg[0x16];
    if (flags & 0x400)
        bonus += (s8)cfg[0x17];
    amount = (f32)*(s16 *)(gBattleState + 0x12);
    score += (s32)(0.03125f * ((f32)bonus * (f32)(s8)cfg[8]));
    score += (s32)(0.03125f * (amount * (f32)(s8)cfg[9]));
    score += (s32)(0.03125f * ((f32)fn_800386E0(unit) * (f32)(s8)cfg[10]));
    score -= fn_800F6B10(cfg, 1);
    score -= (s32)(0.03125f * ((f32)((fn_800FCF48(((u8 *)gBattle)[0x19E], ((u8 *)gBattle)[0x19F]) >> 4) & 0xFFF) * (f32)(s8)cfg[0xC]));
    saved_hp = ((u8 *)gBattle)[0x1A8];
    maxhp = (f32)Unit_GetMaxHp(gBattle);
    remaining = Unit_GetMaxHp(gBattle) - (s8)saved_hp;
    percent = (s32)((10.0f * (f32)remaining) / maxhp);
    score -= (s32)(0.03125f * ((f32)percent * (f32)(s8)cfg[0xD]));
    *(s32 *)((u8 *)out + 8) = score;
}
#pragma push
#pragma optimization_level 4
#pragma fp_contract off
#pragma use_lmw_stmw on
s32 fn_800F6B10(void *arg0, u8 arg1) {
void **BattleUnit_GetWeaponSlot(void *);
void *Item_GetFlagsPtr(void *);
s32 Abs(s32);
u8 Item_GetRangeForUnit(void *, void *);
f32 fn_800F738C(s32, f32);
s8 fn_800F8308(void *);
s16 fn_800F8310(void *);
s16 fn_800F8318(void *);
s16 fn_800F8320(void *);
u64 fn_800F8328(void *, u64);
s16 fn_800F833C(void *);
void *fn_800F8344(void *);
void *fn_800F834C(void *);
f64 fmod(f64, f64);
extern u32 gBattle[];
extern s32 lbl_80366E6C;
extern f32 lbl_8036A06C, lbl_8036A078, lbl_8036A080, lbl_8036A090;
extern f64 lbl_8036A088;

    u8 *unit2;
    u8 *base;
    void **list;
    void *wpn;
    s32 dy;
    s32 dist;
    f32 temp_f0;
    u8 hi;
    u8 in_range;
    s32 flag;
    f32 var_f1;
    f32 var_f1_2;
    u8 lo;
    s32 sp8;
    s32 *var_r3;
    void *temp_r30;
    void *temp_r31;
    s16 t_y;
    s32 flag2;
    s32 var_r25;
    register f32 temp_f1;
    f32 temp_f0_2;
    u64 temp_ret;
    u8 flag_u8;
    u8 ux, uy;
    void *temp_r3;
    register s32 var_r31;
    u8 bx, by;

    base = (u8 *)gBattle;
    unit2 = base + 0x2E0;
    var_r31 = 0;
    list = BattleUnit_GetWeaponSlot(unit2);
    uy = unit2[0x19F];
    ux = unit2[0x19E];
    by = ((u8 *)gBattle)[0x19F];
    bx = ((u8 *)gBattle)[0x19E];
    dy = Abs((s8)by - (s8)uy);
    dist = Abs((s8)bx - (s8)ux);
    wpn = *list;
    list = (void **)(dist + dy);
    if (wpn != 0) {
        lo = ((u8 *)wpn)[0x1D];
    } else {
        lo = 0;
    }
    lo = (u8)lo;
    if (wpn != 0) {
        hi = (u8)Item_GetRangeForUnit(wpn, base);
    } else {
        hi = 0;
    }
    hi = (u8)hi;
    in_range = 0;
    if ((s32)lo <= (s32)list && (s32)list <= (s32)hi) {
        in_range = 1;
    }
    if (in_range != 0) {
        if (*BattleUnit_GetWeaponSlot(unit2) != 0) {
            register flag = (s32)(*(s16 *)(base + 0x29C) + 4) <= *(s16 *)(unit2 + 0x29C);
            temp_r3 = Item_GetFlagsPtr(BattleUnit_GetWeaponSlot(unit2));
            flag_u8 = flag | (u8)((*(u64 *)temp_r3 & 0x20ULL) != 0);
            var_r31 = *(s16 *)(unit2 + 0x298) - *(s16 *)(base + 0x29A);
            if (var_r31 < 0) {
                var_r31 = 0;
            }
            var_f1 = lbl_8036A078 * (f32)*(s16 *)(unit2 + 0x2A2);
            if ((unsigned short)flag_u8 != 0) {
                temp_f0 = lbl_8036A07C - var_f1;
                var_f1_2 = lbl_8036A07C - (temp_f0 * temp_f0);
                if (var_f1_2 > lbl_8036A07C) {
                    var_f1_2 = lbl_8036A07C;
                }
                if (var_f1_2 < lbl_8036A080) {
                    var_f1_2 = lbl_8036A080;
                }
                var_r31 = (s32)(lbl_8036A090 * (f32)var_r31 * (f32)fmod(var_f1_2, lbl_8036A088));
            } else {
                if (var_f1 > lbl_8036A07C) {
                    var_f1 = lbl_8036A07C;
                }
                if (var_f1 < lbl_8036A080) {
                    var_f1 = lbl_8036A080;
                }
                var_r31 = (s32)((f32)var_r31 * (f32)fmod(var_f1, lbl_8036A088));
            }
        }
    }
    if (arg1 != 0) {
        var_r31 = (s32)(lbl_8036A06C * ((f32)var_r31 * (f32)*(s8 *)((u8 *)arg0 + 0xB)));
        if (var_r31 <= 0) {
            temp_r30 = fn_800F834C(gBattle);
            temp_r31 = fn_800F8344(gBattle);
            arg0 = (void *)((s16)fn_800F833C(temp_r31) + 4);
            flag2 = (s16)fn_800F833C(temp_r30) >= (s32)arg0;
            temp_ret = fn_800F8328(Item_GetFlagsPtr(BattleUnit_GetWeaponSlot(temp_r30)), 0x20ULL);
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
            if (lbl_80366E6C < var_r25) {
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
#pragma pop
#pragma push
#pragma optimization_level 4
s32 fn_800F6F94(const s8 *arg0, u8 arg1) {
#pragma fp_contract off
#pragma use_lmw_stmw on
void *BattleUnit_GetWeaponSlot(void *);
void *Item_GetFlagsPtr(void *);
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
f64 fmod(f64,f64);
extern u32 gBattle[];
extern s32 lbl_80366E68;
extern f32 lbl_8036A06C,lbl_8036A078,lbl_8036A080,lbl_8036A090;
extern f64 lbl_8036A070,lbl_8036A098;

    u8 *base;
    s32 sp8;
    s32 var_r27;
    void *temp_r30;
    void *temp_r29_2;
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
    register s32 var_r30;
    u64 temp_ret;
    u8 temp_r4;
    void *temp_r3;

    base = (u8 *)gBattle;
    temp_r29 = *(s16 *)(base + 0x29C) >= (s32)(*(s16 *)(base + 0x57C) + 4);
    temp_r3 = Item_GetFlagsPtr(BattleUnit_GetWeaponSlot(base));
    temp_r4 = temp_r29 | (u8)((*(u64 *)temp_r3 & 0x20ULL) != 0);
    var_r30 = *(s16 *)((u8 *)gBattle + 0x298) - *(s16 *)(base + 0x57A);
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
        var_r30 = (s32) (lbl_8036A090 * (f32) var_r30 * (f32) fmod(var_f1_2, lbl_8036A098));
    } else {
        if (var_f1 > lbl_8036A07C) {
            var_f1 = lbl_8036A07C;
        }
        if (var_f1 < lbl_8036A080) {
            var_f1 = lbl_8036A080;
        }
        var_r30 = (s32) ((f32) var_r30 * (f32) fmod(var_f1, lbl_8036A098));
    }
    if (arg1 != 0) {
        var_r30 = (s32) (lbl_8036A06C * ((f32) var_r30 * (f32) arg0[5]));
        if (var_r30 <= 0) {
            temp_r29_2 = fn_800F834C(gBattle);
            temp_r30 = fn_800F8344(gBattle);
            var_r27 = 0;
            if (fn_800F73EC(temp_r29_2, temp_r30, BattleUnit_GetWeaponSlot(temp_r30)) != 0) {
                if (fn_800F8350(BattleUnit_GetWeaponSlot(temp_r30)) != 0) {
                    temp_r27 = fn_800F833C(temp_r30);
                    temp_r27_2 = temp_r27 >= (s32)(fn_800F833C(temp_r29_2) + 4);
                    temp_ret = fn_800F8328(Item_GetFlagsPtr(BattleUnit_GetWeaponSlot(temp_r30)), 0x20ULL);
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
            var_r3 = &sp8;
            sp8 = var_r27;
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
#pragma pop
f32 fn_800F738C(u8 arg0, f32 farg0) {
    f64 fmod(f64, f64);
    extern f32 lbl_8036A080;
    extern f64 lbl_8036A088;
    extern f64 lbl_8036A098;

    if (farg0 > lbl_8036A07C) {
        farg0 = lbl_8036A07C;
    }
    if (farg0 < lbl_8036A080) {
        farg0 = lbl_8036A080;
    }
    if (arg0 != 0) {
        return (f32)fmod((f64)farg0, lbl_8036A098);
    }
    return (f32)fmod((f64)farg0, lbl_8036A088);
}

s32 fn_800F73EC(void *arg0, void *arg1, void **arg2) {
    s32 Abs(s32);
    u8 Item_GetRangeForUnit(void *, void *);
    u8 tx;
    u8 ux;
    s32 dy;
    s32 dx;
    s32 dist;
    s32 tempMin;
    u8 minRange;
    s32 maxRange;

    tx = M2C_FIELD(arg1, u8 *, 0x19E);
    ux = M2C_FIELD(arg0, u8 *, 0x19E);
    dy = Abs((s8)M2C_FIELD(arg0, u8 *, 0x19F) - (s8)M2C_FIELD(arg1, u8 *, 0x19F));
    dx = Abs((s8)ux - (s8)tx);
    dist = dx + dy;
    if (*arg2 != NULL) {
        tempMin = M2C_FIELD(*arg2, u8 *, 0x1D);
    } else {
        tempMin = 0;
    }
    minRange = (u8)tempMin;
    {
        s32 t;
        if (*arg2 != NULL) {
            t = Item_GetRangeForUnit(*arg2, arg0);
        } else {
            t = 0;
        }
        maxRange = (u8)t;
    }
    return ((s32)minRange <= dist && dist <= maxRange);
}

#pragma scheduling reset
s32 fn_800F74C0(s32 attacker, void *target) {
    void Item_Init(void *);
    void Item_Destroy(void *, s32);
    void *Item_Get(u16);
    void UnitRef_Set(void *, void *);
    u8 Unit_GetActiveItemSlot(void *);
    void Battle_SetupFromParams(void *, void *, void *);
    void fn_801A6F34(void *, u8);
    void fn_800F5B14(s32, void *);
    extern u8 gUiContext[];
    extern u32 gBattle[];
    typedef struct Param {
        void *p;
        u8 b4[4];
        s32 x8;
        u8 bC[4];
    } Param;
    extern Param lbl_80272F34;
    extern Param lbl_80272F24;
    u8 item[8];
    Param atk;
    Param def;
    void *unit;

    Item_Init(item);
    UnitRef_Set(item, Item_Get(*(u16 *)((u8 *)target + 2)));
    def = lbl_80272F34;
    unit = *(void **)((u8 *)target + 4);
    def.p = unit;
    def.b4[0] = ((u8 *)unit)[0x19E];
    def.b4[1] = ((u8 *)unit)[0x19F];
    def.b4[2] = Unit_GetActiveItemSlot(unit);
    atk = lbl_80272F24;
    atk.p = (void *)attacker;
    atk.b4[0] = ((u8 *)target)[0];
    atk.b4[1] = ((u8 *)target)[1];
    atk.x8 = (s32)item;
    Battle_SetupFromParams(gBattle, &atk, &def);
    fn_801A6F34(gBattle, gUiContext[8] == 0x15 ? (u8)0x15 : 0xF);
    fn_800F5B14(attacker, target);
    Item_Destroy(item, -1);
    return 1;
}

s32 fn_800F75F8(s32 attacker, void *target) {
void *MapObjEvent_Find(void *,s8,s8,s32);
s32 fn_8010FA2C(void *);
u8 Unit_GetActiveItemSlot(void *);
void Battle_SetupFromParams(void *,void *,void *);
void fn_801A6F34(void *,u8);
void fn_800F60D4(s32,void *);
extern u8 gMapObjEventList[],gUiContext[]; extern u32 gBattle[];
typedef struct Param { void *p; u8 b4[4]; s32 x8; u8 bC[4]; } Param;
extern Param lbl_80272F14,lbl_80272F04;
Param atk,def;
void *event; void *unit;
event=MapObjEvent_Find(gMapObjEventList,(s8)((u8*)target)[0],(s8)((u8*)target)[1],7);
def=lbl_80272F14;
unit=*(void**)((u8*)target+4);
def.p=unit; def.b4[0]=((u8*)unit)[0x19e]; def.b4[1]=((u8*)unit)[0x19f]; def.b4[2]=Unit_GetActiveItemSlot(unit);
atk=lbl_80272F04; atk.p=(void*)attacker; atk.b4[0]=((u8*)target)[0]; atk.b4[1]=((u8*)target)[1]; atk.x8=fn_8010FA2C(event);
Battle_SetupFromParams(gBattle,&atk,&def);
fn_801A6F34(gBattle,gUiContext[8]==0x15?(u8)0x15:0xf);
fn_800F60D4(attacker,target);
return 1;
}

#pragma cplusplus on
#pragma auto_inline off
extern "C" u8 Unit_GetActiveItemSlot(void *);
extern "C" void Battle_SetupFromParams(void *, void *, void *);
extern "C" void fn_801A6F34(void *, u8);
extern "C" void Battle_ScoreTarget(s32, void *);
typedef struct Param {
    void *p;
    u8 b4[4];
    s32 x8;
    u8 bC[4];
} Param;
static const Param sBattleParamAtkInit = {0, {0, 0, 0, 1}, 0, {1}};
extern "C" s32 Battle_EvalTarget(s32 attacker, void *target) {
    /* Set up gBattle for attacker vs target, then write a combat score into target. */
    extern u8 gUiContext[];
    Param atk;
    Param def = {0, {0, 0, 0, 1}, 0, {1}};

    def.p = M2C_FIELD(target, void **, 4);
    def.b4[0] = M2C_FIELD(def.p, u8 *, 0x19E);
    def.b4[1] = M2C_FIELD(def.p, u8 *, 0x19F);
    def.b4[2] = Unit_GetActiveItemSlot(def.p);
    atk = sBattleParamAtkInit;
    atk.p = (void *)attacker;
    atk.b4[0] = M2C_FIELD(target, u8 *, 0);
    atk.b4[1] = M2C_FIELD(target, u8 *, 1);
    atk.b4[2] = M2C_FIELD(target, u16 *, 2);
    Battle_SetupFromParams(gBattle, &atk, &def);
    fn_801A6F34(gBattle, gUiContext[8]);
    Battle_ScoreTarget(attacker, target);
          return 1;
  }

  #pragma auto_inline reset
  #pragma cplusplus reset

#pragma push
#pragma optimization_level 3
static inline u8 Map_CompareNeighborAllegiance(void *unit, void *neighbor)
{
    u8 Allegiance_Compare(s32, s32);
    return Allegiance_Compare(*(s32 *)((u8 *)unit + 0x190), *(s32 *)((u8 *)neighbor + 0x190));
}

#pragma push
#pragma optimization_level 4
s32 fn_800F7838(void *arg0, s32 arg1, s32 arg2) {
    u8 Allegiance_Compare(s32, s32);
    extern u8 lbl_80272E98[];
    extern u8 gBattleMap[];
    extern u8 gUnits[];
    s32 baseY = arg2;
    s32 baseX = arg1;
    s32 score = 0;
    s8 *p = (s8 *)lbl_80272E98;
    u8 outside;
    u8 id;
    s16 x, y;
    void *unit;
    s32 a, b;

    while (*p != 0x7F) {
        x = baseX + p[0];
        outside = 0;
        y = baseY + p[1];
        if (x < (s8)gBattleMap[8] || (s8)gBattleMap[10] - 1 < x || y < (s8)gBattleMap[9] || (s8)gBattleMap[11] - 1 < y)
            outside = 1;
        if (!outside) {
            id = gBattleMap[(s8)x + ((s8)y << 6) + 0xD];
            if (id) {
                if (id)
                    unit = gUnits + (id - 1) * 0x280;
                else
                    unit = 0;
                if ((u8)(Map_CompareNeighborAllegiance(arg0, unit) == 1) == 1)
                    score -= p[2];
                else
                    score += p[2];
            }
        }
        p += 3;
    }
    return score;
}
#pragma pop
s32 fn_800F7994(s32 arg0, s8 arg1, s8 arg2) {
    void *Terrain_GetEntry(u8);
    u8 Status_Test(s32, u32);
    extern u8 gBattleMap[];
    void *terrain;
    u8 *tp;
    s32 sum;
    u8 *map = gBattleMap;
    s32 x = arg1;
    s32 y = arg2;
    map += x;
    terrain = Terrain_GetEntry(map[y * 64 + 0x100D]);
    if (Status_Test((s32)((u8 *)arg0 + 0x1BC), 4) != 0) {
        tp = M2C_FIELD(terrain, u8 **, 8);
        sum = (s8)tp[3] + (s8)tp[4];
        sum += (s8)tp[5];
        sum += tp[6];
    } else {
        tp = M2C_FIELD(terrain, u8 **, 8);
        sum = (s8)tp[0] + (s8)tp[1];
        sum += (s8)tp[2];
        sum += tp[6];
    }
    return sum >> 1;
}

#pragma push
#pragma optimization_level 4
#pragma opt_propagation off
#pragma opt_lifetimes off
s32 fn_800F7A60(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 fn_80230BBC(s32);
    void **Unit_GetActiveItemPtr(void *);
    s32 Item_GetRangeForUnit(void *, void *);
    void *Terrain_GetEntry(u8);
    u8 Status_Test(s32, u32);
    u8 Allegiance_Compare(void *, void *);
    u32 fn_800FCF48(s8, s8, void *);
    extern u8 gBattleMap[];
    extern u8 lbl_80272E98[];
    extern u8 gUnits[];
    s32 dist;
    u8 *unit;
    s8 *cur;
    s32 acc;
    s32 sx;
    s32 penalty;
    s32 result;
    void **temp;
    u8 *inner;
    u8 lo;
    u8 hi;
    u8 match;
    void *terrain;
    u8 *tp;
    s32 sum;
    u8 *p6;
    u8 bad;
    s16 y;
    s16 x;
    u8 t;
    u8 *e;

    unit = M2C_FIELD(arg3, u8 **, 4);
    dist = fn_80230BBC((s8) M2C_FIELD(unit, u8 *, 0x19F) - arg2);
    dist = dist + fn_80230BBC((s8) M2C_FIELD(unit, u8 *, 0x19E) - arg1);
    temp = Unit_GetActiveItemPtr(unit);
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
        hi = (u8) Item_GetRangeForUnit(inner, unit);
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
    terrain = Terrain_GetEntry(M2C_FIELD(gBattleMap + sx + ((s8) arg2 << 6), u8 *, 0x100D));
    if (Status_Test((s32) ((u8 *) arg0 + 0x1BC), 4) != 0) {
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
    result = penalty + (sum >> 1);
    while (*cur != 0x7F) {
        x = arg1 + cur[0];
        y = arg2 + cur[1];
        bad = 0;
        if (x < (s8) gBattleMap[8] || (s8) gBattleMap[0xA] - 1 < x || y < (s8) gBattleMap[9] || (s8) gBattleMap[0xB] - 1 < y) {
            bad = 1;
        }
        if (bad == 0) {
            t = M2C_FIELD(gBattleMap + (s8) x + ((s8) y << 6), u8 *, 0xD);
            if (t != 0) {
                e = (t != 0) ? gUnits + (t - 1) * 0x280 : NULL;
                match = Allegiance_Compare(M2C_FIELD(arg0, void **, 0x190), M2C_FIELD(e, void **, 0x190)) == 1;
                if (match == 1) {
                    acc -= cur[2];
                } else {
                    acc += cur[2];
                }
            }
        }
        cur += 3;
    }
    p6 = gBattleMap + (sx + ((s8) arg2 << 6)) * 2;
    result = result + acc;
    result = result + -(M2C_FIELD(p6, s16 *, 0x610E) >> 1);
    result = result - ((fn_800FCF48((s8) arg1, (s8) arg2, p6) >> 4) & 0xFFF);
    return result;
}
#pragma pop
u8 fn_800F7D28(u8 *self,u8 *target) {
extern u8 gBattleMap[];
u8 Map_IsAiTerrainBlocked(s8,s8);
s32 fn_800F7A60(void *, s32, s32, void *);
u8 fn_800F74C0(void *, void *);
s32 sx;
u8 *map=gBattleMap;
s32 row;
u8 *rowp;
s32 best=0x80000000;
s32 y,x;
s32 offset;
s32 score;
u8 occupant;
u8 result;
for(y=*(s8 *)(map+9);y<=(s8)map[11]-1;y++) {
row=(s8)y<<6;
x=*(s8 *)(map+8);
rowp=map+row;
for(;x<=(s8)map[10]-1;x++) {
sx=(s8)x;
offset=((int)sx+row)*2;
if(((s16 *)(map+0x610E))[sx+row]<0) continue;
if(((s8 *)rowp)[sx+0xE18E]) continue;
if(Map_IsAiTerrainBlocked(sx,(s8)y)) continue;
if(!*(u16 *)(map+offset+0xC18E)) continue;
occupant=rowp[sx+13];
if(occupant && occupant!=self[0x198]) continue;
score=fn_800F7A60(self,x,y,target);
if(score>best) { target[0]=x; best=score; target[1]=y; }
}
}
result=0;
if(best!=(s32)0x80000000) {result=fn_800F74C0(self,target); *(s32 *)(target+8)+=best;}
return result;
}

#pragma use_lmw_stmw reset
s32 Battle_EvalTargetScore(void) {
    M2C_UNK fn_800F75F8();
    fn_800F75F8();
    return 1;
}

s32 fn_800F7E9C(s32 arg0, s8 arg1, s8 arg2, void *arg3) {
    extern u16 gBattleMap[];
    if (gBattleMap[0x60C7 + (arg1 + (arg2 << 6))] == 0) {
        return 0;
    }
    *(u8*)arg3 = arg1;
    *((u8*)arg3 + 1) = arg2;
    return Battle_EvalTarget(arg0, arg3);
}

s32 fn_800F7F00(u8 *self,u8 *target) {
extern u8 gBattleMap[];
u8 Map_IsAiTerrainBlocked(s8,s8);
s32 Battle_EvalTarget(s32,void *);
s32 sx;
u8 *map=gBattleMap;
s32 row;
u8 *rowp;
s32 best=0x80000000;
s32 y,x;
s32 offset;
s32 score;
u8 occupant;
s32 result;
for(y=*(s8 *)(map+9);y<=(s8)map[11]-1;y++) {
row=(s8)y<<6;
x=*(s8 *)(map+8);
rowp=map+row;
for(;x<=(s8)map[10]-1;x++) {
sx=(s8)x;
offset=((int)sx+row)*2;
if(((s16 *)(map+0x610E))[sx+row]<0) continue;
if(((s8 *)rowp)[sx+0xE18E]) continue;
if(Map_IsAiTerrainBlocked(sx,(s8)y)) continue;
if(!*(u16 *)(map+offset+0xC18E)) continue;
if(*(s16 *)(map+offset+0x818E)<=1) continue;
occupant=rowp[sx+13];
if(occupant && occupant!=self[0x198]) continue;
score=fn_800F7A60(self,x,y,target);
if(score>best) { target[0]=x; best=score; target[1]=y; }
}
}
result=0;
if(best!=(s32)0x80000000) {result=Battle_EvalTarget((s32)self,target); *(s32 *)(target+8)+=best;}
return result;
}

s32 fn_800F805C(u8 *self,u8 *target) {
extern u8 gBattleMap[];
u8 Map_IsAiTerrainBlocked(s8,s8);
s32 Battle_EvalTarget(s32,void *);
s32 sx;
u8 *map=gBattleMap;
s32 row;
u8 *rowp;
s32 best=0x80000000;
s32 y,x;
s32 offset;
s32 score;
u8 occupant;
s32 result;
for(y=*(s8 *)(map+9);y<=(s8)map[11]-1;y++) {
row=(s8)y<<6;
x=*(s8 *)(map+8);
rowp=map+row;
for(;x<=(s8)map[10]-1;x++) {
sx=(s8)x;
offset=((int)sx+row)*2;
if(((s16 *)(map+0x610E))[sx+row]<0) continue;
if(((s8 *)rowp)[sx+0xE18E]) continue;
if(Map_IsAiTerrainBlocked(sx,(s8)y)) continue;
if(!*(u16 *)(map+offset+0xC18E)) continue;
if(*(s16 *)(map+offset+0x818E)>1) continue;
occupant=rowp[sx+13];
if(occupant && occupant!=self[0x198]) continue;
score=fn_800F7A60(self,x,y,target);
if(score>best) { target[0]=x; best=score; target[1]=y; }
}
}
result=0;
if(best!=(s32)0x80000000) {result=Battle_EvalTarget((s32)self,target); *(s32 *)(target+8)+=best;}
return result;
}

u8 fn_800F81B8(u8 *self,u8 *target) {
extern u8 gBattleMap[];
u8 Map_IsAiTerrainBlocked(s8,s8);
s32 fn_800F7A60(void *, s32, s32, void *);
u8 Battle_EvalTarget(void *, void *);
s32 sx;
u8 *map=gBattleMap;
s32 row;
u8 *rowp;
s32 best=0x80000000;
s32 y,x;
s32 offset;
s32 score;
u8 occupant;
u8 result;
for(y=*(s8 *)(map+9);y<=(s8)map[11]-1;y++) {
row=(s8)y<<6;
x=*(s8 *)(map+8);
rowp=map+row;
for(;x<=(s8)map[10]-1;x++) {
sx=(s8)x;
offset=((int)sx+row)*2;
if(((s16 *)(map+0x610E))[sx+row]<0) continue;
if(((s8 *)rowp)[sx+0xE18E]) continue;
if(Map_IsAiTerrainBlocked(sx,(s8)y)) continue;
if(!*(u16 *)(map+offset+0xC18E)) continue;
occupant=rowp[sx+13];
if(occupant && occupant!=self[0x198]) continue;
score=fn_800F7A60(self,x,y,target);
if(score>best) { target[0]=x; best=score; target[1]=y; }
}
}
result=0;
if(best!=(s32)0x80000000) {result=Battle_EvalTarget(self,target); *(s32 *)(target+8)+=best;}
return result;
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
    extern s32 gAiCmdIsAlt;
    if ((s32) gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void AiCmd_SeekLabelB(void *unit)
{
    /* Same as AiCmd_SeekLabel: find AI table label (opcode 0, id == gAiCmd+0x10) and store its index as the unit's AI PC. */
    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiCmdOk;

    extern void *Res_GetByName(void *);

    long index;
    u8 *entry;
    long labelId;
    u8 *obj;

    obj = (u8 *)unit;
    index = 0;

    labelId = *(s32 *)(gAiCmd + 0x10);

    if (gAiCmdIsAlt == 0) {
        entry = (u8 *)Res_GetByName(*(void **)(obj + 0x238));
    } else {
        entry = (u8 *)Res_GetByName(*(void **)(obj + 0x23C));
    }

    if (labelId) {
        while (*(s32 *)entry != 0 ||
               *(s32 *)(entry + 0xC) != labelId) {
            entry += 0x1C;
            index++;
        }

        if (!gAiCmdIsAlt) {
            obj[0x250] = index;
        } else {
            obj[0x251] = index;
        }
    } else {
        if (!gAiCmdIsAlt) {
            obj[0x250] = 0;
        } else {
            obj[0x251] = 0;
        }
    }

    gAiCmdOk = 1;
}

void AiCmd_SeekLabel(void *unit)
{
    /* Find AI table label (opcode 0, id == gAiCmd+0x10) and store its index as the unit's AI PC. */
    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiCmdOk;

    extern void *Res_GetByName(void *);

    long index;
    u8 *entry;
    long count;
    u8 *obj;

    obj = (u8 *)unit;
    index = 0;

    count = *(s32 *)(gAiCmd + 0x10);

    if (gAiCmdIsAlt == 0) {
        entry = (u8 *)Res_GetByName(*(void **)(obj + 0x238));
    } else {
        entry = (u8 *)Res_GetByName(*(void **)(obj + 0x23C));
    }

    if (count) {
        while (*(s32 *)entry != 0 ||
               *(s32 *)(entry + 0xC) != count) {
            entry += 0x1C;
            index++;
        }

        if (!gAiCmdIsAlt) {
            obj[0x250] = index;
        } else {
            obj[0x251] = index;
        }
    } else {
        if (!gAiCmdIsAlt) {
            obj[0x250] = 0;
        } else {
            obj[0x251] = 0;
        }
    }

    gAiCmdOk = 1;
}

void fn_800F8538(void *arg0) {
    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern s32 gAiState[];
    extern s8 Unit_GetMov(void *);

    u8 *global;
    s32 tmp;
    s32 index;
    s32 ret;

    global = gAiCmd;
    tmp = *(u8 *)((u8 *)arg0 + 0x1AA);
    *(u8 *)((u8 *)arg0 + 0x1AA) = *(s32 *)(global + 0x10) + (s8)tmp;

    ret = Unit_GetMov(arg0);

    index = *(s32 *)(global + 4);
    gAiState[index + 2] = ret;

    if (gAiCmdIsAlt == 0) {
        (*(u8 *)((u8 *)arg0 + 0x250))++;
    } else {
        (*(u8 *)((u8 *)arg0 + 0x251))++;
    }
}

void fn_800F85C8(void *arg0) {
    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];
    extern u8 gUiContext[];

    void *Item_GetByIid(char *);
    u8 Unit_FindItemSlot(void *, void *);
    s32 Item_TryCallUfx(s32, s32);
    void fn_800FB96C(u8, u8, u8, void *, u8, u8, u8, s32, s32);

    u8 *unit;
    void *item;
    u8 slot;
    u8 x;
    u8 y;

    unit = (u8 *)arg0;

    item = Item_GetByIid(*(char **)(gAiCmd + 0x14));

    slot = Unit_FindItemSlot(unit, item);

    if ((s8)slot < 0 || (u8)Item_TryCallUfx((s32)unit, (s32)item) == 0) {
        gAiState[0x21C] = 0;
    } else {
        slot = Unit_FindItemSlot(unit, item);

        x = unit[0x19E];
        y = unit[0x19F];

        if (gAiState[0x21C] != 0) {
            gUiContext[8] = 4;
            gUiContext[0xA] = slot;
        } else {
            fn_800FB96C(4, x, y, unit, x, y, slot, 0, 0);
        }
    }

    if (gAiCmdIsAlt == 0) {
        unit[0x250]++;
    } else {
        unit[0x251]++;
    }
}

void fn_800F86D4(void *arg0) {
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern s32 gAiState[];
    u8 Status_Test(void *, s32);
    u8 *obj;
    u8 *state;
    s32 index;

    obj = (u8 *)arg0;
    state = (u8 *)gAiCmd;
    if (Status_Test(obj + 0x1BC, 9) != 0) {
        index = *(s32 *)(state + 4);
        gAiState[index + 2] = 0xB;
    } else {
        index = *(s32 *)(state + 4);
        gAiState[index + 2] = 0;
    }
    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

#pragma optimization_level 3
void fn_800F8780(void *arg0) {
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];
    extern f32 lbl_8036A0A0;
    s32 fn_800FFC58(void (*)(void *), void *, s32, f32);
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *state;
    u8 *obj;
    void (*cb)(void *);
    s32 index;
    s32 ret;
    s32 bool_arg;
    f32 float_arg;

    obj = (u8 *)arg0;
    state = (u8 *)gAiCmd;

    cb = *(u32 *)(state + 0x14) == 0 ? Ai_UnitIsHostileToActive
        : (*(s32 *)(state + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
    float_arg = (f32)*(s32 *)(state + 8) / lbl_8036A0A0;
    bool_arg = *(s32 *)(state + 0xC) != 0;
    ret = fn_800FFC58(cb, obj, bool_arg, float_arg);
    index = *(s32 *)(state + 4);
    *(s32 *)&gAiState[(index << 2) + 8] = ret;
    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}
#pragma optimization_level reset
u8 fn_801021F0(void *name, s16 *outX, s16 *outY)
{
    void *Unit_FindByName(void *);
    extern u8 gAiState[];
    s16 *y;
    s16 *x;
    void *unit;
    u8 flag;
    u32 bits;

    y = outY;
    x = outX;
    unit = Unit_FindByName(name);
    flag = 1;
    if (unit == 0) {
        goto set9;
    }
    if (*(u32 *)((u8 *)unit + 0x188) != 0) {
        goto bits;
    }
set9:
    *(s32 *)(gAiState + 8) = 9;
    *(s32 *)(gAiState + 0xC) = 9;
    return 0;
bits:
    bits = *(u32 *)((u8 *)unit + 0x1A0);
    if (bits & 0x18) {
        *(s32 *)(gAiState + 8) = 1;
        *(s32 *)(gAiState + 0xC) = 1;
        flag = 0;
    } else if (bits & 4) {
        *(s32 *)(gAiState + 8) = 4;
        *(s32 *)(gAiState + 0xC) = 4;
        flag = 1;
    } else if (bits & 0x20) {
        *(s32 *)(gAiState + 8) = 5;
        *(s32 *)(gAiState + 0xC) = 5;
        flag = 1;
    } else if (bits & 0x40) {
        *(s32 *)(gAiState + 8) = 6;
        *(s32 *)(gAiState + 0xC) = 6;
        flag = 1;
    } else if (bits & 0x80) {
        *(s32 *)(gAiState + 8) = 7;
        *(s32 *)(gAiState + 0xC) = 7;
        flag = 0;
    }
    if (flag != 0) {
        *x = *(s8 *)((u8 *)unit + 0x19E);
        *y = *(s8 *)((u8 *)unit + 0x19F);
    }
    return flag;
}

#pragma push
#pragma opt_lifetimes off
void fn_800F8868(u8 *self) {
    extern u8 *gAiCmd;
    extern u8 gUiContext[], gAiState[], gTargetList[];
    extern s32 gAiCmdIsAlt;
    u8 fn_801021F0(void *, s16 *, s16 *);
    void *Unit_FindByName(void *);
    u8 fn_800BF1E8(void *);
    void fn_800FFB4C(void *, s32, s32);
    u32 fn_8002F680(void *, u8, u8);
    void fn_800FB96C(s32, u8, u8, void *, s8, s8, s32, s32, s32);
    s16 x, y;
    u8 *other = gAiCmd;
    if (fn_801021F0(*(void **)(other + 0x14), &x, &y)) {
        other = Unit_FindByName(*(void **)(other + 0x14));
        *(void **)(gUiContext + 4) = other;
        if (!fn_800BF1E8(gUiContext)) {
            *(s32 *)(gAiState + 8) = 9;
            *(s32 *)(gAiState + 0xC) = 9;
        } else {
            fn_800FFB4C(self, -1, -1);
            if (fn_8002F680(gTargetList, other[0x19E], other[0x19F]) && *(s32 *)(gAiState + 8) != 4) {
                *(s32 *)(gAiState + 8) = 3;
                fn_800FB96C(7, self[0x19E], self[0x19F], other, (s8)x, (s8)y, -1, 0, 0);
            }
        }
    }
    if (!gAiCmdIsAlt)
        self[0x250]++;
    else
        self[0x251]++;
}
#pragma pop
void fn_800F8994(void *arg0) {
 extern u8 gAiState[],gBattleMap[]; extern u8 *gAiCmd; extern s32 gAiCmdIsAlt;
 void Ai_UnitIsHostileToActive(void *);void Ai_UnitNameInCmdList(void *);void Ai_UnitHostileNotInCmdList(void *);
 u8 Ai_FindLowestCostUnitTile(void (*)(void *),void *,s16 *,s16 *);
 void Ai_SetUnitMoveTo(void *,s16,s16,s32,u16,s32,s32,s32);
 void fn_80101960(void *,s16,s16,s32,u16,s32,s32,s32);
 void **Unit_GetHeldItemSlot(void *,s32); u8 fn_8009339C(void *,void *); s8 Unit_GetMov(void *);
 void fn_8001F9C4(void *,s8,s8,s8,s16);
 s16 x2,y2,y1,x1;
 u8 *unit=arg0;
 void **slot;
 s16 min;
 s32 i;
 void (*filter)(void *); u32 flags; s32 flag;
 flags=*(u32 *)(unit+0x254);
 if(!(flags&0x2000)) {
 u8 *cmd=gAiCmd;
 if(!(gAiState[1]&2) && !(flags&0x03000000)) {
 filter=*(u32 *)(cmd+0x14)==0?Ai_UnitIsHostileToActive:(*(s32 *)(cmd+0x10)!=0?Ai_UnitHostileNotInCmdList:Ai_UnitNameInCmdList);
 if(Ai_FindLowestCostUnitTile(filter,unit,&x1,&y1)==1) {
 Ai_SetUnitMoveTo(unit,x1,y1,1,*(u16 *)(gAiState+4),1,*(s32 *)(cmd+12)!=0,-1);
 }
 }
 if(!gAiCmdIsAlt) unit[0x250]++; else unit[0x251]++;
 } else {
 u8 *cmd=gAiCmd;
 if(!(gAiState[1]&2) && !(flags&0x03000000)) {
 filter=*(u32 *)(cmd+0x14)==0?Ai_UnitIsHostileToActive:(*(s32 *)(cmd+0x10)!=0?Ai_UnitHostileNotInCmdList:Ai_UnitNameInCmdList);
 if(Ai_FindLowestCostUnitTile(filter,unit,&x2,&y2)==1) {
 min=0x7FFF;
 for(i=0;i<4;i++) {
 void *item;
 slot=Unit_GetHeldItemSlot(unit,i);
 item=*slot;
 if(!item)break;
 if(fn_8009339C(unit,item)) {
 if((u8)(*slot?M2C_FIELD(*slot,u8 *,0x1D):0)<min) {
 min=(u8)(*slot?M2C_FIELD(*slot,u8 *,0x1D):0);
 }
 }
 }
 Map_BuildUnitMoveRange(unit,5,-1);
 fn_8001F9C4(gBattleMap,(s8)x2,(s8)y2,(s8)(min-1),(s16)-(Unit_GetMov(unit)+1));
 fn_80101960(unit,x2,y2,1,*(u16 *)(gAiState+4),1,*(s32 *)(cmd+12)!=0,-1);
 }
 }
 if(!gAiCmdIsAlt) unit[0x250]++; else unit[0x251]++;
}
}

#pragma dont_inline on
#pragma global_optimizer off
void fn_800F8C3C(void *unit) {
s8 Unit_GetMov(void *);
void fn_80101014(int,int,void*,int,int,u8,int,u8,u8,int);
u8 *fn_8001FC7C(void*,u8*,s8,s8);
void fn_800FB96C(u8,s8,s8,s32,s8,s8,s32,s32,s32);
extern u8 gAiState[],gUiContext[],gBattleMap[];
extern u8 *gAiCmd;
extern s32 gAiCmdIsAlt;
u8 *cmd,*ptr,*ai,*ctx,*map;
s16 *path;
s16 mov;
s32 x,y;
s32 bx,by;
u8 flag;
s16 px,py;
s32 dy,dx;
u16 idx;
s32 cmdVal;
u8 *entry;
cmd=gAiCmd;
if (!(gAiState[1]&2) && !(*(u32*)((u8*)unit+0x254)&0x03000000)) {
ptr=(u8*)unit+0x260;
path=*(s16**)(cmd+0x14);
cmdVal=*(s32*)(cmd+0xc);
mov=(s16)((s16)cmdVal<0 ? (s8)Unit_GetMov(unit):(s16)cmdVal);
x=*(s8*)((u8*)unit+0x19e); y=*(s8*)((u8*)unit+0x19f);
ai=gAiState;ctx=gUiContext;map=gBattleMap;flag=0;
loop:
idx=*(u16*)((u8*)unit+0x25a);
entry=(u8*)path+(idx<<2);
px=*(s16*)entry;py=*(s16*)(entry+2);
fn_80101014(x,y,unit,px,py,1,*(u16*)(ai+4),1,0,mov);
if(ai[0x21c]) {
bx=x;by=y;x=*(s8*)(ctx+0xd);y=*(s8*)(ctx+0xe);flag=1;
if((s16)bx!=x || (s16)by!=y) {
fn_8001FC7C(map,ptr,x,y);
while(*ptr!=0x10)ptr++;
dy=py-y;if(dy<0)dy=-dy;
dx=px-x;if(dx<0)dx=-dx;
if(dx+dy<=*(s32*)(cmd+4)) {
idx=*(u16*)((u8*)unit+0x25a);idx++;
if(*(s16*)((u8*)path+(idx<<2))<0)idx=0;
*(u16*)((u8*)unit+0x25a)=idx;
mov-=*(s16 *)((u8 *)gBattleMap + ((s8)x + ((s8)y << 6)) * 2 + 0x610E);
if(mov>0)goto loop;
}}}
if(flag)fn_800FB96C(gUiContext[8],x,y,0,x,y,-1,0,0);
}
if(gAiCmdIsAlt==0)((u8*)unit)[0x250]++;
else ((u8*)unit)[0x251]++;
}
#pragma global_optimizer reset
#pragma dont_inline reset

#pragma push
#pragma optimization_level 3
void fn_800F8E5C(void *arg0) {
extern u8 gAiState[],gUiContext[],gTargetList[];
extern u8 *gAiCmd;
extern s32 gAiCmdIsAlt;
u8 fn_801021F0(void *,s16 *,s16 *);
void *Unit_FindByName(void *);
u8 fn_800BF1E8(void *);
void Ai_SetUnitMoveTo(void *,s16,s16,s32,u16,s32,s32,s32);
void fn_800FFB4C(void *,s16,s16);
void *fn_8002F680(void *,u8,u8);
void Ai_SetDecision(s8,s32,s8,s8,s8,s8,s8);
s16 x,y;
u8 *unit=arg0;
u8 *other=gAiCmd;
if(!(gAiState[1]&2) && !(*(u32*)(unit+0x254)&0x3000000)) {
if((unit[0x1a5]>>4)&7) {
*(s32*)(gAiState+8)=0;*(s32*)(gAiState+12)=0;
} else if(fn_801021F0(*(void**)(other+0x14),&x,&y)) {
other=Unit_FindByName(*(void**)(other+0x14));
*(void**)(gUiContext+4)=other;
if(!fn_800BF1E8(gUiContext)) {
*(s32*)(gAiState+8)=9;*(s32*)(gAiState+12)=9;
} else {
Ai_SetUnitMoveTo(unit,x,y,1,*(u16*)(gAiState+4),1,0,-1);
fn_800FFB4C(unit,(s8)gUiContext[13],(s8)gUiContext[14]);
if(fn_8002F680(gTargetList,other[0x19e],other[0x19f]) && *(s32*)(gAiState+8)!=4) {
*(s32*)(gAiState+8)=3;
Ai_SetDecision(7,(s32)other,(s8)x,(s8)y,-1,0,0);
}
}
}
}
if(gAiCmdIsAlt==0) unit[0x250]++; else unit[0x251]++;
}
#pragma pop
void fn_800F8FF4(void *arg0) {
    extern void *gAiCmd;
    if ((s32) gAiCmd == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9020(void *arg0) {
    extern s32 gAiCmdIsAlt;
    if ((s32) gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F904C(void *arg0, s32 arg1) {
    extern u8 gAiState[544];
    extern s32 gAiCmdIsAlt;
    s32 fn_800FFEFC();
    s32 fn_800F9178();
    void fn_800FB96C();
    void Ai_SetUnitMoveTo();
    s16 x, y, tx, ty;
    u8 item;
    if (!(gAiState[1] & 2) && !(M2C_FIELD(arg0,u32 *,0x254) & 0x03000000)) {
        if ((u8)fn_800FFEFC(arg0,0,&x,&y)) {
            if ((u8)fn_800F9178(arg0,x,y,&tx,&ty,&item)) {
                fn_800FB96C(0x27,(s8)tx,(s8)ty,0,(s8)x,(s8)y,item,0,0);
            } else {
                Ai_SetUnitMoveTo(arg0,x,y,1,*(u16 *)(gAiState+4),1,0,-1);
            }
        } else {
            *(u32 *)(gAiState+8)=9;
        }
    }
    if (gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0,u8 *,0x250)++;
    } else {
        M2C_FIELD(arg0,u8 *,0x251)++;
    }
}

#pragma use_lmw_stmw on
s32 fn_800F9178(void *arg0, s16 arg1, s16 arg2, s16 *arg3, s16 *arg4, s8 *arg5) {
    u8 fn_8001D500(void **);
    u8 Item_GetRangeForUnit(void *, void *);
    void Map_FillLayer(void *, s32, s32);
    void **Unit_GetHeldItemSlot(void *, s8);
    s32 Unit_GetMov(void *);
    u8 fn_8009339C(void *);
    s32 fn_800F7838(void *, s16, s16);
    s32 fn_800F7994(void *, s16, s16);
    u32 fn_800FCF48(s8, s8);
    void fn_800FDDBC(s32, s32, u8, u8, s32);
    void Map_BuildUnitMoveRange(void *, s32, s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
    extern u8 gBattleMap[];

    u8 *tbl;
    s16 best_x;
    s32 best_slot;
    s32 best;
    s32 slot;
    void **itemp;
    void *self;
    s32 x1;
    s32 y;
    s32 x;
    s32 score;
    s32 row;
    s32 px;
    s32 py;
    s16 best_y;
    s8 range;
    s32 dd;
    s32 unk1d;
    s32 x0;
    s32 y0;
    s32 y1;

    u8 owner;
    s32 cand;
    s16 cx, cy;

    tbl = gBattleMap;
    self = arg0;
    Map_BuildUnitMoveRange(self, 5, -1);
    best = 0x80000000;
    for (slot = 0; (s8)slot < 4; slot++) {
        itemp = Unit_GetHeldItemSlot(self, (s8)slot);
        if (*itemp == NULL) {
            break;
        }
        if (fn_8009339C(self) == 0) {
            continue;
        }
        Map_FillLayer(tbl, 6, -1);
        dd = GetItemDD54(*itemp, self);
        unk1d = GetItemUnk1D(*itemp);
        fn_800FDDBC(arg1, arg2, (u8)unk1d, (u8)dd, 6);
        px = *(s8 *)((u8 *)self + 0x19E);
        py = *(s8 *)((u8 *)self + 0x19F);
        range = Unit_GetMov(self);
        x0 = px - range;
        if (x0 < (s8)gBattleMap[8]) {
            x0 = (s8)gBattleMap[8];
        }
        y0 = py - range;
        if (y0 < (s8)gBattleMap[9]) {
            y0 = (s8)gBattleMap[9];
        }
        x1 = px + range;
        if (x1 > (s8)gBattleMap[0xA] - 1) {
            x1 = (s8)gBattleMap[0xA] - 1;
        }
        y1 = py + range;
        if (y1 > (s8)gBattleMap[0xB] - 1) {
            y1 = (s8)gBattleMap[0xB] - 1;
        }
        for (y = y0; y <= y1; y++) {
            row = (s8)y << 6;
            cy = y;
            for (x = x0; x <= x1; x++) {
                if (*(s16 *)((u8 *)gBattleMap + ((s8)x + row) * 2 + 0x610E) < 0) {
                    continue;
                }
                if (*(s8 *)((u8 *)gBattleMap + row + (s8)x + 0xE18E) != 0) {
                    continue;
                }
                if (Map_IsAiTerrainBlocked((s8)x, (s8)y) != 0) {
                    continue;
                }
                if (*(u16 *)((u8 *)tbl + ((s8)x + row) * 2 + 0xC18E) == 0) {
                    continue;
                }
                owner = tbl[row + (s8)x + 0xD];
                if (owner != 0 && owner == *(u8 *)((u8 *)self + 0x198)) {
                    continue;
                }
                cx = x;
                score = fn_800F7994(self, cx, cy);
                score += fn_800F7838(self, cx, cy);
                score -= *(s16 *)((u8 *)gBattleMap + ((s8)cx + ((s8)cy << 6)) * 2 + 0x610E);
                score -= (fn_800FCF48((s8)cx, (s8)(s16)y) >> 4) & 0xFFF;
                if (score < 0) {
                    score = 0;
                }
                cand = (score != 0) + fn_8001D500(itemp);
                if (cand > best) {
                    best = cand;
                    best_x = x;
                    best_slot = slot;
                    best_y = y;
                }
            }
        }
    }
    if (best != 0x80000000) {
        *arg3 = best_x;
        *arg4 = best_y;
        *arg5 = best_slot;
    }
    return best != 0x80000000;
}

void fn_800F94D4(void *arg0) {
    extern u8 gAiState[];
    extern u8 gUiContext[];
    extern s32 gAiCmdIsAlt;

    u8 Ai_TryEscapeMove(void *);
    void fn_8010AD94(void *);

    u8 *obj;
    u32 flags;

    obj = (u8 *)arg0;

    if ((gAiState[1] & 2) == 0) {
        flags = *(u32 *)(obj + 0x254);

        if ((flags & 0x3000000) == 0) {
            *(u32 *)(obj + 0x254) = flags | 8;

            if (Ai_TryEscapeMove(arg0) != 0) {
                if (gUiContext[8] == 1) {
                    fn_8010AD94(arg0);
                }
            }
        }
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

#pragma optimization_level 4
void fn_800F9574(void *arg0) {
extern u8 gAiState[], gBattleMap[];
extern s32 gAiCmdIsAlt;
void Map_BuildUnitMoveRange(void *, s32, s32);
s8 Unit_GetMov(void *);
u8 Map_IsAiTerrainBlocked(s8,s8);
s32 Rand_Range(s32);
void fn_800FB96C(s8,s8,s8,s32,s8,s8,s8,s8,u8);
u8 *map;
s32 row;
u8 *rowp;
u8 *tile;
s32 uy;
s16 bestX,bestY;
s32 best;
s32 minX,maxX,maxY,y,x,ux;
s32 mov,minY,sx,random;
if ((gAiState[1]&2)==0 && !(M2C_FIELD(arg0,u32 *,0x254)&0x03000000)) {
Map_BuildUnitMoveRange(arg0,5,-1);
ux=M2C_FIELD(arg0,s8 *,0x19e);
uy=M2C_FIELD(arg0,s8 *,0x19f);
best=-1;
mov=Unit_GetMov(arg0);
minX=ux-mov;
if(minX<(s8)gBattleMap[8]) minX=(s8)gBattleMap[8];
minY=uy-mov;
if(minY<(s8)gBattleMap[9]) minY=(s8)gBattleMap[9];
maxX=ux+mov;
if(maxX>(s8)gBattleMap[10]-1) maxX=(s8)gBattleMap[10]-1;
maxY=uy+mov;
if(maxY>(s8)gBattleMap[11]-1) maxY=(s8)gBattleMap[11]-1;
map=gBattleMap;
for(y=minY;y<=maxY;y++){
row=(s8)y<<6;
rowp=map+row;
for(x=minX;x<=maxX;x++){
sx=(s8)x;
if(*(s16 *)((u8 *)gBattleMap + ((s8)x + row) * 2 + 0x610E) < 0) continue;
tile=rowp+sx;
if(*(s8 *)(tile+0xe18e)) continue;
if(Map_IsAiTerrainBlocked(sx,(s8)y)) continue;
if(tile[13]) continue;
random=(s16)Rand_Range(0x7fff);
if(random<(s16)best) continue;
best=random;bestX=x;bestY=y;
}}
if((s16)best!=-1) fn_800FB96C(1,(s8)bestX,(s8)bestY,0,(s8)bestX,(s8)bestY,-1,0,0);
}
if(gAiCmdIsAlt==0) M2C_FIELD(arg0,u8 *,0x250)++;
else M2C_FIELD(arg0,u8 *,0x251)++;
}
void fn_800F977C(void *arg0) {
    struct AiStateLocal {
        u8 unk0;
        u8 unk1;
        u8 unk2[2];
        u16 unk4;
        u8 unk6[2];
        s32 unk8[16];
    };
    struct BattleMapLocal {
        u8 unk0[0x818E];
        s16 unk818E[4096];
    };
    extern struct AiStateLocal gAiState;
    extern u8 gBattleMap[];
    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;
    u8 Ai_FindActionTile(void *, s32, s32, s16 *, s16 *);
    u8 fn_80102ACC(void *, s32, s32, s16 *, s16 *);
    s8 Unit_GetMov(void *);
    void Ai_SetUnitMoveTo(void *, s16, s16, s32, u16, s32, s32, s32);
    void fn_8010AEC8(void *, s32);
    s16 x, y;
    u8 *cmd;
    s32 action;
    u8 *unit;
    struct BattleMapLocal *map;
    u8 found;
    s16 distance;

    unit = (u8 *)arg0;
    map = (struct BattleMapLocal *)gBattleMap;
    cmd = gAiCmd;
    if (!(gAiState.unk1 & 2) && !(*(u32 *)(unit + 0x254) & 0x03000000)) {
        action = *(s32 *)(cmd + 0xc);
        if (*(s32 *)(cmd + 0x10) == 0) {
            found = Ai_FindActionTile(unit, 0, action, &x, &y);
        } else {
            found = fn_80102ACC(unit, 0, action, &x, &y);
        }
        if (found) {
            distance = map->unk818E[(s8)x + ((s8)y << 6)];
            if (distance <= Unit_GetMov(unit)) {
                gAiState.unk8[*(s32 *)(cmd + 4)] = 8;
            }
            Ai_SetUnitMoveTo(unit, x, y, 1, gAiState.unk4, 0, 0, -1);
            if (gAiState.unk8[*(s32 *)(cmd + 4)] != 8) {
                fn_8010AEC8(unit, action);
            }
        } else {
            gAiState.unk8[*(s32 *)(cmd + 4)] = 9;
        }
    }
    if (gAiCmdIsAlt == 0) {
        unit[0x250]++;
    } else {
        unit[0x251]++;
    }
}

#pragma use_lmw_stmw reset

void fn_800F9924(void *arg0) {
    extern s32 gAiCmdIsAlt;
    if ((s32) gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

#pragma global_optimizer off
void fn_800F9950(void *arg0) {
    extern u8 gAiState[];
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 fn_80101D8C(void (*)(void *), void *, s16 *, s16 *);
    void Ai_SetUnitMoveTo(void *, s16, s16, s32, u16, s32, s32, s32);
    void *cmd;
    void (*filter)(void *);
    s16 x;
    s16 y;

    cmd = gAiCmd;
    if (!(gAiState[1] & 2) && !(*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        filter = *(u32 *)((u8 *)cmd + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)((u8 *)cmd + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        if (fn_80101D8C(filter, arg0, &x, &y) == 1) {
            Ai_SetUnitMoveTo(arg0, x, y, 1, *(u16 *)(gAiState + 4), 1,
                             *(s32 *)((u8 *)cmd + 0xC) != 0, -1);
        }
    }
    if (gAiCmdIsAlt == 0) {
        ((u8 *)arg0)[0x250]++;
    } else {
        ((u8 *)arg0)[0x251]++;
    }
}
#pragma global_optimizer on
void fn_800F9A54(void *arg0) {
    extern u8 gAiState[];
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;

    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 Ai_FindLowestCostUnitTile(void (*)(void *), void *, s16 *, s16 *);
    void Ai_SetUnitMoveTo(void *, s16, s16, s32, u16, s32, s32, s32);

    u8 *work = gAiCmd;
    s32 flag;
    s16 x;
    s16 y;

    if (!(gAiState[1] & 2) && !(M2C_FIELD(arg0, u32 *, 0x254) & 0x03000000) &&
        Ai_FindLowestCostUnitTile(
            *(u32 *)((u8 *)work + 0x14) == 0
                ? Ai_UnitIsHostileToActive
                : (*(s32 *)((u8 *)work + 0x10) != 0
                       ? Ai_UnitHostileNotInCmdList
                       : Ai_UnitNameInCmdList),
            arg0, &x, &y) == 1) {
        flag = *(s32 *)((u8 *)work + 0xC) != 0;
        Ai_SetUnitMoveTo(arg0, x, y, 1, *(u16 *)(gAiState + 4), 1,
                         flag, -1);
    }
    if (gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8)(M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8)(M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9B58(void *arg0) {
    void fn_800FB96C(s32, s8, s8, s32, s8, s8, s32, s32, s32);
    u8 fn_801025BC(void *, s16 *, s16 *);
    extern u8 gAiState[];
    extern s32 gAiCmdIsAlt;
    s16 x;
    s16 y;

    if (!(gAiState[1] & 2) && !(M2C_FIELD(arg0, u32 *, 0x254) & 0x03000000) &&
        fn_801025BC(arg0, &x, &y) == 1) {
        fn_800FB96C(1, (s8)x, (s8)y, 0, (s8)x, (s8)y, -1, 0, 0);
    }
    if (gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8)(M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8)(M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9C14(void *arg0)
{
    extern u8 gAiState[];
    extern u8 gUiContext[];
    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;

    u8 fn_80129104(void);
    u8 Status_Test(void *, s32);
    u8 fn_80100104(void *, s32, s16 *, s16 *);
    void Ai_SetUnitMoveTo(void *, s16, s16, s32, u16,
                          s32, s32, s32);
    void fn_800FB96C(s32, u8, u8, void *, u8, u8,
                       s32, s32, s32);

    u8 *cmd;
    u8 *unit;
    s16 x;
    s16 y;
    u16 pc;

    unit = (u8 *)arg0;
    cmd = gAiCmd;

    if (!(gAiState[1] & 2) &&
        !(*(u32 *)(unit + 0x254) & 0x03000000)) {

        if (fn_80129104() == 0) {
            if (Status_Test(unit + 0x1BC, 5) != 0 &&
                fn_80100104(unit, 0, &x, &y) != 0) {

                Ai_SetUnitMoveTo(
                    unit,
                    x,
                    y,
                    1,
                    *(u16 *)(gAiState + 4),
                    1,
                    0,
                    -1
                );

                if (gAiState[0x21C] != 0 &&
                    x == (s8)gUiContext[0xD] &&
                    y == (s8)gUiContext[0xE]) {
                    fn_800FB96C(
                        0x25,
                        gUiContext[0xD],
                        gUiContext[0xE],
                        *(void **)(gUiContext + 4),
                        gUiContext[0xF],
                        gUiContext[0x10],
                        -1,
                        0,
                        0
                    );
                }
            } else {
                *(s32 *)(gAiState + 8) = 9;
            }
        }

        if (*(s32 *)(cmd + 0xC) != 0) {
            pc = *(u16 *)(unit + 0x258);
            pc++;
            *(u16 *)(unit + 0x258) = pc;

            if (*(s32 *)(cmd + 0xC) == pc) {
                *(s32 *)(gAiState + 8) = 10;
            }
        }
    }

    if (gAiCmdIsAlt == 0) {
        unit[0x250]++;
    } else {
        unit[0x251]++;
    }
}

void fn_800F9DAC(void *arg0) {
    u8 Ai_FindLowestCostAllyTile(s32, s16 *, s16 *);
    void Ai_SetUnitMoveTo(void *, s16, s16, s32, u16, s32, s32, s32);
    extern u8 gAiState[544];
extern s32 gAiCmdIsAlt;
extern void *gAiCmd;
    void *work = gAiCmd;
    s16 x;
    s16 y;

    if (!(gAiState[1] & 2) && !(M2C_FIELD(arg0, u32 *, 0x254) & 0x03000000) &&
                  Ai_FindLowestCostAllyTile(*(s32 *)((u8 *)work + 0x14), &x, &y)) {
        Ai_SetUnitMoveTo(arg0, x, y, 1, *(u16 *)(gAiState + 4), 1, 0, -1);
    }
    if (gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9E64(void *arg0) {
    extern s32 gAiCmdIsAlt;
    if ((s32) gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9E90(void *arg0) {
    extern u8 gAiState[544];
    extern s32 gAiCmdIsAlt;
    extern void *gAiCmd;
    extern u8 gUiContext[];
    u8 fn_801021F0(void *, s16 *, s16 *);
    void Ai_SetUnitMoveTo(void *, s16, s16, s32, u16, s32, s32, s32);
    u8 fn_80100BA4(s16, s16, s8, s8);
    void *Unit_FindByName(void *);
    void *cmd;
    s16 x;
    s16 y;

    cmd = gAiCmd;
    if (!(gAiState[1] & 2) && !(M2C_FIELD(arg0, u32 *, 0x254) & 0x03000000) &&
        fn_801021F0(*(void **)((u8 *)cmd + 0x14), &x, &y)) {
        Ai_SetUnitMoveTo(arg0, x, y, 1, *(u16 *)(gAiState + 4), 1, 0, -1);
        if (fn_80100BA4(x, y, (s8)gUiContext[0xd], (s8)gUiContext[0xe]) &&
            *(s32 *)(gAiState + 8) != 4) {
            *(void **)(gUiContext + 4) = Unit_FindByName(*(void **)((u8 *)cmd + 0x14));
            *(s32 *)(gAiState + 8) = 2;
            gAiState[0x21C] = 0;
        }
    }
    if (gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8)(M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8)(M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

#pragma global_optimizer off
void fn_800F9FC4(void *arg0) {
    void Ai_SetUnitMoveTo(void *, s16, s16, s32, u16, s32, s32, s32);

    extern u8 gAiState[];
    extern u8 gUiContext[];
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;

    s16 y;
    s16 x;
    u8 *unit;
    u8 *cmd;
    s32 dx;
    s32 dy;
    s32 t0;
    s32 t1;
    u8 *ctx;

    unit = (u8 *)arg0;
    cmd = (u8 *)gAiCmd;

    if (!(gAiState[1] & 2) && !(*(u32 *)(unit + 0x254) & 0x03000000)) {
        y = (s16)*(s32 *)(cmd + 0xC);
        x = (s16)*(s32 *)(cmd + 0x10);

        Ai_SetUnitMoveTo(unit, y, x, 1, *(u16 *)(gAiState + 4), 1, 0, -1);

        if (gAiState[0x21C] != 0) {
            ctx = gUiContext;
            t0 = ctx[0xE];
            t1 = ctx[0xD];
            t0 = (s8)t0;
            t1 = (s8)t1;
            dx = x - t0;
            if (dx < 0) {
                dx = -dx;
            }
            dy = y - t1;
            if (dy < 0) {
                dy = -dy;
            }
            if (dy + dx <= *(s32 *)(cmd + 4)) {
                *(s32 *)(gAiState + 8) = 8;
            }
        }
    }

    if (gAiCmdIsAlt == 0) {
        unit[0x250]++;
    } else {
        unit[0x251]++;
    }
}
#pragma global_optimizer reset
/* On chance: try attack AI with cmd unit filter (primary then alternate scorer); advance AI PC. */
void AiCmd_ChanceTryAttackFallback(void *unit) {
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    s32 Rand_Range(s32);
    u8 fn_800F51A0(void (*)(void *), s32);
    void fn_800F4E3C(void (*)(void *), s32);
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *obj;
    u8 *cmd;
    void (*filter)(void *);

    obj = (u8 *)unit;
    cmd = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(cmd + 4)) {
        filter = *(u32 *)(cmd + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)(cmd + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        if (fn_800F51A0(filter, 0xF) == 0) {
            fn_800F4E3C(filter, 0xF);
        }
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void fn_800FA1A8(void *arg0) {
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;

    s32 Rand_Range(s32);
    u8 fn_800F30E0(u8 (*)(void *), u8);
    u8 Ai_UnitIsHostileToActive(void *);
    u8 Ai_UnitNameInCmdList(void *);
    u8 Ai_UnitHostileNotInCmdList(void *);

    u8 *obj;
    u8 *state;

    obj = (u8 *)arg0;
    state = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(state + 4)) {
        fn_800F30E0(*(u32 *)(state + 0x14) == 0 ? Ai_UnitIsHostileToActive :
                    (*(s32 *)(state + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList),
                    0x13);
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void fn_800FA254(void *arg0) {
    extern s32 gAiCmdIsAlt;
    extern u8 *gAiCmd;
    u8 fn_800F3BA4(s16 *, u8);

    fn_800F3BA4(*(s16 **)(gAiCmd + 0x14), 0x2E);

    if (gAiCmdIsAlt == 0) {
        *(u8 *)((u8 *)arg0 + 0x250) += 1;
    } else {
        *(u8 *)((u8 *)arg0 + 0x251) += 1;
    }
}

void fn_800FA2B4(void *arg0) {
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    s32 Rand_Range(s32);
    u8 fn_800F3F50(s32, s8);
    s32 Ai_UnitIsHostileToActive(void *);
    s32 Ai_UnitNameInCmdList(void *);
    s32 Ai_UnitHostileNotInCmdList(void *);
    u8 *obj;
    u8 *state;

    obj = (u8 *)arg0;
    state = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(state + 4)) {
        fn_800F3F50(
            (s32)(*(u32 *)(state + 0x14) == 0
                      ? Ai_UnitIsHostileToActive
                      : (*(s32 *)(state + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList)),
            0x2E);
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void AiCmd_ChanceTryOnagerFallback(void *unit) {
    /* On chance: try onager map-obj AI then non-onager fallback; advance AI PC. */
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    s32 Rand_Range(s32);
    u8 fn_800F43D8(void (*)(void *), s32);
    void fn_800F4954(void (*)(void *), s32);
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *obj;
    u8 *cmd;
    void (*filter)(void *);

    obj = (u8 *)unit;
    cmd = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(cmd + 4)) {
        filter = *(u32 *)(cmd + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)(cmd + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        if (fn_800F43D8(filter, 0x31) == 0) {
            fn_800F4954(filter, 0x2A);
        }
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void Ai_Cmd_TryHashedStatus(void *unit) {
    /* AI opcode: on chance, run hashed status action on units matching cmd filter; advance PC. */
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];
    s32 Rand_Range(s32);
    void *Hash_Lookup(void *);
    void fn_801AA064(void *, void *, void (*)(void *));
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *cmd;
    u8 *self;
    void (*filter)(void *);
    u8 *aiFlags;
    void *entry;

    self = (u8 *)unit;
    cmd = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(cmd + 4)) {
        filter = *(u32 *)(cmd + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)(cmd + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        aiFlags = gAiState;
        aiFlags[1] |= 2;
        entry = Hash_Lookup(*(void **)((u8 *)gAiCmd + 0x18));
        fn_801AA064(self, entry, filter);
        aiFlags[1] &= ~2;
    }

    if (gAiCmdIsAlt == 0) {
        self[0x250]++;
    } else {
        self[0x251]++;
    }
}

void AiCmd_ChanceTryHashedStatus(void *unit) {
    /* On chance: run hashed status action on units matching cmd filter; advance AI PC. */
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    s32 Rand_Range(s32);
    void *Hash_Lookup(void *);
    void fn_801AA064(void *, void *, void (*)(void *));
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *obj;
    u8 *cmd;
    void (*filter)(void *);
    void *entry;

    obj = (u8 *)unit;
    cmd = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(cmd + 4)) {
        filter = *(u32 *)(cmd + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)(cmd + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        entry = Hash_Lookup(*(void **)((u8 *)gAiCmd + 0x18));
        fn_801AA064(obj, entry, filter);
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void fn_800FA5D4(void *arg0) {
    extern s32 gAiCmdIsAlt;
    if ((s32) gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void AiCmd_ChanceTrySteal(void *unit)
{
    /* On chance: try steal AI actions with cmd unit filter; forces AI flag bit 2 for the try, then advances AI PC. */
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];
    s32 Rand_Range(s32);
    void Ai_TryStealAction(void *, void (*)(void *));
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *cmd;
    u8 *obj;
    void (*filter)(void *);
    u8 *aiState;

    obj = (u8 *)unit;
    cmd = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(cmd + 4)) {
        filter = *(u32 *)(cmd + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)(cmd + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        aiState = gAiState;
        aiState[1] |= 2;
        Ai_TryStealAction(obj, filter);
        aiState[1] &= ~2;
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void fn_800FA6CC(void *arg0) {
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    s32 Rand_Range(s32);
    void Ai_TryStealAction(void *, void (*)(void *));
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *state;
    u8 *obj;
    void (*cb)(void *);

    obj = (u8 *)arg0;
    state = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(state + 4)) {
        cb = *(u32 *)(state + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)(state + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        Ai_TryStealAction(obj, cb);
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void AiCmd_ChanceTryHeldItem(void *unit)
{
    /* On chance: try held-item AI actions with cmd unit filter; forces AI flag bit 2 for the try, then advances AI PC. */
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];
    s32 Rand_Range(s32);
    void Ai_TryHeldItemAction(void *, void (*)(void *));
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *cmd;
    u8 *obj;
    void (*filter)(void *);
    u8 *aiState;

    obj = (u8 *)unit;
    cmd = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(cmd + 4)) {
        filter = *(u32 *)(cmd + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)(cmd + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        aiState = gAiState;
        aiState[1] |= 2;
        Ai_TryHeldItemAction(obj, filter);
        aiState[1] &= ~2;
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void fn_800FA844(void *arg0) {
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    s32 Rand_Range(s32);
    void Ai_TryHeldItemAction(void *, void (*)(void *));
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *state;
    u8 *obj;
    void (*cb)(void *);

    obj = (u8 *)arg0;
    state = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(state + 4)) {
        cb = *(u32 *)(state + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)(state + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        Ai_TryHeldItemAction(obj, cb);
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

#pragma peephole on
void fn_800FA8F0(void *arg0) {
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;

    s32 Rand_Range(s32);
    u8 Ai_TryAttackAction(u8 (*)(void *), u8);
    u8 fn_800FB3AC(void *);
    u8 fn_800FB334(void *);

    u8 *obj;
    u8 *state;

    obj = (u8 *)arg0;
    state = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(state + 4)) {
        Ai_TryAttackAction(*(s32 *)(state + 0x10) != 0 ? fn_800FB334 : fn_800FB3AC, 0xF);
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void AiCmd_ChanceTryAttack(void *unit)
{
    /* On chance: try attack AI actions with cmd unit filter; forces AI flag bit 2 for the try, then advances AI PC. */
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];
    s32 Rand_Range(s32);
    void Ai_TryAttackAction(void (*)(void *), s32);
    void Ai_UnitIsHostileToActive(void *);
    void Ai_UnitNameInCmdList(void *);
    void Ai_UnitHostileNotInCmdList(void *);
    u8 *cmd;
    u8 *obj;
    void (*filter)(void *);
    u8 *aiState;

    obj = (u8 *)unit;
    cmd = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(cmd + 4)) {
        filter = *(u32 *)(cmd + 0x14) == 0 ? Ai_UnitIsHostileToActive
            : (*(s32 *)(cmd + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList);
        aiState = gAiState;
        aiState[1] |= 2;
        Ai_TryAttackAction(filter, 0xF);
        aiState[1] &= ~2;
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

#pragma peephole reset
void fn_800FAA50(void *arg0) {
    extern s32 gAiCmdIsAlt;
    if ((s32) gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FAA7C(void *arg0) {
    extern void *gAiCmd;
    extern s32 gAiCmdIsAlt;
    s32 Rand_Range(s32);
    void Ai_TryAttackAction(s32, s32);
    s32 Ai_UnitIsHostileToActive(void *);
    s32 Ai_UnitNameInCmdList(void *);
    s32 Ai_UnitHostileNotInCmdList(void *);
    u8 *obj;
    u8 *state;

    obj = (u8 *)arg0;
    state = (u8 *)gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(state + 4)) {
        Ai_TryAttackAction(
            (s32)(*(u32 *)(state + 0x14) == 0
                      ? Ai_UnitIsHostileToActive
                      : (*(s32 *)(state + 0x10) != 0 ? Ai_UnitHostileNotInCmdList : Ai_UnitNameInCmdList)),
            0xF);
    }

    if (gAiCmdIsAlt == 0) {
        obj[0x250]++;
    } else {
        obj[0x251]++;
    }
}

void fn_800FAB28(void *arg0) {
    s32 Rand_Range(s32);
    u8 Ai_TryAttackAction(u8 (*)(void *), u8);
    s32 fn_800FB45C(void *);
    s32 fn_800FB3E4(void *);
    s32 fn_80100CC8();
    void *Unit_FindByName();

    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];

    u8 *unit;
    u8 (*filter)(void *);
    u8 *other;
    u8 *cmd;

    unit = (u8 *)arg0;
    cmd = gAiCmd;

    if (Rand_Range(0x64) <= *(s32 *)(cmd + 4)) {
        filter = *(s32 *)(cmd + 0x10) != 0 ? (u8 (*)(void *))fn_800FB3E4 : (u8 (*)(void *))fn_800FB45C;

        if (*(s32 *)(cmd + 0x10) != 0) {
            Ai_TryAttackAction(filter, 0xF);
        } else {
            if ((u8)fn_80100CC8(*(void **)(cmd + 0x14)) == 1) {
                other = Unit_FindByName(*(void **)(cmd + 0x14));

                if (*(u32 *)(other + 0x1A0) & 4) {
                    *(s32 *)(gAiState + 8) = 4;
                } else {
                    Ai_TryAttackAction(filter, 0xF);
                }
            } else {
                *(s32 *)(gAiState + 8) = 1;
            }
        }
    }

    if (gAiCmdIsAlt == 0) {
        unit[0x250]++;
    } else {
        unit[0x251]++;
    }
}

void fn_800FAC30(void *arg0) {
    extern int gAiCmdIsAlt;
    extern u8 gAiState[];

    gAiState[0x21C] = 0;

    if (gAiCmdIsAlt == 0) {
        (*(u8 *)((u8 *)arg0 + 0x250))++;
    } else {
        (*(u8 *)((u8 *)arg0 + 0x251))++;
    }
}

void fn_800FAC6C(void *unit) {
extern u8 *gAiCmd;
extern s32 gAiCmdIsAlt;
extern u8 gAiState[];
void *Res_GetByName(void *);
long index;
u8 *entry;
long labelId;
u8 *obj;
obj=unit;
if((u32)(*(s32 *)(gAiCmd+4)!=0)==(u32)(gAiState[0x21C]!=0)) {
index=0; labelId=*(s32 *)(gAiCmd+0x10);
if(gAiCmdIsAlt == 0) entry=Res_GetByName(*(void **)(obj+0x238));
else entry=Res_GetByName(*(void **)(obj+0x23C));
if(labelId) {
while(*(s32 *)entry!=0 || *(s32 *)(entry+0xC)!=labelId) { entry+=0x1C; index++; }
if(!gAiCmdIsAlt) obj[0x250]=index; else obj[0x251]=index;
} else { if(!gAiCmdIsAlt) obj[0x250]=0; else obj[0x251]=0; }
} else { if(!gAiCmdIsAlt) obj[0x250]++; else obj[0x251]++; }
}

#pragma cplusplus on
extern "C" void fn_800FAD94(u8 *unit) {
    extern s8 gUiContext[];
    extern u8 *gAiCmd;
    extern struct { s32 pad[2]; s32 arr[1]; } gAiState;
    extern s32 gAiCmdIsAlt;
    extern u8 gTargetList[];
    s32 fn_80102DFC(s32, s32, s32, s32);
    s8 *TargetList_GetCurrent(void *);
    void Ai_SetDecision(u8, s32, s8, s8, s8, s8, s8);

    u8 *cmd;
    s32 cmdC;
    s32 x;
    s32 y;

    cmd = gAiCmd;
    x = gUiContext[0xD];
    y = gUiContext[0xE];
    cmdC = *(s32 *)(cmd + 0xC);

    if ((u8)fn_80102DFC(x, y, cmdC, *(s32 *)(cmd + 0x10) != 0)) {
        s32 ty = y;
        if (*(s32 *)(cmd + 0x10) != 0) {
            x = TargetList_GetCurrent(gTargetList)[0];
            ty = TargetList_GetCurrent(gTargetList)[1];
        }
        Ai_SetDecision((u8)cmdC, (s32)unit, x, ty, -1, 0, 0);
    } else {
        gAiState.arr[*(s32 *)(cmd + 4)] = 9;
    }

    if (gAiCmdIsAlt == 0) {
        unit[0x250]++;
    } else {
        unit[0x251]++;
    }
}
#pragma cplusplus off
/* Find AI table label (opcode 0, id == gAiCmd+0x10) and store its index as the unit's AI PC; does not set gAiCmdOk. */
void AiCmd_SeekLabelNoOk(void *unit)
{
    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;

    extern void *Res_GetByName(void *);

    long count;
    long index;
    u8 *obj;
    u8 *entry;

    obj = (u8 *)unit;
    index = 0;

    count = *(s32 *)(gAiCmd + 0x10);

    if (gAiCmdIsAlt == 0) {
        entry = (u8 *)Res_GetByName(*(void **)(obj + 0x238));
    } else {
        entry = (u8 *)Res_GetByName(*(void **)(obj + 0x23C));
    }

    if (count) {
        while (*(s32 *)entry != 0 ||
               *(s32 *)(entry + 0xC) != count) {
            entry += 0x1C;
            index++;
        }

        if (!gAiCmdIsAlt) {
            obj[0x250] = index;
        } else {
            obj[0x251] = index;
        }
    } else {
        if (!gAiCmdIsAlt) {
            obj[0x250] = 0;
        } else {
            obj[0x251] = 0;
        }
    }
}

void fn_800FAF70(void *arg0) {
    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiCmdOk;
    extern u8 gAiState[];

    void fn_8003C634(void *, s32);
    void fn_8003C5EC(void *, s32);

    u8 *unit;
    u8 *cmd;
    u32 first;
    u32 second;
    s32 alt;

    unit = (u8 *)arg0;
    cmd = gAiCmd;

    first = *(u32 *)(cmd + 0x14);
    second = *(u32 *)(cmd + 0x18);

    if (first != 0) {
        fn_8003C634(unit, first);
        unit[0x250] = 0;
    }

    if (second != 0) {
        fn_8003C5EC(unit, second);
        unit[0x251] = 0;
    }

    *(u32 *)(unit + 0x254) &= ~8U;

    alt = gAiCmdIsAlt;

    if (!((alt == 0 && first == 0) || (alt == 1 && second == 0))) {
        goto success;
    }

advance:
    if (gAiCmdIsAlt == 0) {
        unit[0x250]++;
    } else {
        unit[0x251]++;
    }
    goto finish;

success:
    gAiState[0] = 0;
    gAiCmdOk = 1;

finish:
    if (first != 0 && second != 0) {
        *(s16 *)(unit + 0x258) = 0;
        *(s16 *)(unit + 0x25A) = 0;
    }
}

void fn_800FB074(void *arg0)
{
    extern s32 gAiCmdIsAlt;
    extern u8 *gAiCmd;
    extern u8 gAiCmdOk;
    void *Hash_Lookup(void *);
    void *self;
    u8 *p;
    u8 (*cb)(void *);

    self = arg0;
    p = gAiCmd;
    cb = (u8 (*)(void *))Hash_Lookup(*(void **)(p + 0x14));
    gAiCmdOk = cb(*(void **)(p + 0x18));
    if (gAiCmdIsAlt == 0) {
        *(u8 *)((u8 *)self + 0x250) += 1;
    } else {
        *(u8 *)((u8 *)self + 0x251) += 1;
    }
}

void fn_800FB0F0(void *arg0) {
    extern u8 gAiState[];
    extern u8 *gAiCmd;
    extern s32 gAiCmdIsAlt;
    void *Res_GetByName(void *);
    u8 *obj;
    u8 *cmd;
    u8 *entry;
    s32 *state;
    s32 index;
    s32 op;
    s32 value;
    s32 result;
    long i;
    long label;

    obj = (u8 *)arg0;
    cmd = gAiCmd;
    index = *(s32 *)(cmd + 4);
    op = *(s32 *)(cmd + 8);
    value = *(s32 *)(cmd + 0xC);
    state = (s32 *)(gAiState + 8 + index * 4);
    switch (op) {
    case 0:
        result = *state > value;
        break;
    case 1:
        result = *state >= value;
        break;
    case 2:
        result = *state == value;
        break;
    case 4:
        result = *state < value;
        break;
    case 3:
        result = *state <= value;
        break;
    case 5:
        result = *state != value;
        break;
    default:
        result = 0;
        break;
    }
    if ((u8)result) {
        i = 0;
        label = *(s32 *)(cmd + 0x10);
        if (gAiCmdIsAlt == 0) {
            entry = Res_GetByName(*(void **)(obj + 0x238));
        } else {
            entry = Res_GetByName(*(void **)(obj + 0x23C));
        }
        if (label) {
            while (*(s32 *)entry != 0 || *(s32 *)(entry + 0xC) != label) {
                entry += 0x1C;
                i++;
            }
            if (!gAiCmdIsAlt) {
                obj[0x250] = i;
            } else {
                obj[0x251] = i;
            }
        } else {
            if (!gAiCmdIsAlt) {
                obj[0x250] = 0;
            } else {
                obj[0x251] = 0;
            }
        }
    } else {
        if (!gAiCmdIsAlt) {
            obj[0x250]++;
        } else {
            obj[0x251]++;
        }
    }
}

void fn_800FB2DC(void *arg0) {
    extern s32 gAiCmdIsAlt;
    if ((s32) gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FB308(void *arg0) {
    extern s32 gAiCmdIsAlt;
    if ((s32) gAiCmdIsAlt == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

s32 fn_800FB334(void *arg0)
{
    extern u8 *gAiCmd;
    extern u8 gUiContext[];

    extern s32 Str_Cmp(void *, void *);
    extern s32 Allegiance_Compare(void *, void *);

    u8 *obj;
    u8 *other;
    s32 result;

    obj = (u8 *)arg0;
    other = *(u8 **)gUiContext;

    result = Str_Cmp(
        *(void **)(gAiCmd + 0x14),
        **(void ***)(obj + 0x18c)
    );

    if (result == 0) {
        return 0;
    }

    result = Allegiance_Compare(
        *(void **)(obj + 0x190),
        *(void **)(other + 0x190)
    );

    return ((u8)result == 1);
}

s32 fn_800FB3AC(void *arg0) {
    s32 Str_Cmp(s32, s32, void *);
    extern void *gAiCmd;
extern void *gUiContext;
    return Str_Cmp(M2C_FIELD(gAiCmd, s32 *, 0x14), *M2C_FIELD(arg0, s32 **, 0x18C), gAiCmd) == 0;
}

s32 fn_800FB3E4(void *arg0)
{
    extern u8 *gAiCmd;
    extern u8 gUiContext[];

    extern s32 Str_Cmp(void *, void *);
    extern s32 Allegiance_Compare(void *, void *);

    u8 *obj;
    u8 *other;
    s32 result;

    obj = (u8 *)arg0;
    other = *(u8 **)gUiContext;

    result = Str_Cmp(
        *(void **)(gAiCmd + 0x14),
        **(void ***)(obj + 0x188)
    );

    if (result == 0) {
        return 0;
    }

    result = Allegiance_Compare(
        *(void **)(obj + 0x190),
        *(void **)(other + 0x190)
    );

    return ((u8)result == 1);
}

s32 fn_800FB45C(void *arg0) {
    s32 Str_Cmp(s32, s32, void *);
    extern void *gAiCmd;
    
    return Str_Cmp(((s32*)gAiCmd)[0x14/4], ((s32**)arg0)[0x188/4][0], gAiCmd) == 0;
}

s32 Ai_UnitHostileNotInCmdList(void *arg0)
{
    extern u8 *gAiCmd;
    extern u8 gUiContext[];
    s32 Str_Cmp(void *, void *);
    s32 Allegiance_Compare(void *, void *);

    void *key;
    void **list;
    u8 *other;
    u8 *obj;
    void *item;
    u8 found;

    obj = (u8 *)arg0;
    other = *(u8 **)gUiContext;
    key = **(void ***)(obj + 0x188);
    list = *(void ***)(gAiCmd + 0x14);

    goto load;
    do {
        if (Str_Cmp(item, key) == 0) {
            found = 1;
            goto done;
        }
    load:
        item = *list;
        list++;
    } while (item != NULL);
    found = 0;
done:
    if (found) {
        return 0;
    }
    return (u8)Allegiance_Compare(*(void **)(obj + 0x190), *(void **)(other + 0x190)) == 1;
}

s32 Ai_UnitNameInCmdList(void *arg0)
{
    extern u8 *gAiCmd;
    s32 Str_Cmp(void *, void *);
    void *key;
    void **list;
    void *item;
    u8 found;

    key = **(void ***)((u8 *)arg0 + 0x188);
    list = *(void ***)(gAiCmd + 0x14);

    goto load;
    do {
        if (Str_Cmp(item, key) == 0) {
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

s32 Ai_UnitIsHostileToActive(void *arg0) {
    extern u8 gUiContext[];
    return (u8) Allegiance_Compare(*(s32*)((u8*)arg0 + 0x190),
                            *(s32*)((u8*)*(void**)&gUiContext + 0x190)) == 1;
}

s32 fn_800FB60C(void *arg0) {
    s32 Allegiance_Compare(s32, s32);
    extern u8 gUiContext[];
    s32 r = Allegiance_Compare(*(s32 *)((u8 *)arg0 + 0x190), *(s32 *)((u8 *)*(void **)gUiContext + 0x190));
    return (r & 0xFF) == 0;
}

u8 fn_800FB64C(void) {
    extern u8 gUiContext[];
    extern u8 *gAiCmd;
    extern u8 gAiCmdOk;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];
    extern u8 lbl_80273000[];
    void *Res_GetByName(void *);
    void *fn_800FB918(void *, void *, s32 *, u8 *);

    u8 *obj;
    u8 *entry;
    s32 val;
    s32 off;
    u8 flag;
    s32 key;
    s32 gap;

    obj = *(u8 **)gUiContext;
    entry = (u8 *)Res_GetByName(*(void **)(obj + 0x23C));
    gAiCmd = entry;
    off = obj[0x251] * 0x1C;
    gAiCmdOk = 0;
    gAiCmdIsAlt = 1;
    entry += off;
    gAiCmd = entry;

    val = *(s32 *)(entry + 8);
    if (val != 0) {
        *(s16 *)(gAiState + 4) = (s16)val;
    }

    key = *(s32 *)entry;
    flag = *(u8 *)&gap;
    entry = (u8 *)fn_800FB918(lbl_80273000, lbl_80273000 + 0x1A0, &key, &flag);
    (*(void (**)(void *, void *))(entry + 4))(obj, entry);

    return gAiCmdOk;
}

u8 fn_800FB6FC(void) {
    extern u8 gUiContext[];
    extern u8 *gAiCmd;
    extern u8 gAiCmdOk;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];
    extern u8 lbl_80273000[];
    void *Res_GetByName(void *);
    void *fn_800FB918(void *, void *, s32 *, u8 *);

    u8 *obj;
    u8 *entry;
    s32 val;
    s32 off;
    u8 flag;
    s32 key;
    s32 gap;

    obj = *(u8 **)gUiContext;
    entry = (u8 *)Res_GetByName(*(void **)(obj + 0x238));
    gAiCmd = entry;
    off = obj[0x250] * 0x1C;
    gAiCmdOk = 0;
    gAiCmdIsAlt = 0;
    entry += off;
    gAiCmd = entry;

    val = *(s32 *)(entry + 8);
    if (val != 0) {
        *(s16 *)(gAiState + 4) = (s16)val;
    }

    key = *(s32 *)entry;
    flag = *(u8 *)&gap;
    entry = (u8 *)fn_800FB918(lbl_80273000, lbl_80273000 + 0x1A0, &key, &flag);
    (*(void (**)(void *, void *))(entry + 4))(obj, entry);

    return gAiCmdOk;
}

u8 fn_800FB7A8(void) {
extern u8 gUiContext[], gAiState[], lbl_80273000[], lbl_80272FC8[];
extern u8 *gAiCmd; extern u8 gAiCmdOk; extern s32 gAiCmdIsAlt;
void *fn_800FB918(void *, void *, s32 *, u8 *);
u8 *obj; u8 *entry; s32 val; s32 off; u8 flag; s32 key; s32 gap;
obj=*(u8**)gUiContext;
entry=lbl_80272FC8; gAiCmd=entry;
off=obj[0x250]*0x1C;
gAiCmdOk=0; gAiCmdIsAlt=1;
entry+=off; gAiCmd=entry; obj[0x260]=0x10;
entry=gAiCmd;
val=*(s32*)(entry+8);
if(val!=0) *(s16*)(gAiState+4)=(s16)val;
key=*(s32*)entry; flag=*(u8*)&gap;
entry=fn_800FB918(lbl_80273000,lbl_80273000+0x1A0,&key,&flag);
(*(void (**)(void*,void*))(entry+4))(obj,entry);
return gAiCmdOk;
}

#pragma optimization_level 3
u8 fn_800FB868(void) {
    extern u8 gUiContext[];
    extern u8 *gAiCmd;
    extern u8 gAiCmdOk;
    extern s32 gAiCmdIsAlt;
    extern u8 gAiState[];
    extern u8 lbl_80273000[];
    extern u8 lbl_80272F90[];
    void *fn_800FB918(void *, void *, s32 *, u8 *);

    u8 *obj;
    u8 *entry;
    s32 val;
    s32 off;
    u8 flag;
    s32 key;
    s32 gap;
    s32 *pval;

    obj = *(u8 **)gUiContext;
    entry = lbl_80272F90;
    gAiCmd = entry;
    off = obj[0x250] * 0x1C;
    gAiCmdOk = 0;
    gAiCmdIsAlt = 0;
    entry += off;
    pval = (s32 *)(entry + 8);
    gAiCmd = entry;

    val = *pval;
    if (val != 0) {
        *(s16 *)(gAiState + 4) = (s16)val;
    }

    key = *(s32 *)entry;
    flag = *(u8 *)&gap;
    entry = (u8 *)fn_800FB918(lbl_80273000, lbl_80273000 + 0x1A0, &key, &flag);
    (*(void (**)(void *, void *))(entry + 4))(obj, entry);

    return gAiCmdOk;
}
#pragma optimization_level reset
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
    extern u8 gUiContext[24];
    extern u8 gAiState[544];
    gUiContext[8] = arg0;
    gUiContext[0xD] = arg1;
    gUiContext[0xE] = arg2;
    *(s32 *)&gUiContext[4] = arg3;
    gUiContext[0xF] = arg4;
    gUiContext[0x10] = arg5;
    gUiContext[0xA] = arg6;
    gUiContext[0x14] = arg7;
    gUiContext[0x15] = arg_sp8;
    gAiState[0x21C] = 1;
}

void Ai_SetDecision(s8 arg0, s32 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5, s8 arg6) {
    extern u8 gUiContext[24];
    extern u8 gAiState[544];

    gUiContext[8] = arg0;
    *(s32 *)&gUiContext[4] = arg1;
    gUiContext[0xF] = arg2;
    gUiContext[0x10] = arg3;
    gUiContext[0xA] = arg4;
    gUiContext[0x14] = arg5;
    gUiContext[0x15] = arg6;
    gAiState[0x21C] = 1;
}

/* Run one unit's AI: refresh low-HP state, then dispatch by faction behavior. */
s32 Ai_ExecUnit(void *unit) {
    void fn_80037814(void);
    void Unit_IsLowHp(void *);
    u8 Ai_GetFactionBehavior(void *);
    void Ai_BehaviorNop(void *);
    void Ai_TryApproachIke(void *);
    void Ai_TryCombatHostiles(void *);
    void Ai_TryCombatFiltered(void *);
    void Ai_TryMoveToFactionPos(void *);
    void Ai_TryMoveToSeekTile(void *);
    void Ai_TryHandleLowHpHeal(void *);
    void Ai_TryReactToIkeStatus(void *);
    u8 behavior;

    fn_80037814();
    Unit_IsLowHp(unit);
    behavior = Ai_GetFactionBehavior((u8 *)unit + 0x236);
    switch (behavior) {
    case 1:
        Ai_TryApproachIke(unit);
        break;
    case 2:
        Ai_TryCombatHostiles(unit);
        break;
    case 3:
        Ai_TryCombatFiltered(unit);
        break;
    case 4:
        Ai_TryMoveToFactionPos(unit);
        break;
    case 5:
        Ai_TryMoveToSeekTile(unit);
        break;
    case 6:
        Ai_TryHandleLowHpHeal(unit);
        break;
    case 7:
        Ai_TryReactToIkeStatus(unit);
        break;
    case 0:
        Ai_BehaviorNop(unit);
        break;
    }
    return 1;
}

s32 fn_800FBAB8(void *arg0) {
    void fn_8012923C(void *);
    extern u8 gAiState[];

    if ((gAiState[1] & 4) != 0) {
        return 0;
    }
    fn_8012923C(arg0);
    return 1;
}

s32 fn_800FBAF8(void) {
    u8 fn_800FB64C(void);
    void fn_800FB7A8(void);
    extern u8 gAiState[];

    if (gAiState[1] & 4) {
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
    extern u8 gAiState[];

    if (gAiState[1] & 4) {
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

/* When a unit is in low-HP AI mode, try heal item, seek healer, escape, or approach safety. */
s32 Ai_TryHandleLowHp(void *unit) {
    u8 Unit_HasLowHpAi(void *);
    u8 Unit_IsLowHp(void *);
    u8 Ai_TryUseHealItem(void *);
    u8 Ai_TrySeekHealer(void *);
    u8 Ai_TryEscapeMove(void *);
    void fn_8010AD94(void *);
    u8 Ai_TrySeekHealTerrain(void *);
    u8 Ai_TrySelectApproachTile(void *);
    u8 Ai_TryApproachHealer(void *);
    void fn_8010AC58(void *);
    extern u8 gUiContext[];
    extern u8 gAiState[];
    if ((*(u8 *)(gAiState + 1) & 4) != 0) {
        return 1;
    }
    if ((Unit_HasLowHpAi(unit) != 0) && (Unit_IsLowHp(unit) != 0)) {
        if (Ai_TryUseHealItem(unit) != 0) {
            return 1;
        }
        if (Ai_TrySeekHealer(unit) != 0) {
            return 1;
        }
        if ((*(s32 *)((u8 *)unit + 0x254) & 8) != 0) {
            if (Ai_TryEscapeMove(unit) != 0) {
                if (*(u8 *)(gUiContext + 8) == 1) {
                    fn_8010AD94(unit);
                }
                return 1;
            }
            goto block_23;
        }
        if (Ai_TrySeekHealTerrain(unit) != 0) {
            fn_8010AC58(unit);
        } else if (Ai_TrySelectApproachTile(unit) != 0) {
            fn_8010AC58(unit);
        } else if (Ai_TryApproachHealer(unit) != 0) {
            fn_8010AC58(unit);
        }
        goto block_23;
    }
    if (((*(s32 *)((u8 *)unit + 0x254) & 8) != 0) && (Ai_TryEscapeMove(unit) != 0) && (*(u8 *)(gUiContext + 8) == 1)) {
        fn_8010AD94(unit);
    }
block_23:
    return 1;
}

#pragma dont_inline on
#pragma global_optimizer on
s32 fn_800FBD38(void *arg0) {
extern u8 gAiState[],gBattleState[],gBattleMap[];
u8 Allegiance_CompareIds(s32,u8);
s8 Unit_GetMov(void *);
u8 Map_IsAiTerrainBlocked(s8,s8);
void fn_80101960(void *,s16,s16,s32,s32,s32,s32,s32);
u8 *map;
s32 row;
u8 *rowp;
u8 *layers;
u8 *tile;
s32 uy;
s16 bestX,bestY;
s32 minX,maxX,maxY,y,x,ux;
s32 mov,minY,sx;
if(gAiState[1]&4) return 1;
if((gAiState[1]&2)||(M2C_FIELD(arg0,u32 *,0x254)&0x03000000)) return 1;
if(Allegiance_CompareIds(0,gBattleState[0x11])!=1) return 1;
bestX=-1; bestY=-1;
Map_BuildUnitMoveRange(arg0,5,-1);
ux=M2C_FIELD(arg0,s8 *,0x19e);
uy=M2C_FIELD(arg0,s8 *,0x19f);
mov=Unit_GetMov(arg0);
minX=ux-mov;
if(minX<(s8)gBattleMap[8]) minX=(s8)gBattleMap[8];
minY=uy-mov;
if(minY<(s8)gBattleMap[9]) minY=(s8)gBattleMap[9];
maxX=ux+mov;
if(maxX>(s8)gBattleMap[10]-1) maxX=(s8)gBattleMap[10]-1;
maxY=uy+mov;
if(maxY>(s8)gBattleMap[11]-1) maxY=(s8)gBattleMap[11]-1;
map=gBattleMap;
layers=map+0x14190;
for(y=minY;y<=maxY;y++){
row=(s8)y<<6;
rowp=map+row;
for(x=minX;x<=maxX;x++){
sx=(s8)x;
if((*(s16 **)layers)[sx+row]<0) continue;
tile=rowp+sx;
if(*(s8 *)(tile+0xe18e)) continue;
if(Map_IsAiTerrainBlocked(sx,(s8)y)) continue;
if(tile[13]) continue;
if(tile[0x100d]!=0x29) continue;
bestX=x;bestY=y;break;
}
}
if(bestX>=0) fn_80101960(arg0,bestX,bestY,1,0xffff,0,0,-1);
return 1;
}
#pragma global_optimizer reset
#pragma dont_inline reset
void fn_800FBF54(void) {
    extern u8 gUiContext[24];
    u32 *p;

    p = *(u32 **)gUiContext;
    p[0x1A0 / 4] |= 1;
}

/* Find best move tile for the UI unit, confirm the action, and queue the AI move. */
void Ai_ConfirmBestMove(s32 proc) {
    u8 Ai_FindBestMovePos(void *, s16 *, s16 *, u8);
    void Ui_ConfirmUnitAction(void *);
    void UiCtx_RefreshRangeSelect(void *);
    void Ai_SetUnitMoveTo(void *, s16, s16, s32, u16, s32, s32, s32);
    void fn_800FF918(s32);
    void Process_ClearFunc(s32);
    extern u8 gUiContext[];
    extern u8 gAiState[];
    s16 destX;
    s16 destY;
    s32 saved;
    void *unit;
    u8 *ctx;
    u8 *ai;

    saved = proc;
    ctx = gUiContext;
    unit = *(void **)ctx;
    if (Ai_FindBestMovePos(unit, &destX, &destY, ctx[0x11]) != 0) {
        ai = gAiState;
        ai[0x21C] = 0;
        Ui_ConfirmUnitAction(ctx);
        UiCtx_RefreshRangeSelect(ctx);
        Ai_SetUnitMoveTo(unit, destX, destY, 1, 0xFFFF, 0, 0, -1);
        if (ai[0x21C] != 0) {
            fn_800FF918(saved);
        }
    }
    Process_ClearFunc(saved);
}

u8 fn_800FC040(void *arg0) {
    void Unit_IsLowHp(void *);
    u8 Unit_HasLowHpAi(void *);
    s32 Ai_TryHandleLowHp(void *);
    u8 Ui_CanConfirmUnitSelect(void *);

    extern u8 gUiContext[];
    extern u8 gAiState[];
    extern u8 lbl_8028E6F8[];
    extern u8 gBattleState[];

    u8 *unit;
    u8 *ctx;
    u8 *self;
    u32 flags;
    u8 *table;
    u32 index;
    void *handler;

    self = (u8 *)arg0;
    ctx = gUiContext;
    unit = *(u8 **)ctx;

    if ((s8)unit[0x1A8] == 0) {
        return 0;
    }

    Unit_IsLowHp(unit);

    flags = *(u32 *)(unit + 0x254);

    if ((flags & 1) != 0) {
        if (Unit_HasLowHpAi(unit) != 0) {
            table = lbl_8028E6F8 + self[0x30] * 0x18;
            index = (u8)gAiState[0] * 4;
            handler = *(void **)(table + index);

            if (handler == (void *)Ai_TryHandleLowHp) {
                return 0;
            }
        }
    }

    if ((gAiState[1] & 2) != 0) {
        goto fail;
    }
    if ((*(u32 *)(unit + 0x254) & 0x03000000) != 0) {
    fail:
        return 0;
    }

    if (gBattleState[0x11] != (*(u8 **)(unit + 0x190))[8]) {
        return 0;
    }

    return Ui_CanConfirmUnitSelect(ctx);
}

void fn_800FC150(void) {
    M2C_UNK fn_800FF918();
    fn_800FF918();
}

#pragma opt_propagation off
void fn_800FC170(u8 *arg0) {
extern u8 gUiContext[], gAiState[];
extern void (*lbl_8028E6F8[][6])(void *);
u8 fn_80102EA8(void *);
void fn_8002807C(void *);
void Process_Goto(void *,s32);
void Process_ClearFunc(void *);
u8 *ctx = gUiContext;
u8 *unit = *(u8 **)ctx;
u8 *ai;
arg0[0x30]=0;
if(fn_80102EA8(unit)) arg0[0x30]=3;
goto setup;
run:
while(lbl_8028E6F8[arg0[0x30]][(u8)(s8)ai[0]]) {
*(u16 *)(ai+4)=0xFFFF;
lbl_8028E6F8[arg0[0x30]][(u8)(s8)ai[0]](unit);
if(ai[0x21C]) break;
ai[0]++;
}
if(!ai[0x21C] || (ctx[8]==1 && (s8)ctx[13]==(s8)unit[0x19E] && (s8)ctx[14]==(s8)unit[0x19F])) {
*(u32 *)(unit+0x254)|=0x10000;
fn_8002807C(ctx); Process_Goto(arg0,0);
} else Process_ClearFunc(arg0);
return;
setup: ai=gAiState; goto run;
}
#pragma opt_propagation on
void fn_800FC2C4(s32 arg0) {
    extern u32 gUiContext[];
    u32 fn_800FCF74(u32, s32);
    void Process_ClearFunc(s32);

    if ((u8)fn_800FCF74(*gUiContext, 2)) {
        Process_ClearFunc(arg0);
    }
}

void fn_800FC310(void) {
    void fn_800FD774(void *);
    extern u8 gUiContext[24];
    fn_800FD774(*(void **)gUiContext);
}

void fn_800FC33C(u8 *self) {
extern u8 gUiContext[],gAiState[],gBattleState[];
void UiCtx_BeginMoveSelect(void *,void *);
void fn_800FC4C8(void *,void *);
void Process_Goto(void *,s32);
u8 *ctx=gUiContext;
u8 *ai=gAiState;
u8 *unit;
u8 **cursor;
u8 *battle=gBattleState;
u32 faction;
goto start;
loop: {
if((*(u8 **)(unit+0x190))[8]!=faction) goto next;
if(*(u32 *)(unit+0x1A0)&0x9D) goto next;
if(self[0x31] && !(*(u32 *)(unit+0x254)&0x10000)) goto next;
UiCtx_BeginMoveSelect(ctx,unit);
fn_800FC4C8(gAiState,unit);
*(u32 *)(unit+0x254)&=~0x10000;
unit[0x260]=0x10;
gAiState[0]=0;
memset(gAiState+8,0,0x10);
gAiState[0x21C]=0;
goto done;
}
start: faction=battle[0x11];
next: cursor=*(u8 ***)(ai+0x218); *(u8 ***)(ai+0x218)=cursor+1; unit=*cursor;
if(unit) goto loop;
done:
if(!unit) {
switch((s32)self[0x31]++) { case 0: *(u8 ***)(ai+0x218)=(u8 **)(gAiState+0x18); Process_Goto(self,0); break;
default: Process_Goto(self,4); break;
}
}
return;
}

void fn_800FC490(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x31) = 0;
}

extern u8 lbl_8028E758[16];
void fn_800FC49C(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 lbl_8028E758[16];
    Process_CreateChild(lbl_8028E758, arg0);
}

void fn_800FC4C8(void *unused, void *arg1) {
    extern u8 gAiState[];

    if (*(u32 *)((u8 *)arg1 + 0x254) & 0x03000000) {
        gAiState[1] |= 2;
    } else {
        gAiState[1] &= ~2;
    }
}

void fn_800FC504(void) {
    void fn_800C4588(void *);
    extern u8 gAiState[];
    extern void *lbl_80367904;

    gAiState[1] = 0;
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

#pragma global_optimizer off
void fn_800FC580(void)
{
    extern struct AiFields gAiState;
    extern u8 gBattleMap[];
    extern u8 lbl_802731D0[];
    extern void *lbl_80367904;

    extern void fn_80100B08(void *);
    extern void *memset(void *, s32, u32);
    extern void *fn_80022FC4(void *);
    extern void *fn_800C4638(s32, void *, s32);

    u32 val = 0xFFFF;
    *(volatile u16 *)&gAiState.f4 = val;
    *(volatile u8 *)&gAiState.f6 = 2;

    fn_80100B08(&gAiState);
    memset(gAiState.f8, 0, 0x10);
    lbl_80367904 = fn_800C4638((s32)fn_80022FC4(gBattleMap), lbl_802731D0 + 0x2C, 0);
}
#pragma global_optimizer on
s32 fn_800FC5F8(void) {
    extern s32 lbl_80367904;
    return lbl_80367904;
}

void CpPhase_Start(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 Proc_CpPhaseMain[];
    extern u8 gAiState[];

    Process_CreateChild(Proc_CpPhaseMain, arg0);
    gAiState[1] = 8;
}

void CpPhase_StartAlt(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 Proc_CpPhaseMain[];
    extern u8 gAiState[];

    Process_CreateChild(Proc_CpPhaseMain, arg0);
    gAiState[1] = 1;
}

void fn_800FC678(void) {
    extern u16 lbl_802731D0[29];
    extern s32 lbl_80367900;
    s32 Archive_Load(void *);
    void fn_8010F970(void);
    void fn_80129374(void);

    lbl_80367900 = Archive_Load((u8 *)lbl_802731D0 + 0x2D);
    fn_8010F970();
    fn_80129374();
}

#pragma push
#pragma optimization_level 4
#pragma opt_strength_reduction off
#pragma opt_common_subs off
void fn_800FC6B0(void *arg0) {
    void *Item_GetFlagsPtr(void *);
    u8 fn_8001D500(void *);
    u8 Item_GetRangeForUnit(void *, void *);
    void Map_FloodMoveRange(void *, u8, u8, s32, s32, s32);
    void fn_80022748(void *, void *);
    void fn_800227D0(void *, s32, s32);
    void fn_800227F8(void *, void *);
    void Map_FillLayer(void *, s32, s32);
    void Map_SelectRangeBuffer(void *, s32);
    void **Unit_GetHeldItemSlot(void *, s32);
    s8 Unit_GetMov(void *);
    s32 Unit_GetMagAtk(void *);
    s32 Unit_GetCarryWtLimit(void *);
    u8 fn_8009339C(void *);
    void fn_800C4588(void *);
    void *fn_800C4638(s32, void *, s32);
    void fn_80100D18(void *, void *, s32);
    u8 Status_Test(void *, s32);
    void fn_80205198(void *, s32);
    extern u8 gBattleMap[];
    extern u8 lbl_80273230[];
    extern u8 gUnits[];

    u8 sp9;
    u8 sp8;
    void *faction;
    s32 size;
    u8 *buf;
    void *map;
    s32 y;
    s32 x;
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
    s32 t14, t15;
    u8 t;
    u8 r0v;
    s32 stat;

    map = gBattleMap;
    faction = arg0;
    Map_FillLayer(map, 7, 0);
    size = ((s16)(*(s32 *)gBattleMap * *(s32 *)(gBattleMap + 4)) + 0x1F) & ~0x1F;
    buf = fn_800C4638(size, lbl_80273230 + 0x1D, 0);
    fn_80205198(buf, size);
    flag = 0;
    for (y = ((s8 *)gBattleMap)[9]; y <= ((s8 *)gBattleMap)[0xB] - 1; y++) {
        for (x = ((s8 *)gBattleMap)[8]; x <= ((s8 *)gBattleMap)[0xA] - 1; x++) {
            t = ((u8 *)map)[((s8)y << 6) + (s8)x + 0xD];
            if (t == 0) {
                continue;
            }
            unit = t ? gUnits + (t - 1) * 0x280 : 0;
            if (relation_is_one(*(void **)((u8 *)unit + 0x190), faction) == 0) {
                continue;
            }
            if (*(u32 *)((u8 *)unit + 0x1A0) & 0x9D) {
                continue;
            }
            bestLo = NULL;
            bestHi = NULL;
            for (i = 0; i < 4; i++) {
                slot = Unit_GetHeldItemSlot(unit, i);
                if (*slot == NULL) {
                    break;
                }
                if (!fn_8009339C(unit)) {
                    continue;
                }
                r0v = *slot ? Item_GetRangeForUnit(*slot, unit) : 0;
                if (r0v > 1) {
                    if (bestHi != NULL) {
                        u8 r1v = *bestHi ? Item_GetRangeForUnit(*bestHi, unit) : 0;
                        u8 r2v = *slot ? Item_GetRangeForUnit(*slot, unit) : 0;
                        if (r2v <= r1v) {
                            r1v = *bestHi ? Item_GetRangeForUnit(*bestHi, unit) : 0;
                            r2v = *slot ? Item_GetRangeForUnit(*slot, unit) : 0;
                            if (r2v != r1v) {
                                continue;
                            }
                            if (fn_8001D500(slot) <= fn_8001D500(bestHi)) {
                                continue;
                            }
                        }
                    }
                    bestHi = slot;
                } else {
                    if (bestLo != NULL && fn_8001D500(slot) <= fn_8001D500(bestLo)) {
                        continue;
                    }
                    bestLo = slot;
                }
            }
            if (!bestLo && !bestHi) {
                continue;
            }
            if (bestLo) {
                void *rangeMap = gBattleMap;
                u8 ux0, uy0;
                t14 = Status_Test((u8 *)unit + 0x1BC, 0x14) != 0;
                t15 = Status_Test((u8 *)unit + 0x1BC, 0x15) != 0;
                Map_SelectRangeBuffer(gBattleMap, 5);
                fn_800227F8(gBattleMap, *(void **)((u8 *)unit + 0x18C));
                fn_80022748(gBattleMap, *(void **)((u8 *)unit + 0x190));
                if (*(u32 *)((u8 *)unit + 0x254) & 0x20000) {
                    fn_800227D0(rangeMap, 0x37, 0x30);
                }
                uy0 = ((u8 *)unit)[0x19F];
                ux0 = ((u8 *)unit)[0x19E];
                Map_FloodMoveRange(rangeMap, ux0, uy0,
                                   (u16)(s8)Unit_GetMov(unit), t14, t15);
                val = fn_8001D500(bestLo);
                {
                    void *cb = Item_GetFlagsPtr(bestLo);
                    if ((*(u64 *)cb & 0x42ULL) != 0) {
                        stat = Unit_GetMagAtk(unit);
                    } else {
                        stat = Unit_GetCarryWtLimit(unit);
                    }
                }
                val += (s8)stat;
                if ((u16)val) {
                    s8 ux, uy;
                    u8 rr;
                    fn_80100D18(unit, bestLo, 0);
                    ux = (s8)((u8 *)unit)[0x19E];
                    uy = (s8)((u8 *)unit)[0x19F];
                    rr = *(void **)bestLo ? Item_GetRangeForUnit(*(void **)bestLo, unit) : 0;
                    range = (s8)Unit_GetMov(unit) + rr;
                    x0 = ux - range;
                    if (x0 < ((s8 *)gBattleMap)[8]) {
                        x0 = ((s8 *)gBattleMap)[8];
                    }
                    y0 = uy - range;
                    if (y0 < ((s8 *)gBattleMap)[9]) {
                        y0 = ((s8 *)gBattleMap)[9];
                    }
                    x1 = ux + range;
                    if (x1 > ((s8 *)gBattleMap)[0xA] - 1) {
                        x1 = ((s8 *)gBattleMap)[0xA] - 1;
                    }
                    y1 = uy + range;
                    if (y1 > ((s8 *)gBattleMap)[0xB] - 1) {
                        y1 = ((s8 *)gBattleMap)[0xB] - 1;
                    }
                    for (yy = y0; yy <= y1; yy++) {
                        for (xx = x0; xx <= x1; xx++) {
                            u8 *cp = (u8 *)map;
                            s32 off = ((s8)xx + ((s8)yy << 6)) * 2;
                            off += 0xC18E;
                            if (*(u16 *)(cp + off) != 0) {
                                dst = buf + xx + yy * *(s32 *)gBattleMap;
                                if (val > 0xFF) {
                                    val = 0xFF;
                                }
                                sp9 = (u8)val;
                                src = (*dst < sp9) ? &sp9 : dst;
                                flag = 1;
                                *dst = *src;
                            }
                        }
                    }
                }
            }
            if (bestHi) {
                void *rangeMap = gBattleMap;
                u8 ux0, uy0;
                t14 = Status_Test((u8 *)unit + 0x1BC, 0x14) != 0;
                t15 = Status_Test((u8 *)unit + 0x1BC, 0x15) != 0;
                Map_SelectRangeBuffer(gBattleMap, 5);
                fn_800227F8(gBattleMap, *(void **)((u8 *)unit + 0x18C));
                fn_80022748(gBattleMap, *(void **)((u8 *)unit + 0x190));
                if (*(u32 *)((u8 *)unit + 0x254) & 0x20000) {
                    fn_800227D0(rangeMap, 0x37, 0x30);
                }
                uy0 = ((u8 *)unit)[0x19F];
                ux0 = ((u8 *)unit)[0x19E];
                Map_FloodMoveRange(rangeMap, ux0, uy0,
                                   (u16)(s8)Unit_GetMov(unit), t14, t15);
                val = fn_8001D500(bestHi);
                {
                    void *cb = Item_GetFlagsPtr(bestHi);
                    if ((*(u64 *)cb & 0x42ULL) != 0) {
                        stat = Unit_GetMagAtk(unit);
                    } else {
                        stat = Unit_GetCarryWtLimit(unit);
                    }
                }
                val += (s8)stat;
                if ((u16)val) {
                    s8 ux, uy;
                    u8 rr;
                    fn_80100D18(unit, bestHi, 0);
                    ux = (s8)((u8 *)unit)[0x19E];
                    uy = (s8)((u8 *)unit)[0x19F];
                    rr = *(void **)bestHi ? Item_GetRangeForUnit(*(void **)bestHi, unit) : 0;
                    range = (s8)Unit_GetMov(unit) + rr;
                    x0 = ux - range;
                    if (x0 < ((s8 *)gBattleMap)[8]) {
                        x0 = ((s8 *)gBattleMap)[8];
                    }
                    y0 = uy - range;
                    if (y0 < ((s8 *)gBattleMap)[9]) {
                        y0 = ((s8 *)gBattleMap)[9];
                    }
                    x1 = ux + range;
                    if (x1 > ((s8 *)gBattleMap)[0xA] - 1) {
                        x1 = ((s8 *)gBattleMap)[0xA] - 1;
                    }
                    y1 = uy + range;
                    if (y1 > ((s8 *)gBattleMap)[0xB] - 1) {
                        y1 = ((s8 *)gBattleMap)[0xB] - 1;
                    }
                    for (yy = y0; yy <= y1; yy++) {
                        for (xx = x0; xx <= x1; xx++) {
                            u8 *cp = (u8 *)map;
                            s32 off = ((s8)xx + ((s8)yy << 6)) * 2;
                            off += 0xC18E;
                            if (*(u16 *)(cp + off) != 0) {
                                dst = buf + xx + yy * *(s32 *)gBattleMap;
                                if (val > 0xFF) {
                                    val = 0xFF;
                                }
                                sp8 = (u8)val;
                                src = (*dst < sp8) ? &sp8 : dst;
                                flag = 1;
                                *dst = *src;
                            }
                        }
                    }
                }
            }
            if ((u8)flag) {
                s32 y2, x2;
                for (y2 = ((s8 *)gBattleMap)[9]; y2 <= ((s8 *)gBattleMap)[0xB] - 1; y2++) {
                    for (x2 = ((s8 *)gBattleMap)[8]; x2 <= ((s8 *)gBattleMap)[0xA] - 1; x2++) {
                        u8 *p = buf + y2 * *(s32 *)gBattleMap;
                        t = p[x2];
                        if (t) {
                            u8 *cp = (u8 *)map;
                            u16 *cell;
                            u32 sum;
                            s32 off = ((s8)x2 + ((s8)y2 << 6)) * 2;
                            cp += 0x10000;
                            cell = (u16 *)(cp + off - 0x5E72);
                            sum = t + *cell;
                            if (sum > 0xFF) {
                                sum = 0xFF;
                            }
                            *cell = (u8)sum;
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
#pragma pop
u16 fn_800FCF48(s8 arg0, s8 arg1) {
    extern u16 gBattleMap[];
    s32 temp_r3;
    s32 temp_r4;
    
    temp_r4 = (arg0 + (arg1 << 6)) * 2;
    temp_r3 = (s32)gBattleMap + 0x10000 + temp_r4;
    return *(u16*)((char*)temp_r3 - 0x5E72);
}

#pragma dont_inline on
#pragma global_optimizer off
s32 fn_800FCF74(void *arg0, s32 arg1) {
    void Map_FloodMoveRange(void *, u8, u8, u16, s32, s32);
    void fn_80022748(void *, void *);
    void fn_800227D0(void *, s32, s32);
    void fn_800227F8(void *, void *);
    void Map_SelectRangeBuffer(void *, s32);
    void **Unit_GetHeldItemSlot(void *, s32);
    s32 Unit_GetMov(void *);
    void fn_800C4588(void *);
    void *fn_800C4638(s32, void *, s32);
    void fn_80100D18(void *, void *, s32);
    u8 Status_Test(void *, s32);
    void fn_80205198(void *, s32);
    extern u8 gBattleMap[];
    extern u8 lbl_80273230[];
    extern u8 gBattleState[];
    extern void **lbl_80367908;

    u8 sp9;
    u8 sp8;
    void *sp10;
    void *spC;
    s32 size;
    u8 *buf;
    void *unit0;
    void *unit;
    void **list;
    s32 count;
    u8 flag;
    s8 ux, uy, mov;
    s32 x0, y0, x1, y1;
    s32 xx, yy;
    s32 t14, t15;
    u8 a, b;
    s8 slot;
    u16 val;
    u8 *dst;
    u8 *src;
    s32 idx;
    u8 *tile;
    u8 terr;
    u8 ok, ok2, ok3;
    u16 *wcell;
    u16 *hcell;
    u8 *state;
    u8 *mapBase;
    u8 *map21;

    unit0 = arg0;
    count = arg1;
    size = ((s16)(*(s32 *)gBattleMap * *(s32 *)(gBattleMap + 4)) + 0x1F) & ~0x1F;
    buf = fn_800C4638(size, lbl_80273230 + 0x1D, 0);
    fn_80205198(buf, size);
    ux = (s8)((u8 *)unit0)[0x19E];
    uy = (s8)((u8 *)unit0)[0x19F];
    mov = (s8)Unit_GetMov(unit0);
    mapBase = gBattleMap;
    flag = 0;
    t14 = Status_Test((u8 *)unit0 + 0x1BC, 0x14) != 0;
    t15 = Status_Test((u8 *)unit0 + 0x1BC, 0x15) != 0;
    Map_SelectRangeBuffer(gBattleMap, 6);
    fn_800227F8(gBattleMap, *(void **)((u8 *)unit0 + 0x18C));
    fn_80022748(gBattleMap, *(void **)((u8 *)unit0 + 0x190));
    if (*(u32 *)((u8 *)unit0 + 0x254) & 0x20000) {
        fn_800227D0(mapBase, 0x37, 0x30);
    }
    b = ((u8 *)unit0)[0x19F];
    a = ((u8 *)unit0)[0x19E];
    Map_FloodMoveRange(mapBase, a, b, (u16)(s8)Unit_GetMov(unit0), t14, t15);
    list = lbl_80367908;
    map21 = gBattleMap;
    spC = map21;
    x0 = ux - mov;
    y0 = uy - mov;
    x1 = ux + mov;
    y1 = uy + mov;
    sp10 = map21;
    state = gBattleState;
    goto loop_head;
    for (;;) {
        unit = *list;
        t14 = Status_Test((u8 *)unit + 0x1BC, 0x14) != 0;
        t15 = Status_Test((u8 *)unit + 0x1BC, 0x15) != 0;
        Map_SelectRangeBuffer(map21, 5);
        fn_800227F8(spC, *(void **)((u8 *)unit + 0x18C));
        fn_80022748(sp10, *(void **)((u8 *)unit + 0x190));
        if (*(u32 *)((u8 *)unit + 0x254) & 0x20000) {
            fn_800227D0(map21, 0x37, 0x30);
        }
        b = ((u8 *)unit)[0x19F];
        a = ((u8 *)unit)[0x19E];
        Map_FloodMoveRange(map21, a, b, (u16)(s8)Unit_GetMov(unit), t14, t15);
        slot = ((s8 *)list)[4];
        if (slot >= 0) {
            val = ((u8 *)list)[6];
            fn_80100D18(unit, Unit_GetHeldItemSlot(unit, slot), 0);
            {
                s32 xa = x0, ya = y0, xb = x1, yb = y1;
                if (xa < (s8)map21[8]) xa = (s8)map21[8];
                if (ya < (s8)map21[9]) ya = (s8)map21[9];
                if (xb > (s8)map21[0xA] - 1) xb = (s8)map21[0xA] - 1;
                if (yb > (s8)map21[0xB] - 1) yb = (s8)map21[0xB] - 1;
                for (yy = ya; yy <= yb; yy++) {
                    for (xx = xa; xx <= xb; xx++) {
                        idx = (xx + (yy << 6)) << 1;
                        if (*(s16 *)(gBattleMap + idx + 0x818E) < 0) continue;
                        tile = gBattleMap + (yy << 6) + xx;
                        if ((s8)tile[0xE18E]) continue;
                        if (state[0x11] != 2) {
                            ok = 0;
                        } else {
                            terr = tile[0x100D];
                            ok = 1;
                            ok2 = 1;
                            ok3 = 1;
                            {
                                u8 d = terr - 0x26;
                                if (((u32)((1 | ~d) - ((u32)(1 - d) >> 1)) >> 31) == 0) ok3 = 0;
                            }
                            if (ok3 == 0 && terr != 0x28) ok2 = 0;
                            if (ok2 == 0 && terr != 0x2A) ok = 0;
                        }
                        if (ok != 0) continue;
                        wcell = (u16 *)(map21 + idx + 0xC18E);
                        hcell = (u16 *)(map21 + idx + 0xA18E);
                        if (*wcell == 0 || *hcell >= 0xFF) continue;
                        if ((u16)val > 0xFF) val = 0xFF;
                        sp9 = (u8)val;
                        dst = buf + xx + yy * *(s32 *)gBattleMap;
                        if (*dst < (u8)val) src = &sp9; else src = dst;
                        flag = 1;
                        *dst = *src;
                    }
                }
            }
        }
        slot = ((s8 *)list)[5];
        if (slot >= 0) {
            val = ((u8 *)list)[7];
            fn_80100D18(unit, Unit_GetHeldItemSlot(unit, slot), 0);
            {
                s32 xa = x0, ya = y0, xb = x1, yb = y1;
                if (xa < (s8)map21[8]) xa = (s8)map21[8];
                if (ya < (s8)map21[9]) ya = (s8)map21[9];
                if (xb > (s8)map21[0xA] - 1) xb = (s8)map21[0xA] - 1;
                if (yb > (s8)map21[0xB] - 1) yb = (s8)map21[0xB] - 1;
                for (yy = ya; yy <= yb; yy++) {
                    for (xx = xa; xx <= xb; xx++) {
                        idx = (xx + (yy << 6)) << 1;
                        if (*(s16 *)(gBattleMap + idx + 0x818E) < 0) continue;
                        tile = gBattleMap + (yy << 6) + xx;
                        if ((s8)tile[0xE18E]) continue;
                        if (state[0x11] != 2) {
                            ok = 0;
                        } else {
                            terr = tile[0x100D];
                            ok = 1;
                            ok2 = 1;
                            ok3 = 1;
                            {
                                u8 d = terr - 0x26;
                                if (((u32)((1 | ~d) - ((u32)(1 - d) >> 1)) >> 31) == 0) ok3 = 0;
                            }
                            if (ok3 == 0 && terr != 0x28) ok2 = 0;
                            if (ok2 == 0 && terr != 0x2A) ok = 0;
                        }
                        if (ok != 0) continue;
                        wcell = (u16 *)(map21 + idx + 0xC18E);
                        hcell = (u16 *)(map21 + idx + 0xA18E);
                        if (*wcell == 0 || *hcell >= 0xFF) continue;
                        if ((u16)val > 0xFF) val = 0xFF;
                        sp8 = (u8)val;
                        dst = buf + xx + yy * *(s32 *)gBattleMap;
                        if (*dst < (u8)val) src = &sp8; else src = dst;
                        flag = 1;
                        *dst = *src;
                    }
                }
            }
        }
        if (flag != 0) {
            {
                s32 xa = x0, ya = y0, xb = x1, yb = y1;
                if (xa < (s8)map21[8]) xa = (s8)map21[8];
                if (ya < (s8)map21[9]) ya = (s8)map21[9];
                if (xb > (s8)map21[0xA] - 1) xb = (s8)map21[0xA] - 1;
                if (yb > (s8)map21[0xB] - 1) yb = (s8)map21[0xB] - 1;
                for (yy = ya; yy <= yb; yy++) {
                    for (xx = xa; xx <= xb; xx++) {
                        idx = (xx + (yy << 6)) << 1;
                        if (*(s16 *)(gBattleMap + idx + 0x818E) < 0) continue;
                        tile = gBattleMap + (yy << 6) + xx;
                        if ((s8)tile[0xE18E]) continue;
                        if (state[0x11] != 2) {
                            ok = 0;
                        } else {
                            terr = tile[0x100D];
                            ok = 1;
                            ok2 = 1;
                            ok3 = 1;
                            {
                                u8 d = terr - 0x26;
                                if (((u32)((1 | ~d) - ((u32)(1 - d) >> 1)) >> 31) == 0) ok3 = 0;
                            }
                            if (ok3 == 0 && terr != 0x28) ok2 = 0;
                            if (ok2 == 0 && terr != 0x2A) ok = 0;
                        }
                        if (ok != 0) continue;
                        dst = buf + yy * *(s32 *)gBattleMap;
                        if (dst[xx] != 0) {
                            hcell = (u16 *)(map21 + idx + 0xA18E);
                            {
                                u32 sum = dst[xx] + *hcell;
                                if (sum > 0xFF) sum = 0xFF;
                                *hcell = (u16)sum;
                            }
                            dst[xx] = 0;
                        }
                    }
                }
            }
            flag = 0;
        }
        list = (void **)((u8 *)list + 8);
        count -= 1;
    loop_head:
        unit = *list;
        if (unit == 0) break;
        if ((u8)count == 0) break;
    }
    fn_800C4588(buf);
    lbl_80367908 = list;
    return *list == 0;
}
#pragma global_optimizer reset
#pragma dont_inline reset
void fn_800FD774(void *arg0) {
    typedef struct { void *unit; u8 x, y, z, pad; u32 u8_, uC; } T16;
    typedef struct { void *unit; s8 a, b; u8 c, d; } OutEnt;
    u8 Allegiance_Compare(void *, void *);
    s32 fn_8001D500(void *);
    s32 Item_GetRangeForUnit(void *, void *);
    void Map_FillLayer(void *, s32, s32);
    void **Unit_GetHeldItemSlot(void *, s32);
    s32 Unit_GetActiveItemSlot(void *);
    u8 fn_8009339C(void *, void *);
    u8 fn_80100F10(void *, void *, void *);
    void fn_801A6F34(void *, s32);
    void Battle_SetupFromParams(void *, void *, void *);
    extern u8 gBattleMap[];
    extern u8 lbl_8032B5E0[];
    extern u32 gBattle[];
    extern u8 gUnits[];
    extern const T16 lbl_80273220;
    extern const T16 lbl_80273210;
    extern u16 lbl_80366E70;
    extern u16 lbl_80366E72;
    extern void *lbl_80367908;
    extern const f32 lbl_8036A0B0;
    extern const f32 lbl_8036A0B4;
    extern const f32 lbl_8036A0B8;

    T16 sp3C;
    T16 sp2C;
    T16 sp1C;
    T16 spC;
    u16 spA;
    u16 sp8;
    s8 *map = (s8 *)gBattleMap;
    OutEnt *out = (OutEnt *)lbl_8032B5E0;
    u8 *ui = (u8 *)gBattle;
    void *self = arg0;
    s32 y;
    s32 x;
    u8 *row;
    u8 id;
    void *unit;
    s32 bestHi;
    void **slotHi;
    s32 bestLo;
    void **slotLo;
    s32 i;
    void **slot;
    void *item;
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

    y = map[9];
    while (y <= map[0xB] - 1) {
        x = map[8];
        row = (u8 *)map + ((s8)y << 6);
        while (x <= map[0xA] - 1) {
            id = row[(s8)x + 0xD];
            if (id != 0) {
                if (id != 0) {
                    unit = gUnits + (id - 1) * 0x280;
                } else {
                    unit = NULL;
                }
                if ((u8)Allegiance_Compare(*(void **)((u8 *)self + 0x190), *(void **)((u8 *)unit + 0x190)) == 1
                    && (*(u32 *)((u8 *)unit + 0x1A0) & 0x9D) == 0) {
                    bestHi = -1;
                    slotHi = NULL;
                    bestLo = -1;
                    slotLo = NULL;
                    for (i = 0; i < 4; i++) {
                        slot = Unit_GetHeldItemSlot(unit, i);
                        item = *slot;
                        if (item == NULL) {
                            break;
                        }
                        if (fn_8009339C(unit, item) != 0) {
                            if (*slot != NULL) {
                                v = Item_GetRangeForUnit(*slot, unit);
                            } else {
                                v = 0;
                            }
                            if (v > 1) {
                                if (slotLo != NULL) {
                                    if (*slotLo != NULL) {
                                        a = Item_GetRangeForUnit(*slotLo, unit);
                                    } else {
                                        a = 0;
                                    }
                                    if (*slot != NULL) {
                                        b = Item_GetRangeForUnit(*slot, unit);
                                    } else {
                                        b = 0;
                                    }
                                    if (b <= a) {
                                        if (*slotLo != NULL) {
                                            a = Item_GetRangeForUnit(*slotLo, unit);
                                        } else {
                                            a = 0;
                                        }
                                        if (*slot != NULL) {
                                            b = Item_GetRangeForUnit(*slot, unit);
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
                                bestLo = i;
                            } else {
                                if (slotHi != NULL) {
                                    t1 = fn_8001D500(slotHi);
                                    t2 = fn_8001D500(slot);
                                    if (t2 <= t1) {
                                        goto next_slot;
                                    }
                                }
                                slotHi = slot;
                                bestHi = i;
                            }
                        }
                    next_slot:
                        ;
                    }
                    if (slotHi != NULL || slotLo != NULL) {
                        spA = 0;
                        sp8 = 0;
                        if (slotHi != NULL && (u8)fn_80100F10(self, unit, slotHi) == 1) {
                            sp3C = lbl_80273220;
                            sp3C.unit = self;
                            sp3C.x = ((u8 *)self)[0x19E];
                            sp3C.y = ((u8 *)self)[0x19F];
                            sp3C.z = (u8)Unit_GetActiveItemSlot(self);
                            sp2C = lbl_80273210;
                            sp2C.unit = unit;
                            sp2C.x = ((u8 *)unit)[0x19E];
                            sp2C.y = ((u8 *)unit)[0x19F];
                            sp2C.z = (u8)bestHi;
                            Battle_SetupFromParams(gBattle, &sp2C, &sp3C);
                            fn_801A6F34(gBattle, 0xF);
                            diff = *(s16 *)(ui + 0x298) - *(s16 *)(ui + 0x57A);
                            if (diff < 0) {
                                diff = 0;
                            }
                            f1 = lbl_8036A0B0 * (f32)*(s16 *)((u8 *)gBattle + 0x2A2);
                            if (*(s16 *)((u8 *)gBattle + 0x29C) >= *(s16 *)(ui + 0x57C) + 4) {
                                f2 = lbl_8036A0B4 - f1;
                                f2 = f2 * f2;
                                diff = (s32)(lbl_8036A0B8 * (f32)diff * (lbl_8036A0B4 - f2));
                            } else {
                                diff = (s32)((f32)diff * f1);
                            }
                            spA = (u16)diff;
                            if ((u16)diff == 0) {
                                bestHi = -1;
                            }
                        }
                        if (slotLo != NULL && (u8)fn_80100F10(self, unit, slotLo) == 1) {
                            sp1C = lbl_80273220;
                            sp1C.unit = self;
                            sp1C.x = ((u8 *)self)[0x19E];
                            sp1C.y = ((u8 *)self)[0x19F];
                            sp1C.z = (u8)Unit_GetActiveItemSlot(self);
                            spC = lbl_80273210;
                            spC.unit = unit;
                            spC.x = ((u8 *)unit)[0x19E];
                            spC.y = ((u8 *)unit)[0x19F];
                            spC.z = (u8)bestLo;
                            Battle_SetupFromParams(gBattle, &spC, &sp1C);
                            fn_801A6F34(gBattle, 0xF);
                            diff = *(s16 *)(ui + 0x298) - *(s16 *)(ui + 0x57A);
                            if (diff < 0) {
                                diff = 0;
                            }
                            f1 = lbl_8036A0B0 * (f32)*(s16 *)((u8 *)gBattle + 0x2A2);
                            if (*(s16 *)((u8 *)gBattle + 0x29C) >= *(s16 *)(ui + 0x57C) + 4) {
                                f2 = lbl_8036A0B4 - f1;
                                f2 = f2 * f2;
                                diff = (s32)(lbl_8036A0B8 * (f32)diff * (lbl_8036A0B4 - f2));
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
    Map_FillLayer(gBattleMap, 7, 0);
}

#pragma use_lmw_stmw on
void fn_800FDDBC(s32 x, s32 y, s32 min, s32 max, s32 layer) {
    extern u8 gBattleMap[];
    void Map_FillLayer(void *, s32, s32);
    void Map_SelectRangeBuffer(void *, s32);
    void Map_FillAttackRange(void *, s8, s8, u8, u8);
    s32 left, top, right, bottom;
    s32 iy, ix;
    u8 *map = gBattleMap;
    Map_FillLayer(map, 8, 0);
    Map_SelectRangeBuffer(gBattleMap, layer);
    Map_FillAttackRange(gBattleMap, (s8)x, (s8)y, (u8)min, (u8)max);
    left = x - max;
    if (left < (s8)gBattleMap[8])
        left = (s8)gBattleMap[8];
    top = y - max;
    if (top < (s8)gBattleMap[9])
        top = (s8)gBattleMap[9];
    right = x + max;
    if (right > (s8)gBattleMap[10] - 1)
        right = (s8)gBattleMap[10] - 1;
    bottom = y + max;
    if (bottom > (s8)gBattleMap[11] - 1)
        bottom = (s8)gBattleMap[11] - 1;
    for (iy = top; iy <= bottom; iy++) {
        for (ix = left; ix <= right; ix++) {
            if ((*(s16 **)(map + 0x14190))[(s8)ix + ((s8)iy << 6)] >= 0 &&
                *(u16 *)(map + 0xC18E + ((s8)ix + ((s8)iy << 6)) * 2) == 0)
                (*(s16 **)(map + 0x14190))[(s8)ix + ((s8)iy << 6)] = -1;
        }
    }
}
#pragma opt_lifetimes off
void fn_800FDF38(s32 x,s32 y,u8 *path,s32 mode,s32 value) {
    extern u8 gBattleMap[];
    void Map_SelectRangeBuffer(void *,s32);
    register u8 *map=gBattleMap;
    Map_SelectRangeBuffer(map,mode);
    (*(u16 **)(gBattleMap+0x14190))[(s8)x+((s8)y<<6)]=(short)value;
    while(*path) {
        u8 outside;
        switch(*path) {
        case '4': x--; break;
        case '6': x++; break;
        case '8': y--; break;
        case '2': y++; break;
        }
        outside=0;
        if(x<(s8)gBattleMap[8] || (s8)gBattleMap[10]-1<x || y<(s8)gBattleMap[9] || (s8)gBattleMap[11]-1<y) outside=1;
        if(!outside) (*(u16 **)(map+0x14190))[(s8)x+((s8)y<<6)]=value;
        path++;
    }
}
#pragma opt_lifetimes reset
void fn_800FE074(u8 *unit, s32 arg1, s32 arg2) {
    void Map_FloodMoveRange(void *, u8, u8, u16, s32, s32);
    void fn_80022748(void *, void *);
    void fn_800227D0(void *, s32, s32);
    void fn_800227F8(void *, void *);
    void Map_SelectRangeBuffer(void *, s32);
    s8 Unit_GetMov(void *);
    u8 Status_Test(void *, s32);
    extern u8 gBattleMap[];
    s32 t14;
    s32 t15;
    s32 slot;
    s32 mov;
    u8 *u;
    u8 *map;
    u8 *p;

    u = unit;
    mov = arg2;
    map = gBattleMap;
    p = u + 0x1BC;
    t14 = Status_Test(p, 0x14) != 0;
    t15 = Status_Test(u + 0x1BC, 0x15) != 0;
    Map_SelectRangeBuffer(gBattleMap, arg1);
    fn_800227F8(gBattleMap, *(void **)(u + 0x18C));
    fn_800227D0(gBattleMap, 0x21, 1);
    fn_80022748(gBattleMap, 0);
    if (*(u32 *)(u + 0x254) & 0x20000) {
        fn_800227D0(map, 0x37, 0x30);
    }
    if (mov != -1) {
        slot = mov;
    } else {
        slot = Unit_GetMov(u);
    }
    Map_FloodMoveRange(map, u[0x19E], u[0x19F], (u16)slot, t14, t15);
}

void fn_800FE180(u8 *unit, s32 arg1, s32 arg2) {
    void Map_FloodMoveRange(void *, u8, u8, u16, s32, s32);
    void fn_80022748(void *, void *);
    void fn_800227D0(void *, s32, s32);
    void fn_800227F8(void *, void *);
    void Map_SelectRangeBuffer(void *, s32);
    s8 Unit_GetMov(void *);
    u8 Status_Test(void *, s32);
    extern u8 gBattleMap[];
    u8 *map;
    s32 t14;
    s32 t15;
    s32 slot;
    s32 mov;
    u8 *u;
    u8 *p;

    u = unit;
    mov = arg2;
    map = gBattleMap;
    p = u + 0x1BC;
    t14 = Status_Test(p, 0x14) != 0;
    t15 = Status_Test(u + 0x1BC, 0x15) != 0;
    Map_SelectRangeBuffer(gBattleMap, arg1);
    fn_800227F8(gBattleMap, *(void **)(u + 0x18C));
    fn_800227D0(gBattleMap, 0x1C, 1);
    fn_800227D0(gBattleMap, 0x21, 1);
    fn_80022748(gBattleMap, 0);
    if (*(u32 *)(u + 0x254) & 0x20000) {
        fn_800227D0(map, 0x37, 0x30);
    }
    if (mov != -1) {
        slot = mov;
    } else {
        slot = Unit_GetMov(u);
    }
    Map_FloodMoveRange(map, u[0x19E], u[0x19F], (u16)slot, t14, t15);
}

#pragma use_lmw_stmw on
#pragma dont_inline on
#pragma global_optimizer off
void Map_BuildUnitMoveRange(void *unit, s32 mode, s32 arg2) {
    void Map_FloodMoveRange(void *, u8, u8, u16, s32, s32);
    void fn_80022748(void *, void *);
    void fn_800227D0(void *, s32, s32);
    void fn_800227F8(void *, void *);
    void Map_SelectRangeBuffer(void *, s32);
    s8 Unit_GetMov(void *);
    u8 Status_Test(void *, s32);
    extern u8 gBattleMap[];
    s32 t14;
    s32 t15;
    s32 slot;
    s32 mov;
    u8 *u;
    u8 *map;
    u8 *p;

    u = unit;
    mov = arg2;
    map = gBattleMap;
    p = u + 0x1BC;
    t14 = Status_Test(p, 0x14) != 0;
    t15 = Status_Test(u + 0x1BC, 0x15) != 0;
    Map_SelectRangeBuffer(gBattleMap, mode);
    fn_800227F8(gBattleMap, *(void **)(u + 0x18C));
    fn_80022748(gBattleMap, *(void **)(u + 0x190));
    if (*(u32 *)(u + 0x254) & 0x20000) {
        fn_800227D0(map, 0x37, 0x30);
    }
    if (mov != -1) {
        slot = mov;
    } else {
        slot = Unit_GetMov(u);
    }
    Map_FloodMoveRange(map, u[0x19E], u[0x19F], (u16)slot, t14, t15);
}
#pragma global_optimizer reset
#pragma dont_inline reset
#pragma use_lmw_stmw reset

#pragma dont_inline on
#pragma global_optimizer off
void fn_800FE398(u8 *unit, s32 arg1, s32 arg2) {
    void Map_FloodMoveRange(void *, u8, u8, u16, s32, s32);
    void fn_80022748(void *, void *);
    void fn_800227D0(void *, s32, s32);
    void fn_800227F8(void *, void *);
    void Map_SelectRangeBuffer(void *, s32);
    s8 Unit_GetMov(void *);
    u8 Status_Test(void *, s32);
    extern u8 gBattleMap[];
    s32 t14;
    s32 t15;
    s32 slot;
    s32 mov;
    u8 *u;
    u8 *map;
    u8 *p;

    u = unit;
    mov = arg2;
    map = gBattleMap;
    p = u + 0x1BC;
    t14 = Status_Test(p, 0x14) != 0;
    t15 = Status_Test(u + 0x1BC, 0x15) != 0;
    Map_SelectRangeBuffer(gBattleMap, arg1);
    fn_800227F8(gBattleMap, *(void **)(u + 0x18C));
    fn_80022748(gBattleMap, 0);
    if (*(u32 *)(u + 0x254) & 0x20000) {
        fn_800227D0(map, 0x37, 0x30);
    }
    if (mov != -1) {
        slot = mov;
    } else {
        slot = Unit_GetMov(u);
    }
    Map_FloodMoveRange(map, u[0x19E], u[0x19F], (u16)slot, t14, t15);
}
#pragma global_optimizer reset
#pragma dont_inline reset
void fn_800FE490(s32 arg0, s32 arg1, u8 *unit, s32 arg3, s32 arg4) {
void Map_FloodMoveRange(void *, s8, s8, u16, s32, s32);
void fn_80022748(void *, void *); void fn_800227D0(void *, s32, s32);
void fn_800227F8(void *, void *); void Map_SelectRangeBuffer(void *, s32);
s8 Unit_GetMov(void *); u8 Status_Test(void *, s32); extern u8 gBattleMap[];
s32 t14; s32 slot; s32 mode; u8 *map;
map=gBattleMap; mode=arg3;
t14=Status_Test(unit+0x1BC,0x14)!=0;
arg3=Status_Test(unit+0x1BC,0x15)!=0;
Map_SelectRangeBuffer(gBattleMap,mode);
fn_800227F8(gBattleMap,*(void **)(unit+0x18C));
fn_80022748(gBattleMap,*(void **)(unit+0x190));
if (*(u32 *)(unit+0x254)&0x20000) fn_800227D0(map,0x37,0x30);
if(arg4!=-1) slot=arg4; else slot=Unit_GetMov(unit);
Map_FloodMoveRange(map,(s8)arg0,(s8)arg1,(u16)slot,t14,arg3);
}
#pragma use_lmw_stmw reset

#pragma dont_inline on
#pragma global_optimizer off
void fn_800FE590(s32 arg0, s32 arg1, u8 *unit, s32 arg3, s32 arg4)
{
    void Map_FloodMoveRange(void *, s8, s8, u16, s32, s32);
    void fn_80022748(void *, void *);
    void fn_800227D0(void *, s32, s32);
    void fn_800227F8(void *, void *);
    void Map_SelectRangeBuffer(void *, s32);
    s8 Unit_GetMov(void *);
    u8 Status_Test(void *, s32);
    extern u8 gBattleMap[];
    u8 *map;
    s32 t14;
    s32 t15;
    s32 slot;

    map = gBattleMap;
    t14 = Status_Test(unit + 0x1BC, 0x14) != 0;
    t15 = Status_Test(unit + 0x1BC, 0x15) != 0;
    Map_SelectRangeBuffer(gBattleMap, arg3);
    fn_800227F8(gBattleMap, *(void **)(unit + 0x18C));
    fn_80022748(gBattleMap, 0);
    if (*(u32 *)(unit + 0x254) & 0x20000) {
        fn_800227D0(map, 0x37, 0x30);
    }
    if (arg4 != -1) {
        slot = arg4;
    } else {
        slot = Unit_GetMov(unit);
    }
    Map_FloodMoveRange(map, (s8)arg0, (s8)arg1, (u16)slot, t14, t15);
}
#pragma global_optimizer reset
#pragma dont_inline reset

#pragma use_lmw_stmw reset

static inline s32 fn_800FE770_Has(void *obj, s32 id, s32 def) {
    u8 Status_Test(void *, s32);
    if (obj != NULL) {
        return Status_Test((u8*)obj+0x1C,id) != 0;
    }
    return def;
}
#pragma optimization_level 2
void fn_800FE690(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5) {
    void Map_SelectRangeBuffer(void *, s32);
    void fn_800227F8(void *, void *);
    void fn_80022748(void *, s32);
    void Map_FloodMoveRange(void *, s8, s8, u16, s32, s32);
    extern u8 gBattleMap[];

    void *map;

    map = gBattleMap;
    Map_SelectRangeBuffer(map, arg4);
    fn_800227F8(gBattleMap, arg2);
    fn_80022748(gBattleMap, arg3);
    Map_FloodMoveRange(map, (s8)arg0, (s8)arg1, (u16)arg5,
        fn_800FE770_Has(arg2, 0x14, 1), fn_800FE770_Has(arg2, 0x15, 0));
}
#pragma optimization_level reset
void fn_800FE770(s32 arg0, s32 arg1, void *arg2, s32 arg3, u32 arg4) {
void Map_FloodMoveRange(void *, s8, s8, u16, s32, s32);
void fn_80022748(void *, s32);
void fn_800227F8(void *, void *);
void Map_SelectRangeBuffer(void *, s32);
u8 Status_Test(void *, s32);
extern u8 gBattleMap[];
u32 flags; s32 y; s32 x; u8 *map; void *obj;
x=arg0; y=arg1; obj=arg2; flags=arg4; map=gBattleMap;
Map_SelectRangeBuffer(map,arg3); fn_800227F8(map,obj); fn_80022748(map,0);
Map_FloodMoveRange(map,x,y,flags,fn_800FE770_Has(obj,0x14,1),fn_800FE770_Has(obj,0x15,0));
}
#pragma optimization_level reset
static inline u8 Map_AiTerrainIs26Or27(s32 blocked, u8 terrain) {
    u8 result = blocked;
    if (!((u8)(terrain - 0x26) <= 1)) {
        result = 0;
    }
    return result;
}

static inline u8 Map_AiTerrainIs26To28(s32 blocked, u8 terrain) {
    u8 result = blocked;
    if ((u8)Map_AiTerrainIs26Or27(blocked, terrain) == 0 && terrain != 0x28) {
        result = 0;
    }
    return result;
}

static inline s32 Map_AiTerrainTest(s32 blocked, s8 x, s8 y) {
    extern u8 gBattleMap[];
    s32 result = blocked;
    u8 terrain = (gBattleMap + x + (y << 6))[0x100D];
    if ((u8)Map_AiTerrainIs26To28(blocked, terrain) == 0 && terrain != 0x2A) {
        result = 0;
    }
    return result;
}

s32 Map_IsAiTerrainBlocked(s8 x, s8 y) {
    extern u8 gBattleState[];
    if (gBattleState[0x11] != 2) {
        return 0;
    }
    return Map_AiTerrainTest(1, x, y);
}
#pragma optimization_level reset
s32 fn_800FE8E8(void *arg0, void *arg1) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x24C) < (u32) M2C_FIELD(arg1, u32 *, 0x24C);
}

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off
s32 Battle_BuildUnitScoreList(void) {
    /* Score on-map faction units by position, status and inventory; fill the battle priority list and return its count. */
    u8 Ai_GetFactionBehavior(void *);
    u8 Item_GetRangeForUnit(void *, void *);
    void **Unit_GetHeldItemSlot(void *, s32);
    s8 Unit_GetMov(void *);
    u8 fn_800934CC(void *, void *);
    s32 fn_800FCF48(u8, u8);
    u8 fn_80102EA8(void *);
    u8 Status_Test(void *, s32);
    u8 Unit_HasLowHpAi(void *);
    extern u8 gBattleState[];
    extern u8 gUnitLists[];
    extern u8 gBattleMap[];
    extern s32 sUnitScoreFloorSpecial;
    extern s32 sUnitScoreFloorDefault;
    extern u8 gAiState[];
    s32 scoreScratch;
    u8 *map;
    s32 i;
    u32 itemScore;
    void *next;
    void *item;
    s32 count;
    void *unit;
    s32 listOff;
    u8 outOfBounds;
    u8 tx;
    u8 ty;
    u16 dist;
    s32 result;
    s32 *floorPtr;
    s32 neg;
    s32 move;

    count = 0;
    listOff = 0;
    unit = *(void **)(gUnitLists + gBattleState[0x11] * 0xC);
    map = gBattleMap;
    while (unit != NULL) {
        tx = *(u8 *)((u8 *)unit + 0x19E);
        outOfBounds = 0;
        next = *(void **)((u8 *)unit + 0x184);
        ty = *(u8 *)((u8 *)unit + 0x19F);
        if (((s8)tx < *(s8 *)(map + 8))
            || ((s32)(*(s8 *)(map + 0xA) - 1) < (s8)tx)
            || ((s8)ty < *(s8 *)(map + 9))
            || ((s32)(*(s8 *)(map + 0xB) - 1) < (s8)ty)) {
            outOfBounds = 1;
        }
        if (outOfBounds == 0
            && ((*(u16 *)((u8 *)unit + 0x1A4) >> 7) & 7) == 0
            && (*(u8 *)((u8 *)unit + 0x1A5) & 7) == 0
            && (*(u32 *)((u8 *)unit + 0x1A0) & 0x9D) == 0
            && (fn_80102EA8(unit) == 0 || Ai_GetFactionBehavior((u8 *)unit + 0x236) != 0)) {
            dist = fn_800FCF48(*(u8 *)((u8 *)unit + 0x19E), *(u8 *)((u8 *)unit + 0x19F));
            move = (s8)Unit_GetMov(unit);
            neg = -(move + dist);
            scoreScratch = neg;
            scoreScratch = neg + ((*(s8 *)((u8 *)unit + 0x248) + 0x80) << 16);
            if (Status_Test((void *)((s32)unit + 0x1BC), 0x18) != 0) {
                result = scoreScratch + 0x578;
            } else if (Unit_HasLowHpAi(unit) != 0
                && (*(u32 *)((u8 *)unit + 0x254) & 1)
                && (fn_80102EA8(unit) == 0 || (u8)Ai_GetFactionBehavior((u8 *)unit + 0x236) == 6)) {
                floorPtr = &scoreScratch;
                if (scoreScratch < sUnitScoreFloorSpecial) {
                    floorPtr = &sUnitScoreFloorSpecial;
                }
                result = *floorPtr;
            } else if (Status_Test((u8 *)unit + 0x1BC, 0x3C) != 0) {
                result = scoreScratch + 0x320;
            } else {
                s32 *p;
                s32 tmp;
                itemScore = 0x4B0;
                for (i = 0; i < 4; i++) {
                    if (*Unit_GetHeldItemSlot(unit, i) == NULL) {
                        break;
                    }
                    item = *Unit_GetHeldItemSlot(unit, i);
                    if (fn_800934CC(unit, item) != 0) {
                        if ((*(u64 *)((u8 *)item + 0x38) & 4ULL) != 0) {
                            if (itemScore > 0xC8) {
                                itemScore = 0xC8;
                            }
                        } else if ((*(u64 *)((u8 *)item + 0x38) & 3ULL) != 0) {
                            if ((u8)Item_GetRangeForUnit(item, unit) > 1) {
                                if (itemScore > 0x190) {
                                    itemScore = 0x190;
                                }
                            } else if (itemScore > 0x258) {
                                itemScore = 0x258;
                            }
                        }
                    }
                }
                scoreScratch += itemScore;
                result = *(scoreScratch < sUnitScoreFloorDefault ? &sUnitScoreFloorDefault : &scoreScratch);
            }
            *(s32 *)((u8 *)unit + 0x24C) = result;
            count += 1;
            *(void **)((u8 *)gAiState + listOff + 0x18) = unit;
            listOff += 4;
        }
        unit = next;
    }
    return count;
}

#pragma opt_common_subs off
void fn_800FEC0C(void) {
    extern u8 gBattleState[];
    extern u8 gUnitLists[];
    extern u8 gAiState[];

    void fn_800FC6B0(void *);
    s32 Battle_BuildUnitScoreList(void);
    s32 fn_800FE8E8(void *, void *);
    void fn_800FEC9C(void *, void *, void *);

    void **table;
    s32 count;

    fn_800FC6B0(gUnitLists + gBattleState[0x11] * 12);

    count = Battle_BuildUnitScoreList();
    table = (void **)(gAiState + 0x18);

    fn_800FEC9C(table, table + count, fn_800FE8E8);

    *(void **)((u8 *)table + (count * 4)) = NULL;

    *(void **)(gAiState + 0x218) = table;
}

#pragma push
#pragma optimization_level 4
#pragma opt_lifetimes off
static inline s32 *Sort_PivotAt(s32 *begin, s32 offset) {
    extern s32 lbl_80367910;
    s32 *pivot = begin + (offset + lbl_80367910 % 5);
    if (++lbl_80367910 >= 5) lbl_80367910 = -4;
    return pivot;
}

#pragma push
#pragma optimization_level 4
#pragma opt_lifetimes off
void fn_800FEC9C(s32 *begin, s32 *end, u8 (*cmp)(s32, s32)) {
    void fn_800FEC9C(s32 *, s32 *, u8 (*)(s32, s32));
    void Sort_Three(s32 *, s32 *, s32 *, u8 (*)(s32, s32));
    void Sort_Selection(s32 *, s32 *, u8 (*)(s32, s32));
    extern s32 lbl_80367910;
    extern s8 lbl_80367914;
    s32 *i;
    s32 *last;
    s32 *j;
    s32 *a;
    s32 *b;
    s32 n;
    s32 r;
    s32 tmp;
    u8 ordered;

    while (1) {
        n = end - begin;
        if (n <= 1) {
            return;
        }
        if (n <= 20) {
            Sort_Selection(begin, end, cmp);
            return;
        }
        if (lbl_80367914 == 0) {
            lbl_80367910 = -4;
            lbl_80367914 = 1;
        }
        a = Sort_PivotAt(begin, n / 4);
        b = Sort_PivotAt(begin, n * 3 / 4);
        last = end - 1;
        Sort_Three(a, b, last, cmp);
        i = begin;
        j = last;
        while (cmp(*i, *last)) ++i;
        do { --j; } while (i != j && !cmp(*j, *last));
        if (i < j) {
            tmp = *i; *i = *j; *j = tmp;
            ++i;
            for (;;) {
                while (cmp(*i, *last)) ++i;
                do { --j; } while (!cmp(*j, *last));
                if (i >= j) break;
                tmp = *i; *i = *j; *j = tmp;
                ++i;
            }
        }
        if (i == begin) {
            tmp = *i; *i = *last; *last = tmp;
            ++i;
            ordered = cmp(*begin, *(end - 1));
            last = end - 1;
            if (!ordered) {
                while (i != end && !cmp(*begin, *i)) ++i;
                if (i < last) {
                    tmp = *i; *i = *last; *last = tmp;
                }
            }
            if (i < last) for (;;) {
                while (!cmp(*begin, *i)) ++i;
                do { --last; } while (cmp(*begin, *last));
                if (i < last) {
                    tmp = *i; *i = *last; *last = tmp;
                    ++i;
                } else break;
            }
            begin = i;
            continue;
        }
        if ((i - begin) < (end - i)) {
            fn_800FEC9C(begin, i, cmp);
            begin = i;
        } else {
            fn_800FEC9C(i, end, cmp);
            end = i;
        }
    }
}
#pragma pop

void Sort_Three(s32 *left, s32 *mid, s32 *right, u8 (*less)(s32, s32)) {
    s32 *c;
    s32 *b;
    s32 *a;
    s32 notRightLtLeft;
    u8 (*cmp)(s32, s32);

    /* Sort three elements in place so *left <= *mid <= *right per cmp. */
    c = right;
    b = mid;
    a = left;
    cmp = less;

    notRightLtLeft = ((u8)cmp(*c, *a) == 0);
    {
        s32 notMidLtRight = ((u8)cmp(*b, *c) == 0);
        if ((u8)notRightLtLeft) {
            if ((u8)notMidLtRight) {
                return;
            }
        }
        if ((u8)notRightLtLeft) {
            goto sort;
        }
        if ((u8)notMidLtRight) {
            goto sort;
        }
        {
            s32 tmp = *a;
            *a = *b;
            *b = tmp;
        }
        return;
    }
sort:
    if ((u8)cmp(*b, *a) != 0) {
        s32 tmp = *a;
        *a = *b;
        *b = tmp;
    }
    if ((u8)notRightLtLeft) {
        s32 tmp = *b;
        *b = *c;
        *c = tmp;
    } else {
        s32 tmp = *a;
        *a = *c;
        *c = tmp;
    }
}

void Sort_Selection(s32 *arg0, s32 *arg1, u8 (*arg2)(s32, s32)) {
    s32 *best;
    s32 *scan;
    s32 *end;
    s32 temp;

    if (arg0 == arg1) {
        return;
    }

    end = arg1 - 1;

    while (arg0 < end) {
        best = arg0;

        if (arg0 != arg1) {
            scan = arg0 + 1;
            while (scan != arg1) {
                if (arg2(*scan, *best) != 0) {
                    best = scan;
                }
                scan++;
            }
        }

        if (best != arg0) {
            temp = *best;
            *best = *arg0;
            *arg0 = temp;
        }

        arg0++;
    }
}

/* If auto-equip is allowed, pick the highest-scored usable held weapon with range > 1. */
void Ai_SelectBestHeldWeapon(void) {
    extern u8 gUiContext[];
    extern u8 gAiState[];
    void **Unit_GetHeldItemSlot(void *, s32);
    s32 fn_8001D500(void **);
    s32 Item_GetRangeForUnit(void *, void *);
    s32 fn_8009339C(void *, void *);
    void fn_800951D0(void *, s32);
    void *unit;
    s8 bestSlot;
    s8 bestScore;
    s8 i;
    void **slot;
    void *item;
    u8 doSelect;
    u8 kind;
    u8 range;
    s32 cmd;

    unit = *(void **)gUiContext;
    if ((s8)gUiContext[0x12] != 0) {
        doSelect = 0;
    } else if (gAiState[1] & 4) {
        doSelect = 0;
    } else if (*(s32 *)((u8 *)unit + 0x1A0) & 0x18) {
        doSelect = 0;
    } else {
        cmd = gUiContext[8];
        if (cmd < 0x15) {
            if (cmd == 0xF) {
                goto L_zero;
            }
            goto L_one;
        }
        if (cmd < 0x17) {
L_zero:
            doSelect = 0;
        } else {
L_one:
            doSelect = 1;
        }
    }

    if (doSelect != 0) {
        bestSlot = -1;
        bestScore = -0x80;
        for (i = 0; i < 4; i++) {
            slot = Unit_GetHeldItemSlot(unit, i);
            if (*slot == NULL) {
                break;
            }
            if ((u8)fn_8009339C(unit, *slot) != 0) {
                item = *slot;
                if (item != NULL) {
                    kind = *(u8 *)((u8 *)item + 0x1D);
                } else {
                    kind = 0;
                }
                if (kind <= 1) {
                    if (item != NULL) {
                        range = Item_GetRangeForUnit(item, unit);
                    } else {
                        range = 0;
                    }
                    if (range > 1) {
                        if (bestScore < (s32)(u8)fn_8001D500(slot)) {
                            bestScore = fn_8001D500(slot);
                            bestSlot = i;
                        }
                    }
                }
            }
        }
        fn_800951D0(unit, bestSlot);
    }
}

void fn_800FF2EC(void) {
    extern u32 gUiContext[12];
    
    fn_80027038(gUiContext);
    UiCtx_EndMoveSelect(gUiContext, 1);
    
    if (gUiContext[0] != 0) {
        if (((u32 *) gUiContext[0])[0x188 / 4] != 0) {
            fn_801007A0((void *) gUiContext[0]);
        }
    }
    
    if (gUiContext[1] != 0) {
        if (((u32 *) gUiContext[1])[0x188 / 4] != 0) {
            fn_801007A0((void *) gUiContext[1]);
        }
    }
}

void fn_800FF36C(void *arg0) {
    M2C_UNK Process_ClearFunc(void *);
    u8 (*temp_r12)();
    u8 var_r3;

    temp_r12 = M2C_FIELD(arg0, u8 (**)(), 0x30);
    if (temp_r12 != NULL) {
        var_r3 = temp_r12();
    } else {
        var_r3 = 1;
    }
    if (var_r3 == 1) {
        Process_ClearFunc(arg0);
    }
}

void fn_800FF3C4(void *arg0)
{
    extern u8 gUiContext[];
    extern void fn_800271C8(void *, void *);
    u8 *p;

    p = gUiContext;
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

void fn_800FF424(void *parent) {
    extern struct {
        s8 *unit0;
        s8 *unit4;
        u8 mode;
        u8 pad9[4];
        s8 x1;
        s8 y1;
        s8 x2;
        s8 y2;
    } gUiContext;
    extern u8 lbl_8028E858[];
    void fn_800280C8(void *, u8, u8);
    void *Process_CreateChild(void *, void *);
    s32 x;
    s16 y;
    s8 *unit;
    u8 *child;
    u8 *ctx = (u8 *)&gUiContext;

    fn_800280C8(ctx, gUiContext.x1, gUiContext.y1);
    switch (gUiContext.mode) {
    case 0:
        return;
    case 1:
    case 4:
    case 14:
    case 19:
    case 20:
    case 22:
    case 23:
        x = ((s8 *)ctx)[13];
        y = ((s8 *)ctx)[14] - 1;
        break;
    case 10:
    case 11:
    case 12:
        x = gUiContext.x2;
        y = gUiContext.y2;
        break;
    case 7:
    case 15:
    case 16:
    case 17:
    case 18:
    case 21:
        unit = *(s8 **)(ctx + 4) ? *(s8 **)(ctx + 4) : *(s8 **)ctx;
        x = unit[0x19e];
        y = unit[0x19f];
        break;
    case 49:
    default:
        return;
    }
    child = Process_CreateChild(lbl_8028E858, parent);
    *(f32 *)(child + 0x30) = (s8)x;
    *(f32 *)(child + 0x34) = (s8)y;
    *(u32 *)(child + 0x60) = 0;
    *(u32 *)(child + 0x64) = 0;
}

void fn_800FF564(void *arg0) {
    extern u8 gUiContext[], gBattleState[], gBattleMap[];
    s32 Status_Test(void *, s32);
    u8 fn_8001FB04(void *, s8 *, s8 *, s32, u8 *);
    void BattleState_SetCamPos(void *, f32, f32);
    void MoveAnim_BindMapPath(void *, void *);
    void Map_BuildUnitMoveRange(void *, s32, s32);
    u8 *fn_8001FC40(void *, u8, u8);
    void MoveAnim_BindPath(void *, u8 *, u16, void *);
    u8 *ui;
    s8 x;
    s8 y;
    u8 *unit;
    s32 status;

    ui = gUiContext;
    unit = *(u8 **)ui;
    status = Status_Test(unit + 0x1bc, 4);
    x = *(s8 *)(unit + 0x19e);
    y = *(s8 *)(unit + 0x19f);
    if (unit[0x260] == 0x10) {
        Map_BuildUnitMoveRange(unit, 5, -1);
        fn_8001FC40(gBattleMap, ui[0xd], ui[0xe]);
        switch (fn_8001FB04(gBattleMap, &x, &y, status, 0)) {
        case 2:
            BattleState_SetCamPos(gBattleState, x, y);
            {
                s8 ty = y;
                ui[8] = 0x2d;
                ui[0xd] = x;
                ui[0xe] = ty;
            }
            break;
        }
        if (((u8 *)arg0)[0x34] != 0)
            MoveAnim_BindMapPath(unit, arg0);
    } else {
        switch (fn_8001FB04(gBattleMap, &x, &y, status, unit + 0x260)) {
        case 2:
            BattleState_SetCamPos(gBattleState, x, y);
            {
                s8 ty = y;
                ui[8] = 0x2d;
                ui[0xd] = x;
                ui[0xe] = ty;
            }
            break;
        }
        if (((u8 *)arg0)[0x34] != 0)
            MoveAnim_BindPath(unit, unit + 0x260, 0x40, arg0);
    }
}

#pragma global_optimizer off
void fn_800FF75C(void *arg0) {
void BattleState_SetCamPos(void *,f32,f32);
extern u8 gUiContext[],gBattleMap[],gBattleState[],gMapBlendMode;
u8 *ctx;
u32 t;
u8 *map;
s32 flag;
u8 y,x;
MapVisibilityCell *cell;
ctx=gUiContext;map=gBattleMap;flag=1;
*(u8*)((u8*)arg0+0x34)=flag;
t=((u8)(gMapBlendMode-1)<=(u32)flag);
if(!t) flag=0;
if((u8)flag && gBattleState[0x11]==1) {
y=ctx[12];x=ctx[11];
cell=(MapVisibilityCell*)(map+(s8)x);
cell=(MapVisibilityCell*)((u8*)cell+((s8)y<<6));
if(cell->value) goto visible;
cell=(MapVisibilityCell*)(map+(s8)ctx[13]);
cell=(MapVisibilityCell*)((u8*)cell+((s8)ctx[14]<<6));
if(cell->value) {
visible:
BattleState_SetCamPos(gBattleState,(f32)(s8)x,(f32)(s8)y);
} else {
*(u8*)((u8*)arg0+0x34)=0;
if(ctx[8]==0x25) BattleState_SetCamPos(gBattleState,(f32)(s8)ctx[11],(f32)(s8)ctx[12]);
}
} else {
BattleState_SetCamPos(gBattleState,(f32)(s8)ctx[11],(f32)(s8)ctx[12]);
}
}
#pragma global_optimizer reset
void fn_800FF918(s32 arg0) {
    extern u16 lbl_8028E888[66];
    Process_CreateChild(lbl_8028E888, arg0);
    fn_800288E4();
}

void fn_800FF948(void *arg0) {
    void Process_ClearFunc(void *);
    void fn_800F20E0(void);
    extern void *gPadInput;
    s32 *counter;

    if ((*(u32 *)((u8 *)gPadInput + 4) & 0x1100) != 0
        || *(s32 *)((u8 *)arg0 + 0x64) > 0x2D) {
        Process_ClearFunc(arg0);
    } else {
        fn_800F20E0();
        counter = (s32 *)((u8 *)arg0 + 0x64);
        *counter = *counter + 1;
    }
}

#pragma optimization_level 3
void fn_800FF9A8(void *arg0) {
    void Process_Goto(void *, s32);
    void BattleState_SetCamPos(void *, f32, f32);
    extern u8 gMapBlendMode;
    extern u8 gBattleState[];
    extern u8 gBattleMap[];
    s32 f;
    s32 t;

    f = 1;
    t = (u8)(gMapBlendMode - 1);
    if (((u32)((f | ~t) - ((u32)(f - t) >> 1)) >> 31) == 0) {
        f = 0;
    }
    if ((u8)f != 0) {
        if (gBattleState[0x11] == 1) {
            f32 f1 = *(f32 *)((u8 *)arg0 + 0x30);
            f32 f0 = *(f32 *)((u8 *)arg0 + 0x34);
            if (*(u8 *)(gBattleMap + (s8)(s32)f1 + ((s8)(s32)f0 << 6) + 0x200D) == 0) {
                Process_Goto(arg0, 0x63);
                return;
            }
        }
    }
    BattleState_SetCamPos(gBattleState, *(f32 *)((u8 *)arg0 + 0x30), *(f32 *)((u8 *)arg0 + 0x34));
}
#pragma global_optimizer off
void fn_800FFA78(void *arg0) {
    void fn_801848D8(void *, s32, s32, s32);
    extern u8 gMapBlendMode;
    extern u8 gBattleState[];
    extern u8 gBattleMap[];
    extern u8 gUiContext[];

    void *saved;
    s32 flag;
    u32 t;
    u8 *map;
    u8 *ctx;
    MapVisibilityCell *cell;

    flag = 1;
    saved = *(void **)gUiContext;
    t = ((u8)(gMapBlendMode - 1) <= (u32)flag);
    if (!t) {
        flag = 0;
    }
    if ((u8)flag && gBattleState[0x11] == 1) {
        map = gBattleMap;
        ctx = gUiContext;
        cell = (MapVisibilityCell *)(map + (s8)ctx[0xD]);
        cell = (MapVisibilityCell *)((u8 *)cell + ((s8)ctx[0xE] << 6));
        if (cell->value == 0) {
            return;
        }
    }
    fn_801848D8(saved, (s32)*(f32 *)((u8 *)arg0 + 0x30), (s32)*(f32 *)((u8 *)arg0 + 0x34), 0x10);
}
#pragma global_optimizer reset
void fn_800FFB4C(void *arg0, s16 arg1, s16 arg2) {
    void fn_8002F728(void *);
    void fn_8002C6F4(void *, s8, s8);
    extern u8 lbl_80284E20[];
    extern u8 lbl_8028EAB8[];
    extern u8 gTargetList[];

    void **pp;
    void *vtbl;
    s32 x;
    s32 y;

    pp = &vtbl;
    vtbl = lbl_80284E20;
    vtbl = lbl_8028EAB8;
    fn_8002F728(gTargetList);

    if (arg2 < 0) {
        y = *(s8 *)((u8 *)arg0 + 0x19F);
    } else {
        y = arg2;
    }
    if (arg1 < 0) {
        x = *(s8 *)((u8 *)arg0 + 0x19E);
    } else {
        x = arg1;
    }
    fn_8002C6F4(pp, (s8)x, (s8)y);
}
#pragma use_lmw_stmw reset

void fn_800FFC00(s32 arg0, s32 arg1) {
    void fn_8002C47C(void *, s32);
    void fn_8002F728(void *);
    extern u8 lbl_80284E20[];
    extern u8 lbl_8028EAA8[];
    extern u8 gTargetList[];
    struct {
        void *vtbl;
        s32 unk4;
        s32 unk8;
    } obj;

    obj.vtbl = lbl_80284E20;
    obj.unk4 = arg0;
    obj.vtbl = lbl_8028EAA8;
    obj.unk8 = arg1;
    fn_8002F728(gTargetList);
    fn_8002C47C(&obj, 0);
}

#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
s32 fn_800FFC58(u8 (*arg0)(void *), void *unit, u8 arg2, float farg0) {
    s8 Unit_GetMov(void *);
    void *Unit_GetActiveItemPtr(void *);
    u8 Item_GetRangeForUnit(void *, void *);
    void **Unit_GetHeldItemSlot(void *, s32);
    u8 fn_8009339C(void *, void *);
    void fn_800FE398(void *, s32, s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
    extern u8 gBattleMap[];
    extern u8 gUnits[];

    u8 *map;
    s32 rowOff;
    u8 *row;
    register s32 range;
    s32 count;
    s32 x_lo, x_hi, y_hi, y, x;
    void *u = unit;
    u8 (*cb)(void *) = arg0;
    u8 *tile;
    u8 flg = arg2;
    void **slot;
    void *item, *other;
    u8 *cell;
    s32 ux, uy, y_lo, idx2;
    u8 v;
    s32 i;

    range = Unit_GetMov(u);
    range = (s32)((float)range * farg0);
    if ((u8)flg != 0) {
        slot = (void **)Unit_GetActiveItemPtr(u);
        if ((slot != 0) && (*slot != 0)) {
            v = (*slot != 0) ? Item_GetRangeForUnit(*slot, u) : 0;
            range += (u8)v;
        } else {
            for (i = 0; i < 4; i++) {
                slot = Unit_GetHeldItemSlot(u, i);
                if (*slot == 0) {
                    break;
                }
                if ((u8)fn_8009339C(u, *slot) != 0) {
                    item = *slot;
                    v = (item != 0) ? Item_GetRangeForUnit(item, u) : 0;
                    range += (u8)v;
                }
            }
        }
    }
    fn_800FE398(u, 6, range);

    count = 0;
    ux = *(s8 *)((u8 *)u + 0x19E);
    uy = *(s8 *)((u8 *)u + 0x19F);
    x_lo = ux - range;
    if (x_lo < (s8)gBattleMap[8]) {
        x_lo = (s8)gBattleMap[8];
    }
    y_lo = uy - range;
    if (y_lo < (s8)gBattleMap[9]) {
        y_lo = (s8)gBattleMap[9];
    }
    x_hi = ux + range;
    if (x_hi > (s8)gBattleMap[0xA] - 1) {
        x_hi = (s8)gBattleMap[0xA] - 1;
    }
    y_hi = uy + range;
    if (y_hi > (s8)gBattleMap[0xB] - 1) {
        y_hi = (s8)gBattleMap[0xB] - 1;
    }
    map = gBattleMap;
    y = y_lo;
    goto y_cond;
  y_body:
    rowOff = (s32)(s8)y << 6;
    row = map + rowOff;
    x = x_lo;
    goto x_cond;
  x_body:
    idx2 = (s8)x + rowOff;
    cell = map + (idx2 * 2);
    if (*(s16 *)(cell + 0x818E) < 0) {
        goto x_next;
    }
    tile = row + (s8)x;
    if ((s8)tile[0xE18E] != 0) {
        goto x_next;
    }
    if (Map_IsAiTerrainBlocked((s8)x, (s8)y) != 0) {
        goto x_next;
    }
    if (tile[0xD] == 0) {
        goto x_next;
    }
    other = tile[0xD] ? gUnits + (tile[0xD] - 1) * 0x280 : 0;
    if (other != u && cb(other) != 0) {
        count++;
    }
  x_next:
    x++;
  x_cond:
    if (x <= x_hi) {
        goto x_body;
    }
    y++;
  y_cond:
    if (y <= y_hi) {
        goto y_body;
    }
    return count;
}
#pragma pop
#pragma push
#pragma optimization_level 3
#pragma dont_inline on
s32 fn_800FFEFC(void *arg0, s32 flags, s16 *arg2, s16 *arg3) {
    extern u8 gBattleMap[], gMapObjEventList[], gUnits[];
    extern s16 lbl_802732A0[];
    s32 fn_8010FF88(void *);
    u8 Ai_UnitIsHostileToActive(void *);
    s32 y, x, i;
    s16 *cost;
    s16 bestY, bestX, best;
    u32 flag;
    u8 *event;
    u8 *events;
    s32 count;
    s32 j;
    u8 *map;
    s32 dx;
    fn_800FE074(arg0, 6, ((s32 *)gBattleMap)[0] * ((s32 *)gBattleMap)[1]);
    event=gMapObjEventList;
    events=event;
    map=gBattleMap;
    best = 0x7FFF;
    flag = flags & 2;
    for (i=0; i<fn_8010FF88(events); i++, event+=8) {
        if (event[2] != 4 || event[4] == 0) continue;
        y=*(s8 *)(event+1); x=*(s8 *)event;
        cost=(s16 *)(gBattleMap + 0x818E + 2*(x+(y<<6)));
        if (*cost < 0) continue;
        if (flag) {
            count=0;
            j=0;
            while ((dx=lbl_802732A0[j]) != 0x7FFF) {
                s32 ny; s32 oob; s32 nx;
                nx=x+dx; ny=y+lbl_802732A0[j+1]; oob=0;
                if (nx<(s8)map[8] || (s8)map[10]-1<nx || ny<(s8)map[9] || (s8)map[11]-1<ny) oob=1;
                if ((u8)oob == 0) {
                    u8 id=*(gBattleMap+(s8)nx+((s8)ny<<6)+0xD);
                    if (id) {
                        void *unit;
                        if(id) unit=gUnits+(id-1)*0x280; else unit=0;
                        if(Ai_UnitIsHostileToActive(unit)) count++;
                    }
                }
                j+=2;
            }
            if(count) continue;
        }
        if (*cost < best) { best=*cost; bestX=x; bestY=y; }
    }
    if(best!=0x7FFF) { *arg2=bestX; *arg3=bestY; }
    return best!=0x7FFF;
}
#pragma pop
void fn_80100104(s32 a0, s32 a1, s32 a2, s32 a3) {
    extern void Ai_FindActionTile(s32, s32, s32, s32, s32);
    Ai_FindActionTile(a0, a1, 0x25, a2, a3);
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
    void *Item_GetByIid(void *);
    s32 result;

    result = 0;
    if (arg0 == Item_GetByIid((char *)&lbl_80273304 + 0xCE)) {
        result = 1;
    } else if (arg0 == Item_GetByIid((char *)&lbl_80273304 + 0xDE)) {
        result = 2;
    } else if (arg0 == Item_GetByIid((char *)&lbl_80273304 + 0xEA)) {
        result = 0x80;
    }
    return result;
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma use_lmw_stmw on
s32 fn_80100284(void *self, u8 mode, u32 arg2, s16 *out_x, s16 *out_y) {
    u8 Allegiance_Compare(s32, s32);
    void fn_8002C618(void *, s8, s8);
    void fn_8002F728(void *);
    u8 Ai_UnitIsHostileToActive(void *);
    void fn_800FE180(void *, s32, s32);
    void Map_BuildUnitMoveRange(void *, s32, s32);
    void fn_800FE398(void *, s32, s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
    extern u8 gBattleMap[];
    extern u8 gUnits[];
    extern s16 lbl_802732A0[];
    extern u8 lbl_80284E20[];
    extern u8 lbl_8028EA98[];
    extern s32 gTargetList[];

    u32 keep_bit;
    u32 flags = arg2;
    u8 *map2;
    AiActionMap *map;
    s16 *neigh;
    s32 ncount, yrow;
    u8 *rowbase, *maprow;
    s32 idx;
    s16 best_cost, best_alt;
    s32 y, x;
    u8 *costcell;
    s32 short_y, byte_x, short_x;
    s32 nx, ny;
    s32 dx;
    u8 out_of_bounds, cell;
    void *unit;
    s16 cost, alt;
    s32 best_x, best_y;
    void *ctx[3], *ctx2[3];

    map2 = gBattleMap;
    best_cost = 0x7FFF;
    best_alt = -1;

    Map_BuildUnitMoveRange(self, 5, -1);
    if (flags & 0x100) {
        fn_800FE180(self, 6, *(s32 *)gBattleMap * *(s32 *)(gBattleMap + 4));
    } else {
        fn_800FE398(self, 6, *(s32 *)gBattleMap * *(s32 *)(gBattleMap + 4));
    }
    if (flags & 4) {
        mode &= (u8)~1;
    }
    if (flags & 8) {
        mode &= ~2;
    }
    map = (AiActionMap *)gBattleMap;
    keep_bit = flags & 1;
    flags &= 2;
    y = map->yMin;
    while (y <= map->yMax - 1) {
        yrow = (s8)y << 6;
        x = map->xMin;
        short_y = (s16)y;
        rowbase = (u8 *)map + yrow;
        maprow = map2 + yrow;
        while (x <= map->xMax - 1) {
            byte_x = (s8)x;
            idx = (byte_x + yrow) * 2;
            costcell = (u8 *)map + idx;
            if (*(s16 *)(costcell + 0x818E) >= 0
                && (s8)rowbase[byte_x + 0xE18E] == 0
                && Map_IsAiTerrainBlocked(byte_x, y) == 0) {
                if (keep_bit != 0 && (cell = maprow[byte_x + 0xD], cell != 0)) {
                    unit = Ai_ActionTileUnit(cell);
                    if (Allegiance_Compare(*(s32 *)((u8 *)self + 0x190), *(s32 *)((u8 *)unit + 0x190)) == 1)
                        goto next_x;
                }
                if (flags != 0) {
                    ncount = Ai_CountHostileNeighborsIn(map, (s16)x, (s16)y, lbl_802732A0);
                    if (ncount != 0)
                        goto next_x;
                }
                ctx[0] = lbl_80284E20;
                ctx[1] = self;
                ctx[0] = lbl_8028EA98;
                *(u8 *)&ctx[2] = mode;
                fn_8002F728(gTargetList);
                fn_8002C618(ctx, x, y);
                if (gTargetList[0] != 0) {
                    costcell = map2 + idx;
                    cost = *(s16 *)(costcell + 0x818E);
                    alt = *(s16 *)(costcell + 0x610E);
                    if (maprow[byte_x + 0xD] != 0)
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
        ctx2[0] = lbl_80284E20;
        ctx2[1] = self;
        ctx2[0] = lbl_8028EA98;
        *(u8 *)&ctx2[2] = mode;
        fn_8002F728(gTargetList);
        fn_8002C618(ctx2, (s8)best_x, (s8)best_y);
        *out_x = (s16)best_x;
        *out_y = (s16)best_y;
        return 1;
    }
    fn_8002F728(gTargetList);
    return 0;
}
#pragma pop
s32 Map_CountNeighborUnits(s16 arg0,s16 arg1,u8 (*arg2)(void *)) {
extern s16 lbl_802732A0[];
extern u8 gBattleMap[],gUnits[];
s32 baseY=arg1,baseX=arg0;
s32 count=0;
s16 *p=lbl_802732A0;
u8 outside,id;
s32 x,y;
void *unit;
while(p[0]!=0x7FFF) {
x=baseX+p[0]; outside=0; y=baseY+p[1];
if(x<(s8)gBattleMap[8] || (s8)gBattleMap[10]-1<x || y<(s8)gBattleMap[9] || (s8)gBattleMap[11]-1<y) outside=1;
if(!outside) {
id=gBattleMap[(s8)x+((s8)y<<6)+0xD];
if(id) { if(id) unit=gUnits+(id-1)*0x280; else unit=0;
if(arg2(unit)) count++;
}
}
p+=2;
}
return count;
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
    void Unit_IsLowHp(void *);
    u8 fn_8009339C(void *, void *);
    u64 *Item_GetFlagsPtr(void **);
    void **item;
    s32 i;
    void *unit = arg0;

    M2C_FIELD(unit, u32 *, 0x254) &= 0xFEFF80EB;
    Unit_IsLowHp(unit);

    for (i = 0; i < 4; i++) {
        item = Unit_GetHeldItemSlot(unit, i);
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
        item = Unit_GetHeldItemSlot(unit, i);
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
        item = Unit_GetHeldItemSlot(unit, i);
        if (*item == NULL) {
            break;
        }
        if (fn_8009339C(unit, *item) && (*Item_GetFlagsPtr(item) & 2)) {
            M2C_FIELD(unit, u32 *, 0x254) |= 0x100;
            break;
        }
    }

    for (i = 0; i < 4; i++) {
        void *cur;

        item = Unit_GetHeldItemSlot(unit, i);
        if (*item == NULL) {
            break;
        }
        if (fn_8009326C(unit, *item)) {
            M2C_FIELD(unit, u32 *, 0x254) |= 0x200;
            cur = *item;
            if (Item_GetByIid(lbl_80273304.iidSilence) == cur) {
                M2C_FIELD(unit, u32 *, 0x254) |= 0x400;
            } else {
                cur = *item;
                if (Item_GetByIid(lbl_80273304.iidSleep) == cur) {
                    M2C_FIELD(unit, u32 *, 0x254) |= 0x800;
                } else {
                    cur = *item;
                    if (Item_GetByIid(lbl_80273304.iidBerserk) == cur) {
                        M2C_FIELD(unit, u32 *, 0x254) |= 0x1000;
                    }
                }
            }
        }
    }

    for (i = 0; i < 4; i++) {
        item = Unit_GetHeldItemSlot(unit, i);
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
 
 void fn_80100B08(void)
{
    void Allegiance_FillMask(s32, u8 *);
    void fn_801007A0(u8 *);
    extern u8 gUnits[];
    u8 sp8[8];
    s32 i;
    u8 *unit;

    Allegiance_FillMask(3, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = gUnits + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) {
                fn_801007A0(unit);
            }
        }
        i += 1;
    } while (i <= 0x9F);
}

s32 fn_80100BA4(s16 x, s16 y, s16 x2, s16 y2) {
    extern u8 gBattleMap[];
    s32 dy;
    s32 dx;

    dy = (y - y2) < 0 ? -(y - y2) : (y - y2);
    dx = (x - x2) < 0 ? -(x - x2) : (x - x2);

    if (dx + dy > 1) {
        return 0;
    }

    if (y2 == y - 1) {
        return (((u16 *)(gBattleMap + 0x408E))[(s8)x + ((s8)y << 6)] >> 3) & 1;
    }

    if (y2 == y + 1) {
        return (((u16 *)(gBattleMap + 0x408E))[(s8)x + ((s8)y << 6)] >> 2) & 1;
    }

    if (x2 == x - 1) {
        return ((u16 *)(gBattleMap + 0x408E))[(s8)x + ((s8)y << 6)] & 1;
    }

    if (x2 == x + 1) {
        return (((u16 *)(gBattleMap + 0x408E))[(s8)x + ((s8)y << 6)] >> 1) & 1;
    }

    return 0;
}

#pragma opt_loop_invariants reset
#pragma use_lmw_stmw reset
s32 fn_80100CC8(void) {
    void *Unit_FindByName();
    s32 temp_r3;
    void *temp_r3_2;

    temp_r3_2 = Unit_FindByName();
    if (temp_r3_2 == NULL) {
        return 0;
    }
    temp_r3 = M2C_FIELD(temp_r3_2, s32 *, 0x1A0);
    if (temp_r3 & 4) {
        return 1;
    }
    return (temp_r3 & 0x98) == 0;
}

#pragma optimization_level 3
#pragma dont_inline on
#pragma global_optimizer off
void fn_80100D18(void *arg0, void **arg1, s32 arg2) {
    extern u8 gBattleMap[];
    u8 Item_GetRangeForUnit(void *, void *);
    s32 fn_800FC5F8(void);
    void fn_80022FCC(void *, s32);
    void Map_FillLayer(void *, s32, s16);
    void Map_FillAttackRange(void *, s8, s8, u8, u8);
    void Map_SelectRangeBuffer(void *, s32);
    s8 Unit_GetMov(void *);
    u8 Map_IsAiTerrainBlocked(s8,s8);
    u8 *map;
    s32 row;
    register u8 *rowp;
    MapCostCell *cost;
    u8 *tile;
    s32 uy;
    s32 minRange, maxRange;
    u8 *base;
    s32 minX,maxX,maxY,y,x,ux,mov,sx;
    void *item=*arg1;
    base=gBattleMap;
    minRange=(s8)(u8)(item ? *((u8 *)item+0x1D) : 0);
    maxRange=(s8)(u8)(item ? (u8)Item_GetRangeForUnit(item,arg0) : 0);
    fn_80022FCC(base,fn_800FC5F8());
    Map_FillLayer(base,8,(s16)arg2);
    ux=*(s8 *)((u8 *)arg0+0x19E);
    uy=*(s8 *)((u8 *)arg0+0x19F);
    mov=Unit_GetMov(arg0);
    minX=ux-mov;
    if(minX<(s8)gBattleMap[8]) minX=(s8)gBattleMap[8];
    y=uy-mov;
    if(y<(s8)gBattleMap[9]) y=(s8)gBattleMap[9];
    maxX=ux+mov;
    if(maxX>(s8)gBattleMap[10]-1) maxX=(s8)gBattleMap[10]-1;
    maxY=uy+mov;
    if(maxY>(s8)gBattleMap[11]-1) maxY=(s8)gBattleMap[11]-1;
    maxRange=(u8)maxRange; minRange=(u8)minRange;
    map=gBattleMap;
    for(;y<=maxY;y++) {
        row=(s8)y<<6;
        rowp=map+row;
        for(x=minX;x<=maxX;x++) {
            sx=(s8)x;
            cost=(MapCostCell *)(map+2*(sx+row));
            if(cost->cost<0) continue;
            tile=rowp+sx;
            if(*(s8 *)(tile+0xE18E)) continue;
            if(Map_IsAiTerrainBlocked(sx,(s8)y)) continue;
            if(tile[13]) continue;
            Map_FillAttackRange(base,(s8)x,(s8)y,minRange,maxRange);
        }
    }
    Map_SelectRangeBuffer(base,5);
}
#pragma global_optimizer reset
#pragma dont_inline reset
#pragma optimization_level reset
s32 fn_80100F10(void *arg0, void *arg1, void **arg2) {
    u8 Item_GetRangeForUnit(void *, void *);
    s32 Abs(s32);
    s8 Unit_GetMov(void *);
    u8 b;
    u8 a;
    s32 dy;
    s32 dist;
    u8 bonus;
    s32 mov;
    b = M2C_FIELD(arg1, u8 *, 0x19E);
    a = M2C_FIELD(arg0, u8 *, 0x19E);
    dy = Abs((s8)M2C_FIELD(arg0, u8 *, 0x19F) - (s8)M2C_FIELD(arg1, u8 *, 0x19F));
    dist = Abs((s8)a - (s8)b);
    dist = dist + dy;
    if (*arg2 != NULL) bonus = (u8)Item_GetRangeForUnit(*arg2, arg1);
    else bonus = 0;
    mov = (s8)Unit_GetMov(arg1);
    return dist <= (((s32)bonus + mov) + (s32)(s8)Unit_GetMov(arg0));
}

#pragma global_optimizer off
s32 fn_80100FD0(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    s32 dy;
    s32 dx;

    dy = arg1 - arg3;
    if (dy < 0) {
        dy = -dy;
    }
    dx = arg0 - arg2;
    if (dx < 0) {
        dx = -dx;
    }
    return (dx + dy) <= arg4;
}
#pragma push
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
    s16 var_r26;
    s16 var_r25;
    s32 temp_r4;
    s32 temp_r3;
    s32 var_r0_2;
    s32 var_r0;
    s32 var_r5;
    s16 var_r14;
    u16 var_r24;
    s32 var_r18;
    s32 var_r19;
    s16 var_r22;
    s16 var_r21;
    s16 var_r23;
    s32 var_r17;
    s16 temp_r3_4;
    u8 temp_r3_3;
    s16 var_r20;
    s32 temp_r30;
    void *temp_r28;
    void *temp_r27;
    u8 *base;

    sp10 = arg5;
    var_r19 = arg_spC;
    if ((((s16)arg0) == ((s16)arg3)) && (((s16)arg1) == ((s16)arg4))) {
        sp8 = 0;
        fn_800FB96C(arg5, (s8)arg3, (s8)arg4, 0, (s8)arg3, (s8)arg4, -1, 0, 0);
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
    base = lbl_802CA518;
    if (*(s16 *)(base + (((s8)arg3 + ((s8)arg4 << 6)) * 2) + 0x610e) < 0) {
        var_r0 = 0x7FFF;
    } else {
        base += (int)0x10000;
        base += ((s8)arg0 + ((s8)arg1 << 6)) * 2;
        var_r0 = *(s16 *)(base - 0x7e72);
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
    if ((arg_sp8) && (var_r24 != 0xFFFF)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8)var_r14, (s8)var_r23, 0, (s8)var_r14, (s8)var_r23, -1, 0, 0);
    }
}
#pragma pop
void fn_80101448(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    Map_BuildUnitMoveRange((void *)arg0, 5, arg7);
    fn_80101530(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void Ai_SetUnitMoveTo(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    Map_BuildUnitMoveRange((void *)arg0, 5, arg7);
    fn_80101960(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

#pragma push
#pragma optimization_level 4
int fn_80101530(int arg0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
#pragma opt_common_subs off
s8 Unit_GetMov(void *);
void fn_800FB96C(u8,s8,s8,s32,s8,s8,s8,s8,u8);
u16 fn_800FCF48(s8,s8);
void fn_800FE690(s16,s16,s32,void *,s32,s32);
void fn_800FE770(s16,s16,s32,s32,s32);
u8 Map_IsAiTerrainBlocked(s8,s8);
extern u8 gBattleMap[];

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
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r17;
    s32 var_r19;
    s32 var_r0_2;
    s32 var_r18;
    s32 var_r5;
    u16 var_r24;
    u8 temp_r3_3;
    void *temp_r27;
    void *temp_r28;
    u8 *base;

    *(u8 *)&sp10 = a3;
    *(u8 *)&sp11 = a6;
    if ((((s16)a1) == (s8)*(s8 *)((u8 *)arg0+0x19e)) && (((s16)a2) == (s8)*(s8 *)((u8 *)arg0+0x19f))) {
        u8 t = a3;
        sp8 = 0;
        fn_800FB96C(t, (s8)a1, (s8)a2, 0, (s8)a1, (s8)a2, -1, 0, 0);
        return;
    }
    if (((u8)a5) != 0) {
        fn_800FE770(((s16)a1), ((s16)a2), 0, 6, *(s32 *)(gBattleMap) * *(s32 *)(gBattleMap+4));
    } else {
        fn_800FE690(((s16)a1), ((s16)a2), 0, *(void **)((u8 *)arg0+0x190), 6, *(s32 *)(gBattleMap) * *(s32 *)(gBattleMap+4));
    }
    base = gBattleMap;
    if (*(s16 *)(base + (((s8)a1 + ((s8)a2 << 6)) * 2) + 0x610e) < 0) {
        var_r0 = 0x7FFF;
    } else {
        base += 0x10000;
        base += (*(s8 *)((u8 *)arg0+0x19e) + (*(s8 *)((u8 *)arg0+0x19f) << 6)) * 2;
        var_r0 = *(s16 *)(base - 0x7e72);
    }
    var_r26 = (s16)var_r0;
    a1 = (s8)*(s8 *)((u8 *)arg0+0x19e);
    var_r24 = 0xFFFF;
    a2 = (s8)*(s8 *)((u8 *)arg0+0x19f);
    var_r25 = -1;
    var_r22 = 0x7FFF;
    if (a7 < 0) {
        var_r5 = Unit_GetMov((void *)arg0);
    } else {
        var_r5 = a7;
    }
    sp18 = a1 - var_r5;
    if (sp18 < (s8)*(s8 *)(gBattleMap+0x8)) {
        sp18 = (s32)(s8)*(s8 *)(gBattleMap+0x8);
    }
    var_r0_2 = a2 - var_r5;
    if (var_r0_2 < (s8)*(s8 *)(gBattleMap+0x9)) {
        var_r0_2 = (s8)*(s8 *)(gBattleMap+0x9);
    }
    var_r19 = a1 + var_r5;
    temp_r3 = (s8)*(s8 *)(gBattleMap+0xA) - 1;
    if (var_r19 > temp_r3) {
        var_r19 = temp_r3;
    }
    sp14 = a2 + var_r5;
    temp_r4 = (s8)*(s8 *)(gBattleMap+0xB) - 1;
    if (sp14 > temp_r4) {
        sp14 = temp_r4;
    }
    var_r18 = var_r0_2;
    for (; var_r18 <= sp14; var_r18++) {
        var_r17 = sp18;
        temp_r30 = (s8)var_r18 << 6;
        for (; var_r17 <= var_r19; var_r17++) {
            temp_r27 = gBattleMap + (((s8)var_r17 + temp_r30) * 2);
            if (*(s16 *)((u8 *)temp_r27+0x610e) >= 0) {
                temp_r28 = gBattleMap + temp_r30 + (s8)var_r17;
                if ((*(s8 *)((u8 *)temp_r28+0xe18e) == 0) && (Map_IsAiTerrainBlocked((s8)var_r17,(s8)var_r18) == 0) && ((temp_r3_3 = *(u8 *)((u8 *)temp_r28+13), ((temp_r3_3 == 0) != 0)) || (temp_r3_3 == (u8)*(u8 *)((u8 *)arg0+0x198))) && ((temp_r27=(u8 *)temp_r27+0x818e), *(s16 *)temp_r27 >= 0)) {
                    if (((u16)a4) < fn_800FCF48((s8)var_r17, (s8)var_r18)) {
                        if (var_r24 > fn_800FCF48((s8)var_r17, (s8)var_r18)) {
                            var_r14 = (s16)var_r17;
                            var_r24 = fn_800FCF48((s8)var_r17, (s8)var_r18);
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
    if (((u32)sp11 != 0) && (var_r22 != 0x7FFF)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8)var_r21, (s8)var_r20, 0, (s8)var_r21, (s8)var_r20, -1, 0, 0);
        return;
    }
    if (((u32)sp11 != 0) && (var_r24 != 0xFFFF)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8)var_r14, (s8)var_r23, 0, (s8)var_r14, (s8)var_r23, -1, 0, 0);
    }
}
#pragma pop
#pragma opt_common_subs off
int fn_80101960(int arg0, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
#pragma opt_common_subs off
s8 Unit_GetMov(void *);
void fn_800FB96C(u8,s8,s8,s32,s8,s8,s8,s8,u8);
u16 fn_800FCF48(s8,s8);
void fn_800FE490(s16,s16,void *,s32,s32);
void fn_800FE590(s16,s16,void *,s32,s32);
u8 Map_IsAiTerrainBlocked(s8,s8);
extern u8 gBattleMap[];

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
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r17;
    s32 var_r19;
    s32 var_r0_2;
    s32 var_r18;
    s32 var_r5;
    u16 var_r24;
    u8 temp_r3_3;
    void *temp_r27;
    void *temp_r28;
    u8 *base;

    *(u8 *)&sp10 = a3;
    *(u8 *)&sp11 = a6;
    if ((((s16)a1) == (s8)*(s8 *)((u8 *)arg0+0x19e)) && (((s16)a2) == (s8)*(s8 *)((u8 *)arg0+0x19f))) {
        u8 t = a3;
        sp8 = 0;
        fn_800FB96C(t, (s8)a1, (s8)a2, 0, (s8)a1, (s8)a2, -1, 0, 0);
        return;
    }
    if (((u8)a5) != 0) {
        fn_800FE590(((s16)a1), ((s16)a2), (void *)arg0, 6, *(s32 *)(gBattleMap) * *(s32 *)(gBattleMap+4));
    } else {
        fn_800FE490(((s16)a1), ((s16)a2), (void *)arg0, 6, *(s32 *)(gBattleMap) * *(s32 *)(gBattleMap+4));
    }
    base = gBattleMap;
    if (*(s16 *)(base + (((s8)a1 + ((s8)a2 << 6)) * 2) + 0x610e) < 0) {
        var_r0 = 0x7FFF;
    } else {
        base += 0x10000;
        base += (*(s8 *)((u8 *)arg0+0x19e) + (*(s8 *)((u8 *)arg0+0x19f) << 6)) * 2;
        var_r0 = *(s16 *)(base - 0x7e72);
    }
    var_r26 = (s16)var_r0;
    a1 = (s8)*(s8 *)((u8 *)arg0+0x19e);
    var_r24 = 0xFFFF;
    a2 = (s8)*(s8 *)((u8 *)arg0+0x19f);
    var_r25 = -1;
    var_r22 = 0x7FFF;
    if (a7 < 0) {
        var_r5 = Unit_GetMov((void *)arg0);
    } else {
        var_r5 = a7;
    }
    sp18 = a1 - var_r5;
    if (sp18 < (s8)*(s8 *)(gBattleMap+0x8)) {
        sp18 = (s32)(s8)*(s8 *)(gBattleMap+0x8);
    }
    var_r0_2 = a2 - var_r5;
    if (var_r0_2 < (s8)*(s8 *)(gBattleMap+0x9)) {
        var_r0_2 = (s8)*(s8 *)(gBattleMap+0x9);
    }
    var_r19 = a1 + var_r5;
    temp_r3 = (s8)*(s8 *)(gBattleMap+0xA) - 1;
    if (var_r19 > temp_r3) {
        var_r19 = temp_r3;
    }
    sp14 = a2 + var_r5;
    temp_r4 = (s8)*(s8 *)(gBattleMap+0xB) - 1;
    if (sp14 > temp_r4) {
        sp14 = temp_r4;
    }
    var_r18 = var_r0_2;
    for (; var_r18 <= sp14; var_r18++) {
        var_r17 = sp18;
        temp_r30 = (s8)var_r18 << 6;
        for (; var_r17 <= var_r19; var_r17++) {
            temp_r27 = gBattleMap + (((s8)var_r17 + temp_r30) * 2);
            if (*(s16 *)((u8 *)temp_r27+0x610e) >= 0) {
                temp_r28 = gBattleMap + temp_r30 + (s8)var_r17;
                if ((*(s8 *)((u8 *)temp_r28+0xe18e) == 0) && (Map_IsAiTerrainBlocked((s8)var_r17,(s8)var_r18) == 0) && ((temp_r3_3 = *(u8 *)((u8 *)temp_r28+13), ((temp_r3_3 == 0) != 0)) || (temp_r3_3 == (u8)*(u8 *)((u8 *)arg0+0x198))) && ((temp_r27=(u8 *)temp_r27+0x818e), *(s16 *)temp_r27 >= 0)) {
                    if (((u16)a4) < fn_800FCF48((s8)var_r17, (s8)var_r18)) {
                        if (var_r24 > fn_800FCF48((s8)var_r17, (s8)var_r18)) {
                            var_r14 = (s16)var_r17;
                            var_r24 = fn_800FCF48((s8)var_r17, (s8)var_r18);
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
    if (((u32)sp11 != 0) && (var_r22 != 0x7FFF)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8)var_r21, (s8)var_r20, 0, (s8)var_r21, (s8)var_r20, -1, 0, 0);
        return;
    }
    if (((u32)sp11 != 0) && (var_r24 != 0xFFFF)) {
        sp8 = 0;
        fn_800FB96C(sp10, (s8)var_r14, (s8)var_r23, 0, (s8)var_r14, (s8)var_r23, -1, 0, 0);
    }
}
#pragma pop
s32 fn_80101D8C(u8 (*filter)(void *), void *arg1, s16 *outX, s16 *outY) {
    void fn_800FE770(s32, s32, s32, s32, s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
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
    } gBattleMap;
    extern u8 gUnits[];

    s16 *cost;
    s16 best;
    s16 bestX;
    s16 bestY;
    s32 y;
    s32 x;
    u8 id;
    u8 *unit;
    u8 *tile;

    best = 0x7FFF;
    fn_800FE770(((s8 *)arg1)[0x19E], ((s8 *)arg1)[0x19F], 0, 5, gBattleMap.width * gBattleMap.height);

    for (y = gBattleMap.yMin; y <= gBattleMap.yMax - 1; y++) {
        for (x = gBattleMap.xMin; x <= gBattleMap.xMax - 1; x++) {
            cost = (s16 *)((u8 *)&gBattleMap + (((s8)x + ((s8)y << 6)) * 2) + 0x610E);
            if (*cost < 0) {
                continue;
            }
            tile = (u8 *)&gBattleMap + ((s8)y << 6) + (s8)x;
            if (*(s8 *)(tile + 0xE18E) != 0) {
                continue;
            }
            if (Map_IsAiTerrainBlocked((s8)x, (s8)y) != 0) {
                continue;
            }
            id = tile[0xD];
            if (id == 0) {
                continue;
            }
            if (id != 0) {
                unit = gUnits + (id - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (filter(unit) == 0) {
                continue;
            }
            if (*cost >= best) {
                continue;
            }
            best = *cost;
            bestX = (s16)x;
            bestY = (s16)y;
        }
    }

    if ((s16)best != 0x7FFF) {
        *outX = bestX;
        *outY = bestY;
        return 1;
    } else {
        return 0;
    }
}
#pragma optimization_level reset
s32 Ai_FindLowestCostUnitTile(u8 (*filter)(void *), void *arg1, s16 *outX, s16 *outY) {
    void fn_800FE398(void *, s32, s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
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
    } gBattleMap;
    extern u8 gUnits[];

    s16 *cost;
    s16 best;
    s16 bestX;
    s16 bestY;
    s32 y;
    s32 x;
    u8 id;
    u8 *unit;

    best = 0x7FFF;
    fn_800FE398(arg1, 5, gBattleMap.width * gBattleMap.height);

    for (y = gBattleMap.yMin; y <= gBattleMap.yMax - 1; y++) {
        for (x = gBattleMap.xMin; x <= gBattleMap.xMax - 1; x++) {
            cost = (s16 *)((u8 *)&gBattleMap + (((s8)x + ((s8)y << 6)) * 2) + 0x610E);
            if (*cost < 0) {
                continue;
            }
            if (gBattleMap.fogMap[(s8)y][(s8)x] != 0) {
                continue;
            }
            if (Map_IsAiTerrainBlocked((s8)x, (s8)y) != 0) {
                continue;
            }
            id = gBattleMap.unitMap[0][(s8)y][(s8)x];
            if (id == 0) {
                continue;
            }
            if (id != 0) {
                unit = gUnits + (id - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (filter(unit) == 0) {
                continue;
            }
            if (*cost >= best) {
                continue;
            }
            best = *cost;
            bestX = (s16)x;
            bestY = (s16)y;
        }
    }

    if ((s16)best != 0x7FFF) {
        *outX = bestX;
        *outY = bestY;
        return 1;
    } else {
        return 0;
    }
}
/* Find the reachable same-faction occupied tile with lowest AI move cost; write x/y. */
s32 Ai_FindLowestCostAllyTile(s32 arg0, s16 *outX, s16 *outY) {
    void fn_800FE398(s32, s32, s32);
    u32 Job_GetByJid(s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
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
    } gBattleMap;
    extern s32 gUiContext[];
    s16 *cost;
    s16 best;
    u32 team;
    s32 y;
    s32 x;
    u8 id;
    u8 *unit;

    best = 0x7FFF;
    fn_800FE398(gUiContext[0], 6, gBattleMap.width * gBattleMap.height);
    team = Job_GetByJid(arg0);
    for (y = gBattleMap.yMin; y <= gBattleMap.yMax - 1; y++) {
        for (x = gBattleMap.xMin; x <= gBattleMap.xMax - 1; x++) {
            cost = &gBattleMap.costMap[0][(s8)x + ((s8)y << 6)];
            if (*cost < 0) {
                continue;
            }
            if (gBattleMap.fogMap[(s8)y][(s8)x] != 0) {
                continue;
            }
            if (Map_IsAiTerrainBlocked(x, y) != 0) {
                continue;
            }
            id = gBattleMap.unitMap[0][(s8)y][(s8)x];
            if (id == 0) {
                continue;
            }
            if (id != 0) {
                unit = gUnits + (id - 1) * 0x280;
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
void Ai_FindEscapeTile(s32 a0, s32 a1, s32 a2, s32 a3) {
    extern void Ai_FindActionTile(s32, s32, s32, s32, s32);
    Ai_FindActionTile(a0, a1, 0x2C, a2, a3);
}

#pragma push
#pragma opt_propagation off
s32 Ai_FindBestMovePos(void *arg0, s16 *arg1, s16 *arg2, s32 arg3) {
 extern u8 gBattleMap[],gAiState[];
 void Map_FillLayer(void *,s32,s16);
 void Map_SelectRangeBuffer(void *,s32);
 void Map_BuildUnitMoveRange(void *,s32,s32);
 s8 Unit_GetMov(void *);
 u8 Map_IsAiTerrainBlocked(s8,s8);
 u32 fn_800FCF48(s8,s8);
 s32 row;
 u8 *rowp,*unitrow;
 s32 offset;
 s32 ux,uy;
 u8 *base;
 u16 best;
 s16 bestX,bestY;
 s32 minX,maxX,maxY,y,x,mov,minY,sx;
 MapCostCell *cost;
 u32 value;
 u8 id;
 base=gBattleMap;
 best=0xFFFF;
 if((gAiState[1]&2)||(*(u32 *)((u8 *)arg0+0x254)&0x03000000)) {
 Map_FillLayer(base,5,-1);Map_SelectRangeBuffer(base,5);
 } else Map_BuildUnitMoveRange(arg0,5,arg3);
 (*(s16 **)(base+0x14190))[*(s8 *)((u8 *)arg0+0x19e)+(*(s8 *)((u8 *)arg0+0x19f)<<6)]=arg3+1;
    ux=*(s8 *)((u8 *)arg0+0x19E);
    uy=*(s8 *)((u8 *)arg0+0x19F);
    mov=Unit_GetMov(arg0);
    minX=ux-mov;
    if(minX<(s8)gBattleMap[8]) minX=(s8)gBattleMap[8];
    minY=uy-mov;
    if(minY<(s8)gBattleMap[9]) minY=(s8)gBattleMap[9];
    maxX=ux+mov;
    if(maxX>(s8)gBattleMap[10]-1) maxX=(s8)gBattleMap[10]-1;
    maxY=uy+mov;
    if(maxY>(s8)gBattleMap[11]-1) maxY=(s8)gBattleMap[11]-1;

 for(y=minY;y<=maxY;y++) {
 row=(s8)y<<6;rowp=(u8 *)gBattleMap+row;unitrow=base+row;
 for(x=minX;x<=maxX;x++) {
 sx=(s8)x;offset=2*(sx+row);cost=(MapCostCell *)((u8 *)gBattleMap+offset);
 if(cost->cost<0)continue;
 if(*(s8 *)(rowp+sx+0xE18E))continue;
 if(Map_IsAiTerrainBlocked(sx,(s8)y))continue;
 { s32 unitOffset=sx+13; id=unitrow[unitOffset]; }
 if(id && id!=*((u8 *)arg0+0x198))continue;
 value=(fn_800FCF48((s8)x,(s8)y)>>4)&0xfff;
 value=(u16)(value+*(s16 *)(base+offset+0x610e));
 if(best>value){best=value;bestX=x;bestY=y;}
 }}
 if(best!=0xffff){*arg1=bestX;*arg2=bestY;return 1;}
 return 0;
}
#pragma pop
s32 fn_801025BC(void *arg0, s16 *arg1, s16 *arg2) {
    void Map_FillLayer(void *, s32, s32);
    void Map_SelectRangeBuffer(void *, s32);
    s8 Unit_GetMov(void *);
    u16 fn_800FCF48(s8, s8);
    void Map_BuildUnitMoveRange(void *, s32, s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
    extern u8 gAiState[];
    extern u8 gBattleMap[];

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

    base = gBattleMap;
    best = 0xffff;
    if ((gAiState[1] & 2) || (*(u32 *)((u8 *)arg0 + 0x254) & 0x03000000)) {
        Map_FillLayer(base, 5, -1);
        Map_SelectRangeBuffer(base, 5);
        {
            s16 *tbl = *(s16 **)(base + 0x14190);
            s32 idx = (s8)*(u8 *)((u8 *)arg0 + 0x19e) + ((s8)*(u8 *)((u8 *)arg0 + 0x19f) << 6);
            tbl[idx] = 0;
        }
    } else {
        Map_BuildUnitMoveRange(arg0, 5, -1);
    }
    x0 = (s8)*(u8 *)((u8 *)arg0 + 0x19e);
    y0 = (s8)*(u8 *)((u8 *)arg0 + 0x19f);
    {
        s8 rad = Unit_GetMov(arg0);
        x_lo = x0 - rad;
        if (x_lo < (s8)gBattleMap[8]) {
            x_lo = (s8)gBattleMap[8];
        }
        {
            s32 y_lo = y0 - rad;
            if (y_lo < (s8)gBattleMap[9]) {
                y_lo = (s8)gBattleMap[9];
            }
            x_hi = x0 + rad;
            if (x_hi > (s8)gBattleMap[0xa] - 1) {
                x_hi = (s8)gBattleMap[0xa] - 1;
            }
            y_hi = y0 + rad;
            if (y_hi > (s8)gBattleMap[0xb] - 1) {
                y_hi = (s8)gBattleMap[0xb] - 1;
            }
            y = y_lo;
        }
    }
    while (y <= y_hi) {
        x = x_lo;
        colp = gBattleMap + ((s8)y << 6);
        rowp = base + ((s8)y << 6);
        while (x <= x_hi) {
            if (*(s16 *)(gBattleMap + 0x610e + (((s8)x + ((s8)y << 6)) * 2)) >= 0
                && (s8)colp[(s8)x + 0xe18e] == 0
                && Map_IsAiTerrainBlocked((s8)x, (s8)y) == 0) {
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

#pragma push
#pragma optimization_level 4
#pragma opt_strength_reduction off
#pragma use_lmw_stmw on
s32 Ai_FindActionTile(void *arg0, s32 flags, s32 arg2, s16 *outX, s16 *outY) {
    void fn_800FE398(void *, s32, s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
    u8 Allegiance_Compare(s32, s32);
    u8 Ai_UnitIsHostileToActive(void *);
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
    } gBattleMap;
    extern u8 gUnits[];
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

    mapSaved = (u8 *)&gBattleMap;
    fn_800FE398(arg0, 6, ((s32 *)mapSaved)[0] * ((s32 *)mapSaved)[1]);
    flag1 = (u32)flags & 1;
    flag2 = flags & 2;
    best = 0x7FFF;
    for (y = gBattleMap.yMin; y <= gBattleMap.yMax - 1; y++) {
        yShift = (s8)y << 6;
        y16 = (s16)y;
        rowFog = (u8 *)&gBattleMap + yShift;
        rowUnit = mapSaved + yShift;
        for (x = gBattleMap.xMin; x <= gBattleMap.xMax - 1; x++) {
            s32 x8 = (s8)x;
            u8 id;
            void *unit;
            cost = &gBattleMap.costMap[0][x8 + yShift];
            if (*cost < 0) {
                continue;
            }
            if ((s8)rowFog[x8 + 0xE18E] != 0) {
                continue;
            }
            if (Map_IsAiTerrainBlocked((s8)x8, (s8)y) != 0) {
                continue;
            }
            if (flag1) {
                id = rowUnit[x8 + 0xD];
                if (id) {
                    unit = Ai_ActionTileUnit(id);
                    if (Allegiance_Compare(*(s32 *)((u8 *)arg0 + 0x190), *(s32 *)((u8 *)unit + 0x190)) == 1) {
                        continue;
                    }
                }
            }
            if (flag2 != 0) {
                x16 = (s16)x;
                nb = lbl_802732A0;
                count = 0;
                while (nb[0] != 0x7FFF) {
                    u8 oob;
                    s32 nx;
                    s32 ny;
                    nx = x16 + nb[0];
                    ny = y16 + nb[1];
                    oob = 0;
                    if (nx < gBattleMap.xMin || gBattleMap.xMax - 1 < nx || ny < gBattleMap.yMin || gBattleMap.yMax - 1 < ny) {
                        oob = 1;
                    }
                    if (!oob) {
                        u8 nid = *((u8 *)&gBattleMap + (s8)nx + ((s8)ny << 6) + 0xD);
                        if (nid != 0) {
                            void *nunit;
                            if (nid != 0) {
                                nunit = gUnits + (nid - 1) * 0x280;
                            } else {
                                nunit = NULL;
                            }
                            if (Ai_UnitIsHostileToActive(nunit) != 0) {
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
#pragma push
#pragma optimization_level 4
#pragma opt_propagation off
s32 fn_80102ACC(void *arg0, s32 arg1, s32 arg2, s16 *arg3, s16 *arg4) {
    void fn_800FE398(void *, s32, s32);
    u8 Map_IsAiTerrainBlocked(s8, s8);
    u8 Allegiance_Compare(s32, s32);
    u8 Ai_UnitIsHostileToActive(void *);
    void fn_8002F728(void *);
    void fn_8002C618(void *, s8, s8);
    extern u8 gUnits[];
    extern u8 gBattleMap[];
    extern s16 lbl_802732A0[];
    extern u8 lbl_80284E20[16];
    extern u8 lbl_8028EA88[16];
    extern s32 gTargetList[502];

    void *self;
    u32 mode;
    u32 flag1;
    u32 flag2;
    u8 *base;
    u8 *map;
    s16 *nei;
    s32 count;
    s32 ci;
    s16 best;
    register s32 y;
    s32 x;
    u8 *costcell;
    s32 nx, ny;
    u8 oob;
    u8 id;
    register void *unit;
    s16 sp20;
    s16 bestY;
    void *sp18[2];
    void *sp10[2];
    s16 *outX;
    s16 *outY;

    outX = arg3;
    outY = arg4;
    mode = arg2;
    self = arg0;
    base = gBattleMap;
    fn_800FE398(self, 6, *(s32 *)base * *(s32 *)(base + 4));
    flag1 = arg1 & 1;
    flag2 = arg1 & 2;
    best = 0x7FFF;
    map = gBattleMap;
    y = ((AiActionMap *)map)->yMin;
    while (y <= ((AiActionMap *)map)->yMax - 1) {
        ci = (s8)y << 6;
        x = ((AiActionMap *)map)->xMin;
        while (x <= ((AiActionMap *)map)->xMax - 1) {
            costcell = map + ((s8)x + ci) * 2;
            if (*(s16 *)(costcell + 0x818E) >= 0
                && (s8)map[ci + (s8)x + (unsigned short)0xE18E] == 0
                && Map_IsAiTerrainBlocked((s8)x, (s8)y) == 0) {
                if (flag1 != 0) {
                    id = base[ci + (s8)x + 0xD];
                    if (id) {
                        unit = Ai_ActionTileUnit(id);
                        if (Allegiance_Compare(*(s32 *)((u8 *)self + 0x190), *(s32 *)((u8 *)unit + 0x190)) == 1)
                            goto next_x;
                    }
                }
                if (flag2 != 0) {
                    nei = lbl_802732A0;
                    count = 0;
                    while (*nei != 0x7FFF) {
                        register nx = (s16)x + nei[0];
                        ny = (s16)y + nei[1];
                        oob = 0;
                        if (nx < (s8)map[8] || (s8)map[0xA] - 1 < nx || ny < (s8)map[9] || (s8)map[0xB] - 1 < ny) {
                            oob = 1;
                        }
                        if (oob == 0) {
                            id = *(gBattleMap + (s8)nx + ((s8)ny << 6) + 0xD);
                            if (id != 0) {
                                unit = Ai_ActionTileUnit(id);
                                if (Ai_UnitIsHostileToActive(unit) != 0) {
                                    count++;
                                }
                            }
                        }
                        nei += 2;
                    }
                    if (count) goto next_x;
                }
                sp18[0] = &lbl_80284E20;
                sp18[0] = &lbl_8028EA88;
                fn_8002F728(&gTargetList);
                sp18[1] = (void *)mode;
                fn_8002C618(sp18, (s8)x, (s8)y);
                if (gTargetList[0] != 0) {
                    if (*(s16 *)(base + ((s8)x + ci) * 2 + 0x818E) < best) {
                        best = *(s16 *)(base + ((s8)x + ci) * 2 + 0x818E);
                        sp20 = (s16)x;
                        bestY = (s16)y;
                    }
                }
            }
        next_x:
            x++;
        }
        y++;
    }
    if (best != 0x7FFF) {
        sp10[0] = &lbl_8028EA88;
        sp10[0] = &lbl_80284E20;
        fn_8002F728(&gTargetList);
        sp10[1] = (void *)mode;
        fn_8002C618(sp10, (s8)sp20, (s8)bestY);
        *outX = sp20;
        *outY = bestY;
        return 1;
    }
    fn_8002F728(&gTargetList);
    return 0;
}
#pragma pop

s32 fn_80102DFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 fn_800BE968(u8, s8, s8);
    void fn_8002F728(void *);
    void fn_8002C618(void *, s8, s8);
    extern u8 lbl_80284E20[16];
    extern u8 lbl_8028EA88[16];
    extern struct { s32 n; u8 pad[2004]; } gTargetList;

    void *sp[2];

    if ((u8)arg3 == 0) {
        return fn_800BE968((u8)arg2, (s8)arg0, (s8)arg1);
    }

    sp[0] = lbl_80284E20;
    sp[0] = lbl_8028EA88;
    fn_8002F728(&gTargetList);
    sp[1] = (void *)arg2;
    fn_8002C618(sp, (s8)arg0, (s8)arg1);
    return gTargetList.n != 0;
}

s32 fn_80102EA8(void *arg0) {
    extern u8 gAiState[];
    extern u8 gBattleState[];
    u8 var_r0;

    if (!(gAiState[1] & 8)) {
        return 0;
    }
    if (arg0 != NULL) {
        var_r0 = *(u8 *)(*(u8 **)((u8 *)arg0 + 0x190) + 8);
    } else {
        var_r0 = gBattleState[0x11];
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
    extern u8 gTargetList[];
    if (fn_800BE968((u8) M2C_FIELD(arg0, s32 *, 4)) != 0) {
        fn_8002F6E8((M2C_UNK *)gTargetList, arg1, arg2, 0, (u8) M2C_FIELD(arg0, s32 *, 4));
    }
}

void fn_80102F8C(u8 *self,s32 x,s32 y) {
extern u8 gTargetList[];
u8 fn_800BE968();
void fn_8002F6E8(void *,s32,s32,s32,s32);
char *fn_800C2048(s8,s8);
u8 fn_80092F9C(void *);
u8 fn_80092F38(void *);
u8 valid;
void *unit;
char *iid;
u8 *item;
u64 flags;
if((self[8]&2) && fn_800BE968(11)) fn_8002F6E8(gTargetList,x,y,0,11);
if((self[8]&1) && fn_800BE968(12,x,y)) {
unit=*(void **)(self+4);
iid=fn_800C2048((s8)x,(s8)y);
if(!iid) valid=0;
else {
valid=1;
item=Item_GetByIid(iid);
flags=*(u64 *)(item+0x38);
if(flags&5ULL) {
if(fn_80092F9C(unit)>=4) valid=0;
} else if(flags&0x18ULL) {
if(fn_80092F38(unit)>=4) valid=0;
}
}
if(valid) fn_8002F6E8(gTargetList,x,y,0,12);
}
}

void fn_801030F0(void *arg0,void *arg1){
extern u8 gBattleMap[];extern u8 gTargetList[];
u8 fn_8003DD20(void*,void*);
void fn_800227F8(void*,void*);
s16 fn_8002134C(void*,s8,s8);
u8 fn_8001F85C(void*,u8,u8,s8,s8);
void fn_8002F6E8(void*,u8,u8,u8,s32);
s32 dx,dy;u8 x;u8 *self=arg0;u8 y;u8 *unit=arg1;
if((*(u8 (**)(void*))(self+8))(unit)&&fn_8003DD20(*(void**)(self+4),unit)){
dx=(s8)((x=unit[0x19e])-self[0xc]);dy=(s8)((y=unit[0x19f])-self[0xd]);
fn_800227F8(gBattleMap,*(void**)(unit+0x18c));
dx=(s8)x+dx;dy=(s8)y+dy;
if(gBattleMap[0xd+(s8)dx+((s8)dy<<6)]==0&&fn_8002134C(gBattleMap,(s8)dx,(s8)dy)<=30000&&fn_8001F85C(gBattleMap,x,y,(s8)dx,(s8)dy)){
fn_8002F6E8(gTargetList,self[0xc],self[0xd],unit[0x198],0);
}}}

void fn_80103200(void *arg0, s8 arg1, s8 arg2) {
    void fn_8002C6F4(void);
    extern u8 gBattleMap[];
    u8 *base;
    u8 *row;
    s32 yoff;
    s32 x;
    u8 id;

    base = gBattleMap;
    x = arg1;
    row = base + 0x10000;
    row += x;
    yoff = (s8)arg2 << 6;
    if ((s8)row[yoff - 0x1E72] == 0) {
        if ((*(u32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x254) & 0x20000) == 0 ||
            (*(base + x + yoff + 0x300D) & 2) == 0) {
            *((s8 *)arg0 + 0xC) = arg1;
            *((s8 *)arg0 + 0xD) = arg2;
            id = *(base + x + yoff + 0xD);
            if (id == 0 || id == *((u8 *)*(void **)((u8 *)arg0 + 4) + 0x198)) {
                fn_8002C6F4();
            }
        }
    }
}

void fn_8010329C(void *arg0, void *arg1) {
    u8 fn_800BF1E8(void *);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 gUiContext[];
    extern u8 gTargetList[];

    *(void **)(gUiContext + 4) = arg1;
    if (fn_800BF1E8(gUiContext) != 0) {
        fn_8002F6E8(gTargetList, *(u8 *)((u8 *)arg1 + 0x19E), *(u8 *)((u8 *)arg1 + 0x19F), *(u8 *)((u8 *)arg1 + 0x198), 0);
    }
}

s32 TagWin_OnCancel(void) {
    void fn_800D758C(void *);
    extern void *lbl_80367918;
    fn_800D758C(lbl_80367918);
    return 0;
}

#pragma global_optimizer off
static inline void TagWin_PrintSelection(char *first, char *second, s32 id) {
    void fn_80232138(char *, ...);
    extern char TagWin_str[];

    fn_80232138(TagWin_str, first, second, id);
}

s32 TagWin_OnOk(void) {
    void *fn_800DC3C0(void *);
    void String_Init(String *, char *, void *);
    char *String_CStr(String *);
    void String_Copy(String *, String *);
    void String_Destroy(String *, s32);
    void fn_800D758C(void *);
    void fn_800DA530(String *, String *, s32);
    void fn_800DA368(void);
    extern void *lbl_80367918;
    extern void *lbl_803678A8;
    extern u16 *gWin3;

    String s34;
    String s28;
    String s1C;
    String s10;
    void *scratchC;
    void *scratch8;
    s32 id;
    void *inner;

    String_Init(&s34, (char *)fn_800DC3C0(*(void **)((u8 *)lbl_80367918 + 0x424)), &scratchC);
    String_Init(&s28, (char *)fn_800DC3C0(*(void **)((u8 *)lbl_803678A8 + 0x424)), &scratch8);
    inner = *(void **)((u8 *)gWin3 + 0x424);
    id = *(s32 *)((u8 *)inner + 0xB4);
    fn_800D758C(lbl_80367918);
    TagWin_PrintSelection(String_CStr(&s34), String_CStr(&s28), id);
    String_Copy(&s1C, &s34);
    String_Copy(&s10, &s28);
    fn_800DA530(&s1C, &s10, id);
    String_Destroy(&s10, -1);
    String_Destroy(&s1C, -1);
    fn_800DA368();
    String_Destroy(&s28, -1);
    String_Destroy(&s34, -1);
    return 0;
}
#pragma global_optimizer on
void *TagWin_Create(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    /* Construct the ztool TagWin window and wire its TagList/Ok/Cancel controls. */
    extern char TagWin_str[];
    extern u8 TagWin_vtable[];

    extern void String_Init(void *, const char *, void *);
    extern void String_ConcatCStr(void *, void *, const char *);
    extern void fn_800D764C(void *, s32, s32, s32, void *, void *);
    extern void String_Destroy(void *, s32);
    extern void *fn_800D75FC(void *, void *);

    extern void TagWin_OnOk(void);
    extern void TagWin_OnCancel(void);

    u8 *self;
    char *strings;

    String pathBase;
    String dbxPath;
    String winName;
    String tagList;
    String okBtn;
    String cancelBtn;

    void *sp0;
    void *sp1;
    void *sp2;
    void *sp3;
    void *sp4;
    void *sp5;

    void *entry;

    self = (u8 *)arg0;
    strings = TagWin_str;

    String_Init(&pathBase, (const char *)(strings + 0xC), &sp0);

    String_ConcatCStr(
        &dbxPath,
        &pathBase,
        (const char *)(strings + 0x13)
    );

    String_Init(&winName, (const char *)(strings + 0x1E), &sp1);

    fn_800D764C(
        self,
        arg1,
        arg2,
        arg3,
        &dbxPath,
        &winName
    );

    String_Destroy(&winName, -1);
    String_Destroy(&dbxPath, -1);
    String_Destroy(&pathBase, -1);

    *(void **)(self + 0xC) = TagWin_vtable;

    String_Init(&tagList, (const char *)(strings + 0x25), &sp2);

    entry = (u8 *)fn_800D75FC(self, &tagList);
    *(void **)(self + 0x424) = entry;

    String_Destroy(&tagList, -1);

    String_Init(&okBtn, (const char *)(strings + 0x2D), &sp3);

    entry = (u8 *)fn_800D75FC(self, &okBtn);
    *(void **)(self + 0x428) = entry;

    String_Destroy(&okBtn, -1);

    String_Init(&cancelBtn, (const char *)(strings + 0x33), &sp4);

    entry = (u8 *)fn_800D75FC(self, &cancelBtn);
    *(void **)(self + 0x42C) = entry;

    String_Destroy(&cancelBtn, -1);

    entry = *(u8 **)(self + 0x428);
    *(void **)((u8 *)entry + 0xA4) = (void *)TagWin_OnOk;

    entry = *(u8 **)(self + 0x42C);
    *(void **)((u8 *)entry + 0xA4) = (void *)TagWin_OnCancel;

    return self;
}


