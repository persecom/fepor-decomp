/* Functions from 0x800AD24C to 0x800C3F18, found by decomp-toolkit. */
#include "common.h"
extern s32 fn_80010710(u8* arg0);
  extern s32 lbl_80368230;
  extern s32 lbl_8028D544[];
  extern u16 lbl_80319A68[32];
  void fn_800AE904(void *);
  void fn_800AEA74(void *);

/* 0x18-byte record used by fn_800C29D0 / fn_800C2ACC / fn_800C30CC (1-based index) */
typedef struct Unk800C2ACC {
    u8 unk0[0x13];
    u8 unk13;
    u8 unk14[4];
} Unk800C2ACC;

void fn_800AD24C(void) {
    extern u16 lbl_80312ACC[];
    extern void fn_800AD284(void);
    fn_8022C1E8(lbl_80312ACC, fn_800AD284, 0x10, 0x10);
}

s32 fn_800AD284(s32 arg0, s16 arg1) {
    M2C_UNK fn_8001C5F8(s32, M2C_UNK);
    M2C_UNK fn_800C428C(s32);
    if (arg0 != 0) {
        fn_8001C5F8(arg0 + 4, -1);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_800AD2DC(s32 arg0) {
    M2C_UNK fn_8001C76C(s32);
    fn_8001C76C(arg0 + 4);
    return arg0;
}

#pragma optimization_level 2
s32 fn_800AD310(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    void fn_8000C60C(void *);
    void fn_80015320(s32, void *);
    s32 fn_80019E04(void *);
    void fn_8002AB9C(void *, s32);
    void fn_8002AD04(void *, s32);
    u8 fn_80105BC0(void *, s32);
    extern u8 lbl_8026E988[];
    extern u8 lbl_8028D110[];
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802EF4E0[];
    u8 sp8;
    s16 temp_r0;
    void *var_r31;
    void *temp_r3;
    s32 var_r29;

    temp_r3 = fn_8000CAA0(lbl_8028D110, arg0);
    *(s16 *)((u8 *)temp_r3 + 0x6C) = 0;
    *(s16 *)((u8 *)temp_r3 + 0x6E) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x30) = 0;
    *((u8 *)temp_r3 + 0x60) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x34) = 0;
    *((u8 *)temp_r3 + 0x61) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x38) = 0;
    *((u8 *)temp_r3 + 0x62) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x3C) = 0;
    *((u8 *)temp_r3 + 0x63) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x40) = 0;
    *((u8 *)temp_r3 + 0x64) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x44) = 0;
    *((u8 *)temp_r3 + 0x65) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x48) = 0;
    *((u8 *)temp_r3 + 0x66) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x4C) = 0;
    *((u8 *)temp_r3 + 0x67) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x50) = 0;
    *((u8 *)temp_r3 + 0x68) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x54) = 0;
    *((u8 *)temp_r3 + 0x69) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x58) = 0;
    *((u8 *)temp_r3 + 0x6A) = 0;
    *(s32 *)((u8 *)temp_r3 + 0x5C) = 0;
    *((u8 *)temp_r3 + 0x6B) = 0;
    fn_80015320(0, &sp8);
    var_r29 = 1;
    do {
        if ((u8)var_r29 != 0) {
            var_r31 = lbl_802B14E4 + (((u8)var_r29 - 1) * 0x280);
        } else {
            var_r31 = NULL;
        }
        if (*(u32 *)((u8 *)var_r31 + 0x188) != 0
            && *((u8 *)&sp8 + *((u8 *)*(void **)((u8 *)var_r31 + 0x190) + 8)) != 0
            && !(*(u32 *)((u8 *)var_r31 + 0x1A0) & 4)
            && !((*(u16 *)((u8 *)var_r31 + 0x1A4) >> 7) & 7)
            && !(*((u8 *)var_r31 + 0x1A5) & 7)) {
            if (fn_80105BC0((u8 *)var_r31 + 0x1BC, 0x4A) != 0) {
                fn_8002AD04(var_r31, fn_80019E04(lbl_8026E988 + 0x101));
                if (*(s32 *)lbl_802EF4E0 != 0) {
                    temp_r0 = *(s16 *)((u8 *)temp_r3 + 0x6C);
                    if (temp_r0 != 0xB) {
                        *(void **)((u8 *)temp_r3 + (temp_r0 * 4) + 0x30) = var_r31;
                        *((u8 *)temp_r3 + *(s16 *)((u8 *)temp_r3 + 0x6C) + 0x60) = 1;
                        *(s16 *)((u8 *)temp_r3 + 0x6C) = (s16)(*(s16 *)((u8 *)temp_r3 + 0x6C) + 1);
                    }
                }
            }
            if (fn_80105BC0((void *)((u32)var_r31 + 0x1BC), 0x49) != 0) {
                fn_8002AB9C(var_r31, fn_80019E04(lbl_8026E988 + 0x10A));
                if (*(s32 *)lbl_802EF4E0 != 0) {
                    temp_r0 = *(s16 *)((u8 *)temp_r3 + 0x6C);
                    if (temp_r0 != 0xB) {
                        *(void **)((u8 *)temp_r3 + (temp_r0 * 4) + 0x30) = var_r31;
                        *((u8 *)temp_r3 + *(s16 *)((u8 *)temp_r3 + 0x6C) + 0x60) = 2;
                        *(s16 *)((u8 *)temp_r3 + 0x6C) = (s16)(*(s16 *)((u8 *)temp_r3 + 0x6C) + 1);
                    }
                }
            }
        }
        var_r29 += 1;
    } while (var_r29 <= 0x9F);
    if (*(s16 *)((u8 *)temp_r3 + 0x6C) == 0) {
        fn_8000C60C(temp_r3);
        return 0;
    }
    return 1;
}

extern u8 lbl_8028D064[16];
void fn_800AD64C(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8028D064[16];
    fn_8000CAA0(lbl_8028D064, arg0);
}

#pragma optimization_level reset
void fn_800AD678(void) {
    M2C_UNK fn_801A4BE0(M2C_UNK *);
    extern M2C_UNK lbl_80330EAC;
    M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) = (s32) (M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) | 1);
    fn_801A4BE0(&lbl_80330EAC);
}

void fn_800AD6AC(void *arg0) {
    extern u16 lbl_80330EAC[];
    void *temp_r4;
    void *temp_r5;
    u8 temp_r7;

    temp_r4 = *(void **)((u8 *)arg0 + 0x30);
    temp_r5 = *(void **)((u8 *)temp_r4 + 0x190);
    if (*(u8 *)((u8 *)temp_r5 + 8) != 0) {
        fn_8000C070(0x64);
        return;
    }
    temp_r7 = *(u8 *)((u8 *)arg0 + 0x3A);
    fn_80034A8C(lbl_80330EAC, temp_r7, 1);
}

s32 fn_800ADB74(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp0, temp1, temp2, temp3;
    s32 var_r3, var_r4;
    
    if (arg0 < 0) {
        temp0 = (arg0 + 0x1F) >> 5;
    } else {
        temp0 = arg0 >> 5;
    }

    if (arg1 < 0) {
        temp1 = (arg1 + 0x1F) >> 5;
    } else {
        temp1 = arg1 >> 5;
    }
    
    if (arg2 < 0) {
        temp2 = (arg2 + 0x1F) >> 5;
    } else {
        temp2 = arg2 >> 5;
    }

    if (arg3 < 0) {
        temp3 = (arg3 + 0x1F) >> 5;
    } else {
        temp3 = arg3 >> 5;
    }
    
    var_r4 = temp1 * 0x32E100;
    var_r3 = temp0 * 0x7D8600;
    var_r3 += var_r4;
    var_r4 = temp2 * 0x19400;
    var_r3 += var_r4;
    var_r4 = temp3 * 0x564;
    var_r3 += var_r4;
    
    return var_r3 + 0x800000;
}

void fn_800ADD04(void);
void fn_800ADC9C(s32 arg0) {
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_80330EAC[];
    void *fn_8002F62C(void *);
    u8 *fn_8002F740(void);
    M2C_UNK fn_8019B6B4(s32, void (*)(void));
    M2C_UNK fn_801A4958(void *);
    M2C_UNK fn_801A75DC(void *, u8 *, s32);
    u8 *p;

    fn_8002F62C(lbl_802EF4E0);
    p = fn_8002F740();
    fn_801A75DC(lbl_80330EAC, p, -1);
    fn_801A4958(lbl_80330EAC);
    fn_8019B6B4(arg0, fn_800ADD04);
}

void fn_800ADD04(void) {
    extern u8 lbl_802EF4E0[];
    void *fn_8002F62C(void *);
    u8 *fn_8002F740(void);
    M2C_UNK fn_8010455C(void *, u8);
    void *p;

    p = fn_8002F62C(lbl_802EF4E0);
    fn_8010455C(fn_8002F740() + 0x1A4, M2C_FIELD(p, u8 *, 3));
}

extern u8 lbl_802EF4E0[];
extern void fn_8002F61C(void *);
extern void *fn_8002F62C(void *);
extern u8 *fn_8002F740(void);
extern void fn_8003E8DC(void);
void fn_800ADD48(void) {
    fn_8002F62C(lbl_802EF4E0);
    fn_8002F740();
    fn_8003E8DC();
    fn_8002F61C(lbl_802EF4E0);
}

void fn_800ADD84(void) {
    M2C_UNK fn_80033418(void *);
    M2C_UNK fn_801A4BE0(void *);
    extern u8 lbl_80330EAC[];

    fn_801A4BE0(lbl_80330EAC);
    fn_80033418(lbl_80330EAC + 0x8A0);
}

void fn_800ADDBC(s32 arg0) {
    void *fn_8002F62C(void *, void *);
    u8 *fn_8002F740(void);
    s32 fn_8019B79C(s32, s32);
    s32 fn_8019B83C(s32, s32);
    s32 fn_8019B8A0(s32, s32);
    void fn_801A4958(void *);
    void fn_801A4A88(void *);
    void fn_801A75DC(void *, u8 *, s32);
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_80330EAC[];
    void *temp_r30;
    u8 *temp_r3;

    temp_r30 = fn_8002F62C(&lbl_802EF4E0, &lbl_802EF4E0);
    temp_r3 = fn_8002F740();
    fn_801A75DC(&lbl_80330EAC, temp_r3, -1);
    fn_801A4958(&lbl_80330EAC);
    if ((s8) M2C_FIELD(temp_r30, u8 *, 1) != 0) {
        fn_801A4A88(&lbl_80330EAC);
    }
    if (!(M2C_FIELD(temp_r3, s32 *, 0x1A0) & 0x010000DC)) {
        switch ((s8) M2C_FIELD(temp_r30, u8 *, 0)) { /* irregular */
        case 0:
            fn_8019B8A0(arg0, 0);
            return;
        case 1:
            fn_8019B83C(arg0, 0);
            return;
        case 2:
            fn_8019B79C(arg0, 0);
            break;
        }
    }
}

s32 fn_800ADEB0(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg0 < 0) {
        return -1;
    }
    if (arg0 >= 0x100) {
        return -2;
    }
    if (arg1 < 0) {
        return -3;
    }
    if (arg1 >= 0x100) {
        return -4;
    }
    if (arg2 < 0) {
        return -5;
    }
    if (arg2 >= 0x100) {
        return -6;
    }

    return arg0 + ((arg1 & 0xFF) << 8) + ((arg2 & 0xFF) << 16);
}

extern void fn_8003BE50(void);
void fn_800AE1FC(void) {
    fn_8002F62C(&lbl_802EF4E0);
    fn_8002F740();
    fn_8003BE50();
    fn_8002F61C(&lbl_802EF4E0);
}

s32 fn_800AE328(s32 arg0) {
    M2C_UNK fn_8003DDF8(void *, u8 *, u8 *);
    M2C_UNK fn_8003EA24(void *, u8, u8);
    M2C_UNK fn_80183C6C(void *, s8, s8, s8, s8, s32);
    void *fn_801A46BC(M2C_UNK *, M2C_UNK *);
    extern M2C_UNK lbl_80330EAC;
    u8 sp9;
    u8 sp8;
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = fn_801A46BC(&lbl_80330EAC, &lbl_80330EAC);
    if (temp_r3 == NULL) {
        return 0;
    }
    if (!(M2C_FIELD(temp_r3, s32 *, 0x1A0) & 2)) {
        return 0;
    }
    temp_r31 = M2C_FIELD(temp_r3, void **, 0x280);
    fn_8003DDF8(temp_r31, &sp9, &sp8);
    temp_r3_2 = M2C_FIELD(temp_r31, void **, 0x194);
    fn_80183C6C(temp_r3_2, (s8) M2C_FIELD(temp_r3_2, u8 *, 0x19E), (s8) M2C_FIELD(temp_r3_2, u8 *, 0x19F), (s8) sp9, (s8) sp8, arg0);
    fn_8003EA24(temp_r31, sp9, sp8);
    return 1;
}

void fn_800AE3DC(s32 arg0) {
    extern u8 lbl_80330708[];
    extern u8 lbl_80284AC8[];
    if (lbl_80330708[lbl_80330708[0x11] + 0x14] == 1) {
        fn_8000CAA0(lbl_80284AC8, arg0);
    }
}

void fn_800AE694(void *arg0) {
    void *fn_8014D8FC(void *);
    s8 fn_80146C94(void *);
    void fn_8014832C(s32, void *, s32, s32);
    void *fn_80053C30(void *, void *);
    void fn_80053658(void *, s32, void *);
    void fn_80059208(void *, void *);
    extern u8 lbl_80330708[];
    extern u8 lbl_8026EAA0[];
    extern u8 lbl_8032FF08[];
    extern f32 lbl_80369C7C;

    void *temp_r30;
    void *var_r29;
    void *var_r3;
    u8 temp_r0;
    u8 var_r6;
    s32 var_ctr;
    f32 f0;

    temp_r30 = fn_8014D8FC(lbl_80330708);
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    *(f32 *)((u8 *)arg0 + 0x38) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0x3C) = 0.0f;
    *(s32 *)((u8 *)arg0 + 0x44) = 0xF;
    *(s32 *)((u8 *)arg0 + 0x48) = 0x1E;
    var_r29 = NULL;
    if ((s8)fn_80146C94(lbl_8026EAA0 + 0x2B) == -1) {
        switch (lbl_80330708[0x11]) {
        case 0:
            temp_r0 = *((u8 *)temp_r30 + 0x3C);
            if ((s32)temp_r0 <= 0x12 || (s32)temp_r0 >= 0x32) {
                var_r29 = lbl_8026EAA0 + 0x38;
            } else {
                var_r29 = lbl_8026EAA0 + 0x46;
            }
            break;
        case 1:
            temp_r0 = *((u8 *)temp_r30 + 0x3C);
            if ((s32)temp_r0 <= 0x12 || (s32)temp_r0 >= 0x32) {
                var_r29 = lbl_8026EAA0 + 0x54;
            } else {
                var_r29 = lbl_8026EAA0 + 0x62;
            }
            break;
        case 2:
            var_r29 = lbl_8026EAA0 + 0x70;
            break;
        case 3:
            var_r29 = lbl_8026EAA0 + 0x80;
            break;
        }
        if (var_r29 != NULL) {
            for (var_r6 = 1, var_ctr = 3; var_ctr != 0; var_ctr--, var_r6++) {
                if (!(lbl_8032FF08[var_r6 * 0x30 + 0xC] & 1)) {
                    fn_8014832C(var_r6, var_r29, 0x64, 1);
                    break;
                }
            }
        }
    }
    switch (lbl_80330708[0x11]) {
    case 0:
        var_r3 = lbl_8026EAA0 + 0x90;
        break;
    case 1:
        var_r3 = lbl_8026EAA0 + 0xA0;
        break;
    case 2:
        var_r3 = lbl_8026EAA0 + 0xAF;
        break;
    case 3:
        var_r3 = lbl_8026EAA0 + 0xBE;
        break;
    default:
        var_r3 = NULL;
        break;
    }
    *(void **)((u8 *)arg0 + 0x4C) = fn_80053C30(var_r3, arg0);
    *(f32 *)((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x4C) + 0x30) + 0x1C) = 0.0f;
    *(s16 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x4C) + 0x30) = 0x63;
    fn_80053658(*(void **)((u8 *)arg0 + 0x4C), 0, arg0);
    *(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x4C) + 0x30) + 0x44) = fn_800AE904;
    fn_80059208(fn_800AEA74, arg0);
}

void fn_800AE904(void *arg0) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x4C), s32 *, 0x4C) = 0;
}

void fn_800AEA74(void *arg0) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007870(f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(u8);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    extern s32 lbl_80369C68;
    extern s32 lbl_80369C6C;
    extern s32 lbl_80369C70;
    extern s32 lbl_80369C74;
    extern f32 lbl_80369C7C;
    extern f32 lbl_80369C94;
    extern f32 lbl_80369C98;
    extern f32 lbl_80369C9C;
    extern f32 lbl_80369CA0;
    extern f32 lbl_80369CA4;
    extern s32 lbl_8036C488;
    extern s32 lbl_8036C48C;
    extern s32 lbl_8036C490;
    extern s32 lbl_8036C494;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r31;

    temp_r31 = *(s32 *)((u8 *)arg0 + 0x34);
    fn_8000A258();
    {
        f32 z = lbl_80369C7C;
        f32 o = 1.0f;
        fn_80009D74(z, z, o, o);
    }
    fn_8000A174(0, 0x12);
    fn_80009B8C((u8)temp_r31);
    fn_8000A248();
    fn_80007898(3);
    fn_80007870(lbl_80369C94);
    fn_800077D8(lbl_80369C7C, lbl_80369C98, lbl_80369C9C, lbl_80369CA0);
    fn_800075D8();
    sp18 = lbl_80369C6C;
    sp1C = lbl_80369C68;
    sp20 = lbl_8036C48C;
    sp24 = lbl_8036C488;
    fn_800072B0(&sp24, &sp20, &sp1C, &sp18);
    fn_80007884();
    fn_80007898(3);
    fn_80007870(lbl_80369C94);
    fn_800077D8(lbl_80369C7C, lbl_80369CA4, lbl_80369C9C, lbl_80369CA0);
    fn_800075D8();
    sp8 = lbl_8036C494;
    spC = lbl_8036C490;
    sp10 = lbl_80369C74;
    sp14 = lbl_80369C70;
    fn_800072B0(&sp14, &sp10, &spC, &sp8);
    fn_80007884();
    fn_80009B28();
}

void fn_800B16EC(void *arg0) {
    M2C_UNK fn_800B1720(M2C_UNK, s32);
    fn_800B1720(0, *M2C_FIELD(arg0, s32 **, 4) + 0x40);
}

s32 fn_800B1BFC(s32 arg0)
{
    extern u16 lbl_80317338[4976];
    s16 val = lbl_80317338[arg0];
    lbl_80317338[arg0] = val - 1;
    return val;
}

void fn_800B1D68(s32 arg0, u8 arg1) {
    void fn_8024B654(u32, s32, u8);
    extern u8 lbl_80317338[];
    u8 *entry;
    u32 handle;

    entry = M2C_FIELD(lbl_80317338, u8 **, 0xF4) + arg0 * 0x14;
    handle = M2C_FIELD(entry, u32 *, 0xC);
    if (handle != 0xFFFFFFFF) {
        M2C_FIELD(entry, u16 *, 4) = arg1;
        fn_8024B654(handle, 7, arg1);
        if (M2C_FIELD(lbl_80317338, u16 *, 0x12C) != 0) {
            fn_8024B654(handle, 7, 0);
        }
    }
}

s32 fn_800B1DEC(s32 arg0, s32 arg1) {
    extern u16 lbl_80317338[];
    s32 temp;
    
    temp = (s32)lbl_80317338[arg0 * 0x14 + 0xF4 / 2];
    
    if ((temp & 0x1000) != 0) {
        return fn_8024B6B4(0x80, arg1);
    }
    
    return 0;
}

void fn_800B24D8(s32 arg0, u8 arg1) {
    u8 fn_8024B370(s32);
    void fn_8024B4B0(u8, s32, s32, s32);
    extern u8 lbl_80317338[];
    s32 *entry;

    entry = (s32 *)(M2C_FIELD(lbl_80317338, u8 **, 0xF0) + arg0 * 16);
    if (fn_8024B370(entry[0])) {
        if (arg1 > 0x7F) {
            arg1 = 0x7F;
        }
        entry[1] = arg1;
        fn_8024B4B0(entry[1], 0, entry[0], 0);
        if (M2C_FIELD(lbl_80317338, u16 *, 0x12C) != 0) {
            fn_8024B4B0(0, 0, entry[0], 0);
        }
    }
}

s16 fn_800B25EC(s32 arg0) {
    extern u16 lbl_80317338[];
    s16 val = lbl_80317338[arg0];
    lbl_80317338[arg0] = val - 1;
    return val;
}

void fn_800B2648(s32 arg0) {
    u8 fn_8024B370(s32);
    void fn_8024B420(s32);
    void fn_8024B4B0(u8, s32, s32, s32);
    extern u8 lbl_80317338[];
    s32 *entry;

    entry = (s32 *)(M2C_FIELD(lbl_80317338, u8 **, 0xF0) + arg0 * 16);
    if (fn_8024B370(entry[0])) {
        fn_8024B420(entry[0]);
        fn_8024B4B0(entry[1], 0, entry[0], 0);
    }
}

extern void *lbl_80368A44;
s32 fn_800B26B0(u32 arg0) {
    u32 temp_r0;
    void *var_r4;
    
    if ((u32)(arg0 + 0x10000) != -1U) {
        var_r4 = lbl_80368A44;
        if (var_r4 == NULL) {
            return -1;
        }
        
        do {
            temp_r0 = *(u32 *)((char *)var_r4 + 0x8);
            if (temp_r0 == arg0) {
                return *(s32 *)((char *)var_r4 + 0xC);
            }
            if (temp_r0 > arg0) {
                var_r4 = *(void **)((char *)var_r4 + 0x0);
                if (var_r4 == NULL) {
                    return -1;
                }
            } else {
                var_r4 = *(void **)((char *)var_r4 + 0x4);
                if (var_r4 == NULL) {
                    return -1;
                }
            }
        } while (1);
    }
    return -1;
}

void fn_800B27BC(void) {
    u8 fn_8025ED80();
    extern M2C_UNK lbl_80317338;
    s32 var_r6;
    u16 temp_r5;
    u16 temp_r5_2;
    u16 temp_r5_3;

    if ((fn_8025ED80() != 0) && ((u16) M2C_FIELD(&lbl_80317338, u16 *, 0x12C) == 1)) {
        var_r6 = 0;
        temp_r5 = M2C_FIELD(M2C_FIELD(&lbl_80317338, void **, 0xF8), u16 *, 0);
        if ((temp_r5 & 8) && !(temp_r5 & 0x400) && !(temp_r5 & 2)) {
            if (temp_r5 & 0x1000) {
                var_r6 = 1;
            }
            if (((u16) M2C_FIELD(M2C_FIELD(&lbl_80317338, void **, 0xF8), u16 *, 0x1E) == 2) && (temp_r5 & 0x2000)) {
                var_r6 = 1;
            }
        }
        temp_r5_2 = M2C_FIELD(M2C_FIELD(&lbl_80317338, void **, 0xF8), u16 *, 0x13C);
        if ((temp_r5_2 & 8) && !(temp_r5_2 & 0x400) && !(temp_r5_2 & 2)) {
            if (temp_r5_2 & 0x1000) {
                var_r6 = 1;
            }
            if (((u16) M2C_FIELD(M2C_FIELD(&lbl_80317338, void **, 0xF8), u16 *, 0x15A) == 2) && (temp_r5_2 & 0x2000)) {
                var_r6 = 1;
            }
        }
        temp_r5_3 = M2C_FIELD(M2C_FIELD(&lbl_80317338, void **, 0xF8), u16 *, 0x278);
        if ((temp_r5_3 & 8) && !(temp_r5_3 & 0x400) && !(temp_r5_3 & 2)) {
            if (temp_r5_3 & 0x1000) {
                var_r6 = 1;
            }
            if (((u16) M2C_FIELD(M2C_FIELD(&lbl_80317338, void **, 0xF8), u16 *, 0x296) == 2) && (temp_r5_3 & 0x2000)) {
                var_r6 = 1;
            }
        }
        if (var_r6 != 0) {
            M2C_FIELD(&lbl_80317338, u16 *, 0x12C) = 2U;
            return;
        }
        M2C_FIELD(&lbl_80317338, u16 *, 0x12C) = 0U;
    }
}

void fn_800B28DC(void) {
    extern u8 lbl_80317338[];

    if (M2C_FIELD(lbl_80317338, u16 *, 0x12C) == 0) {
        M2C_FIELD(lbl_80317338, u16 *, 0x12C) = 1;
    }
}

void fn_800B28FC(s32 arg0) {
    M2C_UNK fn_8024B94C(M2C_UNK *);
    extern M2C_UNK lbl_80317338;
    M2C_FIELD(&lbl_80317338, s32 *, 0x130) = arg0;
    fn_8024B94C(&lbl_80317338);
}

s32 fn_800B2CCC(void) {
    int i;
    
    for (i = 0; i < 16; i++) {
        if (lbl_80319A68[i] != 0) {
            return 0;
        }
    }
    return 1;
}

s32 fn_800B2D94(void) {
    extern u16 lbl_80319A68[32];
    lbl_80319A68[0] = 2;
    lbl_80319A68[1] = 3;
    lbl_80319A68[2] = 7;
    lbl_80319A68[3] = 8;
    lbl_80319A68[4] = 9;
    lbl_80319A68[5] = 10;
    lbl_80319A68[6] = 11;
    lbl_80319A68[7] = 12;
    return 1;
}

s32 fn_800B2DE4(s32 arg0, s32 arg1) {
    s32 fn_8020C6D4(char *, void *);
    s32 fn_8020CC28(void *, s32, s32, s32, s32);
    s32 fn_8020C79C(void *);
    extern u8 lbl_80317338[];
    u8 sp8[0x3C];

    if (fn_8020C6D4((char *)lbl_80317338 + 0x342, sp8) == 0) {
        return 0;
    }
    if (fn_8020CC28(sp8, M2C_FIELD(lbl_80317338, s32 *, 0x448), arg1, arg0, 2) <= 0) {
        return 0;
    }
    fn_8020C79C(sp8);
    return M2C_FIELD(lbl_80317338, s32 *, 0x448);
}

s32 fn_800B2E78(void) {
    extern u8 lbl_80319A58[16];
    s32 i;
    s32 count;

    count = 0;
    for (i = 0; i < 16; i++) {
        if (lbl_80319A58[i] != 0) {
            count++;
        }
    }
    return count;
}

extern u16 lbl_80319A18[];
s32 fn_800B2FF4(u8 arg0) {
    u16 *ptr;
    s32 count;
    
    if (arg0 == 0) {
        ptr = &lbl_80319A18[0];
        count = 2;
loop_1:
        if (*ptr != 0) {
            return 0;
        }
        ptr += 1;
        if (*ptr != 0) {
            return 0;
        }
        ptr += 1;
        if (*ptr != 0) {
            return 0;
        }
        ptr += 1;
        if (*ptr != 0) {
            return 0;
        }
        ptr += 1;
        if (*ptr != 0) {
            return 0;
        }
        ptr += 1;
        if (*ptr != 0) {
            return 0;
        }
        ptr += 1;
        if (*ptr != 0) {
            return 0;
        }
        ptr += 1;
        count -= 1;
        if (count == 0) {
            return 1;
        }
        goto loop_1;
    } else {
        s32 temp_arg0 = arg0 + 1;
        ptr = &lbl_80319A18[0];
        count = 2;
loop_2:
        if (temp_arg0 == *ptr) {
            return 0;
        }
        ptr += 1;
        if (temp_arg0 == *ptr) {
            return 0;
        }
        ptr += 1;
        if (temp_arg0 == *ptr) {
            return 0;
        }
        ptr += 1;
        if (temp_arg0 == *ptr) {
            return 0;
        }
        ptr += 1;
        if (temp_arg0 == *ptr) {
            return 0;
        }
        ptr += 1;
        if (temp_arg0 == *ptr) {
            return 0;
        }
        ptr += 1;
        if (temp_arg0 == *ptr) {
            return 0;
        }
        ptr += 1;
        count -= 1;
        if (count == 0) {
            return 1;
        }
        goto loop_2;
    }
}

s32 fn_800B3194(void) {
    void fn_802590E0(void);
    extern u8 lbl_80317338[];
    extern u8 lbl_80319A58[16];
    u32 i;

    while (M2C_FIELD(lbl_80317338, u32 *, 0xC4) != 0) {
        fn_802590E0();
        M2C_FIELD(lbl_80317338, u32 *, 0xC4)--;
    }
    for (i = 0; i < 16; i++) {
        lbl_80319A58[i] = 0;
    }
    if (M2C_FIELD(lbl_80317338, u32 *, 0x444) != 0) {
        M2C_FIELD(lbl_80317338, u32 *, 0x444) = 0;
    }
    return 1;
}

s32 fn_800B33FC(s32 arg0, s32 arg1) {
    s32 fn_8020C6D4(char *, void *);
    s32 fn_8020CC28(void *, s32, s32, s32, s32);
    s32 fn_8020C79C(void *);
    extern u8 lbl_80317338[];
    u8 sp8[0x3C];

    if (fn_8020C6D4((char *)lbl_80317338 + 0x242, sp8) == 0) {
        return 0;
    }
    if (fn_8020CC28(sp8, M2C_FIELD(lbl_80317338, s32 *, 0x444), arg1, arg0, 2) <= 0) {
        return 0;
    }
    fn_8020C79C(sp8);
    return M2C_FIELD(lbl_80317338, s32 *, 0x444);
}

void fn_800B3490(void) {
    extern u16 lbl_80317338[];
    u32 index = 0x222;
    if (lbl_80317338[index] != 0) {
        lbl_80317338[index] = 0;
    }
}

#pragma use_lmw_stmw on
s32 fn_800B34B0(u8 *arg0) {
    s32 fn_800B4A84(void *, s32, s32);
    s32 fn_800B49C8(void *);
    void fn_800B49D0(void *);
    s32 fn_800B4A14(void *, s32, s32, s32);
    s32 fn_800C4638(s32, void *, s32);
    void fn_800C4588(s32);
    void fn_800062EC(s32, s32, u32);
    u32 OSGetResetCode();
    void DCFlushRange(void *, u32);
    void fn_80258D74(u8 *(*)(s32, u32), s32);
    u8 fn_80258D94(s32, u16, s32, s32, s32);
    u8 *fn_800B3F8C(s32, u32);
    extern u8 lbl_80317338[];
    extern void *lbl_80367814;
    extern s32 lbl_8036780C;
    extern u8 lbl_8026EB70[];
    u8 *base;
    s32 handle;
    u32 buffer;
    s32 size;
    u32 value;
    s32 i;
    u32 *counter_ptr;
    
    base = lbl_80317338;
    if (*(u32 *)(base + 0xE0) >= 8) {
        return 0;
    }
    lbl_80367814 = NULL;
    handle = fn_800B4A84(base + 0x142, 2, 0);
    if (handle == 0) {
        buffer = 0;
    } else {
        value = fn_800B49C8((void *)handle);
        if (value == 0) {
            buffer = 0;
        } else {
            size = (value + 0x1F) & 0xFFFFFFE0;
            buffer = fn_800C4638(size, lbl_8026EB70 + 0x2E, 0);
            if (buffer == 0) {
                buffer = 0;
            } else {
                lbl_8036780C = size;
                if (((OSGetResetCode() >> 31) != 0) && ((OSGetResetCode() & 0x100) != 0)) {
                    fn_800062EC(buffer, 0x81200000 - size, size);
                    DCFlushRange((void *)buffer, size);
                } else if (fn_800B4A14((void *)handle, buffer, size, 0) <= 0) {
                    fn_800C4588(buffer);
                    buffer = 0;
                    goto stored;
                }
                fn_800B49D0((void *)handle);
            }
        }
    }
stored:
    lbl_80367814 = (void *)buffer;
    if (buffer == 0) {
        return 0;
    }
    {
        u8 *p = lbl_80317338;
        if (*(u32 *)(p + 0x444) == 0) {
            *(u32 *)(p + 0x444) = *(u32 *)(p + 0x448);
            fn_80258D74(fn_800B3F8C, 0x20000);
        }
    }
    {
        u8 *ptr = lbl_80317338;
        counter_ptr = (u32 *)(ptr + 0xC0);
        *(u32 *)(ptr + 0xC0) = 0;
        if (arg0 != NULL) {
            while (*arg0 != 0xFF) {
                fn_80258D94(*(s32 *)(ptr + 0x20), *arg0, 0, *(s32 *)(ptr + 0x40), *(s32 *)(ptr + 0x0));
                *(u32 *)counter_ptr += 1;
                arg0++;
            }
        } else {
            for (i = 0; i < 6; i++) {
                if (fn_80258D94(*(s32 *)(ptr + 0x20), i, 0, *(s32 *)(ptr + 0x40), *(s32 *)(ptr + 0x0)) == 1) {
                    *(u32 *)counter_ptr += 1;
                    *(u32 *)(ptr + 0xE8) += 1;
                }
            }
        }
    }
    if (lbl_80367814 != NULL) {
        fn_800C4588((s32)lbl_80367814);
    }
    *(u32 *)((u8 *)counter_ptr + *(u32 *)(base + 0xE0) * 4) = 0;
    return 1;
}
#pragma use_lmw_stmw reset
void fn_800B4060(void) {
    M2C_UNK fn_800AECC0();
    fn_800AECC0();
}

void fn_800B4794(void) {
    extern s8 lbl_80367810;
    lbl_80367810 = 0;
}

void fn_800B47A0(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

void fn_800B47C0(void) {
    extern u16 lbl_8026EB70[];
    fn_800C4638((u16*)((u8*)lbl_8026EB70 + 0x5C), 0);
}

s32 fn_800B49C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

void fn_800B49D0(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 8);
}

void fn_800B49E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s32 *, 0x84) = arg3;
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 1);
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x8C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}

s32 fn_800B4A14(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s32 *, 0x84) = arg3;
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) | 1);
    M2C_FIELD(arg0, u16 *, 0x90) = (u16) (M2C_FIELD(arg0, u16 *, 0x90) & 0xFFFFFFFD);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
loop_1:
    if (!(M2C_FIELD(arg0, u16 *, 0x90) & 2)) {
        fn_8020A51C();
        goto loop_1;
    }
    return M2C_FIELD(arg0, s32 *, 0x74);
}

extern u16 lbl_8028D0FC[];
s32 fn_800B4A84(void* arg0, s32 arg1, s32 arg2) {
    s32 r31_2 = (s32)arg1;
    s32 r31_3 = (r31_2 & 0x7F);
    s32 r31_5 = r31_2 >> 7;
    s32 r31_4 = lbl_8028D544[r31_3];
    if (r31_4 == 0) {
        *(u16*)arg0 = lbl_8028D0FC[(s32)(r31_5)];
    } else {
        *(u16*)arg0 = r31_4;
    }
}

extern u16 lbl_80367820;
s32 fn_800B4FF8(u8 *arg0, u8 *arg1) {
    s32 temp_r4;
    u16 temp_r3;
    u16 temp_r0_2;
    
    temp_r4 = lbl_80367820 + 0x92;
    temp_r3 = *(u16*)(temp_r4 + (*arg0 * 0x98));
    temp_r0_2 = *(u16*)(temp_r4 + (*arg1 * 0x98));
    if (temp_r3 > temp_r0_2) {
        return 1;
    }
    if (temp_r3 < temp_r0_2) {
        return -1;
    }
    return 0;
}

s32 fn_800B503C(void *arg0, s32 arg1) {
    s32 temp_r4 = M2C_FIELD(arg0, s32 *, 0x74);
    
    if (temp_r4 == 0) {
        return 0;
    }
    if ((*(u16*)(arg1 + 0x98) - 1U) > 0xFFFF) {
        return 0;
    }
    return temp_r4;
}

void fn_800B50E4(void) {
    M2C_UNK fn_800B4C20();
    M2C_UNK fn_8020A51C();
loop_1:
    fn_800B4C20();
    fn_8020A51C();
    goto loop_1;
}

s32 fn_800B6A30(void) {
    return 0;
}

s32 fn_800B6A38(void) {
    return 1;
}

void fn_800B6A70(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 < 0) {
        arg0 = 0;
    }
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg2 < 0) {
        arg2 = 0;
    }
    *(s32 *)(arg0 + 0x7C) = arg1;
    *(s32 *)(arg0 + 0x80) = arg2;
}

s32 fn_800B6AA8(s32 arg0) {
    extern f32 lbl_80369CF4;
    return (s32) (lbl_80369CF4 * (f32) arg0);
}

s32 fn_800B6B20(void) {
    extern s32 lbl_8028D298;
    
    fn_8000CAA0(&lbl_8028D298, fn_800C0658(), &lbl_8028D298);
    fn_80013864();
    return 1;
}

void fn_800B6B58(s32 arg0) {
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) {
        fn_8000C188(arg0);
    }
}

extern s32 lbl_8036B3A4;
extern s32 lbl_8036B3A4;
s32 fn_800B6B94(s32 arg0) {
    M2C_UNK fn_801F89AC(s32, s32);
    extern f32 lbl_80369CF4;

    fn_801F89AC((f32) arg0 / lbl_80369CF4, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B6C00(s32 arg0) {
    M2C_UNK fn_801F9D1C(s32, s32);
    extern f32 lbl_80369CF4;

    fn_801F9D1C((f32) arg0 / lbl_80369CF4, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B6C6C(s32 arg0) {
    M2C_UNK fn_801FA4B8(s32, s32);
    extern f32 lbl_80369CF4;

    fn_801FA4B8((f32) arg0 / lbl_80369CF4, fn_800C0658());
    fn_80013864();
    return 1;
}

extern M2C_UNK lbl_8028E7F8;
s32 fn_800B6CD8(u32 arg0) {
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    OSReport();
    return 1;
}

s32 fn_800B6D20(s32 arg0) {
    M2C_UNK fn_8014CC5C(void *, s32);
    extern u8 lbl_80330708[];

    fn_8014CC5C(lbl_80330708, arg0);
    return 1;
}

s32 fn_800B6D50(s32 arg0, s32 arg1) {
    M2C_UNK fn_8014CF10(void *, s8, s8);
    extern u8 lbl_80330708[];

    fn_8014CF10(lbl_80330708, arg0, arg1);
    return 1;
}

s32 fn_800B6D88(s32 arg0) {
    M2C_UNK fn_8014CF48(void *, s32);
    extern u8 lbl_80330708[];

    fn_8014CF48(lbl_80330708, arg0);
    return 1;
}

s32 fn_800B6DB8(s32 arg0, s32 arg1) {
    M2C_UNK fn_8014D204(void *, s8, s8);
    extern u8 lbl_80330708[];

    fn_8014D204(lbl_80330708, arg0, arg1);
    return 1;
}

s32 fn_800B6E8C(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 fn_800067BC(f32, f32, f32, f32);
    return (s32) fn_800067BC((f32) arg1, (f32) arg2, (f32) arg3, (f32) arg4);
}

s32 fn_800B6F10(void) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_80013864();
    extern M2C_UNK lbl_8028D26C;
    fn_8000CAA0(&lbl_8028D26C, fn_800C0658(), &lbl_8028D26C);
    fn_80013864();
    return 1;
}

void fn_800B6F48(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

s32 fn_800B6F6C(s32 arg0) {
    s32 ret;
    
    ret = arg0;
    if (ret < 0) {
        ret = 0;
    }
    return ret;
}

void fn_800B6FB8(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 1);
}

s32 fn_800B6FE4(u32 arg0) {
    M2C_UNK fn_80013864();
    M2C_UNK fn_801EAABC(u32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_801EAABC(arg0, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B7044(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    return arg0;
}

s32 fn_800B7140(u32 arg0) {
    M2C_UNK fn_801070FC(u32);
    M2C_UNK fn_80107294(M2C_UNK);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_80107294(5);
    fn_801070FC(arg0);
    return 1;
}

u8 fn_800B719C(u8 arg0) {
    u8 fn_800F32A4(void);
    extern u8 lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0U;
    }
    return fn_800F32A4();
}

u8 fn_800B7200(void) {
    extern u8 lbl_8031FFC0;
    return M2C_FIELD(&lbl_8031FFC0, u8 *, 0xA);
}

s32 fn_800B7210(void) {
    void fn_800162B8(void);
    void fn_801A7CDC(void *);
    void fn_80016DE0(void);
    void fn_8002297C(void *);
    extern u8 lbl_802CA518;
    extern u8 lbl_80330EAC;

    fn_800162B8();
    fn_801A7CDC(&lbl_80330EAC);
    fn_80016DE0();
    fn_8002297C(&lbl_802CA518);
    return 1;
}

s32 fn_800B7250(void) {
    M2C_UNK fn_800162B8();
    M2C_UNK fn_800163F8();
    fn_800162B8();
    fn_800163F8();
    fn_80016180();
    return 1;
}

s32 fn_800B727C(void) {
    M2C_UNK fn_800BDED8(void *);
    M2C_UNK fn_801E3654(M2C_UNK *, s32);
    extern M2C_UNK lbl_80330708;
    extern s32 lbl_80367840;
    M2C_UNK sp8;

    fn_800BDED8(&lbl_80330708 + 0xB4);
    fn_800162B8();
    fn_801E3654(&sp8, lbl_80367840);
    fn_800C4588(lbl_80367840);
    lbl_80367840 = 0;
    return 1;
}

s32 fn_800B72CC(void) {
    M2C_UNK fn_80016DE0();
    M2C_UNK fn_8002297C(M2C_UNK *);
    M2C_UNK fn_800BDED8(void *);
    M2C_UNK fn_800C32A4(M2C_UNK *);
    M2C_UNK fn_800C341C(M2C_UNK *);
    s32 fn_800C4638(M2C_UNK, void *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8010FF90(M2C_UNK *);
    M2C_UNK fn_801A7CDC(M2C_UNK *);
    M2C_UNK fn_801E38E0(M2C_UNK *, s32);
    extern M2C_UNK lbl_8026ECB8;
    extern M2C_UNK lbl_802CA518;
    extern M2C_UNK lbl_803200AC;
    extern M2C_UNK lbl_803206EC;
    extern M2C_UNK lbl_8032BB58;
    extern M2C_UNK lbl_80330708;
    extern M2C_UNK lbl_80330EAC;
    extern s32 lbl_80367840;
    M2C_UNK sp8;
    s32 temp_r3;

    temp_r3 = fn_800C4638(0xA000, &lbl_8026ECB8 + 0x996, 0, 0x10000);
    lbl_80367840 = temp_r3;
    fn_801E38E0(&sp8, temp_r3);
    fn_800162B8();
    fn_801A7CDC(&lbl_80330EAC);
    fn_80016DE0();
    fn_8002297C(&lbl_802CA518);
    fn_800BDED8(&lbl_80330708 + 0xB4);
    fn_8010FF90(&lbl_8032BB58);
    fn_800C341C(&lbl_803200AC);
    fn_800C32A4(&lbl_803206EC);
    fn_8002297C(&lbl_802CA518);
    return 1;
}

s32 fn_800B7378(void) {
    M2C_UNK fn_80016628(void *);
    M2C_UNK fn_800C2930(void *, void *);
    M2C_UNK fn_8017A7D4(void *, s32);
    extern u8 lbl_802842A4[];
    extern u8 lbl_802842B8[];
    extern u8 lbl_803206EC[];
    extern s32 lbl_80367840;
    struct {
        s32 handle;
        u8 pad4[8];
        u8 owned;
        u8 padD[3];
        void *vtbl;
    } obj;

    fn_800162B8();
    fn_8017A7D4(&obj, lbl_80367840);
    fn_80016628(&obj);
    fn_800C2930(lbl_803206EC, &obj);
    fn_800163F8();
    fn_80016180();
    fn_800C4588(lbl_80367840);
    lbl_80367840 = 0;
    obj.vtbl = lbl_802842B8;
    obj.vtbl = lbl_802842A4;
    if (obj.owned) {
        fn_800C4588(obj.handle);
        obj.handle = 0;
        obj.owned = 0;
    }
    return 1;
}

s32 fn_800B7410(void) {
    M2C_UNK fn_80016628(void *);
    M2C_UNK fn_800C2930(void *, void *);
    M2C_UNK fn_8017A7D4(void *, s32);
    M2C_UNK fn_80023DC0();
    extern u8 lbl_802842A4[];
    extern u8 lbl_802842B8[];
    extern u8 lbl_803206EC[];
    extern s32 lbl_80367840;
    struct {
        s32 handle;
        u8 pad4[8];
        u8 owned;
        u8 padD[3];
        void *vtbl;
    } obj;

    fn_800162B8();
    fn_8017A7D4(&obj, lbl_80367840);
    fn_80016628(&obj);
    fn_800C2930(lbl_803206EC, &obj);
    fn_80023DC0();
    fn_800163F8();
    fn_80016180();
    fn_800C4588(lbl_80367840);
    lbl_80367840 = 0;
    obj.vtbl = lbl_802842B8;
    obj.vtbl = lbl_802842A4;
    if (obj.owned) {
        fn_800C4588(obj.handle);
        obj.handle = 0;
        obj.owned = 0;
    }
    return 1;
}

s32 fn_800B7658(s32 arg0) {
    M2C_UNK fn_800A5D1C(void *, s32, s32);
    M2C_UNK fn_800A58F0(s32);
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_8026ECB8[];
    extern u8 lbl_8028D244[];
    extern s32 lbl_80367110;

    if (lbl_80367110 & 1) {
        return 0;
    }
    fn_800A5D1C(lbl_8026ECB8 + 0x997, 0, 1);
    fn_800A58F0(arg0);
    fn_8000CAA0(lbl_8028D244, fn_800C0658());
    fn_80013864();
    return 1;
}

s32 fn_800B76D0(u32 arg0) {
    M2C_UNK fn_800A5D1C(u32, s32, s32);
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_8028D244[];
    extern s32 lbl_80367110;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    fn_800A5D1C(arg0, 0, 1);
    fn_8000CAA0(lbl_8028D244, fn_800C0658());
    fn_80013864();
    return 1;
}

void fn_800B7748(s32 arg0) {
    u8 fn_800A5C88(void);
    extern s32 lbl_80367110;

    if (fn_800A5C88() == 0 || (lbl_80367110 & 1)) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B7790(s32 arg0) {
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_8028D22C[];
    extern s32 lbl_80367110;
    extern f32 lbl_80369CF4;
    void *obj;
    s32 count;

    fn_80013864();
    if (lbl_80367110 & 1) {
        return 0;
    }
    count = (f32) arg0 / lbl_80369CF4;
    if (count > 1) {
        obj = (void *) fn_8000CAA0(lbl_8028D22C, fn_800C0658());
        M2C_FIELD(obj, s32 *, 0x60) = count - 1;
    }
    return 1;
}

s32 fn_800B7828(s32 arg0) {
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_8028D22C[];
    extern s32 lbl_80367110;
    void *obj;

    fn_80013864();
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (arg0 > 1) {
        obj = (void *) fn_8000CAA0(lbl_8028D22C, fn_800C0658());
        M2C_FIELD(obj, s32 *, 0x60) = arg0 - 1;
    }
    return 1;
}

void fn_800B7890(void *arg0) {
    extern s32 lbl_80367110;

    M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(arg0, s32 *, 0x60) - 1;
    if (M2C_FIELD(arg0, s32 *, 0x60) < 0 || (lbl_80367110 & 1)) {
        fn_8000C188(arg0);
    }
}

u8 fn_800B78D4(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA6] == 2;
}

u8 fn_800B78F0(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA6] == 1;
}

u8 fn_800B790C(void) {
    extern u8 lbl_80330708[];
    s32 state;

    state = lbl_80330708[0xA6];
    return state == 0 || state == 3;
}

u8 fn_800B7938(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA6];
}

s32 fn_800B7948(void) {
    M2C_UNK fn_801453F0();
    fn_801453F0();
    return 1;
}

s32 fn_800B796C(void) {
    M2C_UNK fn_80145488();
    fn_80145488();
    return 1;
}

s32 fn_800B7990(void) {
    M2C_UNK fn_80145520();
    fn_80145520();
    return 1;
}

s32 fn_800B79B4(s32 arg0) {
    M2C_UNK fn_801455B8(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    fn_801455B8(var_r3);
    return 1;
}

s32 fn_800B79E4(void) {
    M2C_UNK fn_80145684();
    fn_80145684();
    return 1;
}

s32 fn_800B7A08(void) {
    M2C_UNK fn_8014571C();
    fn_8014571C();
    return 1;
}

s32 fn_800B7A2C(u32 arg0) {
    M2C_UNK fn_801475FC(u32, s32);
    extern s32 lbl_80367110;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (!(lbl_80367110 & 3)) {
        fn_801475FC(arg0, 100);
    }
    return 1;
}

s32 fn_800B7A80(void) {
    extern u8 lbl_8032FF08[192];
    
    u8 var_r31;
    u8 var_r31_2;
    u8 var_r31_3;
    u8 var_r31_4;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;

    fn_801457B4();
    var_r31 = 0;
    if ((lbl_8032FF08[0xC] & 1) && (M2C_FIELD(M2C_FIELD(&lbl_8032FF08, void **, 8), u8 (**)(void *), 8)(&lbl_8032FF08) != 0)) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        fn_801487D0(&lbl_8032FF08, 0xC8);
    }
    fn_80146AF0();
    fn_8014876C(&lbl_8032FF08, 0x64, 0xC8);
    var_r31_2 = 0;
    temp_r30 = &lbl_8032FF08 + 0x30;
    if ((lbl_8032FF08[0x3C] & 1) && (M2C_FIELD(M2C_FIELD(temp_r30, void **, 8), u8 (**)(void *), 8)(temp_r30) != 0)) {
        var_r31_2 = 1;
    }
    if (var_r31_2 != 0) {
        fn_80148980(temp_r30, 0xC8);
    }
    var_r31_3 = 0;
    temp_r30_2 = &lbl_8032FF08 + 0x60;
    if ((lbl_8032FF08[0x6C] & 1) && (M2C_FIELD(M2C_FIELD(temp_r30_2, void **, 8), u8 (**)(void *), 8)(temp_r30_2) != 0)) {
        var_r31_3 = 1;
    }
    if (var_r31_3 != 0) {
        fn_80148980(temp_r30_2, 0xC8);
    }
    var_r31_4 = 0;
    temp_r30_3 = &lbl_8032FF08 + 0x90;
    if ((lbl_8032FF08[0x9C] & 1) && (M2C_FIELD(M2C_FIELD(temp_r30_3, void **, 8), u8 (**)(void *), 8)(temp_r30_3) != 0)) {
        var_r31_4 = 1;
    }
    if (var_r31_4 != 0) {
        fn_80148980(temp_r30_3, 0xC8);
    }
    return 1;
}

s32 fn_800B7C04(void) {
    M2C_UNK fn_801457B4();
    fn_801457B4();
    return 1;
}

s32 fn_800B7C28(void) {
    M2C_UNK fn_80145828();
    fn_80145828();
    return 1;
}

s32 fn_800B7C4C(u8 arg0, s16 arg1) {
    M2C_UNK fn_80146AF0();
    M2C_UNK fn_8014876C(void *, M2C_UNK, s16);
    M2C_UNK fn_801487D0(void *, s16);
    
    extern u16 lbl_8032FF08[];
    u16 *temp_r30;
    u8 var_r31;
    
    temp_r30 = &lbl_8032FF08[arg0 * 0x30 / sizeof(u16)];
    var_r31 = 0;
    
    if ((M2C_FIELD(temp_r30, u8 *, 0xC) & 1) && 
        (M2C_FIELD(M2C_FIELD(temp_r30, void **, 8), u8 (**)(void *), 8)(temp_r30) != 0)) {
        var_r31 = 1;
    }
    
    if (var_r31 != 0) {
        fn_801487D0(temp_r30, arg1);
    }
    
    if ((s32)arg0 == 0) {
        fn_80146AF0();
        fn_8014876C(temp_r30, 0x64, arg1);
    }
    
    return 1;
}

s32 fn_800B7D08(u8 arg0, s16 arg1) {
    M2C_UNK fn_80146B00();
    M2C_UNK fn_80148888(void *, s16);
    extern M2C_UNK lbl_8032FF08;
    u8 var_r31;
    void *temp_r30;

    var_r31 = 0;
    temp_r30 = &lbl_8032FF08 + (arg0 * 0x30);
    if ((M2C_FIELD(temp_r30, u8 *, 0xC) & 1) && (M2C_FIELD(M2C_FIELD(temp_r30, void **, 8), u8 (**)(void *), 8)(temp_r30) != 0)) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        fn_80148888(temp_r30, arg1);
    }
    if ((s32) arg0 == 0) {
        fn_80146B00();
    }
    return 1;
}

s32 fn_800B7F98(u8 arg0, u8 arg1, s16 arg2) {
    extern u16 lbl_8032FF08[];
    s32 temp_r6;
    s32 temp_r3;

    temp_r6 = arg0 * 0x30;
    temp_r3 = temp_r6 << 1;
    fn_8014876C(&lbl_8032FF08[temp_r3], arg1, arg2, temp_r6);
    return 1;
}

s32 fn_800B8108(void) {
    M2C_UNK fn_8016B5E8();
    fn_8016B5E8();
    return 1;
}

s32 fn_800B812C(void) {
    M2C_UNK fn_8016B68C();
    fn_8016B68C();
    return 1;
}

s32 fn_800B8150(void) {
    M2C_UNK fn_8016B60C();
    fn_8016B60C();
    return 1;
}

s32 fn_800B8174(void) {
    M2C_UNK fn_8016B64C();
    fn_8016B64C();
    return 1;
}

s32 fn_800B8198(void) {
    M2C_UNK fn_800C0658();
    M2C_UNK fn_8016B6D4();
    fn_800C0658();
    fn_8016B6D4();
    return 1;
}

void fn_800B8208(s32 arg0) {
    extern M2C_UNK lbl_8026ECB8;
    if (fn_8000BCA4(&lbl_8026ECB8 + 0xA29, &lbl_8026ECB8) == 0U) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B8250(s8 arg0, s8 arg1, u8 arg2, s32 arg3) {
    M2C_UNK fn_8010FD70(M2C_UNK *, s8, s8, u8, s32);
    extern M2C_UNK lbl_8032BB58;
    fn_8010FD70(&lbl_8032BB58, arg0, arg1, arg2, arg3);
    return 1;
}

extern u16 lbl_8032BB58[];
s32 fn_800B8298(s8 arg0, s8 arg1) {
    fn_8010FEEC(lbl_8032BB58, arg0, arg1, 9, 0);
    return 1;
}

s32 fn_800B841C(u8 arg0, u8 arg1, u8 arg2) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_80033418(void *);
    M2C_UNK fn_801A5268(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_801A7794(M2C_UNK *, void *, void *);
    extern M2C_UNK lbl_8028D200;
    extern M2C_UNK lbl_802B14E4;
    extern M2C_UNK lbl_80330EAC;
    void *var_r5;
    void *var_r6;

    if (arg0 != 0) {
        var_r6 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r6 = NULL;
    }
    if (arg1 != 0) {
        var_r5 = &lbl_802B14E4 + ((arg1 - 1) * 0x280);
    } else {
        var_r5 = NULL;
    }
    fn_801A7794(&lbl_80330EAC, var_r6, var_r5);
    fn_801A5268(&lbl_80330EAC, 0xF);
    fn_80033418(&lbl_80330EAC + 0x8A0);
    if (arg2 != 0) {
        M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) = (s32) (M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) | 0x80000000);
    } else {
        M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) = (s32) (M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) & 0x7FFFFFFF);
    }
    fn_8000CAA0(&lbl_8028D200, fn_800C0658(), &lbl_8028D200);
    fn_80013864();
    return 1;
}

s32 fn_800B850C(s32 arg0, s8 arg1, s16 arg2) {
    extern u8 lbl_802EFDB8[];
    lbl_802EFDB8[0x61] = 1;
    lbl_802EFDB8[arg0] = arg1;
    *(s16 *)(lbl_802EFDB8 + 0x20 + arg0 * 2) = arg2;
    return 1;
}

s32 fn_800B8534(void) {
    extern M2C_UNK lbl_802EFDB8;
    M2C_UNK *var_r3;
    M2C_UNK *var_r5;
    s32 var_ctr;

    var_r3 = &lbl_802EFDB8;
    M2C_FIELD(&lbl_802EFDB8, s8 *, 0x61) = 0;
    var_r5 = &lbl_802EFDB8;
    M2C_FIELD(&lbl_802EFDB8, s8 *, 0x60) = 0;
    var_ctr = 2;
    do {
        M2C_FIELD(var_r3, s8 *, 0) = 0;
        M2C_FIELD(var_r5, s16 *, 0x20) = 0;
        M2C_FIELD(var_r3, s8 *, 1) = 0;
        M2C_FIELD(var_r5, s16 *, 0x22) = 0;
        M2C_FIELD(var_r3, s8 *, 2) = 0;
        M2C_FIELD(var_r5, s16 *, 0x24) = 0;
        M2C_FIELD(var_r3, s8 *, 3) = 0;
        M2C_FIELD(var_r5, s16 *, 0x26) = 0;
        M2C_FIELD(var_r3, s8 *, 4) = 0;
        M2C_FIELD(var_r5, s16 *, 0x28) = 0;
        M2C_FIELD(var_r3, s8 *, 5) = 0;
        M2C_FIELD(var_r5, s16 *, 0x2A) = 0;
        M2C_FIELD(var_r3, s8 *, 6) = 0;
        M2C_FIELD(var_r5, s16 *, 0x2C) = 0;
        M2C_FIELD(var_r3, s8 *, 7) = 0;
        M2C_FIELD(var_r5, s16 *, 0x2E) = 0;
        M2C_FIELD(var_r3, s8 *, 8) = 0;
        M2C_FIELD(var_r5, s16 *, 0x30) = 0;
        M2C_FIELD(var_r3, s8 *, 9) = 0;
        M2C_FIELD(var_r5, s16 *, 0x32) = 0;
        M2C_FIELD(var_r3, s8 *, 0xA) = 0;
        M2C_FIELD(var_r5, s16 *, 0x34) = 0;
        M2C_FIELD(var_r3, s8 *, 0xB) = 0;
        M2C_FIELD(var_r5, s16 *, 0x36) = 0;
        M2C_FIELD(var_r3, s8 *, 0xC) = 0;
        M2C_FIELD(var_r5, s16 *, 0x38) = 0;
        M2C_FIELD(var_r3, s8 *, 0xD) = 0;
        M2C_FIELD(var_r5, s16 *, 0x3A) = 0;
        M2C_FIELD(var_r3, s8 *, 0xE) = 0;
        M2C_FIELD(var_r5, s16 *, 0x3C) = 0;
        M2C_FIELD(var_r3, s8 *, 0xF) = 0;
        var_r3 += 0x10;
        M2C_FIELD(var_r5, s16 *, 0x3E) = 0;
        var_r5 += 0x20;
        var_ctr -= 1;
    } while (var_ctr != 0);
    return 1;
}

s32 fn_800B85EC(void) {
    M2C_UNK fn_80025680(s32, s32);
    s32 fn_800B864C();
    extern s32 lbl_80367240;
    fn_80025680(lbl_80367240, fn_800B864C());
    return 0;
}

s32 fn_800B861C(void) {
    M2C_UNK fn_80025690(s32, s32);
    s32 fn_800B864C();
    extern s32 lbl_80367240;
    fn_80025690(lbl_80367240, fn_800B864C());
    return 0;
}

s32 fn_800B870C(u32 arg0) {
    s32 fn_8000BCA4();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    return fn_8000BCA4();
}

s32 fn_800B874C(u32 arg0) {
    M2C_UNK fn_8000BD98();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_8000BD98();
    return 0;
}

u8 fn_800B8790(void) {
    return fn_80089948();
}

s32 fn_800B87B4(void) {
    u8 fn_80089948();
    M2C_UNK fn_8000CAA0(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D1EC[];
    extern u8 lbl_80320060[];
    if (fn_80089948() != 0) {
        fn_8000CAA0(lbl_8028D1EC, fn_800C0658());
        fn_80013864();
        fn_80013874(lbl_80320060);
    }
    return 1;
}

void fn_800B8804(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_80089948();
    if (fn_80089948() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B8840(void) {
    M2C_UNK fn_80089970();
    fn_80089970();
    return 1;
}

s32 fn_800B8864(s32 arg0) {
    M2C_UNK fn_80089980(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0x7D0;
    }
    fn_80089980(var_r3);
    return 1;
}

s32 fn_800B8894(s32 arg0) {
    M2C_UNK fn_800899D4(s32);
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0x7D0;
    }
    fn_800899D4(var_r3);
    return 1;
}

u8 fn_800B88C4(void) {
    return fn_80089ED8();
}

s32 fn_800B88E8(void) {
    u8 fn_80089ED8();
    M2C_UNK fn_8000CAA0(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D1D8[];
    extern u8 lbl_80320060[];
    if (fn_80089ED8() != 0) {
        fn_8000CAA0(lbl_8028D1D8, fn_800C0658());
        fn_80013864();
        fn_80013874(lbl_80320060);
    }
    return 1;
}

void fn_800B8938(s32 arg0) {
    u8 fn_80089ED8();
    if (fn_80089ED8() == 0) {
        fn_8000C188(arg0);
    }
}

s32 fn_800B8974(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_80089F00(u8, u8, u8, s32, s32);
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r5 = arg2;
    var_r6 = arg3;
    var_r7 = arg4;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    if (var_r3 > 0xFF) {
        var_r3 = 0xFF;
    }
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    if (var_r4 > 0xFF) {
        var_r4 = 0xFF;
    }
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    if (var_r5 > 0xFF) {
        var_r5 = 0xFF;
    }
    if (var_r6 < 0) {
        var_r6 = 0x1F4;
    }
    if (var_r7 < 0) {
        var_r7 = 0x1F4;
    }
    fn_80089F00((u8) var_r3, (u8) var_r4, (u8) var_r5, var_r6, var_r7);
    return 1;
}

u8 fn_800B8A04(void) {
    return fn_8008A59C();
}

s32 fn_800B8A28(u8 arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0x1F4;
    }
    fn_8008A290(arg0, var_r4);
    return 1;
}

#pragma use_lmw_stmw on
s32 fn_800B8A5C(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    M2C_UNK fn_801C1D54(s16, s16, u32, s32, s32, s32);
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1D54(arg0, arg1, arg2, arg3, arg4, fn_800C0658());
    return 1;
}
#pragma use_lmw_stmw reset
s32 fn_800B8AD8(void) {
    M2C_UNK fn_801C18FC();
    fn_801C18FC();
    return 1;
}

s32 fn_800B8AFC(s32 arg0) {
    M2C_UNK fn_801C1970(s8);
    fn_801C1970(arg0);
    return 1;
}

#pragma use_lmw_stmw on
s32 fn_800B8B24(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u32 arg4, s32 arg5) {
    M2C_UNK fn_801C1A18(s8, s16, s16, s16, u32, s32, s32);
    if ((arg4 < 0x80000000U) || (arg4 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1A18(arg0, arg1, arg2, arg3, arg4, arg5, fn_800C0658());
    return 1;
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
s32 fn_800B8BA8(s32 arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_UNK fn_801C1AC8(s16, s16, s16, u32, s32, s32, s32, s32);
    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1AC8(arg0, arg1, arg2, arg3, arg4, arg5, arg6, fn_800C0658());
    return 1;
}
#pragma use_lmw_stmw reset

s32 fn_800B8C34(s8 arg0, s16 arg1, s16 arg2, u32 arg3, s32 arg4) {
    M2C_UNK fn_801C1BC0(s8, s16, s16, u32, s32, s32);
    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1BC0(arg0, arg1, arg2, arg3, arg4, fn_800C0658());
    return 1;
}

s32 fn_800B8CB0(s16 arg0, s16 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_UNK fn_801C1C64(s16, s16, u32, s32, s32, s32, s32);
    M2C_UNK fn_800C0658(void);
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_801C1C64(arg0, arg1, arg2, arg3, arg4, arg5, fn_800C0658());
    return 1;
}

void fn_800B8D34(void) {
    M2C_UNK fn_8006F014();
    fn_8006F014();
}

s32 fn_800B8D54(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    M2C_UNK fn_8006F020();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    if ((arg3 < 0x80000000U) || (arg3 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F020();
    fn_80013864();
    return 1;
}

s32 fn_800B8DE4(u32 arg0, u32 arg1, u32 arg2) {
    M2C_UNK fn_8006F09C();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    if ((arg2 < 0x80000000U) || (arg2 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F09C();
    fn_80013864();
    return 1;
}

s32 fn_800B8E5C(u32 arg0, u32 arg1) {
    M2C_UNK fn_8006F10C();
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if ((arg1 < 0x80000000U) || (arg1 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F10C();
    fn_80013864();
    return 1;
}

s32 fn_800B8EBC(void) {
    extern s32 lbl_80367110;
    lbl_80367110 |= 0x10;
    return 1;
}

void fn_800B8ED0(void) {
    extern u16 lbl_80312ACC[];
    extern void fn_800C28E0(void);
    fn_8022C1E8(lbl_80312ACC, fn_800C28E0, 0x10, 0x10);
}

extern void fn_8006F6A4(u32 arg0, u32 arg1, u32 arg2);
s32 fn_800B8F98(u32 arg0) {
    M2C_UNK fn_8006F6A4(s32, u32, s32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_8006F6A4(fn_800C0658(), arg0, 0, 0);
    fn_80013864();
    return 0;
}

extern void fn_80070018(u32 arg0, u32 arg1, u32 arg2);
s32 fn_800B8FFC(u32 arg0) {
    M2C_UNK fn_80070018(s32, u32, s32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_80070018(fn_800C0658(), arg0, 0, 0);
    fn_80013864();
    return 0;
}

extern void fn_80070018(u32 arg0, u32 arg1, u32 arg2);
s32 fn_800B9060(u32 arg0) {
    M2C_UNK fn_80070018(s32, u32, s32, s32);
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    fn_80070018(fn_800C0658(), arg0, 0, 0);
    fn_80013864();
    return 0;
}

s32 fn_800B90C4(u32 arg0) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFCB4(void);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFCB4();
    return 1;
}

s32 fn_800B9130(u32 arg0, s32 arg1) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFD40(s32);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFD40(arg1);
    return 1;
}

s32 fn_800B91AC(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFD60(s32, s32, s32, s32);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFD60(arg1, arg2, arg3, arg4);
    return 1;
}

s32 fn_800B9258(u32 arg0, s32 arg1, s32 arg2) {
    extern s32 lbl_80367110;
    s32 fn_801CF760(void);
    void fn_801CFD8C(s32, s32);
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    if (fn_801CF760() == 0) {
        return 0;
    }
    fn_801CFD8C(arg1, arg2 != 0);
    return 1;
}

s32 fn_800B97B8(u32 arg0, s32 arg1) {
    void *fn_801CF760(u32);
    M2C_UNK fn_801D041C(void *, s32);
    extern s32 lbl_80367110;
    void *p;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (lbl_80367110 & 1) {
        return 0;
    }
    p = fn_801CF760(arg0);
    if (p == NULL) {
        return 0;
    }
    fn_801D041C(p, arg1 != 0);
    return 1;
}

s32 fn_800B98B8(s32 arg0)
{
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = arg0 & 0xFFFF;
    if (temp_r3 == 0) {
        return 0;
    }
    var_r3 = temp_r3;
    for (; ; ) {
        if ((var_r3 & 1) != 0) {
            var_r3 = (var_r3 >> 1) & 0x7FFF;
            if (var_r3 == 0) {
                return 0;
            }
        } else {
            var_r3 = var_r3 >> 1;
        }
        if (var_r3 == 0) {
            break;
        }
    }
    return 1;
}

void fn_800B995C(void *arg0) {
    void **temp_r3;
    s32 temp_r5;
    s32 temp_r4;

    temp_r3 = (void **)arg0;
    temp_r5 = *(s32 *)((char *)temp_r3[0x15] + 8);
    temp_r4 = 0x100;
    if (!(temp_r5 & (temp_r4 << 0)) && !(temp_r5 & (temp_r4 << 1)) && !(temp_r5 & (temp_r4 << 2))) {
        fn_8000C188();
    }
}

s32 fn_800B9A34(u32 arg0, s32 arg1) {
    u32 fn_801090C0(void);
    void fn_80109BB4(u32, u8);
    u32 tmp;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    tmp = fn_801090C0();
    if (tmp == 0U) {
        return 0;
    }
    fn_80109BB4(tmp, (u8)arg1);
    return 1;
}

s32 fn_800B9A9C(u32 arg0, u8 arg1) {
    u32 fn_801090C0(u32);
    M2C_UNK fn_80109C1C(u8);
    u32 fn_801CF760(u32);
    M2C_UNK fn_801CFC4C(u8);
    s32 fn_80234278(void *, M2C_UNK);
    extern M2C_UNK lbl_8026ECB8;
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (fn_80234278(&lbl_8026ECB8 + 0xA47, 8) != 0) {
        if (fn_801090C0(arg0) == 0U) {
            return 0;
        }
        fn_80109C1C(arg1);
        return 1;
    }
    if (fn_801CF760(arg0) == 0U) {
        return 0;
    }
    fn_801CFC4C(arg1);
    return 1;
}

s32 fn_800B9B58(u32 arg0, u8 arg1) {
    u32 fn_801090C0(u32);
    u32 fn_80109C80(u8);
    u32 fn_801CF760(u32);
    u32 fn_801CFC80(u8);
    s32 fn_80234278(void *, s32);
    extern u8 lbl_8026ECB8[];
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    
    if (fn_80234278(&lbl_8026ECB8[0xA47], 8) != 0) {
        if (fn_801090C0(arg0) == 0U) {
            return 0;
        }
        fn_80109C80(arg1);
        return 1;
    }
    
    if (fn_801CF760(arg0) == 0U) {
        return 0;
    }
    
    fn_801CFC80(arg1);
    return 1;
}

void fn_800B9C14(void) {
    f32 var = 1.0f;
    fn_800B9CD4(var);
}

void fn_800B9C38(s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_UNK fn_800B9CD4(s32, s32, s32, s32, f32, f32, f32);
    extern f32 lbl_80369D08;
    extern f32 lbl_80369D0C;
    extern f32 lbl_80369D10;
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f4;

    temp_f1 = (f32) arg3 / lbl_80369D08;
    temp_f4 = (f32) arg1;
    temp_f3 = -((temp_f4 * temp_f1) - lbl_80369D0C);
    fn_800B9CD4((s32) temp_f3, (s32) -(((f32) arg2 * temp_f1) - lbl_80369D10), arg4, arg5, temp_f1, temp_f3, temp_f4);
}

s32 fn_800B9EA8(u8* arg0, u8* arg1, s32 arg2)
{
    return fn_80010710(arg0);
}

s32 fn_800BA138(u32 arg0, s16 arg1, s16 arg2) {
    void *fn_801090C0(u32);
    void *fn_801CF760(u32);
    s32 fn_80234278(void *, M2C_UNK);
    extern u8 lbl_8026ECB8[];
    extern f64 lbl_80369CF8;

    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    
    if (fn_80234278(&lbl_8026ECB8[0xA47], 8) != 0) {
        void *temp_r3 = fn_801090C0(arg0);
        if (temp_r3 == NULL) {
            return 0;
        }
        *(f32*)((u8*)temp_r3 + 0x40) = (f32)arg1;
        *(f32*)((u8*)temp_r3 + 0x44) = (f32)arg2;
        return 1;
    } else {
        void *temp_r3_2 = fn_801CF760(arg0);
        if (temp_r3_2 == NULL) {
            return 0;
        }
        *(s16*)((u8*)temp_r3_2 + 0x18) = arg1;
        *(s16*)((u8*)temp_r3_2 + 0x1A) = arg2;
        return 1;
    }
}

s32 fn_800BA230(u32 arg0, s32 arg1) {
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (fn_801090C0() == 0U) {
        return 0;
    }
    fn_80109DC0(arg1);
    return 1;
}

s32 fn_800BA438(u32 arg0, s32 arg1)
{
  u32 fn_801090C0(void);
  f32 fn_801099A0(u32, u8);
  u32 tmp;

  if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U))
  {
    return 0;
  }
  tmp = fn_801090C0();
  if (tmp == 0U)
  {
    return 0;
  }
  return (s32)fn_801099A0(tmp, (u8)arg1);
}

s32 fn_800BA528(u32 arg0) {
    M2C_UNK fn_80109180(u32, M2C_UNK);
    M2C_UNK fn_801CF7F0(u32, M2C_UNK);
    s32 fn_80234278(void *, M2C_UNK);
    extern u16 lbl_8026ECB8[];
    
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    
    if (fn_80234278((void *)&lbl_8026ECB8[0xA47], 8) != 0) {
        fn_80109180(arg0, 0);
    } else {
        fn_801CF7F0(arg0, 0);
    }
    
    return 0;
}

s32 fn_800BA5AC(u32 arg0) {
    M2C_UNK fn_80234278(void *, s32);
    M2C_UNK fn_80109180(u32, s32);
    M2C_UNK fn_801CF7F0(u32, s32);
    extern u16 lbl_8026ECB8[];
    if ((arg0 < 0x80000000U) || (arg0 >= 0x81800000U)) {
        return 0;
    }
    if (fn_80234278(&lbl_8026ECB8[0xA47], 8) != 0) {
        fn_80109180(arg0, fn_800C0658());
    } else {
        fn_801CF7F0(arg0, fn_800C0658());
    }
    return 0;
}

s32 fn_800BA75C(s8 arg0, s8 arg1, s8 arg2) {
    extern M2C_UNK lbl_802CA518;
    M2C_FIELD((&lbl_802CA518 + arg0 + (arg1 << 6)), s8 *, 0x100D) = arg2;
    return 0;
}

s32 fn_800BA784(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8002297C(M2C_UNK *);
    M2C_UNK fn_8003DFB8();
    M2C_UNK fn_8003EA24(u8, u8);
    M2C_UNK fn_800C1060();
    extern M2C_UNK lbl_802B14E4;
    extern M2C_UNK lbl_802CA264;
    extern M2C_UNK lbl_802CA518;
    
    s32 sp10;
    s32 sp8;
    u8 var_r29;
    u8 var_r31;
    void *temp_r30;
    void *temp_r30_2;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_3;

    fn_80015320(3, &sp10);
    var_r31 = 1;
    do {
        if (var_r31 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r31 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp10 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            temp_r30 = M2C_FIELD(var_r3, void **, 0x194);
            if ((temp_r30 != NULL) && (M2C_FIELD(var_r3, s32 *, 0x1A0) & 2)) {
                fn_8003EA24(M2C_FIELD(var_r3, u8 *, 0x19E), M2C_FIELD(var_r3, u8 *, 0x19F));
                if (temp_r30 != NULL) {
                    M2C_FIELD(temp_r30, s32 *, 0x1A0) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x1A0) & 0xFFFFFFFE);
                }
            }
        }
        var_r31 += 1;
    } while ((s32) var_r31 <= 0x9F);
    
    var_r3_2 = M2C_FIELD(&lbl_802CA264, void **, 4);
loop_13:
    if (var_r3_2 != NULL) {
        temp_r30_2 = M2C_FIELD(var_r3_2, void **, 0x180);
        fn_8003DFB8();
        var_r3_2 = temp_r30_2;
        goto loop_13;
    }
    
    fn_80015320(3, &sp8);
    var_r29 = 1;
    do {
        if (var_r29 != 0) {
            var_r3_3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
        } else {
            var_r3_3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3_3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3_3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8003DFB8();
        }
        var_r29 += 1;
    } while ((s32) var_r29 <= 0x9F);
    
    fn_8002297C(&lbl_802CA518);
    fn_800C0658();
    fn_800C1060();
    return 1;
}

s32 fn_800BA8F8(u8 arg0) {
    void fn_8002297C(void *);
    M2C_UNK fn_8003DFB8(void *);
    M2C_UNK fn_801A251C(void);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802CA518[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || M2C_FIELD(unit, void **, 0x188) == NULL) {
        return 0;
    }
    fn_8003DFB8(unit);
    fn_8002297C(lbl_802CA518);
    fn_801A251C();
    return 1;
}

s32 fn_800BA96C(void) {
    void *fn_8000D354(void);
    M2C_UNK fn_800A87D4(s32);
    void *fn_801A46BC(void *);
    extern u8 lbl_80330EAC[];
    void *p;

    p = fn_801A46BC(lbl_80330EAC);
    if (p == NULL) {
        return 0;
    }
    fn_800A87D4(M2C_FIELD(p, s32 *, 0x188));
    return fn_8000D354() != NULL;
}

extern void *fn_801A46BC(u32 *);
extern s32 fn_8000D354();
extern s32 fn_800A87D4(s32);
s32 fn_800BA9BC(void) {
    void *temp_r3;
    
    temp_r3 = fn_801A46BC((u32*)0x80330EAC);
    if (temp_r3 == 0) {
        return 0;
    }
    
    if (fn_8000D354() == 0) {
        return 0;
    }
    
    // Call with constant offset
    fn_800A87D4(*(s32*)((char*)temp_r3 + 0x188));
    
    return 1;
}

s32 fn_800BAAD4(void) {
    void *fn_8000D354(void);
    void *fn_8000BCA4(void *);
    s32 fn_800A876C(s32);
    M2C_UNK fn_8011D79C(s32);
    M2C_UNK fn_8011D908(s32, s32);
    extern u8 lbl_8026ECB8[];
    extern void *lbl_802EF4C8[];
    s32 obj;

    if (lbl_802EF4C8[0] == NULL) {
        return 0;
    }
    obj = fn_800A876C(M2C_FIELD(lbl_802EF4C8[0], s32 *, 0x188));
    if (fn_8000D354() != NULL) {
        if (fn_8000BCA4(lbl_8026ECB8 + 0xA50) != NULL) {
            fn_8011D79C(obj);
        } else {
            fn_8011D908(obj, fn_800C0658());
        }
    }
    return 0;
}

s32 fn_800BAB64(u8 arg0) {
    M2C_UNK fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_80330708[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit != NULL) {
        fn_8014CBD8(lbl_80330708, M2C_FIELD(unit, s8 *, 0x19E), M2C_FIELD(unit, s8 *, 0x19F));
    }
    return 1;
}

s32 fn_800BABFC(void) {
    u8 fn_800188A4(s32);
    M2C_UNK fn_800187F0(void);
    M2C_UNK fn_8000CAA0(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D19C[];
    extern u8 lbl_80320060[];
    extern s32 lbl_80367110;

    if (lbl_80367110 & 1) {
        fn_800187F0();
        return 0;
    }
    if (fn_800188A4(1) == 0) {
        return 0;
    }
    fn_8000CAA0(lbl_8028D19C, fn_800C0658());
    fn_80013864();
    fn_80013874(lbl_80320060);
    return 1;
}

void fn_800BAC70(s32 arg0) {
    u8 fn_800188A4(s32);
    M2C_UNK fn_800187F0(void);
    extern s32 lbl_80367110;

    if (fn_800188A4(1) == 0) {
        fn_8000C188(arg0);
    } else if (lbl_80367110 & 1) {
        fn_800187F0();
        fn_8000C188(arg0);
    }
}

s32 fn_800BACCC(void) {
    u8 fn_800188A4(s32);
    M2C_UNK fn_800187F0(void);
    M2C_UNK fn_8000CAA0(void *, s32);
    M2C_UNK fn_80013874(void *);
    extern u8 lbl_8028D188[];
    extern u8 lbl_80320060[];
    extern s32 lbl_80367110;

    if (lbl_80367110 & 1) {
        fn_800187F0();
        return 0;
    }
    if (fn_800188A4(0) == 0) {
        return 0;
    }
    fn_8000CAA0(lbl_8028D188, fn_800C0658());
    fn_80013864();
    fn_80013874(lbl_80320060);
    return 1;
}

void fn_800BAD40(s32 arg0) {
    u8 fn_800188A4(s32);
    M2C_UNK fn_800187F0(void);
    extern s32 lbl_80367110;

    if (fn_800188A4(0) == 0) {
        fn_8000C188(arg0);
    } else if (lbl_80367110 & 1) {
        fn_800187F0();
        fn_8000C188(arg0);
    }
}

s32 fn_800BAD9C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8001885C(void);
    M2C_UNK fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_80330708[];
    extern s32 lbl_80367110;

    if (lbl_80367110 & 1) {
        fn_8014CBD8(lbl_80330708, arg0, arg1);
        fn_8001885C();
        return 0;
    }
    fn_8014CBD8(lbl_80330708, arg0, arg1);
    return 0;
}

s32 fn_800BAE4C(s32 arg0, s32 arg1) {
    M2C_UNK fn_8001885C(void);
    M2C_UNK fn_8014CBD8(void *, f32, f32);
    extern void *lbl_80330708;
    extern f64 lbl_80369CF8;

    f64 temp_f0, temp_f2;
    
    temp_f0 = *(f64*)((u32)&lbl_80369CF8);
    temp_f2 = *(f64*)((u32)&lbl_80369CF8);
    fn_8014CBD8(&lbl_80330708, (f32) arg0, (f32) arg1);
    fn_8001885C();
    return 0;
}

s32 fn_800BAEAC(s32 arg0) {
    extern M2C_UNK lbl_8026ECB8;
    extern u16 lbl_80367A58;
    if (fn_8000BCA4(&lbl_8026ECB8 + 0xA50) == 0U) {
        return 0;
    }
    return (lbl_80367A58 & 0x10) == 0;
}

s32 fn_800BAEF8(void) {
    M2C_UNK fn_8011D650();
    fn_8011D650();
    return 1;
}

s32 fn_800BAF1C(s32 arg0) {
    void *fn_8000BCA4(void *);
    M2C_UNK fn_8011D79C(s32);
    M2C_UNK fn_8011D908(s32, s32);
    extern u8 lbl_8026ECB8[];

    if (fn_8000BCA4(lbl_8026ECB8 + 0xA50) != NULL) {
        fn_8011D79C(arg0);
        return 1;
    }
    fn_8011D908(arg0, fn_800C0658());
    return 1;
}

s32 fn_800BAF80(s32 arg0) {
    void *fn_8000BCA4(void *);
    M2C_UNK fn_8011D6F4(s32);
    M2C_UNK fn_8011DA48(s32, s32);
    extern u8 lbl_8026ECB8[];

    if (fn_8000BCA4(lbl_8026ECB8 + 0xA50) != NULL) {
        fn_8011D6F4(arg0);
        return 1;
    }
    fn_8011DA48(arg0, fn_800C0658());
    return 1;
}

s32 fn_800BAFE4(s32 arg0) {
    M2C_UNK fn_800BDBC8(void *, s32);
    extern u8 lbl_80330708[];

    fn_800BDBC8(lbl_80330708 + 0xB4, arg0);
    return 0;
}

s32 fn_800BB018(s32 arg0) {
    M2C_UNK fn_800BDC68(void *, s32);
    extern u8 lbl_80330708[];

    fn_800BDC68(lbl_80330708 + 0xB4, arg0);
    return 0;
}

u8 fn_800BB04C(s32 arg0) {
    u8 fn_800BDD08(void *, s32, M2C_UNK *);
    extern M2C_UNK lbl_80330708;
    return fn_800BDD08(&lbl_80330708 + 0xB4, arg0, &lbl_80330708);
}

s32 fn_800BB080(s32 arg0) {
    M2C_UNK fn_800BDDCC(void *, s32);
    extern u8 lbl_80330708[];

    fn_800BDDCC(lbl_80330708 + 0xB4, arg0);
    return 1;
}

s32 fn_800BB0B4(s32 arg0) {
    M2C_UNK fn_800BDE40(void *, s32);
    extern u8 lbl_80330708[];

    fn_800BDE40(lbl_80330708 + 0xB4, arg0);
    return 1;
}

s32 fn_800BB9E0(void) {
    return 1;
}

s32 fn_800BB9E8(u8 arg0) {
    extern u16 lbl_802B14E4[];
    s32 temp_r3;
    void *var_r4;

    if (arg0 != 0) {
        var_r4 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r4 = NULL;
    }
    if ((var_r4 == NULL) || (*(u32 *)((u8 *)var_r4 + 0x188) == 0U)) {
        return 0;
    }
    
    temp_r3 = *(s32 *)((u8 *)var_r4 + 0x254) & 0xFCFFFFFF;
    *(s32 *)((u8 *)var_r4 + 0x254) = temp_r3;
    return temp_r3;
}

u8 fn_800BBB58(s32 arg1) {
    s8 fn_80036DE0(u32, u32);
    u8 fn_80036F5C(u32, s8);
    M2C_UNK fn_80036FC4(u32, s8);
    s8 temp_r31;
    s8 temp_r3;
    u32 temp_r29;
    u32 temp_r30;

    temp_r30 = fn_80016BDC();
    temp_r29 = fn_80016BDC(arg1);
    if ((temp_r30 == 0U) || (temp_r29 == 0U)) {
        return -1U;
    }
    temp_r31 = fn_80036DE0(temp_r30, temp_r29);
    temp_r3 = fn_80036DE0(temp_r29, temp_r30);
    if ((temp_r31 < 0) || (temp_r3 < 0)) {
        return -1U;
    }
    fn_80036FC4(temp_r30, temp_r31);
    return fn_80036F5C(temp_r30, temp_r31);
}

s32 fn_800BBC40(void) {
    extern u16 lbl_80330EAC[];
    return (s32)lbl_80330EAC[0x656];
}

s32 fn_800BBC50(void) {
    extern s32 lbl_80367110;
    return lbl_80367110;
}

s16 fn_800BBC58(u8 arg0, s32 arg1) {
    M2C_UNK fn_800227F8(M2C_UNK *, s32);
    extern M2C_UNK lbl_802B14E4;
    extern M2C_UNK lbl_802CA518;
    s16 var_r3;
    u16 temp_r0;
    void *var_r4;

    if (arg0 != 0) {
        var_r4 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r4 = NULL;
    }
    if ((var_r4 == NULL) || ((u32) M2C_FIELD(var_r4, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_800227F8(&lbl_802CA518, M2C_FIELD(var_r4, s32 *, 0x18C));
    temp_r0 = M2C_FIELD((&lbl_802CA518 + 0x10000 + (arg1 * 2)), u16 *, 0x4214);
    var_r3 = (s16) temp_r0;
    if ((s16) temp_r0 > 0x7530) {
        var_r3 = -1;
    }
    return var_r3;
}

u8 fn_800BBCFC(s8 arg0, s8 arg1) {
    extern u16 lbl_802CA518[];
    s32 index = (arg1 << 6) + arg0;
    return lbl_802CA518[index + 0x200D];
}

u8 fn_800BBD20(s8 arg0, s8 arg1) {
    extern u16 lbl_802CA518[];
    s32 index = ((arg1 << 6) + arg0);
    return (u8)(lbl_802CA518[index] & 0xFF);
}

u8 fn_800BBD44(s8 arg0, s8 arg1) {
    extern u16 lbl_802CA518[];
    u16 *ptr = lbl_802CA518 + (arg1 << 1) + arg0;
    return ptr[0xD];
}

u16 fn_800BBD68(void) {
    void *fn_80019E04();
    void *temp_r3;

    temp_r3 = fn_80019E04();
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u16 *, 0xE);
}

s32 fn_800BBF04(u8 arg0, s8 arg1) {
    u32 *fn_80037BD0(void *, s8);
    void fn_800949A4(void *, s8);
    void fn_800C35C4(void *, u32 *, void *);
    u8 fn_8014D8DC(void *);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_803200AC[];
    extern u8 lbl_80330708[];
    u32 *temp_r3;
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || ((u32) M2C_FIELD(var_r31, u32 *, 0x188) == 0U)) {
        return 0;
    }
    if (fn_8014D8DC(lbl_80330708) == 0) {
        return 0;
    }
    temp_r3 = fn_80037BD0(var_r31, arg1);
    if ((u32) *temp_r3 == 0U) {
        return 0;
    }
    fn_800C35C4(lbl_803200AC, temp_r3, lbl_803200AC);
    fn_800949A4(var_r31, arg1);
    return 1;
}

s32 fn_800BC0A4(u8 arg0) {
    s32 fn_8001CA2C();
    u32 *fn_80037BD0();
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    if ((u32) *fn_80037BD0() == 0U) {
        return 0;
    }
    return fn_8001CA2C();
}

s32 fn_800BC204(void *arg0) {
    u8 temp;
    u32 temp2;

    temp = *(u8*)((u8*)arg0 + 0x1F1);
    if ((temp & 0x80) && (*(u32*)((u8*)arg0 + 0x1EC) != 0)) {
        return 0;
    }

    temp = *(u8*)((u8*)arg0 + 0x1F9);
    if ((temp & 0x80) && (*(u32*)((u8*)arg0 + 0x1F4) != 0)) {
        return 1;
    }

    temp = *(u8*)((u8*)arg0 + 0x201);
    if ((temp & 0x80) && (*(u32*)((u8*)arg0 + 0x1FC) != 0)) {
        return 2;
    }

    temp = *(u8*)((u8*)arg0 + 0x209);
    if ((temp & 0x80) && (*(u32*)((u8*)arg0 + 0x204) != 0)) {
        return 3;
    }

    return -1;
}

u8 fn_800BC4FC(u8 arg0) {
    u32 *fn_80037BD0(void *);
    u8 fn_800939FC(void *);
    extern M2C_UNK lbl_802B14E4;
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || ((u32) M2C_FIELD(var_r31, u32 *, 0x188) == 0U)) {
        return 0U;
    }
    if ((u32) *fn_80037BD0(var_r31) != 0U) {
        return fn_800939FC(var_r31);
    }
    return 0U;
}

s32 fn_800BC5FC(u8 arg0) {
    u8 fn_80092F38(void *);
    u8 fn_80092F9C(void *);
    extern u16 lbl_802B14E4[];
    u8 temp_r31;
    void *var_r30;

    if (arg0 != 0) {
        u32 temp = arg0 - 1;
        var_r30 = &lbl_802B14E4[temp * 0x280];
    } else {
        var_r30 = NULL;
    }
    
    if ((var_r30 == NULL) || (M2C_FIELD(var_r30, u32 *, 0x188) == 0U)) {
        return 0;
    }
    
    temp_r31 = fn_80092F38(var_r30);
    return fn_80092F9C(var_r30) + (u32)temp_r31;
}

s32 fn_800BC6E8(u8 arg0, s32 arg2) {
    M2C_UNK fn_8001D780(s32);
    M2C_UNK fn_80037BD0();
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_80037BD0();
    fn_8001D780(arg2);
    return 1;
}

s32 fn_800BC760(u8 arg0, s8 arg1) {
    M2C_UNK fn_800949A4(s8);
    extern M2C_UNK lbl_802B14E4;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || ((u32) M2C_FIELD(var_r3, u32 *, 0x188) == 0U)) {
        return 0;
    }
    fn_800949A4(arg1);
    return 1;
}

s32 fn_800BC7C8(u8 arg0, s32 arg1) {
    void fn_80094A54(void *, s32);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_80094A54(unit, arg1);
    return 1;
}

s32 fn_800BC82C(u8 arg0, s32 arg1) {
    s32 fn_80093010(void *, s32);
    extern M2C_UNK lbl_802B14E4;
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || ((u32) M2C_FIELD(var_r31, u32 *, 0x188) == 0U)) {
        return 0;
    }
    return fn_80093010(var_r31, fn_80019E04(arg1));
}

s32 fn_800BC8A8(u8 arg0, s32 arg1) {
    void fn_8003C56C(void *, s32);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_8003C56C(unit, arg1);
    return 1;
}

s32 fn_800BC90C(u8 arg0, s32 arg1) {
    void fn_8003C5AC(void *, s32);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_8003C5AC(unit, arg1);
    return 1;
}

s32 fn_800BC970(u8 arg0, s32 arg1) {
    void fn_8003C5EC(void *, s32);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_8003C5EC(unit, arg1);
    return 1;
}

s32 fn_800BC9D4(u8 arg0, s32 arg1) {
    void fn_8003C634(void *, s32);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(u32 *)((u8 *)unit + 0x188) == 0) {
        return 0;
    }
    fn_8003C634(unit, arg1);
    return 1;
}

s32 fn_800BCA38(u8 arg0, s32 arg1) {
    void *fn_80016A9C(s32);
    M2C_UNK fn_8003D5FC(void *, u8);
    M2C_UNK fn_8003D60C(void *, s32);
    M2C_UNK fn_80050268(void *);
    extern u16 lbl_802B14E4[0x800];
    void *temp_r3;
    void *var_r31;

    if (arg0 != 0) {
        var_r31 = &lbl_802B14E4 + ((arg0 - 1) * 0x280);
    } else {
        var_r31 = NULL;
    }
    if ((var_r31 == NULL) || ((u32) M2C_FIELD(var_r31, u32 *, 0x188) == 0U)) {
        return 0;
    }
    temp_r3 = fn_80016A9C(arg1);
    if (temp_r3 != NULL) {
        fn_8003D5FC(var_r31, M2C_FIELD(temp_r3, u8 *, 0x199));
    }
    fn_8003D60C(var_r31, arg1);
    fn_80050268(var_r31);
    return 1;
}

s16 fn_800BCADC(void) {
    extern u16 lbl_8031FFC0[];
    return (s16)(u16)lbl_8031FFC0[1];
}

extern u16 lbl_8031FFC0;
s16 fn_800BCAEC(void) {
    return (s16)*(u16*)((u8*)&lbl_8031FFC0);
}

u8 fn_800BCAFC(void) {
    extern u16 lbl_80330708[];
    return (*(u8*)((u8*)&lbl_80330708[0x10/2]));
}

s16 fn_800BCB0C(s32 arg0, s16 arg1) {
    extern u16 lbl_80330708[];
    lbl_80330708[arg0] = arg1;
    return arg1;
}

extern u16 lbl_80330708[700];
u16 fn_800BCB24(s32 arg0) {
    return lbl_80330708[arg0];
}

extern u16 lbl_80330708[];
s32 fn_800BCB70(void) {
    return *(s32*)(((char*)&lbl_80330708) + 0x18);
}

s32 fn_800BCB80(s32 arg0) {
    extern u16 lbl_80330708[700];
    fn_8014D268(lbl_80330708, arg0);
    return arg0;
}

s32 fn_800BCBBC(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    fn_8014D254(lbl_80330708, arg0, arg1, arg2, arg3, arg0);
    return 1;
}

void fn_800BCC14(s8 arg0) {
    *(u8*)((u8*)lbl_80330708 + 0x11) = arg0;
}

s16 fn_800BCC24(void) {
    return *(s16*)((char*)lbl_80330708 + 0x12);
}

void fn_800BCC34(s16 arg0) {
    *(u16*)((char*)lbl_80330708 + 0x12) = arg0;
}

s32 fn_800BCC44(void) {
    void *fn_80016B7C();
    M2C_UNK fn_80019E8C();
    void *temp_r3;

    fn_80019E8C();
    temp_r3 = fn_80016B7C();
    if (temp_r3 == NULL) {
        return 0;
    }
    return (M2C_FIELD(temp_r3, s32 *, 0x1A0) & 8) == 0;
}

extern u8 lbl_802EF4C8[24];
u8 fn_800BCD24(void) {
    return lbl_802EF4C8[9];
}

u8 fn_800BCD58(void) {
    extern u8 lbl_802EF4C8[24];
    if (lbl_802EF4C8 != NULL) {
        return lbl_802EF4C8[0x198];
    }
    return 0U;
}

s32 fn_800BCD7C(u8 arg0) {
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || *(void **)((u8 *)unit + 0x188) == NULL) {
        return 0;
    }
    switch (*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)) {
    case 0:
    case 5:
        *(u32 *)((u8 *)unit + 0x1A0) |= 0x20000;
        break;
    }
    return 1;
}

s32 fn_800BCDF0(u8 arg0) {
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL || M2C_FIELD(unit, void **, 0x188) == NULL) {
        return 0;
    }
    switch (M2C_FIELD(M2C_FIELD(unit, void **, 0x190), u8 *, 8)) {
    case 0:
    case 5:
        M2C_FIELD(unit, u32 *, 0x1A0) |= 0x10000;
        break;
    }
    return 1;
}

s32 fn_800BCF44(u8 arg0, s32 arg1) {
    M2C_UNK fn_8003868C(void *, s32);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    fn_8003868C(unit, arg1);
    return 0;
}

s32 fn_800BCF9C(u8 arg0, s32 arg1) {
    M2C_UNK fn_800381EC(void *, s32);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    fn_800381EC(unit, arg1);
    return 0;
}

s32 fn_800BD034(u8 arg0) {
    s8 fn_8003B2D0(void *);
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    return fn_8003B2D0(unit);
}

s32 fn_800BD08C(u8 arg0) {
    extern u8 lbl_802B14E4[];
    void *unit;

    if (arg0 != 0) {
        unit = lbl_802B14E4 + (arg0 - 1) * 0x280;
    } else {
        unit = NULL;
    }
    if (unit == NULL) {
        return 0;
    }
    return M2C_FIELD(unit, s8 *, 0x19F);
}

extern u16 lbl_802B14E4[];
s32 fn_800BD0CC(u8 arg0) {
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if (var_r3 == NULL) {
        return 0;
    }
    return *(s8 *)((u8 *)var_r3 + 0x19E);
}

s32 fn_800BD10C(s32 arg0, s32 arg1) {
    s32 var_r3;
    s32 temp_r5;
    s32 var_r4;

    if ((arg0 & 1) != 0) {
        arg0 = (arg0 >> 1);
    }

    if ((arg0 & 1) == 0) {
        temp_r5 = lbl_8028D544[arg0];
        if (temp_r5 >= 0) {
            return temp_r5;
        }
    } else {
        arg0 >>= 1;
        temp_r5 = lbl_8028D544[arg0];
        if (temp_r5 >= 0) {
            return temp_r5;
        }
    }

    // Process arg1
    var_r4 = (arg1 & 0x3F);
    
    if ((arg1 & 0x20000000) == 0) {
        if (var_r4 >= 0x3C) {
            return -1;
        }
        
        temp_r5 = 0;
        while (temp_r5 < var_r4) {
            var_r3 = lbl_8028D544[temp_r5];
            if (var_r3 >= 0) {
                return var_r3;
            }
            temp_r5++;
        }
    } else {
        if (var_r4 >= 0x3C) {
            return -1;
        }
        
        temp_r5 = var_r4 + 1;
        while (temp_r5 < 0x3C) {
            var_r3 = lbl_8028D544[temp_r5];
            if (var_r3 >= 0) {
                return var_r3;
            }
            temp_r5++;
        }
    }
    
    return -1;
}

s32 fn_800BD334(u8 arg0, s32 arg1) {
    extern u16 lbl_802B14E4[];
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || (*(u32 *)((u8 *)var_r3 + 0x188) == 0U)) {
        return 0;
    }
    *(s32 *)((u8 *)var_r3 + 0x1A0) = *(s32 *)((u8 *)var_r3 + 0x1A0) | arg1;
    return *(s32 *)((u8 *)var_r3 + 0x1A0);
}

s32 fn_800BD388(u8 arg0, s32 arg1)
{
  u8 *new_var;
  void *var_r3;
  if (arg0 != 0)
  {
    var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
  }
  else
  {
    var_r3 = NULL;
  }
  if ((var_r3 == NULL) || ((*((u32 *) (((u8 *) var_r3) + 0x188))) == 0U))
  {
    return 0;
  }
  new_var = (u8 *) var_r3;
  *((s32 *) (new_var + 0x1A0)) = *((s32 *) (new_var + 0x1A0));
  *((s32 *) (new_var + 0x1A0)) = (*((s32 *) (new_var + 0x1A0))) & (~arg1);
  return *((s32 *) (new_var + 0x1A0));
}

s32 fn_800BD3DC(u8 arg0) {
    extern u16 lbl_802B14E4[];
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || (*(u32 *)((u8 *)var_r3 + 0x188) == 0U)) {
        return 0;
    }
    return *(s32 *)((u8 *)var_r3 + 0x1A0);
}

u8 fn_800BD424(u8 arg0) {
    extern u16 lbl_802B14E4[];
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = &lbl_802B14E4[(arg0 - 1) * 0x140];
    } else {
        var_r3 = NULL;
    }
    if ((var_r3 == NULL) || (*(u32 *)((u8 *)var_r3 + 0x188) == 0U)) {
        return 0U;
    }
    return *(u8 *)((u8 *)var_r3 + 0x1A8);
}

u8 fn_800BD470(u8 arg0) {
    extern u16 lbl_802B14E4[];
    void *temp_r3;
    void *var_r3;

    if (arg0 != 0) {
        var_r3 = (void *)((u8 *)lbl_802B14E4 + ((arg0 - 1) * 0x280));
    } else {
        var_r3 = NULL;
    }
    if (var_r3 == NULL) {
        return 0U;
    }
    temp_r3 = *(void **)((u8 *)var_r3 + 0x184);
    if (temp_r3 != NULL) {
        return *(u8 *)((u8 *)temp_r3 + 0x198);
    }
    return 0U;
}

u8 fn_800BD5AC(void) {
    void *fn_80016BDC();
    void *temp_r3;

    temp_r3 = fn_80016BDC();
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u8 *, 0x198);
}

void fn_800BD5E0(s32 arg0) {
    extern u16 lbl_802CA264[];
    s32 temp_r4;
    s32 temp_r3;
    
    temp_r4 = arg0 * 0xC;
    temp_r3 = temp_r4 << 2;
    fn_80015680(&lbl_802CA264[temp_r3], temp_r4);
}

extern u16 lbl_802CA264[50];
u8 fn_800BD610(s32 arg0) {
    u16 *temp_r3;

    temp_r3 = &lbl_802CA264[arg0 * 0x18];
    if (temp_r3 == NULL) {
        return 0U;
    }
    return temp_r3[0x198/2]; // offset 0x198 is 0x198/2 words into the array
}

void fn_800BDB54(s32 arg0, s32 arg1) {
    s32 temp_r5;
    u8 *ptr;
    
    temp_r5 = arg1 >> 3; // srawi r5, r4, 3 (sign-extend right shift by 3)
    ptr = (u8*)(arg0 + temp_r5);
    *ptr &= ~(1 << (arg1 & 0x1F));  // clear bit in byte at offset
}

void fn_800BDB78(s32 arg0, s32 arg1) {
    u8 *ptr;
    u32 temp;
    
    ptr = (u8 *)arg0 + (arg1 >> 3);
    temp = 1 << (arg1 & 7);
    *(volatile u8 *)ptr |= temp;
}

s32 fn_800BDB9C(s32 arg0, s32 arg1) {
    s32 shift = arg1 & 7;
    u8 *ptr = (u8*)arg0 + (arg1 >> 3);
    u8 byte = ptr[0x300];
    return (byte & (1 << shift)) != 0;
}

void fn_800BDBC8(void *arg0, s32 arg1) {
    s32 loop_counter;
    u32 temp_r31;
    void *temp_r5;
    void *current_ptr;

    temp_r31 = fn_8000D598(arg1);
    current_ptr = arg0;
    loop_counter = 0;
loop_1:
    if ((temp_r31 == (u32) *(u32*)((char*)current_ptr + 0x180)) && (fn_802342B8(*(s32*)((char*)current_ptr), arg1) == 0)) {
        loop_counter += 1;
        current_ptr = (char*)current_ptr + 4;
        if (loop_counter >= 0x60) {
            loop_counter = -1;
        } else {
            goto loop_1;
        }
    }
    //else do nothing
    if (loop_counter >= 0) {
        temp_r5 = (char*)arg0 + (loop_counter >> 3);
        *(u8*)((char*)temp_r5 + 0x300) = *(u8*)((char*)temp_r5 + 0x300) & ~(1 << (loop_counter & 7));
    }
}

void fn_800BDD08(void* arg0, void* arg1, int arg2) {
    s32* ptr0 = (s32*)arg0;
    s32* ptr1 = (s32*)arg1;
    int count = arg2 >> 2;
    if (count > 0) {
        do {
            *ptr0++ = *ptr1++;
            count--;
        } while (count != 0);
    }
}

void fn_800BDDCC(s32 arg0, s32 arg1) {
    s32 loop_counter;
    u32* ptr_17C;

    for (loop_counter = 0x5F; loop_counter >= 0; loop_counter--) {
        ptr_17C = (u32*)(arg0 + 0x17C);
        if (*ptr_17C == 0) {
            *(u32*)(arg0 + (loop_counter * 4)) = arg1;
            *(u32*)(arg0 + (loop_counter * 4) + 0x180) = fn_8000D598(arg1);
            return;
        }
        arg0 -= 4;
    }
}

void fn_800BDE40(u32 *arg0, s32 arg1) {
    s32 fn_8000D598(s32);
    s32 temp_r31;
    s32 var_ctr;
    s32 var_r30;
    u32 *temp_r29;
    u32 *var_r3;
    void *temp_r5;

    var_r3 = arg0;
    var_r30 = 0;
    temp_r29 = var_r3;
    var_ctr = 0x60;
loop_1:
    if ((u32) *var_r3 == 0U) {
        temp_r31 = var_r30 * 4;
        *(temp_r29 + temp_r31) = arg1;
        M2C_FIELD((temp_r29 + temp_r31), s32 *, 0x180) = fn_8000D598(arg1);
        temp_r5 = temp_r29 + (var_r30 >> 3);
        M2C_FIELD(temp_r5, u8 *, 0x300) = (u8) (M2C_FIELD(temp_r5, u8 *, 0x300) & ~(1 << (var_r30 & 7)));
        return;
    }
    var_r3 += 4;
    var_r30 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        return;
    }
    goto loop_1;
}

void fn_800BDED8(void *arg0) {
    int i;
    u32 *ptr;
    u8 *byte_ptr;

    ptr = (u32*)((char*)arg0 + 0x17C);
    for (i = 9; i >= 0; i--) {
        if (*ptr != 0) {
            *ptr = 0;
            *(ptr + 0x60) = 0;
        }
        ptr -= 0x8;
    }

    byte_ptr = (u8*)arg0;
    for (i = 0; i < 0x18; i++) {
        if (*(u32*)((char*)arg0 + i * 0x4) != 0) {
            u32 index = i >> 3;
            u32 mask = 1 << (i & 7);
            byte_ptr[index + 0x300] &= ~mask;
        }
    }
}

void fn_800BE068(void *arg0) {
    s32 i;
    s32 *ptr;
    u8 *byte_ptr;

    *(u8*)((uintptr_t)arg0 + 0x300) = 0;
    *(u8*)((uintptr_t)arg0 + 0x301) = 0;
    *(u8*)((uintptr_t)arg0 + 0x302) = 0;
    *(u8*)((uintptr_t)arg0 + 0x303) = 0;
    *(u8*)((uintptr_t)arg0 + 0x304) = 0;
    *(u8*)((uintptr_t)arg0 + 0x305) = 0;
    *(u8*)((uintptr_t)arg0 + 0x306) = 0;
    *(u8*)((uintptr_t)arg0 + 0x307) = 0;
    *(u8*)((uintptr_t)arg0 + 0x308) = 0;
    *(u8*)((uintptr_t)arg0 + 0x309) = 0;
    *(u8*)((uintptr_t)arg0 + 0x30A) = 0;
    *(u8*)((uintptr_t)arg0 + 0x30B) = 0;

    ptr = (s32*)((uintptr_t)arg0 + 0x17C);
    for (i = 0xC; i > 0; i--) {
        if (*ptr != 0) {
            *ptr = 0;
            *(ptr + 0x60) = 0;
        }

        ptr--;
        if (*ptr != 0) {
            *ptr = 0;
            *(ptr + 0x5F) = 0;
        }

        ptr--;
        if (*ptr != 0) {
            *ptr = 0;
            *(ptr + 0x5E) = 0;
        }

        ptr--;
        if (*ptr != 0) {
            *ptr = 0;
            *(ptr + 0x5D) = 0;
        }

        ptr--;
        if (*ptr != 0) {
            *ptr = 0;
            *(ptr + 0x5C) = 0;
        }

        ptr--;
        if (*ptr != 0) {
            *ptr = 0;
            *(ptr + 0x5B) = 0;
        }

        ptr--;
        if (*ptr != 0) {
            *ptr = 0;
            *(ptr + 0x5A) = 0;
        }

        ptr--;
        if (*ptr != 0) {
            *ptr = 0;
            *(ptr + 0x59) = 0;
        }
    }

    byte_ptr = (u8*)arg0;

    i = 0;
    do {
        s32 temp_r5 = i << 3;
        s32 *ptr = (s32*)(byte_ptr + temp_r5);
        
        if (*ptr != 0) {
            u32 byte_idx = temp_r5 >> 3;
            u8 bit = temp_r5 & 7;
            u8* target_byte = (u8*)((uintptr_t)arg0 + 0x300 + byte_idx);
            *target_byte &= ~((1 << bit));
        }
        
        ptr++;
        if (*ptr != 0) {
            u32 byte_idx = (temp_r5 + 4) >> 3;
            u8 bit = (temp_r5 + 4) & 7;
            u8* target_byte = (u8*)((uintptr_t)arg0 + 0x300 + byte_idx);
            *target_byte &= ~((1 << bit));
        }
        
        ptr++;
        if (*ptr != 0) {
            u32 byte_idx = (temp_r5 + 8) >> 3;
            u8 bit = (temp_r5 + 8) & 7;
            u8* target_byte = (u8*)((uintptr_t)arg0 + 0x300 + byte_idx);
            *target_byte &= ~((1 << bit));
        }
        
        ptr++;
        if (*ptr != 0) {
            u32 byte_idx = (temp_r5 + 12) >> 3;
            u8 bit = (temp_r5 + 12) & 7;
            u8* target_byte = (u8*)((uintptr_t)arg0 + 0x300 + byte_idx);
            *target_byte &= ~((1 << bit));
        }

        i++;
    } while (i < 0x18);
}

void fn_800BE228(void *arg0) {
    s32 i;
    u32 *ptr = (u32 *)arg0;

    // Clear the first 28 words (112 bytes) using explicit loop unrolling to match target
    for (i = 0; i < 28; i++) {
        ptr[i] = 0;
    }
    
    // Clear bytes at offset 0x300 to 0x30B with explicit stores
    ((u8*)arg0)[0x300] = 0;
    ((u8*)arg0)[0x301] = 0;
    ((u8*)arg0)[0x302] = 0;
    ((u8*)arg0)[0x303] = 0;
    ((u8*)arg0)[0x304] = 0;
    ((u8*)arg0)[0x305] = 0;
    ((u8*)arg0)[0x306] = 0;
    ((u8*)arg0)[0x307] = 0;
    ((u8*)arg0)[0x308] = 0;
    ((u8*)arg0)[0x309] = 0;
    ((u8*)arg0)[0x30A] = 0;
    ((u8*)arg0)[0x30B] = 0;
}

s16 fn_800BE798(s32 arg0) {
    void *temp_r3;
    s32 temp_r30;
    s32 temp_r31;
    
    temp_r3 = (void *)fn_80013B60(NULL);
    temp_r31 = 0;
loop_4:
    if (temp_r3 != NULL) {
        if (*(u8 *)((char *)temp_r3 + 0xC) == 0xE) {
            if (temp_r31 == arg0) {
                return *(s16 *)((char *)temp_r3 + 0x18);
            }
        }
        temp_r3 = (void *)fn_80013B60(temp_r3);
        temp_r31 += 1;
        goto loop_4;
    }
    return 0;
}

void fn_800BE800(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r30;
    s32 r31;
    s32 r4;
    s32 r5;
    s32 r0;
    
    r30 = arg0;
    r31 = arg1;
    
    if (r30 == 0)
    {
        r4 = r31;
    }
    else
    {
        r5 = arg2 * arg3;
        r4 = r31 + r5;
    }
    
    if (r4 < 0)
    {
        r0 = -r4;
    }
    else
    {
        r0 = r4;
    }
    
    if (r0 >= 0x10000)
    {
        r0 = 0xFFFF;
    }
    
    arg0 = r0;
}

extern u8 lbl_80317334[];
extern s32 lbl_80368320;
void fn_800BE890(void) {
    if (lbl_80368320 != 0) {
        s32 *ptr = (s32 *)(lbl_80317334 + 0x10);
        if (*ptr != 0) {
            *ptr = 0;
        }
    }
}

void fn_800BEAC0(void* arg0, void* arg1, int arg2) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    
    if (arg2 < 0) {
        return;
    }

    temp_r3 = *(s32*)arg1;
    temp_r4 = *(s32*)((char*)arg1 + 0x1C);
    temp_r5 = *(s32*)((char*)arg1 + 0x20);

    if (temp_r3 < 0) {
        *(s32*)arg0 = -temp_r3;
        *(s32*)((char*)arg0 + 0x1C) = -temp_r4;
        *(s32*)((char*)arg0 + 0x20) = -temp_r5;
    } else {
        *(s32*)arg0 = temp_r3;
        *(s32*)((char*)arg0 + 0x1C) = temp_r4;
        *(s32*)((char*)arg0 + 0x20) = temp_r5;
    }
}

s32 fn_800BF1E8(s32 arg0, s32 arg1, s32 arg2)
{
    M2C_UNK fn_801A5430(s32);
    M2C_UNK fn_801A92F0(s32, s32, s32);
    M2C_UNK fn_801A9290(s32, s32, s32);
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    
    if (arg0 == 0) {
        arg0 = fn_801A5430(arg2);
    }
    else {
        temp_r3 = arg0;
        
        if (arg1 < 0)
            arg1 += 0x1F;
            
        arg1 >>= 5;
        
        if (arg2 < 0)
            arg2 += 0x1F;
            
        arg2 >>= 5;
        
        temp_r4 = arg2 * 0x564;
        temp_r5 = arg1 * 0x7D8600;
        temp_r5 += temp_r4;
        if (temp_r3 == 1) {
            temp_r3 = fn_801A92F0(temp_r5, 0, 0);
            return temp_r3;
        }
        else {
            temp_r3 = fn_801A9290(temp_r5, 0, 0);
            return temp_r3;
        }
    }
    
    return arg0;
}

s32 fn_800BF32C(void* arg0, void* arg1, s32 arg2) {
    s32* ptr = (s32*)arg0;
    s32 count = arg2 >> 2;
    s32 val;

    if (count <= 0)
        return 0;

    do {
        val = *ptr++;
        if (val == 0)
            return 0;
        *(ptr - 1) = val;
        count--;
    } while (count != 0);

    return 1;
}

void fn_800BF494(void) {
    extern s32 lbl_8028D544[];
    
    lbl_8028D544[1] = 0;
    lbl_8028D544[2] = 0;
    
    // This is the main part of the function.
    // Based on analysis, there aren't direct calls to fn_800C273C in this function
    // Let's match it more closely using the real assembly
    return;
}

s32 fn_800BF574(void) {
    s32 var_r31;
    s32 result;
    
    // Call function 1
    var_r31 = fn_80013B60(0);
    if (var_r31 == 0) {
        return 0;
    }
    
    // Call second function based on condition - simpler approach
    result = fn_80013778(var_r31);
    
    return result;
}

void fn_800BF604(void) {
    void *temp;
    
    temp = (void*)fn_80013B60();
    
    // Call some function using global structure  
    if (temp != NULL) {
        fn_8000CAA0(&lbl_8028D544, 7, &lbl_8028D544);
    }
}

s32 fn_800BF694(void) {
    return 1;
}

s32 fn_800BF9D8(void)
{
    extern u32 *lbl_80317338;
    extern s8 lbl_80319A58[];
    extern s32 lbl_8028D544[];
    s32 i;
    
    void fn_802C7610(void);
    
    while (lbl_80317338[0x31] != 0) {
        fn_802C7610();
        lbl_80317338[0x31]--;
    }
    
    for (i = 0; i < 16; i++) {
        lbl_80319A58[i] = 0;
    }
    
    if (lbl_80317338[0x111] != 0) {
        lbl_80317338[0x111] = 0;
    }
    
    return 1;
}

extern u16* const lbl_8036A0D0;
void fn_800BFCA8(void) {
    lbl_80368230 = 0x22;
    lbl_8036A0D0[4] = 0;
}

extern s32 lbl_80367FCC;
s32 fn_800C0190(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 8) {
        return 0;
    }
    return lbl_80367FCC + (arg0 * 4);
}

u32 fn_800C02D4(void *arg0) {
    extern void *lbl_80367190;
    u32 ret;

    if (arg0 == NULL) {
        return **(u32 **)((u8 *)lbl_80367190 + 0x28);
    }
    
    ret = (*(u32 **)((u8 *)*(void **)((u8 *)arg0 + 8) + 0x28))[*(s16 *)((u8 *)arg0 + 0x10) + 1];
    
    if (ret != 0) {
        return ret;
    }
    
    {
        void *p = *(void **)((u8 *)*(void **)((u8 *)arg0 + 8) + 0x1C);
        while (p != NULL) {
            if ((s32)*(u8 *)((u8 *)p + 3) != 0x53) {
                break;
            }
            p = *(void **)((u8 *)p + 0x1C);
        }
        
        if (p == NULL) {
            return 0;
        }
        return **(u32 **)((u8 *)p + 0x28);
    }
}

s32 fn_800C03DC(void *arg0)
{
  s16 *new_var2;
  s16 temp_r5;
  s16 temp_r5_2;
  s16 *new_var;
  temp_r5 = *((s16 *) (((u8 *) arg0) + 0x18));
  if ((temp_r5 >= 0) && (temp_r5 != (*((u8 *) (((u8 *) (&lbl_80330708)) + 0x11)))))
  {
    return 0;
  }
  ;
  if ((*((s16 *) (((u8 *) arg0) + 0x14))) == 0)
  {
    return 1;
  }
  new_var = (s16 *) (((u8 *) (&lbl_80330708)) + 0x12);
  new_var2 = new_var;
  if ((*((s16 *) (((u8 *) arg0) + 0x14))) > (*new_var2))
  {
    return 0;
  }
  return (*new_var2) <= (*((s16 *) (((u8 *) arg0) + 0x16)));
}

void fn_800C054C(void) {
    // Simplified version for now
    return;
}

void fn_800C0624(void *arg0) {
    s32 fn_80013B60(M2C_UNK);
    M2C_FIELD(arg0, s32 *, 0x30) = fn_80013B60(0);
}

void fn_800C068C(void *arg0) {
    s32 *ptr = (s32 *)arg0;
    ptr[0] = 0;
    ptr[1] = 0;
    ptr[2] = 0;
    ptr[3] = 0;
    ptr[4] = 0;
    ptr[5] = 0;
    ptr[6] = 0;
    ptr[7] = 0; 
    ptr[8] = 0;
    ptr[9] = 0;
    ptr[10] = 0;
    ptr[11] = 0;
    ptr[12] = 0;
    ptr[13] = 0;
    ptr[14] = 0;
    ptr[15] = 0;
    ptr[16] = 0;
    ptr[17] = 0;
    ptr[18] = 0;
}

void fn_800C0818(void) {
    extern s32 lbl_8028D544[];
    s32 temp_r3 = lbl_8028D544[0x1A];
    if (temp_r3 != 0) {
        fn_8000C0C0(temp_r3);
    }
}

void fn_800C0980(void) {
    M2C_UNK fn_80018AE4();
    fn_80018AE4();
}

void fn_800C09A0(void) {
    M2C_UNK fn_8008A290(M2C_UNK, M2C_UNK);
    if (fn_80089634() == 6) {
        fn_80089650(2, 0x85);
        fn_8008A290(0, 0);
    }
}

void fn_800C09E4(s32 arg0) {
    s32 fn_800142B8();
    fn_80013880();
    if (fn_800142B8() != 6) {
        fn_8000C188(arg0);
    }
}

extern u16 lbl_80367110;
s32 fn_800C0ACC(void) {
    u16 temp = lbl_80367110;
    temp &= 0xFFFFFFFB;
    lbl_80367110 = temp;
    return 1;
}

void fn_800C0AE0(void)
{
    lbl_80367110 = 1;
}

extern u8 lbl_8028D4D0[16];
void fn_800C0BAC(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8028D4D0[16];
    fn_8000CAA0(lbl_8028D4D0, arg0);
}

void fn_800C0C1C(void) {
    u16 fn_80089634();
    M2C_UNK fn_80089650(M2C_UNK, M2C_UNK);
    if (fn_80089634() != 6) {
        fn_80089650(3, 0x85);
    }
}

void fn_800C0C54(void)
{
  extern u16 lbl_8028D5B8[];
  if (fn_8000C0C0(lbl_8028D5B8) != (0 & 0xFFFFu))
  {
    fn_8000BF00(lbl_8028D5B8);
    return;
  }
  fn_8000CAF0(lbl_8028D5B8, 7);
}

void fn_800C0CA4(void *arg0) {
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x50));
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}

void fn_800C0CDC(void *arg0) {
    f32 spC8;
    f32 sp98;
    f32 sp68;
    f32 sp38;
    f32 sp8;

    fn_8022097C();
    fn_8022124C(0, 0, 0x260, 0x1E0);
    fn_802212FC(0x260, 0x1E0, 4, 0);
    fn_80221BA8(((s32*)arg0)[0x14], 1);
    fn_802209FC();
    fn_80222EB4();
    fn_80067EDC(0);
    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021F4E4(0xD, 1);
    fn_8021FBF0(0, 9, 1, 4, 0);
    fn_8021FBF0(0, 0xD, 1, 4, 0);
    fn_80220428(1);
    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
    fn_80222334(0);
    fn_802240C8(1);
    fn_80223F2C(0, 0, 0, 0xFF);
    fn_802239D0(0, 3);
    fn_80202540(&sp98, -0.5f, -0.5f, 0.0f);
    fn_80202540(&sp68, 0.0f, 0.0f, 0.0f);
    fn_80202300(&spC8, 0x5A, 0.0f);
    fn_802025C0(&sp38, 0.0f, 0.0f, 0.0f);
    fn_80202024(&sp38, &sp98, &sp8);
    fn_80202024(&spC8, &sp8, &sp8);
    fn_80202024(&sp68, &sp8, &sp8);
    fn_80224D7C(&sp8, 0);
    fn_80222C50((u8*)arg0 + 0x30, 0);
    fn_80220DEC(0x98, 0, 4);
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = 0.0f;
}

void fn_800C0EEC(s32 arg0, s32 arg1) {
    s32 r5;
    s32 r6;
    
    // Load values from struct at arg0  
    r5 = *(s32*)((char*)arg0 + 0x28);
    r6 = *(s32*)((char*)arg0 + 0x2C); 
    
    if (r5 >= r6) {
        return;
    }
    
    r5 = r5 + 1;
    *(s32*)((char*)arg0 + 0x28) = r5;
    
    if (r5 < r6) {
        return;
    }
    
    // Call a helper function
    fn_80166D8C();
}

s32 fn_800C1010(void)
{
  unsigned int new_var;
  extern u16 lbl_8028D560[20];
  extern u16 lbl_8028D588[24];
  new_var = 0;
  if (fn_8000C0C0(lbl_8028D560) != new_var)
  {
    return 1;
  }
  return fn_8000C0C0(lbl_8028D588) != 0;
}

void fn_800C1060(s32 arg0) {
    u8 fn_80040824(void);
    extern u16 lbl_8028D560[20];
    extern u16 lbl_8028D588[24];
    
    if (fn_80040824() != 0) {
        fn_8000CA64(lbl_8028D560, arg0);
        fn_8000CA64(lbl_8028D588, arg0);
    }
}

void fn_800C10B4(void) {
    M2C_UNK fn_80016180();
    fn_80016180();
}

void fn_800C11F4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = -1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0x10;
}

s32 fn_800C1360(s32 arg0, s32 arg1, s32 arg2)
{
    s32 var_r30;
    s32 var_r29;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    
    if (arg0 <= 0)
        return -1;
        
    if (arg2 < 0)
        arg2 = 0;
        
    var_r30 = 0;
    var_r29 = 0;
    
    do {
        temp_r3 = var_r30;
        if ((temp_r3 & 0x1) == 0)
            temp_r4 = arg2;
        else
            temp_r4 = 0;
            
        temp_r5 = (arg1 - arg1 * temp_r4) >> 14;
        temp_r6 = temp_r5 + arg2;
        
        if (arg0 < temp_r6) {
            temp_r7 = var_r30;
            if ((temp_r7 & 0x1) == 0)
                temp_r8 = 0;
            else
                temp_r8 = arg2;
                
            arg2 = temp_r8 + arg2;
            var_r30++;
        } else {
            arg2 = temp_r6;
            var_r30++;
        }
        
    } while (var_r30 < 10);
    
    return arg2;
}

void fn_800C1984(void) {
    M2C_UNK fn_80040844();
    M2C_UNK fn_800462FC(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_80046360(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
    extern M2C_UNK fn_800C1730;
    extern u8 lbl_80367289;
    if ((u8) lbl_80367289 == 0) {
        fn_80040844();
        fn_800462FC(0, &fn_800C1730);
        return;
    }
    fn_80040844();
    fn_80046360(0, &fn_800C1730, 0, 0, 0x8000);
}

s32 fn_800C1F1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp0 = (arg0 < 0) ? ((arg0 + 0x1F) >> 5) : (arg0 >> 5);
    s32 temp1 = (arg1 < 0) ? ((arg1 + 0x1F) >> 5) : (arg1 >> 5);
    s32 temp2 = (arg2 < 0) ? ((arg2 + 0x1F) >> 5) : (arg2 >> 5);
    s32 temp3 = (arg3 < 0) ? ((arg3 + 0x1F) >> 5) : (arg3 >> 5);
    
    s32 var_r4 = temp1 * 0x32E100;
    s32 var_r3 = temp0 * 0x7D8600;
    var_r3 += var_r4;
    var_r4 = temp2 * 0x19400;
    var_r3 += var_r4;
    var_r4 = temp3 * 0x564;
    var_r3 += var_r4;

    return var_r3 + 0x800000;
}

char *fn_800C2048(s8 arg0, s8 arg1) {
    void *fn_80013B60(void *);
    u8 fn_800BDD08(void *, char *);
    s32 fn_802342B8(char *, char *);
    u8 cont;
    u8 *p;
    s32 value;
    void *node;
    char *base;
    s16 hw;

    for (node = fn_80013B60(NULL); node != NULL; node = fn_80013B60(node)) {
        if ((s32) M2C_FIELD(node, u8 *, 0xC) == 5 && arg0 == M2C_FIELD(node, s16 *, 0x14) && arg1 == M2C_FIELD(node, s16 *, 0x16)) {
            if (fn_800BDD08((u8 *) lbl_80330708 + 0xB4, M2C_FIELD(M2C_FIELD(node, void **, 8), char **, 0x24) + (u16) M2C_FIELD(node, s16 *, 0x1A)) == 0) {
                p = M2C_FIELD(node, u8 **, 4);
                value = 0;
                cont = 1;
                while (cont) {
                    switch (*p++) {
                    case 0:
                        cont = 0;
                        break;
                    case 1: case 3: case 5: case 7: case 9: case 11: case 13: case 15: case 17: case 19: case 21: case 23: case 25:
                    case 55: case 65:
                        p += 1;
                        break;
                    case 2: case 4: case 6: case 8: case 10: case 12: case 14: case 16: case 18: case 20: case 22: case 24: case 26:
                    case 58: case 59: case 60: case 61: case 62:
                        p += 2;
                        break;
                    case 27: case 64:
                        p += 4;
                        break;
                    case 28:
                        value = *p++;
                        break;
                    case 29:
                        hw = ((p[0] & 0xFF) << 8) + p[1];
                        p += 2;
                        value = hw;
                        break;
                    case 30:
                        value = p[0] << 24;
                        value += (p[1] & 0xFF) << 16;
                        value += (p[2] & 0xFF) << 8;
                        value += p[3];
                        p += 4;
                        break;
                    case 56:
                        base = M2C_FIELD(M2C_FIELD(node, void **, 8), char **, 0x24);
                        base += (s16) (((p[0] & 0xFF) << 8) + p[1]);
                        p += 3;
                        if (fn_802342B8("MindGetItem", base) == 0) {
                            return M2C_FIELD(M2C_FIELD(node, void **, 8), char **, 0x24) + value;
                        }
                        break;
                    }
                }
                return NULL;
            }
        }
    }
    return NULL;
}

int fn_800C221C(void* arg0, void* arg1, u32 arg2)
{
    void** r3 = (void**)arg0;
    if (*r3 == NULL) {
        return 0;
    }
    return 1;
}

s32 fn_800C273C(void *arg0, u16 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x24) + arg1;
}

extern u8 lbl_8028D768[16];
void fn_800C28A0(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8028D768[16];
    fn_8000CAA0(lbl_8028D768, arg0);
}

void fn_800C28CC(void) {
    M2C_UNK fn_80013880();
    fn_80013880();
}

void fn_800C28EC(void) {
    M2C_UNK fn_800138F4();
    M2C_UNK fn_80013A90(void *);
    M2C_UNK fn_80013E24(void *);
    M2C_UNK fn_800AA1CC();
    extern u8 lbl_80270000[];
    fn_800AA1CC();
    fn_80013E24(lbl_80270000 + 0x26);
    fn_80013A90(lbl_80270000 + 0x37);
    fn_800138F4();
}

void fn_800C2930(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, s32, s32);
    M2C_UNK fn_801A7CDC(void *);
    extern u8 lbl_80330EAC[];
    fn_801A7CDC(lbl_80330EAC);
    fn_8017A810(arg1, 0x480, arg0);
}

void fn_800C2980(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, s32, s32);
    M2C_UNK fn_801A7CDC(void *);
    extern u8 lbl_80330EAC[];
    fn_801A7CDC(lbl_80330EAC);
    fn_8017A430(arg1, 0x480, arg0);
}

s32 fn_800C29D0(s32 arg0, s32 arg1) {
    return (s32)&((u8 (*)[0x18])arg0)[arg1 - 1][0x14];
}

s32 fn_800C29E8(s32 arg0, s32 arg1, void *arg2) {
    u8 *temp_r5;
    s32 temp_r10;
    u8 var_r6;

    var_r6 = 0;
    temp_r10 = arg1 * 0x18;
    temp_r5 = (u8 *)arg0 + temp_r10;
    
    *(u8 *)&temp_r5[-4] = *(u8 *)arg2;
    *((u8 *)&temp_r5[-3]) = *((u8 *)arg2 + 1);
    *((u8 *)&temp_r5[-2]) = *((u8 *)arg2 + 2);
    *((u8 *)&temp_r5[-1]) = *((u8 *)arg2 + 3);
    
    if (temp_r5[-0x17] == 0 && 
        temp_r5[-0x8] == 0 &&
        temp_r5[-0x7] == 0 &&
        temp_r5[-0x6] == 0 &&
        temp_r5[-0x5] == 0 &&
        temp_r5[-4] == 0x80 &&
        temp_r5[-3] == 0x80 &&
        temp_r5[-2] == 0x80 &&
        temp_r5[-1] == 0xFF) {
        
        var_r6 = 1;
    }
    
    if (var_r6 != 0) {
        temp_r5[-0x18] = 0;
        temp_r5[-0x17] = 0;
        temp_r5[-5] = 0;
        temp_r5[-6] = 0;
        temp_r5[-7] = 0;
        temp_r5[-8] = 0;
        temp_r5[-2] = 0x80;
        temp_r5[-3] = 0x80;
        temp_r5[-4] = 0x80;
        temp_r5[-1] = 0xFF;
    }
    
    return 0;
}

s8 fn_800C2ACC(Unk800C2ACC *arg0, s32 arg1) {
    return (s8)arg0[arg1 - 1].unk13;
}

s32 fn_800C2AE0(s32 arg0, s32 arg1, u8 arg2) {
    s32 temp_r7;
    s32 var_r4;
    u8 var_r6;
    void *temp_r5;
    void *temp_r8;

    var_r4 = arg1;
    temp_r7 = var_r4 * 0x18;
    var_r6 = 0;
    temp_r8 = (void*)((uintptr_t)arg0 + temp_r7);
    *(u8*)((uintptr_t)temp_r8 - 5) = arg2;
    if (((s8)*(u8*)((uintptr_t)temp_r8 - 0x17) == 0) && ((s8)*(u8*)((uintptr_t)temp_r8 - 8) == 0) && ((s8)*(u8*)((uintptr_t)temp_r8 - 7) == 0) && ((s8)*(u8*)((uintptr_t)temp_r8 - 6) == 0) && ((s8)*(u8*)((uintptr_t)temp_r8 - 5) == 0) && ((u8)*(u8*)((uintptr_t)temp_r8 - 4) == 0x80) && ((u8)*(u8*)((uintptr_t)temp_r8 - 3) == 0x80) && ((u8)*(u8*)((uintptr_t)temp_r8 - 2) == 0x80) && ((u8)*(u8*)((uintptr_t)temp_r8 - 1) == 0xFF)) {
        var_r6 = 1;
    }
    if (var_r6 != 0) {
        temp_r5 = (void*)((uintptr_t)arg0 + temp_r7);
        var_r4 = 0;
        *(u8*)((uintptr_t)temp_r5 - 0x18) = 0;
        *(u8*)((uintptr_t)temp_r8 - 0x17) = 0U;
        *(u8*)((uintptr_t)temp_r8 - 5) = 0U;
        *(u8*)((uintptr_t)temp_r5 - 6) = 0;
        *(u8*)((uintptr_t)temp_r5 - 7) = 0;
        *(u8*)((uintptr_t)temp_r5 - 8) = 0;
        *(u8*)((uintptr_t)temp_r5 - 2) = 0x80;
        *(u8*)((uintptr_t)temp_r5 - 3) = 0x80;
        *(u8*)((uintptr_t)temp_r5 - 4) = 0x80;
        *(u8*)((uintptr_t)temp_r5 - 1) = 0xFF;
    }
    return var_r4;
}

s8 fn_800C2BA8(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)arg0;
    return ptr[(arg1 * 0x18) - 6];
}

s32 fn_800C2BBC(s32 arg0, s32 arg1, u8 arg2) {
    s32 temp_r7;
    s32 var_r4;
    u8 var_r6;
    u8 *temp_r8;
    s8 temp_byte;

    var_r4 = arg1;
    temp_r7 = var_r4 * 0x18;
    var_r6 = 0;
    temp_r8 = (u8*)(arg0 + temp_r7);
    
    temp_r8[-0x6] = arg2;

    if ((temp_byte = *(temp_r8 - 0x17)) == 0) {
        goto end;
    }

    if ((temp_byte = *(temp_r8 - 0x8)) == 0) {
        goto end;
    }

    if ((temp_byte = *(temp_r8 - 0x7)) == 0) {
        goto end;
    }

    if ((temp_byte = *(temp_r8 - 0x6)) == 0) {
        goto end;
    }

    if ((temp_byte = *(temp_r8 - 0x5)) == 0) {
        goto end;
    }
    
    if (*(temp_r8 - 0x4) != 0x80) {
        goto end;
    }
    
    if (*(temp_r8 - 0x3) != 0x80) {
        goto end;
    }
    
    if (*(temp_r8 - 0x2) != 0x80) {
        goto end;
    }

    if (*(temp_r8 - 0x1) != 0xFF) {
        goto end;
    }

    var_r6 = 1;

end:
    if (var_r6 != 0) {
        temp_r8 = (u8*)(arg0 + temp_r7);
        
        *(temp_r8 - 0x18) = 0;
        *(temp_r8 - 0x17) = 0U;
        *(temp_r8 - 0x5) = 0;
        *(temp_r8 - 0x6) = 0U;
        *(temp_r8 - 0x7) = 0;
        *(temp_r8 - 0x8) = 0;
        *(temp_r8 - 0x2) = 0x80;
        *(temp_r8 - 0x3) = 0x80;
        *(temp_r8 - 0x4) = 0x80;
        *(temp_r8 - 0x1) = 0xFF;
    }
    
    return var_r4;
}

s8 fn_800C2C84(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)arg0;
    return ptr[(arg1 * 0x18) - 7];
}

s32 fn_800C2C98(s32 arg0, s32 arg1, u8 arg2) {
    s32 temp_r7;
    s32 var_r4;
    u8 var_r6;
    void *temp_r5;
    void *temp_r8;

    var_r4 = arg1;
    temp_r7 = var_r4 * 0x18;
    var_r6 = 0;
    temp_r8 = (u8*)arg0 + temp_r7;
    *(u8*)((u8*)temp_r8 - 0x7) = arg2;
    if (((s8) *(u8*)((u8*)temp_r8 - 0x17) == 0) && 
        ((s8) *(u8*)((u8*)temp_r8 - 0x8) == 0) && 
        ((s8) *(u8*)((u8*)temp_r8 - 0x7) == 0) && 
        ((s8) *(u8*)((u8*)temp_r8 - 0x6) == 0) && 
        ((s8) *(u8*)((u8*)temp_r8 - 0x5) == 0) && 
        ((u8) *(u8*)((u8*)temp_r8 - 0x4) == 0x80) && 
        ((u8) *(u8*)((u8*)temp_r8 - 0x3) == 0x80) && 
        ((u8) *(u8*)((u8*)temp_r8 - 0x2) == 0x80) && 
        ((u8) *(u8*)((u8*)temp_r8 - 0x1) == 0xFF)) {
        var_r6 = 1;
    }
    if (var_r6 != 0) {
        temp_r5 = (u8*)arg0 + temp_r7;
        var_r4 = 0;
        *(u8*)((u8*)temp_r5 - 0x18) = 0;
        *(u8*)((u8*)temp_r8 - 0x17) = 0U;
        *(u8*)((u8*)temp_r5 - 0x5) = 0;
        *(u8*)((u8*)temp_r5 - 0x6) = 0;
        *(u8*)((u8*)temp_r8 - 0x7) = 0U;
        *(u8*)((u8*)temp_r5 - 0x8) = 0;
        *(u8*)((u8*)temp_r5 - 0x2) = 0x80;
        *(u8*)((u8*)temp_r5 - 0x3) = 0x80;
        *(u8*)((u8*)temp_r5 - 0x4) = 0x80;
        *(u8*)((u8*)temp_r5 - 0x1) = 0xFF;
    }
    return var_r4;
}

s8 fn_800C2D60(s32 arg0, s32 arg1) {
    u8 *ptr = (u8 *)arg0;
    return ptr[(arg1 * 0x18) - 8];
}

s32 fn_800C2D74(s32 arg0, s32 arg1, u8 arg2) {
    s32 temp_r7;
    u8 var_r6;
    void *temp_r8;
    s32 temp_r5;

    temp_r7 = arg1 * 0x18;
    temp_r8 = (u8*)arg0 + temp_r7;
    *(u8*)((u8*)temp_r8 - 0x8) = arg2;
    if ((*(s8*)((u8*)temp_r8 - 0x17) == 0) &&
        (*(s8*)((u8*)temp_r8 - 0x8) == 0) &&
        (*(s8*)((u8*)temp_r8 - 0x7) == 0) &&
        (*(s8*)((u8*)temp_r8 - 0x6) == 0) &&
        (*(s8*)((u8*)temp_r8 - 0x5) == 0) &&
        (*(u8*)((u8*)temp_r8 - 0x4) == 0x80) &&
        (*(u8*)((u8*)temp_r8 - 0x3) == 0x80) &&
        (*(u8*)((u8*)temp_r8 - 0x2) == 0x80) &&
        (*(u8*)((u8*)temp_r8 - 0x1) == 0xFF)) {
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    if (var_r6 != 0) {
        temp_r5 = arg0 + temp_r7;
        *(u8*)((u8*)temp_r5 - 0x18) = 0U;
        *(u8*)((u8*)temp_r8 - 0x17) = 0U;
        *(u8*)((u8*)temp_r5 - 0x5) = 0U;
        *(u8*)((u8*)temp_r5 - 0x6) = 0U;
        *(u8*)((u8*)temp_r5 - 0x7) = 0U;
        *(u8*)((u8*)temp_r8 - 0x8) = 0U;
        *(u8*)((u8*)temp_r5 - 0x2) = 0x80U;
        *(u8*)((u8*)temp_r5 - 0x3) = 0x80U;
        *(u8*)((u8*)temp_r5 - 0x4) = 0x80U;
        *(u8*)((u8*)temp_r5 - 0x1) = 0xFFU;
    }
    return 0;
}

s32 fn_800C30CC(s32 arg0, s32 arg1) {
    return arg0 + ((arg1 - 1) * 0x18);
}

s32 fn_800C30DC(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r31;
    u8 temp_r6;
    void *temp_r30;
    void *temp_r5;
    
    temp_r6 = *(u8*)arg2;
    temp_r31 = arg1 * 0x18;
    temp_r30 = (u8*)arg0 + temp_r31;
    *(u8*)((u8*)temp_r30 - 0x18) = temp_r6;
    
    fn_8022C1B8(((u8*)arg0 + (((arg1 - 1) * 0x18) + 1)), 
                (u8*)arg2 + 1, 
                0xF, 
                temp_r6);
    
    *(u8*)((u8*)temp_r30 - 0x8) = *(u8*)((u8*)arg2 + 0x10);
    *(u8*)((u8*)temp_r30 - 0x7) = *(u8*)((u8*)arg2 + 0x11);
    *(u8*)((u8*)temp_r30 - 0x6) = *(u8*)((u8*)arg2 + 0x12);
    *(u8*)((u8*)temp_r30 - 0x5) = *(u8*)((u8*)arg2 + 0x13);
    *(u32*)((u8*)temp_r30 - 0x4) = *(u32*)((u8*)arg2 + 0x14);
    
    if (((s8)*(u8*)((u8*)temp_r30 - 0x17) == 0) && 
        ((s8)*(u8*)((u8*)temp_r30 - 0x8) == 0) && 
        ((s8)*(u8*)((u8*)temp_r30 - 0x7) == 0) && 
        ((s8)*(u8*)((u8*)temp_r30 - 0x6) == 0) && 
        ((s8)*(u8*)((u8*)temp_r30 - 0x5) == 0) && 
        (*(u8*)((u8*)temp_r30 - 0x4) == 0x80) && 
        (*(u8*)((u8*)temp_r30 - 0x3) == 0x80) && 
        (*(u8*)((u8*)temp_r30 - 0x2) == 0x80) && 
        (*(u8*)((u8*)temp_r30 - 0x1) == 0xFF)) {
        
        temp_r5 = (u8*)arg0 + temp_r31;
        *(u8*)((u8*)temp_r30 - 0x18) = 0;
        *(u8*)((u8*)temp_r30 - 0x17) = 0;
        *(u8*)((u8*)temp_r30 - 0x5) = 0;
        *(u8*)((u8*)temp_r30 - 0x6) = 0;
        *(u8*)((u8*)temp_r30 - 0x7) = 0;
        *(u8*)((u8*)temp_r30 - 0x8) = 0;
        *(u8*)((u8*)temp_r5 - 0x2) = 0x80;
        *(u8*)((u8*)temp_r5 - 0x3) = 0x80;
        *(u8*)((u8*)temp_r30 - 0x4) = 0x80;
        *(u8*)((u8*)temp_r5 - 0x1) = 0xFF;
        
        return 1;
    }
    
    return arg1;
}

void fn_800C3220(s32 arg0, s32 arg1) {
    u8 *temp_r3;

    temp_r3 = (u8 *)(arg0 + (arg1 * 0x18));
    *(temp_r3 - 0x18) = 0;
    *(temp_r3 - 0x17) = 0;
    *(temp_r3 - 0x5) = 0;
    *(temp_r3 - 0x6) = 0;
    *(temp_r3 - 0x7) = 0;
    *(temp_r3 - 0x8) = 0;
    *(temp_r3 - 0x2) = 0x80;
    *(temp_r3 - 0x3) = 0x80;
    *(temp_r3 - 0x4) = 0x80;
    *(temp_r3 - 0x1) = 0xFF;
}

s32 fn_800C3260(u8* arg0) {
    s32 i;
    u8* p;

    p = arg0;
    for (i = 0; i < 0x30; i++) {
        if (*arg0 == 0) {
            p[i * 0x18] = 1;
            return i + 1;
        }
        arg0 = arg0 + 0x18;
    }
    return 0;
}

void fn_800C32A4(void *ptr) {
    u8 *p = (u8 *)ptr;
    int i;
    
    for (i = 0; i < 12; i++) {
        p[0] = 0;
        p[1] = 0;
        p[0x13] = 0;
        p[0x12] = 0;
        p[0x11] = 0;
        p[0x10] = 0;
        p[0x16] = 0x80;
        p[0x15] = 0x80;
        p[0x14] = 0x80;
        p[0x17] = 0xFF;
        p[0x18] = 0;
        p[0x19] = 0;
        p[0x2B] = 0;
        p[0x2A] = 0;
        p[0x29] = 0;
        p[0x28] = 0;
        p[0x2E] = 0x80;
        p[0x2D] = 0x80;
        p[0x2C] = 0x80;
        p[0x2F] = 0xFF;
        p[0x30] = 0;
        p[0x31] = 0;
        p[0x43] = 0;
        p[0x42] = 0;
        p[0x41] = 0;
        p[0x40] = 0;
        p[0x46] = 0x80;
        p[0x45] = 0x80;
        p[0x44] = 0x80;
        p[0x47] = 0xFF;
        p[0x48] = 0;
        p[0x49] = 0;
        p[0x5B] = 0;
        p[0x5A] = 0;
        p[0x59] = 0;
        p[0x58] = 0;
        p[0x5E] = 0x80;
        p[0x5D] = 0x80;
        p[0x5C] = 0x80;
        p[0x5F] = 0xFF;
        p += 0x60;
    }
}

void fn_800C3364(s32 arg0, s32 arg1) {
    s32 r31 = arg0;
    s32 r30 = 0;
    
    do {
        fn_8001C15C(r31, arg1);
        r30 += 1;
        r31 += 8;
    } while (r30 < 0xC8);
}

void fn_800C33C0(s32 arg0, s32 arg1) {
    s32 r31 = arg0;
    s32 r30 = 0;
    
    do {
        fn_8001C21C(r31, arg1);
        r30 += 1;
        r31 += 8;
    } while (r30 < 0xC8);
}

void fn_800C341C(s32 arg0) {
    s32 r31 = arg0;
    s32 r30 = 0;
    
    do {
        fn_8001D580(r31);
        r30 += 1;
        r31 += 8;
    } while (r30 < 0xC8);
}

void fn_800C3468(void *arg0) {
    s32 i;
    void **ptr = (void**)arg0;
    
    for (i = 0; i < 0xC8; i++) {
        ptr++;
    }
}

void fn_800C3864(s32 arg0, s32 arg1) {
    M2C_UNK fn_8001D580(s32);
    fn_8001D580(arg0 + (arg1 * 8));
}

extern struct Unit;
s32 fn_800C388C(s32 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 i;
    s32 j;
    
    temp_r3 = fn_80019E04(arg1);
    
    for (i = 0; i < 0x14; i++) {
      if (arg0[i * 0x14 + 0] == temp_r3) return i;
      if (arg0[i * 0x14 + 2] == temp_r3) return i + 1;
      if (arg0[i * 0x14 + 4] == temp_r3) return i + 2;
      if (arg0[i * 0x14 + 6] == temp_r3) return i + 3;
      if (arg0[i * 0x14 + 8] == temp_r3) return i + 4;
      if (arg0[i * 0x14 + 10] == temp_r3) return i + 5;
      if (arg0[i * 0x14 + 12] == temp_r3) return i + 6;
      if (arg0[i * 0x14 + 14] == temp_r3) return i + 7;
      if (arg0[i * 0x14 + 16] == temp_r3) return i + 8;
      if (arg0[i * 0x14 + 18] == temp_r3) return i + 9;
    }
    
    return -1;
}

s32 fn_800C39A4(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg0 < 0) {
        return -1;
    }
    
    if (arg0 >= arg1) {
        return -1;
    }
    
    if ((arg2 & 0xF) != 0) {
        return -1;
    }
    
    // Simple lookup based on what we can tell from the structure
    return ((u16*)0x80317338)[arg0];
}

s32 fn_800C3D48(void *arg0) {
    s32 i;

    for (i = 0; i < 200; i++) {
        if (*(void **)((char *)arg0 + i * 8) == NULL) {
            return i;
        }
    }

    return -1;
}

s32 fn_800C3E54(void *arg0) {
    s32 count = 0;
    void *cur = arg0;
    int i;

    for (i = 0; i < 0x14; i++) {
        if (*(u32*)cur != 0) {
            count++;
        }
        if (*((u32*)cur + 2) != 0) {
            count++;
        }
        if (*((u32*)cur + 4) != 0) {
            count++;
        }
        if (*((u32*)cur + 6) != 0) {
            count++;
        }
        if (*((u32*)cur + 8) != 0) {
            count++;
        }
        if (*((u32*)cur + 10) != 0) {
            count++;
        }
        if (*((u32*)cur + 12) != 0) {
            count++;
        }
        if (*((u32*)cur + 14) != 0) {
            count++;
        }
        if (*((u32*)cur + 16) != 0) {
            count++;
        }
        if (*((u32*)cur + 18) != 0) {
            count++;
        }
        cur = (u8*)cur + 0x50;
    }
    return count;
}

#include "common.h"
extern u8 lbl_8032FF08[];
extern void fn_80148888(u32*, s16);
extern void fn_80146B00(void);
#include "global.h"
extern u16 lbl_80317338[];

extern u16 lbl_80317338[4976];

u16 fn_800AF704(s32 arg0) {
    return lbl_80317338[0x13C * arg0 + 0xF8 / 2];
}

void fn_800AF71C(s32 arg0, u16 arg1) {
    u16 temp_r3;
    void *temp_r30;

    temp_r30 = &lbl_80317338[0xF8 / 2] + (arg0 * 0x13C);
    if ((u16) *(u16*)temp_r30 != 0) {
        *(u16*)((char*)temp_r30 + 0x1C) = arg1;
        if (*(u16*)temp_r30 & 8) {
            if (lbl_80317338[0x124 / 2] == 0) {
                lbl_80317338[0x128 / 2] = 0; // No interrupt disabling function, just setting to 0 for now
            }
            lbl_80317338[0x124 / 2] = (u16) (lbl_80317338[0x124 / 2] + 1);
            fn_8024D3C4(*(u32*)((char*)temp_r30 + 0x50), *(u16*)((char*)temp_r30 + 0x1C));
            if ((u16) *(u16*)((char*)temp_r30 + 0x1E) == 2) {
                fn_8024D3C4(*(u32*)((char*)temp_r30 + 0xD8), *(u16*)((char*)temp_r30 + 0x1C));
            }
            if (lbl_80317338[0x124 / 2] != 0) {
                temp_r3 = lbl_80317338[0x124 / 2] - 1;
                lbl_80317338[0x124 / 2] = temp_r3;
                if (temp_r3 == 0) {
                    // No function to restore interrupts, just setting it to 0
                    lbl_80317338[0x128 / 2] = 0; 
                }
            }
        }
    }
}

extern f64 lbl_80369CC0;
extern f32 lbl_80369CC8;
extern f32 lbl_80369CCC;
extern f32 lbl_80369CB0;
extern f32 lbl_80369CD0;
void fn_800AFC54(s32 arg0) {
    u16 *temp_r5;
    f32 var_f2;

    temp_r5 = &lbl_80317338[(arg0 * 0x13C)];
    if (*temp_r5 != 0) {
        var_f2 = (f32) temp_r5[0x30] / lbl_80369CC8;
        if (var_f2 < lbl_80369CCC) {
            var_f2 = lbl_80369CCC;
        }
        *temp_r5 = (*temp_r5 & 0x7FFF);
        temp_r5[0x6] = (f32) ((temp_r5[0x3] - temp_r5[0x4]) / var_f2);
        *temp_r5 = (*temp_r5 | 0x10);
        *temp_r5 = (*temp_r5 & 0xFFDF);
        *temp_r5 = (*temp_r5 & 0xFFBF);
    }
}

void fn_800AFCFC(s32 arg0) {
    u16 *temp_r5;
    f32 var_f3;
    s32 var_r3;
    f32 temp_f4;
    
    temp_r5 = &lbl_80317338[arg0 * 0x13C / 2];
    if ((u16) temp_r5[0] != 0) {
        var_f3 = (f32) temp_r5[0x122/2] / lbl_80369CC8;
        if (var_f3 < lbl_80369CCC) {
            var_f3 = lbl_80369CCC;
        }
        temp_f4 = temp_r5[0x10/2];
        var_r3 = (s32) ((temp_r5[0xC/2] * lbl_80369CB0) / lbl_80369CD0);
        if ((f32) var_r3 > temp_f4) {
            var_r3 = (s32) temp_f4;
        }
        temp_r5[0x14/2] = (f32) var_r3;
        temp_r5[0x18/2] = (f32) ((temp_r5[0x10/2] - temp_r5[0x14/2]) / var_f3);
        temp_r5[0] = (u16) (temp_r5[0] | 0x40);
        temp_r5[0] = (u16) (temp_r5[0] & 0xFFFFFFEF);
        temp_r5[0] = (u16) (temp_r5[0] & 0xFFFFFFDF);
    }
}

void fn_800AFE0C(s32 arg0) {
    u16* temp_r31;
    
    temp_r31 = &lbl_80317338[arg0 * 0x13C];
    if (temp_r31[0] != 0) {
        if (!(temp_r31[0] & 8)) {
            temp_r31[0] = temp_r31[0] | 4;
            return;
        }
        if (temp_r31[0] & 0x400) {
            lbl_80317338[(temp_r31[1] * 2) + 0x13E] = 0;
        }
        temp_r31[0] = 0;
        if (lbl_80317338[0x124/2] == 0) {
            lbl_80317338[0x128/2] = OSDisableInterrupts();
        }
        lbl_80317338[0x124/2] = lbl_80317338[0x124/2] + 1;
        fn_800B49D0((void *)(u32)temp_r31[0x2C/2]);
        fn_800B49D0((void *)(u32)temp_r31[0xB4/2]);
        fn_8024DA2C((void *)(u32)temp_r31[0x50/2]);
        if (temp_r31[0x1E/2] == 2) {
            fn_8024DA2C((void *)(u32)temp_r31[0xD8/2]);
        }
        if (lbl_80317338[0x124/2] != 0) {
            u16 temp_r3_2 = lbl_80317338[0x124/2] - 1;
            lbl_80317338[0x124/2] = temp_r3_2;
            if (temp_r3_2 == 0) {
                OSRestoreInterrupts(lbl_80317338[0x128/2]);
            }
        }
        lbl_80317338[0xFC/2] = -1;
    }
}

void fn_800B0AC8(void) {
    fn_800B080C(0);
}

s32 fn_800B125C(s32 arg0, s32 arg1) {
    extern u16 lbl_80317338[4976];
    void *entry;
    s32 result;
    
    entry = &lbl_80317338[0xF0] + arg0 * 16;
    if (*(u32*)((char*)entry + 0xC) == 0xFFFFFFFF) {
        return -1;
    }
    
    result = *(s32*)((char*)entry + 0x8);
    if (result < 0) {
        return 0;
    }
    
    if ((arg1 & 0x80000000) != 0) {
        *(u32*)((char*)entry + 0x4) = arg1 & 0x7FFFFFFF;
        return result;
    }
    
    if (arg1 >= result) {
        return result;
    }
    
    return arg1;
}

extern u16 lbl_80317338[];
extern u16 lbl_80330EAC;
extern u16 lbl_80317338[4976];
extern u16 lbl_80317338[];
typedef struct {
    u32 field_0x2F0;
    u32 field_0x2F4;
} SomeStruct;
extern u16 lbl_8032BB58[258];
extern u16 lbl_80367110;
#include "common.h"
extern s32 lbl_80368230;
extern u16 lbl_8028D4F8[38];
#include "common.h"
extern s32 lbl_80367198;
extern void *lbl_80367180;
extern void *lbl_803671A4;
#include "global.h"

extern u16 lbl_802B14E4[0x800];
void fn_8003EA24(void *, u8, u8);
#include "common.h"
extern s32 lbl_8036780C;
extern u8 lbl_80367810;
extern s32 lbl_80313020;
extern u16 lbl_80319A58[8];
extern u16 lbl_802B14E4[];
extern void* lbl_80320030;
extern u8 lbl_8031FFD0[];
extern s32 lbl_80367850;
extern s32 lbl_80367854;
extern s32 lbl_80367858;
extern s32 lbl_8036785C;
extern s32 lbl_80369D28;
#include "global.h"
#include "unit.h"

extern u16 lbl_80317338[];
extern f64 lbl_80369CB8;
extern f32 lbl_80369CB4;
extern f64 lbl_80369CC0;

extern void fn_8024CE60(s32 arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4);
extern u16 lbl_80317338[4976];
extern f64 lbl_80369CB8;
extern f32 lbl_80369CB4;
extern f64 lbl_80369CC0;
