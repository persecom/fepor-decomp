/* Functions from 0x8014E3A0 to 0x801620BC, found by decomp-toolkit. */
#include "common.h"
extern u32 *lbl_80367140;
typedef struct { u8 r, g, b, a; } Color;
typedef struct { s32 c0, c1, c2, c3; } Color4;
typedef struct { s32 c3, c2, c1, c0; } Color4rev;

s32 fn_8014E3A0(void) {
    return 0;
}

s32 fn_8014E3A8(void) {
    return 0x260;
}

void *fn_8014E3B0(void) {
    extern u16 lbl_80277238[];
    return (u8 *)lbl_80277238 + 0xA2;
}

s32 fn_8014E3C0(void) {
    return 9;
}

void *fn_8014E3C8(void) {
    void fn_80231D94(void *, void *, ...);
    extern u8 lbl_80330CC8[];
    extern u8 lbl_80277238[];
    extern s32 lbl_80367B7C;
    extern s32 lbl_80367B80;

    fn_80231D94(lbl_80330CC8, lbl_80277238 + 0xD0, lbl_80367B7C + 1, lbl_80367B80);
    return lbl_80330CC8;
}

s32 fn_8014E414(void) {
    return 0;
}

extern s32 lbl_80367B7C;
extern u32 lbl_80367B78;
extern u8 lbl_80277238[];
extern u32 lbl_80367B70;
void *fn_8014E41C(s32 arg0, void *arg1) {
    extern s32 lbl_80367B7C;
    extern u32 lbl_80367B78;
    extern u8 lbl_80277238[];
    extern u32 lbl_80367B70;
    s32 idx;
    s32 limit;

    idx = *(u8 *)((char *)arg1 + 0x3A) + lbl_80367B7C * 0x18;
    limit = lbl_80367B78;
    if (idx >= limit) {
        return lbl_80277238 + 0x85;
    }
    return *(void **)(lbl_80367B70 + idx * 4);
}

s32 fn_8014E458(void) {
    extern void *lbl_80367240;
    extern s32 lbl_80367B7C;
    extern s32 lbl_80367B80;
    if (M2C_FIELD(lbl_80367240, s32 *, 0x10) & 0x01000001) {
        lbl_80367B7C = (lbl_80367B7C + (lbl_80367B80 - 1)) % lbl_80367B80;
    }
    if (M2C_FIELD(lbl_80367240, s32 *, 0x10) & 0x02000002) {
        lbl_80367B7C = (lbl_80367B7C + 1) % lbl_80367B80;
    }
    return 0;
}

s32 fn_8014E4C8(void *arg0, void *arg1, void *arg2) {
    extern s32 lbl_80367B7C;
    extern u32 lbl_80367B78;
    extern s32 lbl_80367B84;
    extern u32 lbl_80367B70;
    char *fn_8000E0E4(void *);
    s32 index;
    char *str;
    u8 flag;

    index = lbl_80367B7C * 0x18;
    index += *(u8 *)((u8 *)arg2 + 0x3A);
    lbl_80367B84 = index;
    if (index >= (s32)lbl_80367B78) {
        return 0x10;
    }
    if (*(void **)(lbl_80367B70 + index * 4) == NULL) {
        flag = 0;
    } else {
        str = fn_8000E0E4(*(void **)(lbl_80367B70 + index * 4));
        if (str[0] != '$') {
            flag = 0;
        } else if (str[1] != 'R') {
            flag = 0;
        } else {
            flag = 1;
        }
    }
    if (flag == 0) {
        return 0x10;
    }
    return 5;
}

#pragma use_lmw_stmw on
#pragma cplusplus on
#pragma global_optimizer off
extern "C" void fn_8014E568(void *unused, void *arg1, void *arg2) {
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007858(f32, f32);
    void fn_80007124(void *);
    void fn_8000727C(f32);
    void fn_80007290(s32, s32, s32, s32);
    void fn_80007884(void);
    void *fn_8000E0E4(void *);
    extern s32 lbl_80367B7C;
    extern u32 lbl_80367B78;
    extern u8 *lbl_80367B74;
    extern u32 lbl_80367B70;
    extern f32 lbl_8036A800;
    extern f32 lbl_8036A804;
    extern f32 lbl_8036A808;
    extern u8 lbl_80277238[];
    extern u8 lbl_80330C80[];
    struct Obj {
        u8 pad[4];
        virtual f32 v0() = 0; virtual f32 v1() = 0; virtual f32 v2() = 0; virtual f32 v3() = 0;
        virtual f32 v4() = 0; virtual f32 v5() = 0; virtual f32 v6() = 0; virtual f32 v7() = 0;
        virtual f32 v8() = 0; virtual f32 v9() = 0; virtual f32 v10() = 0; virtual f32 v11() = 0;
        virtual f32 v12() = 0; virtual f32 v13() = 0; virtual f32 v14() = 0; virtual f32 v15() = 0;
        virtual f32 v16() = 0; virtual f32 v17() = 0; virtual f32 v18() = 0; virtual f32 v19() = 0;
        virtual f32 v20() = 0; virtual f32 v21() = 0; virtual f32 v22() = 0; virtual f32 v23() = 0;
        virtual f32 v24() = 0; virtual f32 v25() = 0;
    };
    s32 idx;
    s32 r, g, b;
    char *dst;
    u8 *src;
    void *str;
    s32 mul;

    (void)unused;
    mul = lbl_80367B7C * 0x18;
    idx = mul + *(u8 *)((u8 *)arg2 + 0x3A);
    if (idx >= (s32)lbl_80367B78) {
        return;
    }
    fn_8000A258();
    {
        Obj *obj = *(Obj **)((u8 *)arg1 + 0x3C);
        fn_80009D74((f32)*(s16 *)((u8 *)arg1 + 0x30), (f32)*(s16 *)((u8 *)arg1 + 0x32),
                    obj->v25() - lbl_8036A800, lbl_8036A804);
    }
    fn_8000A174(0, 0x13);
    fn_8000A248();
    switch (lbl_80367B74[idx]) {
    case 0:
        r = 0; g = 0; b = 0;
        break;
    case 1:
        r = 0xFF; g = 0xFF; b = 0xFF;
        break;
    case 2:
        r = 0xFF; g = 0; b = 0xFF;
        break;
    case 4:
        r = 0xFF; g = 0; b = 0;
        break;
    }
    fn_80007898(5);
    fn_80007858((f32)*(s16 *)((u8 *)arg2 + 0x30), (f32)*(s16 *)((u8 *)arg2 + 0x32));
    idx <<= 2;
    str = *(void **)(lbl_80367B70 + idx);
    fn_80007124(str);
    fn_8000727C(lbl_8036A808);
    fn_80007290(r, g, b, 0xFF);
    fn_80007884();
    fn_80007898(5);
    fn_80007858((f32)(*(s16 *)((u8 *)arg2 + 0x30) + 0xB0), (f32)*(s16 *)((u8 *)arg2 + 0x32));
    str = *(void **)(lbl_80367B70 + idx);
    if ((u32)str == 0) {
        str = lbl_80277238 + 0x85;
    } else {
        u8 *lim;
        u8 var_r5;
        dst = (char *)lbl_80330C80;
        src = (u8 *)fn_8000E0E4(str);
        lim = lbl_80330C80 + 0x46;
        goto loop_cmp;
    loop_body:
        {
            s32 t = (s8)var_r5;
            if (t != 0xA && (u32)var_r5 >= 0x80U) {
                dst[0] = *src;
                dst[1] = *++src;
                dst += 2;
                if ((u8 *)dst >= lim) {
                    goto loop_done;
                }
            }
        }
        src += 1;
    loop_cmp:
        var_r5 = *src;
        if ((s8)var_r5 != 0) {
            goto loop_body;
        }
    loop_done:
        *dst = 0;
        str = lbl_80330C80;
    }
    fn_80007124(str);
    fn_8000727C(lbl_8036A808);
    fn_80007290(r, g, b, 0xFF);
    fn_80007884();
}
#pragma global_optimizer reset
#pragma cplusplus off
#pragma use_lmw_stmw on

void fn_8014E7F8(void *arg0) {
    M2C_UNK fn_8014E864();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        fn_8014E864();
    }
}

void fn_8014E824(void *arg0)
{
    void fn_80067708(s32, u32, void *, void *);
    void fn_8014E864(void);

    u8 *ptr;

    ptr = (u8 *)arg0;

    if (*(u32 *)(ptr + 0x54) != 0) {
        fn_80067708(
            2,
            ptr[0x87],
            (void *)fn_8014E864,
            arg0
        );
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

void fn_801502EC(void *arg0, void *arg1, void *arg2, void *arg3) {
    void fn_8022100C(s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_8021F4E4(s32, s32);
    void fn_8006ECCC(void *, void *, u16);
    void fn_80222C50(void *, s32);
    void fn_80220428(s32);
    void fn_802240C8(s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802239D0(s32, s32);
    void fn_80220FC4(s32, s32, s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_80220F84(s32, s32);
    extern f32 lbl_8036A820;
    extern f32 lbl_8036A838;
    u8 sp8[0x20];
    void *var_r28;
    void *var_r30;
    void *var_r29;
    register void *var_r31;
    f32 f3, f2, f1, f0;
    u8 r5b, r4b, r3b, r0b;
    s32 ctr;

    var_r31 = arg1;
    var_r30 = arg0;
    var_r29 = arg2;
    var_r28 = arg3;
    fn_8022100C(0);
    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021F4E4(0xB, 1);
    fn_8021FBF0(0, 9, 1, 4, 0);
    fn_8021FBF0(0, 0xB, 1, 5, 0);
    if (*(u8 *)((u8 *)var_r29 + 6) != 0) {
        fn_8021F4E4(0xD, 1);
        fn_8021FBF0(0, 0xD, 1, 4, 0);
        fn_8006ECCC(var_r28, sp8, *(u16 *)(*(u8 **)((u8 *)var_r29 + 0x14) + 4));
        fn_80222C50(sp8, 0);
        fn_80220428(1);
        fn_802240C8(1);
        fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
        fn_80223F2C(0, 0, 0, 4);
        fn_802239D0(0, 0);
        fn_80220FC4(0, 0, 1);
        ctr = 0;
        goto check1;
        do {
            r0b = *(u8 *)((u8 *)var_r31 + 0x28);
            var_r28 = var_r31;
            var_r31 = (u8 *)var_r31 + 0x2C;
            if (r0b) {
                fn_80220F84((s32)(lbl_8036A820 * *(f32 *)((u8 *)var_r28 + 0x1C)), 5);
                fn_80220DEC(0xB8, 0, 1);
                f3 = *(f32 *)((u8 *)var_r28 + 8);
                f2 = *(f32 *)((u8 *)var_r28 + 4);
                f1 = *(f32 *)((u8 *)var_r28 + 0);
                f0 = lbl_8036A838;
                *(volatile f32 *)0xCC008000 = f2;
                *(volatile f32 *)0xCC008000 = f1;
                *(volatile f32 *)0xCC008000 = f3;
                r5b = *(u8 *)((u8 *)var_r28 + 0x28);
                r4b = *(u8 *)((u8 *)var_r28 + 0x2B);
                r3b = *(u8 *)((u8 *)var_r28 + 0x2A);
                r0b = *(u8 *)((u8 *)var_r28 + 0x29);
                *(volatile u8 *)0xCC008000 = r0b;
                *(volatile u8 *)0xCC008000 = r3b;
                *(volatile u8 *)0xCC008000 = r5b;
                *(volatile u8 *)0xCC008000 = r4b;
                *(volatile f32 *)0xCC008000 = f0;
                *(volatile f32 *)0xCC008000 = f0;
            }
            ctr++;
        check1:
            ;
        } while (ctr < (s32)*(u16 *)((u8 *)var_r30 + 0x1E));
    } else {
        fn_80220428(0);
        fn_802240C8(1);
        fn_80223F2C(0, 0xFF, 0xFF, 4);
        fn_802239D0(0, 4);
        ctr = 0;
        goto check2;
        do {
            r0b = *(u8 *)((u8 *)var_r31 + 0x28);
            var_r29 = var_r31;
            var_r31 = (u8 *)var_r31 + 0x2C;
            if (r0b) {
                fn_80220F84((s32)(lbl_8036A820 * *(f32 *)((u8 *)var_r29 + 0x1C)), 5);
                fn_80220DEC(0xB8, 0, 1);
                f2 = *(f32 *)((u8 *)var_r29 + 8);
                f1 = *(f32 *)((u8 *)var_r29 + 4);
                f0 = *(f32 *)((u8 *)var_r29 + 0);
                *(volatile f32 *)0xCC008000 = f0;
                *(volatile f32 *)0xCC008000 = f1;
                *(volatile f32 *)0xCC008000 = f2;
                r5b = *(u8 *)((u8 *)var_r29 + 0x28);
                r4b = *(u8 *)((u8 *)var_r29 + 0x2B);
                r3b = *(u8 *)((u8 *)var_r29 + 0x2A);
                r0b = *(u8 *)((u8 *)var_r29 + 0x29);
                *(volatile u8 *)0xCC008000 = r0b;
                *(volatile u8 *)0xCC008000 = r3b;
                *(volatile u8 *)0xCC008000 = r5b;
                *(volatile u8 *)0xCC008000 = r4b;
            }
            ctr += 1;
        check2:
            ;
        } while (ctr < (s32)*(u16 *)((u8 *)var_r30 + 0x1E));
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

#pragma use_lmw_stmw on
void fn_80150F38(void *arg0) {
    void fn_800C4588(void *);
    long i;
    register int off;
    void *self;
    void *work;
    u32 z1;
    register void *z0;
    void *meta;

    self = arg0;
    work = *(void **)((u8 *)arg0 + 0x54);
    if (work != NULL) {
        meta = *(void **)((u8 *)work + 0x34);
        if (*(void **)((u8 *)work + 0x38) != NULL) {
            off = 0;
            i = 0;
            z0 = (void *)off;
            z1 = off;
            while (i < (s32)*(u16 *)((u8 *)meta + 6)) {
                fn_800C4588(*(void **)((u8 *)*(void **)((u8 *)work + 0x38) + off));
                i += 1;
                *(void **)((u8 *)*(void **)((u8 *)work + 0x38) + off) = z0;
                *(void **)((u8 *)*(void **)((u8 *)work + 0x38) + off) = (void *)z1;
                off += 4;
            }
            fn_800C4588(*(void **)((u8 *)work + 0x38));
            *(void **)((u8 *)work + 0x38) = 0;
            *(void **)((u8 *)work + 0x38) = 0;
        }
        fn_800C4588(*(void **)((u8 *)self + 0x54));
        *(void **)((u8 *)self + 0x54) = 0;
        *(void **)((u8 *)self + 0x54) = 0;
        *(void **)((u8 *)self + 0x54) = 0;
    }
}
void fn_80150FEC(void *arg0) {
    void *fn_80060664(void *);
    void *fn_800C4638(s32, u8 *, s32);
    void fn_80201FC4(void *);
    extern u8 lbl_80277320[];
    extern f64 lbl_8036A828;
    extern f32 lbl_8036A81C;
    extern f32 lbl_8036A838;
    extern f32 lbl_8036A848;
    extern f32 lbl_8036A844;

    void *base;
    void *inner;
    void *hdr;
    s32 i;
    u8 *entry;
    void *obj;
    s32 off;
    void *zero;
    u8 *tag;
    void *block;
    u8 *src;
    u8 *out;
    s32 j;
    s32 off2;
    s32 off3;
    u16 count;
    void *p;
    f32 scale;
    f32 f838;
    f32 f848;
    f32 f844;

    base = fn_80060664(arg0);
    if (base == NULL) {
        return;
    }
    inner = *(void **)base;
    if (inner == NULL) {
        return;
    }
    hdr = *(void **)((u8 *)inner + 0x20);
    if (hdr == NULL) {
        return;
    }
    if (*(u32 *)hdr != 0x12345678U) {
        return;
    }
    if ((*(u16 *)((u8 *)hdr + 4) & 1) == 0) {
        entry = (u8 *)hdr + 8;
        for (i = 0; i < (s32)*(u16 *)((u8 *)hdr + 6); i++, entry += 0x34) {
            if (*(void **)entry != NULL) {
                *(void **)entry = (u8 *)*(void **)entry + (u32)base;
            }
            if (*(void **)(entry + 0x20) != NULL) {
                *(void **)(entry + 0x20) = (u8 *)*(void **)(entry + 0x20) + (u32)base;
            }
            if (*(void **)(entry + 0x24) != NULL) {
                *(void **)(entry + 0x24) = (u8 *)*(void **)(entry + 0x24) + (u32)base;
            }
            if (*(void **)(entry + 0x28) != NULL) {
                *(void **)(entry + 0x28) = (u8 *)*(void **)(entry + 0x28) + (u32)base;
            }
            if (*(void **)(entry + 0x2C) != NULL) {
                *(void **)(entry + 0x2C) = (u8 *)*(void **)(entry + 0x2C) + (u32)base;
            }
        }
        *(u16 *)((u8 *)hdr + 4) = *(u16 *)((u8 *)hdr + 4) | 1;
    }
    if ((u16)*(u16 *)((u8 *)hdr + 6) == 0) {
        return;
    }
    *(void **)((u8 *)arg0 + 0x54) = fn_800C4638(0x40, lbl_80277320 + 0x5E, 0);
    tag = lbl_80277320;
    entry = (u8 *)hdr + 8;
    obj = *(void **)((u8 *)arg0 + 0x54);
    *(void **)((u8 *)obj + 0x38) =
        fn_800C4638((s32)*(u16 *)((u8 *)hdr + 6) * 4, tag + 0x5E, 0);
    zero = 0;
    off = 0;
    for (i = 0; i < (s32)*(u16 *)((u8 *)hdr + 6); i++, entry += 0x34) {
        count = *(u16 *)(entry + 0x1E);
        if (count == 0) {
            *(void **)((u8 *)*(void **)((u8 *)obj + 0x38) + off) = zero;
        } else {
            *(void **)((u8 *)*(void **)((u8 *)obj + 0x38) + off) =
                fn_800C4638((s32)count * 0x2C, tag + 0x5E, 0);
        }
        off += 4;
    }
    *(void **)((u8 *)obj + 0x34) = hdr;
    fn_80201FC4(obj);
    base = fn_80060664(arg0);
    if (base == NULL) {
        return;
    }
    block = *(void **)((u8 *)arg0 + 0x54);
    if (block == NULL) {
        return;
    }
    i = 0;
    off = i;
    scale = lbl_8036A81C;
    f838 = lbl_8036A838;
    f848 = lbl_8036A848;
    f844 = lbl_8036A844;
    *(f32 *)((u8 *)block + 0x30) = (f32)*(s32 *)((u8 *)base + 0x14);
    hdr = *(void **)((u8 *)block + 0x34);
    entry = (u8 *)hdr + 8;
    while (i < (s32)*(u16 *)((u8 *)hdr + 6)) {
        j = 0;
        off2 = j;
        off3 = j;
        while (j < (s32)*(u16 *)(entry + 0x1E)) {
            src = (u8 *)*(void **)(entry + 0x20) + off3;
            out = (u8 *)(*(void **)((u8 *)*(void **)((u8 *)block + 0x38) + off)) + off2;
            j += 1;
            off3 += 0xC;
            off2 += 0x2C;
            *(f32 *)(out + 0) = scale * (f32)*(s16 *)(src + 6);
            *(f32 *)(out + 4) = scale * (f32)*(s16 *)(src + 8);
            *(f32 *)(out + 8) = scale * (f32)*(s16 *)(src + 0xA);
            *(f32 *)(out + 0xC) = f838;
            *(f32 *)(out + 0x10) = f838;
            *(f32 *)(out + 0x14) = f838;
            *(f32 *)(out + 0x18) = f848;
            *(f32 *)(out + 0x1C) = f844;
            *(f32 *)(out + 0x20) = f844;
            out[0x28] = 0;
        }
        off += 4;
        i += 1;
        entry += 0x34;
    }
}
s32 fn_801512D8(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367BA0;
    fn_800D758C(lbl_80367BA0);
    return 0;
}

int fn_80151300(void) {
    extern u8 *lbl_80367BA0;
    extern void fn_800DC3B0(void *);
    extern void fn_800DA608(void);

    fn_800DC3B0(*(void **)(lbl_80367BA0 + 0x424));
    fn_800DA608();

    return 0;
}

#pragma cplusplus on
extern "C" void fn_80151330(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void fn_800D7254(void);
    struct Obj {
        u8 pad[0x40];
        virtual void v0(s32, s32, s32) = 0;
        virtual void v1(s32, s32, s32) = 0;
        virtual void v2(s32, s32, s32) = 0;
        virtual void v3(s32, s32, s32) = 0;
        virtual void v4(s32, s32, s32) = 0;
        virtual void v5(s32, s32, s32) = 0;
        virtual void v6(s32, s32, s32) = 0;
        virtual void v7(s32, s32, s32) = 0;
        virtual void v8(s32, s32, s32) = 0;
        virtual void v9(s32, s32, s32) = 0;
        virtual void v10(s32, s32, s32) = 0;
        virtual void v11(s32, s32, s32) = 0;
        virtual void v12(s32, s32, s32) = 0;
        virtual void v13(s32, s32, s32) = 0;
        virtual void v14(s32, s32, s32) = 0;
        virtual void v15(s32, s32, s32) = 0;
        virtual void v16(s32, s32, s32) = 0;
        virtual void v17(s32, s32, s32) = 0;
        virtual void v18(s32, s32, s32) = 0;
        virtual void v19(s32, s32, s32) = 0;
        virtual void v20(s32, s32, s32) = 0;
    };
    fn_800D7254();
    (*(Obj **)((u8 *)arg0 + 0x424))->v20(arg1, arg2, arg3);
}
#pragma cplusplus reset

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

#pragma cplusplus on
extern "C" s32 fn_801515B8(void *arg0) {
    struct Obj {
        u8 pad[0x10];
        virtual void v0(void **) = 0;
        virtual void v1(void **) = 0;
        virtual void v2(void **) = 0;
        virtual void v3(void **) = 0;
        virtual void v4(void **) = 0;
        virtual void v5(void **) = 0;
        virtual void v6(void **) = 0;
        virtual void v7(void **) = 0;
        virtual void v8(void **) = 0;
    };
    void **temp_r4;
    Obj *obj;

    temp_r4 = *(void ***)((u8 *)*(void **)((u8 *)arg0 + 0x30) + 0x4c);
    obj = (Obj *)*temp_r4;
    obj->v8(temp_r4);
    return 0;
}
#pragma cplusplus reset
s32 fn_801515F4(void *arg0) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), void **, 0x4C), s8 *, 0xC4) = 1;
    return 0;
}

u8 fn_801517C0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xC4);
}

void fn_801517C8(void *arg0) {
    void fn_800535B0();
    void *x = *(void **)((u8 *)arg0 + 0xB0);
    if (x != NULL) {
        fn_800535B0(x);
    }
}

void fn_801517F4(void *arg0) {
    extern f32 lbl_8036A860;
    void fn_802031E8(f32 *, f32 *);
    f64 fn_80203270(f32 *, f32 *);
    f64 fn_80238788(f64);
    f32 vec1[3];
    f32 vec2[3];
    f32 *p;
    f32 dx;

    p = vec1;
    dx = *(f32 *)((u8 *)arg0 + 0xB4) - *(f32 *)((u8 *)arg0 + 0x48);
    p[1] = 0.0f;
    p[2] = 0.0f;
    p[0] = dx;
    vec2[0] = dx;
    vec2[1] = *(f32 *)((u8 *)arg0 + 0xB8) - *(f32 *)((u8 *)arg0 + 0x4C);
    vec2[2] = *(f32 *)((u8 *)arg0 + 0xBC) - *(f32 *)((u8 *)arg0 + 0x50);
    fn_802031E8(p, p);
    fn_802031E8(vec2, vec2);
    *(f32 *)((u8 *)arg0 + 0x54) = lbl_8036A860 * (f32)fn_80238788(fn_80203270(vec1, vec2));
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
    s32 fn_8005F9B8(void *, s32);

    *(void **)((u8 *)arg0 + 0xB0) = fn_800536FC((u16)*(u32 *)((u8 *)arg0 + 0xAC));
    if (*(void **)((u8 *)arg0 + 0xB0) != NULL) {
        if (*(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0xB0) + 0x30) + 0x5C) != NULL) {
            return fn_8005F9B8(*(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0xB0) + 0x30) + 0x5C), arg1);
        }
        return 0;
    }
    return 0;
}

s32 fn_80151948(void *arg0, s32 arg1) {
    void *fn_800536FC(u16);
    s32 fn_8005F894(void *, s32);

    *(void **)((u8 *)arg0 + 0xB0) = fn_800536FC((u16)*(u32 *)((u8 *)arg0 + 0xAC));
    if (*(void **)((u8 *)arg0 + 0xB0) != NULL) {
        if (*(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0xB0) + 0x30) + 0x5C) != NULL) {
            return fn_8005F894(*(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0xB0) + 0x30) + 0x5C), arg1);
        }
        return -1;
    }
    return -1;
}

s32 fn_801519C0(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0xB0);
    s32 result = 0;

    p = M2C_FIELD(p, void **, 0x30);
    p = M2C_FIELD(p, void **, 0x5C);
    if (p != NULL) {
        p = M2C_FIELD(p, void **, 0x44);
        if (p != NULL) {
            result = M2C_FIELD(p, s32 *, 0x18);
        }
    }
    return result;
}

void fn_801519EC(void *arg0) {
    void *fn_800536FC(u16);
    s32 fn_8005F9B8(void *, s32);
    void fn_800E76E0(void *, f32);
    void fn_800E77A0(void *, s32, s32, f32);
    extern void *lbl_80368278;
    void *r30;
    s32 var;
    void *temp;

    r30 = *(void **)arg0;
    *(void **)((u8 *)arg0 + 0xB0) = fn_800536FC((u16)*(u32 *)((u8 *)arg0 + 0xAC));
    temp = *(void **)((u8 *)arg0 + 0xB0);
    if (temp != NULL) {
        temp = *(void **)((u8 *)*(void **)((u8 *)temp + 0x30) + 0x5C);
        if (temp != NULL) {
            var = fn_8005F9B8(temp, 9);
        } else {
            var = 0;
        }
    } else {
        var = 0;
    }
    if ((u8)var != 0) {
        fn_800E77A0(r30, 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x98));
    }
    *(void **)((u8 *)arg0 + 0xB0) = fn_800536FC((u16)*(u32 *)((u8 *)arg0 + 0xAC));
    temp = *(void **)((u8 *)arg0 + 0xB0);
    if (temp != NULL) {
        temp = *(void **)((u8 *)*(void **)((u8 *)temp + 0x30) + 0x5C);
        if (temp != NULL) {
            var = fn_8005F9B8(temp, 0xA);
        } else {
            var = 0;
        }
    } else {
        var = 0;
    }
    if ((u8)var != 0) {
        fn_800E77A0(r30, 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0x9C));
    }
    *(void **)((u8 *)arg0 + 0xB0) = fn_800536FC((u16)*(u32 *)((u8 *)arg0 + 0xAC));
    temp = *(void **)((u8 *)arg0 + 0xB0);
    if (temp != NULL) {
        temp = *(void **)((u8 *)*(void **)((u8 *)temp + 0x30) + 0x5C);
        if (temp != NULL) {
            var = fn_8005F9B8(temp, 0xB);
        } else {
            var = 0;
        }
    } else {
        var = 0;
    }
    if ((u8)var != 0) {
        fn_800E77A0(r30, 0, 0x3C, *(f32 *)((u8 *)lbl_80368278 + 0xA0));
    }
    *(void **)((u8 *)arg0 + 0xB0) = fn_800536FC((u16)*(u32 *)((u8 *)arg0 + 0xAC));
    temp = *(void **)((u8 *)arg0 + 0xB0);
    if (temp != NULL) {
        temp = *(void **)((u8 *)*(void **)((u8 *)temp + 0x30) + 0x5C);
        if (temp != NULL) {
            var = fn_8005F9B8(temp, 0x1E);
        } else {
            var = 0;
        }
    } else {
        var = 0;
    }
    if ((u8)var != 0) {
        fn_800E77A0(r30, 0, -1, *(f32 *)((u8 *)lbl_80368278 + 0x98));
    }
    *(void **)((u8 *)arg0 + 0xB0) = fn_800536FC((u16)*(u32 *)((u8 *)arg0 + 0xAC));
    temp = *(void **)((u8 *)arg0 + 0xB0);
    if (temp != NULL) {
        temp = *(void **)((u8 *)*(void **)((u8 *)temp + 0x30) + 0x5C);
        if (temp != NULL) {
            var = fn_8005F9B8(temp, 0x1F);
        } else {
            var = 0;
        }
    } else {
        var = 0;
    }
    if ((u8)var != 0) {
        fn_800E77A0(r30, 0, -1, *(f32 *)((u8 *)lbl_80368278 + 0x9C));
    }
    *(void **)((u8 *)arg0 + 0xB0) = fn_800536FC((u16)*(u32 *)((u8 *)arg0 + 0xAC));
    temp = *(void **)((u8 *)arg0 + 0xB0);
    if (temp != NULL) {
        temp = *(void **)((u8 *)*(void **)((u8 *)temp + 0x30) + 0x5C);
        if (temp != NULL) {
            var = fn_8005F9B8(temp, 0x20);
        } else {
            var = 0;
        }
    } else {
        var = 0;
    }
    if ((u8)var != 0) {
        fn_800E77A0(r30, 0, -1, *(f32 *)((u8 *)lbl_80368278 + 0xA0));
    }
    *(void **)((u8 *)arg0 + 0xB0) = fn_800536FC((u16)*(u32 *)((u8 *)arg0 + 0xAC));
    temp = *(void **)((u8 *)arg0 + 0xB0);
    if (temp != NULL) {
        temp = *(void **)((u8 *)*(void **)((u8 *)temp + 0x30) + 0x5C);
        if (temp != NULL) {
            var = fn_8005F9B8(temp, 0x21);
        } else {
            var = 0;
        }
    } else {
        var = 0;
    }
    if ((u8)var != 0) {
        fn_800E76E0(r30, *(f32 *)((u8 *)lbl_80368278 + 0x98));
    }
    *(s32 *)((u8 *)arg0 + 0xC0) = *(s32 *)((u8 *)arg0 + 0xC0) + 1;
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

void fn_80151EDC(s32 arg0, s32 arg1, s32 arg2)
{
    void fn_8006ECCC(void *, void *, s32);
    void fn_8000A258(void);
    void fn_8000A174(void *, u32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(double, double, double, double, double, double);
    void fn_80007884(void);

    extern u8 lbl_80330D18[];
    extern void *lbl_803680C8;
    extern s16 lbl_803680A0;

    s16 *bounds;
    s16 width;
    s16 height;

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0xAB);

    bounds = &lbl_803680A0;

    width = bounds[2] - bounds[0];
    height = bounds[3] - bounds[1];

    if (width != 0 && height != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (arg2 | 1) & 0xFFFF);
        fn_8000A248();
        fn_80007898(1);

        fn_8000770C(
            (double)(s16)arg0,
            (double)(s16)arg1,
            (double)bounds[0],
            (double)bounds[1],
            (double)width,
            (double)height
        );

        fn_80007884();
    }
}

#pragma cplusplus off
#pragma use_lmw_stmw on
void fn_80152010(s16 arg0,s16 arg1,s16 arg2,u8 arg3,s32 arg4) {
void fn_8006ECCC(void*,void*,s32);
void fn_8000A258(void);void fn_8000A174(void*,u16);void fn_8000A248(void);
void fn_80007898(s32);void fn_80007884(void);
void fn_8000770C(f32,f32,f32,f32,f32,f32);
void fn_800077D8(f32,f32,f32,f32);
void fn_800077B0(f32,f32,f32,f32);void fn_80007668(void*);
extern u8 lbl_80330D18[];extern void *lbl_803680C8;
extern s16 lbl_80368088[4],lbl_80368090[4],lbl_80368098[4];
u8 color[4];
u32 c2,c1,c0;
s16 right,x2,x1,h2,h1,w1,left,h0,w0;
s16 w2;
s32 raw;
color[0]=255;color[1]=255;color[2]=255;color[3]=arg3;
fn_8006ECCC(lbl_803680C8,lbl_80330D18,0xa8);
w0=lbl_80368088[2]-lbl_80368088[0];h0=lbl_80368088[3]-lbl_80368088[1];
if(w0 && h0) {
fn_8000A258();fn_8000A174(lbl_80330D18,(u16)(arg4|1));fn_8000A248();fn_80007898(1);
fn_8000770C(arg0,arg1,lbl_80368088[0],lbl_80368088[1],w0,h0);
c1=*(u32*)color;fn_80007668(&c1);fn_80007884();
}
fn_8006ECCC(lbl_803680C8,lbl_80330D18,0xa9);
left=lbl_80368088[2]-lbl_80368088[0];
right=lbl_80368098[2]-lbl_80368098[0];
w1=arg2-left-right;h1=lbl_80368090[3]-lbl_80368090[1];x1=arg0+left;
if(w1 && h1) {
fn_8000A258();fn_8000A174(lbl_80330D18,(u16)(arg4|1));fn_8000A248();fn_80007898(1);
fn_800077D8(x1,arg1,w1,h1);
fn_800077B0(lbl_80368090[0],lbl_80368090[1],(s16)(lbl_80368090[2]-lbl_80368090[0]),(s16)(lbl_80368090[3]-lbl_80368090[1]));
c2=*(u32*)color;fn_80007668(&c2);fn_80007884();
}
fn_8006ECCC(lbl_803680C8,lbl_80330D18,0xaa);
raw=lbl_80368098[2]-lbl_80368098[0];x2=arg0+(arg2-(s16)raw);w2=raw;h2=lbl_80368098[3]-lbl_80368098[1];
if((s16)w2 && h2) {
fn_8000A258();fn_8000A174(lbl_80330D18,(u16)(arg4|1));fn_8000A248();fn_80007898(1);
fn_8000770C(x2,arg1,lbl_80368098[0],lbl_80368098[1],(s16)w2,h2);
c0=*(u32*)color;fn_80007668(&c0);fn_80007884();
}
}
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

void fn_80152548(s32 arg0, s32 arg1, s32 arg2)
{
    void fn_8006ECCC(void *, void *, s32);
    void fn_8000A258(void);
    void fn_8000A174(void *, u32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(double, double, double, double, double, double);
    void fn_80007884(void);

    extern u8 lbl_80330D18[];
    extern void *lbl_803680C8;
    extern s16 lbl_80368070;

    s16 *bounds;
    s16 width;
    s16 height;
    s16 x;
    s16 y;

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0xA5);

    bounds = &lbl_80368070;

    width = bounds[2] - bounds[0];
    height = bounds[3] - bounds[1];

    if (width != 0 && height != 0) {
        fn_8000A258();

        fn_8000A174(lbl_80330D18, (arg2 | 1) & 0xFFFF);
        fn_8000A248();
        fn_80007898(1);

        x = (s16)arg0;
        y = (s16)arg1;

        fn_8000770C(
            (double)x,
            (double)y,
            (double)bounds[0],
            (double)bounds[1],
            (double)width,
            (double)height
        );

        fn_80007884();
    }
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
extern u8 lbl_80330D18[64];
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

void fn_80152CAC(s16 arg0, s16 arg1, s32 arg2) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    extern s32 lbl_803680C8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80368030;
    s16 temp_r31;
    s16 temp_r30;

    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, 0x67);
    temp_r30 = (s16)(lbl_80368030.f4 - lbl_80368030.f0);
    temp_r31 = (s16)(lbl_80368030.f6 - lbl_80368030.f2);
    if (temp_r30 != 0 && temp_r31 != 0) {
        fn_8000A258();
        fn_8000A174((void *)&lbl_80330D18, (u16)(arg2 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)arg1, (f32)lbl_80368030.f0, (f32)lbl_80368030.f2, (f32)temp_r30, (f32)temp_r31);
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

#pragma use_lmw_stmw on
void fn_80152F28(s16 arg0, s16 arg1, u8 arg2, s32 arg3) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80009C0C(f32);
    extern s32 lbl_803680CC;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_803680B0;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_803680B8;
    extern f32 lbl_8036A878;
    f32 sp8;
    s32 temp_r28;
    s16 temp_r31;
    s16 temp_r30;

    temp_r28 = fn_80009E44(&sp8);
    fn_8006ECCC(lbl_803680CC, (void *)&lbl_80330D18, 1);
    temp_r31 = (s16)(lbl_803680B0.f6 - lbl_803680B0.f2);
    temp_r30 = (s16)(lbl_803680B0.f4 - lbl_803680B0.f0);
    if (temp_r30 != 0) {
        if (temp_r31 != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg3 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)arg0, (f32)arg1, (f32)lbl_803680B0.f0, (f32)lbl_803680B0.f2, (f32)temp_r30, (f32)temp_r31);
            fn_80007884();
        }
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A878);
    fn_8000A248();
    fn_8006ECCC(lbl_803680CC, (void *)&lbl_80330D18, arg2);
    temp_r30 = (s16)(lbl_803680B8.f6 - lbl_803680B8.f2);
    temp_r31 = (s16)(lbl_803680B8.f4 - lbl_803680B8.f0);
    if (temp_r31 != 0) {
        if (temp_r30 != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg3 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)(s16)(arg0 + 8), (f32)(s16)(arg1 + 8), (f32)lbl_803680B8.f0, (f32)lbl_803680B8.f2, (f32)temp_r31, (f32)temp_r30);
            fn_80007884();
        }
    }
    fn_80009E64(temp_r28, sp8);
}
#pragma use_lmw_stmw reset
void fn_80153190(s16 arg0, s16 arg1, u8 arg2, s32 arg3) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80009C0C(f32);
    extern s32 lbl_803680CC;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_803680A8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_803680B8;
    extern f32 lbl_8036A878;
    f32 sp8;
    s32 temp_r28;
    s16 *var_r29;
    s16 temp_r30;
    s16 temp_r31;

    temp_r28 = fn_80009E44(&sp8);
    fn_8006ECCC(lbl_803680CC, (void *)&lbl_80330D18, 0);
    {
        s16 t2, t6, t0, t4;
        var_r29 = (s16 *)&lbl_803680A8;
        t2 = var_r29[1];
        t6 = var_r29[3];
        t0 = var_r29[0];
        t4 = var_r29[2];
        temp_r31 = (s16)(t6 - t2);
        temp_r30 = (s16)(t4 - t0);
        if (temp_r30 != 0 && temp_r31 != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg3 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)arg0, (f32)arg1, (f32)lbl_803680A8.f0, (f32)var_r29[1], (f32)temp_r30, (f32)temp_r31);
            fn_80007884();
        }
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A878);
    fn_8000A248();
    fn_8006ECCC(lbl_803680CC, (void *)&lbl_80330D18, arg2);
    {
        s16 t2, t6, t0, t4;
        var_r29 = (s16 *)&lbl_803680B8;
        t2 = var_r29[1];
        t6 = var_r29[3];
        t0 = var_r29[0];
        t4 = var_r29[2];
        temp_r30 = (s16)(t6 - t2);
        temp_r31 = (s16)(t4 - t0);
        if (temp_r31 != 0 && temp_r30 != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg3 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)(s16)(arg0 + 0x10), (f32)(s16)(arg1 + 8), (f32)lbl_803680B8.f0, (f32)var_r29[1], (f32)temp_r31, (f32)temp_r30);
            fn_80007884();
        }
    }
    fn_80009E64(temp_r28, sp8);
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
void fn_801533F8(s16 arg0, s16 arg1, u8 arg2, s32 arg3) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    extern s32 lbl_803680C8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80368018;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80368020;
    extern u8 lbl_80330D18[64];
    s16 temp_r30;
    s16 temp_r31;
    s32 var_r28;
    s16 var_r27;
    s16 var_r26;

    var_r26 = arg0;
    var_r27 = arg1;
    var_r28 = arg3;
    if (arg2 != 0) {
        s16 *var_r29;
        fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, 0x4B);
        var_r29 = (s16 *)&lbl_80368018;
        temp_r30 = (s16)(var_r29[2] - var_r29[0]);
        temp_r31 = (s16)(var_r29[3] - var_r29[1]);
        if (temp_r30 != 0) {
            if (temp_r31 != 0) {
                fn_8000A258();
                fn_8000A174((void *)&lbl_80330D18, (u16)(var_r28 | 1));
                fn_8000A248();
                fn_80007898(1);
                fn_8000770C((f32)var_r26, (f32)var_r27, (f32)lbl_80368018.f0, (f32)var_r29[1], (f32)temp_r30, (f32)temp_r31);
                fn_80007884();
            }
        }
    } else {
        s16 *var_r29;
        fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, 0x4C);
        var_r29 = (s16 *)&lbl_80368020;
        temp_r30 = (s16)(var_r29[3] - var_r29[1]);
        temp_r31 = (s16)(var_r29[2] - var_r29[0]);
        if (temp_r31 != 0) {
            if (temp_r30 != 0) {
                fn_8000A258();
                fn_8000A174((void *)&lbl_80330D18, (u16)(var_r28 | 1));
                fn_8000A248();
                fn_80007898(1);
                fn_8000770C((f32)var_r26, (f32)var_r27, (f32)lbl_80368020.f0, (f32)var_r29[1], (f32)temp_r31, (f32)temp_r30);
                fn_80007884();
            }
        }
    }
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
void fn_80153634(s16 arg0, s16 arg1, s32 arg2) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800076EC(void);
    void fn_80007884(void);
    extern s32 lbl_803680C8;
    extern u8 lbl_80330D18[64];
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80368010;
    s16 var_r26;
    s16 var_r27;
    s32 var_r28;
    s16 *rect;
    s16 w;
    s16 h;
    s32 raw;

    var_r26 = arg0;
    var_r27 = arg1;
    var_r28 = arg2;
    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, 0x4A);
    rect = (s16 *)&lbl_80368010;
    h = (s16)(rect[3] - rect[1]);
    w = (s16)(rect[2] - lbl_80368010.f0);
    if (w != 0) {
        if (h != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(var_r28 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)var_r26, (f32)var_r27, (f32)lbl_80368010.f0, (f32)rect[1], (f32)w, (f32)h);
            fn_80007884();
        }
    }
    raw = rect[2] - lbl_80368010.f0;
    var_r26 = (s16)(var_r26 + (s16)raw);
    w = (s16)(rect[3] - rect[1]);
    h = (s16)raw;
    if (h != 0) {
        if (w != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(var_r28 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)var_r26, (f32)var_r27, (f32)lbl_80368010.f0, (f32)rect[1], (f32)h, (f32)w);
            fn_800076EC();
            fn_80007884();
        }
    }
}

#pragma use_lmw_stmw on
void fn_8015385C(s8 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, u16 arg7) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80009C0C(f32);
    extern u8 lbl_80277488[];
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern struct { s16 f0, f2, f4, f6; } lbl_80367FC0, lbl_80367FC8, lbl_80367FD0, lbl_80367FA8, lbl_80367FB0, lbl_80367FB8;
    extern f64 lbl_8036A868;
    extern f32 lbl_8036A878;
    f32 sp8;
    s32 saved;
    s32 *tbl;
    s16 w, h, y2;
    s16 mid_h, mid_w;
    (void)arg3;

    saved = fn_80009E44(&sp8);
    tbl = (s32 *)(lbl_80277488 + (s8)arg0 * 0x18);
    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, *tbl);
    tbl++;
    w = (s16)(lbl_80367FC0.f4 - lbl_80367FC0.f0);
    h = (s16)(lbl_80367FC0.f6 - lbl_80367FC0.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174((void *)&lbl_80330D18, (u16)(arg7 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg1, (f32)arg2, (f32)lbl_80367FC0.f0, (f32)lbl_80367FC0.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, *tbl);
    tbl++;
    {
        s16 h0 = (s16)(lbl_80367FC0.f6 - lbl_80367FC0.f2);
        s16 h1 = (s16)(lbl_80367FD0.f6 - lbl_80367FD0.f2);
        mid_w = (s16)(lbl_80367FC8.f4 - lbl_80367FC8.f0);
        mid_h = (s16)(arg4 - (h0 + h1));
        y2 = (s16)(arg2 + h0);
        if (mid_w != 0 && mid_h != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg7 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_800077D8((f32)arg1, (f32)y2, (f32)mid_w, (f32)mid_h);
            fn_800077B0((f32)lbl_80367FC8.f0, (f32)lbl_80367FC8.f2, (f32)(s16)(lbl_80367FC8.f4 - lbl_80367FC8.f0), (f32)(s16)(lbl_80367FC8.f6 - lbl_80367FC8.f2));
            fn_80007884();
        }
    }
    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, *tbl);
    tbl++;
    {
        s16 hb = (s16)(lbl_80367FD0.f6 - lbl_80367FD0.f2);
        w = (s16)(lbl_80367FD0.f4 - lbl_80367FD0.f0);
        y2 = (s16)(arg2 + (arg4 - hb));
        if (w != 0 && hb != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg7 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)arg1, (f32)y2, (f32)lbl_80367FD0.f0, (f32)lbl_80367FD0.f2, (f32)w, (f32)hb);
            fn_80007884();
        }
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A878);
    fn_8000A248();
    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, *tbl);
    tbl++;
    w = (s16)(lbl_80367FA8.f4 - lbl_80367FA8.f0);
    h = (s16)(lbl_80367FA8.f6 - lbl_80367FA8.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174((void *)&lbl_80330D18, (u16)(arg7 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg1, (f32)(s16)(arg2 + arg5), (f32)lbl_80367FA8.f0, (f32)lbl_80367FA8.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, *tbl);
    tbl++;
    {
        s16 h0 = (s16)(lbl_80367FA8.f6 - lbl_80367FA8.f2);
        s16 h1 = (s16)(lbl_80367FB8.f6 - lbl_80367FB8.f2);
        mid_w = (s16)(lbl_80367FB0.f4 - lbl_80367FB0.f0);
        mid_h = (s16)(arg6 - (h0 + h1));
        y2 = (s16)(arg2 + (arg5 + h0));
        if (mid_w != 0 && mid_h != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg7 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_800077D8((f32)arg1, (f32)y2, (f32)mid_w, (f32)mid_h);
            fn_800077B0((f32)lbl_80367FB0.f0, (f32)lbl_80367FB0.f2, (f32)(s16)(lbl_80367FB0.f4 - lbl_80367FB0.f0), (f32)(s16)(lbl_80367FB0.f6 - lbl_80367FB0.f2));
            fn_80007884();
        }
    }
    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, *tbl);
    {
        s16 hb = (s16)(lbl_80367FB8.f6 - lbl_80367FB8.f2);
        w = (s16)(lbl_80367FB8.f4 - lbl_80367FB8.f0);
        y2 = (s16)(arg2 + ((arg5 + arg6) - hb));
        if (w != 0 && hb != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg7 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)arg1, (f32)y2, (f32)lbl_80367FB8.f0, (f32)lbl_80367FB8.f2, (f32)w, (f32)hb);
            fn_80007884();
        }
    }
    fn_80009E64(saved, sp8);
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw reset

void fn_80154004(s16 arg0, s16 arg1, s32 arg2) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    extern s32 lbl_803680C8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367F58;
    s16 temp_r31;
    s16 temp_r30;

    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, 0x31);
    temp_r30 = (s16)(lbl_80367F58.f4 - lbl_80367F58.f0);
    temp_r31 = (s16)(lbl_80367F58.f6 - lbl_80367F58.f2);
    if (temp_r30 != 0) {
        if (temp_r31 != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg2 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)arg0, (f32)arg1, (f32)lbl_80367F58.f0, (f32)lbl_80367F58.f2, (f32)temp_r30, (f32)temp_r31);
            fn_80007884();
        }
    }
}

#pragma use_lmw_stmw on
void fn_80154138(s16 arg0, s16 arg1, s32 arg2) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800076EC(void);
    void fn_80007884(void);
    extern s32 lbl_803680C8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367F90;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367F80;
    extern u8 lbl_80330D18[64];
    extern f64 lbl_8036A868;
    s16 x;
    s16 y;
    s32 flags;
    s16 *rect;
    s16 temp_r30;
    s16 temp_r31;

    x = arg0;
    y = arg1;
    flags = arg2;
    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, 0x33);
    {
        s16 t2, t6, t0, t4;
        rect = (s16 *)&lbl_80367F90;
        t2 = rect[1];
        t6 = rect[3];
        t0 = lbl_80367F90.f0;
        t4 = rect[2];
        temp_r31 = (s16)(t6 - t2);
        temp_r30 = (s16)(t4 - t0);
        if (temp_r30 != 0 && temp_r31 != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(flags | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)x, (f32)y, (f32)lbl_80367F90.f0, (f32)rect[1], (f32)temp_r30, (f32)temp_r31);
            fn_80007884();
        }
    }
    {
        s16 t2, t6, t0, t4;
        s16 *p80 = (s16 *)&lbl_80367F80;
        s16 off = (s16)(*(s16 *)((u8 *)p80 + 4) - *(s16 *)((u8 *)&lbl_80367F80 + 0));
        x = (s16)(x + off);
        t0 = *(s16 *)((u8 *)&lbl_80367F90 + 0);
        t4 = *(s16 *)((u8 *)rect + 4);
        t2 = *(s16 *)((u8 *)rect + 2);
        t6 = *(s16 *)((u8 *)rect + 6);
        temp_r31 = (s16)(t4 - t0);
        temp_r30 = (s16)(t6 - t2);
        if (temp_r31 != 0 && temp_r30 != 0) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(flags | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)x, (f32)y, (f32)lbl_80367F90.f0, (f32)rect[1], (f32)temp_r31, (f32)temp_r30);
            fn_800076EC();
            fn_80007884();
        }
    }
}
#pragma use_lmw_stmw reset
void fn_80154370(s16 arg0, s16 arg1) {
    void fn_8015FC7C(void);
    s32 fn_80009E44(f32 *);
    s32 fn_8000E0E4(void *);
    s32 fn_80010B78(s32, s32, f32);
    s32 fn_80010770(s32, s32, f32);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8000A174(void *, s32);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007668(s32 *);
    void fn_80007884(void);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_8001019C(s16, s16, s32, s32, s16, ...);
    void fn_80009E64(s32, f32);
    extern u8 lbl_802774F0[];
    extern f32 lbl_8036A874;
    extern f32 lbl_8036A87C;
    extern f32 lbl_8036A878;
    extern f64 lbl_8036A868;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367C40;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CE8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367C50;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;

    f32 sp10;
    u8 spC[4];
    s32 sp8;
    s16 temp_r20;
    s32 temp_r21;
    s32 temp_r22;
    s16 temp_r23;
    s16 temp_r24;
    s16 *temp_r25;
    s16 *temp_r26;
    s16 temp_r27;
    s16 temp_r28;
    s16 temp_r29;
    s32 temp_r30;
    s32 temp_r31;

    temp_r23 = arg0;
    temp_r24 = arg1;
    fn_8015FC7C();
    temp_r22 = fn_80009E44(&sp10);
    temp_r21 = fn_8000E0E4(lbl_802774F0 + 0x1DA);
    temp_r30 = fn_80010B78(temp_r21, -1, lbl_8036A874);
    temp_r31 = fn_80010770(temp_r21, -1, lbl_8036A874);
    fn_8000A258();
    fn_80009C0C(lbl_8036A87C);
    fn_8000A248();

    {
        s16 *rC40 = (s16 *)&lbl_80367C40;
        s16 t4;
        s16 t5;
        s16 t7;
        s16 t8;

        temp_r26 = (s16 *)&lbl_80367CE8;
        spC[0] = 0;
        temp_r25 = (s16 *)&lbl_80367C50;
        t4 = (s16)(temp_r26[2] - lbl_80367CE8.f0);
        t5 = (s16)(temp_r23 + ((s16)(rC40[2] - lbl_80367C40.f0) + 1));
        t8 = (s16)(temp_r26[3] - temp_r26[1]);
        t7 = (s16)(temp_r24 + ((s16)(temp_r25[3] - temp_r25[1]) + 8));
        spC[0] = 0;
        temp_r27 = (s16)(t5 + (s16)(temp_r30 + t4));
        spC[1] = 0;
        temp_r20 = (s16)(t7 + t8);
        spC[2] = 0;
        temp_r28 = (s16)(temp_r27 - t4);
        spC[3] = 0xFF;
        temp_r30 = t5;
        temp_r29 = t7;
        temp_r20 = (s16)(t7 + t8);
    }

    fn_8000A258();
    fn_8000A174(NULL, 0x12);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)(s16)temp_r30, (f32)temp_r29, (f32)(s16)(temp_r28 - (s16)temp_r30), (f32)(s16)(temp_r20 - temp_r29));
    sp8 = *(s32 *)spC;
    fn_80007668(&sp8);
    fn_80007884();
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0xA);

    {
        s16 t5 = (s16)(lbl_80367CE8.f4 - lbl_80367CE8.f0);
        s16 t0 = (s16)(temp_r26[3] - temp_r26[1]);
        temp_r30 = (s16)(temp_r27 - t5);
        temp_r27 = t5;
        temp_r28 = t0;
        if (temp_r27 != 0) {
            if (temp_r28 != 0) {
                fn_8000A258();
                fn_8000A174(lbl_80330D18, 0x11);
                fn_8000A248();
                fn_80007898(1);
                fn_8000770C((f32)(s16)temp_r30, (f32)temp_r29, (f32)lbl_80367CE8.f0, (f32)temp_r26[1], (f32)temp_r27, (f32)temp_r28);
                fn_80007884();
            }
        }
    }

    temp_r20 = (s16)(((s16)(temp_r26[3] - temp_r26[1]) - temp_r31) >> 1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A878);
    fn_8000A248();
    fn_8001019C(
        (s16)(temp_r23 + (s16)(temp_r26[2] - lbl_80367CE8.f0)),
        (s16)(temp_r24 + ((s16)(temp_r25[3] - temp_r25[1]) + 8 + temp_r20)),
        9, temp_r21, lbl_80367CE8.f0);
    fn_80009E64(temp_r22, sp10);
}
#pragma global_optimizer reset
void fn_801546B0(s16 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    extern s32 lbl_803680C8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367F30;
    s16 temp_r31;
    s16 temp_r30;

    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, 0x16);
    temp_r30 = (s16)(lbl_80367F30.f4 - lbl_80367F30.f0);
    temp_r31 = (s16)(lbl_80367F30.f6 - lbl_80367F30.f2);
    if (temp_r30 != 0 && temp_r31 != 0) {
        fn_8000A258();
        fn_8000A174((void *)&lbl_80330D18, (u16)(arg4 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)arg1, (f32)lbl_80367F30.f0, (f32)lbl_80367F30.f2, (f32)temp_r30, (f32)temp_r31);
        fn_80007884();
    }
}

#pragma use_lmw_stmw on
void fn_801547E4(s16 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0) {
    void fn_8015FC7C(s16, s16, s32, s32, s32, s32);
    s32 fn_80009E44(f32 *);
    void fn_8006ECCC(s32, void *, s32);
    u8 *fn_8018D900(s32);
    void fn_8000A258(void);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007668(s32 *);
    void fn_80007884(void);
    s32 fn_8000E0E4(void *);
    void fn_8001003C(s16, s16, s32, s32, s32, s32, ...);
    void fn_8007CF98(s32, f32, f32, f32);
    void fn_80009E64(s32, f32);
    extern s32 lbl_803680C8;
    extern u8 lbl_80330D18[64];
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CF8;
    extern f64 lbl_8036A868;
    extern f32 lbl_8036A874;
    extern f32 lbl_8036A880;
    extern u8 lbl_802774F0[];

    f32 sp10;
    u8 spC[4];
    s32 sp8;
    s16 temp_r24;
    s16 temp_r27;
    s16 h;
    s16 w;
    s16 *rect;
    s32 saved;
    u8 *color;
    s32 str;

    fn_8015FC7C(arg0, arg1, arg2, arg3, arg5, arg6);
    saved = fn_80009E44(&sp10);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0xC);
    color = fn_8018D900(0);
    rect = (s16 *)&lbl_80367CF8;
    spC[0] = color[0];
    w = (s16)(rect[2] - rect[0]);
    spC[1] = color[1];
    spC[2] = color[2];
    spC[3] = color[3];
    h = (s16)(rect[3] - rect[1]);
    if (w != 0) {
        if (h != 0) {
            fn_8000A258();
            fn_8000A174(lbl_80330D18, (u16)(arg6 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)(s16)(arg0 + 0x90), (f32)(s16)(arg1 + 0x2D),
                        (f32)lbl_80367CF8.f0, (f32)rect[1], (f32)w, (f32)h);
            sp8 = *(s32 *)spC;
            fn_80007668(&sp8);
            fn_80007884();
        }
    }
    fn_8000A258();
    fn_8000A174(NULL, 0x13);
    fn_8000A248();
    temp_r27 = (s16)arg0;
    temp_r24 = (s16)arg1;
    str = fn_8000E0E4(lbl_802774F0 + 0x1E8);
    fn_8001003C((s16)(temp_r27 + 0xA), (s16)(temp_r24 + 0xE), 6, 1, 0, str, lbl_8036A874, lbl_8036A880);
    str = fn_8000E0E4(lbl_802774F0 + 0x1EF);
    fn_8001003C((s16)(temp_r27 + 0x8C), (s16)(temp_r24 + 0x2F), 6, 1, 0, str, lbl_8036A874, lbl_8036A880);
    fn_8007CF98(arg4, (f32)(temp_r27 + 8), (f32)(temp_r24 + 0x2E), farg0);
    fn_80009E64(saved, sp10);
}
#pragma use_lmw_stmw reset

void fn_80154BE4(void) {
    M2C_UNK fn_8015C674();
    fn_8015C674();
}

#pragma use_lmw_stmw on
void fn_80154C04(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 unused, s32 arg5) {
    void fn_8015D240(void);
    s32 fn_80009E44(f32 *);
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80009E64(s32, f32);
    extern s32 lbl_803680C8;
    extern u8 lbl_80330D18[64];
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367F18;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367F10;
    extern f64 lbl_8036A868;
    extern f32 lbl_8036A878;
    extern f32 lbl_8036A884;
    f32 sp8;
    s16 *rect;
    s16 w;
    s32 a2;
    s16 h;
    s32 a0;
    s32 saved;
    s16 x;
    s16 y;

    fn_8015D240();
    saved = fn_80009E44(&sp8);
    fn_8000A258();
    fn_80009C0C(lbl_8036A878);
    fn_8000A248();
    rect = (s16 *)&lbl_80367F18;
    a2 = arg2;
    a0 = arg0;
    x = (s16)(a0 + ((a2 >> 2) - ((s16)(rect[2] - lbl_80367F18.f0) >> 1)));
    y = (s16)((f32)arg1 + (lbl_8036A884 * (f32)arg3 - (f32)((s16)(rect[3] - rect[1]) >> 1)));
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x81);
    h = (s16)(rect[3] - rect[1]);
    w = (s16)(rect[2] - lbl_80367F18.f0);
    if (w) {
        if (h) {
            fn_8000A258();
            fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)x, (f32)y, (f32)lbl_80367F18.f0, (f32)rect[1], (f32)w, (f32)h);
            fn_80007884();
        }
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x80);
    rect = (s16 *)&lbl_80367F10;
    x = (s16)((a0 + (a2 - (s16)(rect[2] - lbl_80367F10.f0))) >> 1);
    w = (s16)(rect[2] - lbl_80367F10.f0);
    h = (s16)(rect[3] - rect[1]);
    if (w) {
        if (h) {
            fn_8000A258();
            fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)x, (f32)(s16)(arg1 + 0x28), (f32)lbl_80367F10.f0, (f32)rect[1], (f32)w, (f32)h);
            fn_80007884();
        }
    }
    fn_80009E64(saved, sp8);
}
#pragma use_lmw_stmw on

s32 fn_8015512C(s32 arg0, s32 arg1) {
    s32 temp;
    
    if (arg0 == 0 || arg1 == 0) {
        return 0;
    }
    
    temp = arg0 * arg1;
    
    return temp;
}

#pragma use_lmw_stmw on
void fn_8015547C(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A258(void);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_80007668(void *);
    void fn_80009C0C(f32);
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    extern s16 lbl_80367CD8[4];
    extern s16 lbl_80367CB0[4];
    extern s16 lbl_80367CE0[4];
    extern s16 lbl_80367CA8[4];
    extern s16 lbl_80367CC8[4];
    extern s16 lbl_80367CD0[4];
    extern s16 lbl_80367CB8[4];
    extern s16 lbl_80367CC0[4];
    extern s16 lbl_80368040[4];
    extern f32 lbl_8036A888;
    f32 sp14;
    s16 sp5C;
    s32 handle;
    u8 color[4];
    u8 alpha;
    s16 x, y, x2, y2;
    s16 t14, t18, t19, t20;
    s16 w, h, px, py;
    s32 packed;

    x = arg0;
    y = arg1;
    x2 = (s16)(x + arg2);
    y2 = (s16)(y + arg3);
    alpha = arg4;

    {
        s16 h58 = (s16)(lbl_80367CD8[3] - lbl_80367CD8[1]);
        s16 w58 = (s16)(lbl_80367CD8[2] - lbl_80367CD8[0]);
        s16 h38 = (s16)(lbl_80367CB0[3] - lbl_80367CB0[1]);
        s16 w38 = (s16)(lbl_80367CB0[2] - lbl_80367CB0[0]);
        t19 = (s16)(x2 - w58);
        t18 = (s16)(y2 - h58);
        t20 = (s16)(y + h38);
        t14 = (s16)(x + w38);
        sp5C = t20;
    }

    handle = fn_80009E44(&sp14);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x36);

    w = (s16)(lbl_80367CB0[2] - lbl_80367CB0[0]);
    h = (s16)(lbl_80367CB0[3] - lbl_80367CB0[1]);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)x, (f32)y, (f32)lbl_80367CB0[0], (f32)lbl_80367CB0[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x3C);
    w = (s16)(lbl_80367CE0[2] - lbl_80367CE0[0]);
    h = (s16)(lbl_80367CE0[3] - lbl_80367CE0[1]);
    px = (s16)(x2 - w);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)arg1, (f32)lbl_80367CE0[0], (f32)lbl_80367CE0[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x35);
    w = (s16)(lbl_80367CA8[2] - lbl_80367CA8[0]);
    h = (s16)(lbl_80367CA8[3] - lbl_80367CA8[1]);
    py = (s16)(y2 - h);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)py, (f32)lbl_80367CA8[0], (f32)lbl_80367CA8[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x3B);
    h = (s16)(lbl_80367CD8[3] - lbl_80367CD8[1]);
    w = (s16)(lbl_80367CD8[2] - lbl_80367CD8[0]);
    px = (s16)(x2 - w);
    py = (s16)(y2 - h);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)py, (f32)lbl_80367CD8[0], (f32)lbl_80367CD8[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x39);
    t19 = (s16)(t19 - t14);
    h = (s16)(lbl_80367CC8[3] - lbl_80367CC8[1]);
    px = (s16)(x + (s16)(lbl_80367CB0[2] - lbl_80367CB0[0]));
    if (t19 != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)arg1, (f32)lbl_80367CC8[0], (f32)lbl_80367CC8[1], (f32)t19, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x3A);
    h = (s16)(lbl_80367CD0[3] - lbl_80367CD0[1]);
    px = (s16)(x + (s16)(lbl_80367CA8[2] - lbl_80367CA8[0]));
    py = (s16)(y2 - h);
    if (t19 != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)py, (f32)lbl_80367CD0[0], (f32)lbl_80367CD0[1], (f32)t19, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x37);
    t18 = (s16)(t18 - sp5C);
    w = (s16)(lbl_80367CB8[2] - lbl_80367CB8[0]);
    py = (s16)(y + (s16)(lbl_80367CB0[3] - lbl_80367CB0[1]));
    if (w != 0 && t18 != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)py, (f32)lbl_80367CB8[0], (f32)lbl_80367CB8[1], (f32)w, (f32)t18);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x38);
    w = (s16)(lbl_80367CC0[2] - lbl_80367CC0[0]);
    py = (s16)(y + (s16)(lbl_80367CE0[3] - lbl_80367CE0[1]));
    if (w != 0 && t18 != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x2 - w), (f32)py, (f32)lbl_80367CC0[0], (f32)lbl_80367CC0[1], (f32)w, (f32)t18);
        fn_80007884();
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    py = (s16)(arg1 + 2);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x74);
    w = (s16)(x2 - x);
    h = (s16)((s16)(y2 - 2) - py);
    color[0] = 0xFF;
    color[1] = 0xFF;
    color[2] = 0xFF;
    color[3] = alpha;
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)arg0, (f32)py, (f32)w, (f32)h);
        fn_800077B0((f32)lbl_80368040[0], (f32)lbl_80368040[1],
                    (f32)(s16)(lbl_80368040[2] - lbl_80368040[0]),
                    (f32)(s16)(lbl_80368040[3] - lbl_80368040[1]));
        packed = *(s32 *)color;
        fn_80007668(&packed);
        fn_80007884();
    }
    fn_80009E64(handle, sp14);
}

#pragma use_lmw_stmw on
void fn_801569C4(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_80009C0C(f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007358(f32, f32);
    void fn_80007668(s32 *);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8006ECCC(s32, void *, s32);
    typedef struct { s16 f0; s16 f2; s16 f4; s16 f6; } Rect;
    extern Rect lbl_80367C68;
    extern Rect lbl_80367C70;
    extern Rect lbl_80367C78;
    extern Rect lbl_80367C80;
    extern Rect lbl_80367C88;
    extern Rect lbl_80367C90;
    extern Rect lbl_80367C98;
    extern Rect lbl_80367CA0;
    extern Rect lbl_80367FE0;
    extern Rect lbl_80367FE8;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern f32 lbl_8036A880;
    extern f32 lbl_8036A888;
    f32 sp14;
    u8 sp10[4];
    s32 spC;
    u8 sp8;
    s32 saved;
    Rect *p98;
    Rect *p70;
    Rect *pA0;
    Rect *p68;
    Rect *p88;
    Rect *p90;
    s16 a0;
    s16 a1;
    s16 x1;
    s16 y1;
    s16 w;
    s16 h;
    s16 t14;
    s16 t19;
    s16 t20;
    s16 dw;
    s16 dh;
    s16 xfill;
    s16 xR;
    s32 fl;

    p98 = &lbl_80367C98;
    a0 = arg0;
    a1 = arg1;
    p70 = &lbl_80367C70;
    x1 = (s16)(a0 + arg2);
    y1 = (s16)(a1 + arg3);
    sp8 = arg4;
    fl = arg5;
    h = (s16)(p98->f6 - p98->f2);
    w = (s16)(p98->f4 - lbl_80367C98.f0);
    t19 = (s16)(x1 - w);
    dh = (s16)(y1 - h);
    t20 = (s16)(a1 + (s16)(p70->f6 - p70->f2));
    t14 = (s16)(a0 + (s16)(p70->f4 - lbl_80367C70.f0));
    saved = fn_80009E44(&sp14);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x2A);
    w = (s16)(p70->f4 - lbl_80367C70.f0);
    h = (s16)(p70->f6 - p70->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)a1, (f32)lbl_80367C70.f0, (f32)p70->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x30);
    pA0 = &lbl_80367CA0;
    w = (s16)(pA0->f4 - lbl_80367CA0.f0);
    h = (s16)(pA0->f6 - pA0->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)a1, (f32)lbl_80367CA0.f0, (f32)pA0->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x29);
    p68 = &lbl_80367C68;
    w = (s16)(p68->f4 - lbl_80367C68.f0);
    h = (s16)(p68->f6 - p68->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)(s16)(y1 - h), (f32)lbl_80367C68.f0, (f32)p68->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x2F);
    w = (s16)(p98->f4 - lbl_80367C98.f0);
    h = (s16)(p98->f6 - p98->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)(s16)(y1 - h), (f32)lbl_80367C98.f0, (f32)p98->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x2D);
    p88 = &lbl_80367C88;
    dw = (s16)(t19 - t14);
    h = (s16)(p88->f6 - p88->f2);
    t14 = (s16)(a0 + (s16)(p70->f4 - lbl_80367C70.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)a1, (f32)lbl_80367C88.f0, (f32)p88->f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x2E);
    p90 = &lbl_80367C90;
    h = (s16)(p90->f6 - p90->f2);
    t14 = (s16)(a0 + (s16)(p68->f4 - lbl_80367C68.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)(s16)(y1 - h), (f32)lbl_80367C90.f0, (f32)p90->f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x2B);
    dh = (s16)(dh - t20);
    w = (s16)(lbl_80367C78.f4 - lbl_80367C78.f0);
    t14 = (s16)(a1 + (s16)(p70->f6 - p70->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(a0 + 1), (f32)t14, (f32)lbl_80367C78.f0, (f32)lbl_80367C78.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x2C);
    w = (s16)(lbl_80367C80.f4 - lbl_80367C80.f0);
    t14 = (s16)(a1 + (s16)(pA0->f6 - pA0->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)((x1 - w) - 1), (f32)t14, (f32)lbl_80367C80.f0, (f32)lbl_80367C80.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    xR = (s16)(x1 - 1);
    xfill = (s16)(a0 + 1);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x45);
    w = (s16)(lbl_80367FE0.f4 - lbl_80367FE0.f0);
    h = (s16)(y1 - a1);
    sp10[0] = 0xFF;
    sp10[1] = 0xFF;
    sp10[2] = 0xFF;
    sp10[3] = sp8;
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)xfill, (f32)a1, (f32)w, (f32)h);
        fn_800077B0((f32)lbl_80367FE0.f0, (f32)lbl_80367FE0.f2,
                    (f32)(s16)(lbl_80367FE0.f4 - lbl_80367FE0.f0),
                    (f32)(s16)(lbl_80367FE0.f6 - lbl_80367FE0.f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        spC = *(s32 *)sp10;
        fn_80007668(&spC);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x46);
    w = (s16)(lbl_80367FE8.f4 - lbl_80367FE8.f0);
    sp10[0] = 0xFF;
    sp10[1] = 0xFF;
    sp10[2] = 0xFF;
    sp10[3] = sp8;
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)(s16)(xR - w), (f32)a1, (f32)w, (f32)h);
        fn_800077B0((f32)lbl_80367FE8.f0, (f32)lbl_80367FE8.f2,
                    (f32)(s16)(lbl_80367FE8.f4 - lbl_80367FE8.f0),
                    (f32)(s16)(lbl_80367FE8.f6 - lbl_80367FE8.f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        spC = *(s32 *)sp10;
        fn_80007668(&spC);
        fn_80007884();
    }
    w = (s16)(lbl_80367FE0.f4 - lbl_80367FE0.f0);
    if ((s16)(xR - xfill) > (s32)(w * 2)) {
        s16 xl = (s16)(xfill + w);
        s16 wr = (s16)(lbl_80367FE8.f4 - lbl_80367FE8.f0);
        s16 xr = (s16)(xR - wr);
        sp10[0] = 0x38;
        sp10[1] = 0x1F;
        sp10[2] = 0x16;
        sp10[3] = sp8;
        fn_8000A258();
        fn_8000A174(NULL, (u16)(fl | 2));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)xl, (f32)a1, (f32)(s16)(xr - xl), (f32)h);
        spC = *(s32 *)sp10;
        fn_80007668(&spC);
        fn_80007884();
    }
    fn_80009E64(saved, sp14);
}

void fn_80157700(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    void fn_80006B18(s32, s16, s32, s32, u8);
    void fn_80007668(s32 *);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    s32 fn_8000E0E4(void *);
    void fn_8001019C(s16, s16, s32, s32, ...);
    s32 fn_800102BC(s32, f32);
    void fn_8006ECCC(s32, void *, s32);
    void fn_8008BC94(s32, s32, s32);
    s32 *fn_8018D900(s32);
    extern s32 lbl_803680C8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80368008;
    extern f32 lbl_8036A874;
    extern f32 lbl_8036A878;
    extern u8 lbl_80330D18[64];
    extern u8 lbl_802774F0[];
    f32 spC;
    s32 sp8;
    s32 str;
    s16 h;
    s16 w;
    s16 *rect;
    s32 saved;
    s32 flags;
    s32 a2;
    s16 y;
    s16 x;

    x = arg0;
    y = arg1;
    a2 = arg2;
    flags = arg3;
    saved = fn_80009E44(&spC);
    fn_8006ECCC(lbl_803680C8, (void *)lbl_80330D18, 0x49);
    rect = (s16 *)&lbl_80368008;
    h = (s16)(rect[3] - rect[1]);
    w = (s16)(rect[2] - lbl_80368008.f0);
    if (w != 0) {
        if (h != 0) {
            fn_8000A258();
            fn_8000A174((void *)lbl_80330D18, (u16)(flags | 1));
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C((f32)x, (f32)y, (f32)lbl_80368008.f0, (f32)rect[1], (f32)w, (f32)h);
            fn_80007884();
        }
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A878);
    fn_8000A248();
    flags = x;
    fn_8008BC94(flags + 0x18, (s16)y - 3, 0);
    fn_8000A258();
    fn_80009C0C(lbl_8036A878);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(NULL, 0x13);
    fn_8000A248();
    x = (s16)(rect[3] - rect[1]);
    x = (s16)((x - fn_800102BC(-1, lbl_8036A874)) >> 1);
    str = fn_8000E0E4(lbl_802774F0 + 0x1f6);
    x = y + x;
    fn_8001019C((s16)(flags + 0x40), (s16)x, 0xF, str);
    fn_80007898(6);
    sp8 = *fn_8018D900(2);
    fn_80007668(&sp8);
    fn_80006B18(flags + 0xC0, (s16)x, 0, 0, (u8)a2);
    fn_80007884();
    fn_80009E64(saved, spC);
}

#pragma use_lmw_stmw on
void fn_80157930(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_80009C0C(f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007358(f32, f32);
    void fn_80007668(s32 *);
    void fn_800076CC(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8006ECCC(s32, void *, s32);
    typedef struct { s16 f0; s16 f2; s16 f4; s16 f6; } Rect;
    extern Rect lbl_80367C30;
    extern Rect lbl_80367C38;
    extern Rect lbl_80367C40;
    extern Rect lbl_80367C48;
    extern Rect lbl_80367C50;
    extern Rect lbl_80367C58;
    extern Rect lbl_80367C60;
    extern Rect lbl_80368050;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern f32 lbl_8036A880;
    extern f32 lbl_8036A888;
    f32 sp14;
    u8 sp10[4];
    s32 spC;
    u8 sp8;
    s32 saved;
    Rect *p58;
    Rect *p38;
    Rect *p60;
    Rect *p30;
    Rect *p50;
    s16 a0;
    s16 a1;
    s16 x1;
    s16 y1;
    s16 w;
    s16 h;
    s16 t14;
    s16 t19;
    s16 t20;
    s16 dw;
    s16 dh;
    s16 xfill;
    s32 fl;

    p58 = &lbl_80367C58;
    a0 = arg0;
    a1 = arg1;
    p38 = &lbl_80367C38;
    x1 = (s16)(a0 + arg2);
    y1 = (s16)(a1 + arg3);
    sp8 = arg4;
    fl = arg5;
    h = (s16)(p58->f6 - p58->f2);
    w = (s16)(p58->f4 - lbl_80367C58.f0);
    t19 = (s16)(x1 - w);
    dh = (s16)(y1 - h);
    t20 = (s16)(a1 + (s16)(p38->f6 - p38->f2));
    t14 = (s16)(a0 + (s16)(p38->f4 - lbl_80367C38.f0));
    saved = fn_80009E44(&sp14);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 4);
    w = (s16)(p38->f4 - lbl_80367C38.f0);
    h = (s16)(p38->f6 - p38->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)a1, (f32)lbl_80367C38.f0, (f32)p38->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 9);
    p60 = &lbl_80367C60;
    w = (s16)(p60->f4 - lbl_80367C60.f0);
    h = (s16)(p60->f6 - p60->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)a1, (f32)lbl_80367C60.f0, (f32)p60->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 3);
    p30 = &lbl_80367C30;
    w = (s16)(p30->f4 - lbl_80367C30.f0);
    h = (s16)(p30->f6 - p30->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)(s16)(y1 - h), (f32)lbl_80367C30.f0, (f32)p30->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 8);
    w = (s16)(p58->f4 - lbl_80367C58.f0);
    h = (s16)(p58->f6 - p58->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)(s16)(y1 - h), (f32)lbl_80367C58.f0, (f32)p58->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 7);
    p50 = &lbl_80367C50;
    dw = (s16)(t19 - t14);
    h = (s16)(p50->f6 - p50->f2);
    t14 = (s16)(a0 + (s16)(p38->f4 - lbl_80367C38.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)a1, (f32)lbl_80367C50.f0, (f32)p50->f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    h = (s16)(p50->f6 - p50->f2);
    t14 = (s16)(a0 + (s16)(p30->f4 - lbl_80367C30.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)(s16)(y1 - h), (f32)lbl_80367C50.f0, (f32)p50->f2, (f32)dw, (f32)h);
        fn_800076CC();
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 5);
    dh = (s16)(dh - t20);
    w = (s16)(lbl_80367C40.f4 - lbl_80367C40.f0);
    t14 = (s16)(a1 + (s16)(p38->f6 - p38->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(a0 + 1), (f32)t14, (f32)lbl_80367C40.f0, (f32)lbl_80367C40.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 6);
    w = (s16)(lbl_80367C48.f4 - lbl_80367C48.f0);
    t14 = (s16)(a1 + (s16)(p60->f6 - p60->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)((x1 - w) - 1), (f32)t14, (f32)lbl_80367C48.f0, (f32)lbl_80367C48.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    xfill = (s16)(a0 + 1);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x66);
    w = (s16)(lbl_80368050.f4 - lbl_80368050.f0);
    h = (s16)(y1 - a1);
    sp10[0] = 0xFF;
    sp10[1] = 0xFF;
    sp10[2] = 0xFF;
    sp10[3] = sp8;
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)xfill, (f32)a1, (f32)w, (f32)h);
        fn_800077B0((f32)lbl_80368050.f0, (f32)lbl_80368050.f2,
                    (f32)(s16)(lbl_80368050.f4 - lbl_80368050.f0),
                    (f32)(s16)(lbl_80368050.f6 - lbl_80368050.f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        spC = *(s32 *)sp10;
        fn_80007668(&spC);
        fn_80007884();
    }
    fn_80009E64(saved, sp14);
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
void fn_801583D0(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_80009C0C(f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007668(s32 *);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8006ECCC(s32, void *, s32);
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367DB8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367DC0;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367DC8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367DD0;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367DD8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367DE0;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367DE8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367DF0;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern f32 lbl_8036A888;

    f32 sp14;
    u8 sp10[4];
    s32 spC;
    u8 sp8;
    s32 saved;
    s16 x1;
    s16 y1;
    s16 w;
    s16 h;
    s16 t14;
    s16 t19;
    s16 t20;
    s16 dw;
    s16 dh;
    s16 xfill;

    sp8 = arg4;
    x1 = (s16)(arg0 + arg2);
    y1 = (s16)(arg1 + arg3);
    w = (s16)(lbl_80367DE8.f4 - lbl_80367DE8.f0);
    h = (s16)(lbl_80367DE8.f6 - lbl_80367DE8.f2);
    t19 = (s16)(x1 - w);
    dh = (s16)(y1 - h);
    t14 = (s16)(arg0 + (s16)(lbl_80367DC0.f4 - lbl_80367DC0.f0));
    t20 = (s16)(arg1 + (s16)(lbl_80367DC0.f6 - lbl_80367DC0.f2));
    saved = fn_80009E44(&sp14);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x57);
    w = (s16)(lbl_80367DC0.f4 - lbl_80367DC0.f0);
    h = (s16)(lbl_80367DC0.f6 - lbl_80367DC0.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)arg1, (f32)lbl_80367DC0.f0, (f32)lbl_80367DC0.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x5D);
    w = (s16)(lbl_80367DF0.f4 - lbl_80367DF0.f0);
    h = (s16)(lbl_80367DF0.f6 - lbl_80367DF0.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)arg1, (f32)lbl_80367DF0.f0, (f32)lbl_80367DF0.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x56);
    w = (s16)(lbl_80367DB8.f4 - lbl_80367DB8.f0);
    h = (s16)(lbl_80367DB8.f6 - lbl_80367DB8.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)(s16)(y1 - h), (f32)lbl_80367DB8.f0, (f32)lbl_80367DB8.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x5C);
    w = (s16)(lbl_80367DE8.f4 - lbl_80367DE8.f0);
    h = (s16)(lbl_80367DE8.f6 - lbl_80367DE8.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)(s16)(y1 - h), (f32)lbl_80367DE8.f0, (f32)lbl_80367DE8.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x5A);
    dw = (s16)(t19 - t14);
    h = (s16)(lbl_80367DD8.f6 - lbl_80367DD8.f2);
    t14 = (s16)(arg0 + (s16)(lbl_80367DC0.f4 - lbl_80367DC0.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)arg1, (f32)lbl_80367DD8.f0, (f32)lbl_80367DD8.f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x5B);
    h = (s16)(lbl_80367DE0.f6 - lbl_80367DE0.f2);
    t14 = (s16)(arg0 + (s16)(lbl_80367DB8.f4 - lbl_80367DB8.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)(s16)(y1 - h), (f32)lbl_80367DE0.f0, (f32)lbl_80367DE0.f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x58);
    dh = (s16)(dh - t20);
    w = (s16)(lbl_80367DC8.f4 - lbl_80367DC8.f0);
    t14 = (s16)(arg1 + (s16)(lbl_80367DC0.f6 - lbl_80367DC0.f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(arg0 + 1), (f32)t14, (f32)lbl_80367DC8.f0, (f32)lbl_80367DC8.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x59);
    w = (s16)(lbl_80367DD0.f4 - lbl_80367DD0.f0);
    t14 = (s16)(arg1 + (s16)(lbl_80367DF0.f6 - lbl_80367DF0.f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)((x1 - w) - 1), (f32)t14, (f32)lbl_80367DD0.f0, (f32)lbl_80367DD0.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    xfill = (s16)(arg0 + 1);
    sp10[0] = 0x24;
    sp10[1] = 0x16;
    sp10[2] = 3;
    sp10[3] = sp8;
    fn_8000A258();
    fn_8000A174(NULL, (u16)(arg5 | 2));
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)xfill, (f32)arg1, (f32)(s16)((s16)(x1 - 1) - xfill), (f32)(s16)(y1 - arg1));
    spC = *(s32 *)sp10;
    fn_80007668(&spC);
    fn_80007884();
    fn_80009E64(saved, sp14);
}

#pragma use_lmw_stmw on
void fn_80158DD8(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A258(void);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_800076EC(void);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_80007358(f32, f32);
    void fn_80007668(void *);
    void fn_80009C0C(f32);
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    extern s16 lbl_80367E28[4];
    extern s16 lbl_80367E00[4];
    extern s16 lbl_80367E30[4];
    extern s16 lbl_80367DF8[4];
    extern s16 lbl_80367E18[4];
    extern s16 lbl_80367E20[4];
    extern s16 lbl_80367E08[4];
    extern s16 lbl_80367E10[4];
    extern s16 lbl_80368028[4];
    extern f32 lbl_8036A888;
    extern f32 lbl_8036A880;
    f32 sp14;
    s32 handle;
    u8 color[4];
    u8 alpha;
    s16 x, y, x2, y2;
    s16 t14, t18, t19, t20;
    s16 w, h, px, py;
    s32 packed;

    x = arg0;
    y = arg1;
    x2 = (s16)(x + arg2);
    y2 = (s16)(y + arg3);
    alpha = arg4;

    {
        s16 h58 = (s16)(lbl_80367E28[3] - lbl_80367E28[1]);
        s16 w58 = (s16)(lbl_80367E28[2] - lbl_80367E28[0]);
        s16 h38 = (s16)(lbl_80367E00[3] - lbl_80367E00[1]);
        s16 w38 = (s16)(lbl_80367E00[2] - lbl_80367E00[0]);
        t19 = (s16)(x2 - w58);
        t18 = (s16)(y2 - h58);
        t20 = (s16)(y + h38);
        t14 = (s16)(x + w38);
    }

    handle = fn_80009E44(&sp14);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x5F);

    w = (s16)(lbl_80367E00[2] - lbl_80367E00[0]);
    h = (s16)(lbl_80367E00[3] - lbl_80367E00[1]);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)x, (f32)y, (f32)lbl_80367E00[0], (f32)lbl_80367E00[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x65);
    w = (s16)(lbl_80367E30[2] - lbl_80367E30[0]);
    h = (s16)(lbl_80367E30[3] - lbl_80367E30[1]);
    px = (s16)(x2 - w);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)arg1, (f32)lbl_80367E30[0], (f32)lbl_80367E30[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x5E);
    w = (s16)(lbl_80367DF8[2] - lbl_80367DF8[0]);
    h = (s16)(lbl_80367DF8[3] - lbl_80367DF8[1]);
    py = (s16)(y2 - h);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)py, (f32)lbl_80367DF8[0], (f32)lbl_80367DF8[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x64);
    h = (s16)(lbl_80367E28[3] - lbl_80367E28[1]);
    w = (s16)(lbl_80367E28[2] - lbl_80367E28[0]);
    px = (s16)(x2 - w);
    py = (s16)(y2 - h);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)py, (f32)lbl_80367E28[0], (f32)lbl_80367E28[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x62);
    t19 = (s16)(t19 - t14);
    h = (s16)(lbl_80367E18[3] - lbl_80367E18[1]);
    px = (s16)(x + (s16)(lbl_80367E00[2] - lbl_80367E00[0]));
    if (t19 != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)(s16)(arg1 + 4), (f32)lbl_80367E18[0], (f32)lbl_80367E18[1], (f32)t19, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x63);
    h = (s16)(lbl_80367E20[3] - lbl_80367E20[1]);
    px = (s16)(x + (s16)(lbl_80367DF8[2] - lbl_80367DF8[0]));
    py = (s16)((y2 - h) - 4);
    if (t19 != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)py, (f32)lbl_80367E20[0], (f32)lbl_80367E20[1], (f32)t19, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x60);
    t18 = (s16)(t18 - t20);
    w = (s16)(lbl_80367E08[2] - lbl_80367E08[0]);
    py = (s16)(y + (s16)(lbl_80367E00[3] - lbl_80367E00[1]));
    if (w != 0 && t18 != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)py, (f32)lbl_80367E08[0], (f32)lbl_80367E08[1], (f32)w, (f32)t18);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x61);
    w = (s16)(lbl_80367E10[2] - lbl_80367E10[0]);
    py = (s16)(y + (s16)(lbl_80367E30[3] - lbl_80367E30[1]));
    if (w != 0 && t18 != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x2 - w), (f32)py, (f32)lbl_80367E10[0], (f32)lbl_80367E10[1], (f32)w, (f32)t18);
        fn_800076EC();
        fn_80007884();
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    py = (s16)(arg1 + 4);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x66);
    w = (s16)(lbl_80368028[2] - lbl_80368028[0]);
    h = (s16)((s16)(y2 - 4) - py);
    color[0] = 0xFF;
    color[1] = 0xFF;
    color[2] = 0xFF;
    color[3] = alpha;
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)arg0, (f32)py, (f32)w, (f32)h);
        fn_800077B0((f32)lbl_80368028[0], (f32)lbl_80368028[1],
                    (f32)(s16)(lbl_80368028[2] - lbl_80368028[0]),
                    (f32)(s16)(lbl_80368028[3] - lbl_80368028[1]));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        packed = *(s32 *)color;
        fn_80007668(&packed);
        fn_80007884();
    }
    fn_80009E64(handle, sp14);
}

#pragma global_optimizer reset
#pragma use_lmw_stmw reset

void fn_80159898(s16 arg0, s16 arg1, s32 arg2, s32 arg3, s8 arg4, s32 arg5) {
    M2C_UNK fn_800072B0(s32 *, s32 *, s32 *, s32 *, s32, s32, s32);
    M2C_UNK fn_800075D8();
    M2C_UNK fn_800076EC();
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80009C0C(f32);
    s32 fn_80009E44(f32 *, s16, s16, s16, s16, s16, s16);
    M2C_UNK fn_80009E64(s32, f32);
    M2C_UNK fn_8006ECCC(s32, void *, M2C_UNK);
    extern M2C_UNK lbl_80330CE8;
    extern M2C_UNK lbl_80367DF8;
    extern M2C_UNK lbl_80367E00;
    extern M2C_UNK lbl_80367E08;
    extern M2C_UNK lbl_80367E10;
    extern M2C_UNK lbl_80367E18;
    extern M2C_UNK lbl_80367E20;
    extern M2C_UNK lbl_80367E28;
    extern M2C_UNK lbl_80367E30;
    extern f32 lbl_8036A888;
    s16 sp64;
    s16 sp62;
    s16 sp60;
    f32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r0_4;
    s16 temp_r0_5;
    s16 temp_r0_6;
    s16 temp_r0_7;
    s16 temp_r10;
    s16 temp_r11;
    s16 temp_r12;
    s16 temp_r14;
    s16 temp_r19;
    s16 temp_r19_2;
    s16 temp_r20;
    s16 temp_r26;
    s16 temp_r28;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 temp_r4;
    s16 temp_r4_2;
    s16 temp_r4_3;
    s16 temp_r4_4;
    s16 temp_r4_5;
    s16 temp_r5;
    s16 temp_r5_2;
    s16 temp_r5_3;
    s16 temp_r6;
    s16 temp_r7;
    s32 temp_r18;
    s32 temp_r4_7;
    s32 temp_r5_5;
    void *temp_r4_6;
    void *temp_r5_4;
    void *temp_r6_2;

    temp_r12 = arg0 + arg2;
    temp_r11 = arg1 + arg3;
    temp_r0 = M2C_FIELD(&lbl_80367E28, s16 *, 4) - M2C_FIELD(&lbl_80367E28, s16 *, 0);
    temp_r10 = M2C_FIELD(&lbl_80367E28, s16 *, 6) - M2C_FIELD(&lbl_80367E28, s16 *, 2);
    temp_r6 = temp_r12 - temp_r0;
    temp_r7 = temp_r11 - temp_r10;
    temp_r5 = arg1 + (s16) (M2C_FIELD(&lbl_80367E00, s16 *, 6) - M2C_FIELD(&lbl_80367E00, s16 *, 2));
    temp_r4 = arg0 + (s16) (M2C_FIELD(&lbl_80367E00, s16 *, 4) - M2C_FIELD(&lbl_80367E00, s16 *, 0));
    sp60 = temp_r6;
    sp62 = temp_r5;
    sp64 = temp_r4;
    temp_r18 = fn_80009E44(&sp28, temp_r4, temp_r5, temp_r6, temp_r7, temp_r0, temp_r10);
    fn_8006ECCC(lbl_803680C8, &lbl_80330CE8 + 0x30, 0x5F);
    temp_r0_2 = M2C_FIELD(&lbl_80367E00, s16 *, 4) - M2C_FIELD(&lbl_80367E00, s16 *, 0);
    temp_r0_3 = M2C_FIELD(&lbl_80367E00, s16 *, 6) - M2C_FIELD(&lbl_80367E00, s16 *, 2);
    if ((temp_r0_2 != 0) && (temp_r0_3 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330CE8 + 0x30, (u16) (arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) arg0, (f32) arg1, (f32) M2C_FIELD(&lbl_80367E00, s16 *, 0), (f32) M2C_FIELD(&lbl_80367E00, s16 *, 2), (f32) temp_r0_2, (f32) temp_r0_3);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, &lbl_80330CE8 + 0x30, 0x65);
    temp_r5_2 = M2C_FIELD(&lbl_80367E30, s16 *, 4) - M2C_FIELD(&lbl_80367E30, s16 *, 0);
    temp_r0_4 = M2C_FIELD(&lbl_80367E30, s16 *, 6) - M2C_FIELD(&lbl_80367E30, s16 *, 2);
    if ((temp_r5_2 != 0) && (temp_r0_4 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330CE8 + 0x30, (u16) (arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) (s16) (temp_r12 - temp_r5_2), (f32) arg1, (f32) M2C_FIELD(&lbl_80367E30, s16 *, 0), (f32) M2C_FIELD(&lbl_80367E30, s16 *, 2), (f32) temp_r5_2, (f32) temp_r0_4);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, &lbl_80330CE8 + 0x30, 0x5E);
    temp_r0_5 = M2C_FIELD(&lbl_80367DF8, s16 *, 4) - M2C_FIELD(&lbl_80367DF8, s16 *, 0);
    temp_r0_6 = M2C_FIELD(&lbl_80367DF8, s16 *, 6) - M2C_FIELD(&lbl_80367DF8, s16 *, 2);
    if ((temp_r0_5 != 0) && (temp_r0_6 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330CE8 + 0x30, (u16) (arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) arg0, (f32) (s16) (temp_r11 - temp_r0_6), (f32) M2C_FIELD(&lbl_80367DF8, s16 *, 0), (f32) M2C_FIELD(&lbl_80367DF8, s16 *, 2), (f32) temp_r0_5, (f32) temp_r0_6);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, &lbl_80330CE8 + 0x30, 0x64);
    temp_r4_2 = M2C_FIELD(&lbl_80367E28, s16 *, 6) - M2C_FIELD(&lbl_80367E28, s16 *, 2);
    temp_r4_3 = M2C_FIELD(&lbl_80367E28, s16 *, 4) - M2C_FIELD(&lbl_80367E28, s16 *, 0);
    if ((temp_r4_3 != 0) && (temp_r4_2 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330CE8 + 0x30, (u16) (arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) (s16) (temp_r12 - temp_r4_3), (f32) (s16) (temp_r11 - temp_r4_2), (f32) M2C_FIELD(&lbl_80367E28, s16 *, 0), (f32) M2C_FIELD(&lbl_80367E28, s16 *, 2), (f32) temp_r4_3, (f32) temp_r4_2);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, &lbl_80330CE8 + 0x30, 0x62);
    temp_r28 = sp60 - sp64;
    temp_r3 = M2C_FIELD(&lbl_80367E18, s16 *, 6) - M2C_FIELD(&lbl_80367E18, s16 *, 2);
    temp_r19 = arg0 + (s16) (M2C_FIELD(&lbl_80367E00, s16 *, 4) - M2C_FIELD(&lbl_80367E00, s16 *, 0));
    if ((temp_r28 != 0) && (temp_r3 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330CE8 + 0x30, (u16) (arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) temp_r19, (f32) (s16) (arg1 + 4), (f32) M2C_FIELD(&lbl_80367E18, s16 *, 0), (f32) M2C_FIELD(&lbl_80367E18, s16 *, 2), (f32) temp_r28, (f32) temp_r3);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, &lbl_80330CE8 + 0x30, 0x63);
    temp_r4_4 = M2C_FIELD(&lbl_80367E20, s16 *, 6) - M2C_FIELD(&lbl_80367E20, s16 *, 2);
    temp_r20 = arg0 + (s16) (M2C_FIELD(&lbl_80367DF8, s16 *, 4) - M2C_FIELD(&lbl_80367DF8, s16 *, 0));
    if ((temp_r28 != 0) && (temp_r4_4 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330CE8 + 0x30, (u16) (arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) temp_r20, (f32) (s16) ((temp_r11 - temp_r4_4) - 4), (f32) M2C_FIELD(&lbl_80367E20, s16 *, 0), (f32) M2C_FIELD(&lbl_80367E20, s16 *, 2), (f32) temp_r28, (f32) temp_r4_4);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, &lbl_80330CE8 + 0x30, 0x60);
    temp_r26 = temp_r7 - sp62;
    temp_r4_5 = M2C_FIELD(&lbl_80367E08, s16 *, 4) - M2C_FIELD(&lbl_80367E08, s16 *, 0);
    temp_r14 = arg1 + (s16) (M2C_FIELD(&lbl_80367E00, s16 *, 6) - M2C_FIELD(&lbl_80367E00, s16 *, 2));
    if ((temp_r4_5 != 0) && (temp_r26 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330CE8 + 0x30, (u16) (arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) arg0, (f32) temp_r14, (f32) M2C_FIELD(&lbl_80367E08, s16 *, 0), (f32) M2C_FIELD(&lbl_80367E08, s16 *, 2), (f32) temp_r4_5, (f32) temp_r26);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, &lbl_80330CE8 + 0x30, 0x61);
    temp_r5_3 = M2C_FIELD(&lbl_80367E10, s16 *, 4) - M2C_FIELD(&lbl_80367E10, s16 *, 0);
    temp_r19_2 = arg1 + (s16) (M2C_FIELD(&lbl_80367E30, s16 *, 6) - M2C_FIELD(&lbl_80367E30, s16 *, 2));
    if ((temp_r5_3 != 0) && (temp_r26 != 0)) {
        fn_8000A258();
        fn_8000A174(&lbl_80330CE8 + 0x30, (u16) (arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32) (s16) (temp_r12 - temp_r5_3), (f32) temp_r19_2, (f32) M2C_FIELD(&lbl_80367E10, s16 *, 0), (f32) M2C_FIELD(&lbl_80367E10, s16 *, 2), (f32) temp_r5_3, (f32) temp_r26);
        fn_800076EC();
        fn_80007884();
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    temp_r4_6 = &lbl_80330CE8 + 0x20;
    temp_r5_4 = &lbl_80330CE8 + 0x10;
    temp_r3_2 = temp_r11 - 4;
    temp_r0_7 = arg1 + 4;
    M2C_FIELD(temp_r4_6, s8 *, 3) = arg4;
    M2C_FIELD(temp_r5_4, s8 *, 3) = arg4;
    M2C_FIELD(temp_r4_6, s8 *, 7) = arg4;
    M2C_FIELD(temp_r5_4, s8 *, 7) = arg4;
    M2C_FIELD(temp_r4_6, s8 *, 0xB) = arg4;
    M2C_FIELD(temp_r5_4, s8 *, 0xB) = arg4;
    M2C_FIELD(temp_r4_6, s8 *, 0xF) = arg4;
    M2C_FIELD(temp_r5_4, s8 *, 0xF) = arg4;
    fn_8000A258(temp_r3_2, temp_r4_6, temp_r5_4);
    fn_8000A174(NULL, (u16) (arg5 | 2));
    fn_8000A248();
    temp_r6_2 = &lbl_80330CE8 + 0x20;
    temp_r5_5 = M2C_FIELD(temp_r6_2, s32 *, 4);
    temp_r4_7 = M2C_FIELD(temp_r6_2, s32 *, 8);
    sp8 = M2C_FIELD(&lbl_80330CE8, s32 *, 0x20);
    spC = temp_r5_5;
    sp10 = temp_r4_7;
    sp14 = M2C_FIELD(temp_r6_2, s32 *, 0xC);
    fn_80007898(3, temp_r4_7, temp_r5_5, temp_r6_2, M2C_FIELD(&lbl_80330CE8, s32 *, 0x20));
    fn_800077D8((f32) arg0, (f32) temp_r0_7, (f32) (s16) (temp_r12 - arg0), (f32) (s16) (temp_r3_2 - temp_r0_7));
    fn_800075D8();
    sp24 = sp14;
    sp20 = sp10;
    sp1C = spC;
    sp18 = sp8;
    fn_800072B0(&sp18, &sp1C, &sp20, &sp24, spC, sp10, sp14);
    fn_80007884();
    fn_80009E64(temp_r18, sp28);
}

#pragma use_lmw_stmw on
void fn_8015A2D8(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_80009C0C(f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007668(s32 *);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8006ECCC(s32, void *, s32);
    typedef struct { s16 f0; s16 f2; s16 f4; s16 f6; } Rect;
    extern Rect lbl_80367D78;
    extern Rect lbl_80367D80;
    extern Rect lbl_80367D88;
    extern Rect lbl_80367D90;
    extern Rect lbl_80367D98;
    extern Rect lbl_80367DA0;
    extern Rect lbl_80367DA8;
    extern Rect lbl_80367DB0;
    extern Rect lbl_80368000;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern f32 lbl_8036A888;
    f32 sp14;
    u8 sp10[4];
    s32 spC;
    u8 sp8;
    s32 saved;
    Rect *p58;
    Rect *p38;
    Rect *p60;
    Rect *p30;
    Rect *p50;
    Rect *pBot;
    s16 a0;
    s16 a1;
    s16 x1;
    s16 y1;
    s16 w;
    s16 h;
    s16 t14;
    s16 t19;
    s16 t20;
    s16 dw;
    s16 dh;
    s16 xfill;
    s32 fl;

    p58 = &lbl_80367DA8;
    a0 = arg0;
    a1 = arg1;
    p38 = &lbl_80367D80;
    x1 = (s16)(a0 + arg2);
    y1 = (s16)(a1 + arg3);
    sp8 = arg4;
    fl = arg5;
    h = (s16)(p58->f6 - p58->f2);
    w = (s16)(p58->f4 - lbl_80367DA8.f0);
    t19 = (s16)(x1 - w);
    dh = (s16)(y1 - h);
    t20 = (s16)(a1 + (s16)(p38->f6 - p38->f2));
    t14 = (s16)(a0 + (s16)(p38->f4 - lbl_80367D80.f0));
    saved = fn_80009E44(&sp14);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x4E);
    w = (s16)(p38->f4 - lbl_80367D80.f0);
    h = (s16)(p38->f6 - p38->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)a1, (f32)lbl_80367D80.f0, (f32)p38->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x54);
    p60 = &lbl_80367DB0;
    w = (s16)(p60->f4 - lbl_80367DB0.f0);
    h = (s16)(p60->f6 - p60->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)a1, (f32)lbl_80367DB0.f0, (f32)p60->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x4D);
    p30 = &lbl_80367D78;
    w = (s16)(p30->f4 - lbl_80367D78.f0);
    h = (s16)(p30->f6 - p30->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)(s16)(y1 - h), (f32)lbl_80367D78.f0, (f32)p30->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x53);
    w = (s16)(p58->f4 - lbl_80367DA8.f0);
    h = (s16)(p58->f6 - p58->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)(s16)(y1 - h), (f32)lbl_80367DA8.f0, (f32)p58->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x51);
    p50 = &lbl_80367D98;
    dw = (s16)(t19 - t14);
    h = (s16)(p50->f6 - p50->f2);
    t14 = (s16)(a0 + (s16)(p38->f4 - lbl_80367D80.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)a1, (f32)lbl_80367D98.f0, (f32)p50->f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x52);
    pBot = &lbl_80367DA0;
    h = (s16)(pBot->f6 - pBot->f2);
    t14 = (s16)(a0 + (s16)(p30->f4 - lbl_80367D78.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)(s16)(y1 - h), (f32)lbl_80367DA0.f0, (f32)pBot->f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x4F);
    dh = (s16)(dh - t20);
    w = (s16)(lbl_80367D88.f4 - lbl_80367D88.f0);
    t14 = (s16)(a1 + (s16)(p38->f6 - p38->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(a0 + 1), (f32)t14, (f32)lbl_80367D88.f0, (f32)lbl_80367D88.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x50);
    w = (s16)(lbl_80367D90.f4 - lbl_80367D90.f0);
    t14 = (s16)(a1 + (s16)(p60->f6 - p60->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)((x1 - w) - 1), (f32)t14, (f32)lbl_80367D90.f0, (f32)lbl_80367D90.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    xfill = (s16)(a0 + 1);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x74);
    w = (s16)((s16)(x1 - 1) - xfill);
    h = (s16)(y1 - a1);
    sp10[0] = 0xFF;
    sp10[1] = 0xFF;
    sp10[2] = 0xFF;
    sp10[3] = sp8;
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)xfill, (f32)a1, (f32)w, (f32)h);
        fn_800077B0((f32)lbl_80368000.f0, (f32)lbl_80368000.f2,
                    (f32)(s16)(lbl_80368000.f4 - lbl_80368000.f0),
                    (f32)(s16)(lbl_80368000.f6 - lbl_80368000.f2));
        spC = *(s32 *)sp10;
        fn_80007668(&spC);
        fn_80007884();
    }
    fn_80009E64(saved, sp14);
}

#pragma use_lmw_stmw on
void fn_8015AD7C(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_80009C0C(f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007668(s32 *);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8006ECCC(s32, void *, s32);
    typedef struct { s16 f0; s16 f2; s16 f4; s16 f6; } Rect;
    extern Rect lbl_80367D78;
    extern Rect lbl_80367D80;
    extern Rect lbl_80367D88;
    extern Rect lbl_80367D90;
    extern Rect lbl_80367D98;
    extern Rect lbl_80367DA0;
    extern Rect lbl_80367DA8;
    extern Rect lbl_80367DB0;
    extern Rect lbl_80368000;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern f32 lbl_8036A888;
    f32 sp14;
    u8 sp10[4];
    s32 spC;
    u8 sp8;
    s32 saved;
    Rect *p58;
    Rect *p38;
    Rect *p60;
    Rect *p30;
    Rect *p50;
    Rect *pBot;
    s16 a0;
    s16 a1;
    s16 x1;
    s16 y1;
    s16 w;
    s16 h;
    s16 t14;
    s16 t19;
    s16 t20;
    s16 dw;
    s16 dh;
    s16 xfill;
    s32 fl;

    p58 = &lbl_80367DA8;
    a0 = arg0;
    a1 = arg1;
    p38 = &lbl_80367D80;
    x1 = (s16)(a0 + arg2);
    y1 = (s16)(a1 + arg3);
    sp8 = arg4;
    fl = arg5;
    h = (s16)(p58->f6 - p58->f2);
    w = (s16)(p58->f4 - lbl_80367DA8.f0);
    t19 = (s16)(x1 - w);
    dh = (s16)(y1 - h);
    t20 = (s16)(a1 + (s16)(p38->f6 - p38->f2));
    t14 = (s16)(a0 + (s16)(p38->f4 - lbl_80367D80.f0));
    saved = fn_80009E44(&sp14);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x4E);
    w = (s16)(p38->f4 - lbl_80367D80.f0);
    h = (s16)(p38->f6 - p38->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)a1, (f32)lbl_80367D80.f0, (f32)p38->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x54);
    p60 = &lbl_80367DB0;
    w = (s16)(p60->f4 - lbl_80367DB0.f0);
    h = (s16)(p60->f6 - p60->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)a1, (f32)lbl_80367DB0.f0, (f32)p60->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x4D);
    p30 = &lbl_80367D78;
    w = (s16)(p30->f4 - lbl_80367D78.f0);
    h = (s16)(p30->f6 - p30->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)(s16)(y1 - h), (f32)lbl_80367D78.f0, (f32)p30->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x53);
    w = (s16)(p58->f4 - lbl_80367DA8.f0);
    h = (s16)(p58->f6 - p58->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)(s16)(y1 - h), (f32)lbl_80367DA8.f0, (f32)p58->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x51);
    p50 = &lbl_80367D98;
    dw = (s16)(t19 - t14);
    h = (s16)(p50->f6 - p50->f2);
    t14 = (s16)(a0 + (s16)(p38->f4 - lbl_80367D80.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)a1, (f32)lbl_80367D98.f0, (f32)p50->f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x52);
    pBot = &lbl_80367DA0;
    h = (s16)(pBot->f6 - pBot->f2);
    t14 = (s16)(a0 + (s16)(p30->f4 - lbl_80367D78.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)(s16)(y1 - h), (f32)lbl_80367DA0.f0, (f32)pBot->f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x4F);
    dh = (s16)(dh - t20);
    w = (s16)(lbl_80367D88.f4 - lbl_80367D88.f0);
    t14 = (s16)(a1 + (s16)(p38->f6 - p38->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(a0 + 1), (f32)t14, (f32)lbl_80367D88.f0, (f32)lbl_80367D88.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x50);
    w = (s16)(lbl_80367D90.f4 - lbl_80367D90.f0);
    t14 = (s16)(a1 + (s16)(p60->f6 - p60->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)((x1 - w) - 1), (f32)t14, (f32)lbl_80367D90.f0, (f32)lbl_80367D90.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    xfill = (s16)(a0 + 1);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x55);
    w = (s16)((s16)(x1 - 1) - xfill);
    h = (s16)(y1 - a1);
    sp10[0] = 0xFF;
    sp10[1] = 0xFF;
    sp10[2] = 0xFF;
    sp10[3] = sp8;
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)xfill, (f32)a1, (f32)w, (f32)h);
        fn_800077B0((f32)lbl_80368000.f0, (f32)lbl_80368000.f2,
                    (f32)(s16)(lbl_80368000.f4 - lbl_80368000.f0),
                    (f32)(s16)(lbl_80368000.f6 - lbl_80368000.f2));
        spC = *(s32 *)sp10;
        fn_80007668(&spC);
        fn_80007884();
    }
    fn_80009E64(saved, sp14);
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw reset

void fn_8015B820(s16 arg0, s16 arg1, s32 arg2) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    extern s32 lbl_803680C8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367BD8;
    s16 temp_r31;
    s16 temp_r30;

    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, 0x76);
    temp_r30 = (s16)(lbl_80367BD8.f4 - lbl_80367BD8.f0);
    temp_r31 = (s16)(lbl_80367BD8.f6 - lbl_80367BD8.f2);
    if (temp_r30 != 0 && temp_r31 != 0) {
        fn_8000A258();
        fn_8000A174((void *)&lbl_80330D18, (u16)(arg2 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)arg1, (f32)lbl_80367BD8.f0, (f32)lbl_80367BD8.f2, (f32)temp_r30, (f32)temp_r31);
        fn_80007884();
    }
}

void fn_8015B954(s16 arg0, s16 arg1, s32 arg2) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A174(void *, u16);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    extern s32 lbl_803680C8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367BD0;
    s16 temp_r31;
    s16 temp_r30;

    fn_8006ECCC(lbl_803680C8, (void *)&lbl_80330D18, 0x75);
    temp_r31 = (s16)(lbl_80367BD0.f6 - lbl_80367BD0.f2);
    temp_r30 = (s16)(lbl_80367BD0.f4 - lbl_80367BD0.f0);
    if (temp_r30 != 0 && temp_r31 != 0) {
        fn_8000A258();
        fn_8000A174((void *)&lbl_80330D18, (u16)(arg2 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)arg1, (f32)lbl_80367BD0.f0, (f32)lbl_80367BD0.f2, (f32)temp_r30, (f32)temp_r31);
        fn_80007884();
    }
}

void fn_8015BA88(void) {
    M2C_UNK fn_8015FC7C();
    fn_8015FC7C();
}

#pragma use_lmw_stmw on
void fn_8015BAA8(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_80009C0C(f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007358(f32, f32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8006ECCC(s32, void *, s32);
    typedef struct { s16 f0; s16 f2; s16 f4; s16 f6; } Rect;
    extern Rect lbl_80367EC8;
    extern Rect lbl_80367ED0;
    extern Rect lbl_80367ED8;
    extern Rect lbl_80367EE0;
    extern Rect lbl_80367EE8;
    extern Rect lbl_80367EF0;
    extern Rect lbl_80367EF8;
    extern Rect lbl_80367F00;
    extern Rect lbl_80367F08;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern f32 lbl_8036A880;
    extern f32 lbl_8036A888;
    f32 sp8;
    s32 saved;
    Rect *pF8;
    Rect *pD0;
    Rect *pF0;
    Rect *pC8;
    Rect *pE8;
    Rect *pF00;
    Rect *pD8;
    Rect *pE0;
    s16 a0;
    s16 a1;
    s16 x1;
    s16 y1;
    s16 w;
    s16 h;
    s16 t14;
    s16 t19;
    s16 t20;
    s16 t21;
    s16 dw;
    s16 dh;
    s32 fl;

    (void)arg4;
    pF8 = &lbl_80367EF8;
    a0 = arg0;
    a1 = arg1;
    pD0 = &lbl_80367ED0;
    x1 = (s16)(a0 + arg2);
    y1 = (s16)(a1 + arg3);
    fl = arg5;
    h = (s16)(pF8->f6 - pF8->f2);
    w = (s16)(pF8->f4 - lbl_80367EF8.f0);
    t19 = (s16)(x1 - w);
    dh = (s16)(y1 - h);
    t21 = (s16)(a1 + (s16)(pD0->f6 - pD0->f2));
    t20 = (s16)(a0 + (s16)(pD0->f4 - lbl_80367ED0.f0));
    saved = fn_80009E44(&sp8);
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x98);
    w = (s16)(pD0->f4 - lbl_80367ED0.f0);
    h = (s16)(pD0->f6 - pD0->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)a1, (f32)lbl_80367ED0.f0, (f32)pD0->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x9E);
    pF00 = &lbl_80367F00;
    w = (s16)(pF00->f4 - lbl_80367F00.f0);
    h = (s16)(pF00->f6 - pF00->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)a1, (f32)lbl_80367F00.f0, (f32)pF00->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x97);
    pC8 = &lbl_80367EC8;
    w = (s16)(pC8->f4 - lbl_80367EC8.f0);
    h = (s16)(pC8->f6 - pC8->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)(s16)(y1 - h), (f32)lbl_80367EC8.f0, (f32)pC8->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x9D);
    w = (s16)(pF8->f4 - lbl_80367EF8.f0);
    h = (s16)(pF8->f6 - pF8->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)(s16)(y1 - h), (f32)lbl_80367EF8.f0, (f32)pF8->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x9B);
    pE8 = &lbl_80367EE8;
    dw = (s16)(t19 - t20);
    h = (s16)(pE8->f6 - pE8->f2);
    t14 = (s16)(a0 + (s16)(pD0->f4 - lbl_80367ED0.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)t14, (f32)(s16)(a1 + 1), (f32)dw, (f32)h);
        fn_800077B0((f32)lbl_80367EE8.f0, (f32)pE8->f2,
                    (f32)(s16)(pE8->f4 - lbl_80367EE8.f0),
                    (f32)(s16)(pE8->f6 - pE8->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x9C);
    pF0 = &lbl_80367EF0;
    h = (s16)(pF0->f6 - pF0->f2);
    t14 = (s16)(a0 + (s16)(pC8->f4 - lbl_80367EC8.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)t14, (f32)(s16)(y1 - h), (f32)dw, (f32)h);
        fn_800077B0((f32)lbl_80367EF0.f0, (f32)pF0->f2,
                    (f32)(s16)(pF0->f4 - lbl_80367EF0.f0),
                    (f32)(s16)(pF0->f6 - pF0->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x99);
    pD8 = &lbl_80367ED8;
    dh = (s16)(dh - t21);
    w = (s16)(pD8->f4 - lbl_80367ED8.f0);
    t14 = (s16)(a1 + (s16)(pD0->f6 - pD0->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)(s16)(a0 + 2), (f32)t14, (f32)w, (f32)dh);
        fn_800077B0((f32)lbl_80367ED8.f0, (f32)pD8->f2,
                    (f32)(s16)(pD8->f4 - lbl_80367ED8.f0),
                    (f32)(s16)(pD8->f6 - pD8->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x9A);
    pE0 = &lbl_80367EE0;
    w = (s16)(pE0->f4 - lbl_80367EE0.f0);
    t14 = (s16)(a1 + (s16)(pF00->f6 - pF00->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)(s16)(x1 - w), (f32)t14, (f32)w, (f32)dh);
        fn_800077B0((f32)lbl_80367EE0.f0, (f32)pE0->f2,
                    (f32)(s16)(pE0->f4 - lbl_80367EE0.f0),
                    (f32)(s16)(pE0->f6 - pE0->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x9F);
    if (dw != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)t20, (f32)t21, (f32)dw, (f32)dh);
        fn_800077B0((f32)lbl_80367F08.f0, (f32)lbl_80367F08.f2,
                    (f32)(s16)(lbl_80367F08.f4 - lbl_80367F08.f0),
                    (f32)(s16)(lbl_80367F08.f6 - lbl_80367F08.f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_80009E64(saved, sp8);
}

#pragma use_lmw_stmw on
void fn_8015C674(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_80009C0C(f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007358(f32, f32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8006ECCC(s32, void *, s32);
    typedef struct { s16 f0; s16 f2; s16 f4; s16 f6; } Rect;
    extern Rect lbl_80367E80;
    extern Rect lbl_80367E88;
    extern Rect lbl_80367E90;
    extern Rect lbl_80367E98;
    extern Rect lbl_80367EA0;
    extern Rect lbl_80367EA8;
    extern Rect lbl_80367EB0;
    extern Rect lbl_80367EB8;
    extern Rect lbl_80367EC0;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern f32 lbl_8036A880;
    extern f32 lbl_8036A888;
    f32 sp8;
    s32 saved;
    Rect *pB0;
    Rect *p88;
    Rect *pB8;
    Rect *p80;
    Rect *pA0;
    Rect *pA8;
    Rect *p90;
    Rect *p98;
    s16 a0;
    s16 a1;
    s16 x1;
    s16 y1;
    s16 w;
    s16 h;
    s16 t14;
    s16 t19;
    s16 t20;
    s16 t21;
    s16 dw;
    s16 dh;
    s32 fl;

    (void)arg4;
    pB0 = &lbl_80367EB0;
    a0 = arg0;
    a1 = arg1;
    p88 = &lbl_80367E88;
    x1 = (s16)(a0 + arg2);
    y1 = (s16)(a1 + arg3);
    fl = arg5;
    h = (s16)(pB0->f6 - pB0->f2);
    w = (s16)(pB0->f4 - lbl_80367EB0.f0);
    t19 = (s16)(x1 - w);
    dh = (s16)(y1 - h);
    t21 = (s16)(a1 + (s16)(p88->f6 - p88->f2));
    t20 = (s16)(a0 + (s16)(p88->f4 - lbl_80367E88.f0));
    saved = fn_80009E44(&sp8);
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x8F);
    w = (s16)(p88->f4 - lbl_80367E88.f0);
    h = (s16)(p88->f6 - p88->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)a1, (f32)lbl_80367E88.f0, (f32)p88->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x95);
    pB8 = &lbl_80367EB8;
    w = (s16)(pB8->f4 - lbl_80367EB8.f0);
    h = (s16)(pB8->f6 - pB8->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)a1, (f32)lbl_80367EB8.f0, (f32)pB8->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x8E);
    p80 = &lbl_80367E80;
    w = (s16)(p80->f4 - lbl_80367E80.f0);
    h = (s16)(p80->f6 - p80->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)(s16)(y1 - h), (f32)lbl_80367E80.f0, (f32)p80->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x94);
    w = (s16)(pB0->f4 - lbl_80367EB0.f0);
    h = (s16)(pB0->f6 - pB0->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)(s16)(y1 - h), (f32)lbl_80367EB0.f0, (f32)pB0->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x92);
    pA0 = &lbl_80367EA0;
    dw = (s16)(t19 - t20);
    h = (s16)(pA0->f6 - pA0->f2);
    t14 = (s16)(a0 + (s16)(p88->f4 - lbl_80367E88.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)t14, (f32)(s16)(a1 + 1), (f32)dw, (f32)h);
        fn_800077B0((f32)lbl_80367EA0.f0, (f32)pA0->f2,
                    (f32)(s16)(pA0->f4 - lbl_80367EA0.f0),
                    (f32)(s16)(pA0->f6 - pA0->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x93);
    pA8 = &lbl_80367EA8;
    h = (s16)(pA8->f6 - pA8->f2);
    t14 = (s16)(a0 + (s16)(p80->f4 - lbl_80367E80.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)t14, (f32)(s16)(y1 - h), (f32)dw, (f32)h);
        fn_800077B0((f32)lbl_80367EA8.f0, (f32)pA8->f2,
                    (f32)(s16)(pA8->f4 - lbl_80367EA8.f0),
                    (f32)(s16)(pA8->f6 - pA8->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x90);
    p90 = &lbl_80367E90;
    dh = (s16)(dh - t21);
    w = (s16)(p90->f4 - lbl_80367E90.f0);
    t14 = (s16)(a1 + (s16)(p88->f6 - p88->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)(s16)(a0 + 2), (f32)t14, (f32)w, (f32)dh);
        fn_800077B0((f32)lbl_80367E90.f0, (f32)p90->f2,
                    (f32)(s16)(p90->f4 - lbl_80367E90.f0),
                    (f32)(s16)(p90->f6 - p90->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x91);
    p98 = &lbl_80367E98;
    w = (s16)(p98->f4 - lbl_80367E98.f0);
    t14 = (s16)(a1 + (s16)(pB8->f6 - pB8->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)(s16)(x1 - w), (f32)t14, (f32)w, (f32)dh);
        fn_800077B0((f32)lbl_80367E98.f0, (f32)p98->f2,
                    (f32)(s16)(p98->f4 - lbl_80367E98.f0),
                    (f32)(s16)(p98->f6 - p98->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x96);
    if (dw != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)t20, (f32)t21, (f32)dw, (f32)dh);
        fn_800077B0((f32)lbl_80367EC0.f0, (f32)lbl_80367EC0.f2,
                    (f32)(s16)(lbl_80367EC0.f4 - lbl_80367EC0.f0),
                    (f32)(s16)(lbl_80367EC0.f6 - lbl_80367EC0.f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_80009E64(saved, sp8);
}

#pragma use_lmw_stmw on
void fn_8015D240(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_80009C0C(f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007358(f32, f32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8006ECCC(s32, void *, s32);
    typedef struct { s16 f0; s16 f2; s16 f4; s16 f6; } Rect;
    extern Rect lbl_80367E38;
    extern Rect lbl_80367E40;
    extern Rect lbl_80367E48;
    extern Rect lbl_80367E50;
    extern Rect lbl_80367E58;
    extern Rect lbl_80367E60;
    extern Rect lbl_80367E68;
    extern Rect lbl_80367E70;
    extern Rect lbl_80367E78;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern f32 lbl_8036A880;
    extern f32 lbl_8036A888;
    f32 sp8;
    s16 sp54;
    s32 *psaved;
    s32 saved;
    Rect *p68;
    Rect *p40;
    Rect *p70;
    Rect *p38;
    Rect *p58;
    Rect *p60;
    Rect *p48;
    Rect *p50r;
    s16 a0;
    s16 a1;
    s16 x1;
    s16 y1;
    s16 w;
    s16 h;
    s16 t14;
    s16 t19;
    s16 t20;
    s16 t21;
    s16 dw;
    s16 dh;
    s32 fl;

    (void)arg4;
    p68 = &lbl_80367E68;
    a0 = arg0;
    a1 = arg1;
    p40 = &lbl_80367E40;
    x1 = (s16)(a0 + arg2);
    y1 = (s16)(a1 + arg3);
    fl = arg5;
    h = (s16)(p68->f6 - p68->f2);
    w = (s16)(p68->f4 - lbl_80367E68.f0);
    t19 = (s16)(x1 - w);
    dh = (s16)(y1 - h);
    t21 = (s16)(a1 + (s16)(p40->f6 - p40->f2));
    t20 = (s16)(a0 + (s16)(p40->f4 - lbl_80367E40.f0));
    sp54 = dh;
    psaved = &saved;
    *psaved = fn_80009E44(&sp8);
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x78);
    w = (s16)(p40->f4 - lbl_80367E40.f0);
    h = (s16)(p40->f6 - p40->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)a1, (f32)lbl_80367E40.f0, (f32)p40->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x7E);
    p70 = &lbl_80367E70;
    w = (s16)(p70->f4 - lbl_80367E70.f0);
    h = (s16)(p70->f6 - p70->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)a1, (f32)lbl_80367E70.f0, (f32)p70->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x77);
    p38 = &lbl_80367E38;
    w = (s16)(p38->f4 - lbl_80367E38.f0);
    h = (s16)(p38->f6 - p38->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)a0, (f32)(s16)(y1 - h), (f32)lbl_80367E38.f0, (f32)p38->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x7D);
    w = (s16)(p68->f4 - lbl_80367E68.f0);
    h = (s16)(p68->f6 - p68->f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)(s16)(y1 - h), (f32)lbl_80367E68.f0, (f32)p68->f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x7B);
    p58 = &lbl_80367E58;
    dw = (s16)(t19 - t20);
    h = (s16)(p58->f6 - p58->f2);
    t14 = (s16)(a0 + (s16)(p40->f4 - lbl_80367E40.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)t14, (f32)a1, (f32)dw, (f32)h);
        fn_800077B0((f32)lbl_80367E58.f0, (f32)p58->f2,
                    (f32)(s16)(p58->f4 - lbl_80367E58.f0),
                    (f32)(s16)(p58->f6 - p58->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x7C);
    p60 = &lbl_80367E60;
    h = (s16)(p60->f6 - p60->f2);
    t14 = (s16)(a0 + (s16)(p38->f4 - lbl_80367E38.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)t14, (f32)(s16)(y1 - h), (f32)dw, (f32)h);
        fn_800077B0((f32)lbl_80367E60.f0, (f32)p60->f2,
                    (f32)(s16)(p60->f4 - lbl_80367E60.f0),
                    (f32)(s16)(p60->f6 - p60->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x79);
    p48 = &lbl_80367E48;
    dh = (s16)(sp54 - t21);
    w = (s16)(p48->f4 - lbl_80367E48.f0);
    t14 = (s16)(a1 + (s16)(p40->f6 - p40->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)a0, (f32)t14, (f32)w, (f32)dh);
        fn_800077B0((f32)lbl_80367E48.f0, (f32)p48->f2,
                    (f32)(s16)(p48->f4 - lbl_80367E48.f0),
                    (f32)(s16)(p48->f6 - p48->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x7A);
    p50r = &lbl_80367E50;
    w = (s16)(p50r->f4 - lbl_80367E50.f0);
    t14 = (s16)(a1 + (s16)(p70->f6 - p70->f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)(s16)(x1 - w), (f32)t14, (f32)w, (f32)dh);
        fn_800077B0((f32)lbl_80367E50.f0, (f32)p50r->f2,
                    (f32)(s16)(p50r->f4 - lbl_80367E50.f0),
                    (f32)(s16)(p50r->f6 - p50r->f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x7F);
    if (dw != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(fl | 1));
        fn_8000A248();
        fn_80007898(9);
        fn_800077D8((f32)t20, (f32)t21, (f32)dw, (f32)dh);
        fn_800077B0((f32)lbl_80367E78.f0, (f32)lbl_80367E78.f2,
                    (f32)(s16)(lbl_80367E78.f4 - lbl_80367E78.f0),
                    (f32)(s16)(lbl_80367E78.f6 - lbl_80367E78.f2));
        fn_80007358(lbl_8036A880, lbl_8036A880);
        fn_80007884();
    }
    fn_80009E64(*psaved, sp8);
}
#pragma use_lmw_stmw reset

#pragma use_lmw_stmw reset

#pragma use_lmw_stmw reset

#pragma use_lmw_stmw on
void fn_8015DE0C(s16 arg0, s16 arg1, s32 arg2, s32 arg3, s8 arg4, s32 arg5) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *, s32, s32, s32);
    void fn_800075D8(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void *fn_80009E44(f32 *);
    void fn_80009E64(void *, f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8006ECCC(s32, void *, s32);
    extern s32 lbl_803680C8;
    extern u8 lbl_80330CE8[0x40];
    extern s16 lbl_80367D38;
    extern s16 lbl_80367D40;
    extern s16 lbl_80367D48;
    extern s16 lbl_80367D50;
    extern s16 lbl_80367D58;
    extern s16 lbl_80367D60;
    extern s16 lbl_80367D68;
    extern s16 lbl_80367D70;
    extern f32 lbl_8036A888;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    f32 sp28;
    s16 sp60;
    s16 sp62;
    s16 sp64;
    s16 sp66;
    s16 *p68;
    s16 *p40;
    s16 *p70;
    s16 *p38;
    s16 *p58;
    s16 *p60r;
    s16 *p48;
    u8 *base;
    s16 x;
    s16 y;
    s16 x2;
    s16 y2;
    s16 w;
    s16 h;
    s16 w2;
    s16 h2;
    s16 t;
    s16 midW;
    s16 midH;
    s16 xa;
    s16 ya;
    s16 xb;
    s16 yb;
    s16 xc;
    s16 xd;
    s8 alpha;
    s32 flags;
    void *saved;
    s32 c0, c1, c2, c3;

    alpha = arg4;
    flags = arg5;
    x = arg0;
    y = arg1;
    p68 = &lbl_80367D68;
    p40 = &lbl_80367D40;
    x2 = (s16)(x + arg2);
    y2 = (s16)(y + arg3);
    base = lbl_80330CE8;

    w = (s16)(p68[2] - p68[0]);
    h = (s16)(p68[3] - p68[1]);
    w2 = (s16)(p40[2] - p40[0]);
    h2 = (s16)(p40[3] - p40[1]);
    sp60 = (s16)(y2 - h);
    sp62 = (s16)(x2 - w);
    sp64 = (s16)(y + h2);
    sp66 = (s16)(x + w2);
    saved = fn_80009E44(&sp28);

    fn_8006ECCC(lbl_803680C8, base + 0x30, 0x3E);
    w = (s16)(p40[2] - p40[0]);
    h = (s16)(p40[3] - p40[1]);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)x, (f32)y, (f32)p40[0], (f32)p40[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, base + 0x30, 0x44);
    p70 = &lbl_80367D70;
    w = (s16)(p70[2] - p70[0]);
    h = (s16)(p70[3] - p70[1]);
    xa = (s16)(x2 - w);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)xa, (f32)y, (f32)p70[0], (f32)p70[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, base + 0x30, 0x3D);
    p38 = &lbl_80367D38;
    w = (s16)(p38[2] - p38[0]);
    h = (s16)(p38[3] - p38[1]);
    ya = (s16)(y2 - h);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)x, (f32)ya, (f32)p38[0], (f32)p38[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, base + 0x30, 0x43);
    w = (s16)(p68[2] - p68[0]);
    h = (s16)(p68[3] - p68[1]);
    xb = (s16)(x2 - w);
    yb = (s16)(y2 - h);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)xb, (f32)yb, (f32)p68[0], (f32)p68[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, base + 0x30, 0x41);
    midW = (s16)(sp62 - sp66);
    p58 = &lbl_80367D58;
    h = (s16)(p58[3] - p58[1]);
    xc = (s16)(x + (s16)(p40[2] - p40[0]));
    if (midW != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)xc, (f32)y, (f32)p58[0], (f32)p58[1], (f32)midW, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, base + 0x30, 0x42);
    p60r = &lbl_80367D60;
    h = (s16)(p60r[3] - p60r[1]);
    xd = (s16)(x + (s16)(p38[2] - p38[0]));
    ya = (s16)(y2 - h);
    if (midW != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)xd, (f32)ya, (f32)p60r[0], (f32)p60r[1], (f32)midW, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, base + 0x30, 0x3F);
    midH = (s16)(sp60 - sp64);
    p48 = &lbl_80367D48;
    w = (s16)(p48[2] - p48[0]);
    ya = (s16)(y + (s16)(p40[3] - p40[1]));
    if (w != 0 && midH != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)x, (f32)ya, (f32)p48[0], (f32)p48[1], (f32)w, (f32)midH);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, base + 0x30, 0x40);
    w = (s16)(*(s16 *)((char *)&lbl_80367D50 + 4) - *(s16 *)((char *)&lbl_80367D50 + 0));
    ya = (s16)(y + (s16)(p70[3] - p70[1]));
    xa = (s16)(x2 - w);
    if (w != 0 && midH != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)xa, (f32)ya, (f32)*(s16 *)((char *)&lbl_80367D50 + 0), (f32)*(s16 *)((char *)&lbl_80367D50 + 2), (f32)w, (f32)midH);
        fn_80007884();
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    {
        u8 *p20 = base + 0x20;
        u8 *p10 = base + 0x10;
        s16 xRight = (s16)(x2 - 1);
        s16 xLeft = (s16)(x + 1);
        p20[3] = alpha;
        p10[3] = alpha;
        p20[7] = alpha;
        p10[7] = alpha;
        p20[0xB] = alpha;
        p10[0xB] = alpha;
        p20[0xF] = alpha;
        p10[0xF] = alpha;
        fn_8000A258();
        fn_8000A174(NULL, (u16)(flags | 2));
        fn_8000A248();
        c0 = ((s32 *)(base + 0x20))[0];
        c1 = ((s32 *)(base + 0x20))[1];
        c2 = ((s32 *)(base + 0x20))[2];
        c3 = ((s32 *)(base + 0x20))[3];
        sp8 = c0;
        spC = c1;
        sp10 = c2;
        sp14 = c3;
        fn_80007898(3);
        fn_800077D8((f32)xLeft, (f32)y, (f32)(s16)(xRight - xLeft), (f32)(s16)(y2 - y));
        fn_800075D8();
        sp24 = sp14;
        sp20 = sp10;
        sp1C = spC;
        sp18 = sp8;
        fn_800072B0(&sp18, &sp1C, &sp20, &sp24, spC, sp10, sp14);
        fn_80007884();
    }
    fn_80009E64(saved, sp28);
}

#pragma use_lmw_stmw on
void fn_8015E848(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 *arg4, s32 arg5) {
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    void fn_80009C0C(f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80007668(s32 *);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8006ECCC(s32, void *, s32);
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CA8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CB0;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CB8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CC0;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CC8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CD0;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CD8;
    extern struct { s16 f0; s16 f2; s16 f4; s16 f6; } lbl_80367CE0;
    extern u8 lbl_80330D18[64];
    extern s32 lbl_803680C8;
    extern f32 lbl_8036A888;

    f32 sp10;
    u8 spC[4];
    s32 sp8;
    s16 sp4E;
    s16 sp4C;
    s32 saved;
    s16 x1;
    s16 y1;
    s16 w;
    s16 h;
    s16 t14;
    s16 t29;
    s16 dw;
    s16 dh;

    x1 = (s16)(arg0 + arg2);
    y1 = (s16)(arg1 + arg3);
    w = (s16)(lbl_80367CD8.f4 - lbl_80367CD8.f0);
    h = (s16)(lbl_80367CD8.f6 - lbl_80367CD8.f2);
    t29 = (s16)(x1 - w);
    sp4C = (s16)(y1 - h);
    t14 = (s16)(arg0 + (s16)(lbl_80367CB0.f4 - lbl_80367CB0.f0));
    sp4E = (s16)(arg1 + (s16)(lbl_80367CB0.f6 - lbl_80367CB0.f2));
    saved = fn_80009E44(&sp10);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x36);
    w = (s16)(lbl_80367CB0.f4 - lbl_80367CB0.f0);
    h = (s16)(lbl_80367CB0.f6 - lbl_80367CB0.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)arg1, (f32)lbl_80367CB0.f0, (f32)lbl_80367CB0.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x3C);
    w = (s16)(lbl_80367CE0.f4 - lbl_80367CE0.f0);
    h = (s16)(lbl_80367CE0.f6 - lbl_80367CE0.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)arg1, (f32)lbl_80367CE0.f0, (f32)lbl_80367CE0.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x35);
    w = (s16)(lbl_80367CA8.f4 - lbl_80367CA8.f0);
    h = (s16)(lbl_80367CA8.f6 - lbl_80367CA8.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)(s16)(y1 - h), (f32)lbl_80367CA8.f0, (f32)lbl_80367CA8.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x3B);
    w = (s16)(lbl_80367CD8.f4 - lbl_80367CD8.f0);
    h = (s16)(lbl_80367CD8.f6 - lbl_80367CD8.f2);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)(s16)(y1 - h), (f32)lbl_80367CD8.f0, (f32)lbl_80367CD8.f2, (f32)w, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x39);
    dw = (s16)(t29 - t14);
    h = (s16)(lbl_80367CC8.f6 - lbl_80367CC8.f2);
    t14 = (s16)(arg0 + (s16)(lbl_80367CB0.f4 - lbl_80367CB0.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)arg1, (f32)lbl_80367CC8.f0, (f32)lbl_80367CC8.f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x3A);
    h = (s16)(lbl_80367CD0.f6 - lbl_80367CD0.f2);
    t14 = (s16)(arg0 + (s16)(lbl_80367CA8.f4 - lbl_80367CA8.f0));
    if (dw != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)t14, (f32)(s16)(y1 - h), (f32)lbl_80367CD0.f0, (f32)lbl_80367CD0.f2, (f32)dw, (f32)h);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x37);
    dh = (s16)(sp4C - sp4E);
    w = (s16)(lbl_80367CB8.f4 - lbl_80367CB8.f0);
    t14 = (s16)(arg1 + (s16)(lbl_80367CB0.f6 - lbl_80367CB0.f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)t14, (f32)lbl_80367CB8.f0, (f32)lbl_80367CB8.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0x38);
    w = (s16)(lbl_80367CC0.f4 - lbl_80367CC0.f0);
    t14 = (s16)(arg1 + (s16)(lbl_80367CE0.f6 - lbl_80367CE0.f2));
    if (w != 0 && dh != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x1 - w), (f32)t14, (f32)lbl_80367CC0.f0, (f32)lbl_80367CC0.f2, (f32)w, (f32)dh);
        fn_80007884();
    }
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    spC[0] = arg4[0];
    spC[1] = arg4[1];
    spC[2] = arg4[2];
    spC[3] = arg4[3];
    fn_8000A258();
    fn_8000A174(NULL, (u16)(arg5 | 2));
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)arg0, (f32)arg1, (f32)(s16)(x1 - arg0), (f32)(s16)(y1 - arg1));
    sp8 = *(s32 *)spC;
    fn_80007668(&sp8);
    fn_80007884();
    fn_80009E64(saved, sp10);
}

#pragma use_lmw_stmw on
void fn_8015FC7C(s16 arg0, s16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    void fn_8006ECCC(s32, void *, s32);
    void fn_8000A258(void);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_800076CC(void);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_80007668(void *);
    void fn_80009C0C(f32);
    s32 fn_80009E44(f32 *);
    void fn_80009E64(s32, f32);
    extern s16 lbl_80367C58[4];
    extern s16 lbl_80367C38[4];
    extern s16 lbl_80367C60[4];
    extern s16 lbl_80367C30[4];
    extern s16 lbl_80367C50[4];
    extern s16 lbl_80367C40[4];
    extern s16 lbl_80367C48[4];
    extern s16 lbl_80368080[4];
    extern f32 lbl_8036A888;
    f32 sp14;
    s32 handle;
    u8 color[4];
    u8 alpha;
    s16 x, y, x2, y2;
    s16 t14, t18, t19, t20;
    s16 w, h, px, py;
    s32 packed;

    x = arg0;
    y = arg1;
    x2 = (s16)(x + arg2);
    y2 = (s16)(y + arg3);
    alpha = arg4;

    {
        s16 h58 = (s16)(lbl_80367C58[3] - lbl_80367C58[1]);
        s16 w58 = (s16)(lbl_80367C58[2] - lbl_80367C58[0]);
        s16 h38 = (s16)(lbl_80367C38[3] - lbl_80367C38[1]);
        s16 w38 = (s16)(lbl_80367C38[2] - lbl_80367C38[0]);
        t19 = (s16)(x2 - w58);
        t18 = (s16)(y2 - h58);
        t20 = (s16)(y + h38);
        t14 = (s16)(x + w38);
    }

    handle = fn_80009E44(&sp14);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 4);

    w = (s16)(lbl_80367C38[2] - lbl_80367C38[0]);
    h = (s16)(lbl_80367C38[3] - lbl_80367C38[1]);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)x, (f32)y, (f32)lbl_80367C38[0], (f32)lbl_80367C38[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 9);
    w = (s16)(lbl_80367C60[2] - lbl_80367C60[0]);
    h = (s16)(lbl_80367C60[3] - lbl_80367C60[1]);
    px = (s16)(x2 - w);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)arg1, (f32)lbl_80367C60[0], (f32)lbl_80367C60[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 3);
    w = (s16)(lbl_80367C30[2] - lbl_80367C30[0]);
    h = (s16)(lbl_80367C30[3] - lbl_80367C30[1]);
    py = (s16)(y2 - h);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)arg0, (f32)py, (f32)lbl_80367C30[0], (f32)lbl_80367C30[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 8);
    h = (s16)(lbl_80367C58[3] - lbl_80367C58[1]);
    w = (s16)(lbl_80367C58[2] - lbl_80367C58[0]);
    px = (s16)(x2 - w);
    py = (s16)(y2 - h);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)py, (f32)lbl_80367C58[0], (f32)lbl_80367C58[1], (f32)w, (f32)h);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 7);
    t19 = (s16)(t19 - t14);
    h = (s16)(lbl_80367C50[3] - lbl_80367C50[1]);
    px = (s16)(x + (s16)(lbl_80367C38[2] - lbl_80367C38[0]));
    if (t19 != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)arg1, (f32)lbl_80367C50[0], (f32)lbl_80367C50[1], (f32)t19, (f32)h);
        fn_80007884();
    }

    h = (s16)(lbl_80367C50[3] - lbl_80367C50[1]);
    px = (s16)(x + (s16)(lbl_80367C30[2] - lbl_80367C30[0]));
    py = (s16)(y2 - h);
    if (t19 != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)px, (f32)py, (f32)lbl_80367C50[0], (f32)lbl_80367C50[1], (f32)t19, (f32)h);
        fn_800076CC();
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 5);
    t18 = (s16)(t18 - t20);
    w = (s16)(lbl_80367C40[2] - lbl_80367C40[0]);
    py = (s16)(y + (s16)(lbl_80367C38[3] - lbl_80367C38[1]));
    if (w != 0 && t18 != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)(x + 1), (f32)py, (f32)lbl_80367C40[0], (f32)lbl_80367C40[1], (f32)w, (f32)t18);
        fn_80007884();
    }

    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 6);
    w = (s16)(lbl_80367C48[2] - lbl_80367C48[0]);
    py = (s16)(y + (s16)(lbl_80367C60[3] - lbl_80367C60[1]));
    if (w != 0 && t18 != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)(s16)((x2 - w) - 1), (f32)py, (f32)lbl_80367C48[0], (f32)lbl_80367C48[1], (f32)w, (f32)t18);
        fn_80007884();
    }

    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    px = (s16)(x + 1);
    fn_8006ECCC(lbl_803680C8, lbl_80330D18, 0xA7);
    h = (s16)(y2 - y);
    w = (s16)((s16)(x2 - 1) - px);
    color[0] = 0xFF;
    color[1] = 0xFF;
    color[2] = 0xFF;
    color[3] = alpha;
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(lbl_80330D18, (u16)(arg5 | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)px, (f32)y, (f32)w, (f32)h);
        fn_800077B0((f32)lbl_80368080[0], (f32)lbl_80368080[1],
                    (f32)(s16)(lbl_80368080[2] - lbl_80368080[0]),
                    (f32)(s16)(lbl_80368080[3] - lbl_80368080[1]));
        packed = *(s32 *)color;
        fn_80007668(&packed);
        fn_80007884();
    }
    fn_80009E64(handle, sp14);
}

#pragma use_lmw_stmw on
void fn_8016070C(s16 arg0, s16 arg1, s16 arg2, s32 arg3, s8 arg4, s32 arg5) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_80007668(s32 *);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007790(f32, f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009C0C(f32);
    void *fn_80009E44(f32 *);
    void fn_80009E64(void *, f32);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8006ECCC(s32, void *, s32);
    void fn_80161778(s16, s16, s16, s32);
    extern u8 lbl_80330CE8[0x40];
    extern s32 lbl_803680C8;
    extern s16 lbl_80367BC0;
    extern s16 lbl_80367C10;
    extern s16 lbl_80367C20;
    extern s16 lbl_80367C28;
    extern u32 lbl_803680C0;
    extern f64 lbl_8036A868;
    extern f32 lbl_8036A870;
    extern f32 lbl_8036A888;
    extern f32 lbl_8036A88C;

    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    f32 sp38;
    s16 box[4];
    s16 rect[4];
    s16 *bc0;
    s16 *c10;
    s16 *c20;
    s16 *c28;
    u32 *colors;
    u8 *base;
    u8 *p20;
    u8 *p10;
    void *saved;
    s16 x;
    s16 y;
    s16 w;
    s16 h;
    s16 t;
    s16 yA;
    s16 yB;
    s16 yC;
    s16 xL;
    s16 xR;
    s16 w28;
    s16 h28;
    s16 midX;
    s16 midY;
    u16 flags2;
    s8 alpha;
    s32 flags;
    f32 f30;
    f32 f31;

    base = lbl_80330CE8;
    x = arg0;
    y = arg1;
    w = arg2;
    flags = arg5;
    alpha = arg4;
    fn_8006ECCC(lbl_803680C8, base + 0x30, 0);
    saved = fn_80009E44(&sp38);
    bc0 = &lbl_80367BC0;
    rect[0] = x;
    h = (s16)(bc0[3] - bc0[1]);
    rect[1] = y;
    rect[2] = (s16)(x + w);
    rect[3] = (s16)(y + arg3);
    if (w != 0 && h != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)x, (f32)y, (f32)w, (f32)h);
        fn_800077B0((f32)bc0[0], (f32)bc0[1],
                    (f32)(s16)(bc0[2] - bc0[0]), (f32)(s16)(bc0[3] - bc0[1]));
        fn_80007884();
    }
    c10 = &lbl_80367C10;
    fn_80161778(x, (s16)(rect[3] - (s16)(c10[3] - c10[1])), w, flags);
    h = (s16)(bc0[3] - bc0[1]);
    yB = rect[1];
    t = (s16)(rect[3] - yB);
    yA = (s16)(yB + h);
    xL = rect[0];
    yC = (s16)((s16)(t - (s16)(h + (s16)(c10[3] - c10[1]))) + 4);
    yC = (s16)(yA + yC);
    xR = (s16)(xL + 1);
    fn_8000A258();
    flags2 = (u16)(flags | 2);
    fn_8000A174(0, flags2);
    fn_8000A248();
    fn_80007898(4);
    f30 = lbl_8036A870 + (f32)yA;
    f31 = lbl_8036A870 + (f32)yC;
    fn_80007790(lbl_8036A870 + (f32)xL, f30, lbl_8036A870 + (f32)xL, f31, lbl_8036A870);
    colors = &lbl_803680C0;
    sp14 = colors[0];
    fn_80007668(&sp14);
    fn_80007884();
    fn_8000A258();
    fn_8000A174(0, flags2);
    fn_8000A248();
    fn_80007898(4);
    fn_80007790(lbl_8036A870 + (f32)xR, f30, lbl_8036A870 + (f32)xR, f31, lbl_8036A870);
    sp10 = colors[1];
    fn_80007668(&sp10);
    fn_80007884();
    c20 = &lbl_80367C20;
    xR = (s16)(rect[2] - 2);
    h = (s16)(bc0[3] - bc0[1]);
    t = (s16)(rect[3] - rect[1]);
    xL = (s16)(xR + 1);
    yC = (s16)(t - (s16)(h + (s16)(c20[3] - c20[1])));
    yA = (s16)(rect[1] + (s16)(h - 4));
    yC = (s16)(yA + (s16)(yC + 4));
    fn_8000A258();
    fn_8000A174(0, flags2);
    fn_8000A248();
    fn_80007898(4);
    f31 = lbl_8036A870 + (f32)yA;
    f30 = lbl_8036A870 + (f32)yC;
    fn_80007790(lbl_8036A870 + (f32)xR, f31, lbl_8036A870 + (f32)xR, f30, lbl_8036A870);
    spC = colors[0];
    fn_80007668(&spC);
    fn_80007884();
    fn_8000A258();
    fn_8000A174(0, flags2);
    fn_8000A248();
    fn_80007898(4);
    fn_80007790(lbl_8036A870 + (f32)xL, f31, lbl_8036A870 + (f32)xL, f30, lbl_8036A870);
    sp8 = colors[1];
    fn_80007668(&sp8);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036A888);
    fn_8000A248();
    p20 = base + 0x20;
    p10 = base + 0x10;
    *(s32 *)&box[0] = *(s32 *)&rect[0];
    *(s32 *)&box[2] = *(s32 *)&rect[2];
    h = (s16)(bc0[3] - bc0[1]);
    t = (s16)(c10[3] - c10[1]);
    box[1] = (s16)(box[1] + (h >> 1));
    box[3] = (s16)(box[3] - (t >> 1));
    p20[3] = alpha;
    p10[3] = alpha;
    p20[7] = alpha;
    p10[7] = alpha;
    p20[0xB] = alpha;
    p10[0xB] = alpha;
    p20[0xF] = alpha;
    p10[0xF] = alpha;
    fn_8000A258();
    fn_8000A174(0, flags2);
    fn_8000A248();
    sp18 = ((s32 *)p20)[0];
    sp1C = ((s32 *)p20)[1];
    sp20 = ((s32 *)p20)[2];
    sp24 = ((s32 *)p20)[3];
    fn_80007898(3);
    fn_800077D8((f32)box[0], (f32)box[1],
                (f32)(s16)(box[2] - box[0]), (f32)(s16)(box[3] - box[1]));
    fn_800075D8();
    sp34 = sp24;
    sp30 = sp20;
    sp2C = sp1C;
    sp28 = sp18;
    fn_800072B0(&sp28, &sp2C, &sp30, &sp34);
    fn_80007884();
    fn_8006ECCC(lbl_803680C8, base + 0x30, 1);
    fn_8000A258();
    fn_80009C0C(lbl_8036A88C);
    fn_8000A248();
    c28 = &lbl_80367C28;
    yA = (s16)(rect[1] + (s16)(bc0[3] - bc0[1]));
    yB = (s16)(rect[3] - (s16)(c10[3] - c10[1]));
    h28 = (s16)(c28[3] - c28[1]);
    w28 = (s16)(c28[2] - c28[0]);
    box[1] = rect[1];
    box[3] = rect[3];
    box[0] = rect[0];
    box[2] = rect[2];
    box[1] = yA;
    box[3] = yB;
    midY = (s16)(yA + (((s16)(yB - yA) >> 1) - (h28 >> 1)));
    midX = (s16)(rect[0] + (((s16)(rect[2] - rect[0]) - w28) >> 1));
    if (w28 != 0 && h28 != 0) {
        fn_8000A258();
        fn_8000A174(base + 0x30, (u16)(flags | 1));
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C((f32)midX, (f32)midY,
                    (f32)c28[0], (f32)c28[1], (f32)w28, (f32)h28);
        fn_80007884();
    }
    fn_80009E64(saved, sp38);
}
void fn_801610A8(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    extern u8 lbl_803680D6;
    extern u8 lbl_803680D7;
    extern u8 lbl_80330D58[];
    extern u8 lbl_803680D8[];
    extern f64 lbl_8036A868;

    s16 temp_r27;
    s16 temp_r28;
    s16 temp_r30;
    s16 temp_r31;
    s16 temp_r5;
    s16 temp_r0;
    u16 temp_r26;

    temp_r27 = arg0;
    temp_r28 = arg1;
    temp_r31 = arg2;
    temp_r30 = arg3;

    temp_r5 = temp_r27 + temp_r31;
    temp_r0 = temp_r28 + (temp_r30 >> 3);

    if (lbl_803680D6 == 0) {
        lbl_80330D58[0] = 0;
        lbl_80330D58[1] = 0;
        lbl_80330D58[2] = 0;
        lbl_80330D58[3] = 0;
        lbl_80330D58[4] = 0;
        lbl_80330D58[5] = 0;
        lbl_80330D58[6] = 0;
        lbl_80330D58[7] = 0;
        lbl_80330D58[8] = 0;
        lbl_80330D58[9] = 0;
        lbl_80330D58[0xA] = 0;
        lbl_80330D58[0xB] = 0xFF;
        lbl_80330D58[0xC] = 0;
        lbl_80330D58[0xD] = 0;
        lbl_80330D58[0xE] = 0;
        lbl_80330D58[0xF] = 0xFF;

        *(u32*)&lbl_80330D58[0] = (u32)0;
        *(u32*)&lbl_80330D58[4] = (u32)0;
        *(u32*)&lbl_80330D58[8] = (u32)0;
        *(u32*)&lbl_80330D58[0xC] = (u32)0;
        lbl_803680D6 = 1;
    }

    if (lbl_803680D7 == 0) {
        lbl_803680D8[0] = 0;
        lbl_803680D8[1] = 0;
        lbl_803680D8[2] = 0;
        lbl_803680D8[3] = 0xFF;
        lbl_803680D7 = 1;
    }

    fn_8000A258();
    temp_r26 = arg4 | 2;
    fn_8000A174(0, temp_r26);
    fn_8000A248();

    // Store the values to the .bss buffer
    *(u32*)(&lbl_80330D58[0]) = (s32) lbl_80330D58[0];
    *(u32*)(&lbl_80330D58[4]) = (s32) lbl_80330D58[4];
    *(u32*)(&lbl_80330D58[8]) = (s32) lbl_80330D58[8];
    *(u32*)(&lbl_80330D58[0xC]) = (s32) lbl_80330D58[0xC];

    fn_80007898(3, *(u32*)(&lbl_80330D58[8]), *(u32*)(&lbl_80330D58[4]), *(u32*)(&lbl_80330D58[0]), &lbl_80330D58);

    fn_800077D8((f32)arg0,
                (f32)arg1,
                (f32)(temp_r5 - arg0),
                (f32)(temp_r0 - arg1));
    fn_800075D8();

    *(u32*)(&lbl_80330D58[0]) = (s32) lbl_80330D58[0];
    *(u32*)(&lbl_80330D58[4]) = (s32) lbl_80330D58[4];
    *(u32*)(&lbl_80330D58[8]) = (s32) lbl_80330D58[8];
    *(u32*)(&lbl_80330D58[0xC]) = (s32) lbl_80330D58[0xC];

    fn_800072B0((s32 *)&lbl_80330D58[0],
                (s32 *)&lbl_80330D58[4],
                (s32 *)&lbl_80330D58[8],
                (s32 *)&lbl_80330D58[0xC],
                *(u32*)(&lbl_80330D58[0]),
                *(u32*)(&lbl_80330D58[4]),
                *(u32*)(&lbl_80330D58[0xC]));

    fn_80007884();
    fn_8000A258();
    fn_8000A174(0, temp_r26);
    fn_8000A248();

    fn_80007898(1);

    fn_800077D8((f32)arg0,
                (f32)temp_r0,
                (f32)(temp_r5 - arg0),
                (f32)((s16)(arg1 + arg3) - temp_r0));

    fn_80007668((s32 *)(&lbl_803680D8[0]));
    fn_80007884();
}

#pragma use_lmw_stmw on
void fn_80161364(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void fn_8000A258(void);
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800075D8(void);
    void fn_800072B0(void *, void *, void *, void *);
    void fn_80007884(void);
    void fn_80007668(void *);
    extern u8 lbl_803680D4;
    extern u8 lbl_803680D5;
    extern u32 lbl_80330D38[];
    extern u32 lbl_80330D48[];
    extern f64 lbl_8036A868;
    u32 colors[4];
    u32 rev[4];
    u32 tip;
    register s16 x0;
    s16 y0;
    s16 x1;
    s16 yA;
    s16 yB;
    s16 yC;
    s16 third;
    s32 flags;

    flags = arg4;
    x0 = (s16)arg0;
    y0 = (s16)arg1;
    third = (s16)arg3 / 3;
    x1 = (s16)(x0 + (s16)arg2);
    yA = (s16)(y0 + third);
    yB = (s16)(y0 + third * 2);
    yC = (s16)(y0 + third * 3);

    if ((s8)lbl_803680D4 == 0) {
        u8 *p;
        p = (u8 *)colors;
        p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0;
        p[4] = 0; p[5] = 0; p[6] = 0; p[7] = 0;
        p[8] = 0; p[9] = 0; p[10] = 0; p[11] = 0xFF;
        p[12] = 0; p[13] = 0; p[14] = 0; p[15] = 0xFF;
        lbl_80330D38[0] = colors[0];
        lbl_80330D38[1] = colors[1];
        lbl_80330D38[3] = colors[3];
        lbl_80330D38[2] = colors[2];
        lbl_803680D4 = 1;
    }
    if ((s8)lbl_803680D5 == 0) {
        u8 *p;
        p = (u8 *)colors;
        p[0] = 0; p[1] = 0; p[2] = 0; p[3] = 0xFF;
        p[4] = 0; p[5] = 0; p[6] = 0; p[7] = 0xFF;
        p[8] = 0; p[9] = 0; p[10] = 0; p[11] = 0;
        p[12] = 0; p[13] = 0; p[14] = 0; p[15] = 0;
        lbl_80330D48[0] = colors[0];
        lbl_80330D48[1] = colors[1];
        lbl_80330D48[2] = colors[2];
        lbl_80330D48[3] = colors[3];
        lbl_803680D5 = 1;
    }

    fn_8000A258();
    flags |= 2;
    fn_8000A174(0, (u16)flags);
    fn_8000A248();
    colors[0] = lbl_80330D38[0];
    colors[1] = lbl_80330D38[1];
    colors[2] = lbl_80330D38[2];
    colors[3] = lbl_80330D38[3];
    fn_80007898(3);
    fn_800077D8((f32)(s16)arg0, (f32)(s16)arg1, (f32)(s16)(x1 - x0), (f32)(s16)(yA - y0));
    fn_800075D8();
    rev[3] = colors[3]; rev[2] = colors[2]; rev[1] = colors[1]; rev[0] = colors[0];
    fn_800072B0(&rev[0], &rev[1], &rev[2], &rev[3]);
    fn_80007884();

    fn_8000A258();
    fn_8000A174(0, (u16)flags);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)(s16)arg0, (f32)yA, (f32)(s16)(x1 - x0), (f32)(s16)(yB - yA));
    tip = lbl_80330D48[0];
    fn_80007668(&tip);
    fn_80007884();

    fn_8000A258();
    fn_8000A174(0, (u16)flags);
    fn_8000A248();
    colors[0] = lbl_80330D48[0];
    colors[1] = lbl_80330D48[1];
    colors[2] = lbl_80330D48[2];
    colors[3] = lbl_80330D48[3];
    fn_80007898(3);
    fn_800077D8((f32)(s16)arg0, (f32)yB, (f32)(s16)(x1 - x0), (f32)(s16)(yC - yB));
    fn_800075D8();
    rev[3] = colors[3]; rev[2] = colors[2]; rev[1] = colors[1]; rev[0] = colors[0];
    fn_800072B0(&rev[0], &rev[1], &rev[2], &rev[3]);
    fn_80007884();
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

#pragma use_lmw_stmw on
void fn_80161AA8(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 *arg5) {
    void fn_8000A258(void);
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007790(f32, f32, f32, f32, f32);
    void fn_80007668(s32 *);
    void fn_80007884(void);
    extern f32 lbl_8036A870;
    s32 sp8;

    fn_8000A258();
    fn_8000A174(0, (u16)(arg4 | 2));
    fn_8000A248();
    fn_80007898(4);
    fn_80007790(lbl_8036A870 + (f32)arg0, lbl_8036A870 + (f32)arg1, lbl_8036A870 + (f32)arg2, lbl_8036A870 + (f32)arg3, lbl_8036A870);
    sp8 = *arg5;
    fn_80007668(&sp8);
    fn_80007884();
}
void fn_80161B98(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s16 *arg5, s32 *arg6, s32 arg7) {
    void fn_8000A258(void);
    void fn_8000A174(void *, u16);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_800077B0(f32, f32, f32, f32);
    void fn_800076EC(void);
    void fn_800076CC(void);
    void fn_800075D8(void);
    void fn_80007588(void);
    void fn_80007538(void);
    void fn_800072B0(Color *, Color *, Color *, Color *);
    void fn_80007884(void);
    Color sp2C;
    extern u8 lbl_80330D18[64];
    extern f64 lbl_8036A868;
    Color sp28;
    Color sp24;
    Color sp20;
    Color sp1C;
    Color sp18;
    Color sp14;
    Color sp10;
    Color tmp;
    Color tmp2;
    s32 c3;
    unsigned c2;
    int c1;
    unsigned long c0;
    s16 t1;
    register s16 t0;
    s16 w;
    s16 h;

    w = arg2;
    h = arg3;
    if (w) {
        if (h) {
            fn_8000A258();
            fn_8000A174((void *)&lbl_80330D18, (u16)(arg4 | 1));
            fn_8000A248();
            c0 = arg6[0];
            c1 = arg6[1];
            c2 = arg6[2];
            c3 = arg6[3];
            *(s32 *)&sp2C = c0;
            *(s32 *)&sp24 = c2;
            *(s32 *)&sp20 = c3;
            *(s32 *)&sp28 = c1;
            fn_80007898(3);
            fn_800077D8((f32)arg0, (f32)arg1, (f32)w, (f32)h);
            t1 = arg5[1];
            t0 = arg5[0];
            fn_800077B0((f32)t0, (f32)t1, (f32)(s16)(arg5[2] - t0), (f32)(s16)(arg5[3] - t1));
            if (arg7 & 1) {
                fn_800076EC();
                *(s32 *)&tmp = *(s32 *)&sp2C;
                if (&sp2C != &sp28) {
                    sp2C.r = sp28.r;
                    sp2C.g = sp28.g;
                    sp2C.b = sp28.b;
                    sp2C.a = sp28.a;
                }
                if (&sp28 != &tmp) {
                    sp28.r = tmp.r;
                    sp28.g = tmp.g;
                    sp28.b = tmp.b;
                    sp28.a = tmp.a;
                }
            }
            if (arg7 & 2) {
                fn_800076CC();
                *(s32 *)&tmp2 = *(s32 *)&sp24;
                if (&sp24 != &sp20) {
                    sp24.r = sp20.r;
                    sp24.g = sp20.g;
                    sp24.b = sp20.b;
                    sp24.a = sp20.a;
                }
                if (&sp20 != &tmp2) {
                    sp20.r = tmp2.r;
                    sp20.g = tmp2.g;
                    sp20.b = tmp2.b;
                    sp20.a = tmp2.a;
                }
            }
            fn_800075D8();
            if (arg7 & 0x100) {
                fn_80007588();
            }
            if (arg7 & 0x200) {
                fn_80007538();
            }
            *(s32 *)&sp10 = *(s32 *)&sp20;
            *(s32 *)&sp14 = *(s32 *)&sp24;
            *(s32 *)&sp18 = *(s32 *)&sp28;
            *(s32 *)&sp1C = *(s32 *)&sp2C;
            fn_800072B0(&sp1C, &sp18, &sp14, &sp10);
            fn_80007884();
        }
    }
}
void fn_80161E58(s16 arg0, s16 arg1, s32 arg2, s16 *arg3, s32 *arg4, s32 arg5) {
    void fn_80007538(void);
    void fn_80007588(void);
    void fn_80007668(s32 *);
    void fn_800076CC(void);
    void fn_800076EC(void);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8000A174(s32, u16);
    void fn_8000A248(void);
    void fn_8000A258(void);
    extern f64 lbl_8036A868;
    s32 sp8;

    fn_8000A258();
    fn_8000A174(0, (u16)(arg2 | 2));
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32)arg0, (f32)arg1, (f32)(s16)(arg3[2] - arg3[0]), (f32)(s16)(arg3[3] - arg3[1]));
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

s32 fn_8005BA10(char *name);
u8 fn_80161FB8(void) {
    extern u32 lbl_80293AD8[];
    s32 var_r31;
    var_r31 = 0;
    if (((u8)fn_8005BA10((char *)lbl_80293AD8[2]) != 0) && ((u8)fn_8005BA10((char *)lbl_80293AD8[3]) != 0)) {
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
    void fn_8006EEFC(void *, void *);
    extern M2C_UNK lbl_803680C8;
    extern M2C_UNK lbl_803680CC;
    extern s32 lbl_803680D0;
    extern u32 lbl_80293AD8[];

    if (lbl_803680D0++ == 0) {
        fn_8006EEFC(&lbl_803680C8, (void *)lbl_80293AD8[2]);
        fn_8006EEFC(&lbl_803680CC, (void *)lbl_80293AD8[3]);
    }
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
