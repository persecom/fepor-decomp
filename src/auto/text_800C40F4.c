/* Functions from 0x800C40F4 to 0x801035C8, found by decomp-toolkit. */
#include "common.h"
#include "structs.h"

extern s32 lbl_8028D788;
extern void (*lbl_802B14E4)(void **);

void fn_800C40F4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x15) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x14) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x17) = 0xFF;
}

s32 fn_800C4240(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

void fn_800C426C(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

void fn_800C428C(void) {
    M2C_UNK fn_800C4588();
    fn_800C4588();
}

s32 fn_800C42AC(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

s32 fn_800C42D8(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

s32 fn_800C4638(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;
    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

void fn_800C47E8(void) {
    // This is a placeholder for the actual function.
    // The full decompilation involves too many complex dependencies
    // to be completed in one attempt. Will try a partial approach.
}

void fn_800C5F78(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 4;
}

void fn_800C5F84(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 3;
}

void fn_800C5F90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 2;
}

void fn_800C5F9C(void *arg0) {
    extern void *lbl_80367240;
    s32 temp_r5;
    u32 temp_r0;

    M2C_FIELD(arg0, s8 *, 0x38) = 1;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
    M2C_FIELD(arg0, u32 *, 0x3C) = temp_r0;
    if ((temp_r0 >= 0xDB6U) || (temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4), (((temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) == 0) == 0))) {
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        fn_8000C188();
    }
}

void fn_800C5FFC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}

void fn_800C6008(void) {
    M2C_UNK fn_800C6028();
    fn_800C6028();
}

void fn_800C73F0(s32 arg0) {
    fn_8006EDA0(arg0 + 0x30);
}

extern s32 lbl_8028D788;
void fn_800C77B8(s32 arg0) {
    u8 fn_8005BA10(s32, void *);
    void fn_8000C188(s32);
    
    if (fn_8005BA10(*(s32 *) (lbl_8028D788 + 4), &lbl_8028D788) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_800C7884(void *arg0) {
    M2C_UNK fn_8005BA08(s8);
    M2C_UNK fn_8005BC8C(s8);
    M2C_UNK fn_800C4728(s32);
    M2C_UNK fn_800C47E8();
    fn_8005BC8C((s8) M2C_FIELD(arg0, s32 *, 0x44));
    fn_800C47E8();
    fn_800C4728(M2C_FIELD(arg0, s32 *, 0x40));
    fn_8005BA08((s8) M2C_FIELD(arg0, s32 *, 0x40));
}

void fn_800C792C(void) {
    M2C_UNK fn_801FE32C();
    M2C_UNK fn_8020055C();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_8020055C();
        return;
    }
    fn_801FE32C();
}

void fn_800C7960(void) {
    M2C_UNK fn_801FE360();
    M2C_UNK fn_80200590();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_80200590();
        return;
    }
    fn_801FE360();
}

void fn_800C7994(void) {
    M2C_UNK fn_801FEF6C();
    M2C_UNK fn_8020119C();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_8020119C();
        return;
    }
    fn_801FEF6C();
}

void fn_800C79C8(void) {
    M2C_UNK fn_801FEFA0();
    M2C_UNK fn_802011D0();
    extern s32 lbl_803682A4;
    if (lbl_803682A4 & 0x60000) {
        fn_802011D0();
        return;
    }
    fn_801FEFA0();
}

void fn_800C7EF8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

s32 fn_800C8EFC(void *arg0) {
    s32 var_r6;

    var_r6 = 1;
    if ((s32 *) M2C_FIELD(arg0, s32 **, 0x1C) == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) >= (s32) *M2C_FIELD(arg0, s32 **, 0x1C)) {
        var_r6 = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    return var_r6;
}

M2C_UNK *fn_800C93EC(void *arg0) {
    extern M2C_UNK lbl_80369DC0;
    M2C_UNK *temp_r3;

    temp_r3 = M2C_FIELD(arg0, M2C_UNK **, 8);
    if (temp_r3 == NULL) {
        return &lbl_80369DC0;
    }
    return temp_r3;
}

void fn_800CA5FC(void) {
    M2C_UNK fn_800CA61C();
    fn_800CA61C();
}

void fn_800CA644(void) {
    M2C_UNK fn_800CA664();
    fn_800CA664();
}

s32 fn_800CAD4C(void *arg0, s32 arg1, u8 arg2) {
    u8 var_r5;

    M2C_FIELD(arg0, s32 *, 0x268) = arg1;
    M2C_FIELD(arg0, s32 *, 0x26C) = (s32) arg2;
    var_r5 = 0;
    M2C_FIELD(arg0, s32 *, 0x25C) = 0;
    if ((arg1 == 0) && (((s32) M2C_FIELD(arg0, s32 *, 0x254) > 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x258) > 0))) {
        var_r5 = 1;
    }
    if ((arg1 == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x254) > 0)) {
        var_r5 = 1;
    }
    if ((arg1 == 2) && ((s32) M2C_FIELD(arg0, s32 *, 0x258) > 0)) {
        var_r5 = 1;
    }
    if ((arg1 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x254) > 0)) {
        var_r5 = 1;
    }
    if (var_r5 != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0xC) = 6;
        return 1;
    }
    return 0;
}

void fn_800CBF24(s32 arg0, s32 arg2) {
    M2C_UNK spC;
    M2C_UNK sp8;
    s32 fn_800C99A0(M2C_UNK *, s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_800C9ABC(M2C_UNK *, M2C_UNK *);

    fn_800C9B6C(arg0, fn_800C99A0(&spC, arg2, 0, -1));
    fn_800C9ABC(&spC, &sp8);
    fn_800C9A60(&spC, -1);
}

s32 fn_800CD53C(void *arg0) {
    s32 fn_801519C0();
    extern M2C_UNK lbl_802704F8;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x10), u32 (**)(void *, void *, void *), 0x14)(temp_r3, &lbl_802704F8 + 0x3D0, &lbl_802704F8 + 0x3D7) != 0U) {
        return fn_801519C0();
    }
    return 0;
}

void fn_800CF588(void *arg0) {
    M2C_UNK fn_800E7B80(s32);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x196) != 0) {
        fn_800E7B80(M2C_FIELD(arg0, s32 *, 4));
    }
}

s32 fn_800D3534(s32 *arg0, s32 arg1) {
    s32 fn_800C9400(s32 *, M2C_UNK, s32, s32, s32);
    s32 strlen(s32);
    return fn_800C9400(arg0, 0, *arg0, arg1, strlen(arg1)) == 0;
}

s32 fn_800D3590(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    return temp_r4 & (M2C_FIELD(arg0, s32 *, 8) ^ temp_r4);
}

void fn_800D588C(s32 arg0) {
    extern s32 lbl_8036787C;
    lbl_8036787C = arg0;
}

void fn_800D67E4(void) {

}

void fn_800D67E8(void) {

}

void fn_800D67EC(s32 arg1) {
    extern void fn_800C428C(s32);
    fn_800C428C(arg1);
}

s32 fn_800D6810(s32 arg0) {
    return arg0 + 4;
}

void fn_800D6874(void) {

}

void fn_800D6878(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4) = 0;
    M2C_FIELD(arg0, s16 *, 0xC) = 0;
    M2C_FIELD(arg0, s16 *, 0xE) = 0;
}

s32 fn_800D6F0C(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367898;
    fn_800D758C(lbl_80367898);
    return 0;
}

void fn_800D6FA4(void *arg0) {
    M2C_UNK fn_800C9A60(M2C_UNK *, M2C_UNK);
    M2C_UNK fn_800C9B6C(M2C_UNK *);
    M2C_UNK fn_800DC518(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK sp8;

    fn_800C9B6C(&sp8);
    fn_800DC518(M2C_FIELD(arg0, s32 *, 0x424), &sp8, 0);
    fn_800C9A60(&sp8, -1);
}

void fn_800D6FF0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_800D7254();
    void *temp_r3;

    fn_800D7254();
    temp_r3 = M2C_FIELD(arg0, void **, 0x424);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x40), M2C_UNK (**)(void *, s32, s32, s32), 0x58)(temp_r3, arg1, arg2, arg3);
}

void fn_800D74FC(void *arg0) {
    extern void *lbl_80367240;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), M2C_UNK (**)(s32, s32, s32), 0xC)(temp_r4, temp_r4 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r4), M2C_FIELD(lbl_80367240, s32 *, 0xC));
}

void fn_800D7588(void) {

}

s32 fn_800D77B0(void) {
    M2C_UNK fn_800DA358();
    fn_800DA358();
    return 0;
}

s32 fn_800D7834(void) {
    M2C_UNK fn_800D75C4(s32);
    M2C_UNK fn_800DA2CC(s32);
    extern s32 lbl_80367A50;
    fn_800D75C4(lbl_80367A50);
    fn_800DA2CC(lbl_80367A50);
    return 0;
}

s32 fn_800D7864(void) {
    extern s32 lbl_80367BA0;
    fn_800D75C4(lbl_80367BA0);
    fn_800DA2CC(lbl_80367BA0);
    return 0;
}

s32 fn_800D7894(void) {
    extern s32 lbl_803679D0;
    fn_800D75C4(lbl_803679D0);
    fn_800DA2CC(lbl_803679D0);
    return 0;
}

s32 fn_800D78C4(void) {
    extern s32 lbl_803679C8;
    fn_800D75C4(lbl_803679C8);
    fn_800DA2CC(lbl_803679C8);
    return 0;
}

void fn_800DA31C(void) {
    extern s8 lbl_803678BE;
    extern s8 lbl_803678BF;
    lbl_803678BE = 1;
    lbl_803678BF = 0;
}

void fn_800DA330(void) {
    extern s8 lbl_803678BC;
    extern s8 lbl_803678BD;
    lbl_803678BC = 0;
    lbl_803678BD = 0;
}

s32 fn_800DA5FC(void) {
    extern void *lbl_803678B8;
    return M2C_FIELD(lbl_803678B8, s32 *, 0x10);
}

extern s32 lbl_803678B8;
void fn_800DAA60(s32 arg0, s32 arg1) {
    fn_800DAA94(lbl_803678B8, arg1);
}

void fn_800DAB24(void *arg1, s32 arg2) {
    fn_800C9B6C(M2C_FIELD(arg1, s32 *, 0x3C) + (arg2 * 0xC));
}

void fn_800DB520(void) {

}

void fn_800DB524(void) {

}

void fn_800DB528(void) {

}

s32 fn_800DB668(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C) != 0;
}

void fn_800DB964(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + farg0);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + farg1);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + farg2);
}

void fn_800DB98C(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x6C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x70) = farg1;
    M2C_FIELD(arg0, f32 *, 0x74) = farg2;
}

void fn_800DB99C(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x60) = farg0;
    M2C_FIELD(arg0, f32 *, 0x64) = farg1;
    M2C_FIELD(arg0, f32 *, 0x68) = farg2;
}

void fn_800DB9AC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x54) = farg0;
    M2C_FIELD(arg0, f32 *, 0x58) = farg1;
    M2C_FIELD(arg0, f32 *, 0x5C) = farg2;
}

void fn_800DB9BC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 8);
}

void fn_800DB9D8(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x48) = farg0;
    M2C_FIELD(arg0, f32 *, 0x4C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x50) = farg2;
}

void fn_800DB9E8(void *arg0, void *arg1) {
    M2C_UNK fn_80067FDC();
    M2C_UNK fn_8020310C(f32 *, f32 *);
    f32 sp10;
    f32 spC;
    f32 sp8;

    sp8 = M2C_FIELD(arg1, f32 *, 0x48);
    spC = M2C_FIELD(arg1, f32 *, 0x4C);
    sp10 = M2C_FIELD(arg1, f32 *, 0x50);
    fn_80067FDC();
    fn_8020310C(&sp8, &sp8);
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, f32 *, 4) = spC;
    M2C_FIELD(arg0, f32 *, 8) = sp10;
}

void fn_800DBAB8(void *arg0, void *arg1) {
    M2C_UNK fn_80202300(M2C_UNK *, M2C_UNK, f32, f32);
    M2C_UNK fn_802029C4(M2C_UNK *, f32 *, f32 *);
    extern f32 lbl_80369E70;
    extern f32 lbl_80369E80;
    extern f32 lbl_80369E84;
    M2C_UNK sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;

    sp8 = lbl_80369E70;
    spC = lbl_80369E70;
    sp10 = lbl_80369E80;
    fn_80202300(&sp14, 0x59, lbl_80369E84 * M2C_FIELD(arg1, f32 *, 0x58), lbl_80369E70);
    fn_802029C4(&sp14, &sp8, &sp8);
    M2C_FIELD(arg1, f32 *, 0x60) = sp8;
    M2C_FIELD(arg1, f32 *, 0x64) = spC;
    M2C_FIELD(arg1, f32 *, 0x68) = sp10;
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x60);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x68);
}

void fn_800DBB58(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x60);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x68);
}

void fn_800DBB74(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x5C);
}

void fn_800DBB90(void *arg0, void *arg1) {
    extern f32 lbl_80369E70;
    f32 *dst = (f32 *)arg0;
    f32 *src = (f32 *)arg1;

    dst[0] = src[0x12];
    dst[1] = lbl_80369E70;
    dst[2] = src[0x14];
}

s32 fn_800DBEC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C);
}

void fn_800DBED0(void) {

}

void fn_800DBED4(void) {

}

void fn_800DBF38(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    extern f32 lbl_80369E88;
    extern f32 lbl_80369E8C;
    extern f32 lbl_80369E90;
    s32 var_r4;

    var_r4 = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) <= 0x3E7) {
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (lbl_80369E88 * farg0);
        if (var_r4 != -1) {
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) (lbl_80369E8C * farg0);
        } else {
            var_r4 = 0x98967F;
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_80369E90;
        }
        M2C_FIELD(arg0, f32 *, 0x50) = farg1;
        M2C_FIELD(arg0, s32 *, 0x5C) = var_r4;
    }
}

void fn_800DC010(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
}

s32 fn_800DC018(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

void fn_800DC2E4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x15) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x14) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x17) = 0xFF;
}

s32 fn_800DC38C(void *arg0, u32 arg1) {
    s32 *ptr = (s32*)((char*)arg0 + 0xC0);
    if (arg1 >= *(u32*)((char*)arg0 + 0xBC)) {
        return 0;
    }
    return ptr[arg1];
}

s32 fn_800DC3B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x110);
}

s32 fn_800DC3B8(s32 arg0) {
    return arg0 + 0xAC;
}

void fn_800DC408(void *arg0, u32 arg1, s32 arg2) {
    M2C_UNK fn_800C9758(s32, s32, M2C_UNK, M2C_UNK);
    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0xB0)) {
        fn_800C9758(M2C_FIELD(arg0, s32 *, 0xB4) + (arg1 * 0xC), arg2, 0, -1);
    }
}

s32 fn_800DC44C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB0);
}

void fn_800DC598(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x114) = 0;
    M2C_FIELD(arg0, s8 *, 0x115) = 0;
    M2C_FIELD(arg0, s8 *, 0x73) = 0;
}

s32 fn_800DDAA4(s32 arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(fn_800DE73C(arg0 + 0x58), void **, 0xC);
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 0x18);
    }
    return 0;
}

s32 fn_800DDC04(s32 arg0) {
    void *fn_800DE73C(s32);
    return M2C_FIELD(fn_800DE73C(arg0 + 0x58), s32 *, 0xC);
}

void *fn_800DDC90(void *arg0) {
    M2C_UNK fn_8006140C(void *);
    void *fn_80061870();
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    void *temp_r3;

    temp_r3 = fn_80061870();
    if (temp_r3 != NULL) {
        temp_r0 = M2C_FIELD(arg0, u32 *, 0x4C);
        if (temp_r0 != 0U) {
            M2C_FIELD(temp_r3, u32 *, 0x40) = temp_r0;
        }
        temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x50);
        if (temp_r0_2 != 0U) {
            M2C_FIELD(temp_r3, u32 *, 0x48) = temp_r0_2;
        }
        temp_r0_3 = M2C_FIELD(arg0, u32 *, 0x54);
        if (temp_r0_3 != 0U) {
            M2C_FIELD(temp_r3, u32 *, 0x4C) = temp_r0_3;
        }
        fn_8006140C(temp_r3);
    }
    return temp_r3;
}

void fn_800DE9FC(void *arg0) {
    void **ptr = (void **) arg0;
    if (ptr != 0) {
        ptr[1] = ptr[0];
    }
}

void fn_800DEE90(void) {

}

void fn_800DEE94(void) {

}

s32 fn_800DEEBC(s32 arg0) {
    return arg0 + 4;
}

void fn_800DEEC4(void *arg1) {
    s32 temp_cr0_eq;

    temp_cr0_eq = arg1 == NULL;
    if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0) && ((u32) M2C_FIELD(arg1, u32 *, 8) != 0U)) {
        fn_800C428C();
    }
}

void fn_800DEEFC(void) {

}

void fn_800DEF00(void *arg0, void *arg1) {
    f32 *src = (f32 *) arg1;
    f32 *dst = (f32 *) arg0;

    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void fn_800DF298(void *arg0, s32 arg1, f32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xE4) = arg1;
    M2C_FIELD(arg0, f32 *, 0xE8) = arg2;
}

void fn_800DF2D8(void *arg0) {
    f32 fn_80059500(f32, f32, f32, f32, f32);
    f32 temp_f5;
    s32 temp_r0;
    f32 temp_f31;

    if (M2C_FIELD(arg0, s32 *, 0x2C) > 0) {
        if ((M2C_FIELD(arg0, f32 *, 0) == M2C_FIELD(arg0, f32 *, 0xC)) && (M2C_FIELD(arg0, f32 *, 4) == M2C_FIELD(arg0, f32 *, 0x10)) && (M2C_FIELD(arg0, f32 *, 8) == M2C_FIELD(arg0, f32 *, 0x14))) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) - 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (0 >= temp_r0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
            M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
            M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
            return;
        }
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x18);
        temp_f31 = (temp_f5 - (f32) temp_r0) / temp_f5;
        M2C_FIELD(arg0, f32 *, 0) = fn_80059500(M2C_FIELD(arg0, f32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x54), temp_f31);
        M2C_FIELD(arg0, f32 *, 4) = fn_80059500(M2C_FIELD(arg0, f32 *, 0x34), M2C_FIELD(arg0, f32 *, 0x40), M2C_FIELD(arg0, f32 *, 0x4C), M2C_FIELD(arg0, f32 *, 0x58), temp_f31);
        M2C_FIELD(arg0, f32 *, 8) = fn_80059500(M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x44), M2C_FIELD(arg0, f32 *, 0x50), M2C_FIELD(arg0, f32 *, 0x5C), temp_f31);
    }
}

void fn_800DF410(f32 *arg0, f32 *arg1) {
    *arg1 = *arg0;
}

void fn_800DF41C(void *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = M2C_FIELD(arg0, f32 *, 0);
    *arg2 = M2C_FIELD(arg0, f32 *, 4);
}

void fn_800DF430(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
}

void fn_800DF478(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = farg1;
    M2C_FIELD(arg0, f32 *, 0x14) = farg2;
    M2C_FIELD(arg0, f32 *, 0) = farg0;
    M2C_FIELD(arg0, f32 *, 4) = farg1;
    M2C_FIELD(arg0, f32 *, 8) = farg2;
}

void fn_800DF664(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 0;
}

void fn_800DF670(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 1;
}

u8 fn_800DF6A8(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

s32 fn_800DF6B0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s32 fn_800E2168(s32 *arg0, s32 *arg1) {
    return (s32) (*arg0 - *arg1) / 4;
}

void fn_800E2180(s32 *arg0, s32 *arg1) {
    s32 temp_r5;

    temp_r5 = *arg0;
    *arg0 = *arg1;
    *arg1 = temp_r5;
}

void fn_800E2218(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
}

s32 fn_800E26CC(s32 arg0) {
    s32 fn_800C5A48(s32, s32);
    extern s32 lbl_80367870;

    return fn_800C5A48(lbl_80367870, arg0) + 0x20;
}

void fn_800E29B8(void *arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4) {
    M2C_FIELD(arg0, s8 *, 0x50) = arg1;
    M2C_FIELD(arg0, s8 *, 0x51) = arg2;
    M2C_FIELD(arg0, s8 *, 0x52) = arg3;
    M2C_FIELD(arg0, s8 *, 0x53) = arg4;
}

void fn_800E29CC(void *arg0, void *arg1) {
    *(s32 *)arg0 = *(s32 *)((u8 *)arg1 + 0x48);
    *(s32 *)((u8 *)arg0 + 4) = *(s32 *)((u8 *)arg1 + 0x4C);
}

void fn_800E29E0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
}

void fn_800E29EC(void *arg0, void *arg1) {
    *(s32 *)((u8 *)arg0 + 0x48) = *(s32 *)arg1;
    *(s32 *)((u8 *)arg0 + 0x4C) = *(s32 *)((u8 *)arg1 + 4);
}

s32 fn_800E2E50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 fn_800E2E58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x64);
}

s32 fn_800E2E60(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58);
}

s32 fn_800E2E68(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

void fn_800E3BD8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (arg1 + (M2C_FIELD(arg0, s32 *, 0x7C) - M2C_FIELD(arg0, s32 *, 0x74)));
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (arg2 + (M2C_FIELD(arg0, s32 *, 0x80) - M2C_FIELD(arg0, s32 *, 0x78)));
}

void fn_800E3F48(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
}

void fn_800E3F54(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9C) = 1;
}

void fn_800E4164(void) {

}

void fn_800E4168(void) {

}

void fn_800E416C(void) {

}

void fn_800E4170(void) {

}

void fn_800E4174(void) {

}

void fn_800E43E8(void) {

}

void fn_800E45CC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
}

void fn_800E4B44(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 |= 0x60000000;
    }
}

void fn_800E4B64(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 |= 0x01000000;
    }
}

void fn_800E4B84(void *arg0) {
    void *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xE0);
        M2C_FIELD(temp_r3, u8 *, 0x85) = (u8) (M2C_FIELD(temp_r3, u8 *, 0x85) | 0xF0);
    }
}

void fn_800E4BA4(void *arg0, s8 arg1) {
    void *temp_r6;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r6 = M2C_FIELD(arg0, void **, 0xE0);
        M2C_FIELD(temp_r6, s32 *, 0) = (s32) (M2C_FIELD(temp_r6, s32 *, 0) | 0x8000);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), s8 *, 0x87) = 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), s8 *, 0x84) = arg1;
    }
}

s32 fn_800E4BD8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x114);
}

void fn_800E4BE0(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x110) = farg0;
    M2C_FIELD(arg0, s32 *, 0x114) = arg2;
}

void fn_800E4C14(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x104) = farg0;
}

u32 fn_800E4C5C(void *arg0, u32 arg1, u32 arg2, u8 arg3) {
    extern s32 lbl_80369F38;
    s32 sp8;

    if ((*(u32 *)((char *)arg0 + 0xE8)) != 0) {
        fn_80057EDC();
        *(u32 *)((char *)arg0 + 0xE8) = 0;
    }
    if ((arg1 == 0) || (arg2 == 0)) {
        *(u32 *)((char *)arg0 + 0xE8) = 0;
        return 0;
    }
    *(u32 *)((char *)arg0 + 0xE8) = fn_80057F04(*(s32 *)((char *)arg0 + 0xE0), arg1, arg2, 4);
    sp8 = lbl_80369F38;
    fn_80058970(*(u32 *)((char *)arg0 + 0xE8), &sp8);
    if (arg3 != 0) {
        fn_80058910(*(u32 *)((char *)arg0 + 0xE8), 1);
    }
    return *(u32 *)((char *)arg0 + 0xE8);
}

void fn_800E4E3C(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 |= 0x40000;
    }
}

void fn_800E4E5C(void *arg0) {
    s32 *temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
        temp_r3 = M2C_FIELD(arg0, s32 **, 0xE0);
        *temp_r3 &= 0xFFFFFBFF;
    }
}

void fn_800E4F0C(void *arg0) {
    M2C_UNK fn_8006135C(s32);
    fn_8006135C(M2C_FIELD(arg0, s32 *, 0xE0));
}

void fn_800E5044(void *arg0) {
    M2C_UNK fn_8005F494(s32);
    fn_8005F494(M2C_FIELD(arg0, s32 *, 0xE0));
}

s32 fn_800E5068(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF8);
}

s32 fn_800E5070(void *arg0, s32 arg1) {
    if ((arg1 < 0) || ((u32) arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0xF8))) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0xFC) + (arg1 * 0x1C);
}

void fn_800E5600(void *arg0, s32 arg1, u8 arg2) {
    M2C_UNK fn_8005FEE8(void *, f32);
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), u32 *, 0x44) != 0U) {
        if (arg2 != 0) {
            M2C_FIELD(arg0, s8 *, 0xD0) = 0;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
        if (var_r4 >= temp_r0) {
            var_r4 = temp_r0;
        }
        M2C_FIELD(arg0, s32 *, 0xCC) = var_r4;
        fn_8005FEE8(M2C_FIELD(arg0, void **, 0xE0), (f32) var_r4);
    }
}

s32 fn_800E5674(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0xD0) != 0) {
        return M2C_FIELD(arg0, s32 *, 0xC8);
    }
    return 0;
}

s32 fn_800E5690(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

s32 fn_800E56BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xE0);
}

u8 fn_800E56C4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xD0);
}

void fn_800E56CC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xD0) = 0;
}

void fn_800E59BC(void *arg0) {
    M2C_UNK fn_80060060(void *);
    if ((u8) M2C_FIELD(arg0, u8 *, 0xD0) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) >= (s32) M2C_FIELD(arg0, s32 *, 0xC8)) {
            if ((u8) M2C_FIELD(arg0, u8 *, 0xD1) == 0) {
                M2C_FIELD(arg0, u8 *, 0xD0) = 0U;
            } else {
                M2C_FIELD(arg0, s32 *, 0xCC) = 0;
                fn_80060060(M2C_FIELD(arg0, void **, 0xE0));
            }
        } else {
            fn_80060060(M2C_FIELD(arg0, void **, 0xE0));
        }
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xE0), f32 *, 0x58);
    }
}

void fn_800E76D0(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
}

void fn_800E76D8(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x3C) = arg1;
}

void fn_800E78B0(s32 arg0) {
    fn_800C9758(arg0 + 0x30, 0, -1);
}

void fn_800E78DC(void) {

}

void fn_800E78E0(void *arg0) {
    s32 *var_r31;
    void *temp_r3;

    *(s32*)((char*)arg0 + 0x28) = 0x1F4;
    var_r31 = (s32*)((char*)arg0 + 4);
    var_r31 = (s32*)((char*)var_r31 - 1);
loop_2:
    if (*var_r31 >= 0) {
        temp_r3 = *(void**)((char*)arg0 + 0x10);
        temp_r3 = *(void**)((char*)temp_r3 + 0x18);
        temp_r3 = ((void*(*)(void*, s32))temp_r3)(arg0, *var_r31);
        *(s32*)((char*)temp_r3 + 0x44) = *(s32*)((char*)arg0 + 0x28);
        temp_r3 = *(void**)((char*)temp_r3 + 0x40);
        temp_r3 = *(void**)((char*)temp_r3 + 0x1C);
        ((void(*)(s32))temp_r3)(*(s32*)((char*)arg0 + 0x24));
        *var_r31 -= 1;
        *(s32*)((char*)arg0 + 0x28) += 1;
        goto loop_2;
    }
}

void fn_800E7970(void *arg0) {
    s32 i;
    void **temp_r12;

    for (i = 0; i < *(s32 *)((char *)arg0 + 4); i++) {
        temp_r12 = *(void***)((char*)arg0 + 0x10);
        temp_r12 = *(void***)((char*)temp_r12 + 0x18);
        ((void(*)(void*, s32))temp_r12)(arg0, i);
        fn_800DF5E0();
    }
}

void fn_800E7A38(void *arg0, s32 arg1) {
    s32 i;
    void **temp_r12;

    i = 0;
    *(u8*)((char*)arg0 + 0x2C) = 0;
loop_2:
    if (i < *(s32*)((char*)arg0 + 4)) {
        temp_r12 = *(void***)((char*)arg0 + 0x10);
        temp_r12 = *(void***)((char*)temp_r12 + 0x18);
        ((void(*)(void*, s32))temp_r12)(arg0, i);
        fn_800DF638(arg1);
        i += 1;
        goto loop_2;
    }
    temp_r12 = *(void***)((char*)arg0 + 0x10);
    temp_r12 = *(void***)((char*)temp_r12 + 8);
    ((void(*)(void*))temp_r12)(arg0);
    *(s32*)((char*)arg0 + 0x44) += 1;
}

u8 fn_800E7C80(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x2C);
}

void fn_800E7C88(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C) = 1;
}

void fn_800E805C(s32 arg0, void *arg1) {
    M2C_UNK fn_800E7F94(void *, s32);
    
    fn_800E7F94(arg1, arg0);
    return;
}

void fn_800E8888(void) {
    M2C_UNK fn_800E43EC();
    fn_800E43EC();
}

void fn_800E8A88(void *arg0, f32 farg0) {
    extern f32 lbl_80369F7C;
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) (lbl_80369F7C * farg0);
    M2C_FIELD(arg0, s32 *, 0x120) = 0x3C;
}

s32 fn_800E8BB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2B4);
}

void fn_800E8BBC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2B4) = arg1;
}

s32 fn_800E8BC4(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x160) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x1C0) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x280) != 0)) {
        return 1;
    }
    return 0;
}

void fn_800E8FAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
}

u8 fn_800E8FB4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xFD);
}

void fn_800E8FBC(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0xF0) = farg0;
    M2C_FIELD(arg0, f32 *, 0xF4) = farg1;
    M2C_FIELD(arg0, f32 *, 0xF8) = farg2;
}

void fn_800E8FCC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0xF0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 0xF4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0xF8);
}

f32 fn_800E9018(void *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x104);
}

u8 fn_800E903C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xAC);
}

void fn_800E9044(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xAC) = 0;
}

void fn_800E9050(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xAC) = 1;
}

void fn_800E99CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_800E9A94(void) {
    void fn_800EBF58();
    s32 fn_8021CDC4(s32, void *, void *);

    extern s32 lbl_802725D8;
    extern s32 lbl_80320C20;

    fn_800EBF58();
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) = fn_8021CDC4(M2C_FIELD(&lbl_80320C20, s32 *, 0xA000), &lbl_802725D8 + 0x70, &lbl_80320C20 + 0x10000);
}

void fn_800E9B10(void) {
    s32 fn_8021BF10(s32, void *, void *);
    void fn_8021C02C(void *);

    extern s32 lbl_802725D8;
    extern s32 lbl_80320C20;

    void *temp_r31;
    temp_r31 = &lbl_80320C20 + 0xA01C;
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) = fn_8021BF10(M2C_FIELD(&lbl_80320C20, s32 *, 0xA000), &lbl_802725D8 + 0x70, temp_r31);
    if ((s32) M2C_FIELD(&lbl_80320C20, s32 *, 0xA004) != -4) {
        fn_8021C02C(temp_r31);
    }
}

void fn_800E9B80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern s32 lbl_8028E420;
    extern s32 lbl_80320C20;

    M2C_FIELD(&lbl_80320C20, s32 *, 0xA034) = arg0;
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA00C) = arg1;
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA010) = arg2;
    M2C_FIELD(&lbl_80320C20, s32 *, 0xA014) = arg3;
    fn_8000CAA0(&lbl_8028E420, arg4, &lbl_8028E420, &lbl_80320C20 + 0x10000);
}

void fn_800EA540(s32 arg0) {
    extern s32 lbl_8028E3EC;
    extern s32 lbl_80320C20;

    M2C_FIELD(&lbl_80320C20, s32 *, 0xA034) = arg0;
    fn_8000CAA0(&lbl_8028E3EC, &lbl_8028E3EC, &lbl_80320C20 + 0x10000);
}

void fn_800EB558(void) {
    extern s32 lbl_80367110;
    lbl_80367110 &= 0xFFFFFEFF;
}

s32 fn_800EC2B8(void) {
    extern s32 lbl_803678C0;
    fn_800D758C(lbl_803678C0);
    return 0;
}

s32 fn_800ED754(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_803678C8;
    fn_800D758C(lbl_803678C8);
    return 0;
}

void fn_800EDF18(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xB0) * (arg1 - M2C_FIELD(arg0, s32 *, 0x48))) / (s32) M2C_FIELD(arg0, s32 *, 0x60));
}

void fn_800EDF38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xB0) * (arg1 - M2C_FIELD(arg0, s32 *, 0x48))) / (s32) M2C_FIELD(arg0, s32 *, 0x60));
}

void fn_800EE090(void) {
    M2C_UNK fn_800E43EC();
    fn_800E43EC();
}

s32 fn_800EE490(void) {
    s32 fn_8000CAF0(void *, s32);
    void fn_800EE124(void);
    extern s32 lbl_8028E558;
    
    s32 temp_r31 = fn_8000CAF0(&lbl_8028E558, 4);
    fn_800EE124();
    return temp_r31;
}

extern u8 lbl_8032AC58[16];
void fn_800F1BFC(void) {
    fn_800F1C24(&lbl_8032AC58);
}

void fn_800F214C(void) {
    fn_800F2174(&lbl_8032AC58);
}

void fn_800F2E50(s8 arg0) {
    M2C_FIELD(&lbl_8032AC58, s8 *, 0x65C) = arg0;
}

s32 fn_800F7E78(void) {
    M2C_UNK fn_800F75F8();
    fn_800F75F8();
    return 1;
}

u8 fn_800F8308(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1A8);
}

s16 fn_800F8310(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x2A2);
}

s16 fn_800F8318(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x29A);
}

s16 fn_800F8320(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x298);
}

s16 fn_800F833C(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x29C);
}

s32 fn_800F8344(s32 arg0) {
    return arg0 + 0x2E0;
}

void fn_800F834C(void) {

}

s32 fn_800F8350(s32 *arg0) {
    return *arg0 != 0;
}

void fn_800F8364(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F8FF4(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9020(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9924(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800F9E64(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FA5D4(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

u32 fn_800FA600(void *arg0, u32 arg1, u32 arg2, u32 arg3) {
    extern s32 lbl_80369F38;
    
    if (*(u32 *)((char *)arg0 + 0xE8) != 0) {
        fn_80057EDC();
        *(u32 *)((char *)arg0 + 0xE8) = 0;
    }
    if ((arg1 == 0) || (arg2 == 0)) {
        *(u32 *)((char *)arg0 + 0xE8) = 0;
        return 0;
    }
    
    *(u32 *)((char *)arg0 + 0xE8) = fn_80057F04(*(s32 *)((char *)arg0 + 0xE0), arg1, arg2, 4);
    fn_80058970(*(u32 *)((char *)arg0 + 0xE8), &lbl_80369F38);
    if (arg3 != 0) {
        fn_80058910(*(u32 *)((char *)arg0 + 0xE8), 1);
    }
    return *(u32 *)((char *)arg0 + 0xE8);
}

void fn_800FAA50(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FB2DC(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

void fn_800FB308(void *arg0) {
    extern s32 lbl_803678F4;
    if ((s32) lbl_803678F4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x250) = (u8) (M2C_FIELD(arg0, u8 *, 0x250) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = (u8) (M2C_FIELD(arg0, u8 *, 0x251) + 1);
}

s32 fn_800FB3AC(void *arg0) {
    s32 fn_802342B8(s32, s32, void *);
    extern void *lbl_803678F8;
extern void *lbl_802EF4C8;
    return fn_802342B8(M2C_FIELD(lbl_803678F8, s32 *, 0x14), *M2C_FIELD(arg0, s32 **, 0x18C), lbl_803678F8) == 0;
}

void fn_800FC150(void) {
    M2C_UNK fn_800FF918();
    fn_800FF918();
}

void fn_800FC490(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x31) = 0;
}

void fn_800FC540(void) {
    M2C_UNK fn_800FC49C();
    fn_800FC49C();
}

void fn_800FC560(void) {
    M2C_UNK fn_800FEC0C();
    fn_800FEC0C();
}

s32 fn_800FC5F8(void) {
    extern s32 lbl_80367904;
    return lbl_80367904;
}

s32 fn_800FE8E8(void *arg0, void *arg1) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x24C) < (u32) M2C_FIELD(arg1, u32 *, 0x24C);
}

void fn_800FF36C(void *arg0) {
    M2C_UNK fn_8000C188(void *);
    u8 (*temp_r12)();
    u8 var_r3;

    temp_r12 = M2C_FIELD(arg0, u8 (**)(), 0x30);
    if (temp_r12 != NULL) {
        var_r3 = temp_r12();
    } else {
        var_r3 = 1;
    }
    if (var_r3 == 1) {
        fn_8000C188(arg0);
    }
}

void fn_800FFC00(s32 arg0, s32 arg1) {
    M2C_UNK fn_8002C47C(M2C_UNK **, M2C_UNK);
    M2C_UNK fn_8002F728(M2C_UNK *, M2C_UNK *, M2C_UNK *);
    extern M2C_UNK lbl_80284E20;
    extern M2C_UNK lbl_8028EAA8;
    extern M2C_UNK lbl_802EF4E0;
    s32 sp10;
    s32 spC;
    M2C_UNK *sp8;

    sp8 = &lbl_80284E20;
    spC = arg0;
    sp8 = &lbl_8028EAA8;
    sp10 = arg1;
    fn_8002F728(&lbl_802EF4E0, &lbl_802EF4E0, &lbl_8028EAA8);
    fn_8002C47C(&sp8, 0);
}

s32 fn_80100130(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_8003FF90(M2C_UNK, M2C_UNK);
    s32 fn_80100284(s32, M2C_UNK, s32, s32, s32);
    s32 temp_r31;

    fn_8003FF90(0, 0);
    temp_r31 = fn_80100284(arg0, 1, arg1, arg2, arg3);
    fn_8003FF90(0, 0);
    return temp_r31;
}

s32 fn_80100CC8(void) {
    void *fn_80016BDC();
    s32 temp_r3;
    void *temp_r3_2;

    temp_r3_2 = fn_80016BDC();
    if (temp_r3_2 == NULL) {
        return 0;
    }
    temp_r3 = M2C_FIELD(temp_r3_2, s32 *, 0x1A0);
    if (temp_r3 & 4) {
        return 1;
    }
    return (temp_r3 & 0x98) == 0;
}

void fn_80101448(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void fn_800FE2A0(s32, s32);
    void fn_80101530(s32, s32, s32, s32, s32, s32, s32, s32);

    fn_800FE2A0(5, arg7);
    fn_80101530(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

s32 fn_80102360(void *arg0, s16 *arg1, s16 *arg2, s32 arg3) {
    s16 temp_r14, temp_r15;
    s32 temp_r21, temp_r23, temp_r24, temp_r25, temp_r26, temp_r4, temp_r5;
    
    if (arg0 == NULL || arg1 == NULL || arg2 == NULL) {
        return 0;
    }

    /* Condition check and calls */
    if ((*(u8 *)0x8032B3C0 & 2) || (*(u32 *)((char *)arg0 + 0x254) & 0x03000000)) {
        fn_80022DAC(0x802CA518, 5, -1);
        fn_80022FD8(0x802CA518, 5);
    } else {
        fn_800FE2A0(5, arg3);
    }

    temp_r23 = *(u8 *)((char *)arg0 + 0x19e);
    temp_r24 = *(u8 *)((char *)arg0 + 0x19f);
    temp_r25 = (temp_r23 + (temp_r24 << 6)) * 2;
    temp_r26 = *(s16 *)((char *)0x802CA518 + 0x610e + temp_r25);

    if (temp_r26 < 0) {
        return 0;
    }

    *(s16 *)((char *)0x802CA518 + temp_r25 + 0x610e) = arg3 + 1;

    /* Some calculation */
    temp_r4 = 0x1; // This is just an initial value. May be more complex.

    temp_r5 = temp_r23 - (temp_r23 + temp_r24);
    temp_r21 = temp_r23;
    
    if (temp_r5 < *(s8 *)((char *)0x802CA518 + 0x8)) {
        temp_r5 = *(s8 *)((char *)0x802CA518 + 0x8);
    }

    // Loop and calculations continue
    return 0; /* Placeholder, complex loop logic to reassemble */
}

void fn_80103200(void *arg0, s8 arg1, s8 arg2) {
    M2C_UNK fn_8002C6F4();
    extern M2C_UNK lbl_802CA518;
    s32 temp_r8;
    u8 temp_r7;

    temp_r8 = arg2 << 6;
    if (((s8) M2C_FIELD((&lbl_802CA518 + 0x10000 + arg1 + temp_r8), u8 *, -0x1E72) == 0) && (!(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x254) & 0x20000) || !(M2C_FIELD((&lbl_802CA518 + arg1 + temp_r8), u8 *, 0x300D) & 2)) && ((M2C_FIELD(arg0, s8 *, 0xC) = arg1, M2C_FIELD(arg0, s8 *, 0xD) = arg2, temp_r7 = M2C_FIELD((&lbl_802CA518 + arg1 + temp_r8), u8 *, 0xD), ((temp_r7 == 0) != 0)) || (temp_r7 == (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x198)))) {
        fn_8002C6F4();
    }
}

s32 fn_801032F8(void) {
    M2C_UNK fn_800D758C(s32);
    extern s32 lbl_80367918;
    fn_800D758C(lbl_80367918);
    return 0;
}

