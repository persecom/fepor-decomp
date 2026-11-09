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

u8 fn_800981D0(void **arg0) {
    void *temp_r3;
    void *temp_r3_2;
    void *var_r0;
    void *var_r3;

    temp_r3_2 = *arg0;
    if (temp_r3_2 != NULL) {
        var_r0 = M2C_FIELD(temp_r3_2, void **, 0x280);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r3_2 != NULL) {
            var_r3 = M2C_FIELD(temp_r3_2, void **, 0x280);
        } else {
            var_r3 = NULL;
        }
        return M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8);
    }
    temp_r3 = M2C_FIELD(temp_r3_2, void **, 0x190);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r3, u8 *, 8);
}

void fn_800983E0(void *arg0, void **arg1) {
    f32 fn_80023068(M2C_UNK *, f32, f32, f32);
    extern M2C_UNK lbl_802CA518;
    extern f32 lbl_803697D0;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f2;
    void *temp_r6;
    void *var_r0;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_3;

    temp_r6 = *arg1;
    if (temp_r6 != NULL) {
        var_r0 = M2C_FIELD(temp_r6, void **, 0x280);
    } else {
        var_r0 = NULL;
    }
    if (var_r0 != NULL) {
        if (temp_r6 != NULL) {
            var_r3 = M2C_FIELD(temp_r6, void **, 0x280);
        } else {
            var_r3 = NULL;
        }
        sp8 = M2C_FIELD(var_r3, f32 *, 4);
        if (temp_r6 != NULL) {
            var_r3_2 = M2C_FIELD(temp_r6, void **, 0x280);
        } else {
            var_r3_2 = NULL;
        }
        spC = M2C_FIELD(var_r3_2, f32 *, 8);
        if (temp_r6 != NULL) {
            var_r3_3 = M2C_FIELD(temp_r6, void **, 0x280);
        } else {
            var_r3_3 = NULL;
        }
        sp10 = M2C_FIELD(var_r3_3, f32 *, 0xC);
    } else {
        temp_f1 = lbl_803697D0 + (f32) (s8) M2C_FIELD(temp_r6, u8 *, 0x19E);
        temp_f2 = lbl_803697D0 + (f32) (s8) M2C_FIELD(temp_r6, u8 *, 0x19F);
        sp8 = temp_f1;
        spC = temp_f2;
        sp10 = fn_80023068(&lbl_802CA518, temp_f1, temp_f2, lbl_803697D0);
    }
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 4) = spC;
    M2C_FIELD(arg0, f32 *, 8) = sp10;
}

void *fn_800984FC(void **arg0) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 == NULL) {
        return NULL;
    }
    if (*(int *)((char *)temp_r3 + 0x28C) == 0) {
        return NULL;
    }
    return (char *)temp_r3 + 0x28C;
}

void fn_80098524(void **arg0) {
    void *temp_r3;
    u32 var_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r3 = *(u32 *)((char *)temp_r3 + 0x280);
    } else {
        var_r3 = 0U;
    }
    if (var_r3 != 0U) {
        fn_8004BE88(0);
    }
}

void fn_80098A9C(s32 arg0) {
    extern u16 lbl_80330EAC[];
    extern u8 lbl_80289C54[];

    if (lbl_80330EAC[0x6D6] & 0x200)
    {
        fn_8019A7E8();
        return;
    }

    fn_8000CAA0(lbl_80289C54, arg0, lbl_80289C54);
}

