/* Functions from 0x800330F8 to 0x80055C70, found by decomp-toolkit. */
#include "common.h"
extern u8 gBattleMap[];

typedef struct { f32 x, y, z; } Vec;
typedef struct MapHeightCell444 { u8 pad[0x142D4]; s16 lower; u8 gap[0x8002]; s16 upper; } MapHeightCell444;
static inline void Map_CopyHeights444(u8 *map, s32 index, const s16 *lower, const s16 *upper)
{
    s32 k;
    MapHeightCell444 *cell;
    for (k = 0; k < 4; k++) {
        cell = (MapHeightCell444 *)(map + 2 * (index * 4 + k));
        cell->lower = lower[k];
        cell->upper = upper[k];
    }
}

static inline void Map_SetHeights444(u8 *map, s32 index, const s16 *heights)
{
    s32 k;
    MapHeightCell444 *cell;
    s16 height;
    for (k = 0; k < 4; k++) {
        height = heights[k];
        cell = (MapHeightCell444 *)(map + 2 * (index * 4 + k));
        cell->lower = height;
        cell->upper = height;
    }
}

static inline u8 DirFromIndex_80042558(s32 i)
{
    switch (i) {
    case 0: return 1;
    case 1: return 2;
    case 2: return 4;
    case 3: return 8;
    default: return 16;
    }
}

static inline s32 DirGetDX_80042558(s32 dir)
{
    switch (dir) {
    case 1: return -1;
    case 2: return 1;
    default: return 0;
    }
}

static inline s32 DirGetDY_80042558(s32 dir)
{
    switch (dir) {
    case 4: return 1;
    case 8: return -1;
    default: return 0;
    }
}

typedef struct {
    u8 pad0[4];
    s8 x0;
    s8 y0;
    s8 x1;
    s8 y1;
    u8 pad8[8];
    void *unk10;
    u8 pad14[0xA0];
} MapObj_80042558;

static inline u8 IsInRect_80042558(MapObj_80042558 *ent, s32 x, s32 y)
{
    if (x >= ent->x0 && x <= ent->x1 && y >= ent->y0 && y <= ent->y1) {
        return 1;
    }
    return 0;
}

typedef struct {
    u8 pad0[6];
    s16 count;
    u8 pad8[0xC];
    MapObj_80042558 *objs;
} Map_80042558;

static inline u8 *FindMapObj_80042558(Map_80042558 *map, s32 x, s32 y, u32 forbid, u32 require)
{
    s32 i;
    for (i = map->count - 1; i >= 0; i--) {
        if (forbid != 0 && (M2C_FIELD(map->objs[i].unk10, u32 *, 0xBC) & forbid)) continue;
        if ((M2C_FIELD(map->objs[i].unk10, u32 *, 0xBC) & require) != require) continue;
        if (IsInRect_80042558(&map->objs[i], x, y)) {
            return (u8 *)&map->objs[i];
        }
    }
    return 0;
}

static inline u8 *FindMapObjNear_80042558(Map_80042558 *map, s32 x, s32 y, u32 require)
{
    u8 *found = FindMapObj_80042558(map, x, y, 0, require);
    if (found != 0) {
        return found;
    }
    {
        s32 dir;
        for (dir = 0; dir < 4; dir++) {
            s32 d = DirFromIndex_80042558(dir);
            found = FindMapObj_80042558(map, x + DirGetDX_80042558(d), y + DirGetDY_80042558(d), 0, require);
            if (found != 0) {
                return found;
            }
        }
    }
    return 0;
}

extern f64 lbl_80368F90;
static inline void Map_WriteColorVertex(f32 x, f32 y, f32 z, const u8 *color) {
u8 r=color[0],g=color[1],b=color[2],a=color[3];
*(volatile f32 *)0xCC008000=x;
*(volatile f32 *)0xCC008000=y;
*(volatile f32 *)0xCC008000=z;
*(volatile u8 *)0xCC008000=r;
*(volatile u8 *)0xCC008000=g;
*(volatile u8 *)0xCC008000=b;
*(volatile u8 *)0xCC008000=a;
}
static inline void fn_80050E14_Body(u8 *obj, s32 zero) {
 s32 tableOffset, offset, i, n;
 u8 *table, *base;
 i = zero;
 *(s32 *)(obj+0x14) = i;
 offset = i;
 tableOffset = i;
 while (i < (n = *(s32 *)(obj+0x18))) {
  base = *(u8 **)obj;
  i++;
  table = *(u8 **)(obj+4);
  *(u32 *)(table+tableOffset) = (u32)base + offset;
  offset += 20;
  tableOffset += 4;
 }
 table = *(u8 **)(obj+4);
 *(u32 *)(table+n*4) = 0;
 *(void **)(obj+8) = *(void **)(obj+4);
 *(s32 *)(obj+12) = 0;
 *(s32 *)(obj+16) = 0;
}
typedef struct { void *ptr; u8 pad[4]; } Elem8_8003A1E0;
static inline s32 get_4F128_id(void *arg0) {
 void *Unit_GetActiveItemPtr(void *);
 s32 fn_8004ABD4(void *,s32);
 s32 value=M2C_FIELD(arg0,s8 *,0x16C);
 if(value>=0)return value;
 return fn_8004ABD4(Unit_GetActiveItemPtr(arg0),0);
}
static inline void *get_4F128_resource(void *arg0,s32 value) {
  void fn_800056A0(s32);
 void DebugPrint(void *, ...);
 void *Res_GetByName(void *);
 void *Unit_GetActiveItemPtr(void *);
 s32 fn_8004ABD4(void *,s32);
 u8 fn_8004AF74(void *,u8);
 void *fn_8004B078(void *,s32);
 void *fn_8004B158(void *);
 s32 fn_8004B1A0(s32);
 u16 FileCache_Probe(void *);
 void fn_8005C870(void *,u16);
 u8 Status_Test(void *,s32);
 void sprintf(void *,void *,...);
 extern u8 lbl_8026AB18[];
 extern void *lbl_80366DC8;

 char buf[0x20];
 void *base;
 s32 idx;
 void *name;
 void *resolved;
 
 base=M2C_FIELD(arg0,void * *,0x18C);
 if(M2C_FIELD(arg0,u8 *,3)&4) base=M2C_FIELD(base,void * *,0xC)?Res_GetByName(M2C_FIELD(base,void * *,0xC)):0;
 idx=0;
 if(Status_Test((u8 *)arg0+0x1BC,8)) {
 if(Status_Test((u8 *)base+0x1C,9)) idx=1;
 } else if(Status_Test((u8 *)base+0x1C,2)) idx=1;
 name=M2C_FIELD(arg0,void * *,0x188);
 name=(u8 *)name+idx*4;
 name=M2C_FIELD(name,void * *,0x5C);
 if(!name) name=M2C_FIELD(base,void * *,0x18);
 if(!name) {fn_800056A0(0);name=lbl_8026AB18+0x52;}
 
 if(!name||!*(s8 *)name) return Res_GetByName(lbl_8026AB18+0x53);
 sprintf(buf,lbl_8026AB18+0x5F,name,fn_8004B1A0(value));
 resolved=Res_GetByName(buf);
 if(!resolved) {fn_800056A0(0);return Res_GetByName(lbl_8026AB18+0x53);}
 sprintf(buf,lbl_8026AB18+0x64,fn_8004B158(resolved));
 if(FileCache_Probe(buf)==0x8000U) {
 DebugPrint(lbl_8026AB18+0x67,buf);
 return Res_GetByName(lbl_8026AB18+0x53);
 }
 return resolved;

}


static inline void *Unit_ResolveDisplayResource(s32 value,void *arg0) {
  void fn_800056A0(s32);
 void DebugPrint(void *, ...);
 void *Res_GetByName(void *);
 void *Unit_GetActiveItemPtr(void *);
 s32 fn_8004ABD4(void *,s32);
 u8 fn_8004AF74(void *,u8);
 void *fn_8004B078(void *,s32);
 void *fn_8004B158(void *);
 s32 fn_8004B1A0(s32);
 u16 FileCache_Probe(void *);
 void fn_8005C870(void *,u16);
 u8 Status_Test(void *,s32);
 void sprintf(void *,void *,...);
 extern u8 lbl_8026AB18[];
 extern void *lbl_80366DC8;

 char buf[0x20];
 void *base;
 s32 idx;
 void *name;
 void *resolved;
 
 base=M2C_FIELD(arg0,void * *,0x18C);
 if(M2C_FIELD(arg0,u8 *,3)&4) base=M2C_FIELD(base,void * *,0xC)?Res_GetByName(M2C_FIELD(base,void * *,0xC)):0;
 idx=0;
 if(Status_Test((u8 *)arg0+0x1BC,8)) {
 if(Status_Test((u8 *)base+0x1C,9)) idx=1;
 } else if(Status_Test((u8 *)base+0x1C,2)) idx=1;
 name=M2C_FIELD(arg0,void * *,0x188);
 name=(u8 *)name+idx*4;
 name=M2C_FIELD(name,void * *,0x5C);
 if(!name) name=M2C_FIELD(base,void * *,0x18);
 if(!name) {fn_800056A0(0);name=lbl_8026AB18+0x52;}
 
 if(!name||!*(s8 *)name) return Res_GetByName(lbl_8026AB18+0x53);
 sprintf(buf,lbl_8026AB18+0x5F,name,fn_8004B1A0(value));
 resolved=Res_GetByName(buf);
 if(!resolved) {fn_800056A0(0);return Res_GetByName(lbl_8026AB18+0x53);}
 sprintf(buf,lbl_8026AB18+0x64,fn_8004B158(resolved));
 if(FileCache_Probe(buf)==0x8000U) {
 DebugPrint(lbl_8026AB18+0x67,buf);
 return Res_GetByName(lbl_8026AB18+0x53);
 }
 return resolved;

}

static inline void *Unit_GetDisplayTexture(void *unit) {
 void *fn_8004B078(void *, s32);
 void *resource = get_4F128_resource(unit, get_4F128_id(unit));
 switch(M2C_FIELD(M2C_FIELD(unit,void **,0x190),u8 *,8)) {
 case 0: return fn_8004B078(resource,0);
 case 1: return fn_8004B078(resource,1);
 case 2: return fn_8004B078(resource,2);
 case 3: return fn_8004B078(resource,3);
 default: return fn_8004B078(resource,0);
 }
}
void fn_8004FE98(s32 arg0, s8 arg1);

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 pad0[0x168];
    s8 unk16C;
    u8 pad1[0xF];
    void *unk17C;
    u8 pad2[8];
    void *unk188;
    void *unk18C;
} Unit;

typedef struct {
    u8 pad0[0xC];
    u32 unkC;
    u8 pad1[8];
    void *unk18;
} Unk18CObj;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u8 unk28;
    u8 unk29;
    u8 unk2A;
    u8 unk2B;
    u8 unk2C;
    u8 unk2D;
    u8 unk2E;
    u8 unk2F;
    s32 unk30;
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 unk37;
    f32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk41;
    s32 unk42;
    s32 unk43;
} UnitStruct;


extern s8 *lbl_80366DC0;

typedef struct {
    u8 pad[0x18];
    s8 c0;
    s8 c1;
    s8 c2;
    s8 c3;
    s8 c4;
    s8 c5;
    s8 c6;
} NameCmpObj;

typedef struct {
    s8 c0;
    s8 c1;
    s8 c2;
    s8 c3;
    s8 c4;
    s8 c5;
    s8 c6;
} NameCmpRef;

extern void* lbl_803672A8;
extern f64 lbl_80368EF8;
extern f64 lbl_80368F08;
extern f32 lbl_80368FC0;
extern f32 lbl_80368FC4;
extern f32 lbl_8036901C;
extern f64 lbl_80368FE0;
extern f64 lbl_80368E80;
extern f32 gUnitInfoDrawScale;
extern f32 gUnitInfoDrawDepth;

#pragma cplusplus on
extern "C" void Prim2D_SetColorByte(u8);
extern "C" void Prim2D_SetTransform(f32, f32, f32, f32);
extern "C" void Prim2D_PrepareTex(void);
extern "C" void Prim2D_Begin(void);
extern "C" s32 UnitRef_GetUnit(u32);
extern "C" void UnitInfo_DrawStatus(s32);

#pragma cplusplus reset

/* Set brave-weapon flag (bit 3) on count*2 hit-table entries from the current cursor. */

#pragma global_optimizer off
#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset
#pragma global_optimizer reset

#pragma opt_strength_reduction reset

#pragma global_optimizer off

#pragma global_optimizer on

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
/* Promote the foe copy, then queue battle anims for each stat gain vs the base unit. */

#pragma use_lmw_stmw reset

/* Roll level-up growths from rates, clamp to class caps, and queue non-zero gains. */

/* Add rounded growth deltas into the unit's eight growth-progress bytes (clamp 0..255). */

#pragma global_optimizer off

#pragma global_optimizer reset

#pragma global_optimizer off

#pragma global_optimizer reset

#pragma opt_strength_reduction off
#pragma global_optimizer off

#pragma opt_strength_reduction reset
#pragma global_optimizer reset

#pragma opt_strength_reduction off

#pragma global_optimizer off
#pragma scheduling off

#pragma scheduling reset

#pragma global_optimizer on

#pragma peephole off

#pragma peephole on

/* Return the first deployed unit with the same faction and disposId as unit, and state flags 0x100 set / 8 clear. */

extern f32 lbl_80368EA8;
extern f32 lbl_80368EAC;
extern f32 lbl_80368EB0;
extern f32 lbl_80368EB4;
extern f64 lbl_80368EB8;

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
} UnkRet800378CC;

M2C_UNK fn_80165E90(s32 *, s32);

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma global_optimizer off

#pragma global_optimizer reset

#pragma scheduling off

#pragma scheduling reset

#pragma optimization_level 2

#pragma optimization_level reset

#pragma cplusplus off

#pragma dont_inline off
#pragma global_optimizer off

#pragma global_optimizer reset
#pragma dont_inline reset
extern u8 lbl_8026A3A8[176];
void *fn_800A88E0(u32);

#pragma global_optimizer off

#pragma global_optimizer reset

#pragma opt_strength_reduction reset

#pragma global_optimizer off

#pragma global_optimizer on

void *Unit_GetActiveItemPtr(void *);
void *fn_80037C20(void *);

#pragma opt_peephole off

#pragma opt_peephole off

#pragma opt_peephole reset

#pragma opt_peephole off

#pragma opt_peephole reset

#pragma opt_peephole reset

#pragma opt_peephole reset

#pragma optimization_level 3

#pragma optimization_level reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern s32 gGameState;

extern u16 gAffinityStr[];

/* If the unit has status flag 8, clear held items and equip the class default weapon. */

#pragma global_optimizer off
/* Tick laguz transform gauge by +4 (or -3 if transformed); return 1 if it hit 0 or 0x14. */

/* Tick laguz transform gauge by +2 (or -1 if transformed); return 1 if it hit 0 or 0x14. */

#pragma global_optimizer reset

/* Write unit aux fields (hash refs at +0x238.., counters, ids) to stream. */

void *Res_GetByName(s32);

#pragma global_optimizer off
/* Read a unit record from stream into unit; return 0 if person id is 0 (empty). */

#pragma use_lmw_stmw on

#pragma global_optimizer on

#pragma opt_strength_reduction off
#pragma optimization_level 3

#pragma optimization_level reset
#pragma opt_strength_reduction reset

#pragma opt_strength_reduction reset

#pragma use_lmw_stmw on

#pragma dont_inline on

#pragma dont_inline reset

#pragma use_lmw_stmw reset

#pragma global_optimizer off

#pragma global_optimizer on

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

void fn_8005C7E8(void *);

#pragma use_lmw_stmw on
#pragma global_optimizer off

#pragma global_optimizer on
#pragma use_lmw_stmw reset

static inline u8 MapObj_HasActionFlag(u32 flags)
{
    if (flags & 0x10) return 0;
    if (flags & 0x800) return 1;
    if (flags & 0x1000) return 1;
    return 0;
}

static inline u8 MapObj_HasBlockedAction(u32 flags)
{
    if (flags & 0x10) return 0;
    if (flags & 0x100000) return 1;
    return 0;
}

static inline u8 MapObj_GetState(u8 *obj)
{
    return obj[2] & 3;
}

static inline u8 MapObj_IsIdle(u8 *obj)
{
    u8 idle = MapObj_GetState(obj) == 0;
    return idle;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
/* Per-frame map update: alternate half-range prepare, rebuild entry matrices, queue deferred work. */

#pragma global_optimizer reset
#pragma use_lmw_stmw reset

/* Decode map header flags at +0x64 into gMapBlendMode and gBattleSkyIndex. */

#pragma optimization_level 3

#pragma optimization_level reset
#pragma global_optimizer off
#pragma opt_lifetimes on

#pragma global_optimizer on
#pragma use_lmw_stmw on

void fn_80042558(Map_80042558 *arg0)
{
    void fn_8005FEE8(void *, f32);
    void MapObj_FadeOut(void *, s32);
    s32 Map_CollectLinkedObjs(void *, void *, void *);
    void MapObj_Hide(void *, s32);
    s32 fn_8010FF88(void *);
    void fn_80044450(void *, s32);
    void Map_RefreshUnitMap(void *);
    void fn_8012391C(void *);
    void fn_800C1BDC(void);
    void fn_800C1984(void);
    void fn_8014716C(s32);
    void fn_80067460(s32);
    void fn_80066F64(void);
    void *Light_GetChannel(s32);
    void Light_CopyChannel(void *, void *);
    void fn_8006720C(void *);
    void fn_800675C8(s32);
    void *Fog_GetColor(void);
    void fn_80067480(void);
    void fn_80016180(void);

    extern u8 gMapObjEventList[];
    extern u8 gBattleMap[];
    extern u8 gMapBlendMode;
    extern f32 lbl_80368F2C;
    extern const f32 lbl_80368EF4;
    extern u8 lbl_80367294;
    extern u8 lbl_80367295;
    extern u8 lbl_80367298[3];
    extern u8 lbl_8036729C[3];
    extern u8 lbl_8036728C;
    extern u8 lbl_8036728D;
    extern u8 lbl_8036728E;
    extern u8 lbl_80367290[3];

    void *list[8];
    s32 eventIndex;

    for (eventIndex = 0; eventIndex < fn_8010FF88(gMapObjEventList); eventIndex++) {
        s8 *rec = (s8 *)(gMapObjEventList + eventIndex * 8);
        s32 x = rec[0];
        s32 y = rec[1];
        switch ((u8)rec[2] - 0x21) {
        case 3:
        {
            u8 *found = FindMapObj_80042558(arg0, x, y, 0x410, 0xA00);
            if (found != 0) {
                fn_8005FEE8(found + 0x14, lbl_80368F2C);
            }
            break;
        }
        case 0:
        {
            u8 *found = FindMapObj_80042558(arg0, x, y, 0, 0x1000);
            if (found != 0) {
                MapObj_FadeOut(found, 0);
                found = FindMapObjNear_80042558(arg0, x, y, 0x800);
                if (found != 0) {
                    s32 count = Map_CollectLinkedObjs(arg0, found, list);
                    s32 k;
                    for (k = 0; k < count; k++) {
                        MapObj_Hide(list[k], 0);
                    }
                }
            }
            break;
        }
        case 1:
        {
            u8 *found = FindMapObj_80042558(arg0, x, y, 0x410, 0x800);
            if (found != 0) {
                s32 count = Map_CollectLinkedObjs(arg0, found, list);
                s32 k;
                for (k = 0; k < count; k++) {
                    MapObj_Hide(list[k], 0);
                }
            }
            break;
        }
        case 2:
        {
            u8 *found = FindMapObj_80042558(arg0, x, y, 0x410, 0x200);
            if (found != 0) {
                fn_8005FEE8(found + 0x14, lbl_80368F2C);
            }
            break;
        }
        case 4:
        {
            u8 *found = FindMapObj_80042558(arg0, x, y, 0x410, 0xA00);
            if (found != 0) {
                found[2] |= 1;
                found = FindMapObj_80042558(arg0, x, y, 0, 0x20000);
                if (found != 0) {
                    fn_8005FEE8(found + 0x14, lbl_80368F2C);
                    found[2] &= ~1;
                }
            }
            break;
        }
        case 5:
        {
            u8 *found = FindMapObj_80042558(arg0, x, y, 0x410, 0x800);
            if (found != 0) {
                MapObj_Hide(found, 0);
            }
            break;
        }
        case 6:
        {
            u8 *found = FindMapObj_80042558(arg0, x, y, 0, 0x10000);
            if (found != 0) {
                MapObj_Hide(found, 0);
            }
            break;
        }
        case 7:
        {
            u8 *found = FindMapObj_80042558(arg0, x, y, 0x410, 0x200);
            if (found != 0) {
                fn_8005FEE8(found + 0x14, lbl_80368F2C);
            }
            break;
        }
        case 8:
        {
            u8 *found = FindMapObj_80042558(arg0, x, y, 0x10, 0x80000);
            if (found != 0) {
                found[2] |= 1;
            }
            break;
        }
        }
    }

    fn_80044450(arg0, 1);
    Map_RefreshUnitMap(gBattleMap);
    fn_8012391C(M2C_FIELD(arg0, void **, 0x30));

    switch (M2C_FIELD(arg0, u8 *, 0x68)) {
    case 0:
    {
        u8 validBlend;
        fn_800C1BDC();
        fn_800C1984();
        validBlend = (gMapBlendMode == 1 || gMapBlendMode == 2);
        if (validBlend) {
            fn_8014716C(1);
        } else {
            fn_8014716C(0);
        }
        break;
    }
    }

    fn_80067460(0);
    fn_80066F64();
    {
        u8 *channel = Light_GetChannel(0);
        *(f32 *)(channel + 0x24) = (f32)(s8)lbl_80367294;
        *(f32 *)(channel + 0x28) = (f32)(s8)lbl_80367295;
        channel[0] = lbl_8036729C[0];
        channel[1] = lbl_8036729C[1];
        channel[2] = lbl_8036729C[2];
        channel[4] = lbl_80367298[0];
        channel[5] = lbl_80367298[1];
        channel[6] = lbl_80367298[2];
    }
    Light_CopyChannel(Light_GetChannel(0), Light_GetChannel(2));
    fn_8006720C((u8 *)arg0 + 0x70);
    fn_800675C8(0);
    {
        u8 *fog = Fog_GetColor();
        fn_80067480();
        fog[0] = lbl_8036728C;
        *(f32 *)(fog + 4) = (f32)(s8)lbl_8036728D *
            M2C_FIELD(arg0, f32 *, 0x6C) * lbl_80368EF4;
        *(f32 *)(fog + 8) = (f32)(s8)lbl_8036728E *
            M2C_FIELD(arg0, f32 *, 0x6C) * lbl_80368EF4;
        fog[1] = lbl_80367290[0];
        fog[2] = lbl_80367290[1];
        fog[3] = lbl_80367290[2];
    }
    fn_80016180();
}
#pragma use_lmw_stmw reset

s32 fn_800431E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

extern f32 lbl_80368EE4;
void fn_800431EC(s32 unused, s32 arg1) {
    extern void *lbl_803672A8;
    extern f32 lbl_80368EE4;
    void *ptr = lbl_803672A8;

    fn_80222644(arg1, M2C_FIELD(ptr, s32 *, 0x1C), (s32)M2C_FIELD(ptr, f32 *, 0x10), (s32)M2C_FIELD(ptr, f32 *, 0x14), 4, 0, 0, 0);
    GXInitTexObjLOD(arg1, 0, 0, 0, 0, 0, lbl_80368EE4, lbl_80368EE4, lbl_80368EE4);
}

void Map_ClearDispCache(void) {
    void Process_UnlinkByKey(void *);
    void fn_800C4588(void *);
    void Heap_Free(void *);
    extern void *lbl_803672A8;
    extern u8 lbl_80285778[];

    if (lbl_803672A8 != NULL) {
        Process_UnlinkByKey(lbl_80285778);
        fn_800C4588(*(void **)((u8 *)lbl_803672A8 + 0x1C));
        *(void **)((u8 *)lbl_803672A8 + 0x1C) = NULL;
        Heap_Free(lbl_803672A8);
        lbl_803672A8 = NULL;
    }
}

#pragma global_optimizer off
void fn_800432D8(void *arg0) {
    void fn_80067708(s32, s32, void *, void *);
    void fn_80060060(void *);
    void fn_800609DC(void *);
    void fn_8006785C(s32, void *, void *);
    void fn_8006CAD4(void *);
    void PSMTXConcat(void *, void *, void *);
    void PSMTXRotRad(void *, s32, f32);
    void PSMTXTrans(void *, f32, f32, f32);
    void PSMTXScale(void *, f32, f32, f32);
    void fn_80043E88(void);
    void fn_80043DEC(void);
    void fn_800449C8(void);
    void fn_80048518(void);
    extern void *gMap;
    extern f64 lbl_80368EF8;
    extern f32 lbl_80368EE4;
    extern f32 lbl_80368EE8;
    extern f32 lbl_80368EEC;
    extern f32 lbl_80368EF0;
    extern f32 lbl_80368EF4;

    u8 sp158[0x30];
    u8 sp128[0x30];
    u8 spF8[0x30];
    u8 spC8[0x30];
    u8 sp98[0x30];
    u8 sp68[0x30];
    u8 sp38[0x30];
    u8 sp8[0x30];
    u32 mask;
    u8 *ent;
    s32 i;
    u8 *sub;
    u8 flags;
    f32 f31v, f30v, f29v, f28v;
    f32 t30;
    s16 h;
    s32 a, b;
    f32 scale;
    f32 temp_f0;

    fn_80067708(0, 1, fn_80043E88, arg0);
    if (*(u32 *)((u8 *)arg0 + 0xC) != 0) {
        s32 n;
        u8 *e;
        e = *(u8 **)((u8 *)arg0 + 0x14);
        n = 0;
        goto clear_test;
    clear_body:
        {
            u8 f;
            f = e[2];
            n += 1;
            e[2] = f & 0x7F;
            e += 0xB4;
        }
    clear_test:
        if (n < *(s16 *)((u8 *)arg0 + 6)) {
            goto clear_body;
        }
    }
    if ((*(u32 *)((u8 *)arg0 + 0x64) & 0x80000000) == 0 && (*(u32 *)((u8 *)arg0 + 0x64) & 0x40000000) != 0) {
        ent = *(u8 **)((u8 *)arg0 + 0x14);
        i = 0;
        goto loop1_test;
    loop1_body:
        sub = ent + 0x14;
        flags = ent[2];
        mask = *(u32 *)(*(u8 **)(ent + 0x10) + 0xBC);
        if ((mask & 1) == 0 && (flags & 1) == 0) {
            if ((mask & 0x400) != 0) {
                fn_80060060(sub);
            }
            if ((flags & 0x80) == 0) {
                if ((mask & 0x80) != 0) {
                    f28v = (f32)(s8)ent[0] + lbl_80368EE4;
                    f29v = -(*(f32 *)(ent + 0xC) + *(f32 *)(*(u8 **)((u8 *)gMap + 0x30) + 0x48));
                    t30 = (f32)(s8)ent[1];
                    f31v = *(f32 *)(ent + 8) + lbl_80368EE4;
                    f30v = t30 + lbl_80368EE4;
                    if (*(u8 *)((u8 *)arg0 + 0x68) == 1) {
                        a = *(s16 *)arg0;
                        h = *(s16 *)((u8 *)arg0 + 2);
                        a = ((u32)a >> 31) + a;
                        a >>= 1;
                        f28v -= (f32)a;
                        f30v -= (f32)((s32)(((u32)h >> 31) + h) >> 1);
                    }
                    PSMTXTrans(sp158, lbl_80368EE8, lbl_80368EE4, lbl_80368EE8);
                    PSMTXRotRad(sp128, 0x59, lbl_80368EEC * f31v);
                    PSMTXConcat(sp128, sp158, sp128);
                    PSMTXTrans(sp158, lbl_80368EF0, lbl_80368EE4, lbl_80368EF0);
                    PSMTXConcat(sp158, sp128, spC8);
                    scale = *(f32 *)((u8 *)arg0 + 0x6C);
                    PSMTXScale(spF8, scale, scale, scale);
                    PSMTXConcat(spF8, spC8, spC8);
                    temp_f0 = *(f32 *)((u8 *)arg0 + 0x6C);
                    PSMTXTrans(sp158, lbl_80368EF4 * (f28v * temp_f0), lbl_80368EF4 * (f29v * temp_f0), lbl_80368EF4 * (f30v * temp_f0));
                    PSMTXConcat(sp158, spC8, spC8);
                    PSMTXConcat((u8 *)arg0 + 0x70, spC8, ent + 0x24);
                }
                if ((mask & 0x10000) != 0) {
                    fn_8006785C(2, fn_80048518, ent);
                }
                fn_800609DC(sub);
                fn_8006CAD4(sub);
            }
        }
        i += 1;
        ent += 0xB4;
    loop1_test:
        if (i < *(s16 *)((u8 *)arg0 + 6)) {
            goto loop1_body;
        }
    }
    if (*(u32 *)((u8 *)arg0 + 0xC) != 0 && (*(u32 *)((u8 *)arg0 + 0x64) & 0x80000000) == 0) {
        fn_8006785C(2, fn_800449C8, arg0);
    }
    if ((*(u32 *)((u8 *)arg0 + 0x64) & 0x80000000) == 0 && (*(u32 *)((u8 *)arg0 + 0x64) & 0x40000000) != 0) {
        u32 m;
        s32 n;
        ent = *(u8 **)((u8 *)arg0 + 0x14);
        n = 0;
        goto loop2_test;
    loop2_body:
        sub = ent + 0x14;
        flags = ent[2];
        m = *(u32 *)(*(u8 **)(ent + 0x10) + 0xBC);
        if ((u32)(m & 1) == 1 && (flags & 1) == 0) {
            if ((m & 0x400) != 0) {
                fn_80060060(sub);
            }
            if ((flags & 0x80) == 0) {
                if ((m & 0x80) != 0) {
                    f31v = (f32)(s8)ent[0] + lbl_80368EE4;
                    f30v = -(*(f32 *)(ent + 0xC) + *(f32 *)(*(u8 **)((u8 *)gMap + 0x30) + 0x48));
                    t30 = (f32)(s8)ent[1];
                    f28v = *(f32 *)(ent + 8) + lbl_80368EE4;
                    f29v = t30 + lbl_80368EE4;
                    if (*(u8 *)((u8 *)arg0 + 0x68) == 1) {
                        a = *(s16 *)arg0;
                        h = *(s16 *)((u8 *)arg0 + 2);
                        a = ((u32)a >> 31) + a;
                        a >>= 1;
                        f31v -= (f32)a;
                        f29v -= (f32)((s32)(((u32)h >> 31) + h) >> 1);
                    }
                    PSMTXTrans(sp98, lbl_80368EE8, lbl_80368EE4, lbl_80368EE8);
                    PSMTXRotRad(sp68, 0x59, lbl_80368EEC * f28v);
                    PSMTXConcat(sp68, sp98, sp68);
                    PSMTXTrans(sp98, lbl_80368EF0, lbl_80368EE4, lbl_80368EF0);
                    PSMTXConcat(sp98, sp68, sp8);
                    scale = *(f32 *)((u8 *)arg0 + 0x6C);
                    PSMTXScale(sp38, scale, scale, scale);
                    PSMTXConcat(sp38, sp8, sp8);
                    temp_f0 = *(f32 *)((u8 *)arg0 + 0x6C);
                    PSMTXTrans(sp98, lbl_80368EF4 * (f31v * temp_f0), lbl_80368EF4 * (f30v * temp_f0), lbl_80368EF4 * (f29v * temp_f0));
                    PSMTXConcat(sp98, sp8, sp8);
                    PSMTXConcat((u8 *)arg0 + 0x70, sp8, ent + 0x24);
                }
                if ((m & 0x10000) != 0) {
                    fn_8006785C(2, fn_80048518, ent);
                }
                fn_800609DC(sub);
                fn_8006CAD4(sub);
            }
        }
        n += 1;
        ent += 0xB4;
    loop2_test:
        if (n < *(s16 *)((u8 *)arg0 + 6)) {
            goto loop2_body;
        }
    }
    fn_80067708(2, 3, fn_80043DEC, arg0);
}

void fn_80043838(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7)
{
    extern void *lbl_803672A8;
    extern u8 lbl_8026A660[];
    extern u8 lbl_80285778[];
    extern f32 lbl_80368F30;

    void *Heap_Alloc(s32);
    u32 GXGetTexBufferSize(u32, u32, u32, u32, u32);
    void *fn_800C45B8(s32, void *, s32);
    void DCInvalidateRange(void *, u32);
    void fn_800432D8(void *);
    void *Process_CreateChild(void *, void *);

    f32 scale;
    u32 size;
    void *buffer;

    lbl_803672A8 = Heap_Alloc(0x20);

    *(f32 *)((u8 *)lbl_803672A8 + 0x00) = arg2;
    *(f32 *)((u8 *)lbl_803672A8 + 0x04) = arg3;
    *(f32 *)((u8 *)lbl_803672A8 + 0x10) = arg6;
    *(f32 *)((u8 *)lbl_803672A8 + 0x14) = arg7;

    scale = arg4;
    if (arg4 * arg7 / arg6 < arg5) {
        scale = arg5;
    }
    if (scale > lbl_80368F30) {
        scale = lbl_80368F30;
    }

    *(f32 *)((u8 *)lbl_803672A8 + 0x08) = scale;
    *(f32 *)((u8 *)lbl_803672A8 + 0x0C) = scale;

    if (arg6 > arg7) {
        *(f32 *)((u8 *)lbl_803672A8 + 0x08) *= arg6 / arg7;
    } else {
        *(f32 *)((u8 *)lbl_803672A8 + 0x0C) *= arg7 / arg6;
    }

    size = GXGetTexBufferSize((s32)arg6, (s32)arg7, 4, 0, 0);
    buffer = fn_800C45B8(-(s32)size, lbl_8026A660 + 0x245, 0);
    *(void **)((u8 *)lbl_803672A8 + 0x1C) = buffer;
    DCInvalidateRange(*(void **)((u8 *)lbl_803672A8 + 0x1C), size);

    if (arg1 == 0) {
        fn_800432D8(arg0);
    } else {
        Process_CreateChild(lbl_80285778, arg1);
    }
}

void fn_80043A00(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_80043838(s32, f32, f32, f32, f32, f32, f32);
    extern f32 lbl_80368F00;
    s16 temp_r11;
    s16 temp_r12;
    s32 temp_r8;

    temp_r12 = M2C_FIELD(arg0, s16 *, 0);
    temp_r11 = M2C_FIELD(arg0, s16 *, 2);
    temp_r8 = M2C_FIELD(arg0, u8 *, 0x61) * 2;
    fn_80043838(arg3, (f32) temp_r12 * lbl_80368F00, (f32) temp_r11 * lbl_80368F00, (f32) (temp_r12 - temp_r8), (f32) (temp_r11 - temp_r8), (f32) arg1, (f32) arg2);
}

void fn_80043AC8(void *arg0) {
    M2C_UNK fn_80068550(s32);
    M2C_UNK fn_800C4588(void *);
    extern u32 gGameFlags;
    void *temp_r31;

    fn_80068550(M2C_FIELD(arg0, s32 *, 0x54));
    temp_r31 = M2C_FIELD(arg0, void **, 0x58);
    fn_800C4588(M2C_FIELD(temp_r31, void **, 0x114));
    M2C_FIELD(temp_r31, void **, 0x114) = NULL;
    fn_800C4588(temp_r31);
    gGameFlags &= ~8U;
}

void fn_80043B20(void) {
    extern void *gMap;
    extern void fn_800432D8(void *);

    fn_800432D8(gMap);
}

void fn_80043B44(void *arg0) {
void *Camera_Get(void);
void *fn_800C45B8(s32,void *,s32);
void fn_80068550(void);
void fn_800680AC(s32,s32,s32,s32);
void fn_80068070(f32,f32,f32,f32);
void fn_8006805C(f32,f32);
void fn_80202A6C(void *,f32,f32,f32,f32);
void fn_800680D0(void *,s32);
void fn_80067FE8(void *,void *,void *);
void fn_80066124(void *);
extern u8 gMapTileEdgeVecs[],lbl_8026A660[];
extern u32 gGameFlags;
extern f32 lbl_80368EE4,lbl_80368F34,lbl_80368F38,lbl_80368F10,lbl_80368F3C,lbl_80368F40,lbl_80368F44,lbl_80368F48;
f32 matrix[16]; f32 a[3]; f32 b[3]; f32 c[3];
u8 *cam; u8 *table=gMapTileEdgeVecs;
M2C_FIELD(arg0,void **,0x54)=Camera_Get();
cam=fn_800C45B8(-400,lbl_8026A660+0x245,0);
fn_80068550(); *(u16 *)cam=2;
fn_800680AC(0,0,608,448);
fn_80068070(lbl_80368EE4,lbl_80368EE4,lbl_80368F34,lbl_80368F38);
fn_8006805C(lbl_80368F10,lbl_80368F3C);
fn_80202A6C(matrix,lbl_80368F40,*(f32 *)(cam+12)/ *(f32 *)(cam+16),*(f32 *)(cam+0x180),*(f32 *)(cam+0x184));
fn_800680D0(matrix,1);
*(u32 *)&a[0]=*(u32 *)(table+172);
*(u32 *)&a[1]=*(u32 *)(table+176);
*(u32 *)&a[2]=*(u32 *)(table+180);
*(f32 *)(cam+212)=a[0];
*(f32 *)(cam+216)=a[1];
*(f32 *)(cam+220)=a[2];
*(u32 *)&b[0]=*(u32 *)(table+184);
*(u32 *)&b[1]=*(u32 *)(table+188);
*(u32 *)&b[2]=*(u32 *)(table+192);
*(f32 *)(cam+224)=b[0];
*(f32 *)(cam+228)=b[1];
*(f32 *)(cam+232)=b[2];
*(u32 *)&c[0]=*(u32 *)(table+196);
*(u32 *)&c[1]=*(u32 *)(table+200);
*(u32 *)&c[2]=*(u32 *)(table+204);
*(f32 *)(cam+236)=c[0];
*(f32 *)(cam+240)=c[1];
*(f32 *)(cam+244)=c[2];
*(f32 *)(cam+0xF8)=80.0f;
*(f32 *)(cam+0xFC)=0.0f;
*(f32 *)(cam+0x100)=0.0f;
*(f32 *)(cam+0x104)=0.0f;
*(f32 *)(cam+0x18C)=30.0f;
*(f32 *)(cam+0x188)=1.3333333333333333f;
fn_80067FE8(cam+0xD4,cam+0xEC,cam+0xE0);
*(void **)(cam+0x114)=fn_800C45B8(-0x4000,lbl_8026A660+0x245,0);
*(u16 *)(cam+0x11A)=0x400;
fn_80066124(cam);
M2C_FIELD(arg0,void **,0x58)=cam;
gGameFlags|=8;
}

s32 fn_80043D18(s32 unused, s32 x, s32 y, f32 *out) {
    extern void *lbl_803672A8;
    extern f64 lbl_80368EF8;
    extern f32 lbl_80368F00;
    extern f32 lbl_80368EE4;
    f32 *p;
    f32 b;
    f32 a;
    f32 zero;
    f32 p1;
    f32 p3;
    f32 t;
    f32 fy;
    f32 fx;
    f32 p0;
    f32 half;
    f32 scale;
    f32 p2;
    f32 hi;

    p = lbl_803672A8;
    hi = p[4];
    p2 = p[2];
    scale = hi / p2;
    half = lbl_80368F00;
    p0 = p[0];
    fx = (f32)x;
    t = p0 - p2 * half;
    p3 = p[3];
    fy = (f32)y;
    a = (half + fx) - t;
    p1 = p[1];
    zero = lbl_80368EE4;
    t = p1 - p3 * half;
    b = (half + fy) - t;
    out[0] = scale * a;
    out[1] = scale * b;
    out[2] = zero;
    if (out[0] < zero || out[1] < zero || out[0] > hi || out[1] > hi) {
        return 0;
    }
    return 1;
}

f32 fn_80043DD8(void) {
    extern void *lbl_803672A8;
    return M2C_FIELD(lbl_803672A8, f32 *, 0x10) / M2C_FIELD(lbl_803672A8, f32 *, 8);
}

void fn_80043DEC(void) {
    M2C_UNK fn_802209FC();
    M2C_UNK fn_8022124C(s32, s32, u16, u16);
    void fn_802212FC(u16, u16, s32, u8);
    M2C_UNK GXCopyTex(s32, s32);
    M2C_UNK fn_80222EB4();
    M2C_UNK fn_80067984(s32);
    M2C_UNK fn_80067058();
    extern void *lbl_803672A8;
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = (s32)*(f32 *)((char *)lbl_803672A8 + 0x10);
    temp_r30 = (s32)*(f32 *)((char *)lbl_803672A8 + 0x14);
    fn_8022124C(0, 0, (u16)temp_r31, (u16)temp_r30);
    fn_802212FC((u16)temp_r31, (u16)temp_r30, 4, 0);
    GXCopyTex(*(s32 *)((char *)lbl_803672A8 + 0x1C), 1);
    fn_802209FC();
    fn_80222EB4();
    fn_80067984(0);
    fn_80067058();
}

void fn_80043E88(void) {
 void *Camera_Get(void);
 void fn_80068070(f32,f32,f32,f32);
 void fn_800680AC(s32,s32,s32,s32);
 void fn_80067C48(s32,f32,f32);
 void fn_80067058(void);
 f32 x,y,w,h,a,b;
 f32 *p=lbl_803672A8;
 x=p[0]; y=p[1]; w=p[4]; h=p[5]; a=p[2]; b=p[3];
 p=Camera_Get();
 p[0x38]=x; p[0x39]=y;
 p[0x3A]=0.0f; p[0x3B]=0.0f;
 p[0x3C]=-1.0f; p[0x3D]=0.0f;
 p[0x35]=x; p[0x36]=y; p[0x37]=-30.0f;
 fn_80068070(0.0f,0.0f,w,h);
 fn_800680AC(0,0,(s32)w,(s32)h);
 fn_80067C48(0,a,b);
 fn_80067058();
}

#pragma global_optimizer off
/* Build a terrain-aligned 3x4 basis matrix from map tile corner heights at (x, y). */
void Map_BuildSlopeMatrix(void *cam, f32 *mtx, f32 x, f32 y) {
    f32 Map_GetTileCornerHeight(void *, s32, s32, s32);
    void fn_80203290(f32 *, f32 *, f32 *);
    void fn_802031E8(f32 *, f32 *);
    extern u8 gBattleMap[];
    extern u8 gMapTileEdgeVecs[];
    extern f32 lbl_80368F10;
    extern f32 lbl_80368F00;
    extern f32 lbl_80368EE4;
    f32 xAxis[3];
    f32 binormal[3];
    f32 normal[3];
    f32 unit[3];
    f32 nTri0[3];
    f32 nTri1[3];
    f32 edge0b[3];
    f32 edge0a[3];
    f32 edge0bTmp[3];
    f32 edge0aTmp[3];
    f32 edge1b[3];
    f32 edge1a[3];
    f32 edge1bTmp[3];
    f32 edge1aTmp[3];
    u8 *tbl;
    s32 ix;
    s32 iy;
    f32 base;
    f32 t;
    f32 tmp;
    f32 zero;
    f32 one;

    tbl = gMapTileEdgeVecs;
    ix = (s32)x;
    iy = (s32)y;
    base = Map_GetTileCornerHeight(gBattleMap, ix, iy, 0);

    *(u32 *)&edge0a[0] = *(u32 *)(tbl + 0x94);
    *(u32 *)&edge0a[1] = *(u32 *)(tbl + 0x98);
    *(u32 *)&edge0a[2] = *(u32 *)(tbl + 0x9C);
    tmp = Map_GetTileCornerHeight(gBattleMap, ix, iy, 1) - base;
    {
        u32 t2;
        u32 tz;
        u32 t1;
        u32 t0;
        t0 = *(u32 *)&edge0a[0];
        t1 = *(u32 *)&edge0a[1];
        t2 = *(u32 *)(tbl + 0xA0);
        edge0a[2] = tmp;
        *(u32 *)&edge0aTmp[0] = t0;
        *(u32 *)&edge0aTmp[1] = t1;
        tz = *(u32 *)&edge0a[2];
        *(u32 *)&edge0aTmp[2] = tz;
        *(u32 *)&edge0b[0] = t2;
        *(u32 *)&edge0b[1] = *(u32 *)(tbl + 0xA4);
        *(u32 *)&edge0b[2] = *(u32 *)(tbl + 0xA8);
    }
    tmp = Map_GetTileCornerHeight(gBattleMap, ix, iy, 2) - base;
    *(u32 *)&edge0bTmp[0] = *(u32 *)&edge0b[0];
    *(u32 *)&edge0bTmp[1] = *(u32 *)&edge0b[1];
    edge0b[2] = tmp;
    *(u32 *)&edge0bTmp[2] = *(u32 *)&edge0b[2];
    fn_80203290(edge0aTmp, edge0bTmp, nTri0);

    base = Map_GetTileCornerHeight(gBattleMap, ix, iy, 3);

    *(u32 *)&edge1a[0] = *(u32 *)(tbl + 0x7C);
    *(u32 *)&edge1a[1] = *(u32 *)(tbl + 0x80);
    *(u32 *)&edge1a[2] = *(u32 *)(tbl + 0x84);
    tmp = Map_GetTileCornerHeight(gBattleMap, ix, iy, 2) - base;
    {
        u32 t2;
        u32 tz;
        u32 t1;
        u32 t0;
        t0 = *(u32 *)&edge1a[0];
        t1 = *(u32 *)&edge1a[1];
        t2 = *(u32 *)(tbl + 0x88);
        edge1a[2] = tmp;
        *(u32 *)&edge1aTmp[0] = t0;
        *(u32 *)&edge1aTmp[1] = t1;
        tz = *(u32 *)&edge1a[2];
        *(u32 *)&edge1aTmp[2] = tz;
        *(u32 *)&edge1b[0] = t2;
        *(u32 *)&edge1b[1] = *(u32 *)(tbl + 0x8C);
        *(u32 *)&edge1b[2] = *(u32 *)(tbl + 0x90);
    }
    tmp = Map_GetTileCornerHeight(gBattleMap, ix, iy, 1) - base;
    *(u32 *)&edge1bTmp[0] = *(u32 *)&edge1b[0];
    *(u32 *)&edge1bTmp[1] = *(u32 *)&edge1b[1];
    edge1b[2] = tmp;
    *(u32 *)&edge1bTmp[2] = *(u32 *)&edge1b[2];
    fn_80203290(edge1aTmp, edge1bTmp, nTri1);

    t = (y + (x - (f32)(s8)ix)) - (f32)(s8)iy;
    if (lbl_80368F10 == t) {
        normal[0] = lbl_80368F00 * (nTri0[0] + nTri1[0]);
        normal[1] = lbl_80368F00 * (nTri0[1] + nTri1[1]);
        normal[2] = lbl_80368F00 * (nTri0[2] + nTri1[2]);
    } else if (t > lbl_80368F10) {
        normal[0] = nTri1[0];
        normal[1] = nTri1[1];
        normal[2] = nTri1[2];
    } else {
        normal[0] = nTri0[0];
        normal[1] = nTri0[1];
        normal[2] = nTri0[2];
    }

    zero = lbl_80368EE4;
    one = lbl_80368F10;
    xAxis[1] = zero;
    xAxis[0] = one;
    xAxis[2] = zero;
    fn_80203290(normal, xAxis, binormal);
    fn_80203290(binormal, normal, xAxis);

    fn_802031E8(xAxis, unit);
    mtx[0] = unit[0];
    mtx[4] = unit[1];
    mtx[8] = unit[2];

    fn_802031E8(binormal, unit);
    mtx[1] = unit[0];
    mtx[5] = unit[1];
    mtx[9] = unit[2];

    fn_802031E8(normal, unit);
    {
        f32 z;
        t = unit[0];
        z = lbl_80368EE4;
        mtx[2] = t;
        t = unit[1];
        mtx[6] = t;
        t = unit[2];
        mtx[10] = t;
        mtx[11] = z;
        mtx[7] = z;
        mtx[3] = z;
    }
}

#pragma global_optimizer off
u8 fn_8004434C(void *arg0, s32 x, s32 y) {
u8 *map=arg0; u8 *entry; s32 count; u32 flags, disabled; u8 valid; s32 x0,y0,x1,y1;
if (!(*(u32 *)(map+0x64)&0x10000000)) return 0;
count=*(s16 *)(map+6); entry=*(u8 **)(map+0x14);
while(count>0) {
flags=*(u32 *)(*(u8 **)(entry+0x10)+0xBC); disabled=flags&0x10;
if(disabled) valid=0;
else if(flags&0x800) valid=1;
else if(flags&0x1000) valid=1;
else valid=0;
if(valid) {
if(disabled) valid=0;
else if(flags&0x100000) valid=1;
else valid=0;
if(!valid) {
valid=(entry[2]&3)==0;
if(valid) {
x0=entry[4]; y0=entry[5]; x1=entry[6]; y1=entry[7];
y1=(s8)y1; y0=(s8)y0; x1=(s8)x1; x0=(s8)x0;
if(x>=x0 && x<=x1 && y>=y0 && y<=y1) return 1;
}
}
}
entry+=0xB4; count--;
}
return 0;
}
#pragma push
#pragma optimization_level 4
#pragma use_lmw_stmw on
#pragma opt_common_subs off
#pragma global_optimizer off
void fn_80044450(void *arg0, s32 arg1) {
void *Hash_Lookup(void *);
u32 Res_GetByName(void *);
void fn_80015DEC(void);
void fn_80023A4C(void *);
void fn_80023B80(void *);
void fn_80045604(void *);
u8 fn_8005B7A4(void *);
extern u8 lbl_8026A660[];
extern u8 gBattleMap[];

    void *tblA;
    u16 *idxA;
    void *tblB;
    u16 *idxB;
    u8 *ca;
    s32 rowSl;
    u8 *rowPtr;
    u8 *tileA;
    u8 *tileB;
    s32 t;
    s32 c;
    s32 off;
    u8 ok;
    s16 v;
    u8 *p;
    s32 q;
    s32 sh;
    s32 q1;
    u16 ia;
    u16 ib;
    void *node;
    s32 i;
    u32 flags;
    s32 x0;
    s32 y0;
    s32 x1;
    s32 y1;
    s32 lim;
    s32 yy;
    s32 xx;
    u16 *src;
    u8 *tile;
    s32 row;
    s32 col;
    s32 k;
    MapHeightCell444 *cell;

    tblA = Hash_Lookup(lbl_8026A660 + 0x289);
    idxA = Hash_Lookup(lbl_8026A660 + 0x295);
    tblB = tblA;
    idxB = idxA;
    if (Res_GetByName(lbl_8026A660 + 0x2A0) != 0) {
        tblB = Hash_Lookup(lbl_8026A660 + 0x2A0);
        idxB = Hash_Lookup(lbl_8026A660 + 0x2B0);
    }
    ca = gBattleMap;
    for (row = 0; row < *(s16 *)((u8 *)arg0 + 2); row++) {
        rowSl = (s8)row << 6;
        rowPtr = ca + rowSl;
        for (col = 0; col < *(s16 *)((u8 *)arg0 + 0); col++) {
            tileA = (u8 *)tblA + *idxA++ * 0xC;
            tileB = (u8 *)tblB + *idxB++ * 0xC;
            ok = fn_8005B7A4(*(void **)(tileA + 8));
            c = (s8)col;
            off = c + 0x100D;
            rowPtr[off] = ok;
            t = c + rowSl;
            Map_CopyHeights444(ca, t, (s16*)tileA, (s16*)tileB);
        }
    }
    if (*(u32 *)((u8 *)arg0 + 0x64) & 0x10000000) {
        node = *(void **)((u8 *)arg0 + 0x14);
        for (i = 0; i < *(s16 *)((u8 *)arg0 + 6); i++, node = (u8 *)node + 0xB4) {
            flags = *(u32 *)(*(u8 **)((u8 *)node + 0x10) + 0xBC);
            if (flags & 0x10) {
                ok = 0;
            } else if (flags & 0x800) {
                ok = 1;
            } else if (flags & 0x1000) {
                ok = 1;
            } else {
                ok = 0;
            }
            if ((u8)ok == 0) {
                continue;
            }
            ok = (u8)((*(u8 *)((u8 *)node + 2) & 3) == 0);
            if (ok == 0) {
                continue;
            }
            x0 = *(s8 *)((u8 *)node + 4);
            y0 = *(s8 *)((u8 *)node + 5);
            x1 = *(s8 *)((u8 *)node + 6);
            y1 = *(s8 *)((u8 *)node + 7);
            if (x0 < 0) {
                x0 = 0;
            }
            if (y0 < 0) {
                y0 = 0;
            }
            lim = *(s16 *)((u8 *)arg0 + 0) - 1;
            if (x1 >= lim) {
                x1 = lim;
            }
            lim = *(s16 *)((u8 *)arg0 + 2) - 1;
            if (y1 >= lim) {
                y1 = lim;
            }
            if (flags & 2) {
                if (Res_GetByName(lbl_8026A660 + 0x26A) == 0) {
                    continue;
                }
                tblA = Hash_Lookup(lbl_8026A660 + 0x26A);
                idxA = Hash_Lookup(lbl_8026A660 + 0x27A);
                ca = gBattleMap;
                for (yy = y0; yy <= y1; yy++) {
                    src = idxA + (x0 + yy * *(s16 *)((u8 *)arg0 + 0));
                    rowSl = (s8)yy << 6;
                    rowPtr = ca + rowSl;
                    xx = x0;
                    for (; xx <= x1; xx++) {
                        ia = *src;
                        src += 1;
                        tile = (u8 *)tblA + ia * 0xC;
                        ok = fn_8005B7A4(*(void **)(tile + 8));
                        c = (s8)xx;
                        off = c + 0x100D;
                        rowPtr[off] = ok;
                        t = c + rowSl;
                        Map_SetHeights444(ca, t, (s16*)tile);
                    }
                }
            } else {
                if (Res_GetByName(lbl_8026A660 + 0x26A) == 0) {
                    continue;
                }
                tblA = Hash_Lookup(lbl_8026A660 + 0x26A);
                idxA = Hash_Lookup(lbl_8026A660 + 0x27A);
                ca = gBattleMap;
                for (yy = y0; yy <= y1; yy++) {
                    src = idxA + (x0 + yy * *(s16 *)((u8 *)arg0 + 0));
                    rowSl = (s8)yy << 6;
                    rowPtr = ca + rowSl;
                    xx = x0;
                    for (; xx <= x1; xx++) {
                        ia = *src;
                        src += 1;
                        tile = (u8 *)tblA + ia * 0xC;
                        ok = fn_8005B7A4(*(void **)(tile + 8));
                        c = (s8)xx;
                        off = c + 0x100D;
                        rowPtr[off] = ok;
                        t = c + rowSl;
                        sh = t << 3;
                        p = ca + sh;
                        *(s16 *)(p + 0x142D4) = *(s16 *)tile;
                        q = t << 2;
                        p = ca + ((q + 1) << 1);
                        *(s16 *)(p + 0x142D4) = *(s16 *)(tile + 2);
                        p = ca + ((q + 2) << 1);
                        *(s16 *)(p + 0x142D4) = *(s16 *)(tile + 4);
                        p = ca + ((q + 3) << 1);
                        *(s16 *)(p + 0x142D4) = *(s16 *)(tile + 6);
                    }
                }
            }
        }
    }
    fn_80023B80(gBattleMap);
    fn_80045604(arg0);
    fn_80023A4C(gBattleMap);
    if ((u8)arg1 != 0) {
        fn_80015DEC();
        *(u32 *)((u8 *)arg0 + 0x64) |= 1;
    }
}
#pragma pop

void Map_ReloadTileFlags(void *arg0, u8 arg1) {
    void fn_80023A4C(void *);
    void fn_80023B80(void *);
    void fn_80045604(void *);
    extern u8 gBattleMap[];

    fn_80023B80(gBattleMap);
    fn_80045604(arg0);
    if (arg1 != 0) {
        fn_80023A4C(gBattleMap);
    }
}

void fn_800449C8(void *arg0) {
void fn_80044BE4(void *);
void fn_80069C7C(void);
s32 GMaterial_AllocTevStage(void);
void PSMTXTrans(void *,f32,f32,f32);
void *Camera_GetViewMtx(void);
void PSMTXConcat(void *,void *,void *);
void GXLoadPosMtxImm(void *,s32);
void GXSetCurrentMtx(s32);
void fn_80202238(void *,void *);
void fn_80224DCC(void *,s32);
void fn_80220F44(s32,s32);
void GXSetCullMode(s32);
void GXSetChanMatColor(s32,void *);
void fn_80222164(s32,void *);
void GXSetBlendMode(s32,s32,s32,s32,s32,s32,s32);
void GXSetTevOrder(s32,s32,s32,s32);
void GXSetNumTexGens(s32,s32);
void GXClearVtxDesc(void);
void GXSetVtxDesc(s32,s32);
void GXSetVtxAttrFmt(s32,s32,s32,s32,s32);
void fn_802245D8(s32,s32,s32,s32);
void fn_802246B8(s32);
void fn_80223E5C(s32,s32,s32,s32,s32);
void GXSetZMode(s32,s32,s32);
void fn_800C15A8(void);
s32 fn_80069E74(void);
void GXSetNumTevStages(s32);
s32 fn_80069DB4(void);
void GXSetNumChans(s32);
void fn_80224A68(s32,s32);
void fn_80066D00(s32);
extern u8 gBattleState[],gMapBlendMode;
extern f32 lbl_80368EE4,lbl_80368F54;
extern u32 lbl_80368EE0;
f32 matrix[3][4];
u32 color,mat,amb;
s32 stage;
s32 flag;
u32 t;
if(M2C_FIELD(arg0,u32 *,0x64)&1){
M2C_FIELD(arg0,u32 *,0x64)&=~1;
fn_80044BE4(arg0);
}
color=M2C_FIELD(arg0,u32 *,0xa0);
((u8 *)&color)[3]=gBattleState[0xa0]*255/100;
fn_80069C7C();
stage=GMaterial_AllocTevStage();
PSMTXTrans(matrix,lbl_80368EE4,lbl_80368EE4,lbl_80368F54);
PSMTXConcat(Camera_GetViewMtx(),matrix,matrix);
GXLoadPosMtxImm(matrix,0);
GXSetCurrentMtx(0);
fn_80202238(matrix,matrix);
fn_80224DCC(matrix,0);
fn_80220F44(6,0);
GXSetCullMode(1);
mat=color;
GXSetChanMatColor(4,&mat);
amb=lbl_80368EE0;
fn_80222164(4,&amb);
GXSetBlendMode(4,0,0,0,0,0,2);
GXSetTevOrder(stage,255,255,4);
GXSetNumTexGens(stage,4);
GXClearVtxDesc();
GXSetVtxDesc(9,1);
GXSetVtxAttrFmt(0,9,1,4,0);
fn_802245D8(1,4,5,0);
fn_802246B8(1);
fn_80223E5C(0,0,1,7,0);
GXSetZMode(1,3,0);
flag=1;
t=((u8)(gMapBlendMode-1)<=(u32)flag);
if(!t) flag=0;
if((u8)flag) fn_800C15A8();
GXSetNumTevStages(fn_80069E74());
GXSetNumChans(fn_80069DB4());
fn_80224A68(M2C_FIELD(arg0,s32 *,0xa4),M2C_FIELD(arg0,s32 *,0xa8));
fn_80066D00(-1);
}

void fn_80044BE4(void *arg0) {
    f32 Map_GetTileCornerHeight(void *, s8, s8, u8);
    void *fn_800C45B8(s32, void *, s32);
    void fn_800C4588(void *);
    void *fn_800C4638(s32, void *, s32);
    void DCInvalidateRange(void *, u32);
    void DCFlushRange(void *, u32);
    void *fn_802248D8(void *, u32);
    s32 fn_802249A4(void);
    void GXBegin(s32, s32, s32);
    void DebugPrint(void *, ...);
    void *memcpy(void *, void *, s32);
    extern u8 lbl_8026A660[];
    extern u8 gBattleMap[];
    extern f32 lbl_80368F58;
    void *buf;
    void *disp;
    s32 y;
    s32 x;
    u8 *row;
    u8 *base;
    u8 *cell;
    s32 margin;
    u8 *above;
    u8 *mapRow;
    s32 tile;
    f32 dx;
    f32 dy;
    f32 a;
    s32 size;
    void *out;

    margin = M2C_FIELD(arg0, u8 *, 0x61);
    buf = fn_800C45B8(-0x4000, lbl_8026A660 + 0x245, 0);
    base = (u8 *)buf + (margin << 7);
    row = base;
    y = margin;
    while (y < M2C_FIELD(arg0, s16 *, 2) - margin) {
        x = margin;
        cell = row + margin;
        above = (u8 *)buf + (((y - 1) << 7) + margin);
        mapRow = gBattleMap + ((s8)y << 6);
        while (x < M2C_FIELD(arg0, s16 *, 0) - margin) {
            s32 off;
            *cell = 0;
            off = (s8)x + 0x100D;
            tile = mapRow[off];
            if (tile == 0xB) goto next_cell;
            if (tile < 0xB) {
                if (tile == 4) goto next_cell;
                if (tile >= 4) goto do_edge;
                if (tile == 0) goto next_cell;
            } else {
                if (tile >= 0x49) goto do_edge;
                if (tile >= 0x45) goto next_cell;
            }
        do_edge:
            *cell = 6;
            if (x == margin) {
                *cell |= 1;
            } else if (cell[-1] == 0) {
                *cell |= 1;
            } else {
                a = Map_GetTileCornerHeight(gBattleMap, x - 1, y, 1);
                dx = Map_GetTileCornerHeight(gBattleMap, x, y, 0) - a;
                a = Map_GetTileCornerHeight(gBattleMap, x - 1, y, 3);
                dy = Map_GetTileCornerHeight(gBattleMap, x, y, 2) - a;
                if (dx * dx + dy * dy >= lbl_80368F58) {
                    *cell |= 1;
                }
            }
            if (y == margin) {
                *cell |= 8;
            } else if (*above == 0) {
                *cell |= 8;
            } else {
                a = Map_GetTileCornerHeight(gBattleMap, x, y - 1, 2);
                dx = Map_GetTileCornerHeight(gBattleMap, x, y, 0) - a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y - 1, 3);
                dy = Map_GetTileCornerHeight(gBattleMap, x, y, 1) - a;
                if (dx * dx + dy * dy >= lbl_80368F58) {
                    *cell |= 8;
                }
            }
        next_cell:
            cell += 1;
            above += 1;
            x += 1;
        }
        row += 0x80;
        y += 1;
    }

    disp = fn_800C45B8(0xFFFC0000, lbl_8026A660 + 0x245, 0);
    DCInvalidateRange(disp, 0x40000);
    fn_802248D8(disp, 0x40000);
    y = margin;
    while (y < M2C_FIELD(arg0, s16 *, 2) - margin) {
        x = margin;
        cell = base + margin;
        while (x < M2C_FIELD(arg0, s16 *, 0) - margin) {
            tile = *cell;
            if ((u32)tile != 0) {
                if (tile == 0xE) {
                    goto case_e;
                }
                if (tile < 0xE) {
                    if (tile == 7) goto case_7;
                    if (tile >= 7) goto next2;
                    if (tile >= 6) goto tri;
                    goto next2;
                } else {
                    if (tile >= 0x10) goto next2;
                    goto case_f;
                }
            tri:
                GXBegin(0xB0, 0, 3);
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 1);
                *(volatile f32 *)0xCC008000 = (f32)(x + 1);
                *(volatile f32 *)0xCC008000 = (f32)y;
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 3);
                *(volatile f32 *)0xCC008000 = (f32)(x + 1);
                *(volatile f32 *)0xCC008000 = (f32)(y + 1);
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 2);
                *(volatile f32 *)0xCC008000 = (f32)x;
                *(volatile f32 *)0xCC008000 = (f32)(y + 1);
                *(volatile f32 *)0xCC008000 = a;
                goto next2;
            case_7:
                GXBegin(0xB0, 0, 4);
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 1);
                *(volatile f32 *)0xCC008000 = (f32)(x + 1);
                *(volatile f32 *)0xCC008000 = (f32)y;
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 3);
                *(volatile f32 *)0xCC008000 = (f32)(x + 1);
                *(volatile f32 *)0xCC008000 = (f32)(y + 1);
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 2);
                *(volatile f32 *)0xCC008000 = (f32)x;
                *(volatile f32 *)0xCC008000 = (f32)(y + 1);
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 0);
                *(volatile f32 *)0xCC008000 = (f32)x;
                *(volatile f32 *)0xCC008000 = (f32)y;
                *(volatile f32 *)0xCC008000 = a;
                goto next2;
            case_e:
                GXBegin(0xB0, 0, 4);
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 0);
                *(volatile f32 *)0xCC008000 = (f32)x;
                *(volatile f32 *)0xCC008000 = (f32)y;
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 1);
                *(volatile f32 *)0xCC008000 = (f32)(x + 1);
                *(volatile f32 *)0xCC008000 = (f32)y;
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 3);
                *(volatile f32 *)0xCC008000 = (f32)(x + 1);
                *(volatile f32 *)0xCC008000 = (f32)(y + 1);
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 2);
                *(volatile f32 *)0xCC008000 = (f32)x;
                *(volatile f32 *)0xCC008000 = (f32)(y + 1);
                *(volatile f32 *)0xCC008000 = a;
                goto next2;
            case_f:
                GXBegin(0xB0, 0, 5);
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 0);
                *(volatile f32 *)0xCC008000 = (f32)x;
                *(volatile f32 *)0xCC008000 = (f32)y;
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 1);
                *(volatile f32 *)0xCC008000 = (f32)(x + 1);
                *(volatile f32 *)0xCC008000 = (f32)y;
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 3);
                *(volatile f32 *)0xCC008000 = (f32)(x + 1);
                *(volatile f32 *)0xCC008000 = (f32)(y + 1);
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 2);
                *(volatile f32 *)0xCC008000 = (f32)x;
                *(volatile f32 *)0xCC008000 = (f32)(y + 1);
                *(volatile f32 *)0xCC008000 = a;
                a = Map_GetTileCornerHeight(gBattleMap, x, y, 0);
                *(volatile f32 *)0xCC008000 = (f32)x;
                *(volatile f32 *)0xCC008000 = (f32)y;
                *(volatile f32 *)0xCC008000 = a;
            }
        next2:
            cell += 1;
            x += 1;
        }
        base += 0x80;
        y += 1;
    }

    size = fn_802249A4();
    out = M2C_FIELD(arg0, void **, 0xA4);
    if (out != 0) {
        fn_800C4588(out);
        M2C_FIELD(arg0, void **, 0xA4) = 0;
    }
    M2C_FIELD(arg0, void **, 0xA4) = fn_800C4638(size, lbl_8026A660 + 0x245, 0);
    M2C_FIELD(arg0, s32 *, 0xA8) = size;
    DCFlushRange(M2C_FIELD(arg0, void **, 0xA4), size);
    memcpy(M2C_FIELD(arg0, void **, 0xA4), disp, size);
    DCFlushRange(M2C_FIELD(arg0, void **, 0xA4), size);
    fn_800C4588(disp);
    fn_800C4588(buf);
    DebugPrint(lbl_8026A660 + 0x2BF, M2C_FIELD(arg0, s32 *, 0xA8));
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma opt_propagation off
void fn_80045604(s32 unused) {
    void *fn_8000D2BC(void *);
    u32 fn_8000D354(void *);
    extern u8 lbl_8026A660[];
    extern u8 lbl_802CA518[];

    typedef struct { u8 pad[0x408E]; u16 flags; } FlagTile;

    s16 *data;
    s16 count;
    register s32 n;
    register u8 *p;
    s32 i;
    s32 x;
    s32 y;
    u8 v;
    FlagTile *fp;
    u32 pairs;
    u8 *base;

    if (fn_8000D354(lbl_8026A660 + 0x2D3) != 0) {
        data = fn_8000D2BC(lbl_8026A660 + 0x2D3);
        count = *data;
        p = (u8 *)data + 2;
        i = 0;
        n = count;
        {
            for (i = 0; i < n; i++) {
                x = (s8)p[0];
                y = (s8)p[1];
                v = p[2];
                p += 3;
                ((FlagTile *)(lbl_802CA518 + ((x + (y << 6)) * 2)))->flags = v;
            }
        }
    }

    if (fn_8000D354(lbl_8026A660 + 0x2DB) != 0) {
        data = fn_8000D2BC(lbl_8026A660 + 0x2DB);
        count = *data;
        p = (u8 *)data + 2;
        base = lbl_802CA518;
        n = count;
        for (i = 0; i < n; i++, p += 3) {
            x = (s8)p[0]; y = (s8)p[1]; v = p[2];
            fp = (FlagTile *)(base + ((x + (y << 6)) * 2));
            fp->flags = (fp->flags & ~0x0F00) | (v << 8);
        }
    }

    if (fn_8000D354(lbl_8026A660 + 0x2E5) != 0) {
        data = fn_8000D2BC(lbl_8026A660 + 0x2E5);
        count = *data;
        p = (u8 *)data + 2;
        i = 0;
        n = count;
        {
            for (i = 0; i < n; i++) {
                x = (s8)p[0];
                y = (s8)p[1];
                v = p[2];
                p += 3;
                ((FlagTile *)(lbl_802CA518 + ((x + (y << 6)) * 2)))->flags =
                    (u16)(v + (((~v) << 4) & 0xF0));
            }
        }
    }
}
#pragma pop
void fn_80045B9C(void *arg0) {
    M2C_UNK fn_80067480();
    M2C_UNK fn_800675C8(M2C_UNK);
    void *Fog_GetColor();
    extern u8 lbl_8036728C;
    extern u8 lbl_8036728D;
    extern u8 lbl_8036728E;
    extern M2C_UNK lbl_80367290;
    extern f32 lbl_80368EF4;
    void *temp_r31;

    fn_800675C8(0);
    temp_r31 = Fog_GetColor();
    fn_80067480();
    M2C_FIELD(temp_r31, u8 *, 0) = (u8) lbl_8036728C;
    M2C_FIELD(temp_r31, f32 *, 4) = (f32) (5.0f * ((f32) (s8) lbl_8036728D * M2C_FIELD(arg0, f32 *, 0x6C)));
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) (5.0f * ((f32) (s8) lbl_8036728E * M2C_FIELD(arg0, f32 *, 0x6C)));
    M2C_FIELD(temp_r31, u8 *, 1) = (u8) M2C_FIELD(&lbl_80367290, u8 *, 0);
    M2C_FIELD(temp_r31, u8 *, 2) = (u8) M2C_FIELD(&lbl_80367290, u8 *, 1);
    M2C_FIELD(temp_r31, u8 *, 3) = (u8) M2C_FIELD(&lbl_80367290, u8 *, 2);
}

void fn_80045C68(s32 arg0)
{
    void fn_80067460(s32);
    void fn_80066F64(void);
    void *Light_GetChannel(s32);
    void Light_CopyChannel(void *, void *);
    void fn_8006720C(void *);
    extern u8 lbl_80367294;
    extern u8 lbl_80367295;
    extern u8 lbl_8036729C;
    extern u8 lbl_80367298;
    void *light;

    fn_80067460(0);
    fn_80066F64();
    light = Light_GetChannel(0);
    *(f32 *)((u8 *)light + 0x24) = (f32)(s8)lbl_80367294;
    *(f32 *)((u8 *)light + 0x28) = (f32)(s8)lbl_80367295;
    ((u8 *)light)[0] = (&lbl_8036729C)[0];
    ((u8 *)light)[1] = (&lbl_8036729C)[1];
    ((u8 *)light)[2] = (&lbl_8036729C)[2];
    ((u8 *)light)[4] = (&lbl_80367298)[0];
    ((u8 *)light)[5] = (&lbl_80367298)[1];
    ((u8 *)light)[6] = (&lbl_80367298)[2];
    light = Light_GetChannel(2);
    Light_CopyChannel(Light_GetChannel(0), light);
    fn_8006720C((u8 *)arg0 + 0x70);
}

#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
void fn_80045D50(void *arg0, void *arg1) {
    void *Hash_Lookup(void *);
    f32 fn_8001B84C(u8 **);
    void fn_8004781C(void *);
    void fn_8005FEE8(void *, f32);
    void *fn_80060638(void *);
    void *fn_80060664(void *);
    void GActor_Finalize(void *);
    void fn_80061824(void *);
    u8 fn_80068CFC(void *, void *);
    void *Heap_AllocRaw(s32);
    void PSMTXConcat(void *, void *, void *);
    void PSMTXRotRad(void *, s32, f32);
    void PSMTXTrans(void *, f32, f32, f32);
    void PSMTXScale(void *, f32, f32, f32);
    extern u8 lbl_8026A660[];
    extern f64 lbl_80368EF8;
    extern f32 lbl_80368EE4;
    extern f32 lbl_80368EE8;
    extern f32 lbl_80368EEC;
    extern f32 lbl_80368EF0;
    extern f32 lbl_80368EF4;

    u8 sp9C[0x30];
    u8 sp6C[0x30];
    u8 sp3C[0x30];
    u8 spC[0x30];
    u8 *sp8;
    f32 f30v;
    f32 f29v;
    f32 f28v;
    f32 f27v, f26v, f25v, f24v;
    u8 *sub;
    s32 r29v;
    s32 i;
    u8 *ent;
    s32 r26v;
    void *self;
    u8 *base;
    u8 *other;
    u8 *p;
    u8 *t6;
    u8 *t5;
    u8 *t4;
    s32 a, h;
    s32 count;
    s32 m;
    s32 ctr;
    s32 idx;
    s32 tmp;
    void *ref;
    f32 scale;
    f32 temp_f0;

    self = arg0;
    sp8 = Hash_Lookup(arg1);
    *(void **)((u8 *)self + 0x14) = Heap_AllocRaw(*(s16 *)((u8 *)self + 6) * 0xB4);
    i = 0;
    ent = *(u8 **)((u8 *)self + 0x14);
    f28v = lbl_80368EE4;
    f29v = lbl_80368EEC;
    f30v = lbl_80368EF4;
    goto loop1_test;
loop1_body:
    sub = ent + 0x14;
    fn_80061824(sub);
    p = sp8;
    sp8 = p + 1;
    ent[0] = *p;
    p = sp8;
    sp8 = p + 1;
    ent[1] = *p;
    r26v = *sp8++;
    r29v = *sp8++;
    ent[4] = *sp8++;
    p = sp8;
    sp8 = p + 1;
    ent[5] = *p;
    p = sp8;
    sp8 = p + 1;
    ent[6] = *p;
    p = sp8;
    sp8 = p + 1;
    ent[7] = *p;
    *(f32 *)(ent + 0xC) = fn_8001B84C(&sp8);
    r29v *= 0xC0;
    *(void **)(ent + 0x10) = (u8 *)*(void **)((u8 *)self + 0x10) + r29v;
    *(f32 *)(ent + 8) = (f32)(0x168 - ((s32)(r26v * 0x168) >> 8));
    ent[2] = 0;
    f25v = -(*(f32 *)(ent + 0xC) + f28v);
    f27v = *(f32 *)(ent + 8) + f28v;
    f24v = (f32)(s8)ent[0] + f28v;
    f26v = (f32)(s8)ent[1] + f28v;
    if (*(u8 *)((u8 *)self + 0x68) == 1) {
        f24v -= (f32)(*(s16 *)self / 2);
        f26v -= (f32)(*(s16 *)((u8 *)self + 2) / 2);
    }
    PSMTXTrans(sp9C, lbl_80368EE8, lbl_80368EE4, lbl_80368EE8);
    PSMTXRotRad(sp6C, 0x59, f29v * f27v);
    PSMTXConcat(sp6C, sp9C, sp6C);
    PSMTXTrans(sp9C, lbl_80368EF0, lbl_80368EE4, lbl_80368EF0);
    PSMTXConcat(sp9C, sp6C, spC);
    scale = *(f32 *)((u8 *)self + 0x6C);
    PSMTXScale(sp3C, scale, scale, scale);
    PSMTXConcat(sp3C, spC, spC);
    temp_f0 = *(f32 *)((u8 *)self + 0x6C);
    PSMTXTrans(sp9C, f30v * (f24v * temp_f0), f30v * (f25v * temp_f0), f30v * (f26v * temp_f0));
    PSMTXConcat(sp9C, spC, spC);
    PSMTXConcat((u8 *)self + 0x70, spC, ent + 0x24);
    *(void **)(sub + 4) = (u8 *)*(void **)((u8 *)self + 0x10) + r29v + 4;
    GActor_Finalize(sub);
    r26v = *(s32 *)(*(u8 **)(ent + 0x10) + 0xBC);
    if (*(u8 *)((u8 *)self + 0x68) == 1) {
        if (fn_80068CFC(fn_80060638(sub), lbl_8026A660 + 0x2F0) != 0) {
            sub[0x87] = 0;
        } else {
            sub[0x87] = 3;
        }
    } else {
        if (r26v & 0x2000) {
            *(u32 *)sub |= 0x200000;
        }
        if (r26v & 0x2020) {
            sub[0x87] = 2;
        } else {
            sub[0x87] = 1;
        }
    }
    if (r26v & 0x800) {
        sub[0x87] = 2;
    }
    if (r26v & 0x40) {
        *(u32 *)sub |= 0x40000 | 0x400;
    }
    if (r26v & 0x40000) {
        *(u32 *)sub |= 0x400;
    }
    if (r26v & 0x20000) {
        ent[2] |= 1;
    }
    if (((s32)((s8)ent[6] - (s8)ent[4]) >= 2) || ((s32)((s8)ent[7] - (s8)ent[5]) >= 2)) {
        u8 *t = *(u8 **)(ent + 0x10);
        *(u32 *)(t + 0xBC) |= 8;
    }
    i += 1;
    ent += 0xB4;
loop1_test:
    if (i < *(s16 *)((u8 *)self + 6)) {
        goto loop1_body;
    }

    {
    u8 *entry2;
    s32 groupIndex;
    s32 frameCount;
    r29v = 0;
    r26v = 0;
    groupIndex = r29v;
    sub = (u8 *)r29v;
    goto loop2_test;
loop2_body:
    base = *(u8 **)((u8 *)self + 0x14);
    entry2 = base + (s32)sub;
    if (*(u32 *)(*(u8 **)(entry2 + 0x10) + 0xBC) & 0x400) {
        if (r26v == 0) {
            m = r29v + 1;
            idx = m * 0xB4;
            {
                for (; m < count; m++) {
                    other = base + idx;
                    if (*(void **)(entry2 + 0x10) != *(void **)(other + 0x10)
                        || (s8)entry2[0] != (s8)other[0]
                        || (s8)entry2[1] != (s8)other[1]) {
                        break;
                    }
                    r26v += 1;
                    idx += 0xB4;
                }
            }
            groupIndex = 0;
        }
        if (r26v > 0) {
            u8 *s2 = entry2 + 0x14;
            ref = fn_80060664(s2);
            frameCount = *(s32 *)((u8 *)ref + 0x18);
            tmp = r26v + 1;
            fn_8005FEE8(s2, (f32)((groupIndex * frameCount) / tmp));
            groupIndex += 1;
            if (groupIndex > r26v) {
                r26v = 0;
            }
        }
    }
    sub += 0xB4;
    r29v += 1;
loop2_test:
    count = *(s16 *)((u8 *)self + 6);
    if (r29v < count) {
        goto loop2_body;
    }

    if (!(*(u32 *)((u8 *)self + 0x64) & 0x20000000)) {
        fn_8004781C(self);
        *(u32 *)((u8 *)self + 0x64) |= 0x20000000;
    }
}}
#pragma pop
#pragma global_optimizer on

void fn_800462FC(void *arg0, void *arg1, void *arg2) {
    void *fn_80060638(void *);
    void fn_80068558(void *, void *, void *);
    u8 *ptr;
    s32 i;

    i = 0;
    ptr = *(u8 **)((u8 *)arg0 + 0x10);
    while (i < *(s16 *)((u8 *)arg0 + 4)) {
        fn_80068558(fn_80060638(ptr + 4), arg1, arg2);
        i += 1;
        ptr += 0xC0;
    }
}

void *fn_80046360(void *arg0, s32 arg1, s32 arg2, u32 arg3, u32 arg4, s32 arg5) {
    void *fn_80060638(void *);
    u8 fn_800688D4(void *, s32, s32, s32);
    void *result;
    u8 *ptr;
    s32 i;
    u32 flags;
    void *node;

    result = NULL;
    i = 0;
    ptr = *(u8 **)((u8 *)arg0 + 0x10);
    while (i < *(s16 *)((u8 *)arg0 + 4)) {
        flags = *(u32 *)(ptr + 0xBC);
        node = ptr + 4;
        if (!(flags & arg4) && arg3 == (arg3 & flags)) {
            if (fn_800688D4(fn_80060638(node), arg1, arg2, arg5) != 0) {
                result = ptr;
            }
        }
        i += 1;
        ptr += 0xC0;
    }
    return result;
}

void Map_CollectLinkedObjs(void *arg0, void *arg1, void *arg2) {
    M2C_UNK fn_80046424(void *, void *, void *, M2C_UNK);
    fn_80046424(arg0, arg1, arg2, 0);
}

static inline void *Map_FindObjAt_80046424(void *arg0, s32 x, s32 y, u32 mask, s32 excl) {
    s32 i;
    for (i = *(s16 *)((u8 *)arg0 + 6) - 1; i >= 0; i--) {
        u8 *base = *(u8 **)((u8 *)arg0 + 0x14);
        u8 *entry = base + i * 0xB4;
        u32 flags = *(u32 *)((u8 *)*(void **)(entry + 0x10) + 0xBC);
        if (!(flags & excl)) {
            if (mask == 0 || mask == (mask & flags)) {
                u8 ok;
                if (x >= (s8)*(u8 *)(entry + 4) && x <= (s8)*(u8 *)(entry + 6) &&
                    y >= (s8)*(u8 *)(entry + 5) && y <= (s8)*(u8 *)(entry + 7)) {
                    ok = 1;
                } else {
                    ok = 0;
                }
                if (ok != 0) {
                    return base + i * 0xB4;
                }
            }
        }
    }
    return NULL;
}

static inline s32 fn_80046424_step(void *arg0, void *arg1, void **arg2, s32 arg3) {
    void *Map_FindObjAt(void *, s32, s32, u32, s32);
    void *fn_80049E1C(void *);
    s32 fn_80046424(void *, void *, void **, s32);
    u32 mask;
    s32 i;

    if (arg1 == NULL) {
        return arg3;
    }
    for (i = 0; i < arg3; i++) {
        if (arg2[i] == arg1) {
            return arg3;
        }
    }
    arg2[arg3++] = arg1;
    mask = *(u32 *)((u8 *)fn_80049E1C(arg1) + 0xBC) | 0x200000;
    arg3 = fn_80046424(arg0, Map_FindObjAt(arg0, (s8)*(u8 *)((u8 *)arg1 + 4) - 1, ((s8)*(u8 *)((u8 *)arg1 + 5) + (s8)*(u8 *)((u8 *)arg1 + 7)) / 2, mask, 0x10), arg2, arg3);
    arg3 = fn_80046424(arg0, Map_FindObjAt(arg0, (s8)*(u8 *)((u8 *)arg1 + 6) + 1, ((s8)*(u8 *)((u8 *)arg1 + 5) + (s8)*(u8 *)((u8 *)arg1 + 7)) / 2, mask, 0x10), arg2, arg3);
    arg3 = fn_80046424(arg0, Map_FindObjAt(arg0, ((s8)*(u8 *)((u8 *)arg1 + 4) + (s8)*(u8 *)((u8 *)arg1 + 6)) / 2, (s8)*(u8 *)((u8 *)arg1 + 5) - 1, mask, 0x10), arg2, arg3);
    arg3 = fn_80046424(arg0, Map_FindObjAt(arg0, ((s8)*(u8 *)((u8 *)arg1 + 4) + (s8)*(u8 *)((u8 *)arg1 + 6)) / 2, (s8)*(u8 *)((u8 *)arg1 + 7) + 1, mask, 0x10), arg2, arg3);
    return arg3;
}

s32 fn_80046424(void *arg0, void *arg1, void **arg2, s32 arg3) {
    u32 mask;
    s32 i;

    if (arg1 == NULL) {
        return arg3;
    }
    for (i = 0; i < arg3; i++) {
        if (arg2[i] == arg1) {
            return arg3;
        }
    }
    arg2[arg3++] = arg1;
    mask = *(u32 *)((u8 *)*(void **)((u8 *)arg1 + 0x10) + 0xBC) | 0x200000;
    arg3 = fn_80046424_step(arg0, Map_FindObjAt_80046424(arg0, (s8)*(u8 *)((u8 *)arg1 + 4) - 1, ((s8)*(u8 *)((u8 *)arg1 + 5) + (s8)*(u8 *)((u8 *)arg1 + 7)) / 2, mask, 0x10), arg2, arg3);
    arg3 = fn_80046424_step(arg0, Map_FindObjAt_80046424(arg0, (s8)*(u8 *)((u8 *)arg1 + 6) + 1, ((s8)*(u8 *)((u8 *)arg1 + 5) + (s8)*(u8 *)((u8 *)arg1 + 7)) / 2, mask, 0x10), arg2, arg3);
    arg3 = fn_80046424_step(arg0, Map_FindObjAt_80046424(arg0, ((s8)*(u8 *)((u8 *)arg1 + 4) + (s8)*(u8 *)((u8 *)arg1 + 6)) / 2, (s8)*(u8 *)((u8 *)arg1 + 5) - 1, mask, 0x10), arg2, arg3);
    arg3 = fn_80046424_step(arg0, Map_FindObjAt_80046424(arg0, ((s8)*(u8 *)((u8 *)arg1 + 4) + (s8)*(u8 *)((u8 *)arg1 + 6)) / 2, (s8)*(u8 *)((u8 *)arg1 + 7) + 1, mask, 0x10), arg2, arg3);
    return arg3;
}

void *fn_80046EB8(void *arg0,void *arg1) { u8 *base; s32 i; if(arg1==0)return 0; for(i=*(s16*)((u8*)arg0+6)-1;i>=0;i--) {base=*(u8**)((u8*)arg0+0x14); if(arg1==*(void**)(base+i*0xB4+0x10))return base+i*0xB4;} return 0; }

static inline u8 MapObj_Contains(u8 *entry, s32 x, s32 y) {
    if (x >= *(s8 *)(entry + 4) &&
        x <= *(s8 *)(entry + 6) &&
        y >= *(s8 *)(entry + 5) &&
        y <= *(s8 *)(entry + 7)) {
        return 1;
    }
    return 0;
}

static inline void *Map_FindObjAt_Inline(void *arg0, s32 n, s32 x, s32 y, u32 arg3, u32 arg4) {
    typedef struct { u8 pad[0xB4]; } MapObjEntry;
    u8 *entry;
    MapObjEntry *base;
    s32 i;
    for (i = n; i >= 0; i--) {
        base = *(MapObjEntry **)((u8 *)arg0 + 0x14);
        entry = (u8 *)&base[i];
        {
            u32 flags = *(u32 *)((u8 *)*(void **)(entry + 0x10) + 0xBC);
            if (!(flags & arg4)) {
                if (arg3 == 0 || (arg3 & flags) == arg3) {
                    if (MapObj_Contains(entry, x, y)) {
                        return &base[i];
                    }
                }
            }
        }
    }
    return 0;
}

#pragma push
#pragma opt_common_subs off
void *Map_FindObjNear(void *arg0, s32 arg1, s32 arg2, u32 arg3, u32 arg4) {
    void *found;
    s32 n;
    s32 direction;
    s32 dx;
    s32 dy;
    s32 dir;

    n = *(s16 *)((u8 *)arg0 + 6) - 1;
    found = Map_FindObjAt_Inline(arg0, n, arg1, arg2, arg3, arg4);
    if (found != 0) {
        return found;
    }

    for (direction = 0; direction < 4; direction++) {
        switch (direction) {
        case 0: dir = 1; break;
        case 1: dir = 2; break;
        case 2: dir = 4; break;
        case 3: dir = 8; break;
        default: dir = 0x10; break;
        }
        dir = (u8)dir;
        switch (dir) {
        case 1: dx = -1; break;
        case 2: dx = 1; break;
        default: dx = 0; break;
        }
        switch (dir) {
        case 4: dy = 1; break;
        case 8: dy = -1; break;
        default: dy = 0; break;
        }

        found = Map_FindObjAt_Inline(arg0, n, arg1 + dx, arg2 + dy, arg3, arg4);
        if (found != 0) {
            return found;
        }
    }

    return 0;
}
#pragma pop
s32 Map_FindObjAtXY(void *arg0, s32 arg1, s32 arg2)
{
  s32 i;
  s32 offset;
  u8 *entry;
  s32 base;
  s32 count;
  u8 ok;
  count = *((s16 *) (((u8 *) arg0) + 0x6));
  for (i = count - 1, offset = i * 0xB4; i >= 0; offset -= 0xB4, i--)
  {
    base = *((s32 *) (((u8 *) arg0) + 0x14));
    entry = ((u8 *) base) + offset;
    {
      s32 flags = *((s32 *) (((u8 *) (*((s32 *) (entry + 0x10)))) + 0xBC));
      if (!(flags & 0x90))
      {
        if ((((arg1 >= (*((s8 *) (entry + 0x4)))) && (arg1 <= (*((s8 *) (entry + 0x6))))) && (arg2 >= (*((s8 *) (entry + 0x5))))) && (arg2 <= (*((s8 *) (entry + 0x7)))))
        {
          ok = 1;
        }
        else
        {
          ok = 0;
        }
        if (ok != 0)
        {
          return base + (i * 0xB4);
        }
      }
    }
  }

  return 0;
}

s32 Map_FindObjAt(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    u8 *entry;
    s32 base;
    s32 i;
    s32 count;
    u8 ok;

    count = *(s16 *)((u8 *)arg0 + 0x6);
    for (i = count - 1; i >= 0; i--) {
        base = *(s32 *)((u8 *)arg0 + 0x14);
        entry = (u8 *)base + i * 0xB4;
        {
            s32 flags = *(s32 *)((u8 *)*(s32 *)(entry + 0x10) + 0xBC);
            if (!(flags & arg4)) {
                if (arg3 == 0 || arg3 == (u32)(arg3 & flags)) {
                    if (arg1 >= *(s8 *)(entry + 0x4) && arg1 <= *(s8 *)(entry + 0x6) &&
                        arg2 >= *(s8 *)(entry + 0x5) && arg2 <= *(s8 *)(entry + 0x7)) {
                        ok = 1;
                    } else {
                        ok = 0;
                    }
                    if (ok != 0) {
                        return base + i * 0xB4;
                    }
                }
            }
        }
    }
    return 0;
}

#pragma global_optimizer off
/* Update map-entry world matrices; alternate half-ranges each frame, then transform visible entries. */
void Map_UpdateTransforms(void *arg0) {
void Map_PrepareEntryRange(void *, s32, s32);
void fn_80060060(void *);
void fn_800609DC(void *);
void fn_8006785C(s32, void *, void *);
void fn_8006CAD4(void *);
void PSMTXConcat(void *, void *, void *);
void PSMTXRotRad(void *, s32, f32);
void PSMTXTrans(void *, f32, f32, f32);
void PSMTXScale(void *, f32, f32, f32);
void fn_80048518(void);
extern void *gMap;
extern u8 sMapUpdateInited;
extern s32 sMapUpdateCounter;
extern f64 lbl_80368EF8;
extern f32 lbl_80368EE4;
extern f32 lbl_80368EE8;
extern f32 lbl_80368EEC;
extern f32 lbl_80368EF0;
extern f32 lbl_80368EF4;
    u8 sp158[0x30];
    u8 sp128[0x30];
    u8 spF8[0x30];
    u8 spC8[0x30];
    u8 sp98[0x30];
    u8 sp68[0x30];
    u8 sp38[0x30];
    u8 sp8[0x30];
    u32 mask;
    u8 *ent;
    s32 i;
    u8 *sub;
    void *self;
    u8 flags;
    f32 f31v, f30v, f29v, f28v;
    f32 t30;
    s16 t6;
    s32 a, b;
    f32 scale;
    f32 temp_f0;
    s16 h;

    self = arg0;
    if (*(u32 *)((u8 *)self + 0x64) & 0x40000000) {
        if (*(u32 *)((u8 *)self + 0xC) != 0) {
            if ((s8)sMapUpdateInited == 0) {
                sMapUpdateCounter = 0;
                sMapUpdateInited = 1;
            }
            if ((sMapUpdateCounter & 1) != 0) {
                t6 = *(s16 *)((u8 *)self + 6);
                a = 0;
                b = (s32)(((u32)t6 >> 31) + t6) >> 1;
            } else {
                b = *(s16 *)((u8 *)self + 6);
                a = (s32)(((u32)b >> 31) + b) >> 1;
            }
            sMapUpdateCounter = sMapUpdateCounter + 1;
            Map_PrepareEntryRange(self, a, b);
        }
        if ((*(u32 *)((u8 *)self + 0x64) & 0x80000000) == 0 && (*(u32 *)((u8 *)self + 0x64) & 0x40000000) != 0) {
            ent = *(u8 **)((u8 *)self + 0x14);
            i = 0;
            goto loop1_test;
        loop1_body:
            sub = ent + 0x14;
            flags = ent[2];
            mask = *(u32 *)(*(u8 **)(ent + 0x10) + 0xBC);
            if ((mask & 1) == 0 && (flags & 1) == 0) {
                if ((mask & 0x400) != 0) {
                    fn_80060060(sub);
                }
                if ((flags & 0x80) == 0) {
                    if ((mask & 0x80) != 0) {
                        f28v = (f32)(s8)ent[0] + lbl_80368EE4;
                        f29v = -(*(f32 *)(ent + 0xC) + *(f32 *)(*(u8 **)((u8 *)gMap + 0x30) + 0x48));
                        t30 = (f32)(s8)ent[1];
                        f31v = *(f32 *)(ent + 8) + lbl_80368EE4;
                        f30v = t30 + lbl_80368EE4;
                        if (*(u8 *)((u8 *)self + 0x68) == 1) {
                            a = *(s16 *)self;
                            h = *(s16 *)((u8 *)self + 2);
                            a = ((u32)a >> 31) + a;
                            a >>= 1;
                            f28v -= (f32)a;
                            f30v -= (f32)((s32)(((u32)h >> 31) + h) >> 1);
                        }
                        PSMTXTrans(sp158, lbl_80368EE8, lbl_80368EE4, lbl_80368EE8);
                        PSMTXRotRad(sp128, 0x59, lbl_80368EEC * f31v);
                        PSMTXConcat(sp128, sp158, sp128);
                        PSMTXTrans(sp158, lbl_80368EF0, lbl_80368EE4, lbl_80368EF0);
                        PSMTXConcat(sp158, sp128, spC8);
                        scale = *(f32 *)((u8 *)self + 0x6C);
                        PSMTXScale(spF8, scale, scale, scale);
                        PSMTXConcat(spF8, spC8, spC8);
                        temp_f0 = *(f32 *)((u8 *)self + 0x6C);
                        PSMTXTrans(sp158, lbl_80368EF4 * (f28v * temp_f0), lbl_80368EF4 * (f29v * temp_f0), lbl_80368EF4 * (f30v * temp_f0));
                        PSMTXConcat(sp158, spC8, spC8);
                        PSMTXConcat((u8 *)self + 0x70, spC8, ent + 0x24);
                    }
                    if ((mask & 0x10000) != 0) {
                        fn_8006785C(2, fn_80048518, ent);
                    }
                    fn_800609DC(sub);
                    fn_8006CAD4(sub);
                }
            }
            i += 1;
            ent += 0xB4;
        loop1_test:
            if (i < *(s16 *)((u8 *)self + 6)) {
                goto loop1_body;
            }
        }
        if ((*(u32 *)((u8 *)self + 0x64) & 0x80000000) == 0 && (*(u32 *)((u8 *)self + 0x64) & 0x40000000) != 0) {
            u32 m;
            s32 n;
            ent = *(u8 **)((u8 *)self + 0x14);
            n = 0;
            goto loop2_test;
        loop2_body:
            sub = ent + 0x14;
            flags = ent[2];
            m = *(u32 *)(*(u8 **)(ent + 0x10) + 0xBC);
            if ((u32)(m & 1) == 1 && (flags & 1) == 0) {
                if ((m & 0x400) != 0) {
                    fn_80060060(sub);
                }
                if ((flags & 0x80) == 0) {
                    if ((m & 0x80) != 0) {
                        f31v = (f32)(s8)ent[0] + lbl_80368EE4;
                        f30v = -(*(f32 *)(ent + 0xC) + *(f32 *)(*(u8 **)((u8 *)gMap + 0x30) + 0x48));
                        t30 = (f32)(s8)ent[1];
                        f28v = *(f32 *)(ent + 8) + lbl_80368EE4;
                        f29v = t30 + lbl_80368EE4;
                        if (*(u8 *)((u8 *)self + 0x68) == 1) {
                            a = *(s16 *)self;
                            h = *(s16 *)((u8 *)self + 2);
                            a = ((u32)a >> 31) + a;
                            a >>= 1;
                            f31v -= (f32)a;
                            f29v -= (f32)((s32)(((u32)h >> 31) + h) >> 1);
                        }
                        PSMTXTrans(sp98, lbl_80368EE8, lbl_80368EE4, lbl_80368EE8);
                        PSMTXRotRad(sp68, 0x59, lbl_80368EEC * f28v);
                        PSMTXConcat(sp68, sp98, sp68);
                        PSMTXTrans(sp98, lbl_80368EF0, lbl_80368EE4, lbl_80368EF0);
                        PSMTXConcat(sp98, sp68, sp8);
                        scale = *(f32 *)((u8 *)self + 0x6C);
                        PSMTXScale(sp38, scale, scale, scale);
                        PSMTXConcat(sp38, sp8, sp8);
                        temp_f0 = *(f32 *)((u8 *)self + 0x6C);
                        PSMTXTrans(sp98, lbl_80368EF4 * (f31v * temp_f0), lbl_80368EF4 * (f30v * temp_f0), lbl_80368EF4 * (f29v * temp_f0));
                        PSMTXConcat(sp98, sp8, sp8);
                        PSMTXConcat((u8 *)self + 0x70, sp8, ent + 0x24);
                    }
                    if ((m & 0x10000) != 0) {
                        fn_8006785C(2, fn_80048518, ent);
                    }
                    fn_800609DC(sub);
                    fn_8006CAD4(sub);
                }
            }
            n += 1;
            ent += 0xB4;
        loop2_test:
            if (n < *(s16 *)((u8 *)self + 6)) {
                goto loop2_body;
            }
        }
    }
}
#pragma global_optimizer on
