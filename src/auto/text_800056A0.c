/* Functions from 0x800056A0 to 0x80006258, found by decomp-toolkit. */
#include "common.h"

void fn_800056A0(s8 arg0) {
    extern void *lbl_80367100;
    M2C_FIELD(lbl_80367100, s8 *, 0x18) = arg0;
}

void fn_800056AC(void) {
    extern s16 *lbl_80367100;
    
    lbl_80367100[0x10/2] = (s16)(lbl_80367100[0xE/2] - 0x10);
    *(u8*)&lbl_80367100[0x18/2] = (u8)0;
}

s32 fn_800056CC(const char *fmt, ...) {
    return 0;
}

void fn_800059B0(void) {

}

void fn_800059B4(void) {
    extern s16 *lbl_80367100;
    
    s32 i;
    for (i = 0; i < lbl_80367100[0x6/2]; i++) {
        lbl_80367100[i*4] = 0;
    }
    lbl_80367100[0x2C/2] = 0;
    lbl_80367100[0x30/2] = 0;
}

void fn_800059FC(void) {
    extern s32 lbl_80330708;
    
    void *temp_r31 = &lbl_80330708 + 0x9C;
    fn_801998B0(temp_r31);
    fn_80199818(temp_r31);
}

void fn_80005A84(void* arg0, void* arg1)
{
    if (arg0 != 0)
    {
        char *temp = (char *)arg0;
        temp[0x28] = 0;
        temp[0x29] = 0;
        temp[0x30] = 0;
        temp[0x31] = 0;
        temp[0x38] = 0;
        temp[0x39] = 0;
    }
}

void fn_80005C18(void) {
    M2C_UNK fn_800111FC();
    extern s32 lbl_80367108;
    fn_800111FC();
    lbl_80367108 = fn_801047D0();
}

void fn_80005C40(void) {
    M2C_UNK fn_801047D0();
    fn_801047D0();
}

void fn_80005C60(void) {
    extern s32 lbl_802832FC;
    fn_8000CAF0(&lbl_802832FC, 3);
}

void fn_80005D88(void) {
    extern u16 lbl_80330708[];
    void *temp_r31;

    temp_r31 = (u16 *)lbl_80330708 + 0x9C / sizeof(u16);
    fn_801998B0(temp_r31);
    fn_80199818(temp_r31);
}

void fn_80005DC8(void) {
    extern s32 lbl_80330708;
    s32 *temp_r6;

    fn_80006798();
    temp_r6 = &lbl_80330708 + 0x17;
    *(temp_r6 + 1) += (u32) *(temp_r6 + 2);
    *(temp_r6 + 3) += *(temp_r6 + 4);
    fn_80006798();
    temp_r6 = &lbl_80330708 + 0x19;
    *(temp_r6 + 1) += (u32) *(temp_r6 + 2);
    *(temp_r6 + 3) += *(temp_r6 + 4);
}

u8 fn_80005E2C(void) {
    u32 OSGetResetCode();
    extern s32 lbl_803682A4;
    u8 var_r3;

    if ((OSGetResetCode() >> 0x1FU) == 0) {
        return 0U;
    }
    var_r3 = 1;
    if (lbl_803682A4 & 0x90000) {
        return (u8) ((OSGetResetCode() & 2) == 0);
    }
    if (lbl_803682A4 & 0x60000) {
        var_r3 = (OSGetResetCode() & 0x20) == 0;
    }
    return var_r3;
}

s32 fn_80005E98(void) {
    extern u8 lbl_80330708[];
    return (*(u8 *)((uintptr_t)lbl_80330708 + 0x10) ^ 0x1D) == 0;
}

void fn_80005EB4(void) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
}

void fn_80005ED4(void) {
    extern u16 lbl_80267B80[];
    fn_800C50FC((u8 *)lbl_80267B80 + 0xDF, 0xB00000);
}

void fn_800060F8(void) {
    M2C_UNK fn_80016DE0();
    fn_80016DE0();
}

void fn_80006118(void) {
    void *fn_8000C0C0(M2C_UNK *, M2C_UNK *);
    extern M2C_UNK lbl_802832FC;
    extern M2C_UNK lbl_803682F0;
    void *temp_r31;

    temp_r31 = M2C_FIELD(&lbl_803682F0, void **, 4);
    M2C_FIELD(temp_r31, s8 *, 0x64) = (s8) M2C_FIELD(fn_8000C0C0(&lbl_802832FC, &lbl_803682F0), s32 *, 0x64);
    M2C_FIELD(temp_r31, s8 *, 0x65) = 0xA;
}

void fn_80006160(s32 arg0)
{
    extern u16 lbl_802832FC[];
    void *fn_8000C0C0(u16 *);
    s32 *obj;

    obj = (s32 *)fn_8000C0C0(lbl_802832FC);
    obj[0x64 / 4] = arg0;
}

void fn_80006198(void) {
    extern u16 lbl_802832FC[];
    void *fn_8000C0C0(u16 *);
    void fn_8000C070(void *, u8);
    void *arg0 = fn_8000C0C0(lbl_802832FC);
    fn_8000C070(arg0, (u8)*(u32 *)((u8 *)arg0 + 0x60));
}

void fn_800061CC(void *arg0) {
    void fn_8000C070(void *, u8);
    fn_8000C070(arg0, (u8)*(u32 *)((u8 *)arg0 + 0x60));
}

s32 fn_800061F4(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern M2C_UNK lbl_802832FC;
    return M2C_FIELD(fn_8000C0C0(&lbl_802832FC), s32 *, 0x60);
}

void fn_80006220(s32 arg0) {
    extern u16 lbl_802832FC[];
    void *fn_8000C0C0(u16 *);
    s32 *obj;
    obj = (s32 *)fn_8000C0C0(lbl_802832FC);
    obj[0x60 / 4] = arg0;
}
#include <common.h>
extern u8 lbl_803682F0[8];
extern u32 jumptable_80283748[];
extern u8 lbl_80330708[1400];
extern u8 lbl_802832FC[1100];
extern f64 lbl_80368B60;
