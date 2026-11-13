/* Functions from 0x8002887C to 0x80033080, found by decomp-toolkit. */
#include "common.h"

void fn_8002F6E8(void *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4);

static inline void *map_find_xy(s32 *arg0, s8 arg1, s8 arg2) {
    s32 *p;
    s32 i;
    s32 n;

    n = *arg0;
    p = arg0;
    for (i = 0; i < n; p = (s32 *)((char *)p + 0x14), i++) {
        if (arg1 == *(s8 *)((char *)p + 8) && arg2 == *(s8 *)((char *)p + 9)) {
            return (void *)((char *)arg0 + i * 0x14 + 8);
        }
    }
    return NULL;
}

static inline u8 *map_first(s32 *m) {
    s32 c;
    u8 *e;

    c = *m;
    e = (u8 *)m + 8;
    if (c <= 0) {
        e = (u8 *)0;
    }
    return e;
}

void fn_8002887C(void) {
    s32 fn_8003A398(void *);
    M2C_UNK fn_8003B69C(void *);
    M2C_UNK fn_800AA4F8();
    M2C_UNK fn_800F0C30(u8, u8, s32);
    void *fn_800AA794();
    u8 temp_r31;
    u8 temp_r30;
    void *temp_r29;

    temp_r29 = fn_800AA794();
    fn_800AA4F8();
    temp_r31 = M2C_FIELD(temp_r29, u8 *, 0x19F);
    temp_r30 = M2C_FIELD(temp_r29, u8 *, 0x19E);
    fn_800F0C30(temp_r30, temp_r31, fn_8003A398(temp_r29));
    fn_8003B69C(temp_r29);
}

#pragma global_optimizer off
void fn_800288E4(void) {
    s8 fn_80146C94(void *);
    void fn_80147EBC(s32);
    void fn_801481CC(void *, s32);
    void fn_8014876C(void *, s32, s32);
    void fn_80146AF0(void);
    extern u8 lbl_80269070[];
    extern u16 lbl_8032FF08[];
    if (fn_80146C94((u8 *)lbl_80269070 + 0xE6) != -1) {
        fn_80147EBC(0x3E8);
        fn_8014876C(lbl_8032FF08, 0x64, 0x3E8);
        fn_801481CC((u8 *)lbl_80269070 + 0xE6, 0x190);
        fn_80146AF0();
    }
}
#pragma global_optimizer on
void fn_80028950(void) {
    void fn_8014CBD8(void *, f32, f32);
    void fn_80183A90(void *);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    void *temp_r31;

    temp_r31 = *(void **)lbl_802EF4C8;
    fn_80183A90(temp_r31);
    fn_8014CBD8(lbl_80330708, M2C_FIELD(temp_r31, s8 *, 0x19E), M2C_FIELD(temp_r31, s8 *, 0x19F));
}

void fn_800289D0(void *arg0) {
    extern u8 lbl_802EF4C8[];
    
    u8* ptr = &lbl_802EF4C8[0];
    u8 val = *(u8 *)(ptr + 8);

    if (val < 0x1B) {
        switch (val) {
            case 0:
                if ((u8) *(ptr + 0x16) == 0) {
                    s32 temp_r31 = *(s32*)ptr;
                    fn_8002807C(ptr);
                    fn_800AA4F8(temp_r31);
                    fn_8000C60C(0x1C); // arg0, not 0
                    return;
                }
                break;
            case 7:
                *(u8 *)(ptr + 0x16) = (u8) (*(u8 *)(ptr + 0x16) | 1);
                break;
            default:
                break;
        }
    } else {
        switch (val) {
            case 35:
                fn_8000C070(0x09, 0); // arg0, not 6
                return;
            case 40:
            case 6:
                *(u8 *)(ptr + 0x16) = (u8) (*(u8 *)(ptr + 0x16) | 2);
                break;
            default:
                *(u8 *)(ptr + 0x16) = (u8) (*(u8 *)(ptr + 0x16) | 4);
                break;
        }
    }

    fn_800271C8(ptr, 0x1C); // arg0, not 'arg0'
}

void fn_80028B4C(s32 arg0) {
    void fn_8018DC18(void);
    void fn_8000C60C(s32);
    extern u8 lbl_802EF4C8[];

    if (lbl_802EF4C8[8] == 0x35) {
        fn_8018DC18();
        fn_8000C60C(arg0);
    }
}

void fn_80028B94(void *arg0) {
    void fn_8000C070(void *, s32);
    u8 fn_800281F4(void *);
    void fn_800281D8(void *);
    void fn_800AA4F8(void *);
    void fn_800F0C30(u8, u8, s32);
    extern u8 lbl_802EF4C8[];
    u8 *ctx;
    s32 mode;
    void *unit;

    ctx = lbl_802EF4C8;
    mode = ctx[8];
    switch (mode) {
    case 7:
        if (*(u8 *)((u8 *)*(void **)((u8 *)*(void **)ctx + 0x190) + 8) != 0) {
            ctx[8] = 1;
            break;
        }
    case 6:
    case 0x1B:
    case 0x1C:
    case 0x28:
        fn_8000C070(arg0, 6);
        return;
    }

    if ((u8)fn_800281F4(lbl_802EF4C8) != 0) {
        fn_800281D8(lbl_802EF4C8);
        unit = *(void **)lbl_802EF4C8;
        fn_800AA4F8(unit);
        fn_800F0C30(
            ((u8 *)unit)[0x19E],
            ((u8 *)unit)[0x19F],
            (s8)lbl_802EF4C8[0x11]
        );
        fn_8000C070(arg0, 3);
    }
}

void fn_80028C90(s32 arg0) {
    void fn_8000C60C(s32);
    u32 fn_800AA5F0(s32);
    void fn_8018DC18(void);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    void *ctx;
    u32 bit;

    ctx = *(void **)lbl_802EF4C8;
    *(u32 *)((u8 *)ctx + 0x1A0) |= 1;
    bit = (lbl_80330708[0x9E] >> 5) & 1;
    if (bit != 1) {
        if (fn_800AA5F0(0) == 0) {
            fn_8018DC18();
            fn_8000C60C(arg0);
        }
    }
}

void fn_80028D04(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_80027038(void *);
    void fn_80027F98(void *, s32);
    void fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    s32 val;

    val = lbl_802EF4C8[8];
    if (val < 0x34) {
        if (val >= 0x32) {
            fn_8000C070(arg0, 6);
            return;
        }
        goto common;
    }
common:
    fn_80027038(lbl_802EF4C8);
    fn_80027F98(lbl_802EF4C8, 1);
    fn_8014CBD8(lbl_80330708, (f32)(s8)lbl_802EF4C8[0xD], (f32)(s8)lbl_802EF4C8[0xE]);
}

void fn_80028DBC(s32 arg0) {
    void fn_800271C8(void *, s32);
    void fn_8002807C(void *);
    s32 fn_800AA4F8(s32);

    extern u8 lbl_802EF4C8[];
    u8 *ptr = &lbl_802EF4C8[0];
    u8 val = ptr[8];
    
    if (val < 0x1B) {
        switch (val) {
            case 0:
                if ((u8) ptr[0x16] == 0) {
                    s32 temp_r31 = *(s32*)ptr;
                    fn_8002807C(ptr);
                    fn_800AA4F8(temp_r31);
                    fn_8000C070(arg0, 3);
                    return;
                }
                break;
            case 7:
                ptr[0x16] = (u8) (ptr[0x16] | 1);
                break;
            default:
                break;
        }
    } else {
        switch (val) {
            case 35:
                fn_8000C070(6);
                return;
            case 40:
            case 6:
                ptr[0x16] = (u8) (ptr[0x16] | 2);
                break;
            default:
                ptr[0x16] = (u8) (ptr[0x16] | 4);
                break;
        }
    }

    fn_800271C8(ptr, arg0);
}

void fn_80028EC8(s32 arg0) {
    void fn_801475FC(void *, s32);
    void fn_800725F8(s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80269070[];
    u8 temp_r0;

    temp_r0 = lbl_802EF4C8[8];
    if (temp_r0 != 0x24 && temp_r0 != 0x2D) {
        fn_801475FC(lbl_80269070 + 0xF0, 0x64);
        fn_800725F8(arg0);
    }
}

void fn_80028F28(void) {
    void fn_800280C8(void *, s32, s32);
    void fn_8014CBD8(void *, f32, f32);
    extern f32 lbl_80330708[];
    extern u8 lbl_802EF4C8[];
    f32 *base;

    base = lbl_80330708;
    fn_800280C8(lbl_802EF4C8, (s32)base[0x524 / 4], (s32)base[0x528 / 4]);
    fn_8014CBD8(lbl_80330708, (f32)(s8)(s32)base[0x524 / 4], (f32)(s8)(s32)base[0x528 / 4]);
}

void fn_800291D8(void) {
    // Empty implementation for testing compilation only
}

void fn_800294E8(void) {
    void *fn_800AA794(void);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];

    if (fn_800AA794() != NULL) {
        lbl_80330708[0x51D] = 0xB;
    } else {
        lbl_80330708[0x51D] = 9;
    }
    if ((s8)lbl_802EF4C8[0x12] != 0) {
        switch (lbl_80330708[0x51D]) {
        case 9:
            lbl_80330708[0x51D] = 0xC;
            break;
        case 10:
            lbl_80330708[0x51D] = 0xD;
            break;
        case 11:
            lbl_80330708[0x51D] = 0xE;
            break;
        }
    }
}

void fn_80029730(void) {
    void fn_800F214C(void);
    void fn_800F20E0(void);
    void fn_800F0BFC(s32, s32);
    void fn_800F0BC8(void);
    extern u8 lbl_80330708[];

    fn_800F214C();
    fn_800F20E0();
    fn_800F0BFC((s32)*(f32 *)(lbl_80330708 + 0x524), (s32)*(f32 *)(lbl_80330708 + 0x528));
    fn_800F0BC8();
}

void fn_80029784(void) {
    u8 fn_800AA188();
    M2C_UNK fn_800F214C();
    extern s32 lbl_80367110;
    if ((fn_800AA188() != 0) && !(lbl_80367110 & 0x80)) {
        fn_800F214C();
        fn_800F20E0();
    }
}

void *fn_800297C0(void *arg0, s16 arg1) {
    extern u8 lbl_80284C98[];
    extern u8 lbl_802842A4[];
    s32 temp_r30;

    if (arg0 != NULL) {
        *(void **)((char *)arg0 + 0x10) = lbl_80284C98;
        if (arg0 != NULL) {
            *(void **)((char *)arg0 + 0x10) = lbl_802842A4;
            if (*(u8 *)((char *)arg0 + 0xC) != 0) {
                fn_800C4588(*(s32 *)((char *)arg0));
                *(s32 *)((char *)arg0) = 0;
                *(u8 *)((char *)arg0 + 0xC) = 0;
            }
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

s32 fn_80029848(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0);
}

#pragma cplusplus on
extern "C" {
void fn_80029858(s8 x, s8 y) {
    void fn_8002F6E8(void *, s8, s8, u8, s32);
    void fn_8002F728(void *);
    extern u8 lbl_80284E10[];
    extern u8 lbl_80284E20[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    struct Visitor {
        virtual void v0(s8, s8) = 0;
        virtual void visit(s8, s8) = 0;
    };
    struct {
        void *vtbl;
    } obj;
    u8 id;

    obj.vtbl = lbl_80284E20;
    obj.vtbl = lbl_80284E10;
    fn_8002F728(lbl_802EF4E0);
    id = lbl_802CA518[x + (y << 6) + 0xD];
    if (id != 0) {
        fn_8002F6E8(lbl_802EF4E0, x, y, id, 1);
    }
    if (y - 1 >= 0) {
        ((Visitor *)&obj)->visit(x, y - 1);
    }
    if (x + 1 < *(s32 *)lbl_802CA518) {
        ((Visitor *)&obj)->visit(x + 1, y);
    }
    if (y + 1 < *(s32 *)(lbl_802CA518 + 4)) {
        ((Visitor *)&obj)->visit(x, y + 1);
    }
    if (x - 1 >= 0) {
        ((Visitor *)&obj)->visit(x - 1, y);
    }
}

void fn_800299B8(void *arg0) {
    void fn_8002F728(void *);
    extern u8 lbl_80284E20[];
    extern u8 lbl_80284E00[];
    extern u8 lbl_80284DF0[];
    extern u8 lbl_80284DE0[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    struct Visitor {
        virtual void apply(void *unit) = 0;
    };
    struct {
        void *vtbl;
        void *arg;
    } obj;
    void *unit;
    u8 id;
    s8 x;
    s8 y;
    u16 *flags;
    unsigned yOff;
    u16 f;

    obj.vtbl = lbl_80284E20;
    obj.vtbl = lbl_80284E00;
    obj.vtbl = lbl_80284DF0;
    obj.vtbl = lbl_80284DE0;
    obj.arg = arg0;
    fn_8002F728(lbl_802EF4E0);
    x = (s8)*((u8 *)obj.arg + 0x19E);
    y = (s8)*((u8 *)obj.arg + 0x19F);
    yOff = y << 6;
    flags = (u16 *)(lbl_802CA518 + ((x + (s32)yOff) << 1));
    f = *(u16 *)((u8 *)flags + (unsigned)0x408E);
    flags = (u16 *)((u8 *)flags + 0x408E);
    if ((f & 8) != 0) {
        id = lbl_802CA518[x + ((s8)(y - 1) << 6) + 0xD];
        if (id != 0) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if ((*flags & 2) != 0) {
        id = lbl_802CA518[(s8)(x + 1) + (s32)yOff + 0xD];
        if (id != 0) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit != 0) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if ((*flags & 4) != 0) {
        id = lbl_802CA518[x + ((s8)(y + 1) << 6) + 0xD];
        if (id != 0) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if ((*flags & 1) != 0) {
        id = lbl_802CA518[(s8)(x - 1) + (s32)yOff + 0xD];
        if (id != 0) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit != 0) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
}

#pragma cplusplus on
void fn_80029C08(void *arg0) {
    void fn_8002F728(void *);
    extern u8 lbl_80284E20[];
    extern u8 lbl_80284E00[];
    extern u8 lbl_80284DF0[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802CA518[];
    struct Visitor {
        virtual void apply(void *unit) = 0;
    };
    struct {
        void *vtbl;
        void *arg;
    } obj;
    register void *unit;
    u8 id;
    s32 x;
    s8 y;
    u16 *flags;
    register unsigned yOff;
    u8 t;
    u16 f;

    obj.vtbl = lbl_80284E20;
    obj.vtbl = lbl_80284E00;
    obj.arg = arg0;
    obj.vtbl = lbl_80284DF0;
    fn_8002F728(lbl_802EF4E0);
    t = *((u8 *)obj.arg + 0x19F);
    y = (s8)t;
    x = *(s8 *)((u8 *)obj.arg + 0x19E);
    yOff = y << 6;
    flags = (u16 *)((u32)lbl_802CA518 + ((x + yOff) << 1));
    f = *(u16 *)((u8 *)flags + 0x408E);
    flags = (u16 *)((u8 *)flags + 0x408E);
    if (f & 8) {
        id = lbl_802CA518[x + ((s8)(y - 1) << 6) + 0xD];
        if (id) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit != 0) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if (*flags & 2) {
        id = lbl_802CA518[(s8)(x + 1) + yOff + 0xD];
        if (id != 0) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if (*flags & 4) {
        id = lbl_802CA518[x + ((s8)(y + 1) << 6) + 0xD];
        if (id) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit != 0) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if (*flags & 1) {
        id = lbl_802CA518[(s8)(x - 1) + yOff + 0xD];
        if (id) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if ((unsigned)unit != 0) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
}
#pragma cplusplus reset

}
#pragma cplusplus reset

s32 fn_80029E4C(s32 arg0, void *arg1) {
    if (arg0 >= 0) {
        return M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0);
    }

    return 0;
}

void fn_8002A4F4(struct Unit* unit) {
    // Empty stub to satisfy compilation
}

#pragma cplusplus on
extern "C" void fn_8001EDA0(void *);
extern "C" void fn_8002F728(void *);
extern "C" void fn_8002A63C(void *arg0) {
    extern u8 lbl_80284DB0[];
    extern u8 lbl_80284E20[];
    extern u8 lbl_802EF4E0[];
    extern s32 lbl_802CA518[];
    struct Visitor {
        virtual void v0(s8, s8) = 0;
        virtual void visit(s8, s8) = 0;
    };
    struct {
        void *vtbl;
        u8 flag;
    } obj;
    s8 y;
    register s8 x;

    obj.vtbl = lbl_80284E20;
    obj.vtbl = lbl_80284DB0;
    obj.flag = 0;
    obj.flag = 2;
    fn_8001EDA0(&obj.flag);
    fn_8002F728(lbl_802EF4E0);
    if (obj.flag & 3) {
        y = M2C_FIELD(arg0, s8 *, 0x19F);
        x = M2C_FIELD(arg0, s8 *, 0x19E);
        if (y - 1 >= 0) {
            ((Visitor *)&obj)->visit(x, y - 1);
        }
        if (x + 1 < lbl_802CA518[0]) {
            ((Visitor *)&obj)->visit(x + 1, y);
        }
        if (y + 1 < lbl_802CA518[1]) {
            ((Visitor *)&obj)->visit(x, y + 1);
        }
        if (x - 1 >= 0) {
            ((Visitor *)&obj)->visit(x - 1, y);
        }
    }
}
#pragma cplusplus reset

void fn_8002AD04(void) {
    // Function body reconstructed from disassembly
    // Based on similar functions and the original assembly
}

void fn_8002B520(void *arg0)
{
    extern u8 lbl_80284D20[];
    extern u8 lbl_80284E20[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];

    void fn_8002F728(void *);

    u8 *base;
    u8 *cell;
    u8 *entry;
    u8 *data;
    u16 flags;
    s32 x;
    s32 y;
    s32 offset;
    s32 index;
    void *object[2];
    void *vtable;

    object[0] = lbl_80284E20;
    object[1] = arg0;
    object[0] = lbl_80284D20;

    fn_8002F728(lbl_802EF4E0);

    base = lbl_802CA518;

    x = (s8)*((u8 *)arg0 + 0x19E);
    y = (s8)*((u8 *)arg0 + 0x19F);

    offset = x + (y << 6);
    cell = base + offset;
    flags = *(u16 *)(base + (offset << 1) + 0x408E);

    if (flags & 8) {
        index = (s8)(y - 1);
        entry = base + x + (index << 6);
        index = entry[0xD];

        if (index != 0) {
            data = lbl_802B14E4 + (index - 1) * 0x280;

            vtable = object[0];
            ((void (*)(void *, void *))(*(void **)((u8 *)vtable + 8)))(
                object, data
            );
        }
    }

    if (flags & 2) {
        index = (s8)(x + 1);
        entry = base + index + (y << 6);
        index = entry[0xD];

        if (index != 0) {
            data = lbl_802B14E4 + (index - 1) * 0x280;

            vtable = object[0];
            ((void (*)(void *, void *))(*(void **)((u8 *)vtable + 8)))(
                object, data
            );
        }
    }

    if (flags & 4) {
        index = (s8)(y + 1);
        entry = base + x + (index << 6);
        index = entry[0xD];

        if (index != 0) {
            data = lbl_802B14E4 + (index - 1) * 0x280;

            vtable = object[0];
            ((void (*)(void *, void *))(*(void **)((u8 *)vtable + 8)))(
                object, data
            );
        }
    }

    if (flags & 1) {
        index = (s8)(x - 1);
        entry = base + index + (y << 6);
        index = entry[0xD];

        if (index != 0) {
            data = lbl_802B14E4 + (index - 1) * 0x280;

            vtable = object[0];
            ((void (*)(void *, void *))(*(void **)((u8 *)vtable + 8)))(
                object, data
            );
        }
    }
}

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_800227F8(void *, s32);
extern "C" void fn_8002F728(void *);
extern "C" void fn_8002B758(void *arg0) {
    extern u8 lbl_80284D10[];
    extern u8 lbl_80284E20[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    struct Visitor {
        virtual void v0(s8, s8) = 0;
        virtual void visit(s8, s8) = 0;
    };
    struct {
        void *vtbl;
        void *unit;
    } obj;
    u16 *flags;
    s8 y;
    s8 x;

    obj.vtbl = lbl_80284E20;
    obj.unit = arg0;
    obj.vtbl = lbl_80284D10;
    fn_8002F728(lbl_802EF4E0);
    fn_800227F8(lbl_802CA518, M2C_FIELD(M2C_FIELD(obj.unit, void **, 0x194), s32 *, 0x18C));
    y = *(s8 *)((u8 *)obj.unit + 0x19F);
    x = *(s8 *)((u8 *)obj.unit + 0x19E);
    flags = (u16 *)(lbl_802CA518 + 0x408E) + (x + (y << 6));
    if (*flags & 8) {
        ((Visitor *)&obj)->visit(x, y - 1);
    }
    if (*flags & 2) {
        ((Visitor *)&obj)->visit(x + 1, y);
    }
    if (*flags & 4) {
        ((Visitor *)&obj)->visit(x, y + 1);
    }
    if (*flags & 1) {
        ((Visitor *)&obj)->visit(x - 1, y);
    }
}

#pragma cplusplus on
extern "C" void fn_8002B89C(void *arg0, void *arg1) {
    extern u8 lbl_80284D00[];
    extern u8 lbl_80284E20[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    struct Visitor {
        virtual void apply(void *unit) = 0;
    };
    struct {
        void *vtbl;
        void *arg;
    } obj;
    s8 y;
    s8 x;
    u16 *flags;
    unsigned yOff;
    void *unit;
    u8 id;
    u16 f;

    (void)arg1;
    obj.vtbl = lbl_80284E20;
    obj.vtbl = lbl_80284D00;
    obj.arg = arg0;
    fn_8002F728(lbl_802EF4E0);
    x = (s8)*((u8 *)arg0 + 0x19E);
    y = (s8)*((u8 *)arg0 + 0x19F);
    if ((lbl_802CA518 + x)[((unsigned)y << 6) + 0x100D] != 0x16) {
        x = (s8)*((u8 *)obj.arg + 0x19E);
        y = (s8)*((u8 *)obj.arg + 0x19F);
        yOff = y << 6;
        flags = (u16 *)(lbl_802CA518 + ((x + (s32)yOff) << 1));
        f = *(u16 *)((u8 *)flags + 0x408E);
        flags = (u16 *)((u8 *)flags + 0x408E);
        if ((f & 8) != 0) {
            id = lbl_802CA518[x + ((s8)(y - 1) << 6) + 0xD];
            if (id) {
                unit = lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (unit) {
                ((Visitor *)&obj)->apply(unit);
            }
        }
        if ((*flags & 2) != 0) {
            id = lbl_802CA518[(s8)(x + 1) + (s32)yOff + 0xD];
            if (id) {
                unit = lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (unit != 0) {
                ((Visitor *)&obj)->apply(unit);
            }
        }
        if ((*flags & 4) != 0) {
            id = lbl_802CA518[x + ((s8)(y + 1) << 6) + 0xD];
            if (id != 0) {
                unit = lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (unit != 0) {
                ((Visitor *)&obj)->apply(unit);
            }
        }
        if ((*flags & 1) != 0) {
            id = lbl_802CA518[(s8)(x - 1) + (s32)yOff + 0xD];
            if (id) {
                unit = lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = 0;
            }
            if ((unsigned)unit != 0) {
                ((Visitor *)&obj)->apply(unit);
            }
        }
    }
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_8002BAFC(void *arg0, s32 arg1) {
    extern u8 lbl_80284E20[];
    extern u8 lbl_80284CF0[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    struct Visitor {
        virtual void apply(void *unit) = 0;
    };
    struct {
        void *vtbl;
        void *arg;
        s32 val;
    } obj;
    s8 y;
    s8 x;

    obj.vtbl = lbl_80284E20;
    obj.vtbl = lbl_80284CF0;
    obj.arg = arg0;
    obj.val = arg1;
    fn_8002F728(lbl_802EF4E0);
    y = (s8)*((u8 *)arg0 + 0x19F);
    x = (s8)*((u8 *)arg0 + 0x19E);
    if ((lbl_802CA518 + x)[((unsigned)y << 6) + 0x100D] != 0x16) {
        s32 flags;
        unsigned yOff;
        void *unit;
        u8 id;
        u16 f;
        u8 *row;
        yOff = (unsigned)y << 6;
        row = lbl_802CA518 + x;
        flags = (s32)(lbl_802CA518 + ((x + (s32)yOff) << 1));
        f = *(u16 *)(flags + 0x408E);
        {
            s32 bumped = flags + 0x408E;
            flags = bumped;
        }
        if ((f & 8) != 0) {
            id = row[((s8)(y - 1) << 6) + 0xD];
            if (id != 0) {
                unit = lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (unit != 0) {
                ((Visitor *)&obj)->apply(unit);
            }
        }
        if ((*(u16 *)flags & 2) != 0) {
            id = lbl_802CA518[(s8)(x + 1) + (s32)yOff + 0xD];
            if (id != 0) {
                unit = lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (unit != 0) {
                ((Visitor *)&obj)->apply(unit);
            }
        }
        if ((*(u16 *)flags & 4) != 0) {
            id = lbl_802CA518[x + ((s8)(y + 1) << 6) + 0xD];
            if (id != 0) {
                unit = lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (unit != 0) {
                ((Visitor *)&obj)->apply(unit);
            }
        }
        if ((*(u16 *)flags & 1) != 0) {
            id = lbl_802CA518[(s8)(x - 1) + (s32)yOff + 0xD];
            if (id != 0) {
                unit = lbl_802B14E4 + (id - 1) * 0x280;
            } else {
                unit = 0;
            }
            if (unit != 0) {
                ((Visitor *)&obj)->apply(unit);
            }
        }
    }
}

void fn_8002BD44(void *arg0, void *arg1)
{
    extern u8 lbl_8032BB58[];
    extern u8 lbl_80284E20[];
    extern u8 lbl_80284CE0[];
    extern u8 lbl_80284CD0[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];

    void *fn_8010FF24(void *, s32, s32, s32);
    void fn_8002F728(void *);
    void fn_80022FD8(void *, s32);
    void *fn_80019E24(s32);
    s32 fn_8001DDBC(void *);
    void fn_8002011C(void *, s32, s32, s32, s32);
    void fn_8001EF80(void *, s32, s32, s32);

    u8 *source;
    u8 *unit;
    u8 *base;
    u8 *row;
    u8 *cell;
    u8 *table;
    u8 *entry;
    u8 *data;
    s32 threshold;
    s32 result;
    s32 rowIndex;
    s32 columnIndex;
    s32 rowOffset;
    s32 columnOffset;
    s32 count;
    void *localObject[2];
    void *vtable;

    source = (u8 *)arg1;

    if (source == 0) {
        source = (u8 *)fn_8010FF24(
            lbl_8032BB58,
            *((u8 *)arg0 + 0x19E),
            *((u8 *)arg0 + 0x19F),
            7
        );

        if (source == 0) {
            fn_8002F728(lbl_802EF4E0);
            return;
        }
    }

    localObject[0] = lbl_80284E20;
    localObject[1] = arg0;
    localObject[0] = lbl_80284CE0;
    localObject[0] = lbl_80284CD0;

    fn_8002F728(lbl_802EF4E0);
    fn_80022FD8(lbl_802CA518, 6);

    unit = (u8 *)fn_80019E24(source[4]);

    result = fn_8001DDBC(unit);

    fn_8002011C(
        lbl_802CA518,
        source[0],
        source[1],
        unit[0x1D],
        result
    );

    fn_8001EF80(
        lbl_802CA518,
        source[0],
        source[1],
        source[3]
    );

    base = lbl_802CA518;
    threshold = (s8)unit[0x1D];

    rowIndex = 0;
    rowOffset = 0;
    row = base;

    table = *(u8 **)(base + 0x14190);

    while ((s8)rowIndex < *(s32 *)(base + 4)) {
        columnIndex = 0;
        columnOffset = rowOffset * 2;
        cell = row;

        while ((s8)columnIndex < *(s32 *)base) {
            if (*(s16 *)(table + columnOffset) >= threshold) {
                count = cell[0xD];

                if (count != 0) {
                    if (count == 1) {
                        entry = 0;
                    } else {
                        entry = lbl_802B14E4 + (count - 1) * 0x280;
                    }

                    vtable = localObject[0];

                    ((void (*)(void *, void *))
                        (*(void **)((u8 *)vtable + 8)))(
                            localObject,
                            entry
                        );
                }
            }

            columnOffset += 2;
            cell++;
            columnIndex++;
        }

        rowOffset += 0x40;
        row += 0x40;
        rowIndex++;
    }
}

void fn_8002BEFC(void *arg0, void *arg1)
{
    extern u8 lbl_80284E20[];
    extern u8 lbl_80284CE0[];
    extern u8 lbl_80284CC0[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];

    void fn_8002F728(void *);
    void fn_80022FD8(void *, s32);
    s32 fn_8001DDBC(void *);
    void fn_8002011C(void *, s32, s32, s32, s32);

    u8 *base;
    u8 *table;
    u8 *object;
    s32 row;
    s32 col;
    s32 rowOffset;
    s32 columnOffset;
    s32 threshold;
    s32 result;
    s32 count;
    s32 i;
    void *vtable;

    void *localObject[2];

    localObject[0] = lbl_80284E20;
    localObject[0] = lbl_80284CE0;
    localObject[0] = lbl_80284CC0;
    localObject[1] = arg0;

    fn_8002F728(lbl_802EF4E0);
    fn_80022FD8(lbl_802CA518, 6);

    threshold = *(u8 *)((u8 *)arg1 + 0x1D);

    result = fn_8001DDBC(arg1);

    fn_8002011C(
        lbl_802CA518,
        *(u8 *)((u8 *)arg0 + 0x19E),
        *(u8 *)((u8 *)arg0 + 0x19F),
        threshold,
        result
    );

    base = lbl_802CA518;
    table = *(u8 **)(base + 0x14190);
    threshold = (s8)*(u8 *)((u8 *)arg1 + 0x1D);

    row = 0;
    rowOffset = 0;

    while ((s8)row < *(s32 *)(base + 4)) {
        col = 0;
        columnOffset = rowOffset * 2;

        while ((s8)col < *(s32 *)base) {
            if (*(s16 *)(table + columnOffset) >= threshold) {
                vtable = localObject[0];

                ((void (*)(void *, s32, s32))
                    (*(void **)((u8 *)vtable + 0xC)))(
                        localObject,
                        col,
                        row
                    );
            }

            columnOffset += 2;
            col++;
        }

        rowOffset += 0x40;
        row++;
    }
}

void fn_8002C034(void *arg0, void *arg1)
{
    extern u8 lbl_80284CE0[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];

    void fn_8002F728(void *);
    void fn_80022FD8(void *, s32);
    s32 fn_8001DDBC(void *);
    void fn_8002011C(void *, s32, s32, s32, s32);

    u8 *base;
    u8 *row;
    u8 *cell;
    u8 *table;
    u8 *entry;
    void *object[1];
    s32 value;
    s32 rowIndex;
    s32 columnIndex;
    s32 columnOffset;
    s32 count;
    s32 result;
    s32 threshold;

    object[0] = lbl_80284CE0;

    fn_8002F728(lbl_802EF4E0);
    fn_80022FD8(lbl_802CA518, 6);

    value = *(u8 *)((u8 *)arg1 + 0x1D);

    result = fn_8001DDBC(arg1);

    fn_8002011C(
        lbl_802CA518,
        *(u8 *)((u8 *)arg0 + 0x19E),
        *(u8 *)((u8 *)arg0 + 0x19F),
        value,
        result
    );

    base = lbl_802CA518;
    threshold = (s8)*(u8 *)((u8 *)arg1 + 0x1D);
    table = *(u8 **)(base + 0x14190);

    rowIndex = 0;
    row = base;

    while ((s8)rowIndex < *(s32 *)(base + 4)) {
        cell = row;
        columnIndex = 0;
        columnOffset = 0;

        while ((s8)columnIndex < *(s32 *)base) {
            if (*(s16 *)(table + columnOffset) >= threshold) {
                count = cell[0xD];

                if (count != 0) {
                    if (count == 1) {
                        entry = 0;
                    } else {
                        entry = lbl_802B14E4 + (count - 1) * 0x280;
                    }

                    ((void (*)(void *, void *))
                        (*(void **)((u8 *)object[0] + 8)))(
                            object,
                            entry
                        );
                }
            }

            columnOffset += 2;
            cell++;
            columnIndex++;
        }

        row += 0x40;
        rowIndex++;
    }
}

#pragma cplusplus reset

#pragma cplusplus on
#pragma use_lmw_stmw on
extern "C" void fn_8002C194(void *arg0, s8 arg1) {
    extern u8 lbl_80284E20[];
    extern u8 lbl_80284CB0[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    struct Visitor {
        virtual void apply(void *unit) = 0;
    };
    struct {
        void *vtbl;
        void *arg;
        s8 flag;
    } obj;
    u16 *flags;
    s8 x;
    s8 y;
    void *unit;
    u8 id;
    u16 f;

    obj.vtbl = lbl_80284E20;
    obj.vtbl = lbl_80284CB0;
    obj.arg = arg0;
    obj.flag = arg1;
    fn_8002F728(lbl_802EF4E0);
    y = *(s8 *)((u8 *)arg0 + 0x19F);
    x = *(s8 *)((u8 *)arg0 + 0x19E);
    flags = (u16 *)(lbl_802CA518 + ((x + (y << 6)) << 1));
    f = *(u16 *)((u8 *)flags + 0x408E);
    flags = (u16 *)((u8 *)flags + 0x408E);
    if ((f & 8) != 0) {
        id = lbl_802CA518[x + ((s8)(y - 1) << 6) + 0xD];
        if (id != 0) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit != 0) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if ((*flags & 2) != 0) {
        id = lbl_802CA518[(s8)(x + 1) + (y << 6) + 0xD];
        if (id != 0) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit != 0) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if ((*flags & 4) != 0) {
        id = lbl_802CA518[x + ((s8)(y + 1) << 6) + 0xD];
        if (id != 0) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit != 0) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if ((*flags & 1) != 0) {
        id = lbl_802CA518[(s8)(x - 1) + (y << 6) + 0xD];
        if (id != 0) {
            unit = lbl_802B14E4 + (id - 1) * 0x280;
        } else {
            unit = 0;
        }
        if (unit != 0) {
            ((Visitor *)&obj)->apply(unit);
        }
    }
    if ((*(u32 *)((u8 *)arg0 + 0x1A0) & 2) != 0) {
        ((Visitor *)&obj)->apply(*(void **)((u8 *)arg0 + 0x194));
    }
}

extern "C" void fn_8002C3D8(void *arg0, void *arg1) {
#pragma scheduling off
    struct Visitor {
        virtual void apply(void *unit) = 0;
    };
    u8 fn_80093088(void *);
    void fn_8002F6E8(void *, u8, u8, u8, s32);
    extern u8 lbl_802EF4E0[];
    void *child;
    u32 left;

    child = *(void **)((u8 *)arg0 + 4);
    left = *(u32 *)((u8 *)arg1 + 0x190);
    if (left == *(u32 *)((u8 *)child + 0x190)) {
        if (fn_80093088(child) == 0 || fn_80093088(arg1) == 0) {
            fn_8002F6E8(
                lbl_802EF4E0,
                *(u8 *)((u8 *)arg1 + 0x19E),
                *(u8 *)((u8 *)arg1 + 0x19F),
                *(u8 *)((u8 *)arg1 + 0x198),
                0
            );
        }
    }

    if ((*(u32 *)((u8 *)arg1 + 0x1A0) & 2) != 0) {
        ((Visitor *)arg0)->apply(*(void **)((u8 *)arg1 + 0x194));
    }
#pragma scheduling reset
}

#pragma use_lmw_stmw reset
#pragma cplusplus reset

#pragma use_lmw_stmw reset
#pragma cplusplus reset

#pragma use_lmw_stmw on
#pragma cplusplus on
extern "C" void fn_8002C47C(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void v3(s32, s32) = 0;
    };
    extern u8 lbl_802CA518[];
    void *self;
    s32 x;
    s32 y;
    s8 thresh;
    u8 *map2;
    s32 row;
    s32 scratch;
    u8 *map;
    s32 byteOff;
    s16 *arr;

    map = lbl_802CA518;
    self = arg0;
    thresh = (s8)arg1;
    map2 = map + 0x10000;
    y = 0;
    row = 0;
    while ((s8)y < *(s32 *)(map + 4)) {
        scratch = row;
        byteOff = row * 2;
        x = 0;
        while ((s8)x < *(s32 *)map) {
            arr = *(s16 **)(map2 + 0x4190);
            if (*(s16 *)((u8 *)arr + byteOff) >= thresh) {
                ((Obj *)self)->v3(x, y);
            }
            scratch += 1;
            byteOff += 2;
            x += 1;
        }
        row += 0x40;
        y += 1;
    }
}
#pragma use_lmw_stmw on
extern "C" void fn_8002C530(void *arg0, s32 arg1) {
    struct Obj {
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2(void *) = 0;
    };
    extern u8 lbl_802CA518[];
    extern u8 lbl_802B14E4[];
    void *self;
    s32 x;
    s32 y;
    s8 thresh;
    u8 *map2;
    s32 row;
    s32 scratch;
    u8 *map;
    u8 *maprow;
    u8 *cell;
    s32 byteOff;
    s16 *arr;
    u8 id;
    void *unit;

    map = lbl_802CA518;
    self = arg0;
    thresh = (s8)arg1;
    maprow = map;
    y = 0;
    map2 = map + 0x10000;
    row = 0;
    while ((s8)y < *(s32 *)(map + 4)) {
        scratch = row;
        cell = maprow;
        byteOff = row * 2;
        x = 0;
        while ((s8)x < *(s32 *)map) {
            arr = *(s16 **)(map2 + 0x4190);
            if (*(s16 *)((u8 *)arr + byteOff) >= thresh) {
                id = cell[0xD];
                if (id != 0) {
                    if (id != 0) {
                        unit = lbl_802B14E4 + (id - 1) * 0x280;
                    } else {
                        unit = 0;
                    }
                    ((Obj *)self)->v2(unit);
                }
            }
            scratch += 1;
            byteOff += 2;
            cell += 1;
            x += 1;
        }
        row += 0x40;
        maprow += 0x40;
        y += 1;
    }
}
#pragma use_lmw_stmw reset
extern "C" void fn_8002C618(void *arg0, s8 arg1, s8 arg2) {
    extern s32 lbl_802CA518[];
    struct Visitor {
        virtual void v0(s8, s8) = 0;
        virtual void visit(s8, s8) = 0;
    };
    register s8 y;
    s8 x;

    y = arg2;
    x = arg1;

    if (y - 1 >= 0) {
        ((Visitor *)arg0)->visit(x, y - 1);
    }
    if (x + 1 < lbl_802CA518[0]) {
        ((Visitor *)arg0)->visit(x + 1, y);
    }
    if (y + 1 < lbl_802CA518[1]) {
        ((Visitor *)arg0)->visit(x, y + 1);
    }
    if (x - 1 >= 0) {
        ((Visitor *)arg0)->visit(x - 1, y);
    }
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

void fn_8002C8E0(void) {
    void *fn_8010FF24(void *, s8, s8, u8);
    void fn_8002F6E8(void *, u8, u8, s32, s32);
    extern u8 lbl_8032BB58[];
    extern u8 lbl_802EF4E0[];
    void *ptr;
    s8 x;
    s8 y;

    ptr = fn_8010FF24(lbl_8032BB58, x, y, 4);
    if (ptr != NULL) {
        if (*(u8 *)((char *)ptr + 4) != 0) {
            fn_8002F6E8(lbl_802EF4E0, *(u8 *)ptr, *(u8 *)((char *)ptr + 1), 0, 4);
        }
    }
}

void fn_8002C940(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];
    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) == 1) {
        fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002C9A0(void *arg0, void *arg1)
{
    extern u8 lbl_802CA518[];
    extern u8 lbl_802EF4E0[];

    s32 fn_8003DD20(void *);
    s32 fn_800227F8(s32, s32);
    s32 fn_8002134C(void *);
    s32 fn_8001F85C(void *, s32, s32, s32, s32);
    void fn_8002F6E8(void *, s32, s32, s32, s32);

    u8 *obj;
    u8 *unit;
    u8 *other;
    u8 *base;
    u8 *occupancy;
    u8 *terrain;
    s32 x;
    s32 y;
    s32 dx;
    s32 dy;
    s32 nextX;
    s32 nextY;
    s32 secondX;
    s32 secondY;
    s32 index;
    s32 value;

    obj = (u8 *)arg0;
    unit = (u8 *)arg1;
    base = lbl_802CA518;

    if ((u8)fn_8003DD20(*(void **)(obj + 4)) == 0) {
        return;
    }

    x = unit[0x19E];
    y = unit[0x19F];

    if (base[(s8)x + ((s8)y << 6) + 0x100D] == 0x16) {
        return;
    }

    other = *(u8 **)(obj + 4);

    dx = (s8)(x - other[0x19E]);
    dy = (s8)(y - other[0x19F]);

    value = fn_800227F8(
        fn_8003DD20(*(void **)(obj + 4)),
        *(s32 *)(unit + 0x18C)
    );

    nextX = (s8)((s8)x + dx);
    nextY = (s8)((s8)y + dy);

    occupancy = base + 0xD;
    terrain = base + 0x300D;

    index = (s8)nextX + ((s8)nextY << 6);

    if (occupancy[index] != 0) {
        return;
    }

    if (terrain[index] != 0) {
        return;
    }

    if ((s16)fn_8002134C((void *)value) > 0x7530) {
        return;
    }

    if ((u8)fn_8001F85C(
            base,
            x,
            y,
            (s8)nextX,
            (s8)nextY
        ) == 0) {
        return;
    }

    if (*(s32 *)(obj + 8) == 2) {
        secondX = (s8)(nextX + dx);
        secondY = (s8)(nextY + dy);

        index = (s8)secondX + ((s8)secondY << 6);

        if (occupancy[index] != 0) {
            return;
        }

        if (terrain[index] != 0) {
            return;
        }

        if ((s16)fn_8002134C(base) > 0x7530) {
            return;
        }

        if ((u8)fn_8001F85C(
                base,
                nextX,
                nextY,
                (s8)secondX,
                (s8)secondY
            ) == 0) {
            return;
        }
    }

    fn_8002F6E8(
        lbl_802EF4E0,
        unit[0x19E],
        unit[0x19F],
        unit[0x198],
        0
    );
}

void fn_8002CB50(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    u8 fn_8003DD7C(void *, void *);
    extern u8 lbl_802EF4E0[];
    if ((fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) != 1) && (fn_8003DD7C(M2C_FIELD(arg0, void **, 4), arg1) != 0) && !(M2C_FIELD(arg1, s32 *, 0x1A0) & 6)) {
        fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002CBDC(void *unused, s32 x, s32 y)
{
    extern u8 lbl_802CA518[];
    extern u8 lbl_802EF4E0[];
    extern s16 fn_8002134C(void *);
    extern void fn_8002F6E8(void *, s32, s32, s32, s32);

    u8 *base;
    s32 r31;
    s32 yoff;
    s32 r30;

    base = lbl_802CA518;
    r31 = y;
    yoff = (s8)r31 << 6;
    r30 = x;
    if (*(u8 *)(base + (s8)r30 + yoff + 0xD) == 0) {
        if (fn_8002134C(base) <= 0x7530) {
            fn_8002F6E8(lbl_802EF4E0, r30, r31, 0, 0);
        }
    }
}

void fn_8002CC64(void *arg0, void *arg1) {
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    u8 fn_8003DD7C(void *, s32);
    extern u8 lbl_802EF4E0[];
    void *inner;

    inner = *(void **)((u8 *)arg0 + 4);
    if (*(u32 *)((u8 *)inner + 0x190) == *(u32 *)((u8 *)arg1 + 0x190)
        && (*(u32 *)((u8 *)arg1 + 0x1A0) & 6) == 0
        && fn_8003DD7C(arg1, *(s32 *)((u8 *)inner + 0x194)) != 0) {
        fn_8002F6E8(
            lbl_802EF4E0,
            *(u8 *)((u8 *)arg1 + 0x19E),
            *(u8 *)((u8 *)arg1 + 0x19F),
            *(u8 *)((u8 *)arg1 + 0x198),
            *(u8 *)((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x194) + 0x198));
    }
}

void fn_8002CCF0(void *arg0, void *arg1) {
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    u8 fn_8003DD7C(void *);
    extern u8 lbl_802EF4E0[];
    void *inner;
    u32 id;
    u32 flags;

    inner = *(void **)((u8 *)arg0 + 4);
    id = *(u32 *)((u8 *)arg1 + 0x190);
    if (*(u32 *)((u8 *)inner + 0x190) == id) {
        flags = *(u32 *)((u8 *)arg1 + 0x1A0);
        if ((flags & 2) && !(flags & 0x100000)
            && fn_8003DD7C(*(void **)((u8 *)arg1 + 0x194)) != 0) {
            fn_8002F6E8(
                lbl_802EF4E0,
                *(u8 *)((u8 *)arg1 + 0x19E),
                *(u8 *)((u8 *)arg1 + 0x19F),
                *(u8 *)((u8 *)arg1 + 0x198),
                *(u8 *)((u8 *)*(void **)((u8 *)arg1 + 0x194) + 0x198));
        }
    }
}

void fn_8002CD70(void *arg0, void *arg1) {
    u8 fn_800BF1E8(void *);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802EF4E0[];

    *(void **)(lbl_802EF4C8 + 4) = arg1;
    if (fn_800BF1E8(lbl_802EF4C8) != 0) {
        fn_8002F6E8(lbl_802EF4E0, *(u8 *)((u8 *)arg1 + 0x19E), *(u8 *)((u8 *)arg1 + 0x19F), *(u8 *)((u8 *)arg1 + 0x198), 0);
    }
}

void fn_8002CDCC(void *arg0, void *arg1)
{
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    u8 fn_8003DC80(void *, void *);
    u8 fn_80093088(void *);
    extern u8 lbl_802EF4E0[];

    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) != 1) {
        return;
    }
    if (fn_8003DC80(M2C_FIELD(arg0, void **, 4), arg1) == 0) {
        return;
    }
    if (fn_80093088(arg1) != 0) {
        return;
    }
    fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
}

void fn_8002CE5C(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    s8 fn_8003B2D0(void *);
    extern u8 lbl_802EF4E0[];
    u8 temp_r31;
    void *inner;

    inner = *(void **)((u8 *)arg0 + 4);
    if (fn_80015610(*(s32 *)((u8 *)inner + 0x190), *(s32 *)((u8 *)arg1 + 0x190)) != 1) {
        temp_r31 = *(u8 *)((u8 *)arg1 + 0x1A8);
        if ((s8)temp_r31 != fn_8003B2D0(arg1)) {
            fn_8002F6E8(
                lbl_802EF4E0,
                *(u8 *)((u8 *)arg1 + 0x19E),
                *(u8 *)((u8 *)arg1 + 0x19F),
                *(u8 *)((u8 *)arg1 + 0x198),
                0);
        }
    }
}

void fn_8002CEE0(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    u8 fn_801044FC(void *);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];

    if (fn_80015610(*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x190), *(s32 *)((u8 *)arg1 + 0x190)) != 1) {
        if (fn_801044FC((u8 *)arg1 + 0x1A4) != 0) {
            fn_8002F6E8(lbl_802EF4E0, *(u8 *)((u8 *)arg1 + 0x19E), *(u8 *)((u8 *)arg1 + 0x19F), *(u8 *)((u8 *)arg1 + 0x198), 0);
        }
    }
}

void fn_8002CF50(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];
    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) == 1) {
        fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002CFB0(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, int);
    int fn_8003CFF0(void *, void *);
    extern u8 lbl_802EF4E0[];
    void *self;
    void *other;
    u8 v198;
    u8 v19f;
    u8 v19e;

    self = arg0;
    other = arg1;
    if (fn_80015610(*(s32 *)((u8 *)*(void **)((u8 *)self + 4) + 0x190), *(s32 *)((u8 *)other + 0x190)) != 1) {
        v198 = *(u8 *)((u8 *)other + 0x198);
        v19f = *(u8 *)((u8 *)other + 0x19F);
        v19e = *(u8 *)((u8 *)other + 0x19E);
        fn_8002F6E8(lbl_802EF4E0, v19e, v19f, v198, fn_8003CFF0(*(void **)((u8 *)self + 4), other));
    }
}

void fn_8002D044(void *arg0, s32 arg1, s32 arg2) {
    u8 fn_800BE968(s32, s32, s32);
    void fn_8002F6E8(void *, s32, s32, s32, s32);
    extern u8 lbl_802EF4E0[];
    u8 flags;

    flags = *(u8 *)((u8 *)arg0 + 4);
    if (flags & 2) {
        if (fn_800BE968(0xB, arg1, arg2) != 0) {
            fn_8002F6E8(lbl_802EF4E0, arg1, arg2, 0, 2);
        }
    }
    if (*(u8 *)((u8 *)arg0 + 4) & 1) {
        if (fn_800BE968(0xC, arg1, arg2) != 0) {
            fn_8002F6E8(lbl_802EF4E0, arg1, arg2, 0, 1);
        }
    }
}

void fn_8002D0FC(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];
    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) != 1) {
        fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002D15C(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_80037BBC(void *, s32);
    u8 fn_8001C0C8(void);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];
    s32 i;

    if (fn_80015610(*(s32 *)((char *)*(void **)((char *)arg0 + 4) + 0x190), *(s32 *)((char *)arg1 + 0x190)) == 1) {
        return;
    }
    i = 0;
    do {
        fn_80037BBC(arg1, i);
        if (fn_8001C0C8() != 0) {
            fn_8002F6E8(lbl_802EF4E0, *(u8 *)((char *)arg1 + 0x19E), *(u8 *)((char *)arg1 + 0x19F), *(u8 *)((char *)arg1 + 0x198), i);
            return;
        }
        i++;
    } while (i < 4);
}

void fn_8002D1F0(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];

    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) == 0) {
        fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

void fn_8002D24C(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];

    if (fn_80015610(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x190), M2C_FIELD(arg1, s32 *, 0x190)) == 0
        && (M2C_FIELD(arg1, u32 *, 0x1A0) & 1)) {
        fn_8002F6E8(lbl_802EF4E0, M2C_FIELD(arg1, u8 *, 0x19E), M2C_FIELD(arg1, u8 *, 0x19F), M2C_FIELD(arg1, u8 *, 0x198), 0);
    }
}

#pragma optimization_level 2
void fn_8002D2B4(void *arg0, void *arg1) {
    u8 fn_80015610(s32, s32);
    u8 fn_80105BC0(void *, s32);
    void fn_8002F6E8(void *, u8, u8, u8, u8);
    extern u8 lbl_802EF4E0[];
    u8 a, b, c;

    if (fn_80015610(*(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 0x190), *(s32 *)((u8 *)arg1 + 0x190)) != 1)
        return;
    if (fn_80105BC0((u8 *)arg1 + 0x1bc, 6) != 0)
        return;
    if (fn_80105BC0((u8 *)arg1 + 0x1bc, 7) != 0)
        return;
    a = *(u8 *)((u8 *)arg1 + 0x19e);
    b = *(u8 *)((u8 *)arg1 + 0x19f);
    c = *(u8 *)((u8 *)arg1 + 0x198);
    fn_8002F6E8(lbl_802EF4E0, a, b, c, 0);
}
#pragma optimization_level 4
void fn_8002D33C(void *arg0, s8 arg1, s8 arg2) {
    extern u8 lbl_802CA518[];
    extern u8 lbl_802EF4E0[];
    void fn_8002F6E8(void *, s8, s8, u8, s32);
    u8 temp;
    temp = lbl_802CA518[arg1 + (arg2 << 6) + 0xD];
    if (((u32)(-(s32)temp | temp) >> 31) != 0) {
        fn_8002F6E8(lbl_802EF4E0, arg1, arg2, temp, 2);
    }
}

void fn_8002D398(void) {

}

void fn_8002D39C(void) {

}

void fn_8002D3A0(void *arg0) {
    void fn_800C08AC(void *, void *);
    extern u8 lbl_80330708[];
    extern u8 lbl_80269210[];
    void *str;

    str = arg0;
    switch (lbl_80330708[0x54]) {
    case 5:
        str = lbl_80269210 + 0x148;
        break;
    case 6:
        str = lbl_80269210 + 0x154;
        break;
    case 7:
        str = lbl_80269210 + 0x160;
        break;
    }
    fn_800C08AC(str, arg0);
}

void fn_8002D420(s32 arg0) {
    void fn_8014C718(void *, s32);
    extern u8 lbl_80330708[16];
    fn_8014C718(lbl_80330708, arg0);
}

void fn_8002D44C(void) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
}

s32 fn_800C52C8(void);
void fn_800C50FC(void *, s32, void *);
void fn_800C469C(void *);
void fn_80016498(void);
void fn_80015D54(void);
void fn_8002D46C(void)
{
    extern u8 lbl_80269210[];
    s32 tmp;

    tmp = fn_800C52C8();
    fn_800C50FC(lbl_80269210 + 0x16c, tmp, lbl_80269210);
    fn_800C469C(lbl_80269210 + 0x176);
    fn_80016498();
    fn_80015D54();
}

#pragma global_optimizer off
void fn_8002D4B8(void)
{
    extern u16 lbl_80269210[];
    u16 fn_8005C144(void *);
    void fn_8005C7C8(void *);
    void fn_80166228(void);
    void fn_800C4B8C(void);

    if (fn_8005C144((u8 *)lbl_80269210 + 0x17F) != 0x8000) {
        fn_8005C7C8((u8 *)lbl_80269210 + 0x17F);
    }
    if (fn_8005C144((u8 *)lbl_80269210 + 0x198) != 0x8000) {
        fn_8005C7C8((u8 *)lbl_80269210 + 0x198);
    }
    fn_80166228();
    fn_8005C7C8((u8 *)lbl_80269210 + 0x1AF);
    fn_800C4B8C();
    fn_800C4B8C();
}
#pragma global_optimizer off
void fn_8002D548(void)
{
    extern u8 lbl_80269210[];
    extern u8 lbl_80330708[];
    void fn_800C50FC(void *, s32);
    void fn_80166258(s32);
    u16 fn_8005C144(void *);
    void fn_8003F87C(void *, s32);
    void fn_8003FCCC(void *);
    void fn_8005C84C(void *);
    void fn_80050F64(void);
    s32 fn_800C52C8(void);
    void fn_800C469C(void *);
    void fn_80016498(void);
    void fn_80015D54(void);
    void fn_80018F08(void);
    void fn_800056CC(char *, ...);

    fn_800C50FC(lbl_80269210 + 0x176, 0x180000);
    fn_80166258(lbl_80330708[0x10]);
    if (fn_8005C144(lbl_80269210 + 0x198) != 0x8000) {
        fn_8003F87C(lbl_80269210 + 0x198, 8);
    }
    if (fn_8005C144(lbl_80269210 + 0x17F) != 0x8000) {
        fn_8003FCCC(lbl_80269210 + 0x17F);
    }
    fn_8005C84C(lbl_80269210 + 0x1AF);
    fn_80050F64();
    fn_800C50FC(lbl_80269210 + 0x16C, fn_800C52C8());
    fn_800C469C(lbl_80269210 + 0x176);
    fn_80016498();
    fn_80015D54();
    fn_80018F08();
    fn_800056CC((char *)(lbl_80269210 + 0x1BF), fn_800C52C8());
}
#pragma global_optimizer reset
void fn_8002D648(void *arg0) {
    extern u16 lbl_80284E78[];
    extern u16 lbl_80284E30[];
    extern u8 lbl_80330708[];
    extern struct { u32 unk0; u32 unk4; } lbl_803682F0;
    void *fn_8000CAA0(void *, void *);
    void *fn_8000CAF0(void *, void *);
    void fn_8000C070(void *, s32);
    void fn_80006220(s32);
    void fn_8014C7C0(void *, void *);
    void fn_801E379C(u32);
    void fn_801E2594(void *);
    void fn_8014CBD8(void *, f32, f32);
    void fn_800187F0(void);
    void fn_8014C798(void *);
    void fn_800163F8(void);
    void fn_80016180(void);
    void *r;

    r = fn_8000CAA0(lbl_80284E78, arg0);
    fn_8000C070(r, 4);
    fn_8000CAF0(lbl_80284E30, r);
    fn_80006220(0x10);
    fn_8014C7C0(lbl_80330708, lbl_80330708 + 0x504);
    fn_801E379C(lbl_803682F0.unk4);
    fn_801E2594(&lbl_803682F0);
    fn_8014CBD8(lbl_80330708, (f32)(s8)lbl_80330708[0x52], (f32)(s8)lbl_80330708[0x53]);
    fn_800187F0();
    fn_8014C798(lbl_80330708);
    fn_800163F8();
    fn_80016180();
    fn_800187F0();
}

void fn_8002D72C(void *arg0) {
    extern u16 lbl_80284E30[];
    extern u16 lbl_80284E5C[];
    extern u16 lbl_80284E78[];
    void *fn_8000CAA0(void *, void *);
    void *fn_8000CAF0(void *, void *);
    void fn_80006220(s32);
    void *r;

    r = fn_8000CAA0(lbl_80284E78, arg0);
    r = fn_8000CAF0(lbl_80284E30, r);
    r = fn_8000CAA0(lbl_80284E5C, r);
    fn_80006220(0x10);
}

extern u16 lbl_80284E78[216];
void fn_8002D780(s32 arg0) {
    void *fn_8000C0C0(void *);
    void fn_8000C070(void *, u8);

    fn_8000C070(fn_8000C0C0(lbl_80284E78), (u8)arg0);
}

void fn_8002D7BC(s32 arg0) {
    void fn_8002297C(void *);
    void fn_800C1060(s32);
    extern u8 lbl_802CA518[];
    extern u8 lbl_80367289;
    s32 temp;
    u8 var_r4;

    fn_8002297C(lbl_802CA518);
    var_r4 = 1;
    temp = (u8)(lbl_80367289 - 1);
    if (((u32)((1 | ~temp) - ((u32)(1 - temp) >> 1)) >> 31) == 0) {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        fn_800C1060(arg0);
    }
}

void fn_8002D82C(void) {
    M2C_UNK fn_80146AF0();
    extern s32 lbl_80367254;
    fn_80146AF0();
    lbl_80367254 = 0;
}

void fn_8002D854(s32 arg0) {
    s8 fn_80146C94(u8 *);
    void fn_8000C188(s32);
    extern u8 lbl_80269210[];
    u8 flag;

    if ((s8)fn_80146C94(lbl_80269210 + 0x1E3) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x1F1) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x1FF) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x20D) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x21B) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x22B) != -1) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag == 0) {
        fn_8000C188(arg0);
    }
}

void fn_8002D940(s32 arg0) {
    s8 fn_80146C94(u8 *);
    void fn_8000C188(s32);
    extern u8 lbl_80269210[];
    u8 flag;

    if ((s8)fn_80146C94(lbl_80269210 + 0x1E3) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x1F1) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x1FF) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x20D) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x21B) != -1
        || (s8)fn_80146C94(lbl_80269210 + 0x22B) != -1) {
        flag = 1;
    } else {
        flag = 0;
    }
    if (flag == 1) {
        fn_8000C188(arg0);
    }
}

#pragma optimization_level 1
#pragma cplusplus on
extern "C" void fn_8002DA30(void)
{
    void *fn_8014D8FC(void *);
    u8 fn_80146AE4(void);
    void fn_801481CC(void *, s32);
    u32 fn_8000BCA4(void *);
    s32 fn_80015680(void *);
    void *fn_8014CA54(void *, s32);
    void *fn_80234198(void *, void *);
    u8 fn_800BDD08(void *, void *, void *);
    s32 fn_802342B8(s32, void *);
    void fn_80148980(void *, s32);
    void fn_8014832C(s32, void *, s32, s32);
    s8 fn_80146C94(void *);
    s8 fn_80146BE4(void *);
    void fn_80148888(void *, s32);
    void fn_801487D0(void *, s32);
    void fn_8014876C(void *, s32, s32);
    extern u8 lbl_80330708[];
    extern u8 lbl_80269210[];
    extern s32 lbl_80367254;
    extern s32 lbl_80367250;
    extern u8 lbl_802CA264[];

    struct Obj {
        void *unk0;
        u8 pad[4];
        virtual u8 v0() = 0;
        u8 flag;
        u8 pad2[0x1F];
        u16 unk2C;
        u16 unk2E;
    };
    extern Obj lbl_8032FF08;

    void *str;
    Obj *obj;
    void *ctx;
    void *base;
    u8 ok;
    s8 idx;
    u8 any;
    s32 slot;
    s32 timer;

    str = 0;
    ctx = fn_8014D8FC(lbl_80330708);
    if (fn_80146AE4() != 0) {
        fn_801481CC(lbl_80269210 + 0x1E3, 0x190);
        fn_801481CC(lbl_80269210 + 0x1F1, 0x190);
        fn_801481CC(lbl_80269210 + 0x1FF, 0x190);
        fn_801481CC(lbl_80269210 + 0x20D, 0x190);
        fn_801481CC(lbl_80269210 + 0x21B, 0x190);
        fn_801481CC(lbl_80269210 + 0x22B, 0x190);
        return;
    }
    if (fn_8000BCA4(lbl_80269210 + 0x23B) != 0) {
        timer = 0xA;
        lbl_80367254 = timer;
        str = lbl_80269210 + 0x246;
    } else if ((timer = lbl_80367254) > 0) {
        lbl_80367254 = timer - 1;
        return;
    } else if (fn_80015680(lbl_802CA264 + 0xC) >= 1
        || (slot = *(u8 *)((u8 *)ctx + 0x3C), slot == 1)
        || (slot >= 9 && slot <= 0x1F)
        || slot == 0x33
        || fn_80234198(fn_8014CA54(lbl_80330708, 0), lbl_80269210 + 0x251) != 0
        || fn_80234198(fn_8014CA54(lbl_80330708, 1), lbl_80269210 + 0x251) != 0
        || fn_80234198(fn_8014CA54(lbl_80330708, 0), lbl_80269210 + 0x256) != 0
        || fn_80234198(fn_8014CA54(lbl_80330708, 1), lbl_80269210 + 0x256) != 0
        || fn_80234198(fn_8014CA54(lbl_80330708, 0), lbl_80269210 + 0x25B) != 0
        || fn_80234198(fn_8014CA54(lbl_80330708, 1), lbl_80269210 + 0x25B) != 0) {
        str = *(void **)((u8 *)ctx + 0x10);
    } else {
        str = lbl_80269210 + 0x260;
    }

    base = lbl_80330708;
    if (fn_800BDD08((u8 *)base + 0xB4, lbl_80269210 + 0x26D, base) == 0) {
        ok = 0;
        obj = &lbl_8032FF08;
        if (obj->flag & 1) {
            if (obj->v0()) {
                ok = 1;
            }
        }
        if (ok == 0) {
            lbl_80367250 = 0;
            fn_8014832C(0, str, 0x64, 1);
            return;
        }
        if (fn_802342B8(*(s32 *)obj->unk0, str) != 0
            && obj->unk2C > obj->unk2E) {
            fn_80148980(obj, 0x3E8);
            return;
        }
    }

    idx = fn_80146C94(str);
    if (idx != -1) {
        obj = (Obj *)((u8 *)&lbl_8032FF08 + (u8)idx * 0x30);
        if (fn_80146C94(lbl_80269210 + 0x1E3) != -1
            || fn_80146C94(lbl_80269210 + 0x1F1) != -1
            || fn_80146C94(lbl_80269210 + 0x1FF) != -1
            || fn_80146C94(lbl_80269210 + 0x20D) != -1
            || fn_80146C94(lbl_80269210 + 0x21B) != -1
            || fn_80146C94(lbl_80269210 + 0x22B) != -1) {
            any = 1;
        } else {
            any = 0;
        }
        if ((u8)any == 1
            || fn_80146BE4(lbl_80269210 + 0x279) != -1
            || fn_80146BE4(lbl_80269210 + 0x28A) != -1) {
            if (lbl_80367250 == 0) {
                fn_80148888(obj, 0xC8);
                lbl_80367250 = 1;
            }
        } else if (lbl_80367250 == 1) {
            fn_801487D0(obj, 0x3E8);
            fn_8014876C(obj, 0x64, 0x3E8);
            lbl_80367250 = 0;
        }
    }
}
#pragma cplusplus reset
#pragma optimization_level reset

void fn_8002DEB4(s32 arg0) {
    extern u16 lbl_80269210[];

    fn_801481CC((u8 *)lbl_80269210 + 0x1e3, arg0);
    fn_801481CC((u8 *)lbl_80269210 + 0x1f1, arg0);
    fn_801481CC((u8 *)lbl_80269210 + 0x1ff, arg0);
    fn_801481CC((u8 *)lbl_80269210 + 0x20d, arg0);
    fn_801481CC((u8 *)lbl_80269210 + 0x21b, arg0);
    fn_801481CC((u8 *)lbl_80269210 + 0x22b, arg0);
}

void fn_8002DF54(void) {
    M2C_UNK fn_80147188(M2C_UNK);
    extern s8 lbl_80367AEC;
    extern s8 lbl_80367AEE;
    extern s8 lbl_80367AF6;
    fn_80147188(0);
    lbl_80367AEC = 0x64;
    lbl_80367AEE = 0x64;
    lbl_80367AF6 = 0;
}

void fn_8002E0D0(void) {
    void fn_80006220(s32);
    void fn_80015320(s32, void *);
    void *fn_80016BDC(void *);
    void fn_80016C58(void);
    void fn_800381EC(void *, s8);
    s32 fn_8003B2D0(void *);
    void fn_8003BBD4(void *, s32);
    void fn_8003C1B4(void *);
    void fn_8003D68C(void *, s32);
    void fn_8003EA24(void *, u8, u8);
    void fn_80104410(void *);
    void fn_8014D2B0(void *, u8);
    void fn_8014DA88(void *, s32);
    void fn_801E3400(void *, u8);
    extern u8 lbl_80330708[];
    extern u8 lbl_802B14E4[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_80269210[];
    extern u8 lbl_80331FB8[];
    u8 sp10[8];
    u8 sp8[8];

    if ((lbl_80330708[0x9F] >> 3) & 1) {
        fn_80006220(0x20);
        return;
    }
    if (lbl_80330708[0x10] == 0x1C) {
        s32 i;
        u8 *unit;
        void *linked;
        u32 flags;

        fn_80015320(4, sp8);
        i = 1;
        do {
            if ((u8)i != 0) {
                unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)(unit + 0x188) != 0
                && sp8[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0) {
                flags = *(u32 *)(unit + 0x1A0);
                if ((flags & 2) && !(flags & 0x100000)) {
                    linked = *(void **)(unit + 0x194);
                    fn_8003EA24(unit, unit[0x19E], unit[0x19F]);
                    if (linked != NULL) {
                        *(u32 *)((u8 *)linked + 0x1A0) &= ~1;
                    }
                }
                flags = *(u32 *)(unit + 0x1A0);
                *(u32 *)(unit + 0x1A0) = flags & 0xFF88C7FE;
                fn_80104410(unit + 0x1A4);
                fn_800381EC(unit, (s8)fn_8003B2D0(unit));
                fn_8003BBD4(unit, 0);
                fn_8003C1B4(unit);
            }
            i += 1;
        } while (i <= 0x9F);
        fn_8014DA88(lbl_80330708 + 0x3C4, 1);
        *(s16 *)(lbl_80330708 + 0x12) = 1;
        lbl_80330708[0x11] = 0;
        fn_8014D2B0(lbl_80330708, (u8)(lbl_80330708[0x10] + 1));
        lbl_80330708[0x54] = 4;
        return;
    }
    {
        void *p;
        void *linked;
        u32 flags;

        p = *(void **)(lbl_802CA264 + 0x40);
        while (p != NULL) {
            flags = *(u32 *)((u8 *)p + 0x1A0);
            linked = *(void **)((u8 *)p + 0x180);
            if ((flags & 0x4000) && (flags & 0x10000)) {
                fn_8003D68C(p, 0);
            }
            p = linked;
        }
        p = fn_80016BDC(lbl_80269210 + 0x29C);
        if (p != NULL) {
            fn_8003D68C(p, 0);
        }
    }
    {
        s32 i;
        u8 *unit;
        void *linked;
        u32 flags;

        fn_80015320(4, sp10);
        i = 1;
        do {
            if ((u8)i != 0) {
                unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
            } else {
                unit = NULL;
            }
            if (*(u32 *)(unit + 0x188) != 0
                && sp10[*(u8 *)(*(u8 **)(unit + 0x190) + 8)] != 0) {
                flags = *(u32 *)(unit + 0x1A0);
                if ((flags & 2) && !(flags & 0x100000)) {
                    linked = *(void **)(unit + 0x194);
                    fn_8003EA24(unit, unit[0x19E], unit[0x19F]);
                    if (linked != NULL) {
                        *(u32 *)((u8 *)linked + 0x1A0) &= ~1;
                    }
                }
                flags = *(u32 *)(unit + 0x1A0);
                *(u32 *)(unit + 0x1A0) = flags & 0xFF88C7FE;
                fn_80104410(unit + 0x1A4);
                fn_800381EC(unit, (s8)fn_8003B2D0(unit));
                fn_8003BBD4(unit, 0);
                fn_8003C1B4(unit);
            }
            i += 1;
        } while (i <= 0x9F);
    }
    fn_80016C58();
    fn_8014DA88(lbl_80330708 + 0x3C4, 0);
    fn_8014D2B0(lbl_80330708, (u8)(lbl_80330708[0x10] + 1));
    lbl_80330708[0x54] = 4;
    if (lbl_80330708[0x10] == 0x20) {
        fn_801E3400(lbl_80331FB8, lbl_80330708[0x51C]);
    }
}

void fn_8002E408(s32 arg0) {
    void fn_800AE3DC(void);
    extern u8 lbl_80330708[];

    if (lbl_80330708[lbl_80330708[0x11] + 0x14] != 0) {
        fn_800AE3DC();
    }
}

void fn_8002E444(void) {
    u8 fn_80105BC0(void *, s32);
    void fn_8014CBD8(void *, f32, f32);
    extern struct {
        void *head;
        s32 unk4;
        s32 unk8;
    } lbl_802CA264[];
    extern u8 lbl_80330708[];
    void *p;

    if (lbl_80330708[0x11] == 0 && !((lbl_80330708[0x9E] >> 6) & 1)) {
        for (p = lbl_802CA264[lbl_80330708[0x11]].head; p != NULL; p = *(void **)((u8 *)p + 0x184)) {
            if (fn_80105BC0((u8 *)p + 0x1BC, 0)) {
                break;
            }
        }
        if (p != NULL) {
            fn_8014CBD8(lbl_80330708, (s8)*((u8 *)p + 0x19E), (s8)*((u8 *)p + 0x19F));
        }
    }
}

void fn_8002E510(void) {
    u8 fn_80105BC0(void *, M2C_UNK);
    void fn_8014CBD8(void *, f32, f32);
    extern struct {
        void *head;
        s32 unk4;
        s32 unk8;
    } lbl_802CA264[];
    extern u8 lbl_80330708[];
    void *p;

    for (p = lbl_802CA264[0].head; p != NULL; p = M2C_FIELD(p, void **, 0x184)) {
        if (fn_80105BC0((u8 *)p + 0x1BC, 0)) {
            break;
        }
    }
    if (p != NULL) {
        fn_8014CBD8(lbl_80330708, M2C_FIELD(p, s8 *, 0x19E), M2C_FIELD(p, s8 *, 0x19F));
    }
}

void fn_8002E5B4(s32 arg0) {
    u8 fn_8001F4CC(void *, s8, s8);
    void fn_8000C070(s32, M2C_UNK);
    extern struct {
        void *head;
        s32 unk4;
        s32 unk8;
    } lbl_802CA264[];
    extern u8 lbl_80330708[];
    extern u8 lbl_802CA518[];
    void *p;
    void *next;

    p = lbl_802CA264[lbl_80330708[0x11]].head;
    while (p != NULL) {
        next = M2C_FIELD(p, void **, 0x184);
        if (fn_8001F4CC(lbl_802CA518, M2C_FIELD(p, s8 *, 0x19E), M2C_FIELD(p, s8 *, 0x19F))) {
            return;
        }
        p = next;
    }
    fn_8000C070(arg0, 5);
}

void fn_8002E648(void) {
    M2C_UNK fn_8014D3B4(void *);
    extern u8 lbl_80330708[];
    fn_8014D3B4(lbl_80330708);
}

void fn_8002E670(s32 arg0) {
    void *fn_8014C5A8(void *, u8);
    void fn_800FC600(s32);
    void fn_800FC63C(s32);
    extern u8 lbl_80330708[];
    u8 *base;
    u8 *table;
    void *ret;
    s32 idx;

    base = lbl_80330708;
    table = base + 0x14;
    idx = base[0x11];
    if (table[idx] == 0) {
        return;
    }
    ret = fn_8014C5A8(base, (u8)idx);
    idx = base[0x11];
    if (idx == 3) {
        goto case3;
    }
    if (idx >= 3) {
        goto end;
    }
    if (idx == 0) {
        goto case0;
    }
    if (idx >= 0) {
        goto case12;
    }
    goto end;
case0:
    fn_800FC600(arg0);
    goto end;
case3:
    if (ret != NULL) {
        if (*(u8 *)ret == 1) {
            fn_800FC63C(arg0);
        } else {
            fn_800FC600(arg0);
        }
    }
    goto end;
case12:
    if (table[idx] == 2) {
        fn_800FC63C(arg0);
    }
end:
    return;
}

void fn_8002E738(s32 arg0) {
    M2C_UNK fn_8000CAA0(void *, s32);
    extern u8 lbl_80330708[];
    extern u8 lbl_80284AC8[];
    if (lbl_80330708[lbl_80330708[0x11] + 0x14] == 1) {
        fn_8000CAA0(lbl_80284AC8, arg0);
    }
}

void fn_8002E880(void) {
    void fn_80015320(s32, u8 *);
    void fn_8003B69C(void *);
    void fn_8010FBD4(void *);
    extern u8 lbl_802B14E4[];
    extern u8 lbl_80330708[];
    extern u8 lbl_8032BB58[];
    u8 sp8[8];
    s32 i;
    u8 *unit;

    fn_80015320(0, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if (*(u32 *)(unit + 0x188) != 0) {
            if (sp8[(*(u8 **)(unit + 0x190))[8]] != 0) {
                fn_8003B69C(unit);
            }
        }
        i += 1;
    } while (i <= 0x9F);
    if (lbl_80330708[0x11] == 0) {
        fn_8010FBD4(lbl_8032BB58);
    }
}

s32 fn_8002EA74(void) {
    return 0;
}

void fn_8002EA7C(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    f32 fn_800067BC(s32, f32, f32, f32, f32);
    s32 var_r31;

    *arg2 = 0;
    var_r31 = *arg0;
    var_r31 = var_r31 + 1;
    if (var_r31 > 8) {
        var_r31 = 8;
    }
    *arg1 = (s32)fn_800067BC(6, -64.0f, 0.0f, (f32)var_r31, 8.0f);
    *arg3 = (s32)fn_800067BC(0, 0.0f, 255.0f, (f32)var_r31, 8.0f);
}

#pragma cplusplus on
extern "C" void *fn_8002EB54(void *arg0, u32 arg1) {
    void *fn_8000CAA0(void *);
    void *fn_8000CAF0(void *, s32);
    void fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_80285028[];
    extern s32 lbl_802EF4E0[];
    extern u8 lbl_80330708[];
    extern f32 lbl_80368E00;
    struct Obj {
        u8 pad[4];
        virtual void v0(void *) = 0;
        virtual void v1(void *) = 0;
        virtual void v2(void *) = 0;
        virtual void v3(void *) = 0;
        virtual void v4(void *) = 0;
        virtual void v5(void *) = 0;
    };
    void *obj;
    s32 *base;
    u32 i;
    s32 *walk;
    s32 n;
    u32 pm;
    u32 qm;
    u8 *p;
    u8 *q;
    void *found;
    u32 tmp;
    u32 temp0;
    u32 temp1;
    f32 fx;
    f32 fy;

    if (arg1 != 0U) {
        obj = fn_8000CAA0(lbl_80285028);
    } else {
        obj = fn_8000CAF0(lbl_80285028, 3);
    }
    ((u8 *)obj)[0x48] = (u8)(s32)*(f32 *)(lbl_80330708 + 0x524);
    base = lbl_802EF4E0;
    i = 0;
    walk = base;
    ((u8 *)obj)[0x49] = (u8)(s32)*(f32 *)(lbl_80330708 + 0x528);
    for (n = base[0]; i < n; n = base[0]) {
        pm = (i + n - 1) % n;
        qm = (i + 1) % n;
        i += 1;
        tmp = pm * 0x14;
        tmp = (u32)base + tmp;
        tmp = tmp + 8;
        *(void **)((u8 *)walk + 0xC) = (void *)tmp;
        tmp = qm * 0x14;
        tmp = (u32)base + tmp;
        tmp = tmp + 8;
        *(void **)((u8 *)walk + 0x10) = (void *)tmp;
        walk = (s32 *)((u8 *)walk + 0x14);
    }
    *(void **)((u8 *)obj + 0x30) = arg0;
    p = (u8 *)lbl_802EF4E0 + 8;
    if (lbl_802EF4E0[0] <= 0) {
        p = (u8 *)0;
    }
    *(void **)((u8 *)obj + 0x40) = p;
    if (p != (u8 *)0) {
        *(void **)((u8 *)obj + 0x44) = p;
    }
    q = (u8 *)lbl_802EF4E0 + 8;
    n = lbl_802EF4E0[0];
    if (n <= 0) {
        q = (u8 *)0;
    }
    p = (u8 *)lbl_802EF4E0 + 8;
    if (n <= 0) {
        p = (u8 *)0;
    }
    temp0 = ((u8 *)obj)[0x3E];
    fx = lbl_80368E00 + (f32)(s8)p[0];
    temp1 = ((u8 *)obj)[0x3F];
    fy = lbl_80368E00 + (f32)(s8)q[1];
    ((u8 *)obj)[0x3C] = temp0;
    ((u8 *)obj)[0x3D] = temp1;
    *(f32 *)((u8 *)obj + 0x34) = fx;
    *(f32 *)((u8 *)obj + 0x38) = fy;
    ((u8 *)obj)[0x3E] = (u8)(s32)*(f32 *)((u8 *)obj + 0x34);
    ((u8 *)obj)[0x3F] = (u8)(s32)*(f32 *)((u8 *)obj + 0x38);
    temp0 = ((u8 *)obj)[0x3E];
    if ((s8)((u8 *)obj)[0x3C] != (s8)temp0 || (s8)((u8 *)obj)[0x3D] != (s8)((u8 *)obj)[0x3F]) {
        found = map_find_xy(base, (s8)temp0, (s8)((u8 *)obj)[0x3F]);
        *(void **)((u8 *)obj + 0x40) = found;
        if (found != (void *)0) {
            *(void **)((u8 *)obj + 0x44) = found;
        }
    }
    q = (u8 *)lbl_802EF4E0 + 8;
    n = lbl_802EF4E0[0];
    if (n <= 0) {
        q = (u8 *)0;
    }
    p = (u8 *)lbl_802EF4E0 + 8;
    if (n <= 0) {
        p = (u8 *)0;
    }
    fn_8014CBD8(lbl_80330708, (f32)(s8)q[0], (f32)(s8)p[1]);
    ((Obj *)arg0)->v1(obj);
    *(s32 *)arg0 = 0;
    ((Obj *)arg0)->v5(obj);
    lbl_80330708[0x51D] = 0x10;
    return obj;
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_8002EEA8(void *arg0) {
    struct Obj {
        u8 pad[4];
        virtual void v0(void *) = 0;
        virtual void v1(void *) = 0;
        virtual void v2(void *) = 0;
        virtual void v3(void *) = 0;
        virtual void v4(void *) = 0;
        virtual void v5(void *) = 0;
        virtual void v6(void *) = 0;
        virtual void v7(void *) = 0;
        virtual void v8(void *) = 0;
        virtual void v9(void *) = 0;
    };
    ((Obj *)*(void **)((u8 *)arg0 + 0x30))->v9(arg0);
}
#pragma cplusplus reset
#pragma cplusplus on
extern "C" void fn_8002EEDC(void *arg0) {
    struct Obj {
        u8 pad[4];
        virtual void v0(void *) = 0;
        virtual void v1(void *) = 0;
        virtual void v2(void *) = 0;
    };
    ((Obj *)*(void **)((u8 *)arg0 + 0x30))->v2(arg0);
}
#pragma cplusplus reset

void fn_8002F0B0(void) {
    M2C_UNK fn_800F20E0();
    fn_800F20E0();
}

#pragma cplusplus on
extern "C" void fn_8002F0D0(void *arg0, void *arg1) {
    void fn_800F214C(void);
    void fn_8014CBD8(void *, f32, f32);
    void fn_801475FC(void *, s32);
    extern s32 *lbl_80367240;
    extern u8 lbl_80330708[];
    extern s32 lbl_802EF4E0[];
    extern f32 lbl_80368E08;
    extern u8 lbl_802694B8[];
    struct Obj {
        u8 pad[4];
        virtual void v0(void *) = 0;
        virtual void v1(void *) = 0;
        virtual void v2(void *) = 0;
        virtual void v3(void *) = 0;
        virtual void v4(void *) = 0;
        virtual void v5(void *) = 0;
    };
    void *found;
    void *var_r31;
    void *cur;
    s32 flags;
    u8 changed;
    u8 temp_r4;
    f32 fa;
    f32 fb;
    u8 t0;
    u8 t1;

    if ((lbl_80367240[1] & 0xF) == 0) {
        fn_800F214C();
        t0 = ((u8 *)arg1)[0x3E];
        fa = *(f32 *)(lbl_80330708 + 0x538);
        fb = *(f32 *)(lbl_80330708 + 0x534);
        ((u8 *)arg1)[0x3C] = t0;
        t1 = ((u8 *)arg1)[0x3F];
        ((u8 *)arg1)[0x3D] = t1;
        *(f32 *)((u8 *)arg1 + 0x34) = fb;
        *(f32 *)((u8 *)arg1 + 0x38) = fa;
        ((u8 *)arg1)[0x3E] = (u8)(s32)*(f32 *)((u8 *)arg1 + 0x34);
        ((u8 *)arg1)[0x3F] = (u8)(s32)*(f32 *)((u8 *)arg1 + 0x38);
        temp_r4 = ((u8 *)arg1)[0x3E];
        if ((s8)((u8 *)arg1)[0x3C] != (s8)temp_r4 ||
            (s8)((u8 *)arg1)[0x3D] != (s8)((u8 *)arg1)[0x3F]) {
            found = map_find_xy(lbl_802EF4E0, temp_r4, ((u8 *)arg1)[0x3F]);
            *(void **)((u8 *)arg1 + 0x40) = found;
            if (found != NULL) {
                *(void **)((u8 *)arg1 + 0x44) = found;
            }
        }
    } else {
        flags = lbl_80367240[3];
        var_r31 = NULL;
        cur = *(void **)((u8 *)arg1 + 0x44);
        if (flags & 9) {
            var_r31 = *(void **)((u8 *)cur + 4);
        }
        if (flags & 6) {
            var_r31 = *(void **)((u8 *)cur + 8);
        }
        if (var_r31 == NULL) {
            goto end;
        }
        if (var_r31 != cur) {
            goto do_body;
        }
        goto end;
    do_body:
        {
            s8 c0 = ((u8 *)var_r31)[0];
            s8 c1 = ((u8 *)var_r31)[1];
            t0 = ((u8 *)arg1)[0x3E];
            ((u8 *)arg1)[0x3C] = t0;
            t1 = ((u8 *)arg1)[0x3F];
            ((u8 *)arg1)[0x3D] = t1;
            *(f32 *)((u8 *)arg1 + 0x34) = lbl_80368E08 + (f32)c0;
            *(f32 *)((u8 *)arg1 + 0x38) = lbl_80368E08 + (f32)c1;
        }
        ((u8 *)arg1)[0x3E] = (u8)(s32)*(f32 *)((u8 *)arg1 + 0x34);
        ((u8 *)arg1)[0x3F] = (u8)(s32)*(f32 *)((u8 *)arg1 + 0x38);
        temp_r4 = ((u8 *)arg1)[0x3E];
        if ((s8)((u8 *)arg1)[0x3C] != (s8)temp_r4 ||
            (s8)((u8 *)arg1)[0x3D] != (s8)((u8 *)arg1)[0x3F]) {
            found = map_find_xy(lbl_802EF4E0, temp_r4, ((u8 *)arg1)[0x3F]);
            *(void **)((u8 *)arg1 + 0x40) = found;
            if (found != NULL) {
                *(void **)((u8 *)arg1 + 0x44) = found;
            }
        }
        fn_8014CBD8(lbl_80330708, (f32)(s8)((u8 *)var_r31)[0], (f32)(s8)((u8 *)var_r31)[1]);
        fn_801475FC(lbl_802694B8 + 0x10C, 0x64);
        *(void **)((u8 *)arg1 + 0x40) = var_r31;
        if (var_r31 != NULL) {
            *(void **)((u8 *)arg1 + 0x44) = var_r31;
        }
    }

    changed = 0;
    if ((s8)((u8 *)arg1)[0x3E] != (s8)((u8 *)arg1)[0x3C] ||
        (s8)((u8 *)arg1)[0x3F] != (s8)((u8 *)arg1)[0x3D]) {
        changed = 1;
    }
    if (changed) {
        ((Obj *)arg0)->v5(arg1);
    }
end:
    *(s32 *)arg0 = 0;
}
#pragma cplusplus reset

s32 fn_8002F468(void) {
    extern u8 lbl_80330708[];
    lbl_80330708[0x51D] = 0xF;
    return 9;
}

s32 fn_8002F480(void *arg0, void *arg1) {
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802B14E4[];
    u8 *p = *(u8 **)((u8 *)arg1 + 0x40);
    u8 b0;
    u8 b1;
    u8 id;

    if (p == NULL) {
        return 0x10;
    }
    b1 = p[1];
    b0 = p[0];
    lbl_802EF4C8[0xF] = b0;
    lbl_802EF4C8[0x10] = b1;
    id = p[2];
    if (id != 0) {
        *(void **)(lbl_802EF4C8 + 4) = (id != 0) ? lbl_802B14E4 + (id - 1) * 0x280 : NULL;
    }
    return 5;
}

void fn_8002F4EC(void *arg0, void *arg1) {
    void fn_8004A1F0(void *);
    void fn_8014CBD8(void *, f32, f32);
    extern u8 lbl_80330708[];

    fn_8004A1F0(arg0);
    fn_8014CBD8(lbl_80330708, (f32)*(s8 *)((u8 *)arg1 + 0x48), (f32)*(s8 *)((u8 *)arg1 + 0x49));
}

void fn_8002F564(void) {
    void fn_80022DAC(void *, s32, s32);
    void fn_8004A224(void);
    extern u8 lbl_802CA518[];
    extern s32 lbl_802EF4E0[];
    s32 *p;
    s32 i;
    s32 limit;
    s32 n;
    u8 *entry;
    s8 x;
    s8 y;

    fn_80022DAC(lbl_802CA518, 5, -1);
    fn_80022DAC(lbl_802CA518, 8, 0);

    p = lbl_802EF4E0;
    i = 0;
    limit = lbl_802EF4E0[0];
    n = limit;
    if (limit > 0) {
        do {
            if (i >= limit) {
                entry = NULL;
            } else {
                entry = (u8 *)p + 8;
            }
            y = (s8)entry[1];
            p = (s32 *)((u8 *)p + 0x14);
            x = (s8)entry[0];
            i += 1;
            *(u16 *)(lbl_802CA518 + ((x + (y << 6)) * 2) + 0xC18E) = 1;
        } while (--n != 0);
    }
    fn_8004A224();
}

void fn_8002F61C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}

void *fn_8002F62C(s32 *arg0) {
    s32 idx = arg0[1];
    if (idx >= *arg0) {
        return NULL;
    }
    return (void *)((char *)arg0 + idx * 0x14 + 8);
}

void *fn_8002F658(s32 *arg0, s32 arg1) {
    if (arg1 >= (s32)*arg0) {
        return NULL;
    }
    return (void *)((char *)arg0 + arg1 * 0x14 + 0x8);
}

void *fn_8002F680(s32 *arg0, s8 arg1, s8 arg2) {
    s32 *p;
    s32 i;
    s32 n;

    n = *arg0;
    p = arg0;
    for (i = 0; i < n; p = (s32 *)((char *)p + 0x14), i++) {
        if (arg1 == *(s8 *)((char *)p + 8) && arg2 == *(s8 *)((char *)p + 9)) {
            return (void *)((char *)arg0 + i * 0x14 + 8);
        }
    }
    return NULL;
}

void fn_8002F6E8(void *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    s32 *m = (s32 *)arg0;
    s32 idx = *m;
    u8 *p;
    *m = idx + 1;
    p = (u8 *)arg0 + (idx * 0x14) + 8;
    p[0] = arg1;
    p[1] = arg2;
    p[2] = arg3;
    p[3] = arg4;
    *((s8 *)((u8 *)arg0 + (*m * 0x14) + 8)) = -1;
}

void fn_8002F728(void *arg0) {
    *(s32*)((char*)arg0 + 0x0) = 0;
    *(s32*)((char*)arg0 + 0x4) = 0;
    *(s8*)((char*)arg0 + 0x8) = -1;
}

#pragma dont_inline on
u32 fn_8002F740(u32 arg0) {
    extern u8 lbl_802B14E4[101760];
    u8 id = ((u8 *)arg0)[2];
    if (id != 0) {
        return (u32)&lbl_802B14E4[(id - 1) * 0x280];
    }
    return 0;
}
#pragma dont_inline reset

void fn_8002F76C(void) {

}

void fn_8002F770(void) {

}

void fn_8002F774(void) {

}

void *fn_8002F778(void) {
    extern u16 lbl_802694B8[];
    return (char *)lbl_802694B8 + 0xDE;
}

void fn_8002F788(s32 arg0) {
    void *fn_80019E04(void *);
    void fn_8002C034(void *, void *);
    void *fn_8002EB54(void *, s32);
    extern u8 lbl_802695F0[];
    extern u8 lbl_80285050[];
    extern u8 lbl_802853B4[];
    extern u8 lbl_802853EC[];
    extern void *lbl_802EF4C8[];
    extern u8 lbl_802EFDAC[];
    extern s8 lbl_80367281;
    void *temp;

    temp = lbl_802EF4C8[0];
    fn_8002C034(temp, fn_80019E04(lbl_802695F0 + 0xE5));
    if (lbl_80367281 == 0) {
        *(void **)(lbl_802EFDAC + 4) = lbl_80285050;
        *(void **)(lbl_802EFDAC + 4) = lbl_802853EC;
        *(void **)(lbl_802EFDAC + 4) = lbl_802853B4;
        lbl_80367281 = 1;
    }
    fn_8002EB54(lbl_802EFDAC, arg0);
}

void fn_8002F82C(s32 arg0) {
    void fn_8004A224(void);
    void fn_8000CAA0(void *, s32);
    void fn_8002BD44(void *, s32);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_802850C0[];
    extern u8 lbl_80367280;
    extern u8 lbl_80285050[];
    extern u8 lbl_802EFDA0[];
    extern u8 lbl_802853EC[];
    extern u8 lbl_8028537C[];
    void **p = lbl_802EF4C8;

    if (((u8 *)p)[8] == 0x31) {
        fn_8004A224();
        fn_8000CAA0(lbl_802850C0, arg0);
        return;
    }
    fn_8002BD44(p[0], 0);
    if ((s8)lbl_80367280 == 0) {
        *(void **)(lbl_802EFDA0 + 4) = lbl_80285050;
        *(void **)(lbl_802EFDA0 + 4) = lbl_802853EC;
        *(void **)(lbl_802EFDA0 + 4) = lbl_8028537C;
        lbl_80367280 = 1;
    }
    fn_8002EB54(lbl_802EFDA0, arg0);
}

void fn_8002FA54(void) {
    void fn_8002BD44(void *, s32);
    void fn_8002F658(void *, s32);
    s32 fn_8002F740(void);
    void fn_8014CB14(void *, s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_802EF4E0[];
    extern u8 lbl_80330708[];
    s32 *p;
    s32 tmp;

    fn_8002BD44(*(void **)lbl_802EF4C8, 0);
    p = (s32 *)lbl_802EF4E0;
    if (*p != 0) {
        fn_8002F658(p, 0);
        tmp = fn_8002F740();
        fn_8014CB14(lbl_80330708, tmp);
    }
}

void fn_8002FAB0(void *arg0) {
    void fn_801475FC(void *, s32);
    void fn_8000C070(void *, s32);
    extern void *lbl_80367240;
    extern f32 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802695F0[];
    extern u8 lbl_8036723A;
    s32 temp_r3;
    s32 pressed;
    f32 f0;
    f32 f1;
    u16 *cell;

    temp_r3 = *(s32 *)((u8 *)lbl_80367240 + 4);
    pressed = temp_r3 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r3);
    if (pressed & 0x100) {
        f0 = lbl_80330708[0x528 / 4];
        f1 = lbl_80330708[0x524 / 4];
        cell = (u16 *)(lbl_802CA518 + 0xC18E);
        if (cell[(s8)(s32)f1 + ((s8)(s32)f0 << 6)] != 0) {
            fn_801475FC(lbl_802695F0 + 0xFC, 0x64);
            lbl_8036723A = 5;
            fn_8000C070(arg0, 0x63);
            return;
        }
    }
    if (pressed & 0x200) {
        fn_801475FC(lbl_802695F0 + 0x10C, 0x64);
        lbl_8036723A = 9;
        fn_8000C070(arg0, 0x63);
    }
}

void fn_8002FBA8(s32 arg0) {
    void *fn_80037D54(void *);
    void fn_8002BEFC(void *, void *);
    void fn_8002C034(void *, void *);
    void fn_8002EB54(void *, s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80367275;
    extern u8 lbl_80285050[];
    extern u8 lbl_802EFD88[];
    extern u8 lbl_802853EC[];

    if (lbl_802EF4C8[8] == 0x27) {
        fn_8002BEFC(*(void **)lbl_802EF4C8, *(void **)fn_80037D54(*(void **)lbl_802EF4C8));
    } else {
        fn_8002C034(*(void **)lbl_802EF4C8, *(void **)fn_80037D54(*(void **)lbl_802EF4C8));
    }
    if ((s8)lbl_80367275 == 0) {
        *(void **)(lbl_802EFD88 + 4) = lbl_80285050;
        *(void **)(lbl_802EFD88 + 4) = lbl_802853EC;
        lbl_80367275 = 1;
    }
    fn_8002EB54(lbl_802EFD88, arg0);
}

#pragma dont_inline on
void fn_8002FC64(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *fn_8018D900(s32);
    void fn_8005C8B4(void *);
    u8 fn_8005BA10(void *);
    void fn_8006EEFC(s32 *, void *);
    void fn_8006EDA0(s32 *);
    extern u8 lbl_80330708[];
    extern u8 lbl_802695F0[];
    s32 sp6C;
    s32 sp68;

    sp6C = *fn_8018D900(1);
    if (arg0 != 0 && ((lbl_80330708[0x9D] >> 6) & 3) != 2) {
        fn_8005C8B4(lbl_802695F0 + 0x11C);
        if (fn_8005BA10(lbl_802695F0 + 0x11C) != 0) {
            fn_8006EEFC(&sp68, lbl_802695F0 + 0x11C);
            (void)arg1;
            (void)arg2;
            (void)arg3;
            (void)sp6C;
                          fn_8006EDA0(&sp68);
          }
      }
  }
  #pragma dont_inline reset
  
  void fn_80031508(s32 arg0) {
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_802EFCB8[];
    void fn_80029C08(s32);
    void fn_8002EB54(void *, s32);

    fn_80029C08(*(s32 *)lbl_802EF4C8);
    fn_8002EB54(lbl_802EFCB8, arg0);
}

void fn_80031550(s32 arg0) {
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_802EFCB8[];
    void fn_80029E4C(s32);
    void fn_8002EB54(void *, s32);

    fn_80029E4C(*(s32 *)lbl_802EF4C8);
    fn_8002EB54(lbl_802EFCB8, arg0);
}

void fn_80031598(s32 arg0) {
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80285088[];

    u8 val2 = (u8)fn_8001DD04(*(s32 *)lbl_802EF4C8);
    fn_8003CE88(*(s32 *)(lbl_802EF4C8 + 4), val2);
    fn_8004A224();
    fn_8000CAA0(lbl_80285088, arg0);
}

void fn_800315F8(void) {
    void fn_8004A1F0(void *);
    void fn_8014CB14(void *, void *);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    u8 *ctx = lbl_802EF4C8;
    u8 *base = lbl_80330708;

    ctx[0xF] = (u8)(s32)*(f32 *)(base + 0x524);
    ctx[0x10] = (u8)(s32)*(f32 *)(base + 0x528);
    fn_8004A1F0(ctx);
    fn_8014CB14(lbl_80330708, *(void **)lbl_802EF4C8);
}

void fn_80031668(void *arg0) {
    void fn_801475FC(void *, s32);
    void fn_8000C070(void *, s32);
    extern void *lbl_80367240;
    extern f32 lbl_80330708[];
    extern u8 lbl_802CA518[];
    extern u8 lbl_802695F0[];
    extern u8 lbl_8036723A;
    s32 temp_r3;
    s32 pressed;
    f32 f0;
    f32 f1;
    s16 *cell;

    temp_r3 = *(s32 *)((u8 *)lbl_80367240 + 4);
    pressed = temp_r3 & (*(s32 *)((u8 *)lbl_80367240 + 8) ^ temp_r3);
    if (pressed & 0x100) {
        f0 = lbl_80330708[0x528 / 4];
        f1 = lbl_80330708[0x524 / 4];
        cell = (s16 *)(lbl_802CA518 + 0x610e);
        if (cell[(s8)(s32)f1 + ((s8)(s32)f0 << 6)] >= 0) {
            fn_801475FC(lbl_802695F0 + 0xFC, 0x64);
            lbl_8036723A = 5;
            fn_8000C070(arg0, 0x63);
            return;
        }
    }
    if (pressed & 0x200) {
        lbl_8036723A = 9;
        fn_8000C070(arg0, 0x63);
    }
}

void fn_80031748(s32 arg0) {
    void **fn_800285C0(void *);
    void fn_8002A084(void *, void *, void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_8036726E;
    extern u8 lbl_80285050[];
    extern u8 lbl_80285348[];
    extern u8 lbl_802EFD7C[];
    void **ret;

    ret = fn_800285C0(lbl_802EF4C8);
    fn_8002A084(lbl_802EF4C8[0], *ret, lbl_802EF4C8);
    if ((s8)lbl_8036726E == 0) {
        *(void **)(lbl_802EFD7C + 4) = lbl_80285050;
        *(void **)(lbl_802EFD7C + 4) = lbl_80285348;
        lbl_8036726E = 1;
    }
    fn_8002EB54(lbl_802EFD7C, arg0);
}

void fn_800317D4(s32 arg0) {
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_802EFCB8[];
    s32 *fn_800285C0(void *);
    void fn_8002A8CC(s32, s32);
    void fn_8002EB54(void *, s32);
    s32 *temp;

    temp = fn_800285C0(lbl_802EF4C8);
    fn_8002A8CC(*(s32 *)lbl_802EF4C8, *temp);
    fn_8002EB54(lbl_802EFCB8, arg0);
}

void fn_8003182C(s32 arg0) {
    void fn_8002A2BC(void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_8036726D;
    extern u8 lbl_80285050[];
    extern u8 lbl_80285314[];
    extern u8 lbl_802EFD70[];

    fn_8002A2BC(lbl_802EF4C8[0]);
    if ((s8)lbl_8036726D == 0) {
        *(void **)(lbl_802EFD70 + 4) = lbl_80285050;
        *(void **)(lbl_802EFD70 + 4) = lbl_80285314;
        lbl_8036726D = 1;
    }
    fn_8002EB54(lbl_802EFD70, arg0);
}

void fn_800318A8(s32 arg0) {
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_802EFCC4[];
    void fn_8002A2BC(s32);
    void fn_8002EB54(void *, s32);

    fn_8002A2BC(*(s32 *)lbl_802EF4C8);
    fn_8002EB54(lbl_802EFCC4, arg0);
}

void fn_800318F0(s32 arg0) {
    void fn_8002A63C(void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_8036726C;
    extern u8 lbl_80285050[];
    extern u8 lbl_802852E0[];
    extern u8 lbl_802EFD64[];

    fn_8002A63C(lbl_802EF4C8[0]);
    if ((s8)lbl_8036726C == 0) {
        *(void **)(lbl_802EFD64 + 4) = lbl_80285050;
        *(void **)(lbl_802EFD64 + 4) = lbl_802852E0;
        lbl_8036726C = 1;
    }
    fn_8002EB54(lbl_802EFD64, arg0);
}

void fn_8003196C(s32 arg0) {
    void fn_8002A4F4(void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_8036726B;
    extern u8 lbl_80285050[];
    extern u8 lbl_802852E0[];
    extern u8 lbl_802EFD58[];

    fn_8002A4F4(lbl_802EF4C8[0]);
    if ((s8)lbl_8036726B == 0) {
        *(void **)(lbl_802EFD58 + 4) = lbl_80285050;
        *(void **)(lbl_802EFD58 + 4) = lbl_802852E0;
        lbl_8036726B = 1;
    }
    fn_8002EB54(lbl_802EFD58, arg0);
}

void fn_800319E8(s32 arg0) {
    void fn_8002A784(void *, u8 *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_8036726A;
    extern u8 lbl_80285050[];
    extern u8 lbl_802852E0[];
    extern u8 lbl_802EFD4C[];
    u8 sp8;

    sp8 = ((u8 *)lbl_802EF4C8)[0x13];
    fn_8002A784(lbl_802EF4C8[0], &sp8);
    if ((s8)lbl_8036726A == 0) {
        *(void **)(lbl_802EFD4C + 4) = lbl_80285050;
        *(void **)(lbl_802EFD4C + 4) = lbl_802852E0;
        lbl_8036726A = 1;
    }
    fn_8002EB54(lbl_802EFD4C, arg0);
}

void fn_80031A70(s32 arg0) {
    void fn_8002AE6C(void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_80367269;
    extern u8 lbl_80285050[];
    extern u8 lbl_802852AC[];
    extern u8 lbl_802EFD40[];

    fn_8002AE6C(lbl_802EF4C8[0]);
    if ((s8)lbl_80367269 == 0) {
        *(void **)(lbl_802EFD40 + 4) = lbl_80285050;
        *(void **)(lbl_802EFD40 + 4) = lbl_802852AC;
        lbl_80367269 = 1;
    }
    fn_8002EB54(lbl_802EFD40, arg0);
}

void fn_80031AEC(s32 arg0) {
    void **fn_800285C0(void *);
    void fn_8002AA34(void *, void *, void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_80367268;
    extern u8 lbl_80285050[];
    extern u8 lbl_80285278[];
    extern u8 lbl_802EFD34[];
    void **ret;

    ret = fn_800285C0(lbl_802EF4C8);
    fn_8002AA34(lbl_802EF4C8[0], *ret, lbl_802EF4C8);
    if ((s8)lbl_80367268 == 0) {
        *(void **)(lbl_802EFD34 + 4) = lbl_80285050;
        *(void **)(lbl_802EFD34 + 4) = lbl_80285278;
        lbl_80367268 = 1;
    }
    fn_8002EB54(lbl_802EFD34, arg0);
}

void fn_80031B78(s32 arg0) {
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_802EFCB8[];
    s32 *fn_800285C0(void *);
    void fn_8002AB9C(s32, s32);
    void fn_8002EB54(void *, s32);
    s32 *temp;

    temp = fn_800285C0(lbl_802EF4C8);
    fn_8002AB9C(*(s32 *)lbl_802EF4C8, *temp);
    fn_8002EB54(lbl_802EFCB8, arg0);
}

void fn_80031BD0(s32 arg0) {
    extern u16 lbl_802EF4C8[];
    extern u16 lbl_802EFCB8[];
    void fn_8002B0A4(s32);
    void fn_8002EB54(void *, s32);

    fn_8002B0A4(*(s32 *)lbl_802EF4C8);
    fn_8002EB54(lbl_802EFCB8, arg0);
}

void fn_80031C18(s32 arg0) {
    void fn_8002B2E8(void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_80367267;
    extern u8 lbl_80285050[];
    extern u8 lbl_80285244[];
    extern u8 lbl_80285210[];
    extern u8 lbl_802EFD28[];

    fn_8002B2E8(lbl_802EF4C8[0]);
    if ((s8)lbl_80367267 == 0) {
        *(void **)(lbl_802EFD28 + 4) = lbl_80285050;
        *(void **)(lbl_802EFD28 + 4) = lbl_80285244;
        *(void **)(lbl_802EFD28 + 4) = lbl_80285210;
        lbl_80367267 = 1;
    }
    fn_8002EB54(lbl_802EFD28, arg0);
}

void fn_80031CA0(s32 arg0) {
    void fn_8002B520(void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_80367266;
    extern u8 lbl_80285050[];
    extern u8 lbl_80285244[];
    extern u8 lbl_802851DC[];
    extern u8 lbl_802EFD1C[];

    fn_8002B520(lbl_802EF4C8[0]);
    if ((s8)lbl_80367266 == 0) {
        *(void **)(lbl_802EFD1C + 4) = lbl_80285050;
        *(void **)(lbl_802EFD1C + 4) = lbl_80285244;
        *(void **)(lbl_802EFD1C + 4) = lbl_802851DC;
        lbl_80367266 = 1;
    }
    fn_8002EB54(lbl_802EFD1C, arg0);
}

void fn_80031D28(s32 arg0) {
    void **fn_800285C0(void *);
    void fn_8002AD04(void *, void *, void *);
    s32 fn_801A3E24(void *);
    s32 fn_8003AFA0(void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_80367265;
    extern u8 lbl_80285050[];
    extern u8 lbl_802851A8[];
    extern u8 lbl_802EFD0C[];
    void **ret;
    u8 *ctx;

    ret = fn_800285C0(lbl_802EF4C8);
    fn_8002AD04(lbl_802EF4C8[0], *ret, lbl_802EF4C8);
    if ((s8)lbl_80367265 == 0) {
        *(void **)(lbl_802EFD0C + 4) = lbl_80285050;
        *(void **)(lbl_802EFD0C + 4) = lbl_802851A8;
        lbl_80367265 = 1;
    }
    ret = fn_800285C0(lbl_802EF4C8);
    ctx = lbl_802EFD0C;
    *(s32 *)(ctx + 0xC) = fn_801A3E24(*ret);
    *(s32 *)(ctx + 0xC) = *(s32 *)(ctx + 0xC) + (s8)fn_8003AFA0(lbl_802EF4C8[0]);
    fn_8002EB54(lbl_802EFD0C, arg0);
}

void fn_80031DF8(s32 arg0) {
    void fn_8002C194(void *, u8);
    void fn_8002EB54(void *, s32);
    typedef struct {
        void *unit;
        u8 unk04[6];
        u8 unk0A;
    } Ctx;
    extern Ctx lbl_802EF4C8;
    extern u8 lbl_80367264;
    extern u8 lbl_80285050[];
    extern u8 lbl_80285174[];
    extern u8 lbl_802EFD00[];

    fn_8002C194(lbl_802EF4C8.unit, lbl_802EF4C8.unk0A);
    if ((s8)lbl_80367264 == 0) {
        *(void **)(lbl_802EFD00 + 4) = lbl_80285050;
        *(void **)(lbl_802EFD00 + 4) = lbl_80285174;
        lbl_80367264 = 1;
    }
    fn_8002EB54(lbl_802EFD00, arg0);
}

void fn_80031E74(s32 arg0) {
    void fn_8002B758(void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_80367263;
    extern u8 lbl_80285050[];
    extern u8 lbl_802EFCF4[];

    fn_8002B758(lbl_802EF4C8[0]);
    if ((s8)lbl_80367263 == 0) {
        *(void **)(lbl_802EFCF4 + 4) = lbl_80285050;
        lbl_80367263 = 1;
    }
    fn_8002EB54(lbl_802EFCF4, arg0);
}

void fn_80031EE4(s32 arg0) {
    void fn_8002B89C(void *);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_80367262;
    extern u8 lbl_80285050[];
    extern u8 lbl_80285244[];
    extern u8 lbl_80285140[];
    extern u8 lbl_802EFCE8[];

    fn_8002B89C(lbl_802EF4C8[0]);
    if ((s8)lbl_80367262 == 0) {
        *(void **)(lbl_802EFCE8 + 4) = lbl_80285050;
        *(void **)(lbl_802EFCE8 + 4) = lbl_80285244;
        *(void **)(lbl_802EFCE8 + 4) = lbl_80285140;
        lbl_80367262 = 1;
    }
    fn_8002EB54(lbl_802EFCE8, arg0);
}

void fn_80031F6C(s32 arg0) {
    void fn_8002BAFC(void *, s32);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_80367261;
    extern u8 lbl_80285050[];
    extern u8 lbl_80285244[];
    extern u8 lbl_8028510C[];
    extern u8 lbl_802EFCDC[];

    fn_8002BAFC(lbl_802EF4C8[0], 2);
    if ((s8)lbl_80367261 == 0) {
        *(void **)(lbl_802EFCDC + 4) = lbl_80285050;
        *(void **)(lbl_802EFCDC + 4) = lbl_80285244;
        *(void **)(lbl_802EFCDC + 4) = lbl_8028510C;
        lbl_80367261 = 1;
    }
    fn_8002EB54(lbl_802EFCDC, arg0);
}

void fn_80031FF8(s32 arg0) {
    void fn_8002BAFC(void *, s32);
    void fn_8002EB54(void *, s32);
    extern void *lbl_802EF4C8[6];
    extern u8 lbl_80367260;
    extern u8 lbl_80285050[];
    extern u8 lbl_80285244[];
    extern u8 lbl_8028510C[];
    extern u8 lbl_802EFCD0[];

    fn_8002BAFC(lbl_802EF4C8[0], 1);
    if ((s8)lbl_80367260 == 0) {
        *(void **)(lbl_802EFCD0 + 4) = lbl_80285050;
        *(void **)(lbl_802EFCD0 + 4) = lbl_80285244;
        *(void **)(lbl_802EFCD0 + 4) = lbl_8028510C;
        lbl_80367260 = 1;
    }
    fn_8002EB54(lbl_802EFCD0, arg0);
}

#pragma cplusplus on
extern "C" void fn_8000A258(void);
extern "C" void fn_8000A248(void);
extern "C" void fn_80009D74(f32, f32, f32, f32);
extern "C" void fn_80009B8C(u8);
extern "C" void fn_80090990(void *);
extern "C" void fn_800323BC(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        fn_80090990((void *)fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)));
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_80090AA4(s32, s32);
extern "C" void fn_80032488(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        fn_80090AA4(fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)), M2C_FIELD(arg0, s32 *, 0xC));
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_80090C50(s32);
extern "C" void fn_800900F4(s32);
extern "C" void fn_8008BD90(s32, s32, s32);
extern "C" void fn_80009C0C(f32);
extern "C" void fn_80032564(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    extern f32 lbl_80368E34;
    extern u8 lbl_802EF4C8[];
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x118), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        fn_80090C50(fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)));
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_8000A248();
        fn_800900F4(M2C_FIELD(lbl_802EF4C8, s32 *, 0));
        fn_8000A258();
        fn_80009C0C(lbl_80368E34);
        fn_8000A248();
        fn_8008BD90(0x64, 0xD2, 0);
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}

#pragma cplusplus on
extern "C" void fn_800326B4(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    extern f32 lbl_80368E34;
    extern u8 lbl_802EF4C8[];
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;
    s32 alpha2;
    s32 y2;
    s32 x2;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0xB0), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        fn_800900F4(fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)));
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_8000A248();
        fn_80090C50(M2C_FIELD(lbl_802EF4C8, s32 *, 0));
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
        ((Obj *)arg0)->v0(&x2, &y2, &alpha2);
        fn_8000A258();
        fn_80009C0C(lbl_80368E34);
        fn_80009B8C((u8)alpha2);
        fn_8000A248();
        fn_8008BD90(0x64, 0x6A, 1);
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}
#pragma cplusplus reset

#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_8003284C(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    extern u8 lbl_802EF4C8[];
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0xB0), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        fn_80090C50(fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)));
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_8000A248();
        fn_80090C50(M2C_FIELD(lbl_802EF4C8, s32 *, 0));
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}

#pragma cplusplus on
extern "C" void fn_8003297C(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    extern u32 lbl_802EF4C8[];
    s32 fn_8002F740(u32);
    s32 fn_8003CFF0(s32, s32);
    void fn_80090480(s32, s32);
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;
    s32 saved;
    u8 flag;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        saved = lbl_802EF4C8[0];
        flag = (u8)fn_8003CFF0(saved, fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)));
        fn_80090480(fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)), flag);
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_80032A74(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    extern u32 lbl_802EF4C8[];
    void fn_80090874(s32, s32);
    s32 fn_8002F740(u32);
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;
    s32 saved;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        saved = lbl_802EF4C8[0];
        fn_80090874(fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)), saved);
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}
#pragma cplusplus reset

#pragma cplusplus reset
void *fn_80032B4C(void) {
    extern u16 lbl_802695F0[];
    return (u8 *)lbl_802695F0 + 0x14F;
}

s32 fn_80032B5C(void *arg0, void *arg1) {
    extern u8 lbl_802EF4C8[];
    u8 *src;
    u8 b0;
    u8 b1;

    src = *(u8 **)((u8 *)arg1 + 0x40);
    if (src == NULL) {
        return 0x10;
    }
    b1 = src[1];
    b0 = src[0];
    lbl_802EF4C8[0xF] = b0;
    lbl_802EF4C8[0x10] = b1;
    return 5;
}

#pragma cplusplus on
extern "C" void fn_80090688(void *, s32, s32);
extern "C" void fn_80032B90(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;
    void *temp_r31;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        temp_r31 = (void *)fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40));
        fn_80090688((void *)fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)), 7, 7 - ((*(u8 *)((u8 *)temp_r31 + 0x1A6) >> 5) & 7));
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}
#pragma cplusplus reset

#pragma cplusplus on
extern "C" void fn_800907B8(void *);
extern "C" void fn_80032C80(void *arg0, void *arg1) {
    extern f32 lbl_80368E24;
    extern f32 lbl_80368E28;
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 alpha;

    if (M2C_FIELD(arg1, u32 *, 0x40) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &alpha);
        fn_8000A258();
        fn_80009D74((f32)(x + 0x20), (f32)(y + 0x30), lbl_80368E24, lbl_80368E28);
        fn_80009B8C((u8)alpha);
        fn_8000A248();
        fn_800907B8((void *)fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)));
        fn_8000A258();
        fn_80009B8C(0xFF);
        fn_8000A248();
    }
}
#pragma cplusplus reset
void *fn_80032D4C(void) {
    extern u16 lbl_802695F0[];
    return (u8 *)lbl_802695F0 + 0x14F;
}

void *fn_80032D5C(void) {
    s32 fn_80019E24(u8);
    void fn_8001D818(void *, s32);
    void *fn_8010FF24(void *, u8, u8, s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_8032BB58[];
    extern u8 lbl_80367278;
    u8 *p;
    void *temp;
    s32 val;

    p = lbl_802EF4C8;
    temp = fn_8010FF24(lbl_8032BB58, p[0xD], p[0xE], 7);
    val = fn_80019E24(*(u8 *)((u8 *)temp + 4));
    fn_8001D818(&lbl_80367278, val);
    return &lbl_80367278;
}

#pragma cplusplus on
extern "C" void fn_80032DB4(void *arg0, void *arg1) {
    struct Obj {
        u8 pad[4];
        virtual void v0(s32 *, s32 *, s32 *) = 0;
    };
    s32 x;
    s32 y;
    s32 z;

    if (arg1 != NULL && M2C_FIELD(arg1, u32 *, 0x40) != 0 && fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)) != 0) {
        ((Obj *)arg0)->v0(&x, &y, &z);
        fn_8002FC64(fn_8002F740(M2C_FIELD(arg1, u32 *, 0x40)), x, y, z);
    }
}
#pragma cplusplus reset
void fn_80032F50(void) {
    void fn_80037D54(void *);
    extern u8 lbl_802EF4C8[24];
    fn_80037D54(*(void **)lbl_802EF4C8);
}

s32 fn_80032F7C(s32 arg0, void *arg1) {
    s32 fn_8002F480(s32, void *);
    u32 fn_8002F740(void *);
    extern u8 lbl_802EF4C8[];
    void *temp_r31;
    u8 b0;
    u8 b1;
    u8 *p;
    s32 ret;

    temp_r31 = *(void **)((u8 *)arg1 + 0x40);
    if (temp_r31 == NULL) {
        return 0x10;
    }
    if (fn_8002F740(temp_r31) != 0U) {
        return fn_8002F480(arg0, arg1);
    }
    if (*(u8 *)((u8 *)temp_r31 + 3) != 0) {
        b1 = *(u8 *)((u8 *)temp_r31 + 1);
        b0 = *(u8 *)((u8 *)temp_r31 + 0);
        p = lbl_802EF4C8;
        ret = 5;
        p[0xF] = b0;
        p[0x10] = b1;
        *(s32 *)(p + 4) = 0;
        return ret;
    }
    return 0;
}

void fn_80033024(void) {
    M2C_UNK fn_8004A224();
    fn_8004A224();
}

M2C_UNK *fn_80033044(void) {
    s32 fn_80019E04(void *);
    M2C_UNK fn_8001D818(M2C_UNK *, s32);
    extern u8 lbl_802695F0[];
    extern M2C_UNK lbl_80367278;
    fn_8001D818(&lbl_80367278, fn_80019E04(lbl_802695F0 + 0xE5));
    return &lbl_80367278;
}

#include "common.h"

extern u16 lbl_80284E00[8];
extern u16 lbl_80284E20[8];
extern u32 lbl_802EF4E0[502];
extern u8 lbl_802CA518[151280];
extern u8 lbl_802B14E4[101760];
extern u32 lbl_8032BB58; // size: 0x204

#include "common.h"
#include "global.h"

extern u16* lbl_80269210;
extern s32* lbl_80330708;
