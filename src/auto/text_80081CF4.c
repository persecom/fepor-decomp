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

s32 fn_80081CF4(void) {
    extern f32 lbl_8036948C;
    extern f32 lbl_80369494;
    extern f32 lbl_8036955C;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369528;
    extern f32 lbl_803695AC;
    extern f32 lbl_803695B0;
    extern f32 lbl_80369470;

    s32 r27 = 0;
    s32 r31 = 0;
    f32 f1, f2, f3, f0, f29, f30, f31;
    
    f1 = lbl_8036948C;
    f3 = lbl_80369494;
    f0 = lbl_8036955C;
    
    f30 = f1 + f0;
    f29 = lbl_8036942C;

    fn_80086020(0, 0xb3, f30, f3);
    fn_8000A258();

    f0 = lbl_80369528;
    f2 = lbl_803695AC;
    f1 = lbl_803695B0;

    f31 = f2 + f29;
    f30 = f1 + f29;
    f0 = f0 + f30;

    while (r27 < 8) {
        if (r27 >= 4) {
            // Process in a loop to handle different branches
            f32 x = 192.0f;  // 0x43300000
            f32 y = *(f32*)0x80369470;
            
            if (r27 >= 4) {
                f0 = x - y;
                f29 = f31 + f0;
            } else {
                f0 = x - y;
                f29 = f30 + f0;
            }
        }
        
        // Call external function
        fn_80093DA8(r27, 0x4);
        
        if (r27 >= 4) {
            fn_8008D510(0, 0, f29);  // Parameters are guessed
        }
        
        r27++;
        r31 += 0x1C;
    }
    
    fn_8000A258();
    fn_80009C0C(0);
    fn_8000A248(); 

    return 0;
}

void fn_80083278(void *arg0) {
    extern M2C_UNK lbl_80330EAC;
    extern f32 lbl_80369430;
    extern f32 lbl_803695C8;
    fn_80082298(&lbl_80330EAC, 1, lbl_80369430 + M2C_FIELD(arg0, f32 *, 0x14), lbl_803695C8 + M2C_FIELD(arg0, f32 *, 0x18), lbl_80369430);
}

