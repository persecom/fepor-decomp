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

void fn_80098AE4(void *arg0) {
    M2C_UNK fn_8004B1B4(s32);
    M2C_UNK fn_8009799C();
    M2C_UNK fn_8004FE98(s32, M2C_UNK);
    M2C_UNK fn_8005376C();
    M2C_UNK fn_800980D4(s32);
    s32 fn_800980E8(s32);
    u8 fn_80098568();
    register s32 var_r31;
    unsigned int temp_r3;

    fn_8005376C();
    if ((u8) M2C_FIELD(arg0, u8 *, 0x40) == 0) {
        fn_8009799C();
        var_r31 = 0;
        do {
            temp_r3 = fn_800980E8(var_r31);
            if (temp_r3 != 0) {
                fn_800980D4(var_r31);
                if (fn_80098568() != 0) {
                    fn_8004B1B4(temp_r3);
                } else {
                    fn_8004FE98(temp_r3, 0);
                }
            }
            var_r31 += 1;
        } while (var_r31 < 3);
    }
}

