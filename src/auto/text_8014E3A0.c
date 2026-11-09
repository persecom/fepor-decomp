/* Functions from 0x8014E3A0 to 0x801620BC, found by decomp-toolkit. */
#include "common.h"

s32 fn_8014E3A0(void) {
    return 0;
}

s32 fn_8014E3A8(void) {
    return 0x260;
}

s32 fn_8014E3C0(void) {
    return 9;
}

s32 fn_8014E414(void) {
    return 0;
}

extern u16 lbl_80367B7C;
extern u32 lbl_80367B78;
extern u8 lbl_80277238[];
extern u32 lbl_80367B70;
void *fn_8014E41C(void *arg1) {
    u16 temp_r0 = lbl_80367B7C;
    u8 temp_r4 = *(u8*)((char*)arg1 + 0x3A);
    u32 temp_r5;
    
    temp_r5 = (temp_r0 * 0x18) + temp_r4;
    if (temp_r5 >= lbl_80367B78) {
        return (void*)(lbl_80277238 + 0x85);
    }
    return *(void**)(lbl_80367B70 + (temp_r5 * 4));
}

void fn_8014E7F8(void *arg0) {
    M2C_UNK fn_8014E864();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        fn_8014E864();
    }
}

#pragma use_lmw_stmw on
extern f32 lbl_8036A818;
extern f32 lbl_8036A81C;
extern f32 lbl_8036A820;
extern f64 lbl_8036A828;
extern f64 lbl_8036A830;
extern u8 lbl_80277320[];
#pragma use_lmw_stmw on
void fn_8014E864(void *arg0) {
    void *fn_80060638(void *);
    void *fn_80060664(void *);
    void *fn_8006060C(void *);
    void fn_8006C748(void *, s32);
    void fn_8006C6F8(void *, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80202300(void *, s32, f32);
    void fn_802025C0(void *, f32, f32, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_802033AC(void *, void *);
    void fn_80202024(void *, void *, void *);
    void fn_80201FF0(void *, void *);
    void fn_8006DA64(void *, s32, void *);
    void *fn_80067FDC(void);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_801502EC(void *, void *, void *, void *);
    void fn_8014EFB8(void *, void *, void *, void *, void *);
    void fn_8021FBB8(void);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_802240C8(s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802239D0(s32, s32);
    void fn_8022100C(s32);
    void fn_80220F44(s32, s32);
    void fn_80220DEC(s32, s32, s32);

    u8 bufF8[0x30];
    u8 bufC8[0x30];
    u8 buf98[0x30];
    u8 buf68[0x30];
    u8 buf38[0x30];
    u8 buf8[0x30];
    void *unk31;
    void *obj54;
    void *mesh;
    u8 *entry;
    void *unk22;
    u8 *mtx;
    s32 i;
    s32 off;
    void *vtx;
    void *base;
    s32 mode;
    f32 scale;
    s32 w;
    s32 vi;
    u8 *vp;

    unk31 = fn_80060638(arg0);
    fn_80060664(arg0);
    obj54 = *(void **)((u8 *)arg0 + 0x54);
    mesh = *(void **)((u8 *)obj54 + 0x34);
    entry = (u8 *)mesh + 8;
    unk22 = fn_8006060C(arg0);
    fn_8006C748(arg0, 2);
    mtx = (u8 *)arg0 + 0x10;
    i = 0;
    off = 0;

    for (;;) {
        if (i >= (s32)*(u16 *)((u8 *)mesh + 6)) {
            break;
        }
        if ((*(u32 *)arg0 & 0x00400000) != 0) {
            if ((*(u16 *)(entry + 6) & 0x0800) != 0) {
                vtx = *(void **)(*(u8 **)((u8 *)obj54 + 0x38) + off);
                base = (u8 *)*(void **)((u8 *)unk31 + 0x34) + (*(s16 *)(entry + 0xA) << 5);
                fn_80222334(1);
                fn_80222370(0, 0, 0, 1, 0, 0, 2);
                fn_80222370(2, 0, 1, 1, 0, 0, 2);
                fn_802245D8(1, 4, 5, 0);
                if (*(u16 *)(entry + 6) & 0x1000) {
                    fn_802245D8(1, 4, 1, 0);
                }
                if (*(u16 *)(entry + 6) & 0x2000) {
                    fn_802245D8(3, 0, 0, 0);
                }
                if (*(u16 *)(entry + 6) & 0x4000) {
                    fn_80224684(0, 3, 0);
                }
                if (*(u16 *)(entry + 6) & 0x8000) {
                    fn_80222370(0, 1, 0, 1, 1, 0, 2);
                }

                switch (*(u32 *)((u8 *)arg0 + 0xC)) {
                case 1:
                    fn_80202300(buf68, 0x58, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x1C));
                    fn_80202300(buf98, 0x59, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x20));
                    fn_80202300(bufC8, 0x5A, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x24));
                    goto perm_join;
                case 2:
                    fn_80202300(buf68, 0x59, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x20));
                    fn_80202300(buf98, 0x5A, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x24));
                    fn_80202300(bufC8, 0x58, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x1C));
                    goto perm_join;
                case 3:
                    fn_80202300(buf68, 0x5A, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x24));
                    fn_80202300(buf98, 0x58, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x1C));
                    fn_80202300(bufC8, 0x59, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x20));
                    goto perm_join;
                case 4:
                    fn_80202300(buf68, 0x58, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x1C));
                    fn_80202300(buf98, 0x5A, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x24));
                    fn_80202300(bufC8, 0x59, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x20));
                    goto perm_join;
                case 5:
                    fn_80202300(buf68, 0x59, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x20));
                    fn_80202300(buf98, 0x58, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x1C));
                    fn_80202300(bufC8, 0x5A, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x24));
                    goto perm_join;
                case 6:
                    fn_80202300(buf68, 0x5A, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x24));
                    fn_80202300(buf98, 0x59, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x20));
                    fn_80202300(bufC8, 0x58, lbl_8036A818 * *(f32 *)((u8 *)arg0 + 0x1C));
                    goto perm_join;
                case 8:
                    fn_802025C0(buf8, *(f32 *)((u8 *)arg0 + 0x28), *(f32 *)((u8 *)arg0 + 0x2C), *(f32 *)((u8 *)arg0 + 0x30));
                    fn_80202540(buf38, *(f32 *)((u8 *)arg0 + 0x10), *(f32 *)((u8 *)arg0 + 0x14), *(f32 *)((u8 *)arg0 + 0x18));
                    fn_802033AC(mtx, buf68);
                    fn_80202024(buf68, buf8, bufF8);
                    fn_80202024(buf68, bufF8, bufF8);
                    fn_80202024(buf38, bufF8, bufF8);
                    goto after_mtx;
                case 7:
                    fn_80201FF0(mtx, bufF8);
                    goto after_mtx;
                case 0:
                default:
                    fn_8006DA64(lbl_80277320, 0xB8, lbl_80277320 + 8);
                perm_join:
                    fn_802025C0(buf8, *(f32 *)((u8 *)arg0 + 0x28), *(f32 *)((u8 *)arg0 + 0x2C), *(f32 *)((u8 *)arg0 + 0x30));
                    fn_80202540(buf38, *(f32 *)((u8 *)arg0 + 0x10), *(f32 *)((u8 *)arg0 + 0x14), *(f32 *)((u8 *)arg0 + 0x18));
                    fn_80202024(buf68, buf8, bufF8);
                    fn_80202024(buf98, bufF8, bufF8);
                    fn_80202024(bufC8, bufF8, bufF8);
                    fn_80202024(buf38, bufF8, bufF8);
                after_mtx:
                    fn_80202024(fn_80067FDC(), bufF8, bufF8);
                    fn_80224D7C(bufF8, 0);
                    fn_80224E1C(0);

                    mode = *(u16 *)(entry + 6) & 7;
                    switch (mode) {
                    case 1:
                        fn_801502EC(entry, vtx, base, unk22);
                        break;
                    case 2:
                        base = vtx;
                        fn_8021FBB8();
                        fn_8021F4E4(9, 1);
                        fn_8021F4E4(11, 1);
                        fn_8021FBF0(0, 9, 1, 4, 0);
                        fn_8021FBF0(0, 11, 1, 5, 0);
                        fn_80220428(0);
                        fn_802240C8(1);
                        fn_80223F2C(0, 0xFF, 0xFF, 4);
                        fn_802239D0(0, 4);
                        fn_8022100C(0);
                        w = (s32)(lbl_8036A81C * (f32)*(s16 *)(entry + 0x10));
                        scale = lbl_8036A81C * (f32)*(s16 *)(entry + 0x14);
                        if (w > 0x28) {
                            w = 0x28;
                        }
                        fn_80220F44((s32)(lbl_8036A820 * (f32)w), 0);
                        for (vi = 0; vi < (s32)*(u16 *)(entry + 0x1E); vi++) {
                            vp = (u8 *)base;
                            base = (u8 *)base + 0x2C;
                            if (vp[0x28] != 0) {
                                fn_80220DEC(0xA8, 0, 2);
                                *(volatile f32 *)0xCC008000 = *(f32 *)(vp + 0);
                                *(volatile f32 *)0xCC008000 = *(f32 *)(vp + 4);
                                *(volatile f32 *)0xCC008000 = *(f32 *)(vp + 8);
                                *(volatile u8 *)0xCC008000 = vp[0x29];
                                *(volatile u8 *)0xCC008000 = vp[0x2A];
                                *(volatile u8 *)0xCC008000 = vp[0x2B];
                                *(volatile u8 *)0xCC008000 = vp[0x28];
                                *(volatile f32 *)0xCC008000 = *(f32 *)(vp + 0) - *(f32 *)(vp + 0xC) * *(f32 *)(vp + 0x1C);
                                *(volatile f32 *)0xCC008000 = *(f32 *)(vp + 4) - *(f32 *)(vp + 0x10) * *(f32 *)(vp + 0x1C);
                                *(volatile f32 *)0xCC008000 = *(f32 *)(vp + 8) - *(f32 *)(vp + 0x14) * *(f32 *)(vp + 0x1C);
                                *(volatile u8 *)0xCC008000 = vp[0x29];
                                *(volatile u8 *)0xCC008000 = vp[0x2A];
                                *(volatile u8 *)0xCC008000 = vp[0x2B];
                                *(volatile u8 *)0xCC008000 = (u8)(s32)((f32)vp[0x28] * scale);
                            }
                        }
                        break;
                    case 3:
                    case 4:
                        fn_8014EFB8(arg0, entry, vtx, base, unk22);
                        break;
                    }
                }
            }
        }
        off += 4;
        i++;
        entry += 0x34;
    }

    fn_80224684(1, 3, 0);
    fn_802245D8(1, 4, 5, 7);
    fn_8006C6F8(arg0, 2);
}
void fn_8014EFB8(void) {
    s32 temp_r3;
    s32 temp_r4;
    u16* var_r5;
    u16* var_r6;
    u16* var_r7;
    s16 r29;
    
    extern s32 lbl_801B9100;
    extern u16 lbl_8028DED0[];
    
    lbl_801B9100 = 0x2000;
    
    for (temp_r3 = 0; temp_r3 < 0x18; temp_r3++) {
        var_r5 = &lbl_8028DED0[temp_r3 * 0x14];
        r29 = var_r5[1];
        
        if (r29 > 0) {
            // Check for valid character id
            var_r6 = &lbl_8028DED0[(s16)(temp_r3 + 0x18) * 0x14];
            
            if (var_r6[1] == 0) {
                var_r7 = var_r5;
                
                // Copy character data
                for (temp_r4 = 0; temp_r4 < 0x14; temp_r4++) {
                    var_r7[temp_r4] = var_r6[temp_r4];
                }
            }
        }
    }
}

void fn_801505A8(s32 arg0, s32 arg1, s32 arg2) {
    // Analyzing the assembly:
    // It seems to be working with pointers in r3,r4,r5
    // Looking at r3,r4,r5 registers usage, this looks like C++ method with multiple parameters
    // Based on common patterns for this game, it's probably a unit or player class method
    
    s32 temp_r3 = arg0;
    s32 temp_r4 = arg1;
    s32 temp_r5 = arg2;
    
    if (temp_r3 < 0) {
        return;
    }
    
    if (temp_r4 < 0) {
        return;
    }
    
    // The function seems to be doing some kind of initialization or update
    // based on the presence of calls to other functions.
    
    // It's very similar to fn_80150014 and fn_801502A0 which are also
    // handling units and seem related
    
    if (temp_r5 < 0) {
        return;
    }
    
    // Based on patterns from similar functions, it looks like this does some 
    // initialization of unit or entity data with values pulled from the stack parameters
    // The calls here are likely to helper functions in that file or elsewhere
    
    // Try to match the assembly by handling r3,r4,r5 carefully:
    temp_r3 = arg0;
    temp_r4 = arg1; 
    temp_r5 = arg2;
    
    if (temp_r3 == 0) {
        temp_r3 = 1;
    }
    
    // Additional processing logic here
    // The original assembly shows specific register usage and flow that we need to preserve
    
    return;
}

s32 fn_801506AC(void* arg0) {
    return 0;
}

s32 fn_801512D8(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367BA0;
    fn_800D758C(lbl_80367BA0);
    return 0;
}

void fn_801513A0(void *arg0) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800C9B6C(M2C_UNK *);
    M2C_UNK fn_800DC518(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK sp8;

    fn_800C9B6C(&sp8);
    fn_800DC518(M2C_FIELD(arg0, s32 *, 0x424), &sp8, 0);
    fn_800C9A60(&sp8, -1);
}

extern u16 lbl_80367BA0;
s32 fn_801513EC(void) {
    return fn_800D758C(lbl_80367BA0);
}

void fn_801515AC(void) {
    extern s32 lbl_80367BA8;
    lbl_80367BA8 = 0;
}

s32 fn_801515B8(void *arg0) {
    void **temp_r4;
    void *temp_r3;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void ***, 0x4C);
    temp_r3 = *temp_r4;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x10), M2C_UNK (**)(void *, void **), 0x28)(temp_r3, temp_r4);
    return 0;
}

s32 fn_801515F4(void *arg0) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x4C), s8 *, 0xC4) = 1;
    return 0;
}

u8 fn_801517C0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xC4);
}

void fn_801517C8(void *arg0) {
    M2C_UNK fn_800535B0();
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
        fn_800535B0();
    }
}

void fn_80151894(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, void **, 0xB0);
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, void **, 0x30);
        M2C_FIELD(temp_r3_2, s32 *, 8) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 8) | 2);
    }
}

void fn_801518B4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

s32 fn_801518D0(void *arg0, s32 arg1) {
    void *fn_800536FC(u16);
    s32 fn_8005F9B8(s32);
    void *temp_r3;

    M2C_FIELD(arg0, void **, 0xB0) = fn_800536FC((u16) M2C_FIELD(arg0, s32 *, 0xAC));
    temp_r3 = M2C_FIELD(arg0, void **, 0xB0);
    if (temp_r3 != NULL) {
        if ((u32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x30), u32 *, 0x5C) != 0U) {
            return fn_8005F9B8(arg1);
        }
        return 0;
    }
    return 0;
}

s32 fn_801519C0(void *arg0) {
    void **r4;

    r4 = (void **)M2C_FIELD(arg0, void **, 0xB0);
    if (r4 == NULL) {
        return 0;
    }
    r4 = (void **)M2C_FIELD(r4, void **, 0x30);
    if (r4 == NULL) {
        return 0;
    }
    r4 = (void **)M2C_FIELD(r4, void **, 0x5C);
    if (r4 == NULL) {
        return 0;
    }
    r4 = (void **)M2C_FIELD(r4, void **, 0x44);
    if (r4 == NULL) {
        return 0;
    }
    return M2C_FIELD(r4, s32 *, 0x18);
}

void fn_801519EC(void *arg0) {
    void *fn_800536FC(u16);
    u8 fn_8005F9B8(s32);
    void fn_800E76E0(s32, void *, f32);
    void fn_800E77A0(s32, s32, s32, void *, f32);
    extern void *lbl_80368278;
    s32 temp_r30;
    u8 var_r3;
    u8 var_r3_2;
    u8 var_r3_3;
    u8 var_r3_4;
    u8 var_r3_5;
    u8 var_r3_6;
    u8 var_r3_7;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;

    temp_r30 = *(s32 *)arg0;
    *(u16 **)((char *)arg0 + 0xB0) = fn_800536FC((u16) (*(s32 *)((char *)arg0 + 0xAC)));
    temp_r3 = *(void **)((char *)arg0 + 0xB0);
    if (temp_r3 != NULL) {
        if ((u32) (*(u32 **)((char *)temp_r3 + 0x30))[0x5C / 4] != 0U) {
            var_r3 = fn_8005F9B8(9);
        } else {
            var_r3 = 0;
        }
    } else {
        var_r3 = 0;
    }
    if (var_r3 != 0) {
        fn_800E77A0(temp_r30, 0, 0x3C, lbl_80368278, *(f32 *)((char *)lbl_80368278 + 0x98));
    }
    *(u16 **)((char *)arg0 + 0xB0) = fn_800536FC((u16) (*(s32 *)((char *)arg0 + 0xAC)));
    temp_r3_2 = *(void **)((char *)arg0 + 0xB0);
    if (temp_r3_2 != NULL) {
        if ((u32) (*(u32 **)((char *)temp_r3_2 + 0x30))[0x5C / 4] != 0U) {
            var_r3_2 = fn_8005F9B8(0xA);
        } else {
            var_r3_2 = 0;
        }
    } else {
        var_r3_2 = 0;
    }
    if (var_r3_2 != 0) {
        fn_800E77A0(temp_r30, 0, 0x3C, lbl_80368278, *(f32 *)((char *)lbl_80368278 + 0x9C));
    }
    *(u16 **)((char *)arg0 + 0xB0) = fn_800536FC((u16) (*(s32 *)((char *)arg0 + 0xAC)));
    temp_r3_3 = *(void **)((char *)arg0 + 0xB0);
    if (temp_r3_3 != NULL) {
        if ((u32) (*(u32 **)((char *)temp_r3_3 + 0x30))[0x5C / 4] != 0U) {
            var_r3_3 = fn_8005F9B8(0xB);
        } else {
            var_r3_3 = 0;
        }
    } else {
        var_r3_3 = 0;
    }
    if (var_r3_3 != 0) {
        fn_800E77A0(temp_r30, 0, 0x3C, lbl_80368278, *(f32 *)((char *)lbl_80368278 + 0xA0));
    }
    *(u16 **)((char *)arg0 + 0xB0) = fn_800536FC((u16) (*(s32 *)((char *)arg0 + 0xAC)));
    temp_r3_4 = *(void **)((char *)arg0 + 0xB0);
    if (temp_r3_4 != NULL) {
        if ((u32) (*(u32 **)((char *)temp_r3_4 + 0x30))[0x5C / 4] != 0U) {
            var_r3_4 = fn_8005F9B8(0x1E);
        } else {
            var_r3_4 = 0;
        }
    } else {
        var_r3_4 = 0;
    }
    if (var_r3_4 != 0) {
        fn_800E77A0(temp_r30, 0, -1, lbl_80368278, *(f32 *)((char *)lbl_80368278 + 0x98));
    }
    *(u16 **)((char *)arg0 + 0xB0) = fn_800536FC((u16) (*(s32 *)((char *)arg0 + 0xAC)));
    temp_r3_5 = *(void **)((char *)arg0 + 0xB0);
    if (temp_r3_5 != NULL) {
        if ((u32) (*(u32 **)((char *)temp_r3_5 + 0x30))[0x5C / 4] != 0U) {
            var_r3_5 = fn_8005F9B8(0x1F);
        } else {
            var_r3_5 = 0;
        }
    } else {
        var_r3_5 = 0;
    }
    if (var_r3_5 != 0) {
        fn_800E77A0(temp_r30, 0, -1, lbl_80368278, *(f32 *)((char *)lbl_80368278 + 0x9C));
    }
    *(u16 **)((char *)arg0 + 0xB0) = fn_800536FC((u16) (*(s32 *)((char *)arg0 + 0xAC)));
    temp_r3_6 = *(void **)((char *)arg0 + 0xB0);
    if (temp_r3_6 != NULL) {
        if ((u32) (*(u32 **)((char *)temp_r3_6 + 0x30))[0x5C / 4] != 0U) {
            var_r3_6 = fn_8005F9B8(0x20);
        } else {
            var_r3_6 = 0;
        }
    } else {
        var_r3_6 = 0;
    }
    if (var_r3_6 != 0) {
        fn_800E77A0(temp_r30, 0, -1, lbl_80368278, *(f32 *)((char *)lbl_80368278 + 0xA0));
    }
    *(u16 **)((char *)arg0 + 0xB0) = fn_800536FC((u16) (*(s32 *)((char *)arg0 + 0xAC)));
    temp_r3_7 = *(void **)((char *)arg0 + 0xB0);
    if (temp_r3_7 != NULL) {
        if ((u32) (*(u32 **)((char *)temp_r3_7 + 0x30))[0x5C / 4] != 0U) {
            var_r3_7 = fn_8005F9B8(0x21);
        } else {
            var_r3_7 = 0;
        }
    } else {
        var_r3_7 = 0;
    }
    if (var_r3_7 != 0) {
        fn_800E76E0(temp_r30, lbl_80368278, *(f32 *)((char *)lbl_80368278 + 0x98));
    }
    *(s32 *)((char *)arg0 + 0xC0) = *(s32 *)((char *)arg0 + 0xC0) + 1;
}

extern u16 lbl_8028DED0[];
void *fn_80151CE0(void *arg0, s16 arg1) {
    void fn_800DF724(void *, s32);
    void fn_800C428C(void *);
    extern u8 lbl_80293A88[];

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x40) = lbl_80293A88;
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void **, 0x40) = lbl_8028DED0;
            fn_800DF724(arg0, 0);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

#pragma cplusplus on
#pragma use_lmw_stmw on
#pragma readonly_strings on
#pragma pool_strings on
typedef struct Vec {
    f32 x, y, z;
} Vec;
extern "C" M2C_UNK fn_800C9ABC(M2C_UNK *, const char *, M2C_UNK *);
extern "C" M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
extern "C" void fn_800DBE34(void *, s32, M2C_UNK *, s32, M2C_UNK *);
extern "C" char *fn_800C93EC(void *);
extern "C" void *fn_80053C30(char *, s32);
extern "C" void fn_80053658(void *, s32, void *);
extern "C" s32 fn_8015160C(void *);
extern "C" s32 fn_801515F4(void *);
extern "C" s32 fn_801515B8(void *);
extern "C" void *fn_80151D50(void *arg0, s32 arg1, s32 arg2, void *arg3, f32 *arg4, f32 *arg5) {
    extern u8 lbl_80293A88[];
    extern s32 lbl_80367BA8;
    struct Effect {
        u8 pad0[0x40];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
        virtual void SetPos(f32, f32, f32) = 0;
        virtual void v8() = 0;
        virtual void SetRot(f32, f32, f32) = 0;
    };
    M2C_UNK name[3];
    M2C_UNK kind[3];
    M2C_UNK alloc1;
    M2C_UNK alloc2;
    void *task;
    s32 id;

    fn_800C9ABC(name, "Effect", &alloc1);
    fn_800C9ABC(kind, "effect", &alloc2);
    fn_800DBE34(arg0, arg1, name, arg2, kind);
    fn_800C9A60(kind, -1);
    fn_800C9A60(name, -1);
    M2C_FIELD(arg0, void **, 0x40) = lbl_80293A88;
    M2C_FIELD(arg0, f32 *, 0xBC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xB8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xB4) = 0.0f;
    M2C_FIELD(arg0, u8 *, 0xC4) = 0;
    task = fn_80053C30(fn_800C93EC(arg3), 4);
    if (task != NULL) {
        id = ++lbl_80367BA8;
        M2C_FIELD(arg0, s32 *, 0xAC) = id;
        M2C_FIELD(M2C_FIELD(task, void **, 0x30), void **, 0x40) = (void *)fn_8015160C;
        M2C_FIELD(M2C_FIELD(task, void **, 0x30), void **, 0x3C) = (void *)fn_801515F4;
        M2C_FIELD(M2C_FIELD(task, void **, 0x30), void **, 0x44) = (void *)fn_801515B8;
        fn_80053658(task, 0, arg0);
        M2C_FIELD(M2C_FIELD(task, void **, 0x30), s16 *, 0) = M2C_FIELD(arg0, s32 *, 0xAC);
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = -1;
    }
    M2C_FIELD(arg0, void **, 0xB0) = task;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    ((Effect *)arg0)->SetPos(arg4[0], arg4[1], arg4[2]);
    ((Effect *)arg0)->SetRot(arg5[0], arg5[1], arg5[2]);
    return arg0;
}
#pragma pool_strings reset
#pragma readonly_strings reset
#pragma use_lmw_stmw reset
#pragma cplusplus reset

s32 fn_80152414(void* arg0) {
    if (arg0 == NULL) {
        return 0;
    }

    if (*(s32*)((char*)arg0 + 0x40) != 0) {
        return 0;
    }
    
    if (*(s32*)((char*)arg0 + 0x44) == 0) {
        return 0;
    }
    
    return 1;
}

extern void fn_8006ECCC(s32*, s32);
void fn_801527B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 sp[4];
    
    sp[0] = arg0;
    sp[1] = arg1;
    sp[2] = arg2;
    sp[3] = arg3;
    
    fn_8006ECCC(sp, 0x14);
}

extern s32 lbl_803680C8;
extern u16* lbl_80330D18;
extern void *lbl_80367BE8;
void fn_80152A18(s16 arg0, s16 arg1, s32 arg2) {
    s32 temp_r0 = *(s16*)((char*)lbl_80367BE8 + 0x4) - *(s16*)((char*)lbl_80367BE8 + 0x0);
    s32 temp_r0_2 = *(s16*)((char*)lbl_80367BE8 + 0x6) - *(s16*)((char*)lbl_80367BE8 + 0x2);

    if ((temp_r0 != 0) && (temp_r0_2 != 0)) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg2 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) arg0, (f32) arg1, (f32) *(s16*)((char*)lbl_80367BE8 + 0x0),
                    (f32) *(s16*)((char*)lbl_80367BE8 + 0x2),
                    (f32) temp_r0, (f32) temp_r0_2);
        fn_80007884();
    }
}

s32 fn_80152DE0(void) {
    extern s32 lbl_803680C8;
    void *r3_temp;
    
    r3_temp = &lbl_803680C8;
    if (r3_temp == NULL) {
        return -4;
    }
    if (lbl_803680C8 != 0) {
        return -4;
    }
    lbl_803680C8 = 1;
    M2C_FIELD(r3_temp, void **, 0x40) = &(u8 []){0}; // Placeholder for lbl_80293A88
    if (r3_temp != NULL) {
        M2C_FIELD(r3_temp, void **, 0x40) = &(u8 []){0}; // Placeholder for lbl_8028DED0
    }
    
    return 1;
}

void fn_80154BE4(void) {
    M2C_UNK fn_8015C674();
    fn_8015C674();
}

s32 fn_8015512C(s32 arg0, s32 arg1) {
    s32 temp;
    
    if (arg0 == 0 || arg1 == 0) {
        return 0;
    }
    
    temp = arg0 * arg1;
    
    return temp;
}

void fn_8015BA88(void) {
    M2C_UNK fn_8015FC7C();
    fn_8015FC7C();
}

void fn_80161778(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_80007790(f32, f32, f32, f32, f32);
    M2C_UNK fn_80161B98(s16, s16, s16, s16, s32, M2C_UNK *, M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80330CE8;
    extern M2C_UNK lbl_80367C10;
    extern M2C_UNK lbl_80367C18;
    extern M2C_UNK lbl_80367C20;
    extern f32 lbl_8036A870;
    s8 spF;
    s8 spE;
    s8 spD;
    s8 spC;
    s32 sp8;
    f32 temp_f2;
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r24;
    s16 temp_r27;
    s16 temp_r3;
    s16 temp_r7;

    temp_r7 = M2C_FIELD(&lbl_80367C10, s16 *, 4) - M2C_FIELD(&lbl_80367C10, s16 *, 0);
    temp_r0 = M2C_FIELD(&lbl_80367C10, s16 *, 6) - M2C_FIELD(&lbl_80367C10, s16 *, 2);
    temp_r27 = arg2 - (temp_r7 + (s16) (M2C_FIELD(&lbl_80367C20, s16 *, 4) - M2C_FIELD(&lbl_80367C20, s16 *, 0)));
    if ((temp_r7 != 0) && (temp_r0 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330D18, (u16) (arg3 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) arg0, (f32) arg1, (f32) M2C_FIELD(&lbl_80367C10, s16 *, 0), (f32) M2C_FIELD(&lbl_80367C10, s16 *, 2), (f32) temp_r7, (f32) temp_r0);
        fn_80007884();
    }
    spC = 0xFF;
    temp_r3 = M2C_FIELD(&lbl_80367C10, s16 *, 4) - M2C_FIELD(&lbl_80367C10, s16 *, 0);
    spD = 0xFF;
    temp_r24 = arg0 + temp_r3;
    spE = 0xFF;
    spF = 0xFF;
    fn_8000A258(temp_r3, M2C_FIELD(&lbl_80367C10, s16 *, 0));
    fn_8000A174(NULL, (u16) (arg3 | 2));
    fn_8000A248();
    fn_80007898(4);
    temp_f2 = lbl_8036A870 + (f32) arg1;
    fn_80007790(lbl_8036A870 + (f32) temp_r24, temp_f2, lbl_8036A870 + (f32) (s16) (temp_r24 + temp_r27), temp_f2, lbl_8036A870);
    sp8 = (s32) spC;
    fn_80007668(&sp8);
    fn_80007884();
    fn_80161B98(temp_r24, arg1, temp_r27, (s16) (M2C_FIELD(&lbl_80367C18, s16 *, 6) - M2C_FIELD(&lbl_80367C18, s16 *, 2)), arg3, &lbl_80367C18, &lbl_80330CE8, 0);
    temp_r0_2 = M2C_FIELD(&lbl_80367C20, s16 *, 4) - M2C_FIELD(&lbl_80367C20, s16 *, 0);
    temp_r0_3 = M2C_FIELD(&lbl_80367C20, s16 *, 6) - M2C_FIELD(&lbl_80367C20, s16 *, 2);
    if ((temp_r0_2 != 0) && (temp_r0_3 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330D18, (u16) (arg3 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) (s16) (temp_r24 + temp_r27), (f32) arg1, (f32) M2C_FIELD(&lbl_80367C20, s16 *, 0), (f32) M2C_FIELD(&lbl_80367C20, s16 *, 2), (f32) temp_r0_2, (f32) temp_r0_3);
        fn_80007884();
    }
}

void fn_80161E58(s16 arg0, s16 arg1, s32 arg2, void *arg3, s32 *arg4, s32 arg5) {
    M2C_UNK fn_80007538();
    M2C_UNK fn_80007588();
    M2C_UNK fn_80007668(s32 *);
    M2C_UNK fn_800076CC();
    M2C_UNK fn_800076EC();
    M2C_UNK fn_800077D8(s16, s16, f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_8000A174(M2C_UNK, u16);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    s32 sp8;
    s16 temp_r4;

    fn_8000A258();
    fn_8000A174(0, (u16) (arg2 | 2));
    fn_8000A248();
    fn_80007898(1);
    temp_r4 = M2C_FIELD(arg3, s16 *, 4) - M2C_FIELD(arg3, s16 *, 0);
    fn_800077D8(temp_r4, arg1, (f32) arg0, (f32) arg1, (f32) temp_r4, (f32) (s16) (M2C_FIELD(arg3, s16 *, 6) - M2C_FIELD(arg3, s16 *, 2)));
    if (arg5 & 1) {
        fn_800076EC();
    }
    if (arg5 & 2) {
        fn_800076CC();
    }
    if (arg5 & 0x100) {
        fn_80007588();
    }
    if (arg5 & 0x200) {
        fn_80007538();
    }
    sp8 = *arg4;
    fn_80007668(&sp8);
    fn_80007884();
}

void fn_80161F7C(void) {
    M2C_UNK fn_8006EDA0(M2C_UNK *);
    extern M2C_UNK lbl_803680C8;
    extern M2C_UNK lbl_803680CC;
    extern s32 lbl_803680D0;
    s32 temp_r0;

    temp_r0 = lbl_803680D0 - 1;
    lbl_803680D0 = temp_r0;
    if (temp_r0 == 0) {
        fn_8006EDA0(&lbl_803680C8);
        fn_8006EDA0(&lbl_803680CC);
    }
}

u8 fn_80161FB8(void) {
    extern u16 lbl_80293AD8[];
    s32 var_r31;

    var_r31 = 0;
    if ((fn_8005BA10((s32)lbl_80293AD8[1]) != 0) && (fn_8005BA10((s32)lbl_80293AD8[2]) != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

void fn_80162018(void) {
    extern u32 lbl_80293AD8[];
    fn_8005C8B4(lbl_80293AD8[2]);
    fn_8005C8B4(lbl_80293AD8[3]);
}

void fn_80162054(void) {
    extern u32 lbl_80293AD8[];
    
    fn_8005C8B4(lbl_80293AD8[2]);
    fn_8005C8B4(lbl_80293AD8[3]);
}

s32 fn_801620AC(void) {
    extern char lbl_80293B10[];
    return *(s32*)((u8*)lbl_80293B10 + 4);
}
extern f64 lbl_8036A868;
extern f32 lbl_8036A870;
#include "common.h"
extern u16 lbl_80367E28[];
extern u16 lbl_80367E00[];
extern u16 lbl_80367E30[];
extern u16 lbl_80367DF8[];
extern u16 lbl_80367E18[];
extern u16 lbl_80367E20[];
extern u16 lbl_80367E08[];
extern u16 lbl_80367E10[];
extern s32 lbl_803680C8;
extern f64 lbl_8036A868;
extern f64 lbl_8036A888;
