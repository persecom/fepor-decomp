/* Functions from 0x801FC634 to 0x8022C1E8, found by decomp-toolkit. */
#include "common.h"
#include <dolphin/os.h>
#include "global.h"
#include "structs.h"
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
    extern u16 *__GXData;
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

void fn_8021F06C(s32 arg0) {
    s32 sp14;
    
    sp14 = arg0;
    fn_802204F8();
    fn_8021F0A0(sp14);
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

void fn_8021FBB8(void) {
    u32* temp_r4 = (u32*)0x803B81A0;
    temp_r4[0x14/4] = 0;
    temp_r4[0x14/4] = (temp_r4[0x14/4] & ~0x600) | 0x200;
    temp_r4[0x18/4] = 0;
    ((u8*)0x803B81A0)[0x4D4] = 0;
    ((u8*)0x803B81A0)[0x4D5] = 0;
    temp_r4[0x5AC/4] |= 0x8;
}

void fn_80220154(s32 arg0, s32 arg1, u8 arg2) {
    s32 temp_r3;
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 == 0x19) {
        var_r3 = 0xA;
    }
    temp_r3 = var_r3 - 9;

    *(u8 *)0xCC008000 = 8;
    *(u8 *)0xCC008000 = temp_r3 | 0xA0;
    *(u32 *)0xCC008000 = arg1 & 0x3FFFFFFF;
    *(u8 *)0xCC008000 = 8;
    *(u8 *)0xCC008000 = temp_r3 | 0xB0;
    *(u32 *)0xCC008000 = arg2;
}

void fn_80220198(void) {
    *(s8 *)0xCC008000 = 0x48;
}

u16 fn_80220970(void) {
    extern void *__peReg;
    return M2C_FIELD(__peReg, u16 *, 0xE);
}

void fn_80220A20(s32 arg0, u8 arg1) {
    void *__peReg;
    u16 val = (arg1 << 8) | (arg0 & 0xFFFFFF00);
    M2C_FIELD(__peReg, u16 *, 0x0) = val;
}

extern u16 *__peReg;
void fn_80220A54(u8 arg0) {
    u16 temp = __peReg[1];  // Access offset 2 (u16) which is the second u16 in the pointer
    temp = (temp & ~0x10) | ((arg0 << 4) & 0x10);
    __peReg[1] = temp;
}

extern u16* __peReg;
void fn_80220AD0(u8 arg0) {
    u16 val = __peReg[1];
    val &= ~8;
    val |= (arg0 & 1) << 3;
    __peReg[1] = val;
}

void fn_80220AE8(u8 arg0, u8 arg1) {
    u32 val;
    u16 temp;

    val = (u32) (((arg1 << 24) | (arg0)) & 0x100);
    temp = (u16) val;
    *(__peReg + 2) = temp;
}

void fn_80220B0C(u8 arg0) {
    u16 val = *__peReg;
    val &= ~4;
    val |= (arg0 << 2) & 4;
    *__peReg = val;
}

void fn_80220B24(u8 arg0, s32 arg1, s32 arg2) {
    u16 val = 0;
    val |= (arg0 & 1) << 0;   // bit 0
    val |= (arg1 & 7) << 1;   // bits 1-3
    val |= (arg2 & 1) << 4;   // bit 4
    *__peReg = val;
}

void fn_80220B44(u16 arg0, s32 arg1, s32 *arg2) {
    u32 temp;
    u16 a = arg0 & 0xFFFF;
    s32 b = arg1 & 0xFFF;
    
    temp = 0xC8000000 | (a << 2);
    temp &= ~0x3FF000;
    temp |= (b << 12);
    temp &= ~0xC00000;
    temp |= 0x400000;
    *arg2 = *(s32*)temp;
}

void fn_8022100C(u32 arg0) {
    // Based on disassembly, the code is directly manipulating __GXData which isn't directly accessible
    // This is an inline ASM replacement or needs to be done by accessing memory addresses
    // We'll try with direct memory access patterns as per the instruction behavior
}

void fn_80221034(s32 arg0) {
    u32 temp_r5;
    u32 *temp_r6;

    temp_r6 = (u32 *)0x803B81A0;
    temp_r5 = *temp_r6;
    temp_r5 = (temp_r5 & ~0x80000) | ((arg0 << 0x13) & 0x80000);
    *temp_r6 = temp_r5;

    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = 0xFE080000;
    *(u8 *)0xCC008000 = 0x61;
    *(u32 *)0xCC008000 = temp_r5;
}

void fn_80221068(void) {
    extern void *__GXData;
    
    *(u8*)0xCC008000 = 0x61;
    *(u32*)0xCC008000 = *(u32*)((u8*)__GXData + 0x204);
}

void fn_802212C8(s32 arg0) {
    extern u16 *__GXData;
    __GXData[0x1E8/2] = 0;
    __GXData[0x1E8/2] = (__GXData[0x1E8/2] & ~0x3FF) | ((arg0 >> 5) & 0x3FF);
    __GXData[0x1E8/2] = (__GXData[0x1E8/2] & ~0xFF000000) | 0x4D000000;
}

extern u32 lbl_80368738;
extern u32 lbl_80368770;
u32 fn_8022142C(void) {
    return lbl_80368770 + (lbl_80368738 * 2);
}

void fn_80221A2C(s32 arg0) {
    extern void *__GXData;
    M2C_FIELD(__GXData, u32 *, 0x1EC) = (M2C_FIELD(__GXData, u32 *, 0x1EC) & ~0x180) | ((arg0 & 3) << 7);
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

void fn_80222334(void)
{
    u32 temp_r3;
    u32 var_r3;
    
    temp_r3 = OSGetTime();
    var_r3 = (temp_r3 & 0xFFFF) + 0x41F;
    if (var_r3 < 0)
        var_r3 += 0x10000;
}

void fn_80222A3C(s32 *arg0, s32 arg1, s32 arg2) {
    extern u16 lbl_80367048;
    s32 var_r5;

    if (arg2 == 1) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    *arg0 = (*arg0 & ~0x10) | ((var_r5 << 4) & 0x10);
    *arg0 = (*arg0 & ~0xE0) | ((*(&lbl_80367048 + arg1) << 5) & 0xE0);
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

u8 fn_80222AC0(u32 *arg0) {
    extern M2C_UNK lbl_80367050;
    return *(&lbl_80367050 + (((u32) *arg0 >> 5U) & 7));
}

s32 fn_80222CDC(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) << 5) & 0x03FFFFE0;
}

u16 fn_80222CE8(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 8);
}

void GXInitTlutRegion(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;
    *arg0 = 0;
    temp_r4 = (arg1 + 0xFFF80000);
    temp_r5 = temp_r4 >> 9;
    *arg0 = (*arg0 & ~0x3FF) | (temp_r5 & 0x3FF);
    *arg0 = (*arg0 & ~0x1FFC00) | ((arg2 << 0xA) & 0x1FFC00);
    *arg0 = (*arg0 & ~0xFF000000) | 0x65000000;
}

extern u16* __GXData;
s32 fn_80222EFC(s32 arg0) {
    s32 temp_r0;
    
    // Load word from __GXData + 0x4c8, with auto-increment (lwzu)
    temp_r0 = __GXData[0x132]; // 0x4c8 / 2 = 0x132
    __GXData[0x132] = (u16)arg0; // Store halfword back
    
    return temp_r0;
}

extern u16 *__GXData;
s32 fn_80222F10(s32 arg0) {
    s32 temp_r0;
    
    temp_r0 = *(u16*)__GXData;
    *(u16*)__GXData = (u16)arg0;
    return temp_r0;
}

void fn_802238A8(u8 arg0) {
    u16* gxData = (u16*)__GXData;
    u16 temp = gxData[0x102];
    temp = (temp & ~0x7000) | ((arg0 << 16) & 0x7000);
    gxData[0x102] = temp;
    
    temp = gxData[0x2D6];
    temp = temp | 0x6;
    gxData[0x2D6] = temp;
}

void fn_80223978(void) {

}

void __GXSetIndirectMask(s32 arg0) {
    u32 temp = __GXData[0x124/2];
    temp = (temp & ~0xFF) | (arg0 & 0xFF);
    __GXData[0x124/2] = temp;
    *(u8*)0xCC008000 = 0x61;
    *(u8*)0xCC008000 = (u8)(__GXData[0x124/2] & 0xFF);
    __GXData[0x2/2] = 0;
}

void __GXFlushTextureState(void) {
    u8 *addr = (u8 *)0xCC008000;
    u32 *gx_data = (u32 *)__GXData;
    
    *addr = 0x61;
    *(u32 *)(*(u32 *)__GXData + 0x124) = *(u32 *)(*(u32 *)__GXData + 0x124);
    *(u16 *)__GXData = 0;
}

void fn_80223A5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 *temp_r8;
    u32 temp_r10;
    u32 temp_r9;
    u32 temp_r4;
    
    temp_r8 = (u32 *)((u8 *)__GXData + (arg0 << 2));
    *(u8 *)0xCC008000 = 0x61;
    temp_r10 = *temp_r8;
    temp_r9 = temp_r10 & 0xFFFF0000;
    temp_r4 = ((arg1 & 0xF) << 12) | ((arg2 & 0xF) << 8) | ((arg3 & 0xF) << 4) | (arg4 & 0xF);
    // This order seems to match the target more closely - might need to be careful with bit positions
    temp_r10 = temp_r9 | temp_r4;
    *(u8 *)0xCC008000 = temp_r10;
    *temp_r8 = temp_r10; 
    *(u16 *)__GXData = 0;
}

void fn_802240C8(u8 arg0) {
    u32 temp = (u32)arg0;
    __GXData[0x81] = (__GXData[0x81] & ~0x3C00) | (((temp - 1) << 0xA) & 0x3C00);
    __GXData[0x16B] = __GXData[0x16B] | 4;
}

void fn_8022462C(s32 arg0) {
    u16 *reg_ptr;
    
    reg_ptr = (u16*)((char*)__GXData + 0x1D0);
    *reg_ptr = (*reg_ptr & ~0x8) | ((arg0 << 3) & 0x8);
    *(u8*)0xCC008000 = 0x61;
    *(u8*)0xCC008000 = *reg_ptr & 0xFF;
    *(u16*)((char*)__GXData + 0x2) = 0;
}

void fn_80224658(s32 arg0) {
    u16 temp_r6;
    
    temp_r6 = (__GXData[0x1D0/2] & ~0x10) | ((arg0 << 4) & 0x10);
    *(u8 *)0xCC008000 = 0x61;
    *(u8 *)0xCC008000 = (u8)temp_r6;
    __GXData[0x1D0/2] = temp_r6;
    __GXData[1] = 0;
}

void fn_80224684(s32 arg0, s32 arg1, s32 arg2) {
    u16 *temp_r6;
    u16 temp_r7;

    temp_r6 = (u16*)__GXData;
    *(u8*)0xCC008000 = 0x61;
    temp_r7 = ((((*temp_r6 & ~1) | (arg0 & 1)) & ~0xE) | ((arg1 << 1) & 0xE)) | ((arg2 << 4) & 0x10);
    *(u8*)0xCC008000 = temp_r7;
    *temp_r6 = temp_r7;
    *(u16*)(temp_r6 + 1) = 0;
}

void fn_802246B8(u8 arg0) {
    u16 *temp_r6;
    u16 temp_r5;
    u16 temp_r4;

    temp_r6 = (u16*)__GXData;
    temp_r5 = *(temp_r6 + 0x1DC/sizeof(u16));
    temp_r4 = arg0;
    temp_r5 = (temp_r5 & ~0x40) | ((temp_r4 << 6) & 0x40);
    *(temp_r6 + 0x1DC/sizeof(u16)) = temp_r5;
    *(u8*)0xCC008000 = 0x61;
    *(u16*)0xCC008000 = temp_r5;
    *(u16*)(temp_r6 + 1) = 0;
}

void fn_802247C0(s32 arg0) {
    u16 temp_r6;
    
    temp_r6 = (__GXData[0x1D0/2] & ~0x4) | ((arg0 << 2) & 0x4);
    *(u8*)0xCC008000 = 0x61;
    *(u16*)0xCC008000 = temp_r6;
    __GXData[0x1D0/2] = temp_r6;
    __GXData[0x2/2] = 0;
}

void fn_80224828(s32 arg0, u8 arg1) {
    u32 temp_r5;
    
    temp_r5 = (u32)arg1 & 0x1;
    temp_r5 |= ((u32)arg0 << 1) & 0x2;
    temp_r5 |= 0x44000000;
    *(u8*)0xCC008000 = 0x61;
    *(u32*)(0xCC008000) = temp_r5;
    *(u16*)(__GXData + 1) = 0;
}

void fn_80224E1C(void *arg0, s32 arg1) {
    *(s32*)((u8*)arg0 + 0x50) = arg1;
    *(s32*)((u8*)arg0 + 0x54) = arg1;
}

void fn_80225034(u32 arg0, u32 *dst) {
    u32 *src = (u32*)((u8*)__GXData + 0x4f4); // offset from the assembly

    dst[0] = src[arg0 + 0];
    dst[1] = src[arg0 + 1];
    dst[2] = src[arg0 + 2];
}

void fn_80225118(void)
{
    u16* ptr = &__GXData[0x4E];
    *ptr = 0;
    ptr++;
    *ptr = 0;
}

void fn_80225158(void)
{
    u16 *temp_r4 = __GXData;
    temp_r4[0x40] = 0x1005;
    temp_r4[0x41] = 1;
}

void fn_80225BF4(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 4) = 4;
}

void fn_80225D3C(void) {
    extern void *__cpReg;
    M2C_FIELD(__cpReg, s16 *, 2) = 0x4;
}

extern u16 *__GXData;
extern u16 *__GXData;
extern u16 *__GXData;
extern u16 *__GXData;
