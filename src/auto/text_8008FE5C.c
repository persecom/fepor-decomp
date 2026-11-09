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

void fn_8008FFB0(s32 arg0, s32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    s32 fn_8000E0E4(u32);
    M2C_UNK fn_8001019C(s16, s16, M2C_UNK, s32);
    s32 fn_80010B78(M2C_UNK, f32);
    s32 fn_8008B1B0();
    extern f32 lbl_80369754;
    s32 temp_r27;
    s32 temp_r27_2;
    s32 temp_r31;
    s32 temp_r28;
    u32 temp_r4;
    u32 temp_r4_2;
    u32 temp_r4_3;

    temp_r28 = fn_8008B1B0();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    
    if (arg2 != 0U) {
        temp_r27 = fn_8000E0E4(arg2);
        temp_r4 = temp_r28 - fn_80010B78(-1, lbl_80369754);
        fn_8001019C((s16) (arg0 + ((s32) ((temp_r4 >> 0x1FU) + temp_r4) >> 1)), (s16) (arg1 + 0x1E), 2, temp_r27);
    }
    
    if (arg3 != 0U) {
        temp_r27_2 = fn_8000E0E4(arg3);
        temp_r4_2 = temp_r28 - fn_80010B78(-1, lbl_80369754);
        fn_8001019C((s16) (arg0 + ((s32) ((temp_r4_2 >> 0x1FU) + temp_r4_2) >> 1)), (s16) (arg1 + 0x3C), 8, temp_r27_2);
    }
    
    if (arg4 != 0U) {
        temp_r31 = fn_8000E0E4(arg4);
        temp_r4_3 = temp_r28 - fn_80010B78(-1, lbl_80369754);
        fn_8001019C((s16) (arg0 + ((s32) ((temp_r4_3 >> 0x1FU) + temp_r4_3) >> 1)), (s16) (arg1 + 0x54), 8, temp_r31);
    }
}

void fn_80090480(s32 arg0, s32 arg1, void* arg2, s32 arg3) {
    s32 sp14;
    s32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    
    s32 var_r3 = arg0;
    s32 var_r4 = arg1;
    void* var_r5 = arg2;
    s32 var_r6 = arg3;

    if (arg0 < 0) {
        var_r3 = -var_r3;
    }
    
    if (arg1 < 0) {
        var_r4 = -var_r4;
    }
    
    sp14 = arg1;
    sp18 = arg0; 
    
    sp1C = lbl_8036A118 * var_r3;
    sp20 = lbl_8036A120 * var_r4;
    sp24 = lbl_8036A130 * var_r3;
    sp28 = lbl_8036A154 * var_r4;
    
    if (arg3 == 0) {
        sp30 = sp1C + sp20 + sp24 + sp28;
        sp34 = sp1C - sp20 - sp24 - sp28;
    } else {
        sp30 = sp1C + sp20 + sp24 - sp28;
        sp34 = sp1C - sp20 - sp24 + sp28;
    }
    
    *(f32*)var_r5 = sp30;
    *((f32*)var_r5 + 1) = sp34;
}

void fn_800907B8(void *arg0) {
    s32 temp_r30;
    s32 var_r29;
    s32 var_r31;

    fn_8008BA80(0, 0, 1);
    fn_8008BBF8(0, 0x20, 0x108, 0x88, M2C_FIELD(M2C_FIELD(arg0, void **, 0x190), u8 *, 8), 0x9A);
    var_r31 = 0x2C;
    fn_8008CD64(lbl_80369768);
    var_r29 = 0;
    do {
        temp_r30 = fn_80037BBC(arg0, var_r29);
        fn_8008D510(temp_r30, fn_8001C0C8(), 0x1C, var_r31);
        var_r29 += 1;
        var_r31 += 0x1C;
    } while (var_r29 < 4);
}

void fn_80090874(void *arg0, s32 arg1) {
    s32 var_r29;
    u8 *var_r28;
    void *var_r27;
    u8 *var_r30;
    s32 var_r31;
    
    fn_8008BA80(0, 0, 1);
    fn_8008BBF8(0, 0x20, 0x108, 0x110, *(u8*)((u8*)arg0 + 0x190 + 0x8), 0x9A);
    
    var_r28 = (u8*)arg0 + 0x194;
    var_r29 = 0;
    var_r30 = (u8*)arg0 + 0x1F0;
    do {
        if (*(u32*)fn_80037BD0(arg0, var_r29) != 0) {
            *(u8*)var_r30 = fn_8003DAC4(arg1);
        }
        var_r29 += 1;
        var_r30 += 1;
    } while (var_r29 < 8);
    
    fn_8008CD64(lbl_80369768);
    
    var_r27 = arg0;
    var_r31 = 0;
    do {
        fn_80037BBC(var_r27, var_r31);
        fn_8008D510(*(u8*)var_r28, 0x1C, 0x2C, var_r31);
        var_r31 += 1;
        var_r28 += 1;
    } while (var_r31 < 4);
    
    var_r27 = arg0;
    var_r31 = 0;
    do {
        fn_8008D510(*(u8*)((u8*)var_r27 + 0x1EC), *(u8*)((u8*)var_r27 + 0x4), 0x1C, var_r31);
        var_r31 += 1;
        var_r27 = (void*)((u8*)var_r27 + 0x8);
    } while (var_r31 < 4);
}

void fn_80090990(void *arg0) {
    u8 sp8;
    s32 var_r29;
    u8 *var_r28;
    void *var_r27;
    u8 *var_r30;
    s32 var_r31;

    fn_8008BA80(0, 0, 1);
    fn_8008BBF8(0, 0x20, 0x108, 0x110, ((u8*)arg0 + 0x190)[8], 0x9A);
    
    var_r28 = &sp8;
    var_r29 = 0;
    var_r30 = var_r28;
    
    do {
        if (*(u32*)fn_80037BD0(arg0, var_r29) != 0) {
            *var_r30 = fn_80093DA8(arg0);
        }
        var_r29 += 1;
        var_r30 += 1;
    } while (var_r29 < 8);
    
    fn_8008CD64(lbl_80369768);
    
    var_r27 = arg0;
    var_r31 = 0;
    
    do {
        fn_80037BBC(var_r27, var_r31);
        fn_8008D510(*var_r28, 0x1C, 0x2C + (var_r31 * 0x1C));
        var_r31 += 1;
        var_r28 += 1;
    } while (var_r31 < 4);
    
    var_r27 = arg0;
    var_r31 = 0;
    
    do {
        fn_8008D510(((u8*)var_r27 + 0x1EC)[0], ((u8*)arg0 + 4)[0], 0x1C, 0x94 + (var_r31 * 0x1C));
        var_r31 += 1;
        var_r27 = (u8*)var_r27 + 8;
        var_r28 += 1;
    } while (var_r31 < 4);
}

void fn_8009127C(void *arg0, s32 arg1) {
    extern u8 lbl_8026CD60[];
    void *var_r3;
    
    var_r3 = arg0;
    if ((s8) *(u8 *)((u8 *)arg0 + 0x1F) != 0) {
        var_r3 = &lbl_8026CD60[0x1BD];
    } else if ((s8) *(u8 *)((u8 *)arg0 + 0x20) != 0) {
        var_r3 = &lbl_8026CD60[0x1C4];
    } else if ((s8) *(u8 *)((u8 *)arg0 + 0x21) != 0) {
        var_r3 = &lbl_8026CD60[0x1CC];
    } else if ((s8) *(u8 *)((u8 *)arg0 + 0x22) != 0) {
        var_r3 = &lbl_8026CD60[0x1D5];
    } else if ((s8) *(u8 *)((u8 *)arg0 + 0x23) != 0) {
        var_r3 = &lbl_8026CD60[0x1DE];
    } else if ((s8) *(u8 *)((u8 *)arg0 + 0x24) != 0) {
        var_r3 = &lbl_8026CD60[0x1E8];
    } else if ((s8) *(u8 *)((u8 *)arg0 + 0x25) != 0) {
        var_r3 = &lbl_8026CD60[0x1F1];
    } else if ((s8) *(u8 *)((u8 *)arg0 + 0x26) != 0) {
        var_r3 = &lbl_8026CD60[0x1F9];
    } else if ((s8) *(u8 *)((u8 *)arg0 + 0x28) != 0) {
        var_r3 = &lbl_8026CD60[0x202];
    } else if ((s8) *(u8 *)((u8 *)arg0 + 0x27) != 0) {
        var_r3 = &lbl_8026CD60[0x20C];
    }
    fn_8000E0E4(var_r3);
    fn_801B79A0(&lbl_8026CD60[0x1AC], arg1, 1);
}

void fn_800913D4(void **arg0, s32 arg1, s32 arg2) {
    M2C_UNK fn_8000D864(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8000D910(void *, s32, void *);
    s32 fn_8001D070(void **, M2C_UNK);
    s32 fn_8001D2C8(void **);
    s32 fn_80105BC0(s32, M2C_UNK);
    M2C_UNK fn_801B79A0(M2C_UNK, s32, M2C_UNK);
    M2C_UNK fn_80231E74(M2C_UNK *, M2C_UNK, void *, s32, s32, s32);
    extern u8 lbl_8026CD60[];
    M2C_UNK sp8;
    s32 temp_r31;
    u8 var_r30;
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r30 = *(u8 *)((uintptr_t)temp_r3 + 0x15);
    } else {
        var_r30 = 0;
    }
    temp_r31 = fn_8001D2C8(arg0);
    fn_80231E74(&sp8, 0x80, (void *)(lbl_8026CD60 + 0x214), fn_8001D070(arg0, 0), temp_r31, var_r30 + 0x60);
    fn_8000D864(0, &sp8);
    fn_8000D910((void *)(lbl_8026CD60 + 0x21F), fn_80105BC0(arg2 + 0x1BC, 1), lbl_8026CD60);
    fn_801B79A0(0, arg1, 0);
}

void fn_8009149C(s32 arg0, s32 arg1) {
    extern u8 lbl_8026CD60[];
    
    u8 *ptr;
    s32 temp_r31 = arg1;
    
    ptr = (u8 *)&lbl_8026CD60 + 0x228;
    fn_80231E74(&ptr, 0x80, ptr, arg0);
    fn_8000D864(0, &ptr);
    fn_8000E0E4((u8 *)&lbl_8026CD60 + 0x22B);
    fn_801B79A0((u8 *)&lbl_8026CD60 + 0x1AC, temp_r31, 0);
}

void fn_80091518(void **arg0, s32 arg1, s32 arg2) {
    void fn_8000D864(s32, void *);
    void fn_8000D910(void *, s32, void *);
    s32 fn_8001D070(void **, s32);
    s32 fn_8001D2C8(void **);
    s32 fn_80105BC0(s32, s32);
    void fn_801B79A0(void *, s32, s32);
    void fn_80231E74(void *, s32, void *, s32, s32, s32);
    extern u8 lbl_8026CD60[];
    
    void *temp_r3;
    s32 temp_r31;
    u8 var_r30;
    
    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r30 = *(u8 *)((uintptr_t)temp_r3 + 0x15);
    } else {
        var_r30 = 0;
    }
    
    temp_r31 = fn_8001D2C8(arg0);
    fn_80231E74(&temp_r31, 0x80, lbl_8026CD60 + 0x214, fn_8001D070(arg0, 0), temp_r31, var_r30 + 0x60);
    fn_8000D864(0, &temp_r31);
    fn_8000D910(lbl_8026CD60 + 0x25A, fn_80105BC0(arg2 + 0x1BC, 1), lbl_8026CD60);
    fn_801B79A0(lbl_8026CD60 + 0x23E, arg1, 0);
}

void fn_800916B8(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    u8 var_r30;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        var_r30 = *(u8 *)((char *)temp_r3 + 0x15);
    } else {
        var_r30 = 0;
    }
    
    fn_80231E74((void *)0x80, (void *)0, (u8 *)0x214, 
                fn_8001D070(arg0, 0), fn_8001D2C8(arg0), var_r30 + 0x60);
    
    fn_8000D864(0, (void *)0);
    
    fn_8000D910((void *)0x270, fn_80105BC0(arg2 + 0x1BC, 1), (void *)0);
    fn_801B79A0((void *)0x23E, arg1, 0);
}

void fn_80091788(void **arg0,s32 arg1,s32 arg2) {
 extern u8 lbl_8026CD60[];
 s32 fn_8001D2C8(void **); s32 fn_8001D070(void **,s32); void fn_80231E74(char *,s32,char *,s32,...);
 void fn_8000D864(s32,char *); s32 fn_80105BC0(s32,s32); void fn_8000D910(char *,s32,char *); void fn_801B79A0(char *,s32,s32);
 char sp8[0x80]; s32 result; u8 type; void *entry=*arg0;
 if(entry) type=*(u8 *)((u8 *)entry+0x15); else type=0;
 result=fn_8001D2C8(arg0);
 fn_80231E74(sp8,0x80,(char *)(lbl_8026CD60+0x214),fn_8001D070(arg0,0),result,type+0x60);
 fn_8000D864(0,sp8);
 fn_8000D910((char *)(lbl_8026CD60+0x27b),fn_80105BC0(arg2+0x1bc,1),(char *)lbl_8026CD60);
 fn_801B79A0((char *)(lbl_8026CD60+0x1ac),arg1,0);
}

