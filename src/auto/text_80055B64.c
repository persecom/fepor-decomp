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


extern void* lbl_803672A8;
extern f64 lbl_80368EF8;
extern f32 lbl_80368FC0;
extern f32 lbl_80368FC4;
extern f32 lbl_8036901C;
extern f64 lbl_80368FE0;
extern f64 lbl_80368E80;
extern f32 lbl_80368E24;
extern f32 lbl_80368E28;

extern f32 lbl_80368EA8;
extern f32 lbl_80368EAC;
extern f32 lbl_80368EB0;
extern f32 lbl_80368EB4;
extern f64 lbl_80368EB8;

extern u8 lbl_8026A3A8[176];
void *fn_800A88E0(u32);

extern s32 gGameState;

extern u16 lbl_8026A458[];

void *fn_8000D354(s32);

extern u8 lbl_80366DC0[7];

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

extern double lbl_80368FE0;
extern float lbl_80368FF8;
extern float lbl_80368FD8;

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

void fn_80055B64(s32 arg0) {
    extern u16 lbl_80285990[];
    extern u16 lbl_8026AC0C[];
    extern u16 lbl_80285968[];

    if (arg0 == 0 && fn_8000C0C0(lbl_80285990) == 0 && fn_80145308() == 0) {
        fn_801451BC();
        fn_800056CC((u8 *)lbl_8026AC0C + 0x12E);
        return;
    }

    *(s32 *)((u8 *)fn_8000CAF0(lbl_80285968, 4) + 0x60) = arg0;
}

void fn_80055BE0(s32 arg0) {
    void *fn_8000C0C0(void *);
    void fn_801451BC(void);
    u8 fn_80145308(void);
    void fn_8000C188(s32);
    extern u8 lbl_80285990[];

    if (fn_8000C0C0(lbl_80285990) == 0 && fn_80145308() == 0) {
        fn_801451BC();
        fn_8000C188(arg0);
    }
}

void fn_80055C34(void *arg0) {
    void fn_8000C070(void *, s32);

    *(s32 *)((u8 *)arg0 + 0x60) = *(s32 *)((u8 *)arg0 + 0x60) - 1;
    if (*(s32 *)((u8 *)arg0 + 0x60) >= 0) {
        fn_8000C070(arg0, 0);
    }
}
