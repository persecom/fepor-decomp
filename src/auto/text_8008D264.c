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

typedef struct Vec4 {
    f32 v[4];
} Vec4;

extern Vec4 lbl_8026CD50;

#pragma scheduling reset

void fn_8008D264(void *arg0, u8 arg1, s32 arg2, s16 arg3, f32 farg0) {
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001019C(s16, s16, u8, void *, ...);
    s16 fn_80010B78(void *, s32, f32);
    void *fn_8001CB64(void *);
    u32 fn_8001D2A4(void *);
    u8 fn_8001D2C8(void *);
    void fn_80231D94(void *, void *, s32, ...);
    extern u16 lbl_8026CD08[];
    extern u8 lbl_802F0308[];
    extern f32 lbl_8036973C;
    extern f64 lbl_80369740;
    char sp8[0x10];
    u8 var_r25;
    u8 var_r26;
    u8 var_r3;
    u8 var_r4;
    u8 var_r0;
    void *temp_r3;
    s16 temp_r31;
    u32 temp_r26;
    u8 temp_r30;
    u64 flags;
    s32 scaled;

    if (*(void **)arg0 != NULL) {
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        scaled = (s32)(farg0 * (f32)(u16)fn_8001D2A4(arg0));
        fn_80231D94(sp8, (u8 *)lbl_8026CD08 + 0x2F, scaled);
        temp_r31 = fn_80010B78(sp8, -1, lbl_8036973C);
        temp_r26 = *(s32 *)(lbl_80330708 + 0x18);
        var_r25 = arg1 != 0;
        scaled = (s32)(farg0 * (f32)(u16)fn_8001D2A4(arg0));
        if (temp_r26 < scaled) {
            var_r25 = 0;
        }
        fn_8001019C((s16)(arg2 + (0x10E - temp_r31)), arg3, var_r25, sp8);
        var_r3 = 0;
        temp_r30 = arg1 != 0;
        if (arg1 != 0) {
            var_r3 = 4;
        }
        var_r26 = temp_r30;
        if (temp_r30 == 1 && (*(u8 *)((u8 *)arg0 + 5) & 0x3F)) {
            var_r26 = 4;
        }
        if ((*(u8 *)((u8 *)arg0 + 5) >> 6) & 1) {
            var_r26 = 3;
        }
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        fn_8001019C((s16)(arg2 + 0x18), arg3, var_r26, (u8 *)lbl_8026CD08 + 0x21, fn_8001D2C8(arg0));
        temp_r3 = fn_8001CB64(arg0);
        flags = *(u64 *)temp_r3;
        if ((flags & ((0x100ULL << 32) | 0x10)) == 0) {
            fn_8001019C((s16)(arg2 + 0xA2), arg3, temp_r30, (u8 *)lbl_8026CD08 + 0x34, *(u8 *)((u8 *)arg0 + 4));
            temp_r3 = *(void **)arg0;
            if (temp_r3 != NULL) {
                var_r4 = *((u8 *)temp_r3 + 0x18);
            } else {
                var_r4 = 0;
            }
            fn_8001019C((s16)(arg2 + 0xBC), arg3, var_r3, (u8 *)lbl_8026CD08 + 0x3A, var_r4);
        }
        temp_r3 = *(void **)arg0;
        if (temp_r3 != NULL) {
            var_r0 = *((u8 *)temp_r3 + 0x15);
        } else {
            var_r0 = 0;
        }
        fn_8005AC24(lbl_802F0308, arg2, arg3, var_r0 + 0x61);
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
