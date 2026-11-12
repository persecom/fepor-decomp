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

void fn_8008D86C(u8 *arg0) {
    extern u8 lbl_803674FC;
    *(&lbl_803674FC + (s8)arg0[0x3d]) = 0;
}

s32 fn_8008D988(void) {
    extern u16 lbl_8026CD60[];
    fn_8000BD98((u8 *)lbl_8026CD60 + 0xE3);
    return 0;
}

#pragma use_lmw_stmw on
s32 fn_8008D9B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_80289A8C[];
    void *obj;

    if (fn_8000C0C0(lbl_80289A8C) != NULL) {
        obj = fn_8000C0C0(lbl_80289A8C);
    } else {
        obj = fn_8000CAF0(lbl_80289A8C, 3);
    }
    *(s32 *)((u8 *)obj + 0x34) = arg0;
    *(s32 *)((u8 *)obj + 0x38) = arg1;
    *(s32 *)((u8 *)obj + 0x3C) = arg2;
    *(s32 *)((u8 *)obj + 0x40) = arg3;
    *(s32 *)((u8 *)obj + 0x44) = arg4;
    *(s32 *)((u8 *)obj + 0x48) = arg5;
    *(u8 *)((u8 *)obj + 0x4C) = arg6 != 0;
    return 0;
}
#pragma use_lmw_stmw reset

