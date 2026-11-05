/* Functions from 0x8012C3D0 to 0x8013275C, found by decomp-toolkit. */
#include "common.h"

s32 fn_8012C3D0(void) {
    return 0x168;
}

s32 fn_8012C3D8(void) {
    return 0x128;
}

s32 fn_8012C3E0(void) {
    return 0x16;
}

void fn_8012C3E8(void *arg0) {
    void (**func_ptr)(void) = (void (**)(void))((void**)arg0)[1] + 0x1F;
    func_ptr[0]();
}

M2C_UNK *fn_8012C414(void) {
    u8 fn_80109B0C(s32);
    M2C_UNK fn_80231D94(M2C_UNK *, void *, u8, M2C_UNK *);
    extern M2C_UNK lbl_802758F8;
    extern M2C_UNK lbl_8032FE60;
    extern s32 lbl_80367A88;

    u8 temp_r5 = fn_80109B0C(lbl_80367A88);
    void *temp_r4 = &lbl_802758F8 + 0x10A;
    M2C_UNK *temp_r3 = &lbl_8032FE60;

    fn_80231D94(temp_r3, temp_r4, temp_r5, temp_r3);
    return temp_r3;
}

void *fn_8012C460(void) {
    extern void *lbl_802758F8;
    return (u8 *)&lbl_802758F8 + 0x11B;
}

s32 fn_8012C470(void) {
    extern void *lbl_80367240;
    extern s32 lbl_80367A88;

    u8 temp_r6 = fn_80109B0C(lbl_80367A88);
    s32 temp_r4 = *(s32 *)((u8 *)lbl_80367240 + 0x10);

    if (temp_r4 & 0x01000001) {
        temp_r6 -= 1;
    }
    if (temp_r4 & 0x02000002) {
        temp_r6 += 1;
    }
    if ((s32) temp_r6 > 0xFF) {
        temp_r6 = 0xFF;
    }
    if ((s32) temp_r6 < 0) {
        temp_r6 = 0;
    }

    fn_80109B00(lbl_80367A88, temp_r6);
    return 0;
}

M2C_UNK *fn_8012C4F0(void) {
    u8 fn_80109B24(s32);
    M2C_UNK fn_80231D94(M2C_UNK *, void *, u8, M2C_UNK *);
    extern M2C_UNK lbl_802758F8;
    extern M2C_UNK lbl_8032FE60;
    extern s32 lbl_80367A88;
    
    s32 r3 = lbl_80367A88;
    u8 r5 = fn_80109B24(r3);
    void *r4 = &lbl_802758F8 + 0x13C;
    M2C_UNK *r3_ptr = &lbl_8032FE60;
    
    fn_80231D94(r3_ptr, r4, r5, r3_ptr);
    return r3_ptr;
}

void *fn_8012C53C(void) {
    extern u16 lbl_802758F8[];
    return &(lbl_802758F8[0x14D]);
}

void *fn_8012C618(void) {
    extern u16 lbl_802758F8[];
    return &lbl_802758F8[0x2ED];
}

void *fn_8012C6F0(void) {
    extern char lbl_802758F8[];
    return &lbl_802758F8[0x19B];
}

s32 fn_8012C700(void) {
    M2C_UNK fn_80109B54(s32, f32);
    f32 fn_80109BA8(s32);
    extern void *lbl_80367240;
    extern s32 lbl_80367A88;
    extern f32 lbl_8036A4AC;
    extern f32 lbl_8036A4D8;
    f32 var_f1;
    s32 temp_r4;

    var_f1 = fn_80109BA8(lbl_80367A88);
    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 0x10);
    if (temp_r4 & 0x01000001) {
        var_f1 -= lbl_8036A4D8;
    }
    if (temp_r4 & 0x02000002) {
        var_f1 += lbl_8036A4D8;
    }
    if (var_f1 > lbl_8036A4AC) {
        var_f1 = lbl_8036A4AC;
    }
    if (var_f1 < lbl_8036A4D8) {
        var_f1 = lbl_8036A4D8;
    }
    fn_80109B54(lbl_80367A88, var_f1);
    return 0;
}

s32 fn_8012C9E8(void *arg1) {
    s32 *field = (s32*)((u8*)arg1 + 0x1A0);
    *field ^= 0x80000000;
    return 1;
}

s32 fn_8012D554(void) {
    return 0;
}

s32 fn_8012F26C(void) {
    return 0;
}

void fn_8012F5A8(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg0 = 0;
    *arg1 = 0x14;
    *arg2 = 0x30;
    *arg3 = 0x28;
}

void fn_801302C0(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1E0, 0);
}

s32 fn_80130858(void) {
    return 0;
}

void fn_80130860(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0, 0, 0x80, 0x1E0);
}

void fn_80130890(void) {
    fn_80225058(0, 0, 0x78, 0x1E0);
}

void fn_801308C0(void) {
    fn_80225058(0xF8, 0, 0x120, 0x1E0);
}

void fn_801308F0(void) {
    fn_80225058(0, 0x60, 0x260, 0x120);
}

void fn_80130920(void) {
    fn_80225058(0xF8, 0x60, 0x120, 0x120);
}
extern f32 lbl_8036A500;
extern f32 lbl_8036A50C;
extern f32 lbl_8036A510;
extern f32 lbl_8036A4F0;
extern u8 lbl_80275AC0[];
