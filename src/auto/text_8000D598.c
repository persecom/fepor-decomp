/* Functions from 0x80006264 to 0x80011968, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    void *unk0;
    void *unk4;
    s32 unk8;
} Struct_8000B090;

extern s32 lbl_802AEE20[5]; // array of 5 pointers
extern f64 lbl_80368C28;    // global float constant
extern u16 jumptable_80283AE8[];

extern f64 lbl_80368C28;

extern u16 lbl_80367140;

extern void *(*lbl_80366DA0)(s32);
extern f32 lbl_80368B94, lbl_80368BB8, lbl_80368B98;
extern u32 lbl_802ADAFC[9];

extern void *fn_8000A738(void *, s32);
extern void fn_8000B5F0(void *);
extern void fn_8000B70C(void *);

typedef struct HashKey {
    u32 h1;
    u32 h2;
} HashKey;

extern struct UnkStruct_802AEE80 gUnk_802AEE80;

extern s32 gUnknown_0x80369C84;
extern s32 gUnknown_0x80369C88;

s32 fn_8000D598(u8 *arg0) {
    s32 var_r5;
    u8 *var_r3;

    var_r3 = arg0;
    var_r5 = 0;
loop_2:
    if ((s8)*var_r3 != 0) {
        u8 temp = *(var_r3++);
        var_r5 = (temp + (var_r5 * 0x25));
        goto loop_2;
    }
    return var_r5;
}

void fn_8000D864(s32 arg0, s32 arg1) {
    extern u16 lbl_802AED10[];
    void fn_80234450(void *, s32);
    s32 strlen(s32);

    s32 temp_r5 = arg0 * 0x44;
    u16* temp_r31 = &lbl_802AED10[temp_r5];
    *temp_r31 = strlen(arg1);
    fn_80234450(temp_r31 + 1, arg1);
}

void *fn_8000D8BC(s32 arg0, s32 arg1) {
    s32 strlen(void *);
    extern M2C_UNK lbl_802AED10;
    void *fn_80238ABC(s32, void *, s32);

    M2C_UNK *temp_r31 = &lbl_802AED10 + (arg0 * 0x44);
    fn_80238ABC(arg1, temp_r31 + 4, 0xA);
    *(s32 *)temp_r31 = strlen(temp_r31 + 4);
    return temp_r31 + 4;
}

void fn_8000E394(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, s32 arg_sp0)
{
    s32 r30_var;
    u32 temp_r3;

    temp_r3 = fn_8010494C(lbl_802AEE20[3]);
    if ((u32) lbl_802AEE20[0] == temp_r3)
        r30_var = 0;
    else {
        if ((u32) lbl_802AEE20[1] == temp_r3)
            r30_var = 1;
        else {
            u32 *temp_r4_2 = (u32 *)(&lbl_802AEE20[1] + 4);
            if ((u32) *(temp_r4_2) == temp_r3)
                r30_var = 2;
            else if ((u32) *(temp_r4_2 + 1) == temp_r3)
                r30_var = 3;
            else if ((u32) *(temp_r4_2 + 2) == temp_r3)
                r30_var = 4;
            else
                r30_var = -1;
        }
    }

    fn_8000E7FC(arg0, arg1, arg2, arg3, arg4, arg5, farg0, farg1, farg2, farg3, farg4);

    if (r30_var == -1)
        r30_var = 0;

    temp_r3 = fn_8010494C(lbl_802AEE20[r30_var]);

    // Check remaining comparisons
    if ((u32) lbl_802AEE20[0] != temp_r3) {
        // These should all be equivalent to the original's logic but simplified:
        // Original checks: lbl_802AEE20[1], *(void**)(lbl_802AEE20 + 4), and *(void**) (lbl_802AEE20 + 8)
        u32 *temp_r4_3 = (u32 *)(&lbl_802AEE20[1]);
        if (((u32) lbl_802AEE20[1] != temp_r3) && ((u32) *(temp_r4_3 + 0) != temp_r3) && ((u32) *(temp_r4_3 + 1) != temp_r3)) {
            /* No-op */
        }
    }
}

void fn_8000E50C(void* arg0) {
    s32 r31;
    s32 r30;
    s32 r29;
    s32 r28;
    struct UnkStruct_802AEE80* r3;
    
    r3 = &gUnk_802AEE80;
    r31 = *(s32*)((s32) arg0 + 0x4);
    if (r31 == 0) {
        return;
    }
    r30 = *(s32*)r31;
    r29 = *(s32*)(r31 + 4);
    r28 = r29 - 1;
    if (r28 < 0) {
        return;
    }
    
    if ((r30 & 0x80000000) != 0) {
        r30 = r30 + 1;
    } else {
        r30 = r30 - 1;
    }
    *(s32*)(r31 + 4) = r28;
    *(s32*)r31 = r30;
}

s32 fn_8000E684(void* arg0) {
    s32* data = (s32*)0x802AEE20;
    s32 i, result = 0;
    
    for (i = 0; i < 5; i++) {
        if (data[i] == 0) {
            result = 1;
            break;
        }
    }
    
    if (result != 0) {
        return 1;
    }
    
    return fn_80004610(arg0);
}

extern f32 lbl_80368BDC;
extern f32 lbl_80368BE0;
extern f64 lbl_80368C20;
s32 fn_80010770(u8 *str, s32 idx, f32 scale) {
    register u8 *digits;
    u32 *tbl;
    u32 found;
    s32 i;
    s32 result;
    f32 fmax;
    u8 *p;
    s32 c;
    s32 code;
    s16 digi;
    s16 shift;
    s32 val;
    f32 ftmp;
    s32 rnd;

    p = str;
    if (idx == -1) {
        idx = 0;
    }
    found = (u32)fn_8010494C((void *)lbl_802AEE20[idx]);
    tbl = (u32 *)lbl_802AEE20;
    if (tbl[0] == found) {
        i = 0;
    } else if (tbl[1] == found) {
        i = 1;
    } else if (tbl[2] == found) {
        i = 2;
    } else if (tbl[3] == found) {
        i = 3;
    } else if (tbl[4] == found) {
        i = 4;
    } else {
        i = -1;
    }

    fmax = lbl_80368BDC;
    result = 0;

    while ((s8)*p != 0) {
        if (*p++ == '#') {
            c = (s8)*p++;
            code = c - '#';
            if ((u32)code <= 0x56U) {
                switch (code) {
                case 30:
                case 31:
                case 32:
                case 36:
                case 38:
                case 47:
                case 53:
                case 85:
                    p += 2;
                    break;
                case 45:
                    p += 3;
                    break;
                case 35:
                    digits = (u8 *)__alloca(8);
                    digi = 0;
                    while ((u8)digi < 2) {
                        c = (s8)*p++;
                        if (c >= '0' && c <= '9') {
                            digits[(u8)digi] = (u8)(c - '0');
                        } else if (c >= 'a' && c <= 'f') {
                            digits[(u8)digi] = (u8)(c - 0x57);
                        } else if (c >= 'A' && c <= 'F') {
                            digits[(u8)digi] = (u8)(c - 0x37);
                        }
                        digi += 1;
                    }
                    val = 0;
                    digi = 1;
                    shift = 0;
                    while (digi >= 0) {
                        val += digits[digi] << shift;
                        digi -= 1;
                        shift += 4;
                    }
                    if (val == -1) {
                        val = 0;
                    }
                    found = (u32)fn_8010494C((void *)lbl_802AEE20[val]);
                    if (tbl[0] == found) {
                    } else if (tbl[1] == found) {
                    } else if (tbl[2] == found) {
                    } else if (tbl[3] == found) {
                    } else if (tbl[4] == found) {
                    }
                    break;
                case 48:
                case 54:
                    digits = (u8 *)__alloca(8);
                    digi = 0;
                    while ((u8)digi < 2) {
                        c = (s8)*p++;
                        if (c >= '0' && c <= '9') {
                            digits[(u8)digi] = (u8)(c - '0');
                        } else if (c >= 'a' && c <= 'f') {
                            digits[(u8)digi] = (u8)(c - 0x57);
                        } else if (c >= 'A' && c <= 'F') {
                            digits[(u8)digi] = (u8)(c - 0x37);
                        }
                        digi += 1;
                    }
                    val = 0;
                    digi = 1;
                    shift = 0;
                    while (digi >= 0) {
                        val += digits[digi] << shift;
                        digi -= 1;
                        shift += 4;
                    }
                    ftmp = (f32)(u32)val * lbl_80368BE0;
                    if (ftmp > fmax) {
                        fmax = ftmp;
                    }
                    break;
                default:
                    break;
                }
            }
        } else {
            rnd = fn_80104E40();
            ftmp = fmax * (f32)rnd * scale;
            rnd = (s32)ftmp;
            if (result < rnd) {
                result = rnd;
            }
        }
    }

    if (i == -1) {
        i = 0;
    }
    found = (u32)fn_8010494C((void *)lbl_802AEE20[i]);
    if (tbl[0] == found) {
    } else if (tbl[1] == found) {
    } else if (tbl[2] == found) {
    } else if (tbl[3] == found) {
    } else if (tbl[4] == found) {
    }
    return result;
}

s32 fn_80010B78(void) {
    s32 r31, r30, r29, r28, r27;
    
    r31 = 0;
    r30 = 0;
    r29 = 0;
    r28 = gUnknown_0x80369C84 < 0;
    r27 = 0;
    
    if (r28 != 0)
        r31 = 0;
    else
        r31 = 1;
        
    return r31;
}

void fn_80010FF0(void) {
    M2C_UNK fn_801047D0();
    fn_801047D0();
}

s32 fn_80011010(s32 arg0){u32 x;u32 *p;if(arg0==-1){x=fn_8010494C(lbl_802AEE20[0],(u32)lbl_802AEE20);p=(u32*)lbl_802AEE20;if(p[0]==x)return 0;if(p[1]==x)return 1;if(p[2]==x)return 2;if(p[3]==x)return 3;if(p[4]==x)return 4;}return -1;}

void fn_800111FC(void) {
    extern s32 lbl_802AEE20[5];
    extern s32 lbl_8036716C;
    extern s8 lbl_80367170;
    s32 ret;

    if (lbl_80367170 == 0) {
        lbl_8036716C = 0;
        lbl_80367170 = 1;
    }
    if (lbl_8036716C == 0) {
        fn_80104D90(0);
        fn_8010494C(0);
        ret = fn_80104944();
        lbl_8036716C = 1;
        lbl_802AEE20[0] = ret;
    }
}

s32 fn_80011264(void **arg0) {
    s32 var_r31;
    
    var_r31 = M2C_FIELD(*arg0, s32 (**)(), 0x40)();
    return M2C_FIELD(*arg0, s32 (**)(void **), 0x30)(arg0) / var_r31;
}

s32 fn_800112C0(void **arg0) {
    s32 temp_r31;
    void **temp_r30;

    temp_r30 = arg0;
    temp_r31 = M2C_FIELD(*arg0, s32 (**)(), 0x3C)();
    return M2C_FIELD(*temp_r30, s32 (**)(void **), 0x2C)(arg0) / temp_r31;
}

#pragma cplusplus on
extern "C" u16 fn_8001131C(void *arg0) {
    struct Obj {
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        s32 unk04;
    };
    u16 **fn_8006EDD8(s32, s32);
    Obj *obj = (Obj *)arg0;
    return **fn_8006EDD8(obj->unk04, obj->v7());
}
extern "C" u16 fn_80011368(void *arg0) {
    struct Obj {
        virtual s32 v0() = 0;
        virtual s32 v1() = 0;
        virtual s32 v2() = 0;
        virtual s32 v3() = 0;
        virtual s32 v4() = 0;
        virtual s32 v5() = 0;
        virtual s32 v6() = 0;
        virtual s32 v7() = 0;
        s32 unk04;
    };
    void **fn_8006EDD8(s32, s32);
    Obj *obj = (Obj *)arg0;
    return *(u16 *)((u8 *)*fn_8006EDD8(obj->unk04, obj->v7()) + 2);
}
#pragma cplusplus reset
s32 fn_800113B4(void) {
    return 0;
}

s32 fn_800113BC(void) {
    return 0;
}

void fn_800116F0(void **arg0){M2C_UNK fn_802025C0(M2C_UNK*,f32,f32,f32);M2C_UNK fn_80224E50(M2C_UNK*,M2C_UNK,M2C_UNK);extern f32 lbl_80368BDC;u8 sp8[0x30];f32 temp_f1;f32 temp_f31;temp_f1=(f32)M2C_FIELD(*arg0,s32 (**)(),0x30)();temp_f31=lbl_80368BDC/temp_f1;fn_802025C0((M2C_UNK*)sp8,lbl_80368BDC/(f32)M2C_FIELD(*arg0,s32 (**)(void**,f32),0x2C)(arg0,temp_f1),temp_f31,lbl_80368BDC);fn_80224E50((M2C_UNK*)sp8,0x21,1);}

void fn_800117B0(void *arg0) {
    M2C_UNK fn_8006EBC4(s32, M2C_UNK *, M2C_UNK *, s32, s32);
    M2C_UNK fn_80222A3C(M2C_UNK *, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80222C50(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_80222CF0(M2C_UNK *, s32);
    M2C_UNK sp14;
    M2C_UNK sp8;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(), 0x24)();
    fn_8006EBC4(M2C_FIELD(arg0, s32 *, 4), &sp14, &sp8, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x28)(arg0), temp_r31);
    fn_80222A3C(&sp14, 0, 0);
    fn_80222C50(&sp14, 1);
    fn_80222CF0(&sp8, M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x28)(arg0));
}

void fn_8001185C(void) {
    M2C_UNK fn_80223A5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AA0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AE4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223B4C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802201A8(0, 1, 4, 0x1E, 0, 0x7D);
    fn_80223A5C(0, 0xF, 0xF, 0xF, 0xA);
    fn_80223AE4(0, 0, 0, 0, 1, 0);
    fn_80223AA0(0, 7, 4, 5, 7);
    fn_80223B4C(0, 0, 0, 0, 1, 0);
    fn_80223F2C(0, 0, 0, 4);
}

void fn_80011910(void) {
    M2C_UNK fn_802201A8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802239D0(M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_802201A8(0, 1, 4, 0x21, 0, 0x7D);
    fn_802239D0(0, 0);
    fn_80223F2C(0, 0, 1, 4);
}
