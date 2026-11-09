/* Functions from 0x80055C74 to 0x8005A29C, found by decomp-toolkit. */
#include "common.h"

s32 fn_80055C74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

u8 fn_80055C7C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 5);
}

s32 fn_80055C84(s32 *arg0) {
    return *arg0;
}

void *fn_8000CAA0(void *, s32, void *);             /* extern */
s32 fn_80234450(void *, s32);                       /* extern */
extern u16 lbl_80285BD0[16];
void fn_80055C8C(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80285BD0, arg2, &lbl_80285BD0);
    *(s32 *)((char *)temp_r3 + 0x6C) = arg1;
    fn_80234450((char *)temp_r3 + 0x30, arg0);
    return;
}

void fn_80055D68(void *arg0) {
    *(u16 *)((char *)arg0 + 0x68) = 0;
    fn_8005C8B4((char *)arg0 + 0x30);
}

s32 fn_80055D94(void) {
    return 0;
}

void fn_80055D9C(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x32) = -1;
    }
}

void fn_80055DB0(void *arg0, s32 arg1) {
    *(u8*)((char*)arg0 + 0x30) = (u8)arg1;
    *(u32*)((char*)arg0 + 0x190) = 1; // Ensure initialization of a field not in the original
}

void fn_800561A8(void) {
    M2C_UNK fn_800561EC();
    fn_800561EC();
}

void fn_800561C8(void *arg0) {
    M2C_UNK fn_80067304(s32);
    fn_80067304(M2C_FIELD(arg0, s32 *, 0x4C));
}

void fn_80056580(void) {
    void *fn_8000C0C0(M2C_UNK *);
    extern M2C_UNK lbl_80285B90;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_80285B90);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s8 *, 0x36) = -1;
    }
}

void fn_80056698(void *arg0) {
    M2C_UNK fn_800C4588(s32);
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}

void fn_800566D4(void *arg0) {
    void fn_80066D00(s32);
    void fn_80067984(s32);
    void fn_80067EDC(s32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_802209FC(void);
    void fn_80220DEC(s32, s32, s32);
    void fn_8022124C(s32, s32, s32, s32);
    void fn_802212FC(s32, s32, s32, s32);
    void fn_80221BA8(void *, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_80222644(void *, void *, s32, s32, s32, s32, s32, s32);
    void fn_802228D8(void *, s32, s32, s32, s32, s32, f32, f32, f32);
    void fn_80222C50(void *, s32);
    void fn_80222EB4(void);
    void fn_80223A5C(s32, s32, s32, s32, s32);
    void fn_80223AA0(s32, s32, s32, s32, s32);
    void fn_80223AE4(s32, s32, s32, s32, s32, s32);
    void fn_80223B4C(s32, s32, s32, s32, s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    extern f32 lbl_80369108;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369138;
    extern f32 lbl_8036913C;
    u8 sp8[0x28];
    void *tex;
    u8 alpha;
    f32 fv1;
    f32 fu1;
    f32 fz1;
    f32 fzero;
    s32 endArg;

    tex = *(void **)((u8 *)arg0 + 0x30);
    if (tex != NULL) {
        alpha = *((u8 *)arg0 + 0x34);
        if (tex != NULL) {
            if (*((u8 *)arg0 + 0x37) == 0 && (s32)alpha > 0) {
                fn_80067EDC(0);
                fn_80222334(1);
                fn_80222370(4, 0, 1, 1, 0, 0, 2);
                fn_802240C8(1);
                fn_80223A5C(0, 0xF, 0xF, 0xF, 8);
                fn_80223AE4(0, 0, 0, 0, 1, 0);
                fn_80223AA0(0, 7, 7, 7, 5);
                fn_80223B4C(0, 0, 0, 0, 1, 0);
                fn_80220428(1);
                fn_80223F2C(0, 0, 0, 4);
                fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
                fn_80222644(sp8, tex, 0x260, 0x1C0, 4, 0, 0, 0);
                fn_802228D8(sp8, 1, 1, 0, 0, 0, lbl_80369108, lbl_80369108, lbl_80369108);
                fn_80222C50(sp8, 0);
                fn_802245D8(1, 4, 5, 7);
                fn_80224684(0, 3, 0);
                fn_8021FBB8();
                fn_8021F4E4(9, 1);
                fn_8021F4E4(0xB, 1);
                fn_8021F4E4(0xD, 1);
                fn_8021FBF0(0, 9, 1, 4, 0);
                fn_8021FBF0(0, 0xB, 1, 5, 0);
                fn_8021FBF0(0, 0xD, 1, 4, 0);
                fn_80220DEC(0x80, 0, 4);
                fzero = lbl_80369108;
                fz1 = lbl_80369138;
                endArg = -1;
                fu1 = lbl_8036912C;
                fv1 = lbl_8036913C;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fz1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fu1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fz1;
                *(volatile f32 *)0xCC008000 = fv1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fu1;
                *(volatile f32 *)0xCC008000 = fu1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fv1;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = 0xFF;
                *(volatile u8 *)0xCC008000 = alpha;
                *(volatile f32 *)0xCC008000 = fzero;
                *(volatile f32 *)0xCC008000 = fu1;
                fn_80066D00(endArg);
                fn_80067984(0);
            }
            fn_8022124C(0, 0, 0x260, 0x1C0);
            fn_802212FC(0x260, 0x1C0, 4, 0);
            fn_80221BA8(tex, 0);
            fn_802209FC();
            fn_80222EB4();
            *((u8 *)arg0 + 0x37) = 0;
        }
    }
}

void *fn_80056A04(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_800C4588(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80056A60(void *arg0) {
    s8 *fn_800C4638(M2C_UNK, void *, M2C_UNK);
    extern u8 lbl_8026AD80;
    extern f32 lbl_80369108;
    extern f32 lbl_80369140;
    extern f32 lbl_80369144;
    
    void *temp_r31 = arg0;
    u16 temp_r0 = 0x30; // to be stored to 0x4
    
    void *temp_r4 = &lbl_8026AD80 + 0xA9;
    
    M2C_FIELD(temp_r31, void **, 0x14) = fn_800C4638(0x80, temp_r4, 0);
    
    M2C_FIELD(temp_r31, f32 *, 8) = lbl_80369108;
    M2C_FIELD(temp_r31, f32 *, 0xC) = lbl_80369140;
    M2C_FIELD(temp_r31, f32 *, 0x10) = lbl_80369144;
    
    M2C_FIELD(temp_r31, s8 *, 3) = 0xFF; // 0xFF
    M2C_FIELD(temp_r31, s8 *, 0) = 0;
    M2C_FIELD(temp_r31, s16 *, 4) = 0x30;
    
    *M2C_FIELD(temp_r31, s8 **, 0x14) = 0;
    
    return temp_r31;
}

void fn_80056AE0(void *arg0, u32 arg1) {
    M2C_UNK fn_80234450(s32);
    if (arg1 != 0U) {
        fn_80234450(M2C_FIELD(arg0, s32 *, 0x14));
    }
}

void fn_80056B0C(void *arg0) {
    void fn_800072B0(s32 *, s32 *, s32 *, s32 *);
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_80007818(f32, f32, f32, f32);
    void fn_80007838(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(u8);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001003C(s16, s16, s32, s32, s32, void *, ...);
    s32 fn_80010770(u8 *, s32, f32);
    s32 fn_80010B78(u8 *, s32, f32);
    extern s32 lbl_803690D8;
    extern s32 lbl_803690DC;
    extern s32 lbl_803690E0;
    extern s32 lbl_803690E4;
    extern s32 lbl_803690E8;
    extern s32 lbl_803690EC;
    extern s32 lbl_803690F0;
    extern s32 lbl_803690F4;
    extern s32 lbl_803690F8;
    extern s32 lbl_803690FC;
    extern f32 lbl_80369108;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369138;
    extern s32 lbl_8036C41C;
    extern s32 lbl_8036C420;
    extern s32 lbl_8036C424;
    extern s32 lbl_8036C428;
    extern s32 lbl_8036C42C;
    extern s32 lbl_8036C430;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 temp_r30;
    s32 temp_r3_2;
    s32 temp_r5;
    s32 temp_r4;
    u8 *temp_r3;
    u8 temp_r0;

    fn_8000A258();
    fn_80009B8C(*(u8 *)((u8 *)arg0 + 3));
    fn_80009D74(lbl_80369108, *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C + *(f32 *)((u8 *)arg0 + 0x10), lbl_8036912C);
    fn_8000A174(0, 0x12);
    fn_8000A248();
    temp_r0 = *(u8 *)((u8 *)arg0 + 0);
    temp_r30 = (s16)(*(s16 *)((u8 *)arg0 + 4) / 3);
    switch ((s32)temp_r0) {
    case 0:
        fn_80007898(3);
        fn_80007838(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        sp38 = lbl_803690DC;
        sp3C = lbl_803690D8;
        sp40 = lbl_8036C420;
        sp44 = lbl_8036C41C;
        fn_800072B0(&sp44, &sp40, &sp3C, &sp38);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        temp_r30 = temp_r30 + temp_r30;
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_800076AC(0, 0, 0, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_80007898(3);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)*(s16 *)((u8 *)arg0 + 4), lbl_80369108, lbl_80369108);
        sp28 = lbl_8036C428;
        sp2C = lbl_8036C424;
        sp30 = lbl_803690E4;
        sp34 = lbl_803690E0;
        fn_800072B0(&sp34, &sp30, &sp2C, &sp28);
        fn_800075D8();
        fn_80007884();
        break;
    case 1:
        fn_80007898(3);
        fn_80007838(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        sp18 = lbl_803690EC;
        sp1C = lbl_803690E8;
        sp20 = lbl_8036C430;
        sp24 = lbl_8036C42C;
        fn_800072B0(&sp24, &sp20, &sp1C, &sp18);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)*(s16 *)((u8 *)arg0 + 4), lbl_80369108, lbl_80369108);
        fn_800076AC(0, 0, 0, 0xFF);
        fn_800075D8();
        fn_80007884();
        break;
    case 2:
        fn_80007898(1);
        fn_80007838(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108);
        temp_r30 = temp_r30 + temp_r30;
        fn_80007818(lbl_80369138, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_800076AC(0, 0, 0, 0xFF);
        fn_800075D8();
        fn_80007884();
        fn_80007898(3);
        fn_80007838(lbl_80369108, (f32)temp_r30, lbl_80369108, lbl_80369108);
        fn_80007818(lbl_80369138, (f32)*(s16 *)((u8 *)arg0 + 4), lbl_80369108, lbl_80369108);
        sp8 = lbl_803690FC;
        spC = lbl_803690F8;
        sp10 = lbl_803690F4;
        sp14 = lbl_803690F0;
        fn_800072B0(&sp14, &sp10, &spC, &sp8);
        fn_800075D8();
        fn_80007884();
        break;
    }
    temp_r3 = *(u8 **)((u8 *)arg0 + 0x14);
    if ((temp_r3 != NULL) && ((s8)*temp_r3 != 0)) {
        fn_8000A258();
        fn_80009D74(*(f32 *)((u8 *)arg0 + 8), *(f32 *)((u8 *)arg0 + 0xC), *(f32 *)((u8 *)arg0 + 0x10), lbl_8036912C);
        fn_8000A174(0, 0x13);
        fn_8000A248();
        temp_r30 = fn_80010B78(*(u8 **)((u8 *)arg0 + 0x14), -1, lbl_8036912C);
        temp_r3_2 = fn_80010770(*(u8 **)((u8 *)arg0 + 0x14), -1, lbl_8036912C);
        temp_r5 = 0x260 - temp_r30;
        temp_r4 = (u32)temp_r5 >> 0x1FU;
        temp_r3_2 = *(s16 *)((u8 *)arg0 + 4) - temp_r3_2;
        temp_r4 = temp_r4 + temp_r5;
        temp_r4 = temp_r4 >> 1;
        temp_r0 = (u32)temp_r3_2 >> 0x1FU;
        temp_r0 = temp_r0 + temp_r3_2;
        temp_r0 = (u8)(temp_r0 >> 1);
        fn_8001003C((s16)temp_r4, (s16)((s32)((((u32)temp_r3_2) >> 0x1FU) + temp_r3_2) >> 1), 1, 1, 0, *(u8 **)((u8 *)arg0 + 0x14), lbl_8036912C, lbl_80369108);
    }
    fn_80009B28();
}

void fn_80057020(void *arg0) {
    void fn_800075D8(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, u8, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_80057AE0(void *);
    extern f32 lbl_80369108;
    extern f64 lbl_80369118;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369148;
    extern f32 lbl_8036914C;
    typedef u8 (*VFn)(void *);
    s32 temp_r25;
    s32 var_r27;
    s32 var_r28;
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r31;
    s32 temp_r4;
    void *temp_r3;

    (void)lbl_80369118;
    var_r31 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_r29 = (s32)*(f32 *)((u8 *)arg0 + 4);
    var_r28 = (s32)*(f32 *)((u8 *)arg0 + 8);
    if (*(void **)((u8 *)arg0 + 0x24) != NULL) {
        var_r28 += 8;
        var_r31 -= 0x10;
    }
    if (var_r31 < 0x10) {
        return;
    }
    fn_8000A258();
    fn_80009D74((f32)temp_r29, (f32)var_r28, lbl_8036912C + *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
    fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[5](arg0), 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, lbl_8036914C);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009D74((f32)temp_r29, (f32)(var_r28 + 8), lbl_8036912C + *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
    fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[6](arg0), 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, (f32)(var_r31 - 0x10));
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    temp_r30 = var_r28 + var_r31;
    fn_80009D74((f32)temp_r29, (f32)(temp_r30 - 8), lbl_8036912C + *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
    fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[7](arg0), 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, lbl_8036914C);
    fn_800075D8();
    fn_80007884();
    temp_r4 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_r25 = (var_r31 * *(s32 *)((u8 *)arg0 + 0x1C)) / temp_r4;
    var_r27 = (var_r31 * *(s32 *)((u8 *)arg0 + 0x18)) / temp_r4;
    if (temp_r25 + var_r27 > var_r31) {
        var_r27 = var_r31 - var_r27;
    }
    if (var_r27 < 0x10) {
        if (var_r27 <= 4) {
            var_r27 = 4;
        }
        fn_8000A258();
        fn_80009D74((f32)temp_r29, (f32)(var_r28 + temp_r25), *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[3](arg0), 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, (f32)var_r27);
        fn_800075D8();
        fn_80007884();
    } else {
        s32 mid;
        fn_8000A258();
        mid = var_r28 + temp_r25;
        fn_80009D74((f32)temp_r29, (f32)mid, *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[2](arg0), 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, lbl_8036914C);
        fn_800075D8();
        fn_80007884();
        fn_8000A258();
        fn_80009D74((f32)temp_r29, (f32)(mid + 8), *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[3](arg0), 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, (f32)(var_r27 - 0x10));
        fn_800075D8();
        fn_80007884();
        fn_8000A258();
        fn_80009D74((f32)temp_r29, (f32)(var_r27 + (mid - 8)), *(f32 *)((u8 *)arg0 + 0xC), lbl_8036912C);
        fn_80009F90(*(s32 *)arg0, (u8)(*(VFn **)((u8 *)arg0 + 0x2C))[4](arg0), 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369108, lbl_80369148, lbl_8036914C);
        fn_800075D8();
        fn_80007884();
    }
    temp_r3 = *(void **)((u8 *)arg0 + 0x24);
    if (temp_r3 != NULL) {
        if (*(s32 *)((u8 *)arg0 + 0x1C) <= 0) {
            *((u8 *)temp_r3 + 0x55) = 0;
        } else {
            *((u8 *)temp_r3 + 0x55) = 1;
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) + *(s32 *)((u8 *)arg0 + 0x18) >= *(s32 *)((u8 *)arg0 + 0x14)) {
            *((u8 *)*(void **)((u8 *)arg0 + 0x28) + 0x55) = 0;
        } else {
            *((u8 *)*(void **)((u8 *)arg0 + 0x28) + 0x55) = 1;
        }
        {
            void *b = *(void **)((u8 *)arg0 + 0x24);
            *(f32 *)((u8 *)b + 0x38) = (f32)(temp_r29 + 5);
            *(f32 *)((u8 *)b + 0x3C) = (f32)(var_r28 - 8);
            *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x24) + 0x40) = *(f32 *)((u8 *)arg0 + 0xC);
            fn_80057AE0(*(void **)((u8 *)arg0 + 0x24));
        }
        {
            void *b = *(void **)((u8 *)arg0 + 0x28);
            *(f32 *)((u8 *)b + 0x38) = (f32)(temp_r29 + 5);
            *(f32 *)((u8 *)b + 0x3C) = (f32)(temp_r30 + 8);
            *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x28) + 0x40) = *(f32 *)((u8 *)arg0 + 0xC);
            fn_80057AE0(*(void **)((u8 *)arg0 + 0x28));
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) < *(s32 *)((u8 *)arg0 + 0x20)) {
            void *b = *(void **)((u8 *)arg0 + 0x24);
            if (*((u8 *)b + 0x54) != 0) {
                *(s32 *)((u8 *)b + 0x4C) = 0x1E;
            } else {
                *(s32 *)((u8 *)b + 0x4C) = 1;
            }
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) > *(s32 *)((u8 *)arg0 + 0x20)) {
            void *b = *(void **)((u8 *)arg0 + 0x28);
            if (*((u8 *)b + 0x54) != 0) {
                *(s32 *)((u8 *)b + 0x4C) = 0x1E;
            } else {
                *(s32 *)((u8 *)b + 0x4C) = 1;
            }
        }
    }
    *(s32 *)((u8 *)arg0 + 0x20) = *(s32 *)((u8 *)arg0 + 0x1C);
}

void fn_80057860(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x18);
    if (var_r4 > temp_r0) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
}

void fn_80057880(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (var_r4 > temp_r0) {
        var_r4 = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4;
}

void fn_80057898(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}

void fn_800578A0(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
}

void fn_800578A8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, f32 *, 4) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 8) = (f32) arg2;
    M2C_FIELD(arg0, s32 *, 0x10) = arg3;
}

void *fn_800578F0(void *arg0, s16 arg1) {
    extern u16 lbl_80285BF0;
    void *temp_r31;
    void *temp_r31_2;

    if (arg0 != NULL) {
        *(u16**)((u8*)arg0 + 0x2C) = &lbl_80285BF0;
        fn_8006D8E8(*(s32*)((u8*)arg0));
        temp_r31 = *(void**)((u8*)arg0 + 0x24);
        if (temp_r31 != NULL) {
            fn_8006D8E8(*(s32*)((u8*)temp_r31 + 0x30));
            fn_800C428C(temp_r31);
        }
        temp_r31_2 = *(void**)((u8*)arg0 + 0x28);
        if (temp_r31_2 != NULL) {
            fn_8006D8E8(*(s32*)((u8*)temp_r31_2 + 0x30));
            fn_800C428C(temp_r31_2);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80057998(void *arg0) {
    s32 fn_8006D948(s32 arg0);
    extern u8 lbl_8026AD80[];
    extern u8 lbl_80285BF0[];
    extern f32 lbl_80369108;
    
    *(u32**)arg0 = (u32*)lbl_80285BF0;
    *(s32*)((char*)arg0 + 0x2c) = fn_8006D948((s32)(lbl_8026AD80 + 0xAA));
    *(s32*)((char*)arg0 + 0x14) = 0;
    *(s32*)((char*)arg0 + 0x18) = 0;
    *(s32*)((char*)arg0 + 0x1C) = 0;
    *(s32*)((char*)arg0 + 0x20) = 0;
    *(f32*)((char*)arg0 + 4) = lbl_80369108;
    *(f32*)((char*)arg0 + 8) = lbl_80369108;
    *(f32*)((char*)arg0 + 0xC) = lbl_80369108;
    *(s32*)((char*)arg0 + 0x24) = 0;
    *(s32*)((char*)arg0 + 0x28) = 0;
    return arg0;
}

void *fn_80057A10(void *arg0, s16 arg1) {
    M2C_UNK fn_8006D8E8(s32);
    M2C_UNK fn_800C428C(void *);
    if (arg0 != NULL) {
        fn_8006D8E8(M2C_FIELD(arg0, s32 *, 0x30));
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void *fn_80057A64(void *arg0, s32 arg1) {
    s32 fn_8006D948(void *);
    extern u8 lbl_8026AD80[];
    extern f32 lbl_80369108;
    
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = fn_8006D948(&lbl_8026AD80[0xBF]);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s8 *, 0x55) = 1;
    M2C_FIELD(arg0, s8 *, 0x54) = 1;
    M2C_FIELD(arg0, s32 *, 0x50) = 0x30;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_80369108;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_80369108;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_80369108;
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
    return arg0;
}

void fn_80057AE0(void *arg0) {
    M2C_UNK fn_80007538();
    M2C_UNK fn_800075D8();
    M2C_UNK fn_800077B0(f32, f32, f32, f32);
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK, s32);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    M2C_UNK fn_80009F90(s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    extern f32 lbl_80369108;
    extern f32 lbl_8036912C;
    extern f32 lbl_80369134;
    extern f32 lbl_80369150;
    extern f32 lbl_80369154;
    M2C_UNK var_r27;
    f32 temp_f0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r26;
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r5;
    s32 var_r27_2;
    s32 var_r29;
    s32 var_r30;
    s32 var_r4;

    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) > 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + 1);
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) - 1);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_r0 >= temp_r3) {
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (temp_r0 - temp_r3);
    }
    temp_r31 = (s32) (lbl_80369108 + (((f32) M2C_FIELD(arg0, s32 *, 0x48) * lbl_80369150) / (f32) M2C_FIELD(arg0, s32 *, 0x50)));
    if ((u8) M2C_FIELD(arg0, u8 *, 0x55) != 0) {
        var_r30 = 0x10;
        var_r29 = 0x20;
        var_r27 = 0;
        if ((u8) M2C_FIELD(arg0, u8 *, 0x34) == 1) {
            var_r27 = 1;
            var_r30 = 0x10 >> 1;
            var_r29 = 0x20 >> 1;
        }
        fn_8000A258();
        fn_80009D74(M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0x40), lbl_8036912C);
        fn_80009F90(M2C_FIELD(arg0, s32 *, 0x30), var_r27, 0x11);
        fn_8000A248();
        temp_r5 = -var_r30;
        temp_r3_2 = -var_r29;
        var_r4 = ((u32) temp_r5 >> 0x1FU) + temp_r5;
        var_r27_2 = var_r4 >> 1;
        temp_r26 = (s32) (((u32) temp_r3_2 >> 0x1FU) + temp_r3_2) >> 1;
        if ((u8) M2C_FIELD(arg0, u8 *, 0x54) != 0) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4C);
            var_r4 = temp_r0_2 ^ 0x80000000;
            temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x44);
            temp_f0 = lbl_80369154 - (f32) temp_r0_2;
            temp_r3_3 = (s32) (lbl_80369108 + (lbl_80369134 - ((lbl_80369134 * (temp_f0 * temp_f0)) / (lbl_80369154 * lbl_80369154))));
            switch (temp_r0_3) {                    /* switch 1; irregular */
            case 8:                                 /* switch 1 */
                var_r27_2 -= temp_r3_3;
                break;
            case 4:                                 /* switch 1 */
                var_r27_2 += temp_r3_3;
                break;
            case 1:                                 /* switch 1 */
                var_r27_2 -= temp_r3_3;
                break;
            case 2:                                 /* switch 1 */
                var_r27_2 += temp_r3_3;
                break;
            }
        }
        fn_80007898(2, var_r4);
        temp_r0_4 = M2C_FIELD(arg0, s32 *, 0x44);
        if (temp_r0_4 != 8) {
            if (temp_r0_4 < 8) {
                if (temp_r0_4 != 4) {
                    goto block_25;
                }
                goto block_24;
            }
block_25:
            fn_800077D8((f32) var_r27_2, (f32) temp_r26, (f32) var_r30, (f32) var_r29);
        } else {
block_24:
            fn_800077D8((f32) temp_r26, (f32) var_r27_2, (f32) var_r29, (f32) var_r30);
        }
        fn_800077B0((f32) (temp_r31 * var_r30), lbl_80369108, (f32) var_r30, (f32) var_r29);
        fn_800075D8();
        temp_r0_5 = M2C_FIELD(arg0, s32 *, 0x44);
        switch (temp_r0_5) {                        /* switch 2; irregular */
        case 4:                                     /* switch 2 */
            fn_80007538();
            /* fallthrough */
        case 2:                                     /* switch 2 */
            fn_80007538();
            /* fallthrough */
        case 8:                                     /* switch 2 */
            fn_80007538();
            break;
        }
        fn_80007884();
    }
}

void fn_80057E54(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x34) = arg1;
}

void fn_80057E5C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x54) = arg1;
}

void fn_80057E64(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x55) = arg1;
}

void fn_80057E6C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x54) != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0x1E;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
}

void fn_80057E90(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x40) = farg0;
}

void fn_80057E98(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) arg2;
}

extern u8 lbl_80285B6C[16];
void fn_80057EDC(void) {
    fn_8000BF00(&lbl_80285B6C);
}

void fn_80057FD4(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) == arg1) {
        fn_8000BF00(&lbl_80285B6C);
    }
}

void fn_80058008(void *arg0) {
    M2C_UNK fn_8000C60C(s32);
    if (M2C_FIELD(arg0, u16 *, 0x54) & 4) {
        fn_8005EA14(M2C_FIELD(arg0, s32 *, 0x34));
    }
    fn_8000C60C(M2C_FIELD(arg0, s32 *, 0x30));
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    fn_800C4588(M2C_FIELD(arg0, s32 *, 0x40));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
}

void fn_8005806C(void *arg0) {
    extern f32 lbl_80369108;
    extern f32 lbl_80369158;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    u32 temp_r3;

    M2C_FIELD(arg0, u8 *, 0x53) = (u8) (M2C_FIELD(arg0, u8 *, 0x53) + 1);
    if ((s32) M2C_FIELD(arg0, u8 *, 0x53) >= 0x14) {
        M2C_FIELD(arg0, u8 *, 0x53) = 0x14U;
        fn_8000C188();
    }
    temp_f6 = lbl_80369158 * lbl_80369158;
    temp_f0 = lbl_80369158 - (f32) M2C_FIELD(arg0, u8 *, 0x53);
    temp_f4 = (f32) M2C_FIELD(arg0, u8 *, 0x3F);
    temp_f3 = lbl_80369108 - temp_f4;
    M2C_FIELD(arg0, s8 *, 0x3B) = (s8) (temp_f4 + (temp_f3 - ((temp_f3 * (temp_f0 * temp_f0)) / temp_f6)));
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x4C) * M2C_FIELD(arg0, u8 *, 0x51);
    temp_f3_2 = lbl_80369158 - (f32) M2C_FIELD(arg0, u8 *, 0x53);
    temp_f4_2 = (f32) temp_r3;
    temp_f2 = (f32) ((s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1) - temp_f4_2;
    M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (temp_f4_2 + (temp_f2 - ((temp_f2 * (temp_f3_2 * temp_f3_2)) / temp_f6)));
}

void fn_800588EC(s32 arg0) {
    void fn_8000C070(s32, s32);
    fn_8000C070(arg0, 0);
}

void fn_80058910(void *arg0, u8 arg1) {
    M2C_UNK fn_8005EA14(s32);
    M2C_UNK fn_8005EB80(s32, M2C_UNK);
    if (arg1 != 0) {
        fn_8005EB80(M2C_FIELD(arg0, s32 *, 0x34), 6);
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) | 4);
        return;
    }
    fn_8005EA14(M2C_FIELD(arg0, s32 *, 0x34));
    M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) & 0xFFFFFFFB);
}

void fn_80058A0C(void* arg0, s32 arg1, s32 arg2, s32 arg3) {
    // Just setting the first field to make sure we have a valid compile
    *(u16*)((char*)arg0 + 0x34) = (u16)arg1;
}

void fn_8005902C(s32 arg0, s16 arg1) {
    void *fn_8000CAA0(void *, s32, void *);
    extern void lbl_80285B34;
    *(s16*)((char*)fn_8000CAA0(&lbl_80285B34, arg0, &lbl_80285B34) + 0x32) = arg1;
}

void fn_8005906C(void *arg0) {
    M2C_UNK fn_8000C188();
    extern void *lbl_80367240;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(lbl_80367240, s32 *, 4);
    if (temp_r5 & (M2C_FIELD(lbl_80367240, s32 *, 8) ^ temp_r5) & 0x1F70) {
        fn_8000C188();
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) (M2C_FIELD(arg0, s16 *, 0x30) + 1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x30) == (s16) M2C_FIELD(arg0, s16 *, 0x32)) {
        fn_8000C188();
    }
}

void fn_800590CC(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
}

void fn_800590D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *fn_8000CAA0(void *, s32, void *);
    extern u16 lbl_80285B08[16];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(&lbl_80285B08, arg3, &lbl_80285B08);
    *(s32 *)((char *)temp_r3 + 0x30) = arg0;
    *(s32 *)((char *)temp_r3 + 0x34) = arg1;
    *(s32 *)((char *)temp_r3 + 0x38) = arg2;
}

void fn_80059138(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void *fn_8000CAF0(void *, u32);
    extern s16 lbl_80285B08;
    u32 var_r6;
    void *temp_r3;

    var_r6 = arg3;
    if (var_r6 == 0U) {
        var_r6 = 3U;
    }
    temp_r3 = fn_8000CAF0(&lbl_80285B08, var_r6);
    *(s32 *)((char *)temp_r3 + 0x30) = arg0;
    *(s32 *)((char *)temp_r3 + 0x34) = arg1;
    *(s32 *)((char *)temp_r3 + 0x38) = arg2;
}

void fn_800591A0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x30)(M2C_FIELD(arg0, s32 *, 0x34));
}

void fn_800591CC(void *arg0) {
    void fn_8000C070(void *, s32);

    *(s32 *)((u8 *)arg0 + 0x38) = *(s32 *)((u8 *)arg0 + 0x38) - 1;
    if (*(s32 *)((u8 *)arg0 + 0x38) <= 0) {
        fn_8000C070(arg0, 0x63);
    }
}

void fn_80059208(s32 arg0) {
    void *fn_8000CAF0(void *, void *);
    extern void lbl_80285AF0;
    *(s32*)((char*)fn_8000CAF0(&lbl_80285AF0, &lbl_80285AF0) + 0x30) = arg0;
}

void fn_80059240(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x30)(M2C_FIELD(arg0, s32 *, 0x18));
}

void fn_8005926C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 var_r27;
    s32 var_r28;
    
    var_r27 = arg7;
    if (var_r27 == 0) {
        fn_80007898(1);
        return;
    }
    var_r28 = 0;
loop_4:
    if (var_r27 != 0) {
        fn_80007898(1);
        var_r28 -= arg6;
        var_r27 = (s32) (var_r27 / 10);
        goto loop_4;
    }
}

f32 fn_80059440(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f64 fn_80237E90(f32);
    extern f32 lbl_80369108;
    extern f32 lbl_8036916C;
    extern f32 lbl_80369170;
    extern f32 lbl_80369174;
    extern f32 lbl_80369178;
    extern f32 lbl_8036917C;
    f32 temp_f1;
    f32 temp_f31;
    f32 var_f1;

    temp_f1 = farg2 - farg0;
    temp_f31 = farg3 - farg1;
    if ((temp_f1 < lbl_8036916C) && (temp_f1 > lbl_80369170)) {
        if (temp_f31 > lbl_80369108) {
            return lbl_80369108;
        }
        return lbl_80369174;
    }
    var_f1 = lbl_80369178 * (f32) fn_80237E90(temp_f1 / temp_f31);
    if (temp_f31 < lbl_80369108) {
        var_f1 += lbl_80369174;
    }
    return -((lbl_8036917C * (f32) (s32) (var_f1 / lbl_8036917C)) - var_f1);
}

f32 fn_80059500(f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4) {
    extern f32 lbl_80369104;
    extern f32 lbl_8036912C;
    extern f32 lbl_8036915C;
    extern f64 lbl_80369160;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f6;

    temp_f12 = lbl_80369104 * farg4;
    temp_f10 = farg4 - lbl_8036912C;
    temp_f6 = lbl_8036912C - farg4;
    return (f32) (((f64) (farg4 * (temp_f10 * farg4)) * (lbl_80369160 * (f64) (farg3 - farg1))) + (((f64) (farg4 * (temp_f6 * temp_f6)) * (lbl_80369160 * (f64) (farg2 - farg0))) + (f64) (((lbl_8036912C + temp_f12) * (temp_f10 * temp_f10) * farg1) + ((lbl_8036915C - temp_f12) * (farg4 * farg4) * farg2))));
}

void fn_800599D0(u16 arg0, u16 arg1, u16 arg2, u16 arg3, s32 arg4) {
    M2C_UNK fn_802209FC();
    M2C_UNK fn_8022124C(u16, u16, u16, u16);
    M2C_UNK fn_802212FC(u16, u16, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80221BA8(s32, M2C_UNK);
    M2C_UNK fn_80222EB4();
    
    u16 temp_r5 = arg1;
    u16 temp_r6 = arg2;
    u16 temp_r7 = arg3;
    
    fn_8022124C(arg0, temp_r5, temp_r6, temp_r7);
    fn_802212FC(temp_r6, temp_r7, 0x27, 0);
    fn_80221BA8(arg4, 0);
    fn_802209FC();
    fn_80222EB4();
}

void fn_80059A4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021FBF0(0, 9, 1, 4, 0);
    fn_80220428(0);
    fn_80222334(1);
    fn_80222370(4, 0, 1, 1, 0, 0, 2);
    fn_802240C8(1);
    fn_80223F2C(0, 0xFF, 0xFF, 4);
    fn_802239D0(0, 4);
    fn_80224684(0, 3, 0);
    fn_802245D8(1, 0, 7, 0);
    fn_80220DEC(0x80, 0, 4);

    temp_r0 = arg0 + arg2;
    temp_r3 = arg1 + arg3;

    *(f32 *)0xCC008000 = (f32) arg0;
    *(f32 *)0xCC008000 = (f32) arg1;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = (f32) temp_r0;
    *(f32 *)0xCC008000 = (f32) arg1;

    temp_f2 = (f32) temp_r0;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = temp_f2;
    *(f32 *)0xCC008000 = (f32) temp_r3;

    temp_f1 = (f32) arg0;
    *(f32 *)0xCC008000 = 0.0f;
    *(f32 *)0xCC008000 = temp_f1;
    *(f32 *)0xCC008000 = (f32) temp_r3;

    *(f32 *)0xCC008000 = 0.0f;

    fn_80066D00(-1, 0xCC010000, temp_f1, temp_f2, 0.0f);
}

f32 fn_80059EB8(s32 arg0, s32 arg1, f32 farg0, f32 farg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = arg0 >> 1;
    temp_r0 = arg1 % arg0;
    if (temp_r0 < temp_r5) {
        return farg0 + (((f32) temp_r0 * (farg1 - farg0)) / (f32) temp_r5);
    }
    return farg1 + (((f32) (temp_r0 - temp_r5) * (farg0 - farg1)) / (f32) temp_r5);
}

f32 fn_80059F64(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    return farg0 + ((farg3 * (farg1 - farg0)) / farg2);
}

f32 fn_80059F78(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 var_f2;
    f32 var_f5;
    s32 temp_r4;
    s32 var_ctr_2;
    s32 var_r5;
    u32 var_ctr;

    var_f5 = farg2;
    var_r5 = 1;
    var_f2 = farg3;
    if (arg0 > 1) {
        temp_r4 = arg0 - 8;
        if ((s32) (arg0 - 1) > 8) {
            var_ctr = (u32) (temp_r4 + 6) >> 3U;
            if (temp_r4 > 1) {
                do {
                    var_r5 += 8;
                    var_f2 = var_f2 * farg3 * farg3 * farg3 * farg3 * farg3 * farg3 * farg3 * farg3;
                    var_f5 = var_f5 * farg2 * farg2 * farg2 * farg2 * farg2 * farg2 * farg2 * farg2;
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_ctr_2 = arg0 - var_r5;
        if (var_r5 < arg0) {
            do {
                var_f2 *= farg3;
                var_f5 *= farg2;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    return farg0 + (((farg1 - farg0) * var_f2) / var_f5);
}

f32 fn_8005A028(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f4;
    f32 var_f5;
    s32 temp_r4;
    s32 var_ctr_2;
    s32 var_r5;
    u32 var_ctr;

    temp_f0 = farg2 - farg3;
    var_f5 = farg2;
    var_r5 = 1;
    temp_f2 = farg1 - farg0;
    var_f4 = temp_f0;
    if (arg0 > 1) {
        temp_r4 = arg0 - 8;
        if ((s32) (arg0 - 1) > 8) {
            var_ctr = (u32) (temp_r4 + 6) >> 3U;
            if (temp_r4 > 1) {
                do {
                    var_r5 += 8;
                    var_f4 = var_f4 * temp_f0 * temp_f0 * temp_f0 * temp_f0 * temp_f0 * temp_f0 * temp_f0 * temp_f0;
                    var_f5 = var_f5 * farg2 * farg2 * farg2 * farg2 * farg2 * farg2 * farg2 * farg2;
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
        }
        var_ctr_2 = arg0 - var_r5;
        if (var_r5 < arg0) {
            do {
                var_f4 *= temp_f0;
                var_f5 *= farg2;
                var_ctr_2 -= 1;
            } while (var_ctr_2 != 0);
        }
    }
    return farg0 + (temp_f2 - ((temp_f2 * var_f4) / var_f5));
}
#include "global.h"
#include "structs.h"

extern u16 lbl_80285BB0[16];
