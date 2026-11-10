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
M2C_UNK *fn_8012C414(void) {
    u8 fn_80109B0C(s32);
    M2C_UNK fn_80231D94(M2C_UNK *, void *, u8, M2C_UNK *);
    extern s32 lbl_80367A88;
    extern u8 lbl_802758F8[];
    extern M2C_UNK lbl_8032FE60;

    u8 temp_r5 = fn_80109B0C(lbl_80367A88);
    void *temp_r4 = &lbl_802758F8[0x10A];
    M2C_UNK *temp_r3 = &lbl_8032FE60;

    fn_80231D94(temp_r3, temp_r4, temp_r5, temp_r3);
    return temp_r3;
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

M2C_UNK *fn_8012C4F0(void) {
    u8 fn_80109B24(s32);
    M2C_UNK fn_80231D94(M2C_UNK *, void *, u8, M2C_UNK *);
    extern M2C_UNK lbl_802758F8;
    extern M2C_UNK lbl_8032FE60;
    extern s32 lbl_80367A88;
    
    s32 r3 = lbl_80367A88;
    u8 r5 = fn_80109B24(r3);
    void *r4 = &lbl_802758F8 + 0x13C;
    M2C_UNK *r3_ptr = &lbl_8032FE60;
    
    fn_80231D94(r3_ptr, r4, r5, r3_ptr);
    return r3_ptr;
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

s32 fn_8012C9E8(void *arg1) {
    s32 *field = (s32*)((u8*)arg1 + 0x1A0);
    *field ^= 0x80000000;
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

    u8 *object;
    u8 *entry;
    s32 index;
    u8 mode;

    object = *(u8 **)((u8 *)arg0 + 0x18);

    fn_8000C60C(*(void **)(object + 0x34));
    fn_80109020(lbl_80275AC0 + 0xBA);

    *(u32 *)(object + 0x34) = 0;

    index = (signed char)object[0x62];
    mode = object[0x6C];

    entry = *(u8 **)(object + 0x3C);
    entry = *(u8 **)(entry + index * 0x24);

    if (mode == 0 || mode == 4) {
        fn_8007D064(entry, object, 0);
    } else if (mode == 1) {
        fn_8007D064(entry, object, 0x01000000);
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

void fn_8012EF04(s32 arg0) {
    extern u16 lbl_80275AC0[];
    u16* ptr = &lbl_80275AC0[0x67];
    fn_8005C8B4(ptr, &lbl_80275AC0);
    if (fn_8005BA10(ptr) != 0) {
        fn_8000C188(arg0);
    }
}

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

void fn_801302C0(void) {
    M2C_UNK fn_80059C2C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    fn_80059C2C(0, 0, 0x260, 0x1E0, 0);
}

#pragma cplusplus on
#pragma use_lmw_stmw on
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

s32 fn_80130C54(void *arg1, s32 arg2) {
    s32 var_r3;

    var_r3 = 0;
    switch (arg2) {                                 /* irregular */
    case 0:
        return -(s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, 0), void **, 0x188), u16 *, 0x5A);
    case 1:
        if ((u32) M2C_FIELD(arg1, u32 *, 0xC) != 0U) {
            var_r3 = 1;
        }
        if ((u32) M2C_FIELD(arg1, u32 *, 0x10) != 0U) {
            return var_r3 + 1;
        }
        return var_r3;
    default:
        return 0;
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
s32 fn_80131020(s32 arg0, s32 arg1)
{
    if (arg1 >= 8) {
        return 0;
    }
    
    switch (arg1) {
        case 0:
            return fn_80092ADC(0x0);
        case 1:
            return fn_80092ADC(0x1);
        case 2:
            return fn_80092ADC(0x2);
        case 3:
            return fn_80092ADC(0x3);
        case 4:
            return fn_80092ADC(0x4);
        case 5:
            return fn_80092ADC(0x5);
        case 6:
            return fn_80092ADC(0x6);
        case 7:
            return fn_80092ADC(0x7);
    }
    
    return 0;
}

void *fn_801310F4(s32 arg1) {
    extern u32 jumptable_80291210[];
    extern u8 lbl_80275AC0[];
    
    if (arg1 >= 8) {
        // Return default case (offset 0x247 from lbl_80275AC0)
        return &lbl_80275AC0[0x247];
    }
    
    // Jump table access
    return (void *) jumptable_80291210[arg1];
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

s32 fn_80131714(s32 arg0, s32 arg1)
{
    s32 r3;
    s32 r4;
    
    if (arg1 >= 6) {
        return 0;
    }
    
    switch (arg1) {
    case 0:
        r4 = *(u32*)(arg0 + 0x0);
        r3 = *(u16*)(r4 + 0x188);
        return -r3;
    case 1:
        return *(u8*)(arg0 + 0x1F);
    case 2:
        return *(u8*)(arg0 + 0x20);
    case 3:
        {
            s32 var = *(u8*)(arg0 + 0x22);
            r3 = *(u8*)(arg0 + 0x21) + (var * 100);
            return r3;
        }
    case 4:
        r3 = fn_8003A398(arg0);
        return r3;
    case 5:
        r3 = fn_8003A5B4(arg0);
        return r3;
    case 6:
        r3 = fn_8003A1E0(arg0);
        return r3;
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

void fn_80131F70(void)
{
    // Implementation for fn_80131F70
    return;
}

void fn_80132018(s32 arg0)
{
    if (arg0 > 7) {
        return;
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

s8 fn_8013236C(void **arg1, s32 arg2) {
    u8 fn_800386B0();
    s8 fn_8003B2D0();
    void *temp_r3;

    temp_r3 = *arg1;
    switch (arg2) {                                 /* irregular */
    case 1:
        return -(s8) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x18C), u16 *, 0x38);
    case 3:
        return (s8) fn_800386B0();
    case 5:
        return fn_8003B2D0();
    case 4:
        return (s8) M2C_FIELD(temp_r3, u8 *, 0x1A8);
    case 2:
        return (s8) M2C_FIELD(temp_r3, u8 *, 0x19A);
    case 0:
        return -(s8) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x188), u16 *, 0x5A);
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
