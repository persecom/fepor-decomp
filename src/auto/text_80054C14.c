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

void fn_80054C14(void* arg0)
{
    void* r27;
    int r3, r28;
    int r0;
    
    r27 = (void*)arg0;
    r3 = *(u32*)((char*)arg0 + 0x30);
    r28 = *(u32*)((char*)r3 + 0x5c);
    r3 = r28;
    fn_8005F7F0(r3);
    r0 = (r3 & 0xFFFFFF00) >> 24;
    if (r0 == 0)
        return;

    /* Loading data from lbl_8026ABF0 */
    r3 = *(u32*)((char*)r28 + 0x5c);
    
    // Direct copy of the memory
    *(u32*)((char*)r27 + 0x50) = *(u32*)((char*)r3 + 0x0);
    *(u32*)((char*)r27 + 0x54) = *(u32*)((char*)r3 + 0x4);
    *(u32*)((char*)r27 + 0x58) = *(u32*)((char*)r3 + 0x8);
    *(u32*)((char*)r27 + 0x5C) = *(u32*)((char*)r3 + 0xC);
    *(u32*)((char*)r27 + 0x60) = *(u32*)((char*)r3 + 0x10);
    *(u32*)((char*)r27 + 0x64) = *(u32*)((char*)r3 + 0x14);
    *(u32*)((char*)r27 + 0x68) = *(u32*)((char*)r3 + 0x18);

    fn_8005F92C(r3);

    r0 = (r3 & 0xFFFF0000) >> 16;
    r0 -= 0x9;
    if ((r0 > 0x1E))
        return;

    // Jump table handling
    r3 = *(u32*)((char*)jumptable_80285A50 + (r0 << 2));
    
    __builtin_unreachable();
}

void *fn_80055204(void *arg0, s32 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    arg0 = (void *)((u8 *)arg0 + 0x28C);
    if (arg0 == 0) {
        return 0;
    }
    arg0 = *(void **)arg0;
    if (arg0 != 0) {
        arg0 = (void *)((u8 *)arg0 + (arg1 << 2));
        return *(void **)((u8 *)arg0 + 0x40);
    }
    return 0;
}

#pragma global_optimizer off
u8 fn_80055248(s32 arg0) {
    void *fn_8000D354(s32);
    void fn_80231D94(void *, void *, void *, ...);
    u8 fn_8005BA10(void *);
    u8 fn_800B2FF4(s32);
    s32 fn_80055C84(void *);
    s32 fn_80055AC0(s32 *, s32);
    u8 fn_80055C7C(void *);
    u32 fn_80055C74(void *);
    extern u8 lbl_8026AC0C[];
    u8 sp188[0x40];
    u8 sp148[0x40];
    u8 sp108[0x40];
    u8 spC8[0x40];
    u8 sp88[0x40];
    u8 sp48[0x40];
    u8 sp8[0x40];
    void *node;
    u8 ok;
    s32 v;

    node = fn_8000D354(arg0);
    fn_80231D94(sp188, lbl_8026AC0C + 0x120, lbl_8026AC0C + 0x129, *(s32 *)node);
    if ((u8)fn_8005BA10(sp188) == 0) {
        return 0;
    }
    v = *(u8 *)((u8 *)node + 5);
    if (v != 0) {
        if ((u8)fn_800B2FF4(v) == 0) {
            return 0;
        }
    }
    if (*(u32 *)((u8 *)node + 8) == 0) {
        goto success1;
    }

    node = fn_8000D354(*(s32 *)((u8 *)node + 8));
    fn_80231D94(sp148, lbl_8026AC0C + 0x120, lbl_8026AC0C + 0x129, *(s32 *)node);
    if ((u8)fn_8005BA10(sp148) == 0) {
        ok = 0;
        goto check2;
    }
    v = *(u8 *)((u8 *)node + 5);
    if (v != 0) {
        if ((u8)fn_800B2FF4(v) == 0) {
            ok = 0;
            goto check2;
        }
    }
    if (*(u32 *)((u8 *)node + 8) == 0) {
        goto success2;
    }

    node = fn_8000D354(*(s32 *)((u8 *)node + 8));
    fn_80231D94(sp108, lbl_8026AC0C + 0x120, lbl_8026AC0C + 0x129, *(s32 *)node);
    if ((u8)fn_8005BA10(sp108) == 0) {
        ok = 0;
        goto check3;
    }
    v = *(u8 *)((u8 *)node + 5);
    if (v != 0) {
        if ((u8)fn_800B2FF4(v) == 0) {
            ok = 0;
            goto check3;
        }
    }
    if (*(u32 *)((u8 *)node + 8) == 0) {
        goto success3;
    }

    node = fn_8000D354(*(s32 *)((u8 *)node + 8));
    fn_80231D94(spC8, lbl_8026AC0C + 0x120, lbl_8026AC0C + 0x129, *(s32 *)node);
    if ((u8)fn_8005BA10(spC8) == 0) {
        ok = 0;
        goto check4;
    }
    v = *(u8 *)((u8 *)node + 5);
    if (v != 0) {
        if ((u8)fn_800B2FF4(v) == 0) {
            ok = 0;
            goto check4;
        }
    }
    if (*(u32 *)((u8 *)node + 8) == 0) {
        goto success4;
    }

    node = fn_8000D354(*(s32 *)((u8 *)node + 8));
    fn_80231D94(sp88, lbl_8026AC0C + 0x120, lbl_8026AC0C + 0x129, *(s32 *)node);
    if ((u8)fn_8005BA10(sp88) == 0) {
        ok = 0;
        goto check5;
    }
    v = *(u8 *)((u8 *)node + 5);
    if (v != 0) {
        if ((u8)fn_800B2FF4(v) == 0) {
            ok = 0;
            goto check5;
        }
    }
    if (*(u32 *)((u8 *)node + 8) == 0) {
        goto success5;
    }

    node = fn_8000D354(*(s32 *)((u8 *)node + 8));
    fn_80231D94(sp48, lbl_8026AC0C + 0x120, lbl_8026AC0C + 0x129, fn_80055C84(node));
    if ((u8)fn_8005BA10(sp48) == 0) {
        ok = 0;
        goto check6;
    }
    v = *(u8 *)((u8 *)node + 5);
    if (v != 0) {
        if ((u8)fn_800B2FF4(v) == 0) {
            ok = 0;
            goto check6;
        }
    }
    if (*(u32 *)((u8 *)node + 8) == 0) {
        goto success6;
    }

    node = fn_8000D354(*(s32 *)((u8 *)node + 8));
    fn_80055AC0(node, (s32)sp8);
    if ((u8)fn_8005BA10(sp8) == 0) {
        ok = 0;
        goto check7;
    }
    v = (u8)fn_80055C7C(node);
    if (v != 0) {
        if ((u8)fn_800B2FF4(v) == 0) {
            ok = 0;
            goto check7;
        }
    }
    if (fn_80055C74(node) != 0) {
        if ((u8)fn_80055248(fn_80055C74(node)) == 0) {
            ok = 0;
            goto check7;
        }
    }

    ok = 1;
check7:
    if ((u8)ok != 0) {
        goto success6;
    }
    ok = 0;
    goto check6;

success6:
    ok = 1;
check6:
    if ((u8)ok != 0) {
        goto success5;
    }
    ok = 0;
    goto check5;

success5:
    ok = 1;
check5:
    if ((u8)ok != 0) {
        goto success4;
    }
    ok = 0;
    goto check4;

success4:
    ok = 1;
check4:
    if ((u8)ok != 0) {
        goto success3;
    }
    ok = 0;
    goto check3;

success3:
    ok = 1;
check3:
    if ((u8)ok != 0) {
        goto success2;
    }
    ok = 0;
    goto check2;

success2:
    ok = 1;
check2:
    if ((u8)ok != 0) {
        goto success1;
    }
    return 0;

success1:
    return 1;
}
void fn_800558D8(s32 arg0) {
    void fn_800555EC(s32, s32);
    fn_800555EC(arg0, 0);
}

void fn_800558FC(void* arg0)
{
    // Load byte and compare with 0x8
    u8 val = *(u8*)((char*)arg0 + 0x6);
    
    if (val >= 0x8) {
        // Use jump table for cases >= 8
        void (*func)(void) = (void (*)(void))jumptable_80285ACC[val];
        
        // Make the call
        func();
    } else {
        // Switch to handle cases 0-7
        
        switch(val) {
            case 0:
                *(u32*)(((char*)arg0) + 0x28) = lbl_8036905C;
                break;
            case 1:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369060;
                break;
            case 2:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369064;
                break;
            case 3:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369068;
                break;
            case 4:
                *(u32*)(((char*)arg0) + 0x28) = lbl_8036906C;
                break;
            case 5:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369070;
                break;
            case 6:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369074;
                break;
            case 7:
                *(u32*)(((char*)arg0) + 0x28) = lbl_80369078;
                break;
        }

        // After switch, just do one final assignment
        *(u32*)(((char*)arg0) + 0x28) = lbl_8036907C;
    }
}

s32 fn_80055AC0(s32 *arg0, s32 arg1) {
    void fn_80231D94(s32, void *, void *, ...);
    extern u8 lbl_8026AC0C[];

    fn_80231D94(arg1, lbl_8026AC0C + 0x120, lbl_8026AC0C + 0x129, *arg0);
    return arg1;
}

void fn_80055B0C(s32 arg0) {
    void fn_800056A0(s32);
    void fn_801451BC(void);
    void fn_801452A8(u8);
    u8 fn_801452C8(u8);
    s32 fn_801452E8(void);

    if (fn_801452C8((u8)arg0) == 0) {
        if (fn_801452E8() >= 0x10) {
            fn_800056A0(0);
            fn_801451BC();
        }
        fn_801452A8((u8)arg0);
    }
}
