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

void fn_8014C39C(void *arg0, void *arg1) {
    void fn_8017A430(void *, s32, void *);
    void fn_8017A5EC(void *, u8);
    void fn_8017A5C4(void *, u16);
    void fn_8017A574(void *, s32);
    void fn_8017A4CC(void *, s64);
    void fn_8017A480(void *, s32, void *);
    void fn_8017A3E0(void *, s32, s32);
    void fn_80105A30(void *, void *);
    void fn_80014F94(void *, void *);
    void fn_80199B88(void *, void *);
    void fn_800BDAF8(void *, void *);
    s32 i;

    fn_8017A430(arg1, 0x10, arg0);
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x10));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x11));
    fn_8017A5C4(arg1, (u16)*(s16 *)((u8 *)arg0 + 0x12));
    for (i = 0; i < 4; i++) {
        fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x14 + i));
    }
    fn_8017A574(arg1, *(s32 *)((u8 *)arg0 + 0x18));
    fn_8017A574(arg1, *(s32 *)((u8 *)arg0 + 0x1c));
    fn_8017A430(arg1, 0x30, (u8 *)arg0 + 0x20);
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x50));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x51));
    fn_8017A5EC(arg1, (u8)(s32)*(f32 *)((u8 *)arg0 + 0x524));
    fn_8017A5EC(arg1, (u8)(s32)*(f32 *)((u8 *)arg0 + 0x528));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x54));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x55));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x56));
    fn_8017A5EC(arg1, *(u8 *)((u8 *)arg0 + 0x57));
    fn_8017A4CC(arg1, *(s64 *)((u8 *)arg0 + 0x58));
    fn_8017A4CC(arg1, *(s64 *)((u8 *)arg0 + 0x60));
    fn_8017A574(arg1, *(s32 *)((u8 *)arg0 + 0x68));
    fn_8017A574(arg1, *(s32 *)((u8 *)arg0 + 0x6c));
    fn_8017A5C4(arg1, (u16)*(s16 *)((u8 *)arg0 + 0x70));
    fn_8017A5C4(arg1, (u16)*(s16 *)((u8 *)arg0 + 0x72));
    fn_80105A30((u8 *)arg0 + 0x74, arg1);
    fn_80105A30((u8 *)arg0 + 0x84, arg1);
    fn_80014F94((u8 *)arg0 + 0x94, arg1);
    fn_80014F94((u8 *)arg0 + 0x98, arg1);
    fn_80199B88((u8 *)arg0 + 0x9c, arg1);
    fn_800BDAF8((u8 *)arg0 + 0xb4, arg1);
    fn_8017A430(arg1, 0x140, (u8 *)arg0 + 0x3c4);
    fn_8017A480(arg1, 0x18, (u8 *)arg0 + 0x504);
    fn_8017A3E0(arg1, 8, 0);
}

s32* fn_8014C5A8(s32 arg0, u8 arg1) {
    if (arg1 == 0) {
        return (s32*)(arg0 + 0x94);
    }
    if (arg1 == 3) {
        return (s32*)(arg0 + 0x98);
    }
    fn_8001520C(&lbl_80367B68, 1);
    return (s32*)&lbl_80367B68;
}

void fn_8014C5F4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x70) = (s16) (M2C_FIELD(arg0, s16 *, 0x70) + arg1);
}

void *fn_8014C604(void) {
    void fn_80015320(s32, void *);
    extern u8 lbl_802B14E4[];
    u8 sp8[8];
    u8 *best;
    s32 best_val;
    u8 *unit;
    s32 i;

    best = NULL;
    best_val = 0;
    fn_80015320(4, sp8);
    for (i = 1; i <= 0x9F; i++) {
        if ((u8)i != 0) {
            unit = (u8 *)lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0) {
                s32 v = *(u16 *)(unit + 0x22C);
                if (best_val < v) {
                    best_val = v;
                    best = unit;
                }
            }
        }
    }
    return best;
}

s32 fn_8014C6B8(void) {
    M2C_UNK fn_80040844();
    M2C_UNK fn_80040854();
    fn_80040844();
    fn_80040854();
    return 1;
}

s32 fn_8014C6E0(void) {
    u8 fn_80040824();
    M2C_UNK fn_800AA134();
    if (fn_80040824() == 0) {
        return 0;
    }
    fn_800AA134();
    return 1;
}

void fn_8014C718(void *arg0, u32 arg1) {
    u8 fn_80040824(void);
    void *fn_8000CA64(void *, u32);
    extern u8 lbl_80293760[];
    if (fn_80040824() != 0) {
        if (arg1 == 0) {
            fn_800AA134();
            fn_80040844();
            fn_80040854();
        } else {
            fn_8000CA64(lbl_80293760, arg1);
        }
    }
}

void fn_8014C774(void) {
    M2C_UNK fn_80040854();
    M2C_UNK fn_80040844();
    fn_80040844();
    fn_80040854();
}

void fn_8014C798(void) {
    M2C_UNK fn_80018EC0();
    M2C_UNK fn_80040844();
    M2C_UNK fn_80042558();
    fn_80018EC0();
    fn_80040844();
    fn_80042558();
}

void fn_8014C7C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    if (arg0 < 0) {
        arg0 = 0;
    }

    if (arg1 < 0) {
        arg1 = 0;
    }

    temp_r3 = arg2 - arg0;
    if (temp_r3 <= 0) {
        temp_r3 = 1;
    }

    temp_r4 = arg3 - arg1;
    if (temp_r4 <= 0) {
        temp_r4 = 1;
    }

    temp_r5 = temp_r3 * temp_r4;
    if (temp_r5 > 0x4000) {
        s32 temp_r6 = temp_r3 / 2;
        s32 temp_r7 = temp_r4 / 2;
        arg2 = arg0 + temp_r6;
        arg3 = arg1 + temp_r7;
    }
}

void fn_8014CA20(s32 arg0, s32 arg1) {
    s32 r0 = arg1 + 2;
    s32 r3 = r0 * 0xC;
    r3 += 0x20;
    r3 += arg0;
    fn_8000E0E4(r3, arg0);
}

s32 fn_8014CA54(s32 arg0, s32 arg1) {
    return (arg1 * 0xC) + arg0 + 0x20;
}

void fn_8014CA68(s32 arg0, s32 arg1) {
    s32 r3;
    s32 temp_r4;

    temp_r4 = arg1 * 0xC;
    r3 = arg0 + (temp_r4 + 0x20);
    fn_8000E0E4(r3, temp_r4);
}

void fn_8014CA98(s32 arg0, s32 arg1, u32 arg2) {
    M2C_UNK fn_80234450(s32, u32);
    if (arg2 != 0U) {
        fn_80234450(arg0 + ((arg1 * 0xC) + 0x20), arg2);
    }
}

void fn_8014CAD4(void *arg0, f32 farg0, f32 farg1) {
    f32 fn_80023068(M2C_UNK *);
    extern M2C_UNK lbl_802CA518;
    M2C_FIELD(arg0, f32 *, 0x52C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x530) = farg1;
    M2C_FIELD(arg0, f32 *, 0x53C) = fn_80023068(&lbl_802CA518);
}

void fn_8014CBD8(void *arg0, f32 farg0, f32 farg1) {
    f32 fn_80023068(M2C_UNK *, M2C_UNK *, f32, f32);
    extern M2C_UNK lbl_802CA518;
    extern f32 lbl_8036A7F0;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = farg0 + lbl_8036A7F0;
    temp_f31 = farg1 + lbl_8036A7F0;
    M2C_FIELD(arg0, f32 *, 0x524) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x528) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x52C) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x530) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x53C) = fn_80023068(&lbl_802CA518, &lbl_802CA518, temp_f30, temp_f31);
    M2C_FIELD(arg0, f32 *, 0x534) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x538) = temp_f31;
}
