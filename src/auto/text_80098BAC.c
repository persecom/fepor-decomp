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

void fn_80098BAC(void *arg0) {
    void fn_800956A0(void);
    if (*(u8 *)((char *)arg0 + 0x34) != 2) {
        fn_800956A0();
    }
}

void fn_80098BD8(void *arg0) {
    void fn_801B61CC(void);
    if (*(u8 *)((char *)arg0 + 0x34) != 2) {
        fn_801B61CC();
    }
}

void fn_80098C04(void *arg0) {
    u32 fn_80040844();
    s32 fn_8004721C(s32, s32, s32, s32, s32);
    void fn_80096AB8();
    void fn_800979FC();
    void fn_80097AB4();
    u32 fn_800980E8(s32);
    void fn_80184618(s32, void *);
    u8 fn_801A2690();
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    u8 *base;
    s32 var_r31;
    u32 temp_r3;

    M2C_FIELD(arg0, s8 *, 0x40) = 0;
    M2C_FIELD(arg0, s8 *, 0x41) = 0;
    M2C_FIELD(arg0, s8 *, 0x42) = 0;
    M2C_FIELD(arg0, s8 *, 0x43) = 0;
    M2C_FIELD(arg0, s16 *, 0x46) = 0;
    fn_80097AB4();
    var_r31 = 0;
    do {
        if (fn_800980E8(var_r31) != 0U) {
            fn_80184618(fn_800980E8(var_r31), arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 3);
    if ((*(u32 *)(lbl_80330EAC + 0xCAC) & 0x100) != 0U) {
        M2C_FIELD(arg0, s8 *, 0x34) = 1;
        temp_r3 = fn_80040844();
        if (temp_r3 != 0U) {
            base = lbl_802EF4C8;
            M2C_FIELD(arg0, s32 *, 0x30) = fn_8004721C(temp_r3, (s8) base[0xF], (s8) base[0x10], 0x1000, 0x10);
        } else {
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        }
    } else {
        M2C_FIELD(arg0, s8 *, 0x34) = 0;
    }
    if (fn_801A2690() != 0) {
        M2C_FIELD(arg0, s8 *, 0x34) = 2;
    }
    fn_800979FC();
    fn_80096AB8();
}

