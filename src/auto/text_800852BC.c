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
extern f64 lbl_803696C0;

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

void fn_800852BC(s32 arg0) {
    M2C_UNK fn_80069F04(s32);
    M2C_UNK fn_80223E5C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802246B8(M2C_UNK);
    fn_802246B8(0);
    fn_80223E5C(6, 0x80, 1, 0, 0);
    fn_80069F04(arg0);
    fn_802246B8(1);
    fn_80223E5C(7, 0, 1, 7, 0);
}

void fn_8008532C(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

void fn_80085360(void *arg0) {
    M2C_UNK fn_800072B0(s32 *, s32 *, s32 *, s32 *, s32, s32, s32);
    M2C_UNK fn_800075D8();
    M2C_UNK fn_80007818(f32, f32, f32, f32);
    M2C_UNK fn_80007838(f32, f32, f32, f32);
    M2C_UNK fn_80009B8C(M2C_UNK);
    void *fn_8000E0E4(void *);
    M2C_UNK fn_8001003C(s16, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, f32, f32);
    u32 fn_80010B78(M2C_UNK *, M2C_UNK, f32);
    M2C_UNK fn_80083E70(void *);
    M2C_UNK fn_80083F08(void *);
    M2C_UNK fn_802343E0(M2C_UNK *, void *);
    M2C_UNK fn_80234450(M2C_UNK *, void *);
    extern M2C_UNK lbl_8026C86C;
    extern s32 lbl_80369400;
    extern s32 lbl_80369404;
    extern s32 lbl_80369408;
    extern s32 lbl_8036940C;
    extern f32 lbl_80369418;
    extern f32 lbl_8036941C;
    extern f32 lbl_80369420;
    extern f32 lbl_80369424;
    extern f32 lbl_80369428;
    extern f32 lbl_8036942C;
    extern f32 lbl_80369430;
    extern f32 lbl_80369488;
    extern s32 lbl_8036C460;
    extern s32 lbl_8036C464;
    extern s32 lbl_8036C468;
    extern s32 lbl_8036C46C;
    M2C_UNK sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 sp18;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    u32 temp_r3;
    void *temp_r31;

    if (arg0 != NULL) {
        temp_r31 = M2C_FIELD(arg0, void **, 0x30);
        fn_80083F08(temp_r31);
        fn_80083E70(temp_r31);
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_80009D74(lbl_80369418, lbl_80369418, lbl_80369488, lbl_80369430);
        fn_8000A248();
        fn_80234450(&sp28, &lbl_8026C86C + 0x1B5);
        fn_802343E0(&sp28, fn_8000E0E4(&lbl_8026C86C + 0x1BB));
        fn_802343E0(&sp28, &lbl_8026C86C + 0x1C3);
        fn_802343E0(&sp28, fn_8000E0E4(&lbl_8026C86C + 0x1CA));
        fn_802343E0(&sp28, &lbl_8026C86C + 0x1D1);
        fn_802343E0(&sp28, fn_8000E0E4(&lbl_8026C86C + 0x1D8));
        fn_802343E0(&sp28, &lbl_8026C86C + 0x1DF);
        fn_802343E0(&sp28, fn_8000E0E4(&lbl_8026C86C + 0x1E6));
        if ((u32) M2C_FIELD(M2C_FIELD(temp_r31, void **, 0x58), u32 *, 0x194) != 0U) {
            fn_802343E0(&sp28, &lbl_8026C86C + 0x1F0);
            fn_802343E0(&sp28, fn_8000E0E4(&lbl_8026C86C + 0x1F7));
        }
        fn_8000A258();
        fn_8000A174(0, 0x12);
        fn_8000A248();
        fn_80007898(3);
        fn_80007838(lbl_80369418, lbl_8036941C, lbl_80369418, lbl_80369418);
        fn_80007818(lbl_80369420, lbl_80369424, lbl_80369418, lbl_80369418);
        sp14 = lbl_80369404;
        sp10 = lbl_80369400;
        spC = lbl_8036C464;
        sp8 = lbl_8036C460;
        fn_800072B0(&sp8, &spC, &sp10, &sp14, lbl_8036C464, lbl_80369400, lbl_80369404);
        fn_800075D8();
        fn_80007884();
        fn_80007898(3);
        fn_80007838(lbl_80369418, lbl_80369424, lbl_80369418, lbl_80369418);
        fn_80007818(lbl_80369420, lbl_80369428, lbl_80369418, lbl_80369418);
        sp24 = lbl_8036C46C;
        sp20 = lbl_8036C468;
        sp1C = lbl_8036940C;
        sp18 = lbl_80369408;
        fn_800072B0(&sp18, &sp1C, &sp20, &sp24, lbl_8036940C, lbl_8036C468, lbl_8036C46C);
        fn_800075D8();
        fn_80007884();
        fn_8000A258();
        fn_80009C0C(lbl_8036942C);
        fn_8000A248();
        fn_8000A258();
        fn_8000A174(0, 0x13);
        fn_8000A248();
        temp_r3 = fn_80010B78(&sp28, -1, lbl_80369430);
        fn_8001003C((s16) (0x130 - ((s32) ((temp_r3 >> 0x1FU) + temp_r3) >> 1)), 0x197, 1, 1, 0, &sp28, lbl_80369430, lbl_80369418);
        fn_8000A258();
        fn_80009C0C(lbl_80369430);
        fn_8000A248();
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}

void fn_80088CC4(void *arg0) {
    M2C_UNK fn_80088300(void *);
    M2C_UNK fn_800888A4(void *);
    s16 temp_r0;

    temp_r0 = *(s16 *)((char *)*(void **)((char *)arg0 + 0x30) + 4);
    switch (temp_r0) {
    case 0:
        fn_800888A4(arg0);
        return;
    case 1:
        fn_80088300(arg0);
        return;
    }
}

void fn_80088F34(void) {
    extern u16 lbl_802899CC;
    void *fn_8000C0C0(void *);
    void *fn_8000CAF0(void *, s32);
    
    void* ptr = fn_8000C0C0(&lbl_802899CC);
    if (ptr != NULL) {
        ((u8*)ptr)[0x30] = 0x7B;
        return;
    }
    fn_8000CAF0(&lbl_802899CC, 5);
}

void fn_80088F8C(void *arg0) {
    f32 fn_800067BC(M2C_UNK, s16, f32, f32, f32, f32);
    extern f32 lbl_80369680;
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x34) = (s16) fn_800067BC(0, temp_r4, M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C), (f32) (6 - temp_r4), lbl_80369680);
}

void fn_80089424(s32 arg0) {
    M2C_UNK fn_8000A3F8(s32);
    s32 fn_8000A418();
    if (fn_8000A418() != 0) {
        fn_8000A3F8(arg0);
    }
}

void fn_80089460(void *arg0) {
    M2C_UNK fn_8000BFEC(M2C_UNK *, M2C_UNK *);
    extern M2C_UNK fn_80089490;
    M2C_FIELD(arg0, s16 *, 0x36) = 0;
    fn_8000BFEC(&fn_80089490, &fn_80089490);
}

u16 fn_80089490(void) {
    extern u16 *lbl_803674E4;
    return lbl_803674E4[0x2A/2];
}

s32 fn_800894F8(void) {
    void fn_8000BF00(void *);
    extern u8 lbl_802899C0[];
    fn_8000BF00(lbl_802899C0);
    return 1;
}

s32 fn_80089524(void) {
    M2C_UNK fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_802899C0;
    fn_8000CAF0(&lbl_802899C0, 4);
    return 1;
}

void fn_80089554(void) {
    M2C_UNK fn_800077D8(f32, f32, f32, f32);
    M2C_UNK fn_80007884();
    M2C_UNK fn_80007898(M2C_UNK);
    M2C_UNK fn_80009D74(f32, f32, f32, f32);
    extern f32 lbl_80369690;
    extern f32 lbl_803696B0;
    extern f32 lbl_803696B4;
    extern f32 lbl_803696B8;
    fn_8000A258();
    fn_80009D74(lbl_80369690, lbl_80369690, lbl_80369690, lbl_803696B0);
    fn_8000A174(0, 0x800);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(lbl_80369690, lbl_80369690, lbl_803696B4, lbl_803696B8);
    fn_80007884();
}

s32 fn_800895B8(void) {
    extern void *lbl_8036C310;
    return M2C_FIELD(lbl_8036C310, s32 *, 0x70);
}

u16 fn_80089634(void) {
    extern void *lbl_803674E4;
    return M2C_FIELD(lbl_803674E4, u16 *, 0x32);
}

u16 fn_80089640(void) {
    extern u16 *lbl_803674E4;
    return lbl_803674E4[0x19];
}

void fn_80089650(s32 arg0, s32 arg1) {
    void fn_8008A32C(void *, s32, s32);
    extern void *lbl_803674E4;

    fn_8008A32C(lbl_803674E4, arg0, arg1);
}

void fn_80089680(void *arg0) {
    void fn_80202540(void *, f32, f32, f32);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_8022224C(s32, s32 *);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802239D0(s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80224C4C(void *, s32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    extern f32 lbl_80369694;
    extern f32 lbl_80369698;
    extern f32 lbl_8036969C;
    extern f32 lbl_803696A0;
    extern f32 lbl_803696A4;
    extern f32 lbl_803696BC;
    u8 spC[0x44];
    s32 sp8;
    f32 ratio;
    f32 diff;
    f32 hi;
    f32 lo;
    f32 bc;
    u16 bits;
    u32 u34;
    u32 u36;

    if (*(u16 *)((u8 *)arg0 + 0x34) >= *(u16 *)((u8 *)arg0 + 0x36)) {
        bc = lbl_803696BC;
        bits = *(u16 *)((u8 *)arg0 + 0x32);
        bits &= 0xFFFE;
        *(u16 *)((u8 *)arg0 + 0x32) = bits;
        bits = *(u16 *)((u8 *)arg0 + 0x32);
        bits |= 2;
        *(u16 *)((u8 *)arg0 + 0x32) = bits;
        *(u8 *)((u8 *)arg0 + 0x43) = (u8)(s32)(bc * *(f32 *)((u8 *)arg0 + 0x3C));
    }
    if (*(u16 *)((u8 *)arg0 + 0x32) & 1) {
        *(u16 *)((u8 *)arg0 + 0x34) = *(u16 *)((u8 *)arg0 + 0x34) + 1;
        bc = lbl_803696BC;
        u34 = *(u16 *)((u8 *)arg0 + 0x34);
        u36 = *(u16 *)((u8 *)arg0 + 0x36);
        lo = *(f32 *)((u8 *)arg0 + 0x38);
        hi = *(f32 *)((u8 *)arg0 + 0x3C);
        ratio = (f32)u34 / (f32)u36;
        diff = hi - lo;
        *(u8 *)((u8 *)arg0 + 0x43) = (u8)(s32)(bc * (ratio * diff + lo));
    }
    if (*(u8 *)((u8 *)arg0 + 0x43) != 0) {
        fn_80202B3C(spC, lbl_80369690, lbl_80369694, lbl_80369690, lbl_80369698, lbl_80369690, lbl_8036969C);
        fn_80224C4C(spC, 1);
        fn_80202540(spC, lbl_80369690, lbl_80369690, lbl_803696A0);
        fn_80224D7C(spC, 0);
        fn_80224E1C(0);
        fn_80224FEC(lbl_80369690, lbl_80369690, lbl_80369698, lbl_80369694, lbl_80369690, lbl_803696A4);
        sp8 = *(s32 *)((u8 *)arg0 + 0x40);
        fn_8022224C(4, &sp8);
        fn_8021FBB8();
        fn_8021F4E4(9, 1);
        fn_8021FBF0(0, 9, 1, 3, 0);
        fn_802240C8(1);
        fn_802239D0(0, 4);
        fn_80223F2C(0, 0xFF, 0xFF, 4);
        fn_80220428(0);
        fn_80222334(1);
        fn_80222370(4, 0, 0, 0, 0, 0, 2);
        fn_802245D8(1, 4, 5, 0);
        fn_80224684(0, 3, 0);
        fn_80220DEC(0x98, 0, 4);
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
    }
}

void fn_800898E4(void *arg0) {
    M2C_UNK fn_802209FC();
    M2C_UNK fn_8022124C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_802212FC(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80221BA8(s32, M2C_UNK);
    M2C_UNK fn_80222EB4();
    void *temp_r31;

    temp_r31 = *(void **)((char *)arg0 + 0x54);
    fn_8022124C(0, 0, 0x260, 0x1C0);
    fn_802212FC(0x260, 0x1C0, 4, 0);
    fn_80221BA8(*(s32 *)((char *)temp_r31 + 0x48), 0);
    fn_802209FC();
    fn_80222EB4();
}

void fn_80089970(void) {
    extern void *lbl_803674EC;
    M2C_FIELD(lbl_803674EC, s16 *, 0x32) = 0;
}

s32 fn_80089ED8(void) {
    extern void *lbl_803674E8;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(lbl_803674E8, u16 *, 0x32);
    if ((temp_r0 == 1) || (temp_r0 == 2)) {
        return 1;
    }
    return 0;
}

void fn_80089FA8(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_80202B3C(void *, f32, f32, f32, f32, f32, f32);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBB8(void);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_8022224C(s32, s32 *);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802239D0(s32, s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_80224C4C(void *, s32);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_80224FEC(f32, f32, f32, f32, f32, f32);
    extern s32 lbl_80367110;
    extern f32 lbl_80369694;
    extern f32 lbl_80369698;
    extern f32 lbl_8036969C;
    extern f32 lbl_803696A0;
    extern f32 lbl_803696A4;
    u8 spC[0x44];
    s32 sp8;
    f32 a;
    f32 b;
    u16 state;

    if (lbl_80367110 & 1) {
        *(u8 *)((u8 *)arg0 + 0x37) = 0;
        *(u16 *)((u8 *)arg0 + 0x32) = 0;
        return;
    }
    state = *(u16 *)((u8 *)arg0 + 0x32);
    switch (state) {
    case 0:
        *(u8 *)((u8 *)arg0 + 0x37) = 0;
        break;
    case 1:
        *(u16 *)((u8 *)arg0 + 0x38) = *(u16 *)((u8 *)arg0 + 0x38) + 1;
        a = 0.0f;
        b = 255.0f;
        *(u8 *)((u8 *)arg0 + 0x37) =
            (u8)(s32)fn_800067BC(0, a, b,
                                 (f32)*(u16 *)((u8 *)arg0 + 0x38),
                                 (f32)*(u16 *)((u8 *)arg0 + 0x3A));
        if (*(u16 *)((u8 *)arg0 + 0x38) >= *(u16 *)((u8 *)arg0 + 0x3A)) {
            *(u16 *)((u8 *)arg0 + 0x32) = 2;
        }
        break;
    case 2:
        *(u16 *)((u8 *)arg0 + 0x3C) = *(u16 *)((u8 *)arg0 + 0x3C) + 1;
        a = 255.0f;
        b = 0.0f;
        *(u8 *)((u8 *)arg0 + 0x37) =
            (u8)(s32)fn_800067BC(0, a, b,
                                 (f32)*(u16 *)((u8 *)arg0 + 0x3C),
                                 (f32)*(u16 *)((u8 *)arg0 + 0x3E));
        if (*(u16 *)((u8 *)arg0 + 0x3C) >= *(u16 *)((u8 *)arg0 + 0x3E)) {
            *(u16 *)((u8 *)arg0 + 0x32) = 0;
        }
        break;
    }
    if (*(u8 *)((u8 *)arg0 + 0x37) != 0) {
        fn_80202B3C(spC, lbl_80369690, lbl_80369694, lbl_80369690, lbl_80369698, lbl_80369690, lbl_8036969C);
        fn_80224C4C(spC, 1);
        fn_80202540(spC, lbl_80369690, lbl_80369690, lbl_803696A0);
        fn_80224D7C(spC, 0);
        fn_80224E1C(0);
        fn_80224FEC(lbl_80369690, lbl_80369690, lbl_80369698, lbl_80369694, lbl_80369690, lbl_803696A4);
        fn_8021FBB8();
        fn_8021F4E4(9, 1);
        fn_8021FBF0(0, 9, 1, 3, 0);
        fn_80220428(0);
        fn_802239D0(0, 4);
        fn_80223F2C(0, 0xFF, 0xFF, 4);
        fn_802240C8(1);
        fn_80222334(1);
        fn_80222370(4, 0, 0, 0, 0, 0, 2);
        sp8 = *(s32 *)((u8 *)arg0 + 0x34);
        fn_8022224C(4, &sp8);
        fn_802245D8(1, 4, 5, 0);
        fn_80224684(1, 3, 0);
        fn_80220DEC(0x98, 0, 4);
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
        *(volatile s16 *)0xCC008000 = 0x260;
        *(volatile s16 *)0xCC008000 = 0x1C0;
        *(volatile s16 *)0xCC008000 = 0;
    }
}

u16 fn_8008A56C(void) {
    return lbl_803674E0[0x19];
}

s32 fn_8008A578(void) {
    u16 temp_r4;

    temp_r4 = lbl_803674E0[0x19]; // 0x32 / 2 = 0x19
    if ((temp_r4 & 0x2)) {
        return 0;
    }
    if ((temp_r4 & 0x4)) {
        return 0;
    }
    return 1;
}

u16 fn_8008AF9C(s32 arg0, s32 arg1) {
    extern s32 lbl_803674F4;
    extern f32 lbl_80369704;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    extern f32 lbl_80369708;
    s32 sp8;
    u16 sp2A;
    u16 sp28;

    fn_8006ECCC(lbl_803674F4, &sp8, 0x38);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp28, (f32)arg0, (f32)arg1, (f32)sp28, (f32)sp2A);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();
    
    return sp28;
}

u16 fn_8008B09C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, M2C_UNK);
    u16 fn_80222A80(M2C_UNK *);
    s16 fn_80222A90(M2C_UNK *);
    extern s32 lbl_803674F4;
    extern f32 lbl_80369704;
    extern f32 lbl_80369708;
    s16 sp2A;
    u16 sp28;
    M2C_UNK sp8;

    fn_8006ECCC(lbl_803674F4, &sp8, 0x37);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8((f32) arg0, (f32) arg1, (f32) arg2, (f32) arg3);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();
    return sp28;
}

u16 fn_8008B1B0(s32 arg0, s32 arg1) {
    extern s32 lbl_803674F4;
    extern f32 lbl_80369704;
    extern f32 lbl_80369708;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;

    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, M2C_UNK);
    u16 fn_80222A80(M2C_UNK *);
    u16 fn_80222A90(M2C_UNK *);

    M2C_UNK sp8;
    u16 sp28;
    u16 sp2A;

    fn_8006ECCC(lbl_803674F4, &sp8, 0x37);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn80222A90(&sp8);

    fn_8000A258();
    fn_80009C0C(lbl_80369704);
    fn_8000A248();
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp28, (f32)arg0, (f32)arg1, (f32)sp28, (f32)sp2A);
    fn_80007884();
    fn_8000A258();
    fn_80009C0C(lbl_80369708);
    fn_8000A248();

    return sp28;
}

void fn_8008BA50(s32 arg1) {
    s32 tmp = arg1 - 0x40;
    fn_80225058(tmp, 0, 0x87, 0x1E0);
}

void fn_8008BBF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    M2C_UNK fn_8007D004(s32, u8, f32, f32, f32, f32);
    s32 var_r5;
    u8 var_r7;

    var_r5 = arg2;
    var_r7 = arg4;
    if (var_r7 == 5) {
        var_r7 = 0;
    }
    if (var_r5 == 0) {
        var_r5 = 0x108;
    }
    fn_8007D004(arg5, var_r7, (f32) arg0, (f32) arg1, (f32) var_r5, (f32) arg3);
}

void fn_8008BC94(s32 arg0, s32 arg1, u8 arg2) {
    extern s32 lbl_803674F0;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    s32 sp8;
    u16 sp28;
    u16 sp2A;

    fn_8006ECCC(lbl_803674F0, &sp8, 0x14);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(2);
    fn_800077D8(sp2A, (f32) arg0, (f32) arg1, (f32) sp2A, (f32) sp28);
    if (arg2 != 0) {
        fn_800076CC();
    }
    fn_800075D8();
    fn_80007538();
    fn_80007884();
}

void fn_8008BD90(s32 arg0, s32 arg1, u8 arg2) {
    M2C_UNK fn_800076CC();
    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, M2C_UNK);
    u16 fn_80222A80(M2C_UNK *);
    u16 fn_80222A90(M2C_UNK *);
    extern s32 lbl_803674F0;
    u16 sp2A;
    u16 sp28;
    M2C_UNK sp8;

    fn_8006ECCC(lbl_803674F0, &sp8, 0x14);
    sp28 = fn_80222A80(&sp8);
    sp2A = fn_80222A90(&sp8);
    fn_8000A258();
    fn_8000A174(&sp8, 0x10);
    fn_8000A248();
    fn_80007898(1);
    fn_800077D8(sp28, (f32) arg0, (f32) arg1, (f32) sp28, (f32) sp2A);
    if (arg2 == 0) {
        fn_800076CC();
    }
    fn_80007884();
}

void fn_8008BE84(s32 arg0,s32 arg1) {
    s32 fn_8006ECCC(s32,void *,s32); u16 fn_80222A80(void *); u16 fn_80222A90(void *);
    void fn_8000A258(void); void fn_8000A174(void *,s32); void fn_8000A248(void); void fn_80007898(s32);
    void fn_800077D8(s32,f32,f32,f32,f32); void fn_80007884(void);
    extern s32 lbl_803674F0; extern f64 lbl_803696E8; extern f64 lbl_803696F0;
    struct { u8 buf[0x20]; volatile u16 x,y; } sp;
    s32 temp_y, temp_x;
    fn_8006ECCC(lbl_803674F0,sp.buf,0x13);
    sp.x=fn_80222A80(sp.buf); sp.y=fn_80222A90(sp.buf);
    fn_8000A258(); fn_8000A174(sp.buf,0x10); fn_8000A248(); fn_80007898(1);
    temp_x = arg0 - 0x20;
    temp_y = arg1 + 0xc;
    fn_800077D8(sp.x,(f32)temp_x,(f32)temp_y,(f32)sp.x,(f32)sp.y);
    fn_80007884();
}

void fn_8008BF68(s32 arg0, s32 arg1, u8 arg2) {
    s32 fn_8006ECCC(s32, void *, s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    void fn_8000A258(void);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    u32 OSGetTick(void);
    f64 fn_802380D0(f64);
    extern s32 lbl_803674F0;
    extern f64 lbl_803696E8;
    extern f64 lbl_803696F0;
    extern f32 lbl_80369700;
    extern f32 lbl_80369704;
    extern f32 lbl_80369724;
    extern f32 lbl_80369728;
    extern f32 lbl_8036972C;
    struct {
        u8 buf[0x20];
        u16 x;
        u16 y;
    } sp2;
    struct {
        u8 buf[0x20];
        u16 x;
        u16 y;
    } sp;
    f32 temp_f31;
    u32 ms;
    u32 rem;
    s32 t1;
    s32 t2;
    f32 sin_arg;
    f32 sin_res;

    if (arg2 == 0) {
        fn_8006ECCC(lbl_803674F0, sp.buf, 0x13);
        sp.x = fn_80222A80(sp.buf);
        sp.y = fn_80222A90(sp.buf);
        fn_8000A258();
        fn_8000A174(sp.buf, 0x10);
        fn_8000A248();
        fn_80007898(1);
        fn_800077D8((f32)(arg0 - 0x20), (f32)(arg1 + 0xC), (f32)sp.x, (f32)sp.y);
        fn_80007884();
        return;
    }
    ms = OSGetTick() / ((*(u32 *)0x800000F8 >> 2) / 1000);
    rem = ms % 500;
    sin_arg = lbl_80369728 * ((f32)rem / lbl_80369724);
    sin_res = (f32)fn_802380D0(sin_arg);
    temp_f31 = lbl_8036972C * (lbl_80369704 + sin_res);
    fn_8006ECCC(lbl_803674F0, sp2.buf, 0x13);
    sp2.x = fn_80222A80(sp2.buf);
    sp2.y = fn_80222A90(sp2.buf);
    fn_8000A258();
    fn_8000A174(sp2.buf, 0x10);
    fn_8000A248();
    fn_80007898(1);
    t1 = (s32)((f32)(arg0 - 0x20) - temp_f31);
    t2 = (s32)(temp_f31 * lbl_80369700 + (f32)arg1) + 0xC;
    fn_800077D8((f32)t1, (f32)t2, (f32)sp2.x, (f32)sp2.y);
    fn_80007884();
}

void fn_8008CD34(void) {
    M2C_UNK fn_8000A174(M2C_UNK, M2C_UNK);
    M2C_UNK fn_8000A248();
    M2C_UNK fn_8000A258();
    fn_8000A258();
    fn_8000A174(0, 0x13);
    fn_8000A248();
}

void fn_8008CD64(f32 farg0) {
    M2C_UNK fn_80009C0C(f32);
    fn_8000A258();
    fn_80009C0C(farg0);
    fn_8000A248();
}

#pragma scheduling reset
#include "common.h"
#include "unit.h"

extern s32 lbl_803674F4;
extern f32 lbl_80369704;
extern f32 lbl_80369708;
extern f32 lbl_803696E8;
extern f32 lbl_803696F0;
