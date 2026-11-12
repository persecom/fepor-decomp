/* Functions from 0x8014A370 to 0x8014E350, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80367B00;
extern s32 lbl_80367B04;
extern u8 lbl_80367B0E;
extern u8 lbl_80367B44;

typedef struct { u8 a; u8 b; } Entry;
typedef struct { u8 pad[0x544]; s8 count; Entry entries[256]; } Obj;
extern u8 lbl_80367B08;
extern u8 lbl_80367B09;
extern u8 lbl_80367B0A;
extern u8 lbl_80367B0B;
extern u16 lbl_80292F60[];
extern f32 lbl_8036A7D0;
extern f32 lbl_8036A7D4;
extern f32 lbl_8036A7D8;
extern f32 lbl_8036A7DC;
extern f32 lbl_8036A7E0;
extern f64 lbl_8036A7E8;
extern u8 lbl_80367B0C;
extern u8 lbl_80367B0D;

void fn_800C426C(s32);
s32 fn_800C42AC(s32);
void *fn_8003FCCC(void *);
void fn_80024398(void *, s32, s32);
#pragma opt_strength_reduction off

extern s32 lbl_80367B00;
extern u8 lbl_80367B0D;

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

extern u16 *g_AccessoryArray;

void fn_8017A430(void *, s32, void *);
void fn_8017A5EC(void *, u8);
void fn_8017A574(void *, s32);
void fn_8017A5C4(void *, u16);
void fn_8017A4CC(void *, s32, s32);
void fn_80105A30(void *, void *);
void fn_80014F94(void *, void *);
void fn_80199B88(void *, void *);
void fn_800BDAF8(void *, void *);
void fn_8017A480(void *, s32, void *);
void fn_8017A3E0(void *, s32, u8);
#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset
extern u16 lbl_80367B68;

void fn_80234450(s32, u32);

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#include "common.h"
extern f32 lbl_8036A7F0;
extern M2C_UNK lbl_802CA518;
extern s32 lbl_80367B00;
extern s32 lbl_80367B04;
extern u8 lbl_80367B0D;

void fn_801475FC(s32, s32); /* extern */
#include "global.h"

extern void* fn_80019F04();
#include "common.h"
extern u8 lbl_802CA264[];
extern u8 lbl_802B14E4[];
#include "common.h"
#include "ef.h"
#include "global.h"

extern u8 lbl_80330708[];
extern u8 lbl_80277060[];
extern u8 lbl_8032BB58[];
#include "global.h"
extern u8 lbl_80330708[];

u8 fn_8014BC10(void *arg0) {
    void *fn_80019F04(u8);
    void fn_80015320(s32, void *);
    extern u8 lbl_802CA264[];
    extern u8 lbl_802B14E4[];
    s32 score;
    void *self;
    s32 n;
    void *tbl;
    void *p;
    void *unit;
    s32 g1;
    s32 g2;
    s32 g3;
    u32 i;
    u8 flags[4];
    s16 val;
    u8 id;

    score = 0;
    self = arg0;
    id = *(u8 *)((u8 *)self + 0x10);
    if (id < 0x5A) {
        return 0x2D;
    }
    if (id < 0x5A) {
        g1 = 0x2D;
    } else {
        tbl = fn_80019F04(id);
        val = *(s16 *)((u8 *)self + 0x12);
        g1 = 0x45;
        if (val <= *(u8 *)((u8 *)tbl + 0x57)) {
            g1 = 0x44;
            if (val <= *(u8 *)((u8 *)tbl + 0x56)) {
                g1 = 0x43;
                if (val <= *(u8 *)((u8 *)tbl + 0x55)) {
                    g1 = 0x42;
                    if (val <= *(u8 *)((u8 *)tbl + 0x54)) {
                        g1 = 0x41;
                    }
                }
            }
        }
    }
    score = 0x45 - (u8)g1;
    id = *(u8 *)((u8 *)self + 0x10);
    if (id < 0x5A) {
        g2 = 0x2D;
    } else {
        n = 0;
        p = *(void **)(lbl_802CA264 + 0x48);
        while (p != NULL) {
            u32 flags1a0 = *(u32 *)((u8 *)p + 0x1A0);
            p = *(void **)((u8 *)p + 0x184);
            if (flags1a0 & 0x8000) {
                n += 1;
            }
        }
        tbl = fn_80019F04(id);
        g2 = 0x45;
        if (n <= *(u8 *)((u8 *)tbl + 0x5B)) {
            g2 = 0x44;
            if (n <= *(u8 *)((u8 *)tbl + 0x5A)) {
                g2 = 0x43;
                if (n <= *(u8 *)((u8 *)tbl + 0x59)) {
                    g2 = 0x42;
                    if (n <= *(u8 *)((u8 *)tbl + 0x58)) {
                        g2 = 0x41;
                    }
                }
            }
        }
    }
    score += 0x45 - (u8)g2;
    id = *(u8 *)((u8 *)self + 0x10);
    if (id < 0x5A) {
        g3 = 0x2D;
    } else {
        u8 *base;
        u8 *flagp;
        s32 ctr;
        n = 0;
        fn_80015320(4, flags);
        base = lbl_802B14E4;
        flagp = flags;
        i = 1;
        for (ctr = 0x35; ctr != 0; ctr--) {
            if ((u8)i != 0) {
                unit = base + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)((u8 *)unit + 0x188) != 0 &&
                flagp[*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)] != 0) {
                n += *(u16 *)((u8 *)unit + 0x22C);
            }
            i += 1;
            if ((u8)i != 0) {
                unit = base + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)((u8 *)unit + 0x188) != 0 &&
                flagp[*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)] != 0) {
                n += *(u16 *)((u8 *)unit + 0x22C);
            }
            i += 1;
            if ((u8)i != 0) {
                unit = base + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)((u8 *)unit + 0x188) != 0 &&
                flagp[*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)] != 0) {
                n += *(u16 *)((u8 *)unit + 0x22C);
            }
            i += 1;
        }
        tbl = fn_80019F04(id);
        g3 = 0x45;
        if (n >= *(u8 *)((u8 *)tbl + 0x5F)) {
            g3 = 0x44;
            if (n >= *(u8 *)((u8 *)tbl + 0x5E)) {
                g3 = 0x43;
                if (n >= *(u8 *)((u8 *)tbl + 0x5D)) {
                    g3 = 0x42;
                    if (n >= *(u8 *)((u8 *)tbl + 0x5C)) {
                        g3 = 0x41;
                    }
                }
            }
        }
    }
    score += 0x45 - (u8)g3;
    return (u8)(0x45 - score / 3);
}

unsigned int fn_8014C078(void *arg0) {
    void *fn_80019F04(u8);
    extern u8 lbl_802CA264[];
    u8 id;
    s32 n;
    void *p;
    void *tbl;
    s32 grade;

    id = *(u8 *)((u8 *)arg0 + 0x10);
    if (id < 0x5A) {
        return 0x2D;
    }
    n = 0;
    p = *(void **)(lbl_802CA264 + 0x48);
    while (p != NULL) {
        u32 flags1a0 = *(u32 *)((u8 *)p + 0x1A0);
        p = *(void **)((u8 *)p + 0x184);
        if (flags1a0 & 0x8000) {
            n += 1;
        }
    }
    tbl = fn_80019F04(id);
    grade = 0x45;
    if (n <= *(u8 *)((u8 *)tbl + 0x5B)) {
        grade = 0x44;
        if (n <= *(u8 *)((u8 *)tbl + 0x5A)) {
            grade = 0x43;
            if (n <= *(u8 *)((u8 *)tbl + 0x59)) {
                grade = 0x42;
                if (n <= *(u8 *)((u8 *)tbl + 0x58)) {
                    grade = 0x41;
                }
            }
        }
    }
    return grade;
}

unsigned int fn_8014C12C(void *arg0)
{
  void *fn_80019F04(u8);
  u8 id;
  u8 *table;
  s16 value;
  s32 grade;
  id = *((u8 *) (((u8 *) arg0) + 0x10));
  if (id < 0x5A)
  {
    return 0x2D;
  }
  table = (u8 *) fn_80019F04(id);
  value = *((s16 *) (((u8 *) arg0) + 0x12));
  grade = 0x45;
  if (value <= table[0x57])
  {
    grade = 0x44;
    if (value <= table[0x56])
    {
      grade = 0x43;
      if (value <= table[0x55])
      {
        grade = 0x42;
        if (value <= table[0x54])
        {
          grade = 0x41;
        }
      }
    }
  }
  return grade;
}

