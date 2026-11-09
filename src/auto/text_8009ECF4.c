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

void fn_8009ECF4(s32 arg0) {
    fn_801E32C4(&lbl_803682F0, arg0);
}

void fn_8009F000(s32 arg0) {
    M2C_UNK fn_801E3118(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_803682F0;
    fn_801E3118(&lbl_803682F0, arg0, 0);
}

void fn_8009F02C(s32 arg0) {
    fn_801E323C(&lbl_803682F0, arg0);
}

void fn_8009F054(s32 arg0) {
    M2C_UNK fn_8000C188(s32);
    u8 fn_800A5C88();
    M2C_UNK fn_800A5CBC();
    extern void *lbl_80367240;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r3 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r3) & 0x1000) {
        fn_800A5CBC();
        fn_8000C188(arg0);
        return;
    }
    if (fn_800A5C88() == 0) {
        fn_8000C188(arg0);
    }
}
