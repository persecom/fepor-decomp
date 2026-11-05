/* Functions from 0x80103748 to 0x80105504, found by decomp-toolkit. */
#include "common.h"

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
    u16 *ptr = &lbl_802734D0[0xA3];
    return ptr;
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
    return &lbl_802734D0[0x270];
}

s32 fn_80103998(void) {
    return 0;
}

void *fn_80103A5C(void) {
    extern u16 lbl_802734D0[];
    return &lbl_802734D0[0x284];
}

s32 fn_80103A6C(void) {
    return 0;
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
    return &lbl_802734D0[0x63];
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

void fn_80104134(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A810(s32, M2C_UNK, s32);
    fn_8017A810(arg1, 4, arg0);
}

void fn_80104160(s32 arg0, s32 arg1) {
    M2C_UNK fn_8017A430(s32, M2C_UNK, s32);
    fn_8017A430(arg1, 4, arg0);
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

extern void *lbl_803679C0;
u16 fn_80104E58(void) {
    return *(u16 *)((char *)lbl_803679C0 + 0x4);
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
