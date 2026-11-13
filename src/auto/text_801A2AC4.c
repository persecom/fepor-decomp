/* Functions from 0x801A2AC4 to 0x801A7D3C, found by decomp-toolkit. */
#include "common.h"

void fn_801A2AC4(void) {
    extern u16 lbl_8027B368[];
    extern u16 lbl_80297118[];
    
    register u32 r31_reg asm("r31");
    register u32 r4_reg asm("r4");
    register u32 r3_reg asm("r3");
    
    // Load base addresses once
    u16* base1 = &lbl_8027B368[0];
    u16* base2 = &lbl_80297118[0];
    
    r31_reg = (u32)base2;
    
    // First call with offset 0xE1 and base2 offset 0x58
    r3_reg = (u32)&lbl_8027B368[0xE1];
    r4_reg = r31_reg + 0x58;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Second call with offset 0xEE and base2 offset 0x58
    r3_reg = (u32)&lbl_8027B368[0xEE];
    r4_reg = r31_reg + 0x58;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Third call with offset 0xFD and base2 offset 0x58
    r3_reg = (u32)&lbl_8027B368[0xFD];
    r4_reg = r31_reg + 0x58;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Fourth call with offset 0x10C and base2 offset 0x58
    r3_reg = (u32)&lbl_8027B368[0x10C];
    r4_reg = r31_reg + 0x58;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Fifth call with offset 0x11C and base2 offset 0x68
    r3_reg = (u32)&lbl_8027B368[0x11C];
    r4_reg = r31_reg + 0x68;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Sixth call with offset 0x12C and base2 offset 0x78
    r3_reg = (u32)&lbl_8027B368[0x12C];
    r4_reg = r31_reg + 0x78;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Seventh call with offset 0x139 and base2 offset 0x88
    r3_reg = (u32)&lbl_8027B368[0x139];
    r4_reg = r31_reg + 0x88;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Eighth call with offset 0x149 and base2 offset 0x98
    r3_reg = (u32)&lbl_8027B368[0x149];
    r4_reg = r31_reg + 0x98;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Ninth call with offset 0x157 and base2 offset 0xA8
    r3_reg = (u32)&lbl_8027B368[0x157];
    r4_reg = r31_reg + 0xA8;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Tenth call with offset 0x167 and base2 offset 0xB8
    r3_reg = (u32)&lbl_8027B368[0x167];
    r4_reg = r31_reg + 0xB8;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Eleventh call with offset 0x177 and base2 offset 0xC8
    r3_reg = (u32)&lbl_8027B368[0x177];
    r4_reg = r31_reg + 0xC8;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Twelfth call with offset 0x184 and base2 offset 0xD8
    r3_reg = (u32)&lbl_8027B368[0x184];
    r4_reg = r31_reg + 0xD8;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Thirteenth call with offset 0x193 and base2 offset 0xE8
    r3_reg = (u32)&lbl_8027B368[0x193];
    r4_reg = r31_reg + 0xE8;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Fourteenth call with offset 0x1A2 and base2 offset 0xF8
    r3_reg = (u32)&lbl_8027B368[0x1A2];
    r4_reg = r31_reg + 0xF8;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Fifteenth call with offset 0x1B3 and base2 offset 0x108
    r3_reg = (u32)&lbl_8027B368[0x1B3];
    r4_reg = r31_reg + 0x108;
    fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
    
    // Sixteenth call with offset 0x1C1 and base2 offset 0x118
    r3_reg = (u32)&lbl_8027B368[0x1C1];
    r4_reg = r31_reg + 0x118;
          fn_8000D3EC((void*)r3_reg, (void*)r4_reg);
  }

s32 fn_801A2C30(s32 arg0) {
    void fn_801A75DC(void *, s32, s32);
    void fn_801A49AC(void *, u8);
    void fn_80036150(void *);
    void fn_8019C85C(s32, s32);
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];
    u8 *base;

    fn_801A75DC(lbl_80330EAC, *(s32 *)lbl_802EF4C8, -1);
    fn_801A49AC(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA));
    fn_80036150(lbl_80330EAC);
    base = (u8 *)lbl_80330EAC;
    ((struct { u8 pad:3; u8 mid:3; u8 lo:2; } *)(base + 0x1A6))->mid = 4;
    fn_8019C85C(arg0, 0);
    return 0;
}

  
  s32 fn_801A2CC0(void) {
    s32 fn_801044E0(s32);
    extern s32 lbl_802EF4C8;
    extern u8 lbl_80367289;
    u8 temp_r0;
    u8 var_r4;

    var_r4 = 1;
    temp_r0 = lbl_80367289 - 1;
    if (((u32) ((1 | ~temp_r0) - ((u32) (1 - temp_r0) >> 1U)) >> 0x1FU) == 0) {
        var_r4 = 0;
    }
    if (var_r4 == 0) {
        return 0;
    }
    return fn_801044E0(lbl_802EF4C8 + 0x1A4);
}

s32 fn_801A2D2C(void) {
    return 0;
}

extern u8 lbl_80297144[16];
void fn_801A2E3C(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_80297144[16];
    fn_8000CAA0(lbl_80297144, arg0);
}

s32 fn_801A2E68(void) {
    void fn_8002A084(void);
    extern s32 lbl_802EF4E0[];
    fn_8002A084();
    return lbl_802EF4E0[0] != 0;
}

void fn_801A2EA0(s32 arg0) {
    void fn_80026770(void *, s8 *);
    void fn_800319E8(s32);
    extern u8 lbl_802EF4C8[];
    s8 sp8;

    sp8 = 0x43;
    fn_80026770(lbl_802EF4C8, &sp8);
    fn_800319E8(arg0);
}

s32 fn_801A2EEC(void) {
    void fn_80026770(void *, s8 *);
    void fn_8002A784(s32, u8 *);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802EF4E0[];
    s32 spC;
    u8 sp8;

    *(s8 *)&spC = 0x43;
    fn_80026770(lbl_802EF4C8, (s8 *)&spC);
    sp8 = lbl_802EF4C8[0x13];
    fn_8002A784(*(s32 *)lbl_802EF4C8, &sp8);
    return *(s32 *)lbl_802EF4E0 != 0;
}

s32 fn_801A2F54(s32 arg0) {
    void fn_801A75DC(void *, s32, s32);
    void fn_801A49AC(void *, u8);
    void fn_80036150(void *);
    void **fn_800285C0(void *);
    void fn_801A3B40(void *, s32, void *);
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];
    extern void fn_801A2FE0;

    fn_801A75DC(lbl_80330EAC, *(s32 *)lbl_802EF4C8, -1);
    fn_801A49AC(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA));
    fn_80036150(lbl_80330EAC);
    fn_801A3B40(*fn_800285C0(lbl_802EF4C8), arg0, &fn_801A2FE0);
    return 0;
}

void fn_801A2FE0(void) {
    void fn_80015320(s32, void *);
    s32 fn_8003B2D0(void *);
    void fn_800381EC(void *, s8);
    void fn_80104480(void *);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_80330EAC[];
    u8 sp8[8];
    void *unit;
    s32 i;

    fn_80015320(2, sp8);
    for (i = 1; i <= 0x9F; i++) {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)((u8 *)unit + 0x188) != 0 &&
            sp8[*(u8 *)(*(u8 **)((u8 *)unit + 0x190) + 8)] != 0) {
            fn_800381EC(unit, (s8)fn_8003B2D0(unit));
            fn_80104480((u8 *)unit + 0x1A4);
        }
    }
    fn_800381EC(lbl_80330EAC, (s8)fn_8003B2D0(lbl_80330EAC));
    fn_80104480(lbl_80330EAC + 0x1A4);
}

s32 fn_801A30B8(void) {
    return 1;
}

s32 fn_801A30C0(s32 arg0) {
    void fn_8003816C(void *, u8, u8);
    void fn_801A7794(void *, void *, void *);
    void fn_801A49AC(void *, u8);
    void fn_80036150(void *);
    void fn_8019BCC0(s32, s32, s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    u8 *ctx;

    ctx = lbl_802EF4C8;
    fn_8003816C(*(void **)(ctx + 4), ctx[0xF], ctx[0x10]);
    fn_801A7794(lbl_80330EAC, *(void **)ctx, *(void **)(ctx + 4));
    fn_801A49AC(lbl_80330EAC, ctx[0xA]);
    fn_80036150(lbl_80330EAC);
    fn_8019BCC0((s8)ctx[0xF], (s8)ctx[0x10], arg0);
    return 0;
}

void fn_801A3164(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_80297118[16];
    fn_8000CAA0(lbl_80297118, arg0);
}

s32 fn_801A3190(void) {
    void fn_8002A2BC(void);
    extern s32 lbl_802EF4E0[];
    fn_8002A2BC();
    return lbl_802EF4E0[0] != 0;
}

s32 fn_801A31C8(s32 arg0) {
    void fn_8003CCB0(void *, u8 *, u8 *);
    void fn_8003816C(void *, u8, u8);
    void fn_801A7794(void *, void *, void *);
    void fn_801A49AC(void *, u8);
    void fn_80036150(void *);
    void fn_8019BC50(s8, s8, s32);
    extern u8 lbl_802CA518[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    u8 sp9;
    u8 sp8;
    u8 *map;
    u8 *ctx;
    void *other;
    s8 x;
    s32 a;
    s8 y;

    map = lbl_802CA518;
    ctx = lbl_802EF4C8;
    other = *(void **)(ctx + 4);
    sp9 = *(u8 *)((u8 *)*(void **)ctx + 0x19E);
    sp8 = *(u8 *)((u8 *)*(void **)ctx + 0x19F);
    map[(s8)sp9 + ((s8)sp8 << 6) + 0xD] = 0xFF;
    fn_8003CCB0(other, &sp9, &sp8);
    fn_8003816C(other, sp9, sp8);
    fn_801A7794(lbl_80330EAC, *(void **)lbl_802EF4C8, *(void **)(ctx + 4));
    fn_801A49AC(lbl_80330EAC, lbl_802EF4C8[0xA]);
    fn_80036150(lbl_80330EAC);
    x = sp9;
    a = arg0;
    y = sp8;
    fn_8019BC50(x, y, a);
    return 1;
}

s32 fn_801A32C0(void) {
    void fn_8002A8CC(void);
    extern s32 lbl_802EF4E0[];
    fn_8002A8CC();
    return lbl_802EF4E0[0] != 0;
}

s32 fn_801A32F8(s32 arg0) {
    void fn_801A7794(void *, void *, void *);
    void fn_801A49AC(void *, u8);
    void fn_80036150(void *);
    void **fn_800285C0(void *);
    void fn_801A3B40(void *, s32, s32);
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];
    u8 *base;

    fn_801A7794(lbl_80330EAC, *(void **)lbl_802EF4C8, *(void **)((u8 *)lbl_802EF4C8 + 4));
    fn_801A49AC(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA));
    base = (u8 *)lbl_80330EAC;
    ((struct { u8 hi:3; u8 lo:5; } *)(base + 0x486))->hi = 7;
    fn_80036150(lbl_80330EAC);
    fn_801A3B40(*fn_800285C0(lbl_802EF4C8), arg0, 0);
    return 0;
}

s32 fn_801A3390(s32 arg0) {
    void fn_801A7794(void *, void *, void *);
    void fn_801A49AC(void *, u8);
    u8 fn_8003CFF0(void *, void *);
    u8 fn_8000CE68(s32);
    u8 fn_8003C7D0(void *);
    void fn_801A4A24(void *, s32);
    void fn_80036150(void *);
    void **fn_800285C0(void *);
    void fn_801A3B40(void *, s32, s32);
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];

    fn_801A7794(lbl_80330EAC, *(void **)lbl_802EF4C8, *(void **)((u8 *)lbl_802EF4C8 + 4));
    fn_801A49AC(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA));
    if (fn_8000CE68(fn_8003CFF0(*(void **)lbl_802EF4C8, *(void **)((u8 *)lbl_802EF4C8 + 4))) != 0
        && fn_8003C7D0(*(void **)((u8 *)lbl_802EF4C8 + 4)) == 0) {
        fn_801A4A24(lbl_80330EAC, 1);
    } else {
        fn_801A4A24(lbl_80330EAC, 0);
    }
    fn_80036150(lbl_80330EAC);
    fn_801A3B40(*fn_800285C0(lbl_802EF4C8), arg0, 0);
    return 0;
}

s32 fn_801A3478(s32 arg0) {
    void fn_801A7794(void *, void *, void *);
    void fn_801A49AC(void *, u8);
    u8 fn_8003CFF0(void *, void *);
    u8 fn_8000CE68(s32);
    u8 fn_8003C7D0(void *);
    void fn_801A4A24(void *, s32);
    void fn_80036150(void *);
    void **fn_800285C0(void *);
    void fn_801A3B40(void *, s32, s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330EAC[];
    u8 *ctx;
    u8 *base;
    void *p0;
    void *p1;

    ctx = lbl_802EF4C8;
    p0 = *(void **)ctx;
    p1 = *(void **)(ctx + 4);
    fn_801A7794(lbl_80330EAC, p0, p1);
    fn_801A49AC(lbl_80330EAC, lbl_802EF4C8[0xA]);
    if (fn_8000CE68(fn_8003CFF0(*(void **)lbl_802EF4C8, *(void **)(ctx + 4))) != 0
        && fn_8003C7D0(*(void **)(ctx + 4)) == 0) {
        base = lbl_80330EAC;
        ((struct { u8 pad:1; u8 mid:3; u8 lo:4; } *)(base + 0x485))->mid = 5;
        fn_801A4A24(lbl_80330EAC, 1);
    } else {
        fn_801A4A24(lbl_80330EAC, 0);
    }
    fn_80036150(lbl_80330EAC);
    fn_801A3B40(*fn_800285C0(lbl_802EF4C8), arg0, 0);
    return 0;
}

s32 fn_801A3570(s32 arg0) {
    void fn_801A7794(void *, void *, void *);
    void fn_801A49AC(void *, u8);
    u8 fn_8003CFF0(void *, void *);
    u8 fn_8000CE68(s32);
    u8 fn_8003C7D0(void *);
    void fn_801A4A24(void *, s32);
    void fn_80036150(void *);
    void **fn_800285C0(void *);
    void fn_801A3B40(void *, s32, s32);
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];
    u8 *base;

    fn_801A7794(lbl_80330EAC, *(void **)lbl_802EF4C8, *(void **)((u8 *)lbl_802EF4C8 + 4));
    fn_801A49AC(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA));
    if (fn_8000CE68(fn_8003CFF0(*(void **)lbl_802EF4C8, *(void **)((u8 *)lbl_802EF4C8 + 4))) != 0
        && fn_8003C7D0(*(void **)((u8 *)lbl_802EF4C8 + 4)) == 0) {
        base = (u8 *)lbl_80330EAC;
        ((struct { u16 hi:6; u16 mid:3; u16 lo:7; } *)(base + 0x484))->mid = 5;
        fn_801A4A24(lbl_80330EAC, 1);
    } else {
        fn_801A4A24(lbl_80330EAC, 0);
    }
    fn_80036150(lbl_80330EAC);
    fn_801A3B40(*fn_800285C0(lbl_802EF4C8), arg0, 0);
    return 0;
}

s32 fn_801A3668(void) {
    void fn_8002AA34(void);
    extern s32 lbl_802EF4E0[];
    fn_8002AA34();
    return lbl_802EF4E0[0] != 0;
}

s32 fn_801A36A0(s32 arg0) {
    void fn_801A7794(void *, void *, void *);
    void fn_801A49AC(void *, u8);
    void fn_80036150(void *);
    void **fn_800285C0(void *);
    void fn_801A3B40(void *, s32, void *);
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_80330EAC[];
    extern void fn_801A372C;

    fn_801A7794(lbl_80330EAC, *(void **)lbl_802EF4C8, *(void **)((u8 *)lbl_802EF4C8 + 4));
    fn_801A49AC(lbl_80330EAC, *(u8 *)((u8 *)lbl_802EF4C8 + 0xA));
    fn_80036150(lbl_80330EAC);
    fn_801A3B40(*fn_800285C0(lbl_802EF4C8), arg0, &fn_801A372C);
    return 0;
}

extern u16 lbl_80330EAC[];
void fn_801A372C(void) {
    void fn_80104480(void *);
    extern u16 lbl_80330EAC[];
    u8 *temp_r31;

    temp_r31 = (u8 *)lbl_80330EAC;
    fn_80104480(temp_r31 + 0x484);
    fn_80104480((u8 *)*(void **)(temp_r31 + 0x560) + 0x1A4);
}

s32 fn_801A376C(void) {
    void fn_8002AB9C(void);
    extern u8 lbl_802EF4E0[];

    fn_8002AB9C();
    return *(s32 *) lbl_802EF4E0 != 0;
}

s32 fn_801A3B08(void) {
    void fn_8002AD04(void);
    extern s32 lbl_802EF4E0[];
    fn_8002AD04();
    return lbl_802EF4E0[0] != 0;
}

void fn_801A3B40(void *item, s32 arg1, s32 arg2) {
    void *fn_80019E04(const char *name);
    void fn_8019C394(s32, s32);
    void fn_8019C3DC(s32, s32);
    void fn_8019C424(s32, s32);
    void fn_8019C46C(s32, s32);
    void fn_8019C4B4(s32, s32);
    void fn_8019C4FC(s32, s32);
    void fn_8019C5EC(s32, s32);
    void fn_8019C634(s32, s32);
    void fn_8019C67C(s32, s32);
    void fn_8019C6C4(s32, s32);
    void fn_8019C85C(s32, s32);
    void fn_8019C8A4(s32, s32);
    void fn_8019C994(s32, s32);
    void fn_8019C9DC(s32, s32);
    void fn_8019CA24(s32, s32);
    void fn_8019CA6C(s32, s32);
    extern u8 lbl_8027B368[];

    if (item == fn_80019E04((char *)&lbl_8027B368[0x22C])) {
        fn_8019C9DC(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x23A])) {
        fn_8019CA6C(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x248])) {
        fn_8019CA24(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x256])) {
        fn_8019C994(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x261])) {
        fn_8019C8A4(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x1E6])) {
        fn_8019C6C4(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x1EF])) {
        fn_8019C67C(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x1FA])) {
        fn_8019C634(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x206])) {
        fn_8019C5EC(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x211])) {
        fn_8019C4FC(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x26F])) {
        fn_8019C4B4(arg1, arg2);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x278])) {
        fn_8019C46C(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x284])) {
        fn_8019C424(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x28E])) {
        fn_8019C3DC(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x29B])) {
        fn_8019C394(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x2A7])) {
        fn_8019C85C(arg1, 0);
        return;
    }
    if (item == fn_80019E04((char *)&lbl_8027B368[0x21D])) {
        fn_8019C4FC(arg1, arg2);
    }
}

s32 fn_801A3E24(void *arg0) {
    void *fn_80019E04(void *);
    extern u8 lbl_8027B368[];

    if (arg0 == fn_80019E04(lbl_8027B368 + 0x1E6)) {
        return 0xA;
    }
    if (arg0 == fn_80019E04(lbl_8027B368 + 0x1EF)) {
        return 0x14;
    }
    if (arg0 == fn_80019E04(lbl_8027B368 + 0x1FA)) {
        return 0x50;
    }
    if (arg0 == fn_80019E04(lbl_8027B368 + 0x206)) {
        return 0xA;
    }
    if (arg0 == fn_80019E04(lbl_8027B368 + 0x211)) {
        return 0xA;
    }
    return (arg0 == fn_80019E04(lbl_8027B368 + 0x21D)) ? 0x50 : 0;
}

s32 fn_801A3F14(void *self) {
extern void *lbl_802CA264[25]; extern u8 lbl_802CA518[];
u8 fn_80105BC0(void *,s32); u8 fn_80038128(void *,void *);
u8 fn_8001F85C(void *,u8,u8,u8,u8); void **fn_80037D54(void *);
void fn_80022FD8(void *,s32); void fn_80022DAC(void *,s32,s32);
u8 fn_8001DD54(void *,void *); void fn_8002011C(void *,u8,u8,u8,u8);
void *members[3]; s32 cross[3]; s32 out;
if(M2C_FIELD(M2C_FIELD(self,void **,0x190),u8 *,8)) return 0;
if(fn_80105BC0((u8 *)self+0x1bc,84)) {
void *node=lbl_802CA264[0]; s32 count=0; s32 i; void **walk;
while(node) {
void *next=M2C_FIELD(node,void **,0x184);
if(fn_80105BC0((u8 *)node+0x1bc,84) && count<3) members[count++]=node;
node=next;
}
if(count<3) return 0;
walk=members;
for(i=0;i<3;i++,walk++) {
void *unit=*walk; void **item; void *data; u8 type;
if(M2C_FIELD(unit,u32 *,0x1a0)&0x010000dc) return 0;
if((M2C_FIELD(unit,u16 *,0x1a4)>>7)&7) return 0;
if(M2C_FIELD(unit,u8 *,0x1a5)&7) return 0;
if(!fn_80105BC0((u8 *)unit+0x1bc,2)) return 0;
if(fn_80038128(*walk,(u8 *)self+0x2e0)!=1) return 0;
unit=*walk;
if(!fn_8001F85C(lbl_802CA518,M2C_FIELD(unit,u8 *,0x19e),M2C_FIELD(unit,u8 *,0x19f),M2C_FIELD(self,u8 *,0x47e),M2C_FIELD(self,u8 *,0x47f))) return 0;
item=fn_80037D54(*walk);
if(!item || !(data=*item)) return 0;
if(data) type=M2C_FIELD(data,u8 *,0x1d); else type=0;
if(type>1) return 0;
}}
else if(fn_80105BC0((u8 *)self+0x1bc,85)) {
void *node=lbl_802CA264[0]; s32 count=0; s32 i; void **walk;
while(node) {
void *next=M2C_FIELD(node,void **,0x184);
if(fn_80105BC0((u8 *)node+0x1bc,85) && count<3) members[count++]=node;
node=next;
}
if(count<3) return 0;
walk=members;
for(i=0;i<3;i++,walk++) {
void *unit=*walk; void **item; void *data; u8 type;
if(M2C_FIELD(unit,u32 *,0x1a0)&0x010000dc) return 0;
if((M2C_FIELD(unit,u16 *,0x1a4)>>7)&7) return 0;
if(M2C_FIELD(unit,u8 *,0x1a5)&7) return 0;
item=fn_80037D54(unit);
if(!item || !(data=*item)) return 0;
if(data) type=M2C_FIELD(data,u8 *,0x12); else type=12;
if(type!=3) return 0;
fn_80022FD8(lbl_802CA518,6); fn_80022DAC(lbl_802CA518,8,0);
{u8 range; u8 reach;
if(*item) range=fn_8001DD54(*item,*walk); else range=0;
data=*item;
if(data) reach=M2C_FIELD(data,u8 *,0x1d); else reach=0;
unit=*walk;
fn_8002011C(lbl_802CA518,M2C_FIELD(unit,u8 *,0x19e),M2C_FIELD(unit,u8 *,0x19f),reach,range);
}
if(M2C_FIELD(lbl_802CA518,u16 *,0xc18e+2*(M2C_FIELD(self,s8 *,0x47e)+(M2C_FIELD(self,s8 *,0x47f)<<6)))==0) return 0;
}
for(i=0;i<3;i++) {
void *a=members[i]; void *b=members[(i+1)%3];
u8 x=M2C_FIELD(a,u8 *,0x19e), y=M2C_FIELD(a,u8 *,0x19f);
cross[i]=(s8)(M2C_FIELD(self,u8 *,0x47f)-y)*(s8)(M2C_FIELD(b,u8 *,0x19e)-x)
-(s8)(M2C_FIELD(self,u8 *,0x47e)-x)*(s8)(M2C_FIELD(b,u8 *,0x19f)-y);
}
{u8 inside;
if(cross[0]==0 && cross[1]==0) inside=0;
else if(cross[0]<=0 && cross[1]<=0 && cross[2]<=0) inside=1;
else if(cross[0]>=0 && cross[1]>=0 && cross[2]>=0) inside=1;
else inside=0;
if(!inside) return 0;
}}
else return 0;
out=0;
if(members[0]!=M2C_FIELD(self,void **,0x280)){M2C_FIELD(self,void **,0xcbc)=members[0];out=1;}
if(members[1]!=M2C_FIELD(self,void **,0x280)){((void **)self)[out+0x32f]=members[1];out++;}
if(members[2]!=M2C_FIELD(self,void **,0x280)) ((void **)self)[out+0x32f]=members[2];
return 1;
}

void fn_801A442C(void *arg0) {
    s32 fn_8005B580(s32, u8 *, s32);
    s32 fn_8005B4D8(u8);
    extern u8 lbl_80330708[];
    extern u8 lbl_8036728A;
    u8 *self;
    u8 *unit;
    s32 ptr;

    self = (u8 *)arg0;
    if (*(u32 *)(self + 0xCAC) & 1) {
        unit = self;
    } else {
        unit = self;
        unit += 0x2E0;
    }
    ptr = *(s32 *)(unit + 0x2B0);
    if ((u32)ptr == 0) {
        *(s32 *)(self + 0xCB0) = 0;
    } else {
        *(s32 *)(self + 0xCB0) = fn_8005B580(ptr, lbl_80330708 + 0x504, 0);
    }
    *(s32 *)(self + 0xCB4) = fn_8005B4D8(lbl_8036728A);
    *(s32 *)(self + 0xCB8) = lbl_8036728A;
}

s32 fn_801A44AC(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    return 0;
}

void *fn_801A4624(void *arg0) {
    u8 *obj;
    u8 *selected;
    u32 flags;

    obj = (u8 *)arg0;
    flags = *(u32 *)(obj + 0xCAC);

    if (flags & 0x100) {
        selected = NULL;
    } else if (flags & 1) {
        if ((s8)obj[0x1A8] == 0) {
            selected = obj;
        } else {
            selected = NULL;
        }
    } else {
        if ((s8)obj[0x488] == 0) {
            selected = obj + 0x2E0;
        } else if ((s8)obj[0x1A8] == 0) {
            selected = obj;
        } else {
            selected = NULL;
        }
    }

    if (selected == NULL) {
        return NULL;
    }

    if (selected == obj) {
        return obj + 0x2E0;
    }

    if (selected == obj + 0x2E0) {
        return obj;
    }

    return NULL;
}

void *fn_801A46BC(u8 *arg0) {
    u32 flags = *(u32 *)(arg0 + 0xcac);

    if (flags & 0x100) {
        return NULL;
    }
    if (flags & 1) {
        if ((s8)arg0[0x1a8] == 0) {
            return arg0;
        }
        return NULL;
    }
    if ((s8)arg0[0x488] == 0) {
        return arg0 + 0x2e0;
    }
    if ((s8)arg0[0x1a8] == 0) {
        return arg0;
    }
    return NULL;
}

void fn_801A4714(void *arg0)
{
    extern void fn_801A96FC(void *);
    extern void fn_801A601C(void *, void *, void *, s32);
    extern void fn_80034068(void *, s32, s32);
    extern void fn_801A8268(void *);
    extern void fn_801A8010(void *);

    u8 *obj;

    obj = (u8 *)arg0;

    *(u32 *)(obj + 0xCAC) |= 8;

    fn_801A96FC(obj);

    fn_801A601C(obj, obj, obj + 0x2E0, 0);

    fn_80034068(obj + 0x8A0, 0x54, 0);

    fn_801A8268(obj);

    fn_80034068(obj + 0x8A0, 0x20, 0);

    fn_80034068(obj + 0x8A0, 0x50, 0);

    fn_80034068(obj + 0x8A0, 0x25, 0);

    fn_801A8010(obj);
}

void fn_801A47B0(void *arg0, s32 arg1, s32 arg2) {
    void fn_801A96FC(void *);
    void fn_801A601C(void *, void *, void *, s32);
    void fn_80034068(void *, s32, s32);
    void fn_801A8268(void *);
    s32 fn_8003B2D0(void *);
    s32 fn_800AA76C(s32, s32, s32);
    void fn_800381EC(void *, s32);
    void fn_801A8010(void *);
    s32 tmp;
    u8 *obj;
    s32 a2;
    u8 saved;

    a2 = arg2;
    obj = (u8 *)arg0;
    *(u32 *)(obj + 0xCAC) |= 8;
    fn_801A96FC(obj);
    fn_801A601C(obj, obj, obj + 0x2E0, 0);
    fn_80034068(obj + 0x8A0, 0x54, 0);
    fn_801A8268(obj);
    saved = obj[0x1A8];
    tmp = fn_800AA76C((s8)saved, (s8)fn_8003B2D0(obj), (s8)a2);
    fn_800381EC(obj, tmp + (s8)obj[0x1A8]);
    fn_80034068(obj + 0x8A0, 0x20, 0);
    fn_80034068(obj + 0x8A0, 9, tmp);
    fn_80034068(obj + 0x8A0, 0x50, 0);
    fn_80034068(obj + 0x8A0, 0x25, 0);
    fn_801A8010(obj);
}

void fn_801A48A4(s32 arg0) {
    void fn_80034068(s32, s32, s8);
    void fn_800351FC(s32, u8, s32, s32);
    s32 fn_800386B0(s32);
    u8 fn_8003D094(void);
    u8 fn_8003D13C(s32);
    u8 var_r31;

    var_r31 = fn_8003D094();
    if (var_r31 > fn_8003D13C(arg0)) {
        var_r31 = fn_8003D13C(arg0);
    }
    if (var_r31 != 0) {
        fn_80034068(arg0 + 0x8A0, 0x25, 0);
        fn_80034068(arg0 + 0x8A0, 0x27, (s8)fn_800386B0(arg0));
        fn_80034068(arg0 + 0x8A0, 0x28, (s8)var_r31);
        fn_800351FC(arg0, var_r31, 0, arg0 + 0x8A0);
    }
}

void fn_801A4958(void *arg0) {
    void fn_801A601C(void *, void *, void *, s32);
    void fn_80034068(void *, s32, s32);

    *(s32 *)((u8 *)arg0 + 0xCAC) |= 4;
    fn_801A601C(arg0, arg0, (u8 *)arg0 + 0x2E0, 0);
    fn_80034068((u8 *)arg0 + 0x8A0, 0x54, 0);
}

void fn_801A49AC(void *arg0)
{
    extern void fn_801A96FC(void *);
    extern void fn_801A601C(void *, void *, void *, s32);
    extern void fn_80034068(void *, s32, s32);
    extern void *fn_801A7FF4(void *);
    extern void fn_801A895C(void *, void *);
    extern void fn_801A8010(void *);

    u8 *obj;

    obj = (u8 *)arg0;

    *(u32 *)(obj + 0xCAC) |= 4;

    fn_801A96FC(obj);

    fn_801A601C(obj, obj, obj + 0x2E0, 0);

    fn_80034068(obj + 0x8A0, 0x54, 0);

    fn_801A895C(obj, fn_801A7FF4(obj));

    fn_801A8010(obj);
}

void fn_801A4A24(s32 arg0, u8 arg1) {
    M2C_UNK fn_80034068(s32, u8, M2C_UNK);
    fn_80034068(arg0 + 0x8A0, 0x20U, 0);
    fn_80034068(arg0 + 0x8A0, (arg1 != 0) ? 0x50 : 0x52, 0);
}

#pragma opt_common_subs off
void fn_801A4A88(u8 *obj, s32 a1) {
    s32 fn_8003B2D0(void *);
    s32 fn_800AA76C(s32, s32, s32);
    void fn_800381EC(void *, s32);
    void fn_80034068(void *, s32, s32);
    s32 orig;
    s32 b;

    orig = obj[0x1A8];
    a1 = (s8)fn_800AA76C((s8)orig, (s8)fn_8003B2D0(obj), (s8)a1);
    b = obj[0x1A8];
    fn_800381EC(obj, a1 + (s8)b);
    fn_80034068(obj + 0x8A0, 0x20, 0);
    fn_80034068(obj + 0x8A0, 0x9, a1);
    fn_80034068(obj + 0x8A0, 0x50, 0);
    if ((s8)obj[0x1A8] <= 0) {
        fn_80034068(obj + 0x8A0, 0xB, 0);
    }
}
#pragma opt_common_subs reset
void fn_801A4B40(u8 *obj, s32 a1) {
    s32 fn_8003B2D0(void *);
    s32 fn_800AA76C(s32, s32, s32);
    void fn_800381EC(void *, s32);
    void fn_80034068(void *, s32, s32);
    s32 orig;
    s32 ret;
    s32 b;

    orig = obj[0x488];
    ret = fn_800AA76C((s8)orig, (s8)fn_8003B2D0(obj + 0x2E0), (s8)a1);
    b = obj[0x488];
    a1 = (s8)ret;
    fn_800381EC(obj + 0x2E0, a1 + (s8)b);
    fn_80034068(obj + 0x8A0, 0x20, 0);
    fn_80034068(obj + 0x8A0, 0x15, a1);
    fn_80034068(obj + 0x8A0, 0x50, 0);
}
#pragma opt_common_subs reset
void fn_801A4BE0(void *arg0) {
    extern u8 lbl_8032BB58[516];
    void fn_801A9AF8(void *);
    void fn_80034F40(void *);
    void *fn_8010FF24(void *, u8, u8, u8);
    void fn_8010FE08(void *, u8, u8, u8);
    void *entry;

    fn_801A9AF8(arg0);
    if (!(M2C_FIELD(arg0, u32 *, 0xCAC) & 1)) {
        fn_801A9AF8((s8 *)arg0 + 0x2E0);
    }
    fn_80034F40(arg0);
    if (!(M2C_FIELD(arg0, u32 *, 0xCAC) & 1)) {
        fn_80034F40((s8 *)arg0 + 0x2E0);
    }
    if (M2C_FIELD(arg0, u32 *, 0xCAC) & 0x100) {
        entry = fn_8010FF24(lbl_8032BB58, M2C_FIELD(arg0, u8 *, 0x47E), M2C_FIELD(arg0, u8 *, 0x47F), 4);
        M2C_FIELD(entry, s8 *, 4) = M2C_FIELD(arg0, s8 *, 0x488);
        if (M2C_FIELD(arg0, s8 *, 0x488) == 0) {
            fn_8010FE08(lbl_8032BB58, M2C_FIELD(arg0, u8 *, 0x47E), M2C_FIELD(arg0, u8 *, 0x47F), 4);
        }
    }
}

void fn_801A4C8C(s32 arg0) {
    void fn_80034068(s32, s32, s32);
    u8 fn_80105BC0(s32, s32);
    void fn_801A64F8(s32, s32, s32);
    extern u8 lbl_80330708[];
    s32 self;
    u8 var_r0;
    void *temp_r5;

    self = arg0;
    if ((s8)*(u8 *)(self + 0x488) == 0) {
        fn_80034068(self + 0x8A0, 0x17, 0);
        return;
    }
    if (fn_80105BC0(self + 0x49C, 0x29) != 0) {
        *(u8 *)(self + 0xCA4) = 1;
        fn_80034068(self + 0x8A0, 0x21, 0);
        fn_801A64F8(self, self + 0x2E0, self);
        if ((s8)*(u8 *)(self + 0x1A8) == 0) {
            var_r0 = 1;
        } else if ((s8)*(u8 *)(self + 0x488) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            goto final;
        }
        if (*(u8 *)(self + 0x5AB) == 0) {
            *(u8 *)(self + 0xCA4) = 0;
            fn_80034068(self + 0x8A0, 0x20, 0);
            fn_801A64F8(self, self, self + 0x2E0);
            if ((s8)*(u8 *)(self + 0x1A8) == 0) {
                var_r0 = 1;
            } else if ((s8)*(u8 *)(self + 0x488) == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 != 0) {
                goto final;
            }
            goto block_30;
        }
        goto block_30;
    } else {
        *(u8 *)(self + 0xCA4) = 0;
        fn_80034068(self + 0x8A0, 0x20, 0);
        fn_801A64F8(self, self, self + 0x2E0);
        if ((s8)*(u8 *)(self + 0x1A8) == 0) {
            var_r0 = 1;
        } else if ((s8)*(u8 *)(self + 0x488) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            goto final;
        }
        if (*(u8 *)(self + 0x2CB) == 0) {
            *(u8 *)(self + 0xCA4) = 1;
            fn_80034068(self + 0x8A0, 0x21, 0);
            fn_801A64F8(self, self + 0x2E0, self);
            if ((s8)*(u8 *)(self + 0x1A8) == 0) {
                var_r0 = 1;
            } else if ((s8)*(u8 *)(self + 0x488) == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 != 0) {
                goto final;
            }
            goto block_30;
        }
    }
block_30:
    if ((*(s16 *)(self + 0x29C) >= *(s16 *)(self + 0x57C) + 4)
        && !(*(u32 *)(self + 0xCAC) & 0x200)
        && *(u8 *)(self + 0x5AB) == 0) {
        *(u8 *)(self + 0xCA4) = 0;
        fn_80034068(self + 0x8A0, 0x20, 0);
        fn_80034068(self + 0x8A0, 0x23, 0);
        fn_801A64F8(self, self, self + 0x2E0);
        if ((s8)*(u8 *)(self + 0x1A8) == 0) {
            var_r0 = 1;
        } else if ((s8)*(u8 *)(self + 0x488) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            goto final;
        }
        goto block_39;
    }
block_39:
    if ((*(s16 *)(self + 0x57C) >= *(s16 *)(self + 0x29C) + 4)
        && *(u8 *)(self + 0x2CB) == 0) {
        *(u8 *)(self + 0xCA4) = 1;
        fn_80034068(self + 0x8A0, 0x21, 0);
        fn_80034068(self + 0x8A0, 0x23, 0);
        fn_801A64F8(self, self + 0x2E0, self);
    }
final:
    if ((s8)*(u8 *)(self + 0x1A8) == 0) {
        fn_80034068(self + 0x8A0, 0xB, 0);
        temp_r5 = *(void **)(self + 0x560);
        *(u16 *)((u8 *)temp_r5 + 0x22C) = *(u16 *)((u8 *)temp_r5 + 0x22C) + 1;
        temp_r5 = *(void **)(self + 0x560);
        *(u16 *)((u8 *)temp_r5 + 0x22A) = *(u16 *)((u8 *)temp_r5 + 0x22A) + 1;
        temp_r5 = *(void **)(self + 0x560);
        *(u8 *)((u8 *)temp_r5 + 0x234) = lbl_80330708[0x10];
        return;
    }
    if ((s8)*(u8 *)(self + 0x488) == 0) {
        fn_80034068(self + 0x8A0, 0x17, 0);
        temp_r5 = *(void **)(self + 0x280);
        *(u16 *)((u8 *)temp_r5 + 0x22C) = *(u16 *)((u8 *)temp_r5 + 0x22C) + 1;
        temp_r5 = *(void **)(self + 0x280);
        *(u16 *)((u8 *)temp_r5 + 0x22A) = *(u16 *)((u8 *)temp_r5 + 0x22A) + 1;
        temp_r5 = *(void **)(self + 0x280);
        *(u8 *)((u8 *)temp_r5 + 0x234) = lbl_80330708[0x10];
    }
}

#pragma opt_strength_reduction off
void fn_801A5008(s32 arg0) {
    s32 *fn_8001CB64(s32);
    void fn_80034068(s32, s32, s32);
    s32 fn_8003B2D0(s32);
    void fn_801A601C(s32, s32, s32, s32);
    void fn_801A64F8(s32, s32, s32);
    extern u8 lbl_802EFDB8[];
    extern u8 lbl_80330708[];
    u8 *var_r3;
    u8 *var_r5;
    s32 temp_r0;
    s32 i;
    s32 *temp_r3;
    u32 var_r4;

    fn_801A601C(arg0, arg0, 0, 0);
    fn_80034068(arg0 + 0x8A0, 0xF, fn_8003B2D0(arg0 + 0x2E0));
    fn_80034068(arg0 + 0x8A0, 0x10, *(u8 *)(arg0 + 0x488));
    fn_80034068(arg0 + 0x8A0, 0x54, 0);
    *(u8 *)(arg0 + 0xCA4) = 0;
    fn_80034068(arg0 + 0x8A0, 0x20, 0);
    fn_801A64F8(arg0, arg0, arg0 + 0x2E0);

    var_r3 = lbl_802EFDB8;
    temp_r0 = 0;
    var_r3[0x61] = (u8)temp_r0;
    var_r5 = var_r3;
    var_r3[0x60] = (u8)temp_r0;
    for (i = 0; i < 2; i++) {
        var_r3[0] = 0;
        *(u16 *)(var_r5 + 0x20) = 0;
        var_r3[1] = 0;
        *(u16 *)(var_r5 + 0x22) = 0;
        var_r3[2] = 0;
        *(u16 *)(var_r5 + 0x24) = 0;
        var_r3[3] = 0;
        *(u16 *)(var_r5 + 0x26) = 0;
        var_r3[4] = 0;
        *(u16 *)(var_r5 + 0x28) = 0;
        var_r3[5] = 0;
        *(u16 *)(var_r5 + 0x2A) = 0;
        var_r3[6] = 0;
        *(u16 *)(var_r5 + 0x2C) = 0;
        var_r3[7] = 0;
        *(u16 *)(var_r5 + 0x2E) = 0;
        var_r3[8] = 0;
        *(u16 *)(var_r5 + 0x30) = 0;
        var_r3[9] = 0;
        *(u16 *)(var_r5 + 0x32) = 0;
        var_r3[0xA] = 0;
        *(u16 *)(var_r5 + 0x34) = 0;
        var_r3[0xB] = 0;
        *(u16 *)(var_r5 + 0x36) = 0;
        var_r3[0xC] = 0;
        *(u16 *)(var_r5 + 0x38) = 0;
        var_r3[0xD] = 0;
        *(u16 *)(var_r5 + 0x3A) = 0;
        var_r3[0xE] = 0;
        *(u16 *)(var_r5 + 0x3C) = 0;
        var_r3[0xF] = 0;
        var_r3 += 0x10;
        *(u16 *)(var_r5 + 0x3E) = 0;
        var_r5 += 0x20;
    }

    if (*(u32 *)(arg0 + 0xCAC) & 0x1305) {
        goto block_18;
    }
    if (*(u8 *)(*(u8 **)(arg0 + 0x190) + 8) != 0) {
        if (*(u8 *)(*(u8 **)(arg0 + 0x470) + 8) != 0) {
            goto block_18;
        }
    }
    if (*(u32 *)(arg0 + 0x28C) != 0) {
        temp_r3 = fn_8001CB64(arg0 + 0x28C);
        if (((((temp_r3[0] & 0x80) ^ 0) | ((temp_r3[1] & 0x400) ^ 0)) == 0) == 0) {
            goto block_18;
        }
    }
    temp_r0 = (s32)((lbl_80330708[0x9C] >> 6) & 3);
    if (temp_r0 != 1) {
        if (temp_r0 < 1) {
            if (temp_r0 < 0) {
                goto block_18;
            }
            goto block_19;
        }
        if (temp_r0 < 3) {
            var_r4 = 0;
            if (*(u8 *)(*(u8 **)(arg0 + 0x190) + 8) == 0) {
                var_r4 = (u32)arg0;
            }
            if (*(u8 *)(*(u8 **)(arg0 + 0x470) + 8) == 0) {
                var_r4 = (u32)(arg0 + 0x2E0);
            }
            if (var_r4 != 0) {
                if ((*(u32 *)(var_r4 + 0x1A0) & 0x80000000U) == 0) {
                    goto block_19;
                }
            }
        } else {
            goto block_18;
        }
    } else {
        goto block_18;
    }
block_18:
    *(u32 *)(arg0 + 0xCAC) |= 0x80000000;
    return;
block_19:
    if ((lbl_80330708[0x9F] >> 4) & 1) {
        *(u32 *)(arg0 + 0xCAC) |= 0x40000000;
    }
    *(u32 *)(arg0 + 0xCAC) &= 0x7FFFFFFF;
}

#pragma opt_strength_reduction off
void fn_801A5268(s32 arg0, u8 arg1) {
    u64 *fn_8001CB64(s32);
    void fn_80034068(s32, s32, s32);
    void fn_8004E670(f32 *, void *, s32);
    s32 fn_8005B4D8(u8);
    s32 fn_8005B580(s32, u8 *, s32);
    void fn_801A4C8C(s32);
    void fn_801A601C(s32, s32, s32, s32);
    void fn_801A6C18(s32, u8, u8);
    void fn_801A8268(s32);
    extern u8 lbl_802EFDB8[];
    extern u8 lbl_80330708[];
    extern u8 lbl_8036728A;
    f32 sp14[3];
    f32 sp8[3];
    f32 f31;
    u8 *r31;
    u8 *var_r3;
    u8 *var_r5;
    s32 self;
    s32 temp_r0;
    s32 i;
    s32 unit;
    s32 ptr;
    u64 *temp_r3;
    u32 var_r4;
    void *p280;
    void *p560;

    r31 = lbl_802EFDB8;
    self = arg0;
    *(u32 *)(self + 0xCAC) |= 2;
    if (r31[0x61] != 0) {
        *(u32 *)(self + 0xCAC) |= 0x4000;
        r31[0x61] = 0;
    }
    p280 = *(void **)(self + 0x280);
    *(u16 *)((u8 *)p280 + 0x228) = *(u16 *)((u8 *)p280 + 0x228) + 1;
    p560 = *(void **)(self + 0x560);
    *(u16 *)((u8 *)p560 + 0x228) = *(u16 *)((u8 *)p560 + 0x228) + 1;
    fn_801A6C18(self, arg1, 0);
    *(u8 *)(self + 0xCA4) = 0;
    fn_801A601C(self, self, self + 0x2E0, 0);
    fn_80034068(self + 0x8A0, 0x54, 0);
    fn_801A8268(self);
    fn_801A8268(self + 0x2E0);
    fn_801A4C8C(self);

    temp_r0 = 0;
    r31[0x61] = (u8)temp_r0;
    var_r3 = lbl_802EFDB8;
    var_r5 = var_r3;
    var_r3[0x60] = (u8)temp_r0;
    for (i = 0; i < 2; i++) {
        var_r3[0] = 0;
        *(u16 *)(var_r5 + 0x20) = 0;
        var_r3[1] = 0;
        *(u16 *)(var_r5 + 0x22) = 0;
        var_r3[2] = 0;
        *(u16 *)(var_r5 + 0x24) = 0;
        var_r3[3] = 0;
        *(u16 *)(var_r5 + 0x26) = 0;
        var_r3[4] = 0;
        *(u16 *)(var_r5 + 0x28) = 0;
        var_r3[5] = 0;
        *(u16 *)(var_r5 + 0x2A) = 0;
        var_r3[6] = 0;
        *(u16 *)(var_r5 + 0x2C) = 0;
        var_r3[7] = 0;
        *(u16 *)(var_r5 + 0x2E) = 0;
        var_r3[8] = 0;
        *(u16 *)(var_r5 + 0x30) = 0;
        var_r3[9] = 0;
        *(u16 *)(var_r5 + 0x32) = 0;
        var_r3[0xA] = 0;
        *(u16 *)(var_r5 + 0x34) = 0;
        var_r3[0xB] = 0;
        *(u16 *)(var_r5 + 0x36) = 0;
        var_r3[0xC] = 0;
        *(u16 *)(var_r5 + 0x38) = 0;
        var_r3[0xD] = 0;
        *(u16 *)(var_r5 + 0x3A) = 0;
        var_r3[0xE] = 0;
        *(u16 *)(var_r5 + 0x3C) = 0;
        var_r3[0xF] = 0;
        var_r3 += 0x10;
        *(u16 *)(var_r5 + 0x3E) = 0;
        var_r5 += 0x20;
    }

    if (*(u32 *)(self + 0xCAC) & 1) {
        unit = self;
    } else {
        unit = self;
        unit += 0x2E0;
    }
    ptr = *(s32 *)(unit + 0x2B0);
    if ((u32)ptr == 0) {
        *(s32 *)(self + 0xCB0) = 0;
    } else {
        *(s32 *)(self + 0xCB0) = fn_8005B580(ptr, lbl_80330708 + 0x504, 0);
    }
    *(s32 *)(self + 0xCB4) = fn_8005B4D8(lbl_8036728A);
    *(s32 *)(self + 0xCB8) = lbl_8036728A;

    if (*(u32 *)(self + 0xCAC) & 0x1305) {
        goto block_26;
    }
    if (*(u8 *)(*(u8 **)(self + 0x190) + 8) != 0) {
        if (*(u8 *)(*(u8 **)(self + 0x470) + 8) != 0) {
            goto block_26;
        }
    }
    if (*(u32 *)(self + 0x28C) != 0) {
        temp_r3 = fn_8001CB64(self + 0x28C);
        if ((*temp_r3 & 0x8000000400ULL) != 0) {
            goto block_26;
        }
    }
    temp_r0 = (s32)((lbl_80330708[0x9C] >> 6) & 3);
    if (temp_r0 != 1) {
        if (temp_r0 < 1) {
            if (temp_r0 >= 0) {
                goto block_27;
            }
            goto block_26;
        }
        if (temp_r0 < 3) {
            var_r4 = 0;
            if (*(u8 *)(*(u8 **)(self + 0x190) + 8) == 0) {
                var_r4 = (u32)self;
            }
            if (*(u8 *)(*(u8 **)(self + 0x470) + 8) == 0) {
                var_r4 = (u32)(self + 0x2E0);
            }
            if (var_r4 != 0) {
                if ((*(u32 *)(var_r4 + 0x1A0) & 0x80000000U) == 0) {
                    goto block_27;
                }
            }
        } else {
            goto block_26;
        }
    } else {
        goto block_26;
    }
block_26:
    *(u32 *)(self + 0xCAC) |= 0x80000000;
    goto after_blocks;
block_27:
    if ((lbl_80330708[0x9F] >> 4) & 1) {
        *(u32 *)(self + 0xCAC) |= 0x40000000;
    }
    *(u32 *)(self + 0xCAC) &= 0x7FFFFFFF;
after_blocks:
    if (!(*(u32 *)(self + 0xCAC) & 1) && *(u32 *)(self + 0x468) != 0) {
        fn_8004E670(sp8, *(void **)(self + 0x280), 1);
        f31 = sp8[0];
        fn_8004E670(sp14, *(void **)(self + 0x560), 1);
        if (!(sp14[0] < f31)) {
            *(u32 *)(self + 0xCAC) |= 0x20000000;
            return;
        }
    }
    *(u32 *)(self + 0xCAC) &= ~0x20000000u;
}

#pragma use_lmw_stmw on
#pragma global_optimizer off
void fn_801A55D4(void *arg0, void *arg1, void *arg2, s32 arg3) {
    u8 fn_8000CE68(s32);
    u64 *fn_8001CB64(void *);
    u8 fn_8001DDC4(u8);
    void fn_80034068(void *, s32, s32);
    u32 *fn_80037C20(void *);
    u8 fn_8003863C(void *);
    s8 fn_8003A5B4(void *);
    s8 fn_8003ACF8(void *);
    s8 fn_8003AF28(void *);
    s8 fn_8003B258(void *);
    s8 fn_8003B2D0(void *);
    u8 fn_8003C7D0(void *);
    u8 fn_80105BC0(void *, s32);
    void **fn_801A7FF4(void *);
    void fn_801A8010(void *);
    extern u8 lbl_802EFDB8[];
    extern u16 lbl_80330EAC[];

    u8 *tbl;
    u16 *fl;
    s8 half;
    s8 tmp_s8;
    s16 tmp_s16;
    s32 chance;
    s32 i;
    s32 lim;
    u8 ok;
    u8 hp;
    void *p;
    u64 *bits;
    u32 *w;

    if (arg3 == 0) {
        if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x10) != 0) {
            hp = *(u8 *)((u8 *)arg1 + 0x1A8);
            half = fn_8003B2D0(arg1);
            if ((s8)hp <= half / 2) {
                fn_80034068((u8 *)arg0 + 0x8A0, 0x3C, 0);
            }
        }
        if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x2B) != 0) {
            hp = *(u8 *)((u8 *)arg1 + 0x1A8);
            half = fn_8003B2D0(arg1);
            if ((s8)hp <= half / 2) {
                fn_80034068((u8 *)arg0 + 0x8A0, 0x3E, 0);
            }
        }
        tbl = lbl_802EFDB8;
        if ((*(u16 *)(tbl + 0x20 + (tbl[0x60] << 1)) & 8) != 0) {
            fn_80034068((u8 *)arg0 + 0x8A0, 0x3A, 0);
        }
    }

    tbl = lbl_802EFDB8;
    fl = (u16 *)(tbl + 0x20);
    if ((fl[tbl[0x60]] & 1) != 0) {
        tmp_s16 = *(s16 *)((u8 *)arg1 + 0x2AA) + 1;
        *(s16 *)((u8 *)arg1 + 0x2AA) = (s16)(tmp_s16 / 2);
        fn_80034068((u8 *)arg0 + 0x8A0, 0x37, 0);
    }
    if ((fl[tbl[0x60]] & 0x4000) != 0) {
        fn_80034068((u8 *)arg0 + 0x8A0, 0x39, 0);
    }

    if (*(u8 *)((u8 *)arg1 + 0x295) == 0x52) {
        return;
    }

    if ((fl[tbl[0x60]] & 0x10) == 0) {
        if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x33) != 0) {
            if (*(u8 *)((u8 *)arg1 + 0x295) != 0x51) {
                chance = 0;
            } else if (fn_8003C7D0(arg2) != 0) {
                chance = 0;
            } else {
                chance = 0x32;
            }
            if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                ok = 0;
            } else {
                ok = fn_8000CE68(chance);
            }
            if (ok != 0) {
                goto block_luna;
            }
        }
    } else {
    block_luna:
        fn_80034068((u8 *)arg0 + 0x8A0, 0x41, 0);
        *(s16 *)((u8 *)arg1 + 0x2AA) = 0x7F;
    }

    if ((fl[tbl[0x60]] & 4) == 0) {
        if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x30) != 0
            && (*(u32 *)((u8 *)arg0 + 0xCAC) & 0x100) == 0) {
            half = fn_8003AF28(arg1);
            if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                ok = 0;
            } else {
                ok = fn_8000CE68(half);
            }
            if (ok != 0) {
                goto block_colossus;
            }
        }
    } else {
    block_colossus:
        tmp_s16 = *(s16 *)((u8 *)arg2 + 0x29A);
        *(s16 *)((u8 *)arg1 + 0x2AA) =
            (s16)(*(s16 *)((u8 *)arg1 + 0x298) - tmp_s16 / 2);
        if (*(s16 *)((u8 *)arg1 + 0x2AA) < 0) {
            *(s16 *)((u8 *)arg1 + 0x2AA) = 0;
        }
        fn_80034068((u8 *)arg0 + 0x8A0, 0x3F, 0);
    }

    if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x5A) != 0) {
        half = fn_8003AF28(arg1);
        if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
            ok = 0;
        } else {
            ok = fn_8000CE68(half);
        }
        if (ok != 0) {
            p = *fn_801A7FF4(arg1);
            if (p != NULL) {
                hp = *(u8 *)((u8 *)p + 0x13);
            } else {
                hp = 0xC;
            }
            if (fn_8001DDC4(hp) != 0) {
                tmp_s16 = *(s16 *)((u8 *)arg2 + 0x29A);
                *(s16 *)((u8 *)arg1 + 0x2AA) =
                    (s16)(*(s16 *)((u8 *)arg1 + 0x298) - tmp_s16 / 2);
                if (*(s16 *)((u8 *)arg1 + 0x2AA) < 0) {
                    *(s16 *)((u8 *)arg1 + 0x2AA) = 0;
                }
                fn_80034068((u8 *)arg0 + 0x8A0, 0x40, 0);
            }
        }
    }

    if ((fl[tbl[0x60]] & 0x20) == 0) {
        if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x38) != 0) {
            tmp_s8 = fn_8003A5B4(arg2);
            if (fn_8003A5B4(arg1) > tmp_s8 && fn_8003B258(arg1) >= 4
                && fn_80105BC0((u8 *)arg2 + 0x1BC, 0x5F) == 0) {
                half = fn_8003AF28(arg1);
                if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                    ok = 0;
                } else {
                    ok = fn_8000CE68(half);
                }
                if (ok != 0) {
                    goto block_adept;
                }
            }
        }
    } else {
    block_adept:
        tmp_s8 = fn_8003B258(arg1);
        chance = tmp_s8 / 4;
        *(s16 *)((u8 *)arg1 + 0x2AA) =
            (s16)(*(s16 *)((u8 *)arg1 + 0x2AA) + (s16)chance);
        fn_80034068((u8 *)arg0 + 0x8A0, 0x42, (s8)(s16)chance);
    }

    if ((fl[tbl[0x60]] & 0x2000) == 0) {
        if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x34) != 0) {
            half = fn_8003AF28(arg1);
            if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                ok = 0;
            } else {
                ok = fn_8000CE68(half);
            }
            if (ok != 0) {
                goto block_guard;
            }
        }
    } else {
    block_guard:
        fn_80034068((u8 *)arg0 + 0x8A0, 0x43, 0);
        lim = ((fn_8003863C(arg1) - 1) / 5) + 1;
        for (i = 0; i < lim; i++) {
            fn_801A8010(arg2);
        }
    }

    if ((fl[tbl[0x60]] & 0x800) == 0) {
        if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x39) != 0) {
            half = fn_8003AF28(arg1);
            chance = half / 2;
            if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                ok = 0;
            } else {
                ok = fn_8000CE68(chance);
            }
            if (ok != 0 && (*(u32 *)((u8 *)arg0 + 0xCAC) & 0x100) == 0
                && fn_8003C7D0(arg2) == 0) {
                goto block_stun;
            }
        }
    } else {
    block_stun:
        fn_80034068((u8 *)arg0 + 0x8A0, 0x48, 0);
        *(u8 *)((u8 *)arg2 + 0x1A4) =
            (*(u8 *)((u8 *)arg2 + 0x1A4) & ~0x1C) | 8;
    }

    if ((fl[tbl[0x60]] & 0x1000) == 0) {
        if (fn_80105BC0((u8 *)arg2 + 0x1BC, 0x37) != 0
            && fn_80105BC0((u8 *)arg1 + 0x1BC, 0x5F) == 0) {
            half = fn_8003AF28(arg2);
            chance = half / 2;
            if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                ok = 0;
            } else {
                ok = fn_8000CE68(chance);
            }
            if (ok != 0) {
                goto block_cancel;
            }
        }
    } else {
    block_cancel:
        *(u8 *)((u8 *)arg1 + 0x2CC) = 1;
    }

    bits = fn_8001CB64(fn_801A7FF4(arg1));
    if ((*bits & 0x800ULL) != 0 && fn_8003C7D0(arg2) == 0) {
        fn_80034068((u8 *)arg0 + 0x8A0, 0x4E, 0);
        *(u8 *)((u8 *)arg2 + 0x1A4) =
            (*(u8 *)((u8 *)arg2 + 0x1A4) & ~0xE0) | 0xA0;
    }

    w = fn_80037C20(arg2);
    if (w != NULL && *w != 0) {
        bits = fn_8001CB64(w);
        if ((*bits & 0x20000ULL) != 0
            && fn_80105BC0((u8 *)arg1 + 0x1BC, 8) != 0) {
            tmp_s16 = *(s16 *)((u8 *)arg1 + 0x2AA);
            *(s16 *)((u8 *)arg1 + 0x2AA) = (s16)(tmp_s16 / 2);
        }
    }

    if ((fl[tbl[0x60]] & 0x200) == 0) {
        if (fn_80105BC0((u8 *)arg2 + 0x1BC, 0x2E) != 0
            && ((s8)*(u8 *)((u8 *)arg2 + 0x1A8) - *(s16 *)((u8 *)arg1 + 0x2AA)) <= 0) {
            half = fn_8003ACF8(arg2);
            if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                ok = 0;
            } else {
                ok = fn_8000CE68(half);
            }
            if (ok != 0) {
                goto block_resolve;
            }
        }
    } else {
    block_resolve:
        fn_80034068((u8 *)arg0 + 0x8A0, 0x46, 0);
        hp = *(u8 *)((u8 *)arg2 + 0x1A8);
        *(s16 *)((u8 *)arg1 + 0x2AA) = (s16)((s8)hp / 2);
    }

    if (fn_80105BC0((u8 *)arg2 + 0x1BC, 0x53) != 0) {
        *(s16 *)((u8 *)arg1 + 0x2AA) = 0;
        *(u8 *)((u8 *)arg1 + 0x295) = 0x50;
    }

    if ((fl[tbl[0x60]] & 0x400) != 0) {
        hp = *(u8 *)((u8 *)arg2 + 0x1A8);
        if ((s8)hp <= *(s16 *)((u8 *)arg1 + 0x2AA)) {
            if ((s8)hp == 1) {
                *(u8 *)((u8 *)arg1 + 0x295) = 0x52;
                *(s16 *)((u8 *)arg1 + 0x2AA) = 0;
            } else {
                *(s16 *)((u8 *)arg1 + 0x2AA) = (s16)((s8)hp - 1);
            }
        }
    }

    if ((fl[tbl[0x60]] & 0x80) == 0) {
        if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x2C) != 0) {
            half = fn_8003AF28(arg1);
            if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                ok = 0;
            } else {
                ok = fn_8000CE68(half);
            }
            if (ok != 0) {
                goto block_nihil;
            }
        }
    } else {
    block_nihil:
        fn_80034068((u8 *)arg0 + 0x8A0, 0x44, 0);
        *(u8 *)((u8 *)arg1 + 0x2CB) = 1;
    }

    if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x35) != 0) {
        half = fn_8003AF28(arg1);
        chance = half / 2;
        if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
            ok = 0;
        } else {
            ok = fn_8000CE68(chance);
        }
        if (ok != 0 && fn_8003C7D0(arg2) == 0) {
            fn_80034068((u8 *)arg0 + 0x8A0, 0x3D, 0);
            *(u16 *)((u8 *)arg2 + 0x1A4) =
                (*(u16 *)((u8 *)arg2 + 0x1A4) & ~0x380) | 0x280;
        }
    }

    if ((fl[tbl[0x60]] & 0x100) == 0) {
        if (fn_80105BC0((u8 *)arg2 + 0x1BC, 0x2D) != 0) {
            half = fn_8003AF28(arg2);
            if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                ok = 0;
            } else {
                ok = fn_8000CE68(half);
            }
            if (ok != 0) {
                goto block_wrath;
            }
        }
    } else {
    block_wrath:
        fn_80034068((u8 *)arg0 + 0x8A0, 0x45, 0);
        *(s16 *)((u8 *)arg1 + 0x2AA) = 0;
    }

    bits = fn_8001CB64(fn_801A7FF4(arg1));
    if ((*bits & 0x10ULL) != 0) {
        fn_80034068((u8 *)arg0 + 0x8A0, 0x4C, 0);
        *(s16 *)((u8 *)arg1 + 0x2AC) = *(s16 *)((u8 *)arg1 + 0x2AA);
    }

    if ((fl[tbl[0x60]] & 2) == 0) {
        if (fn_80105BC0((u8 *)arg1 + 0x1BC, 0x2F) != 0
            && (*(u32 *)((u8 *)arg0 + 0xCAC) & 0x100) == 0) {
            half = fn_8003AF28(arg1);
            if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x4000) {
                ok = 0;
            } else {
                ok = fn_8000CE68(half);
            }
            if (ok != 0) {
                goto block_vantage;
            }
        }
    } else {
    block_vantage:
        fn_80034068((u8 *)arg0 + 0x8A0, 0x38, 0);
        *(s16 *)((u8 *)arg1 + 0x2AC) = *(s16 *)((u8 *)arg1 + 0x2AA);
    }

    *(s16 *)((u8 *)arg1 + 0x2CE) =
        (s16)(*(s16 *)((u8 *)arg1 + 0x2CE) + *(s16 *)((u8 *)arg1 + 0x2AA));
}
#pragma global_optimizer reset
#pragma use_lmw_stmw reset
void fn_801A601C(s32 arg0, s32 arg1, s32 arg2, u8 arg3) {
    u64 *fn_8001CB64(void *);
    void fn_80033E70(s32);
    void fn_80033E90(s32, s32);
    void fn_80034068(s32, s32, s32);
    s32 fn_8003B2D0(s32);
    u8 fn_80105BC0(s32, s32);
    void fn_801A859C(s32);
    void fn_801A8AF4(s32);
    void fn_801A8B48(s32, s32);
    void fn_801A8DA4(s32);
    void fn_801A8F14(s32, s32);
    void fn_801A8F80(s32, s32);

    extern s8 lbl_80297240[];
    extern u16 lbl_80330EAC[];

    s32 self;
    s32 u1;
    s32 u2;
    u8 flag;
    u32 row;
    u8 cur;
    void *p;
    u8 cls;

    self = arg0;
    u1 = arg1;
    u2 = arg2;
    flag = arg3;

    if (!(*(u32 *)(self + 0xCAC) & 1)) {
        row = (u32)lbl_80297240;
        *(s16 *)(u1 + 0x2C2) = 0;
        *(s16 *)(u1 + 0x2C4) = 0;
        *(s16 *)(u2 + 0x2C2) = 0;
        *(s16 *)(u2 + 0x2C4) = 0;
        if (*(void **)(u1 + 0x28C) != NULL) {
            if (*(void **)(u2 + 0x28C) != NULL) {
                goto loop_incr;
            }
        }
        goto after_table;
    loop_body:
        p = *(void **)(u1 + 0x28C);
        if (p != NULL) {
            cls = ((u8 *)p)[0x13];
        } else {
            cls = 0xC;
        }
        if ((s8)cur == cls) {
            p = *(void **)(u2 + 0x28C);
            if (p != NULL) {
                cls = ((u8 *)p)[0x13];
            } else {
                cls = 0xC;
            }
            if (*(s8 *)(row + 1) == (s32)cls) {
                *(s16 *)(u1 + 0x2C2) = *(s8 *)(row + 3);
                *(s16 *)(u1 + 0x2C4) = *(s8 *)(row + 2);
            }
        }
        p = *(void **)(u2 + 0x28C);
        if (p != NULL) {
            cls = ((u8 *)p)[0x13];
        } else {
            cls = 0xC;
        }
        if (*(s8 *)(row + 0) == (s32)cls) {
            p = *(void **)(u1 + 0x28C);
            if (p != NULL) {
                cls = ((u8 *)p)[0x13];
            } else {
                cls = 0xC;
            }
            if (*(s8 *)(row + 1) == (s32)cls) {
                *(s16 *)(u2 + 0x2C2) = *(s8 *)(row + 3);
                *(s16 *)(u2 + 0x2C4) = *(s8 *)(row + 2);
            }
        }
    loop_incr:
        row += 4;
        cur = *(u8 *)row;
        if ((s8)cur >= 0) {
            goto loop_body;
        }
        if ((*fn_8001CB64((void *)(u1 + 0x28C)) & 0x80ULL) != 0) {
            *(s16 *)(u1 + 0x2C4) *= -1;
            *(s16 *)(u1 + 0x2C2) *= -1;
            *(s16 *)(u2 + 0x2C4) *= -1;
            *(s16 *)(u2 + 0x2C2) *= -1;
        }
        if ((*fn_8001CB64((void *)(u2 + 0x28C)) & 0x80ULL) != 0) {
            *(s16 *)(u2 + 0x2C4) *= -1;
            *(s16 *)(u2 + 0x2C2) *= -1;
            *(s16 *)(u1 + 0x2C4) *= -1;
            *(s16 *)(u1 + 0x2C2) *= -1;
        }
    }
 after_table:
    fn_801A8F80(u1, u2);
    if (!(*(u32 *)(self + 0xCAC) & 1)) {
        fn_801A8F80(u2, u1);
    }
    if (fn_80105BC0(u1 + 0x1BC, 0x41) == 0) {
        fn_801A8DA4(u1);
        if (!(*(u32 *)(self + 0xCAC) & 1)) {
            fn_801A8DA4(u2);
        }
    }
    if (!(*(u32 *)(self + 0xCAC) & 1)) {
        fn_801A8F14(u1, u2);
        fn_801A8F14(u2, u1);
        fn_801A8B48(u1, u2);
        fn_801A8B48(u2, u1);
        fn_801A8AF4(u1);
        fn_801A8AF4(u2);
    }
    if (*(u32 *)((u8 *)lbl_80330EAC + 0xCAC) & 0x100) {
        *(s16 *)(u1 + 0x2A2) = 0x64;
        *(s16 *)(u1 + 0x2A8) = 0;
    }
    if (flag == 0) {
        fn_80033E90(self + 0x8A0, 0x55);
        if (*(u8 *)(u1 + 0x2B7) != fn_8003B2D0(u1)) {
            fn_80034068(self + 0x8A0, 0x59, fn_8003B2D0(u1));
        }
        {
            u8 t = *(u8 *)(u1 + 0x1A8);
            if (*(u8 *)(u1 + 0x2B8) != (s8)t) {
                fn_80034068(self + 0x8A0, 0x5A, t);
            }
        }
        {
            s16 a = *(s16 *)(u1 + 0x2BA);
            if (a != *(s16 *)(u1 + 0x298)) {
                fn_80034068(self + 0x8A0, 0x5B, *(s16 *)(u1 + 0x298));
            }
        }
        {
            s16 a = *(s16 *)(u1 + 0x2BC);
            if (a != *(s16 *)(u1 + 0x29A)) {
                fn_80034068(self + 0x8A0, 0x5C, *(s16 *)(u1 + 0x29A));
            }
        }
        {
            s16 a = *(s16 *)(u1 + 0x2BE);
            if (a != *(s16 *)(u1 + 0x2A2)) {
                fn_80034068(self + 0x8A0, 0x5D, *(s16 *)(u1 + 0x2A2));
            }
        }
        {
            s16 a = *(s16 *)(u1 + 0x2C0);
            if (a != *(s16 *)(u1 + 0x2A8)) {
                fn_80034068(self + 0x8A0, 0x5E, *(s16 *)(u1 + 0x2A8));
            }
        }
        if (!(*(u32 *)(self + 0xCAC) & 1)) {
            if (*(u8 *)(u2 + 0x2B7) != fn_8003B2D0(u2)) {
                fn_80034068(self + 0x8A0, 0x60, fn_8003B2D0(u2));
            }
            {
                u8 t = *(u8 *)(u2 + 0x1A8);
                if (*(u8 *)(u2 + 0x2B8) != (s8)t) {
                    fn_80034068(self + 0x8A0, 0x61, t);
                }
            }
            {
                s16 a = *(s16 *)(u2 + 0x2BA);
                if (a != *(s16 *)(u2 + 0x298)) {
                    fn_80034068(self + 0x8A0, 0x62, *(s16 *)(u2 + 0x298));
                }
            }
            {
                s16 a = *(s16 *)(u2 + 0x2BC);
                if (a != *(s16 *)(u2 + 0x29A)) {
                    fn_80034068(self + 0x8A0, 0x63, *(s16 *)(u2 + 0x29A));
                }
            }
            {
                s16 a = *(s16 *)(u2 + 0x2BE);
                if (a != *(s16 *)(u2 + 0x2A2)) {
                    fn_80034068(self + 0x8A0, 0x64, *(s16 *)(u2 + 0x2A2));
                }
            }
            {
                s16 a = *(s16 *)(u2 + 0x2C0);
                if (a != *(s16 *)(u2 + 0x2A8)) {
                    fn_80034068(self + 0x8A0, 0x65, *(s16 *)(u2 + 0x2A8));
                }
            }
            fn_801A859C(u2);
        }
        fn_801A859C(u1);
        fn_80033E70(self + 0x8A0);
    }
}

void fn_801A64F8(void *arg0, void *arg1, void *arg2) {
    u8 fn_8000CE68(s32);
    u64 *fn_8001CB64(void *);
    void fn_800331D4(void *, s32);
    void fn_8003333C(void *, s32);
    void fn_800333DC(void *, s32);
    void fn_80033E70(void *);
    void fn_80033E90(void *, s32);
    void fn_80034068(void *, s32, s32);
    void fn_80034120(void *);
    void fn_800381EC(void *, s32);
    s8 fn_8003AF28(void *);
    s8 fn_8003B2D0(void *);
    u8 fn_80105BC0(void *, s32);
    void fn_801A55D4(void *, void *, void *, s32);
    void fn_801A601C(void *, void *, void *, s32);
    void *fn_801A7FF4(void *);
    void fn_801A8010(void *);
    void fn_801A895C(void *, void *);
    u8 fn_801A8A28(void *);
    extern u8 lbl_802EFDB8[];
    extern u16 lbl_80330EAC[];

    s32 i;
    s32 lim;
    s32 add;
    s32 idx;
    s32 t;
    s16 v2aa;
    s16 v2ac;
    s16 lim2;
    s16 deal;
    s16 tmp;
    s16 cap;
    s16 cur;
    u8 lv;
    u8 kind;
    u8 hp;
    u8 ok;
    u8 *tbl;
    u8 *g;
    s8 half;
    void *self;
    void *unit;
    void *foe;

    self = arg0;
    unit = arg1;
    foe = arg2;
    *(u8 *)((u8 *)unit + 0x2CB) = 0;
    if (*(u32 *)fn_801A7FF4(unit) != 0
        && ((*(u16 *)((u8 *)unit + 0x1A4) >> 7) & 7) == 0
        && (*(u8 *)((u8 *)unit + 0x1A5) & 7) == 0
        && fn_80105BC0((u8 *)unit + 0x1BC, 0x60) == 0) {
        lim = 1;
        if ((*fn_8001CB64(fn_801A7FF4(unit)) & 0x20ULL) != 0) {
            lim = 2;
        }
        add = 0;
        lv = 0;
        if (*(u32 *)fn_801A7FF4(unit) != 0) {
            lv = ((u8 *)fn_801A7FF4(unit))[4];
        }
        tbl = lbl_802EFDB8;
        g = (u8 *)lbl_80330EAC;
        for (i = 0; i < lim; i++) {
            idx = i + add;
            if ((*(u16 *)(tbl + 0x20 + ((tbl[0x60] + idx) << 1)) & 1) != 0) {
                fn_8003333C(lbl_802EFDB8, idx);
                add += 4;
            } else if (fn_80105BC0((u8 *)unit + 0x1BC, 0x31) != 0) {
                half = fn_8003AF28(unit);
                if (*(u32 *)(g + 0xCAC) & 0x4000) {
                    ok = 0;
                } else {
                    ok = fn_8000CE68((s32)half / 2);
                }
                if (ok != 0 && (s32)lv >= idx + 5) {
                    fn_8003333C(lbl_802EFDB8, idx);
                    add += 4;
                }
            }
        }
        if (add > 0) {
            lim += add;
        } else {
            for (i = 0; i < lim; i++) {
                idx = i + add;
                if ((*(u16 *)(tbl + 0x20 + ((tbl[0x60] + idx) << 1)) & 0x4000) != 0) {
                    fn_800333DC(lbl_802EFDB8, idx);
                    add += 1;
                } else if (fn_80105BC0((u8 *)unit + 0x1BC, 0x4C) != 0) {
                    half = fn_8003AF28(unit);
                    if (*(u32 *)(g + 0xCAC) & 0x4000) {
                        ok = 0;
                    } else {
                        ok = fn_8000CE68((s32)half);
                    }
                    if (ok != 0 && (s32)lv >= idx + 2) {
                        fn_800333DC(lbl_802EFDB8, idx);
                        add += 1;
                    }
                }
            }
            if (add > 0) {
                lim += add;
            } else if ((*(u16 *)(tbl + 0x20 + (tbl[0x60] << 1)) & 8) != 0) {
                fn_800331D4(lbl_802EFDB8, lim);
                lim *= 2;
            } else if (fn_80105BC0((u8 *)unit + 0x1BC, 0x32) != 0) {
                half = fn_8003AF28(unit);
                if (*(u32 *)(g + 0xCAC) & 0x4000) {
                    ok = 0;
                } else {
                    ok = fn_8000CE68((s32)half);
                }
                if (ok != 0 && (s32)lv >= lim * 2) {
                    fn_800331D4(lbl_802EFDB8, lim);
                    lim *= 2;
                }
            }
        }
        fn_801A895C(unit, fn_801A7FF4(unit));
        *(u8 *)((u8 *)unit + 0x2CC) = 0;
        *(s16 *)((u8 *)unit + 0x2CE) = 0;
        for (i = 0; i < lim; ) {
            fn_801A601C(self, unit, foe, 0);
            if (fn_80105BC0((u8 *)unit + 0x1BC, 0x2B) != 0) {
                hp = *(u8 *)((u8 *)unit + 0x1A8);
                if ((s8)hp <= (s32)fn_8003B2D0(unit) / 2) {
                    *(s16 *)((u8 *)unit + 0x2A8) = (s16)(*(s16 *)((u8 *)unit + 0x2A8) + 0x32);
                    if (*(s16 *)((u8 *)unit + 0x2A8) > 0x64) {
                        *(s16 *)((u8 *)unit + 0x2A8) = 0x64;
                    }
                }
            }
            *(s16 *)((u8 *)unit + 0x2AA) =
                (s16)(*(s16 *)((u8 *)unit + 0x298) - *(s16 *)((u8 *)foe + 0x29A));
            if (*(s16 *)((u8 *)unit + 0x2AA) < 0) {
                *(s16 *)((u8 *)unit + 0x2AA) = 0;
            }
            *(s16 *)((u8 *)unit + 0x2AC) = 0;
            *(u8 *)((u8 *)unit + 0x295) = fn_801A8A28(unit);
            kind = *(u8 *)((u8 *)unit + 0x295);
            switch (kind) {
            case 0x52:
                *(s16 *)((u8 *)unit + 0x2AA) = 0;
                break;
            case 0x51:
                *(s16 *)((u8 *)unit + 0x2AA) = (s16)(*(s16 *)((u8 *)unit + 0x2AA) * 3);
                break;
            }
            fn_80033E90((u8 *)self + 0x8A0, 0x56);
            fn_801A55D4(self, unit, foe, i);
            fn_80033E70((u8 *)self + 0x8A0);
            fn_80033E90((u8 *)self + 0x8A0, 0x57);
            v2aa = *(s16 *)((u8 *)unit + 0x2AA);
            v2ac = *(s16 *)((u8 *)unit + 0x2AC);
            kind = *(u8 *)((u8 *)unit + 0x295);
            if (v2aa == -0x8000) {
                t = *(s16 *)((u8 *)unit + 0x298) - *(s16 *)((u8 *)foe + 0x29A);
                v2aa = (s16)t;
                if ((s16)t < 0) {
                    v2aa = 0;
                }
            }
            if (v2aa != 0) {
                *(u8 *)((u8 *)unit + 0x2D6) = 1;
            }
            hp = *(u8 *)((u8 *)foe + 0x1A8);
            deal = (s16)((s8)hp - v2aa);
            if (deal < 0) {
                deal = 0;
            }
            lim2 = (s16)((s8)hp - deal);
            fn_800381EC(foe, deal);
            tmp = (s16)(v2ac + (s8)*(u8 *)((u8 *)unit + 0x1A8));
            if (tmp > fn_8003B2D0(unit)) {
                tmp = fn_8003B2D0(unit);
            }
            cap = (s16)(tmp - (s8)*(u8 *)((u8 *)unit + 0x1A8));
            if (cap > lim2) {
                cap = lim2;
            }
            if (cap != 0) {
                fn_80034068((u8 *)self + 0x8A0, 0x5F, (s8)cap);
            }
            fn_800381EC(unit, tmp);
            fn_80034068((u8 *)self + 0x8A0, 0x66, (s8)-lim2);
            fn_80034068((u8 *)self + 0x8A0, kind, 0);
            fn_801A8010(unit);
            fn_80033E70((u8 *)self + 0x8A0);
            fn_80034120(lbl_802EFDB8);
            if ((s8)*(u8 *)((u8 *)self + 0x1A8) == 0) {
                ok = 1;
            } else if ((s8)*(u8 *)((u8 *)self + 0x488) == 0) {
                ok = 1;
            } else {
                ok = 0;
            }
            if (ok != 0) {
                break;
            }
            if (*(u32 *)fn_801A7FF4(unit) == 0) {
                break;
            }
            i++;
        }
        if (*(u8 *)((u8 *)unit + 0x2CC) != 0
            && *(s16 *)((u8 *)unit + 0x2CE) >= 2
            && *(u32 *)fn_801A7FF4(foe) != 0) {
            tmp = *(s16 *)((u8 *)unit + 0x2CE);
            *(s16 *)((u8 *)unit + 0x2CE) = (s16)((s32)tmp / 2);
            if (*(s16 *)((u8 *)unit + 0x2CE) > 0x7F) {
                *(s16 *)((u8 *)unit + 0x2CE) = 0x7F;
            }
            fn_80034068((u8 *)self + 0x8A0, 0x24, 0);
            fn_801A601C(self, unit, foe, 0);
            fn_80033E90((u8 *)self + 0x8A0, 0x56);
            fn_80034068((u8 *)self + 0x8A0, 0x49, 0);
            fn_80033E70((u8 *)self + 0x8A0);
            *(u8 *)((u8 *)self + 0xCA4) ^= 1;
            fn_80033E90((u8 *)self + 0x8A0, 0x57);
            v2aa = *(s16 *)((u8 *)unit + 0x2CE);
            if (v2aa == -0x8000) {
                t = *(s16 *)((u8 *)foe + 0x298) - *(s16 *)((u8 *)unit + 0x29A);
                v2aa = (s16)t;
                if ((s16)t < 0) {
                    v2aa = 0;
                }
            }
            if (v2aa != 0) {
                *(u8 *)((u8 *)foe + 0x2D6) = 1;
            }
            hp = *(u8 *)((u8 *)unit + 0x1A8);
            deal = (s16)((s8)hp - v2aa);
            if (deal < 0) {
                deal = 0;
            }
            lim2 = (s16)((s8)hp - deal);
            fn_800381EC(unit, deal);
            cur = (s8)*(u8 *)((u8 *)foe + 0x1A8);
            if (cur > fn_8003B2D0(foe)) {
                cur = fn_8003B2D0(foe);
            }
            cap = (s16)(cur - (s8)*(u8 *)((u8 *)foe + 0x1A8));
            if (cap > lim2) {
                cap = lim2;
            }
            if (cap != 0) {
                fn_80034068((u8 *)self + 0x8A0, 0x5F, (s8)cap);
            }
            fn_800381EC(foe, cur);
            fn_80034068((u8 *)self + 0x8A0, 0x66, (s8)-lim2);
            fn_80034068((u8 *)self + 0x8A0, 0x50, 0);
            fn_80033E70((u8 *)self + 0x8A0);
        }
    } else {
        fn_80034068((u8 *)self + 0x8A0, 0x53, 0);
    }
}

void fn_801A6C18(s32 arg0, u8 arg1, u8 arg2) {
    u64 *fn_8001CB64(void *);
    void fn_80033E70(s32);
    void fn_80033E90(s32, s32);
    void fn_80034068(s32, s32, s32);
    u8 fn_80105BC0(s32, s32);
    void fn_80105CEC(s32, s32);
    void fn_80105D4C(s32, s32);
    u8 fn_801A3F14(s32);
    void *fn_801A7FF4(s32);
    void fn_801A85F4(s32);
    u8 fn_801A8688(s32);
    void fn_801A949C(s32);
    s32 unit49c;
    s32 self;
    u8 a2;
    u8 a1;
    u8 t;

    self = arg0;
    a2 = arg2;
    a1 = arg1;
    fn_80033E90(self + 0x8A0, 0x56);
    if (fn_80105BC0(self + 0x1BC, 0x17) != 0) {
        fn_801A8688(self);
    }
    unit49c = self + 0x49C;
    if (fn_80105BC0(unit49c, 0x17) != 0) {
        fn_801A8688(self + 0x2E0);
    }
    if (*(u32 *)(self + 0xCAC) & 0x200) {
        fn_801A8688(self);
        fn_801A8688(self + 0x2E0);
    }
    if (fn_80105BC0(self + 0x1BC, 0x2A) != 0 && fn_801A8688(self + 0x2E0) != 0) {
        fn_80034068(self + 0x8A0, 0x16, 0);
    }
    if (fn_80105BC0(unit49c, 0x2A) != 0 && fn_801A8688(self) != 0) {
        fn_80034068(self + 0x8A0, 0xA, 0);
    }
    if (a1 == 0xF) {
        fn_80105CEC(self + 0x1BC, 0x3F);
        if (a2 != 0) {
            t = 0;
        } else {
            t = fn_801A3F14(self);
        }
        *(u8 *)(self + 0x2CA) = t;
    }
    fn_80105CEC(unit49c, 0x3F);
    if (a1 == 0x15 && fn_80105BC0(self + 0x1BC, 0x3F) != 0) {
        fn_80034068(self + 0x8A0, 0x3B, 0);
    }
    if (fn_80105BC0(self + 0x1BC, 0x41) != 0 || fn_80105BC0(unit49c, 0x41) != 0) {
        if (fn_80105BC0(self + 0x1BC, 0x41) != 0) {
            fn_80034068(self + 0x8A0, 0xC, 0);
        }
        if (fn_80105BC0(unit49c, 0x41) != 0) {
            fn_80034068(self + 0x8A0, 0x18, 0);
        }
        fn_801A8688(self);
        fn_801A8688(self + 0x2E0);
        fn_801A949C(self);
        fn_801A949C(self + 0x2E0);
        fn_80105D4C(self + 0x1BC, 0x41);
        fn_80105D4C(unit49c, 0x41);
        fn_80034068(self + 0x8A0, 0x35, 0);
    }
    if (fn_80105BC0(unit49c, 0x29) != 0 && *(u32 *)fn_801A7FF4(self + 0x2E0) != 0) {
        fn_80034068(self + 0x8A0, 0x36, 0);
    }
    if (*(s32 *)(self + 0xCA8) >= 2) {
        if ((*fn_8001CB64(fn_801A7FF4(self)) & 0x4000000040ULL) != 0) {
            fn_801A85F4(self);
        }
        if ((*fn_8001CB64(fn_801A7FF4(self + 0x2E0)) & 0x4000000040ULL) != 0) {
            fn_801A85F4(self + 0x2E0);
        }
    }
    if (*(u8 *)(self + 0x2CA) != 0) {
        fn_80034068(self + 0x8A0, 0x34, 0);
    }
    fn_80033E70(self + 0x8A0);
}

void fn_801A6F34(void *arg0, void *arg1)
{
    extern void fn_801A601C(void *, void *, void *, s32);
    extern void fn_801A6C18(void *, void *, s32);
    extern void fn_80034068(void *, s32, s32);

    u8 *obj;

    obj = (u8 *)arg0;

    fn_801A601C(obj, obj, obj + 0x2E0, 0);

    fn_801A6C18(obj, arg1, 1);

    obj[0xCA4] = 0;

    fn_801A601C(obj, obj, obj + 0x2E0, 0);

    fn_80034068(obj + 0x8A0, 0x54, 0);
}

#pragma opt_strength_reduction off
void fn_801A6FB4(void *arg0, void *arg1, void *arg2) {
    void *fn_8001CB64(void *);
    void fn_8001D580(void);
    void fn_800340F0(void *);
    void fn_8003816C(void *, s8, s8);
    void fn_801A601C(void *, void *, s32, s32);
    void *fn_801A7FF4(void *);
    void fn_801A94B0(void *);
    void fn_801A9600(void *, void *);
    void fn_801A96FC(void *, s8);
    void fn_801A981C(void *, s32, s8);
    void fn_801A9CB8(void *, void *);
    void fn_801A9EB8(void *);
    extern u32 lbl_8027B640[];
    s32 neg1;
    void *var_r31;
    void *var_r30;
    void *var_r29;
    u32 sp[4];
    void *temp_r3;

    neg1 = -1;
    var_r31 = arg2;
    var_r30 = arg0;
    sp[0] = lbl_8027B640[0];
    sp[1] = lbl_8027B640[1];
    sp[2] = lbl_8027B640[2];
    sp[3] = lbl_8027B640[3];
    *(void **)&sp[0] = arg1;
    ((u8 *)&sp[1])[0] = *(u8 *)((u8 *)arg1 + 0x19E);
    ((u8 *)&sp[1])[1] = *(u8 *)((u8 *)arg1 + 0x19F);
    ((s8 *)&sp[1])[2] = neg1;
    fn_801A9EB8(var_r30);
    fn_801A9EB8((void *)((s32)var_r30 + 0x2E0));
    fn_801A9EB8((u8 *)var_r30 + 0x5C0);
    fn_800340F0((char *)var_r30 + 0x8A0);
    *(s32 *)((char *)var_r30 + 0xCA8) = 0;
    *(s32 *)((char *)var_r30 + 0xCAC) = 0;
    *(s32 *)((char *)var_r30 + 0xCB0) = 0;
    *(s32 *)((char *)var_r30 + 0xCB4) = 0;
    *(s32 *)((char *)var_r30 + 0xCBC) = 0;
    *(s32 *)((char *)var_r30 + 0xCC0) = 0;
    fn_801A9CB8(var_r30, *(void **)&sp[0]);
    fn_8003816C(var_r30, (s8)((u8 *)&sp[1])[0], (s8)((u8 *)&sp[1])[1]);
    *(u32 *)((char *)var_r30 + 0xCAC) |= 1;
    var_r29 = *(void **)&sp[2];
    if (var_r29 == NULL) {
        if (((u8 *)&sp[1])[3] == 0) {
            fn_801A981C(var_r30, *(s32 *)((char *)var_r30 + 0xCA8), (s8)((u8 *)&sp[1])[2]);
        } else {
            fn_801A96FC(var_r30, (s8)((u8 *)&sp[1])[2]);
        }
    } else {
        fn_801A9600(var_r30, var_r29);
        temp_r3 = fn_8001CB64(var_r29);
        if (((((M2C_FIELD(temp_r3, s32 *, 4) & 0x1000) ^ 0) | ((M2C_FIELD(temp_r3, s32 *, 0) & 0) ^ 0)) != 0)) {
            temp_r3 = fn_8001CB64(fn_801A7FF4(var_r30));
            if (((((M2C_FIELD(temp_r3, s32 *, 4) & 0x4F) ^ 0) | ((M2C_FIELD(temp_r3, s32 *, 0) & 0) ^ 0)) != 0)) {
                *(u32 *)((char *)var_r30 + 0xCAC) |= 0x200;
                fn_801A7FF4((u8 *)var_r30 + 0x2E0);
                fn_8001D580();
            }
        }
    }
    if (((u8 *)&sp[3])[0] != 0) {
        fn_801A94B0(var_r30);
    }
    fn_801A9600(var_r30, var_r31);
    temp_r3 = fn_8001CB64(var_r31);
    if (((((M2C_FIELD(temp_r3, s32 *, 4) & 0x1000) ^ 0) | ((M2C_FIELD(temp_r3, s32 *, 0) & 0) ^ 0)) != 0)) {
        temp_r3 = fn_8001CB64(fn_801A7FF4(var_r30));
        if (((((M2C_FIELD(temp_r3, s32 *, 4) & 0x4F) ^ 0) | ((M2C_FIELD(temp_r3, s32 *, 0) & 0) ^ 0)) != 0)) {
            *(u32 *)((char *)var_r30 + 0xCAC) |= 0x200;
            fn_801A7FF4((char *)var_r30 + 0x2E0);
            fn_8001D580();
        }
    }
    fn_801A601C(var_r30, var_r30, 0, 0);
}

#pragma opt_strength_reduction off
void fn_801A7528(void *arg0, void *arg1) {
    void *fn_8001CB64(void *);
    void fn_8001D580(void);
    void *fn_801A7FF4(void *);
    void fn_801A9600(void *, void *);
    void *temp;
    s32 z;

    z = 0;
    fn_801A9600(arg0, arg1);
    temp = fn_8001CB64(arg1);
    if (((((M2C_FIELD(temp, s32 *, 4) & 0x1000) ^ z) | ((M2C_FIELD(temp, s32 *, 0) & z) ^ z)) != 0)) {
        temp = fn_8001CB64(fn_801A7FF4(arg0));
        if (((((M2C_FIELD(temp, s32 *, 4) & 0x4F) ^ z) | ((M2C_FIELD(temp, s32 *, 0) & z) ^ z)) != 0)) {
            *(u32 *)((char *)arg0 + 0xCAC) |= 0x200;
            fn_801A7FF4((u8 *)arg0 + 0x2E0);
            fn_8001D580();
        }
    }
}
void fn_801A7794(s32 arg0, void *arg1, void *arg2) {
    void *fn_8001CB64(void *);
    void fn_8001D580(void);
    void fn_8002011C(void *, u8, u8, s32, s32);
    void fn_80022FD8(void *, s32);
    void fn_800340F0(s32);
    void fn_8003816C(s32, s8, s8);
    void *fn_801A7FF4(s32);
    void fn_801A94B0(s32);
    void fn_801A9600(s32, void *);
    void fn_801A96FC(s32, s8);
    void fn_801A981C(s32, s32, s8);
    void fn_801A99E8(s32, s32);
    void fn_801A9CB8(s32, void *);
    void fn_801A9EB8(s32);
    extern u8 lbl_802CA518[];
    extern u32 lbl_8027B630[];
    extern u32 lbl_8027B620[];

    u32 sp18[4];
    u32 sp8[4];
    s32 self;
    void *temp_r30;
    void *temp_r3;
    u32 *p;
    u32 *q;
    u32 w1, w2, w3;
    u32 v1, v2, v3;
    u8 a, b, c, d;

    p = lbl_8027B630;
    q = lbl_8027B620;
    self = arg0;

    sp8[0] = p[0];
    w1 = p[1];
    w2 = p[2];
    sp18[0] = q[0];
    v1 = q[1];
    w3 = p[3];
    sp8[1] = w1;
    v2 = q[2];
    a = ((u8 *)arg2)[0x19E];
    b = ((u8 *)arg2)[0x19F];
    v3 = q[3];
    sp18[1] = v1;
    c = ((u8 *)arg1)[0x19E];
    d = ((u8 *)arg1)[0x19F];
    sp8[2] = w2;
    sp8[3] = w3;
    sp8[0] = (u32)arg2;
    ((u8 *)sp8)[4] = a;
    ((u8 *)sp8)[5] = b;
    sp18[2] = v2;
    sp18[3] = v3;
    sp18[0] = (u32)arg1;
    ((u8 *)sp18)[4] = c;
    ((u8 *)sp18)[5] = d;

    fn_801A9EB8(self);
    fn_801A9EB8(self + 0x2E0);
    fn_801A9EB8(self + 0x5C0);
    fn_800340F0(self + 0x8A0);
    *(s32 *)(self + 0xCA8) = 0;
    *(s32 *)(self + 0xCAC) = 0;
    *(s32 *)(self + 0xCB0) = 0;
    *(s32 *)(self + 0xCB4) = 0;
    *(s32 *)(self + 0xCBC) = 0;
    *(s32 *)(self + 0xCC0) = 0;
    fn_801A9CB8(self, *(void **)sp18);
    fn_801A9CB8(self + 0x2E0, *(void **)sp8);
    fn_8003816C(self, (s8)((u8 *)sp18)[4], (s8)((u8 *)sp18)[5]);
    fn_8003816C(self + 0x2E0, (s8)((u8 *)sp8)[4], (s8)((u8 *)sp8)[5]);
    fn_80022FD8(lbl_802CA518, 6);
    fn_8002011C(lbl_802CA518, *(u8 *)(self + 0x19E), *(u8 *)(self + 0x19F), 0x64, 0xF);
    temp_r30 = *(void **)((u8 *)sp18 + 8);
    *(s32 *)(self + 0xCA8) = ((s16 *)*(void **)(lbl_802CA518 + 0x14190))[(s8)*(u8 *)(self + 0x47E) + ((s8)*(u8 *)(self + 0x47F) << 6)];
    if (temp_r30 == NULL) {
        if (((u8 *)sp18)[7] == 0) {
            fn_801A981C(self, *(s32 *)(self + 0xCA8), (s8)((u8 *)sp18)[6]);
        } else {
            fn_801A96FC(self, (s8)((u8 *)sp18)[6]);
        }
    } else {
        fn_801A9600(self, temp_r30);
        temp_r3 = fn_8001CB64(temp_r30);
        if ((*(u64 *)temp_r3 & 0x1000ULL) != 0) {
            temp_r3 = fn_8001CB64(fn_801A7FF4(self));
            if ((*(u64 *)temp_r3 & 0x4FULL) != 0) {
                *(u32 *)(self + 0xCAC) |= 0x200;
                fn_801A7FF4(self + 0x2E0);
                fn_8001D580();
            }
        }
    }
    if (*(void **)((u8 *)sp8 + 8) == NULL) {
        if (((u8 *)sp8)[7] == 0) {
            fn_801A981C(self + 0x2E0, *(s32 *)(self + 0xCA8), (s8)((u8 *)sp8)[6]);
        } else {
            fn_801A96FC(self + 0x2E0, (s8)((u8 *)sp8)[6]);
        }
    } else {
        fn_801A9600(self + 0x2E0, *(void **)((u8 *)sp8 + 8));
    }
    fn_801A99E8(self + 0x2E0, self);
    if (((u8 *)sp18)[0xC] != 0) {
        fn_801A94B0(self);
    }
    if (((u8 *)sp8)[0xC] != 0) {
        fn_801A94B0(self + 0x2E0);
    }
}

#pragma use_lmw_stmw on
void fn_801A7A68(s32 arg0, void *arg1, void *arg2) {
    void *fn_8001CB64(void *);
    void fn_8001D580(void);
    void fn_8002011C(void *, u8, u8, s32, s32);
    void fn_80022FD8(void *, s32);
    void fn_800340F0(s32);
    void fn_8003816C(s32, s8, s8);
    void *fn_801A7FF4(s32);
    void fn_801A94B0(s32);
    void fn_801A9600(s32, void *);
    void fn_801A96FC(s32, s8);
    void fn_801A981C(s32, s32, s8);
    void fn_801A99E8(s32, s32);
    void fn_801A9CB8(s32, void *);
    void fn_801A9EB8(s32);
    extern u8 lbl_802CA518[];
    void *var_r31;
    void *var_r30;
    s32 var_r29;
    void *temp_r28;
    void *temp_r3;
    void *a;
    s32 z;

    var_r31 = arg2;
    var_r30 = arg1;
    var_r29 = arg0;
    fn_801A9EB8(var_r29);
    fn_801A9EB8(var_r29 + 0x2E0);
    fn_801A9EB8(var_r29 + 0x5C0);
    fn_800340F0(var_r29 + 0x8A0);
    z = 0;
    a = *(void **)var_r30;
    fn_801A9CB8(
        (*(s32 *)(var_r29 + 0xCA8) = z,
         *(s32 *)(var_r29 + 0xCAC) = z,
         *(s32 *)(var_r29 + 0xCB0) = z,
         *(s32 *)(var_r29 + 0xCB4) = z,
         *(s32 *)(var_r29 + 0xCBC) = z,
         *(s32 *)(var_r29 + 0xCC0) = z,
         var_r29),
        a);
    fn_801A9CB8(var_r29 + 0x2E0, *(void **)var_r31);
    fn_8003816C(var_r29, (s8)((u8 *)var_r30)[4], (s8)((u8 *)var_r30)[5]);
    fn_8003816C(var_r29 + 0x2E0, (s8)((u8 *)var_r31)[4], (s8)((u8 *)var_r31)[5]);
    fn_80022FD8(lbl_802CA518, 6);
    fn_8002011C(lbl_802CA518, *(u8 *)(var_r29 + 0x19E), *(u8 *)(var_r29 + 0x19F), 0x64, 0xF);
    temp_r28 = *(void **)((u8 *)var_r30 + 8);
    *(s32 *)(var_r29 + 0xCA8) = ((s16 *)*(void **)(lbl_802CA518 + 0x14190))[(s8)*(u8 *)(var_r29 + 0x47E) + ((s8)*(u8 *)(var_r29 + 0x47F) << 6)];
    if (temp_r28 == NULL) {
        if (((u8 *)var_r30)[7] == 0) {
            fn_801A981C(var_r29, *(s32 *)(var_r29 + 0xCA8), (s8)((u8 *)var_r30)[6]);
        } else {
            fn_801A96FC(var_r29, (s8)((u8 *)var_r30)[6]);
        }
    } else {
        fn_801A9600(var_r29, temp_r28);
        temp_r3 = fn_8001CB64(temp_r28);
        if ((*(u64 *)temp_r3 & 0x1000ULL) != 0) {
            temp_r3 = fn_8001CB64(fn_801A7FF4(var_r29));
            if ((*(u64 *)temp_r3 & 0x4FULL) != 0) {
                *(u32 *)(var_r29 + 0xCAC) |= 0x200;
                fn_801A7FF4(var_r29 + 0x2E0);
                fn_8001D580();
            }
        }
    }
    if (*(void **)((u8 *)var_r31 + 8) == NULL) {
        if (((u8 *)var_r31)[7] == 0) {
            fn_801A981C(var_r29 + 0x2E0, *(s32 *)(var_r29 + 0xCA8), (s8)((u8 *)var_r31)[6]);
        } else {
            fn_801A96FC(var_r29 + 0x2E0, (s8)((u8 *)var_r31)[6]);
        }
    } else {
        fn_801A9600(var_r29 + 0x2E0, *(void **)((u8 *)var_r31 + 8));
    }
    fn_801A99E8(var_r29 + 0x2E0, var_r29);
    if (((u8 *)var_r30)[0xC] != 0) {
        fn_801A94B0(var_r29);
    }
    if (((u8 *)var_r31)[0xC] != 0) {
        fn_801A94B0(var_r29 + 0x2E0);
    }
}
#pragma use_lmw_stmw reset
void fn_801A7CDC(void *arg0)
{
    fn_801A9EB8(arg0);
    fn_801A9EB8((char *)arg0 + 0x2E0);
    fn_801A9EB8((char *)arg0 + 0x5C0);
    fn_800340F0((char *)arg0 + 0x8A0);
    *(s32 *)((char *)arg0 + 0xCA8) = 0;
    *(s32 *)((char *)arg0 + 0xCAC) = 0;
    *(s32 *)((char *)arg0 + 0xCB0) = 0;
    *(s32 *)((char *)arg0 + 0xCB4) = 0;
    *(s32 *)((char *)arg0 + 0xCBC) = 0;
    *(s32 *)((char *)arg0 + 0xCC0) = 0;
}

#include "global.h"
extern u16 lbl_802EF4E0;
#include "common.h"

extern u16 lbl_802EF4E0;
#include "global.h"

extern u16 lbl_802EF4E0;
