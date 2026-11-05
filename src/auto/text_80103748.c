/* Functions from 0x80103748 to 0x80105504, found by decomp-toolkit. */
#include "common.h"

s32 fn_80103748(void) {
    return 0x21;
}

void *fn_80103750(void) {
    extern u16 lbl_802734D0[29];
    return &lbl_802734D0[0x56/2];
}

void *fn_801037A0(void) {
    extern u16 lbl_802734D0[];
    u16 *ptr = &lbl_802734D0[0xA3];
    return ptr;
}

void *fn_80103808(void) {
    extern u16 lbl_802734D0[];
    return &lbl_802734D0[0xB8 / 2];
}

s32 fn_80103818(void) {
    return 0;
}

s32 fn_80103918(void) {
    return 0x20;
}

s32 fn_80103920(void) {
    return 0x108;
}

s32 fn_80103928(void) {
    return 0x20;
}

s32 fn_80103930(void) {
    return 0xAC;
}

s32 fn_80103938(void) {
    return 0xA0;
}

void *fn_80103940(void) {
    extern char lbl_802734D0[];
    return &lbl_802734D0[0xCF];
}

s32 fn_80103950(void) {
    return 0;
}

void *fn_80103958(void) {
    extern u16 lbl_802734D0[];
    return &lbl_802734D0[0xF4 / 2];
}

s32 fn_80103968(void) {
    return 0;
}

void *fn_80103970(void) {
    extern char lbl_802734D0[];
    return &lbl_802734D0[0x119];
}

s32 fn_80103980(void) {
    return 0;
}

s32 fn_80103998(void) {
    return 0;
}

s32 fn_80103A6C(void) {
    return 0;
}

s32 fn_80103B30(void) {
    return 0;
}

void *fn_80103B8C(void) {
    extern M2C_UNK lbl_802734D0;
    return (char *) &lbl_802734D0 + 0x167;
}

s32 fn_80103B9C(void) {
    return 0;
}

s32 fn_80103BA4(void) {
    s32 fn_8000BCA4(void *);
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32);
    M2C_UNK fn_800A8400();
    extern M2C_UNK lbl_802734D0;
    extern M2C_UNK lbl_8028EB50;
    
    void *temp_r3 = (char *) &lbl_802734D0 + 0xC4;
    s32 temp_r31 = fn_8000BCA4(temp_r3);
    if (temp_r31 != 0) {
        fn_800A8400();
        fn_8000C070(temp_r31, 0);
    }
    fn_8000CAA0(&lbl_8028EB50, temp_r31);
    return 6;
}

s32 fn_80103C14(void) {
    return 0;
}

s32 fn_80103C8C(void) {
    return 0;
}

void *fn_80103CF4(void) {
    extern u8 lbl_802734D0[];
    return &lbl_802734D0[0x191];
}

s32 fn_80103D04(void) {
    return 0;
}

s32 fn_80103D74(void) {
    return 0;
}

s32 fn_80103E30(void) {
    return 0;
}

s32 fn_80103E48(void) {
    return 0;
}

void fn_80104134(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, M2C_UNK, s32);
    fn_8017A810(arg1, 4, arg0);
}

void fn_80104160(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, s32);
    fn_8017A430(arg1, 4, arg0);
}

u32 fn_801044C4(void *arg0) {
    s32 temp_r4;

    temp_r4 = ((u8) M2C_FIELD(arg0, u8 *, 2) >> 5U) & 7;
    return (u32) ((7 - temp_r4) | (temp_r4 - 7)) >> 0x1FU;
}

u32 fn_801044E0(void *arg0) {
    s32 temp_r4;

    temp_r4 = ((u8) M2C_FIELD(arg0, u8 *, 2) >> 2U) & 7;
    return (u32) ((4 - temp_r4) | (temp_r4 - 4)) >> 0x1FU;
}

u32 fn_80104930(u16 *arg0, u16 arg1) {
    return ((u32)*arg0 - (u32)arg1) >> 31;
}

s32 fn_80104944(void) {
    extern s32 lbl_803679C0;
    return lbl_803679C0;
}

extern void* lbl_803679C0;
extern u8 lbl_8032BB44[20];
void* fn_8010494C(void* arg0) {
    void* temp_r0 = lbl_803679C0;
    
    if (arg0 != NULL) {
        lbl_803679C0 = arg0;
    } else {
        lbl_803679C0 = &lbl_8032BB44;
    }
    
    return temp_r0;
}

void* fn_80104970(void* arg0) {
    u8 temp_r0 = *(u8*)arg0;
    
    if ((temp_r0 >= 0x81 && temp_r0 <= 0x9F) || (temp_r0 >= 0xE0 && temp_r0 <= 0xFC)) {
        u8 temp_r0_2 = *((u8*)arg0 + 1);
        if (((temp_r0_2 < 0x40) == 0 && temp_r0_2 <= 0x7E) || (temp_r0_2 >= 0x80 && temp_r0_2 <= 0xFC)) {
            return (u8*)arg0 + 2;
        }
    }
    
    return (u8*)arg0 + 1;
}

extern void *lbl_803679C0;
u16 fn_80104E58(void) {
    return *(u16 *)((char *)lbl_803679C0 + 0x4);
}

void fn_801053CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

