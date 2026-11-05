/* Functions from 0x801B3258 to 0x801E4380, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8032FF08;
extern u16 lbl_80331D00[];

struct Unit {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u16 unk26;
    u16 unk28;
    u16 unk2A;
    u16 unk2C;
    u16 unk2E;
};

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    u32 unk28;
    u32 unk2C;
    u32 unk30;
    u32 unk34;
    u32 unk38;
    u32 unk3C;
    u32 unk40;
    u32 unk44;
    u32 unk48;
    u32 unk4C;
    u32 unk50;
    u32 unk54;
    u32 unk58;
    u32 unk5C;
    u32 unk60;
    u32 unk62;
} struct0;


/* Message box: up to 7 text lines, opened/closed through state (0x64/0x6E open, 0xC8/0xD2 close). */
typedef struct MsgBox {
    /* 0x000 */ s16 flags;
    /* 0x002 */ s16 state;
    /* 0x004 */ s16 type;
    /* 0x006 */ u8 unk6[4];
    /* 0x00A */ s16 width;
    /* 0x00C */ s16 height;
    /* 0x00E */ u8 unkE[0x10];
    /* 0x01E */ s16 timer;
    /* 0x020 */ char lines[7][0x41];
    /* 0x1E7 */ s8 numLines;
    /* 0x1E8 */ u8 unk1E8[2];
} MsgBox;

void fn_801B3D30(void *arg0) {
    void fn_801B5E2C(void *);
    void *temp_r31;
    
    temp_r31 = *(void **)((char *)arg0 + 0x30);
    fn_801B5E2C(temp_r31);
    *(s32 *)((char *)temp_r31 + 0x18) = 0;
}

s32 fn_801B6098(s32 arg0) {
    void fn_801B32C8(void *);
    extern s32 lbl_80330EAC;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r0;
    void *var_r3;

    if (((u32) *(s32 *)((char *)&lbl_80330EAC + 0xCAC) >> 4U) & 1) {
        var_r0 = 0;
    } else if (*(s32 *)((char *)&lbl_80330EAC + 0xCAC) & 0x800) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return 0;
    }
    var_r3 = *(void **)((char *)&lbl_80330EAC + 0x280);
    if (var_r3 != NULL) {
        temp_r0 = *(u8 *)((char *)*(void **)((char *)var_r3 + 0x190) + 8);
        if (temp_r0 != 0) {
            if (temp_r0 == 5) {

            } else {
                goto block_11;
            }
        }
    } else {
block_11:
        var_r3 = *(void **)((char *)&lbl_80330EAC + 0x560);
        if (var_r3 != NULL) {
            temp_r0_2 = *(u8 *)((char *)*(void **)((char *)var_r3 + 0x190) + 8);
            if (temp_r0_2 != 0) {
                if (temp_r0_2 == 5) {

                } else {
                    goto block_15;
                }
            }
        } else {
block_15:
            var_r3 = NULL;
        }
    }
    fn_801B32C8(var_r3);
    return 1;
}

s32 fn_801B6164(u32 arg0) {
    M2C_UNK fn_8000CAA0(M2C_UNK *, u32, M2C_UNK *);
    M2C_UNK fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80297AC8;
    extern M2C_UNK lbl_80330EAC;
    if (!(M2C_FIELD(&lbl_80330EAC, s32 *, 0xCAC) & 0x400)) {
        return 0;
    }
    if (arg0 == 0U) {
        fn_8000CAF0(&lbl_80297AC8, 3);
    } else {
        fn_8000CAA0(&lbl_80297AC8, arg0, &lbl_80297AC8);
    }
    return 1;
}

void fn_801B657C(void *arg0) {
    f32 fn_80059F64(u16, f32, f32, f32, f32);
    extern f32 lbl_8036B1B8;
    extern f32 lbl_8036B1BC;
    extern f32 lbl_8036B1C0;
    extern f32 lbl_8036B1C8;
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0x3C);
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) (temp_r3 + 1);
    M2C_FIELD(arg0, s8 *, 0x39) = (s8) fn_80059F64(temp_r3, lbl_8036B1BC, lbl_8036B1B8, lbl_8036B1C0, (f32) M2C_FIELD(arg0, u16 *, 0x3C));
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3C) == 8) {
        fn_8000C188(arg0);
    }
}

void fn_801B6600(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
}

void fn_801B66F4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
}

void fn_801B77E8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x228) = arg1;
}

void fn_801B77F0(s32 arg0, s32 arg1) {
    M2C_UNK fn_8000E0E4(s32);
    fn_8000E0E4(arg0 + (arg1 << 6));
}

void fn_801BE1EC(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(M2C_UNK), 8)(-1);
}

void *fn_801BE6A8(s32 arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_801403F0();
    extern M2C_UNK lbl_80297C14;
    extern M2C_UNK lbl_80297E78;
    extern M2C_UNK lbl_802EF4C8;
    extern s8 lbl_80368274;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80297C14, arg0, &lbl_80297C14, &lbl_802EF4C8);
    if (temp_r3 != NULL) {
        fn_801403F0();
        M2C_FIELD(temp_r3, M2C_UNK **, 0x40) = &lbl_80297E78;
        M2C_FIELD(temp_r3, s32 *, 0x48) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x50) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x54) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x58) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x5C) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x60) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x64) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x68) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x6C) = 0;
        lbl_80368274 = 0x80;
    }
    fn_8000C070(temp_r3, 0xB);
    return temp_r3;
}

void *fn_801BE748(s32 arg0) {
    void *fn_8000CAA0(M2C_UNK *, s32, M2C_UNK *);
    M2C_UNK fn_801403F0();
    extern M2C_UNK lbl_80297C14;
    extern M2C_UNK lbl_80297E78;
    extern s8 lbl_80368274;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80297C14, arg0, &lbl_80297C14);
    if (temp_r3 != NULL) {
        fn_801403F0();
        M2C_FIELD(temp_r3, M2C_UNK **, 0x40) = &lbl_80297E78;
        M2C_FIELD(temp_r3, s32 *, 0x48) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x50) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x54) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x58) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x5C) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x60) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x64) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x68) = 0;
        M2C_FIELD(temp_r3, s32 *, 0x6C) = 0;
        lbl_80368274 = 0x80;
    }
    return temp_r3;
}

void fn_801BE7CC(void) {
    extern M2C_UNK lbl_8027C698;
    fn_8000E0E4(&lbl_8027C698 + 0xDF);
}

void fn_801C0A28(void *arg0) {
    s32 temp_r31;
    
    temp_r31 = fn_8013FF94(arg0, 0x81, 0);
    fn_8016A5AC(*(s32*)((char*)arg0 + 0x18));
    fn_8013FEF0();
    fn_8014876C(&lbl_8032FF08, 0x46, 0x2EE);
    fn_801D2AAC(temp_r31);
    fn_800BE658(arg0);
}

void fn_801C0A9C(void)
{
    extern u8 lbl_802EF4C8[0x18];
    
    if (lbl_802EF4C8[8] >= 0x81) {
        if (lbl_802EF4C8[8] == 0x81) {
            fn_8000C070(4);
        }
    }
}

void fn_801C0FDC(s32 arg0) {
    void *fn_800C42D8(s32);
    s32 fn_801400F4(s32);
    void *fn_801C14B4(s32, s32, s32);
    void *var_r4;
    s32 var_r3;

    var_r4 = fn_800C42D8(0xC8);
    if (var_r4 != NULL) {
        var_r3 = 0x1F4;
        var_r4 = fn_801C14B4(0x80, 0x70, var_r3);
    }
    *(s16 *)((char *)var_r4 + 8) = 0x81;
    *(s32 *)((char *)var_r4 + 0x34) |= 0x10;
    fn_801400F4(arg0);
}

s32 fn_801C13F0(void) {
    u8 fn_800BE800(s32);
    u8 fn_800BE890(s32);
    s32 fn_800BE914();
    
    s32 temp_r31 = fn_800BE914();
    s32 var_r30 = 0;
    
loop_5:
    if (var_r30 >= temp_r31) {
        return 0;
    }
    if ((fn_800BE800(var_r30) != 0) && (fn_800BE890(var_r30) == 0)) {
        return 1;
    }
    var_r30 += 1;
    goto loop_5;
}

void fn_801C18FC(s32 arg0) {
    M2C_UNK fn_8000A388(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32);
    extern M2C_UNK fn_801C19E4;
    extern M2C_UNK lbl_80297FF8;
    extern M2C_UNK lbl_80368280;
    extern f32 lbl_8036B328;
    f32 temp_f1;

    M2C_FIELD(&lbl_80368280, s8 *, 0) = -1;
    temp_f1 = (f32) arg0;
    M2C_FIELD(&lbl_80368280, s32 *, 4) = (s32) (temp_f1 / lbl_8036B328);
    fn_8000A388(&lbl_80297FF8, &fn_801C19E4, &lbl_80368280, &lbl_80368280, temp_f1);
}

void fn_801C1970(s8 arg0, s32 arg1) {
    M2C_UNK fn_8000A388(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32);
    extern M2C_UNK fn_801C19E4;
    extern M2C_UNK lbl_80297FF8;
    extern M2C_UNK lbl_80368280;
    extern f32 lbl_8036B328;
    f32 temp_f1;

    M2C_FIELD(&lbl_80368280, s8 *, 0) = arg0;
    temp_f1 = (f32) arg1;
    M2C_FIELD(&lbl_80368280, s32 *, 4) = (s32) (temp_f1 / lbl_8036B328);
    fn_8000A388(&lbl_80297FF8, &fn_801C19E4, &lbl_80368280, &lbl_80368280, temp_f1);
}

void fn_801C19E4(void *arg0, void *arg1) {
    u8 temp_r6;

    temp_r6 = M2C_FIELD(arg1, u8 *, 0);
    if (((s8) M2C_FIELD(arg0, u8 *, 0x30) == (s8) temp_r6) || ((s8) temp_r6 == -1)) {
        M2C_FIELD(arg0, s8 *, 0x31) = 0xA;
        M2C_FIELD(arg0, s16 *, 0x3A) = (s16) M2C_FIELD(arg1, s32 *, 4);
    }
}

void fn_801C2250(void *arg0) {
    M2C_UNK fn_8000C188();
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x31) = 0;
        M2C_FIELD(arg0, s16 *, 0x34) = 0;
        fn_8000C188();
    }
}

void fn_801C29E8(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    s32 fn_800C4638(s32, void *, s32);
    extern u16 lbl_80298140[];
    extern u8 lbl_8027D030[];

    void *temp_r31;
    temp_r31 = fn_8000CAA0(lbl_80298140, arg0, lbl_80298140);
    *(s32 *)((u8 *)temp_r31 + 0x30) = fn_800C4638(0x160, (void *)(lbl_8027D030 + 0x3F1), 0);
}

void fn_801C32D4(s32 arg0) {
    s32 fn_8005C6A0(void *, M2C_UNK *);
    s32 fn_80161FB8();
    extern M2C_UNK lbl_8027D030;
    if ((fn_8005C6A0(&lbl_8027D030 + 0x402, &lbl_8027D030) & 0x2000) && (fn_80161FB8() != 0)) {
        fn_80162054();
        fn_8000C188(arg0);
    }
}

void *fn_801C43C8(void *arg0, s16 arg1) {
    extern u16 lbl_802981AC;
    if (arg0 != NULL) {
        *(u16**)((char*)arg0 + 0x2C) = &lbl_802981AC;
        fn_800578F0(0, &lbl_802981AC);
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_801C4428(void) {
    return 3;
}

s32 fn_801C4430(void) {
    return 4;
}

s32 fn_801C4438(void) {
    return 5;
}

extern u8 lbl_8029824C[16];
void fn_801C4440(void) {
    fn_8000BF00(&lbl_8029824C);
}

void fn_801C4468(s32 arg0) {
    M2C_FIELD(fn_8000CAF0(&lbl_8029824C, 4), s32 *, 0x3C) = arg0;
}

void fn_801C4564(void) {
    fn_801C45A4();
    return;
}

void fn_801C4584(void) {
    fn_801C5B80();
    return;
}

void fn_801C6008(s32 arg0) {
    extern u16 lbl_80298224[20];
    void *temp_r3;

    temp_r3 = (void *)fn_8000CAF0(&lbl_80298224, 4);
    *(s32 *)((char *)temp_r3 + 0x30) = arg0;
}

void fn_801C60C8(void) {
    fn_801D7B24();
}

void fn_801C6F7C(void) {
    fn_801C7210();
}

extern u32 lbl_8036C510;
void fn_801C7598(void* arg0) {
    void* temp_r3;
    
    temp_r3 = (void*)fn_800675E0();
    if (temp_r3 != NULL && *(u8*)temp_r3 != 0) {
        u8 r6 = ((u8*)temp_r3)[1];
        u8 r5 = ((u8*)temp_r3)[2];
        u8 r0 = ((u8*)temp_r3)[3];
        
        u32 temp_r4 = lbl_8036C510;
        u32 arg_ptr;
        
        *(u8*)((char*)&temp_r4 + 0xC) = r6;
        *(u8*)((char*)&temp_r4 + 0xD) = r5;
        *(u8*)((char*)&temp_r4 + 0xE) = r0;
        
        arg_ptr = (u32)temp_r4;
        fn_802217AC(&arg_ptr, 0xFFFFFF, r5, r6);
    }
}

void fn_801C7604(void) {
    M2C_UNK fn_80059A4C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80067984(M2C_UNK);
    M2C_UNK fn_80067EDC(M2C_UNK);
    fn_80067EDC(0);
    fn_80059A4C(0, 0, 0x260, 0x1C0);
    fn_80067984(0);
}

void fn_801C7644(s32 arg0) {
    u32 fn_80055D94(M2C_UNK);
    M2C_UNK fn_8005956C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32 *, s32, f32);
    M2C_UNK fn_800599D0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
    extern s32 lbl_8036B3E8;
    extern f32 lbl_8036B424;
    s32 sp8;

    sp8 = lbl_8036B3E8;
    fn_80067EDC(0);
    if (fn_80055D94(0x80) == 0U) {
        fn_800599D0(0, 0, 0x260, 0x1C0, arg0);
        fn_8005956C(0, 0, 0x260, 0x1C0, 1, &sp8, arg0, lbl_8036B424);
    }
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
    fn_80067984(0);
}

extern u8 lbl_802981D0[16];
void fn_801C777C(void) {
    fn_8000BF00(&lbl_802981D0);
    return;
}

void fn_801C77A4(void) {
    fn_8000CAF0((void*)&lbl_802981D0, 4);
}

void fn_801C7BF8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801C7C08(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801C7F60(void) {
    fn_801C7F80();
    return;
}

void fn_801C7FC0(u32 arg0) {
    M2C_UNK fn_801C7FE8();
    if (arg0 != 0U) {
        fn_801C7FE8();
    }
    return;
}

void fn_801C8490(void) {
    extern void *lbl_802983A4;
    fn_8005C8B4(*(s32*)((char*)&lbl_802983A4 + 4));
}

s32 fn_801C9704(void) {
    extern s32 lbl_803682AC;
    return lbl_803682AC;
}

s32 fn_801C970C(void) {
    extern s32 lbl_803682A8;
    return lbl_803682A8;
}

void fn_801C9714(void) {
    extern s32 lbl_803682A4;
    lbl_803682A4 &= 0xFFFFFFFE;
}

void fn_801C9724(void) {
    extern s32 lbl_803682A4;
    lbl_803682A4 |= 1;
}

s32 fn_801C98EC(void) {
    M2C_UNK fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    M2C_UNK fn_801CAF94(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    extern void *lbl_803682B8;
    void *temp_r31;

    temp_r31 = lbl_803682B8;
    fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430)));
    fn_801CAF94(0, 0, 0, 1);
    return 0;
}

s32 fn_801C9A88(void) {
    return 0;
}

s32 fn_801C9A90(void) {
    s32 fn_800DC3B0(s32);
    M2C_UNK fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    M2C_UNK fn_801C9EE0(void *, s32);
    M2C_UNK fn_801CACE4(s32);
    extern void *lbl_803682B8;
    s32 temp_r30;
    void *temp_r31;

    temp_r31 = lbl_803682B8;
    temp_r30 = fn_800DC3B0(M2C_FIELD(lbl_803682B8, s32 *, 0x438));
    fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430)));
    fn_801CACE4(temp_r30);
    fn_801C9EE0(lbl_803682B8, fn_8011C9E4(M2C_FIELD(lbl_803682B8, s32 *, 0x430)));
    return 0;
}

s32 fn_801C9C5C(void) {
    s32 fn_800DC3B0(s32, void *);
    s32 fn_8011C984(s32, s32);
    s32 fn_8011C9E4(s32);
    M2C_UNK fn_801CADBC(s32, s32);
    extern void *lbl_803682B8;
    s32 temp_r31_2;
    void *temp_r31;

    temp_r31 = lbl_803682B8;
    temp_r31_2 = fn_8011C984(M2C_FIELD(temp_r31, s32 *, 0x430), fn_8011C9E4(M2C_FIELD(temp_r31, s32 *, 0x430)));
    fn_801CADBC(temp_r31_2, fn_800DC3B0(M2C_FIELD(lbl_803682B8, s32 *, 0x438), lbl_803682B8));
    return 0;
}

s32 fn_801C9D58(void) {
    s32 fn_8011C9E4(s32);
    void fn_801C9EE0(void *, s32);
    extern void *lbl_803682B8;

    s32 temp_r3;
    temp_r3 = fn_8011C9E4(*(s32 *)((char *)lbl_803682B8 + 0x430));
    fn_801C9EE0(lbl_803682B8, temp_r3);
    return 0;
}

void fn_801CA1DC(void *arg0, s32 arg1) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_8011CAAC(s32, M2C_UNK *, s32);
    M2C_UNK fn_801CB280(M2C_UNK *);
    M2C_UNK sp8;

    fn_801CB280(&sp8);
    fn_8011CAAC(M2C_FIELD(arg0, s32 *, 0x430), &sp8, arg1);
    fn_800C9A60(&sp8, -1);
}

void fn_801CACE4(void *arg0, s32 arg1) {
    if (arg1 < *(s32*)((char*)arg0 + 0x70)) {
        s32 temp_r5 = *(s32*)((char*)arg0 + 0x50);
        fn_801CB7F0((char*)arg0 + 0x48, temp_r5 + (arg1 << 5), temp_r5);
        *(s32*)((char*)arg0 + 0x70) = *(s32*)((char*)arg0 + 0x70) - 1;
    }
}

s32 fn_801CAF2C(void *arg0, s32 arg1) {
    if (arg1 < (s32) M2C_FIELD(arg0, s32 *, 0x70)) {
        return M2C_FIELD(arg0, s32 *, 0x50) + (arg1 << 5);
    }
    return 0;
}

s32 fn_801CAF50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

void fn_801CAF58(void *arg0) {
    s32 fn_800E7F60(s32);
    M2C_FIELD(arg0, s32 *, 0x6C) = fn_800E7F60(M2C_FIELD(arg0, s32 *, 0));
}

s32 fn_801CAF8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

void fn_801CB25C(s32 arg0) {
    fn_800C9B6C(arg0 + 0x60);
}

void fn_801CB280(s32 arg1) {
    arg1 += 0x54;
    fn_800C9B6C(arg1);
}

void fn_801CC030(void *arg0) {
    u32 temp_r4;
    u32 temp_r5;
    u32 var_ctr;

    temp_r4 = M2C_FIELD(arg0, u32 *, 8);
    temp_r5 = temp_r4 + (M2C_FIELD(arg0, s32 *, 4) << 5);
    var_ctr = (u32) ((temp_r5 + 0x1F) - temp_r4) >> 5U;
    if (temp_r5 > temp_r4) {
        do {
            var_ctr -= 1;
        } while (var_ctr != 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_801CCEA8(void* arg0, int arg1) {
    short val1 = *(short*)((char*)arg0 + 0x48);
    short val2 = *(short*)((char*)arg0 + 0x4a);
    void* vtable_ptr = *(void**)((char*)arg0 + 0x3c);
    fn_801CD480((int)vtable_ptr, val1, val2);
}

void *fn_801CCF78(void) {
    extern u16 lbl_8027DD30[];
    return &lbl_8027DD30[0x11];
}

s32 fn_801CD3E4(void) {
    return 0x24;
}

s32 fn_801CD3EC(void) {
    return 0x24;
}

s16 fn_801CD3F4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x46);
}

s16 fn_801CD3FC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x42);
}

s16 fn_801CD404(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x44);
}

s16 fn_801CD40C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x40);
}

void fn_801CD508(s32 arg0) {
    extern u8 *lbl_802984C0;
    u8 **var_r0;
    u8 **var_r5;

    var_r0 = NULL;
    if (arg0 != 0) {

    } else {
        var_r0 = &lbl_802984C0;
    }
    var_r5 = var_r0;
loop_5:
    if ((s32) **var_r5 != 0xA) {
        var_r5 += 4;
        goto loop_5;
    }
}

void fn_801CDDC8(s32 arg0, s8 *arg1) {
    u32 *var_r31;

    var_r31 = (u32 *) (arg0 + 0x3C);
    *arg1 = 0;
    if ((u32) *var_r31 != 0U) {
        goto loop_2;
    }
    return;
loop_2:
    fn_802343E0(arg1, var_r31);
    var_r31 += 4;
    if ((u32) *var_r31 != 0U) {
        goto loop_2;
    }
}

void fn_801CEC28(s32 arg0) {
    M2C_UNK fn_8013FF00(s32, s32);
    s32 fn_8013FF94(M2C_UNK, M2C_UNK);
    fn_8013FF00(arg0, fn_8013FF94(0, 0));
}

void fn_801CF5A4(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *, s32);
    M2C_UNK spC;
    s16 temp_r8;
    s16 spA;
    s32 temp_r6;

    temp_r6 = *(s16 *)((u8 *)arg1 + 0x3C) * 0x22;
    temp_r8 = 5;
    spA = temp_r6 + 0xD;
    *arg0 = fn_8013F748(arg1, &spC, &temp_r8, temp_r6)[0];
}

s32 fn_801CF5FC(void *arg0) {
    extern u16 lbl_80298720[];
    s16 val = *(s16*)((u8*)arg0 + 0x3C);
    return lbl_80298720[val * 2];
}

s32 fn_801CF614(void *arg0) {
    s16 temp = *(s16 *)((u8 *)arg0 + 0x3C);
    if (temp == 0) {
        return 0;
    }
    return -1;
}

void fn_801CF92C(void *arg0) {
    void *temp_r4;
    u8 temp_r4_2;

    temp_r4 = (u16 *)&lbl_80331D00 + (M2C_FIELD(arg0, u8 *, 0x30) * 0x2B8);
    if (!(M2C_FIELD(temp_r4, s32 *, 8) & 1)) {
        fn_8000C188();
        return;
    }
    fn_801D15D4(temp_r4);
    temp_r4_2 = M2C_FIELD(arg0, u8 *, 0x30);
    fn_801D107C((u16 *)&lbl_80331D00 + (temp_r4_2 * 0x2B8), temp_r4_2);
}

void fn_801CFC4C(void *arg0, s16 arg1) {
    if (arg1 <= 0) {
        arg1 = 1;
    }
    *(u8 *)((u8 *)arg0 + 0x158) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x159) = 0;
    *(u16 *)((u8 *)arg0 + 0x154) = 0;
    *(u16 *)((u8 *)arg0 + 0x156) = arg1;
    *(u32 *)((u8 *)arg0 + 8) |= 2;
}

void fn_801CFC80(void *arg0, s16 arg1) {
    s16 var_r4;

    var_r4 = arg1;
    if (var_r4 <= 0) {
        var_r4 = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x158) = 0;
    M2C_FIELD(arg0, s8 *, 0x159) = 0xFF;
    M2C_FIELD(arg0, s16 *, 0x154) = 0;
    M2C_FIELD(arg0, s16 *, 0x156) = var_r4;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 2);
}

void fn_801CFD60(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s8 arg4) {
    s32 temp_r8;

    temp_r8 = arg1 * 8;
    temp_r8 += 0xEC;
    temp_r8 += arg0;
    *(u8 *)(temp_r8 + 0x0) = 1;
    *(u16 *)(temp_r8 + 0x2) = arg2;
    *(u16 *)(temp_r8 + 0x4) = arg3;
    *(u8 *)(temp_r8 + 0x6) = arg4;
    *(u8 *)(temp_r8 + 0x7) = 0;
}

void fn_801CFD8C(s32 arg0, s32 arg1, u8 arg2) {
    s32 temp_r4;

    temp_r4 = (arg1 * 0xE) + 0x60;
    if (arg2 != 0) {
        *(u8*)(arg0 + temp_r4) = *(u8*)(arg0 + temp_r4) | 2;
        return;
    }
    *(u8*)(arg0 + temp_r4) = *(u8*)(arg0 + temp_r4) & 0xFFFFFFFD;
}

void fn_801CFDBC(s32 arg0, s32 arg1) {
    s32 temp_r4;
    
    temp_r4 = (arg1 * 0xE) + 0x60;
    *(u8*)(arg0 + temp_r4) |= 1;
}

void fn_801CFE80(s32 arg0, s32 arg1) {
    u8 *temp_r4;

    temp_r4 = (u8 *)(arg0 + ((arg1 * 0xE) + 0x60));
    if ((s8)(*temp_r4) != 0) {
        *(temp_r4 + 1) = 0x63;
    }
}

void fn_801CFEA4(s32 arg0, s32 arg1) {
    u8 *ptr;
    s32 temp_r3;
    s32 temp_r4;

    fn_801CFEF4();
    temp_r3 = arg1 * 0xE;
    ptr = (u8 *)arg0 + temp_r3;
    temp_r4 = 3;
    ptr[0x61] = temp_r4;
    ptr[0x63] = 0x96;
}

void fn_801D0200(s8 *arg0) {
    s8 temp;
    
    temp = arg0[0x28];
    if (temp != 0) {
        arg0[0x28] = 5;
    }
    temp = arg0[0x30];
    if (temp != 0) {
        arg0[0x30] = 5;
    }
    arg0 += 0x10;
    temp = arg0[0x28];
    if (temp != 0) {
        arg0[0x28] = 5;
    }
    temp = arg0[0x30];
    if (temp != 0) {
        arg0[0x30] = 5;
    }
    temp = arg0[0x38];
    if (temp != 0) {
        arg0[0x38] = 5;
    }
    temp = arg0[0x40];
    if (temp != 0) {
        arg0[0x40] = 5;
    }
    temp = arg0[0x48];
    if (temp != 0) {
        arg0[0x48] = 5;
    }
}

void fn_801D027C(s32 arg0, s32 arg1) {
    s32 temp_r4;
    
    temp_r4 = (arg1 << 3);
    if ((s8)*(u8*)(arg0 + temp_r4 + 0x28) != 0) {
        *(u8*)(arg0 + temp_r4 + 0x28) = 5;
    }
}

void fn_801D03E4(void *arg0, s32 arg1, u8 arg2) {
    if (arg2 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | (0x800 << arg1));
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & ~(0x800 << arg1));
}

void fn_801D041C(void *arg0, u8 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) & 0xFFFFFFFB);
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 4);
}

void fn_801D0444(s32 arg0, s32 arg1) {
    if (arg1 >= 3) {
        return;
    }
    *(s16*)(arg0 + (arg1 * 2)) = 0;
    *(s16*)(arg0 + 0xE) = 0;
}

void fn_801D0460(void *arg0, s32 arg1) {
    if (arg1 < 3) {
        u32* field_ptr = (u32*)((char*)arg0 + 8);
        *field_ptr |= (0x100 << arg1);
    }
}

s32 fn_801D2A38(void *arg0) {
    s32 *var_r4;
    s16 var_r3;

    if ((u32) *(u32 *) ((char *) arg0 + 0x6C) == 0U) {
        return 0;
    }
    var_r4 = (s32 *) ((char *) arg0 + 0x74);
    var_r3 = *(s16 *) ((char *) arg0 + 0x4E);
    if (var_r3 >= 0) {
loop_2:
        while (var_r3 > 0) {
            var_r4 = (s32 *) *var_r4;
            var_r3 -= 1;
        }
    } else {
loop_3:
        while (var_r3 < 0) {
            var_r4 = (s32 *) *var_r4;
            var_r3 += 1;
        }
    }
    return fn_800BE890(*(s32 *) ((char *) var_r4 + 0x8));
}

void *fn_801D2C20(void) {
    extern u16 lbl_8027E0F8[];
    return &lbl_8027E0F8[0x12];
}

void *fn_801D2E40(void *arg0, s16 arg1) {
    void **ptr;
    if (arg0 != NULL) {
        ptr = (void **)((u8 *)arg0 + 4);
        if ((u32)*ptr != 0U) {
            fn_800616A0();
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801D2E9C(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1C0, 0);
}

s16 fn_801D2FC0(void *arg0) {
    s16 a = M2C_FIELD(arg0, s16 *, 0x16);
    s16 b = M2C_FIELD(arg0, s16 *, 0x12);
    return (s16) (a - b);
}

void fn_801D2FD4(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x58) = arg1;
}

s16 fn_801D2FDC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x58);
}

void *fn_801D322C(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *);
    void fn_801403F0(void);
    extern u16 lbl_802999D0[105];

    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_802999D0, arg0, lbl_802999D0);
    if (temp_r3 != NULL) {
        fn_801403F0();
        *(s32 *)((char *)temp_r3 + 0x40) = 0;
        *(s32 *)((char *)temp_r3 + 0x48) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
        *(s32 *)((char *)temp_r3 + 0x50) = 0;
        *(s32 *)((char *)temp_r3 + 0x4C) = 0;
    }
    return temp_r3;
}

void fn_801D3488(s32 arg0) {
    extern u8 lbl_803682D4;
    extern void *lbl_803682D0;
    extern u8 lbl_8027E148[];
    extern u8 lbl_80330708[];
    
    if ((s8) lbl_803682D4 == 0) {
        lbl_803682D4 = 1;
        lbl_803682D0 = &lbl_8027E148[0x65];
    }
    
    fn_80231D94(lbl_803682D0, &lbl_8027E148[0x76], lbl_80330708[0x10], &lbl_8027E148);
    fn_8011D79C(lbl_803682D0);
    fn_8000C188(arg0);
}

void fn_801D3508(s32 arg0) {
    extern u8 lbl_803682CC;
    extern void *lbl_803682C8;
    extern char lbl_8027E148[];
    extern u8 lbl_80330708[];
    
    if ((s8) lbl_803682CC == 0) {
        lbl_803682CC = 1;
        lbl_803682C8 = &lbl_8027E148[0x89];
    }
    
    fn_80231D94(lbl_803682C8, &lbl_8027E148[0x98], lbl_80330708[0x10]);
    fn_8011D79C(lbl_803682C8);
    fn_8000C188(arg0);
}

void fn_801D3588(void) {
    extern u16 lbl_802CA264[50];
    
    u16 *var_r4;
    s32 temp_r0;
    
    var_r4 = &lbl_802CA264[0x48 / sizeof(u16)];
    
loop_3:
    if (var_r4 == NULL) {
        fn_8000C070(3);
        return;
    }
    temp_r0 = var_r4[0x1A0 / sizeof(u16)];
    var_r4 = &var_r4[0x184 / sizeof(u16)];
    if (temp_r0 & 0x8000) {
        fn_8000C070(2);
        return;
    }
    goto loop_3;
}

void fn_801D3750(s32 arg0) {
    extern u8 lbl_803682C4;
    extern void *lbl_803682C0;
    extern u8 lbl_8027E148[];
    extern u8 lbl_80330708[];
    
    if ((s8)lbl_803682C4 == 0) {
        lbl_803682C4 = 1;
        lbl_803682C0 = &lbl_8027E148[0xB9];
    }
    
    fn_80231D94(lbl_803682C0, &lbl_8027E148[0xCA], lbl_80330708[0x10], &lbl_8027E148);
    fn_8011D908(lbl_803682C0, arg0);
}

void fn_801D37CC(void *arg0) {
    s32 fn_8003FCCC();
    M2C_UNK fn_80162054();
    M2C_UNK fn_801620AC();
    extern s32 lbl_80367110;
    fn_801620AC();
    M2C_FIELD(arg0, s32 *, 0x44) = fn_8003FCCC();
    fn_80162054();
    lbl_80367110 &= 0xFFFFFFFC;
}

void fn_801D3810(s32 arg0) {
    M2C_UNK fn_800C0BAC(s32);
    M2C_UNK fn_8013FE0C();
    extern void *lbl_80367240;
    s32 temp_r4;

    fn_8013FE0C();
    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r4 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4) & 0x1000) {
        fn_800C0BAC(arg0);
    }
}

s32 fn_801D3AE0(s32 arg0) {
    extern u16 lbl_80299CC4[];
    void *fn_8000CAA0(void *, s32, void *);
    
    fn_8000CAA0(lbl_80299CC4, arg0, lbl_80299CC4);
    *(u16 *)((char *)lbl_80299CC4 + 0x34) = 2;
    
    return 0;
}

void fn_801D3B7C(s32 arg0) {
    void *fn_8000CAA0(void *, s32, void *, void *, s32);
    extern u8 lbl_80299CC4[];
    extern u8 lbl_80331FB8[];
    extern s32 lbl_803682E0;
    
    *(s32*)(lbl_80331FB8 + 0x0) = -1;
    *(s32*)(lbl_80331FB8 + 0x4) = -1;
    *(u8*)(lbl_80331FB8 + 0x44) = 1;
    
    fn_8000CAA0(lbl_80299CC4, arg0, lbl_80299CC4, lbl_80331FB8, -1);
    
    *(s32*)(lbl_80331FB8 + 0x34) = 0;
    *(s32*)(&lbl_803682E0) = 0;
}

u8 fn_801D8840(void *arg0) {
    return (u8) (M2C_FIELD(arg0, u8 *, 0x16) == 0x20);
}

void fn_801D8854(void *arg0, u32 arg1) {
    M2C_UNK fn_801475FC(u32, M2C_UNK);
    M2C_FIELD(arg0, s16 *, 2) = 0x12C;
    if (arg1 != 0U) {
        fn_801475FC(arg1, 0x64);
    }
}

void fn_801D888C(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = arg1;
}

void fn_801D8894(void *arg0) {
    s16 *ptr = (s16 *)arg0;
    ptr[1] = 0x12C;
    ptr[2] = 0;
    ptr[3] = 0x18;
}

void fn_801D88B0(s8 *arg0, s8 arg1) {
    *arg0 = arg1;
}

void fn_801D8C0C(void *arg0, s16 arg1)
{
  memset(arg0, 0, 0x4C);
  *((s16 *) (((char *) arg0) + 2)) = 0;
  *((s16 *) (((char *) arg0) + 0)) = 0;
  *((s16 *) (((char *) arg0) + 8)) = arg1 ^ 0;
  *((s16 *) (((char *) arg0) + 2)) = 0x64;
}

void fn_801D8D58(void *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
}

void fn_801D8D68(void *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
}

void fn_801D8D78(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4) {
    s16 temp_r8;
    s16 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s16 *, 0xA);
    temp_r8 = M2C_FIELD(arg0, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 1);
    if (arg3 != 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 2);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) & 0xFFFFFFFD);
    }
    if (arg4 != 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 4);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) & 0xFFFFFFFB);
    }
    M2C_FIELD(arg0, s16 *, 2) = 0xC8;
    M2C_FIELD(arg0, s16 *, 0xC) = temp_r8;
    M2C_FIELD(arg0, s16 *, 8) = temp_r8;
    M2C_FIELD(arg0, s16 *, 0xE) = temp_r9;
    M2C_FIELD(arg0, s16 *, 0xA) = temp_r9;
    M2C_FIELD(arg0, s16 *, 0x10) = arg1;
    M2C_FIELD(arg0, s16 *, 0x12) = arg2;
    M2C_FIELD(arg0, s16 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 4;
}

void fn_801D8E08(s16 *arg0) {
    *arg0 &= 0xFFFFFFFE;
}

void fn_801D8E18(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 1);
    if (arg3 != 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 2);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) & 0xFFFFFFFD);
    }
    if (arg4 != 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 4);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) & 0xFFFFFFFB);
    }
    M2C_FIELD(arg0, s16 *, 2) = 0x64;
    M2C_FIELD(arg0, s16 *, 8) = arg1;
    M2C_FIELD(arg0, s16 *, 0xA) = arg2;
}

s32 fn_801DBFF8(void) {
    return 0;
}

void *fn_801DC0CC(void) {
    void *fn_801E09B4(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    void *temp_r3;

    temp_r3 = fn_801E09B4(&lbl_803682F0);
    if ((temp_r3 != NULL) && ((u8) M2C_FIELD(temp_r3, u8 *, 0x60) == 3)) {
        return temp_r3;
    }
    return NULL;
}

void fn_801DC150(s32 arg0, s8 arg1, s8 arg2, s32 arg3, s32 arg4, s8 arg5, void *arg6) {
    void *fn_8000CAA0(M2C_UNK *, void *, M2C_UNK *);
    extern M2C_UNK lbl_80299C88;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80299C88, arg6, &lbl_80299C88);
    M2C_FIELD(temp_r3, void **, 0x30) = (void *) M2C_FIELD(arg6, void **, 0x30);
    M2C_FIELD(temp_r3, s32 *, 0x34) = arg0;
    M2C_FIELD(temp_r3, s8 *, 0x3C) = arg1;
    M2C_FIELD(temp_r3, s32 *, 0x40) = arg3;
    M2C_FIELD(temp_r3, s32 *, 0x38) = arg4;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), s8 *, 0x14) = arg2;
    M2C_FIELD(temp_r3, s8 *, 0x44) = arg5;
}

void fn_801DC1C8(void *arg0) {
    void *temp_r4;
    s32 temp_r0;

    temp_r4 = *(void**)((char*)arg0 + 0x30);
    *(u8*)((char*)temp_r4 + 0x332) = 0xC8;
    temp_r0 = (*(s32*)((char*)arg0 + 0x40) * 0x14) + 0x51A;
    *(s16*)((char*)temp_r4 + temp_r0) = (*(s16*)((char*)temp_r4 + temp_r0)) & 0xFFFFFFFE;
}

void fn_801DDAC8(void *arg0) {
    M2C_UNK fn_801DC588();
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 2);
    switch (temp_r0) {                              /* irregular */
    case 0x0:
        M2C_FIELD(arg0, s16 *, 0) = 0;
        break;
    case 0x64:
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 1);
        M2C_FIELD(arg0, s16 *, 2) = 0x6E;
        /* fallthrough */
    case 0x6E:
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, s16 *, 0x1E) + 1);
        if ((s16) M2C_FIELD(arg0, s16 *, 0x1E) >= 5) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 5;
        }
        break;
    case 0xC8:
        M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) | 1);
        M2C_FIELD(arg0, s16 *, 2) = 0xD2;
        /* fallthrough */
    case 0xD2:
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, s16 *, 0x1E) - 1);
        if ((s16) M2C_FIELD(arg0, s16 *, 0x1E) < 1) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
            M2C_FIELD(arg0, s16 *, 2) = 0;
            M2C_FIELD(arg0, s16 *, 0) = 0;
        }
        break;
    }
    fn_801DC588();
}

extern void *lbl_801D3B14;
#pragma use_lmw_stmw on
void fn_801DDBA8(MsgBox *w, s32 arg1, u8 arg2, u8 arg3, s16 arg4) {
    void *memset(void *, s32, u32);
    void *memcpy(void *, const void *, u32);
    char *fn_8000E0E4(s32);
    s32 fn_80010B78(char *, s32, f32);
    M2C_UNK fn_801DC588();
    s32 n;
    char *s;
    char *start;
    s32 len;
    f32 width;
    s32 padA;
    s32 padB;

    memset(w, 0, sizeof(MsgBox));
    w->state = 0;
    w->flags = 0;
    w->timer = 0;
    w->state = 100;
    w->type = arg4;
    if (arg3) {
        w->flags |= 4;
    } else {
        w->flags &= ~4;
    }
    w->width = 200;
    if (w->type == 1 || w->type == 2 || w->type == 3) {
        w->width = 400;
    }
    s = fn_8000E0E4(arg1);
    n = len = 0;
    start = s;
    for (;;) {
        if (*s == 0 || *s == '\n') {
            if (len > 0) {
                memcpy(w->lines[n], start, len);
            }
            w->lines[n][len] = 0;
            width = fn_80010B78(w->lines[n], -1, 1.0f);
            if (width > w->width) {
                w->width = width;
            }
            n++;
            if (*s == 0) {
                break;
            }
            s++;
            len = 0;
            start = s;
        } else {
            s++;
            len++;
        }
    }
    w->numLines = n;
    w->width += 0x18;
    padA = arg2 ? 20 : 0;
    padB = (w->flags & 4) ? 40 : 0;
    w->height = 32 + w->numLines * 20 + padA + padB;
    if (w->type == 1 || w->type == 2) {
        w->height += 0x88;
    }
    if (w->type == 3) {
        w->height += 10;
    }
    if (arg2) {
        w->flags |= 2;
    }
    fn_801DC588(w);
}
#pragma opt_loop_invariants reset

void fn_801DDDE8(s32 arg0) {
    void *fn_8000CAA0(M2C_UNK *, M2C_UNK *);
    extern M2C_UNK lbl_80299C74;
    extern f32 lbl_8036B634;
    extern f64 lbl_8036B670;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80299C74, &lbl_80299C74);
    M2C_FIELD(temp_r3, f32 *, 0x30) = lbl_8036B634;
    *(f32*)((char*) temp_r3 + 0x34) = (f32) arg0;
}

void fn_801DDE44(void *arg0) {
    extern f32 lbl_8036B630;
    *(f32*)((char*)arg0 + 0x30) += lbl_8036B630;
    
    if (*(f32*)((char*)arg0 + 0x30) == *(f32*)((char*)arg0 + 0x34)) {
        fn_8000C188();
    }
}

void fn_801DE074(void) {
    M2C_UNK fn_8000BF00(M2C_UNK *);
    M2C_UNK fn_8006EDA0(void *);
    extern M2C_UNK lbl_80299A78;
    extern M2C_UNK lbl_80299C58;
    M2C_UNK *var_r30;
    s32 var_r29;

    fn_8000BF00(&lbl_80299C58);
    var_r29 = 0;
    var_r30 = &lbl_80299A78;
    do {
        if ((u32) M2C_FIELD(var_r30, u32 *, 8) != 0U) {
            fn_8006EDA0(var_r30 + 8);
        }
        var_r29 += 1;
        M2C_FIELD(var_r30, u32 *, 8) = 0U;
        var_r30 += 0xC;
    } while (var_r29 < 0x28);
}

#pragma use_lmw_stmw reset
void fn_801DE2FC(s32 arg0) {
    u8 fn_8005BB2C();
    if (fn_8005BB2C() != 0) {
        fn_8000C188(arg0);
    }
}

void fn_801DE338(void *arg0) {
    *(s32*)((char*)arg0 + 0x0) = -1;
    *(s32*)((char*)arg0 + 0x4) = -1;
    *(s8*)((char*)arg0 + 0x44) = 1;
}

u8 fn_801DE350(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x63);
}

u8 fn_801DE358(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x47);
}

s32 fn_801DE360(void) {
    return 1;
}

u8 fn_801DE368(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x64);
}

s32 fn_801DE370(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

void fn_801DE378(void *arg0)
{
  memset(arg0, 0, 0x1EA);
  *((s16 *) arg0) = (*(((s16 *) arg0) + 1) = 0);
  *(((s16 *) arg0) + 0xF) = 0;
}

void fn_801DE3BC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x1E8) = arg1;
}

void fn_801DE3C4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = 0xC8;
}

u8 fn_801DE3D0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x10);
}

void fn_801DF4A4(void *arg0, s32 arg1) {
    struct Color {
        u8 r, g, b, a;
    };
    void fn_80161AA8(s32, s32, s16, s32, s32, struct Color *);
    s16 h;
    struct Color col;

    h = M2C_FIELD(arg0, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x12);
    col.r = 0x80;
    col.g = 0x78;
    col.b = 0x50;
    col.a = 0xE6;
    fn_80161AA8(0x10, arg1, h - 0x10, arg1, 0x10, &col);
}

extern u8 lbl_80299F4C[16];
void fn_801DF5D8(void) {
    fn_8000CAA0(&lbl_80299F4C);
}

extern u8 lbl_80299F1C[16];
void fn_801E00EC(void) {
    fn_8000CAA0(&lbl_80299F1C);
}

void fn_801E0114(s32 arg0) {
    u8 fn_800EB788(void);
    void fn_801E0154(void *, s32);
    extern u32 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E0154(&lbl_803682F0, arg0);
}

void fn_801E0B48(s32 arg1, s32 arg2, s32 arg3) {
    void *fn_8000CAA0(M2C_UNK *, s32);
    extern M2C_UNK lbl_80299ED8;
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80299ED8, arg3);
    *(s32 *) ((u8 *) temp_r3 + 0x60) = arg1;
    *(s32 *) ((u8 *) temp_r3 + 0x64) = arg2;
}

void fn_801E0D30(void *arg0) {
    u8 fn_800EB788(void);
    void fn_801E0D78(void *, void *, s32, s32);
    extern u32 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E0D78(&lbl_803682F0, arg0, *(s32 *) ((u8 *) arg0 + 0x60), *(s32 *) ((u8 *) arg0 + 0x64));
}

void fn_801E1168(void *arg0) {
    u8 fn_800EB788(void);
    void fn_801E11AC(void *, void *, s32);
    extern u32 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E11AC(&lbl_803682F0, arg0, *(s32 *) ((u8 *) arg0 + 0x60));
}

void fn_801E1440(s32 arg0, s32 arg1, s32 arg2) {
    void fn_8014D698(void *, s32, u8, u8, s32);
    extern u8 lbl_80330708[];
    extern s32 lbl_80331FB8[];

    fn_8014D698(lbl_80330708, 0, arg1, arg2, 1);
    lbl_80331FB8[0] = -1;
    lbl_80331FB8[1] = -1;
    ((u8 *) lbl_80331FB8)[0x44] = 1;
}

void fn_801E204C(void *arg0) {
    extern M2C_UNK lbl_80330708;
    void *temp_r5;

    if (((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x54) == 4) && ((u8) M2C_FIELD(&lbl_80330708, u8 *, 0x10) != 0x20)) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x54);
        M2C_FIELD(temp_r5, u8 *, 0x64) = (u8) M2C_FIELD(&lbl_80330708, u8 *, 0x51E);
        M2C_FIELD(temp_r5, s8 *, 0x65) = 9;
    }
}

void fn_801E2084(s32 arg0) {
    u8 fn_800EB788(void);
    void fn_801E1CB4(void *, s32);
    extern u32 lbl_803682F0;

    if (fn_800EB788() != 0) {
        return;
    }

    fn_801E1CB4(&lbl_803682F0, arg0);
}

void fn_801E218C(void) {
    fn_800EB788();
    if (0) {
        // Dummy to add the clrlwi. r0, r3, 24 instruction
    }
}

void fn_801E21B0(void *arg0) {
    void *temp_r6;
    s32 temp_r5;

    temp_r6 = *(void **)((char *)arg0 + 0x54);
    temp_r5 = *(s32 *)((char *)arg0 + 0x4C);
    fn_800E9B80(temp_r6, temp_r6, temp_r5, temp_r5, arg0);
}

s32 fn_801E2568(s32 *arg0, s32 arg1) {
    return ((arg1 * 0x6000) + 0x20000 + *arg0) - 0x6000;
}

s32 fn_801E2580(s32 *arg0, s32 arg1) {
    s32 temp_r3 = (arg1 << 0xE) + *arg0;
    return temp_r3 + 0x2000;
}

void fn_801E2594(u32 *arg0) {
    extern u16 lbl_8027E980[];
    if ((u32) *arg0 != 0U) {
        u16 *temp = &lbl_8027E980[0x122];
        fn_800056CC(temp);
        fn_800C4588(*arg0);
        *arg0 = 0U;
    }
}

void fn_801E25EC(void) {
    extern u16 lbl_8027E980[];
    u16* addr = &lbl_8027E980[0x181];
    fn_800056CC(addr);
    fn_800E9A94();
}

void fn_801E2F9C(s32 *arg0, s32 arg1) {
    extern u16 lbl_8027E980[];
    s32 fn_800056CC(void *, void *);
    s32 fn_800C4604(s32, s32, void *, s32);
    s32 fn_800EA540(s32, s32);

    s32 r30 = (s32)lbl_8027E980;
    fn_800056CC(&lbl_8027E980[0x137], &lbl_8027E980);
    *arg0 = fn_800C4604(0, 0xFFFDA000, &lbl_8027E980[0x14E], 0);
    fn_800EA540(*arg0, arg1);
}

void fn_801E3214(void *arg0) {
    M2C_UNK fn_800EA540(s32, void *);
    fn_800EA540(M2C_FIELD(arg0, s32 *, 0x54), arg0);
}

void fn_801E323C(s32 *arg0, s32 arg1) {
    M2C_UNK fn_800056CC(void *, M2C_UNK *);
    void *fn_8000CAA0(M2C_UNK *, s32);
    extern M2C_UNK lbl_8027E980;
    extern M2C_UNK lbl_80299DC8;
    fn_800056CC(&lbl_8027E980 + 0x197, &lbl_8027E980);
    M2C_FIELD(fn_8000CAA0(&lbl_80299DC8, arg1), s32 *, 0x54) = (s32) *arg0;
}

void fn_801E329C(void *arg0) {
    M2C_UNK fn_800EA7CC(s32, void *);
    fn_800EA7CC(M2C_FIELD(arg0, s32 *, 0x54), arg0);
}

void fn_801E32C4(s32 arg1) {
    extern u16 lbl_8027E980[];
    u16* temp = &lbl_8027E980[0x1AD];
    fn_800056CC(temp);
    fn_800E9AE4(arg1);
}

u8 fn_801E3308(s32 arg0) {
    u8 *ptr = (u8*) arg0;
    s32 count = 0;
    s32 i, j;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 10; j++) {
            if (ptr[0x12 + j] != 0) {
                count++;
            } else {
                break;
            }
        }
        ptr += 0xA;
    }
    
    return (u8) (count + 1);
}

s32 fn_801E33F4(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x10) & 1;
}

void fn_801E3560(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0x40) = arg1;
    M2C_FIELD(arg0, s8 *, 0x41) = arg2;
    M2C_FIELD(arg0, s8 *, 0x42) = arg3;
}

s32 fn_801E3570(s32 arg0, void *arg1) {
    u8 fn_80105BC0(s32, u8);
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg1, u16 *, 0x18);
    if (temp_r0 >= 0x80U) {
        return 0;
    }
    return fn_80105BC0(arg0 + 0x30, (u8) temp_r0) != 0;
}

void fn_801E35BC(s32 arg0, s32 arg1) {
    M2C_UNK fn_80105D4C(s32, u8);
    if (arg1 < 0x80) {
        fn_80105D4C(arg0 + 0x30, (u8) arg1);
    }
}

void fn_801E35EC(s32 arg0, void *arg1) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg1, u16 *, 0x18);
    if (temp_r0 < 0x80U) {
        fn_80105D4C(arg0 + 0x30, (u8) temp_r0);
    }
}

s32 fn_801E3620(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0) + 0xACA70000) != 0x5346U) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 4) == 0x20050201;
}

s32 fn_801E417C(void *arg0) {
    s32 temp_r3;
    s32 temp_r0;

    temp_r3 = *(s32 *)((u8 *)arg0 + 0x48);
    temp_r0 = 0x100000 - temp_r3;
    return temp_r3 & ~(temp_r0 | (temp_r0 - 1));
}

s32 fn_801E434C(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x40) + 0xB9BB0000) != 0x384AU) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x44) == 0x20050201;
}
extern u16 lbl_80299E10;
extern u8 lbl_80331FB8[];
#include "global.h"

extern void *lbl_803682B8;
