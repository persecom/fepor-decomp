/* Functions from 0x8009F85C to 0x800A399C, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_80367788;
void *fn_8009F85C(void) {
    extern u16 lbl_8026D8D8;
    u16 *addr = &lbl_8026D8D8;
    return (void *)((u32)(addr + 0x277));
}

void *fn_8009F86C(void) {
    extern u16 lbl_8026D8D8;
    u16 *addr = &lbl_8026D8D8;
    return (void *)((u32)(addr + 0x27E));
}

s32 fn_8009F87C(void) {
    M2C_UNK fn_80024398(M2C_UNK *, M2C_UNK);
    fn_80024398(&lbl_80367788, 0);
    return 0;
}

void fn_8009F8A8(void *arg1) {
    M2C_UNK fn_8001E4D0(u8, M2C_UNK);
    u8 temp = *(u8 *)((u8 *)arg1 + 0x3A);
    fn_8001E4D0(temp, 0);
}

void *fn_8009FAAC(void) {
    extern u16 lbl_8026D8D8;
    return &lbl_8026D8D8 + 0x588;
}

void *fn_8009FD50(void) {
    extern u16 lbl_8026D8D8;
    return &lbl_8026D8D8 + 0x2d5;
}

s32 fn_8009FD60(void) {
    M2C_UNK fn_800EBD78(M2C_UNK, M2C_UNK);
    fn_800EBD78(0, 0);
    return 0;
}

void *fn_8009FD8C(void) {
    extern u16 lbl_8026D8D8;
    return &lbl_8026D8D8 + 0x5da;
}

s32 fn_8009FD9C(void) {
    M2C_UNK fn_8000CAA0(M2C_UNK *);
    extern void* lbl_8028A384;
    fn_8000CAA0(lbl_8028A384);
    return 0;
}

void *fn_8009FDC8(void) {
    extern u16 lbl_8026D8D8;
    return (char *)&lbl_8026D8D8 + 0x5f0;
}

void *fn_8009FE04(void) {
    extern u16 lbl_8026D8D8;
    return (u8 *)&lbl_8026D8D8 + 0x307;
}

void *fn_8009FE7C(void) {
    extern u16 lbl_8026D8D8;
    return &lbl_8026D8D8 + 0x325;
}

void *fn_8009FEB8(void) {
    extern u16 lbl_8026D8D8;
    return (u16 *)&lbl_8026D8D8 + 0x33A;
}

s32 fn_8009FEC8(void) {
    M2C_UNK fn_800EB578();
    M2C_UNK fn_801E25EC(M2C_UNK *);
    extern M2C_UNK lbl_803682F0;
    fn_801E25EC(&lbl_803682F0);
    fn_800EB578();
    return 0;
}

void *fn_8009FEF4(void) {
    extern u16 lbl_8026D8D8;
    u16* addr = &lbl_8026D8D8;
    return (void*)((u32)addr + 0x34B * 2);
}

void *fn_8009FF30(void) {
    extern u16 lbl_8026D8D8;
    return &((u16 *)&lbl_8026D8D8)[0x354];
}

void *fn_8009FF6C(void) {
    extern void *lbl_8026D8D8;
    return (char*)&lbl_8026D8D8 + 0x365;
}

s32 fn_8009FF7C(void) {
    M2C_UNK fn_800EBF58();
    fn_800EBF58();
    return 0;
}

void *fn_8009FFA0(void) {
    extern void *lbl_8026D8D8;
    return (char*)&lbl_8026D8D8 + 0x36a;
}

s32 fn_8009FFB0(s32 arg1) {
    void *fn_800241C8(s32);
    void fn_8014A030(s32);

    s32 temp_r3 = (s32)fn_800241C8(arg1);
    temp_r3 = M2C_FIELD(temp_r3, s32 *, 0x18);
    fn_8014A030(temp_r3);
    return 6;
}

void *fn_8009FFE0(void) {
    extern void *lbl_8026D8D8;
    return (char*)&lbl_8026D8D8 + 0x370;
}

void *fn_800A0058(void) {
    extern u16 lbl_8026D8D8;
    void* temp = (u8 *)&lbl_8026D8D8 + 0x386;
    return temp;
}

void *fn_800A0094(void) {
    extern u16 lbl_8026D8D8;
    return (char *)&lbl_8026D8D8 + 0x38E;
}

void *fn_800A00D0(void) {
    extern u16 lbl_8026D8D8;
    return &lbl_8026D8D8 + 0x395;
}

void *fn_800A010C(void) {
    extern u8 lbl_8026D8D8[];
    return (char *)lbl_8026D8D8 + 0x39E;
}

s32 fn_800A011C(void *arg2) {
    extern u8 lbl_80366E25;
    s8 var_r0;
    u8 temp_r4;

    var_r0 = 2;
    temp_r4 = lbl_80366E25 ^ 1;
    lbl_80366E25 = temp_r4;
    if (temp_r4 != 0) {
        var_r0 = 0;
    }
    *(u8 *)((char *)arg2 + 0x39) = (u8)var_r0;
    return 0;
}

extern u8 lbl_80366E25;
u8 fn_800A0144(void) {
    extern u8 lbl_80366E25;
    u8 var_r3;

    var_r3 = 2;
    if ((u8) lbl_80366E25 != 0) {
        var_r3 = 0;
    }
    return var_r3;
}

void *fn_800A0160(void) {
    extern u16 lbl_8026D8D8[];
    return (char *)lbl_8026D8D8 + 0x3AC;
}

void fn_800A01B4(void) {
    M2C_UNK fn_80018AAC();
    fn_80018AAC();
}

s32 fn_800A022C(void) {
    M2C_UNK fn_80018E0C();
    fn_80018E0C();
    return 0;
}

void *fn_800A0250(void) {
    extern u16 lbl_8026D8D8[];
    return (char *)lbl_8026D8D8 + 0x3C3;
}

void *fn_800A02E4(void) {
    extern u16 lbl_8026D8D8;
    return (u16*)(((uintptr_t)&lbl_8026D8D8) + 0x7C0);
}

void *fn_800A0338(void) {
    extern u16 lbl_8026D8D8;
    return (void *)((u8 *)&lbl_8026D8D8 + 0x7D6);
}

void *fn_800A03E0(void) {
    extern u16 lbl_8026D8D8;
    void* temp = &lbl_8026D8D8;
    return (u8*)temp + 0x806;
}

void *fn_800A0434(void) {
    extern u16 lbl_8026D8D8;
    return (void *)(((u32)&lbl_8026D8D8) + 0x415);
}

void *fn_800A0488(void) {
    extern u8 lbl_8026D8D8[];
    return (char *)&lbl_8026D8D8 + 0x424;
}

void *fn_800A04DC(void) {
    extern u16 lbl_8026D8D8[];
    return (char *)&lbl_8026D8D8 + 0x42B;
}

void *fn_800A0530(void) {
    extern u16 lbl_8026D8D8[];
    return (char *)&lbl_8026D8D8 + 0x437;
}

s32 fn_800A0594(void) {
    M2C_UNK fn_800C418C();
    fn_800C418C();
    return 5;
}

s32 fn_800A05C8(void) {
    M2C_UNK fn_8005BCAC();
    fn_8005BCAC();
    return 5;
}

s32 fn_800A06AC(void) {
    M2C_UNK fn_800056A0(M2C_UNK);
    M2C_UNK fn_801EC7B4();
    fn_800056A0(0);
    fn_801EC7B4();
    return 5;
}

s32 fn_800A074C(void) {
    M2C_UNK fn_800C4384();
    fn_800056A0(0);
    fn_800C4384();
    return 5;
}

s32 fn_800A0788(void) {
    M2C_UNK fn_801B84C0();
    fn_800056A0(0);
    fn_801B84C0();
    return 6;
}

s32 fn_800A0804(void) {
    M2C_UNK fn_80016538();
    fn_80016538();
    return 0;
}

extern s32 lbl_80367670;
extern void *fn_80024398(void *, s32);
s32 fn_800A0D08(void *arg2) {
    if (*(u8 *)((char *)arg2 + 0x39) != 0) {
        return 0;
    }
    fn_80024398(&lbl_80367670, 0);
    return 0;
}

u8 fn_800A0DB0(void) {
    u8 var_r0;

    var_r0 = 2;
    if (fn_800AA794() != 0U) {
        var_r0 = 0;
    }
    return var_r0;
}

s32 fn_800A1658(void) {
    extern s32 lbl_80367240;
    extern f32 lbl_80330708;
    s32 r3, r4, r5, r6, r7, r8;
    u8 *r5_ptr;
    s32 r0;

    r4 = *(s32*)((char*)&lbl_80367240 + 0x14);
    r5 = *(u8*)((char*)&lbl_80330708 + 0x570) & 1;
    if (r5 != 0) {
        return 0;
    }
    
    r6 = *(u8*)((char*)&lbl_80330708 + 0x574);
    if (r6 == 0) {
        return 1;
    }
    
    r5_ptr = (u8*) &lbl_80330708;
    r3 = *(s32*)((char*)&lbl_80367240 + 0x10);
    r8 = *r5_ptr;
    r7 = r6;
    
    r5 = r3 ^ r7;
    r5 &= r3;
    r5 &= 1;
    if (r5 == 0) {
        return 1;
    }

    r5 = r8 & 1;
    if (r5 == 0) {
        return 2;
    }
    
    r0 = 1;
    
    r5 = *(s32*)((char*)&lbl_80367240 + 0x10);
    r3 = r5 & 0x5555;
    r6 = (r5 * r8) >> 17; // This is an approximation using shifts, might need refining
    r5 = r6 + (r6 >> 31); // This mimics a round of division
    r5 = r5 * 3;
    r5 = r5 - r8;
    r5 = r5 & 0x00FF0000; // Mask to low byte
    r5 = r5 >> 16;

    return r5;
}

s32 fn_800A1710(void) {
    return 0;
}

void *fn_800A1718(void) {
    extern void *lbl_8026D8D8;
    return (char *)&lbl_8026D8D8 + 0x62F;
}

s32 fn_800A1728(void) {
    extern f32 lbl_80330708;
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r3;

    f32 temp_f1 = M2C_FIELD(&lbl_80330708, f32 *, 0x528);
    f32 temp_f0 = M2C_FIELD(&lbl_80330708, f32 *, 0x524);
    temp_r31 = (s32) temp_f1;
    temp_r30 = (s32) temp_f0;
    
    fn_80040844(&lbl_80330708);
    fn_80047178((s8) temp_r30, (s8) temp_r31);
    fn_80049D84();
    temp_r3 = 2 & ~((s32) (-(s32) (temp_r30 | temp_r30) >> 0x1F));
    return temp_r3;
}

s32 fn_800A17A8(void) {
    extern f32 lbl_80330708;
    f32 temp_f1;
    f32 temp_f0;
    s32 temp_r30;
    s32 temp_r31;

    temp_f1 = M2C_FIELD(&lbl_80330708, f32 *, 0x528);
    temp_f0 = M2C_FIELD(&lbl_80330708, f32 *, 0x524);
    temp_r31 = (s32) temp_f1;
    temp_r30 = (s32) temp_f0;
    
    fn_80040844(&lbl_80330708);
    fn_80047178((s8) temp_r30, (s8) temp_r31);
    fn_80049D08();
    return 0;
}

void *fn_800A1814(void) {
    extern M2C_UNK lbl_8026D8D8;
    return &lbl_8026D8D8 + 0x640;
}

s32 fn_800A1D00(void) {
    M2C_UNK fn_80037AB8();
    M2C_UNK fn_800AA794();
    fn_800AA794();
    fn_80037AB8();
    return 6;
}

s32 fn_800A2624(void *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(M2C_FIELD(fn_800AA794(), void **, 0x18C), u16 *, 0x38);
    return 0;
}

M2C_UNK *fn_800A2660(void *arg0) {
    s32 *fn_80019E68(s16);
    s32 fn_800A8978();
    M2C_UNK fn_80231D94(M2C_UNK *, void *, s16, s32, s32);
    extern M2C_UNK lbl_8026D8D8;
    extern M2C_UNK lbl_80312270;
    s32 *temp_r31;

    temp_r31 = fn_80019E68(M2C_FIELD(arg0, s16 *, 4));
    fn_80231D94(&lbl_80312270, &lbl_8026D8D8 + 0x6D6, M2C_FIELD(arg0, s16 *, 4), fn_800A8978(), *temp_r31);
    return &lbl_80312270;
}

s32 fn_800A26D0(void *arg0) {
    extern s32 lbl_803671D8;
    extern void *lbl_80367240;

    s32 r5 = *(u32*)((char*)lbl_80367240 + 0x10);
    if (r5 & 0x01000001) {
        s16 r4 = *(s16*)((char*)arg0 + 4);
        if (r4 == 1) {
            *(s16*)((char*)arg0 + 4) = (s16) lbl_803671D8;
        } else {
            *(s16*)((char*)arg0 + 4) = r4 - 1;
        }
    }

    r5 = *(u32*)((char*)lbl_80367240 + 0x10);
    if (r5 & 0x02000002) {
        s16 r4 = *(s16*)((char*)arg0 + 4);
        if (r4 == (s32) lbl_803671D8) {
            *(s16*)((char*)arg0 + 4) = 1;
        } else {
            *(s16*)((char*)arg0 + 4) = r4 + 1;
        }
    }

    return 0;
}

s32 fn_800A2748(void *arg0) {
    s32 fn_80019E68(s16);
    M2C_UNK fn_8003C6BC(s32, M2C_UNK, s32);
    s32 temp_r31;

    temp_r31 = fn_800AA794();
    fn_8003C6BC(temp_r31, 0, fn_80019E68(M2C_FIELD(arg0, s16 *, 4)));
    return 0;
}

s32 fn_800A29E8(void) {
    M2C_UNK fn_80019DF0(u8);
    u8 fn_80105BC0(s32, u8);
    M2C_UNK fn_80105D4C(s32, u8);
    extern u8 lbl_80366E08;
    s32 temp_r31;

    temp_r31 = fn_800AA794();
    fn_80019DF0(lbl_80366E08);
    if (fn_80105BC0(temp_r31 + 0x1BC, lbl_80366E08) == 0) {
        fn_80105D4C(temp_r31 + 0x1BC, lbl_80366E08);
    }
    return 5;
}

s32 fn_800A2A50(void) {
    return 0x10;
}

f32 fn_800A2CC0(void) {
    extern f32 lbl_80369A08;
    return lbl_80369A08;
}

s32 fn_800A2CC8(void) {
    return 0x140;
}

s32 fn_800A30D8(void) {
    return 0;
}

f32 fn_800A30E0(void) {
    extern f32 lbl_80369A0C;
    return lbl_80369A0C;
}

s32 fn_800A319C(void) {
    M2C_UNK fn_800C221C();
    fn_800C221C();
    return 5;
}

s32 fn_800A320C(void) {
    extern void *lbl_80367240;
    extern u8 lbl_80367558;
    extern u8 lbl_80367559;
    if (((s8) lbl_80367558 > 0) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x01000001)) {
        lbl_80367558 -= 1;
    }
    if (((s8) lbl_80367558 < (s8) lbl_80367559) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x02000002)) {
        lbl_80367558 += 1;
    }
    return 0;
}

s32 fn_800A34E8(void) {
    extern void *lbl_80367240;
    extern u8 lbl_80367558;
    extern u8 lbl_80367559;
    if (((s8) lbl_80367558 > 0) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x01000001)) {
        lbl_80367558 -= 1;
    }
    if (((s8) lbl_80367558 < (s8) lbl_80367559) && (M2C_FIELD(lbl_80367240, s32 *, 0xC) & 0x02000002)) {
        lbl_80367558 += 1;
    }
    return 0;
}

f32 fn_800A3554(void) {
    extern f32 lbl_80369A10;
    return lbl_80369A10;
}

s32 fn_800A3634(void) {
    M2C_UNK fn_800C0C54();
    fn_800C0C54();
    return 0;
}

void fn_800A3808(void) {
    M2C_UNK fn_8005B8E8();
    fn_8005B8E8();
}

f32 fn_800A3828(void) {
    extern f32 lbl_80369A08;
    return lbl_80369A08;
}

s32 fn_800A3914(void) {
    return 0;
}

s32 fn_800A392C(void) {
    return 0;
}

s32 fn_800A3944(void) {
    return 0;
}

s32 fn_800A395C(void) {
    return 0;
}

void fn_800A3964(void **arg0) {
    extern void *lbl_8028459C;
    extern void *lbl_8028A478;
    
    *arg0 = lbl_8028459C;
    *(arg0 + 1) = lbl_8028A478;
}

void fn_800A3980(void **arg0) {
    extern void *lbl_8028459C;
    extern void *lbl_8028A42C;
    
    *(arg0 + 0) = lbl_8028459C;
    *(arg0 + 1) = lbl_8028A42C;
}
extern u16 lbl_8026D8D8;
extern u16 lbl_8026D8D8;
extern u16 lbl_8026D8D8;
