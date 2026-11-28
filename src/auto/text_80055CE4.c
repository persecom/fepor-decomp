/* Functions from 0x80055C74 to 0x8005A29C, found by decomp-toolkit. */
#include "common.h"
#pragma push
#pragma cplusplus on
class ScrollBarDrawInterface {
public:
 unsigned char data[0x2C];
 virtual int slot0();
 virtual int slot1();
 virtual int slot2();
 virtual int slot3();
 virtual int slot4();
 virtual int slot5();
 virtual int slot6();
 virtual int slot7();
};
#pragma pop
#pragma cplusplus off

typedef struct NodeLightPosition { f32 x,y,z; } NodeLightPosition;
typedef struct TrailNode40 { u32 v[9]; u8 r, g, b, a; } TrailNode40;
typedef union {
    u8 u8;
    u16 u16;
    u32 u32;
    s8 s8;
    s16 s16;
    s32 s32;
    f32 f32;
} PPCWGPipe;
volatile PPCWGPipe GXWGFifo : 0xCC008000;
static inline void GXPosition3f32(const f32 x, const f32 y, const f32 z) {
    GXWGFifo.f32 = x;
    GXWGFifo.f32 = y;
    GXWGFifo.f32 = z;
}
static inline void GXColor4u8(const u8 r, const u8 g, const u8 b, const u8 a) {
    GXWGFifo.u8 = r;
    GXWGFifo.u8 = g;
    GXWGFifo.u8 = b;
    GXWGFifo.u8 = a;
}
static inline void TrailNode_Copy(TrailNode40 *d, const TrailNode40 *s) {
d->v[0]=s->v[0]; d->v[1]=s->v[1]; d->v[2]=s->v[2];
d->v[3]=s->v[3]; d->v[4]=s->v[4]; d->v[5]=s->v[5];
d->v[6]=s->v[6]; d->v[7]=s->v[7]; d->v[8]=s->v[8];
d->r=s->r; d->g=s->g; d->b=s->b; d->a=s->a;
}

void *Process_CreateChild(void *, s32, void *);             /* extern */
s32 strcpy(void *, s32);                       /* extern */
extern u16 lbl_80285BD0[16];
extern const f64 lbl_80369160;    /* 0.5 double constant, .sdata2 */

void fn_80055CE4(void *arg0)
{
    extern u8 lbl_8026AD80[];
    extern u32 FileCache_IsReady(void *);
    extern void DebugPrint(const char *, ...);
    extern void Process_ClearFunc(void *);

    u8 *obj;
    u32 count;
    void (*callback)(void *);

    obj = (u8 *)arg0;

    count = *(u16 *)(obj + 0x68);
    *(u16 *)(obj + 0x68) = count + 1;

    if (count > 0x2A30 || (u8)FileCache_IsReady(obj + 0x30) != 0) {
        callback = *(void (**)(void *))(obj + 0x6C);

        if (callback != 0) {
            callback(*(void **)(obj + 0x18));
        }

        DebugPrint(
            (const char *)lbl_8026AD80 + 0x91,
            obj + 0x30
        );

        Process_ClearFunc(obj);
    }
}

void fn_80055D68(void *arg0) {
    *(u16 *)((char *)arg0 + 0x68) = 0;
    fn_8005C8B4((char *)arg0 + 0x30);
}

s32 fn_80055D94(void) {
    return 0;
}

void fn_80055D9C(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x32) = -1;
    }
}

void fn_80055DB0(void *arg0, u8 *arg1) {
    arg1[*(u8 *)((u8 *)arg0 + 0x30)] = 1;
}

#pragma optimization_level reset
void *fn_80055DC0(void *arg0, u32 *color, u32 priority, f32 intensity)
{
    void GfxEnt_ForEachKey(void *, void (*)(void *, u8 *), u8 *);
    void *Process_Create(void *, s32);
    void *Light_GetChannel(s32);
    void fn_80067304(void *);
    extern u8 lbl_80285BB0[];
    NodeLightPosition pos;
    u8 flags[8];
    u32 col;
    s32 channel;
    u8 *light;
    u8 *proc;

    flags[0] = 0;
    flags[1] = 0;
    flags[2] = 0;
    flags[3] = 0;
    flags[4] = 0;
    flags[5] = 0;
    flags[6] = 0;
    flags[7] = 0;
    GfxEnt_ForEachKey(lbl_80285BB0, fn_80055DB0, flags);
    if (!flags[4]) {
        channel = 4;
    } else if (!flags[5]) {
        channel = 5;
    } else if (!flags[6]) {
        channel = 6;
    } else if (!flags[7]) {
        channel = 7;
    } else {
        channel = -1;
    }
    if (channel < 0) {
        return NULL;
    }
    if (!priority) {
        priority = 3;
    }
    priority = (u32)Process_Create(lbl_80285BB0, priority);
    proc = (u8 *)priority;
    pos = *(NodeLightPosition *)arg0;
    col = *color;
    proc[0x30] = channel;
    proc[0x31] = 1;
    *(f32 *)(proc + 0x3C) = pos.x;
    *(f32 *)(proc + 0x40) = pos.y;
    *(f32 *)(proc + 0x44) = pos.z;
    *(f32 *)(proc + 0x48) = intensity;
    proc[0x38] = ((u8 *)&col)[0];
    proc[0x39] = ((u8 *)&col)[1];
    proc[0x3A] = ((u8 *)&col)[2];
    proc[0x3B] = ((u8 *)&col)[3];
    *(u16 *)(proc + 0x36) = 0;
    proc[0x32] = 1;
    *(void **)(proc + 0x4C) = Light_GetChannel(channel);
    fn_80067304(*(void **)(proc + 0x4C));
    light = *(u8 **)(proc + 0x4C);
    *(f32 *)(light + 8) = pos.x;
    *(f32 *)(light + 12) = pos.y;
    *(f32 *)(light + 16) = pos.z;
    light = *(u8 **)(proc + 0x4C);
    *(f32 *)(light + 0x20) = intensity;
    *(u16 *)(proc + 0x34) = 0xA;
    return proc;
}
void *fn_80055FB4(void *arg0, u32 *color, u32 priority, f32 intensity)
{
    void GfxEnt_ForEachKey(void *, void (*)(void *, u8 *), u8 *);
    void *Process_Create(void *, s32);
    void *Light_GetChannel(s32);
    void fn_80067304(void *);
    extern u8 lbl_80285BB0[];
    struct Position { f32 x, y, z; };
    struct Position pos;
    u8 flags[8];
    u32 col;
    u32 channel;
    u8 *light;
    u8 *proc;

    flags[0] = 0;
    flags[1] = 0;
    flags[2] = 0;
    flags[3] = 0;
    flags[4] = 0;
    flags[5] = 0;
    flags[6] = 0;
    flags[7] = 0;
    GfxEnt_ForEachKey(lbl_80285BB0, fn_80055DB0, flags);
    if (!flags[4]) {
        channel = 4;
    } else if (!flags[5]) {
        channel = 5;
    } else if (!flags[6]) {
        channel = 6;
    } else if (!flags[7]) {
        channel = 7;
    } else {
        channel = -1;
    }
    if ((s32)channel < 0) {
        return NULL;
    }
    if (!priority) {
        priority = 3;
    }
    priority = (u32)Process_Create(lbl_80285BB0, priority);
    proc = (u8 *)priority;
    pos = *(struct Position *)arg0;
    col = *color;
    proc[0x30] = channel;
    proc[0x31] = 0;
    *(f32 *)(proc + 0x3C) = pos.x;
    *(f32 *)(proc + 0x40) = pos.y;
    *(f32 *)(proc + 0x44) = pos.z;
    *(f32 *)(proc + 0x48) = intensity;
    proc[0x38] = ((u8 *)&col)[0];
    proc[0x39] = ((u8 *)&col)[1];
    proc[0x3A] = ((u8 *)&col)[2];
    proc[0x3B] = ((u8 *)&col)[3];
    *(u16 *)(proc + 0x36) = 0;
    proc[0x32] = 1;
    *(void **)(proc + 0x4C) = Light_GetChannel(channel);
    fn_80067304(*(void **)(proc + 0x4C));
    light = *(u8 **)(proc + 0x4C);
    *(f32 *)(light + 8) = pos.x;
    *(f32 *)(light + 12) = pos.y;
    *(f32 *)(light + 16) = pos.z;
    light = *(u8 **)(proc + 0x4C);
    *(f32 *)(light + 0x20) = intensity;
    *(u16 *)(proc + 0x34) = 20;
    return proc;
}

void fn_800561A8(void) {
    M2C_UNK fn_800561EC();
    fn_800561EC();
}

void fn_800561C8(void *arg0) {
    M2C_UNK fn_80067304(s32);
    fn_80067304(M2C_FIELD(arg0, s32 *, 0x4C));
}

#pragma opt_common_subs off
#pragma push
#pragma optimization_level 2
#pragma opt_common_subs off
#pragma opt_lifetimes off
volatile int fn_800561EC(void *arg0) {
  void Process_ClearFunc(void *);
  extern const f32 gF32_0;
  extern const f32 lbl_8036910C;
  extern const f32 lbl_80369110;
  extern const f32 lbl_80369114;
  extern const f64 lbl_80369118;
  extern const f64 lbl_80369120;
  extern u32 lbl_80369100;
  s16 new_var2;
  u8 new_var;
  u8 sp8[4];
  s32 period;
  s32 pos;
  s32 half;
  s32 t;
  f32 f;
  u8 *dst;
  u8 c1;
  u8 c0;
  u8 c2;
  u8 b;
  u8 r;
  u8 g;

  *((u32 *) sp8) = lbl_80369100;
  switch (*((u8 *) (((u8 *) arg0) + 0x31)))
  {
    case 0:
      *((s16 *) (((u8 *) arg0) + 0x36)) += 1;
      new_var2 = *((s16 *) (((u8 *) arg0) + 0x34));
      if ((*((s16 *) (((u8 *) arg0) + 0x36))) >= new_var2)
      {
        *((s16 *) (((u8 *) arg0) + 0x36)) = *((s16 *) (((u8 *) arg0) + 0x34));
        Process_ClearFunc(arg0);
      }
      period = *((s16 *) (((u8 *) arg0) + 0x34));
      pos = *((s16 *) (((u8 *) arg0) + 0x36));
      half = period >> 1;
      pos = pos % period;
      if (pos < half)
      {
        f = gF32_0 + ((((f32) pos) * lbl_8036910C) / ((f32) half));
      }
      else
      {
        f = lbl_8036910C + ((((f32) (pos - half)) * lbl_80369110) / ((f32) half));
      }
      t = (s32) f;
      c0 = *((u8 *) (((u8 *) arg0) + 0x38));
      c1 = *((u8 *) (((u8 *) arg0) + 0x39));
      c2 = *((u8 *) (((u8 *) arg0) + 0x3A));
      dst = *((u8 **) (((u8 *) arg0) + 0x4C));
      r = (u8) (((((f32) t) * (((f32) c0) - gF32_0)) * lbl_80369114) + gF32_0);
      g = (u8) (((((f32) t) * (((f32) c1) - gF32_0)) * lbl_80369114) + gF32_0);
      b = (u8) (((((f32) t) * (((f32) c2) - gF32_0)) * lbl_80369114) + gF32_0);
      dst[4] = r;
      sp8[0] = r;
      dst[5] = g;
      sp8[1] = g;
      dst[6] = b;
      sp8[2] = b;
      dst[7] = sp8[3];
      break;

    case 1:
      *((s16 *) (((u8 *) arg0) + 0x36)) += *((s8 *) (((u8 *) arg0) + 0x32));
      if ((*((s16 *) (((u8 *) arg0) + 0x36))) <= 0)
      {
        *((s16 *) (((u8 *) arg0) + 0x36)) = 0;
        Process_ClearFunc(arg0);
      }
      if ((*((s16 *) (((u8 *) arg0) + 0x36))) >= (*((s16 *) (((u8 *) arg0) + 0x34))))
      {
        *((s16 *) (((u8 *) arg0) + 0x36)) = *((s16 *) (((u8 *) arg0) + 0x34));
      }
      c1 = *((u8 *) (((u8 *) arg0) + 0x39));
      c0 = *((u8 *) (((u8 *) arg0) + 0x38));
      new_var = *((u8 *) (((u8 *) arg0) + 0x3A));
      pos = *((s16 *) (((u8 *) arg0) + 0x36));
      c2 = new_var;
      period = *((s16 *) (((u8 *) arg0) + 0x34));
      dst = *((u8 **) (((u8 *) arg0) + 0x4C));
      r = (u8) (gF32_0 + ((((f32) pos) * (((f32) c0) - gF32_0)) / ((f32) period)));
      g = (u8) (gF32_0 + ((((f32) pos) * (((f32) c1) - gF32_0)) / ((f32) period)));
      b = (u8) (gF32_0 + ((((f32) pos) * (((f32) c2) - gF32_0)) / ((f32) period)));
      dst[4] = r;
      dst[5] = g;
      dst[6] = b;
      sp8[0] = r;
      sp8[1] = g;
      sp8[2] = b;
      dst[7] = sp8[3];
      break;
  }
}
#pragma pop
void fn_80056580(void) {
    void *Process_Find(void *);
    extern u8 lbl_80285B90[];
    void *temp_r3;

    temp_r3 = Process_Find(lbl_80285B90);
    if (temp_r3 != NULL) {
        *(s8 *)((u8 *)temp_r3 + 0x36) = -1;
    }
}

void fn_800565B8(void *arg0) {
    M2C_UNK fn_80067708(M2C_UNK, M2C_UNK, void (*)(void *), void *);
    void fn_8000C188(void *);
    void fn_800566D4(void *);
    extern f64 lbl_80369118;
    extern f32 gF32_0;
    extern f32 lbl_80369134;
    extern f32 lbl_80369130;
    f32 temp_f0;

    fn_80067708(4, 4, fn_800566D4, arg0);
    temp_f0 = lbl_80369134 - (f32) (s8) M2C_FIELD(arg0, u8 *, 0x35);
    M2C_FIELD(arg0, s8 *, 0x34) = (s8) (gF32_0 + (lbl_80369130 - ((lbl_80369130 * (temp_f0 * temp_f0)) / (lbl_80369134 * lbl_80369134))));
    M2C_FIELD(arg0, u8 *, 0x35) = (u8) (M2C_FIELD(arg0, u8 *, 0x35) + M2C_FIELD(arg0, u8 *, 0x36));
    if ((s8) M2C_FIELD(arg0, u8 *, 0x35) > 0xA) {
        M2C_FIELD(arg0, u8 *, 0x35) = 0xA;
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 0x35) < 0) {
        M2C_FIELD(arg0, u8 *, 0x35) = 0;
        fn_8000C188(arg0);
    }
}

void fn_80056698(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_800566D4(void *arg0) {
    void fn_80066D00(s32);
    void fn_80067984(s32);
    void Camera_ApplyOrtho(s32);
    void GXSetVtxDesc(s32, s32);
    void GXClearVtxDesc(void);
    void GXSetVtxAttrFmt(s32, s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void GXSetNumChans(s32);
    void fn_802209FC(void);
    void GXBegin(s32, s32, s32);
    void fn_8022124C(s32, s32, s32, s32);
    void fn_802212FC(s32, s32, s32, s32);
    void GXCopyTex(void *, s32);
    void GXSetCullMode(s32);
    void GXSetBlendMode(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void GXInitTexObjLOD(void *, s32, s32, s32, s32, s32, f32, f32, f32);
    void fn_80222C50(void *, s32);
    void fn_80222EB4(void);
    void GXSetTevColorIn(s32, s32, s32, s32, s32);
    void GXSetTevAlphaIn(s32, s32, s32, s32, s32);
    void GXSetTevColorOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevAlphaOp(s32, s32, s32, s32, s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetNumTevStages(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void GXSetZMode(s32, s32, s32);
    extern const f32 gF32_0;
    extern const f32 lbl_8036912C;
    extern const f32 lbl_80369138;
    extern const f32 lbl_8036913C;
    u8 sp8[0x28];
    void *tex;
    u8 alpha;
    f32 fv1;
    f32 fu1;
    f32 fz1;
    f32 fzero;
    s32 endArg;

    tex = *(void **)((u8 *)arg0 + 0x30);
    if (tex != NULL) {
        alpha = *((u8 *)arg0 + 0x34);
        if (tex != NULL) {
            if (*((u8 *)arg0 + 0x37) == 0 && (s32)alpha > 0) {
                Camera_ApplyOrtho(0);
                GXSetCullMode(1);
                GXSetBlendMode(4, 0, 1, 1, 0, 0, 2);
                GXSetNumTevStages(1);
                GXSetTevColorIn(0, 0xF, 0xF, 0xF, 8);
                GXSetTevColorOp(0, 0, 0, 0, 1, 0);
                GXSetTevAlphaIn(0, 7, 7, 7, 5);
                GXSetTevAlphaOp(0, 0, 0, 0, 1, 0);
                GXSetNumChans(1);
                GXSetTevOrder(0, 0, 0, 4);
                fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
                fn_80222644(sp8, tex, 0x260, 0x1C0, 4, 0, 0, 0);
                GXInitTexObjLOD(sp8, 1, 1, 0, 0, 0, gF32_0, gF32_0, gF32_0);
                fn_80222C50(sp8, 0);
                fn_802245D8(1, 4, 5, 7);
                GXSetZMode(0, 3, 0);
                GXClearVtxDesc();
                GXSetVtxDesc(9, 1);
                GXSetVtxDesc(0xB, 1);
                GXSetVtxDesc(0xD, 1);
                GXSetVtxAttrFmt(0, 9, 1, 4, 0);
                GXSetVtxAttrFmt(0, 0xB, 1, 5, 0);
                GXSetVtxAttrFmt(0, 0xD, 1, 4, 0);
                GXBegin(0x80, 0, 4);
                fzero = gF32_0;
                fz1 = lbl_80369138;
                endArg = -1;
                fu1 = lbl_8036912C;
                fv1 = lbl_8036913C;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fz1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fu1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fz1;
                *(volatile f32 *)0xCC008000 = fv1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fu1;
                *(volatile f32 *)0xCC008000 = fu1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fv1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fu1;
                fn_80066D00(endArg);
                fn_80067984(0);
            }
            fn_8022124C(0, 0, 0x260, 0x1C0);
            fn_802212FC(0x260, 0x1C0, 4, 0);
            GXCopyTex(tex, 0);
            fn_802209FC();
            fn_80222EB4();
            *((u8 *)arg0 + 0x37) = 0;
        }
    }
}

void *fn_80056A04(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_800C4588(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void *fn_80056A60(void *arg0) {
    void *fn_800C4638(s32, void *, s32);
    extern u8 lbl_8026AD80[];
    extern f32 gF32_0;
    extern f32 lbl_80369140;
    extern f32 lbl_80369144;
    u8 *p;
    u8 b0;
    u8 b3;
    u16 h4;
    f32 f0;
    f32 f1;

    p = arg0;
    *(void **)(p + 0x14) = fn_800C4638(0x80, lbl_8026AD80 + 0xA9, 0);
    b3 = 0xFF;
    f0 = 0.0f;
    b0 = 0;
    f1 = 400.0f;
    h4 = 0x30;
    *(f32 *)(p + 8) = f0;
    f0 = 100.0f;
    *(f32 *)(p + 0xC) = f1;
    *(f32 *)(p + 0x10) = f0;
    *(u8 *)(p + 3) = b3;
    *(u8 *)(p + 0) = b0;
    *(u16 *)(p + 4) = h4;
    **(u8 **)(p + 0x14) = b0;
    return arg0;
}

void TextBanner_SetString(void *arg0, u32 arg1) {
    M2C_UNK strcpy(s32);
    if (arg1 != 0U) {
        strcpy(M2C_FIELD(arg0, s32 *, 0x14));
    }
}

#pragma push
#pragma optimization_level 4
#pragma opt_common_subs off
void fn_80056B0C(void *arg0) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(u8);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001003C(s16, s16, s32, s32, s32, void *, ...);
    s32 fn_80010770(u8 *, s32, f32);
    s32 fn_80010B78(u8 *, s32, f32);
    extern s32 lbl_803690D8;
    extern s32 lbl_803690DC;
    extern s32 lbl_803690E0;
    extern s32 lbl_803690E4;
    extern s32 lbl_803690E8;
    extern s32 lbl_803690EC;
    extern s32 lbl_803690F0;
    extern s32 lbl_803690F4;
    extern s32 lbl_803690F8;
    extern s32 lbl_803690FC;
    extern f32 lbl_80369108;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369138;
    extern s32 lbl_8036C41C;
    extern s32 lbl_8036C420;
    extern s32 lbl_8036C424;
    extern s32 lbl_8036C428;
    extern s32 lbl_8036C42C;
    extern s32 lbl_8036C430;
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
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r30;
    s32 temp_r3_2;
    s32 temp_r5;
    s32 temp_r4;
    u8 *temp_r3;
    u8 temp_r0;

    fn_8000A258();
    fn_80009B8C(*(u8 *)((u8 *)arg0 + 3));
    fn_80009D74(lbl_80369108, *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C + *(f32 *)((u8 *)arg0 + 0x10), lbl_8036912C);
    fn_8000A174(0, 0x12);
    fn_8000A248();
    temp_r0 = *(u8 *)((u8 *)arg0 + 0);
    temp_r30 = (s16)(*(s16 *)((u8 *)arg0 + 4) / 3);
    switch ((s32)temp_r0) {
    case 0:
        fn_80007898(3);
        fn_80007838(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        sp38 = lbl_803690DC;
        sp3C = lbl_803690D8;
        sp40 = lbl_8036C420;
        sp44 = lbl_8036C41C;
        fn_800072B0(&sp44, &sp40, &sp3C, &sp38);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        temp_r30 = temp_r30 + temp_r30;
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_800076AC(0, 0, 0, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_80007898(3);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)*(s16 *)((u8 *)arg0 + 4), lbl_80369108, lbl_80369108);
        sp28 = lbl_8036C428;
        sp2C = lbl_8036C424;
        sp30 = lbl_803690E4;
        sp34 = lbl_803690E0;
        fn_800072B0(&sp34, &sp30, &sp2C, &sp28);
        fn_800075D8();
        fn_80007884();
        break;
    case 1:
        fn_80007898(3);
        fn_80007838(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        sp18 = lbl_803690EC;
        sp1C = lbl_803690E8;
        sp20 = lbl_8036C430;
        sp24 = lbl_8036C42C;
        fn_800072B0(&sp24, &sp20, &sp1C, &sp18);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)*(s16 *)((u8 *)arg0 + 4), lbl_80369108, lbl_80369108);
        fn_800076AC(0, 0, 0, 0xFF);
        fn_800075D8();
        fn_80007884();
        break;
    case 2:
        fn_80007898(1);
        fn_80007838(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108);
        temp_r30 = temp_r30 + temp_r30;
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_800076AC(0, 0, 0, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_80007898(3);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)*(s16 *)((u8 *)arg0 + 4), lbl_80369108, lbl_80369108);
        sp8 = lbl_803690FC;
        spC = lbl_803690F8;
        sp10 = lbl_803690F4;
        sp14 = lbl_803690F0;
        fn_800072B0(&sp14, &sp10, &spC, &sp8);
        fn_800075D8();
        fn_80007884();
        break;
    }
    temp_r3 = *(u8 **)((u8 *)arg0 + 0x14);
    if ((temp_r3 != NULL) && ((s8)*temp_r3 != 0)) {
        fn_8000A258();
        fn_80009D74(*(f32 *)((u8 *)arg0 + 8), *(f32 *)((u8 *)arg0 + 0xC), *(f32 *)((u8 *)arg0 + 0x10), lbl_8036912C);
        fn_8000A174(0, 0x13);
        fn_8000A248();
        temp_r30 = fn_80010B78(*(u8 **)((u8 *)arg0 + 0x14), -1, lbl_8036912C);
        temp_r3_2 = fn_80010770(*(u8 **)((u8 *)arg0 + 0x14), -1, lbl_8036912C);
        temp_r5 = 0x260 - temp_r30;
        temp_r4 = (u32)temp_r5 >> 0x1FU;
        temp_r3_2 = *(s16 *)((u8 *)arg0 + 4) - temp_r3_2;
        temp_r4 = temp_r4 + temp_r5;
        temp_r0 = (u32)temp_r3_2 >> 0x1FU;
        temp_r4 = temp_r4 >> 1;
        temp_r0 = temp_r0 + temp_r3_2;
        temp_r0 = (u8)(temp_r0 >> 1); /* wrong */
        fn_8001003C((s16)temp_r4, (s16)((s32)(((u32)temp_r3_2 >> 0x1FU) + temp_r3_2) >> 1), 1, 1, 0, *(u8 **)((u8 *)arg0 + 0x14), lbl_8036912C, lbl_80369108);
    }
    fn_80009B28();
}
#pragma pop

#pragma push
#pragma cplusplus on
#pragma opt_lifetimes off
#pragma use_lmw_stmw on
extern "C" void fn_80057020(void *arg0) {
    void Prim2D_EmitQuad(void);
    void Prim2D_SetRectUv(f32, f32, f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_BindTexture(s32, u8, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    void fn_80057AE0(void *);
    extern f32 gF32_0;
    extern f64 lbl_80369118;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369148;
    extern f32 lbl_8036914C;
    typedef u8 (*VFn)(void *);
    s32 temp_r25;
    s32 var_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 var_r28;
    s32 var_r27;
    s32 temp_r4;
    void *temp_r3;

    (void)lbl_80369118;
    var_r31 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_r29 = (s32)*(f32 *)((u8 *)arg0 + 4);
    var_r28 = (s32)*(f32 *)((u8 *)arg0 + 8);
    if (*(void **)((u8 *)arg0 + 0x24) != NULL) {
        var_r28 += 8;
        var_r31 -= 0x10;
    }
    if (var_r31 < 0x10) {
        return;
    }
    Prim2D_Begin();
    Prim2D_SetTransform((f32)temp_r29, (f32)var_r28, lbl_8036912C + *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
    Prim2D_BindTexture(*(s32 *)arg0, ((ScrollBarDrawInterface *)arg0)->slot3(), 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRectUv(gF32_0, gF32_0, gF32_0, gF32_0, lbl_80369148, lbl_8036914C);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();
    Prim2D_Begin();
    Prim2D_SetTransform((f32)temp_r29, (f32)(var_r28 + 8), lbl_8036912C + *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
    Prim2D_BindTexture(*(s32 *)arg0, ((ScrollBarDrawInterface *)arg0)->slot4(), 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRectUv(gF32_0, gF32_0, gF32_0, gF32_0, lbl_80369148, (f32)(var_r31 - 0x10));
    Prim2D_EmitQuad();
    Prim2D_EndPrim();
    Prim2D_Begin();
    temp_r30 = var_r28 + var_r31;
    Prim2D_SetTransform((f32)temp_r29, (f32)(temp_r30 - 8), lbl_8036912C + *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
    Prim2D_BindTexture(*(s32 *)arg0, ((ScrollBarDrawInterface *)arg0)->slot5(), 0x11);
    Prim2D_PrepareTex();
    Prim2D_AddPrim(1);
    Prim2D_SetRectUv(gF32_0, gF32_0, gF32_0, gF32_0, lbl_80369148, lbl_8036914C);
    Prim2D_EmitQuad();
    Prim2D_EndPrim();
    temp_r4 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_r25 = (var_r31 * *(s32 *)((u8 *)arg0 + 0x1C)) / temp_r4;
    var_r27 = (var_r31 * *(s32 *)((u8 *)arg0 + 0x18)) / temp_r4;
    if (temp_r25 + var_r27 > var_r31) {
        var_r27 = var_r31 - var_r27;
    }
    if (var_r27 < 0x10) {
        if (var_r27 <= 4) {
            var_r27 = 4;
        }
        Prim2D_Begin();
        Prim2D_SetTransform((f32)temp_r29, (f32)(var_r28 + temp_r25), *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        Prim2D_BindTexture(*(s32 *)arg0, ((ScrollBarDrawInterface *)arg0)->slot1(), 0x11);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRectUv(gF32_0, gF32_0, gF32_0, gF32_0, lbl_80369148, (f32)var_r27);
        Prim2D_EmitQuad();
        Prim2D_EndPrim();
    } else {
        s32 mid;
        Prim2D_Begin();
        mid = var_r28 + temp_r25;
        Prim2D_SetTransform((f32)temp_r29, (f32)mid, *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        Prim2D_BindTexture(*(s32 *)arg0, ((ScrollBarDrawInterface *)arg0)->slot0(), 0x11);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRectUv(gF32_0, gF32_0, gF32_0, gF32_0, lbl_80369148, lbl_8036914C);
        Prim2D_EmitQuad();
        Prim2D_EndPrim();
        Prim2D_Begin();
        Prim2D_SetTransform((f32)temp_r29, (f32)(mid + 8), *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        Prim2D_BindTexture(*(s32 *)arg0, ((ScrollBarDrawInterface *)arg0)->slot1(), 0x11);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRectUv(gF32_0, gF32_0, gF32_0, gF32_0, lbl_80369148, (f32)(var_r27 - 0x10));
        Prim2D_EmitQuad();
        Prim2D_EndPrim();
        Prim2D_Begin();
        Prim2D_SetTransform((f32)temp_r29, (f32)(var_r27 + (mid - 8)), *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        Prim2D_BindTexture(*(s32 *)arg0, ((ScrollBarDrawInterface *)arg0)->slot2(), 0x11);
        Prim2D_PrepareTex();
        Prim2D_AddPrim(1);
        Prim2D_SetRectUv(gF32_0, gF32_0, gF32_0, gF32_0, lbl_80369148, lbl_8036914C);
        Prim2D_EmitQuad();
        Prim2D_EndPrim();
    }
    temp_r3 = *(void **)((u8 *)arg0 + 0x24);
    if (temp_r3 != NULL) {
        if (*(s32 *)((u8 *)arg0 + 0x1C) <= 0) {
            *((u8 *)temp_r3 + 0x55) = 0;
        } else {
            *((u8 *)temp_r3 + 0x55) = 1;
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) + *(s32 *)((u8 *)arg0 + 0x18) >= *(s32 *)((u8 *)arg0 + 0x14)) {
            *((u8 *)*(void **)((u8 *)arg0 + 0x28) + 0x55) = 0;
        } else {
            *((u8 *)*(void **)((u8 *)arg0 + 0x28) + 0x55) = 1;
        }
        {
            void *b = *(void **)((u8 *)arg0 + 0x24);
            *(f32 *)((u8 *)b + 0x38) = (f32)(temp_r29 + 5);
            *(f32 *)((u8 *)b + 0x3C) = (f32)(var_r28 - 8);
            *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x24) + 0x40) = *(f32 *)((u8 *)arg0 + 0xC);
            fn_80057AE0(*(void **)((u8 *)arg0 + 0x24));
        }
        {
            void *b = *(void **)((u8 *)arg0 + 0x28);
            *(f32 *)((u8 *)b + 0x38) = (f32)(temp_r29 + 5);
            *(f32 *)((u8 *)b + 0x3C) = (f32)(temp_r30 + 8);
            *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x28) + 0x40) = *(f32 *)((u8 *)arg0 + 0xC);
            fn_80057AE0(*(void **)((u8 *)arg0 + 0x28));
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) < *(s32 *)((u8 *)arg0 + 0x20)) {
            void *b = *(void **)((u8 *)arg0 + 0x24);
            if (*((u8 *)b + 0x54) != 0) {
                *(s32 *)((u8 *)b + 0x4C) = 0x1E;
            } else {
                *(s32 *)((u8 *)b + 0x4C) = 1;
            }
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) > *(s32 *)((u8 *)arg0 + 0x20)) {
            void *b = *(void **)((u8 *)arg0 + 0x28);
            if (*((u8 *)b + 0x54) != 0) {
                *(s32 *)((u8 *)b + 0x4C) = 0x1E;
            } else {
                *(s32 *)((u8 *)b + 0x4C) = 1;
            }
        }
    }
    *(s32 *)((u8 *)arg0 + 0x20) = *(s32 *)((u8 *)arg0 + 0x1C);
}
#pragma pop
#pragma cplusplus off
/* Free up/down scroll arrows; if create, alloc new ones (kinds 8 and 4). */
void ScrollBar_RecreateArrows(void *scrollBar, u8 create) {
    void fn_8006D8E8(void *);
    void Heap_Free(void *);
    void *Heap_Alloc(s32);
    s32 fn_8006D948(void *);
    extern u8 lbl_8026AD80[];
    extern f32 gF32_0;
    void *arrow;
    f32 zeroF;
    s32 zero;

    arrow = *(void **)((u8 *)scrollBar + 0x24);
    if (arrow != NULL) {
        if (arrow != NULL) {
            fn_8006D8E8(*(void **)((u8 *)arrow + 0x30));
            Heap_Free(arrow);
        }
        *(void **)((u8 *)scrollBar + 0x24) = NULL;
    }
    arrow = *(void **)((u8 *)scrollBar + 0x28);
    if (arrow != NULL) {
        if (arrow != NULL) {
            fn_8006D8E8(*(void **)((u8 *)arrow + 0x30));
            Heap_Free(arrow);
        }
        *(void **)((u8 *)scrollBar + 0x28) = NULL;
    }
    if (create != 0) {
        arrow = Heap_Alloc(0x58);
        if (arrow != NULL) {
            *(s32 *)((u8 *)arrow + 0x44) = 8;
            zero = 0;
            *(s32 *)((u8 *)arrow + 0x48) = zero;
            *(s32 *)((u8 *)arrow + 0x30) = fn_8006D948(lbl_8026AD80 + 0xBF);
            *(s32 *)((u8 *)arrow + 0x4C) = zero;
            zeroF = gF32_0;
            *(u8 *)((u8 *)arrow + 0x55) = 1;
            *(u8 *)((u8 *)arrow + 0x54) = 1;
            *(s32 *)((u8 *)arrow + 0x50) = 0x30;
            *(f32 *)((u8 *)arrow + 0x38) = zeroF;
            *(f32 *)((u8 *)arrow + 0x3C) = zeroF;
            *(f32 *)((u8 *)arrow + 0x40) = zeroF;
            *(u8 *)((u8 *)arrow + 0x34) = zero;
        }
        *(void **)((u8 *)scrollBar + 0x24) = arrow;
        arrow = Heap_Alloc(0x58);
        if (arrow != NULL) {
            *(s32 *)((u8 *)arrow + 0x44) = 4;
            zero = 0;
            *(s32 *)((u8 *)arrow + 0x48) = zero;
            *(s32 *)((u8 *)arrow + 0x30) = fn_8006D948(lbl_8026AD80 + 0xBF);
            *(s32 *)((u8 *)arrow + 0x4C) = zero;
            zeroF = gF32_0;
            *(u8 *)((u8 *)arrow + 0x55) = 1;
            *(u8 *)((u8 *)arrow + 0x54) = 1;
            *(s32 *)((u8 *)arrow + 0x50) = 0x30;
            *(f32 *)((u8 *)arrow + 0x38) = zeroF;
            *(f32 *)((u8 *)arrow + 0x3C) = zeroF;
            *(f32 *)((u8 *)arrow + 0x40) = zeroF;
            *(u8 *)((u8 *)arrow + 0x34) = zero;
        }
        *(void **)((u8 *)scrollBar + 0x28) = arrow;
        *(u8 *)(*(u8 **)((u8 *)scrollBar + 0x24) + 0x34) = 1;
        *(u8 *)(*(u8 **)((u8 *)scrollBar + 0x28) + 0x34) = 1;
        *(u8 *)(*(u8 **)((u8 *)scrollBar + 0x24) + 0x54) = 0;
        *(u8 *)(*(u8 **)((u8 *)scrollBar + 0x28) + 0x54) = 0;
    }
}

void fn_80057860(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x18);
    if (var_r4 > temp_r0) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
}

void fn_80057880(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r4 > temp_r0) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4;
}

void fn_80057898(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}

void fn_800578A0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
}

void fn_800578A8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, f32 *, 4) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 8) = (f32) arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
}

void *fn_800578F0(void *arg0, s16 arg1) {
    void fn_8006D8E8(void *);
    void Heap_Free(void *);
    extern u8 lbl_80285BF0[];
    void *temp;

    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x2C) = lbl_80285BF0;
        fn_8006D8E8(*(void **)arg0);
        temp = *(void **)((u8 *)arg0 + 0x24);
        if (temp != NULL) {
            if (temp != NULL) {
                fn_8006D8E8(*(void **)((u8 *)temp + 0x30));
                Heap_Free(temp);
            }
        }
        temp = *(void **)((u8 *)arg0 + 0x28);
        if (temp != NULL) {
            if (temp != NULL) {
                fn_8006D8E8(*(void **)((u8 *)temp + 0x30));
                Heap_Free(temp);
            }
        }
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void *fn_80057998(void *arg0) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026AD80[];
    extern u8 lbl_80285BF0[];
    extern const f32 gF32_0;
    f32 f0;

    *(void **)((u8 *)arg0 + 0x2C) = lbl_80285BF0;
    *(s32 *)arg0 = fn_8006D948(lbl_8026AD80 + 0xAA);
    f0 = gF32_0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(f32 *)((u8 *)arg0 + 4) = f0;
    *(f32 *)((u8 *)arg0 + 8) = f0;
    *(f32 *)((u8 *)arg0 + 0xC) = f0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    return arg0;
}

void *fn_80057A10(void *arg0, s16 arg1) {
    M2C_UNK fn_8006D8E8(s32);
    M2C_UNK Heap_Free(void *);
    if (arg0 != NULL) {
        fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x30));
        if (arg1 > 0) {
            Heap_Free(arg0);
        }
    }
    return arg0;
}

void *fn_80057A64(void *arg0, s32 arg1) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026AD80[];
    extern f32 gF32_0;
    u8 *p = arg0;
    f32 f0;

    *(s32 *)(p + 0x44) = arg1;
    *(s32 *)(p + 0x48) = 0;
    *(s32 *)(p + 0x30) = fn_8006D948(lbl_8026AD80 + 0xBF);
    *(s32 *)(p + 0x4C) = 0;
    f0 = gF32_0;
    *(u8 *)(p + 0x55) = 1;
    *(u8 *)(p + 0x54) = 1;
    *(s32 *)(p + 0x50) = 0x30;
    *(f32 *)(p + 0x38) = f0;
    *(f32 *)(p + 0x3C) = f0;
    *(f32 *)(p + 0x40) = f0;
    *(u8 *)(p + 0x34) = 0;
    return arg0;
}

#pragma push
#pragma optimization_level 3
#pragma use_lmw_stmw on
void fn_80057AE0(void *arg0) {
    void Prim2D_RotateUvCw(void);
    void Prim2D_EmitQuad(void);
    void Prim2D_SetUvRect(f32, f32, f32, f32);
    void Prim2D_SetRect(f32, f32, f32, f32);
    void Prim2D_EndPrim(void);
    void Prim2D_AddPrim(s32);
    void Prim2D_SetTransform(f32, f32, f32, f32);
    void Prim2D_BindTexture(s32, s32, s32);
    void Prim2D_PrepareTex(void);
    void Prim2D_Begin(void);
    extern const f32 gF32_0;
    extern const f32 lbl_8036912C;
    extern const f32 lbl_80369134;
    extern const f32 lbl_80369150;
    extern const f32 lbl_80369154;
    s32 var_r27;
    s32 var_r26;
    void *temp_r28;
    s32 temp_r31;
    s32 var_r30;
    s32 var_r29;
    s32 temp_r0;
    s32 temp_r3;
    f32 temp_f6;
    f32 temp_f0;
    f32 temp_f3;

    temp_r28 = arg0;
    *(s32 *)((u8 *)temp_r28 + 0x48) = *(s32 *)((u8 *)temp_r28 + 0x48) + 1;
    if (*(s32 *)((u8 *)temp_r28 + 0x4C) > 0) {
        *(s32 *)((u8 *)temp_r28 + 0x48) = *(s32 *)((u8 *)temp_r28 + 0x48) + 1;
        *(s32 *)((u8 *)temp_r28 + 0x4C) = *(s32 *)((u8 *)temp_r28 + 0x4C) - 1;
    }
    temp_r0 = *(s32 *)((u8 *)temp_r28 + 0x48);
    temp_r3 = *(s32 *)((u8 *)temp_r28 + 0x50);
    if (temp_r0 >= temp_r3) {
        *(s32 *)((u8 *)temp_r28 + 0x48) = temp_r0 - temp_r3;
    }
    temp_r31 = (s32)(gF32_0 + (((f32)*(s32 *)((u8 *)temp_r28 + 0x48) * lbl_80369150) / (f32)*(s32 *)((u8 *)temp_r28 + 0x50)));
    if (*(u8 *)((u8 *)temp_r28 + 0x55) != 0) {
        var_r30 = 0x10;
        var_r29 = 0x20;
        var_r27 = 0;
        if (*(u8 *)((u8 *)temp_r28 + 0x34) == 1) {
            var_r27 = 1;
            var_r30 = var_r30 / 2;
            var_r29 = var_r29 / 2;
        }
        Prim2D_Begin();
        Prim2D_SetTransform(*(f32 *)((u8 *)temp_r28 + 0x38), *(f32 *)((u8 *)temp_r28 + 0x3C), *(f32 *)((u8 *)temp_r28 + 0x40), lbl_8036912C);
        Prim2D_BindTexture(*(s32 *)((u8 *)temp_r28 + 0x30), var_r27, 0x11);
        Prim2D_PrepareTex();
        var_r27 = (-var_r30) / 2;
        var_r26 = (-var_r29) / 2;
        if (*(u8 *)((u8 *)temp_r28 + 0x54) != 0) {
            temp_r0 = *(s32 *)((u8 *)temp_r28 + 0x4C);
            temp_r3 = *(s32 *)((u8 *)temp_r28 + 0x44);
            temp_f6 = lbl_80369154 * lbl_80369154;
            temp_f0 = lbl_80369154 - (f32)temp_r0;
            temp_f3 = lbl_80369134;
            temp_r3 = (s32)(gF32_0 + (temp_f3 - ((temp_f3 * (temp_f0 * temp_f0)) / temp_f6)));
            switch (*(s32 *)((u8 *)temp_r28 + 0x44)) {
            case 8:
                var_r27 -= temp_r3;
                break;
            case 4:
                var_r27 += temp_r3;
                break;
            case 1:
                var_r27 -= temp_r3;
                break;
            case 2:
                var_r27 += temp_r3;
                break;
            }
        }
        Prim2D_AddPrim(2);
        switch (*(s32 *)((u8 *)temp_r28 + 0x44)) {
        case 8:
        case 4:
            Prim2D_SetRect((f32)var_r26, (f32)var_r27, (f32)var_r29, (f32)var_r30);
            break;
        default:
            Prim2D_SetRect((f32)var_r27, (f32)var_r26, (f32)var_r30, (f32)var_r29);
            break;
        }
        Prim2D_SetUvRect((f32)(temp_r31 * var_r30), gF32_0, (f32)var_r30, (f32)var_r29);
        Prim2D_EmitQuad();
        switch (*(s32 *)((u8 *)temp_r28 + 0x44)) {
        case 1:
            break;
        case 4:
            Prim2D_RotateUvCw();
        case 2:
            Prim2D_RotateUvCw();
        case 8:
            Prim2D_RotateUvCw();
            break;
        }
        Prim2D_EndPrim();
    }
}
#pragma pop
void fn_80057E54(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x34) = arg1;
}

void fn_80057E5C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x54) = arg1;
}

void fn_80057E64(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x55) = arg1;
}

void fn_80057E6C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x54) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0x1E;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
}

void fn_80057E90(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x40) = farg0;
}

void fn_80057E98(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) arg2;
}

extern u8 Proc_GActorNodeLink[16];
void GActor_UnlinkNodeLink(void) {
    Process_UnlinkByKey(&Proc_GActorNodeLink);
}

/* Create a process that links two named nodes on a GActor; assert if either is missing. */
s32 GActor_CreateNodeLink(s32 actor, s32 nodeNameA, s32 nodeNameB, s32 parent) {
    s32 GActor_FindNode(s32, s32);
    void DebugPrint(const char *, ...);
    void fn_800056A0(s32);
    void GfxEnt_ForEachKey(void *, void *, s32);
    void *Process_Create(void *, s32);
    void GActor_InitNodeLink(void *, s32, s32, s32);
    void GActor_UnlinkNodeLinkSame(void);
    extern u8 lbl_8026AD80[];
    extern u8 Proc_GActorNodeLink[16];
    void *link;

    if (GActor_FindNode(actor, nodeNameA) < 0 || GActor_FindNode(actor, nodeNameB) < 0) {
        DebugPrint((const char *)lbl_8026AD80 + 0xD0, nodeNameA, nodeNameB);
        fn_800056A0(0);
    }
    GfxEnt_ForEachKey(Proc_GActorNodeLink, GActor_UnlinkNodeLinkSame, actor);
    link = Process_Create(Proc_GActorNodeLink, parent);
    GActor_InitNodeLink(link, actor, nodeNameA, nodeNameB);
    return (s32)link;
}

void GActor_UnlinkNodeLinkSame(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) == arg1) {
        Process_UnlinkByKey(&Proc_GActorNodeLink);
    }
}

void fn_80058008(void *arg0) {
    M2C_UNK Process_Unlink(s32);
    if (M2C_FIELD(arg0, u16 *, 0x54) & 4) {
        fn_8005EA14(M2C_FIELD(arg0, s32 *, 0x34));
    }
    Process_Unlink(M2C_FIELD(arg0, s32 *, 0x30));
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x40));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

void fn_8005806C(void *arg0) {
void Process_ClearFunc(void *);
extern const f32 gF32_0, lbl_80369158;
f32 dur, step, diff, y, from, half;
s32 prod;
u8 counter, byte;
((u8*)arg0)[0x53]++;
if((s32)((u8*)arg0)[0x53]>=20) { ((u8*)arg0)[0x53]=20; Process_ClearFunc(arg0); }
counter=((u8*)arg0)[0x53]; byte=((u8*)arg0)[0x3f];
dur=lbl_80369158; y=dur*dur;
from=(f32)byte; step=dur-(f32)counter; diff=gF32_0-from;
((u8*)arg0)[0x3b]=(u8)(from+(diff-diff*(step*step)/y));
prod=*(u16*)((u8*)arg0+0x4c)*((u8*)arg0)[0x51];
counter=((u8*)arg0)[0x53];
from=(f32)prod; half=(f32)(prod/2); diff=half-from; step=dur-(f32)counter;
step*=step;
*(s16*)((u8*)arg0+0x4a)=(s16)(from+(diff-diff*step/y));
}

#pragma use_lmw_stmw on
void fn_800581A4(void *arg0) {
extern const f32 lbl_80369104, gF32_0, lbl_8036912C, lbl_8036915C, lbl_80369168;
extern u32 lbl_803690D4;
void fn_8005EB5C(void *,void *);
void fn_8005E644(void *);
TrailNode40 nodes[4];
u8 *p = arg0;
s32 i,k,index,count;
u32 t;
u32 color, copy;
f32 u,v,w,x,h0,h1,h2,h3,scale;
f32 *src; f32 a,b,c;
for(i=0;i<*(u16*)(p+0x4c);i++) {
if(i>0) TrailNode_Copy(&nodes[0],&((*(TrailNode40**)(p+0x40))[(*(u16*)(p+0x4e)+*(u16*)(p+0x48)+i-1)%*(u16*)(p+0x4e)]));
else TrailNode_Copy(&nodes[0],&((*(TrailNode40**)(p+0x40))[(*(u16*)(p+0x48)+i)%*(u16*)(p+0x4e)]));
TrailNode_Copy(&nodes[1],&((*(TrailNode40**)(p+0x40))[(*(u16*)(p+0x48)+i)%*(u16*)(p+0x4e)]));
if(i<*(u16*)(p+0x4c)-1) TrailNode_Copy(&nodes[2],&((*(TrailNode40**)(p+0x40))[(*(u16*)(p+0x48)+(i+1))%*(u16*)(p+0x4e)]));
else TrailNode_Copy(&nodes[2],&(nodes[1]));
if(i<*(u16*)(p+0x4c)-2) TrailNode_Copy(&nodes[3],&((*(TrailNode40**)(p+0x40))[(*(u16*)(p+0x48)+(i+2))%*(u16*)(p+0x4e)]));
else TrailNode_Copy(&nodes[3],&(nodes[2]));
for(t=0;t<p[0x51];t++) {
u=(lbl_8036912C+(f32)t)/(f32)p[0x51];
v=lbl_80369104*u; w=u-lbl_8036912C; x=lbl_8036912C-u;
h0=(lbl_8036915C-v)*(u*u);
h1=(lbl_8036912C+v)*(w*w);
h2=u*(x*x); h3=u*(w*u);
index=(t+i*p[0x51])*40;
src=(f32*)nodes;
for(k=0;k<6;k+=3) {
a=h1*src[10]+h0*src[20]; b=h1*src[11]+h0*src[21]; c=h1*src[12]+h0*src[22];
(*(f32**)(p+0x44)+k+index/4)[0]=h3*(lbl_80369160*(src[30]-src[10]))+(h2*(lbl_80369160*(src[20]-src[0]))+a);
(*(f32**)(p+0x44)+k+index/4)[1]=h3*(lbl_80369160*(src[31]-src[11]))+(h2*(lbl_80369160*(src[21]-src[1]))+b);
(*(f32**)(p+0x44)+k+index/4)[2]=h3*(lbl_80369160*(src[32]-src[12]))+(h2*(lbl_80369160*(src[22]-src[2]))+c);
src+=3;
}}
}
scale=(f32)(p[0x3b]*96/255)-gF32_0;
count=*(u16*)(p+0x4c)*p[0x51]-*(u16*)(p+0x4a);
for(i=0;i<*(u16*)(p+0x4a);i++){
index=(i+count)*40;
(*(u8**)(p+0x44))[index+36]=(u8)(gF32_0+((f32)i*scale)/(f32)(*(u16*)(p+0x4a)-1));
src=(f32*)(*(u8**)(p+0x44)+index);
src[6]=src[0]+lbl_80369168*(src[3]-src[0])/lbl_8036912C;
src=(f32*)(*(u8**)(p+0x44)+index);
src[7]=src[1]+lbl_80369168*(src[4]-src[1])/lbl_8036912C;
src=(f32*)(*(u8**)(p+0x44)+index);
src[8]=src[2]+lbl_80369168*(src[5]-src[2])/lbl_8036912C;
}
if(*(u16*)(p+0x54)&4) {
color=lbl_803690D4; ((u8*)&color)[3]=p[0x3b]>>1; copy=color;
fn_8005EB5C(*(void**)(p+0x34),&copy); fn_8005E644(*(void**)(p+0x34));
}
}
#pragma use_lmw_stmw reset

void GActor_StopNodeLink(s32 arg0) {
    void Process_Goto(s32, s32);
    Process_Goto(arg0, 0);
}

void GActor_SetNodeLinkActive(void *arg0, u8 arg1) {
    M2C_UNK fn_8005EA14(s32);
    M2C_UNK fn_8005EB80(s32, M2C_UNK);
    if (arg1 != 0) {
        fn_8005EB80(M2C_FIELD(arg0, s32 *, 0x34), 6);
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) | 4);
        return;
    }
    fn_8005EA14(M2C_FIELD(arg0, s32 *, 0x34));
    M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) & 0xFFFFFFFB);
}

#pragma scheduling on
void GActor_SetNodeLinkParam(void *arg0, u8 *arg1) {
    volatile u8 *vsrc = arg1;
    u8 chk;
    u8 a;
    u8 b;
    u8 c;
    u8 d;

    a = arg1[0];
    chk = vsrc[0];
    ((u8 *)arg0)[0x38] = a;
    b = arg1[1];
    c = arg1[2];
    ((u8 *)arg0)[0x39] = b;
    d = arg1[3];
    ((u8 *)arg0)[0x3A] = c;
    ((u8 *)arg0)[0x3B] = d;
    ((u8 *)arg0)[0x3C] = ((u8 *)arg0)[0x38];
    ((u8 *)arg0)[0x3D] = ((u8 *)arg0)[0x39];
    ((u8 *)arg0)[0x3E] = ((u8 *)arg0)[0x3A];
    ((u8 *)arg0)[0x3F] = ((u8 *)arg0)[0x3B];
    if (chk < 0x80) {
        if (arg1[1] < 0x80) {
            if (arg1[2] < 0x80) {
                *(u16 *)((u8 *)arg0 + 0x54) = (u16)(*(u16 *)((u8 *)arg0 + 0x54) & ~1);
                *(u16 *)((u8 *)arg0 + 0x54) = (u16)(*(u16 *)((u8 *)arg0 + 0x54) | 2);
                return;
            }
        }
    }
    *(u16 *)((u8 *)arg0 + 0x54) = (u16)(*(u16 *)((u8 *)arg0 + 0x54) & ~2);
    *(u16 *)((u8 *)arg0 + 0x54) = (u16)(*(u16 *)((u8 *)arg0 + 0x54) | 1);
}
#pragma use_lmw_stmw on
#pragma push
#pragma opt_lifetimes off
void GActor_InitNodeLink(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    char *strcpy(char *, const char *);
    void *fn_800C4638(s32, void *, s32);
    void *Process_Create(void *, s32);
    s32 GActor_FindNode(s32, s32);
    void fn_80060F70(s32, s32, void *);
    void fn_800581A4(void *);
    void fn_80058D84(void *);
    void fn_80067708(s32, s32, void *, void *);

    extern u8 lbl_8026AD80[];
    extern u8 lbl_80285B54[];
    extern u32 lbl_803690D0;

    u8 *self;
    u8 *proc;
    s32 nodes[2];
    s32 i;
    u8 *entry;
    s32 *node;
    u8 *obj;
    u32 color;
    u8 *cp;
    u8 t;
    u8 b1;
    u8 b2;

    self = (u8 *)arg0;

    *(s32 *)(self + 0x34) = arg1;

    strcpy((char *)(self + 0x56), (char *)arg2);
    strcpy((char *)(self + 0x5E), (char *)arg3);

    *(u16 *)(self + 0x4E) = 10;
    self[0x51] = 8;

    *(u16 *)(self + 0x4A) = 0;
    *(u16 *)(self + 0x4C) = 0;
    *(u16 *)(self + 0x48) = 0;
    self[0x53] = 0;
    *(u16 *)(self + 0x54) = 1;

    *(void **)(self + 0x40) = fn_800C4638(
        *(u16 *)(self + 0x4E) * 0x28,
        lbl_8026AD80 + 0xA9,
        0
    );

    *(void **)(self + 0x44) = fn_800C4638(
        *(u16 *)(self + 0x4E) * self[0x51] * 0x28,
        lbl_8026AD80 + 0xA9,
        0
    );

    color = lbl_803690D0;
    cp = (u8 *)&color;
    t = cp[0];
    self[0x38] = t;
    t = cp[0];
    b1 = cp[1];
    b2 = cp[2];
    self[0x39] = b1;
    self[0x3A] = b2;
    self[0x3B] = cp[3];

    self[0x3C] = self[0x38];
    self[0x3D] = self[0x39];
    self[0x3E] = self[0x3A];
    self[0x3F] = self[0x3B];

    if (t < 0x80 && b1 < 0x80 && b2 < 0x80) {
        *(u16 *)(self + 0x54) = *(u16 *)(self + 0x54) & ~1;
        *(u16 *)(self + 0x54) = *(u16 *)(self + 0x54) | 2;
    } else {
        *(u16 *)(self + 0x54) = *(u16 *)(self + 0x54) & ~2;
        *(u16 *)(self + 0x54) = *(u16 *)(self + 0x54) | 1;
    }

    proc = (u8 *)Process_Create(lbl_80285B54, 4);
    *(void **)(self + 0x30) = proc;
    proc = *(u8 **)(self + 0x30);
    *(void **)(proc + 0x30) = self;

    obj = *(u8 **)(proc + 0x30);
    if (obj[0x53] == 0) {
        nodes[0] = GActor_FindNode(*(s32 *)(obj + 0x34), (s32)(obj + 0x56));
        nodes[1] = GActor_FindNode(*(s32 *)(obj + 0x34), (s32)(obj + 0x5E));
        if (nodes[0] >= 0 && nodes[1] >= 0) {
            u16 capacity;
            u16 count;
            u16 start;
            start = *(u16 *)(obj + 0x48);
            count = *(u16 *)(obj + 0x4C);
            capacity = *(u16 *)(obj + 0x4E);
            entry = *(u8 **)(obj + 0x40) + ((start + count) % capacity) * 0x28;
            if ((unsigned)count == capacity) {
                *(u16 *)(obj + 0x48) = (start + 1) % capacity;
            } else {
                *(u16 *)(obj + 0x4C) = count + 1;
            }
            node = nodes;
            i = 0;
            do {
                fn_80060F70(*(s32 *)(obj + 0x34), *node, entry);
                i++;
                entry += 0xC;
                node++;
            } while (i < 2);
            *(u16 *)(obj + 0x4A) = *(u16 *)(obj + 0x4C) * obj[0x51];
        }
    }

    fn_800581A4(*(void **)(proc + 0x30));
    fn_80067708(2, 3, fn_80058D84, *(void **)(proc + 0x30));
}
#pragma pop
void fn_80058C6C(void *arg0) {
    s32 GActor_FindNode(s32, s32);
    void fn_80060F70(s32, s32, void *);
    void fn_80058D84(void *);
    void fn_800581A4(void *);
    void fn_80067708(s32, s32, void *, void *);
    s32 nodes[2];
    s32 i;
    u8 *entry;
    s32 *node;
    u8 *obj;
    obj = *(u8 **)((u8 *)arg0 + 0x30);
    if (obj[0x53] == 0) {
        nodes[0] = GActor_FindNode(*(s32 *)(obj + 0x34), (s32)(obj + 0x56));
        nodes[1] = GActor_FindNode(*(s32 *)(obj + 0x34), (s32)(obj + 0x5E));
        if (nodes[0] >= 0 && nodes[1] >= 0) {
            u16 capacity;
            u16 count;
            u16 start;
            start = *(u16 *)(obj + 0x48);
            count = *(u16 *)(obj + 0x4C);
            capacity = *(u16 *)(obj + 0x4E);
            entry = *(u8 **)(obj + 0x40) + ((start + count) % capacity) * 0x28;
            if ((unsigned)count == capacity) {
                *(u16 *)(obj + 0x48) = (start + 1) % capacity;
            } else {
                *(u16 *)(obj + 0x4C) = count + 1;
            }
            node = nodes;
            i = 0;
            do {
                fn_80060F70(*(s32 *)(obj + 0x34), *node, entry);
                i++;
                entry += 0xC;
                node++;
            } while (i < 2);
            *(u16 *)(obj + 0x4A) = *(u16 *)(obj + 0x4C) * obj[0x51];
        }
    }
    fn_800581A4(*(void **)((u8 *)arg0 + 0x30));
    fn_80067708(2, 3, fn_80058D84, *(void **)((u8 *)arg0 + 0x30));
}
#pragma use_lmw_stmw reset
void fn_80058D84(void *arg0) {
    void fn_80066D00(s32);
    void GXClearVtxDesc(void);
    void GXSetVtxDesc(s32, s32);
    void GXSetVtxAttrFmt(s32, s32, s32, s32, s32);
    void fn_802245D8(s32, s32, s32, s32);
    void GXSetNumTevStages(s32);
    void GXSetCullMode(s32);
    void GXSetBlendMode(s32, s32, s32, s32, s32, s32, s32);
    void GXSetNumTexGens(s32, s32);
    void GXSetTevOrder(s32, s32, s32, s32);
    void GXSetNumChans(s32);
    void fn_8022100C(s32);
    void *Camera_GetViewMtx(void);
    void GXLoadPosMtxImm(void *, s32);
    void GXSetCurrentMtx(s32);
    void GXBegin(s32, s32, s32);

    struct Vert { f32 f0, f4, f8; f32 fC, f10, f14; f32 f18, f1C, f20; u8 b24; };
    u8 *obj;
    s32 i;
    s32 off;

    obj = (u8 *)arg0;
    if (*(u16 *)(obj + 0x4C) >= 2) {
        GXClearVtxDesc();
        GXSetVtxDesc(9, 1);
        GXSetVtxDesc(0xB, 1);
        GXSetVtxAttrFmt(0, 9, 1, 4, 0);
        GXSetVtxAttrFmt(0, 0xB, 1, 5, 0);
        if (*(u16 *)(obj + 0x54) & 1) {
            fn_802245D8(1, 4, 1, 0);
        } else {
            fn_802245D8(1, 4, 5, 0);
        }
        GXSetNumTevStages(1);
        GXSetCullMode(1);
        GXSetBlendMode(4, 0, 1, 1, 0, 0, 2);
        GXSetNumTexGens(0, 4);
        GXSetTevOrder(0, 0xFF, 0xFF, 4);
        GXSetNumChans(0);
        fn_8022100C(0);
        GXLoadPosMtxImm(Camera_GetViewMtx(), 0);
        GXSetCurrentMtx(0);
        off = *(u16 *)(obj + 0x4C) * *(u8 *)(obj + 0x51) - *(u16 *)(obj + 0x4A);
        GXBegin(0x98, 0, (*(u16 *)(obj + 0x4A) * 2) & 0xFFFE);
        for (i = 0; i < *(u16 *)(obj + 0x4A); i++) {
            struct Vert *v = &(*(struct Vert **)(obj + 0x44))[i + off];
            GXPosition3f32(v->f18, v->f1C, v->f20);
            GXColor4u8(obj[0x38], obj[0x39], obj[0x3A], v->b24);
            GXPosition3f32(v->fC, v->f10, v->f14);
            GXColor4u8(obj[0x38], obj[0x39], obj[0x3A], 0);
        }
        GXBegin(0x98, 0, (*(u16 *)(obj + 0x4A) * 2) & 0xFFFE);
        for (i = 0; i < *(u16 *)(obj + 0x4A); i++) {
            struct Vert *v = &(*(struct Vert **)(obj + 0x44))[i + off];
            GXPosition3f32(v->f0, v->f4, v->f8);
            GXColor4u8(obj[0x38], obj[0x39], obj[0x3A], 0);
            GXPosition3f32(v->f18, v->f1C, v->f20);
            GXColor4u8(obj[0x38], obj[0x39], obj[0x3A], v->b24);
        }
        fn_80066D00(-1);
    }
}
#pragma optimization_level reset
void fn_8005902C(s32 arg0, s16 arg1) {
    void *Process_CreateChild(void *, s32);
    extern u8 lbl_80285B34[];
    void *temp;

    temp = Process_CreateChild(lbl_80285B34, arg0);
    *(s16 *)((u8 *)temp + 0x32) = arg1;
}

void fn_8005906C(void *arg0) {
    M2C_UNK Process_ClearFunc();
    extern void *gPadInput;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(gPadInput, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(gPadInput, s32 *, 8) ^ temp_r5) & 0x1F70) {
        Process_ClearFunc();
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) (M2C_FIELD(arg0, s16 *, 0x30) + 1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x30) == (s16) M2C_FIELD(arg0, s16 *, 0x32)) {
        Process_ClearFunc();
    }
}

void fn_800590CC(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
}

void fn_800590D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *Process_CreateChild(void *, s32);
    extern u8 lbl_80285B08[];
    void *temp_r3;

    temp_r3 = Process_CreateChild(lbl_80285B08, arg3);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg1;
    *(s32 *)((u8 *)temp_r3 + 0x38) = arg2;
}

void fn_80059138(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void *Process_Create(void *, s32);
    extern u8 lbl_80285B08[];
    u32 var_r6;
    void *temp_r3;

    var_r6 = arg3;
    if (var_r6 == 0) {
        var_r6 = 3;
    }
    temp_r3 = Process_Create(lbl_80285B08, var_r6);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_r3 + 0x34) = arg1;
    *(s32 *)((u8 *)temp_r3 + 0x38) = arg2;
}

void fn_800591A0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x30)(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_800591CC(void *arg0) {
    void Process_Goto(void *, s32);

    *(s32 *)((u8 *)arg0 + 0x38) = *(s32 *)((u8 *)arg0 + 0x38) - 1;
    if (*(s32 *)((u8 *)arg0 + 0x38) <= 0) {
        Process_Goto(arg0, 0x63);
    }
}

void Process_AttachFunc(s32 arg0, s32 arg1) {
    extern u8 lbl_80285AF0[];
    void *Process_Create(u8 *, s32);
    s32 *obj;
    obj = (s32 *)Process_Create(lbl_80285AF0, arg1);
    obj[0x30 / 4] = arg0;
}

void fn_80059240(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x30)(M2C_FIELD(arg0, s32 *, 0x18));
}

#pragma use_lmw_stmw on
void fn_8005926C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void Prim2D_SetRectUv(f32, f32, f32, f32, f32, f32);
    void Prim2D_EmitQuad(void);
    void Prim2D_EndPrim(void);
    s32 offset;
    s32 value;
    value = arg7;
    if (value == 0) {
        Prim2D_AddPrim(1);
        Prim2D_SetRectUv((f32)arg0, (f32)arg1, (f32)arg2, (f32)arg3, (f32)arg4, (f32)arg5);
        Prim2D_EmitQuad();
        Prim2D_EndPrim();
    } else {
        offset = 0;
        while (value != 0) {
            Prim2D_AddPrim(1);
            Prim2D_SetRectUv((f32)(arg0 + offset), (f32)arg1, (f32)(arg2 + arg4 * (value % 10)), (f32)arg3, (f32)arg4, (f32)arg5);
            Prim2D_EmitQuad();
            Prim2D_EndPrim();
            offset -= arg6;
            value /= 10;
        }
    }
}
#pragma use_lmw_stmw reset
#pragma push
#pragma opt_common_subs off
#pragma scheduling on
f32 Math_Angle2D(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f64 fn_80237E90(f32);
    extern f32 gF32_0;
    extern f64 lbl_80369118;
    extern f32 lbl_8036916C;
    extern f32 lbl_80369170;
    extern f32 lbl_80369174;
    extern f32 lbl_80369178;
    extern f32 lbl_8036917C;
    f32 dx;
    f32 dy;
    f32 c;

    (void)lbl_80369118;
    dx = farg2 - farg0;
    dy = farg3 - farg1;
    if ((dx < lbl_8036916C) && (dx > lbl_80369170)) {
        if (dy > gF32_0) {
            return gF32_0;
        }
        return lbl_80369174;
    }
    dx = (f32)fn_80237E90(dx / dy);
    dx = lbl_80369178 * dx;
    if (dy < gF32_0) {
        dx += lbl_80369174;
    }
    c = lbl_8036917C;
    dx = dx - (f32)(s32)(dx / c) * c;
    return dx;
}
#pragma pop
#pragma optimization_level 3