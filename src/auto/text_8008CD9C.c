/* Functions from 0x8007C5E4 to 0x8009F0BC, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
extern void* lbl_803674E8;
extern f32 lbl_803696C8;

extern s32 lbl_803682F0;
extern void *lbl_8026CC58;
extern void *lbl_80289998;
extern f32 lbl_80369690;
extern f32 lbl_803696A8;
extern f32 lbl_803696AC;

extern void* lbl_80367488;
extern s32 lbl_803693C0;
extern s32 lbl_803693C4;
extern f64 lbl_803693C8;
extern f32 lbl_803693D4;
extern f32 lbl_803693D8;
extern f32 lbl_803693E4;

extern u8 lbl_80330708[1400];

extern u16 *lbl_803674E0;

#pragma inline

extern f32 lbl_8036A118;
extern f32 lbl_8036A120;
extern f32 lbl_8036A130;
extern f32 lbl_8036A154;

extern f32 lbl_80369768;
extern u16 lbl_80289A60[];

extern u8 lbl_80289B00[16];

extern void* fn_800980D4(s32 arg0);
extern void fn_8017E394(void* arg0, void* arg1, void* arg2, s32 arg3);

extern u8 lbl_80289EB8[16];

extern f32 lbl_803697E0;
extern f32 lbl_803697E4;

#pragma scheduling reset

void fn_8008CD9C(void) {
    extern u16 lbl_803674F0;
    extern u16 lbl_803674F4;
    extern u8 lbl_8026CC88[];

    fn_8006EEFC(&lbl_803674F0, &lbl_8026CC88[0x5B]);
    fn_8006EEFC(&lbl_803674F4, &lbl_8026CC88[0x6C]);
}

void fn_8008CDE0(void *arg0, s32 arg1) {
    extern u16 lbl_8026CD08[];
    extern void *fn_8008CE28;
    
    if (arg0 != NULL) {
        *(s32*)((u8*)arg0 + 0x90) = arg1;
        fn_80060638();
        fn_800688D4(&lbl_8026CD08[0x1D], fn_8008CE28, 0x4000, lbl_8026CD08);
    }
}

void fn_8008CFB4(void **arg0) {
    M2C_UNK fn_8005AC24(M2C_UNK *, s32);
    extern M2C_UNK lbl_802F0308;
    s32 temp_cr0_eq;
    u8 var_r0;
    void *temp_r6;

    temp_r6 = *arg0;
    temp_cr0_eq = temp_r6 == NULL;
    if (temp_cr0_eq == 0) {
        if (temp_cr0_eq == 0) {
            var_r0 = M2C_FIELD(temp_r6, u8 *, 0x15);
        } else {
            var_r0 = 0;
        }
        fn_8005AC24(&lbl_802F0308, var_r0 + 0x61);
    }
}

void fn_8008D6D8(s32 arg0, s32 arg1, s32 arg2)
{
    s32 temp_r3;
    u8 *temp_r31;

    if (arg0 < 0) {
        arg0 = 0;
    }

    temp_r3 = arg0 + arg1;
    if (temp_r3 > arg2) {
        arg0 = arg2;
    } else {
        arg0 = temp_r3;
    }
    
    temp_r31 = (u8 *)arg0;
    *(s16 *)(temp_r31 + 0x38) = *(s16 *)(temp_r31 + 0x3e) >> 1;
}

void fn_8008D7EC(void *arg0) {
    M2C_UNK fn_8000C188();
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) + M2C_FIELD(arg0, u8 *, 0x3C));
    if ((s8) M2C_FIELD(arg0, u8 *, 0x3A) == (s8) M2C_FIELD(arg0, u8 *, 0x3B)) {
        fn_8000C188();
    }
}
