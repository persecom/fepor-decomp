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

#pragma use_lmw_stmw on
#pragma global_optimizer off
#pragma cplusplus on
extern "C" void DCFlushRange(void *, u32);
extern "C" void fn_8000770C(f32, f32, f32, f32, f32, f32);
extern "C" void fn_80007884(void);
extern "C" void fn_80007898(s32);
extern "C" void fn_8000A03C(void *, void *, s32, s32);
extern "C" void fn_8000A174(void *, s32);
extern "C" void fn_8000A248(void);
extern "C" void fn_8000A258(void);
extern "C" s32 fn_80222CDC(void *);
extern "C" u32 fn_80222CE8(void *);
extern "C" void *memcpy(void *, const void *, u32);
extern "C" void fn_8005A79C(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4) {
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
        virtual void v8() = 0;
        virtual void v9() = 0;
        virtual void v10() = 0;
        virtual void v11() = 0;
        virtual s32 v12() = 0;
        virtual void v13() = 0;
        virtual s32 v14() = 0;
        virtual s32 v15() = 0;
    };
    Obj *obj = (Obj *)arg0;
    s32 src;
    s32 temp;
    s32 nbytes;
    s32 count;
    s32 off;
    u16 *buf;
    u16 pix;
    u16 r, g, b;
    s32 w;
    s32 cols;
    s32 h;
    f32 fx, fy, fw;

    if (arg3 != 0) {
        fn_8000A258();
        if (((u8 *)arg0)[0x40] != 0) {
            if (arg4[0] == 0 && arg4[1] == 0 && arg4[2] == 0) {
                fn_8000A03C((u8 *)arg0 + 4, (u8 *)arg0 + 0x24, 0, 0x11);
            } else {
                src = fn_80222CDC((u8 *)arg0 + 0x24);
                temp = fn_80222CE8((u8 *)arg0 + 0x24);
                nbytes = ((u16)temp) << 1;
                count = (u16)temp;
                memcpy(*(void **)((u8 *)arg0 + 0x3C), (void *)(src + 0x80000000), nbytes);
                off = 0;
                if (count > 0) {
                    do {
                        buf = *(u16 **)((u8 *)arg0 + 0x3C);
                        pix = *(u16 *)((u8 *)buf + off);
                        if (pix & 0x8000) {
                            r = (u16)(((s32)(pix & 0x7C00) >> 10) + ((s32)arg4[0] >> 3));
                            if (r > 0x1F) {
                                r = 0x1F;
                            }
                            g = (u16)(((s32)(pix & 0x3E0) >> 5) + ((s32)arg4[1] >> 3));
                            if (g > 0x1F) {
                                g = 0x1F;
                            }
                            b = (u16)((pix & 0x1F) + ((s32)arg4[2] >> 3));
                            if (b > 0x1F) {
                                b = 0x1F;
                            }
                            *(u16 *)((u8 *)buf + off) = (u16)(0x8000 | (r << 10) | (g << 5) | b);
                        }
                        off += 2;
                    } while (--count != 0);
                }
                DCFlushRange(*(void **)((u8 *)arg0 + 0x3C), nbytes);
                fn_8000A03C((u8 *)arg0 + 4, (u8 *)arg0 + 0x30, 0, 0x11);
            }
        } else {
            fn_8000A174((u8 *)arg0 + 4, 0x11);
        }
        fn_8000A248();
        w = obj->v14();
        cols = obj->v12();
        fx = (f32)(((arg3 - 1) % cols) * w);
        h = obj->v15();
        cols = obj->v12();
        fy = (f32)(((arg3 - 1) / cols) * h);
        fn_80007898(1);
        fw = (f32)obj->v15();
        fn_8000770C((f32)arg1, (f32)arg2, fx, fy, (f32)obj->v14(), fw);
        fn_80007884();
    }
}
#pragma cplusplus reset
#pragma global_optimizer reset
#pragma use_lmw_stmw reset

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

extern f32 lbl_80369184;
extern f64 lbl_80369190;
extern f32 lbl_80369188;
extern void* lbl_80367140;
