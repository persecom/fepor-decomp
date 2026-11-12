/* Functions from 0x8012C3D0 to 0x8013275C, found by decomp-toolkit. */
#include "common.h"


#include "global.h"
#include "unit.h"

f32 lbl_8036A500 = 300.0f;
f32 lbl_8036A50C = 1.0f;
f32 lbl_8036A510 = 0.0f;
f32 lbl_8036A514 = 288.0f;
f32 lbl_8036A518 = 24.0f;

s32 fn_8012C3D0(void) {
    return 0x168;
}

s32 fn_8012C3D8(void) {
    return 0x128;
}

s32 fn_8012C3E0(void) {
    return 0x16;
}

#pragma cplusplus on
extern "C" void fn_8012C3E8(void *arg0) {
    struct Obj {
        u8 pad[4];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void v6();
        virtual void v7();
        virtual void v8();
        virtual void v9();
        virtual void v10();
        virtual void v11();
        virtual void v12();
        virtual void v13();
        virtual void v14();
        virtual void v15();
        virtual void v16();
        virtual void v17();
        virtual void v18();
        virtual void v19();
        virtual void v20();
        virtual void v21();
        virtual void v22();
        virtual void v23();
        virtual void v24();
        virtual void v25();
        virtual void v26();
        virtual void v27();
        virtual void v28();
        virtual void v29();
    };
    ((Obj *)arg0)->v29();
}
#pragma cplusplus reset
char *fn_8012C414(void) {
    u8 fn_80109B0C(s32);
    void fn_80231D94(void *, void *, ...);
    extern s32 lbl_80367A88;
    extern u8 lbl_802758F8[];
    extern char lbl_8032FE60[];

    fn_80231D94(lbl_8032FE60, lbl_802758F8 + 0x10a, (u8)fn_80109B0C(lbl_80367A88));
    return lbl_8032FE60;
}

void *fn_8012C460(void) {
    extern u16 lbl_802758F8[];
    return (u8 *)lbl_802758F8 + 0x11B;
}

s32 fn_8012C470(void) {
    void fn_80109B00(void *, u8);
    u8 fn_80109B0C(void *);
    extern void *lbl_80367240;
    extern void *lbl_80367A88;
    u32 flags;
    s32 val;

    val = fn_80109B0C(lbl_80367A88);
    flags = *(u32 *)((u8 *)lbl_80367240 + 0x10);
    if (flags & 0x01000001) {
        val -= 1;
    }
    if (flags & 0x02000002) {
        val += 1;
    }
    if (val > 0xFF) {
        val = 0xFF;
    }
    if (val < 0) {
        val = 0;
    }
    fn_80109B00(lbl_80367A88, val);
    return 0;
}

char *fn_8012C4F0(void) {
    u8 fn_80109B24(s32);
    void fn_80231D94(void *, void *, ...);
    extern s32 lbl_80367A88;
    extern u8 lbl_802758F8[];
    extern char lbl_8032FE60[];

    fn_80231D94(lbl_8032FE60, lbl_802758F8 + 0x13C, (u8)fn_80109B24(lbl_80367A88));
    return lbl_8032FE60;
}

void *fn_8012C53C(void) {
    extern u16 lbl_802758F8[];
    return (u8 *)lbl_802758F8 + 0x14d;
}

s32 fn_8012C54C(void) {
    void fn_80109B18(void *, u8);
    u8 fn_80109B24(void *);
    extern void *lbl_80367240;
    extern void *lbl_80367A88;
    u32 flags;
    s32 val;

    val = fn_80109B24(lbl_80367A88);
    flags = *(u32 *)((u8 *)lbl_80367240 + 0x10);
    if (flags & 0x01000001) {
        val -= 1;
    }
    if (flags & 0x02000002) {
        val += 1;
    }
    if (val > 0xFF) {
        val = 0xFF;
    }
    if (val < 0) {
        val = 0;
    }
    fn_80109B18(lbl_80367A88, val);
    return 0;
}

char *fn_8012C5CC(void) {
    u8 fn_80109B48(s32);
    void fn_80231D94(void *, void *, ...);
    extern s32 lbl_80367A88;
    extern u8 lbl_802758F8[];
    extern char lbl_8032FE60[];

    fn_80231D94(lbl_8032FE60, lbl_802758F8 + 0x164, (u8)fn_80109B48(lbl_80367A88));
    return lbl_8032FE60;
}

void *fn_8012C618(void) {
    extern u16 lbl_802758F8[];
    return (u8 *)lbl_802758F8 + 0x175;
}

s32 fn_8012C628(void) {
    void fn_80109B30(void *, u8);
    u8 fn_80109B48(void *);
    extern void *lbl_80367240;
    extern void *lbl_80367A88;
    u32 flags;
    s32 val;

    val = fn_80109B48(lbl_80367A88);
    flags = *(u32 *)((u8 *)lbl_80367240 + 0x10);
    if (flags & 0x01000001) {
        val -= 1;
    }
    if (flags & 0x02000002) {
        val += 1;
    }
    if (val > 0xFF) {
        val = 0xFF;
    }
    if (val < 0) {
        val = 0;
    }
    fn_80109B30(lbl_80367A88, val);
    return 0;
}

char *fn_8012C6A8(void) {
    void fn_80109BA8(s32);
    void fn_80231D94(void *, ...);
    extern s32 lbl_80367A88;
    extern char lbl_802758F8[];
    extern char lbl_8032FE60[];

    fn_80109BA8(lbl_80367A88);
    fn_80231D94(lbl_8032FE60, lbl_802758F8 + 0x188);
    return lbl_8032FE60;
}

void *fn_8012C6F0(void) {
    extern char lbl_802758F8[];
    return &lbl_802758F8[0x19B];
}

s32 fn_8012C700(void) {
    M2C_UNK fn_80109B54(s32, f32);
    f32 fn_80109BA8(s32);
    extern void *lbl_80367240;
    extern s32 lbl_80367A88;
    extern f32 lbl_8036A4AC;
    extern f32 lbl_8036A4D8;
    f32 var_f1;
    s32 temp_r4;

    var_f1 = fn_80109BA8(lbl_80367A88);
    temp_r4 = M2C_FIELD(lbl_80367240, s32 *, 0x10);
    if (temp_r4 & 0x01000001) {
        var_f1 -= lbl_8036A4D8;
    }
    if (temp_r4 & 0x02000002) {
        var_f1 += lbl_8036A4D8;
    }
    if (var_f1 > lbl_8036A4AC) {
        var_f1 = lbl_8036A4AC;
    }
    if (var_f1 < lbl_8036A4D8) {
        var_f1 = lbl_8036A4D8;
    }
    fn_80109B54(lbl_80367A88, var_f1);
    return 0;
}

void fn_8012C788(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80291084[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80291084, arg1);
    *(s32 *)((u8 *)temp_r3 + 0x54) = arg0;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 2;
}

void fn_8012C7C8(s32 arg0, s32 arg1) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80291084[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80291084, arg1);
    *(s32 *)((u8 *)temp_r3 + 0x54) = arg0;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 1;
}

void fn_8012C808(void *arg0) {
    M2C_UNK fn_8000C070(void *, s32);
    s32 fn_8000E0E4(void *);
    M2C_UNK fn_80056AE0(s32, s32);
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80275AC0[];

    if ((u8)lbl_802EF4C8[8] == 0x81) {
        fn_8000C070(arg0, 0);
    }

    if ((s8)M2C_FIELD(arg0, u8 *, 0x62) < 0) {
        switch (M2C_FIELD(arg0, u8 *, 0x6C)) {
        case 1:
        case 2:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *)(lbl_80275AC0 + 0x5A)));
            return;
        case 4:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *)(lbl_80275AC0 + 0x6B)));
            return;
        default:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *)(lbl_80275AC0 + 0x7B)));
            return;
        }
    } else {
        switch (M2C_FIELD(arg0, u8 *, 0x6C)) {
        case 1:
        case 2:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *)(lbl_80275AC0 + 0x8A)));
            return;
        case 4:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *)(lbl_80275AC0 + 0x9B)));
            return;
        default:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4((void *)(lbl_80275AC0 + 0xAB)));
            return;
        }
    }
}

void fn_8012C964(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    extern u8 lbl_80290FA0[];
    void *temp_r3;
    temp_r3 = fn_8000CAA0(lbl_80290FA0, arg0);
    *(u32 *)((u8 *)temp_r3 + 0x54) = 0;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 3;
}

void fn_8012C9A0(s32 arg0) {
    void *fn_8000CAA0(void *, s32);
    s32 fn_8012C9E8(s32, void *);
    extern u8 lbl_80290EB0[];
    void *temp_r3;

    temp_r3 = fn_8000CAA0(lbl_80290EB0, arg0);
    *(u8 *)((u8 *)temp_r3 + 0x60) = 0;
    *(void **)((u8 *)temp_r3 + 0x54) = fn_8012C9E8;
    *(u8 *)((u8 *)temp_r3 + 0x6C) = 4;
}

s32 fn_8012C9E8(s32 unused, void *arg1)
{
    *(s32 *)((u8 *)arg1 + 0x1A0) ^= 0x80000000;
    return 1;
}

void fn_8012C9FC(s32 arg0, s32 arg1) {
    extern u8 lbl_80290EB0[];
    void *fn_8000CAA0(void *, s32);
    void *obj;

    obj = fn_8000CAA0(lbl_80290EB0, arg1);
    *(u8 *)((u8 *)obj + 0x60) = (u8)arg0;
    *(s32 *)((u8 *)obj + 0x54) = 0;
    *(u8 *)((u8 *)obj + 0x6C) = 0;
}

extern u8 lbl_80290E88[16];
void fn_8012CA40(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_80290E88[16];
    fn_8000CAA0(lbl_80290E88, arg0);
}

void fn_8012CC0C(void *arg0)
{
    extern u8 lbl_80275AC0[];
    void fn_8000C60C(void *);
    void fn_80109020(void *);
    void fn_8007D064(void *, void *, s32);

    u8 *object;
    void *entry;
    s32 index;
    s32 mode;

    object = *(u8 **)((u8 *)arg0 + 0x18);

    fn_8000C60C(*(void **)(object + 0x34));
    fn_80109020(lbl_80275AC0 + 0xBA);

    *(u32 *)(object + 0x34) = 0;

    index = (s8)object[0x62];
    mode = object[0x6C];
    entry = *(void **)(*(u8 **)(object + 0x3C) + index * 0x24);

    switch (mode) {
    case 0:
    case 4:
        fn_8007D064(entry, object, 0);
        break;
    case 1:
    case 2:
    case 3:
        fn_8007D064(entry, object, 0x01000000);
        break;
    }
}

void fn_8012CCA4(void *arg0)
{
    extern u8 lbl_80330708[];
    extern u8 lbl_80275AC0[];

    u8 *object;
    u8 *global;
    u32 *array;
    s32 i;
    s32 count;

    object = (u8 *)arg0;
    global = lbl_80330708;

    if ((signed char)object[0x62] < 0) {
        *(u32 *)(global + 0xB0) = 0;
    } else {
        array = *(u32 **)(object + 0x3C);
        *(u32 *)(global + 0xB0) =
            array[(signed char)object[0x62] * 9];
    }

    global[0xA9] = object[0x63];

    if ((signed char)object[0x67] < 0) {
        global[0xAA] = object[0x66] | 0x80;
    } else {
        global[0xAA] = object[0x66];

        array = *(u32 **)(object + 0x38);
        count = object[0x6D];

        for (i = 0; i < count; i++) {
            fn_800C428C((void *)array[i]);
        }

        fn_800C426C(*(void **)(object + 0x38));
    }

    if (object[0x61] != 0) {
        array = *(u32 **)(object + 0x3C);
        count = object[0x61];

        for (i = 0; i < count; i++) {
            fn_800616A0((void *)array[i + 1]);
        }

        fn_800C426C(*(void **)(object + 0x3C));
    }

    fn_80056A04(*(void **)(object + 0x50), 1);

    if (*(void **)(object + 0x4C) != 0) {
        void **vtable;
        void (**callback)(void *, s32);

        vtable = *(void ***)(object + 0x4C);
        callback = (void (**)(void *, s32))((u8 *)vtable[0x2C / 4] + 0x20);
        ((void (*)(void *, s32))callback)(*(void **)(object + 0x4C), 1);
    }

    fn_80057A10(*(void **)(object + 0x44), 1);
    fn_80057A10(*(void **)(object + 0x48), 1);
    fn_8000C60C(*(void **)(object + 0x34));

    fn_80109020(lbl_80275AC0 + 0xBA);
    fn_8003F670(*(void **)(object + 0x30));
    fn_8006D8E8(*(void **)(object + 0x40));
    fn_8005C7C8(lbl_80275AC0 + 0xC7);
}

void fn_8012CE34(void *arg0) {
    s32 fn_8000E0E4(void *);
    void fn_80056AE0(s32, s32);
    extern u8 lbl_80275AC0[];
    u8 temp_r0;

    *(u8 *)((char *)arg0 + 0x62) = 0;
    if ((s8)*(u8 *)((char *)arg0 + 0x62) < 0) {
        temp_r0 = *(u8 *)((char *)arg0 + 0x6C);
        switch (temp_r0) {
        case 1:
        case 2:
            fn_80056AE0(*(s32 *)((char *)arg0 + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x5A));
            break;
        case 4:
            fn_80056AE0(*(s32 *)((char *)arg0 + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x6B));
            break;
        default:
            fn_80056AE0(*(s32 *)((char *)arg0 + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x7B));
            break;
        }
    } else {
        temp_r0 = *(u8 *)((char *)arg0 + 0x6C);
        switch (temp_r0) {
        case 1:
        case 2:
            fn_80056AE0(*(s32 *)((char *)arg0 + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x8A));
            break;
        case 4:
            fn_80056AE0(*(s32 *)((char *)arg0 + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x9B));
            break;
        default:
            fn_80056AE0(*(s32 *)((char *)arg0 + 0x50), fn_8000E0E4(lbl_80275AC0 + 0xAB));
            break;
        }
    }
}

#pragma cplusplus on
extern "C" void fn_8012CF7C(void *arg0) {
    void fn_8000C070(void *, s32);
    void fn_8000C188(void *);
    void fn_80057E6C(void *);
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    void fn_801305F8(void *);
    void fn_801475FC(void *, s32);
    u8 fn_80166D8C(void *);
    void fn_80167190(void *, s32, f32, f32);
    void fn_801673D0(void *);
    void fn_8016758C(void *, void *, s32, f32, f32);
    extern u8 lbl_80275AC0[];
    extern u8 lbl_80330D68[];
    extern void *lbl_80367240;
    extern s32 lbl_80368DC4;
    extern f32 lbl_8036A4E8;
    extern f32 lbl_8036A4EC;

    struct Obj {
        u8 pad[0x4C];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual s32 v2(s32) = 0;
    };

    u32 pressed;
    u32 trig;
    void *self;
    s16 xpos;
    u32 *pad;
    u32 cur;
    u32 prev;
    u8 flag;
    void **table;
    Obj *item;
    u8 *entry;
    u8 idx;
    u8 fr;
    u8 col_u;
    s32 a;
    s32 b;
    s8 col;
    s32 text;
    s32 sel;
    u8 *base;

    self = arg0;
    pad = (u32 *)lbl_80367240;
    cur = pad[1];
    prev = pad[2];
    trig = pad[3];
    pressed = cur & (prev ^ cur);

    if (pressed & 0x800) {
        if (fn_80166D8C(lbl_80330D68) == 0) {
            table = *(void ***)((u8 *)self + 0x38);
            col_u = *((u8 *)self + 0x65);
            item = (Obj *)table[*((u8 *)self + 0x63)];
            col = (s8)col_u;
            base = (u8 *)item;
            base += col * 2;
            xpos = *(s16 *)(base + 0x38);
            text = item->v2(col);
            fn_8016758C(lbl_80330D68, self, text, (f32)xpos, lbl_8036A4E8);
            *(s32 *)lbl_80330D68 |= lbl_80368DC4;
        } else {
            fn_801673D0(lbl_80330D68);
        }
    }

    if (trig & 0x04000004) {
        fn_8000C188(self);
        fn_801475FC(lbl_80275AC0 + 0xDB, 0x64);
        fn_801673D0(lbl_80330D68);
        return;
    }

    if (trig & 0x01000001) {
        if ((s8)*((u8 *)self + 0x65) == 0) {
            if (*((u8 *)self + 0x64) == 0) {
                if (*((u8 *)self + 0x63) == 0) {
                    flag = 0;
                } else {
                    *((u8 *)self + 0x63) = *((u8 *)self + 0x63) - 1;
                    if ((s8)*((u8 *)self + 0x62) < 0) {
                        table = *(void ***)((u8 *)self + 0x38);
                        entry = (u8 *)table[*((u8 *)self + 0x63)];
                        *((u8 *)self + 0x65) = entry[0x21] - 1;
                    } else {
                        *((u8 *)self + 0x65) = 0;
                    }
                    goto anim_left;
                }
            } else {
            anim_left:
                *((u8 *)self + 0x64) = *((u8 *)self + 0x64) + 1;
                idx = *((u8 *)self + 0x63);
                fr = *((u8 *)self + 0x64);
                a = (idx + 1) * 0x120;
                b = idx * 0x120;
                *(s16 *)((u8 *)self + 0x68) = (s16)fn_8005A028(2, (f32)a, (f32)b, lbl_8036A4EC, (f32)fr);
                if (*((u8 *)self + 0x64) == 0x10) {
                    *((u8 *)self + 0x64) = 0;
                    if ((s8)*((u8 *)self + 0x62) < 0) {
                        fn_8000C070(self, 6);
                    } else {
                        fn_8000C070(self, 1);
                    }
                }
                flag = 1;
            }
            if (flag != 0) {
                fn_801475FC(lbl_80275AC0 + 0xFC, 0x64);
                fn_80057E6C(*(void **)((u8 *)self + 0x44));
                fn_8000C070(self, 4);
            }
        } else {
            *((u8 *)self + 0x65) = *((u8 *)self + 0x65) - 1;
            fn_801475FC(lbl_80275AC0 + 0x118, 0x64);
        }
        if (fn_80166D8C(lbl_80330D68) != 0) {
            table = *(void ***)((u8 *)self + 0x38);
            col_u = *((u8 *)self + 0x65);
            item = (Obj *)table[*((u8 *)self + 0x63)];
            col = (s8)col_u;
            base = (u8 *)item;
            base += col * 2;
            xpos = *(s16 *)(base + 0x38);
            text = item->v2(col);
            fn_80167190(lbl_80330D68, text, (f32)xpos, lbl_8036A4E8);
        }
    } else if (trig & 0x02000002) {
        idx = *((u8 *)self + 0x63);
        table = *(void ***)((u8 *)self + 0x38);
        col_u = *((u8 *)self + 0x65);
        entry = (u8 *)table[idx];
        col = (s8)col_u;
        if (col == (s32)(entry[0x21] - 1)) {
            if (*((u8 *)self + 0x64) == 0) {
                if ((s32)idx == (s32)(*((u8 *)self + 0x6D) - 1)) {
                    flag = 0;
                } else {
                    *((u8 *)self + 0x63) = idx + 1;
                    *((u8 *)self + 0x65) = 0;
                    goto anim_right;
                }
            } else {
            anim_right:
                *((u8 *)self + 0x64) = *((u8 *)self + 0x64) + 1;
                idx = *((u8 *)self + 0x63);
                fr = *((u8 *)self + 0x64);
                a = (idx - 1) * 0x120;
                b = idx * 0x120;
                *(s16 *)((u8 *)self + 0x68) = (s16)fn_8005A028(2, (f32)a, (f32)b, lbl_8036A4EC, (f32)fr);
                if (*((u8 *)self + 0x64) == 0x10) {
                    *((u8 *)self + 0x64) = 0;
                    if ((s8)*((u8 *)self + 0x62) < 0) {
                        fn_8000C070(self, 6);
                    } else {
                        fn_8000C070(self, 1);
                    }
                }
                flag = 1;
            }
            if (flag != 0) {
                fn_801475FC(lbl_80275AC0 + 0xFC, 0x64);
                fn_80057E6C(*(void **)((u8 *)self + 0x48));
                fn_8000C070(self, 5);
            }
        } else {
            *((u8 *)self + 0x65) = col + 1;
            fn_801475FC(lbl_80275AC0 + 0x118, 0x64);
        }
        if (fn_80166D8C(lbl_80330D68) != 0) {
            table = *(void ***)((u8 *)self + 0x38);
            col_u = *((u8 *)self + 0x65);
            item = (Obj *)table[*((u8 *)self + 0x63)];
            col = (s8)col_u;
            base = (u8 *)item;
            base += col * 2;
            xpos = *(s16 *)(base + 0x38);
            text = item->v2(col);
            fn_80167190(lbl_80330D68, text, (f32)xpos, lbl_8036A4E8);
        }
    } else if (pressed & 0x100) {
        sel = (s8)*((u8 *)self + 0x65) + *((u8 *)self + 0x63) * 0xA;
        if ((s32)*((u8 *)self + 0x66) == sel) {
#pragma global_optimizer off
            *((u8 *)self + 0x67) = *((u8 *)self + 0x67) * -1;
#pragma global_optimizer reset
        } else {
            *((u8 *)self + 0x66) = (u8)sel;
            *((u8 *)self + 0x67) = 1;
        }
        fn_801305F8(self);
        fn_801475FC(lbl_80275AC0 + 0x134, 0x64);
    } else if (pressed & 0x200) {
        if (fn_80166D8C(lbl_80330D68) != 0) {
            fn_801673D0(lbl_80330D68);
        } else {
            fn_8000C070(self, 0);
        }
    }
}
#pragma cplusplus reset

s32 fn_8012D554(void) {
    return 0;
}

void fn_8012D55C(void *arg0) {
    s32 fn_8000E0E4(void *);
    M2C_UNK fn_80056AE0(s32, s32);
    extern u8 lbl_80275AC0[];

    M2C_FIELD(arg0, u8 *, 0x62) = -1;
    if ((s8) M2C_FIELD(arg0, u8 *, 0x62) >= 0) {
        return;
    }
    
    switch (M2C_FIELD(arg0, u8 *, 0x6C)) {
        case 0:
        case 1:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0x5A]));
            break;
        case 2:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0x6B]));
            break;
        case 3:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0x7B]));
            break;
        case 4:
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0x7B]));
            break;
        default: // All cases 5-39 fall here
            fn_80056AE0(M2C_FIELD(arg0, s32 *, 0x50), fn_8000E0E4(&lbl_80275AC0[0xAB]));
            break;
    }
}

void fn_8012D6A4(void *arg0) {
    void fn_8000C070(void *, s32);
    s32 fn_8000E0E4(void *);
    void fn_8004BE88(void *, s32);
    void fn_80056AE0(void *, s32);
    void fn_80057860(void *, s32);
    void fn_80057E6C(void *);
    f32 fn_8005A028(s32, f32, f32, f32, f32);
    void fn_8011ABC0(void *);
    void fn_801475FC(void *, s32);
    void fn_801EAA38(void *);
    extern u8 lbl_80275AC0[];
    extern void *lbl_80367240;
    extern f32 lbl_8036A4EC;

    void *self;
    u32 *pad;
    u32 cur;
    u32 prev;
    u32 trig;
    u32 pressed;
    u8 flag;
    u8 mode;
    s16 pos;
    u8 (*cb)(void *);
    void *item;
    void **table;
    u8 *entry;
    u8 idx;
    u32 fr;
    s32 a;
    s32 b;
    f32 fa;
    f32 fb;
    f32 ff;

    self = arg0;
    pad = (u32 *)lbl_80367240;
    cur = pad[1];
    prev = pad[2];
    trig = pad[3];
    pressed = cur & (prev ^ cur);

    if (cur & 0x400) {
        *((u8 *)self + 0x6F) = 0x10;
        trig = *(u32 *)((u8 *)lbl_80367240 + 0x10);
    } else {
        *((u8 *)self + 0x6F) = 8;
    }

    if (pressed & 0x1000) {
        mode = *((u8 *)self + 0x6C);
        if (mode == 1) {
            fn_8011ABC0(self);
            fn_80056AE0(*(void **)((u8 *)self + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x155));
            fn_8000C070(self, 8);
        } else if (mode == 2) {
            fn_801EAA38(self);
            fn_80056AE0(*(void **)((u8 *)self + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x155));
            fn_8000C070(self, 8);
        }
    } else if (pressed & 0x800) {
        fn_8000C070(self, 7);
    } else if (trig & 0x01000001) {
        if (*((u8 *)self + 0x64) == 0) {
            if (*((u8 *)self + 0x63) == 0) {
                flag = 0;
            } else {
                *((u8 *)self + 0x63) = *((u8 *)self + 0x63) - 1;
                if ((s8)*((u8 *)self + 0x62) < 0) {
                    table = *(void ***)((u8 *)self + 0x38);
                    entry = (u8 *)table[*((u8 *)self + 0x63)];
                    *((u8 *)self + 0x65) = entry[0x21] - 1;
                } else {
                    *((u8 *)self + 0x65) = 0;
                }
                goto anim_up;
            }
        } else {
        anim_up:
            *((u8 *)self + 0x64) = *((u8 *)self + 0x64) + 1;
            idx = *((u8 *)self + 0x63);
            fr = *((u8 *)self + 0x64);
            a = (idx + 1) * 0x120;
            b = idx * 0x120;
            fa = (f32)a;
            fb = (f32)b;
            ff = (f32)fr;
            *(s16 *)((u8 *)self + 0x68) = (s16)fn_8005A028(2, fa, fb, lbl_8036A4EC, ff);
            if (*((u8 *)self + 0x64) == 0x10) {
                *((u8 *)self + 0x64) = 0;
                if ((s8)*((u8 *)self + 0x62) < 0) {
                    fn_8000C070(self, 6);
                } else {
                    fn_8000C070(self, 1);
                }
            }
            flag = 1;
        }
        if (flag != 0) {
            fn_801475FC(lbl_80275AC0 + 0xFC, 0x64);
            fn_80057E6C(*(void **)((u8 *)self + 0x44));
            fn_8000C070(self, 4);
        }
    } else if (trig & 0x02000002) {
        if (*((u8 *)self + 0x64) == 0) {
            if ((s32)*((u8 *)self + 0x63) == (s32)(*((u8 *)self + 0x6D) - 1)) {
                flag = 0;
            } else {
                *((u8 *)self + 0x63) = *((u8 *)self + 0x63) + 1;
                *((u8 *)self + 0x65) = 0;
                goto anim_down;
            }
        } else {
        anim_down:
            *((u8 *)self + 0x64) = *((u8 *)self + 0x64) + 1;
            idx = *((u8 *)self + 0x63);
            fr = *((u8 *)self + 0x64);
            a = (idx - 1) * 0x120;
            b = idx * 0x120;
            fa = (f32)a;
            fb = (f32)b;
            ff = (f32)fr;
            *(s16 *)((u8 *)self + 0x68) = (s16)fn_8005A028(2, fa, fb, lbl_8036A4EC, ff);
            if (*((u8 *)self + 0x64) == 0x10) {
                *((u8 *)self + 0x64) = 0;
                if ((s8)*((u8 *)self + 0x62) < 0) {
                    fn_8000C070(self, 6);
                } else {
                    fn_8000C070(self, 1);
                }
            }
            flag = 1;
        }
        if (flag != 0) {
            fn_801475FC(lbl_80275AC0 + 0xFC, 0x64);
            fn_80057E6C(*(void **)((u8 *)self + 0x48));
            fn_8000C070(self, 5);
        }
    } else if (trig & 0x08000008) {
        mode = *((u8 *)self + 0x62);
        if ((s8)mode == 0) {
            if (pressed & 0x08000008) {
                fn_8000C070(self, 6);
                fn_801475FC(lbl_80275AC0 + 0xDB, 0x64);
            }
        } else {
            *((u8 *)self + 0x62) = mode - 1;
            fn_801475FC(lbl_80275AC0 + 0xDB, 0x64);
            mode = *((u8 *)self + 0x62);
            if ((s8)mode != 0) {
                pos = *(s16 *)((u8 *)self + 0x6A);
                if ((s8)mode - (pos / 32) == 0) {
                    *(s16 *)((u8 *)self + 0x6A) = (s16)(pos - *((u8 *)self + 0x6F));
                    fn_80057860(*(void **)((u8 *)self + 0x4C), *(s16 *)((u8 *)self + 0x6A));
                    fn_8000C070(self, 2);
                }
            }
        }
    } else if (trig & 0x04000004) {
        mode = *((u8 *)self + 0x62);
        if ((s8)mode == (s32)(*((u8 *)self + 0x61) - 1)) {
            if (pressed & 0x04000004) {
                *((u8 *)self + 0x62) = 0;
                *(s16 *)((u8 *)self + 0x6A) = 0;
                fn_80057860(*(void **)((u8 *)self + 0x4C), *(s16 *)((u8 *)self + 0x6A));
                fn_801475FC(lbl_80275AC0 + 0xDB, 0x64);
            }
        } else {
            *((u8 *)self + 0x62) = mode + 1;
            fn_801475FC(lbl_80275AC0 + 0xDB, 0x64);
            mode = *((u8 *)self + 0x62);
            if ((s8)mode != (s32)(*((u8 *)self + 0x61) - 1)) {
                pos = *(s16 *)((u8 *)self + 0x6A);
                if ((s8)mode - (pos / 32) == 8) {
                    *(s16 *)((u8 *)self + 0x6A) = (s16)(pos + *((u8 *)self + 0x6F));
                    fn_80057860(*(void **)((u8 *)self + 0x4C), *(s16 *)((u8 *)self + 0x6A));
                    fn_8000C070(self, 3);
                }
            }
        }
    } else if (pressed & 0x200) {
        fn_801475FC(lbl_80275AC0 + 0x166, 0x64);
        fn_8000C070(self, 0);
    } else if (pressed & 0x100) {
        mode = *((u8 *)self + 0x62);
        cb = *(u8 (**)(void *))((u8 *)self + 0x54);
        item = *(void **)((u8 *)*(void **)((u8 *)self + 0x3C) + (s8)mode * 0x24);
        if (cb != NULL) {
            if (cb(self) != 0) {
                fn_801475FC(lbl_80275AC0 + 0x176, 0x64);
            } else {
                fn_801475FC(lbl_80275AC0 + 0x186, 0x64);
            }
        } else {
            fn_8004BE88(item, 1);
            fn_8000C070(self, 0);
        }
    }
}

s32 fn_8012DC74(void *arg0) {
    M2C_UNK fn_8000C070(void *, M2C_UNK);
    f32 fn_8005A028(M2C_UNK, s32, u8, f32, f32, f32, f32);
    extern f32 lbl_8036A4EC;
    u32 temp_r5;
    u8 temp_r4;
    u8 temp_r6;

    if ((u8) M2C_FIELD(arg0, u8 *, 0x64) == 0) {
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x63);
        if (temp_r4 == (s32) (M2C_FIELD(arg0, u8 *, 0x6D) - 1)) {
            return 0;
        }
        M2C_FIELD(arg0, u8 *, 0x63) = (u8) (temp_r4 + 1);
        M2C_FIELD(arg0, s8 *, 0x65) = 0;
        goto block_4;
    }
block_4:
    M2C_FIELD(arg0, u8 *, 0x64) = (u8) (M2C_FIELD(arg0, u8 *, 0x64) + 1);
    temp_r6 = M2C_FIELD(arg0, u8 *, 0x63);
    temp_r5 = (temp_r6 - 1) * 0x120;
    M2C_FIELD(arg0, s16 *, 0x68) = (s16) fn_8005A028(2, temp_r5, temp_r6, (f32) temp_r5, (f32) (temp_r6 * 0x120), lbl_8036A4EC, (f32) M2C_FIELD(arg0, u8 *, 0x64));
    if ((u8) M2C_FIELD(arg0, u8 *, 0x64) == 0x10) {
        M2C_FIELD(arg0, u8 *, 0x64) = 0U;
        if ((s8) M2C_FIELD(arg0, u8 *, 0x62) < 0) {
            fn_8000C070(arg0, 6);
        } else {
            fn_8000C070(arg0, 1);
        }
    }
    return 1;
}

s32 fn_8012DD94(void *arg0)
{
    u8 *state;
    u8 *table;
    u8 *entry;
    u8 frame;
    float value;

    state = (u8 *)arg0;

    if (state[0x64] != 0) {
        return 1;
    }

    if (state[0x63] == 0) {
        return 0;
    }

    state[0x63]--;

    if ((signed char)state[0x62] < 0) {
        table = *(u8 **)(state + 0x38);
        entry = *(u8 **)(table + state[0x63] * 4);
        state[0x65] = entry[0x21] - 1;
    } else {
        state[0x65] = 0;
    }

    frame = state[0x64];
    state[0x64] = frame + 1;

    value = fn_8005A028(
        2,
        (float)(frame + 1),
        (float)frame,
        16.0f
    );

    *(s16 *)(state + 0x68) = (s16)value;

    if (state[0x64] == 0x10) {
        state[0x64] = 0;

        if ((signed char)state[0x62] < 0) {
            fn_8000C070(state, 6);
        } else {
            fn_8000C070(state, 1);
        }
    }

    return 1;
}

void fn_8012DED8(void *arg0) {
    void fn_80057860(s32, s32);
    void fn_8000C188(void *);
    s16 *p;

    p = (s16 *)((u8 *)arg0 + 0x6A);
    *p = (s16)(*p - *((u8 *)arg0 + 0x6F));
    fn_80057860(*(s32 *)((u8 *)arg0 + 0x4C), *p);
    if (*p % 32 == 0) {
        fn_8000C188(arg0);
    }
}

void fn_8012DF40(void *arg0) {
    void fn_80057860(s32, s32);
    void fn_8000C188(void *);
    s16 *p;

    p = (s16 *)((u8 *)arg0 + 0x6A);
    *p = (s16)(*p + *((u8 *)arg0 + 0x6F));
    fn_80057860(*(s32 *)((u8 *)arg0 + 0x4C), *p);
    if (*p % 32 == 0) {
        fn_8000C188(arg0);
    }
}

#pragma use_lmw_stmw on
void fn_8012DFA8(void *arg0) {
    typedef struct { s16 a; s16 b; } S16Pair;
    void fn_8000C070(void *, s32);
    void *fn_8000E0E4(void *);
    u8 fn_8001DDBC(void);
    void *fn_8003FCCC(void *);
    void fn_800506E0(void *, s32);
    void *fn_80056A60(void *);
    void fn_80056AE0(void *, void *);
    void fn_800576D4(void *, s32);
    void fn_80057860(void *, s16);
    void fn_80057880(void *, s32);
    void fn_80057898(void *, s32);
    void fn_800578A0(void *, f32);
    void fn_800578A8(void *, s32, s32, s32);
    void *fn_80057998(void *);
    void *fn_80057A64(void *, s32);
    void fn_80057E98(void *, s32, s32);
    void *fn_80059208(void *, void *);
    void fn_8005C84C(void *);
    void fn_8006140C(void *);
    void *fn_80061870(void);
    s32 fn_800639B4(void);
    void *fn_8006D948(void *);
    void fn_800C1F1C(void *, void *);
    void *fn_800C42AC(s32);
    void *fn_800C42D8(s32);
    void fn_80109180(void *, void *);
    void fn_801305F8(void *);
    void fn_801A7218(void *, void *, s32);
    extern void fn_8012F360;
    extern u8 lbl_80275AC0[];
    extern u8 lbl_8029115C[];
    extern u8 lbl_80291180[];
    extern u8 lbl_802911A4[];
    extern u8 lbl_80291258[];
    extern u8 lbl_8029127C[];
    extern u8 lbl_802912F4[];
    extern u8 lbl_80291318[];
    extern u8 lbl_802913BC[];
    extern u8 lbl_802913E0[];
    extern u8 lbl_80291404[];
    extern u8 lbl_802CA264[];
    extern u8 lbl_802EF4C8[];
    extern u8 lbl_80330708[];
    extern u8 lbl_80330EAC[];
    extern s16 lbl_8036A4E0;
    extern s16 lbl_8036A4E4;
    extern f32 lbl_8036A500;

    S16Pair rect;
    s16 y;
    u8 *self;
    u8 *slot;
    void *node;
    void *tmp;
    void *entry;
    void *next;
    s32 i;
    s32 mask;
    s32 flags;
    s8 sel;
    u8 mode;
    u8 *p;
    void **p28c;

    self = arg0;
    self[0x64] = 0;
    self[0x62] = 0;
    self[0x63] = 0;
    *(s16 *)(self + 0x68) = 0;
    *(s16 *)(self + 0x6A) = 0;
    self[0x6E] = 0;
    self[0x6F] = 8;
    self[0x66] = 0;
    self[0x65] = 0;
    self[0x67] = 1;
    fn_8005C84C(lbl_80275AC0 + 0xC7);
    *(void **)(self + 0x40) = fn_8006D948(lbl_80275AC0 + 0x194);
    *(void **)(self + 0x30) = fn_8003FCCC(lbl_80275AC0 + 0x1A8);
    fn_80109180(lbl_80275AC0 + 0xBA, self);
    self[0x61] = 0;
    mode = self[0x6C];
    switch (mode) {
    case 1:
        node = *(void **)lbl_802CA264;
        while (node != NULL) {
            node = *(void **)((u8 *)node + 0x184);
            self[0x61]++;
        }
        break;
    case 2:
        node = *(void **)(lbl_802CA264 + 0x3C);
        while (node != NULL) {
            node = *(void **)((u8 *)node + 0x184);
            self[0x61]++;
        }
        break;
    case 3:
        node = *(void **)lbl_802CA264;
        while (node != NULL) {
            node = *(void **)((u8 *)node + 0x184);
            self[0x61]++;
        }
        node = *(void **)(lbl_802CA264 + 0x3C);
        while (node != NULL) {
            node = *(void **)((u8 *)node + 0x184);
            self[0x61]++;
        }
        break;
    default:
        node = *(void **)(lbl_802CA264 + self[0x60] * 0xC);
        while (node != NULL) {
            flags = *(s32 *)((u8 *)node + 0x1A0);
            node = *(void **)((u8 *)node + 0x184);
            if (!(flags & 8) && !(flags & 0x10)) {
                self[0x61]++;
            }
        }
        break;
    }
    if (self[0x61] == 0) {
        fn_8000C070(self, 0);
        return;
    }
    *(void **)(self + 0x3C) = fn_800C42AC(self[0x61] * 0x24);
    slot = *(u8 **)(self + 0x3C);
    mode = self[0x6C];
    switch (mode) {
    case 1:
        mask = 0x010000DC;
        node = *(void **)lbl_802CA264;
        while (node != NULL) {
            next = *(void **)((u8 *)node + 0x184);
            if (!(*(s32 *)((u8 *)node + 0x1A0) & mask)) {
                *(void **)slot = node;
                tmp = fn_80061870();
                *(void **)(slot + 4) = tmp;
                *(void **)((u8 *)tmp + 4) = (u8 *)node + 0x1C;
                fn_800506E0(node, 0);
                *(s32 *)((u8 *)tmp + 0x44) = fn_800639B4();
                *(u32 *)tmp = *(u32 *)tmp | 0x50028400;
                fn_8006140C(tmp);
                slot += 0x24;
            }
            node = next;
        }
        node = *(void **)lbl_802CA264;
        while (node != NULL) {
            next = *(void **)((u8 *)node + 0x184);
            if (*(s32 *)((u8 *)node + 0x1A0) & mask) {
                *(void **)slot = node;
                tmp = fn_80061870();
                *(void **)(slot + 4) = tmp;
                *(void **)((u8 *)tmp + 4) = (u8 *)node + 0x1C;
                fn_800506E0(node, 0);
                *(s32 *)((u8 *)tmp + 0x44) = fn_800639B4();
                *(u32 *)tmp = *(u32 *)tmp | 0x50028400;
                fn_8006140C(tmp);
                slot += 0x24;
            }
            node = next;
        }
        break;
    case 2:
        node = *(void **)(lbl_802CA264 + 0x3C);
        while (node != NULL) {
            next = *(void **)((u8 *)node + 0x184);
            if (*(s32 *)((u8 *)node + 0x1A0) & 0x400000) {
                *(void **)slot = node;
                tmp = fn_80061870();
                *(void **)(slot + 4) = tmp;
                *(void **)((u8 *)tmp + 4) = (u8 *)node + 0x1C;
                fn_800506E0(node, 0);
                *(s32 *)((u8 *)tmp + 0x44) = fn_800639B4();
                *(u32 *)tmp = *(u32 *)tmp | 0x50028400;
                fn_8006140C(tmp);
                slot += 0x24;
            }
            node = next;
        }
        node = *(void **)(lbl_802CA264 + 0x3C);
        while (node != NULL) {
            next = *(void **)((u8 *)node + 0x184);
            if (!(*(s32 *)((u8 *)node + 0x1A0) & 0x400000)) {
                *(void **)slot = node;
                tmp = fn_80061870();
                *(void **)(slot + 4) = tmp;
                *(void **)((u8 *)tmp + 4) = (u8 *)node + 0x1C;
                fn_800506E0(node, 0);
                *(s32 *)((u8 *)tmp + 0x44) = fn_800639B4();
                *(u32 *)tmp = *(u32 *)tmp | 0x50028400;
                fn_8006140C(tmp);
                slot += 0x24;
            }
            node = next;
        }
        break;
    case 3:
        node = *(void **)lbl_802CA264;
        while (node != NULL) {
            next = *(void **)((u8 *)node + 0x184);
            *(void **)slot = node;
            tmp = fn_80061870();
            *(void **)(slot + 4) = tmp;
            *(void **)((u8 *)tmp + 4) = (u8 *)node + 0x1C;
            fn_800506E0(node, 0);
            *(s32 *)((u8 *)tmp + 0x44) = fn_800639B4();
            *(u32 *)tmp = *(u32 *)tmp | 0x50028400;
            fn_8006140C(tmp);
            slot += 0x24;
            node = next;
        }
        node = *(void **)(lbl_802CA264 + 0x3C);
        while (node != NULL) {
            next = *(void **)((u8 *)node + 0x184);
            *(void **)slot = node;
            tmp = fn_80061870();
            *(void **)(slot + 4) = tmp;
            *(void **)((u8 *)tmp + 4) = (u8 *)node + 0x1C;
            fn_800506E0(node, 0);
            *(s32 *)((u8 *)tmp + 0x44) = fn_800639B4();
            *(u32 *)tmp = *(u32 *)tmp | 0x50028400;
            fn_8006140C(tmp);
            slot += 0x24;
            node = next;
        }
        break;
    default:
        node = *(void **)(lbl_802CA264 + self[0x60] * 0xC);
        while (node != NULL) {
            flags = *(s32 *)((u8 *)node + 0x1A0);
            next = *(void **)((u8 *)node + 0x184);
            if (!(flags & 8) && !(flags & 0x10)) {
                *(void **)slot = node;
                tmp = fn_80061870();
                *(void **)(slot + 4) = tmp;
                *(void **)((u8 *)tmp + 4) = (u8 *)node + 0x1C;
                fn_800506E0(node, 0);
                *(s32 *)((u8 *)tmp + 0x44) = fn_800639B4();
                *(u32 *)tmp = *(u32 *)tmp | 0x50028400;
                fn_8006140C(tmp);
                slot += 0x24;
            }
            node = next;
        }
        break;
    }

    slot = *(u8 **)(self + 0x3C);
    i = 0;
    while (i < self[0x61]) {
        p28c = (void **)(lbl_80330EAC + 0x28C);
        fn_801A7218(lbl_80330EAC, *(void **)slot, -1);
        *(s32 *)(slot + 0xC) = 0;
        *(s32 *)(slot + 0x10) = 0;
        fn_800C1F1C(*(void **)slot, slot + 0xC);
        if (p28c != NULL && *p28c != NULL) {
            *(void **)(slot + 8) = *p28c;
            if (*p28c != NULL) {
                slot[0x21] = *((u8 *)*p28c + 0x1D);
            } else {
                slot[0x21] = 0;
            }
            if (*p28c != NULL) {
                slot[0x22] = fn_8001DDBC();
            } else {
                slot[0x22] = 0;
            }
            slot[0x1C] = (u8)*(s16 *)(lbl_80330EAC + 0x298);
            slot[0x1D] = (u8)*(s16 *)(lbl_80330EAC + 0x29E);
            slot[0x1E] = (u8)*(s16 *)(lbl_80330EAC + 0x2A0);
            slot[0x1F] = (u8)*(s16 *)(lbl_80330EAC + 0x2A4);
            slot[0x20] = (u8)*(s16 *)(lbl_80330EAC + 0x2A6);
        } else {
            *(void **)(slot + 8) = NULL;
            slot[0x21] = 0;
            slot[0x22] = 0;
            slot[0x1C] = 0;
            slot[0x1D] = 0;
            slot[0x1E] = (u8)*(s16 *)(lbl_80330EAC + 0x2A0);
            slot[0x1F] = 0;
            slot[0x20] = (u8)*(s16 *)(lbl_80330EAC + 0x2A6);
        }
        i++;
        slot += 0x24;
    }

    if (self[0x6C] == 4) {
        self[0x6D] = 1;
        *(void **)(self + 0x38) = fn_800C42AC(4);
        entry = fn_800C42D8(0x50);
        if (entry != NULL) {
            *(void **)((u8 *)entry + 0x4C) = lbl_80291404;
            *(void **)((u8 *)entry + 0x4C) = lbl_802913E0;
            ((u8 *)entry)[0x22] = 8;
            ((u8 *)entry)[0x20] = 3;
            *(s16 *)((u8 *)entry + 0x24) = 0x70;
            *(s16 *)((u8 *)entry + 0x26) = 0xF8;
            *(s16 *)((u8 *)entry + 0x28) = 0x189;
            ((u8 *)entry)[0x21] = ((u8 *)entry)[0x20];
            p = entry;
            i = 0;
            while (i < ((u8 *)entry)[0x21]) {
                *(s16 *)(p + 0x38) = *(s16 *)(p + 0x24);
                i++;
                p += 2;
            }
        }
        **(void ***)(self + 0x38) = entry;
        self[0x66] = 0;
        self[0x63] = 0;
    } else {
        self[0x6D] = 8;
        *(void **)(self + 0x38) = fn_800C42AC(0x20);
        entry = fn_800C42D8(0x50);
        if (entry != NULL) {
            *(void **)((u8 *)entry + 0x4C) = lbl_80291404;
            *(void **)((u8 *)entry + 0x4C) = lbl_802913BC;
            ((u8 *)entry)[0x22] = 0;
            ((u8 *)entry)[0x20] = 6;
            *(s16 *)((u8 *)entry + 0x24) = 0x70;
            *(s16 *)((u8 *)entry + 0x26) = 0xF8;
            *(s16 *)((u8 *)entry + 0x28) = 0x189;
            *(s16 *)((u8 *)entry + 0x2A) = 0x1B1;
            *(s16 *)((u8 *)entry + 0x2C) = 0x1D9;
            *(s16 *)((u8 *)entry + 0x2E) = 0x1F7;
            ((u8 *)entry)[0x21] = ((u8 *)entry)[0x20];
            p = entry;
            i = 0;
            while (i < ((u8 *)entry)[0x21]) {
                *(s16 *)(p + 0x38) = *(s16 *)(p + 0x24);
                i++;
                p += 2;
            }
        }
        *(void **)(*(u8 **)(self + 0x38) + 0) = entry;
        entry = fn_800C42D8(0x50);
        if (entry != NULL) {
            *(void **)((u8 *)entry + 0x4C) = lbl_80291404;
            *(void **)((u8 *)entry + 0x4C) = lbl_80291318;
            ((u8 *)entry)[0x22] = 1;
            ((u8 *)entry)[0x20] = 8;
            *(s16 *)((u8 *)entry + 0x24) = 0x70;
            *(s16 *)((u8 *)entry + 0x26) = 0x10C;
            *(s16 *)((u8 *)entry + 0x28) = 0x134;
            *(s16 *)((u8 *)entry + 0x2A) = 0x15C;
            *(s16 *)((u8 *)entry + 0x2C) = 0x184;
            *(s16 *)((u8 *)entry + 0x2E) = 0x1AC;
            *(s16 *)((u8 *)entry + 0x30) = 0x1D4;
            *(s16 *)((u8 *)entry + 0x32) = 0x1FC;
            ((u8 *)entry)[0x21] = ((u8 *)entry)[0x20];
            p = entry;
            i = 0;
            while (i < ((u8 *)entry)[0x21]) {
                *(s16 *)(p + 0x38) = *(s16 *)(p + 0x24);
                i++;
                p += 2;
            }
        }
        *(void **)(*(u8 **)(self + 0x38) + 4) = entry;
        entry = fn_800C42D8(0x50);
        if (entry != NULL) {
            *(void **)((u8 *)entry + 0x4C) = lbl_80291404;
            *(void **)((u8 *)entry + 0x4C) = lbl_802912F4;
            ((u8 *)entry)[0x22] = 2;
            ((u8 *)entry)[0x20] = 5;
            *(s16 *)((u8 *)entry + 0x24) = 0x70;
            *(s16 *)((u8 *)entry + 0x26) = 0x102;
            *(s16 *)((u8 *)entry + 0x28) = 0x189;
            *(s16 *)((u8 *)entry + 0x2A) = 0x1BB;
            *(s16 *)((u8 *)entry + 0x2C) = 0x1ED;
            ((u8 *)entry)[0x21] = ((u8 *)entry)[0x20];
            p = entry;
            i = 0;
            while (i < ((u8 *)entry)[0x21]) {
                *(s16 *)(p + 0x38) = *(s16 *)(p + 0x24);
                i++;
                p += 2;
            }
        }
        *(void **)(*(u8 **)(self + 0x38) + 8) = entry;
        entry = fn_800C42D8(0x50);
        if (entry != NULL) {
            *(void **)((u8 *)entry + 0x4C) = lbl_80291404;
            *(void **)((u8 *)entry + 0x4C) = lbl_8029127C;
            ((u8 *)entry)[0x22] = 3;
            ((u8 *)entry)[0x20] = 7;
            *(s16 *)((u8 *)entry + 0x24) = 0x70;
            *(s16 *)((u8 *)entry + 0x26) = 0x10C;
            *(s16 *)((u8 *)entry + 0x28) = 0x13E;
            *(s16 *)((u8 *)entry + 0x2A) = 0x166;
            *(s16 *)((u8 *)entry + 0x2C) = 0x198;
            *(s16 *)((u8 *)entry + 0x2E) = 0x1CA;
            *(s16 *)((u8 *)entry + 0x30) = 0x1FC;
            ((u8 *)entry)[0x21] = ((u8 *)entry)[0x20];
            p = entry;
            i = 0;
            while (i < ((u8 *)entry)[0x21]) {
                *(s16 *)(p + 0x38) = *(s16 *)(p + 0x24);
                i++;
                p += 2;
            }
        }
        *(void **)(*(u8 **)(self + 0x38) + 0xC) = entry;
        entry = fn_800C42D8(0x50);
        if (entry != NULL) {
            *(void **)((u8 *)entry + 0x4C) = lbl_80291404;
            *(void **)((u8 *)entry + 0x4C) = lbl_80291258;
            ((u8 *)entry)[0x22] = 4;
            ((u8 *)entry)[0x20] = 3;
            *(s16 *)((u8 *)entry + 0x24) = 0x70;
            *(s16 *)((u8 *)entry + 0x26) = 0x102;
            *(s16 *)((u8 *)entry + 0x28) = 0x184;
            ((u8 *)entry)[0x21] = ((u8 *)entry)[0x20];
            p = entry;
            i = 0;
            while (i < ((u8 *)entry)[0x21]) {
                *(s16 *)(p + 0x38) = *(s16 *)(p + 0x24);
                i++;
                p += 2;
            }
        }
        *(void **)(*(u8 **)(self + 0x38) + 0x10) = entry;
        entry = fn_800C42D8(0x50);
        if (entry != NULL) {
            *(void **)((u8 *)entry + 0x4C) = lbl_80291404;
            *(void **)((u8 *)entry + 0x4C) = lbl_802911A4;
            ((u8 *)entry)[0x22] = 5;
            ((u8 *)entry)[0x20] = 9;
            *(s16 *)((u8 *)entry + 0x24) = 0x70;
            *(s16 *)((u8 *)entry + 0x26) = 0x10F;
            *(s16 *)((u8 *)entry + 0x28) = 0x131;
            *(s16 *)((u8 *)entry + 0x2A) = 0x153;
            *(s16 *)((u8 *)entry + 0x2C) = 0x175;
            *(s16 *)((u8 *)entry + 0x2E) = 0x197;
            *(s16 *)((u8 *)entry + 0x30) = 0x1B9;
            *(s16 *)((u8 *)entry + 0x32) = 0x1DB;
            *(s16 *)((u8 *)entry + 0x34) = 0x1FD;
            ((u8 *)entry)[0x21] = ((u8 *)entry)[0x20];
            p = entry;
            i = 0;
            while (i < ((u8 *)entry)[0x21]) {
                *(s16 *)(p + 0x38) = *(s16 *)(p + 0x24);
                i++;
                p += 2;
            }
        }
        *(void **)(*(u8 **)(self + 0x38) + 0x14) = entry;
        entry = fn_800C42D8(0x50);
        if (entry != NULL) {
            *(void **)((u8 *)entry + 0x4C) = lbl_80291404;
            *(void **)((u8 *)entry + 0x4C) = lbl_80291180;
            ((u8 *)entry)[0x22] = 6;
            ((u8 *)entry)[0x20] = 3;
            *(s16 *)((u8 *)entry + 0x24) = 0x70;
            *(s16 *)((u8 *)entry + 0x26) = 0x102;
            *(s16 *)((u8 *)entry + 0x28) = 0x198;
            ((u8 *)entry)[0x21] = ((u8 *)entry)[0x20];
            p = entry;
            i = 0;
            while (i < ((u8 *)entry)[0x21]) {
                *(s16 *)(p + 0x38) = *(s16 *)(p + 0x24);
                i++;
                p += 2;
            }
            ((u8 *)entry)[0x21] = 2;
        }
        *(void **)(*(u8 **)(self + 0x38) + 0x18) = entry;
        entry = fn_800C42D8(0x50);
        if (entry != NULL) {
            *(void **)((u8 *)entry + 0x4C) = lbl_80291404;
            *(void **)((u8 *)entry + 0x4C) = lbl_8029115C;
            ((u8 *)entry)[0x22] = 7;
            ((u8 *)entry)[0x20] = 2;
            *(s16 *)((u8 *)entry + 0x24) = 0x70;
            *(s16 *)((u8 *)entry + 0x26) = 0x102;
            ((u8 *)entry)[0x21] = ((u8 *)entry)[0x20];
            p = entry;
            i = 0;
            while (i < ((u8 *)entry)[0x21]) {
                *(s16 *)(p + 0x38) = *(s16 *)(p + 0x24);
                i++;
                p += 2;
            }
        }
        *(void **)(*(u8 **)(self + 0x38) + 0x1C) = entry;
        self[0x66] = (s8)(lbl_80330708[0xAA] & 0x7F);
        if (lbl_80330708[0xAA] & 0x80) {
            self[0x67] = (u8)-1;
        }
        self[0x63] = lbl_80330708[0xA9];
    }

    *(s16 *)(self + 0x68) = (s16)(self[0x63] * 0x120);
    mode = self[0x6C];
    if ((s32)mode >= 3 || (s32)mode < 1) {
        fn_801305F8(self);
    }
    if (*(void **)(lbl_80330708 + 0xB0) == NULL) {
        sel = -1;
    } else {
        sel = 0;
        slot = *(u8 **)(self + 0x3C);
        i = 0;
        while (i < self[0x61]) {
            if (*(void **)slot == *(void **)(lbl_80330708 + 0xB0)) {
                break;
            }
            slot += 0x24;
            sel++;
            i++;
        }
        if (i >= self[0x61]) {
            sel = -1;
        }
    }
    if (sel >= 0) {
        self[0x62] = sel;
        if ((s32)(sel - (*(s16 *)(self + 0x6A) / 32)) >= 8) {
            if (sel == (s32)(self[0x61] - 1)) {
                *(s16 *)(self + 0x6A) = (s16)((sel - 8) << 5);
            } else {
                *(s16 *)(self + 0x6A) = (s16)((sel - 7) << 5);
            }
        }
    }
    rect.a = lbl_8036A4E0;
    rect.b = lbl_8036A4E4;
    y = (s16)((((s8)self[0x62] << 5) + 0x60) - *(s16 *)(self + 0x6A));
    *(s16 *)(self + 0x58) = rect.a;
    *(s16 *)(self + 0x5A) = y;
    *(s16 *)(self + 0x5C) = rect.b;
    *(s16 *)(self + 0x5E) = y;

    tmp = fn_800C42D8(0x58);
    if (tmp != NULL) {
        tmp = fn_80057A64(tmp, 1);
    }
    *(void **)(self + 0x44) = tmp;
    fn_80057E98(*(void **)(self + 0x44), 0x32, 0x4C);
    tmp = fn_800C42D8(0x58);
    if (tmp != NULL) {
        tmp = fn_80057A64(tmp, 2);
    }
    *(void **)(self + 0x48) = tmp;
    fn_80057E98(*(void **)(self + 0x48), 0x230, 0x4C);
    tmp = fn_800C42D8(0x30);
    if (tmp != NULL) {
        tmp = fn_80057998(tmp);
    }
    *(void **)(self + 0x4C) = tmp;
    fn_800578A8(*(void **)(self + 0x4C), 0x22A, 0x60, 0x118);
    fn_80057898(*(void **)(self + 0x4C), self[0x61] << 5);
    fn_80057880(*(void **)(self + 0x4C), 0x120);
    fn_80057860(*(void **)(self + 0x4C), *(s16 *)(self + 0x6A));
    fn_800578A0(*(void **)(self + 0x4C), lbl_8036A500);
    fn_800576D4(*(void **)(self + 0x4C), 1);
    tmp = fn_800C42D8(0x18);
    if (tmp != NULL) {
        tmp = fn_80056A60(tmp);
    }
    *(void **)(self + 0x50) = tmp;
    if ((s8)self[0x62] < 0) {
        mode = self[0x6C];
        switch (mode) {
        case 1:
        case 2:
            fn_80056AE0(*(void **)(self + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x5A));
            break;
        case 4:
            fn_80056AE0(*(void **)(self + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x6B));
            break;
        default:
            fn_80056AE0(*(void **)(self + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x7B));
            break;
        }
    } else {
        mode = self[0x6C];
        switch (mode) {
        case 1:
        case 2:
            fn_80056AE0(*(void **)(self + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x8A));
            break;
        case 4:
            fn_80056AE0(*(void **)(self + 0x50), fn_8000E0E4(lbl_80275AC0 + 0x9B));
            break;
        default:
            fn_80056AE0(*(void **)(self + 0x50), fn_8000E0E4(lbl_80275AC0 + 0xAB));
            break;
        }
    }
    *(void **)(self + 0x34) = fn_80059208(&fn_8012F360, self);
    lbl_802EF4C8[8] = 0x80;
}
#pragma global_optimizer off
void fn_8012EF04(void *arg0) {
    u8 fn_8005BA10(void *);
    void fn_8005C8B4(void *);
    void fn_8000C188(void *);
    extern u8 lbl_80275AC0[];

    fn_8005C8B4(lbl_80275AC0 + 0xC7);
    if (fn_8005BA10(lbl_80275AC0 + 0xC7)) {
        fn_8000C188(arg0);
    }
}
#pragma global_optimizer on
s32 fn_8012F26C(void) {
    return 0;
}

#pragma cplusplus on
extern "C" void fn_8012F360(void *arg0) {
    void fn_800075D8(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B28(void);
    void fn_80009B8C(s32);
    void fn_80009B98(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8012EF5C(void *, void *, s32);
    void fn_8012F5CC(void *);
    void fn_8012FA3C(void *);
    void fn_8012FF60(void *);
    void fn_801302F4(void *);
    extern f32 lbl_8036A500;
    extern f32 lbl_8036A50C;
    extern f32 lbl_8036A510;
    struct Obj {
        u8 pad[0x4C];
        virtual void v0();
        virtual void v1();
        virtual void v2();
        virtual void v3();
        virtual void v4();
        virtual void v5();
        virtual void v6(s32, s32 *, s32 *, s32 *, s32 *);
    };
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;
    s32 var_r31;
    void *var_r30;
    s32 var_r29;
    s32 var_r28;

    fn_8012FF60(arg0);
    var_r30 = arg0;
    fn_8012FA3C(var_r30);
    fn_8012F5CC(var_r30);
    fn_8000A258();
    fn_80009D74(414.0f, 34.0f, lbl_8036A500, lbl_8036A50C);
    fn_80009F90(*(void **)((u8 *)var_r30 + 0x40), 4, 0x11);
    fn_80009B98();
    fn_80009B8C(0xFF);
    fn_8000A248();
    {
        u8 digit_pair = *((u8 *)var_r30 + 0x66);
        void *item = ((void **)*(void **)((u8 *)var_r30 + 0x38))[digit_pair / 10];
        ((Obj *)item)->v6(digit_pair % 10, &sp8, &spC, &sp10, &sp14);
    }
    var_r31 = sp10 - sp8;
    var_r29 = sp14 - spC;
    fn_80007898(1);
    fn_8000770C((f32)((0x30 - var_r31) / 2), lbl_8036A510, (f32)sp8, (f32)spC, (f32)var_r31, (f32)var_r29);
    fn_800075D8();
    fn_80007884();
    fn_80009B28();
    var_r28 = 0;
    var_r31 = var_r28;
    var_r29 = (s32)0x38E38E39;
    while (var_r28 < *((u8 *)var_r30 + 0x6D)) {
        s16 val = *(s16 *)((u8 *)var_r30 + 0x68);
        s32 quot = val / 288;
        s32 adj = quot;
        u8 in_range;
        if ((val % 288) != 0) {
            adj = quot + 1;
        }
        if ((var_r28 >= quot) && (var_r28 <= adj)) {
            in_range = 1;
        } else {
            in_range = 0;
        }
        if (in_range != 0) {
            fn_8012EF5C(*(void **)((u8 *)*(void **)((u8 *)var_r30 + 0x38) + var_r31), var_r30, var_r28);
        }
        var_r31 += 4;
        var_r28 += 1;
    }
    fn_801302F4(var_r30);
    *((u8 *)var_r30 + 0x6E) += 1;
}
#pragma cplusplus reset

void fn_8012F5A8(s32 unused0, s32 unused1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    *arg2 = 0;
    *arg3 = 0x14;
    *arg4 = 0x30;
    *arg5 = 0x28;
}

#pragma use_lmw_stmw on
void fn_8012F5CC(void *arg0) {
    void fn_800075D8(void);
    void fn_800076AC(s32, s32, s32, s32);
    void fn_800076CC(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_800077D8(f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(s32);
    void fn_80009B98(void);
    void fn_80009BC0(void (*)(void), s32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8001003C(s32, s32, s32, s32, s32, void *, ...);
    f32 fn_80059EB8(s32, s32, f32, f32);
    void *fn_800A8A88(s32);
    void fn_801308F0(void);
    extern f64 lbl_8036A4F0;
    extern f32 lbl_8036A4EC;
    extern f32 lbl_8036A500;
    extern f32 lbl_8036A50C;
    extern f32 lbl_8036A510;
    extern f32 lbl_8036A518;
    extern f32 lbl_8036A524;
    extern f32 lbl_8036A528;
    extern f32 lbl_8036A52C;
    extern f32 lbl_8036A530;
    extern f32 lbl_8036A534;
    extern f32 lbl_8036A538;
    extern f32 lbl_8036A53C;
    extern f32 lbl_8036A540;
    extern f32 lbl_8036A544;
    extern f32 lbl_8036A548;
    extern f32 lbl_8036A54C;
    extern f32 lbl_8036A550;
    extern u8 lbl_80275AC0[];

    s32 unk6A;
    s32 lo;
    s32 hi;
    u8 inRange;
    u8 mode;
    void *item;
    f32 fKeep;
    f32 f30;
    void *str;
    u8 *self;
    s32 y1;
    s32 y2;
    s32 y3;
    void *list;
    s32 i;
    u8 icon;

    self = (u8 *)arg0;
    list = *(void **)(self + 0x3C);
    i = 0;
    y1 = 0x60;
    y2 = 0x6C;
    y3 = 0x77;
    while (i < self[0x61]) {
        unk6A = *(s16 *)(self + 0x6A);
        f30 = (f32)(y1 - unk6A);
        item = *(void **)list;
        lo = unk6A / 32;
        hi = lo + 8;
        if ((unk6A % 32) != 0) {
            hi += 1;
        }
        if ((i >= lo) && (i <= hi)) {
            inRange = 1;
        } else {
            inRange = 0;
        }
        if (inRange != 0) {
            mode = self[0x6C];
            icon = 1;
            if (mode == 1) {
                s32 flags = *(s32 *)((u8 *)item + 0x1A0);
                if (flags & 0x200000) {
                    icon = 3;
                } else if (flags & 0x10) {
                    icon = 0;
                } else if (flags & 0x10000) {
                    icon = 0x13;
                }
            } else if (mode == 2) {
                s32 flags = *(s32 *)((u8 *)item + 0x1A0);
                if (flags & 0x200000) {
                    icon = 3;
                } else if (!(flags & 0x400000)) {
                    icon = 0;
                }
            }
            str = fn_800A8A88(*(s32 *)((u8 *)item + 0x188));
            if (str != NULL) {
                fn_8000A258();
                fn_80009D74(lbl_8036A524, f30, lbl_8036A500, lbl_8036A50C);
                fn_8000A174(0, 0x13);
                fn_80009B8C(0xFF);
                fn_80009BC0(fn_801308F0, 0);
                fn_8000A248();
                fn_8001003C(0, 0, icon, 1, 0, str, lbl_8036A50C, lbl_8036A510);
            }
            unk6A = *(s16 *)(self + 0x6A);
            f30 = (f32)(y2 - unk6A);
            fn_8000A258();
            fn_80009D74(lbl_8036A528, f30, lbl_8036A52C, lbl_8036A50C);
            fn_80009F90(*(void **)(self + 0x40), 2, 0x11);
            fn_80009BC0(fn_801308F0, 0);
            fn_80009B8C(0xFF);
            fn_8000A248();
            fn_80007898(1);
            fn_8000770C(lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A530, lbl_8036A4EC);
            fn_800075D8();
            fn_80007884();
            unk6A = *(s16 *)(self + 0x6A);
            f30 = (f32)(y3 - unk6A);
            fn_8000A258();
            fn_80009D74(lbl_8036A534, f30, lbl_8036A52C, lbl_8036A50C);
            fn_8000A174(0, 0x12);
            fn_80009BC0(fn_801308F0, 0);
            fn_80009B8C(0x60);
            fn_8000A248();
            fn_80007898(1);
            fn_800077D8(lbl_8036A510, lbl_8036A510, lbl_8036A538, lbl_8036A50C);
            fn_800075D8();
            fn_800076AC(0xFF, 0xFF, 0xFF, 0xFF);
            fn_80007884();
        }
        y1 += 0x20;
        y2 += 0x20;
        y3 += 0x20;
        i += 1;
        list = (u8 *)list + 0x24;
    }
    fn_8000A258();
    fn_80009D74(lbl_8036A53C, lbl_8036A540, lbl_8036A500, lbl_8036A50C);
    fn_8000A174(0, 0x13);
    fn_80009B98();
    fn_80009B8C(0xFF);
    fn_8000A248();
    fn_8001003C(0, 0, 1, 0, 1, &lbl_80275AC0[0x1C3], self[0x63] + 1, lbl_8036A50C, lbl_8036A510);
    fn_8001003C(0x10, 0, 6, 0, 1, &lbl_80275AC0[0x1C6], lbl_8036A50C, lbl_8036A510);
    fn_8001003C(0x20, 0, 6, 0, 1, (char *)lbl_80275AC0 + 0x1C3, self[0x6D], lbl_8036A50C, lbl_8036A510);
    fKeep = lbl_8036A4EC;
    f30 = fn_80059EB8(0x40, self[0x6E], lbl_8036A510, lbl_8036A544) - lbl_8036A548;
    fn_8000A258();
    fn_80009D74(lbl_8036A54C, lbl_8036A550 + (lbl_8036A518 + f30), lbl_8036A500, lbl_8036A50C);
    fn_80009F90(*(void **)(self + 0x40), 0x12, 0x11);
    fn_80009B8C(0xFF);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A510, fKeep, lbl_8036A518);
    if ((s8)self[0x67] < 0) {
        fn_800076CC();
    }
    fn_800075D8();
    fn_80007884();
}
#pragma use_lmw_stmw reset

#pragma cplusplus on
extern "C" void fn_8012FA3C(void *arg0) {
    void fn_800075D8(void);
    void fn_800076EC(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(s32);
    void fn_80009B98(void);
    void fn_80009C0C(f32);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    void fn_8000D8BC(s32, s32);
    void *fn_8000E0E4(void *);
    void fn_8001019C(s32, s32, s32, void *, ...);
    extern f32 lbl_8036A4EC;
    extern f32 lbl_8036A50C;
    extern f32 lbl_8036A510;
    extern f32 lbl_8036A554;
    extern f32 lbl_8036A558;
    extern f32 lbl_8036A55C;
    extern f32 lbl_8036A560;
    extern f32 lbl_8036A564;
    extern f32 lbl_8036A568;
    extern u8 lbl_80275AC0[];
    extern u8 lbl_802CA264[];
    extern s32 lbl_802EF4E0[];

    struct Node {
        u8 pad0[0x184];
        struct Node *next;
        u8 pad1[0x1A0 - 0x188];
        s32 flags;
    };

    struct Drawer {
        u8 pad[0x4C];
        virtual void v0() = 0;
        virtual void v1() = 0;
        virtual void v2() = 0;
        virtual void Draw(void *, f32, f32) = 0;
    };

    u8 *self = (u8 *)arg0;
    s16 b;
    s16 a;
    Node *node;
    Drawer *drawer;

    switch (self[0x6C]) {
    case 1:
        fn_8000A258();
        fn_80009B98();
        fn_80009B8C(0xFF);
        fn_8000A248();
        fn_8000A258();
        fn_80009D74(lbl_8036A510, lbl_8036A4EC, lbl_8036A554, lbl_8036A50C);
        fn_80009F90(*(void **)(self + 0x40), 0x14, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A558, lbl_8036A55C);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_8000770C(lbl_8036A558, lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A558, lbl_8036A55C);
        fn_800076EC();
        fn_80007884();
        a = 0;
        node = *(Node **)lbl_802CA264;
        while (node != NULL) {
            s32 flags = node->flags;
            node = node->next;
            if (!(flags & 0x10))
                a++;
        }
        b = (s16)lbl_802EF4E0[0];
        fn_8000A258();
        fn_80009C0C(lbl_8036A560);
        fn_8000A174(0, 0x13);
        fn_8000A248();
        if (a == b) {
            fn_8001019C(0x40, 0x10, 2, fn_8000E0E4(lbl_80275AC0 + 0x1C8));
            fn_8001019C(0x140, 0x10, 1, lbl_80275AC0 + 0x1DA, a, b);
        } else {
            fn_8000D8BC(0, b - a);
            fn_8001019C(0x40, 0x10, 2, fn_8000E0E4(lbl_80275AC0 + 0x1E7));
            fn_8001019C(0x140, 0x10, 1, lbl_80275AC0 + 0x1F7, a, b);
        }
        break;
    case 2:
        fn_8000A258();
        fn_80009B98();
        fn_80009B8C(0xFF);
        fn_8000A248();
        fn_8000A258();
        fn_80009D74(lbl_8036A510, lbl_8036A4EC, lbl_8036A554, lbl_8036A50C);
        fn_80009F90(*(void **)(self + 0x40), 0x14, 0x11);
        fn_8000A248();
        fn_80007898(1);
        fn_8000770C(lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A558, lbl_8036A55C);
        fn_800075D8();
        fn_80007884();
        fn_80007898(1);
        fn_8000770C(lbl_8036A558, lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A558, lbl_8036A55C);
        fn_800076EC();
        fn_80007884();
        b = 0;
        node = *(Node **)(lbl_802CA264 + 0x3C);
        while (node != NULL) {
            s32 flags = node->flags;
            node = node->next;
            if (flags & 0x400000)
                b++;
        }
        a = (s16)lbl_802EF4E0[0];
        fn_8000A258();
        fn_80009C0C(lbl_8036A560);
        fn_8000A174(0, 0x13);
        fn_8000A248();
        if (b == a) {
            fn_8001019C(0x40, 0x10, 2, fn_8000E0E4(lbl_80275AC0 + 0x208));
            fn_8001019C(0x128, 0x10, 1, lbl_80275AC0 + 0x1DA, b, a);
        } else {
            fn_8000D8BC(0, a - b);
            fn_8001019C(0x40, 0x10, 2, fn_8000E0E4(lbl_80275AC0 + 0x21E));
            fn_8001019C(0x128, 0x10, 1, lbl_80275AC0 + 0x1F7, b, a);
        }
        break;
    default:
        drawer = *(Drawer **)(*(u8 **)(self + 0x38) + (self[0x63] << 2));
        drawer->Draw(*(void **)(self + 0x40), lbl_8036A564, lbl_8036A568);
        break;
    }
}
#pragma cplusplus reset

void fn_8012FE1C(void *arg0, void *arg1, f32 farg0, f32 farg1) {
    void fn_800075D8(void);
    void fn_8000770C(f32, f32, f32, f32, f32, f32);
    void fn_80007884(void);
    void fn_80007898(s32);
    void fn_80009B8C(s32);
    void fn_80009B98(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009F90(void *, s32, s32);
    void fn_8000A248(void);
    void fn_8000A258(void);
    extern f32 lbl_8036A550;
    extern f32 lbl_8036A554;
    extern f32 lbl_8036A56C;
    extern f32 lbl_8036A570;
    extern f32 lbl_8036A574;
    extern f32 lbl_8036A578;
    extern f32 lbl_8036A500;
    extern f32 lbl_8036A50C;
    extern f32 lbl_8036A510;

    fn_8000A258();
    fn_80009B98();
    fn_80009B8C(0xFF);
    fn_8000A248();
    fn_8000A258();
    fn_80009D74(farg0, farg1, lbl_8036A554, lbl_8036A50C);
    fn_80009F90(arg1, 0, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A510, lbl_8036A56C, lbl_8036A570);
    fn_800075D8();
    fn_80007884();
    fn_8000A258();
    fn_80009D74(lbl_8036A550 + farg0, lbl_8036A550 + farg1, lbl_8036A500, lbl_8036A50C);
    fn_80009F90(arg1, 0x11, 0x11);
    fn_8000A248();
    fn_80007898(1);
    fn_8000770C(lbl_8036A510, lbl_8036A510, lbl_8036A510, (f32)(*(u8 *)((u8 *)arg0 + 0x22) << 5), lbl_8036A574, lbl_8036A578);
    fn_800075D8();
    fn_80007884();
}

#pragma use_lmw_stmw on
void fn_8012FF60(void *arg0) {
    void fn_80202300(void *, s32, f32);
    void fn_802025C0(void *, f32, f32, f32);
    void fn_80202024(void *, void *, void *);
    void fn_8000A258(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_8000A174(s32, s32);
    void fn_80009B8C(s32);
    void fn_80009BC0(void *, s32);
    void fn_8000A248(void);
    void fn_80007898(s32);
    void fn_80007340(void *, s32);
    void fn_80007884(void);
    void fn_8004BD1C(void *, f32 *, f32);
    void fn_8005F7E0(void *, s32, s32, s32);
    void fn_80202540(void *, f32, f32, f32);
    void fn_8005F7B0(void *, s32);
    void fn_8005F780(void *, s32);
    void fn_80060060(void *);
    void fn_800609DC(void *);
    void fn_8004DDB8(s32);
    void fn_80009B98(void);
    void fn_80130860(void);
    void fn_801302C0(void);
    void fn_801308F0(void);
    void fn_80069F04(void);
    void fn_80130890(void);
    extern f32 lbl_8036A57C;
    extern f32 lbl_8036A580;
    extern f32 lbl_8036A584;
    extern f32 lbl_8036A510;
    extern f32 lbl_8036A588;
    extern f32 lbl_8036A50C;
    extern f32 lbl_8036A4E8;
    extern f64 lbl_8036A4F0;
    extern f32 lbl_8036A518;
    extern f32 lbl_8036A58C;
    u8 spD4[0x30];
    u8 spA4[0x30];
    u8 sp74[0x30];
    u8 sp44[0x30];
    u8 sp14[0x30];
    f32 sp8[3];
    s32 y;
    void *list;
    s32 i;
    void *item;
    void *obj;
    void *self;
    s32 lo;
    s32 hi;
    s32 unk6A;
    u8 inRange;
    u8 mode;
    f32 f30;
    f32 f29;
    f32 f28;

    self = arg0;
    fn_80202300(spA4, 0x58, lbl_8036A57C);
    fn_80202300(sp74, 0x59, lbl_8036A580);
    fn_80202300(sp44, 0x58, lbl_8036A580);
    fn_802025C0(sp14, lbl_8036A584, lbl_8036A584, lbl_8036A584);
    fn_80202024(spA4, sp14, sp14);
    fn_80202024(sp74, sp14, sp14);
    fn_80202024(sp44, sp14, sp14);
    list = *(void **)((u8 *)self + 0x3C);
    fn_8000A258();
    fn_80009D74(lbl_8036A510, lbl_8036A510, lbl_8036A588, lbl_8036A50C);
    fn_8000A174(0, 0x410);
    fn_80009B8C(0xFF);
    fn_80009BC0(fn_80130860, 0);
    fn_8000A248();
    fn_80007898(0xB);
    fn_80007340(fn_801302C0, 0);
    fn_80007884();
    f30 = lbl_8036A4E8;
    i = 0;
    y = 0x60;
    while (i < *(u8 *)((u8 *)self + 0x61)) {
        item = *(void **)list;
        obj = *((void **)list + 1);
        fn_8004BD1C(item, sp8, lbl_8036A584);
        unk6A = *(s16 *)((u8 *)self + 0x6A);
        f29 = f30 + sp8[0];
        f28 = sp8[1] + (f32)(y - unk6A);
        lo = unk6A / 32;
        hi = lo + 8;
        if ((unk6A % 32) != 0) {
            hi += 1;
        }
        if ((i >= lo) && (i <= hi)) {
            inRange = 1;
        } else {
            inRange = 0;
        }
        if (inRange != 0) {
            mode = *(u8 *)((u8 *)self + 0x6C);
            if ((mode == 1) && (*(u32 *)((u8 *)item + 0x1A0) & 0x10)) {
                fn_8005F7E0(obj, 0x40, 0x40, 0x40);
            } else if ((mode == 2) && !(*(u32 *)((u8 *)item + 0x1A0) & 0x400000)) {
                fn_8005F7E0(obj, 0x40, 0x40, 0x40);
            } else {
                fn_8005F7E0(obj, 0x80, 0x80, 0x80);
            }
            fn_80202540(spD4, f29, lbl_8036A518 + f28, lbl_8036A58C);
            fn_80202024(spD4, sp14, (u8 *)obj + 0x10);
            fn_8005F7B0(obj, 0xFF);
            fn_8005F780(obj, 0xFF);
            fn_80060060(obj);
            fn_800609DC(obj);
            fn_8000A258();
            fn_80009D74(lbl_8036A510, lbl_8036A510, lbl_8036A58C, lbl_8036A50C);
            fn_8000A174(0, 0x410);
            fn_80009B8C(0xFF);
            unk6A = *(s16 *)((u8 *)self + 0x6A);
            if ((unk6A % 32) != 0) {
                fn_80009BC0(fn_801308F0, 0);
            }
            fn_8000A248();
            fn_80007898(0xB);
            fn_80007340(fn_80069F04, (s32)obj);
            fn_80007884();
        }
        y += 0x20;
        i += 1;
        list = (u8 *)list + 0x24;
    }
    fn_8000A258();
    fn_80009BC0(fn_80130890, 0);
    fn_8000A248();
    fn_8004DDB8(0x64);
    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
}
#pragma use_lmw_stmw reset

void fn_801302C0(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1E0, 0);
}

#pragma cplusplus reset
#pragma use_lmw_stmw on
void fn_801302F4(void *arg0) {
    void fn_80009B98(void);
    void fn_8000A258(void);
    void fn_8000A248(void);
    void fn_80009D74(f32, f32, f32, f32);
    void fn_80009B8C(s32);
    void fn_8008AB7C(s32, s32, s32, s32, s32, s32, s32);
    void fn_8000A174(s32, s32);
    void fn_8008BF68(s16, s16, s32);
    void fn_80009B28(void);
    void fn_80057E64(void *, s32);
    void fn_80057AE0(void *);
    void fn_80057020(void *);
    void fn_80056B0C(void *);
    extern f64 lbl_8036A4F0;
    extern f32 lbl_8036A50C;
    extern f32 lbl_8036A500;
    extern f32 lbl_8036A590;
    extern f32 lbl_8036A594;
    extern f32 lbl_8036A510;
    extern f32 lbl_8036A598;

    register s16 x;
    int ah;
    s8 unk62;
    int t;
    s16 temp;
    s16 y;
    register s16 w;
    register s16 h;
    register s32 aw;

    temp = *(s16 *)((u8 *)arg0 + 0x6A);
    if (temp % 32 == 0) {
        s16 var4;
        s16 var6;
        s16 var7;
        register s16 var8;
        void **arr;
        register u8 *ptr;

        unk62 = *(s8 *)((u8 *)arg0 + 0x62);
        if (0 > unk62) {
            var7 = 0;
            var8 = var7;
            var6 = 0x42;
            arr = *(void ***)((u8 *)arg0 + 0x38);
            ptr = (u8 *)arr[*(u8 *)((u8 *)arg0 + 0x63)];
            ptr += *(s8 *)((u8 *)arg0 + 0x65) * 2;
            var4 = *(s16 *)(ptr + 0x38);
        } else {
            var4 = 0x28;
            var7 = 0x1B8;
            var8 = 0x16;
            var6 = (s16)(((unk62 << 5) + 0x60) - temp);
        }
        t = *(s16 *)((u8 *)arg0 + 0x58) + var4;
        *(s16 *)((u8 *)arg0 + 0x58) = (s16)(t / 2);
        t = *(s16 *)((u8 *)arg0 + 0x5A) + var6;
        *(s16 *)((u8 *)arg0 + 0x5A) = (s16)(t / 2);
        t = *(s16 *)((u8 *)arg0 + 0x5C) + var7;
        *(s16 *)((u8 *)arg0 + 0x5C) = (s16)(t / 2);
        t = *(s16 *)((u8 *)arg0 + 0x5E) + var8;
        *(s16 *)((u8 *)arg0 + 0x5E) = (s16)(t / 2);
    }
    x = *(s16 *)((u8 *)arg0 + 0x58);
    y = *(s16 *)((u8 *)arg0 + 0x5A);
    w = *(s16 *)((u8 *)arg0 + 0x5C);
    h = *(s16 *)((u8 *)arg0 + 0x5E);
    fn_8000A258();
    fn_80009B98();
    fn_8000A248();
    if ((s8)*(u8 *)((u8 *)arg0 + 0x62) >= 0) {
        s32 bw;
        fn_8000A258();
        fn_80009D74((f32)(x + 0x2E), (f32)(y + 5), lbl_8036A500, lbl_8036A50C);
        fn_80009B8C(0xFF);
        fn_8000A248();
        t = w + 0x10;
        aw = (s32)(lbl_8036A590 * (f32)t);
        ah = h / 2;
        bw = (s32)(lbl_8036A594 * (f32)t);
        fn_8008AB7C(aw / 2, ah, aw, 0x18, 0x19, 0x4B, 1);
        fn_8008AB7C(aw + bw / 2, ah, bw, 0x18, 0x19, 0x4B, 1);
    }
    fn_8000A258();
    fn_80009D74(lbl_8036A510, lbl_8036A510, lbl_8036A598, lbl_8036A50C);
    fn_8000A174(0, 0x11);
    fn_80009B8C(0xFF);
    fn_8000A248();
    fn_8008BF68(x, y, 1);
    fn_80009B28();
    if (*(u8 *)((u8 *)arg0 + 0x63) != 0) {
        fn_80057E64(*(void **)((u8 *)arg0 + 0x44), 1);
    } else {
        fn_80057E64(*(void **)((u8 *)arg0 + 0x44), 0);
    }
    if ((s32)*(u8 *)((u8 *)arg0 + 0x63) < (s32)(*(u8 *)((u8 *)arg0 + 0x6D) - 1)) {
        fn_80057E64(*(void **)((u8 *)arg0 + 0x48), 1);
    } else {
        fn_80057E64(*(void **)((u8 *)arg0 + 0x48), 0);
    }
    fn_80057AE0(*(void **)((u8 *)arg0 + 0x44));
    fn_80057AE0(*(void **)((u8 *)arg0 + 0x48));
    fn_80057020(*(void **)((u8 *)arg0 + 0x4C));
    fn_80056B0C(*(void **)((u8 *)arg0 + 0x50));
}
#pragma cplusplus on
extern "C" void fn_801305F8(void *arg0) {
    struct Obj {
        u8 pad[0x4C];
        virtual void v0() = 0;
        virtual s32 v1(void *, s32) = 0;
    };
    struct Entry {
        s32 f0;
        s32 f4;
        s32 f8;
        s32 fC;
        s32 f10;
        s32 f14;
        s32 f18;
        u8 b1c;
        u8 b1d;
        u8 b1e;
        u8 b1f;
        u8 b20;
        u8 b21;
        u8 b22;
        u8 b23;
    };
    s32 var_r30;
    s32 temp_r29;
    s32 var_r28;
    s32 var_r27;
    void *var_r26;
    u8 b25, b24, b23, b22, b21, b20;
    s32 t18;
    s32 t0, t4, t8, tC, t10, t14;
    s32 result1;
    Entry *a;
    Entry *b;
    u8 digit;
    s8 factor;
    void **table;
    Obj *item;
    s32 other;
    u8 b12, b11;

    var_r26 = arg0;
    var_r28 = 0;
    while (var_r28 < *((u8 *)var_r26 + 0x61)) {
        var_r27 = 0;
        var_r30 = 0;
        while (var_r27 < (*((u8 *)var_r26 + 0x61) - 1 - var_r28)) {
            temp_r29 = (var_r27 + 1) * 0x24;
            digit = *((u8 *)var_r26 + 0x66);
            table = *(void ***)((u8 *)var_r26 + 0x38);
            item = (Obj *)table[digit / 10];
            result1 = item->v1((u8 *)*(void **)((u8 *)var_r26 + 0x3C) + temp_r29, digit % 10);
            digit = *((u8 *)var_r26 + 0x66);
            factor = (s8)*((u8 *)var_r26 + 0x67);
            table = *(void ***)((u8 *)var_r26 + 0x38);
            a = (Entry *)((u8 *)*(void **)((u8 *)var_r26 + 0x3C) + var_r30);
            item = (Obj *)table[digit / 10];
            t18 = factor * result1;
            other = ((s8)*((u8 *)var_r26 + 0x67)) * item->v1((u8 *)a, digit % 10);
            if (other < t18) {
                a = (Entry *)((u8 *)*(void **)((u8 *)var_r26 + 0x3C) + var_r30);
                b = (Entry *)((u8 *)*(void **)((u8 *)var_r26 + 0x3C) + temp_r29);
                t0 = a->f0;
                t4 = a->f4;
                t8 = a->f8;
                tC = a->fC;
                t10 = a->f10;
                t14 = a->f14;
                result1 = a->f18;
                t18 = *(s32 *)&a->b1c;
                {
                    s32 w20 = *(s32 *)&a->b20;
                    b20 = ((u8 *)&t18)[0];
                    b21 = ((u8 *)&t18)[1];
                    b22 = ((u8 *)&t18)[2];
                    b23 = ((u8 *)&t18)[3];
                    b24 = ((u8 *)&w20)[0];
                    b25 = ((u8 *)&w20)[1];
                    b12 = ((u8 *)&w20)[2];
                    b11 = ((u8 *)&w20)[3];
                    a->f0 = b->f0;
                    a->f4 = b->f4;
                    a->f8 = b->f8;
                    a->fC = b->fC;
                    a->f10 = b->f10;
                    a->f14 = b->f14;
                    a->f18 = b->f18;
                    a->b1c = b->b1c;
                    a->b1d = b->b1d;
                    a->b1e = b->b1e;
                    a->b1f = b->b1f;
                    a->b20 = b->b20;
                    a->b21 = b->b21;
                    a->b22 = b->b22;
                    a->b23 = b->b23;
                }
                b = (Entry *)((u8 *)*(void **)((u8 *)var_r26 + 0x3C) + temp_r29);
                b->f0 = t0;
                b->f4 = t4;
                b->f8 = t8;
                b->fC = tC;
                b->f10 = t10;
                b->f14 = t14;
                b->f18 = result1;
                b->b1c = b20;
                b->b1d = b21;
                b->b1e = b22;
                b->b1f = b23;
                b->b20 = b24;
                b->b21 = b25;
                b->b22 = b12;
                b->b23 = b11;
            }
            var_r30 += 0x24;
            var_r27 += 1;
        }
        var_r28 += 1;
    }
}
#pragma use_lmw_stmw reset
#pragma cplusplus reset

s32 fn_80130858(void) {
    return 0;
}

void fn_80130860(void) {
    M2C_UNK fn_80225058(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80225058(0, 0, 0x80, 0x1E0);
}

void fn_80130890(void) {
    fn_80225058(0, 0, 0x78, 0x1E0);
}

void fn_801308C0(void) {
    fn_80225058(0xF8, 0, 0x120, 0x1E0);
}

void fn_801308F0(void) {
    fn_80225058(0, 0x60, 0x260, 0x120);
}

void fn_80130920(void) {
    fn_80225058(0xF8, 0x60, 0x120, 0x120);
}

s32 fn_80130A40(void *arg0, void *arg1, s32 arg2) {
    void *fn_80105C5C(void *, u8);
    s32 count;
    s32 i;
    void *unit;
    void *temp;

    count = 0;
    unit = *(void **)arg1;
    switch (arg2) {
    case 0:
        return -(s32)*(u16 *)((u8 *)*(void **)((u8 *)unit + 0x188) + 0x5A);
    case 1:
        i = 0;
        do {
            temp = fn_80105C5C((u8 *)unit + 0x1BC, (u8)i);
            if (temp != NULL && *(u8 *)((u8 *)temp + 0x19) != 0) {
                count += 1;
            }
            i += 1;
        } while (i < 0x62);
        return count;
    default:
        return 0;
    }
}

void *fn_80130AE4(void *unused, s32 arg1) {
    extern u16 lbl_80275AC0[];

    switch (arg1) {
    case 1:
        return (u8 *)lbl_80275AC0 + 0x232;
    default:
        return (u8 *)lbl_80275AC0 + 0x247;
    }
}

void fn_80130B10(s32 unused, s32 kind, s32 *a, s32 *b, s32 *c, s32 *d) {
    switch (kind) {
    case 0:
        *a = 0;
        *b = 0;
        *c = 0x30;
        *d = 0x14;
        break;
    case 1:
        *a = 0;
        *b = 0x2A8;
        *c = 0x30;
        *d = 0x2BC;
        break;
    }
}

void *fn_80130B68(void *arg0, void *arg1, s32 arg2) {
    s32 fn_800A8A88(s32);
    s32 fn_80231D94(char *dest, const char *fmt, ...);
    extern char lbl_80275AC0[];

    switch (arg2) {
    case 0:
        return 0;
    case 1: {
        void *temp = *(void **)((char *)arg1 + 0xC);
        if (temp == 0) {
            fn_80231D94(arg0, &lbl_80275AC0[0x25B]);
        } else {
            fn_80231D94(arg0, &lbl_80275AC0[0x264], fn_800A8A88(*(s32 *)((char *)temp + 0x188)));
        }
        break;
    }
    case 2: {
        void *temp = *(void **)((char *)arg1 + 0x10);
        if (temp == 0) {
            fn_80231D94(arg0, &lbl_80275AC0[0x25B]);
        } else {
            fn_80231D94(arg0, &lbl_80275AC0[0x264], fn_800A8A88(*(s32 *)((char *)temp + 0x188)));
        }
        break;
    }
    default:
        break;
    }
    return arg0;
}

s32 fn_80130C54(s32 unused, void *arg1, s32 arg2) {
    void *obj;
    s32 n;

    obj = *(void **)arg1;
    n = 0;
    switch (arg2) {
    case 0:
        return -(s32)*(u16 *)((u8 *)*(void **)((u8 *)obj + 0x188) + 0x5A);
    case 1:
        if (*(u32 *)((u8 *)arg1 + 0xC) != 0) {
            n = 1;
        }
        if (*(u32 *)((u8 *)arg1 + 0x10) == 0) {
            return n;
        }
        return n + 1;
    default:
        return 0;
    }
}

void *fn_80130CB0(void *unused, s32 arg1) {
    extern u16 lbl_80275AC0[];

    switch (arg1) {
    case 1:
        return (u8 *)lbl_80275AC0 + 0x267;
    default:
        return (u8 *)lbl_80275AC0 + 0x247;
    }
}

void fn_80130CDC(s32 unused, s32 kind, s32 *a, s32 *b, s32 *c, s32 *d) {
    switch (kind) {
    case 0:
        *a = 0;
        *b = 0;
        *c = 0x30;
        *d = 0x14;
        break;
    case 1:
        *a = 0;
        *b = 0x294;
        *c = 0x30;
        *d = 0x2A8;
        break;
    }
}

extern u16 jumptable_802911EC[];
s32 fn_80131020(void *arg0, void *arg1, u32 arg2) {
    u8 fn_80092ADC(void *, s32);
    void *p;

    p = *(void **)arg1;
    switch (arg2) {
    case 0:
        return -(s32)*(u16 *)((u8 *)*(void **)((u8 *)p + 0x188) + 0x5A);
    case 1:
        return (u8)fn_80092ADC(p, 0);
    case 2:
        return (u8)fn_80092ADC(p, 1);
    case 3:
        return (u8)fn_80092ADC(p, 2);
    case 4:
        return (u8)fn_80092ADC(p, 3);
    case 5:
        return (u8)fn_80092ADC(p, 4);
    case 6:
        return (u8)fn_80092ADC(p, 5);
    case 7:
        return (u8)fn_80092ADC(p, 6);
    case 8:
        return (u8)fn_80092ADC(p, 7);
    default:
        return 0;
    }
}

void *fn_801310F4(s32 arg0, u32 arg1) {
    extern u8 lbl_80275AC0[];
    switch (arg1) {
    case 1:
        return &lbl_80275AC0[0x27B];
    case 2:
        return &lbl_80275AC0[0x28D];
    case 3:
        return &lbl_80275AC0[0x29F];
    case 4:
        return &lbl_80275AC0[0x2B1];
    case 5:
        return &lbl_80275AC0[0x2C3];
    case 6:
        return &lbl_80275AC0[0x2D5];
    case 7:
        return &lbl_80275AC0[0x2E7];
    case 8:
        return &lbl_80275AC0[0x2F9];
    case 0:
    default:
        return &lbl_80275AC0[0x247];
    }
}

s32 fn_801311A4(void* arg0, void** arg1, s32 arg2) {
    if (arg2 >= 8) {
        return 0;
    }
    
    switch (arg2) {
        case 0:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x14;
            break;
        case 1:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x208;
            break;
        case 2:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x21c;
            break;
        case 3:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x230;
            break;
        case 4:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x244;
            break;
        case 5:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x258;
            break;
        case 6:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x26c;
            break;
        case 7:
            *(u8*)arg1[0] = 0;
            arg1[1] = (void*)0x30;
            arg1[2] = (void*)0x280;
            break;
    }
    
    return 1;
}

extern s32 fn_8010424C(void*);
s32 fn_80131464(s32 unused, void **arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = *arg1;
    switch (arg2) {
    case 0:
        return -*(u16 *)((u8 *)*(void **)((u8 *)temp_r3 + 0x188) + 0x5A);
    case 1:
        return *(s32 *)((u8 *)temp_r3 + 0x194) != 0;
    case 2:
        return fn_8010424C((u8 *)temp_r3 + 0x1A4);
    default:
        return 0;
    }
}

void *fn_801314DC(void *unused, s32 arg1) {
    extern u16 lbl_80275AC0[];

    switch (arg1) {
    case 1:
        return (u8 *)lbl_80275AC0 + 0x314;
    case 2:
        return (u8 *)lbl_80275AC0 + 0x328;
    default:
        return (u8 *)lbl_80275AC0 + 0x247;
    }
}

void fn_80131524(s32 unused, s32 kind, s32 *a, s32 *b, s32 *c, s32 *d) {
    switch (kind) {
    case 0:
        *a = 0;
        *b = 0;
        *c = 0x30;
        *d = 0x14;
        break;
    case 1:
        *a = 0;
        *b = 0x1CC;
        *c = 0x30;
        *d = 0x1E0;
        break;
    case 2:
        *a = 0;
        *b = 0x1E0;
        *c = 0x30;
        *d = 0x1F4;
        break;
    }
}

void fn_801315B0(void* arg0, s32 arg1) {
    if (arg1 > 6) {
        return;
    }
    switch(arg1) {
    case 0:
        return;
    case 1:
        {
            u8* ptr = &((u8*)arg0)[0x33c]; // lbl_80275AC0 + 0x33c
            fn_80231D94(ptr);
        }
        break;
    case 2:
        {
            u8* ptr = &((u8*)arg0)[0x33c]; // lbl_80275AC0 + 0x33c
            fn_80231D94(ptr);
        }
        break;
    case 3:
        {
            // Check if byte at offset 0x21 is zero
            if (((u8*)arg0)[0x21] == 0) {
                u8* ptr = &((u8*)arg0)[0x340]; // lbl_80275AC0 + 0x340
                fn_80231D94(ptr);
            }
        }
        break;
    case 4:
        {
            // Compare byte at offset 0x22 to something
            u8 r6 = ((u8*)arg0)[0x22];
            if (arg1 == r6) {
                u8* ptr = &((u8*)arg0)[0x345]; // lbl_80275AC0 + 0x345
                fn_80231D94(ptr);
            }
        }
        break;
    case 5:
        {
            u8* ptr = &((u8*)arg0)[0x33c]; // lbl_80275AC0 + 0x33c
            fn_80231D94(ptr);
        }
        break;
    case 6:
        {
            s32 r3 = arg1; // value is not used in this case, probably just to pass it to a helper function
            u8* ptr = &((u8*)arg0)[0x33c]; // lbl_80275AC0 + 0x33c
            fn_80231D94(ptr);
        }
        break;
    }
}

s32 fn_80131714(void *arg0, u8 *arg1, u32 arg2)
{
    s32 fn_8003A398(void *);
    s32 fn_8003A5B4(void *);
    s32 fn_8003A1E0(void *);

    void *p;

    p = *(void **)arg1;

    switch (arg2) {
    case 0:
        return -(s32)*(u16 *)((u8 *)*(void **)((u8 *)p + 0x188) + 0x5A);
    case 1:
        return arg1[0x1F];
    case 2:
        return arg1[0x20];
    case 3:
        return arg1[0x21] + arg1[0x22] * 100;
    case 4:
        return (s8)fn_8003A398(p);
    case 5:
        return (s8)fn_8003A5B4(p);
    case 6:
        return (s8)fn_8003A1E0(p);
    default:
        return 0;
    }
}

void *fn_801317B0(s32 arg0, s32 arg1) {
    extern u8 lbl_80275AC0[];
    switch (arg1) {
    case 1:
        return &lbl_80275AC0[0x34B];
    case 2:
        return &lbl_80275AC0[0x35F];
    case 3:
        return &lbl_80275AC0[0x376];
    case 4:
        return &lbl_80275AC0[0x38B];
    case 5:
        return &lbl_80275AC0[0x39F];
    case 6:
        return &lbl_80275AC0[0x3B4];
    default:
        return &lbl_80275AC0[0x247];
    }
}

void fn_80131854(s32 unused, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5)
{
  switch (arg1)
  {
    case 0:
      *arg2 = 0;
      *arg3 = 0;
      *arg4 = 0x30;
      *arg5 = 0x14;
      return;

    case 1:
      *arg2 = 0;
      *arg3 = 0x154;
      *arg4 = 0x30;
      *arg5 = 0x168;
      return;

    case 2:
      *arg2 = 0;
      *arg3 = 0x168;
      *arg4 = 0x30;
      *arg5 = 0x17c;
      return;

    case 3:
      *arg2 = 0;
      *arg3 = 0x17c;
      *arg4 = 0x30;
      *arg5 = 0x190;
      return;

    case 4:
      *arg2 = 0;
      *arg3 = 0x190;
      *arg4 = 0x30;
      *arg5 = 0x1a4;
      return;

    case 5:
      *arg2 = 0;
      *arg3 = 0x1a4;
      *arg4 = 0x30;
      *arg5 = 0x1b8;
      return;

    case 6:
      *arg2 = 0;
      *arg3 = 0x1b8;
      *arg4 = 0x30;
      *arg5 = 0x1cc;
      return;
  }
}

s32 fn_80131AA8(s32 arg0, void *arg1, s32 arg2) {
    void *temp_r3;
    u16 temp_r0;
    temp_r3 = M2C_FIELD(arg1, void **, 0);
    switch (arg2) {
    case 0:
        temp_r3 = M2C_FIELD(temp_r3, void **, 0x188);
        temp_r0 = M2C_FIELD(temp_r3, u16 *, 0x5A);
        return -temp_r0;
    case 1:
        temp_r3 = M2C_FIELD(arg1, void **, 8);
        if (temp_r3 == NULL) {
            return 0;
        }
        return M2C_FIELD(temp_r3, u16 *, 0xE);
    case 2:
        return M2C_FIELD(arg1, u8 *, 0x1C);
    case 3:
        return M2C_FIELD(arg1, u8 *, 0x1D);
    case 4:
        return M2C_FIELD(arg1, u8 *, 0x1E);
    default:
        return 0;
    }
}

void *fn_80131B24(s32 arg0, s32 arg1) {
    extern u8 lbl_80275AC0[];
    switch (arg1) {
    case 1:
        return &lbl_80275AC0[0x3CE];
    case 2:
        return &lbl_80275AC0[0x3E3];
    case 3:
        return &lbl_80275AC0[0x3F5];
    case 4:
        return &lbl_80275AC0[0x408];
    default:
        return &lbl_80275AC0[0x247];
    }
}

void fn_80131B9C(s32 unused, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5)
{
  switch (arg1)
  {
    case 0:
      *arg2 = 0;
      *arg3 = 0;
      *arg4 = 0x30;
      *arg5 = 0x14;
      return;

    case 1:
      *arg2 = 0;
      *arg3 = 0x104;
      *arg4 = 0x30;
      *arg5 = 0x118;
      return;

    case 2:
      *arg2 = 0;
      *arg3 = 0x118;
      *arg4 = 0x30;
      *arg5 = 0x12C;
      return;

    case 3:
      *arg2 = 0;
      *arg3 = 0x12C;
      *arg4 = 0x30;
      *arg5 = 0x140;
      return;

    case 4:
      *arg2 = 0;
      *arg3 = 0x140;
      *arg4 = 0x30;
      *arg5 = 0x154;
      return;
  }
}

s32 fn_80131C78(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5) {
    s32 r30;
    s32 r31;
    s32 r4;
    
    if (param_5 > 7) {
        return 0;
    }
    
    r31 = param_1;
    r30 = *(s32*)((u32)param_4 + 0x18C);
    r4 = *(s32*)((u32)param_4);
    
    // Jump table handling
    switch (param_5) {
        case 0:
            return fn_8003B258(param_4);
        case 1:
            // fall through
            break;
        case 2:
            return fn_8003AFA0(param_4);
        case 3:
            // fall through  
            break;
        case 4:
            return fn_8003AF28(param_4);
        case 5:
            // fall through
            break;
        case 6:
            return fn_8003AEB0(param_4);
        case 7:
            // fall through
            break;
        case 8:
            return fn_8003ACF8(param_4);
        case 9:
            // fall through
            break;
        case 10:
            return fn_8003AA40(param_4);
        case 11:
            // fall through
            break;
        case 12:
            return fn_8003A778(param_4);
    }
    
    return 0;
}

s32 fn_80131F70(void *arg0, void *arg1, u32 arg2) {
    s32 fn_8003B258(void *);
    s32 fn_8003AFA0(void *);
    s32 fn_8003AF28(void *);
    s32 fn_8003AEB0(void *);
    s32 fn_8003ACF8(void *);
    s32 fn_8003AA40(void *);
    s32 fn_8003A778(void *);
    void *p;

    p = *(void **)arg1;
    switch (arg2) {
    case 0:
        return -(s32)*(u16 *)((u8 *)*(void **)((u8 *)p + 0x188) + 0x5A);
    case 1:
        return (s8)fn_8003B258(p);
    case 2:
        return (s8)fn_8003AFA0(p);
    case 3:
        return (s8)fn_8003AF28(p);
    case 4:
        return (s8)fn_8003AEB0(p);
    case 5:
        return (s8)fn_8003ACF8(p);
    case 6:
        return (s8)fn_8003AA40(p);
    case 7:
        return (s8)fn_8003A778(p);
    default:
        return 0;
    }
}

void *fn_80132018(s32 arg0, u32 arg1) {
    extern u8 lbl_80275AC0[];
    switch (arg1) {
    case 1:
        return &lbl_80275AC0[0x42B];
    case 2:
        return &lbl_80275AC0[0x43E];
    case 3:
        return &lbl_80275AC0[0x452];
    case 4:
        return &lbl_80275AC0[0x466];
    case 5:
        return &lbl_80275AC0[0x47B];
    case 6:
        return &lbl_80275AC0[0x48F];
    case 7:
        return &lbl_80275AC0[0x4A2];
    case 0:
    default:
        return &lbl_80275AC0[0x247];
    }
}

void fn_801320B8(void* arg0, f32 arg1) {
    void** reg = (void**)arg0;
    s32 temp_r5;
    
    if ((s32)arg1 < 7) {
        temp_r5 = *(s32*)((u8*)arg0 + 0x4);
        
        switch ((s32)arg1) {
        case 0:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0x1b8;
            *(u32*)&reg[3] = 0x14;
            break;
        case 1:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0x8c;
            *(u32*)&reg[3] = 0x78;
            break;
        case 2:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xa0;
            *(u32*)&reg[3] = 0x8c;
            break;
        case 3:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xb4;
            *(u32*)&reg[3] = 0xa0;
            break;
        case 4:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xc8;
            *(u32*)&reg[3] = 0xb4;
            break;
        case 5:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xdc;
            *(u32*)&reg[3] = 0xc8;
            break;
        case 6:
            *(u32*)&reg[0] = 0;
            *(u32*)&reg[1] = 0x30;
            *(u32*)&reg[2] = 0xf0;
            *(u32*)&reg[3] = 0xdc;
            break;
        }
    }
}

void *fn_801321F4(void *arg0, void **arg1, s32 arg2) {
    u8 fn_800386B0(void *);
    s8 fn_8003B2D0(void *);
    void *fn_800A8978(void *);
    extern M2C_UNK lbl_80275AC0;
    s8 temp_r3;
    void *temp_r30;

    temp_r30 = *arg1;
    switch (arg2) {                                 /* irregular */
    case 1:
        return fn_800A8978(M2C_FIELD(temp_r30, void **, 0x18C));
    case 2:
        fn_80231D94(&lbl_80275AC0 + 0x33C, (s8) M2C_FIELD(temp_r30, u8 *, 0x19A));
block_19:
    default:
        return arg0;
    case 3:
        if (fn_800386B0(temp_r30) == 0xFF) {
            fn_80231D94(arg0, (s8) (&lbl_80275AC0 + 0x340));
        } else {
            fn_80231D94(arg0, (s8) (&lbl_80275AC0 + 0x33C), (void *) fn_800386B0(temp_r30));
        }
        goto block_19;
    case 4:
        fn_80231D94(&lbl_80275AC0 + 0x33C, (s8) M2C_FIELD(temp_r30, u8 *, 0x1A8));
        goto block_19;
    case 5:
        temp_r3 = fn_8003B2D0(temp_r30);
        if (temp_r3 >= (s8) M2C_FIELD(M2C_FIELD(temp_r30, void **, 0x18C), u8 *, 0x4C)) {
            fn_80231D94(arg0, (s8) (&lbl_80275AC0 + 0x4B6), &lbl_80275AC0 + 0x423, &lbl_80275AC0 + 0x428);
        } else {
            fn_80231D94(arg0, (s8) (&lbl_80275AC0 + 0x4BF), (void *) temp_r3);
        }
        goto block_19;
    case 0:
        return NULL;
    }
}

s32 fn_8013236C(s32 unused, void **arg1, s32 arg2) {
    u8 fn_800386B0(void *);
    s8 fn_8003B2D0(void *);
    void *temp_r3;

    temp_r3 = *arg1;
    switch (arg2) {
    case 0:
        return -*(u16 *)((u8 *)*(void **)((u8 *)temp_r3 + 0x188) + 0x5A);
    case 1:
        return -*(u16 *)((u8 *)*(void **)((u8 *)temp_r3 + 0x18C) + 0x38);
    case 2:
        return *(s8 *)((u8 *)temp_r3 + 0x19A);
    case 3:
        return (u8)fn_800386B0(temp_r3);
    case 4:
        return *(s8 *)((u8 *)temp_r3 + 0x1A8);
    case 5:
        return fn_8003B2D0(temp_r3);
    default:
        return 0;
    }
}

void *fn_80132414(s32 arg0, s32 arg1) {
    extern u8 lbl_80275AC0[];
    switch (arg1) {
    case 1:
        return &lbl_80275AC0[0x4C4];
    case 2:
        return &lbl_80275AC0[0x4D9];
    case 3:
        return &lbl_80275AC0[0x4EB];
    case 4:
        return &lbl_80275AC0[0x4FE];
    case 5:
        return &lbl_80275AC0[0x510];
    default:
        return &lbl_80275AC0[0x247];
    }
}

void fn_801324A0(s32 unused, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5)
{
  switch (arg1)
  {
    case 0:
      *arg2 = 0;
      *arg3 = 0;
      *arg4 = 0x30;
      *arg5 = 0x14;
      return;

    case 1:
      *arg2 = 0;
      *arg3 = 0x14;
      *arg4 = 0x30;
      *arg5 = 0x28;
      return;

    case 2:
      *arg2 = 0;
      *arg3 = 0x28;
      *arg4 = 0x30;
      *arg5 = 0x3C;
      return;

    case 3:
      *arg2 = 0;
      *arg3 = 0x3C;
      *arg4 = 0x30;
      *arg5 = 0x50;
      return;

    case 4:
      *arg2 = 0;
      *arg3 = 0x50;
      *arg4 = 0x30;
      *arg5 = 0x64;
      return;

    case 5:
      *arg2 = 0;
      *arg3 = 0x64;
      *arg4 = 0x30;
      *arg5 = 0x78;
      return;
  }
}

void *fn_801325A8(s32 unused, void **arg1, s32 arg2) {
    void *fn_800A8978(s32);
    extern u8 lbl_80275AC0[];
    void *temp_r3;
    void *var_r3;

    temp_r3 = *arg1;
    switch (arg2) {
    case 0:
        return NULL;
    case 1:
        return fn_800A8978(*(s32 *)((u8 *)temp_r3 + 0x18C));
    case 2:
        var_r3 = (u8 *)lbl_80275AC0 + 0x527;
        if (*(s32 *)((u8 *)temp_r3 + 0x1A0) & 0x80000000) {
            var_r3 = (u8 *)lbl_80275AC0 + 0x523;
        }
        return var_r3;
    default:
        return NULL;
    }
}

#pragma peephole off
s32 fn_80132624(s32 unused, void **arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = *arg1;
    switch (arg2) {
    case 0:
        return -*(u16 *)((u8 *)*(void **)((u8 *)temp_r3 + 0x188) + 0x5A);
    case 1:
        return -*(u16 *)((u8 *)*(void **)((u8 *)temp_r3 + 0x18C) + 0x38);
    case 2:
        return (*(u32 *)((u8 *)temp_r3 + 0x1A0) & 0x80000000U) == 0;
    default:
        return 0;
    }
}
#pragma peephole reset
void *fn_80132688(void *unused, s32 arg1) {
    extern u16 lbl_80275AC0[];

    switch (arg1) {
    case 1:
        return (u8 *)lbl_80275AC0 + 0x4C4;
    case 2:
        return (u8 *)lbl_80275AC0 + 0x52E;
    default:
        return (u8 *)lbl_80275AC0 + 0x247;
    }
}

void fn_801326D0(s32 unused, s32 kind, s32 *a, s32 *b, s32 *c, s32 *d) {
    switch (kind) {
    case 0:
        *a = 0;
        *b = 0;
        *c = 0x30;
        *d = 0x14;
        break;
    case 1:
        *a = 0;
        *b = 0x14;
        *c = 0x30;
        *d = 0x28;
        break;
    case 2:
        *a = 0;
        *b = 0x2BC;
        *c = 0x30;
        *d = 0x2D0;
        break;
    }
}

extern f32 lbl_8036A500;
extern f32 lbl_8036A50C;
extern f32 lbl_8036A510;
extern f64 lbl_8036A4F0;
extern f64 lbl_8036A4F8;
extern u8 lbl_80275AC0[];
extern u32 jumptable_8029137C[];
extern u8 lbl_80275AC0[];
