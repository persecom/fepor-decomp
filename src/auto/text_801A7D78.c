/* Functions from 0x801A7D78 to 0x801AE2D4, found by decomp-toolkit. */
#include "common.h"

extern u16 lbl_80367218;
u32 fn_801A7D78(u32 arg0, s16 arg1) {
    M2C_UNK fn_8001C5F8(s32, M2C_UNK);
    M2C_UNK fn_800C428C(u32);
    M2C_UNK fn_801A9EB8(u32);
    M2C_UNK fn_8022C1E8(s32, M2C_UNK (*)(s32, M2C_UNK), M2C_UNK, M2C_UNK);

    if (arg0 != 0U) {
        if ((arg0 + 0x5C0) != 0) {
            fn_801A9EB8(arg0 + 0x5C0);
            fn_8001C5F8(arg0 + 0x84C, -1);
            fn_8001C5F8(arg0 + 0x844, -1);
            if (((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0) && ((arg0 + 0x5C0) != 0)) {
                fn_8022C1E8(arg0 + 0x7AC, fn_8001C5F8, 8, 4);
                fn_8022C1E8(arg0 + 0x78C, fn_8001C5F8, 8, 4);
            }
        }
        if ((arg0 + 0x2E0) != 0) {
            fn_801A9EB8(arg0 + 0x2E0);
            fn_8001C5F8(arg0 + 0x56C, -1);
            fn_8001C5F8(arg0 + 0x564, -1);
            if (((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0) && ((arg0 + 0x2E0) != 0)) {
                fn_8022C1E8(arg0 + 0x4CC, fn_8001C5F8, 8, 4);
                fn_8022C1E8(arg0 + 0x4AC, fn_8001C5F8, 8, 4);
            }
        }
        if (arg0 != 0U) {
            fn_801A9EB8(arg0);
            fn_8001C5F8(arg0 + 0x28C, -1);
            fn_8001C5F8(arg0 + 0x284, -1);
            if ((arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U) && (arg0 != 0U)) {
                fn_8022C1E8(arg0 + 0x1EC, fn_8001C5F8, 8, 4);
                fn_8022C1E8(arg0 + 0x1CC, fn_8001C5F8, 8, 4);
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_801A7F5C(void *arg0) {
    fn_801A7FA4(arg0);
    fn_801A7FA4((char *)arg0 + 0x2E0);
    fn_801A7FA4((char *)arg0 + 0x5C0);
    *(s32 *)((char *)arg0 + 0xCAC) = 0;
    return arg0;
}

int fn_801A7FA4(void *arg0)
{
    void fn_80016F78(void *);
    void fn_8001C76C(void *);
    void fn_801A9EB8(void *);

    u8 *ptr;

    ptr = (u8 *)arg0;

    fn_80016F78(arg0);

    fn_8001C76C(ptr + 0x284);
    fn_8001C76C(ptr + 0x28C);

    *(u16 *)(ptr + 0x2AE) = 0;

    fn_801A9EB8(arg0);

    return (int)arg0;
}

u16 *fn_801A7FF4(void *arg0) {
    s8 temp = ((s8 *)arg0)[0x2C8 / sizeof(s8)];
    if (temp <= 0) {
        return &lbl_80367218;
    }
    return (u16 *)((u8 *)arg0 + 0x284);
}

void fn_801A8010(void *arg0) {
    u64 *fn_8001CB64(void *);
    u8 fn_8001DDE8(s32);
    extern u16 lbl_80367218;
    u64 *p;
    void *base;
    s8 flag;

    flag = *(s8 *)((u8 *)arg0 + 0x2C8);
    if (flag > 0) {
        if (flag <= 0) {
            base = &lbl_80367218;
        } else {
            base = (u8 *)arg0 + 0x284;
        }
        p = fn_8001CB64(base);
        if ((*p & 0x100ULL) == 0) {
            if (*(u8 *)((u8 *)arg0 + 0x295) == 0x52) {
                if (*(s8 *)((u8 *)arg0 + 0x2C8) <= 0) {
                    base = &lbl_80367218;
                } else {
                    base = (u8 *)arg0 + 0x284;
                }
                if (fn_8001DDE8(*(s32 *)base) == 0) {
                    return;
                }
            }
            flag = *(s8 *)((u8 *)arg0 + 0x2C8);
            *(u8 *)((u8 *)arg0 + 0x2C8) = (u8)(flag - 1);
            if (*(s8 *)((u8 *)arg0 + 0x2C8) == 0) {
                *(u8 *)((u8 *)arg0 + 0x2C7) = 1;
            }
        }
    }
}

void fn_801A80D8(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3);

#pragma use_lmw_stmw on
void fn_801A8268(void *arg0) {
    s32 fn_800056CC(const char *, ...);
    s32 fn_800A8A88(void *);
    s32 fn_800A8978(void *);
    s32 fn_8003B2D0(void *);
    u8 fn_800386B0(void *);
    s32 fn_8003A778(void *);
    s32 fn_8003AA40(void *);
    s32 fn_8003ACF8(void *);
    s32 fn_8003AEB0(void *);
    s32 fn_8003AF28(void *);
    s32 fn_8003AFA0(void *);
    s32 fn_8003B258(void *);
    s32 fn_8001D2C8(void *);
    s32 fn_8001D8A8(void *);
    extern u8 lbl_8027B650[];
    extern u16 lbl_80367218;
    s8 g, e, f, d, c, b, a;
    s8 t;
    u8 b25;
    u8 b26;
    s32 tmp;
    s8 v1a8, v19a;
    void *p;
    void *obj, *base;
    s32 flag;
    s32 ret;
    void *slot;

    p = *(void **)((u8 *)arg0 + 0x188);
    fn_800056CC((const char *)(lbl_8027B650 + 0x1D),
                fn_800A8A88(p), *(void **)p);
    p = *(void **)((u8 *)arg0 + 0x18C);
    fn_800056CC((const char *)(lbl_8027B650 + 0x29),
                fn_800A8978(p), *(void **)p);

    v1a8 = *(s8 *)((u8 *)arg0 + 0x1A8);
    v19a = *(s8 *)((u8 *)arg0 + 0x19A);
    t = fn_8003B2D0(arg0);
    fn_800056CC((const char *)(lbl_8027B650 + 0x35),
                v19a, fn_800386B0(arg0), v1a8, t);

    fn_800056CC((const char *)(lbl_8027B650 + 0x49),
                *(s8 *)((u8 *)arg0 + 0x19E), *(s8 *)((u8 *)arg0 + 0x19F));

    a = fn_8003A778(arg0);
    b = fn_8003AA40(arg0);
    c = fn_8003ACF8(arg0);
    d = fn_8003AEB0(arg0);
    e = fn_8003AF28(arg0);
    f = fn_8003AFA0(arg0);
    g = fn_8003B258(arg0);
    fn_800056CC((const char *)(lbl_8027B650 + 0x57),
                g, f, e, d, c, b, a);

    fn_800056CC((const char *)(lbl_8027B650 + 0x82),
                *(s16 *)((u8 *)arg0 + 0x298), *(s16 *)((u8 *)arg0 + 0x29A),
                *(s16 *)((u8 *)arg0 + 0x29C), *(s16 *)((u8 *)arg0 + 0x29E));
    fn_800056CC((const char *)(lbl_8027B650 + 0xA3),
                *(s16 *)((u8 *)arg0 + 0x2A0), *(s16 *)((u8 *)arg0 + 0x2A4),
                *(s16 *)((u8 *)arg0 + 0x2A6));
    fn_800056CC((const char *)(lbl_8027B650 + 0xC0),
                *(s16 *)((u8 *)arg0 + 0x2A2), *(s16 *)((u8 *)arg0 + 0x2A8));

    flag = *((u8 *)arg0 + 0x2C8);
    if ((s8)flag <= 0) {
        base = &lbl_80367218;
    } else {
        base = (u8 *)arg0 + 0x284;
    }
    b25 = *((u8 *)base + 4);
    if ((s8)flag <= 0) {
        base = &lbl_80367218;
    } else {
        base = (u8 *)arg0 + 0x284;
    }
    obj = *(void **)base;
    if (obj != 0) {
        tmp = *((u8 *)obj + 0x18);
    } else {
        tmp = 0;
    }
    b26 = (u8)tmp;
    if ((s8)flag <= 0) {
        base = &lbl_80367218;
    } else {
        base = (u8 *)arg0 + 0x284;
    }
    fn_800056CC((const char *)(lbl_8027B650 + 0xD9),
                fn_8001D2C8(base), b25, b26, *(s8 *)((u8 *)arg0 + 0x294));

    fn_800056CC((const char *)(lbl_8027B650 + 0xEC),
                *(s16 *)((u8 *)arg0 + 0x2C2), *(s16 *)((u8 *)arg0 + 0x2C4));

    flag = *((u8 *)arg0 + 0x2C8);
    slot = (u8 *)arg0 + 0x28C;
    if ((s8)flag <= 0) {
        base = &lbl_80367218;
    } else {
        base = (u8 *)arg0 + 0x284;
    }
    b25 = *((u8 *)base + 4);
    if ((s8)flag <= 0) {
        base = &lbl_80367218;
    } else {
        base = (u8 *)arg0 + 0x284;
    }
    obj = *(void **)base;
    if (obj != 0) {
        tmp = *((u8 *)obj + 0x18);
    } else {
        tmp = 0;
    }
    b26 = (u8)tmp;
    ret = fn_8001D2C8(slot);
    fn_800056CC((const char *)(lbl_8027B650 + 0x100),
                ret, b25, b26, *(s8 *)((u8 *)arg0 + 0x294));

    fn_800056CC((const char *)(lbl_8027B650 + 0x114),
                fn_8001D8A8((u8 *)arg0 + 0x2AE));
    fn_800056CC((const char *)(lbl_8027B650 + 0x121),
                fn_8001D8A8((u8 *)*(void **)((u8 *)arg0 + 0x18C) + 0x3A));
    fn_800056CC((const char *)(lbl_8027B650 + 0x12E));
}
void fn_801A859C(void *arg0) {
    s8 temp;
    temp = fn_8003B2D0();
    M2C_FIELD(arg0, s8 *, 0x2B7) = temp;
    M2C_FIELD(arg0, u8 *, 0x2B8) = (u8) M2C_FIELD(arg0, u8 *, 0x1A8);
    M2C_FIELD(arg0, s16 *, 0x2BA) = (s16) M2C_FIELD(arg0, s16 *, 0x298);
    M2C_FIELD(arg0, s16 *, 0x2BC) = (s16) M2C_FIELD(arg0, s16 *, 0x29A);
    M2C_FIELD(arg0, s16 *, 0x2BE) = (s16) M2C_FIELD(arg0, s16 *, 0x2A2);
    M2C_FIELD(arg0, s16 *, 0x2C0) = (s16) M2C_FIELD(arg0, s16 *, 0x2A8);
}

void fn_801A85F4(s32 arg0) {
    M2C_UNK fn_80105CEC(s32, M2C_UNK);
    fn_80105CEC(arg0 + 0x1BC, 0x4C);
    fn_80105CEC(arg0 + 0x1BC, 0x31);
    fn_80105CEC(arg0 + 0x1BC, 0x30);
    fn_80105CEC(arg0 + 0x1BC, 0x5A);
    fn_80105CEC(arg0 + 0x1BC, 0x2F);
    fn_80105CEC(arg0 + 0x1BC, 0x38);
    fn_80105CEC(arg0 + 0x1BC, 0x35);
    fn_80105CEC(arg0 + 0x1BC, 0x39);
    fn_80105CEC(arg0 + 0x1BC, 0x33);
}

s32 fn_801A8688(s32 arg0) {
    u8 fn_80105BC0(s32, M2C_UNK);
    if ((fn_80105BC0(arg0 + 0x1BC, 0x29) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x41) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x4C) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x31) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2F) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x30) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x32) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x3F) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x10) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x35) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2B) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2C) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2E) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x33) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x38) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x34) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x39) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x36) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x42) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x5A) == 0) && (fn_80105BC0(arg0 + 0x1BC, 0x2D) == 0)) {
        return 0;
    }
    fn_80105CEC(arg0 + 0x1BC, 0x29);
    fn_80105CEC(arg0 + 0x1BC, 0x41);
    fn_80105CEC(arg0 + 0x1BC, 0x4C);
    fn_80105CEC(arg0 + 0x1BC, 0x31);
    fn_80105CEC(arg0 + 0x1BC, 0x2F);
    fn_80105CEC(arg0 + 0x1BC, 0x30);
    fn_80105CEC(arg0 + 0x1BC, 0x32);
    fn_80105CEC(arg0 + 0x1BC, 0x3F);
    fn_80105CEC(arg0 + 0x1BC, 0x10);
    fn_80105CEC(arg0 + 0x1BC, 0x35);
    fn_80105CEC(arg0 + 0x1BC, 0x2B);
    fn_80105CEC(arg0 + 0x1BC, 0x2C);
    fn_80105CEC(arg0 + 0x1BC, 0x2E);
    fn_80105CEC(arg0 + 0x1BC, 0x33);
    fn_80105CEC(arg0 + 0x1BC, 0x38);
    fn_80105CEC(arg0 + 0x1BC, 0x34);
    fn_80105CEC(arg0 + 0x1BC, 0x39);
    fn_80105CEC(arg0 + 0x1BC, 0x36);
    fn_80105CEC(arg0 + 0x1BC, 0x42);
    fn_80105CEC(arg0 + 0x1BC, 0x5A);
    fn_80105CEC(arg0 + 0x1BC, 0x2D);
    return 1;
}

void fn_801A895C(void *arg0, void *arg1) {
    s32 fn_800927EC(void *);
    u8 fn_80092ADC(void *, u8);
    s32 fn_800056CC(const char *, ...);
    extern u8 lbl_8027B650[];
    void *slot;
    void *p;
    u8 kind;

    slot = arg1;
    if ((arg1 = *(void **)arg1) == NULL) {
        return;
    }
    kind = (arg1 != NULL) ? *(u8 *)((u8 *)arg1 + 0x12) : 0xC;
    if (kind == 8) {
        return;
    }
    kind = (arg1 != NULL) ? *(u8 *)((u8 *)arg1 + 0x12) : 0xC;
    if (kind == 9) {
        return;
    }
    *(u8 *)((u8 *)arg0 + 0x2C6) |= fn_800927EC(arg0);
    fn_800056CC((const char *)(lbl_8027B650 + 0x16A),
                fn_80092ADC(arg0, ((p = *(void **)slot) != NULL) ? *(u8 *)((u8 *)p + 0x12) : 0xC));
}

extern u8 lbl_802EFDB8[104];
extern u16 lbl_80330EAC[1634];
u8 fn_8000CD88(s16);
u8 fn_8000CE68(s16);
s32 fn_801A8A28(void *arg0) {
    u8 fn_8000CD88(s16);
    u8 fn_8000CE68(s16);
    extern u8 lbl_802EFDB8[104];
    extern u16 lbl_80330EAC[1634];
    u8 flags;
    u8 *base;

    base = lbl_802EFDB8;
    flags = base[base[0x60]];

    if (flags & 1) {
        return 0x50;
    }
    if (flags & 2) {
        return 0x51;
    }
    if (flags & 4) {
        return 0x52;
    }

    if (*(u8 *)((u8 *)arg0 + 0x2CA) != 0) {
        *(u8 *)((u8 *)arg0 + 0x2CA) = 0;
        *(u32 *)((u8 *)lbl_80330EAC + 0xCAC) |= 0x1000;
        return 0x51;
    }

    if (fn_8000CD88(*(s16 *)((u8 *)arg0 + 0x2A2)) == 0) {
        return 0x52;
    }

    return (fn_8000CE68(*(s16 *)((u8 *)arg0 + 0x2A8)) != 0) + 0x50;
}

void fn_801A8AF4(void *arg0) {
    s16 *temp1;
    s16 *temp2;
    
    temp1 = (s16*)((u8*)arg0 + 0x2A2);
    if (*temp1 > 0x64) {
        *temp1 = 0x64;
    }
    if (*temp1 < 0) {
        *temp1 = 0;
    }
    
    temp2 = (s16*)((u8*)arg0 + 0x2A8);
    if (*temp2 > 0x64) {
        *temp2 = 0x64;
    }
    if (*temp2 < 0) {
        *temp2 = 0;
    }
}

void fn_801A8B48(s32 arg0) {
    if (arg0 >= 0) {
        if (arg0 < 0x14) {
            s32 var_r3 = arg0;
            lbl_80367218 = 0x910 + var_r3;
            var_r3 = (var_r3 * 0x28) - 0x1010;
            if (var_r3 >= 0) {
                lbl_80367218 = arg0;
            } else if (var_r3 < 0x14) {
                lbl_80367218 = var_r3 + 0x10A;
            }
        }
    }
}

void fn_801A8CB8(void *arg0, void *arg1) {
    void fn_800368C8(void *, s32, void *);
    void fn_80036E48(void *, s32);
    s32 fn_80036F5C(void *, s32);
    void *fn_80036FD0(void *, s32);
    u8 fn_8003701C(void *);
    u8 fn_80038128(void *, void *);
    void fn_8003B8D4(void *);
    s32 i;
    void *unit;
    s32 val;

    i = 0;
    *(u8 *)((u8 *)arg1 + 9) = 0;
    *(u8 *)((u8 *)arg1 + 8) = 0;
    *(u8 *)((u8 *)arg1 + 7) = 0;
    *(u8 *)((u8 *)arg1 + 6) = 0;
    *(u8 *)((u8 *)arg1 + 5) = 0;
    *(u8 *)((u8 *)arg1 + 4) = 0;

    for (; i < (s32)fn_8003701C(arg0); i++) {
        unit = fn_80036FD0(arg0, i);
        if (unit == NULL) {
            continue;
        }
        if (*(u32 *)((u8 *)arg0 + 0x190) != *(u32 *)((u8 *)unit + 0x190)) {
            continue;
        }
        if ((u8)fn_80038128(arg0, unit) > 3) {
            continue;
        }
        fn_80036E48(unit, *(s32 *)((u8 *)arg0 + 0x188));
        val = fn_80036F5C(arg0, i);
        fn_800368C8(arg0, val, arg1);
        fn_800368C8(unit, val, arg1);
    }
    fn_8003B8D4(arg1);
}

void fn_801A8DA4(void *arg0) {
    s32 fn_80036F5C(void *, s32);
    void *fn_80036FD0(void *, s32);
    u8 fn_8003701C(void *);
    u8 fn_80038128(void *, void *);
    M2C_UNK fn_80036E48(void *, s32);
    M2C_UNK fn_800368C8(void *, s32, M2C_UNK *);
    M2C_UNK fn_8003B8D4(M2C_UNK *);
    
    s32 var_r28;
    void *temp_r3;
    u8 sp11;
    u8 sp10;
    u8 spF;
    u8 spE;
    u8 spD;
    u8 spC;
    M2C_UNK sp8;

    M2C_FIELD(arg0, u8 *, 0xC) = 0;
    M2C_FIELD(arg0, u8 *, 0x10) = 0;
    M2C_FIELD(arg0, u8 *, 0xF) = 0;
    M2C_FIELD(arg0, u8 *, 0xE) = 0;
    M2C_FIELD(arg0, u8 *, 0xD) = 0;
    M2C_FIELD(arg0, u8 *, 0x11) = 0;
    
    var_r28 = 0;
loop_6:
    if (var_r28 < (s32) fn_8003701C(arg0)) {
        temp_r3 = fn_80036FD0(arg0, var_r28);
        if ((temp_r3 != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x190) == (u32) M2C_FIELD(temp_r3, u32 *, 0x190)) && (fn_80038128(arg0, temp_r3) <= 3U)) {
            fn_80036E48(temp_r3, M2C_FIELD(arg0, s32 *, 0x188));
            fn_80036F5C(arg0, var_r28);
            fn_800368C8(arg0, 0, &sp8);
            fn_800368C8(temp_r3, 0, &sp8);
        }
        var_r28 += 1;
        goto loop_6;
    }
    fn_8003B8D4(&sp8);
    M2C_FIELD(arg0, s16 *, 0x298) = (s16) (M2C_FIELD(arg0, s16 *, 0x298) + (s8) spC);
    M2C_FIELD(arg0, s16 *, 0x29A) = (s16) (M2C_FIELD(arg0, s16 *, 0x29A) + (s8) spD);
    M2C_FIELD(arg0, s16 *, 0x29E) = (s16) (M2C_FIELD(arg0, s16 *, 0x29E) + (s8) spE);
    M2C_FIELD(arg0, s16 *, 0x2A0) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A0) + (s8) spF);
    M2C_FIELD(arg0, s16 *, 0x2A4) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A4) + (s8) sp10);
    M2C_FIELD(arg0, s16 *, 0x2A6) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A6) + (s8) sp11);
}

void fn_801A8F14(void *arg0, void *arg1) {
    u8 fn_801B8550(s32);
    if (fn_801B8550(M2C_FIELD(arg1, s32 *, 0x280)) != 0) {
        M2C_FIELD(arg0, s16 *, 0x2A4) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x2A2) = (s16) (M2C_FIELD(arg0, s16 *, 0x29E) - M2C_FIELD(arg1, s16 *, 0x2A0));
    M2C_FIELD(arg0, s16 *, 0x2A8) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A4) - M2C_FIELD(arg1, s16 *, 0x2A6));
}

void fn_801A8F80(void *arg0, void *arg1) {
    void *fn_8001CB64(void *);
    u8 fn_8001D37C(void *);
    u8 fn_8001D3FC(void *);
    u8 fn_8001D47C(void *);
    u8 fn_8001D500(void *);
    u8 fn_8001DDC4(u8);
    typedef struct { u8 b0, b1, b2, b3, b4; } Ret378CC;
    Ret378CC fn_800378CC(void *);
    s8 fn_8003AA40(void *);
    void fn_80037904(void *, s32);
    s8 fn_8003A778(void *);
    s8 fn_8003ACF8(void *);
    s8 fn_8003AEB0(void *);
    s8 fn_8003AF28(void *);
    s8 fn_8003AFA0(void *);
    s8 fn_8003B258(void *);
    u8 fn_80092DC4(void *, void *);
    void fn_801A80D8(void *, s32 *, s32 *, s32 *);
    u8 fn_80105BC0(void *, s32);
    s8 fn_801B8674(void *);
    s8 fn_801F19A0(void);
    extern u16 lbl_80367218;

    void *self;
    void *other;
    u8 flag;
    s16 t2c2;
    void *obj;
    u8 kind;
    u8 hit;
    void *base;
    unsigned long tmp;
    s32 diff;
    Ret378CC ret;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u64 *bits;
    s8 t;

    self = arg0;
    other = arg1;
    hit = 0;

    if (other != NULL && *(u32 *)((u8 *)other + 0x188) != 0 &&
        (u8)fn_80092DC4(other, (u8 *)self + 0x2AE) != 0) {
        *(u8 *)((u8 *)self + 0x296) = 1;
    }

    if (other != NULL && *(u32 *)((u8 *)other + 0x188) != 0) {
        if ((s8)*(u8 *)((u8 *)other + 0x2C8) <= 0) {
            base = &lbl_80367218;
        } else {
            base = (u8 *)other + 0x284;
        }
        obj = *(void **)base;
        if (obj != NULL) {
            kind = *(u8 *)((u8 *)obj + 0x13);
        } else {
            kind = 0xC;
        }
        if ((u8)fn_8001DDC4(kind) != 0) {
            hit = 1;
        }
    }

    flag = *(u8 *)((u8 *)self + 0x2C8);
    if ((s8)flag <= 0) {
        base = &lbl_80367218;
    } else {
        base = (u8 *)self + 0x284;
    }
    if (*(void **)base != NULL) {
        t2c2 = *(s16 *)((u8 *)self + 0x2C2);
        if ((s8)flag <= 0) {
            base = &lbl_80367218;
        } else {
            base = (u8 *)self + 0x284;
        }
        *(s16 *)((u8 *)self + 0x298) = (s16)((u8)fn_8001D500(base) + t2c2);
        if (*(u8 *)((u8 *)self + 0x296) != 0) {
            *(s16 *)((u8 *)self + 0x298) = (s16)(*(s16 *)((u8 *)self + 0x298) * 2);
        }
        if ((s8)*(u8 *)((u8 *)self + 0x2C8) <= 0) {
            base = &lbl_80367218;
        } else {
            base = (u8 *)self + 0x284;
        }
        bits = (u64 *)fn_8001CB64(base);
        if ((*bits & 0x1000ULL) == 0) {
            if ((s8)*(u8 *)((u8 *)self + 0x2C8) <= 0) {
                base = &lbl_80367218;
            } else {
                base = (u8 *)self + 0x284;
            }
            obj = *(void **)base;
            if (obj != NULL) {
                kind = *(u8 *)((u8 *)obj + 0x13);
            } else {
                kind = 0xC;
            }
            if ((u8)fn_8001DDC4((s32)kind) != 0) {
                *(s16 *)((u8 *)self + 0x298) =
                    (s16)(*(s16 *)((u8 *)self + 0x298) + fn_8003AFA0(self));
            } else {
                *(s16 *)((u8 *)self + 0x298) =
                    (s16)(*(s16 *)((u8 *)self + 0x298) + fn_8003B258(self));
            }
        }
    } else {
        *(s16 *)((u8 *)self + 0x298) = 0;
    }

    if (hit == 0) {
        *(s16 *)((u8 *)self + 0x29A) =
            (s16)((s8)*(u8 *)((u8 *)self + 0x2B4) + fn_8003AA40(self));
    } else {
        *(s16 *)((u8 *)self + 0x29A) =
            (s16)((s8)*(u8 *)((u8 *)self + 0x2B5) + fn_8003A778(self));
    }

    tmp = (u8)fn_8001D37C((u8 *)self + 0x28C);
    diff = tmp - fn_8003B258(self);
    if (diff < 0) {
        diff = 0;
    }
    *(s16 *)((u8 *)self + 0x29C) = (s16)(fn_8003AEB0(self) - diff);
    if (*(s16 *)((u8 *)self + 0x29C) < 0) {
        *(s16 *)((u8 *)self + 0x29C) = 0;
    }

    fn_80037904(self, -1);
    ret = fn_800378CC(self);

    if ((s8)*(u8 *)((u8 *)self + 0x2C8) <= 0) {
        base = &lbl_80367218;
    } else {
        base = (u8 *)self + 0x284;
    }
    tmp = fn_8003AF28(self) * 2;
    *(s16 *)((u8 *)self + 0x29E) = (s16)((u8)fn_8001D47C(base) + tmp);

    t = fn_8003ACF8(self);
    *(s16 *)((u8 *)self + 0x29E) =
        (s16)(t + (*(s16 *)((u8 *)self + 0x2C4) + *(s16 *)((u8 *)self + 0x29E)));
    *(s16 *)((u8 *)self + 0x29E) =
        (s16)(*(s16 *)((u8 *)self + 0x29E) + (s8)ret.b2);

    *(s16 *)((u8 *)self + 0x2A0) =
        (s16)(fn_8003ACF8(self) +
              ((*(s16 *)((u8 *)self + 0x29C) * 2) + (s8)*(u8 *)((u8 *)self + 0x2B6)));
    *(s16 *)((u8 *)self + 0x2A0) =
        (s16)(*(s16 *)((u8 *)self + 0x2A0) + (s8)ret.b3);

    if (((*(u16 *)((u8 *)self + 0x1A4) >> 7) & 7) != 0) {
        *(s16 *)((u8 *)self + 0x2A0) = 0;
    }

    if ((s8)*(u8 *)((u8 *)self + 0x2C8) <= 0) {
        base = &lbl_80367218;
    } else {
        base = (u8 *)self + 0x284;
    }
    tmp = (u8)fn_8001D3FC(base);
    t = fn_8003AF28(self);
    *(s16 *)((u8 *)self + 0x2A4) =
        (s16)((((s32)(t >> 31) + t) >> 1) + tmp);
    *(s16 *)((u8 *)self + 0x2A4) =
        (s16)(*(s16 *)((u8 *)self + 0x2A4) + (s8)ret.b4);

    *(s16 *)((u8 *)self + 0x2A4) =
        (s16)(*(s16 *)((u8 *)self + 0x2A4) +
              fn_801B8674(*(void **)((u8 *)self + 0x280)));

    if ((u8)fn_80105BC0((u8 *)self + 0x1BC, 0x61) != 0) {
        *(s16 *)((u8 *)self + 0x2A4) =
            (s16)(*(s16 *)((u8 *)self + 0x2A4) + fn_801F19A0());
    }

    if ((s8)*(u8 *)((u8 *)self + 0x2C8) <= 0) {
        base = &lbl_80367218;
    } else {
        base = (u8 *)self + 0x284;
    }
    bits = (u64 *)fn_8001CB64(base);
    if ((*bits & 0x2000ULL) != 0) {
        *(s16 *)((u8 *)self + 0x2A4) = 0;
    }

    *(s16 *)((u8 *)self + 0x2A6) = (s16)fn_8003ACF8(self);

    if ((u8)fn_80105BC0((u8 *)self + 0x1BC, 0x41) == 0) {
        if ((u8)fn_80105BC0((u8 *)self + 0x1BC, 0x52) != 0) {
            *(s16 *)((u8 *)self + 0x2A0) =
                (s16)(*(s16 *)((u8 *)self + 0x2A0) + 0x14);
        }
        if ((u8)fn_80105BC0((u8 *)self + 0x1BC, 0x51) != 0) {
            *(s16 *)((u8 *)self + 0x29E) =
                (s16)(*(s16 *)((u8 *)self + 0x29E) + 0x14);
        }
        fn_801A80D8(self, &sp10, &spC, &sp8);
        *(s16 *)((u8 *)self + 0x29E) =
            (s16)(*(s16 *)((u8 *)self + 0x29E) + sp10);
        *(s16 *)((u8 *)self + 0x2A0) =
            (s16)(*(s16 *)((u8 *)self + 0x2A0) + spC);
        *(s16 *)((u8 *)self + 0x2A4) =
            (s16)(*(s16 *)((u8 *)self + 0x2A4) + sp8);
        if (*(s16 *)((u8 *)self + 0x29E) < 0) {
            *(s16 *)((u8 *)self + 0x29E) = 0;
        }
        if (*(s16 *)((u8 *)self + 0x2A0) < 0) {
            *(s16 *)((u8 *)self + 0x2A0) = 0;
        }
        if (*(s16 *)((u8 *)self + 0x2A4) < 0) {
            *(s16 *)((u8 *)self + 0x2A4) = 0;
        }
    }
}

void fn_801A949C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B5) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
}

void fn_801A9600(void *arg0, void *arg1) {
    u8 temp_r4;
    u32 *var_r3;
    void **temp_r3_2;
    void *temp_r4_2;
    void *temp_r4_3;
    u32 temp_r5;

    ((u8*)arg0)[0x294] = -1;
    fn_8001C4FC(arg0, 0x284);
    fn_8001C4FC(arg1, 0x28C);
    ((u8*)arg0)[0x2C8] =*((u8*)arg1 + 4);
    *((u16*)arg0 + 0x2AE/2) = 0;
    temp_r4 = ((u8*)arg0)[0x2C8];
    if (temp_r4 <= 0) {
        var_r3 = (u32*)lbl_80367218;
    } else {
        var_r3 = (u32*)((u8*)arg0 + 0x284);
    }
    if (*(var_r3) != 0) {
        if (temp_r4 <= 0) {
            var_r3 = (u32*)lbl_80367218;
        } else {
            var_r3 = (u32*)((u8*)arg0 + 0x284);
        }
        if (fn_80094614(arg0, *var_r3) == 0) {
            fn_8001D580((u8*)arg0 + 0x284);
        }
    }
    temp_r5 = ((u32*)arg0)[0x28C/4];
    if (temp_r5 != 0) {
        temp_r4_2 = (void*)temp_r5;
        *((u16*)arg0 + 0x2AE/2) = *((u16*)arg0 + 0x2AE/2) | ((u32*)temp_r4_2)[0x0C/4];
    }
    temp_r3_2 = (void**)fn_80037C20(arg0);
    if (temp_r3_2 != NULL) {
        temp_r4_3 = *temp_r3_2;
        if (temp_r4_3 != NULL) {
            *((u16*)arg0 + 0x2AE/2) = *((u16*)arg0 + 0x2AE/2) | ((u32*)temp_r4_3)[0x0C/4];
        }
    }
}

s32 fn_801A99E8(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 var_r31;
    s32 var_r30;
    
    if (arg0 == 0) {
        return 0;
    }
    
    var_r31 = arg1 + 1;
    if (var_r31 > 1) {
        var_r31 = 1;
    }
    
    var_r30 = arg2 + 1;
    if (var_r30 > 1) {
        var_r30 = 1;
    }
    
    return (arg3 * var_r30 + (var_r31 * arg2)) * arg0;
}

#pragma opt_common_subs off
void fn_801A9AF8(void *arg0) {
    struct Obj {
        u8 pad0[0x1A4];
        u16 unk1A4;
        u16 unk1A6;
        s8 unk1A8;
        u8 pad1A9[0x1BC - 0x1A9];
        u8 unk1BC[0x20C - 0x1BC];
        u8 unk20C[8];
        u8 pad214[0x280 - 0x214];
        void *unk280;
        u8 unk284[8];
        u8 unk28C[8];
        s8 unk294;
        u8 pad295[0x2C8 - 0x295];
        s8 unk2C8;
    } *p = arg0;
    u8 fn_80105BC0(void *, s32);
    void fn_80093154(void *, u8, void *);
    void *temp_r3;

    fn_800381EC(p->unk280, p->unk1A8);
    temp_r3 = p->unk280;
    M2C_FIELD(temp_r3, u16 *, 0x1A4) = p->unk1A4;
    M2C_FIELD(temp_r3, u16 *, 0x1A6) = p->unk1A6;
    if (p->unk1A8 == 0 && fn_80105BC0(p->unk1BC, 0x5C) == 0) {
        M2C_FIELD(p->unk280, u32 *, 0x1A0) |= 0x01000000;
    }
    if (p->unk294 >= 0) {
        fn_8001C4FC(p->unk284, p->unk28C);
        fn_8001D5F4(p->unk284, (u8)p->unk2C8);
        fn_80093154(p->unk280, p->unk294, p->unk284);
        fn_800947E0(p->unk280);
        temp_r3 = p->unk280;
        M2C_FIELD(temp_r3, u8 *, 0x20C) = p->unk20C[0];
        M2C_FIELD(temp_r3, u8 *, 0x20D) = p->unk20C[1];
        M2C_FIELD(temp_r3, u8 *, 0x20E) = p->unk20C[2];
        M2C_FIELD(temp_r3, u8 *, 0x20F) = p->unk20C[3];
        M2C_FIELD(temp_r3, u8 *, 0x210) = p->unk20C[4];
        M2C_FIELD(temp_r3, u8 *, 0x211) = p->unk20C[5];
        M2C_FIELD(temp_r3, u8 *, 0x212) = p->unk20C[6];
        M2C_FIELD(temp_r3, u8 *, 0x213) = p->unk20C[7];
        if (p->unk2C8 <= 0) {
            fn_800951D0(p->unk280, -1);
        }
    }
}
#pragma opt_common_subs reset
void fn_801A9C0C(void *arg0) {
    M2C_UNK fn_80050E14(u16, void *);
    M2C_UNK fn_800A89C0(void *);
    M2C_UNK fn_800A8A2C(void *);
    extern u8 lbl_802CA264[];
    extern u8 lbl_80331B70[];
    extern u8 lbl_80331BD4[];
    extern s8 lbl_80368218;
    extern s8 lbl_80368219;
    u16 temp_r3;

    if (lbl_80368218 == 0) {
        fn_800A8A2C(lbl_80331B70);
        lbl_80368218 = 1;
    }
    if (lbl_80368219 == 0) {
        fn_800A89C0(lbl_80331BD4);
        lbl_80368219 = 1;
    }
    temp_r3 = *(u16 *)(lbl_80331BD4 + 0x3A);
    *(s8 *)(lbl_80331BD4 + 0x4C) = 0x64;
    *(u16 *)(lbl_80331BD4 + 0x3A) = temp_r3 | 0x1000;
    fn_80050E14(temp_r3, lbl_80331BD4);
    *(void **)((u8 *)arg0 + 0x188) = lbl_80331B70;
    *(void **)((u8 *)arg0 + 0x18C) = lbl_80331BD4;
    *(void **)((u8 *)arg0 + 0x190) = lbl_802CA264;
}

void fn_801A9CB8(void *arg0, s32 arg1) {
    M2C_UNK fn_80037E88();
    fn_80037E88();
    M2C_FIELD(arg0, s32 *, 0x280) = arg1;
}

void *fn_801A9CF4(void *dst, void *src) {
    if (src != dst) {
        fn_80037E88();
        *(u32*)(((char*)dst) + 0x280) = *(u32*)(((char*)src) + 0x280);
        fn_8001C4FC(((char*)dst) + 0x284, ((char*)src) + 0x284);
        fn_8001C4FC(((char*)dst) + 0x28C, ((char*)src) + 0x28C);
        *(u8*)(((char*)dst) + 0x294) = *(u8*)(((char*)src) + 0x294);
        *(u8*)(((char*)dst) + 0x295) = *(u8*)(((char*)src) + 0x295);
        *(u8*)(((char*)dst) + 0x296) = *(u8*)(((char*)src) + 0x296);
        *(s16*)(((char*)dst) + 0x298) = *(s16*)(((char*)src) + 0x298);
        *(s16*)(((char*)dst) + 0x29A) = *(s16*)(((char*)src) + 0x29A);
        *(s16*)(((char*)dst) + 0x29C) = *(s16*)(((char*)src) + 0x29C);
        *(s16*)(((char*)dst) + 0x29E) = *(s16*)(((char*)src) + 0x29E);
        *(s16*)(((char*)dst) + 0x2A0) = *(s16*)(((char*)src) + 0x2A0);
        *(s16*)(((char*)dst) + 0x2A2) = *(s16*)(((char*)src) + 0x2A2);
        *(s16*)(((char*)dst) + 0x2A4) = *(s16*)(((char*)src) + 0x2A4);
        *(s16*)(((char*)dst) + 0x2A6) = *(s16*)(((char*)src) + 0x2A6);
        *(s16*)(((char*)dst) + 0x2A8) = *(s16*)(((char*)src) + 0x2A8);
        *(s16*)(((char*)dst) + 0x2AA) = *(s16*)(((char*)src) + 0x2AA);
        *(s16*)(((char*)dst) + 0x2AC) = *(s16*)(((char*)src) + 0x2AC);
        *(u16*)(((char*)dst) + 0x2AE) = *(u16*)(((char*)src) + 0x2AE);
        *(u32*)(((char*)dst) + 0x2B0) = *(u32*)(((char*)src) + 0x2B0);
        *(u8*)(((char*)dst) + 0x2B4) = *(u8*)(((char*)src) + 0x2B4);
        *(u8*)(((char*)dst) + 0x2B5) = *(u8*)(((char*)src) + 0x2B5);
        *(u8*)(((char*)dst) + 0x2B6) = *(u8*)(((char*)src) + 0x2B6);
        *(u8*)(((char*)dst) + 0x2B7) = *(u8*)(((char*)src) + 0x2B7);
        *(u8*)(((char*)dst) + 0x2B8) = *(u8*)(((char*)src) + 0x2B8);
        *(s16*)(((char*)dst) + 0x2BA) = *(s16*)(((char*)src) + 0x2BA);
        *(s16*)(((char*)dst) + 0x2BC) = *(s16*)(((char*)src) + 0x2BC);
        *(s16*)(((char*)dst) + 0x2BE) = *(s16*)(((char*)src) + 0x2BE);
        *(s16*)(((char*)dst) + 0x2C0) = *(s16*)(((char*)src) + 0x2C0);
        *(s16*)(((char*)dst) + 0x2C2) = *(s16*)(((char*)src) + 0x2C2);
        *(s16*)(((char*)dst) + 0x2C4) = *(s16*)(((char*)src) + 0x2C4);
        *(u8*)(((char*)dst) + 0x2C6) = *(u8*)(((char*)src) + 0x2C6);
        *(u8*)(((char*)dst) + 0x2C7) = *(u8*)(((char*)src) + 0x2C7);
        *(u8*)(((char*)dst) + 0x2C8) = *(u8*)(((char*)src) + 0x2C8);
        *(u8*)(((char*)dst) + 0x2C9) = *(u8*)(((char*)src) + 0x2C9);
        *(u8*)(((char*)dst) + 0x2CA) = *(u8*)(((char*)src) + 0x2CA);
        *(u8*)(((char*)dst) + 0x2CB) = *(u8*)(((char*)src) + 0x2CB);
        *(u8*)(((char*)dst) + 0x2CC) = *(u8*)(((char*)src) + 0x2CC);
        *(s16*)(((char*)dst) + 0x2CE) = *(s16*)(((char*)src) + 0x2CE);
        *(u8*)(((char*)dst) + 0x2D6) = *(u8*)(((char*)src) + 0x2D6);
        *(u8*)(((char*)dst) + 0x2D7) = *(u8*)(((char*)src) + 0x2D7);
        *(u8*)(((char*)dst) + 0x2D8) = *(u8*)(((char*)src) + 0x2D8);
        *(u8*)(((char*)dst) + 0x2D9) = *(u8*)(((char*)src) + 0x2D9);
        *(u8*)(((char*)dst) + 0x2DA) = *(u8*)(((char*)src) + 0x2DA);
        *(u8*)(((char*)dst) + 0x2DB) = *(u8*)(((char*)src) + 0x2DB);
        *(u8*)(((char*)dst) + 0x2DC) = *(u8*)(((char*)src) + 0x2DC);
        *(u8*)(((char*)dst) + 0x2DD) = *(u8*)(((char*)src) + 0x2DD);
        *(u8*)(((char*)dst) + 0x2DE) = *(u8*)(((char*)src) + 0x2DE);
    }
    return dst;
}

void fn_801A9EB8(void *arg0) {
    void fn_8003B6F0(void *, s32);
    void fn_8001D580(void *);

    fn_8003B6F0(arg0, 0);
    *(u32*)(((char*)arg0) + 0x280) = 0;
    fn_8001D580(((char*)arg0) + 0x284);
    fn_8001D580(((char*)arg0) + 0x28C);
    *(s8*)(((char*)arg0) + 0x294) = -1;
    *(u8*)(((char*)arg0) + 0x295) = 0;
    *(u8*)(((char*)arg0) + 0x296) = 0;
    *(s16*)(((char*)arg0) + 0x298) = 0;
    *(s16*)(((char*)arg0) + 0x29A) = 0;
    *(s16*)(((char*)arg0) + 0x29C) = 0;
    *(s16*)(((char*)arg0) + 0x29E) = 0;
    *(s16*)(((char*)arg0) + 0x2A0) = 0;
    *(s16*)(((char*)arg0) + 0x2A2) = 0;
    *(s16*)(((char*)arg0) + 0x2A4) = 0;
    *(s16*)(((char*)arg0) + 0x2A6) = 0;
    *(s16*)(((char*)arg0) + 0x2A8) = 0;
    *(s16*)(((char*)arg0) + 0x2AA) = 0;
    *(s16*)(((char*)arg0) + 0x2AC) = 0;
    *(u16*)(((char*)arg0) + 0x2AE) = 0;
    *(u32*)(((char*)arg0) + 0x2B0) = 0;
    *(u8*)(((char*)arg0) + 0x2B4) = 0;
    *(u8*)(((char*)arg0) + 0x2B5) = 0;
    *(u8*)(((char*)arg0) + 0x2B6) = 0;
    *(s16*)(((char*)arg0) + 0x2C2) = 0;
    *(s16*)(((char*)arg0) + 0x2C4) = 0;
    *(u8*)(((char*)arg0) + 0x2C6) = 0;
    *(u8*)(((char*)arg0) + 0x2C7) = 0;
    *(u8*)(((char*)arg0) + 0x2C8) = 0;
    *(u8*)(((char*)arg0) + 0x2C9) = 0;
    *(u8*)(((char*)arg0) + 0x2CA) = 0;
    *(u8*)(((char*)arg0) + 0x2CB) = 0;
    *(u8*)(((char*)arg0) + 0x2CC) = 0;
    *(s16*)(((char*)arg0) + 0x2CE) = 0;
    *(u32*)(((char*)arg0) + 0x2D0) = 0;
    *(u8*)(((char*)arg0) + 0x2D4) = 0;
    *(u8*)(((char*)arg0) + 0x2D5) = 0;
    *(u8*)(((char*)arg0) + 0x2D6) = 0;
    *(u8*)(((char*)arg0) + 0x2DE) = 0;
    *(u8*)(((char*)arg0) + 0x2DD) = 0;
    *(u8*)(((char*)arg0) + 0x2DC) = 0;
    *(u8*)(((char*)arg0) + 0x2DB) = 0;
    *(u8*)(((char*)arg0) + 0x2DA) = 0;
    *(u8*)(((char*)arg0) + 0x2D9) = 0;
    *(u8*)(((char*)arg0) + 0x2D8) = 0;
    *(u8*)(((char*)arg0) + 0x2D7) = 0;
    *(u8*)(((char*)arg0) + 0x2B7) = 0xFF;
    *(u8*)(((char*)arg0) + 0x2B8) = 0xFF;
    *(s16*)(((char*)arg0) + 0x2BA) = -1;
    *(s16*)(((char*)arg0) + 0x2BC) = -1;
    *(s16*)(((char*)arg0) + 0x2BE) = -1;
    *(s16*)(((char*)arg0) + 0x2C0) = -1;
}

s32 fn_801A9FC8(void) {
    return 0;
}

s32 fn_801A9FD0(void) {
    return 0;
}

#pragma optimization_level 1
s32 fn_801A9FD8(void *arg0)
{
    s32 z;
    s32 x;

    x = *(s32 *)((u8 *)arg0 + 0x1A0);
    z = 0;
    x = (x >> 12) & 1;
    return z & ~-x;
}
#pragma optimization_level reset
s32 fn_801A9FF0(void) {
    return 0;
}

s32 fn_801A9FF8(void) {
    return 0;
}

void fn_801AA000(s32 unused, void *arg1) {
    extern u8 lbl_8027B808[];
    void fn_800F3860(void *, void *, s32);

    fn_800F3860(arg1, lbl_8027B808 + 0x1D, 0x1D);
}

s32 fn_801AA034(void) {
    return 0;
}

void fn_801AA03C(s32 unused, s32 arg1) {
    void fn_800F5504(s32, s32);
    fn_800F5504(arg1, 0x15);
}

u8 fn_801AA064(void *arg0, void *arg1, void *arg2) {
    u8 fn_80105BC0(void *, s32);
    extern s32 lbl_80297278[];
    extern u8 lbl_8032B3C0[];
    s32 *entry;
    void (*handler)(void *, void *);
    u8 key;

    key = *(u8 *)((u8 *)arg1 + 0x18);
    if (fn_80105BC0((u8 *)arg0 + 0x1BC, key) != 0) {
        entry = lbl_80297278;
        goto check;
        do {
            if ((s32)key == entry[0]) {
                if (handler == NULL) {
                } else {
                    goto found;
                }
            }
            entry += 2;
        check:
            handler = (void (*)(void *, void *))entry[1];
        } while (handler != NULL);
    }
    entry = NULL;
found:
    if (entry == NULL) {
        return 0;
    }
    ((void (*)(void *, void *))entry[1])(arg0, arg2);
    return lbl_8032B3C0[0x21C];
}

extern u8 lbl_802973C8[16];
void fn_801AA120(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_802973C8[16];
    fn_8000CAA0(lbl_802973C8, arg0);
}

void fn_801AA14C(void *arg0) {
    M2C_UNK fn_800A7EC4();
    M2C_FIELD(arg0, u8 *, 0x30) = (u8) (M2C_FIELD(arg0, u8 *, 0x30) & 0xFE);
    fn_800A7EC4();
}

void fn_801AA178(void *arg0)
{
    void fn_8000BD98(void *);
    extern u8 lbl_8027B838[];

    *(u8 *)((u8 *)arg0 + 0x30) |= 1;
    fn_8000BD98(lbl_8027B838 + 0x2bd);
}

void fn_801AA1B0(void *arg0) {
    M2C_UNK fn_80057A10(s32, M2C_UNK);
    M2C_UNK fn_801AB004(void *);
    M2C_UNK fn_8000C60C(s32);
    M2C_UNK fn_8006EDA0(void *);
    struct Obj {
        u8 pad[0x50];
        u32 field50;
    };
    struct Obj *obj = arg0;

    if (*(u8 *)((u8 *)arg0 + 0x69) == 0) {
        fn_80057A10(*(s32 *)((u8 *)arg0 + 0x54), 1);
        fn_80057A10(*(s32 *)((u8 *)arg0 + 0x58), 1);
        fn_801AB004(arg0);
        fn_8000C60C(*(s32 *)((u8 *)arg0 + 0x6C));
        if (obj->field50 != 0) {
            fn_8006EDA0(&obj->field50);
        }
        *(u8 *)((u8 *)arg0 + 0x69) = 1;
    }
}

void fn_801AAD74(void *arg0)
{
    void fn_801AA228(void *);

    if (*(s16 *)((char *)arg0 + 0x32) == 0) {
    } else {
        fn_801AA228(arg0);
    }
}

#pragma optimization_level 4
#pragma opt_common_subs off
void fn_801AADA4(void *arg0) {
    s32 fn_80059208(void *, void *);
    u16 fn_8005C6A0(char *);
    void fn_8006EEFC(void *, void *);
    void fn_8000C188(void *);
    void fn_801ADA50(void *);
    extern u8 lbl_8027B838[];
    if (fn_8005C6A0((char *)lbl_8027B838 + 0x320) & 0x2000) {
        fn_8006EEFC((char *)arg0 + 0x50, (char *)lbl_8027B838 + 0x320);
        *(s32 *)((char *)arg0 + 0x6C) = fn_80059208(fn_801ADA50, arg0);
        fn_8000C188(arg0);
    }
}

void fn_801AB358(u8 *arg0) {
    extern u8 lbl_80330708[];
    u8 *src = lbl_80330708;
    struct {
        u8 hi : 6;
        u8 mid : 1;
        u8 lo : 1;
    } *bf;

    *(u16 *)(arg0 + 0x5C) = 0;
    arg0[0x5E] = (u8)((src[0x9C] >> 6) & 3);
    if (!((src[0x9F] >> 4) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x4000;
    }
    arg0[0x5F] = (u8)((src[0x9C] >> 5) & 1);
    arg0[0x60] = (u8)((src[0x9C] >> 3) & 3);
    arg0[0x61] = src[0xA0];
    if (!((src[0x9C] >> 2) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 1;
    }
    if (!((src[0x9C] >> 1) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 2;
    }
    if (!(src[0x9C] & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 4;
    }
    arg0[0x62] = (u8)((src[0x9D] >> 6) & 3);
    if (!((src[0x9D] >> 5) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 8;
    }
    if (!((src[0x9D] >> 4) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x10;
    }
    arg0[0x63] = (u8)((src[0x9D] >> 2) & 3);
    if (!((src[0x9D] >> 1) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x20;
    }
    if (!(src[0x9D] & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x40;
    }
    if (!((src[0x9E] >> 7) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x80;
    }
    if (!((src[0x9E] >> 6) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x100;
    }
    if (!((src[0x9E] >> 5) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x200;
    }
    if (!((src[0x9E] >> 4) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x400;
    }
    if (!((src[0x9F] >> 5) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x2000;
    }
    arg0[0x66] = (u8)((src[0x9E] >> 2) & 3);
    arg0[0x67] = src[0xA4];
    arg0[0x68] = src[0xA5];
    if (!((src[0x9E] >> 1) & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x800;
    }
    if (!(src[0x9E] & 1)) {
        *(u16 *)(arg0 + 0x5C) |= 0x1000;
    }
    bf = (void *)&src[0x9E];
    bf->mid = 0;
}

void fn_801AB544(void *arg0) {
    void fn_8000A258(void);
    void fn_8000A248(void);
    u16 **fn_8006EDD8(void *, s32);
    void *fn_8018D900(s32);
    void fn_80009F90(void *, s32, s32);
    void fn_80007898(s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_800075D8(void);
    void fn_80007884(void);
    extern f64 lbl_8036AFE0;
    extern f64 lbl_8036AFC0;
    extern f32 lbl_8036AFC8;
    extern f32 lbl_8036AF9C;
    extern f32 lbl_8036AFA0;
    extern f32 lbl_8036AFCC;
    extern f32 lbl_8036AFD4;
    extern f32 lbl_8036AFD0;
    extern f32 lbl_8036AFD8;
    typedef struct {
        u8 pad[0x31];
        u8 unk31;
        u8 pad32[0x36 - 0x32];
        u8 unk36;
        u8 pad37;
        f32 unk38;
        u8 pad3C[0x50 - 0x3C];
        void *unk50;
    } Obj;
    s32 x;
    Obj *self;
    f32 f30;
    f32 f31;
    u16 *tex;
    u32 col1;
    u32 col0;
    u32 col2;

    self = (Obj *)arg0;
    x = (s32)(lbl_8036AFC8 * (((f32)self->unk36 - self->unk38) / (f32)(self->unk31 - 8)));
    tex = *fn_8006EDD8(self->unk50, 5);
    f30 = (f32)tex[0] * lbl_8036AF9C;
    f31 = (f32)tex[1] * lbl_8036AF9C;
    col0 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 5, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036AFCC, (f32)(x + 0x88), lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036AFCC + f31, (f32)(x + 0x88) + f30, lbl_8036AFA0 + f31, lbl_8036AFA0 + f30);
    fn_800076AC(((u8 *)&col0)[0], ((u8 *)&col0)[1], ((u8 *)&col0)[2], 0xFF);
    fn_800075D8();
    fn_80007884();
    col1 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 6, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036AFCC, (f32)(x + 0x8C), lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036AFD0, (f32)(x + 0x8C) + lbl_8036AFD4, lbl_8036AFD8, lbl_8036AFD4);
    fn_800076AC(((u8 *)&col1)[0], ((u8 *)&col1)[1], ((u8 *)&col1)[2], 0xFF);
    fn_800075D8();
    fn_80007884();
    tex = *fn_8006EDD8(self->unk50, 7);
    f30 = (f32)tex[0] * lbl_8036AF9C;
    f31 = (f32)tex[1] * lbl_8036AF9C;
    col2 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 7, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036AFCC, (f32)(x + 0xCA), lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036AFCC + f31, (f32)(x + 0xCA) + f30, lbl_8036AFA0 + f31, lbl_8036AFA0 + f30);
    fn_800076AC(((u8 *)&col2)[0], ((u8 *)&col2)[1], ((u8 *)&col2)[2], 0xFF);
    fn_800075D8();
    fn_80007884();
}

void fn_801ACF4C(void *arg0) {
    extern u8 lbl_80368220;
    extern u16 lbl_80368224;
    extern f32 lbl_8036AFA0;
    extern f32 lbl_8036B028;
    extern u8 lbl_802972C0[];
    extern f64 lbl_8036AFC0;
    extern f32 lbl_8036B030;
    extern f32 lbl_8036B01C;
    extern f32 lbl_8036B02C;
    extern void fn_801ADD58;
    
    s32 var_r30;
    f32 temp_f3;
    f32 var_f1;
    f32 var_f2;
    u16 *temp_r4_ptr;
    s32 temp_r4;
    
    if ((s8) lbl_80368220 == 0) {
        lbl_80368220 = 1;
    }
    temp_r4_ptr = &lbl_80368224;
    lbl_80368224 = 0x30;
    temp_r4_ptr[1] = 0x80;
    temp_r4_ptr[2] = 0x208;
    temp_r4_ptr[3] = 0xFE;
    var_f1 = lbl_8036AFA0;
    var_f2 = *(f32*)((char*)arg0 + 0x38);
    if (var_f2 > var_f1) {
        *(f32*)((char*)arg0 + 0x38) = var_f2 - lbl_8036B028;
        if (*(f32*)((char*)arg0 + 0x38) < var_f1) {
            *(f32*)((char*)arg0 + 0x38) = var_f1;
        }
    }
    var_f2 = *(f32*)((char*)arg0 + 0x38);
    var_f1 = lbl_8036AFA0;
    if (var_f2 < var_f1) {
        *(f32*)((char*)arg0 + 0x38) = var_f2 + lbl_8036B028;
        if (*(f32*)((char*)arg0 + 0x38) > var_f1) {
            *(f32*)((char*)arg0 + 0x38) = var_f1;
        }
    }
    fn_8000A258();
    fn_80009BC0(&fn_801ADD58, &lbl_80368224);
    fn_8000A248();
    var_r30 = 0;
    do {
        temp_r4 = var_r30 - 1;
        temp_r4 = *(u8*)((char*)arg0 + 0x36) + temp_r4;
        if ((temp_r4 >= 0) && (temp_r4 < *(u8*)((char*)arg0 + 0x31)) && (*(u8*)(lbl_802972C0 + (temp_r4 * 0xC)) == 1)) {
            temp_f3 = *(f32*)((char*)arg0 + 0x38);
            fn_801AB8A8(arg0, lbl_8036B02C, (lbl_8036B030 * temp_f3) + ((lbl_8036B030 * (f32) var_r30) + lbl_8036B01C), temp_f3, lbl_8036B030);
        }
        var_r30 += 1;
    } while (var_r30 < 0xA);
    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
}

void fn_801AD0B0(void *arg0) {
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    u16 **fn_8006EDD8(void *, s32);
    void *fn_8018D900(s32);
    void fn_80009F90(void *, s32, s32);
    void fn_80007898(s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_800075D8(void);
    void fn_80007884(void);
    void fn_801ACF4C(void *);
    void fn_801AB544(void *);
    extern f32 lbl_8036AF98, lbl_8036AF9C, lbl_8036AFA0, lbl_8036B004;
    extern f32 lbl_8036B030, lbl_8036B034, lbl_8036B038, lbl_8036B03C;
    extern f32 lbl_8036B040, lbl_8036B044, lbl_8036B048, lbl_8036B04C;
    extern f32 lbl_8036B050, lbl_8036B054, lbl_8036B058, lbl_8036B05C;
    extern f32 lbl_8036B060, lbl_8036B064, lbl_8036B068, lbl_8036B06C;
    extern f32 lbl_8036B070, lbl_8036B074, lbl_8036B078, lbl_8036B07C, lbl_8036B080;

    typedef struct { u8 pad[0x50]; void *unk50; } Obj;
    u32 col2;
    u32 col5;
    u32 col7;
    u32 col8;
    u32 col0;
    u32 col1;
    u32 col3;
    u32 col4;
    u32 col6;
    Obj *self;
    u16 *tex;
    f32 f30;
    f32 f31;

    self = (Obj *)arg0;
    fn_8000A258();
    fn_80009C0C(lbl_8036AF98);
    fn_8000A248();
    tex = *fn_8006EDD8(self->unk50, 4);
    f30 = (f32)tex[0] * lbl_8036AF9C;
    f31 = (f32)tex[1] * lbl_8036AF9C;
    col0 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 4, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B030, lbl_8036B034, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B030 + f31, lbl_8036B034 + f30, lbl_8036AFA0 + f31, lbl_8036AFA0 + f30);
    fn_800076AC(((u8 *)&col0)[0], ((u8 *)&col0)[1], ((u8 *)&col0)[2], 0xDF);
    fn_800075D8();
    fn_80007884();

    fn_8000A258();
    fn_80009C0C(lbl_8036AF98);
    fn_8000A248();
    tex = *fn_8006EDD8(self->unk50, 8);
    f31 = (f32)tex[0] * lbl_8036AF9C;
    f30 = (f32)tex[1] * lbl_8036AF9C;
    col1 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 8, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B030, lbl_8036B038, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B030 + f30, lbl_8036B038 + f31, lbl_8036AFA0 + f30, lbl_8036AFA0 + f31);
    fn_800076AC(((u8 *)&col1)[0], ((u8 *)&col1)[1], ((u8 *)&col1)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    col2 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 9, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B03C, lbl_8036B034, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B040, lbl_8036B044, lbl_8036B048, lbl_8036B004);
    fn_800076AC(((u8 *)&col2)[0], ((u8 *)&col2)[1], ((u8 *)&col2)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = *fn_8006EDD8(self->unk50, 0xA);
    f31 = (f32)tex[0] * lbl_8036AF9C;
    f30 = (f32)tex[1] * lbl_8036AF9C;
    col3 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 0xA, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B040, lbl_8036B034, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B040 + f30, lbl_8036B034 + f31, lbl_8036AFA0 + f30, lbl_8036AFA0 + f31);
    fn_800076AC(((u8 *)&col3)[0], ((u8 *)&col3)[1], ((u8 *)&col3)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = *fn_8006EDD8(self->unk50, 0xD);
    f31 = (f32)tex[0] * lbl_8036AF9C;
    f30 = (f32)tex[1] * lbl_8036AF9C;
    col4 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 0xD, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B04C, lbl_8036B050, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B04C + f30, lbl_8036B050 + f31, lbl_8036AFA0 + f30, lbl_8036AFA0 + f31);
    fn_800076AC(((u8 *)&col4)[0], ((u8 *)&col4)[1], ((u8 *)&col4)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    col5 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 0xE, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B054, lbl_8036B058, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B05C, lbl_8036B060, lbl_8036B064, lbl_8036B004);
    fn_800076AC(((u8 *)&col5)[0], ((u8 *)&col5)[1], ((u8 *)&col5)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    tex = *fn_8006EDD8(self->unk50, 0xF);
    f31 = (f32)tex[0] * lbl_8036AF9C;
    f30 = (f32)tex[1] * lbl_8036AF9C;
    col6 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 0xF, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B05C, lbl_8036B050, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B05C + f30, lbl_8036B050 + f31, lbl_8036AFA0 + f30, lbl_8036AFA0 + f31);
    fn_800076AC(((u8 *)&col6)[0], ((u8 *)&col6)[1], ((u8 *)&col6)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    col7 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 0xB, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B030, lbl_8036B068, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B06C, lbl_8036B070, lbl_8036B004, lbl_8036B074);
    fn_800076AC(((u8 *)&col7)[0], ((u8 *)&col7)[1], ((u8 *)&col7)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    col8 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 0xC, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B078, lbl_8036B068, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B07C, lbl_8036B070, lbl_8036B004, lbl_8036B074);
    fn_800076AC(((u8 *)&col8)[0], ((u8 *)&col8)[1], ((u8 *)&col8)[2], 0xFF);
    fn_800075D8();
    fn_80007884();

    fn_801ACF4C(self);
    fn_801AB544(self);
    fn_8000A258();
    fn_80009C0C(lbl_8036B080);
    fn_8000A248();
}

void fn_801AD704(void *arg0) {
    void fn_8000A258(void);
    void fn_80009C0C(f32);
    void fn_8000A248(void);
    u16 **fn_8006EDD8(void *, s32);
    void *fn_8018D900(s32);
    void fn_80009F90(void *, s32, s32);
    void fn_80007898(s32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_800076AC(u8, u8, u8, s32);
    void fn_800075D8(void);
    void fn_80007884(void);
    void fn_8000A174(s32, s32);
    void *fn_8000E0E4(void *);
    void fn_8001003C(s32, s32, s32, s32, s32, ...);
    extern f32 lbl_8036B084;
    extern f64 lbl_8036AFE0;
    extern f32 lbl_8036AF9C;
    extern f32 lbl_8036AFA0;
    extern f32 lbl_8036B088;
    extern f32 lbl_8036AFEC;
    extern f32 lbl_8036B080;
    extern f32 lbl_8036AF98;
    extern f32 lbl_8036B08C;
    extern f32 lbl_8036B090;
    typedef struct {
        u8 pad[0x3C];
        u8 unk3C;
        u8 pad3D[0x50 - 0x3D];
        void *unk50;
    } Obj;
    typedef struct {
        u8 pad[8];
        void *ptr;
    } Row;
    extern Row lbl_802972C0[];
    Obj *self;
    f32 f30;
    f32 f31;
    u16 *tex;
    u32 col0;
    u32 col1;
    u32 col2;
    f32 t;
    void *str;

    self = (Obj *)arg0;
    fn_8000A258();
    fn_80009C0C(lbl_8036B084);
    fn_8000A248();
    tex = *fn_8006EDD8(self->unk50, 0);
    f30 = (f32)tex[0] * lbl_8036AF9C;
    f31 = (f32)tex[1] * lbl_8036AF9C;
    col0 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 0, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B088, lbl_8036AFEC, lbl_8036AFA0, lbl_8036AFA0);
    fn_80007818(lbl_8036B088 + f31, lbl_8036AFEC + f30, lbl_8036AFA0 + f31, lbl_8036AFA0 + f30);
    fn_800076AC(((u8 *)&col0)[0], ((u8 *)&col0)[1], ((u8 *)&col0)[2], 0xFF);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036B080);
    fn_8000A248();
    fn_8000A258();
    fn_80009C0C(lbl_8036AF98);
    fn_8000A248();
    tex = *fn_8006EDD8(self->unk50, 1);
    f30 = (f32)tex[0] * lbl_8036AF9C;
    f31 = (f32)tex[1] * lbl_8036AF9C;
    col1 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 1, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036AFA0, lbl_8036B08C, lbl_8036AFA0, lbl_8036AFA0);
    t = lbl_8036AFA0 + f31;
    fn_80007818(t, lbl_8036B08C + f30, t, lbl_8036AFA0 + f30);
    fn_800076AC(((u8 *)&col1)[0], ((u8 *)&col1)[1], ((u8 *)&col1)[2], 0xFF);
    fn_800075D8();
    fn_80007884();
    tex = *fn_8006EDD8(self->unk50, 1);
    f30 = (f32)tex[0] * lbl_8036AF9C;
    f31 = (f32)tex[1] * lbl_8036AF9C;
    col2 = *(u32 *)fn_8018D900(1);
    fn_8000A258();
    fn_80009F90(self->unk50, 1, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_80007838(lbl_8036B090, lbl_8036B08C, lbl_8036AFA0 + f31, lbl_8036AFA0);
    fn_80007818(lbl_8036B090 + f31, lbl_8036B08C + f30, lbl_8036AFA0, lbl_8036AFA0 + f30);
    fn_800076AC(((u8 *)&col2)[0], ((u8 *)&col2)[1], ((u8 *)&col2)[2], 0xFF);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_8036AF98);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
    str = fn_8000E0E4(lbl_802972C0[self->unk3C].ptr);
    fn_8001003C(0x64, 0x3D, 2, 0, 0, str, lbl_8036AF9C, lbl_8036AFA0);
    fn_8000A258();
    fn_80009C0C(lbl_8036B080);
    fn_8000A248();
}

void fn_801ADA50(void *arg0) {
    void fn_8000A258(void);
    void fn_80009B8C(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A248(void);
    void fn_801AD704(void *);
    void fn_801AD0B0(void *);
    void *fn_8000E0E4(void *);
    void fn_80234450(void *, void *);
    void fn_802343E0(void *, void *);
    void fn_8007CB3C(void *, s32);
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80009C0C(f32);
    void fn_8008BF68(s32, s32, s32);
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    void fn_80057E64(void *, s32);
    void fn_80057AE0(void *);
    extern f32 lbl_8036B094;
    extern f32 lbl_8036B098;
    extern f32 lbl_8036AFA0;
    extern f32 lbl_8036AFFC;
    extern f32 lbl_8036AF9C;
    extern u8 lbl_8027B838[];
    extern f64 lbl_8036AFC0;
    extern f32 lbl_8036AFA8;
    extern f32 lbl_8036AFAC;
    extern f32 lbl_8036AFB0;
    extern f32 lbl_8036AFB4;
    extern f32 lbl_8036AFB8;
    typedef struct {
        u8 pad30[0x30];
        u8 unk30;
        u8 unk31;
        u8 pad32[0x36 - 0x32];
        u8 unk36;
        u8 pad37[0x3D - 0x37];
        u8 unk3D;
        u8 pad3E[0x40 - 0x3E];
        f32 unk40;
        s16 unk44;
        s16 unk46;
        s16 unk48;
        s16 unk4A;
        s16 unk4C;
        s16 unk4E;
        u8 pad50[0x54 - 0x50];
        void *unk54;
        void *unk58;
    } Obj;
    Obj *self;
    s32 t;
    char sp8[0x80];
    f32 f1;
    f32 a;
    f32 b;
    f32 lim;
    s16 x0, x1;

    self = (Obj *)arg0;
    if (!(self->unk30 & 1)) {
        a = self->unk40;
        b = lbl_8036B094;
        lim = lbl_8036B098;
        self->unk40 = a + b;
        f1 = self->unk40;
        if (f1 >= lim) {
            self->unk40 = f1 - lim;
        }
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_80009D74(lbl_8036AFA0, lbl_8036AFA0, lbl_8036AFFC, lbl_8036AF9C);
        fn_8000A248();
        fn_801AD704(self);
        fn_801AD0B0(self);
        fn_80234450(sp8, fn_8000E0E4(lbl_8027B838 + 0x336));
        fn_802343E0(sp8, lbl_8027B838 + 0x346);
        fn_802343E0(sp8, fn_8000E0E4(lbl_8027B838 + 0x349));
        fn_802343E0(sp8, lbl_8027B838 + 0x346);
        fn_802343E0(sp8, fn_8000E0E4(lbl_8027B838 + 0x35C));
        fn_8007CB3C(sp8, 0);
        if (self->unk3D != 0) {
            self->unk3D -= 1;
            x0 = self->unk48;
            x1 = self->unk4C;
            t = 4 - self->unk3D;
            self->unk44 = (s16)fn_800067BC(4, (f32)x0, (f32)x1, (f32)t, lbl_8036AFA8);
            x0 = self->unk4A;
            x1 = self->unk4E;
            self->unk46 = (s16)fn_800067BC(4, (f32)x0, (f32)x1, (f32)t, lbl_8036AFA8);
        }
        fn_8000A258();
        fn_80009C0C(lbl_8036AFAC);
        fn_8000A248();
        fn_8008BF68(self->unk44 + 0x1C, self->unk46 + 3, 1);
        fn_8000A258();
        fn_80009C0C(lbl_8036AFB0);
        fn_8000A248();
        fn_8000A258();
        fn_80009C0C(lbl_8036AFB4);
        fn_8000A248();
        fn_8008AB7C(self->unk44 + 0x91, self->unk46 + 0xD, 0xE6, 0x18, 0x19, 0x4B, 1);
        fn_8000A258();
        fn_80009C0C(lbl_8036AFB8);
        fn_8000A248();
        if (self->unk36 == 0) {
            fn_80057E64(self->unk54, 0);
        } else {
            fn_80057E64(self->unk54, 1);
        }
        if (self->unk36 == (self->unk31 - 8)) {
            fn_80057E64(self->unk58, 0);
        } else {
            fn_80057E64(self->unk58, 1);
        }
        fn_80057AE0(self->unk54);
        fn_80057AE0(self->unk58);
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}

void fn_801ADD58(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

#pragma cplusplus on
extern "C" void fn_801ADD8C(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6() = 0;
    };
    ((Obj *)arg0)->v6();
}

extern "C" void fn_801ADDB8(void *arg0) {
    extern u8 lbl_8027BC88[];
    extern void *lbl_80367240;
    void fn_801475FC(void *, s32);
    extern s32 lbl_80367110;
    u8 var_r3;
    s16 temp_r31;
    s32 temp_r4;
    s32 temp_r5;
    s16 var_r3_2;
    s32 temp_r5_2;
    s16 temp_r0;

    var_r3 = 0;
    if ((lbl_80367110 & 0x10) && !(lbl_80367110 & 0x20)) {
        var_r3 = 1;
    }
    if (var_r3 == 0) {
        temp_r0 = *(s16 *)((char *)arg0 + 0x3E);
        temp_r5 = *(s32 *)((char *)lbl_80367240 + 4);
        temp_r4 = *(s32 *)((char *)lbl_80367240 + 0xC);
        temp_r31 = *(s16 *)((char *)arg0 + 0x40);
        temp_r5_2 = temp_r5 & (*(s32 *)((char *)lbl_80367240 + 8) ^ temp_r5);
        switch (temp_r0) {
        case 0:
            if (temp_r5_2 & 0x04000004) {
                var_r3_2 = 2;
                if (temp_r31 < 4) {
                    var_r3_2 = 1;
                }
                *(s16 *)((char *)arg0 + 0x3E) = var_r3_2;
            } else if (temp_r4 & 0x01000001) {
                if ((temp_r31 == 0) && (temp_r4 == temp_r5_2)) {
                    *(s16 *)((char *)arg0 + 0x40) = 7;
                } else if (0 < temp_r31) {
                    *(s16 *)((char *)arg0 + 0x40) = *(s16 *)((char *)arg0 + 0x40) - 1;
                }
            } else if (temp_r4 & 0x02000002) {
                if ((temp_r31 == 7) && (temp_r4 == temp_r5_2)) {
                    *(s16 *)((char *)arg0 + 0x40) = 0;
                } else if (temp_r31 < 7) {
                    *(s16 *)((char *)arg0 + 0x40) = *(s16 *)((char *)arg0 + 0x40) + 1;
                }
            }
            break;
        case 1:
            if (temp_r5_2 & 0x02000002) {
                *(s16 *)((char *)arg0 + 0x3E) = 2;
            } else if (temp_r5_2 & 0x08000008) {
                *(s16 *)((char *)arg0 + 0x3E) = 0;
                if (*(s16 *)((char *)arg0 + 0x40) < 0) {
                    *(s16 *)((char *)arg0 + 0x40) = 0;
                }
            }
            break;
        case 2:
            if (temp_r5_2 & 0x01000001) {
                *(s16 *)((char *)arg0 + 0x3E) = 1;
            } else if (temp_r5_2 & 0x08000008) {
                *(s16 *)((char *)arg0 + 0x3E) = 0;
                if (*(s16 *)((char *)arg0 + 0x40) < 0) {
                    *(s16 *)((char *)arg0 + 0x40) = 0;
                }
            }
            break;
        }
        if (temp_r0 != *(s16 *)((char *)arg0 + 0x3E)) {
            fn_801475FC((u8 *)lbl_8027BC88 + 0x39, 0x64);
        }
        if (temp_r31 != *(s16 *)((char *)arg0 + 0x40)) {
            fn_801475FC((u8 *)lbl_8027BC88 + 0x55, 0x64);
        }
    }
}

#pragma cplusplus reset
void fn_801ADFCC(void *arg0, void *arg1) {
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r4;
    s32 temp_r3;
    
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s8 *, 9) = 0;
        M2C_FIELD(arg1, s8 *, 8) = 0;
        M2C_FIELD(arg1, s8 *, 7) = 0;
        M2C_FIELD(arg1, s8 *, 6) = 0;
        M2C_FIELD(arg1, s8 *, 5) = 0;
        M2C_FIELD(arg1, s8 *, 4) = 0;
        M2C_FIELD(arg1, s8 *, 3) = 0;
        M2C_FIELD(arg1, s8 *, 2) = 0;
        M2C_FIELD(arg1, s8 *, 1) = 0;
        M2C_FIELD(arg1, s8 *, 0) = 0;
        
        if (arg0 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                M2C_FIELD(arg1, void **, 0x14) = M2C_FIELD(arg0, void **, 0x14);
            }
            
            // Process some values based on data from arg0
            temp_r3 = M2C_FIELD(arg0, s16 *, 0x40); // r3 = (u16) *(arg0 + 0x40)
            temp_r4 = temp_r3 * 0x1a;
            temp_r4 += 0x1b;
            temp_r29 = temp_r4;
            temp_r29 = (s16)temp_r29; // extsh
            
            if (M2C_FIELD(arg0, s16 *, 0x42) >= 0) {
                // If 0x42 field >= 0
                temp_r28 = temp_r29;
                temp_r29 = 0x10;
                M2C_FIELD(arg1, s16 *, 0x42) = temp_r29;
                M2C_FIELD(arg1, s16 *, 0x44) = temp_r28;
            } else {
                // If 0x42 field < 0
                if (M2C_FIELD(arg0, s16 *, 0x40) != 0) {
                    temp_r3 = M2C_FIELD(arg0, s16 *, 0x44); // Get r3 from 0x44
                
                    // Calculate new values for attributes
                    temp_r29 += 1; // r29 += 1;
                    temp_r29 >> 1; // r29 = r29 >> 1;
                    
                    temp_r28 += 1; // r28 += 1;
                    temp_r28 >> 1; // r28 = r28 >> 1;
                    
                    M2C_FIELD(arg1, s16 *, 0x42) = temp_r29;
                    M2C_FIELD(arg1, s16 *, 0x44) = temp_r28;
                }
            }
            
            // Handle more attribute values
            if (M2C_FIELD(arg1, u8 *, 0x3c) != 0) {
                temp_r3 = M2C_FIELD(arg1, u8 *, 0x2d); 
                if (temp_r3 == 0) {
                    temp_r3 = M2C_FIELD(arg1, u8 *, 0x2e);
                    if (temp_r3 != 0) {
                        temp_r4 = 0;
                        temp_r3 = 1; 
                        goto label_0x638c;
                    } else {
                        temp_r3 = 0;
                        temp_r4 = 0;
                        goto label_0x638c;
                    }
                }
            }
            temp_r4 = M2C_FIELD(arg1, s32 *, 0x34);
            if (temp_r4 == 0) {
                temp_r4 = 1;
            } else {
                temp_r3 = M2C_FIELD(arg1, s32 *, 0x38); 
                temp_r3 = *(s32*)((u8*)arg1 + 0x8);
            }
        label_0x638c:
            // Handle the return value
            if (temp_r4 != 0) {
                temp_r3 = 0;
            }
        }
    }
}

#pragma cplusplus on
extern "C" void fn_801AE154(void *arg0) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
    };
    void fn_80152548(s32, s32, s32);
    void fn_801527B0(s32, s32, s32);
    void fn_8015267C(s32, s32, s32);

    ((Obj *)arg0)->v3();
    fn_80152548(0x16, 0x10, 0x10);
    fn_801527B0(0x1C, 0x40, 0x10);
    fn_8015267C(0x88, 0x40, 0x10);
}
#pragma cplusplus reset
void fn_801AE1B0(s32 *arg0, void *arg1) {
    s32 *fn_8013F748(void *, M2C_UNK *, s16 *);
    M2C_UNK spC;
    s16 sp8[2];
    s16 a;
    s16 b;

    switch (*(s16 *)((u8 *)arg1 + 0x3E)) {
    case 0:
        a = *(s16 *)((u8 *)arg1 + 0x40) * 0x1A + 0x28;
        b = 0x18;
        break;
    case 1:
        a = 0x24;
        b = 0x50;
        break;
    case 2:
        a = 0x90;
        b = 0x50;
        break;
    }
    sp8[0] = a;
    sp8[1] = b;
    *arg0 = *(s32 *)fn_8013F748(arg1, &spC, sp8);
}

s32 fn_801AE24C(void *arg0) {
    extern s32 lbl_80297590[];
    return lbl_80297590[M2C_FIELD(arg0, s16 *, 0x3E)];
}

void *fn_801AE264(void *arg0, s16 arg1) {
    void fn_800C428C(void *);
    extern void *lbl_8029759C[];
    extern void *lbl_80292230[];
    extern void *lbl_8028FDB0[];

    if (arg0 != NULL) {
        *(void **)arg0 = lbl_8029759C;
        if (arg0 != NULL) {
            *(void **)arg0 = lbl_80292230;
            if (arg0 != NULL) {
                *(void **)arg0 = lbl_8028FDB0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801AE2D0(void) {

}
#include "common.h"
extern u16 lbl_80367218;
