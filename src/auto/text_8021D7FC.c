/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
extern s32 lbl_803682F0;
extern s32 fn_80013E50(s32);
extern s32 fn_80013E60(s32, s32);
extern s32 fn_80013E74(void*, s32);


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

extern s32 lbl_803679F0;

extern u16 lbl_8029B634[10];

#pragma opt_common_subs off

#pragma opt_common_subs reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on

#pragma use_lmw_stmw reset

extern u16 lbl_8029B7FC[10];

#pragma opt_common_subs off

#pragma opt_common_subs reset

extern u16 lbl_8029B7A4[10];

#pragma opt_common_subs off

#pragma opt_common_subs reset

extern void *IDShouldBe_8036859C;
extern void *fn_8020DAE0;
extern void fn_8020C1A4(u8, u32, void *);

extern u8 lbl_80289EB8[16];

void *fn_8021D8F8(u32 arg0) {
    extern u8 *__GXData;
    void *ret;

    if (arg0 >= 0x14) {
        ret = 0;
    } else {
        ret = __GXData + 0x388 + arg0 * 0x10;
    }
    return ret;
}

void fn_8021ED98(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}

s32 fn_8021F250(s32 *arg0) {
    return *arg0;
}

s32 fn_8021F258(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 fn_8021F4CC(void) {
    extern s32 lbl_80368770;
    return lbl_80368770;
}

s32 fn_8021F4D4(void) {
    extern s32 lbl_80368774;
    return lbl_80368774;
}

s32 fn_8021F4DC(void) {
    extern s32 lbl_80368788;
    return lbl_80368788;
}

void fn_80220198(void) {
    *(s8 *)0xCC008000 = 0x48;
}

u16 fn_80220970(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_80221A2C(s32 arg0) {
    extern void *__GXData;
    void *gx = __GXData;
    M2C_FIELD(gx, u32 *, 0x1EC) = (M2C_FIELD(gx, u32 *, 0x1EC) & ~0x180) | ((arg0 << 7) & 0x180);
}

void fn_80221D6C(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    M2C_FIELD(arg0, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = farg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg3;
    M2C_FIELD(arg0, f32 *, 0x20) = farg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg5;
}

void fn_80221FE8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x28) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x30) = farg2;
}

void fn_802220DC(void *arg0, s32 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg1;
}

s32 fn_80222A74(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) << 5) & 0x03FFFFE0;
}

s32 fn_80222A80(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0x3FF) + 1;
}

s32 fn_80222A90(void *arg0) {
    return (((u32) M2C_FIELD(arg0, u32 *, 8) >> 0xAU) & 0x3FF) + 1;
}

s32 fn_80222AA0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

u8 fn_80222AA8(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0x1F) & 1) == 1;
}

s32 fn_80222CDC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) << 5) & 0x03FFFFE0;
}

u16 fn_80222CE8(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}

void fn_80223978(void) {

}

void fn_80224E1C(void *arg0, s32 arg1) {
    *(s32*)((u8*)arg0 + 0x50) = arg1;
    *(s32*)((u8*)arg0 + 0x54) = arg1;
}

void fn_80225BF4(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}
