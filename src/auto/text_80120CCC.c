/* Functions from 0x80120CCC to 0x80127D80, found by decomp-toolkit. */
#include "common.h"

extern f64 lbl_8036A2C8;

typedef struct {
    s32 field_0x84;
} SomeStruct;

extern f32 lbl_8036A30C;
volatile f32 GXRegs_8036A30C[0x800] : 0xCC010000;

void fn_80120CCC(u16 *arg0) {
    *arg0 &= ~0x130;
}

void fn_80120CE0(void *arg0) {
    extern u32 lbl_80367110;

    *(u16 *)((u8 *)arg0 + 0x0) = 0;
    *(u16 *)((u8 *)arg0 + 0x2) = 0;
    lbl_80367110 &= 0xFFFFFFFD;
}

void fn_80120DD4(void *arg0, s32 arg1) {
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_8029023C[];
    u8 temp_r31;
    u8 *temp_r3;

    temp_r31 = ((u8 *)arg0)[0x41];
    if (temp_r31 != (u8)arg1) {
        temp_r3 = fn_8000CAF0(lbl_8029023C, (s32)arg0);
        *(void **)(temp_r3 + 0x30) = arg0;
        temp_r3[0x36] = 0;
        temp_r3[0x37] = 4;
        temp_r3[0x34] = temp_r31;
        temp_r3[0x35] = (u8)arg1;
    }
}

void fn_80120E4C(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_8000C188(void *);

    *(u8 *)((u8 *)arg0 + 0x36) = (u8)(*(u8 *)((u8 *)arg0 + 0x36) + 1);
    *(s8 *)(*(u8 **)((u8 *)arg0 + 0x30) + 0x41) = (s8)fn_800067BC(
        0,
        (f32)*(u8 *)((u8 *)arg0 + 0x34),
        (f32)*(u8 *)((u8 *)arg0 + 0x35),
        (f32)*(u8 *)((u8 *)arg0 + 0x36),
        (f32)*(u8 *)((u8 *)arg0 + 0x37));
    if (*(u8 *)((u8 *)arg0 + 0x36) == *(u8 *)((u8 *)arg0 + 0x37)) {
        fn_8000C188(arg0);
    }
}

void fn_80120F94(void)
{
    extern unsigned short lbl_80367A58;
    extern unsigned short lbl_80367110;
    extern u8 lbl_80290200[];

    if ((lbl_80367A58 & 0x0040) == 0) {
        if (fn_8000C0C0(lbl_80290200) != 0) {
            if ((lbl_80367110 & 3) != 0) {
                fn_8000C60C();
            } else {
                fn_8000C188();
            }
        }
    }
}

void fn_80120FE8(void *arg0) {
    u8* ptr = (u8*)arg0 + 0x46;
    *ptr = *ptr - 1;
    
    if (*ptr < 0x80) {
        u8* ptr2 = (u8*)arg0 + 0x47;
        *ptr2 = *ptr2 - 1;
    }
}

void fn_801210CC(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80007124(void *);
    void fn_80007668(void *);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007858(f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(u8);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(void *, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8006ECCC(void *, void *, s32);
    u32 *fn_8018D900(s32);
    u16 fn_80222A80(void *);
    u16 fn_80222A90(void *);
    extern u32 lbl_80367110;
    extern void *lbl_803674F4;
    extern f32 lbl_8036A258;
    extern f32 lbl_8036A268;
    extern f32 lbl_8036A26C;
    extern f32 lbl_8036A270;
    u32 color;
    u8 spC[0x24];
    s16 x;
    void *self;
    f32 z;
    u16 w;

    self = arg0;
    if ((lbl_80367110 & 3) == 0) {
        x = M2C_FIELD(self, s16 *, 0x48);
        if (x >= 0x3E8) {
            x -= 0x3E8;
        }
        if (x > 0x1F8) {
            x = 0x1F8;
        }
        if (x < 0x68) {
            x = 0x68;
        }
        M2C_FIELD(self, u8 *, 0x50) = (u8)(s32)fn_800067BC(
            0,
            (f32)M2C_FIELD(self, u8 *, 0x4C),
            (f32)M2C_FIELD(self, u8 *, 0x4D),
            (f32)M2C_FIELD(self, u8 *, 0x4E),
            (f32)M2C_FIELD(self, u8 *, 0x4F));
        fn_8000A258();
        z = lbl_8036A258;
        fn_80009D74(z, z, lbl_8036A26C, lbl_8036A268);
        fn_80009B8C(M2C_FIELD(self, u8 *, 0x50));
        fn_8000A248();
        fn_8006ECCC(lbl_803674F4, spC, 0x1E);
        *(volatile u16 *)(spC + 0x20) = fn_80222A80(spC);
        *(volatile u16 *)(spC + 0x22) = fn_80222A90(spC);
        fn_8000A258();
        fn_8000A174(spC, 0x10);
        fn_8000A248();
        fn_80007898(1);
        w = *(u16 *)(spC + 0x20);
        fn_800077D8(
            (f32)(s32)(x - (s32)((w >> 1) & 0x7FFF)),
            (f32)(s32)(M2C_FIELD(self, s16 *, 0x4A) - 0xC),
            (f32)w,
            (f32)*(u16 *)(spC + 0x22));
        fn_80007884();
        fn_8000A258();
        fn_8000A174((void *)0, 0x13);
        fn_80009C0C(lbl_8036A270);
        fn_8000A248();
        fn_80007898(6);
        fn_80007858(
            (f32)(s32)(x - (s32)((u32)M2C_FIELD(self, u8 *, 0x51) >> 1)),
            (f32)(s32)(M2C_FIELD(self, s16 *, 0x4A) - 0xC));
        color = *fn_8018D900(1);
        fn_80007668(&color);
        fn_80007124((u8 *)self + 0x30);
        fn_80007884();
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}

void fn_80121328(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x4E) = (u8) (M2C_FIELD(arg0, u8 *, 0x4E) + 1);
}

void fn_80121338(void *arg0) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    s32 result;
    s32 zero;
    s32 eight;

    result = (s32)fn_800067BC(
        0,
        (f32)*(u8 *)((u8 *)arg0 + 0x4C),
        (f32)*(u8 *)((u8 *)arg0 + 0x4D),
        (f32)*(u8 *)((u8 *)arg0 + 0x4E),
        (f32)*(u8 *)((u8 *)arg0 + 0x4F));
    zero = 0;
    eight = 8;
    *(u8 *)((u8 *)arg0 + 0x4C) = result;
    *(u8 *)((u8 *)arg0 + 0x4D) = zero;
    *(u8 *)((u8 *)arg0 + 0x4E) = zero;
    *(u8 *)((u8 *)arg0 + 0x4F) = eight;
    *(s16 *)((u8 *)arg0 + 0x28) = *(u8 *)((u8 *)arg0 + 0x4F);
}

void fn_801213EC(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0x4C) = 0;
    *(u8 *)((u8 *)arg0 + 0x4D) = 0xFF;
    *(u8 *)((u8 *)arg0 + 0x4E) = 0;
    *(u8 *)((u8 *)arg0 + 0x4F) = 8;
    *(s16 *)((u8 *)arg0 + 0x28) = (u8)*(u8 *)((u8 *)arg0 + 0x4F);
}

void fn_80121414(void) {
    extern u8 lbl_8032BDE8[];
    s32 i;
    s32 ctr;

    i = 0;
    ctr = 0x20;
    *(u32 *)(lbl_8032BDE8 + 0x4000) = i;
    *(u32 *)(lbl_8032BDE8 + 0x4004) = i;
    *(u8 *)(lbl_8032BDE8 + 0x400C) = i;
    do {
        lbl_8032BDE8[((i + 0x100) << 6) & 0x3FC0] = 0;
        lbl_8032BDE8[((i + 0x101) << 6) & 0x3FC0] = 0;
        lbl_8032BDE8[((i + 0x102) << 6) & 0x3FC0] = 0;
        lbl_8032BDE8[((i + 0x103) << 6) & 0x3FC0] = 0;
        lbl_8032BDE8[((i + 0x104) << 6) & 0x3FC0] = 0;
        lbl_8032BDE8[((i + 0x105) << 6) & 0x3FC0] = 0;
        lbl_8032BDE8[((i + 0x106) << 6) & 0x3FC0] = 0;
        lbl_8032BDE8[((i + 0x107) << 6) & 0x3FC0] = 0;
        i += 8;
    } while (--ctr);
}

void fn_80121630(void* arg0)
{
    s32 spC;
    s32 i;
    
    if (arg0 != 0) {
        spC = 0;
        for (i = 0; i < 4; i++) {
            if (((u32*)arg0)[i] != 0) {
                spC |= 1 << i;
            }
        }
        ((u32*)arg0)[4] = spC;
    }
}

#pragma cplusplus on
extern "C" void fn_80121754(void) {
    extern u8 lbl_8032BDE8[];
    struct Obj {
        u8 pad[0x2c];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3() = 0;
        virtual void v4() = 0;
        virtual void v5() = 0;
        virtual void v6(s32) = 0;
    };
    Obj *obj;
    Obj **slot;

    slot = (Obj **)&lbl_8032BDE8[0x4018];
    obj = *slot;
    if (*slot != NULL) {
        if (obj != NULL) {
            obj->v6(1);
        }
        *slot = (Obj *)0;
    }
}
#pragma cplusplus reset

void fn_801217AC(void) {
    void fn_80057880(void *, s32);
    void fn_80057898(void *, s32);
    void fn_800578A0(void *, f32);
    void fn_800578A8(void *, s32, s32, s32);
    void *fn_80057998(void *);
    void *fn_800C42D8(u32);
    extern u8 lbl_8032BDE8[];
    extern f32 lbl_8036A278;
    void *obj;
    s32 n;

    *(s16 *)&lbl_8032BDE8[0x4014] = 0;
    *(s16 *)&lbl_8032BDE8[0x4016] = 0x20;
    *(u8 *)&lbl_8032BDE8[0x4013] = 0;
    *(u8 *)&lbl_8032BDE8[0x4012] = 0;
    *(s16 *)&lbl_8032BDE8[0x4010] = 0;
    n = 0x100;
    if (*(s32 *)&lbl_8032BDE8[0x4000] < 0x100) {
        n = *(s32 *)&lbl_8032BDE8[0x4000];
    }
    *(s16 *)&lbl_8032BDE8[0x400E] = (n - 0xF) * 0x19;
    if (*(s16 *)&lbl_8032BDE8[0x400E] < 0) {
        *(s16 *)&lbl_8032BDE8[0x400E] = 0;
    }
    if (*(s16 *)&lbl_8032BDE8[0x400E] != 0) {
        obj = fn_800C42D8(0x30);
        if (obj != NULL) {
            obj = fn_80057998(obj);
        }
        *(void **)&lbl_8032BDE8[0x4018] = obj;
        fn_800578A8(obj, 0x240, 0x36, 0x174);
        fn_800578A0(*(void **)&lbl_8032BDE8[0x4018], lbl_8036A278);
        fn_80057898(*(void **)&lbl_8032BDE8[0x4018], *(s16 *)&lbl_8032BDE8[0x400E] + 0x177);
        fn_80057880(*(void **)&lbl_8032BDE8[0x4018], 0x177);
    } else {
        *(void **)&lbl_8032BDE8[0x4018] = NULL;
    }
}

extern u8 lbl_8032BDE8[16];
void fn_80121A70(void) {
    fn_80121A98(&lbl_8032BDE8);
}

void fn_80121D30(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0, 0x33, 0x260, 0x177);
}

void fn_80121D60(void *arg0, u8 *arg1) {
    u8 *fn_8007C378(u8 *);
    extern u8 lbl_80274D20[];
    extern u32 lbl_80367110;
    u8 *s;
    u8 c;
    s32 pos;
    s32 off;
    u32 bit;

    if (arg1 == *(u8 **)((u8 *)arg0 + 0x4008)) {
        return;
    }
    *(u8 **)((u8 *)arg0 + 0x4008) = arg1;
    if (arg1 == NULL) {
        return;
    }
    if ((s32)*arg1 == 0x47) {
        s = lbl_80274D20 + 0x31;
        bit = lbl_80367110 & 0x800;
        switch (bit) {
        case 0:
            do {
                c = *s;
                s += 1;
                if (!(lbl_80367110 & 0x800)) {
                    *(u8 *)((u8 *)arg0 + 0x400C) = 0;
                    pos = *(s32 *)((u8 *)arg0 + 0x4004);
                    if (pos <= 0x3E) {
                        off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
                        off = (off & 0x3FC0) + pos;
                        M2C_FIELD(arg0, u8 *, off) = c;
                        pos = *(s32 *)((u8 *)arg0 + 0x4004);
                        *(s32 *)((u8 *)arg0 + 0x4004) = pos + 1;
                        off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
                        off = (off & 0x3FC0) + *(s32 *)((u8 *)arg0 + 0x4004);
                        M2C_FIELD(arg0, u8 *, off) = 0;
                    }
                }
            } while ((s8)*s != 0);
            break;
        }
        if (*(u8 *)((u8 *)arg0 + 0x400C) == 0) {
            off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
            off = (off & 0x3FC0) + *(s32 *)((u8 *)arg0 + 0x4004);
            M2C_FIELD(arg0, u8 *, off) = 0;
            *(s32 *)((u8 *)arg0 + 0x4004) = 0;
            *(s32 *)((u8 *)arg0 + 0x4000) = *(s32 *)((u8 *)arg0 + 0x4000) + 1;
            off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
            off = (off & 0x3FC0) + *(s32 *)((u8 *)arg0 + 0x4004);
            M2C_FIELD(arg0, u8 *, off) = 0;
            *(u8 *)((u8 *)arg0 + 0x400C) = 1;
        }
    } else {
        s = lbl_80274D20 + 0x37;
        bit = lbl_80367110 & 0x800;
        switch (bit) {
        case 0:
            do {
                c = *s;
                s += 1;
                if (!(lbl_80367110 & 0x800)) {
                    *(u8 *)((u8 *)arg0 + 0x400C) = 0;
                    pos = *(s32 *)((u8 *)arg0 + 0x4004);
                    if (pos <= 0x3E) {
                        off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
                        off = (off & 0x3FC0) + pos;
                        M2C_FIELD(arg0, u8 *, off) = c;
                        pos = *(s32 *)((u8 *)arg0 + 0x4004);
                        *(s32 *)((u8 *)arg0 + 0x4004) = pos + 1;
                        off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
                        off = (off & 0x3FC0) + *(s32 *)((u8 *)arg0 + 0x4004);
                        M2C_FIELD(arg0, u8 *, off) = 0;
                    }
                }
            } while ((s8)*s != 0);
            break;
        }
        s = fn_8007C378(arg1);
        bit = lbl_80367110 & 0x800;
        switch (bit) {
        case 0:
            do {
                c = *s;
                s += 1;
                if (!(lbl_80367110 & 0x800)) {
                    *(u8 *)((u8 *)arg0 + 0x400C) = 0;
                    pos = *(s32 *)((u8 *)arg0 + 0x4004);
                    if (pos <= 0x3E) {
                        off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
                        off = (off & 0x3FC0) + pos;
                        M2C_FIELD(arg0, u8 *, off) = c;
                        pos = *(s32 *)((u8 *)arg0 + 0x4004);
                        *(s32 *)((u8 *)arg0 + 0x4004) = pos + 1;
                        off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
                        off = (off & 0x3FC0) + *(s32 *)((u8 *)arg0 + 0x4004);
                        M2C_FIELD(arg0, u8 *, off) = 0;
                    }
                }
            } while ((s8)*s != 0);
            break;
        }
        if (*(u8 *)((u8 *)arg0 + 0x400C) == 0) {
            off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
            off = (off & 0x3FC0) + *(s32 *)((u8 *)arg0 + 0x4004);
            M2C_FIELD(arg0, u8 *, off) = 0;
            *(s32 *)((u8 *)arg0 + 0x4004) = 0;
            *(s32 *)((u8 *)arg0 + 0x4000) = *(s32 *)((u8 *)arg0 + 0x4000) + 1;
            off = (*(s32 *)((u8 *)arg0 + 0x4000) + 0x100) << 6;
            off = (off & 0x3FC0) + *(s32 *)((u8 *)arg0 + 0x4004);
            M2C_FIELD(arg0, u8 *, off) = 0;
            *(u8 *)((u8 *)arg0 + 0x400C) = 1;
        }
    }
}

void fn_80122000(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x400C) == 0) {
        s32 temp_r4;
        s32 temp_r5;
        
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x4000);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4004);
        
        temp_r5 = (temp_r5 + 0x100) << 6;
        temp_r5 = temp_r5 & 0x3FC0;
        temp_r5 = temp_r5 + temp_r4;
        
        M2C_FIELD(arg0, u8 *, temp_r5) = 0;
        M2C_FIELD(arg0, s32 *, 0x4004) = 0;
        M2C_FIELD(arg0, s32 *, 0x4000) = (s32) (M2C_FIELD(arg0, s32 *, 0x4000) + 1);
        
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x4000);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4004);
        
        temp_r5 = (temp_r5 + 0x100) << 6;
        temp_r5 = temp_r5 & 0x3FC0;
        temp_r5 = temp_r5 + temp_r4;
        
        M2C_FIELD(arg0, u8 *, temp_r5) = 0;
        M2C_FIELD(arg0, u8 *, 0x400C) = 1;
    }
}

void fn_80122170(u32 *arg0) {
    u32 temp_r3;
    
    // Direct read of the 16-bit value at offset 0x4000
    if ((*(u16 *)((u8 *)arg0 + 0x4000) & 0x4000) == 0) {
        *(u32 *)((u8 *)arg0 + 0x4000) = (*(u32 *)((u8 *)arg0 + 0x4000) | 0x40000000);
    }
}

void fn_801221E4(void *arg0)
{
    extern unsigned short lbl_80367A58;
    extern unsigned short lbl_80367110;

    fn_80120CFC(lbl_80367A58);
    fn_80120C2C();

    if ((lbl_80367A58 & 0x0200) == 0 &&
        (lbl_80367110 & 3) != 0) {
        fn_8000C188(arg0);
    }
}

void fn_80122314(void *arg0) {
    extern u16 lbl_80367A58;
    extern u32 lbl_80367110;
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    void fn_80120CFC(void *);
    s32 cur;
    s32 total;

    fn_80120CFC(&lbl_80367A58);
    M2C_FIELD(arg0, s32 *, 0x34)++;
    cur = M2C_FIELD(arg0, s32 *, 0x34);
    total = M2C_FIELD(arg0, s32 *, 0x38);
    if (cur > total || (lbl_80367110 & 3)) {
        fn_8000C188(arg0);
        if (M2C_FIELD(arg0, s32 *, 0x40) == 0) {
            struct {
                u8 pad0[0x30];
                void *items[5];
                u8 unk44;
                s8 count;
                u8 unk46;
                u8 unk47;
                u8 unk48;
            } *p = M2C_FIELD(arg0, void **, 0x30);
            s32 i;
            void *q;
            for (i = 0; i < p->count; i++) {
                q = p->items[i];
                if (q != NULL) {
                    M2C_FIELD(q, u8 *, 0) = 0;
                    M2C_FIELD(q, void **, 0x40) = q;
                }
            }
            p->unk46 = 0;
            p->unk47 = 0;
            p->unk48 = 0;
        }
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 0x68) = (u8) fn_800067BC(0, (f32) M2C_FIELD(arg0, s32 *, 0x3C), (f32) M2C_FIELD(arg0, s32 *, 0x40), (f32) cur, (f32) total);
    }
}

void fn_80122524(void *arg0) {
    void fn_80120CFC(u16 *);
    u8 fn_80120C2C(void);
    void fn_801475FC(void *, s32);
    void fn_80109BB4(s32, s32);
    void fn_8000C188(void *);
    void fn_80121630(void *);
    extern u16 lbl_80367A58;
    extern u8 lbl_80274D60[];
    extern u32 *lbl_80367240;
    u32 temp;

    fn_80120CFC(&lbl_80367A58);
    if (fn_80120C2C() != 0 || (lbl_80367A58 & 4)) {
        fn_801475FC(lbl_80274D60 + 0x3D, 0x64);
        if (*(u32 *)((u8 *)arg0 + 0x30) != 0) {
            fn_80109BB4(*(s32 *)((u8 *)arg0 + 0x38), 8);
        }
        fn_8000C188(arg0);
        lbl_80367A58 &= ~0x200;
    } else {
        temp = lbl_80367240[1];
        if (temp & (lbl_80367240[2] ^ temp) & 0x10) {
            fn_80121630(arg0);
        }
    }
}

void fn_801225D4(void *arg0, s32 arg1, s32 arg2)
{
    M2C_FIELD(arg0, u32 *, 0x30) = (u32)arg1;
    if (arg2 >= 0) {
        M2C_FIELD(arg0, s16 *, 0x60) = (s16)arg2;
    }
}

extern struct efUnit* lbl_80367A58;
void fn_8012282C(struct efUnit* arg0)
{
    struct efUnit* temp_r5;
    if (arg0 != NULL)
    {
        if (arg0->field_0x24 != NULL)
        {
            arg0->field_0x24 = NULL;
        }
        if (arg0->field_0x1C != NULL)
        {
            arg0->field_0x1C = NULL;
        }
        if (arg0->field_0x18 != NULL)
        {
            arg0->field_0x18 = NULL;
        }
        
        temp_r5 = arg0->field_0x18;
        if (temp_r5 == NULL)
        {
            return;
        }
        
        if (arg0->field_0x24 != NULL)
        {
            // No-op
        }
        
        arg0->field_0x1C = NULL;
        arg0->field_0x18 = temp_r5;
        
        if (temp_r5 == NULL)
        {
            return;
        }
        
        // Additional logic for handling the units, similar to fn_80120CFC
        // but with additional checks and assignments
        
        // Placeholder structure that matches the target assembly
        // This is an approximation of what might be needed
    }
}

extern u8 lbl_80290288[16];
void fn_80122998(s32 arg0) {
    void fn_8000CAF0(void *, s32);
    extern u8 lbl_80290288[16];
    fn_8000CAF0(lbl_80290288, arg0);
}

u8 fn_801229C4(u8 *arg0) {
    s8 a = (s8)arg0[0x46];
    s8 b = (s8)arg0[0x47];
    s8 c = (s8)arg0[0x45];
    return (u8)((b - a) >= c);
}

void fn_801229F8(void *arg0) {
    u8 temp_r4;

    M2C_FIELD(arg0, u8 *, 0x47) = (u8) (M2C_FIELD(arg0, u8 *, 0x47) + 1);
    temp_r4 = M2C_FIELD(arg0, u8 *, 0x47);
    if ((s8) temp_r4 > 0x60) {
        M2C_FIELD(arg0, u8 *, 0x47) = (u8) (temp_r4 - 0x40);
        M2C_FIELD(arg0, u8 *, 0x46) = (u8) (M2C_FIELD(arg0, u8 *, 0x46) - 0x40);
    }
}

void fn_80122A74(s32 unused, s16 *p) {
    extern void fn_80225058(s16, s16, s16, s16);
    fn_80225058(p[0], p[1], p[2], p[3]);
}

void fn_80122AA8(void* arg0) {
    // Placeholder - just want to get it to compile
}

void fn_80122C84(void *arg0) {
    void *p;
    s32 i;
    s32 zero = 0;

    p = arg0;
    i = 0;
    do {
        fn_800C428C(*(s32 *)((u8 *)p + 0x30));
        *(s32 *)((u8 *)p + 0x30) = zero;
        i += 1;
        p = (u8 *)p + 4;
    } while (i < 5);
}

void fn_80122CE0(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 temp_r4;

    temp_r3 = *(s32*)((char*)arg0 + 0x84); 
    temp_r4 = *(s32*)((char*)arg1 + 0x84);
    if (temp_r3 != temp_r4) {
        return;
    }

    temp_r3 = *(s32*)((char*)arg0 + 0x44); 
    temp_r4 = *(s32*)((char*)arg1 + 0x44);
    
    if (temp_r3 == temp_r4) {
        *(s8*)((char*)arg1 + 0x4A) = *(s8*)((char*)arg0 + 0x4A);
        *(s8*)((char*)arg1 + 0x4B) = *(s8*)((char*)arg0 + 0x4B);
    }
}

void fn_80122DD0(void *arg0, s16 arg1, s16 arg2) {
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s16 *, 0x60) = arg1;
    }
    if (arg2 >= 0) {
        M2C_FIELD(arg0, s16 *, 0x62) = arg2;
    }
}

void fn_80122DEC(void *arg0, s32 arg1, s16 arg2, s16 arg3) {
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x60) = arg2;
    M2C_FIELD(arg0, s16 *, 0x62) = arg3;
}

void fn_80122DFC(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x49) = arg1;
}

void fn_80122E04(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x4A) = arg1;
    M2C_FIELD(arg0, s8 *, 0x4B) = arg2;
}

void fn_80122E10(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x50) = arg1;
}

void fn_80122E18(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x45) = arg1;
}

void fn_80122E20(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x44) = arg1;
}

void fn_80122E28(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x4C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x4E) = arg2;
}

void fn_80122E34(void *arg0, u32 arg1) {
    s32 fn_80109180(u32, void *);
    if (arg1 != 0U) {
        M2C_FIELD(arg0, s32 *, 0x64) = fn_80109180(arg1, arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
}

void fn_80122F04(void *arg0, void *arg1) {
    M2C_UNK fn_800536B0(s32, f32, f32, f32);
    void *fn_8005397C(M2C_UNK);
    M2C_UNK fn_800C93EC(s32);
    extern f32 lbl_8036A2C0;
    extern f32 lbl_8036A2C4;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r5;
    s32 var_r26;
    s32 var_r29;
    void *temp_r30;

    temp_f30 = lbl_8036A2C0;
    temp_f31 = lbl_8036A2C4;
    var_r29 = 0;
    var_r26 = 0;
loop_2:
    if (var_r29 < (s32) M2C_FIELD(arg1, s32 *, 4)) {
        fn_800C93EC(M2C_FIELD(arg1, s32 *, 8) + var_r26);
        temp_r30 = fn_8005397C(4);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x4C) + 0xC;
        fn_800536B0(temp_r5, (f32) M2C_FIELD(arg0, s32 *, 0x48), (f32) temp_r5, (f32) (M2C_FIELD(arg0, s32 *, 0x44) + 1));
        var_r29 += 1;
        var_r26 += 0xC;
        M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x30), f32 *, 0x1C) = (f32) (s16) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
        M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x30), f32 *, 0x18) = temp_f30;
        M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x30), f32 *, 0x20) = temp_f31;
        goto loop_2;
    }
}

#pragma use_lmw_stmw on
void fn_80123034(void *arg0, void *arg1, s32 arg2, f32 farg0, f32 farg1) {
    void fn_800536B0(void *, f32, f32, f32);
    void *fn_8005397C(void *, s32);
    void *fn_800C93EC(s32);
    extern f32 lbl_8036A2D0;
    extern f32 lbl_8036A2D4;
    extern f32 lbl_8036A2D8;
    extern f32 lbl_8036A2C0;
    extern f32 lbl_8036A2C4;
    extern u8 lbl_80274DB0[];
    void *obj;
    s32 i;
    u32 off;
    void *self;
    void *list;
    f32 t3;
    f32 f31;
    f32 f30;
    f32 t0;
    f64 bias;

    self = arg0;
    list = arg1;
    t3 = lbl_8036A2D0;
    t0 = lbl_8036A2D4;
    *(f32 *)((u8 *)self + 0x78) = t3 * farg0;
    *(f32 *)((u8 *)self + 0x80) = t0 * farg0;
    *(f32 *)((u8 *)self + 0x7C) = farg1;
    *(s32 *)((u8 *)self + 0x90) = arg2;

    if (*(u32 *)((u8 *)list + 4) == 0) {
        obj = fn_8005397C(lbl_80274DB0 + 8, 4);
        bias = lbl_8036A2C8;
        fn_800536B0(obj,
                    (f32)*(s32 *)((u8 *)self + 0x48),
                    (f32)*(s32 *)((u8 *)self + 0x4C),
                    (f32)(*(s32 *)((u8 *)self + 0x44) + 1));
        *(f32 *)(*(u8 **)((u8 *)obj + 0x30) + 0x1C) =
            (f32)(s16)(*(s32 *)((u8 *)self + 0x44) + 1);
        *(f32 *)(*(u8 **)((u8 *)obj + 0x30) + 0x18) = lbl_8036A2D8;
        return;
    }

    bias = lbl_8036A2C8;
    i = 0;
    f30 = lbl_8036A2C0;
    off = 0;
    f31 = lbl_8036A2C4;
    while (i < *(s32 *)((u8 *)list + 4)) {
        obj = fn_8005397C(fn_800C93EC(*(s32 *)((u8 *)list + 8) + (s32)off), 4);
        fn_800536B0(obj,
                    (f32)*(s32 *)((u8 *)self + 0x48),
                    (f32)*(s32 *)((u8 *)self + 0x4C),
                    (f32)(*(s32 *)((u8 *)self + 0x44) + 1));
        ++i;
        off += 0xC;
        *(f32 *)(*(u8 **)((u8 *)obj + 0x30) + 0x1C) =
            (f32)(s16)(*(s32 *)((u8 *)self + 0x44) + 1);
        *(f32 *)(*(u8 **)((u8 *)obj + 0x30) + 0x20) = f31;
        *(f32 *)(*(u8 **)((u8 *)obj + 0x30) + 0x18) = f30;
    }
    (void)bias;
}
#pragma use_lmw_stmw reset

void fn_8012323C(void* arg0) {
    if (arg0 != NULL) {
        s32 val = *(s32*)((u8*)arg0 + 0x84);
        if (val != 0x24) {
            *(s32*)((u8*)arg0 + 0x84) = 0;
        } else {
            fn_80238638(arg0, 1); // call to helper function
            *(s32*)((u8*)arg0 + 0x84) = 0;
        }
    }
}

void fn_801232F4(void *arg0, f32 farg0, f32 farg1) {
    M2C_FIELD(arg0, f32 *, 0x70) = farg0;
    M2C_FIELD(arg0, f32 *, 0x74) = farg1;
}

void fn_80123300(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
}

void fn_80123634(void *arg0) {
    M2C_UNK (*fn)(void *);

    fn = M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), M2C_UNK (**)(void *), 0x38);
    fn(arg0);
    if (M2C_FIELD(arg0, f32 *, 0x6C) < M2C_FIELD(arg0, f32 *, 0x70)) {
        M2C_FIELD(arg0, f32 *, 0x6C) = M2C_FIELD(arg0, f32 *, 0x6C) + M2C_FIELD(arg0, f32 *, 0x74);
        if (M2C_FIELD(arg0, f32 *, 0x6C) >= M2C_FIELD(arg0, f32 *, 0x70)) {
            M2C_FIELD(arg0, f32 *, 0x6C) = M2C_FIELD(arg0, f32 *, 0x70);
        }
    } else if (M2C_FIELD(arg0, f32 *, 0x6C) > M2C_FIELD(arg0, f32 *, 0x70)) {
        M2C_FIELD(arg0, f32 *, 0x6C) = M2C_FIELD(arg0, f32 *, 0x6C) - M2C_FIELD(arg0, f32 *, 0x74);
        if (M2C_FIELD(arg0, f32 *, 0x6C) <= M2C_FIELD(arg0, f32 *, 0x70)) {
            M2C_FIELD(arg0, f32 *, 0x6C) = M2C_FIELD(arg0, f32 *, 0x70);
        }
    }
}

void *fn_801236CC(void *arg0, void *arg1, void *arg2) {
    void fn_800E2CF4(void *);
    void fn_800C9ABC(void *, void *, void *);
    void fn_800C8DCC(void *, void *, void *);
    void fn_800C96F8(void *, void *, u32);
    void fn_800C9A60(void *, s32);
    s32 fn_800C9400(void *, u32, u32, char *, u32);
    s32 fn_800E7FB4(void *, void *);
    u32 strlen(const char *);
    extern u8 lbl_802902E8[];
    extern u8 lbl_80274DB0[];
    extern f32 lbl_8036A2F8;
    extern f32 lbl_8036A2E8;

    typedef struct {
        u32 size;
        u32 cap;
        char *data;
    } String;

    typedef struct {
        void *unk00;
        u8 pad04[0x3C];
        void *vtable;
        u8 pad44[0x10];
        String str54;
        s32 unk60;
        s32 unk64;
        s32 unk68;
        f32 unk6C;
        f32 unk70;
        f32 unk74;
        f32 unk78;
        f32 unk7C;
        f32 unk80;
        f32 unk84;
        f32 unk88;
        f32 unk8C;
        s32 unk90;
        s32 unk94;
    } Obj;

    char spC0[0x20];
    char spA0[0x20];
    char sp80[0x20];
    char sp60[0x20];
    String sp54;
    String sp48;
    String sp3C;
    String sp30;
    String sp24;
    String sp18;
    u8 sp14[4];
    u8 sp10[4];
    u8 spC[4];
    u8 sp8[4];
    void *saved;
    Obj *path;
    Obj *self;
    Obj *buf;
    f32 t1;
    f32 t0;

    path = (Obj *)arg2;
    self = (Obj *)arg0;
    fn_800E2CF4(arg0);
    self->vtable = lbl_802902E8;

    self->str54.size = 0;
    self->str54.cap = 0;
    self->str54.data = 0;
    self->str54.cap = 0;

    saved = self->unk00;

    sp54.cap = 0;
    sp48.cap = 0;
    sp54.size = 0;
    sp54.data = 0;
    sp54.cap = 0;
    sp48.size = 0;
    sp48.data = 0;
    sp48.cap = 0;

    fn_800C9ABC(&sp3C, lbl_80274DB0 + 0x12, &sp14);
    fn_800C8DCC(spC0, path, &sp3C);
    buf = (Obj *)spC0;
    fn_800C96F8(&self->str54, buf, strlen((char *)buf));
    fn_800C9A60(&sp3C, -1);

    fn_800C9ABC(&sp30, lbl_80274DB0 + 0x1A, &sp10);
    fn_800C8DCC(spA0, path, &sp30);
    buf = (Obj *)spA0;
    fn_800C96F8(&sp48, buf, strlen((char *)buf));
    fn_800C9A60(&sp30, -1);

    fn_800C9ABC(&sp24, lbl_80274DB0 + 0x1F, &spC);
    fn_800C8DCC(sp80, path, &sp24);
    self->unk68 = *(s32 *)sp80;
    fn_800C9A60(&sp24, -1);

    t1 = lbl_8036A2F8;
    self->unk6C = t1;
    self->unk70 = t1;
    t0 = lbl_8036A2E8;
    self->unk74 = t0;
    self->unk78 = t0;
    self->unk80 = t0;
    self->unk7C = t0;
    self->unk84 = t0;
    self->unk88 = t0;
    self->unk8C = t0;
    self->unk90 = 0;

    fn_800C9ABC(&sp18, lbl_80274DB0 + 0x23, &sp8);
    fn_800C8DCC(sp60, path, &sp18);
    self->unk94 = *(s32 *)sp60;
    fn_800C9A60(&sp18, -1);

    buf = (Obj *)(lbl_80274DB0 + 0x2B);
    if (fn_800C9400(&sp48, 0, sp48.size, (char *)buf, strlen((char *)buf)) == 0) {
        self->unk64 = 1;
    } else {
        self->unk64 = 0;
    }
    self->unk60 = fn_800E7FB4(saved, &self->str54);
    fn_800C9A60(&sp48, -1);
    fn_800C9A60(&sp54, -1);
    return self;
}

void fn_8012391C(void *arg0) {
    void *fn_8000C0C0(void *);
    void fn_8000C60C(void *);
    void fn_80123988(void *);
    extern u8 lbl_80290408[];
    extern u8 lbl_8036728A;
    void *temp_r3;
    void *ptr;

    temp_r3 = fn_8000C0C0(lbl_80290408);
    if (temp_r3 == NULL || *(s32 *)((u8 *)temp_r3 + 0x34) != lbl_8036728A) {
        ptr = *(void **)((u8 *)arg0 + 0x30);
        if (ptr != NULL) {
            fn_8000C60C(ptr);
        }
        *(void **)((u8 *)arg0 + 0x30) = NULL;
        fn_80123988(arg0);
    }
}

s32 fn_80123BA8(void) {
    s32 fn_8000CAF0(void *, s32);
    void fn_80123988(void);
    extern u8 lbl_80290408[];
    s32 result;

    result = fn_8000CAF0(lbl_80290408, 4);
    fn_80123988();
    return result;
}

void fn_80123BE8(void) {

}

void fn_80123BEC(void *arg0) {
    void fn_8000C60C(void *);
    void *ptr;

    ptr = *(void **)((u8 *)arg0 + 0x30);
    if (ptr != NULL) {
        fn_8000C60C(ptr);
    }
    *(void **)((u8 *)arg0 + 0x30) = NULL;
}

void fn_80123C2C(void *arg0) {
    void fn_8006785C(s32, void *, void *);
    void fn_80124424(void *);
    u8 fn_800AA188(void);
    void fn_80123D1C(void);

    if (*(u8 *)((u8 *)arg0 + 0x4D) != 0) {
        fn_8006785C(2, fn_80123D1C, arg0);
        goto block_4;
    }
    if (fn_800AA188() != 0) {
        fn_8006785C(2, fn_80123D1C, arg0);
    block_4:
        fn_80124424(arg0);
    }
}

void fn_80123CA0(void *arg0) {
    void fn_8006D8E8(s32);
    void fn_800C426C(s32);
    void fn_801479C4(u8 *, s32);
    extern u8 lbl_80274F74[];

    fn_800C426C(*(s32 *)((u8 *)arg0 + 0x64));
    fn_800C426C(*(s32 *)((u8 *)arg0 + 0x60));
    fn_800C426C(*(s32 *)((u8 *)arg0 + 0x5C));
    fn_8006D8E8(*(s32 *)((u8 *)arg0 + 0x58));
    fn_801479C4(lbl_80274F74 + 0x72, 0xFA);
}

void fn_80123CFC(void) {
    M2C_UNK fn_801246FC();
    fn_801246FC();
}

#pragma use_lmw_stmw on
void fn_80124424(void *self) {
    s32 fn_800067B4(void);
    u32 fn_8000CD60(void);
    f32 fn_800233D0(void *, s8, s8, u8);
    extern u8 lbl_802CA518[];
    extern f32 lbl_8036A328;
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A32C;
    u32 rangeX;
    u32 rangeY;
    s32 i;
    s16 *pts;
    f32 scale;
    f32 *pairs;

    rangeX = ((s8)*((u8 *)self + 0x50) + 0x10) << 8;
    rangeY = ((s8)*((u8 *)self + 0x51) + 0x10) << 8;
    {
        s32 t = fn_800067B4();
        u8 flag = *((u8 *)self + 0x4D);
        t = *(u16 *)((u8 *)self + 0x54) * (t & 7);
        pts = (s16 *)((u8 *)*(s16 **)((u8 *)self + 0x5C) + t * 6);
        if (flag != 0) {
            i = 0;
            while (i < *(u16 *)((u8 *)self + 0x54)) {
                pts[0] = (s16)((fn_8000CD60() % rangeX) - 0x800);
                pts[1] = (s16)((fn_8000CD60() % rangeY) - 0x800);
                pts[2] = 0;
                pts = (s16 *)((u8 *)pts + 6);
                i++;
            }
        } else {
            scale = lbl_8036A328;
            i = 0;
            while (i < *(u16 *)((u8 *)self + 0x54)) {
                pts[0] = (s16)((fn_8000CD60() % rangeX) - 0x800);
                pts[1] = (s16)((fn_8000CD60() % rangeY) - 0x800);
                pts[2] = (s16)(scale * fn_800233D0(lbl_802CA518, (s8)(pts[0] >> 8), (s8)(pts[1] >> 8), 0));
                pts = (s16 *)((u8 *)pts + 6);
                i++;
            }
        }
    }

    if (*((u8 *)self + 0x4C) != 0) {
        i = 0;
        scale = lbl_8036A30C;
        rangeX = i;
        rangeY = rangeX;
        while (i < *((u8 *)self + 0x52)) {
            pairs = *(f32 **)((u8 *)self + 0x64);
            if (!(*(f32 *)((u8 *)pairs + rangeX + 4) >= scale)) {
                *(f32 *)((u8 *)pairs + rangeX + 4) = (f32)((s32)rangeY / (s32)*((u8 *)self + 0x52));
                {
                    u32 rnd = fn_8000CD60();
                    pairs = *(f32 **)((u8 *)self + 0x64);
                    *(f32 *)((u8 *)pairs + rangeX) = (f32)(u32)(rnd % 0x168U);
                }
            }
            rangeX += 8;
            rangeY += 0x28;
            i++;
        }
        *((u8 *)self + 0x4C) = 0;
        return;
    }

    if ((fn_800067B4() & 3) == 0) {
        register s32 off;
        register s32 j;
        s32 ctr;
        f32 z;
        j = 0;
        off = j;
        ctr = *((u8 *)self + 0x52);
        z = lbl_8036A30C;
        for (; ctr > 0; ctr--) {
            f32 v;
            pairs = *(f32 **)((u8 *)self + 0x64);
            v = *(f32 *)((u8 *)pairs + off + 4);
            if (!(z <= v)) {
                pairs = (f32 *)((u8 *)pairs + (j << 3));
                pairs[1] = lbl_8036A32C;
                {
                    u32 rnd = fn_8000CD60();
                    pairs = *(f32 **)((u8 *)self + 0x64);
                    *(f32 *)((u8 *)pairs + (j << 3)) = (f32)(u32)(rnd % 0x168U);
                }
                return;
            }
            off += 8;
            j += 1;
        }
    }
}
#pragma use_lmw_stmw reset
void fn_80124E58(void *arg0, f32 *arg1, f32 *arg2) {
    u32 fn_8000CD60(void);
    extern f32 lbl_8036A35C;
    extern f32 lbl_8036A360;
    extern f32 lbl_8036A30C;
    void *list;
    void *node;
    void *prev;
    u32 rnd;
    s16 scale;
    s16 spC, spA, sp8;
    f32 dx, dy, dz;
    f32 px, py, pz;
    f32 ax, ay;

    list = *(void **)((u8 *)arg0 + 0x58);
    node = **(void ***)((u8 *)list + 0x8);
    if (node == NULL) {
        node = NULL;
    } else {
        *(void **)((u8 *)node + 4) = *(void **)((u8 *)list + 0x10);
        *(void **)node = NULL;
        prev = *(void **)((u8 *)list + 0x10);
        if (prev != NULL) {
            *(void **)prev = node;
        }
        if (*(void **)((u8 *)list + 0xC) == NULL) {
            *(void **)((u8 *)list + 0xC) = node;
        }
        *(void **)((u8 *)list + 0x10) = node;
        *(u8 **)((u8 *)list + 0x8) = *(u8 **)((u8 *)list + 0x8) + 4;
        *(s32 *)((u8 *)list + 0x14) = *(s32 *)((u8 *)list + 0x14) + 1;
    }
    if (node == NULL) {
        return;
    }
    rnd = fn_8000CD60();
    rnd = (rnd % 200) + 0xC8;
    scale = (s16)((*(u8 *)((u8 *)arg0 + 0x4D) * rnd) / 100);
    __builtin_mtspr(917, 0x00070007);
    dx = arg2[0] - arg1[0];
    dy = arg2[1] - arg1[1];
    dz = arg2[2] - arg1[2];
    spC = (s16)dx;
    spA = (s16)dy;
    sp8 = (s16)dz;
    spC = (s16)(fn_8000CD60() % (u32)(spC * 10));
    spA = (s16)(fn_8000CD60() % (u32)(spA * 10));
    sp8 = (s16)(fn_8000CD60() % (u32)(sp8 * 10));
    px = lbl_8036A35C * (f32)spC + arg1[0];
    pz = lbl_8036A35C * (f32)sp8 + arg1[2];
    py = lbl_8036A35C * (f32)spA + arg1[1];
    spC = (s16)(fn_8000CD60() % 100);
    sp8 = (s16)(fn_8000CD60() % 100);
    *(f32 *)((u8 *)node + 0x14) = px;
    ax = lbl_8036A360 * (f32)spC;
    *(f32 *)((u8 *)node + 0x18) = pz;
    ay = lbl_8036A360 * (f32)sp8;
    *(f32 *)((u8 *)node + 0x1C) = py;
    __builtin_mtspr(917, 0x08070007);
    *(s16 *)((u8 *)node + 0xE) = (s16)ax;
    *(s16 *)((u8 *)node + 0x10) = (s16)lbl_8036A30C;
    *(s16 *)((u8 *)node + 0x12) = (s16)ay;
    *(s16 *)((u8 *)node + 0xA) = scale;
    *(s16 *)((u8 *)node + 0x8) = 0;
}

#pragma use_lmw_stmw reset

void fn_80125130(void *arg0) {
    void *fn_8000CAF0(void *, void *);
    void *fn_80040844(void);
    void *fn_8006D948(void *);
    void *fn_800C42AC(s32);
    void *fn_800C42D8(s32);
    void fn_80147B9C(void *, s32, s32);
    void fn_8012600C(void *, s32);
    void fn_802031CC(void *, void *, f32);
    void *fn_8022C414(void *, void (*)(void *, s32), void *, s32, s32);
    void DCFlushRange(void *, u32);
    extern u8 lbl_80274F74[];
    extern u8 lbl_80290388[];
    extern f32 lbl_8036A308;
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A364;
    extern f32 lbl_8036A368;
    extern f32 lbl_8036A36C;
    extern f32 lbl_8036A370;
    extern f32 lbl_8036A374;
    extern f32 lbl_8036A378;
    void *arr;
    void *self;
    s32 bytes;
    s32 n;
    void *obj;
    void *tmp;
    s32 i;
    s32 off;
    s32 idx;
    f32 f0;
    f32 f1;

    self = arg0;
    switch (M2C_FIELD(self, u8 *, 0x4C)) {
    case 6:
        f1 = lbl_8036A364;
        M2C_FIELD(self, u8 *, 0x48) = 1;
        f0 = lbl_8036A368;
        M2C_FIELD(self, f32 *, 0x38) = f1;
        M2C_FIELD(self, f32 *, 0x3C) = f0;
        M2C_FIELD(self, f32 *, 0x40) = f1;
        break;
    case 5:
        M2C_FIELD(self, u8 *, 0x48) = 2;
        f1 = lbl_8036A36C;
        f0 = lbl_8036A370;
        M2C_FIELD(self, f32 *, 0x38) = f1;
        M2C_FIELD(self, f32 *, 0x3C) = f0;
        M2C_FIELD(self, f32 *, 0x40) = f1;
        fn_80147B9C(lbl_80274F74 + 0x94, 0x32, 1);
        break;
    case 7:
        M2C_FIELD(self, u8 *, 0x48) = 0x32;
        f0 = lbl_8036A308;
        f1 = lbl_8036A374;
        M2C_FIELD(self, f32 *, 0x38) = f0;
        f0 = lbl_8036A378;
        M2C_FIELD(self, f32 *, 0x3C) = f1;
        M2C_FIELD(self, f32 *, 0x40) = f0;
        tmp = fn_8000CAF0(lbl_80290388, self);
        M2C_FIELD(tmp, u8 *, 0x4C) = 1;
        fn_80147B9C(lbl_80274F74 + 0xA6, 0x32, 1);
        break;
    }

    tmp = fn_80040844();
    M2C_FIELD(self, f32 *, 0x50) = M2C_FIELD(tmp, f32 *, 0x6C);
    fn_802031CC((u8 *)self + 0x38, (u8 *)self + 0x38, M2C_FIELD(self, f32 *, 0x50));
    M2C_FIELD(self, f32 *, 0x34) = lbl_8036A30C;
    M2C_FIELD(self, u8 *, 0x49) = 0xC0;
    M2C_FIELD(self, void **, 0x54) = fn_8006D948(lbl_80274F74 + 0x84);

    obj = fn_800C42D8(0x1C);
    if (obj != NULL) {
        M2C_FIELD(obj, s32 *, 0) = 0;
        M2C_FIELD(obj, s32 *, 4) = 0;
        M2C_FIELD(obj, s32 *, 8) = 0;
        M2C_FIELD(obj, s32 *, 0x14) = 0;
        M2C_FIELD(obj, s32 *, 0xC) = 0;
        M2C_FIELD(obj, s32 *, 0x10) = 0;
    }
    M2C_FIELD(self, void **, 0x58) = obj;

    arr = M2C_FIELD(self, void **, 0x58);
    M2C_FIELD(arr, s32 *, 0x18) = 0x7D0;
    n = M2C_FIELD(arr, s32 *, 0x18);
    bytes = n << 5;
    M2C_FIELD(arr, void **, 0) = fn_8022C414(fn_800C42AC(bytes + 0x10), fn_8012600C, NULL, 0x20, n);
    M2C_FIELD(arr, void **, 4) = fn_800C42AC((M2C_FIELD(arr, s32 *, 0x18) + 1) * 4);
    DCFlushRange(M2C_FIELD(arr, void **, 0), bytes);
    DCFlushRange(M2C_FIELD(arr, void **, 4), (M2C_FIELD(arr, s32 *, 0x18) + 1) * 4);

    i = 0;
    M2C_FIELD(arr, s32 *, 0x14) = i;
    off = i;
    idx = i;
    while (i < M2C_FIELD(arr, s32 *, 0x18)) {
        i += 1;
        *(void **)((u8 *)M2C_FIELD(arr, void **, 4) + idx) =
            (u8 *)M2C_FIELD(arr, void **, 0) + off;
        off += 0x20;
        idx += 4;
    }
    *(s32 *)((u8 *)M2C_FIELD(arr, void **, 4) + (M2C_FIELD(arr, s32 *, 0x18) << 2)) = 0;
    M2C_FIELD(arr, void **, 8) = M2C_FIELD(arr, void **, 4);
    M2C_FIELD(arr, s32 *, 0xC) = 0;
    M2C_FIELD(arr, s32 *, 0x10) = 0;
    M2C_FIELD(self, u8 *, 0x4E) = 1;
    M2C_FIELD(self, u8 *, 0x4D) = 0x64;
}

void fn_80125388(void *arg0) {
    typedef struct Node {
        struct Node *next;   // 0x00
        u8 pad0[0x08];
        u8 unkC;             // 0x0C
        u8 pad1[0x07];
        f32 unk14;           // 0.14
        f32 unk18;           // 0x18
        f32 unk1C;           // 0x1C
    } Node;
    typedef struct ListCtrl {
        u8 pad[0x0C];
        Node *head;          // 0x0C
    } ListCtrl;
    typedef struct Arg0 {
        u8 pad0[0x54];
        s32 unk54;           // 0x54
        ListCtrl *unk58;     // 0x58
    } Arg0;
    extern f32 lbl_8036A30C;
    void fn_8006ECCC(s32, void *, s32);
    void fn_80222C50(void *, s32);
    void fn_8021FBB8(void);
    void fn_8021F4E4(s32, s32);
    void fn_8021FBF0(s32, s32, s32, s32, s32);
    void fn_80220428(s32);
    void fn_802201A8(s32, s32, s32, s32, s32, s32);
    void fn_80222334(s32);
    void fn_80222370(s32, s32, s32, s32, s32, s32, s32);
    void fn_802240C8(s32);
    void fn_80223F2C(s32, s32, s32, s32);
    void fn_802239D0(s32, s32);
    void fn_802245D8(s32, s32, s32, s32);
    void fn_80224684(s32, s32, s32);
    void fn_8022100C(s32);
    s32 fn_80040844(void);
    void *fn_80067FDC(void);
    void fn_80202024(void *, void *, void *);
    void fn_80224D7C(void *, s32);
    void fn_80224E1C(s32);
    void fn_80220FC4(s32, s32, s32);
    void fn_80220F84(s32, s32);
    void fn_80220DEC(s32, s32, s32);
    void fn_80066D00(s32);
    Arg0 *a = (Arg0 *)arg0;
    u8 sp8[0x20];
    u8 sp28[0x30];
    s32 temp_r31;
    f32 temp_f31;
    Node *var_r30;
    f32 vf0;
    f32 vf1;
    f32 vf2;
    u8 uc;
    ListCtrl *lc;

    fn_8006ECCC(a->unk54, sp8, 7);
    fn_80222C50(sp8, 0);
    fn_8021FBB8();
    fn_8021F4E4(9, 1);
    fn_8021F4E4(0xB, 1);
    fn_8021F4E4(0xD, 1);
    fn_8021FBF0(0, 9, 1, 4, 0);
    fn_8021FBF0(0, 0xB, 1, 5, 0);
    fn_8021FBF0(0, 0xD, 1, 4, 0);
    fn_80220428(1);
    fn_802201A8(0, 1, 4, 0x3C, 0, 0x7D);
    fn_80222334(1);
    fn_80222370(4, 0, 1, 1, 0, 0, 2);
    fn_802240C8(1);
    fn_80223F2C(0, 0, 0, 4);
    fn_802239D0(0, 0);
    fn_802245D8(1, 4, 5, 0);
    fn_80224684(1, 3, 0);
    fn_8022100C(2);
    temp_r31 = fn_80040844();
    fn_80202024(fn_80067FDC(), (void *)(u32)(temp_r31 + 0x70), sp28);
    fn_80224D7C(sp28, 0);
    fn_80224E1C(0);
    fn_80220FC4(0, 0, 1);
    fn_80220F84(0x30, 5);
    temp_f31 = lbl_8036A30C;
    var_r30 = NULL;
    goto loop_test;
loop_body:
    fn_80220DEC(0xB8, 0, 1);
    vf2 = var_r30->unk1C;
    vf1 = var_r30->unk18;
    vf0 = var_r30->unk14;
    GXRegs_8036A30C[-0x2000] = vf0;
    GXRegs_8036A30C[-0x2000] = vf1;
    GXRegs_8036A30C[-0x2000] = vf2;
    uc = var_r30->unkC;
    *(volatile u8 *)&GXRegs_8036A30C[-0x2000] = 0xFF;
    *(volatile u8 *)&GXRegs_8036A30C[-0x2000] = 0xFF;
    *(volatile u8 *)&GXRegs_8036A30C[-0x2000] = 0xFF;
    *(volatile u8 *)&GXRegs_8036A30C[-0x2000] = uc;
    GXRegs_8036A30C[-0x2000] = temp_f31;
    GXRegs_8036A30C[-0x2000] = temp_f31;
    goto loop_test;
loop_test:
    lc = a->unk58;
    if (var_r30 == NULL) {
        var_r30 = lc->head;
    } else {
        var_r30 = var_r30->next;
    }
    if (var_r30 != NULL) {
        goto loop_body;
    }
    fn_80220FC4(0, 0, 0);
    fn_80066D00(-1);
}

void fn_801255D4(void *arg0) {
    void fn_8006D8E8(s32);
    void fn_801479C4(u8 *, s32);
    extern u8 lbl_80274F74[];

    if (*(u8 *)((u8 *)arg0 + 0x4C) == 0) {
        fn_801479C4(lbl_80274F74 + 0xBB, 0xFA);
    }
    fn_8006D8E8(*(s32 *)((u8 *)arg0 + 0x6C));
}

void fn_80125624(void *arg0) {
    typedef struct {
        f32 x, y, z;
    } Vec;
    typedef struct {
        u8 pad0[0xE0];
        Vec pos;
    } Cam;
    typedef struct {
        u8 pad0[0x38];
        f32 speedX;
        f32 speedY;
        u8 pad40[0xD];
        u8 unk4D;
        u8 pad4E[2];
        f32 scrollX[2];
        f32 scrollY[2];
        Vec pos;
        s32 unk6C;
    } Obj;
    u8 fn_800AA188(void);
    Cam *fn_80068548(void);
    void fn_8005A1E8(s32, Vec *, Vec *);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(s32, s32, s32);
    void fn_801258E4(void *);
    void fn_80007340(void (*)(void *), void *);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    Obj *obj = arg0;
    Vec delta = {0.0f, 0.0f, 0.0f};
    Vec pos = {0.0f, 0.0f, 0.0f};
    Cam *cam;
    f32 scale;
    s32 i;

    if (obj->unk4D == 0) {
        if (fn_800AA188() == 0) {
            return;
        }
        cam = fn_80068548();
        fn_8005A1E8(0, &cam->pos, &delta);
        fn_8005A1E8(0, &obj->pos, &pos);
        delta.x -= pos.x;
        delta.y -= pos.y;
        obj->pos.x = cam->pos.x;
        obj->pos.y = cam->pos.y;
        obj->pos.z = cam->pos.z;
    }
    scale = 1.0f;
    for (i = 0; i < 2; i++) {
        obj->scrollX[i] += obj->speedX * scale - delta.x;
        obj->scrollY[i] += obj->speedY * scale - delta.y;
        obj->scrollX[i] -= (f32)((s32)(obj->scrollX[i] * 0.0078125f) << 7);
        obj->scrollY[i] -= (f32)((s32)(obj->scrollY[i] * 0.0078125f) << 7);
        scale *= 1.5f;
    }
    fn_8000A258();
    fn_80009D74(0.0f, 0.0f, 800.0f, 1.0f);
    fn_80009F90(obj->unk6C, 6, 0x411);
    fn_8000A248();
    fn_80007898(0xB);
    fn_80007340(fn_801258E4, obj);
    fn_80007884();
}

void fn_80125818(void *arg0) {
    void *fn_80040844();
    s32 fn_8006D948(void *, M2C_UNK *);
    M2C_UNK fn_80147B9C(void *, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_80274F74;
    extern f32 lbl_8036A308;
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A378;
    extern f32 lbl_8036A388;
    extern f32 lbl_8036A38C;
    M2C_FIELD(arg0, s32 *, 0x6C) = fn_8006D948(&lbl_80274F74 + 0x84, &lbl_80274F74);
    M2C_FIELD(arg0, s8 *, 0x49) = 0x40;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_8036A30C;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_8036A30C;
    if ((u8) M2C_FIELD(arg0, u8 *, 0x4C) == 0) {
        fn_80147B9C(&lbl_80274F74 + 0xBB, 0x32, 1);
    }
    if ((u8) M2C_FIELD(fn_80040844(), u8 *, 0x68) == 1) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 1;
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036A388;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036A378;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x4D) = 0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_8036A38C;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_8036A308;
}

void fn_801258E4(void* arg0, void* arg1, void* arg2) {
    void* temp_r5;
    
    if (arg0 == NULL) {
        return;
    }
    
    temp_r5 = arg0;
    if (M2C_FIELD(arg0, u32*, 0x10) != 0) {
        while (1) {
            s32 temp_r4 = M2C_FIELD(temp_r5, u32*, 0x8);
            if (temp_r4 == 0) {
                break;
            }
            temp_r5 = (void*)((u8*)temp_r5 + temp_r4);
            if (arg1 != NULL) {
                fn_80126E18(temp_r5, arg1);  
            }
        }
    }
    fn_80125924(arg0, arg1);
}

void fn_80125AE0(void *arg0) {
    u8 fn_800AA188(void);
    void fn_80059F64(f32, f32, f32, f32);
    f64 fn_80238638(void);
    void *fn_80040844(void);
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A398;
    extern f32 lbl_8036A39C;
    extern f64 lbl_8036A3A0;
    extern f64 lbl_8036A3A8;
    f32 temp_f31;
    f32 a;
    f32 b;
    f32 limit;
    f32 x;
    f64 t;

    if (fn_800AA188() != 0) {
        limit = lbl_8036A398;
        a = *(f32 *)((char *)arg0 + 0x4C);
        b = *(f32 *)((char *)arg0 + 0x34);
        *(f32 *)((char *)arg0 + 0x4C) = a + b;
        a = *(f32 *)((char *)arg0 + 0x4C);
        if (a >= limit) {
            *(f32 *)((char *)arg0 + 0x4C) = a - limit;
        }
        fn_80059F64(lbl_8036A30C, lbl_8036A39C, lbl_8036A398,
                    *(f32 *)((char *)arg0 + 0x4C));
        x = (f32)fn_80238638();
        t = lbl_8036A3A0 + x;
        t = *(f32 *)((char *)arg0 + 0x30) * t;
        temp_f31 = (f32)(t * lbl_8036A3A8);
        *(f32 *)((char *)(*(void **)((char *)fn_80040844() + 0x30)) + 0x48) =
            temp_f31;
    }
}

void fn_80125B94(void *arg0) {
    extern f32 lbl_8036A30C;
    extern f32 lbl_8036A35C;
    extern f32 lbl_8036A3B0;
    *(f32*)((char*)arg0 + 0x4c) = lbl_8036A30C;
    *(f32*)((char*)arg0 + 0x34) = lbl_8036A3B0;
    *(f32*)((char*)arg0 + 0x30) = lbl_8036A35C;
}

s32 fn_80125BB0(void) {
    void *fn_8000C0C0(M2C_UNK *, M2C_UNK *);
    s32 fn_80069D58();
    s32 fn_80069DBC();
    s32 fn_80069E18();
    s32 fn_80069EA8();
    M2C_UNK fn_8006A384(M2C_UNK *);
    M2C_UNK fn_8006ECCC(s32, M2C_UNK *, M2C_UNK);
    M2C_UNK fn_80202024(M2C_UNK *, M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_802026E4(M2C_UNK *, f32 *, s32 *, f32 *, s32, s32, f32, f32, f32, f32);
    M2C_UNK fn_8020293C(M2C_UNK *, f32, f32, f32, f32, f32, f32, f32, f32);
    M2C_UNK fn_802201A8(s32, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80222C50(M2C_UNK *, s32);
    M2C_UNK fn_80223A5C(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AA0(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223AE4(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223B4C(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK fn_80223F2C(s32, s32, s32, M2C_UNK);
    M2C_UNK fn_80224E50(M2C_UNK *, s32, M2C_UNK);
    extern M2C_UNK lbl_80274EE0;
    extern M2C_UNK lbl_80290328;
    extern f32 lbl_8036A378;
    extern f32 lbl_8036A3B4;
    M2C_UNK spF4;
    M2C_UNK spC4;
    M2C_UNK sp94;
    M2C_UNK sp64;
    M2C_UNK sp44;
    s32 sp40;
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    f32 sp18;
    f32 sp14;
    s32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r29;
    void *temp_r3;

    temp_r3 = fn_8000C0C0(&lbl_80290328, &lbl_80274EE0);
    if (temp_r3 == NULL) {
        return 1;
    }
    fn_8006A384(&sp64);
    temp_r28 = fn_80069DBC();
    temp_r29 = fn_80069EA8();
    temp_r27 = fn_80069E18();
    temp_r26 = fn_80069D58();
    temp_f1 = lbl_8036A3B4 + M2C_FIELD(temp_r3, f32 *, 0x4C);
    temp_f0 = lbl_8036A3B4 + M2C_FIELD(temp_r3, f32 *, 0x50);
    sp14 = M2C_FIELD(&lbl_80274EE0, f32 *, 0xC);
    sp18 = M2C_FIELD(&lbl_80274EE0, f32 *, 0x10);
    sp8 = M2C_FIELD(&lbl_80274EE0, f32 *, 0x18);
    sp18 = temp_f0;
    spC = M2C_FIELD(&lbl_80274EE0, f32 *, 0x1C);
    sp8 = temp_f1;
    sp14 = temp_f1;
    spC = temp_f0;
    sp1C = M2C_FIELD(&lbl_80274EE0, s32 *, 0x14);
    sp38 = sp14;
    sp3C = sp18;
    sp40 = M2C_FIELD(&lbl_80274EE0, s32 *, 0x14);
    sp10 = M2C_FIELD(&lbl_80274EE0, s32 *, 0x20);
    sp2C = sp8;
    sp30 = spC;
    sp34 = M2C_FIELD(&lbl_80274EE0, s32 *, 0x20);
    sp20 = M2C_FIELD(&lbl_80274EE0, s32 *, 0x24);
    sp24 = M2C_FIELD(&lbl_80274EE0, s32 *, 0x28);
    sp28 = M2C_FIELD(&lbl_80274EE0, s32 *, 0x2C);
    fn_802026E4(&sp94, &sp2C, &sp20, &sp38, M2C_FIELD(&lbl_80274EE0, s32 *, 0x28), M2C_FIELD(&lbl_80274EE0, s32 *, 0x24), spC, sp8, temp_f1, lbl_8036A3B4);
    temp_f1_2 = -lbl_8036A3B4;
    fn_8020293C(&spC4, temp_f1_2, lbl_8036A3B4, temp_f1_2, lbl_8036A3B4, lbl_8036A378, lbl_8036A378, lbl_8036A378, lbl_8036A378);
    fn_80202024(&sp94, &sp64, &sp94);
    fn_80202024(&spC4, &sp94, &spF4);
    fn_80224E50(&spF4, temp_r26, 0);
    fn_8006ECCC(M2C_FIELD(temp_r3, s32 *, 0x54), &sp44, 5);
    fn_80222C50(&sp44, temp_r27);
    fn_802201A8(temp_r28, 0, 0, temp_r26, 0, 0x7D);
    fn_80223F2C(temp_r29, temp_r28, temp_r27, 4);
    fn_80223A5C(temp_r29, 0xF, 0, 8, 0xF);
    fn_80223AE4(temp_r29, 0, 0, 0, 1, 0);
    fn_80223AA0(temp_r29, 7, 7, 7, 0);
    fn_80223B4C(temp_r29, 1, 0, 0, 1, 0);
    return 1;
}

void fn_80125DD8(void *arg0) {
    u8 fn_800AA188(void);
    void fn_8000C188(void *);

    if (fn_800AA188() != 0) {
        *(u8 *)((char *)arg0 + 0x49) = *(u8 *)((char *)arg0 + 0x49) - 1;
        if (*(u8 *)((char *)arg0 + 0x49) == 0) {
            *(u8 *)((char *)arg0 + 0x49) = 0;
            fn_8000C188(arg0);
        }
        *(f32 *)((char *)arg0 + 0x4C) =
            (*(f32 *)((char *)arg0 + 0x38) * *(f32 *)((char *)arg0 + 0x34))
            + *(f32 *)((char *)arg0 + 0x4C);
        *(f32 *)((char *)arg0 + 0x50) =
            (*(f32 *)((char *)arg0 + 0x3C) * *(f32 *)((char *)arg0 + 0x34))
            + *(f32 *)((char *)arg0 + 0x50);
    }
}

void fn_80125E5C(void *arg0) {
    u8 fn_800AA188();
    if (fn_800AA188() != 0) {
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x4C));
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3C) * M2C_FIELD(arg0, f32 *, 0x34)) + M2C_FIELD(arg0, f32 *, 0x50));
    }
}

void fn_80125EB8(void *arg0) {
    u8 fn_800AA188(void);
    void fn_8000C188(void *);

    if (fn_800AA188() != 0) {
        *(u8 *)((char *)arg0 + 0x49) = *(u8 *)((char *)arg0 + 0x49) + 1;
        if (*(u8 *)((char *)arg0 + 0x49) >= 0x80U) {
            *(u8 *)((char *)arg0 + 0x49) = 0x80;
            fn_8000C188(arg0);
        }
        *(f32 *)((char *)arg0 + 0x4C) =
            (*(f32 *)((char *)arg0 + 0x38) * *(f32 *)((char *)arg0 + 0x34))
            + *(f32 *)((char *)arg0 + 0x4C);
        *(f32 *)((char *)arg0 + 0x50) =
            (*(f32 *)((char *)arg0 + 0x3C) * *(f32 *)((char *)arg0 + 0x34))
            + *(f32 *)((char *)arg0 + 0x50);
    }
}

void fn_80125FC8(void *arg0) {
    s32 r = fn_80040844();
    fn_800462FC(r, 0, fn_80125BB0);
    fn_8006D8E8(*(s32 *)((u8 *)arg0 + 0x54));
}

void fn_8012600C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void fn_8012601C(void *arg0) {
    extern s32 lbl_80367110;
    fn_80088F34();
    lbl_80367110 = ((s32*)arg0)[0x1B];
}

void fn_80126050(void *arg0) {
    M2C_UNK fn_8000C070(void *, u8);
    extern u8 lbl_80367A6C;
    fn_8000C070(arg0, lbl_80367A6C);
}

void fn_80126074(void *arg0) {
    extern s32 lbl_80367110;
    extern u8 lbl_80367A6C;
    extern u8 lbl_8032FE48[];
    extern u8 lbl_802905F8[];
    
    ((s32*)arg0)[0x1B] = lbl_80367110;
    fn_80088F34();
    lbl_80367A6C = 0x63;
    fn_80024398(lbl_8032FE48, arg0, 0);
    fn_8000CAF0(lbl_802905F8, arg0);
}

void fn_801260D4(void) {
    extern s32 lbl_80367110;
    lbl_80367110 &= 0xFFFFFF7F;
}

extern u8 lbl_80290480[16];
void fn_80126184(void) {
    fn_8000BF00(&lbl_80290480);
}

void fn_801261AC(s32 arg0) {
    s32 fn_8000C0C0(void *);
    M2C_UNK fn_8014C718(void *, s32);
    M2C_UNK fn_8019DB28();
    M2C_UNK fn_80234450(s32, s32);
    extern u8 lbl_80290480[16];
    extern u8 lbl_80330708[1400];

    fn_8019DB28();
    fn_80234450(arg0 + 0x30, fn_8000C0C0(lbl_80290480) + 0x30);
    fn_8014C718(lbl_80330708, arg0);
}

void fn_80126204(u16 *arg0) {
    *arg0 &= 0xEDFF;
}

void fn_801262A8(s32 arg0) {
    void fn_8000BF00(void *);
    void fn_8014C718(void *, s32);
    void fn_8019DB28(void);
    extern u8 lbl_80290480[16];
    extern u8 lbl_80330708[1400];

    fn_8019DB28();
    fn_8000BF00(lbl_80290480);
    fn_8014C718(lbl_80330708, arg0);
}

u8 fn_80126830(void) {
    extern u8 lbl_80330708[];
    u8 temp = lbl_80330708[0x9D];
    temp = (temp >> 1) & 1;
    temp = (temp == 0);
    return temp;
}

void fn_8012684C(s8 arg0) {
    extern u8 lbl_80330708[];
    lbl_80330708[0xA5] = arg0;
    fn_80199818(&lbl_80330708[0x9C], &lbl_80330708);
}

u8 fn_8012687C(void) {
    extern u8 lbl_80330708[];
    return lbl_80330708[0xA5];
}

void fn_8012688C(s8 arg0) {
    extern u16 lbl_80330708;
    *(u8*)(((char*)&lbl_80330708) + 0xA8) = arg0;
}

void fn_8012689C(s32 arg0) {
    extern u8 lbl_80330708[1400];
    u8 *ptr = &lbl_80330708[0x9F];
    if (arg0 == 1) {
        *ptr |= 0x40;
    } else {
        *ptr &= ~0x40;
    }
}

void fn_801268D4(s32 arg0) {
    extern u8 lbl_80330708[1400];
    u8 *ptr = &lbl_80330708[0x9C];
    if (arg0 == 1) {
        *ptr |= 0x4;
    } else {
        *ptr &= ~0x4;
    }
}

void fn_8012690C(s32 arg0) {
    extern u16 lbl_80330708;
    u8 *temp = (u8 *) &lbl_80330708;
    if (arg0 == 1) {
        *temp |= 2;
    } else {
        *temp &= ~2;
    }
}

void fn_80126944(void) {
    struct Work {
        u8 pad0[0x9C];
        u8 a0 : 2;
        u8 a1 : 1;
        u8 a2 : 2;
        u8 a3 : 1;
        u8 a4 : 1;
        u8 a5 : 1;
        u8 b0 : 2;
        u8 b1 : 1;
        u8 b2 : 1;
        u8 b3 : 2;
        u8 b4 : 1;
        u8 b5 : 1;
        u8 c0 : 1;
        u8 c1 : 1;
        u8 c2 : 1;
        u8 c3 : 1;
        u8 c4 : 3;
        u8 c5 : 1;
        u8 pad9F;
        u8 unkA0;
        u8 padA1[5];
        u8 unkA6;
        u8 padA7;
        u8 unkA8;
        u8 unkA9;
        u8 unkAA;
        u8 padAB;
        s32 unkAC;
        s32 unkB0;
    };
    extern struct Work lbl_80330708;
    u8 one = 1;

    lbl_80330708.a0 = one;
    lbl_80330708.a1 = 0;
    lbl_80330708.a2 = one;
    lbl_80330708.a3 = 0;
    lbl_80330708.a4 = 0;
    lbl_80330708.a5 = 0;
    lbl_80330708.b0 = 0;
    lbl_80330708.b1 = 0;
    lbl_80330708.b2 = 0;
    lbl_80330708.b3 = 2;
    lbl_80330708.b4 = 0;
    lbl_80330708.b5 = 0;
    lbl_80330708.c0 = 0;
    lbl_80330708.c1 = 0;
    lbl_80330708.c2 = one;
    lbl_80330708.c3 = one;
    lbl_80330708.c5 = 0;
    lbl_80330708.unkA0 = 0x14;
    lbl_80330708.unkA8 = 0;
    lbl_80330708.unkAC = 0;
    lbl_80330708.unkA9 = 0;
    lbl_80330708.unkAA = 0;
    lbl_80330708.unkB0 = 0;
    lbl_80330708.unkA6 = one;
}

extern u16 lbl_80290564[];
s32 fn_80126A60(void)
{
    s32 fn_800C0658(void);
    void fn_8000CAA0(u16 *, s32);
    void fn_80013864(void);
    extern u16 lbl_80290564[];

    fn_8000CAA0(lbl_80290564, fn_800C0658());
    fn_80013864();
    return 1;
}

void fn_80126A98(s32 arg0) {
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80275048[];
    void fn_8011D79C(void *);
    void fn_8011D650(void *);
    void fn_8000C188(s32);
    struct {
        u8 hi : 6;
        u8 mid : 1;
        u8 lo : 1;
    } *bf;

    switch ((s32)lbl_802EF4C8[8]) {
    case 0x81:
        bf = (void *)&lbl_80330708[0x9D];
        bf->mid = 0;
        fn_8011D79C(lbl_80275048 + 0x42A);
        break;
    case 0x80:
        bf = (void *)&lbl_80330708[0x9D];
        bf->mid = 1;
        fn_8011D650(lbl_80330708);
        break;
    }
    fn_8000C188(arg0);
}

void fn_80126C44(u16 *arg0, u16 arg1) {
    *arg0 = (*arg0 & ~0x130) | (arg1 & 0x130);
}

void fn_80126C54(u16 *arg0) {
    *arg0 = (*arg0 & ~0x130) | 0xD0;
}

s32 fn_80126C90(void) {
    M2C_UNK fn_8016969C();
    fn_8016969C();
    return 1;
}

s32 fn_80126CB4(void) {
    extern u16 lbl_80275048[103];
    fn_8000BCA4((u16*)((u8*)&lbl_80275048 + 0x467));
    fn_80169804();
    return 1;
}

s32 fn_80126CE8(void) {
    M2C_UNK fn_8011AC44();
    fn_8011AC44();
    return 1;
}

s32 fn_80126D0C(void) {
    extern u16 lbl_80275048[103];
    fn_8000BCA4((u16*)((u8*)&lbl_80275048 + 0x467));
    fn_8011AC78();
    return 1;
}

s32 fn_80126D40(u8 arg0) {
    extern u16 lbl_80330708[];
    u16* ptr = (u16*)((u32)lbl_80330708 + 0x84);
    fn_80105CEC(ptr, arg0);
    return 1;
}

s32 fn_80126D78(u8 arg0) {
    extern u16 lbl_80330708[];
    u16* ptr = (u16*)((u32)lbl_80330708 + 0x84);
    fn_80105D4C(ptr, arg0);
    return 1;
}

s32 fn_80126DB0(u8 arg0) {
    extern u16 lbl_80330708[];
    u16* ptr = (u16*)((u32)lbl_80330708 + 0x74);
    fn_80105CEC(ptr, arg0);
    return 1;
}

s32 fn_80126DE8(u8 arg0) {
    extern u16 lbl_80330708[];
    u16* ptr = (u16*)((u32)lbl_80330708 + 0x74);
    fn_80105D4C(ptr, arg0);
    return 1;
}

s32 fn_80126E20(void) {
    M2C_UNK fn_8000CAF0(M2C_UNK *, M2C_UNK);
    extern M2C_UNK lbl_80290550;
    fn_8000CAF0(&lbl_80290550, 3);
    return 1;
}

extern u16 lbl_8029053C[];
s32 fn_80126E50(void) {
    fn_8000CAF0(lbl_8029053C, 3);
    return 1;
}

extern u16 lbl_80290528[];
s32 fn_80126E80(void) {
    fn_8000CAF0(lbl_80290528, 3);
    return 1;
}

s32 fn_80126EB0(s32 arg0, s32 arg1) {
    M2C_UNK fn_80013E24(s32);
    s8 fn_8005BA00();
    M2C_UNK fn_8005BA08(s8);
    M2C_UNK fn_8005C4C4(s32, M2C_UNK);
    s8 fn_800C4740();
    s8 temp_r31;

    temp_r31 = fn_8005BA00();
    fn_8005BA08(fn_800C4740());
    fn_80013E24(arg0);
    fn_8005C4C4(arg0, 4);
    fn_8003FCCC(arg1);
    fn_8005C4C4(arg1, 4);
    fn_8005BA08(temp_r31);
    return 1;
}

s32 fn_80126F34(void) {
    M2C_UNK fn_8005C7C8();
    fn_8005C7C8();
    return 1;
}

s32 fn_80126F58(void) {
    M2C_UNK fn_8003FCCC();
    fn_8003FCCC();
    return 1;
}

s32 fn_80126F7C(void) {
    M2C_UNK fn_8011D5EC();
    fn_8011D5EC();
    return 1;
}

s32 fn_80126FA0(s32 arg0) {
    u32 fn_8000BCA4(void *, M2C_UNK *);
    M2C_UNK fn_8011D87C(s32);
    M2C_UNK fn_8011D908(s32, M2C_UNK);
    extern M2C_UNK lbl_80275048;
    if (fn_8000BCA4(&lbl_80275048 + 0x472, &lbl_80275048) != 0U) {
        fn_8011D87C(arg0);
        return 1;
    }
    fn_8011D908(arg0, 0);
    return 1;
}

s32 fn_80127000(void *arg0) {
    void fn_8008D6D8(void *, s32);
    fn_8008D6D8(arg0, 0);
    return 1;
}

s32 fn_80127028(void) {
    void fn_8000BE54(void *);
    extern u8 lbl_80290510[];
    fn_8000BE54(lbl_80290510);
    return 0;
}

s32 fn_80127054(void) {
    extern u16 lbl_80290510[];
    fn_8000CAF0(lbl_80290510, 4);
    return 0;
}

void fn_80127084(void) {
    M2C_UNK fn_800F1BFC();
    fn_800F1BFC();
}

void fn_80127150(void *arg0) {
    extern void *lbl_80367A68;
    if (((u8) M2C_FIELD(arg0, u8 *, 0x2D) == 0) && (M2C_FIELD(arg0, u8 *, 0x2C) & 2)) {
        lbl_80367A68 = arg0;
    }
}

void fn_80127594(void *arg0) {
    M2C_UNK fn_80109C1C(s32, M2C_UNK);
    fn_80109C1C(M2C_FIELD(arg0, s32 *, 0x30), 5);
}

s32 fn_801275BC(s32 arg0) {
    void *fn_8000CAF0(void *, s32);
    extern u8 lbl_802904C0[32];
    extern void *lbl_80367240;
    void *temp_r3;

    temp_r3 = fn_8000CAF0(lbl_802904C0, 2);
    *(s32 *)((u8 *)temp_r3 + 0x30) = arg0;
    *(u32 *)((u8 *)temp_r3 + 0x34) = 0;
    *(u8 *)((u8 *)temp_r3 + 0x38) = 0x10;
    *(u8 *)((u8 *)temp_r3 + 0x39) = 1;

    *(u32 *)((u8 *)lbl_80367240 + 0x8) = 0;
    *(u32 *)((u8 *)lbl_80367240 + 0x4) = 0;
    *(u32 *)((u8 *)lbl_80367240 + 0xc) = 0;
    *(u32 *)((u8 *)lbl_80367240 + 0x10) = 0;

    *(u8 *)(*(u8 **)lbl_80367240 + 2) = 0;
    *(u8 *)(*(u8 **)lbl_80367240 + 3) = 0;
    *(u8 *)(*(u8 **)lbl_80367240 + 4) = 0;
    *(u8 *)(*(u8 **)lbl_80367240 + 5) = 0;
    *(u8 *)(*(u8 **)lbl_80367240 + 6) = 0;
    *(u8 *)(*(u8 **)lbl_80367240 + 7) = 0;
    return 1;
}

void fn_80127700(void* arg0, s32 arg1) {
    s32 temp_r3;
    SomeStruct* temp_r30;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r30 = (SomeStruct*)arg0;
    temp_r3 = arg1;
    if (temp_r3 < 0) {
        temp_r3 = 0;
    }
    if (temp_r3 >= 0x100) {
        temp_r3 = 0xFF;
    }
    temp_r4 = temp_r3 * 0x20;
    temp_r5 = temp_r4 >> 8;
    temp_r6 = temp_r5 + 0x40;
    
    if (temp_r6 < 0) {
        temp_r6 = 0;
    }
    if (temp_r6 >= 0xFF) {
        temp_r6 = 0xFF;
    }

    temp_r30->field_0x84 = temp_r6;
}

s32 fn_801278EC(void) {
    void fn_8000BF00(void *);
    extern u8 lbl_802904AC[];
    fn_8000BF00(lbl_802904AC);
    return 1;
}

void fn_80127918(u8 *arg0) {
    s32 r3;
    s32 var_r3 = 0;

    if ((s32)arg0 < 4) {
        do {
            M2C_FIELD(arg0, u8 *, 0x47) = (u8)(M2C_FIELD(arg0, u8 *, 0x47) + 1);
            r3 = (s32)*arg0;
            if ((r3 < 0) || (r3 >= 19)) {
                var_r3 = 1;
            }
            arg0 += 0x10;
        } while (var_r3 == 0);
    }
}

s32 fn_801279D4(void) {
    void fn_8014D55C(void *);
    extern u8 lbl_80330708[];
    fn_8014D55C(lbl_80330708);
    return 1;
}

void fn_80127AC4(void) {
    extern u16 lbl_80275048[];

    fn_8000BD98((u8 *)lbl_80275048 + 0x472);
    fn_8000BD98((u8 *)lbl_80275048 + 0x50c);
    fn_8000BD98((u8 *)lbl_80275048 + 0xe0);
    fn_8000BD98((u8 *)lbl_80275048 + 0x467);
    fn_8000BD98((u8 *)lbl_80275048 + 0x15b);
    fn_8000BD98((u8 *)lbl_80275048 + 0x513);
    fn_8008D988();
    fn_8004A1F0();
    fn_80091858();
    fn_800162B8();
}

u8 fn_80127B50(s32 arg0) {
    void *fn_8000C0C0(void *);
    s32 fn_802342B8(s32, s32);
    s32 temp_r3;

    temp_r3 = (s32)fn_8000C0C0(lbl_80290480);
    if (temp_r3 == 0) {
        return 0U;
    }
    return (u8)(fn_802342B8(arg0, temp_r3 + 0x30) == 0);
}

s32 fn_80127BA8(s32 arg0, s32 arg1) {
    s32 var_r3;
    s32 var_r4;
    s32 temp_r5;
    s32 temp_r6;

    if (arg0 != 0) {
        var_r3 = 0;
        var_r4 = 0;
        do {
            temp_r5 = arg1 + var_r4;
            temp_r6 = arg0 + var_r4;
            if (temp_r5 != temp_r6) {
                return 0;
            }
            ++var_r4;
        } while (var_r4 < arg0);
    }
    return 1;
}

void fn_80127C48(void) {
    fn_8000C0C0(&lbl_80290480);
}

void fn_80127C70(void) {

}

void fn_80127C74(void) {

}

void fn_80127C78(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x58) != 0) {
        M2C_FIELD(arg0, u8 *, 0x58) = 0U;
        fn_80013778(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s32 *, 0x50));
    }
    fn_800138BC(M2C_FIELD(arg0, s32 *, 0x54));
    if (fn_800142B8() != 6) {
        fn_8000C188(arg0);
    }
}
extern u32 lbl_80367110;
#include "common.h"

extern f32 lbl_8036A278;
extern f32 lbl_8036A27C;
extern f32 lbl_8036A280;
extern f32 lbl_8036A284;
extern f32 lbl_8036A288;
extern f32 lbl_8036A28C;
extern f32 lbl_8036A290;
extern f32 lbl_8036A294;
extern f32 lbl_8036A298;
extern f64 lbl_8036A2A0;

extern s32 *fn_8018D900(s32);
extern void fn_80007124(void *);
extern void fn_80007668(s32 *);
extern void fn_800076AC(s32, s32, s32, s32);
extern void fn_80007790(f32, f32, f32, f32);
extern void fn_80007858(f32, f32);
extern void fn_80007884(void);
extern void fn_80007898(s32);
extern void fn_80009B8C(u8);
extern void fn_80009B98(void);
extern void fn_80009BC0(void *, s32);
extern void fn_80009D74(f32, f32, f32, f32);
extern void fn_8000A174(s32, s32);
extern void fn_8000A248(void);
extern void fn_8000A258(void);
extern void fn_80057020(u32);
extern void fn_80057860(s32);
extern s32 fn_80231D94(void *, void *, s32);
extern s32 fn_80234200(void *, s32);

void fn_80121D30(void);
#include "common.h"
extern f32 lbl_8036A30C;
extern f32 lbl_8036A35C;
extern f32 lbl_8036A3B8;
extern s32 lbl_80274F68[2];
extern u8 lbl_8036728A;
extern void* jumptable_80290434[];
extern f32 lbl_8036A308;
extern f32 lbl_8036A30C;
extern void *lbl_80274F74;
extern void *lbl_80367A68;
#include "global.h"
#include "unit.h"

extern u32* gUnitStructs; // lbl_80367240
extern u8* gSomeGlobal;
