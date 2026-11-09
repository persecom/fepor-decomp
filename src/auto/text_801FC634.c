/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
extern s32 lbl_803682F0;
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

static u32 lbl_803392E8[8];
static u32 lbl_80339308[8];
static s16 lbl_80339328[8];
static s16 lbl_80339338[8];

void fn_801FC790(void *arg0) {
    u8 fn_8005BA10(void *);
    void fn_8000C188(void *);
    
    if (!fn_8005BA10(lbl_802820B8 + 0x53)) {
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    fn_8000C188(arg0);
}

void fn_801FC95C(void) {
    M2C_UNK fn_8006EDA0(M2C_UNK *);
    extern M2C_UNK lbl_80368418;
    fn_8006EDA0(&lbl_80368418);
}

void fn_801FCC44(void) {
    M2C_UNK fn_8006EDA0(M2C_UNK *);
    extern M2C_UNK lbl_80368418;
    fn_8006EDA0(&lbl_80368418);
}

void fn_801FCC68(s32 arg0) {
    u32 fn_8000CAF0(void *, s32, void *);
    void fn_801FCCA0(void);
    extern u16 lbl_8029B574[];
    
    u16* ptr = lbl_8029B574;
    if (fn_8000CAF0(ptr, arg0, ptr) != 0U) {
        fn_801FCCA0();
    }
}

extern s32 lbl_803679F0;
void fn_801FDA40(void) {
    void fn_8006EEFC(void *, void *);
    extern u32 lbl_80368418;
    extern char lbl_80281EC8[];
    fn_8006EEFC(&lbl_80368418, lbl_80281EC8 + 0x13);
}

void fn_801FDE64(void) {
    M2C_UNK fn_8006EDA0(M2C_UNK *);
    extern M2C_UNK lbl_80368418;
    fn_8006EDA0(&lbl_80368418);
}

void fn_801FDE88(void) {
    void fn_8006EEFC(void *, void *);
    extern u32 lbl_80368418;
    extern char lbl_80281EC8[];
    fn_8006EEFC(&lbl_80368418, lbl_80281EC8 + 0x13);
}

void fn_801FDEB8(void) {
    M2C_UNK fn_801FDED8();
    fn_801FDED8();
}

extern u16 lbl_8029B634[10];
s32 fn_801FE32C(void) {
    return fn_8000C0C0(&lbl_8029B634) != 0;
}

void fn_801FE3DC(void *arg0) {
    void fn_8003F670(u32);
    extern u32 lbl_80368438;
    if (lbl_80368438 != 0) {
        fn_8006EDA0(&lbl_80368438);
    }
    if (M2C_FIELD(arg0, u32 *, 0x44) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0;
    }
}

s32 fn_801FE430(void) {
    extern s32 lbl_803682A4;
    u32 temp = lbl_803682A4;
    temp &= 0x20;
    if (temp == 0) {
        return 1;
    }
    return 0;
}

void fn_801FE444(void) {
    extern void *lbl_80281F00;
    fn_8005C870((char *)&lbl_80281F00 + 0x4D, 0);
    fn_8005C870((char *)&lbl_80281F00 + 0x64, 0);
}

#pragma opt_common_subs off
void fn_801FE488(void *arg0) {
    u8 fn_8005BA10(void *);
    u32 fn_8003FCCC(void *);
    void fn_8000C188(void *);
    void fn_8006EEFC(void *, void *);
    extern u8 lbl_80281F00[];
    extern u32 lbl_80368438;

    if (!fn_8005BA10(lbl_80281F00 + 0x4D) || !fn_8005BA10(lbl_80281F00 + 0x64)) {
        return;
    }
    if (lbl_80368438 == 0) {
        fn_8006EEFC(&lbl_80368438, lbl_80281F00 + 0x4D);
    }
    M2C_FIELD(arg0, u32 *, 0x44) = fn_8003FCCC(lbl_80281F00 + 0x64);
    fn_8000C188(arg0);
}
#pragma opt_common_subs reset
void fn_801FE520(void *arg0) {
    M2C_UNK fn_8000E0E4(s32);
    s16 fn_800102BC(M2C_UNK, f32);
    s16 fn_80010B78(M2C_UNK, f32);
    extern f32 lbl_8036BB58;
    s16 temp_r31;
    s16 temp_r3;

    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 0x34));
    temp_r31 = fn_80010B78(-1, lbl_8036BB58);
    temp_r3 = fn_800102BC(-1, lbl_8036BB58);
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) (temp_r31 + 0x20);
    M2C_FIELD(arg0, s16 *, 0x40) = (s16) (temp_r3 + 0x40);
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) ((s32) (0x260 - M2C_FIELD(arg0, s16 *, 0x3E)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) ((s32) (0x1C0 - M2C_FIELD(arg0, s16 *, 0x40)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x3C) = 0xA;
}

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
    s32 v = fn_8000C0C0(lbl_8029B5DC);
    return v != 0;
}

void *fn_801FEFA0(void) {
    void *fn_8000CAF0(M2C_UNK *, M2C_UNK);
    s32 fn_800C4304(void *, M2C_UNK *);
    s32 fn_800C4740();
    extern M2C_UNK lbl_80281F00;
    extern M2C_UNK lbl_8029B5DC;
    void *temp_r31;

    temp_r31 = fn_8000CAF0(&lbl_8029B5DC, 3);
    M2C_FIELD(temp_r31, s32 *, 0x34) = fn_800C4740();
    M2C_FIELD(temp_r31, s32 *, 0x38) = fn_800C4304(&lbl_80281F00 + 0x75, &lbl_80281F00);
    return temp_r31;
}

void fn_801FEFF8(void *arg0) {
    void fn_8003F670(u32);
    extern u32 lbl_80368438;
    if (lbl_80368438 != 0) {
        fn_8006EDA0(&lbl_80368438);
    }
    if (M2C_FIELD(arg0, u32 *, 0x30) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0;
    }
}

void fn_801FF060(void *arg0) {
    s32 temp_r3;

    temp_r3 = *(s32 *)((char *)arg0 + 0x48);
    if (temp_r3 != 0) {
        *(s32 *)((char *)arg0 + 0x48) = temp_r3 - 1;
    }
}

void fn_801FF0F8(void *arg0) {
    s32 temp_r3;

    temp_r3 = *(s32 *)((char *)arg0 + 0x48);
    if (temp_r3 != 0) {
        *(s32 *)((char *)arg0 + 0x48) = temp_r3 - 1;
    }
}

void fn_801FF33C(void) {

}

void fn_801FF3AC(void *arg0) {
    M2C_UNK fn_8013CD7C();
    fn_8013CD7C();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x258;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

void fn_801FF3E8(void *arg0) {
    s32 r5;
    
    fn_8013CD7C();
    r5 = *(s32*)((char*)arg0 + 0x28);
    r5 = r5 + 1;
    *(s32*)((char*)arg0 + 0x28) = r5;
    
    if (r5 < *(s32*)((char*)arg0 + 0x2C)) {
        return;
    }
    
    // Call the complex function
    fn_80166D8C();
}

void fn_801FF480(void *arg0) {
    M2C_UNK fn_801FE84C(M2C_UNK, M2C_UNK, s32, s32, s32 *);
    extern s32 lbl_8036BB50;
    s32 sp8;
    s32 temp_r31;

    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(), 0x80)();
    sp8 = lbl_8036BB50;
    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(void *), 0x54)(arg0);
    fn_801FE84C(0, 0, M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(void *), 0x50)(arg0), temp_r31, &sp8);
}

s32 fn_801FFD00(const char *fmt, ...) {
    return 0;
}

s32 fn_801FFD54(void) {
    return 0;
}

s32 fn_801FFD5C(void) {
    return 0;
}

s32 fn_801FFD64(void) {
    return 0;
}

s32 fn_801FFD6C(void) {
    return 0;
}

s32 fn_801FFD74(void) {
    return 0;
}

void fn_801FFD7C(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_8029B748[16];
    fn_8000CAA0(lbl_8029B748, arg0);
}

void fn_801FFDA8(void)
{
    fn_8000A258();
    fn_80009D74(0.0f, 0.0f, 0.0f, 1.0f);
    fn_8000A174(0, 0x10);
    fn_8000A248();
    fn_8000A258();
    fn_80007898(1);
    fn_800077D8(0.0f, 0.0f, 0.0f, 0.0f);
    fn_800076AC(0, 0, 0, 0xc0);
    fn_80007884();
    fn_8000A258();
    fn_80009D74(0.0f, 0.0f, 0.0f, 1.0f);
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_8001019C(0x40, 0x40, 0x33, 0x1, 0x0);
    fn_8001019C(0x40, 0x60, 0x58, 0x1, 0x0);
}

void fn_801FFE8C(void) {
    M2C_UNK fn_801E2594(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E2594(&lbl_803682F0);
}

void fn_801FFF08(s32 arg0) {
    fn_801E2F9C(&lbl_803682F0, arg0);
}

#pragma use_lmw_stmw on
void fn_802001F8(u32 arg0, s32 arg1) {
    void fn_8006EDA0(void *);
    s32 i;

    for (i = 0; i < 8; i++) {
        if (lbl_803392E8[i] >= arg0 && arg0 + arg1 > lbl_803392E8[i]) {
            fn_8006EDA0(&lbl_803392E8[i]);
            lbl_80339308[i] = 0;
        }
    }
}
#pragma use_lmw_stmw reset

void fn_80200270(void *arg0) {
    u32 *fn_8000D2BC(void *);
    s32 i;
    u32 *p;

    p = fn_8000D2BC(arg0);
    for (i = 0; i < 8; i++) {
        if (*p == lbl_80339308[i]) {
            lbl_80339328[i] = 2;
            lbl_80339338[i]--;
            return;
        }
    }
}

#pragma use_lmw_stmw on
void fn_802003FC(void) {
    void fn_8006EDA0(void *);
    s32 i;

    for (i = 0; i < 8; i++) {
        if (lbl_803392E8[i] != 0 && lbl_80339338[i] == 0) {
            if (--lbl_80339328[i] == 0) {
                fn_8006EDA0(&lbl_803392E8[i]);
                lbl_80339308[i] = 0;
            }
        }
    }
}
#pragma use_lmw_stmw reset

extern u16 lbl_8029B7FC[10];
s32 fn_8020055C(void) {
    return fn_8000C0C0(&lbl_8029B7FC) != 0;
}

void *fn_80200590(void) {
    void *fn_8000CAF0(void *, s32);
    extern s32 lbl_803682A4;
    void *temp;

    if (lbl_803682A4 & 0x20) {
        return NULL;
    }
    if (lbl_803682A4 & 0x100) {
        temp = fn_8000CAF0(lbl_8029B7FC, 3);
        M2C_FIELD(temp, u8 **, 0x34) = lbl_802820B8 + 0x2B;
        return temp;
    }
    temp = fn_8000CAF0(lbl_8029B7FC, 3);
    M2C_FIELD(temp, u8 **, 0x34) = lbl_802820B8 + 0x3F;
    return temp;
}

void fn_8020060C(void *arg0) {
    void fn_8003F670(u32);
    extern u32 lbl_80368448;
    if (lbl_80368448 != 0) {
        fn_8006EDA0(&lbl_80368448);
    }
    if (M2C_FIELD(arg0, u32 *, 0x44) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0;
    }
}

void fn_80200674(void) {
    void fn_8005C870(void *, s32);
    fn_8005C870(lbl_802820B8 + 0x53, 0);
    fn_8005C870(lbl_802820B8 + 0x68, 0);
}

#pragma opt_common_subs off
void fn_802006B8(void *arg0) {
    u8 fn_8005BA10(void *);
    u32 fn_8003FCCC(void *);
    void fn_8000C188(void *);
    void fn_8006EEFC(void *, void *);

    if (!fn_8005BA10(lbl_802820B8 + 0x53) || !fn_8005BA10(lbl_802820B8 + 0x68)) {
        return;
    }
    if (lbl_80368448 == 0) {
        fn_8006EEFC(&lbl_80368448, lbl_802820B8 + 0x53);
    }
    M2C_FIELD(arg0, u32 *, 0x44) = fn_8003FCCC(lbl_802820B8 + 0x68);
    fn_8000C188(arg0);
}
#pragma opt_common_subs reset
void fn_80200750(void *arg0) {
    extern f32 lbl_8036BBD8;
    s16 temp_r3;
    register s16 temp_r31;

    fn_8000E0E4(M2C_FIELD(arg0, s32 *, 0x34));
    temp_r31 = fn_80010B78(-1, lbl_8036BBD8);
    temp_r3 = fn_800102BC(-1, lbl_8036BBD8);
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) (temp_r31 + 0x20);
    M2C_FIELD(arg0, s16 *, 0x40) = (s16) (temp_r3 + 0x40);
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) ((s32) (0x260 - M2C_FIELD(arg0, s16 *, 0x3E)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) ((s32) ((int)0x1C0 - M2C_FIELD(arg0, s16 *, 0x40)) >> 1);
    M2C_FIELD(arg0, s16 *, 0x3C) = 0xA;
}

void fn_802007E0(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80009C20(f32, f32, f32, f32, f32, f32, f32, f32);
    void fn_80009B8C(s32);
    void fn_80009B80(s32);
    void fn_80009C0C(f32);
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
    f32 temp_f31;
    f32 var_f1;
    f32 var_f3;
    s32 temp_r3;
    s32 temp_r3_2;
    u8 temp_r0;
    u8 temp_r0_2;

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
    temp_f31 = fn_800067BC(5, lbl_8036BBE0, lbl_8036BBD8, var_f3, lbl_8036BBD8);
    fn_8000A258();
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
    fn_80009B8C((s32) (lbl_8036BBE4 * var_f1));
    fn_80009B80(0x80);
    fn_8000A248();
    sp8 = lbl_8036BBD4;
    fn_80200A7C(0, 0, M2C_FIELD(arg0, s16 *, 0x3E), M2C_FIELD(arg0, s16 *, 0x40), &sp8);
    fn_8000A258();
    fn_80009C0C(lbl_8036BBE8);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    fn_8001003C(0x10, 0x20, 1, 1, 0, (void *) fn_8000E0E4(M2C_FIELD(arg0, s32 *, 0x34)), lbl_8036BBD8, lbl_8036BBE0);
    fn_8000A258();
    fn_80009C0C(lbl_8036BBEC);
    fn_8000A248();
}

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
    return fn_8000C0C0(&lbl_8029B7A4) != 0;
}

void *fn_802011D0(void) {
    void *fn_8000CAF0(void *, s32);
    s32 fn_800C4740(void);
    s32 fn_800C4304(void *);
    void *temp_r31;

    temp_r31 = fn_8000CAF0(lbl_8029B7A4, 3);
    M2C_FIELD(temp_r31, s32 *, 0x34) = fn_800C4740();
    M2C_FIELD(temp_r31, s32 *, 0x38) = fn_800C4304(lbl_802820B8 + 0x79);
    return temp_r31;
}

void fn_80201228(void *arg0) {
    void fn_8003F670(u32);
    extern u32 lbl_80368448;
    if (lbl_80368448 != 0) {
        fn_8006EDA0(&lbl_80368448);
    }
    if (M2C_FIELD(arg0, u32 *, 0x30) != 0) {
        fn_8003F670(M2C_FIELD(arg0, u32 *, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0;
    }
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
    u8 fn_8005BA10(void *);
    u32 fn_8003FCCC(void *);
    void fn_8000C188(void *);
    void fn_8006EEFC(void *, void *);

    if (!fn_8005BA10(lbl_802820B8 + 0x53) || !fn_8005BA10(lbl_802820B8 + 0x68)) {
        return;
    }
    if (lbl_80368448 == 0) {
        fn_8006EEFC(&lbl_80368448, lbl_802820B8 + 0x53);
    }
    M2C_FIELD(arg0, u32 *, 0x30) = fn_8003FCCC(lbl_802820B8 + 0x68);
    fn_8000C188(arg0);
}

void fn_80201534(void) {
    extern u8 lbl_802EF4C8[];
    extern s32 lbl_803682A4;
    extern void fn_80209AE8(s32);
    
    u8 temp_r0 = lbl_802EF4C8[8];
    switch ((s32)temp_r0) {
        case 0x81:
            lbl_803682A4 |= 0x100;
            fn_80209AE8(1);
            return;
        case 0x80:
            lbl_803682A4 &= 0xFFFFFEFF;
            fn_80209AE8(0);
            return;
    }
}

#pragma opt_common_subs reset

void fn_802015A0(void) {

}

void fn_80201610(void *arg0) {
    fn_8013CD7C();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x258;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

s32 fn_802016E4(void) {
    return 0x9C;
}

void fn_80201FF0(void *src, void *dst) {
    f32 (*s)[4] = src;
    f32 (*d)[4] = dst;

    d[0][0] = s[0][0];
    d[0][1] = s[0][1];
    d[0][2] = s[0][2];
    d[0][3] = s[0][3];
    d[1][0] = s[1][0];
    d[1][1] = s[1][1];
    d[1][2] = s[1][2];
    d[1][3] = s[1][3];
}

void fn_80202024(f32* mtx, f32* vec, f32* out) {
    // Matrix (4x3) multiplied by vector (3-element) producing 4-element result
    // Using PowerPC SIMD instructions approach
    
    out[0] = mtx[0] * vec[0] + mtx[1] * vec[1] + mtx[2] * vec[2];
    out[1] = mtx[3] * vec[0] + mtx[4] * vec[1] + mtx[5] * vec[2]; 
    out[2] = mtx[6] * vec[0] + mtx[7] * vec[1] + mtx[8] * vec[2];
    out[3] = mtx[9] * vec[0] + mtx[10] * vec[1] + mtx[11] * vec[2];
}

s32 fn_80202140(void *arg0) {
    M2C_ERROR(/* unknown instruction: ps_merge10 $f6, $f1, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f7, $f3, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f11, $f3, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f13, $f5, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_merge10 $f8, $f5, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f11, $f1, $f7, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f12, $f1, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f13, $f3, $f8, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f10, $f3, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f12, $f5, $f6, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f9, $f0, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f8, $f1, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_sub $f6, $f6, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f10, $f2, $f5, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f7, $f0, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f9, $f1, $f4, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f7, $f2, $f12, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_msub $f8, $f0, $f3, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f7, $f4, $f11, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_cmpo0 $cr0, $f7, $f6 */);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        return 0;
    }
    M2C_ERROR(/* unknown instruction: ps_add $f6, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f5, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_nmsub $f0, $f7, $f5, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f13, $f13, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f12, $f12, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f11, $f11, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_merge00 $f5, $f13, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f10, $f10, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_merge11 $f4, $f13, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f9, $f9, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f6, $f13, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f8, $f8, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f6, $f12, $f2, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_nmadd $f6, $f11, $f3, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f7, $f10, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_merge00 $f5, $f11, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_merge11 $f4, $f11, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f7, $f9, $f2, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_nmadd $f7, $f8, $f3, $f7 */);
    return 1;
}

void fn_80202238(float* arg0, float* arg1) {
    int i;
    for (i = 0; i < 4; i++) {
        arg1[i] = arg0[i];
    }
}

void fn_80202300(s32 arg0, s32 arg1, f32 farg0) {
    f32 fn_80238A30(f32);
    f32 fn_80238A54(f32);
    void fn_80202370(s32, s32, f32, f32);

    f32 temp_f31 = fn_80238A30(farg0);
    fn_80202370(arg0, arg1, temp_f31, fn_80238A54(farg0));
}

void fn_80202540(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    extern f32 lbl_8036BC38;
    extern f32 lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_8036BC38;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036BC38;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg2;
    M2C_FIELD(arg0, f32 *, 0) = (f32) lbl_8036BC38;
}

f32 fn_80202574(f64 farg0, f64 farg1, f64 farg2) {
    M2C_ERROR(/* unknown instruction: ps_sum1 $f5, $f1, $f5, $f5 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f7, $f2, $f7, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_sum1 $f8, $f3, $f8, $f8 */);
    return (f32) farg0;
}

void fn_802025C0(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    extern f32 lbl_8036BC3C;
    
    *(f32*)((u8*)arg0 + 0x0) = farg0;
    *(f32*)((u8*)arg0 + 0x4) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0xC) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0x14) = farg1;
    *(f32*)((u8*)arg0 + 0x18) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0x20) = lbl_8036BC3C;
    *(f32*)((u8*)arg0 + 0x28) = farg2;
    *(f32*)((u8*)arg0 + 0x2C) = lbl_8036BC3C;
}

void fn_802026E4(f32 *out, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 sp30;
    f32 sp34;
    f32 sp38;

    sp30 = arg2[0] - arg3[0];
    sp34 = arg2[1] - arg3[1];
    sp38 = arg2[2] - arg3[2];

    // Assuming fn_802031E8 is some kind of vector normalization
    // and fn_80203290 is cross product but with different parameters
    PSVECCrossProduct(&sp30, &sp34, out);
    out[3] = -(arg2[2] * sp38 + (arg2[0] * sp30 + arg2[1] * sp34));
}

void fn_80202870(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    f32 fn_80238A0C(f32, f32);
    extern f32 lbl_8036BC38;
    extern f32 lbl_8036BC3C;
    extern f32 lbl_8036BC40;
    extern f32 lbl_8036BC4C;
    extern f32 lbl_8036BC50;
    f32 temp_f4;

    temp_f4 = lbl_8036BC38 / fn_80238A0C(lbl_8036BC50 * (lbl_8036BC40 * farg0), lbl_8036BC40);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (farg2 * (temp_f4 / farg1));
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 8) = (f32) -farg4;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_f4 * farg3);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) -farg5;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_8036BC4C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_8036BC3C;
}

void fn_8020293C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, f32 farg6, f32 farg7) {
    extern f32 lbl_8036BC38;
    extern f32 lbl_8036BC48;
    extern f32 lbl_8036BC3C;

    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;

    temp_f12 = lbl_8036BC38 / (farg3 - farg2);
    temp_f10 = lbl_8036BC38 / (farg0 - farg1);

    temp_f0 = farg4 * temp_f12;
    temp_f1 = temp_f12 * -(farg3 + farg2);
    temp_f2 = farg5 * temp_f10;
    temp_f3 = temp_f10 * -(farg0 + farg1);
    temp_f4 = lbl_8036BC48 * temp_f12;
    temp_f5 = lbl_8036BC48 * temp_f10;

    M2C_FIELD(arg0, f32 *, 0) = temp_f4 * farg4;
    M2C_FIELD(arg0, f32 *, 4) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 8) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0xC) = farg6 + (temp_f0 * temp_f1);
    M2C_FIELD(arg0, f32 *, 0x10) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f5 * farg5;
    M2C_FIELD(arg0, f32 *, 0x18) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg7 + (temp_f2 * temp_f3);
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_8036BC3C;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_8036BC38;
}

f32 fn_80202A18(void) {
    M2C_ERROR(/* unknown instruction: ps_mul $f8, $f0, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f10, $f2, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f12, $f4, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f8, $f8, $f8, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f10, $f10, $f10, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_sum0 $f12, $f12, $f12, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f9, $f1, $f7, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f11, $f3, $f7, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f13, $f5, $f7, $f12 */);
    return M2C_ERROR(/* psq_l unimplemented */);
}

void fn_80202A6C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 fn_80238A0C(f32, f32);
    extern f32 lbl_8036BC58;
    extern f32 lbl_8036BC60;
    extern f32 lbl_8036BC64;
    extern f32 lbl_8036BC68;
    extern f32 lbl_8036BC6C;
    f32 temp_f3;
    f32 temp_f4;

    temp_f4 = lbl_8036BC58 / fn_80238A0C(lbl_8036BC6C * (lbl_8036BC68 * farg0), lbl_8036BC68);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f4 / farg1);
    temp_f3 = lbl_8036BC58 / (farg3 - farg2);
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (-farg2 * temp_f3);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (temp_f3 * -(farg3 * farg2));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036BC64;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036BC60;
}

void fn_80202B3C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    extern f32 lbl_8036BC58;
    extern f32 lbl_8036BC5C;
    extern f32 lbl_8036BC60;
    extern f32 lbl_8036BC64;
    f32 temp_f10;
    f32 temp_f4;
    f32 temp_f8;

    temp_f10 = lbl_8036BC58 / (farg3 - farg2);
    temp_f8 = lbl_8036BC58 / (farg0 - farg1);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (lbl_8036BC5C * temp_f10);
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_8036BC60;
    temp_f4 = lbl_8036BC58 / (farg5 - farg4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_f10 * -(farg3 + farg2));
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (lbl_8036BC5C * temp_f8);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f8 * -(farg0 + farg1));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (lbl_8036BC64 * temp_f4);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (-farg5 * temp_f4);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036BC60;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036BC58;
}

void fn_80202BD4(f32* src, f32* dst) {
    *(u64*)&dst[0] = *(u64*)&src[0];
    *(u64*)&dst[2] = *(u64*)&src[2];
    *(u64*)&dst[4] = *(u64*)&src[4];
    *(u64*)&dst[6] = *(u64*)&src[6];
}

f32 fn_80202C18(void) {
    M2C_ERROR(/* unknown instruction: ps_muls0 $f6, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f6, $f3, $f0, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f6, $f4, $f1, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f6, $f5, $f1, $f6 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f8, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f8, $f3, $f0, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f8, $f4, $f1, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f8, $f5, $f1, $f8 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f10, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f10, $f3, $f0, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f10, $f4, $f1, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f10, $f5, $f1, $f10 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f12, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f12, $f3, $f0, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f12, $f4, $f1, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f12, $f5, $f1, $f12 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f7, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f7, $f3, $f0, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f7, $f4, $f1, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f7, $f5, $f1, $f7 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f9, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f9, $f3, $f0, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f9, $f4, $f1, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f9, $f5, $f1, $f9 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f11, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f11, $f3, $f0, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f11, $f4, $f1, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f11, $f5, $f1, $f11 */);
    M2C_ERROR(/* unknown instruction: ps_muls0 $f13, $f2, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f13, $f3, $f0, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_madds0 $f13, $f4, $f1, $f13 */);
    M2C_ERROR(/* unknown instruction: ps_madds1 $f13, $f5, $f1, $f13 */);
    return M2C_ERROR(/* psq_l unimplemented */);
}

void fn_80203184(void) {
    M2C_ERROR(/* unknown instruction: ps_add $f6, $f2, $f4 */);
    M2C_ERROR(/* unknown instruction: ps_add $f7, $f3, $f5 */);
}

void fn_802031A8(float *arg0, float *arg1, float *arg2) {
    arg2[0] = arg0[0] - arg1[0];
    arg2[1] = arg0[1] - arg1[1];
}

void fn_802031CC(void *arg0, void *arg1) {
    f64* a = (f64*)arg0;
    f64* b = (f64*)arg1;
    b[0] = a[0] * 0.5;
    b[1] = a[1] * 0.5;
    return;
}

f32 fn_8020322C(void *arg0) {
    extern f32 lbl_8036BC70;
    extern f32 lbl_8036BC74;
    f32 temp_f0;
    f32 var_f1;

    M2C_ERROR(/* unknown instruction: ps_mul $f0, $f0, $f0 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f1, $f1, $f1, $f0 */);
    var_f1 = M2C_ERROR(/* unknown instruction: ps_sum0 $f1, $f1, $f0, $f0 */);
    if (var_f1 != (lbl_8036BC70 - lbl_8036BC70)) {
        temp_f0 = __frsqrte(var_f1);
        var_f1 *= -((temp_f0 * temp_f0 * var_f1) - lbl_8036BC74) * (temp_f0 * lbl_8036BC70);
    }
    return var_f1;
}

f32 fn_802032CC(void) {
    extern f32 lbl_8036BC70;
    extern f32 lbl_8036BC74;
    f32 temp_f0;
    f32 var_f1;

    M2C_ERROR(/* unknown instruction: ps_sub $f2, $f0, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_mul $f2, $f2, $f2 */);
    M2C_ERROR(/* unknown instruction: ps_sub $f0, $f0, $f1 */);
    M2C_ERROR(/* unknown instruction: ps_madd $f1, $f0, $f0, $f2 */);
    var_f1 = M2C_ERROR(/* unknown instruction: ps_sum0 $f1, $f1, $f2, $f2 */);
    if ((lbl_8036BC70 - lbl_8036BC70) != var_f1) {
        temp_f0 = __frsqrte(var_f1);
        var_f1 *= -((temp_f0 * temp_f0 * var_f1) - lbl_8036BC74) * (temp_f0 * lbl_8036BC70);
    }
    return var_f1;
}

extern void *IDShouldBe_8036859C;
extern void *fn_8020DAE0;
extern void fn_8020C1A4(u8, u32, void *);

extern u8 lbl_80289EB8[16];
#include "common.h"
#include <dolphin/os.h>
extern s32 lbl_803682F0;
extern s32 fn_80015A14(void);
#include "common.h"
#include <dolphin/os.h>
extern s32 lbl_8036841C;
extern s32 lbl_80368420;
extern s32 lbl_80368424;
extern s32 lbl_80368428;
extern s32 lbl_8036842C;
extern u8 lbl_80368430;
extern u8 lbl_80368431;
extern f32 lbl_8036BADC;
extern f32 lbl_8036BAE0;
