/* Functions from 0x800119C0 to 0x80016EE8, found by decomp-toolkit. */
#include "common.h"

u16 *fn_800119C0(void) {
    extern u16 lbl_80267DC8[];
    return (u16 *)((u32)lbl_80267DC8 + 0x43);
}

s32 fn_800119D0(void) {
    return 0x18;
}

s32 fn_800119D8(void) {
    return 0x18;
}

void *fn_800119E0(void *arg0, s16 arg1) {
    void fn_8006EDA0(void *);
    void fn_800C428C(void *);
    extern u16 lbl_80283EFC[];
    extern u16 lbl_80283948[];
    typedef struct { void *vt; u32 unk4; } Obj;
    Obj *obj = (Obj *)arg0;

    if (obj != NULL) {
        obj->vt = lbl_80283EFC;
        if (obj != NULL) {
            obj->vt = lbl_80283948;
            if (obj->unk4 != 0) {
                fn_8006EDA0(&obj->unk4);
            }
        }
        if (arg1 > 0) {
            fn_800C428C(obj);
        }
    }
    return obj;
}

void fn_80011A5C(void *arg0)
{
    extern s32 lbl_80367180;

    u8 *context;
    u8 *command;
    u32 *stack;
    u32 result;
    s32 count;
    void *callback;

    command = (u8 *)arg0;
    context = (u8 *)lbl_80367180;

    count = (s8)command[0xD];
    stack = *(u32 **)(context + 0x18);
    stack -= count;
    *(u32 **)(context + 0x18) = stack;

    callback = *(void **)(command + 4);

    switch (count) {
    case 0:
        result = ((u32 (*)(void))callback)();
        break;

    case 1:
        result = ((u32 (*)(u32))callback)(
            stack[0]);
        break;

    case 2:
        result = ((u32 (*)(u32, u32))callback)(
            stack[0], stack[1]);
        break;

    case 3:
        result = ((u32 (*)(u32, u32, u32))callback)(
            stack[0], stack[1], stack[2]);
        break;

    case 4:
        result = ((u32 (*)(u32, u32, u32, u32))callback)(
            stack[0], stack[1], stack[2], stack[3]);
        break;

    case 5:
        result = ((u32 (*)(u32, u32, u32, u32, u32))callback)(
            stack[0], stack[1], stack[2], stack[3], stack[4]);
        break;

    case 6:
        result = ((u32 (*)(u32, u32, u32, u32, u32, u32))callback)(
            stack[0], stack[1], stack[2], stack[3], stack[4],
            stack[5]);
        break;

    case 7:
        result = ((u32 (*)(u32, u32, u32, u32, u32, u32, u32))callback)(
            stack[0], stack[1], stack[2], stack[3], stack[4],
            stack[5], stack[6]);
        break;

    case 8:
        result = ((u32 (*)(u32, u32, u32, u32, u32, u32, u32, u32))callback)(
            stack[0], stack[1], stack[2], stack[3], stack[4],
            stack[5], stack[6], stack[7]);
        break;

    case 9:
        result = ((u32 (*)(u32, u32, u32, u32, u32, u32, u32, u32, u32))callback)(
            stack[0], stack[1], stack[2], stack[3], stack[4],
            stack[5], stack[6], stack[7], stack[8]);
        break;

    default:
        return;
    }

    context = (u8 *)lbl_80367180;
    stack = *(u32 **)(context + 0x18);

    *stack = result;
    *(u32 **)(context + 0x18) = stack + 1;
}

s32 fn_80011EDC(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    // Simple implementation to test basic structure 
    return 0;
}

void fn_80013864(void) {
    extern void *lbl_803671A4;
    M2C_FIELD(lbl_803671A4, s8 *, 0x1C) = 1;
}

void fn_80013874(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
}

s32 fn_80013880(void) {
    extern s32 lbl_80367180;
    extern s32 lbl_803671A4;
    u8 *context;
    u32 *stack;
    s32 fn_80011EDC();

    lbl_80367180 = lbl_803671A4;
    fn_80011EDC();
    context = (u8 *)lbl_80367180;
    stack = *(u32 **)(context + 0x18) - 1;
    *(u32 **)(context + 0x18) = stack;
    return (s32)*stack;
}

s32 fn_800138BC(void *arg0) {
    extern s32 lbl_80367180;
    u8 *context;
    u32 *stack;
    s32 fn_80011EDC();

    lbl_80367180 = (s32)arg0;
    fn_80011EDC();
    context = (u8 *)lbl_80367180;
    stack = *(u32 **)(context + 0x18) - 1;
    *(u32 **)(context + 0x18) = stack;
    return (s32)*stack;
}

u32 fn_800138F4(u32 arg0, u32 arg1) {
    if (arg0 < 0x10000000)
        return (arg0 * 0x10000000) + (arg1 * 0x1000000);
    return 0;
}

#pragma scheduling off
void fn_80013A6C(s32 arg0) {
    extern void *lbl_80367180;
    extern s32 lbl_80367188;
    s32 **slot;
    s32 *cursor;

    slot = (s32 **)((u8 *)lbl_80367180 + 0x18);
    cursor = *slot;
    *slot = (s32 *)((u8 *)cursor + 4);
    *cursor = arg0;
    lbl_80367188 += 1;
}

#pragma scheduling reset
s32 fn_80013A90(void *arg0) {
    extern s32 lbl_803671A4;
    extern s32 lbl_80367180;
    extern s32 lbl_8036718C;
    extern s32 lbl_80367184;
    extern s32 lbl_80367188;
    u32 fn_8000D354(void *);
    void fn_800142B0(s32);

    u32 result;
    s32 context;
    s32 zero;

    context = lbl_803671A4;
    lbl_80367180 = context;
    lbl_8036718C = *(s32 *)((u8 *)context + 0x18);
    result = fn_8000D354(arg0);
    lbl_80367184 = result;
    if (result == 0U) {
        fn_800142B0(5);
        return 0;
    }
    zero = 0;
    lbl_80367188 = zero;
    return 1;
}

s32 fn_80013AE8(void *arg0, void *arg1, u8 arg2)
{
    extern s16 lbl_8036719E;
    extern s16 lbl_8036719C;
    extern u8 *lbl_803671A0;
    extern s32 lbl_803671A8;

    extern void fn_8000D3EC(void *, void *);

    s32 index;
    s16 next;
    u8 *entry;

    index = lbl_8036719E;
    next = index + 1;
    entry = lbl_803671A0 + (index << 4);

    lbl_8036719E = next;

    if (next > lbl_8036719C) {
        lbl_803671A8 = 9;
        return 0;
    }

    *(void **)(entry + 0x0) = arg0;
    *(void **)(entry + 0x4) = arg1;
    *(u32 *)(entry + 0x8) = 0;
    entry[0xD] = arg2;
    entry[0xC] = 0;

    fn_8000D3EC(arg0, entry);

    return 1;
}

#pragma scheduling reset
u32 fn_80013B60(void *arg0) {
    extern void *lbl_80367190;
    void *owner;
    void *p;
    u32 ret;

    if (arg0 == NULL) {
        return **(u32 **)((u8 *)lbl_80367190 + 0x28);
    }
    owner = *(void **)((u8 *)arg0 + 8);
    ret = (*(u32 **)((u8 *)owner + 0x28))[*(s16 *)((u8 *)arg0 + 0x10) + 1];
    if (ret != 0) {
        return ret;
    }
    for (p = *(void **)((u8 *)owner + 0x1C); p != NULL; p = *(void **)((u8 *)p + 0x1C)) {
        if ((s32)*(u8 *)((u8 *)p + 3) != 0x53) {
            break;
        }
    }
    if (p == NULL) {
        return 0;
    }
    return **(u32 **)((u8 *)p + 0x28);
}

void fn_80013BD4(void) {
    extern void *lbl_80367190;
    void fn_8000D3EC(void *, void *);

    void *name;
    s32 offset;
    void *entry;
    u8 *node;

    node = (u8 *)lbl_80367190;
    while (node != NULL) {
        if ((s32)node[0] == 'c' && (s32)node[1] == 'm' &&
            (s32)node[2] == 'b' && (s32)node[3] == 'S') {
            offset = 0;
            node[3] = ' ';

            for (;;) {
                entry = *(void **)(*(u8 **)(node + 0x28) + offset);
                if (entry == NULL) {
                    break;
                }

                name = *(void **)entry;
                if (name != NULL) {
                    fn_8000D3EC(name, entry);
                }
                offset += 4;
            }
        }
        node = *(u8 **)(node + 0x1C);
    }
}

s32 fn_80013C78(char *arg0) {
    void fn_8000D1D0(u32);
    extern void *lbl_80367190;
    void *node;
    void *last;
    s32 i;
    u32 **list;

    if (arg0 == NULL || *arg0 == 0) {
        last = lbl_80367190;
        while (M2C_FIELD(last, void **, 0x1C) != NULL) {
            last = M2C_FIELD(last, void **, 0x1C);
        }
        node = last;
        if (node == NULL) {
            return 0;
        }
    } else {
        for (node = lbl_80367190; node != NULL; node = M2C_FIELD(node, void **, 0x1C)) {
            if (fn_802342B8((u8 *)node + 4, arg0) == 0) {
                goto found;
            }
        }
        return 0;
    }
found:
    M2C_FIELD(node, u8 *, 3) = 0x53;
    for (i = 0; ; i++) {
        list = M2C_FIELD(node, u32 ***, 0x28);
        if (list[i] == NULL) {
            break;
        }
        if (*list[i] != 0) {
            fn_8000D1D0(*list[i]);
        }
    }
    return 1;
}

s32 fn_80013D4C(void)
{
    extern void *lbl_80367190;
    extern u16 lbl_80367196;
    extern s32 lbl_803671A8;
    extern void fn_8000D1D0(void *);
    extern void fn_8005C7E8(void *);

    u8 *node;
    u8 *prev;
    u8 *next;
    void *entry;
    void *target;
    s32 offset;

    node = (u8 *)lbl_80367190;
    lbl_803671A8 = 0;

    while ((next = *(u8 **)(node + 0x1C)) != 0) {
        node = next;
    }

    if (node == 0) {
        lbl_803671A8 = 1;
        return 0;
    }

    lbl_80367196 -= *(u16 *)(node + 0x22);

    offset = 0;

    while (1) {
        entry = *(void **)(*(u8 **)(node + 0x28) + offset);

        if (entry == 0) {
            break;
        }

        target = *(void **)entry;

        if (target != 0) {
            fn_8000D1D0(target);
        }

        offset += 4;
    }

    prev = (u8 *)lbl_80367190;

    if (prev != node) {
        while ((next = *(u8 **)(prev + 0x1C)) != node) {
            prev = next;
        }

        *(u32 *)(prev + 0x1C) = 0;
    }

    fn_8005C7E8(node);

    return 1;
}

void fn_80013F48(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
}

s32 fn_80013F6C(void *arg0, s32 arg1) {
    extern u8 lbl_80267E28[];
    extern s32 lbl_803671A8;
    extern void *fn_800C4638(s32, void *, s32);

    lbl_803671A8 = 0;

    M2C_FIELD(arg0, void **, 0) =
        fn_800C4638(arg1 << 2, lbl_80267E28, 0);

    if (M2C_FIELD(arg0, void **, 0) == NULL) {
        lbl_803671A8 = 4;
        return 0;
    }

    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, void **, 0x18) =
        M2C_FIELD(arg0, void **, 0);

    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x0C) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;

    return 1;
}

void fn_800140B4(void *arg0, u8 arg1) {
    void fn_8000D3EC(void *, void *);
    extern u16 lbl_80367196;
    extern u16 lbl_80367194;
    extern s32 lbl_803671A8;

    s32 i;
    s32 j;
    u8 *self;
    u8 *p;
    u8 *entry;
    u8 *walk;
    u8 a, b, c, d;
    void *ptr;

    self = (u8 *)arg0;
    if (arg1 != 0) {
        for (i = 0;; i += 4) {
            ptr = *(void **)(*(u8 **)(self + 0x28) + i);
            if (ptr == 0) {
                break;
            }
            if (*(void **)ptr != 0) {
                fn_8000D3EC(*(void **)ptr, ptr);
            }
        }
        return;
    }

    if (*(u32 *)(self + 0x24) != 0) {
        *(u32 *)(self + 0x24) = *(u32 *)(self + 0x24) + (u32)self;
    }
    if (*(u32 *)(self + 0x28) != 0) {
        *(u32 *)(self + 0x28) = *(u32 *)(self + 0x28) + (u32)self;
    }
    *(u16 *)(self + 0x20) = lbl_80367196;
    lbl_80367196 = lbl_80367196 + *(u16 *)(self + 0x22);
    if (lbl_80367196 > lbl_80367194) {
        lbl_803671A8 = 8;
        return;
    }

    for (i = 0;; i += 4) {
        p = *(u8 **)(self + 0x28) + i;
        if (*(u32 *)p == 0) {
            break;
        }
        a = p[2];
        b = p[1];
        c = p[0];
        d = p[3];
        p[0] = d;
        p[1] = a;
        p[2] = b;
        p[3] = c;

        *(u32 *)(*(u8 **)(self + 0x28) + i) =
            *(u32 *)(*(u8 **)(self + 0x28) + i) + (u32)self;
        entry = *(u8 **)(*(u8 **)(self + 0x28) + i);

        a = entry[2];
        b = entry[1];
        c = entry[0];
        d = entry[3];
        entry[0] = d;
        entry[1] = a;
        entry[2] = b;
        entry[3] = c;

        a = entry[6];
        b = entry[5];
        c = entry[4];
        d = entry[7];
        entry[4] = d;
        entry[5] = a;
        entry[6] = b;
        entry[7] = c;

        a = entry[0x12];
        d = entry[0x13];
        entry[0x12] = d;
        entry[0x13] = a;

        a = entry[0x10];
        d = entry[0x11];
        entry[0x10] = d;
        entry[0x11] = a;

        if ((s8)entry[0xC] != 0) {
            walk = entry;
            for (j = 0; j < (s8)entry[0xE];) {
                a = walk[0x14];
                j += 1;
                d = walk[0x15];
                walk[0x14] = d;
                walk[0x15] = a;
                walk += 2;
            }
        }

        *(void **)(entry + 8) = self;
        if (*(u32 *)entry != 0) {
            *(u32 *)entry = *(u32 *)entry + (u32)self;
            fn_8000D3EC(*(void **)entry, entry);
        }
        if (*(u32 *)(entry + 4) != 0) {
            *(u32 *)(entry + 4) = *(u32 *)(entry + 4) + (u32)self;
        }
    }
}

void fn_800142B0(s32 arg0) {
    extern s32 lbl_803671A8;
    lbl_803671A8 = arg0;
}

s32 fn_800142B8(void) {
    extern s32 lbl_803671A8;
    return lbl_803671A8;
}

void fn_800142C0(s32 *arg0, s16 *arg1) {
    extern s16 lbl_8036719E;
    extern s32 lbl_803671A0;
    *arg0 = lbl_803671A0;
    *arg1 = lbl_8036719E;
}

s32 fn_800142D4(s32 arg0) {
    extern s32 lbl_803671A4;

    s32 oldValue;

    oldValue = lbl_803671A4;
    lbl_803671A4 = arg0;

    return oldValue;
}

void fn_800142E4(void) {
    void fn_8000A440(s32, void *);
    extern u8 lbl_80284098[];

    fn_8000A440(1, lbl_80284098);
}

s32 fn_80014310(void *arg0) {
    void *fn_80059208(void *, void *);
    void *temp;
    void *val;

    temp = *(void **)((u8 *)arg0 + 4);
    val = *(void **)((u8 *)temp + 4);
    *(void **)((u8 *)arg0 + 4) = (void *) ((u8 *)temp + 8);
    fn_80059208(val, arg0);
    return 1;
}

s32 fn_8001434C(void *arg0) {
    u8 fn_8005BB2C();
    if (fn_8005BB2C() == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80014398(void *arg0) {
    s32 temp_r31;
    void *temp_r3;

    temp_r3 = *(void **)((u8 *)arg0 + 4);
    temp_r31 = *(s32 *)((u8 *)temp_r3 + 4);
    *(void **)((u8 *)arg0 + 4) = (void *) ((u8 *)temp_r3 + 8);
    if (fn_8000D354(temp_r31) == 0U) {
        return 1;
    }
    fn_800C08AC(temp_r31, arg0);
    return 0;
}

s32 fn_80014400(void *arg0) {
    s32 temp_r31;
    void *temp_r3;

    temp_r3 = *(void **)((u8 *)arg0 + 4);
    temp_r31 = *(u16 *)((u8 *)temp_r3 + 0); // Load the 16-bit value directly
    *(void **)((u8 *)arg0 + 4) = (void *) ((u8 *)temp_r3 + 8);
    if (fn_8000D354(temp_r31) == 0U) {
        return 1;
    }
    fn_800C08AC(temp_r31, arg0);
    return 0;
}

s32 fn_80014468(void *arg0)
{
    extern void *fn_8000D354(void *);
    extern void fn_8000C070(void *, s32);

    u8 *obj;
    u8 *data;
    s32 index;
    void *value;

    obj = (u8 *)arg0;
    data = *(u8 **)(obj + 4);

    index = (s16)(*(u32 *)data >> 16);
    value = *(void **)(data + 4);

    *(u8 **)(obj + 4) = data + 8;

    if (fn_8000D354(value) != 0) {
        fn_8000C070(obj, (u8)index);
    }

    return 1;
}

s32 fn_800144D0(void *arg0) {
    u8 fn_80089640();
    if (fn_80089640() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_8001451C(void *arg0) {
    M2C_UNK fn_800C4B8C();
    fn_800C4B8C();
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_80014558(void *arg0) {
    s32 fn_800C50FC(void *, void *);
    void *temp;
    void *a;
    void *b;

    temp = *(void **)((u8 *)arg0 + 4);
    b = *(void **)((u8 *)temp + 8);
    a = *(void **)((u8 *)temp + 4);
    *(void **)((u8 *)arg0 + 4) = (void *) ((u8 *)temp + 0xC);
    fn_800C50FC(a, b);
    return 1;
}

s32 fn_80014594(void *arg0) {
    u8 fn_8008A59C();
    if (fn_8008A59C() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 4);
    return 1;
}

s32 fn_800145E0(void *arg0) {
    fn_8008A290((u8)(*(u32 *)*(void **)((u8 *)arg0 + 4) >> 16),
                 *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 4) + 4));
    *(void **)((u8 *)arg0 + 4) = (void *)((u8 *)*(void **)((u8 *)arg0 + 4) + 8);
    return 1;
}

s32 fn_8001462C(void *arg0)
{
    extern void fn_8008A290(s32, s32);

    u8 *obj;
    u32 *data;
    u32 value;
    s32 index;

    obj = (u8 *)arg0;
    data = *(u32 **)(obj + 4);

    value = data[0];
    index = (value >> 16) & 0xFF;

    fn_8008A290(index, data[1]);

    *(u8 **)(obj + 4) += 8;

    return index == 7;
}

int fn_80014690(void *arg0)
{
    extern u8 lbl_80267FE8[];

    void *object;

    object = *(void **)((u8 *)arg0 + 4);

    fn_800056CC(
        lbl_80267FE8,
        arg0,
        *(u32 *)((u8 *)arg0 + 0x14),
        *(u32 *)((u8 *)object + 4)
    );

    *(void **)((u8 *)arg0 + 4) = (u8 *)object + 8;

    return 1;
}

extern s32 fn_8006785C(s16, s32, void *);
s32 fn_800146E8(void *arg0)
{
    s32 *temp_r3 = (s32 *)arg0;
    s32 *temp_r3_2 = (s32 *)temp_r3[1];
    s16 temp_r4 = (s16)((u32)temp_r3_2[0] >> 16);
    fn_8006785C(temp_r4, temp_r3_2[1], arg0);
    temp_r3[1] = (s32)((s32 *)temp_r3[1] + 2);
    return 1;
}

s32 fn_8001473C(void *arg0)
{
    s32 *temp_r3 = (s32 *)arg0;
    s32 *temp_r3_2 = (s32 *)temp_r3[1];
    s16 temp_r4 = (s16)((u32)temp_r3_2[0] >> 16);
    fn_8006785C(temp_r4, temp_r3_2[1], (void *)temp_r3_2[2]);
    temp_r3[1] = (s32)((s32 *)temp_r3[1] + 3);
    return 1;
}

u32 fn_80014790(u32 arg0) {
    return 0;
}

#pragma global_optimizer off
void main(void) {
    void *OSGetTick(void);
    void fn_800056CC(char *, ...);
    void fn_800059B4(void);
    void fn_800059FC(s32, s32, s32, s32, s32);
    void fn_80005A84(s32, s32);
    void fn_80005C18(void);
    void fn_80005C60(void);
    void fn_80006314(void);
    void fn_80006754(void);
    void fn_80007B04(void);
    void fn_80008B94(void);
    void fn_8000A280(void);
    void fn_8000A284(f32, f32, f32, f32);
    void fn_8000A2A8(s32);
    void fn_8000A860(s32, s32, s32);
    void fn_8000C194(s32);
    void fn_8000CC88(void);
    void fn_8000CD80(void);
    void fn_8000CF4C(void);
    void fn_8000D5C8(void);
    void fn_80010FF0(void);
    void fn_800142E4(void);
    void fn_80014790(void);
    void fn_80014EA8(void);
    void fn_80025970(void);
    void fn_80025BA0(void);
    void fn_8005AE78(void);
    void fn_8005BCF0(void);
    void fn_80066124(s32);
    void fn_800675E8(s32);
    void fn_80067DA4(s32);
    void fn_80067EDC(s32);
    void fn_8006E568(s32);
    void fn_8006E660(void);
    void fn_8006E748(void);
    void fn_80078DF8(void);
    void fn_800895B8(void);
    void fn_8009B738(s32, s32);
    void fn_8009B900(s32, s32);
    void fn_8009CF28(void);
    void fn_8009D0E8(s32, s32);
    void fn_8009D95C(s32, s32);
    void fn_8009E588(void);
    void fn_8009E5B4(void);
    void fn_8009E5F8(void);
    void fn_8009E6B4(void);
    void fn_8009E6F0(void);
    void fn_8009E71C(void);
    void fn_8009E774(void);
    void fn_8009E7A0(void);
    void fn_8009E7DC(void);
    void fn_8009E808(void);
    void fn_8009E844(void);
    void fn_8009E9A0(void);
    void fn_8009E9D0(void);
    void fn_8014702C(s32);
    void fn_801C9460(void);
    void fn_801ED52C(s32);
    void fn_801FBC48(void);
    void fn_802052E8(void);
    s32 fn_80209FD4(void);
    void fn_8020A51C(void);
    void fn_8020A558(void *, void *, s32, void *, s32, s32, s32);
    void fn_8020A9E0(void *);
    void fn_80224658(s32);
    void fn_80234450(void *, void *);
    void fn_8023A504(s32, s32, void *);
    extern u8 lbl_802AEE40[];
    extern char lbl_80268000[];
    extern s32 lbl_803671B4;
    extern u8 lbl_803671B8;
    extern u8 lbl_803671B0;
    extern s32 lbl_803682A4;
    extern u8 lbl_80367700;
    extern u8 lbl_80367701;
    extern u8 lbl_80367702;
    extern u8 lbl_80367704;
    extern u8 lbl_80367705;
    extern u8 lbl_80367706;
    extern f32 lbl_80368C4C;
    extern f32 lbl_80368C64;
    extern f32 lbl_80368C70;
    extern f32 lbl_80368C74;

    typedef struct { u32 pad; } Thread;
    u8 *base;
    s32 sp8;
    s32 tmp;
    u32 stack;

    base = lbl_802AEE40;
    lbl_803671B4 = fn_80209FD4();
    fn_802052E8();
    fn_80025BA0();
    fn_801C9460();
    fn_8006E568(5);
    fn_801FBC48();
    stack = (u32)base + 0x1698;
    fn_8020A558(base + 0x1380, fn_80014790, 0, (void *)(stack + 0x1000), 0x1000, 0x10, 1);
    fn_8020A9E0(base + 0x1380);
    fn_8000D5C8();
    fn_8005BCF0();
    fn_80006314();
    fn_80005A84(0, 0x800);
    fn_800059FC(0x10, 0x20, 0x240, 0x1A0, 0x10);
    fn_800059B4();
    base[0x1320] = 0;
    fn_80234450(base + 0x1360, lbl_80268000);
    fn_800056CC(lbl_80268000 + 7,
                *(s8 *)0x80000000, *(s8 *)0x80000001, *(s8 *)0x80000002,
                *(s8 *)0x80000003, *(s8 *)0x80000004, *(s8 *)0x80000005);
    fn_8023A504(0, 2, &sp8);
    OSGetTick();
    fn_8000CF4C();
    OSGetTick();
    fn_8000CD80();
    fn_8000CC88();
    fn_800142E4();
    fn_80078DF8();
    fn_800895B8();
    fn_80005C18();
    fn_8000A2A8(0);
    fn_8000A284(lbl_80368C64, lbl_80368C70, lbl_80368C74, lbl_80368C4C);
    fn_80010FF0();
    fn_8000A280();
    lbl_803671B8 = 0;
    fn_8014702C(0);
    stack = (u32)base + 0x318;
    fn_8020A558((Thread *)base, fn_80014EA8, 0, (void *)(stack + 0x1000), 0x1000, 0x10, 1);
    fn_8020A9E0((Thread *)base);
    fn_8020A51C();
    fn_801ED52C(0);
    fn_80005C60();
    fn_80008B94();
    for (;;) {
        while (lbl_803671B0) {
            fn_8020A51C();
        }
        tmp = lbl_803682A4;
        if (tmp & 2) {
            lbl_803682A4 = tmp & ~2;
            fn_80066124(0);
        } else {
            fn_8009E9D0();
            fn_8006E748();
            fn_8000C194(5);
            fn_80224658(0);
            fn_8009E7DC();
            fn_800675E8(0);
            fn_8009E7A0();
            if (lbl_80367701) {
                fn_8009D95C(0x10, 0x188);
            }
            if (lbl_80367702) {
                fn_8009D0E8(0x160, 0x10);
            }
            if (lbl_80367704) {
                fn_8009CF28();
            }
            if (lbl_80367705) {
                fn_8009B900(0x100, 0x10);
            }
            if (lbl_80367700) {
                fn_8000A860(0x10, 0x10, 0xC);
            }
            if (lbl_80367706) {
                fn_8009B738(0xB8, 0x188);
            }
            fn_8009E5F8();
            fn_80067EDC(0);
            fn_8009E774();
            fn_80007B04();
            fn_8009E71C();
            fn_80067DA4(0);
            fn_8000C194(6);
            fn_8000C194(7);
            fn_8009E6F0();
            fn_8009E6B4();
            tmp = lbl_803682A4;
            if (tmp & 4) {
                lbl_803682A4 = tmp & ~4;
                lbl_803682A4 = lbl_803682A4 | 2;
            }
        }
        fn_8009E5B4();
        fn_80025970();
        fn_80008B94();
        fn_8009E844();
        fn_8000C194(2);
        fn_8000C194(3);
        fn_8000C194(4);
        fn_8009E808();
        fn_8009E9A0();
        fn_8009E588();
        fn_80224658(1);
        if (!(lbl_803682A4 & 2)) {
            fn_8006E660();
        }
        fn_80006754();
        fn_8005AE78();
    }
}
#pragma global_optimizer reset
u8 fn_80014E70(void) {
    extern u8 lbl_803671B8;
    return lbl_803671B8;
}

void fn_80014E78(void) {
    extern u8 lbl_803671B8;
    extern void fn_8020A51C(void);
    goto start;
    do {
        /* spin */
    start:
        fn_8020A51C();
    } while (lbl_803671B8 == 0);
}

extern u8 lbl_803671B8;
extern s32 lbl_803671B4;
void fn_80014EA8(void) {
    fn_80146F0C();
    lbl_803671B8 = 1;
    while (1) {
        fn_8020AC68(lbl_803671B4);
        fn_80146D44();
        fn_8020A9E0(lbl_803671B4);
        fn_802107A8();
    }
}

s32 fn_80014EDC(u32 arg0) {
    s32 fn_8000D354(s32);
    s32 fn_8000E0E4(s32);
    extern void *lbl_80367210;
    s32 var_r31;
    u8 *p;
    u8 *q;

    p = (u8 *)lbl_80367210;
    q = p;
    q += (arg0 & 0xFF) << 2;
    var_r31 = *(s32 *)(q + 4);
    if (fn_8000D354(var_r31) != 0U) {
        var_r31 = fn_8000E0E4(var_r31);
    }
    return var_r31;
}

void fn_80014F30(void *arg0, s32 arg1) {
    s8 fn_8017A9DC(s32);
    M2C_FIELD(arg0, s8 *, 0) = fn_8017A9DC(arg1);
    M2C_FIELD(arg0, s8 *, 1) = fn_8017A9DC(arg1);
    M2C_FIELD(arg0, s8 *, 2) = fn_8017A9DC(arg1);
    M2C_FIELD(arg0, s8 *, 3) = fn_8017A9DC(arg1);
}

void fn_80014F94(void *arg0, s32 arg1) {
    M2C_UNK fn_8017A5EC(s32, u8);
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 0));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 1));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 2));
    fn_8017A5EC(arg1, M2C_FIELD(arg0, u8 *, 3));
}

void *fn_80014FF8(void *arg0) {
    void *fn_8000E0E4(void *);
    extern u8 lbl_80268018[];
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r4;
    void *var_r3;

    temp_r0 = *(u8 *)((u8 *)arg0 + 1);
    switch ((s32) temp_r0) {
    case 0:
        var_r4 = 1;
        break;
    case 3:
        var_r4 = 0;
        break;
    default:
        return &lbl_80268018[0x1D];
    }
    temp_r0_2 = *(u8 *)arg0;
    switch ((s32) temp_r0_2) {
    case 0:
        if (var_r4 != 0) {
            var_r3 = &lbl_80268018[0x1D];
        } else {
            var_r3 = &lbl_80268018[0x22];
        }
        return fn_8000E0E4(var_r3);
    case 1:
        if (var_r4 != 0) {
            var_r3 = &lbl_80268018[0x28];
        } else {
            var_r3 = &lbl_80268018[0x2E];
        }
        return fn_8000E0E4(var_r3);
    case 2:
        if (var_r4 != 0) {
            var_r3 = &lbl_80268018[0x34];
        } else {
            var_r3 = &lbl_80268018[0x3A];
        }
        return fn_8000E0E4(var_r3);
    case 3:
        if (var_r4 != 0) {
            var_r3 = &lbl_80268018[0x40];
        } else {
            var_r3 = &lbl_80268018[0x46];
        }
        return fn_8000E0E4(var_r3);
    case 4:
        if (var_r4 != 0) {
            var_r3 = &lbl_80268018[0x4C];
        } else {
            var_r3 = &lbl_80268018[0x52];
        }
        return fn_8000E0E4(var_r3);
    default:
        return &lbl_80268018[0x1D];
    }
}

s32 fn_8001512C(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r3 = arg0 + 0x1F;
    temp_r4 = (arg1 + 0x1F) >> 5;
    temp_r5 = arg2 >> 5;
    temp_r6 = (arg3 + 0x1F) >> 5;

    return ((temp_r3 >> 5) - temp_r4) * (temp_r5 - temp_r6);
}

void fn_8001520C(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, u8 *, 1) = arg1;
    M2C_FIELD(arg0, u8 *, 0) = (u8) (arg1 == 3);
    M2C_FIELD(arg0, s8 *, 2) = -1;
    M2C_FIELD(arg0, s8 *, 3) = -1;
}

void fn_80015234(void **arg0) {
    void fn_80036998(void *, s32);
    s32 fn_80036A24(void *);
    void *fn_80036FD0(void *, s32);
    u8 fn_8003701C(void *);
    void *temp_r31;
    void *var_r30;
    s32 var_r29;

    var_r30 = *arg0;
    while (var_r30 != NULL) {
        if (*(u32 *)((u8 *)var_r30 + 0x188) != 0) {
            for (var_r29 = 0; var_r29 < (s32)fn_8003701C(var_r30); var_r29++) {
                temp_r31 = fn_80036FD0(var_r30, var_r29);
                if (temp_r31 != NULL &&
                    *(u32 *)((u8 *)temp_r31 + 0x190) == *(u32 *)((u8 *)var_r30 + 0x190) &&
                    fn_80036A24(var_r30) < 5 &&
                    fn_80036A24(temp_r31) < 5) {
                    fn_80036998(var_r30, var_r29);
                }
            }
        }
        var_r30 = *(void **)((u8 *)var_r30 + 0x184);
    }
}

void fn_800152F8(s8 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4, s8 arg5, s8 arg6, s8 arg7, void *arg_sp8) {
    M2C_FIELD(arg_sp8, s8 *, 0) = arg0;
    M2C_FIELD(arg_sp8, s8 *, 1) = arg1;
    M2C_FIELD(arg_sp8, s8 *, 2) = arg2;
    M2C_FIELD(arg_sp8, s8 *, 3) = arg3;
    M2C_FIELD(arg_sp8, s8 *, 4) = arg4;
    M2C_FIELD(arg_sp8, s8 *, 5) = arg5;
    M2C_FIELD(arg_sp8, s8 *, 6) = arg6;
    M2C_FIELD(arg_sp8, s8 *, 7) = arg7;
}

#pragma global_optimizer off
void fn_80015320(u8 arg0, u8 *arg1) {
    extern u8 lbl_80330708[];
    u8 var_r5;
    u8 r6;
    u8 var_r0;
    u8 var_r0_2;
    u8 *a;

    var_r5 = 0;
    a = arg1;
    *a++ = var_r5;
    *a++ = var_r5;
    *a++ = var_r5;
    *a++ = var_r5;
    *a++ = var_r5;
    *a++ = var_r5;
    *a++ = var_r5;
    *a = var_r5;
    r6 = lbl_80330708[0x11];
    switch (arg0) {
    case 0:
        arg1[r6] = 1;
        return;
    case 1:
        if (r6 == 0) {
            var_r5 = var_r5;
            goto case1_after;
        }
        if (r6 == 1) {
            var_r5 = 1;
            goto case1_after;
        }
        var_r5 = 2;
    case1_after:
        if ((u8)var_r5 == 1) {
            arg1[0] = 1;
        }
        if ((u32)(((u32)(1 - r6) | (u32)(r6 - 1)) >> 31) == 1) {
            arg1[1] = 1;
        }
        if (r6 == 2) {
            var_r0 = 0;
        } else if (r6 == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 2;
        }
        if ((u8)var_r0 == 1) {
            arg1[2] = 1;
        }
        if (r6 == 3) {
            var_r0_2 = 0;
        } else if (r6 == 1) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 2;
        }
        if ((u8)var_r0_2 == 1) {
            arg1[3] = 1;
        }
        return;
    case 2:
        if (r6 == 0) {
            var_r5 = var_r5;
            goto case2_after;
        }
        if (r6 == 1) {
            var_r5 = 1;
            goto case2_after;
        }
        var_r5 = 2;
    case2_after:
        if ((u8)var_r5 != 1) {
            arg1[0] = 1;
        }
        if ((u32)(((u32)(1 - r6) | (u32)(r6 - 1)) >> 31) != 1) {
            arg1[1] = 1;
        }
        if (r6 == 2) {
            var_r0 = 0;
        } else if (r6 == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 2;
        }
        if ((u8)var_r0 != 1) {
            arg1[2] = 1;
        }
        if (r6 == 3) {
            var_r0_2 = 0;
        } else if (r6 == 1) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 2;
        }
        if ((u8)var_r0_2 != 1) {
            arg1[3] = 1;
        }
        return;
    case 3:
        arg1[0] = 1;
        arg1[1] = 1;
        arg1[2] = 1;
        arg1[3] = 1;
        return;
    case 4:
        arg1[0] = 1;
        arg1[5] = 1;
        return;
    case 5:
        arg1[0] = 1;
        arg1[1] = 1;
        arg1[2] = 1;
        arg1[3] = 1;
        arg1[4] = 1;
        arg1[5] = 1;
        arg1[6] = 1;
        arg1[7] = 1;
        return;
    }
}

char *fn_80015574(s32 arg0)
{
    extern u8 lbl_80268018[];

    switch ((u32)arg0) {
    case 0:
        return (char *)lbl_80268018 + 0x58;

    case 1:
        return (char *)lbl_80268018 + 0x5F;

    case 2:
        return (char *)lbl_80268018 + 0x65;

    case 3:
        return (char *)lbl_80268018 + 0x6B;

    case 5:
        return (char *)lbl_80268018 + 0x73;

    case 6:
        return (char *)lbl_80268018 + 0x7A;

    case 4:
    default:
        if (arg0 >= 0) {
            return (char *)lbl_80268018 + 0x83;
        }
        return (char *)lbl_80268018 + 0x7F;
    }
}

#pragma global_optimizer reset
s32 fn_80015610(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 temp_r3;

    temp_r0 = M2C_FIELD(arg0, u8 *, 8);
    temp_r3 = M2C_FIELD(arg1, u8 *, 8);
    if (temp_r0 == temp_r3) {
        return 0;
    }
    if ((temp_r0 == 1) || (temp_r3 == 1)) {
        return 1;
    }
    return 2;
}

s32 fn_80015648(u8 arg0, u8 arg1) {
    if (arg0 == arg1) {
        return 0;
    }
    if ((arg0 == 1) || (arg1 == 1)) {
        return 1;
    }
    return 2;
}

s32 fn_80015680(void **arg0) {
    s32 count;
    void *node;

    node = *arg0;
    count = 0;
    goto loop_2;
loop_1:
    node = *(void **)((s32)node + 0x184);
    count += 1;
loop_2:
    if (node != NULL) {
        goto loop_1;
    }
    return count;
}

void fn_800156A0(void *arg0, void *arg1) {
    void *temp_r3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;

    temp_r5 = M2C_FIELD(arg1, void **, 0x184);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, void **, 0x180) = (void *) M2C_FIELD(arg1, void **, 0x180);
    } else {
        M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0x180);
        temp_r5_2 = M2C_FIELD(arg0, void **, 4);
        if (temp_r5_2 != NULL) {
            M2C_FIELD(temp_r5_2, s32 *, 0x184) = 0;
        }
    }
    temp_r5_3 = M2C_FIELD(arg1, void **, 0x180);
    if (temp_r5_3 != NULL) {
        M2C_FIELD(temp_r5_3, void **, 0x184) = (void *) M2C_FIELD(arg1, void **, 0x184);
    } else {
        M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(arg1, void **, 0x184);
        temp_r3 = M2C_FIELD(arg0, void **, 0);
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s32 *, 0x180) = 0;
        }
    }
    M2C_FIELD(arg1, void **, 0x180) = NULL;
    M2C_FIELD(arg1, void **, 0x184) = NULL;
}

void fn_80015718(void *arg0, void *arg1) {
    void fn_8003B6C4(void *, void *);
    void *list;
    void *node;
    s32 kind;
    void *tail;

    list = arg0;
    node = arg1;
    fn_8003B6C4(node, list);
    kind = *(u8 *)((u8 *)list + 8);
    if (kind == 6) {
        goto case6;
    }
    if (kind >= 6) {
        goto done_sw;
    }
    if (kind >= 5) {
        goto case5;
    }
    if (kind >= 0) {
        goto case04;
    } else {
        goto done_sw;
    }
    goto done_sw;
case04:
    *(u32 *)((u8 *)node + 0x1A0) &= ~0x18;
    goto done_sw;
case5:
    *(u32 *)((u8 *)node + 0x1A0) |= 0x18;
    *(u32 *)((u8 *)node + 0x1A0) &= ~0x8;
    goto done_sw;
case6:
    *(u32 *)((u8 *)node + 0x1A0) |= 0x8;
done_sw:
    tail = *(void **)((u8 *)list + 4);
    if (tail == NULL) {
        *(void **)list = node;
        *(void **)((u8 *)list + 4) = node;
    } else {
        *(void **)((u8 *)tail + 0x184) = node;
        *(void **)((u8 *)node + 0x180) = tail;
        *(void **)((u8 *)list + 4) = node;
    }
}

void fn_800157DC(void *arg0, void *arg1) {
    void fn_8003B6C4(void *, void *);
    void *list;
    void *node;
    u8 kind;
    void *head;

    list = arg0;
    node = arg1;
    fn_8003B6C4(node, list);
    kind = *(u8 *)((u8 *)list + 8);
    switch (kind) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        *(u32 *)((u8 *)node + 0x1A0) &= ~0x18;
        break;
    case 5:
        *(u32 *)((u8 *)node + 0x1A0) |= 0x18;
        *(u32 *)((u8 *)node + 0x1A0) &= ~0x8;
        break;
    case 6:
        *(u32 *)((u8 *)node + 0x1A0) |= 0x8;
        break;
    }
    head = *(void **)list;
    if (head == NULL) {
        *(void **)list = node;
        *(void **)((u8 *)list + 4) = node;
    } else {
        *(void **)((u8 *)head + 0x180) = node;
        *(void **)((u8 *)node + 0x184) = head;
        *(void **)list = node;
    }
}

void fn_800158A0(void *arg0) {
    extern M2C_UNK lbl_802B14E4;
    s32 var_ctr;
    u32 temp_r4;
    u8 var_r7;
    void *var_r6;

    M2C_FIELD(arg0, void **, 0) = NULL;
    var_r7 = 1;
    M2C_FIELD(arg0, void **, 4) = NULL;
    var_ctr = 0x9F;
loop_1:
    if (var_r7 != 0) {
        var_r6 = &lbl_802B14E4 + ((var_r7 - 1) * 0x280);
    } else {
        var_r6 = NULL;
    }
    if (((u8) M2C_FIELD(arg0, u8 *, 8) == (u8) M2C_FIELD(M2C_FIELD(var_r6, void **, 0x190), u8 *, 8)) && ((temp_r4 = M2C_FIELD(var_r6, u32 *, 0x180), ((temp_r4 == 0U) == 0)) || ((u32) M2C_FIELD(var_r6, u32 *, 0x184) != 0U))) {
        if (temp_r4 == 0U) {
            M2C_FIELD(arg0, void **, 0) = var_r6;
        } else if ((u32) M2C_FIELD(var_r6, u32 *, 0x184) == 0U) {
            M2C_FIELD(arg0, void **, 4) = var_r6;
        }
        if (((void *) M2C_FIELD(arg0, void **, 0) == NULL) || ((void *) M2C_FIELD(arg0, void **, 4) == NULL)) {
            goto block_13;
        }
        return;
    }
block_13:
    var_r7 += 1;
    var_ctr -= 1;
    if (var_ctr == 0) {
        return;
    }
    goto loop_1;
}

void fn_8001594C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = arg1;
}

void fn_80015960(s32 arg0) {
    void fn_8000CAA0(void *, s32);
    extern u8 lbl_80284128[16];
    fn_8000CAA0(lbl_80284128, arg0);
}

void fn_80015A2C(void *arg0) {
    void fn_8000C188(void *);
    void fn_80015320(s32, void *, s32);
    u8 fn_8004F128();
    extern u8 lbl_802B14E4[];
    u8 sp8[8];
    s32 temp;
    s32 var_r30;
    void *var_r3;
    u8 var_r0;

    temp = *(s32 *)((u8 *)arg0 + 0x60);
    *(s32 *)((u8 *)arg0 + 0x60) = temp + 1;
    fn_80015320(5, sp8, temp);
    var_r30 = 1;
loop_1:
    if ((u8)var_r30 != 0) {
        var_r3 = lbl_802B14E4 + ((u8)var_r30 - 1) * 0x280;
    } else {
        var_r3 = NULL;
    }
    if ((*(u32 *)((u8 *)var_r3 + 0x188) != 0) && (sp8[*(u8 *)(*(u8 **)((u8 *)var_r3 + 0x190) + 8)] != 0) && (fn_8004F128() == 0)) {
        var_r0 = 0;
    } else {
        var_r30 += 1;
        if ((s32)var_r30 > 0x9F) {
            var_r0 = 1;
        } else {
            goto loop_1;
        }
    }
    if ((var_r0 != 0) || (*(s32 *)((u8 *)arg0 + 0x60) > 0x4650)) {
        fn_8000C188(arg0);
    }
}

void fn_80015C18(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_80184C7C(M2C_UNK, M2C_UNK, M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r31;
    void *var_r3;

    fn_80015320(3, &sp8);
    var_r31 = 1;
    do {
        if (var_r31 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r31 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0) && ((u8) M2C_FIELD(var_r3, u8 *, 2) != 0)) {
            fn_80184C7C(0, 8, 0);
        }
        var_r31 += 1;
    } while ((s32) var_r31 <= 0x9F);
}

void fn_80015CBC(void) {
    M2C_UNK *fn_80015320(M2C_UNK, M2C_UNK *);
    void fn_8003A064(void);
    void fn_8007C3BC(void);
    void fn_8007C4D4(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r31;
    void *var_r3;

    fn_80015320(4, &sp8);
    var_r31 = 1;
    do {
        if (var_r31 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r31 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8003A064();
            fn_8007C3BC();
            fn_8007C4D4(0x100);
        }
        var_r31 += 1;
    } while ((s32)var_r31 <= 0x9F);
}

void fn_80015D54(void) {
    M2C_UNK *fn_80015320(M2C_UNK, M2C_UNK *);
    void fn_8003A114(void);
    void fn_8007C3BC(void);
    void fn_8007C4D4(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r31;
    void *var_r3;

    fn_80015320(3, &sp8);
    var_r31 = 1;
    do {
        if (var_r31 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r31 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8003A114();
            fn_8007C3BC();
            fn_8007C4D4(0x108);
        }
        var_r31 += 1;
    } while ((s32)var_r31 <= 0x9F);
}

void fn_80015DEC(void) {
    void fn_80015320(s32, void *);
    void fn_80050C50(f32, f32, f32);
    extern u8 lbl_802B14E4[];
    extern f32 lbl_80368C78;
    u8 sp8[8];
    s32 temp;
    u8 *unit;
    s32 i;

    fn_80015320(3, sp8);
    i = 1;
    do {
        if ((u8)i != 0) {
            unit = lbl_802B14E4 + ((u8)i - 1) * 0x280;
        } else {
            unit = NULL;
        }
        if ((M2C_FIELD(unit, u32 *, 0x188) != 0) && (sp8[M2C_FIELD(M2C_FIELD(unit, void **, 0x190), u8 *, 8)] != 0)) {
            fn_80050C50(lbl_80368C78 + (f32)(s32)M2C_FIELD(unit, f32 *, 4), lbl_80368C78 + (f32)(s32)M2C_FIELD(unit, f32 *, 8), lbl_80368C78);
        }
        i += 1;
    } while (i <= 0x9F);
}

void fn_80015ED4(void) {
    void fn_80015320(s32, u8 *);
    void fn_8004B218(void);
    void fn_8004B984(void);
    void fn_8004C108(void);
    void fn_8004D370(void);
    void fn_8004D3A4(u8 *);
    void fn_8004DC5C(s32);
    u32 fn_80055D94(s32);
    extern u8 lbl_802B14E4[];
    extern s32 lbl_803682A4;
    u8 sp8[4];
    u8 *pBase;
    s32 i;
    u8 *entry;
    u8 *sub;

    if (fn_80055D94(0x200) == 0U && !(lbl_803682A4 & 2)) {
        fn_8004D370();
        fn_8004C108();
        fn_8004B218();
        fn_80015320(3, sp8);
        pBase = lbl_802B14E4;
        i = 1;
        do {
            if ((u8)i != 0) {
                entry = pBase + ((u8)i - 1) * 0x280;
            } else {
                entry = NULL;
            }
            if (*(u32 *)(entry + 0x188) != 0U) {
                sub = *(u8 **)(entry + 0x190);
                if (sp8[sub[8]] != 0) {
                    fn_8004D3A4(entry);
                }
            }
            i += 1;
        } while (i <= 0x9F);
        fn_8004B984();
        fn_8004DC5C(1);
    }
}

void fn_80015FA4(void* arg0, void* arg1)
{
    char* ptr0 = (char*)arg0;
    char* ptr1 = (char*)arg1;
    
    int i;
    for (i = 0; i < 8; i++)
    {
        *ptr0++ = *ptr1++;
    }
}

void fn_800160D4(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8004E040();
    u32 fn_80055D94(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    if (fn_80055D94(0x200) == 0U) {
        fn_80015320(3, &sp8);
        var_r29 = 1;
        do {
            if (var_r29 != 0) {
                var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
            } else {
                var_r3 = NULL;
            }
            if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
                fn_8004E040();
            }
            var_r29 += 1;
        } while ((s32) var_r29 <= 0x9F);
    }
}

void fn_80016180(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_80050C90();
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    fn_80015320(3, &sp8);
    var_r29 = 1;
    do {
        if (var_r29 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_80050C90();
        }
        var_r29 += 1;
    } while ((s32) var_r29 <= 0x9F);
}

void fn_8001621C(void) {
    M2C_UNK fn_8004EA60(M2C_UNK);
    extern u16 lbl_802CA264[];
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *var_r3;
    void *var_r3_2;
    void *var_r3_3;

    var_r3 = M2C_FIELD(&lbl_802CA264, void **, 0x3C);
loop_2:
    if (var_r3 != NULL) {
        temp_r31 = M2C_FIELD(var_r3, void **, 0x184);
        fn_8004EA60(0);
        var_r3 = temp_r31;
        goto loop_2;
    }
    var_r3_2 = M2C_FIELD(&lbl_802CA264, void **, 0x48);
loop_5:
    if (var_r3_2 != NULL) {
        temp_r31_2 = M2C_FIELD(var_r3_2, void **, 0x184);
        fn_8004EA60(0);
        var_r3_2 = temp_r31_2;
        goto loop_5;
    }
    var_r3_3 = M2C_FIELD(&lbl_802CA264, void **, 0x54);
loop_8:
    if (var_r3_3 != NULL) {
        temp_r31_3 = M2C_FIELD(var_r3_3, void **, 0x184);
        fn_8004EA60(0);
        var_r3_3 = temp_r31_3;
        goto loop_8;
    }
}

void fn_800163F8(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8004EB14(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    fn_80015320(3, &sp8);
    var_r29 = 1;
    do {
        if (var_r29 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8004EB14(0);
        }
        var_r29 += 1;
    } while ((s32) var_r29 <= 0x9F);
}

void fn_80016498(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8004F5EC(M2C_UNK);
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    fn_80015320(3, &sp8);
    var_r29 = 1;
    do {
        if (var_r29 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8004F5EC(0);
        }
        var_r29 += 1;
    } while ((s32) var_r29 <= 0x9F);
}

void fn_80016538(void)
{
    extern u8 lbl_802CA264[];
    extern char lbl_802680A8[];

    extern s32 fn_80015680(void *);
    extern void fn_800056CC(const char *, ...);
    extern s32 fn_800A8A88(void *);

    u8 *slot;
    u8 *node;
    char *strings;
    s32 index;
    s32 value;
    s32 result;
    s32 field;
    u8 byte0;
    u8 byte1;
    u8 byte2;

    slot = lbl_802CA264;
    index = 0;
    strings = lbl_802680A8;

    value = fn_80015680(slot);

    fn_800056CC(strings + 0x23, index, value);

    do {
        node = *(u8 **)slot;

        while (node != 0) {
            if (*(void **)(node + 0x188) != 0) {
                field = *(s32 *)(node + 0x1A0);
                byte1 = *(u8 *)(node + 0x19F);
                byte0 = *(u8 *)(node + 0x19E);
                byte2 = *(u8 *)(node + 0x198);

                result = fn_800A8A88(*(void **)(node + 0x188));

                fn_800056CC(
                    strings + 0x3B,
                    byte2,
                    (s8)byte0,
                    (s8)byte1,
                    field,
                    result
                );
            } else {
                byte0 = *(u8 *)(node + 0x19E);
                byte1 = *(u8 *)(node + 0x19F);
                byte2 = *(u8 *)(node + 0x198);
                field = *(s32 *)(node + 0x1A0);

                fn_800056CC(
                    strings + 0x59,
                    byte2,
                    (s8)byte0,
                    (s8)byte1,
                    field
                );
            }

            node = *(u8 **)(node + 0x184);
        }

        index++;
        slot += 0xC;
    } while (index < 8);
}

void fn_80016628(s32 arg0) {
    M2C_UNK fn_80015718(M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_800158A0(M2C_UNK *);
    M2C_UNK fn_8003B6F0(M2C_UNK *, s32);
    u8 fn_8003C830(M2C_UNK *, s32);
    extern M2C_UNK lbl_802B14E4;
    extern M2C_UNK lbl_802CA264;
    M2C_UNK *temp_r27;
    M2C_UNK *var_r28;
    M2C_UNK *var_r28_2;
    M2C_UNK *var_r28_3;
    M2C_UNK *var_r31;
    s32 var_r27;
    s32 var_r27_2;
    s32 var_r29;
    s32 var_r29_2;

    fn_8001594C(&lbl_802CA264, 0);
    fn_8001594C(&lbl_802CA264 + 0xC, 1);
    fn_8001594C(&lbl_802CA264 + 0x18, 2);
    fn_8001594C(&lbl_802CA264 + 0x24, 3);
    temp_r27 = &lbl_802CA264 + 0x30;
    fn_8001594C(temp_r27, 4);
    fn_8001594C(&lbl_802CA264 + 0x3C, 5);
    fn_8001594C(&lbl_802CA264 + 0x48, 6);
    fn_8001594C(&lbl_802CA264 + 0x54, 7);
    var_r29 = 0;
    var_r31 = &lbl_802B14E4;
    var_r28 = &lbl_802B14E4;
    do {
        fn_8003B6F0(var_r28, var_r29 + 1);
        fn_80015718(temp_r27, var_r28);
        var_r29 += 1;
        var_r28 += 0x280;
    } while (var_r29 < 0x9F);
    var_r28_2 = &lbl_802B14E4;
    var_r29_2 = 0;
    do {
        fn_800156A0(temp_r27, var_r28_2);
        if (fn_8003C830(var_r28_2, arg0) == 0) {
            fn_80015718(temp_r27, var_r28_2);
        }
        var_r29_2 += 1;
        var_r28_2 += 0x280;
    } while (var_r29_2 < 0x9F);
    var_r27 = 0;
    var_r28_3 = &lbl_802CA264;
    do {
        if (var_r27 != 4) {
            fn_800158A0(var_r28_3);
        }
        var_r27 += 1;
        var_r28_3 += 0xC;
    } while (var_r27 < 8);
    var_r27_2 = 0;
    do {
        if (((u32) M2C_FIELD(var_r31, u32 *, 0x180) == 0U) && ((u32) M2C_FIELD(var_r31, u32 *, 0x184) == 0U)) {
            fn_80015718(&lbl_802CA264 + (M2C_FIELD(M2C_FIELD(var_r31, void **, 0x190), u8 *, 8) * 0xC), var_r31);
        }
        var_r27_2 += 1;
        var_r31 += 0x280;
    } while (var_r27_2 < 0x9F);
}

void fn_800167E4(void *arg0)
{
    extern u8 lbl_802B14E4[];

    void fn_800152F8(s32, s32, s32, s32, s32, s32, s32, s32, void *);
    s32 fn_80105BC0(void *, s32);
    void fn_8003D60C(void *, s32);
    void fn_80016F78(void *);
    void fn_8003B6F0(void *, s32);
    void fn_8003CA94(void *, void *);
    void fn_8022C1E8(void *, void *, s32, s32);
    void fn_8001C5F8(void);

    u8 flags[8];
    u8 savedIds[8];
    void *savedUnits[8];

    u8 temp[0x1CC];
    u8 list1[0x20];
    u8 list2[0x20];

    u8 *unit;
    u8 *unitData;
    u8 *base;

    s32 i;
    s32 count;
    s32 type;
    s32 savedCount;

    base = lbl_802B14E4;
    savedCount = 0;

    fn_800152F8(0, 1, 1, 1, 0, 0, 0, 0, flags);

    for (i = 1; i <= 0x9F; i++) {
        if ((u8)i != 0) {
            unit = base + ((u8)i - 1) * 0x280;
        } else {
            unit = 0;
        }

        if (*(s32 *)(unit + 0x188) != 0) {
            unitData = *(u8 **)(unit + 0x190);
            type = unitData[8];

            if (flags[type] != 0) {
                if ((u8)fn_80105BC0(unit + 0x1BC, 0x59) != 0) {
                    savedUnits[savedCount] = unit;
                    savedIds[savedCount] = type;
                    savedCount++;

                    fn_8003D60C(unit, 7);
                }
            }
        }
    }

    fn_80016F78(temp);
    fn_8003B6F0(temp, -1);

    unit = base;

    for (i = 0; i < 0x9F; i++) {
        unitData = *(u8 **)(unit + 0x190);
        type = unitData[8];

        if (type == 0) {
            fn_8003CA94(temp, arg0);
        } else if (type >= 1 && type < 8) {
            if (type >= 5) {
                fn_8003CA94(unit, arg0);
            } else {
                fn_8003CA94(temp, arg0);
            }
        }

        unit += 0x280;
    }

    for (i = 0; i < savedCount; i++) {
        fn_8003D60C(savedUnits[i], savedIds[i]);
    }

    fn_8022C1E8(list1, fn_8001C5F8, 8, 4);
    fn_8022C1E8(list2, fn_8001C5F8, 8, 4);
}

s32 fn_800169A8(s32 arg0, s16 arg1) {
    M2C_UNK fn_800C428C(s32);
    M2C_UNK fn_8022C1E8(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
    extern M2C_UNK fn_8001C5F8;
    s32 temp_cr0_eq;

    temp_cr0_eq = arg0 == 0;
    if (temp_cr0_eq == 0) {
        if ((temp_cr0_eq == 0) && (temp_cr0_eq == 0) && (temp_cr0_eq == 0) && (temp_cr0_eq == 0) && (temp_cr0_eq == 0) && (temp_cr0_eq == 0)) {
            fn_8022C1E8(arg0 + 0x1EC, &fn_8001C5F8, 8, 4);
            fn_8022C1E8(arg0 + 0x1CC, &fn_8001C5F8, 8, 4);
        }
        if (arg1 > 0) {
            fn_800C428C(arg0);
        }
    }
    return arg0;
}

void fn_80016A3C(s32 arg0) {
    extern void* lbl_802B14E4;
    extern void fn_8003CA94(void*, s32);

    void* var_r31 = &lbl_802B14E4;
    s32 var_r30 = 0;
    do {
        fn_8003CA94(var_r31, arg0);
        var_r30 += 1;
        var_r31 = (char*)var_r31 + 0x280;
    } while (var_r30 < 0x9F);
}

s32 fn_80016A9C(s32 arg0) {
    s32 fn_80037710(s32);
    extern u32 lbl_802CA264[];
    u32 v;

    v = lbl_802CA264[arg0 * 3];
    if (v != 0U) {
        return fn_80037710(v);
    }
    return 0;
}

void fn_80016ADC(void) {
    M2C_UNK fn_80015320(M2C_UNK, M2C_UNK *);
    M2C_UNK fn_8004DF04();
    M2C_UNK fn_8004E178();
    extern M2C_UNK lbl_802B14E4;
    M2C_UNK sp8;
    u8 var_r29;
    void *var_r3;

    fn_8004DF04();
    fn_80015320(3, &sp8);
    var_r29 = 1;
    do {
        if (var_r29 != 0) {
            var_r3 = &lbl_802B14E4 + ((var_r29 - 1) * 0x280);
        } else {
            var_r3 = NULL;
        }
        if (((u32) M2C_FIELD(var_r3, u32 *, 0x188) != 0U) && ((u8) *(&sp8 + M2C_FIELD(M2C_FIELD(var_r3, void **, 0x190), u8 *, 8)) != 0)) {
            fn_8004E178();
        }
        var_r29 += 1;
    } while ((s32) var_r29 <= 0x9F);
}

void *fn_80016BDC(void) {
    u32 fn_8000D354(void);
    extern u8 lbl_802B14E4[];
    u8 *p;
    s32 i;
    u32 id;
    u32 v;

    id = fn_8000D354();
    if (id == 0U) {
        return NULL;
    }
    p = lbl_802B14E4;
    for (i = 0; i < 0x9F; i++) {
        v = *(u32 *)(p + 0x188);
        if (v != 0U && v == id) {
            return &lbl_802B14E4[i * 0x280];
        }
        p += 0x280;
    }
    return NULL;
}

s32 fn_80016C58(s32 arg0)
{
    s32 r3;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    s32 r10;
    s32 r11;
    s32 r12;
    
    if (arg0 < 0) {
        arg0 = 0;
    }
    
    if (arg0 > 0x7F) {
        return 0x7F;
    }
    
    if (arg0 == 0) {
        return 0;
    }

    // Handle the upper bits (shifted by 4)
    r12 = 0;
    r4 = 1;
    r5 = arg0 >> 4;
    while (r5 != 0) {
        if ((r5 & 1) != 0) {
            r12 = r12 + r4;
        }
        r5 >>= 1;
        r4 <<= 1;
    }
    
    // Handle the lower bits
    r6 = 0;
    r8 = 0x10;
    r5 = arg0 & 0xF;
    while (r5 != 0) {
        if ((r5 & 1) != 0) {
            r6 += r8;
        }
        r5 >>= 1;
        r8 <<= 1;
    }
    
    // Combine results
    r9 = (r12 << 5) | r6;
    
    // Final calculation based on range
    if (arg0 < 0x40) {
        s32 temp = 0;
        s32 loop_count = 1;
        while (temp != arg0) {
            temp += loop_count++;
        }
        return r9 + (temp * 2);
    } else {
        s32 temp = 0;
        s32 loop_count = 1;
        while (temp != 0x3F) {
            temp += loop_count++;
        }
        return (r9 + (temp * 2)) + (arg0 - 0x3F);
    }
}

void fn_80016DE0(void) {
    M2C_UNK fn_80015718(M2C_UNK *, M2C_UNK *);
    M2C_UNK fn_8003B6F0(M2C_UNK *, s32);
    extern M2C_UNK lbl_802B14E4;
    extern M2C_UNK lbl_802CA264;
    M2C_UNK *temp_r30;
    M2C_UNK *var_r31;
    s32 var_r29;

    fn_8001594C(&lbl_802CA264, 0);
    fn_8001594C(&lbl_802CA264 + 0xC, 1);
    fn_8001594C(&lbl_802CA264 + 0x18, 2);
    fn_8001594C(&lbl_802CA264 + 0x24, 3);
    temp_r30 = &lbl_802CA264 + 0x30;
    fn_8001594C(temp_r30, 4);
    fn_8001594C(&lbl_802CA264 + 0x3C, 5);
    fn_8001594C(&lbl_802CA264 + 0x48, 6);
    fn_8001594C(&lbl_802CA264 + 0x54, 7);
    var_r29 = 0;
    var_r31 = &lbl_802B14E4;
    do {
        fn_8003B6F0(var_r31, var_r29 + 1);
        fn_80015718(temp_r30, var_r31);
        var_r29 += 1;
        var_r31 += 0x280;
    } while (var_r29 < 0x9F);
}

#include "common.h"
#include "common.h"

extern void* lbl_80367190;
extern u16 lbl_80367196;
extern s32 lbl_803671A8;
#include "common.h"
extern u32 lbl_802CA264[];
extern u32 lbl_80330708[];
#include "global.h"
#include "common.h"
extern s32 lbl_80367184;
extern s32 lbl_8036718C;
extern void *lbl_80367180;
extern s32 lbl_803671A4;
extern s32 lbl_80367198;
