/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"

#include <dolphin/os.h>
extern s32 gSaveDataBase;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);

// From Dolphin SDK's vec.c, handwritten PSVECCrossProduct function
static void PSVECCrossProduct(f32 *a, f32 *b, f32 *out) {
    f32 temp[4];
    temp[0] = a[1] * b[2] - a[2] * b[1];
    temp[1] = a[2] * b[0] - a[0] * b[2];
    temp[2] = a[0] * b[1] - a[1] * b[0];
    temp[3] = 0.0f;
    out[0] = temp[0];
    out[1] = temp[1];
    out[2] = temp[2];
    out[3] = temp[3];
}


extern s32 lbl_80368614;
extern void (*lbl_803685E8)(void);
extern void* lbl_80368618;
extern void* lbl_8036861C;
extern void* lbl_80368620;
extern void* lbl_80368624;
extern void* lbl_80368628;
extern void* lbl_8036862C;
extern void* lbl_80368630;
extern void* lbl_80368634;
extern void* lbl_80368638;
extern void* lbl_8036863C;
extern void* lbl_80368640;
extern void* lbl_80368644;
extern void* lbl_80368648;
extern void* lbl_8036864C;
extern void* lbl_80368650;
extern void* lbl_80368654;

u8 ErrorCode2Num(s32);

extern u8 lbl_802820B8[];
extern u32 lbl_80368448;

#pragma force_active on
static u32 sFaceResAddrs[8];
static u32 sFaceResIds[8];
static s16 lbl_80339328[8];
static s16 lbl_80339338[8];
#pragma force_active reset

void fn_801FC634(u32 arg0, f32 farg0)
{
    void *Process_Create(void *, u32);
    void fn_8006EEFC(void *, void *);
    extern u8 lbl_8029B5B0[];
    extern char lbl_80281EC8[];
    extern u8 gFallingParticleTex;
    extern f32 gFloatZero;
    extern f32 lbl_8036BAD8;
    void *obj;
    f32 f;

    f = farg0;
    if (arg0 == 0) {
        arg0 = 3;
    }
    obj = Process_Create(lbl_8029B5B0, arg0);
    if (f <= gFloatZero) {
        f = lbl_8036BAD8;
    }
    *(f32 *)((u8 *)obj + 0x44) = f;
    *(s16 *)((u8 *)obj + 0x34) = -2;
    *(s16 *)((u8 *)obj + 0x36) = 0;
    *(u8 *)((u8 *)obj + 0x38) = 0;
    *(u8 *)((u8 *)obj + 0x39) = 0x45;
    *(s16 *)((u8 *)obj + 0x3E) = -6;
    *(s16 *)((u8 *)obj + 0x40) = 0;
    *(u8 *)((u8 *)obj + 0x42) = 0;
    *(u8 *)((u8 *)obj + 0x43) = 0x55;
    fn_8006EEFC(&gFallingParticleTex, lbl_80281EC8 + 0x13);
}

void fn_801FC6E0(u32 arg0, f32 farg0)
{
    void *Process_Create(void *, u32);
    void fn_8006EEFC(void *, void *);
    extern u8 lbl_8029B5B0[];
    extern char lbl_80281EC8[];
    extern u8 gFallingParticleTex;
    extern f32 gFloatZero;
    extern f32 lbl_8036BAD8;
    void *obj;
    f32 f;

    f = farg0;
    if (arg0 == 0) {
        arg0 = 3;
    }
    obj = Process_Create(lbl_8029B5B0, arg0);
    if (f <= gFloatZero) {
        f = lbl_8036BAD8;
    }
    *(f32 *)((u8 *)obj + 0x44) = f;
    *(s16 *)((u8 *)obj + 0x34) = -0x10;
    *(s16 *)((u8 *)obj + 0x36) = 0;
    *(u8 *)((u8 *)obj + 0x38) = 0x10;
    *(u8 *)((u8 *)obj + 0x39) = 0x20;
    *(s16 *)((u8 *)obj + 0x3E) = -0x2c;
    *(s16 *)((u8 *)obj + 0x40) = 0;
    *(u8 *)((u8 *)obj + 0x42) = 0x20;
    *(u8 *)((u8 *)obj + 0x43) = 0x40;
    fn_8006EEFC(&gFallingParticleTex, lbl_80281EC8 + 0x13);
}

void fn_801FC790(void *arg0) {
void Prim2D_Begin(void);
void Prim2D_SetTransform(f32, f32, f32, f32);
void Prim2D_BindTexture(void *, s32, s32);
void Prim2D_PrepareTex(void);
void Prim2D_AddPrim(s32);
void Prim2D_SetRect(f32, f32, f32, f32);
void Prim2D_SetUvRect(f32, f32, f32, f32);
void Prim2D_SetCornerColors(s32 *, s32 *, s32 *, s32 *);
void Prim2D_EmitQuad(void);
void Prim2D_EndPrim(void);
extern void *gFallingParticleTex;
extern f32 gFloatZero, gFloatOne, lbl_8036BAE4, lbl_8036BAE8, lbl_8036BAEC, lbl_8036BAF0;
extern s32 lbl_8036BAC8, lbl_8036BACC, lbl_8036BAD0, lbl_8036BAD4;
extern f64 lbl_8036BAF8;
s32 t3, c3, t2, c2, t1, c1, t0, c0;
f32 z;
s32 i;
u8 *p;
u8 *self;
self = (u8 *)arg0;
p = (u8 *)arg0;
i = 0;
do {
*(s16 *)(p + 0x30) += *(s16 *)(p + 0x34);
*(s16 *)(p + 0x32) += *(s16 *)(p + 0x36);
z = *(f32 *)(self + 0x44) - (f32)i;
Prim2D_Begin();
Prim2D_SetTransform(gFloatZero, gFloatZero, z, gFloatOne);
Prim2D_BindTexture(gFallingParticleTex, 6, 17);
Prim2D_PrepareTex();
Prim2D_AddPrim(3);
Prim2D_SetRect(gFloatZero, gFloatZero, lbl_8036BAE4, lbl_8036BAE8);
Prim2D_SetUvRect((f32)(*(s16 *)(p + 0x30) / 8), (f32)(*(s16 *)(p + 0x32) / 8), lbl_8036BAEC, lbl_8036BAF0);
t3 = lbl_8036BAD4;
*(u8 *)((u8 *)&t3 + 3) = p[0x39];
c3 = t3;
t2 = lbl_8036BAD0;
*(u8 *)((u8 *)&t2 + 3) = p[0x39];
c2 = t2;
t1 = lbl_8036BACC;
*(u8 *)((u8 *)&t1 + 3) = p[0x38];
c1 = t1;
t0 = lbl_8036BAC8;
*(u8 *)((u8 *)&t0 + 3) = p[0x38];
c0 = t0;
Prim2D_SetCornerColors(&c0, &c1, &c2, &c3);
Prim2D_EmitQuad();
Prim2D_EndPrim();
i++;
p += 10;
} while (i < 2);
}

void fn_801FC95C(void) {
    M2C_UNK FileCache_ReleaseSlot(M2C_UNK *);
    extern M2C_UNK gFallingParticleTex;
    FileCache_ReleaseSlot(&gFallingParticleTex);
}

/* Create an extended falling-particle FX process (dual sprites) and load its texture. */
void FallingParticle_CreateEx(u32 parent, f32 scale)
{
    void *Process_Create(void *, u32);
    void fn_8006EEFC(void *, void *);
    extern u8 gFallingParticleExProc[];
    extern char lbl_80281EC8[];
    extern u8 gFallingParticleTex;
    extern f32 gFloatZero;
    extern f32 lbl_8036BB00;
    u8 fe;
    void *proc;
    f32 f;

    f = scale;
    if (parent == 0) {
        parent = 3;
    }
    proc = Process_Create(gFallingParticleExProc, parent);
    if (f <= gFloatZero) {
        f = lbl_8036BB00;
    }
    *(f32 *)((u8 *)proc + 0x48) = f;
    fe = 0xfe;
    *(s8 *)((u8 *)proc + 0x34) = -3;
    *(s8 *)((u8 *)proc + 0x35) = -1;
    *(u8 *)((u8 *)proc + 0x36) = fe;
    *(u8 *)((u8 *)proc + 0x37) = fe;
    *(u8 *)((u8 *)proc + 0x38) = fe;
    *(u8 *)((u8 *)proc + 0x39) = 0x5a;
    *(u8 *)((u8 *)proc + 0x3a) = 1;
    *(s16 *)((u8 *)proc + 0x32) = 0;
    *(s16 *)((u8 *)proc + 0x30) = 0;
    *(s8 *)((u8 *)proc + 0x40) = -6;
    *(s8 *)((u8 *)proc + 0x41) = -2;
    *(u8 *)((u8 *)proc + 0x42) = 0x36;
    *(u8 *)((u8 *)proc + 0x43) = 0x3f;
    *(u8 *)((u8 *)proc + 0x44) = 0x55;
    *(u8 *)((u8 *)proc + 0x45) = 1;
    *(u8 *)((u8 *)proc + 0x46) = 2;
    *(s16 *)((u8 *)proc + 0x3e) = 0;
    *(s16 *)((u8 *)proc + 0x3c) = 0;
    fn_8006EEFC(&gFallingParticleTex, lbl_80281EC8 + 0x23);
}

#pragma push
#pragma optimization_level 4
void fn_801FCA78(void *arg0) {
    void Prim2D_Begin(void);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_BindTexture(s32, s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_SetUvRect(f32, f32, f32, f32);
    void Prim2D_SetColor(s32, s32, s32, s32);
    void Prim2D_EndPrim(void);
    extern s32 gFallingParticleTex;
    extern f32 gFloatZero;
    extern f32 gFloatOne;
    
    extern f32 lbl_8036BAE4;
    extern f32 lbl_8036BB04;
    f32 z;
    s32 i;
    u8 *entry;
    u8 *self;
    s32 tex;

    self = (u8 *)arg0;
    entry = self;
    for (i = 0; i < 2; i++) {
        z = *(f32 *)((unsigned)self + 0x48) - (f32)i;
        Prim2D_Begin();
        Prim2D_SetTransform(gFloatZero, gFloatZero, z, gFloatOne);
        tex = 0;
        switch ((s16)*(u8 *)(entry + 0x3A)) {
        case 0:
            tex = 0x10;
            break;
        case 1:
            tex = 0x20;
            break;
        case 2:
            tex = 0x30;
            break;
        }
        Prim2D_BindTexture(gFallingParticleTex, 0xA, (u16)(tex | 1));
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRect(gFloatZero, gFloatZero, lbl_8036BAE4, lbl_8036BB04);
        Prim2D_SetUvRect((f32)*(s16 *)(entry + 0x30) / 8.0f, (f32)*(s16 *)(entry + 0x32) / 8.0f, lbl_8036BAE4, lbl_8036BB04);
        Prim2D_SetColor(*(u8 *)(entry + 0x36), *(u8 *)(entry + 0x37), *(u8 *)(entry + 0x38), *(u8 *)(entry + 0x39));
        Prim2D_EndPrim();
        *(s16 *)(entry + 0x30) = (*(s16 *)(entry + 0x30) + (s8)*(u8 *)(entry + 0x34)) & 0xFFF;
        *(s16 *)(entry + 0x32) = (*(s16 *)(entry + 0x32) + (s8)*(u8 *)(entry + 0x35)) & 0xFFF;
        entry += 0xC;
    }
}
#pragma pop
void fn_801FCC44(void) {
    M2C_UNK FileCache_ReleaseSlot(M2C_UNK *);
    extern M2C_UNK gFallingParticleTex;
    FileCache_ReleaseSlot(&gFallingParticleTex);
}

void fn_801FCC68(s32 arg0) {
    void *Process_Create(void *, s32);
    void fn_801FCCA0(void);
    extern u8 lbl_8029B574[];

    if (Process_Create(lbl_8029B574, arg0) != NULL) {
        fn_801FCCA0();
    }
}

#pragma use_lmw_stmw on
#pragma push
#pragma optimization_level 4
#pragma opt_strength_reduction off
static inline void *Particle_FindFree(void **base) {
    s32 j;
    s32 offset;
    for (j = 0, offset = 0; j < 1024; j++, offset += 16) {
        if (*(s16 *)((u8 *)*base + offset + 12) == 0)
            return (u8 *)*base + j * 16;
    }
    return NULL;
}
#pragma pop

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
void fn_801FCCA0(void *self) {
    typedef struct { f32 x, y; u8 ang, spd, pad, rnd; s16 life, age; } Part;
    void *Heap_AllocRaw(s32);
    u32 Rand_Next(void);
    f64 fn_802380D0(f32);
    f64 sin(f32);
    f64 fn_80237E90(f32);
    void Prim2D_Begin(void);
    void Prim2D_PrepareTex(void);
    void Prim2D_SetTex(s32, s32);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_SetColor(s32, s32, s32, s32);
    void Prim2D_EndPrim(void);
    extern const f32 gFloatZero;
    extern const f32 gFloatOne;
    extern const f32 lbl_8036BAE4;
    extern const f32 lbl_8036BAE8;
    extern const f32 lbl_8036BAEC;
    extern f64 lbl_8036BAF8;
    extern const f32 lbl_8036BB04;
    extern const f32 lbl_8036BB0C;
    extern const f32 lbl_8036BB10;
    extern const f32 lbl_8036BB14;
    extern const f32 lbl_8036BB18;
    extern const f32 lbl_8036BB1C;
    extern const f32 lbl_8036BB20;
    extern const f32 lbl_8036BB24;
    extern const f32 lbl_8036BB28;
    extern const f32 lbl_8036BB2C;
    extern const f32 lbl_8036BB30;
    extern const f32 lbl_8036BB34;
    extern const f32 lbl_8036BB38;
    Part *parts;
    Part *p;
    s32 i, j, off;
    u32 k, r;
    f32 f23, dx, dy, f22, t;
    s16 life;
    u8 *b;
    u16 zero;

    parts = (Part *)Heap_AllocRaw(0x4000);
    *(void **)((u8 *)self + 0x30) = parts;
    for (k = 0; k < 1024; k++) (*(Part **)((u8 *)self + 0x30))[k].life = 0;
    b = (u8 *)self;
    b[0x48] = 0x35;
    b[0x49] = 0x40;
    *(s16 *)(b + 0x44) = 0;
    *(s16 *)(b + 0x46) = 0;
    b[0x4A] = 0;
    b[0x4B] = 1;
    b[0x4C] = 0xA;
    b[0x4D] = 0x35;
    *(s8 *)(b + 0x4E) = -4;
    b[0x4F] = 9;
    for (i = 0; i < 0x1F4; i++) {
        *(f32 *)(b + 0x3C) = *(f32 *)(b + 0x34);
        *(f32 *)(b + 0x40) = *(f32 *)(b + 0x38);
        *(f32 *)(b + 0x34) = lbl_8036BAE8 * (f32)fn_802380D0(lbl_8036BB0C * (f32)*(s16 *)(b + 0x44)) + lbl_8036BAEC;
        *(f32 *)(b + 0x38) = lbl_8036BB14 * (f32)sin(lbl_8036BB0C * (f32)*(s16 *)(b + 0x46)) + lbl_8036BB10;
        *(s16 *)(b + 0x44) = *(s16 *)(b + 0x44) + (s8)b[0x48];
        *(s16 *)(b + 0x46) = *(s16 *)(b + 0x46) + (s8)b[0x49];
        if (*(s16 *)(b + 0x44) >= 0x4000) {
            *(s16 *)(b + 0x44) = *(s16 *)(b + 0x44) - 0x4000;
        }
        if (*(s16 *)(b + 0x46) >= 0x4000) {
            *(s16 *)(b + 0x46) = *(s16 *)(b + 0x46) - 0x4000;
        }
        dx = *(f32 *)(b + 0x34) - *(f32 *)(b + 0x3C);
        dy = *(f32 *)(b + 0x38) - *(f32 *)(b + 0x40);
        f22 = (f32)fn_80237E90(dy / dx) * lbl_8036BB18;
        if (dx < gFloatZero) {
            f22 += lbl_8036BB1C;
        }
        f23 = f22;
        for (j = 0; j < b[0x4B]; j++) {
            p = Particle_FindFree((void **)(b + 0x30));
            if (p == NULL) break;
            life = (s16)((Rand_Next() % 0xC8) + 0x190);
            r = Rand_Next();
            p->x = *(f32 *)(b + 0x34);
            p->y = *(f32 *)(b + 0x38);
            p->ang = (u8)(s32)f23;
            p->spd = (u8)((s8)b[0x4C] + (r % (s8)b[0x4D]));
            p->rnd = (u8)Rand_Next();
            p->life = life;
            p->age = 0;
        }
        if (b[0x4A] != 0) {
            t = lbl_8036BB20 * f22;
            f22 = (f32)fn_802380D0(t);
            f23 = (f32)sin(t);
            Prim2D_Begin();
            Prim2D_SetTransform(gFloatZero, gFloatZero, lbl_8036BB24, gFloatOne);
            Prim2D_SetTex(0, 0);
            Prim2D_PrepareTex();
            Prim2D_AddPrim(1);
            Prim2D_SetRect(*(f32 *)(b + 0x34) - lbl_8036BB28, *(f32 *)(b + 0x38) - lbl_8036BB28, lbl_8036BB2C, lbl_8036BB2C);
            Prim2D_SetColor(0xFF, 0, 0, 0xFF);
            Prim2D_EndPrim();
            Prim2D_AddPrim(4);
            Prim2D_SetRect(*(f32 *)(b + 0x34), *(f32 *)(b + 0x38), lbl_8036BB30 * f22, lbl_8036BB30 * f23);
            Prim2D_SetColor(0xFF, 0xFF, 0, 0xFF);
            Prim2D_EndPrim();
        }
        for (j = 0; j < 0x400; j++) {
            p = &(*(Part **)(b + 0x30))[j];
            if (p->life != 0) {
                p->age++;
                p->life--;
                t = (f32)fn_802380D0(lbl_8036BB20 * (f32)p->ang);
                dx = (f32)p->spd * t * lbl_8036BB34;
                t = (f32)sin(lbl_8036BB20 * (f32)p->ang);
                dy = (f32)p->spd * t * lbl_8036BB34;
                p->x += dx;
                p->y += dy;
                p->ang = (u8)(p->ang + (s8)((s32)(Rand_Next() % 9) - 4));
                if (p->x < lbl_8036BB38 || p->x > lbl_8036BAE4) p->life = 0;
                if (p->y < lbl_8036BB38 || p->y > lbl_8036BB04) p->life = 0;
            }
        }
    }
}
#pragma pop

#pragma push
#pragma optimization_level 4
#pragma global_optimizer off
#pragma use_lmw_stmw on
#pragma opt_common_subs off
#pragma opt_common_subs on
void fn_801FD3B4(void *arg0) {
    void Prim2D_SetAlpha(u8);
    void Prim2D_SetColor(s32, s32, s32, s32);
    void Prim2D_SetPosCorners(f32, f32, f32, f32);
    void Prim2D_SetUvRect(f32, f32, f32, f32);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_BindTexture(void *, s32, s32);
    void Prim2D_SetTex(s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    u32 Rand_Next(void);
    f64 fn_80237E90(f32);
    f64 fn_802380D0(f32);
    f64 sin(f32);
    extern void *gFallingParticleTex;
    extern const f32 lbl_8036BAD8, gFloatZero, gFloatOne, lbl_8036BAE4;
    extern const f32 lbl_8036BAE8, lbl_8036BAEC, lbl_8036BB04, lbl_8036BB08;
    extern const f32 lbl_8036BB0C, lbl_8036BB10, lbl_8036BB14, lbl_8036BB18;
    extern const f32 lbl_8036BB1C, lbl_8036BB20, lbl_8036BB24, lbl_8036BB28;
    extern const f32 lbl_8036BB2C, lbl_8036BB30, lbl_8036BB34, lbl_8036BB38, gFloatTwo;
    extern const f64 lbl_8036BAF8, lbl_8036BB40;

    f32 ang, dx, life;
    u32 j;
    s32 i;
    void *slot;
    void *base;
    u32 r;
    s16 life16;
    s32 k;

    *(f32 *)((u8 *)arg0 + 0x3C) = *(f32 *)((u8 *)arg0 + 0x34);
    *(f32 *)((u8 *)arg0 + 0x40) = *(f32 *)((u8 *)arg0 + 0x38);
    *(f32 *)((u8 *)arg0 + 0x34) = lbl_8036BAE8 * (f32)fn_802380D0(lbl_8036BB0C * (f32)*(s16 *)((u8 *)arg0 + 0x44)) + lbl_8036BAEC;
    *(f32 *)((u8 *)arg0 + 0x38) = lbl_8036BB14 * (f32)sin(lbl_8036BB0C * (f32)*(s16 *)((u8 *)arg0 + 0x46)) + lbl_8036BB10;
    *(s16 *)((u8 *)arg0 + 0x44) = *(s16 *)((u8 *)arg0 + 0x44) + (s8)*((u8 *)arg0 + 0x48);
    *(s16 *)((u8 *)arg0 + 0x46) = *(s16 *)((u8 *)arg0 + 0x46) + (s8)*((u8 *)arg0 + 0x49);
    if (*(s16 *)((u8 *)arg0 + 0x44) >= 0x4000) {
        *(s16 *)((u8 *)arg0 + 0x44) -= 0x4000;
    }
    if (*(s16 *)((u8 *)arg0 + 0x46) >= 0x4000) {
        *(s16 *)((u8 *)arg0 + 0x46) -= 0x4000;
    }
    dx = *(f32 *)((u8 *)arg0 + 0x34) - *(f32 *)((u8 *)arg0 + 0x3C);
    ang = (f32)fn_80237E90((*(f32 *)((u8 *)arg0 + 0x38) - *(f32 *)((u8 *)arg0 + 0x40)) / dx);
    ang *= lbl_8036BB18;
    if (dx < gFloatZero) {
        ang += lbl_8036BB1C;
    }
    life = ang;
    for (i = 0; i < *((u8 *)arg0 + 0x4B); i++) {
        slot = Particle_FindFree((void **)((u8 *)arg0 + 0x30));
        if (slot == NULL) {
            break;
        }
        r = Rand_Next();
        life16 = (s16)((r % 200) + 0x190);
        r = Rand_Next();
        *(f32 *)slot = *(f32 *)((u8 *)arg0 + 0x34);
        *(f32 *)((u8 *)slot + 4) = *(f32 *)((u8 *)arg0 + 0x38);
        *((u8 *)slot + 8) = (u8)(s32)life;
        *((u8 *)slot + 9) = (u8)((s8)*((u8 *)arg0 + 0x4C) + (r % (s8)*((u8 *)arg0 + 0x4D)));
        *((u8 *)slot + 0xB) = (u8)Rand_Next();
        *(s16 *)((u8 *)slot + 0xC) = life16;
        *(s16 *)((u8 *)slot + 0xE) = 0;
    }
    if (*((u8 *)arg0 + 0x4A) != 0) {
        f32 a = lbl_8036BB20 * ang;
        f32 c = (f32)fn_802380D0(a);
        f32 s = (f32)sin(a);
        Prim2D_Begin();
        Prim2D_SetTransform(gFloatZero, gFloatZero, lbl_8036BB24, gFloatOne);
        Prim2D_SetTex(0, 0);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRect(*(f32 *)((u8 *)arg0 + 0x34) - lbl_8036BB28, *(f32 *)((u8 *)arg0 + 0x38) - lbl_8036BB28, lbl_8036BB2C, lbl_8036BB2C);
        Prim2D_SetColor(0xFF, 0, 0, 0xFF);
        Prim2D_EndPrim();
        Prim2D_AddPrim(4);
        Prim2D_SetRect(*(f32 *)((u8 *)arg0 + 0x34), *(f32 *)((u8 *)arg0 + 0x38), lbl_8036BB30 * c, lbl_8036BB30 * s);
        Prim2D_SetColor(0xFF, 0xFF, 0, 0xFF);
        Prim2D_EndPrim();
    }
    for (k = 0; k < 0x400; k++) {
        void *p = (u8 *)*(void **)((u8 *)arg0 + 0x30) + k * 0x10;
        if (*(s16 *)((u8 *)p + 0xC) != 0) {
            f32 fx, fy;
            if (*(s16 *)((u8 *)p + 0xC) != 0) {
            s16 age;

            *(s16 *)((u8 *)p + 0xE) += 1;
            *(s16 *)((u8 *)p + 0xC) -= 1;
            fx = (f32)fn_802380D0(lbl_8036BB20 * (f32)*((u8 *)p + 8));
            fx = (f32)*((u8 *)p + 9) * fx * lbl_8036BB34;
            fy = (f32)sin(lbl_8036BB20 * (f32)*((u8 *)p + 8));
            *(f32 *)p += fx;
            fy = (f32)*((u8 *)p + 9) * fy * lbl_8036BB34;
            *(f32 *)((u8 *)p + 4) += fy;
            *((u8 *)p + 8) = (u8)(*((u8 *)p + 8) + (s8)((Rand_Next() % 9) - 4));
            if (*(f32 *)p < lbl_8036BB38 || *(f32 *)p > lbl_8036BAE4) {
                *(s16 *)((u8 *)p + 0xC) = 0;
            }
            if (*(f32 *)((u8 *)p + 4) < lbl_8036BB38 || *(f32 *)((u8 *)p + 4) > lbl_8036BB04) {
                *(s16 *)((u8 *)p + 0xC) = 0;
            }
            }
            p = (u8 *)*(void **)((u8 *)arg0 + 0x30) + k * 16;
            if (*(s16 *)((u8 *)p + 0xC) != 0) {
                f32 sz;
                s32 rad;
                s16 a;
                Prim2D_Begin();
                Prim2D_SetTransform(gFloatZero, gFloatZero, lbl_8036BAD8, gFloatOne);
                Prim2D_BindTexture(gFallingParticleTex, 0xA, 0x20);
                Prim2D_PrepareTex();
                Prim2D_AddPrim(1);
                rad = *(s16 *)((u8 *)p + 0xC);
                if ((s32)*((u8 *)p + 9) < rad) {
                    rad = *((u8 *)p + 9);
                }
                sz = (f32)rad * lbl_8036BB08 + gFloatTwo;
                Prim2D_SetPosCorners(*(f32 *)p - sz, *(f32 *)((u8 *)p + 4) - sz, *(f32 *)p + sz, *(f32 *)((u8 *)p + 4) + sz);
                Prim2D_SetUvRect(gFloatZero, gFloatZero, gFloatOne, gFloatOne);
                a = *(s16 *)((u8 *)p + 0xE) - 0x3C;
                if (a > 0xFF) a = 0xFF;
                if (a < 0) a = 0;
                Prim2D_SetAlpha((u8)a);
                Prim2D_EndPrim();
            }
        }
    }
}
#pragma pop

void fn_801FDA08(void *arg0) {
    extern u8 gFallingParticleTex;

    FileCache_ReleaseSlot(&gFallingParticleTex);
    Heap_FreeRaw(*(void **)((u8 *)arg0 + 0x30));
}

extern s32 lbl_803679F0;
void fn_801FDA40(void) {
    void fn_8006EEFC(void *, void *);
    extern u32 gFallingParticleTex;
    extern char lbl_80281EC8[];
    fn_8006EEFC(&gFallingParticleTex, lbl_80281EC8 + 0x13);
}

#pragma global_optimizer off
#pragma use_lmw_stmw on
/* Create a falling-particle controller and fill free process slots with randomized 3-particle procs. */
void FallingParticle_Spawn(void *parent) {
    void *Process_Create(void *, void *);
    s32 Process_CountFree(void);
    u32 Rand_Next(void);
    extern u8 gFallingParticleProc[];
    extern u8 gFallingParticleCtrlProc[];
    extern s32 gFallingParticleVelY;
    extern s32 gFallingParticleVelXCenter;
    extern s32 gFallingParticleVelYCenter;
    extern s32 gFallingParticleVelXRange;
    extern s32 gFallingParticleVelYRange;
    extern u8 gFallingParticleAlphaMin;
    extern u8 gFallingParticleAlphaMax;
    extern f32 gFloatZero;
    extern f32 gFloatTwo;

    s32 slot;
    void *part;
    void *ctrl;
    s32 range;
    s32 temp;
    f32 f0;
    f32 f1;

    ctrl = Process_Create(gFallingParticleCtrlProc, parent);
    if ((s32)ctrl != 0) {
        gFallingParticleVelXCenter = 0x8000;
        f1 = gFloatTwo;
        gFallingParticleVelXRange = 0x4000;
        gFallingParticleVelYCenter = 0x14000;
        f0 = gFloatZero;
        gFallingParticleVelYRange = 0xC000;
        gFallingParticleAlphaMin = 0x40;
        gFallingParticleAlphaMax = 0xC0;
        *(f32 *)((u8 *)ctrl + 0x30) = f1;
        *(f32 *)((u8 *)ctrl + 0x34) = f0;
        for (;;) {
            if (0x100 - Process_CountFree() < 1) {
                break;
            }
            part = Process_Create(gFallingParticleProc, ctrl);
            slot = 0;
            do {
                s32 r0;
                s32 r3;
                s32 r4;
                s32 r5;
                s32 r6;

                *(s32 *)((u8 *)part + 0x34) = (s32)(Rand_Next() % 39780352U);
                *(s32 *)((u8 *)part + 0x38) = (s32)(Rand_Next() % 32768000U);
                *(s32 *)((u8 *)part + 0x38) -= 0xC80000;
                *(s16 *)((u8 *)part + 0x30) = (s16)((Rand_Next() % 300U) + 0x12C);
                if (slot == 0) {
                    range = gFallingParticleVelYRange;
                    temp = (gFallingParticleVelYCenter - range) + (s32)(Rand_Next() % (u32)(range * 2));
                    gFallingParticleVelY = temp;
                    if (temp <= 0) {
                        temp = -temp;
                        gFallingParticleVelY = temp;
                        if (temp == 0) {
                            gFallingParticleVelY = 0x4000;
                        }
                    }
                }
                range = gFallingParticleVelXRange;
                *(s32 *)((u8 *)part + 0x3C) = (gFallingParticleVelXCenter - range) + (s32)(Rand_Next() % (u32)(range * 2));
                slot += 1;
                *(s32 *)((u8 *)part + 0x40) = gFallingParticleVelY;
                r0 = gFallingParticleVelYRange;
                r5 = gFallingParticleVelYCenter;
                r3 = *(s32 *)((u8 *)part + 0x40);
                r4 = r5 - r0;
                r0 = r5 + r0;
                r3 = r3 - r4;
                r3 = r3 * 7;
                r5 = r0 - r4;
                *(u8 *)((u8 *)part + 0x32) = (u8)(r3 / r5);
                *(u8 *)((u8 *)part + 0x32) = (u8)(*(u8 *)((u8 *)part + 0x32) + 2);
                r3 = *(s32 *)((u8 *)part + 0x40);
                r6 = gFallingParticleAlphaMin;
                r0 = gFallingParticleAlphaMax;
                r3 = r3 - r4;
                r0 = r0 - r6;
                r0 = r3 * r0;
                r0 = r0 / r5;
                *(u8 *)((u8 *)part + 0x33) = (u8)(r6 + r0);
                part = (u8 *)part + 0x14;
            } while (slot < 3);
        }
    }
}

void fn_801FDC78(void *arg0) {
    void *Process_Create(void *, void *);
    s32 Process_CountFree(void);
    u32 Rand_Next(void);
    extern u8 gFallingParticleProc[];
    extern s32 gFallingParticleVelY;
    extern s32 gFallingParticleVelXCenter;
    extern s32 gFallingParticleVelYCenter;
    extern s32 gFallingParticleVelXRange;
    extern s32 gFallingParticleVelYRange;
    extern u8 gFallingParticleAlphaMin;
    extern u8 gFallingParticleAlphaMax;
    extern f32 gFloatZero;
    extern f32 gFloatOne;

    s32 slot;
    void *part;
    void *ctrl;
    s32 range;
    s32 temp;
    f32 one;
    f32 zero;
    s32 r0;
    s32 r3;
    s32 r4;
    s32 r5;
    s32 r6;

    ctrl = arg0;
    one = gFloatOne;
    zero = gFloatZero;

    for (;;) {
        if (*(f32 *)((u8 *)ctrl + 0x34) < zero) {
            *(f32 *)((u8 *)ctrl + 0x34) = *(f32 *)((u8 *)ctrl + 0x34) + *(f32 *)((u8 *)ctrl + 0x30);
            return;
        }
        if (0x100 - Process_CountFree() < 1) {
            return;
        }
        part = Process_Create(gFallingParticleProc, ctrl);
        slot = 0;
        do {
            *(s32 *)((u8 *)part + 0x34) = (s32)(Rand_Next() % 0x02600000U);
            *(s32 *)((u8 *)part + 0x38) = -(s32)(Rand_Next() & 0x3FFFFF);
            *(s16 *)((u8 *)part + 0x30) = (s16)((Rand_Next() % 300U) + 0x12C);
            if (slot == 0) {
                range = gFallingParticleVelYRange;
                temp = (gFallingParticleVelYCenter - range) + (s32)(Rand_Next() % (u32)(range * 2));
                gFallingParticleVelY = temp;
                if (temp <= 0) {
                    temp = -temp;
                    gFallingParticleVelY = temp;
                    if (temp == 0) {
                        gFallingParticleVelY = 0x4000;
                    }
                }
            }
            range = gFallingParticleVelXRange;
            *(s32 *)((u8 *)part + 0x3C) = (gFallingParticleVelXCenter - range) + (s32)(Rand_Next() % (u32)(range * 2));
            slot += 1;
            *(s32 *)((u8 *)part + 0x40) = gFallingParticleVelY;
            r0 = gFallingParticleVelYRange;
            r5 = gFallingParticleVelYCenter;
            r3 = *(s32 *)((u8 *)part + 0x40);
            r4 = r5 - r0;
            r0 = r5 + r0;
            r3 = r3 - r4;
            r3 = r3 * 7;
            r5 = r0 - r4;
            *(u8 *)((u8 *)part + 0x32) = (u8)(r3 / r5);
            *(u8 *)((u8 *)part + 0x32) = (u8)(*(u8 *)((u8 *)part + 0x32) + 2);
            r3 = *(s32 *)((u8 *)part + 0x40);
            r6 = gFallingParticleAlphaMin;
            r0 = gFallingParticleAlphaMax;
            r3 = r3 - r4;
            r0 = r0 - r6;
            r0 = r3 * r0;
            r0 = r0 / r5;
            *(u8 *)((u8 *)part + 0x33) = (u8)(r6 + r0);
            part = (u8 *)part + 0x14;
        } while (slot < 3);
        *(f32 *)((u8 *)ctrl + 0x34) = *(f32 *)((u8 *)ctrl + 0x34) - one;
    }
}

#pragma use_lmw_stmw reset
#pragma global_optimizer reset

void fn_801FDE64(void) {
    M2C_UNK FileCache_ReleaseSlot(M2C_UNK *);
    extern M2C_UNK gFallingParticleTex;
    FileCache_ReleaseSlot(&gFallingParticleTex);
}

void fn_801FDE88(void) {
    void fn_8006EEFC(void *, void *);
    extern u32 gFallingParticleTex;
    extern char lbl_80281EC8[];
    fn_8006EEFC(&gFallingParticleTex, lbl_80281EC8 + 0x13);
}

void fn_801FDEB8(void) {
    M2C_UNK FallingParticle_Update();
    FallingParticle_Update();
}

/* Draw and advance up to three falling Prim2D particles; unlink the process when none remain. */
void FallingParticle_Update(void *proc)
{
    void Prim2D_SetAlpha(u8);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_BindTexture(s32, s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    void Process_Unlink(void *);
    extern s32 gFallingParticleTex;
    extern f32 gFloatZero;
    extern f32 gFloatOne;

    s32 active;
    s32 z;
    void *self;
    s8 size;

    active = 0;
    self = proc;
    if (*(s16 *)((u8 *)proc + 0x30) >= 0) {
        z = 0x50;
        active = 1;
        if (*(s8 *)((u8 *)self + 0x32) < 8) {
            z = 0x6E;
        }
        Prim2D_Begin();
        Prim2D_SetTransform(gFloatZero, gFloatZero, (f32)z, gFloatOne);
        Prim2D_BindTexture(gFallingParticleTex, 7, 0x10);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        size = *(s8 *)((u8 *)self + 0x32);
        Prim2D_SetRect((f32)(*(s32 *)((u8 *)self + 0x34) >> 16),
                       (f32)(*(s32 *)((u8 *)self + 0x38) >> 16), (f32)size, (f32)size);
        Prim2D_SetAlpha(*(u8 *)((u8 *)self + 0x33));
        Prim2D_EndPrim();
        *(s32 *)((u8 *)self + 0x34) = *(s32 *)((u8 *)self + 0x34) + *(s32 *)((u8 *)self + 0x3C);
        *(s32 *)((u8 *)self + 0x38) = *(s32 *)((u8 *)self + 0x38) + *(s32 *)((u8 *)self + 0x40);
        if (*(s32 *)((u8 *)self + 0x34) < (s32)0xFFF80000) {
            *(s32 *)((u8 *)self + 0x34) = 0x02600000;
        }
        if (*(s32 *)((u8 *)self + 0x34) > (s32)0x02610000) {
            *(s32 *)((u8 *)self + 0x34) = (s32)0xFFF90000;
        }
        if (*(s32 *)((u8 *)self + 0x38) > (s32)0x01220000) {
            *(s16 *)((u8 *)self + 0x30) = -1;
        }
    }
    if (*(s16 *)((u8 *)self + 0x44) >= 0) {
        z = 0x50;
        active += 1;
        if (*(s8 *)((u8 *)self + 0x46) < 8) {
            z = 0x6E;
        }
        Prim2D_Begin();
        Prim2D_SetTransform(gFloatZero, gFloatZero, (f32)z, gFloatOne);
        Prim2D_BindTexture(gFallingParticleTex, 7, 0x10);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        size = *(s8 *)((u8 *)self + 0x46);
        Prim2D_SetRect((f32)(*(s32 *)((u8 *)self + 0x48) >> 16),
                       (f32)(*(s32 *)((u8 *)self + 0x4C) >> 16), (f32)size, (f32)size);
        Prim2D_SetAlpha(*(u8 *)((u8 *)self + 0x47));
        Prim2D_EndPrim();
        *(s32 *)((u8 *)self + 0x48) = *(s32 *)((u8 *)self + 0x48) + *(s32 *)((u8 *)self + 0x50);
        *(s32 *)((u8 *)self + 0x4C) = *(s32 *)((u8 *)self + 0x4C) + *(s32 *)((u8 *)self + 0x54);
        if (*(s32 *)((u8 *)self + 0x48) < (s32)0xFFF80000) {
            *(s32 *)((u8 *)self + 0x48) = 0x02600000;
        }
        if (*(s32 *)((u8 *)self + 0x48) > (s32)0x02610000) {
            *(s32 *)((u8 *)self + 0x48) = (s32)0xFFF90000;
        }
        if (*(s32 *)((u8 *)self + 0x4C) > (s32)0x01220000) {
            *(s16 *)((u8 *)self + 0x44) = -1;
        }
    }
    if (*(s16 *)((u8 *)self + 0x58) >= 0) {
        z = 0x50;
        active += 1;
        if (*(s8 *)((u8 *)self + 0x5A) < 8) {
            z = 0x6E;
        }
        Prim2D_Begin();
        Prim2D_SetTransform(gFloatZero, gFloatZero, (f32)z, gFloatOne);
        Prim2D_BindTexture(gFallingParticleTex, 7, 0x10);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        size = *(s8 *)((u8 *)self + 0x5A);
        Prim2D_SetRect((f32)(*(s32 *)((u8 *)self + 0x5C) >> 16),
                       (f32)(*(s32 *)((u8 *)self + 0x60) >> 16), (f32)size, (f32)size);
        Prim2D_SetAlpha(*(u8 *)((u8 *)self + 0x5B));
        Prim2D_EndPrim();
        *(s32 *)((u8 *)self + 0x5C) = *(s32 *)((u8 *)self + 0x5C) + *(s32 *)((u8 *)self + 0x64);
        *(s32 *)((u8 *)self + 0x60) = *(s32 *)((u8 *)self + 0x60) + *(s32 *)((u8 *)self + 0x68);
        if (*(s32 *)((u8 *)self + 0x5C) < (s32)0xFFF80000) {
            *(s32 *)((u8 *)self + 0x5C) = 0x02600000;
        }
        if (*(s32 *)((u8 *)self + 0x5C) > (s32)0x02610000) {
            *(s32 *)((u8 *)self + 0x5C) = (s32)0xFFF90000;
        }
        if (*(s32 *)((u8 *)self + 0x60) > (s32)0x01220000) {
            *(s16 *)((u8 *)self + 0x58) = -1;
        }
    }
    if (active == 0) {
        Process_Unlink(self);
    }
}

extern u16 lbl_8029B634[10];
s32 fn_801FE32C(void) {
    return Process_Find(&lbl_8029B634) != 0;
}

void *fn_801FE360(void) {
    void *Process_Create(void *, s32);
    extern s32 gGameFlags;
    extern u8 lbl_80281F00[];
    void *temp;

    if (gGameFlags & 0x20) {
        return NULL;
    }
    if (gGameFlags & 0x40) {
        temp = Process_Create(lbl_8029B634, 3);
        M2C_FIELD(temp, u8 **, 0x34) = lbl_80281F00 + 0x2F;
        return temp;
    }
    temp = Process_Create(lbl_8029B634, 3);
    M2C_FIELD(temp, u8 **, 0x34) = lbl_80281F00 + 0x3E;
    return temp;
}

void fn_801FE3DC(void *arg0) {
    void fn_8003F670(u32);
    extern u32 lbl_80368438;
    if (lbl_80368438 != 0) {
        FileCache_ReleaseSlot(&lbl_80368438);
    }
    if (M2C_FIELD(arg0, u32 *, 0x44) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0;
    }
}

s32 fn_801FE430(void) {
    extern u32 gGameFlags;
    return !(gGameFlags & 0x20);
}

void fn_801FE444(void) {
    extern u16 lbl_80281F00[];
    fn_8005C870((char *)lbl_80281F00 + 0x4D, 0);
    fn_8005C870((char *)lbl_80281F00 + 0x64, 0);
}

#pragma opt_common_subs off
void fn_801FE488(void *arg0) {
    u8 FileCache_IsReady(void *);
    u32 Archive_Load(void *);
    void Process_ClearFunc(void *);
    void fn_8006EEFC(void *, void *);
    extern u8 lbl_80281F00[];
    extern u32 lbl_80368438;

    if (!FileCache_IsReady(lbl_80281F00 + 0x4D) || !FileCache_IsReady(lbl_80281F00 + 0x64)) {
        return;
    }
    if (lbl_80368438 == 0) {
        fn_8006EEFC(&lbl_80368438, lbl_80281F00 + 0x4D);
    }
    M2C_FIELD(arg0, u32 *, 0x44) = Archive_Load(lbl_80281F00 + 0x64);
    Process_ClearFunc(arg0);
}
#pragma opt_common_subs reset
void fn_801FE520(void *arg0) {
    void *Msg_Expand(void *);
    s32 Text_MeasureWidth(void *, s32, f32);
    s32 Text_MeasureHeight(s32, f32);
    extern f32 lbl_8036BB58;
    void *self;
    s16 tw;
    s16 th;

    self = arg0;
    tw = (s16)Text_MeasureWidth(Msg_Expand(*(void **)((u8 *)self + 0x34)), -1, lbl_8036BB58);
    th = (s16)Text_MeasureHeight(-1, lbl_8036BB58);
    *(s16 *)((u8 *)self + 0x3E) = (s16)(tw + 0x20);
    *(s16 *)((u8 *)self + 0x40) = (s16)(th + 0x40);
    *(s16 *)((u8 *)self + 0x38) = (s16)((0x260 - *(s16 *)((u8 *)self + 0x3E)) >> 1);
    *(s16 *)((u8 *)self + 0x3A) = (s16)((0x1C0 - *(s16 *)((u8 *)self + 0x40)) >> 1);
    *(s16 *)((u8 *)self + 0x3C) = 0xA;
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
void fn_801FE5B0(void *arg0) {
    f32 Math_Ease(M2C_UNK, f32, f32, f32, f32);
    M2C_UNK Prim2D_SetAlphaByte(M2C_UNK);
    M2C_UNK Prim2D_SetColorByte(s32);
    M2C_UNK Prim2D_AddZ(f32);
    M2C_UNK fn_80009C20(f32, f32, f32, f32, f32, f32, f32, f32);
    M2C_UNK Prim2D_SetTex(M2C_UNK, M2C_UNK);
    M2C_UNK Prim2D_PrepareTex();
    M2C_UNK Prim2D_Begin();
    s32 Msg_Expand(s32);
    M2C_UNK fn_8001003C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, ...);
    M2C_UNK fn_801FE84C(M2C_UNK, M2C_UNK, s16, s16, s32 *);
    extern s32 lbl_8036BB54;
    extern f32 lbl_8036BB58;
    extern f32 lbl_8036BB5C;
    extern f32 lbl_8036BB60;
    extern f32 lbl_8036BB64;
    extern f32 lbl_8036BB68;
    extern f32 lbl_8036BB6C;
    s32 sp8;
    f32 temp_f31;
    f32 var_f1;
    f32 var_f3;
    s32 temp_r3;
    s32 temp_r3_2;
    u8 temp_r0;
    u8 temp_r0_2;

    var_f3 = lbl_8036BB58;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x30);
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x28) + 1;
    switch ((s32) temp_r0) {                        /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        break;
    case 0:                                         /* switch 1 */
        var_f3 = (f32) (5 - temp_r3) / lbl_8036BB5C;
        break;
    case 2:                                         /* switch 1 */
        var_f3 = (f32) temp_r3 / lbl_8036BB5C;
        break;
    }
    temp_f31 = Math_Ease(5, lbl_8036BB60, lbl_8036BB58, var_f3, lbl_8036BB58);
    Prim2D_Begin();
    fn_80009C20((f32) M2C_FIELD(arg0, s16 *, 0x38), (f32) M2C_FIELD(arg0, s16 *, 0x3A), (f32) M2C_FIELD(arg0, s16 *, 0x3C), (f32) ((s16) M2C_FIELD(arg0, s16 *, 0x3E) >> 1), (f32) ((s16) M2C_FIELD(arg0, s16 *, 0x40) >> 1), temp_f31, temp_f31, lbl_8036BB60);
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x30);
    var_f1 = lbl_8036BB58;
    temp_r3_2 = M2C_FIELD(arg0, s16 *, 0x28) + 1;
    switch ((s32) temp_r0_2) {                      /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        break;
    case 0:                                         /* switch 2 */
        var_f1 = (f32) (5 - temp_r3_2) / lbl_8036BB5C;
        break;
    case 2:                                         /* switch 2 */
        var_f1 = (f32) temp_r3_2 / lbl_8036BB5C;
        break;
    }
    Prim2D_SetColorByte((s32) (lbl_8036BB64 * var_f1));
    Prim2D_SetAlphaByte(0x80);
    Prim2D_PrepareTex();
    sp8 = lbl_8036BB54;
    fn_801FE84C(0, 0, M2C_FIELD(arg0, s16 *, 0x3E), M2C_FIELD(arg0, s16 *, 0x40), &sp8);
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BB68);
    Prim2D_PrepareTex();
    Prim2D_Begin();
    Prim2D_SetTex(0, 0x13);
    Prim2D_PrepareTex();
    fn_8001003C(0x10, 0x20, 1, 1, 0, Msg_Expand(M2C_FIELD(arg0, s32 *, 0x34)), lbl_8036BB58, lbl_8036BB60);
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BB6C);
    Prim2D_PrepareTex();
}
#pragma push
#pragma optimization_level 4
#pragma global_optimizer on
#pragma opt_common_subs on
#pragma opt_propagation on
static inline s32 Ui_PanelOffset(s32 distance, s32 adjustment) {
    return distance + adjustment;
}


#pragma push
#pragma optimization_level 4
#pragma global_optimizer on
#pragma opt_common_subs on
void fn_801FE84C(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 *arg4) {
    void Ui_LoadAtlasTex(void *, void *, s32);
    u16 GXGetTexObjWidth(void *);
    u16 GXGetTexObjHeight(void *);
    void Prim2D_Begin(void);
    void Prim2D_SetTex(void *, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddZ(f32);
    void Prim2D_SetColorPacked(s32 *);
    extern void *lbl_80368438;
    extern f32 lbl_8036BB58;
    extern f32 lbl_8036BB78;
    extern f64 lbl_8036BB70;
    extern f64 lbl_8036BB80;

    struct Slot { u8 tex[0x20]; u16 w; u16 h; };
    struct Slot t3;
    struct Slot t4;
    struct Slot t5;
    struct Slot t6;
    struct Slot t7;
    struct Slot t8;
    struct Slot t9;
    struct Slot tA;
    s32 sp8;
    s32 y2;
    s32 right;
    s32 bottom;
    u32 edge;
    s16 x;
    s16 y;
    s16 ww;
    s16 hh;

    Ui_LoadAtlasTex(lbl_80368438, &t3, 3);
    t3.w = GXGetTexObjWidth(&t3);
    t3.h = GXGetTexObjHeight(&t3);
    Ui_LoadAtlasTex(lbl_80368438, &t4, 4);
    t4.w = GXGetTexObjWidth(&t4);
    t4.h = GXGetTexObjHeight(&t4);
    Ui_LoadAtlasTex(lbl_80368438, &t5, 5);
    t5.w = GXGetTexObjWidth(&t5);
    t5.h = GXGetTexObjHeight(&t5);
    Ui_LoadAtlasTex(lbl_80368438, &t6, 6);
    t6.w = GXGetTexObjWidth(&t6);
    t6.h = GXGetTexObjHeight(&t6);
    Ui_LoadAtlasTex(lbl_80368438, &t7, 7);
    t7.w = GXGetTexObjWidth(&t7);
    t7.h = GXGetTexObjHeight(&t7);
    Ui_LoadAtlasTex(lbl_80368438, &t8, 8);
    t8.w = GXGetTexObjWidth(&t8);
    t8.h = GXGetTexObjHeight(&t8);
    Ui_LoadAtlasTex(lbl_80368438, &t9, 9);
    t9.w = GXGetTexObjWidth(&t9);
    t9.h = GXGetTexObjHeight(&t9);
    Ui_LoadAtlasTex(lbl_80368438, &tA, 0xA);
    tA.w = GXGetTexObjWidth(&tA);
    tA.h = GXGetTexObjHeight(&tA);

    Prim2D_Begin();
    Prim2D_SetTex(&t3, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)arg0, (f32)arg1, (f32)t3.w, (f32)t3.h);
    Prim2D_EndPrim();

    hh = arg3;
    y = arg1;
    Prim2D_Begin();
    Prim2D_SetTex(&t4, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)arg0, (f32)(y + (hh - t4.h)), (f32)t4.w, (f32)t4.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&t5, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)arg0, (f32)(y + t3.h), (f32)t5.w, (f32)(hh - (t3.h + t4.h)));
    Prim2D_EndPrim();

    ww = arg2;
    x = arg0;
    Prim2D_Begin();
    Prim2D_SetTex(&t6, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    edge = t6.w;
    right = ww - edge;
    right += 4;
    Prim2D_SetRect((f32)(x + right), (f32)(y + t9.h), (f32)edge, (f32)(hh - (t9.h + tA.h)));
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&t7, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    y2 = y + 2;
    Prim2D_SetRect((f32)(x + t3.w), (f32)y2, (f32)(ww - (t3.w + t9.w)), (f32)t7.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&t8, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    bottom = hh - t8.h;
    bottom = Ui_PanelOffset(bottom, -1);
    Prim2D_SetRect((f32)(x + t4.w), (f32)(y + bottom), (f32)(ww - (t4.w + tA.w)), (f32)t8.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&t9, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)(x + (ww - t9.w)), (f32)y, (f32)t9.w, (f32)t9.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&tA, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)(x + (ww - t9.w)), (f32)(y + (hh - tA.h)), (f32)tA.w, (f32)tA.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BB58);
    Prim2D_PrepareTex();
    Prim2D_Begin();
    Prim2D_SetTex(0, 0x12);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)x, (f32)y2, (f32)ww, (f32)(hh - 4));
    sp8 = *arg4;
    Prim2D_SetColorPacked(&sp8);
    Prim2D_EndPrim();
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BB78);
    Prim2D_PrepareTex();
}
#pragma pop

void fn_801FEF30(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 4;
}

void fn_801FEF44(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0xD2;
}

void fn_801FEF58(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 2;
    M2C_FIELD(arg0, s16 *, 0x28) = 4;
}

s32 fn_801FEF6C(void) {
    extern u16 lbl_8029B5DC[];
    s32 v = Process_Find(lbl_8029B5DC);
    return v != 0;
}

void *fn_801FEFA0(void) {
    void *Process_Create(void *, s32);
    s32 fn_800C4740(void);
    s32 fn_800C4304(void *);
    extern u8 lbl_8029B5DC[];
    extern char lbl_80281F00[];
    void *temp_r31;

    temp_r31 = Process_Create(lbl_8029B5DC, 3);
    *(s32 *)((u8 *)temp_r31 + 0x34) = fn_800C4740();
    *(s32 *)((u8 *)temp_r31 + 0x38) = fn_800C4304(lbl_80281F00 + 0x75);
    return temp_r31;
}

void fn_801FEFF8(void *arg0) {
    void fn_8003F670(u32);
    extern u32 lbl_80368438;
    if (lbl_80368438 != 0) {
        FileCache_ReleaseSlot(&lbl_80368438);
    }
    if (M2C_FIELD(arg0, u32 *, 0x30) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0;
    }
}

s32 fn_801FF04C(void) {
    extern u32 gGameFlags;
    return !(gGameFlags & 0x20);
}

void fn_801FF060(void *arg0) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 OSDisableScheduler(void);
    s32 OSEnableScheduler(void);
    void fn_8005BA08(s8);
    void fn_8005C870(void *, s32);
    extern u8 lbl_80281F00[];
    s32 temp_r31;
    s32 temp_r31_2;

    temp_r31 = OSDisableInterrupts();
    OSDisableScheduler();
    OSRestoreInterrupts(temp_r31);
    fn_8005BA08((s8)M2C_FIELD(arg0, s32 *, 0x38));
    fn_8005C870(lbl_80281F00 + 0x4D, 0);
    fn_8005C870(lbl_80281F00 + 0x64, 0);
    fn_8005BA08((s8)M2C_FIELD(arg0, s32 *, 0x34));
    temp_r31_2 = OSDisableInterrupts();
    OSEnableScheduler();
    OSRestoreInterrupts(temp_r31_2);
}

#pragma global_optimizer off
void fn_801FF0F8(void *arg0) {
    u8 FileCache_IsReady(void *);
    u32 Archive_Load(void *);
    void Process_ClearFunc(void *);
    void fn_8006EEFC(void *, void *);
    extern u8 lbl_80281F00[];
    extern u32 lbl_80368438;

    if (!FileCache_IsReady(lbl_80281F00 + 0x4D) || !FileCache_IsReady(lbl_80281F00 + 0x64)) {
        return;
    }
    if (lbl_80368438 == 0) {
        fn_8006EEFC(&lbl_80368438, lbl_80281F00 + 0x4D);
    }
    M2C_FIELD(arg0, u32 *, 0x30) = Archive_Load(lbl_80281F00 + 0x64);
    Process_ClearFunc(arg0);
}

#pragma optimization_level 2
void fn_801FF190(s32 arg0) {
    void Ui_CreateMenu(void *, s32, s32);
    void *Heap_Alloc(u32);
    void fn_8013CE10(void *);
    void fn_8013CE7C(void *);
    void fn_8013CED0(void *, void *);
    extern u8 lbl_80281F00[], lbl_8029B5D0[], lbl_8029B69C[], lbl_803392D0[], lbl_803392DC[];
    extern s8 lbl_8036843C, lbl_8036843D;
#pragma cplusplus on
    struct Base { u32 unk; };
    struct Obj : Base {
        virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
        virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
        virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
        virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
        virtual void v16(); virtual void v17();
        virtual s16 getWidth();
    };
    Obj *obj;
    if (!lbl_8036843C) {
        fn_8013CE7C(lbl_803392D0);
        lbl_8036843C = 1;
    }
    if (!lbl_8036843D) {
        fn_8013CE10(lbl_803392DC);
        lbl_8036843D = 1;
    }
    *(void **)(lbl_803392D0 + 4) = lbl_80281F00 + 0x7a;
    lbl_803392D0[8] = 1;
    lbl_803392D0[9] |= 1;
    *(void **)(lbl_803392DC + 4) = lbl_80281F00 + 0x88;
    lbl_803392DC[8] = 1;
    lbl_803392DC[9] |= 1;
    obj = (Obj *)Heap_Alloc(0x30);
    if (obj) {
        fn_8013CED0(obj, lbl_8029B5D0);
        *(void **)((u8 *)obj + 4) = lbl_8029B69C;
        *(s16 *)((u8 *)obj + 0xc) = 0x180;
        *(s16 *)((u8 *)obj + 8) = (0x260 - obj->getWidth()) >> 1;
        *(s16 *)((u8 *)obj + 0xa) = 0x120;
        *((u8 *)obj + 0x24) = 1;
    }
    *(void **)((u8 *)obj + 0x20) = lbl_80281F00 + 0x95;
    Ui_CreateMenu(obj, arg0, 0);
#pragma cplusplus reset
}
#pragma optimization_level reset
void fn_801FF2D0(void) {
    extern u8 gUiContext[];
    extern s32 gGameFlags;
    extern void fn_80209968(s32);
    
    u8 temp_r0 = gUiContext[8];
    switch ((s32)temp_r0) {
        case 0x81:
            gGameFlags |= 0x40;
            fn_80209968(1);
            return;
        case 0x80:
            gGameFlags &= 0xFFFFFFBF;
            fn_80209968(0);
            return;
    }
}

void fn_801FF33C(void) {

}

void *fn_801FF340(void *arg0, s16 arg1) {
    void Heap_Free(void *);
    extern void *lbl_8029B69C[];
    extern void *lbl_80291DA0[];
    extern void *lbl_802920E0[];

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 4) = lbl_8029B69C;
        if (arg0 != NULL) {
            *(void **)((u8 *)arg0 + 4) = lbl_80291DA0;
            if (arg0 != NULL) {
                *(void **)((u8 *)arg0 + 4) = lbl_802920E0;
            }
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void fn_801FF3AC(void *arg0) {
    M2C_UNK fn_8013CD7C();
    fn_8013CD7C();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x258;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

#pragma cplusplus on
extern "C" void fn_801FF3E8(void *arg0, void *arg1) {
    extern u8 gUnitInfoPopup[];
    u8 Ui_IsUnitInfoPopupOpen(void *);
    void Ui_HideUnitInfoPopup(void *);
    void *GfxEnt_Get(u8);
    void fn_80024B6C(void);
    struct Handler {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9(void *, void *) = 0;
    };
    u32 v;
    void *ent;
    u8 *unit;

    unit = (u8 *)arg1;
    v = *(u32 *)((u8 *)arg0 + 0x28);
    *(u32 *)((u8 *)arg0 + 0x28) = ++v;
    if (v >= *(u32 *)((u8 *)arg0 + 0x2C)) {
        if (Ui_IsUnitInfoPopupOpen(gUnitInfoPopup) != 0) {
            Ui_HideUnitInfoPopup(gUnitInfoPopup);
        }
        ent = GfxEnt_Get(unit[0x40 + (s8)unit[0x62]]);
        (*(Handler **)((u8 *)ent + 0x34))->v9(arg1, ent);
    } else {
        fn_80024B6C();
    }
}
extern "C" void fn_801FF480(void *arg0) {
    void fn_801FE84C(s32, s32, s32, s32, s32 *);
    extern s32 lbl_8036BB50;
    struct Obj {
        u8 pad[4];
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
        virtual void v15();
        virtual void v16();
        virtual void v17();
        virtual s32 v18();
        virtual s32 v19();
        virtual void v20();
        virtual void v21();
        virtual void v22();
        virtual void v23();
        virtual void v24();
        virtual void v25();
        virtual void v26();
        virtual void v27();
        virtual void v28();
        virtual void v29();
        virtual void v30();
    };
    s32 sp8;
    Obj *self = (Obj *)arg0;

    self->v30();
    sp8 = lbl_8036BB50;
    fn_801FE84C(0, 0, self->v18(), self->v19(), &sp8);
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
#pragma cplusplus on
extern "C" void fn_801FF50C(void *arg0) {
#pragma cplusplus reset
    void *fn_8013CD90(void *);
    void Prim2D_Begin(void);
    void Prim2D_AddZ(f32);
    void Prim2D_SetTex(void *, s32);
    void Prim2D_PrepareTex(void);
    s32 Text_MeasureWidth(void *, s32, f32);
    s32 Text_MeasureHeight(s32, f32);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetPos(f32,f32);
    void Prim2D_SetTextScale(s32,f32);
    void Prim2D_SetText(void *);
    void Prim2D_EndPrim(void);
    void Prim2D_SetAlphaByte(s32);
    extern f32 lbl_8036BB88, lbl_8036BB58, lbl_8036BB8C, lbl_8036BB90;
#pragma cplusplus on
    struct Widget {
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
        virtual s16 v18() = 0;
        virtual void v19() = 0;
        virtual void v20() = 0;
        virtual void v21() = 0;
        virtual void v22() = 0;
        virtual void v23() = 0;
        virtual void v24() = 0;
        virtual void v25() = 0;
        virtual void v27() = 0;
        virtual void v26() = 0;
        virtual void v28() = 0;
        virtual void v29() = 0;
        virtual void v30() = 0;
        virtual void v31() = 0;
        virtual void v32() = 0;
        virtual void v33() = 0;
        virtual void v34() = 0;
        virtual void v35() = 0;
        virtual s16 v36() = 0;
        virtual void v37() = 0;
        virtual s16 v38() = 0;
        virtual void v39() = 0;
    };
    f32 x;
    f32 y;
    s32 top;
    s32 offset;
    s32 height;
    unsigned long width;
    Widget *self=(Widget *)arg0;
    self->v39();
    if (fn_8013CD90(self)) {
        Prim2D_Begin();
        Prim2D_AddZ(lbl_8036BB88);
        Prim2D_SetTex(0,19);
        Prim2D_PrepareTex();
        register int width=self->v18();
        x=(f32)((width - Text_MeasureWidth(fn_8013CD90(self),-1,lbl_8036BB58)) >> 1);
        height=self->v38();
        offset=(height-Text_MeasureHeight(-1,lbl_8036BB58)) >> 1;
        top=self->v36();
        y=(f32)((top-self->v38())+offset);
        Prim2D_AddPrim(6);
        Prim2D_SetPos(x,y);
        Prim2D_SetTextScale(1,lbl_8036BB8C);
        Prim2D_SetText(fn_8013CD90(self));
        Prim2D_EndPrim();
    }
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BB90);
    Prim2D_SetAlphaByte(128);
    Prim2D_PrepareTex();
#pragma cplusplus reset
}
#pragma pop
    struct CursorTextObject {
        virtual void v0() = 0;
        virtual void *v1() = 0;
    };
    struct CursorWidget {
        u8 pad[4];
        virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0; virtual void v3() = 0;
        virtual void v4() = 0; virtual void v5() = 0; virtual void v6() = 0; virtual void v7() = 0;
        virtual void v8() = 0; virtual void v9() = 0; virtual void v10() = 0; virtual void v11() = 0;
        virtual void v12() = 0; virtual void v13() = 0; virtual void v14() = 0; virtual void v15() = 0;
        virtual void v16() = 0; virtual void v17() = 0; virtual void v18() = 0; virtual void v19() = 0;
        virtual s16 v20() = 0;
        virtual void v21() = 0; virtual void v22() = 0; virtual void v23() = 0; virtual void v24() = 0;
        virtual void v25() = 0; virtual void v26() = 0; virtual void v27() = 0; virtual void v28() = 0;
        virtual void v29() = 0; virtual void v30() = 0; virtual void v31() = 0; virtual void v32() = 0;
        virtual void v33() = 0; virtual void v34() = 0;
        virtual s16 v35() = 0;
        virtual void v36() = 0; virtual void v37() = 0;
        virtual s16 v38() = 0;
    };
struct CursorTexture { u8 buf[0x20]; u16 w,h; };
#pragma push
#pragma optimization_level 4
#pragma cplusplus on
#pragma use_lmw_stmw on
#pragma opt_common_subs off
#pragma opt_propagation off
extern "C" void fn_801FF6B8(void *arg0, void *arg1) {
    u32 OSGetTick(void);
    void Prim2D_SetColorPacked(s32 *);
    void Prim2D_SetAlpha(s32);
    void Prim2D_SwapUvU(void);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_AddZ(f32);
    void Prim2D_SetTex(void *, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    void *GfxEnt_Get(u8);
    s32 Text_MeasureHeight(s32, f32);
    s32 Text_MeasureWidth(void *, s32, f32);
    void Ui_LoadAtlasTex(void *, void *, s32);
    s32 *Ui_GetColor(s32);
    u16 GXGetTexObjWidth(void *);
    u16 GXGetTexObjHeight(void *);
    f64 fn_802380D0(f32);
    extern void *lbl_80368438;
    extern const f32 lbl_8036BB58, lbl_8036BB78, lbl_8036BB90, lbl_8036BB94, lbl_8036BB98;
    extern const f32 lbl_8036BB9C, lbl_8036BBA0, lbl_8036BBA4, lbl_8036BBA8, lbl_8036BBAC, lbl_8036BBB0;
    extern const f64 lbl_8036BB70, lbl_8036BB80;

    CursorTexture tex0;
    CursorTexture tex1;
    s32 sp10;
    s32 spC;
    s32 sp8;
    void *glyph;
    s16 wpad;
    s16 tw;
    s16 gy;
    s16 gx;
    s16 ax;
    s16 posx;
    u8 *entry;
    s16 x;
    s16 y;
    s16 half;
    s16 wide;
    s16 left;
    s16 top;
    s32 mid;
    s32 alpha;
    f32 pulse;
    f32 t;
    u8 flag;
    void *str;
    s32 lx;
    s32 ty;
    s16 bw;
    s32 gap;

    entry = (u8 *)arg1 + (s8)*((u8 *)arg1 + 0x62);
    glyph = GfxEnt_Get(entry[0x40]);
    gx = *(s16 *)((u8 *)glyph + 0x30);
    gy = *(s16 *)((u8 *)glyph + 0x32);
    wpad = (s16)Text_MeasureHeight(-1, lbl_8036BB58);
    str = (*(CursorTextObject **)((u8 *)glyph + 0x34))->v1();
    tw = (s16)Text_MeasureWidth(str, -1, lbl_8036BB58);
    posx = *(s16 *)((u8 *)arg1 + 0x38);
    ax = (s16)(gx - tw / 2);
    if (posx < 0 || *(s16 *)((u8 *)arg1 + 0x3A) < 0) {
        *(s16 *)((u8 *)arg1 + 0x38) = ax;
        *(s16 *)((u8 *)arg1 + 0x3A) = gy;
    } else {
        s32 s = posx + ax;
        *(s16 *)((u8 *)arg1 + 0x38) = (s16)(s / 2);
        s = *(s16 *)((u8 *)arg1 + 0x3A) + gy;
        *(s16 *)((u8 *)arg1 + 0x3A) = (s16)(s / 2);
    }
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BB78);
    Prim2D_PrepareTex();
    t = (f32)(((CursorWidget *)arg0)->v38() - wpad);
    t = lbl_8036BB90 * t;
    x = *(s16 *)((u8 *)arg1 + 0x38);
    y = (s16)((f32)*(s16 *)((u8 *)arg1 + 0x3A) + t);
    Ui_LoadAtlasTex(lbl_80368438, tex0.buf, 0);
    tex0.w = GXGetTexObjWidth(tex0.buf);
    tex0.h = GXGetTexObjHeight(tex0.buf);
    Prim2D_Begin();
    Prim2D_SetTex(tex0.buf, 0x10);
    Prim2D_PrepareTex();
    {
        u32 tick = OSGetTick();
        u32 bus = *(u32 *)0x800000F8 >> 2;
        u32 div = bus / 1000;
        u32 ms = tick / div;
        u32 phase = ms % 500;
        pulse = lbl_8036BB9C * (lbl_8036BB58 + (f32)fn_802380D0(lbl_8036BB98 * ((f32)phase / lbl_8036BB94)));
    }
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)(x - 0x20) - pulse, lbl_8036BB90 * pulse + (f32)(y + 0xC), (f32)tex0.w, (f32)tex0.h);
    Prim2D_EndPrim();
    if (*(u8 *)((u8 *)arg0 + 0x24) != 0) {
        s16 w, h;
        wide = ((CursorWidget *)arg0)->v35();
        half = ((CursorWidget *)arg0)->v20();
        Prim2D_Begin();
        Prim2D_AddZ(lbl_8036BBA0);
        Prim2D_PrepareTex();
        flag = 0;
        if (*(u8 *)((u8 *)arg1 + 0x2D) == 0 && *(u8 *)((u8 *)arg1 + 0x2E) == 0) {
            flag = 1;
        }
        mid = wide;
        alpha = 0x19;
        top = *(s16 *)((u8 *)arg1 + 0x3A) + (half >> 1);
        left = *(s16 *)((u8 *)arg1 + 0x38) + (tw >> 1);
        if (flag) {
            u32 tick = OSGetTick();
            u32 bus = *(u32 *)0x800000F8 >> 2;
            u32 div = bus / 1000;
            u32 ms = tick / div;
            u32 phase = ms % 1500;
            alpha = (s32)(lbl_8036BBAC * (lbl_8036BB90 * (f32)fn_802380D0(lbl_8036BB98 * ((f32)phase / lbl_8036BBA4)) + lbl_8036BB90) + lbl_8036BBA8);
        }
        if (wide < 0x50) {
            mid = 0x50;
        }
        wide = (s16)mid;
        half = wide >> 1;
        Ui_LoadAtlasTex(lbl_80368438, tex1.buf, 1);
        tex1.w = GXGetTexObjWidth(tex1.buf);
        tex1.h = GXGetTexObjHeight(tex1.buf);
        Prim2D_Begin();
        Prim2D_SetTex(tex1.buf, 0x10);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        lx = left - half;
        ty = top - 0xA;
        Prim2D_SetRect((f32)lx, (f32)ty, (f32)tex1.w, (f32)tex1.h);
        sp8 = *Ui_GetColor(0x18);
        Prim2D_SetColorPacked(&sp8);
        Prim2D_SetAlpha(alpha);
        Prim2D_EndPrim();
        Prim2D_AddPrim(1);
        Prim2D_SetRect((f32)((left + half) - tex1.w), (f32)ty, (f32)tex1.w, (f32)tex1.h);
        Prim2D_SwapUvU();
        spC = *Ui_GetColor(0x18);
        Prim2D_SetColorPacked(&spC);
        Prim2D_SetAlpha(alpha);
        Prim2D_EndPrim();
        bw = (s16)tex1.w;
        gap = wide - (bw * 2);
        if (gap > 0) {
            Ui_LoadAtlasTex(lbl_80368438, tex1.buf, 2);
            tex1.w = GXGetTexObjWidth(tex1.buf);
            tex1.h = GXGetTexObjHeight(tex1.buf);
            Prim2D_Begin();
            Prim2D_SetTex(tex1.buf, 0x10);
            Prim2D_PrepareTex();
            Prim2D_AddPrim(1);
            Prim2D_SetRect((f32)(bw + lx), (f32)ty, (f32)gap, (f32)tex1.h);
            sp10 = *Ui_GetColor(0x18);
            Prim2D_SetColorPacked(&sp10);
            Prim2D_SetAlpha(alpha);
            Prim2D_EndPrim();
        }
        Prim2D_Begin();
        Prim2D_AddZ(lbl_8036BBB0);
        Prim2D_PrepareTex();
    }
}
#pragma pop
#pragma cplusplus off
s32 fn_801FFD00(const char *fmt, ...) {
    return 0;
}

s32 File_Seek(void) {
    return 0;
}

s32 fn_801FFD5C(void) {
    return 0;
}

s32 File_Read(void) {
    return 0;
}

s32 File_Close(void) {
    return 0;
}

s32 File_Open(void) {
    return 0;
}

void fn_801FFD7C(s32 arg0) {
    void Process_CreateChild(void *, s32);
    extern u8 lbl_8029B748[16];
    Process_CreateChild(lbl_8029B748, arg0);
}

/* Draw a dim fullscreen overlay and the save-migration progress lines. */
void Save_DrawMigrateProgress(void) {
    void Prim2D_SetColor(s32, s32, s32, s32);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_SetTex(s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    void Text_Draw(s16, s16, u8, void *, ...);
    extern u8 gSaveMigrateStrs[];
    extern s32 gSaveMigrateCount;
    extern f32 lbl_8036BBB8;
    extern f32 lbl_8036BBBC;
    extern f32 lbl_8036BBC0;
    extern f32 lbl_8036BBC4;
    extern f32 lbl_8036BBC8;

    Prim2D_Begin();
    Prim2D_SetTransform(lbl_8036BBB8, lbl_8036BBB8, lbl_8036BBBC, lbl_8036BBC0);
    Prim2D_SetTex(0, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect(lbl_8036BBB8, lbl_8036BBB8, lbl_8036BBC4, lbl_8036BBC8);
    Prim2D_SetColor(0, 0, 0, 0xC0);
    Prim2D_EndPrim();
    Prim2D_Begin();
    Prim2D_SetTransform(lbl_8036BBB8, lbl_8036BBB8, lbl_8036BBB8, lbl_8036BBC0);
    Prim2D_SetTex(0, 0x13);
    Prim2D_PrepareTex();
    Text_Draw(0x40, 0x40, 1, gSaveMigrateStrs + 0x33, gSaveMigrateCount);
    Text_Draw(0x40, 0x60, 1, gSaveMigrateStrs + 0x58);
}

void fn_801FFE8C(void) {
    M2C_UNK SaveData_Release(M2C_UNK *);
    extern M2C_UNK gSaveDataBase;
    SaveData_Release(&gSaveDataBase);
}

void fn_801FFEB0(s32 arg0) {
    extern s32 gSaveMigrateCount;
    extern s32 gSaveDataBase;
    s32 Save_GetSmallSlot(s32 *, s32);
    void Card_RequestWrite(s32, s32, s32, s32, s32);
    s32 tmp;

    if (gSaveMigrateCount != 0) {
        tmp = Save_GetSmallSlot(&gSaveDataBase, 0);
        Card_RequestWrite(tmp, 0x24000, 0x2000, 0x2000, arg0);
    }
}

void fn_801FFF08(s32 arg0) {
    void fn_801E2F9C(s32 *, s32);
    extern s32 gSaveDataBase;
    fn_801E2F9C(&gSaveDataBase, arg0);
}

#pragma use_lmw_stmw on
#pragma optimization_level 2
/* Convert any 2004-12-16 saves (MDST layouts) to the current format; repeat until none left. */
void Save_MigrateLegacy(void) {
    void Heap_FreeRaw(void *);
    void *fn_800C4638(s32, void *, s32);
    void *Save_GetLargeSlot(s32 *, s32);
    void *Save_GetSmallSlot(s32 *, s32);
    void Save_BumpVersionChecksum(void *);
    u8 Save_IsValid(void *);
    void *memcpy(void *, void *, u32);
    void *memset(void *, s32, u32);
    extern u8 gSaveMigrateStrs[];
    extern s32 gSaveDataBase;
    extern s32 gSaveMigrateCount;

    s32 converted;
    s32 i;
    s32 j;
    void *largeSlot;
    void *smallBuf;
    u8 smallOk;
    void *largeBuf;
    u8 largeOk;

    gSaveMigrateCount = 0;
    do {
        converted = 0;
        i = 0;
        do {
            j = (s32)Save_GetSmallSlot(&gSaveDataBase, i);
            if ((void *)j != NULL && Save_IsValid((void *)j) != 0) {
                switch (*(s32 *)((u8 *)(void *)j + 0x44)) {
                case SAVE_VER_20041216:
                    smallOk = 0;
                    smallBuf = fn_800C4638(0x4000, gSaveMigrateStrs + 0x91, 0);
                    if ((s32)*(u8 *)((u8 *)(void *)j + 0x230) == 0x4D &&
                        (s32)*(u8 *)((u8 *)(void *)j + 0x231) == 0x44 &&
                        (s32)*(u8 *)((u8 *)(void *)j + 0x232) == 0x53 &&
                        (s32)*(u8 *)((u8 *)(void *)j + 0x233) == 0x54) {
                        memcpy(smallBuf, (void *)j, 0x170);
                        memset((u8 *)smallBuf + 0x170, 0, 0x140);
                        memcpy((u8 *)smallBuf + 0x2B0, (u8 *)(void *)j + 0x210, 0x3D50);
                        memcpy((void *)j, smallBuf, 0x4000);
                        Save_BumpVersionChecksum((void *)j);
                        smallOk = 1;
                    } else if ((s32)*(u8 *)((u8 *)(void *)j + 0x2D0) == 0x4D &&
                               (s32)*(u8 *)((u8 *)(void *)j + 0x2D1) == 0x44 &&
                               (s32)*(u8 *)((u8 *)(void *)j + 0x2D2) == 0x53 &&
                               (s32)*(u8 *)((u8 *)(void *)j + 0x2D3) == 0x54) {
                        Save_BumpVersionChecksum((void *)j);
                        smallOk = 1;
                    }
                    Heap_FreeRaw(smallBuf);
                    break;
                default:
                    smallOk = 0;
                    break;
                }
                if (smallOk != 0) {
                    converted += 1;
                    gSaveMigrateCount += 1;
                }
            }
            i += 1;
        } while (i < 6);
        j = 0;
        do {
            largeSlot = Save_GetLargeSlot(&gSaveDataBase, j);
            if (largeSlot != NULL && Save_IsValid(largeSlot) != 0) {
                switch (*(s32 *)((u8 *)largeSlot + 0x44)) {
                case SAVE_VER_20041216:
                    largeOk = 0;
                    largeBuf = fn_800C4638(0x6000, gSaveMigrateStrs + 0x91, 0);
                    if ((s32)*(u8 *)((u8 *)largeSlot + 0x230) == 0x4D &&
                        (s32)*(u8 *)((u8 *)largeSlot + 0x231) == 0x44 &&
                        (s32)*(u8 *)((u8 *)largeSlot + 0x232) == 0x53 &&
                        (s32)*(u8 *)((u8 *)largeSlot + 0x233) == 0x54) {
                        memcpy(largeBuf, largeSlot, 0x170);
                        memset((u8 *)largeBuf + 0x170, 0, 0x140);
                        memcpy((u8 *)largeBuf + 0x2B0, (u8 *)largeSlot + 0x210, 0x5D50);
                        memcpy(largeSlot, largeBuf, 0x6000);
                        Save_BumpVersionChecksum(largeSlot);
                        largeOk = 1;
                    } else if ((s32)*(u8 *)((u8 *)largeSlot + 0x2D0) == 0x4D &&
                               (s32)*(u8 *)((u8 *)largeSlot + 0x2D1) == 0x44 &&
                               (s32)*(u8 *)((u8 *)largeSlot + 0x2D2) == 0x53 &&
                               (s32)*(u8 *)((u8 *)largeSlot + 0x2D3) == 0x54) {
                        Save_BumpVersionChecksum(largeSlot);
                        largeOk = 1;
                    }
                    Heap_FreeRaw(largeBuf);
                    break;
                default:
                    largeOk = 0;
                    break;
                }
                if (largeOk != 0) {
                    converted += 1;
                    gSaveMigrateCount += 1;
                }
            }
            j += 1;
        } while (j < 2);
    } while (converted != 0);
}
#pragma optimization_level reset
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
void fn_802001F8(u32 arg0, s32 arg1) {
    void FileCache_ReleaseSlot(void *);
    s32 i;

    for (i = 0; i < 8; i++) {
        if (sFaceResAddrs[i] >= arg0 && arg0 + arg1 > sFaceResAddrs[i]) {
            FileCache_ReleaseSlot(&sFaceResAddrs[i]);
            sFaceResIds[i] = 0;
        }
    }
}
#pragma use_lmw_stmw reset

#pragma global_optimizer off
void fn_80200270(void *arg0) {
    u32 *Hash_Lookup(void *);
    u32 *p;
    u32 *id;
    s32 i;

    p = Hash_Lookup(arg0);
    id = sFaceResIds;
    for (i = 0; i < 8; i++) {
        if (*p == *id) {
            (void)lbl_80339328;
            lbl_80339338[i] -= 1;
            lbl_80339328[i] = 2;
            break;
        }
        id++;
    }
}
#pragma global_optimizer reset
u32 fn_802002F0(void *arg0) {
 u32 *Hash_Lookup(void *);
 void fn_8006EEFC(u32 *,char *);
 char *strcpy(char *,const char *);
 char *strcat(char *,const char *);
 extern char lbl_802820A0[];
 char path[64];
 u32 *entry;
 s32 i;
 entry=Hash_Lookup(arg0);
 for(i=0;i<8;i++){
 if(entry[0]==sFaceResIds[i]){
 lbl_80339338[i]++;
 return sFaceResAddrs[i];
 }
 }
 for(i=0;i<8;i++){
 if(sFaceResAddrs[i]==0){
 strcpy(path,lbl_802820A0+11);
 strcat(path,(char *)entry[2]);
 fn_8006EEFC(&sFaceResAddrs[i],path);
 lbl_80339338[i]=1;
 sFaceResIds[i]=entry[0];
 return sFaceResAddrs[i];
 }
 }
 return 0;
}

#pragma use_lmw_stmw on
void fn_802003FC(void) {
    void FileCache_ReleaseSlot(void *);
    s32 i;

    for (i = 0; i < 8; i++) {
        if (sFaceResAddrs[i] != 0 && lbl_80339338[i] == 0) {
            if (--lbl_80339328[i] == 0) {
                FileCache_ReleaseSlot(&sFaceResAddrs[i]);
                sFaceResIds[i] = 0;
            }
        }
    }
}

M2C_UNK Process_Create(s32 *, s32, s16 *, s16 *, s32 *, s32 *);
void FaceResMan_Init(void) {
    extern s32 E_FaceResMan_script[];
    s32 i;

    for (i = 0; i < 8; i++) {
        sFaceResAddrs[i] = 0;
        sFaceResIds[i] = 0;
        lbl_80339328[i] = 0;
        lbl_80339338[i] = 0;
    }
    Process_Create(E_FaceResMan_script, 2, lbl_80339338, lbl_80339328, (s32 *)sFaceResIds, (s32 *)sFaceResAddrs);
}

#pragma use_lmw_stmw reset

extern u16 lbl_8029B7FC[10];
s32 fn_8020055C(void) {
    return Process_Find(&lbl_8029B7FC) != 0;
}

void *fn_80200590(void) {
    void *Process_Create(void *, s32);
    extern s32 gGameFlags;
    void *temp;

    if (gGameFlags & 0x20) {
        return NULL;
    }
    if (gGameFlags & 0x100) {
        temp = Process_Create(lbl_8029B7FC, 3);
        M2C_FIELD(temp, u8 **, 0x34) = lbl_802820B8 + 0x2B;
        return temp;
    }
    temp = Process_Create(lbl_8029B7FC, 3);
    M2C_FIELD(temp, u8 **, 0x34) = lbl_802820B8 + 0x3F;
    return temp;
}

void fn_8020060C(void *arg0) {
    void fn_8003F670(u32);
    extern u32 lbl_80368448;
    if (lbl_80368448 != 0) {
        FileCache_ReleaseSlot(&lbl_80368448);
    }
    if (M2C_FIELD(arg0, u32 *, 0x44) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0;
    }
}

s32 fn_80200660(void) {
    extern u32 gGameFlags;
    return !(gGameFlags & 0x20);
}

void fn_80200674(void) {
    void fn_8005C870(void *, s32);
    fn_8005C870(lbl_802820B8 + 0x53, 0);
    fn_8005C870(lbl_802820B8 + 0x68, 0);
}

#pragma opt_common_subs off
void fn_802006B8(void *arg0) {
    u8 FileCache_IsReady(void *);
    u32 Archive_Load(void *);
    void Process_ClearFunc(void *);
    void fn_8006EEFC(void *, void *);

    if (!FileCache_IsReady(lbl_802820B8 + 0x53) || !FileCache_IsReady(lbl_802820B8 + 0x68)) {
        return;
    }
    if (lbl_80368448 == 0) {
        fn_8006EEFC(&lbl_80368448, lbl_802820B8 + 0x53);
    }
    M2C_FIELD(arg0, u32 *, 0x44) = Archive_Load(lbl_802820B8 + 0x68);
    Process_ClearFunc(arg0);
}
#pragma opt_common_subs reset
void fn_80200750(void *arg0) {
    void *Msg_Expand(void *);
    s32 Text_MeasureWidth(void *, s32, f32);
    s32 Text_MeasureHeight(s32, f32);
    extern f32 lbl_8036BBD8;
    void *self;
    s16 tw;
    s16 th;

    self = arg0;
    tw = (s16)Text_MeasureWidth(Msg_Expand(*(void **)((u8 *)self + 0x34)), -1, lbl_8036BBD8);
    th = (s16)Text_MeasureHeight(-1, lbl_8036BBD8);
    *(s16 *)((u8 *)self + 0x3E) = (s16)(tw + 0x20);
    *(s16 *)((u8 *)self + 0x40) = (s16)(th + 0x40);
    *(s16 *)((u8 *)self + 0x38) = (s16)((0x260 - *(s16 *)((u8 *)self + 0x3E)) >> 1);
    *(s16 *)((u8 *)self + 0x3A) = (s16)((0x1C0 - *(s16 *)((u8 *)self + 0x40)) >> 1);
    *(s16 *)((u8 *)self + 0x3C) = 0xA;
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
void fn_802007E0(void *arg0) {
    f32 Math_Ease(s32, f32, f32, f32, f32);
    void fn_80009C20(f32, f32, f32, f32, f32, f32, f32, f32);
    void Prim2D_SetColorByte(s32);
    void Prim2D_SetAlphaByte(s32);
    void Prim2D_AddZ(f32);
    M2C_UNK fn_80200A7C(M2C_UNK, M2C_UNK, s16, s16, s32 *);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    extern s32 lbl_8036BBD4;
    extern f32 lbl_8036BBD8;
    extern f32 lbl_8036BBDC;
    extern f32 lbl_8036BBE0;
    extern f32 lbl_8036BBE4;
    extern f32 lbl_8036BBE8;
    extern f32 lbl_8036BBEC;
    
    s32 sp8;
    f32 var_f1;
    f32 var_f3;
    s32 temp_r3;
    s32 temp_r3_2;
    u8 temp_r0;
    u8 temp_r0_2;
    f32 temp_f31;

    var_f3 = lbl_8036BBD8;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x30);
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x28) + 1;
    switch ((s32) temp_r0) {
    case 1:
        break;
    case 0:
        var_f3 = (f32) (5 - temp_r3) / lbl_8036BBDC;
        break;
    case 2:
        var_f3 = (f32) temp_r3 / lbl_8036BBDC;
        break;
    }
    
    temp_f31 = Math_Ease(5, lbl_8036BBE0, lbl_8036BBD8, var_f3, lbl_8036BBD8);
    
    Prim2D_Begin();
    
    fn_80009C20((f32) M2C_FIELD(arg0, s16 *, 0x38), (f32) M2C_FIELD(arg0, s16 *, 0x3A), (f32) M2C_FIELD(arg0, s16 *, 0x3C), (f32) ((s16) M2C_FIELD(arg0, s16 *, 0x3E) >> 1), (f32) ((s16) M2C_FIELD(arg0, s16 *, 0x40) >> 1), temp_f31, temp_f31, lbl_8036BBE0);
    
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x30);
    var_f1 = lbl_8036BBD8;
    temp_r3_2 = M2C_FIELD(arg0, s16 *, 0x28) + 1;
    switch ((s32) temp_r0_2) {
    case 1:
        break;
    case 0:
        var_f1 = (f32) (5 - temp_r3_2) / lbl_8036BBDC;
        break;
    case 2:
        var_f1 = (f32) temp_r3_2 / lbl_8036BBDC;
        break;
    }
    
    Prim2D_SetColorByte((s32) (lbl_8036BBE4 * var_f1));
    Prim2D_SetAlphaByte(0x80);
    Prim2D_PrepareTex();
    
    sp8 = lbl_8036BBD4;
    fn_80200A7C(0, 0, M2C_FIELD(arg0, s16 *, 0x3E), M2C_FIELD(arg0, s16 *, 0x40), &sp8);
    
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BBE8);
    Prim2D_PrepareTex();
    Prim2D_Begin();
    Prim2D_SetTex(0, 0x13);
    Prim2D_PrepareTex();
    
    fn_8001003C(0x10, 0x20, 1, 1, 0, (void *) Msg_Expand(M2C_FIELD(arg0, s32 *, 0x34)), lbl_8036BBD8, lbl_8036BBE0);
    
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BBEC);
    Prim2D_PrepareTex();
}
#pragma pop
void fn_80200A7C(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 *arg4) {
    void Ui_LoadAtlasTex(void *, void *, s32);
    u16 GXGetTexObjWidth(void *);
    u16 GXGetTexObjHeight(void *);
    void Prim2D_Begin(void);
    void Prim2D_SetTex(void *, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddZ(f32);
    void Prim2D_SetColorPacked(s32 *);
    extern u32 lbl_80368448;
    extern f32 lbl_8036BBD8;
    extern f32 lbl_8036BBF8;

    struct Slot { u8 tex[0x20]; u16 w; u16 h; };
    struct Slot t3;
    struct Slot t4;
    struct Slot t5;
    struct Slot t6;
    struct Slot t7;
    struct Slot t8;
    struct Slot t9;
    struct Slot tA;
    s32 sp8;
    s32 y2;
    s16 x;
    s16 y;
    s16 ww;
    s16 hh;
    s32 left;

    Ui_LoadAtlasTex((void *)lbl_80368448, &t3, 3);
    t3.w = GXGetTexObjWidth(&t3);
    t3.h = GXGetTexObjHeight(&t3);
    Ui_LoadAtlasTex((void *)lbl_80368448, &t4, 4);
    t4.w = GXGetTexObjWidth(&t4);
    t4.h = GXGetTexObjHeight(&t4);
    Ui_LoadAtlasTex((void *)lbl_80368448, &t5, 5);
    t5.w = GXGetTexObjWidth(&t5);
    t5.h = GXGetTexObjHeight(&t5);
    Ui_LoadAtlasTex((void *)lbl_80368448, &t6, 6);
    t6.w = GXGetTexObjWidth(&t6);
    t6.h = GXGetTexObjHeight(&t6);
    Ui_LoadAtlasTex((void *)lbl_80368448, &t7, 7);
    t7.w = GXGetTexObjWidth(&t7);
    t7.h = GXGetTexObjHeight(&t7);
    Ui_LoadAtlasTex((void *)lbl_80368448, &t8, 8);
    t8.w = GXGetTexObjWidth(&t8);
    t8.h = GXGetTexObjHeight(&t8);
    Ui_LoadAtlasTex((void *)lbl_80368448, &t9, 9);
    t9.w = GXGetTexObjWidth(&t9);
    t9.h = GXGetTexObjHeight(&t9);
    Ui_LoadAtlasTex((void *)lbl_80368448, &tA, 0xA);
    tA.w = GXGetTexObjWidth(&tA);
    tA.h = GXGetTexObjHeight(&tA);

    Prim2D_Begin();
    Prim2D_SetTex(&t3, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)arg0, (f32)arg1, (f32)t3.w, (f32)t3.h);
    Prim2D_EndPrim();

    hh = arg3;
    y = arg1;
    Prim2D_Begin();
    Prim2D_SetTex(&t4, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)arg0, (f32)(y + (hh - t4.h)), (f32)t4.w, (f32)t4.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&t5, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)arg0, (f32)(y + t3.h), (f32)t5.w, (f32)(hh - (t3.h + t4.h)));
    Prim2D_EndPrim();

    ww = arg2;
    Prim2D_Begin();
    Prim2D_SetTex(&t6, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    left = ww - t6.w;
    x = arg0;
    Prim2D_SetRect((f32)(left + 4 + x), (f32)(y + t9.h), (f32)t6.w, (f32)(hh - (t9.h + tA.h)));
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&t7, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    y2 = y + 2;
    Prim2D_SetRect((f32)(x + t3.w), (f32)y2, (f32)(ww - (t3.w + t9.w)), (f32)t7.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&t8, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)(x + t4.w), (f32)(y + (hh - t8.h - 1)), (f32)(ww - (t4.w + tA.w)), (f32)t8.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&t9, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)(x + (ww - t9.w)), (f32)y, (f32)t9.w, (f32)t9.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_SetTex(&tA, 0x10);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)(x + (ww - t9.w)), (f32)(y + (hh - tA.h)), (f32)tA.w, (f32)tA.h);
    Prim2D_EndPrim();

    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BBD8);
    Prim2D_PrepareTex();
    Prim2D_Begin();
    Prim2D_SetTex(0, 0x12);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)x, (f32)y2, (f32)ww, (f32)(hh - 4));
    sp8 = *arg4;
    Prim2D_SetColorPacked(&sp8);
    Prim2D_EndPrim();
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BBF8);
    Prim2D_PrepareTex();
}
#pragma use_lmw_stmw reset

void fn_80201160(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 4;
}

void fn_80201174(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0xD2;
}

void fn_80201188(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 2;
    M2C_FIELD(arg0, s16 *, 0x28) = 4;
}

extern u16 lbl_8029B7A4[10];
s32 fn_8020119C(void) {
    return Process_Find(&lbl_8029B7A4) != 0;
}

void *fn_802011D0(void) {
    void *Process_Create(void *, s32);
    s32 fn_800C4740(void);
    s32 fn_800C4304(void *);
    void *temp_r31;

    temp_r31 = Process_Create(lbl_8029B7A4, 3);
    M2C_FIELD(temp_r31, s32 *, 0x34) = fn_800C4740();
    M2C_FIELD(temp_r31, s32 *, 0x38) = fn_800C4304(lbl_802820B8 + 0x79);
    return temp_r31;
}

void fn_80201228(void *arg0) {
    void fn_8003F670(u32);
    extern u32 lbl_80368448;
    if (lbl_80368448 != 0) {
        FileCache_ReleaseSlot(&lbl_80368448);
    }
    if (M2C_FIELD(arg0, u32 *, 0x30) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0;
    }
}

s32 fn_8020127C(void) {
    extern u32 gGameFlags;
    return !(gGameFlags & 0x20);
}

void fn_80201290(void *arg0) {
    s32 OSDisableInterrupts(void);
    void OSRestoreInterrupts(s32);
    s32 OSDisableScheduler(void);
    s32 OSEnableScheduler(void);
    void fn_8005BA08(s8);
    void fn_8005C870(void *, s32);
    s32 temp_r31;
    s32 temp_r31_2;

    temp_r31 = OSDisableInterrupts();
    OSDisableScheduler();
    OSRestoreInterrupts(temp_r31);
    fn_8005BA08((s8) M2C_FIELD(arg0, s32 *, 0x38));
    fn_8005C870(lbl_802820B8 + 0x53, 0);
    fn_8005C870(lbl_802820B8 + 0x68, 0);
    fn_8005BA08((s8) M2C_FIELD(arg0, s32 *, 0x34));
    temp_r31_2 = OSDisableInterrupts();
    OSEnableScheduler();
    OSRestoreInterrupts(temp_r31_2);
}

#pragma opt_common_subs off
void fn_80201328(void *arg0) {
    u8 FileCache_IsReady(void *);
    u32 Archive_Load(void *);
    void Process_ClearFunc(void *);
    void fn_8006EEFC(void *, void *);

    if (!FileCache_IsReady(lbl_802820B8 + 0x53) || !FileCache_IsReady(lbl_802820B8 + 0x68)) {
        return;
    }
    if (lbl_80368448 == 0) {
        fn_8006EEFC(&lbl_80368448, lbl_802820B8 + 0x53);
    }
    M2C_FIELD(arg0, u32 *, 0x30) = Archive_Load(lbl_802820B8 + 0x68);
    Process_ClearFunc(arg0);
}

#pragma push
#pragma cplusplus on
extern "C" void fn_802013C0(s32 arg0) {
    extern s8 lbl_8036844C, lbl_8036844D;
    extern u8 lbl_80339348[], lbl_80339354[], lbl_8029B798[];
    s32 fn_80209A78(void);
    void *Heap_Alloc(u32);
    void fn_8013CE7C(void *);
    void fn_8013CE10(void *);
    void fn_8013CED0(void *, void *);
    u8 *Ui_CreateMenu(void *, s32, s32);
    extern void *lbl_8029B864[];

    struct Item {
        u32 f0;
        u8 *f4;
        u8 f8;
        u8 f9;
        void Set(u8 *s) {
            f4 = s;
            f8 = 1;
            f9 |= 1;
        }
    };
    struct Base {
        u32 pad;
    };
    struct Obj : public Base {
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
        virtual s16 v18() = 0;
        virtual s32 v19() = 0;
    };

    u8 *menu;
    u8 *obj;
    bool flags;

    if (lbl_8036844C == 0) {
        fn_8013CE7C(lbl_80339348);
        lbl_8036844C = 1;
    }
    if (lbl_8036844D == 0) {
        fn_8013CE10(lbl_80339354);
        lbl_8036844D = 1;
    }
    ((Item *)lbl_80339348)->Set(lbl_802820B8 + 0x7E);
    ((Item *)lbl_80339354)->Set(lbl_802820B8 + 0x91);
    obj = (u8 *)Heap_Alloc(0x30);
    if (obj) {
        fn_8013CED0(obj, lbl_8029B798);
        *(void **)(obj + 4) = lbl_8029B864;
        *(s16 *)(obj + 0xC) = 0x1C0;
        *(s16 *)(obj + 0xE) = 0xAC;
        *(s16 *)(obj + 8) = (0x260 - ((Obj *)obj)->v18()) >> 1;
        *(s16 *)(obj + 10) = 0x1A8 - ((Obj *)obj)->v19();
        obj[0x24] = 1;
    }
    *(u8 **)(obj + 0x20) = lbl_802820B8 + 0xA3;
    menu = Ui_CreateMenu(obj, arg0, 0);
    flags = (fn_80209A78() == 0);
    ((s8 *)menu)[0x62] = flags;
    ((s8 *)menu)[0x63] = flags;
}
#pragma cplusplus off
#pragma pop
void fn_80201534(void) {
    extern u8 gUiContext[];
    extern s32 gGameFlags;
    extern void fn_80209AE8(s32);
    
    u8 temp_r0 = gUiContext[8];
    switch ((s32)temp_r0) {
        case 0x81:
            gGameFlags |= 0x100;
            fn_80209AE8(1);
            return;
        case 0x80:
            gGameFlags &= 0xFFFFFEFF;
            fn_80209AE8(0);
            return;
    }
}

#pragma opt_common_subs reset

void fn_802015A0(void) {

}

void *fn_802015A4(void *arg0, s16 arg1) {
    void Heap_Free(void *);
    extern void *lbl_8029B864[];
    extern void *lbl_80291DA0[];
    extern void *lbl_802920E0[];

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 4) = lbl_8029B864;
        if (arg0 != NULL) {
            *(void **)((u8 *)arg0 + 4) = lbl_80291DA0;
            if (arg0 != NULL) {
                *(void **)((u8 *)arg0 + 4) = lbl_802920E0;
            }
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void fn_80201610(void *arg0) {
    fn_8013CD7C();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x258;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

#pragma cplusplus on
extern "C" void fn_8020164C(void *arg0, void *arg1) {
    extern u8 gUnitInfoPopup[];
    u8 Ui_IsUnitInfoPopupOpen(void *);
    void Ui_HideUnitInfoPopup(void *);
    void *GfxEnt_Get(u8);
    void fn_80024B6C(void);
    struct Handler {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual void v8() = 0;
        virtual void v9(void *, void *) = 0;
    };
    u32 v;
    void *ent;
    u8 *unit;

    unit = (u8 *)arg1;
    v = *(u32 *)((u8 *)arg0 + 0x28);
    *(u32 *)((u8 *)arg0 + 0x28) = ++v;
    if (v >= *(u32 *)((u8 *)arg0 + 0x2C)) {
        if (Ui_IsUnitInfoPopupOpen(gUnitInfoPopup) != 0) {
            Ui_HideUnitInfoPopup(gUnitInfoPopup);
        }
        ent = GfxEnt_Get(unit[0x40 + (s8)unit[0x62]]);
        (*(Handler **)((u8 *)ent + 0x34))->v9(arg1, ent);
    } else {
        fn_80024B6C();
    }
}
#pragma cplusplus off
s32 fn_802016E4(void) {
    return 0x9C;
}

#pragma cplusplus on
extern "C" void fn_802016EC(void *arg0) {
    void fn_80200A7C(s32, s32, s32, s32, s32 *);
    extern s32 lbl_8036BBD0;
    struct Obj {
        u8 pad[4];
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
        virtual void v15();
        virtual void v16();
        virtual void v17();
        virtual s32 v18();
        virtual s32 v19();
        virtual void v20();
        virtual void v21();
        virtual void v22();
        virtual void v23();
        virtual void v24();
        virtual void v25();
        virtual void v26();
        virtual void v27();
        virtual void v28();
        virtual void v29();
        virtual void v30();
    };
    s32 sp8;
    Obj *self = (Obj *)arg0;

    self->v30();
    sp8 = lbl_8036BBD0;
    fn_80200A7C(0, 0, self->v18(), self->v19(), &sp8);
}
#pragma push
#pragma opt_strength_reduction off
extern "C" void fn_80201778(void *arg0) {
    void Prim2D_SetAlphaByte(s32);
    void Prim2D_AddZ(f32);
    void Prim2D_SetTex(s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    void Text_Draw(s32, s32, s32, void *, ...);
    s32 Text_MeasureHeight(s32, f32);
    char *String_CStr(void *);
    void fn_800C9874(void *, u32, char);
    void String_Destroy(void *, s16);
    s8 *fn_80104970(s8 *);
    u8 *fn_8013CD90(void *);
    extern u8 lbl_802820B8[];
    extern f32 lbl_8036BBD8;
    extern f32 lbl_8036BC08;
    extern f32 lbl_8036BC0C;
    extern f32 lbl_8036BC10;
    extern f32 lbl_8036BC14;

    struct Obj {
        u8 pad[4];
        virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
        virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
        virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
        virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
        virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
        virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
        virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
        virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
        virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
        virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    };

    typedef struct { u32 size; u32 cap; char *data; } String;
    struct Icons { u8 pad[0xB6]; u8 icon; };

    struct Icons *icons;
    String sp8;
    f64 xf;
    f32 var_f30;
    s8 *var_r29;
    u8 var_r28;
    u32 obj;
    s8 *endPtr;

    obj = (u32)arg0;
    ((Obj *)obj)->v39();
    if (fn_8013CD90((void *)obj) != NULL) {
        Prim2D_Begin();
        Prim2D_AddZ(lbl_8036BC08);
        Prim2D_SetTex(0, 0x13);
        Prim2D_PrepareTex();
        var_f30 = lbl_8036BC0C;
        var_r29 = (s8 *)fn_8013CD90((void *)obj);
        xf = lbl_8036BC10;
        icons = (struct Icons *)lbl_802820B8;
        for (;;) {
            var_r28 = 0;
            sp8.cap = 0;
            sp8.size = 0;
            sp8.data = 0;
            sp8.cap = 0;
            while (var_r28 == 0) {
                switch ((s8)*var_r29) {
                case 0:
                case 0xA:
                    fn_800C9874(&sp8, 1, 0);
                    var_r28 = 1;
                    break;
                default:
                    endPtr = fn_80104970(var_r29);
                    while (var_r29 != endPtr) {
                        fn_800C9874(&sp8, 1, (s8)*var_r29);
                        var_r29++;
                    }
                    break;
                }
            }
            Text_Draw((s32)xf, (s32)var_f30, 1, &icons->icon, String_CStr(&sp8));
            if (*var_r29 == 0xA) {
                var_f30 += (f32)Text_MeasureHeight(-1, lbl_8036BBD8);
                String_Destroy(&sp8, -1);
            } else if ((s8)*var_r29 == 0) {
                String_Destroy(&sp8, -1);
                break;
            } else {
                String_Destroy(&sp8, -1);
            }
            var_r29++;
        }
    }
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BC14);
    Prim2D_SetAlphaByte(0x80);
    Prim2D_PrepareTex();
}
#pragma pop
extern "C" void fn_8020197C(void *arg0, void *arg1) {
    u32 OSGetTick(void);
    void Prim2D_SetColorPacked(s32 *);
    void Prim2D_SetAlpha(s32);
    void Prim2D_SwapUvU(void);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_AddZ(f32);
    void Prim2D_SetTex(void *, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    void *GfxEnt_Get(u8);
    s32 Text_MeasureHeight(s32, f32);
    s32 Text_MeasureWidth(void *, s32, f32);
    void Ui_LoadAtlasTex(void *, void *, s32);
    s32 *Ui_GetColor(s32);
    u16 GXGetTexObjWidth(void *);
    u16 GXGetTexObjHeight(void *);
    f64 fn_802380D0(f32);
    extern u32 lbl_80368448;
    extern f32 lbl_8036BBD8, lbl_8036BBF8, lbl_8036BC14, lbl_8036BC18, lbl_8036BC1C;
    extern f32 lbl_8036BC20, lbl_8036BC24, lbl_8036BC28, lbl_8036BC2C, lbl_8036BC30, lbl_8036BC34;

    struct TextObj {
        virtual void v0() = 0;
        virtual void *v1() = 0;
    };
    struct Obj {
        u8 pad[4];
        virtual void v0() = 0; virtual void v1() = 0; virtual void v2() = 0; virtual void v3() = 0;
        virtual void v4() = 0; virtual void v5() = 0; virtual void v6() = 0; virtual void v7() = 0;
        virtual void v8() = 0; virtual void v9() = 0; virtual void v10() = 0; virtual void v11() = 0;
        virtual void v12() = 0; virtual void v13() = 0; virtual void v14() = 0; virtual void v15() = 0;
        virtual void v16() = 0; virtual void v17() = 0; virtual void v18() = 0; virtual void v19() = 0;
        virtual s16 v20() = 0;
        virtual void v21() = 0; virtual void v22() = 0; virtual void v23() = 0; virtual void v24() = 0;
        virtual void v25() = 0; virtual void v26() = 0; virtual void v27() = 0; virtual void v28() = 0;
        virtual void v29() = 0; virtual void v30() = 0; virtual void v31() = 0; virtual void v32() = 0;
        virtual void v33() = 0; virtual void v34() = 0;
        virtual s16 v35() = 0;
        virtual void v36() = 0; virtual void v37() = 0;
        virtual s16 v38() = 0;
    };
    struct {
        u8 buf[0x20];
        u16 w;
        u16 h;
    } tex0;
    struct {
        u8 buf[0x20];
        u16 w;
        u16 h;
    } tex1;
    s32 col2, col1, col0;
    s16 gx;
    s16 gy;
    s16 wpad;
    void *glyph;
    s16 tw;
    s16 ax;
    s16 y;
    s16 wide, half, mid, left, top, lx, ty, bw, gap;
    s16 posx;
    TextObj *textObj;
    s32 alpha;
    f32 pulse;
    f32 t;
    u8 flag;
    s16 x;
    u8 *grp;
    Obj *self;

    self = (Obj *)arg0;
    grp = (u8 *)arg1;
    glyph = GfxEnt_Get(grp[0x40 + (s8)grp[0x62]]);
    gx = *(s16 *)((u8 *)glyph + 0x30);
    gy = *(s16 *)((u8 *)glyph + 0x32);
    wpad = Text_MeasureHeight(-1, lbl_8036BBD8);
    textObj = *(TextObj **)((u8 *)glyph + 0x34);
    tw = Text_MeasureWidth(textObj->v1(), -1, lbl_8036BBD8);
    posx = *(s16 *)(grp + 0x38);
    ax = (s16)(gx - ((s32)(((u32)tw >> 31) + tw) >> 1));
    if (posx < 0 || *(s16 *)(grp + 0x3A) < 0) {
        *(s16 *)(grp + 0x38) = ax;
        *(s16 *)(grp + 0x3A) = gy;
    } else {
        s32 s = posx + ax;
        *(s16 *)(grp + 0x38) = (s16)((s32)(((u32)s >> 31) + s) >> 1);
        s = *(s16 *)(grp + 0x3A) + gy;
        *(s16 *)(grp + 0x3A) = (s16)((s32)(((u32)s >> 31) + s) >> 1);
    }
    Prim2D_Begin();
    Prim2D_AddZ(lbl_8036BBF8);
    Prim2D_PrepareTex();
    {
        s16 diff = self->v38() - wpad;
        t = lbl_8036BC14 * (f32)diff;
        y = (s16)((f32)*(s16 *)(grp + 0x3A) + t);
    }
    x = *(s16 *)(grp + 0x38);
    Ui_LoadAtlasTex((void *)lbl_80368448, tex0.buf, 0);
    tex0.w = GXGetTexObjWidth(tex0.buf);
    tex0.h = GXGetTexObjHeight(tex0.buf);
    Prim2D_Begin();
    Prim2D_SetTex(tex0.buf, 0x10);
    Prim2D_PrepareTex();
    {
        u32 tick = OSGetTick();
        u32 ms = tick / ((*(u32 *)0x800000F8 >> 2) / 1000);
        pulse = lbl_8036BC20 * (lbl_8036BBD8 + (f32)fn_802380D0(lbl_8036BC1C * ((f32)(ms % 500) / lbl_8036BC18)));
    }
    Prim2D_AddPrim(1);
    Prim2D_SetRect((f32)(x - 0x20) - pulse, lbl_8036BC14 * pulse + (f32)(y + 0xC), (f32)tex0.w, (f32)tex0.h);
    Prim2D_EndPrim();
    if (*(u8 *)((u8 *)self + 0x24) != 0) {
        wide = self->v35();
        half = self->v20();
        Prim2D_Begin();
        Prim2D_AddZ(lbl_8036BC24);
        Prim2D_PrepareTex();
        flag = 0;
        if (grp[0x2D] == 0 && grp[0x2E] == 0) {
            flag = 1;
        }
        mid = wide;
        alpha = 0x19;
        top = *(s16 *)(grp + 0x3A) + (half >> 1);
        left = *(s16 *)(grp + 0x38) + (tw >> 1);
        if (flag) {
            u32 tick = OSGetTick();
            u32 ms = tick / ((*(u32 *)0x800000F8 >> 2) / 1000);
            alpha = (s32)(lbl_8036BC30 * (lbl_8036BC14 * (f32)fn_802380D0(lbl_8036BC1C * ((f32)(ms % 1500) / lbl_8036BC28)) + lbl_8036BC14) + lbl_8036BC2C);
        }
        if (wide < 0x50) {
            mid = 0x50;
            half = mid;
        }
        half >>= 1;
        Ui_LoadAtlasTex((void *)lbl_80368448, tex1.buf, 1);
        tex1.w = GXGetTexObjWidth(tex1.buf);
        tex1.h = GXGetTexObjHeight(tex1.buf);
        Prim2D_Begin();
        Prim2D_SetTex(tex1.buf, 0x10);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        lx = left - half;
        ty = top - 0xA;
        Prim2D_SetRect((f32)lx, (f32)ty, (f32)tex1.w, (f32)tex1.h);
        col0 = *Ui_GetColor(0x18);
        Prim2D_SetColorPacked(&col0);
        Prim2D_SetAlpha(alpha);
        Prim2D_EndPrim();
        Prim2D_AddPrim(1);
        Prim2D_SetRect((f32)((left + half) - (s16)tex1.w), (f32)ty, (f32)tex1.w, (f32)tex1.h);
        Prim2D_SwapUvU();
        col1 = *Ui_GetColor(0x18);
        Prim2D_SetColorPacked(&col1);
        Prim2D_SetAlpha(alpha);
        Prim2D_EndPrim();
        bw = (s16)tex1.w;
        gap = mid - (bw * 2);
        if (gap > 0) {
            Ui_LoadAtlasTex((void *)lbl_80368448, tex1.buf, 2);
            tex1.w = GXGetTexObjWidth(tex1.buf);
            tex1.h = GXGetTexObjHeight(tex1.buf);
            Prim2D_Begin();
            Prim2D_SetTex(tex1.buf, 0x10);
            Prim2D_PrepareTex();
            Prim2D_AddPrim(1);
            Prim2D_SetRect((f32)(bw + lx), (f32)ty, (f32)gap, (f32)tex1.h);
            col2 = *Ui_GetColor(0x18);
            Prim2D_SetColorPacked(&col2);
            Prim2D_SetAlpha(alpha);
            Prim2D_EndPrim();
        }
        Prim2D_Begin();
        Prim2D_AddZ(lbl_8036BC34);
        Prim2D_PrepareTex();
    }
}
#pragma global_optimizer reset
#pragma dont_inline reset

extern "C" void PSMTXIdentity(register f32 (*m)[4]) {
    extern const f32 lbl_8036BC3C;
    extern const f32 lbl_8036BC38;
    register f32 c_zero = lbl_8036BC3C;
    register f32 c_one = lbl_8036BC38;
    register f32 c_01;
    register f32 c_10;

    asm {
        psq_st c_zero, 8(m), 0, 0
        ps_merge01 c_01, c_zero, c_one
        psq_st c_zero, 24(m), 0, 0
        ps_merge10 c_10, c_one, c_zero
        psq_st c_zero, 32(m), 0, 0
        psq_st c_01, 16(m), 0, 0
        psq_st c_10, 0(m), 0, 0
        psq_st c_10, 40(m), 0, 0
    }
}

#pragma use_lmw_stmw reset
#pragma cplusplus reset

typedef f32 Mtx[3][4];
asm void PSMTXCopy(const register Mtx src, register Mtx dst) {
psq_l f0, 0(src), 0, 0
psq_st f0, 0(dst), 0, 0
psq_l f1, 8(src), 0, 0
psq_st f1, 8(dst), 0, 0
psq_l f2, 16(src), 0, 0
psq_st f2, 16(dst), 0, 0
psq_l f3, 24(src), 0, 0
psq_st f3, 24(dst), 0, 0
psq_l f4, 32(src), 0, 0
psq_st f4, 32(dst), 0, 0
psq_l f5, 40(src), 0, 0
psq_st f5, 40(dst), 0, 0
}

static f32 lbl_80366F10[2] = {
    0.0f,
    1.0f};
asm void PSMTXConcat(const register Mtx a, const register Mtx b, register Mtx ab) {
nofralloc
stwu r1, -64(r1)
psq_l f0, 0(a), 0, 0
stfd f14, 8(r1)
psq_l f6, 0(b), 0, 0
lis r6, lbl_80366F10@ha
psq_l f7, 8(b), 0, 0
stfd f15, 16(r1)
addi r6, r6, lbl_80366F10@l
stfd f31, 40(r1)
psq_l f8, 16(b), 0, 0
ps_muls0 f12, f6, f0
psq_l f2, 16(a), 0, 0
ps_muls0 f13, f7, f0
psq_l f31, 0(r6), 0, 0
ps_muls0 f14, f6, f2
psq_l f9, 24(b), 0, 0
ps_muls0 f15, f7, f2
psq_l f1, 8(a), 0, 0
ps_madds1 f12, f8, f0, f12
psq_l f3, 24(a), 0, 0
ps_madds1 f14, f8, f2, f14
psq_l f10, 32(b), 0, 0
ps_madds1 f13, f9, f0, f13
psq_l f11, 40(b), 0, 0
ps_madds1 f15, f9, f2, f15
psq_l f4, 32(a), 0, 0
psq_l f5, 40(a), 0, 0
ps_madds0 f12, f10, f1, f12
ps_madds0 f13, f11, f1, f13
ps_madds0 f14, f10, f3, f14
ps_madds0 f15, f11, f3, f15
psq_st f12, 0(ab), 0, 0
ps_muls0 f2, f6, f4
ps_madds1 f13, f31, f1, f13
ps_muls0 f0, f7, f4
psq_st f14, 16(ab), 0, 0
ps_madds1 f15, f31, f3, f15
psq_st f13, 8(ab), 0, 0
ps_madds1 f2, f8, f4, f2
ps_madds1 f0, f9, f4, f0
ps_madds0 f2, f10, f5, f2
lfd f14, 8(r1)
psq_st f15, 24(ab), 0, 0
ps_madds0 f0, f11, f5, f0
psq_st f2, 32(ab), 0, 0
ps_madds1 f0, f31, f5, f0
lfd f15, 16(r1)
psq_st f0, 40(ab), 0, 0
lfd f31, 40(r1)
addi r1, r1, 64
blr
}

#pragma push
#pragma scheduling off
void fn_802020F0(const register f32 (*src)[4], register f32 (*xPose)[4]) {
    extern const f32 lbl_8036BC3C;
    register f32 c_zero = lbl_8036BC3C;
    register f32 row0a;
    register f32 row1a;
    register f32 row0b;
    register f32 row1b;
    register f32 trns0;
    register f32 trns1;
    register f32 trns2;

    asm {
        psq_l row0a, 0(src), 0, 0
    }
    xPose[2][3] = c_zero;
    asm {
        psq_l row1a, 16(src), 0, 0
        ps_merge00 trns0, row0a, row1a
        psq_l row0b, 8(src), 1, 0
        ps_merge11 trns1, row0a, row1a
        psq_l row1b, 24(src), 1, 0
        psq_st trns0, 0(xPose), 0, 0
        psq_l row0a, 32(src), 0, 0
        ps_merge00 trns2, row0b, row1b
        psq_st trns1, 16(xPose), 0, 0
        ps_merge00 trns0, row0a, c_zero
        psq_st trns2, 32(xPose), 0, 0
        ps_merge10 trns1, row0a, c_zero
        psq_st trns0, 8(xPose), 0, 0
    }
    row0b = src[2][2];
    asm {
        psq_st trns1, 24(xPose), 0, 0
    }
    xPose[2][2] = row0b;
}
#pragma pop

asm u32 PSMTXInverse(const register Mtx src, register Mtx inv) {
psq_l f0, 0(src), 1, 0
psq_l f1, 4(src), 0, 0
psq_l f2, 16(src), 1, 0
ps_merge10 f6, f1, f0
psq_l f3, 20(src), 0, 0
psq_l f4, 32(src), 1, 0
ps_merge10 f7, f3, f2
psq_l f5, 36(src), 0, 0
ps_mul f11, f3, f6
ps_mul f13, f5, f7
ps_merge10 f8, f5, f4
ps_msub f11, f1, f7, f11
ps_mul f12, f1, f8
ps_msub f13, f3, f8, f13
ps_mul f10, f3, f4
ps_msub f12, f5, f6, f12
ps_mul f9, f0, f5
ps_mul f8, f1, f2
ps_sub f6, f6, f6
ps_msub f10, f2, f5, f10
ps_mul f7, f0, f13
ps_msub f9, f1, f4, f9
ps_madd f7, f2, f12, f7
ps_msub f8, f0, f3, f8
ps_madd f7, f4, f11, f7
ps_cmpo0 cr0, f7, f6
bne skip_return
li r3, 0
blr
skip_return:
fres f0, f7
ps_add f6, f0, f0
ps_mul f5, f0, f0
ps_nmsub f0, f7, f5, f6
lfs f1, 12(src)
ps_muls0 f13, f13, f0
lfs f2, 28(src)
ps_muls0 f12, f12, f0
lfs f3, 44(src)
ps_muls0 f11, f11, f0
ps_merge00 f5, f13, f12
ps_muls0 f10, f10, f0
ps_merge11 f4, f13, f12
ps_muls0 f9, f9, f0
psq_st f5, 0(inv), 0, 0
ps_mul f6, f13, f1
psq_st f4, 16(inv), 0, 0
ps_muls0 f8, f8, f0
ps_madd f6, f12, f2, f6
psq_st f10, 32(inv), 1, 0
ps_nmadd f6, f11, f3, f6
psq_st f9, 36(inv), 1, 0
ps_mul f7, f10, f1
ps_merge00 f5, f11, f6
psq_st f8, 40(inv), 1, 0
ps_merge11 f4, f11, f6
psq_st f5, 8(inv), 0, 0
ps_madd f7, f9, f2, f7
psq_st f4, 24(inv), 0, 0
ps_nmadd f7, f8, f3, f7
li r3, 1
psq_st f7, 44(inv), 1, 0
}

asm u32 fn_80202238(const register Mtx src, register Mtx invX) {
psq_l f0, 0(src), 1, 0
psq_l f1, 4(src), 0, 0
psq_l f2, 16(src), 1, 0
ps_merge10 f6, f1, f0
psq_l f3, 20(src), 0, 0
psq_l f4, 32(src), 1, 0
ps_merge10 f7, f3, f2
psq_l f5, 36(src), 0, 0
ps_mul f11, f3, f6
ps_merge10 f8, f5, f4
ps_mul f13, f5, f7
ps_msub f11, f1, f7, f11
ps_mul f12, f1, f8
ps_msub f13, f3, f8, f13
ps_msub f12, f5, f6, f12
ps_mul f10, f3, f4
ps_mul f9, f0, f5
ps_mul f8, f1, f2
ps_msub f10, f2, f5, f10
ps_msub f9, f1, f4, f9
ps_msub f8, f0, f3, f8
ps_mul f7, f0, f13
ps_sub f1, f1, f1
ps_madd f7, f2, f12, f7
ps_madd f7, f4, f11, f7
ps_cmpo0 cr0, f7, f1
bne skip_return
li r3, 0
blr
skip_return:
fres f0, f7
psq_st f1, 12(invX), 1, 0
ps_add f6, f0, f0
ps_mul f5, f0, f0
psq_st f1, 28(invX), 1, 0
ps_nmsub f0, f7, f5, f6
psq_st f1, 44(invX), 1, 0
ps_muls0 f13, f13, f0
ps_muls0 f12, f12, f0
ps_muls0 f11, f11, f0
psq_st f13, 0(invX), 0, 0
psq_st f12, 16(invX), 0, 0
ps_muls0 f10, f10, f0
ps_muls0 f9, f9, f0
psq_st f11, 32(invX), 0, 0
psq_st f10, 8(invX), 1, 0
ps_muls0 f8, f8, f0
li r3, 1
psq_st f9, 24(invX), 1, 0
psq_st f8, 40(invX), 1, 0
}

extern void *IDShouldBe_8036859C;
extern void *fn_8020DAE0;
extern void fn_8020C1A4(u8, u32, void *);

extern u8 lbl_80289EB8[16];
#include "common.h"
#include <dolphin/os.h>
extern s32 gSaveDataBase;
extern s32 fn_80015A14(void);
#include "common.h"
#include <dolphin/os.h>
extern s32 gFallingParticleVelY;
extern s32 gFallingParticleVelXCenter;
extern s32 gFallingParticleVelYCenter;
extern s32 gFallingParticleVelXRange;
extern s32 gFallingParticleVelYRange;
extern u8 gFallingParticleAlphaMin;
extern u8 gFallingParticleAlphaMax;
extern f32 gFloatZero;
extern f32 gFloatOne;
#include "global.h"

extern u16 gGameFlags;

