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

void fn_8008FE5C(void* arg0, s32 arg1) {
    void* temp_r31;
    void* temp_r29;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r28;
    s32 var_r27;
    s32 var_r26;

    temp_r31 = (void*)((u8*)arg0 + 0x50);
    temp_r29 = (void*)((u8*)arg0 + 0x4C);
    temp_r3 = *(s32*)((u8*)arg0 + 0x48);
    if (temp_r3 > 0) {
        temp_r4 = 0;
        do {
            var_r26 = *(s32*)((u8*)temp_r31 + 0x20); // offset
            temp_r5 = *(s32*)((u8*)temp_r31 + 0x24); // offset

            if (var_r26 != -1) {
                var_r27 = *(s32*)((u8*)temp_r31 + 0x28);
                temp_r6 = *(s32*)((u8*)temp_r31 + 0x2C);

                if (var_r27 < temp_r5) {
                    temp_r7 = var_r27 - temp_r5;
                    lbl_80330708[0xA8] = *(u8*)((u8*)temp_r31 + 0x9);
                    lbl_80330708[0xAC] = temp_r6;
                    lbl_80330708[0xB0] = var_r26;
                    temp_r3 = *(s32*)((u8*)arg0 + 0x48);
                }
            }
            temp_r4 += 1;
            temp_r31 = (void*)((u8*)temp_r31 + 0x30);
        } while (temp_r4 < temp_r3);
    }

    *(s32*)((u8*)arg0 + 0x1C) = arg1;
    *(s32*)((u8*)arg0 + 0x30) = *(s32*)"0"; // This is just placeholder for the symbol
}

#pragma use_lmw_stmw on
void fn_8008FFB0(s32 arg0, s32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    void *fn_8000E0E4(u32);
    void fn_8001019C(s16, s16, u8, void *, ...);
    s32 fn_80010B78(void *, s32, f32);
    s32 fn_8008B1B0();
    extern f32 lbl_80369754;
    void *temp_r27;
    void *temp_r27_2;
    s32 temp_r28;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    temp_r28 = fn_8008B1B0();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    if (arg2 != 0U) {
        temp_r27 = fn_8000E0E4(arg2);
        temp_r4 = temp_r28 - fn_80010B78(temp_r27, -1, lbl_80369754);
        fn_8001019C((s16) (arg0 + temp_r4 / 2), (s16) (arg1 + 0x1E), 2, temp_r27);
    }
    if (arg3 != 0U) {
        temp_r27_2 = fn_8000E0E4(arg3);
        temp_r4_2 = temp_r28 - fn_80010B78(temp_r27_2, -1, lbl_80369754);
        fn_8001019C((s16) (arg0 + temp_r4_2 / 2), (s16) (arg1 + 0x3C), 8, temp_r27_2);
    }
    if (arg4 != 0U) {
        arg4 = (u32) fn_8000E0E4(arg4);
        temp_r4_3 = temp_r28 - fn_80010B78((void *) arg4, -1, lbl_80369754);
        fn_8001019C((s16) (arg0 + temp_r4_3 / 2), (s16) (arg1 + 0x54), 8, (void *) arg4);
    }
}

#pragma use_lmw_stmw off
#pragma global_optimizer off
#pragma opt_strength_reduction off
void fn_800900F4(u8 *arg0) {
    void fn_8008BA80(void *, s32, s32, s32);
    void fn_8007D044(s32, u8, f32, f32, f32, f32);
    void fn_8008CD64(f32);
    void fn_8008CD34(void);
    s8 fn_8003B2D0(void *);
    s8 fn_8003A1E0(void *);
    void *fn_8000E0E4(char *);
    void fn_8001003C(s16, s32, s32, s32, s32, char *, ...);
    s32 fn_8010418C(void *, s32);
    s32 fn_8010424C(void *);
    void fn_8005AC24(void *, s32, s32, s32);
    void fn_80090E0C(s32, s32, u8);
    void *fn_800A8A88(void *);
    s32 fn_80010B78(void *, s32, f32);
    void fn_8001019C(s16, s16, s32, void *, ...);
    extern f32 lbl_80369764, lbl_80369780, lbl_80369784, lbl_80369788, lbl_80369768, lbl_80369754;
    extern char lbl_8026CD60[];
    extern u8 lbl_802F0308[];
    u8 *self;
    s32 t;
    s32 b;
    s32 x;
    void *p;
    u8 *por;
    f32 f1, f2, f3, f4;

    self = arg0;
    fn_8008BA80(self, 0, 0, 0);
    por = *(u8 **)(self + 0x190);
    f1 = lbl_80369764;
    f2 = lbl_80369780;
    f3 = lbl_80369784;
    f4 = lbl_80369788;
    fn_8007D044(0xB3, por[8], f1, f2, f3, f4);
    fn_8008CD64(lbl_80369768);
    fn_8008CD34();
    b = self[0x1A8];
    t = fn_8003B2D0(self);
    p = fn_8000E0E4(lbl_8026CD60 + 0x111);
    fn_8001003C(0x10, 0x2C, 1, 1, 0, lbl_8026CD60 + 0xFA, p, (s8)b, lbl_80369754, lbl_80369764, (s8)t);
    t = fn_8003A1E0(self);
    p = fn_8000E0E4(lbl_8026CD60 + 0x126);
    fn_8001003C(0x86, 0x2C, 1, 1, 0, lbl_8026CD60 + 0x117, p, (s8)t, lbl_80369754, lbl_80369764);
    p = fn_8000E0E4(lbl_8026CD60 + 0x135);
    fn_8001003C(0x10, 0x48, 1, 1, 0, lbl_8026CD60 + 0x12D, p, lbl_80369754, lbl_80369764);
    b = 0;
    t = (s32)lbl_802F0308;
    x = 0x48;
    while (b < fn_8010424C(self + 0x1A4)) {
        fn_8005AC24((void *)t, x, 0x4A, fn_8010418C(self + 0x1A4, b));
        x += 0x1A;
        b += 1;
    }
    self = *(u8 **)(self + 0x194);
    fn_80090E0C(9, 0x68, ((u8 *)*(void **)(self + 0x190))[8]);
    fn_8008CD64(lbl_80369768);
    fn_8008CD34();
    b = (0xCF - fn_80010B78(fn_800A8A88(*(void **)(self + 0x188)), -1, lbl_80369754)) / 2;
    fn_8001019C((s16)(b + 9), 0x6C, 1, fn_800A8A88(*(void **)(self + 0x188)));
    fn_8001019C((s16)(b - 0xF), 0x6C, 1, lbl_8026CD60 + 0x13D);
    b = self[0x1A8];
    t = fn_8003B2D0(self);
    p = fn_8000E0E4(lbl_8026CD60 + 0x111);
    fn_8001003C(0x10, 0x90, 1, 1, 0, lbl_8026CD60 + 0xFA, p, (s8)b, lbl_80369754, lbl_80369764, (s8)t);
    t = fn_8003A1E0(self);
    p = fn_8000E0E4(lbl_8026CD60 + 0x126);
    fn_8001003C(0x86, 0x90, 1, 1, 0, lbl_8026CD60 + 0x117, p, (s8)t, lbl_80369754, lbl_80369764);
    p = fn_8000E0E4(lbl_8026CD60 + 0x135);
    fn_8001003C(0x10, 0xAC, 1, 1, 0, lbl_8026CD60 + 0x12D, p, lbl_80369754, lbl_80369764);
    b = 0;
    t = (s32)lbl_802F0308;
    x = 0x48;
    while (b < fn_8010424C(self + 0x1A4)) {
        fn_8005AC24((void *)t, x, 0xAE, fn_8010418C(self + 0x1A4, b));
        x += 0x1A;
        b += 1;
    }
}

