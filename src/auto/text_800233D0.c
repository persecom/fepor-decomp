/* Functions from 0x8001EEEC to 0x80028864, found by decomp-toolkit. */
#include "common.h"
static inline void UiCtx_Put0(void **p, void *v) { *p = v; }
#pragma cplusplus on
struct MenuSelection24768 { u8 pad[0x40]; u8 index; };
struct MenuController24768 { u32 pad;
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
virtual void v11(void *) = 0;
virtual void v12(void *) = 0;
virtual void v13(void *) = 0;
virtual u32 v14(void *) = 0;
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
virtual void v25() = 0;
virtual void v26() = 0;
virtual void * v27() = 0;
virtual void * v28() = 0;
};
struct MenuItem24768 {
virtual void v0() = 0;
virtual void v1() = 0;
virtual void * v2() = 0;
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
virtual void v15(void *,void *) = 0;
virtual void * v16(void *) = 0;
};
#pragma cplusplus off

typedef struct {
    s32 field_0x0;
    s32 field_0x4;
    s32 field_0x8;
    s32 field_0xC;
    s32 field_0x10;
    s32 field_0x14;
    s32 field_0x18;
    s32 field_0x1C;
    s32 field_0x20;
    s32 field_0x24;
    s32 field_0x28;
    s32 field_0x2C;
    s32 field_0x30;
    s32 field_0x34;
    s32 field_0x38;
} Actor;

#pragma use_lmw_stmw on
#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

#pragma fp_contract off
#pragma global_optimizer off

#pragma global_optimizer off

#pragma global_optimizer reset

#pragma global_optimizer reset

u8 *fn_8001FC7C(void *arg0, u8 *arg1, s8 arg2, s8 arg3);

extern u8 lbl_80366DB8[8];
s32 Rand_Range(s32);

#pragma optimization_level 2
#pragma scheduling on

#pragma scheduling reset
#pragma optimization_level reset

extern u16 jumptable_80284514[12];

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset
#pragma fp_contract on

typedef struct {
    s32 width;
    s32 height;
    u8 pad8[5];
    u8 unitMap[0x6100];
    u8 pad1;
    s16 costMap[0x4040];
    s8 fogMap[64];
} Map_802CA518;
extern Map_802CA518 gBattleMap;

f32 fn_800233D0(void *arg0, s8 arg1, s8 arg2, u8 arg3) {
    struct MapHeight {
        u8 pad[0x142D4];
        s16 arr[0x4000];
        f32 scale;
    };
    struct MapHeight *m = (struct MapHeight *)arg0;
    return (f32)m->arr[((arg1 + (arg2 << 6)) << 2) + arg3] * m->scale;
}

#pragma fp_contract on
f32 Map_SampleHeightRaw(void *arg0, f32 x, f32 y) {
    void fn_80203290(f32 *, f32 *, f32 *);
    extern u8 lbl_80268CE8[];
    extern f32 lbl_80368D88;
    f32 sp5C[3];
    f32 sp50[3];
    f32 sp44[3];
    f32 sp38[3];
    f32 sp34;
    f32 sp2C;
    f32 sp30;
    f32 sp28;
    f32 sp20;
    f32 sp24;
    f32 sp1C;
    f32 sp14;
    f32 sp18;
    f32 sp10;
    f32 sp8;
    f32 spC;
    u8 *tbl;
    s32 iy_i;
    s32 ix_i;
    s32 six;
    s32 siy;
    f32 scale;
    f32 h;
    u8 *cell;
    u8 *base2;
    f32 t;
    f32 f0;
    f32 f1;
    f32 nz;

    tbl = lbl_80268CE8;
    ix_i = (s32)x;
    iy_i = (s32)y;
    six = (s8)ix_i;
    siy = (s8)iy_i;
    if (((y + (x - (f32)six)) - (f32)siy) > lbl_80368D88) {
        u32 w24, w1c, w20, w30, w28, w2c;
        s16 ha, hb, hc;
        base2 = (u8 *)arg0 + 0x20000;
        cell = (u8 *)arg0 + 0x10000 + ((six + (siy << 6)) * 8);
        w24 = *(u32 *)(tbl + 0x24);
        w1c = *(u32 *)(tbl + 0x1C);
        ha = *(s16 *)(cell + 0x42DA);
        hb = *(s16 *)(cell + 0x42D8);
        scale = *(f32 *)(base2 - 0x3D2C);
        w20 = *(u32 *)(tbl + 0x20);
        w30 = *(u32 *)(tbl + 0x30);
        h = (f32)ha * scale;
        w28 = *(u32 *)(tbl + 0x28);
        w2c = *(u32 *)(tbl + 0x2C);
        t = (f32)hb * scale;
        *(u32 *)&sp34 = w24;
        *(u32 *)&sp5C[0] = w1c;
        *(u32 *)&sp5C[1] = w20;
        *(u32 *)&sp28 = w30;
        sp34 = t - h;
        *(u32 *)&sp2C = w1c;
        *(u32 *)&sp5C[2] = *(u32 *)&sp34;
        *(u32 *)&sp30 = w20;
        hc = *(s16 *)(cell + 0x42D6);
        *(u32 *)&sp20 = w28;
        *(u32 *)&sp24 = w2c;
        *(u32 *)&sp50[0] = w28;
        *(u32 *)&sp50[1] = w2c;
        t = (f32)hc * scale;
        sp28 = t - h;
        *(u32 *)&sp50[2] = *(u32 *)&sp28;
        fn_80203290(sp5C, sp50, sp5C);
        f0 = sp5C[1] * y;
        f0 = f0 + sp5C[0] * x;
        nz = sp5C[2];
        f1 = sp5C[1] * (f32)(siy + 1);
        f1 = f1 + sp5C[0] * (f32)(six + 1);
        f1 = -(f1 + nz * h);
        return -(f1 + f0) / nz;
    }
    {
        u32 w3c, w34, w38, w48, w40, w44;
        s16 ha, hb, hc;
        base2 = (u8 *)arg0 + 0x20000;
        cell = (u8 *)arg0 + 0x10000 + ((six + (siy << 6)) * 8);
        w3c = *(u32 *)(tbl + 0x3C);
        w34 = *(u32 *)(tbl + 0x34);
        ha = *(s16 *)(cell + 0x42D4);
        hb = *(s16 *)(cell + 0x42D6);
        scale = *(f32 *)(base2 - 0x3D2C);
        w38 = *(u32 *)(tbl + 0x38);
        w48 = *(u32 *)(tbl + 0x48);
        h = (f32)ha * scale;
        w40 = *(u32 *)(tbl + 0x40);
        w44 = *(u32 *)(tbl + 0x44);
        t = (f32)hb * scale;
        *(u32 *)&sp1C = w3c;
        *(u32 *)&sp44[0] = w34;
        *(u32 *)&sp44[1] = w38;
        *(u32 *)&sp10 = w48;
        sp1C = t - h;
        *(u32 *)&sp14 = w34;
        *(u32 *)&sp44[2] = *(u32 *)&sp1C;
        *(u32 *)&sp18 = w38;
        hc = *(s16 *)(cell + 0x42D8);
        *(u32 *)&sp8 = w40;
        *(u32 *)&spC = w44;
        *(u32 *)&sp38[0] = w40;
        *(u32 *)&sp38[1] = w44;
        t = (f32)hc * scale;
        sp10 = t - h;
        *(u32 *)&sp38[2] = *(u32 *)&sp10;
        fn_80203290(sp44, sp38, sp44);
        f0 = sp44[1] * y;
        f0 = f0 + sp44[0] * x;
        nz = sp44[2];
        f1 = sp44[1] * (f32)siy;
        f1 = f1 + sp44[0] * (f32)six;
        f1 = -(f1 + nz * h);
        return -(f1 + f0) / nz;
    }
}
#pragma fp_contract reset
extern f32 gMapFlatEdgeEps;
#pragma global_optimizer off
#pragma use_lmw_stmw on
/* Clear directional edge flags on tiles whose neighbor height samples are nearly coplanar. */
void Map_PruneFlatEdges(void *map) {
    void *row;
    void *flagCell;
    u16 flags;
    f32 delta;
    register f32 scale;
    int y;
    void *hN;
    void *hS;
    void *hW;
    void *hE;
    void *hSE;
    register int x;

    row = map;
    y = 0;
    goto outer_test;
outer:
    hN = (u8 *)row + 0x10000;
    hS = (u8 *)hN + 0x40D4;
    hW = (u8 *)hN + 0x44D4;
    hE = (u8 *)hN + 0x42CC;
    hSE = (u8 *)hN + 0x42DC;
    hN = (u8 *)hN + 0x42D4;
    x = 0;
    goto inner_test;
inner:
    flagCell = (u8 *)&gBattleMap + (((s8)x + ((s8)y << 6)) * 2);
    flags = *(u16 *)((u8 *)flagCell + 0x408E);
    flagCell = (u8 *)flagCell + 0x408E;
    if (flags & 8) {
        scale = *(f32 *)((u8 *)map + 0x1C2D4);
        delta = scale * (f32)(*(s16 *)hN - *(s16 *)((u8 *)hS + 4));
        if (delta * delta < gMapFlatEdgeEps) {
            delta = scale * (f32)(*(s16 *)((u8 *)hN + 2) - *(s16 *)((u8 *)hS + 6));
            if (delta * delta < gMapFlatEdgeEps) {
                goto skip8;
            }
        }
        flags &= ~0x8;
    }
skip8:
    if (flags & 4) {
        scale = *(f32 *)((u8 *)map + 0x1C2D4);
        delta = scale * (f32)(*(s16 *)((u8 *)hN + 4) - *(s16 *)hW);
        if (delta * delta < gMapFlatEdgeEps) {
            delta = scale * (f32)(*(s16 *)((u8 *)hN + 6) - *(s16 *)((u8 *)hW + 2));
            if (delta * delta < gMapFlatEdgeEps) {
                goto skip4;
            }
        }
        flags &= ~0x4;
    }
skip4:
    if (flags & 1) {
        scale = *(f32 *)((u8 *)map + 0x1C2D4);
        delta = scale * (f32)(*(s16 *)hN - *(s16 *)((u8 *)hE + 2));
        if (delta * delta < gMapFlatEdgeEps) {
            delta = scale * (f32)(*(s16 *)((u8 *)hN + 4) - *(s16 *)((u8 *)hE + 6));
            if (delta * delta < gMapFlatEdgeEps) {
                goto skip1;
            }
        }
        flags &= ~0x1;
    }
skip1:
    if (flags & 2) {
        scale = *(f32 *)((u8 *)map + 0x1C2D4);
        delta = scale * (f32)(*(s16 *)((u8 *)hN + 2) - *(s16 *)hSE);
        if (delta * delta < gMapFlatEdgeEps) {
            delta = scale * (f32)(*(s16 *)((u8 *)hN + 6) - *(s16 *)((u8 *)hSE + 4));
            if (delta * delta < gMapFlatEdgeEps) {
                goto skip2;
            }
        }
        flags &= ~0x2;
    }
skip2:
    *(u16 *)flagCell = flags;
    ++x;
    hN = (u8 *)hN + 8;
    hS = (u8 *)hS + 8;
    hW = (u8 *)hW + 8;
    hE = (u8 *)hE + 8;
    hSE = (u8 *)hSE + 8;
inner_test:
    if (x < gBattleMap.width) {
        goto inner;
    }
    row = (u8 *)row + 0x200;
    ++y;
outer_test:
    if (y < gBattleMap.height) {
        goto outer;
    }
}

#pragma push
#pragma opt_common_subs off
void fn_80023A4C(void *arg0) {
    void *Map_Get(void);
    s32 fn_80047AF8(void *);
    struct Map {
        s32 w;
        s32 h;
        u8 pad[0x4086];
        u16 tiles[4096];
    };
    struct Map *g = (struct Map *)arg0;
    s32 margin = (u8)fn_80047AF8(Map_Get());
    s32 m = (s8)margin;
    s32 x, y;
    for (x = margin; x < g->w - margin; x++) {
        u16 *p = &g->tiles[(s8)x + (m << 6)];
        *p = (u16)(*p & ~0x808) | 0x80;
        p = &g->tiles[(s8)x + ((s8)(g->h - margin - 1) << 6)];
        *p = (u16)(*p & ~0x404) | 0x40;
    }
    for (y = margin; y < g->h - margin; y++) {
        u16 *p = &g->tiles[m + ((s8)y << 6)];
        *p = (u16)(*p & ~0x101) | 0x10;
        p = &g->tiles[(s8)(g->w - margin - 1) + ((s8)y << 6)];
        *p = (u16)(*p & ~0x202) | 0x20;
    }
}
#pragma pop
#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
#pragma opt_propagation off
void fn_80023B80(void *arg0) {
    void *Map_Get(void);
    void fn_800062B0(void *, s32, s32);
    void Map_PruneFlatEdges(void *);
    struct Terrain { u32 unk0, unk4; u8 *data; };
    struct Terrain *Terrain_GetEntry(s32);
    u8 *map;
    s16 *dims;
    s32 x;
    s32 y;
    s32 width;
    s32 sx, sy;
    s32 tile;
    s32 off;
    s32 row;
    s32 flags;
    s32 t;
    u16 uflags;
    u8 *rowp;
    u8 *cell;
    s32 yb;
    s32 xb;
    struct Terrain *terrain;
    u8 *bmp;

    map = arg0;
    dims = Map_Get();
    *(s32 *)map = dims[0];
    dims = Map_Get();
    y = 0;
    row = y;
    *(s32 *)(map + 4) = dims[1];

    goto outer_test;
outer:
    tile = row;
    x = 0;
    goto inner_test;
inner:
    off = tile << 1;
    flags = 1;
    if ((s8)x == 0) {
        flags = 0x10;
    }
    uflags = flags;
    t = 8;
    if ((s8)y == 0) {
        t = 0x80;
    }
    flags = uflags | t;
    uflags = flags;
    t = 2;
    if (sx == width - 1) {
        t = 0x20;
    }
    flags = uflags | t;
    uflags = flags;
    t = 4;
    if (sy == *(s32 *)(map + 4) - 1) {
        t = 0x40;
    }
    flags = uflags | t;
    *(u16 *)(map + off + 0x408E) = flags;
    tile += 1;
    x += 1;
inner_test:
    width = *(s32 *)map;
    sx = (s8)x;
    if (sx < width) {
        goto inner;
    }
    row += 0x40;
    y += 1;
outer_test:
    sy = (s8)y;
    if (sy < *(s32 *)(map + 4)) {
        goto outer;
    }

    fn_800062B0(map + 0x400E, 0x00F000F0, 0x80);
    Map_PruneFlatEdges(map);

    bmp = (u8 *)&gBattleMap;
    yb = ((s8 *)bmp)[9];
    goto y_test;
y_loop:
    xb = ((s8 *)bmp)[8];
    rowp = map + ((s8)yb << 6);
    goto x_test;
x_loop:
    cell = rowp + (s8)xb;
    terrain = Terrain_GetEntry(cell[0x100D]);
    xb++;
    cell[0xE18E] = terrain->data[7];
x_test:
    if (xb <= (s8)bmp[0xA] - 1) {
        goto x_loop;
    }
    yb++;
y_test:
    if (yb <= (s8)bmp[0xB] - 1) {
        goto y_loop;
    }
}
#pragma pop
#pragma global_optimizer on
void fn_80023D14(void *arg0) {
    void *Map_Get(void);
    s32 fn_80047AF8(void *);
    void Map_FillLayer(void *, s32, s32);
    void fn_80044450(void *, s32);
    void *cam;

    cam = Map_Get();
    *(s32 *)arg0 = *(s16 *)cam;
    *(s32 *)((u8 *)arg0 + 4) = *(s16 *)((u8 *)cam + 2);
    *(u8 *)((u8 *)arg0 + 8) = fn_80047AF8(cam);
    *(u8 *)((u8 *)arg0 + 0xA) = *(s32 *)arg0 - fn_80047AF8(cam);
    *(u8 *)((u8 *)arg0 + 9) = fn_80047AF8(cam);
    *(u8 *)((u8 *)arg0 + 0xB) = *(s32 *)((u8 *)arg0 + 4) - fn_80047AF8(cam);
    *(s32 *)((char *)arg0 + 0x14190) = (s32)arg0 + 0x610E;
    Map_FillLayer(arg0, 0, 0);
    fn_80044450(cam, 1);
}

#pragma use_lmw_stmw reset
#pragma global_optimizer on
void fn_80023DC0(void) {
    void Map_RefreshUnitMap(void *);
    Map_RefreshUnitMap(&gBattleMap);
}

void fn_80023DE8(void) {
    extern u8 lbl_80284548[];
    extern void fn_80023E18(void);
    extern void fn_8000BF6C(void *, void *);

    fn_8000BF6C(lbl_80284548, fn_80023E18);
}

void fn_80023E18(void) {
    Process_ClearFunc();
}

s16 fn_80023E38(void)
{
    extern u8 lbl_80284548[];
    extern u32 lbl_8036723C;
    extern void fn_80023ED0(void);

    lbl_8036723C = 0;

    fn_8000BF6C(
        lbl_80284548,
        fn_80023ED0
    );

    return (s16)((lbl_8036723C - 1) * 16 + 0x20);
}

s16 fn_80023E84(void)
{
    extern u8 lbl_80284548[];
    extern u32 lbl_8036723C;
    extern void fn_80023ED0(void);

    lbl_8036723C = 0;

    fn_8000BF6C(
        lbl_80284548,
        fn_80023ED0
    );

    return (s16)((lbl_8036723C - 1) * 8 + 0x80);
}

void fn_80023ED0(void) {
    extern s32 lbl_8036723C;
    lbl_8036723C += 1;
}

#pragma cplusplus on
extern "C" f32 UiWin_GetFade(void *arg0) {
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
        virtual s32 v23() = 0;
        virtual s32 v24() = 0;
    };
    extern const f32 gUiMenuIdentityScale;
    extern const f32 lbl_80368DAC;
    s32 t;
    s32 n;
    u8 mode;

    mode = *(u8 *)((char *)arg0 + 0x61);
    t = *(s16 *)((char *)arg0 + 0x28) + 1;
    switch (mode) {
    case 0:
        return gUiMenuIdentityScale;
    case 1:
        n = ((Model *)*(void **)((char *)arg0 + 0x3C))->v23() + 1;
        return (gUiMenuIdentityScale / (f32)n) * (f32)(n - t);
    case 2: {
        n = ((Model *)*(void **)((char *)arg0 + 0x3C))->v24() + 1;
        f32 d = gUiMenuIdentityScale / (f32)n;
        return d * (f32)t;
    }
    default:
        return lbl_80368DAC;
    }
}
#pragma cplusplus on
#pragma push
#pragma optimization_level 3
void Ui_RebuildListEntries(u8 *self) {
void *GfxEnt_Get(u8);
void Process_Unlink(void *);
u8 *Process_Create(void *,void *);
u8 fn_8000B920(void *);
extern u8 lbl_80284588[];
#pragma cplusplus on
class Item { public:
virtual void v0()=0;
virtual void v1()=0;
virtual void v2()=0;
virtual void v3()=0;
virtual void v4()=0;
virtual void v5()=0;
virtual void v6()=0;
virtual u8 v7(void *,u8)=0;
virtual void v8()=0;
virtual void v9()=0;
virtual void v10()=0;
virtual void v11()=0;
virtual void v12()=0;
virtual void v13()=0;
virtual void v14(void *,void *)=0;
};
class Controller { public: u32 word;
virtual s32 v0()=0;
virtual s32 v1()=0;
virtual s32 v2()=0;
virtual s32 v3()=0;
virtual s32 v4()=0;
virtual void v5(void *)=0;
virtual s32 v6()=0;
virtual s32 v7()=0;
virtual s32 v8()=0;
virtual s32 v9()=0;
virtual s32 v10()=0;
virtual s32 v11()=0;
virtual s32 v12()=0;
virtual s32 v13()=0;
virtual s32 v14()=0;
virtual Item *v15(s32)=0;
virtual s32 v16()=0;
virtual s32 v17()=0;
virtual s32 v18()=0;
virtual s32 v19()=0;
virtual s32 v20()=0;
};
s32 index;
s32 total;
Controller *controller;
u8 *entry;
u8 status;
Item *item;
s32 i;
for(i=0;i<(s8)self[0x60];i++) Process_Unlink(GfxEnt_Get(self[0x40+i]));
controller=*(Controller **)(self+0x3c);
self[0x60]=0;
total=0;
*(s8 *)(self+0x62)=-1;
index=total;
while(1) {
item=controller->v15(index);
if(item == 0) break;
status=item->v7(item,(u8)index);
if(status!=3) {
if(status==1) {
if((s8)self[0x62]<0) self[0x62]=self[0x60];
status=0;
}
entry=(u8 *)Process_Create(lbl_80284588,self);
*(Item **)(entry+0x34)=item;
entry[0x3a]=(short)index;
entry[0x3b]=self[0x60];
entry[0x39]=status;
*(s16 *)(entry+0x30)=controller->v16();
*(s16 *)(entry+0x32)=total+controller->v17();
*(u32 *)(entry+0x3c)=0;
total+=controller->v20();
u8 id=fn_8000B920(entry);
self[0x40+(s8)self[0x60]++]=id;
}
index += 1;
}
if((s8)self[0x62]<0) self[0x62]=0;
entry=(u8 *)GfxEnt_Get(self[0x40+(s8)self[0x62]]);
(*(Item **)(entry+0x34))->v14(self,entry);
(*(Controller **)(self+0x3c))->v5(self);
#pragma cplusplus reset
}
#pragma pop
#pragma cplusplus off
void *fn_800241C8(void *arg0) {
    void *var_r5;
    void *var_r6;

    var_r6 = *(void **)((u8 *)arg0 + 0x18);
    var_r5 = arg0;

    while (var_r6 != NULL) {
        if (*(u32 *)var_r6 != *(u32 *)arg0) {
            return var_r5;
        }
        if (var_r6 == NULL) {
            return var_r5;
        }
        var_r5 = var_r6;
        var_r6 = *(void **)((u8 *)var_r6 + 0x18);
    }

    return NULL;
}

#pragma cplusplus on
extern "C" M2C_UNK Prim2D_SetText();
extern "C" M2C_UNK Prim2D_SetScale(f32);
extern "C" M2C_UNK Prim2D_SetTint(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern "C" M2C_UNK Prim2D_SetPos(f32, f32);
extern "C" M2C_UNK Prim2D_EndPrim();
extern "C" M2C_UNK Prim2D_AddPrim(M2C_UNK);
extern "C" void Prim2D_SetTransform(f32, f32, f32, f32);
extern "C" M2C_UNK Prim2D_SetTex(M2C_UNK, M2C_UNK);
extern "C" M2C_UNK Prim2D_PrepareTex();
extern "C" M2C_UNK Prim2D_Begin();
extern "C" void Ui_DrawMenuTextItem(void *unused, void *parent, void *item) {
    /* Draw menu item text via Prim2D: parent x/y/z, item drawer text, yellow if selected, black if type 2. */
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
    struct Drawer {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4(void *) = 0;
    };
    extern f32 gUiMenuIdentityScale;
    extern f32 gUiMenuZBias;
    extern f32 gUiMenuTextScale;

    (void)unused;
    Prim2D_Begin();
    Prim2D_SetTransform((f32) M2C_FIELD(parent, s16 *, 0x30), (f32) M2C_FIELD(parent, s16 *, 0x32), M2C_FIELD(parent, Model **, 0x3C)->v25() - gUiMenuZBias, gUiMenuIdentityScale);
    Prim2D_SetTex(0, 0x13);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(5);
    Prim2D_SetPos((f32) M2C_FIELD(item, s16 *, 0x30), (f32) M2C_FIELD(item, s16 *, 0x32));
    M2C_FIELD(item, Drawer **, 0x34)->v4(item);
    Prim2D_SetText();
    Prim2D_SetScale(gUiMenuTextScale);
    if ((u8) M2C_FIELD(item, u8 *, 0x38) != 0) {
        Prim2D_SetTint(0xFF, 0xFF, 0, 0xFF);
    }
    if ((u8) M2C_FIELD(item, u8 *, 0x39) == 2) {
        Prim2D_SetTint(0, 0, 0, 0xFF);
    }
    Prim2D_EndPrim();
}
#pragma cplusplus on
extern "C" void fn_80024364(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}
#pragma cplusplus off
s32 fn_80024390(void) {
    return 0;
}

#pragma cplusplus on
extern "C" void *Process_CreateEx(u8 *, void * = 0);
#pragma cplusplus off
u8 *Process_Create(void *, void *);
u8 fn_8000B920(void *);
void *GfxEnt_Get(u8);
void Ui_PlaySeCue(void *, s32);

#pragma cplusplus on
struct UiMenuDefinition {
    u8 pad[4];
    virtual void v0() = 0;
    virtual u8 v1() = 0;
    virtual void v2() = 0;
    virtual void v3(void *) = 0;
    virtual void v4() = 0;
    virtual void v5(void *) = 0;
    virtual void v6() = 0;
    virtual void v7(void *, u8) = 0;
    virtual void v8() = 0;
    virtual void v9() = 0;
    virtual void v10() = 0;
    virtual void v11() = 0;
    virtual void v12() = 0;
    virtual void v13() = 0;
    virtual void v14() = 0;
    virtual void *v15(s32) = 0;
    virtual s32 v16() = 0;
    virtual s32 v17() = 0;
    virtual s32 v18() = 0;
    virtual s32 v19() = 0;
    virtual s32 v20() = 0;
    virtual s32 v21() = 0;
    virtual s32 v22() = 0;
    virtual s32 v23() = 0;
    virtual void v24() = 0;
    virtual void v25() = 0;
    virtual u32 v26() = 0;
};
struct UiMenuEntry {
    virtual void i0() = 0;
    virtual void i1() = 0;
    virtual void i2() = 0;
    virtual void i3() = 0;
    virtual void i4() = 0;
    virtual void i5() = 0;
    virtual void i6() = 0;
    virtual s32 i7(void *, u8) = 0;
};

static inline void Ui_BuildMenuItems(UiMenuDefinition *menu, u8 *object, s32 accumulator)
{
    extern u8 lbl_80284588[];
    void *item;
    s32 status;
    u8 *holder;
    s32 value;
    s32 cursor;

    cursor = 0;
    object[0x60] = accumulator;
    *(s8 *)(object + 0x62) = -1;

    while (1) {
        item = menu->v15(cursor);

        if (item == NULL) {
            break;
        }

        status = ((UiMenuEntry *)item)->i7(item, (u8)cursor);

        if ((u8)status != 3) {
            if ((u8)status == 1) {
                if ((s8)object[0x62] < 0) {
                    object[0x62] = object[0x60];
                }
                status = 0;
            }

            holder = (u8 *)Process_Create(lbl_80284588, object);

            *(void **)(holder + 0x34) = item;
            holder[0x3A] = (u8)cursor;
            holder[0x3B] = object[0x60];
            holder[0x39] = (u8)status;

            *(s16 *)(holder + 0x30) = menu->v16();

            value = menu->v17();
            *(s16 *)(holder + 0x32) = accumulator + value;

            *(u32 *)(holder + 0x3C) = 0;

            value = menu->v20();
            accumulator += value;

            value = fn_8000B920(holder);

            {
                s8 slot = (s8)object[0x60];
                object[0x60]++;
                object[0x40 + slot] = (u8)value;
            }
        }
        cursor++;
    }

    if ((s8)object[0x62] < 0) {
        object[0x62] = 0;
    }
    *(void **)(object + 0x3C) = menu;

    *(s16 *)(object + 0x30) = menu->v21();
    *(s16 *)(object + 0x32) = menu->v22();
    *(s16 *)(object + 0x34) = menu->v18();

    value = menu->v19();
    if ((s16)value != 0) {
        *(s16 *)(object + 0x36) = menu->v19();
    } else {
        s32 dimension = menu->v20() * (s8)object[0x60];
        s32 height = menu->v17();
        *(s16 *)(object + 0x36) = height + dimension;
    }
}

extern "C" void *Ui_CreateMenu(void *arg0, void *arg1, u32 arg2) {
    extern u8 lbl_80284548[];

    struct Selected {
        virtual void s0() = 0;
        virtual void s1() = 0;
        virtual void s2() = 0;
        virtual void s3() = 0;
        virtual void s4() = 0;
        virtual void s5() = 0;
        virtual void s6() = 0;
        virtual void s7() = 0;
        virtual void s8() = 0;
        virtual void s9() = 0;
        virtual void s10() = 0;
        virtual void s11() = 0;
        virtual void s12() = 0;
        virtual void s13() = 0;
        virtual void s14(void *, void *) = 0;
    };
    u8 *object;
    void *first;
    void *second;
    Selected *selected;
    s32 value;

    object = (u8 *)Process_CreateEx(lbl_80284548, arg1);

    if ((u8)arg2 != 0) {
        object[0x2B] = (u8)arg2;
    }
    Ui_BuildMenuItems((UiMenuDefinition *)arg0, object, 0);
    object[0x63] = object[0x62];
    *(s16 *)(object + 0x38) = -1;
    *(s16 *)(object + 0x3A) = -1;

    ((UiMenuDefinition *)arg0)->v3(object);
    ((UiMenuDefinition *)arg0)->v5(object);

    first = (void *)GfxEnt_Get(object[0x40 + (s8)object[0x62]]);
    second = (void *)GfxEnt_Get(object[0x40 + (s8)object[0x62]]);

    selected = *(Selected **)((u8 *)second + 0x34);
    selected->s14(object, first);

    *(s16 *)(object + 0x28) = ((UiMenuDefinition *)arg0)->v23();

    object[0x61] = 1;

    if (((UiMenuDefinition *)arg0)->v26() != 0) {
        value = ((UiMenuDefinition *)arg0)->v26();
        Ui_PlaySeCue((void *)value, 0x64);
    }

    if (((UiMenuDefinition *)arg0)->v1() != 0) {
        *(s8 *)(object + 0x62) = -1;
    }

    return object;
}
extern "C" void fn_800246E0(void *arg0) {
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
        virtual s16 v24() = 0;
    };
    *(u8 *)((char *)arg0 + 0x61) = 2;
    *(s16 *)((char *)arg0 + 0x28) = ((Model *)*(void **)((char *)arg0 + 0x3C))->v24();
}
#pragma cplusplus reset

void fn_80024728(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
}

#pragma cplusplus on
extern "C" void fn_80024734(void *arg0) {
    struct Obj {
        u8 pad[4];
        virtual void v0(void *) = 0;
        virtual void v1(void *) = 0;
        virtual void v2(void *) = 0;
        virtual void v3(void *) = 0;
        virtual void v4(void *) = 0;
    };
    ((Obj *)*(void **)((u8 *)arg0 + 0x3C))->v4(arg0);
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma opt_propagation off
extern "C" void fn_80024768(void *arg0) {
void *GfxEnt_Get(u8);void Process_ClearFunc(void*);
void Ui_PlaySeCue(void*,s32);void Ui_HideUnitInfoPopup(void*);void Ui_OpenUnitInfoPopup(void*,void*,void*,f32,f32);void Ui_OpenUnitInfoText(void*,void*,void*,f32,f32);
extern s32 gUiInputFlags;extern u8 lbl_80367238,lbl_80367239,gMapUiResult;
extern u8 lbl_80268D90[],lbl_80284548[],gUnitInfoPopup[];extern u32 gUnitInfoPopupFlag;
typedef struct { u8 pad[0x40]; u8 id[0x22]; s8 selected; } Selection;
f32 x,y;
MenuController24768 *ctrl;
void *item,*q;
u8 *node;
Selection *selected;
u32 index;
u32 flags;
ctrl=*(MenuController24768**)((u8*)arg0+0x3c);flags=0;
if(!(gUiInputFlags&0x80)){
if(*(s8*)((u8*)arg0+0x62)<0){ctrl->v13(arg0);return;}
ctrl->v11(arg0);
(*(MenuController24768**)((u8*)arg0+0x3c))->v12(arg0);
if(*((u8*)arg0+0x2b)!=0x7b){
index=(u8)((Selection *)arg0)->selected;
selected=(Selection *)((u8 *)arg0+(s8)index);
item=GfxEnt_Get(selected->id[0]);lbl_80367238=*((u8*)item+0x3a);
index=(u8)((Selection *)arg0)->selected;
selected=(Selection *)((u8 *)arg0+(s8)index);
item=GfxEnt_Get(selected->id[0]);lbl_80367239=*((u8*)item+0x3b);
}
flags=(*(MenuController24768**)((u8*)arg0+0x3c))->v14(arg0);
if(*((u8*)arg0+0x2b)!=0x7b)gMapUiResult=flags;
}
flags=(u8)flags;
if((flags&4)&&ctrl->v28())Ui_PlaySeCue(ctrl->v28(),100);
if(flags&8)Ui_PlaySeCue(lbl_80268D90+0x43,100);
if(flags&16)Ui_PlaySeCue(lbl_80268D90+0x53,100);
if(flags&1){
Process_ClearFunc(arg0);
index=(u8)((Selection *)arg0)->selected;
selected=(Selection *)((u8 *)arg0+(s8)index);
item=GfxEnt_Get(selected->id[0]);
(*(MenuItem24768**)((u8*)item+0x34))->v15(arg0,item);
if(ctrl->v27())Ui_PlaySeCue(ctrl->v27(),100);
}else if(flags&2){
node=(u8*)arg0;
if(ctrl->v27())Ui_PlaySeCue(ctrl->v27(),100);
while(node && *(void**)node==lbl_80284548){
Process_ClearFunc(node);
if(node[0x2c]&2){node[0x2c]&=~2;((u8*)*(void**)(node+0x18))[0x2d]--;}
node=*(u8**)(node+0x18);
}
}else if(flags&32){
index=(u8)((Selection *)arg0)->selected;
selected=(Selection *)((u8 *)arg0+(s8)index);
item=GfxEnt_Get(selected->id[0]);
x=(f32)(*(s16*)((u8*)arg0+0x30)+*(s16*)((u8*)item+0x30));
index=(u8)((Selection *)arg0)->selected;
selected=(Selection *)((u8 *)arg0+(s8)index);
item=GfxEnt_Get(selected->id[0]);
y=(f32)(*(s16*)((u8*)arg0+0x32)+*(s16*)((u8*)item+0x32));
index=(u8)((Selection *)arg0)->selected;
selected=(Selection *)((u8 *)arg0+(s8)index);
item=GfxEnt_Get(selected->id[0]);
q=(*(MenuItem24768**)((u8*)item+0x34))->v2();
if(q)Ui_OpenUnitInfoText(gUnitInfoPopup,arg0,q,x,y);
else {
index=(u8)((Selection *)arg0)->selected;
selected=(Selection *)((u8 *)arg0+(s8)index);
item=GfxEnt_Get(selected->id[0]);
q=(*(MenuItem24768**)((u8*)item+0x34))->v16(item);
Ui_OpenUnitInfoPopup(gUnitInfoPopup,arg0,q,x,y);
}
*(u32*)gUnitInfoPopup|=gUnitInfoPopupFlag;
}else if(flags&64)Ui_HideUnitInfoPopup(gUnitInfoPopup);
}
#pragma pop
#pragma cplusplus on
extern "C" s32 fn_80024B6C(void *unused, u8 *obj) {
void *GfxEnt_Get(u8);
u8 Ui_IsUnitInfoPopupOpen(void *);
extern u32 gPadInput;
extern u8 gUnitInfoPopup[];
#pragma cplusplus on
class Handler { public:
virtual s32 v0(void*,void*)=0;
virtual s32 v1(void*,void*)=0;
virtual s32 v2(void*,void*)=0;
virtual s32 v3(void*,void*)=0;
virtual s32 v4(void*,void*)=0;
virtual s32 v5(void*,void*)=0;
virtual s32 v6(void*,void*)=0;
virtual s32 v7(void*,void*)=0;
virtual s32 v8(void*,void*)=0;
virtual s32 v9(void*,void*)=0;
virtual s32 v10(void*,void*)=0;
virtual s32 v11(void*,void*)=0;
virtual s32 v12(void*,void*)=0;
virtual s32 v13(void*,void*)=0;
virtual s32 v14(void*,void*)=0;
virtual s32 v15(void*,void*)=0;
};
class Base { public: int word; };
class Handler2: public Base { public:
virtual s32 v0(void*,void*)=0;
virtual s32 v1(void*,void*)=0;
virtual s32 v2(void*,void*)=0;
virtual s32 v3(void*,void*)=0;
virtual s32 v4(void*,void*)=0;
virtual s32 v5(void*,void*)=0;
virtual s32 v6(void*,void*)=0;
virtual s32 v7(void*,void*)=0;
virtual s32 v8(void*,void*)=0;
virtual s32 v9(void*,void*)=0;
virtual s32 v10(void*,void*)=0;
virtual s32 v11(void*,void*)=0;
};
u8 *ent;
u32 pressed, held, previous;
s32 result, second;
held=((u32 *)gPadInput)[1]; previous=((u32 *)gPadInput)[2];
pressed=held & (previous ^ held);
ent=(u8 *)GfxEnt_Get(obj[0x40+(s8)obj[0x62]]);
if((pressed&0x100)&&!Ui_IsUnitInfoPopupOpen(gUnitInfoPopup)) return (*(Handler **)(ent+0x34))->v9(obj,ent);
if(pressed&0x200) return (*(Handler2 **)(obj+0x3c))->v6(obj,ent);
if(pressed&0x400) return (*(Handler **)(ent+0x34))->v10(obj,ent);
if(pressed&0x800) return (*(Handler2 **)(obj+0x3c))->v7(obj,ent);
if(pressed&0x10) {
result=(*(Handler **)(ent+0x34))->v11(obj,ent);
second=(*(Handler2 **)(obj+0x3c))->v8(obj,ent);
return (u8)(second|result);
}
if(pressed&0x1000) return (*(Handler2 **)(obj+0x3c))->v9(obj,ent);
return (*(Handler **)(ent+0x34))->v13(obj,ent);
#pragma cplusplus reset
}

#pragma cplusplus reset

#pragma cplusplus reset
void fn_80024D18(s32 unused, void *arg1) {
    extern u32 *gPadInput;
    extern u8 lbl_80268D90[];
    void Ui_PlaySeCue(void *, s32);
    u32 temp_r6 = gPadInput[1];

    if (temp_r6 & (gPadInput[2] ^ temp_r6) & 0x0C00000C) {
        ((u8 *)arg1)[0x62] = 0;
        Ui_PlaySeCue(&lbl_80268D90[0x71], 0x64);
    }
}

extern u32 gPadInput;
#pragma cplusplus on
#pragma opt_strength_reduction off
extern "C" void fn_80024D74(s32 unused, void *arg1) {
    void *GfxEnt_Get(u8);
    struct Item {
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
        virtual void v12(void *, void *) = 0;
    };
    void *item;
    u8 *unit;

    if ((((u32 *)gPadInput)[1] & 0x3000003U) == 0) {
        return;
    }
    unit = (u8 *)arg1;
    item = GfxEnt_Get(unit[0x40 + (s8)unit[0x62]]);
    (*(Item **)((u8 *)item + 0x34))->v12(arg1, item);
}
#pragma opt_strength_reduction reset
#pragma push
#pragma optimization_level 4
extern "C" void fn_80024DE4(s32 unused, void *arg1) {
    void *GfxEnt_Get(u8);
    void Ui_PlaySeCue(void *, s32);
    u8 Ui_IsUnitInfoPopupOpen(void *);
    void Ui_ShowUnitInfoPopup(void *, void *, f32, f32);
    void Ui_ShowUnitInfoText(void *, void *, f32, f32);
    extern u8 lbl_80268D90[];
    extern u8 gUnitInfoPopup[];
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void *v2() = 0;
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
        virtual void v14(void *, void *) = 0;
        virtual void v15(void *, void *) = 0;
        virtual void *v16(void *) = 0;
    };
    struct Node {
        u8 pad30[0x30];
        s16 x;
        s16 y;
        Obj *obj;
    };
    u32 trig;
    u32 *pad;
    u32 held;
    u32 pressed;
    u8 sel;
    Node *node;
    Node *node2;
    void *ret;
    f32 f31;
    f32 f30;
    u8 *p;

    pad = *(u32 **)&gPadInput;
    trig = pad[3];
    sel = *(u8 *)((u8 *)arg1 + 0x62);
    held = pad[1];
    pressed = held & (pad[2] ^ held);
    *(u8 *)((u8 *)arg1 + 0x63) = sel;
    if (trig & 0x08000008) {
        if (*(s8 *)((u8 *)arg1 + 0x62) == 0) {
            if (pressed != trig) {
                goto end;
            }
            *(u8 *)((u8 *)arg1 + 0x62) = *(u8 *)((u8 *)arg1 + 0x60);
        }
        (*(u8 *)((u8 *)arg1 + 0x62))--;
    }
    if (trig & 0x04000004) {
        if ((s8)*(u8 *)((u8 *)arg1 + 0x62) == (s8)*(u8 *)((u8 *)arg1 + 0x60) - 1) {
            if (pressed != trig) {
                goto end;
            }
            *(s8 *)((u8 *)arg1 + 0x62) = -1;
        }
        (*(u8 *)((u8 *)arg1 + 0x62))++;
    }
    if ((s8)*(u8 *)((u8 *)arg1 + 0x62) != (s8)*(u8 *)((u8 *)arg1 + 0x63)) {
        p = (u8 *)arg1;
        p += (s8)*(u8 *)((u8 *)arg1 + 0x63);
        node = (Node *)GfxEnt_Get(p[0x40]);
        node->obj->v15(arg1, node);
        p = (u8 *)arg1;
        p += *(s8 *)((u8 *)arg1 + 0x62);
        node = (Node *)GfxEnt_Get(p[0x40]);
        node->obj->v14(arg1, node);
        if (Ui_IsUnitInfoPopupOpen(gUnitInfoPopup) != 0) {
            p = (u8 *)arg1;
            p += *(s8 *)((u8 *)arg1 + 0x62);
            node = (Node *)GfxEnt_Get(p[0x40]);
            f31 = (f32)(*(s16 *)((u8 *)arg1 + 0x30) + node->x);
            p = (u8 *)arg1;
            p += *(s8 *)((u8 *)arg1 + 0x62);
            node = (Node *)GfxEnt_Get(p[0x40]);
            f30 = (f32)(*(s16 *)((u8 *)arg1 + 0x32) + node->y);
            p = (u8 *)arg1;
            p += *(s8 *)((u8 *)arg1 + 0x62);
            node = (Node *)GfxEnt_Get(p[0x40]);
            ret = node->obj->v2();
            if (ret != NULL) {
                Ui_ShowUnitInfoText(gUnitInfoPopup, ret, f31, f30);
            } else {
                p = (u8 *)arg1;
                p += *(s8 *)((u8 *)arg1 + 0x62);
                node2 = (Node *)GfxEnt_Get(p[0x40]);
                Ui_ShowUnitInfoPopup(gUnitInfoPopup, node2->obj->v16(node2), f31, f30);
            }
        }
        Ui_PlaySeCue(lbl_80268D90 + 0x71, 0x64);
    }
end:
    ;
}
#pragma pop

#pragma push
#pragma optimization_level 4
#pragma cplusplus on
extern "C" void fn_80025068(void *arg0, void *arg1) {
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
        virtual s16 v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual f32 v25() = 0;
    };
    void *GfxEnt_Get(u8);
    void Prim2D_Begin(void);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_SetTex(s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EmitQuad(void);
    void Prim2D_SetCornerColors(s32 *, s32 *, s32 *, s32 *);
    void Prim2D_EndPrim(void);
    extern f32 gUiMenuIdentityScale;
    extern f32 lbl_80368DAC;
    extern s32 lbl_80368DA0;
    extern s32 lbl_80368DA4;
    extern u32 lbl_8036C410;
    extern u32 lbl_8036C414;

    u8 *self;
    u8 *entity;
    s16 value;
    s32 selected;
    s32 width;
    s16 height;
    f32 z;
    f32 px;
    f32 py;
    f32 ph;
    s32 color0;
    s32 color1;
    s32 color2;
    s32 color3;

    (void)arg0;
    self = (u8 *)arg1;

    selected = (s8)self[0x62];
    entity = (u8 *)GfxEnt_Get(self[0x40 + selected]);

    value = *(s16 *)(self + 0x3A);
    width = *(s16 *)(entity + 0x32);

    if (value < 0) {
        *(s16 *)(self + 0x3A) = (s16)width;
    } else {
        *(s16 *)(self + 0x3A) = (s16)((value + width) / 2);
    }

    Prim2D_Begin();

    z = M2C_FIELD(self, Model **, 0x3C)->v25();
    Prim2D_SetTransform((f32)M2C_FIELD(self, s16 *, 0x30), (f32)M2C_FIELD(self, s16 *, 0x32), z - gUiMenuIdentityScale, gUiMenuIdentityScale);

    Prim2D_SetTex(0, 0x12);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(3);

    Prim2D_SetRect(lbl_80368DAC, (f32)M2C_FIELD(self, s16 *, 0x3A), (f32)M2C_FIELD(self, s16 *, 0x34), (f32)M2C_FIELD(self, Model **, 0x3C)->v20());

    Prim2D_EmitQuad();

    color3 = lbl_80368DA4;
    color2 = lbl_80368DA0;
    color1 = lbl_8036C414;
    color0 = lbl_8036C410;

    Prim2D_SetCornerColors(&color0, &color1, &color2, &color3);
    Prim2D_EndPrim();
}
#pragma pop
#pragma cplusplus off

#pragma cplusplus on
extern "C" void Ui_DrawMenuDimRect(s32 unused, void *node) {
    /* Draw a menu node as a dimmed Prim2D quad; soft corner alphas, extra dim if flags 0x2D/0x2E set. */
    void Prim2D_SetCornerColors(s32 *, s32 *, s32 *, s32 *);
    void Prim2D_EmitQuad(void);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetColorByte(s32);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_SetTex(s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
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
    extern s32 gUiMenuDimColorTL;
    extern s32 gUiMenuDimColorTR;
    extern s32 gUiMenuDimColorBL;
    extern s32 gUiMenuDimColorBR;
    extern f32 gUiMenuIdentityScale;
    s32 colorTL;
    s32 colorTR;
    s32 colorBL;
    s32 colorBR;
    u8 fullyLit;
    f32 z;

    (void)unused;
    Prim2D_Begin();
    z = M2C_FIELD(node, Model **, 0x3C)->v25();
    Prim2D_SetTransform((f32) M2C_FIELD(node, s16 *, 0x30), (f32) M2C_FIELD(node, s16 *, 0x32), z, gUiMenuIdentityScale);
    Prim2D_SetTex(0, 0x12);
    fullyLit = 0;
    if ((u8) M2C_FIELD(node, u8 *, 0x2D) == 0 && (u8) M2C_FIELD(node, u8 *, 0x2E) == 0) {
        fullyLit = 1;
    }
    if (fullyLit == 0) {
        Prim2D_SetColorByte(0x50);
    }
    Prim2D_PrepareTex();
    Prim2D_AddPrim(3);
    Prim2D_SetRect(0.0f, 0.0f, (f32) M2C_FIELD(node, s16 *, 0x34), (f32) M2C_FIELD(node, s16 *, 0x36));
    Prim2D_EmitQuad();
    colorBR = gUiMenuDimColorBR;
    colorBL = gUiMenuDimColorBL;
    colorTR = gUiMenuDimColorTR;
    colorTL = gUiMenuDimColorTL;
    Prim2D_SetCornerColors(&colorTL, &colorTR, &colorBL, &colorBR);
    Prim2D_EndPrim();
}

extern "C" void fn_80025338(void *arg0) {
#pragma cplusplus on
 struct Controller { u32 pad; virtual void v0()=0; virtual void v1()=0; virtual void draw(void*)=0; virtual void v3()=0; virtual void v4()=0; virtual void v5()=0; virtual void v6()=0; virtual void v7()=0; virtual void v8()=0; virtual void v9()=0; virtual void finish(void*)=0; };
 struct Item { virtual void v0()=0; virtual void v1()=0; virtual void v2()=0; virtual void v3()=0; virtual void v4()=0; virtual void v5()=0; virtual void v6()=0; virtual void v7()=0; virtual void draw(void*,void*)=0; };
 extern f32 fn_80009C00(void);
 extern void fn_80009BF4(f32);
 extern void Prim2D_ResetState(void);
 u8 *item;
 s32 i;
 u8 *self=(u8*)arg0;
 f32 saved;
 (*(Controller**)(self+0x3c))->draw(self);
 saved=fn_80009C00();
 for(i=0;i<*(s8*)(self+0x60);++i) {
 item=(u8*)GfxEnt_Get(self[i+0x40]);
 *(s8*)(item+0x38)=(item==(u8*)GfxEnt_Get(self[*(s8*)(self+0x62)+0x40]));
 (*(Item**)(item+0x34))->draw(self,item);
 fn_80009BF4(saved);
 }
 if(self[0x61]==0 && *(s8*)(self+0x62)>=0) (*(Controller**)(self+0x3c))->finish(self);
 Prim2D_ResetState();
#pragma cplusplus reset
}

#pragma cplusplus reset
s32 fn_80025440(void) {
    u8 Ui_IsUnitInfoPopupOpen(void *);
    extern u8 gUnitInfoPopup[];

    return Ui_IsUnitInfoPopupOpen(gUnitInfoPopup) ? 0x40 : 0x20;
}

s32 fn_80025478(void) {
    u8 Ui_IsUnitInfoPopupOpen(void *);
    extern u8 gUnitInfoPopup[];

    return Ui_IsUnitInfoPopupOpen(gUnitInfoPopup) ? 0x40 : 0x9;
}

#pragma cplusplus on
extern "C" void fn_800254B0(void *arg0) {
    struct Obj {
        virtual void v0();
    };
    ((Obj *)arg0)->v0();
}
#pragma cplusplus reset
void *fn_800254DC(void) {
extern u8 lbl_80268D90[];
return lbl_80268D90+0x1A;
}

#pragma cplusplus on
extern "C" void fn_800254EC(void *arg0) {
    struct Obj {
        virtual void v0();
        virtual void v1();
    };
    ((Obj *)arg0)->v1();
}
#pragma cplusplus reset
void *fn_80025518(void) {
extern u8 lbl_80268D90[];
return lbl_80268D90+0x1E;
}

void *fn_80025528(void) {
    extern u8 lbl_80268D90[];
    return &lbl_80268D90[0x2E];
}

s32 fn_80025538(void) {
    return 0;
}

s32 fn_80025540(void) {
    return 5;
}

s32 fn_80025548(void) {
    return 0;
}

s32 fn_80025550(void) {
    return 0;
}

s32 fn_80025558(void) {
    return 0;
}

s32 fn_80025560(void) {
    return 0;
}

s32 fn_80025568(void) {
    return 0;
}

s32 fn_80025570(void) {
    return 0;
}

s32 fn_80025578(void) {
    return 0;
}

s32 fn_80025580(void) {
    return 0;
}

s32 fn_80025588(void) {
    return 1;
}

s32 fn_80025590(void) {
    return 0x10;
}

s32 fn_80025598(void) {
    return 0;
}

s32 fn_800255A0(void) {
    return 0x10;
}

s32 fn_800255A8(s32 **arg0, s32 arg1) {
    return (*arg0)[arg1];
}

void fn_800255B8(void) {

}

f32 fn_800255BC(void) {
    extern f32 lbl_80368DC0;
    return lbl_80368DC0;
}

s32 fn_800255C4(void) {
    return 0;
}

s32 fn_800255CC(void) {
    return 0;
}

void fn_800255D4(void) {

}

s32 fn_800255D8(void) {
    return 0;
}

s32 fn_800255E0(void) {
    return 0xC0;
}

void fn_800255E8(void) {

}

s32 fn_800255EC(void) {
    return 0;
}

void *fn_800255F4(void) {
    extern u8 lbl_80268D90[];
    return lbl_80268D90 + 0x61;
}

s32 fn_80025604(void) {
    return 0;
}

s32 fn_8002560C(void) {
    return 0;
}

void *fn_80025614(void) {
    extern u16 lbl_80268D90[];
    return (u8 *)lbl_80268D90 + 0x8D;
}

void fn_80025624(void *arg0, s8 arg1) {
    void fn_80212CC0(u8, s32);
    extern u8 gBattleState[];
    struct Bits {
        u8 hi : 6;
        u8 mid : 1;
        u8 lo : 1;
    };

    if (((struct Bits *)&gBattleState[0x9E])->mid != 1) {
        fn_80212CC0(*(u8 *)((u8 *)arg0 + 0x1C), 1);
        *(s8 *)((u8 *)arg0 + 0x20) = arg1;
    }
}

void Pad_ClearDisableMask(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) & ~arg1);
}

void Pad_SetDisableMask(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | arg1);
}

void fn_800256A0(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = ~(arg1 | arg1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & temp_r4);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & temp_r4);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) & temp_r4);
}

void Pad_UpdateButtons(void *pad) {
    /* Copy PAD buttons, OR stick/C-stick dir flags past ±0x23, then apply disable mask. */
    u32 disableMask;
    void *status;
    void *status2;
    void *status3;
    void *status4;
    void *status5;
    void *status6;
    void *status7;
    void *status8;
    void *status9;
    void *status10;

    *(s32 *)((u8 *)pad + 4) = (s32)*(u16 *)(*(void **)pad);
    if ((s8)*((u8 *)*(void **)pad + 2) < -0x23) {
        *(s32 *)((u8 *)pad + 4) = (s32)(*(s32 *)((u8 *)pad + 4) | 0x01000000);
    }
    if ((s8)*((u8 *)*(void **)pad + 2) > 0x23) {
        *(s32 *)((u8 *)pad + 4) = (s32)(*(s32 *)((u8 *)pad + 4) | 0x02000000);
    }
    if ((s8)*((u8 *)*(void **)pad + 3) < -0x23) {
        *(s32 *)((u8 *)pad + 4) = (s32)(*(s32 *)((u8 *)pad + 4) | 0x04000000);
    }
    if ((s8)*((u8 *)*(void **)pad + 3) > 0x23) {
        *(s32 *)((u8 *)pad + 4) = (s32)(*(s32 *)((u8 *)pad + 4) | 0x08000000);
    }
    if ((s8)*((u8 *)*(void **)pad + 4) < -0x23) {
        *(s32 *)((u8 *)pad + 4) = (s32)(*(s32 *)((u8 *)pad + 4) | 0x10000000);
    }
    if ((s8)*((u8 *)*(void **)pad + 4) > 0x23) {
        *(s32 *)((u8 *)pad + 4) = (s32)(*(s32 *)((u8 *)pad + 4) | 0x20000000);
    }
    if ((s8)*((u8 *)*(void **)pad + 5) < -0x23) {
        *(s32 *)((u8 *)pad + 4) = (s32)(*(s32 *)((u8 *)pad + 4) | 0x40000000);
    }
    if ((s8)*((u8 *)*(void **)pad + 5) > 0x23) {
        *(s32 *)((u8 *)pad + 4) = (s32)(*(s32 *)((u8 *)pad + 4) | 0x80000000);
    }
    disableMask = *(u32 *)((u8 *)pad + 0x18);
    if (disableMask != 0) {
        *(s32 *)((u8 *)pad + 4) = (s32)(*(s32 *)((u8 *)pad + 4) & ~disableMask);
        if (*(u32 *)((u8 *)pad + 0x18) & 0x01000000) {
            status2 = *(void **)pad;
            if ((s8)*((u8 *)status2 + 2) < 0) {
                *((u8 *)status2 + 2) = 0U;
            }
        }
        if (*(u32 *)((u8 *)pad + 0x18) & 0x02000000) {
            status3 = *(void **)pad;
            if ((s8)*((u8 *)status3 + 2) > 0) {
                *((u8 *)status3 + 2) = 0U;
            }
        }
        if (*(u32 *)((u8 *)pad + 0x18) & 0x04000000) {
            status4 = *(void **)pad;
            if ((s8)*((u8 *)status4 + 3) < 0) {
                *((u8 *)status4 + 3) = 0U;
            }
        }
        if (*(u32 *)((u8 *)pad + 0x18) & 0x08000000) {
            status5 = *(void **)pad;
            if ((s8)*((u8 *)status5 + 3) > 0) {
                *((u8 *)status5 + 3) = 0U;
            }
        }
        if (*(u32 *)((u8 *)pad + 0x18) & 0x10000000) {
            status6 = *(void **)pad;
            if ((s8)*((u8 *)status6 + 4) < 0) {
                *((u8 *)status6 + 4) = 0U;
            }
        }
        if (*(u32 *)((u8 *)pad + 0x18) & 0x20000000) {
            status7 = *(void **)pad;
            if ((s8)*((u8 *)status7 + 4) > 0) {
                *((u8 *)status7 + 4) = 0U;
            }
        }
        if (*(u32 *)((u8 *)pad + 0x18) & 0x40000000) {
            status8 = *(void **)pad;
            if ((s8)*((u8 *)status8 + 5) < 0) {
                *((u8 *)status8 + 5) = 0U;
            }
        }
        if (*(u32 *)((u8 *)pad + 0x18) & 0x80000000) {
            status9 = *(void **)pad;
            if ((s8)*((u8 *)status9 + 5) > 0) {
                *((u8 *)status9 + 5) = 0U;
            }
        }
        if (*(u32 *)((u8 *)pad + 0x18) & 0x40) {
            status10 = *(void **)pad;
            if ((u8)*((u8 *)status10 + 6) != 0) {
                *((u8 *)status10 + 6) = 0U;
            }
        }
        if (*(u32 *)((u8 *)pad + 0x18) & 0x20) {
            status = *(void **)pad;
            if ((u8)*((u8 *)status + 7) != 0) {
                *((u8 *)status + 7) = 0U;
            }
        }
    }
}

extern u8 lbl_802EF438[144];
void *fn_8002595C(s32 arg0) {
    return (u8 *)lbl_802EF438 + arg0 * 0x24;
}

#pragma use_lmw_stmw on
void fn_80025970(void) {
    u64 OSGetTime(void);
    s64 __div2i(s64, s64);
    void Pad_UpdateButtons(void *);
    void fn_80211CC0(void *);
    void fn_8021264C(u32);
    void fn_802129C0(void *);
    void fn_80212CC0(u8, s32);
    extern s32 lbl_80367248;
    extern u32 lbl_8036724C;
    extern u8 lbl_802EF408[48];
    extern u8 lbl_802EF438[144];
    extern s32 lbl_80268E30[4];
    struct PadStatus {
        u8 pad[0xA];
        s8 err;
        u8 padB;
    };
    struct PadState {
        u16 *status;
        u32 buttons;
        u32 prevButtons;
        u32 trigC;
        u32 trig10;
        s32 rawButtons;
        u8 pad18[4];
        u8 port;
        u8 rep1;
        u8 rep2;
        u8 frame;
        u8 rumbleTimer;
        u8 pad21[3];
    };
    u32 mask;
    u64 now;
    s32 i;

    while (1) {
        now = OSGetTime();
        if (__div2i((s64)(now - (((u64)(u32)lbl_80367248 << 32) | (u32)lbl_8036724C)) * 8,
                    (s64)((*(u32 *)0x800000F8 >> 2) / 125000)) >= 1000) break;
    }
    now = OSGetTime();
    lbl_8036724C = (u32)now;
    lbl_80367248 = (u32)(now >> 32);
    mask = 0;
    for (i = 0; i < 4; i++) {
        ((struct PadState *)lbl_802EF438)[i].rawButtons = *((struct PadState *)lbl_802EF438)[i].status;
    }
    fn_802129C0(lbl_802EF408);
    fn_80211CC0(lbl_802EF408);
    for (i = 0; i < 4; i++) {
        switch (((struct PadStatus *)lbl_802EF408)[i].err) {
        case -3:
            continue;
        case -1:
            mask |= (u32)lbl_80268E30[i];
            break;
        case 0:
            break;
        }
        ((struct PadState *)lbl_802EF438)[i].prevButtons = ((struct PadState *)lbl_802EF438)[i].buttons;
        Pad_UpdateButtons(&((struct PadState *)lbl_802EF438)[i]);
        if (((struct PadState *)lbl_802EF438)[i].rumbleTimer != 0) {
            ((struct PadState *)lbl_802EF438)[i].rumbleTimer--;
            if (((struct PadState *)lbl_802EF438)[i].rumbleTimer == 0) {
                fn_80212CC0(((struct PadState *)lbl_802EF438)[i].port, 0);
            }
        }
        ((struct PadState *)lbl_802EF438)[i].trigC = ((struct PadState *)lbl_802EF438)[i].trig10 =
            (((struct PadState *)lbl_802EF438)[i].prevButtons ^ ((struct PadState *)lbl_802EF438)[i].buttons) &
            ((struct PadState *)lbl_802EF438)[i].buttons;
        if (((struct PadState *)lbl_802EF438)[i].buttons != 0 &&
            ((struct PadState *)lbl_802EF438)[i].prevButtons == ((struct PadState *)lbl_802EF438)[i].buttons) {
            ((struct PadState *)lbl_802EF438)[i].rep1--;
            ((struct PadState *)lbl_802EF438)[i].rep2--;
            if (((struct PadState *)lbl_802EF438)[i].rep1 == 0) {
                ((struct PadState *)lbl_802EF438)[i].trig10 = ((struct PadState *)lbl_802EF438)[i].buttons;
                ((struct PadState *)lbl_802EF438)[i].rep1 = 2;
            }
            if (((struct PadState *)lbl_802EF438)[i].rep2 == 0) {
                ((struct PadState *)lbl_802EF438)[i].trigC = ((struct PadState *)lbl_802EF438)[i].buttons;
                ((struct PadState *)lbl_802EF438)[i].rep2 = 4;
            }
        } else {
            ((struct PadState *)lbl_802EF438)[i].rep2 = 0xC;
            ((struct PadState *)lbl_802EF438)[i].rep1 = 0xC;
        }
        ((struct PadState *)lbl_802EF438)[i].frame++;
    }
    if (mask != 0) {
        fn_8021264C(mask);
    }
}
#pragma push
#pragma opt_lifetimes off
void fn_80025BA0(void) {
void SISetSamplingRate(u32); void fn_80212870(void); s32 fn_8021275C(u32);
extern u8 lbl_80368DC8; extern u8 lbl_802EF408[]; extern u32 gPadInput; extern s32 lbl_80367248; extern s32 lbl_8036724C;
u8 *pads; u8 *dst; s32 i;
SISetSamplingRate(1); fn_80212870();
pads=lbl_802EF408; dst=lbl_802EF438;
for(i=0;i<4;i++){dst[0x1c]=(&lbl_80368DC8)[i]; *(u8**)dst=pads; *(s32*)(dst+0x18)=0; dst[0x20]=0; dst+=0x24; pads+=12;}
fn_8021275C(0xF0000000);
lbl_8036724C=0; lbl_80367248=0; gPadInput=(u32)lbl_802EF438;
}
#pragma pop
/* Read a two-unit record from stream: deployment ids become gUnits pointers, then trailing bytes. */
void UnitPair_Read(void *dst, s32 stream) {
    u8 Stream_ReadU8(s32);
    void Stream_Read(s32, s32, void *);
    extern u8 gUnits[];
    u8 id;

    id = Stream_ReadU8(stream);
    if (id != 0) {
        *(void **)dst = (id != 0) ? gUnits + (id - 1) * 0x280 : NULL;
    } else {
        *(void **)dst = NULL;
    }
    id = Stream_ReadU8(stream);
    if (id != 0) {
        *(void **)((char *)dst + 0x4) = (id != 0) ? gUnits + (id - 1) * 0x280 : NULL;
    } else {
        *(void **)((char *)dst + 0x4) = NULL;
    }
    *(u8 *)((char *)dst + 0x8) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0x9) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0xA) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0xB) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0xC) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0xD) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0xE) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0xF) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0x10) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0x11) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0x12) = Stream_ReadU8(stream);
    Stream_Read(stream, 1, (void *)((char *)dst + 0x13));
    *(u8 *)((char *)dst + 0x14) = Stream_ReadU8(stream);
    *(u8 *)((char *)dst + 0x15) = Stream_ReadU8(stream);
    Stream_Read(stream, 1, (void *)((char *)dst + 0x16));
}

/* Serialize a unit pair: unit ids then the trailing byte fields. */
void UnitPair_Write(void *pair, s32 stream) {
    void *unit;
    void *unit2;

    unit = *(void **)pair;
    if (unit != NULL) {
        Stream_WriteU8(stream, *(u8 *)((char *)unit + 0x198));
    } else {
        Stream_WriteU8(stream, 0U);
    }
    unit2 = *(void **)((char *)pair + 0x4);
    if (unit2 != NULL) {
        Stream_WriteU8(stream, *(u8 *)((char *)unit2 + 0x198));
    } else {
        Stream_WriteU8(stream, 0U);
    }
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0x8));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0x9));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0xA));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0xB));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0xC));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0xD));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0xE));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0xF));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0x10));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0x11));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0x12));
    Stream_Write(stream, 1, (void *)((char *)pair + 0x13));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0x14));
    Stream_WriteU8(stream, *(u8 *)((char *)pair + 0x15));
    Stream_Write(stream, 1, (void *)((char *)pair + 0x16));
}

s32 fn_80025F0C(s8 arg0, s8 arg1, s32 arg2) {
    void *Process_CreateChild(void *, s32);
    extern u8 lbl_802848DC[];
    extern u8 gUnits[];
    void *obj;
    void *unit;
    u8 id;

    if (gBattleMap.unitMap[arg0 + arg1 * 64] == 0) {
        return 0;
    }
    obj = Process_CreateChild(lbl_802848DC, arg2);
    id = gBattleMap.unitMap[arg0 + arg1 * 64];
    if (id != 0) {
        unit = gUnits + (id - 1) * 0x280;
    } else {
        unit = NULL;
    }
    M2C_FIELD(obj, void **, 0x30) = unit;
    return 1;
}

void fn_80025FA4(void *arg0) {
    M2C_UNK Unit_OnZeroHp(s32);
    Unit_OnZeroHp(M2C_FIELD(arg0, s32 *, 0x30));
}

void fn_80025FC8(void) {
    extern void* gBattle[];
    Battle_Apply(gBattle);
}

void fn_80025FF0(void *arg0) {
    M2C_UNK fn_8019B704(void *, M2C_UNK);
    M2C_UNK Battle_QueueDeathAnim(M2C_UNK *);
    M2C_UNK Battle_ApplyHpDelta(M2C_UNK *, M2C_UNK);
    M2C_UNK Battle_SetupUnit(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK gBattle[];
    Battle_SetupUnit(gBattle, M2C_FIELD(arg0, s32 *, 0x30), -1);
    Battle_QueueDeathAnim(gBattle);
    Battle_ApplyHpDelta(gBattle, -0xA);
    fn_8019B704(arg0, 0);
}

void fn_80026054(s32 arg0) {
    M2C_UNK fn_800BEAC0(s32, M2C_UNK, u8, u8);
    extern u8 gUiContext[];
    extern u8 gBattle[];
    if ((s8)gBattle[0x488] == 0) {
        fn_800BEAC0(arg0, 0, gUiContext[0xF], gUiContext[0x10]);
    }
}

s32 fn_8002609C(s32 arg0)
{
    void fn_801EDA48(s32, s32);
    void fn_801EDA88(s32, s32);
    extern u8 gBattle[];
    u8 *chosen;
    u8 *second;

    chosen = NULL;
    if (*(s32 *)(gBattle + 0x1A0) & 0x40000) {
        chosen = gBattle;
    }
    second = gBattle + 0x2E0;
    if (*(s32 *)(second + 0x1A0) & 0x40000) {
        chosen = second;
    }
    if (chosen == NULL) {
        return 0;
    }
    if (*(s32 *)(gBattle + 0xCAC) & 0x10000000) {
        fn_801EDA48(*(s32 *)(chosen + 0x280), arg0);
    } else {
        fn_801EDA88(*(s32 *)(chosen + 0x280), arg0);
    }
    return 1;
}

void fn_80026130(void) {
    extern u8 gBattle[];
    void Battle_Apply(void *);
    void fn_80050C90(void *);
    u32 tmp;

    Battle_Apply(gBattle);
    if (*(u32 *)(gBattle + 0xcac) & 0x10) {
        tmp = *(u32 *)(gBattle + 0x280);
        if (tmp != 0) {
            fn_80050C90((void *)tmp);
        }
        tmp = *(u32 *)(gBattle + 0x560);
        if (tmp != 0) {
            fn_80050C90((void *)tmp);
        }
    }
}

void fn_80026194(s32 arg0) {
    void Battle_SetupUnit(void *, void *, s32);
    void Battle_QueueDeathAnim(void *);
    void fn_801A48A4(void *, s32);
    void fn_8019BE54(s32, void (*)(void));
    void fn_80026204(void);
    extern u8 gUiContext[];
    extern u8 gBattle[];

    Battle_SetupUnit(gBattle, *(void **)gUiContext, -1);
    Battle_QueueDeathAnim(gBattle);
    fn_801A48A4(gBattle, 0xA);
    fn_8019BE54(arg0, fn_80026204);
}

void fn_80026204(void) {
    void TargetList_GetAt(s32 *, s32);
    void *UnitRef_GetUnit(void);
    extern s32 gTargetList[];
    s32 i;
    void *obj;
    s32 flags;

    for (i = 0; i < gTargetList[0]; i++) {
        TargetList_GetAt(gTargetList, i);
        obj = UnitRef_GetUnit();
        flags = *(s32 *)((u8 *)obj + 0x1A0);
        *(s32 *)((u8 *)obj + 0x1A0) = flags & ~1;
    }
}

void fn_8002626C(void) {
    extern u8 gUiContext[];

    struct {
        unsigned int pad : 29;
        unsigned int flags : 3;
    } *bits;

    u8 *ptr;
    u32 *state;

    ptr = *(u8 **)(gUiContext + 4);

    bits = (void *)(ptr + 0x1A2);
    bits->flags = 1;

    state = *(u32 **)gUiContext;
    state[0x1A0 / 4] |= 0x1000;
}

#pragma use_lmw_stmw on
void Event_BlessStartRoundSky(s32 *ctx, s32 parent) {
    /* Bless kind-1: fill target hits with unit MAG, queue death anim, start E_RoundSky. */
    void *Item_GetByIid(void *);
    void fn_8002AD04(s32, void *);
    void *TargetList_GetAt(s32 *, s32);
    s32 Unit_GetMagAtk(s32);
    void fn_8019C0C0(s32, void *);
    void Battle_QueueDeathAnim(void *);
    void Battle_SetupUnit(void *, void *, s32);
    void Event_StartRoundSky(s32);
    extern u8 lbl_80268E40[];
    extern s32 gTargetList[];
    extern u8 gUiContext[];
    extern u8 gBattle[];
    s32 *self;
    s32 other;
    s32 unit;
    u8 b3;
    u8 b2;
    s32 i;
    s32 hitKind;
    void *entry;
    s32 mag;

    self = ctx;
    other = parent;
    unit = *self;
    fn_8002AD04(unit, Item_GetByIid(lbl_80268E40 + 0x1A6));
    i = 0;
    hitKind = 3;
    while (i < gTargetList[0]) {
        entry = TargetList_GetAt(gTargetList, i);
        b3 = ((u8 *)entry)[3];
        b2 = ((u8 *)entry)[2];
        mag = Unit_GetMagAtk(*self);
        ((u8 *)entry)[0] = hitKind;
        i += 1;
        ((u8 *)entry)[1] = (u8)mag;
        ((u8 *)entry)[2] = b2;
        ((u8 *)entry)[3] = b3;
    }
    Battle_SetupUnit(gBattle, *(void **)gUiContext, -1);
    Battle_QueueDeathAnim(gBattle);
    fn_8019C0C0(other, Event_StartRoundSky);
}
#pragma use_lmw_stmw reset
extern u8 E_RoundSky_script[16];
void Event_StartRoundSky(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 E_RoundSky_script[16];
    Process_CreateChild(E_RoundSky_script, arg0);
}

void fn_800263A0(void *arg0) {
 void Battle_SetupUnit(void *, void *, s32);
 void Battle_QueueDeathAnim(void *);
 void *TargetList_GetAt(s32 *, s32);
 void *UnitRef_GetUnit(void);
 void Battle_ApplyHpDelta(void *, u8);
 void Battle_Apply(void *);
 void fn_80033418(void *);
 void fn_8019C00C(void *,s32);
 void Process_Goto(void *,s32);
 extern s32 gTargetList[];
 extern u8 gUiContext[],gBattle[];
 s32 idx;
 void *obj;
 u8 *entry;
 s32 *p=gTargetList;
 idx=*(s32*)((u8*)arg0+0x60);
 if(idx==*p) {
 Battle_SetupUnit(gBattle,*(void**)gUiContext,-1);
 Battle_QueueDeathAnim(gBattle);
 } else {
 TargetList_GetAt(p,idx);
 obj=UnitRef_GetUnit();
 entry=TargetList_GetAt(gTargetList,idx);
 Battle_SetupUnit(gBattle,obj,-1);
 Battle_QueueDeathAnim(gBattle);
 if((s8)entry[1]!=0) Battle_ApplyHpDelta(gBattle,entry[1]);
 Battle_Apply(gBattle);
 fn_80033418(gBattle+0x8a0);
 fn_8019C00C(arg0,0);
 ++*(s32*)((u8*)arg0+0x60);
 Process_Goto(arg0,0);
 }
}

void fn_800264BC(s32 *arg0, s32 arg1) {
    void *Item_GetByIid(void *);
    void fn_8002AB9C(s32, void *);
    void fn_8019C110(s32, void *);
    void Battle_QueueDeathAnim(void *);
    void Battle_SetupUnit(void *, void *, s32);
    extern u8 lbl_80268E40[];
    extern u8 gUiContext[];
    extern u8 gBattle[];
    void fn_80026544(void);

    s32 temp_r31;

    temp_r31 = *arg0;
    fn_8002AB9C(temp_r31, Item_GetByIid(lbl_80268E40 + 0x1AF));
    Battle_SetupUnit(gBattle, *(void **)gUiContext, -1);
    Battle_QueueDeathAnim(gBattle);
    fn_8019C110(arg1, fn_80026544);
}

extern u8 lbl_802847C8[16];
void fn_80026544(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 lbl_802847C8[16];
    Process_CreateChild(lbl_802847C8, arg0);
}

void fn_80026570(void *arg0) {
    void Battle_SetupUnit(void *, void *, s32);
    void Battle_QueueDeathAnim(void *);
    void *TargetList_GetAt(s32 *, s32);
    void *UnitRef_GetUnit(void);
    void fn_8019C070(void *, void (*)(void));
    void Process_Goto(void *, s32);
    void fn_8002662C(void);
    extern s32 gTargetList[];
    extern u8 gUiContext[];
    extern u8 gBattle[];
    s32 *p;
    s32 idx;
    void *obj;

    p = gTargetList;
    idx = *(s32 *)((u8 *)arg0 + 0x60);
    if (idx == *p) {
        Battle_SetupUnit(gBattle, *(void **)gUiContext, -1);
        Battle_QueueDeathAnim(gBattle);
        return;
    }
    TargetList_GetAt(p, idx);
    obj = UnitRef_GetUnit();
    Battle_SetupUnit(gBattle, obj, -1);
    Battle_QueueDeathAnim(gBattle);
    fn_8019C070(arg0, fn_8002662C);
    *(s32 *)((u8 *)arg0 + 0x60) = *(s32 *)((u8 *)arg0 + 0x60) + 1;
    Process_Goto(arg0, 0);
}

void fn_8002662C(void) {
    extern u8 gBattle[];

    fn_80104480(gBattle + 0x1A4);
    fn_80104480(*(u8 **)(gBattle + 0x280) + 0x1A4);
}

void fn_8002666C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}

#pragma global_optimizer off
void fn_80026678(void *arg0) {
    void Unit_RemoveItem(s32, u8);
    void fn_80094ABC(s32, void *);
    void Battle_Apply(void *);
    extern u8 gUiContext[];
    extern u8 gBattle[];
    struct { u8 hi:1; u8 flag:1; u8 lo:6; } *bf;
    s32 zero;
    void *temp_r4;
    s32 a0;
    s32 temp_r31;

    zero = 0;
    temp_r4 = *(void **)((u8 *)arg0 + 0x54);
    bf = (void *)((u8 *)temp_r4 + 5);
    a0 = *(s32 *)(gUiContext + zero);
    temp_r31 = *(s32 *)(gUiContext + 4);
    bf->flag = zero;
    fn_80094ABC(a0, temp_r4);
    Unit_RemoveItem(temp_r31, gUiContext[0xA]);
    Battle_Apply(gBattle);
}
#pragma global_optimizer on
void fn_800266E4(s32 arg0) {
    extern void *gUiContext[];
    extern u8 gBattle[];
    void fn_80034A8C(void *, void *, s32, s32, s32);

    fn_80034A8C(gBattle, gUiContext[0], 0xA, arg0, 1);
}

#pragma opt_common_subs off
void fn_80026724(void *arg0) {
    void fn_80091518(void *, void *, void *);
    void fn_800915E8(void *, void *, void *);
    extern u8 gUiContext[];
    void *ctx;
    void *param;
    void *node;

    ctx = *(void **)gUiContext;
    param = *(void **)((u8 *)arg0 + 0x54);
    node = *(void **)((u8 *)ctx + 0x190);
    if (*(u8 *)((u8 *)node + 8) != 1) {
        fn_800915E8(param, arg0, ctx);
    } else {
        fn_80091518(param, arg0, ctx);
    }
}
#pragma opt_common_subs reset
void fn_80026770(void *arg0,u8 *arg1) {
void fn_8001EDA0(char *,void *);
u8 value=*arg1;
char *base=(char *)arg0;
char *field=base+0x13;
*field=value;
fn_8001EDA0(field,base);
}

void fn_800267A0(s32 arg0) {
    void fn_8001C7F0(s32, s32, s32);
    s32 *Unit_GetItemSlot(s32, s32);
    extern struct {
        s32 unk0;
        s32 unk4;
        u8 unk8;
        u8 unk9;
        s8 unkA;
        u8 pad[0x18 - 0xB];
    } gUiContext;
    fn_8001C7F0(gUiContext.unk0, *Unit_GetItemSlot(gUiContext.unk0, gUiContext.unkA), arg0);
}

void fn_800267F8(s32 arg0) {
    void fn_8001C7F0(s32, s32, s32);
    s32 *Unit_GetItemSlot(s32, s32);
    extern struct {
        s32 unk0;
        s32 unk4;
        u8 unk8;
        u8 unk9;
        s8 unkA;
        u8 pad[0x18 - 0xB];
    } gUiContext;
    fn_8001C7F0(gUiContext.unk0, *Unit_GetItemSlot(gUiContext.unk0, gUiContext.unkA), arg0);
}

void fn_80026850(s32 arg0) {
    void fn_800913D4(s32, s32, s32);
    s32 *Unit_GetItemSlot(s32, s32);
    extern struct {
        s32 unk0;
        s32 unk4;
        u8 unk8;
        u8 unk9;
        s8 unkA;
        u8 pad[0x18 - 0xB];
    } gUiContext;

    fn_800913D4((s32)Unit_GetItemSlot(gUiContext.unk0, gUiContext.unkA), arg0, gUiContext.unk0);
}

#pragma push
#pragma optimization_level 3
s32 fn_800268A8(s32 arg0) {
    void *fn_8003DDF8(void *, u8 *, u8 *, void *, u8);
    void Unit_SeparateRescue(void *, u8, u8);
    void fn_80183C6C(void *, s8, s8, s8, s8, s32);
    void *Battle_GetOpponent(void *);
    void *Battle_GetActiveCombatant(void *);
    extern M2C_UNK gBattle[];
    u8 sp9;
    u8 sp8;
    u8 temp_r7;
    void *temp_r30;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    s32 idx2;
    s32 idx1;

    temp_r3 = Battle_GetActiveCombatant(gBattle);
    if (temp_r3 == 0) {
        return 0;
    }
    if (!(M2C_FIELD(temp_r3, s32 *, 0x1A0) & 2)) {
        return 0;
    }
    temp_r3_2 = Battle_GetOpponent(gBattle);
    temp_r7 = M2C_FIELD(temp_r3_2, u8 *, 0x198);
    idx1 = (s8) M2C_FIELD(temp_r3_2, u8 *, 0x19E);
    idx2 = (s8) M2C_FIELD(temp_r3_2, u8 *, 0x19F);
    gBattleMap.unitMap[idx1 + (idx2 << 6)] = temp_r7;
    temp_r30 = M2C_FIELD(temp_r3, void **, 0x280);
    fn_8003DDF8(temp_r30, &sp9, &sp8, &gBattleMap, temp_r7);
    temp_r3_3 = M2C_FIELD(temp_r30, void **, 0x194);
    fn_80183C6C(temp_r3_3, (s8) M2C_FIELD(temp_r3_3, u8 *, 0x19E), (s8) M2C_FIELD(temp_r3_3, u8 *, 0x19F), (s8) sp9, (s8) sp8, arg0);
    Unit_SeparateRescue(temp_r30, sp9, sp8);
    return 1;
}
#pragma pop
void fn_80026994(void) {
    void Unit_ApplyTransform(void *);
    extern u8 gUiContext[];
    Unit_ApplyTransform(*(void **)(gUiContext + 4));
}

s32 fn_800269C0(s32 arg0)
{
    u8 Unit_TickTransformGaugeSlow(void *);
    void fn_80183BE4(void *, s32);
    extern u8 gUiContext[];
    extern u8 gBattle[];
    void *temp_r31;

    if (*(u32 *)(gBattle + 0xCAC) & 0x100) {
        return 0;
    }
    temp_r31 = *(void **)(gUiContext + 4);
    if ((s8)*(u8 *)((u8 *)temp_r31 + 0x1A8) == 0) {
        return 0;
    }
    if (Unit_TickTransformGaugeSlow(temp_r31) == 0) {
        return 0;
    }
    fn_80183BE4(temp_r31, arg0);
    return 1;
}

void fn_80026A54(void) {
    void Unit_ApplyTransform(void *);
    extern u8 gUiContext[24];
    Unit_ApplyTransform(*(void **)gUiContext);
}

s32 fn_80026A80(s32 arg0) {
    u8 Unit_TickTransformGaugeSlow(void *);
    void fn_80183BE4(void *, s32);
    extern u8 gUiContext[];
    void *temp_r31;

    temp_r31 = *(void **)gUiContext;
    if ((s8)*(u8 *)((u8 *)temp_r31 + 0x1A8) == 0) {
        return 0;
    }
    if (Unit_TickTransformGaugeSlow(temp_r31) == 0) {
        return 0;
    }
    fn_80183BE4(temp_r31, arg0);
    return 1;
}

/* If a living player combatant has weapon-help flagged, open its weapon-kind help; else 0. */
s32 Battle_TryShowWeaponHelp(s32 parent) {
    extern u16 gBattle[];
    u8 *left;
    u8 *right;
    u8 *bu;
    s32 wpnType;
    void *item;

    bu = NULL;
    left = (u8 *)gBattle;
    right = left + 0x2E0;

    if (*(u8 *)((u8 *)(*(void **)(left + 0x190)) + 8) == 0 && *(u8 *)(left + 0x2C6) != 0) {
        bu = left;
    }
    if ((*(u32 *)((u8 *)gBattle + 0xCAC) & 1) == 0 && *(u8 *)((u8 *)(*(void **)(right + 0x190)) + 8) == 0 && *(u8 *)(right + 0x2C6) != 0) {
        bu = right;
    }
    if (bu == NULL) {
        return 0;
    }
    if ((s8)*(u8 *)(bu + 0x1A8) == 0) {
        return 0;
    }
    item = *(void **)(bu + 0x28C);
    if (item != NULL) {
        wpnType = *(u8 *)((u8 *)item + 0x12);
    } else {
        wpnType = 0xC;
    }
    Ui_OpenWeaponKindHelp((s8)(u8)wpnType, parent, -1, -1, -1);
    return 1;
}

s32 fn_80026BD0(s32 arg0) {
 extern u8 gBattle[],lbl_80268E40[];
 void *UnitRef_GetName(void *);
 s32 fn_8001D070(void *,s32);
 void fn_80231E74(char *,s32,void *,...);
 void fn_8000D864(s32,void *);
 void *fn_8000D910(void *,u8);
 void Ui_OpenHelpPopup(void *,void *,s32,s32);
 u8 Status_Test(void *,s32);
 char buffer[128];
 u8 *unit;
 s32 parent=arg0;
 u8 *ref;
 u8 kind;
 u8 *item;
 u8 *left=gBattle;
 u8 *right=left+0x2e0;
 unit=0;
 if((*(u8**)(left+0x190))[8]==0) unit=left;
 if((*(u32*)(gBattle+0xcac)&5)==0 && (*(u8**)(right+0x190))[8]==0) unit=right;
 if(unit==0 || *(s8*)(unit+0x1a8)==0 || unit[0x2c7]==0) return 0;
 ref=unit+0x28c;
 if(ref==0 || (item=*(u8**)ref)==0) return 0;
 if(item!=0) kind=item[0x15]; else kind=0;
 fn_80231E74(buffer,0x80,lbl_80268E40+0x1ea,fn_8001D070(ref,1),UnitRef_GetName(ref),kind+0x60);
 fn_8000D864(0,buffer);
 Ui_OpenHelpPopup(fn_8000D910(lbl_80268E40+0x1f5,Status_Test(unit+0x1bc,1)),lbl_80268E40+0x200,parent,0);
 return 1;
}

/* If the opponent is a player unit, offer the active combatant's droppable item. */
s32 Battle_TryOfferDroppableItem(s32 parent) {
    void Item_Destroy(void *, s32);
    void Item_Clone(void *, void *);
    void *Unit_GetItemSlot(s32, s32);
    void Unit_OfferItem(s32, void *, s32);
    void *Battle_GetOpponent(void *);
    s32 Battle_GetActiveCombatant(void *);
    extern u8 gBattle[];
    u8 item[8];
    s32 combatant;
    s32 i;
    void *opponent;
    void *slot;
    void *person;

    if (*(u32 *)(gBattle + 0xCAC) & 0x100) {
        return 0;
    }
    opponent = Battle_GetOpponent(gBattle);
    if (opponent == NULL) {
        return 0;
    }
    person = *(void **)((u8 *)opponent + 0x190);
    if (*(u8 *)((u8 *)person + 8) != 0) {
        return 0;
    }
    combatant = Battle_GetActiveCombatant(gBattle);
    for (i = 0; i < 8; i++) {
        slot = Unit_GetItemSlot(combatant, i);
        if (slot != NULL && *(u32 *)slot != 0 && ((*(u8 *)((u8 *)slot + 5) >> 6) & 1)) {
            Item_Clone(item, slot);
            Unit_OfferItem(*(s32 *)((u8 *)opponent + 0x280), item, parent);
            Item_Destroy(item, -1);
            return 1;
        }
    }
    return 0;
}

void fn_80026E2C(s32 arg0) {
    void fn_8012AA90(s16, s16, s32);
    extern u8 gUiContext[];
    typedef struct {
        u8 pad : 5;
        u8 flags : 3;
    } Bits;
    u8 *base;
    s8 *ptr;
    Bits *bits;

    base = gUiContext;
    ptr = *(s8 **)(base + 4);
    fn_8012AA90(ptr[0x19E], ptr[0x19F], arg0);
    ptr = *(s8 **)(base + 4);
    bits = (Bits *)(ptr + 0x1A5);
    bits->flags = 1;
}

void fn_80026E88(s32 arg0) {
    void Unit_SeparateRescue(void *, u8, u8);
    void fn_80183D7C(void *, s32, s16, s16, s32);
    extern u8 gUiContext[];
    u8 *ctx;
    s8 *sctx;
    void *unit;
    s32 saved;
    u8 b0;
    u8 b1;

    ctx = gUiContext;
    sctx = (s8 *)gUiContext;
    unit = *(void **)ctx;
    b0 = ctx[0xF];
    saved = *(s32 *)((u8 *)unit + 0x194);
    b1 = ctx[0x10];
    *(s32 *)(ctx + 4) = saved;
    Unit_SeparateRescue(unit, b0, b1);
    fn_80183D7C(*(void **)gUiContext, saved, sctx[0xF], sctx[0x10], arg0);
}

void fn_80026F08(void)
{
    void fn_80050C90(void *);
    extern u8 gUiContext[];
    typedef struct {
        u8 pad : 5;
        u8 flags : 3;
    } Bits;
    u8 *base;
    Bits *bits;
    u8 flag;

    base = gUiContext;
    fn_80050C90(*(void **)(base + 4));
    flag = 1;
    base[8] = flag;
    bits = (Bits *)(*(u8 **)(base + 4) + 0x1A5);
    bits->flags = flag;
}

void fn_80026F5C(void *arg0) {
    M2C_UNK fn_8012AA90(s32, s32, void *);
    fn_8012AA90((s32) M2C_FIELD(arg0, f32 *, 0x30), (s32) M2C_FIELD(arg0, f32 *, 0x34), arg0);
}

void fn_80026FA0(void *arg0) {
    void Unit_SetMapPos(s32, s32, s32);
    void fn_80183EAC(s32, s32, s32, s32, void *);
    extern u8 gUiContext[];
    u8 *p;
    s32 x;
    s32 y;

    p = gUiContext;
    x = (s32)*(f32 *)((u8 *)arg0 + 0x30);
    y = (s32)*(f32 *)((u8 *)arg0 + 0x34);
    Unit_SetMapPos(*(s32 *)(p + 4), x, y);
    x = (s32)*(f32 *)((u8 *)arg0 + 0x30);
    y = (s32)*(f32 *)((u8 *)arg0 + 0x34);
    fn_80183EAC(*(s32 *)gUiContext, *(s32 *)(p + 4), x, y, arg0);
}

void fn_80027038(u8 *arg0) {
void fn_8003DCDC(void *,void *,u8,u8 *,u8 *);
void Unit_SetMapPos(void *,u8,u8);
void fn_80050C90(void *);
void Unit_Rescue(void *,void *);
void Unit_OnZeroHp(void *);
s8 Unit_GetActiveItemSlot(void *);
void fn_8009542C(void *,u8);
void Battle_Apply(void *);
void Unit_SeparateRescue(void *,u8,u8);
void *TargetList_GetAt(s32 *,s32);
void *UnitRef_GetUnit(void *);
extern u8 gBattle[];
extern s32 gTargetList[];
s32 i;
u8 y,x;
u8 *p=arg0;
switch(p[8]) {
case 0x13: case 0x14:
fn_8003DCDC(*(void **)p,*(void **)(p+4),p[0x14],&x,&y);
Unit_SetMapPos(*(void **)(p+4),x,y);
fn_80050C90(*(void **)(p+4)); break;
case 0x19: Unit_Rescue(*(void **)p,*(void **)(p+4)); break;
case 0xf: case 0x15: Unit_OnZeroHp(*(void **)p); Unit_OnZeroHp(*(void **)(p+4)); break;
case 0x10:
if(Unit_GetActiveItemSlot(*(void **)p)<0 && !gBattle[0x2c7]) fn_8009542C(*(void **)p,p[0xa]);
break;
case 4: if(!(*(u32 *)(gBattle+0xcac)&0x2000)) Battle_Apply(gBattle); break;
case 0x1b: {
void *rescued=*(void **)(*(u8 **)p+0x194);
Unit_SeparateRescue(*(void **)p,p[0xd],p[0xe]);
Unit_Rescue(*(void **)(p+4),rescued); break;
}
case 0x34: {
void *rescued=*(void **)(*(u8 **)(p+4)+0x194);
Unit_SeparateRescue(*(void **)(p+4),p[0xf],p[0x10]);
Unit_Rescue(*(void **)p,rescued); break;
}
case 0x12:
for(i=0;i<gTargetList[0];i++) {
u8 *unit=UnitRef_GetUnit(TargetList_GetAt(gTargetList,i));
*(u32 *)(unit+0x1a0)&=~1;
}
Battle_Apply(gBattle); break;
}
}

#pragma opt_propagation off
#pragma opt_lifetimes off
#pragma use_lmw_stmw on
s32 fn_800271C8(void *arg0, void *proc) {
    void *Process_CreateChild(void *, void *);
    u8 Status_Test(void *, s32);
    s8 Unit_GetCarryWtLimit(void *);
    u8 Rand_Chance(s32);
    void fn_8003DCDC(void *, void *, s32, u8 *, u8 *);
    void *MapObjEvent_Find(void *, u8, u8, s32);
    void fn_80183EAC(void *, void *, s32, s32, void *);
    void fn_80183DEC(void *, void *, void *);
    void Battle_SetupPair(void *, void *, void *);
    void Battle_Execute(void *, u8);
    void Battle_CalcHits(void *);
    void fn_80033418(void *);
    void fn_801A73E4(void *, void *, void *);
    void fn_801A5008(void *);
    void *Unit_GetItemSlot(void *, s32);
    void fn_8001C7F0(void *, void *, void *);
    void fn_800BEAC0(void *, u8, u8, u8);
    u8 fn_800BE968(s32, u8, u8);
    void fn_8014D268(void *, s32);
    void *Item_GetByIid(void *);
    void fn_80184750(void *, u8, s32, void *);
    void fn_800BF32C(void *);
    void Unit_SeparateRescue(void *, u8, u8);
    void fn_80183D7C(void *, void *, s32, s32, void *);
    void *fn_80053AE8(void *);
    void Ui_PlaySeCue(void *, s32);
    void Effect_SetPos(void *, f32, f32, f32);
    void fn_8012AA90(s32, s32, void *);
    void Item_Init(void *);
    void Item_Destroy(void *, s32);
    void *Item_Get(u8);
    void UnitRef_Set(void *, void *);
    void fn_801A6FB4(void *, void *, void *);
    void fn_801A7528(void *, void *);
    void fn_800AD64C(void *);
    s32 Abs(s32);
    void Item_SetByName(void *, void *);
    s32 fn_800AA288(s32);
    void Dispos_Apply(void *, void *, s32);
    void fn_8002AB9C(void *, void *);
    void fn_8002AD04(void *, void *);
    void *TargetList_GetAt(s32 *, s32);
    s32 Unit_GetMagAtk(void *);
    void fn_8019C110(void *, void (*)(s32));
    void fn_8019C0C0(void *, void (*)(s32));
    void fn_8019BD8C(void *, void (*)(void));
    void fn_80026544(s32);
    void Event_StartRoundSky(s32);
    void fn_8002626C(void);
    s32 fn_80110030(void *);
    void fn_80129CA8(s32, s32, u8, s32, s32, void *);
    void fn_80025F0C(void);
    extern u8 lbl_80284668[];
    extern u8 gBattle[];
    extern u8 gUiContext[];
    extern u8 gMapObjEventList[];
    extern u8 gBattleState[];
    extern u8 lbl_80268E40[];
    extern f64 lbl_80368DD0;
    void fn_80029C08(void *);
    void Battle_SetupUnit(void *,void *,s32);
    void Battle_QueueDeathAnim(void *);
    void fn_8002F728(void *);
    void fn_8002F6E8(void *,u8,u8,u8,s32);
    void fn_8019C160(void *,void (*)(void *));
    void fn_80026194(void *);
    extern s32 gTargetList[];
    typedef struct { u8 pad : 5; u8 flags : 3; } Bits;
    void *Res_GetByName(void *);
    void fn_8011D908(void *,void *);
    u8 *BattleState_GetFactionInfo(void *,s32);
    f64 conv;
    u8 item[16];
    u8 *base;
    u8 *p;
    u8 *child;
    void *event;
    u8 *unit;
    void *mapEv;
    s32 dx, dy;
    u8 idx;
    void *found;
    s32 i;
    void *entry;
    u8 b3, b2;
    s32 mag;
    u8 hitKind;
    u8 *name;
    u8 faction, fx, fy;
    u8 *info;
    u8 y13, x13, y14, x14;
    u8 *a, *b;
    s32 dir, opposite;
    u8 ax, bx, ay, by;
    u8 vx, vy;
    Bits *bits;
    u8 flag;
    void *saved_effect;
    void *saved_unit;
    s32 distance;

    base = lbl_80284668;
    p = arg0;
    conv = lbl_80368DD0;
    switch (p[8]) {
    case 0x24:
        saved_unit = *(void **)gUiContext;
        saved_effect = fn_80053AE8(lbl_80268E40 + 0x1b8);
        Ui_PlaySeCue(lbl_80268E40 + 0x1c4, 100);
        Effect_SetPos(saved_effect, *(f32 *)((u8 *)saved_unit + 4), *(f32 *)((u8 *)saved_unit + 8), *(f32 *)((u8 *)saved_unit + 12));
        break;
    case 0x1c:
        MapObjEvent_Find(gMapObjEventList, p[0xd], p[0xe], 9);
        fn_8012AA90((s8)p[0xd], (s8)p[0xe], proc);
        flag = 1;
        bits = (Bits *)(*(u8 **)gUiContext + 0x1a5);
        bits->flags = flag;
        break;
    case 0x13:
        distance = 1;
        if (Status_Test(*(u8 **)(p + 4) + 0x1bc, 0x11) &&
            Rand_Chance((s8)Unit_GetCarryWtLimit(*(void **)(p + 4)))) {
            distance = 0;
            p[0x14] = distance;
        }
        if (!Status_Test(*(u8 **)(p + 4) + 0x1bc, 4)) {
            if (distance >= 1) {
                fn_8003DCDC(*(void **)p, *(void **)(p + 4), 1, &x13, &y13);
                if (MapObjEvent_Find(gMapObjEventList, x13, y13, 9))
                    goto blocked;
            }
            if (distance >= 2) {
                fn_8003DCDC(*(void **)p, *(void **)(p + 4), 2, &x13, &y13);
                if (MapObjEvent_Find(gMapObjEventList, x13, y13, 9))
                    goto blocked;
            }
        }
        fn_8003DCDC(*(void **)p, *(void **)(p + 4), distance, &x13, &y13);
        fn_80183EAC(*(void **)p, *(void **)(p + 4), (s8)x13, (s8)y13, proc);
        break;
    blocked:
        child = Process_CreateChild(base + 0x8c, proc);
        *(f32 *)(child + 0x30) = (s8)x13;
        *(f32 *)(child + 0x34) = (s8)y13;
        break;
    case 0x14:
        distance = 2;
        if (Status_Test(*(u8 **)(p + 4) + 0x1bc, 0x11) &&
            Rand_Chance((s8)Unit_GetCarryWtLimit(*(void **)(p + 4)))) {
            distance = 0;
            p[0x14] = distance;
        }
        if (!Status_Test(*(u8 **)(p + 4) + 0x1bc, 4)) {
            if (distance >= 1) {
                fn_8003DCDC(*(void **)p, *(void **)(p + 4), 1, &x14, &y14);
                if (MapObjEvent_Find(gMapObjEventList, x14, y14, 9))
                    goto blocked2;
            }
            if (distance >= 2) {
                fn_8003DCDC(*(void **)p, *(void **)(p + 4), 2, &x14, &y14);
                if (MapObjEvent_Find(gMapObjEventList, x14, y14, 9))
                    goto blocked2;
            }
        }
        fn_8003DCDC(*(void **)p, *(void **)(p + 4), distance, &x14, &y14);
        fn_80183EAC(*(void **)p, *(void **)(p + 4), (s8)x14, (s8)y14, proc);
        break;
    blocked2:
        child = Process_CreateChild(base + 0x8c, proc);
        *(f32 *)(child + 0x30) = (s8)x14;
        *(f32 *)(child + 0x34) = (s8)y14;
        break;
    case 0x19:
        fn_80183DEC(*(void **)p, *(void **)(p + 4), proc);
        break;
    case 0x1a:
        switch (((u8 *)&gBattleMap)[(s8)gUiContext[0xf] + ((s8)gUiContext[0x10] << 6) + 0x300d]) {
        case 1:
            p[8] = 0x24;
            saved_unit = *(void **)gUiContext;
            saved_effect = fn_80053AE8(lbl_80268E40 + 0x1b8);
            Ui_PlaySeCue(lbl_80268E40 + 0x1c4, 100);
            Effect_SetPos(saved_effect, *(f32 *)((u8 *)saved_unit + 4), *(f32 *)((u8 *)saved_unit + 8), *(f32 *)((u8 *)saved_unit + 12));
            break;
        case 2:
            Process_CreateChild(base + 0xbc, proc);
            break;
        default:
            event = *(void **)(*(u8 **)p + 0x194);
            Unit_SeparateRescue(*(void **)p, p[0xf], p[0x10]);
            fn_80183D7C(*(void **)p, event, *(s8 *)(p+0xf), *(s8 *)(p+0x10), proc);
            break;
        }
        break;
    case 0xf:
    case 0x15:
        Battle_SetupPair(gBattle, *(void **)p, *(void **)(p + 4));
        Battle_Execute(gBattle, p[8]);
        Battle_CalcHits(gBattle);
        fn_80033418(gBattle + 0x8a0);
        Process_CreateChild(base + 0x1a8, proc);
        break;
    case 0x20: case 0x21: case 0x22: case 0x23: case 0x25: case 0x26: case 0x27: case 0x28:
    case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: case 0x30:
        mapEv = MapObjEvent_Find(gMapObjEventList, p[0xf], p[0x10], 4);
        fn_801A73E4(gBattle, *(void **)p, mapEv);
        fn_801A5008(gBattle);
        fn_80033418(gBattle + 0x8a0);
        Process_CreateChild(base + 0x230, proc);
        break;
    case 0x31:
    case 0x34:
        mapEv = MapObjEvent_Find(gMapObjEventList, gUiContext[0xd], gUiContext[0xe], 7);
        ((u8 *)mapEv)[5] = ((u8 *)mapEv)[5] - 1;
        Item_Init(item);
        UnitRef_Set(item, Item_Get(((u8 *)mapEv)[4]));
        if (p[8] == 0x31) {
            fn_801A6FB4(gBattle, *(void **)p, item);
            { u8 x0=p[0xd], x1=p[0xf];
            dy = Abs(*(s8 *)(p+0x10) - (s8)p[0xe]);
            dx = Abs((s8)x1 - (s8)x0); }
            *(s32 *)(gBattle + 0xca8) = dx + dy;
            fn_800AD64C(proc);
            Item_Destroy(item, -1);
        } else {
            Battle_SetupPair(gBattle, *(void **)p, *(void **)(p + 4));
            fn_801A7528(gBattle, item);
            Battle_Execute(gBattle, p[8]);
            Battle_CalcHits(gBattle);
            fn_80033418(gBattle + 0x8a0);
            Process_CreateChild(base + 0x1a8, proc);
            Item_Destroy(item, -1);
        }
        break;
    case 0x10:
        Process_CreateChild(base + 0xf8, proc);
        break;
    case 5:
        Process_CreateChild(base + 0xe0, proc);
        gUiContext[8] = 4;
        break;
    case 4:
        fn_8001C7F0(*(void **)p, *(void **)Unit_GetItemSlot(*(void **)p, *(s8 *)(p+0xa)), proc);
        break;
    case 7:
        a = *(u8 **)p;
        b = *(u8 **)(p + 4);
        ax=a[0x19e]; bx=b[0x19e]; ay=a[0x19f]; by=b[0x19f];
        if ((s8)ax < (s8)bx) dir = 2;
        else if ((s8)ax > (s8)bx) dir = 1;
        else if ((s8)ay < (s8)by) dir = 4;
        else if ((s8)ay > (s8)by) dir = 8;
        else dir = 16;
        dir = (u8)dir;
        fn_80184750(a, dir, 8, proc);
        switch (dir) {
        case 1: opposite = 2; break;
        case 2: opposite = 1; break;
        case 4: opposite = 8; break;
        case 8: opposite = 4; break;
        default: opposite = 16; break;
        }
        fn_80184750(*(void **)(p + 4), opposite, 8, proc);
        fn_800BF32C(proc);
        break;
    case 0x11:
        event = Unit_GetItemSlot(*(void **)(gUiContext + 4), (s8)gUiContext[0xa]);
        child = Process_CreateChild(base + 0x130, proc);
        *(void **)(child + 0x54) = event;
        break;
    case 0x16:
        idx = gBattleState[0x50];
        gBattleState[0x50] = idx + 1;
        found = (void *)fn_800AA288(idx);
        if (found == 0) {
            found = (void *)fn_800AA288(idx - 1);
            if (found == 0) break;
            unit = *(u8 **)gUiContext;
            gBattleMap.unitMap[(s8)gUiContext[0xd] + ((s8)gUiContext[0xe] << 6)] = unit[0x198];
            Dispos_Apply(found, proc, 0);
        } else {
            saved_unit = *(void **)p;
            fn_8002AB9C(saved_unit, Item_GetByIid(lbl_80268E40 + 0x1af));
            Battle_SetupUnit(gBattle, *(void **)gUiContext, -1);
            Battle_QueueDeathAnim(gBattle);
            fn_8019C110(proc, fn_80026544);
        }
        break;
    case 0x1e:
        saved_unit = *(void **)p;
        fn_8002AD04(saved_unit, Item_GetByIid(lbl_80268E40 + 0x1a6));
        i = 0;
        hitKind = 3;
        while (i < gTargetList[0]) {
            entry = TargetList_GetAt(gTargetList, i);
            b3 = ((u8 *)entry)[3];
            b2 = ((u8 *)entry)[2];
            mag = Unit_GetMagAtk(saved_unit);
            ((u8 *)entry)[0] = hitKind;
            i += 1;
            ((u8 *)entry)[1] = (u8)mag;
            ((u8 *)entry)[2] = b2;
            ((u8 *)entry)[3] = b3;
        }
        Battle_SetupUnit(gBattle, *(void **)gUiContext, -1);
        Battle_QueueDeathAnim(gBattle);
        fn_8019C0C0(proc, Event_StartRoundSky);
        break;
    case 0x17:
        Battle_SetupPair(gBattle, *(void **)p, *(void **)(p + 4));
        Battle_QueueDeathAnim(gBattle);
        fn_8019BD8C(proc, fn_8002626C);
        break;
    case 0x12:
        if (gUiContext[8] == 0x2b) {
            fn_80029C08(*(void **)gUiContext);
            Battle_SetupUnit(gBattle, *(void **)gUiContext, -1);
        } else {
            fn_8002F728(gTargetList);
            unit = *(u8 **)(gUiContext + 4);
            fn_8002F6E8(gTargetList, unit[0x19e], unit[0x19f], unit[0x198], 0);
            Battle_SetupPair(gBattle, *(void **)gUiContext, *(void **)(gUiContext + 4));
        }
        Battle_QueueDeathAnim(gBattle);
        fn_8019C160(proc, fn_80026194);
        break;
    case 0x18:
        *(u32 *)(*(u8 **)p + 0x1a0) |= 0x2000;
        Item_Init(item);
        Item_SetByName(item, lbl_80268E40 + 0x19a);
        Battle_SetupPair(gBattle, *(void **)p, *(void **)(p + 4));
        fn_801A7528(gBattle, item);
        Battle_Execute(gBattle, 0xf);
        Battle_CalcHits(gBattle);
        fn_80033418(gBattle + 0x8a0);
        Process_CreateChild(base + 0x1a8, proc);
        Item_Destroy(item, -1);
        break;
    case 9: case 0xd: case 0xe:
        fn_800BEAC0(proc, p[8], p[0xd], p[0xe]);
        break;
    case 0xa: case 0xb: case 0xc:
        if ((gUiContext[0x13] & 0x10) && gBattleState[0x11] == 0)
            fn_8014D268(gBattleState, *(s32 *)(gBattleState + 0x18) - 50);
        if (fn_800BE968(0xb, p[0xf], p[0x10]))
            gUiContext[8] = 0xb;
        else if (fn_800BE968(0xc, p[0xf], p[0x10]))
            gUiContext[8] = 0xc;
        if ((s8)gUiContext[0xa] < 0) {
            saved_unit = *(void **)p;
            fn_8001C7F0(saved_unit, Item_GetByIid(lbl_80268E40 + 0x1da), proc);
        } else
            fn_8001C7F0(*(void **)p, *(void **)Unit_GetItemSlot(*(void **)p, *(s8 *)(p + 0xa)), proc);
        break;
    case 8:
        vx = gUiContext[0xd];
        vy = gUiContext[0xe];
        mapEv = MapObjEvent_Find(gMapObjEventList, vx, vy, 0xa);
        b3 = ((u8 *)mapEv)[3];
        mag = fn_80110030(mapEv);
        fn_80129CA8((s8)vx, (s8)vy, b3, mag, (s32)fn_80025F0C, proc);
        break;
    case 0x32:
    case 0x33:
        name = 0;
        if (p[8] == 0x32) {
            faction = p[0x14];
            switch (faction) {
            case 2: name = lbl_80268E40 + 0x13d; break;
            case 0: name = lbl_80268E40 + 0x148; break;
            case 3: name = lbl_80268E40 + 0x154; break;
            case 4: name = lbl_80268E40 + 0x160; break;
            }
            fy = p[0x10]; fx = p[0xf];
            info = BattleState_GetFactionInfo(gBattleState, 0);
            info[0] = faction;
            if ((s8)fx >= 0) info[2] = fx;
            if ((s8)fy >= 0) info[3] = fy;
        } else {
            faction = p[0x14];
            switch (faction) {
            case 1: name = lbl_80268E40 + 0x16b; break;
            case 0: name = lbl_80268E40 + 0x177; break;
            case 3: name = lbl_80268E40 + 0x183; break;
            case 4: name = lbl_80268E40 + 0x18f; break;
            }
            fy = p[0x10]; fx = p[0xf];
            info = BattleState_GetFactionInfo(gBattleState, 3);
            info[0] = faction;
            if ((s8)fx >= 0) info[2] = fx;
            if ((s8)fy >= 0) info[3] = fy;
        }
        if (name && Res_GetByName(name))
            fn_8011D908(name, proc);
        break;
    case 0x1b:
        break;
    default:
        return 1;
    }
    return 0;
}
#pragma use_lmw_stmw reset
#pragma opt_lifetimes reset
#pragma opt_propagation reset
void UiCtx_EndMoveSelect(void *arg0, u8 arg1) {
    s8 Unit_GetMov(void);
    void fn_800C1060(s32);
    extern u8 gMapBlendMode;
    u8 t;
    u8 f;
    u8 *p;
    s32 v;

    if ((s8)*(u8 *)((u8 *)arg0 + 0x12) == 0) {
        *(u8 *)((u8 *)arg0 + 9) = *(u8 *)((u8 *)arg0 + 8);
    }
    *(u8 *)((u8 *)arg0 + 0x12) = 0;
    Map_RefreshUnitMap(&gBattleMap);
    f = 1;
    t = (u8)(gMapBlendMode - 1);
    if (((u32)(( ~(t) | f) - ((u32)(f - t) >> 1)) >> 31) == 0) {
        f = 0;
    }
    if (f != 0) {
        fn_800C1060(0);
    }
    if ((s8)*(u8 *)((u8 *)*(void **)arg0 + 0x1A8) != 0) {
        v = Unit_GetMov();
        p = *(u8 **)arg0;
        *(u16 *)(p + 0x22E) = *(u16 *)(p + 0x22E) + (u16)(v - ((u8 *)arg0)[0x11]);
        if (arg1 == 0) {
            p = *(u8 **)arg0;
            *(s32 *)(p + 0x1A0) |= 1;
        }
    }
}

void fn_8002807C(void *arg0) {
    M2C_UNK Unit_SetMapPos(s32, u8, u8);
    M2C_UNK fn_80050C90(s32);
    Unit_SetMapPos(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u8 *, 0xB), M2C_FIELD(arg0, u8 *, 0xC));
    fn_80050C90(M2C_FIELD(arg0, s32 *, 0));
    Map_RefreshUnitMap(&gBattleMap);
}

void fn_800280C8(void *arg0, s32 arg1, s32 arg2) {
    void Unit_SetMapPos(void *, s32, s32);
    void fn_80050C90(void *);
    s16 *costs;

    Unit_SetMapPos(*(void **)arg0, arg1, arg2);
    fn_80050C90(*(void **)arg0);
    *((u8 *)arg0 + 0xD) = (u8)arg1;
    *((u8 *)arg0 + 0xE) = (u8)arg2;
    if ((s8)*((u8 *)arg0 + 0x12) == 0) {
        costs = *(s16 **)((u8 *)&gBattleMap + 0x14190);
        *((u8 *)arg0 + 0x11) = *((u8 *)arg0 + 0x11) - costs[(s8)arg1 + ((s8)arg2 << 6)];
    }
}

void UiCtx_RefreshRangeSelect(void *arg0) {
    void *unit;
    u8 *map;

    unit = *(void **)arg0;
    map = (u8 *)&gBattleMap;
    *((u8 *)arg0 + 0xB) = *((u8 *)unit + 0x19E);
    *((u8 *)arg0 + 0xC) = *((u8 *)unit + 0x19F);
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *((u8 *)arg0 + 8) = 0;
    *((s8 *)arg0 + 0xA) = -1;
    *((s8 *)arg0 + 0xD) = -1;
    *((s8 *)arg0 + 0xE) = -1;
    *((s8 *)arg0 + 0xF) = -1;
    *((s8 *)arg0 + 0x10) = -1;
    *((u8 *)arg0 + 0x14) = 0;
    *((u8 *)arg0 + 0x15) = 0;
    *((u8 *)arg0 + 0x12) = 1;
    *((u8 *)arg0 + 0x16) = 0;
    map[(s8)*((u8 *)arg0 + 0xB) + ((s8)*((u8 *)arg0 + 0xC) << 6) + 0xD] = 0;
}

void Ui_ConfirmUnitAction(void *arg0) {
    void *temp_r3;

    M2C_FIELD(arg0, s8 *, 0x12) = 1;
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r3, s32 *, 0x1A0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 0xFFFFFFFE);
}

s32 Ui_CanConfirmUnitSelect(void *arg0) {
 u8 Status_Test(void *,s32);
 u32 *fn_80037C20(void *);
 u64 *Item_GetFlagsPtr(void *);
 extern u8 gBattleState[];
 u32 *item;
 u8 *unit=*(u8**)arg0;
 if(!Status_Test(unit+0x1bc,3)) {
 item=fn_80037C20(unit);
 if(item==0 || *item==0 || (*Item_GetFlagsPtr(item)&0x400000000ULL)==0) return 0;
 }
 if(*(s8*)((u8*)arg0+0x12)!=0) return 0;
 if(((u8*)arg0)[0x11]==0) return 0;
 switch((s32)((u8*)arg0)[8]) {
 case 1: case 13: case 14: case 36: case 41: case 44: case 45: return 0;
 }
 if(*(s8*)(unit+0x1a8)==0) return 0;
 return (*(u8**)(unit+0x190))[8]==gBattleState[0x11];
}

void UiCtx_BindUnit(void *arg0, void *arg1) {
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(arg1, u8 *, 0x19E);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) M2C_FIELD(arg1, u8 *, 0x19F);
    M2C_FIELD(arg0, s8 *, 0x11) = Unit_GetMov(arg1);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = -1;
    M2C_FIELD(arg0, u8 *, 0xD) = (u8) M2C_FIELD(arg1, u8 *, 0x19E);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) M2C_FIELD(arg1, u8 *, 0x19F);
    M2C_FIELD(arg0, s8 *, 0xF) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
}

#pragma push
#pragma peephole off
void UiCtx_BeginMoveSelect(void *arg0, void *arg1) {
    s8 Unit_GetMov(void *);
    u8 *map;

    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) M2C_FIELD(arg1, u8 *, 0x19E);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) M2C_FIELD(arg1, u8 *, 0x19F);
    M2C_FIELD(arg0, s8 *, 0x11) = Unit_GetMov(arg1);
    map = (u8 *)&gBattleMap;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = -1;
    M2C_FIELD(arg0, s8 *, 0xD) = -1;
    M2C_FIELD(arg0, s8 *, 0xE) = -1;
    M2C_FIELD(arg0, s8 *, 0xF) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, u8 *, 0x14) = 0;
    M2C_FIELD(arg0, u8 *, 0x15) = 0;
    M2C_FIELD(arg0, u8 *, 0x12) = 0;
    M2C_FIELD(arg0, u8 *, 0x16) = 0;
    map[(s8) M2C_FIELD(arg0, u8 *, 0xB) + ((s8) M2C_FIELD(arg0, u8 *, 0xC) << 6) + 0xD] = 0;
}
#pragma pop
void UiCtx_Reset(void *arg0) {
    /* Initialize a struct to 0 with some special values. */
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = -1;
    M2C_FIELD(arg0, s8 *, 0xC) = -1;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = -1;
    M2C_FIELD(arg0, s8 *, 0xD) = -1;
    M2C_FIELD(arg0, s8 *, 0xE) = -1;
    M2C_FIELD(arg0, s8 *, 0xF) = -1;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0x14) = 0;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
}

/* Classify whether a unit can act on the current phase; returns reason code 0-6. */
s32 Unit_GetPhaseActCode(void *unit) {
    extern u8 gBattleState[];
    u8 Allegiance_CompareIds(u8, u8);
    u8 allegiance;

    if (unit == NULL) {
        return 0;
    }
    if ((((u16) M2C_FIELD(unit, u16 *, 0x1A4) >> 7U) & 7) || (M2C_FIELD(unit, u8 *, 0x1A5) & 7)) {
        return 1;
    }
    allegiance = M2C_FIELD(M2C_FIELD(unit, u8 **, 0x190), u8 *, 8);
    if (Allegiance_CompareIds(allegiance, gBattleState[0x11]) == 1) {
        return 2;
    }
    if ((allegiance == 2) && ((gBattleState[0x11] != 2) || (gBattleState[0x16] != 1))) {
        return 3;
    }
    if ((allegiance == 3) && ((gBattleState[0x11] != 3) || (gBattleState[0x17] != 1))) {
        return 4;
    }
    if (M2C_FIELD(unit, u32 *, 0x1A0) & 1) {
        return 5;
    }
    return 6;
}

#pragma global_optimizer off
void UiCtx_GetItemSlot(void *arg0) {
    void Unit_GetItemSlot(void *, s32);
    Unit_GetItemSlot(*(void **)arg0, *(s8 *)((u8 *)arg0 + 0xA));
}
#pragma push
#pragma scheduling on
#pragma use_lmw_stmw off
typedef struct { u8 pad[0xCAC]; u32 flags; } G_80330EAC;
void fn_800285EC(s32 p) {
    extern u8 gBattle[];
    extern u8 lbl_80367707;
    void fn_80098A9C(s32);
    void fn_800D5818(s32);
    if (lbl_80367707 == 0) {
        if ((((G_80330EAC *)gBattle)->flags & 0x80000000) != 0) {
            fn_80098A9C(p);
        } else {
            ((G_80330EAC *)gBattle)->flags |= 0x10000000;
            fn_800D5818(p);
        }
    }
}
#pragma pop
void fn_8002863C(void) {

}

extern u8 lbl_80284668[];
s32 fn_80028640(void) {
    s32 Process_Find(void *);
    s32 v;

    v = Process_Find(lbl_80284668);
    return v != 0;
}

void fn_80028674(void) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
}

void fn_80028694(void) {
    extern u16 lbl_80268E40[];
    Heap_Create(&lbl_80268E40[0x212 / sizeof(u16)], Heap_GetFree(), lbl_80268E40);
}

void fn_800286C8(void *arg0) {
    extern u8 gBattle[];
    void Process_Goto(void *, s32);
    void *Battle_GetActiveCombatant(void *);
    void fn_8004B1B4(s32);
    u32 v;
    void *p;

    v = *(u32 *)(gBattle + 0xcac);
    if ((v & 0x10) && (v & 0x10000000)) {
        Process_Goto(arg0, 0x63);
    }
    p = Battle_GetActiveCombatant(gBattle);
    if (p != 0) {
        fn_8004B1B4(*(s32 *)((u8 *)p + 0x280));
    }
}

#pragma global_optimizer off
void fn_80028724(void) {
    u8 EventFlag_IsSet(void *, void *);
    void fn_80146AF0(void);
    void Fx_FadeIn(void *, s32);
    void fn_8014876C(void *, s32, s32);
    extern u8 gFxChannels[];
    extern u8 gBattleState[];
    extern u8 lbl_80268E40[];
    u8 *battle;
    u8 *msg;
    u8 *channels;

    battle = gBattleState;
    msg = lbl_80268E40;
    channels = gFxChannels;
    if (EventFlag_IsSet(battle + 0xB4, msg + 0x21E) == 0) {
        fn_80146AF0();
        Fx_FadeIn(channels, 0x3E8);
        fn_8014876C(channels, 0x64, 0x3E8);
    }
}
#pragma global_optimizer reset
void fn_80028794(void) {
    void *fn_80145FE8(void);
    void fn_80146B00(void);
    s8 Fx_FindSlotByName(void *);
    void fn_801478D0(s16);
    void fn_80147FA8(s32);
    void fn_801481CC(void *, s32);

    fn_80147FA8(0x3E8);
    fn_801478D0(0x3E8);
    if (Fx_FindSlotByName(fn_80145FE8()) != -1) {
        fn_801481CC(fn_80145FE8(), 0);
    }
    fn_80146B00();
}

void fn_800287E4(void) {
    extern u8 gBattleState[];
    
    BattleState_LoadMap(gBattleState, gBattleState + 0x504);
    fn_8014C798(gBattleState);
    fn_800163F8();
    fn_80016180();
}

void fn_80028824(s32 arg0) {
    extern u16 gBattleState[66];
    fn_8014C718(gBattleState, arg0);
    fn_800162B8();
}

s32 fn_80028854(void) {
    extern u8 gUiContext[];
    return *(s32 *)gUiContext;
}
extern u8 lbl_802EF438[];
#include "common.h"
#include "unit.h"

s32 func_80025338(struct Unit* unit)
{
    return 0;
}
#include "global.h"
#include "ef.h"

extern u8 gBattle[0x1000];
extern u8 lbl_80268E40[];
extern u16 lbl_80368DA0;
extern u16 lbl_80368DA4;
extern u16 lbl_80368DAC;
extern u16 gUiMenuIdentityScale;
extern u32 lbl_8036C410;
extern u32 lbl_8036C414;
