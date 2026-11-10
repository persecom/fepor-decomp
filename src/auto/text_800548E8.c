/* Functions from 0x800330F8 to 0x80055C70, found by decomp-toolkit. */
#include "common.h"

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
extern f32 lbl_80368FC0;
extern f32 lbl_80368FC4;
extern f32 lbl_8036901C;
extern f64 lbl_80368FE0;
extern f64 lbl_80368E80;
extern f32 lbl_80368E24;
extern f32 lbl_80368E28;

#pragma cplusplus on
extern "C" void fn_80009B8C(u8);
extern "C" void fn_80009D74(f32, f32, f32, f32);
extern "C" void fn_8000A248(void);
extern "C" void fn_8000A258(void);
extern "C" s32 fn_8002F740(u32);
extern "C" void fn_80090C50(s32);

#pragma cplusplus reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma peephole off

#pragma peephole on

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

extern u8 lbl_8026A3A8[176];
void *fn_800A88E0(u32);

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

#pragma global_optimizer off

#pragma global_optimizer on

void *fn_80037D54(void *);
void *fn_80037C20(void *);

#pragma opt_peephole off

#pragma opt_peephole reset

#pragma opt_peephole reset

extern s32 gGameState;

extern u16 lbl_8026A458[];

void *fn_8000D354(s32);

#pragma opt_strength_reduction off

#pragma opt_strength_reduction reset

void fn_8005C7E8(void *);

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern f32 lbl_80368EE4;

#pragma use_lmw_stmw on
#pragma opt_loop_invariants off
#pragma opt_peephole off

#pragma opt_peephole reset
#pragma opt_loop_invariants reset
#pragma use_lmw_stmw reset

extern u16* lbl_803672AC;

extern u16 lbl_8026A9B0[40];
extern u16 lbl_802EFFC8[16];

extern s32 lbl_80367308;
#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern double lbl_80368FE0;
extern float lbl_80368FF8;
extern float lbl_80368FD8;

#pragma cplusplus reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern void* jumptable_80285A50;

extern u32 lbl_80369058;
extern u32 lbl_8036905C;
extern u32 lbl_80369060;
extern u32 lbl_80369064;
extern u32 lbl_80369068;
extern u32 lbl_8036906C;
extern u32 lbl_80369070;
extern u32 lbl_80369074;
extern u32 lbl_80369078;
extern u32 lbl_8036907C;
extern u32 jumptable_80285ACC[];

extern u16 *lbl_803672AC;
#include "common.h"
#include "global.h"

extern u16 lbl_8026A660;
extern void* lbl_803672A8;
extern u8 lbl_802CA518[0x24F60];
extern u32* lbl_803672CC;
#include "global.h"
#include "common.h"

extern u32 jumptable_8028561C[];
extern u32 jumptable_802855E4[];
#include "global.h"
extern s32* lbl_803672B0;
extern f32 lbl_80368FCC;
extern f32 lbl_80368FF0;
extern u16* lbl_802B14E4;
#include "common.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    char pad[0x30 - 0x18];
    s32 unk30;
    s32 unk34;
    s32 unk38;
} Struct_800330F8;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    char pad[0x20 - 0x18];
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
} Struct_800330F8_A;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    char pad[0xBC - 0x18];
    s32 unkBC;
} Struct_800330F8_B;

#include "common.h"
extern f32 lbl_80368FD8;
extern u16 lbl_8026AB18;
extern f32 lbl_80368FC4;
extern u16 lbl_802EFE20;

void fn_800548E8(void *arg0)
{
    u8 fn_8005F7F0(void *);
    void fn_8004AE28(void *, f32, f32, f32);
    void fn_8004AD20(void *, f32 *);
    u8 fn_8005F9B8(void *, s32);
    s32 fn_800558FC(void *);
    s32 fn_8006135C(void *, char *);
    void fn_80060F70(void *, s32, f32 *);
    f32 fn_80060BA4(void *, s32);
    void fn_80055FB4(f32 *, s32 *, s32, f32);
    void fn_80055D9C(void *);
    void *fn_80055DC0(f32 *, s32 *, s32, f32);
    extern f32 lbl_803690CC;
    extern f32 lbl_8036908C;
    extern s32 lbl_803682A4;
    extern char lbl_8026AC0C[];
    struct {
        s32 sp8;
        s32 spC;
        s32 sp10;
        s32 sp14;
        f32 sp18[3];
        f32 sp24[3];
        f32 sp30[3];
        f32 sp3C[3];
        f32 sp48[3];
        f32 sp54[3];
        f32 sp60[3];
        f32 sp6C[3];
    } s;
    f32 fv0;
    f32 fv1;
    f32 fv2;
    void *unit;
    s32 idx;
    void *node;
    f32 scale;

    node = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x5C);
    if (fn_8005F7F0(node) != 0) {
        unit = *(void **)((u8 *)arg0 + 0x30);
        if (*(s8 *)((u8 *)unit + 3) < 0) {
            if (*(u32 *)((u8 *)unit + 8) & 8) {
                fn_8004AE28(node, lbl_803690CC, lbl_803690CC, lbl_803690CC);
            } else {
                if ((*(u8 *)((u8 *)*(void **)((u8 *)unit + 0x2C) + 4) & 3) == 0) {
                    goto ad20;
                }
                goto ae28;
            ad20:
                fv2 = *(f32 *)((u8 *)unit + 0xC);
                fv1 = *(f32 *)((u8 *)unit + 0x10);
                fv0 = *(f32 *)((u8 *)unit + 0x14);
                s.sp30[0] = fv2;
                s.sp30[1] = fv1;
                s.sp30[2] = fv0;
                *(u32 *)&s.sp54[0] = *(u32 *)&s.sp30[0];
                *(u32 *)&s.sp54[1] = *(u32 *)&s.sp30[1];
                *(u32 *)&s.sp54[2] = *(u32 *)&s.sp30[2];
                fn_8004AD20(node, s.sp54);
                goto after_pos;
            ae28:
                fn_8004AE28(node, lbl_803690CC, lbl_803690CC, lbl_803690CC);
            }
        }
    after_pos:
        if (fn_8005F9B8(node, 0x28) != 0) {
            unit = *(void **)((u8 *)arg0 + 0x30);
            fv2 = *(f32 *)((u8 *)unit + 0xC);
            fv1 = *(f32 *)((u8 *)unit + 0x10);
            fv0 = *(f32 *)((u8 *)unit + 0x14);
            s.sp24[0] = fv2;
            s.sp24[1] = fv1;
            s.sp24[2] = fv0;
            *(u32 *)&s.sp6C[0] = *(u32 *)&s.sp24[0];
            *(u32 *)&s.sp6C[1] = *(u32 *)&s.sp24[1];
            *(u32 *)&s.sp6C[2] = *(u32 *)&s.sp24[2];
            s.sp14 = fn_800558FC(*(void **)((u8 *)unit + 0x2C));
            scale = lbl_8036908C;
            idx = fn_8006135C(node, lbl_8026AC0C + 0x16A);
            if (idx >= 0) {
                fn_80060F70(node, idx, s.sp6C);
                scale = fn_80060BA4(node, idx);
            }
            s.spC = s.sp14;
            *(u32 *)&s.sp48[0] = *(u32 *)&s.sp6C[0];
            *(u32 *)&s.sp48[1] = *(u32 *)&s.sp6C[1];
            *(u32 *)&s.sp48[2] = *(u32 *)&s.sp6C[2];
            fn_80055FB4(s.sp48, &s.spC, 0, scale);
        }
        if (fn_8005F9B8(node, 0x29) != 0) {
            unit = *(void **)((u8 *)arg0 + 0x30);
            fv2 = *(f32 *)((u8 *)unit + 0xC);
            fv1 = *(f32 *)((u8 *)unit + 0x10);
            fv0 = *(f32 *)((u8 *)unit + 0x14);
            s.sp18[0] = fv2;
            s.sp18[1] = fv1;
            s.sp18[2] = fv0;
            *(u32 *)&s.sp60[0] = *(u32 *)&s.sp18[0];
            *(u32 *)&s.sp60[1] = *(u32 *)&s.sp18[1];
            *(u32 *)&s.sp60[2] = *(u32 *)&s.sp18[2];
            s.sp10 = fn_800558FC(*(void **)((u8 *)unit + 0x2C));
            scale = lbl_8036908C;
            idx = fn_8006135C(node, lbl_8026AC0C + 0x16A);
            if (idx >= 0) {
                fn_80060F70(node, idx, s.sp60);
                scale = fn_80060BA4(node, idx);
            }
            fn_80055D9C(*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x48));
            s.sp8 = s.sp10;
            *(u32 *)&s.sp3C[0] = *(u32 *)&s.sp60[0];
            *(u32 *)&s.sp3C[1] = *(u32 *)&s.sp60[1];
            *(u32 *)&s.sp3C[2] = *(u32 *)&s.sp60[2];
            *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x48) = fn_80055DC0(s.sp3C, &s.sp8, 0, scale);
        }
        if (fn_8005F9B8(node, 0x2A) != 0) {
            fn_80055D9C(*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x48));
            *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x48) = NULL;
        }
        if (fn_8005F9B8(node, 0x1C) != 0) {
            lbl_803682A4 |= 1;
            unit = *(void **)((u8 *)arg0 + 0x30);
            *(u32 *)((u8 *)unit + 8) |= 0x40000000;
        }
        if (fn_8005F9B8(node, 0x1D) != 0) {
            lbl_803682A4 &= ~1;
            unit = *(void **)((u8 *)arg0 + 0x30);
            *(u32 *)((u8 *)unit + 8) &= 0xBFFFFFFF;
        }
    }
}

