/* Functions from 0x8005A2A8 to 0x8005ADE4, found by decomp-toolkit. */
#include "common.h"

s32 fn_8005A2A8(void) {
    return 0;
}

s32 fn_8005A2B0(void) {
    return 1;
}

s32 fn_8005A2B8(void) {
    return 2;
}

s32 fn_8005A2C0(void) {
    return 6;
}

s32 fn_8005A2C8(void) {
    return 7;
}

s32 fn_8005A2D0(void) {
    return 8;
}

s32 fn_8005A2D8(void) {
    return 0;
}

s32 fn_8005A2E0(void) {
    return 0x300;
}

s32 fn_8005A2E8(void) {
    return 0xF0;
}

s32 fn_8005A2F0(void) {
    return 0x20;
}

s32 fn_8005A2F8(void) {
    return 0xA;
}

s32 fn_8005A300(void) {
    return 0x18;
}

s32 fn_8005A308(void) {
    return 0x18;
}

s32 fn_8005A310(void *arg0, u8 arg1, u8 arg2) {
    switch (arg1) {
    case 0:
    case 8:
        return 0x10;
    case 1:
        return 0x11;
    case 2:
        return 0x12;
    case 3:
        return 0x13;
    case 4:
        return 0x15;
    case 5:
        return 0x17;
    case 6:
        return 0x16;
    case 7:
        return arg2 ? 0x18 : 0x14;
    }
    return 0;
}

#pragma cplusplus on
extern "C" void fn_8005AC24(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct color {
        u8 r, g, b, a;
    };
    struct Obj {
        u8 pad[0x44];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5(s32, s32, s32, color) = 0;
    };
    extern const color lbl_8036C438;
    ((Obj *)arg0)->v5(arg1, arg2, arg3, lbl_8036C438);
}
#pragma cplusplus reset
void fn_8005AC5C(u32 *arg0) {
    M2C_UNK fn_8006EDA0();
    if ((u32) *arg0 != 0U) {
        fn_8006EDA0();
    }
}

extern s32 D_800F1340;
extern s32 D_800F1344;
extern s32 D_800F1348;
extern s32 D_800F134C;
extern s32 D_800F1350;
extern s32 D_800F1354;
extern s32 D_800F1358;
extern s32 D_800F135C;
extern s32 D_803B9610;
s32 fn_8005AC88(s32 arg0, s32 arg1) {
    s32 temp1;
    s32 temp2;

    if (arg0 <= 0) {
        D_800F1340 = 0;
        D_800F1344 = 0;
        D_800F1348 = 0;
        D_800F134C = 0;
        D_800F1350 = 0;
        D_800F1354 = 0;
        D_800F1358 = 0;
        D_800F135C = 0;
        return 0;
    }

    temp1 = arg1 < 0 ? -arg1 : arg1;
    temp2 = arg0 * arg0;

    // First part
    D_800F1340 = (temp1 + temp2 - 1) / temp2;
    D_800F1344 = 0;
    D_800F1348 = 0;
    D_800F134C = 0;
    D_800F1350 = 0;
    D_800F1354 = 0;
    D_800F1358 = 0;
    D_800F135C = 0;

    return D_800F1340;
}

#pragma cplusplus on
extern "C" void fn_8005C8B4(s32);
extern "C" void fn_8005ADB4(void *arg0) {
    struct Obj {
        u8 pad[0x44];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void v7() = 0;
        virtual s32 v8() = 0;
    };
    fn_8005C8B4(((Obj *)arg0)->v8());
}
#pragma cplusplus reset
#include "global.h"

extern s32 lbl_80369180;
extern f32 lbl_80369188;
extern f32 lbl_80369198;
extern f32 lbl_8036919C;
extern f32 lbl_803691A0;
#include "global.h"
#include "unit.h"

extern f32 lbl_80369184;
extern f64 lbl_80369190;
extern f32 lbl_80369188;
extern void* lbl_80367140;
