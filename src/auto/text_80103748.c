/* Functions from 0x80103748 to 0x80105504, found by decomp-toolkit. */
#include "common.h"
#include "global.h"
#include "unit.h"

extern u32 lbl_802A66D8[];

void fn_80105D4C(void *, u8);

s32 fn_80103748(void) {
    return 0x21;
}

void *fn_80103750(void) {
    extern u16 lbl_802734D0[29];
    return &lbl_802734D0[0x56/2];
}

void *fn_801037A0(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0xa3;
}

s32 fn_801037B0(void) {
    M2C_UNK fn_80105D4C(void *, u8);
    extern M2C_UNK lbl_80330708;
    u8 var_r30;

    var_r30 = 0;
    do {
        fn_80105D4C(&lbl_80330708 + 0x74, var_r30);
        var_r30 += 1;
    } while ((s32) var_r30 < 0x40);
    return 6;
}

void *fn_80103808(void) {
    extern u16 lbl_802734D0[];
    return &lbl_802734D0[0xB8 / 2];
}

s32 fn_80103818(void) {
    return 0;
}

s32 fn_80103820(void) {
    s32 fn_8000BCA4(void *);
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    M2C_UNK fn_80024398(M2C_UNK *, s32, M2C_UNK);
    M2C_UNK fn_800A8400();
    extern M2C_UNK lbl_802734D0;
    extern M2C_UNK lbl_802845E8;
    extern M2C_UNK lbl_8028EAD8;
    extern M2C_UNK lbl_8028ED04;
    extern M2C_UNK lbl_8028ED80;
    extern M2C_UNK lbl_8028EDD4;
    extern M2C_UNK lbl_8028EE28;
    extern u8 lbl_80367964;
    extern M2C_UNK *lbl_80367968;
    extern u8 lbl_8036796C;
    extern M2C_UNK *lbl_80367970;
    extern u8 lbl_80367974;
    extern M2C_UNK *lbl_80367978;
    extern u8 lbl_8036797C;
    extern M2C_UNK lbl_80367980;
    s32 temp_r31;

    temp_r31 = fn_8000BCA4(&lbl_802734D0 + 0xC4);
    fn_800A8400();
    fn_8000C070(temp_r31, 0);
    if ((s8) lbl_80367964 == 0) {
        lbl_80367964 = 1;
        lbl_80367968 = &lbl_8028EE28;
    }
    if ((s8) lbl_8036796C == 0) {
        lbl_8036796C = 1;
        lbl_80367970 = &lbl_8028EDD4;
    }
    if ((s8) lbl_80367974 == 0) {
        lbl_80367974 = 1;
        lbl_80367978 = &lbl_8028ED80;
    }
    if ((s8) lbl_8036797C == 0) {
        M2C_FIELD(&lbl_80367980, M2C_UNK **, 4) = &lbl_802845E8;
        M2C_FIELD(&lbl_80367980, M2C_UNK **, 0) = &lbl_8028EAD8;
        M2C_FIELD(&lbl_80367980, M2C_UNK **, 4) = &lbl_8028ED04;
        lbl_8036797C = 1;
    }
    fn_80024398(&lbl_80367980, temp_r31, 0);
    return 6;
}

s32 fn_80103918(void) {
    return 0x20;
}

s32 fn_80103920(void) {
    return 0x108;
}

s32 fn_80103928(void) {
    return 0x20;
}

s32 fn_80103930(void) {
    return 0xAC;
}

s32 fn_80103938(void) {
    return 0xA0;
}

void *fn_80103940(void) {
    extern char lbl_802734D0[];
    return &lbl_802734D0[0xCF];
}

s32 fn_80103950(void) {
    return 0;
}

void *fn_80103958(void) {
    extern u16 lbl_802734D0[];
    return &lbl_802734D0[0xF4 / 2];
}

s32 fn_80103968(void) {
    return 0;
}

void *fn_80103970(void) {
    extern char lbl_802734D0[];
    return &lbl_802734D0[0x119];
}

s32 fn_80103980(void) {
    return 0;
}

void *fn_80103988(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x138;
}

s32 fn_80103998(void) {
    return 0;
}

void *fn_80103A5C(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x142;
}

s32 fn_80103A6C(void) {
    return 0;
}

s32 fn_80103A74(void) {
    s32 fn_8000BCA4(void *);
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    M2C_UNK fn_800A8400();
    M2C_UNK fn_800C93EC(M2C_UNK *);
    M2C_UNK fn_800C992C(M2C_UNK *, void *, s32);
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800C9ABC(M2C_UNK *, void *, M2C_UNK *);
    M2C_UNK fn_801EAABC(s32);
    s32 strlen(void *);
    extern u8 lbl_802734D0[];
    extern u8 lbl_80330708[];

    s32 temp_r30;
    M2C_UNK spC;
    M2C_UNK sp8;

    temp_r30 = fn_8000BCA4(lbl_802734D0 + 0xC4);
    fn_800C9ABC(&spC, lbl_80330708 + 0x504, &sp8);
    fn_800C992C(&spC, lbl_802734D0 + 0x157, strlen(lbl_802734D0 + 0x157));
    fn_800A8400();
    fn_8000C070(temp_r30, 0);
    fn_800C93EC(&spC);
    fn_801EAABC(temp_r30);
    fn_800C9A60(&spC, -1);
    return 6;
}

void *fn_80103B20(void) {
    extern u16 lbl_802734D0[];
    return (char*)&lbl_802734D0[0x161] + 0x0;
}

s32 fn_80103B30(void) {
    return 0;
}

s32 fn_80103B38(void) {
    s32 fn_8000BCA4(void *);
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    M2C_UNK fn_800A8400();
    M2C_UNK fn_8011AC78(s32);
    extern u16 lbl_802734D0;

    s32 temp_r31;
    void *temp_r3;

    temp_r3 = &lbl_802734D0 + 0x188;
    temp_r31 = fn_8000BCA4(temp_r3);
    fn_800A8400();
    fn_8000C070(temp_r31, 0);
    fn_8011AC78(temp_r31);
    return 6;
}

void *fn_80103B8C(void) {
    extern M2C_UNK lbl_802734D0;
    return (char *) &lbl_802734D0 + 0x167;
}

s32 fn_80103B9C(void) {
    return 0;
}

s32 fn_80103BA4(void) {
    s32 fn_8000BCA4(void *);
    M2C_UNK fn_8000C070(s32, M2C_UNK);
    M2C_UNK fn_8000CAA0(M2C_UNK *, s32);
    M2C_UNK fn_800A8400();
    extern M2C_UNK lbl_802734D0;
    extern M2C_UNK lbl_8028EB50;
    
    void *temp_r3 = (char *) &lbl_802734D0 + 0xC4;
    s32 temp_r31 = fn_8000BCA4(temp_r3);
    if (temp_r31 != 0) {
        fn_800A8400();
        fn_8000C070(temp_r31, 0);
    }
    fn_8000CAA0(&lbl_8028EB50, temp_r31);
    return 6;
}

void *fn_80103C04(void) {
    extern u16 lbl_802734D0[];
    return (char*)&lbl_802734D0[0x17B] + 0x5EC;
}

s32 fn_80103C14(void) {
    return 0;
}

void *fn_80103C7C(void) {
    extern u16 lbl_802734D0[];
    return (u8 *)lbl_802734D0 + 0x18c;
}

s32 fn_80103C8C(void) {
    return 0;
}

void *fn_80103CF4(void) {
    extern u8 lbl_802734D0[];
    return &lbl_802734D0[0x191];
}

s32 fn_80103D04(void) {
    return 0;
}

void *fn_80103D64(void) {
    extern u16 lbl_802734D0[];
    return (void *)&lbl_802734D0[0x348];
}

s32 fn_80103D74(void) {
    return 0;
}

s32 fn_80103D7C(void) {
    M2C_UNK fn_800C3AB0(M2C_UNK *, void *);
    s32 fn_800C3D48(M2C_UNK *);
    extern M2C_UNK lbl_802734D0;
    extern M2C_UNK lbl_803200AC;
loop_2:
    if (fn_800C3D48(&lbl_803200AC) >= 0) {
        fn_800C3AB0(&lbl_803200AC, &lbl_802734D0 + 0x1B1);
        goto loop_2;
    }
    return 6;
}

s32 fn_80103E30(void) {
    return 0;
}

void *fn_80103E38(void) {
    extern u16 lbl_802734D0[];
    void *ptr = &lbl_802734D0[0x398];
    return ptr;
}

s32 fn_80103E48(void) {
    return 0;
}

s32 fn_80103EA4(void *arg1) {
    extern u32 *lbl_80367240;
    extern f64 lbl_8036A0E0;
    void *temp_r6;

    temp_r6 = M2C_FIELD(arg1, void **, 0x3C);
    if ((M2C_FIELD(temp_r6, u16 *, 0x10) != 0) && ((u16) M2C_FIELD(temp_r6, u16 *, 0x12) < 0xFCU) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x01000001)) {
        M2C_FIELD(temp_r6, u16 *, 0x10) = (u16) (M2C_FIELD(temp_r6, u16 *, 0x10) - 1);
        M2C_FIELD(temp_r6, u16 *, 0x12) = (u16) (M2C_FIELD(temp_r6, u16 *, 0x12) + 1);
        M2C_FIELD(temp_r6, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(temp_r6, u16 *, 0x10) / M2C_FIELD(temp_r6, f32 *, 8));
        M2C_FIELD(temp_r6, s8 *, 0x1B) = 1;
    } else if ((M2C_FIELD(temp_r6, u16 *, 0x10) < 0xC0U) && ((u16) M2C_FIELD(temp_r6, u16 *, 0x12) != 0) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x02000002)) {
        M2C_FIELD(temp_r6, u16 *, 0x10) = (u16) (M2C_FIELD(temp_r6, u16 *, 0x10) + 1);
        M2C_FIELD(temp_r6, u16 *, 0x12) = (u16) (M2C_FIELD(temp_r6, u16 *, 0x12) - 1);
        M2C_FIELD(temp_r6, f32 *, 0xC) = (f32) ((f32) M2C_FIELD(temp_r6, u16 *, 0x10) / M2C_FIELD(temp_r6, f32 *, 8));
        M2C_FIELD(temp_r6, s8 *, 0x1B) = 1;
    }
    return 0;
}

s32 fn_80103FF8(void *arg1) {
    extern void *lbl_80367240;
    extern f32 lbl_8036A0EC;
    extern f32 lbl_8036A0F0;
    f32 temp_f1;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg1, void **, 0x3C);
    temp_f1 = M2C_FIELD(temp_r5, f32 *, 8);
    if ((temp_f1 > lbl_8036A0EC) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x01000001)) {
        M2C_FIELD(temp_r5, f32 *, 8) = (f32) (temp_f1 - lbl_8036A0F0);
        M2C_FIELD(temp_r5, s16 *, 0x10) = (s16) (M2C_FIELD(temp_r5, f32 *, 8) * M2C_FIELD(temp_r5, f32 *, 0xC));
        M2C_FIELD(temp_r5, s16 *, 0x12) = (s16) (M2C_FIELD(temp_r5, f32 *, 8) - (f32) (u16) M2C_FIELD(temp_r5, s16 *, 0x10));
        M2C_FIELD(temp_r5, s8 *, 0x1B) = 1;
    } else if (((u16) M2C_FIELD(temp_r5, s16 *, 0x10) < 0xC0U) && ((u16) M2C_FIELD(temp_r5, s16 *, 0x12) < 0x100U) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x02000002)) {
        M2C_FIELD(temp_r5, f32 *, 8) = (f32) (M2C_FIELD(temp_r5, f32 *, 8) + lbl_8036A0F0);
        M2C_FIELD(temp_r5, s16 *, 0x10) = (s16) (M2C_FIELD(temp_r5, f32 *, 8) * M2C_FIELD(temp_r5, f32 *, 0xC));
        M2C_FIELD(temp_r5, s16 *, 0x12) = (s16) (M2C_FIELD(temp_r5, f32 *, 8) - (f32) (u16) M2C_FIELD(temp_r5, s16 *, 0x10));
        M2C_FIELD(temp_r5, s8 *, 0x1B) = 1;
    }
    return 0;
}

void fn_80104134(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, M2C_UNK, s32);
    fn_8017A810(arg1, 4, arg0);
}

void fn_80104160(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, s32);
    fn_8017A430(arg1, 4, arg0);
}

s32 fn_8010418C(void *arg0, s32 arg1) {
    u8 r0;
    s32 r5;
    
    r5 = 0;
    r0 = *(u8 *)arg0;
    if ((r0 >> 5U) & 7) {
        r5 = 1;
    }
    if ((arg1 + 1) == r5) {
        return 0x1B;
    }
    
    r0 = *(u16 *)arg0;
    if ((r0 >> 7U) & 7) {
        r5 += 1;
    }
    if ((arg1 + 1) == r5) {
        return 0x1C;
    }
    
    r0 = *(u8 *)(((u8 *)arg0) + 1);
    if ((r0 >> 4U) & 7) {
        r5 += 1;
    }
    if ((arg1 + 1) == r5) {
        return 0x1D;
    }
    
    r0 = *(u8 *)arg0;
    if ((r0 >> 2U) & 7) {
        r5 += 1;
    }
    if ((arg1 + 1) == r5) {
        return 0x1E;
    }

    r0 = *(u8 *)(((u8 *)arg0) + 1);
    if (r0 & 7) {
        r5 += 1;
    }
    if ((arg1 + 1) == r5) {
        return 0x1F;
    }
    
    return 0;
}

s32 fn_8010424C(void *arg0) {
    s32 var_r4;
    u8* ptr = (u8*)arg0;

    var_r4 = 0;
    if ((ptr[0] >> 5) & 7) {
        var_r4 = 1;
    }
    if ((ptr[0] >> 7) & 7) {
        var_r4 += 1;
    }
    if ((ptr[1] >> 4) & 7) {
        var_r4 += 1;
    }
    if ((ptr[0] >> 2) & 7) {
        var_r4 += 1;
    }
    if (ptr[1] & 7) {
        var_r4 += 1;
    }
    return var_r4;
}

void fn_801042A8(s32 arg0, s32 arg1, u8 arg2)
{
    switch (arg0)
    {
    case 0:
        *(u8*)(arg1) |= (arg2 << 5) & 0x20;
        break;
    case 1:
        *(u16*)(arg1) |= (arg2 << 7) & 0x400;
        break;
    case 2:
        *(u8*)(arg1 + 1) |= (arg2 << 4) & 0x18;
        break;
    case 3:
        *(u8*)(arg1) |= (arg2 << 2) & 0x6;
        break;
    case 4:
        *(u8*)(arg1 + 1) |= (arg2 << 0) & 0x1;
        break;
    case 5:
        *(u8*)(arg1 + 2) |= (arg2 << 5) & 0x20;
        break;
    case 6:
        *(u8*)(arg1 + 2) |= (arg2 << 2) & 0x6;
        break;
    default:
        break;
    }
}

s32 fn_80104338(u8 arg0) {
    switch (arg0) {
    case 0: return 0x10;
    case 1: return 0x11;
    case 2: return 0x12;
    case 3: return 0x13;
    case 4: return 0x15;
    case 5: return 0x17;
    case 6: return 0x16;
    case 7: return 0x18;
    case 8: return 0x14;
    case 9: return 0x10;
    case 10: return 0x11;
    case 11: return 0x12;
    case 12: return 0x13;
    case 13: return 0x15;
    case 14: return 0x17;
    case 15: return 0x16;
    }
    return 0;
}

extern u32 lbl_8028F210[];
s32 fn_801043FC(s32 arg0) {
    return lbl_8028F210[arg0];
}

void fn_80104410(void *arg0) {
    u8 *ptr = (u8 *)arg0;
    u32 temp;
    
    temp = ptr[0];
    temp &= ~0xE0;
    temp |= 0x00;
    ptr[0] = temp;
    
    temp = ptr[0];
    temp &= ~0x380;
    temp |= 0x00;
    ptr[0] = temp;
    
    temp = ptr[1];
    temp &= ~0x70;
    temp |= 0x00;
    ptr[1] = temp;
    
    temp = ptr[0];
    temp &= ~0x1C;
    temp |= 0x00;
    ptr[0] = temp;
    
    temp = ptr[1];
    temp &= ~0x07;
    temp |= 0x00;
    ptr[1] = temp;
    
    temp = ptr[2];
    temp &= ~0xE0;
    temp |= 0x00;
    ptr[2] = temp;
    
    temp = ptr[2];
    temp &= ~0x1C;
    temp |= 0x00;
    ptr[2] = temp;
}

void fn_8010446C(u8 *arg0) {
    u8 temp = *arg0 & ~0xE0;
    *arg0 = temp;
}

void fn_80104480(void *arg0) {
    u8 *ptr = (u8*)arg0;
    ptr[0] &= ~0xE0;
    ptr[1] &= ~0x70;
    ptr[0] &= ~0x1C;
    ptr[1] &= ~7;
}

u32 fn_801044C4(void *arg0) {
    s32 temp_r4;

    temp_r4 = ((u8) M2C_FIELD(arg0, u8 *, 2) >> 5U) & 7;
    return (u32) ((7 - temp_r4) | (temp_r4 - 7)) >> 0x1FU;
}

u32 fn_801044E0(void *arg0) {
    s32 temp_r4;

    temp_r4 = ((u8) M2C_FIELD(arg0, u8 *, 2) >> 2U) & 7;
    return (u32) ((4 - temp_r4) | (temp_r4 - 4)) >> 0x1FU;
}

s32 fn_801044FC(void *arg0) {
    u8 temp_r3;
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0);
    if ((temp_r4 >> 5U) & 7) {
        return 1;
    }
    if (((u16) M2C_FIELD(arg0, u8 *, 0) >> 7U) & 7) {
        return 1;
    }
    temp_r3 = M2C_FIELD(arg0, u8 *, 1);
    if ((temp_r3 >> 4U) & 7) {
        return 1;
    }
    if ((temp_r4 >> 2U) & 7) {
        return 1;
    }
    return (temp_r3 & 7) != 0;
}

void fn_8010455C(void *arg0, u8 arg1) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_7;
    u16 temp_r4_2;
    u8 temp_r4;
    u8 temp_r4_3;
    u8 temp_r4_4;
    u8 temp_r4_5;
    u8 temp_r4_6;
    u8 temp_r4_7;

    switch ((s32) arg1) {                           /* irregular */
    case 1:
        temp_r4 = M2C_FIELD(arg0, u8 *, 0);
        temp_r5 = (temp_r4 >> 5U) & 7;
        if (temp_r5 != 0) {
            M2C_FIELD(arg0, u8 *, 0) = (u8) ((temp_r4 & ~0xE0) | (((temp_r5 - 1) << 5) & 0xE0));
        }
        temp_r4_2 = (u16) M2C_FIELD(arg0, u8 *, 0);
        temp_r5_2 = (temp_r4_2 >> 7U) & 7;
        if (temp_r5_2 != 0) {
            M2C_FIELD(arg0, u8 *, 0) = (s16) ((temp_r4_2 & ~0x380) | (((temp_r5_2 - 1) << 7) & 0x380));
        }
        temp_r4_3 = M2C_FIELD(arg0, u8 *, 1);
        temp_r5_3 = (temp_r4_3 >> 4U) & 7;
        if (temp_r5_3 != 0) {
            M2C_FIELD(arg0, u8 *, 1) = (u8) ((temp_r4_3 & ~0x70) | (((temp_r5_3 - 1) << 4) & 0x70));
        }
        temp_r4_4 = M2C_FIELD(arg0, u8 *, 0);
        temp_r5_4 = (temp_r4_4 >> 2U) & 7;
        if (temp_r5_4 != 0) {
            M2C_FIELD(arg0, u8 *, 0) = (u8) ((temp_r4_4 & ~0x1C) | (((temp_r5_4 - 1) << 2) & 0x1C));
        }
        temp_r4_5 = M2C_FIELD(arg0, u8 *, 2);
        temp_r5_5 = (temp_r4_5 >> 5U) & 7;
        if (temp_r5_5 != 0) {
            M2C_FIELD(arg0, u8 *, 2) = (u8) ((temp_r4_5 & ~0xE0) | (((temp_r5_5 - 1) << 5) & 0xE0));
        }
        temp_r4_6 = M2C_FIELD(arg0, u8 *, 2);
        temp_r5_6 = (temp_r4_6 >> 2U) & 7;
        if (temp_r5_6 != 0) {
            M2C_FIELD(arg0, u8 *, 2) = (u8) ((temp_r4_6 & ~0x1C) | (((temp_r5_6 - 1) << 2) & 0x1C));
            return;
        }
        return;
    case 0:
        temp_r4_7 = M2C_FIELD(arg0, u8 *, 1);
        temp_r5_7 = temp_r4_7 & 7;
        if (temp_r5_7 != 0) {
            M2C_FIELD(arg0, u8 *, 1) = (u8) ((temp_r4_7 & ~7) | ((temp_r5_7 - 1) & 7));
            return;
        }
        break;
    }
}

s32 fn_80104628(void *arg0, u8 arg1) {
    u8 *temp_r3;
    u8 *r10;
    s32 r9;

    temp_r3 = (u8 *) arg0;
    r9 = 0;

    if ((temp_r3[0] >> 5) & 7) {
        r9 = 1;
    }
    if ((temp_r3[0] >> 7) & 7) {
        r9 += 1;
    }
    if ((temp_r3[1] >> 4) & 7) {
        r9 += 1;
    }
    if ((temp_r3[0] >> 2) & 7) {
        r9 += 1;
    }
    if (temp_r3[1] & 7) {
        r9 += 1;
    }

    if (r9 == 0) {
        return 0;
    }

    r10 = (u8 *) arg0;
    if (arg1 == 1) {
        u8 temp_r4;

        temp_r4 = (r10[0] >> 5) & 7;
        if (temp_r4 != 0) {
            r10[0] = ((r10[0] & ~0xE0) | (((temp_r4 - 1) << 5) & 0xE0));
        }

        temp_r4 = (r10[0] >> 7) & 7;
        if (temp_r4 != 0) {
            r10[0] = ((r10[0] & ~0x380) | (((temp_r4 - 1) << 7) & 0x380));
        }

        temp_r4 = (r10[1] >> 4) & 7;
        if (temp_r4 != 0) {
            r10[1] = ((r10[1] & ~0x70) | (((temp_r4 - 1) << 4) & 0x70));
        }

        temp_r4 = (r10[0] >> 2) & 7;
        if (temp_r4 != 0) {
            r10[0] = ((r10[0] & ~0x1C) | (((temp_r4 - 1) << 2) & 0x1C));
        }

        temp_r4 = (r10[2] >> 5) & 7;
        if (temp_r4 != 0) {
            r10[2] = ((r10[2] & ~0xE0) | (((temp_r4 - 1) << 5) & 0xE0));
        }

        temp_r4 = (r10[2] >> 2) & 7;
        if (temp_r4 != 0) {
            r10[2] = ((r10[2] & ~0x1C) | (((temp_r4 - 1) << 2) & 0x1C));
        }
    } else if (arg1 == 0) {
        u8 temp_r4;

        temp_r4 = r10[1] & 7;
        if (temp_r4 != 0) {
            r10[1] = ((r10[1] & ~0x7) | ((temp_r4 - 1) & 0x7));
        }
    }

    r9 = 0;
    temp_r3 = (u8 *) arg0;

    if ((temp_r3[0] >> 5) & 7) {
        r9 = 1;
    }
    if ((temp_r3[0] >> 7) & 7) {
        r9 += 1;
    }
    if ((temp_r3[1] >> 4) & 7) {
        r9 += 1;
    }
    if ((temp_r3[0] >> 2) & 7) {
        r9 += 1;
    }
    if (temp_r3[1] & 7) {
        r9 += 1;
    }

    if (r9 == 0) {
        return 1;
    }

    return 0;
}

s32 fn_801047D0(void) {
    extern void *lbl_803679C0;
    return *(s32 *)((char *)lbl_803679C0 + 0x4);
}

u32 fn_80104930(u16 *arg0, u16 arg1) {
    return ((u32)*arg0 - (u32)arg1) >> 31;
}

s32 fn_80104944(void) {
    extern s32 lbl_803679C0;
    return lbl_803679C0;
}

extern void* lbl_803679C0;
extern u8 lbl_8032BB44[20];
void* fn_8010494C(void* arg0) {
    void* temp_r0 = lbl_803679C0;
    
    if (arg0 != NULL) {
        lbl_803679C0 = arg0;
    } else {
        lbl_803679C0 = &lbl_8032BB44;
    }
    
    return temp_r0;
}

void* fn_80104970(void* arg0) {
    u8 temp_r0 = *(u8*)arg0;
    
    if ((temp_r0 >= 0x81 && temp_r0 <= 0x9F) || (temp_r0 >= 0xE0 && temp_r0 <= 0xFC)) {
        u8 temp_r0_2 = *((u8*)arg0 + 1);
        if (((temp_r0_2 < 0x40) == 0 && temp_r0_2 <= 0x7E) || (temp_r0_2 >= 0x80 && temp_r0_2 <= 0xFC)) {
            return (u8*)arg0 + 2;
        }
    }
    
    return (u8*)arg0 + 1;
}

void fn_80104BF4(void* arg0, void* arg1) {
    if (arg0 != NULL && arg1 != NULL) {
        char* ptr0 = (char*)arg0;
        char* ptr1 = (char*)arg1;
        
        while (*ptr0 != 0 && *ptr0 == *ptr1) {
            ptr0++;
            ptr1++;
        }
        
        if (*ptr0 == 0) {
            *(u8*)arg1 = 0;
        }
    }
}

extern void *lbl_803679C0;
u16 fn_80104E58(void) {
    return *(u16 *)((char *)lbl_803679C0 + 0x4);
}

extern u16 lbl_80366E80;
s8 fn_80104E68(void *arg0) {
    return 0;
}

s8 fn_80104FC4(void** arg0) {
    void *temp_r3;
    void *temp_r31;
    u8 temp_r0;
    u8 temp_r0_2;
    s8 var_r0;
    void *var_r30;
    u16 sp8;
    
    temp_r3 = *arg0;
    temp_r31 = lbl_803679C0;
    
    temp_r0 = *(u8*)temp_r3;
    
    if (temp_r0 >= 0x81 && temp_r0 <= 0x9f) {
        // First condition: 0x81 to 0x9f
    } else if (temp_r0 >= 0xe0 && temp_r0 <= 0xfc) {
        // Second condition: 0xe0 to 0xfc
    } else {
        var_r0 = 0;
        goto end;
    }
    
    temp_r0_2 = *(u8*)((char*)temp_r3 + 1);
    if (temp_r0_2 < 0x40) {
        // First condition: less than 0x40
    } else if (temp_r0_2 <= 0x7e) {
        // Second condition: less or equal to 0x7e
    } else if (temp_r0_2 >= 0x80) {
        // Third condition: greater or equal to 0x80
    } else if (temp_r0_2 <= 0xfc) {
        // Fourth condition: less or equal to 0xfc
    } else {
        var_r0 = 0;
        goto end;
    }
    
    var_r0 = 1;

end:
    if (var_r0 != 0) {
        var_r30 = (char*)temp_r3 + 2;
        sp8 = (u16)((*(u8*)((char*)temp_r3 + 1) & 0xFF) | ((s8)*(u8*)temp_r3 << 8));
    } else {
        var_r30 = (char*)temp_r3 + 1;
        sp8 = *(u8*)temp_r3;
    }
    
    // Placeholder for function calls - this is a complex pattern
    *arg0 = var_r30;
    return 0;
}

void *fn_80105334(void *arg0, s16 arg1) {
    M2C_UNK fn_8005C7E8();
    M2C_UNK fn_800C428C(void *);
    M2C_UNK fn_800C4588();
    if (arg0 != NULL) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U)) {
            fn_800C4588();
            M2C_FIELD(arg0, u32 *, 4) = 0U;
        } else if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0U) {
            fn_8005C7E8();
        }
        M2C_FIELD(arg0, u32 *, 4) = 0U;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_801053CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

s32 fn_801053E4(s32 arg0, s32 arg1, u16 *arg2, u8 (*arg3)(s32, u16)) {
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r26;
    s32 var_r31;

    var_r26 = arg0;
    var_r31 = (s32) (arg1 - var_r26) / 16;
loop_4:
    if (var_r31 > 0) {
        temp_r29 = (s32) (((u32) var_r31 >> 0x1FU) + var_r31) >> 1;
        temp_r30 = var_r26 + (temp_r29 * 0x10);
        if (arg3(temp_r30, *arg2) != 0) {
            var_r26 = temp_r30 + 0x10;
            var_r31 -= temp_r29 + 1;
        } else {
            var_r31 = temp_r29;
        }
        goto loop_4;
    }
    return var_r26;
}

s32 fn_80105474(s32 arg0, s32 arg1, s32 *arg2, u8 (*arg3)(s32, u16)) {
    s32 temp_r28;
    s32 temp_r29;
    s32 temp_r31;
    s32 var_r26;
    s32 var_r30;

    var_r26 = arg0;
    temp_r31 = *arg2;
    var_r30 = (s32) (arg1 - var_r26) / 16;
loop_4:
    if (var_r30 > 0) {
        temp_r28 = (s32) (((u32) var_r30 >> 0x1FU) + var_r30) >> 1;
        temp_r29 = var_r26 + (temp_r28 * 0x10);
        if (arg3(temp_r29, (u16) temp_r31) != 0) {
            var_r26 = temp_r29 + 0x10;
            var_r30 -= temp_r28 + 1;
        } else {
            var_r30 = temp_r28;
        }
        goto loop_4;
    }
    return var_r26;
}

extern u16 lbl_802734D0;
extern u32 jumptable_8028F290[];
